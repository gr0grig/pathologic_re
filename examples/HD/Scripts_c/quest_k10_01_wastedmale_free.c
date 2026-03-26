// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,GetScene/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetPosition/1,GetDirection/1,FindLongestDir/6,Trace/1,Rotate/2,MovePoint/3,Stop/0,FindDirLength/3,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,LookAsync/3,lshStopSpeech/0,self/1,GetVariable/2,Trigger/2,GetGameTime/1,HasAnimation/3,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:RemoveStationaryActor|W:player|W:head|A:GetPosition|W:Can't retreat, distance: |W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|A:GetEyesHeight|W:Can't find lsh animation : |W:ui/NPC_Citizen3.png|W:ui/NPC_Citizen3_b.png|W:k10q01|W:k10q01WastedGotoBurah|W:pt_gmap_factory|A:AddMark|W:quest_k10_01|W:init_factory|A:ShowMap|A:SetReturnValue|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x181
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb3 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x18b vars=object
// @EVENT_7: op=0x1d2 vars=int
// @TASK_3: vars=object,cvector,bool params=1
// @EVENT_7: op=0x2b4 vars=int
// @EVENT_41: op=0x2ef vars=object
// @STANDALONE_EVENT_22: op=0x54f vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x557 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_41: op=0x561 vars=object
// @PE: 0x4a,0x9d,0xb3,0x1a8,0x1d2,0x1e9,0x2ef,0x437,0x477,0x49c,0x4ac,0x4b1,0x4bd,0x54f,0x557,0x561

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_cvector, var_14_bool)
{
	if((int)1 != 0) {
		func_1056();
		var_18_bool = var_14_bool == (int)28267;
		if(var_18_bool != 0) {
			var_19_object = Obj(); var_20_object = Obj();
			var_19_object = var_1_object;
			var_20_object = var_0_object;
			func_1143();
		}
		var_47_bool = var_14_bool == (int)28275;
		if(var_47_bool != 0) {
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_1152();
			var_82_object = Obj(); var_83_object = Obj();
			var_82_object = var_1_object;
			var_83_object = var_0_object;
			func_1196(var_83_object);
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_1180(var_86_object);
		}
		var_112_bool = var_14_bool == (int)29417;
		if(var_112_bool != 0) {
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_1152();
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_object;
			func_1196(var_116_object);
			var_117_object = Obj(); var_118_object = Obj();
			var_117_object = var_1_object;
			var_118_object = var_0_object;
			func_1180(var_118_object);
		}
		var_120_bool = var_13_cvector == (int)28264;
		if(var_120_bool != 0) {
			var_121_bool = 0; var_122_object = Obj();
			var_122_object = var_1_object;
			func_1201(var_122_object);
			if(var_121_bool != 0) {
				var_129_string = "";
				func_157(var_14_bool, "Neutral");
				@@@var_0_object:SetMessage((int)526972);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)528069, (int)29412, (int)29411);
				return 0;
			}
			var_150_string = "";
			func_157(var_14_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526976);
			@@@var_0_object:ClearReplies();
			var_152_bool = 0; var_153_object = Obj();
			var_153_object = var_1_object;
			func_1213(var_153_object);
			if(var_152_bool != 0) {
				@@@var_0_object:AddReply((int)526981, (int)28274, (int)28273);
			}
			@@@var_0_object:AddReply((int)526977, (int)-1, (int)28269);
			return 0;
		}
		var_165_bool = var_13_cvector == (int)28274;
		if(var_165_bool != 0) {
			var_166_string = "";
			func_157(var_14_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526982);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528073, (int)29416, (int)29415);
			@@@var_0_object:AddReply((int)528075, (int)-1, (int)29417);
			return 0;
		}
		var_175_bool = var_13_cvector == (int)29416;
		if(var_175_bool != 0) {
			var_176_string = "";
			func_157(var_14_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528074);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526983, (int)-1, (int)28275);
			return 0;
		}
		var_182_bool = var_13_cvector == (int)29412;
		if(var_182_bool != 0) {
			var_183_string = "";
			func_157(var_14_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528070);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528071, (int)29414, (int)29413);
			return 0;
		}
		var_189_bool = var_13_cvector == (int)29414;
		if(var_189_bool != 0) {
			var_190_string = "";
			func_157(var_14_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528072);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526973, (int)28266, (int)28265);
			return 0;
		}
		var_196_bool = var_13_cvector == (int)28266;
		if(var_196_bool != 0) {
			var_197_string = "";
			func_157(var_14_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526974);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526975, (int)-1, (int)28267);
			return 0;
		}
		var_3_string = true;
		var_202_bool = 0;
		func_1141(var_202_bool);
		if(var_202_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb4";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_cvector, var_13_bool)
{
	var_14_int = 0; var_15_object = Obj(); var_16_int = 0; var_17_object = Obj();
	func_489(var_16_int, var_17_object);
	var_21_int = 0; var_22_object = Obj();
	var_13_bool = var_22_object;
	TaskCall(0);
	func_0(var_23_object, var_21_int, var_22_object);
	TaskReturn();
	var_23_object = var_16_int;
	var_171_bool = var_16_int == (int)0;
	if(var_171_bool != 0) {
		GetScene(var_17_object);
		var_172_object = Obj();
		func_1063(var_172_object);
		@@var_17_object:RemoveStationaryActor(var_172_object);
		var_175_object = Obj();
		var_13_bool = var_175_object;
		TaskCall(3);
		func_619(var_176_object, var_177_cvector, var_178_bool, var_175_object);
		TaskReturn();
		var_17_object = 0;
	}
	return 4;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_object, var_12_cvector, var_13_bool)
{
	var_15_bool = var_13_bool == (int)10;
	if(var_15_bool != 0) {
		var_16_bool = 0;
		func_451(var_11_object, var_12_cvector, var_13_bool, var_16_bool);
		if(var_16_bool != 0) {
			var_29_bool = var_2_object == 0; //@nz
			if(var_29_bool != 0) {
				var_30_object = Obj();
				var_30_object = var_4_bool;
				func_1045(var_30_object);
				var_2_object = true;
			}
		} else {
			var_37_object = var_2_object;
			if(var_37_object == 0) goto Label_488;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_488:
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
		func_589(var_21_float, var_27_cvector, (float)1.7453293800354004);
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
				func_760((bool)1, var_65_bool);
				if(var_65_bool != 1) {
					var_60_bool = 0;
				}
			}
			if(var_60_bool != 0) {
				var_57_bool = 1;
			}
		}
		if(var_57_bool == 0) goto Label_743;
		Stop();
		var_85_cvector = CVector(0,0,0);
		func_776(var_85_cvector);
		var_1_object = var_85_cvector + var_20_cvector;
	}
Label_743:
	return 8;
	
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	func_744(var_13_object);
	var_13_object = Obj();
	func_1377();
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object, var_14_int, var_15_float, var_16_float)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0;
	var_13_object = var_17_object;
	var_14_int = var_18_int;
	var_15_float = var_19_float;
	func_840(var_17_object, var_18_int, var_19_float);
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
	func_908(var_21_float, var_22_cvector, var_23_cvector);
	return 0;
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, var_13_object)
{
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool)
{
	
Label_385:
	Sleep((int)3);
	var_14_float = 0; var_15_float = 0;
	func_424(var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, (float)300, (float)100);
	goto Label_385;
}
EMIT "Return(); Pop(0)";


