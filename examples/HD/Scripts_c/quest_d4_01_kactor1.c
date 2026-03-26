// @IMPORTS: GetPosition/1,SetTimer/2,Sleep/1,KillTimer/1,Trace/1,Stop/0,FindPathTo/2,RotatePath/2,FollowPath/5,Sleep/2,RequestClearPath/1,GetRandomPFPointInCircle/4,SetPosition/1,rand/2,FollowPath/3,GetCameraFarDistance/1,StopGroup0/0,FindShiftedPathTo/2,WaitForAnimEnd/0,irand/2,PlayAnimation/2,WaitForAnimEnd/1,ResetAAS/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetScene/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,lshStopSpeech/0,GetVariable/2,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,FindActor/2,Trigger/2,HasAnimation/3,TriggerWorld/2,SetVariable/2
// @STRINGS: W:On Actor Stuck|A:GetPosition|A:GetPFPosition|W:walk|W:run|W:On Actor Stuck 1|W:OnActorStuck|W:Random point found|W:Random point not found|W:all|A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:idle|W:quest_d4_01|W:key1_done|A:GetRegionByPt|W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|A:GetEyesHeight|W:head|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:playsound|W:giveitem|W:ood4WhiteMask1|W:d4q01KeyWhite|W:theaterkey is given|W:d4q01_theater_key|W:init_theater|W:tvirin is given|W:tvirin|A:SetReturnValue|W:branch|W:ui/NPC_wmask.png|W:ui/NPC_wmask_b.png
// @GLOBALS: 0:int:,1:object:
// @RUN_OP: 0x4ce
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
// @EVENT_11: op=0x356 vars=int,int
// @TASK_6: vars= params=0
// @EVENT_0: op=0x4dc vars=object
// @TASK_7: vars= params=1
// @STANDALONE_EVENT_41: op=0x6bd vars=object
// @PE: 0x0,0xc8,0xda,0xe5,0xee,0xf9,0x1ba,0x1cc,0x1d7,0x1e0,0x1eb,0x233,0x241,0x2ed,0x340,0x356,0x4c5,0x569,0x6bd,0x6bf,0x6c5,0x6cb,0x6df,0x6ea,0x6ef,0x6f4

