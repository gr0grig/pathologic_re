// @IMPORTS: SetTimer/2,Sleep/1,KillTimer/1,GetPosition/1,Stop/0,FindPathTo/2,RotatePath/2,FollowPath/5,Sleep/2,RequestClearPath/1,rand/2,GetCameraFarDistance/1,GetRandomPFPointInCircle/4,FindShiftedPathTo/2,FollowPath/3,StopGroup0/0,WaitForAnimEnd/0,irand/2,PlayAnimation/2,WaitForAnimEnd/1,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetScene/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,GetInvItemProperty/3,CreateInvItem/1,FindActor/2,Trigger/2,HasAnimation/3,TriggerWorld/2,SetVariable/2
// @STRINGS: A:GetPosition|A:GetPFPosition|W:walk|W:run|W:all|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:idle|W:quest_d4_01|W:key2_done|A:GetRegionByPt|W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|A:GetEyesHeight|W:playing |W:start: |W:end: |A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:playsound|W:giveitem|W:soborkey is given|W:d4q01_sobor_key|W:ood4WastedMale1|W:tvirin is given|W:tvirin|A:SetReturnValue|W:player|W:ui/NPC_None.png
// @GLOBALS: 0:int:,1:object:
// @RUN_OP: 0x3f6
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
// @EVENT_11: op=0x2c1 vars=int,int
// @TASK_6: vars= params=0
// @EVENT_0: op=0x404 vars=object
// @TASK_7: vars= params=1
// @STANDALONE_EVENT_41: op=0x59a vars=object
// @PE: 0x0,0x23,0x97,0xa2,0xab,0xb6,0x12c,0x13e,0x149,0x152,0x19e,0x1ac,0x23b,0x2b1,0x2c1,0x3ed,0x480,0x530,0x59a,0x59c,0x5a2,0x5ad,0x5b3,0x5be,0x5c3,0x5c8,0x5d2,0x5de

