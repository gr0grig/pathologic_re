// @IMPORTS: DoTrade/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,StopTrade/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetGameTime/1,HasAnimation/3,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,ClearSubContainer/1,CreateInvItem/1,AddItem/3
// @STRINGS: W:Neutral|W:all|W:idle|A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:Smile|W:Untrust|W:Grin|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ui/NPC_Andrei.png|W:ui/NPC_Andrei_b.png|W:k2q04|W:k5q02|A:SetReturnValue|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:grass_combination|A:SetItemName|W:im_inc|A:SetProperty|W:hl_inc|W:branch|W:tr_andrei|W:mt_andrei
// @GLOBALS: 0:object:
// @RUN_OP: 0x6f6
// @RUN_TASK: 13
// @TASK_0: vars=bool params=1
// @EVENT_11: op=0x1a vars=int
// @TASK_1: vars=object params=2
// @TASK_2: vars=object,object,string,bool params=2
// @EVENT_11: op=0xd3 vars=int,int
// @TASK_3: vars=object params=2
// @TASK_4: vars=object,object,string,bool params=2
// @EVENT_11: op=0x200 vars=int,int
// @TASK_5: vars=object params=2
// @TASK_6: vars=object,object,string,bool params=2
// @EVENT_11: op=0x2f1 vars=int,int
// @TASK_7: vars=object params=2
// @TASK_8: vars=object,object,string,bool params=2
// @EVENT_11: op=0x4d2 vars=int,int
// @TASK_9: vars=object params=2
// @TASK_10: vars=object,object,string,bool params=2
// @EVENT_11: op=0x5d0 vars=int,int
// @TASK_11: vars=object params=2
// @TASK_12: vars=object,object,string,bool params=2
// @EVENT_11: op=0x6a0 vars=int,int
// @TASK_13: vars=cvector params=0
// @EVENT_7: op=0x73f vars=int
// @EVENT_6: op=0x765 vars=
// @EVENT_5: op=0x774 vars=
// @EVENT_45: op=0x781 vars=bool
// @EVENT_0: op=0x78d vars=object
// @PE: 0x0,0x1a,0x79,0xbd,0xd3,0x1b0,0x1ea,0x200,0x292,0x2db,0x2f1,0x47d,0x4bc,0x4d2,0x580,0x5ba,0x5d0,0x64b,0x68a,0x6a0,0x6f6,0x73f,0x765,0x781,0x8f7,0x92f,0x987,0x9af,0x9b8,0x9c1,0x9c6,0x9d2

task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_bool = 0;
	func_2477(var_33_bool);
	if(var_33_bool != 0) {
		lshStopAnimation();
	} else {
		StopAnimation();
	}
	StopTrade();
	var_0_bool = true;
	return 0;
	
}


task_2_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_cvector)
{
	if((int)1 != 0) {
		func_2402();
		var_37_bool = var_33_cvector == (int)26731;
		if(var_37_bool != 0) {
			var_38_object = Obj(); var_39_object = Obj();
			var_38_object = var_1_object;
			var_39_object = var_0_bool;
			func_2497(var_39_object);
		}
		var_42_bool = var_33_cvector == (int)26734;
		if(var_42_bool != 0) {
			var_43_object = Obj(); var_44_object = Obj();
			var_43_object = var_1_object;
			var_44_object = var_0_bool;
			func_2479();
			var_70_object = Obj(); var_71_object = Obj();
			var_70_object = var_1_object;
			var_71_object = var_0_bool;
			func_2497(var_71_object);
		}
		var_73_bool = var_33_cvector == (int)26735;
		if(var_73_bool != 0) {
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_bool;
			func_2479();
		}
		var_77_bool = var_32_bool == (int)26730;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_189(var_33_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)525362);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)525363, (int)-1, (int)26731);
			var_99_bool = 0; var_100_object = Obj();
			var_100_object = var_1_object;
			func_2502(var_100_object);
			if(var_99_bool != 0) {
				@@@var_0_bool:AddReply((int)525364, (int)26733, (int)26732);
			}
			@@@var_0_bool:AddReply((int)525368, (int)-1, (int)26736);
			return 0;
		}
		var_114_bool = var_32_bool == (int)26733;
		if(var_114_bool != 0) {
			var_115_string = "";
			func_189(var_33_cvector, "Smile");
			@@@var_0_bool:SetMessage((int)525365);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)529141, (int)30588, (int)30587);
			return 0;
		}
		var_121_bool = var_32_bool == (int)30588;
		if(var_121_bool != 0) {
			var_122_string = "";
			func_189(var_33_cvector, "Smile");
			@@@var_0_bool:SetMessage((int)529142);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)529143, (int)30590, (int)30589);
			return 0;
		}
		var_128_bool = var_32_bool == (int)30590;
		if(var_128_bool != 0) {
			var_129_string = "";
			func_189(var_33_cvector, "Untrust");
			@@@var_0_bool:SetMessage((int)529144);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)525366, (int)-1, (int)26734);
			@@@var_0_bool:AddReply((int)525367, (int)-1, (int)26735);
			return 0;
		}
		var_3_object = true;
		var_137_bool = 0;
		func_2477(var_137_bool);
		if(var_137_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xd4";
	
}


task_4_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_cvector)
{
	if((int)1 != 0) {
		func_2402();
		var_37_bool = var_32_bool == (int)26818;
		if(var_37_bool != 0) {
			var_38_string = "";
			func_490(var_33_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)525462);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)529295, (int)30750, (int)30749);
			@@@var_0_bool:AddReply((int)525463, (int)-1, (int)26819);
			return 0;
		}
		var_63_bool = var_32_bool == (int)30750;
		if(var_63_bool != 0) {
			var_64_string = "";
			func_490(var_33_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)529296);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)529297, (int)-1, (int)30751);
			@@@var_0_bool:AddReply((int)529298, (int)-1, (int)30752);
			return 0;
		}
		var_3_object = true;
		var_72_bool = 0;
		func_2477(var_72_bool);
		if(var_72_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x201";
	
}


task_6_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_int, var_17_int, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_cvector)
{
	if((int)1 != 0) {
		func_2402();
		var_37_bool = var_33_cvector == (int)27214;
		if(var_37_bool != 0) {
			var_38_object = Obj(); var_39_object = Obj();
			var_38_object = var_1_object;
			var_39_object = var_0_bool;
			func_2488();
		}
		var_66_bool = var_33_cvector == (int)43013;
		if(var_66_bool != 0) {
			var_67_object = Obj(); var_68_object = Obj();
			var_67_object = var_1_object;
			var_68_object = var_0_bool;
			func_2488();
		}
		var_70_bool = var_33_cvector == (int)43010;
		if(var_70_bool != 0) {
			var_71_object = Obj(); var_72_object = Obj();
			var_71_object = var_1_object;
			var_72_object = var_0_bool;
			func_2488();
		}
		var_74_bool = var_33_cvector == (int)43005;
		if(var_74_bool != 0) {
			var_75_object = Obj(); var_76_object = Obj();
			var_75_object = var_1_object;
			var_76_object = var_0_bool;
			func_2488();
		}
		var_78_bool = var_33_cvector == (int)43002;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_bool;
			func_2488();
		}
		var_82_bool = var_33_cvector == (int)43000;
		if(var_82_bool != 0) {
			var_83_object = Obj(); var_84_object = Obj();
			var_83_object = var_1_object;
			var_84_object = var_0_bool;
			func_2488();
		}
		var_86_bool = var_33_cvector == (int)31148;
		if(var_86_bool != 0) {
			var_87_object = Obj(); var_88_object = Obj();
			var_87_object = var_1_object;
			var_88_object = var_0_bool;
			func_2497(var_88_object);
		}
		var_91_bool = var_32_bool == (int)27211;
		if(var_91_bool != 0) {
			var_92_string = "";
			func_731(var_33_cvector, "Grin");
			@@@var_0_bool:SetMessage((int)525919);
			@@@var_0_bool:ClearReplies();
			var_110_bool = 0; var_111_object = Obj();
			var_111_object = var_1_object;
			func_2514(var_111_object);
			if(var_110_bool != 0) {
				@@@var_0_bool:AddReply((int)525920, (int)42995, (int)27212);
			}
			@@@var_0_bool:AddReply((int)529685, (int)-1, (int)31148);
			@@@var_0_bool:AddReply((int)525923, (int)-1, (int)27215);
			@@@var_0_bool:AddReply((int)529057, (int)-1, (int)30499);
			return 0;
		}
		var_131_bool = var_32_bool == (int)42995;
		if(var_131_bool != 0) {
			var_132_string = "";
			func_731(var_33_cvector, "Untrust");
			@@@var_0_bool:SetMessage((int)540917);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)540918, (int)27213, (int)42996);
			@@@var_0_bool:AddReply((int)540919, (int)42998, (int)42997);
			return 0;
		}
		var_141_bool = var_32_bool == (int)42998;
		if(var_141_bool != 0) {
			var_142_string = "";
			func_731(var_33_cvector, "Smile");
			@@@var_0_bool:SetMessage((int)540920);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)540921, (int)30501, (int)42999);
			@@@var_0_bool:AddReply((int)540922, (int)-1, (int)43000);
			return 0;
		}
		var_151_bool = var_32_bool == (int)27213;
		if(var_151_bool != 0) {
			var_152_string = "";
			func_731(var_33_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)525921);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)529058, (int)30501, (int)30500);
			@@@var_0_bool:AddReply((int)529062, (int)30503, (int)30504);
			return 0;
		}
		var_161_bool = var_32_bool == (int)30501;
		if(var_161_bool != 0) {
			var_162_string = "";
			func_731(var_33_cvector, "Smile");
			@@@var_0_bool:SetMessage((int)529059);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)529060, (int)30503, (int)30502);
			@@@var_0_bool:AddReply((int)540923, (int)-1, (int)43002);
			return 0;
		}
		var_171_bool = var_32_bool == (int)30503;
		if(var_171_bool != 0) {
			var_172_string = "";
			func_731(var_33_cvector, "Untrust");
			@@@var_0_bool:SetMessage((int)529061);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)540924, (int)43004, (int)43003);
			return 0;
		}
		var_178_bool = var_32_bool == (int)43004;
		if(var_178_bool != 0) {
			var_179_string = "";
			func_731(var_33_cvector, "Untrust");
			@@@var_0_bool:SetMessage((int)540925);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)529063, (int)30507, (int)30506);
			@@@var_0_bool:AddReply((int)540926, (int)-1, (int)43005);
			return 0;
		}
		var_188_bool = var_32_bool == (int)30507;
		if(var_188_bool != 0) {
			var_189_string = "";
			func_731(var_33_cvector, "Smile");
			@@@var_0_bool:SetMessage((int)529064);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)540927, (int)43007, (int)43006);
			@@@var_0_bool:AddReply((int)540931, (int)-1, (int)43010);
			return 0;
		}
		var_198_bool = var_32_bool == (int)43007;
		if(var_198_bool != 0) {
			var_199_string = "";
			func_731(var_33_cvector, "Untrust");
			@@@var_0_bool:SetMessage((int)540928);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)540929, (int)43009, (int)43008);
			@@@var_0_bool:AddReply((int)540932, (int)43009, (int)43011);
			return 0;
		}
		var_208_bool = var_32_bool == (int)43009;
		if(var_208_bool != 0) {
			var_209_string = "";
			func_731(var_33_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)540930);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)525922, (int)-1, (int)27214);
			@@@var_0_bool:AddReply((int)540933, (int)-1, (int)43013);
			return 0;
		}
		var_3_object = true;
		var_217_bool = 0;
		func_2477(var_217_bool);
		if(var_217_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x2f2";
	
}


