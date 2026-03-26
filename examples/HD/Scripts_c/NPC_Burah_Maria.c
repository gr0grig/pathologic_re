// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetMainOutdoorScene/1,AddBlankActorFromXml/4,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Angry|W:Staring|W:Rage|W:player|A:GetPosition|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|W:m|W:Can't find lsh animation : |W:.xml|A:add|W:money|W:Money|A:HasItem|W:ui/NPC_Maria.png|W:ui/NPC_Maria_b.png|W:b6q03|W:b6q03MariaGotoNina|W:pt_map_nina|A:AddMark|W:quest_b6_03|W:init_grave|W:oob6Maria1|W:b6q03NinaTalk|W:completed|W:b6q03_diary|A:RemoveItemByType|A:ShowMap|W:oob12Maria1|W:oob12Maria2|W:b12q01MariaFinalTalk|W:money2000 is given|W:playsound|W:givemoney|W:game_final|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:mt_maria|W:d12_maria
// @GLOBALS: 0:object:
// @RUN_OP: 0x698
// @RUN_TASK: 10
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa1 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1b5 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x3e8 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x570 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x66e vars=int,int
// @TASK_10: vars=cvector params=0
// @EVENT_7: op=0x6e1 vars=int
// @EVENT_6: op=0x707 vars=
// @EVENT_5: op=0x716 vars=
// @EVENT_45: op=0x723 vars=bool
// @EVENT_0: op=0x72f vars=object
// @PE: 0x51,0x8b,0xa1,0x133,0x19f,0x1b5,0x375,0x3d2,0x3e8,0x51b,0x55a,0x570,0x61e,0x658,0x66e,0x698,0x6e1,0x707,0x723,0x935,0x980,0x986,0x99a,0x9aa,0x9b0,0x9b6,0x9bc,0x9c6,0x9cc,0x9d8,0x9e4,0x9f0,0x9fb,0xa07,0xa13,0xa1f

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_2254();
		var_31_bool = var_26_bool == (int)19160;
		if(var_31_bool != 0) {
			var_32_string = "";
			func_139(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518027);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518028, (int)29772, (int)19161);
			@@@var_0_object:AddReply((int)528396, (int)29772, (int)29771);
			return 0;
		}
		var_57_bool = var_26_bool == (int)29772;
		if(var_57_bool != 0) {
			var_58_string = "";
			func_139(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528397);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528398, (int)-1, (int)29773);
			@@@var_0_object:AddReply((int)528399, (int)-1, (int)29774);
			return 0;
		}
		var_3_string = true;
		var_66_bool = 0;
		func_2395(var_66_bool);
		if(var_66_bool != 0) {
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
		func_2254();
		var_31_bool = var_27_cvector == (int)22521;
		if(var_31_bool != 0) {
			var_32_object = Obj(); var_33_object = Obj();
			var_32_object = var_1_object;
			var_33_object = var_0_object;
			func_2397();
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_2458(var_98_object);
		}
		var_124_bool = var_27_cvector == (int)22528;
		if(var_124_bool != 0) {
			var_125_object = Obj(); var_126_object = Obj();
			var_125_object = var_1_object;
			var_126_object = var_0_object;
			func_2397();
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_object;
			var_128_object = var_0_object;
			func_2458(var_128_object);
		}
		var_130_bool = var_27_cvector == (int)22525;
		if(var_130_bool != 0) {
			var_131_object = Obj(); var_132_object = Obj();
			var_131_object = var_1_object;
			var_132_object = var_0_object;
			func_2432();
		}
		var_136_bool = var_27_cvector == (int)22530;
		if(var_136_bool != 0) {
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_object;
			func_2444(var_138_object);
			var_154_object = Obj(); var_155_object = Obj();
			var_154_object = var_1_object;
			var_155_object = var_0_object;
			func_2492(var_155_object);
			var_175_object = Obj(); var_176_object = Obj();
			var_175_object = var_1_object;
			var_176_object = var_0_object;
			func_2502();
		}
		var_180_bool = var_27_cvector == (int)29751;
		if(var_180_bool != 0) {
			var_181_object = Obj(); var_182_object = Obj();
			var_181_object = var_1_object;
			var_182_object = var_0_object;
			func_2444(var_182_object);
			var_183_object = Obj(); var_184_object = Obj();
			var_183_object = var_1_object;
			var_184_object = var_0_object;
			func_2492(var_184_object);
			var_185_object = Obj(); var_186_object = Obj();
			var_185_object = var_1_object;
			var_186_object = var_0_object;
			func_2502();
		}
		var_188_bool = var_26_bool == (int)22520;
		if(var_188_bool != 0) {
			var_189_bool = 0; var_190_object = Obj();
			var_190_object = var_1_object;
			func_2532(var_190_object);
			var_197_bool = var_189_bool == 0; //@nz
			if(var_197_bool != 0) {
				var_198_object = Obj(); var_199_object = Obj();
				var_198_object = var_1_object;
				var_199_object = var_0_object;
				func_2438();
				var_202_string = "";
				func_415(var_27_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)521326);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)528379, (int)29753, (int)29752);
				return 0;
			}
			var_223_string = "";
			func_415(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521329);
			@@@var_0_object:ClearReplies();
			var_225_bool = 0; var_226_object = Obj();
			var_226_object = var_1_object;
			func_2520(var_226_object);
			if(var_225_bool != 0) {
				@@@var_0_object:AddReply((int)521330, (int)22527, (int)22524);
			}
			var_234_bool = 0;
			var_234_bool = 0;
			var_235_bool = 0; var_236_object = Obj();
			var_236_object = var_1_object;
			func_2544(var_235_bool, var_236_object);
			if(var_235_bool != 0) {
				var_244_bool = 0; var_245_object = Obj();
				var_245_object = var_1_object;
				func_2508(var_245_object);
				if(var_244_bool != 0) {
					var_234_bool = 1;
				}
			}
			if(var_234_bool != 0) {
				@@@var_0_object:AddReply((int)521331, (int)22529, (int)22525);
			}
			@@@var_0_object:AddReply((int)521332, (int)-1, (int)22526);
			return 0;
		}
		var_257_bool = var_26_bool == (int)22529;
		if(var_257_bool != 0) {
			var_258_string = "";
			func_415(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521335);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521336, (int)-1, (int)22530);
			@@@var_0_object:AddReply((int)528376, (int)29750, (int)29749);
			return 0;
		}
		var_267_bool = var_26_bool == (int)29750;
		if(var_267_bool != 0) {
			var_268_string = "";
			func_415(var_27_cvector, "Angry");
			@@@var_0_object:SetMessage((int)528377);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528378, (int)-1, (int)29751);
			return 0;
		}
		var_274_bool = var_26_bool == (int)22527;
		if(var_274_bool != 0) {
			var_275_string = "";
			func_415(var_27_cvector, "Staring");
			@@@var_0_object:SetMessage((int)521333);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528374, (int)29748, (int)29747);
			return 0;
		}
		var_281_bool = var_26_bool == (int)29748;
		if(var_281_bool != 0) {
			var_282_string = "";
			func_415(var_27_cvector, "Staring");
			@@@var_0_object:SetMessage((int)528375);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521334, (int)-1, (int)22528);
			return 0;
		}
		var_288_bool = var_26_bool == (int)29753;
		if(var_288_bool != 0) {
			var_289_string = "";
			func_415(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528380);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528381, (int)29755, (int)29754);
			return 0;
		}
		var_295_bool = var_26_bool == (int)29755;
		if(var_295_bool != 0) {
			var_296_string = "";
			func_415(var_27_cvector, "Staring");
			@@@var_0_object:SetMessage((int)528382);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528383, (int)29757, (int)29756);
			@@@var_0_object:AddReply((int)528386, (int)29760, (int)29759);
			return 0;
		}
		var_305_bool = var_26_bool == (int)29760;
		if(var_305_bool != 0) {
			var_306_string = "";
			func_415(var_27_cvector, "Staring");
			@@@var_0_object:SetMessage((int)528387);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528388, (int)29762, (int)29761);
			return 0;
		}
		var_312_bool = var_26_bool == (int)29762;
		if(var_312_bool != 0) {
			var_313_string = "";
			func_415(var_27_cvector, "Staring");
			@@@var_0_object:SetMessage((int)528389);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528390, (int)29757, (int)29763);
			@@@var_0_object:AddReply((int)528391, (int)29765, (int)29764);
			@@@var_0_object:AddReply((int)528394, (int)-1, (int)29768);
			return 0;
		}
		var_325_bool = var_26_bool == (int)29765;
		if(var_325_bool != 0) {
			var_326_string = "";
			func_415(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528392);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528393, (int)29757, (int)29766);
			return 0;
		}
		var_332_bool = var_26_bool == (int)29757;
		if(var_332_bool != 0) {
			var_333_string = "";
			func_415(var_27_cvector, "Staring");
			@@@var_0_object:SetMessage((int)528384);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521327, (int)-1, (int)22521);
			@@@var_0_object:AddReply((int)528395, (int)-1, (int)29770);
			return 0;
		}
		var_3_string = true;
		var_341_bool = 0;
		func_2395(var_341_bool);
		if(var_341_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1b6";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_2254();
		var_31_bool = var_27_cvector == (int)24381;
		if(var_31_bool != 0) {
			var_32_object = Obj(); var_33_object = Obj();
			var_32_object = var_1_object;
			var_33_object = var_0_object;
			func_2474();
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_2486();
		}
		var_41_bool = var_27_cvector == (int)24390;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_2480();
		}
		var_47_bool = var_26_bool == (int)24380;
		if(var_47_bool != 0) {
			var_48_string = "";
			func_978(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523177);
			@@@var_0_object:ClearReplies();
			var_66_bool = 0; var_67_object = Obj();
			var_67_object = var_1_object;
			func_2579(var_67_object);
			if(var_66_bool != 0) {
				@@@var_0_object:AddReply((int)523178, (int)24382, (int)24381);
			}
			var_77_bool = 0;
			var_77_bool = 0;
			var_78_bool = 0;
			var_78_bool = 0;
			var_79_bool = 0; var_80_object = Obj();
			var_80_object = var_1_object;
			func_2555(var_80_object);
			var_85_bool = var_79_bool == 0; //@nz
			if(var_85_bool != 0) {
				var_86_bool = 0; var_87_object = Obj();
				var_87_object = var_1_object;
				func_2567(var_87_object);
				var_92_bool = var_86_bool == 0; //@nz
				if(var_92_bool != 0) {
					var_78_bool = 1;
				}
			}
			if(var_78_bool != 0) {
				var_93_bool = 0; var_94_object = Obj();
				var_94_object = var_1_object;
				func_2591(var_94_object);
				if(var_93_bool != 0) {
					var_77_bool = 1;
				}
			}
			if(var_77_bool != 0) {
				@@@var_0_object:AddReply((int)523187, (int)42102, (int)24390);
			}
			@@@var_0_object:AddReply((int)523186, (int)-1, (int)24389);
			return 0;
		}
		var_106_bool = var_26_bool == (int)42102;
		if(var_106_bool != 0) {
			var_107_string = "";
			func_978(var_27_cvector, "Rage");
			@@@var_0_object:SetMessage((int)540130);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540131, (int)24391, (int)42103);
			return 0;
		}
		var_113_bool = var_26_bool == (int)24391;
		if(var_113_bool != 0) {
			var_114_string = "";
			func_978(var_27_cvector, "Rage");
			@@@var_0_object:SetMessage((int)523188);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523189, (int)-1, (int)24392);
			return 0;
		}
		var_120_bool = var_26_bool == (int)24382;
		if(var_120_bool != 0) {
			var_121_string = "";
			func_978(var_27_cvector, "Angry");
			@@@var_0_object:SetMessage((int)523179);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523180, (int)24384, (int)24383);
			@@@var_0_object:AddReply((int)540132, (int)-1, (int)42104);
			return 0;
		}
		var_130_bool = var_26_bool == (int)24384;
		if(var_130_bool != 0) {
			var_131_string = "";
			func_978(var_27_cvector, "Rage");
			@@@var_0_object:SetMessage((int)523181);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523182, (int)24386, (int)24385);
			@@@var_0_object:AddReply((int)540133, (int)-1, (int)42105);
			return 0;
		}
		var_140_bool = var_26_bool == (int)24386;
		if(var_140_bool != 0) {
			var_141_string = "";
			func_978(var_27_cvector, "Rage");
			@@@var_0_object:SetMessage((int)523183);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523184, (int)24388, (int)24387);
			@@@var_0_object:AddReply((int)540134, (int)-1, (int)42106);
			return 0;
		}
		var_150_bool = var_26_bool == (int)24388;
		if(var_150_bool != 0) {
			var_151_string = "";
			func_978(var_27_cvector, "Rage");
			@@@var_0_object:SetMessage((int)523185);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523190, (int)-1, (int)24393);
			@@@var_0_object:AddReply((int)523191, (int)-1, (int)24394);
			return 0;
		}
		var_3_string = true;
		var_159_bool = 0;
		func_2395(var_159_bool);
		if(var_159_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x3e9";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_2254();
		var_31_bool = var_26_bool == (int)36906;
		if(var_31_bool != 0) {
			var_32_string = "";
			func_1370(var_27_cvector, "Neutral");
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
			func_1370(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535277);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535278, (int)36957, (int)36954);
			@@@var_0_object:AddReply((int)535279, (int)36957, (int)36955);
			return 0;
		}
		var_70_bool = var_26_bool == (int)36957;
		if(var_70_bool != 0) {
			var_71_string = "";
			func_1370(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535281);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535282, (int)-1, (int)36958);
			@@@var_0_object:AddReply((int)535283, (int)-1, (int)36959);
			return 0;
		}
		var_3_string = true;
		var_79_bool = 0;
		func_2395(var_79_bool);
		if(var_79_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x571";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_cvector)
{
	if((int)1 != 0) {
		func_2254();
		var_31_bool = var_26_int == (int)42560;
		if(var_31_bool != 0) {
			var_32_string = "";
			func_1624(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540551);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540552, (int)-1, (int)42561);
			@@@var_0_object:AddReply((int)540795, (int)-1, (int)42844);
			return 0;
		}
		var_3_string = true;
		var_56_bool = 0;
		func_2395(var_56_bool);
		if(var_56_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x66f";
	
}


task_10_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_int)
{
	var_28_bool = var_26_int == (int)10;
	if(var_28_bool != 0) {
		func_1757();
		var_30_bool = 0;
		var_30_bool = 0;
		var_31_bool = 0;
		func_1978(var_31_bool);
		if(var_31_bool != 0) {
			var_34_bool = 0;
			func_1726(var_34_bool);
			if(var_34_bool != 0) {
				var_30_bool = 1;
			}
		}
		if(var_30_bool != 0) {
			var_51_bool = 0;
			func_1706(var_51_bool);
			if(var_51_bool != 0) {
				var_70_bool = 0; var_71_object = Obj();
				func_2261(Obj());
				var_72_object = var_71_object;
				func_2128(var_70_bool, var_71_object);
			}
		} else {
			func_1721(var_26_int);
			func_1748();
		}
	}
	return 0;
	
}


task_10_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_1939();
	func_1757();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_10_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	StopGroup0();
	func_1757();
	var_27_string = "";
	func_2208("Neutral");
	func_1748();
	return 0;
}


