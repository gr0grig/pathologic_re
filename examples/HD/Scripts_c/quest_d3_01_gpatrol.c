// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,IsPlayerActor/2,GetPFPosition/1,GetDirection/1,irand/2,Sleep/2,FindPathTo/2,RotatePath/2,FollowPath/3,Rotate/3,WaitForAnimEnd/1,Sleep/1,StopGroup0/0,Stop/0,FindActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,CanReachByPF/2,StopAsync/0,rand/1,Face/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,GetScene/1,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,UnlookAsync/1,KillTimer/1,GetPosition/1,FollowPath/5,RequestClearPath/1,SetRTEnvelope/2,Hold/0,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,SendWorldWndMessage/1,CreateFloatVector/1,RumblePlay/2,Trigger/2,BroadcastMessage/3,SetVariable/2,TriggerWorld/2,GetVariable/2,WorkWithCorpse/1,Barter/1,CreateInvItem/1,AddItem/4,GetProperty/2,SignalDeath/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:kill_player|W:talk_player|W:quest_d3_01|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:head|A:GetPosition|W:walk|W:run|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:health|W:armor|W:armor_|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:money|W:Money|W:reputation|W:battle|W:d3q01|W:gpatrol_attack|W:gpatrol_talk|W:playsound|W:givemoney|W:branch|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:ui/NPC_Citizen2.png|W:ui/NPC_Citizen2_b.png|W:revolver_ammo|W:alpha_pills
// @GLOBALS: 0:object:
// @RUN_OP: 0x1a3
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9a vars=int,int
// @TASK_2: vars=cvector,cvector params=0
// @EVENT_0: op=0x17b vars=object
// @EVENT_26: op=0x186 vars=string
// @EVENT_17: op=0x198 vars=object
// @TASK_3: vars=object,int,int,bool,float,int params=0
// @TASK_4: vars=bool,object,bool params=6
// @EVENT_7: op=0x4d9 vars=int
// @EVENT_1: op=0x4f4 vars=object
// @EVENT_2: op=0x503 vars=object
// @EVENT_10: op=0x589 vars=object
// @EVENT_41: op=0x594 vars=object
// @TASK_5: vars= params=1
// @EVENT_0: op=0x5b5 vars=object
// @EVENT_22: op=0x634 vars=object,int,float,float
// @EVENT_16: op=0x636 vars=object,string
// @EVENT_41: op=0x638 vars=object
// @STANDALONE_EVENT_22: op=0x987 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x98f vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x999 vars=object,string
// @STANDALONE_EVENT_41: op=0x9a6 vars=object
// @PE: 0x4a,0x84,0x9a,0x17b,0x186,0x20c,0x20f,0x4a0,0x4d9,0x4f4,0x503,0x577,0x589,0x594,0x59d,0x5a8,0x61a,0x634,0x636,0x638,0x63a,0x855,0x85c,0x886,0x8e4,0x8ef,0x8f6,0x8fd,0x903,0x90a,0x932,0x987,0x98f,0x9a6

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_cvector, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	if((int)1 != 0) {
		func_2065();
		var_21_bool = var_17_bool == (int)10025;
		if(var_21_bool != 0) {
			var_22_object = Obj(); var_23_object = Obj();
			var_22_object = var_1_object;
			var_23_object = var_0_object;
			func_2287(var_23_object);
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_2294();
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_object;
			func_2301();
		}
		var_55_bool = var_17_bool == (int)10024;
		if(var_55_bool != 0) {
			var_56_object = Obj(); var_57_object = Obj();
			var_56_object = var_1_object;
			var_57_object = var_0_object;
			func_2287(var_57_object);
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_object;
			func_2294();
			var_60_object = Obj(); var_61_object = Obj();
			var_60_object = var_1_object;
			var_61_object = var_0_object;
			func_2301();
		}
		var_63_bool = var_17_bool == (int)10017;
		if(var_63_bool != 0) {
			var_64_object = Obj(); var_65_object = Obj();
			var_64_object = var_1_object;
			var_65_object = var_0_object;
			func_2276();
			var_71_object = Obj(); var_72_object = Obj();
			var_71_object = var_1_object;
			var_72_object = var_0_object;
			func_2307(var_72_object);
		}
		var_112_bool = var_17_bool == (int)10018;
		if(var_112_bool != 0) {
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_2276();
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_object;
			func_2307(var_116_object);
		}
		var_118_bool = var_16_object == (int)10011;
		if(var_118_bool != 0) {
			var_119_string = "";
			func_132(var_17_bool, "Neutral");
			@@@var_0_object:SetMessage((int)509131);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509132, (int)10013, (int)10012);
			@@@var_0_object:AddReply((int)534051, (int)-1, (int)35632);
			return 0;
		}
		var_144_bool = var_16_object == (int)10013;
		if(var_144_bool != 0) {
			var_145_string = "";
			func_132(var_17_bool, "Neutral");
			@@@var_0_object:SetMessage((int)509133);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509134, (int)10019, (int)10014);
			@@@var_0_object:AddReply((int)509135, (int)10016, (int)10015);
			return 0;
		}
		var_154_bool = var_16_object == (int)10016;
		if(var_154_bool != 0) {
			var_155_string = "";
			func_132(var_17_bool, "Neutral");
			@@@var_0_object:SetMessage((int)509136);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509137, (int)-1, (int)10017);
			@@@var_0_object:AddReply((int)509138, (int)-1, (int)10018);
			return 0;
		}
		var_164_bool = var_16_object == (int)10019;
		if(var_164_bool != 0) {
			var_165_string = "";
			func_132(var_17_bool, "Neutral");
			@@@var_0_object:SetMessage((int)509139);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509140, (int)10021, (int)10020);
			return 0;
		}
		var_171_bool = var_16_object == (int)10021;
		if(var_171_bool != 0) {
			var_172_string = "";
			func_132(var_17_bool, "Neutral");
			@@@var_0_object:SetMessage((int)509141);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509142, (int)10023, (int)10022);
			var_177_bool = 0; var_178_object = Obj();
			var_178_object = var_1_object;
			func_2314(var_177_bool, var_178_object);
			if(var_177_bool != 0) {
				@@@var_0_object:AddReply((int)509144, (int)-1, (int)10024);
			}
			return 0;
		}
		var_189_bool = var_16_object == (int)10023;
		if(var_189_bool != 0) {
			var_190_string = "";
			func_132(var_17_bool, "Neutral");
			@@@var_0_object:SetMessage((int)509143);
			@@@var_0_object:ClearReplies();
			var_192_bool = 0; var_193_object = Obj();
			var_193_object = var_1_object;
			func_2314(var_192_bool, var_193_object);
			if(var_192_bool != 0) {
				@@@var_0_object:AddReply((int)509145, (int)-1, (int)10025);
			}
			@@@var_0_object:AddReply((int)509146, (int)10016, (int)10026);
			return 0;
		}
		var_3_string = true;
		var_200_bool = 0;
		func_2416(var_200_bool);
		if(var_200_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x9b";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	func_503();
	var_17_int = 0; var_18_object = Obj();
	var_16_bool = var_18_object;
	TaskCall(0);
	func_0(var_19_object, var_17_int, var_18_object);
	TaskReturn();
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_string, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_18_bool = var_16_bool == "kill_player";
	if(var_18_bool != 0) {
		func_503();
		TaskCall(3);
		func_509();
		TaskReturn();
	} else {
		var_525_bool = var_16_bool == "talk_player";
		if(var_525_bool == 0) goto Label_407;
		EventDisable(0);
	}
Label_407:
	return 0;
	
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_bool = 0;
	IsPlayerActor(var_16_bool, var_18_bool);
	var_19_bool = var_18_bool;
	if(var_19_bool != 0) {
		var_20_bool = 0; var_21_string = ""; var_22_string = "";
		func_2244(var_20_bool, "quest_d3_01", "kill_player");
	}
	return 2;
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_int)
{
	var_18_bool = var_16_int == (int)1;
	if(var_18_bool != 0) {
		var_19_object = Obj();
		var_19_object = var_1_object;
		func_2256(var_19_object);
	} else {
		var_24_int = 0;
		var_16_int = var_24_int;
		func_1399(var_15_bool, var_16_int, var_24_int);
	}
	return 0;
	
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	var_17_bool = 0;
	var_17_bool = 0;
	var_18_bool = var_1_object == var_16_object;
	if(var_18_bool != 0) {
		var_19_bool = var_2_object == 0; //@nz
		if(var_19_bool != 0) {
			var_17_bool = 1;
		}
	}
	if(var_17_bool != 0) {
		var_2_object = true;
		var_20_object = Obj();
		var_16_object = var_20_object;
		func_2054(var_20_object);
	}
	return 0;
}


task_4_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	var_17_bool = 0;
	var_17_bool = 0;
	var_18_bool = var_1_object == var_16_object;
	if(var_18_bool != 0) {
		var_19_object = var_2_object;
		if(var_19_object != 0) {
			var_17_bool = 1;
		}
	}
	if(var_17_bool != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	return 0;
}


