// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,Trigger/2,GetGameTime/1,HasAnimation/3,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Fear|W:Sympathy|W:Confusion|W:Tiredness|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ui/NPC_Lara.png|W:ui/NPC_Lara_b.png|W:b4q01|W:b4q01LaraGotoRubin|W:pt_map_warehouse_gangster|A:AddMark|W:quest_b4_01|W:place_rubin|W:b4q01LaraWasBadRep|W:oob4Lara1|W:oob8Lara1|A:ShowMap|W:b8q02|W:reputation|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:,1:bool:,2:bool:
// @RUN_OP: 0x780
// @RUN_TASK: 12
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa1 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1a3 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x448 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x58d vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x658 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x756 vars=int,int
// @TASK_12: vars=cvector params=0
// @EVENT_7: op=0x7cc vars=int
// @EVENT_6: op=0x7f2 vars=
// @EVENT_5: op=0x801 vars=
// @EVENT_45: op=0x80e vars=bool
// @EVENT_0: op=0x81a vars=object
// @PE: 0x51,0x8b,0xa1,0x11c,0x18d,0x1a3,0x3ea,0x432,0x448,0x542,0x577,0x58d,0x603,0x642,0x658,0x706,0x740,0x756,0x7cc,0x7f2,0x80e,0x9e8,0xa2c,0xa32,0xa38,0xa3e,0xa4e,0xa5a,0xa66,0xa70,0xa7c,0xa88,0xb14

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2482();
		var_36_bool = var_31_bool == (int)19154;
		if(var_36_bool != 0) {
			var_37_string = "";
			func_139(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518021);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518022, (int)-1, (int)19155);
			@@@var_0_object:AddReply((int)531564, (int)-1, (int)32923);
			return 0;
		}
		var_3_string = true;
		var_61_bool = 0;
		func_2574(var_61_bool);
		if(var_61_bool != 0) {
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
		func_2482();
		var_36_bool = var_32_cvector == (int)19663;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_2576();
			var_86_object = Obj(); var_87_object = Obj();
			var_86_object = var_1_object;
			var_87_object = var_0_object;
			func_2622(var_87_object);
		}
		var_113_bool = var_32_cvector == (int)20148;
		if(var_113_bool != 0) {
			var_114_object = Obj(); var_115_object = Obj();
			var_114_object = var_1_object;
			var_115_object = var_0_object;
			func_2610();
		}
		var_119_bool = var_31_bool == (int)19658;
		if(var_119_bool != 0) {
			var_120_bool = 0; var_121_object = Obj();
			var_121_object = var_1_object;
			func_2662(var_120_bool, var_121_object);
			var_128_bool = var_120_bool == 0; //@nz
			if(var_128_bool != 0) {
				var_129_object = Obj(); var_130_object = Obj();
				var_129_object = var_1_object;
				var_130_object = var_0_object;
				func_2604();
				var_133_string = "";
				func_397(var_32_cvector, "Fear");
				@@@var_0_object:SetMessage((int)518548);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)518549, (int)20132, (int)19659);
				@@@var_0_object:AddReply((int)519021, (int)20141, (int)20140);
				return 0;
			}
			var_157_string = "";
			func_397(var_32_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)518550);
			@@@var_0_object:ClearReplies();
			var_159_bool = 0; var_160_object = Obj();
			var_160_object = var_1_object;
			func_2672(var_160_object);
			if(var_159_bool != 0) {
				@@@var_0_object:AddReply((int)518551, (int)20163, (int)19661);
			}
			var_170_bool = 0;
			var_170_bool = 0;
			var_171_bool = 0; var_172_object = Obj();
			var_172_object = var_1_object;
			func_2684(var_172_object);
			if(var_171_bool != 0) {
				var_177_bool = 0; var_178_object = Obj();
				var_178_object = var_1_object;
				func_2696(var_178_object);
				if(var_177_bool != 0) {
					var_170_bool = 1;
				}
			}
			if(var_170_bool != 0) {
				@@@var_0_object:AddReply((int)519028, (int)20149, (int)20148);
			}
			@@@var_0_object:AddReply((int)518554, (int)-1, (int)19664);
			return 0;
		}
		var_190_bool = var_31_bool == (int)20149;
		if(var_190_bool != 0) {
			var_191_string = "";
			func_397(var_32_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)519029);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519030, (int)20152, (int)20150);
			@@@var_0_object:AddReply((int)519031, (int)-1, (int)20151);
			return 0;
		}
		var_200_bool = var_31_bool == (int)20152;
		if(var_200_bool != 0) {
			var_201_string = "";
			func_397(var_32_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)519032);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519033, (int)20154, (int)20153);
			@@@var_0_object:AddReply((int)519035, (int)20154, (int)20155);
			return 0;
		}
		var_210_bool = var_31_bool == (int)20154;
		if(var_210_bool != 0) {
			var_211_string = "";
			func_397(var_32_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)519034);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519036, (int)20157, (int)20156);
			@@@var_0_object:AddReply((int)519039, (int)20157, (int)20160);
			return 0;
		}
		var_220_bool = var_31_bool == (int)20157;
		if(var_220_bool != 0) {
			var_221_string = "";
			func_397(var_32_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)519037);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519038, (int)-1, (int)20158);
			@@@var_0_object:AddReply((int)519040, (int)-1, (int)20162);
			return 0;
		}
		var_230_bool = var_31_bool == (int)20163;
		if(var_230_bool != 0) {
			var_231_string = "";
			func_397(var_32_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)519041);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519042, (int)20165, (int)20164);
			@@@var_0_object:AddReply((int)519059, (int)20180, (int)20183);
			return 0;
		}
		var_240_bool = var_31_bool == (int)20165;
		if(var_240_bool != 0) {
			var_241_string = "";
			func_397(var_32_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)519043);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519044, (int)20167, (int)20166);
			@@@var_0_object:AddReply((int)519046, (int)20169, (int)20168);
			return 0;
		}
		var_250_bool = var_31_bool == (int)20169;
		if(var_250_bool != 0) {
			var_251_string = "";
			func_397(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519047);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519048, (int)20167, (int)20170);
			return 0;
		}
		var_257_bool = var_31_bool == (int)20167;
		if(var_257_bool != 0) {
			var_258_string = "";
			func_397(var_32_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)519045);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519049, (int)20177, (int)20172);
			@@@var_0_object:AddReply((int)519050, (int)20174, (int)20173);
			return 0;
		}
		var_267_bool = var_31_bool == (int)20174;
		if(var_267_bool != 0) {
			var_268_string = "";
			func_397(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)519051);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519052, (int)-1, (int)20175);
			@@@var_0_object:AddReply((int)519053, (int)20177, (int)20176);
			return 0;
		}
		var_277_bool = var_31_bool == (int)20177;
		if(var_277_bool != 0) {
			var_278_string = "";
			func_397(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519054);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519055, (int)19662, (int)20178);
			@@@var_0_object:AddReply((int)519056, (int)20180, (int)20179);
			return 0;
		}
		var_287_bool = var_31_bool == (int)20180;
		if(var_287_bool != 0) {
			var_288_string = "";
			func_397(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519057);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519058, (int)-1, (int)20181);
			return 0;
		}
		var_294_bool = var_31_bool == (int)19662;
		if(var_294_bool != 0) {
			var_295_string = "";
			func_397(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518552);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518553, (int)-1, (int)19663);
			return 0;
		}
		var_301_bool = var_31_bool == (int)20141;
		if(var_301_bool != 0) {
			var_302_string = "";
			func_397(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)519022);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519023, (int)20138, (int)20142);
			return 0;
		}
		var_308_bool = var_31_bool == (int)20132;
		if(var_308_bool != 0) {
			var_309_string = "";
			func_397(var_32_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)519014);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519015, (int)20138, (int)20133);
			@@@var_0_object:AddReply((int)519016, (int)20135, (int)20134);
			return 0;
		}
		var_318_bool = var_31_bool == (int)20135;
		if(var_318_bool != 0) {
			var_319_string = "";
			func_397(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)519017);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519019, (int)20138, (int)20137);
			@@@var_0_object:AddReply((int)519018, (int)-1, (int)20136);
			return 0;
		}
		var_328_bool = var_31_bool == (int)20138;
		if(var_328_bool != 0) {
			var_329_string = "";
			func_397(var_32_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)519020);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519024, (int)20145, (int)20144);
			return 0;
		}
		var_335_bool = var_31_bool == (int)20145;
		if(var_335_bool != 0) {
			var_336_string = "";
			func_397(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519025);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527912, (int)29261, (int)29260);
			return 0;
		}
		var_342_bool = var_31_bool == (int)29261;
		if(var_342_bool != 0) {
			var_343_string = "";
			func_397(var_32_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)527913);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519026, (int)-1, (int)20146);
			@@@var_0_object:AddReply((int)519027, (int)-1, (int)20147);
			return 0;
		}
		var_3_string = true;
		var_351_bool = 0;
		func_2574(var_351_bool);
		if(var_351_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1a4";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2482();
		var_36_bool = var_32_cvector == (int)22652;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_2616();
		}
		var_42_bool = var_31_bool == (int)22651;
		if(var_42_bool != 0) {
			var_43_string = "";
			func_1074(var_32_cvector, "Fear");
			@@@var_0_object:SetMessage((int)521486);
			@@@var_0_object:ClearReplies();
			var_61_bool = 0;
			var_61_bool = 0;
			var_62_bool = 0; var_63_object = Obj();
			var_63_object = var_1_object;
			func_2650(var_63_object);
			if(var_62_bool != 0) {
				var_70_bool = 0; var_71_object = Obj();
				var_71_object = var_1_object;
				func_2638(var_71_object);
				if(var_70_bool != 0) {
					var_61_bool = 1;
				}
			}
			if(var_61_bool != 0) {
				@@@var_0_object:AddReply((int)521487, (int)22653, (int)22652);
			}
			@@@var_0_object:AddReply((int)521490, (int)-1, (int)22655);
			return 0;
		}
		var_83_bool = var_31_bool == (int)22653;
		if(var_83_bool != 0) {
			var_84_string = "";
			func_1074(var_32_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)521488);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521489, (int)25167, (int)22654);
			@@@var_0_object:AddReply((int)523891, (int)25171, (int)25170);
			return 0;
		}
		var_93_bool = var_31_bool == (int)25171;
		if(var_93_bool != 0) {
			var_94_string = "";
			func_1074(var_32_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)523892);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523893, (int)25173, (int)25172);
			return 0;
		}
		var_100_bool = var_31_bool == (int)25167;
		if(var_100_bool != 0) {
			var_101_string = "";
			func_1074(var_32_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)523888);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523889, (int)25173, (int)25168);
			@@@var_0_object:AddReply((int)523890, (int)-1, (int)25169);
			return 0;
		}
		var_110_bool = var_31_bool == (int)25173;
		if(var_110_bool != 0) {
			var_111_string = "";
			func_1074(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523894);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523895, (int)25176, (int)25175);
			@@@var_0_object:AddReply((int)523898, (int)-1, (int)25178);
			return 0;
		}
		var_120_bool = var_31_bool == (int)25176;
		if(var_120_bool != 0) {
			var_121_string = "";
			func_1074(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523896);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523897, (int)-1, (int)25177);
			return 0;
		}
		var_3_string = true;
		var_126_bool = 0;
		func_2574(var_126_bool);
		if(var_126_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x449";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2482();
		var_36_bool = var_31_bool == (int)23816;
		if(var_36_bool != 0) {
			var_37_string = "";
			func_1399(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522629);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522630, (int)-1, (int)23817);
			return 0;
		}
		var_3_string = true;
		var_58_bool = 0;
		func_2574(var_58_bool);
		if(var_58_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x58e";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2482();
		var_36_bool = var_31_bool == (int)36971;
		if(var_36_bool != 0) {
			var_37_string = "";
			func_1602(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535294);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535295, (int)36973, (int)36972);
			@@@var_0_object:AddReply((int)535302, (int)-1, (int)36980);
			@@@var_0_object:AddReply((int)535303, (int)-1, (int)36981);
			return 0;
		}
		var_65_bool = var_31_bool == (int)36973;
		if(var_65_bool != 0) {
			var_66_string = "";
			func_1602(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535296);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535297, (int)36975, (int)36974);
			@@@var_0_object:AddReply((int)535301, (int)36975, (int)36978);
			return 0;
		}
		var_75_bool = var_31_bool == (int)36975;
		if(var_75_bool != 0) {
			var_76_string = "";
			func_1602(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535298);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535299, (int)-1, (int)36976);
			@@@var_0_object:AddReply((int)535300, (int)-1, (int)36977);
			return 0;
		}
		var_3_string = true;
		var_84_bool = 0;
		func_2574(var_84_bool);
		if(var_84_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x659";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_cvector)
{
	if((int)1 != 0) {
		func_2482();
		var_36_bool = var_31_int == (int)42560;
		if(var_36_bool != 0) {
			var_37_string = "";
			func_1856(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540551);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540552, (int)-1, (int)42561);
			@@@var_0_object:AddReply((int)540795, (int)-1, (int)42844);
			return 0;
		}
		var_3_string = true;
		var_61_bool = 0;
		func_2574(var_61_bool);
		if(var_61_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x757";
	
}


task_12_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_int)
{
	var_33_bool = var_31_int == (int)10;
	if(var_33_bool != 0) {
		func_1992();
		var_35_bool = 0;
		var_35_bool = 0;
		var_36_bool = 0;
		func_2206(var_36_bool);
		if(var_36_bool != 0) {
			var_39_bool = 0;
			func_1961(var_39_bool);
			if(var_39_bool != 0) {
				var_35_bool = 1;
			}
		}
		if(var_35_bool != 0) {
			var_56_bool = 0;
			func_1941(var_56_bool);
			if(var_56_bool != 0) {
				var_75_bool = 0; var_76_object = Obj();
				func_2489(Obj());
				var_77_object = var_76_object;
				func_2356(var_75_bool, var_76_object);
			}
		} else {
			func_1956(var_31_int);
			func_1983();
		}
	}
	return 0;
	
}


task_12_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_2174();
	func_1992();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_12_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	StopGroup0();
	func_1992();
	var_32_string = "";
	func_2436("Neutral");
	func_1983();
	return 0;
}


