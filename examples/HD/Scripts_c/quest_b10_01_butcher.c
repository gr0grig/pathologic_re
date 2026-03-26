// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,IsPlayerActor/2,GetPFPosition/1,GetDirection/1,irand/2,Sleep/2,FindPathTo/2,RotatePath/2,FollowPath/3,Rotate/3,WaitForAnimEnd/1,Sleep/1,PlayGlobalMusic/1,SendPlayerEnemy/2,CanReachByPF/2,StopAsync/0,rand/1,Face/1,SetSpeed/1,Stop/0,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,GetScene/1,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,UnlookAsync/1,KillTimer/1,GetPosition/1,FollowPath/5,RequestClearPath/1,SetRTEnvelope/2,Hold/0,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,FindActor/2,Trigger/2,BroadcastMessage/3,GetVariable/2,WorkWithCorpse/1,Barter/1,CreateInvItem/1,AddItem/4,GetProperty/2,SignalDeath/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:head|A:GetPosition|W:walk|W:run|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:battle|W:branch|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:ui/NPC_Citizen1.png|W:ui/NPC_Citizen1_b.png|W:quest_b10_01|W:butcher_dead|A:RemoveStationaryActor
// @GLOBALS: 0:object:
// @RUN_OP: 0x128
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9a vars=int,int
// @TASK_2: vars=cvector,cvector params=0
// @EVENT_0: op=0x10a vars=object
// @EVENT_17: op=0x11c vars=object
// @TASK_3: vars=object,int,int,bool,float,int params=1
// @TASK_4: vars=bool,object,bool params=6
// @EVENT_7: op=0x452 vars=int
// @EVENT_1: op=0x46d vars=object
// @EVENT_2: op=0x47c vars=object
// @EVENT_10: op=0x502 vars=object
// @EVENT_41: op=0x50d vars=object
// @TASK_5: vars= params=1
// @EVENT_0: op=0x530 vars=object
// @EVENT_22: op=0x5af vars=object,int,float,float
// @EVENT_16: op=0x5b1 vars=object,string
// @EVENT_41: op=0x5b3 vars=object
// @STANDALONE_EVENT_22: op=0x865 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x86d vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x877 vars=object,string
// @STANDALONE_EVENT_41: op=0x884 vars=object
// @PE: 0x4a,0x84,0x9a,0x17d,0x185,0x188,0x419,0x452,0x46d,0x47c,0x4f0,0x502,0x50d,0x516,0x521,0x595,0x5af,0x5b1,0x5b3,0x5b5,0x7b3,0x7ba,0x80d,0x865,0x86d,0x884

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_cvector, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	if((int)1 != 0) {
		func_1903();
		var_21_bool = var_16_object == (int)23053;
		if(var_21_bool != 0) {
			var_22_string = "";
			func_132(var_17_bool, "Neutral");
			@@@var_0_object:SetMessage((int)521881);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522417, (int)23585, (int)23584);
			@@@var_0_object:AddReply((int)521882, (int)-1, (int)23054);
			return 0;
		}
		var_47_bool = var_16_object == (int)23585;
		if(var_47_bool != 0) {
			var_48_string = "";
			func_132(var_17_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522418);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522419, (int)-1, (int)23586);
			@@@var_0_object:AddReply((int)522420, (int)23589, (int)23587);
			return 0;
		}
		var_57_bool = var_16_object == (int)23589;
		if(var_57_bool != 0) {
			var_58_string = "";
			func_132(var_17_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522422);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522423, (int)23588, (int)23590);
			@@@var_0_object:AddReply((int)522424, (int)-1, (int)23591);
			return 0;
		}
		var_67_bool = var_16_object == (int)23588;
		if(var_67_bool != 0) {
			var_68_string = "";
			func_132(var_17_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522421);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522426, (int)-1, (int)23593);
			@@@var_0_object:AddReply((int)522425, (int)-1, (int)23592);
			return 0;
		}
		var_3_string = true;
		var_76_bool = 0;
		func_2123(var_76_bool);
		if(var_76_bool != 0) {
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
	var_17_bool = 0; var_18_bool = 0;
	var_19_int = 0; var_20_object = Obj();
	var_16_bool = var_20_object;
	TaskCall(0);
	func_0(var_21_object, var_19_int, var_20_object);
	TaskReturn();
	IsPlayerActor(var_16_bool, var_18_bool);
	var_149_bool = var_18_bool;
	if(var_149_bool != 0) {
		var_150_object = Obj();
		var_16_bool = var_150_object;
		TaskCall(3);
		func_381(var_150_object);
		TaskReturn();
	}
	return 2;
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_bool = 0;
	IsPlayerActor(var_16_bool, var_18_bool);
	var_19_bool = var_18_bool;
	if(var_19_bool != 0) {
		var_20_object = Obj();
		var_16_bool = var_20_object;
		TaskCall(3);
		func_381(var_20_object);
		TaskReturn();
	}
	return 2;
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_int)
{
	var_18_bool = var_16_int == (int)1;
	if(var_18_bool != 0) {
		var_19_object = Obj();
		var_19_object = var_1_object;
		func_2018(var_19_object);
	} else {
		var_24_int = 0;
		var_16_int = var_24_int;
		func_1264(var_15_bool, var_16_int, var_24_int);
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
		func_1892(var_20_object);
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
	func_1120(var_16_object);
	var_16_object = Obj();
	func_2180();
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
		func_2061(var_20_object);
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
	func_1681(var_20_object, var_21_int, var_22_float);
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
	func_1749(var_24_float, var_25_cvector, var_26_cvector);
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
	func_2125(var_17_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_int = 0; var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_int = 0; var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_object = Obj();
	GetPFPosition(var_1_object);
	GetDirection(var_0_object);
	
Label_301:
	func_380();
	irand(var_20_int, (int)10);
	var_26_int = var_20_int + (int)5;
	Sleep(var_26_int, var_21_bool);
	var_27_bool = var_21_bool;
	if(var_27_bool != 0) {
		func_265();
	} else {
		func_380();
		GetPFPosition(var_22_cvector);
		var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0);
		var_29_cvector = var_1_object;
		var_22_cvector = var_30_cvector;
		func_1967(var_28_float, var_29_cvector, var_30_cvector);
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
						goto Label_377;
					}
					var_39_float = GetByIndex(var_0_object, 0);
					var_40_float = GetByIndex(var_0_object, 2);
					Rotate(var_39_float, var_40_float, var_21_bool);
					var_41_bool = var_21_bool == 0; //@nz
					if(var_41_bool != 0) {
						goto Label_377;
					}
					WaitForAnimEnd(var_21_bool);
					var_42_bool = var_21_bool == 0; //@nz
					if(var_42_bool != 0) {
						goto Label_377;
					}
					goto Label_378;
				EMIT "GOTO 0x16a";
			}
				Sleep((int)1);
				var_23_object = 0;
				goto Label_377;
		}
			var_44_float = GetByIndex(var_0_object, 0);
			var_45_float = GetByIndex(var_0_object, 2);
			Rotate(var_44_float, var_45_float, var_21_bool);
			var_46_bool = var_21_bool == 0; //@nz
			if(var_46_bool != 0) {
				goto Label_377;
			}
			WaitForAnimEnd(var_21_bool);
			var_47_bool = var_21_bool == 0; //@nz
			if(var_47_bool != 0) {
				goto Label_377;
			}
			goto Label_378;
		}
	Label_377:
		goto Label_317;
	}