task_8_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_int, var_22_int, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_cvector)
{
	if((int)1 != 0) {
		func_2402();
		var_37_bool = var_32_bool == (int)36906;
		if(var_37_bool != 0) {
			var_38_string = "";
			func_1212(var_33_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)535231);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)535232, (int)36953, (int)36907);
			@@@var_0_bool:AddReply((int)535233, (int)-1, (int)36908);
			@@@var_0_bool:AddReply((int)535280, (int)-1, (int)36956);
			return 0;
		}
		var_66_bool = var_32_bool == (int)36953;
		if(var_66_bool != 0) {
			var_67_string = "";
			func_1212(var_33_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)535277);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)535278, (int)36957, (int)36954);
			@@@var_0_bool:AddReply((int)535279, (int)36957, (int)36955);
			return 0;
		}
		var_76_bool = var_32_bool == (int)36957;
		if(var_76_bool != 0) {
			var_77_string = "";
			func_1212(var_33_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)535281);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)535282, (int)-1, (int)36958);
			@@@var_0_bool:AddReply((int)535283, (int)-1, (int)36959);
			return 0;
		}
		var_3_object = true;
		var_85_bool = 0;
		func_2477(var_85_bool);
		if(var_85_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x4d3";
	
}


task_10_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_int, var_27_int, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_cvector)
{
	if((int)1 != 0) {
		func_2402();
		var_37_bool = var_32_bool == (int)42554;
		if(var_37_bool != 0) {
			var_38_string = "";
			func_1466(var_33_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)540545);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)540546, (int)-1, (int)42555);
			@@@var_0_bool:AddReply((int)540798, (int)-1, (int)42847);
			return 0;
		}
		var_3_object = true;
		var_62_bool = 0;
		func_2477(var_62_bool);
		if(var_62_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x5d1";
	
}


task_12_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_int, var_32_int, var_33_cvector)
{
	if((int)1 != 0) {
		func_2402();
		var_37_bool = var_33_cvector == (int)44406;
		if(var_37_bool != 0) {
			var_38_object = Obj(); var_39_object = Obj();
			var_38_object = var_1_object;
			var_39_object = var_0_bool;
			func_2497(var_39_object);
		}
		var_42_bool = var_33_cvector == (int)44407;
		if(var_42_bool != 0) {
			var_43_object = Obj(); var_44_object = Obj();
			var_43_object = var_1_object;
			var_44_object = var_0_bool;
			func_2497(var_44_object);
		}
		var_46_bool = var_32_int == (int)44401;
		if(var_46_bool != 0) {
			var_47_string = "";
			func_1674(var_33_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)542099);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542100, (int)44405, (int)44402);
			@@@var_0_bool:AddReply((int)542101, (int)-1, (int)44403);
			@@@var_0_bool:AddReply((int)542102, (int)-1, (int)44404);
			return 0;
		}
		var_75_bool = var_32_int == (int)44405;
		if(var_75_bool != 0) {
			var_76_string = "";
			func_1674(var_33_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)542103);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542104, (int)-1, (int)44406);
			@@@var_0_bool:AddReply((int)542105, (int)-1, (int)44407);
			return 0;
		}
		var_3_object = true;
		var_84_bool = 0;
		func_2477(var_84_bool);
		if(var_84_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x6a1";
	
}


task_13_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_cvector, var_32_int)
{
	var_34_bool = var_32_int == (int)10;
	if(var_34_bool != 0) {
		func_1851();
		var_36_bool = 0;
		var_36_bool = 0;
		var_37_bool = 0;
		func_2065(var_37_bool);
		if(var_37_bool != 0) {
			var_40_bool = 0;
			func_1820(var_40_bool);
			if(var_40_bool != 0) {
				var_36_bool = 1;
			}
		}
		if(var_36_bool != 0) {
			var_57_bool = 0;
			func_1800(var_57_bool);
			if(var_57_bool != 0) {
				var_76_bool = 0; var_77_object = Obj();
				func_2409(Obj());
				var_78_object = var_77_object;
				func_2215(var_76_bool, var_77_object);
			}
		} else {
			func_1815(var_32_int);
			func_1842();
		}
	}
	return 0;
	
}


task_13_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_cvector)
{
	func_2033();
	func_1851();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_13_event_5(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_cvector)
{
	StopGroup0();
	func_1851();
	var_33_string = "";
	func_2356("Neutral");
	func_1842();
	return 0;
}


task_13_event_45(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_cvector, var_32_bool)
{
	var_33_bool = var_32_bool;
	if(var_33_bool != 0) {
		func_1842();
	} else {
		var_39_string = "";
		func_2356("Neutral");
	}
	return 0;
	
}


task_13_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_cvector, var_32_object)
{
	var_33_bool = 0; var_34_bool = 0;
	IsOverrideActive(var_34_bool);
	var_35_bool = var_34_bool == 0; //@nz
	if(var_35_bool != 0) {
		EventDisable(0);
		func_2033();
		var_36_bool = 0; var_37_object = Obj();
		var_32_object = var_37_object;
		func_2056(var_36_bool, var_37_object);
		EventEnable(0);
		var_50_object = Obj();
		var_32_object = var_50_object;
		func_2654(var_32_object, var_33_bool, var_34_bool, var_50_object);
		var_716_string = "";
		func_2356("Neutral");
		func_1851();
		func_1842();
	}
	return 2;
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_cvector)
{
	func_1786(var_31_cvector);
	return 0;
}


func_0(var_0_bool)
{
	DoTrade();
	var_0_bool = false;
	
Label_4:
	var_427_bool = 0;
	func_2477(var_427_bool);
	if(var_427_bool != 0) {
		var_428_string = "";
		func_2356("Neutral");
		lshWaitForAnimEnd();
	} else {
		WaitForAnimEnd();
		PlayAnimation("all", "idle");
	}
	var_429_bool = var_0_bool;
	if(var_429_bool != 0) {
		goto Label_4;
	}
	return 0;
	
}
EMIT "Return(); Pop(0)";


func_2565(var_47_bool, var_48_object, var_49_int)
{
	var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0; var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0;
	func_2552(Obj());
	var_56_object = var_53_object;
	@@var_53_object:Find(var_49_int, var_54_object);
	var_61_bool = var_54_object == 0; //@nz
	if(var_61_bool != 0) {
		var_63_int = "Can't find diary parent with id: " + var_49_int;
		Trace(var_63_int);
		var_47_bool = 0;
		return 6;
	}
	@@var_54_object:AddChild(var_48_object);
	SendWorldWndMessage((int)7);
	@@var_48_object:GetCategory(var_55_int);
	SetDiarySection(var_55_int);
	var_47_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_2056(var_36_bool, var_37_object)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0);
	@@var_37_object:GetPosition(var_39_cvector);
	var_40_bool = 0; var_41_cvector = CVector(0,0,0);
	var_39_cvector = var_41_cvector;
	func_2046(var_40_bool, var_41_cvector);
	var_40_bool = var_36_bool;
	return 2;
}


