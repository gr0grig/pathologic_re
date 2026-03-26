// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetInvItemByName/2,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Questioning|A:SetMessage|A:ClearReplies|A:AddReply|W:Neutral|W:all|W:idle|W:Suspicion|W:Doubt|W:Grin|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |A:HasItem|W:ui/NPC_Han.png|W:ui/NPC_Han_b.png|W:ood7Han1|W:d11q05|W:quest_d11_05|W:place_enemy_before|W:quest_d9_01|W:teleport_to_mnogogrannik|W:map_chertez_state|W:map_chertez_force|W:pt_map_aglaja|A:ShowMap|W:ood9Xan3|W:playsound|W:giveitem|W:d3q02|W:d3q02HanGotoMladVlad|W:pt_map_mladvlad|A:AddMark|W:ood8Han1|W:ood9Xan1|W:d9q01|W:Rifle|A:RemoveItemByType|A:SelectWeapon|W:completed|W:burah_serum|A:GetItemCountOfType|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:mt_han
// @GLOBALS: 0:object:
// @RUN_OP: 0xd85
// @RUN_TASK: 16
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc8 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x2ec vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x43e vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x605 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x91b vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa39 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc5d vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0xd5b vars=int,int
// @TASK_16: vars=cvector params=0
// @EVENT_7: op=0xdce vars=int
// @EVENT_6: op=0xdf4 vars=
// @EVENT_5: op=0xe03 vars=
// @EVENT_45: op=0xe10 vars=bool
// @EVENT_0: op=0xe1c vars=object
// @PE: 0x51,0xb2,0xc8,0x297,0x2d6,0x2ec,0x3d0,0x428,0x43e,0x55f,0x5ef,0x605,0x8cb,0x905,0x91b,0x9d6,0xa23,0xa39,0xc08,0xc47,0xc5d,0xd0b,0xd45,0xd5b,0xd85,0xdce,0xdf4,0xe10,0xff1,0x1019,0x101f,0x102d,0x1034,0x1045,0x1055,0x105b,0x1061,0x107a,0x1080,0x1086,0x1097,0x10a1,0x10ad,0x10b9,0x10c4,0x10d0,0x10dc,0x10e1,0x10ed,0x10f9,0x1105,0x1111,0x111d,0x1127

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_4020();
		var_46_bool = var_42_cvector == (int)11509;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_4195();
		}
		var_91_bool = var_42_cvector == (int)11510;
		if(var_91_bool != 0) {
			var_92_object = Obj(); var_93_object = Obj();
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_4195();
		}
		var_95_bool = var_42_cvector == (int)11505;
		if(var_95_bool != 0) {
			var_96_object = Obj(); var_97_object = Obj();
			var_96_object = var_1_object;
			var_97_object = var_0_object;
			func_4195();
		}
		var_99_bool = var_42_cvector == (int)11498;
		if(var_99_bool != 0) {
			var_100_object = Obj(); var_101_object = Obj();
			var_100_object = var_1_object;
			var_101_object = var_0_object;
			func_4195();
		}
		var_103_bool = var_41_bool == (int)11488;
		if(var_103_bool != 0) {
			var_104_bool = 0;
			var_104_bool = 0;
			var_105_bool = 0; var_106_object = Obj();
			var_106_object = var_1_object;
			func_4321(var_106_object);
			if(var_105_bool != 0) {
				var_113_bool = 0; var_114_object = Obj();
				var_114_object = var_1_object;
				func_4316(var_114_object);
				if(var_113_bool != 0) {
					var_104_bool = 1;
				}
			}
			if(var_104_bool != 0) {
				var_115_object = Obj(); var_116_object = Obj();
				var_115_object = var_1_object;
				var_116_object = var_0_object;
				func_4193();
				var_117_string = "";
				func_178(var_42_cvector, "Questioning");
				@@@var_0_object:SetMessage((int)510420);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)510421, (int)11490, (int)11489);
				@@@var_0_object:AddReply((int)534384, (int)36001, (int)35999);
				return 0;
			}
			var_141_string = "";
			func_178(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534418);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534419, (int)-1, (int)36046);
			@@@var_0_object:AddReply((int)536096, (int)-1, (int)37848);
			return 0;
		}
		var_150_bool = var_41_bool == (int)36001;
		if(var_150_bool != 0) {
			var_151_string = "";
			func_178(var_42_cvector, "Questioning");
			@@@var_0_object:SetMessage((int)534386);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534387, (int)36003, (int)36002);
			return 0;
		}
		var_157_bool = var_41_bool == (int)36003;
		if(var_157_bool != 0) {
			var_158_string = "";
			func_178(var_42_cvector, "Questioning");
			@@@var_0_object:SetMessage((int)534388);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534389, (int)36006, (int)36004);
			@@@var_0_object:AddReply((int)534390, (int)36006, (int)36005);
			return 0;
		}
		var_167_bool = var_41_bool == (int)36006;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_178(var_42_cvector, "Questioning");
			@@@var_0_object:SetMessage((int)534391);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534392, (int)36009, (int)36007);
			@@@var_0_object:AddReply((int)534393, (int)36009, (int)36008);
			return 0;
		}
		var_177_bool = var_41_bool == (int)36009;
		if(var_177_bool != 0) {
			var_178_string = "";
			func_178(var_42_cvector, "Suspicion");
			@@@var_0_object:SetMessage((int)534394);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534395, (int)36013, (int)36012);
			return 0;
		}
		var_184_bool = var_41_bool == (int)36013;
		if(var_184_bool != 0) {
			var_185_string = "";
			func_178(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534396);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534397, (int)11492, (int)36014);
			return 0;
		}
		var_191_bool = var_41_bool == (int)11490;
		if(var_191_bool != 0) {
			var_192_string = "";
			func_178(var_42_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)510422);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510423, (int)11492, (int)11491);
			@@@var_0_object:AddReply((int)534385, (int)11502, (int)36000);
			return 0;
		}
		var_201_bool = var_41_bool == (int)11492;
		if(var_201_bool != 0) {
			var_202_string = "";
			func_178(var_42_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)510424);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510425, (int)11494, (int)11493);
			return 0;
		}
		var_208_bool = var_41_bool == (int)11494;
		if(var_208_bool != 0) {
			var_209_string = "";
			func_178(var_42_cvector, "Grin");
			@@@var_0_object:SetMessage((int)510426);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510427, (int)11496, (int)11495);
			return 0;
		}
		var_215_bool = var_41_bool == (int)11496;
		if(var_215_bool != 0) {
			var_216_string = "";
			func_178(var_42_cvector, "Questioning");
			@@@var_0_object:SetMessage((int)510428);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510429, (int)11499, (int)11497);
			@@@var_0_object:AddReply((int)510430, (int)-1, (int)11498);
			return 0;
		}
		var_225_bool = var_41_bool == (int)11499;
		if(var_225_bool != 0) {
			var_226_string = "";
			func_178(var_42_cvector, "Suspicion");
			@@@var_0_object:SetMessage((int)510431);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510432, (int)11502, (int)11500);
			@@@var_0_object:AddReply((int)510433, (int)11502, (int)11501);
			return 0;
		}
		var_235_bool = var_41_bool == (int)11502;
		if(var_235_bool != 0) {
			var_236_string = "";
			func_178(var_42_cvector, "Suspicion");
			@@@var_0_object:SetMessage((int)510434);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510435, (int)11504, (int)11503);
			@@@var_0_object:AddReply((int)510437, (int)-1, (int)11505);
			return 0;
		}
		var_245_bool = var_41_bool == (int)11504;
		if(var_245_bool != 0) {
			var_246_string = "";
			func_178(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510436);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510438, (int)11508, (int)11507);
			return 0;
		}
		var_252_bool = var_41_bool == (int)11508;
		if(var_252_bool != 0) {
			var_253_string = "";
			func_178(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510439);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510440, (int)-1, (int)11509);
			@@@var_0_object:AddReply((int)510441, (int)-1, (int)11510);
			return 0;
		}
		var_3_string = true;
		var_261_bool = 0;
		func_4119(var_261_bool);
		if(var_261_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc9";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_4020();
		var_46_bool = var_42_cvector == (int)13388;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_4121();
		}
		var_52_bool = var_41_bool == (int)13387;
		if(var_52_bool != 0) {
			var_53_string = "";
			func_726(var_42_cvector, "Suspicion");
			@@@var_0_object:SetMessage((int)512232);
			@@@var_0_object:ClearReplies();
			var_71_bool = 0; var_72_object = Obj();
			var_72_object = var_1_object;
			func_4257(var_72_object);
			if(var_71_bool != 0) {
				@@@var_0_object:AddReply((int)512233, (int)13389, (int)13388);
			}
			@@@var_0_object:AddReply((int)533144, (int)-1, (int)34662);
			return 0;
		}
		var_86_bool = var_41_bool == (int)13389;
		if(var_86_bool != 0) {
			var_87_string = "";
			func_726(var_42_cvector, "Questioning");
			@@@var_0_object:SetMessage((int)512234);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512235, (int)13393, (int)13390);
			@@@var_0_object:AddReply((int)512236, (int)13393, (int)13391);
			@@@var_0_object:AddReply((int)512237, (int)13393, (int)13392);
			return 0;
		}
		var_99_bool = var_41_bool == (int)13393;
		if(var_99_bool != 0) {
			var_100_string = "";
			func_726(var_42_cvector, "Questioning");
			@@@var_0_object:SetMessage((int)512238);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535824, (int)37518, (int)37517);
			@@@var_0_object:AddReply((int)535826, (int)37518, (int)37519);
			return 0;
		}
		var_109_bool = var_41_bool == (int)37518;
		if(var_109_bool != 0) {
			var_110_string = "";
			func_726(var_42_cvector, "Questioning");
			@@@var_0_object:SetMessage((int)535825);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512240, (int)13397, (int)13396);
			return 0;
		}
		var_116_bool = var_41_bool == (int)13397;
		if(var_116_bool != 0) {
			var_117_string = "";
			func_726(var_42_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)512241);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512242, (int)-1, (int)13398);
			@@@var_0_object:AddReply((int)535827, (int)-1, (int)37521);
			return 0;
		}
		var_3_string = true;
		var_125_bool = 0;
		func_4119(var_125_bool);
		if(var_125_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x2ed";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_4020();
		var_46_bool = var_41_bool == (int)13489;
		if(var_46_bool != 0) {
			var_47_bool = 0; var_48_object = Obj();
			var_48_object = var_1_object;
			func_4333(var_48_object);
			if(var_47_bool != 0) {
				var_55_object = Obj(); var_56_object = Obj();
				var_55_object = var_1_object;
				var_56_object = var_0_object;
				func_4218();
				var_59_string = "";
				func_1064(var_42_cvector, "Grin");
				@@@var_0_object:SetMessage((int)512330);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)512331, (int)13491, (int)13490);
				@@@var_0_object:AddReply((int)512336, (int)-1, (int)13495);
				return 0;
			}
			var_83_string = "";
			func_1064(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513781);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513782, (int)-1, (int)15018);
			@@@var_0_object:AddReply((int)541839, (int)-1, (int)44056);
			return 0;
		}
		var_92_bool = var_41_bool == (int)13491;
		if(var_92_bool != 0) {
			var_93_string = "";
			func_1064(var_42_cvector, "Grin");
			@@@var_0_object:SetMessage((int)512332);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512333, (int)13493, (int)13492);
			@@@var_0_object:AddReply((int)512337, (int)13497, (int)13496);
			return 0;
		}
		var_102_bool = var_41_bool == (int)13497;
		if(var_102_bool != 0) {
			var_103_string = "";
			func_1064(var_42_cvector, "Grin");
			@@@var_0_object:SetMessage((int)512338);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512339, (int)13499, (int)13498);
			return 0;
		}
		var_109_bool = var_41_bool == (int)13499;
		if(var_109_bool != 0) {
			var_110_string = "";
			func_1064(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512340);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512341, (int)-1, (int)13500);
			@@@var_0_object:AddReply((int)512342, (int)13502, (int)13501);
			return 0;
		}
		var_119_bool = var_41_bool == (int)13502;
		if(var_119_bool != 0) {
			var_120_string = "";
			func_1064(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512343);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512344, (int)-1, (int)13503);
			return 0;
		}
		var_126_bool = var_41_bool == (int)13493;
		if(var_126_bool != 0) {
			var_127_string = "";
			func_1064(var_42_cvector, "Grin");
			@@@var_0_object:SetMessage((int)512334);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512335, (int)13504, (int)13494);
			return 0;
		}
		var_133_bool = var_41_bool == (int)13504;
		if(var_133_bool != 0) {
			var_134_string = "";
			func_1064(var_42_cvector, "Grin");
			@@@var_0_object:SetMessage((int)512345);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512346, (int)13506, (int)13505);
			return 0;
		}
		var_140_bool = var_41_bool == (int)13506;
		if(var_140_bool != 0) {
			var_141_string = "";
			func_1064(var_42_cvector, "Grin");
			@@@var_0_object:SetMessage((int)512347);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512348, (int)-1, (int)13507);
			return 0;
		}
		var_3_string = true;
		var_146_bool = 0;
		func_4119(var_146_bool);
		if(var_146_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x43f";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_4020();
		var_46_bool = var_42_cvector == (int)15289;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_4230();
		}
		var_75_bool = var_42_cvector == (int)15310;
		if(var_75_bool != 0) {
			var_76_object = Obj(); var_77_object = Obj();
			var_76_object = var_1_object;
			var_77_object = var_0_object;
			func_4187();
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_object;
			func_4239(var_81_object);
			var_86_object = Obj(); var_87_object = Obj();
			var_86_object = var_1_object;
			var_87_object = var_0_object;
			func_4141();
			var_94_object = Obj(); var_95_object = Obj();
			var_94_object = var_1_object;
			var_95_object = var_0_object;
			func_4247();
		}
		var_108_bool = var_42_cvector == (int)40764;
		if(var_108_bool != 0) {
			var_109_object = Obj(); var_110_object = Obj();
			var_109_object = var_1_object;
			var_110_object = var_0_object;
			func_4181();
		}
		var_114_bool = var_42_cvector == (int)40789;
		if(var_114_bool != 0) {
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_object;
			func_4148();
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_object;
			var_128_object = var_0_object;
			func_4165(var_128_object);
		}
		var_160_bool = var_42_cvector == (int)40790;
		if(var_160_bool != 0) {
			var_161_object = Obj(); var_162_object = Obj();
			var_161_object = var_1_object;
			var_162_object = var_0_object;
			func_4148();
			var_163_object = Obj(); var_164_object = Obj();
			var_163_object = var_1_object;
			var_164_object = var_0_object;
			func_4165(var_164_object);
		}
		var_166_bool = var_42_cvector == (int)40787;
		if(var_166_bool != 0) {
			var_167_object = Obj(); var_168_object = Obj();
			var_167_object = var_1_object;
			var_168_object = var_0_object;
			func_4148();
			var_169_object = Obj(); var_170_object = Obj();
			var_169_object = var_1_object;
			var_170_object = var_0_object;
			func_4165(var_170_object);
		}
		var_172_bool = var_41_bool == (int)15276;
		if(var_172_bool != 0) {
			var_173_bool = 0;
			var_173_bool = 0;
			var_174_bool = 0; var_175_object = Obj();
			var_175_object = var_1_object;
			func_4345(var_175_object);
			if(var_174_bool != 0) {
				var_180_bool = 0; var_181_object = Obj();
				var_181_object = var_1_object;
				func_4357(var_181_object);
				if(var_180_bool != 0) {
					var_173_bool = 1;
				}
			}
			if(var_173_bool != 0) {
				var_186_object = Obj(); var_187_object = Obj();
				var_186_object = var_1_object;
				var_187_object = var_0_object;
				func_4224();
				var_190_string = "";
				func_1519(var_42_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)514041);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)514042, (int)15278, (int)15277);
				return 0;
			}
			var_211_string = "";
			func_1519(var_42_cvector, "Suspicion");
			@@@var_0_object:SetMessage((int)514063);
			@@@var_0_object:ClearReplies();
			var_213_bool = 0;
			var_213_bool = 0;
			var_214_bool = 0; var_215_object = Obj();
			var_215_object = var_1_object;
			func_4381(var_214_bool, var_215_object);
			if(var_214_bool != 0) {
				var_223_bool = 0; var_224_object = Obj();
				var_224_object = var_1_object;
				func_4369(var_224_object);
				if(var_223_bool != 0) {
					var_213_bool = 1;
				}
			}
			if(var_213_bool != 0) {
				@@@var_0_object:AddReply((int)514068, (int)40760, (int)15305);
			}
			var_232_bool = 0;
			var_232_bool = 0;
			var_233_bool = 0; var_234_object = Obj();
			var_234_object = var_1_object;
			func_4391(var_233_bool, var_234_object);
			if(var_233_bool != 0) {
				var_245_bool = 0; var_246_object = Obj();
				var_246_object = var_1_object;
				func_4369(var_246_object);
				if(var_245_bool != 0) {
					var_232_bool = 1;
				}
			}
			if(var_232_bool != 0) {
				@@@var_0_object:AddReply((int)514069, (int)15307, (int)15306);
			}
			var_250_bool = 0;
			var_250_bool = 0;
			var_251_bool = 0; var_252_object = Obj();
			var_252_object = var_1_object;
			func_4292(var_252_object);
			if(var_251_bool != 0) {
				var_257_bool = 0; var_258_object = Obj();
				var_258_object = var_1_object;
				func_4304(var_258_object);
				if(var_257_bool != 0) {
					var_250_bool = 1;
				}
			}
			if(var_250_bool != 0) {
				@@@var_0_object:AddReply((int)538835, (int)40765, (int)40764);
			}
			@@@var_0_object:AddReply((int)514064, (int)-1, (int)15300);
			return 0;
		}
		var_270_bool = var_41_bool == (int)40765;
		if(var_270_bool != 0) {
			var_271_string = "";
			func_1519(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538836);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538837, (int)40775, (int)40766);
			@@@var_0_object:AddReply((int)538838, (int)40774, (int)40767);
			@@@var_0_object:AddReply((int)538839, (int)40769, (int)40768);
			return 0;
		}
		var_283_bool = var_41_bool == (int)40769;
		if(var_283_bool != 0) {
			var_284_string = "";
			func_1519(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538840);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538841, (int)40773, (int)40772);
			return 0;
		}
		var_290_bool = var_41_bool == (int)40773;
		if(var_290_bool != 0) {
			var_291_string = "";
			func_1519(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538842);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538847, (int)40780, (int)40779);
			return 0;
		}
		var_297_bool = var_41_bool == (int)40774;
		if(var_297_bool != 0) {
			var_298_string = "";
			func_1519(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538843);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538846, (int)40769, (int)40777);
			@@@var_0_object:AddReply((int)538849, (int)40780, (int)40781);
			return 0;
		}
		var_307_bool = var_41_bool == (int)40775;
		if(var_307_bool != 0) {
			var_308_string = "";
			func_1519(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538844);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538845, (int)40780, (int)40776);
			return 0;
		}
		var_314_bool = var_41_bool == (int)40780;
		if(var_314_bool != 0) {
			var_315_string = "";
			func_1519(var_42_cvector, "Questioning");
			@@@var_0_object:SetMessage((int)538848);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538850, (int)40783, (int)40782);
			return 0;
		}
		var_321_bool = var_41_bool == (int)40783;
		if(var_321_bool != 0) {
			var_322_string = "";
			func_1519(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538851);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538852, (int)40788, (int)40786);
			@@@var_0_object:AddReply((int)538853, (int)-1, (int)40787);
			return 0;
		}
		var_331_bool = var_41_bool == (int)40788;
		if(var_331_bool != 0) {
			var_332_string = "";
			func_1519(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538854);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538855, (int)-1, (int)40789);
			@@@var_0_object:AddReply((int)538856, (int)-1, (int)40790);
			return 0;
		}
		var_341_bool = var_41_bool == (int)15307;
		if(var_341_bool != 0) {
			var_342_string = "";
			func_1519(var_42_cvector, "Suspicion");
			@@@var_0_object:SetMessage((int)514070);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514071, (int)-1, (int)15308);
			return 0;
		}
		var_348_bool = var_41_bool == (int)40760;
		if(var_348_bool != 0) {
			var_349_string = "";
			func_1519(var_42_cvector, "Suspicion");
			@@@var_0_object:SetMessage((int)538831);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538832, (int)40762, (int)40761);
			return 0;
		}
		var_355_bool = var_41_bool == (int)40762;
		if(var_355_bool != 0) {
			var_356_string = "";
			func_1519(var_42_cvector, "Grin");
			@@@var_0_object:SetMessage((int)538833);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538834, (int)15309, (int)40763);
			return 0;
		}
		var_362_bool = var_41_bool == (int)15309;
		if(var_362_bool != 0) {
			var_363_string = "";
			func_1519(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514072);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514073, (int)-1, (int)15310);
			return 0;
		}
		var_369_bool = var_41_bool == (int)15278;
		if(var_369_bool != 0) {
			var_370_string = "";
			func_1519(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514043);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514044, (int)15280, (int)15279);
			@@@var_0_object:AddReply((int)538829, (int)15280, (int)40756);
			return 0;
		}
		var_379_bool = var_41_bool == (int)15280;
		if(var_379_bool != 0) {
			var_380_string = "";
			func_1519(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514045);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514046, (int)15282, (int)15281);
			return 0;
		}
		var_386_bool = var_41_bool == (int)15282;
		if(var_386_bool != 0) {
			var_387_string = "";
			func_1519(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514047);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514048, (int)15284, (int)15283);
			@@@var_0_object:AddReply((int)514060, (int)15297, (int)15296);
			return 0;
		}
		var_396_bool = var_41_bool == (int)15297;
		if(var_396_bool != 0) {
			var_397_string = "";
			func_1519(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514061);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514062, (int)15286, (int)15298);
			@@@var_0_object:AddReply((int)538830, (int)15286, (int)40758);
			return 0;
		}
		var_406_bool = var_41_bool == (int)15284;
		if(var_406_bool != 0) {
			var_407_string = "";
			func_1519(var_42_cvector, "Questioning");
			@@@var_0_object:SetMessage((int)514049);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514050, (int)15286, (int)15285);
			@@@var_0_object:AddReply((int)514055, (int)15291, (int)15290);
			return 0;
		}
		var_416_bool = var_41_bool == (int)15291;
		if(var_416_bool != 0) {
			var_417_string = "";
			func_1519(var_42_cvector, "Questioning");
			@@@var_0_object:SetMessage((int)514056);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514057, (int)15293, (int)15292);
			return 0;
		}
		var_423_bool = var_41_bool == (int)15293;
		if(var_423_bool != 0) {
			var_424_string = "";
			func_1519(var_42_cvector, "Questioning");
			@@@var_0_object:SetMessage((int)514058);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514059, (int)15286, (int)15294);
			return 0;
		}
		var_430_bool = var_41_bool == (int)15286;
		if(var_430_bool != 0) {
			var_431_string = "";
			func_1519(var_42_cvector, "Questioning");
			@@@var_0_object:SetMessage((int)514051);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514052, (int)15288, (int)15287);
			return 0;
		}
		var_437_bool = var_41_bool == (int)15288;
		if(var_437_bool != 0) {
			var_438_string = "";
			func_1519(var_42_cvector, "Grin");
			@@@var_0_object:SetMessage((int)514053);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514054, (int)-1, (int)15289);
			return 0;
		}
		var_3_string = true;
		var_443_bool = 0;
		func_4119(var_443_bool);
		if(var_443_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x606";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_4020();
		var_46_bool = var_41_bool == (int)19139;
		if(var_46_bool != 0) {
			var_47_string = "";
			func_2309(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518006);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518007, (int)36191, (int)19140);
			@@@var_0_object:AddReply((int)534556, (int)36189, (int)36188);
			return 0;
		}
		var_72_bool = var_41_bool == (int)36189;
		if(var_72_bool != 0) {
			var_73_string = "";
			func_2309(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534557);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534558, (int)36195, (int)36190);
			return 0;
		}
		var_79_bool = var_41_bool == (int)36195;
		if(var_79_bool != 0) {
			var_80_string = "";
			func_2309(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534562);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534563, (int)-1, (int)36196);
			@@@var_0_object:AddReply((int)534565, (int)-1, (int)36198);
			@@@var_0_object:AddReply((int)534564, (int)-1, (int)36197);
			return 0;
		}
		var_92_bool = var_41_bool == (int)36191;
		if(var_92_bool != 0) {
			var_93_string = "";
			func_2309(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534559);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534560, (int)36189, (int)36192);
			return 0;
		}
		var_3_string = true;
		var_98_bool = 0;
		func_4119(var_98_bool);
		if(var_98_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x91c";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_4020();
		var_46_bool = var_42_cvector == (int)36133;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_4127();
		}
		var_81_bool = var_42_cvector == (int)38442;
		if(var_81_bool != 0) {
			var_82_object = Obj(); var_83_object = Obj();
			var_82_object = var_1_object;
			var_83_object = var_0_object;
			func_4127();
		}
		var_85_bool = var_42_cvector == (int)41671;
		if(var_85_bool != 0) {
			var_86_object = Obj(); var_87_object = Obj();
			var_86_object = var_1_object;
			var_87_object = var_0_object;
			func_4127();
		}
		var_89_bool = var_41_bool == (int)36126;
		if(var_89_bool != 0) {
			var_90_string = "";
			func_2595(var_42_cvector, "Suspicion");
			@@@var_0_object:SetMessage((int)534481);
			@@@var_0_object:ClearReplies();
			var_108_bool = 0;
			var_108_bool = 0;
			var_109_bool = 0; var_110_object = Obj();
			var_110_object = var_1_object;
			func_4269(var_110_object);
			if(var_109_bool != 0) {
				var_117_bool = 0; var_118_object = Obj();
				var_118_object = var_1_object;
				func_4281(var_117_bool, var_118_object);
				if(var_117_bool != 0) {
					var_108_bool = 1;
				}
			}
			if(var_108_bool != 0) {
				@@@var_0_object:AddReply((int)534482, (int)38410, (int)36127);
			}
			@@@var_0_object:AddReply((int)534489, (int)-1, (int)36134);
			@@@var_0_object:AddReply((int)536587, (int)-1, (int)38409);
			return 0;
		}
		var_136_bool = var_41_bool == (int)38410;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_2595(var_42_cvector, "Suspicion");
			@@@var_0_object:SetMessage((int)536588);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536589, (int)38412, (int)38411);
			@@@var_0_object:AddReply((int)536598, (int)38421, (int)38420);
			return 0;
		}
		var_146_bool = var_41_bool == (int)38421;
		if(var_146_bool != 0) {
			var_147_string = "";
			func_2595(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536599);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536600, (int)36128, (int)38422);
			return 0;
		}
		var_153_bool = var_41_bool == (int)38412;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_2595(var_42_cvector, "Grin");
			@@@var_0_object:SetMessage((int)536590);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536591, (int)38414, (int)38413);
			@@@var_0_object:AddReply((int)536601, (int)38418, (int)38424);
			return 0;
		}
		var_163_bool = var_41_bool == (int)38414;
		if(var_163_bool != 0) {
			var_164_string = "";
			func_2595(var_42_cvector, "Grin");
			@@@var_0_object:SetMessage((int)536592);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536595, (int)38418, (int)38417);
			@@@var_0_object:AddReply((int)539710, (int)41666, (int)41668);
			return 0;
		}
		var_173_bool = var_41_bool == (int)38418;
		if(var_173_bool != 0) {
			var_174_string = "";
			func_2595(var_42_cvector, "Grin");
			@@@var_0_object:SetMessage((int)536596);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536610, (int)38437, (int)38436);
			@@@var_0_object:AddReply((int)536612, (int)38437, (int)38438);
			return 0;
		}
		var_183_bool = var_41_bool == (int)38437;
		if(var_183_bool != 0) {
			var_184_string = "";
			func_2595(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536611);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536603, (int)36130, (int)38427);
			@@@var_0_object:AddReply((int)534484, (int)36132, (int)36129);
			return 0;
		}
		var_193_bool = var_41_bool == (int)36130;
		if(var_193_bool != 0) {
			var_194_string = "";
			func_2595(var_42_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)534485);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534486, (int)36132, (int)36131);
			@@@var_0_object:AddReply((int)536605, (int)41666, (int)38430);
			return 0;
		}
		var_203_bool = var_41_bool == (int)41666;
		if(var_203_bool != 0) {
			var_204_string = "";
			func_2595(var_42_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)539708);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539709, (int)38431, (int)41667);
			@@@var_0_object:AddReply((int)536593, (int)38416, (int)38415);
			return 0;
		}
		var_213_bool = var_41_bool == (int)38416;
		if(var_213_bool != 0) {
			var_214_string = "";
			func_2595(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536594);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539711, (int)36132, (int)41669);
			return 0;
		}
		var_220_bool = var_41_bool == (int)38431;
		if(var_220_bool != 0) {
			var_221_string = "";
			func_2595(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536606);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536607, (int)38433, (int)38432);
			@@@var_0_object:AddReply((int)539712, (int)-1, (int)41671);
			return 0;
		}
		var_230_bool = var_41_bool == (int)38433;
		if(var_230_bool != 0) {
			var_231_string = "";
			func_2595(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536608);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536609, (int)36128, (int)38434);
			return 0;
		}
		var_237_bool = var_41_bool == (int)36132;
		if(var_237_bool != 0) {
			var_238_string = "";
			func_2595(var_42_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)534487);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536597, (int)36128, (int)38419);
			return 0;
		}
		var_244_bool = var_41_bool == (int)36128;
		if(var_244_bool != 0) {
			var_245_string = "";
			func_2595(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534483);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534488, (int)-1, (int)36133);
			@@@var_0_object:AddReply((int)536613, (int)38441, (int)38440);
			return 0;
		}
		var_254_bool = var_41_bool == (int)38441;
		if(var_254_bool != 0) {
			var_255_string = "";
			func_2595(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536614);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536615, (int)-1, (int)38442);
			return 0;
		}
		var_3_string = true;
		var_260_bool = 0;
		func_4119(var_260_bool);
		if(var_260_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa3a";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_4020();
		var_46_bool = var_41_bool == (int)36960;
		if(var_46_bool != 0) {
			var_47_string = "";
			func_3143(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535284);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535285, (int)36962, (int)36961);
			@@@var_0_object:AddReply((int)535292, (int)-1, (int)36968);
			@@@var_0_object:AddReply((int)535293, (int)-1, (int)36969);
			return 0;
		}
		var_75_bool = var_41_bool == (int)36962;
		if(var_75_bool != 0) {
			var_76_string = "";
			func_3143(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535286);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535287, (int)36964, (int)36963);
			@@@var_0_object:AddReply((int)535291, (int)-1, (int)36967);
			return 0;
		}
		var_85_bool = var_41_bool == (int)36964;
		if(var_85_bool != 0) {
			var_86_string = "";
			func_3143(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535288);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535289, (int)-1, (int)36965);
			@@@var_0_object:AddReply((int)535290, (int)-1, (int)36966);
			return 0;
		}
		var_3_string = true;
		var_94_bool = 0;
		func_4119(var_94_bool);
		if(var_94_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc5e";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_cvector)
{
	if((int)1 != 0) {
		func_4020();
		var_46_bool = var_41_int == (int)42551;
		if(var_46_bool != 0) {
			var_47_string = "";
			func_3397(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540542);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540543, (int)-1, (int)42552);
			@@@var_0_object:AddReply((int)540796, (int)-1, (int)42845);
			return 0;
		}
		var_3_string = true;
		var_71_bool = 0;
		func_4119(var_71_bool);
		if(var_71_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xd5c";
	
}


task_16_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_int)
{
	var_43_bool = var_41_int == (int)10;
	if(var_43_bool != 0) {
		func_3530();
		var_45_bool = 0;
		var_45_bool = 0;
		var_46_bool = 0;
		func_3744(var_46_bool);
		if(var_46_bool != 0) {
			var_49_bool = 0;
			func_3499(var_49_bool);
			if(var_49_bool != 0) {
				var_45_bool = 1;
			}
		}
		if(var_45_bool != 0) {
			var_66_bool = 0;
			func_3479(var_66_bool);
			if(var_66_bool != 0) {
				var_85_bool = 0; var_86_object = Obj();
				func_4027(Obj());
				var_87_object = var_86_object;
				func_3894(var_85_bool, var_86_object);
			}
		} else {
			func_3494(var_41_int);
			func_3521();
		}
	}
	return 0;
	
}


task_16_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	func_3712();
	func_3530();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_16_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	StopGroup0();
	func_3530();
	var_42_string = "";
	func_3974("Neutral");
	func_3521();
	return 0;
}


