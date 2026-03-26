// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetGameTime/1,HasAnimation/3,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Grimacing|W:Fear|W:Strange|W:Grin|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ui/NPC_Ospina.png|W:ui/NPC_Ospina_b.png|W:k2q01|W:ook6Ospina1|W:k8q01|W:k11q01SoulCount|W:ook11Ospina1|W:ook2Ospina1|W:k6q01|W:k6q01DankoPos|W:k11q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0xa97
// @RUN_TASK: 14
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xce vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x37b vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x49d vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x5e1 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x788 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x934 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa6d vars=int,int
// @TASK_14: vars=cvector params=0
// @EVENT_7: op=0xae3 vars=int
// @EVENT_6: op=0xb09 vars=
// @EVENT_5: op=0xb18 vars=
// @EVENT_45: op=0xb25 vars=bool
// @EVENT_0: op=0xb31 vars=object
// @PE: 0x51,0xb8,0xce,0x32b,0x365,0x37b,0x436,0x487,0x49d,0x587,0x5cb,0x5e1,0x72a,0x772,0x788,0x8df,0x91e,0x934,0xa1d,0xa57,0xa6d,0xae3,0xb09,0xb25,0xcee,0xd16,0xd1f,0xd28,0xd2e,0xd33,0xd6f,0xd75,0xd7b,0xd84,0xd90,0xd9c,0xda8,0xdb4,0xdc0,0xdcc,0xdd8,0xde4,0xeb9

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3273();
		var_41_bool = var_37_cvector == (int)26622;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_3350();
		}
		var_70_bool = var_37_cvector == (int)44528;
		if(var_70_bool != 0) {
			var_71_object = Obj(); var_72_object = Obj();
			var_71_object = var_1_object;
			var_72_object = var_0_object;
			func_3451();
		}
		var_84_bool = var_37_cvector == (int)44526;
		if(var_84_bool != 0) {
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_3451();
		}
		var_88_bool = var_37_cvector == (int)26641;
		if(var_88_bool != 0) {
			var_89_object = Obj(); var_90_object = Obj();
			var_89_object = var_1_object;
			var_90_object = var_0_object;
			func_3359();
		}
		var_102_bool = var_37_cvector == (int)44534;
		if(var_102_bool != 0) {
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_3359();
		}
		var_106_bool = var_37_cvector == (int)44498;
		if(var_106_bool != 0) {
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_3445();
		}
		var_112_bool = var_36_bool == (int)26619;
		if(var_112_bool != 0) {
			var_113_string = "";
			func_184(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525251);
			@@@var_0_object:ClearReplies();
			var_131_bool = 0; var_132_object = Obj();
			var_132_object = var_1_object;
			func_3460(var_132_object);
			if(var_131_bool != 0) {
				@@@var_0_object:AddReply((int)525252, (int)44489, (int)26620);
			}
			var_142_bool = 0; var_143_object = Obj();
			var_143_object = var_1_object;
			func_3472(var_143_object);
			if(var_142_bool != 0) {
				@@@var_0_object:AddReply((int)525263, (int)26632, (int)26631);
			}
			var_151_bool = 0; var_152_object = Obj();
			var_152_object = var_1_object;
			func_3556(var_152_object);
			if(var_151_bool != 0) {
				@@@var_0_object:AddReply((int)542179, (int)44499, (int)44498);
			}
			@@@var_0_object:AddReply((int)525255, (int)-1, (int)26623);
			return 0;
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=89";
		EMIT "Call2 0xb8";
		EMIT "Pop(1)";
		EMIT "Push((int) 525280)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=105";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=116";
		EMIT "Pop(0)";
		EMIT "Push((int) 525281)";
		EMIT "Push((int) -1)";
		EMIT "Push((int) 26649)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129";
		EMIT "Pop(3)";
		EMIT "Push((int) 528809)";
		EMIT "Push((int) -1)";
		EMIT "Push((int) 30223)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129";
		EMIT "Pop(3)";
		EMIT "Return(); Pop(0)";
		}
		var_164_bool = var_36_bool == (int)44499;
		if(var_164_bool != 0) {
			var_165_string = "";
			func_184(var_37_cvector, "Grimacing");
			@@@var_0_object:SetMessage((int)542180);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542181, (int)44502, (int)44500);
			@@@var_0_object:AddReply((int)542182, (int)44502, (int)44501);
			return 0;
		}
		var_174_bool = var_36_bool == (int)44502;
		if(var_174_bool != 0) {
			var_175_string = "";
			func_184(var_37_cvector, "Grimacing");
			@@@var_0_object:SetMessage((int)542183);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542184, (int)-1, (int)44504);
			@@@var_0_object:AddReply((int)542185, (int)-1, (int)44505);
			return 0;
		}
		var_184_bool = var_36_bool == (int)26632;
		if(var_184_bool != 0) {
			var_185_string = "";
			func_184(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525264);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542194, (int)44520, (int)44518);
			@@@var_0_object:AddReply((int)542195, (int)44520, (int)44519);
			return 0;
		}
		var_194_bool = var_36_bool == (int)44520;
		if(var_194_bool != 0) {
			var_195_string = "";
			func_184(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542196);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525265, (int)44524, (int)26633);
			@@@var_0_object:AddReply((int)542197, (int)26634, (int)44522);
			@@@var_0_object:AddReply((int)542198, (int)44524, (int)44523);
			return 0;
		}
		var_207_bool = var_36_bool == (int)26634;
		if(var_207_bool != 0) {
			var_208_string = "";
			func_184(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525266);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529215, (int)30668, (int)30667);
			@@@var_0_object:AddReply((int)542204, (int)30670, (int)44530);
			return 0;
		}
		var_217_bool = var_36_bool == (int)30668;
		if(var_217_bool != 0) {
			var_218_string = "";
			func_184(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529216);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529217, (int)30670, (int)30669);
			return 0;
		}
		var_224_bool = var_36_bool == (int)30670;
		if(var_224_bool != 0) {
			var_225_string = "";
			func_184(var_37_cvector, "Fear");
			@@@var_0_object:SetMessage((int)529218);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525267, (int)26636, (int)26635);
			@@@var_0_object:AddReply((int)542205, (int)26638, (int)44532);
			return 0;
		}
		var_234_bool = var_36_bool == (int)26636;
		if(var_234_bool != 0) {
			var_235_string = "";
			func_184(var_37_cvector, "Fear");
			@@@var_0_object:SetMessage((int)525268);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525269, (int)26638, (int)26637);
			return 0;
		}
		var_241_bool = var_36_bool == (int)26638;
		if(var_241_bool != 0) {
			var_242_string = "";
			func_184(var_37_cvector, "Strange");
			@@@var_0_object:SetMessage((int)525270);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525271, (int)26640, (int)26639);
			@@@var_0_object:AddReply((int)542206, (int)-1, (int)44534);
			return 0;
		}
		var_251_bool = var_36_bool == (int)26640;
		if(var_251_bool != 0) {
			var_252_string = "";
			func_184(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525272);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525273, (int)-1, (int)26641);
			return 0;
		}
		var_258_bool = var_36_bool == (int)44524;
		if(var_258_bool != 0) {
			var_259_string = "";
			func_184(var_37_cvector, "Grin");
			@@@var_0_object:SetMessage((int)542199);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542200, (int)44527, (int)44525);
			@@@var_0_object:AddReply((int)542201, (int)-1, (int)44526);
			return 0;
		}
		var_268_bool = var_36_bool == (int)44527;
		if(var_268_bool != 0) {
			var_269_string = "";
			func_184(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542202);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542203, (int)-1, (int)44528);
			return 0;
		}
		var_275_bool = var_36_bool == (int)44489;
		if(var_275_bool != 0) {
			var_276_string = "";
			func_184(var_37_cvector, "Strange");
			@@@var_0_object:SetMessage((int)542172);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542173, (int)44491, (int)44490);
			@@@var_0_object:AddReply((int)542186, (int)44507, (int)44506);
			return 0;
		}
		var_285_bool = var_36_bool == (int)44507;
		if(var_285_bool != 0) {
			var_286_string = "";
			func_184(var_37_cvector, "Grimacing");
			@@@var_0_object:SetMessage((int)542187);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542188, (int)26621, (int)44508);
			@@@var_0_object:AddReply((int)542190, (int)26621, (int)44510);
			return 0;
		}
		var_295_bool = var_36_bool == (int)44491;
		if(var_295_bool != 0) {
			var_296_string = "";
			func_184(var_37_cvector, "Strange");
			@@@var_0_object:SetMessage((int)542174);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542175, (int)26621, (int)44492);
			@@@var_0_object:AddReply((int)542189, (int)26621, (int)44509);
			return 0;
		}
		var_305_bool = var_36_bool == (int)26621;
		if(var_305_bool != 0) {
			var_306_string = "";
			func_184(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525253);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529213, (int)30666, (int)30665);
			@@@var_0_object:AddReply((int)542191, (int)44515, (int)44514);
			return 0;
		}
		var_315_bool = var_36_bool == (int)44515;
		if(var_315_bool != 0) {
			var_316_string = "";
			func_184(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542192);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542193, (int)30666, (int)44516);
			return 0;
		}
		var_322_bool = var_36_bool == (int)30666;
		if(var_322_bool != 0) {
			var_323_string = "";
			func_184(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529214);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525254, (int)-1, (int)26622);
			return 0;
		}
		var_3_string = true;
		var_328_bool = 0;
		func_3348(var_328_bool);
		if(var_328_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xcf";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3273();
		var_41_bool = var_36_bool == (int)26875;
		if(var_41_bool != 0) {
			var_42_string = "";
			func_869(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525519);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525520, (int)30224, (int)26876);
			@@@var_0_object:AddReply((int)528815, (int)30230, (int)30229);
			return 0;
		}
		var_67_bool = var_36_bool == (int)30230;
		if(var_67_bool != 0) {
			var_68_string = "";
			func_869(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528816);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528817, (int)30224, (int)30231);
			return 0;
		}
		var_74_bool = var_36_bool == (int)30224;
		if(var_74_bool != 0) {
			var_75_string = "";
			func_869(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528810);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528811, (int)30226, (int)30225);
			@@@var_0_object:AddReply((int)528818, (int)30226, (int)30233);
			return 0;
		}
		var_84_bool = var_36_bool == (int)30226;
		if(var_84_bool != 0) {
			var_85_string = "";
			func_869(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528812);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528813, (int)-1, (int)30227);
			@@@var_0_object:AddReply((int)528814, (int)-1, (int)30228);
			return 0;
		}
		var_3_string = true;
		var_93_bool = 0;
		func_3348(var_93_bool);
		if(var_93_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x37c";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3273();
		var_41_bool = var_37_cvector == (int)27378;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_3368();
		}
		var_47_bool = var_37_cvector == (int)27380;
		if(var_47_bool != 0) {
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_3374();
		}
		var_74_bool = var_37_cvector == (int)43716;
		if(var_74_bool != 0) {
			var_75_object = Obj(); var_76_object = Obj();
			var_75_object = var_1_object;
			var_76_object = var_0_object;
			func_3374();
		}
		var_78_bool = var_36_bool == (int)27377;
		if(var_78_bool != 0) {
			var_79_string = "";
			func_1159(var_37_cvector, "Fear");
			@@@var_0_object:SetMessage((int)526091);
			@@@var_0_object:ClearReplies();
			var_97_bool = 0;
			var_97_bool = 0;
			var_98_bool = 0;
			var_98_bool = 0;
			var_99_bool = 0; var_100_object = Obj();
			var_100_object = var_1_object;
			func_3484(var_100_object);
			if(var_99_bool != 0) {
				var_107_bool = 0; var_108_object = Obj();
				var_108_object = var_1_object;
				func_3496(var_108_object);
				if(var_107_bool != 0) {
					var_98_bool = 1;
				}
			}
			if(var_98_bool != 0) {
				var_113_bool = 0; var_114_object = Obj();
				var_114_object = var_1_object;
				func_3508(var_114_object);
				if(var_113_bool != 0) {
					var_97_bool = 1;
				}
			}
			if(var_97_bool != 0) {
				@@@var_0_object:AddReply((int)526092, (int)27379, (int)27378);
			}
			@@@var_0_object:AddReply((int)526095, (int)-1, (int)27381);
			return 0;
		}
		var_126_bool = var_36_bool == (int)27379;
		if(var_126_bool != 0) {
			var_127_string = "";
			func_1159(var_37_cvector, "Grin");
			@@@var_0_object:SetMessage((int)526093);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528804, (int)30219, (int)30218);
			return 0;
		}
		var_133_bool = var_36_bool == (int)30219;
		if(var_133_bool != 0) {
			var_134_string = "";
			func_1159(var_37_cvector, "Grin");
			@@@var_0_object:SetMessage((int)528805);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528806, (int)30222, (int)30220);
			@@@var_0_object:AddReply((int)528807, (int)30222, (int)30221);
			return 0;
		}
		var_143_bool = var_36_bool == (int)30222;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_1159(var_37_cvector, "Strange");
			@@@var_0_object:SetMessage((int)528808);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526094, (int)-1, (int)27380);
			@@@var_0_object:AddReply((int)541550, (int)-1, (int)43716);
			return 0;
		}
		var_3_string = true;
		var_152_bool = 0;
		func_3348(var_152_bool);
		if(var_152_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x49e";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3273();
		var_41_bool = var_37_cvector == (int)30428;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_3379();
		}
		var_70_bool = var_37_cvector == (int)30433;
		if(var_70_bool != 0) {
			var_71_object = Obj(); var_72_object = Obj();
			var_71_object = var_1_object;
			var_72_object = var_0_object;
			func_3379();
		}
		var_74_bool = var_37_cvector == (int)27723;
		if(var_74_bool != 0) {
			var_75_object = Obj(); var_76_object = Obj();
			var_75_object = var_1_object;
			var_76_object = var_0_object;
			func_3379();
		}
		var_78_bool = var_36_bool == (int)27716;
		if(var_78_bool != 0) {
			var_79_string = "";
			func_1483(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526441);
			@@@var_0_object:ClearReplies();
			var_97_bool = 0; var_98_object = Obj();
			var_98_object = var_1_object;
			func_3520(var_98_object);
			if(var_97_bool != 0) {
				@@@var_0_object:AddReply((int)526442, (int)27718, (int)27717);
			}
			@@@var_0_object:AddReply((int)526449, (int)-1, (int)27724);
			@@@var_0_object:AddReply((int)528982, (int)-1, (int)30419);
			return 0;
		}
		var_115_bool = var_36_bool == (int)27718;
		if(var_115_bool != 0) {
			var_116_string = "";
			func_1483(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526443);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528983, (int)30421, (int)30420);
			return 0;
		}
		var_122_bool = var_36_bool == (int)30421;
		if(var_122_bool != 0) {
			var_123_string = "";
			func_1483(var_37_cvector, "Grimacing");
			@@@var_0_object:SetMessage((int)528984);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528985, (int)30423, (int)30422);
			return 0;
		}
		var_129_bool = var_36_bool == (int)30423;
		if(var_129_bool != 0) {
			var_130_string = "";
			func_1483(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528986);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526444, (int)27720, (int)27719);
			return 0;
		}
		var_136_bool = var_36_bool == (int)27720;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_1483(var_37_cvector, "Strange");
			@@@var_0_object:SetMessage((int)526445);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526446, (int)27722, (int)27721);
			return 0;
		}
		var_143_bool = var_36_bool == (int)27722;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_1483(var_37_cvector, "Strange");
			@@@var_0_object:SetMessage((int)526447);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528987, (int)30425, (int)30424);
			@@@var_0_object:AddReply((int)526448, (int)-1, (int)27723);
			return 0;
		}
		var_153_bool = var_36_bool == (int)30425;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_1483(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528988);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528989, (int)30427, (int)30426);
			return 0;
		}
		var_160_bool = var_36_bool == (int)30427;
		if(var_160_bool != 0) {
			var_161_string = "";
			func_1483(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528990);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528991, (int)-1, (int)30428);
			@@@var_0_object:AddReply((int)528992, (int)30430, (int)30429);
			return 0;
		}
		var_170_bool = var_36_bool == (int)30430;
		if(var_170_bool != 0) {
			var_171_string = "";
			func_1483(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528993);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528994, (int)30432, (int)30431);
			return 0;
		}
		var_177_bool = var_36_bool == (int)30432;
		if(var_177_bool != 0) {
			var_178_string = "";
			func_1483(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528995);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528996, (int)-1, (int)30433);
			return 0;
		}
		var_3_string = true;
		var_183_bool = 0;
		func_3348(var_183_bool);
		if(var_183_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x5e2";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3273();
		var_41_bool = var_37_cvector == (int)28960;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_3439();
		}
		var_47_bool = var_37_cvector == (int)28972;
		if(var_47_bool != 0) {
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_3388();
		}
		var_131_bool = var_36_bool == (int)28958;
		if(var_131_bool != 0) {
			var_132_string = "";
			func_1906(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527613);
			@@@var_0_object:ClearReplies();
			var_150_bool = 0;
			var_150_bool = 0;
			var_151_bool = 0; var_152_object = Obj();
			var_152_object = var_1_object;
			func_3544(var_152_object);
			if(var_151_bool != 0) {
				var_159_bool = 0; var_160_object = Obj();
				var_160_object = var_1_object;
				func_3532(var_160_object);
				if(var_159_bool != 0) {
					var_150_bool = 1;
				}
			}
			if(var_150_bool != 0) {
				@@@var_0_object:AddReply((int)527615, (int)28961, (int)28960);
			}
			@@@var_0_object:AddReply((int)527614, (int)-1, (int)28959);
			return 0;
		}
		var_172_bool = var_36_bool == (int)28961;
		if(var_172_bool != 0) {
			var_173_string = "";
			func_1906(var_37_cvector, "Strange");
			@@@var_0_object:SetMessage((int)527616);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527631, (int)28978, (int)28977);
			return 0;
		}
		var_179_bool = var_36_bool == (int)28978;
		if(var_179_bool != 0) {
			var_180_string = "";
			func_1906(var_37_cvector, "Strange");
			@@@var_0_object:SetMessage((int)527632);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527617, (int)28963, (int)28962);
			@@@var_0_object:AddReply((int)527628, (int)28974, (int)28973);
			return 0;
		}
		var_189_bool = var_36_bool == (int)28974;
		if(var_189_bool != 0) {
			var_190_string = "";
			func_1906(var_37_cvector, "Grimacing");
			@@@var_0_object:SetMessage((int)527629);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527633, (int)28980, (int)28979);
			return 0;
		}
		var_196_bool = var_36_bool == (int)28980;
		if(var_196_bool != 0) {
			var_197_string = "";
			func_1906(var_37_cvector, "Grimacing");
			@@@var_0_object:SetMessage((int)527634);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527630, (int)28965, (int)28975);
			return 0;
		}
		var_203_bool = var_36_bool == (int)28963;
		if(var_203_bool != 0) {
			var_204_string = "";
			func_1906(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527618);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527619, (int)28965, (int)28964);
			return 0;
		}
		var_210_bool = var_36_bool == (int)28965;
		if(var_210_bool != 0) {
			var_211_string = "";
			func_1906(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527620);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527621, (int)28967, (int)28966);
			return 0;
		}
		var_217_bool = var_36_bool == (int)28967;
		if(var_217_bool != 0) {
			var_218_string = "";
			func_1906(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527622);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527623, (int)28969, (int)28968);
			return 0;
		}
		var_224_bool = var_36_bool == (int)28969;
		if(var_224_bool != 0) {
			var_225_string = "";
			func_1906(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527624);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527625, (int)28971, (int)28970);
			@@@var_0_object:AddReply((int)527635, (int)28982, (int)28981);
			return 0;
		}
		var_234_bool = var_36_bool == (int)28982;
		if(var_234_bool != 0) {
			var_235_string = "";
			func_1906(var_37_cvector, "Grimacing");
			@@@var_0_object:SetMessage((int)527636);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527637, (int)28971, (int)28983);
			return 0;
		}
		var_241_bool = var_36_bool == (int)28971;
		if(var_241_bool != 0) {
			var_242_string = "";
			func_1906(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527626);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527627, (int)-1, (int)28972);
			return 0;
		}
		var_3_string = true;
		var_247_bool = 0;
		func_3348(var_247_bool);
		if(var_247_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x789";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3273();
		var_41_bool = var_36_bool == (int)41240;
		if(var_41_bool != 0) {
			var_42_string = "";
			func_2334(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539297);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542655, (int)45059, (int)45057);
			@@@var_0_object:AddReply((int)539298, (int)-1, (int)41241);
			@@@var_0_object:AddReply((int)542656, (int)-1, (int)45058);
			return 0;
		}
		var_70_bool = var_36_bool == (int)45059;
		if(var_70_bool != 0) {
			var_71_string = "";
			func_2334(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542657);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542658, (int)45061, (int)45060);
			@@@var_0_object:AddReply((int)542662, (int)45063, (int)45064);
			return 0;
		}
		var_80_bool = var_36_bool == (int)45061;
		if(var_80_bool != 0) {
			var_81_string = "";
			func_2334(var_37_cvector, "Strange");
			@@@var_0_object:SetMessage((int)542659);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542660, (int)45063, (int)45062);
			return 0;
		}
		var_87_bool = var_36_bool == (int)45063;
		if(var_87_bool != 0) {
			var_88_string = "";
			func_2334(var_37_cvector, "Strange");
			@@@var_0_object:SetMessage((int)542661);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542663, (int)45067, (int)45065);
			@@@var_0_object:AddReply((int)542667, (int)45071, (int)45070);
			return 0;
		}
		var_97_bool = var_36_bool == (int)45071;
		if(var_97_bool != 0) {
			var_98_string = "";
			func_2334(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542668);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542669, (int)45067, (int)45072);
			return 0;
		}
		var_104_bool = var_36_bool == (int)45067;
		if(var_104_bool != 0) {
			var_105_string = "";
			func_2334(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542664);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542665, (int)-1, (int)45068);
			@@@var_0_object:AddReply((int)542666, (int)-1, (int)45069);
			return 0;
		}
		var_3_string = true;
		var_113_bool = 0;
		func_3348(var_113_bool);
		if(var_113_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x935";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_cvector)
{
	if((int)1 != 0) {
		func_3273();
		var_41_bool = var_36_int == (int)42548;
		if(var_41_bool != 0) {
			var_42_string = "";
			func_2647(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540539);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540540, (int)-1, (int)42549);
			@@@var_0_object:AddReply((int)540799, (int)-1, (int)42848);
			return 0;
		}
		var_3_string = true;
		var_66_bool = 0;
		func_3348(var_66_bool);
		if(var_66_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa6e";
	
}


task_14_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_int)
{
	var_38_bool = var_36_int == (int)10;
	if(var_38_bool != 0) {
		func_2783();
		var_40_bool = 0;
		var_40_bool = 0;
		var_41_bool = 0;
		func_2997(var_41_bool);
		if(var_41_bool != 0) {
			var_44_bool = 0;
			func_2752(var_44_bool);
			if(var_44_bool != 0) {
				var_40_bool = 1;
			}
		}
		if(var_40_bool != 0) {
			var_61_bool = 0;
			func_2732(var_61_bool);
			if(var_61_bool != 0) {
				var_80_bool = 0; var_81_object = Obj();
				func_3280(Obj());
				var_82_object = var_81_object;
				func_3147(var_80_bool, var_81_object);
			}
		} else {
			func_2747(var_36_int);
			func_2774();
		}
	}
	return 0;
	
}


task_14_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_2965();
	func_2783();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_14_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	StopGroup0();
	func_2783();
	var_37_string = "";
	func_3227("Neutral");
	func_2774();
	return 0;
}


