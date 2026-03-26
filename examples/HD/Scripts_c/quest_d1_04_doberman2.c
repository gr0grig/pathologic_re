// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,StopGroup0/0,FindShiftedPathTo/2,irand/2,WaitForAnimEnd/1,Sleep/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,rand/1,Face/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,GetScene/1,FindDirLength/3,Speak/1,CanSee/2,FindPathTo/2,FollowPath/5,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,AddItem/3,AddItem/4,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,GetVariable/2,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,GetGameTime/1,BroadcastMessage/3,SetVariable/2,WorkWithCorpse/1,Barter/1,CreateInvItem/1,ClearSubContainer/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1,ReportReputationChange/3,FindActor/2,ReportReputationChange/4,SetRTEnvelope/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:battle|W:ood1Doberman2_1|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:hook|W:watch|W:alpha_pills|W:meradorm|W:beta_pills|W:monomicin|W:lockpick|W:rifle_ammo|W:revolver_ammo|W:samopal_ammo|W:unholster|W:player_shot|A:IsWeaponHolstered|W:heal|W:player|W:ui/NPC_Citizen2.png|W:ui/NPC_Citizen2_b.png
// @GLOBALS: 0:bool:
// @RUN_OP: 0x273
// @RUN_TASK: 3
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb8 vars=int,int
// @TASK_2: vars= params=1
// @EVENT_0: op=0x1e6 vars=object
// @EVENT_6: op=0x1f4 vars=
// @EVENT_22: op=0x26d vars=object,int,float,float
// @EVENT_16: op=0x26f vars=object,string
// @EVENT_41: op=0x271 vars=object
// @TASK_3: vars=bool,bool,bool params=0
// @EVENT_0: op=0x28b vars=object
// @EVENT_17: op=0x29f vars=object
// @EVENT_30: op=0x2b7 vars=object,object,bool
// @EVENT_40: op=0x2d3 vars=object
// @EVENT_42: op=0x2e7 vars=object,string
// @EVENT_26: op=0x30c vars=string
// @EVENT_1: op=0x31a vars=object
// @EVENT_3: op=0x32d vars=object
// @EVENT_7: op=0x333 vars=int
// @EVENT_6: op=0x33f vars=
// @EVENT_41: op=0x356 vars=object
// @EVENT_10: op=0x3c7 vars=object
// @EVENT_28: op=0x3cb vars=
// @TASK_4: vars= params=0
// @EVENT_0: op=0x3e4 vars=object
// @EVENT_17: op=0x3f8 vars=object
// @EVENT_30: op=0x410 vars=object,object,bool
// @EVENT_40: op=0x42c vars=object
// @EVENT_42: op=0x440 vars=object,string
// @EVENT_26: op=0x465 vars=string
// @EVENT_6: op=0x473 vars=
// @EVENT_1: op=0x47a vars=object
// @TASK_5: vars=object params=1
// @EVENT_0: op=0x516 vars=object
// @EVENT_17: op=0x52a vars=object
// @EVENT_30: op=0x542 vars=object,object,bool
// @EVENT_40: op=0x55e vars=object
// @EVENT_42: op=0x572 vars=object,string
// @EVENT_26: op=0x597 vars=string
// @EVENT_41: op=0x5b0 vars=object
// @EVENT_7: op=0x5b9 vars=int
// @EVENT_6: op=0x5dc vars=
// @EVENT_1: op=0x5e3 vars=object
// @TASK_6: vars=object,int,int,bool,float,int params=1
// @TASK_7: vars=bool,object,bool params=6
// @EVENT_6: op=0x895 vars=
// @EVENT_7: op=0x8cd vars=int
// @EVENT_1: op=0x8e8 vars=object
// @EVENT_2: op=0x8f7 vars=object
// @EVENT_10: op=0x97d vars=object
// @EVENT_41: op=0x988 vars=object
// @STANDALONE_EVENT_16: op=0xd36 vars=object,string
// @STANDALONE_EVENT_41: op=0xd43 vars=object
// @STANDALONE_EVENT_22: op=0xd49 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0xd51 vars=object,int,float,float,cvector,cvector
// @PE: 0x4a,0xa2,0xb8,0x1d7,0x1f4,0x253,0x26d,0x26f,0x271,0x30c,0x31a,0x32d,0x333,0x33f,0x356,0x3c7,0x465,0x473,0x47a,0x597,0x5b0,0x5dc,0x5e3,0x5f1,0x5f9,0x5fc,0x88d,0x895,0x8cd,0x8e8,0x8f7,0x96b,0x97d,0x988,0x991,0x99c,0xbbd,0xbc4,0xbd4,0xbdd,0xbe7,0xc2b,0xc31,0xc54,0xd2e,0xd43,0xd49,0xd51,0xd5b,0xd7b,0xdab,0xdb1,0xdf3,0xdfc,0xe04,0xe0e,0xe16,0xe1d,0xe23,0xe26,0xe2d,0xe30,0xe32,0xe35,0xe46,0xe4c,0xe4f,0xe51,0xe54,0xe56,0xe59,0xe81,0xe84,0xea0

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	if((int)1 != 0) {
		func_2915();
		var_23_bool = var_18_object == (int)34223;
		if(var_23_bool != 0) {
			var_24_bool = 0; var_25_object = Obj();
			var_25_object = var_1_object;
			func_3121(var_25_object);
			if(var_24_bool != 0) {
				var_32_object = Obj(); var_33_object = Obj();
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_3115();
				var_36_string = "";
				func_162(var_19_bool, "Neutral");
				@@@var_0_object:SetMessage((int)532749);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)533297, (int)34809, (int)34808);
				@@@var_0_object:AddReply((int)533299, (int)34811, (int)34810);
				return 0;
			}
			var_60_string = "";
			func_162(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)532753);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532754, (int)-1, (int)34228);
			@@@var_0_object:AddReply((int)532977, (int)-1, (int)34475);
			return 0;
		}
		var_69_bool = var_18_object == (int)34811;
		if(var_69_bool != 0) {
			var_70_string = "";
			func_162(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)533300);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533301, (int)34809, (int)34812);
			return 0;
		}
		var_76_bool = var_18_object == (int)34809;
		if(var_76_bool != 0) {
			var_77_string = "";
			func_162(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)533298);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532975, (int)34474, (int)34473);
			@@@var_0_object:AddReply((int)532978, (int)34477, (int)34476);
			return 0;
		}
		var_86_bool = var_18_object == (int)34477;
		if(var_86_bool != 0) {
			var_87_string = "";
			func_162(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)532979);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532980, (int)34480, (int)34478);
			@@@var_0_object:AddReply((int)532981, (int)-1, (int)34479);
			return 0;
		}
		var_96_bool = var_18_object == (int)34480;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_162(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)532982);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532983, (int)-1, (int)34481);
			@@@var_0_object:AddReply((int)532984, (int)-1, (int)34482);
			return 0;
		}
		var_106_bool = var_18_object == (int)34474;
		if(var_106_bool != 0) {
			var_107_string = "";
			func_162(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)532976);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532750, (int)34225, (int)34224);
			@@@var_0_object:AddReply((int)532985, (int)34484, (int)34483);
			return 0;
		}
		var_116_bool = var_18_object == (int)34484;
		if(var_116_bool != 0) {
			var_117_string = "";
			func_162(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)532986);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532987, (int)34225, (int)34485);
			@@@var_0_object:AddReply((int)532988, (int)-1, (int)34486);
			return 0;
		}
		var_126_bool = var_18_object == (int)34225;
		if(var_126_bool != 0) {
			var_127_string = "";
			func_162(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)532751);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532752, (int)34471, (int)34226);
			return 0;
		}
		var_133_bool = var_18_object == (int)34471;
		if(var_133_bool != 0) {
			var_134_string = "";
			func_162(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)532973);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532974, (int)34488, (int)34472);
			@@@var_0_object:AddReply((int)532991, (int)34491, (int)34490);
			return 0;
		}
		var_143_bool = var_18_object == (int)34491;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_162(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)532992);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532993, (int)34488, (int)34492);
			return 0;
		}
		var_150_bool = var_18_object == (int)34488;
		if(var_150_bool != 0) {
			var_151_string = "";
			func_162(var_19_bool, "Neutral");
			@@@var_0_object:SetMessage((int)532989);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532990, (int)-1, (int)34489);
			@@@var_0_object:AddReply((int)532994, (int)-1, (int)34494);
			return 0;
		}
		var_3_string = true;
		var_159_bool = 0;
		func_3683(var_159_bool);
		if(var_159_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb9";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_3619(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_25_object = Obj();
		var_18_bool = var_25_object;
		func_3622(var_25_object);
	}
	return 2;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_3628();
	return 0;
}


task_2_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_bool, var_10_bool, var_11_bool, var_12_object, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	return 0;
}


task_2_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	return 0;
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	return 0;
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_3619(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_20_int > (int)1;
		if(var_26_bool != 0) {
			func_838(var_20_int);
		}
		var_28_object = Obj();
		var_18_bool = var_28_object;
		func_3622(var_28_object);
	}
	return 2;
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_object = Obj();
	var_18_bool = var_21_object;
	func_3505(var_21_object);
	var_30_int = 0; var_31_object = Obj();
	var_18_bool = var_31_object;
	func_3588(var_30_int, var_31_object);
	var_30_int = var_20_int;
	var_67_bool = var_20_int > (int)0;
	if(var_67_bool != 0) {
		var_69_bool = var_20_int > (int)1;
		if(var_69_bool != 0) {
			func_838(var_20_int);
		}
		var_71_object = Obj();
		var_18_bool = var_71_object;
		func_3598(var_71_object);
	}
	return 2;
}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0;
	var_18_bool = var_24_object;
	var_19_object = var_25_object;
	var_20_bool = var_26_bool;
	func_3713(var_26_bool);
	if(var_23_bool != 0) {
		var_27_int = 0; var_28_object = Obj(); var_29_bool = 0;
		var_18_bool = var_28_object;
		var_20_bool = var_29_bool;
		func_3606(var_28_object, var_29_bool);
		var_27_int = var_22_int;
		var_67_bool = var_22_int > (int)0;
		if(var_67_bool != 0) {
			var_69_bool = var_22_int > (int)1;
			if(var_69_bool != 0) {
				func_838(var_22_int);
			}
			var_71_object = Obj();
			var_18_bool = var_71_object;
			func_3613(var_71_object);
		}
	}
	return 2;
}


task_3_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_3665(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_20_int > (int)1;
		if(var_26_bool != 0) {
			func_838(var_20_int);
		}
		var_18_bool = Obj();
		func_3668();
	}
	return 2;
}


task_3_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_bool = 0; var_23_object = Obj(); var_24_string = "";
	var_18_object = var_23_object;
	var_19_bool = var_24_string;
	func_3419(var_22_bool, var_23_object, var_24_string);
	if(var_22_bool != 0) {
		func_838(var_21_int);
		var_51_object = Obj(); var_52_string = "";
		var_18_object = var_51_object;
		var_19_bool = var_52_string;
		func_3451(var_51_object, var_52_string);
	} else {
		var_127_int = 0; var_128_string = ""; var_129_object = Obj();
		var_19_bool = var_128_string;
		var_18_object = var_129_object;
		func_3629(var_129_object);
		var_127_int = var_21_int;
		var_131_bool = var_21_int > (int)0;
		if(var_131_bool == 0) goto Label_779;
		var_133_bool = var_21_int > (int)1;
		if(var_133_bool != 0) {
			func_838(var_21_int);
		}
		var_134_string = ""; var_135_object = Obj();
		var_19_bool = var_134_string;
		var_18_object = var_135_object;
		func_3632();
	}
Label_779:
	return 2;
	
}


task_3_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = "";
	var_18_bool = var_20_string;
	func_3518(var_19_bool, var_20_string);
	if(var_19_bool != 0) {
		func_838(var_18_bool);
		var_29_string = "";
		var_18_bool = var_29_string;
		func_3534(var_29_string);
	}
	return 0;
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj();
	var_18_bool = var_20_object;
	func_3476(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		func_838(var_18_bool);
		var_32_object = Obj();
		var_18_bool = var_32_object;
		func_3499(var_32_object);
	} else {
		var_34_object = Obj();
		var_18_bool = var_34_object;
		func_863(var_18_bool, var_34_object);
	}
	return 0;
	
}


task_3_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_object = Obj();
	var_18_bool = var_19_object;
	func_863(var_18_bool, var_19_object);
	return 0;
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_int, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_20_bool = var_18_bool != (int)110;
	if(var_20_bool != 0) {
		return 0;
	}
	var_2_object = false;
	KillTimer((int)110);
	ResetAAS();
	return 0;
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_838(var_17_bool);
	func_3628();
	return 0;
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_838(var_18_bool);
	var_18_bool = Obj();
	func_3395();
	return 0;
}


task_3_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	RequestClearPath(var_18_bool);
	return 0;
}