task_0_event_7(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_int, var_7_bool, var_8_object, var_9_cvector, var_10_int, var_11_int, var_12_int, var_13_bool, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_float = 0;
	var_27_bool = var_19_bool == (int)10;
	if(var_27_bool != 0) {
		var_28_int = 0;
		func_1412(var_28_int);
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
	func_1725();
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
	func_1725();
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
	func_1725();
	return 0;
}


task_5_event_11(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_bool, var_7_object, var_8_cvector, var_9_int, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool, var_19_int, var_20_int)
{
	if((int)1 != 0) {
		func_1623();
		var_24_bool = var_20_int == (int)10646;
		if(var_24_bool != 0) {
			var_25_object = Obj(); var_26_object = Obj();
			var_25_object = var_1_object;
			var_26_object = var_0_bool;
			func_1739(var_26_object);
			var_57_object = Obj(); var_58_object = Obj();
			var_57_object = var_1_object;
			var_58_object = var_0_bool;
			func_1727();
		}
		var_62_bool = var_20_int == (int)10650;
		if(var_62_bool != 0) {
			var_63_object = Obj(); var_64_object = Obj();
			var_63_object = var_1_object;
			var_64_object = var_0_bool;
			func_1739(var_64_object);
			var_65_object = Obj(); var_66_object = Obj();
			var_65_object = var_1_object;
			var_66_object = var_0_bool;
			func_1727();
		}
		var_68_bool = var_20_int == (int)10648;
		if(var_68_bool != 0) {
			var_69_object = Obj(); var_70_object = Obj();
			var_69_object = var_1_object;
			var_70_object = var_0_bool;
			func_1733();
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_1770(var_74_object);
		}
		var_77_bool = var_20_int == (int)10649;
		if(var_77_bool != 0) {
			var_78_object = Obj(); var_79_object = Obj();
			var_78_object = var_1_object;
			var_79_object = var_0_bool;
			func_1733();
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_bool;
			func_1775(var_81_object);
		}
		var_84_bool = var_20_int == (int)10669;
		if(var_84_bool != 0) {
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_bool;
			func_1759(var_86_object);
			var_91_object = Obj(); var_92_object = Obj();
			var_91_object = var_1_object;
			var_92_object = var_0_bool;
			func_1727();
		}
		var_94_bool = var_19_int == (int)10641;
		if(var_94_bool != 0) {
			var_95_bool = 0; var_96_object = Obj();
			var_96_object = var_1_object;
			func_1780(var_96_object);
			if(var_95_bool != 0) {
				var_103_string = "";
				func_832(var_20_int, "Neutral");
				@@@var_0_bool:SetMessage((int)509667);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)509668, (int)10643, (int)10642);
				@@@var_0_bool:AddReply((int)509677, (int)10653, (int)10652);
				return 0;
			}
			var_127_string = "";
			func_832(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)509681);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509682, (int)10660, (int)10659);
			@@@var_0_bool:AddReply((int)509699, (int)-1, (int)10678);
			return 0;
		}
		var_136_bool = var_19_int == (int)10660;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_832(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)509683);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509684, (int)10662, (int)10661);
			@@@var_0_bool:AddReply((int)509694, (int)10672, (int)10671);
			@@@var_0_bool:AddReply((int)509698, (int)10662, (int)10676);
			return 0;
		}
		var_149_bool = var_19_int == (int)10672;
		if(var_149_bool != 0) {
			var_150_string = "";
			func_832(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)509695);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509696, (int)10665, (int)10673);
			@@@var_0_bool:AddReply((int)509697, (int)-1, (int)10675);
			return 0;
		}
		var_159_bool = var_19_int == (int)10662;
		if(var_159_bool != 0) {
			var_160_string = "";
			func_832(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)509685);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509687, (int)10665, (int)10664);
			@@@var_0_bool:AddReply((int)509686, (int)-1, (int)10663);
			return 0;
		}
		var_169_bool = var_19_int == (int)10665;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_832(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)509688);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509689, (int)-1, (int)10666);
			@@@var_0_bool:AddReply((int)509690, (int)10668, (int)10667);
			return 0;
		}
		var_179_bool = var_19_int == (int)10668;
		if(var_179_bool != 0) {
			var_180_string = "";
			func_832(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)509691);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509692, (int)-1, (int)10669);
			@@@var_0_bool:AddReply((int)509693, (int)-1, (int)10670);
			@@@var_0_bool:AddReply((int)538762, (int)-1, (int)40678);
			return 0;
		}
		var_192_bool = var_19_int == (int)10653;
		if(var_192_bool != 0) {
			var_193_string = "";
			func_832(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)509678);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509679, (int)10643, (int)10654);
			@@@var_0_bool:AddReply((int)509680, (int)10643, (int)10656);
			return 0;
		}
		var_202_bool = var_19_int == (int)10643;
		if(var_202_bool != 0) {
			var_203_string = "";
			func_832(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)509669);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509670, (int)10645, (int)10644);
			return 0;
		}
		var_209_bool = var_19_int == (int)10645;
		if(var_209_bool != 0) {
			var_210_string = "";
			func_832(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)509671);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509672, (int)43766, (int)10646);
			@@@var_0_bool:AddReply((int)509676, (int)10647, (int)10650);
			return 0;
		}
		var_219_bool = var_19_int == (int)10647;
		if(var_219_bool != 0) {
			var_220_string = "";
			func_832(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)509673);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)541600, (int)43766, (int)43765);
			@@@var_0_bool:AddReply((int)541602, (int)43766, (int)43767);
			return 0;
		}
		var_229_bool = var_19_int == (int)43766;
		if(var_229_bool != 0) {
			var_230_string = "";
			func_832(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)541601);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509674, (int)-1, (int)10648);
			@@@var_0_bool:AddReply((int)509675, (int)-1, (int)10649);
			return 0;
		}
		var_3_int = true;
		var_238_bool = 0;
		func_1817(var_238_bool);
		if(var_238_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x357";
	
}


task_6_event_0(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_bool, var_7_object, var_8_cvector, var_9_int, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool, var_19_object)
{
	var_20_int = 0; var_21_int = 0;
	func_1380();
	var_22_int = 0; var_23_object = Obj();
	var_19_object = var_23_object;
	func_1221(var_21_int, var_22_int, var_23_object);
	var_22_int = var_21_int;
	var_171_bool = var_21_int == (int)0;
	if(var_171_bool != 0) {
		var_172_bool = 0; var_173_string = ""; var_174_string = "";
		func_1689(var_172_bool, "quest_d4_01", "key1_done");
		var_178_object = Obj();
		var_19_object = var_178_object;
		TaskCall(0);
		func_0(var_181_cvector, var_182_int, var_183_int, var_184_int, var_178_object);
		TaskReturn();
		var_289_object = Obj();
		var_19_object = var_289_object;
		TaskCall(1);
		func_249(var_292_cvector, var_293_int, var_294_int, var_295_int, var_289_object);
		TaskReturn();
		var_353_object = Obj();
		var_19_object = var_353_object;
		TaskCall(7);
		func_1393(var_353_object);
		TaskReturn();
		TaskCall(2);
		func_491();
		TaskReturn();
	} else {
		var_447_bool = var_21_int == (int)1;
		if(var_447_bool == 0) goto Label_1298;
		var_448_bool = 0; var_449_string = ""; var_450_string = "";
		func_1689(var_448_bool, "quest_d4_01", "key1_done");
		TaskCall(2);
		func_491();
		TaskReturn();
	}
Label_1298:
	return 2;
	
}


event_41(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_bool, var_7_object, var_8_cvector, var_9_int, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool, var_19_object)
{
	return 0;
}


