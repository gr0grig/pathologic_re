// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,GetInvItemByName/2,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Fear|W:Dream|W:Suspicion|W:Autizm|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|A:HasItem|W:ui/NPC_Mishka.png|W:ui/NPC_Mishka_b.png|W:avroks blood is given|W:avroks_blood|W:oob8Mishka1|W:oob1Mishka1|W:b10q04MishkaTalk|W:playsound|W:giveitem|W:b10q03|W:b10q03MishkaGotoDoll|W:pt_b10q03_plant1|A:AddMark|W:quest_b10_03|W:place_doll|A:ShowMap|W:place_blood|W:completed|W:fail|W:b10q03_toy_burah|A:RemoveItemByType|W:oob12Mishka1|W:b8q01|W:b1q05|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x8df
// @RUN_TASK: 12
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa1 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1b7 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x349 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x4de vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x793 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x8b5 vars=int,int
// @TASK_12: vars=cvector params=0
// @EVENT_7: op=0x92b vars=int
// @EVENT_6: op=0x951 vars=
// @EVENT_5: op=0x960 vars=
// @EVENT_45: op=0x96d vars=bool
// @EVENT_0: op=0x979 vars=object
// @PE: 0x51,0x8b,0xa1,0x140,0x1a1,0x1b7,0x2eb,0x333,0x349,0x458,0x4c8,0x4de,0x739,0x77d,0x793,0x865,0x89f,0x8b5,0x92b,0x951,0x96d,0xb7a,0xba2,0xbad,0xbb3,0xbb9,0xbc2,0xbe4,0xbf4,0xc02,0xc0c,0xc1c,0xc22,0xc2e,0xc3a,0xc46,0xc52,0xc5e,0xc6a,0xc75,0xc81,0xc8d,0xd46

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2833();
		var_36_bool = var_31_bool == (int)19166;
		if(var_36_bool != 0) {
			var_37_string = "";
			func_139(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518033);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518034, (int)28430, (int)19167);
			@@@var_0_object:AddReply((int)527134, (int)28433, (int)28432);
			return 0;
		}
		var_62_bool = var_31_bool == (int)28433;
		if(var_62_bool != 0) {
			var_63_string = "";
			func_139(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527135);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527137, (int)-1, (int)28435);
			return 0;
		}
		var_69_bool = var_31_bool == (int)28430;
		if(var_69_bool != 0) {
			var_70_string = "";
			func_139(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527132);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527133, (int)-1, (int)28431);
			return 0;
		}
		var_3_string = true;
		var_75_bool = 0;
		func_2976(var_75_bool);
		if(var_75_bool != 0) {
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
		func_2833();
		var_36_bool = var_31_bool == (int)22586;
		if(var_36_bool != 0) {
			var_37_bool = 0;
			var_37_bool = 0;
			var_38_bool = 0; var_39_object = Obj();
			var_39_object = var_1_object;
			func_3106(var_39_object);
			if(var_38_bool != 0) {
				var_46_bool = 0; var_47_object = Obj();
				var_47_object = var_1_object;
				func_3118(var_47_object);
				if(var_46_bool != 0) {
					var_37_bool = 1;
				}
			}
			if(var_37_bool != 0) {
				var_52_object = Obj(); var_53_object = Obj();
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_2989();
				var_56_string = "";
				func_417(var_32_cvector, "Fear");
				@@@var_0_object:SetMessage((int)521408);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)521409, (int)25093, (int)22587);
				@@@var_0_object:AddReply((int)523832, (int)-1, (int)25104);
				return 0;
			}
			var_80_string = "";
			func_417(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)521410);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521411, (int)25088, (int)22589);
			@@@var_0_object:AddReply((int)523816, (int)-1, (int)25087);
			return 0;
		}
		var_89_bool = var_31_bool == (int)25088;
		if(var_89_bool != 0) {
			var_90_string = "";
			func_417(var_32_cvector, "Dream");
			@@@var_0_object:SetMessage((int)523817);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523818, (int)25090, (int)25089);
			return 0;
		}
		var_96_bool = var_31_bool == (int)25090;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_417(var_32_cvector, "Dream");
			@@@var_0_object:SetMessage((int)523819);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523820, (int)-1, (int)25091);
			@@@var_0_object:AddReply((int)523821, (int)-1, (int)25092);
			return 0;
		}
		var_106_bool = var_31_bool == (int)25093;
		if(var_106_bool != 0) {
			var_107_string = "";
			func_417(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)523822);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523823, (int)25095, (int)25094);
			@@@var_0_object:AddReply((int)523833, (int)25106, (int)25105);
			return 0;
		}
		var_116_bool = var_31_bool == (int)25106;
		if(var_116_bool != 0) {
			var_117_string = "";
			func_417(var_32_cvector, "Suspicion");
			@@@var_0_object:SetMessage((int)523834);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523835, (int)25097, (int)25107);
			return 0;
		}
		var_123_bool = var_31_bool == (int)25095;
		if(var_123_bool != 0) {
			var_124_string = "";
			func_417(var_32_cvector, "Suspicion");
			@@@var_0_object:SetMessage((int)523824);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523825, (int)25097, (int)25096);
			@@@var_0_object:AddReply((int)523827, (int)25097, (int)25098);
			return 0;
		}
		var_133_bool = var_31_bool == (int)25097;
		if(var_133_bool != 0) {
			var_134_string = "";
			func_417(var_32_cvector, "Suspicion");
			@@@var_0_object:SetMessage((int)523826);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523828, (int)25101, (int)25100);
			@@@var_0_object:AddReply((int)523836, (int)-1, (int)25109);
			return 0;
		}
		var_143_bool = var_31_bool == (int)25101;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_417(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)523829);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523830, (int)-1, (int)25102);
			return 0;
		}
		var_3_string = true;
		var_149_bool = 0;
		func_2976(var_149_bool);
		if(var_149_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1b8";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2833();
		var_36_bool = var_32_cvector == (int)28414;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_2995();
		}
		var_42_bool = var_31_bool == (int)28413;
		if(var_42_bool != 0) {
			var_43_string = "";
			func_819(var_32_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)527115);
			@@@var_0_object:ClearReplies();
			var_61_bool = 0;
			var_61_bool = 0;
			var_62_bool = 0; var_63_object = Obj();
			var_63_object = var_1_object;
			func_3130(var_63_object);
			if(var_62_bool != 0) {
				var_70_bool = 0; var_71_object = Obj();
				var_71_object = var_1_object;
				func_3201(var_71_object);
				if(var_70_bool != 0) {
					var_61_bool = 1;
				}
			}
			if(var_61_bool != 0) {
				@@@var_0_object:AddReply((int)527116, (int)28416, (int)28414);
			}
			@@@var_0_object:AddReply((int)527117, (int)-1, (int)28415);
			return 0;
		}
		var_83_bool = var_31_bool == (int)28416;
		if(var_83_bool != 0) {
			var_84_string = "";
			func_819(var_32_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)527118);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527119, (int)28418, (int)28417);
			return 0;
		}
		var_90_bool = var_31_bool == (int)28418;
		if(var_90_bool != 0) {
			var_91_string = "";
			func_819(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)527120);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527121, (int)28420, (int)28419);
			return 0;
		}
		var_97_bool = var_31_bool == (int)28420;
		if(var_97_bool != 0) {
			var_98_string = "";
			func_819(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)527122);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527123, (int)28422, (int)28421);
			return 0;
		}
		var_104_bool = var_31_bool == (int)28422;
		if(var_104_bool != 0) {
			var_105_string = "";
			func_819(var_32_cvector, "Suspicion");
			@@@var_0_object:SetMessage((int)527124);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527125, (int)28424, (int)28423);
			return 0;
		}
		var_111_bool = var_31_bool == (int)28424;
		if(var_111_bool != 0) {
			var_112_string = "";
			func_819(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527126);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527127, (int)28426, (int)28425);
			return 0;
		}
		var_118_bool = var_31_bool == (int)28426;
		if(var_118_bool != 0) {
			var_119_string = "";
			func_819(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527128);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527129, (int)28428, (int)28427);
			return 0;
		}
		var_125_bool = var_31_bool == (int)28428;
		if(var_125_bool != 0) {
			var_126_string = "";
			func_819(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527130);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527131, (int)-1, (int)28429);
			return 0;
		}
		var_3_string = true;
		var_131_bool = 0;
		func_2976(var_131_bool);
		if(var_131_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x34a";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2833();
		var_36_bool = var_32_cvector == (int)32479;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_3016();
			var_86_object = Obj(); var_87_object = Obj();
			var_86_object = var_1_object;
			var_87_object = var_0_object;
			func_3044(var_87_object);
		}
		var_113_bool = var_32_cvector == (int)32616;
		if(var_113_bool != 0) {
			var_114_object = Obj(); var_115_object = Obj();
			var_114_object = var_1_object;
			var_115_object = var_0_object;
			func_3084();
		}
		var_128_bool = var_32_cvector == (int)31854;
		if(var_128_bool != 0) {
			var_129_object = Obj(); var_130_object = Obj();
			var_129_object = var_1_object;
			var_130_object = var_0_object;
			func_3001();
		}
		var_142_bool = var_32_cvector == (int)32486;
		if(var_142_bool != 0) {
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_object;
			func_2978(var_144_object);
			var_167_object = Obj(); var_168_object = Obj();
			var_167_object = var_1_object;
			var_168_object = var_0_object;
			func_3010();
			var_171_object = Obj(); var_172_object = Obj();
			var_171_object = var_1_object;
			var_172_object = var_0_object;
			func_3094(var_172_object);
			var_177_object = Obj(); var_178_object = Obj();
			var_177_object = var_1_object;
			var_178_object = var_0_object;
			func_3060();
		}
		var_193_bool = var_32_cvector == (int)32633;
		if(var_193_bool != 0) {
			var_194_object = Obj(); var_195_object = Obj();
			var_194_object = var_1_object;
			var_195_object = var_0_object;
			func_2978(var_195_object);
			var_196_object = Obj(); var_197_object = Obj();
			var_196_object = var_1_object;
			var_197_object = var_0_object;
			func_3010();
			var_198_object = Obj(); var_199_object = Obj();
			var_198_object = var_1_object;
			var_199_object = var_0_object;
			func_3094(var_199_object);
			var_200_object = Obj(); var_201_object = Obj();
			var_200_object = var_1_object;
			var_201_object = var_0_object;
			func_3060();
		}
		var_203_bool = var_32_cvector == (int)32489;
		if(var_203_bool != 0) {
			var_204_object = Obj(); var_205_object = Obj();
			var_204_object = var_1_object;
			var_205_object = var_0_object;
			func_3074();
		}
		var_218_bool = var_31_bool == (int)32470;
		if(var_218_bool != 0) {
			var_219_bool = 0; var_220_object = Obj();
			var_220_object = var_1_object;
			func_3154(var_220_object);
			if(var_219_bool != 0) {
				var_227_string = "";
				func_1224(var_32_cvector, "Suspicion");
				@@@var_0_object:SetMessage((int)531162);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)531292, (int)32610, (int)32609);
				return 0;
			}
			var_248_string = "";
			func_1224(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530485);
			@@@var_0_object:ClearReplies();
			var_250_bool = 0; var_251_object = Obj();
			var_251_object = var_1_object;
			func_3142(var_251_object);
			if(var_250_bool != 0) {
				@@@var_0_object:AddReply((int)530486, (int)31853, (int)31852);
			}
			var_259_bool = 0;
			var_259_bool = 0;
			var_260_bool = 0; var_261_object = Obj();
			var_261_object = var_1_object;
			func_3166(var_261_object);
			if(var_260_bool != 0) {
				var_266_bool = 0; var_267_object = Obj();
				var_267_object = var_1_object;
				func_3178(var_266_bool, var_267_object);
				if(var_266_bool != 0) {
					var_259_bool = 1;
				}
			}
			if(var_259_bool != 0) {
				@@@var_0_object:AddReply((int)531172, (int)32623, (int)32480);
			}
			var_278_bool = 0; var_279_object = Obj();
			var_279_object = var_1_object;
			func_3189(var_279_object);
			if(var_278_bool != 0) {
				@@@var_0_object:AddReply((int)531179, (int)32617, (int)32487);
			}
			@@@var_0_object:AddReply((int)530489, (int)-1, (int)31855);
			return 0;
		}
		var_291_bool = var_31_bool == (int)32617;
		if(var_291_bool != 0) {
			var_292_string = "";
			func_1224(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531297);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531298, (int)32488, (int)32618);
			return 0;
		}
		var_298_bool = var_31_bool == (int)32488;
		if(var_298_bool != 0) {
			var_299_string = "";
			func_1224(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531180);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531299, (int)32620, (int)32619);
			@@@var_0_object:AddReply((int)531301, (int)32620, (int)32621);
			return 0;
		}
		var_308_bool = var_31_bool == (int)32620;
		if(var_308_bool != 0) {
			var_309_string = "";
			func_1224(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531300);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531181, (int)-1, (int)32489);
			return 0;
		}
		var_315_bool = var_31_bool == (int)32623;
		if(var_315_bool != 0) {
			var_316_string = "";
			func_1224(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531302);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531303, (int)32481, (int)32624);
			@@@var_0_object:AddReply((int)531304, (int)32481, (int)32625);
			return 0;
		}
		var_325_bool = var_31_bool == (int)32481;
		if(var_325_bool != 0) {
			var_326_string = "";
			func_1224(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531173);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531174, (int)32483, (int)32482);
			@@@var_0_object:AddReply((int)531305, (int)32483, (int)32627);
			return 0;
		}
		var_335_bool = var_31_bool == (int)32483;
		if(var_335_bool != 0) {
			var_336_string = "";
			func_1224(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531175);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531176, (int)32485, (int)32484);
			@@@var_0_object:AddReply((int)531306, (int)32630, (int)32629);
			return 0;
		}
		var_345_bool = var_31_bool == (int)32630;
		if(var_345_bool != 0) {
			var_346_string = "";
			func_1224(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531307);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531308, (int)32485, (int)32631);
			return 0;
		}
		var_352_bool = var_31_bool == (int)32485;
		if(var_352_bool != 0) {
			var_353_string = "";
			func_1224(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531177);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531178, (int)-1, (int)32486);
			@@@var_0_object:AddReply((int)531309, (int)-1, (int)32633);
			return 0;
		}
		var_362_bool = var_31_bool == (int)31853;
		if(var_362_bool != 0) {
			var_363_string = "";
			func_1224(var_32_cvector, "Dream");
			@@@var_0_object:SetMessage((int)530487);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531310, (int)32635, (int)32634);
			@@@var_0_object:AddReply((int)531314, (int)32635, (int)32638);
			return 0;
		}
		var_372_bool = var_31_bool == (int)32635;
		if(var_372_bool != 0) {
			var_373_string = "";
			func_1224(var_32_cvector, "Dream");
			@@@var_0_object:SetMessage((int)531311);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531312, (int)32637, (int)32636);
			@@@var_0_object:AddReply((int)531315, (int)32637, (int)32639);
			return 0;
		}
		var_382_bool = var_31_bool == (int)32637;
		if(var_382_bool != 0) {
			var_383_string = "";
			func_1224(var_32_cvector, "Dream");
			@@@var_0_object:SetMessage((int)531313);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530488, (int)-1, (int)31854);
			return 0;
		}
		var_389_bool = var_31_bool == (int)32610;
		if(var_389_bool != 0) {
			var_390_string = "";
			func_1224(var_32_cvector, "Suspicion");
			@@@var_0_object:SetMessage((int)531293);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531291, (int)32473, (int)32608);
			@@@var_0_object:AddReply((int)531163, (int)32475, (int)32471);
			return 0;
		}
		var_399_bool = var_31_bool == (int)32473;
		if(var_399_bool != 0) {
			var_400_string = "";
			func_1224(var_32_cvector, "Dream");
			@@@var_0_object:SetMessage((int)531165);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531166, (int)32475, (int)32474);
			@@@var_0_object:AddReply((int)531294, (int)32476, (int)32612);
			return 0;
		}
		var_409_bool = var_31_bool == (int)32475;
		if(var_409_bool != 0) {
			var_410_string = "";
			func_1224(var_32_cvector, "Dream");
			@@@var_0_object:SetMessage((int)531167);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531164, (int)32476, (int)32472);
			@@@var_0_object:AddReply((int)531295, (int)32478, (int)32614);
			return 0;
		}
		var_419_bool = var_31_bool == (int)32476;
		if(var_419_bool != 0) {
			var_420_string = "";
			func_1224(var_32_cvector, "Dream");
			@@@var_0_object:SetMessage((int)531168);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531169, (int)32478, (int)32477);
			return 0;
		}
		var_426_bool = var_31_bool == (int)32478;
		if(var_426_bool != 0) {
			var_427_string = "";
			func_1224(var_32_cvector, "Suspicion");
			@@@var_0_object:SetMessage((int)531170);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531171, (int)-1, (int)32479);
			@@@var_0_object:AddReply((int)531296, (int)-1, (int)32616);
			return 0;
		}
		var_3_string = true;
		var_435_bool = 0;
		func_2976(var_435_bool);
		if(var_435_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x4df";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2833();
		var_36_bool = var_32_cvector == (int)36919;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_3100();
		}
		var_42_bool = var_31_bool == (int)36918;
		if(var_42_bool != 0) {
			var_43_string = "";
			func_1917(var_32_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)535243);
			@@@var_0_object:ClearReplies();
			var_61_bool = 0; var_62_object = Obj();
			var_62_object = var_1_object;
			func_3213(var_62_object);
			if(var_61_bool != 0) {
				@@@var_0_object:AddReply((int)535244, (int)37054, (int)36919);
			}
			@@@var_0_object:AddReply((int)535367, (int)-1, (int)37052);
			@@@var_0_object:AddReply((int)535368, (int)-1, (int)37053);
			return 0;
		}
		var_79_bool = var_31_bool == (int)37054;
		if(var_79_bool != 0) {
			var_80_string = "";
			func_1917(var_32_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)535369);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535370, (int)37056, (int)37055);
			@@@var_0_object:AddReply((int)535375, (int)-1, (int)37060);
			return 0;
		}
		var_89_bool = var_31_bool == (int)37056;
		if(var_89_bool != 0) {
			var_90_string = "";
			func_1917(var_32_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)535371);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535372, (int)37058, (int)37057);
			@@@var_0_object:AddReply((int)535376, (int)-1, (int)37061);
			return 0;
		}
		var_99_bool = var_31_bool == (int)37058;
		if(var_99_bool != 0) {
			var_100_string = "";
			func_1917(var_32_cvector, "Dream");
			@@@var_0_object:SetMessage((int)535373);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535374, (int)-1, (int)37059);
			@@@var_0_object:AddReply((int)535377, (int)-1, (int)37062);
			return 0;
		}
		var_3_string = true;
		var_108_bool = 0;
		func_2976(var_108_bool);
		if(var_108_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x794";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_cvector)
{
	if((int)1 != 0) {
		func_2833();
		var_36_bool = var_31_int == (int)42560;
		if(var_36_bool != 0) {
			var_37_string = "";
			func_2207(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540551);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540552, (int)-1, (int)42561);
			@@@var_0_object:AddReply((int)540795, (int)-1, (int)42844);
			return 0;
		}
		var_3_string = true;
		var_61_bool = 0;
		func_2976(var_61_bool);
		if(var_61_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x8b6";
	
}


task_12_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_int)
{
	var_33_bool = var_31_int == (int)10;
	if(var_33_bool != 0) {
		func_2343();
		var_35_bool = 0;
		var_35_bool = 0;
		var_36_bool = 0;
		func_2557(var_36_bool);
		if(var_36_bool != 0) {
			var_39_bool = 0;
			func_2312(var_39_bool);
			if(var_39_bool != 0) {
				var_35_bool = 1;
			}
		}
		if(var_35_bool != 0) {
			var_56_bool = 0;
			func_2292(var_56_bool);
			if(var_56_bool != 0) {
				var_75_bool = 0; var_76_object = Obj();
				func_2840(Obj());
				var_77_object = var_76_object;
				func_2707(var_75_bool, var_76_object);
			}
		} else {
			func_2307(var_31_int);
			func_2334();
		}
	}
	return 0;
	
}


task_12_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_2525();
	func_2343();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_12_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	StopGroup0();
	func_2343();
	var_32_string = "";
	func_2787("Neutral");
	func_2334();
	return 0;
}


