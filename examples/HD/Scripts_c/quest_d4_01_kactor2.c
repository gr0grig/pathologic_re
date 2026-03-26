// @IMPORTS: GetPosition/1,SetTimer/2,Sleep/1,KillTimer/1,Trace/1,Stop/0,FindPathTo/2,RotatePath/2,FollowPath/5,Sleep/2,RequestClearPath/1,GetRandomPFPointInCircle/4,SetPosition/1,rand/2,FollowPath/3,GetCameraFarDistance/1,StopGroup0/0,FindShiftedPathTo/2,WaitForAnimEnd/0,irand/2,PlayAnimation/2,WaitForAnimEnd/1,ResetAAS/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetScene/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,lshStopSpeech/0,GetVariable/2,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,FindActor/2,Trigger/2,HasAnimation/3,TriggerWorld/2,SetVariable/2
// @STRINGS: W:On Actor Stuck|A:GetPosition|A:GetPFPosition|W:walk|W:run|W:On Actor Stuck 1|W:OnActorStuck|W:Random point found|W:Random point not found|W:all|A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:idle|W:quest_d4_01|W:key2_done|A:GetRegionByPt|W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|A:GetEyesHeight|W:head|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:playsound|W:giveitem|W:d4q01KeyWasted|W:soborkey is given|W:d4q01_sobor_key|W:init_sobor|W:ood4WastedMale1|W:tvirin is given|W:tvirin|A:SetReturnValue|W:branch|W:ui/NPC_Citizen3.png|W:ui/NPC_Citizen3_b.png
// @GLOBALS: 0:int:,1:object:
// @RUN_OP: 0x46a
// @RUN_TASK: 6
// @TASK_0: vars=bool,object,cvector,int,int,int params=1
// @EVENT_7: op=0x31 vars=int
// @EVENT_10: op=0xda vars=object
// @EVENT_41: op=0xe5 vars=object
// @TASK_1: vars=bool,object,cvector,int,int,int params=1
// @EVENT_7: op=0x117 vars=int
// @EVENT_28: op=0x13c vars=
// @EVENT_10: op=0x1cc vars=object
// @EVENT_41: op=0x1d7 vars=object
// @TASK_2: vars=bool,bool params=0
// @EVENT_10: op=0x233 vars=object
// @EVENT_28: op=0x237 vars=
// @EVENT_41: op=0x241 vars=object
// @TASK_3: vars= params=0
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x360 vars=int,int
// @TASK_6: vars= params=0
// @EVENT_0: op=0x478 vars=object
// @TASK_7: vars= params=1
// @STANDALONE_EVENT_41: op=0x659 vars=object
// @PE: 0x0,0xc8,0xda,0xe5,0xee,0xf9,0x1ba,0x1cc,0x1d7,0x1e0,0x1eb,0x233,0x241,0x2ed,0x34a,0x360,0x461,0x505,0x659,0x65b,0x661,0x675,0x67b,0x686,0x68b,0x690

task_0_event_7(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_int, var_7_bool, var_8_object, var_9_cvector, var_10_int, var_11_int, var_12_int, var_13_bool, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_float = 0;
	var_27_bool = var_19_bool == (int)10;
	if(var_27_bool != 0) {
		var_28_int = 0;
		func_1312(var_28_int);
		var_36_int = GlobalVars[0];
		var_37_bool = var_28_int != var_36_int;
		if(var_37_bool != 0) {
			func_222(var_25_float);
		}
	}
	var_40_bool = var_19_bool == (int)123;
	if(var_40_bool != 0) {
		GetPosition(var_23_cvector);
		var_24_cvector = var_23_cvector - var_2_cvector;
		var_25_float = var_24_cvector | var_24_cvector;
		var_41_bool = 0;
		var_41_bool = 1;
		var_43_bool = var_25_float > (float)10000.0;
		if(var_43_bool != 1) {
			var_44_bool = var_4_int != var_3_int;
			if(var_44_bool != 1) {
				var_41_bool = 0;
			}
		}
		if(var_41_bool != 0) {
			var_2_cvector = var_23_cvector;
			var_4_int = var_3_int;
			return 6;
		}
		var_5_int = var_5_int + (int)1;
		var_47_bool = var_5_int > (int)7;
		if(var_47_bool != 0) {
			var_5_int = 0;
			Trace("On Actor Stuck");
			func_222(var_25_float);
		}
	}
	var_49_int = 0;
	var_19_bool = var_49_int;
	func_200(var_24_cvector, var_25_float, var_49_int);
	return 6;
}


task_0_event_10(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_int, var_11_int, var_12_int, var_13_bool, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	RequestClearPath(var_19_bool);
	return 0;
}


task_0_event_41(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_int, var_11_int, var_12_int, var_13_bool, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	func_222(var_19_bool);
	var_19_bool = Obj();
	func_1625();
	return 0;
}


task_1_event_7(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_bool, var_7_object, var_8_cvector, var_9_int, var_10_int, var_11_int, var_12_int, var_13_bool, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_float = 0;
	var_27_bool = var_19_bool == (int)123;
	if(var_27_bool != 0) {
		GetPosition(var_23_cvector);
		var_24_cvector = var_23_cvector - var_2_cvector;
		var_25_float = var_24_cvector | var_24_cvector;
		var_28_bool = 0;
		var_28_bool = 1;
		var_30_bool = var_25_float > (float)10000.0;
		if(var_30_bool != 1) {
			var_31_bool = var_4_int != var_3_int;
			if(var_31_bool != 1) {
				var_28_bool = 0;
			}
		}
		if(var_28_bool != 0) {
			var_2_cvector = var_23_cvector;
			var_4_int = var_3_int;
			return 6;
		}
		var_5_int = var_5_int + (int)1;
		var_34_bool = var_5_int > (int)7;
		if(var_34_bool != 0) {
			var_5_int = 0;
			Trace("On Actor Stuck 1");
			func_464(var_25_float);
		}
	}
	var_37_int = 0;
	var_19_bool = var_37_int;
	func_442(var_24_cvector, var_25_float, var_37_int);
	return 6;
}