func_1152()
{
	var_50_object = Obj(); var_51_object = Obj();
	SetVariable("k10q01", (int)6);
	func_1292(Obj());
	var_54_object = var_51_object;
	var_65_float = 0;
	func_1104(var_65_float);
	@@var_51_object:AddMark("k10q01WastedGotoBurah", "pt_gmap_factory", (int)1, (int)530196, var_65_float);
	func_1238();
	var_76_bool = 0; var_77_string = ""; var_78_string = "";
	func_1092(var_76_bool, "quest_k10_01", "init_factory");
	return 2;
}
EMIT "Stack[-1] = 0";


func_0(var_0_object, var_21_int, var_22_object)
{
	var_24_object = Obj(); var_25_bool = 0; var_26_int = 0; var_27_bool = 0; var_28_object = Obj(); var_29_bool = 0; var_30_int = 0; var_31_bool = 0;
	var_0_object = var_22_object;
	var_32_bool = 0; var_33_object = Obj(); var_34_float = 0;
	var_22_object = var_33_object;
	func_927(var_32_bool, var_33_object, (float)70.0);
	var_79_bool = var_32_bool == 0; //@nz
	if(var_79_bool != 0) {
		var_21_int = -2;
		return 8;
	}
	CreateDialog(var_28_object);
	var_80_int = 0;
	func_1135(var_80_int);
	@@var_28_object:SetNPCName(var_80_int);
	var_81_int = 0;
	func_1133(var_81_int);
	@@var_28_object:SetNPCDescription(var_81_int);
	var_82_string = "";
	func_1137(var_82_string);
	@@var_28_object:SetPhoto(var_82_string);
	var_83_string = "";
	func_1139(var_83_string);
	@@var_28_object:SetPhoto2(var_83_string);
	var_84_int = 0;
	func_1342(var_84_int);
	@@var_28_object:SetPlayerName(var_84_int);
	IsOverrideActive(var_29_bool);
	var_92_bool = var_29_bool;
	if(var_92_bool != 0) {
		var_21_int = -2;
		return 8;
	}
	DoDialog(var_28_object);
	var_93_object = Obj(); var_94_object = Obj();
	var_22_object = var_93_object;
	var_28_object = var_94_object;
	TaskCall(1);
	func_74(var_95_object, var_96_object, var_97_string, var_98_bool, var_93_object, var_94_object);
	TaskReturn();
	@@var_28_object:IsDialogEnd(var_31_bool);
	
Label_56:
	var_161_bool = var_31_bool == 0; //@nz
	if(var_161_bool != 0) {
		sync();
		@@var_28_object:IsDialogEnd(var_31_bool);
		goto Label_56;
	}
	var_22_object = Obj();
	func_996();
	StopDialog(var_28_object);
	@@var_28_object:GetReturnValue((int)-1);
	var_30_int = var_21_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1030(var_112_string, var_113_bool)
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


func_776(var_85_cvector)
{
	var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0);
	GetPosition(var_87_cvector);
	var_87_cvector = var_85_cvector;
	return 2;
}


