// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,Trigger/2,GetGameTime/1,HasAnimation/3,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Untrust|W:Doubt|W:Agression|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ui/NPC_Block.png|W:ui/NPC_Block_b.png|W:pt_map_starshina|A:ShowMap|W:oob9Block1|W:oob12Block1|W:b12q01BlockVisit|W:oob12Block2|W:quest_b10_02|W:completed|W:oob10Block1|W:oob9Block2|W:oob9Block3|W:oob10Block2|W:pt_gmap_vagon_army|W:b10q04BlockGotoOfficer|A:AddMark|W:b9BlockVisit|W:b9q01BlockGotoBoiny|W:b10q02|W:b10q02Cutscene|W:b10q04KapellaGotoBlock|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:mt_block
// @GLOBALS: 0:object:
// @RUN_OP: 0xa4e
// @RUN_TASK: 10
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xd3 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x49a vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x6c0 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x92b vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa24 vars=int,int
// @TASK_10: vars=cvector params=0
// @EVENT_7: op=0xa97 vars=int
// @EVENT_6: op=0xabd vars=
// @EVENT_5: op=0xacc vars=
// @EVENT_45: op=0xad9 vars=bool
// @EVENT_0: op=0xae5 vars=object
// @PE: 0x51,0xbd,0xd3,0x3f5,0x484,0x49a,0x62d,0x6aa,0x6c0,0x8db,0x915,0x92b,0x9d4,0xa0e,0xa24,0xa4e,0xa97,0xabd,0xad9,0xcbb,0xce3,0xcf3,0xcf9,0xcff,0xd05,0xd0b,0xd12,0xd18,0xd1e,0xd24,0xd2a,0xd4a,0xd60,0xd6c,0xd78,0xd84,0xd8e,0xd9a,0xda6,0xdb2,0xdbe,0xdca,0xdd6,0xde2

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_3197();
		var_31_bool = var_27_cvector == (int)23500;
		if(var_31_bool != 0) {
			var_32_object = Obj(); var_33_object = Obj();
			var_32_object = var_1_object;
			var_33_object = var_0_object;
			func_3408();
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_object;
			func_3299(var_51_object);
		}
		var_77_bool = var_27_cvector == (int)23501;
		if(var_77_bool != 0) {
			var_78_object = Obj(); var_79_object = Obj();
			var_78_object = var_1_object;
			var_79_object = var_0_object;
			func_3408();
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_object;
			func_3299(var_81_object);
		}
		var_83_bool = var_27_cvector == (int)23495;
		if(var_83_bool != 0) {
			var_84_object = Obj(); var_85_object = Obj();
			var_84_object = var_1_object;
			var_85_object = var_0_object;
			func_3408();
			var_86_object = Obj(); var_87_object = Obj();
			var_86_object = var_1_object;
			var_87_object = var_0_object;
			func_3299(var_87_object);
		}
		var_89_bool = var_27_cvector == (int)23496;
		if(var_89_bool != 0) {
			var_90_object = Obj(); var_91_object = Obj();
			var_90_object = var_1_object;
			var_91_object = var_0_object;
			func_3408();
			var_92_object = Obj(); var_93_object = Obj();
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_3299(var_93_object);
		}
		var_95_bool = var_27_cvector == (int)23510;
		if(var_95_bool != 0) {
			var_96_object = Obj(); var_97_object = Obj();
			var_96_object = var_1_object;
			var_97_object = var_0_object;
			func_3352();
		}
		var_101_bool = var_27_cvector == (int)22758;
		if(var_101_bool != 0) {
			var_102_object = Obj(); var_103_object = Obj();
			var_102_object = var_1_object;
			var_103_object = var_0_object;
			func_3358();
		}
		var_107_bool = var_26_bool == (int)22695;
		if(var_107_bool != 0) {
			var_108_bool = 0; var_109_object = Obj();
			var_109_object = var_1_object;
			func_3424(var_109_object);
			if(var_108_bool != 0) {
				var_116_object = Obj(); var_117_object = Obj();
				var_116_object = var_1_object;
				var_117_object = var_0_object;
				func_3315();
				var_120_object = Obj(); var_121_object = Obj();
				var_120_object = var_1_object;
				var_121_object = var_0_object;
				func_3402();
				var_124_string = "";
				func_189(var_27_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)521534);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)522289, (int)23470, (int)23444);
				@@@var_0_object:AddReply((int)522291, (int)23449, (int)23446);
				return 0;
			}
			var_148_string = "";
			func_189(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521594);
			@@@var_0_object:ClearReplies();
			var_150_bool = 0; var_151_object = Obj();
			var_151_object = var_1_object;
			func_3506(var_151_object);
			if(var_150_bool != 0) {
				@@@var_0_object:AddReply((int)522347, (int)23514, (int)23510);
			}
			var_159_bool = 0; var_160_object = Obj();
			var_160_object = var_1_object;
			func_3518(var_160_object);
			if(var_159_bool != 0) {
				@@@var_0_object:AddReply((int)521595, (int)23511, (int)22758);
			}
			@@@var_0_object:AddReply((int)522350, (int)-1, (int)23513);
			return 0;
		}
		var_172_bool = var_26_bool == (int)23511;
		if(var_172_bool != 0) {
			var_173_string = "";
			func_189(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522348);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522349, (int)-1, (int)23512);
			return 0;
		}
		var_179_bool = var_26_bool == (int)23514;
		if(var_179_bool != 0) {
			var_180_string = "";
			func_189(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522351);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522352, (int)23516, (int)23515);
			return 0;
		}
		var_186_bool = var_26_bool == (int)23516;
		if(var_186_bool != 0) {
			var_187_string = "";
			func_189(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522353);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522354, (int)23518, (int)23517);
			return 0;
		}
		var_193_bool = var_26_bool == (int)23518;
		if(var_193_bool != 0) {
			var_194_string = "";
			func_189(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522355);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522356, (int)23520, (int)23519);
			return 0;
		}
		var_200_bool = var_26_bool == (int)23520;
		if(var_200_bool != 0) {
			var_201_string = "";
			func_189(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522357);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522358, (int)23522, (int)23521);
			@@@var_0_object:AddReply((int)522360, (int)-1, (int)23523);
			return 0;
		}
		var_210_bool = var_26_bool == (int)23522;
		if(var_210_bool != 0) {
			var_211_string = "";
			func_189(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522359);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522361, (int)-1, (int)23524);
			return 0;
		}
		var_217_bool = var_26_bool == (int)23449;
		if(var_217_bool != 0) {
			var_218_string = "";
			func_189(var_27_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)522294);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522295, (int)23453, (int)23450);
			@@@var_0_object:AddReply((int)522297, (int)23447, (int)23452);
			return 0;
		}
		var_227_bool = var_26_bool == (int)23447;
		if(var_227_bool != 0) {
			var_228_string = "";
			func_189(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522292);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522296, (int)-1, (int)23451);
			@@@var_0_object:AddReply((int)522293, (int)-1, (int)23448);
			return 0;
		}
		var_237_bool = var_26_bool == (int)23453;
		if(var_237_bool != 0) {
			var_238_string = "";
			func_189(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522298);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522299, (int)23457, (int)23454);
			@@@var_0_object:AddReply((int)522300, (int)23447, (int)23455);
			return 0;
		}
		var_247_bool = var_26_bool == (int)23457;
		if(var_247_bool != 0) {
			var_248_string = "";
			func_189(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522301);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522302, (int)23464, (int)23458);
			@@@var_0_object:AddReply((int)522303, (int)23460, (int)23459);
			return 0;
		}
		var_257_bool = var_26_bool == (int)23460;
		if(var_257_bool != 0) {
			var_258_string = "";
			func_189(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522304);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522305, (int)-1, (int)23461);
			@@@var_0_object:AddReply((int)522306, (int)23447, (int)23462);
			return 0;
		}
		var_267_bool = var_26_bool == (int)23464;
		if(var_267_bool != 0) {
			var_268_string = "";
			func_189(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522307);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522308, (int)22697, (int)23465);
			@@@var_0_object:AddReply((int)522309, (int)23467, (int)23466);
			return 0;
		}
		var_277_bool = var_26_bool == (int)23467;
		if(var_277_bool != 0) {
			var_278_string = "";
			func_189(var_27_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)522310);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522311, (int)23447, (int)23468);
			return 0;
		}
		var_284_bool = var_26_bool == (int)23470;
		if(var_284_bool != 0) {
			var_285_string = "";
			func_189(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522312);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522313, (int)23472, (int)23471);
			return 0;
		}
		var_291_bool = var_26_bool == (int)23472;
		if(var_291_bool != 0) {
			var_292_string = "";
			func_189(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522314);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522316, (int)23445, (int)23474);
			@@@var_0_object:AddReply((int)522315, (int)23502, (int)23473);
			return 0;
		}
		var_301_bool = var_26_bool == (int)23502;
		if(var_301_bool != 0) {
			var_302_string = "";
			func_189(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522340);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522342, (int)23445, (int)23504);
			@@@var_0_object:AddReply((int)522341, (int)23507, (int)23503);
			return 0;
		}
		var_311_bool = var_26_bool == (int)23507;
		if(var_311_bool != 0) {
			var_312_string = "";
			func_189(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522345);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522346, (int)23445, (int)23508);
			return 0;
		}
		var_318_bool = var_26_bool == (int)23445;
		if(var_318_bool != 0) {
			var_319_string = "";
			func_189(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522290);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521535, (int)23481, (int)22696);
			@@@var_0_object:AddReply((int)522319, (int)23479, (int)23478);
			return 0;
		}
		var_328_bool = var_26_bool == (int)23479;
		if(var_328_bool != 0) {
			var_329_string = "";
			func_189(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522320);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522321, (int)23483, (int)23480);
			return 0;
		}
		var_335_bool = var_26_bool == (int)23483;
		if(var_335_bool != 0) {
			var_336_string = "";
			func_189(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522324);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522325, (int)23457, (int)23484);
			return 0;
		}
		var_342_bool = var_26_bool == (int)23481;
		if(var_342_bool != 0) {
			var_343_string = "";
			func_189(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522322);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522323, (int)22697, (int)23482);
			@@@var_0_object:AddReply((int)522328, (int)22697, (int)23489);
			return 0;
		}
		var_352_bool = var_26_bool == (int)22697;
		if(var_352_bool != 0) {
			var_353_string = "";
			func_189(var_27_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)521536);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522326, (int)23488, (int)23487);
			return 0;
		}
		var_359_bool = var_26_bool == (int)23488;
		if(var_359_bool != 0) {
			var_360_string = "";
			func_189(var_27_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)522327);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522329, (int)23497, (int)23491);
			@@@var_0_object:AddReply((int)521537, (int)23492, (int)22698);
			return 0;
		}
		var_369_bool = var_26_bool == (int)23492;
		if(var_369_bool != 0) {
			var_370_string = "";
			func_189(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522330);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522331, (int)23494, (int)23493);
			return 0;
		}
		var_376_bool = var_26_bool == (int)23494;
		if(var_376_bool != 0) {
			var_377_string = "";
			func_189(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522332);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522333, (int)-1, (int)23495);
			@@@var_0_object:AddReply((int)522334, (int)-1, (int)23496);
			return 0;
		}
		var_386_bool = var_26_bool == (int)23497;
		if(var_386_bool != 0) {
			var_387_string = "";
			func_189(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522335);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522336, (int)23499, (int)23498);
			@@@var_0_object:AddReply((int)530873, (int)23499, (int)32191);
			return 0;
		}
		var_396_bool = var_26_bool == (int)23499;
		if(var_396_bool != 0) {
			var_397_string = "";
			func_189(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522337);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522338, (int)-1, (int)23500);
			@@@var_0_object:AddReply((int)522339, (int)-1, (int)23501);
			return 0;
		}
		var_3_string = true;
		var_405_bool = 0;
		func_3297(var_405_bool);
		if(var_405_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xd4";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_3197();
		var_31_bool = var_27_cvector == (int)24032;
		if(var_31_bool != 0) {
			var_32_object = Obj(); var_33_object = Obj();
			var_32_object = var_1_object;
			var_33_object = var_0_object;
			func_3333();
		}
		var_37_bool = var_26_bool == (int)23290;
		if(var_37_bool != 0) {
			var_38_bool = 0;
			var_38_bool = 0;
			var_39_bool = 0; var_40_object = Obj();
			var_40_object = var_1_object;
			func_3436(var_40_object);
			if(var_39_bool != 0) {
				var_47_bool = 0; var_48_object = Obj();
				var_48_object = var_1_object;
				func_3460(var_47_bool, var_48_object);
				var_58_bool = var_47_bool == 0; //@nz
				if(var_58_bool != 0) {
					var_38_bool = 1;
				}
			}
			if(var_38_bool != 0) {
				var_59_object = Obj(); var_60_object = Obj();
				var_59_object = var_1_object;
				var_60_object = var_0_object;
				func_3321();
				var_63_object = Obj(); var_64_object = Obj();
				var_63_object = var_1_object;
				var_64_object = var_0_object;
				func_3327();
				var_67_string = "";
				func_1156(var_27_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)522123);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)522124, (int)24011, (int)23291);
				@@@var_0_object:AddReply((int)540112, (int)-1, (int)42079);
				return 0;
			}
			var_91_bool = 0; var_92_object = Obj();
			var_92_object = var_1_object;
			func_3460(var_91_bool, var_92_object);
			if(var_91_bool != 0) {
				var_93_object = Obj(); var_94_object = Obj();
				var_93_object = var_1_object;
				var_94_object = var_0_object;
				func_3327();
				var_95_string = "";
				func_1156(var_27_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)522127);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)522128, (int)-1, (int)23295);
				@@@var_0_object:AddReply((int)522844, (int)-1, (int)24028);
				return 0;
			}
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_3327();
			var_105_string = "";
			func_1156(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522125);
			@@@var_0_object:ClearReplies();
			var_107_bool = 0; var_108_object = Obj();
			var_108_object = var_1_object;
			func_3448(var_108_object);
			if(var_107_bool != 0) {
				@@@var_0_object:AddReply((int)522848, (int)24033, (int)24032);
			}
			@@@var_0_object:AddReply((int)522126, (int)-1, (int)23293);
			return 0;
		}
		var_120_bool = var_26_bool == (int)24033;
		if(var_120_bool != 0) {
			var_121_string = "";
			func_1156(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522849);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522850, (int)24035, (int)24034);
			return 0;
		}
		var_127_bool = var_26_bool == (int)24035;
		if(var_127_bool != 0) {
			var_128_string = "";
			func_1156(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522851);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522852, (int)24037, (int)24036);
			@@@var_0_object:AddReply((int)540113, (int)-1, (int)42080);
			return 0;
		}
		var_137_bool = var_26_bool == (int)24037;
		if(var_137_bool != 0) {
			var_138_string = "";
			func_1156(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522853);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522854, (int)-1, (int)24038);
			return 0;
		}
		var_144_bool = var_26_bool == (int)24011;
		if(var_144_bool != 0) {
			var_145_string = "";
			func_1156(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522828);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522829, (int)24015, (int)24012);
			@@@var_0_object:AddReply((int)522830, (int)24014, (int)24013);
			return 0;
		}
		var_154_bool = var_26_bool == (int)24014;
		if(var_154_bool != 0) {
			var_155_string = "";
			func_1156(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522831);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522839, (int)24019, (int)24022);
			return 0;
		}
		var_161_bool = var_26_bool == (int)24015;
		if(var_161_bool != 0) {
			var_162_string = "";
			func_1156(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522832);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522833, (int)24017, (int)24016);
			@@@var_0_object:AddReply((int)522840, (int)-1, (int)24024);
			return 0;
		}
		var_171_bool = var_26_bool == (int)24017;
		if(var_171_bool != 0) {
			var_172_string = "";
			func_1156(var_27_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)522834);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522835, (int)24019, (int)24018);
			@@@var_0_object:AddReply((int)522841, (int)-1, (int)24025);
			return 0;
		}
		var_181_bool = var_26_bool == (int)24019;
		if(var_181_bool != 0) {
			var_182_string = "";
			func_1156(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522836);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522837, (int)24021, (int)24020);
			return 0;
		}
		var_188_bool = var_26_bool == (int)24021;
		if(var_188_bool != 0) {
			var_189_string = "";
			func_1156(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522838);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522843, (int)-1, (int)24027);
			@@@var_0_object:AddReply((int)522842, (int)-1, (int)24026);
			return 0;
		}
		var_3_string = true;
		var_197_bool = 0;
		func_3297(var_197_bool);
		if(var_197_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x49b";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_3197();
		var_31_bool = var_27_cvector == (int)26059;
		if(var_31_bool != 0) {
			var_32_object = Obj(); var_33_object = Obj();
			var_32_object = var_1_object;
			var_33_object = var_0_object;
			func_3346();
		}
		var_37_bool = var_27_cvector == (int)26065;
		if(var_37_bool != 0) {
			var_38_object = Obj(); var_39_object = Obj();
			var_38_object = var_1_object;
			var_39_object = var_0_object;
			func_3339();
		}
		var_47_bool = var_27_cvector == (int)31819;
		if(var_47_bool != 0) {
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_3364();
		}
		var_53_bool = var_27_cvector == (int)31825;
		if(var_53_bool != 0) {
			var_54_object = Obj(); var_55_object = Obj();
			var_54_object = var_1_object;
			var_55_object = var_0_object;
			func_3386();
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_3370(var_73_object);
		}
		var_99_bool = var_26_bool == (int)26058;
		if(var_99_bool != 0) {
			var_100_string = "";
			func_1706(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)524719);
			@@@var_0_object:ClearReplies();
			var_118_bool = 0;
			var_118_bool = 0;
			var_119_bool = 0;
			var_119_bool = 0;
			var_120_bool = 0; var_121_object = Obj();
			var_121_object = var_1_object;
			func_3470(var_121_object);
			if(var_120_bool != 0) {
				var_128_bool = 0; var_129_object = Obj();
				var_129_object = var_1_object;
				func_3482(var_129_object);
				var_134_bool = var_128_bool == 0; //@nz
				if(var_134_bool != 0) {
					var_119_bool = 1;
				}
			}
			if(var_119_bool != 0) {
				var_135_bool = 0; var_136_object = Obj();
				var_136_object = var_1_object;
				func_3494(var_136_object);
				if(var_135_bool != 0) {
					var_118_bool = 1;
				}
			}
			if(var_118_bool != 0) {
				@@@var_0_object:AddReply((int)524720, (int)32206, (int)26059);
			}
			var_144_bool = 0;
			var_144_bool = 0;
			var_145_bool = 0; var_146_object = Obj();
			var_146_object = var_1_object;
			func_3482(var_146_object);
			if(var_145_bool != 0) {
				var_147_bool = 0; var_148_object = Obj();
				var_148_object = var_1_object;
				func_3470(var_148_object);
				if(var_147_bool != 0) {
					var_144_bool = 1;
				}
			}
			if(var_144_bool != 0) {
				@@@var_0_object:AddReply((int)524724, (int)32212, (int)26063);
			}
			var_152_bool = 0;
			var_152_bool = 0;
			var_153_bool = 0; var_154_object = Obj();
			var_154_object = var_1_object;
			func_3530(var_154_object);
			if(var_153_bool != 0) {
				var_159_bool = 0; var_160_object = Obj();
				var_160_object = var_1_object;
				func_3542(var_160_object);
				if(var_159_bool != 0) {
					var_152_bool = 1;
				}
			}
			if(var_152_bool != 0) {
				@@@var_0_object:AddReply((int)530453, (int)32226, (int)31819);
			}
			@@@var_0_object:AddReply((int)524721, (int)-1, (int)26060);
			@@@var_0_object:AddReply((int)530884, (int)-1, (int)32205);
			return 0;
		}
		var_175_bool = var_26_bool == (int)32226;
		if(var_175_bool != 0) {
			var_176_string = "";
			func_1706(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530902);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530903, (int)32228, (int)32227);
			@@@var_0_object:AddReply((int)530906, (int)32228, (int)32230);
			return 0;
		}
		var_185_bool = var_26_bool == (int)32228;
		if(var_185_bool != 0) {
			var_186_string = "";
			func_1706(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530904);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530905, (int)31820, (int)32229);
			@@@var_0_object:AddReply((int)530907, (int)32233, (int)32232);
			return 0;
		}
		var_195_bool = var_26_bool == (int)32233;
		if(var_195_bool != 0) {
			var_196_string = "";
			func_1706(var_27_cvector, "Agression");
			@@@var_0_object:SetMessage((int)530908);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530909, (int)-1, (int)32234);
			@@@var_0_object:AddReply((int)530910, (int)-1, (int)32235);
			return 0;
		}
		var_205_bool = var_26_bool == (int)31820;
		if(var_205_bool != 0) {
			var_206_string = "";
			func_1706(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530454);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530455, (int)31822, (int)31821);
			@@@var_0_object:AddReply((int)530911, (int)31822, (int)32236);
			return 0;
		}
		var_215_bool = var_26_bool == (int)31822;
		if(var_215_bool != 0) {
			var_216_string = "";
			func_1706(var_27_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)530456);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530457, (int)31824, (int)31823);
			@@@var_0_object:AddReply((int)530912, (int)32239, (int)32238);
			return 0;
		}
		var_225_bool = var_26_bool == (int)32239;
		if(var_225_bool != 0) {
			var_226_string = "";
			func_1706(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530913);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530914, (int)31824, (int)32240);
			@@@var_0_object:AddReply((int)530915, (int)-1, (int)32241);
			return 0;
		}
		var_235_bool = var_26_bool == (int)31824;
		if(var_235_bool != 0) {
			var_236_string = "";
			func_1706(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530458);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530459, (int)-1, (int)31825);
			return 0;
		}
		var_242_bool = var_26_bool == (int)32212;
		if(var_242_bool != 0) {
			var_243_string = "";
			func_1706(var_27_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)530891);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530892, (int)32215, (int)32213);
			@@@var_0_object:AddReply((int)530893, (int)-1, (int)32214);
			return 0;
		}
		var_252_bool = var_26_bool == (int)32215;
		if(var_252_bool != 0) {
			var_253_string = "";
			func_1706(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530894);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530896, (int)32219, (int)32217);
			@@@var_0_object:AddReply((int)530895, (int)32219, (int)32216);
			@@@var_0_object:AddReply((int)530897, (int)32219, (int)32218);
			return 0;
		}
		var_265_bool = var_26_bool == (int)32219;
		if(var_265_bool != 0) {
			var_266_string = "";
			func_1706(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530898);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530899, (int)26064, (int)32220);
			@@@var_0_object:AddReply((int)530901, (int)26064, (int)32224);
			return 0;
		}
		var_275_bool = var_26_bool == (int)26064;
		if(var_275_bool != 0) {
			var_276_string = "";
			func_1706(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)524725);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524726, (int)-1, (int)26065);
			return 0;
		}
		var_282_bool = var_26_bool == (int)32206;
		if(var_282_bool != 0) {
			var_283_string = "";
			func_1706(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530885);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530886, (int)32208, (int)32207);
			return 0;
		}
		var_289_bool = var_26_bool == (int)32208;
		if(var_289_bool != 0) {
			var_290_string = "";
			func_1706(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530887);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530888, (int)26061, (int)32209);
			@@@var_0_object:AddReply((int)530889, (int)-1, (int)32210);
			return 0;
		}
		var_299_bool = var_26_bool == (int)26061;
		if(var_299_bool != 0) {
			var_300_string = "";
			func_1706(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)524722);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524723, (int)-1, (int)26062);
			@@@var_0_object:AddReply((int)530890, (int)-1, (int)32211);
			return 0;
		}
		var_3_string = true;
		var_308_bool = 0;
		func_3297(var_308_bool);
		if(var_308_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x6c1";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_3197();
		var_31_bool = var_26_bool == (int)32194;
		if(var_31_bool != 0) {
			var_32_string = "";
			func_2325(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530875);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530876, (int)32199, (int)32195);
			@@@var_0_object:AddReply((int)530877, (int)32197, (int)32196);
			return 0;
		}
		var_57_bool = var_26_bool == (int)32197;
		if(var_57_bool != 0) {
			var_58_string = "";
			func_2325(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530878);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530879, (int)32199, (int)32198);
			@@@var_0_object:AddReply((int)530881, (int)32199, (int)32200);
			return 0;
		}
		var_67_bool = var_26_bool == (int)32199;
		if(var_67_bool != 0) {
			var_68_string = "";
			func_2325(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530880);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530882, (int)-1, (int)32203);
			@@@var_0_object:AddReply((int)530883, (int)-1, (int)32204);
			return 0;
		}
		var_3_string = true;
		var_76_bool = 0;
		func_3297(var_76_bool);
		if(var_76_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x92c";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_cvector)
{
	if((int)1 != 0) {
		func_3197();
		var_31_bool = var_26_int == (int)42563;
		if(var_31_bool != 0) {
			var_32_string = "";
			func_2574(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540554);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540555, (int)-1, (int)42564);
			@@@var_0_object:AddReply((int)540794, (int)-1, (int)42843);
			return 0;
		}
		var_3_string = true;
		var_56_bool = 0;
		func_3297(var_56_bool);
		if(var_56_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa25";
	
}


task_10_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_int)
{
	var_28_bool = var_26_int == (int)10;
	if(var_28_bool != 0) {
		func_2707();
		var_30_bool = 0;
		var_30_bool = 0;
		var_31_bool = 0;
		func_2921(var_31_bool);
		if(var_31_bool != 0) {
			var_34_bool = 0;
			func_2676(var_34_bool);
			if(var_34_bool != 0) {
				var_30_bool = 1;
			}
		}
		if(var_30_bool != 0) {
			var_51_bool = 0;
			func_2656(var_51_bool);
			if(var_51_bool != 0) {
				var_70_bool = 0; var_71_object = Obj();
				func_3204(Obj());
				var_72_object = var_71_object;
				func_3071(var_70_bool, var_71_object);
			}
		} else {
			func_2671(var_26_int);
			func_2698();
		}
	}
	return 0;
	
}


task_10_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_2889();
	func_2707();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_10_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	StopGroup0();
	func_2707();
	var_27_string = "";
	func_3151("Neutral");
	func_2698();
	return 0;
}