task_1_event_28(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_bool, var_7_object, var_8_cvector, var_9_int, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_cvector = CVector(0,0,0); var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_bool = 0; var_24_cvector = CVector(0,0,0);
	Trace("OnActorStuck");
	func_464(var_24_cvector);
	GetPosition(var_22_cvector);
	GetRandomPFPointInCircle(var_24_cvector, var_22_cvector, (float)0.30000001192092896, var_23_bool);
	var_28_bool = var_23_bool;
	if(var_28_bool != 0) {
		Trace("Random point found");
		SetPosition(var_24_cvector);
	} else {
		Trace("Random point not found");
	}
	return 6;
	
}


task_1_event_10(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_bool, var_7_object, var_8_cvector, var_9_int, var_10_int, var_11_int, var_12_object, var_13_bool, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	RequestClearPath(var_19_bool);
	return 0;
}


task_1_event_41(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_bool, var_7_object, var_8_cvector, var_9_int, var_10_int, var_11_int, var_12_object, var_13_bool, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	func_464(var_19_bool);
	var_19_bool = Obj();
	func_1625();
	return 0;
}


task_2_event_10(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_bool, var_7_object, var_8_cvector, var_9_int, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	RequestClearPath(var_19_bool);
	return 0;
}


task_2_event_28(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_bool, var_7_object, var_8_cvector, var_9_int, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	Stop();
	return 0;
}


task_2_event_41(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_bool, var_7_object, var_8_cvector, var_9_int, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	func_570(var_18_string, var_19_bool);
	var_19_bool = Obj();
	func_1625();
	return 0;
}


task_5_event_11(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_bool, var_7_object, var_8_cvector, var_9_int, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool, var_19_int, var_20_int)
{
	if((int)1 != 0) {
		func_1523();
		var_24_bool = var_20_int == (int)10685;
		if(var_24_bool != 0) {
			var_25_object = Obj(); var_26_object = Obj();
			var_25_object = var_1_object;
			var_26_object = var_0_bool;
			func_1633(var_26_object);
			var_57_object = Obj(); var_58_object = Obj();
			var_57_object = var_1_object;
			var_58_object = var_0_bool;
			func_1627();
		}
		var_62_bool = var_20_int == (int)10687;
		if(var_62_bool != 0) {
			var_63_object = Obj(); var_64_object = Obj();
			var_63_object = var_1_object;
			var_64_object = var_0_bool;
			func_1653();
			var_67_object = Obj(); var_68_object = Obj();
			var_67_object = var_1_object;
			var_68_object = var_0_bool;
			func_1670(var_68_object);
		}
		var_71_bool = var_20_int == (int)10688;
		if(var_71_bool != 0) {
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_bool;
			func_1653();
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_bool;
			func_1675(var_75_object);
		}
		var_78_bool = var_20_int == (int)10698;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_bool;
			func_1659(var_80_object);
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_bool;
			func_1627();
		}
		var_88_bool = var_19_int == (int)10680;
		if(var_88_bool != 0) {
			var_89_bool = 0; var_90_object = Obj();
			var_90_object = var_1_object;
			func_1680(var_90_object);
			if(var_89_bool != 0) {
				var_97_string = "";
				func_842(var_20_int, "Neutral");
				@@@var_0_bool:SetMessage((int)509701);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)509702, (int)10682, (int)10681);
				@@@var_0_bool:AddReply((int)509711, (int)10682, (int)10691);
				return 0;
			}
			var_121_string = "";
			func_842(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)509712);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509713, (int)10695, (int)10694);
			@@@var_0_bool:AddReply((int)509720, (int)10702, (int)10701);
			@@@var_0_bool:AddReply((int)509723, (int)10695, (int)10705);
			@@@var_0_bool:AddReply((int)509724, (int)-1, (int)10707);
			return 0;
		}
		var_136_bool = var_19_int == (int)10702;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_842(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)509721);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509722, (int)10697, (int)10703);
			return 0;
		}
		var_143_bool = var_19_int == (int)10695;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_842(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)509714);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509715, (int)10697, (int)10696);
			@@@var_0_bool:AddReply((int)509719, (int)-1, (int)10700);
			return 0;
		}
		var_153_bool = var_19_int == (int)10697;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_842(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)509716);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509717, (int)-1, (int)10698);
			@@@var_0_bool:AddReply((int)509718, (int)-1, (int)10699);
			return 0;
		}
		var_163_bool = var_19_int == (int)10682;
		if(var_163_bool != 0) {
			var_164_string = "";
			func_842(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)509703);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509704, (int)10684, (int)10683);
			@@@var_0_bool:AddReply((int)509710, (int)10684, (int)10689);
			return 0;
		}
		var_173_bool = var_19_int == (int)10684;
		if(var_173_bool != 0) {
			var_174_string = "";
			func_842(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)509705);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509706, (int)10686, (int)10685);
			return 0;
		}
		var_180_bool = var_19_int == (int)10686;
		if(var_180_bool != 0) {
			var_181_string = "";
			func_842(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)509707);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509708, (int)-1, (int)10687);
			@@@var_0_bool:AddReply((int)509709, (int)-1, (int)10688);
			return 0;
		}
		var_3_int = true;
		var_189_bool = 0;
		func_1717(var_189_bool);
		if(var_189_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x361";
	
}


task_6_event_0(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_bool, var_7_object, var_8_cvector, var_9_int, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool, var_19_object)
{
	var_20_int = 0; var_21_int = 0;
	func_1280();
	var_22_int = 0; var_23_object = Obj();
	var_19_object = var_23_object;
	func_1121(var_21_int, var_22_int, var_23_object);
	var_22_int = var_21_int;
	var_177_bool = var_21_int == (int)0;
	if(var_177_bool != 0) {
		var_178_bool = 0; var_179_string = ""; var_180_string = "";
		func_1589(var_178_bool, "quest_d4_01", "key2_done");
		var_184_object = Obj();
		var_19_object = var_184_object;
		TaskCall(0);
		func_0(var_187_cvector, var_188_int, var_189_int, var_190_int, var_184_object);
		TaskReturn();
		var_295_object = Obj();
		var_19_object = var_295_object;
		TaskCall(1);
		func_249(var_298_cvector, var_299_int, var_300_int, var_301_int, var_295_object);
		TaskReturn();
		var_359_object = Obj();
		var_19_object = var_359_object;
		TaskCall(7);
		func_1293(var_359_object);
		TaskReturn();
		TaskCall(2);
		func_491();
		TaskReturn();
	} else {
		var_453_bool = var_21_int == (int)1;
		if(var_453_bool == 0) goto Label_1198;
		var_454_bool = 0; var_455_string = ""; var_456_string = "";
		func_1589(var_454_bool, "quest_d4_01", "key2_done");
		TaskCall(2);
		func_491();
		TaskReturn();
	}
Label_1198:
	return 2;
	
}


