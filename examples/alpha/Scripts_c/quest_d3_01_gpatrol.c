// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,IsPlayerActor/2,GetPFPosition/1,GetDirection/1,irand/2,Sleep/2,FindPathTo/2,RotatePath/2,FollowPath/3,Rotate/3,WaitForAnimEnd/1,Sleep/1,StopGroup0/0,Stop/0,FindActor/2,HasAnimation/3,IsExisting3DSound/2,StopAsync/0,rand/1,Face/1,SetSpeed/1,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,Speak/1,GetPosition/1,SetTimer/2,FollowPath/5,KillTimer/1,RequestClearPath/1,SetRTEnvelope/2,Hold/0,WorkWithCorpse/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,GetScene/1,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,RotateAsync/2,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,Trigger/2,SetVariable/2,TriggerWorld/2,GetVariable/2,AddItem/4,GetProperty/2,SignalDeath/1
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:kill_player|W:talk_player|W:quest_d3_01|W:attack_begin|W:attack|W:@GetAttackDistance|A:GetAttackDistance|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_middle|W:attack_end|W:bjump|W:IsAttacking|A:IsAttacking|A:GetPosition|W:walk|W:run|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:fire|W:phys|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:health|W:armor|W:armor_|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:2|W:playing |W:start: |W:end: |W:d3q01|W:gpatrol_attack|W:money|W:gpatrol_talk|W:playsound|W:givemoney|W:ui/NPC_Black.png|W:revolver_ammo|W:alpha_pills
// @GLOBALS: 0:object:
// @RUN_OP: 0x17e
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x84 vars=int,int
// @TASK_2: vars=cvector,cvector params=0
// @EVENT_0: op=0x156 vars=object
// @EVENT_26: op=0x161 vars=string
// @EVENT_17: op=0x173 vars=object
// @TASK_3: vars=object,int,int,bool,int params=0
// @TASK_4: vars=bool,object params=6
// @EVENT_7: op=0x437 vars=int
// @EVENT_10: op=0x449 vars=object
// @EVENT_41: op=0x454 vars=object
// @TASK_5: vars= params=1
// @EVENT_0: op=0x475 vars=object
// @EVENT_22: op=0x4ea vars=object,int,float,float
// @EVENT_16: op=0x4ec vars=object,string
// @EVENT_41: op=0x4ee vars=object
// @STANDALONE_EVENT_22: op=0x6b5 vars=object,int,float,float
// @STANDALONE_EVENT_16: op=0x6bd vars=object,string
// @STANDALONE_EVENT_41: op=0x6ca vars=object
// @PE: 0x3f,0x74,0x84,0x156,0x161,0x1e0,0x1e3,0x3cb,0x437,0x449,0x454,0x45d,0x468,0x4d4,0x4ea,0x4ec,0x4ee,0x4f0,0x612,0x63d,0x644,0x65b,0x666,0x66e,0x675,0x67b,0x6b5,0x6ca

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_cvector, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_int, var_14_bool, var_15_object)
{
	if((int)1 != 0) {
		func_1576();
		var_19_bool = var_15_object == (int)10025;
		if(var_19_bool != 0) {
			var_20_object = Obj(); var_21_object = Obj();
			var_20_object = var_1_object;
			var_21_object = var_0_object;
			func_1638(var_21_object);
			var_28_object = Obj(); var_29_object = Obj();
			var_28_object = var_1_object;
			var_29_object = var_0_object;
			func_1646();
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_1653();
		}
		var_41_bool = var_15_object == (int)10024;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_1638(var_43_object);
			var_44_object = Obj(); var_45_object = Obj();
			var_44_object = var_1_object;
			var_45_object = var_0_object;
			func_1646();
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_1653();
		}
		var_49_bool = var_15_object == (int)10017;
		if(var_49_bool != 0) {
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_object;
			func_1627();
		}
		var_58_bool = var_15_object == (int)10018;
		if(var_58_bool != 0) {
			var_59_object = Obj(); var_60_object = Obj();
			var_59_object = var_1_object;
			var_60_object = var_0_object;
			func_1627();
		}
		var_62_bool = var_14_bool == (int)10011;
		if(var_62_bool != 0) {
			var_63_string = "";
			func_116(var_15_object, "Neutral");
			@@@var_0_object:SetMessage((int)9131);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9132, (int)10013, (int)10012);
			return 0;
		}
		var_83_bool = var_14_bool == (int)10013;
		if(var_83_bool != 0) {
			var_84_string = "";
			func_116(var_15_object, "Neutral");
			@@@var_0_object:SetMessage((int)9133);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9134, (int)10019, (int)10014);
			@@@var_0_object:AddReply((int)9135, (int)10016, (int)10015);
			return 0;
		}
		var_93_bool = var_14_bool == (int)10016;
		if(var_93_bool != 0) {
			var_94_string = "";
			func_116(var_15_object, "Neutral");
			@@@var_0_object:SetMessage((int)9136);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9137, (int)-1, (int)10017);
			@@@var_0_object:AddReply((int)9138, (int)-1, (int)10018);
			return 0;
		}
		var_103_bool = var_14_bool == (int)10019;
		if(var_103_bool != 0) {
			var_104_string = "";
			func_116(var_15_object, "Neutral");
			@@@var_0_object:SetMessage((int)9139);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9140, (int)10021, (int)10020);
			return 0;
		}
		var_110_bool = var_14_bool == (int)10021;
		if(var_110_bool != 0) {
			var_111_string = "";
			func_116(var_15_object, "Neutral");
			@@@var_0_object:SetMessage((int)9141);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9142, (int)10023, (int)10022);
			var_116_bool = 0; var_117_object = Obj();
			var_117_object = var_1_object;
			func_1659(var_116_bool, var_117_object);
			if(var_116_bool != 0) {
				@@@var_0_object:AddReply((int)9144, (int)-1, (int)10024);
			}
			return 0;
		}
		var_128_bool = var_14_bool == (int)10023;
		if(var_128_bool != 0) {
			var_129_string = "";
			func_116(var_15_object, "Neutral");
			@@@var_0_object:SetMessage((int)9143);
			@@@var_0_object:ClearReplies();
			var_131_bool = 0; var_132_object = Obj();
			var_132_object = var_1_object;
			func_1659(var_131_bool, var_132_object);
			if(var_131_bool != 0) {
				@@@var_0_object:AddReply((int)9145, (int)-1, (int)10025);
			}
			@@@var_0_object:AddReply((int)9146, (int)10016, (int)10026);
			return 0;
		}
		var_3_string = true;
		var_139_bool = 0;
		func_1697(var_139_bool);
		if(var_139_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x85";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int, var_13_bool, var_14_object)
{
	func_460();
	var_15_int = 0; var_16_object = Obj();
	var_14_object = var_16_object;
	TaskCall(0);
	func_0(var_17_object, var_15_int, var_16_object);
	TaskReturn();
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_string, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int, var_13_bool, var_14_object)
{
	var_16_bool = var_14_object == "kill_player";
	if(var_16_bool != 0) {
		func_460();
		TaskCall(3);
		func_465();
		TaskReturn();
	} else {
		var_379_bool = var_14_object == "talk_player";
		if(var_379_bool == 0) goto Label_370;
		EventDisable(0);
	}
Label_370:
	return 0;
	
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int, var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0;
	IsPlayerActor(var_14_object, var_16_bool);
	var_17_bool = var_16_bool;
	if(var_17_bool != 0) {
		var_18_bool = 0; var_19_string = ""; var_20_string = "";
		func_1615(var_18_bool, "quest_d3_01", "kill_player");
	}
	return 2;
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_int)
{
	var_16_bool = var_14_int != (int)0;
	if(var_16_bool != 0) {
		return 0;
	}
	var_17_bool = 0; var_18_object = Obj();
	var_18_object = var_1_object;
	func_1117(var_17_bool, var_18_object);
	var_53_bool = var_17_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


task_4_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object)
{
	RequestClearPath(var_14_object);
	return 0;
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object)
{
	func_1101(var_14_object);
	var_14_object = Obj();
	func_1738();
	return 0;
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0;
	IsOverrideActive(var_16_bool);
	var_17_bool = var_16_bool == 0; //@nz
	if(var_17_bool != 0) {
		WorkWithCorpse(var_14_object);
	}
	return 2;
}


task_5_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_int, var_16_float, var_17_float)
{
	return 0;
}