task_10_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_bool)
{
	var_27_bool = var_26_bool;
	if(var_27_bool != 0) {
		func_2698();
	} else {
		var_33_string = "";
		func_3151("Neutral");
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
		func_2889();
		var_30_bool = 0; var_31_object = Obj();
		var_26_object = var_31_object;
		func_2912(var_30_bool, var_31_object);
		EventEnable(0);
		var_44_object = Obj();
		var_26_object = var_44_object;
		func_3632(var_44_object);
		var_649_string = "";
		func_3151("Neutral");
		func_2707();
		func_2698();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_2642(var_25_cvector);
	return 0;
}


func_0(var_0_object, var_279_int, var_280_object)
{
	var_282_object = Obj(); var_283_bool = 0; var_284_int = 0; var_285_bool = 0; var_286_object = Obj(); var_287_bool = 0; var_288_int = 0; var_289_bool = 0;
	var_0_object = var_280_object;
	var_290_bool = 0; var_291_object = Obj(); var_292_float = 0;
	var_280_object = var_291_object;
	func_2926(var_290_bool, var_291_object, (float)70.0);
	var_293_bool = var_290_bool == 0; //@nz
	if(var_293_bool != 0) {
		var_279_int = -2;
		return 8;
	}
	CreateDialog(var_286_object);
	var_294_int = 0;
	func_3291(var_294_int);
	@@var_286_object:SetNPCName(var_294_int);
	var_295_int = 0;
	func_3289(var_295_int);
	@@var_286_object:SetNPCDescription(var_295_int);
	var_296_string = "";
	func_3293(var_296_string);
	@@var_286_object:SetPhoto(var_296_string);
	var_297_string = "";
	func_3295(var_297_string);
	@@var_286_object:SetPhoto2(var_297_string);
	var_298_int = 0;
	func_3615(var_298_int);
	@@var_286_object:SetPlayerName(var_298_int);
	IsOverrideActive(var_287_bool);
	var_299_bool = var_287_bool;
	if(var_299_bool != 0) {
		var_279_int = -2;
		return 8;
	}
	DoDialog(var_286_object);
	var_300_bool = 0; var_301_object = Obj();
	func_3204(Obj());
	var_302_object = var_301_object;
	func_3013(var_300_bool, var_301_object);
	var_303_object = Obj(); var_304_object = Obj();
	var_280_object = var_303_object;
	var_286_object = var_304_object;
	TaskCall(1);
	func_81(var_305_object, var_306_object, var_307_string, var_308_bool, var_303_object, var_304_object);
	TaskReturn();
	@@var_286_object:IsDialogEnd(var_289_bool);
	
Label_63:
	var_372_bool = var_289_bool == 0; //@nz
	if(var_372_bool != 0) {
		sync();
		@@var_286_object:IsDialogEnd(var_289_bool);
		goto Label_63;
	}
	var_280_object = Obj();
	func_2995();
	StopDialog(var_286_object);
	@@var_286_object:GetReturnValue((int)-1);
	var_288_int = var_279_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2818()
{
	var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0;
	WaitForAnimEnd();
	var_42_bool = 0;
	func_2921(var_42_bool);
	var_43_bool = var_42_bool == 0; //@nz
	if(var_43_bool != 0) {
		return 12;
	}
	func_3272((int)0);
	var_44_int = var_36_int;
	var_37_int = 0;
	
Label_2832:
	var_57_bool = 0;
	var_57_bool = 0;
	var_59_bool = var_37_int < (int)5;
	if(var_59_bool != 0) {
		var_60_bool = 0;
		func_2921(var_60_bool);
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
				func_3265(var_71_string, var_72_int);
				PlayAnimation("all", var_71_string);
				WaitForAnimEnd(var_41_bool);
				var_73_bool = var_41_bool == 0; //@nz
				if(var_73_bool == 0) goto Label_2873;
				goto Label_2884;
		}
		Label_2873:
			var_64_bool = 0;
			func_2887(var_64_bool);
			var_65_bool = var_64_bool == 0; //@nz
			if(var_65_bool != 0) {
				goto Label_2884;
			}
			ResetAAS();
			var_37_int = var_37_int + (int)1;
			goto Label_2832;

		}
	}
Label_2884:
	ResetAAS();
	return 12;
	
}