event_41(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_bool, var_7_object, var_8_cvector, var_9_int, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool, var_19_object)
{
	return 0;
}


main(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_bool, var_7_object, var_8_cvector, var_9_int, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = GlobalVars[0];
	func_1312((int)0);
	var_20_int = var_19_int;
	GlobalVars[0] = var_19_int;
	
Label_1136:
	Sleep((int)3);
	func_1199();
	goto Label_1136;
}
EMIT "Return(); Pop(0)";


func_1280()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_0(var_2_cvector, var_3_int, var_4_int, var_5_int, var_184_object)
{
	GetPosition(var_2_cvector);
	var_4_int = 0;
	var_5_int = 0;
	SetTimer((int)123, (float)0.5);
	SetTimer((int)10, (int)1);
	
Label_14:
	var_195_bool = 0; var_196_object = Obj(); var_197_float = 0; var_198_float = 0; var_199_bool = 0; var_200_bool = 0;
	var_184_object = var_196_object;
	func_98(var_190_int, var_184_object, var_195_bool, var_196_object, (float)250, (float)3000, (bool)1, (bool)1);
	(int)0 = (int)0 + (int)1;
	var_279_int = 0;
	func_1312(var_279_int);
	var_287_int = GlobalVars[0];
	var_288_bool = var_279_int != var_287_int;
	if(var_288_bool != 0) {
	} else {
		Sleep((int)1);
		var_292_int = 0;
		func_1312(var_292_int);
		var_293_int = GlobalVars[0];
		var_294_bool = var_292_int != var_293_int;
		if(var_294_bool != 0) {
			goto Label_42;
		}
		goto Label_14;
	}
Label_42:
	KillTimer((int)10);
	KillTimer((int)123);
	return 0;
	
}


func_1540(var_105_int, var_106_string)
{
	var_107_int = 0; var_108_int = 0;
	GetVariable(var_106_string, var_108_int);
	var_108_int = var_105_int;
	return 2;
}


func_1285(var_363_object)
{
	var_364_int = 0; var_365_object = Obj();
	var_363_object = var_365_object;
	TaskCall(4);
	func_675(var_366_object, var_364_int, var_365_object);
	TaskReturn();
	return 0;
}


func_1545(var_46_int, var_47_int)
{
	var_48_object = Obj(); var_49_object = Obj();
	CreateIntVector(var_49_object);
	@@var_49_object:add(var_46_int);
	@@var_49_object:add(var_47_int);
	SendWorldWndMessage((int)3, var_49_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1293(var_359_object)
{
	var_360_bool = 0; var_361_bool = 0;
	
Label_1294:
	IsOverrideActive(var_361_bool);
	var_362_bool = var_361_bool == 0; //@nz
	if(var_362_bool != 0) {
	} else {
		goto Label_1294;
	}
	var_363_object = Obj();
	var_359_object = var_363_object;
	func_1285(var_363_object);
	Hold();
	return 2;
	
}


func_1557(var_35_object, var_36_object, var_37_int)
{
	var_38_int = 0; var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_int = 0; var_43_bool = 0;
	@@var_36_object:GetItemID(var_41_int);
	GetInvItemProperty(var_42_int, var_41_int, "Category");
	@@var_35_object:AddItem(var_43_bool, var_36_object, var_42_int, var_37_int);
	var_45_bool = var_43_bool == 0; //@nz
	if(var_45_bool != 0) {
		@@var_35_object:DropItems(var_36_object, var_37_int);
	} else {
		var_46_int = 0; var_47_int = 0;
		var_41_int = var_46_int;
		var_37_int = var_47_int;
		func_1545(var_46_int, var_47_int);
	}
	return 6;
	
}


func_1307(var_25_cvector)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0);
	GetPosition(var_27_cvector);
	var_27_cvector = var_25_cvector;
	return 2;
}


func_1312(var_20_int)
{
	var_21_object = Obj(); var_22_int = 0; var_23_object = Obj(); var_24_int = 0;
	GetScene(var_23_object);
	var_25_cvector = CVector(0,0,0);
	func_1307(var_25_cvector);
	@@var_23_object:GetRegionByPt(var_24_int, var_25_cvector);
	var_24_int = var_20_int;
	return 4;
}
EMIT "Stack[-2] = 0";