func_1800(var_57_bool)
{
	var_58_object = Obj(); var_59_object = Obj();
	FindActor(var_59_object, "player");
	var_61_bool = var_59_object == 0; //@nz
	if(var_61_bool != 0) {
		var_57_bool = 0;
		return 2;
	}
	var_62_bool = 0; var_63_object = Obj();
	var_59_object = var_63_object;
	func_2056(var_62_bool, var_63_object);
	var_62_bool = var_57_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2065(var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0;
	IsLoaded(var_34_bool);
	var_34_bool = var_32_bool;
	return 2;
}


func_1530(var_0_bool, var_533_int, var_534_object)
{
	var_536_object = Obj(); var_537_bool = 0; var_538_int = 0; var_539_bool = 0; var_540_object = Obj(); var_541_bool = 0; var_542_int = 0; var_543_bool = 0;
	var_0_bool = var_534_object;
	var_544_bool = 0; var_545_object = Obj(); var_546_float = 0;
	var_534_object = var_545_object;
	func_2070(var_544_bool, var_545_object, (float)70.0);
	var_547_bool = var_544_bool == 0; //@nz
	if(var_547_bool != 0) {
		var_533_int = -2;
		return 8;
	}
	CreateDialog(var_540_object);
	var_548_int = 0;
	func_2471(var_548_int);
	@@var_540_object:SetNPCName(var_548_int);
	var_549_int = 0;
	func_2469(var_549_int);
	@@var_540_object:SetNPCDescription(var_549_int);
	var_550_string = "";
	func_2473(var_550_string);
	@@var_540_object:SetPhoto(var_550_string);
	var_551_string = "";
	func_2475(var_551_string);
	@@var_540_object:SetPhoto2(var_551_string);
	var_552_int = 0;
	func_2637(var_552_int);
	@@var_540_object:SetPlayerName(var_552_int);
	IsOverrideActive(var_541_bool);
	var_553_bool = var_541_bool;
	if(var_553_bool != 0) {
		var_533_int = -2;
		return 8;
	}
	DoDialog(var_540_object);
	var_554_bool = 0; var_555_object = Obj();
	func_2409(Obj());
	var_556_object = var_555_object;
	func_2157(var_554_bool, var_555_object);
	var_557_object = Obj(); var_558_object = Obj();
	var_534_object = var_557_object;
	var_540_object = var_558_object;
	TaskCall(12);
	func_1611(var_559_object, var_560_object, var_561_string, var_562_bool, var_557_object, var_558_object);
	TaskReturn();
	@@var_540_object:IsDialogEnd(var_543_bool);
	
Label_1593:
	var_590_bool = var_543_bool == 0; //@nz
	if(var_590_bool != 0) {
		sync();
		@@var_540_object:IsDialogEnd(var_543_bool);
		goto Label_1593;
	}
	var_534_object = Obj();
	func_2139();
	StopDialog(var_540_object);
	@@var_540_object:GetReturnValue((int)-1);
	var_542_int = var_533_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2070(var_109_bool, var_110_object, var_111_float)
{
	var_112_float = 0; var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0); var_119_bool = 0; var_120_bool = 0; var_121_float = 0; var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0); var_127_cvector = CVector(0,0,0); var_128_bool = 0; var_129_bool = 0;
	@@var_110_object:GetPosition(var_122_cvector);
	@@var_110_object:GetEyesHeight(var_121_float);
	var_130_float = GetByIndex(var_122_cvector, 1);
	var_130_float = var_130_float + var_121_float;
	SetByIndex(var_122_cvector, 1) = var_130_float;
	GetPosition(var_123_cvector);
	GetEyesHeight(var_121_float);
	var_131_float = GetByIndex(var_123_cvector, 1);
	var_131_float = var_131_float + var_121_float;
	SetByIndex(var_123_cvector, 1) = var_131_float;
	var_124_cvector = var_122_cvector - var_123_cvector;
	var_132_float = GetByIndex(var_124_cvector, 1);
	SetByIndex(var_124_cvector, 1) = (float)0;
	var_133_int = var_124_cvector | var_124_cvector;
	var_134_float = sqrt(var_133_int);
	var_124_cvector = var_124_cvector / var_134_float;
	var_125_cvector = -var_124_cvector;
	var_135_float = var_124_cvector * var_111_float;
	var_136_cvector = CVector(0,0,0); var_137_cvector = CVector(0,0,0);
	var_137_cvector = var_125_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2415(var_136_cvector, var_137_cvector);
	var_145_float = var_136_cvector * (int)25;
	var_146_int = var_135_float + var_145_float;
	var_126_cvector = var_146_int - CVector(0.0, 10.0, 0.0);
	var_127_cvector = var_123_cvector + var_126_cvector;
	IsOverrideActive(var_128_bool);
	var_148_bool = var_128_bool;
	if(var_148_bool != 0) {
		var_109_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_127_cvector, var_125_cvector, (bool)1);
	var_150_float = GetByIndex(var_126_cvector, 0);
	var_151_float = GetByIndex(var_126_cvector, 2);
	Rotate(var_150_float, var_151_float);
	var_152_bool = 0;
	func_2477(var_152_bool);
	if(var_152_bool != 0) {
	} else {
		HasAnimationTrack(var_129_bool, "head");
		var_154_bool = var_129_bool;
		if(var_154_bool == 0) goto Label_2133;
		LookAsyncCamera("head");
	}
Label_2133:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_109_bool = 1;
	return 18;
	
}


func_1815(var_0_bool)
{
	var_109_float = GetByIndex(var_0_bool, 0);
	var_110_float = GetByIndex(var_0_bool, 2);
	RotateAsync(var_109_float, var_110_float);
	return 0;
}