func_3333()
{
	SetVariable("oob12Block2", (int)1);
	return 0;
}


func_3339()
{
	var_40_bool = 0; var_41_string = ""; var_42_string = "";
	func_3225(var_40_bool, "quest_b10_02", "completed");
	return 0;
}


func_2574(var_2_object, var_624_string)
{
	var_625_bool = 0;
	func_3297(var_625_bool);
	var_626_bool = var_625_bool == 0; //@nz
	if(var_626_bool != 0) {
		return 0;
	}
	var_627_bool = var_624_string == var_2_object;
	if(var_627_bool != 0) {
		return 0;
	}
	var_628_string = ""; var_629_bool = 0;
	var_624_string = var_628_string;
	var_631_bool = var_624_string == "";
	if(var_631_bool != 0) {
		var_629_bool = 0;
	} else {
		var_629_bool = 1;
	}
	func_3167(var_628_string, var_629_bool);
	var_2_object = var_624_string;
	return 0;
	
}


func_3346()
{
	SetVariable("oob10Block1", (int)1);
	return 0;
}


func_2325(var_2_object, var_223_string)
{
	var_224_bool = 0;
	func_3297(var_224_bool);
	var_225_bool = var_224_bool == 0; //@nz
	if(var_225_bool != 0) {
		return 0;
	}
	var_226_bool = var_223_string == var_2_object;
	if(var_226_bool != 0) {
		return 0;
	}
	var_227_string = ""; var_228_bool = 0;
	var_223_string = var_227_string;
	var_230_bool = var_223_string == "";
	if(var_230_bool != 0) {
		var_228_bool = 0;
	} else {
		var_228_bool = 1;
	}
	func_3167(var_227_string, var_228_bool);
	var_2_object = var_223_string;
	return 0;
	
}