func_1576(var_30_object, var_31_string, var_32_int)
{
	var_33_object = Obj(); var_34_object = Obj();
	CreateInvItem(var_34_object);
	@@var_34_object:SetItemName(var_31_string);
	var_35_object = Obj(); var_36_object = Obj(); var_37_int = 0;
	var_30_object = var_35_object;
	var_34_object = var_36_object;
	var_32_int = var_37_int;
	func_1557(var_35_object, var_36_object, var_37_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1323(var_241_bool, var_242_object, var_243_string)
{
	var_244_bool = 0; var_245_bool = 0;
	var_248_bool = IsFuncExist(var_242_object, "HasProperty", (int)2);
	var_249_bool = var_248_bool == 0; //@nz
	if(var_249_bool != 0) {
		var_241_bool = 0;
		return 2;
	}
	@@var_242_object:HasProperty(var_243_string, var_245_bool);
	var_245_bool = var_241_bool;
	return 2;
}


func_558(var_384_float)
{
	var_385_float = 0; var_386_float = 0;
	GetCameraFarDistance(var_386_float);
	var_386_float = var_384_float;
	return 2;
}


func_1589(var_178_bool, var_179_string, var_180_string)
{
	var_181_object = Obj(); var_182_object = Obj();
	FindActor(var_182_object, var_179_string);
	var_183_bool = var_182_object == 0; //@ne
	if(var_183_bool != 0) {
		var_178_bool = 0;
		return 2;
	}
	Trigger(var_182_object, var_180_string);
	var_178_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1335(var_234_bool, var_235_object)
{
	var_236_bool = 0; var_237_bool = 0;
	@@var_235_object:IsDead(var_237_bool);
	var_237_bool = var_234_bool;
	return 2;
}


func_570(var_0_bool, var_1_object)
{
	var_0_bool = true;
	var_1_object = false;
	Stop();
	StopGroup0();
	return 0;
}


func_1340(var_223_bool, var_224_object)
{
	var_225_object = Obj(); var_226_object = Obj(); var_227_object = Obj(); var_228_object = Obj();
	var_229_bool = var_224_object == 0; //@ne
	if(var_229_bool != 0) {
		var_223_bool = 0;
		return 4;
	}
	var_230_bool = 0;
	var_230_bool = 0;
	var_233_bool = IsFuncExist(var_224_object, "IsDead", (int)1);
	if(var_233_bool != 0) {
		var_234_bool = 0; var_235_object = Obj();
		var_224_object = var_235_object;
		func_1335(var_234_bool, var_235_object);
		if(var_234_bool != 0) {
			var_230_bool = 1;
		}
	}
	if(var_230_bool != 0) {
		var_223_bool = 0;
		return 4;
	}
	GetScene(var_227_object);
	var_238_bool = var_227_object == 0; //@ne
	if(var_238_bool != 0) {
		var_223_bool = 0;
		return 4;
	}
	@@var_224_object:GetScene(var_228_object);
	var_239_bool = var_227_object != var_228_object;
	if(var_239_bool != 0) {
		var_223_bool = 0;
		return 4;
	}
	var_223_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1601(var_53_string, var_54_int)
{
	var_55_string = ""; var_56_string = "";
	var_57_int = var_54_int;
	if(var_57_int != 0) {
		"idle" = "idle" + var_54_int;
	}
	var_56_string = var_53_string;
	return 2;
}


func_1608(var_47_int)
{
	var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_bool = 0;
	var_50_int = 0;
	
Label_1610:
	var_53_string = ""; var_54_int = 0;
	var_50_int = var_54_int;
	func_1601(var_53_string, var_54_int);
	HasAnimation(var_51_bool, "all", var_53_string);
	var_58_bool = var_51_bool == 0; //@nz
	if(var_58_bool != 0) {
	} else {
		var_50_int = var_50_int + (int)1;
		goto Label_1610;
	}
	var_50_int = var_47_int;
	return 4;
	
}


func_586(var_394_bool)
{
	var_394_bool = 0;
	return 0;
}


func_842(var_2_cvector, var_111_string)
{
	var_112_bool = 0;
	func_1717(var_112_bool);
	var_113_bool = var_112_bool == 0; //@nz
	if(var_113_bool != 0) {
		return 0;
	}
	var_114_bool = var_111_string == var_2_cvector;
	if(var_114_bool != 0) {
		return 0;
	}
	var_115_string = ""; var_116_bool = 0;
	var_111_string = var_115_string;
	var_118_bool = var_111_string == "";
	if(var_118_bool != 0) {
		var_116_bool = 0;
	} else {
		var_116_bool = 1;
	}
	func_1508(var_115_string, var_116_bool);
	var_2_cvector = var_111_string;
	return 0;
	
}


func_588(var_388_object, var_389_cvector)
{
	var_390_object = Obj(); var_391_object = Obj();
	FindShiftedPathTo(var_391_object, var_389_cvector);
	var_391_object = var_388_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_594()
{
	var_396_int = 0; var_397_int = 0; var_398_int = 0; var_399_int = 0; var_400_bool = 0; var_401_float = 0; var_402_bool = 0; var_403_int = 0; var_404_int = 0; var_405_int = 0; var_406_int = 0; var_407_bool = 0; var_408_float = 0; var_409_bool = 0;
	WaitForAnimEnd();
	var_410_bool = 0;
	func_1400(var_410_bool);
	var_413_bool = var_410_bool == 0; //@nz
	if(var_413_bool != 0) {
		return 14;
	}
	func_1608((int)0);
	var_414_int = var_403_int;
	var_404_int = 0;
	
Label_608:
	var_427_bool = 0;
	var_427_bool = 0;
	var_429_bool = var_404_int < (int)5;
	if(var_429_bool != 0) {
		var_430_bool = 0;
		func_1400(var_430_bool);
		if(var_430_bool != 0) {
			var_427_bool = 1;
		}
	}
	if(var_427_bool != 0) {
		irand(var_405_int, (int)3);
		var_433_bool = var_405_int == (int)0;
		if(var_433_bool != 0) {
			var_434_int = var_403_int;
			if(var_434_int == 0) goto Label_641;
			irand(var_406_int, var_403_int);
			var_436_string = ""; var_437_int = 0;
			var_406_int = var_437_int;
			func_1601(var_436_string, var_437_int);
			PlayAnimation("all", var_436_string);
			WaitForAnimEnd(var_407_bool);
			var_438_bool = var_407_bool == 0; //@nz
			if(var_438_bool != 0) {
			} else {
		} else {
				var_443_bool = var_405_int == (int)1;
				if(var_443_bool != 0) {
					rand(var_408_float, (int)4);
					var_446_int = var_408_float + (int)1;
					Sleep(var_446_int, var_409_bool);
					var_447_bool = var_409_bool == 0; //@nz
					if(var_447_bool != 0) {
						goto Label_670;
					}
					goto Label_659;
				}
				var_448_int = var_404_int;
				if(var_448_int == 0) goto Label_659;
				goto Label_670;
		}
		Label_659:
			var_439_bool = 0;
			func_673(var_439_bool);
			var_440_bool = var_439_bool == 0; //@nz
			if(var_440_bool != 0) {
				goto Label_670;
			}
			ResetAAS();
			var_404_int = var_404_int + (int)1;
			goto Label_608;

		}
	}
Label_670:
	ResetAAS();
	return 14;
	
}


func_340(var_0_bool, var_1_object, var_304_bool, var_305_object, var_306_float, var_307_float, var_308_bool, var_309_bool)
{
	var_310_bool = 0; var_311_bool = 0; var_312_object = Obj(); var_313_cvector = CVector(0,0,0); var_314_cvector = CVector(0,0,0); var_315_cvector = CVector(0,0,0); var_316_float = 0; var_317_object = Obj(); var_318_bool = 0; var_319_bool = 0; var_320_object = Obj(); var_321_cvector = CVector(0,0,0); var_322_cvector = CVector(0,0,0); var_323_cvector = CVector(0,0,0); var_324_float = 0; var_325_object = Obj();
	var_0_bool = false;
	var_1_object = var_305_object;
	var_309_bool = var_319_bool;
	
Label_344:
	var_326_bool = 0; var_327_object = Obj();
	var_305_object = var_327_object;
	func_480(var_326_bool, var_327_object);
	var_330_bool = var_326_bool == 0; //@nz
	if(var_330_bool != 0) {
		var_304_bool = 0;
		return 16;
	}
	@@var_305_object:GetPosition(var_321_cvector);
	GetPosition(var_322_cvector);
	var_323_cvector = var_321_cvector - var_322_cvector;
	var_324_float = var_323_cvector | var_323_cvector;
	var_331_bool = 0;
	var_331_bool = 0;
	var_333_bool = var_307_float > (int)0;
	if(var_333_bool != 0) {
		var_334_float = var_307_float * var_307_float;
		var_335_bool = var_324_float > var_334_float;
		if(var_335_bool != 0) {
			var_331_bool = 1;
		}
	}
	if(var_331_bool != 0) {
		Stop();
		var_304_bool = 0;
		return 16;
	}
	var_336_float = var_306_float * var_306_float;
	var_337_bool = var_324_float > var_336_float;
	if(var_337_bool != 0) {
		@@var_305_object:GetPFPosition(var_321_cvector);
		FindPathTo(var_325_object, var_321_cvector);
		var_338_bool = var_325_object != 0; //@nn
		if(var_338_bool != 0) {
			var_325_object = var_320_object;
			var_325_object = 0;
		}
		var_339_bool = var_320_object != 0; //@nn
		if(var_339_bool != 0) {
			var_340_bool = var_319_bool;
			if(var_340_bool == 0) goto Label_393;
			var_319_bool = 0;
			RotatePath(var_320_object, var_318_bool);
			var_341_bool = var_318_bool == 0; //@nz
			if(var_341_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_344_string = "";
				func_487(var_344_string);
				var_345_string = "";
				func_489(var_345_string);
				FollowPath(var_320_object, var_308_bool, var_318_bool, var_344_string, var_345_string);
				var_346_bool = var_318_bool == 0; //@nz
				if(var_346_bool != 0) {
					var_347_bool = var_0_bool;
					if(var_347_bool != 0) {
						var_320_object = 0;
						goto Label_440;
					EMIT "GOTO 0x19d";
					}
				} else {
					var_320_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_318_bool);
					var_350_bool = var_318_bool == 0; //@nz
					if(var_350_bool != 0) {
						var_351_bool = var_0_bool;
						if(var_351_bool != 0) {
							var_320_object = 0;
							goto Label_440;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_440;
	}
			var_325_object = 0;
			goto Label_438;

		Label_438:
			var_320_object = 0;

		}
		goto Label_344;
	}
Label_440:
	var_304_bool = !var_0_bool;
	return 16;
	
}


func_1627()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_1376(var_219_bool, var_220_object)
{
	var_221_int = 0; var_222_int = 0;
	var_223_bool = 0; var_224_object = Obj();
	var_220_object = var_224_object;
	func_1340(var_223_bool, var_224_object);
	var_240_bool = var_223_bool == 0; //@nz
	if(var_240_bool != 0) {
		var_219_bool = 0;
		return 2;
	}
	var_241_bool = 0; var_242_object = Obj(); var_243_string = "";
	var_220_object = var_242_object;
	func_1323(var_241_bool, var_242_object, "noaccess");
	var_250_bool = var_241_bool == 0; //@nz
	if(var_250_bool != 0) {
		var_219_bool = 1;
		return 2;
	}
	@@var_220_object:GetProperty("noaccess", var_222_int);
	var_219_bool = var_222_int == (int)0;
	return 2;
}


func_1633(var_25_object)
{
	SetVariable("d4q01KeyWasted", (int)1);
	Trace("soborkey is given");
	var_30_object = Obj(); var_31_string = ""; var_32_int = 0;
	var_25_object = var_30_object;
	func_1576(var_30_object, "d4q01_sobor_key", (int)1);
	var_51_bool = 0; var_52_string = ""; var_53_string = "";
	func_1589(var_51_bool, "quest_d4_01", "init_sobor");
	return 0;
}


func_98(var_0_bool, var_1_object, var_195_bool, var_196_object, var_197_float, var_198_float, var_199_bool, var_200_bool)
{
	var_201_bool = 0; var_202_bool = 0; var_203_object = Obj(); var_204_cvector = CVector(0,0,0); var_205_cvector = CVector(0,0,0); var_206_cvector = CVector(0,0,0); var_207_float = 0; var_208_object = Obj(); var_209_bool = 0; var_210_bool = 0; var_211_object = Obj(); var_212_cvector = CVector(0,0,0); var_213_cvector = CVector(0,0,0); var_214_cvector = CVector(0,0,0); var_215_float = 0; var_216_object = Obj();
	var_0_bool = false;
	var_1_object = var_196_object;
	var_200_bool = var_210_bool;
	
Label_102:
	var_217_bool = 0; var_218_object = Obj();
	var_196_object = var_218_object;
	func_238(var_217_bool, var_218_object);
	var_253_bool = var_217_bool == 0; //@nz
	if(var_253_bool != 0) {
		var_195_bool = 0;
		return 16;
	}
	@@var_196_object:GetPosition(var_212_cvector);
	GetPosition(var_213_cvector);
	var_214_cvector = var_212_cvector - var_213_cvector;
	var_215_float = var_214_cvector | var_214_cvector;
	var_254_bool = 0;
	var_254_bool = 0;
	var_256_bool = var_198_float > (int)0;
	if(var_256_bool != 0) {
		var_257_float = var_198_float * var_198_float;
		var_258_bool = var_215_float > var_257_float;
		if(var_258_bool != 0) {
			var_254_bool = 1;
		}
	}
	if(var_254_bool != 0) {
		Stop();
		var_195_bool = 0;
		return 16;
	}
	var_259_float = var_197_float * var_197_float;
	var_260_bool = var_215_float > var_259_float;
	if(var_260_bool != 0) {
		@@var_196_object:GetPFPosition(var_212_cvector);
		FindPathTo(var_216_object, var_212_cvector);
		var_261_bool = var_216_object != 0; //@nn
		if(var_261_bool != 0) {
			var_216_object = var_211_object;
			var_216_object = 0;
		}
		var_262_bool = var_211_object != 0; //@nn
		if(var_262_bool != 0) {
			var_263_bool = var_210_bool;
			if(var_263_bool == 0) goto Label_151;
			var_210_bool = 0;
			RotatePath(var_211_object, var_209_bool);
			var_264_bool = var_209_bool == 0; //@nz
			if(var_264_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_267_string = "";
				func_245(var_267_string);
				var_268_string = "";
				func_247(var_268_string);
				FollowPath(var_211_object, var_199_bool, var_209_bool, var_267_string, var_268_string);
				var_269_bool = var_209_bool == 0; //@nz
				if(var_269_bool != 0) {
					var_270_bool = var_0_bool;
					if(var_270_bool != 0) {
						var_211_object = 0;
						goto Label_198;
					EMIT "GOTO 0xab";
					}
				} else {
					var_211_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_209_bool);
					var_273_bool = var_209_bool == 0; //@nz
					if(var_273_bool != 0) {
						var_274_bool = var_0_bool;
						if(var_274_bool != 0) {
							var_211_object = 0;
							goto Label_198;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_198;
	}
			var_216_object = 0;
			goto Label_196;

		Label_196:
			var_211_object = 0;

		}
		goto Label_102;
	}
Label_198:
	var_195_bool = !var_0_bool;
	return 16;
	
}


func_1121(var_22_int, var_23_object, var_26_object)
{
	var_24_int = 0; var_25_object = Obj();
	var_23_object = var_25_object;
	TaskCall(4);
	func_675(var_26_object, var_24_int, var_25_object);
	TaskReturn();
	var_26_object = var_22_int;
	return 0;
}


func_1653()
{
	SetVariable("ood4WastedMale1", (int)1);
	return 0;
}


func_1400(var_43_bool)
{
	var_44_bool = 0; var_45_bool = 0;
	IsLoaded(var_45_bool);
	var_45_bool = var_43_bool;
	return 2;
}


func_1659(var_79_object)
{
	Trace("tvirin is given");
	var_82_object = Obj(); var_83_string = ""; var_84_int = 0;
	var_79_object = var_82_object;
	func_1576(var_82_object, "tvirin", (int)1);
	return 0;
}


func_1405(var_35_bool, var_36_object, var_37_float)
{
	var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_bool = 0;
	@@var_36_object:GetPosition(var_48_cvector);
	@@var_36_object:GetEyesHeight(var_47_float);
	var_56_float = GetByIndex(var_48_cvector, 1);
	var_56_float = var_56_float + var_47_float;
	SetByIndex(var_48_cvector, 1) = var_56_float;
	GetPosition(var_49_cvector);
	GetEyesHeight(var_47_float);
	var_57_float = GetByIndex(var_49_cvector, 1);
	var_57_float = var_57_float + var_47_float;
	SetByIndex(var_49_cvector, 1) = var_57_float;
	var_50_cvector = var_48_cvector - var_49_cvector;
	var_58_float = GetByIndex(var_50_cvector, 1);
	SetByIndex(var_50_cvector, 1) = (float)0;
	var_59_int = var_50_cvector | var_50_cvector;
	var_60_float = sqrt(var_59_int);
	var_50_cvector = var_50_cvector / var_60_float;
	var_51_cvector = -var_50_cvector;
	var_61_float = var_50_cvector * var_37_float;
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
	var_63_cvector = var_51_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1530(var_62_cvector, var_63_cvector);
	var_71_float = var_62_cvector * (int)25;
	var_72_int = var_61_float + var_71_float;
	var_52_cvector = var_72_int - CVector(0.0, 10.0, 0.0);
	var_53_cvector = var_49_cvector + var_52_cvector;
	IsOverrideActive(var_54_bool);
	var_74_bool = var_54_bool;
	if(var_74_bool != 0) {
		var_35_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_53_cvector, var_51_cvector, (bool)1);
	var_76_float = GetByIndex(var_52_cvector, 0);
	var_77_float = GetByIndex(var_52_cvector, 2);
	Rotate(var_76_float, var_77_float);
	var_78_bool = 0;
	func_1717(var_78_bool);
	if(var_78_bool != 0) {
	} else {
		HasAnimationTrack(var_55_bool, "head");
		var_80_bool = var_55_bool;
		if(var_80_bool == 0) goto Label_1468;
		LookAsyncCamera("head");
	}
Label_1468:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_35_bool = 1;
	return 18;
	
}


func_1670(var_68_object)
{
	@@var_68_object:SetReturnValue((int)0);
	return 0;
}


func_1675(var_75_object)
{
	@@var_75_object:SetReturnValue((int)1);
	return 0;
}


func_1680(var_103_bool)
{
	var_105_int = 0; var_106_string = "";
	func_1540(var_105_int, "ood4WastedMale1");
	var_110_bool = var_105_int == (int)0;
	if(var_110_bool != 0) {
		var_103_bool = 1;
		return 0;
	}
	var_103_bool = 0;
	return 0;
}


func_1692(var_87_int)
{
	var_88_int = 0; var_89_int = 0;
	GetVariable("branch", var_89_int);
	var_92_bool = var_89_int == (int)0;
	if(var_92_bool != 0) {
		var_87_int = 1;
		return 2;
	EMIT "GOTO 0x6ab";
	}
	var_94_bool = var_89_int == (int)1;
	if(var_94_bool != 0) {
		var_87_int = 2;
		return 2;
	}
	var_87_int = 3;
	return 2;
}


func_673(var_439_bool)
{
	var_439_bool = 1;
	return 0;
}


func_675(var_0_bool, var_24_int, var_25_object)
{
	var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0; var_31_object = Obj(); var_32_bool = 0; var_33_int = 0; var_34_bool = 0;
	var_0_bool = var_25_object;
	var_35_bool = 0; var_36_object = Obj(); var_37_float = 0;
	var_25_object = var_36_object;
	func_1405(var_35_bool, var_36_object, (float)70.0);
	var_82_bool = var_35_bool == 0; //@nz
	if(var_82_bool != 0) {
		var_24_int = -2;
		return 8;
	}
	CreateDialog(var_31_object);
	var_83_int = 0;
	func_1711(var_83_int);
	@@var_31_object:SetNPCName(var_83_int);
	var_84_int = 0;
	func_1709(var_84_int);
	@@var_31_object:SetNPCDescription(var_84_int);
	var_85_string = "";
	func_1713(var_85_string);
	@@var_31_object:SetPhoto(var_85_string);
	var_86_string = "";
	func_1715(var_86_string);
	@@var_31_object:SetPhoto2(var_86_string);
	var_87_int = 0;
	func_1692(var_87_int);
	@@var_31_object:SetPlayerName(var_87_int);
	IsOverrideActive(var_32_bool);
	var_95_bool = var_32_bool;
	if(var_95_bool != 0) {
		var_24_int = -2;
		return 8;
	}
	DoDialog(var_31_object);
	var_96_object = Obj(); var_97_object = Obj();
	var_25_object = var_96_object;
	var_31_object = var_97_object;
	TaskCall(5);
	func_749(var_98_object, var_99_object, var_100_string, var_101_bool, var_96_object, var_97_object);
	TaskReturn();
	@@var_31_object:IsDialogEnd(var_34_bool);
	
Label_731:
	var_167_bool = var_34_bool == 0; //@nz
	if(var_167_bool != 0) {
		sync();
		@@var_31_object:IsDialogEnd(var_34_bool);
		goto Label_731;
	}
	var_25_object = Obj();
	func_1474();
	StopDialog(var_31_object);
	@@var_31_object:GetReturnValue((int)-1);
	var_33_int = var_24_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1709(var_84_int)
{
	var_84_int = 515556;
	return 0;
}


func_1711(var_83_int)
{
	var_83_int = 503341;
	return 0;
}


func_1199()
{
	var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_float = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_bool = 0; var_41_float = 0; var_42_bool = 0;
	WaitForAnimEnd();
	var_43_bool = 0;
	func_1400(var_43_bool);
	var_46_bool = var_43_bool == 0; //@nz
	if(var_46_bool != 0) {
		return 14;
	}
	func_1608((int)0);
	var_47_int = var_36_int;
	var_37_int = 0;
	
Label_1213:
	var_60_bool = 0;
	var_60_bool = 0;
	var_62_bool = var_37_int < (int)5;
	if(var_62_bool != 0) {
		var_63_bool = 0;
		func_1400(var_63_bool);
		if(var_63_bool != 0) {
			var_60_bool = 1;
		}
	}
	if(var_60_bool != 0) {
		irand(var_38_int, (int)3);
		var_66_bool = var_38_int == (int)0;
		if(var_66_bool != 0) {
			var_67_int = var_36_int;
			if(var_67_int == 0) goto Label_1246;
			irand(var_39_int, var_36_int);
			var_69_string = ""; var_70_int = 0;
			var_39_int = var_70_int;
			func_1601(var_69_string, var_70_int);
			PlayAnimation("all", var_69_string);
			WaitForAnimEnd(var_40_bool);
			var_71_bool = var_40_bool == 0; //@nz
			if(var_71_bool != 0) {
			} else {
		} else {
				var_76_bool = var_38_int == (int)1;
				if(var_76_bool != 0) {
					rand(var_41_float, (int)4);
					var_79_int = var_41_float + (int)1;
					Sleep(var_79_int, var_42_bool);
					var_80_bool = var_42_bool == 0; //@nz
					if(var_80_bool != 0) {
						goto Label_1275;
					}
					goto Label_1264;
				}
				var_81_int = var_37_int;
				if(var_81_int == 0) goto Label_1264;
				goto Label_1275;
		}
		Label_1264:
			var_72_bool = 0;
			func_1278(var_72_bool);
			var_73_bool = var_72_bool == 0; //@nz
			if(var_73_bool != 0) {
				goto Label_1275;
			}
			ResetAAS();
			var_37_int = var_37_int + (int)1;
			goto Label_1213;

		}
	}
Label_1275:
	ResetAAS();
	return 14;
	
}


func_1713(var_85_string)
{
	var_85_string = "ui/NPC_Citizen3.png";
	return 0;
}


func_1715(var_86_string)
{
	var_86_string = "ui/NPC_Citizen3_b.png";
	return 0;
}


func_1717(var_78_bool)
{
	var_78_bool = 0;
	return 0;
}


func_442(var_0_bool, var_1_object, var_37_int)
{
	var_39_bool = var_37_int != (int)0;
	if(var_39_bool != 0) {
		return 0;
	}
	var_40_bool = 0; var_41_object = Obj();
	var_41_object = var_1_object;
	func_480(var_40_bool, var_41_object);
	var_76_bool = var_40_bool == 0; //@nz
	if(var_76_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1474()
{
	var_169_bool = 0; var_170_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_172_bool = 0;
	func_1717(var_172_bool);
	if(var_172_bool != 0) {
	} else {
		HasAnimationTrack(var_170_bool, "head");
		var_174_bool = var_170_bool;
		if(var_174_bool == 0) goto Label_1491;
		UnlookAsync("head");
	}
Label_1491:
	return 2;
	
}


func_200(var_0_bool, var_1_object, var_49_int)
{
	var_51_bool = var_49_int != (int)0;
	if(var_51_bool != 0) {
		return 0;
	}
	var_52_bool = 0; var_53_object = Obj();
	var_53_object = var_1_object;
	func_238(var_52_bool, var_53_object);
	var_88_bool = var_52_bool == 0; //@nz
	if(var_88_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_464(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1492(var_137_string)
{
	var_138_bool = 0; var_139_float = 0; var_140_float = 0; var_141_bool = 0; var_142_float = 0; var_143_float = 0;
	lshHasAnimation(var_141_bool, var_137_string);
	var_144_bool = var_141_bool;
	if(var_144_bool != 0) {
		lshGetAnimTimes(var_137_string, var_142_float, var_143_float);
		lshPlayAnimation(var_142_float, var_143_float, (bool)0);
	} else {
		var_147_int = "Can't find lsh animation : " + var_137_string;
		Trace(var_147_int);
	}
	return 6;
	
}


func_222(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_480(var_326_bool, var_327_object)
{
	var_328_bool = 0; var_329_object = Obj();
	var_327_object = var_329_object;
	func_1376(var_328_bool, var_329_object);
	var_328_bool = var_326_bool;
	return 0;
}


func_1508(var_115_string, var_116_bool)
{
	var_119_bool = 0; var_120_float = 0; var_121_float = 0; var_122_bool = 0; var_123_float = 0; var_124_float = 0;
	lshHasAnimation(var_122_bool, var_115_string);
	var_125_bool = var_122_bool;
	if(var_125_bool != 0) {
		lshGetAnimTimes(var_115_string, var_123_float, var_124_float);
		lshPlayAnimation(var_123_float, var_124_float, var_116_bool);
	} else {
		var_127_int = "Can't find lsh animation : " + var_115_string;
		Trace(var_127_int);
	}
	return 6;
	
}


func_487(var_344_string)
{
	var_344_string = "walk";
	return 0;
}


func_489(var_345_string)
{
	var_345_string = "run";
	return 0;
}


func_491()
{
	
Label_491:
	func_499(var_367_bool, var_368_bool);
	Sleep((int)1);
	goto Label_491;
}
EMIT "Return(); Pop(0)";


func_749(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_96_object, var_97_object)
{
	var_0_bool = var_97_object;
	var_1_object = var_96_object;
	var_3_int = false;
	if((int)1 != 0) {
		var_103_bool = 0; var_104_object = Obj();
		var_104_object = var_1_object;
		func_1680(var_104_object);
		if(var_103_bool != 0) {
			var_111_string = "";
			func_842(var_97_object, "Neutral");
			@@@var_0_bool:SetMessage((int)509701);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509702, (int)10682, (int)10681);
			@@@var_0_bool:AddReply((int)509711, (int)10682, (int)10691);
		} else {
				var_153_string = "";
				func_842(var_97_object, "Neutral");
				@@@var_0_bool:SetMessage((int)509712);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)509713, (int)10695, (int)10694);
				@@@var_0_bool:AddReply((int)509720, (int)10702, (int)10701);
				@@@var_0_bool:AddReply((int)509723, (int)10695, (int)10705);
				@@@var_0_bool:AddReply((int)509724, (int)-1, (int)10707);
				goto Label_812;
		}
	}
Label_812:
	var_135_bool = 0;
	func_1717(var_135_bool);
	if(var_135_bool != 0) {

	Label_816:
		lshWaitForAnimEnd();
		var_136_int = var_3_int;
		if(var_136_int != 0) {
		} else {
			var_137_string = "";
			var_137_string = var_2_cvector;
			func_1492(var_137_string);
			goto Label_816;
	}
		PlayAnimation("all", "idle");

	Label_831:
		WaitForAnimEnd();
		var_150_int = var_3_int;
		if(var_150_int != 0) {
			goto Label_841;
		}
		PlayAnimation("all", "idle");
		goto Label_831;

	}
	goto Label_841;
	
Label_841:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x2f1";


func_238(var_217_bool, var_218_object)
{
	var_219_bool = 0; var_220_object = Obj();
	var_218_object = var_220_object;
	func_1376(var_219_bool, var_220_object);
	var_219_bool = var_217_bool;
	return 0;
}


func_499(var_0_bool, var_1_object)
{
	var_369_float = 0; var_370_cvector = CVector(0,0,0); var_371_cvector = CVector(0,0,0); var_372_bool = 0; var_373_object = Obj(); var_374_bool = 0; var_375_float = 0; var_376_cvector = CVector(0,0,0); var_377_cvector = CVector(0,0,0); var_378_bool = 0; var_379_object = Obj(); var_380_bool = 0;
	var_0_bool = false;
	var_1_object = false;
	rand(var_375_float, (float)0.5);
	Sleep(var_375_float);
	
Label_507:
	var_382_bool = var_0_bool == 0; //@nz
	if(var_382_bool != 0) {
		var_383_bool = var_1_object == 0; //@nz
		if(var_383_bool != 0) {

		Label_511:
			GetPosition(var_377_cvector);
			var_384_float = 0;
			func_558(var_384_float);
			GetRandomPFPointInCircle(var_376_cvector, var_377_cvector, var_384_float, var_378_bool);
			var_387_bool = var_378_bool;
			if(var_387_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_511;
		}
				var_1_object = false;
	}
			return 12;
	}
	goto Label_527;
	
Label_527:
	var_388_object = Obj(); var_389_cvector = CVector(0,0,0);
	var_376_cvector = var_389_cvector;
	func_588(var_388_object, var_389_cvector);
	var_388_object = var_379_object;
	var_392_bool = var_379_object != 0; //@nn
	if(var_392_bool != 0) {
		RotatePath(var_379_object, var_380_bool);
		var_393_bool = var_380_bool;
		if(var_393_bool != 0) {
			var_394_bool = 0;
			func_586(var_394_bool);
			FollowPath(var_379_object, var_394_bool, var_380_bool);
			var_379_object = 0;
			var_395_bool = var_380_bool;
			if(var_395_bool != 0) {
				TaskCall(3);
				func_594();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_379_object = 0;
	goto Label_507;
	
}


func_1523()
{
	var_22_bool = 0;
	func_1717(var_22_bool);
	if(var_22_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_245(var_267_string)
{
	var_267_string = "walk";
	return 0;
}


func_247(var_268_string)
{
	var_268_string = "run";
	return 0;
}


func_249(var_2_cvector, var_3_int, var_4_int, var_5_int, var_295_object)
{
	GetPosition(var_2_cvector);
	var_4_int = 0;
	var_5_int = 0;
	SetTimer((int)123, (float)0.5);
	
Label_259:
	var_304_bool = 0; var_305_object = Obj(); var_306_float = 0; var_307_float = 0; var_308_bool = 0; var_309_bool = 0;
	var_295_object = var_305_object;
	func_340(var_301_int, var_295_object, var_304_bool, var_305_object, (float)250, (float)3000, (bool)1, (bool)1);
	var_355_bool = var_304_bool == 0; //@nz
	if(var_355_bool != 0) {
		(int)0 = (int)0 + (int)1;
		Sleep((int)1);
		goto Label_259;
	}
	KillTimer((int)123);
	return 0;
}


func_1530(var_62_cvector, var_63_cvector)
{
	var_65_float = 0; var_66_float = 0;
	var_67_int = var_63_cvector | var_63_cvector;
	var_66_float = sqrt(var_67_int);
	var_68_float = 9.999999974752427e-07;
	var_69_bool = var_66_float < var_68_float;
	if(var_69_bool != 0) {
		var_62_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_62_cvector = var_63_cvector / var_66_float;
	return 2;
}


func_1278(var_72_bool)
{
	var_72_bool = 1;
	return 0;
}