func_1820(var_40_bool)
{
	var_41_object = Obj(); var_42_bool = 0; var_43_object = Obj(); var_44_bool = 0;
	FindActor(var_43_object, "player");
	var_46_bool = var_43_object == 0; //@nz
	if(var_46_bool != 0) {
		var_40_bool = 0;
		return 4;
	}
	var_47_float = 0; var_48_object = Obj();
	var_43_object = var_48_object;
	func_2038(var_47_float, var_48_object);
	var_56_bool = var_47_float > (float)90000.0;
	if(var_56_bool != 0) {
		var_40_bool = 0;
		return 4;
	}
	CanSee(var_44_bool, var_43_object);
	var_44_bool = var_40_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_2593()
{
	var_63_int = 0; var_64_bool = 0; var_65_int = 0; var_66_int = 0; var_67_object = Obj(); var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_bool = 0; var_72_int = 0; var_73_int = 0; var_74_object = Obj(); var_75_int = 0; var_76_bool = 0;
	ClearSubContainer((int)0);
	irand(var_72_int, (int)8);
	var_72_int = var_72_int + (int)2;
	var_73_int = 0;
	
Label_2603:
	var_80_bool = var_73_int < var_72_int;
	if(var_80_bool != 0) {
		CreateInvItem(var_74_object);
		@@var_74_object:SetItemName("grass_combination");
		irand(var_75_int, (int)50);
		var_75_int = var_75_int + (int)30;
		var_86_float = var_75_int / (float)100.0;
		@@var_74_object:SetProperty("im_inc", var_86_float);
		irand(var_75_int, (int)40);
		var_90_float = var_75_int / (float)100.0;
		var_91_int = -var_90_float;
		@@var_74_object:SetProperty("hl_inc", var_91_int);
		AddItem(var_76_bool, var_74_object, (int)0);
		var_74_object = 0;
		var_73_int = var_73_int + (int)1;
		goto Label_2603;
	}
	return 14;
}


func_40(var_0_bool, var_324_int, var_325_object)
{
	var_327_object = Obj(); var_328_bool = 0; var_329_int = 0; var_330_bool = 0; var_331_object = Obj(); var_332_bool = 0; var_333_int = 0; var_334_bool = 0;
	var_0_bool = var_325_object;
	var_335_bool = 0; var_336_object = Obj(); var_337_float = 0;
	var_325_object = var_336_object;
	func_2070(var_335_bool, var_336_object, (float)70.0);
	var_338_bool = var_335_bool == 0; //@nz
	if(var_338_bool != 0) {
		var_324_int = -2;
		return 8;
	}
	CreateDialog(var_331_object);
	var_339_int = 0;
	func_2471(var_339_int);
	@@var_331_object:SetNPCName(var_339_int);
	var_340_int = 0;
	func_2469(var_340_int);
	@@var_331_object:SetNPCDescription(var_340_int);
	var_341_string = "";
	func_2473(var_341_string);
	@@var_331_object:SetPhoto(var_341_string);
	var_342_string = "";
	func_2475(var_342_string);
	@@var_331_object:SetPhoto2(var_342_string);
	var_343_int = 0;
	func_2637(var_343_int);
	@@var_331_object:SetPlayerName(var_343_int);
	IsOverrideActive(var_332_bool);
	var_344_bool = var_332_bool;
	if(var_344_bool != 0) {
		var_324_int = -2;
		return 8;
	}
	DoDialog(var_331_object);
	var_345_bool = 0; var_346_object = Obj();
	func_2409(Obj());
	var_347_object = var_346_object;
	func_2157(var_345_bool, var_346_object);
	var_348_object = Obj(); var_349_object = Obj();
	var_325_object = var_348_object;
	var_331_object = var_349_object;
	TaskCall(2);
	func_121(var_350_object, var_351_object, var_352_string, var_353_bool, var_348_object, var_349_object);
	TaskReturn();
	@@var_331_object:IsDialogEnd(var_334_bool);
	
Label_103:
	var_389_bool = var_334_bool == 0; //@nz
	if(var_389_bool != 0) {
		sync();
		@@var_331_object:IsDialogEnd(var_334_bool);
		goto Label_103;
	}
	var_325_object = Obj();
	func_2139();
	StopDialog(var_331_object);
	@@var_331_object:GetReturnValue((int)-1);
	var_333_int = var_324_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1068(var_0_bool, var_601_int, var_602_object)
{
	var_604_object = Obj(); var_605_bool = 0; var_606_int = 0; var_607_bool = 0; var_608_object = Obj(); var_609_bool = 0; var_610_int = 0; var_611_bool = 0;
	var_0_bool = var_602_object;
	var_612_bool = 0; var_613_object = Obj(); var_614_float = 0;
	var_602_object = var_613_object;
	func_2070(var_612_bool, var_613_object, (float)70.0);
	var_615_bool = var_612_bool == 0; //@nz
	if(var_615_bool != 0) {
		var_601_int = -2;
		return 8;
	}
	CreateDialog(var_608_object);
	var_616_int = 0;
	func_2471(var_616_int);
	@@var_608_object:SetNPCName(var_616_int);
	var_617_int = 0;
	func_2469(var_617_int);
	@@var_608_object:SetNPCDescription(var_617_int);
	var_618_string = "";
	func_2473(var_618_string);
	@@var_608_object:SetPhoto(var_618_string);
	var_619_string = "";
	func_2475(var_619_string);
	@@var_608_object:SetPhoto2(var_619_string);
	var_620_int = 0;
	func_2637(var_620_int);
	@@var_608_object:SetPlayerName(var_620_int);
	IsOverrideActive(var_609_bool);
	var_621_bool = var_609_bool;
	if(var_621_bool != 0) {
		var_601_int = -2;
		return 8;
	}
	DoDialog(var_608_object);
	var_622_bool = 0; var_623_object = Obj();
	func_2409(Obj());
	var_624_object = var_623_object;
	func_2157(var_622_bool, var_623_object);
	var_625_object = Obj(); var_626_object = Obj();
	var_602_object = var_625_object;
	var_608_object = var_626_object;
	TaskCall(8);
	func_1149(var_627_object, var_628_object, var_629_string, var_630_bool, var_625_object, var_626_object);
	TaskReturn();
	@@var_608_object:IsDialogEnd(var_611_bool);
	
Label_1131:
	var_658_bool = var_611_bool == 0; //@nz
	if(var_658_bool != 0) {
		sync();
		@@var_608_object:IsDialogEnd(var_611_bool);
		goto Label_1131;
	}
	var_602_object = Obj();
	func_2139();
	StopDialog(var_608_object);
	@@var_608_object:GetReturnValue((int)-1);
	var_610_int = var_601_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2351()
{
	CameraSwitchToNormal((bool)1);
	return 0;
}


func_1327(var_0_bool, var_660_int, var_661_object)
{
	var_663_object = Obj(); var_664_bool = 0; var_665_int = 0; var_666_bool = 0; var_667_object = Obj(); var_668_bool = 0; var_669_int = 0; var_670_bool = 0;
	var_0_bool = var_661_object;
	var_671_bool = 0; var_672_object = Obj(); var_673_float = 0;
	var_661_object = var_672_object;
	func_2070(var_671_bool, var_672_object, (float)70.0);
	var_674_bool = var_671_bool == 0; //@nz
	if(var_674_bool != 0) {
		var_660_int = -2;
		return 8;
	}
	CreateDialog(var_667_object);
	var_675_int = 0;
	func_2471(var_675_int);
	@@var_667_object:SetNPCName(var_675_int);
	var_676_int = 0;
	func_2469(var_676_int);
	@@var_667_object:SetNPCDescription(var_676_int);
	var_677_string = "";
	func_2473(var_677_string);
	@@var_667_object:SetPhoto(var_677_string);
	var_678_string = "";
	func_2475(var_678_string);
	@@var_667_object:SetPhoto2(var_678_string);
	var_679_int = 0;
	func_2637(var_679_int);
	@@var_667_object:SetPlayerName(var_679_int);
	IsOverrideActive(var_668_bool);
	var_680_bool = var_668_bool;
	if(var_680_bool != 0) {
		var_660_int = -2;
		return 8;
	}
	DoDialog(var_667_object);
	var_681_bool = 0; var_682_object = Obj();
	func_2409(Obj());
	var_683_object = var_682_object;
	func_2157(var_681_bool, var_682_object);
	var_684_object = Obj(); var_685_object = Obj();
	var_661_object = var_684_object;
	var_667_object = var_685_object;
	TaskCall(10);
	func_1408(var_686_object, var_687_object, var_688_string, var_689_bool, var_684_object, var_685_object);
	TaskReturn();
	@@var_667_object:IsDialogEnd(var_670_bool);
	
Label_1390:
	var_714_bool = var_670_bool == 0; //@nz
	if(var_714_bool != 0) {
		sync();
		@@var_667_object:IsDialogEnd(var_670_bool);
		goto Label_1390;
	}
	var_661_object = Obj();
	func_2139();
	StopDialog(var_667_object);
	@@var_667_object:GetReturnValue((int)-1);
	var_669_int = var_660_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1842()
{
	var_718_float = 0; var_719_float = 0;
	rand(var_719_float, (int)8, (int)16);
	SetTimer((int)10, var_719_float);
	return 2;
}


func_2356(var_293_string)
{
	var_294_bool = 0; var_295_float = 0; var_296_float = 0; var_297_bool = 0; var_298_float = 0; var_299_float = 0;
	lshHasAnimation(var_297_bool, var_293_string);
	var_300_bool = var_297_bool;
	if(var_300_bool != 0) {
		lshGetAnimTimes(var_293_string, var_298_float, var_299_float);
		lshPlayAnimation(var_298_float, var_299_float, (bool)0);
	} else {
		var_303_int = "Can't find lsh animation : " + var_293_string;
		Trace(var_303_int);
	}
	return 6;
	
}


func_1851()
{
	KillTimer((int)10);
	return 0;
}


func_577(var_0_bool, var_437_int, var_438_object)
{
	var_440_object = Obj(); var_441_bool = 0; var_442_int = 0; var_443_bool = 0; var_444_object = Obj(); var_445_bool = 0; var_446_int = 0; var_447_bool = 0;
	var_0_bool = var_438_object;
	var_448_bool = 0; var_449_object = Obj(); var_450_float = 0;
	var_438_object = var_449_object;
	func_2070(var_448_bool, var_449_object, (float)70.0);
	var_451_bool = var_448_bool == 0; //@nz
	if(var_451_bool != 0) {
		var_437_int = -2;
		return 8;
	}
	CreateDialog(var_444_object);
	var_452_int = 0;
	func_2471(var_452_int);
	@@var_444_object:SetNPCName(var_452_int);
	var_453_int = 0;
	func_2469(var_453_int);
	@@var_444_object:SetNPCDescription(var_453_int);
	var_454_string = "";
	func_2473(var_454_string);
	@@var_444_object:SetPhoto(var_454_string);
	var_455_string = "";
	func_2475(var_455_string);
	@@var_444_object:SetPhoto2(var_455_string);
	var_456_int = 0;
	func_2637(var_456_int);
	@@var_444_object:SetPlayerName(var_456_int);
	IsOverrideActive(var_445_bool);
	var_457_bool = var_445_bool;
	if(var_457_bool != 0) {
		var_437_int = -2;
		return 8;
	}
	DoDialog(var_444_object);
	var_458_bool = 0; var_459_object = Obj();
	func_2409(Obj());
	var_460_object = var_459_object;
	func_2157(var_458_bool, var_459_object);
	var_461_object = Obj(); var_462_object = Obj();
	var_438_object = var_461_object;
	var_444_object = var_462_object;
	TaskCall(6);
	func_658(var_463_object, var_464_object, var_465_string, var_466_bool, var_461_object, var_462_object);
	TaskReturn();
	@@var_444_object:IsDialogEnd(var_447_bool);
	
Label_640:
	var_503_bool = var_447_bool == 0; //@nz
	if(var_503_bool != 0) {
		sync();
		@@var_444_object:IsDialogEnd(var_447_bool);
		goto Label_640;
	}
	var_438_object = Obj();
	func_2139();
	StopDialog(var_444_object);
	@@var_444_object:GetReturnValue((int)-1);
	var_446_int = var_437_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2372(var_271_string, var_272_bool)
{
	var_275_bool = 0; var_276_float = 0; var_277_float = 0; var_278_bool = 0; var_279_float = 0; var_280_float = 0;
	lshHasAnimation(var_278_bool, var_271_string);
	var_281_bool = var_278_bool;
	if(var_281_bool != 0) {
		lshGetAnimTimes(var_271_string, var_279_float, var_280_float);
		lshPlayAnimation(var_279_float, var_280_float, var_272_bool);
	} else {
		var_283_int = "Can't find lsh animation : " + var_271_string;
		Trace(var_283_int);
	}
	return 6;
	
}


func_1611(var_0_bool, var_1_object, var_2_object, var_3_object, var_557_object, var_558_object)
{
	var_0_bool = var_558_object;
	var_1_object = var_557_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_564_string = "";
		func_1674(var_558_object, "Neutral");
		@@@var_0_bool:SetMessage((int)542099);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)542100, (int)44405, (int)44402);
		@@@var_0_bool:AddReply((int)542101, (int)-1, (int)44403);
		@@@var_0_bool:AddReply((int)542102, (int)-1, (int)44404);
		goto Label_1644;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x64f";
	}
Label_1644:
	var_582_bool = 0;
	func_2477(var_582_bool);
	if(var_582_bool != 0) {

	Label_1648:
		lshWaitForAnimEnd();
		var_583_object = var_3_object;
		if(var_583_object != 0) {
		} else {
			var_584_string = "";
			var_584_string = var_2_object;
			func_2356(var_584_string);
			goto Label_1648;
	}
		PlayAnimation("all", "idle");

	Label_1663:
		WaitForAnimEnd();
		var_587_object = var_3_object;
		if(var_587_object != 0) {
			goto Label_1673;
		}
		PlayAnimation("all", "idle");
		goto Label_1663;
	}
	goto Label_1673;
	
Label_1673:
	return 0;
	
}


func_2637(var_161_int)
{
	var_162_int = 0; var_163_int = 0;
	GetVariable("branch", var_163_int);
	var_166_bool = var_163_int == (int)0;
	if(var_166_bool != 0) {
		var_161_int = 1;
		return 2;
	EMIT "GOTO 0xa5c";
	}
	var_168_bool = var_163_int == (int)1;
	if(var_168_bool != 0) {
		var_161_int = 2;
		return 2;
	}
	var_161_int = 3;
	return 2;
}


func_2387(var_204_bool, var_205_string)
{
	var_206_bool = 0; var_207_bool = 0;
	var_208_bool = 0;
	func_2477(var_208_bool);
	if(var_208_bool != 0) {
		lshHasSpeech(var_207_bool, var_205_string);
		var_209_bool = var_207_bool;
		if(var_209_bool != 0) {
			lshPlaySpeech(var_205_string);
			var_204_bool = 1;
			return 2;
		}
	}
	var_204_bool = 0;
	return 2;
}


func_2139()
{
	var_311_bool = 0; var_312_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_314_bool = 0;
	func_2477(var_314_bool);
	if(var_314_bool != 0) {
	} else {
		HasAnimationTrack(var_312_bool, "head");
		var_316_bool = var_312_bool;
		if(var_316_bool == 0) goto Label_2156;
		UnlookAsync("head");
	}
Label_2156:
	return 2;
	
}


func_2654(var_50_object, var_326_object, var_439_object, var_535_object)
{
	var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_int = 0;
	GetVariable("tr_andrei", var_53_int);
	var_56_int = 0;
	func_2430(var_56_int);
	var_62_bool = var_53_int != var_56_int;
	if(var_62_bool != 0) {
		func_2593();
		var_95_int = 0;
		func_2430(var_95_int);
		SetVariable("tr_andrei", var_95_int);
	}
	GetVariable("mt_andrei", var_54_int);
	var_97_bool = var_54_int == 0; //@nz
	if(var_97_bool != 0) {
		var_98_int = 0; var_99_object = Obj();
		var_50_object = var_99_object;
		TaskCall(3);
		func_351(var_100_object, var_98_int, var_99_object);
		TaskReturn();
		SetVariable("mt_andrei", (int)1);
	}
	var_320_bool = 0; var_321_int = 0;
	func_2439(var_320_bool, (int)2);
	if(var_320_bool != 0) {
		var_324_int = 0; var_325_object = Obj();
		var_50_object = var_325_object;
		TaskCall(1);
		func_40(var_326_object, var_324_int, var_325_object);
		TaskReturn();
		var_391_bool = (int)1000 == var_326_object;
		if(var_391_bool != 0) {
			var_392_bool = 0; var_393_object = Obj();
			var_50_object = var_393_object;
			func_2295(var_392_bool, var_393_object);
			var_424_bool = var_392_bool == 0; //@nz
			if(var_424_bool != 0) {
				return 4;
			}
			var_425_object = Obj();
			var_50_object = var_425_object;
			TaskCall(0);
			func_0(var_425_object);
			TaskReturn();
			var_50_object = Obj();
			func_2351();
		}
		return 4;
	}
	var_434_bool = 0; var_435_int = 0;
	func_2439(var_434_bool, (int)5);
	if(var_434_bool != 0) {
		var_437_int = 0; var_438_object = Obj();
		var_50_object = var_438_object;
		TaskCall(5);
		func_577(var_439_object, var_437_int, var_438_object);
		TaskReturn();
		var_505_bool = (int)1000 == var_439_object;
		if(var_505_bool != 0) {
			var_506_bool = 0; var_507_object = Obj();
			var_50_object = var_507_object;
			func_2295(var_506_bool, var_507_object);
			var_508_bool = var_506_bool == 0; //@nz
			if(var_508_bool != 0) {
				return 4;
			}
			var_509_object = Obj();
			var_50_object = var_509_object;
			TaskCall(0);
			func_0(var_509_object);
			TaskReturn();
			var_50_object = Obj();
			func_2351();
		}
		return 4;
	}
	var_512_bool = 0;
	var_512_bool = 1;
	var_513_bool = 0;
	var_513_bool = 1;
	var_514_bool = 0;
	var_514_bool = 1;
	var_515_bool = 0;
	var_515_bool = 1;
	var_516_bool = 0;
	var_516_bool = 1;
	var_517_bool = 0;
	var_517_bool = 1;
	var_518_bool = 0; var_519_int = 0;
	func_2439(var_518_bool, (int)3);
	if(var_518_bool != 1) {
		var_520_bool = 0; var_521_int = 0;
		func_2439(var_520_bool, (int)4);
		if(var_520_bool != 1) {
			var_517_bool = 0;
		}
	}
	if(var_517_bool != 1) {
		var_522_bool = 0; var_523_int = 0;
		func_2439(var_522_bool, (int)6);
		if(var_522_bool != 1) {
			var_516_bool = 0;
		}
	}
	if(var_516_bool != 1) {
		var_524_bool = 0; var_525_int = 0;
		func_2439(var_524_bool, (int)7);
		if(var_524_bool != 1) {
			var_515_bool = 0;
		}
	}
	if(var_515_bool != 1) {
		var_526_bool = 0; var_527_int = 0;
		func_2439(var_526_bool, (int)8);
		if(var_526_bool != 1) {
			var_514_bool = 0;
		}
	}
	if(var_514_bool != 1) {
		var_528_bool = 0; var_529_int = 0;
		func_2439(var_528_bool, (int)9);
		if(var_528_bool != 1) {
			var_513_bool = 0;
		}
	}
	if(var_513_bool != 1) {
		var_530_bool = 0; var_531_int = 0;
		func_2439(var_530_bool, (int)10);
		if(var_530_bool != 1) {
			var_512_bool = 0;
		}
	}
	if(var_512_bool != 0) {
		var_533_int = 0; var_534_object = Obj();
		var_50_object = var_534_object;
		TaskCall(11);
		func_1530(var_535_object, var_533_int, var_534_object);
		TaskReturn();
		var_592_bool = (int)1000 == var_535_object;
		if(var_592_bool != 0) {
			var_593_bool = 0; var_594_object = Obj();
			var_50_object = var_594_object;
			func_2295(var_593_bool, var_594_object);
			var_595_bool = var_593_bool == 0; //@nz
			if(var_595_bool != 0) {
				return 4;
			}
			var_596_object = Obj();
			var_50_object = var_596_object;
			TaskCall(0);
			func_0(var_596_object);
			TaskReturn();
			var_50_object = Obj();
			func_2351();
		}
		return 4;
	}
	var_599_bool = 0; var_600_int = 0;
	func_2439(var_599_bool, (int)12);
	if(var_599_bool != 0) {
		var_601_int = 0; var_602_object = Obj();
		var_50_object = var_602_object;
		TaskCall(7);
		func_1068(var_603_object, var_601_int, var_602_object);
		TaskReturn();
		return 4;
	}
	var_660_int = 0; var_661_object = Obj();
	var_50_object = var_661_object;
	TaskCall(9);
	func_1327(var_662_object, var_660_int, var_661_object);
	TaskReturn();
	return 4;
}


func_351(var_0_bool, var_98_int, var_99_object)
{
	var_101_object = Obj(); var_102_bool = 0; var_103_int = 0; var_104_bool = 0; var_105_object = Obj(); var_106_bool = 0; var_107_int = 0; var_108_bool = 0;
	var_0_bool = var_99_object;
	var_109_bool = 0; var_110_object = Obj(); var_111_float = 0;
	var_99_object = var_110_object;
	func_2070(var_109_bool, var_110_object, (float)70.0);
	var_156_bool = var_109_bool == 0; //@nz
	if(var_156_bool != 0) {
		var_98_int = -2;
		return 8;
	}
	CreateDialog(var_105_object);
	var_157_int = 0;
	func_2471(var_157_int);
	@@var_105_object:SetNPCName(var_157_int);
	var_158_int = 0;
	func_2469(var_158_int);
	@@var_105_object:SetNPCDescription(var_158_int);
	var_159_string = "";
	func_2473(var_159_string);
	@@var_105_object:SetPhoto(var_159_string);
	var_160_string = "";
	func_2475(var_160_string);
	@@var_105_object:SetPhoto2(var_160_string);
	var_161_int = 0;
	func_2637(var_161_int);
	@@var_105_object:SetPlayerName(var_161_int);
	IsOverrideActive(var_106_bool);
	var_169_bool = var_106_bool;
	if(var_169_bool != 0) {
		var_98_int = -2;
		return 8;
	}
	DoDialog(var_105_object);
	var_170_bool = 0; var_171_object = Obj();
	func_2409(Obj());
	var_172_object = var_171_object;
	func_2157(var_170_bool, var_171_object);
	var_260_object = Obj(); var_261_object = Obj();
	var_99_object = var_260_object;
	var_105_object = var_261_object;
	TaskCall(4);
	func_432(var_262_object, var_263_object, var_264_string, var_265_bool, var_260_object, var_261_object);
	TaskReturn();
	@@var_105_object:IsDialogEnd(var_108_bool);
	
Label_414:
	var_309_bool = var_108_bool == 0; //@nz
	if(var_309_bool != 0) {
		sync();
		@@var_105_object:IsDialogEnd(var_108_bool);
		goto Label_414;
	}
	var_99_object = Obj();
	func_2139();
	StopDialog(var_105_object);
	@@var_105_object:GetReturnValue((int)-1);
	var_107_int = var_98_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2402()
{
	var_35_bool = 0;
	func_2477(var_35_bool);
	if(var_35_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2409(var_172_object)
{
	var_173_object = Obj(); var_174_object = Obj();
	self(var_174_object);
	var_174_object = var_172_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2157(var_170_bool, var_171_object)
{
	var_175_int = 0; var_176_int = 0; var_177_int = 0; var_178_int = 0;
	GetVariable("voice_common", var_177_int);
	var_180_int = var_177_int;
	if(var_180_int != 0) {
		var_181_bool = 0; var_182_object = Obj();
		var_171_object = var_182_object;
		func_2215(var_181_bool, var_182_object);
		var_211_bool = var_181_bool == 0; //@nz
		if(var_211_bool != 0) {
			var_212_bool = 0; var_213_object = Obj();
			var_171_object = var_213_object;
			func_2252(var_212_bool, var_213_object);
			var_242_bool = var_212_bool == 0; //@nz
			if(var_242_bool != 0) {
				var_170_bool = 0;
				return 4;
			}
		}
		irand(var_178_int, (int)2);
		var_244_int = var_178_int;
		if(var_244_int != 0) {
			var_247_int = var_177_int + (int)1;
			var_249_int = var_247_int % (int)3;
			SetVariable("voice_common", var_249_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_252_bool = 0; var_253_object = Obj();
		var_171_object = var_253_object;
		func_2252(var_252_bool, var_253_object);
		var_254_bool = var_252_bool == 0; //@nz
		if(var_254_bool != 0) {
			var_255_bool = 0; var_256_object = Obj();
			var_171_object = var_256_object;
			func_2215(var_255_bool, var_256_object);
			var_257_bool = var_255_bool == 0; //@nz
			if(var_257_bool != 0) {
				var_170_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_2213;
	
Label_2213:
	var_170_bool = 1;
	return 4;
	
}


func_2415(var_136_cvector, var_137_cvector)
{
	var_139_float = 0; var_140_float = 0;
	var_141_int = var_137_cvector | var_137_cvector;
	var_140_float = sqrt(var_141_int);
	var_142_float = 9.999999974752427e-07;
	var_143_bool = var_140_float < var_142_float;
	if(var_143_bool != 0) {
		var_136_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_136_cvector = var_137_cvector / var_140_float;
	return 2;
}


func_121(var_0_bool, var_1_object, var_2_object, var_3_object, var_348_object, var_349_object)
{
	var_0_bool = var_349_object;
	var_1_object = var_348_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_355_string = "";
		func_189(var_349_object, "Neutral");
		@@@var_0_bool:SetMessage((int)525362);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)525363, (int)-1, (int)26731);
		var_367_bool = 0; var_368_object = Obj();
		var_368_object = var_1_object;
		func_2502(var_368_object);
		if(var_367_bool != 0) {
			@@@var_0_bool:AddReply((int)525364, (int)26733, (int)26732);
		}
		@@@var_0_bool:AddReply((int)525368, (int)-1, (int)26736);
		goto Label_159;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x7d";
	}
Label_159:
	var_381_bool = 0;
	func_2477(var_381_bool);
	if(var_381_bool != 0) {

	Label_163:
		lshWaitForAnimEnd();
		var_382_object = var_3_object;
		if(var_382_object != 0) {
		} else {
			var_383_string = "";
			var_383_string = var_2_object;
			func_2356(var_383_string);
			goto Label_163;
	}
		PlayAnimation("all", "idle");

	Label_178:
		WaitForAnimEnd();
		var_386_object = var_3_object;
		if(var_386_object != 0) {
			goto Label_188;
		}
		PlayAnimation("all", "idle");
		goto Label_178;
	}
	goto Label_188;
	
Label_188:
	return 0;
	
}


func_2425(var_369_int, var_370_string)
{
	var_371_int = 0; var_372_int = 0;
	GetVariable(var_370_string, var_372_int);
	var_372_int = var_369_int;
	return 2;
}


func_1149(var_0_bool, var_1_object, var_2_object, var_3_object, var_625_object, var_626_object)
{
	var_0_bool = var_626_object;
	var_1_object = var_625_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_632_string = "";
		func_1212(var_626_object, "Neutral");
		@@@var_0_bool:SetMessage((int)535231);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)535232, (int)36953, (int)36907);
		@@@var_0_bool:AddReply((int)535233, (int)-1, (int)36908);
		@@@var_0_bool:AddReply((int)535280, (int)-1, (int)36956);
		goto Label_1182;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x481";
	}
Label_1182:
	var_650_bool = 0;
	func_2477(var_650_bool);
	if(var_650_bool != 0) {

	Label_1186:
		lshWaitForAnimEnd();
		var_651_object = var_3_object;
		if(var_651_object != 0) {
		} else {
			var_652_string = "";
			var_652_string = var_2_object;
			func_2356(var_652_string);
			goto Label_1186;
	}
		PlayAnimation("all", "idle");

	Label_1201:
		WaitForAnimEnd();
		var_655_object = var_3_object;
		if(var_655_object != 0) {
			goto Label_1211;
		}
		PlayAnimation("all", "idle");
		goto Label_1201;
	}
	goto Label_1211;
	
Label_1211:
	return 0;
	
}


func_2430(var_56_int)
{
	var_57_float = 0; var_58_float = 0;
	GetGameTime(var_58_float);
	var_60_int = 0;
	var_60_int = var_58_float / (int)24;
	var_56_int = (int)1 + var_60_int;
	return 2;
}


func_1408(var_0_bool, var_1_object, var_2_object, var_3_object, var_684_object, var_685_object)
{
	var_0_bool = var_685_object;
	var_1_object = var_684_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_691_string = "";
		func_1466(var_685_object, "Neutral");
		@@@var_0_bool:SetMessage((int)540545);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)540546, (int)-1, (int)42555);
		@@@var_0_bool:AddReply((int)540798, (int)-1, (int)42847);
		goto Label_1436;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x584";
	}
Label_1436:
	var_706_bool = 0;
	func_2477(var_706_bool);
	if(var_706_bool != 0) {

	Label_1440:
		lshWaitForAnimEnd();
		var_707_object = var_3_object;
		if(var_707_object != 0) {
		} else {
			var_708_string = "";
			var_708_string = var_2_object;
			func_2356(var_708_string);
			goto Label_1440;
	}
		PlayAnimation("all", "idle");

	Label_1455:
		WaitForAnimEnd();
		var_711_object = var_3_object;
		if(var_711_object != 0) {
			goto Label_1465;
		}
		PlayAnimation("all", "idle");
		goto Label_1455;
	}
	goto Label_1465;
	
Label_1465:
	return 0;
	
}


func_2439(var_320_bool, var_321_int)
{
	var_322_int = 0;
	func_2430(var_322_int);
	var_320_bool = var_322_int == var_321_int;
	return 0;
}


func_1674(var_2_object, var_564_string)
{
	var_565_bool = 0;
	func_2477(var_565_bool);
	var_566_bool = var_565_bool == 0; //@nz
	if(var_566_bool != 0) {
		return 0;
	}
	var_567_bool = var_564_string == var_2_object;
	if(var_567_bool != 0) {
		return 0;
	}
	var_568_string = ""; var_569_bool = 0;
	var_564_string = var_568_string;
	var_571_bool = var_564_string == "";
	if(var_571_bool != 0) {
		var_569_bool = 0;
	} else {
		var_569_bool = 1;
	}
	func_2372(var_568_string, var_569_bool);
	var_2_object = var_564_string;
	return 0;
	
}


func_2445(var_56_string, var_57_int)
{
	var_58_string = ""; var_59_string = "";
	var_60_int = var_57_int;
	if(var_60_int != 0) {
		"idle" = "idle" + var_57_int;
	}
	var_59_string = var_56_string;
	return 2;
}


func_658(var_0_bool, var_1_object, var_2_object, var_3_object, var_461_object, var_462_object)
{
	var_0_bool = var_462_object;
	var_1_object = var_461_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_468_string = "";
		func_731(var_462_object, "Grin");
		@@@var_0_bool:SetMessage((int)525919);
		@@@var_0_bool:ClearReplies();
		var_477_bool = 0; var_478_object = Obj();
		var_478_object = var_1_object;
		func_2514(var_478_object);
		if(var_477_bool != 0) {
			@@@var_0_bool:AddReply((int)525920, (int)42995, (int)27212);
		}
		@@@var_0_bool:AddReply((int)529685, (int)-1, (int)31148);
		@@@var_0_bool:AddReply((int)525923, (int)-1, (int)27215);
		@@@var_0_bool:AddReply((int)529057, (int)-1, (int)30499);
		goto Label_701;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x296";
	}
Label_701:
	var_495_bool = 0;
	func_2477(var_495_bool);
	if(var_495_bool != 0) {

	Label_705:
		lshWaitForAnimEnd();
		var_496_object = var_3_object;
		if(var_496_object != 0) {
		} else {
			var_497_string = "";
			var_497_string = var_2_object;
			func_2356(var_497_string);
			goto Label_705;
	}
		PlayAnimation("all", "idle");

	Label_720:
		WaitForAnimEnd();
		var_500_object = var_3_object;
		if(var_500_object != 0) {
			goto Label_730;
		}
		PlayAnimation("all", "idle");
		goto Label_720;
	}
	goto Label_730;
	
Label_730:
	return 0;
	
}


func_2452(var_50_int)
{
	var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0;
	var_53_int = 0;
	
Label_2454:
	var_56_string = ""; var_57_int = 0;
	var_53_int = var_57_int;
	func_2445(var_56_string, var_57_int);
	HasAnimation(var_54_bool, "all", var_56_string);
	var_61_bool = var_54_bool == 0; //@nz
	if(var_61_bool != 0) {
	} else {
		var_53_int = var_53_int + (int)1;
		goto Label_2454;
	}
	var_53_int = var_50_int;
	return 4;
	
}


func_2469(var_158_int)
{
	var_158_int = 515529;
	return 0;
}


func_2471(var_157_int)
{
	var_157_int = 502855;
	return 0;
}


func_2215(var_181_bool, var_182_object)
{
	var_183_string = ""; var_184_int = 0; var_185_bool = 0; var_186_int = 0; var_187_string = ""; var_188_string = ""; var_189_int = 0; var_190_bool = 0; var_191_int = 0; var_192_string = "";
	var_188_string = "c";
	var_189_int = 0;
	
Label_2218:
	if((int)1 != 0) {
		var_195_int = var_189_int + (int)1;
		var_196_int = var_188_string + var_195_int;
		@@var_182_object:HasProperty(var_196_int, var_190_bool);
		var_197_bool = var_190_bool == 0; //@nz
		if(var_197_bool != 0) {
		} else {
			var_189_int = var_189_int + (int)1;
			goto Label_2218;
		}
	}
	var_198_bool = var_189_int == 0; //@nz
	if(var_198_bool != 0) {
		var_181_bool = 0;
		return 10;
	}
	var_191_int = 0;
	var_200_bool = var_189_int > (int)1;
	if(var_200_bool != 0) {
		irand(var_191_int, var_189_int);
	}
	var_202_int = var_191_int + (int)1;
	var_203_int = var_188_string + var_202_int;
	@@var_182_object:GetProperty(var_203_int, var_192_string);
	var_204_bool = 0; var_205_string = "";
	var_192_string = var_205_string;
	func_2387(var_204_bool, var_205_string);
	var_204_bool = var_181_bool;
	return 10;
	
}


func_2473(var_159_string)
{
	var_159_string = "ui/NPC_Andrei.png";
	return 0;
}


func_1962()
{
	var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_int = 0; var_47_bool = 0;
	WaitForAnimEnd();
	var_48_bool = 0;
	func_2065(var_48_bool);
	var_49_bool = var_48_bool == 0; //@nz
	if(var_49_bool != 0) {
		return 12;
	}
	func_2452((int)0);
	var_50_int = var_42_int;
	var_43_int = 0;
	
Label_1976:
	var_63_bool = 0;
	var_63_bool = 0;
	var_65_bool = var_43_int < (int)5;
	if(var_65_bool != 0) {
		var_66_bool = 0;
		func_2065(var_66_bool);
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
				func_2445(var_77_string, var_78_int);
				PlayAnimation("all", var_77_string);
				WaitForAnimEnd(var_47_bool);
				var_79_bool = var_47_bool == 0; //@nz
				if(var_79_bool == 0) goto Label_2017;
				goto Label_2028;
		}
		Label_2017:
			var_70_bool = 0;
			func_2031(var_70_bool);
			var_71_bool = var_70_bool == 0; //@nz
			if(var_71_bool != 0) {
				goto Label_2028;
			}
			ResetAAS();
			var_43_int = var_43_int + (int)1;
			goto Label_1976;

		}
	}
Label_2028:
	ResetAAS();
	return 12;
	
}