task_3_event_28(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	Stop();
	return 0;
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_3619(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_20_int > (int)1;
		if(var_26_bool != 0) {
			func_1241();
		}
		var_27_object = Obj();
		var_18_bool = var_27_object;
		func_3622(var_27_object);
	}
	return 2;
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_object = Obj();
	var_18_bool = var_21_object;
	func_3505(var_21_object);
	var_30_int = 0; var_31_object = Obj();
	var_18_bool = var_31_object;
	func_3588(var_30_int, var_31_object);
	var_30_int = var_20_int;
	var_67_bool = var_20_int > (int)0;
	if(var_67_bool != 0) {
		var_69_bool = var_20_int > (int)1;
		if(var_69_bool != 0) {
			func_1241();
		}
		var_70_object = Obj();
		var_18_bool = var_70_object;
		func_3598(var_70_object);
	}
	return 2;
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0;
	var_18_bool = var_24_object;
	var_19_object = var_25_object;
	var_20_bool = var_26_bool;
	func_3713(var_26_bool);
	if(var_23_bool != 0) {
		var_27_int = 0; var_28_object = Obj(); var_29_bool = 0;
		var_18_bool = var_28_object;
		var_20_bool = var_29_bool;
		func_3606(var_28_object, var_29_bool);
		var_27_int = var_22_int;
		var_67_bool = var_22_int > (int)0;
		if(var_67_bool != 0) {
			var_69_bool = var_22_int > (int)1;
			if(var_69_bool != 0) {
				func_1241();
			}
			var_70_object = Obj();
			var_18_bool = var_70_object;
			func_3613(var_70_object);
		}
	}
	return 2;
}


task_4_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_3665(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_20_int > (int)1;
		if(var_26_bool != 0) {
			func_1241();
		}
		var_18_bool = Obj();
		func_3668();
	}
	return 2;
}


task_4_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_bool = 0; var_23_object = Obj(); var_24_string = "";
	var_18_object = var_23_object;
	var_19_bool = var_24_string;
	func_3419(var_22_bool, var_23_object, var_24_string);
	if(var_22_bool != 0) {
		func_1241();
		var_50_object = Obj(); var_51_string = "";
		var_18_object = var_50_object;
		var_19_bool = var_51_string;
		func_3451(var_50_object, var_51_string);
	} else {
		var_126_int = 0; var_127_string = ""; var_128_object = Obj();
		var_19_bool = var_127_string;
		var_18_object = var_128_object;
		func_3629(var_128_object);
		var_126_int = var_21_int;
		var_130_bool = var_21_int > (int)0;
		if(var_130_bool == 0) goto Label_1124;
		var_132_bool = var_21_int > (int)1;
		if(var_132_bool != 0) {
			func_1241();
		}
		var_133_string = ""; var_134_object = Obj();
		var_19_bool = var_133_string;
		var_18_object = var_134_object;
		func_3632();
	}
Label_1124:
	return 2;
	
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = "";
	var_18_bool = var_20_string;
	func_3518(var_19_bool, var_20_string);
	if(var_19_bool != 0) {
		func_1241();
		var_28_string = "";
		var_18_bool = var_28_string;
		func_3534(var_28_string);
	}
	return 0;
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_1241();
	func_3628();
	return 0;
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj();
	var_18_bool = var_20_object;
	func_3476(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		func_1241();
		var_31_object = Obj();
		var_18_bool = var_31_object;
		func_3499(var_31_object);
	}
	return 0;
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_3619(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_20_int > (int)1;
		if(var_26_bool != 0) {
			func_1445();
		}
		var_29_object = Obj();
		var_18_bool = var_29_object;
		func_3622(var_29_object);
	}
	return 2;
}


task_5_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_object = Obj();
	var_18_bool = var_21_object;
	func_3505(var_21_object);
	var_30_int = 0; var_31_object = Obj();
	var_18_bool = var_31_object;
	func_3588(var_30_int, var_31_object);
	var_30_int = var_20_int;
	var_67_bool = var_20_int > (int)0;
	if(var_67_bool != 0) {
		var_69_bool = var_20_int > (int)1;
		if(var_69_bool != 0) {
			func_1445();
		}
		var_72_object = Obj();
		var_18_bool = var_72_object;
		func_3598(var_72_object);
	}
	return 2;
}


task_5_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0;
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0;
	var_18_bool = var_24_object;
	var_19_object = var_25_object;
	var_20_bool = var_26_bool;
	func_3713(var_26_bool);
	if(var_23_bool != 0) {
		var_27_int = 0; var_28_object = Obj(); var_29_bool = 0;
		var_18_bool = var_28_object;
		var_20_bool = var_29_bool;
		func_3606(var_28_object, var_29_bool);
		var_27_int = var_22_int;
		var_67_bool = var_22_int > (int)0;
		if(var_67_bool != 0) {
			var_69_bool = var_22_int > (int)1;
			if(var_69_bool != 0) {
				func_1445();
			}
			var_72_object = Obj();
			var_18_bool = var_72_object;
			func_3613(var_72_object);
		}
	}
	return 2;
}


task_5_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0;
	var_21_int = 0; var_22_object = Obj();
	var_18_bool = var_22_object;
	func_3665(var_22_object);
	var_21_int = var_20_int;
	var_24_bool = var_20_int > (int)0;
	if(var_24_bool != 0) {
		var_26_bool = var_20_int > (int)1;
		if(var_26_bool != 0) {
			func_1445();
		}
		var_18_bool = Obj();
		func_3668();
	}
	return 2;
}


task_5_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_string, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0;
	var_22_bool = 0; var_23_object = Obj(); var_24_string = "";
	var_18_object = var_23_object;
	var_19_bool = var_24_string;
	func_3419(var_22_bool, var_23_object, var_24_string);
	if(var_22_bool != 0) {
		func_1445();
		var_52_object = Obj(); var_53_string = "";
		var_18_object = var_52_object;
		var_19_bool = var_53_string;
		func_3451(var_52_object, var_53_string);
	} else {
		var_128_int = 0; var_129_string = ""; var_130_object = Obj();
		var_19_bool = var_129_string;
		var_18_object = var_130_object;
		func_3629(var_130_object);
		var_128_int = var_21_int;
		var_132_bool = var_21_int > (int)0;
		if(var_132_bool == 0) goto Label_1430;
		var_134_bool = var_21_int > (int)1;
		if(var_134_bool != 0) {
			func_1445();
		}
		var_135_string = ""; var_136_object = Obj();
		var_19_bool = var_135_string;
		var_18_object = var_136_object;
		func_3632();
	}
Label_1430:
	return 2;
	
}


task_5_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = "";
	var_18_bool = var_20_string;
	func_3518(var_19_bool, var_20_string);
	if(var_19_bool != 0) {
		func_1445();
		var_30_string = "";
		var_18_bool = var_30_string;
		func_3534(var_30_string);
	}
	return 0;
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_1445();
	var_18_bool = Obj();
	func_3395();
	return 0;
}


task_5_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0);
	var_24_bool = var_18_bool != (int)111;
	if(var_24_bool != 0) {
		return 4;
	}
	var_25_bool = 0; var_26_object = Obj();
	var_26_object = var_0_object;
	func_2620(var_25_bool, var_26_object);
	var_59_bool = var_25_bool == 0; //@nz
	if(var_59_bool != 0) {
		func_1445();
		return 4;
	}
	GetDirection(var_21_cvector);
	var_62_cvector = CVector(0,0,0); var_63_object = Obj();
	var_63_object = var_0_object;
	func_2474(var_62_cvector, var_63_object);
	var_62_cvector = var_22_cvector;
	var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0);
	var_21_cvector = var_69_cvector;
	var_22_cvector = var_70_cvector;
	func_3047(var_68_float, var_69_cvector, var_70_cvector);
	var_93_bool = var_68_float < (float)0.4999999701976776;
	if(var_93_bool != 0) {
		var_94_object = Obj();
		var_94_object = var_0_object;
		func_2770(var_94_object);
	}
	return 4;
}


task_5_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_1445();
	func_3628();
	return 0;
}


task_5_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj();
	var_18_bool = var_20_object;
	func_3476(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		func_1445();
		var_33_object = Obj();
		var_18_bool = var_33_object;
		func_3499(var_33_object);
	}
	return 0;
}


task_7_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_2267(var_17_bool);
	func_3628();
	return 0;
}


task_7_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_int)
{
	var_20_bool = var_18_int == (int)1;
	if(var_20_bool != 0) {
		var_21_object = Obj();
		var_21_object = var_1_object;
		func_3095(var_21_object);
	} else {
		var_26_int = 0;
		var_18_int = var_26_int;
		func_2411(var_17_bool, var_18_int, var_26_int);
	}
	return 0;
	
}


task_7_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_bool = 0;
	var_19_bool = 0;
	var_20_bool = var_1_object == var_18_object;
	if(var_20_bool != 0) {
		var_21_bool = var_2_object == 0; //@nz
		if(var_21_bool != 0) {
			var_19_bool = 1;
		}
	}
	if(var_19_bool != 0) {
		var_2_object = true;
		var_22_object = Obj();
		var_18_object = var_22_object;
		func_2904(var_22_object);
	}
	return 0;
}


task_7_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_bool = 0;
	var_19_bool = 0;
	var_20_bool = var_1_object == var_18_object;
	if(var_20_bool != 0) {
		var_21_object = var_2_object;
		if(var_21_object != 0) {
			var_19_bool = 1;
		}
	}
	if(var_19_bool != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	return 0;
}


task_7_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	RequestClearPath(var_18_object);
	return 0;
}