main(var_0_bool, var_1_object, var_2_cvector, var_3_int, var_4_int, var_5_int, var_6_bool, var_7_object, var_8_cvector, var_9_int, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool)
{
	var_19_int = GlobalVars[0];
	func_1412((int)0);
	var_20_int = var_19_int;
	GlobalVars[0] = var_19_int;
	
Label_1236:
	Sleep((int)3);
	func_1299();
	goto Label_1236;
}
EMIT "Return(); Pop(0)";


func_1792(var_87_int)
{
	var_88_int = 0; var_89_int = 0;
	GetVariable("branch", var_89_int);
	var_92_bool = var_89_int == (int)0;
	if(var_92_bool != 0) {
		var_87_int = 1;
		return 2;
	EMIT "GOTO 0x70f";
	}
	var_94_bool = var_89_int == (int)1;
	if(var_94_bool != 0) {
		var_87_int = 2;
		return 2;
	}
	var_87_int = 3;
	return 2;
}


func_0(var_2_cvector, var_3_int, var_4_int, var_5_int, var_178_object)
{
	GetPosition(var_2_cvector);
	var_4_int = 0;
	var_5_int = 0;
	SetTimer((int)123, (float)0.5);
	SetTimer((int)10, (int)1);
	
Label_14:
	var_189_bool = 0; var_190_object = Obj(); var_191_float = 0; var_192_float = 0; var_193_bool = 0; var_194_bool = 0;
	var_178_object = var_190_object;
	func_98(var_184_int, var_178_object, var_189_bool, var_190_object, (float)250, (float)3000, (bool)1, (bool)1);
	(int)0 = (int)0 + (int)1;
	var_273_int = 0;
	func_1412(var_273_int);
	var_281_int = GlobalVars[0];
	var_282_bool = var_273_int != var_281_int;
	if(var_282_bool != 0) {
	} else {
		Sleep((int)1);
		var_286_int = 0;
		func_1412(var_286_int);
		var_287_int = GlobalVars[0];
		var_288_bool = var_286_int != var_287_int;
		if(var_288_bool != 0) {
			goto Label_42;
		}
		goto Label_14;
	}
Label_42:
	KillTimer((int)10);
	KillTimer((int)123);
	return 0;
	
}


func_1809(var_84_int)
{
	var_84_int = 515569;
	return 0;
}


func_1811(var_83_int)
{
	var_83_int = 503354;
	return 0;
}


func_1299()
{
	var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_float = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_bool = 0; var_41_float = 0; var_42_bool = 0;
	WaitForAnimEnd();
	var_43_bool = 0;
	func_1500(var_43_bool);
	var_46_bool = var_43_bool == 0; //@nz
	if(var_46_bool != 0) {
		return 14;
	}
	func_1708((int)0);
	var_47_int = var_36_int;
	var_37_int = 0;
	
Label_1313:
	var_60_bool = 0;
	var_60_bool = 0;
	var_62_bool = var_37_int < (int)5;
	if(var_62_bool != 0) {
		var_63_bool = 0;
		func_1500(var_63_bool);
		if(var_63_bool != 0) {
			var_60_bool = 1;
		}
	}
	if(var_60_bool != 0) {
		irand(var_38_int, (int)3);
		var_66_bool = var_38_int == (int)0;
		if(var_66_bool != 0) {
			var_67_int = var_36_int;
			if(var_67_int == 0) goto Label_1346;
			irand(var_39_int, var_36_int);
			var_69_string = ""; var_70_int = 0;
			var_39_int = var_70_int;
			func_1701(var_69_string, var_70_int);
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
						goto Label_1375;
					}
					goto Label_1364;
				}
				var_81_int = var_37_int;
				if(var_81_int == 0) goto Label_1364;
				goto Label_1375;
		}
		Label_1364:
			var_72_bool = 0;
			func_1378(var_72_bool);
			var_73_bool = var_72_bool == 0; //@nz
			if(var_73_bool != 0) {
				goto Label_1375;
			}
			ResetAAS();
			var_37_int = var_37_int + (int)1;
			goto Label_1313;

		}
	}
Label_1375:
	ResetAAS();
	return 14;
	
}


func_1813(var_85_string)
{
	var_85_string = "ui/NPC_wmask.png";
	return 0;
}


func_1815(var_86_string)
{
	var_86_string = "ui/NPC_wmask_b.png";
	return 0;
}


func_1817(var_78_bool)
{
	var_78_bool = 0;
	return 0;
}


func_1574()
{
	var_163_bool = 0; var_164_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_166_bool = 0;
	func_1817(var_166_bool);
	if(var_166_bool != 0) {
	} else {
		HasAnimationTrack(var_164_bool, "head");
		var_168_bool = var_164_bool;
		if(var_168_bool == 0) goto Label_1591;
		UnlookAsync("head");
	}
Label_1591:
	return 2;
	
}


func_558(var_378_float)
{
	var_379_float = 0; var_380_float = 0;
	GetCameraFarDistance(var_380_float);
	var_380_float = var_378_float;
	return 2;
}


func_1592(var_137_string)
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


func_570(var_0_bool, var_1_object)
{
	var_0_bool = true;
	var_1_object = false;
	Stop();
	StopGroup0();
	return 0;
}