func_2475(var_160_string)
{
	var_160_string = "ui/NPC_Andrei_b.png";
	return 0;
}


func_2477(var_152_bool)
{
	var_152_bool = 1;
	return 0;
}


func_2479()
{
	SetVariable("k2q04", (int)3);
	func_2526();
	return 0;
}


func_432(var_0_bool, var_1_object, var_2_object, var_3_object, var_260_object, var_261_object)
{
	var_0_bool = var_261_object;
	var_1_object = var_260_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_267_string = "";
		func_490(var_261_object, "Neutral");
		@@@var_0_bool:SetMessage((int)525462);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)529295, (int)30750, (int)30749);
		@@@var_0_bool:AddReply((int)525463, (int)-1, (int)26819);
		goto Label_460;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1b4";
	}
Label_460:
	var_291_bool = 0;
	func_2477(var_291_bool);
	if(var_291_bool != 0) {

	Label_464:
		lshWaitForAnimEnd();
		var_292_object = var_3_object;
		if(var_292_object != 0) {
		} else {
			var_293_string = "";
			var_293_string = var_2_object;
			func_2356(var_293_string);
			goto Label_464;
	}
		PlayAnimation("all", "idle");

	Label_479:
		WaitForAnimEnd();
		var_306_object = var_3_object;
		if(var_306_object != 0) {
			goto Label_489;
		}
		PlayAnimation("all", "idle");
		goto Label_479;
	}
	goto Label_489;
	