task_12_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_bool)
{
	var_32_bool = var_31_bool;
	if(var_32_bool != 0) {
		func_2334();
	} else {
		var_38_string = "";
		func_2787("Neutral");
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
		func_2525();
		var_35_bool = 0; var_36_object = Obj();
		var_31_object = var_36_object;
		func_2548(var_35_bool, var_36_object);
		EventEnable(0);
		var_49_object = Obj();
		var_31_object = var_49_object;
		func_3398(var_49_object);
		var_661_string = "";
		func_2787("Neutral");
		func_2343();
		func_2334();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	var_31_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_2278(var_30_cvector);
	return 0;
}


func_0(var_0_object, var_52_int, var_53_object)
{
	var_55_object = Obj(); var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_object = Obj(); var_60_bool = 0; var_61_int = 0; var_62_bool = 0;
	var_0_object = var_53_object;
	var_63_bool = 0; var_64_object = Obj(); var_65_float = 0;
	var_53_object = var_64_object;
	func_2562(var_63_bool, var_64_object, (float)70.0);
	var_110_bool = var_63_bool == 0; //@nz
	if(var_110_bool != 0) {
		var_52_int = -2;
		return 8;
	}
	CreateDialog(var_59_object);
	var_111_int = 0;
	func_2970(var_111_int);
	@@var_59_object:SetNPCName(var_111_int);
	var_112_int = 0;
	func_2968(var_112_int);
	@@var_59_object:SetNPCDescription(var_112_int);
	var_113_string = "";
	func_2972(var_113_string);
	@@var_59_object:SetPhoto(var_113_string);
	var_114_string = "";
	func_2974(var_114_string);
	@@var_59_object:SetPhoto2(var_114_string);
	var_115_int = 0;
	func_3381(var_115_int);
	@@var_59_object:SetPlayerName(var_115_int);
	IsOverrideActive(var_60_bool);
	var_123_bool = var_60_bool;
	if(var_123_bool != 0) {
		var_52_int = -2;
		return 8;
	}
	DoDialog(var_59_object);
	var_124_bool = 0; var_125_object = Obj();
	func_2840(Obj());
	var_126_object = var_125_object;
	func_2649(var_124_bool, var_125_object);
	var_219_object = Obj(); var_220_object = Obj();
	var_53_object = var_219_object;
	var_59_object = var_220_object;
	TaskCall(1);
	func_81(var_221_object, var_222_object, var_223_string, var_224_bool, var_219_object, var_220_object);
	TaskReturn();
	@@var_59_object:IsDialogEnd(var_62_bool);
	
Label_63:
	var_268_bool = var_62_bool == 0; //@nz
	if(var_268_bool != 0) {
		sync();
		@@var_59_object:IsDialogEnd(var_62_bool);
		goto Label_63;
	}
	var_53_object = Obj();
	func_2631();
	StopDialog(var_59_object);
	@@var_59_object:GetReturnValue((int)-1);
	var_61_int = var_52_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2562(var_63_bool, var_64_object, var_65_float)
{
	var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_bool = 0; var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_bool = 0; var_83_bool = 0;
	@@var_64_object:GetPosition(var_76_cvector);
	@@var_64_object:GetEyesHeight(var_75_float);
	var_84_float = GetByIndex(var_76_cvector, 1);
	var_84_float = var_84_float + var_75_float;
	SetByIndex(var_76_cvector, 1) = var_84_float;
	GetPosition(var_77_cvector);
	GetEyesHeight(var_75_float);
	var_85_float = GetByIndex(var_77_cvector, 1);
	var_85_float = var_85_float + var_75_float;
	SetByIndex(var_77_cvector, 1) = var_85_float;
	var_78_cvector = var_76_cvector - var_77_cvector;
	var_86_float = GetByIndex(var_78_cvector, 1);
	SetByIndex(var_78_cvector, 1) = (float)0;
	var_87_int = var_78_cvector | var_78_cvector;
	var_88_float = sqrt(var_87_int);
	var_78_cvector = var_78_cvector / var_88_float;
	var_79_cvector = -var_78_cvector;
	var_89_float = var_78_cvector * var_65_float;
	var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0);
	var_91_cvector = var_79_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2846(var_90_cvector, var_91_cvector);
	var_99_float = var_90_cvector * (int)25;
	var_100_int = var_89_float + var_99_float;
	var_80_cvector = var_100_int - CVector(0.0, 10.0, 0.0);
	var_81_cvector = var_77_cvector + var_80_cvector;
	IsOverrideActive(var_82_bool);
	var_102_bool = var_82_bool;
	if(var_102_bool != 0) {
		var_63_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_81_cvector, var_79_cvector, (bool)1);
	var_104_float = GetByIndex(var_80_cvector, 0);
	var_105_float = GetByIndex(var_80_cvector, 2);
	Rotate(var_104_float, var_105_float);
	var_106_bool = 0;
	func_2976(var_106_bool);
	if(var_106_bool != 0) {
	} else {
		HasAnimationTrack(var_83_bool, "head");
		var_108_bool = var_83_bool;
		if(var_108_bool == 0) goto Label_2625;
		LookAsyncCamera("head");
	}
Label_2625:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_63_bool = 1;
	return 18;
	
}


func_3074()
{
	func_3225();
	var_214_bool = 0; var_215_string = ""; var_216_string = "";
	func_2912(var_214_bool, "quest_b10_03", "completed");
	return 0;
}


func_2818(var_158_bool, var_159_string)
{
	var_160_bool = 0; var_161_bool = 0;
	var_162_bool = 0;
	func_2976(var_162_bool);
	if(var_162_bool != 0) {
		lshHasSpeech(var_161_bool, var_159_string);
		var_163_bool = var_161_bool;
		if(var_163_bool != 0) {
			lshPlaySpeech(var_159_string);
			var_158_bool = 1;
			return 2;
		}
	}
	var_158_bool = 0;
	return 2;
}


func_2307(var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0);
	var_109_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_108_float, var_109_float);
	return 0;
}