task_0_event_7(var_0_bool, var_1_object, var_2_int, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	var_13_bool = var_11_bool == (int)10;
	if(var_13_bool != 0) {
		var_14_int = 0;
		func_1179(var_14_int);
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
	func_1434();
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
	func_1434();
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
	func_1434();
	return 0;
}


task_5_event_11(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int)
{
	if((int)1 != 0) {
		func_1350();
		var_16_bool = var_12_int == (int)10685;
		if(var_16_bool != 0) {
			var_17_object = Obj(); var_18_object = Obj();
			var_17_object = var_1_object;
			var_18_object = var_0_bool;
			func_1442(var_18_object);
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_bool;
			func_1436();
		}
		var_41_bool = var_12_int == (int)10687;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_bool;
			func_1453();
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_bool;
			func_1470(var_47_object);
		}
		var_50_bool = var_12_int == (int)10688;
		if(var_50_bool != 0) {
			var_51_object = Obj(); var_52_object = Obj();
			var_51_object = var_1_object;
			var_52_object = var_0_bool;
			func_1453();
			var_53_object = Obj(); var_54_object = Obj();
			var_53_object = var_1_object;
			var_54_object = var_0_bool;
			func_1475(var_54_object);
		}
		var_57_bool = var_12_int == (int)10698;
		if(var_57_bool != 0) {
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_bool;
			func_1459(var_59_object);
			var_64_object = Obj(); var_65_object = Obj();
			var_64_object = var_1_object;
			var_65_object = var_0_bool;
			func_1436();
		}
		var_67_bool = var_11_int == (int)10680;
		if(var_67_bool != 0) {
			var_68_bool = 0; var_69_object = Obj();
			var_69_object = var_1_object;
			func_1490(var_69_object);
			if(var_68_bool != 0) {
				var_76_string = "";
				func_689(var_12_int, "Neutral");
				@@@var_0_bool:SetMessage((int)9701);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)9702, (int)10682, (int)10681);
				@@@var_0_bool:AddReply((int)9711, (int)10682, (int)10691);
				return 0;
			}
			var_98_string = "";
			func_689(var_12_int, "Neutral");
			@@@var_0_bool:SetMessage((int)9712);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9713, (int)10695, (int)10694);
			@@@var_0_bool:AddReply((int)9720, (int)10702, (int)10701);
			@@@var_0_bool:AddReply((int)9723, (int)10695, (int)10705);
			@@@var_0_bool:AddReply((int)9724, (int)-1, (int)10707);
			return 0;
		EMIT "PushEmpty(bool, object)";
		EMIT "Stack[-1] = Stack[1 + Tasks[-1].StackPointer]";
		EMIT "Call 0x5c8";
		EMIT "Pop(1)";
		EMIT "IF (Stack[-1] == 0) GOTO 0x34e; Pop(1)";
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=113";
		EMIT "Call 0x2b1";
		EMIT "Pop(1)";
		EMIT "Push((int) 11013)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=129";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=140";
		EMIT "Pop(0)";
		EMIT "Push((int) 11014)";
		EMIT "Push((int) 12186)";
		EMIT "Push((int) 12185)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=153";
		EMIT "Pop(3)";
		EMIT "Push((int) 11017)";
		EMIT "Push((int) -1)";
		EMIT "Push((int) 12188)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=153";
		EMIT "Pop(3)";
		EMIT "Return(); Pop(0)";
		}
		var_113_bool = var_11_int == (int)12186;
		if(var_113_bool != 0) {
			var_114_string = "";
			func_689(var_12_int, "Neutral");
			@@@var_0_bool:SetMessage((int)11015);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)11016, (int)-1, (int)12187);
			return 0;
		}
		var_120_bool = var_11_int == (int)10702;
		if(var_120_bool != 0) {
			var_121_string = "";
			func_689(var_12_int, "Neutral");
			@@@var_0_bool:SetMessage((int)9721);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9722, (int)10697, (int)10703);
			return 0;
		}
		var_127_bool = var_11_int == (int)10695;
		if(var_127_bool != 0) {
			var_128_string = "";
			func_689(var_12_int, "Neutral");
			@@@var_0_bool:SetMessage((int)9714);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9715, (int)10697, (int)10696);
			@@@var_0_bool:AddReply((int)9719, (int)-1, (int)10700);
			return 0;
		}
		var_137_bool = var_11_int == (int)10697;
		if(var_137_bool != 0) {
			var_138_string = "";
			func_689(var_12_int, "Neutral");
			@@@var_0_bool:SetMessage((int)9716);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9717, (int)-1, (int)10698);
			@@@var_0_bool:AddReply((int)9718, (int)-1, (int)10699);
			return 0;
		}
		var_147_bool = var_11_int == (int)10682;
		if(var_147_bool != 0) {
			var_148_string = "";
			func_689(var_12_int, "Neutral");
			@@@var_0_bool:SetMessage((int)9703);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9704, (int)10684, (int)10683);
			@@@var_0_bool:AddReply((int)9710, (int)10684, (int)10689);
			return 0;
		}
		var_157_bool = var_11_int == (int)10684;
		if(var_157_bool != 0) {
			var_158_string = "";
			func_689(var_12_int, "Neutral");
			@@@var_0_bool:SetMessage((int)9705);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9706, (int)10686, (int)10685);
			return 0;
		}
		var_164_bool = var_11_int == (int)10686;
		if(var_164_bool != 0) {
			var_165_string = "";
			func_689(var_12_int, "Neutral");
			@@@var_0_bool:SetMessage((int)9707);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9708, (int)-1, (int)10687);
			@@@var_0_bool:AddReply((int)9709, (int)-1, (int)10688);
			return 0;
		}
		var_3_object = true;
		var_173_bool = 0;
		func_1526(var_173_bool);
		if(var_173_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x2c2";
	
}


task_6_event_0(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	func_1147();
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1005(var_13_int, var_14_int, var_15_object);
	var_14_int = var_13_int;
	var_141_bool = var_13_int == (int)0;
	if(var_141_bool != 0) {
		var_142_bool = 0; var_143_string = ""; var_144_string = "";
		func_1398(var_142_bool, "quest_d4_01", "key2_done");
		var_148_object = Obj();
		var_11_object = var_148_object;
		TaskCall(0);
		func_0(var_148_object);
		TaskReturn();
		var_251_object = Obj();
		var_11_object = var_251_object;
		TaskCall(1);
		func_182(var_251_object);
		TaskReturn();
		var_307_object = Obj();
		var_11_object = var_307_object;
		TaskCall(7);
		func_1160(var_307_object);
		TaskReturn();
	} else {
		var_316_bool = var_13_int == (int)1;
		if(var_316_bool == 0) goto Label_1077;
		var_317_bool = 0; var_318_string = ""; var_319_string = "";
		func_1398(var_317_bool, "quest_d4_01", "key2_done");
		TaskCall(2);
		func_349();
		TaskReturn();
	}
Label_1077:
	return 2;
	
}


event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object)
{
	return 0;
}


main(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool)
{
	var_11_int = GlobalVars[0];
	func_1179((int)0);
	var_12_int = var_11_int;
	GlobalVars[0] = var_11_int;
	
Label_1020:
	Sleep((int)3);
	func_1078();
	goto Label_1020;
}
EMIT "Return(); Pop(0)";