task_12_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_bool)
{
	var_32_bool = var_31_bool;
	if(var_32_bool != 0) {
		func_1983();
	} else {
		var_38_string = "";
		func_2436("Neutral");
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
		func_2174();
		var_35_bool = 0; var_36_object = Obj();
		var_31_object = var_36_object;
		func_2197(var_35_bool, var_36_object);
		EventEnable(0);
		var_49_object = Obj();
		var_31_object = var_49_object;
		func_2836(var_49_object);
		var_629_string = "";
		func_2436("Neutral");
		func_1992();
		func_1983();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	var_31_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_1927(var_30_cvector);
	return 0;
}


func_0(var_0_object, var_52_int, var_53_object)
{
	var_55_object = Obj(); var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_object = Obj(); var_60_bool = 0; var_61_int = 0; var_62_bool = 0;
	var_0_object = var_53_object;
	var_63_bool = 0; var_64_object = Obj(); var_65_float = 0;
	var_53_object = var_64_object;
	func_2211(var_63_bool, var_64_object, (float)70.0);
	var_110_bool = var_63_bool == 0; //@nz
	if(var_110_bool != 0) {
		var_52_int = -2;
		return 8;
	}
	CreateDialog(var_59_object);
	var_111_int = 0;
	func_2568(var_111_int);
	@@var_59_object:SetNPCName(var_111_int);
	var_112_int = 0;
	func_2566(var_112_int);
	@@var_59_object:SetNPCDescription(var_112_int);
	var_113_string = "";
	func_2570(var_113_string);
	@@var_59_object:SetPhoto(var_113_string);
	var_114_string = "";
	func_2572(var_114_string);
	@@var_59_object:SetPhoto2(var_114_string);
	var_115_int = 0;
	func_2819(var_115_int);
	@@var_59_object:SetPlayerName(var_115_int);
	IsOverrideActive(var_60_bool);
	var_123_bool = var_60_bool;
	if(var_123_bool != 0) {
		var_52_int = -2;
		return 8;
	}
	DoDialog(var_59_object);
	var_124_bool = 0; var_125_object = Obj();
	func_2489(Obj());
	var_126_object = var_125_object;
	func_2298(var_124_bool, var_125_object);
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
	func_2280();
	StopDialog(var_59_object);
	@@var_59_object:GetReturnValue((int)-1);
	var_61_int = var_52_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1539(var_0_object, var_1_object, var_2_object, var_3_string, var_537_object, var_538_object)
{
	var_0_object = var_538_object;
	var_1_object = var_537_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_544_string = "";
		func_1602(var_538_object, "Neutral");
		@@@var_0_object:SetMessage((int)535294);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535295, (int)36973, (int)36972);
		@@@var_0_object:AddReply((int)535302, (int)-1, (int)36980);
		@@@var_0_object:AddReply((int)535303, (int)-1, (int)36981);
		goto Label_1572;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x607";
	}
Label_1572:
	var_562_bool = 0;
	func_2574(var_562_bool);
	if(var_562_bool != 0) {

	Label_1576:
		lshWaitForAnimEnd();
		var_563_string = var_3_string;
		if(var_563_string != 0) {
		} else {
			var_564_string = "";
			var_564_string = var_2_object;
			func_2436(var_564_string);
			goto Label_1576;
	}
		PlayAnimation("all", "idle");

	Label_1591:
		WaitForAnimEnd();
		var_567_string = var_3_string;
		if(var_567_string != 0) {
			goto Label_1601;
		}
		PlayAnimation("all", "idle");
		goto Label_1591;
	}
	goto Label_1601;
	
Label_1601:
	return 0;
	
}


