// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,SendWorldWndMessage/1,CreateFloatVector/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Autizm|W:Disturbance|W:Pain|W:Welldie|W:player|A:GetPosition|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:reputation|W:ui/NPC_Laska.png|W:ui/NPC_Laska_b.png|W:lockpick1time is given|W:lockpick|W:uses|W:playsound|W:giveitem|W:ood2Laska1|W:ood2Laska2|W:ood11Laska1|W:bandage is given|W:bandage|W:tourniquet is given|W:tourniquet|W:powder is given|W:powder|W:ood6Laska1|W:d6q01|W:d6q01LaskaGotoAlbinos|W:pt_d6q03_albinos|A:AddMark|W:quest_d6_01|W:albinos_klara|W:eva_klara|W:KnowLaska|W:ood3Laska1|W:Knife is given|W:Knife|W:durability|W:d6q03AlbinosKilled|W:d11q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:branch|W:mt_laska
// @GLOBALS: 0:object:
// @RUN_OP: 0x9b3
// @RUN_TASK: 14
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa6 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1c5 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x41b vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x55b vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x70f vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x820 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0x989 vars=int,int
// @TASK_14: vars=cvector params=0
// @EVENT_7: op=0x9fc vars=int
// @EVENT_6: op=0xa22 vars=
// @EVENT_5: op=0xa31 vars=
// @EVENT_45: op=0xa3e vars=bool
// @EVENT_0: op=0xa4a vars=object
// @PE: 0x51,0x90,0xa6,0x166,0x1af,0x1c5,0x3c6,0x405,0x41b,0x4fd,0x545,0x55b,0x6ba,0x6f9,0x70f,0x7bd,0x80a,0x820,0x939,0x973,0x989,0x9b3,0x9fc,0xa22,0xa3e,0xc1b,0xc57,0xc9e,0xcdb,0xce1,0xce7,0xced,0xcf3,0xcfe,0xd09,0xd14,0xd1b,0xd3d,0xd48,0xd4e,0xd69,0xd75,0xd81,0xd8d,0xd99,0xda5,0xdb1,0xdbd

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3076();
		var_41_bool = var_36_bool == (int)429;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_3400();
			var_46_string = "";
			func_144(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500370);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500371, (int)432, (int)430);
			@@@var_0_object:AddReply((int)500372, (int)437, (int)431);
			return 0;
		}
		var_71_bool = var_36_bool == (int)437;
		if(var_71_bool != 0) {
			var_72_string = "";
			func_144(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500377);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500378, (int)432, (int)438);
			return 0;
		}
		var_78_bool = var_36_bool == (int)432;
		if(var_78_bool != 0) {
			var_79_string = "";
			func_144(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500373);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500374, (int)435, (int)433);
			@@@var_0_object:AddReply((int)500375, (int)435, (int)434);
			return 0;
		}
		var_88_bool = var_36_bool == (int)435;
		if(var_88_bool != 0) {
			var_89_string = "";
			func_144(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500376);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500381, (int)-1, (int)442);
			@@@var_0_object:AddReply((int)500379, (int)-1, (int)440);
			return 0;
		}
		var_3_string = true;
		var_97_bool = 0;
		func_3268(var_97_bool);
		if(var_97_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa7";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3076();
		var_41_bool = var_37_cvector == (int)35473;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_3297();
		}
		var_47_bool = var_37_cvector == (int)35486;
		if(var_47_bool != 0) {
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_3270(var_49_object);
		}
		var_73_bool = var_37_cvector == (int)35487;
		if(var_73_bool != 0) {
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_object;
			func_3270(var_75_object);
		}
		var_77_bool = var_37_cvector == (int)10416;
		if(var_77_bool != 0) {
			var_78_object = Obj(); var_79_object = Obj();
			var_78_object = var_1_object;
			var_79_object = var_0_object;
			func_3303();
		}
		var_83_bool = var_36_bool == (int)10415;
		if(var_83_bool != 0) {
			var_84_string = "";
			func_431(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509473);
			@@@var_0_object:ClearReplies();
			var_102_bool = 0; var_103_object = Obj();
			var_103_object = var_1_object;
			func_3433(var_103_object);
			if(var_102_bool != 0) {
				@@@var_0_object:AddReply((int)533914, (int)35474, (int)35473);
			}
			var_113_bool = 0; var_114_object = Obj();
			var_114_object = var_1_object;
			func_3445(var_114_object);
			if(var_113_bool != 0) {
				@@@var_0_object:AddReply((int)509474, (int)10417, (int)10416);
			}
			@@@var_0_object:AddReply((int)509487, (int)-1, (int)10429);
			return 0;
		}
		var_126_bool = var_36_bool == (int)10417;
		if(var_126_bool != 0) {
			var_127_string = "";
			func_431(var_37_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)509475);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509476, (int)10419, (int)10418);
			@@@var_0_object:AddReply((int)509481, (int)10424, (int)10423);
			return 0;
		}
		var_136_bool = var_36_bool == (int)10424;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_431(var_37_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)509482);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509483, (int)10426, (int)10425);
			return 0;
		}
		var_143_bool = var_36_bool == (int)10426;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_431(var_37_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)509484);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509485, (int)-1, (int)10427);
			@@@var_0_object:AddReply((int)509486, (int)-1, (int)10428);
			return 0;
		}
		var_153_bool = var_36_bool == (int)10419;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_431(var_37_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)509477);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509478, (int)-1, (int)10420);
			@@@var_0_object:AddReply((int)509479, (int)-1, (int)10421);
			@@@var_0_object:AddReply((int)509480, (int)-1, (int)10422);
			return 0;
		}
		var_166_bool = var_36_bool == (int)35474;
		if(var_166_bool != 0) {
			var_167_string = "";
			func_431(var_37_cvector, "Disturbance");
			@@@var_0_object:SetMessage((int)533915);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533916, (int)35476, (int)35475);
			@@@var_0_object:AddReply((int)533923, (int)35483, (int)35482);
			return 0;
		}
		var_176_bool = var_36_bool == (int)35483;
		if(var_176_bool != 0) {
			var_177_string = "";
			func_431(var_37_cvector, "Disturbance");
			@@@var_0_object:SetMessage((int)533924);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533925, (int)35478, (int)35484);
			return 0;
		}
		var_183_bool = var_36_bool == (int)35476;
		if(var_183_bool != 0) {
			var_184_string = "";
			func_431(var_37_cvector, "Disturbance");
			@@@var_0_object:SetMessage((int)533917);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533918, (int)35478, (int)35477);
			@@@var_0_object:AddReply((int)533936, (int)35499, (int)35498);
			return 0;
		}
		var_193_bool = var_36_bool == (int)35499;
		if(var_193_bool != 0) {
			var_194_string = "";
			func_431(var_37_cvector, "Disturbance");
			@@@var_0_object:SetMessage((int)533937);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533939, (int)35504, (int)35501);
			@@@var_0_object:AddReply((int)533938, (int)35478, (int)35500);
			return 0;
		}
		var_203_bool = var_36_bool == (int)35504;
		if(var_203_bool != 0) {
			var_204_string = "";
			func_431(var_37_cvector, "Disturbance");
			@@@var_0_object:SetMessage((int)533940);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533941, (int)35506, (int)35505);
			return 0;
		}
		var_210_bool = var_36_bool == (int)35506;
		if(var_210_bool != 0) {
			var_211_string = "";
			func_431(var_37_cvector, "Pain");
			@@@var_0_object:SetMessage((int)533942);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533943, (int)35508, (int)35507);
			@@@var_0_object:AddReply((int)533948, (int)35510, (int)35512);
			return 0;
		}
		var_220_bool = var_36_bool == (int)35510;
		if(var_220_bool != 0) {
			var_221_string = "";
			func_431(var_37_cvector, "Pain");
			@@@var_0_object:SetMessage((int)533946);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533947, (int)-1, (int)35511);
			return 0;
		}
		var_227_bool = var_36_bool == (int)35508;
		if(var_227_bool != 0) {
			var_228_string = "";
			func_431(var_37_cvector, "Pain");
			@@@var_0_object:SetMessage((int)533944);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533945, (int)-1, (int)35509);
			return 0;
		}
		var_234_bool = var_36_bool == (int)35478;
		if(var_234_bool != 0) {
			var_235_string = "";
			func_431(var_37_cvector, "Disturbance");
			@@@var_0_object:SetMessage((int)533919);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533922, (int)35485, (int)35481);
			@@@var_0_object:AddReply((int)533930, (int)35490, (int)35489);
			return 0;
		}
		var_244_bool = var_36_bool == (int)35490;
		if(var_244_bool != 0) {
			var_245_string = "";
			func_431(var_37_cvector, "Welldie");
			@@@var_0_object:SetMessage((int)533931);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533932, (int)35493, (int)35491);
			@@@var_0_object:AddReply((int)533934, (int)35485, (int)35494);
			return 0;
		}
		var_254_bool = var_36_bool == (int)35493;
		if(var_254_bool != 0) {
			var_255_string = "";
			func_431(var_37_cvector, "Welldie");
			@@@var_0_object:SetMessage((int)533933);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533935, (int)35485, (int)35495);
			return 0;
		}
		var_261_bool = var_36_bool == (int)35485;
		if(var_261_bool != 0) {
			var_262_string = "";
			func_431(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533926);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533927, (int)-1, (int)35486);
			@@@var_0_object:AddReply((int)533928, (int)-1, (int)35487);
			return 0;
		}
		var_3_string = true;
		var_270_bool = 0;
		func_3268(var_270_bool);
		if(var_270_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1c6";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3076();
		var_41_bool = var_37_cvector == (int)10978;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_3406();
		}
		var_47_bool = var_37_cvector == (int)10976;
		if(var_47_bool != 0) {
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_3337(var_49_object);
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_3291();
		}
		var_77_bool = var_37_cvector == (int)10977;
		if(var_77_bool != 0) {
			var_78_object = Obj(); var_79_object = Obj();
			var_78_object = var_1_object;
			var_79_object = var_0_object;
			func_3348(var_79_object);
		}
		var_119_bool = var_36_bool == (int)10968;
		if(var_119_bool != 0) {
			var_120_string = "";
			func_1029(var_37_cvector, "Pain");
			@@@var_0_object:SetMessage((int)509951);
			@@@var_0_object:ClearReplies();
			var_138_bool = 0; var_139_object = Obj();
			var_139_object = var_1_object;
			func_3517(var_139_object);
			if(var_138_bool != 0) {
				@@@var_0_object:AddReply((int)509961, (int)10970, (int)10978);
			}
			@@@var_0_object:AddReply((int)509952, (int)-1, (int)10969);
			return 0;
		}
		var_153_bool = var_36_bool == (int)10970;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_1029(var_37_cvector, "Pain");
			@@@var_0_object:SetMessage((int)509953);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509954, (int)-1, (int)10971);
			@@@var_0_object:AddReply((int)509955, (int)10973, (int)10972);
			return 0;
		}
		var_163_bool = var_36_bool == (int)10973;
		if(var_163_bool != 0) {
			var_164_string = "";
			func_1029(var_37_cvector, "Pain");
			@@@var_0_object:SetMessage((int)509956);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509957, (int)10975, (int)10974);
			@@@var_0_object:AddReply((int)534181, (int)-1, (int)35764);
			return 0;
		}
		var_173_bool = var_36_bool == (int)10975;
		if(var_173_bool != 0) {
			var_174_string = "";
			func_1029(var_37_cvector, "Welldie");
			@@@var_0_object:SetMessage((int)509958);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509959, (int)-1, (int)10976);
			@@@var_0_object:AddReply((int)509960, (int)-1, (int)10977);
			return 0;
		}
		var_3_string = true;
		var_182_bool = 0;
		func_3268(var_182_bool);
		if(var_182_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x41c";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3076();
		var_41_bool = var_37_cvector == (int)14233;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_3355();
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_3389();
		}
		var_57_bool = var_37_cvector == (int)14234;
		if(var_57_bool != 0) {
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_object;
			func_3355();
			var_60_object = Obj(); var_61_object = Obj();
			var_60_object = var_1_object;
			var_61_object = var_0_object;
			func_3389();
		}
		var_63_bool = var_37_cvector == (int)14027;
		if(var_63_bool != 0) {
			var_64_object = Obj(); var_65_object = Obj();
			var_64_object = var_1_object;
			var_65_object = var_0_object;
			func_3355();
			var_66_object = Obj(); var_67_object = Obj();
			var_66_object = var_1_object;
			var_67_object = var_0_object;
			func_3361();
		}
		var_113_bool = var_37_cvector == (int)14026;
		if(var_113_bool != 0) {
			var_114_object = Obj(); var_115_object = Obj();
			var_114_object = var_1_object;
			var_115_object = var_0_object;
			func_3355();
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_3361();
		}
		var_119_bool = var_36_bool == (int)14015;
		if(var_119_bool != 0) {
			var_120_string = "";
			func_1349(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512815);
			@@@var_0_object:ClearReplies();
			var_138_bool = 0;
			var_138_bool = 0;
			var_139_bool = 0; var_140_object = Obj();
			var_140_object = var_1_object;
			func_3481(var_140_object);
			if(var_139_bool != 0) {
				var_147_bool = 0; var_148_object = Obj();
				var_148_object = var_1_object;
				func_3493(var_148_object);
				if(var_147_bool != 0) {
					var_138_bool = 1;
				}
			}
			if(var_138_bool != 0) {
				@@@var_0_object:AddReply((int)512816, (int)14017, (int)14016);
			}
			@@@var_0_object:AddReply((int)512828, (int)-1, (int)14028);
			return 0;
		}
		var_160_bool = var_36_bool == (int)14017;
		if(var_160_bool != 0) {
			var_161_bool = 0; var_162_object = Obj();
			var_162_object = var_1_object;
			func_3469(var_162_object);
			var_167_bool = var_161_bool == 0; //@nz
			if(var_167_bool != 0) {
				var_168_string = "";
				func_1349(var_37_cvector, "Disturbance");
				@@@var_0_object:SetMessage((int)512817);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)513022, (int)14230, (int)14229);
				return 0;
			}
			var_173_bool = 0; var_174_object = Obj();
			var_174_object = var_1_object;
			func_3469(var_174_object);
			if(var_173_bool != 0) {
				var_175_string = "";
				func_1349(var_37_cvector, "Welldie");
				@@@var_0_object:SetMessage((int)513021);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)512818, (int)14019, (int)14018);
				return 0;
			}
		}
		var_181_bool = var_36_bool == (int)14019;
		if(var_181_bool != 0) {
			var_182_string = "";
			func_1349(var_37_cvector, "Welldie");
			@@@var_0_object:SetMessage((int)512819);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512820, (int)14021, (int)14020);
			return 0;
		}
		var_188_bool = var_36_bool == (int)14021;
		if(var_188_bool != 0) {
			var_189_string = "";
			func_1349(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512821);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512822, (int)14023, (int)14022);
			return 0;
		}
		var_195_bool = var_36_bool == (int)14023;
		if(var_195_bool != 0) {
			var_196_string = "";
			func_1349(var_37_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)512823);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512824, (int)14025, (int)14024);
			@@@var_0_object:AddReply((int)512826, (int)-1, (int)14026);
			return 0;
		}
		var_205_bool = var_36_bool == (int)14025;
		if(var_205_bool != 0) {
			var_206_string = "";
			func_1349(var_37_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)512825);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512827, (int)-1, (int)14027);
			return 0;
		}
		var_212_bool = var_36_bool == (int)14230;
		if(var_212_bool != 0) {
			var_213_string = "";
			func_1349(var_37_cvector, "Disturbance");
			@@@var_0_object:SetMessage((int)513023);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513024, (int)14232, (int)14231);
			@@@var_0_object:AddReply((int)513027, (int)-1, (int)14234);
			return 0;
		}
		var_222_bool = var_36_bool == (int)14232;
		if(var_222_bool != 0) {
			var_223_string = "";
			func_1349(var_37_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)513025);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513026, (int)-1, (int)14233);
			return 0;
		}
		var_3_string = true;
		var_228_bool = 0;
		func_3268(var_228_bool);
		if(var_228_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x55c";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3076();
		var_41_bool = var_36_bool == (int)36960;
		if(var_41_bool != 0) {
			var_42_string = "";
			func_1785(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535284);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535285, (int)36962, (int)36961);
			@@@var_0_object:AddReply((int)535292, (int)-1, (int)36968);
			@@@var_0_object:AddReply((int)535293, (int)-1, (int)36969);
			return 0;
		}
		var_70_bool = var_36_bool == (int)36962;
		if(var_70_bool != 0) {
			var_71_string = "";
			func_1785(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535286);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535287, (int)36964, (int)36963);
			@@@var_0_object:AddReply((int)535291, (int)-1, (int)36967);
			return 0;
		}
		var_80_bool = var_36_bool == (int)36964;
		if(var_80_bool != 0) {
			var_81_string = "";
			func_1785(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535288);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535289, (int)-1, (int)36965);
			@@@var_0_object:AddReply((int)535290, (int)-1, (int)36966);
			return 0;
		}
		var_3_string = true;
		var_89_bool = 0;
		func_3268(var_89_bool);
		if(var_89_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x710";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3076();
		var_41_bool = var_37_cvector == (int)42012;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_3309();
		}
		var_47_bool = var_37_cvector == (int)42025;
		if(var_47_bool != 0) {
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_3412(var_49_object);
		}
		var_73_bool = var_37_cvector == (int)42026;
		if(var_73_bool != 0) {
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_object;
			func_3412(var_75_object);
			var_76_object = Obj(); var_77_object = Obj();
			var_76_object = var_1_object;
			var_77_object = var_0_object;
			func_3326(var_77_object);
			var_87_object = Obj(); var_88_object = Obj();
			var_87_object = var_1_object;
			var_88_object = var_0_object;
			func_3315(var_88_object);
		}
		var_94_bool = var_36_bool == (int)42010;
		if(var_94_bool != 0) {
			var_95_string = "";
			func_2058(var_37_cvector, "Pain");
			@@@var_0_object:SetMessage((int)540043);
			@@@var_0_object:ClearReplies();
			var_113_bool = 0;
			var_113_bool = 0;
			var_114_bool = 0; var_115_object = Obj();
			var_115_object = var_1_object;
			func_3505(var_115_object);
			if(var_114_bool != 0) {
				var_122_bool = 0; var_123_object = Obj();
				var_123_object = var_1_object;
				func_3457(var_123_object);
				if(var_122_bool != 0) {
					var_113_bool = 1;
				}
			}
			if(var_113_bool != 0) {
				@@@var_0_object:AddReply((int)540045, (int)42013, (int)42012);
			}
			@@@var_0_object:AddReply((int)540044, (int)-1, (int)42011);
			@@@var_0_object:AddReply((int)540060, (int)-1, (int)42029);
			return 0;
		}
		var_138_bool = var_36_bool == (int)42013;
		if(var_138_bool != 0) {
			var_139_string = "";
			func_2058(var_37_cvector, "Pain");
			@@@var_0_object:SetMessage((int)540046);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540047, (int)42015, (int)42014);
			@@@var_0_object:AddReply((int)540052, (int)42024, (int)42019);
			return 0;
		}
		var_148_bool = var_36_bool == (int)42015;
		if(var_148_bool != 0) {
			var_149_string = "";
			func_2058(var_37_cvector, "Pain");
			@@@var_0_object:SetMessage((int)540048);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540049, (int)42017, (int)42016);
			return 0;
		}
		var_155_bool = var_36_bool == (int)42017;
		if(var_155_bool != 0) {
			var_156_string = "";
			func_2058(var_37_cvector, "Welldie");
			@@@var_0_object:SetMessage((int)540050);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540051, (int)42020, (int)42018);
			@@@var_0_object:AddReply((int)540056, (int)42024, (int)42023);
			return 0;
		}
		var_165_bool = var_36_bool == (int)42020;
		if(var_165_bool != 0) {
			var_166_string = "";
			func_2058(var_37_cvector, "Pain");
			@@@var_0_object:SetMessage((int)540053);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540054, (int)42024, (int)42021);
			return 0;
		}
		var_172_bool = var_36_bool == (int)42024;
		if(var_172_bool != 0) {
			var_173_string = "";
			func_2058(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540057);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540058, (int)-1, (int)42025);
			@@@var_0_object:AddReply((int)540059, (int)-1, (int)42026);
			return 0;
		}
		var_3_string = true;
		var_181_bool = 0;
		func_3268(var_181_bool);
		if(var_181_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x821";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_cvector)
{
	if((int)1 != 0) {
		func_3076();
		var_41_bool = var_36_int == (int)42557;
		if(var_41_bool != 0) {
			var_42_string = "";
			func_2419(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540548);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540549, (int)-1, (int)42558);
			@@@var_0_object:AddReply((int)540797, (int)-1, (int)42846);
			return 0;
		}
		var_3_string = true;
		var_66_bool = 0;
		func_3268(var_66_bool);
		if(var_66_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x98a";
	
}


task_14_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_int)
{
	var_38_bool = var_36_int == (int)10;
	if(var_38_bool != 0) {
		func_2552();
		var_40_bool = 0;
		var_40_bool = 0;
		var_41_bool = 0;
		func_2800(var_41_bool);
		if(var_41_bool != 0) {
			var_44_bool = 0;
			func_2521(var_44_bool);
			if(var_44_bool != 0) {
				var_40_bool = 1;
			}
		}
		if(var_40_bool != 0) {
			var_61_bool = 0;
			func_2501(var_61_bool);
			if(var_61_bool != 0) {
				var_80_bool = 0; var_81_object = Obj();
				func_3083(Obj());
				var_82_object = var_81_object;
				func_2950(var_80_bool, var_81_object);
			}
		} else {
			func_2516(var_36_int);
			func_2543();
		}
	}
	return 0;
	
}


task_14_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_2734();
	func_2552();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_14_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	StopGroup0();
	func_2552();
	var_37_string = "";
	func_3030("Neutral");
	func_2543();
	return 0;
}