Label_489:
	return 0;
	
}


func_2488()
{
	SetVariable("k5q02", (int)5);
	func_2539();
	return 0;
}


func_1466(var_2_object, var_691_string)
{
	var_692_bool = 0;
	func_2477(var_692_bool);
	var_693_bool = var_692_bool == 0; //@nz
	if(var_693_bool != 0) {
		return 0;
	}
	var_694_bool = var_691_string == var_2_object;
	if(var_694_bool != 0) {
		return 0;
	}
	var_695_string = ""; var_696_bool = 0;
	var_691_string = var_695_string;
	var_698_bool = var_691_string == "";
	if(var_698_bool != 0) {
		var_696_bool = 0;
	} else {
		var_696_bool = 1;
	}
	func_2372(var_695_string, var_696_bool);
	var_2_object = var_691_string;
	return 0;
	
}


func_1212(var_2_object, var_632_string)
{
	var_633_bool = 0;
	func_2477(var_633_bool);
	var_634_bool = var_633_bool == 0; //@nz
	if(var_634_bool != 0) {
		return 0;
	}
	var_635_bool = var_632_string == var_2_object;
	if(var_635_bool != 0) {
		return 0;
	}
	var_636_string = ""; var_637_bool = 0;
	var_632_string = var_636_string;
	var_639_bool = var_632_string == "";
	if(var_639_bool != 0) {
		var_637_bool = 0;
	} else {
		var_637_bool = 1;
	}
	func_2372(var_636_string, var_637_bool);
	var_2_object = var_632_string;
	return 0;
	
}