func_2819(var_115_int)
{
	var_116_int = 0; var_117_int = 0;
	GetVariable("branch", var_117_int);
	var_120_bool = var_117_int == (int)0;
	if(var_120_bool != 0) {
		var_115_int = 1;
		return 2;
	EMIT "GOTO 0xb12";
	}
	var_122_bool = var_117_int == (int)1;
	if(var_122_bool != 0) {
		var_115_int = 2;
		return 2;
	}
	var_115_int = 3;
	return 2;
}


func_2566(var_112_int)
{
	var_112_int = 515541;
	return 0;
}


func_1798(var_0_object, var_1_object, var_2_object, var_3_string, var_597_object, var_598_object)
{
	var_0_object = var_598_object;
	var_1_object = var_597_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_604_string = "";
		func_1856(var_598_object, "Neutral");
		@@@var_0_object:SetMessage((int)540551);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540552, (int)-1, (int)42561);
		@@@var_0_object:AddReply((int)540795, (int)-1, (int)42844);
		goto Label_1826;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x70a";
	}
Label_1826:
	var_619_bool = 0;
	func_2574(var_619_bool);
	if(var_619_bool != 0) {

	Label_1830:
		lshWaitForAnimEnd();
		var_620_string = var_3_string;
		if(var_620_string != 0) {
		} else {
			var_621_string = "";
			var_621_string = var_2_object;
			func_2436(var_621_string);
			goto Label_1830;
	}
		PlayAnimation("all", "idle");

	Label_1845:
		WaitForAnimEnd();
		var_624_string = var_3_string;
		if(var_624_string != 0) {
			goto Label_1855;
		}
		PlayAnimation("all", "idle");
		goto Label_1845;
	}
	goto Label_1855;
	
Label_1855:
	return 0;
	
}


func_2568(var_111_int)
{
	var_111_int = 502866;
	return 0;
}


func_2570(var_113_string)
{
	var_113_string = "ui/NPC_Lara.png";
	return 0;
}


func_2572(var_114_string)
{
	var_114_string = "ui/NPC_Lara_b.png";
	return 0;
}


func_2574(var_106_bool)
{
	var_106_bool = 1;
	return 0;
}


func_2576()
{
	var_39_object = Obj(); var_40_object = Obj();
	SetVariable("b4q01", (int)2);
	func_2769(Obj());
	var_43_object = var_40_object;
	var_54_float = 0;
	func_2522(var_54_float);
	@@var_40_object:AddMark("b4q01LaraGotoRubin", "pt_map_warehouse_gangster", (int)1, (int)518593, var_54_float);
	func_2715();
	var_80_bool = 0; var_81_string = ""; var_82_string = "";
	func_2510(var_80_bool, "quest_b4_01", "place_rubin");
	return 2;
}
EMIT "Stack[-1] = 0";