task_14_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_bool)
{
	var_37_bool = var_36_bool;
	if(var_37_bool != 0) {
		func_2543();
	} else {
		var_43_string = "";
		func_3030("Neutral");
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
		func_2734();
		var_40_bool = 0; var_41_object = Obj();
		var_36_object = var_41_object;
		func_2791(var_40_bool, var_41_object);
		EventEnable(0);
		var_54_object = Obj();
		var_36_object = var_54_object;
		func_3617(var_54_object);
		var_692_string = "";
		func_3030("Neutral");
		func_2552();
		func_2543();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_2487(var_35_cvector);
	return 0;
}


func_0(var_0_object, var_59_int, var_60_object)
{
	var_62_object = Obj(); var_63_bool = 0; var_64_int = 0; var_65_bool = 0; var_66_object = Obj(); var_67_bool = 0; var_68_int = 0; var_69_bool = 0;
	var_0_object = var_60_object;
	var_70_bool = 0; var_71_object = Obj(); var_72_float = 0;
	var_60_object = var_71_object;
	func_2805(var_70_bool, var_71_object, (float)70.0);
	var_117_bool = var_70_bool == 0; //@nz
	if(var_117_bool != 0) {
		var_59_int = -2;
		return 8;
	}
	CreateDialog(var_66_object);
	var_118_int = 0;
	func_3262(var_118_int);
	@@var_66_object:SetNPCName(var_118_int);
	var_119_int = 0;
	func_3260(var_119_int);
	@@var_66_object:SetNPCDescription(var_119_int);
	var_120_string = "";
	func_3264(var_120_string);
	@@var_66_object:SetPhoto(var_120_string);
	var_121_string = "";
	func_3266(var_121_string);
	@@var_66_object:SetPhoto2(var_121_string);
	var_122_int = 0;
	func_3600(var_122_int);
	@@var_66_object:SetPlayerName(var_122_int);
	IsOverrideActive(var_67_bool);
	var_130_bool = var_67_bool;
	if(var_130_bool != 0) {
		var_59_int = -2;
		return 8;
	}
	DoDialog(var_66_object);
	var_131_bool = 0; var_132_object = Obj();
	func_3083(Obj());
	var_133_object = var_132_object;
	func_2892(var_131_bool, var_132_object);
	var_226_object = Obj(); var_227_object = Obj();
	var_60_object = var_226_object;
	var_66_object = var_227_object;
	TaskCall(1);
	func_81(var_228_object, var_229_object, var_230_string, var_231_bool, var_226_object, var_227_object);
	TaskReturn();
	@@var_66_object:IsDialogEnd(var_69_bool);
	
Label_63:
	var_279_bool = var_69_bool == 0; //@nz
	if(var_279_bool != 0) {
		sync();
		@@var_66_object:IsDialogEnd(var_69_bool);
		goto Label_63;
	}
	var_60_object = Obj();
	func_2874();
	StopDialog(var_66_object);
	@@var_66_object:GetReturnValue((int)-1);
	var_68_int = var_59_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3076()
{
	var_39_bool = 0;
	func_3268(var_39_bool);
	if(var_39_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1029(var_2_object, var_399_string)
{
	var_400_bool = 0;
	func_3268(var_400_bool);
	var_401_bool = var_400_bool == 0; //@nz
	if(var_401_bool != 0) {
		return 0;
	}
	var_402_bool = var_399_string == var_2_object;
	if(var_402_bool != 0) {
		return 0;
	}
	var_403_string = ""; var_404_bool = 0;
	var_399_string = var_403_string;
	var_406_bool = var_399_string == "";
	if(var_406_bool != 0) {
		var_404_bool = 0;
	} else {
		var_404_bool = 1;
	}
	func_3046(var_403_string, var_404_bool);
	var_2_object = var_399_string;
	return 0;
	
}


func_3337(var_48_object)
{
	Trace("powder is given");
	var_51_object = Obj(); var_52_string = ""; var_53_int = 0;
	var_48_object = var_51_object;
	func_3146(var_51_object, "powder", (int)1);
	return 0;
}


func_2058(var_2_object, var_534_string)
{
	var_535_bool = 0;
	func_3268(var_535_bool);
	var_536_bool = var_535_bool == 0; //@nz
	if(var_536_bool != 0) {
		return 0;
	}
	var_537_bool = var_534_string == var_2_object;
	if(var_537_bool != 0) {
		return 0;
	}
	var_538_string = ""; var_539_bool = 0;
	var_534_string = var_538_string;
	var_541_bool = var_534_string == "";
	if(var_541_bool != 0) {
		var_539_bool = 0;
	} else {
		var_539_bool = 1;
	}
	func_3046(var_538_string, var_539_bool);
	var_2_object = var_534_string;
	return 0;
	
}


func_3083(var_133_object)
{
	var_134_object = Obj(); var_135_object = Obj();
	self(var_135_object);
	var_135_object = var_133_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3600(var_122_int)
{
	var_123_int = 0; var_124_int = 0;
	GetVariable("branch", var_124_int);
	var_127_bool = var_124_int == (int)0;
	if(var_127_bool != 0) {
		var_122_int = 1;
		return 2;
	EMIT "GOTO 0xe1f";
	}
	var_129_bool = var_124_int == (int)1;
	if(var_129_bool != 0) {
		var_122_int = 2;
		return 2;
	}
	var_122_int = 3;
	return 2;
}


func_3089(var_97_cvector, var_98_cvector)
{
	var_100_float = 0; var_101_float = 0;
	var_102_int = var_98_cvector | var_98_cvector;
	var_101_float = sqrt(var_102_int);
	var_103_float = 9.999999974752427e-07;
	var_104_bool = var_101_float < var_103_float;
	if(var_104_bool != 0) {
		var_97_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_97_cvector = var_98_cvector / var_101_float;
	return 2;
}


func_3348(var_78_object)
{
	var_80_bool = 0; var_81_object = Obj(); var_82_float = 0;
	var_78_object = var_81_object;
	func_3159(var_80_bool, var_81_object, (float)0.30000001192092896);
	return 0;
}


func_277(var_0_object, var_293_int, var_294_object)
{
	var_296_object = Obj(); var_297_bool = 0; var_298_int = 0; var_299_bool = 0; var_300_object = Obj(); var_301_bool = 0; var_302_int = 0; var_303_bool = 0;
	var_0_object = var_294_object;
	var_304_bool = 0; var_305_object = Obj(); var_306_float = 0;
	var_294_object = var_305_object;
	func_2805(var_304_bool, var_305_object, (float)70.0);
	var_307_bool = var_304_bool == 0; //@nz
	if(var_307_bool != 0) {
		var_293_int = -2;
		return 8;
	}
	CreateDialog(var_300_object);
	var_308_int = 0;
	func_3262(var_308_int);
	@@var_300_object:SetNPCName(var_308_int);
	var_309_int = 0;
	func_3260(var_309_int);
	@@var_300_object:SetNPCDescription(var_309_int);
	var_310_string = "";
	func_3264(var_310_string);
	@@var_300_object:SetPhoto(var_310_string);
	var_311_string = "";
	func_3266(var_311_string);
	@@var_300_object:SetPhoto2(var_311_string);
	var_312_int = 0;
	func_3600(var_312_int);
	@@var_300_object:SetPlayerName(var_312_int);
	IsOverrideActive(var_301_bool);
	var_313_bool = var_301_bool;
	if(var_313_bool != 0) {
		var_293_int = -2;
		return 8;
	}
	DoDialog(var_300_object);
	var_314_bool = 0; var_315_object = Obj();
	func_3083(Obj());
	var_316_object = var_315_object;
	func_2892(var_314_bool, var_315_object);
	var_317_object = Obj(); var_318_object = Obj();
	var_294_object = var_317_object;
	var_300_object = var_318_object;
	TaskCall(3);
	func_358(var_319_object, var_320_object, var_321_string, var_322_bool, var_317_object, var_318_object);
	TaskReturn();
	@@var_300_object:IsDialogEnd(var_303_bool);
	
Label_340:
	var_364_bool = var_303_bool == 0; //@nz
	if(var_364_bool != 0) {
		sync();
		@@var_300_object:IsDialogEnd(var_303_bool);
		goto Label_340;
	}
	var_294_object = Obj();
	func_2874();
	StopDialog(var_300_object);
	@@var_300_object:GetReturnValue((int)-1);
	var_302_int = var_293_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3099(var_109_float, var_110_float, var_111_float, var_112_float)
{
	var_113_bool = var_110_float < var_111_float;
	if(var_113_bool != 0) {
		var_111_float = var_109_float;
		return 0;
	}
	var_114_bool = var_110_float > var_112_float;
	if(var_114_bool != 0) {
		var_112_float = var_109_float;
		return 0;
	}
	var_110_float = var_109_float;
	return 0;
}


func_3355()
{
	SetVariable("ood6Laska1", (int)1);
	return 0;
}


func_3617(var_54_object)
{
	var_55_int = 0; var_56_int = 0;
	GetVariable("mt_laska", var_56_int);
	var_58_bool = var_56_int == 0; //@nz
	if(var_58_bool != 0) {
		var_59_int = 0; var_60_object = Obj();
		var_54_object = var_60_object;
		TaskCall(0);
		func_0(var_61_object, var_59_int, var_60_object);
		TaskReturn();
		SetVariable("mt_laska", (int)1);
	}
	var_290_bool = 0; var_291_int = 0;
	func_3230(var_290_bool, (int)2);
	if(var_290_bool != 0) {
		var_293_int = 0; var_294_object = Obj();
		var_54_object = var_294_object;
		TaskCall(2);
		func_277(var_295_object, var_293_int, var_294_object);
		TaskReturn();
		return 2;
	}
	var_366_bool = 0; var_367_int = 0;
	func_3230(var_366_bool, (int)3);
	if(var_366_bool != 0) {
		var_368_int = 0; var_369_object = Obj();
		var_54_object = var_369_object;
		TaskCall(4);
		func_885(var_370_object, var_368_int, var_369_object);
		TaskReturn();
		return 2;
	}
	var_430_bool = 0; var_431_int = 0;
	func_3230(var_430_bool, (int)6);
	if(var_430_bool != 0) {
		var_432_int = 0; var_433_object = Obj();
		var_54_object = var_433_object;
		TaskCall(6);
		func_1196(var_434_object, var_432_int, var_433_object);
		TaskReturn();
		return 2;
	}
	var_501_bool = 0; var_502_int = 0;
	func_3230(var_501_bool, (int)11);
	if(var_501_bool != 0) {
		var_503_int = 0; var_504_object = Obj();
		var_54_object = var_504_object;
		TaskCall(10);
		func_1900(var_505_object, var_503_int, var_504_object);
		TaskReturn();
		return 2;
	}
	var_575_bool = 0; var_576_int = 0;
	func_3230(var_575_bool, (int)12);
	if(var_575_bool != 0) {
		var_577_int = 0; var_578_object = Obj();
		var_54_object = var_578_object;
		TaskCall(8);
		func_1641(var_579_object, var_577_int, var_578_object);
		TaskReturn();
		return 2;
	}
	var_636_int = 0; var_637_object = Obj();
	var_54_object = var_637_object;
	TaskCall(12);
	func_2280(var_638_object, var_636_int, var_637_object);
	TaskReturn();
	return 2;
}


func_3361()
{
	var_68_object = Obj(); var_69_object = Obj();
	SetVariable("d6q01", (int)3);
	func_3583(Obj());
	var_72_object = var_69_object;
	var_83_float = 0;
	func_3216(var_83_float);
	@@var_69_object:AddMark("d6q01LaskaGotoAlbinos", "pt_d6q03_albinos", (int)1, (int)515400, var_83_float);
	func_3529();
	var_109_bool = 0; var_110_string = ""; var_111_string = "";
	func_3204(var_109_bool, "quest_d6_01", "albinos_klara");
	return 2;
}
EMIT "Stack[-1] = 0";


func_3110(var_335_int, var_336_string)
{
	var_337_int = 0; var_338_int = 0;
	GetVariable(var_336_string, var_338_int);
	var_338_int = var_335_int;
	return 2;
}


func_3115(var_67_int, var_68_int)
{
	var_69_object = Obj(); var_70_object = Obj();
	CreateIntVector(var_70_object);
	@@var_70_object:add(var_67_int);
	@@var_70_object:add(var_68_int);
	SendWorldWndMessage((int)3, var_70_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3127(var_56_object, var_57_object, var_58_int)
{
	var_59_int = 0; var_60_int = 0; var_61_bool = 0; var_62_int = 0; var_63_int = 0; var_64_bool = 0;
	@@var_57_object:GetItemID(var_62_int);
	GetInvItemProperty(var_63_int, var_62_int, "Category");
	@@var_56_object:AddItem(var_64_bool, var_57_object, var_63_int, var_58_int);
	var_66_bool = var_64_bool == 0; //@nz
	if(var_66_bool != 0) {
		@@var_56_object:DropItems(var_57_object, var_58_int);
	} else {
		var_67_int = 0; var_68_int = 0;
		var_62_int = var_67_int;
		var_58_int = var_68_int;
		func_3115(var_67_int, var_68_int);
	}
	return 6;
	
}


func_2361(var_0_object, var_1_object, var_2_object, var_3_string, var_660_object, var_661_object)
{
	var_0_object = var_661_object;
	var_1_object = var_660_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_667_string = "";
		func_2419(var_661_object, "Neutral");
		@@@var_0_object:SetMessage((int)540548);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540549, (int)-1, (int)42558);
		@@@var_0_object:AddReply((int)540797, (int)-1, (int)42846);
		goto Label_2389;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x93d";
	}
Label_2389:
	var_682_bool = 0;
	func_3268(var_682_bool);
	if(var_682_bool != 0) {

	Label_2393:
		lshWaitForAnimEnd();
		var_683_string = var_3_string;
		if(var_683_string != 0) {
		} else {
			var_684_string = "";
			var_684_string = var_2_object;
			func_3030(var_684_string);
			goto Label_2393;
	}
		PlayAnimation("all", "idle");

	Label_2408:
		WaitForAnimEnd();
		var_687_string = var_3_string;
		if(var_687_string != 0) {
			goto Label_2418;
		}
		PlayAnimation("all", "idle");
		goto Label_2408;
	}
	goto Label_2418;
	
Label_2418:
	return 0;
	
}


func_2874()
{
	var_281_bool = 0; var_282_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_284_bool = 0;
	func_3268(var_284_bool);
	if(var_284_bool != 0) {
	} else {
		HasAnimationTrack(var_282_bool, "head");
		var_286_bool = var_282_bool;
		if(var_286_bool == 0) goto Label_2891;
		UnlookAsync("head");
	}
Label_2891:
	return 2;
	
}


func_3389()
{
	SetVariable("d6q01", (int)4);
	var_50_bool = 0; var_51_string = ""; var_52_string = "";
	func_3204(var_50_bool, "quest_d6_01", "eva_klara");
	return 0;
}


func_1349(var_2_object, var_463_string)
{
	var_464_bool = 0;
	func_3268(var_464_bool);
	var_465_bool = var_464_bool == 0; //@nz
	if(var_465_bool != 0) {
		return 0;
	}
	var_466_bool = var_463_string == var_2_object;
	if(var_466_bool != 0) {
		return 0;
	}
	var_467_string = ""; var_468_bool = 0;
	var_463_string = var_467_string;
	var_470_bool = var_463_string == "";
	if(var_470_bool != 0) {
		var_468_bool = 0;
	} else {
		var_468_bool = 1;
	}
	func_3046(var_467_string, var_468_bool);
	var_2_object = var_463_string;
	return 0;
	
}


func_3400()
{
	SetVariable("KnowLaska", (int)1);
	return 0;
}


func_3146(var_79_object, var_80_string, var_81_int)
{
	var_82_object = Obj(); var_83_object = Obj();
	CreateInvItem(var_83_object);
	@@var_83_object:SetItemName(var_80_string);
	var_84_object = Obj(); var_85_object = Obj(); var_86_int = 0;
	var_79_object = var_84_object;
	var_83_object = var_85_object;
	var_81_int = var_86_int;
	func_3127(var_84_object, var_85_object, var_86_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2892(var_131_bool, var_132_object)
{
	var_136_int = 0; var_137_int = 0; var_138_int = 0; var_139_int = 0;
	GetVariable("voice_common", var_138_int);
	var_141_int = var_138_int;
	if(var_141_int != 0) {
		var_142_bool = 0; var_143_object = Obj();
		var_132_object = var_143_object;
		func_2950(var_142_bool, var_143_object);
		var_172_bool = var_142_bool == 0; //@nz
		if(var_172_bool != 0) {
			var_173_bool = 0; var_174_object = Obj();
			var_132_object = var_174_object;
			func_2987(var_173_bool, var_174_object);
			var_208_bool = var_173_bool == 0; //@nz
			if(var_208_bool != 0) {
				var_131_bool = 0;
				return 4;
			}
		}
		irand(var_139_int, (int)2);
		var_210_int = var_139_int;
		if(var_210_int != 0) {
			var_213_int = var_138_int + (int)1;
			var_215_int = var_213_int % (int)3;
			SetVariable("voice_common", var_215_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_218_bool = 0; var_219_object = Obj();
		var_132_object = var_219_object;
		func_2987(var_218_bool, var_219_object);
		var_220_bool = var_218_bool == 0; //@nz
		if(var_220_bool != 0) {
			var_221_bool = 0; var_222_object = Obj();
			var_132_object = var_222_object;
			func_2950(var_221_bool, var_222_object);
			var_223_bool = var_221_bool == 0; //@nz
			if(var_223_bool != 0) {
				var_131_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_2948;
	
Label_2948:
	var_131_bool = 1;
	return 4;
	
}


func_3406()
{
	SetVariable("ood3Laska1", (int)1);
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_226_object, var_227_object)
{
	var_0_object = var_227_object;
	var_1_object = var_226_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_233_object = Obj(); var_234_object = Obj();
		var_233_object = var_1_object;
		var_234_object = var_0_object;
		func_3400();
		var_237_string = "";
		func_144(var_227_object, "Neutral");
		@@@var_0_object:SetMessage((int)500370);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)500371, (int)432, (int)430);
		@@@var_0_object:AddReply((int)500372, (int)437, (int)431);
		goto Label_114;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_114:
	var_261_bool = 0;
	func_3268(var_261_bool);
	if(var_261_bool != 0) {

	Label_118:
		lshWaitForAnimEnd();
		var_262_string = var_3_string;
		if(var_262_string != 0) {
		} else {
			var_263_string = "";
			var_263_string = var_2_object;
			func_3030(var_263_string);
			goto Label_118;
	}
		PlayAnimation("all", "idle");

	Label_133:
		WaitForAnimEnd();
		var_276_string = var_3_string;
		if(var_276_string != 0) {
			goto Label_143;
		}
		PlayAnimation("all", "idle");
		goto Label_133;
	}
	goto Label_143;
	
Label_143:
	return 0;
	
}


func_3412(var_48_object)
{
	var_50_object = Obj(); var_51_object = Obj();
	Trace("Knife is given");
	CreateInvItem(var_51_object);
	@@var_51_object:SetItemName("Knife");
	@@var_51_object:SetProperty("durability", (int)100);
	var_56_object = Obj(); var_57_object = Obj(); var_58_int = 0;
	var_48_object = var_56_object;
	var_51_object = var_57_object;
	func_3127(var_56_object, var_57_object, (int)1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3159(var_80_bool, var_81_object, var_82_float)
{
	var_83_bool = var_81_object == 0; //@nz
	if(var_83_bool != 0) {
		var_80_bool = 0;
		return 0;
	}
	var_85_bool = var_82_float > (int)0;
	if(var_85_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_116_bool = var_82_float < (int)0;
		if(var_116_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_3180;
		}
		var_80_bool = 0;
		return 0;
	}
Label_3180:
	var_87_float = 0;
	var_82_float = var_87_float;
	func_3194(var_87_float);
	var_91_bool = 0; var_92_object = Obj(); var_93_string = ""; var_94_float = 0; var_95_float = 0; var_96_float = 0;
	var_81_object = var_92_object;
	var_82_float = var_94_float;
	func_2759(var_91_bool, var_92_object, "reputation", var_94_float, (float)0, (float)1);
	var_80_bool = 1;
	return 0;
	
}


func_358(var_0_object, var_1_object, var_2_object, var_3_string, var_317_object, var_318_object)
{
	var_0_object = var_318_object;
	var_1_object = var_317_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_324_string = "";
		func_431(var_318_object, "Neutral");
		@@@var_0_object:SetMessage((int)509473);
		@@@var_0_object:ClearReplies();
		var_333_bool = 0; var_334_object = Obj();
		var_334_object = var_1_object;
		func_3433(var_334_object);
		if(var_333_bool != 0) {
			@@@var_0_object:AddReply((int)533914, (int)35474, (int)35473);
		}
		var_344_bool = 0; var_345_object = Obj();
		var_345_object = var_1_object;
		func_3445(var_345_object);
		if(var_344_bool != 0) {
			@@@var_0_object:AddReply((int)509474, (int)10417, (int)10416);
		}
		@@@var_0_object:AddReply((int)509487, (int)-1, (int)10429);
		goto Label_401;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x16a";
	}
Label_401:
	var_356_bool = 0;
	func_3268(var_356_bool);
	if(var_356_bool != 0) {

	Label_405:
		lshWaitForAnimEnd();
		var_357_string = var_3_string;
		if(var_357_string != 0) {
		} else {
			var_358_string = "";
			var_358_string = var_2_object;
			func_3030(var_358_string);
			goto Label_405;
	}
		PlayAnimation("all", "idle");

	Label_420:
		WaitForAnimEnd();
		var_361_string = var_3_string;
		if(var_361_string != 0) {
			goto Label_430;
		}
		PlayAnimation("all", "idle");
		goto Label_420;
	}
	goto Label_430;
	
Label_430:
	return 0;
	
}


func_2663()
{
	var_40_int = 0; var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_int = 0; var_45_bool = 0; var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0;
	WaitForAnimEnd();
	var_52_bool = 0;
	func_2800(var_52_bool);
	var_53_bool = var_52_bool == 0; //@nz
	if(var_53_bool != 0) {
		return 12;
	}
	func_3243((int)0);
	var_54_int = var_46_int;
	var_47_int = 0;
	
Label_2677:
	var_67_bool = 0;
	var_67_bool = 0;
	var_69_bool = var_47_int < (int)5;
	if(var_69_bool != 0) {
		var_70_bool = 0;
		func_2800(var_70_bool);
		if(var_70_bool != 0) {
			var_67_bool = 1;
		}
	}
	if(var_67_bool != 0) {
		var_71_bool = var_46_int == 0; //@nz
		if(var_71_bool != 0) {
			Sleep((int)3, var_48_bool);
			var_73_bool = var_48_bool == 0; //@nz
			if(var_73_bool != 0) {
			} else {
		} else {
				irand(var_49_int, var_46_int);
				irand(var_50_int, (int)5);
				var_79_bool = var_50_int != (int)0;
				if(var_79_bool != 0) {
					var_49_int = 0;
				}
				var_81_string = ""; var_82_int = 0;
				var_49_int = var_82_int;
				func_3236(var_81_string, var_82_int);
				PlayAnimation("all", var_81_string);
				WaitForAnimEnd(var_51_bool);
				var_83_bool = var_51_bool == 0; //@nz
				if(var_83_bool == 0) goto Label_2718;
				goto Label_2729;
		}
		Label_2718:
			var_74_bool = 0;
			func_2732(var_74_bool);
			var_75_bool = var_74_bool == 0; //@nz
			if(var_75_bool != 0) {
				goto Label_2729;
			}
			ResetAAS();
			var_47_int = var_47_int + (int)1;
			goto Label_2677;

		}
	}
Label_2729:
	ResetAAS();
	return 12;
	
}


func_1641(var_0_object, var_577_int, var_578_object)
{
	var_580_object = Obj(); var_581_bool = 0; var_582_int = 0; var_583_bool = 0; var_584_object = Obj(); var_585_bool = 0; var_586_int = 0; var_587_bool = 0;
	var_0_object = var_578_object;
	var_588_bool = 0; var_589_object = Obj(); var_590_float = 0;
	var_578_object = var_589_object;
	func_2805(var_588_bool, var_589_object, (float)70.0);
	var_591_bool = var_588_bool == 0; //@nz
	if(var_591_bool != 0) {
		var_577_int = -2;
		return 8;
	}
	CreateDialog(var_584_object);
	var_592_int = 0;
	func_3262(var_592_int);
	@@var_584_object:SetNPCName(var_592_int);
	var_593_int = 0;
	func_3260(var_593_int);
	@@var_584_object:SetNPCDescription(var_593_int);
	var_594_string = "";
	func_3264(var_594_string);
	@@var_584_object:SetPhoto(var_594_string);
	var_595_string = "";
	func_3266(var_595_string);
	@@var_584_object:SetPhoto2(var_595_string);
	var_596_int = 0;
	func_3600(var_596_int);
	@@var_584_object:SetPlayerName(var_596_int);
	IsOverrideActive(var_585_bool);
	var_597_bool = var_585_bool;
	if(var_597_bool != 0) {
		var_577_int = -2;
		return 8;
	}
	DoDialog(var_584_object);
	var_598_bool = 0; var_599_object = Obj();
	func_3083(Obj());
	var_600_object = var_599_object;
	func_2892(var_598_bool, var_599_object);
	var_601_object = Obj(); var_602_object = Obj();
	var_578_object = var_601_object;
	var_584_object = var_602_object;
	TaskCall(9);
	func_1722(var_603_object, var_604_object, var_605_string, var_606_bool, var_601_object, var_602_object);
	TaskReturn();
	@@var_584_object:IsDialogEnd(var_587_bool);
	
Label_1704:
	var_634_bool = var_587_bool == 0; //@nz
	if(var_634_bool != 0) {
		sync();
		@@var_584_object:IsDialogEnd(var_587_bool);
		goto Label_1704;
	}
	var_578_object = Obj();
	func_2874();
	StopDialog(var_584_object);
	@@var_584_object:GetReturnValue((int)-1);
	var_586_int = var_577_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3433(var_333_bool)
{
	var_335_int = 0; var_336_string = "";
	func_3110(var_335_int, "ood2Laska1");
	var_340_bool = var_335_int == (int)0;
	if(var_340_bool != 0) {
		var_333_bool = 1;
		return 0;
	}
	var_333_bool = 0;
	return 0;
}


func_1900(var_0_object, var_503_int, var_504_object)
{
	var_506_object = Obj(); var_507_bool = 0; var_508_int = 0; var_509_bool = 0; var_510_object = Obj(); var_511_bool = 0; var_512_int = 0; var_513_bool = 0;
	var_0_object = var_504_object;
	var_514_bool = 0; var_515_object = Obj(); var_516_float = 0;
	var_504_object = var_515_object;
	func_2805(var_514_bool, var_515_object, (float)70.0);
	var_517_bool = var_514_bool == 0; //@nz
	if(var_517_bool != 0) {
		var_503_int = -2;
		return 8;
	}
	CreateDialog(var_510_object);
	var_518_int = 0;
	func_3262(var_518_int);
	@@var_510_object:SetNPCName(var_518_int);
	var_519_int = 0;
	func_3260(var_519_int);
	@@var_510_object:SetNPCDescription(var_519_int);
	var_520_string = "";
	func_3264(var_520_string);
	@@var_510_object:SetPhoto(var_520_string);
	var_521_string = "";
	func_3266(var_521_string);
	@@var_510_object:SetPhoto2(var_521_string);
	var_522_int = 0;
	func_3600(var_522_int);
	@@var_510_object:SetPlayerName(var_522_int);
	IsOverrideActive(var_511_bool);
	var_523_bool = var_511_bool;
	if(var_523_bool != 0) {
		var_503_int = -2;
		return 8;
	}
	DoDialog(var_510_object);
	var_524_bool = 0; var_525_object = Obj();
	func_3083(Obj());
	var_526_object = var_525_object;
	func_2892(var_524_bool, var_525_object);
	var_527_object = Obj(); var_528_object = Obj();
	var_504_object = var_527_object;
	var_510_object = var_528_object;
	TaskCall(11);
	func_1981(var_529_object, var_530_object, var_531_string, var_532_bool, var_527_object, var_528_object);
	TaskReturn();
	@@var_510_object:IsDialogEnd(var_513_bool);
	
Label_1963:
	var_573_bool = var_513_bool == 0; //@nz
	if(var_573_bool != 0) {
		sync();
		@@var_510_object:IsDialogEnd(var_513_bool);
		goto Label_1963;
	}
	var_504_object = Obj();
	func_2874();
	StopDialog(var_510_object);
	@@var_510_object:GetReturnValue((int)-1);
	var_512_int = var_503_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2419(var_2_object, var_667_string)
{
	var_668_bool = 0;
	func_3268(var_668_bool);
	var_669_bool = var_668_bool == 0; //@nz
	if(var_669_bool != 0) {
		return 0;
	}
	var_670_bool = var_667_string == var_2_object;
	if(var_670_bool != 0) {
		return 0;
	}
	var_671_string = ""; var_672_bool = 0;
	var_667_string = var_671_string;
	var_674_bool = var_667_string == "";
	if(var_674_bool != 0) {
		var_672_bool = 0;
	} else {
		var_672_bool = 1;
	}
	func_3046(var_671_string, var_672_bool);
	var_2_object = var_667_string;
	return 0;
	
}


func_3445(var_344_bool)
{
	var_346_int = 0; var_347_string = "";
	func_3110(var_346_int, "ood2Laska2");
	var_349_bool = var_346_int == (int)0;
	if(var_349_bool != 0) {
		var_344_bool = 1;
		return 0;
	}
	var_344_bool = 0;
	return 0;
}


func_885(var_0_object, var_368_int, var_369_object)
{
	var_371_object = Obj(); var_372_bool = 0; var_373_int = 0; var_374_bool = 0; var_375_object = Obj(); var_376_bool = 0; var_377_int = 0; var_378_bool = 0;
	var_0_object = var_369_object;
	var_379_bool = 0; var_380_object = Obj(); var_381_float = 0;
	var_369_object = var_380_object;
	func_2805(var_379_bool, var_380_object, (float)70.0);
	var_382_bool = var_379_bool == 0; //@nz
	if(var_382_bool != 0) {
		var_368_int = -2;
		return 8;
	}
	CreateDialog(var_375_object);
	var_383_int = 0;
	func_3262(var_383_int);
	@@var_375_object:SetNPCName(var_383_int);
	var_384_int = 0;
	func_3260(var_384_int);
	@@var_375_object:SetNPCDescription(var_384_int);
	var_385_string = "";
	func_3264(var_385_string);
	@@var_375_object:SetPhoto(var_385_string);
	var_386_string = "";
	func_3266(var_386_string);
	@@var_375_object:SetPhoto2(var_386_string);
	var_387_int = 0;
	func_3600(var_387_int);
	@@var_375_object:SetPlayerName(var_387_int);
	IsOverrideActive(var_376_bool);
	var_388_bool = var_376_bool;
	if(var_388_bool != 0) {
		var_368_int = -2;
		return 8;
	}
	DoDialog(var_375_object);
	var_389_bool = 0; var_390_object = Obj();
	func_3083(Obj());
	var_391_object = var_390_object;
	func_2892(var_389_bool, var_390_object);
	var_392_object = Obj(); var_393_object = Obj();
	var_369_object = var_392_object;
	var_375_object = var_393_object;
	TaskCall(5);
	func_966(var_394_object, var_395_object, var_396_string, var_397_bool, var_392_object, var_393_object);
	TaskReturn();
	@@var_375_object:IsDialogEnd(var_378_bool);
	
Label_948:
	var_428_bool = var_378_bool == 0; //@nz
	if(var_428_bool != 0) {
		sync();
		@@var_375_object:IsDialogEnd(var_378_bool);
		goto Label_948;
	}
	var_369_object = Obj();
	func_2874();
	StopDialog(var_375_object);
	@@var_375_object:GetReturnValue((int)-1);
	var_377_int = var_368_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3194(var_87_float)
{
	var_88_object = Obj(); var_89_object = Obj();
	CreateFloatVector(var_89_object);
	@@var_89_object:add(var_87_float);
	SendWorldWndMessage((int)16, var_89_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3457(var_550_bool)
{
	var_552_int = 0; var_553_string = "";
	func_3110(var_552_int, "ood11Laska1");
	var_555_bool = var_552_int == (int)0;
	if(var_555_bool != 0) {
		var_550_bool = 1;
		return 0;
	}
	var_550_bool = 0;
	return 0;
}


func_3204(var_50_bool, var_51_string, var_52_string)
{
	var_53_object = Obj(); var_54_object = Obj();
	FindActor(var_54_object, var_51_string);
	var_55_bool = var_54_object == 0; //@ne
	if(var_55_bool != 0) {
		var_50_bool = 0;
		return 2;
	}
	Trigger(var_54_object, var_52_string);
	var_50_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2950(var_142_bool, var_143_object)
{
	var_144_string = ""; var_145_int = 0; var_146_bool = 0; var_147_int = 0; var_148_string = ""; var_149_string = ""; var_150_int = 0; var_151_bool = 0; var_152_int = 0; var_153_string = "";
	var_149_string = "c";
	var_150_int = 0;
	
Label_2953:
	if((int)1 != 0) {
		var_156_int = var_150_int + (int)1;
		var_157_int = var_149_string + var_156_int;
		@@var_143_object:HasProperty(var_157_int, var_151_bool);
		var_158_bool = var_151_bool == 0; //@nz
		if(var_158_bool != 0) {
		} else {
			var_150_int = var_150_int + (int)1;
			goto Label_2953;
		}
	}
	var_159_bool = var_150_int == 0; //@nz
	if(var_159_bool != 0) {
		var_142_bool = 0;
		return 10;
	}
	var_152_int = 0;
	var_161_bool = var_150_int > (int)1;
	if(var_161_bool != 0) {
		irand(var_152_int, var_150_int);
	}
	var_163_int = var_152_int + (int)1;
	var_164_int = var_149_string + var_163_int;
	@@var_143_object:GetProperty(var_164_int, var_153_string);
	var_165_bool = 0; var_166_string = "";
	var_153_string = var_166_string;
	func_3061(var_165_bool, var_166_string);
	var_165_bool = var_142_bool;
	return 10;
	
}


func_3469(var_161_bool)
{
	var_163_int = 0; var_164_string = "";
	func_3110(var_163_int, "d6q03AlbinosKilled");
	var_166_bool = var_163_int == (int)1;
	if(var_166_bool != 0) {
		var_161_bool = 1;
		return 0;
	}
	var_161_bool = 0;
	return 0;
}


func_144(var_2_object, var_237_string)
{
	var_238_bool = 0;
	func_3268(var_238_bool);
	var_239_bool = var_238_bool == 0; //@nz
	if(var_239_bool != 0) {
		return 0;
	}
	var_240_bool = var_237_string == var_2_object;
	if(var_240_bool != 0) {
		return 0;
	}
	var_241_string = ""; var_242_bool = 0;
	var_237_string = var_241_string;
	var_244_bool = var_237_string == "";
	if(var_244_bool != 0) {
		var_242_bool = 0;
	} else {
		var_242_bool = 1;
	}
	func_3046(var_241_string, var_242_bool);
	var_2_object = var_237_string;
	return 0;
	
}


func_3216(var_83_float)
{
	var_84_float = 0; var_85_float = 0;
	GetGameTime(var_85_float);
	var_85_float = var_83_float;
	return 2;
}


func_3221(var_186_int)
{
	var_187_float = 0; var_188_float = 0;
	GetGameTime(var_188_float);
	var_190_int = 0;
	var_190_int = var_188_float / (int)24;
	var_186_int = (int)1 + var_190_int;
	return 2;
}


func_3481(var_473_bool)
{
	var_475_int = 0; var_476_string = "";
	func_3110(var_475_int, "d6q01");
	var_478_bool = var_475_int == (int)2;
	if(var_478_bool != 0) {
		var_473_bool = 1;
		return 0;
	}
	var_473_bool = 0;
	return 0;
}


func_3230(var_290_bool, var_291_int)
{
	var_292_int = 0;
	func_3221(var_292_int);
	var_290_bool = var_292_int == var_291_int;
	return 0;
}


func_3236(var_60_string, var_61_int)
{
	var_62_string = ""; var_63_string = "";
	var_64_int = var_61_int;
	if(var_64_int != 0) {
		"idle" = "idle" + var_61_int;
	}
	var_63_string = var_60_string;
	return 2;
}


func_3493(var_479_bool)
{
	var_481_int = 0; var_482_string = "";
	func_3110(var_481_int, "ood6Laska1");
	var_484_bool = var_481_int == (int)0;
	if(var_484_bool != 0) {
		var_479_bool = 1;
		return 0;
	}
	var_479_bool = 0;
	return 0;
}


func_3243(var_54_int)
{
	var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_bool = 0;
	var_57_int = 0;
	
Label_3245:
	var_60_string = ""; var_61_int = 0;
	var_57_int = var_61_int;
	func_3236(var_60_string, var_61_int);
	HasAnimation(var_58_bool, "all", var_60_string);
	var_65_bool = var_58_bool == 0; //@nz
	if(var_65_bool != 0) {
	} else {
		var_57_int = var_57_int + (int)1;
		goto Label_3245;
	}
	var_57_int = var_54_int;
	return 4;
	
}


func_2732(var_74_bool)
{
	var_74_bool = 1;
	return 0;
}


func_1196(var_0_object, var_432_int, var_433_object)
{
	var_435_object = Obj(); var_436_bool = 0; var_437_int = 0; var_438_bool = 0; var_439_object = Obj(); var_440_bool = 0; var_441_int = 0; var_442_bool = 0;
	var_0_object = var_433_object;
	var_443_bool = 0; var_444_object = Obj(); var_445_float = 0;
	var_433_object = var_444_object;
	func_2805(var_443_bool, var_444_object, (float)70.0);
	var_446_bool = var_443_bool == 0; //@nz
	if(var_446_bool != 0) {
		var_432_int = -2;
		return 8;
	}
	CreateDialog(var_439_object);
	var_447_int = 0;
	func_3262(var_447_int);
	@@var_439_object:SetNPCName(var_447_int);
	var_448_int = 0;
	func_3260(var_448_int);
	@@var_439_object:SetNPCDescription(var_448_int);
	var_449_string = "";
	func_3264(var_449_string);
	@@var_439_object:SetPhoto(var_449_string);
	var_450_string = "";
	func_3266(var_450_string);
	@@var_439_object:SetPhoto2(var_450_string);
	var_451_int = 0;
	func_3600(var_451_int);
	@@var_439_object:SetPlayerName(var_451_int);
	IsOverrideActive(var_440_bool);
	var_452_bool = var_440_bool;
	if(var_452_bool != 0) {
		var_432_int = -2;
		return 8;
	}
	DoDialog(var_439_object);
	var_453_bool = 0; var_454_object = Obj();
	func_3083(Obj());
	var_455_object = var_454_object;
	func_2892(var_453_bool, var_454_object);
	var_456_object = Obj(); var_457_object = Obj();
	var_433_object = var_456_object;
	var_439_object = var_457_object;
	TaskCall(7);
	func_1277(var_458_object, var_459_object, var_460_string, var_461_bool, var_456_object, var_457_object);
	TaskReturn();
	@@var_439_object:IsDialogEnd(var_442_bool);
	
Label_1259:
	var_499_bool = var_442_bool == 0; //@nz
	if(var_499_bool != 0) {
		sync();
		@@var_439_object:IsDialogEnd(var_442_bool);
		goto Label_1259;
	}
	var_433_object = Obj();
	func_2874();
	StopDialog(var_439_object);
	@@var_439_object:GetReturnValue((int)-1);
	var_441_int = var_432_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2734()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_2987(var_173_bool, var_174_object)
{
	var_175_string = ""; var_176_int = 0; var_177_bool = 0; var_178_int = 0; var_179_string = ""; var_180_string = ""; var_181_int = 0; var_182_bool = 0; var_183_int = 0; var_184_string = "";
	var_186_int = 0;
	func_3221(var_186_int);
	var_192_int = "d" + var_186_int;
	var_180_string = var_192_int + "m";
	var_181_int = 0;
	
Label_2996:
	if((int)1 != 0) {
		var_196_int = var_181_int + (int)1;
		var_197_int = var_180_string + var_196_int;
		@@var_174_object:HasProperty(var_197_int, var_182_bool);
		var_198_bool = var_182_bool == 0; //@nz
		if(var_198_bool != 0) {
		} else {
			var_181_int = var_181_int + (int)1;
			goto Label_2996;
		}
	}
	var_199_bool = var_181_int == 0; //@nz
	if(var_199_bool != 0) {
		var_173_bool = 0;
		return 10;
	}
	var_183_int = 0;
	var_201_bool = var_181_int > (int)1;
	if(var_201_bool != 0) {
		irand(var_183_int, var_181_int);
	}
	var_203_int = var_183_int + (int)1;
	var_204_int = var_180_string + var_203_int;
	@@var_174_object:GetProperty(var_204_int, var_184_string);
	var_205_bool = 0; var_206_string = "";
	var_184_string = var_206_string;
	func_3061(var_205_bool, var_206_string);
	var_205_bool = var_173_bool;
	return 10;
	
}


func_431(var_2_object, var_324_string)
{
	var_325_bool = 0;
	func_3268(var_325_bool);
	var_326_bool = var_325_bool == 0; //@nz
	if(var_326_bool != 0) {
		return 0;
	}
	var_327_bool = var_324_string == var_2_object;
	if(var_327_bool != 0) {
		return 0;
	}
	var_328_string = ""; var_329_bool = 0;
	var_324_string = var_328_string;
	var_331_bool = var_324_string == "";
	if(var_331_bool != 0) {
		var_329_bool = 0;
	} else {
		var_329_bool = 1;
	}
	func_3046(var_328_string, var_329_bool);
	var_2_object = var_324_string;
	return 0;
	
}


func_3505(var_544_bool)
{
	var_546_int = 0; var_547_string = "";
	func_3110(var_546_int, "d11q01");
	var_549_bool = var_546_int == (int)3;
	if(var_549_bool != 0) {
		var_544_bool = 1;
		return 0;
	}
	var_544_bool = 0;
	return 0;
}


func_2739(var_51_float, var_52_object)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0);
	GetPosition(var_56_cvector);
	@@var_52_object:GetPosition(var_57_cvector);
	var_58_cvector = var_57_cvector - var_56_cvector;
	var_51_float = var_58_cvector | var_58_cvector;
	return 6;
}


func_2487(var_0_object)
{
	var_36_bool = 0;
	func_2800(var_36_bool);
	var_39_bool = var_36_bool == 0; //@nz
	if(var_39_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_2496:
	func_2663();
	goto Label_2496;
}
EMIT "Return(); Pop(0)";


func_1722(var_0_object, var_1_object, var_2_object, var_3_string, var_601_object, var_602_object)
{
	var_0_object = var_602_object;
	var_1_object = var_601_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_608_string = "";
		func_1785(var_602_object, "Neutral");
		@@@var_0_object:SetMessage((int)535284);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535285, (int)36962, (int)36961);
		@@@var_0_object:AddReply((int)535292, (int)-1, (int)36968);
		@@@var_0_object:AddReply((int)535293, (int)-1, (int)36969);
		goto Label_1755;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x6be";
	}
Label_1755:
	var_626_bool = 0;
	func_3268(var_626_bool);
	if(var_626_bool != 0) {

	Label_1759:
		lshWaitForAnimEnd();
		var_627_string = var_3_string;
		if(var_627_string != 0) {
		} else {
			var_628_string = "";
			var_628_string = var_2_object;
			func_3030(var_628_string);
			goto Label_1759;
	}
		PlayAnimation("all", "idle");

	Label_1774:
		WaitForAnimEnd();
		var_631_string = var_3_string;
		if(var_631_string != 0) {
			goto Label_1784;
		}
		PlayAnimation("all", "idle");
		goto Label_1774;
	}
	goto Label_1784;
	
Label_1784:
	return 0;
	
}


func_2747(var_99_bool, var_100_object, var_101_string)
{
	var_102_bool = 0; var_103_bool = 0;
	var_106_bool = IsFuncExist(var_100_object, "HasProperty", (int)2);
	var_107_bool = var_106_bool == 0; //@nz
	if(var_107_bool != 0) {
		var_99_bool = 0;
		return 2;
	}
	@@var_100_object:HasProperty(var_101_string, var_103_bool);
	var_103_bool = var_99_bool;
	return 2;
}


func_3260(var_119_int)
{
	var_119_int = 515542;
	return 0;
}


func_3517(var_408_bool)
{
	var_410_int = 0; var_411_string = "";
	func_3110(var_410_int, "ood3Laska1");
	var_413_bool = var_410_int == (int)0;
	if(var_413_bool != 0) {
		var_408_bool = 1;
		return 0;
	}
	var_408_bool = 0;
	return 0;
}


func_3262(var_118_int)
{
	var_118_int = 502867;
	return 0;
}


func_1981(var_0_object, var_1_object, var_2_object, var_3_string, var_527_object, var_528_object)
{
	var_0_object = var_528_object;
	var_1_object = var_527_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_534_string = "";
		func_2058(var_528_object, "Pain");
		@@@var_0_object:SetMessage((int)540043);
		@@@var_0_object:ClearReplies();
		var_543_bool = 0;
		var_543_bool = 0;
		var_544_bool = 0; var_545_object = Obj();
		var_545_object = var_1_object;
		func_3505(var_545_object);
		if(var_544_bool != 0) {
			var_550_bool = 0; var_551_object = Obj();
			var_551_object = var_1_object;
			func_3457(var_551_object);
			if(var_550_bool != 0) {
				var_543_bool = 1;
			}
		}
		if(var_543_bool != 0) {
			@@@var_0_object:AddReply((int)540045, (int)42013, (int)42012);
		}
		@@@var_0_object:AddReply((int)540044, (int)-1, (int)42011);
		@@@var_0_object:AddReply((int)540060, (int)-1, (int)42029);
		goto Label_2028;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x7c1";
	}
Label_2028:
	var_565_bool = 0;
	func_3268(var_565_bool);
	if(var_565_bool != 0) {

	Label_2032:
		lshWaitForAnimEnd();
		var_566_string = var_3_string;
		if(var_566_string != 0) {
		} else {
			var_567_string = "";
			var_567_string = var_2_object;
			func_3030(var_567_string);
			goto Label_2032;
	}
		PlayAnimation("all", "idle");

	Label_2047:
		WaitForAnimEnd();
		var_570_string = var_3_string;
		if(var_570_string != 0) {
			goto Label_2057;
		}
		PlayAnimation("all", "idle");
		goto Label_2047;
	}
	goto Label_2057;
	
Label_2057:
	return 0;
	
}


func_3264(var_120_string)
{
	var_120_string = "ui/NPC_Laska.png";
	return 0;
}


func_3266(var_121_string)
{
	var_121_string = "ui/NPC_Laska_b.png";
	return 0;
}


func_3268(var_113_bool)
{
	var_113_bool = 1;
	return 0;
}


func_2501(var_61_bool)
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
	func_2791(var_66_bool, var_67_object);
	var_66_bool = var_61_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3270(var_48_object)
{
	var_50_object = Obj(); var_51_object = Obj();
	Trace("lockpick1time is given");
	CreateInvItem(var_51_object);
	@@var_51_object:SetItemName("lockpick");
	@@var_51_object:SetProperty("uses", (int)1);
	var_56_object = Obj(); var_57_object = Obj(); var_58_int = 0;
	var_48_object = var_56_object;
	var_51_object = var_57_object;
	func_3127(var_56_object, var_57_object, (int)1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2759(var_91_bool, var_92_object, var_93_string, var_94_float, var_95_float, var_96_float)
{
	var_97_float = 0; var_98_float = 0;
	var_99_bool = 0; var_100_object = Obj(); var_101_string = "";
	var_92_object = var_100_object;
	var_93_string = var_101_string;
	func_2747(var_99_bool, var_100_object, var_101_string);
	var_108_bool = var_99_bool == 0; //@nz
	if(var_108_bool != 0) {
		var_91_bool = 0;
		return 2;
	}
	@@var_92_object:GetProperty(var_93_string, var_98_float);
	var_109_float = 0; var_110_float = 0; var_111_float = 0; var_112_float = 0;
	var_110_float = var_98_float + var_94_float;
	var_95_float = var_111_float;
	var_96_float = var_112_float;
	func_3099(var_109_float, var_110_float, var_111_float, var_112_float);
	@@var_92_object:SetProperty(var_93_string, var_109_float);
	var_91_bool = 1;
	return 2;
}


func_966(var_0_object, var_1_object, var_2_object, var_3_string, var_392_object, var_393_object)
{
	var_0_object = var_393_object;
	var_1_object = var_392_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_399_string = "";
		func_1029(var_393_object, "Pain");
		@@@var_0_object:SetMessage((int)509951);
		@@@var_0_object:ClearReplies();
		var_408_bool = 0; var_409_object = Obj();
		var_409_object = var_1_object;
		func_3517(var_409_object);
		if(var_408_bool != 0) {
			@@@var_0_object:AddReply((int)509961, (int)10970, (int)10978);
		}
		@@@var_0_object:AddReply((int)509952, (int)-1, (int)10969);
		goto Label_999;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x3ca";
	}
Label_999:
	var_420_bool = 0;
	func_3268(var_420_bool);
	if(var_420_bool != 0) {

	Label_1003:
		lshWaitForAnimEnd();
		var_421_string = var_3_string;
		if(var_421_string != 0) {
		} else {
			var_422_string = "";
			var_422_string = var_2_object;
			func_3030(var_422_string);
			goto Label_1003;
	}
		PlayAnimation("all", "idle");

	Label_1018:
		WaitForAnimEnd();
		var_425_string = var_3_string;
		if(var_425_string != 0) {
			goto Label_1028;
		}
		PlayAnimation("all", "idle");
		goto Label_1018;
	}
	goto Label_1028;
	
Label_1028:
	return 0;
	
}


func_3529()
{
	var_86_object = Obj(); var_87_object = Obj();
	CreateDiaryEntry(var_87_object, (int)117, (int)1, (int)513740);
	var_91_bool = 0; var_92_object = Obj(); var_93_int = 0;
	var_87_object = var_92_object;
	func_3555(var_91_bool, var_92_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2516(var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0);
	var_114_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_113_float, var_114_float);
	return 0;
}


func_3030(var_263_string)
{
	var_264_bool = 0; var_265_float = 0; var_266_float = 0; var_267_bool = 0; var_268_float = 0; var_269_float = 0;
	lshHasAnimation(var_267_bool, var_263_string);
	var_270_bool = var_267_bool;
	if(var_270_bool != 0) {
		lshGetAnimTimes(var_263_string, var_268_float, var_269_float);
		lshPlayAnimation(var_268_float, var_269_float, (bool)0);
	} else {
		var_273_int = "Can't find lsh animation : " + var_263_string;
		Trace(var_273_int);
	}
	return 6;
	
}


func_3542(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj();
	GetDiaryRoot(var_102_object);
	var_103_bool = var_102_object == 0; //@nz
	if(var_103_bool != 0) {
		Trace("Can't retrieve diary root");
		var_100_object = 0;
		return 2;
	}
	var_102_object = var_100_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2521(var_44_bool)
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
	func_2739(var_51_float, var_52_object);
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


func_3291()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_2781(var_44_bool, var_45_cvector)
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


func_3297()
{
	SetVariable("ood2Laska1", (int)1);
	return 0;
}


func_3555(var_91_bool, var_92_object, var_93_int)
{
	var_94_object = Obj(); var_95_object = Obj(); var_96_int = 0; var_97_object = Obj(); var_98_object = Obj(); var_99_int = 0;
	func_3542(Obj());
	var_100_object = var_97_object;
	@@var_97_object:Find(var_93_int, var_98_object);
	var_105_bool = var_98_object == 0; //@nz
	if(var_105_bool != 0) {
		var_107_int = "Can't find diary parent with id: " + var_93_int;
		Trace(var_107_int);
		var_91_bool = 0;
		return 6;
	}
	@@var_98_object:AddChild(var_92_object);
	SendWorldWndMessage((int)7);
	@@var_92_object:GetCategory(var_99_int);
	SetDiarySection(var_99_int);
	var_91_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_3046(var_241_string, var_242_bool)
{
	var_245_bool = 0; var_246_float = 0; var_247_float = 0; var_248_bool = 0; var_249_float = 0; var_250_float = 0;
	lshHasAnimation(var_248_bool, var_241_string);
	var_251_bool = var_248_bool;
	if(var_251_bool != 0) {
		lshGetAnimTimes(var_241_string, var_249_float, var_250_float);
		lshPlayAnimation(var_249_float, var_250_float, var_242_bool);
	} else {
		var_253_int = "Can't find lsh animation : " + var_241_string;
		Trace(var_253_int);
	}
	return 6;
	
}


func_3303()
{
	SetVariable("ood2Laska2", (int)1);
	return 0;
}


func_2791(var_40_bool, var_41_object)
{
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	@@var_41_object:GetPosition(var_43_cvector);
	var_44_bool = 0; var_45_cvector = CVector(0,0,0);
	var_43_cvector = var_45_cvector;
	func_2781(var_44_bool, var_45_cvector);
	var_44_bool = var_40_bool;
	return 2;
}


func_2280(var_0_object, var_636_int, var_637_object)
{
	var_639_object = Obj(); var_640_bool = 0; var_641_int = 0; var_642_bool = 0; var_643_object = Obj(); var_644_bool = 0; var_645_int = 0; var_646_bool = 0;
	var_0_object = var_637_object;
	var_647_bool = 0; var_648_object = Obj(); var_649_float = 0;
	var_637_object = var_648_object;
	func_2805(var_647_bool, var_648_object, (float)70.0);
	var_650_bool = var_647_bool == 0; //@nz
	if(var_650_bool != 0) {
		var_636_int = -2;
		return 8;
	}
	CreateDialog(var_643_object);
	var_651_int = 0;
	func_3262(var_651_int);
	@@var_643_object:SetNPCName(var_651_int);
	var_652_int = 0;
	func_3260(var_652_int);
	@@var_643_object:SetNPCDescription(var_652_int);
	var_653_string = "";
	func_3264(var_653_string);
	@@var_643_object:SetPhoto(var_653_string);
	var_654_string = "";
	func_3266(var_654_string);
	@@var_643_object:SetPhoto2(var_654_string);
	var_655_int = 0;
	func_3600(var_655_int);
	@@var_643_object:SetPlayerName(var_655_int);
	IsOverrideActive(var_644_bool);
	var_656_bool = var_644_bool;
	if(var_656_bool != 0) {
		var_636_int = -2;
		return 8;
	}
	DoDialog(var_643_object);
	var_657_bool = 0; var_658_object = Obj();
	func_3083(Obj());
	var_659_object = var_658_object;
	func_2892(var_657_bool, var_658_object);
	var_660_object = Obj(); var_661_object = Obj();
	var_637_object = var_660_object;
	var_643_object = var_661_object;
	TaskCall(13);
	func_2361(var_662_object, var_663_object, var_664_string, var_665_bool, var_660_object, var_661_object);
	TaskReturn();
	@@var_643_object:IsDialogEnd(var_646_bool);
	
Label_2343:
	var_690_bool = var_646_bool == 0; //@nz
	if(var_690_bool != 0) {
		sync();
		@@var_643_object:IsDialogEnd(var_646_bool);
		goto Label_2343;
	}
	var_637_object = Obj();
	func_2874();
	StopDialog(var_643_object);
	@@var_643_object:GetReturnValue((int)-1);
	var_645_int = var_636_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3309()
{
	SetVariable("ood11Laska1", (int)1);
	return 0;
}


func_2543()
{
	var_694_float = 0; var_695_float = 0;
	rand(var_695_float, (int)8, (int)16);
	SetTimer((int)10, var_695_float);
	return 2;
}


func_2800(var_36_bool)
{
	var_37_bool = 0; var_38_bool = 0;
	IsLoaded(var_38_bool);
	var_38_bool = var_36_bool;
	return 2;
}


func_3315(var_87_object)
{
	Trace("bandage is given");
	var_90_object = Obj(); var_91_string = ""; var_92_int = 0;
	var_87_object = var_90_object;
	func_3146(var_90_object, "bandage", (int)1);
	return 0;
}


func_2805(var_70_bool, var_71_object, var_72_float)
{
	var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_bool = 0; var_81_bool = 0; var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_bool = 0; var_90_bool = 0;
	@@var_71_object:GetPosition(var_83_cvector);
	@@var_71_object:GetEyesHeight(var_82_float);
	var_91_float = GetByIndex(var_83_cvector, 1);
	var_91_float = var_91_float + var_82_float;
	SetByIndex(var_83_cvector, 1) = var_91_float;
	GetPosition(var_84_cvector);
	GetEyesHeight(var_82_float);
	var_92_float = GetByIndex(var_84_cvector, 1);
	var_92_float = var_92_float + var_82_float;
	SetByIndex(var_84_cvector, 1) = var_92_float;
	var_85_cvector = var_83_cvector - var_84_cvector;
	var_93_float = GetByIndex(var_85_cvector, 1);
	SetByIndex(var_85_cvector, 1) = (float)0;
	var_94_int = var_85_cvector | var_85_cvector;
	var_95_float = sqrt(var_94_int);
	var_85_cvector = var_85_cvector / var_95_float;
	var_86_cvector = -var_85_cvector;
	var_96_float = var_85_cvector * var_72_float;
	var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0);
	var_98_cvector = var_86_cvector ^ CVector(0.0, 1.0, 0.0);
	func_3089(var_97_cvector, var_98_cvector);
	var_106_float = var_97_cvector * (int)25;
	var_107_int = var_96_float + var_106_float;
	var_87_cvector = var_107_int - CVector(0.0, 10.0, 0.0);
	var_88_cvector = var_84_cvector + var_87_cvector;
	IsOverrideActive(var_89_bool);
	var_109_bool = var_89_bool;
	if(var_109_bool != 0) {
		var_70_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_88_cvector, var_86_cvector, (bool)1);
	var_111_float = GetByIndex(var_87_cvector, 0);
	var_112_float = GetByIndex(var_87_cvector, 2);
	Rotate(var_111_float, var_112_float);
	var_113_bool = 0;
	func_3268(var_113_bool);
	if(var_113_bool != 0) {
	} else {
		HasAnimationTrack(var_90_bool, "head");
		var_115_bool = var_90_bool;
		if(var_115_bool == 0) goto Label_2868;
		LookAsyncCamera("head");
	}
Label_2868:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_70_bool = 1;
	return 18;
	
}


func_3061(var_165_bool, var_166_string)
{
	var_167_bool = 0; var_168_bool = 0;
	var_169_bool = 0;
	func_3268(var_169_bool);
	if(var_169_bool != 0) {
		lshHasSpeech(var_168_bool, var_166_string);
		var_170_bool = var_168_bool;
		if(var_170_bool != 0) {
			lshPlaySpeech(var_166_string);
			var_165_bool = 1;
			return 2;
		}
	}
	var_165_bool = 0;
	return 2;
}


func_2552()
{
	KillTimer((int)10);
	return 0;
}


func_1785(var_2_object, var_608_string)
{
	var_609_bool = 0;
	func_3268(var_609_bool);
	var_610_bool = var_609_bool == 0; //@nz
	if(var_610_bool != 0) {
		return 0;
	}
	var_611_bool = var_608_string == var_2_object;
	if(var_611_bool != 0) {
		return 0;
	}
	var_612_string = ""; var_613_bool = 0;
	var_608_string = var_612_string;
	var_615_bool = var_608_string == "";
	if(var_615_bool != 0) {
		var_613_bool = 0;
	} else {
		var_613_bool = 1;
	}
	func_3046(var_612_string, var_613_bool);
	var_2_object = var_608_string;
	return 0;
	
}


func_1277(var_0_object, var_1_object, var_2_object, var_3_string, var_456_object, var_457_object)
{
	var_0_object = var_457_object;
	var_1_object = var_456_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_463_string = "";
		func_1349(var_457_object, "Neutral");
		@@@var_0_object:SetMessage((int)512815);
		@@@var_0_object:ClearReplies();
		var_472_bool = 0;
		var_472_bool = 0;
		var_473_bool = 0; var_474_object = Obj();
		var_474_object = var_1_object;
		func_3481(var_474_object);
		if(var_473_bool != 0) {
			var_479_bool = 0; var_480_object = Obj();
			var_480_object = var_1_object;
			func_3493(var_480_object);
			if(var_479_bool != 0) {
				var_472_bool = 1;
			}
		}
		if(var_472_bool != 0) {
			@@@var_0_object:AddReply((int)512816, (int)14017, (int)14016);
		}
		@@@var_0_object:AddReply((int)512828, (int)-1, (int)14028);
		goto Label_1319;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x501";
	}
Label_1319:
	var_491_bool = 0;
	func_3268(var_491_bool);
	if(var_491_bool != 0) {

	Label_1323:
		lshWaitForAnimEnd();
		var_492_string = var_3_string;
		if(var_492_string != 0) {
		} else {
			var_493_string = "";
			var_493_string = var_2_object;
			func_3030(var_493_string);
			goto Label_1323;
	}
		PlayAnimation("all", "idle");

	Label_1338:
		WaitForAnimEnd();
		var_496_string = var_3_string;
		if(var_496_string != 0) {
			goto Label_1348;
		}
		PlayAnimation("all", "idle");
		goto Label_1338;
	}
	goto Label_1348;
	
Label_1348:
	return 0;
	
}


func_3326(var_76_object)
{
	Trace("tourniquet is given");
	var_79_object = Obj(); var_80_string = ""; var_81_int = 0;
	var_76_object = var_79_object;
	func_3146(var_79_object, "tourniquet", (int)1);
	return 0;
}


func_3583(var_72_object)
{
	var_73_object = Obj(); var_74_object = Obj(); var_75_object = Obj(); var_76_object = Obj();
	GetMainOutdoorScene(var_75_object);
	var_77_bool = var_75_object == 0; //@ne
	if(var_77_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_76_object = 0;
		var_76_object = var_72_object;
		return 4;
	}
	@@var_75_object:GetMap(var_76_object);
	var_76_object = var_72_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


