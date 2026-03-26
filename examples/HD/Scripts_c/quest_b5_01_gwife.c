// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,SignalDeath/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetScene/1,GetPosition/1,GetDirection/1,FindLongestDir/6,Trace/1,Rotate/2,MovePoint/3,Stop/0,FindDirLength/3,SetRTEnvelope/2,Hold/0,RemoveRTEnvelope/0,SetDeathState/0,StopAsync/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,lshStopSpeech/0,IsExisting3DSound/2,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,GetVariable/2,Trigger/2,HasAnimation/3,SetVariable/2,WorkWithCorpse/1,Barter/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:retreat|W:player|W:head|A:RemoveStationaryActor|A:GetPosition|W:Can't retreat, distance: |W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:oob5GathererWife1|W:branch|W:ui/NPC_Citizen2.png|W:ui/NPC_Citizen2_b.png|W:b5q01NudeDead|W:quest_b5_01|W:gwife_dead
// @GLOBALS: 0:object:
// @RUN_OP: 0x16e
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb8 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x178 vars=object
// @EVENT_17: op=0x183 vars=object
// @EVENT_26: op=0x187 vars=string
// @EVENT_7: op=0x1be vars=int
// @TASK_3: vars=object,cvector,bool params=0
// @EVENT_17: op=0x24e vars=object
// @EVENT_7: op=0x2b9 vars=int
// @EVENT_41: op=0x2f4 vars=object
// @TASK_4: vars= params=1
// @EVENT_0: op=0x31c vars=object
// @EVENT_22: op=0x39b vars=object,int,float,float
// @EVENT_16: op=0x39d vars=object,string
// @EVENT_41: op=0x39f vars=object
// @STANDALONE_EVENT_22: op=0x58a vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x592 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_41: op=0x59c vars=object
// @PE: 0x4a,0xa2,0xb8,0x178,0x183,0x187,0x194,0x1be,0x1d5,0x24e,0x2f4,0x30d,0x381,0x39b,0x39d,0x39f,0x500,0x531,0x537,0x55a,0x58a,0x592,0x59c

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool)
{
	if((int)1 != 0) {
		func_1216();
		var_18_bool = var_13_cvector == (int)19748;
		if(var_18_bool != 0) {
			var_19_bool = 0; var_20_object = Obj();
			var_20_object = var_1_object;
			func_1335(var_20_object);
			if(var_19_bool != 0) {
				var_27_object = Obj(); var_28_object = Obj();
				var_27_object = var_1_object;
				var_28_object = var_0_object;
				func_1329();
				var_31_string = "";
				func_162(var_14_bool, "Neutral");
				@@@var_0_object:SetMessage((int)518656);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)518795, (int)19900, (int)19898);
				@@@var_0_object:AddReply((int)518796, (int)19900, (int)19899);
				return 0;
			}
			var_55_string = "";
			func_162(var_14_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518660);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518661, (int)-1, (int)19753);
			@@@var_0_object:AddReply((int)518800, (int)-1, (int)19903);
			return 0;
		}
		var_64_bool = var_13_cvector == (int)19900;
		if(var_64_bool != 0) {
			var_65_string = "";
			func_162(var_14_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518797);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518799, (int)19750, (int)19902);
			@@@var_0_object:AddReply((int)518798, (int)19907, (int)19901);
			return 0;
		}
		var_74_bool = var_13_cvector == (int)19907;
		if(var_74_bool != 0) {
			var_75_string = "";
			func_162(var_14_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518804);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518805, (int)19750, (int)19908);
			@@@var_0_object:AddReply((int)518806, (int)-1, (int)19909);
			return 0;
		}
		var_84_bool = var_13_cvector == (int)19750;
		if(var_84_bool != 0) {
			var_85_string = "";
			func_162(var_14_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518658);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518659, (int)19904, (int)19751);
			@@@var_0_object:AddReply((int)518802, (int)-1, (int)19905);
			return 0;
		}
		var_94_bool = var_13_cvector == (int)19904;
		if(var_94_bool != 0) {
			var_95_string = "";
			func_162(var_14_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518801);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518807, (int)19911, (int)19910);
			return 0;
		}
		var_101_bool = var_13_cvector == (int)19911;
		if(var_101_bool != 0) {
			var_102_string = "";
			func_162(var_14_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518808);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518809, (int)-1, (int)19914);
			@@@var_0_object:AddReply((int)518810, (int)-1, (int)19915);
			return 0;
		}
		var_3_string = true;
		var_110_bool = 0;
		func_1391(var_110_bool);
		if(var_110_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb9";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool)
{
	func_469(var_12_cvector, var_13_bool);
	var_17_int = 0; var_18_object = Obj();
	var_13_bool = var_18_object;
	TaskCall(0);
	func_0(var_19_object, var_17_int, var_18_object);
	TaskReturn();
	return 0;
}


task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool)
{
	SignalDeath(var_13_bool);
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_cvector, var_13_bool)
{
	var_15_bool = var_13_bool == "retreat";
	if(var_15_bool != 0) {
		func_469(var_12_cvector, var_13_bool);
		TaskCall(3);
		func_569();
		TaskReturn();
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_object, var_12_cvector, var_13_bool)
{
	var_15_bool = var_13_bool == (int)10;
	if(var_15_bool != 0) {
		var_16_bool = 0;
		func_431(var_11_object, var_12_cvector, var_13_bool, var_16_bool);
		if(var_16_bool != 0) {
			var_29_bool = var_2_object == 0; //@nz
			if(var_29_bool != 0) {
				var_30_object = Obj();
				var_30_object = var_4_bool;
				func_1205(var_30_object);
				var_2_object = true;
			}
		} else {
			var_37_object = var_2_object;
			if(var_37_object == 0) goto Label_468;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_468:
	return 0;
	
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	SignalDeath(var_13_object);
	return 0;
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_int)
{
	var_14_cvector = CVector(0,0,0); var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_float = 0;
	var_23_bool = var_13_int != (int)120;
	if(var_23_bool != 0) {
		return 8;
	}
	var_24_bool = var_0_object == 0; //@ne
	if(var_24_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_18_cvector);
		FindDirLength(var_19_float, var_18_cvector, (float)7000.0);
		var_27_cvector = CVector(0,0,0); var_28_float = 0;
		func_594(var_21_float, var_27_cvector, (float)1.7453293800354004);
		var_27_cvector = var_20_cvector;
		var_21_float = var_20_cvector | var_20_cvector;
		var_57_bool = 0;
		var_57_bool = 0;
		var_59_bool = var_21_float >= (float)2500.0;
		if(var_59_bool != 0) {
			var_60_bool = 0;
			var_61_float = var_19_float * var_19_float;
			var_63_float = var_61_float * (float)2.25;
			var_64_bool = var_21_float >= var_63_float;
			if(var_64_bool != 1) {
				var_65_bool = 0;
				func_765((bool)1, var_65_bool);
				if(var_65_bool != 1) {
					var_60_bool = 0;
				}
			}
			if(var_60_bool != 0) {
				var_57_bool = 1;
			}
		}
		if(var_57_bool == 0) goto Label_748;
		Stop();
		var_85_cvector = CVector(0,0,0);
		func_929(var_85_cvector);
		var_1_object = var_85_cvector + var_20_cvector;
	}
Label_748:
	return 8;
	
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	func_749(var_13_object);
	var_13_object = Obj();
	func_1436();
	return 0;
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0;
	IsOverrideActive(var_15_bool);
	var_16_bool = var_15_bool == 0; //@nz
	if(var_16_bool != 0) {
		var_17_object = Obj();
		var_13_object = var_17_object;
		func_1370(var_17_object);
	}
	return 2;
}


task_4_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_int, var_15_float, var_16_float)
{
	return 0;
}


task_4_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_string)
{
	return 0;
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_int, var_15_float, var_16_float)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0;
	var_13_object = var_17_object;
	var_14_int = var_18_int;
	var_15_float = var_19_float;
	func_1000(var_17_object, var_18_int, var_19_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_int, var_15_float, var_16_float, var_17_cvector, var_18_cvector)
{
	var_19_object = Obj(); var_20_int = 0; var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0);
	var_13_object = var_19_object;
	var_14_int = var_20_int;
	var_15_float = var_21_float;
	var_17_cvector = var_22_cvector;
	var_18_cvector = var_23_cvector;
	func_1068(var_21_float, var_22_cvector, var_23_cvector);
	return 0;
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	var_14_object = Obj();
	var_13_object = var_14_object;
	func_1393(var_14_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool)
{
	
Label_366:
	var_13_float = 0; var_14_float = 0;
	func_404(var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, (float)300, (float)100);
	Sleep((int)3);
	goto Label_366;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_17_int, var_18_object)
{
	var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; var_27_bool = 0;
	var_0_object = var_18_object;
	var_28_bool = 0; var_29_object = Obj(); var_30_float = 0;
	var_18_object = var_29_object;
	func_1087(var_28_bool, var_29_object, (float)70.0);
	var_75_bool = var_28_bool == 0; //@nz
	if(var_75_bool != 0) {
		var_17_int = -2;
		return 8;
	}
	CreateDialog(var_24_object);
	var_76_int = 0;
	func_1385(var_76_int);
	@@var_24_object:SetNPCName(var_76_int);
	var_77_int = 0;
	func_1383(var_77_int);
	@@var_24_object:SetNPCDescription(var_77_int);
	var_78_string = "";
	func_1387(var_78_string);
	@@var_24_object:SetPhoto(var_78_string);
	var_79_string = "";
	func_1389(var_79_string);
	@@var_24_object:SetPhoto2(var_79_string);
	var_80_int = 0;
	func_1347(var_80_int);
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
	var_158_bool = var_27_bool == 0; //@nz
	if(var_158_bool != 0) {
		sync();
		@@var_24_object:IsDialogEnd(var_27_bool);
		goto Label_56;
	}
	var_18_object = Obj();
	func_1156();
	StopDialog(var_24_object);
	@@var_24_object:GetReturnValue((int)-1);
	var_26_int = var_17_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1280(var_76_float, var_77_cvector, var_78_cvector)
{
	var_79_int = var_77_cvector | var_78_cvector;
	var_80_int = var_77_cvector | var_77_cvector;
	var_81_int = var_78_cvector | var_78_cvector;
	var_82_float = var_80_int * var_81_int;
	var_83_float = sqrt(var_82_float);
	var_76_float = var_79_int / var_83_float;
	return 0;
}


func_897(var_51_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_52_string = "";
	var_51_string = var_52_string;
	func_1223(var_52_string);
	PlayAnimation("all", var_51_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_51_string);
	RemoveEnvelope();
	return 0;
}


func_1156()
{
	var_160_bool = 0; var_161_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_163_bool = 0;
	func_1391(var_163_bool);
	if(var_163_bool != 0) {
	} else {
		HasAnimationTrack(var_161_bool, "head");
		var_165_bool = var_161_bool;
		if(var_165_bool == 0) goto Label_1173;
		UnlookAsync("head");
	}
Label_1173:
	return 2;
	
}


func_1288(var_98_int, var_99_string)
{
	var_100_int = 0; var_101_int = 0;
	GetVariable(var_99_string, var_101_int);
	var_101_int = var_98_int;
	return 2;
}


func_1293(var_22_bool, var_23_string, var_24_string)
{
	var_25_object = Obj(); var_26_object = Obj();
	FindActor(var_26_object, var_23_string);
	var_27_bool = var_26_object == 0; //@ne
	if(var_27_bool != 0) {
		var_22_bool = 0;
		return 2;
	}
	Trigger(var_26_object, var_24_string);
	var_22_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_781(var_28_object)
{
	EventDisable(0);
	var_29_object = Obj();
	var_28_object = var_29_object;
	func_806(var_29_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_792:
	Hold();
	goto Label_792;
}
EMIT "Return(); Pop(0)";


func_404(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_13_float, var_14_float)
{
	var_15_bool = 0;
	func_1082(var_15_bool);
	var_18_bool = var_15_bool == 0; //@nz
	if(var_18_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_13_float;
	var_1_object = var_14_float;
	SetTimer((int)10, (float)1.0);
	func_483();
	var_73_bool = var_3_string == 0; //@nz
	if(var_73_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_1174(var_134_string)
{
	var_135_bool = 0; var_136_float = 0; var_137_float = 0; var_138_bool = 0; var_139_float = 0; var_140_float = 0;
	lshHasAnimation(var_138_bool, var_134_string);
	var_141_bool = var_138_bool;
	if(var_141_bool != 0) {
		lshGetAnimTimes(var_134_string, var_139_float, var_140_float);
		lshPlayAnimation(var_139_float, var_140_float, (bool)0);
	} else {
		var_144_int = "Can't find lsh animation : " + var_134_string;
		Trace(var_144_int);
	}
	return 6;
	
}


func_1305(var_44_string, var_45_int)
{
	var_46_string = ""; var_47_string = "";
	var_48_int = var_45_int;
	if(var_48_int != 0) {
		"idle" = "idle" + var_45_int;
	}
	var_47_string = var_44_string;
	return 2;
}


func_1312(var_38_int)
{
	var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_bool = 0;
	var_41_int = 0;
	
Label_1314:
	var_44_string = ""; var_45_int = 0;
	var_41_int = var_45_int;
	func_1305(var_44_string, var_45_int);
	HasAnimation(var_42_bool, "all", var_44_string);
	var_49_bool = var_42_bool == 0; //@nz
	if(var_49_bool != 0) {
	} else {
		var_41_int = var_41_int + (int)1;
		goto Label_1314;
	}
	var_41_int = var_38_int;
	return 4;
	
}


func_929(var_85_cvector)
{
	var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0);
	GetPosition(var_87_cvector);
	var_87_cvector = var_85_cvector;
	return 2;
}


func_162(var_2_object, var_108_string)
{
	var_109_bool = 0;
	func_1391(var_109_bool);
	var_110_bool = var_109_bool == 0; //@nz
	if(var_110_bool != 0) {
		return 0;
	}
	var_111_bool = var_108_string == var_2_object;
	if(var_111_bool != 0) {
		return 0;
	}
	var_112_string = ""; var_113_bool = 0;
	var_108_string = var_112_string;
	var_115_bool = var_108_string == "";
	if(var_115_bool != 0) {
		var_113_bool = 0;
	} else {
		var_113_bool = 1;
	}
	func_1190(var_112_string, var_113_bool);
	var_2_object = var_108_string;
	return 0;
	
}


func_1190(var_112_string, var_113_bool)
{
	var_116_bool = 0; var_117_float = 0; var_118_float = 0; var_119_bool = 0; var_120_float = 0; var_121_float = 0;
	lshHasAnimation(var_119_bool, var_112_string);
	var_122_bool = var_119_bool;
	if(var_122_bool != 0) {
		lshGetAnimTimes(var_112_string, var_120_float, var_121_float);
		lshPlayAnimation(var_120_float, var_121_float, var_113_bool);
	} else {
		var_124_int = "Can't find lsh animation : " + var_112_string;
		Trace(var_124_int);
	}
	return 6;
	
}


func_934(var_47_cvector, var_48_object)
{
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
	GetPosition(var_51_cvector);
	@@var_48_object:GetPosition(var_52_cvector);
	var_47_cvector = var_52_cvector - var_51_cvector;
	return 4;
}


func_806(var_29_object)
{
	var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_object = Obj(); var_36_bool = 0; var_37_bool = 0; var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_string = ""; var_45_object = Obj(); var_46_bool = 0; var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0);
	var_50_bool = var_29_object == 0; //@ne
	if(var_50_bool != 0) {
		var_51_string = "";
		func_897("fdie");
	} else {
		@@var_29_object:GetPosition(var_40_cvector);
		GetPosition(var_41_cvector);
		GetDirection(var_42_cvector);
		var_43_cvector = var_41_cvector - var_40_cvector;
		var_83_float = GetByIndex(var_43_cvector, 0);
		var_84_float = GetByIndex(var_42_cvector, 0);
		var_85_float = var_83_float * var_84_float;
		var_86_float = GetByIndex(var_43_cvector, 2);
		var_87_float = GetByIndex(var_42_cvector, 2);
		var_88_float = var_86_float * var_87_float;
		var_89_int = var_85_float + var_88_float;
		var_91_bool = var_89_int >= (int)0;
		if(var_91_bool != 0) {
			var_44_string = "fdie";
		} else {
				var_44_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_29_object = var_45_object;
		var_94_bool = IsFuncExist(var_29_object, "GetScriptProperty", (int)2);
		if(var_94_bool != 0) {
			@@var_29_object:HasScriptProperty(var_46_bool, "Owner");
			var_96_bool = var_46_bool;
			if(var_96_bool != 0) {
				@@var_29_object:GetScriptProperty(var_45_object, "Owner");
				var_98_bool = var_45_object == 0; //@ne
				if(var_98_bool != 0) {
					var_29_object = var_45_object;
				}
			}
		}
		var_101_bool = IsFuncExist(var_45_object, "@GetEyesHeight", (int)1);
		if(var_101_bool != 0) {
			@@var_45_object:GetEyesHeight(var_48_float);
			var_49_cvector = CVector(0.0, 0.0, 0.0);
			var_102_float = GetByIndex(var_49_cvector, 1);
			var_48_float = var_102_float;
			SetByIndex(var_49_cvector, 1) = var_102_float;
			LookAsync(var_29_object, "head", var_49_cvector);
			var_47_bool = 1;
		} else {
			var_47_bool = 0;

		}
		var_104_string = "";
		var_44_string = var_104_string;
		func_1223(var_104_string);
		PlayAnimation("all", var_44_string);
		WaitForAnimEnd();
		var_106_bool = var_47_bool;
		if(var_106_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_44_string);
		RemoveEnvelope();
		var_45_object = 0;
	}
	return 20;
	
}


func_1068(var_19_object, var_22_cvector, var_23_cvector)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj();
	GetScene(var_26_object);
	AddActorByType(var_27_object, "scripted", var_26_object, var_22_cvector, var_23_cvector, "blood_dir.xml");
	var_30_object = Obj();
	var_19_object = var_30_object;
	func_956(var_30_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_941(var_20_float, var_21_object)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0);
	GetPosition(var_25_cvector);
	@@var_21_object:GetPosition(var_26_cvector);
	var_27_cvector = var_26_cvector - var_25_cvector;
	var_20_float = var_27_cvector | var_27_cvector;
	return 6;
}


func_431(var_0_object, var_1_object, var_4_bool, var_16_bool)
{
	var_17_float = 0; var_18_float = 0;
	var_19_bool = var_4_bool == 0; //@ne
	if(var_19_bool != 0) {
		var_16_bool = 0;
		return 2;
	}
	var_20_float = 0; var_21_object = Obj();
	var_21_object = var_4_bool;
	func_941(var_20_float, var_21_object);
	var_18_float = sqrt(var_20_float);
	var_28_object = var_2_object;
	if(var_28_object != 0) {
		var_18_float = var_18_float - var_1_object;
	}
	var_16_bool = var_18_float < var_0_object;
	return 2;
}


func_1329()
{
	SetVariable("oob5GathererWife1", (int)1);
	return 0;
}


func_562(var_63_bool)
{
	var_63_bool = 1;
	return 0;
}


func_564()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1205(var_30_object)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_float = 0; var_34_cvector = CVector(0,0,0);
	@@var_30_object:GetEyesHeight(var_33_float);
	var_34_cvector = CVector(0.0, 0.0, 0.0);
	var_35_float = GetByIndex(var_34_cvector, 1);
	var_33_float = var_35_float;
	SetByIndex(var_34_cvector, 1) = var_35_float;
	LookAsync(var_30_object, "head", var_34_cvector);
	return 4;
}


func_949(var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj();
	FindActor(var_30_object, "player");
	var_30_object = var_28_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1335(var_96_bool)
{
	var_98_int = 0; var_99_string = "";
	func_1288(var_98_int, "oob5GathererWife1");
	var_103_bool = var_98_int == (int)0;
	if(var_103_bool != 0) {
		var_96_bool = 1;
		return 0;
	}
	var_96_bool = 0;
	return 0;
}


func_569()
{
	var_22_object = Obj(); var_23_object = Obj();
	GetScene(var_23_object);
	var_24_object = Obj();
	func_1264(var_24_object);
	@@var_23_object:RemoveStationaryActor(var_24_object);
	
Label_577:
	var_27_object = Obj();
	func_949(Obj());
	var_28_object = var_27_object;
	func_624(var_21_bool, var_22_object, var_23_object, var_27_object);
	Sleep((int)1);
	goto Label_577;
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


func_1082(var_15_bool)
{
	var_16_bool = 0; var_17_bool = 0;
	IsLoaded(var_17_bool);
	var_17_bool = var_15_bool;
	return 2;
}


func_956(var_30_object)
{
	var_31_bool = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_string = ""; var_38_bool = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_string = "";
	var_45_bool = var_30_object == 0; //@ne
	if(var_45_bool != 0) {
		return 14;
	}
	IsDead(var_38_bool);
	var_46_bool = var_38_bool;
	if(var_46_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_39_int);
	var_48_bool = var_39_int < (int)0;
	if(var_48_bool != 0) {
		return 14;
	}
	@@var_30_object:GetPosition(var_40_cvector);
	GetPosition(var_41_cvector);
	GetDirection(var_42_cvector);
	var_43_cvector = var_41_cvector - var_40_cvector;
	var_49_float = GetByIndex(var_43_cvector, 0);
	var_50_float = GetByIndex(var_42_cvector, 0);
	var_51_float = var_49_float * var_50_float;
	var_52_float = GetByIndex(var_43_cvector, 2);
	var_53_float = GetByIndex(var_42_cvector, 2);
	var_54_float = var_52_float * var_53_float;
	var_55_int = var_51_float + var_54_float;
	var_57_bool = var_55_int >= (int)0;
	if(var_57_bool != 0) {
		var_44_string = "fhit";
	} else {
		var_44_string = "bhit";
	}
	var_60_int = var_44_string + "1";
	var_62_int = var_44_string + "2";
	FadeSecondaryAnimation("hit_react", var_60_int, var_62_int, (int)-10);
	return 14;
	
}


func_1087(var_28_bool, var_29_object, var_30_float)
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
	func_1270(var_55_cvector, var_56_cvector);
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
	func_1391(var_71_bool);
	if(var_71_bool != 0) {
	} else {
		HasAnimationTrack(var_48_bool, "head");
		var_73_bool = var_48_bool;
		if(var_73_bool == 0) goto Label_1150;
		LookAsyncCamera("head");
	}
Label_1150:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_28_bool = 1;
	return 18;
	
}


func_1216()
{
	var_16_bool = 0;
	func_1391(var_16_bool);
	if(var_16_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1347(var_80_int)
{
	var_81_int = 0; var_82_int = 0;
	GetVariable("branch", var_82_int);
	var_85_bool = var_82_int == (int)0;
	if(var_85_bool != 0) {
		var_80_int = 1;
		return 2;
	EMIT "GOTO 0x552";
	}
	var_87_bool = var_82_int == (int)1;
	if(var_87_bool != 0) {
		var_80_int = 2;
		return 2;
	}
	var_80_int = 3;
	return 2;
}


func_1223(var_52_string)
{
	var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_int = 0; var_57_bool = 0; var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_bool = 0; var_62_int = 0; var_63_bool = 0; var_64_int = 0; var_65_bool = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0);
	IsExisting3DSound(var_61_bool, var_52_string);
	var_69_bool = var_61_bool == 0; //@nz
	if(var_69_bool != 0) {
		var_62_int = 0;

	Label_1229:
		var_71_int = var_62_int + (int)1;
		var_72_int = var_52_string + var_71_int;
		IsExisting3DSound(var_63_bool, var_72_int);
		var_73_bool = var_63_bool == 0; //@nz
		if(var_73_bool != 0) {
		} else {
			var_62_int = var_62_int + (int)1;
			goto Label_1229;
		}
		var_74_bool = var_62_int == 0; //@nz
		if(var_74_bool != 0) {
			return 16;
		}
		irand(var_64_int, var_62_int);
		var_76_int = var_64_int + (int)1;
		var_52_string = var_52_string + var_76_int;
	}
	Is3DSoundLoaded(var_65_bool, var_52_string);
	var_77_bool = var_65_bool;
	if(var_77_bool != 0) {
		GetEyesHeight(var_66_float);
		GetDirection(var_67_cvector);
		var_68_cvector = var_67_cvector * (int)50;
		var_79_float = GetByIndex(var_68_cvector, 1);
		var_79_float = var_79_float + var_66_float;
		SetByIndex(var_68_cvector, 1) = var_79_float;
		PlayGlobalSound(var_52_string, var_68_cvector);
	}
	return 16;
	
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_89_object, var_90_object)
{
	var_0_object = var_90_object;
	var_1_object = var_89_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_96_bool = 0; var_97_object = Obj();
		var_97_object = var_1_object;
		func_1335(var_97_object);
		if(var_96_bool != 0) {
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_1329();
			var_108_string = "";
			func_162(var_90_object, "Neutral");
			@@@var_0_object:SetMessage((int)518656);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518795, (int)19900, (int)19898);
			@@@var_0_object:AddReply((int)518796, (int)19900, (int)19899);
		} else {
				var_150_string = "";
				func_162(var_90_object, "Neutral");
				@@@var_0_object:SetMessage((int)518660);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)518661, (int)-1, (int)19753);
				@@@var_0_object:AddReply((int)518800, (int)-1, (int)19903);
				goto Label_132;
		}
	}
Label_132:
	var_132_bool = 0;
	func_1391(var_132_bool);
	if(var_132_bool != 0) {

	Label_136:
		lshWaitForAnimEnd();
		var_133_string = var_3_string;
		if(var_133_string != 0) {
		} else {
			var_134_string = "";
			var_134_string = var_2_object;
			func_1174(var_134_string);
			goto Label_136;
	}
		PlayAnimation("all", "idle");

	Label_151:
		WaitForAnimEnd();
		var_147_string = var_3_string;
		if(var_147_string != 0) {
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


func_594(var_0_object, var_27_cvector, var_28_float)
{
	var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_float = 0;
	GetPosition(var_35_cvector);
	@@@var_0_object:GetPosition(var_36_cvector);
	GetDirection(var_37_cvector);
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0);
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0);
	var_44_cvector = var_35_cvector - var_36_cvector;
	func_1270(var_43_cvector, var_44_cvector);
	var_51_float = var_37_cvector * (float)0.75;
	var_42_cvector = var_43_cvector + var_51_float;
	func_1270(var_41_cvector, var_42_cvector);
	var_41_cvector = var_38_cvector;
	FindLongestDir(var_39_cvector, var_40_float, var_38_cvector, var_28_float, (int)32, (float)7000.0);
	var_40_float = var_40_float - (int)100;
	var_56_bool = var_40_float < (int)0;
	if(var_56_bool != 0) {
		var_40_float = 0;
	}
	var_27_cvector = var_39_cvector * var_40_float;
	return 12;
}


func_1364(var_18_int)
{
	var_19_int = 0; var_20_int = 0;
	GetVariable("branch", var_20_int);
	var_20_int = var_18_int;
	return 2;
}


func_469(var_2_object, var_3_string)
{
	func_564();
	KillTimer((int)10);
	var_17_object = var_2_object;
	if(var_17_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_1370(var_17_object)
{
	var_18_int = 0;
	func_1364(var_18_int);
	var_23_bool = var_18_int == (int)1;
	if(var_23_bool != 0) {
		WorkWithCorpse(var_17_object);
	} else {
		Barter(var_17_object);
	}
	return 0;
	
}


func_483()
{
	var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_float = 0; var_35_bool = 0;
	WaitForAnimEnd();
	var_36_bool = 0;
	func_1082(var_36_bool);
	var_37_bool = var_36_bool == 0; //@nz
	if(var_37_bool != 0) {
		return 14;
	}
	func_1312((int)0);
	var_38_int = var_29_int;
	var_30_int = 0;
	
Label_497:
	var_51_bool = 0;
	var_51_bool = 0;
	var_53_bool = var_30_int < (int)5;
	if(var_53_bool != 0) {
		var_54_bool = 0;
		func_1082(var_54_bool);
		if(var_54_bool != 0) {
			var_51_bool = 1;
		}
	}
	if(var_51_bool != 0) {
		irand(var_31_int, (int)3);
		var_57_bool = var_31_int == (int)0;
		if(var_57_bool != 0) {
			var_58_int = var_29_int;
			if(var_58_int == 0) goto Label_530;
			irand(var_32_int, var_29_int);
			var_60_string = ""; var_61_int = 0;
			var_32_int = var_61_int;
			func_1305(var_60_string, var_61_int);
			PlayAnimation("all", var_60_string);
			WaitForAnimEnd(var_33_bool);
			var_62_bool = var_33_bool == 0; //@nz
			if(var_62_bool != 0) {
			} else {
		} else {
				var_67_bool = var_31_int == (int)1;
				if(var_67_bool != 0) {
					rand(var_34_float, (int)4);
					var_70_int = var_34_float + (int)1;
					Sleep(var_70_int, var_35_bool);
					var_71_bool = var_35_bool == 0; //@nz
					if(var_71_bool != 0) {
						goto Label_559;
					}
					goto Label_548;
				}
				var_72_int = var_30_int;
				if(var_72_int == 0) goto Label_548;
				goto Label_559;
		}
		Label_548:
			var_63_bool = 0;
			func_562(var_63_bool);
			var_64_bool = var_63_bool == 0; //@nz
			if(var_64_bool != 0) {
				goto Label_559;
			}
			ResetAAS();
			var_30_int = var_30_int + (int)1;
			goto Label_497;

		}
	}
Label_559:
	ResetAAS();
	return 14;
	
}


func_1383(var_77_int)
{
	var_77_int = 518607;
	return 0;
}


func_1000(var_17_object, var_18_int, var_19_float)
{
	var_20_cvector = CVector(0,0,0); var_21_object = Obj(); var_22_int = 0; var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_int = 0; var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_object = Obj(); var_31_int = 0; var_32_bool = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_int = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0);
	var_38_bool = 0;
	var_38_bool = 0;
	var_39_bool = 0;
	var_39_bool = 0;
	var_40_object = var_17_object;
	if(var_40_object != 0) {
		var_42_bool = var_18_int != (int)4;
		if(var_42_bool != 0) {
			var_39_bool = 1;
		}
	}
	if(var_39_bool != 0) {
		var_44_bool = var_18_int != (int)5;
		if(var_44_bool != 0) {
			var_38_bool = 1;
		}
	}
	if(var_38_bool != 0) {
		var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0);
		var_47_cvector = CVector(0,0,0); var_48_object = Obj();
		var_17_object = var_48_object;
		func_934(var_47_cvector, var_48_object);
		var_47_cvector = var_46_cvector;
		func_1270(var_45_cvector, var_46_cvector);
		var_45_cvector = var_29_cvector;
		CreateVectorVector(var_30_object);
		var_31_int = 1;

	Label_1029:
		var_59_int = "hit" + var_31_int;
		GetGeometryLocator(var_59_int, var_32_bool, var_33_cvector, var_34_cvector);
		var_60_bool = var_32_bool == 0; //@nz
		if(var_60_bool != 0) {
		} else {
			var_108_int = var_34_cvector | var_29_cvector;
			var_110_bool = var_108_int >= (float)0.7071067690849304;
			if(var_110_bool != 0) {
				@@var_30_object:add(var_33_cvector);
			}
			var_31_int = var_31_int + (int)1;
			goto Label_1029;
		}
		@@var_30_object:size(var_35_int);
		var_61_int = var_35_int;
		if(var_61_int != 0) {
			irand(var_36_int, var_35_int);
			@@var_30_object:get(var_37_cvector, var_36_int);
			var_62_object = Obj(); var_63_int = 0; var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0);
			var_17_object = var_62_object;
			var_18_int = var_63_int;
			var_19_float = var_64_float;
			var_37_cvector = var_65_cvector;
			var_66_cvector = -var_29_cvector;
			func_1068(var_64_float, var_65_cvector, var_66_cvector);
			return 18;
		}
		var_30_object = 0;
	}
	var_107_object = Obj();
	var_17_object = var_107_object;
	func_956(var_107_object);
	return 18;
	
}


func_1385(var_76_int)
{
	var_76_int = 518606;
	return 0;
}


func_1387(var_78_string)
{
	var_78_string = "ui/NPC_Citizen2.png";
	return 0;
}


func_1389(var_79_string)
{
	var_79_string = "ui/NPC_Citizen2_b.png";
	return 0;
}


func_749(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_1391(var_71_bool)
{
	var_71_bool = 0;
	return 0;
}


func_1264(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj();
	self(var_19_object);
	var_19_object = var_17_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_624(var_0_object, var_1_object, var_2_object, var_27_object)
{
	var_32_cvector = CVector(0,0,0); var_33_float = 0; var_34_bool = 0; var_35_cvector = CVector(0,0,0); var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_float = 0; var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_float = 0;
	var_0_object = var_27_object;
	var_42_cvector = CVector(0,0,0); var_43_float = 0;
	func_594(var_41_float, var_42_cvector, (float)1.7453293800354004);
	var_42_cvector = var_37_cvector;
	var_38_float = var_37_cvector | var_37_cvector;
	var_73_bool = var_38_float < (float)2500.0;
	if(var_73_bool != 0) {
		var_74_cvector = CVector(0,0,0); var_75_float = 0;
		func_594(var_41_float, var_74_cvector, (float)2.6179938316345215);
		var_74_cvector = var_37_cvector;
		var_38_float = var_37_cvector | var_37_cvector;
		var_77_bool = var_38_float < (float)2500.0;
		if(var_77_bool != 0) {
			var_79_float = sqrt(var_38_float);
			var_80_int = "Can't retreat, distance: " + var_79_float;
			Trace(var_80_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_82_float = GetByIndex(var_37_cvector, 0);
	var_83_float = GetByIndex(var_37_cvector, 2);
	Rotate(var_82_float, var_83_float);
	var_84_cvector = CVector(0,0,0);
	func_929(var_84_cvector);
	var_1_object = var_84_cvector + var_37_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_666:
	MovePoint(var_1_object, (int)1, var_39_bool);
	var_90_bool = var_39_bool;
	if(var_90_bool != 0) {
		var_91_bool = var_0_object == 0; //@ne
		if(var_91_bool != 0) {
			goto Label_696;
		EMIT "GOTO 0x2b6";

		Label_696:
			return 10;
		}
		var_92_cvector = CVector(0,0,0); var_93_float = 0;
		func_594(var_41_float, var_92_cvector, (float)2.6179938316345215);
		var_92_cvector = var_40_cvector;
		var_41_float = var_40_cvector | var_40_cvector;
		var_95_bool = var_41_float >= (float)2500.0;
		if(var_95_bool != 0) {
			var_96_cvector = CVector(0,0,0);
			func_929(var_96_cvector);
			var_1_object = var_96_cvector + var_40_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_696;
		}
	}
	var_99_bool = var_2_object == 0; //@nz
	if(var_99_bool == 1) goto Label_666;
	
}


func_1393(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj();
	GetScene(var_16_object);
	var_17_object = Obj();
	func_1264(var_17_object);
	@@var_16_object:RemoveStationaryActor(var_17_object);
	SetVariable("b5q01NudeDead", (bool)1);
	var_22_bool = 0; var_23_string = ""; var_24_string = "";
	func_1293(var_22_bool, "quest_b5_01", "gwife_dead");
	var_28_object = Obj();
	var_14_object = var_28_object;
	TaskCall(4);
	func_781(var_28_object);
	TaskReturn();
	return 2;
}
EMIT "Stack[-1] = 0";


func_1270(var_45_cvector, var_46_cvector)
{
	var_53_float = 0; var_54_float = 0;
	var_55_int = var_46_cvector | var_46_cvector;
	var_54_float = sqrt(var_55_int);
	var_56_float = 9.999999974752427e-07;
	var_57_bool = var_54_float < var_56_float;
	if(var_57_bool != 0) {
		var_45_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_45_cvector = var_46_cvector / var_54_float;
	return 2;
}


func_765(var_0_object, var_65_bool)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0);
	GetDirection(var_68_cvector);
	var_70_cvector = CVector(0,0,0); var_71_object = Obj();
	var_71_object = var_0_object;
	func_934(var_70_cvector, var_71_object);
	var_70_cvector = var_69_cvector;
	var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	var_68_cvector = var_77_cvector;
	var_69_cvector = var_78_cvector;
	func_1280(var_76_float, var_77_cvector, var_78_cvector);
	var_65_bool = var_76_float >= (float)-0.3420201241970062;
	return 4;
}