task_16_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_bool)
{
	var_42_bool = var_41_bool;
	if(var_42_bool != 0) {
		func_3521();
	} else {
		var_48_string = "";
		func_3974("Neutral");
	}
	return 0;
	
}


task_16_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_object)
{
	var_42_bool = 0; var_43_bool = 0;
	IsOverrideActive(var_43_bool);
	var_44_bool = var_43_bool == 0; //@nz
	if(var_44_bool != 0) {
		EventDisable(0);
		func_3712();
		var_45_bool = 0; var_46_object = Obj();
		var_41_object = var_46_object;
		func_3735(var_45_bool, var_46_object);
		EventEnable(0);
		var_59_object = Obj();
		var_41_object = var_59_object;
		func_4590(var_59_object);
		var_837_string = "";
		func_3974("Neutral");
		func_3530();
		func_3521();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	func_3465(var_40_cvector);
	return 0;
}


func_0(var_0_object, var_296_int, var_297_object)
{
	var_299_object = Obj(); var_300_bool = 0; var_301_int = 0; var_302_bool = 0; var_303_object = Obj(); var_304_bool = 0; var_305_int = 0; var_306_bool = 0;
	var_0_object = var_297_object;
	var_307_bool = 0; var_308_object = Obj(); var_309_float = 0;
	var_297_object = var_308_object;
	func_3749(var_307_bool, var_308_object, (float)70.0);
	var_310_bool = var_307_bool == 0; //@nz
	if(var_310_bool != 0) {
		var_296_int = -2;
		return 8;
	}
	CreateDialog(var_303_object);
	var_311_int = 0;
	func_4113(var_311_int);
	@@var_303_object:SetNPCName(var_311_int);
	var_312_int = 0;
	func_4111(var_312_int);
	@@var_303_object:SetNPCDescription(var_312_int);
	var_313_string = "";
	func_4115(var_313_string);
	@@var_303_object:SetPhoto(var_313_string);
	var_314_string = "";
	func_4117(var_314_string);
	@@var_303_object:SetPhoto2(var_314_string);
	var_315_int = 0;
	func_4573(var_315_int);
	@@var_303_object:SetPlayerName(var_315_int);
	IsOverrideActive(var_304_bool);
	var_316_bool = var_304_bool;
	if(var_316_bool != 0) {
		var_296_int = -2;
		return 8;
	}
	DoDialog(var_303_object);
	var_317_bool = 0; var_318_object = Obj();
	func_4027(Obj());
	var_319_object = var_318_object;
	func_3836(var_317_bool, var_318_object);
	var_320_object = Obj(); var_321_object = Obj();
	var_297_object = var_320_object;
	var_303_object = var_321_object;
	TaskCall(1);
	func_81(var_322_object, var_323_object, var_324_string, var_325_bool, var_320_object, var_321_object);
	TaskReturn();
	@@var_303_object:IsDialogEnd(var_306_bool);
	
Label_63:
	var_371_bool = var_306_bool == 0; //@nz
	if(var_371_bool != 0) {
		sync();
		@@var_303_object:IsDialogEnd(var_306_bool);
		goto Label_63;
	}
	var_297_object = Obj();
	func_3818();
	StopDialog(var_303_object);
	@@var_303_object:GetReturnValue((int)-1);
	var_305_int = var_296_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4357(var_553_bool)
{
	var_555_int = 0; var_556_string = "";
	func_4043(var_555_int, "ood9Xan1");
	var_558_bool = var_555_int == (int)0;
	if(var_558_bool != 0) {
		var_553_bool = 1;
		return 0;
	}
	var_553_bool = 0;
	return 0;
}


func_2309(var_2_object, var_238_string)
{
	var_239_bool = 0;
	func_4119(var_239_bool);
	var_240_bool = var_239_bool == 0; //@nz
	if(var_240_bool != 0) {
		return 0;
	}
	var_241_bool = var_238_string == var_2_object;
	if(var_241_bool != 0) {
		return 0;
	}
	var_242_string = ""; var_243_bool = 0;
	var_238_string = var_242_string;
	var_245_bool = var_238_string == "";
	if(var_245_bool != 0) {
		var_243_bool = 0;
	} else {
		var_243_bool = 1;
	}
	func_3990(var_242_string, var_243_bool);
	var_2_object = var_238_string;
	return 0;
	
}


func_3080(var_0_object, var_1_object, var_2_object, var_3_string, var_746_object, var_747_object)
{
	var_0_object = var_747_object;
	var_1_object = var_746_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_753_string = "";
		func_3143(var_747_object, "Neutral");
		@@@var_0_object:SetMessage((int)535284);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535285, (int)36962, (int)36961);
		@@@var_0_object:AddReply((int)535292, (int)-1, (int)36968);
		@@@var_0_object:AddReply((int)535293, (int)-1, (int)36969);
		goto Label_3113;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xc0c";
	}
Label_3113:
	var_771_bool = 0;
	func_4119(var_771_bool);
	if(var_771_bool != 0) {

	Label_3117:
		lshWaitForAnimEnd();
		var_772_string = var_3_string;
		if(var_772_string != 0) {
		} else {
			var_773_string = "";
			var_773_string = var_2_object;
			func_3974(var_773_string);
			goto Label_3117;
	}
		PlayAnimation("all", "idle");

	Label_3132:
		WaitForAnimEnd();
		var_776_string = var_3_string;
		if(var_776_string != 0) {
			goto Label_3142;
		}
		PlayAnimation("all", "idle");
		goto Label_3132;
	}
	goto Label_3142;
	
Label_3142:
	return 0;
	
}