func_2836(var_49_object)
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
	func_2536(var_278_bool, (int)4);
	if(var_278_bool != 0) {
		var_281_int = 0; var_282_object = Obj();
		var_49_object = var_282_object;
		TaskCall(2);
		func_203(var_283_object, var_281_int, var_282_object);
		TaskReturn();
		return 0;
	}
	var_382_bool = 0; var_383_int = 0;
	func_2536(var_382_bool, (int)8);
	if(var_382_bool != 0) {
		var_384_int = 0; var_385_object = Obj();
		var_49_object = var_385_object;
		TaskCall(4);
		func_921(var_386_object, var_384_int, var_385_object);
		TaskReturn();
		return 0;
	}
	var_453_bool = 0; var_454_int = 0;
	func_2536(var_453_bool, (int)10);
	if(var_453_bool != 0) {
		var_455_int = 0; var_456_object = Obj();
		var_49_object = var_456_object;
		TaskCall(6);
		func_1265(var_457_object, var_455_int, var_456_object);
		TaskReturn();
		return 0;
	}
	var_508_bool = 0;
	var_508_bool = 0;
	var_509_bool = 0; var_510_int = 0;
	func_2536(var_509_bool, (int)12);
	if(var_509_bool != 0) {
		var_511_bool = GlobalVars[2];
		var_512_bool = var_511_bool == 0; //@nz
		if(var_512_bool != 0) {
			var_508_bool = 1;
		}
	}
	if(var_508_bool != 0) {
		var_513_int = 0; var_514_object = Obj();
		var_49_object = var_514_object;
		TaskCall(8);
		func_1458(var_515_object, var_513_int, var_514_object);
		TaskReturn();
		var_572_bool = GlobalVars[2];
		GlobalVars[2] = (bool)1;
		return 0;
	}
	var_573_int = 0; var_574_object = Obj();
	var_49_object = var_574_object;
	TaskCall(10);
	func_1717(var_575_object, var_573_int, var_574_object);
	TaskReturn();
	return 0;
}


func_284(var_0_object, var_1_object, var_2_object, var_3_string, var_305_object, var_306_object)
{
	var_0_object = var_306_object;
	var_1_object = var_305_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_312_bool = 0; var_313_object = Obj();
		var_313_object = var_1_object;
		func_2662(var_312_bool, var_313_object);
		var_320_bool = var_312_bool == 0; //@nz
		if(var_320_bool != 0) {
			var_321_object = Obj(); var_322_object = Obj();
			var_321_object = var_1_object;
			var_322_object = var_0_object;
			func_2604();
			var_325_string = "";
			func_397(var_306_object, "Fear");
			@@@var_0_object:SetMessage((int)518548);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518549, (int)20132, (int)19659);
			@@@var_0_object:AddReply((int)519021, (int)20141, (int)20140);
		} else {
				var_348_string = "";
				func_397(var_306_object, "Sympathy");
				@@@var_0_object:SetMessage((int)518550);
				@@@var_0_object:ClearReplies();
				var_350_bool = 0; var_351_object = Obj();
				var_351_object = var_1_object;
				func_2672(var_351_object);
				if(var_350_bool != 0) {
					@@@var_0_object:AddReply((int)518551, (int)20163, (int)19661);
				}
				var_361_bool = 0;
				var_361_bool = 0;
				var_362_bool = 0; var_363_object = Obj();
				var_363_object = var_1_object;
				func_2684(var_363_object);
				if(var_362_bool != 0) {
					var_368_bool = 0; var_369_object = Obj();
					var_369_object = var_1_object;
					func_2696(var_369_object);
					if(var_368_bool != 0) {
						var_361_bool = 1;
					}
				}
				if(var_361_bool != 0) {
					@@@var_0_object:AddReply((int)519028, (int)20149, (int)20148);
				}
				@@@var_0_object:AddReply((int)518554, (int)-1, (int)19664);
				goto Label_367;
		}
	}
Label_367:
	var_340_bool = 0;
	func_2574(var_340_bool);
	if(var_340_bool != 0) {

	Label_371:
		lshWaitForAnimEnd();
		var_341_string = var_3_string;
		if(var_341_string != 0) {
		} else {
			var_342_string = "";
			var_342_string = var_2_object;
			func_2436(var_342_string);
			goto Label_371;
	}
		PlayAnimation("all", "idle");

	Label_386:
		WaitForAnimEnd();
		var_345_string = var_3_string;
		if(var_345_string != 0) {
			goto Label_396;
		}
		PlayAnimation("all", "idle");
		goto Label_386;

	}
	goto Label_396;
	
Label_396:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x120";


func_2604()
{
	SetVariable("b4q01LaraWasBadRep", (int)1);
	return 0;
}


func_2610()
{
	SetVariable("oob4Lara1", (int)1);
	return 0;
}


func_1074(var_2_object, var_415_string)
{
	var_416_bool = 0;
	func_2574(var_416_bool);
	var_417_bool = var_416_bool == 0; //@nz
	if(var_417_bool != 0) {
		return 0;
	}
	var_418_bool = var_415_string == var_2_object;
	if(var_418_bool != 0) {
		return 0;
	}
	var_419_string = ""; var_420_bool = 0;
	var_415_string = var_419_string;
	var_422_bool = var_415_string == "";
	if(var_422_bool != 0) {
		var_420_bool = 0;
	} else {
		var_420_bool = 1;
	}
	func_2452(var_419_string, var_420_bool);
	var_2_object = var_415_string;
	return 0;
	
}


func_2356(var_135_bool, var_136_object)
{
	var_137_string = ""; var_138_int = 0; var_139_bool = 0; var_140_int = 0; var_141_string = ""; var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = "";
	var_142_string = "c";
	var_143_int = 0;
	
Label_2359:
	if((int)1 != 0) {
		var_149_int = var_143_int + (int)1;
		var_150_int = var_142_string + var_149_int;
		@@var_136_object:HasProperty(var_150_int, var_144_bool);
		var_151_bool = var_144_bool == 0; //@nz
		if(var_151_bool != 0) {
		} else {
			var_143_int = var_143_int + (int)1;
			goto Label_2359;
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
	func_2467(var_158_bool, var_159_string);
	var_158_bool = var_135_bool;
	return 10;
	
}


func_2103()
{
	var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_int = 0; var_47_bool = 0;
	WaitForAnimEnd();
	var_48_bool = 0;
	func_2206(var_48_bool);
	var_49_bool = var_48_bool == 0; //@nz
	if(var_49_bool != 0) {
		return 12;
	}
	func_2549((int)0);
	var_50_int = var_42_int;
	var_43_int = 0;
	
Label_2117:
	var_63_bool = 0;
	var_63_bool = 0;
	var_65_bool = var_43_int < (int)5;
	if(var_65_bool != 0) {
		var_66_bool = 0;
		func_2206(var_66_bool);
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
				func_2542(var_77_string, var_78_int);
				PlayAnimation("all", var_77_string);
				WaitForAnimEnd(var_47_bool);
				var_79_bool = var_47_bool == 0; //@nz
				if(var_79_bool == 0) goto Label_2158;
				goto Label_2169;
		}
		Label_2158:
			var_70_bool = 0;
			func_2172(var_70_bool);
			var_71_bool = var_70_bool == 0; //@nz
			if(var_71_bool != 0) {
				goto Label_2169;
			}
			ResetAAS();
			var_43_int = var_43_int + (int)1;
			goto Label_2117;

		}
	}
Label_2169:
	ResetAAS();
	return 12;
	
}