func_189(var_2_object, var_355_string)
{
	var_356_bool = 0;
	func_2477(var_356_bool);
	var_357_bool = var_356_bool == 0; //@nz
	if(var_357_bool != 0) {
		return 0;
	}
	var_358_bool = var_355_string == var_2_object;
	if(var_358_bool != 0) {
		return 0;
	}
	var_359_string = ""; var_360_bool = 0;
	var_355_string = var_359_string;
	var_362_bool = var_355_string == "";
	if(var_362_bool != 0) {
		var_360_bool = 0;
	} else {
		var_360_bool = 1;
	}
	func_2372(var_359_string, var_360_bool);
	var_2_object = var_355_string;
	return 0;
	
}


func_2497(var_39_object)
{
	@@var_39_object:SetReturnValue((int)1000);
	return 0;
}


func_2502(var_367_bool)
{
	var_369_int = 0; var_370_string = "";
	func_2425(var_369_int, "k2q04");
	var_374_bool = var_369_int == (int)2;
	if(var_374_bool != 0) {
		var_367_bool = 1;
		return 0;
	}
	var_367_bool = 0;
	return 0;
}


func_2252(var_212_bool, var_213_object)
{
	var_214_string = ""; var_215_int = 0; var_216_bool = 0; var_217_int = 0; var_218_string = ""; var_219_string = ""; var_220_int = 0; var_221_bool = 0; var_222_int = 0; var_223_string = "";
	var_225_int = 0;
	func_2430(var_225_int);
	var_226_int = "d" + var_225_int;
	var_219_string = var_226_int + "m";
	var_220_int = 0;
	
Label_2261:
	if((int)1 != 0) {
		var_230_int = var_220_int + (int)1;
		var_231_int = var_219_string + var_230_int;
		@@var_213_object:HasProperty(var_231_int, var_221_bool);
		var_232_bool = var_221_bool == 0; //@nz
		if(var_232_bool != 0) {
		} else {
			var_220_int = var_220_int + (int)1;
			goto Label_2261;
		}
	}
	var_233_bool = var_220_int == 0; //@nz
	if(var_233_bool != 0) {
		var_212_bool = 0;
		return 10;
	}
	var_222_int = 0;
	var_235_bool = var_220_int > (int)1;
	if(var_235_bool != 0) {
		irand(var_222_int, var_220_int);
	}
	var_237_int = var_222_int + (int)1;
	var_238_int = var_219_string + var_237_int;
	@@var_213_object:GetProperty(var_238_int, var_223_string);
	var_239_bool = 0; var_240_string = "";
	var_223_string = var_240_string;
	func_2387(var_239_bool, var_240_string);
	var_239_bool = var_212_bool;
	return 10;
	
}