func_3339(var_0_object, var_1_object, var_2_object, var_3_string, var_805_object, var_806_object)
{
	var_0_object = var_806_object;
	var_1_object = var_805_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_812_string = "";
		func_3397(var_806_object, "Neutral");
		@@@var_0_object:SetMessage((int)540542);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540543, (int)-1, (int)42552);
		@@@var_0_object:AddReply((int)540796, (int)-1, (int)42845);
		goto Label_3367;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xd0f";
	}
Label_3367:
	var_827_bool = 0;
	func_4119(var_827_bool);
	if(var_827_bool != 0) {

	Label_3371:
		lshWaitForAnimEnd();
		var_828_string = var_3_string;
		if(var_828_string != 0) {
		} else {
			var_829_string = "";
			var_829_string = var_2_object;
			func_3974(var_829_string);
			goto Label_3371;
	}
		PlayAnimation("all", "idle");

	Label_3386:
		WaitForAnimEnd();
		var_832_string = var_3_string;
		if(var_832_string != 0) {
			goto Label_3396;
		}
		PlayAnimation("all", "idle");
		goto Label_3386;
	}
	goto Label_3396;
	
Label_3396:
	return 0;
	
}


func_1294(var_0_object, var_515_int, var_516_object)
{
	var_518_object = Obj(); var_519_bool = 0; var_520_int = 0; var_521_bool = 0; var_522_object = Obj(); var_523_bool = 0; var_524_int = 0; var_525_bool = 0;
	var_0_object = var_516_object;
	var_526_bool = 0; var_527_object = Obj(); var_528_float = 0;
	var_516_object = var_527_object;
	func_3749(var_526_bool, var_527_object, (float)70.0);
	var_529_bool = var_526_bool == 0; //@nz
	if(var_529_bool != 0) {
		var_515_int = -2;
		return 8;
	}
	CreateDialog(var_522_object);
	var_530_int = 0;
	func_4113(var_530_int);
	@@var_522_object:SetNPCName(var_530_int);
	var_531_int = 0;
	func_4111(var_531_int);
	@@var_522_object:SetNPCDescription(var_531_int);
	var_532_string = "";
	func_4115(var_532_string);
	@@var_522_object:SetPhoto(var_532_string);
	var_533_string = "";
	func_4117(var_533_string);
	@@var_522_object:SetPhoto2(var_533_string);
	var_534_int = 0;
	func_4573(var_534_int);
	@@var_522_object:SetPlayerName(var_534_int);
	IsOverrideActive(var_523_bool);
	var_535_bool = var_523_bool;
	if(var_535_bool != 0) {
		var_515_int = -2;
		return 8;
	}
	DoDialog(var_522_object);
	var_536_bool = 0; var_537_object = Obj();
	func_4027(Obj());
	var_538_object = var_537_object;
	func_3836(var_536_bool, var_537_object);
	var_539_object = Obj(); var_540_object = Obj();
	var_516_object = var_539_object;
	var_522_object = var_540_object;
	TaskCall(7);
	func_1375(var_541_object, var_542_object, var_543_string, var_544_bool, var_539_object, var_540_object);
	TaskReturn();
	@@var_522_object:IsDialogEnd(var_525_bool);
	
Label_1357:
	var_641_bool = var_525_bool == 0; //@nz
	if(var_641_bool != 0) {
		sync();
		@@var_522_object:IsDialogEnd(var_525_bool);
		goto Label_1357;
	}
	var_516_object = Obj();
	func_3818();
	StopDialog(var_522_object);
	@@var_522_object:GetReturnValue((int)-1);
	var_524_int = var_515_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4111(var_124_int)
{
	var_124_int = 515536;
	return 0;
}


func_4113(var_123_int)
{
	var_123_int = 502861;
	return 0;
}


func_4369(var_595_bool)
{
	var_597_int = 0; var_598_string = "";
	func_4043(var_597_int, "d9q01");
	var_600_bool = var_597_int == (int)2;
	if(var_600_bool != 0) {
		var_595_bool = 1;
		return 0;
	}
	var_595_bool = 0;
	return 0;
}


func_4115(var_125_string)
{
	var_125_string = "ui/NPC_Han.png";
	return 0;
}


func_4117(var_126_string)
{
	var_126_string = "ui/NPC_Han_b.png";
	return 0;
}


func_4119(var_118_bool)
{
	var_118_bool = 1;
	return 0;
}


func_4121()
{
	SetVariable("ood7Han1", (int)1);
	return 0;
}


func_4381(var_586_bool, var_587_object)
{
	var_588_bool = 0; var_589_object = Obj();
	var_587_object = var_589_object;
	func_4401(var_588_bool, var_589_object);
	if(var_588_bool != 0) {
		var_586_bool = 1;
		return 0;
	}
	var_586_bool = 0;
	return 0;
}


func_4127()
{
	SetVariable("d11q05", (int)2);
	func_4430();
	var_74_bool = 0; var_75_string = ""; var_76_string = "";
	func_4055(var_74_bool, "quest_d11_05", "place_enemy_before");
	return 0;
}


func_2595(var_2_object, var_676_string)
{
	var_677_bool = 0;
	func_4119(var_677_bool);
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
	func_3990(var_680_string, var_681_bool);
	var_2_object = var_676_string;
	return 0;
	
}


func_4391(var_605_bool, var_606_object)
{
	var_607_bool = 0; var_608_object = Obj();
	var_606_object = var_608_object;
	func_4412(var_607_bool, var_608_object);
	if(var_607_bool != 0) {
		var_605_bool = 1;
		return 0;
	}
	var_605_bool = 0;
	return 0;
}


func_1064(var_2_object, var_480_string)
{
	var_481_bool = 0;
	func_4119(var_481_bool);
	var_482_bool = var_481_bool == 0; //@nz
	if(var_482_bool != 0) {
		return 0;
	}
	var_483_bool = var_480_string == var_2_object;
	if(var_483_bool != 0) {
		return 0;
	}
	var_484_string = ""; var_485_bool = 0;
	var_480_string = var_484_string;
	var_487_bool = var_480_string == "";
	if(var_487_bool != 0) {
		var_485_bool = 0;
	} else {
		var_485_bool = 1;
	}
	func_3990(var_484_string, var_485_bool);
	var_2_object = var_480_string;
	return 0;
	
}


func_4141()
{
	var_88_bool = 0; var_89_string = ""; var_90_string = "";
	func_4055(var_88_bool, "quest_d9_01", "teleport_to_mnogogrannik");
	return 0;
}


func_4401(var_588_bool, var_589_object)
{
	var_590_int = 0; var_591_int = 0;
	@@var_589_object:GetItemCountOfType(var_591_int, "Rifle");
	var_594_bool = var_591_int >= (int)5;
	if(var_594_bool != 0) {
		var_588_bool = 1;
		return 2;
	}
	var_588_bool = 0;
	return 2;
}


func_4148()
{
	var_117_int = 0; var_118_string = "";
	func_4043(var_117_int, "map_chertez_state");
	var_122_bool = var_117_int <= (int)3;
	if(var_122_bool != 0) {
		SetVariable("map_chertez_state", (int)3);
		SetVariable("map_chertez_force", (int)1);
	}
	return 0;
}


func_3894(var_147_bool, var_148_object)
{
	var_149_string = ""; var_150_int = 0; var_151_bool = 0; var_152_int = 0; var_153_string = ""; var_154_string = ""; var_155_int = 0; var_156_bool = 0; var_157_int = 0; var_158_string = "";
	var_154_string = "c";
	var_155_int = 0;
	
Label_3897:
	if((int)1 != 0) {
		var_161_int = var_155_int + (int)1;
		var_162_int = var_154_string + var_161_int;
		@@var_148_object:HasProperty(var_162_int, var_156_bool);
		var_163_bool = var_156_bool == 0; //@nz
		if(var_163_bool != 0) {
		} else {
			var_155_int = var_155_int + (int)1;
			goto Label_3897;
		}
	}
	var_164_bool = var_155_int == 0; //@nz
	if(var_164_bool != 0) {
		var_147_bool = 0;
		return 10;
	}
	var_157_int = 0;
	var_166_bool = var_155_int > (int)1;
	if(var_166_bool != 0) {
		irand(var_157_int, var_155_int);
	}
	var_168_int = var_157_int + (int)1;
	var_169_int = var_154_string + var_168_int;
	@@var_148_object:GetProperty(var_169_int, var_158_string);
	var_170_bool = 0; var_171_string = "";
	var_158_string = var_171_string;
	func_4005(var_170_bool, var_171_string);
	var_170_bool = var_147_bool;
	return 10;
	
}


func_3641()
{
	var_45_int = 0; var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_int = 0; var_50_bool = 0; var_51_int = 0; var_52_int = 0; var_53_bool = 0; var_54_int = 0; var_55_int = 0; var_56_bool = 0;
	WaitForAnimEnd();
	var_57_bool = 0;
	func_3744(var_57_bool);
	var_58_bool = var_57_bool == 0; //@nz
	if(var_58_bool != 0) {
		return 12;
	}
	func_4094((int)0);
	var_59_int = var_51_int;
	var_52_int = 0;
	
Label_3655:
	var_72_bool = 0;
	var_72_bool = 0;
	var_74_bool = var_52_int < (int)5;
	if(var_74_bool != 0) {
		var_75_bool = 0;
		func_3744(var_75_bool);
		if(var_75_bool != 0) {
			var_72_bool = 1;
		}
	}
	if(var_72_bool != 0) {
		var_76_bool = var_51_int == 0; //@nz
		if(var_76_bool != 0) {
			Sleep((int)3, var_53_bool);
			var_78_bool = var_53_bool == 0; //@nz
			if(var_78_bool != 0) {
			} else {
		} else {
				irand(var_54_int, var_51_int);
				irand(var_55_int, (int)5);
				var_84_bool = var_55_int != (int)0;
				if(var_84_bool != 0) {
					var_54_int = 0;
				}
				var_86_string = ""; var_87_int = 0;
				var_54_int = var_87_int;
				func_4087(var_86_string, var_87_int);
				PlayAnimation("all", var_86_string);
				WaitForAnimEnd(var_56_bool);
				var_88_bool = var_56_bool == 0; //@nz
				if(var_88_bool == 0) goto Label_3696;
				goto Label_3707;
		}
		Label_3696:
			var_79_bool = 0;
			func_3710(var_79_bool);
			var_80_bool = var_79_bool == 0; //@nz
			if(var_80_bool != 0) {
				goto Label_3707;
			}
			ResetAAS();
			var_52_int = var_52_int + (int)1;
			goto Label_3655;

		}
	}
Label_3707:
	ResetAAS();
	return 12;
	
}


func_4412(var_607_bool, var_608_object)
{
	var_609_int = 0; var_610_int = 0;
	@@var_608_object:GetItemCountOfType(var_610_int, "Rifle");
	var_612_bool = 0;
	var_612_bool = 0;
	var_614_bool = var_610_int > (int)0;
	if(var_614_bool != 0) {
		var_616_bool = var_610_int < (int)5;
		if(var_616_bool != 0) {
			var_612_bool = 1;
		}
	}
	if(var_612_bool != 0) {
		var_607_bool = 1;
		return 2;
	}
	var_607_bool = 0;
	return 2;
}


func_4165(var_128_object)
{
	var_129_object = Obj(); var_130_string = ""; var_131_float = 0;
	func_4523(Obj());
	var_132_object = var_129_object;
	func_4540(var_129_object, "pt_map_aglaja", (float)-1);
	var_158_object = Obj();
	func_4523(var_158_object);
	@@var_128_object:ShowMap(var_158_object);
	return 0;
}


func_582(var_0_object, var_375_int, var_376_object)
{
	var_378_object = Obj(); var_379_bool = 0; var_380_int = 0; var_381_bool = 0; var_382_object = Obj(); var_383_bool = 0; var_384_int = 0; var_385_bool = 0;
	var_0_object = var_376_object;
	var_386_bool = 0; var_387_object = Obj(); var_388_float = 0;
	var_376_object = var_387_object;
	func_3749(var_386_bool, var_387_object, (float)70.0);
	var_389_bool = var_386_bool == 0; //@nz
	if(var_389_bool != 0) {
		var_375_int = -2;
		return 8;
	}
	CreateDialog(var_382_object);
	var_390_int = 0;
	func_4113(var_390_int);
	@@var_382_object:SetNPCName(var_390_int);
	var_391_int = 0;
	func_4111(var_391_int);
	@@var_382_object:SetNPCDescription(var_391_int);
	var_392_string = "";
	func_4115(var_392_string);
	@@var_382_object:SetPhoto(var_392_string);
	var_393_string = "";
	func_4117(var_393_string);
	@@var_382_object:SetPhoto2(var_393_string);
	var_394_int = 0;
	func_4573(var_394_int);
	@@var_382_object:SetPlayerName(var_394_int);
	IsOverrideActive(var_383_bool);
	var_395_bool = var_383_bool;
	if(var_395_bool != 0) {
		var_375_int = -2;
		return 8;
	}
	DoDialog(var_382_object);
	var_396_bool = 0; var_397_object = Obj();
	func_4027(Obj());
	var_398_object = var_397_object;
	func_3836(var_396_bool, var_397_object);
	var_399_object = Obj(); var_400_object = Obj();
	var_376_object = var_399_object;
	var_382_object = var_400_object;
	TaskCall(3);
	func_663(var_401_object, var_402_object, var_403_string, var_404_bool, var_399_object, var_400_object);
	TaskReturn();
	@@var_382_object:IsDialogEnd(var_385_bool);
	
Label_645:
	var_435_bool = var_385_bool == 0; //@nz
	if(var_435_bool != 0) {
		sync();
		@@var_382_object:IsDialogEnd(var_385_bool);
		goto Label_645;
	}
	var_376_object = Obj();
	func_3818();
	StopDialog(var_382_object);
	@@var_382_object:GetReturnValue((int)-1);
	var_384_int = var_375_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3143(var_2_object, var_753_string)
{
	var_754_bool = 0;
	func_4119(var_754_bool);
	var_755_bool = var_754_bool == 0; //@nz
	if(var_755_bool != 0) {
		return 0;
	}
	var_756_bool = var_753_string == var_2_object;
	if(var_756_bool != 0) {
		return 0;
	}
	var_757_string = ""; var_758_bool = 0;
	var_753_string = var_757_string;
	var_760_bool = var_753_string == "";
	if(var_760_bool != 0) {
		var_758_bool = 0;
	} else {
		var_758_bool = 1;
	}
	func_3990(var_757_string, var_758_bool);
	var_2_object = var_753_string;
	return 0;
	
}


func_3397(var_2_object, var_812_string)
{
	var_813_bool = 0;
	func_4119(var_813_bool);
	var_814_bool = var_813_bool == 0; //@nz
	if(var_814_bool != 0) {
		return 0;
	}
	var_815_bool = var_812_string == var_2_object;
	if(var_815_bool != 0) {
		return 0;
	}
	var_816_string = ""; var_817_bool = 0;
	var_812_string = var_816_string;
	var_819_bool = var_812_string == "";
	if(var_819_bool != 0) {
		var_817_bool = 0;
	} else {
		var_817_bool = 1;
	}
	func_3990(var_816_string, var_817_bool);
	var_2_object = var_812_string;
	return 0;
	
}


func_4430()
{
	var_51_object = Obj(); var_52_object = Obj();
	CreateDiaryEntry(var_52_object, (int)684, (int)2, (int)534499);
	var_56_bool = 0; var_57_object = Obj(); var_58_int = 0;
	var_52_object = var_57_object;
	func_4495(var_56_bool, var_57_object, (int)682);
	return 2;
}
EMIT "Stack[-1] = 0";


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_320_object, var_321_object)
{
	var_0_object = var_321_object;
	var_1_object = var_320_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_327_bool = 0;
		var_327_bool = 0;
		var_328_bool = 0; var_329_object = Obj();
		var_329_object = var_1_object;
		func_4321(var_329_object);
		if(var_328_bool != 0) {
			var_336_bool = 0; var_337_object = Obj();
			var_337_object = var_1_object;
			func_4316(var_337_object);
			if(var_336_bool != 0) {
				var_327_bool = 1;
			}
		}
		if(var_327_bool != 0) {
			var_338_object = Obj(); var_339_object = Obj();
			var_338_object = var_1_object;
			var_339_object = var_0_object;
			func_4193();
			var_340_string = "";
			func_178(var_321_object, "Questioning");
			@@@var_0_object:SetMessage((int)510420);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510421, (int)11490, (int)11489);
			@@@var_0_object:AddReply((int)534384, (int)36001, (int)35999);
		} else {
				var_363_string = "";
				func_178(var_321_object, "Neutral");
				@@@var_0_object:SetMessage((int)534418);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)534419, (int)-1, (int)36046);
				@@@var_0_object:AddReply((int)536096, (int)-1, (int)37848);
				goto Label_148;
		}
	}