func_3352()
{
	SetVariable("oob9Block2", (int)1);
	return 0;
}


func_3358()
{
	SetVariable("oob9Block3", (int)1);
	return 0;
}


func_3615(var_112_int)
{
	var_113_int = 0; var_114_int = 0;
	GetVariable("branch", var_114_int);
	var_117_bool = var_114_int == (int)0;
	if(var_117_bool != 0) {
		var_112_int = 1;
		return 2;
	EMIT "GOTO 0xe2e";
	}
	var_119_bool = var_114_int == (int)1;
	if(var_119_bool != 0) {
		var_112_int = 2;
		return 2;
	}
	var_112_int = 3;
	return 2;
}


func_3108(var_163_bool, var_164_object)
{
	var_165_string = ""; var_166_int = 0; var_167_bool = 0; var_168_int = 0; var_169_string = ""; var_170_string = ""; var_171_int = 0; var_172_bool = 0; var_173_int = 0; var_174_string = "";
	var_176_int = 0;
	func_3242(var_176_int);
	var_182_int = "d" + var_176_int;
	var_170_string = var_182_int + "m";
	var_171_int = 0;
	
Label_3117:
	if((int)1 != 0) {
		var_186_int = var_171_int + (int)1;
		var_187_int = var_170_string + var_186_int;
		@@var_164_object:HasProperty(var_187_int, var_172_bool);
		var_188_bool = var_172_bool == 0; //@nz
		if(var_188_bool != 0) {
		} else {
			var_171_int = var_171_int + (int)1;
			goto Label_3117;
		}
	}
	var_189_bool = var_171_int == 0; //@nz
	if(var_189_bool != 0) {
		var_163_bool = 0;
		return 10;
	}
	var_173_int = 0;
	var_191_bool = var_171_int > (int)1;
	if(var_191_bool != 0) {
		irand(var_173_int, var_171_int);
	}
	var_193_int = var_173_int + (int)1;
	var_194_int = var_170_string + var_193_int;
	@@var_164_object:GetProperty(var_194_int, var_174_string);
	var_195_bool = 0; var_196_string = "";
	var_174_string = var_196_string;
	func_3182(var_195_bool, var_196_string);
	var_195_bool = var_163_bool;
	return 10;
	
}


func_3364()
{
	SetVariable("oob10Block2", (int)1);
	return 0;
}


func_3370(var_73_object)
{
	var_74_object = Obj(); var_75_string = ""; var_76_float = 0;
	func_3565(Obj());
	var_77_object = var_74_object;
	func_3582(var_74_object, "pt_gmap_vagon_army", (float)2);
	var_97_object = Obj();
	func_3565(var_97_object);
	@@var_73_object:ShowMap(var_97_object);
	return 0;
}


func_1581(var_0_object, var_1_object, var_2_object, var_3_string, var_400_object, var_401_object)
{
	var_0_object = var_401_object;
	var_1_object = var_400_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_407_string = "";
		func_1706(var_401_object, "Neutral");
		@@@var_0_object:SetMessage((int)524719);
		@@@var_0_object:ClearReplies();
		var_416_bool = 0;
		var_416_bool = 0;
		var_417_bool = 0;
		var_417_bool = 0;
		var_418_bool = 0; var_419_object = Obj();
		var_419_object = var_1_object;
		func_3470(var_419_object);
		if(var_418_bool != 0) {
			var_424_bool = 0; var_425_object = Obj();
			var_425_object = var_1_object;
			func_3482(var_425_object);
			var_430_bool = var_424_bool == 0; //@nz
			if(var_430_bool != 0) {
				var_417_bool = 1;
			}
		}
		if(var_417_bool != 0) {
			var_431_bool = 0; var_432_object = Obj();
			var_432_object = var_1_object;
			func_3494(var_432_object);
			if(var_431_bool != 0) {
				var_416_bool = 1;
			}
		}
		if(var_416_bool != 0) {
			@@@var_0_object:AddReply((int)524720, (int)32206, (int)26059);
		}
		var_440_bool = 0;
		var_440_bool = 0;
		var_441_bool = 0; var_442_object = Obj();
		var_442_object = var_1_object;
		func_3482(var_442_object);
		if(var_441_bool != 0) {
			var_443_bool = 0; var_444_object = Obj();
			var_444_object = var_1_object;
			func_3470(var_444_object);
			if(var_443_bool != 0) {
				var_440_bool = 1;
			}
		}
		if(var_440_bool != 0) {
			@@@var_0_object:AddReply((int)524724, (int)32212, (int)26063);
		}
		var_448_bool = 0;
		var_448_bool = 0;
		var_449_bool = 0; var_450_object = Obj();
		var_450_object = var_1_object;
		func_3530(var_450_object);
		if(var_449_bool != 0) {
			var_455_bool = 0; var_456_object = Obj();
			var_456_object = var_1_object;
			func_3542(var_456_object);
			if(var_455_bool != 0) {
				var_448_bool = 1;
			}
		}
		if(var_448_bool != 0) {
			@@@var_0_object:AddReply((int)530453, (int)32226, (int)31819);
		}
		@@@var_0_object:AddReply((int)524721, (int)-1, (int)26060);
		@@@var_0_object:AddReply((int)530884, (int)-1, (int)32205);
		goto Label_1676;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x631";
	}
Label_1676:
	var_470_bool = 0;
	func_3297(var_470_bool);
	if(var_470_bool != 0) {

	Label_1680:
		lshWaitForAnimEnd();
		var_471_string = var_3_string;
		if(var_471_string != 0) {
		} else {
			var_472_string = "";
			var_472_string = var_2_object;
			func_3151(var_472_string);
			goto Label_1680;
	}
		PlayAnimation("all", "idle");

	Label_1695:
		WaitForAnimEnd();
		var_475_string = var_3_string;
		if(var_475_string != 0) {
			goto Label_1705;
		}
		PlayAnimation("all", "idle");
		goto Label_1695;
	}
	goto Label_1705;
	
Label_1705:
	return 0;
	
}


func_3632(var_44_object)
{
	var_45_int = 0; var_46_int = 0;
	GetVariable("mt_block", var_46_int);
	var_48_bool = var_46_int == 0; //@nz
	if(var_48_bool != 0) {
		var_49_int = 0; var_50_object = Obj();
		var_44_object = var_50_object;
		TaskCall(6);
		func_2186(var_51_object, var_49_int, var_50_object);
		TaskReturn();
		SetVariable("mt_block", (int)1);
	}
	var_276_bool = 0; var_277_int = 0;
	func_3259(var_276_bool, (int)9);
	if(var_276_bool != 0) {
		var_279_int = 0; var_280_object = Obj();
		var_44_object = var_280_object;
		TaskCall(0);
		func_0(var_281_object, var_279_int, var_280_object);
		TaskReturn();
		return 2;
	}
	var_374_bool = 0; var_375_int = 0;
	func_3259(var_374_bool, (int)10);
	if(var_374_bool != 0) {
		var_376_int = 0; var_377_object = Obj();
		var_44_object = var_377_object;
		TaskCall(4);
		func_1500(var_378_object, var_376_int, var_377_object);
		TaskReturn();
		return 2;
	}
	var_480_bool = 0; var_481_int = 0;
	func_3259(var_480_bool, (int)12);
	if(var_480_bool != 0) {
		var_482_int = 0; var_483_object = Obj();
		var_44_object = var_483_object;
		TaskCall(2);
		func_932(var_484_object, var_482_int, var_483_object);
		TaskReturn();
		return 2;
	}
	var_593_int = 0; var_594_object = Obj();
	var_44_object = var_594_object;
	TaskCall(8);
	func_2435(var_595_object, var_593_int, var_594_object);
	TaskReturn();
	return 2;
}