func_2514(var_477_bool)
{
	var_479_int = 0; var_480_string = "";
	func_2425(var_479_int, "k5q02");
	var_482_bool = var_479_int == (int)4;
	if(var_482_bool != 0) {
		var_477_bool = 1;
		return 0;
	}
	var_477_bool = 0;
	return 0;
}


func_731(var_2_object, var_468_string)
{
	var_469_bool = 0;
	func_2477(var_469_bool);
	var_470_bool = var_469_bool == 0; //@nz
	if(var_470_bool != 0) {
		return 0;
	}
	var_471_bool = var_468_string == var_2_object;
	if(var_471_bool != 0) {
		return 0;
	}
	var_472_string = ""; var_473_bool = 0;
	var_468_string = var_472_string;
	var_475_bool = var_468_string == "";
	if(var_475_bool != 0) {
		var_473_bool = 0;
	} else {
		var_473_bool = 1;
	}
	func_2372(var_472_string, var_473_bool);
	var_2_object = var_468_string;
	return 0;
	
}


func_2526()
{
	var_47_object = Obj(); var_48_object = Obj();
	CreateDiaryEntry(var_48_object, (int)512, (int)2, (int)529711);
	var_52_bool = 0; var_53_object = Obj(); var_54_int = 0;
	var_48_object = var_53_object;
	func_2565(var_52_bool, var_53_object, (int)507);
	return 2;
}
EMIT "Stack[-1] = 0";


func_490(var_2_object, var_267_string)
{
	var_268_bool = 0;
	func_2477(var_268_bool);
	var_269_bool = var_268_bool == 0; //@nz
	if(var_269_bool != 0) {
		return 0;
	}
	var_270_bool = var_267_string == var_2_object;
	if(var_270_bool != 0) {
		return 0;
	}
	var_271_string = ""; var_272_bool = 0;
	var_267_string = var_271_string;
	var_274_bool = var_267_string == "";
	if(var_274_bool != 0) {
		var_272_bool = 0;
	} else {
		var_272_bool = 1;
	}
	func_2372(var_271_string, var_272_bool);
	var_2_object = var_267_string;
	return 0;
	
}


func_2539()
{
	var_42_object = Obj(); var_43_object = Obj();
	CreateDiaryEntry(var_43_object, (int)402, (int)2, (int)525940);
	var_47_bool = 0; var_48_object = Obj(); var_49_int = 0;
	var_43_object = var_48_object;
	func_2565(var_47_bool, var_48_object, (int)397);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2031(var_70_bool)
{
	var_70_bool = 1;
	return 0;
}


func_2033()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_2038(var_47_float, var_48_object)
{
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0);
	GetPosition(var_52_cvector);
	@@var_48_object:GetPosition(var_53_cvector);
	var_54_cvector = var_53_cvector - var_52_cvector;
	var_47_float = var_54_cvector | var_54_cvector;
	return 6;
}


func_2295(var_392_bool, var_393_object)
{
	var_394_bool = 0; var_395_object = Obj(); var_396_float = 0;
	var_393_object = var_395_object;
	func_2303(var_394_bool, var_395_object, (float)70);
	var_394_bool = var_392_bool;
	return 0;
}


func_2552(var_56_object)
{
	var_57_object = Obj(); var_58_object = Obj();
	GetDiaryRoot(var_58_object);
	var_59_bool = var_58_object == 0; //@nz
	if(var_59_bool != 0) {
		Trace("Can't retrieve diary root");
		var_56_object = 0;
		return 2;
	}
	var_58_object = var_56_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1786(var_0_bool)
{
	var_32_bool = 0;
	func_2065(var_32_bool);
	var_35_bool = var_32_bool == 0; //@nz
	if(var_35_bool != 0) {
		Hold();
	}
	GetDirection(var_0_bool);
	
Label_1795:
	func_1962();
	goto Label_1795;
}
EMIT "Return(); Pop(0)";


func_2046(var_40_bool, var_41_cvector)
{
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0;
	GetPosition(var_45_cvector);
	var_46_cvector = var_41_cvector - var_45_cvector;
	var_48_float = GetByIndex(var_46_cvector, 0);
	var_49_float = GetByIndex(var_46_cvector, 2);
	Rotate(var_48_float, var_49_float, var_47_bool);
	var_47_bool = var_40_bool;
	return 6;
}


func_2303(var_394_bool, var_395_object, var_396_float)
{
	var_397_float = 0; var_398_cvector = CVector(0,0,0); var_399_cvector = CVector(0,0,0); var_400_cvector = CVector(0,0,0); var_401_cvector = CVector(0,0,0); var_402_cvector = CVector(0,0,0); var_403_cvector = CVector(0,0,0); var_404_bool = 0; var_405_float = 0; var_406_cvector = CVector(0,0,0); var_407_cvector = CVector(0,0,0); var_408_cvector = CVector(0,0,0); var_409_cvector = CVector(0,0,0); var_410_cvector = CVector(0,0,0); var_411_cvector = CVector(0,0,0); var_412_bool = 0;
	@@var_395_object:GetPosition(var_406_cvector);
	@@var_395_object:GetEyesHeight(var_405_float);
	var_413_float = GetByIndex(var_406_cvector, 1);
	var_413_float = var_413_float + var_405_float;
	SetByIndex(var_406_cvector, 1) = var_413_float;
	GetPosition(var_407_cvector);
	GetEyesHeight(var_405_float);
	var_414_float = GetByIndex(var_407_cvector, 1);
	var_414_float = var_414_float + var_405_float;
	SetByIndex(var_407_cvector, 1) = var_414_float;
	var_408_cvector = var_406_cvector - var_407_cvector;
	var_415_float = GetByIndex(var_408_cvector, 1);
	SetByIndex(var_408_cvector, 1) = (float)0;
	var_416_int = var_408_cvector | var_408_cvector;
	var_417_float = sqrt(var_416_int);
	var_408_cvector = var_408_cvector / var_417_float;
	var_409_cvector = -var_408_cvector;
	var_418_float = var_408_cvector * var_396_float;
	var_410_cvector = var_418_float - CVector(0.0, 10.0, 0.0);
	var_411_cvector = var_407_cvector + var_410_cvector;
	IsOverrideActive(var_412_bool);
	var_420_bool = var_412_bool;
	if(var_420_bool != 0) {
		var_394_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_411_cvector, var_409_cvector, (bool)1);
	var_422_float = GetByIndex(var_410_cvector, 0);
	var_423_float = GetByIndex(var_410_cvector, 2);
	Rotate(var_422_float, var_423_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_394_bool = 1;
	return 16;
}