Label_148:
	var_355_bool = 0;
	func_4119(var_355_bool);
	if(var_355_bool != 0) {

	Label_152:
		lshWaitForAnimEnd();
		var_356_string = var_3_string;
		if(var_356_string != 0) {
		} else {
			var_357_string = "";
			var_357_string = var_2_object;
			func_3974(var_357_string);
			goto Label_152;
	}
		PlayAnimation("all", "idle");

	Label_167:
		WaitForAnimEnd();
		var_360_string = var_3_string;
		if(var_360_string != 0) {
			goto Label_177;
		}
		PlayAnimation("all", "idle");
		goto Label_167;

	}
	goto Label_177;
	
Label_177:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_4181()
{
	SetVariable("ood9Xan3", (int)1);
	return 0;
}


func_4187()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_3931(var_178_bool, var_179_object)
{
	var_180_string = ""; var_181_int = 0; var_182_bool = 0; var_183_int = 0; var_184_string = ""; var_185_string = ""; var_186_int = 0; var_187_bool = 0; var_188_int = 0; var_189_string = "";
	var_191_int = 0;
	func_4072(var_191_int);
	var_197_int = "d" + var_191_int;
	var_185_string = var_197_int + "m";
	var_186_int = 0;
	
Label_3940:
	if((int)1 != 0) {
		var_201_int = var_186_int + (int)1;
		var_202_int = var_185_string + var_201_int;
		@@var_179_object:HasProperty(var_202_int, var_187_bool);
		var_203_bool = var_187_bool == 0; //@nz
		if(var_203_bool != 0) {
		} else {
			var_186_int = var_186_int + (int)1;
			goto Label_3940;
		}
	}
	var_204_bool = var_186_int == 0; //@nz
	if(var_204_bool != 0) {
		var_178_bool = 0;
		return 10;
	}
	var_188_int = 0;
	var_206_bool = var_186_int > (int)1;
	if(var_206_bool != 0) {
		irand(var_188_int, var_186_int);
	}
	var_208_int = var_188_int + (int)1;
	var_209_int = var_185_string + var_208_int;
	@@var_179_object:GetProperty(var_209_int, var_189_string);
	var_210_bool = 0; var_211_string = "";
	var_189_string = var_211_string;
	func_4005(var_210_bool, var_211_string);
	var_210_bool = var_178_bool;
	return 10;
	
}