func_3386()
{
	var_56_object = Obj(); var_57_object = Obj();
	func_3565(Obj());
	var_58_object = var_57_object;
	var_69_float = 0;
	func_3237(var_69_float);
	@@var_57_object:AddMark("b10q04BlockGotoOfficer", "pt_gmap_vagon_army", (int)0, (int)530547, var_69_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2887(var_64_bool)
{
	var_64_bool = 1;
	return 0;
}


func_2889()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_3402()
{
	SetVariable("b9BlockVisit", (int)1);
	return 0;
}


func_2894(var_41_float, var_42_object)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	GetPosition(var_46_cvector);
	@@var_42_object:GetPosition(var_47_cvector);
	var_48_cvector = var_47_cvector - var_46_cvector;
	var_41_float = var_48_cvector | var_48_cvector;
	return 6;
}


func_3151(var_249_string)
{
	var_250_bool = 0; var_251_float = 0; var_252_float = 0; var_253_bool = 0; var_254_float = 0; var_255_float = 0;
	lshHasAnimation(var_253_bool, var_249_string);
	var_256_bool = var_253_bool;
	if(var_256_bool != 0) {
		lshGetAnimTimes(var_249_string, var_254_float, var_255_float);
		lshPlayAnimation(var_254_float, var_255_float, (bool)0);
	} else {
		var_259_int = "Can't find lsh animation : " + var_249_string;
		Trace(var_259_int);
	}
	return 6;
	
}


func_3408()
{
	var_34_object = Obj(); var_35_object = Obj();
	func_3565(Obj());
	var_36_object = var_35_object;
	var_47_float = 0;
	func_3237(var_47_float);
	@@var_35_object:AddMark("b9q01BlockGotoBoiny", "pt_map_starshina", (int)3, (int)531550, var_47_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_303_object, var_304_object)
{
	var_0_object = var_304_object;
	var_1_object = var_303_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_310_bool = 0; var_311_object = Obj();
		var_311_object = var_1_object;
		func_3424(var_311_object);
		if(var_310_bool != 0) {
			var_318_object = Obj(); var_319_object = Obj();
			var_318_object = var_1_object;
			var_319_object = var_0_object;
			func_3315();
			var_322_object = Obj(); var_323_object = Obj();
			var_322_object = var_1_object;
			var_323_object = var_0_object;
			func_3402();
			var_326_string = "";
			func_189(var_304_object, "Neutral");
			@@@var_0_object:SetMessage((int)521534);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522289, (int)23470, (int)23444);
			@@@var_0_object:AddReply((int)522291, (int)23449, (int)23446);
		} else {
				var_349_string = "";
				func_189(var_304_object, "Neutral");
				@@@var_0_object:SetMessage((int)521594);
				@@@var_0_object:ClearReplies();
				var_351_bool = 0; var_352_object = Obj();
				var_352_object = var_1_object;
				func_3506(var_352_object);
				if(var_351_bool != 0) {
					@@@var_0_object:AddReply((int)522347, (int)23514, (int)23510);
				}
				var_360_bool = 0; var_361_object = Obj();
				var_361_object = var_1_object;
				func_3518(var_361_object);
				if(var_360_bool != 0) {
					@@@var_0_object:AddReply((int)521595, (int)23511, (int)22758);
				}
				@@@var_0_object:AddReply((int)522350, (int)-1, (int)23513);
				goto Label_159;
		}
	}
Label_159:
	var_341_bool = 0;
	func_3297(var_341_bool);
	if(var_341_bool != 0) {

	Label_163:
		lshWaitForAnimEnd();
		var_342_string = var_3_string;
		if(var_342_string != 0) {
		} else {
			var_343_string = "";
			var_343_string = var_2_object;
			func_3151(var_343_string);
			goto Label_163;
	}
		PlayAnimation("all", "idle");

	Label_178:
		WaitForAnimEnd();
		var_346_string = var_3_string;
		if(var_346_string != 0) {
			goto Label_188;
		}
		PlayAnimation("all", "idle");
		goto Label_178;

	}
	goto Label_188;
	
Label_188:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_2642(var_0_object)
{
	var_26_bool = 0;
	func_2921(var_26_bool);
	var_29_bool = var_26_bool == 0; //@nz
	if(var_29_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_2651:
	func_2818();
	goto Label_2651;
}
EMIT "Return(); Pop(0)";


func_2902(var_34_bool, var_35_cvector)
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


func_3071(var_132_bool, var_133_object)
{
	var_134_string = ""; var_135_int = 0; var_136_bool = 0; var_137_int = 0; var_138_string = ""; var_139_string = ""; var_140_int = 0; var_141_bool = 0; var_142_int = 0; var_143_string = "";
	var_139_string = "c";
	var_140_int = 0;
	
Label_3074:
	if((int)1 != 0) {
		var_146_int = var_140_int + (int)1;
		var_147_int = var_139_string + var_146_int;
		@@var_133_object:HasProperty(var_147_int, var_141_bool);
		var_148_bool = var_141_bool == 0; //@nz
		if(var_148_bool != 0) {
		} else {
			var_140_int = var_140_int + (int)1;
			goto Label_3074;
		}
	}
	var_149_bool = var_140_int == 0; //@nz
	if(var_149_bool != 0) {
		var_132_bool = 0;
		return 10;
	}
	var_142_int = 0;
	var_151_bool = var_140_int > (int)1;
	if(var_151_bool != 0) {
		irand(var_142_int, var_140_int);
	}
	var_153_int = var_142_int + (int)1;
	var_154_int = var_139_string + var_153_int;
	@@var_133_object:GetProperty(var_154_int, var_143_string);
	var_155_bool = 0; var_156_string = "";
	var_143_string = var_156_string;
	func_3182(var_155_bool, var_156_string);
	var_155_bool = var_132_bool;
	return 10;
	
}


func_3167(var_227_string, var_228_bool)
{
	var_231_bool = 0; var_232_float = 0; var_233_float = 0; var_234_bool = 0; var_235_float = 0; var_236_float = 0;
	lshHasAnimation(var_234_bool, var_227_string);
	var_237_bool = var_234_bool;
	if(var_237_bool != 0) {
		lshGetAnimTimes(var_227_string, var_235_float, var_236_float);
		lshPlayAnimation(var_235_float, var_236_float, var_228_bool);
	} else {
		var_239_int = "Can't find lsh animation : " + var_227_string;
		Trace(var_239_int);
	}
	return 6;
	
}


func_2656(var_51_bool)
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
	func_2912(var_56_bool, var_57_object);
	var_56_bool = var_51_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3424(var_310_bool)
{
	var_312_int = 0; var_313_string = "";
	func_3220(var_312_int, "oob9Block1");
	var_317_bool = var_312_int == (int)0;
	if(var_317_bool != 0) {
		var_310_bool = 1;
		return 0;
	}
	var_310_bool = 0;
	return 0;
}


func_2912(var_30_bool, var_31_object)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0);
	@@var_31_object:GetPosition(var_33_cvector);
	var_34_bool = 0; var_35_cvector = CVector(0,0,0);
	var_33_cvector = var_35_cvector;
	func_2902(var_34_bool, var_35_cvector);
	var_34_bool = var_30_bool;
	return 2;
}


func_2921(var_26_bool)
{
	var_27_bool = 0; var_28_bool = 0;
	IsLoaded(var_28_bool);
	var_28_bool = var_26_bool;
	return 2;
}


func_3436(var_514_bool)
{
	var_516_int = 0; var_517_string = "";
	func_3220(var_516_int, "oob12Block1");
	var_519_bool = var_516_int == (int)0;
	if(var_519_bool != 0) {
		var_514_bool = 1;
		return 0;
	}
	var_514_bool = 0;
	return 0;
}


func_3182(var_155_bool, var_156_string)
{
	var_157_bool = 0; var_158_bool = 0;
	var_159_bool = 0;
	func_3297(var_159_bool);
	if(var_159_bool != 0) {
		lshHasSpeech(var_158_bool, var_156_string);
		var_160_bool = var_158_bool;
		if(var_160_bool != 0) {
			lshPlaySpeech(var_156_string);
			var_155_bool = 1;
			return 2;
		}
	}
	var_155_bool = 0;
	return 2;
}


func_2671(var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0);
	var_104_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_103_float, var_104_float);
	return 0;
}