task_14_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_bool)
{
	var_37_bool = var_36_bool;
	if(var_37_bool != 0) {
		func_2774();
	} else {
		var_43_string = "";
		func_3227("Neutral");
	}
	return 0;
	
}


task_14_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_object)
{
	var_37_bool = 0; var_38_bool = 0;
	IsOverrideActive(var_38_bool);
	var_39_bool = var_38_bool == 0; //@nz
	if(var_39_bool != 0) {
		EventDisable(0);
		func_2965();
		var_40_bool = 0; var_41_object = Obj();
		var_36_object = var_41_object;
		func_2988(var_40_bool, var_41_object);
		EventEnable(0);
		var_54_object = Obj();
		var_36_object = var_54_object;
		func_3769(var_54_object);
		var_701_string = "";
		func_3227("Neutral");
		func_2783();
		func_2774();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	var_36_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_2718(var_35_cvector);
	return 0;
}


func_0(var_0_object, var_286_int, var_287_object)
{
	var_289_object = Obj(); var_290_bool = 0; var_291_int = 0; var_292_bool = 0; var_293_object = Obj(); var_294_bool = 0; var_295_int = 0; var_296_bool = 0;
	var_0_object = var_287_object;
	var_297_bool = 0; var_298_object = Obj(); var_299_float = 0;
	var_287_object = var_298_object;
	func_3002(var_297_bool, var_298_object, (float)70.0);
	var_300_bool = var_297_bool == 0; //@nz
	if(var_300_bool != 0) {
		var_286_int = -2;
		return 8;
	}
	CreateDialog(var_293_object);
	var_301_int = 0;
	func_3342(var_301_int);
	@@var_293_object:SetNPCName(var_301_int);
	var_302_int = 0;
	func_3340(var_302_int);
	@@var_293_object:SetNPCDescription(var_302_int);
	var_303_string = "";
	func_3344(var_303_string);
	@@var_293_object:SetPhoto(var_303_string);
	var_304_string = "";
	func_3346(var_304_string);
	@@var_293_object:SetPhoto2(var_304_string);
	var_305_int = 0;
	func_3752(var_305_int);
	@@var_293_object:SetPlayerName(var_305_int);
	IsOverrideActive(var_294_bool);
	var_306_bool = var_294_bool;
	if(var_306_bool != 0) {
		var_286_int = -2;
		return 8;
	}
	DoDialog(var_293_object);
	var_307_bool = 0; var_308_object = Obj();
	func_3280(Obj());
	var_309_object = var_308_object;
	func_3089(var_307_bool, var_308_object);
	var_310_object = Obj(); var_311_object = Obj();
	var_287_object = var_310_object;
	var_293_object = var_311_object;
	TaskCall(1);
	func_81(var_312_object, var_313_object, var_314_string, var_315_bool, var_310_object, var_311_object);
	TaskReturn();
	@@var_293_object:IsDialogEnd(var_296_bool);
	
Label_63:
	var_366_bool = var_296_bool == 0; //@nz
	if(var_366_bool != 0) {
		sync();
		@@var_293_object:IsDialogEnd(var_296_bool);
		goto Label_63;
	}
	var_287_object = Obj();
	func_3071();
	StopDialog(var_293_object);
	@@var_293_object:GetReturnValue((int)-1);
	var_295_int = var_286_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3594()
{
	var_102_object = Obj(); var_103_object = Obj();
	CreateDiaryEntry(var_103_object, (int)496, (int)1, (int)528063);
	var_107_bool = 0; var_108_object = Obj(); var_109_int = 0;
	var_103_object = var_108_object;
	func_3724(var_107_bool, var_108_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3340(var_117_int)
{
	var_117_int = 515549;
	return 0;
}


func_3342(var_116_int)
{
	var_116_int = 502874;
	return 0;
}


func_3344(var_118_string)
{
	var_118_string = "ui/NPC_Ospina.png";
	return 0;
}


func_3089(var_129_bool, var_130_object)
{
	var_134_int = 0; var_135_int = 0; var_136_int = 0; var_137_int = 0;
	GetVariable("voice_common", var_136_int);
	var_139_int = var_136_int;
	if(var_139_int != 0) {
		var_140_bool = 0; var_141_object = Obj();
		var_130_object = var_141_object;
		func_3147(var_140_bool, var_141_object);
		var_170_bool = var_140_bool == 0; //@nz
		if(var_170_bool != 0) {
			var_171_bool = 0; var_172_object = Obj();
			var_130_object = var_172_object;
			func_3184(var_171_bool, var_172_object);
			var_206_bool = var_171_bool == 0; //@nz
			if(var_206_bool != 0) {
				var_129_bool = 0;
				return 4;
			}
		}
		irand(var_137_int, (int)2);
		var_208_int = var_137_int;
		if(var_208_int != 0) {
			var_211_int = var_136_int + (int)1;
			var_213_int = var_211_int % (int)3;
			SetVariable("voice_common", var_213_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_216_bool = 0; var_217_object = Obj();
		var_130_object = var_217_object;
		func_3184(var_216_bool, var_217_object);
		var_218_bool = var_216_bool == 0; //@nz
		if(var_218_bool != 0) {
			var_219_bool = 0; var_220_object = Obj();
			var_130_object = var_220_object;
			func_3147(var_219_bool, var_220_object);
			var_221_bool = var_219_bool == 0; //@nz
			if(var_221_bool != 0) {
				var_129_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_3145;
	
Label_3145:
	var_129_bool = 1;
	return 4;
	
}


func_3346(var_119_string)
{
	var_119_string = "ui/NPC_Ospina_b.png";
	return 0;
}


func_3348(var_111_bool)
{
	var_111_bool = 1;
	return 0;
}


func_3350()
{
	SetVariable("k2q01", (int)4);
	func_3672();
	return 0;
}


func_3607()
{
	var_92_object = Obj(); var_93_object = Obj();
	CreateDiaryEntry(var_93_object, (int)495, (int)1, (int)528062);
	var_97_bool = 0; var_98_object = Obj(); var_99_int = 0;
	var_93_object = var_98_object;
	func_3724(var_97_bool, var_98_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2589(var_0_object, var_1_object, var_2_object, var_3_string, var_669_object, var_670_object)
{
	var_0_object = var_670_object;
	var_1_object = var_669_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_676_string = "";
		func_2647(var_670_object, "Neutral");
		@@@var_0_object:SetMessage((int)540539);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540540, (int)-1, (int)42549);
		@@@var_0_object:AddReply((int)540799, (int)-1, (int)42848);
		goto Label_2617;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xa21";
	}
Label_2617:
	var_691_bool = 0;
	func_3348(var_691_bool);
	if(var_691_bool != 0) {

	Label_2621:
		lshWaitForAnimEnd();
		var_692_string = var_3_string;
		if(var_692_string != 0) {
		} else {
			var_693_string = "";
			var_693_string = var_2_object;
			func_3227(var_693_string);
			goto Label_2621;
	}
		PlayAnimation("all", "idle");

	Label_2636:
		WaitForAnimEnd();
		var_696_string = var_3_string;
		if(var_696_string != 0) {
			goto Label_2646;
		}
		PlayAnimation("all", "idle");
		goto Label_2636;
	}
	goto Label_2646;
	
Label_2646:
	return 0;
	
}


func_2334(var_2_object, var_617_string)
{
	var_618_bool = 0;
	func_3348(var_618_bool);
	var_619_bool = var_618_bool == 0; //@nz
	if(var_619_bool != 0) {
		return 0;
	}
	var_620_bool = var_617_string == var_2_object;
	if(var_620_bool != 0) {
		return 0;
	}
	var_621_string = ""; var_622_bool = 0;
	var_617_string = var_621_string;
	var_624_bool = var_617_string == "";
	if(var_624_bool != 0) {
		var_622_bool = 0;
	} else {
		var_622_bool = 1;
	}
	func_3243(var_621_string, var_622_bool);
	var_2_object = var_617_string;
	return 0;
	
}


func_3359()
{
	SetVariable("k2q01", (int)6);
	func_3659();
	return 0;
}


func_3620()
{
	var_82_object = Obj(); var_83_object = Obj();
	CreateDiaryEntry(var_83_object, (int)494, (int)1, (int)528061);
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0;
	var_83_object = var_88_object;
	func_3724(var_87_bool, var_88_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3368()
{
	SetVariable("ook6Ospina1", (int)1);
	return 0;
}


func_1834(var_0_object, var_1_object, var_2_object, var_3_string, var_539_object, var_540_object)
{
	var_0_object = var_540_object;
	var_1_object = var_539_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_546_string = "";
		func_1906(var_540_object, "Neutral");
		@@@var_0_object:SetMessage((int)527613);
		@@@var_0_object:ClearReplies();
		var_555_bool = 0;
		var_555_bool = 0;
		var_556_bool = 0; var_557_object = Obj();
		var_557_object = var_1_object;
		func_3544(var_557_object);
		if(var_556_bool != 0) {
			var_562_bool = 0; var_563_object = Obj();
			var_563_object = var_1_object;
			func_3532(var_563_object);
			if(var_562_bool != 0) {
				var_555_bool = 1;
			}
		}
		if(var_555_bool != 0) {
			@@@var_0_object:AddReply((int)527615, (int)28961, (int)28960);
		}
		@@@var_0_object:AddReply((int)527614, (int)-1, (int)28959);
		goto Label_1876;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x72e";
	}
Label_1876:
	var_574_bool = 0;
	func_3348(var_574_bool);
	if(var_574_bool != 0) {

	Label_1880:
		lshWaitForAnimEnd();
		var_575_string = var_3_string;
		if(var_575_string != 0) {
		} else {
			var_576_string = "";
			var_576_string = var_2_object;
			func_3227(var_576_string);
			goto Label_1880;
	}
		PlayAnimation("all", "idle");

	Label_1895:
		WaitForAnimEnd();
		var_579_string = var_3_string;
		if(var_579_string != 0) {
			goto Label_1905;
		}
		PlayAnimation("all", "idle");
		goto Label_1895;
	}
	goto Label_1905;
	
Label_1905:
	return 0;
	
}


func_811(var_0_object, var_1_object, var_2_object, var_3_string, var_224_object, var_225_object)
{
	var_0_object = var_225_object;
	var_1_object = var_224_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_231_string = "";
		func_869(var_225_object, "Neutral");
		@@@var_0_object:SetMessage((int)525519);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)525520, (int)30224, (int)26876);
		@@@var_0_object:AddReply((int)528815, (int)30230, (int)30229);
		goto Label_839;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x32f";
	}
Label_839:
	var_255_bool = 0;
	func_3348(var_255_bool);
	if(var_255_bool != 0) {

	Label_843:
		lshWaitForAnimEnd();
		var_256_string = var_3_string;
		if(var_256_string != 0) {
		} else {
			var_257_string = "";
			var_257_string = var_2_object;
			func_3227(var_257_string);
			goto Label_843;
	}
		PlayAnimation("all", "idle");

	Label_858:
		WaitForAnimEnd();
		var_270_string = var_3_string;
		if(var_270_string != 0) {
			goto Label_868;
		}
		PlayAnimation("all", "idle");
		goto Label_858;
	}
	goto Label_868;
	
Label_868:
	return 0;
	
}


func_3374()
{
	func_3685();
	return 0;
}


func_3633()
{
	var_57_object = Obj(); var_58_object = Obj();
	CreateDiaryEntry(var_58_object, (int)493, (int)1, (int)528060);
	var_62_bool = 0; var_63_object = Obj(); var_64_int = 0;
	var_58_object = var_63_object;
	func_3724(var_62_bool, var_63_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3379()
{
	SetVariable("k8q01", (int)6);
	func_3698();
	return 0;
}


func_1078(var_0_object, var_1_object, var_2_object, var_3_string, var_394_object, var_395_object)
{
	var_0_object = var_395_object;
	var_1_object = var_394_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_401_string = "";
		func_1159(var_395_object, "Fear");
		@@@var_0_object:SetMessage((int)526091);
		@@@var_0_object:ClearReplies();
		var_410_bool = 0;
		var_410_bool = 0;
		var_411_bool = 0;
		var_411_bool = 0;
		var_412_bool = 0; var_413_object = Obj();
		var_413_object = var_1_object;
		func_3484(var_413_object);
		if(var_412_bool != 0) {
			var_418_bool = 0; var_419_object = Obj();
			var_419_object = var_1_object;
			func_3496(var_419_object);
			if(var_418_bool != 0) {
				var_411_bool = 1;
			}
		}
		if(var_411_bool != 0) {
			var_424_bool = 0; var_425_object = Obj();
			var_425_object = var_1_object;
			func_3508(var_425_object);
			if(var_424_bool != 0) {
				var_410_bool = 1;
			}
		}
		if(var_410_bool != 0) {
			@@@var_0_object:AddReply((int)526092, (int)27379, (int)27378);
		}
		@@@var_0_object:AddReply((int)526095, (int)-1, (int)27381);
		goto Label_1129;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x43a";
	}
Label_1129:
	var_436_bool = 0;
	func_3348(var_436_bool);
	if(var_436_bool != 0) {

	Label_1133:
		lshWaitForAnimEnd();
		var_437_string = var_3_string;
		if(var_437_string != 0) {
		} else {
			var_438_string = "";
			var_438_string = var_2_object;
			func_3227(var_438_string);
			goto Label_1133;
	}
		PlayAnimation("all", "idle");

	Label_1148:
		WaitForAnimEnd();
		var_441_string = var_3_string;
		if(var_441_string != 0) {
			goto Label_1158;
		}
		PlayAnimation("all", "idle");
		goto Label_1148;
	}
	goto Label_1158;
	
Label_1158:
	return 0;
	
}


func_1334(var_0_object, var_448_int, var_449_object)
{
	var_451_object = Obj(); var_452_bool = 0; var_453_int = 0; var_454_bool = 0; var_455_object = Obj(); var_456_bool = 0; var_457_int = 0; var_458_bool = 0;
	var_0_object = var_449_object;
	var_459_bool = 0; var_460_object = Obj(); var_461_float = 0;
	var_449_object = var_460_object;
	func_3002(var_459_bool, var_460_object, (float)70.0);
	var_462_bool = var_459_bool == 0; //@nz
	if(var_462_bool != 0) {
		var_448_int = -2;
		return 8;
	}
	CreateDialog(var_455_object);
	var_463_int = 0;
	func_3342(var_463_int);
	@@var_455_object:SetNPCName(var_463_int);
	var_464_int = 0;
	func_3340(var_464_int);
	@@var_455_object:SetNPCDescription(var_464_int);
	var_465_string = "";
	func_3344(var_465_string);
	@@var_455_object:SetPhoto(var_465_string);
	var_466_string = "";
	func_3346(var_466_string);
	@@var_455_object:SetPhoto2(var_466_string);
	var_467_int = 0;
	func_3752(var_467_int);
	@@var_455_object:SetPlayerName(var_467_int);
	IsOverrideActive(var_456_bool);
	var_468_bool = var_456_bool;
	if(var_468_bool != 0) {
		var_448_int = -2;
		return 8;
	}
	DoDialog(var_455_object);
	var_469_bool = 0; var_470_object = Obj();
	func_3280(Obj());
	var_471_object = var_470_object;
	func_3089(var_469_bool, var_470_object);
	var_472_object = Obj(); var_473_object = Obj();
	var_449_object = var_472_object;
	var_455_object = var_473_object;
	TaskCall(7);
	func_1415(var_474_object, var_475_object, var_476_string, var_477_bool, var_472_object, var_473_object);
	TaskReturn();
	@@var_455_object:IsDialogEnd(var_458_bool);
	
Label_1397:
	var_511_bool = var_458_bool == 0; //@nz
	if(var_511_bool != 0) {
		sync();
		@@var_455_object:IsDialogEnd(var_458_bool);
		goto Label_1397;
	}
	var_449_object = Obj();
	func_3071();
	StopDialog(var_455_object);
	@@var_455_object:GetReturnValue((int)-1);
	var_457_int = var_448_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3388()
{
	var_50_int = 0; var_51_int = 0;
	GetVariable("k11q01SoulCount", var_51_int);
	var_51_int = var_51_int + (int)1;
	SetVariable("k11q01SoulCount", var_51_int);
	var_56_bool = var_51_int == (int)2;
	if(var_56_bool != 0) {
		func_3633();
	} else {
		var_81_bool = var_51_int == (int)3;
		if(var_81_bool != 0) {
			func_3620();
			goto Label_3438;
		}
		var_91_bool = var_51_int == (int)4;
		if(var_91_bool != 0) {
			func_3607();
			goto Label_3438;
		}
		var_101_bool = var_51_int == (int)5;
		if(var_101_bool != 0) {
			func_3594();
			goto Label_3438;
		}
		var_111_bool = var_51_int == (int)6;
		if(var_111_bool != 0) {
			func_3581();
			goto Label_3438;
		}
		var_121_bool = var_51_int == (int)7;
		if(var_121_bool == 0) goto Label_3438;
		func_3568();
	}
Label_3438:
	return 2;
	
}


func_3646()
{
	var_75_object = Obj(); var_76_object = Obj();
	CreateDiaryEntry(var_76_object, (int)790, (int)1, (int)542526);
	var_80_bool = 0; var_81_object = Obj(); var_82_int = 0;
	var_76_object = var_81_object;
	func_3724(var_80_bool, var_81_object, (int)461);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3147(var_140_bool, var_141_object)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = "";
	var_147_string = "c";
	var_148_int = 0;
	
Label_3150:
	if((int)1 != 0) {
		var_154_int = var_148_int + (int)1;
		var_155_int = var_147_string + var_154_int;
		@@var_141_object:HasProperty(var_155_int, var_149_bool);
		var_156_bool = var_149_bool == 0; //@nz
		if(var_156_bool != 0) {
		} else {
			var_148_int = var_148_int + (int)1;
			goto Label_3150;
		}
	}
	var_157_bool = var_148_int == 0; //@nz
	if(var_157_bool != 0) {
		var_140_bool = 0;
		return 10;
	}
	var_150_int = 0;
	var_159_bool = var_148_int > (int)1;
	if(var_159_bool != 0) {
		irand(var_150_int, var_148_int);
	}
	var_161_int = var_150_int + (int)1;
	var_162_int = var_147_string + var_161_int;
	@@var_141_object:GetProperty(var_162_int, var_151_string);
	var_163_bool = 0; var_164_string = "";
	var_151_string = var_164_string;
	func_3258(var_163_bool, var_164_string);
	var_163_bool = var_140_bool;
	return 10;
	
}


func_3659()
{
	var_93_object = Obj(); var_94_object = Obj();
	CreateDiaryEntry(var_94_object, (int)467, (int)1, (int)527783);
	var_98_bool = 0; var_99_object = Obj(); var_100_int = 0;
	var_94_object = var_99_object;
	func_3724(var_98_bool, var_99_object, (int)461);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2894()
{
	var_41_int = 0; var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_int = 0; var_52_bool = 0;
	WaitForAnimEnd();
	var_53_bool = 0;
	func_2997(var_53_bool);
	var_54_bool = var_53_bool == 0; //@nz
	if(var_54_bool != 0) {
		return 12;
	}
	func_3323((int)0);
	var_55_int = var_47_int;
	var_48_int = 0;
	
Label_2908:
	var_68_bool = 0;
	var_68_bool = 0;
	var_70_bool = var_48_int < (int)5;
	if(var_70_bool != 0) {
		var_71_bool = 0;
		func_2997(var_71_bool);
		if(var_71_bool != 0) {
			var_68_bool = 1;
		}
	}
	if(var_68_bool != 0) {
		var_72_bool = var_47_int == 0; //@nz
		if(var_72_bool != 0) {
			Sleep((int)3, var_49_bool);
			var_74_bool = var_49_bool == 0; //@nz
			if(var_74_bool != 0) {
			} else {
		} else {
				irand(var_50_int, var_47_int);
				irand(var_51_int, (int)5);
				var_80_bool = var_51_int != (int)0;
				if(var_80_bool != 0) {
					var_50_int = 0;
				}
				var_82_string = ""; var_83_int = 0;
				var_50_int = var_83_int;
				func_3316(var_82_string, var_83_int);
				PlayAnimation("all", var_82_string);
				WaitForAnimEnd(var_52_bool);
				var_84_bool = var_52_bool == 0; //@nz
				if(var_84_bool == 0) goto Label_2949;
				goto Label_2960;
		}
		Label_2949:
			var_75_bool = 0;
			func_2963(var_75_bool);
			var_76_bool = var_75_bool == 0; //@nz
			if(var_76_bool != 0) {
				goto Label_2960;
			}
			ResetAAS();
			var_48_int = var_48_int + (int)1;
			goto Label_2908;

		}
	}
Label_2960:
	ResetAAS();
	return 12;
	
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_310_object, var_311_object)
{
	var_0_object = var_311_object;
	var_1_object = var_310_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_317_string = "";
		func_184(var_311_object, "Neutral");
		@@@var_0_object:SetMessage((int)525251);
		@@@var_0_object:ClearReplies();
		var_326_bool = 0; var_327_object = Obj();
		var_327_object = var_1_object;
		func_3460(var_327_object);
		if(var_326_bool != 0) {
			@@@var_0_object:AddReply((int)525252, (int)44489, (int)26620);
		}
		var_337_bool = 0; var_338_object = Obj();
		var_338_object = var_1_object;
		func_3472(var_338_object);
		if(var_337_bool != 0) {
			@@@var_0_object:AddReply((int)525263, (int)26632, (int)26631);
		}
		var_346_bool = 0; var_347_object = Obj();
		var_347_object = var_1_object;
		func_3556(var_347_object);
		if(var_346_bool != 0) {
			@@@var_0_object:AddReply((int)542179, (int)44499, (int)44498);
		}
		@@@var_0_object:AddReply((int)525255, (int)-1, (int)26623);
		goto Label_154;
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=89";
	EMIT "Call2 0xb8";
	EMIT "Pop(1)";
	EMIT "Push((int) 525280)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=105";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=116";
	EMIT "Pop(0)";
	EMIT "Push((int) 525281)";
	EMIT "Push((int) -1)";
	EMIT "Push((int) 26649)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129";
	EMIT "Pop(3)";
	EMIT "Push((int) 528809)";
	EMIT "Push((int) -1)";
	EMIT "Push((int) 30223)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129";
	EMIT "Pop(3)";
	EMIT "GOTO 0x9a";
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_154:
	var_358_bool = 0;
	func_3348(var_358_bool);
	if(var_358_bool != 0) {

	Label_158:
		lshWaitForAnimEnd();
		var_359_string = var_3_string;
		if(var_359_string != 0) {
		} else {
			var_360_string = "";
			var_360_string = var_2_object;
			func_3227(var_360_string);
			goto Label_158;
	}
		PlayAnimation("all", "idle");

	Label_173:
		WaitForAnimEnd();
		var_363_string = var_3_string;
		if(var_363_string != 0) {
			goto Label_183;
		}
		PlayAnimation("all", "idle");
		goto Label_173;
	}
	goto Label_183;
	
Label_183:
	return 0;
	
}


func_2647(var_2_object, var_676_string)
{
	var_677_bool = 0;
	func_3348(var_677_bool);
	var_678_bool = var_677_bool == 0; //@nz
	if(var_678_bool != 0) {
		return 0;
	}
	var_679_bool = var_676_string == var_2_object;
	if(var_679_bool != 0) {
		return 0;
	}
	var_680_string = ""; var_681_bool = 0;
	var_676_string = var_680_string;
	var_683_bool = var_676_string == "";
	if(var_683_bool != 0) {
		var_681_bool = 0;
	} else {
		var_681_bool = 1;
	}
	func_3243(var_680_string, var_681_bool);
	var_2_object = var_676_string;
	return 0;
	
}


func_3672()
{
	var_46_object = Obj(); var_47_object = Obj();
	CreateDiaryEntry(var_47_object, (int)465, (int)1, (int)527781);
	var_51_bool = 0; var_52_object = Obj(); var_53_int = 0;
	var_47_object = var_52_object;
	func_3724(var_51_bool, var_52_object, (int)461);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3685()
{
	var_50_object = Obj(); var_51_object = Obj();
	CreateDiaryEntry(var_51_object, (int)414, (int)1, (int)526115);
	var_55_bool = 0; var_56_object = Obj(); var_57_int = 0;
	var_51_object = var_56_object;
	func_3724(var_55_bool, var_56_object, (int)408);
	return 2;
}
EMIT "Stack[-1] = 0";


func_869(var_2_object, var_231_string)
{
	var_232_bool = 0;
	func_3348(var_232_bool);
	var_233_bool = var_232_bool == 0; //@nz
	if(var_233_bool != 0) {
		return 0;
	}
	var_234_bool = var_231_string == var_2_object;
	if(var_234_bool != 0) {
		return 0;
	}
	var_235_string = ""; var_236_bool = 0;
	var_231_string = var_235_string;
	var_238_bool = var_231_string == "";
	if(var_238_bool != 0) {
		var_236_bool = 0;
	} else {
		var_236_bool = 1;
	}
	func_3243(var_235_string, var_236_bool);
	var_2_object = var_231_string;
	return 0;
	
}


func_3439()
{
	SetVariable("ook11Ospina1", (int)1);
	return 0;
}


func_3184(var_171_bool, var_172_object)
{
	var_173_string = ""; var_174_int = 0; var_175_bool = 0; var_176_int = 0; var_177_string = ""; var_178_string = ""; var_179_int = 0; var_180_bool = 0; var_181_int = 0; var_182_string = "";
	var_184_int = 0;
	func_3301(var_184_int);
	var_190_int = "d" + var_184_int;
	var_178_string = var_190_int + "m";
	var_179_int = 0;
	
Label_3193:
	if((int)1 != 0) {
		var_194_int = var_179_int + (int)1;
		var_195_int = var_178_string + var_194_int;
		@@var_172_object:HasProperty(var_195_int, var_180_bool);
		var_196_bool = var_180_bool == 0; //@nz
		if(var_196_bool != 0) {
		} else {
			var_179_int = var_179_int + (int)1;
			goto Label_3193;
		}
	}
	var_197_bool = var_179_int == 0; //@nz
	if(var_197_bool != 0) {
		var_171_bool = 0;
		return 10;
	}
	var_181_int = 0;
	var_199_bool = var_179_int > (int)1;
	if(var_199_bool != 0) {
		irand(var_181_int, var_179_int);
	}
	var_201_int = var_181_int + (int)1;
	var_202_int = var_178_string + var_201_int;
	@@var_172_object:GetProperty(var_202_int, var_182_string);
	var_203_bool = 0; var_204_string = "";
	var_182_string = var_204_string;
	func_3258(var_203_bool, var_204_string);
	var_203_bool = var_171_bool;
	return 10;
	
}


func_3698()
{
	var_46_object = Obj(); var_47_object = Obj();
	CreateDiaryEntry(var_47_object, (int)444, (int)1, (int)526469);
	var_51_bool = 0; var_52_object = Obj(); var_53_int = 0;
	var_47_object = var_52_object;
	func_3724(var_51_bool, var_52_object, (int)438);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1906(var_2_object, var_546_string)
{
	var_547_bool = 0;
	func_3348(var_547_bool);
	var_548_bool = var_547_bool == 0; //@nz
	if(var_548_bool != 0) {
		return 0;
	}
	var_549_bool = var_546_string == var_2_object;
	if(var_549_bool != 0) {
		return 0;
	}
	var_550_string = ""; var_551_bool = 0;
	var_546_string = var_550_string;
	var_553_bool = var_546_string == "";
	if(var_553_bool != 0) {
		var_551_bool = 0;
	} else {
		var_551_bool = 1;
	}
	func_3243(var_550_string, var_551_bool);
	var_2_object = var_546_string;
	return 0;
	
}


func_3445()
{
	SetVariable("ook2Ospina1", (int)1);
	return 0;
}


func_3451()
{
	SetVariable("k2q01", (int)-1);
	func_3646();
	return 0;
}


func_3711(var_71_object)
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


func_3460(var_326_bool)
{
	var_328_int = 0; var_329_string = "";
	func_3296(var_328_int, "k2q01");
	var_333_bool = var_328_int == (int)2;
	if(var_333_bool != 0) {
		var_326_bool = 1;
		return 0;
	}
	var_326_bool = 0;
	return 0;
}


func_1159(var_2_object, var_401_string)
{
	var_402_bool = 0;
	func_3348(var_402_bool);
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
	func_3243(var_405_string, var_406_bool);
	var_2_object = var_401_string;
	return 0;
	
}


func_1415(var_0_object, var_1_object, var_2_object, var_3_string, var_472_object, var_473_object)
{
	var_0_object = var_473_object;
	var_1_object = var_472_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_479_string = "";
		func_1483(var_473_object, "Neutral");
		@@@var_0_object:SetMessage((int)526441);
		@@@var_0_object:ClearReplies();
		var_488_bool = 0; var_489_object = Obj();
		var_489_object = var_1_object;
		func_3520(var_489_object);
		if(var_488_bool != 0) {
			@@@var_0_object:AddReply((int)526442, (int)27718, (int)27717);
		}
		@@@var_0_object:AddReply((int)526449, (int)-1, (int)27724);
		@@@var_0_object:AddReply((int)528982, (int)-1, (int)30419);
		goto Label_1453;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x58b";
	}
Label_1453:
	var_503_bool = 0;
	func_3348(var_503_bool);
	if(var_503_bool != 0) {

	Label_1457:
		lshWaitForAnimEnd();
		var_504_string = var_3_string;
		if(var_504_string != 0) {
		} else {
			var_505_string = "";
			var_505_string = var_2_object;
			func_3227(var_505_string);
			goto Label_1457;
	}
		PlayAnimation("all", "idle");

	Label_1472:
		WaitForAnimEnd();
		var_508_string = var_3_string;
		if(var_508_string != 0) {
			goto Label_1482;
		}
		PlayAnimation("all", "idle");
		goto Label_1472;
	}
	goto Label_1482;
	
Label_1482:
	return 0;
	
}


func_3724(var_62_bool, var_63_object, var_64_int)
{
	var_65_object = Obj(); var_66_object = Obj(); var_67_int = 0; var_68_object = Obj(); var_69_object = Obj(); var_70_int = 0;
	func_3711(Obj());
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


func_2190(var_0_object, var_586_int, var_587_object)
{
	var_589_object = Obj(); var_590_bool = 0; var_591_int = 0; var_592_bool = 0; var_593_object = Obj(); var_594_bool = 0; var_595_int = 0; var_596_bool = 0;
	var_0_object = var_587_object;
	var_597_bool = 0; var_598_object = Obj(); var_599_float = 0;
	var_587_object = var_598_object;
	func_3002(var_597_bool, var_598_object, (float)70.0);
	var_600_bool = var_597_bool == 0; //@nz
	if(var_600_bool != 0) {
		var_586_int = -2;
		return 8;
	}
	CreateDialog(var_593_object);
	var_601_int = 0;
	func_3342(var_601_int);
	@@var_593_object:SetNPCName(var_601_int);
	var_602_int = 0;
	func_3340(var_602_int);
	@@var_593_object:SetNPCDescription(var_602_int);
	var_603_string = "";
	func_3344(var_603_string);
	@@var_593_object:SetPhoto(var_603_string);
	var_604_string = "";
	func_3346(var_604_string);
	@@var_593_object:SetPhoto2(var_604_string);
	var_605_int = 0;
	func_3752(var_605_int);
	@@var_593_object:SetPlayerName(var_605_int);
	IsOverrideActive(var_594_bool);
	var_606_bool = var_594_bool;
	if(var_606_bool != 0) {
		var_586_int = -2;
		return 8;
	}
	DoDialog(var_593_object);
	var_607_bool = 0; var_608_object = Obj();
	func_3280(Obj());
	var_609_object = var_608_object;
	func_3089(var_607_bool, var_608_object);
	var_610_object = Obj(); var_611_object = Obj();
	var_587_object = var_610_object;
	var_593_object = var_611_object;
	TaskCall(11);
	func_2271(var_612_object, var_613_object, var_614_string, var_615_bool, var_610_object, var_611_object);
	TaskReturn();
	@@var_593_object:IsDialogEnd(var_596_bool);
	
Label_2253:
	var_643_bool = var_596_bool == 0; //@nz
	if(var_643_bool != 0) {
		sync();
		@@var_593_object:IsDialogEnd(var_596_bool);
		goto Label_2253;
	}
	var_587_object = Obj();
	func_3071();
	StopDialog(var_593_object);
	@@var_593_object:GetReturnValue((int)-1);
	var_595_int = var_586_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3472(var_337_bool)
{
	var_339_int = 0; var_340_string = "";
	func_3296(var_339_int, "k2q01");
	var_342_bool = var_339_int == (int)5;
	if(var_342_bool != 0) {
		var_337_bool = 1;
		return 0;
	}
	var_337_bool = 0;
	return 0;
}


func_2963(var_75_bool)
{
	var_75_bool = 1;
	return 0;
}


func_2965()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_2970(var_51_float, var_52_object)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0);
	GetPosition(var_56_cvector);
	@@var_52_object:GetPosition(var_57_cvector);
	var_58_cvector = var_57_cvector - var_56_cvector;
	var_51_float = var_58_cvector | var_58_cvector;
	return 6;
}


func_3227(var_257_string)
{
	var_258_bool = 0; var_259_float = 0; var_260_float = 0; var_261_bool = 0; var_262_float = 0; var_263_float = 0;
	lshHasAnimation(var_261_bool, var_257_string);
	var_264_bool = var_261_bool;
	if(var_264_bool != 0) {
		lshGetAnimTimes(var_257_string, var_262_float, var_263_float);
		lshPlayAnimation(var_262_float, var_263_float, (bool)0);
	} else {
		var_267_int = "Can't find lsh animation : " + var_257_string;
		Trace(var_267_int);
	}
	return 6;
	
}


func_3484(var_412_bool)
{
	var_414_int = 0; var_415_string = "";
	func_3296(var_414_int, "k6q01");
	var_417_bool = var_414_int == (int)2;
	if(var_417_bool != 0) {
		var_412_bool = 1;
		return 0;
	}
	var_412_bool = 0;
	return 0;
}


func_2718(var_0_object)
{
	var_37_bool = 0;
	func_2997(var_37_bool);
	var_40_bool = var_37_bool == 0; //@nz
	if(var_40_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_2727:
	func_2894();
	goto Label_2727;
}
EMIT "Return(); Pop(0)";


func_2978(var_44_bool, var_45_cvector)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_bool = 0;
	GetPosition(var_49_cvector);
	var_50_cvector = var_45_cvector - var_49_cvector;
	var_52_float = GetByIndex(var_50_cvector, 0);
	var_53_float = GetByIndex(var_50_cvector, 2);
	Rotate(var_52_float, var_53_float, var_51_bool);
	var_51_bool = var_44_bool;
	return 6;
}


func_3752(var_120_int)
{
	var_121_int = 0; var_122_int = 0;
	GetVariable("branch", var_122_int);
	var_125_bool = var_122_int == (int)0;
	if(var_125_bool != 0) {
		var_120_int = 1;
		return 2;
	EMIT "GOTO 0xeb7";
	}
	var_127_bool = var_122_int == (int)1;
	if(var_127_bool != 0) {
		var_120_int = 2;
		return 2;
	}
	var_120_int = 3;
	return 2;
}


func_3496(var_418_bool)
{
	var_420_int = 0; var_421_string = "";
	func_3296(var_420_int, "k6q01DankoPos");
	var_423_bool = var_420_int > (int)3;
	if(var_423_bool != 0) {
		var_418_bool = 1;
		return 0;
	}
	var_418_bool = 0;
	return 0;
}


func_3243(var_235_string, var_236_bool)
{
	var_239_bool = 0; var_240_float = 0; var_241_float = 0; var_242_bool = 0; var_243_float = 0; var_244_float = 0;
	lshHasAnimation(var_242_bool, var_235_string);
	var_245_bool = var_242_bool;
	if(var_245_bool != 0) {
		lshGetAnimTimes(var_235_string, var_243_float, var_244_float);
		lshPlayAnimation(var_243_float, var_244_float, var_236_bool);
	} else {
		var_247_int = "Can't find lsh animation : " + var_235_string;
		Trace(var_247_int);
	}
	return 6;
	
}


func_2732(var_61_bool)
{
	var_62_object = Obj(); var_63_object = Obj();
	FindActor(var_63_object, "player");
	var_65_bool = var_63_object == 0; //@nz
	if(var_65_bool != 0) {
		var_61_bool = 0;
		return 2;
	}
	var_66_bool = 0; var_67_object = Obj();
	var_63_object = var_67_object;
	func_2988(var_66_bool, var_67_object);
	var_66_bool = var_61_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2988(var_40_bool, var_41_object)
{
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	@@var_41_object:GetPosition(var_43_cvector);
	var_44_bool = 0; var_45_cvector = CVector(0,0,0);
	var_43_cvector = var_45_cvector;
	func_2978(var_44_bool, var_45_cvector);
	var_44_bool = var_40_bool;
	return 2;
}


func_3508(var_424_bool)
{
	var_426_int = 0; var_427_string = "";
	func_3296(var_426_int, "ook6Ospina1");
	var_429_bool = var_426_int == (int)0;
	if(var_429_bool != 0) {
		var_424_bool = 1;
		return 0;
	}
	var_424_bool = 0;
	return 0;
}


func_2997(var_37_bool)
{
	var_38_bool = 0; var_39_bool = 0;
	IsLoaded(var_39_bool);
	var_39_bool = var_37_bool;
	return 2;
}


func_184(var_2_object, var_317_string)
{
	var_318_bool = 0;
	func_3348(var_318_bool);
	var_319_bool = var_318_bool == 0; //@nz
	if(var_319_bool != 0) {
		return 0;
	}
	var_320_bool = var_317_string == var_2_object;
	if(var_320_bool != 0) {
		return 0;
	}
	var_321_string = ""; var_322_bool = 0;
	var_317_string = var_321_string;
	var_324_bool = var_317_string == "";
	if(var_324_bool != 0) {
		var_322_bool = 0;
	} else {
		var_322_bool = 1;
	}
	func_3243(var_321_string, var_322_bool);
	var_2_object = var_317_string;
	return 0;
	
}


func_3769(var_54_object)
{
	var_55_bool = GlobalVars[1];
	var_56_bool = var_55_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_57_int = 0; var_58_object = Obj();
		var_54_object = var_58_object;
		TaskCall(2);
		func_730(var_59_object, var_57_int, var_58_object);
		TaskReturn();
		var_282_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_283_bool = 0; var_284_int = 0;
	func_3310(var_283_bool, (int)2);
	if(var_283_bool != 0) {
		var_286_int = 0; var_287_object = Obj();
		var_54_object = var_287_object;
		TaskCall(0);
		func_0(var_288_object, var_286_int, var_287_object);
		TaskReturn();
		return 0;
	}
	var_368_bool = 0; var_369_int = 0;
	func_3310(var_368_bool, (int)6);
	if(var_368_bool != 0) {
		var_370_int = 0; var_371_object = Obj();
		var_54_object = var_371_object;
		TaskCall(4);
		func_997(var_372_object, var_370_int, var_371_object);
		TaskReturn();
		return 0;
	}
	var_446_bool = 0; var_447_int = 0;
	func_3310(var_446_bool, (int)8);
	if(var_446_bool != 0) {
		var_448_int = 0; var_449_object = Obj();
		var_54_object = var_449_object;
		TaskCall(6);
		func_1334(var_450_object, var_448_int, var_449_object);
		TaskReturn();
		return 0;
	}
	var_513_bool = 0; var_514_int = 0;
	func_3310(var_513_bool, (int)11);
	if(var_513_bool != 0) {
		var_515_int = 0; var_516_object = Obj();
		var_54_object = var_516_object;
		TaskCall(8);
		func_1753(var_517_object, var_515_int, var_516_object);
		TaskReturn();
		return 0;
	}
	var_584_bool = 0; var_585_int = 0;
	func_3310(var_584_bool, (int)12);
	if(var_584_bool != 0) {
		var_586_int = 0; var_587_object = Obj();
		var_54_object = var_587_object;
		TaskCall(10);
		func_2190(var_588_object, var_586_int, var_587_object);
		TaskReturn();
		return 0;
	}
	var_645_int = 0; var_646_object = Obj();
	var_54_object = var_646_object;
	TaskCall(12);
	func_2508(var_647_object, var_645_int, var_646_object);
	TaskReturn();
	return 0;
}


func_3258(var_163_bool, var_164_string)
{
	var_165_bool = 0; var_166_bool = 0;
	var_167_bool = 0;
	func_3348(var_167_bool);
	if(var_167_bool != 0) {
		lshHasSpeech(var_166_bool, var_164_string);
		var_168_bool = var_166_bool;
		if(var_168_bool != 0) {
			lshPlaySpeech(var_164_string);
			var_163_bool = 1;
			return 2;
		}
	}
	var_163_bool = 0;
	return 2;
}


func_2747(var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0);
	var_114_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_113_float, var_114_float);
	return 0;
}


func_3002(var_68_bool, var_69_object, var_70_float)
{
	var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_bool = 0; var_79_bool = 0; var_80_float = 0; var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_bool = 0; var_88_bool = 0;
	@@var_69_object:GetPosition(var_81_cvector);
	@@var_69_object:GetEyesHeight(var_80_float);
	var_89_float = GetByIndex(var_81_cvector, 1);
	var_89_float = var_89_float + var_80_float;
	SetByIndex(var_81_cvector, 1) = var_89_float;
	GetPosition(var_82_cvector);
	GetEyesHeight(var_80_float);
	var_90_float = GetByIndex(var_82_cvector, 1);
	var_90_float = var_90_float + var_80_float;
	SetByIndex(var_82_cvector, 1) = var_90_float;
	var_83_cvector = var_81_cvector - var_82_cvector;
	var_91_float = GetByIndex(var_83_cvector, 1);
	SetByIndex(var_83_cvector, 1) = (float)0;
	var_92_int = var_83_cvector | var_83_cvector;
	var_93_float = sqrt(var_92_int);
	var_83_cvector = var_83_cvector / var_93_float;
	var_84_cvector = -var_83_cvector;
	var_94_float = var_83_cvector * var_70_float;
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0);
	var_96_cvector = var_84_cvector ^ CVector(0.0, 1.0, 0.0);
	func_3286(var_95_cvector, var_96_cvector);
	var_104_float = var_95_cvector * (int)25;
	var_105_int = var_94_float + var_104_float;
	var_85_cvector = var_105_int - CVector(0.0, 10.0, 0.0);
	var_86_cvector = var_82_cvector + var_85_cvector;
	IsOverrideActive(var_87_bool);
	var_107_bool = var_87_bool;
	if(var_107_bool != 0) {
		var_68_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_86_cvector, var_84_cvector, (bool)1);
	var_109_float = GetByIndex(var_85_cvector, 0);
	var_110_float = GetByIndex(var_85_cvector, 2);
	Rotate(var_109_float, var_110_float);
	var_111_bool = 0;
	func_3348(var_111_bool);
	if(var_111_bool != 0) {
	} else {
		HasAnimationTrack(var_88_bool, "head");
		var_113_bool = var_88_bool;
		if(var_113_bool == 0) goto Label_3065;
		LookAsyncCamera("head");
	}
Label_3065:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_68_bool = 1;
	return 18;
	
}


func_2752(var_44_bool)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_object = Obj(); var_48_bool = 0;
	FindActor(var_47_object, "player");
	var_50_bool = var_47_object == 0; //@nz
	if(var_50_bool != 0) {
		var_44_bool = 0;
		return 4;
	}
	var_51_float = 0; var_52_object = Obj();
	var_47_object = var_52_object;
	func_2970(var_51_float, var_52_object);
	var_60_bool = var_51_float > (float)90000.0;
	if(var_60_bool != 0) {
		var_44_bool = 0;
		return 4;
	}
	CanSee(var_48_bool, var_47_object);
	var_48_bool = var_44_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_3520(var_488_bool)
{
	var_490_int = 0; var_491_string = "";
	func_3296(var_490_int, "k8q01");
	var_493_bool = var_490_int == (int)5;
	if(var_493_bool != 0) {
		var_488_bool = 1;
		return 0;
	}
	var_488_bool = 0;
	return 0;
}


func_3273()
{
	var_39_bool = 0;
	func_3348(var_39_bool);
	if(var_39_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1483(var_2_object, var_479_string)
{
	var_480_bool = 0;
	func_3348(var_480_bool);
	var_481_bool = var_480_bool == 0; //@nz
	if(var_481_bool != 0) {
		return 0;
	}
	var_482_bool = var_479_string == var_2_object;
	if(var_482_bool != 0) {
		return 0;
	}
	var_483_string = ""; var_484_bool = 0;
	var_479_string = var_483_string;
	var_486_bool = var_479_string == "";
	if(var_486_bool != 0) {
		var_484_bool = 0;
	} else {
		var_484_bool = 1;
	}
	func_3243(var_483_string, var_484_bool);
	var_2_object = var_479_string;
	return 0;
	
}


func_3532(var_562_bool)
{
	var_564_int = 0; var_565_string = "";
	func_3296(var_564_int, "k11q01");
	var_567_bool = var_564_int == (int)9;
	if(var_567_bool != 0) {
		var_562_bool = 1;
		return 0;
	}
	var_562_bool = 0;
	return 0;
}


func_2508(var_0_object, var_645_int, var_646_object)
{
	var_648_object = Obj(); var_649_bool = 0; var_650_int = 0; var_651_bool = 0; var_652_object = Obj(); var_653_bool = 0; var_654_int = 0; var_655_bool = 0;
	var_0_object = var_646_object;
	var_656_bool = 0; var_657_object = Obj(); var_658_float = 0;
	var_646_object = var_657_object;
	func_3002(var_656_bool, var_657_object, (float)70.0);
	var_659_bool = var_656_bool == 0; //@nz
	if(var_659_bool != 0) {
		var_645_int = -2;
		return 8;
	}
	CreateDialog(var_652_object);
	var_660_int = 0;
	func_3342(var_660_int);
	@@var_652_object:SetNPCName(var_660_int);
	var_661_int = 0;
	func_3340(var_661_int);
	@@var_652_object:SetNPCDescription(var_661_int);
	var_662_string = "";
	func_3344(var_662_string);
	@@var_652_object:SetPhoto(var_662_string);
	var_663_string = "";
	func_3346(var_663_string);
	@@var_652_object:SetPhoto2(var_663_string);
	var_664_int = 0;
	func_3752(var_664_int);
	@@var_652_object:SetPlayerName(var_664_int);
	IsOverrideActive(var_653_bool);
	var_665_bool = var_653_bool;
	if(var_665_bool != 0) {
		var_645_int = -2;
		return 8;
	}
	DoDialog(var_652_object);
	var_666_bool = 0; var_667_object = Obj();
	func_3280(Obj());
	var_668_object = var_667_object;
	func_3089(var_666_bool, var_667_object);
	var_669_object = Obj(); var_670_object = Obj();
	var_646_object = var_669_object;
	var_652_object = var_670_object;
	TaskCall(13);
	func_2589(var_671_object, var_672_object, var_673_string, var_674_bool, var_669_object, var_670_object);
	TaskReturn();
	@@var_652_object:IsDialogEnd(var_655_bool);
	
Label_2571:
	var_699_bool = var_655_bool == 0; //@nz
	if(var_699_bool != 0) {
		sync();
		@@var_652_object:IsDialogEnd(var_655_bool);
		goto Label_2571;
	}
	var_646_object = Obj();
	func_3071();
	StopDialog(var_652_object);
	@@var_652_object:GetReturnValue((int)-1);
	var_654_int = var_645_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3280(var_131_object)
{
	var_132_object = Obj(); var_133_object = Obj();
	self(var_133_object);
	var_133_object = var_131_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2774()
{
	var_703_float = 0; var_704_float = 0;
	rand(var_704_float, (int)8, (int)16);
	SetTimer((int)10, var_704_float);
	return 2;
}


func_3286(var_95_cvector, var_96_cvector)
{
	var_98_float = 0; var_99_float = 0;
	var_100_int = var_96_cvector | var_96_cvector;
	var_99_float = sqrt(var_100_int);
	var_101_float = 9.999999974752427e-07;
	var_102_bool = var_99_float < var_101_float;
	if(var_102_bool != 0) {
		var_95_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_95_cvector = var_96_cvector / var_99_float;
	return 2;
}


func_3544(var_556_bool)
{
	var_558_int = 0; var_559_string = "";
	func_3296(var_558_int, "ook11Ospina1");
	var_561_bool = var_558_int == (int)0;
	if(var_561_bool != 0) {
		var_556_bool = 1;
		return 0;
	}
	var_556_bool = 0;
	return 0;
}


func_1753(var_0_object, var_515_int, var_516_object)
{
	var_518_object = Obj(); var_519_bool = 0; var_520_int = 0; var_521_bool = 0; var_522_object = Obj(); var_523_bool = 0; var_524_int = 0; var_525_bool = 0;
	var_0_object = var_516_object;
	var_526_bool = 0; var_527_object = Obj(); var_528_float = 0;
	var_516_object = var_527_object;
	func_3002(var_526_bool, var_527_object, (float)70.0);
	var_529_bool = var_526_bool == 0; //@nz
	if(var_529_bool != 0) {
		var_515_int = -2;
		return 8;
	}
	CreateDialog(var_522_object);
	var_530_int = 0;
	func_3342(var_530_int);
	@@var_522_object:SetNPCName(var_530_int);
	var_531_int = 0;
	func_3340(var_531_int);
	@@var_522_object:SetNPCDescription(var_531_int);
	var_532_string = "";
	func_3344(var_532_string);
	@@var_522_object:SetPhoto(var_532_string);
	var_533_string = "";
	func_3346(var_533_string);
	@@var_522_object:SetPhoto2(var_533_string);
	var_534_int = 0;
	func_3752(var_534_int);
	@@var_522_object:SetPlayerName(var_534_int);
	IsOverrideActive(var_523_bool);
	var_535_bool = var_523_bool;
	if(var_535_bool != 0) {
		var_515_int = -2;
		return 8;
	}
	DoDialog(var_522_object);
	var_536_bool = 0; var_537_object = Obj();
	func_3280(Obj());
	var_538_object = var_537_object;
	func_3089(var_536_bool, var_537_object);
	var_539_object = Obj(); var_540_object = Obj();
	var_516_object = var_539_object;
	var_522_object = var_540_object;
	TaskCall(9);
	func_1834(var_541_object, var_542_object, var_543_string, var_544_bool, var_539_object, var_540_object);
	TaskReturn();
	@@var_522_object:IsDialogEnd(var_525_bool);
	
Label_1816:
	var_582_bool = var_525_bool == 0; //@nz
	if(var_582_bool != 0) {
		sync();
		@@var_522_object:IsDialogEnd(var_525_bool);
		goto Label_1816;
	}
	var_516_object = Obj();
	func_3071();
	StopDialog(var_522_object);
	@@var_522_object:GetReturnValue((int)-1);
	var_524_int = var_515_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_730(var_0_object, var_57_int, var_58_object)
{
	var_60_object = Obj(); var_61_bool = 0; var_62_int = 0; var_63_bool = 0; var_64_object = Obj(); var_65_bool = 0; var_66_int = 0; var_67_bool = 0;
	var_0_object = var_58_object;
	var_68_bool = 0; var_69_object = Obj(); var_70_float = 0;
	var_58_object = var_69_object;
	func_3002(var_68_bool, var_69_object, (float)70.0);
	var_115_bool = var_68_bool == 0; //@nz
	if(var_115_bool != 0) {
		var_57_int = -2;
		return 8;
	}
	CreateDialog(var_64_object);
	var_116_int = 0;
	func_3342(var_116_int);
	@@var_64_object:SetNPCName(var_116_int);
	var_117_int = 0;
	func_3340(var_117_int);
	@@var_64_object:SetNPCDescription(var_117_int);
	var_118_string = "";
	func_3344(var_118_string);
	@@var_64_object:SetPhoto(var_118_string);
	var_119_string = "";
	func_3346(var_119_string);
	@@var_64_object:SetPhoto2(var_119_string);
	var_120_int = 0;
	func_3752(var_120_int);
	@@var_64_object:SetPlayerName(var_120_int);
	IsOverrideActive(var_65_bool);
	var_128_bool = var_65_bool;
	if(var_128_bool != 0) {
		var_57_int = -2;
		return 8;
	}
	DoDialog(var_64_object);
	var_129_bool = 0; var_130_object = Obj();
	func_3280(Obj());
	var_131_object = var_130_object;
	func_3089(var_129_bool, var_130_object);
	var_224_object = Obj(); var_225_object = Obj();
	var_58_object = var_224_object;
	var_64_object = var_225_object;
	TaskCall(3);
	func_811(var_226_object, var_227_object, var_228_string, var_229_bool, var_224_object, var_225_object);
	TaskReturn();
	@@var_64_object:IsDialogEnd(var_67_bool);
	
Label_793:
	var_273_bool = var_67_bool == 0; //@nz
	if(var_273_bool != 0) {
		sync();
		@@var_64_object:IsDialogEnd(var_67_bool);
		goto Label_793;
	}
	var_58_object = Obj();
	func_3071();
	StopDialog(var_64_object);
	@@var_64_object:GetReturnValue((int)-1);
	var_66_int = var_57_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2271(var_0_object, var_1_object, var_2_object, var_3_string, var_610_object, var_611_object)
{
	var_0_object = var_611_object;
	var_1_object = var_610_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_617_string = "";
		func_2334(var_611_object, "Neutral");
		@@@var_0_object:SetMessage((int)539297);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)542655, (int)45059, (int)45057);
		@@@var_0_object:AddReply((int)539298, (int)-1, (int)41241);
		@@@var_0_object:AddReply((int)542656, (int)-1, (int)45058);
		goto Label_2304;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x8e3";
	}
Label_2304:
	var_635_bool = 0;
	func_3348(var_635_bool);
	if(var_635_bool != 0) {

	Label_2308:
		lshWaitForAnimEnd();
		var_636_string = var_3_string;
		if(var_636_string != 0) {
		} else {
			var_637_string = "";
			var_637_string = var_2_object;
			func_3227(var_637_string);
			goto Label_2308;
	}
		PlayAnimation("all", "idle");

	Label_2323:
		WaitForAnimEnd();
		var_640_string = var_3_string;
		if(var_640_string != 0) {
			goto Label_2333;
		}
		PlayAnimation("all", "idle");
		goto Label_2323;
	}
	goto Label_2333;
	
Label_2333:
	return 0;
	
}


func_2783()
{
	KillTimer((int)10);
	return 0;
}


func_3296(var_328_int, var_329_string)
{
	var_330_int = 0; var_331_int = 0;
	GetVariable(var_329_string, var_331_int);
	var_331_int = var_328_int;
	return 2;
}


func_3556(var_346_bool)
{
	var_348_int = 0; var_349_string = "";
	func_3296(var_348_int, "ook2Ospina1");
	var_351_bool = var_348_int == (int)0;
	if(var_351_bool != 0) {
		var_346_bool = 1;
		return 0;
	}
	var_346_bool = 0;
	return 0;
}


func_3301(var_184_int)
{
	var_185_float = 0; var_186_float = 0;
	GetGameTime(var_186_float);
	var_188_int = 0;
	var_188_int = var_186_float / (int)24;
	var_184_int = (int)1 + var_188_int;
	return 2;
}


func_997(var_0_object, var_370_int, var_371_object)
{
	var_373_object = Obj(); var_374_bool = 0; var_375_int = 0; var_376_bool = 0; var_377_object = Obj(); var_378_bool = 0; var_379_int = 0; var_380_bool = 0;
	var_0_object = var_371_object;
	var_381_bool = 0; var_382_object = Obj(); var_383_float = 0;
	var_371_object = var_382_object;
	func_3002(var_381_bool, var_382_object, (float)70.0);
	var_384_bool = var_381_bool == 0; //@nz
	if(var_384_bool != 0) {
		var_370_int = -2;
		return 8;
	}
	CreateDialog(var_377_object);
	var_385_int = 0;
	func_3342(var_385_int);
	@@var_377_object:SetNPCName(var_385_int);
	var_386_int = 0;
	func_3340(var_386_int);
	@@var_377_object:SetNPCDescription(var_386_int);
	var_387_string = "";
	func_3344(var_387_string);
	@@var_377_object:SetPhoto(var_387_string);
	var_388_string = "";
	func_3346(var_388_string);
	@@var_377_object:SetPhoto2(var_388_string);
	var_389_int = 0;
	func_3752(var_389_int);
	@@var_377_object:SetPlayerName(var_389_int);
	IsOverrideActive(var_378_bool);
	var_390_bool = var_378_bool;
	if(var_390_bool != 0) {
		var_370_int = -2;
		return 8;
	}
	DoDialog(var_377_object);
	var_391_bool = 0; var_392_object = Obj();
	func_3280(Obj());
	var_393_object = var_392_object;
	func_3089(var_391_bool, var_392_object);
	var_394_object = Obj(); var_395_object = Obj();
	var_371_object = var_394_object;
	var_377_object = var_395_object;
	TaskCall(5);
	func_1078(var_396_object, var_397_object, var_398_string, var_399_bool, var_394_object, var_395_object);
	TaskReturn();
	@@var_377_object:IsDialogEnd(var_380_bool);
	
Label_1060:
	var_444_bool = var_380_bool == 0; //@nz
	if(var_444_bool != 0) {
		sync();
		@@var_377_object:IsDialogEnd(var_380_bool);
		goto Label_1060;
	}
	var_371_object = Obj();
	func_3071();
	StopDialog(var_377_object);
	@@var_377_object:GetReturnValue((int)-1);
	var_379_int = var_370_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3310(var_283_bool, var_284_int)
{
	var_285_int = 0;
	func_3301(var_285_int);
	var_283_bool = var_285_int == var_284_int;
	return 0;
}


func_3568()
{
	var_122_object = Obj(); var_123_object = Obj();
	CreateDiaryEntry(var_123_object, (int)498, (int)1, (int)528065);
	var_127_bool = 0; var_128_object = Obj(); var_129_int = 0;
	var_123_object = var_128_object;
	func_3724(var_127_bool, var_128_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3316(var_61_string, var_62_int)
{
	var_63_string = ""; var_64_string = "";
	var_65_int = var_62_int;
	if(var_65_int != 0) {
		"idle" = "idle" + var_62_int;
	}
	var_64_string = var_61_string;
	return 2;
}


func_3323(var_55_int)
{
	var_56_int = 0; var_57_bool = 0; var_58_int = 0; var_59_bool = 0;
	var_58_int = 0;
	
Label_3325:
	var_61_string = ""; var_62_int = 0;
	var_58_int = var_62_int;
	func_3316(var_61_string, var_62_int);
	HasAnimation(var_59_bool, "all", var_61_string);
	var_66_bool = var_59_bool == 0; //@nz
	if(var_66_bool != 0) {
	} else {
		var_58_int = var_58_int + (int)1;
		goto Label_3325;
	}
	var_58_int = var_55_int;
	return 4;
	
}


func_3581()
{
	var_112_object = Obj(); var_113_object = Obj();
	CreateDiaryEntry(var_113_object, (int)497, (int)1, (int)528064);
	var_117_bool = 0; var_118_object = Obj(); var_119_int = 0;
	var_113_object = var_118_object;
	func_3724(var_117_bool, var_118_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3071()
{
	var_275_bool = 0; var_276_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_278_bool = 0;
	func_3348(var_278_bool);
	if(var_278_bool != 0) {
	} else {
		HasAnimationTrack(var_276_bool, "head");
		var_280_bool = var_276_bool;
		if(var_280_bool == 0) goto Label_3088;
		UnlookAsync("head");
	}
Label_3088:
	return 2;
	
}