func_2616()
{
	SetVariable("oob8Lara1", (int)1);
	return 0;
}


func_2622(var_87_object)
{
	var_88_object = Obj(); var_89_string = ""; var_90_float = 0;
	func_2769(Obj());
	var_91_object = var_88_object;
	func_2786(var_88_object, "pt_map_warehouse_gangster", (float)2);
	var_111_object = Obj();
	func_2769(var_111_object);
	@@var_87_object:ShowMap(var_111_object);
	return 0;
}


func_1856(var_2_object, var_604_string)
{
	var_605_bool = 0;
	func_2574(var_605_bool);
	var_606_bool = var_605_bool == 0; //@nz
	if(var_606_bool != 0) {
		return 0;
	}
	var_607_bool = var_604_string == var_2_object;
	if(var_607_bool != 0) {
		return 0;
	}
	var_608_string = ""; var_609_bool = 0;
	var_604_string = var_608_string;
	var_611_bool = var_604_string == "";
	if(var_611_bool != 0) {
		var_609_bool = 0;
	} else {
		var_609_bool = 1;
	}
	func_2452(var_608_string, var_609_bool);
	var_2_object = var_604_string;
	return 0;
	
}


func_1346(var_0_object, var_1_object, var_2_object, var_3_string, var_479_object, var_480_object)
{
	var_0_object = var_480_object;
	var_1_object = var_479_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_486_string = "";
		func_1399(var_480_object, "Neutral");
		@@@var_0_object:SetMessage((int)522629);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)522630, (int)-1, (int)23817);
		goto Label_1369;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x546";
	}
Label_1369:
	var_498_bool = 0;
	func_2574(var_498_bool);
	if(var_498_bool != 0) {

	Label_1373:
		lshWaitForAnimEnd();
		var_499_string = var_3_string;
		if(var_499_string != 0) {
		} else {
			var_500_string = "";
			var_500_string = var_2_object;
			func_2436(var_500_string);
			goto Label_1373;
	}
		PlayAnimation("all", "idle");

	Label_1388:
		WaitForAnimEnd();
		var_503_string = var_3_string;
		if(var_503_string != 0) {
			goto Label_1398;
		}
		PlayAnimation("all", "idle");
		goto Label_1388;
	}
	goto Label_1398;
	
Label_1398:
	return 0;
	
}


func_1602(var_2_object, var_544_string)
{
	var_545_bool = 0;
	func_2574(var_545_bool);
	var_546_bool = var_545_bool == 0; //@nz
	if(var_546_bool != 0) {
		return 0;
	}
	var_547_bool = var_544_string == var_2_object;
	if(var_547_bool != 0) {
		return 0;
	}
	var_548_string = ""; var_549_bool = 0;
	var_544_string = var_548_string;
	var_551_bool = var_544_string == "";
	if(var_551_bool != 0) {
		var_549_bool = 0;
	} else {
		var_549_bool = 1;
	}
	func_2452(var_548_string, var_549_bool);
	var_2_object = var_544_string;
	return 0;
	
}