func_4443()
{
	var_67_object = Obj(); var_68_object = Obj();
	CreateDiaryEntry(var_68_object, (int)679, (int)2, (int)534420);
	var_72_bool = 0; var_73_object = Obj(); var_74_int = 0;
	var_68_object = var_73_object;
	func_4495(var_72_bool, var_73_object, (int)26);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1375(var_0_object, var_1_object, var_2_object, var_3_string, var_539_object, var_540_object)
{
	var_0_object = var_540_object;
	var_1_object = var_539_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_546_bool = 0;
		var_546_bool = 0;
		var_547_bool = 0; var_548_object = Obj();
		var_548_object = var_1_object;
		func_4345(var_548_object);
		if(var_547_bool != 0) {
			var_553_bool = 0; var_554_object = Obj();
			var_554_object = var_1_object;
			func_4357(var_554_object);
			if(var_553_bool != 0) {
				var_546_bool = 1;
			}
		}
		if(var_546_bool != 0) {
			var_559_object = Obj(); var_560_object = Obj();
			var_559_object = var_1_object;
			var_560_object = var_0_object;
			func_4224();
			var_563_string = "";
			func_1519(var_540_object, "Neutral");
			@@@var_0_object:SetMessage((int)514041);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514042, (int)15278, (int)15277);
		} else {
				var_583_string = "";
				func_1519(var_540_object, "Suspicion");
				@@@var_0_object:SetMessage((int)514063);
				@@@var_0_object:ClearReplies();
				var_585_bool = 0;
				var_585_bool = 0;
				var_586_bool = 0; var_587_object = Obj();
				var_587_object = var_1_object;
				func_4381(var_586_bool, var_587_object);
				if(var_586_bool != 0) {
					var_595_bool = 0; var_596_object = Obj();
					var_596_object = var_1_object;
					func_4369(var_596_object);
					if(var_595_bool != 0) {
						var_585_bool = 1;
					}
				}
				if(var_585_bool != 0) {
					@@@var_0_object:AddReply((int)514068, (int)40760, (int)15305);
				}
				var_604_bool = 0;
				var_604_bool = 0;
				var_605_bool = 0; var_606_object = Obj();
				var_606_object = var_1_object;
				func_4391(var_605_bool, var_606_object);
				if(var_605_bool != 0) {
					var_617_bool = 0; var_618_object = Obj();
					var_618_object = var_1_object;
					func_4369(var_618_object);
					if(var_617_bool != 0) {
						var_604_bool = 1;
					}
				}
				if(var_604_bool != 0) {
					@@@var_0_object:AddReply((int)514069, (int)15307, (int)15306);
				}
				var_622_bool = 0;
				var_622_bool = 0;
				var_623_bool = 0; var_624_object = Obj();
				var_624_object = var_1_object;
				func_4292(var_624_object);
				if(var_623_bool != 0) {
					var_629_bool = 0; var_630_object = Obj();
					var_630_object = var_1_object;
					func_4304(var_630_object);
					if(var_629_bool != 0) {
						var_622_bool = 1;
					}
				}
				if(var_622_bool != 0) {
					@@@var_0_object:AddReply((int)538835, (int)40765, (int)40764);
				}
				@@@var_0_object:AddReply((int)514064, (int)-1, (int)15300);
				goto Label_1489;
		}
	}
Label_1489:
	var_575_bool = 0;
	func_4119(var_575_bool);
	if(var_575_bool != 0) {

	Label_1493:
		lshWaitForAnimEnd();
		var_576_string = var_3_string;
		if(var_576_string != 0) {
		} else {
			var_577_string = "";
			var_577_string = var_2_object;
			func_3974(var_577_string);
			goto Label_1493;
	}
		PlayAnimation("all", "idle");

	Label_1508:
		WaitForAnimEnd();
		var_580_string = var_3_string;
		if(var_580_string != 0) {
			goto Label_1518;
		}
		PlayAnimation("all", "idle");
		goto Label_1508;

	}
	goto Label_1518;
	
Label_1518:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x563";


func_4193()
{
	return 0;
}


func_4195()
{
	var_49_object = Obj(); var_50_object = Obj();
	SetVariable("d3q02", (int)4);
	func_4523(Obj());
	var_53_object = var_50_object;
	var_64_float = 0;
	func_4067(var_64_float);
	@@var_50_object:AddMark("d3q02HanGotoMladVlad", "pt_map_mladvlad", (int)0, (int)511386, var_64_float);
	func_4443();
	return 2;
}
EMIT "Stack[-1] = 0";