func_2926(var_60_bool, var_61_object, var_62_float)
{
	var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_bool = 0; var_71_bool = 0; var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_bool = 0;
	@@var_61_object:GetPosition(var_73_cvector);
	@@var_61_object:GetEyesHeight(var_72_float);
	var_81_float = GetByIndex(var_73_cvector, 1);
	var_81_float = var_81_float + var_72_float;
	SetByIndex(var_73_cvector, 1) = var_81_float;
	GetPosition(var_74_cvector);
	GetEyesHeight(var_72_float);
	var_82_float = GetByIndex(var_74_cvector, 1);
	var_82_float = var_82_float + var_72_float;
	SetByIndex(var_74_cvector, 1) = var_82_float;
	var_75_cvector = var_73_cvector - var_74_cvector;
	var_83_float = GetByIndex(var_75_cvector, 1);
	SetByIndex(var_75_cvector, 1) = (float)0;
	var_84_int = var_75_cvector | var_75_cvector;
	var_85_float = sqrt(var_84_int);
	var_75_cvector = var_75_cvector / var_85_float;
	var_76_cvector = -var_75_cvector;
	var_86_float = var_75_cvector * var_62_float;
	var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0);
	var_88_cvector = var_76_cvector ^ CVector(0.0, 1.0, 0.0);
	func_3210(var_87_cvector, var_88_cvector);
	var_96_float = var_87_cvector * (int)25;
	var_97_int = var_86_float + var_96_float;
	var_77_cvector = var_97_int - CVector(0.0, 10.0, 0.0);
	var_78_cvector = var_74_cvector + var_77_cvector;
	IsOverrideActive(var_79_bool);
	var_99_bool = var_79_bool;
	if(var_99_bool != 0) {
		var_60_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_78_cvector, var_76_cvector, (bool)1);
	var_101_float = GetByIndex(var_77_cvector, 0);
	var_102_float = GetByIndex(var_77_cvector, 2);
	Rotate(var_101_float, var_102_float);
	var_103_bool = 0;
	func_3297(var_103_bool);
	if(var_103_bool != 0) {
	} else {
		HasAnimationTrack(var_80_bool, "head");
		var_105_bool = var_80_bool;
		if(var_105_bool == 0) goto Label_2989;
		LookAsyncCamera("head");
	}
Label_2989:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_60_bool = 1;
	return 18;
	
}


func_2676(var_34_bool)
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
	func_2894(var_41_float, var_42_object);
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


func_3448(var_579_bool)
{
	var_581_int = 0; var_582_string = "";
	func_3220(var_581_int, "oob12Block2");
	var_584_bool = var_581_int == (int)0;
	if(var_584_bool != 0) {
		var_579_bool = 1;
		return 0;
	}
	var_579_bool = 0;
	return 0;
}