func_0(var_148_object)
{
	SetTimer((int)10, (int)1);
	
Label_5:
	var_153_bool = 0; var_154_object = Obj(); var_155_float = 0; var_156_float = 0; var_157_bool = 0; var_158_bool = 0;
	var_148_object = var_154_object;
	func_49(var_150_object, var_148_object, var_153_bool, var_154_object, (float)250, (float)3000, (bool)1, (bool)1);
	var_236_int = 0;
	func_1179(var_236_int);
	var_244_int = GlobalVars[0];
	var_245_bool = var_236_int != var_244_int;
	if(var_245_bool != 0) {
	} else {
		Sleep((int)1);
		var_248_int = 0;
		func_1179(var_248_int);
		var_249_int = GlobalVars[0];
		var_250_bool = var_248_int != var_249_int;
		if(var_250_bool != 0) {
			goto Label_31;
		}
		goto Label_5;
	}
Label_31:
	KillTimer((int)10);
	return 0;
	
}


func_1152(var_311_object)
{
	var_312_int = 0; var_313_object = Obj();
	var_311_object = var_313_object;
	TaskCall(4);
	func_508(var_314_object, var_312_int, var_313_object);
	TaskReturn();
	return 0;
}


func_1410(var_45_string, var_46_int)
{
	var_47_string = ""; var_48_string = "";
	var_49_int = var_46_int;
	if(var_49_int != 0) {
		"idle" = "idle" + var_46_int;
	}
	var_48_string = var_45_string;
	return 2;
}


func_1160(var_307_object)
{
	var_308_bool = 0; var_309_bool = 0;
	
Label_1161:
	IsOverrideActive(var_309_bool);
	var_310_bool = var_309_bool == 0; //@nz
	if(var_310_bool != 0) {
	} else {
		goto Label_1161;
	}
	var_311_object = Obj();
	var_307_object = var_311_object;
	func_1152(var_311_object);
	Hold();
	return 2;
	
}


func_1417(var_39_int)
{
	var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_bool = 0;
	var_42_int = 0;
	
Label_1419:
	var_45_string = ""; var_46_int = 0;
	var_42_int = var_46_int;
	func_1410(var_45_string, var_46_int);
	HasAnimation(var_43_bool, "all", var_45_string);
	var_50_bool = var_43_bool == 0; //@nz
	if(var_50_bool != 0) {
	} else {
		var_42_int = var_42_int + (int)1;
		goto Label_1419;
	}
	var_42_int = var_39_int;
	return 4;
	
}


func_1174(var_17_cvector)
{
	var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0);
	GetPosition(var_19_cvector);
	var_19_cvector = var_17_cvector;
	return 2;
}


func_1179(var_12_int)
{
	var_13_object = Obj(); var_14_int = 0; var_15_object = Obj(); var_16_int = 0;
	GetScene(var_15_object);
	var_17_cvector = CVector(0,0,0);
	func_1174(var_17_cvector);
	@@var_15_object:GetRegionByPt(var_16_int, var_17_cvector);
	var_16_int = var_12_int;
	return 4;
}
EMIT "Stack[-2] = 0";