task_10_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_bool)
{
	var_27_bool = var_26_bool;
	if(var_27_bool != 0) {
		func_1748();
	} else {
		var_33_string = "";
		func_2208("Neutral");
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
		func_1939();
		var_30_bool = 0; var_31_object = Obj();
		var_26_object = var_31_object;
		func_1969(var_30_bool, var_31_object);
		EventEnable(0);
		var_44_object = Obj();
		var_26_object = var_44_object;
		func_2756(var_44_object);
		var_594_string = "";
		func_2208("Neutral");
		func_1757();
		func_1748();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_1692(var_25_cvector);
	return 0;
}


func_0(var_0_object, var_51_int, var_52_object)
{
	var_54_object = Obj(); var_55_bool = 0; var_56_int = 0; var_57_bool = 0; var_58_object = Obj(); var_59_bool = 0; var_60_int = 0; var_61_bool = 0;
	var_0_object = var_52_object;
	var_62_bool = 0; var_63_object = Obj(); var_64_float = 0;
	var_52_object = var_63_object;
	func_1983(var_62_bool, var_63_object, (float)70.0);
	var_109_bool = var_62_bool == 0; //@nz
	if(var_109_bool != 0) {
		var_51_int = -2;
		return 8;
	}
	CreateDialog(var_58_object);
	var_110_int = 0;
	func_2389(var_110_int);
	@@var_58_object:SetNPCName(var_110_int);
	var_111_int = 0;
	func_2387(var_111_int);
	@@var_58_object:SetNPCDescription(var_111_int);
	var_112_string = "";
	func_2391(var_112_string);
	@@var_58_object:SetPhoto(var_112_string);
	var_113_string = "";
	func_2393(var_113_string);
	@@var_58_object:SetPhoto2(var_113_string);
	var_114_int = 0;
	func_2733(var_114_int);
	@@var_58_object:SetPlayerName(var_114_int);
	IsOverrideActive(var_59_bool);
	var_122_bool = var_59_bool;
	if(var_122_bool != 0) {
		var_51_int = -2;
		return 8;
	}
	DoDialog(var_58_object);
	var_123_bool = 0; var_124_object = Obj();
	func_2261(Obj());
	var_125_object = var_124_object;
	func_2070(var_123_bool, var_124_object);
	var_218_object = Obj(); var_219_object = Obj();
	var_52_object = var_218_object;
	var_58_object = var_219_object;
	TaskCall(1);
	func_81(var_220_object, var_221_object, var_222_string, var_223_bool, var_218_object, var_219_object);
	TaskReturn();
	@@var_58_object:IsDialogEnd(var_61_bool);
	
Label_63:
	var_267_bool = var_61_bool == 0; //@nz
	if(var_267_bool != 0) {
		sync();
		@@var_58_object:IsDialogEnd(var_61_bool);
		goto Label_63;
	}
	var_52_object = Obj();
	func_2052();
	StopDialog(var_58_object);
	@@var_58_object:GetReturnValue((int)-1);
	var_60_int = var_51_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2305(var_157_object, var_158_int)
{
	var_159_int = 0; var_160_int = 0;
	var_161_object = Obj(); var_162_string = ""; var_163_int = 0;
	var_157_object = var_161_object;
	var_158_int = var_163_int;
	func_1952(var_161_object, "money", var_163_int);
	var_168_bool = var_158_int > (int)0;
	if(var_168_bool != 0) {
		GetInvItemByName(var_160_int, "Money");
		var_170_int = 0; var_171_int = 0;
		var_160_int = var_170_int;
		var_158_int = var_171_int;
		func_2293(var_170_int, var_171_int);
	}
	return 2;
}


func_2052()
{
	var_269_bool = 0; var_270_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_272_bool = 0;
	func_2395(var_272_bool);
	if(var_272_bool != 0) {
	} else {
		HasAnimationTrack(var_270_bool, "head");
		var_274_bool = var_270_bool;
		if(var_274_bool == 0) goto Label_2069;
		UnlookAsync("head");
	}
Label_2069:
	return 2;
	
}


func_2567(var_446_bool)
{
	var_448_int = 0; var_449_string = "";
	func_2277(var_448_int, "game_final");
	var_451_bool = var_448_int == (int)0;
	if(var_451_bool != 0) {
		var_446_bool = 1;
		return 0;
	}
	var_446_bool = 0;
	return 0;
}


func_2579(var_428_bool)
{
	var_430_int = 0; var_431_string = "";
	func_2277(var_430_int, "oob12Maria1");
	var_433_bool = var_430_int == (int)0;
	if(var_433_bool != 0) {
		var_428_bool = 1;
		return 0;
	}
	var_428_bool = 0;
	return 0;
}


func_2324(var_359_bool, var_360_object, var_361_string)
{
	var_362_int = 0; var_363_bool = 0; var_364_int = 0; var_365_bool = 0;
	GetInvItemByName(var_364_int, var_361_string);
	@@var_360_object:HasItem(var_364_int, var_365_bool);
	var_365_bool = var_359_bool;
	return 4;
}


func_2070(var_123_bool, var_124_object)
{
	var_128_int = 0; var_129_int = 0; var_130_int = 0; var_131_int = 0;
	GetVariable("voice_common", var_130_int);
	var_133_int = var_130_int;
	if(var_133_int != 0) {
		var_134_bool = 0; var_135_object = Obj();
		var_124_object = var_135_object;
		func_2128(var_134_bool, var_135_object);
		var_164_bool = var_134_bool == 0; //@nz
		if(var_164_bool != 0) {
			var_165_bool = 0; var_166_object = Obj();
			var_124_object = var_166_object;
			func_2165(var_165_bool, var_166_object);
			var_200_bool = var_165_bool == 0; //@nz
			if(var_200_bool != 0) {
				var_123_bool = 0;
				return 4;
			}
		}
		irand(var_131_int, (int)2);
		var_202_int = var_131_int;
		if(var_202_int != 0) {
			var_205_int = var_130_int + (int)1;
			var_207_int = var_205_int % (int)3;
			SetVariable("voice_common", var_207_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_210_bool = 0; var_211_object = Obj();
		var_124_object = var_211_object;
		func_2165(var_210_bool, var_211_object);
		var_212_bool = var_210_bool == 0; //@nz
		if(var_212_bool != 0) {
			var_213_bool = 0; var_214_object = Obj();
			var_124_object = var_214_object;
			func_2128(var_213_bool, var_214_object);
			var_215_bool = var_213_bool == 0; //@nz
			if(var_215_bool != 0) {
				var_123_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_2126;
	
Label_2126:
	var_123_bool = 1;
	return 4;
	
}


func_1307(var_0_object, var_1_object, var_2_object, var_3_string, var_501_object, var_502_object)
{
	var_0_object = var_502_object;
	var_1_object = var_501_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_508_string = "";
		func_1370(var_502_object, "Neutral");
		@@@var_0_object:SetMessage((int)535231);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535232, (int)36953, (int)36907);
		@@@var_0_object:AddReply((int)535233, (int)-1, (int)36908);
		@@@var_0_object:AddReply((int)535280, (int)-1, (int)36956);
		goto Label_1340;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x51f";
	}
Label_1340:
	var_526_bool = 0;
	func_2395(var_526_bool);
	if(var_526_bool != 0) {

	Label_1344:
		lshWaitForAnimEnd();
		var_527_string = var_3_string;
		if(var_527_string != 0) {
		} else {
			var_528_string = "";
			var_528_string = var_2_object;
			func_2208(var_528_string);
			goto Label_1344;
	}
		PlayAnimation("all", "idle");

	Label_1359:
		WaitForAnimEnd();
		var_531_string = var_3_string;
		if(var_531_string != 0) {
			goto Label_1369;
		}
		PlayAnimation("all", "idle");
		goto Label_1359;
	}
	goto Label_1369;
	
Label_1369:
	return 0;
	
}


func_2331(var_91_bool, var_92_string, var_93_string)
{
	var_94_object = Obj(); var_95_object = Obj();
	FindActor(var_95_object, var_92_string);
	var_96_bool = var_95_object == 0; //@ne
	if(var_96_bool != 0) {
		var_91_bool = 0;
		return 2;
	}
	Trigger(var_95_object, var_93_string);
	var_91_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1566(var_0_object, var_1_object, var_2_object, var_3_string, var_562_object, var_563_object)
{
	var_0_object = var_563_object;
	var_1_object = var_562_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_569_string = "";
		func_1624(var_563_object, "Neutral");
		@@@var_0_object:SetMessage((int)540551);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540552, (int)-1, (int)42561);
		@@@var_0_object:AddReply((int)540795, (int)-1, (int)42844);
		goto Label_1594;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x622";
	}
Label_1594:
	var_584_bool = 0;
	func_2395(var_584_bool);
	if(var_584_bool != 0) {

	Label_1598:
		lshWaitForAnimEnd();
		var_585_string = var_3_string;
		if(var_585_string != 0) {
		} else {
			var_586_string = "";
			var_586_string = var_2_object;
			func_2208(var_586_string);
			goto Label_1598;
	}
		PlayAnimation("all", "idle");

	Label_1613:
		WaitForAnimEnd();
		var_589_string = var_3_string;
		if(var_589_string != 0) {
			goto Label_1623;
		}
		PlayAnimation("all", "idle");
		goto Label_1613;
	}
	goto Label_1623;
	
Label_1623:
	return 0;
	
}


func_2591(var_453_bool)
{
	var_455_int = 0; var_456_string = "";
	func_2277(var_455_int, "oob12Maria2");
	var_458_bool = var_455_int == (int)0;
	if(var_458_bool != 0) {
		var_453_bool = 1;
		return 0;
	}
	var_453_bool = 0;
	return 0;
}


func_804(var_0_object, var_388_int, var_389_object)
{
	var_391_object = Obj(); var_392_bool = 0; var_393_int = 0; var_394_bool = 0; var_395_object = Obj(); var_396_bool = 0; var_397_int = 0; var_398_bool = 0;
	var_0_object = var_389_object;
	var_399_bool = 0; var_400_object = Obj(); var_401_float = 0;
	var_389_object = var_400_object;
	func_1983(var_399_bool, var_400_object, (float)70.0);
	var_402_bool = var_399_bool == 0; //@nz
	if(var_402_bool != 0) {
		var_388_int = -2;
		return 8;
	}
	CreateDialog(var_395_object);
	var_403_int = 0;
	func_2389(var_403_int);
	@@var_395_object:SetNPCName(var_403_int);
	var_404_int = 0;
	func_2387(var_404_int);
	@@var_395_object:SetNPCDescription(var_404_int);
	var_405_string = "";
	func_2391(var_405_string);
	@@var_395_object:SetPhoto(var_405_string);
	var_406_string = "";
	func_2393(var_406_string);
	@@var_395_object:SetPhoto2(var_406_string);
	var_407_int = 0;
	func_2733(var_407_int);
	@@var_395_object:SetPlayerName(var_407_int);
	IsOverrideActive(var_396_bool);
	var_408_bool = var_396_bool;
	if(var_408_bool != 0) {
		var_388_int = -2;
		return 8;
	}
	DoDialog(var_395_object);
	var_409_bool = 0; var_410_object = Obj();
	func_2261(Obj());
	var_411_object = var_410_object;
	func_2070(var_409_bool, var_410_object);
	var_412_object = Obj(); var_413_object = Obj();
	var_389_object = var_412_object;
	var_395_object = var_413_object;
	TaskCall(5);
	func_885(var_414_object, var_415_object, var_416_string, var_417_bool, var_412_object, var_413_object);
	TaskReturn();
	@@var_395_object:IsDialogEnd(var_398_bool);
	
Label_867:
	var_473_bool = var_398_bool == 0; //@nz
	if(var_473_bool != 0) {
		sync();
		@@var_395_object:IsDialogEnd(var_398_bool);
		goto Label_867;
	}
	var_389_object = Obj();
	func_2052();
	StopDialog(var_395_object);
	@@var_395_object:GetReturnValue((int)-1);
	var_397_int = var_388_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2343(var_49_float)
{
	var_50_float = 0; var_51_float = 0;
	GetGameTime(var_51_float);
	var_51_float = var_49_float;
	return 2;
}


func_2603()
{
	var_52_object = Obj(); var_53_object = Obj();
	CreateDiaryEntry(var_53_object, (int)276, (int)2, (int)521337);
	var_57_bool = 0; var_58_object = Obj(); var_59_int = 0;
	var_53_object = var_58_object;
	func_2655(var_57_bool, var_58_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2348(var_178_int)
{
	var_179_float = 0; var_180_float = 0;
	GetGameTime(var_180_float);
	var_182_int = 0;
	var_182_int = var_180_float / (int)24;
	var_178_int = (int)1 + var_182_int;
	return 2;
}


func_307(var_0_object, var_1_object, var_2_object, var_3_string, var_305_object, var_306_object)
{
	var_0_object = var_306_object;
	var_1_object = var_305_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_312_bool = 0; var_313_object = Obj();
		var_313_object = var_1_object;
		func_2532(var_313_object);
		var_320_bool = var_312_bool == 0; //@nz
		if(var_320_bool != 0) {
			var_321_object = Obj(); var_322_object = Obj();
			var_321_object = var_1_object;
			var_322_object = var_0_object;
			func_2438();
			var_325_string = "";
			func_415(var_306_object, "Neutral");
			@@@var_0_object:SetMessage((int)521326);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528379, (int)29753, (int)29752);
		} else {
				var_345_string = "";
				func_415(var_306_object, "Neutral");
				@@@var_0_object:SetMessage((int)521329);
				@@@var_0_object:ClearReplies();
				var_347_bool = 0; var_348_object = Obj();
				var_348_object = var_1_object;
				func_2520(var_348_object);
				if(var_347_bool != 0) {
					@@@var_0_object:AddReply((int)521330, (int)22527, (int)22524);
				}
				var_356_bool = 0;
				var_356_bool = 0;
				var_357_bool = 0; var_358_object = Obj();
				var_358_object = var_1_object;
				func_2544(var_357_bool, var_358_object);
				if(var_357_bool != 0) {
					var_366_bool = 0; var_367_object = Obj();
					var_367_object = var_1_object;
					func_2508(var_367_object);
					if(var_366_bool != 0) {
						var_356_bool = 1;
					}
				}
				if(var_356_bool != 0) {
					@@@var_0_object:AddReply((int)521331, (int)22529, (int)22525);
				}
				@@@var_0_object:AddReply((int)521332, (int)-1, (int)22526);
				goto Label_385;
		}
	}
Label_385:
	var_337_bool = 0;
	func_2395(var_337_bool);
	if(var_337_bool != 0) {

	Label_389:
		lshWaitForAnimEnd();
		var_338_string = var_3_string;
		if(var_338_string != 0) {
		} else {
			var_339_string = "";
			var_339_string = var_2_object;
			func_2208(var_339_string);
			goto Label_389;
	}
		PlayAnimation("all", "idle");

	Label_404:
		WaitForAnimEnd();
		var_342_string = var_3_string;
		if(var_342_string != 0) {
			goto Label_414;
		}
		PlayAnimation("all", "idle");
		goto Label_404;

	}
	goto Label_414;
	
Label_414:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x137";


func_2357(var_278_bool, var_279_int)
{
	var_280_int = 0;
	func_2348(var_280_int);
	var_278_bool = var_280_int == var_279_int;
	return 0;
}


func_2616()
{
	var_141_object = Obj(); var_142_object = Obj();
	CreateDiaryEntry(var_142_object, (int)279, (int)2, (int)521340);
	var_146_bool = 0; var_147_object = Obj(); var_148_int = 0;
	var_142_object = var_147_object;
	func_2655(var_146_bool, var_147_object, (int)276);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2363(var_50_string, var_51_int)
{
	var_52_string = ""; var_53_string = "";
	var_54_int = var_51_int;
	if(var_54_int != 0) {
		"idle" = "idle" + var_51_int;
	}
	var_53_string = var_50_string;
	return 2;
}


func_2370(var_44_int)
{
	var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_bool = 0;
	var_47_int = 0;
	
Label_2372:
	var_50_string = ""; var_51_int = 0;
	var_47_int = var_51_int;
	func_2363(var_50_string, var_51_int);
	HasAnimation(var_48_bool, "all", var_50_string);
	var_55_bool = var_48_bool == 0; //@nz
	if(var_55_bool != 0) {
	} else {
		var_47_int = var_47_int + (int)1;
		goto Label_2372;
	}
	var_47_int = var_44_int;
	return 4;
	
}


func_2629()
{
	var_75_object = Obj(); var_76_object = Obj();
	CreateDiaryEntry(var_76_object, (int)277, (int)2, (int)521338);
	var_80_bool = 0; var_81_object = Obj(); var_82_int = 0;
	var_76_object = var_81_object;
	func_2655(var_80_bool, var_81_object, (int)276);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1868()
{
	var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0;
	WaitForAnimEnd();
	var_42_bool = 0;
	func_1978(var_42_bool);
	var_43_bool = var_42_bool == 0; //@nz
	if(var_43_bool != 0) {
		return 12;
	}
	func_2370((int)0);
	var_44_int = var_36_int;
	var_37_int = 0;
	
Label_1882:
	var_57_bool = 0;
	var_57_bool = 0;
	var_59_bool = var_37_int < (int)5;
	if(var_59_bool != 0) {
		var_60_bool = 0;
		func_1978(var_60_bool);
		if(var_60_bool != 0) {
			var_57_bool = 1;
		}
	}
	if(var_57_bool != 0) {
		var_61_bool = var_36_int == 0; //@nz
		if(var_61_bool != 0) {
			Sleep((int)3, var_38_bool);
			var_63_bool = var_38_bool == 0; //@nz
			if(var_63_bool != 0) {
			} else {
		} else {
				irand(var_39_int, var_36_int);
				irand(var_40_int, (int)5);
				var_69_bool = var_40_int != (int)0;
				if(var_69_bool != 0) {
					var_39_int = 0;
				}
				var_71_string = ""; var_72_int = 0;
				var_39_int = var_72_int;
				func_2363(var_71_string, var_72_int);
				PlayAnimation("all", var_71_string);
				WaitForAnimEnd(var_41_bool);
				var_73_bool = var_41_bool == 0; //@nz
				if(var_73_bool == 0) goto Label_1923;
				goto Label_1934;
		}
		Label_1923:
			var_64_bool = 0;
			func_1937(var_64_bool);
			var_65_bool = var_64_bool == 0; //@nz
			if(var_65_bool != 0) {
				goto Label_1934;
			}
			ResetAAS();
			var_37_int = var_37_int + (int)1;
			goto Label_1882;

		}
	}
Label_1934:
	ResetAAS();
	return 12;
	
}


func_2128(var_134_bool, var_135_object)
{
	var_136_string = ""; var_137_int = 0; var_138_bool = 0; var_139_int = 0; var_140_string = ""; var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = "";
	var_141_string = "c";
	var_142_int = 0;
	
Label_2131:
	if((int)1 != 0) {
		var_148_int = var_142_int + (int)1;
		var_149_int = var_141_string + var_148_int;
		@@var_135_object:HasProperty(var_149_int, var_143_bool);
		var_150_bool = var_143_bool == 0; //@nz
		if(var_150_bool != 0) {
		} else {
			var_142_int = var_142_int + (int)1;
			goto Label_2131;
		}
	}
	var_151_bool = var_142_int == 0; //@nz
	if(var_151_bool != 0) {
		var_134_bool = 0;
		return 10;
	}
	var_144_int = 0;
	var_153_bool = var_142_int > (int)1;
	if(var_153_bool != 0) {
		irand(var_144_int, var_142_int);
	}
	var_155_int = var_144_int + (int)1;
	var_156_int = var_141_string + var_155_int;
	@@var_135_object:GetProperty(var_156_int, var_145_string);
	var_157_bool = 0; var_158_string = "";
	var_145_string = var_158_string;
	func_2239(var_157_bool, var_158_string);
	var_157_bool = var_134_bool;
	return 10;
	
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_218_object, var_219_object)
{
	var_0_object = var_219_object;
	var_1_object = var_218_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_225_string = "";
		func_139(var_219_object, "Neutral");
		@@@var_0_object:SetMessage((int)518027);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)518028, (int)29772, (int)19161);
		@@@var_0_object:AddReply((int)528396, (int)29772, (int)29771);
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	var_249_bool = 0;
	func_2395(var_249_bool);
	if(var_249_bool != 0) {

	Label_113:
		lshWaitForAnimEnd();
		var_250_string = var_3_string;
		if(var_250_string != 0) {
		} else {
			var_251_string = "";
			var_251_string = var_2_object;
			func_2208(var_251_string);
			goto Label_113;
	}
		PlayAnimation("all", "idle");

	Label_128:
		WaitForAnimEnd();
		var_264_string = var_3_string;
		if(var_264_string != 0) {
			goto Label_138;
		}
		PlayAnimation("all", "idle");
		goto Label_128;
	}
	goto Label_138;
	
Label_138:
	return 0;
	
}


func_2642(var_66_object)
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


func_2387(var_111_int)
{
	var_111_int = 515543;
	return 0;
}


func_2389(var_110_int)
{
	var_110_int = 502868;
	return 0;
}


func_2391(var_112_string)
{
	var_112_string = "ui/NPC_Maria.png";
	return 0;
}


func_1624(var_2_object, var_569_string)
{
	var_570_bool = 0;
	func_2395(var_570_bool);
	var_571_bool = var_570_bool == 0; //@nz
	if(var_571_bool != 0) {
		return 0;
	}
	var_572_bool = var_569_string == var_2_object;
	if(var_572_bool != 0) {
		return 0;
	}
	var_573_string = ""; var_574_bool = 0;
	var_569_string = var_573_string;
	var_576_bool = var_569_string == "";
	if(var_576_bool != 0) {
		var_574_bool = 0;
	} else {
		var_574_bool = 1;
	}
	func_2224(var_573_string, var_574_bool);
	var_2_object = var_569_string;
	return 0;
	
}


func_2393(var_113_string)
{
	var_113_string = "ui/NPC_Maria_b.png";
	return 0;
}


func_1370(var_2_object, var_508_string)
{
	var_509_bool = 0;
	func_2395(var_509_bool);
	var_510_bool = var_509_bool == 0; //@nz
	if(var_510_bool != 0) {
		return 0;
	}
	var_511_bool = var_508_string == var_2_object;
	if(var_511_bool != 0) {
		return 0;
	}
	var_512_string = ""; var_513_bool = 0;
	var_508_string = var_512_string;
	var_515_bool = var_508_string == "";
	if(var_515_bool != 0) {
		var_513_bool = 0;
	} else {
		var_513_bool = 1;
	}
	func_2224(var_512_string, var_513_bool);
	var_2_object = var_508_string;
	return 0;
	
}


func_2395(var_105_bool)
{
	var_105_bool = 1;
	return 0;
}


func_2397()
{
	var_34_object = Obj(); var_35_object = Obj();
	SetVariable("b6q03", (int)1);
	func_2683(Obj());
	var_38_object = var_35_object;
	var_49_float = 0;
	func_2343(var_49_float);
	@@var_35_object:AddMark("b6q03MariaGotoNina", "pt_map_nina", (int)0, (int)521342, var_49_float);
	func_2603();
	func_2629();
	var_83_object = Obj(); var_84_string = "";
	func_2282(var_83_object, "quest_b6_03");
	var_91_bool = 0; var_92_string = ""; var_93_string = "";
	func_2331(var_91_bool, "quest_b6_03", "init_grave");
	return 2;
}
EMIT "Stack[-1] = 0";


func_2655(var_57_bool, var_58_object, var_59_int)
{
	var_60_object = Obj(); var_61_object = Obj(); var_62_int = 0; var_63_object = Obj(); var_64_object = Obj(); var_65_int = 0;
	func_2642(Obj());
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


func_2165(var_165_bool, var_166_object)
{
	var_167_string = ""; var_168_int = 0; var_169_bool = 0; var_170_int = 0; var_171_string = ""; var_172_string = ""; var_173_int = 0; var_174_bool = 0; var_175_int = 0; var_176_string = "";
	var_178_int = 0;
	func_2348(var_178_int);
	var_184_int = "d" + var_178_int;
	var_172_string = var_184_int + "m";
	var_173_int = 0;
	
Label_2174:
	if((int)1 != 0) {
		var_188_int = var_173_int + (int)1;
		var_189_int = var_172_string + var_188_int;
		@@var_166_object:HasProperty(var_189_int, var_174_bool);
		var_190_bool = var_174_bool == 0; //@nz
		if(var_190_bool != 0) {
		} else {
			var_173_int = var_173_int + (int)1;
			goto Label_2174;
		}
	}
	var_191_bool = var_173_int == 0; //@nz
	if(var_191_bool != 0) {
		var_165_bool = 0;
		return 10;
	}
	var_175_int = 0;
	var_193_bool = var_173_int > (int)1;
	if(var_193_bool != 0) {
		irand(var_175_int, var_173_int);
	}
	var_195_int = var_175_int + (int)1;
	var_196_int = var_172_string + var_195_int;
	@@var_166_object:GetProperty(var_196_int, var_176_string);
	var_197_bool = 0; var_198_string = "";
	var_176_string = var_198_string;
	func_2239(var_197_bool, var_198_string);
	var_197_bool = var_165_bool;
	return 10;
	
}


func_885(var_0_object, var_1_object, var_2_object, var_3_string, var_412_object, var_413_object)
{
	var_0_object = var_413_object;
	var_1_object = var_412_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_419_string = "";
		func_978(var_413_object, "Neutral");
		@@@var_0_object:SetMessage((int)523177);
		@@@var_0_object:ClearReplies();
		var_428_bool = 0; var_429_object = Obj();
		var_429_object = var_1_object;
		func_2579(var_429_object);
		if(var_428_bool != 0) {
			@@@var_0_object:AddReply((int)523178, (int)24382, (int)24381);
		}
		var_437_bool = 0;
		var_437_bool = 0;
		var_438_bool = 0;
		var_438_bool = 0;
		var_439_bool = 0; var_440_object = Obj();
		var_440_object = var_1_object;
		func_2555(var_440_object);
		var_445_bool = var_439_bool == 0; //@nz
		if(var_445_bool != 0) {
			var_446_bool = 0; var_447_object = Obj();
			var_447_object = var_1_object;
			func_2567(var_447_object);
			var_452_bool = var_446_bool == 0; //@nz
			if(var_452_bool != 0) {
				var_438_bool = 1;
			}
		}
		if(var_438_bool != 0) {
			var_453_bool = 0; var_454_object = Obj();
			var_454_object = var_1_object;
			func_2591(var_454_object);
			if(var_453_bool != 0) {
				var_437_bool = 1;
			}
		}
		if(var_437_bool != 0) {
			@@@var_0_object:AddReply((int)523187, (int)42102, (int)24390);
		}
		@@@var_0_object:AddReply((int)523186, (int)-1, (int)24389);
		goto Label_948;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x379";
	}
Label_948:
	var_465_bool = 0;
	func_2395(var_465_bool);
	if(var_465_bool != 0) {

	Label_952:
		lshWaitForAnimEnd();
		var_466_string = var_3_string;
		if(var_466_string != 0) {
		} else {
			var_467_string = "";
			var_467_string = var_2_object;
			func_2208(var_467_string);
			goto Label_952;
	}
		PlayAnimation("all", "idle");

	Label_967:
		WaitForAnimEnd();
		var_470_string = var_3_string;
		if(var_470_string != 0) {
			goto Label_977;
		}
		PlayAnimation("all", "idle");
		goto Label_967;
	}
	goto Label_977;
	
Label_977:
	return 0;
	
}


func_2683(var_38_object)
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


func_2432()
{
	SetVariable("oob6Maria1", (int)1);
	return 0;
}


func_2438()
{
	SetVariable("b6q03NinaTalk", (int)1);
	return 0;
}


func_139(var_2_object, var_225_string)
{
	var_226_bool = 0;
	func_2395(var_226_bool);
	var_227_bool = var_226_bool == 0; //@nz
	if(var_227_bool != 0) {
		return 0;
	}
	var_228_bool = var_225_string == var_2_object;
	if(var_228_bool != 0) {
		return 0;
	}
	var_229_string = ""; var_230_bool = 0;
	var_225_string = var_229_string;
	var_232_bool = var_225_string == "";
	if(var_232_bool != 0) {
		var_230_bool = 0;
	} else {
		var_230_bool = 1;
	}
	func_2224(var_229_string, var_230_bool);
	var_2_object = var_225_string;
	return 0;
	
}


func_2700(var_99_object, var_100_string, var_101_float)
{
	var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_object = Obj(); var_106_bool = 0; var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_object = Obj(); var_110_bool = 0;
	GetMainOutdoorScene(var_109_object);
	var_111_bool = var_109_object == 0; //@ne
	if(var_111_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_109_object:GetLocator(var_100_string, var_110_bool, var_107_cvector, var_108_cvector);
	var_113_bool = var_110_bool == 0; //@nz
	if(var_113_bool != 0) {
		var_115_int = "Warning: outdoor scene locator " + var_100_string;
		var_117_int = var_115_int + " doesnt exist";
		Trace(var_117_int);
	}
	@@var_109_object:GetMap(var_99_object);
	var_118_bool = var_99_object == 0; //@ne
	if(var_118_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_120_float = GetByIndex(var_107_cvector, 0);
	var_121_float = GetByIndex(var_107_cvector, 2);
	@@var_99_object:SetMapParams(var_120_float, var_121_float, var_101_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_2444(var_137_object)
{
	var_139_int = 0; var_140_int = 0;
	func_2616();
	var_149_bool = 0; var_150_string = ""; var_151_string = "";
	func_2331(var_149_bool, "quest_b6_03", "completed");
	@@var_137_object:RemoveItemByType(var_140_int, "b6q03_diary", (int)1);
	return 2;
}


func_1937(var_64_bool)
{
	var_64_bool = 1;
	return 0;
}


func_1939()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1944(var_41_float, var_42_object)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	GetPosition(var_46_cvector);
	@@var_42_object:GetPosition(var_47_cvector);
	var_48_cvector = var_47_cvector - var_46_cvector;
	var_41_float = var_48_cvector | var_48_cvector;
	return 6;
}


func_2458(var_98_object)
{
	var_99_object = Obj(); var_100_string = ""; var_101_float = 0;
	func_2683(Obj());
	var_102_object = var_99_object;
	func_2700(var_99_object, "pt_map_nina", (float)2);
	var_122_object = Obj();
	func_2683(var_122_object);
	@@var_98_object:ShowMap(var_122_object);
	return 0;
}


func_1692(var_0_object)
{
	var_26_bool = 0;
	func_1978(var_26_bool);
	var_29_bool = var_26_bool == 0; //@nz
	if(var_29_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_1701:
	func_1868();
	goto Label_1701;
}
EMIT "Return(); Pop(0)";


func_415(var_2_object, var_325_string)
{
	var_326_bool = 0;
	func_2395(var_326_bool);
	var_327_bool = var_326_bool == 0; //@nz
	if(var_327_bool != 0) {
		return 0;
	}
	var_328_bool = var_325_string == var_2_object;
	if(var_328_bool != 0) {
		return 0;
	}
	var_329_string = ""; var_330_bool = 0;
	var_325_string = var_329_string;
	var_332_bool = var_325_string == "";
	if(var_332_bool != 0) {
		var_330_bool = 0;
	} else {
		var_330_bool = 1;
	}
	func_2224(var_329_string, var_330_bool);
	var_2_object = var_325_string;
	return 0;
	
}


func_2208(var_251_string)
{
	var_252_bool = 0; var_253_float = 0; var_254_float = 0; var_255_bool = 0; var_256_float = 0; var_257_float = 0;
	lshHasAnimation(var_255_bool, var_251_string);
	var_258_bool = var_255_bool;
	if(var_258_bool != 0) {
		lshGetAnimTimes(var_251_string, var_256_float, var_257_float);
		lshPlayAnimation(var_256_float, var_257_float, (bool)0);
	} else {
		var_261_int = "Can't find lsh animation : " + var_251_string;
		Trace(var_261_int);
	}
	return 6;
	
}


func_1952(var_161_object, var_162_string, var_163_int)
{
	var_164_int = 0; var_165_int = 0;
	@@var_161_object:GetProperty(var_162_string, var_165_int);
	var_166_int = var_165_int + var_163_int;
	@@var_161_object:SetProperty(var_162_string, var_166_int);
	return 2;
}


func_1959(var_34_bool, var_35_cvector)
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


func_1706(var_51_bool)
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
	func_1969(var_56_bool, var_57_object);
	var_56_bool = var_51_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2474()
{
	SetVariable("oob12Maria1", (int)1);
	return 0;
}


func_2733(var_114_int)
{
	var_115_int = 0; var_116_int = 0;
	GetVariable("branch", var_116_int);
	var_119_bool = var_116_int == (int)0;
	if(var_119_bool != 0) {
		var_114_int = 1;
		return 2;
	EMIT "GOTO 0xabc";
	}
	var_121_bool = var_116_int == (int)1;
	if(var_121_bool != 0) {
		var_114_int = 2;
		return 2;
	}
	var_114_int = 3;
	return 2;
}


func_2224(var_229_string, var_230_bool)
{
	var_233_bool = 0; var_234_float = 0; var_235_float = 0; var_236_bool = 0; var_237_float = 0; var_238_float = 0;
	lshHasAnimation(var_236_bool, var_229_string);
	var_239_bool = var_236_bool;
	if(var_239_bool != 0) {
		lshGetAnimTimes(var_229_string, var_237_float, var_238_float);
		lshPlayAnimation(var_237_float, var_238_float, var_230_bool);
	} else {
		var_241_int = "Can't find lsh animation : " + var_229_string;
		Trace(var_241_int);
	}
	return 6;
	
}


func_2480()
{
	SetVariable("oob12Maria2", (int)1);
	return 0;
}


func_1969(var_30_bool, var_31_object)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0);
	@@var_31_object:GetPosition(var_33_cvector);
	var_34_bool = 0; var_35_cvector = CVector(0,0,0);
	var_33_cvector = var_35_cvector;
	func_1959(var_34_bool, var_35_cvector);
	var_34_bool = var_30_bool;
	return 2;
}


func_2486()
{
	SetVariable("b12q01MariaFinalTalk", (int)1);
	return 0;
}


func_1721(var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0);
	var_104_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_103_float, var_104_float);
	return 0;
}


func_1978(var_26_bool)
{
	var_27_bool = 0; var_28_bool = 0;
	IsLoaded(var_28_bool);
	var_28_bool = var_26_bool;
	return 2;
}


func_2492(var_154_object)
{
	Trace("money2000 is given");
	var_157_object = Obj(); var_158_int = 0;
	var_154_object = var_157_object;
	func_2305(var_157_object, (int)2000);
	return 0;
}


func_1726(var_34_bool)
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
	func_1944(var_41_float, var_42_object);
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


func_2239(var_157_bool, var_158_string)
{
	var_159_bool = 0; var_160_bool = 0;
	var_161_bool = 0;
	func_2395(var_161_bool);
	if(var_161_bool != 0) {
		lshHasSpeech(var_160_bool, var_158_string);
		var_162_bool = var_160_bool;
		if(var_162_bool != 0) {
			lshPlaySpeech(var_158_string);
			var_157_bool = 1;
			return 2;
		}
	}
	var_157_bool = 0;
	return 2;
}


func_2750(var_382_int)
{
	var_383_int = 0; var_384_int = 0;
	GetVariable("game_final", var_384_int);
	var_384_int = var_382_int;
	return 2;
}


func_1983(var_62_bool, var_63_object, var_64_float)
{
	var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_bool = 0; var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_bool = 0; var_82_bool = 0;
	@@var_63_object:GetPosition(var_75_cvector);
	@@var_63_object:GetEyesHeight(var_74_float);
	var_83_float = GetByIndex(var_75_cvector, 1);
	var_83_float = var_83_float + var_74_float;
	SetByIndex(var_75_cvector, 1) = var_83_float;
	GetPosition(var_76_cvector);
	GetEyesHeight(var_74_float);
	var_84_float = GetByIndex(var_76_cvector, 1);
	var_84_float = var_84_float + var_74_float;
	SetByIndex(var_76_cvector, 1) = var_84_float;
	var_77_cvector = var_75_cvector - var_76_cvector;
	var_85_float = GetByIndex(var_77_cvector, 1);
	SetByIndex(var_77_cvector, 1) = (float)0;
	var_86_int = var_77_cvector | var_77_cvector;
	var_87_float = sqrt(var_86_int);
	var_77_cvector = var_77_cvector / var_87_float;
	var_78_cvector = -var_77_cvector;
	var_88_float = var_77_cvector * var_64_float;
	var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0);
	var_90_cvector = var_78_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2267(var_89_cvector, var_90_cvector);
	var_98_float = var_89_cvector * (int)25;
	var_99_int = var_88_float + var_98_float;
	var_79_cvector = var_99_int - CVector(0.0, 10.0, 0.0);
	var_80_cvector = var_76_cvector + var_79_cvector;
	IsOverrideActive(var_81_bool);
	var_101_bool = var_81_bool;
	if(var_101_bool != 0) {
		var_62_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_80_cvector, var_78_cvector, (bool)1);
	var_103_float = GetByIndex(var_79_cvector, 0);
	var_104_float = GetByIndex(var_79_cvector, 2);
	Rotate(var_103_float, var_104_float);
	var_105_bool = 0;
	func_2395(var_105_bool);
	if(var_105_bool != 0) {
	} else {
		HasAnimationTrack(var_82_bool, "head");
		var_107_bool = var_82_bool;
		if(var_107_bool == 0) goto Label_2046;
		LookAsyncCamera("head");
	}
Label_2046:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_62_bool = 1;
	return 18;
	
}


func_2756(var_44_object)
{
	var_45_int = 0; var_46_int = 0; var_47_int = 0; var_48_int = 0;
	GetVariable("mt_maria", var_47_int);
	var_50_bool = var_47_int == 0; //@nz
	if(var_50_bool != 0) {
		var_51_int = 0; var_52_object = Obj();
		var_44_object = var_52_object;
		TaskCall(0);
		func_0(var_53_object, var_51_int, var_52_object);
		TaskReturn();
		SetVariable("mt_maria", (int)1);
	}
	var_278_bool = 0; var_279_int = 0;
	func_2357(var_278_bool, (int)6);
	if(var_278_bool != 0) {
		var_281_int = 0; var_282_object = Obj();
		var_44_object = var_282_object;
		TaskCall(2);
		func_226(var_283_object, var_281_int, var_282_object);
		TaskReturn();
		return 4;
	}
	var_380_bool = 0; var_381_int = 0;
	func_2357(var_380_bool, (int)12);
	if(var_380_bool != 0) {
		var_382_int = 0;
		func_2750(var_382_int);
		var_387_bool = var_382_int != (int)0;
		if(var_387_bool != 0) {
			var_388_int = 0; var_389_object = Obj();
			var_44_object = var_389_object;
			TaskCall(4);
			func_804(var_390_object, var_388_int, var_389_object);
			TaskReturn();
		} else {
			GetVariable("d12_maria", var_48_int);
			var_476_bool = var_48_int == 0; //@nz
			if(var_476_bool == 0) goto Label_2817;
			var_477_int = 0; var_478_object = Obj();
			var_44_object = var_478_object;
			TaskCall(6);
			func_1226(var_479_object, var_477_int, var_478_object);
			TaskReturn();
			SetVariable("d12_maria", (int)1);
	}
		var_538_int = 0; var_539_object = Obj();
		var_44_object = var_539_object;
		TaskCall(8);
		func_1485(var_540_object, var_538_int, var_539_object);
		TaskReturn();
		return 4;
	}
Label_2817:
	return 4;
	
}


func_2502()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_1226(var_0_object, var_477_int, var_478_object)
{
	var_480_object = Obj(); var_481_bool = 0; var_482_int = 0; var_483_bool = 0; var_484_object = Obj(); var_485_bool = 0; var_486_int = 0; var_487_bool = 0;
	var_0_object = var_478_object;
	var_488_bool = 0; var_489_object = Obj(); var_490_float = 0;
	var_478_object = var_489_object;
	func_1983(var_488_bool, var_489_object, (float)70.0);
	var_491_bool = var_488_bool == 0; //@nz
	if(var_491_bool != 0) {
		var_477_int = -2;
		return 8;
	}
	CreateDialog(var_484_object);
	var_492_int = 0;
	func_2389(var_492_int);
	@@var_484_object:SetNPCName(var_492_int);
	var_493_int = 0;
	func_2387(var_493_int);
	@@var_484_object:SetNPCDescription(var_493_int);
	var_494_string = "";
	func_2391(var_494_string);
	@@var_484_object:SetPhoto(var_494_string);
	var_495_string = "";
	func_2393(var_495_string);
	@@var_484_object:SetPhoto2(var_495_string);
	var_496_int = 0;
	func_2733(var_496_int);
	@@var_484_object:SetPlayerName(var_496_int);
	IsOverrideActive(var_485_bool);
	var_497_bool = var_485_bool;
	if(var_497_bool != 0) {
		var_477_int = -2;
		return 8;
	}
	DoDialog(var_484_object);
	var_498_bool = 0; var_499_object = Obj();
	func_2261(Obj());
	var_500_object = var_499_object;
	func_2070(var_498_bool, var_499_object);
	var_501_object = Obj(); var_502_object = Obj();
	var_478_object = var_501_object;
	var_484_object = var_502_object;
	TaskCall(7);
	func_1307(var_503_object, var_504_object, var_505_string, var_506_bool, var_501_object, var_502_object);
	TaskReturn();
	@@var_484_object:IsDialogEnd(var_487_bool);
	
Label_1289:
	var_534_bool = var_487_bool == 0; //@nz
	if(var_534_bool != 0) {
		sync();
		@@var_484_object:IsDialogEnd(var_487_bool);
		goto Label_1289;
	}
	var_478_object = Obj();
	func_2052();
	StopDialog(var_484_object);
	@@var_484_object:GetReturnValue((int)-1);
	var_486_int = var_477_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2508(var_366_bool)
{
	var_368_int = 0; var_369_string = "";
	func_2277(var_368_int, "oob6Maria1");
	var_371_bool = var_368_int == (int)0;
	if(var_371_bool != 0) {
		var_366_bool = 1;
		return 0;
	}
	var_366_bool = 0;
	return 0;
}


func_1485(var_0_object, var_538_int, var_539_object)
{
	var_541_object = Obj(); var_542_bool = 0; var_543_int = 0; var_544_bool = 0; var_545_object = Obj(); var_546_bool = 0; var_547_int = 0; var_548_bool = 0;
	var_0_object = var_539_object;
	var_549_bool = 0; var_550_object = Obj(); var_551_float = 0;
	var_539_object = var_550_object;
	func_1983(var_549_bool, var_550_object, (float)70.0);
	var_552_bool = var_549_bool == 0; //@nz
	if(var_552_bool != 0) {
		var_538_int = -2;
		return 8;
	}
	CreateDialog(var_545_object);
	var_553_int = 0;
	func_2389(var_553_int);
	@@var_545_object:SetNPCName(var_553_int);
	var_554_int = 0;
	func_2387(var_554_int);
	@@var_545_object:SetNPCDescription(var_554_int);
	var_555_string = "";
	func_2391(var_555_string);
	@@var_545_object:SetPhoto(var_555_string);
	var_556_string = "";
	func_2393(var_556_string);
	@@var_545_object:SetPhoto2(var_556_string);
	var_557_int = 0;
	func_2733(var_557_int);
	@@var_545_object:SetPlayerName(var_557_int);
	IsOverrideActive(var_546_bool);
	var_558_bool = var_546_bool;
	if(var_558_bool != 0) {
		var_538_int = -2;
		return 8;
	}
	DoDialog(var_545_object);
	var_559_bool = 0; var_560_object = Obj();
	func_2261(Obj());
	var_561_object = var_560_object;
	func_2070(var_559_bool, var_560_object);
	var_562_object = Obj(); var_563_object = Obj();
	var_539_object = var_562_object;
	var_545_object = var_563_object;
	TaskCall(9);
	func_1566(var_564_object, var_565_object, var_566_string, var_567_bool, var_562_object, var_563_object);
	TaskReturn();
	@@var_545_object:IsDialogEnd(var_548_bool);
	
Label_1548:
	var_592_bool = var_548_bool == 0; //@nz
	if(var_592_bool != 0) {
		sync();
		@@var_545_object:IsDialogEnd(var_548_bool);
		goto Label_1548;
	}
	var_539_object = Obj();
	func_2052();
	StopDialog(var_545_object);
	@@var_545_object:GetReturnValue((int)-1);
	var_547_int = var_538_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2254()
{
	var_29_bool = 0;
	func_2395(var_29_bool);
	if(var_29_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_978(var_2_object, var_419_string)
{
	var_420_bool = 0;
	func_2395(var_420_bool);
	var_421_bool = var_420_bool == 0; //@nz
	if(var_421_bool != 0) {
		return 0;
	}
	var_422_bool = var_419_string == var_2_object;
	if(var_422_bool != 0) {
		return 0;
	}
	var_423_string = ""; var_424_bool = 0;
	var_419_string = var_423_string;
	var_426_bool = var_419_string == "";
	if(var_426_bool != 0) {
		var_424_bool = 0;
	} else {
		var_424_bool = 1;
	}
	func_2224(var_423_string, var_424_bool);
	var_2_object = var_419_string;
	return 0;
	
}


func_1748()
{
	var_596_float = 0; var_597_float = 0;
	rand(var_597_float, (int)8, (int)16);
	SetTimer((int)10, var_597_float);
	return 2;
}


func_2261(var_125_object)
{
	var_126_object = Obj(); var_127_object = Obj();
	self(var_127_object);
	var_127_object = var_125_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2520(var_347_bool)
{
	var_349_int = 0; var_350_string = "";
	func_2277(var_349_int, "b6q03");
	var_352_bool = var_349_int == (int)0;
	if(var_352_bool != 0) {
		var_347_bool = 1;
		return 0;
	}
	var_347_bool = 0;
	return 0;
}


func_2267(var_89_cvector, var_90_cvector)
{
	var_92_float = 0; var_93_float = 0;
	var_94_int = var_90_cvector | var_90_cvector;
	var_93_float = sqrt(var_94_int);
	var_95_float = 9.999999974752427e-07;
	var_96_bool = var_93_float < var_95_float;
	if(var_96_bool != 0) {
		var_89_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_89_cvector = var_90_cvector / var_93_float;
	return 2;
}


func_1757()
{
	KillTimer((int)10);
	return 0;
}


func_226(var_0_object, var_281_int, var_282_object)
{
	var_284_object = Obj(); var_285_bool = 0; var_286_int = 0; var_287_bool = 0; var_288_object = Obj(); var_289_bool = 0; var_290_int = 0; var_291_bool = 0;
	var_0_object = var_282_object;
	var_292_bool = 0; var_293_object = Obj(); var_294_float = 0;
	var_282_object = var_293_object;
	func_1983(var_292_bool, var_293_object, (float)70.0);
	var_295_bool = var_292_bool == 0; //@nz
	if(var_295_bool != 0) {
		var_281_int = -2;
		return 8;
	}
	CreateDialog(var_288_object);
	var_296_int = 0;
	func_2389(var_296_int);
	@@var_288_object:SetNPCName(var_296_int);
	var_297_int = 0;
	func_2387(var_297_int);
	@@var_288_object:SetNPCDescription(var_297_int);
	var_298_string = "";
	func_2391(var_298_string);
	@@var_288_object:SetPhoto(var_298_string);
	var_299_string = "";
	func_2393(var_299_string);
	@@var_288_object:SetPhoto2(var_299_string);
	var_300_int = 0;
	func_2733(var_300_int);
	@@var_288_object:SetPlayerName(var_300_int);
	IsOverrideActive(var_289_bool);
	var_301_bool = var_289_bool;
	if(var_301_bool != 0) {
		var_281_int = -2;
		return 8;
	}
	DoDialog(var_288_object);
	var_302_bool = 0; var_303_object = Obj();
	func_2261(Obj());
	var_304_object = var_303_object;
	func_2070(var_302_bool, var_303_object);
	var_305_object = Obj(); var_306_object = Obj();
	var_282_object = var_305_object;
	var_288_object = var_306_object;
	TaskCall(3);
	func_307(var_307_object, var_308_object, var_309_string, var_310_bool, var_305_object, var_306_object);
	TaskReturn();
	@@var_288_object:IsDialogEnd(var_291_bool);
	
Label_289:
	var_378_bool = var_291_bool == 0; //@nz
	if(var_378_bool != 0) {
		sync();
		@@var_288_object:IsDialogEnd(var_291_bool);
		goto Label_289;
	}
	var_282_object = Obj();
	func_2052();
	StopDialog(var_288_object);
	@@var_288_object:GetReturnValue((int)-1);
	var_290_int = var_281_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2532(var_312_bool)
{
	var_314_int = 0; var_315_string = "";
	func_2277(var_314_int, "b6q03NinaTalk");
	var_319_bool = var_314_int != (int)0;
	if(var_319_bool != 0) {
		var_312_bool = 1;
		return 0;
	}
	var_312_bool = 0;
	return 0;
}


func_2277(var_314_int, var_315_string)
{
	var_316_int = 0; var_317_int = 0;
	GetVariable(var_315_string, var_317_int);
	var_317_int = var_314_int;
	return 2;
}


func_2282(var_83_object, var_84_string)
{
	var_85_object = Obj(); var_86_object = Obj(); var_87_object = Obj(); var_88_object = Obj();
	GetMainOutdoorScene(var_87_object);
	var_90_int = var_84_string + ".xml";
	AddBlankActorFromXml(var_88_object, var_87_object, var_84_string, var_90_int);
	var_88_object = var_83_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2544(var_357_bool, var_358_object)
{
	var_359_bool = 0; var_360_object = Obj(); var_361_string = "";
	var_358_object = var_360_object;
	func_2324(var_359_bool, var_360_object, "b6q03_diary");
	if(var_359_bool != 0) {
		var_357_bool = 1;
		return 0;
	}
	var_357_bool = 0;
	return 0;
}


func_2293(var_170_int, var_171_int)
{
	var_172_object = Obj(); var_173_object = Obj();
	CreateIntVector(var_173_object);
	@@var_173_object:add(var_170_int);
	@@var_173_object:add(var_171_int);
	SendWorldWndMessage((int)3, var_173_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2555(var_439_bool)
{
	var_441_int = 0; var_442_string = "";
	func_2277(var_441_int, "game_final");
	var_444_bool = var_441_int == (int)2;
	if(var_444_bool != 0) {
		var_439_bool = 1;
		return 0;
	}
	var_439_bool = 0;
	return 0;
}