func_832(var_2_cvector, var_111_string)
{
	var_112_bool = 0;
	func_1817(var_112_bool);
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
	func_1608(var_115_string, var_116_bool);
	var_2_cvector = var_111_string;
	return 0;
	
}


func_1608(var_115_string, var_116_bool)
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


func_586(var_388_bool)
{
	var_388_bool = 0;
	return 0;
}


func_588(var_382_object, var_383_cvector)
{
	var_384_object = Obj(); var_385_object = Obj();
	FindShiftedPathTo(var_385_object, var_383_cvector);
	var_385_object = var_382_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_594()
{
	var_390_int = 0; var_391_int = 0; var_392_int = 0; var_393_int = 0; var_394_bool = 0; var_395_float = 0; var_396_bool = 0; var_397_int = 0; var_398_int = 0; var_399_int = 0; var_400_int = 0; var_401_bool = 0; var_402_float = 0; var_403_bool = 0;
	WaitForAnimEnd();
	var_404_bool = 0;
	func_1500(var_404_bool);
	var_407_bool = var_404_bool == 0; //@nz
	if(var_407_bool != 0) {
		return 14;
	}
	func_1708((int)0);
	var_408_int = var_397_int;
	var_398_int = 0;
	
Label_608:
	var_421_bool = 0;
	var_421_bool = 0;
	var_423_bool = var_398_int < (int)5;
	if(var_423_bool != 0) {
		var_424_bool = 0;
		func_1500(var_424_bool);
		if(var_424_bool != 0) {
			var_421_bool = 1;
		}
	}
	if(var_421_bool != 0) {
		irand(var_399_int, (int)3);
		var_427_bool = var_399_int == (int)0;
		if(var_427_bool != 0) {
			var_428_int = var_397_int;
			if(var_428_int == 0) goto Label_641;
			irand(var_400_int, var_397_int);
			var_430_string = ""; var_431_int = 0;
			var_400_int = var_431_int;
			func_1701(var_430_string, var_431_int);
			PlayAnimation("all", var_430_string);
			WaitForAnimEnd(var_401_bool);
			var_432_bool = var_401_bool == 0; //@nz
			if(var_432_bool != 0) {
			} else {
		} else {
				var_437_bool = var_399_int == (int)1;
				if(var_437_bool != 0) {
					rand(var_402_float, (int)4);
					var_440_int = var_402_float + (int)1;
					Sleep(var_440_int, var_403_bool);
					var_441_bool = var_403_bool == 0; //@nz
					if(var_441_bool != 0) {
						goto Label_670;
					}
					goto Label_659;
				}
				var_442_int = var_398_int;
				if(var_442_int == 0) goto Label_659;
				goto Label_670;
		}
		Label_659:
			var_433_bool = 0;
			func_673(var_433_bool);
			var_434_bool = var_433_bool == 0; //@nz
			if(var_434_bool != 0) {
				goto Label_670;
			}
			ResetAAS();
			var_398_int = var_398_int + (int)1;
			goto Label_608;

		}
	}
Label_670:
	ResetAAS();
	return 14;
	
}


func_340(var_0_bool, var_1_object, var_298_bool, var_299_object, var_300_float, var_301_float, var_302_bool, var_303_bool)
{
	var_304_bool = 0; var_305_bool = 0; var_306_object = Obj(); var_307_cvector = CVector(0,0,0); var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_float = 0; var_311_object = Obj(); var_312_bool = 0; var_313_bool = 0; var_314_object = Obj(); var_315_cvector = CVector(0,0,0); var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); var_318_float = 0; var_319_object = Obj();
	var_0_bool = false;
	var_1_object = var_299_object;
	var_303_bool = var_313_bool;
	
Label_344:
	var_320_bool = 0; var_321_object = Obj();
	var_299_object = var_321_object;
	func_480(var_320_bool, var_321_object);
	var_324_bool = var_320_bool == 0; //@nz
	if(var_324_bool != 0) {
		var_298_bool = 0;
		return 16;
	}
	@@var_299_object:GetPosition(var_315_cvector);
	GetPosition(var_316_cvector);
	var_317_cvector = var_315_cvector - var_316_cvector;
	var_318_float = var_317_cvector | var_317_cvector;
	var_325_bool = 0;
	var_325_bool = 0;
	var_327_bool = var_301_float > (int)0;
	if(var_327_bool != 0) {
		var_328_float = var_301_float * var_301_float;
		var_329_bool = var_318_float > var_328_float;
		if(var_329_bool != 0) {
			var_325_bool = 1;
		}
	}
	if(var_325_bool != 0) {
		Stop();
		var_298_bool = 0;
		return 16;
	}
	var_330_float = var_300_float * var_300_float;
	var_331_bool = var_318_float > var_330_float;
	if(var_331_bool != 0) {
		@@var_299_object:GetPFPosition(var_315_cvector);
		FindPathTo(var_319_object, var_315_cvector);
		var_332_bool = var_319_object != 0; //@nn
		if(var_332_bool != 0) {
			var_319_object = var_314_object;
			var_319_object = 0;
		}
		var_333_bool = var_314_object != 0; //@nn
		if(var_333_bool != 0) {
			var_334_bool = var_313_bool;
			if(var_334_bool == 0) goto Label_393;
			var_313_bool = 0;
			RotatePath(var_314_object, var_312_bool);
			var_335_bool = var_312_bool == 0; //@nz
			if(var_335_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_338_string = "";
				func_487(var_338_string);
				var_339_string = "";
				func_489(var_339_string);
				FollowPath(var_314_object, var_302_bool, var_312_bool, var_338_string, var_339_string);
				var_340_bool = var_312_bool == 0; //@nz
				if(var_340_bool != 0) {
					var_341_bool = var_0_bool;
					if(var_341_bool != 0) {
						var_314_object = 0;
						goto Label_440;
					EMIT "GOTO 0x19d";
					}
				} else {
					var_314_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_312_bool);
					var_344_bool = var_312_bool == 0; //@nz
					if(var_344_bool != 0) {
						var_345_bool = var_0_bool;
						if(var_345_bool != 0) {
							var_314_object = 0;
							goto Label_440;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_440;
	}
			var_319_object = 0;
			goto Label_438;

		Label_438:
			var_314_object = 0;

		}
		goto Label_344;
	}
Label_440:
	var_298_bool = !var_0_bool;
	return 16;
	
}


func_1623()
{
	var_22_bool = 0;
	func_1817(var_22_bool);
	if(var_22_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1630(var_62_cvector, var_63_cvector)
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


func_98(var_0_bool, var_1_object, var_189_bool, var_190_object, var_191_float, var_192_float, var_193_bool, var_194_bool)
{
	var_195_bool = 0; var_196_bool = 0; var_197_object = Obj(); var_198_cvector = CVector(0,0,0); var_199_cvector = CVector(0,0,0); var_200_cvector = CVector(0,0,0); var_201_float = 0; var_202_object = Obj(); var_203_bool = 0; var_204_bool = 0; var_205_object = Obj(); var_206_cvector = CVector(0,0,0); var_207_cvector = CVector(0,0,0); var_208_cvector = CVector(0,0,0); var_209_float = 0; var_210_object = Obj();
	var_0_bool = false;
	var_1_object = var_190_object;
	var_194_bool = var_204_bool;
	
Label_102:
	var_211_bool = 0; var_212_object = Obj();
	var_190_object = var_212_object;
	func_238(var_211_bool, var_212_object);
	var_247_bool = var_211_bool == 0; //@nz
	if(var_247_bool != 0) {
		var_189_bool = 0;
		return 16;
	}
	@@var_190_object:GetPosition(var_206_cvector);
	GetPosition(var_207_cvector);
	var_208_cvector = var_206_cvector - var_207_cvector;
	var_209_float = var_208_cvector | var_208_cvector;
	var_248_bool = 0;
	var_248_bool = 0;
	var_250_bool = var_192_float > (int)0;
	if(var_250_bool != 0) {
		var_251_float = var_192_float * var_192_float;
		var_252_bool = var_209_float > var_251_float;
		if(var_252_bool != 0) {
			var_248_bool = 1;
		}
	}
	if(var_248_bool != 0) {
		Stop();
		var_189_bool = 0;
		return 16;
	}
	var_253_float = var_191_float * var_191_float;
	var_254_bool = var_209_float > var_253_float;
	if(var_254_bool != 0) {
		@@var_190_object:GetPFPosition(var_206_cvector);
		FindPathTo(var_210_object, var_206_cvector);
		var_255_bool = var_210_object != 0; //@nn
		if(var_255_bool != 0) {
			var_210_object = var_205_object;
			var_210_object = 0;
		}
		var_256_bool = var_205_object != 0; //@nn
		if(var_256_bool != 0) {
			var_257_bool = var_204_bool;
			if(var_257_bool == 0) goto Label_151;
			var_204_bool = 0;
			RotatePath(var_205_object, var_203_bool);
			var_258_bool = var_203_bool == 0; //@nz
			if(var_258_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_261_string = "";
				func_245(var_261_string);
				var_262_string = "";
				func_247(var_262_string);
				FollowPath(var_205_object, var_193_bool, var_203_bool, var_261_string, var_262_string);
				var_263_bool = var_203_bool == 0; //@nz
				if(var_263_bool != 0) {
					var_264_bool = var_0_bool;
					if(var_264_bool != 0) {
						var_205_object = 0;
						goto Label_198;
					EMIT "GOTO 0xab";
					}
				} else {
					var_205_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_203_bool);
					var_267_bool = var_203_bool == 0; //@nz
					if(var_267_bool != 0) {
						var_268_bool = var_0_bool;
						if(var_268_bool != 0) {
							var_205_object = 0;
							goto Label_198;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_198;
	}
			var_210_object = 0;
			goto Label_196;

		Label_196:
			var_205_object = 0;

		}
		goto Label_102;
	}
Label_198:
	var_189_bool = !var_0_bool;
	return 16;
	
}


func_1378(var_72_bool)
{
	var_72_bool = 1;
	return 0;
}


func_1380()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1640(var_105_int, var_106_string)
{
	var_107_int = 0; var_108_int = 0;
	GetVariable(var_106_string, var_108_int);
	var_108_int = var_105_int;
	return 2;
}


func_1385(var_357_object)
{
	var_358_int = 0; var_359_object = Obj();
	var_357_object = var_359_object;
	TaskCall(4);
	func_675(var_360_object, var_358_int, var_359_object);
	TaskReturn();
	return 0;
}


func_1645(var_46_int, var_47_int)
{
	var_48_object = Obj(); var_49_object = Obj();
	CreateIntVector(var_49_object);
	@@var_49_object:add(var_46_int);
	@@var_49_object:add(var_47_int);
	SendWorldWndMessage((int)3, var_49_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1393(var_353_object)
{
	var_354_bool = 0; var_355_bool = 0;
	
Label_1394:
	IsOverrideActive(var_355_bool);
	var_356_bool = var_355_bool == 0; //@nz
	if(var_356_bool != 0) {
	} else {
		goto Label_1394;
	}
	var_357_object = Obj();
	var_353_object = var_357_object;
	func_1385(var_357_object);
	Hold();
	return 2;
	
}


func_1657(var_35_object, var_36_object, var_37_int)
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
		func_1645(var_46_int, var_47_int);
	}
	return 6;
	
}


func_1407(var_25_cvector)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0);
	GetPosition(var_27_cvector);
	var_27_cvector = var_25_cvector;
	return 2;
}


func_1412(var_20_int)
{
	var_21_object = Obj(); var_22_int = 0; var_23_object = Obj(); var_24_int = 0;
	GetScene(var_23_object);
	var_25_cvector = CVector(0,0,0);
	func_1407(var_25_cvector);
	@@var_23_object:GetRegionByPt(var_24_int, var_25_cvector);
	var_24_int = var_20_int;
	return 4;
}
EMIT "Stack[-2] = 0";


func_1676(var_30_object, var_31_string, var_32_int)
{
	var_33_object = Obj(); var_34_object = Obj();
	CreateInvItem(var_34_object);
	@@var_34_object:SetItemName(var_31_string);
	var_35_object = Obj(); var_36_object = Obj(); var_37_int = 0;
	var_30_object = var_35_object;
	var_34_object = var_36_object;
	var_32_int = var_37_int;
	func_1657(var_35_object, var_36_object, var_37_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1423(var_235_bool, var_236_object, var_237_string)
{
	var_238_bool = 0; var_239_bool = 0;
	var_242_bool = IsFuncExist(var_236_object, "HasProperty", (int)2);
	var_243_bool = var_242_bool == 0; //@nz
	if(var_243_bool != 0) {
		var_235_bool = 0;
		return 2;
	}
	@@var_236_object:HasProperty(var_237_string, var_239_bool);
	var_239_bool = var_235_bool;
	return 2;
}


func_1689(var_172_bool, var_173_string, var_174_string)
{
	var_175_object = Obj(); var_176_object = Obj();
	FindActor(var_176_object, var_173_string);
	var_177_bool = var_176_object == 0; //@ne
	if(var_177_bool != 0) {
		var_172_bool = 0;
		return 2;
	}
	Trigger(var_176_object, var_174_string);
	var_172_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1435(var_228_bool, var_229_object)
{
	var_230_bool = 0; var_231_bool = 0;
	@@var_229_object:IsDead(var_231_bool);
	var_231_bool = var_228_bool;
	return 2;
}


func_1440(var_217_bool, var_218_object)
{
	var_219_object = Obj(); var_220_object = Obj(); var_221_object = Obj(); var_222_object = Obj();
	var_223_bool = var_218_object == 0; //@ne
	if(var_223_bool != 0) {
		var_217_bool = 0;
		return 4;
	}
	var_224_bool = 0;
	var_224_bool = 0;
	var_227_bool = IsFuncExist(var_218_object, "IsDead", (int)1);
	if(var_227_bool != 0) {
		var_228_bool = 0; var_229_object = Obj();
		var_218_object = var_229_object;
		func_1435(var_228_bool, var_229_object);
		if(var_228_bool != 0) {
			var_224_bool = 1;
		}
	}
	if(var_224_bool != 0) {
		var_217_bool = 0;
		return 4;
	}
	GetScene(var_221_object);
	var_232_bool = var_221_object == 0; //@ne
	if(var_232_bool != 0) {
		var_217_bool = 0;
		return 4;
	}
	@@var_218_object:GetScene(var_222_object);
	var_233_bool = var_221_object != var_222_object;
	if(var_233_bool != 0) {
		var_217_bool = 0;
		return 4;
	}
	var_217_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_673(var_433_bool)
{
	var_433_bool = 1;
	return 0;
}


func_675(var_0_bool, var_24_int, var_25_object)
{
	var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0; var_31_object = Obj(); var_32_bool = 0; var_33_int = 0; var_34_bool = 0;
	var_0_bool = var_25_object;
	var_35_bool = 0; var_36_object = Obj(); var_37_float = 0;
	var_25_object = var_36_object;
	func_1505(var_35_bool, var_36_object, (float)70.0);
	var_82_bool = var_35_bool == 0; //@nz
	if(var_82_bool != 0) {
		var_24_int = -2;
		return 8;
	}
	CreateDialog(var_31_object);
	var_83_int = 0;
	func_1811(var_83_int);
	@@var_31_object:SetNPCName(var_83_int);
	var_84_int = 0;
	func_1809(var_84_int);
	@@var_31_object:SetNPCDescription(var_84_int);
	var_85_string = "";
	func_1813(var_85_string);
	@@var_31_object:SetPhoto(var_85_string);
	var_86_string = "";
	func_1815(var_86_string);
	@@var_31_object:SetPhoto2(var_86_string);
	var_87_int = 0;
	func_1792(var_87_int);
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
	var_161_bool = var_34_bool == 0; //@nz
	if(var_161_bool != 0) {
		sync();
		@@var_31_object:IsDialogEnd(var_34_bool);
		goto Label_731;
	}
	var_25_object = Obj();
	func_1574();
	StopDialog(var_31_object);
	@@var_31_object:GetReturnValue((int)-1);
	var_33_int = var_24_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1701(var_53_string, var_54_int)
{
	var_55_string = ""; var_56_string = "";
	var_57_int = var_54_int;
	if(var_57_int != 0) {
		"idle" = "idle" + var_54_int;
	}
	var_56_string = var_53_string;
	return 2;
}


func_1708(var_47_int)
{
	var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_bool = 0;
	var_50_int = 0;
	
Label_1710:
	var_53_string = ""; var_54_int = 0;
	var_50_int = var_54_int;
	func_1701(var_53_string, var_54_int);
	HasAnimation(var_51_bool, "all", var_53_string);
	var_58_bool = var_51_bool == 0; //@nz
	if(var_58_bool != 0) {
	} else {
		var_50_int = var_50_int + (int)1;
		goto Label_1710;
	}
	var_50_int = var_47_int;
	return 4;
	
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


func_1727()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_1476(var_213_bool, var_214_object)
{
	var_215_int = 0; var_216_int = 0;
	var_217_bool = 0; var_218_object = Obj();
	var_214_object = var_218_object;
	func_1440(var_217_bool, var_218_object);
	var_234_bool = var_217_bool == 0; //@nz
	if(var_234_bool != 0) {
		var_213_bool = 0;
		return 2;
	}
	var_235_bool = 0; var_236_object = Obj(); var_237_string = "";
	var_214_object = var_236_object;
	func_1423(var_235_bool, var_236_object, "noaccess");
	var_244_bool = var_235_bool == 0; //@nz
	if(var_244_bool != 0) {
		var_213_bool = 1;
		return 2;
	}
	@@var_214_object:GetProperty("noaccess", var_216_int);
	var_213_bool = var_216_int == (int)0;
	return 2;
}


func_1733()
{
	SetVariable("ood4WhiteMask1", (int)1);
	return 0;
}


func_1221(var_22_int, var_23_object, var_26_object)
{
	var_24_int = 0; var_25_object = Obj();
	var_23_object = var_25_object;
	TaskCall(4);
	func_675(var_26_object, var_24_int, var_25_object);
	TaskReturn();
	var_26_object = var_22_int;
	return 0;
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


func_1739(var_25_object)
{
	SetVariable("d4q01KeyWhite", (int)1);
	Trace("theaterkey is given");
	var_30_object = Obj(); var_31_string = ""; var_32_int = 0;
	var_25_object = var_30_object;
	func_1676(var_30_object, "d4q01_theater_key", (int)1);
	var_51_bool = 0; var_52_string = ""; var_53_string = "";
	func_1689(var_51_bool, "quest_d4_01", "init_theater");
	return 0;
}


func_464(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1500(var_43_bool)
{
	var_44_bool = 0; var_45_bool = 0;
	IsLoaded(var_45_bool);
	var_45_bool = var_43_bool;
	return 2;
}


func_222(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1759(var_85_object)
{
	Trace("tvirin is given");
	var_88_object = Obj(); var_89_string = ""; var_90_int = 0;
	var_85_object = var_88_object;
	func_1676(var_88_object, "tvirin", (int)1);
	return 0;
}


func_480(var_320_bool, var_321_object)
{
	var_322_bool = 0; var_323_object = Obj();
	var_321_object = var_323_object;
	func_1476(var_322_bool, var_323_object);
	var_322_bool = var_320_bool;
	return 0;
}


func_1505(var_35_bool, var_36_object, var_37_float)
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
	func_1630(var_62_cvector, var_63_cvector);
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
	func_1817(var_78_bool);
	if(var_78_bool != 0) {
	} else {
		HasAnimationTrack(var_55_bool, "head");
		var_80_bool = var_55_bool;
		if(var_80_bool == 0) goto Label_1568;
		LookAsyncCamera("head");
	}
Label_1568:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_35_bool = 1;
	return 18;
	
}


func_487(var_338_string)
{
	var_338_string = "walk";
	return 0;
}


func_489(var_339_string)
{
	var_339_string = "run";
	return 0;
}


func_1770(var_74_object)
{
	@@var_74_object:SetReturnValue((int)0);
	return 0;
}


func_491()
{
	
Label_491:
	func_499(var_361_bool, var_362_bool);
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
		func_1780(var_104_object);
		if(var_103_bool != 0) {
			var_111_string = "";
			func_832(var_97_object, "Neutral");
			@@@var_0_bool:SetMessage((int)509667);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509668, (int)10643, (int)10642);
			@@@var_0_bool:AddReply((int)509677, (int)10653, (int)10652);
		} else {
				var_153_string = "";
				func_832(var_97_object, "Neutral");
				@@@var_0_bool:SetMessage((int)509681);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)509682, (int)10660, (int)10659);
				@@@var_0_bool:AddReply((int)509699, (int)-1, (int)10678);
				goto Label_802;
		}
	}
Label_802:
	var_135_bool = 0;
	func_1817(var_135_bool);
	if(var_135_bool != 0) {

	Label_806:
		lshWaitForAnimEnd();
		var_136_int = var_3_int;
		if(var_136_int != 0) {
		} else {
			var_137_string = "";
			var_137_string = var_2_cvector;
			func_1592(var_137_string);
			goto Label_806;
	}
		PlayAnimation("all", "idle");

	Label_821:
		WaitForAnimEnd();
		var_150_int = var_3_int;
		if(var_150_int != 0) {
			goto Label_831;
		}
		PlayAnimation("all", "idle");
		goto Label_821;

	}
	goto Label_831;
	
Label_831:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x2f1";


func_238(var_211_bool, var_212_object)
{
	var_213_bool = 0; var_214_object = Obj();
	var_212_object = var_214_object;
	func_1476(var_213_bool, var_214_object);
	var_213_bool = var_211_bool;
	return 0;
}


func_1775(var_81_object)
{
	@@var_81_object:SetReturnValue((int)1);
	return 0;
}


func_499(var_0_bool, var_1_object)
{
	var_363_float = 0; var_364_cvector = CVector(0,0,0); var_365_cvector = CVector(0,0,0); var_366_bool = 0; var_367_object = Obj(); var_368_bool = 0; var_369_float = 0; var_370_cvector = CVector(0,0,0); var_371_cvector = CVector(0,0,0); var_372_bool = 0; var_373_object = Obj(); var_374_bool = 0;
	var_0_bool = false;
	var_1_object = false;
	rand(var_369_float, (float)0.5);
	Sleep(var_369_float);
	
Label_507:
	var_376_bool = var_0_bool == 0; //@nz
	if(var_376_bool != 0) {
		var_377_bool = var_1_object == 0; //@nz
		if(var_377_bool != 0) {

		Label_511:
			GetPosition(var_371_cvector);
			var_378_float = 0;
			func_558(var_378_float);
			GetRandomPFPointInCircle(var_370_cvector, var_371_cvector, var_378_float, var_372_bool);
			var_381_bool = var_372_bool;
			if(var_381_bool != 0) {
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
	var_382_object = Obj(); var_383_cvector = CVector(0,0,0);
	var_370_cvector = var_383_cvector;
	func_588(var_382_object, var_383_cvector);
	var_382_object = var_373_object;
	var_386_bool = var_373_object != 0; //@nn
	if(var_386_bool != 0) {
		RotatePath(var_373_object, var_374_bool);
		var_387_bool = var_374_bool;
		if(var_387_bool != 0) {
			var_388_bool = 0;
			func_586(var_388_bool);
			FollowPath(var_373_object, var_388_bool, var_374_bool);
			var_373_object = 0;
			var_389_bool = var_374_bool;
			if(var_389_bool != 0) {
				TaskCall(3);
				func_594();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_373_object = 0;
	goto Label_507;
	
}


func_1780(var_103_bool)
{
	var_105_int = 0; var_106_string = "";
	func_1640(var_105_int, "ood4WhiteMask1");
	var_110_bool = var_105_int == (int)0;
	if(var_110_bool != 0) {
		var_103_bool = 1;
		return 0;
	}
	var_103_bool = 0;
	return 0;
}


func_245(var_261_string)
{
	var_261_string = "walk";
	return 0;
}


func_247(var_262_string)
{
	var_262_string = "run";
	return 0;
}


func_249(var_2_cvector, var_3_int, var_4_int, var_5_int, var_289_object)
{
	GetPosition(var_2_cvector);
	var_4_int = 0;
	var_5_int = 0;
	SetTimer((int)123, (float)0.5);
	
Label_259:
	var_298_bool = 0; var_299_object = Obj(); var_300_float = 0; var_301_float = 0; var_302_bool = 0; var_303_bool = 0;
	var_289_object = var_299_object;
	func_340(var_295_int, var_289_object, var_298_bool, var_299_object, (float)250, (float)3000, (bool)1, (bool)1);
	var_349_bool = var_298_bool == 0; //@nz
	if(var_349_bool != 0) {
		(int)0 = (int)0 + (int)1;
		Sleep((int)1);
		goto Label_259;
	}
	KillTimer((int)123);
	return 0;
}