func_155(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1436()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_1442(var_17_object)
{
	Trace("soborkey is given");
	var_20_object = Obj(); var_21_string = ""; var_22_int = 0;
	var_17_object = var_20_object;
	func_1385(var_20_object, "d4q01_sobor_key", (int)1);
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


func_1190(var_199_bool, var_200_object, var_201_string)
{
	var_202_bool = 0; var_203_bool = 0;
	var_206_bool = IsFuncExist(var_200_object, "HasProperty", (int)2);
	var_207_bool = var_206_bool == 0; //@nz
	if(var_207_bool != 0) {
		var_199_bool = 0;
		return 2;
	}
	@@var_200_object:HasProperty(var_201_string, var_203_bool);
	var_203_bool = var_199_bool;
	return 2;
}


func_171(var_175_bool, var_176_object)
{
	var_177_bool = 0; var_178_object = Obj();
	var_176_object = var_178_object;
	func_1243(var_177_bool, var_178_object);
	var_177_bool = var_175_bool;
	return 0;
}


func_1453()
{
	SetVariable("ood4WastedMale1", (int)1);
	return 0;
}


func_1328()
{
	CameraSwitchToNormal();
	return 0;
}


func_49(var_0_bool, var_1_object, var_153_bool, var_154_object, var_155_float, var_156_float, var_157_bool, var_158_bool)
{
	var_159_bool = 0; var_160_bool = 0; var_161_object = Obj(); var_162_cvector = CVector(0,0,0); var_163_cvector = CVector(0,0,0); var_164_cvector = CVector(0,0,0); var_165_float = 0; var_166_object = Obj(); var_167_bool = 0; var_168_bool = 0; var_169_object = Obj(); var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0); var_172_cvector = CVector(0,0,0); var_173_float = 0; var_174_object = Obj();
	var_0_bool = false;
	var_1_object = var_154_object;
	var_158_bool = var_168_bool;
	
Label_53:
	var_175_bool = 0; var_176_object = Obj();
	var_154_object = var_176_object;
	func_171(var_175_bool, var_176_object);
	var_211_bool = var_175_bool == 0; //@nz
	if(var_211_bool != 0) {
		var_153_bool = 0;
		return 16;
	}
	@@var_154_object:GetPosition(var_170_cvector);
	GetPosition(var_171_cvector);
	var_172_cvector = var_170_cvector - var_171_cvector;
	var_173_float = var_172_cvector | var_172_cvector;
	var_212_bool = 0;
	var_212_bool = 0;
	var_214_bool = var_156_float > (int)0;
	if(var_214_bool != 0) {
		var_215_float = var_156_float * var_156_float;
		var_216_bool = var_173_float > var_215_float;
		if(var_216_bool != 0) {
			var_212_bool = 1;
		}
	}
	if(var_212_bool != 0) {
		Stop();
		var_153_bool = 0;
		return 16;
	}
	var_217_float = var_155_float * var_155_float;
	var_218_bool = var_173_float > var_217_float;
	if(var_218_bool != 0) {
		@@var_154_object:GetPFPosition(var_170_cvector);
		FindPathTo(var_174_object, var_170_cvector);
		var_219_bool = var_174_object != 0; //@nn
		if(var_219_bool != 0) {
			var_174_object = var_169_object;
			var_174_object = 0;
		}
		var_220_bool = var_169_object != 0; //@nn
		if(var_220_bool != 0) {
			var_221_bool = var_168_bool;
			if(var_221_bool == 0) goto Label_102;
			var_168_bool = 0;
			RotatePath(var_169_object, var_167_bool);
			var_222_bool = var_167_bool == 0; //@nz
			if(var_222_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_225_string = "";
				func_178(var_225_string);
				var_226_string = "";
				func_180(var_226_string);
				FollowPath(var_169_object, var_157_bool, var_167_bool, var_225_string, var_226_string);
				var_227_bool = var_167_bool == 0; //@nz
				if(var_227_bool != 0) {
					var_228_bool = var_0_bool;
					if(var_228_bool != 0) {
						var_169_object = 0;
						goto Label_149;
					EMIT "GOTO 0x7a";
					}
				} else {
					var_169_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_167_bool);
					var_231_bool = var_167_bool == 0; //@nz
					if(var_231_bool != 0) {
						var_232_bool = var_0_bool;
						if(var_232_bool != 0) {
							var_169_object = 0;
							goto Label_149;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_149;
	}
			var_174_object = 0;
			goto Label_147;

		Label_147:
			var_169_object = 0;

		}
		goto Label_53;
	}
Label_149:
	var_153_bool = !var_0_bool;
	return 16;
	
}


func_1202(var_192_bool, var_193_object)
{
	var_194_bool = 0; var_195_bool = 0;
	@@var_193_object:IsDead(var_195_bool);
	var_195_bool = var_192_bool;
	return 2;
}


func_178(var_225_string)
{
	var_225_string = "walk";
	return 0;
}


func_689(var_2_bool, var_94_string)
{
	var_95_bool = 0;
	func_1526(var_95_bool);
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
	func_1332(var_98_string);
	var_2_bool = var_94_string;
	return 0;
}


func_180(var_226_string)
{
	var_226_string = "run";
	return 0;
}


func_437(var_343_bool)
{
	var_343_bool = 0;
	return 0;
}


func_1332(var_98_string)
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


func_439()
{
	var_345_int = 0; var_346_int = 0; var_347_int = 0; var_348_int = 0; var_349_bool = 0; var_350_float = 0; var_351_bool = 0; var_352_int = 0; var_353_int = 0; var_354_int = 0; var_355_int = 0; var_356_bool = 0; var_357_float = 0; var_358_bool = 0;
	WaitForAnimEnd();
	var_359_bool = 0;
	func_1267(var_359_bool);
	var_362_bool = var_359_bool == 0; //@nz
	if(var_362_bool != 0) {
		return 14;
	}
	func_1417((int)0);
	var_363_int = var_352_int;
	var_353_int = 0;
	
Label_453:
	var_376_bool = 0;
	var_376_bool = 0;
	var_378_bool = var_353_int < (int)5;
	if(var_378_bool != 0) {
		var_379_bool = 0;
		func_1267(var_379_bool);
		if(var_379_bool != 0) {
			var_376_bool = 1;
		}
	}
	if(var_376_bool != 0) {
		irand(var_354_int, (int)3);
		var_382_bool = var_354_int == (int)0;
		if(var_382_bool != 0) {
			var_383_int = var_352_int;
			if(var_383_int == 0) goto Label_486;
			irand(var_355_int, var_352_int);
			var_385_string = ""; var_386_int = 0;
			var_355_int = var_386_int;
			func_1410(var_385_string, var_386_int);
			PlayAnimation("all", var_385_string);
			WaitForAnimEnd(var_356_bool);
			var_387_bool = var_356_bool == 0; //@nz
			if(var_387_bool != 0) {
			} else {
		} else {
				var_390_bool = var_354_int == (int)1;
				if(var_390_bool != 0) {
					rand(var_357_float, (int)4);
					var_393_int = var_357_float + (int)1;
					Sleep(var_393_int, var_358_bool);
					var_394_bool = var_358_bool == 0; //@nz
					if(var_394_bool != 0) {
						goto Label_507;
					}
					goto Label_504;
				}
				var_395_int = var_353_int;
				if(var_395_int == 0) goto Label_504;
				goto Label_507;
		}
		Label_504:
			var_353_int = var_353_int + (int)1;
			goto Label_453;

		}
	}
Label_507:
	return 14;
	
}


func_1459(var_58_object)
{
	Trace("tvirin is given");
	var_61_object = Obj(); var_62_string = ""; var_63_int = 0;
	var_58_object = var_61_object;
	func_1385(var_61_object, "tvirin", (int)1);
	return 0;
}


func_1078()
{
	var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_float = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_float = 0; var_34_bool = 0;
	WaitForAnimEnd();
	var_35_bool = 0;
	func_1267(var_35_bool);
	var_38_bool = var_35_bool == 0; //@nz
	if(var_38_bool != 0) {
		return 14;
	}
	func_1417((int)0);
	var_39_int = var_28_int;
	var_29_int = 0;
	
Label_1092:
	var_52_bool = 0;
	var_52_bool = 0;
	var_54_bool = var_29_int < (int)5;
	if(var_54_bool != 0) {
		var_55_bool = 0;
		func_1267(var_55_bool);
		if(var_55_bool != 0) {
			var_52_bool = 1;
		}
	}
	if(var_52_bool != 0) {
		irand(var_30_int, (int)3);
		var_58_bool = var_30_int == (int)0;
		if(var_58_bool != 0) {
			var_59_int = var_28_int;
			if(var_59_int == 0) goto Label_1125;
			irand(var_31_int, var_28_int);
			var_61_string = ""; var_62_int = 0;
			var_31_int = var_62_int;
			func_1410(var_61_string, var_62_int);
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
						goto Label_1146;
					}
					goto Label_1143;
				}
				var_71_int = var_29_int;
				if(var_71_int == 0) goto Label_1143;
				goto Label_1146;
		}
		Label_1143:
			var_29_int = var_29_int + (int)1;
			goto Label_1092;

		}
	}
Label_1146:
	return 14;
	
}