func_4456()
{
	var_96_object = Obj(); var_97_object = Obj();
	CreateDiaryEntry(var_97_object, (int)185, (int)1, (int)515448);
	var_101_bool = 0; var_102_object = Obj(); var_103_int = 0;
	var_97_object = var_102_object;
	func_4495(var_101_bool, var_102_object, (int)182);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4469()
{
	var_51_object = Obj(); var_52_object = Obj();
	CreateDiaryEntry(var_52_object, (int)184, (int)1, (int)515447);
	var_56_bool = 0; var_57_object = Obj(); var_58_int = 0;
	var_52_object = var_57_object;
	func_4495(var_56_bool, var_57_object, (int)182);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2170(var_0_object, var_64_int, var_65_object)
{
	var_67_object = Obj(); var_68_bool = 0; var_69_int = 0; var_70_bool = 0; var_71_object = Obj(); var_72_bool = 0; var_73_int = 0; var_74_bool = 0;
	var_0_object = var_65_object;
	var_75_bool = 0; var_76_object = Obj(); var_77_float = 0;
	var_65_object = var_76_object;
	func_3749(var_75_bool, var_76_object, (float)70.0);
	var_122_bool = var_75_bool == 0; //@nz
	if(var_122_bool != 0) {
		var_64_int = -2;
		return 8;
	}
	CreateDialog(var_71_object);
	var_123_int = 0;
	func_4113(var_123_int);
	@@var_71_object:SetNPCName(var_123_int);
	var_124_int = 0;
	func_4111(var_124_int);
	@@var_71_object:SetNPCDescription(var_124_int);
	var_125_string = "";
	func_4115(var_125_string);
	@@var_71_object:SetPhoto(var_125_string);
	var_126_string = "";
	func_4117(var_126_string);
	@@var_71_object:SetPhoto2(var_126_string);
	var_127_int = 0;
	func_4573(var_127_int);
	@@var_71_object:SetPlayerName(var_127_int);
	IsOverrideActive(var_72_bool);
	var_135_bool = var_72_bool;
	if(var_135_bool != 0) {
		var_64_int = -2;
		return 8;
	}
	DoDialog(var_71_object);
	var_136_bool = 0; var_137_object = Obj();
	func_4027(Obj());
	var_138_object = var_137_object;
	func_3836(var_136_bool, var_137_object);
	var_231_object = Obj(); var_232_object = Obj();
	var_65_object = var_231_object;
	var_71_object = var_232_object;
	TaskCall(9);
	func_2251(var_233_object, var_234_object, var_235_string, var_236_bool, var_231_object, var_232_object);
	TaskReturn();
	@@var_71_object:IsDialogEnd(var_74_bool);
	
Label_2233:
	var_280_bool = var_74_bool == 0; //@nz
	if(var_280_bool != 0) {
		sync();
		@@var_71_object:IsDialogEnd(var_74_bool);
		goto Label_2233;
	}
	var_65_object = Obj();
	func_3818();
	StopDialog(var_71_object);
	@@var_71_object:GetReturnValue((int)-1);
	var_73_int = var_64_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4218()
{
	SetVariable("ood8Han1", (int)1);
	return 0;
}


func_3710(var_79_bool)
{
	var_79_bool = 1;
	return 0;
}


func_895(var_0_object, var_439_int, var_440_object)
{
	var_442_object = Obj(); var_443_bool = 0; var_444_int = 0; var_445_bool = 0; var_446_object = Obj(); var_447_bool = 0; var_448_int = 0; var_449_bool = 0;
	var_0_object = var_440_object;
	var_450_bool = 0; var_451_object = Obj(); var_452_float = 0;
	var_440_object = var_451_object;
	func_3749(var_450_bool, var_451_object, (float)70.0);
	var_453_bool = var_450_bool == 0; //@nz
	if(var_453_bool != 0) {
		var_439_int = -2;
		return 8;
	}
	CreateDialog(var_446_object);
	var_454_int = 0;
	func_4113(var_454_int);
	@@var_446_object:SetNPCName(var_454_int);
	var_455_int = 0;
	func_4111(var_455_int);
	@@var_446_object:SetNPCDescription(var_455_int);
	var_456_string = "";
	func_4115(var_456_string);
	@@var_446_object:SetPhoto(var_456_string);
	var_457_string = "";
	func_4117(var_457_string);
	@@var_446_object:SetPhoto2(var_457_string);
	var_458_int = 0;
	func_4573(var_458_int);
	@@var_446_object:SetPlayerName(var_458_int);
	IsOverrideActive(var_447_bool);
	var_459_bool = var_447_bool;
	if(var_459_bool != 0) {
		var_439_int = -2;
		return 8;
	}
	DoDialog(var_446_object);
	var_460_bool = 0; var_461_object = Obj();
	func_4027(Obj());
	var_462_object = var_461_object;
	func_3836(var_460_bool, var_461_object);
	var_463_object = Obj(); var_464_object = Obj();
	var_440_object = var_463_object;
	var_446_object = var_464_object;
	TaskCall(5);
	func_976(var_465_object, var_466_object, var_467_string, var_468_bool, var_463_object, var_464_object);
	TaskReturn();
	@@var_446_object:IsDialogEnd(var_449_bool);
	
Label_958:
	var_511_bool = var_449_bool == 0; //@nz
	if(var_511_bool != 0) {
		sync();
		@@var_446_object:IsDialogEnd(var_449_bool);
		goto Label_958;
	}
	var_440_object = Obj();
	func_3818();
	StopDialog(var_446_object);
	@@var_446_object:GetReturnValue((int)-1);
	var_448_int = var_439_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4224()
{
	SetVariable("ood9Xan1", (int)1);
	return 0;
}


func_3712()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_4482(var_65_object)
{
	var_66_object = Obj(); var_67_object = Obj();
	GetDiaryRoot(var_67_object);
	var_68_bool = var_67_object == 0; //@nz
	if(var_68_bool != 0) {
		Trace("Can't retrieve diary root");
		var_65_object = 0;
		return 2;
	}
	var_67_object = var_65_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3717(var_56_float, var_57_object)
{
	var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
	GetPosition(var_61_cvector);
	@@var_57_object:GetPosition(var_62_cvector);
	var_63_cvector = var_62_cvector - var_61_cvector;
	var_56_float = var_63_cvector | var_63_cvector;
	return 6;
}


func_4230()
{
	SetVariable("d9q01", (int)2);
	func_4469();
	return 0;
}


func_2437(var_0_object, var_645_int, var_646_object)
{
	var_648_object = Obj(); var_649_bool = 0; var_650_int = 0; var_651_bool = 0; var_652_object = Obj(); var_653_bool = 0; var_654_int = 0; var_655_bool = 0;
	var_0_object = var_646_object;
	var_656_bool = 0; var_657_object = Obj(); var_658_float = 0;
	var_646_object = var_657_object;
	func_3749(var_656_bool, var_657_object, (float)70.0);
	var_659_bool = var_656_bool == 0; //@nz
	if(var_659_bool != 0) {
		var_645_int = -2;
		return 8;
	}
	CreateDialog(var_652_object);
	var_660_int = 0;
	func_4113(var_660_int);
	@@var_652_object:SetNPCName(var_660_int);
	var_661_int = 0;
	func_4111(var_661_int);
	@@var_652_object:SetNPCDescription(var_661_int);
	var_662_string = "";
	func_4115(var_662_string);
	@@var_652_object:SetPhoto(var_662_string);
	var_663_string = "";
	func_4117(var_663_string);
	@@var_652_object:SetPhoto2(var_663_string);
	var_664_int = 0;
	func_4573(var_664_int);
	@@var_652_object:SetPlayerName(var_664_int);
	IsOverrideActive(var_653_bool);
	var_665_bool = var_653_bool;
	if(var_665_bool != 0) {
		var_645_int = -2;
		return 8;
	}
	DoDialog(var_652_object);
	var_666_bool = 0; var_667_object = Obj();
	func_4027(Obj());
	var_668_object = var_667_object;
	func_3836(var_666_bool, var_667_object);
	var_669_object = Obj(); var_670_object = Obj();
	var_646_object = var_669_object;
	var_652_object = var_670_object;
	TaskCall(11);
	func_2518(var_671_object, var_672_object, var_673_string, var_674_bool, var_669_object, var_670_object);
	TaskReturn();
	@@var_652_object:IsDialogEnd(var_655_bool);
	
Label_2500:
	var_718_bool = var_655_bool == 0; //@nz
	if(var_718_bool != 0) {
		sync();
		@@var_652_object:IsDialogEnd(var_655_bool);
		goto Label_2500;
	}
	var_646_object = Obj();
	func_3818();
	StopDialog(var_652_object);
	@@var_652_object:GetReturnValue((int)-1);
	var_654_int = var_645_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3974(var_264_string)
{
	var_265_bool = 0; var_266_float = 0; var_267_float = 0; var_268_bool = 0; var_269_float = 0; var_270_float = 0;
	lshHasAnimation(var_268_bool, var_264_string);
	var_271_bool = var_268_bool;
	if(var_271_bool != 0) {
		lshGetAnimTimes(var_264_string, var_269_float, var_270_float);
		lshPlayAnimation(var_269_float, var_270_float, (bool)0);
	} else {
		var_274_int = "Can't find lsh animation : " + var_264_string;
		Trace(var_274_int);
	}
	return 6;
	
}


func_3465(var_0_object)
{
	var_41_bool = 0;
	func_3744(var_41_bool);
	var_44_bool = var_41_bool == 0; //@nz
	if(var_44_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_3474:
	func_3641();
	goto Label_3474;
}
EMIT "Return(); Pop(0)";


func_3725(var_49_bool, var_50_cvector)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_bool = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0;
	GetPosition(var_54_cvector);
	var_55_cvector = var_50_cvector - var_54_cvector;
	var_57_float = GetByIndex(var_55_cvector, 0);
	var_58_float = GetByIndex(var_55_cvector, 2);
	Rotate(var_57_float, var_58_float, var_56_bool);
	var_56_bool = var_49_bool;
	return 6;
}


func_4239(var_80_object)
{
	var_82_int = 0; var_83_int = 0;
	@@var_80_object:RemoveItemByType(var_83_int, "Rifle", (int)5);
	@@var_80_object:SelectWeapon();
	return 2;
}


func_4495(var_56_bool, var_57_object, var_58_int)
{
	var_59_object = Obj(); var_60_object = Obj(); var_61_int = 0; var_62_object = Obj(); var_63_object = Obj(); var_64_int = 0;
	func_4482(Obj());
	var_65_object = var_62_object;
	@@var_62_object:Find(var_58_int, var_63_object);
	var_70_bool = var_63_object == 0; //@nz
	if(var_70_bool != 0) {
		var_72_int = "Can't find diary parent with id: " + var_58_int;
		Trace(var_72_int);
		var_56_bool = 0;
		return 6;
	}
	@@var_63_object:AddChild(var_57_object);
	SendWorldWndMessage((int)7);
	@@var_57_object:GetCategory(var_64_int);
	SetDiarySection(var_64_int);
	var_56_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_3990(var_242_string, var_243_bool)
{
	var_246_bool = 0; var_247_float = 0; var_248_float = 0; var_249_bool = 0; var_250_float = 0; var_251_float = 0;
	lshHasAnimation(var_249_bool, var_242_string);
	var_252_bool = var_249_bool;
	if(var_252_bool != 0) {
		lshGetAnimTimes(var_242_string, var_250_float, var_251_float);
		lshPlayAnimation(var_250_float, var_251_float, var_243_bool);
	} else {
		var_254_int = "Can't find lsh animation : " + var_242_string;
		Trace(var_254_int);
	}
	return 6;
	
}


func_663(var_0_object, var_1_object, var_2_object, var_3_string, var_399_object, var_400_object)
{
	var_0_object = var_400_object;
	var_1_object = var_399_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_406_string = "";
		func_726(var_400_object, "Suspicion");
		@@@var_0_object:SetMessage((int)512232);
		@@@var_0_object:ClearReplies();
		var_415_bool = 0; var_416_object = Obj();
		var_416_object = var_1_object;
		func_4257(var_416_object);
		if(var_415_bool != 0) {
			@@@var_0_object:AddReply((int)512233, (int)13389, (int)13388);
		}
		@@@var_0_object:AddReply((int)533144, (int)-1, (int)34662);
		goto Label_696;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x29b";
	}
Label_696:
	var_427_bool = 0;
	func_4119(var_427_bool);
	if(var_427_bool != 0) {

	Label_700:
		lshWaitForAnimEnd();
		var_428_string = var_3_string;
		if(var_428_string != 0) {
		} else {
			var_429_string = "";
			var_429_string = var_2_object;
			func_3974(var_429_string);
			goto Label_700;
	}
		PlayAnimation("all", "idle");

	Label_715:
		WaitForAnimEnd();
		var_432_string = var_3_string;
		if(var_432_string != 0) {
			goto Label_725;
		}
		PlayAnimation("all", "idle");
		goto Label_715;
	}
	goto Label_725;
	
Label_725:
	return 0;
	
}


func_4247()
{
	func_4456();
	var_104_bool = 0; var_105_string = ""; var_106_string = "";
	func_4055(var_104_bool, "quest_d9_01", "completed");
	return 0;
}


func_3735(var_45_bool, var_46_object)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	@@var_46_object:GetPosition(var_48_cvector);
	var_49_bool = 0; var_50_cvector = CVector(0,0,0);
	var_48_cvector = var_50_cvector;
	func_3725(var_49_bool, var_50_cvector);
	var_49_bool = var_45_bool;
	return 2;
}


func_3479(var_66_bool)
{
	var_67_object = Obj(); var_68_object = Obj();
	FindActor(var_68_object, "player");
	var_70_bool = var_68_object == 0; //@nz
	if(var_70_bool != 0) {
		var_66_bool = 0;
		return 2;
	}
	var_71_bool = 0; var_72_object = Obj();
	var_68_object = var_72_object;
	func_3735(var_71_bool, var_72_object);
	var_71_bool = var_66_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3744(var_41_bool)
{
	var_42_bool = 0; var_43_bool = 0;
	IsLoaded(var_43_bool);
	var_43_bool = var_41_bool;
	return 2;
}


func_4257(var_415_bool)
{
	var_417_int = 0; var_418_string = "";
	func_4043(var_417_int, "ood7Han1");
	var_420_bool = var_417_int == (int)0;
	if(var_420_bool != 0) {
		var_415_bool = 1;
		return 0;
	}
	var_415_bool = 0;
	return 0;
}


func_3749(var_75_bool, var_76_object, var_77_float)
{
	var_78_float = 0; var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_bool = 0; var_86_bool = 0; var_87_float = 0; var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_bool = 0; var_95_bool = 0;
	@@var_76_object:GetPosition(var_88_cvector);
	@@var_76_object:GetEyesHeight(var_87_float);
	var_96_float = GetByIndex(var_88_cvector, 1);
	var_96_float = var_96_float + var_87_float;
	SetByIndex(var_88_cvector, 1) = var_96_float;
	GetPosition(var_89_cvector);
	GetEyesHeight(var_87_float);
	var_97_float = GetByIndex(var_89_cvector, 1);
	var_97_float = var_97_float + var_87_float;
	SetByIndex(var_89_cvector, 1) = var_97_float;
	var_90_cvector = var_88_cvector - var_89_cvector;
	var_98_float = GetByIndex(var_90_cvector, 1);
	SetByIndex(var_90_cvector, 1) = (float)0;
	var_99_int = var_90_cvector | var_90_cvector;
	var_100_float = sqrt(var_99_int);
	var_90_cvector = var_90_cvector / var_100_float;
	var_91_cvector = -var_90_cvector;
	var_101_float = var_90_cvector * var_77_float;
	var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0);
	var_103_cvector = var_91_cvector ^ CVector(0.0, 1.0, 0.0);
	func_4033(var_102_cvector, var_103_cvector);
	var_111_float = var_102_cvector * (int)25;
	var_112_int = var_101_float + var_111_float;
	var_92_cvector = var_112_int - CVector(0.0, 10.0, 0.0);
	var_93_cvector = var_89_cvector + var_92_cvector;
	IsOverrideActive(var_94_bool);
	var_114_bool = var_94_bool;
	if(var_114_bool != 0) {
		var_75_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_93_cvector, var_91_cvector, (bool)1);
	var_116_float = GetByIndex(var_92_cvector, 0);
	var_117_float = GetByIndex(var_92_cvector, 2);
	Rotate(var_116_float, var_117_float);
	var_118_bool = 0;
	func_4119(var_118_bool);
	if(var_118_bool != 0) {
	} else {
		HasAnimationTrack(var_95_bool, "head");
		var_120_bool = var_95_bool;
		if(var_120_bool == 0) goto Label_3812;
		LookAsyncCamera("head");
	}
Label_3812:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_75_bool = 1;
	return 18;
	
}


func_4005(var_170_bool, var_171_string)
{
	var_172_bool = 0; var_173_bool = 0;
	var_174_bool = 0;
	func_4119(var_174_bool);
	if(var_174_bool != 0) {
		lshHasSpeech(var_173_bool, var_171_string);
		var_175_bool = var_173_bool;
		if(var_175_bool != 0) {
			lshPlaySpeech(var_171_string);
			var_170_bool = 1;
			return 2;
		}
	}
	var_170_bool = 0;
	return 2;
}


func_3494(var_0_object)
{
	var_118_float = GetByIndex(var_0_object, 0);
	var_119_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_118_float, var_119_float);
	return 0;
}


func_3499(var_49_bool)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_object = Obj(); var_53_bool = 0;
	FindActor(var_52_object, "player");
	var_55_bool = var_52_object == 0; //@nz
	if(var_55_bool != 0) {
		var_49_bool = 0;
		return 4;
	}
	var_56_float = 0; var_57_object = Obj();
	var_52_object = var_57_object;
	func_3717(var_56_float, var_57_object);
	var_65_bool = var_56_float > (float)90000.0;
	if(var_65_bool != 0) {
		var_49_bool = 0;
		return 4;
	}
	CanSee(var_53_bool, var_52_object);
	var_53_bool = var_49_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_4523(var_132_object)
{
	var_133_object = Obj(); var_134_object = Obj(); var_135_object = Obj(); var_136_object = Obj();
	GetMainOutdoorScene(var_135_object);
	var_137_bool = var_135_object == 0; //@ne
	if(var_137_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_136_object = 0;
		var_136_object = var_132_object;
		return 4;
	}
	@@var_135_object:GetMap(var_136_object);
	var_136_object = var_132_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4269(var_686_bool)
{
	var_688_int = 0; var_689_string = "";
	func_4043(var_688_int, "d11q05");
	var_691_bool = var_688_int == (int)1;
	if(var_691_bool != 0) {
		var_686_bool = 1;
		return 0;
	}
	var_686_bool = 0;
	return 0;
}


func_178(var_2_object, var_340_string)
{
	var_341_bool = 0;
	func_4119(var_341_bool);
	var_342_bool = var_341_bool == 0; //@nz
	if(var_342_bool != 0) {
		return 0;
	}
	var_343_bool = var_340_string == var_2_object;
	if(var_343_bool != 0) {
		return 0;
	}
	var_344_string = ""; var_345_bool = 0;
	var_340_string = var_344_string;
	var_347_bool = var_340_string == "";
	if(var_347_bool != 0) {
		var_345_bool = 0;
	} else {
		var_345_bool = 1;
	}
	func_3990(var_344_string, var_345_bool);
	var_2_object = var_340_string;
	return 0;
	
}


func_4020()
{
	var_44_bool = 0;
	func_4119(var_44_bool);
	if(var_44_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2999(var_0_object, var_722_int, var_723_object)
{
	var_725_object = Obj(); var_726_bool = 0; var_727_int = 0; var_728_bool = 0; var_729_object = Obj(); var_730_bool = 0; var_731_int = 0; var_732_bool = 0;
	var_0_object = var_723_object;
	var_733_bool = 0; var_734_object = Obj(); var_735_float = 0;
	var_723_object = var_734_object;
	func_3749(var_733_bool, var_734_object, (float)70.0);
	var_736_bool = var_733_bool == 0; //@nz
	if(var_736_bool != 0) {
		var_722_int = -2;
		return 8;
	}
	CreateDialog(var_729_object);
	var_737_int = 0;
	func_4113(var_737_int);
	@@var_729_object:SetNPCName(var_737_int);
	var_738_int = 0;
	func_4111(var_738_int);
	@@var_729_object:SetNPCDescription(var_738_int);
	var_739_string = "";
	func_4115(var_739_string);
	@@var_729_object:SetPhoto(var_739_string);
	var_740_string = "";
	func_4117(var_740_string);
	@@var_729_object:SetPhoto2(var_740_string);
	var_741_int = 0;
	func_4573(var_741_int);
	@@var_729_object:SetPlayerName(var_741_int);
	IsOverrideActive(var_730_bool);
	var_742_bool = var_730_bool;
	if(var_742_bool != 0) {
		var_722_int = -2;
		return 8;
	}
	DoDialog(var_729_object);
	var_743_bool = 0; var_744_object = Obj();
	func_4027(Obj());
	var_745_object = var_744_object;
	func_3836(var_743_bool, var_744_object);
	var_746_object = Obj(); var_747_object = Obj();
	var_723_object = var_746_object;
	var_729_object = var_747_object;
	TaskCall(13);
	func_3080(var_748_object, var_749_object, var_750_string, var_751_bool, var_746_object, var_747_object);
	TaskReturn();
	@@var_729_object:IsDialogEnd(var_732_bool);
	
Label_3062:
	var_779_bool = var_732_bool == 0; //@nz
	if(var_779_bool != 0) {
		sync();
		@@var_729_object:IsDialogEnd(var_732_bool);
		goto Label_3062;
	}
	var_723_object = Obj();
	func_3818();
	StopDialog(var_729_object);
	@@var_729_object:GetReturnValue((int)-1);
	var_731_int = var_722_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4281(var_692_bool, var_693_object)
{
	var_694_bool = 0; var_695_object = Obj(); var_696_string = "";
	var_693_object = var_695_object;
	func_4048(var_694_bool, var_695_object, "burah_serum");
	if(var_694_bool != 0) {
		var_692_bool = 1;
		return 0;
	}
	var_692_bool = 0;
	return 0;
}


func_3258(var_0_object, var_781_int, var_782_object)
{
	var_784_object = Obj(); var_785_bool = 0; var_786_int = 0; var_787_bool = 0; var_788_object = Obj(); var_789_bool = 0; var_790_int = 0; var_791_bool = 0;
	var_0_object = var_782_object;
	var_792_bool = 0; var_793_object = Obj(); var_794_float = 0;
	var_782_object = var_793_object;
	func_3749(var_792_bool, var_793_object, (float)70.0);
	var_795_bool = var_792_bool == 0; //@nz
	if(var_795_bool != 0) {
		var_781_int = -2;
		return 8;
	}
	CreateDialog(var_788_object);
	var_796_int = 0;
	func_4113(var_796_int);
	@@var_788_object:SetNPCName(var_796_int);
	var_797_int = 0;
	func_4111(var_797_int);
	@@var_788_object:SetNPCDescription(var_797_int);
	var_798_string = "";
	func_4115(var_798_string);
	@@var_788_object:SetPhoto(var_798_string);
	var_799_string = "";
	func_4117(var_799_string);
	@@var_788_object:SetPhoto2(var_799_string);
	var_800_int = 0;
	func_4573(var_800_int);
	@@var_788_object:SetPlayerName(var_800_int);
	IsOverrideActive(var_789_bool);
	var_801_bool = var_789_bool;
	if(var_801_bool != 0) {
		var_781_int = -2;
		return 8;
	}
	DoDialog(var_788_object);
	var_802_bool = 0; var_803_object = Obj();
	func_4027(Obj());
	var_804_object = var_803_object;
	func_3836(var_802_bool, var_803_object);
	var_805_object = Obj(); var_806_object = Obj();
	var_782_object = var_805_object;
	var_788_object = var_806_object;
	TaskCall(15);
	func_3339(var_807_object, var_808_object, var_809_string, var_810_bool, var_805_object, var_806_object);
	TaskReturn();
	@@var_788_object:IsDialogEnd(var_791_bool);
	
Label_3321:
	var_835_bool = var_791_bool == 0; //@nz
	if(var_835_bool != 0) {
		sync();
		@@var_788_object:IsDialogEnd(var_791_bool);
		goto Label_3321;
	}
	var_782_object = Obj();
	func_3818();
	StopDialog(var_788_object);
	@@var_788_object:GetReturnValue((int)-1);
	var_790_int = var_781_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4027(var_138_object)
{
	var_139_object = Obj(); var_140_object = Obj();
	self(var_140_object);
	var_140_object = var_138_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4540(var_129_object, var_130_string, var_131_float)
{
	var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_object = Obj(); var_142_bool = 0; var_143_cvector = CVector(0,0,0); var_144_cvector = CVector(0,0,0); var_145_object = Obj(); var_146_bool = 0;
	GetMainOutdoorScene(var_145_object);
	var_147_bool = var_145_object == 0; //@ne
	if(var_147_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_145_object:GetLocator(var_130_string, var_146_bool, var_143_cvector, var_144_cvector);
	var_149_bool = var_146_bool == 0; //@nz
	if(var_149_bool != 0) {
		var_151_int = "Warning: outdoor scene locator " + var_130_string;
		var_153_int = var_151_int + " doesnt exist";
		Trace(var_153_int);
	}
	@@var_145_object:GetMap(var_129_object);
	var_154_bool = var_129_object == 0; //@ne
	if(var_154_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_156_float = GetByIndex(var_143_cvector, 0);
	var_157_float = GetByIndex(var_143_cvector, 2);
	@@var_129_object:SetMapParams(var_156_float, var_157_float, var_131_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_3521()
{
	var_839_float = 0; var_840_float = 0;
	rand(var_840_float, (int)8, (int)16);
	SetTimer((int)10, var_840_float);
	return 2;
}


func_4033(var_102_cvector, var_103_cvector)
{
	var_105_float = 0; var_106_float = 0;
	var_107_int = var_103_cvector | var_103_cvector;
	var_106_float = sqrt(var_107_int);
	var_108_float = 9.999999974752427e-07;
	var_109_bool = var_106_float < var_108_float;
	if(var_109_bool != 0) {
		var_102_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_102_cvector = var_103_cvector / var_106_float;
	return 2;
}


func_4292(var_623_bool)
{
	var_625_int = 0; var_626_string = "";
	func_4043(var_625_int, "d9q01");
	var_628_bool = var_625_int == (int)1000;
	if(var_628_bool != 0) {
		var_623_bool = 1;
		return 0;
	}
	var_623_bool = 0;
	return 0;
}


func_3530()
{
	KillTimer((int)10);
	return 0;
}


func_2251(var_0_object, var_1_object, var_2_object, var_3_string, var_231_object, var_232_object)
{
	var_0_object = var_232_object;
	var_1_object = var_231_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_238_string = "";
		func_2309(var_232_object, "Neutral");
		@@@var_0_object:SetMessage((int)518006);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)518007, (int)36191, (int)19140);
		@@@var_0_object:AddReply((int)534556, (int)36189, (int)36188);
		goto Label_2279;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x8cf";
	}
Label_2279:
	var_262_bool = 0;
	func_4119(var_262_bool);
	if(var_262_bool != 0) {

	Label_2283:
		lshWaitForAnimEnd();
		var_263_string = var_3_string;
		if(var_263_string != 0) {
		} else {
			var_264_string = "";
			var_264_string = var_2_object;
			func_3974(var_264_string);
			goto Label_2283;
	}
		PlayAnimation("all", "idle");

	Label_2298:
		WaitForAnimEnd();
		var_277_string = var_3_string;
		if(var_277_string != 0) {
			goto Label_2308;
		}
		PlayAnimation("all", "idle");
		goto Label_2298;
	}
	goto Label_2308;
	
Label_2308:
	return 0;
	
}


func_4043(var_330_int, var_331_string)
{
	var_332_int = 0; var_333_int = 0;
	GetVariable(var_331_string, var_333_int);
	var_333_int = var_330_int;
	return 2;
}


func_4304(var_629_bool)
{
	var_631_int = 0; var_632_string = "";
	func_4043(var_631_int, "ood9Xan3");
	var_634_bool = var_631_int == (int)0;
	if(var_634_bool != 0) {
		var_629_bool = 1;
		return 0;
	}
	var_629_bool = 0;
	return 0;
}


func_976(var_0_object, var_1_object, var_2_object, var_3_string, var_463_object, var_464_object)
{
	var_0_object = var_464_object;
	var_1_object = var_463_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_470_bool = 0; var_471_object = Obj();
		var_471_object = var_1_object;
		func_4333(var_471_object);
		if(var_470_bool != 0) {
			var_476_object = Obj(); var_477_object = Obj();
			var_476_object = var_1_object;
			var_477_object = var_0_object;
			func_4218();
			var_480_string = "";
			func_1064(var_464_object, "Grin");
			@@@var_0_object:SetMessage((int)512330);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512331, (int)13491, (int)13490);
			@@@var_0_object:AddReply((int)512336, (int)-1, (int)13495);
		} else {
				var_503_string = "";
				func_1064(var_464_object, "Neutral");
				@@@var_0_object:SetMessage((int)513781);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)513782, (int)-1, (int)15018);
				@@@var_0_object:AddReply((int)541839, (int)-1, (int)44056);
				goto Label_1034;
		}
	}
Label_1034:
	var_495_bool = 0;
	func_4119(var_495_bool);
	if(var_495_bool != 0) {

	Label_1038:
		lshWaitForAnimEnd();
		var_496_string = var_3_string;
		if(var_496_string != 0) {
		} else {
			var_497_string = "";
			var_497_string = var_2_object;
			func_3974(var_497_string);
			goto Label_1038;
	}
		PlayAnimation("all", "idle");

	Label_1053:
		WaitForAnimEnd();
		var_500_string = var_3_string;
		if(var_500_string != 0) {
			goto Label_1063;
		}
		PlayAnimation("all", "idle");
		goto Label_1053;

	}
	goto Label_1063;
	
Label_1063:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x3d4";


func_4048(var_694_bool, var_695_object, var_696_string)
{
	var_697_int = 0; var_698_bool = 0; var_699_int = 0; var_700_bool = 0;
	GetInvItemByName(var_699_int, var_696_string);
	@@var_695_object:HasItem(var_699_int, var_700_bool);
	var_700_bool = var_694_bool;
	return 4;
}


func_726(var_2_object, var_406_string)
{
	var_407_bool = 0;
	func_4119(var_407_bool);
	var_408_bool = var_407_bool == 0; //@nz
	if(var_408_bool != 0) {
		return 0;
	}
	var_409_bool = var_406_string == var_2_object;
	if(var_409_bool != 0) {
		return 0;
	}
	var_410_string = ""; var_411_bool = 0;
	var_406_string = var_410_string;
	var_413_bool = var_406_string == "";
	if(var_413_bool != 0) {
		var_411_bool = 0;
	} else {
		var_411_bool = 1;
	}
	func_3990(var_410_string, var_411_bool);
	var_2_object = var_406_string;
	return 0;
	
}


func_2518(var_0_object, var_1_object, var_2_object, var_3_string, var_669_object, var_670_object)
{
	var_0_object = var_670_object;
	var_1_object = var_669_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_676_string = "";
		func_2595(var_670_object, "Suspicion");
		@@@var_0_object:SetMessage((int)534481);
		@@@var_0_object:ClearReplies();
		var_685_bool = 0;
		var_685_bool = 0;
		var_686_bool = 0; var_687_object = Obj();
		var_687_object = var_1_object;
		func_4269(var_687_object);
		if(var_686_bool != 0) {
			var_692_bool = 0; var_693_object = Obj();
			var_693_object = var_1_object;
			func_4281(var_692_bool, var_693_object);
			if(var_692_bool != 0) {
				var_685_bool = 1;
			}
		}
		if(var_685_bool != 0) {
			@@@var_0_object:AddReply((int)534482, (int)38410, (int)36127);
		}
		@@@var_0_object:AddReply((int)534489, (int)-1, (int)36134);
		@@@var_0_object:AddReply((int)536587, (int)-1, (int)38409);
		goto Label_2565;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x9da";
	}
Label_2565:
	var_710_bool = 0;
	func_4119(var_710_bool);
	if(var_710_bool != 0) {

	Label_2569:
		lshWaitForAnimEnd();
		var_711_string = var_3_string;
		if(var_711_string != 0) {
		} else {
			var_712_string = "";
			var_712_string = var_2_object;
			func_3974(var_712_string);
			goto Label_2569;
	}
		PlayAnimation("all", "idle");

	Label_2584:
		WaitForAnimEnd();
		var_715_string = var_3_string;
		if(var_715_string != 0) {
			goto Label_2594;
		}
		PlayAnimation("all", "idle");
		goto Label_2584;
	}
	goto Label_2594;
	
Label_2594:
	return 0;
	
}


func_4055(var_74_bool, var_75_string, var_76_string)
{
	var_77_object = Obj(); var_78_object = Obj();
	FindActor(var_78_object, var_75_string);
	var_79_bool = var_78_object == 0; //@ne
	if(var_79_bool != 0) {
		var_74_bool = 0;
		return 2;
	}
	Trigger(var_78_object, var_76_string);
	var_74_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4316(var_336_bool)
{
	var_336_bool = 1;
	return 0;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


func_4573(var_127_int)
{
	var_128_int = 0; var_129_int = 0;
	GetVariable("branch", var_129_int);
	var_132_bool = var_129_int == (int)0;
	if(var_132_bool != 0) {
		var_127_int = 1;
		return 2;
	EMIT "GOTO 0x11ec";
	}
	var_134_bool = var_129_int == (int)1;
	if(var_134_bool != 0) {
		var_127_int = 2;
		return 2;
	}
	var_127_int = 3;
	return 2;
}


func_4321(var_328_bool)
{
	var_330_int = 0; var_331_string = "";
	func_4043(var_330_int, "d3q02");
	var_335_bool = var_330_int == (int)3;
	if(var_335_bool != 0) {
		var_328_bool = 1;
		return 0;
	}
	var_328_bool = 0;
	return 0;
}


func_4067(var_64_float)
{
	var_65_float = 0; var_66_float = 0;
	GetGameTime(var_66_float);
	var_66_float = var_64_float;
	return 2;
}


func_4072(var_191_int)
{
	var_192_float = 0; var_193_float = 0;
	GetGameTime(var_193_float);
	var_195_int = 0;
	var_195_int = var_193_float / (int)24;
	var_191_int = (int)1 + var_195_int;
	return 2;
}


func_3818()
{
	var_282_bool = 0; var_283_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_285_bool = 0;
	func_4119(var_285_bool);
	if(var_285_bool != 0) {
	} else {
		HasAnimationTrack(var_283_bool, "head");
		var_287_bool = var_283_bool;
		if(var_287_bool == 0) goto Label_3835;
		UnlookAsync("head");
	}
Label_3835:
	return 2;
	
}


func_4333(var_470_bool)
{
	var_472_int = 0; var_473_string = "";
	func_4043(var_472_int, "ood8Han1");
	var_475_bool = var_472_int == (int)0;
	if(var_475_bool != 0) {
		var_470_bool = 1;
		return 0;
	}
	var_470_bool = 0;
	return 0;
}


func_4590(var_59_object)
{
	var_60_int = 0; var_61_int = 0;
	GetVariable("mt_han", var_61_int);
	var_63_bool = var_61_int == 0; //@nz
	if(var_63_bool != 0) {
		var_64_int = 0; var_65_object = Obj();
		var_59_object = var_65_object;
		TaskCall(8);
		func_2170(var_66_object, var_64_int, var_65_object);
		TaskReturn();
		SetVariable("mt_han", (int)1);
	}
	var_291_bool = 0; var_292_int = 0;
	func_4081(var_291_bool, (int)1);
	if(var_291_bool != 0) {
		return 2;
	}
	var_294_bool = 0; var_295_int = 0;
	func_4081(var_294_bool, (int)3);
	if(var_294_bool != 0) {
		var_296_int = 0; var_297_object = Obj();
		var_59_object = var_297_object;
		TaskCall(0);
		func_0(var_298_object, var_296_int, var_297_object);
		TaskReturn();
		return 2;
	}
	var_373_bool = 0; var_374_int = 0;
	func_4081(var_373_bool, (int)7);
	if(var_373_bool != 0) {
		var_375_int = 0; var_376_object = Obj();
		var_59_object = var_376_object;
		TaskCall(2);
		func_582(var_377_object, var_375_int, var_376_object);
		TaskReturn();
		return 2;
	}
	var_437_bool = 0; var_438_int = 0;
	func_4081(var_437_bool, (int)8);
	if(var_437_bool != 0) {
		var_439_int = 0; var_440_object = Obj();
		var_59_object = var_440_object;
		TaskCall(4);
		func_895(var_441_object, var_439_int, var_440_object);
		TaskReturn();
		return 2;
	}
	var_513_bool = 0; var_514_int = 0;
	func_4081(var_513_bool, (int)9);
	if(var_513_bool != 0) {
		var_515_int = 0; var_516_object = Obj();
		var_59_object = var_516_object;
		TaskCall(6);
		func_1294(var_517_object, var_515_int, var_516_object);
		TaskReturn();
		return 2;
	}
	var_643_bool = 0; var_644_int = 0;
	func_4081(var_643_bool, (int)11);
	if(var_643_bool != 0) {
		var_645_int = 0; var_646_object = Obj();
		var_59_object = var_646_object;
		TaskCall(10);
		func_2437(var_647_object, var_645_int, var_646_object);
		TaskReturn();
		return 2;
	}
	var_720_bool = 0; var_721_int = 0;
	func_4081(var_720_bool, (int)12);
	if(var_720_bool != 0) {
		var_722_int = 0; var_723_object = Obj();
		var_59_object = var_723_object;
		TaskCall(12);
		func_2999(var_724_object, var_722_int, var_723_object);
		TaskReturn();
		return 2;
	}
	var_781_int = 0; var_782_object = Obj();
	var_59_object = var_782_object;
	TaskCall(14);
	func_3258(var_783_object, var_781_int, var_782_object);
	TaskReturn();
	return 2;
}


func_1519(var_2_object, var_563_string)
{
	var_564_bool = 0;
	func_4119(var_564_bool);
	var_565_bool = var_564_bool == 0; //@nz
	if(var_565_bool != 0) {
		return 0;
	}
	var_566_bool = var_563_string == var_2_object;
	if(var_566_bool != 0) {
		return 0;
	}
	var_567_string = ""; var_568_bool = 0;
	var_563_string = var_567_string;
	var_570_bool = var_563_string == "";
	if(var_570_bool != 0) {
		var_568_bool = 0;
	} else {
		var_568_bool = 1;
	}
	func_3990(var_567_string, var_568_bool);
	var_2_object = var_563_string;
	return 0;
	
}


func_4081(var_291_bool, var_292_int)
{
	var_293_int = 0;
	func_4072(var_293_int);
	var_291_bool = var_293_int == var_292_int;
	return 0;
}


func_4087(var_65_string, var_66_int)
{
	var_67_string = ""; var_68_string = "";
	var_69_int = var_66_int;
	if(var_69_int != 0) {
		"idle" = "idle" + var_66_int;
	}
	var_68_string = var_65_string;
	return 2;
}


func_4345(var_547_bool)
{
	var_549_int = 0; var_550_string = "";
	func_4043(var_549_int, "d9q01");
	var_552_bool = var_549_int == (int)1;
	if(var_552_bool != 0) {
		var_547_bool = 1;
		return 0;
	}
	var_547_bool = 0;
	return 0;
}


func_3836(var_136_bool, var_137_object)
{
	var_141_int = 0; var_142_int = 0; var_143_int = 0; var_144_int = 0;
	GetVariable("voice_common", var_143_int);
	var_146_int = var_143_int;
	if(var_146_int != 0) {
		var_147_bool = 0; var_148_object = Obj();
		var_137_object = var_148_object;
		func_3894(var_147_bool, var_148_object);
		var_177_bool = var_147_bool == 0; //@nz
		if(var_177_bool != 0) {
			var_178_bool = 0; var_179_object = Obj();
			var_137_object = var_179_object;
			func_3931(var_178_bool, var_179_object);
			var_213_bool = var_178_bool == 0; //@nz
			if(var_213_bool != 0) {
				var_136_bool = 0;
				return 4;
			}
		}
		irand(var_144_int, (int)2);
		var_215_int = var_144_int;
		if(var_215_int != 0) {
			var_218_int = var_143_int + (int)1;
			var_220_int = var_218_int % (int)3;
			SetVariable("voice_common", var_220_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_223_bool = 0; var_224_object = Obj();
		var_137_object = var_224_object;
		func_3931(var_223_bool, var_224_object);
		var_225_bool = var_223_bool == 0; //@nz
		if(var_225_bool != 0) {
			var_226_bool = 0; var_227_object = Obj();
			var_137_object = var_227_object;
			func_3894(var_226_bool, var_227_object);
			var_228_bool = var_226_bool == 0; //@nz
			if(var_228_bool != 0) {
				var_136_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_3892;
	
Label_3892:
	var_136_bool = 1;
	return 4;
	
}


func_4094(var_59_int)
{
	var_60_int = 0; var_61_bool = 0; var_62_int = 0; var_63_bool = 0;
	var_62_int = 0;
	
Label_4096:
	var_65_string = ""; var_66_int = 0;
	var_62_int = var_66_int;
	func_4087(var_65_string, var_66_int);
	HasAnimation(var_63_bool, "all", var_65_string);
	var_70_bool = var_63_bool == 0; //@nz
	if(var_70_bool != 0) {
	} else {
		var_62_int = var_62_int + (int)1;
		goto Label_4096;
	}
	var_62_int = var_59_int;
	return 4;
	
}