func_3331(var_43_object)
{
	var_44_object = Obj(); var_45_object = Obj(); var_46_object = Obj(); var_47_object = Obj();
	GetMainOutdoorScene(var_46_object);
	var_48_bool = var_46_object == 0; //@ne
	if(var_48_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_47_object = 0;
		var_47_object = var_43_object;
		return 4;
	}
	@@var_46_object:GetMap(var_47_object);
	var_47_object = var_43_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1031(var_0_object, var_437_int, var_438_object)
{
	var_440_object = Obj(); var_441_bool = 0; var_442_int = 0; var_443_bool = 0; var_444_object = Obj(); var_445_bool = 0; var_446_int = 0; var_447_bool = 0;
	var_0_object = var_438_object;
	var_448_bool = 0; var_449_object = Obj(); var_450_float = 0;
	var_438_object = var_449_object;
	func_2562(var_448_bool, var_449_object, (float)70.0);
	var_451_bool = var_448_bool == 0; //@nz
	if(var_451_bool != 0) {
		var_437_int = -2;
		return 8;
	}
	CreateDialog(var_444_object);
	var_452_int = 0;
	func_2970(var_452_int);
	@@var_444_object:SetNPCName(var_452_int);
	var_453_int = 0;
	func_2968(var_453_int);
	@@var_444_object:SetNPCDescription(var_453_int);
	var_454_string = "";
	func_2972(var_454_string);
	@@var_444_object:SetPhoto(var_454_string);
	var_455_string = "";
	func_2974(var_455_string);
	@@var_444_object:SetPhoto2(var_455_string);
	var_456_int = 0;
	func_3381(var_456_int);
	@@var_444_object:SetPlayerName(var_456_int);
	IsOverrideActive(var_445_bool);
	var_457_bool = var_445_bool;
	if(var_457_bool != 0) {
		var_437_int = -2;
		return 8;
	}
	DoDialog(var_444_object);
	var_458_bool = 0; var_459_object = Obj();
	func_2840(Obj());
	var_460_object = var_459_object;
	func_2649(var_458_bool, var_459_object);
	var_461_object = Obj(); var_462_object = Obj();
	var_438_object = var_461_object;
	var_444_object = var_462_object;
	TaskCall(7);
	func_1112(var_463_object, var_464_object, var_465_string, var_466_bool, var_461_object, var_462_object);
	TaskReturn();
	@@var_444_object:IsDialogEnd(var_447_bool);
	
Label_1094:
	var_536_bool = var_447_bool == 0; //@nz
	if(var_536_bool != 0) {
		sync();
		@@var_444_object:IsDialogEnd(var_447_bool);
		goto Label_1094;
	}
	var_438_object = Obj();
	func_2631();
	StopDialog(var_444_object);
	@@var_444_object:GetReturnValue((int)-1);
	var_446_int = var_437_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2312(var_39_bool)
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
	func_2530(var_46_float, var_47_object);
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


func_3084()
{
	func_3238();
	var_124_bool = 0; var_125_string = ""; var_126_string = "";
	func_2912(var_124_bool, "quest_b10_03", "fail");
	return 0;
}


func_2833()
{
	var_34_bool = 0;
	func_2976(var_34_bool);
	if(var_34_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2068(var_0_object, var_605_int, var_606_object)
{
	var_608_object = Obj(); var_609_bool = 0; var_610_int = 0; var_611_bool = 0; var_612_object = Obj(); var_613_bool = 0; var_614_int = 0; var_615_bool = 0;
	var_0_object = var_606_object;
	var_616_bool = 0; var_617_object = Obj(); var_618_float = 0;
	var_606_object = var_617_object;
	func_2562(var_616_bool, var_617_object, (float)70.0);
	var_619_bool = var_616_bool == 0; //@nz
	if(var_619_bool != 0) {
		var_605_int = -2;
		return 8;
	}
	CreateDialog(var_612_object);
	var_620_int = 0;
	func_2970(var_620_int);
	@@var_612_object:SetNPCName(var_620_int);
	var_621_int = 0;
	func_2968(var_621_int);
	@@var_612_object:SetNPCDescription(var_621_int);
	var_622_string = "";
	func_2972(var_622_string);
	@@var_612_object:SetPhoto(var_622_string);
	var_623_string = "";
	func_2974(var_623_string);
	@@var_612_object:SetPhoto2(var_623_string);
	var_624_int = 0;
	func_3381(var_624_int);
	@@var_612_object:SetPlayerName(var_624_int);
	IsOverrideActive(var_613_bool);
	var_625_bool = var_613_bool;
	if(var_625_bool != 0) {
		var_605_int = -2;
		return 8;
	}
	DoDialog(var_612_object);
	var_626_bool = 0; var_627_object = Obj();
	func_2840(Obj());
	var_628_object = var_627_object;
	func_2649(var_626_bool, var_627_object);
	var_629_object = Obj(); var_630_object = Obj();
	var_606_object = var_629_object;
	var_612_object = var_630_object;
	TaskCall(11);
	func_2149(var_631_object, var_632_object, var_633_string, var_634_bool, var_629_object, var_630_object);
	TaskReturn();
	@@var_612_object:IsDialogEnd(var_615_bool);
	
Label_2131:
	var_659_bool = var_615_bool == 0; //@nz
	if(var_659_bool != 0) {
		sync();
		@@var_612_object:IsDialogEnd(var_615_bool);
		goto Label_2131;
	}
	var_606_object = Obj();
	func_2631();
	StopDialog(var_612_object);
	@@var_612_object:GetReturnValue((int)-1);
	var_614_int = var_605_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3348(var_88_object, var_89_string, var_90_float)
{
	var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_object = Obj(); var_95_bool = 0; var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_object = Obj(); var_99_bool = 0;
	GetMainOutdoorScene(var_98_object);
	var_100_bool = var_98_object == 0; //@ne
	if(var_100_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_98_object:GetLocator(var_89_string, var_99_bool, var_96_cvector, var_97_cvector);
	var_102_bool = var_99_bool == 0; //@nz
	if(var_102_bool != 0) {
		var_104_int = "Warning: outdoor scene locator " + var_89_string;
		var_106_int = var_104_int + " doesnt exist";
		Trace(var_106_int);
	}
	@@var_98_object:GetMap(var_88_object);
	var_107_bool = var_88_object == 0; //@ne
	if(var_107_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_109_float = GetByIndex(var_96_cvector, 0);
	var_110_float = GetByIndex(var_96_cvector, 2);
	@@var_88_object:SetMapParams(var_109_float, var_110_float, var_90_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_3094(var_171_object)
{
	var_173_int = 0; var_174_int = 0;
	@@var_171_object:RemoveItemByType(var_174_int, "b10q03_toy_burah", (int)1);
	return 2;
}


func_2840(var_126_object)
{
	var_127_object = Obj(); var_128_object = Obj();
	self(var_128_object);
	var_128_object = var_126_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3100()
{
	SetVariable("oob12Mishka1", (int)1);
	return 0;
}


func_2334()
{
	var_663_float = 0; var_664_float = 0;
	rand(var_664_float, (int)8, (int)16);
	SetTimer((int)10, var_664_float);
	return 2;
}


func_2846(var_90_cvector, var_91_cvector)
{
	var_93_float = 0; var_94_float = 0;
	var_95_int = var_91_cvector | var_91_cvector;
	var_94_float = sqrt(var_95_int);
	var_96_float = 9.999999974752427e-07;
	var_97_bool = var_94_float < var_96_float;
	if(var_97_bool != 0) {
		var_90_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_90_cvector = var_91_cvector / var_94_float;
	return 2;
}


func_3106(var_386_bool)
{
	var_388_int = 0; var_389_string = "";
	func_2856(var_388_int, "b8q01");
	var_391_bool = var_388_int == (int)2;
	if(var_391_bool != 0) {
		var_386_bool = 1;
		return 0;
	}
	var_386_bool = 0;
	return 0;
}


func_2343()
{
	KillTimer((int)10);
	return 0;
}


func_2856(var_324_int, var_325_string)
{
	var_326_int = 0; var_327_int = 0;
	GetVariable(var_325_string, var_327_int);
	var_327_int = var_324_int;
	return 2;
}


func_2861(var_162_int, var_163_int)
{
	var_164_object = Obj(); var_165_object = Obj();
	CreateIntVector(var_165_object);
	@@var_165_object:add(var_162_int);
	@@var_165_object:add(var_163_int);
	SendWorldWndMessage((int)3, var_165_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3118(var_392_bool)
{
	var_394_int = 0; var_395_string = "";
	func_2856(var_394_int, "oob8Mishka1");
	var_397_bool = var_394_int == (int)0;
	if(var_397_bool != 0) {
		var_392_bool = 1;
		return 0;
	}
	var_392_bool = 0;
	return 0;
}


func_819(var_2_object, var_312_string)
{
	var_313_bool = 0;
	func_2976(var_313_bool);
	var_314_bool = var_313_bool == 0; //@nz
	if(var_314_bool != 0) {
		return 0;
	}
	var_315_bool = var_312_string == var_2_object;
	if(var_315_bool != 0) {
		return 0;
	}
	var_316_string = ""; var_317_bool = 0;
	var_312_string = var_316_string;
	var_319_bool = var_312_string == "";
	if(var_319_bool != 0) {
		var_317_bool = 0;
	} else {
		var_317_bool = 1;
	}
	func_2803(var_316_string, var_317_bool);
	var_2_object = var_312_string;
	return 0;
	
}


func_3381(var_115_int)
{
	var_116_int = 0; var_117_int = 0;
	GetVariable("branch", var_117_int);
	var_120_bool = var_117_int == (int)0;
	if(var_120_bool != 0) {
		var_115_int = 1;
		return 2;
	EMIT "GOTO 0xd44";
	}
	var_122_bool = var_117_int == (int)1;
	if(var_122_bool != 0) {
		var_115_int = 2;
		return 2;
	}
	var_115_int = 3;
	return 2;
}


func_1849(var_0_object, var_1_object, var_2_object, var_3_string, var_564_object, var_565_object)
{
	var_0_object = var_565_object;
	var_1_object = var_564_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_571_string = "";
		func_1917(var_565_object, "Autizm");
		@@@var_0_object:SetMessage((int)535243);
		@@@var_0_object:ClearReplies();
		var_580_bool = 0; var_581_object = Obj();
		var_581_object = var_1_object;
		func_3213(var_581_object);
		if(var_580_bool != 0) {
			@@@var_0_object:AddReply((int)535244, (int)37054, (int)36919);
		}
		@@@var_0_object:AddReply((int)535367, (int)-1, (int)37052);
		@@@var_0_object:AddReply((int)535368, (int)-1, (int)37053);
		goto Label_1887;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x73d";
	}
Label_1887:
	var_595_bool = 0;
	func_2976(var_595_bool);
	if(var_595_bool != 0) {

	Label_1891:
		lshWaitForAnimEnd();
		var_596_string = var_3_string;
		if(var_596_string != 0) {
		} else {
			var_597_string = "";
			var_597_string = var_2_object;
			func_2787(var_597_string);
			goto Label_1891;
	}
		PlayAnimation("all", "idle");

	Label_1906:
		WaitForAnimEnd();
		var_600_string = var_3_string;
		if(var_600_string != 0) {
			goto Label_1916;
		}
		PlayAnimation("all", "idle");
		goto Label_1906;
	}
	goto Label_1916;
	
Label_1916:
	return 0;
	
}


func_3130(var_322_bool)
{
	var_324_int = 0; var_325_string = "";
	func_2856(var_324_int, "oob1Mishka1");
	var_329_bool = var_324_int == (int)0;
	if(var_329_bool != 0) {
		var_322_bool = 1;
		return 0;
	}
	var_322_bool = 0;
	return 0;
}


func_2873(var_151_object, var_152_object, var_153_int)
{
	var_154_int = 0; var_155_int = 0; var_156_bool = 0; var_157_int = 0; var_158_int = 0; var_159_bool = 0;
	@@var_152_object:GetItemID(var_157_int);
	GetInvItemProperty(var_158_int, var_157_int, "Category");
	@@var_151_object:AddItem(var_159_bool, var_152_object, var_158_int, var_153_int);
	var_161_bool = var_159_bool == 0; //@nz
	if(var_161_bool != 0) {
		@@var_151_object:DropItems(var_152_object, var_153_int);
	} else {
		var_162_int = 0; var_163_int = 0;
		var_157_int = var_162_int;
		var_153_int = var_163_int;
		func_2861(var_162_int, var_163_int);
	}
	return 6;
	
}


func_320(var_0_object, var_1_object, var_2_object, var_3_string, var_378_object, var_379_object)
{
	var_0_object = var_379_object;
	var_1_object = var_378_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_385_bool = 0;
		var_385_bool = 0;
		var_386_bool = 0; var_387_object = Obj();
		var_387_object = var_1_object;
		func_3106(var_387_object);
		if(var_386_bool != 0) {
			var_392_bool = 0; var_393_object = Obj();
			var_393_object = var_1_object;
			func_3118(var_393_object);
			if(var_392_bool != 0) {
				var_385_bool = 1;
			}
		}
		if(var_385_bool != 0) {
			var_398_object = Obj(); var_399_object = Obj();
			var_398_object = var_1_object;
			var_399_object = var_0_object;
			func_2989();
			var_402_string = "";
			func_417(var_379_object, "Fear");
			@@@var_0_object:SetMessage((int)521408);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521409, (int)25093, (int)22587);
			@@@var_0_object:AddReply((int)523832, (int)-1, (int)25104);
		} else {
				var_425_string = "";
				func_417(var_379_object, "Fear");
				@@@var_0_object:SetMessage((int)521410);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)521411, (int)25088, (int)22589);
				@@@var_0_object:AddReply((int)523816, (int)-1, (int)25087);
				goto Label_387;
		}
	}
Label_387:
	var_417_bool = 0;
	func_2976(var_417_bool);
	if(var_417_bool != 0) {

	Label_391:
		lshWaitForAnimEnd();
		var_418_string = var_3_string;
		if(var_418_string != 0) {
		} else {
			var_419_string = "";
			var_419_string = var_2_object;
			func_2787(var_419_string);
			goto Label_391;
	}
		PlayAnimation("all", "idle");

	Label_406:
		WaitForAnimEnd();
		var_422_string = var_3_string;
		if(var_422_string != 0) {
			goto Label_416;
		}
		PlayAnimation("all", "idle");
		goto Label_406;

	}
	goto Label_416;
	
Label_416:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x144";


func_3142(var_496_bool)
{
	var_498_int = 0; var_499_string = "";
	func_2856(var_498_int, "b10q04MishkaTalk");
	var_501_bool = var_498_int == (int)1;
	if(var_501_bool != 0) {
		var_496_bool = 1;
		return 0;
	}
	var_496_bool = 0;
	return 0;
}


func_2631()
{
	var_270_bool = 0; var_271_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_273_bool = 0;
	func_2976(var_273_bool);
	if(var_273_bool != 0) {
	} else {
		HasAnimationTrack(var_271_bool, "head");
		var_275_bool = var_271_bool;
		if(var_275_bool == 0) goto Label_2648;
		UnlookAsync("head");
	}
Label_2648:
	return 2;
	
}


func_3398(var_49_object)
{
	var_50_bool = GlobalVars[1];
	var_51_bool = var_50_bool == 0; //@nz
	if(var_51_bool != 0) {
		var_52_int = 0; var_53_object = Obj();
		var_49_object = var_53_object;
		TaskCall(0);
		func_0(var_54_object, var_52_int, var_53_object);
		TaskReturn();
		var_277_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_278_bool = 0; var_279_int = 0;
	func_2938(var_278_bool, (int)1);
	if(var_278_bool != 0) {
		var_281_int = 0; var_282_object = Obj();
		var_49_object = var_282_object;
		TaskCall(4);
		func_666(var_283_object, var_281_int, var_282_object);
		TaskReturn();
		return 0;
	}
	var_352_bool = 0; var_353_int = 0;
	func_2938(var_352_bool, (int)8);
	if(var_352_bool != 0) {
		var_354_int = 0; var_355_object = Obj();
		var_49_object = var_355_object;
		TaskCall(2);
		func_239(var_356_object, var_354_int, var_355_object);
		TaskReturn();
		return 0;
	}
	var_435_bool = 0; var_436_int = 0;
	func_2938(var_435_bool, (int)10);
	if(var_435_bool != 0) {
		var_437_int = 0; var_438_object = Obj();
		var_49_object = var_438_object;
		TaskCall(6);
		func_1031(var_439_object, var_437_int, var_438_object);
		TaskReturn();
		return 0;
	}
	var_538_bool = 0; var_539_int = 0;
	func_2938(var_538_bool, (int)12);
	if(var_538_bool != 0) {
		var_540_int = 0; var_541_object = Obj();
		var_49_object = var_541_object;
		TaskCall(8);
		func_1768(var_542_object, var_540_int, var_541_object);
		TaskReturn();
		return 0;
	}
	var_605_int = 0; var_606_object = Obj();
	var_49_object = var_606_object;
	TaskCall(10);
	func_2068(var_607_object, var_605_int, var_606_object);
	TaskReturn();
	return 0;
}


func_2892(var_146_object, var_147_string, var_148_int)
{
	var_149_object = Obj(); var_150_object = Obj();
	CreateInvItem(var_150_object);
	@@var_150_object:SetItemName(var_147_string);
	var_151_object = Obj(); var_152_object = Obj(); var_153_int = 0;
	var_146_object = var_151_object;
	var_150_object = var_152_object;
	var_148_int = var_153_int;
	func_2873(var_151_object, var_152_object, var_153_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_219_object, var_220_object)
{
	var_0_object = var_220_object;
	var_1_object = var_219_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_226_string = "";
		func_139(var_220_object, "Neutral");
		@@@var_0_object:SetMessage((int)518033);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)518034, (int)28430, (int)19167);
		@@@var_0_object:AddReply((int)527134, (int)28433, (int)28432);
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	var_250_bool = 0;
	func_2976(var_250_bool);
	if(var_250_bool != 0) {

	Label_113:
		lshWaitForAnimEnd();
		var_251_string = var_3_string;
		if(var_251_string != 0) {
		} else {
			var_252_string = "";
			var_252_string = var_2_object;
			func_2787(var_252_string);
			goto Label_113;
	}
		PlayAnimation("all", "idle");

	Label_128:
		WaitForAnimEnd();
		var_265_string = var_3_string;
		if(var_265_string != 0) {
			goto Label_138;
		}
		PlayAnimation("all", "idle");
		goto Label_128;
	}
	goto Label_138;
	
Label_138:
	return 0;
	
}


func_3154(var_468_bool)
{
	var_470_int = 0; var_471_string = "";
	func_2856(var_470_int, "b10q03");
	var_473_bool = var_470_int == (int)1;
	if(var_473_bool != 0) {
		var_468_bool = 1;
		return 0;
	}
	var_468_bool = 0;
	return 0;
}


func_1112(var_0_object, var_1_object, var_2_object, var_3_string, var_461_object, var_462_object)
{
	var_0_object = var_462_object;
	var_1_object = var_461_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_468_bool = 0; var_469_object = Obj();
		var_469_object = var_1_object;
		func_3154(var_469_object);
		if(var_468_bool != 0) {
			var_474_string = "";
			func_1224(var_462_object, "Suspicion");
			@@@var_0_object:SetMessage((int)531162);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531292, (int)32610, (int)32609);
		} else {
				var_494_string = "";
				func_1224(var_462_object, "Neutral");
				@@@var_0_object:SetMessage((int)530485);
				@@@var_0_object:ClearReplies();
				var_496_bool = 0; var_497_object = Obj();
				var_497_object = var_1_object;
				func_3142(var_497_object);
				if(var_496_bool != 0) {
					@@@var_0_object:AddReply((int)530486, (int)31853, (int)31852);
				}
				var_505_bool = 0;
				var_505_bool = 0;
				var_506_bool = 0; var_507_object = Obj();
				var_507_object = var_1_object;
				func_3166(var_507_object);
				if(var_506_bool != 0) {
					var_512_bool = 0; var_513_object = Obj();
					var_513_object = var_1_object;
					func_3178(var_512_bool, var_513_object);
					if(var_512_bool != 0) {
						var_505_bool = 1;
					}
				}
				if(var_505_bool != 0) {
					@@@var_0_object:AddReply((int)531172, (int)32623, (int)32480);
				}
				var_524_bool = 0; var_525_object = Obj();
				var_525_object = var_1_object;
				func_3189(var_525_object);
				if(var_524_bool != 0) {
					@@@var_0_object:AddReply((int)531179, (int)32617, (int)32487);
				}
				@@@var_0_object:AddReply((int)530489, (int)-1, (int)31855);
				goto Label_1194;
		}
	}
Label_1194:
	var_486_bool = 0;
	func_2976(var_486_bool);
	if(var_486_bool != 0) {

	Label_1198:
		lshWaitForAnimEnd();
		var_487_string = var_3_string;
		if(var_487_string != 0) {
		} else {
			var_488_string = "";
			var_488_string = var_2_object;
			func_2787(var_488_string);
			goto Label_1198;
	}
		PlayAnimation("all", "idle");

	Label_1213:
		WaitForAnimEnd();
		var_491_string = var_3_string;
		if(var_491_string != 0) {
			goto Label_1223;
		}
		PlayAnimation("all", "idle");
		goto Label_1213;

	}
	goto Label_1223;
	
Label_1223:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x45c";


func_2649(var_124_bool, var_125_object)
{
	var_129_int = 0; var_130_int = 0; var_131_int = 0; var_132_int = 0;
	GetVariable("voice_common", var_131_int);
	var_134_int = var_131_int;
	if(var_134_int != 0) {
		var_135_bool = 0; var_136_object = Obj();
		var_125_object = var_136_object;
		func_2707(var_135_bool, var_136_object);
		var_165_bool = var_135_bool == 0; //@nz
		if(var_165_bool != 0) {
			var_166_bool = 0; var_167_object = Obj();
			var_125_object = var_167_object;
			func_2744(var_166_bool, var_167_object);
			var_201_bool = var_166_bool == 0; //@nz
			if(var_201_bool != 0) {
				var_124_bool = 0;
				return 4;
			}
		}
		irand(var_132_int, (int)2);
		var_203_int = var_132_int;
		if(var_203_int != 0) {
			var_206_int = var_131_int + (int)1;
			var_208_int = var_206_int % (int)3;
			SetVariable("voice_common", var_208_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_211_bool = 0; var_212_object = Obj();
		var_125_object = var_212_object;
		func_2744(var_211_bool, var_212_object);
		var_213_bool = var_211_bool == 0; //@nz
		if(var_213_bool != 0) {
			var_214_bool = 0; var_215_object = Obj();
			var_125_object = var_215_object;
			func_2707(var_214_bool, var_215_object);
			var_216_bool = var_214_bool == 0; //@nz
			if(var_216_bool != 0) {
				var_124_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_2705;
	
Label_2705:
	var_124_bool = 1;
	return 4;
	
}


func_2905(var_514_bool, var_515_object, var_516_string)
{
	var_517_int = 0; var_518_bool = 0; var_519_int = 0; var_520_bool = 0;
	GetInvItemByName(var_519_int, var_516_string);
	@@var_515_object:HasItem(var_519_int, var_520_bool);
	var_520_bool = var_514_bool;
	return 4;
}


func_3166(var_506_bool)
{
	var_508_int = 0; var_509_string = "";
	func_2856(var_508_int, "b10q03");
	var_511_bool = var_508_int == (int)2;
	if(var_511_bool != 0) {
		var_506_bool = 1;
		return 0;
	}
	var_506_bool = 0;
	return 0;
}


func_2912(var_80_bool, var_81_string, var_82_string)
{
	var_83_object = Obj(); var_84_object = Obj();
	FindActor(var_84_object, var_81_string);
	var_85_bool = var_84_object == 0; //@ne
	if(var_85_bool != 0) {
		var_80_bool = 0;
		return 2;
	}
	Trigger(var_84_object, var_82_string);
	var_80_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2149(var_0_object, var_1_object, var_2_object, var_3_string, var_629_object, var_630_object)
{
	var_0_object = var_630_object;
	var_1_object = var_629_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_636_string = "";
		func_2207(var_630_object, "Neutral");
		@@@var_0_object:SetMessage((int)540551);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540552, (int)-1, (int)42561);
		@@@var_0_object:AddReply((int)540795, (int)-1, (int)42844);
		goto Label_2177;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x869";
	}
Label_2177:
	var_651_bool = 0;
	func_2976(var_651_bool);
	if(var_651_bool != 0) {

	Label_2181:
		lshWaitForAnimEnd();
		var_652_string = var_3_string;
		if(var_652_string != 0) {
		} else {
			var_653_string = "";
			var_653_string = var_2_object;
			func_2787(var_653_string);
			goto Label_2181;
	}
		PlayAnimation("all", "idle");

	Label_2196:
		WaitForAnimEnd();
		var_656_string = var_3_string;
		if(var_656_string != 0) {
			goto Label_2206;
		}
		PlayAnimation("all", "idle");
		goto Label_2196;
	}
	goto Label_2206;
	
Label_2206:
	return 0;
	
}


func_3178(var_512_bool, var_513_object)
{
	var_514_bool = 0; var_515_object = Obj(); var_516_string = "";
	var_513_object = var_515_object;
	func_2905(var_514_bool, var_515_object, "b10q03_toy_burah");
	if(var_514_bool != 0) {
		var_512_bool = 1;
		return 0;
	}
	var_512_bool = 0;
	return 0;
}


func_2924(var_54_float)
{
	var_55_float = 0; var_56_float = 0;
	GetGameTime(var_56_float);
	var_56_float = var_54_float;
	return 2;
}


func_2929(var_179_int)
{
	var_180_float = 0; var_181_float = 0;
	GetGameTime(var_181_float);
	var_183_int = 0;
	var_183_int = var_181_float / (int)24;
	var_179_int = (int)1 + var_183_int;
	return 2;
}


func_3189(var_524_bool)
{
	var_526_int = 0; var_527_string = "";
	func_2856(var_526_int, "b10q03");
	var_529_bool = var_526_int == (int)4;
	if(var_529_bool != 0) {
		var_524_bool = 1;
		return 0;
	}
	var_524_bool = 0;
	return 0;
}


func_2938(var_278_bool, var_279_int)
{
	var_280_int = 0;
	func_2929(var_280_int);
	var_278_bool = var_280_int == var_279_int;
	return 0;
}


func_1917(var_2_object, var_571_string)
{
	var_572_bool = 0;
	func_2976(var_572_bool);
	var_573_bool = var_572_bool == 0; //@nz
	if(var_573_bool != 0) {
		return 0;
	}
	var_574_bool = var_571_string == var_2_object;
	if(var_574_bool != 0) {
		return 0;
	}
	var_575_string = ""; var_576_bool = 0;
	var_571_string = var_575_string;
	var_578_bool = var_571_string == "";
	if(var_578_bool != 0) {
		var_576_bool = 0;
	} else {
		var_576_bool = 1;
	}
	func_2803(var_575_string, var_576_bool);
	var_2_object = var_571_string;
	return 0;
	
}


func_2944(var_56_string, var_57_int)
{
	var_58_string = ""; var_59_string = "";
	var_60_int = var_57_int;
	if(var_60_int != 0) {
		"idle" = "idle" + var_57_int;
	}
	var_59_string = var_56_string;
	return 2;
}


func_3201(var_330_bool)
{
	var_332_int = 0; var_333_string = "";
	func_2856(var_332_int, "b1q05");
	var_335_bool = var_332_int == (int)1000;
	if(var_335_bool != 0) {
		var_330_bool = 1;
		return 0;
	}
	var_330_bool = 0;
	return 0;
}


func_2951(var_50_int)
{
	var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0;
	var_53_int = 0;
	
Label_2953:
	var_56_string = ""; var_57_int = 0;
	var_53_int = var_57_int;
	func_2944(var_56_string, var_57_int);
	HasAnimation(var_54_bool, "all", var_56_string);
	var_61_bool = var_54_bool == 0; //@nz
	if(var_61_bool != 0) {
	} else {
		var_53_int = var_53_int + (int)1;
		goto Label_2953;
	}
	var_53_int = var_50_int;
	return 4;
	
}


func_139(var_2_object, var_226_string)
{
	var_227_bool = 0;
	func_2976(var_227_bool);
	var_228_bool = var_227_bool == 0; //@nz
	if(var_228_bool != 0) {
		return 0;
	}
	var_229_bool = var_226_string == var_2_object;
	if(var_229_bool != 0) {
		return 0;
	}
	var_230_string = ""; var_231_bool = 0;
	var_226_string = var_230_string;
	var_233_bool = var_226_string == "";
	if(var_233_bool != 0) {
		var_231_bool = 0;
	} else {
		var_231_bool = 1;
	}
	func_2803(var_230_string, var_231_bool);
	var_2_object = var_226_string;
	return 0;
	
}


func_3213(var_580_bool)
{
	var_582_int = 0; var_583_string = "";
	func_2856(var_582_int, "oob12Mishka1");
	var_585_bool = var_582_int == (int)0;
	if(var_585_bool != 0) {
		var_580_bool = 1;
		return 0;
	}
	var_580_bool = 0;
	return 0;
}


func_2707(var_135_bool, var_136_object)
{
	var_137_string = ""; var_138_int = 0; var_139_bool = 0; var_140_int = 0; var_141_string = ""; var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = "";
	var_142_string = "c";
	var_143_int = 0;
	
Label_2710:
	if((int)1 != 0) {
		var_149_int = var_143_int + (int)1;
		var_150_int = var_142_string + var_149_int;
		@@var_136_object:HasProperty(var_150_int, var_144_bool);
		var_151_bool = var_144_bool == 0; //@nz
		if(var_151_bool != 0) {
		} else {
			var_143_int = var_143_int + (int)1;
			goto Label_2710;
		}
	}
	var_152_bool = var_143_int == 0; //@nz
	if(var_152_bool != 0) {
		var_135_bool = 0;
		return 10;
	}
	var_145_int = 0;
	var_154_bool = var_143_int > (int)1;
	if(var_154_bool != 0) {
		irand(var_145_int, var_143_int);
	}
	var_156_int = var_145_int + (int)1;
	var_157_int = var_142_string + var_156_int;
	@@var_136_object:GetProperty(var_157_int, var_146_string);
	var_158_bool = 0; var_159_string = "";
	var_146_string = var_159_string;
	func_2818(var_158_bool, var_159_string);
	var_158_bool = var_135_bool;
	return 10;
	
}


func_2454()
{
	var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_int = 0; var_47_bool = 0;
	WaitForAnimEnd();
	var_48_bool = 0;
	func_2557(var_48_bool);
	var_49_bool = var_48_bool == 0; //@nz
	if(var_49_bool != 0) {
		return 12;
	}
	func_2951((int)0);
	var_50_int = var_42_int;
	var_43_int = 0;
	
Label_2468:
	var_63_bool = 0;
	var_63_bool = 0;
	var_65_bool = var_43_int < (int)5;
	if(var_65_bool != 0) {
		var_66_bool = 0;
		func_2557(var_66_bool);
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
				func_2944(var_77_string, var_78_int);
				PlayAnimation("all", var_77_string);
				WaitForAnimEnd(var_47_bool);
				var_79_bool = var_47_bool == 0; //@nz
				if(var_79_bool == 0) goto Label_2509;
				goto Label_2520;
		}
		Label_2509:
			var_70_bool = 0;
			func_2523(var_70_bool);
			var_71_bool = var_70_bool == 0; //@nz
			if(var_71_bool != 0) {
				goto Label_2520;
			}
			ResetAAS();
			var_43_int = var_43_int + (int)1;
			goto Label_2468;

		}
	}
Label_2520:
	ResetAAS();
	return 12;
	
}


func_2968(var_112_int)
{
	var_112_int = 515546;
	return 0;
}


func_3225()
{
	var_206_object = Obj(); var_207_object = Obj();
	CreateDiaryEntry(var_207_object, (int)605, (int)2, (int)531184);
	var_211_bool = 0; var_212_object = Obj(); var_213_int = 0;
	var_207_object = var_212_object;
	func_3303(var_211_bool, var_212_object, (int)594);
	return 2;
}
EMIT "Stack[-1] = 0";


func_666(var_0_object, var_281_int, var_282_object)
{
	var_284_object = Obj(); var_285_bool = 0; var_286_int = 0; var_287_bool = 0; var_288_object = Obj(); var_289_bool = 0; var_290_int = 0; var_291_bool = 0;
	var_0_object = var_282_object;
	var_292_bool = 0; var_293_object = Obj(); var_294_float = 0;
	var_282_object = var_293_object;
	func_2562(var_292_bool, var_293_object, (float)70.0);
	var_295_bool = var_292_bool == 0; //@nz
	if(var_295_bool != 0) {
		var_281_int = -2;
		return 8;
	}
	CreateDialog(var_288_object);
	var_296_int = 0;
	func_2970(var_296_int);
	@@var_288_object:SetNPCName(var_296_int);
	var_297_int = 0;
	func_2968(var_297_int);
	@@var_288_object:SetNPCDescription(var_297_int);
	var_298_string = "";
	func_2972(var_298_string);
	@@var_288_object:SetPhoto(var_298_string);
	var_299_string = "";
	func_2974(var_299_string);
	@@var_288_object:SetPhoto2(var_299_string);
	var_300_int = 0;
	func_3381(var_300_int);
	@@var_288_object:SetPlayerName(var_300_int);
	IsOverrideActive(var_289_bool);
	var_301_bool = var_289_bool;
	if(var_301_bool != 0) {
		var_281_int = -2;
		return 8;
	}
	DoDialog(var_288_object);
	var_302_bool = 0; var_303_object = Obj();
	func_2840(Obj());
	var_304_object = var_303_object;
	func_2649(var_302_bool, var_303_object);
	var_305_object = Obj(); var_306_object = Obj();
	var_282_object = var_305_object;
	var_288_object = var_306_object;
	TaskCall(5);
	func_747(var_307_object, var_308_object, var_309_string, var_310_bool, var_305_object, var_306_object);
	TaskReturn();
	@@var_288_object:IsDialogEnd(var_291_bool);
	
Label_729:
	var_350_bool = var_291_bool == 0; //@nz
	if(var_350_bool != 0) {
		sync();
		@@var_288_object:IsDialogEnd(var_291_bool);
		goto Label_729;
	}
	var_282_object = Obj();
	func_2631();
	StopDialog(var_288_object);
	@@var_288_object:GetReturnValue((int)-1);
	var_290_int = var_281_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2970(var_111_int)
{
	var_111_int = 502871;
	return 0;
}


func_2972(var_113_string)
{
	var_113_string = "ui/NPC_Mishka.png";
	return 0;
}


func_2974(var_114_string)
{
	var_114_string = "ui/NPC_Mishka_b.png";
	return 0;
}


func_2207(var_2_object, var_636_string)
{
	var_637_bool = 0;
	func_2976(var_637_bool);
	var_638_bool = var_637_bool == 0; //@nz
	if(var_638_bool != 0) {
		return 0;
	}
	var_639_bool = var_636_string == var_2_object;
	if(var_639_bool != 0) {
		return 0;
	}
	var_640_string = ""; var_641_bool = 0;
	var_636_string = var_640_string;
	var_643_bool = var_636_string == "";
	if(var_643_bool != 0) {
		var_641_bool = 0;
	} else {
		var_641_bool = 1;
	}
	func_2803(var_640_string, var_641_bool);
	var_2_object = var_636_string;
	return 0;
	
}


func_2976(var_106_bool)
{
	var_106_bool = 1;
	return 0;
}


func_417(var_2_object, var_402_string)
{
	var_403_bool = 0;
	func_2976(var_403_bool);
	var_404_bool = var_403_bool == 0; //@nz
	if(var_404_bool != 0) {
		return 0;
	}
	var_405_bool = var_402_string == var_2_object;
	if(var_405_bool != 0) {
		return 0;
	}
	var_406_string = ""; var_407_bool = 0;
	var_402_string = var_406_string;
	var_409_bool = var_402_string == "";
	if(var_409_bool != 0) {
		var_407_bool = 0;
	} else {
		var_407_bool = 1;
	}
	func_2803(var_406_string, var_407_bool);
	var_2_object = var_402_string;
	return 0;
	
}


func_2978(var_143_object)
{
	Trace("avroks blood is given");
	var_146_object = Obj(); var_147_string = ""; var_148_int = 0;
	var_143_object = var_146_object;
	func_2892(var_146_object, "avroks_blood", (int)1);
	return 0;
}


func_3238()
{
	var_116_object = Obj(); var_117_object = Obj();
	CreateDiaryEntry(var_117_object, (int)607, (int)2, (int)531500);
	var_121_bool = 0; var_122_object = Obj(); var_123_int = 0;
	var_117_object = var_122_object;
	func_3303(var_121_bool, var_122_object, (int)594);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2989()
{
	SetVariable("oob8Mishka1", (int)1);
	return 0;
}


func_3251()
{
	var_57_object = Obj(); var_58_object = Obj();
	CreateDiaryEntry(var_58_object, (int)596, (int)2, (int)531147);
	var_62_bool = 0; var_63_object = Obj(); var_64_int = 0;
	var_58_object = var_63_object;
	func_3303(var_62_bool, var_63_object, (int)594);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2995()
{
	SetVariable("oob1Mishka1", (int)1);
	return 0;
}


func_2744(var_166_bool, var_167_object)
{
	var_168_string = ""; var_169_int = 0; var_170_bool = 0; var_171_int = 0; var_172_string = ""; var_173_string = ""; var_174_int = 0; var_175_bool = 0; var_176_int = 0; var_177_string = "";
	var_179_int = 0;
	func_2929(var_179_int);
	var_185_int = "d" + var_179_int;
	var_173_string = var_185_int + "m";
	var_174_int = 0;
	
Label_2753:
	if((int)1 != 0) {
		var_189_int = var_174_int + (int)1;
		var_190_int = var_173_string + var_189_int;
		@@var_167_object:HasProperty(var_190_int, var_175_bool);
		var_191_bool = var_175_bool == 0; //@nz
		if(var_191_bool != 0) {
		} else {
			var_174_int = var_174_int + (int)1;
			goto Label_2753;
		}
	}
	var_192_bool = var_174_int == 0; //@nz
	if(var_192_bool != 0) {
		var_166_bool = 0;
		return 10;
	}
	var_176_int = 0;
	var_194_bool = var_174_int > (int)1;
	if(var_194_bool != 0) {
		irand(var_176_int, var_174_int);
	}
	var_196_int = var_176_int + (int)1;
	var_197_int = var_173_string + var_196_int;
	@@var_167_object:GetProperty(var_197_int, var_177_string);
	var_198_bool = 0; var_199_string = "";
	var_177_string = var_199_string;
	func_2818(var_198_bool, var_199_string);
	var_198_bool = var_166_bool;
	return 10;
	
}


func_3001()
{
	SetVariable("b10q04MishkaTalk", (int)9);
	func_3277();
	return 0;
}


func_3264()
{
	var_181_object = Obj(); var_182_object = Obj();
	CreateDiaryEntry(var_182_object, (int)603, (int)2, (int)531182);
	var_186_bool = 0; var_187_object = Obj(); var_188_int = 0;
	var_182_object = var_187_object;
	func_3303(var_186_bool, var_187_object, (int)594);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3010()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_1224(var_2_object, var_474_string)
{
	var_475_bool = 0;
	func_2976(var_475_bool);
	var_476_bool = var_475_bool == 0; //@nz
	if(var_476_bool != 0) {
		return 0;
	}
	var_477_bool = var_474_string == var_2_object;
	if(var_477_bool != 0) {
		return 0;
	}
	var_478_string = ""; var_479_bool = 0;
	var_474_string = var_478_string;
	var_481_bool = var_474_string == "";
	if(var_481_bool != 0) {
		var_479_bool = 0;
	} else {
		var_479_bool = 1;
	}
	func_2803(var_478_string, var_479_bool);
	var_2_object = var_474_string;
	return 0;
	
}


func_3016()
{
	var_39_object = Obj(); var_40_object = Obj();
	SetVariable("b10q03", (int)2);
	func_3331(Obj());
	var_43_object = var_40_object;
	var_54_float = 0;
	func_2924(var_54_float);
	@@var_40_object:AddMark("b10q03MishkaGotoDoll", "pt_b10q03_plant1", (int)0, (int)531262, var_54_float);
	func_3251();
	var_80_bool = 0; var_81_string = ""; var_82_string = "";
	func_2912(var_80_bool, "quest_b10_03", "place_doll");
	return 2;
}
EMIT "Stack[-1] = 0";


func_3277()
{
	var_133_object = Obj(); var_134_object = Obj();
	CreateDiaryEntry(var_134_object, (int)558, (int)2, (int)530537);
	var_138_bool = 0; var_139_object = Obj(); var_140_int = 0;
	var_134_object = var_139_object;
	func_3303(var_138_bool, var_139_object, (int)549);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3290(var_71_object)
{
	var_72_object = Obj(); var_73_object = Obj();
	GetDiaryRoot(var_73_object);
	var_74_bool = var_73_object == 0; //@nz
	if(var_74_bool != 0) {
		Trace("Can't retrieve diary root");
		var_71_object = 0;
		return 2;
	}
	var_73_object = var_71_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2523(var_70_bool)
{
	var_70_bool = 1;
	return 0;
}


func_2525()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_2530(var_46_float, var_47_object)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	GetPosition(var_51_cvector);
	@@var_47_object:GetPosition(var_52_cvector);
	var_53_cvector = var_52_cvector - var_51_cvector;
	var_46_float = var_53_cvector | var_53_cvector;
	return 6;
}


func_2787(var_252_string)
{
	var_253_bool = 0; var_254_float = 0; var_255_float = 0; var_256_bool = 0; var_257_float = 0; var_258_float = 0;
	lshHasAnimation(var_256_bool, var_252_string);
	var_259_bool = var_256_bool;
	if(var_259_bool != 0) {
		lshGetAnimTimes(var_252_string, var_257_float, var_258_float);
		lshPlayAnimation(var_257_float, var_258_float, (bool)0);
	} else {
		var_262_int = "Can't find lsh animation : " + var_252_string;
		Trace(var_262_int);
	}
	return 6;
	
}


func_3044(var_87_object)
{
	var_88_object = Obj(); var_89_string = ""; var_90_float = 0;
	func_3331(Obj());
	var_91_object = var_88_object;
	func_3348(var_88_object, "pt_b10q03_plant1", (float)2);
	var_111_object = Obj();
	func_3331(var_111_object);
	@@var_87_object:ShowMap(var_111_object);
	return 0;
}


func_2278(var_0_object)
{
	var_32_bool = 0;
	func_2557(var_32_bool);
	var_35_bool = var_32_bool == 0; //@nz
	if(var_35_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_2287:
	func_2454();
	goto Label_2287;
}
EMIT "Return(); Pop(0)";


func_3303(var_62_bool, var_63_object, var_64_int)
{
	var_65_object = Obj(); var_66_object = Obj(); var_67_int = 0; var_68_object = Obj(); var_69_object = Obj(); var_70_int = 0;
	func_3290(Obj());
	var_71_object = var_68_object;
	@@var_68_object:Find(var_64_int, var_69_object);
	var_76_bool = var_69_object == 0; //@nz
	if(var_76_bool != 0) {
		var_78_int = "Can't find diary parent with id: " + var_64_int;
		Trace(var_78_int);
		var_62_bool = 0;
		return 6;
	}
	@@var_69_object:AddChild(var_63_object);
	SendWorldWndMessage((int)7);
	@@var_63_object:GetCategory(var_70_int);
	SetDiarySection(var_70_int);
	var_62_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1768(var_0_object, var_540_int, var_541_object)
{
	var_543_object = Obj(); var_544_bool = 0; var_545_int = 0; var_546_bool = 0; var_547_object = Obj(); var_548_bool = 0; var_549_int = 0; var_550_bool = 0;
	var_0_object = var_541_object;
	var_551_bool = 0; var_552_object = Obj(); var_553_float = 0;
	var_541_object = var_552_object;
	func_2562(var_551_bool, var_552_object, (float)70.0);
	var_554_bool = var_551_bool == 0; //@nz
	if(var_554_bool != 0) {
		var_540_int = -2;
		return 8;
	}
	CreateDialog(var_547_object);
	var_555_int = 0;
	func_2970(var_555_int);
	@@var_547_object:SetNPCName(var_555_int);
	var_556_int = 0;
	func_2968(var_556_int);
	@@var_547_object:SetNPCDescription(var_556_int);
	var_557_string = "";
	func_2972(var_557_string);
	@@var_547_object:SetPhoto(var_557_string);
	var_558_string = "";
	func_2974(var_558_string);
	@@var_547_object:SetPhoto2(var_558_string);
	var_559_int = 0;
	func_3381(var_559_int);
	@@var_547_object:SetPlayerName(var_559_int);
	IsOverrideActive(var_548_bool);
	var_560_bool = var_548_bool;
	if(var_560_bool != 0) {
		var_540_int = -2;
		return 8;
	}
	DoDialog(var_547_object);
	var_561_bool = 0; var_562_object = Obj();
	func_2840(Obj());
	var_563_object = var_562_object;
	func_2649(var_561_bool, var_562_object);
	var_564_object = Obj(); var_565_object = Obj();
	var_541_object = var_564_object;
	var_547_object = var_565_object;
	TaskCall(9);
	func_1849(var_566_object, var_567_object, var_568_string, var_569_bool, var_564_object, var_565_object);
	TaskReturn();
	@@var_547_object:IsDialogEnd(var_550_bool);
	
Label_1831:
	var_603_bool = var_550_bool == 0; //@nz
	if(var_603_bool != 0) {
		sync();
		@@var_547_object:IsDialogEnd(var_550_bool);
		goto Label_1831;
	}
	var_541_object = Obj();
	func_2631();
	StopDialog(var_547_object);
	@@var_547_object:GetReturnValue((int)-1);
	var_549_int = var_540_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2538(var_39_bool, var_40_cvector)
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


func_747(var_0_object, var_1_object, var_2_object, var_3_string, var_305_object, var_306_object)
{
	var_0_object = var_306_object;
	var_1_object = var_305_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_312_string = "";
		func_819(var_306_object, "Autizm");
		@@@var_0_object:SetMessage((int)527115);
		@@@var_0_object:ClearReplies();
		var_321_bool = 0;
		var_321_bool = 0;
		var_322_bool = 0; var_323_object = Obj();
		var_323_object = var_1_object;
		func_3130(var_323_object);
		if(var_322_bool != 0) {
			var_330_bool = 0; var_331_object = Obj();
			var_331_object = var_1_object;
			func_3201(var_331_object);
			if(var_330_bool != 0) {
				var_321_bool = 1;
			}
		}
		if(var_321_bool != 0) {
			@@@var_0_object:AddReply((int)527116, (int)28416, (int)28414);
		}
		@@@var_0_object:AddReply((int)527117, (int)-1, (int)28415);
		goto Label_789;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2ef";
	}
Label_789:
	var_342_bool = 0;
	func_2976(var_342_bool);
	if(var_342_bool != 0) {

	Label_793:
		lshWaitForAnimEnd();
		var_343_string = var_3_string;
		if(var_343_string != 0) {
		} else {
			var_344_string = "";
			var_344_string = var_2_object;
			func_2787(var_344_string);
			goto Label_793;
	}
		PlayAnimation("all", "idle");

	Label_808:
		WaitForAnimEnd();
		var_347_string = var_3_string;
		if(var_347_string != 0) {
			goto Label_818;
		}
		PlayAnimation("all", "idle");
		goto Label_808;
	}
	goto Label_818;
	
Label_818:
	return 0;
	
}


func_239(var_0_object, var_354_int, var_355_object)
{
	var_357_object = Obj(); var_358_bool = 0; var_359_int = 0; var_360_bool = 0; var_361_object = Obj(); var_362_bool = 0; var_363_int = 0; var_364_bool = 0;
	var_0_object = var_355_object;
	var_365_bool = 0; var_366_object = Obj(); var_367_float = 0;
	var_355_object = var_366_object;
	func_2562(var_365_bool, var_366_object, (float)70.0);
	var_368_bool = var_365_bool == 0; //@nz
	if(var_368_bool != 0) {
		var_354_int = -2;
		return 8;
	}
	CreateDialog(var_361_object);
	var_369_int = 0;
	func_2970(var_369_int);
	@@var_361_object:SetNPCName(var_369_int);
	var_370_int = 0;
	func_2968(var_370_int);
	@@var_361_object:SetNPCDescription(var_370_int);
	var_371_string = "";
	func_2972(var_371_string);
	@@var_361_object:SetPhoto(var_371_string);
	var_372_string = "";
	func_2974(var_372_string);
	@@var_361_object:SetPhoto2(var_372_string);
	var_373_int = 0;
	func_3381(var_373_int);
	@@var_361_object:SetPlayerName(var_373_int);
	IsOverrideActive(var_362_bool);
	var_374_bool = var_362_bool;
	if(var_374_bool != 0) {
		var_354_int = -2;
		return 8;
	}
	DoDialog(var_361_object);
	var_375_bool = 0; var_376_object = Obj();
	func_2840(Obj());
	var_377_object = var_376_object;
	func_2649(var_375_bool, var_376_object);
	var_378_object = Obj(); var_379_object = Obj();
	var_355_object = var_378_object;
	var_361_object = var_379_object;
	TaskCall(3);
	func_320(var_380_object, var_381_object, var_382_string, var_383_bool, var_378_object, var_379_object);
	TaskReturn();
	@@var_361_object:IsDialogEnd(var_364_bool);
	
Label_302:
	var_433_bool = var_364_bool == 0; //@nz
	if(var_433_bool != 0) {
		sync();
		@@var_361_object:IsDialogEnd(var_364_bool);
		goto Label_302;
	}
	var_355_object = Obj();
	func_2631();
	StopDialog(var_361_object);
	@@var_361_object:GetReturnValue((int)-1);
	var_363_int = var_354_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2803(var_230_string, var_231_bool)
{
	var_234_bool = 0; var_235_float = 0; var_236_float = 0; var_237_bool = 0; var_238_float = 0; var_239_float = 0;
	lshHasAnimation(var_237_bool, var_230_string);
	var_240_bool = var_237_bool;
	if(var_240_bool != 0) {
		lshGetAnimTimes(var_230_string, var_238_float, var_239_float);
		lshPlayAnimation(var_238_float, var_239_float, var_231_bool);
	} else {
		var_242_int = "Can't find lsh animation : " + var_230_string;
		Trace(var_242_int);
	}
	return 6;
	
}


func_2292(var_56_bool)
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
	func_2548(var_61_bool, var_62_object);
	var_61_bool = var_56_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3060()
{
	SetVariable("b10q03", (int)3);
	func_3264();
	var_189_bool = 0; var_190_string = ""; var_191_string = "";
	func_2912(var_189_bool, "quest_b10_03", "place_blood");
	return 0;
}


func_2548(var_35_bool, var_36_object)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0);
	@@var_36_object:GetPosition(var_38_cvector);
	var_39_bool = 0; var_40_cvector = CVector(0,0,0);
	var_38_cvector = var_40_cvector;
	func_2538(var_39_bool, var_40_cvector);
	var_39_bool = var_35_bool;
	return 2;
}


func_2557(var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0;
	IsLoaded(var_34_bool);
	var_34_bool = var_32_bool;
	return 2;
}