task_4_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	RequestClearPath(var_16_object);
	return 0;
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	func_1255(var_16_object);
	var_16_object = Obj();
	func_2470();
	return 0;
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_bool = 0;
	IsOverrideActive(var_18_bool);
	var_19_bool = var_18_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_20_object = Obj();
		var_16_object = var_20_object;
		func_2354(var_20_object);
	}
	return 2;
}


task_5_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float)
{
	return 0;
}


task_5_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_string)
{
	return 0;
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float)
{
	var_20_object = Obj(); var_21_int = 0; var_22_float = 0;
	var_16_object = var_20_object;
	var_17_int = var_21_int;
	var_18_float = var_22_float;
	func_1843(var_20_object, var_21_int, var_22_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_int = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	var_16_object = var_22_object;
	var_17_int = var_23_int;
	var_18_float = var_24_float;
	var_20_cvector = var_25_cvector;
	var_21_cvector = var_26_cvector;
	func_1911(var_24_float, var_25_cvector, var_26_cvector);
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_string)
{
	var_18_float = 0; var_19_float = 0;
	var_21_bool = var_17_string == "health";
	if(var_21_bool != 0) {
		GetProperty("health", var_19_float);
		var_24_bool = var_19_float <= (int)0;
		if(var_24_bool != 0) {
			SignalDeath(var_16_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	var_17_object = Obj();
	var_16_object = var_17_object;
	func_2418(var_17_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_int = 0; var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_int = 0; var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_object = Obj();
	GetPFPosition(var_1_object);
	GetDirection(var_0_object);
	
Label_424:
	func_508();
	irand(var_20_int, (int)10);
	var_26_int = var_20_int + (int)5;
	Sleep(var_26_int, var_21_bool);
	var_27_bool = var_21_bool;
	if(var_27_bool != 0) {
		func_378();
	} else {
		func_508();
		GetPFPosition(var_22_cvector);
		var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0);
		var_29_cvector = var_1_object;
		var_22_cvector = var_30_cvector;
		func_2129(var_28_float, var_29_cvector, var_30_cvector);
		var_34_bool = var_28_float > (int)40000;
		if(var_34_bool != 0) {
			FindPathTo(var_23_object, var_1_object);
			var_35_bool = var_23_object != 0; //@nn
			if(var_35_bool != 0) {
				RotatePath(var_23_object, var_21_bool);
				var_36_bool = var_21_bool == 0; //@nz
				if(var_36_bool != 0) {
				} else {
					FollowPath(var_23_object, (bool)0, var_21_bool);
					var_38_bool = var_21_bool == 0; //@nz
					if(var_38_bool != 0) {
						goto Label_500;
					}
					var_39_float = GetByIndex(var_0_object, 0);
					var_40_float = GetByIndex(var_0_object, 2);
					Rotate(var_39_float, var_40_float, var_21_bool);
					var_41_bool = var_21_bool == 0; //@nz
					if(var_41_bool != 0) {
						goto Label_500;
					}
					WaitForAnimEnd(var_21_bool);
					var_42_bool = var_21_bool == 0; //@nz
					if(var_42_bool != 0) {
						goto Label_500;
					}
					goto Label_501;
				EMIT "GOTO 0x1e5";
			}
				Sleep((int)1);
				var_23_object = 0;
				goto Label_500;
		}
			var_44_float = GetByIndex(var_0_object, 0);
			var_45_float = GetByIndex(var_0_object, 2);
			Rotate(var_44_float, var_45_float, var_21_bool);
			var_46_bool = var_21_bool == 0; //@nz
			if(var_46_bool != 0) {
				goto Label_500;
			}
			WaitForAnimEnd(var_21_bool);
			var_47_bool = var_21_bool == 0; //@nz
			if(var_47_bool != 0) {
				goto Label_500;
			}
			goto Label_501;
		}
	Label_500:
		goto Label_440;
	}
Label_501:
	goto Label_424;
	
}
EMIT "Return(); Pop(8)";


func_0(var_0_object, var_17_int, var_18_object)
{
	var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; var_27_bool = 0;
	var_0_object = var_18_object;
	var_28_bool = 0; var_29_object = Obj(); var_30_float = 0;
	var_18_object = var_29_object;
	func_1936(var_28_bool, var_29_object, (float)70.0);
	var_75_bool = var_28_bool == 0; //@nz
	if(var_75_bool != 0) {
		var_17_int = -2;
		return 8;
	}
	CreateDialog(var_24_object);
	var_76_int = 0;
	func_2410(var_76_int);
	@@var_24_object:SetNPCName(var_76_int);
	var_77_int = 0;
	func_2408(var_77_int);
	@@var_24_object:SetNPCDescription(var_77_int);
	var_78_string = "";
	func_2412(var_78_string);
	@@var_24_object:SetPhoto(var_78_string);
	var_79_string = "";
	func_2414(var_79_string);
	@@var_24_object:SetPhoto2(var_79_string);
	var_80_int = 0;
	func_2331(var_80_int);
	@@var_24_object:SetPlayerName(var_80_int);
	IsOverrideActive(var_25_bool);
	var_88_bool = var_25_bool;
	if(var_88_bool != 0) {
		var_17_int = -2;
		return 8;
	}
	DoDialog(var_24_object);
	var_89_object = Obj(); var_90_object = Obj();
	var_18_object = var_89_object;
	var_24_object = var_90_object;
	TaskCall(1);
	func_74(var_91_object, var_92_object, var_93_string, var_94_bool, var_89_object, var_90_object);
	TaskReturn();
	@@var_24_object:IsDialogEnd(var_27_bool);
	
Label_56:
	var_138_bool = var_27_bool == 0; //@nz
	if(var_138_bool != 0) {
		sync();
		@@var_24_object:IsDialogEnd(var_27_bool);
		goto Label_56;
	}
	var_18_object = Obj();
	func_2005();
	StopDialog(var_24_object);
	@@var_24_object:GetReturnValue((int)-1);
	var_26_int = var_17_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_509()
{
	var_25_object = Obj(); var_26_object = Obj();
	FindActor(var_26_object, "player");
	var_28_bool = var_26_object == 0; //@nz
	if(var_28_bool != 0) {
		return 2;
	}
	var_29_object = Obj(); var_30_bool = 0; var_31_float = 0;
	var_26_object = var_29_object;
	func_530(var_22_bool, var_23_float, var_24_int, var_25_object, var_26_object, var_29_object, (bool)1, (float)180.0);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2307(var_71_object)
{
	var_73_bool = 0; var_74_object = Obj(); var_75_float = 0;
	var_71_object = var_74_object;
	func_2182(var_73_bool, var_74_object, (float)-0.30000001192092896);
	return 0;
}


func_2054(var_20_object)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_cvector = CVector(0,0,0);
	@@var_20_object:GetEyesHeight(var_23_float);
	var_24_cvector = CVector(0.0, 0.0, 0.0);
	var_25_float = GetByIndex(var_24_cvector, 1);
	var_23_float = var_25_float;
	SetByIndex(var_24_cvector, 1) = var_25_float;
	LookAsync(var_20_object, "head", var_24_cvector);
	return 4;
}


func_1799(var_33_object)
{
	var_34_bool = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; var_41_bool = 0; var_42_int = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_string = "";
	var_48_bool = var_33_object == 0; //@ne
	if(var_48_bool != 0) {
		return 14;
	}
	IsDead(var_41_bool);
	var_49_bool = var_41_bool;
	if(var_49_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_42_int);
	var_51_bool = var_42_int < (int)0;
	if(var_51_bool != 0) {
		return 14;
	}
	@@var_33_object:GetPosition(var_43_cvector);
	GetPosition(var_44_cvector);
	GetDirection(var_45_cvector);
	var_46_cvector = var_44_cvector - var_43_cvector;
	var_52_float = GetByIndex(var_46_cvector, 0);
	var_53_float = GetByIndex(var_45_cvector, 0);
	var_54_float = var_52_float * var_53_float;
	var_55_float = GetByIndex(var_46_cvector, 2);
	var_56_float = GetByIndex(var_45_cvector, 2);
	var_57_float = var_55_float * var_56_float;
	var_58_int = var_54_float + var_57_float;
	var_60_bool = var_58_int >= (int)0;
	if(var_60_bool != 0) {
		var_47_string = "fhit";
	} else {
		var_47_string = "bhit";
	}
	var_63_int = var_47_string + "1";
	var_65_int = var_47_string + "2";
	FadeSecondaryAnimation("hit_react", var_63_int, var_65_int, (int)-10);
	return 14;
	
}


func_2314(var_177_bool, var_178_object)
{
	var_179_bool = 0; var_180_object = Obj();
	var_178_object = var_180_object;
	func_2324(var_179_bool, var_180_object);
	if(var_179_bool != 0) {
		var_177_bool = 1;
		return 0;
	}
	var_177_bool = 0;
	return 0;
}


func_524(var_398_float)
{
	var_398_float = 0.15000000596046448;
	return 0;
}


func_527(var_405_int)
{
	var_405_int = 0;
	return 0;
}


func_1040(var_0_object, var_304_bool)
{
	var_305_cvector = CVector(0,0,0); var_306_cvector = CVector(0,0,0); var_307_cvector = CVector(0,0,0); var_308_float = 0; var_309_float = 0; var_310_cvector = CVector(0,0,0); var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_float = 0; var_314_float = 0;
	var_315_bool = 0; var_316_object = Obj();
	var_316_object = var_0_object;
	func_1775(var_315_bool, var_316_object);
	var_317_bool = var_315_bool == 0; //@nz
	if(var_317_bool != 0) {
		var_304_bool = 0;
		return 10;
	}
	var_318_bool = 0;
	func_1129(var_314_float, var_318_bool);
	if(var_318_bool != 0) {
		@@@var_0_object:GetPFPosition(var_310_cvector);
		GetPFPosition(var_311_cvector);
		var_312_cvector = var_310_cvector - var_311_cvector;
		var_313_float = var_312_cvector | var_312_cvector;
		@@@var_0_object:GetAttackDistance(var_314_float);
		var_314_float = var_314_float + (int)50;
		var_320_float = var_314_float * var_314_float;
		var_304_bool = var_313_float <= var_320_float;
		return 10;
	}
	var_304_bool = 0;
	return 10;
}


func_2065()
{
	var_19_bool = 0;
	func_2416(var_19_bool);
	if(var_19_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_530(var_0_object, var_3_string, var_5_cvector, var_29_object, var_30_bool, var_31_float, var_138_bool, var_230_bool)
{
	var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_float = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_bool = 0; var_53_float = 0;
	func_759(var_51_cvector, var_52_bool, var_53_float);
	var_5_cvector = 0;
	var_78_bool = IsFuncExist(var_29_object, "@GetAttackDistance", (int)1);
	if(var_78_bool != 0) {
		@@var_29_object:GetAttackDistance(var_43_float);
		var_43_float = var_43_float + (int)50;
	} else {
							var_31_float = var_43_float;
	}
	var_81_bool = var_43_float >= (int)150;
	if(var_81_bool != 0) {
		var_43_float = 150;
	}
	var_3_string = false;
	var_0_object = var_29_object;
	IsPlayerActor(var_0_object, var_46_bool);
	var_82_bool = var_46_bool;
	if(var_82_bool != 0) {
		PlayGlobalMusic("attack");
		var_84_object = Obj();
		func_2113(var_84_object);
		SendPlayerEnemy(var_29_object, var_84_object);
	}
	var_87_bool = var_30_bool;
	if(var_87_bool != 0) {
		var_47_bool = 0;
	} else {
						var_47_bool = 1;

	}
	var_48_float = (float)400.0 + var_43_float;
	
Label_570:
	var_89_bool = 0;
	var_89_bool = 0;
	var_90_bool = 0; var_91_object = Obj();
	var_91_object = var_0_object;
	func_1775(var_90_bool, var_91_object);
	if(var_90_bool != 0) {
		var_124_bool = var_3_string == 0; //@nz
		if(var_124_bool != 0) {
			var_89_bool = 1;
		}
	}
	if(var_89_bool != 0) {
		func_1172(var_53_float);
		@@@var_0_object:GetPFPosition(var_44_cvector);
		GetPFPosition(var_45_cvector);
		var_49_cvector = var_44_cvector - var_45_cvector;
		var_50_float = var_49_cvector | var_49_cvector;
		var_130_float = var_48_float * var_48_float;
		var_131_bool = var_50_float >= var_130_float;
		if(var_131_bool != 0) {
			var_132_bool = 0; var_133_object = Obj(); var_134_float = 0; var_135_float = 0; var_136_bool = 0; var_137_bool = 0;
			var_133_object = var_0_object;
			var_43_float = var_134_float;
			TaskCall(4);
			func_1192(var_140_bool, var_132_bool, var_133_object, var_134_float, (float)10000.0, (bool)1, (bool)0);
			TaskReturn();
			var_215_bool = var_138_bool == 0; //@nz
			if(var_215_bool != 0) {
			} else {
				var_47_bool = 0;
		} else {
				var_221_float = var_31_float * var_31_float;
				var_222_bool = var_50_float >= var_221_float;
				if(var_222_bool != 0) {
					@@@var_0_object:GetPFPosition(var_51_cvector);
					CanReachByPF(var_52_bool, var_51_cvector);
					var_223_bool = var_52_bool == 0; //@nz
					if(var_223_bool != 0) {
						var_224_bool = 0; var_225_object = Obj(); var_226_float = 0; var_227_float = 0; var_228_bool = 0; var_229_bool = 0;
						var_225_object = var_0_object;
						var_43_float = var_226_float;
						TaskCall(4);
						func_1192(var_232_bool, var_224_bool, var_225_object, var_226_float, (float)10000.0, (bool)1, (bool)0);
						TaskReturn();
						var_233_bool = var_230_bool == 0; //@nz
						if(var_233_bool != 0) {
							goto Label_742;
						}
						var_47_bool = 0;
						goto Label_570;
					}
					var_234_bool = var_47_bool == 0; //@nz
					if(var_234_bool != 0) {
						var_235_object = Obj();
						var_235_object = var_0_object;
						func_1925(var_235_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1172(var_53_float);
						StopAsync();
						var_47_bool = 1;
						var_246_bool = 0; var_247_object = Obj();
						var_247_object = var_0_object;
						func_1775(var_246_bool, var_247_object);
						var_248_bool = var_246_bool == 0; //@nz
						if(var_248_bool != 0) {
							goto Label_742;
						}
					}
					rand(var_53_float);
					var_249_bool = 0;
					var_251_bool = var_53_float < (float)0.25;
					if(var_251_bool != 1) {
						var_252_bool = 0;
						func_1129((bool)1, var_252_bool);
						if(var_252_bool != 1) {
							var_249_bool = 0;
						}
					}
					if(var_249_bool != 0) {
						Face(var_0_object);
						func_1179();
						PlayAnimation("all", "attack_stay");
						var_289_bool = 0; var_290_float = 0;
						var_31_float = var_290_float;
						func_997(var_53_float, var_289_bool, var_290_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1172(var_53_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_511_bool = 0;
						func_1129(var_53_float, var_511_bool);
						var_512_bool = var_511_bool == 0; //@nz
						if(var_512_bool == 0) goto Label_732;
						var_513_bool = 0; var_514_object = Obj();
						var_514_object = var_0_object;
						func_1775(var_513_bool, var_514_object);
						var_515_bool = var_513_bool == 0; //@nz
						if(var_515_bool != 0) {
							goto Label_742;
						}
						@@@var_0_object:GetPFPosition(var_44_cvector);
						GetPFPosition(var_45_cvector);
						var_49_cvector = var_44_cvector - var_45_cvector;
						var_50_float = var_49_cvector | var_49_cvector;
						var_516_float = var_31_float * var_31_float;
						var_517_bool = var_50_float < var_516_float;
						if(var_517_bool == 0) goto Label_732;
						var_518_bool = 0; var_519_float = 0;
						var_31_float = var_519_float;
						func_833(var_52_bool, var_53_float, var_518_bool, var_519_float);
						var_520_bool = var_518_bool == 0; //@nz
						if(var_520_bool == 0) goto Label_732;
						goto Label_742;
				}
					var_521_bool = 0; var_522_float = 0;
					var_31_float = var_522_float;
					func_833(var_52_bool, var_53_float, var_521_bool, var_522_float);
					var_523_bool = var_521_bool == 0; //@nz
					if(var_523_bool != 0) {
						goto Label_742;
					}
					var_47_bool = 1;

				}
			Label_732:
				goto Label_741;
		}
		Label_741:
			goto Label_570;

		}
	}
Label_742:
	WaitForAnimEnd();
	var_216_string = var_3_string;
	if(var_216_string != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_219_bool = var_46_bool;
	if(var_219_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_1297(var_0_object, var_1_object, var_161_bool, var_162_object, var_163_float, var_164_float, var_165_bool, var_166_bool)
{
	var_167_bool = 0; var_168_bool = 0; var_169_object = Obj(); var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0); var_172_cvector = CVector(0,0,0); var_173_float = 0; var_174_object = Obj(); var_175_bool = 0; var_176_bool = 0; var_177_object = Obj(); var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); var_180_cvector = CVector(0,0,0); var_181_float = 0; var_182_object = Obj();
	var_0_object = false;
	var_1_object = var_162_object;
	var_166_bool = var_176_bool;
	
Label_1301:
	var_183_bool = 0; var_184_object = Obj();
	var_162_object = var_184_object;
	func_1437(var_183_bool, var_184_object);
	var_187_bool = var_183_bool == 0; //@nz
	if(var_187_bool != 0) {
		var_161_bool = 0;
		return 16;
	}
	@@var_162_object:GetPosition(var_178_cvector);
	GetPosition(var_179_cvector);
	var_180_cvector = var_178_cvector - var_179_cvector;
	var_181_float = var_180_cvector | var_180_cvector;
	var_188_bool = 0;
	var_188_bool = 0;
	var_190_bool = var_164_float > (int)0;
	if(var_190_bool != 0) {
		var_191_float = var_164_float * var_164_float;
		var_192_bool = var_181_float > var_191_float;
		if(var_192_bool != 0) {
			var_188_bool = 1;
		}
	}
	if(var_188_bool != 0) {
		Stop();
		var_161_bool = 0;
		return 16;
	}
	var_193_float = var_163_float * var_163_float;
	var_194_bool = var_181_float > var_193_float;
	if(var_194_bool != 0) {
		@@var_162_object:GetPFPosition(var_178_cvector);
		FindPathTo(var_182_object, var_178_cvector);
		var_195_bool = var_182_object != 0; //@nn
		if(var_195_bool != 0) {
			var_182_object = var_177_object;
			var_182_object = 0;
		}
		var_196_bool = var_177_object != 0; //@nn
		if(var_196_bool != 0) {
			var_197_bool = var_176_bool;
			if(var_197_bool == 0) goto Label_1350;
			var_176_bool = 0;
			RotatePath(var_177_object, var_175_bool);
			var_198_bool = var_175_bool == 0; //@nz
			if(var_198_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_201_string = "";
				func_1444(var_201_string);
				var_202_string = "";
				func_1446(var_202_string);
				FollowPath(var_177_object, var_165_bool, var_175_bool, var_201_string, var_202_string);
				var_203_bool = var_175_bool == 0; //@nz
				if(var_203_bool != 0) {
					var_204_object = var_0_object;
					if(var_204_object != 0) {
						var_177_object = 0;
						goto Label_1397;
					EMIT "GOTO 0x55a";
					}
				} else {
					var_177_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_175_bool);
					var_207_bool = var_175_bool == 0; //@nz
					if(var_207_bool != 0) {
						var_208_object = var_0_object;
						if(var_208_object != 0) {
							var_177_object = 0;
							goto Label_1397;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1397;
	}
			var_182_object = 0;
			goto Label_1395;

		Label_1395:
			var_177_object = 0;

		}
		goto Label_1301;
	}
Label_1397:
	var_161_bool = !var_0_object;
	return 16;
	
}


func_2324(var_179_bool, var_180_object)
{
	var_181_int = 0; var_182_int = 0;
	@@var_180_object:GetProperty("money", var_182_int);
	var_179_bool = var_182_int >= (int)10000;
	return 2;
}


func_2039(var_100_string, var_101_bool)
{
	var_104_bool = 0; var_105_float = 0; var_106_float = 0; var_107_bool = 0; var_108_float = 0; var_109_float = 0;
	lshHasAnimation(var_107_bool, var_100_string);
	var_110_bool = var_107_bool;
	if(var_110_bool != 0) {
		lshGetAnimTimes(var_100_string, var_108_float, var_109_float);
		lshPlayAnimation(var_108_float, var_109_float, var_101_bool);
	} else {
		var_112_int = "Can't find lsh animation : " + var_100_string;
		Trace(var_112_int);
	}
	return 6;
	
}


func_2072(var_70_string)
{
	var_71_bool = 0; var_72_int = 0; var_73_bool = 0; var_74_int = 0; var_75_bool = 0; var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_int = 0; var_81_bool = 0; var_82_int = 0; var_83_bool = 0; var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0);
	IsExisting3DSound(var_79_bool, var_70_string);
	var_87_bool = var_79_bool == 0; //@nz
	if(var_87_bool != 0) {
		var_80_int = 0;

	Label_2078:
		var_89_int = var_80_int + (int)1;
		var_90_int = var_70_string + var_89_int;
		IsExisting3DSound(var_81_bool, var_90_int);
		var_91_bool = var_81_bool == 0; //@nz
		if(var_91_bool != 0) {
		} else {
			var_80_int = var_80_int + (int)1;
			goto Label_2078;
		}
		var_92_bool = var_80_int == 0; //@nz
		if(var_92_bool != 0) {
			return 16;
		}
		irand(var_82_int, var_80_int);
		var_94_int = var_82_int + (int)1;
		var_70_string = var_70_string + var_94_int;
	}
	Is3DSoundLoaded(var_83_bool, var_70_string);
	var_95_bool = var_83_bool;
	if(var_95_bool != 0) {
		GetEyesHeight(var_84_float);
		GetDirection(var_85_cvector);
		var_86_cvector = var_85_cvector * (int)50;
		var_97_float = GetByIndex(var_86_cvector, 1);
		var_97_float = var_97_float + var_84_float;
		SetByIndex(var_86_cvector, 1) = var_97_float;
		PlayGlobalSound(var_70_string, var_86_cvector);
	}
	return 16;
	
}


func_1562(var_69_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_70_string = "";
	var_69_string = var_70_string;
	func_2072(var_70_string);
	PlayAnimation("all", var_69_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_69_string);
	RemoveEnvelope();
	return 0;
}


func_794(var_0_object, var_387_float, var_388_int)
{
	var_389_object = Obj(); var_390_float = 0; var_391_float = 0; var_392_object = Obj(); var_393_float = 0; var_394_float = 0;
	var_396_float = var_387_float * (float)0.8999999761581421;
	GetVictim(var_396_float, var_392_object);
	ReportAttack(var_0_object);
	var_397_bool = var_392_object == var_0_object;
	if(var_397_bool != 0) {
		var_398_float = 0; var_399_object = Obj(); var_400_int = 0;
		var_392_object = var_399_object;
		var_388_int = var_400_int;
		func_524(var_400_int);
		var_398_float = var_393_float;
		var_401_float = 0; var_402_object = Obj(); var_403_float = 0; var_404_int = 0;
		var_392_object = var_402_object;
		var_393_float = var_403_float;
		var_405_int = 0; var_406_object = Obj(); var_407_int = 0;
		var_392_object = var_406_object;
		var_388_int = var_407_int;
		func_527(var_407_int);
		var_405_int = var_404_int;
		func_1661(var_401_float, var_402_object, var_403_float, var_404_int);
		var_401_float = var_394_float;
		var_466_int = 0;
		func_1177(var_466_int);
		ReportHit(var_0_object, var_466_int, var_394_float, var_393_float);
		var_467_object = Obj(); var_468_float = 0;
		var_392_object = var_467_object;
		var_394_float = var_468_float;
		func_1184();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_2331(var_80_int)
{
	var_81_int = 0; var_82_int = 0;
	GetVariable("branch", var_82_int);
	var_85_bool = var_82_int == (int)0;
	if(var_85_bool != 0) {
		var_80_int = 1;
		return 2;
	EMIT "GOTO 0x92a";
	}
	var_87_bool = var_82_int == (int)1;
	if(var_87_bool != 0) {
		var_80_int = 2;
		return 2;
	}
	var_80_int = 3;
	return 2;
}


func_1068(var_302_bool)
{
	var_303_bool = 0;
	var_303_bool = 0;
	var_304_bool = 0;
	func_1040(var_303_bool, var_304_bool);
	if(var_304_bool != 0) {
		var_321_bool = 0;
		func_1084(var_302_bool, var_303_bool, var_321_bool);
		if(var_321_bool != 0) {
			var_303_bool = 1;
		}
	}
	if(var_303_bool != 0) {
		var_302_bool = 1;
		return 0;
	}
	var_302_bool = 0;
	return 0;
}


func_2348(var_26_int)
{
	var_27_int = 0; var_28_int = 0;
	GetVariable("branch", var_28_int);
	var_28_int = var_26_int;
	return 2;
}


func_2354(var_20_object)
{
	var_21_int = 0;
	func_2348(var_21_int);
	var_26_bool = var_21_int == (int)1;
	if(var_26_bool != 0) {
		WorkWithCorpse(var_20_object);
	} else {
		Barter(var_20_object);
	}
	return 0;
	
}


func_1843(var_20_object, var_21_int, var_22_float)
{
	var_23_cvector = CVector(0,0,0); var_24_object = Obj(); var_25_int = 0; var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_int = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj(); var_34_int = 0; var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_int = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0);
	var_41_bool = 0;
	var_41_bool = 0;
	var_42_bool = 0;
	var_42_bool = 0;
	var_43_object = var_20_object;
	if(var_43_object != 0) {
		var_45_bool = var_21_int != (int)4;
		if(var_45_bool != 0) {
			var_42_bool = 1;
		}
	}
	if(var_42_bool != 0) {
		var_47_bool = var_21_int != (int)5;
		if(var_47_bool != 0) {
			var_41_bool = 1;
		}
	}
	if(var_41_bool != 0) {
		var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
		var_50_cvector = CVector(0,0,0); var_51_object = Obj();
		var_20_object = var_51_object;
		func_1608(var_50_cvector, var_51_object);
		var_50_cvector = var_49_cvector;
		func_2119(var_48_cvector, var_49_cvector);
		var_48_cvector = var_32_cvector;
		CreateVectorVector(var_33_object);
		var_34_int = 1;

	Label_1872:
		var_62_int = "hit" + var_34_int;
		GetGeometryLocator(var_62_int, var_35_bool, var_36_cvector, var_37_cvector);
		var_63_bool = var_35_bool == 0; //@nz
		if(var_63_bool != 0) {
		} else {
			var_111_int = var_37_cvector | var_32_cvector;
			var_113_bool = var_111_int >= (float)0.7071067690849304;
			if(var_113_bool != 0) {
				@@var_33_object:add(var_36_cvector);
			}
			var_34_int = var_34_int + (int)1;
			goto Label_1872;
		}
		@@var_33_object:size(var_38_int);
		var_64_int = var_38_int;
		if(var_64_int != 0) {
			irand(var_39_int, var_38_int);
			@@var_33_object:get(var_40_cvector, var_39_int);
			var_65_object = Obj(); var_66_int = 0; var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0);
			var_20_object = var_65_object;
			var_21_int = var_66_int;
			var_22_float = var_67_float;
			var_40_cvector = var_68_cvector;
			var_69_cvector = -var_32_cvector;
			func_1911(var_67_float, var_68_cvector, var_69_cvector);
			return 18;
		}
		var_33_object = 0;
	}
	var_110_object = Obj();
	var_20_object = var_110_object;
	func_1799(var_110_object);
	return 18;
	
}


func_1594(var_429_string, var_430_int)
{
	var_432_bool = var_430_int == (int)2;
	if(var_432_bool != 0) {
		var_429_string = "fire";
		return 0;
	EMIT "GOTO 0x646";
	}
	var_434_bool = var_430_int == (int)1;
	if(var_434_bool != 0) {
		var_429_string = "bullet";
		return 0;
	}
	var_429_string = "phys";
	return 0;
}


func_1084(var_0_object, var_4_bool, var_321_bool)
{
	var_322_object = Obj(); var_323_bool = 0; var_324_float = 0; var_325_cvector = CVector(0,0,0); var_326_cvector = CVector(0,0,0); var_327_object = Obj(); var_328_bool = 0; var_329_float = 0; var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0);
	GetScene(var_327_object);
	var_328_bool = 0;
	
Label_1088:
	var_332_cvector = CVector(0,0,0); var_333_object = Obj();
	var_333_object = var_0_object;
	func_1608(var_332_cvector, var_333_object);
	var_338_int = -var_332_cvector;
	FindDirLength(var_329_float, var_338_int, var_4_bool);
	var_339_bool = var_329_float < var_4_bool;
	if(var_339_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_330_cvector);
		GetPFPosition(var_331_cvector);
		WaitForAnimEnd();
		func_1172(var_331_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_328_bool = 1;
		var_343_bool = 0;
		func_1040(var_331_cvector, var_343_bool);
		var_344_bool = var_343_bool == 0; //@nz
		if(var_344_bool != 0) {
			goto Label_1126;
		}
		goto Label_1088;
	}
Label_1126:
	var_328_bool = var_321_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_2367(var_32_string)
{
	var_33_object = Obj(); var_34_int = 0; var_35_bool = 0; var_36_object = Obj(); var_37_int = 0; var_38_bool = 0;
	CreateInvItem(var_36_object);
	@@var_36_object:SetItemName(var_32_string);
	@@var_36_object:SetProperty("Organ", (int)1);
	@@var_36_object:GetItemID(var_37_int);
	AddItem(var_38_bool, var_36_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_2113(var_84_object)
{
	var_85_object = Obj(); var_86_object = Obj();
	self(var_86_object);
	var_86_object = var_84_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_833(var_0_object, var_1_object, var_350_bool, var_351_float)
{
	var_352_int = 0; var_353_bool = 0; var_354_int = 0; var_355_string = ""; var_356_int = 0; var_357_bool = 0; var_358_int = 0; var_359_string = "";
	func_1172(var_359_string);
	irand(var_356_int, var_1_object);
	var_356_int = var_356_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_2265();
	var_368_int = "attack_begin" + var_356_int;
	PlayAnimation("all", var_368_int);
	WaitForAnimEnd();
	func_1140(var_358_int, var_359_string);
	var_384_bool = 0; var_385_object = Obj();
	var_385_object = var_0_object;
	func_1775(var_384_bool, var_385_object);
	var_386_bool = var_384_bool == 0; //@nz
	if(var_386_bool != 0) {
		StopAsync();
		var_350_bool = 0;
		return 8;
	}
	var_387_float = 0; var_388_int = 0;
	var_351_float = var_387_float;
	var_356_int = var_388_int;
	func_794(var_359_string, var_387_float, var_388_int);
	var_471_int = "attack_middle" + var_356_int;
	HasAnimation(var_357_bool, "all", var_471_int);
	var_472_bool = var_357_bool;
	if(var_472_bool != 0) {
		func_2265();
		var_475_int = "attack_middle" + var_356_int;
		PlayAnimation("all", var_475_int);
		WaitForAnimEnd();
		func_1172(var_359_string);
		var_476_bool = 0; var_477_object = Obj();
		var_477_object = var_0_object;
		func_1775(var_476_bool, var_477_object);
		var_478_bool = var_476_bool == 0; //@nz
		if(var_478_bool != 0) {
			StopAsync();
			var_350_bool = 0;
			return 8;
		}
		var_479_float = 0; var_480_int = 0;
		var_351_float = var_479_float;
		var_356_int = var_480_int;
		func_794(var_359_string, var_479_float, var_480_int);
		var_358_int = 1;

	Label_910:
		var_482_int = "attack_middle" + var_356_int;
		var_484_int = var_482_int + "_";
		var_359_string = var_484_int + var_358_int;
		HasAnimation(var_357_bool, "all", var_359_string);
		var_486_bool = var_357_bool == 0; //@nz
		if(var_486_bool != 0) {
		} else {
			func_2265();
			PlayAnimation("all", var_359_string);
			WaitForAnimEnd();
			func_1172(var_359_string);
			var_502_bool = 0; var_503_object = Obj();
			var_503_object = var_0_object;
			func_1775(var_502_bool, var_503_object);
			var_504_bool = var_502_bool == 0; //@nz
			if(var_504_bool != 0) {
				StopAsync();
				var_350_bool = 0;
				var_505_float = 0; var_506_int = 0;
				var_351_float = var_505_float;
				var_356_int = var_506_int;
				func_794(var_359_string, var_505_float, var_506_int);
				var_358_int = var_358_int + (int)1;
				goto Label_910;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_490_int = "attack_end" + var_356_int;
	PlayAnimation("all", var_490_int);
	var_491_bool = 0;
	func_1186(var_491_bool);
	if(var_491_bool != 0) {
		var_492_bool = 0; var_493_float = 0;
		func_970(var_492_bool, (float)0.75);
		StopAsync();
	}
	var_350_bool = 1;
	return 8;
	
}


func_2119(var_48_cvector, var_49_cvector)
{
	var_56_float = 0; var_57_float = 0;
	var_58_int = var_49_cvector | var_49_cvector;
	var_57_float = sqrt(var_58_int);
	var_59_float = 9.999999974752427e-07;
	var_60_bool = var_57_float < var_59_float;
	if(var_60_bool != 0) {
		var_48_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_48_cvector = var_49_cvector / var_57_float;
	return 2;
}


func_1608(var_50_cvector, var_51_object)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0);
	GetPosition(var_54_cvector);
	@@var_51_object:GetPosition(var_55_cvector);
	var_50_cvector = var_55_cvector - var_54_cvector;
	return 4;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_89_object, var_90_object)
{
	var_0_object = var_90_object;
	var_1_object = var_89_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_96_string = "";
		func_132(var_90_object, "Neutral");
		@@@var_0_object:SetMessage((int)509131);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)509132, (int)10013, (int)10012);
		@@@var_0_object:AddReply((int)534051, (int)-1, (int)35632);
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	var_120_bool = 0;
	func_2416(var_120_bool);
	if(var_120_bool != 0) {

	Label_106:
		lshWaitForAnimEnd();
		var_121_string = var_3_string;
		if(var_121_string != 0) {
		} else {
			var_122_string = "";
			var_122_string = var_2_object;
			func_2023(var_122_string);
			goto Label_106;
	}
		PlayAnimation("all", "idle");

	Label_121:
		WaitForAnimEnd();
		var_135_string = var_3_string;
		if(var_135_string != 0) {
			goto Label_131;
		}
		PlayAnimation("all", "idle");
		goto Label_121;
	}
	goto Label_131;
	
Label_131:
	return 0;
	
}


func_1615(var_156_bool, var_157_object)
{
	var_158_bool = 0; var_159_bool = 0;
	IsPlayerActor(var_157_object, var_159_bool);
	var_159_bool = var_156_bool;
	return 2;
}


func_2384()
{
	var_26_int = 0;
	func_2348(var_26_int);
	var_31_bool = var_26_int != (int)1;
	if(var_31_bool != 0) {
		return 0;
	}
	var_32_string = "";
	func_2367("liver");
	var_43_string = "";
	func_2367("kidney");
	var_44_string = "";
	func_2367("heart");
	var_45_string = "";
	func_2367("blood");
	return 0;
}


func_2129(var_28_float, var_29_cvector, var_30_cvector)
{
	var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0);
	var_32_cvector = var_30_cvector - var_29_cvector;
	var_28_float = var_32_cvector | var_32_cvector;
	return 2;
}


func_1620(var_51_bool, var_52_object, var_53_string)
{
	var_54_bool = 0; var_55_bool = 0;
	var_58_bool = IsFuncExist(var_52_object, "HasProperty", (int)2);
	var_59_bool = var_58_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_51_bool = 0;
		return 2;
	}
	@@var_52_object:HasProperty(var_53_string, var_55_bool);
	var_55_bool = var_51_bool;
	return 2;
}


func_2133(var_439_float, var_440_float, var_441_float)
{
	var_444_bool = var_440_float < var_441_float;
	if(var_444_bool != 0) {
		var_440_float = var_439_float;
	} else {
		var_441_float = var_439_float;
	}
	return 0;
	
}


func_2140(var_449_float, var_450_float, var_451_float, var_452_float)
{
	var_453_bool = var_450_float < var_451_float;
	if(var_453_bool != 0) {
		var_451_float = var_449_float;
		return 0;
	}
	var_454_bool = var_450_float > var_452_float;
	if(var_454_bool != 0) {
		var_452_float = var_449_float;
		return 0;
	}
	var_450_float = var_449_float;
	return 0;
}


func_1632(var_84_bool, var_85_object, var_86_string, var_87_float, var_88_float, var_89_float)
{
	var_90_float = 0; var_91_float = 0;
	var_92_bool = 0; var_93_object = Obj(); var_94_string = "";
	var_85_object = var_93_object;
	var_86_string = var_94_string;
	func_1620(var_92_bool, var_93_object, var_94_string);
	var_101_bool = var_92_bool == 0; //@nz
	if(var_101_bool != 0) {
		var_84_bool = 0;
		return 2;
	}
	@@var_85_object:GetProperty(var_86_string, var_91_float);
	var_102_float = 0; var_103_float = 0; var_104_float = 0; var_105_float = 0;
	var_103_float = var_91_float + var_87_float;
	var_88_float = var_104_float;
	var_89_float = var_105_float;
	func_2140(var_102_float, var_103_float, var_104_float, var_105_float);
	@@var_85_object:SetProperty(var_86_string, var_102_float);
	var_84_bool = 1;
	return 2;
}


func_2151(var_37_int, var_38_int)
{
	var_39_object = Obj(); var_40_object = Obj();
	CreateIntVector(var_40_object);
	@@var_40_object:add(var_37_int);
	@@var_40_object:add(var_38_int);
	SendWorldWndMessage((int)3, var_40_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2408(var_77_int)
{
	var_77_int = 515572;
	return 0;
}


func_1129(var_0_object, var_252_bool)
{
	var_253_bool = 0; var_254_bool = 0;
	var_257_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_257_bool != 0) {
		@@@var_0_object:IsAttacking(var_254_bool);
		var_254_bool = var_252_bool;
		return 2;
	}
	var_252_bool = 0;
	return 2;
}


func_2410(var_76_int)
{
	var_76_int = 504031;
	return 0;
}


func_2412(var_78_string)
{
	var_78_string = "ui/NPC_Citizen2.png";
	return 0;
}


func_2414(var_79_string)
{
	var_79_string = "ui/NPC_Citizen2_b.png";
	return 0;
}


func_2416(var_71_bool)
{
	var_71_bool = 0;
	return 0;
}


func_2418(var_17_object)
{
	var_18_bool = 0; var_19_bool = 0;
	AddItem(var_19_bool, "revolver_ammo", (int)0, (int)2);
	AddItem(var_19_bool, "alpha_pills", (int)0, (int)2);
	func_2384();
	var_46_object = Obj();
	var_17_object = var_46_object;
	TaskCall(5);
	func_1448(var_46_object);
	TaskReturn();
	return 2;
}


func_2163(var_24_object, var_25_int)
{
	var_26_int = 0; var_27_int = 0;
	var_28_object = Obj(); var_29_string = ""; var_30_int = 0;
	var_24_object = var_28_object;
	var_25_int = var_30_int;
	func_1654(var_28_object, "money", var_30_int);
	var_35_bool = var_25_int > (int)0;
	if(var_35_bool != 0) {
		GetInvItemByName(var_27_int, "Money");
		var_37_int = 0; var_38_int = 0;
		var_27_int = var_37_int;
		var_25_int = var_38_int;
		func_2151(var_37_int, var_38_int);
	}
	return 2;
}


func_1140(var_2_object, var_5_cvector)
{
	var_369_float = 0; var_370_int = 0; var_371_float = 0; var_372_int = 0;
	var_373_bool = var_2_object == 0; //@nz
	if(var_373_bool != 0) {
		return 4;
	}
	var_374_cvector = var_5_cvector;
	if(var_374_cvector != 0) {
		var_5_cvector = var_5_cvector + (int)-1;
		var_377_bool = var_5_cvector > (int)0;
		if(var_377_bool != 0) {
			return 4;
		}
	}
	rand(var_371_float);
	var_378_float = 0;
	func_1190(var_378_float);
	var_379_bool = var_371_float < var_378_float;
	if(var_379_bool != 0) {
		irand(var_372_int, var_2_object);
		var_372_int = var_372_int + (int)1;
		var_382_int = "attack" + var_372_int;
		Speak(var_382_int);
		var_383_int = 0;
		func_1188(var_383_int);
		var_5_cvector = var_383_int;
	}
	return 4;
}


func_1654(var_28_object, var_29_string, var_30_int)
{
	var_31_int = 0; var_32_int = 0;
	@@var_28_object:GetProperty(var_29_string, var_32_int);
	var_33_int = var_32_int + var_30_int;
	@@var_28_object:SetProperty(var_29_string, var_33_int);
	return 2;
}


func_1911(var_22_object, var_25_cvector, var_26_cvector)
{
	var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj();
	GetScene(var_29_object);
	AddActorByType(var_30_object, "scripted", var_29_object, var_25_cvector, var_26_cvector, "blood_dir.xml");
	var_33_object = Obj();
	var_22_object = var_33_object;
	func_1799(var_33_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1399(var_0_object, var_1_object, var_24_int)
{
	var_26_bool = var_24_int != (int)0;
	if(var_26_bool != 0) {
		return 0;
	}
	var_27_bool = 0; var_28_object = Obj();
	var_28_object = var_1_object;
	func_1437(var_27_bool, var_28_object);
	var_63_bool = var_27_bool == 0; //@nz
	if(var_63_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_378()
{
	return 0;
}


func_1661(var_401_float, var_402_object, var_403_float, var_404_int)
{
	var_408_int = 0; var_409_string = ""; var_410_int = 0; var_411_float = 0; var_412_float = 0; var_413_float = 0; var_414_int = 0; var_415_string = ""; var_416_int = 0; var_417_float = 0; var_418_float = 0; var_419_float = 0;
	var_420_bool = 0; var_421_object = Obj(); var_422_string = "";
	var_402_object = var_421_object;
	func_1620(var_420_bool, var_421_object, "health");
	var_423_bool = var_420_bool == 0; //@nz
	if(var_423_bool != 0) {
		var_401_float = 0.0;
		return 12;
	}
	var_424_bool = 0; var_425_object = Obj(); var_426_string = "";
	var_402_object = var_425_object;
	func_1620(var_424_bool, var_425_object, "armor");
	var_427_bool = var_424_bool == 0; //@nz
	if(var_427_bool != 0) {
		var_414_int = 0;
	} else {
			@@var_402_object:GetProperty("armor", var_414_int);
	}
	var_429_string = ""; var_430_int = 0;
	var_404_int = var_430_int;
	func_1594(var_429_string, var_430_int);
	var_415_string = "armor_" + var_429_string;
	var_435_bool = 0; var_436_object = Obj(); var_437_string = "";
	var_402_object = var_436_object;
	var_415_string = var_437_string;
	func_1620(var_435_bool, var_436_object, var_437_string);
	var_438_bool = var_435_bool == 0; //@nz
	if(var_438_bool != 0) {
		var_416_int = 0;
	} else {
		@@var_402_object:GetProperty(var_415_string, var_416_int);

	}
	var_439_float = 0; var_440_float = 0; var_441_float = 0;
	var_442_int = var_414_int + var_416_int;
	var_440_float = var_442_int / (float)100.0;
	func_2133(var_439_float, var_440_float, (float)1);
	var_439_float = var_417_float;
	@@var_402_object:GetProperty("health", var_418_float);
	var_447_int = (int)1 - var_417_float;
	var_419_float = var_403_float * var_447_int;
	var_449_float = 0; var_450_float = 0; var_451_float = 0; var_452_float = 0;
	var_450_float = var_418_float - var_419_float;
	func_2140(var_449_float, var_450_float, (float)0, (float)1);
	@@var_402_object:SetProperty("health", var_449_float);
	var_455_bool = 0; var_456_object = Obj();
	var_402_object = var_456_object;
	func_1615(var_455_bool, var_456_object);
	if(var_455_bool != 0) {
		var_457_float = 0;
		var_457_float = -var_419_float;
		func_2217(var_457_float);
	}
	var_419_float = var_401_float;
	return 12;
	
}


func_132(var_2_object, var_96_string)
{
	var_97_bool = 0;
	func_2416(var_97_bool);
	var_98_bool = var_97_bool == 0; //@nz
	if(var_98_bool != 0) {
		return 0;
	}
	var_99_bool = var_96_string == var_2_object;
	if(var_99_bool != 0) {
		return 0;
	}
	var_100_string = ""; var_101_bool = 0;
	var_96_string = var_100_string;
	var_103_bool = var_96_string == "";
	if(var_103_bool != 0) {
		var_101_bool = 0;
	} else {
		var_101_bool = 1;
	}
	func_2039(var_100_string, var_101_bool);
	var_2_object = var_96_string;
	return 0;
	
}


func_1925(var_235_object)
{
	var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); var_238_cvector = CVector(0,0,0); var_239_cvector = CVector(0,0,0); var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0);
	@@var_235_object:GetPosition(var_239_cvector);
	GetPosition(var_240_cvector);
	var_241_cvector = var_239_cvector - var_240_cvector;
	var_242_float = GetByIndex(var_241_cvector, 0);
	var_243_float = GetByIndex(var_241_cvector, 2);
	RotateAsync(var_242_float, var_243_float);
	return 6;
}


func_2182(var_73_bool, var_74_object, var_75_float)
{
	var_76_bool = var_74_object == 0; //@nz
	if(var_76_bool != 0) {
		var_73_bool = 0;
		return 0;
	}
	var_78_bool = var_75_float > (int)0;
	if(var_78_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_109_bool = var_75_float < (int)0;
		if(var_109_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_2203;
		}
		var_73_bool = 0;
		return 0;
	}
Label_2203:
	var_80_float = 0;
	var_75_float = var_80_float;
	func_2234(var_80_float);
	var_84_bool = 0; var_85_object = Obj(); var_86_string = ""; var_87_float = 0; var_88_float = 0; var_89_float = 0;
	var_74_object = var_85_object;
	var_75_float = var_87_float;
	func_1632(var_84_bool, var_85_object, "reputation", var_87_float, (float)0, (float)1);
	var_73_bool = 1;
	return 0;
	
}


func_1421(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1936(var_28_bool, var_29_object, var_30_float)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0;
	@@var_29_object:GetPosition(var_41_cvector);
	@@var_29_object:GetEyesHeight(var_40_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	var_49_float = var_49_float + var_40_float;
	SetByIndex(var_41_cvector, 1) = var_49_float;
	GetPosition(var_42_cvector);
	GetEyesHeight(var_40_float);
	var_50_float = GetByIndex(var_42_cvector, 1);
	var_50_float = var_50_float + var_40_float;
	SetByIndex(var_42_cvector, 1) = var_50_float;
	var_43_cvector = var_41_cvector - var_42_cvector;
	var_51_float = GetByIndex(var_43_cvector, 1);
	SetByIndex(var_43_cvector, 1) = (float)0;
	var_52_int = var_43_cvector | var_43_cvector;
	var_53_float = sqrt(var_52_int);
	var_43_cvector = var_43_cvector / var_53_float;
	var_44_cvector = -var_43_cvector;
	var_54_float = var_43_cvector * var_30_float;
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0);
	var_56_cvector = var_44_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2119(var_55_cvector, var_56_cvector);
	var_64_float = var_55_cvector * (int)25;
	var_65_int = var_54_float + var_64_float;
	var_45_cvector = var_65_int - CVector(0.0, 10.0, 0.0);
	var_46_cvector = var_42_cvector + var_45_cvector;
	IsOverrideActive(var_47_bool);
	var_67_bool = var_47_bool;
	if(var_67_bool != 0) {
		var_28_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_46_cvector, var_44_cvector, (bool)1);
	var_69_float = GetByIndex(var_45_cvector, 0);
	var_70_float = GetByIndex(var_45_cvector, 2);
	Rotate(var_69_float, var_70_float);
	var_71_bool = 0;
	func_2416(var_71_bool);
	if(var_71_bool != 0) {
	} else {
		HasAnimationTrack(var_48_bool, "head");
		var_73_bool = var_48_bool;
		if(var_73_bool == 0) goto Label_1999;
		LookAsyncCamera("head");
	}
Label_1999:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_28_bool = 1;
	return 18;
	
}


func_1172(var_0_object)
{
	var_125_object = Obj();
	var_125_object = var_0_object;
	func_2256(var_125_object);
	return 0;
}


func_1177(var_466_int)
{
	var_466_int = 0;
	return 0;
}


func_1179()
{
	var_258_string = "";
	func_2072("attack_stay");
	return 0;
}


func_1437(var_27_bool, var_28_object)
{
	var_29_bool = 0; var_30_object = Obj();
	var_28_object = var_30_object;
	func_1775(var_29_bool, var_30_object);
	var_29_bool = var_27_bool;
	return 0;
}


func_1184()
{
	return 0;
}


func_1186(var_491_bool)
{
	var_491_bool = 1;
	return 0;
}


func_1188(var_383_int)
{
	var_383_int = 1;
	return 0;
}


func_1444(var_201_string)
{
	var_201_string = "walk";
	return 0;
}


func_1190(var_378_float)
{
	var_378_float = 0.5;
	return 0;
}


func_1446(var_202_string)
{
	var_202_string = "run";
	return 0;
}


func_1192(var_2_object, var_132_bool, var_133_object, var_134_float, var_135_float, var_136_bool, var_137_bool)
{
	var_141_bool = 0; var_142_bool = 0; var_143_bool = 0; var_144_bool = 0;
	var_145_object = Obj();
	var_133_object = var_145_object;
	func_2256(var_145_object);
	SetTimer((int)1, (int)5);
	CanSee(var_143_bool, var_133_object);
	var_148_bool = var_143_bool;
	if(var_148_bool != 0) {
		var_2_object = true;
		var_149_object = Obj();
		var_133_object = var_149_object;
		func_2054(var_149_object);
	} else {
		var_2_object = false;
	}
	var_156_bool = 0; var_157_object = Obj();
	var_133_object = var_157_object;
	func_1615(var_156_bool, var_157_object);
	if(var_156_bool != 0) {
		var_160_object = Obj();
		func_2113(var_160_object);
		SendPlayerEnemy(var_133_object, var_160_object);
	}
	var_161_bool = 0; var_162_object = Obj(); var_163_float = 0; var_164_float = 0; var_165_bool = 0; var_166_bool = 0;
	var_133_object = var_162_object;
	var_134_float = var_163_float;
	var_135_float = var_164_float;
	var_136_bool = var_165_bool;
	var_137_bool = var_166_bool;
	func_1297(var_143_bool, var_144_bool, var_161_bool, var_162_object, var_163_float, var_164_float, var_165_bool, var_166_bool);
	var_161_bool = var_144_bool;
	var_212_object = var_2_object;
	if(var_212_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_144_bool = var_132_bool;
	return 4;
	
}


func_2217(var_457_float)
{
	var_458_object = Obj(); var_459_object = Obj();
	CreateFloatVector(var_459_object);
	@@var_459_object:add(var_457_float);
	var_461_bool = var_457_float < (int)0;
	if(var_461_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_459_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1448(var_46_object)
{
	var_47_object = Obj();
	var_46_object = var_47_object;
	func_1471(var_47_object);
	SetRTEnvelope((int)50, (int)40);
	
Label_1457:
	Hold();
	goto Label_1457;
}
EMIT "Return(); Pop(0)";


func_2234(var_80_float)
{
	var_81_object = Obj(); var_82_object = Obj();
	CreateFloatVector(var_82_object);
	@@var_82_object:add(var_80_float);
	SendWorldWndMessage((int)16, var_82_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1471(var_47_object)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_string = ""; var_53_object = Obj(); var_54_bool = 0; var_55_bool = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_string = ""; var_63_object = Obj(); var_64_bool = 0; var_65_bool = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0);
	var_68_bool = var_47_object == 0; //@ne
	if(var_68_bool != 0) {
		var_69_string = "";
		func_1562("fdie");
	} else {
		@@var_47_object:GetPosition(var_58_cvector);
		GetPosition(var_59_cvector);
		GetDirection(var_60_cvector);
		var_61_cvector = var_59_cvector - var_58_cvector;
		var_101_float = GetByIndex(var_61_cvector, 0);
		var_102_float = GetByIndex(var_60_cvector, 0);
		var_103_float = var_101_float * var_102_float;
		var_104_float = GetByIndex(var_61_cvector, 2);
		var_105_float = GetByIndex(var_60_cvector, 2);
		var_106_float = var_104_float * var_105_float;
		var_107_int = var_103_float + var_106_float;
		var_109_bool = var_107_int >= (int)0;
		if(var_109_bool != 0) {
			var_62_string = "fdie";
		} else {
				var_62_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_47_object = var_63_object;
		var_112_bool = IsFuncExist(var_47_object, "GetScriptProperty", (int)2);
		if(var_112_bool != 0) {
			@@var_47_object:HasScriptProperty(var_64_bool, "Owner");
			var_114_bool = var_64_bool;
			if(var_114_bool != 0) {
				@@var_47_object:GetScriptProperty(var_63_object, "Owner");
				var_116_bool = var_63_object == 0; //@ne
				if(var_116_bool != 0) {
					var_47_object = var_63_object;
				}
			}
		}
		var_119_bool = IsFuncExist(var_63_object, "@GetEyesHeight", (int)1);
		if(var_119_bool != 0) {
			@@var_63_object:GetEyesHeight(var_66_float);
			var_67_cvector = CVector(0.0, 0.0, 0.0);
			var_120_float = GetByIndex(var_67_cvector, 1);
			var_66_float = var_120_float;
			SetByIndex(var_67_cvector, 1) = var_120_float;
			LookAsync(var_47_object, "head", var_67_cvector);
			var_65_bool = 1;
		} else {
			var_65_bool = 0;

		}
		var_122_string = "";
		var_62_string = var_122_string;
		func_2072(var_122_string);
		PlayAnimation("all", var_62_string);
		WaitForAnimEnd();
		var_124_bool = var_65_bool;
		if(var_124_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_62_string);
		RemoveEnvelope();
		var_63_object = 0;
	}
	return 20;
	
}


func_2244(var_20_bool, var_21_string, var_22_string)
{
	var_23_object = Obj(); var_24_object = Obj();
	FindActor(var_24_object, var_21_string);
	var_25_bool = var_24_object == 0; //@ne
	if(var_25_bool != 0) {
		var_20_bool = 0;
		return 2;
	}
	Trigger(var_24_object, var_22_string);
	var_20_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1734(var_44_bool, var_45_object)
{
	var_46_bool = 0; var_47_bool = 0;
	@@var_45_object:IsDead(var_47_bool);
	var_47_bool = var_44_bool;
	return 2;
}


func_970(var_492_bool, var_493_float)
{
	var_494_float = 0; var_495_bool = 0; var_496_float = 0; var_497_bool = 0;
	rand(var_496_float);
	var_498_bool = var_496_float < var_493_float;
	if(var_498_bool != 0) {

	Label_975:
		IsAnimationPlaying(var_497_bool);
		var_499_bool = var_497_bool == 0; //@nz
		if(var_499_bool != 0) {
		} else {
			var_500_bool = 0;
			func_1068(var_500_bool);
			if(var_500_bool != 0) {
				var_492_bool = 1;
				sync();
				goto Label_975;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1172(var_497_bool);
	}
	goto Label_995;
	
Label_995:
	var_492_bool = 0;
	return 4;
	
}


func_1739(var_33_bool, var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj();
	var_39_bool = var_34_object == 0; //@ne
	if(var_39_bool != 0) {
		var_33_bool = 0;
		return 4;
	}
	var_40_bool = 0;
	var_40_bool = 0;
	var_43_bool = IsFuncExist(var_34_object, "IsDead", (int)1);
	if(var_43_bool != 0) {
		var_44_bool = 0; var_45_object = Obj();
		var_34_object = var_45_object;
		func_1734(var_44_bool, var_45_object);
		if(var_44_bool != 0) {
			var_40_bool = 1;
		}
	}
	if(var_40_bool != 0) {
		var_33_bool = 0;
		return 4;
	}
	GetScene(var_37_object);
	var_48_bool = var_37_object == 0; //@ne
	if(var_48_bool != 0) {
		var_33_bool = 0;
		return 4;
	}
	@@var_34_object:GetScene(var_38_object);
	var_49_bool = var_37_object != var_38_object;
	if(var_49_bool != 0) {
		var_33_bool = 0;
		return 4;
	}
	var_33_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2256(var_19_object)
{
	var_20_bool = 0; var_21_bool = 0;
	IsPlayerActor(var_19_object, var_21_bool);
	var_22_bool = var_21_bool;
	if(var_22_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_2005()
{
	var_140_bool = 0; var_141_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_143_bool = 0;
	func_2416(var_143_bool);
	if(var_143_bool != 0) {
	} else {
		HasAnimationTrack(var_141_bool, "head");
		var_145_bool = var_141_bool;
		if(var_145_bool == 0) goto Label_2022;
		UnlookAsync("head");
	}
Label_2022:
	return 2;
	
}


func_2265()
{
	var_362_object = Obj(); var_363_object = Obj();
	GetScene(var_363_object);
	var_365_object = Obj();
	func_2113(var_365_object);
	BroadcastMessage("battle", var_365_object, var_363_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_503()
{
	StopGroup0();
	Stop();
	return 0;
}


func_2276()
{
	SetVariable("d3q01", (int)8);
	var_68_bool = 0; var_69_string = ""; var_70_string = "";
	func_2244(var_68_bool, "quest_d3_01", "gpatrol_attack");
	return 0;
}


func_997(var_0_object, var_289_bool, var_290_float)
{
	var_291_bool = 0; var_292_cvector = CVector(0,0,0); var_293_cvector = CVector(0,0,0); var_294_cvector = CVector(0,0,0); var_295_float = 0; var_296_bool = 0; var_297_cvector = CVector(0,0,0); var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_float = 0;
	
Label_998:
	IsAnimationPlaying(var_296_bool);
	var_301_bool = var_296_bool == 0; //@nz
	if(var_301_bool != 0) {
	} else {
		var_302_bool = 0;
		func_1068(var_302_bool);
		if(var_302_bool != 0) {
			var_289_bool = 1;
			return 10;
		}
		var_345_bool = 0; var_346_object = Obj();
		var_346_object = var_0_object;
		func_1775(var_345_bool, var_346_object);
		var_347_bool = var_345_bool == 0; //@nz
		if(var_347_bool != 0) {
			var_289_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_297_cvector);
		GetPFPosition(var_298_cvector);
		var_299_cvector = var_297_cvector - var_298_cvector;
		var_300_float = var_299_cvector | var_299_cvector;
		var_348_float = var_290_float * var_290_float;
		var_349_bool = var_300_float < var_348_float;
		if(var_349_bool != 0) {
			var_350_bool = 0; var_351_float = 0;
			var_290_float = var_351_float;
			func_833(var_299_cvector, var_300_float, var_350_bool, var_351_float);
			var_289_bool = 1;
			sync();
			goto Label_998;
		}
		return 10;
	}
	func_1172(var_300_float);
	var_289_bool = 0;
	return 10;
	
}


func_1255(var_2_object)
{
	KillTimer((int)1);
	var_18_object = var_2_object;
	if(var_18_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_1421(var_16_object);
	return 0;
}


func_2023(var_122_string)
{
	var_123_bool = 0; var_124_float = 0; var_125_float = 0; var_126_bool = 0; var_127_float = 0; var_128_float = 0;
	lshHasAnimation(var_126_bool, var_122_string);
	var_129_bool = var_126_bool;
	if(var_129_bool != 0) {
		lshGetAnimTimes(var_122_string, var_127_float, var_128_float);
		lshPlayAnimation(var_127_float, var_128_float, (bool)0);
	} else {
		var_132_int = "Can't find lsh animation : " + var_122_string;
		Trace(var_132_int);
	}
	return 6;
	
}


func_2287(var_22_object)
{
	var_24_object = Obj(); var_25_int = 0;
	var_22_object = var_24_object;
	func_2163(var_24_object, (int)-10000);
	return 0;
}


func_1775(var_29_bool, var_30_object)
{
	var_31_int = 0; var_32_int = 0;
	var_33_bool = 0; var_34_object = Obj();
	var_30_object = var_34_object;
	func_1739(var_33_bool, var_34_object);
	var_50_bool = var_33_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_29_bool = 0;
		return 2;
	}
	var_51_bool = 0; var_52_object = Obj(); var_53_string = "";
	var_30_object = var_52_object;
	func_1620(var_51_bool, var_52_object, "noaccess");
	var_60_bool = var_51_bool == 0; //@nz
	if(var_60_bool != 0) {
		var_29_bool = 1;
		return 2;
	}
	@@var_30_object:GetProperty("noaccess", var_32_int);
	var_29_bool = var_32_int == (int)0;
	return 2;
}


func_2294()
{
	var_44_bool = 0; var_45_string = ""; var_46_string = "";
	func_2244(var_44_bool, "quest_d3_01", "gpatrol_talk");
	return 0;
}


func_759(var_1_object, var_2_object, var_4_bool)
{
	var_54_bool = 0; var_55_bool = 0; var_56_cvector = CVector(0,0,0); var_57_bool = 0; var_58_bool = 0; var_59_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_761:
	var_63_int = var_1_object + (int)1;
	var_64_int = "attack_begin" + var_63_int;
	HasAnimation(var_57_bool, "all", var_64_int);
	var_65_bool = var_57_bool == 0; //@nz
	if(var_65_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_761;
	}
	var_2_object = 0;
	
Label_775:
	var_68_int = var_2_object + (int)1;
	var_69_int = "attack" + var_68_int;
	IsExisting3DSound(var_58_bool, var_69_int);
	var_70_bool = var_58_bool == 0; //@nz
	if(var_70_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_775;

	}
	GetAnimationOffset(var_59_cvector, "all", "bjump");
	var_73_float = GetByIndex(var_59_cvector, 2);
	var_4_bool = -var_73_float;
	return 6;
	
}


func_508()
{
	return 0;
}


func_2301()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


