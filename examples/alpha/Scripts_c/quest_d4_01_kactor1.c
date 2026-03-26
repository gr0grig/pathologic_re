// @IMPORTS: SetTimer/2,Sleep/1,KillTimer/1,GetPosition/1,Stop/0,FindPathTo/2,RotatePath/2,FollowPath/5,Sleep/2,RequestClearPath/1,rand/2,GetCameraFarDistance/1,GetRandomPFPointInCircle/4,FindShiftedPathTo/2,FollowPath/3,StopGroup0/0,WaitForAnimEnd/0,irand/2,PlayAnimation/2,WaitForAnimEnd/1,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetScene/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,GetInvItemProperty/3,CreateInvItem/1,FindActor/2,Trigger/2,HasAnimation/3,TriggerWorld/2,SetVariable/2
// @STRINGS: A:GetPosition|A:GetPFPosition|W:walk|W:run|W:all|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:idle|W:quest_d4_01|W:key1_done|A:GetRegionByPt|W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|A:GetEyesHeight|W:playing |W:start: |W:end: |A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:playsound|W:giveitem|W:ood4WhiteMask1|W:theaterkey is given|W:d4q01_theater_key|W:tvirin is given|W:tvirin|A:SetReturnValue|W:player|W:ui/NPC_Black.png
// @GLOBALS: 0:int:,1:object:
// @RUN_OP: 0x3ed
// @RUN_TASK: 6
// @TASK_0: vars=bool,object params=1
// @EVENT_7: op=0x23 vars=int
// @EVENT_10: op=0x97 vars=object
// @EVENT_41: op=0xa2 vars=object
// @TASK_1: vars=bool,object params=1
// @EVENT_7: op=0x12c vars=int
// @EVENT_10: op=0x13e vars=object
// @EVENT_41: op=0x149 vars=object
// @TASK_2: vars=bool,bool params=0
// @EVENT_10: op=0x19e vars=object
// @EVENT_28: op=0x1a2 vars=
// @EVENT_41: op=0x1ac vars=object
// @TASK_3: vars= params=0
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x29e vars=int,int
// @TASK_6: vars= params=0
// @EVENT_0: op=0x3fb vars=object
// @TASK_7: vars= params=1
// @STANDALONE_EVENT_41: op=0x591 vars=object
// @PE: 0x0,0x23,0x97,0xa2,0xab,0xb6,0x12c,0x13e,0x149,0x152,0x19e,0x1ac,0x23b,0x28e,0x29e,0x3e4,0x477,0x527,0x591,0x593,0x599,0x59f,0x5aa,0x5b5,0x5ba,0x5bf

task_0_event_7(var_0_bool, var_1_object, var_2_int, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	var_13_bool = var_11_bool == (int)10;
	if(var_13_bool != 0) {
		var_14_int = 0;
		func_1170(var_14_int);
		var_22_int = GlobalVars[0];
		var_23_bool = var_14_int != var_22_int;
		if(var_23_bool != 0) {
			func_155(var_11_bool);
		}
	}
	return 0;
}


task_0_event_10(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	RequestClearPath(var_11_bool);
	return 0;
}


task_0_event_41(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	func_155(var_11_bool);
	var_11_bool = Obj();
	func_1425();
	return 0;
}


task_1_event_7(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_int, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	var_13_bool = var_11_bool != (int)0;
	if(var_13_bool != 0) {
		return 0;
	}
	var_14_bool = 0; var_15_object = Obj();
	var_15_object = var_1_object;
	func_338(var_14_bool, var_15_object);
	var_50_bool = var_14_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


task_1_event_10(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	RequestClearPath(var_11_bool);
	return 0;
}


task_1_event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	func_322(var_11_bool);
	var_11_bool = Obj();
	func_1425();
	return 0;
}


task_2_event_10(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	RequestClearPath(var_11_bool);
	return 0;
}


task_2_event_28(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool)
{
	Stop();
	return 0;
}


task_2_event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	func_421(var_10_string, var_11_bool);
	var_11_bool = Obj();
	func_1425();
	return 0;
}