func_182(var_251_object)
{
	
Label_183:
	var_254_bool = 0; var_255_object = Obj(); var_256_float = 0; var_257_float = 0; var_258_bool = 0; var_259_bool = 0;
	var_251_object = var_255_object;
	func_198(var_253_object, var_251_object, var_254_bool, var_255_object, (float)250, (float)3000, (bool)1, (bool)1);
	var_305_bool = var_254_bool == 0; //@nz
	if(var_305_bool != 0) {
		Sleep((int)1);
		goto Label_183;
	}
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
		func_1490(var_87_object);
		if(var_86_bool != 0) {
			var_94_string = "";
			func_689(var_80_object, "Neutral");
			@@@var_0_bool:SetMessage((int)9701);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9702, (int)10682, (int)10681);
			@@@var_0_bool:AddReply((int)9711, (int)10682, (int)10691);
		} else {
				var_124_string = "";
				func_689(var_80_object, "Neutral");
				@@@var_0_bool:SetMessage((int)9712);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)9713, (int)10695, (int)10694);
				@@@var_0_bool:AddReply((int)9720, (int)10702, (int)10701);
				@@@var_0_bool:AddReply((int)9723, (int)10695, (int)10705);
				@@@var_0_bool:AddReply((int)9724, (int)-1, (int)10707);
				goto Label_659;
		}
	}