func_908(var_19_object, var_22_cvector, var_23_cvector)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj();
	GetScene(var_26_object);
	AddActorByType(var_27_object, "scripted", var_26_object, var_22_cvector, var_23_cvector, "blood_dir.xml");
	var_30_object = Obj();
	var_19_object = var_30_object;
	func_796(var_30_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_781(var_47_cvector, var_48_object)
{
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
	GetPosition(var_51_cvector);
	@@var_48_object:GetPosition(var_52_cvector);
	var_47_cvector = var_52_cvector - var_51_cvector;
	return 4;
}


func_1292(var_54_object)
{
	var_55_object = Obj(); var_56_object = Obj(); var_57_object = Obj(); var_58_object = Obj();
	GetMainOutdoorScene(var_57_object);
	var_59_bool = var_57_object == 0; //@ne
	if(var_59_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_58_object = 0;
		var_58_object = var_54_object;
		return 4;
	}
	@@var_57_object:GetMap(var_58_object);
	var_58_object = var_54_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_788(var_20_float, var_21_object)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0);
	GetPosition(var_25_cvector);
	@@var_21_object:GetPosition(var_26_cvector);
	var_27_cvector = var_26_cvector - var_25_cvector;
	var_20_float = var_27_cvector | var_27_cvector;
	return 6;
}


func_1045(var_30_object)
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


func_922(var_16_bool)
{
	var_17_bool = 0; var_18_bool = 0;
	IsLoaded(var_18_bool);
	var_18_bool = var_16_bool;
	return 2;
}


func_796(var_30_object)
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