task_5_event_11(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int)
{
	if((int)1 != 0) {
		func_1341();
		var_16_bool = var_12_int == (int)10646;
		if(var_16_bool != 0) {
			var_17_object = Obj(); var_18_object = Obj();
			var_17_object = var_1_object;
			var_18_object = var_0_bool;
			func_1439(var_18_object);
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_bool;
			func_1427();
		}
		var_41_bool = var_12_int == (int)10648;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_bool;
			func_1433();
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_bool;
			func_1461(var_47_object);
		}
		var_50_bool = var_12_int == (int)10649;
		if(var_50_bool != 0) {
			var_51_object = Obj(); var_52_object = Obj();
			var_51_object = var_1_object;
			var_52_object = var_0_bool;
			func_1433();
			var_53_object = Obj(); var_54_object = Obj();
			var_53_object = var_1_object;
			var_54_object = var_0_bool;
			func_1466(var_54_object);
		}
		var_57_bool = var_12_int == (int)10669;
		if(var_57_bool != 0) {
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_bool;
			func_1450(var_59_object);
			var_64_object = Obj(); var_65_object = Obj();
			var_64_object = var_1_object;
			var_65_object = var_0_bool;
			func_1427();
		}
		var_67_bool = var_11_int == (int)10641;
		if(var_67_bool != 0) {
			var_68_bool = 0; var_69_object = Obj();
			var_69_object = var_1_object;
			func_1471(var_69_object);
			if(var_68_bool != 0) {
				var_76_string = "";
				func_654(var_12_int, "Neutral");
				@@@var_0_bool:SetMessage((int)9667);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)9668, (int)10643, (int)10642);
				@@@var_0_bool:AddReply((int)9677, (int)10653, (int)10652);
				return 0;
			}
			var_98_string = "";
			func_654(var_12_int, "Neutral");
			@@@var_0_bool:SetMessage((int)9681);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9682, (int)10660, (int)10659);
			@@@var_0_bool:AddReply((int)9699, (int)-1, (int)10678);
			return 0;
		}
		var_107_bool = var_11_int == (int)10660;
		if(var_107_bool != 0) {
			var_108_string = "";
			func_654(var_12_int, "Neutral");
			@@@var_0_bool:SetMessage((int)9683);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9684, (int)10662, (int)10661);
			@@@var_0_bool:AddReply((int)9694, (int)10672, (int)10671);
			@@@var_0_bool:AddReply((int)9698, (int)10662, (int)10676);
			return 0;
		}
		var_120_bool = var_11_int == (int)10672;
		if(var_120_bool != 0) {
			var_121_string = "";
			func_654(var_12_int, "Neutral");
			@@@var_0_bool:SetMessage((int)9695);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9696, (int)10665, (int)10673);
			@@@var_0_bool:AddReply((int)9697, (int)-1, (int)10675);
			return 0;
		}
		var_130_bool = var_11_int == (int)10662;
		if(var_130_bool != 0) {
			var_131_string = "";
			func_654(var_12_int, "Neutral");
			@@@var_0_bool:SetMessage((int)9685);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9686, (int)-1, (int)10663);
			@@@var_0_bool:AddReply((int)9687, (int)10665, (int)10664);
			return 0;
		}
		var_140_bool = var_11_int == (int)10665;
		if(var_140_bool != 0) {
			var_141_string = "";
			func_654(var_12_int, "Neutral");
			@@@var_0_bool:SetMessage((int)9688);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9689, (int)-1, (int)10666);
			@@@var_0_bool:AddReply((int)9690, (int)10668, (int)10667);
			return 0;
		}
		var_150_bool = var_11_int == (int)10668;
		if(var_150_bool != 0) {
			var_151_string = "";
			func_654(var_12_int, "Neutral");
			@@@var_0_bool:SetMessage((int)9691);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9692, (int)-1, (int)10669);
			@@@var_0_bool:AddReply((int)9693, (int)-1, (int)10670);
			return 0;
		}
		var_160_bool = var_11_int == (int)10653;
		if(var_160_bool != 0) {
			var_161_string = "";
			func_654(var_12_int, "Neutral");
			@@@var_0_bool:SetMessage((int)9678);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9679, (int)10643, (int)10654);
			@@@var_0_bool:AddReply((int)9680, (int)10643, (int)10656);
			return 0;
		}
		var_170_bool = var_11_int == (int)10643;
		if(var_170_bool != 0) {
			var_171_string = "";
			func_654(var_12_int, "Neutral");
			@@@var_0_bool:SetMessage((int)9669);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9670, (int)10645, (int)10644);
			return 0;
		}
		var_177_bool = var_11_int == (int)10645;
		if(var_177_bool != 0) {
			var_178_string = "";
			func_654(var_12_int, "Neutral");
			@@@var_0_bool:SetMessage((int)9671);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9672, (int)10647, (int)10646);
			@@@var_0_bool:AddReply((int)9676, (int)10647, (int)10650);
			return 0;
		}
		var_187_bool = var_11_int == (int)10647;
		if(var_187_bool != 0) {
			var_188_string = "";
			func_654(var_12_int, "Neutral");
			@@@var_0_bool:SetMessage((int)9673);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9674, (int)-1, (int)10648);
			@@@var_0_bool:AddReply((int)9675, (int)-1, (int)10649);
			return 0;
		}
		var_3_object = true;
		var_196_bool = 0;
		func_1504(var_196_bool);
		if(var_196_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x29f";
	
}


task_6_event_0(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	func_1138();
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_996(var_13_int, var_14_int, var_15_object);
	var_14_int = var_13_int;
	var_135_bool = var_13_int == (int)0;
	if(var_135_bool != 0) {
		var_136_bool = 0; var_137_string = ""; var_138_string = "";
		func_1389(var_136_bool, "quest_d4_01", "key1_done");
		var_142_object = Obj();
		var_11_object = var_142_object;
		TaskCall(0);
		func_0(var_142_object);
		TaskReturn();
		var_245_object = Obj();
		var_11_object = var_245_object;
		TaskCall(1);
		func_182(var_245_object);
		TaskReturn();
		var_301_object = Obj();
		var_11_object = var_301_object;
		TaskCall(7);
		func_1151(var_301_object);
		TaskReturn();
	} else {
		var_310_bool = var_13_int == (int)1;
		if(var_310_bool == 0) goto Label_1068;
		var_311_bool = 0; var_312_string = ""; var_313_string = "";
		func_1389(var_311_bool, "quest_d4_01", "key1_done");
		TaskCall(2);
		func_349();
		TaskReturn();
	}
Label_1068:
	return 2;
	
}