Label_659:
	var_116_bool = 0;
	func_1526(var_116_bool);
	if(var_116_bool != 0) {

	Label_663:
		lshWaitForAnimEnd();
		var_117_object = var_3_object;
		if(var_117_object != 0) {
		} else {
			var_118_string = "";
			var_118_string = var_2_bool;
			func_1332(var_118_string);
			goto Label_663;
	}
		PlayAnimation("all", "idle");

	Label_678:
		WaitForAnimEnd();
		var_121_object = var_3_object;
		if(var_121_object != 0) {
			goto Label_688;
		}
		PlayAnimation("all", "idle");
		goto Label_678;

	}
	goto Label_688;
	
Label_688:
	return 0;
	
}
EMIT "PushEmpty(bool, object)";
EMIT "Stack[-1] = Stack[1 + Tasks[-1].StackPointer]";
EMIT "Call 0x5c8";
EMIT "Pop(1)";
EMIT "IF (Stack[-1] == 0) GOTO 0x291; Pop(1)";
EMIT "PushEmpty(string)";
EMIT "Stack[-1] = \"Neutral\" // @poff=113";
EMIT "Call 0x2b1";
EMIT "Pop(1)";
EMIT "Push((int) 11013)";
EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=129";
EMIT "Pop(1)";
EMIT "@@@ ClearReplies(); Obj=0 // @poff=140";
EMIT "Pop(0)";
EMIT "Push((int) 11014)";
EMIT "Push((int) 12186)";
EMIT "Push((int) 12185)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=153";
EMIT "Pop(3)";
EMIT "Push((int) 11017)";
EMIT "Push((int) -1)";
EMIT "Push((int) 12188)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=153";
EMIT "Pop(3)";
EMIT "GOTO 0x293";