func_3197()
{
	var_29_bool = 0;
	func_3297(var_29_bool);
	if(var_29_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2435(var_0_object, var_593_int, var_594_object)
{
	var_596_object = Obj(); var_597_bool = 0; var_598_int = 0; var_599_bool = 0; var_600_object = Obj(); var_601_bool = 0; var_602_int = 0; var_603_bool = 0;
	var_0_object = var_594_object;
	var_604_bool = 0; var_605_object = Obj(); var_606_float = 0;
	var_594_object = var_605_object;
	func_2926(var_604_bool, var_605_object, (float)70.0);
	var_607_bool = var_604_bool == 0; //@nz
	if(var_607_bool != 0) {
		var_593_int = -2;
		return 8;
	}
	CreateDialog(var_600_object);
	var_608_int = 0;
	func_3291(var_608_int);
	@@var_600_object:SetNPCName(var_608_int);
	var_609_int = 0;
	func_3289(var_609_int);
	@@var_600_object:SetNPCDescription(var_609_int);
	var_610_string = "";
	func_3293(var_610_string);
	@@var_600_object:SetPhoto(var_610_string);
	var_611_string = "";
	func_3295(var_611_string);
	@@var_600_object:SetPhoto2(var_611_string);
	var_612_int = 0;
	func_3615(var_612_int);
	@@var_600_object:SetPlayerName(var_612_int);
	IsOverrideActive(var_601_bool);
	var_613_bool = var_601_bool;
	if(var_613_bool != 0) {
		var_593_int = -2;
		return 8;
	}
	DoDialog(var_600_object);
	var_614_bool = 0; var_615_object = Obj();
	func_3204(Obj());
	var_616_object = var_615_object;
	func_3013(var_614_bool, var_615_object);
	var_617_object = Obj(); var_618_object = Obj();
	var_594_object = var_617_object;
	var_600_object = var_618_object;
	TaskCall(9);
	func_2516(var_619_object, var_620_object, var_621_string, var_622_bool, var_617_object, var_618_object);
	TaskReturn();
	@@var_600_object:IsDialogEnd(var_603_bool);
	
Label_2498:
	var_647_bool = var_603_bool == 0; //@nz
	if(var_647_bool != 0) {
		sync();
		@@var_600_object:IsDialogEnd(var_603_bool);
		goto Label_2498;
	}
	var_594_object = Obj();
	func_2995();
	StopDialog(var_600_object);
	@@var_600_object:GetReturnValue((int)-1);
	var_602_int = var_593_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3204(var_123_object)
{
	var_124_object = Obj(); var_125_object = Obj();
	self(var_125_object);
	var_125_object = var_123_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1156(var_2_object, var_540_string)
{
	var_541_bool = 0;
	func_3297(var_541_bool);
	var_542_bool = var_541_bool == 0; //@nz
	if(var_542_bool != 0) {
		return 0;
	}
	var_543_bool = var_540_string == var_2_object;
	if(var_543_bool != 0) {
		return 0;
	}
	var_544_string = ""; var_545_bool = 0;
	var_540_string = var_544_string;
	var_547_bool = var_540_string == "";
	if(var_547_bool != 0) {
		var_545_bool = 0;
	} else {
		var_545_bool = 1;
	}
	func_3167(var_544_string, var_545_bool);
	var_2_object = var_540_string;
	return 0;
	
}


func_3460(var_520_bool, var_521_object)
{
	var_522_bool = 0; var_523_object = Obj();
	var_521_object = var_523_object;
	func_3554(var_523_object);
	if(var_522_bool != 0) {
		var_520_bool = 1;
		return 0;
	}
	var_520_bool = 0;
	return 0;
}


func_2698()
{
	var_651_float = 0; var_652_float = 0;
	rand(var_652_float, (int)8, (int)16);
	SetTimer((int)10, var_652_float);
	return 2;
}


func_3210(var_87_cvector, var_88_cvector)
{
	var_90_float = 0; var_91_float = 0;
	var_92_int = var_88_cvector | var_88_cvector;
	var_91_float = sqrt(var_92_int);
	var_93_float = 9.999999974752427e-07;
	var_94_bool = var_91_float < var_93_float;
	if(var_94_bool != 0) {
		var_87_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_87_cvector = var_88_cvector / var_91_float;
	return 2;
}


func_2186(var_0_object, var_49_int, var_50_object)
{
	var_52_object = Obj(); var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_object = Obj(); var_57_bool = 0; var_58_int = 0; var_59_bool = 0;
	var_0_object = var_50_object;
	var_60_bool = 0; var_61_object = Obj(); var_62_float = 0;
	var_50_object = var_61_object;
	func_2926(var_60_bool, var_61_object, (float)70.0);
	var_107_bool = var_60_bool == 0; //@nz
	if(var_107_bool != 0) {
		var_49_int = -2;
		return 8;
	}
	CreateDialog(var_56_object);
	var_108_int = 0;
	func_3291(var_108_int);
	@@var_56_object:SetNPCName(var_108_int);
	var_109_int = 0;
	func_3289(var_109_int);
	@@var_56_object:SetNPCDescription(var_109_int);
	var_110_string = "";
	func_3293(var_110_string);
	@@var_56_object:SetPhoto(var_110_string);
	var_111_string = "";
	func_3295(var_111_string);
	@@var_56_object:SetPhoto2(var_111_string);
	var_112_int = 0;
	func_3615(var_112_int);
	@@var_56_object:SetPlayerName(var_112_int);
	IsOverrideActive(var_57_bool);
	var_120_bool = var_57_bool;
	if(var_120_bool != 0) {
		var_49_int = -2;
		return 8;
	}
	DoDialog(var_56_object);
	var_121_bool = 0; var_122_object = Obj();
	func_3204(Obj());
	var_123_object = var_122_object;
	func_3013(var_121_bool, var_122_object);
	var_216_object = Obj(); var_217_object = Obj();
	var_50_object = var_216_object;
	var_56_object = var_217_object;
	TaskCall(7);
	func_2267(var_218_object, var_219_object, var_220_string, var_221_bool, var_216_object, var_217_object);
	TaskReturn();
	@@var_56_object:IsDialogEnd(var_59_bool);
	
Label_2249:
	var_265_bool = var_59_bool == 0; //@nz
	if(var_265_bool != 0) {
		sync();
		@@var_56_object:IsDialogEnd(var_59_bool);
		goto Label_2249;
	}
	var_50_object = Obj();
	func_2995();
	StopDialog(var_56_object);
	@@var_56_object:GetReturnValue((int)-1);
	var_58_int = var_49_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3470(var_418_bool)
{
	var_420_int = 0; var_421_string = "";
	func_3220(var_420_int, "b10q02");
	var_423_bool = var_420_int == (int)3;
	if(var_423_bool != 0) {
		var_418_bool = 1;
		return 0;
	}
	var_418_bool = 0;
	return 0;
}


func_2707()
{
	KillTimer((int)10);
	return 0;
}


func_3220(var_312_int, var_313_string)
{
	var_314_int = 0; var_315_int = 0;
	GetVariable(var_313_string, var_315_int);
	var_315_int = var_312_int;
	return 2;
}


func_3225(var_40_bool, var_41_string, var_42_string)
{
	var_43_object = Obj(); var_44_object = Obj();
	FindActor(var_44_object, var_41_string);
	var_45_bool = var_44_object == 0; //@ne
	if(var_45_bool != 0) {
		var_40_bool = 0;
		return 2;
	}
	Trigger(var_44_object, var_42_string);
	var_40_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3482(var_424_bool)
{
	var_426_int = 0; var_427_string = "";
	func_3220(var_426_int, "b10q02Cutscene");
	var_429_bool = var_426_int != (int)0;
	if(var_429_bool != 0) {
		var_424_bool = 1;
		return 0;
	}
	var_424_bool = 0;
	return 0;
}


func_932(var_0_object, var_482_int, var_483_object)
{
	var_485_object = Obj(); var_486_bool = 0; var_487_int = 0; var_488_bool = 0; var_489_object = Obj(); var_490_bool = 0; var_491_int = 0; var_492_bool = 0;
	var_0_object = var_483_object;
	var_493_bool = 0; var_494_object = Obj(); var_495_float = 0;
	var_483_object = var_494_object;
	func_2926(var_493_bool, var_494_object, (float)70.0);
	var_496_bool = var_493_bool == 0; //@nz
	if(var_496_bool != 0) {
		var_482_int = -2;
		return 8;
	}
	CreateDialog(var_489_object);
	var_497_int = 0;
	func_3291(var_497_int);
	@@var_489_object:SetNPCName(var_497_int);
	var_498_int = 0;
	func_3289(var_498_int);
	@@var_489_object:SetNPCDescription(var_498_int);
	var_499_string = "";
	func_3293(var_499_string);
	@@var_489_object:SetPhoto(var_499_string);
	var_500_string = "";
	func_3295(var_500_string);
	@@var_489_object:SetPhoto2(var_500_string);
	var_501_int = 0;
	func_3615(var_501_int);
	@@var_489_object:SetPlayerName(var_501_int);
	IsOverrideActive(var_490_bool);
	var_502_bool = var_490_bool;
	if(var_502_bool != 0) {
		var_482_int = -2;
		return 8;
	}
	DoDialog(var_489_object);
	var_503_bool = 0; var_504_object = Obj();
	func_3204(Obj());
	var_505_object = var_504_object;
	func_3013(var_503_bool, var_504_object);
	var_506_object = Obj(); var_507_object = Obj();
	var_483_object = var_506_object;
	var_489_object = var_507_object;
	TaskCall(3);
	func_1013(var_508_object, var_509_object, var_510_string, var_511_bool, var_506_object, var_507_object);
	TaskReturn();
	@@var_489_object:IsDialogEnd(var_492_bool);
	
Label_995:
	var_591_bool = var_492_bool == 0; //@nz
	if(var_591_bool != 0) {
		sync();
		@@var_489_object:IsDialogEnd(var_492_bool);
		goto Label_995;
	}
	var_483_object = Obj();
	func_2995();
	StopDialog(var_489_object);
	@@var_489_object:GetReturnValue((int)-1);
	var_491_int = var_482_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3237(var_69_float)
{
	var_70_float = 0; var_71_float = 0;
	GetGameTime(var_71_float);
	var_71_float = var_69_float;
	return 2;
}


func_3494(var_431_bool)
{
	var_433_int = 0; var_434_string = "";
	func_3220(var_433_int, "oob10Block1");
	var_436_bool = var_433_int == (int)0;
	if(var_436_bool != 0) {
		var_431_bool = 1;
		return 0;
	}
	var_431_bool = 0;
	return 0;
}


func_1706(var_2_object, var_407_string)
{
	var_408_bool = 0;
	func_3297(var_408_bool);
	var_409_bool = var_408_bool == 0; //@nz
	if(var_409_bool != 0) {
		return 0;
	}
	var_410_bool = var_407_string == var_2_object;
	if(var_410_bool != 0) {
		return 0;
	}
	var_411_string = ""; var_412_bool = 0;
	var_407_string = var_411_string;
	var_414_bool = var_407_string == "";
	if(var_414_bool != 0) {
		var_412_bool = 0;
	} else {
		var_412_bool = 1;
	}
	func_3167(var_411_string, var_412_bool);
	var_2_object = var_407_string;
	return 0;
	
}


func_3242(var_176_int)
{
	var_177_float = 0; var_178_float = 0;
	GetGameTime(var_178_float);
	var_180_int = 0;
	var_180_int = var_178_float / (int)24;
	var_176_int = (int)1 + var_180_int;
	return 2;
}


func_3506(var_351_bool)
{
	var_353_int = 0; var_354_string = "";
	func_3220(var_353_int, "oob9Block2");
	var_356_bool = var_353_int == (int)0;
	if(var_356_bool != 0) {
		var_351_bool = 1;
		return 0;
	}
	var_351_bool = 0;
	return 0;
}


func_3251(var_524_int)
{
	var_525_float = 0; var_526_float = 0;
	GetGameTime(var_526_float);
	var_527_int = 0;
	var_526_float = var_527_int;
	var_524_int = var_527_int % (int)24;
	return 2;
}


func_2995()
{
	var_267_bool = 0; var_268_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_270_bool = 0;
	func_3297(var_270_bool);
	if(var_270_bool != 0) {
	} else {
		HasAnimationTrack(var_268_bool, "head");
		var_272_bool = var_268_bool;
		if(var_272_bool == 0) goto Label_3012;
		UnlookAsync("head");
	}
Label_3012:
	return 2;
	
}


func_3259(var_276_bool, var_277_int)
{
	var_278_int = 0;
	func_3242(var_278_int);
	var_276_bool = var_278_int == var_277_int;
	return 0;
}


func_189(var_2_object, var_326_string)
{
	var_327_bool = 0;
	func_3297(var_327_bool);
	var_328_bool = var_327_bool == 0; //@nz
	if(var_328_bool != 0) {
		return 0;
	}
	var_329_bool = var_326_string == var_2_object;
	if(var_329_bool != 0) {
		return 0;
	}
	var_330_string = ""; var_331_bool = 0;
	var_326_string = var_330_string;
	var_333_bool = var_326_string == "";
	if(var_333_bool != 0) {
		var_331_bool = 0;
	} else {
		var_331_bool = 1;
	}
	func_3167(var_330_string, var_331_bool);
	var_2_object = var_326_string;
	return 0;
	
}


func_3518(var_360_bool)
{
	var_362_int = 0; var_363_string = "";
	func_3220(var_362_int, "oob9Block3");
	var_365_bool = var_362_int == (int)0;
	if(var_365_bool != 0) {
		var_360_bool = 1;
		return 0;
	}
	var_360_bool = 0;
	return 0;
}


func_3265(var_50_string, var_51_int)
{
	var_52_string = ""; var_53_string = "";
	var_54_int = var_51_int;
	if(var_54_int != 0) {
		"idle" = "idle" + var_51_int;
	}
	var_53_string = var_50_string;
	return 2;
}


func_3013(var_121_bool, var_122_object)
{
	var_126_int = 0; var_127_int = 0; var_128_int = 0; var_129_int = 0;
	GetVariable("voice_common", var_128_int);
	var_131_int = var_128_int;
	if(var_131_int != 0) {
		var_132_bool = 0; var_133_object = Obj();
		var_122_object = var_133_object;
		func_3071(var_132_bool, var_133_object);
		var_162_bool = var_132_bool == 0; //@nz
		if(var_162_bool != 0) {
			var_163_bool = 0; var_164_object = Obj();
			var_122_object = var_164_object;
			func_3108(var_163_bool, var_164_object);
			var_198_bool = var_163_bool == 0; //@nz
			if(var_198_bool != 0) {
				var_121_bool = 0;
				return 4;
			}
		}
		irand(var_129_int, (int)2);
		var_200_int = var_129_int;
		if(var_200_int != 0) {
			var_203_int = var_128_int + (int)1;
			var_205_int = var_203_int % (int)3;
			SetVariable("voice_common", var_205_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_208_bool = 0; var_209_object = Obj();
		var_122_object = var_209_object;
		func_3108(var_208_bool, var_209_object);
		var_210_bool = var_208_bool == 0; //@nz
		if(var_210_bool != 0) {
			var_211_bool = 0; var_212_object = Obj();
			var_122_object = var_212_object;
			func_3071(var_211_bool, var_212_object);
			var_213_bool = var_211_bool == 0; //@nz
			if(var_213_bool != 0) {
				var_121_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_3069;
	
Label_3069:
	var_121_bool = 1;
	return 4;
	
}


func_3272(var_44_int)
{
	var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_bool = 0;
	var_47_int = 0;
	
Label_3274:
	var_50_string = ""; var_51_int = 0;
	var_47_int = var_51_int;
	func_3265(var_50_string, var_51_int);
	HasAnimation(var_48_bool, "all", var_50_string);
	var_55_bool = var_48_bool == 0; //@nz
	if(var_55_bool != 0) {
	} else {
		var_47_int = var_47_int + (int)1;
		goto Label_3274;
	}
	var_47_int = var_44_int;
	return 4;
	
}


func_3530(var_449_bool)
{
	var_451_int = 0; var_452_string = "";
	func_3220(var_451_int, "b10q04KapellaGotoBlock");
	var_454_bool = var_451_int != (int)0;
	if(var_454_bool != 0) {
		var_449_bool = 1;
		return 0;
	}
	var_449_bool = 0;
	return 0;
}


func_2516(var_0_object, var_1_object, var_2_object, var_3_string, var_617_object, var_618_object)
{
	var_0_object = var_618_object;
	var_1_object = var_617_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_624_string = "";
		func_2574(var_618_object, "Neutral");
		@@@var_0_object:SetMessage((int)540554);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540555, (int)-1, (int)42564);
		@@@var_0_object:AddReply((int)540794, (int)-1, (int)42843);
		goto Label_2544;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x9d8";
	}
Label_2544:
	var_639_bool = 0;
	func_3297(var_639_bool);
	if(var_639_bool != 0) {

	Label_2548:
		lshWaitForAnimEnd();
		var_640_string = var_3_string;
		if(var_640_string != 0) {
		} else {
			var_641_string = "";
			var_641_string = var_2_object;
			func_3151(var_641_string);
			goto Label_2548;
	}
		PlayAnimation("all", "idle");

	Label_2563:
		WaitForAnimEnd();
		var_644_string = var_3_string;
		if(var_644_string != 0) {
			goto Label_2573;
		}
		PlayAnimation("all", "idle");
		goto Label_2563;
	}
	goto Label_2573;
	
Label_2573:
	return 0;
	
}


func_3542(var_455_bool)
{
	var_457_int = 0; var_458_string = "";
	func_3220(var_457_int, "oob10Block2");
	var_460_bool = var_457_int == (int)0;
	if(var_460_bool != 0) {
		var_455_bool = 1;
		return 0;
	}
	var_455_bool = 0;
	return 0;
}


func_3289(var_109_int)
{
	var_109_int = 515532;
	return 0;
}


func_3291(var_108_int)
{
	var_108_int = 514840;
	return 0;
}


func_2267(var_0_object, var_1_object, var_2_object, var_3_string, var_216_object, var_217_object)
{
	var_0_object = var_217_object;
	var_1_object = var_216_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_223_string = "";
		func_2325(var_217_object, "Neutral");
		@@@var_0_object:SetMessage((int)530875);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)530876, (int)32199, (int)32195);
		@@@var_0_object:AddReply((int)530877, (int)32197, (int)32196);
		goto Label_2295;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x8df";
	}
Label_2295:
	var_247_bool = 0;
	func_3297(var_247_bool);
	if(var_247_bool != 0) {

	Label_2299:
		lshWaitForAnimEnd();
		var_248_string = var_3_string;
		if(var_248_string != 0) {
		} else {
			var_249_string = "";
			var_249_string = var_2_object;
			func_3151(var_249_string);
			goto Label_2299;
	}
		PlayAnimation("all", "idle");

	Label_2314:
		WaitForAnimEnd();
		var_262_string = var_3_string;
		if(var_262_string != 0) {
			goto Label_2324;
		}
		PlayAnimation("all", "idle");
		goto Label_2314;
	}
	goto Label_2324;
	
Label_2324:
	return 0;
	
}


func_3293(var_110_string)
{
	var_110_string = "ui/NPC_Block.png";
	return 0;
}


func_1500(var_0_object, var_376_int, var_377_object)
{
	var_379_object = Obj(); var_380_bool = 0; var_381_int = 0; var_382_bool = 0; var_383_object = Obj(); var_384_bool = 0; var_385_int = 0; var_386_bool = 0;
	var_0_object = var_377_object;
	var_387_bool = 0; var_388_object = Obj(); var_389_float = 0;
	var_377_object = var_388_object;
	func_2926(var_387_bool, var_388_object, (float)70.0);
	var_390_bool = var_387_bool == 0; //@nz
	if(var_390_bool != 0) {
		var_376_int = -2;
		return 8;
	}
	CreateDialog(var_383_object);
	var_391_int = 0;
	func_3291(var_391_int);
	@@var_383_object:SetNPCName(var_391_int);
	var_392_int = 0;
	func_3289(var_392_int);
	@@var_383_object:SetNPCDescription(var_392_int);
	var_393_string = "";
	func_3293(var_393_string);
	@@var_383_object:SetPhoto(var_393_string);
	var_394_string = "";
	func_3295(var_394_string);
	@@var_383_object:SetPhoto2(var_394_string);
	var_395_int = 0;
	func_3615(var_395_int);
	@@var_383_object:SetPlayerName(var_395_int);
	IsOverrideActive(var_384_bool);
	var_396_bool = var_384_bool;
	if(var_396_bool != 0) {
		var_376_int = -2;
		return 8;
	}
	DoDialog(var_383_object);
	var_397_bool = 0; var_398_object = Obj();
	func_3204(Obj());
	var_399_object = var_398_object;
	func_3013(var_397_bool, var_398_object);
	var_400_object = Obj(); var_401_object = Obj();
	var_377_object = var_400_object;
	var_383_object = var_401_object;
	TaskCall(5);
	func_1581(var_402_object, var_403_object, var_404_string, var_405_bool, var_400_object, var_401_object);
	TaskReturn();
	@@var_383_object:IsDialogEnd(var_386_bool);
	
Label_1563:
	var_478_bool = var_386_bool == 0; //@nz
	if(var_478_bool != 0) {
		sync();
		@@var_383_object:IsDialogEnd(var_386_bool);
		goto Label_1563;
	}
	var_377_object = Obj();
	func_2995();
	StopDialog(var_383_object);
	@@var_383_object:GetReturnValue((int)-1);
	var_385_int = var_376_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3295(var_111_string)
{
	var_111_string = "ui/NPC_Block_b.png";
	return 0;
}


func_3297(var_103_bool)
{
	var_103_bool = 1;
	return 0;
}


func_3554(var_522_bool)
{
	var_524_int = 0;
	func_3251(var_524_int);
	var_530_bool = var_524_int >= (int)19;
	if(var_530_bool != 0) {
		var_522_bool = 1;
		return 0;
	}
	var_522_bool = 0;
	return 0;
}


func_3299(var_51_object)
{
	var_52_object = Obj(); var_53_string = ""; var_54_float = 0;
	func_3565(Obj());
	var_55_object = var_52_object;
	func_3582(var_52_object, "pt_map_starshina", (float)2);
	var_75_object = Obj();
	func_3565(var_75_object);
	@@var_51_object:ShowMap(var_75_object);
	return 0;
}


func_3565(var_58_object)
{
	var_59_object = Obj(); var_60_object = Obj(); var_61_object = Obj(); var_62_object = Obj();
	GetMainOutdoorScene(var_61_object);
	var_63_bool = var_61_object == 0; //@ne
	if(var_63_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_62_object = 0;
		var_62_object = var_58_object;
		return 4;
	}
	@@var_61_object:GetMap(var_62_object);
	var_62_object = var_58_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_3315()
{
	SetVariable("oob9Block1", (int)1);
	return 0;
}


func_1013(var_0_object, var_1_object, var_2_object, var_3_string, var_506_object, var_507_object)
{
	var_0_object = var_507_object;
	var_1_object = var_506_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_513_bool = 0;
		var_513_bool = 0;
		var_514_bool = 0; var_515_object = Obj();
		var_515_object = var_1_object;
		func_3436(var_515_object);
		if(var_514_bool != 0) {
			var_520_bool = 0; var_521_object = Obj();
			var_521_object = var_1_object;
			func_3460(var_520_bool, var_521_object);
			var_531_bool = var_520_bool == 0; //@nz
			if(var_531_bool != 0) {
				var_513_bool = 1;
			}
		}
		if(var_513_bool != 0) {
			var_532_object = Obj(); var_533_object = Obj();
			var_532_object = var_1_object;
			var_533_object = var_0_object;
			func_3321();
			var_536_object = Obj(); var_537_object = Obj();
			var_536_object = var_1_object;
			var_537_object = var_0_object;
			func_3327();
			var_540_string = "";
			func_1156(var_507_object, "Neutral");
			@@@var_0_object:SetMessage((int)522123);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522124, (int)24011, (int)23291);
			@@@var_0_object:AddReply((int)540112, (int)-1, (int)42079);
		} else {
				var_563_bool = 0; var_564_object = Obj();
				var_564_object = var_1_object;
				func_3460(var_563_bool, var_564_object);
				if(var_563_bool != 0) {
					var_565_object = Obj(); var_566_object = Obj();
					var_565_object = var_1_object;
					var_566_object = var_0_object;
					func_3327();
					var_567_string = "";
					func_1156(var_507_object, "Neutral");
					@@@var_0_object:SetMessage((int)522127);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)522128, (int)-1, (int)23295);
					@@@var_0_object:AddReply((int)522844, (int)-1, (int)24028);
					goto Label_1126;
				}
				var_575_object = Obj(); var_576_object = Obj();
				var_575_object = var_1_object;
				var_576_object = var_0_object;
				func_3327();
				var_577_string = "";
				func_1156(var_507_object, "Neutral");
				@@@var_0_object:SetMessage((int)522125);
				@@@var_0_object:ClearReplies();
				var_579_bool = 0; var_580_object = Obj();
				var_580_object = var_1_object;
				func_3448(var_580_object);
				if(var_579_bool != 0) {
					@@@var_0_object:AddReply((int)522848, (int)24033, (int)24032);
				}
				@@@var_0_object:AddReply((int)522126, (int)-1, (int)23293);
				goto Label_1126;
		}
	}
Label_1126:
	var_555_bool = 0;
	func_3297(var_555_bool);
	if(var_555_bool != 0) {

	Label_1130:
		lshWaitForAnimEnd();
		var_556_string = var_3_string;
		if(var_556_string != 0) {
		} else {
			var_557_string = "";
			var_557_string = var_2_object;
			func_3151(var_557_string);
			goto Label_1130;
	}
		PlayAnimation("all", "idle");

	Label_1145:
		WaitForAnimEnd();
		var_560_string = var_3_string;
		if(var_560_string != 0) {
			goto Label_1155;
		}
		PlayAnimation("all", "idle");
		goto Label_1145;

	}
	goto Label_1155;
	
Label_1155:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x3f9";


func_3321()
{
	SetVariable("oob12Block1", (int)1);
	return 0;
}


func_3582(var_74_object, var_75_string, var_76_float)
{
	var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_object = Obj(); var_81_bool = 0; var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_object = Obj(); var_85_bool = 0;
	GetMainOutdoorScene(var_84_object);
	var_86_bool = var_84_object == 0; //@ne
	if(var_86_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_84_object:GetLocator(var_75_string, var_85_bool, var_82_cvector, var_83_cvector);
	var_88_bool = var_85_bool == 0; //@nz
	if(var_88_bool != 0) {
		var_90_int = "Warning: outdoor scene locator " + var_75_string;
		var_92_int = var_90_int + " doesnt exist";
		Trace(var_92_int);
	}
	@@var_84_object:GetMap(var_74_object);
	var_93_bool = var_74_object == 0; //@ne
	if(var_93_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_95_float = GetByIndex(var_82_cvector, 0);
	var_96_float = GetByIndex(var_82_cvector, 2);
	@@var_74_object:SetMapParams(var_95_float, var_96_float, var_76_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_3327()
{
	SetVariable("b12q01BlockVisit", (int)1);
	return 0;
}