func_2638(var_431_bool)
{
	var_433_int = 0; var_434_string = "";
	func_2505(var_433_int, "b8q02");
	var_436_bool = var_433_int == (int)1;
	if(var_436_bool != 0) {
		var_431_bool = 1;
		return 0;
	}
	var_431_bool = 0;
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_219_object, var_220_object)
{
	var_0_object = var_220_object;
	var_1_object = var_219_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_226_string = "";
		func_139(var_220_object, "Neutral");
		@@@var_0_object:SetMessage((int)518021);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)518022, (int)-1, (int)19155);
		@@@var_0_object:AddReply((int)531564, (int)-1, (int)32923);
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	var_250_bool = 0;
	func_2574(var_250_bool);
	if(var_250_bool != 0) {

	Label_113:
		lshWaitForAnimEnd();
		var_251_string = var_3_string;
		if(var_251_string != 0) {
		} else {
			var_252_string = "";
			var_252_string = var_2_object;
			func_2436(var_252_string);
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


func_2393(var_166_bool, var_167_object)
{
	var_168_string = ""; var_169_int = 0; var_170_bool = 0; var_171_int = 0; var_172_string = ""; var_173_string = ""; var_174_int = 0; var_175_bool = 0; var_176_int = 0; var_177_string = "";
	var_179_int = 0;
	func_2527(var_179_int);
	var_185_int = "d" + var_179_int;
	var_173_string = var_185_int + "m";
	var_174_int = 0;
	
Label_2402:
	if((int)1 != 0) {
		var_189_int = var_174_int + (int)1;
		var_190_int = var_173_string + var_189_int;
		@@var_167_object:HasProperty(var_190_int, var_175_bool);
		var_191_bool = var_175_bool == 0; //@nz
		if(var_191_bool != 0) {
		} else {
			var_174_int = var_174_int + (int)1;
			goto Label_2402;
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
	func_2467(var_198_bool, var_199_string);
	var_198_bool = var_166_bool;
	return 10;
	
}


func_2650(var_425_bool)
{
	var_427_int = 0; var_428_string = "";
	func_2505(var_427_int, "oob8Lara1");
	var_430_bool = var_427_int == (int)0;
	if(var_430_bool != 0) {
		var_425_bool = 1;
		return 0;
	}
	var_425_bool = 0;
	return 0;
}


func_2662(var_312_bool, var_313_object)
{
	var_314_bool = 0; var_315_object = Obj();
	var_313_object = var_315_object;
	func_2708(var_314_bool, var_315_object);
	if(var_314_bool != 0) {
		var_312_bool = 1;
		return 0;
	}
	var_312_bool = 0;
	return 0;
}


func_2672(var_350_bool)
{
	var_352_int = 0; var_353_string = "";
	func_2505(var_352_int, "b4q01");
	var_357_bool = var_352_int == (int)1;
	if(var_357_bool != 0) {
		var_350_bool = 1;
		return 0;
	}
	var_350_bool = 0;
	return 0;
}


func_1399(var_2_object, var_486_string)
{
	var_487_bool = 0;
	func_2574(var_487_bool);
	var_488_bool = var_487_bool == 0; //@nz
	if(var_488_bool != 0) {
		return 0;
	}
	var_489_bool = var_486_string == var_2_object;
	if(var_489_bool != 0) {
		return 0;
	}
	var_490_string = ""; var_491_bool = 0;
	var_486_string = var_490_string;
	var_493_bool = var_486_string == "";
	if(var_493_bool != 0) {
		var_491_bool = 0;
	} else {
		var_491_bool = 1;
	}
	func_2452(var_490_string, var_491_bool);
	var_2_object = var_486_string;
	return 0;
	
}


func_2684(var_362_bool)
{
	var_364_int = 0; var_365_string = "";
	func_2505(var_364_int, "b4q01LaraWasBadRep");
	var_367_bool = var_364_int == (int)1;
	if(var_367_bool != 0) {
		var_362_bool = 1;
		return 0;
	}
	var_362_bool = 0;
	return 0;
}


func_2172(var_70_bool)
{
	var_70_bool = 1;
	return 0;
}


func_2174()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_2179(var_46_float, var_47_object)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	GetPosition(var_51_cvector);
	@@var_47_object:GetPosition(var_52_cvector);
	var_53_cvector = var_52_cvector - var_51_cvector;
	var_46_float = var_53_cvector | var_53_cvector;
	return 6;
}


func_2436(var_252_string)
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


func_1927(var_0_object)
{
	var_32_bool = 0;
	func_2206(var_32_bool);
	var_35_bool = var_32_bool == 0; //@nz
	if(var_35_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_1936:
	func_2103();
	goto Label_1936;
}
EMIT "Return(); Pop(0)";


func_2696(var_368_bool)
{
	var_370_int = 0; var_371_string = "";
	func_2505(var_370_int, "oob4Lara1");
	var_373_bool = var_370_int == (int)0;
	if(var_373_bool != 0) {
		var_368_bool = 1;
		return 0;
	}
	var_368_bool = 0;
	return 0;
}


func_139(var_2_object, var_226_string)
{
	var_227_bool = 0;
	func_2574(var_227_bool);
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
	func_2452(var_230_string, var_231_bool);
	var_2_object = var_226_string;
	return 0;
	
}


func_2187(var_39_bool, var_40_cvector)
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


func_397(var_2_object, var_325_string)
{
	var_326_bool = 0;
	func_2574(var_326_bool);
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
	func_2452(var_329_string, var_330_bool);
	var_2_object = var_325_string;
	return 0;
	
}


func_2452(var_230_string, var_231_bool)
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


func_2197(var_35_bool, var_36_object)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0);
	@@var_36_object:GetPosition(var_38_cvector);
	var_39_bool = 0; var_40_cvector = CVector(0,0,0);
	var_38_cvector = var_40_cvector;
	func_2187(var_39_bool, var_40_cvector);
	var_39_bool = var_35_bool;
	return 2;
}


func_1941(var_56_bool)
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
	func_2197(var_61_bool, var_62_object);
	var_61_bool = var_56_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2708(var_314_bool, var_315_object)
{
	var_316_float = 0; var_317_float = 0;
	@@var_315_object:GetProperty("reputation", var_317_float);
	var_314_bool = var_317_float >= (float)0.699999988079071;
	return 2;
}


func_921(var_0_object, var_384_int, var_385_object)
{
	var_387_object = Obj(); var_388_bool = 0; var_389_int = 0; var_390_bool = 0; var_391_object = Obj(); var_392_bool = 0; var_393_int = 0; var_394_bool = 0;
	var_0_object = var_385_object;
	var_395_bool = 0; var_396_object = Obj(); var_397_float = 0;
	var_385_object = var_396_object;
	func_2211(var_395_bool, var_396_object, (float)70.0);
	var_398_bool = var_395_bool == 0; //@nz
	if(var_398_bool != 0) {
		var_384_int = -2;
		return 8;
	}
	CreateDialog(var_391_object);
	var_399_int = 0;
	func_2568(var_399_int);
	@@var_391_object:SetNPCName(var_399_int);
	var_400_int = 0;
	func_2566(var_400_int);
	@@var_391_object:SetNPCDescription(var_400_int);
	var_401_string = "";
	func_2570(var_401_string);
	@@var_391_object:SetPhoto(var_401_string);
	var_402_string = "";
	func_2572(var_402_string);
	@@var_391_object:SetPhoto2(var_402_string);
	var_403_int = 0;
	func_2819(var_403_int);
	@@var_391_object:SetPlayerName(var_403_int);
	IsOverrideActive(var_392_bool);
	var_404_bool = var_392_bool;
	if(var_404_bool != 0) {
		var_384_int = -2;
		return 8;
	}
	DoDialog(var_391_object);
	var_405_bool = 0; var_406_object = Obj();
	func_2489(Obj());
	var_407_object = var_406_object;
	func_2298(var_405_bool, var_406_object);
	var_408_object = Obj(); var_409_object = Obj();
	var_385_object = var_408_object;
	var_391_object = var_409_object;
	TaskCall(5);
	func_1002(var_410_object, var_411_object, var_412_string, var_413_bool, var_408_object, var_409_object);
	TaskReturn();
	@@var_391_object:IsDialogEnd(var_394_bool);
	
Label_984:
	var_451_bool = var_394_bool == 0; //@nz
	if(var_451_bool != 0) {
		sync();
		@@var_391_object:IsDialogEnd(var_394_bool);
		goto Label_984;
	}
	var_385_object = Obj();
	func_2280();
	StopDialog(var_391_object);
	@@var_391_object:GetReturnValue((int)-1);
	var_393_int = var_384_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2715()
{
	var_57_object = Obj(); var_58_object = Obj();
	CreateDiaryEntry(var_58_object, (int)218, (int)1, (int)518596);
	var_62_bool = 0; var_63_object = Obj(); var_64_int = 0;
	var_58_object = var_63_object;
	func_2741(var_62_bool, var_63_object, (int)216);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2206(var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0;
	IsLoaded(var_34_bool);
	var_34_bool = var_32_bool;
	return 2;
}


func_2211(var_63_bool, var_64_object, var_65_float)
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
	func_2495(var_90_cvector, var_91_cvector);
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
	func_2574(var_106_bool);
	if(var_106_bool != 0) {
	} else {
		HasAnimationTrack(var_83_bool, "head");
		var_108_bool = var_83_bool;
		if(var_108_bool == 0) goto Label_2274;
		LookAsyncCamera("head");
	}
Label_2274:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_63_bool = 1;
	return 18;
	
}


func_1956(var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0);
	var_109_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_108_float, var_109_float);
	return 0;
}


func_2467(var_158_bool, var_159_string)
{
	var_160_bool = 0; var_161_bool = 0;
	var_162_bool = 0;
	func_2574(var_162_bool);
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


func_2728(var_71_object)
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


func_1961(var_39_bool)
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
	func_2179(var_46_float, var_47_object);
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


func_2482()
{
	var_34_bool = 0;
	func_2574(var_34_bool);
	if(var_34_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1458(var_0_object, var_513_int, var_514_object)
{
	var_516_object = Obj(); var_517_bool = 0; var_518_int = 0; var_519_bool = 0; var_520_object = Obj(); var_521_bool = 0; var_522_int = 0; var_523_bool = 0;
	var_0_object = var_514_object;
	var_524_bool = 0; var_525_object = Obj(); var_526_float = 0;
	var_514_object = var_525_object;
	func_2211(var_524_bool, var_525_object, (float)70.0);
	var_527_bool = var_524_bool == 0; //@nz
	if(var_527_bool != 0) {
		var_513_int = -2;
		return 8;
	}
	CreateDialog(var_520_object);
	var_528_int = 0;
	func_2568(var_528_int);
	@@var_520_object:SetNPCName(var_528_int);
	var_529_int = 0;
	func_2566(var_529_int);
	@@var_520_object:SetNPCDescription(var_529_int);
	var_530_string = "";
	func_2570(var_530_string);
	@@var_520_object:SetPhoto(var_530_string);
	var_531_string = "";
	func_2572(var_531_string);
	@@var_520_object:SetPhoto2(var_531_string);
	var_532_int = 0;
	func_2819(var_532_int);
	@@var_520_object:SetPlayerName(var_532_int);
	IsOverrideActive(var_521_bool);
	var_533_bool = var_521_bool;
	if(var_533_bool != 0) {
		var_513_int = -2;
		return 8;
	}
	DoDialog(var_520_object);
	var_534_bool = 0; var_535_object = Obj();
	func_2489(Obj());
	var_536_object = var_535_object;
	func_2298(var_534_bool, var_535_object);
	var_537_object = Obj(); var_538_object = Obj();
	var_514_object = var_537_object;
	var_520_object = var_538_object;
	TaskCall(9);
	func_1539(var_539_object, var_540_object, var_541_string, var_542_bool, var_537_object, var_538_object);
	TaskReturn();
	@@var_520_object:IsDialogEnd(var_523_bool);
	
Label_1521:
	var_570_bool = var_523_bool == 0; //@nz
	if(var_570_bool != 0) {
		sync();
		@@var_520_object:IsDialogEnd(var_523_bool);
		goto Label_1521;
	}
	var_514_object = Obj();
	func_2280();
	StopDialog(var_520_object);
	@@var_520_object:GetReturnValue((int)-1);
	var_522_int = var_513_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2741(var_62_bool, var_63_object, var_64_int)
{
	var_65_object = Obj(); var_66_object = Obj(); var_67_int = 0; var_68_object = Obj(); var_69_object = Obj(); var_70_int = 0;
	func_2728(Obj());
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


func_1717(var_0_object, var_573_int, var_574_object)
{
	var_576_object = Obj(); var_577_bool = 0; var_578_int = 0; var_579_bool = 0; var_580_object = Obj(); var_581_bool = 0; var_582_int = 0; var_583_bool = 0;
	var_0_object = var_574_object;
	var_584_bool = 0; var_585_object = Obj(); var_586_float = 0;
	var_574_object = var_585_object;
	func_2211(var_584_bool, var_585_object, (float)70.0);
	var_587_bool = var_584_bool == 0; //@nz
	if(var_587_bool != 0) {
		var_573_int = -2;
		return 8;
	}
	CreateDialog(var_580_object);
	var_588_int = 0;
	func_2568(var_588_int);
	@@var_580_object:SetNPCName(var_588_int);
	var_589_int = 0;
	func_2566(var_589_int);
	@@var_580_object:SetNPCDescription(var_589_int);
	var_590_string = "";
	func_2570(var_590_string);
	@@var_580_object:SetPhoto(var_590_string);
	var_591_string = "";
	func_2572(var_591_string);
	@@var_580_object:SetPhoto2(var_591_string);
	var_592_int = 0;
	func_2819(var_592_int);
	@@var_580_object:SetPlayerName(var_592_int);
	IsOverrideActive(var_581_bool);
	var_593_bool = var_581_bool;
	if(var_593_bool != 0) {
		var_573_int = -2;
		return 8;
	}
	DoDialog(var_580_object);
	var_594_bool = 0; var_595_object = Obj();
	func_2489(Obj());
	var_596_object = var_595_object;
	func_2298(var_594_bool, var_595_object);
	var_597_object = Obj(); var_598_object = Obj();
	var_574_object = var_597_object;
	var_580_object = var_598_object;
	TaskCall(11);
	func_1798(var_599_object, var_600_object, var_601_string, var_602_bool, var_597_object, var_598_object);
	TaskReturn();
	@@var_580_object:IsDialogEnd(var_583_bool);
	
Label_1780:
	var_627_bool = var_583_bool == 0; //@nz
	if(var_627_bool != 0) {
		sync();
		@@var_580_object:IsDialogEnd(var_583_bool);
		goto Label_1780;
	}
	var_574_object = Obj();
	func_2280();
	StopDialog(var_580_object);
	@@var_580_object:GetReturnValue((int)-1);
	var_582_int = var_573_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2489(var_126_object)
{
	var_127_object = Obj(); var_128_object = Obj();
	self(var_128_object);
	var_128_object = var_126_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1983()
{
	var_631_float = 0; var_632_float = 0;
	rand(var_632_float, (int)8, (int)16);
	SetTimer((int)10, var_632_float);
	return 2;
}


func_2495(var_90_cvector, var_91_cvector)
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


func_1992()
{
	KillTimer((int)10);
	return 0;
}


func_2505(var_352_int, var_353_string)
{
	var_354_int = 0; var_355_int = 0;
	GetVariable(var_353_string, var_355_int);
	var_355_int = var_352_int;
	return 2;
}


func_203(var_0_object, var_281_int, var_282_object)
{
	var_284_object = Obj(); var_285_bool = 0; var_286_int = 0; var_287_bool = 0; var_288_object = Obj(); var_289_bool = 0; var_290_int = 0; var_291_bool = 0;
	var_0_object = var_282_object;
	var_292_bool = 0; var_293_object = Obj(); var_294_float = 0;
	var_282_object = var_293_object;
	func_2211(var_292_bool, var_293_object, (float)70.0);
	var_295_bool = var_292_bool == 0; //@nz
	if(var_295_bool != 0) {
		var_281_int = -2;
		return 8;
	}
	CreateDialog(var_288_object);
	var_296_int = 0;
	func_2568(var_296_int);
	@@var_288_object:SetNPCName(var_296_int);
	var_297_int = 0;
	func_2566(var_297_int);
	@@var_288_object:SetNPCDescription(var_297_int);
	var_298_string = "";
	func_2570(var_298_string);
	@@var_288_object:SetPhoto(var_298_string);
	var_299_string = "";
	func_2572(var_299_string);
	@@var_288_object:SetPhoto2(var_299_string);
	var_300_int = 0;
	func_2819(var_300_int);
	@@var_288_object:SetPlayerName(var_300_int);
	IsOverrideActive(var_289_bool);
	var_301_bool = var_289_bool;
	if(var_301_bool != 0) {
		var_281_int = -2;
		return 8;
	}
	DoDialog(var_288_object);
	var_302_bool = 0; var_303_object = Obj();
	func_2489(Obj());
	var_304_object = var_303_object;
	func_2298(var_302_bool, var_303_object);
	var_305_object = Obj(); var_306_object = Obj();
	var_282_object = var_305_object;
	var_288_object = var_306_object;
	TaskCall(3);
	func_284(var_307_object, var_308_object, var_309_string, var_310_bool, var_305_object, var_306_object);
	TaskReturn();
	@@var_288_object:IsDialogEnd(var_291_bool);
	
Label_266:
	var_380_bool = var_291_bool == 0; //@nz
	if(var_380_bool != 0) {
		sync();
		@@var_288_object:IsDialogEnd(var_291_bool);
		goto Label_266;
	}
	var_282_object = Obj();
	func_2280();
	StopDialog(var_288_object);
	@@var_288_object:GetReturnValue((int)-1);
	var_290_int = var_281_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2510(var_80_bool, var_81_string, var_82_string)
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


func_2769(var_43_object)
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


func_2522(var_54_float)
{
	var_55_float = 0; var_56_float = 0;
	GetGameTime(var_56_float);
	var_56_float = var_54_float;
	return 2;
}


func_2527(var_179_int)
{
	var_180_float = 0; var_181_float = 0;
	GetGameTime(var_181_float);
	var_183_int = 0;
	var_183_int = var_181_float / (int)24;
	var_179_int = (int)1 + var_183_int;
	return 2;
}


func_2786(var_88_object, var_89_string, var_90_float)
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


func_2280()
{
	var_270_bool = 0; var_271_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_273_bool = 0;
	func_2574(var_273_bool);
	if(var_273_bool != 0) {
	} else {
		HasAnimationTrack(var_271_bool, "head");
		var_275_bool = var_271_bool;
		if(var_275_bool == 0) goto Label_2297;
		UnlookAsync("head");
	}
Label_2297:
	return 2;
	
}


func_2536(var_278_bool, var_279_int)
{
	var_280_int = 0;
	func_2527(var_280_int);
	var_278_bool = var_280_int == var_279_int;
	return 0;
}


func_1002(var_0_object, var_1_object, var_2_object, var_3_string, var_408_object, var_409_object)
{
	var_0_object = var_409_object;
	var_1_object = var_408_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_415_string = "";
		func_1074(var_409_object, "Fear");
		@@@var_0_object:SetMessage((int)521486);
		@@@var_0_object:ClearReplies();
		var_424_bool = 0;
		var_424_bool = 0;
		var_425_bool = 0; var_426_object = Obj();
		var_426_object = var_1_object;
		func_2650(var_426_object);
		if(var_425_bool != 0) {
			var_431_bool = 0; var_432_object = Obj();
			var_432_object = var_1_object;
			func_2638(var_432_object);
			if(var_431_bool != 0) {
				var_424_bool = 1;
			}
		}
		if(var_424_bool != 0) {
			@@@var_0_object:AddReply((int)521487, (int)22653, (int)22652);
		}
		@@@var_0_object:AddReply((int)521490, (int)-1, (int)22655);
		goto Label_1044;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x3ee";
	}
Label_1044:
	var_443_bool = 0;
	func_2574(var_443_bool);
	if(var_443_bool != 0) {

	Label_1048:
		lshWaitForAnimEnd();
		var_444_string = var_3_string;
		if(var_444_string != 0) {
		} else {
			var_445_string = "";
			var_445_string = var_2_object;
			func_2436(var_445_string);
			goto Label_1048;
	}
		PlayAnimation("all", "idle");

	Label_1063:
		WaitForAnimEnd();
		var_448_string = var_3_string;
		if(var_448_string != 0) {
			goto Label_1073;
		}
		PlayAnimation("all", "idle");
		goto Label_1063;
	}
	goto Label_1073;
	
Label_1073:
	return 0;
	
}


func_2542(var_56_string, var_57_int)
{
	var_58_string = ""; var_59_string = "";
	var_60_int = var_57_int;
	if(var_60_int != 0) {
		"idle" = "idle" + var_57_int;
	}
	var_59_string = var_56_string;
	return 2;
}


func_1265(var_0_object, var_455_int, var_456_object)
{
	var_458_object = Obj(); var_459_bool = 0; var_460_int = 0; var_461_bool = 0; var_462_object = Obj(); var_463_bool = 0; var_464_int = 0; var_465_bool = 0;
	var_0_object = var_456_object;
	var_466_bool = 0; var_467_object = Obj(); var_468_float = 0;
	var_456_object = var_467_object;
	func_2211(var_466_bool, var_467_object, (float)70.0);
	var_469_bool = var_466_bool == 0; //@nz
	if(var_469_bool != 0) {
		var_455_int = -2;
		return 8;
	}
	CreateDialog(var_462_object);
	var_470_int = 0;
	func_2568(var_470_int);
	@@var_462_object:SetNPCName(var_470_int);
	var_471_int = 0;
	func_2566(var_471_int);
	@@var_462_object:SetNPCDescription(var_471_int);
	var_472_string = "";
	func_2570(var_472_string);
	@@var_462_object:SetPhoto(var_472_string);
	var_473_string = "";
	func_2572(var_473_string);
	@@var_462_object:SetPhoto2(var_473_string);
	var_474_int = 0;
	func_2819(var_474_int);
	@@var_462_object:SetPlayerName(var_474_int);
	IsOverrideActive(var_463_bool);
	var_475_bool = var_463_bool;
	if(var_475_bool != 0) {
		var_455_int = -2;
		return 8;
	}
	DoDialog(var_462_object);
	var_476_bool = 0; var_477_object = Obj();
	func_2489(Obj());
	var_478_object = var_477_object;
	func_2298(var_476_bool, var_477_object);
	var_479_object = Obj(); var_480_object = Obj();
	var_456_object = var_479_object;
	var_462_object = var_480_object;
	TaskCall(7);
	func_1346(var_481_object, var_482_object, var_483_string, var_484_bool, var_479_object, var_480_object);
	TaskReturn();
	@@var_462_object:IsDialogEnd(var_465_bool);
	
Label_1328:
	var_506_bool = var_465_bool == 0; //@nz
	if(var_506_bool != 0) {
		sync();
		@@var_462_object:IsDialogEnd(var_465_bool);
		goto Label_1328;
	}
	var_456_object = Obj();
	func_2280();
	StopDialog(var_462_object);
	@@var_462_object:GetReturnValue((int)-1);
	var_464_int = var_455_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2549(var_50_int)
{
	var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0;
	var_53_int = 0;
	
Label_2551:
	var_56_string = ""; var_57_int = 0;
	var_53_int = var_57_int;
	func_2542(var_56_string, var_57_int);
	HasAnimation(var_54_bool, "all", var_56_string);
	var_61_bool = var_54_bool == 0; //@nz
	if(var_61_bool != 0) {
	} else {
		var_53_int = var_53_int + (int)1;
		goto Label_2551;
	}
	var_53_int = var_50_int;
	return 4;
	
}


func_2298(var_124_bool, var_125_object)
{
	var_129_int = 0; var_130_int = 0; var_131_int = 0; var_132_int = 0;
	GetVariable("voice_common", var_131_int);
	var_134_int = var_131_int;
	if(var_134_int != 0) {
		var_135_bool = 0; var_136_object = Obj();
		var_125_object = var_136_object;
		func_2356(var_135_bool, var_136_object);
		var_165_bool = var_135_bool == 0; //@nz
		if(var_165_bool != 0) {
			var_166_bool = 0; var_167_object = Obj();
			var_125_object = var_167_object;
			func_2393(var_166_bool, var_167_object);
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
		func_2393(var_211_bool, var_212_object);
		var_213_bool = var_211_bool == 0; //@nz
		if(var_213_bool != 0) {
			var_214_bool = 0; var_215_object = Obj();
			var_125_object = var_215_object;
			func_2356(var_214_bool, var_215_object);
			var_216_bool = var_214_bool == 0; //@nz
			if(var_216_bool != 0) {
				var_124_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_2354;
	
Label_2354:
	var_124_bool = 1;
	return 4;
	
}