task_5_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_string)
{
	return 0;
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object)
{
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_int, var_16_float, var_17_float)
{
	var_18_object = Obj(); var_19_int = 0; var_20_float = 0;
	var_14_object = var_18_object;
	var_15_int = var_19_int;
	var_16_float = var_20_float;
	func_1420(var_19_int, var_20_float);
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object, var_15_string)
{
	var_16_float = 0; var_17_float = 0;
	var_19_bool = var_15_string == "health";
	if(var_19_bool != 0) {
		GetProperty("health", var_17_float);
		var_22_bool = var_17_float <= (int)0;
		if(var_22_bool != 0) {
			SignalDeath(var_14_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object, var_14_object)
{
	var_15_object = Obj();
	var_14_object = var_15_object;
	func_1699(var_15_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_cvector, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object)
{
	var_14_int = 0; var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_int = 0; var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_object = Obj();
	GetPFPosition(var_1_object);
	GetDirection(var_0_object);
	
Label_387:
	irand(var_18_int, (int)60);
	var_24_int = var_18_int + (int)30;
	Sleep(var_24_int, var_19_bool);
	var_25_bool = var_19_bool;
	if(var_25_bool != 0) {
		func_341();
	} else {
		GetPFPosition(var_20_cvector);
		var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0);
		var_27_cvector = var_1_object;
		var_20_cvector = var_28_cvector;
		func_1593(var_26_float, var_27_cvector, var_28_cvector);
		var_32_bool = var_26_float > (int)40000;
		if(var_32_bool != 0) {
			FindPathTo(var_21_object, var_1_object);
			var_33_bool = var_21_object != 0; //@nn
			if(var_33_bool != 0) {
				RotatePath(var_21_object, var_19_bool);
				var_34_bool = var_19_bool == 0; //@nz
				if(var_34_bool != 0) {
				} else {
					FollowPath(var_21_object, (bool)0, var_19_bool);
					var_36_bool = var_19_bool == 0; //@nz
					if(var_36_bool != 0) {
						goto Label_457;
					}
					var_37_float = GetByIndex(var_0_object, 0);
					var_38_float = GetByIndex(var_0_object, 2);
					Rotate(var_37_float, var_38_float, var_19_bool);
					var_39_bool = var_19_bool == 0; //@nz
					if(var_39_bool != 0) {
						goto Label_457;
					}
					WaitForAnimEnd(var_19_bool);
					var_40_bool = var_19_bool == 0; //@nz
					if(var_40_bool != 0) {
						goto Label_457;
					}
					goto Label_458;
				EMIT "GOTO 0x1ba";
			}
				Sleep((int)1);
				var_21_object = 0;
				goto Label_457;
		}
			var_42_float = GetByIndex(var_0_object, 0);
			var_43_float = GetByIndex(var_0_object, 2);
			Rotate(var_42_float, var_43_float, var_19_bool);
			var_44_bool = var_19_bool == 0; //@nz
			if(var_44_bool != 0) {
				goto Label_457;
			}
			WaitForAnimEnd(var_19_bool);
			var_45_bool = var_19_bool == 0; //@nz
			if(var_45_bool != 0) {
				goto Label_457;
			}
			goto Label_458;
		}
	Label_457:
		goto Label_400;
	}
Label_458:
	goto Label_387;
	
}
EMIT "Return(); Pop(8)";


func_0(var_0_object, var_15_int, var_16_object)
{
	var_18_object = Obj(); var_19_bool = 0; var_20_int = 0; var_21_bool = 0; var_22_object = Obj(); var_23_bool = 0; var_24_int = 0; var_25_bool = 0;
	var_0_object = var_16_object;
	var_26_bool = 0; var_27_object = Obj();
	var_16_object = var_27_object;
	func_1498(var_26_bool, var_27_object);
	var_66_bool = var_26_bool == 0; //@nz
	if(var_66_bool != 0) {
		var_15_int = -2;
		return 8;
	}
	CreateDialog(var_22_object);
	var_67_int = 0;
	func_1693(var_67_int);
	@@var_22_object:SetNPCName(var_67_int);
	var_68_string = "";
	func_1695(var_68_string);
	@@var_22_object:SetPhoto(var_68_string);
	var_69_int = 0;
	func_1676(var_69_int);
	@@var_22_object:SetPlayerName(var_69_int);
	IsOverrideActive(var_23_bool);
	var_77_bool = var_23_bool;
	if(var_77_bool != 0) {
		var_15_int = -2;
		return 8;
	}
	DoDialog(var_22_object);
	var_78_object = Obj(); var_79_object = Obj();
	var_16_object = var_78_object;
	var_22_object = var_79_object;
	TaskCall(1);
	func_63(var_80_object, var_81_object, var_82_string, var_83_bool, var_78_object, var_79_object);
	TaskReturn();
	@@var_22_object:IsDialogEnd(var_25_bool);
	
Label_45:
	var_112_bool = var_25_bool == 0; //@nz
	if(var_112_bool != 0) {
		sync();
		@@var_22_object:IsDialogEnd(var_25_bool);
		goto Label_45;
	}
	var_16_object = Obj();
	func_1554();
	StopDialog(var_22_object);
	@@var_22_object:GetReturnValue((int)-1);
	var_24_int = var_15_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1284(var_22_object, var_23_string, var_24_int)
{
	var_25_int = 0; var_26_int = 0;
	@@var_22_object:GetProperty(var_23_string, var_26_int);
	var_27_int = var_26_int + var_24_int;
	@@var_22_object:SetProperty(var_23_string, var_27_int);
	return 2;
}


func_1669(var_118_bool, var_119_object)
{
	var_120_int = 0; var_121_int = 0;
	@@var_119_object:GetProperty("money", var_121_int);
	var_118_bool = var_121_int >= (int)10000;
	return 2;
}


func_1291(var_279_float, var_280_object, var_281_float, var_282_int)
{
	var_286_int = 0; var_287_string = ""; var_288_int = 0; var_289_float = 0; var_290_float = 0; var_291_float = 0; var_292_int = 0; var_293_string = ""; var_294_int = 0; var_295_float = 0; var_296_float = 0; var_297_float = 0;
	var_298_bool = 0; var_299_object = Obj(); var_300_string = "";
	var_280_object = var_299_object;
	func_1272(var_298_bool, var_299_object, "health");
	var_301_bool = var_298_bool == 0; //@nz
	if(var_301_bool != 0) {
		var_279_float = 0.0;
		return 12;
	}
	var_302_bool = 0; var_303_object = Obj(); var_304_string = "";
	var_280_object = var_303_object;
	func_1272(var_302_bool, var_303_object, "armor");
	var_305_bool = var_302_bool == 0; //@nz
	if(var_305_bool != 0) {
		var_292_int = 0;
	} else {
			@@var_280_object:GetProperty("armor", var_292_int);
	}
	var_307_string = ""; var_308_int = 0;
	var_282_int = var_308_int;
	func_1264(var_307_string, var_308_int);
	var_293_string = "armor_" + var_307_string;
	var_311_bool = 0; var_312_object = Obj(); var_313_string = "";
	var_280_object = var_312_object;
	var_293_string = var_313_string;
	func_1272(var_311_bool, var_312_object, var_313_string);
	var_314_bool = var_311_bool == 0; //@nz
	if(var_314_bool != 0) {
		var_294_int = 0;
	} else {
		@@var_280_object:GetProperty(var_293_string, var_294_int);

	}
	var_315_float = 0; var_316_float = 0; var_317_float = 0;
	var_318_int = var_292_int + var_294_int;
	var_316_float = var_318_int / (float)100.0;
	func_1597(var_315_float, var_316_float, (float)1);
	var_315_float = var_295_float;
	@@var_280_object:GetProperty("health", var_296_float);
	var_323_int = (int)1 - var_295_float;
	var_297_float = var_281_float * var_323_int;
	var_325_float = 0; var_326_float = 0; var_327_float = 0; var_328_float = 0;
	var_326_float = var_296_float - var_297_float;
	func_1604(var_325_float, var_326_float, (float)0, (float)1);
	@@var_280_object:SetProperty("health", var_325_float);
	var_297_float = var_279_float;
	return 12;
	
}


func_1676(var_69_int)
{
	var_70_int = 0; var_71_int = 0;
	GetVariable("player", var_71_int);
	var_74_bool = var_71_int == (int)0;
	if(var_74_bool != 0) {
		var_69_int = 200001;
		return 2;
	EMIT "GOTO 0x69b";
	}
	var_76_bool = var_71_int == (int)1;
	if(var_76_bool != 0) {
		var_69_int = 200002;
		return 2;
	}
	var_69_int = 200003;
	return 2;
}


func_907(var_0_object)
{
	var_224_cvector = CVector(0,0,0); var_225_cvector = CVector(0,0,0); var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0);
	Face(var_0_object);
	PlayAnimation("all", "bjump");
	@@@var_0_object:GetPFPosition(var_226_cvector);
	GetPFPosition(var_227_cvector);
	WaitForAnimEnd();
	StopAsync();
	SetSpeed(CVector(0.0, 0.0, 0.0));
	return 4;
}


func_1420(var_18_object, var_19_int)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_int = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_string = ""; var_31_object = Obj(); var_32_object = Obj(); var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = "";
	var_41_bool = 0;
	var_41_bool = 0;
	var_43_bool = var_19_int != (int)4;
	if(var_43_bool != 0) {
		var_45_bool = var_19_int != (int)5;
		if(var_45_bool != 0) {
			var_41_bool = 1;
		}
	}
	if(var_41_bool != 0) {
		GetScene(var_31_object);
		GetPosition(var_33_cvector);
		GetEyesHeight(var_34_float);
		var_46_float = GetByIndex(var_33_cvector, 1);
		var_48_float = var_34_float / (int)2;
		var_46_float = var_46_float + var_48_float;
		SetByIndex(var_33_cvector, 1) = var_46_float;
		AddActorByType(var_32_object, "scripted", var_31_object, var_33_cvector, CVector(0.0, 0.0, 1.0), "blood.xml");
		var_32_object = 0;
		var_31_object = 0;
	}
	var_52_bool = var_18_object == 0; //@ne
	if(var_52_bool != 0) {
		return 20;
	}
	GetSecondaryAnimationType(var_35_int);
	var_54_bool = var_35_int < (int)0;
	if(var_54_bool != 0) {
		return 20;
	}
	@@var_18_object:GetPosition(var_36_cvector);
	GetPosition(var_37_cvector);
	GetDirection(var_38_cvector);
	var_39_cvector = var_37_cvector - var_36_cvector;
	var_55_float = GetByIndex(var_39_cvector, 0);
	var_56_float = GetByIndex(var_38_cvector, 0);
	var_57_float = var_55_float * var_56_float;
	var_58_float = GetByIndex(var_39_cvector, 2);
	var_59_float = GetByIndex(var_38_cvector, 2);
	var_60_float = var_58_float * var_59_float;
	var_61_int = var_57_float + var_60_float;
	var_63_bool = var_61_int >= (int)0;
	if(var_63_bool != 0) {
		var_40_string = "fhit";
	} else {
		var_40_string = "bhit";
	}
	var_66_int = var_40_string + "1";
	var_68_int = var_40_string + "2";
	FadeSecondaryAnimation("hit_react", var_66_int, var_68_int, (int)-10);
	return 20;
	
}


func_1554()
{
	CameraSwitchToNormal();
	return 0;
}


func_1558(var_89_string)
{
	var_90_float = 0; var_91_float = 0; var_92_float = 0; var_93_float = 0;
	var_95_int = "playing " + var_89_string;
	Trace(var_95_int);
	lshGetAnimTimes(var_89_string, var_92_float, var_93_float);
	lshPlayAnimation(var_92_float, var_93_float);
	var_97_int = "start: " + var_92_float;
	Trace(var_97_int);
	var_99_int = "end: " + var_93_float;
	Trace(var_99_int);
	return 4;
}


func_1693(var_67_int)
{
	var_67_int = 4031;
	return 0;
}


func_926(var_0_object, var_185_bool)
{
	var_186_bool = 0; var_187_bool = 0;
	var_190_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_190_bool != 0) {
		@@@var_0_object:IsAttacking(var_187_bool);
		var_187_bool = var_185_bool;
		return 2;
	}
	var_185_bool = 0;
	return 2;
}


func_1695(var_68_string)
{
	var_68_string = "ui/NPC_Black.png";
	return 0;
}


func_1697(var_86_bool)
{
	var_86_bool = 0;
	return 0;
}


func_1699(var_15_object)
{
	var_16_bool = 0; var_17_bool = 0;
	AddItem(var_17_bool, "revolver_ammo", (int)0, (int)2);
	AddItem(var_17_bool, "alpha_pills", (int)0, (int)2);
	var_24_object = Obj();
	var_15_object = var_24_object;
	TaskCall(5);
	func_1128(var_24_object);
	TaskReturn();
	return 2;
}


func_1576()
{
	var_17_bool = 0;
	func_1697(var_17_bool);
	if(var_17_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_937(var_2_object, var_4_bool)
{
	var_247_float = 0; var_248_int = 0; var_249_float = 0; var_250_int = 0;
	var_251_bool = var_2_object == 0; //@nz
	if(var_251_bool != 0) {
		return 4;
	}
	var_252_bool = var_4_bool;
	if(var_252_bool != 0) {
		var_4_bool = var_4_bool + (int)-1;
		var_255_bool = var_4_bool > (int)0;
		if(var_255_bool != 0) {
			return 4;
		}
	}
	rand(var_249_float);
	var_256_float = 0;
	func_975(var_256_float);
	var_257_bool = var_249_float < var_256_float;
	if(var_257_bool != 0) {
		irand(var_250_int, var_2_object);
		var_250_int = var_250_int + (int)1;
		var_260_int = "attack" + var_250_int;
		Speak(var_260_int);
		var_261_int = 0;
		func_973(var_261_int);
		var_4_bool = var_261_int;
	}
	return 4;
}


func_810(var_351_bool, var_352_float)
{
	var_353_float = 0; var_354_bool = 0; var_355_float = 0; var_356_bool = 0;
	rand(var_355_float);
	var_357_bool = var_355_float < var_352_float;
	if(var_357_bool != 0) {

	Label_815:
		IsAnimationPlaying(var_356_bool);
		var_358_bool = var_356_bool == 0; //@nz
		if(var_358_bool != 0) {
		} else {
			var_359_bool = 0;
			func_874(var_356_bool, var_359_bool);
			if(var_359_bool != 0) {
				var_351_bool = 1;
				sync();
				goto Label_815;
			}
			return 4;
	}
		WaitForAnimEnd();
	}
	goto Label_832;
	
Label_832:
	var_351_bool = 0;
	return 4;
	
}


func_1583(var_51_cvector, var_52_cvector)
{
	var_54_float = 0; var_55_float = 0;
	var_56_int = var_52_cvector | var_52_cvector;
	var_55_float = sqrt(var_56_int);
	var_57_float = 9.999999974752427e-07;
	var_58_bool = var_55_float < var_57_float;
	if(var_58_bool != 0) {
		var_51_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_51_cvector = var_52_cvector / var_55_float;
	return 2;
}


func_691(var_0_object, var_265_float, var_266_int)
{
	var_267_object = Obj(); var_268_float = 0; var_269_float = 0; var_270_object = Obj(); var_271_float = 0; var_272_float = 0;
	var_274_float = var_265_float * (float)0.8999999761581421;
	GetVictim(var_274_float, var_270_object);
	ReportAttack(var_0_object);
	var_275_bool = var_270_object == var_0_object;
	if(var_275_bool != 0) {
		var_276_float = 0; var_277_object = Obj(); var_278_int = 0;
		var_270_object = var_277_object;
		var_266_int = var_278_int;
		func_480(var_278_int);
		var_276_float = var_271_float;
		var_279_float = 0; var_280_object = Obj(); var_281_float = 0; var_282_int = 0;
		var_270_object = var_280_object;
		var_271_float = var_281_float;
		var_283_int = 0; var_284_object = Obj(); var_285_int = 0;
		var_270_object = var_284_object;
		var_266_int = var_285_int;
		func_483(var_285_int);
		var_283_int = var_282_int;
		func_1291(var_279_float, var_280_object, var_281_float, var_282_int);
		var_279_float = var_272_float;
		var_332_int = 0;
		func_969(var_332_int);
		ReportHit(var_0_object, var_332_int, var_272_float, var_271_float);
		var_333_object = Obj(); var_334_float = 0;
		var_270_object = var_333_object;
		var_272_float = var_334_float;
		func_971();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_1593(var_26_float, var_27_cvector, var_28_cvector)
{
	var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0);
	var_30_cvector = var_28_cvector - var_27_cvector;
	var_26_float = var_30_cvector | var_30_cvector;
	return 2;
}


func_1597(var_315_float, var_316_float, var_317_float)
{
	var_320_bool = var_316_float < var_317_float;
	if(var_320_bool != 0) {
		var_316_float = var_315_float;
	} else {
		var_317_float = var_315_float;
	}
	return 0;
	
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_78_object, var_79_object)
{
	var_0_object = var_79_object;
	var_1_object = var_78_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_85_string = "";
		func_116(var_79_object, "Neutral");
		@@@var_0_object:SetMessage((int)9131);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)9132, (int)10013, (int)10012);
		goto Label_86;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x43";
	}
Label_86:
	var_104_bool = 0;
	func_1697(var_104_bool);
	if(var_104_bool != 0) {

	Label_90:
		lshWaitForAnimEnd();
		var_105_string = var_3_string;
		if(var_105_string != 0) {
		} else {
			var_106_string = "";
			var_106_string = var_2_object;
			func_1558(var_106_string);
			goto Label_90;
	}
		PlayAnimation("all", "idle");

	Label_105:
		WaitForAnimEnd();
		var_109_string = var_3_string;
		if(var_109_string != 0) {
			goto Label_115;
		}
		PlayAnimation("all", "idle");
		goto Label_105;
	}
	goto Label_115;
	
Label_115:
	return 0;
	
}


func_834(var_0_object, var_193_bool, var_194_float)
{
	var_195_bool = 0; var_196_cvector = CVector(0,0,0); var_197_cvector = CVector(0,0,0); var_198_cvector = CVector(0,0,0); var_199_float = 0; var_200_bool = 0; var_201_cvector = CVector(0,0,0); var_202_cvector = CVector(0,0,0); var_203_cvector = CVector(0,0,0); var_204_float = 0;
	
Label_835:
	IsAnimationPlaying(var_200_bool);
	var_205_bool = var_200_bool == 0; //@nz
	if(var_205_bool != 0) {
	} else {
		var_206_bool = 0;
		func_874(var_204_float, var_206_bool);
		if(var_206_bool != 0) {
			var_193_bool = 1;
			return 10;
		}
		var_231_bool = 0; var_232_object = Obj();
		var_232_object = var_0_object;
		func_1396(var_231_bool, var_232_object);
		var_233_bool = var_231_bool == 0; //@nz
		if(var_233_bool != 0) {
			var_193_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_201_cvector);
		GetPFPosition(var_202_cvector);
		var_203_cvector = var_201_cvector - var_202_cvector;
		var_204_float = var_203_cvector | var_203_cvector;
		var_234_float = var_194_float * var_194_float;
		var_235_bool = var_204_float < var_234_float;
		if(var_235_bool != 0) {
			var_236_bool = 0; var_237_float = 0;
			var_194_float = var_237_float;
			func_730(var_203_cvector, var_204_float, var_236_bool, var_237_float);
			var_193_bool = 1;
			sync();
			goto Label_835;
		}
		return 10;
	}
	var_193_bool = 0;
	return 10;
	
}


func_1604(var_325_float, var_326_float, var_327_float, var_328_float)
{
	var_329_bool = var_326_float < var_327_float;
	if(var_329_bool != 0) {
		var_327_float = var_325_float;
		return 0;
	}
	var_330_bool = var_326_float > var_328_float;
	if(var_330_bool != 0) {
		var_328_float = var_325_float;
		return 0;
	}
	var_326_float = var_325_float;
	return 0;
}


func_969(var_332_int)
{
	var_332_int = 0;
	return 0;
}


func_1355(var_34_bool, var_35_object)
{
	var_36_bool = 0; var_37_bool = 0;
	@@var_35_object:IsDead(var_37_bool);
	var_37_bool = var_34_bool;
	return 2;
}


func_971()
{
	return 0;
}


func_460()
{
	StopGroup0();
	Stop();
	return 0;
}


func_973(var_261_int)
{
	var_261_int = 1;
	return 0;
}


func_1101(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1615(var_18_bool, var_19_string, var_20_string)
{
	var_21_object = Obj(); var_22_object = Obj();
	FindActor(var_22_object, var_19_string);
	var_23_bool = var_22_object == 0; //@ne
	if(var_23_bool != 0) {
		var_18_bool = 0;
		return 2;
	}
	Trigger(var_22_object, var_20_string);
	var_18_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1487(var_171_object)
{
	var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_cvector = CVector(0,0,0); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0);
	@@var_171_object:GetPosition(var_175_cvector);
	GetPosition(var_176_cvector);
	var_177_cvector = var_175_cvector - var_176_cvector;
	var_178_float = GetByIndex(var_177_cvector, 0);
	var_179_float = GetByIndex(var_177_cvector, 2);
	RotateAsync(var_178_float, var_179_float);
	return 6;
}


func_465()
{
	var_22_object = Obj(); var_23_object = Obj();
	FindActor(var_23_object, "player");
	var_25_bool = var_23_object == 0; //@nz
	if(var_25_bool != 0) {
		return 2;
	}
	var_26_object = Obj(); var_27_bool = 0; var_28_float = 0;
	var_23_object = var_26_object;
	func_486(var_18_int, var_19_int, var_20_bool, var_21_int, var_22_object, var_23_object, var_26_object, (bool)1, (float)180.0);
	return 2;
}
EMIT "Stack[-1] = 0";


func_977(var_0_object, var_1_object, var_109_bool, var_110_object, var_111_float, var_112_float, var_113_bool, var_114_bool)
{
	var_117_bool = 0; var_118_bool = 0; var_119_object = Obj(); var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0); var_123_float = 0; var_124_object = Obj(); var_125_bool = 0; var_126_bool = 0; var_127_object = Obj(); var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_float = 0; var_132_object = Obj();
	var_0_object = false;
	var_1_object = var_110_object;
	var_114_bool = var_126_bool;
	
Label_981:
	var_133_bool = 0; var_134_object = Obj();
	var_110_object = var_134_object;
	func_1117(var_133_bool, var_134_object);
	var_137_bool = var_133_bool == 0; //@nz
	if(var_137_bool != 0) {
		var_109_bool = 0;
		return 16;
	}
	@@var_110_object:GetPosition(var_128_cvector);
	GetPosition(var_129_cvector);
	var_130_cvector = var_128_cvector - var_129_cvector;
	var_131_float = var_130_cvector | var_130_cvector;
	var_138_bool = 0;
	var_138_bool = 0;
	var_140_bool = var_112_float > (int)0;
	if(var_140_bool != 0) {
		var_141_float = var_112_float * var_112_float;
		var_142_bool = var_131_float > var_141_float;
		if(var_142_bool != 0) {
			var_138_bool = 1;
		}
	}
	if(var_138_bool != 0) {
		Stop();
		var_109_bool = 0;
		return 16;
	}
	var_143_float = var_111_float * var_111_float;
	var_144_bool = var_131_float > var_143_float;
	if(var_144_bool != 0) {
		@@var_110_object:GetPFPosition(var_128_cvector);
		FindPathTo(var_132_object, var_128_cvector);
		var_145_bool = var_132_object != 0; //@nn
		if(var_145_bool != 0) {
			var_132_object = var_127_object;
			var_132_object = 0;
		}
		var_146_bool = var_127_object != 0; //@nn
		if(var_146_bool != 0) {
			var_147_bool = var_126_bool;
			if(var_147_bool == 0) goto Label_1030;
			var_126_bool = 0;
			RotatePath(var_127_object, var_125_bool);
			var_148_bool = var_125_bool == 0; //@nz
			if(var_148_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_151_string = "";
				func_1124(var_151_string);
				var_152_string = "";
				func_1126(var_152_string);
				FollowPath(var_127_object, var_113_bool, var_125_bool, var_151_string, var_152_string);
				var_153_bool = var_125_bool == 0; //@nz
				if(var_153_bool != 0) {
					var_154_object = var_0_object;
					if(var_154_object != 0) {
						var_127_object = 0;
						goto Label_1077;
					EMIT "GOTO 0x41a";
					}
				} else {
					var_127_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_125_bool);
					var_157_bool = var_125_bool == 0; //@nz
					if(var_157_bool != 0) {
						var_158_object = var_0_object;
						if(var_158_object != 0) {
							var_127_object = 0;
							goto Label_1077;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1077;
	}
			var_132_object = 0;
			goto Label_1075;

		Label_1075:
			var_127_object = 0;

		}
		goto Label_981;
	}
Label_1077:
	var_109_bool = !var_0_object;
	return 16;
	
}


func_975(var_256_float)
{
	var_256_float = 0.5;
	return 0;
}


func_1236(var_47_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_47_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_47_string);
	RemoveEnvelope();
	return 0;
}


func_341()
{
	return 0;
}


func_1360(var_23_bool, var_24_object)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj();
	var_29_bool = var_24_object == 0; //@ne
	if(var_29_bool != 0) {
		var_23_bool = 0;
		return 4;
	}
	var_30_bool = 0;
	var_30_bool = 0;
	var_33_bool = IsFuncExist(var_24_object, "IsDead", (int)1);
	if(var_33_bool != 0) {
		var_34_bool = 0; var_35_object = Obj();
		var_24_object = var_35_object;
		func_1355(var_34_bool, var_35_object);
		if(var_34_bool != 0) {
			var_30_bool = 1;
		}
	}
	if(var_30_bool != 0) {
		var_23_bool = 0;
		return 4;
	}
	GetScene(var_27_object);
	var_38_bool = var_27_object == 0; //@ne
	if(var_38_bool != 0) {
		var_23_bool = 0;
		return 4;
	}
	@@var_24_object:GetScene(var_28_object);
	var_39_bool = var_27_object != var_28_object;
	if(var_39_bool != 0) {
		var_23_bool = 0;
		return 4;
	}
	var_23_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1498(var_26_bool, var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0;
	@@var_27_object:GetPosition(var_37_cvector);
	@@var_27_object:GetEyesHeight(var_36_float);
	var_44_float = GetByIndex(var_37_cvector, 1);
	var_44_float = var_44_float + var_36_float;
	SetByIndex(var_37_cvector, 1) = var_44_float;
	GetPosition(var_38_cvector);
	GetEyesHeight(var_36_float);
	var_45_float = GetByIndex(var_38_cvector, 1);
	var_45_float = var_45_float + var_36_float;
	SetByIndex(var_38_cvector, 1) = var_45_float;
	var_39_cvector = var_37_cvector - var_38_cvector;
	var_46_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (float)0;
	var_47_int = var_39_cvector | var_39_cvector;
	var_48_float = sqrt(var_47_int);
	var_39_cvector = var_39_cvector / var_48_float;
	var_40_cvector = -var_39_cvector;
	var_50_float = var_39_cvector * (int)70;
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
	var_52_cvector = var_40_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1583(var_51_cvector, var_52_cvector);
	var_60_float = var_51_cvector * (int)25;
	var_61_int = var_50_float + var_60_float;
	var_41_cvector = var_61_int - CVector(0.0, 10.0, 0.0);
	var_42_cvector = var_38_cvector + var_41_cvector;
	IsOverrideActive(var_43_bool);
	var_63_bool = var_43_bool;
	if(var_63_bool != 0) {
		var_26_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_42_cvector, var_40_cvector);
	var_64_float = GetByIndex(var_41_cvector, 0);
	var_65_float = GetByIndex(var_41_cvector, 2);
	Rotate(var_64_float, var_65_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_26_bool = 1;
	return 16;
}


func_1627()
{
	SetVariable("d3q01", (int)8);
	var_54_bool = 0; var_55_string = ""; var_56_string = "";
	func_1615(var_54_bool, "quest_d3_01", "gpatrol_attack");
	return 0;
}


func_730(var_0_object, var_1_object, var_236_bool, var_237_float)
{
	var_238_int = 0; var_239_bool = 0; var_240_int = 0; var_241_bool = 0;
	irand(var_240_int, var_1_object);
	var_240_int = var_240_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	var_246_int = "attack_begin" + var_240_int;
	PlayAnimation("all", var_246_int);
	WaitForAnimEnd();
	func_937(var_240_int, var_241_bool);
	var_262_bool = 0; var_263_object = Obj();
	var_263_object = var_0_object;
	func_1396(var_262_bool, var_263_object);
	var_264_bool = var_262_bool == 0; //@nz
	if(var_264_bool != 0) {
		StopAsync();
		var_236_bool = 0;
		return 4;
	}
	var_265_float = 0; var_266_int = 0;
	var_237_float = var_265_float;
	var_240_int = var_266_int;
	func_691(var_241_bool, var_265_float, var_266_int);
	var_337_int = "attack_middle" + var_240_int;
	HasAnimation(var_241_bool, "all", var_337_int);
	var_338_bool = var_241_bool;
	if(var_338_bool != 0) {
		var_341_int = "attack_middle" + var_240_int;
		PlayAnimation("all", var_341_int);
		WaitForAnimEnd();
		var_342_bool = 0; var_343_object = Obj();
		var_343_object = var_0_object;
		func_1396(var_342_bool, var_343_object);
		var_344_bool = var_342_bool == 0; //@nz
		if(var_344_bool != 0) {
			StopAsync();
			var_236_bool = 0;
			return 4;
		}
		var_345_float = 0; var_346_int = 0;
		var_237_float = var_345_float;
		var_240_int = var_346_int;
		func_691(var_241_bool, var_345_float, var_346_int);
	}
	SetAttackState((bool)0);
	var_350_int = "attack_end" + var_240_int;
	PlayAnimation("all", var_350_int);
	var_351_bool = 0; var_352_float = 0;
	func_810(var_351_bool, (float)0.75);
	StopAsync();
	var_236_bool = 1;
	return 4;
}


func_1117(var_17_bool, var_18_object)
{
	var_19_bool = 0; var_20_object = Obj();
	var_18_object = var_20_object;
	func_1396(var_19_bool, var_20_object);
	var_19_bool = var_17_bool;
	return 0;
}


func_480(var_276_float)
{
	var_276_float = 0.15000000596046448;
	return 0;
}


func_483(var_283_int)
{
	var_283_int = 0;
	return 0;
}


func_1124(var_151_string)
{
	var_151_string = "walk";
	return 0;
}


func_1638(var_20_object)
{
	var_22_object = Obj(); var_23_string = ""; var_24_int = 0;
	var_20_object = var_22_object;
	func_1284(var_22_object, "money", (int)-10000);
	return 0;
}


func_486(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_26_object, var_27_bool, var_28_float, var_115_bool)
{
	var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_float = 0; var_39_bool = 0; var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; var_46_cvector = CVector(0,0,0); var_47_float = 0; var_48_float = 0;
	var_1_object = 0;
	
Label_488:
	var_52_int = var_1_object + (int)1;
	var_53_int = "attack_begin" + var_52_int;
	HasAnimation(var_39_bool, "all", var_53_int);
	var_54_bool = var_39_bool == 0; //@nz
	if(var_54_bool != 0) {
	} else {
									var_1_object = var_1_object + (int)1;
									goto Label_488;
	}
	var_2_object = 0;
	
Label_502:
	var_57_int = var_2_object + (int)1;
	var_58_int = "attack" + var_57_int;
	IsExisting3DSound(var_40_bool, var_58_int);
	var_59_bool = var_40_bool == 0; //@nz
	if(var_59_bool != 0) {
	} else {
								var_2_object = var_2_object + (int)1;
								goto Label_502;

	}
	var_4_bool = 0;
	var_62_bool = IsFuncExist(var_26_object, "@GetAttackDistance", (int)1);
	if(var_62_bool != 0) {
		@@var_26_object:GetAttackDistance(var_41_float);
		var_41_float = var_41_float + (int)50;
	} else {
							var_28_float = var_41_float;

	}
	var_65_bool = var_41_float >= (int)150;
	if(var_65_bool != 0) {
		var_41_float = 150;
	}
	var_3_string = false;
	var_0_object = var_26_object;
	IsPlayerActor(var_0_object, var_44_bool);
	var_66_bool = var_27_bool;
	if(var_66_bool != 0) {
		var_45_bool = 0;
	} else {
						var_45_bool = 1;

	}
Label_538:
	var_67_bool = 0;
	var_67_bool = 0;
	var_68_bool = 0; var_69_object = Obj();
	var_69_object = var_0_object;
	func_1396(var_68_bool, var_69_object);
	if(var_68_bool != 0) {
		var_102_bool = var_3_string == 0; //@nz
		if(var_102_bool != 0) {
			var_67_bool = 1;
		}
	}
	if(var_67_bool != 0) {
		@@@var_0_object:GetPFPosition(var_42_cvector);
		GetPFPosition(var_43_cvector);
		var_46_cvector = var_42_cvector - var_43_cvector;
		var_47_float = var_46_cvector | var_46_cvector;
		var_104_int = (float)400.0 + var_41_float;
		var_106_int = (float)400.0 + var_41_float;
		var_107_float = var_104_int * var_106_int;
		var_108_bool = var_47_float >= var_107_float;
		if(var_108_bool != 0) {
			var_109_bool = 0; var_110_object = Obj(); var_111_float = 0; var_112_float = 0; var_113_bool = 0; var_114_bool = 0;
			var_110_object = var_0_object;
			var_41_float = var_111_float;
			TaskCall(4);
			func_977(var_115_bool, var_116_object, var_109_bool, var_110_object, var_111_float, (float)10000.0, (bool)1, (bool)0);
			TaskReturn();
			var_162_bool = var_115_bool == 0; //@nz
			if(var_162_bool != 0) {
			} else {
		} else {
				var_168_float = var_28_float * var_28_float;
				var_169_bool = var_47_float >= var_168_float;
				if(var_169_bool != 0) {
					var_170_bool = (bool)0 == 0; //@nz
					if(var_170_bool != 0) {
						var_171_object = Obj();
						var_171_object = var_0_object;
						func_1487(var_171_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						StopAsync();
						var_45_bool = 1;
					}
					rand(var_48_float);
					var_182_bool = 0;
					var_184_bool = var_48_float < (float)0.6000000238418579;
					if(var_184_bool != 1) {
						var_185_bool = 0;
						func_926((bool)1, var_185_bool);
						if(var_185_bool != 1) {
							var_182_bool = 0;
						}
					}
					if(var_182_bool != 0) {
						Face(var_0_object);
						PlayAnimation("all", "attack_stay");
						var_193_bool = 0; var_194_float = 0;
						var_28_float = var_194_float;
						func_834(var_48_float, var_193_bool, var_194_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_363_bool = 0;
						func_926(var_48_float, var_363_bool);
						var_364_bool = var_363_bool == 0; //@nz
						if(var_364_bool == 0) goto Label_664;
						var_365_bool = 0; var_366_object = Obj();
						var_366_object = var_0_object;
						func_1396(var_365_bool, var_366_object);
						var_367_bool = var_365_bool == 0; //@nz
						if(var_367_bool != 0) {
							goto Label_674;
						}
						@@@var_0_object:GetPFPosition(var_42_cvector);
						GetPFPosition(var_43_cvector);
						var_46_cvector = var_42_cvector - var_43_cvector;
						var_47_float = var_46_cvector | var_46_cvector;
						var_368_float = var_28_float * var_28_float;
						var_369_bool = var_47_float < var_368_float;
						if(var_369_bool == 0) goto Label_664;
						var_370_bool = 0; var_371_float = 0;
						var_28_float = var_371_float;
						func_730(var_47_float, var_48_float, var_370_bool, var_371_float);
						var_372_bool = var_370_bool == 0; //@nz
						if(var_372_bool == 0) goto Label_664;
						goto Label_674;
				}
					var_373_bool = 0; var_374_float = 0;
					var_28_float = var_374_float;
					func_730(var_47_float, var_48_float, var_373_bool, var_374_float);
					var_375_bool = var_373_bool == 0; //@nz
					if(var_375_bool != 0) {
						goto Label_674;
					}
					var_45_bool = 1;

				}
			Label_664:
				goto Label_673;
		}
		Label_673:
			goto Label_538;

		}
	}
Label_674:
	WaitForAnimEnd();
	var_163_string = var_3_string;
	if(var_163_string != 0) {
		return 20;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_166_bool = var_44_bool;
	if(var_166_bool != 0) {
		Sleep((float)2.0);
	}
	return 20;
	
}


func_1126(var_152_string)
{
	var_152_string = "run";
	return 0;
}


func_1128(var_24_object)
{
	var_25_object = Obj();
	var_24_object = var_25_object;
	func_1149(var_25_object);
	SetRTEnvelope((int)50, (int)40);
	
Label_1137:
	Hold();
	goto Label_1137;
}
EMIT "Return(); Pop(0)";


func_874(var_0_object, var_206_bool)
{
	var_207_cvector = CVector(0,0,0); var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); var_210_float = 0; var_211_float = 0; var_212_cvector = CVector(0,0,0); var_213_cvector = CVector(0,0,0); var_214_cvector = CVector(0,0,0); var_215_float = 0; var_216_float = 0;
	var_217_bool = 0; var_218_object = Obj();
	var_218_object = var_0_object;
	func_1396(var_217_bool, var_218_object);
	var_219_bool = var_217_bool == 0; //@nz
	if(var_219_bool != 0) {
		var_206_bool = 0;
		return 10;
	}
	var_220_bool = 0;
	func_926(var_216_float, var_220_bool);
	if(var_220_bool != 0) {
		@@@var_0_object:GetPFPosition(var_212_cvector);
		GetPFPosition(var_213_cvector);
		var_214_cvector = var_212_cvector - var_213_cvector;
		var_215_float = var_214_cvector | var_214_cvector;
		@@@var_0_object:GetAttackDistance(var_216_float);
		var_216_float = var_216_float + (int)50;
		var_222_float = var_216_float * var_216_float;
		var_223_bool = var_215_float <= var_222_float;
		if(var_223_bool != 0) {
			func_907(var_216_float);
			var_206_bool = 1;
			return 10;
		}
	}
	var_206_bool = 0;
	return 10;
}


func_1646()
{
	var_30_bool = 0; var_31_string = ""; var_32_string = "";
	func_1615(var_30_bool, "quest_d3_01", "gpatrol_talk");
	return 0;
}


func_1264(var_307_string, var_308_int)
{
	var_310_bool = var_308_int == (int)1;
	if(var_310_bool != 0) {
		var_307_string = "fire";
		return 0;
	}
	var_307_string = "phys";
	return 0;
}


func_116(var_2_object, var_85_string)
{
	var_86_bool = 0;
	func_1697(var_86_bool);
	var_87_bool = var_86_bool == 0; //@nz
	if(var_87_bool != 0) {
		return 0;
	}
	var_88_bool = var_85_string == var_2_object;
	if(var_88_bool != 0) {
		return 0;
	}
	var_89_string = "";
	var_85_string = var_89_string;
	func_1558(var_89_string);
	var_2_object = var_85_string;
	return 0;
}


func_1653()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_1396(var_19_bool, var_20_object)
{
	var_21_int = 0; var_22_int = 0;
	var_23_bool = 0; var_24_object = Obj();
	var_20_object = var_24_object;
	func_1360(var_23_bool, var_24_object);
	var_40_bool = var_23_bool == 0; //@nz
	if(var_40_bool != 0) {
		var_19_bool = 0;
		return 2;
	}
	var_41_bool = 0; var_42_object = Obj(); var_43_string = "";
	var_20_object = var_42_object;
	func_1272(var_41_bool, var_42_object, "noaccess");
	var_50_bool = var_41_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_19_bool = 1;
		return 2;
	}
	@@var_20_object:GetProperty("noaccess", var_22_int);
	var_19_bool = var_22_int == (int)0;
	return 2;
}


func_1272(var_41_bool, var_42_object, var_43_string)
{
	var_44_bool = 0; var_45_bool = 0;
	var_48_bool = IsFuncExist(var_42_object, "HasProperty", (int)2);
	var_49_bool = var_48_bool == 0; //@nz
	if(var_49_bool != 0) {
		var_41_bool = 0;
		return 2;
	}
	@@var_42_object:HasProperty(var_43_string, var_45_bool);
	var_45_bool = var_41_bool;
	return 2;
}


func_1659(var_116_bool, var_117_object)
{
	var_118_bool = 0; var_119_object = Obj();
	var_117_object = var_119_object;
	func_1669(var_118_bool, var_119_object);
	if(var_118_bool != 0) {
		var_116_bool = 1;
		return 0;
	}
	var_116_bool = 0;
	return 0;
}


func_1149(var_25_object)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_string = ""; var_31_object = Obj(); var_32_bool = 0; var_33_bool = 0; var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; var_41_object = Obj(); var_42_bool = 0; var_43_bool = 0; var_44_float = 0; var_45_cvector = CVector(0,0,0);
	var_46_bool = var_25_object == 0; //@ne
	if(var_46_bool != 0) {
		var_47_string = "";
		func_1236("fdie");
	} else {
		@@var_25_object:GetPosition(var_36_cvector);
		GetPosition(var_37_cvector);
		GetDirection(var_38_cvector);
		var_39_cvector = var_37_cvector - var_36_cvector;
		var_50_float = GetByIndex(var_39_cvector, 0);
		var_51_float = GetByIndex(var_38_cvector, 0);
		var_52_float = var_50_float * var_51_float;
		var_53_float = GetByIndex(var_39_cvector, 2);
		var_54_float = GetByIndex(var_38_cvector, 2);
		var_55_float = var_53_float * var_54_float;
		var_56_int = var_52_float + var_55_float;
		var_58_bool = var_56_int >= (int)0;
		if(var_58_bool != 0) {
			var_40_string = "fdie";
		} else {
				var_40_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_25_object = var_41_object;
		var_61_bool = IsFuncExist(var_25_object, "GetScriptProperty", (int)2);
		if(var_61_bool != 0) {
			@@var_25_object:HasScriptProperty(var_42_bool, "Owner");
			var_63_bool = var_42_bool;
			if(var_63_bool != 0) {
				@@var_25_object:GetScriptProperty(var_41_object, "Owner");
				var_65_bool = var_41_object == 0; //@ne
				if(var_65_bool != 0) {
					var_25_object = var_41_object;
				}
			}
		}
		var_68_bool = IsFuncExist(var_41_object, "@GetEyesHeight", (int)1);
		if(var_68_bool != 0) {
			@@var_41_object:GetEyesHeight(var_44_float);
			var_45_cvector = CVector(0.0, 0.0, 0.0);
			var_69_float = GetByIndex(var_45_cvector, 1);
			var_44_float = var_69_float;
			SetByIndex(var_45_cvector, 1) = var_69_float;
			LookAsync(var_25_object, "head", var_45_cvector);
			var_43_bool = 1;
		} else {
			var_43_bool = 0;

		}
		PlayAnimation("all", var_40_string);
		WaitForAnimEnd();
		var_72_bool = var_43_bool;
		if(var_72_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_40_string);
		RemoveEnvelope();
		var_41_object = 0;
	}
	return 20;
	
}