Label_378:
	goto Label_301;
	
}
EMIT "Return(); Pop(8)";


func_0(var_0_object, var_19_int, var_20_object)
{
	var_22_object = Obj(); var_23_bool = 0; var_24_int = 0; var_25_bool = 0; var_26_object = Obj(); var_27_bool = 0; var_28_int = 0; var_29_bool = 0;
	var_0_object = var_20_object;
	var_30_bool = 0; var_31_object = Obj(); var_32_float = 0;
	var_20_object = var_31_object;
	func_1774(var_30_bool, var_31_object, (float)70.0);
	var_77_bool = var_30_bool == 0; //@nz
	if(var_77_bool != 0) {
		var_19_int = -2;
		return 8;
	}
	CreateDialog(var_26_object);
	var_78_int = 0;
	func_2117(var_78_int);
	@@var_26_object:SetNPCName(var_78_int);
	var_79_int = 0;
	func_2115(var_79_int);
	@@var_26_object:SetNPCDescription(var_79_int);
	var_80_string = "";
	func_2119(var_80_string);
	@@var_26_object:SetPhoto(var_80_string);
	var_81_string = "";
	func_2121(var_81_string);
	@@var_26_object:SetPhoto2(var_81_string);
	var_82_int = 0;
	func_2038(var_82_int);
	@@var_26_object:SetPlayerName(var_82_int);
	IsOverrideActive(var_27_bool);
	var_90_bool = var_27_bool;
	if(var_90_bool != 0) {
		var_19_int = -2;
		return 8;
	}
	DoDialog(var_26_object);
	var_91_object = Obj(); var_92_object = Obj();
	var_20_object = var_91_object;
	var_26_object = var_92_object;
	TaskCall(1);
	func_74(var_93_object, var_94_object, var_95_string, var_96_bool, var_91_object, var_92_object);
	TaskReturn();
	@@var_26_object:IsDialogEnd(var_29_bool);
	
Label_56:
	var_140_bool = var_29_bool == 0; //@nz
	if(var_140_bool != 0) {
		sync();
		@@var_26_object:IsDialogEnd(var_29_bool);
		goto Label_56;
	}
	var_20_object = Obj();
	func_1843();
	StopDialog(var_26_object);
	@@var_26_object:GetReturnValue((int)-1);
	var_28_int = var_19_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1286(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2055(var_26_int)
{
	var_27_int = 0; var_28_int = 0;
	GetVariable("branch", var_28_int);
	var_28_int = var_26_int;
	return 2;
}


func_265()
{
	return 0;
}


func_2061(var_20_object)
{
	var_21_int = 0;
	func_2055(var_21_int);
	var_26_bool = var_21_int == (int)1;
	if(var_26_bool != 0) {
		WorkWithCorpse(var_20_object);
	} else {
		Barter(var_20_object);
	}
	return 0;
	
}


func_1037(var_0_object)
{
	var_123_object = Obj();
	var_123_object = var_0_object;
	func_2018(var_123_object);
	return 0;
}


func_1042(var_464_int)
{
	var_464_int = 0;
	return 0;
}


func_1044()
{
	var_256_string = "";
	func_1910("attack_stay");
	return 0;
}


func_1302(var_27_bool, var_28_object)
{
	var_29_bool = 0; var_30_object = Obj();
	var_28_object = var_30_object;
	func_1613(var_29_bool, var_30_object);
	var_29_bool = var_27_bool;
	return 0;
}


func_1049()
{
	return 0;
}


func_2074(var_32_string)
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


func_1051(var_489_bool)
{
	var_489_bool = 1;
	return 0;
}


func_1053(var_381_int)
{
	var_381_int = 1;
	return 0;
}


func_1309(var_199_string)
{
	var_199_string = "walk";
	return 0;
}


func_1055(var_376_float)
{
	var_376_float = 0.5;
	return 0;
}


func_1311(var_200_string)
{
	var_200_string = "run";
	return 0;
}


func_1057(var_2_object, var_130_bool, var_131_object, var_132_float, var_133_float, var_134_bool, var_135_bool)
{
	var_139_bool = 0; var_140_bool = 0; var_141_bool = 0; var_142_bool = 0;
	var_143_object = Obj();
	var_131_object = var_143_object;
	func_2018(var_143_object);
	SetTimer((int)1, (int)5);
	CanSee(var_141_bool, var_131_object);
	var_146_bool = var_141_bool;
	if(var_146_bool != 0) {
		var_2_object = true;
		var_147_object = Obj();
		var_131_object = var_147_object;
		func_1892(var_147_object);
	} else {
		var_2_object = false;
	}
	var_154_bool = 0; var_155_object = Obj();
	var_131_object = var_155_object;
	func_1482(var_154_bool, var_155_object);
	if(var_154_bool != 0) {
		var_158_object = Obj();
		func_1951(var_158_object);
		SendPlayerEnemy(var_131_object, var_158_object);
	}
	var_159_bool = 0; var_160_object = Obj(); var_161_float = 0; var_162_float = 0; var_163_bool = 0; var_164_bool = 0;
	var_131_object = var_160_object;
	var_132_float = var_161_float;
	var_133_float = var_162_float;
	var_134_bool = var_163_bool;
	var_135_bool = var_164_bool;
	func_1162(var_141_bool, var_142_bool, var_159_bool, var_160_object, var_161_float, var_162_float, var_163_bool, var_164_bool);
	var_159_bool = var_142_bool;
	var_210_object = var_2_object;
	if(var_210_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_142_bool = var_130_bool;
	return 4;
	
}


func_1313(var_49_object)
{
	EventDisable(0);
	var_50_object = Obj();
	var_49_object = var_50_object;
	func_1338(var_50_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_1324:
	Hold();
	goto Label_1324;
}
EMIT "Return(); Pop(0)";


func_1572(var_44_bool, var_45_object)
{
	var_46_bool = 0; var_47_bool = 0;
	@@var_45_object:IsDead(var_47_bool);
	var_47_bool = var_44_bool;
	return 2;
}


func_1577(var_33_bool, var_34_object)
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
		func_1572(var_44_bool, var_45_object);
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


func_2091()
{
	var_26_int = 0;
	func_2055(var_26_int);
	var_31_bool = var_26_int != (int)1;
	if(var_31_bool != 0) {
		return 0;
	}
	var_32_string = "";
	func_2074("liver");
	var_43_string = "";
	func_2074("kidney");
	var_44_string = "";
	func_2074("heart");
	var_45_string = "";
	func_2074("blood");
	return 0;
}


func_1843()
{
	var_142_bool = 0; var_143_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_145_bool = 0;
	func_2123(var_145_bool);
	if(var_145_bool != 0) {
	} else {
		HasAnimationTrack(var_143_bool, "head");
		var_147_bool = var_143_bool;
		if(var_147_bool == 0) goto Label_1860;
		UnlookAsync("head");
	}
Label_1860:
	return 2;
	
}


func_1338(var_50_object)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_string = ""; var_56_object = Obj(); var_57_bool = 0; var_58_bool = 0; var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_string = ""; var_66_object = Obj(); var_67_bool = 0; var_68_bool = 0; var_69_float = 0; var_70_cvector = CVector(0,0,0);
	var_71_bool = var_50_object == 0; //@ne
	if(var_71_bool != 0) {
		var_72_string = "";
		func_1429("fdie");
	} else {
		@@var_50_object:GetPosition(var_61_cvector);
		GetPosition(var_62_cvector);
		GetDirection(var_63_cvector);
		var_64_cvector = var_62_cvector - var_61_cvector;
		var_104_float = GetByIndex(var_64_cvector, 0);
		var_105_float = GetByIndex(var_63_cvector, 0);
		var_106_float = var_104_float * var_105_float;
		var_107_float = GetByIndex(var_64_cvector, 2);
		var_108_float = GetByIndex(var_63_cvector, 2);
		var_109_float = var_107_float * var_108_float;
		var_110_int = var_106_float + var_109_float;
		var_112_bool = var_110_int >= (int)0;
		if(var_112_bool != 0) {
			var_65_string = "fdie";
		} else {
				var_65_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_50_object = var_66_object;
		var_115_bool = IsFuncExist(var_50_object, "GetScriptProperty", (int)2);
		if(var_115_bool != 0) {
			@@var_50_object:HasScriptProperty(var_67_bool, "Owner");
			var_117_bool = var_67_bool;
			if(var_117_bool != 0) {
				@@var_50_object:GetScriptProperty(var_66_object, "Owner");
				var_119_bool = var_66_object == 0; //@ne
				if(var_119_bool != 0) {
					var_50_object = var_66_object;
				}
			}
		}
		var_122_bool = IsFuncExist(var_66_object, "@GetEyesHeight", (int)1);
		if(var_122_bool != 0) {
			@@var_66_object:GetEyesHeight(var_69_float);
			var_70_cvector = CVector(0.0, 0.0, 0.0);
			var_123_float = GetByIndex(var_70_cvector, 1);
			var_69_float = var_123_float;
			SetByIndex(var_70_cvector, 1) = var_123_float;
			LookAsync(var_50_object, "head", var_70_cvector);
			var_68_bool = 1;
		} else {
			var_68_bool = 0;

		}
		var_125_string = "";
		var_65_string = var_125_string;
		func_1910(var_125_string);
		PlayAnimation("all", var_65_string);
		WaitForAnimEnd();
		var_127_bool = var_68_bool;
		if(var_127_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_65_string);
		RemoveEnvelope();
		var_66_object = 0;
	}
	return 20;
	
}


func_2115(var_79_int)
{
	var_79_int = 515562;
	return 0;
}


func_835(var_490_bool, var_491_float)
{
	var_492_float = 0; var_493_bool = 0; var_494_float = 0; var_495_bool = 0;
	rand(var_494_float);
	var_496_bool = var_494_float < var_491_float;
	if(var_496_bool != 0) {

	Label_840:
		IsAnimationPlaying(var_495_bool);
		var_497_bool = var_495_bool == 0; //@nz
		if(var_497_bool != 0) {
		} else {
			var_498_bool = 0;
			func_933(var_498_bool);
			if(var_498_bool != 0) {
				var_490_bool = 1;
				sync();
				goto Label_840;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1037(var_495_bool);
	}
	goto Label_860;
	
Label_860:
	var_490_bool = 0;
	return 4;
	
}


func_2117(var_78_int)
{
	var_78_int = 503347;
	return 0;
}


func_1861(var_124_string)
{
	var_125_bool = 0; var_126_float = 0; var_127_float = 0; var_128_bool = 0; var_129_float = 0; var_130_float = 0;
	lshHasAnimation(var_128_bool, var_124_string);
	var_131_bool = var_128_bool;
	if(var_131_bool != 0) {
		lshGetAnimTimes(var_124_string, var_129_float, var_130_float);
		lshPlayAnimation(var_129_float, var_130_float, (bool)0);
	} else {
		var_134_int = "Can't find lsh animation : " + var_124_string;
		Trace(var_134_int);
	}
	return 6;
	
}


func_2119(var_80_string)
{
	var_80_string = "ui/NPC_Citizen1.png";
	return 0;
}


func_2121(var_81_string)
{
	var_81_string = "ui/NPC_Citizen1_b.png";
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_91_object, var_92_object)
{
	var_0_object = var_92_object;
	var_1_object = var_91_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_98_string = "";
		func_132(var_92_object, "Neutral");
		@@@var_0_object:SetMessage((int)521881);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)522417, (int)23585, (int)23584);
		@@@var_0_object:AddReply((int)521882, (int)-1, (int)23054);
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	var_122_bool = 0;
	func_2123(var_122_bool);
	if(var_122_bool != 0) {

	Label_106:
		lshWaitForAnimEnd();
		var_123_string = var_3_string;
		if(var_123_string != 0) {
		} else {
			var_124_string = "";
			var_124_string = var_2_object;
			func_1861(var_124_string);
			goto Label_106;
	}
		PlayAnimation("all", "idle");

	Label_121:
		WaitForAnimEnd();
		var_137_string = var_3_string;
		if(var_137_string != 0) {
			goto Label_131;
		}
		PlayAnimation("all", "idle");
		goto Label_121;
	}
	goto Label_131;
	
Label_131:
	return 0;
	
}


func_2123(var_73_bool)
{
	var_73_bool = 0;
	return 0;
}


func_1613(var_29_bool, var_30_object)
{
	var_31_int = 0; var_32_int = 0;
	var_33_bool = 0; var_34_object = Obj();
	var_30_object = var_34_object;
	func_1577(var_33_bool, var_34_object);
	var_50_bool = var_33_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_29_bool = 0;
		return 2;
	}
	var_51_bool = 0; var_52_object = Obj(); var_53_string = "";
	var_30_object = var_52_object;
	func_1487(var_51_bool, var_52_object, "noaccess");
	var_60_bool = var_51_bool == 0; //@nz
	if(var_60_bool != 0) {
		var_29_bool = 1;
		return 2;
	}
	@@var_30_object:GetProperty("noaccess", var_32_int);
	var_29_bool = var_32_int == (int)0;
	return 2;
}


func_2125(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj();
	var_20_bool = 0; var_21_string = ""; var_22_string = "";
	func_2006(var_20_bool, "quest_b10_01", "butcher_dead");
	func_2091();
	GetScene(var_19_object);
	var_46_object = Obj();
	func_1951(var_46_object);
	@@var_19_object:RemoveStationaryActor(var_46_object);
	var_49_object = Obj();
	var_17_object = var_49_object;
	TaskCall(5);
	func_1313(var_49_object);
	TaskReturn();
	return 2;
}
EMIT "Stack[-1] = 0";


func_1877(var_102_string, var_103_bool)
{
	var_106_bool = 0; var_107_float = 0; var_108_float = 0; var_109_bool = 0; var_110_float = 0; var_111_float = 0;
	lshHasAnimation(var_109_bool, var_102_string);
	var_112_bool = var_109_bool;
	if(var_112_bool != 0) {
		lshGetAnimTimes(var_102_string, var_110_float, var_111_float);
		lshPlayAnimation(var_110_float, var_111_float, var_103_bool);
	} else {
		var_114_int = "Can't find lsh animation : " + var_102_string;
		Trace(var_114_int);
	}
	return 6;
	
}


func_862(var_0_object, var_287_bool, var_288_float)
{
	var_289_bool = 0; var_290_cvector = CVector(0,0,0); var_291_cvector = CVector(0,0,0); var_292_cvector = CVector(0,0,0); var_293_float = 0; var_294_bool = 0; var_295_cvector = CVector(0,0,0); var_296_cvector = CVector(0,0,0); var_297_cvector = CVector(0,0,0); var_298_float = 0;
	
Label_863:
	IsAnimationPlaying(var_294_bool);
	var_299_bool = var_294_bool == 0; //@nz
	if(var_299_bool != 0) {
	} else {
		var_300_bool = 0;
		func_933(var_300_bool);
		if(var_300_bool != 0) {
			var_287_bool = 1;
			return 10;
		}
		var_343_bool = 0; var_344_object = Obj();
		var_344_object = var_0_object;
		func_1613(var_343_bool, var_344_object);
		var_345_bool = var_343_bool == 0; //@nz
		if(var_345_bool != 0) {
			var_287_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_295_cvector);
		GetPFPosition(var_296_cvector);
		var_297_cvector = var_295_cvector - var_296_cvector;
		var_298_float = var_297_cvector | var_297_cvector;
		var_346_float = var_288_float * var_288_float;
		var_347_bool = var_298_float < var_346_float;
		if(var_347_bool != 0) {
			var_348_bool = 0; var_349_float = 0;
			var_288_float = var_349_float;
			func_698(var_297_cvector, var_298_float, var_348_bool, var_349_float);
			var_287_bool = 1;
			sync();
			goto Label_863;
		}
		return 10;
	}
	func_1037(var_298_float);
	var_287_bool = 0;
	return 10;
	
}


func_1120(var_2_object)
{
	KillTimer((int)1);
	var_18_object = var_2_object;
	if(var_18_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_1286(var_16_object);
	return 0;
}


func_1892(var_20_object)
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


func_1637(var_33_object)
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


func_1903()
{
	var_19_bool = 0;
	func_2123(var_19_bool);
	if(var_19_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_624(var_1_object, var_2_object, var_4_bool)
{
	var_52_bool = 0; var_53_bool = 0; var_54_cvector = CVector(0,0,0); var_55_bool = 0; var_56_bool = 0; var_57_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_626:
	var_61_int = var_1_object + (int)1;
	var_62_int = "attack_begin" + var_61_int;
	HasAnimation(var_55_bool, "all", var_62_int);
	var_63_bool = var_55_bool == 0; //@nz
	if(var_63_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_626;
	}
	var_2_object = 0;
	
Label_640:
	var_66_int = var_2_object + (int)1;
	var_67_int = "attack" + var_66_int;
	IsExisting3DSound(var_56_bool, var_67_int);
	var_68_bool = var_56_bool == 0; //@nz
	if(var_68_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_640;

	}
	GetAnimationOffset(var_57_cvector, "all", "bjump");
	var_71_float = GetByIndex(var_57_cvector, 2);
	var_4_bool = -var_71_float;
	return 6;
	
}


func_1910(var_73_string)
{
	var_74_bool = 0; var_75_int = 0; var_76_bool = 0; var_77_int = 0; var_78_bool = 0; var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_bool = 0; var_83_int = 0; var_84_bool = 0; var_85_int = 0; var_86_bool = 0; var_87_float = 0; var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0);
	IsExisting3DSound(var_82_bool, var_73_string);
	var_90_bool = var_82_bool == 0; //@nz
	if(var_90_bool != 0) {
		var_83_int = 0;

	Label_1916:
		var_92_int = var_83_int + (int)1;
		var_93_int = var_73_string + var_92_int;
		IsExisting3DSound(var_84_bool, var_93_int);
		var_94_bool = var_84_bool == 0; //@nz
		if(var_94_bool != 0) {
		} else {
			var_83_int = var_83_int + (int)1;
			goto Label_1916;
		}
		var_95_bool = var_83_int == 0; //@nz
		if(var_95_bool != 0) {
			return 16;
		}
		irand(var_85_int, var_83_int);
		var_97_int = var_85_int + (int)1;
		var_73_string = var_73_string + var_97_int;
	}
	Is3DSoundLoaded(var_86_bool, var_73_string);
	var_98_bool = var_86_bool;
	if(var_98_bool != 0) {
		GetEyesHeight(var_87_float);
		GetDirection(var_88_cvector);
		var_89_cvector = var_88_cvector * (int)50;
		var_100_float = GetByIndex(var_89_cvector, 1);
		var_100_float = var_100_float + var_87_float;
		SetByIndex(var_89_cvector, 1) = var_100_float;
		PlayGlobalSound(var_73_string, var_89_cvector);
	}
	return 16;
	
}


func_380()
{
	return 0;
}


func_381(var_20_object)
{
	var_27_object = Obj(); var_28_bool = 0; var_29_float = 0;
	var_20_object = var_27_object;
	func_395(var_23_int, var_24_bool, var_25_float, var_26_int, var_20_object, var_27_object, (bool)1, (float)180.0);
	return 0;
}


func_132(var_2_object, var_98_string)
{
	var_99_bool = 0;
	func_2123(var_99_bool);
	var_100_bool = var_99_bool == 0; //@nz
	if(var_100_bool != 0) {
		return 0;
	}
	var_101_bool = var_98_string == var_2_object;
	if(var_101_bool != 0) {
		return 0;
	}
	var_102_string = ""; var_103_bool = 0;
	var_98_string = var_102_string;
	var_105_bool = var_98_string == "";
	if(var_105_bool != 0) {
		var_103_bool = 0;
	} else {
		var_103_bool = 1;
	}
	func_1877(var_102_string, var_103_bool);
	var_2_object = var_98_string;
	return 0;
	
}


func_389(var_396_float)
{
	var_396_float = 0.10000000149011612;
	return 0;
}


func_392(var_403_int)
{
	var_403_int = 0;
	return 0;
}


func_905(var_0_object, var_302_bool)
{
	var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_float = 0; var_307_float = 0; var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_cvector = CVector(0,0,0); var_311_float = 0; var_312_float = 0;
	var_313_bool = 0; var_314_object = Obj();
	var_314_object = var_0_object;
	func_1613(var_313_bool, var_314_object);
	var_315_bool = var_313_bool == 0; //@nz
	if(var_315_bool != 0) {
		var_302_bool = 0;
		return 10;
	}
	var_316_bool = 0;
	func_994(var_312_float, var_316_bool);
	if(var_316_bool != 0) {
		@@@var_0_object:GetPFPosition(var_308_cvector);
		GetPFPosition(var_309_cvector);
		var_310_cvector = var_308_cvector - var_309_cvector;
		var_311_float = var_310_cvector | var_310_cvector;
		@@@var_0_object:GetAttackDistance(var_312_float);
		var_312_float = var_312_float + (int)50;
		var_318_float = var_312_float * var_312_float;
		var_302_bool = var_311_float <= var_318_float;
		return 10;
	}
	var_302_bool = 0;
	return 10;
}


func_1162(var_0_object, var_1_object, var_159_bool, var_160_object, var_161_float, var_162_float, var_163_bool, var_164_bool)
{
	var_165_bool = 0; var_166_bool = 0; var_167_object = Obj(); var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_float = 0; var_172_object = Obj(); var_173_bool = 0; var_174_bool = 0; var_175_object = Obj(); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_cvector = CVector(0,0,0); var_179_float = 0; var_180_object = Obj();
	var_0_object = false;
	var_1_object = var_160_object;
	var_164_bool = var_174_bool;
	
Label_1166:
	var_181_bool = 0; var_182_object = Obj();
	var_160_object = var_182_object;
	func_1302(var_181_bool, var_182_object);
	var_185_bool = var_181_bool == 0; //@nz
	if(var_185_bool != 0) {
		var_159_bool = 0;
		return 16;
	}
	@@var_160_object:GetPosition(var_176_cvector);
	GetPosition(var_177_cvector);
	var_178_cvector = var_176_cvector - var_177_cvector;
	var_179_float = var_178_cvector | var_178_cvector;
	var_186_bool = 0;
	var_186_bool = 0;
	var_188_bool = var_162_float > (int)0;
	if(var_188_bool != 0) {
		var_189_float = var_162_float * var_162_float;
		var_190_bool = var_179_float > var_189_float;
		if(var_190_bool != 0) {
			var_186_bool = 1;
		}
	}
	if(var_186_bool != 0) {
		Stop();
		var_159_bool = 0;
		return 16;
	}
	var_191_float = var_161_float * var_161_float;
	var_192_bool = var_179_float > var_191_float;
	if(var_192_bool != 0) {
		@@var_160_object:GetPFPosition(var_176_cvector);
		FindPathTo(var_180_object, var_176_cvector);
		var_193_bool = var_180_object != 0; //@nn
		if(var_193_bool != 0) {
			var_180_object = var_175_object;
			var_180_object = 0;
		}
		var_194_bool = var_175_object != 0; //@nn
		if(var_194_bool != 0) {
			var_195_bool = var_174_bool;
			if(var_195_bool == 0) goto Label_1215;
			var_174_bool = 0;
			RotatePath(var_175_object, var_173_bool);
			var_196_bool = var_173_bool == 0; //@nz
			if(var_196_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_199_string = "";
				func_1309(var_199_string);
				var_200_string = "";
				func_1311(var_200_string);
				FollowPath(var_175_object, var_163_bool, var_173_bool, var_199_string, var_200_string);
				var_201_bool = var_173_bool == 0; //@nz
				if(var_201_bool != 0) {
					var_202_object = var_0_object;
					if(var_202_object != 0) {
						var_175_object = 0;
						goto Label_1262;
					EMIT "GOTO 0x4d3";
					}
				} else {
					var_175_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_173_bool);
					var_205_bool = var_173_bool == 0; //@nz
					if(var_205_bool != 0) {
						var_206_object = var_0_object;
						if(var_206_object != 0) {
							var_175_object = 0;
							goto Label_1262;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1262;
	}
			var_180_object = 0;
			goto Label_1260;

		Label_1260:
			var_175_object = 0;

		}
		goto Label_1166;
	}
Label_1262:
	var_159_bool = !var_0_object;
	return 16;
	
}


func_395(var_0_object, var_3_string, var_5_cvector, var_27_object, var_28_bool, var_29_float, var_136_bool, var_228_bool)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_bool = 0; var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_float = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; var_46_float = 0; var_47_cvector = CVector(0,0,0); var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_float = 0;
	func_624(var_49_cvector, var_50_bool, var_51_float);
	var_5_cvector = 0;
	var_76_bool = IsFuncExist(var_27_object, "@GetAttackDistance", (int)1);
	if(var_76_bool != 0) {
		@@var_27_object:GetAttackDistance(var_41_float);
		var_41_float = var_41_float + (int)50;
	} else {
							var_29_float = var_41_float;
	}
	var_79_bool = var_41_float >= (int)150;
	if(var_79_bool != 0) {
		var_41_float = 150;
	}
	var_3_string = false;
	var_0_object = var_27_object;
	IsPlayerActor(var_0_object, var_44_bool);
	var_80_bool = var_44_bool;
	if(var_80_bool != 0) {
		PlayGlobalMusic("attack");
		var_82_object = Obj();
		func_1951(var_82_object);
		SendPlayerEnemy(var_27_object, var_82_object);
	}
	var_85_bool = var_28_bool;
	if(var_85_bool != 0) {
		var_45_bool = 0;
	} else {
						var_45_bool = 1;

	}
	var_46_float = (float)400.0 + var_41_float;
	
Label_435:
	var_87_bool = 0;
	var_87_bool = 0;
	var_88_bool = 0; var_89_object = Obj();
	var_89_object = var_0_object;
	func_1613(var_88_bool, var_89_object);
	if(var_88_bool != 0) {
		var_122_bool = var_3_string == 0; //@nz
		if(var_122_bool != 0) {
			var_87_bool = 1;
		}
	}
	if(var_87_bool != 0) {
		func_1037(var_51_float);
		@@@var_0_object:GetPFPosition(var_42_cvector);
		GetPFPosition(var_43_cvector);
		var_47_cvector = var_42_cvector - var_43_cvector;
		var_48_float = var_47_cvector | var_47_cvector;
		var_128_float = var_46_float * var_46_float;
		var_129_bool = var_48_float >= var_128_float;
		if(var_129_bool != 0) {
			var_130_bool = 0; var_131_object = Obj(); var_132_float = 0; var_133_float = 0; var_134_bool = 0; var_135_bool = 0;
			var_131_object = var_0_object;
			var_41_float = var_132_float;
			TaskCall(4);
			func_1057(var_138_bool, var_130_bool, var_131_object, var_132_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_213_bool = var_136_bool == 0; //@nz
			if(var_213_bool != 0) {
			} else {
				var_45_bool = 0;
		} else {
				var_219_float = var_29_float * var_29_float;
				var_220_bool = var_48_float >= var_219_float;
				if(var_220_bool != 0) {
					@@@var_0_object:GetPFPosition(var_49_cvector);
					CanReachByPF(var_50_bool, var_49_cvector);
					var_221_bool = var_50_bool == 0; //@nz
					if(var_221_bool != 0) {
						var_222_bool = 0; var_223_object = Obj(); var_224_float = 0; var_225_float = 0; var_226_bool = 0; var_227_bool = 0;
						var_223_object = var_0_object;
						var_41_float = var_224_float;
						TaskCall(4);
						func_1057(var_230_bool, var_222_bool, var_223_object, var_224_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_231_bool = var_228_bool == 0; //@nz
						if(var_231_bool != 0) {
							goto Label_607;
						}
						var_45_bool = 0;
						goto Label_435;
					}
					var_232_bool = var_45_bool == 0; //@nz
					if(var_232_bool != 0) {
						var_233_object = Obj();
						var_233_object = var_0_object;
						func_1763(var_233_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1037(var_51_float);
						StopAsync();
						var_45_bool = 1;
						var_244_bool = 0; var_245_object = Obj();
						var_245_object = var_0_object;
						func_1613(var_244_bool, var_245_object);
						var_246_bool = var_244_bool == 0; //@nz
						if(var_246_bool != 0) {
							goto Label_607;
						}
					}
					rand(var_51_float);
					var_247_bool = 0;
					var_249_bool = var_51_float < (float)0.25;
					if(var_249_bool != 1) {
						var_250_bool = 0;
						func_994((bool)1, var_250_bool);
						if(var_250_bool != 1) {
							var_247_bool = 0;
						}
					}
					if(var_247_bool != 0) {
						Face(var_0_object);
						func_1044();
						PlayAnimation("all", "attack_stay");
						var_287_bool = 0; var_288_float = 0;
						var_29_float = var_288_float;
						func_862(var_51_float, var_287_bool, var_288_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1037(var_51_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_509_bool = 0;
						func_994(var_51_float, var_509_bool);
						var_510_bool = var_509_bool == 0; //@nz
						if(var_510_bool == 0) goto Label_597;
						var_511_bool = 0; var_512_object = Obj();
						var_512_object = var_0_object;
						func_1613(var_511_bool, var_512_object);
						var_513_bool = var_511_bool == 0; //@nz
						if(var_513_bool != 0) {
							goto Label_607;
						}
						@@@var_0_object:GetPFPosition(var_42_cvector);
						GetPFPosition(var_43_cvector);
						var_47_cvector = var_42_cvector - var_43_cvector;
						var_48_float = var_47_cvector | var_47_cvector;
						var_514_float = var_29_float * var_29_float;
						var_515_bool = var_48_float < var_514_float;
						if(var_515_bool == 0) goto Label_597;
						var_516_bool = 0; var_517_float = 0;
						var_29_float = var_517_float;
						func_698(var_50_bool, var_51_float, var_516_bool, var_517_float);
						var_518_bool = var_516_bool == 0; //@nz
						if(var_518_bool == 0) goto Label_597;
						goto Label_607;
				}
					var_519_bool = 0; var_520_float = 0;
					var_29_float = var_520_float;
					func_698(var_50_bool, var_51_float, var_519_bool, var_520_float);
					var_521_bool = var_519_bool == 0; //@nz
					if(var_521_bool != 0) {
						goto Label_607;
					}
					var_45_bool = 1;

				}
			Label_597:
				goto Label_606;
		}
		Label_606:
			goto Label_435;

		}
	}
Label_607:
	WaitForAnimEnd();
	var_214_string = var_3_string;
	if(var_214_string != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_217_bool = var_44_bool;
	if(var_217_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_1681(var_20_object, var_21_int, var_22_float)
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
		func_1475(var_50_cvector, var_51_object);
		var_50_cvector = var_49_cvector;
		func_1957(var_48_cvector, var_49_cvector);
		var_48_cvector = var_32_cvector;
		CreateVectorVector(var_33_object);
		var_34_int = 1;

	Label_1710:
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
			goto Label_1710;
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
			func_1749(var_67_float, var_68_cvector, var_69_cvector);
			return 18;
		}
		var_33_object = 0;
	}
	var_110_object = Obj();
	var_20_object = var_110_object;
	func_1637(var_110_object);
	return 18;
	
}


func_659(var_0_object, var_385_float, var_386_int)
{
	var_387_object = Obj(); var_388_float = 0; var_389_float = 0; var_390_object = Obj(); var_391_float = 0; var_392_float = 0;
	var_394_float = var_385_float * (float)0.8999999761581421;
	GetVictim(var_394_float, var_390_object);
	ReportAttack(var_0_object);
	var_395_bool = var_390_object == var_0_object;
	if(var_395_bool != 0) {
		var_396_float = 0; var_397_object = Obj(); var_398_int = 0;
		var_390_object = var_397_object;
		var_386_int = var_398_int;
		func_389(var_398_int);
		var_396_float = var_391_float;
		var_399_float = 0; var_400_object = Obj(); var_401_float = 0; var_402_int = 0;
		var_390_object = var_400_object;
		var_391_float = var_401_float;
		var_403_int = 0; var_404_object = Obj(); var_405_int = 0;
		var_390_object = var_404_object;
		var_386_int = var_405_int;
		func_392(var_405_int);
		var_403_int = var_402_int;
		func_1499(var_399_float, var_400_object, var_401_float, var_402_int);
		var_399_float = var_392_float;
		var_464_int = 0;
		func_1042(var_464_int);
		ReportHit(var_0_object, var_464_int, var_392_float, var_391_float);
		var_465_object = Obj(); var_466_float = 0;
		var_390_object = var_465_object;
		var_392_float = var_466_float;
		func_1049();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_1429(var_72_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_73_string = "";
	var_72_string = var_73_string;
	func_1910(var_73_string);
	PlayAnimation("all", var_72_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_72_string);
	RemoveEnvelope();
	return 0;
}


func_1951(var_46_object)
{
	var_47_object = Obj(); var_48_object = Obj();
	self(var_48_object);
	var_48_object = var_46_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_933(var_300_bool)
{
	var_301_bool = 0;
	var_301_bool = 0;
	var_302_bool = 0;
	func_905(var_301_bool, var_302_bool);
	if(var_302_bool != 0) {
		var_319_bool = 0;
		func_949(var_300_bool, var_301_bool, var_319_bool);
		if(var_319_bool != 0) {
			var_301_bool = 1;
		}
	}
	if(var_301_bool != 0) {
		var_300_bool = 1;
		return 0;
	}
	var_300_bool = 0;
	return 0;
}


func_1957(var_48_cvector, var_49_cvector)
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


func_1967(var_28_float, var_29_cvector, var_30_cvector)
{
	var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0);
	var_32_cvector = var_30_cvector - var_29_cvector;
	var_28_float = var_32_cvector | var_32_cvector;
	return 2;
}


func_1971(var_437_float, var_438_float, var_439_float)
{
	var_442_bool = var_438_float < var_439_float;
	if(var_442_bool != 0) {
		var_438_float = var_437_float;
	} else {
		var_439_float = var_437_float;
	}
	return 0;
	
}


func_949(var_0_object, var_4_bool, var_319_bool)
{
	var_320_object = Obj(); var_321_bool = 0; var_322_float = 0; var_323_cvector = CVector(0,0,0); var_324_cvector = CVector(0,0,0); var_325_object = Obj(); var_326_bool = 0; var_327_float = 0; var_328_cvector = CVector(0,0,0); var_329_cvector = CVector(0,0,0);
	GetScene(var_325_object);
	var_326_bool = 0;
	
Label_953:
	var_330_cvector = CVector(0,0,0); var_331_object = Obj();
	var_331_object = var_0_object;
	func_1475(var_330_cvector, var_331_object);
	var_336_int = -var_330_cvector;
	FindDirLength(var_327_float, var_336_int, var_4_bool);
	var_337_bool = var_327_float < var_4_bool;
	if(var_337_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_328_cvector);
		GetPFPosition(var_329_cvector);
		WaitForAnimEnd();
		func_1037(var_329_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_326_bool = 1;
		var_341_bool = 0;
		func_905(var_329_cvector, var_341_bool);
		var_342_bool = var_341_bool == 0; //@nz
		if(var_342_bool != 0) {
			goto Label_991;
		}
		goto Label_953;
	}
Label_991:
	var_326_bool = var_319_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_1461(var_427_string, var_428_int)
{
	var_430_bool = var_428_int == (int)2;
	if(var_430_bool != 0) {
		var_427_string = "fire";
		return 0;
	EMIT "GOTO 0x5c1";
	}
	var_432_bool = var_428_int == (int)1;
	if(var_432_bool != 0) {
		var_427_string = "bullet";
		return 0;
	}
	var_427_string = "phys";
	return 0;
}


func_698(var_0_object, var_1_object, var_348_bool, var_349_float)
{
	var_350_int = 0; var_351_bool = 0; var_352_int = 0; var_353_string = ""; var_354_int = 0; var_355_bool = 0; var_356_int = 0; var_357_string = "";
	func_1037(var_357_string);
	irand(var_354_int, var_1_object);
	var_354_int = var_354_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_2027();
	var_366_int = "attack_begin" + var_354_int;
	PlayAnimation("all", var_366_int);
	WaitForAnimEnd();
	func_1005(var_356_int, var_357_string);
	var_382_bool = 0; var_383_object = Obj();
	var_383_object = var_0_object;
	func_1613(var_382_bool, var_383_object);
	var_384_bool = var_382_bool == 0; //@nz
	if(var_384_bool != 0) {
		StopAsync();
		var_348_bool = 0;
		return 8;
	}
	var_385_float = 0; var_386_int = 0;
	var_349_float = var_385_float;
	var_354_int = var_386_int;
	func_659(var_357_string, var_385_float, var_386_int);
	var_469_int = "attack_middle" + var_354_int;
	HasAnimation(var_355_bool, "all", var_469_int);
	var_470_bool = var_355_bool;
	if(var_470_bool != 0) {
		func_2027();
		var_473_int = "attack_middle" + var_354_int;
		PlayAnimation("all", var_473_int);
		WaitForAnimEnd();
		func_1037(var_357_string);
		var_474_bool = 0; var_475_object = Obj();
		var_475_object = var_0_object;
		func_1613(var_474_bool, var_475_object);
		var_476_bool = var_474_bool == 0; //@nz
		if(var_476_bool != 0) {
			StopAsync();
			var_348_bool = 0;
			return 8;
		}
		var_477_float = 0; var_478_int = 0;
		var_349_float = var_477_float;
		var_354_int = var_478_int;
		func_659(var_357_string, var_477_float, var_478_int);
		var_356_int = 1;

	Label_775:
		var_480_int = "attack_middle" + var_354_int;
		var_482_int = var_480_int + "_";
		var_357_string = var_482_int + var_356_int;
		HasAnimation(var_355_bool, "all", var_357_string);
		var_484_bool = var_355_bool == 0; //@nz
		if(var_484_bool != 0) {
		} else {
			func_2027();
			PlayAnimation("all", var_357_string);
			WaitForAnimEnd();
			func_1037(var_357_string);
			var_500_bool = 0; var_501_object = Obj();
			var_501_object = var_0_object;
			func_1613(var_500_bool, var_501_object);
			var_502_bool = var_500_bool == 0; //@nz
			if(var_502_bool != 0) {
				StopAsync();
				var_348_bool = 0;
				var_503_float = 0; var_504_int = 0;
				var_349_float = var_503_float;
				var_354_int = var_504_int;
				func_659(var_357_string, var_503_float, var_504_int);
				var_356_int = var_356_int + (int)1;
				goto Label_775;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_488_int = "attack_end" + var_354_int;
	PlayAnimation("all", var_488_int);
	var_489_bool = 0;
	func_1051(var_489_bool);
	if(var_489_bool != 0) {
		var_490_bool = 0; var_491_float = 0;
		func_835(var_490_bool, (float)0.75);
		StopAsync();
	}
	var_348_bool = 1;
	return 8;
	
}


func_1978(var_447_float, var_448_float, var_449_float, var_450_float)
{
	var_451_bool = var_448_float < var_449_float;
	if(var_451_bool != 0) {
		var_449_float = var_447_float;
		return 0;
	}
	var_452_bool = var_448_float > var_450_float;
	if(var_452_bool != 0) {
		var_450_float = var_447_float;
		return 0;
	}
	var_448_float = var_447_float;
	return 0;
}


func_1475(var_50_cvector, var_51_object)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0);
	GetPosition(var_54_cvector);
	@@var_51_object:GetPosition(var_55_cvector);
	var_50_cvector = var_55_cvector - var_54_cvector;
	return 4;
}


func_1989(var_455_float)
{
	var_456_object = Obj(); var_457_object = Obj();
	CreateFloatVector(var_457_object);
	@@var_457_object:add(var_455_float);
	var_459_bool = var_455_float < (int)0;
	if(var_459_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_457_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1482(var_154_bool, var_155_object)
{
	var_156_bool = 0; var_157_bool = 0;
	IsPlayerActor(var_155_object, var_157_bool);
	var_157_bool = var_154_bool;
	return 2;
}


func_1487(var_51_bool, var_52_object, var_53_string)
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


func_1749(var_22_object, var_25_cvector, var_26_cvector)
{
	var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj();
	GetScene(var_29_object);
	AddActorByType(var_30_object, "scripted", var_29_object, var_25_cvector, var_26_cvector, "blood_dir.xml");
	var_33_object = Obj();
	var_22_object = var_33_object;
	func_1637(var_33_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2006(var_20_bool, var_21_string, var_22_string)
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


func_1499(var_399_float, var_400_object, var_401_float, var_402_int)
{
	var_406_int = 0; var_407_string = ""; var_408_int = 0; var_409_float = 0; var_410_float = 0; var_411_float = 0; var_412_int = 0; var_413_string = ""; var_414_int = 0; var_415_float = 0; var_416_float = 0; var_417_float = 0;
	var_418_bool = 0; var_419_object = Obj(); var_420_string = "";
	var_400_object = var_419_object;
	func_1487(var_418_bool, var_419_object, "health");
	var_421_bool = var_418_bool == 0; //@nz
	if(var_421_bool != 0) {
		var_399_float = 0.0;
		return 12;
	}
	var_422_bool = 0; var_423_object = Obj(); var_424_string = "";
	var_400_object = var_423_object;
	func_1487(var_422_bool, var_423_object, "armor");
	var_425_bool = var_422_bool == 0; //@nz
	if(var_425_bool != 0) {
		var_412_int = 0;
	} else {
			@@var_400_object:GetProperty("armor", var_412_int);
	}
	var_427_string = ""; var_428_int = 0;
	var_402_int = var_428_int;
	func_1461(var_427_string, var_428_int);
	var_413_string = "armor_" + var_427_string;
	var_433_bool = 0; var_434_object = Obj(); var_435_string = "";
	var_400_object = var_434_object;
	var_413_string = var_435_string;
	func_1487(var_433_bool, var_434_object, var_435_string);
	var_436_bool = var_433_bool == 0; //@nz
	if(var_436_bool != 0) {
		var_414_int = 0;
	} else {
		@@var_400_object:GetProperty(var_413_string, var_414_int);

	}
	var_437_float = 0; var_438_float = 0; var_439_float = 0;
	var_440_int = var_412_int + var_414_int;
	var_438_float = var_440_int / (float)100.0;
	func_1971(var_437_float, var_438_float, (float)1);
	var_437_float = var_415_float;
	@@var_400_object:GetProperty("health", var_416_float);
	var_445_int = (int)1 - var_415_float;
	var_417_float = var_401_float * var_445_int;
	var_447_float = 0; var_448_float = 0; var_449_float = 0; var_450_float = 0;
	var_448_float = var_416_float - var_417_float;
	func_1978(var_447_float, var_448_float, (float)0, (float)1);
	@@var_400_object:SetProperty("health", var_447_float);
	var_453_bool = 0; var_454_object = Obj();
	var_400_object = var_454_object;
	func_1482(var_453_bool, var_454_object);
	if(var_453_bool != 0) {
		var_455_float = 0;
		var_455_float = -var_417_float;
		func_1989(var_455_float);
	}
	var_417_float = var_399_float;
	return 12;
	
}


func_994(var_0_object, var_250_bool)
{
	var_251_bool = 0; var_252_bool = 0;
	var_255_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_255_bool != 0) {
		@@@var_0_object:IsAttacking(var_252_bool);
		var_252_bool = var_250_bool;
		return 2;
	}
	var_250_bool = 0;
	return 2;
}


func_1763(var_233_object)
{
	var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); var_238_cvector = CVector(0,0,0); var_239_cvector = CVector(0,0,0);
	@@var_233_object:GetPosition(var_237_cvector);
	GetPosition(var_238_cvector);
	var_239_cvector = var_237_cvector - var_238_cvector;
	var_240_float = GetByIndex(var_239_cvector, 0);
	var_241_float = GetByIndex(var_239_cvector, 2);
	RotateAsync(var_240_float, var_241_float);
	return 6;
}


func_2018(var_19_object)
{
	var_20_bool = 0; var_21_bool = 0;
	IsPlayerActor(var_19_object, var_21_bool);
	var_22_bool = var_21_bool;
	if(var_22_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_2027()
{
	var_360_object = Obj(); var_361_object = Obj();
	GetScene(var_361_object);
	var_363_object = Obj();
	func_1951(var_363_object);
	BroadcastMessage("battle", var_363_object, var_361_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1005(var_2_object, var_5_cvector)
{
	var_367_float = 0; var_368_int = 0; var_369_float = 0; var_370_int = 0;
	var_371_bool = var_2_object == 0; //@nz
	if(var_371_bool != 0) {
		return 4;
	}
	var_372_cvector = var_5_cvector;
	if(var_372_cvector != 0) {
		var_5_cvector = var_5_cvector + (int)-1;
		var_375_bool = var_5_cvector > (int)0;
		if(var_375_bool != 0) {
			return 4;
		}
	}
	rand(var_369_float);
	var_376_float = 0;
	func_1055(var_376_float);
	var_377_bool = var_369_float < var_376_float;
	if(var_377_bool != 0) {
		irand(var_370_int, var_2_object);
		var_370_int = var_370_int + (int)1;
		var_380_int = "attack" + var_370_int;
		Speak(var_380_int);
		var_381_int = 0;
		func_1053(var_381_int);
		var_5_cvector = var_381_int;
	}
	return 4;
}


func_1774(var_30_bool, var_31_object, var_32_float)
{
	var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0; var_41_bool = 0; var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_bool = 0; var_50_bool = 0;
	@@var_31_object:GetPosition(var_43_cvector);
	@@var_31_object:GetEyesHeight(var_42_float);
	var_51_float = GetByIndex(var_43_cvector, 1);
	var_51_float = var_51_float + var_42_float;
	SetByIndex(var_43_cvector, 1) = var_51_float;
	GetPosition(var_44_cvector);
	GetEyesHeight(var_42_float);
	var_52_float = GetByIndex(var_44_cvector, 1);
	var_52_float = var_52_float + var_42_float;
	SetByIndex(var_44_cvector, 1) = var_52_float;
	var_45_cvector = var_43_cvector - var_44_cvector;
	var_53_float = GetByIndex(var_45_cvector, 1);
	SetByIndex(var_45_cvector, 1) = (float)0;
	var_54_int = var_45_cvector | var_45_cvector;
	var_55_float = sqrt(var_54_int);
	var_45_cvector = var_45_cvector / var_55_float;
	var_46_cvector = -var_45_cvector;
	var_56_float = var_45_cvector * var_32_float;
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0);
	var_58_cvector = var_46_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1957(var_57_cvector, var_58_cvector);
	var_66_float = var_57_cvector * (int)25;
	var_67_int = var_56_float + var_66_float;
	var_47_cvector = var_67_int - CVector(0.0, 10.0, 0.0);
	var_48_cvector = var_44_cvector + var_47_cvector;
	IsOverrideActive(var_49_bool);
	var_69_bool = var_49_bool;
	if(var_69_bool != 0) {
		var_30_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_48_cvector, var_46_cvector, (bool)1);
	var_71_float = GetByIndex(var_47_cvector, 0);
	var_72_float = GetByIndex(var_47_cvector, 2);
	Rotate(var_71_float, var_72_float);
	var_73_bool = 0;
	func_2123(var_73_bool);
	if(var_73_bool != 0) {
	} else {
		HasAnimationTrack(var_50_bool, "head");
		var_75_bool = var_50_bool;
		if(var_75_bool == 0) goto Label_1837;
		LookAsyncCamera("head");
	}
Label_1837:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_30_bool = 1;
	return 18;
	
}


func_1264(var_0_object, var_1_object, var_24_int)
{
	var_26_bool = var_24_int != (int)0;
	if(var_26_bool != 0) {
		return 0;
	}
	var_27_bool = 0; var_28_object = Obj();
	var_28_object = var_1_object;
	func_1302(var_27_bool, var_28_object);
	var_63_bool = var_27_bool == 0; //@nz
	if(var_63_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2038(var_82_int)
{
	var_83_int = 0; var_84_int = 0;
	GetVariable("branch", var_84_int);
	var_87_bool = var_84_int == (int)0;
	if(var_87_bool != 0) {
		var_82_int = 1;
		return 2;
	EMIT "GOTO 0x805";
	}
	var_89_bool = var_84_int == (int)1;
	if(var_89_bool != 0) {
		var_82_int = 2;
		return 2;
	}
	var_82_int = 3;
	return 2;
}