task_7_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	func_2267(var_18_object);
	var_18_object = Obj();
	func_3395();
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_string)
{
	var_20_float = 0; var_21_float = 0;
	var_23_bool = var_19_string == "health";
	if(var_23_bool != 0) {
		GetProperty("health", var_21_float);
		var_26_bool = var_21_float <= (int)0;
		if(var_26_bool != 0) {
			SignalDeath(var_18_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_object = Obj();
	var_18_object = var_19_object;
	func_3374(var_19_object);
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_int, var_20_float, var_21_float)
{
	var_22_object = Obj(); var_23_int = 0; var_24_float = 0;
	var_18_object = var_22_object;
	var_19_int = var_23_int;
	var_20_float = var_24_float;
	func_2688(var_22_object, var_23_int, var_24_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_int, var_20_float, var_21_float, var_22_cvector, var_23_cvector)
{
	var_24_object = Obj(); var_25_int = 0; var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0);
	var_18_object = var_24_object;
	var_19_int = var_25_int;
	var_20_float = var_26_float;
	var_22_cvector = var_27_cvector;
	var_23_cvector = var_28_cvector;
	func_2756(var_26_float, var_27_cvector, var_28_cvector);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	SensePlayerOnly((bool)1);
	func_3685();
	func_642();
	
Label_636:
	var_2_object = false;
	func_903(var_16_object, var_17_bool);
	goto Label_636;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_43_int, var_44_object)
{
	var_46_object = Obj(); var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0;
	var_0_object = var_44_object;
	var_54_bool = 0; var_55_object = Obj(); var_56_float = 0;
	var_44_object = var_55_object;
	func_2786(var_54_bool, var_55_object, (float)70.0);
	var_101_bool = var_54_bool == 0; //@nz
	if(var_101_bool != 0) {
		var_43_int = -2;
		return 8;
	}
	CreateDialog(var_50_object);
	var_102_int = 0;
	func_3677(var_102_int);
	@@var_50_object:SetNPCName(var_102_int);
	var_103_int = 0;
	func_3675(var_103_int);
	@@var_50_object:SetNPCDescription(var_103_int);
	var_104_string = "";
	func_3679(var_104_string);
	@@var_50_object:SetPhoto(var_104_string);
	var_105_string = "";
	func_3681(var_105_string);
	@@var_50_object:SetPhoto2(var_105_string);
	var_106_int = 0;
	func_3133(var_106_int);
	@@var_50_object:SetPlayerName(var_106_int);
	IsOverrideActive(var_51_bool);
	var_114_bool = var_51_bool;
	if(var_114_bool != 0) {
		var_43_int = -2;
		return 8;
	}
	DoDialog(var_50_object);
	var_115_object = Obj(); var_116_object = Obj();
	var_44_object = var_115_object;
	var_50_object = var_116_object;
	TaskCall(1);
	func_74(var_117_object, var_118_object, var_119_string, var_120_bool, var_115_object, var_116_object);
	TaskReturn();
	@@var_50_object:IsDialogEnd(var_53_bool);
	
Label_56:
	var_184_bool = var_53_bool == 0; //@nz
	if(var_184_bool != 0) {
		sync();
		@@var_50_object:IsDialogEnd(var_53_bool);
		goto Label_56;
	}
	var_44_object = Obj();
	func_2855();
	StopDialog(var_50_object);
	@@var_50_object:GetReturnValue((int)-1);
	var_52_int = var_43_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3588(var_30_int, var_31_object)
{
	var_32_bool = 0; var_33_object = Obj();
	var_31_object = var_33_object;
	func_2620(var_32_bool, var_33_object);
	if(var_32_bool != 0) {
		var_30_int = 2;
	} else {
		var_30_int = 0;
	}
	return 0;
	
}


func_3598(var_73_object)
{
	var_74_object = Obj();
	var_73_object = var_74_object;
	TaskCall(6);
	func_1521(var_74_object);
	TaskReturn();
	return 0;
}


func_3086(var_28_int)
{
	var_29_float = 0; var_30_float = 0;
	GetGameTime(var_30_float);
	var_32_int = 0;
	var_32_int = var_30_float / (int)24;
	var_28_int = (int)1 + var_32_int;
	return 2;
}


func_2579(var_46_bool, var_47_object)
{
	var_48_bool = 0; var_49_bool = 0;
	@@var_47_object:IsDead(var_49_bool);
	var_49_bool = var_46_bool;
	return 2;
}


func_3606(var_27_int, var_28_object)
{
	var_30_int = 0; var_31_object = Obj();
	var_28_object = var_31_object;
	func_3588(var_30_int, var_31_object);
	var_30_int = var_27_int;
	return 0;
}


func_3095(var_21_object)
{
	var_22_bool = 0; var_23_bool = 0;
	IsPlayerActor(var_21_object, var_23_bool);
	var_24_bool = var_23_bool;
	if(var_24_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_2584(var_35_bool, var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj();
	var_41_bool = var_36_object == 0; //@ne
	if(var_41_bool != 0) {
		var_35_bool = 0;
		return 4;
	}
	var_42_bool = 0;
	var_42_bool = 0;
	var_45_bool = IsFuncExist(var_36_object, "IsDead", (int)1);
	if(var_45_bool != 0) {
		var_46_bool = 0; var_47_object = Obj();
		var_36_object = var_47_object;
		func_2579(var_46_bool, var_47_object);
		if(var_46_bool != 0) {
			var_42_bool = 1;
		}
	}
	if(var_42_bool != 0) {
		var_35_bool = 0;
		return 4;
	}
	GetScene(var_39_object);
	var_50_bool = var_39_object == 0; //@ne
	if(var_50_bool != 0) {
		var_35_bool = 0;
		return 4;
	}
	@@var_36_object:GetScene(var_40_object);
	var_51_bool = var_39_object != var_40_object;
	if(var_51_bool != 0) {
		var_35_bool = 0;
		return 4;
	}
	var_35_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2073(var_322_bool)
{
	var_323_bool = 0;
	var_323_bool = 0;
	var_324_bool = 0;
	func_2045(var_323_bool, var_324_bool);
	if(var_324_bool != 0) {
		var_341_bool = 0;
		func_2089(var_322_bool, var_323_bool, var_341_bool);
		if(var_341_bool != 0) {
			var_323_bool = 1;
		}
	}
	if(var_323_bool != 0) {
		var_322_bool = 1;
		return 0;
	}
	var_322_bool = 0;
	return 0;
}


func_3613(var_72_object)
{
	var_73_object = Obj();
	var_72_object = var_73_object;
	func_3598(var_73_object);
	return 0;
}


func_3104()
{
	var_382_object = Obj(); var_383_object = Obj();
	GetScene(var_383_object);
	var_385_object = Obj();
	func_2989(var_385_object);
	BroadcastMessage("battle", var_385_object, var_383_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3619(var_21_int)
{
	var_21_int = 2;
	return 0;
}


func_3622(var_29_object)
{
	var_30_object = Obj();
	var_29_object = var_30_object;
	func_3693(var_30_object);
	return 0;
}


func_2089(var_0_object, var_4_bool, var_341_bool)
{
	var_342_object = Obj(); var_343_bool = 0; var_344_float = 0; var_345_cvector = CVector(0,0,0); var_346_cvector = CVector(0,0,0); var_347_object = Obj(); var_348_bool = 0; var_349_float = 0; var_350_cvector = CVector(0,0,0); var_351_cvector = CVector(0,0,0);
	GetScene(var_347_object);
	var_348_bool = 0;
	
Label_2093:
	var_352_cvector = CVector(0,0,0); var_353_object = Obj();
	var_353_object = var_0_object;
	func_2474(var_352_cvector, var_353_object);
	var_358_int = -var_352_cvector;
	FindDirLength(var_349_float, var_358_int, var_4_bool);
	var_359_bool = var_349_float < var_4_bool;
	if(var_359_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_350_cvector);
		GetPFPosition(var_351_cvector);
		WaitForAnimEnd();
		func_2177(var_351_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_348_bool = 1;
		var_363_bool = 0;
		func_2045(var_351_cvector, var_363_bool);
		var_364_bool = var_363_bool == 0; //@nz
		if(var_364_bool != 0) {
			goto Label_2131;
		}
		goto Label_2093;
	}
Label_2131:
	var_348_bool = var_341_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_3115()
{
	SetVariable("ood1Doberman2_1", (int)1);
	return 0;
}


func_3628()
{
	return 0;
}


func_3629(var_128_int)
{
	var_128_int = 0;
	return 0;
}


func_3632()
{
	return 0;
}


func_3121(var_122_bool)
{
	var_124_int = 0; var_125_string = "";
	func_3064(var_124_int, "ood1Doberman2_1");
	var_129_bool = var_124_int == (int)0;
	if(var_129_bool != 0) {
		var_122_bool = 1;
		return 0;
	}
	var_122_bool = 0;
	return 0;
}


func_3634(var_24_bool)
{
	var_24_bool = 0;
	return 0;
}


func_3637()
{
	return 0;
}


func_3639(var_31_bool, var_32_object)
{
	var_33_bool = 0; var_34_bool = 0;
	CanSee(var_34_bool, var_32_object);
	var_31_bool = 1;
	var_35_bool = var_34_bool;
	if(var_35_bool != 1) {
		var_36_float = 0; var_37_object = Obj();
		var_32_object = var_37_object;
		func_2481(var_36_float, var_37_object);
		var_45_bool = var_36_float <= (int)2250000;
		if(var_45_bool != 1) {
			var_31_bool = 0;
		}
	}
	return 2;
}


func_3064(var_124_int, var_125_string)
{
	var_126_int = 0; var_127_int = 0;
	GetVariable(var_125_string, var_127_int);
	var_127_int = var_124_int;
	return 2;
}


func_2620(var_31_bool, var_32_object)
{
	var_33_int = 0; var_34_int = 0;
	var_35_bool = 0; var_36_object = Obj();
	var_32_object = var_36_object;
	func_2584(var_35_bool, var_36_object);
	var_52_bool = var_35_bool == 0; //@nz
	if(var_52_bool != 0) {
		var_31_bool = 0;
		return 2;
	}
	var_53_bool = 0; var_54_object = Obj(); var_55_string = "";
	var_32_object = var_54_object;
	func_2494(var_53_bool, var_54_object, "noaccess");
	var_62_bool = var_53_bool == 0; //@nz
	if(var_62_bool != 0) {
		var_31_bool = 1;
		return 2;
	}
	@@var_32_object:GetProperty("noaccess", var_34_int);
	var_31_bool = var_34_int == (int)0;
	return 2;
}


func_3133(var_106_int)
{
	var_107_int = 0; var_108_int = 0;
	GetVariable("branch", var_108_int);
	var_111_bool = var_108_int == (int)0;
	if(var_111_bool != 0) {
		var_106_int = 1;
		return 2;
	EMIT "GOTO 0xc4c";
	}
	var_113_bool = var_108_int == (int)1;
	if(var_113_bool != 0) {
		var_106_int = 2;
		return 2;
	}
	var_106_int = 3;
	return 2;
}


func_3654(var_59_object)
{
	var_60_object = Obj();
	var_59_object = var_60_object;
	func_3580(var_60_object);
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_115_object, var_116_object)
{
	var_0_object = var_116_object;
	var_1_object = var_115_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_122_bool = 0; var_123_object = Obj();
		var_123_object = var_1_object;
		func_3121(var_123_object);
		if(var_122_bool != 0) {
			var_130_object = Obj(); var_131_object = Obj();
			var_130_object = var_1_object;
			var_131_object = var_0_object;
			func_3115();
			var_134_string = "";
			func_162(var_116_object, "Neutral");
			@@@var_0_object:SetMessage((int)532749);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533297, (int)34809, (int)34808);
			@@@var_0_object:AddReply((int)533299, (int)34811, (int)34810);
		} else {
				var_176_string = "";
				func_162(var_116_object, "Neutral");
				@@@var_0_object:SetMessage((int)532753);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)532754, (int)-1, (int)34228);
				@@@var_0_object:AddReply((int)532977, (int)-1, (int)34475);
				goto Label_132;
		}
	}
Label_132:
	var_158_bool = 0;
	func_3683(var_158_bool);
	if(var_158_bool != 0) {

	Label_136:
		lshWaitForAnimEnd();
		var_159_string = var_3_string;
		if(var_159_string != 0) {
		} else {
			var_160_string = "";
			var_160_string = var_2_object;
			func_2873(var_160_string);
			goto Label_136;
	}
		PlayAnimation("all", "idle");

	Label_151:
		WaitForAnimEnd();
		var_173_string = var_3_string;
		if(var_173_string != 0) {
			goto Label_161;
		}
		PlayAnimation("all", "idle");
		goto Label_151;

	}
	goto Label_161;
	
Label_161:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_3660(var_48_bool)
{
	var_48_bool = 0;
	return 0;
}


func_3150(var_157_int)
{
	var_158_int = 0; var_159_int = 0;
	GetVariable("branch", var_159_int);
	var_159_int = var_157_int;
	return 2;
}


func_3663()
{
	return 0;
}


func_3665(var_21_int)
{
	var_21_int = 0;
	return 0;
}


func_3069(var_477_float)
{
	var_478_object = Obj(); var_479_object = Obj();
	CreateFloatVector(var_479_object);
	@@var_479_object:add(var_477_float);
	var_481_bool = var_477_float < (int)0;
	if(var_481_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_479_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_595(var_43_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_44_string = "";
	var_43_string = var_44_string;
	func_2948(var_44_string);
	PlayAnimation("all", var_43_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_43_string);
	RemoveEnvelope();
	return 0;
}


func_3668()
{
	return 0;
}


func_2644(var_35_object)
{
	var_36_bool = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = ""; var_43_bool = 0; var_44_int = 0; var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_string = "";
	var_50_bool = var_35_object == 0; //@ne
	if(var_50_bool != 0) {
		return 14;
	}
	IsDead(var_43_bool);
	var_51_bool = var_43_bool;
	if(var_51_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_44_int);
	var_53_bool = var_44_int < (int)0;
	if(var_53_bool != 0) {
		return 14;
	}
	@@var_35_object:GetPosition(var_45_cvector);
	GetPosition(var_46_cvector);
	GetDirection(var_47_cvector);
	var_48_cvector = var_46_cvector - var_45_cvector;
	var_54_float = GetByIndex(var_48_cvector, 0);
	var_55_float = GetByIndex(var_47_cvector, 0);
	var_56_float = var_54_float * var_55_float;
	var_57_float = GetByIndex(var_48_cvector, 2);
	var_58_float = GetByIndex(var_47_cvector, 2);
	var_59_float = var_57_float * var_58_float;
	var_60_int = var_56_float + var_59_float;
	var_62_bool = var_60_int >= (int)0;
	if(var_62_bool != 0) {
		var_49_string = "fhit";
	} else {
		var_49_string = "bhit";
	}
	var_65_int = var_49_string + "1";
	var_67_int = var_49_string + "2";
	FadeSecondaryAnimation("hit_react", var_65_int, var_67_int, (int)-10);
	return 14;
	
}


func_2134(var_0_object, var_272_bool)
{
	var_273_bool = 0; var_274_bool = 0;
	var_277_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_277_bool != 0) {
		@@@var_0_object:IsAttacking(var_274_bool);
		var_274_bool = var_272_bool;
		return 2;
	}
	var_272_bool = 0;
	return 2;
}


func_3670(var_26_bool)
{
	var_26_bool = 0;
	return 0;
}


func_3156(var_35_object)
{
	var_36_int = 0;
	func_3150(var_36_int);
	var_41_bool = var_36_int == (int)1;
	if(var_41_bool != 0) {
		WorkWithCorpse(var_35_object);
	} else {
		Barter(var_35_object);
	}
	return 0;
	
}


func_3673()
{
	return 0;
}


func_3675(var_103_int)
{
	var_103_int = 518097;
	return 0;
}


func_3580(var_60_object)
{
	var_61_object = Obj();
	var_60_object = var_61_object;
	TaskCall(5);
	func_1246(var_62_object, var_61_object);
	TaskReturn();
	return 0;
}


func_3677(var_102_int)
{
	var_102_int = 518096;
	return 0;
}


func_3679(var_104_string)
{
	var_104_string = "ui/NPC_Citizen2.png";
	return 0;
}


func_3681(var_105_string)
{
	var_105_string = "ui/NPC_Citizen2_b.png";
	return 0;
}


func_2145(var_2_object, var_5_bool)
{
	var_389_float = 0; var_390_int = 0; var_391_float = 0; var_392_int = 0;
	var_393_bool = var_2_object == 0; //@nz
	if(var_393_bool != 0) {
		return 4;
	}
	var_394_bool = var_5_bool;
	if(var_394_bool != 0) {
		var_5_bool = var_5_bool + (int)-1;
		var_397_bool = var_5_bool > (int)0;
		if(var_397_bool != 0) {
			return 4;
		}
	}
	rand(var_391_float);
	var_398_float = 0;
	func_2195(var_398_float);
	var_399_bool = var_391_float < var_398_float;
	if(var_399_bool != 0) {
		irand(var_392_int, var_2_object);
		var_392_int = var_392_int + (int)1;
		var_402_int = "attack" + var_392_int;
		Speak(var_402_int);
		var_403_int = 0;
		func_2193(var_403_int);
		var_5_bool = var_403_int;
	}
	return 4;
}


func_3683(var_97_bool)
{
	var_97_bool = 0;
	return 0;
}


func_3169(var_115_int, var_116_int)
{
	var_126_int = 0; var_127_bool = 0; var_128_int = 0; var_129_bool = 0;
	var_130_bool = var_115_int > var_116_int;
	if(var_130_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_128_int = 0;
	var_132_bool = var_115_int != var_116_int;
	if(var_132_bool != 0) {
		var_133_int = var_116_int - var_115_int;
		irand(var_128_int, var_133_int);
	} else {
		var_142_bool = var_115_int == (int)0;
		if(var_142_bool == 0) goto Label_3187;
		return 4;
	}
Label_3187:
	var_128_int = var_128_int + var_115_int;
	var_135_bool = var_128_int == (int)0;
	if(var_135_bool != 0) {
		return 4;
	}
	var_136_int = 0; var_137_string = "";
	func_3369(var_136_int, "Money");
	AddItem(var_129_bool, var_136_int, (int)0, var_128_int);
	return 4;
	
}


func_3685()
{
	var_19_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	var_20_bool = 0;
	func_3269((bool)1);
	return 0;
}


func_3693(var_30_object)
{
	var_31_bool = 0; var_32_bool = 0;
	var_33_bool = GlobalVars[0];
	if(var_33_bool != 0) {
		IsOverrideActive(var_32_bool);
		var_34_bool = var_32_bool == 0; //@nz
		if(var_34_bool != 0) {
			var_35_object = Obj();
			var_30_object = var_35_object;
			func_3156(var_35_object);
		}
		return 2;
	EMIT "GOTO 0xe7e";
	}
	var_42_object = Obj();
	var_30_object = var_42_object;
	func_3744(var_42_object);
	return 2;
}


func_3711(var_63_bool)
{
	var_63_bool = 0;
	return 0;
}


func_3200(var_163_string)
{
	var_164_object = Obj(); var_165_int = 0; var_166_bool = 0; var_167_object = Obj(); var_168_int = 0; var_169_bool = 0;
	CreateInvItem(var_167_object);
	@@var_167_object:SetItemName(var_163_string);
	@@var_167_object:SetProperty("Organ", (int)1);
	@@var_167_object:GetItemID(var_168_int);
	AddItem(var_169_bool, var_167_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_3713(var_23_bool)
{
	var_23_bool = 1;
	return 0;
}


func_642()
{
	var_101_bool = 0;
	func_2781(var_101_bool);
	var_104_bool = var_101_bool == 0; //@nz
	if(var_104_bool != 0) {
		func_3628();
	}
	return 0;
}


func_2177(var_0_object)
{
	var_145_object = Obj();
	var_145_object = var_0_object;
	func_3095(var_145_object);
	return 0;
}


func_3716(var_101_object)
{
	var_102_bool = 0; var_103_object = Obj();
	var_101_object = var_103_object;
	func_2489(var_102_bool, var_103_object);
	if(var_102_bool != 0) {
		var_106_object = Obj();
		func_2989(var_106_object);
		ReportReputationChange(var_101_object, var_106_object, (float)-0.10000000149011612, (bool)1);
		var_111_bool = 0;
		var_111_bool = 1;
		func_3241();
	}
	func_3217();
	var_177_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_2688(var_22_object, var_23_int, var_24_float)
{
	var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_int = 0; var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_int = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_object = Obj(); var_36_int = 0; var_37_bool = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_int = 0; var_41_int = 0; var_42_cvector = CVector(0,0,0);
	var_43_bool = 0;
	var_43_bool = 0;
	var_44_bool = 0;
	var_44_bool = 0;
	var_45_object = var_22_object;
	if(var_45_object != 0) {
		var_47_bool = var_23_int != (int)4;
		if(var_47_bool != 0) {
			var_44_bool = 1;
		}
	}
	if(var_44_bool != 0) {
		var_49_bool = var_23_int != (int)5;
		if(var_49_bool != 0) {
			var_43_bool = 1;
		}
	}
	if(var_43_bool != 0) {
		var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0);
		var_52_cvector = CVector(0,0,0); var_53_object = Obj();
		var_22_object = var_53_object;
		func_2474(var_52_cvector, var_53_object);
		var_52_cvector = var_51_cvector;
		func_2995(var_50_cvector, var_51_cvector);
		var_50_cvector = var_34_cvector;
		CreateVectorVector(var_35_object);
		var_36_int = 1;

	Label_2717:
		var_64_int = "hit" + var_36_int;
		GetGeometryLocator(var_64_int, var_37_bool, var_38_cvector, var_39_cvector);
		var_65_bool = var_37_bool == 0; //@nz
		if(var_65_bool != 0) {
		} else {
			var_113_int = var_39_cvector | var_34_cvector;
			var_115_bool = var_113_int >= (float)0.7071067690849304;
			if(var_115_bool != 0) {
				@@var_35_object:add(var_38_cvector);
			}
			var_36_int = var_36_int + (int)1;
			goto Label_2717;
		}
		@@var_35_object:size(var_40_int);
		var_66_int = var_40_int;
		if(var_66_int != 0) {
			irand(var_41_int, var_40_int);
			@@var_35_object:get(var_42_cvector, var_41_int);
			var_67_object = Obj(); var_68_int = 0; var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0);
			var_22_object = var_67_object;
			var_23_int = var_68_int;
			var_24_float = var_69_float;
			var_42_cvector = var_70_cvector;
			var_71_cvector = -var_34_cvector;
			func_2756(var_69_float, var_70_cvector, var_71_cvector);
			return 18;
		}
		var_35_object = 0;
	}
	var_112_object = Obj();
	var_22_object = var_112_object;
	func_2644(var_112_object);
	return 18;
	
}


func_2182(var_486_int)
{
	var_486_int = 0;
	return 0;
}


func_1160()
{
	var_132_int = 0; var_133_int = 0; var_134_int = 0; var_135_int = 0; var_136_bool = 0; var_137_float = 0; var_138_bool = 0; var_139_int = 0; var_140_int = 0; var_141_int = 0; var_142_int = 0; var_143_bool = 0; var_144_float = 0; var_145_bool = 0;
	WaitForAnimEnd();
	var_146_bool = 0;
	func_2781(var_146_bool);
	var_147_bool = var_146_bool == 0; //@nz
	if(var_147_bool != 0) {
		return 14;
	}
	func_3554((int)0);
	var_148_int = var_139_int;
	var_140_int = 0;
	
Label_1174:
	var_161_bool = 0;
	var_161_bool = 0;
	var_163_bool = var_140_int < (int)5;
	if(var_163_bool != 0) {
		var_164_bool = 0;
		func_2781(var_164_bool);
		if(var_164_bool != 0) {
			var_161_bool = 1;
		}
	}
	if(var_161_bool != 0) {
		irand(var_141_int, (int)3);
		var_167_bool = var_141_int == (int)0;
		if(var_167_bool != 0) {
			var_168_int = var_139_int;
			if(var_168_int == 0) goto Label_1207;
			irand(var_142_int, var_139_int);
			var_170_string = ""; var_171_int = 0;
			var_142_int = var_171_int;
			func_3547(var_170_string, var_171_int);
			PlayAnimation("all", var_170_string);
			WaitForAnimEnd(var_143_bool);
			var_172_bool = var_143_bool == 0; //@nz
			if(var_172_bool != 0) {
			} else {
		} else {
				var_177_bool = var_141_int == (int)1;
				if(var_177_bool != 0) {
					rand(var_144_float, (int)4);
					var_180_int = var_144_float + (int)1;
					Sleep(var_180_int, var_145_bool);
					var_181_bool = var_145_bool == 0; //@nz
					if(var_181_bool != 0) {
						goto Label_1236;
					}
					goto Label_1225;
				}
				var_182_int = var_140_int;
				if(var_182_int == 0) goto Label_1225;
				goto Label_1236;
		}
		Label_1225:
			var_173_bool = 0;
			func_1239(var_173_bool);
			var_174_bool = var_173_bool == 0; //@nz
			if(var_174_bool != 0) {
				goto Label_1236;
			}
			ResetAAS();
			var_140_int = var_140_int + (int)1;
			goto Label_1174;

		}
	}
Label_1236:
	ResetAAS();
	return 14;
	
}


func_2184()
{
	var_278_string = "";
	func_2948("attack_stay");
	return 0;
}


func_2189()
{
	return 0;
}


func_2191(var_511_bool)
{
	var_511_bool = 1;
	return 0;
}


func_2193(var_403_int)
{
	var_403_int = 1;
	return 0;
}


func_3217()
{
	var_157_int = 0;
	func_3150(var_157_int);
	var_162_bool = var_157_int != (int)1;
	if(var_162_bool != 0) {
		return 0;
	}
	var_163_string = "";
	func_3200("liver");
	var_174_string = "";
	func_3200("kidney");
	var_175_string = "";
	func_3200("heart");
	var_176_string = "";
	func_3200("blood");
	return 0;
}


func_2195(var_398_float)
{
	var_398_float = 0.5;
	return 0;
}


func_2204(var_2_object, var_152_bool, var_153_object, var_154_float, var_155_float, var_156_bool, var_157_bool)
{
	var_161_bool = 0; var_162_bool = 0; var_163_bool = 0; var_164_bool = 0;
	var_165_object = Obj();
	var_153_object = var_165_object;
	func_3095(var_165_object);
	SetTimer((int)1, (int)5);
	CanSee(var_163_bool, var_153_object);
	var_168_bool = var_163_bool;
	if(var_168_bool != 0) {
		var_2_object = true;
		var_169_object = Obj();
		var_153_object = var_169_object;
		func_2904(var_169_object);
	} else {
		var_2_object = false;
	}
	var_176_bool = 0; var_177_object = Obj();
	var_153_object = var_177_object;
	func_2489(var_176_bool, var_177_object);
	if(var_176_bool != 0) {
		var_180_object = Obj();
		func_2989(var_180_object);
		SendPlayerEnemy(var_153_object, var_180_object);
	}
	var_181_bool = 0; var_182_object = Obj(); var_183_float = 0; var_184_float = 0; var_185_bool = 0; var_186_bool = 0;
	var_153_object = var_182_object;
	var_154_float = var_183_float;
	var_155_float = var_184_float;
	var_156_bool = var_185_bool;
	var_157_bool = var_186_bool;
	func_2309(var_163_bool, var_164_bool, var_181_bool, var_182_object, var_183_float, var_184_float, var_185_bool, var_186_bool);
	var_181_bool = var_164_bool;
	var_232_object = var_2_object;
	if(var_232_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_164_bool = var_152_bool;
	return 4;
	
}


func_3744(var_42_object)
{
	var_43_int = 0; var_44_object = Obj();
	var_42_object = var_44_object;
	TaskCall(0);
	func_0(var_45_object, var_43_int, var_44_object);
	TaskReturn();
	return 0;
}


func_162(var_2_object, var_134_string)
{
	var_135_bool = 0;
	func_3683(var_135_bool);
	var_136_bool = var_135_bool == 0; //@nz
	if(var_136_bool != 0) {
		return 0;
	}
	var_137_bool = var_134_string == var_2_object;
	if(var_137_bool != 0) {
		return 0;
	}
	var_138_string = ""; var_139_bool = 0;
	var_134_string = var_138_string;
	var_141_bool = var_134_string == "";
	if(var_141_bool != 0) {
		var_139_bool = 0;
	} else {
		var_139_bool = 1;
	}
	func_2889(var_138_string, var_139_bool);
	var_2_object = var_134_string;
	return 0;
	
}


func_3241()
{
	var_112_bool = 0; var_113_bool = 0;
	ClearSubContainer((int)0);
	var_115_int = 0; var_116_int = 0;
	var_118_int = 0;
	func_3086(var_118_int);
	var_125_float = var_118_int * (int)10;
	var_116_int = (int)10 + var_125_float;
	func_3169((int)0, var_116_int);
	var_143_string = ""; var_144_int = 0; var_145_int = 0;
	func_2922("hook", (int)1, (int)4);
	var_154_string = ""; var_155_int = 0; var_156_int = 0;
	func_2922("watch", (int)1, (int)10);
	return 2;
}


func_2756(var_24_object, var_27_cvector, var_28_cvector)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj();
	GetScene(var_31_object);
	AddActorByType(var_32_object, "scripted", var_31_object, var_27_cvector, var_28_cvector, "blood_dir.xml");
	var_35_object = Obj();
	var_24_object = var_35_object;
	func_2644(var_35_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_3269(var_20_bool)
{
	var_21_int = 0; var_22_bool = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0;
	ClearSubContainer((int)0);
	func_3086((int)0);
	var_28_int = var_26_int;
	var_34_bool = var_20_bool;
	if(var_34_bool != 0) {
		var_35_string = ""; var_36_int = 0; var_37_int = 0; var_38_int = 0;
		func_2933("alpha_pills", (int)1, (int)2, (int)4);
		var_51_string = ""; var_52_int = 0; var_53_int = 0; var_54_int = 0;
		func_2933("meradorm", (int)2, (int)3, (int)3);
		var_56_bool = var_26_int >= (int)3;
		if(var_56_bool != 0) {
			var_57_string = ""; var_58_int = 0; var_59_int = 0;
			func_2922("beta_pills", (int)1, (int)4);
		}
		var_67_bool = var_26_int >= (int)8;
		if(var_67_bool != 0) {
			var_68_string = ""; var_69_int = 0; var_70_int = 0; var_71_int = 0;
			func_2933("monomicin", (int)1, (int)2, (int)2);
		} else {
			var_73_bool = var_26_int >= (int)4;
			if(var_73_bool == 0) goto Label_3322;
			var_74_string = ""; var_75_int = 0; var_76_int = 0;
			func_2922("monomicin", (int)1, (int)2);
	}
		var_77_string = ""; var_78_int = 0; var_79_int = 0;
		func_2922("lockpick", (int)1, (int)4);
		var_80_string = ""; var_81_int = 0; var_82_int = 0;
		func_2922("rifle_ammo", (int)1, (int)2);
		var_83_string = ""; var_84_int = 0; var_85_int = 0;
		func_2922("revolver_ammo", (int)1, (int)2);
		var_86_string = ""; var_87_int = 0; var_88_int = 0; var_89_int = 0;
		func_2933("samopal_ammo", (int)1, (int)2, (int)2);
		var_91_bool = var_26_int >= (int)8;
		if(var_91_bool != 0) {
			var_92_string = ""; var_93_int = 0; var_94_int = 0; var_95_int = 0;
			func_2933("monomicin", (int)1, (int)2, (int)2);
			goto Label_3368;
		}
		var_97_bool = var_26_int >= (int)4;
		if(var_97_bool == 0) goto Label_3368;
		var_98_string = ""; var_99_int = 0; var_100_int = 0;
		func_2922("monomicin", (int)1, (int)2);
	}
Label_3322:
	goto Label_3368;
	
Label_3368:
	return 6;
	
}


func_2770(var_94_object)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0);
	@@var_94_object:GetPosition(var_98_cvector);
	GetPosition(var_99_cvector);
	var_100_cvector = var_98_cvector - var_99_cvector;
	var_101_float = GetByIndex(var_100_cvector, 0);
	var_102_float = GetByIndex(var_100_cvector, 2);
	RotateAsync(var_101_float, var_102_float);
	return 6;
}


func_1239(var_173_bool)
{
	var_173_bool = 1;
	return 0;
}


func_1241()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_2267(var_2_object)
{
	KillTimer((int)1);
	var_20_object = var_2_object;
	if(var_20_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_2433(var_18_object);
	return 0;
}


func_2781(var_101_bool)
{
	var_102_bool = 0; var_103_bool = 0;
	IsLoaded(var_103_bool);
	var_103_bool = var_101_bool;
	return 2;
}


func_1246(var_0_object, var_61_object)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_bool = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0;
	var_0_object = var_61_object;
	func_1297(var_68_bool);
	GetDirection(var_66_cvector);
	var_76_cvector = CVector(0,0,0); var_77_object = Obj();
	var_77_object = var_0_object;
	func_2474(var_76_cvector, var_77_object);
	var_76_cvector = var_67_cvector;
	var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0);
	var_66_cvector = var_83_cvector;
	var_67_cvector = var_84_cvector;
	func_3047(var_82_float, var_83_cvector, var_84_cvector);
	var_107_bool = var_82_float < (int)0;
	if(var_107_bool != 0) {
		var_108_object = Obj();
		var_108_object = var_0_object;
		func_2770(var_108_object);
		var_68_bool = 1;
	} else {
		Sleep((float)1.5, var_68_bool);
	}
	var_117_bool = var_68_bool;
	if(var_117_bool != 0) {
		var_118_object = Obj();
		var_118_object = var_0_object;
		func_2770(var_118_object);
		SetTimer((int)111, (float)0.5);
		Sleep((float)5.0);
		KillTimer((int)111);
	}
	StopAsync();
	UnlookAsync("head");
	return 6;
	
}


func_2786(var_54_bool, var_55_object, var_56_float)
{
	var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_bool = 0; var_65_bool = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_bool = 0;
	@@var_55_object:GetPosition(var_67_cvector);
	@@var_55_object:GetEyesHeight(var_66_float);
	var_75_float = GetByIndex(var_67_cvector, 1);
	var_75_float = var_75_float + var_66_float;
	SetByIndex(var_67_cvector, 1) = var_75_float;
	GetPosition(var_68_cvector);
	GetEyesHeight(var_66_float);
	var_76_float = GetByIndex(var_68_cvector, 1);
	var_76_float = var_76_float + var_66_float;
	SetByIndex(var_68_cvector, 1) = var_76_float;
	var_69_cvector = var_67_cvector - var_68_cvector;
	var_77_float = GetByIndex(var_69_cvector, 1);
	SetByIndex(var_69_cvector, 1) = (float)0;
	var_78_int = var_69_cvector | var_69_cvector;
	var_79_float = sqrt(var_78_int);
	var_69_cvector = var_69_cvector / var_79_float;
	var_70_cvector = -var_69_cvector;
	var_80_float = var_69_cvector * var_56_float;
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0);
	var_82_cvector = var_70_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2995(var_81_cvector, var_82_cvector);
	var_90_float = var_81_cvector * (int)25;
	var_91_int = var_80_float + var_90_float;
	var_71_cvector = var_91_int - CVector(0.0, 10.0, 0.0);
	var_72_cvector = var_68_cvector + var_71_cvector;
	IsOverrideActive(var_73_bool);
	var_93_bool = var_73_bool;
	if(var_93_bool != 0) {
		var_54_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_72_cvector, var_70_cvector, (bool)1);
	var_95_float = GetByIndex(var_71_cvector, 0);
	var_96_float = GetByIndex(var_71_cvector, 2);
	Rotate(var_95_float, var_96_float);
	var_97_bool = 0;
	func_3683(var_97_bool);
	if(var_97_bool != 0) {
	} else {
		HasAnimationTrack(var_74_bool, "head");
		var_99_bool = var_74_bool;
		if(var_99_bool == 0) goto Label_2849;
		LookAsyncCamera("head");
	}
Label_2849:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_54_bool = 1;
	return 18;
	
}


func_1764(var_1_object, var_2_object, var_4_bool)
{
	var_106_bool = 0; var_107_bool = 0; var_108_cvector = CVector(0,0,0); var_109_bool = 0; var_110_bool = 0; var_111_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_1766:
	var_115_int = var_1_object + (int)1;
	var_116_int = "attack_begin" + var_115_int;
	HasAnimation(var_109_bool, "all", var_116_int);
	var_117_bool = var_109_bool == 0; //@nz
	if(var_117_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_1766;
	}
	var_2_object = 0;
	
Label_1780:
	var_120_int = var_2_object + (int)1;
	var_121_int = "attack" + var_120_int;
	IsExisting3DSound(var_110_bool, var_121_int);
	var_122_bool = var_110_bool == 0; //@nz
	if(var_122_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_1780;

	}
	GetAnimationOffset(var_111_cvector, "all", "bjump");
	var_125_float = GetByIndex(var_111_cvector, 2);
	var_4_bool = -var_125_float;
	return 6;
	
}


func_2309(var_0_object, var_1_object, var_181_bool, var_182_object, var_183_float, var_184_float, var_185_bool, var_186_bool)
{
	var_187_bool = 0; var_188_bool = 0; var_189_object = Obj(); var_190_cvector = CVector(0,0,0); var_191_cvector = CVector(0,0,0); var_192_cvector = CVector(0,0,0); var_193_float = 0; var_194_object = Obj(); var_195_bool = 0; var_196_bool = 0; var_197_object = Obj(); var_198_cvector = CVector(0,0,0); var_199_cvector = CVector(0,0,0); var_200_cvector = CVector(0,0,0); var_201_float = 0; var_202_object = Obj();
	var_0_object = false;
	var_1_object = var_182_object;
	var_186_bool = var_196_bool;
	
Label_2313:
	var_203_bool = 0; var_204_object = Obj();
	var_182_object = var_204_object;
	func_2449(var_203_bool, var_204_object);
	var_207_bool = var_203_bool == 0; //@nz
	if(var_207_bool != 0) {
		var_181_bool = 0;
		return 16;
	}
	@@var_182_object:GetPosition(var_198_cvector);
	GetPosition(var_199_cvector);
	var_200_cvector = var_198_cvector - var_199_cvector;
	var_201_float = var_200_cvector | var_200_cvector;
	var_208_bool = 0;
	var_208_bool = 0;
	var_210_bool = var_184_float > (int)0;
	if(var_210_bool != 0) {
		var_211_float = var_184_float * var_184_float;
		var_212_bool = var_201_float > var_211_float;
		if(var_212_bool != 0) {
			var_208_bool = 1;
		}
	}
	if(var_208_bool != 0) {
		Stop();
		var_181_bool = 0;
		return 16;
	}
	var_213_float = var_183_float * var_183_float;
	var_214_bool = var_201_float > var_213_float;
	if(var_214_bool != 0) {
		@@var_182_object:GetPFPosition(var_198_cvector);
		FindPathTo(var_202_object, var_198_cvector);
		var_215_bool = var_202_object != 0; //@nn
		if(var_215_bool != 0) {
			var_202_object = var_197_object;
			var_202_object = 0;
		}
		var_216_bool = var_197_object != 0; //@nn
		if(var_216_bool != 0) {
			var_217_bool = var_196_bool;
			if(var_217_bool == 0) goto Label_2362;
			var_196_bool = 0;
			RotatePath(var_197_object, var_195_bool);
			var_218_bool = var_195_bool == 0; //@nz
			if(var_218_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_221_string = "";
				func_2456(var_221_string);
				var_222_string = "";
				func_2458(var_222_string);
				FollowPath(var_197_object, var_185_bool, var_195_bool, var_221_string, var_222_string);
				var_223_bool = var_195_bool == 0; //@nz
				if(var_223_bool != 0) {
					var_224_object = var_0_object;
					if(var_224_object != 0) {
						var_197_object = 0;
						goto Label_2409;
					EMIT "GOTO 0x94e";
					}
				} else {
					var_197_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_195_bool);
					var_227_bool = var_195_bool == 0; //@nz
					if(var_227_bool != 0) {
						var_228_object = var_0_object;
						if(var_228_object != 0) {
							var_197_object = 0;
							goto Label_2409;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_2409;
	}
			var_202_object = 0;
			goto Label_2407;

		Label_2407:
			var_197_object = 0;

		}
		goto Label_2313;
	}
Label_2409:
	var_181_bool = !var_0_object;
	return 16;
	
}


func_1799(var_0_object, var_407_float, var_408_int)
{
	var_409_object = Obj(); var_410_float = 0; var_411_float = 0; var_412_object = Obj(); var_413_float = 0; var_414_float = 0;
	var_416_float = var_407_float * (float)0.8999999761581421;
	GetVictim(var_416_float, var_412_object);
	ReportAttack(var_0_object);
	var_417_bool = var_412_object == var_0_object;
	if(var_417_bool != 0) {
		var_418_float = 0; var_419_object = Obj(); var_420_int = 0;
		var_412_object = var_419_object;
		var_408_int = var_420_int;
		func_1529(var_420_int);
		var_418_float = var_413_float;
		var_421_float = 0; var_422_object = Obj(); var_423_float = 0; var_424_int = 0;
		var_412_object = var_422_object;
		var_413_float = var_423_float;
		var_425_int = 0; var_426_object = Obj(); var_427_int = 0;
		var_412_object = var_426_object;
		var_408_int = var_427_int;
		func_1532(var_427_int);
		var_425_int = var_424_int;
		func_2506(var_421_float, var_422_object, var_423_float, var_424_int);
		var_421_float = var_414_float;
		var_486_int = 0;
		func_2182(var_486_int);
		ReportHit(var_0_object, var_486_int, var_414_float, var_413_float);
		var_487_object = Obj(); var_488_float = 0;
		var_412_object = var_487_object;
		var_414_float = var_488_float;
		func_2189();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_1297(var_0_object)
{
	var_69_object = Obj();
	var_69_object = var_0_object;
	func_2904(var_69_object);
	return 0;
}


func_2855()
{
	var_186_bool = 0; var_187_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_189_bool = 0;
	func_3683(var_189_bool);
	if(var_189_bool != 0) {
	} else {
		HasAnimationTrack(var_187_bool, "head");
		var_191_bool = var_187_bool;
		if(var_191_bool == 0) goto Label_2872;
		UnlookAsync("head");
	}
Label_2872:
	return 2;
	
}


func_3369(var_136_int, var_137_string)
{
	var_138_int = 0; var_139_int = 0;
	GetInvItemByName(var_139_int, var_137_string);
	var_139_int = var_136_int;
	return 2;
}


func_1838(var_0_object, var_1_object, var_370_bool, var_371_float)
{
	var_372_int = 0; var_373_bool = 0; var_374_int = 0; var_375_string = ""; var_376_int = 0; var_377_bool = 0; var_378_int = 0; var_379_string = "";
	func_2177(var_379_string);
	irand(var_376_int, var_1_object);
	var_376_int = var_376_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_3104();
	var_388_int = "attack_begin" + var_376_int;
	PlayAnimation("all", var_388_int);
	WaitForAnimEnd();
	func_2145(var_378_int, var_379_string);
	var_404_bool = 0; var_405_object = Obj();
	var_405_object = var_0_object;
	func_2620(var_404_bool, var_405_object);
	var_406_bool = var_404_bool == 0; //@nz
	if(var_406_bool != 0) {
		StopAsync();
		var_370_bool = 0;
		return 8;
	}
	var_407_float = 0; var_408_int = 0;
	var_371_float = var_407_float;
	var_376_int = var_408_int;
	func_1799(var_379_string, var_407_float, var_408_int);
	var_491_int = "attack_middle" + var_376_int;
	HasAnimation(var_377_bool, "all", var_491_int);
	var_492_bool = var_377_bool;
	if(var_492_bool != 0) {
		func_3104();
		var_495_int = "attack_middle" + var_376_int;
		PlayAnimation("all", var_495_int);
		WaitForAnimEnd();
		func_2177(var_379_string);
		var_496_bool = 0; var_497_object = Obj();
		var_497_object = var_0_object;
		func_2620(var_496_bool, var_497_object);
		var_498_bool = var_496_bool == 0; //@nz
		if(var_498_bool != 0) {
			StopAsync();
			var_370_bool = 0;
			return 8;
		}
		var_499_float = 0; var_500_int = 0;
		var_371_float = var_499_float;
		var_376_int = var_500_int;
		func_1799(var_379_string, var_499_float, var_500_int);
		var_378_int = 1;

	Label_1915:
		var_502_int = "attack_middle" + var_376_int;
		var_504_int = var_502_int + "_";
		var_379_string = var_504_int + var_378_int;
		HasAnimation(var_377_bool, "all", var_379_string);
		var_506_bool = var_377_bool == 0; //@nz
		if(var_506_bool != 0) {
		} else {
			func_3104();
			PlayAnimation("all", var_379_string);
			WaitForAnimEnd();
			func_2177(var_379_string);
			var_522_bool = 0; var_523_object = Obj();
			var_523_object = var_0_object;
			func_2620(var_522_bool, var_523_object);
			var_524_bool = var_522_bool == 0; //@nz
			if(var_524_bool != 0) {
				StopAsync();
				var_370_bool = 0;
				var_525_float = 0; var_526_int = 0;
				var_371_float = var_525_float;
				var_376_int = var_526_int;
				func_1799(var_379_string, var_525_float, var_526_int);
				var_378_int = var_378_int + (int)1;
				goto Label_1915;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_510_int = "attack_end" + var_376_int;
	PlayAnimation("all", var_510_int);
	var_511_bool = 0;
	func_2191(var_511_bool);
	if(var_511_bool != 0) {
		var_512_bool = 0; var_513_float = 0;
		func_1975(var_512_bool, (float)0.75);
		StopAsync();
	}
	var_370_bool = 1;
	return 8;
	
}


func_3374(var_19_object)
{
	var_20_object = Obj();
	var_19_object = var_20_object;
	TaskCall(2);
	func_471(var_20_object);
	TaskReturn();
	return 0;
}


func_2873(var_160_string)
{
	var_161_bool = 0; var_162_float = 0; var_163_float = 0; var_164_bool = 0; var_165_float = 0; var_166_float = 0;
	lshHasAnimation(var_164_bool, var_160_string);
	var_167_bool = var_164_bool;
	if(var_167_bool != 0) {
		lshGetAnimTimes(var_160_string, var_165_float, var_166_float);
		lshPlayAnimation(var_165_float, var_166_float, (bool)0);
	} else {
		var_170_int = "Can't find lsh animation : " + var_160_string;
		Trace(var_170_int);
	}
	return 6;
	
}


func_838(var_2_object)
{
	KillTimer((int)110);
	var_2_object = false;
	func_974(var_17_object, var_18_bool);
	return 0;
}


func_2889(var_138_string, var_139_bool)
{
	var_142_bool = 0; var_143_float = 0; var_144_float = 0; var_145_bool = 0; var_146_float = 0; var_147_float = 0;
	lshHasAnimation(var_145_bool, var_138_string);
	var_148_bool = var_145_bool;
	if(var_148_bool != 0) {
		lshGetAnimTimes(var_138_string, var_146_float, var_147_float);
		lshPlayAnimation(var_146_float, var_147_float, var_139_bool);
	} else {
		var_150_int = "Can't find lsh animation : " + var_138_string;
		Trace(var_150_int);
	}
	return 6;
	
}


func_846(var_2_object)
{
	KillTimer((int)110);
	var_2_object = false;
	func_981(var_22_bool, var_23_int);
	return 0;
}


func_2904(var_22_object)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_cvector = CVector(0,0,0);
	@@var_22_object:GetEyesHeight(var_25_float);
	var_26_cvector = CVector(0.0, 0.0, 0.0);
	var_27_float = GetByIndex(var_26_cvector, 1);
	var_25_float = var_27_float;
	SetByIndex(var_26_cvector, 1) = var_27_float;
	LookAsync(var_22_object, "head", var_26_cvector);
	return 4;
}


func_3419(var_22_bool, var_23_object, var_24_string)
{
	var_26_bool = var_24_string == "unholster";
	if(var_26_bool != 0) {
		var_27_bool = 0; var_28_object = Obj();
		var_23_object = var_28_object;
		func_3634(var_28_object);
		var_27_bool = var_22_bool;
		return 0;
	EMIT "GOTO 0xd79";
	}
	var_30_bool = var_24_string == "player_shot";
	if(var_30_bool != 0) {
		var_31_bool = 0; var_32_object = Obj();
		var_23_object = var_32_object;
		func_3639(var_31_bool, var_32_object);
		var_31_bool = var_22_bool;
		return 0;
	EMIT "GOTO 0xd79";
	}
	var_47_bool = var_24_string == "battle";
	if(var_47_bool != 0) {
		var_48_bool = 0; var_49_object = Obj();
		var_23_object = var_49_object;
		func_3660(var_49_object);
		var_48_bool = var_22_bool;
		return 0;
	}
	var_22_bool = 0;
	return 0;
}


func_863(var_2_object, var_19_object)
{
	var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_int = 0;
	var_24_bool = 0; var_25_object = Obj();
	var_19_object = var_25_object;
	func_2620(var_24_bool, var_25_object);
	var_58_bool = var_24_bool == 0; //@nz
	if(var_58_bool != 0) {
		return 4;
	}
	var_59_object = var_2_object;
	if(var_59_object != 0) {
		return 4;
	}
	IsPlayerActor(var_19_object, var_22_bool);
	var_60_bool = var_22_bool == 0; //@nz
	if(var_60_bool != 0) {
		return 4;
	}
	var_61_int = 0; var_62_object = Obj();
	var_19_object = var_62_object;
	func_3571(var_62_object);
	var_61_int = var_23_int;
	var_65_bool = var_23_int > (int)0;
	if(var_65_bool != 0) {
		var_67_bool = var_23_int > (int)1;
		if(var_67_bool != 0) {
			func_846(var_23_int);
		}
		var_69_object = Obj();
		var_19_object = var_69_object;
		func_3580(var_69_object);
		var_2_object = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_2915()
{
	var_21_bool = 0;
	func_3683(var_21_bool);
	if(var_21_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2922(var_57_string, var_58_int, var_59_int)
{
	var_60_bool = 0; var_61_bool = 0;
	var_62_bool = 0; var_63_int = 0; var_64_int = 0;
	var_58_int = var_63_int;
	var_59_int = var_64_int;
	func_3023(var_62_bool, var_63_int, var_64_int);
	if(var_62_bool != 0) {
		AddItem(var_61_bool, var_57_string, (int)0);
	}
	return 2;
}


func_2411(var_0_object, var_1_object, var_26_int)
{
	var_28_bool = var_26_int != (int)0;
	if(var_28_bool != 0) {
		return 0;
	}
	var_29_bool = 0; var_30_object = Obj();
	var_30_object = var_1_object;
	func_2449(var_29_bool, var_30_object);
	var_65_bool = var_29_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2933(var_35_string, var_36_int, var_37_int, var_38_int)
{
	var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_bool = 0;
	var_43_bool = 0; var_44_int = 0; var_45_int = 0;
	var_36_int = var_44_int;
	var_37_int = var_45_int;
	func_3023(var_43_bool, var_44_int, var_45_int);
	if(var_43_bool != 0) {
		irand(var_41_int, var_38_int);
		var_50_int = var_41_int + (int)1;
		AddItem(var_42_bool, var_35_string, (int)0, var_50_int);
	}
	return 4;
}


func_3451(var_52_object, var_53_string)
{
	var_55_bool = var_53_string == "unholster";
	if(var_55_bool != 0) {
		var_52_object = Obj();
		func_3637();
	} else {
		var_58_bool = var_53_string == "player_shot";
		if(var_58_bool != 0) {
			var_59_object = Obj();
			var_52_object = var_59_object;
			func_3654(var_59_object);
			goto Label_3475;
		}
		var_126_bool = var_53_string == "battle";
		if(var_126_bool == 0) goto Label_3475;
		var_52_object = Obj();
		func_3663();
	}
Label_3475:
	return 0;
	
}


func_2433(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2948(var_44_string)
{
	var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_int = 0; var_57_bool = 0; var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0);
	IsExisting3DSound(var_53_bool, var_44_string);
	var_61_bool = var_53_bool == 0; //@nz
	if(var_61_bool != 0) {
		var_54_int = 0;

	Label_2954:
		var_63_int = var_54_int + (int)1;
		var_64_int = var_44_string + var_63_int;
		IsExisting3DSound(var_55_bool, var_64_int);
		var_65_bool = var_55_bool == 0; //@nz
		if(var_65_bool != 0) {
		} else {
			var_54_int = var_54_int + (int)1;
			goto Label_2954;
		}
		var_66_bool = var_54_int == 0; //@nz
		if(var_66_bool != 0) {
			return 16;
		}
		irand(var_56_int, var_54_int);
		var_68_int = var_56_int + (int)1;
		var_44_string = var_44_string + var_68_int;
	}
	Is3DSoundLoaded(var_57_bool, var_44_string);
	var_69_bool = var_57_bool;
	if(var_69_bool != 0) {
		GetEyesHeight(var_58_float);
		GetDirection(var_59_cvector);
		var_60_cvector = var_59_cvector * (int)50;
		var_71_float = GetByIndex(var_60_cvector, 1);
		var_71_float = var_71_float + var_58_float;
		SetByIndex(var_60_cvector, 1) = var_71_float;
		PlayGlobalSound(var_44_string, var_60_cvector);
	}
	return 16;
	
}


func_903(var_0_object, var_1_object)
{
	var_105_float = 0; var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_bool = 0; var_109_object = Obj(); var_110_bool = 0; var_111_float = 0; var_112_cvector = CVector(0,0,0); var_113_cvector = CVector(0,0,0); var_114_bool = 0; var_115_object = Obj(); var_116_bool = 0;
	var_0_object = false;
	var_1_object = false;
	rand(var_111_float, (float)0.5);
	Sleep(var_111_float);
	
Label_911:
	var_118_bool = var_0_object == 0; //@nz
	if(var_118_bool != 0) {
		var_119_bool = var_1_object == 0; //@nz
		if(var_119_bool != 0) {

		Label_915:
			GetPosition(var_113_cvector);
			var_120_float = 0;
			func_962(var_120_float);
			GetRandomPFPointInCircle(var_112_cvector, var_113_cvector, var_120_float, var_114_bool);
			var_123_bool = var_114_bool;
			if(var_123_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_915;
		}
				var_1_object = false;
	}
			return 12;
	}
	goto Label_931;
	
Label_931:
	var_124_object = Obj(); var_125_cvector = CVector(0,0,0);
	var_112_cvector = var_125_cvector;
	func_990(var_124_object, var_125_cvector);
	var_124_object = var_115_object;
	var_128_bool = var_115_object != 0; //@nn
	if(var_128_bool != 0) {
		RotatePath(var_115_object, var_116_bool);
		var_129_bool = var_116_bool;
		if(var_129_bool != 0) {
			var_130_bool = 0;
			func_988(var_130_bool);
			FollowPath(var_115_object, var_130_bool, var_116_bool);
			var_115_object = 0;
			var_131_bool = var_116_bool;
			if(var_131_bool != 0) {
				TaskCall(4);
				func_1160();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_115_object = 0;
	goto Label_911;
	
}


func_2449(var_29_bool, var_30_object)
{
	var_31_bool = 0; var_32_object = Obj();
	var_30_object = var_32_object;
	func_2620(var_31_bool, var_32_object);
	var_31_bool = var_29_bool;
	return 0;
}


func_3476(var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0;
	var_23_bool = 0;
	var_23_bool = 0;
	var_24_bool = 0; var_25_object = Obj();
	var_20_object = var_25_object;
	func_3634(var_25_object);
	if(var_24_bool != 0) {
		var_26_bool = 0; var_27_object = Obj();
		var_20_object = var_27_object;
		func_2489(var_26_bool, var_27_object);
		if(var_26_bool != 0) {
			var_23_bool = 1;
		}
	}
	if(var_23_bool != 0) {
		@@var_20_object:IsWeaponHolstered(var_22_bool);
		var_30_bool = var_22_bool == 0; //@nz
		if(var_30_bool != 0) {
			var_19_bool = 1;
			return 2;
		}
	}
	var_19_bool = 0;
	return 2;
}


func_2456(var_221_string)
{
	var_221_string = "walk";
	return 0;
}


func_2458(var_222_string)
{
	var_222_string = "run";
	return 0;
}


func_2460(var_449_string, var_450_int)
{
	var_452_bool = var_450_int == (int)2;
	if(var_452_bool != 0) {
		var_449_string = "fire";
		return 0;
	EMIT "GOTO 0x9a8";
	}
	var_454_bool = var_450_int == (int)1;
	if(var_454_bool != 0) {
		var_449_string = "bullet";
		return 0;
	}
	var_449_string = "phys";
	return 0;
}


func_1445()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_2474(var_52_cvector, var_53_object)
{
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0);
	GetPosition(var_56_cvector);
	@@var_53_object:GetPosition(var_57_cvector);
	var_52_cvector = var_57_cvector - var_56_cvector;
	return 4;
}


func_3499(var_33_object)
{
	var_33_object = Obj();
	func_3637();
	return 0;
}


func_2989(var_106_object)
{
	var_107_object = Obj(); var_108_object = Obj();
	self(var_108_object);
	var_108_object = var_106_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3505(var_21_object)
{
	var_22_bool = 0; var_23_object = Obj();
	var_21_object = var_23_object;
	func_2489(var_22_bool, var_23_object);
	if(var_22_bool != 0) {
		var_26_object = Obj();
		func_2989(var_26_object);
		ReportReputationChange(var_21_object, var_26_object, (float)-0.05000000074505806);
	}
	return 0;
}


func_2481(var_36_float, var_37_object)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	GetPosition(var_41_cvector);
	@@var_37_object:GetPosition(var_42_cvector);
	var_43_cvector = var_42_cvector - var_41_cvector;
	var_36_float = var_43_cvector | var_43_cvector;
	return 6;
}


func_2995(var_50_cvector, var_51_cvector)
{
	var_58_float = 0; var_59_float = 0;
	var_60_int = var_51_cvector | var_51_cvector;
	var_59_float = sqrt(var_60_int);
	var_61_float = 9.999999974752427e-07;
	var_62_bool = var_59_float < var_61_float;
	if(var_62_bool != 0) {
		var_50_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_50_cvector = var_51_cvector / var_59_float;
	return 2;
}


func_1975(var_512_bool, var_513_float)
{
	var_514_float = 0; var_515_bool = 0; var_516_float = 0; var_517_bool = 0;
	rand(var_516_float);
	var_518_bool = var_516_float < var_513_float;
	if(var_518_bool != 0) {

	Label_1980:
		IsAnimationPlaying(var_517_bool);
		var_519_bool = var_517_bool == 0; //@nz
		if(var_519_bool != 0) {
		} else {
			var_520_bool = 0;
			func_2073(var_520_bool);
			if(var_520_bool != 0) {
				var_512_bool = 1;
				sync();
				goto Label_1980;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_2177(var_517_bool);
	}
	goto Label_2000;
	
Label_2000:
	var_512_bool = 0;
	return 4;
	
}


func_2489(var_102_bool, var_103_object)
{
	var_104_bool = 0; var_105_bool = 0;
	IsPlayerActor(var_103_object, var_105_bool);
	var_105_bool = var_102_bool;
	return 2;
}


func_3005(var_459_float, var_460_float, var_461_float)
{
	var_464_bool = var_460_float < var_461_float;
	if(var_464_bool != 0) {
		var_460_float = var_459_float;
	} else {
		var_461_float = var_459_float;
	}
	return 0;
	
}


func_3518(var_19_bool, var_20_string)
{
	var_21_object = Obj(); var_22_object = Obj();
	var_24_bool = var_20_string == "heal";
	if(var_24_bool != 0) {
		FindActor(var_22_object, "player");
		var_26_bool = 0; var_27_object = Obj();
		var_22_object = var_27_object;
		func_3670(var_27_object);
		var_26_bool = var_19_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_19_bool = 0;
	return 2;
}


func_2494(var_53_bool, var_54_object, var_55_string)
{
	var_56_bool = 0; var_57_bool = 0;
	var_60_bool = IsFuncExist(var_54_object, "HasProperty", (int)2);
	var_61_bool = var_60_bool == 0; //@nz
	if(var_61_bool != 0) {
		var_53_bool = 0;
		return 2;
	}
	@@var_54_object:HasProperty(var_55_string, var_57_bool);
	var_57_bool = var_53_bool;
	return 2;
}


func_962(var_120_float)
{
	var_121_float = 0; var_122_float = 0;
	GetCameraFarDistance(var_122_float);
	var_122_float = var_120_float;
	return 2;
}


func_3012(var_469_float, var_470_float, var_471_float, var_472_float)
{
	var_473_bool = var_470_float < var_471_float;
	if(var_473_bool != 0) {
		var_471_float = var_469_float;
		return 0;
	}
	var_474_bool = var_470_float > var_472_float;
	if(var_474_bool != 0) {
		var_472_float = var_469_float;
		return 0;
	}
	var_470_float = var_469_float;
	return 0;
}


func_2506(var_421_float, var_422_object, var_423_float, var_424_int)
{
	var_428_int = 0; var_429_string = ""; var_430_int = 0; var_431_float = 0; var_432_float = 0; var_433_float = 0; var_434_int = 0; var_435_string = ""; var_436_int = 0; var_437_float = 0; var_438_float = 0; var_439_float = 0;
	var_440_bool = 0; var_441_object = Obj(); var_442_string = "";
	var_422_object = var_441_object;
	func_2494(var_440_bool, var_441_object, "health");
	var_443_bool = var_440_bool == 0; //@nz
	if(var_443_bool != 0) {
		var_421_float = 0.0;
		return 12;
	}
	var_444_bool = 0; var_445_object = Obj(); var_446_string = "";
	var_422_object = var_445_object;
	func_2494(var_444_bool, var_445_object, "armor");
	var_447_bool = var_444_bool == 0; //@nz
	if(var_447_bool != 0) {
		var_434_int = 0;
	} else {
			@@var_422_object:GetProperty("armor", var_434_int);
	}
	var_449_string = ""; var_450_int = 0;
	var_424_int = var_450_int;
	func_2460(var_449_string, var_450_int);
	var_435_string = "armor_" + var_449_string;
	var_455_bool = 0; var_456_object = Obj(); var_457_string = "";
	var_422_object = var_456_object;
	var_435_string = var_457_string;
	func_2494(var_455_bool, var_456_object, var_457_string);
	var_458_bool = var_455_bool == 0; //@nz
	if(var_458_bool != 0) {
		var_436_int = 0;
	} else {
		@@var_422_object:GetProperty(var_435_string, var_436_int);

	}
	var_459_float = 0; var_460_float = 0; var_461_float = 0;
	var_462_int = var_434_int + var_436_int;
	var_460_float = var_462_int / (float)100.0;
	func_3005(var_459_float, var_460_float, (float)1);
	var_459_float = var_437_float;
	@@var_422_object:GetProperty("health", var_438_float);
	var_467_int = (int)1 - var_437_float;
	var_439_float = var_423_float * var_467_int;
	var_469_float = 0; var_470_float = 0; var_471_float = 0; var_472_float = 0;
	var_470_float = var_438_float - var_439_float;
	func_3012(var_469_float, var_470_float, (float)0, (float)1);
	@@var_422_object:SetProperty("health", var_469_float);
	var_475_bool = 0; var_476_object = Obj();
	var_422_object = var_476_object;
	func_2489(var_475_bool, var_476_object);
	if(var_475_bool != 0) {
		var_477_float = 0;
		var_477_float = -var_439_float;
		func_3069(var_477_float);
	}
	var_439_float = var_421_float;
	return 12;
	
}


func_3534(var_30_string)
{
	var_31_object = Obj(); var_32_object = Obj();
	var_34_bool = var_30_string == "heal";
	if(var_34_bool != 0) {
		FindActor(var_32_object, "player");
		var_32_object = Obj();
		func_3673();
		var_32_object = 0;
	}
	return 2;
}


func_974(var_0_object, var_1_object)
{
	var_0_object = true;
	var_1_object = false;
	Stop();
	StopGroup0();
	return 0;
}


func_3023(var_43_bool, var_44_int, var_45_int)
{
	var_46_int = 0; var_47_int = 0;
	irand(var_47_int, var_45_int);
	var_43_bool = var_47_int < var_44_int;
	return 2;
}


func_2002(var_0_object, var_309_bool, var_310_float)
{
	var_311_bool = 0; var_312_cvector = CVector(0,0,0); var_313_cvector = CVector(0,0,0); var_314_cvector = CVector(0,0,0); var_315_float = 0; var_316_bool = 0; var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); var_319_cvector = CVector(0,0,0); var_320_float = 0;
	
Label_2003:
	IsAnimationPlaying(var_316_bool);
	var_321_bool = var_316_bool == 0; //@nz
	if(var_321_bool != 0) {
	} else {
		var_322_bool = 0;
		func_2073(var_322_bool);
		if(var_322_bool != 0) {
			var_309_bool = 1;
			return 10;
		}
		var_365_bool = 0; var_366_object = Obj();
		var_366_object = var_0_object;
		func_2620(var_365_bool, var_366_object);
		var_367_bool = var_365_bool == 0; //@nz
		if(var_367_bool != 0) {
			var_309_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_317_cvector);
		GetPFPosition(var_318_cvector);
		var_319_cvector = var_317_cvector - var_318_cvector;
		var_320_float = var_319_cvector | var_319_cvector;
		var_368_float = var_310_float * var_310_float;
		var_369_bool = var_320_float < var_368_float;
		if(var_369_bool != 0) {
			var_370_bool = 0; var_371_float = 0;
			var_310_float = var_371_float;
			func_1838(var_319_cvector, var_320_float, var_370_bool, var_371_float);
			var_309_bool = 1;
			sync();
			goto Label_2003;
		}
		return 10;
	}
	func_2177(var_320_float);
	var_309_bool = 0;
	return 10;
	
}


func_3028(var_71_float, var_72_cvector, var_73_cvector)
{
	var_74_float = GetByIndex(var_72_cvector, 0);
	var_75_float = GetByIndex(var_73_cvector, 0);
	var_76_float = var_74_float * var_75_float;
	var_77_float = GetByIndex(var_72_cvector, 2);
	var_78_float = GetByIndex(var_73_cvector, 2);
	var_79_float = var_77_float * var_78_float;
	var_71_float = var_76_float + var_79_float;
	return 0;
}


func_981(var_0_object, var_1_object)
{
	var_0_object = true;
	var_1_object = true;
	Stop();
	StopGroup0();
	return 0;
}


func_471(var_20_object)
{
	EventDisable(0);
	var_21_object = Obj();
	var_20_object = var_21_object;
	func_504(var_21_object);
	var_101_object = Obj();
	var_20_object = var_101_object;
	func_3716(var_101_object);
	EventEnable(0);
	
Label_482:
	Hold();
	goto Label_482;
}
EMIT "Return(); Pop(0)";


func_3547(var_154_string, var_155_int)
{
	var_156_string = ""; var_157_string = "";
	var_158_int = var_155_int;
	if(var_158_int != 0) {
		"idle" = "idle" + var_155_int;
	}
	var_157_string = var_154_string;
	return 2;
}


func_988(var_130_bool)
{
	var_130_bool = 0;
	return 0;
}


func_3037(var_80_float, var_81_cvector)
{
	var_82_float = GetByIndex(var_81_cvector, 0);
	var_83_float = GetByIndex(var_81_cvector, 0);
	var_84_float = var_82_float * var_83_float;
	var_85_float = GetByIndex(var_81_cvector, 2);
	var_86_float = GetByIndex(var_81_cvector, 2);
	var_87_float = var_85_float * var_86_float;
	var_88_int = var_84_float + var_87_float;
	var_80_float = sqrt(var_88_int);
	return 0;
}


func_990(var_124_object, var_125_cvector)
{
	var_126_object = Obj(); var_127_object = Obj();
	FindShiftedPathTo(var_127_object, var_125_cvector);
	var_127_object = var_124_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3554(var_148_int)
{
	var_149_int = 0; var_150_bool = 0; var_151_int = 0; var_152_bool = 0;
	var_151_int = 0;
	
Label_3556:
	var_154_string = ""; var_155_int = 0;
	var_151_int = var_155_int;
	func_3547(var_154_string, var_155_int);
	HasAnimation(var_152_bool, "all", var_154_string);
	var_159_bool = var_152_bool == 0; //@nz
	if(var_159_bool != 0) {
	} else {
		var_151_int = var_151_int + (int)1;
		goto Label_3556;
	}
	var_151_int = var_148_int;
	return 4;
	
}


func_3047(var_68_float, var_69_cvector, var_70_cvector)
{
	var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0);
	var_69_cvector = var_72_cvector;
	var_70_cvector = var_73_cvector;
	func_3028(var_71_float, var_72_cvector, var_73_cvector);
	var_80_float = 0; var_81_cvector = CVector(0,0,0);
	var_69_cvector = var_81_cvector;
	func_3037(var_80_float, var_81_cvector);
	var_89_float = 0; var_90_cvector = CVector(0,0,0);
	var_70_cvector = var_90_cvector;
	func_3037(var_89_float, var_90_cvector);
	var_91_float = var_80_float * var_89_float;
	var_68_float = var_71_float / var_91_float;
	return 0;
}


func_1521(var_74_object)
{
	var_81_object = Obj(); var_82_bool = 0; var_83_float = 0;
	var_74_object = var_81_object;
	func_1535(var_77_int, var_78_bool, var_79_float, var_80_int, var_74_object, var_81_object, (bool)1, (float)180.0);
	return 0;
}


func_3571(var_61_int)
{
	var_63_bool = 0;
	func_3711(var_63_bool);
	if(var_63_bool != 0) {
		var_61_int = 2;
	} else {
		var_61_int = 0;
	}
	return 0;
	
}


func_504(var_21_object)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; var_37_object = Obj(); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0);
	var_42_bool = var_21_object == 0; //@ne
	if(var_42_bool != 0) {
		var_43_string = "";
		func_595("fdie");
	} else {
		@@var_21_object:GetPosition(var_32_cvector);
		GetPosition(var_33_cvector);
		GetDirection(var_34_cvector);
		var_35_cvector = var_33_cvector - var_32_cvector;
		var_75_float = GetByIndex(var_35_cvector, 0);
		var_76_float = GetByIndex(var_34_cvector, 0);
		var_77_float = var_75_float * var_76_float;
		var_78_float = GetByIndex(var_35_cvector, 2);
		var_79_float = GetByIndex(var_34_cvector, 2);
		var_80_float = var_78_float * var_79_float;
		var_81_int = var_77_float + var_80_float;
		var_83_bool = var_81_int >= (int)0;
		if(var_83_bool != 0) {
			var_36_string = "fdie";
		} else {
				var_36_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_21_object = var_37_object;
		var_86_bool = IsFuncExist(var_21_object, "GetScriptProperty", (int)2);
		if(var_86_bool != 0) {
			@@var_21_object:HasScriptProperty(var_38_bool, "Owner");
			var_88_bool = var_38_bool;
			if(var_88_bool != 0) {
				@@var_21_object:GetScriptProperty(var_37_object, "Owner");
				var_90_bool = var_37_object == 0; //@ne
				if(var_90_bool != 0) {
					var_21_object = var_37_object;
				}
			}
		}
		var_93_bool = IsFuncExist(var_37_object, "@GetEyesHeight", (int)1);
		if(var_93_bool != 0) {
			@@var_37_object:GetEyesHeight(var_40_float);
			var_41_cvector = CVector(0.0, 0.0, 0.0);
			var_94_float = GetByIndex(var_41_cvector, 1);
			var_40_float = var_94_float;
			SetByIndex(var_41_cvector, 1) = var_94_float;
			LookAsync(var_21_object, "head", var_41_cvector);
			var_39_bool = 1;
		} else {
			var_39_bool = 0;

		}
		var_96_string = "";
		var_36_string = var_96_string;
		func_2948(var_96_string);
		PlayAnimation("all", var_36_string);
		WaitForAnimEnd();
		var_98_bool = var_39_bool;
		if(var_98_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_36_string);
		RemoveEnvelope();
		var_37_object = 0;
	}
	return 20;
	
}


func_1529(var_418_float)
{
	var_418_float = 0.029999999329447746;
	return 0;
}


func_1532(var_425_int)
{
	var_425_int = 0;
	return 0;
}


func_2045(var_0_object, var_324_bool)
{
	var_325_cvector = CVector(0,0,0); var_326_cvector = CVector(0,0,0); var_327_cvector = CVector(0,0,0); var_328_float = 0; var_329_float = 0; var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); var_332_cvector = CVector(0,0,0); var_333_float = 0; var_334_float = 0;
	var_335_bool = 0; var_336_object = Obj();
	var_336_object = var_0_object;
	func_2620(var_335_bool, var_336_object);
	var_337_bool = var_335_bool == 0; //@nz
	if(var_337_bool != 0) {
		var_324_bool = 0;
		return 10;
	}
	var_338_bool = 0;
	func_2134(var_334_float, var_338_bool);
	if(var_338_bool != 0) {
		@@@var_0_object:GetPFPosition(var_330_cvector);
		GetPFPosition(var_331_cvector);
		var_332_cvector = var_330_cvector - var_331_cvector;
		var_333_float = var_332_cvector | var_332_cvector;
		@@@var_0_object:GetAttackDistance(var_334_float);
		var_334_float = var_334_float + (int)50;
		var_340_float = var_334_float * var_334_float;
		var_324_bool = var_333_float <= var_340_float;
		return 10;
	}
	var_324_bool = 0;
	return 10;
}


func_1535(var_0_object, var_3_string, var_5_bool, var_81_object, var_82_bool, var_83_float, var_158_bool, var_250_bool)
{
	var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_bool = 0; var_88_bool = 0; var_89_float = 0; var_90_cvector = CVector(0,0,0); var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_bool = 0; var_94_float = 0; var_95_float = 0; var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_bool = 0; var_99_bool = 0; var_100_float = 0; var_101_cvector = CVector(0,0,0); var_102_float = 0; var_103_cvector = CVector(0,0,0); var_104_bool = 0; var_105_float = 0;
	func_1764(var_103_cvector, var_104_bool, var_105_float);
	var_5_bool = 0;
	var_130_bool = IsFuncExist(var_81_object, "@GetAttackDistance", (int)1);
	if(var_130_bool != 0) {
		@@var_81_object:GetAttackDistance(var_95_float);
		var_95_float = var_95_float + (int)50;
	} else {
							var_83_float = var_95_float;
	}
	var_133_bool = var_95_float >= (int)150;
	if(var_133_bool != 0) {
		var_95_float = 150;
	}
	var_3_string = false;
	var_0_object = var_81_object;
	IsPlayerActor(var_0_object, var_98_bool);
	var_134_bool = var_98_bool;
	if(var_134_bool != 0) {
		PlayGlobalMusic("attack");
		var_136_object = Obj();
		func_2989(var_136_object);
		SendPlayerEnemy(var_81_object, var_136_object);
	}
	var_139_bool = var_82_bool;
	if(var_139_bool != 0) {
		var_99_bool = 0;
	} else {
						var_99_bool = 1;

	}
	var_100_float = (float)400.0 + var_95_float;
	
Label_1575:
	var_141_bool = 0;
	var_141_bool = 0;
	var_142_bool = 0; var_143_object = Obj();
	var_143_object = var_0_object;
	func_2620(var_142_bool, var_143_object);
	if(var_142_bool != 0) {
		var_144_bool = var_3_string == 0; //@nz
		if(var_144_bool != 0) {
			var_141_bool = 1;
		}
	}
	if(var_141_bool != 0) {
		func_2177(var_105_float);
		@@@var_0_object:GetPFPosition(var_96_cvector);
		GetPFPosition(var_97_cvector);
		var_101_cvector = var_96_cvector - var_97_cvector;
		var_102_float = var_101_cvector | var_101_cvector;
		var_150_float = var_100_float * var_100_float;
		var_151_bool = var_102_float >= var_150_float;
		if(var_151_bool != 0) {
			var_152_bool = 0; var_153_object = Obj(); var_154_float = 0; var_155_float = 0; var_156_bool = 0; var_157_bool = 0;
			var_153_object = var_0_object;
			var_95_float = var_154_float;
			TaskCall(7);
			func_2204(var_160_bool, var_152_bool, var_153_object, var_154_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_235_bool = var_158_bool == 0; //@nz
			if(var_235_bool != 0) {
			} else {
				var_99_bool = 0;
		} else {
				var_241_float = var_83_float * var_83_float;
				var_242_bool = var_102_float >= var_241_float;
				if(var_242_bool != 0) {
					@@@var_0_object:GetPFPosition(var_103_cvector);
					CanReachByPF(var_104_bool, var_103_cvector);
					var_243_bool = var_104_bool == 0; //@nz
					if(var_243_bool != 0) {
						var_244_bool = 0; var_245_object = Obj(); var_246_float = 0; var_247_float = 0; var_248_bool = 0; var_249_bool = 0;
						var_245_object = var_0_object;
						var_95_float = var_246_float;
						TaskCall(7);
						func_2204(var_252_bool, var_244_bool, var_245_object, var_246_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_253_bool = var_250_bool == 0; //@nz
						if(var_253_bool != 0) {
							goto Label_1747;
						}
						var_99_bool = 0;
						goto Label_1575;
					}
					var_254_bool = var_99_bool == 0; //@nz
					if(var_254_bool != 0) {
						var_255_object = Obj();
						var_255_object = var_0_object;
						func_2770(var_255_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_2177(var_105_float);
						StopAsync();
						var_99_bool = 1;
						var_266_bool = 0; var_267_object = Obj();
						var_267_object = var_0_object;
						func_2620(var_266_bool, var_267_object);
						var_268_bool = var_266_bool == 0; //@nz
						if(var_268_bool != 0) {
							goto Label_1747;
						}
					}
					rand(var_105_float);
					var_269_bool = 0;
					var_271_bool = var_105_float < (float)0.25;
					if(var_271_bool != 1) {
						var_272_bool = 0;
						func_2134((bool)1, var_272_bool);
						if(var_272_bool != 1) {
							var_269_bool = 0;
						}
					}
					if(var_269_bool != 0) {
						Face(var_0_object);
						func_2184();
						PlayAnimation("all", "attack_stay");
						var_309_bool = 0; var_310_float = 0;
						var_83_float = var_310_float;
						func_2002(var_105_float, var_309_bool, var_310_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_2177(var_105_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_531_bool = 0;
						func_2134(var_105_float, var_531_bool);
						var_532_bool = var_531_bool == 0; //@nz
						if(var_532_bool == 0) goto Label_1737;
						var_533_bool = 0; var_534_object = Obj();
						var_534_object = var_0_object;
						func_2620(var_533_bool, var_534_object);
						var_535_bool = var_533_bool == 0; //@nz
						if(var_535_bool != 0) {
							goto Label_1747;
						}
						@@@var_0_object:GetPFPosition(var_96_cvector);
						GetPFPosition(var_97_cvector);
						var_101_cvector = var_96_cvector - var_97_cvector;
						var_102_float = var_101_cvector | var_101_cvector;
						var_536_float = var_83_float * var_83_float;
						var_537_bool = var_102_float < var_536_float;
						if(var_537_bool == 0) goto Label_1737;
						var_538_bool = 0; var_539_float = 0;
						var_83_float = var_539_float;
						func_1838(var_104_bool, var_105_float, var_538_bool, var_539_float);
						var_540_bool = var_538_bool == 0; //@nz
						if(var_540_bool == 0) goto Label_1737;
						goto Label_1747;
				}
					var_541_bool = 0; var_542_float = 0;
					var_83_float = var_542_float;
					func_1838(var_104_bool, var_105_float, var_541_bool, var_542_float);
					var_543_bool = var_541_bool == 0; //@nz
					if(var_543_bool != 0) {
						goto Label_1747;
					}
					var_99_bool = 1;

				}
			Label_1737:
				goto Label_1746;
		}
		Label_1746:
			goto Label_1575;

		}
	}
Label_1747:
	WaitForAnimEnd();
	var_236_string = var_3_string;
	if(var_236_string != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_239_bool = var_98_bool;
	if(var_239_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