func_1309(var_87_object, var_88_string, var_89_float)
{
	var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_object = Obj(); var_94_bool = 0; var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_object = Obj(); var_98_bool = 0;
	GetMainOutdoorScene(var_97_object);
	var_99_bool = var_97_object == 0; //@ne
	if(var_99_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_97_object:GetLocator(var_88_string, var_98_bool, var_95_cvector, var_96_cvector);
	var_101_bool = var_98_bool == 0; //@nz
	if(var_101_bool != 0) {
		var_103_int = "Warning: outdoor scene locator " + var_88_string;
		var_105_int = var_103_int + " doesnt exist";
		Trace(var_105_int);
	}
	@@var_97_object:GetMap(var_87_object);
	var_106_bool = var_87_object == 0; //@ne
	if(var_106_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_108_float = GetByIndex(var_95_cvector, 0);
	var_109_float = GetByIndex(var_95_cvector, 2);
	@@var_87_object:SetMapParams(var_108_float, var_109_float, var_89_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_1180(var_86_object)
{
	var_87_object = Obj(); var_88_string = ""; var_89_float = 0;
	func_1292(Obj());
	var_90_object = var_87_object;
	func_1309(var_87_object, "pt_gmap_factory", (float)2);
	var_110_object = Obj();
	func_1292(var_110_object);
	@@var_86_object:ShowMap(var_110_object);
	return 0;
}


func_157(var_2_object, var_108_string)
{
	var_109_bool = 0;
	func_1141(var_109_bool);
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
	func_1030(var_112_string, var_113_bool);
	var_2_object = var_108_string;
	return 0;
	
}


func_1056()
{
	var_16_bool = 0;
	func_1141(var_16_bool);
	if(var_16_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_927(var_32_bool, var_33_object, var_34_float)
{
	var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_bool = 0; var_43_bool = 0; var_44_float = 0; var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_bool = 0; var_52_bool = 0;
	@@var_33_object:GetPosition(var_45_cvector);
	@@var_33_object:GetEyesHeight(var_44_float);
	var_53_float = GetByIndex(var_45_cvector, 1);
	var_53_float = var_53_float + var_44_float;
	SetByIndex(var_45_cvector, 1) = var_53_float;
	GetPosition(var_46_cvector);
	GetEyesHeight(var_44_float);
	var_54_float = GetByIndex(var_46_cvector, 1);
	var_54_float = var_54_float + var_44_float;
	SetByIndex(var_46_cvector, 1) = var_54_float;
	var_47_cvector = var_45_cvector - var_46_cvector;
	var_55_float = GetByIndex(var_47_cvector, 1);
	SetByIndex(var_47_cvector, 1) = (float)0;
	var_56_int = var_47_cvector | var_47_cvector;
	var_57_float = sqrt(var_56_int);
	var_47_cvector = var_47_cvector / var_57_float;
	var_48_cvector = -var_47_cvector;
	var_58_float = var_47_cvector * var_34_float;
	var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0);
	var_60_cvector = var_48_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1069(var_59_cvector, var_60_cvector);
	var_68_float = var_59_cvector * (int)25;
	var_69_int = var_58_float + var_68_float;
	var_49_cvector = var_69_int - CVector(0.0, 10.0, 0.0);
	var_50_cvector = var_46_cvector + var_49_cvector;
	IsOverrideActive(var_51_bool);
	var_71_bool = var_51_bool;
	if(var_71_bool != 0) {
		var_32_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_50_cvector, var_48_cvector, (bool)1);
	var_73_float = GetByIndex(var_49_cvector, 0);
	var_74_float = GetByIndex(var_49_cvector, 2);
	Rotate(var_73_float, var_74_float);
	var_75_bool = 0;
	func_1141(var_75_bool);
	if(var_75_bool != 0) {
	} else {
		HasAnimationTrack(var_52_bool, "head");
		var_77_bool = var_52_bool;
		if(var_77_bool == 0) goto Label_990;
		LookAsyncCamera("head");
	}
Label_990:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_32_bool = 1;
	return 18;
	
}


func_1063(var_172_object)
{
	var_173_object = Obj(); var_174_object = Obj();
	self(var_174_object);
	var_174_object = var_172_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_424(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_14_float, var_15_float)
{
	var_16_bool = 0;
	func_922(var_16_bool);
	var_19_bool = var_16_bool == 0; //@nz
	if(var_19_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_14_float;
	var_1_object = var_15_float;
	SetTimer((int)10, (float)1.0);
	func_503();
	var_74_bool = var_3_string == 0; //@nz
	if(var_74_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_1196(var_83_object)
{
	@@var_83_object:SetReturnValue((int)0);
	return 0;
}


func_1069(var_45_cvector, var_46_cvector)
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


func_1201(var_100_bool)
{
	var_102_int = 0; var_103_string = "";
	func_1087(var_102_int, "k10q01");
	var_107_bool = var_102_int == (int)3;
	if(var_107_bool != 0) {
		var_100_bool = 1;
		return 0;
	}
	var_100_bool = 0;
	return 0;
}


func_1079(var_76_float, var_77_cvector, var_78_cvector)
{
	var_79_int = var_77_cvector | var_78_cvector;
	var_80_int = var_77_cvector | var_77_cvector;
	var_81_int = var_78_cvector | var_78_cvector;
	var_82_float = var_80_int * var_81_int;
	var_83_float = sqrt(var_82_float);
	var_76_float = var_79_int / var_83_float;
	return 0;
}


func_1213(var_149_bool)
{
	var_151_int = 0; var_152_string = "";
	func_1087(var_151_int, "k10q01");
	var_154_bool = var_151_int == (int)5;
	if(var_154_bool != 0) {
		var_149_bool = 1;
		return 0;
	}
	var_149_bool = 0;
	return 0;
}


func_1342(var_84_int)
{
	var_85_int = 0; var_86_int = 0;
	GetVariable("branch", var_86_int);
	var_89_bool = var_86_int == (int)0;
	if(var_89_bool != 0) {
		var_84_int = 1;
		return 2;
	EMIT "GOTO 0x54d";
	}
	var_91_bool = var_86_int == (int)1;
	if(var_91_bool != 0) {
		var_84_int = 2;
		return 2;
	}
	var_84_int = 3;
	return 2;
}


func_1087(var_102_int, var_103_string)
{
	var_104_int = 0; var_105_int = 0;
	GetVariable(var_103_string, var_105_int);
	var_105_int = var_102_int;
	return 2;
}


func_451(var_0_object, var_1_object, var_4_bool, var_16_bool)
{
	var_17_float = 0; var_18_float = 0;
	var_19_bool = var_4_bool == 0; //@ne
	if(var_19_bool != 0) {
		var_16_bool = 0;
		return 2;
	}
	var_20_float = 0; var_21_object = Obj();
	var_21_object = var_4_bool;
	func_788(var_20_float, var_21_object);
	var_18_float = sqrt(var_20_float);
	var_28_object = var_2_object;
	if(var_28_object != 0) {
		var_18_float = var_18_float - var_1_object;
	}
	var_16_bool = var_18_float < var_0_object;
	return 2;
}


func_1092(var_76_bool, var_77_string, var_78_string)
{
	var_79_object = Obj(); var_80_object = Obj();
	FindActor(var_80_object, var_77_string);
	var_81_bool = var_80_object == 0; //@ne
	if(var_81_bool != 0) {
		var_76_bool = 0;
		return 2;
	}
	Trigger(var_80_object, var_78_string);
	var_76_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_582(var_64_bool)
{
	var_64_bool = 1;
	return 0;
}


func_584()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1225()
{
	var_23_object = Obj(); var_24_object = Obj();
	CreateDiaryEntry(var_24_object, (int)451, (int)1, (int)527009);
	var_28_bool = 0; var_29_object = Obj(); var_30_int = 0;
	var_24_object = var_29_object;
	func_1264(var_28_bool, var_29_object, (int)447);
	return 2;
}
EMIT "Stack[-1] = 0";


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_93_object, var_94_object)
{
	var_0_object = var_94_object;
	var_1_object = var_93_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_100_bool = 0; var_101_object = Obj();
		var_101_object = var_1_object;
		func_1201(var_101_object);
		if(var_100_bool != 0) {
			var_108_string = "";
			func_157(var_94_object, "Neutral");
			@@@var_0_object:SetMessage((int)526972);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528069, (int)29412, (int)29411);
		} else {
				var_147_string = "";
				func_157(var_94_object, "Neutral");
				@@@var_0_object:SetMessage((int)526976);
				@@@var_0_object:ClearReplies();
				var_149_bool = 0; var_150_object = Obj();
				var_150_object = var_1_object;
				func_1213(var_150_object);
				if(var_149_bool != 0) {
					@@@var_0_object:AddReply((int)526981, (int)28274, (int)28273);
				}
				@@@var_0_object:AddReply((int)526977, (int)-1, (int)28269);
				goto Label_127;
		}
	}
Label_127:
	var_129_bool = 0;
	func_1141(var_129_bool);
	if(var_129_bool != 0) {

	Label_131:
		lshWaitForAnimEnd();
		var_130_string = var_3_string;
		if(var_130_string != 0) {
		} else {
			var_131_string = "";
			var_131_string = var_2_object;
			func_1014(var_131_string);
			goto Label_131;
	}
		PlayAnimation("all", "idle");

	Label_146:
		WaitForAnimEnd();
		var_144_string = var_3_string;
		if(var_144_string != 0) {
			goto Label_156;
		}
		PlayAnimation("all", "idle");
		goto Label_146;

	}
	goto Label_156;
	
Label_156:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_840(var_17_object, var_18_int, var_19_float)
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
		func_781(var_47_cvector, var_48_object);
		var_47_cvector = var_46_cvector;
		func_1069(var_45_cvector, var_46_cvector);
		var_45_cvector = var_29_cvector;
		CreateVectorVector(var_30_object);
		var_31_int = 1;

	Label_869:
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
			goto Label_869;
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
			func_908(var_64_float, var_65_cvector, var_66_cvector);
			return 18;
		}
		var_30_object = 0;
	}
	var_107_object = Obj();
	var_17_object = var_107_object;
	func_796(var_107_object);
	return 18;
	
}


func_589(var_0_object, var_27_cvector, var_28_float)
{
	var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_float = 0;
	GetPosition(var_35_cvector);
	@@@var_0_object:GetPosition(var_36_cvector);
	GetDirection(var_37_cvector);
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0);
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0);
	var_44_cvector = var_35_cvector - var_36_cvector;
	func_1069(var_43_cvector, var_44_cvector);
	var_51_float = var_37_cvector * (float)0.75;
	var_42_cvector = var_43_cvector + var_51_float;
	func_1069(var_41_cvector, var_42_cvector);
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


func_1104(var_65_float)
{
	var_66_float = 0; var_67_float = 0;
	GetGameTime(var_67_float);
	var_67_float = var_65_float;
	return 2;
}


func_1109(var_45_string, var_46_int)
{
	var_47_string = ""; var_48_string = "";
	var_49_int = var_46_int;
	if(var_49_int != 0) {
		"idle" = "idle" + var_46_int;
	}
	var_48_string = var_45_string;
	return 2;
}


func_1238()
{
	var_68_object = Obj(); var_69_object = Obj();
	CreateDiaryEntry(var_69_object, (int)453, (int)1, (int)527011);
	var_73_bool = 0; var_74_object = Obj(); var_75_int = 0;
	var_69_object = var_74_object;
	func_1264(var_73_bool, var_74_object, (int)447);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1143()
{
	SetVariable("k10q01", (int)4);
	func_1225();
	return 0;
}


func_1116(var_39_int)
{
	var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_bool = 0;
	var_42_int = 0;
	
Label_1118:
	var_45_string = ""; var_46_int = 0;
	var_42_int = var_46_int;
	func_1109(var_45_string, var_46_int);
	HasAnimation(var_43_bool, "all", var_45_string);
	var_50_bool = var_43_bool == 0; //@nz
	if(var_50_bool != 0) {
	} else {
		var_42_int = var_42_int + (int)1;
		goto Label_1118;
	}
	var_42_int = var_39_int;
	return 4;
	
}


func_1251(var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj();
	GetDiaryRoot(var_39_object);
	var_40_bool = var_39_object == 0; //@nz
	if(var_40_bool != 0) {
		Trace("Can't retrieve diary root");
		var_37_object = 0;
		return 2;
	}
	var_39_object = var_37_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_996()
{
	var_163_bool = 0; var_164_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_166_bool = 0;
	func_1141(var_166_bool);
	if(var_166_bool != 0) {
	} else {
		HasAnimationTrack(var_164_bool, "head");
		var_168_bool = var_164_bool;
		if(var_168_bool == 0) goto Label_1013;
		UnlookAsync("head");
	}
Label_1013:
	return 2;
	
}


func_744(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_489(var_2_object, var_3_string)
{
	func_584();
	KillTimer((int)10);
	var_19_object = var_2_object;
	if(var_19_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_619(var_0_object, var_1_object, var_2_object, var_175_object)
{
	var_179_cvector = CVector(0,0,0); var_180_float = 0; var_181_bool = 0; var_182_cvector = CVector(0,0,0); var_183_float = 0; var_184_cvector = CVector(0,0,0); var_185_float = 0; var_186_bool = 0; var_187_cvector = CVector(0,0,0); var_188_float = 0;
	var_0_object = var_175_object;
	var_189_cvector = CVector(0,0,0); var_190_float = 0;
	func_589(var_188_float, var_189_cvector, (float)1.7453293800354004);
	var_189_cvector = var_184_cvector;
	var_185_float = var_184_cvector | var_184_cvector;
	var_215_bool = var_185_float < (float)2500.0;
	if(var_215_bool != 0) {
		var_216_cvector = CVector(0,0,0); var_217_float = 0;
		func_589(var_188_float, var_216_cvector, (float)2.6179938316345215);
		var_216_cvector = var_184_cvector;
		var_185_float = var_184_cvector | var_184_cvector;
		var_219_bool = var_185_float < (float)2500.0;
		if(var_219_bool != 0) {
			var_221_float = sqrt(var_185_float);
			var_222_int = "Can't retreat, distance: " + var_221_float;
			Trace(var_222_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_224_float = GetByIndex(var_184_cvector, 0);
	var_225_float = GetByIndex(var_184_cvector, 2);
	Rotate(var_224_float, var_225_float);
	var_226_cvector = CVector(0,0,0);
	func_776(var_226_cvector);
	var_1_object = var_226_cvector + var_184_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_661:
	MovePoint(var_1_object, (int)1, var_186_bool);
	var_232_bool = var_186_bool;
	if(var_232_bool != 0) {
		var_233_bool = var_0_object == 0; //@ne
		if(var_233_bool != 0) {
			goto Label_691;
		EMIT "GOTO 0x2b1";

		Label_691:
			return 10;
		}
		var_234_cvector = CVector(0,0,0); var_235_float = 0;
		func_589(var_188_float, var_234_cvector, (float)2.6179938316345215);
		var_234_cvector = var_187_cvector;
		var_188_float = var_187_cvector | var_187_cvector;
		var_237_bool = var_188_float >= (float)2500.0;
		if(var_237_bool != 0) {
			var_238_cvector = CVector(0,0,0);
			func_776(var_238_cvector);
			var_1_object = var_238_cvector + var_187_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_691;
		}
	}
	var_241_bool = var_2_object == 0; //@nz
	if(var_241_bool == 1) goto Label_661;
	
}


func_1133(var_81_int)
{
	var_81_int = 515556;
	return 0;
}


func_1135(var_80_int)
{
	var_80_int = 503341;
	return 0;
}


func_1264(var_28_bool, var_29_object, var_30_int)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; var_34_object = Obj(); var_35_object = Obj(); var_36_int = 0;
	func_1251(Obj());
	var_37_object = var_34_object;
	@@var_34_object:Find(var_30_int, var_35_object);
	var_42_bool = var_35_object == 0; //@nz
	if(var_42_bool != 0) {
		var_44_int = "Can't find diary parent with id: " + var_30_int;
		Trace(var_44_int);
		var_28_bool = 0;
		return 6;
	}
	@@var_35_object:AddChild(var_29_object);
	SendWorldWndMessage((int)7);
	@@var_29_object:GetCategory(var_36_int);
	SetDiarySection(var_36_int);
	var_28_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1137(var_82_string)
{
	var_82_string = "ui/NPC_Citizen3.png";
	return 0;
}


func_1139(var_83_string)
{
	var_83_string = "ui/NPC_Citizen3_b.png";
	return 0;
}


func_1141(var_75_bool)
{
	var_75_bool = 0;
	return 0;
}


func_1014(var_131_string)
{
	var_132_bool = 0; var_133_float = 0; var_134_float = 0; var_135_bool = 0; var_136_float = 0; var_137_float = 0;
	lshHasAnimation(var_135_bool, var_131_string);
	var_138_bool = var_135_bool;
	if(var_138_bool != 0) {
		lshGetAnimTimes(var_131_string, var_136_float, var_137_float);
		lshPlayAnimation(var_136_float, var_137_float, (bool)0);
	} else {
		var_141_int = "Can't find lsh animation : " + var_131_string;
		Trace(var_141_int);
	}
	return 6;
	
}


func_503()
{
	var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_bool = 0; var_28_float = 0; var_29_bool = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0;
	WaitForAnimEnd();
	var_37_bool = 0;
	func_922(var_37_bool);
	var_38_bool = var_37_bool == 0; //@nz
	if(var_38_bool != 0) {
		return 14;
	}
	func_1116((int)0);
	var_39_int = var_30_int;
	var_31_int = 0;
	
Label_517:
	var_52_bool = 0;
	var_52_bool = 0;
	var_54_bool = var_31_int < (int)5;
	if(var_54_bool != 0) {
		var_55_bool = 0;
		func_922(var_55_bool);
		if(var_55_bool != 0) {
			var_52_bool = 1;
		}
	}
	if(var_52_bool != 0) {
		irand(var_32_int, (int)3);
		var_58_bool = var_32_int == (int)0;
		if(var_58_bool != 0) {
			var_59_int = var_30_int;
			if(var_59_int == 0) goto Label_550;
			irand(var_33_int, var_30_int);
			var_61_string = ""; var_62_int = 0;
			var_33_int = var_62_int;
			func_1109(var_61_string, var_62_int);
			PlayAnimation("all", var_61_string);
			WaitForAnimEnd(var_34_bool);
			var_63_bool = var_34_bool == 0; //@nz
			if(var_63_bool != 0) {
			} else {
		} else {
				var_68_bool = var_32_int == (int)1;
				if(var_68_bool != 0) {
					rand(var_35_float, (int)4);
					var_71_int = var_35_float + (int)1;
					Sleep(var_71_int, var_36_bool);
					var_72_bool = var_36_bool == 0; //@nz
					if(var_72_bool != 0) {
						goto Label_579;
					}
					goto Label_568;
				}
				var_73_int = var_31_int;
				if(var_73_int == 0) goto Label_568;
				goto Label_579;
		}
		Label_568:
			var_64_bool = 0;
			func_582(var_64_bool);
			var_65_bool = var_64_bool == 0; //@nz
			if(var_65_bool != 0) {
				goto Label_579;
			}
			ResetAAS();
			var_31_int = var_31_int + (int)1;
			goto Label_517;

		}
	}
Label_579:
	ResetAAS();
	return 14;
	
}


func_760(var_0_object, var_65_bool)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0);
	GetDirection(var_68_cvector);
	var_70_cvector = CVector(0,0,0); var_71_object = Obj();
	var_71_object = var_0_object;
	func_781(var_70_cvector, var_71_object);
	var_70_cvector = var_69_cvector;
	var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	var_68_cvector = var_77_cvector;
	var_69_cvector = var_78_cvector;
	func_1079(var_76_float, var_77_cvector, var_78_cvector);
	var_65_bool = var_76_float >= (float)-0.3420201241970062;
	return 4;
}