event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object)
{
	return 0;
}


main(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool)
{
	var_11_int = GlobalVars[0];
	func_1170((int)0);
	var_12_int = var_11_int;
	GlobalVars[0] = var_11_int;
	
Label_1011:
	Sleep((int)3);
	func_1069();
	goto Label_1011;
}
EMIT "Return(); Pop(0)";


func_1408(var_39_int)
{
	var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_bool = 0;
	var_42_int = 0;
	
Label_1410:
	var_45_string = ""; var_46_int = 0;
	var_42_int = var_46_int;
	func_1401(var_45_string, var_46_int);
	HasAnimation(var_43_bool, "all", var_45_string);
	var_50_bool = var_43_bool == 0; //@nz
	if(var_50_bool != 0) {
	} else {
		var_42_int = var_42_int + (int)1;
		goto Label_1410;
	}
	var_42_int = var_39_int;
	return 4;
	
}


func_0(var_142_object)
{
	SetTimer((int)10, (int)1);
	
Label_5:
	var_147_bool = 0; var_148_object = Obj(); var_149_float = 0; var_150_float = 0; var_151_bool = 0; var_152_bool = 0;
	var_142_object = var_148_object;
	func_49(var_144_object, var_142_object, var_147_bool, var_148_object, (float)250, (float)3000, (bool)1, (bool)1);
	var_230_int = 0;
	func_1170(var_230_int);
	var_238_int = GlobalVars[0];
	var_239_bool = var_230_int != var_238_int;
	if(var_239_bool != 0) {
	} else {
		Sleep((int)1);
		var_242_int = 0;
		func_1170(var_242_int);
		var_243_int = GlobalVars[0];
		var_244_bool = var_242_int != var_243_int;
		if(var_244_bool != 0) {
			goto Label_31;
		}
		goto Label_5;
	}
Label_31:
	KillTimer((int)10);
	return 0;
	
}


func_1165(var_17_cvector)
{
	var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0);
	GetPosition(var_19_cvector);
	var_19_cvector = var_17_cvector;
	return 2;
}


func_654(var_2_bool, var_94_string)
{
	var_95_bool = 0;
	func_1504(var_95_bool);
	var_96_bool = var_95_bool == 0; //@nz
	if(var_96_bool != 0) {
		return 0;
	}
	var_97_bool = var_94_string == var_2_bool;
	if(var_97_bool != 0) {
		return 0;
	}
	var_98_string = "";
	var_94_string = var_98_string;
	func_1323(var_98_string);
	var_2_bool = var_94_string;
	return 0;
}


func_1170(var_12_int)
{
	var_13_object = Obj(); var_14_int = 0; var_15_object = Obj(); var_16_int = 0;
	GetScene(var_15_object);
	var_17_cvector = CVector(0,0,0);
	func_1165(var_17_cvector);
	@@var_15_object:GetRegionByPt(var_16_int, var_17_cvector);
	var_16_int = var_12_int;
	return 4;
}
EMIT "Stack[-2] = 0";


func_1427()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_1433()
{
	SetVariable("ood4WhiteMask1", (int)1);
	return 0;
}