func_1207(var_181_bool, var_182_object)
{
	var_183_object = Obj(); var_184_object = Obj(); var_185_object = Obj(); var_186_object = Obj();
	var_187_bool = var_182_object == 0; //@ne
	if(var_187_bool != 0) {
		var_181_bool = 0;
		return 4;
	}
	var_188_bool = 0;
	var_188_bool = 0;
	var_191_bool = IsFuncExist(var_182_object, "IsDead", (int)1);
	if(var_191_bool != 0) {
		var_192_bool = 0; var_193_object = Obj();
		var_182_object = var_193_object;
		func_1202(var_192_bool, var_193_object);
		if(var_192_bool != 0) {
			var_188_bool = 1;
		}
	}
	if(var_188_bool != 0) {
		var_181_bool = 0;
		return 4;
	}
	GetScene(var_185_object);
	var_196_bool = var_185_object == 0; //@ne
	if(var_196_bool != 0) {
		var_181_bool = 0;
		return 4;
	}
	@@var_182_object:GetScene(var_186_object);
	var_197_bool = var_185_object != var_186_object;
	if(var_197_bool != 0) {
		var_181_bool = 0;
		return 4;
	}
	var_181_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1470(var_47_object)
{
	@@var_47_object:SetReturnValue((int)0);
	return 0;
}


func_322(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1475(var_54_object)
{
	@@var_54_object:SetReturnValue((int)1);
	return 0;
}


func_198(var_0_bool, var_1_object, var_254_bool, var_255_object, var_256_float, var_257_float, var_258_bool, var_259_bool)
{
	var_260_bool = 0; var_261_bool = 0; var_262_object = Obj(); var_263_cvector = CVector(0,0,0); var_264_cvector = CVector(0,0,0); var_265_cvector = CVector(0,0,0); var_266_float = 0; var_267_object = Obj(); var_268_bool = 0; var_269_bool = 0; var_270_object = Obj(); var_271_cvector = CVector(0,0,0); var_272_cvector = CVector(0,0,0); var_273_cvector = CVector(0,0,0); var_274_float = 0; var_275_object = Obj();
	var_0_bool = false;
	var_1_object = var_255_object;
	var_259_bool = var_269_bool;
	
Label_202:
	var_276_bool = 0; var_277_object = Obj();
	var_255_object = var_277_object;
	func_338(var_276_bool, var_277_object);
	var_280_bool = var_276_bool == 0; //@nz
	if(var_280_bool != 0) {
		var_254_bool = 0;
		return 16;
	}
	@@var_255_object:GetPosition(var_271_cvector);
	GetPosition(var_272_cvector);
	var_273_cvector = var_271_cvector - var_272_cvector;
	var_274_float = var_273_cvector | var_273_cvector;
	var_281_bool = 0;
	var_281_bool = 0;
	var_283_bool = var_257_float > (int)0;
	if(var_283_bool != 0) {
		var_284_float = var_257_float * var_257_float;
		var_285_bool = var_274_float > var_284_float;
		if(var_285_bool != 0) {
			var_281_bool = 1;
		}
	}
	if(var_281_bool != 0) {
		Stop();
		var_254_bool = 0;
		return 16;
	}
	var_286_float = var_256_float * var_256_float;
	var_287_bool = var_274_float > var_286_float;
	if(var_287_bool != 0) {
		@@var_255_object:GetPFPosition(var_271_cvector);
		FindPathTo(var_275_object, var_271_cvector);
		var_288_bool = var_275_object != 0; //@nn
		if(var_288_bool != 0) {
			var_275_object = var_270_object;
			var_275_object = 0;
		}
		var_289_bool = var_270_object != 0; //@nn
		if(var_289_bool != 0) {
			var_290_bool = var_269_bool;
			if(var_290_bool == 0) goto Label_251;
			var_269_bool = 0;
			RotatePath(var_270_object, var_268_bool);
			var_291_bool = var_268_bool == 0; //@nz
			if(var_291_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_294_string = "";
				func_345(var_294_string);
				var_295_string = "";
				func_347(var_295_string);
				FollowPath(var_270_object, var_258_bool, var_268_bool, var_294_string, var_295_string);
				var_296_bool = var_268_bool == 0; //@nz
				if(var_296_bool != 0) {
					var_297_bool = var_0_bool;
					if(var_297_bool != 0) {
						var_270_object = 0;
						goto Label_298;
					EMIT "GOTO 0x10f";
					}
				} else {
					var_270_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_268_bool);
					var_300_bool = var_268_bool == 0; //@nz
					if(var_300_bool != 0) {
						var_301_bool = var_0_bool;
						if(var_301_bool != 0) {
							var_270_object = 0;
							goto Label_298;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_298;
	}
			var_275_object = 0;
			goto Label_296;

		Label_296:
			var_270_object = 0;

		}
		goto Label_202;
	}
Label_298:
	var_254_bool = !var_0_bool;
	return 16;
	
}


func_1350()
{
	var_14_bool = 0;
	func_1526(var_14_bool);
	if(var_14_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1480()
{
0x5c8: PushEmpty()
0x5c9: PushEmpty(bool, object)
0x5ca: Stack[-3] = Stack[-1]
0x5cb: Call 0x5de
}


func_1357(var_52_cvector, var_53_cvector)
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


func_338(var_276_bool, var_277_object)
{
	var_278_bool = 0; var_279_object = Obj();
	var_277_object = var_279_object;
	func_1243(var_278_bool, var_279_object);
	var_278_bool = var_276_bool;
	return 0;
}


func_1490(var_86_bool)
{
	var_88_int = 0; var_89_string = "";
	func_1367(var_88_int, "ood4WastedMale1");
	var_93_bool = var_88_int == (int)0;
	if(var_93_bool != 0) {
		var_86_bool = 1;
		return 0;
	}
	var_86_bool = 0;
	return 0;
}


func_1367(var_88_int, var_89_string)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable(var_89_string, var_91_int);
	var_91_int = var_88_int;
	return 2;
}


func_345(var_294_string)
{
	var_294_string = "walk";
	return 0;
}


func_1243(var_177_bool, var_178_object)
{
	var_179_int = 0; var_180_int = 0;
	var_181_bool = 0; var_182_object = Obj();
	var_178_object = var_182_object;
	func_1207(var_181_bool, var_182_object);
	var_198_bool = var_181_bool == 0; //@nz
	if(var_198_bool != 0) {
		var_177_bool = 0;
		return 2;
	}
	var_199_bool = 0; var_200_object = Obj(); var_201_string = "";
	var_178_object = var_200_object;
	func_1190(var_199_bool, var_200_object, "noaccess");
	var_208_bool = var_199_bool == 0; //@nz
	if(var_208_bool != 0) {
		var_177_bool = 1;
		return 2;
	}
	@@var_178_object:GetProperty("noaccess", var_180_int);
	var_177_bool = var_180_int == (int)0;
	return 2;
}


func_347(var_295_string)
{
	var_295_string = "run";
	return 0;
}


func_349()
{
	
Label_349:
	func_357(var_320_bool, var_321_bool);
	Sleep((int)1);
	goto Label_349;
}
EMIT "Return(); Pop(0)";


func_1372(var_25_object, var_26_object, var_27_int)
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


func_1502()
{
0x5de: PushEmpty()
0x5df: Stack[-2] = (bool) 0
0x5e0: Return(); Pop(0)
}


func_1505(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("player", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 200001;
		return 2;
	EMIT "GOTO 0x5f0";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 200002;
		return 2;
	}
	var_70_int = 200003;
	return 2;
}


func_357(var_0_bool, var_1_object)
{
	var_322_float = 0; var_323_cvector = CVector(0,0,0); var_324_cvector = CVector(0,0,0); var_325_float = 0; var_326_bool = 0; var_327_object = Obj(); var_328_bool = 0; var_329_float = 0; var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); var_332_float = 0; var_333_bool = 0; var_334_object = Obj(); var_335_bool = 0;
	var_0_bool = false;
	var_1_object = false;
	rand(var_329_float, (float)0.5);
	Sleep(var_329_float);
	
Label_365:
	var_337_bool = var_0_bool == 0; //@nz
	if(var_337_bool != 0) {
		var_338_bool = var_1_object == 0; //@nz
		if(var_338_bool != 0) {

		Label_369:
			GetPosition(var_331_cvector);
			GetCameraFarDistance(var_332_float);
			var_332_float = var_332_float * (float)2.5;
			GetRandomPFPointInCircle(var_330_cvector, var_331_cvector, var_332_float, var_333_bool);
			var_340_bool = var_333_bool;
			if(var_340_bool != 0) {
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
	FindShiftedPathTo(var_334_object, var_330_cvector);
	var_341_bool = var_334_object != 0; //@nn
	if(var_341_bool != 0) {
		RotatePath(var_334_object, var_335_bool);
		var_342_bool = var_335_bool;
		if(var_342_bool != 0) {
			var_343_bool = 0;
			func_437(var_343_bool);
			FollowPath(var_334_object, var_343_bool, var_335_bool);
			var_334_object = 0;
			var_344_bool = var_335_bool;
			if(var_344_bool != 0) {
				TaskCall(3);
				func_439();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_334_object = 0;
	goto Label_365;
	
}


func_1385(var_20_object, var_21_string, var_22_int)
{
	var_23_object = Obj(); var_24_object = Obj();
	CreateInvItem(var_24_object);
	@@var_24_object:SetItemName(var_21_string);
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0;
	var_20_object = var_25_object;
	var_24_object = var_26_object;
	var_22_int = var_27_int;
	func_1372(var_25_object, var_26_object, var_27_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1005(var_14_int, var_15_object, var_18_object)
{
	var_16_int = 0; var_17_object = Obj();
	var_15_object = var_17_object;
	TaskCall(4);
	func_508(var_18_object, var_16_int, var_17_object);
	TaskReturn();
	var_18_object = var_14_int;
	return 0;
}


func_1522(var_68_int)
{
	var_68_int = 3341;
	return 0;
}


func_1267(var_35_bool)
{
	var_36_bool = 0; var_37_bool = 0;
	IsLoaded(var_37_bool);
	var_37_bool = var_35_bool;
	return 2;
}


func_1524(var_69_string)
{
	var_69_string = "ui/NPC_None.png";
	return 0;
}


func_1526(var_95_bool)
{
	var_95_bool = 0;
	return 0;
}


func_1398(var_142_bool, var_143_string, var_144_string)
{
	var_145_object = Obj(); var_146_object = Obj();
	FindActor(var_146_object, var_143_string);
	var_147_bool = var_146_object == 0; //@ne
	if(var_147_bool != 0) {
		var_142_bool = 0;
		return 2;
	}
	Trigger(var_146_object, var_144_string);
	var_142_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1272(var_27_bool, var_28_object)
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
	func_1357(var_52_cvector, var_53_cvector);
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


func_1147()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_508(var_0_bool, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0;
	var_0_bool = var_17_object;
	var_27_bool = 0; var_28_object = Obj();
	var_17_object = var_28_object;
	func_1272(var_27_bool, var_28_object);
	var_67_bool = var_27_bool == 0; //@nz
	if(var_67_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	CreateDialog(var_23_object);
	var_68_int = 0;
	func_1522(var_68_int);
	@@var_23_object:SetNPCName(var_68_int);
	var_69_string = "";
	func_1524(var_69_string);
	@@var_23_object:SetPhoto(var_69_string);
	var_70_int = 0;
	func_1505(var_70_int);
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
	var_138_bool = var_26_bool == 0; //@nz
	if(var_138_bool != 0) {
		sync();
		@@var_23_object:IsDialogEnd(var_26_bool);
		goto Label_553;
	}
	var_17_object = Obj();
	func_1328();
	StopDialog(var_23_object);
	@@var_23_object:GetReturnValue((int)-1);
	var_25_int = var_16_int;
	return 8;
}
EMIT "Stack[-4] = 0";