func_155(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1181(var_193_bool, var_194_object, var_195_string)
{
	var_196_bool = 0; var_197_bool = 0;
	var_200_bool = IsFuncExist(var_194_object, "HasProperty", (int)2);
	var_201_bool = var_200_bool == 0; //@nz
	if(var_201_bool != 0) {
		var_193_bool = 0;
		return 2;
	}
	@@var_194_object:HasProperty(var_195_string, var_197_bool);
	var_197_bool = var_193_bool;
	return 2;
}


func_1439(var_17_object)
{
	Trace("theaterkey is given");
	var_20_object = Obj(); var_21_string = ""; var_22_int = 0;
	var_17_object = var_20_object;
	func_1376(var_20_object, "d4q01_theater_key", (int)1);
	return 0;
}


func_421(var_0_bool, var_1_object)
{
	var_0_bool = true;
	var_1_object = false;
	Stop();
	StopGroup0();
	return 0;
}


func_1319()
{
	CameraSwitchToNormal();
	return 0;
}


func_1193(var_186_bool, var_187_object)
{
	var_188_bool = 0; var_189_bool = 0;
	@@var_187_object:IsDead(var_189_bool);
	var_189_bool = var_186_bool;
	return 2;
}


func_1450(var_58_object)
{
	Trace("tvirin is given");
	var_61_object = Obj(); var_62_string = ""; var_63_int = 0;
	var_58_object = var_61_object;
	func_1376(var_61_object, "tvirin", (int)1);
	return 0;
}


func_171(var_169_bool, var_170_object)
{
	var_171_bool = 0; var_172_object = Obj();
	var_170_object = var_172_object;
	func_1234(var_171_bool, var_172_object);
	var_171_bool = var_169_bool;
	return 0;
}


func_1323(var_98_string)
{
	var_99_float = 0; var_100_float = 0; var_101_float = 0; var_102_float = 0;
	var_104_int = "playing " + var_98_string;
	Trace(var_104_int);
	lshGetAnimTimes(var_98_string, var_101_float, var_102_float);
	lshPlayAnimation(var_101_float, var_102_float);
	var_106_int = "start: " + var_101_float;
	Trace(var_106_int);
	var_108_int = "end: " + var_102_float;
	Trace(var_108_int);
	return 4;
}


func_1069()
{
	var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_float = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_float = 0; var_34_bool = 0;
	WaitForAnimEnd();
	var_35_bool = 0;
	func_1258(var_35_bool);
	var_38_bool = var_35_bool == 0; //@nz
	if(var_38_bool != 0) {
		return 14;
	}
	func_1408((int)0);
	var_39_int = var_28_int;
	var_29_int = 0;
	
Label_1083:
	var_52_bool = 0;
	var_52_bool = 0;
	var_54_bool = var_29_int < (int)5;
	if(var_54_bool != 0) {
		var_55_bool = 0;
		func_1258(var_55_bool);
		if(var_55_bool != 0) {
			var_52_bool = 1;
		}
	}
	if(var_52_bool != 0) {
		irand(var_30_int, (int)3);
		var_58_bool = var_30_int == (int)0;
		if(var_58_bool != 0) {
			var_59_int = var_28_int;
			if(var_59_int == 0) goto Label_1116;
			irand(var_31_int, var_28_int);
			var_61_string = ""; var_62_int = 0;
			var_31_int = var_62_int;
			func_1401(var_61_string, var_62_int);
			PlayAnimation("all", var_61_string);
			WaitForAnimEnd(var_32_bool);
			var_63_bool = var_32_bool == 0; //@nz
			if(var_63_bool != 0) {
			} else {
		} else {
				var_66_bool = var_30_int == (int)1;
				if(var_66_bool != 0) {
					rand(var_33_float, (int)4);
					var_69_int = var_33_float + (int)1;
					Sleep(var_69_int, var_34_bool);
					var_70_bool = var_34_bool == 0; //@nz
					if(var_70_bool != 0) {
						goto Label_1137;
					}
					goto Label_1134;
				}
				var_71_int = var_29_int;
				if(var_71_int == 0) goto Label_1134;
				goto Label_1137;
		}
		Label_1134:
			var_29_int = var_29_int + (int)1;
			goto Label_1083;

		}
	}
Label_1137:
	return 14;
	
}


func_1198(var_175_bool, var_176_object)
{
	var_177_object = Obj(); var_178_object = Obj(); var_179_object = Obj(); var_180_object = Obj();
	var_181_bool = var_176_object == 0; //@ne
	if(var_181_bool != 0) {
		var_175_bool = 0;
		return 4;
	}
	var_182_bool = 0;
	var_182_bool = 0;
	var_185_bool = IsFuncExist(var_176_object, "IsDead", (int)1);
	if(var_185_bool != 0) {
		var_186_bool = 0; var_187_object = Obj();
		var_176_object = var_187_object;
		func_1193(var_186_bool, var_187_object);
		if(var_186_bool != 0) {
			var_182_bool = 1;
		}
	}
	if(var_182_bool != 0) {
		var_175_bool = 0;
		return 4;
	}
	GetScene(var_179_object);
	var_190_bool = var_179_object == 0; //@ne
	if(var_190_bool != 0) {
		var_175_bool = 0;
		return 4;
	}
	@@var_176_object:GetScene(var_180_object);
	var_191_bool = var_179_object != var_180_object;
	if(var_191_bool != 0) {
		var_175_bool = 0;
		return 4;
	}
	var_175_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_49(var_0_bool, var_1_object, var_147_bool, var_148_object, var_149_float, var_150_float, var_151_bool, var_152_bool)
{
	var_153_bool = 0; var_154_bool = 0; var_155_object = Obj(); var_156_cvector = CVector(0,0,0); var_157_cvector = CVector(0,0,0); var_158_cvector = CVector(0,0,0); var_159_float = 0; var_160_object = Obj(); var_161_bool = 0; var_162_bool = 0; var_163_object = Obj(); var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_cvector = CVector(0,0,0); var_167_float = 0; var_168_object = Obj();
	var_0_bool = false;
	var_1_object = var_148_object;
	var_152_bool = var_162_bool;
	
Label_53:
	var_169_bool = 0; var_170_object = Obj();
	var_148_object = var_170_object;
	func_171(var_169_bool, var_170_object);
	var_205_bool = var_169_bool == 0; //@nz
	if(var_205_bool != 0) {
		var_147_bool = 0;
		return 16;
	}
	@@var_148_object:GetPosition(var_164_cvector);
	GetPosition(var_165_cvector);
	var_166_cvector = var_164_cvector - var_165_cvector;
	var_167_float = var_166_cvector | var_166_cvector;
	var_206_bool = 0;
	var_206_bool = 0;
	var_208_bool = var_150_float > (int)0;
	if(var_208_bool != 0) {
		var_209_float = var_150_float * var_150_float;
		var_210_bool = var_167_float > var_209_float;
		if(var_210_bool != 0) {
			var_206_bool = 1;
		}
	}
	if(var_206_bool != 0) {
		Stop();
		var_147_bool = 0;
		return 16;
	}
	var_211_float = var_149_float * var_149_float;
	var_212_bool = var_167_float > var_211_float;
	if(var_212_bool != 0) {
		@@var_148_object:GetPFPosition(var_164_cvector);
		FindPathTo(var_168_object, var_164_cvector);
		var_213_bool = var_168_object != 0; //@nn
		if(var_213_bool != 0) {
			var_168_object = var_163_object;
			var_168_object = 0;
		}
		var_214_bool = var_163_object != 0; //@nn
		if(var_214_bool != 0) {
			var_215_bool = var_162_bool;
			if(var_215_bool == 0) goto Label_102;
			var_162_bool = 0;
			RotatePath(var_163_object, var_161_bool);
			var_216_bool = var_161_bool == 0; //@nz
			if(var_216_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_219_string = "";
				func_178(var_219_string);
				var_220_string = "";
				func_180(var_220_string);
				FollowPath(var_163_object, var_151_bool, var_161_bool, var_219_string, var_220_string);
				var_221_bool = var_161_bool == 0; //@nz
				if(var_221_bool != 0) {
					var_222_bool = var_0_bool;
					if(var_222_bool != 0) {
						var_163_object = 0;
						goto Label_149;
					EMIT "GOTO 0x7a";
					}
				} else {
					var_163_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_161_bool);
					var_225_bool = var_161_bool == 0; //@nz
					if(var_225_bool != 0) {
						var_226_bool = var_0_bool;
						if(var_226_bool != 0) {
							var_163_object = 0;
							goto Label_149;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_149;
	}
			var_168_object = 0;
			goto Label_147;

		Label_147:
			var_163_object = 0;

		}
		goto Label_53;
	}
Label_149:
	var_147_bool = !var_0_bool;
	return 16;
	
}


func_178(var_219_string)
{
	var_219_string = "walk";
	return 0;
}


func_180(var_220_string)
{
	var_220_string = "run";
	return 0;
}


func_437(var_337_bool)
{
	var_337_bool = 0;
	return 0;
}


func_1461(var_47_object)
{
	@@var_47_object:SetReturnValue((int)0);
	return 0;
}


func_439()
{
	var_339_int = 0; var_340_int = 0; var_341_int = 0; var_342_int = 0; var_343_bool = 0; var_344_float = 0; var_345_bool = 0; var_346_int = 0; var_347_int = 0; var_348_int = 0; var_349_int = 0; var_350_bool = 0; var_351_float = 0; var_352_bool = 0;
	WaitForAnimEnd();
	var_353_bool = 0;
	func_1258(var_353_bool);
	var_356_bool = var_353_bool == 0; //@nz
	if(var_356_bool != 0) {
		return 14;
	}
	func_1408((int)0);
	var_357_int = var_346_int;
	var_347_int = 0;
	
Label_453:
	var_370_bool = 0;
	var_370_bool = 0;
	var_372_bool = var_347_int < (int)5;
	if(var_372_bool != 0) {
		var_373_bool = 0;
		func_1258(var_373_bool);
		if(var_373_bool != 0) {
			var_370_bool = 1;
		}
	}
	if(var_370_bool != 0) {
		irand(var_348_int, (int)3);
		var_376_bool = var_348_int == (int)0;
		if(var_376_bool != 0) {
			var_377_int = var_346_int;
			if(var_377_int == 0) goto Label_486;
			irand(var_349_int, var_346_int);
			var_379_string = ""; var_380_int = 0;
			var_349_int = var_380_int;
			func_1401(var_379_string, var_380_int);
			PlayAnimation("all", var_379_string);
			WaitForAnimEnd(var_350_bool);
			var_381_bool = var_350_bool == 0; //@nz
			if(var_381_bool != 0) {
			} else {
		} else {
				var_384_bool = var_348_int == (int)1;
				if(var_384_bool != 0) {
					rand(var_351_float, (int)4);
					var_387_int = var_351_float + (int)1;
					Sleep(var_387_int, var_352_bool);
					var_388_bool = var_352_bool == 0; //@nz
					if(var_388_bool != 0) {
						goto Label_507;
					}
					goto Label_504;
				}
				var_389_int = var_347_int;
				if(var_389_int == 0) goto Label_504;
				goto Label_507;
		}
		Label_504:
			var_347_int = var_347_int + (int)1;
			goto Label_453;

		}
	}
Label_507:
	return 14;
	
}


func_182(var_245_object)
{
	
Label_183:
	var_248_bool = 0; var_249_object = Obj(); var_250_float = 0; var_251_float = 0; var_252_bool = 0; var_253_bool = 0;
	var_245_object = var_249_object;
	func_198(var_247_object, var_245_object, var_248_bool, var_249_object, (float)250, (float)3000, (bool)1, (bool)1);
	var_299_bool = var_248_bool == 0; //@nz
	if(var_299_bool != 0) {
		Sleep((int)1);
		goto Label_183;
	}
	return 0;
}


func_1466(var_54_object)
{
	@@var_54_object:SetReturnValue((int)1);
	return 0;
}


func_571(var_0_bool, var_1_object, var_2_bool, var_3_object, var_79_object, var_80_object)
{
	var_0_bool = var_80_object;
	var_1_object = var_79_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_86_bool = 0; var_87_object = Obj();
		var_87_object = var_1_object;
		func_1471(var_87_object);
		if(var_86_bool != 0) {
			var_94_string = "";
			func_654(var_80_object, "Neutral");
			@@@var_0_bool:SetMessage((int)9667);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9668, (int)10643, (int)10642);
			@@@var_0_bool:AddReply((int)9677, (int)10653, (int)10652);
		} else {
				var_124_string = "";
				func_654(var_80_object, "Neutral");
				@@@var_0_bool:SetMessage((int)9681);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)9682, (int)10660, (int)10659);
				@@@var_0_bool:AddReply((int)9699, (int)-1, (int)10678);
				goto Label_624;
		}
	}
Label_624:
	var_116_bool = 0;
	func_1504(var_116_bool);
	if(var_116_bool != 0) {

	Label_628:
		lshWaitForAnimEnd();
		var_117_object = var_3_object;
		if(var_117_object != 0) {
		} else {
			var_118_string = "";
			var_118_string = var_2_bool;
			func_1323(var_118_string);
			goto Label_628;
	}
		PlayAnimation("all", "idle");

	Label_643:
		WaitForAnimEnd();
		var_121_object = var_3_object;
		if(var_121_object != 0) {
			goto Label_653;
		}
		PlayAnimation("all", "idle");
		goto Label_643;

	}
	goto Label_653;
	
Label_653:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x23f";


func_1341()
{
	var_14_bool = 0;
	func_1504(var_14_bool);
	if(var_14_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1471(var_86_bool)
{
	var_88_int = 0; var_89_string = "";
	func_1358(var_88_int, "ood4WhiteMask1");
	var_93_bool = var_88_int == (int)0;
	if(var_93_bool != 0) {
		var_86_bool = 1;
		return 0;
	}
	var_86_bool = 0;
	return 0;
}


func_322(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1348(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0;
	var_57_int = var_53_cvector | var_53_cvector;
	var_56_float = sqrt(var_57_int);
	var_58_float = 9.999999974752427e-07;
	var_59_bool = var_56_float < var_58_float;
	if(var_59_bool != 0) {
		var_52_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_52_cvector = var_53_cvector / var_56_float;
	return 2;
}


func_198(var_0_bool, var_1_object, var_248_bool, var_249_object, var_250_float, var_251_float, var_252_bool, var_253_bool)
{
	var_254_bool = 0; var_255_bool = 0; var_256_object = Obj(); var_257_cvector = CVector(0,0,0); var_258_cvector = CVector(0,0,0); var_259_cvector = CVector(0,0,0); var_260_float = 0; var_261_object = Obj(); var_262_bool = 0; var_263_bool = 0; var_264_object = Obj(); var_265_cvector = CVector(0,0,0); var_266_cvector = CVector(0,0,0); var_267_cvector = CVector(0,0,0); var_268_float = 0; var_269_object = Obj();
	var_0_bool = false;
	var_1_object = var_249_object;
	var_253_bool = var_263_bool;
	
Label_202:
	var_270_bool = 0; var_271_object = Obj();
	var_249_object = var_271_object;
	func_338(var_270_bool, var_271_object);
	var_274_bool = var_270_bool == 0; //@nz
	if(var_274_bool != 0) {
		var_248_bool = 0;
		return 16;
	}
	@@var_249_object:GetPosition(var_265_cvector);
	GetPosition(var_266_cvector);
	var_267_cvector = var_265_cvector - var_266_cvector;
	var_268_float = var_267_cvector | var_267_cvector;
	var_275_bool = 0;
	var_275_bool = 0;
	var_277_bool = var_251_float > (int)0;
	if(var_277_bool != 0) {
		var_278_float = var_251_float * var_251_float;
		var_279_bool = var_268_float > var_278_float;
		if(var_279_bool != 0) {
			var_275_bool = 1;
		}
	}
	if(var_275_bool != 0) {
		Stop();
		var_248_bool = 0;
		return 16;
	}
	var_280_float = var_250_float * var_250_float;
	var_281_bool = var_268_float > var_280_float;
	if(var_281_bool != 0) {
		@@var_249_object:GetPFPosition(var_265_cvector);
		FindPathTo(var_269_object, var_265_cvector);
		var_282_bool = var_269_object != 0; //@nn
		if(var_282_bool != 0) {
			var_269_object = var_264_object;
			var_269_object = 0;
		}
		var_283_bool = var_264_object != 0; //@nn
		if(var_283_bool != 0) {
			var_284_bool = var_263_bool;
			if(var_284_bool == 0) goto Label_251;
			var_263_bool = 0;
			RotatePath(var_264_object, var_262_bool);
			var_285_bool = var_262_bool == 0; //@nz
			if(var_285_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_288_string = "";
				func_345(var_288_string);
				var_289_string = "";
				func_347(var_289_string);
				FollowPath(var_264_object, var_252_bool, var_262_bool, var_288_string, var_289_string);
				var_290_bool = var_262_bool == 0; //@nz
				if(var_290_bool != 0) {
					var_291_bool = var_0_bool;
					if(var_291_bool != 0) {
						var_264_object = 0;
						goto Label_298;
					EMIT "GOTO 0x10f";
					}
				} else {
					var_264_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_262_bool);
					var_294_bool = var_262_bool == 0; //@nz
					if(var_294_bool != 0) {
						var_295_bool = var_0_bool;
						if(var_295_bool != 0) {
							var_264_object = 0;
							goto Label_298;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_298;
	}
			var_269_object = 0;
			goto Label_296;

		Label_296:
			var_264_object = 0;

		}
		goto Label_202;
	}
Label_298:
	var_248_bool = !var_0_bool;
	return 16;
	
}


func_1483(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("player", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 200001;
		return 2;
	EMIT "GOTO 0x5da";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 200002;
		return 2;
	}
	var_70_int = 200003;
	return 2;
}


func_1358(var_88_int, var_89_string)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable(var_89_string, var_91_int);
	var_91_int = var_88_int;
	return 2;
}


func_1234(var_171_bool, var_172_object)
{
	var_173_int = 0; var_174_int = 0;
	var_175_bool = 0; var_176_object = Obj();
	var_172_object = var_176_object;
	func_1198(var_175_bool, var_176_object);
	var_192_bool = var_175_bool == 0; //@nz
	if(var_192_bool != 0) {
		var_171_bool = 0;
		return 2;
	}
	var_193_bool = 0; var_194_object = Obj(); var_195_string = "";
	var_172_object = var_194_object;
	func_1181(var_193_bool, var_194_object, "noaccess");
	var_202_bool = var_193_bool == 0; //@nz
	if(var_202_bool != 0) {
		var_171_bool = 1;
		return 2;
	}
	@@var_172_object:GetProperty("noaccess", var_174_int);
	var_171_bool = var_174_int == (int)0;
	return 2;
}


func_338(var_270_bool, var_271_object)
{
	var_272_bool = 0; var_273_object = Obj();
	var_271_object = var_273_object;
	func_1234(var_272_bool, var_273_object);
	var_272_bool = var_270_bool;
	return 0;
}


func_1363(var_25_object, var_26_object, var_27_int)
{
	var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0;
	@@var_26_object:GetItemID(var_31_int);
	GetInvItemProperty(var_32_int, var_31_int, "Category");
	@@var_25_object:AddItem(var_33_bool, var_26_object, var_32_int, var_27_int);
	var_35_bool = var_33_bool == 0; //@nz
	if(var_35_bool != 0) {
		@@var_25_object:DropItems(var_26_object, var_27_int);
	}
	return 6;
}


func_345(var_288_string)
{
	var_288_string = "walk";
	return 0;
}


func_347(var_289_string)
{
	var_289_string = "run";
	return 0;
}


func_1500(var_68_int)
{
	var_68_int = 3354;
	return 0;
}


func_349()
{
	
Label_349:
	func_357(var_314_bool, var_315_bool);
	Sleep((int)1);
	goto Label_349;
}
EMIT "Return(); Pop(0)";


func_1502(var_69_string)
{
	var_69_string = "ui/NPC_Black.png";
	return 0;
}


func_1504(var_95_bool)
{
	var_95_bool = 0;
	return 0;
}


func_1376(var_20_object, var_21_string, var_22_int)
{
	var_23_object = Obj(); var_24_object = Obj();
	CreateInvItem(var_24_object);
	@@var_24_object:SetItemName(var_21_string);
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0;
	var_20_object = var_25_object;
	var_24_object = var_26_object;
	var_22_int = var_27_int;
	func_1363(var_25_object, var_26_object, var_27_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_996(var_14_int, var_15_object, var_18_object)
{
	var_16_int = 0; var_17_object = Obj();
	var_15_object = var_17_object;
	TaskCall(4);
	func_508(var_18_object, var_16_int, var_17_object);
	TaskReturn();
	var_18_object = var_14_int;
	return 0;
}


func_357(var_0_bool, var_1_object)
{
	var_316_float = 0; var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); var_319_float = 0; var_320_bool = 0; var_321_object = Obj(); var_322_bool = 0; var_323_float = 0; var_324_cvector = CVector(0,0,0); var_325_cvector = CVector(0,0,0); var_326_float = 0; var_327_bool = 0; var_328_object = Obj(); var_329_bool = 0;
	var_0_bool = false;
	var_1_object = false;
	rand(var_323_float, (float)0.5);
	Sleep(var_323_float);
	
Label_365:
	var_331_bool = var_0_bool == 0; //@nz
	if(var_331_bool != 0) {
		var_332_bool = var_1_object == 0; //@nz
		if(var_332_bool != 0) {

		Label_369:
			GetPosition(var_325_cvector);
			GetCameraFarDistance(var_326_float);
			var_326_float = var_326_float * (float)2.5;
			GetRandomPFPointInCircle(var_324_cvector, var_325_cvector, var_326_float, var_327_bool);
			var_334_bool = var_327_bool;
			if(var_334_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_369;
		}
				var_1_object = false;
	}
			return 14;
	}
	goto Label_386;
	
Label_386:
	FindShiftedPathTo(var_328_object, var_324_cvector);
	var_335_bool = var_328_object != 0; //@nn
	if(var_335_bool != 0) {
		RotatePath(var_328_object, var_329_bool);
		var_336_bool = var_329_bool;
		if(var_336_bool != 0) {
			var_337_bool = 0;
			func_437(var_337_bool);
			FollowPath(var_328_object, var_337_bool, var_329_bool);
			var_328_object = 0;
			var_338_bool = var_329_bool;
			if(var_338_bool != 0) {
				TaskCall(3);
				func_439();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_328_object = 0;
	goto Label_365;
	
}


func_1258(var_35_bool)
{
	var_36_bool = 0; var_37_bool = 0;
	IsLoaded(var_37_bool);
	var_37_bool = var_35_bool;
	return 2;
}


func_1389(var_136_bool, var_137_string, var_138_string)
{
	var_139_object = Obj(); var_140_object = Obj();
	FindActor(var_140_object, var_137_string);
	var_141_bool = var_140_object == 0; //@ne
	if(var_141_bool != 0) {
		var_136_bool = 0;
		return 2;
	}
	Trigger(var_140_object, var_138_string);
	var_136_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1263(var_27_bool, var_28_object)
{
	var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0;
	@@var_28_object:GetPosition(var_38_cvector);
	@@var_28_object:GetEyesHeight(var_37_float);
	var_45_float = GetByIndex(var_38_cvector, 1);
	var_45_float = var_45_float + var_37_float;
	SetByIndex(var_38_cvector, 1) = var_45_float;
	GetPosition(var_39_cvector);
	GetEyesHeight(var_37_float);
	var_46_float = GetByIndex(var_39_cvector, 1);
	var_46_float = var_46_float + var_37_float;
	SetByIndex(var_39_cvector, 1) = var_46_float;
	var_40_cvector = var_38_cvector - var_39_cvector;
	var_47_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (float)0;
	var_48_int = var_40_cvector | var_40_cvector;
	var_49_float = sqrt(var_48_int);
	var_40_cvector = var_40_cvector / var_49_float;
	var_41_cvector = -var_40_cvector;
	var_51_float = var_40_cvector * (int)70;
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	var_53_cvector = var_41_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1348(var_52_cvector, var_53_cvector);
	var_61_float = var_52_cvector * (int)25;
	var_62_int = var_51_float + var_61_float;
	var_42_cvector = var_62_int - CVector(0.0, 10.0, 0.0);
	var_43_cvector = var_39_cvector + var_42_cvector;
	IsOverrideActive(var_44_bool);
	var_64_bool = var_44_bool;
	if(var_64_bool != 0) {
		var_27_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_43_cvector, var_41_cvector);
	var_65_float = GetByIndex(var_42_cvector, 0);
	var_66_float = GetByIndex(var_42_cvector, 2);
	Rotate(var_65_float, var_66_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_27_bool = 1;
	return 16;
}


func_1138()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1143(var_305_object)
{
	var_306_int = 0; var_307_object = Obj();
	var_305_object = var_307_object;
	TaskCall(4);
	func_508(var_308_object, var_306_int, var_307_object);
	TaskReturn();
	return 0;
}


func_1401(var_45_string, var_46_int)
{
	var_47_string = ""; var_48_string = "";
	var_49_int = var_46_int;
	if(var_49_int != 0) {
		"idle" = "idle" + var_46_int;
	}
	var_48_string = var_45_string;
	return 2;
}


func_508(var_0_bool, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0;
	var_0_bool = var_17_object;
	var_27_bool = 0; var_28_object = Obj();
	var_17_object = var_28_object;
	func_1263(var_27_bool, var_28_object);
	var_67_bool = var_27_bool == 0; //@nz
	if(var_67_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	CreateDialog(var_23_object);
	var_68_int = 0;
	func_1500(var_68_int);
	@@var_23_object:SetNPCName(var_68_int);
	var_69_string = "";
	func_1502(var_69_string);
	@@var_23_object:SetPhoto(var_69_string);
	var_70_int = 0;
	func_1483(var_70_int);
	@@var_23_object:SetPlayerName(var_70_int);
	IsOverrideActive(var_24_bool);
	var_78_bool = var_24_bool;
	if(var_78_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	DoDialog(var_23_object);
	var_79_object = Obj(); var_80_object = Obj();
	var_17_object = var_79_object;
	var_23_object = var_80_object;
	TaskCall(5);
	func_571(var_81_object, var_82_object, var_83_string, var_84_bool, var_79_object, var_80_object);
	TaskReturn();
	@@var_23_object:IsDialogEnd(var_26_bool);
	
Label_553:
	var_132_bool = var_26_bool == 0; //@nz
	if(var_132_bool != 0) {
		sync();
		@@var_23_object:IsDialogEnd(var_26_bool);
		goto Label_553;
	}
	var_17_object = Obj();
	func_1319();
	StopDialog(var_23_object);
	@@var_23_object:GetReturnValue((int)-1);
	var_25_int = var_16_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1151(var_301_object)
{
	var_302_bool = 0; var_303_bool = 0;
	
Label_1152:
	IsOverrideActive(var_303_bool);
	var_304_bool = var_303_bool == 0; //@nz
	if(var_304_bool != 0) {
	} else {
		goto Label_1152;
	}
	var_305_object = Obj();
	var_301_object = var_305_object;
	func_1143(var_305_object);
	Hold();
	return 2;
	
}


