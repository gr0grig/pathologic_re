// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,AddItem/4,SetRTEnvelope/2,Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,GetScene/1,AddActorByType/6,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,IsExisting3DSound/2,Is3DSoundLoaded/2,PlayGlobalSound/2,GetVariable/2,Trigger/2,HasAnimation/3,SetVariable/2,WorkWithCorpse/1,Barter/1,GetProperty/2,SignalDeath/1,IsPlayerActor/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|W:head|W:lockpick|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:Can't find lsh animation : |W:ook1Lisa1|W:k1q01|W:branch|W:ui/NPC_Citizen2.png|W:ui/NPC_Citizen2_b.png|W:health|W:quest_k1_01|W:doberman_dead
// @GLOBALS: 0:object:
// @RUN_OP: 0x212
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xbc vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x21c vars=object
// @EVENT_7: op=0x251 vars=int
// @TASK_3: vars= params=1
// @EVENT_0: op=0x2e6 vars=object
// @EVENT_22: op=0x365 vars=object,int,float,float
// @EVENT_16: op=0x367 vars=object,string
// @EVENT_41: op=0x369 vars=object
// @STANDALONE_EVENT_22: op=0x535 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x53d vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x547 vars=object,string
// @STANDALONE_EVENT_41: op=0x554 vars=object
// @PE: 0x4a,0xa6,0xbc,0x21c,0x227,0x251,0x268,0x2d7,0x34b,0x365,0x367,0x369,0x4e1,0x4e7,0x4f3,0x516,0x52d,0x535,0x53d

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	if((int)1 != 0) {
		func_1150();
		var_15_bool = var_10_bool == (int)26016;
		if(var_15_bool != 0) {
			var_16_bool = 0;
			var_16_bool = 0;
			var_17_bool = 0; var_18_object = Obj();
			var_18_object = var_1_object;
			func_1255(var_18_object);
			if(var_17_bool != 0) {
				var_25_bool = 0; var_26_object = Obj();
				var_26_object = var_1_object;
				func_1267(var_26_object);
				if(var_25_bool != 0) {
					var_16_bool = 1;
				}
			}
			if(var_16_bool != 0) {
				var_31_object = Obj(); var_32_object = Obj();
				var_31_object = var_1_object;
				var_32_object = var_0_object;
				func_1249();
				var_35_string = "";
				func_166(var_11_object, "Neutral");
				@@@var_0_object:SetMessage((int)524677);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)541777, (int)43984, (int)43983);
				return 0;
			}
			var_56_string = "";
			func_166(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)524679);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524680, (int)-1, (int)26019);
			@@@var_0_object:AddReply((int)526801, (int)-1, (int)28081);
			return 0;
		}
		var_65_bool = var_10_bool == (int)43984;
		if(var_65_bool != 0) {
			var_66_string = "";
			func_166(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)541778);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524678, (int)28065, (int)26017);
			@@@var_0_object:AddReply((int)541766, (int)43969, (int)43968);
			return 0;
		}
		var_75_bool = var_10_bool == (int)43969;
		if(var_75_bool != 0) {
			var_76_string = "";
			func_166(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)541767);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541768, (int)43971, (int)43970);
			@@@var_0_object:AddReply((int)541773, (int)43975, (int)43976);
			return 0;
		}
		var_85_bool = var_10_bool == (int)43971;
		if(var_85_bool != 0) {
			var_86_string = "";
			func_166(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)541769);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541770, (int)28065, (int)43972);
			@@@var_0_object:AddReply((int)541771, (int)43975, (int)43974);
			return 0;
		}
		var_95_bool = var_10_bool == (int)43975;
		if(var_95_bool != 0) {
			var_96_string = "";
			func_166(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)541772);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541774, (int)28065, (int)43978);
			return 0;
		}
		var_102_bool = var_10_bool == (int)28065;
		if(var_102_bool != 0) {
			var_103_string = "";
			func_166(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)526785);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526786, (int)28067, (int)28066);
			@@@var_0_object:AddReply((int)541755, (int)28069, (int)43957);
			return 0;
		}
		var_112_bool = var_10_bool == (int)28067;
		if(var_112_bool != 0) {
			var_113_string = "";
			func_166(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)526787);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526788, (int)28069, (int)28068);
			@@@var_0_object:AddReply((int)541779, (int)-1, (int)43985);
			return 0;
		}
		var_122_bool = var_10_bool == (int)28069;
		if(var_122_bool != 0) {
			var_123_string = "";
			func_166(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)526789);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526795, (int)28076, (int)28075);
			return 0;
		}
		var_129_bool = var_10_bool == (int)28076;
		if(var_129_bool != 0) {
			var_130_string = "";
			func_166(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)526796);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526797, (int)28078, (int)28077);
			@@@var_0_object:AddReply((int)541775, (int)28071, (int)43979);
			return 0;
		}
		var_139_bool = var_10_bool == (int)28078;
		if(var_139_bool != 0) {
			var_140_string = "";
			func_166(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)526798);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526799, (int)28080, (int)28079);
			@@@var_0_object:AddReply((int)541776, (int)28071, (int)43981);
			return 0;
		}
		var_149_bool = var_10_bool == (int)28080;
		if(var_149_bool != 0) {
			var_150_string = "";
			func_166(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)526800);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526793, (int)28071, (int)28073);
			@@@var_0_object:AddReply((int)526790, (int)28082, (int)28070);
			return 0;
		}
		var_159_bool = var_10_bool == (int)28082;
		if(var_159_bool != 0) {
			var_160_string = "";
			func_166(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)526802);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526803, (int)-1, (int)28083);
			@@@var_0_object:AddReply((int)526804, (int)-1, (int)28084);
			return 0;
		}
		var_169_bool = var_10_bool == (int)28071;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_166(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)526791);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526792, (int)-1, (int)28072);
			@@@var_0_object:AddReply((int)526794, (int)-1, (int)28074);
			return 0;
		}
		var_3_string = true;
		var_178_bool = 0;
		func_1323(var_178_bool);
		if(var_178_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xbd";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_616(var_9_object, var_10_object);
	var_14_int = 0; var_15_object = Obj();
	var_10_object = var_15_object;
	TaskCall(0);
	func_0(var_16_object, var_14_int, var_15_object);
	TaskReturn();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_12_bool = var_10_int == (int)10;
	if(var_12_bool != 0) {
		var_13_bool = 0;
		func_578(var_8_bool, var_9_object, var_10_int, var_13_bool);
		if(var_13_bool != 0) {
			var_26_bool = var_2_object == 0; //@nz
			if(var_26_bool != 0) {
				var_27_object = Obj();
				var_27_object = var_4_bool;
				func_1139(var_27_object);
				var_2_object = true;
			}
		} else {
			var_34_object = var_2_object;
			if(var_34_object == 0) goto Label_615;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_615:
	return 0;
	
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0;
	IsOverrideActive(var_12_bool);
	var_13_bool = var_12_bool == 0; //@nz
	if(var_13_bool != 0) {
		var_14_object = Obj();
		var_10_object = var_14_object;
		func_1302(var_14_object);
	}
	return 2;
}


task_3_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_float, var_13_float)
{
	return 0;
}


task_3_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_string)
{
	return 0;
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0;
	var_10_object = var_14_object;
	var_11_int = var_15_int;
	var_12_float = var_16_float;
	func_934(var_14_object, var_15_int, var_16_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_float, var_13_float, var_14_cvector, var_15_cvector)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0);
	var_10_object = var_16_object;
	var_11_int = var_17_int;
	var_12_float = var_18_float;
	var_14_cvector = var_19_cvector;
	var_15_cvector = var_20_cvector;
	func_1002(var_18_float, var_19_cvector, var_20_cvector);
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_string)
{
	var_12_float = 0; var_13_float = 0;
	var_15_bool = var_11_string == "health";
	if(var_15_bool != 0) {
		GetProperty("health", var_13_float);
		var_18_bool = var_13_float <= (int)0;
		if(var_18_bool != 0) {
			SignalDeath(var_10_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0;
	IsPlayerActor(var_10_object, var_12_bool);
	var_13_bool = var_12_bool;
	if(var_13_bool != 0) {
		var_14_bool = 0; var_15_string = ""; var_16_string = "";
		func_1213(var_14_bool, "quest_k1_01", "doberman_dead");
	}
	var_20_object = Obj();
	var_10_object = var_20_object;
	func_1325(var_20_object);
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_530:
	Sleep((int)3);
	var_11_float = 0; var_12_float = 0;
	func_551(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
	goto Label_530;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0;
	var_0_object = var_15_object;
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0;
	var_15_object = var_26_object;
	func_1021(var_25_bool, var_26_object, (float)70.0);
	var_72_bool = var_25_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	CreateDialog(var_21_object);
	var_73_int = 0;
	func_1317(var_73_int);
	@@var_21_object:SetNPCName(var_73_int);
	var_74_int = 0;
	func_1315(var_74_int);
	@@var_21_object:SetNPCDescription(var_74_int);
	var_75_string = "";
	func_1319(var_75_string);
	@@var_21_object:SetPhoto(var_75_string);
	var_76_string = "";
	func_1321(var_76_string);
	@@var_21_object:SetPhoto2(var_76_string);
	var_77_int = 0;
	func_1279(var_77_int);
	@@var_21_object:SetPlayerName(var_77_int);
	IsOverrideActive(var_22_bool);
	var_85_bool = var_22_bool;
	if(var_85_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	DoDialog(var_21_object);
	var_86_object = Obj(); var_87_object = Obj();
	var_15_object = var_86_object;
	var_21_object = var_87_object;
	TaskCall(1);
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object);
	TaskReturn();
	@@var_21_object:IsDialogEnd(var_24_bool);
	
Label_56:
	var_159_bool = var_24_bool == 0; //@nz
	if(var_159_bool != 0) {
		sync();
		@@var_21_object:IsDialogEnd(var_24_bool);
		goto Label_56;
	}
	var_15_object = Obj();
	func_1090();
	StopDialog(var_21_object);
	@@var_21_object:GetReturnValue((int)-1);
	var_23_int = var_14_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1157(var_51_string)
{
	var_52_bool = 0; var_53_int = 0; var_54_bool = 0; var_55_int = 0; var_56_bool = 0; var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_bool = 0; var_61_int = 0; var_62_bool = 0; var_63_int = 0; var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0);
	IsExisting3DSound(var_60_bool, var_51_string);
	var_68_bool = var_60_bool == 0; //@nz
	if(var_68_bool != 0) {
		var_61_int = 0;

	Label_1163:
		var_70_int = var_61_int + (int)1;
		var_71_int = var_51_string + var_70_int;
		IsExisting3DSound(var_62_bool, var_71_int);
		var_72_bool = var_62_bool == 0; //@nz
		if(var_72_bool != 0) {
		} else {
			var_61_int = var_61_int + (int)1;
			goto Label_1163;
		}
		var_73_bool = var_61_int == 0; //@nz
		if(var_73_bool != 0) {
			return 16;
		}
		irand(var_63_int, var_61_int);
		var_75_int = var_63_int + (int)1;
		var_51_string = var_51_string + var_75_int;
	}
	Is3DSoundLoaded(var_64_bool, var_51_string);
	var_76_bool = var_64_bool;
	if(var_76_bool != 0) {
		GetEyesHeight(var_65_float);
		GetDirection(var_66_cvector);
		var_67_cvector = var_66_cvector * (int)50;
		var_78_float = GetByIndex(var_67_cvector, 1);
		var_78_float = var_78_float + var_65_float;
		SetByIndex(var_67_cvector, 1) = var_78_float;
		PlayGlobalSound(var_51_string, var_67_cvector);
	}
	return 16;
	
}


func_1296(var_15_int)
{
	var_16_int = 0; var_17_int = 0;
	GetVariable("branch", var_17_int);
	var_17_int = var_15_int;
	return 2;
}


func_1302(var_14_object)
{
	var_15_int = 0;
	func_1296(var_15_int);
	var_20_bool = var_15_int == (int)1;
	if(var_20_bool != 0) {
		WorkWithCorpse(var_14_object);
	} else {
		Barter(var_14_object);
	}
	return 0;
	
}


func_1315(var_74_int)
{
	var_74_int = 518097;
	return 0;
}


func_1317(var_73_int)
{
	var_73_int = 518096;
	return 0;
}


func_166(var_2_object, var_112_string)
{
	var_113_bool = 0;
	func_1323(var_113_bool);
	var_114_bool = var_113_bool == 0; //@nz
	if(var_114_bool != 0) {
		return 0;
	}
	var_115_bool = var_112_string == var_2_object;
	if(var_115_bool != 0) {
		return 0;
	}
	var_116_string = ""; var_117_bool = 0;
	var_112_string = var_116_string;
	var_119_bool = var_112_string == "";
	if(var_119_bool != 0) {
		var_117_bool = 0;
	} else {
		var_117_bool = 1;
	}
	func_1124(var_116_string, var_117_bool);
	var_2_object = var_112_string;
	return 0;
	
}


func_1319(var_75_string)
{
	var_75_string = "ui/NPC_Citizen2.png";
	return 0;
}


func_551(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_11_float, var_12_float)
{
	var_13_bool = 0;
	func_1016(var_13_bool);
	var_16_bool = var_13_bool == 0; //@nz
	if(var_16_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_11_float;
	var_1_object = var_12_float;
	SetTimer((int)10, (float)1.0);
	func_630();
	var_71_bool = var_3_string == 0; //@nz
	if(var_71_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_1321(var_76_string)
{
	var_76_string = "ui/NPC_Citizen2_b.png";
	return 0;
}


func_934(var_14_object, var_15_int, var_16_float)
{
	var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_int = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0);
	var_35_bool = 0;
	var_35_bool = 0;
	var_36_bool = 0;
	var_36_bool = 0;
	var_37_object = var_14_object;
	if(var_37_object != 0) {
		var_39_bool = var_15_int != (int)4;
		if(var_39_bool != 0) {
			var_36_bool = 1;
		}
	}
	if(var_36_bool != 0) {
		var_41_bool = var_15_int != (int)5;
		if(var_41_bool != 0) {
			var_35_bool = 1;
		}
	}
	if(var_35_bool != 0) {
		var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
		var_44_cvector = CVector(0,0,0); var_45_object = Obj();
		var_14_object = var_45_object;
		func_875(var_44_cvector, var_45_object);
		var_44_cvector = var_43_cvector;
		func_1198(var_42_cvector, var_43_cvector);
		var_42_cvector = var_26_cvector;
		CreateVectorVector(var_27_object);
		var_28_int = 1;

	Label_963:
		var_56_int = "hit" + var_28_int;
		GetGeometryLocator(var_56_int, var_29_bool, var_30_cvector, var_31_cvector);
		var_57_bool = var_29_bool == 0; //@nz
		if(var_57_bool != 0) {
		} else {
			var_105_int = var_31_cvector | var_26_cvector;
			var_107_bool = var_105_int >= (float)0.7071067690849304;
			if(var_107_bool != 0) {
				@@var_27_object:add(var_30_cvector);
			}
			var_28_int = var_28_int + (int)1;
			goto Label_963;
		}
		@@var_27_object:size(var_32_int);
		var_58_int = var_32_int;
		if(var_58_int != 0) {
			irand(var_33_int, var_32_int);
			@@var_27_object:get(var_34_cvector, var_33_int);
			var_59_object = Obj(); var_60_int = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
			var_14_object = var_59_object;
			var_15_int = var_60_int;
			var_16_float = var_61_float;
			var_34_cvector = var_62_cvector;
			var_63_cvector = -var_26_cvector;
			func_1002(var_61_float, var_62_cvector, var_63_cvector);
			return 18;
		}
		var_27_object = 0;
	}
	var_104_object = Obj();
	var_14_object = var_104_object;
	func_890(var_104_object);
	return 18;
	
}


func_1323(var_68_bool)
{
	var_68_bool = 0;
	return 0;
}


func_1325(var_20_object)
{
	var_21_object = Obj();
	var_20_object = var_21_object;
	TaskCall(3);
	func_716(var_21_object);
	TaskReturn();
	return 0;
}


func_1198(var_42_cvector, var_43_cvector)
{
	var_50_float = 0; var_51_float = 0;
	var_52_int = var_43_cvector | var_43_cvector;
	var_51_float = sqrt(var_52_int);
	var_53_float = 9.999999974752427e-07;
	var_54_bool = var_51_float < var_53_float;
	if(var_54_bool != 0) {
		var_42_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_42_cvector = var_43_cvector / var_51_float;
	return 2;
}


func_1208(var_96_int, var_97_string)
{
	var_98_int = 0; var_99_int = 0;
	GetVariable(var_97_string, var_99_int);
	var_99_int = var_96_int;
	return 2;
}


func_1213(var_14_bool, var_15_string, var_16_string)
{
	var_17_object = Obj(); var_18_object = Obj();
	FindActor(var_18_object, var_15_string);
	var_19_bool = var_18_object == 0; //@ne
	if(var_19_bool != 0) {
		var_14_bool = 0;
		return 2;
	}
	Trigger(var_18_object, var_16_string);
	var_14_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1090()
{
	var_161_bool = 0; var_162_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_164_bool = 0;
	func_1323(var_164_bool);
	if(var_164_bool != 0) {
	} else {
		HasAnimationTrack(var_162_bool, "head");
		var_166_bool = var_162_bool;
		if(var_166_bool == 0) goto Label_1107;
		UnlookAsync("head");
	}
Label_1107:
	return 2;
	
}


func_578(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0;
	var_16_bool = var_4_bool == 0; //@ne
	if(var_16_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_17_float = 0; var_18_object = Obj();
	var_18_object = var_4_bool;
	func_882(var_17_float, var_18_object);
	var_15_float = sqrt(var_17_float);
	var_25_object = var_2_object;
	if(var_25_object != 0) {
		var_15_float = var_15_float - var_1_object;
	}
	var_13_bool = var_15_float < var_0_object;
	return 2;
}


func_709(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_711()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1225(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = "";
	var_46_int = var_43_int;
	if(var_46_int != 0) {
		"idle" = "idle" + var_43_int;
	}
	var_45_string = var_42_string;
	return 2;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_93_bool = 0;
		var_93_bool = 0;
		var_94_bool = 0; var_95_object = Obj();
		var_95_object = var_1_object;
		func_1255(var_95_object);
		if(var_94_bool != 0) {
			var_102_bool = 0; var_103_object = Obj();
			var_103_object = var_1_object;
			func_1267(var_103_object);
			if(var_102_bool != 0) {
				var_93_bool = 1;
			}
		}
		if(var_93_bool != 0) {
			var_108_object = Obj(); var_109_object = Obj();
			var_108_object = var_1_object;
			var_109_object = var_0_object;
			func_1249();
			var_112_string = "";
			func_166(var_87_object, "Neutral");
			@@@var_0_object:SetMessage((int)524677);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541777, (int)43984, (int)43983);
		} else {
				var_151_string = "";
				func_166(var_87_object, "Neutral");
				@@@var_0_object:SetMessage((int)524679);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)524680, (int)-1, (int)26019);
				@@@var_0_object:AddReply((int)526801, (int)-1, (int)28081);
				goto Label_136;
		}
	}
Label_136:
	var_133_bool = 0;
	func_1323(var_133_bool);
	if(var_133_bool != 0) {

	Label_140:
		lshWaitForAnimEnd();
		var_134_string = var_3_string;
		if(var_134_string != 0) {
		} else {
			var_135_string = "";
			var_135_string = var_2_object;
			func_1108(var_135_string);
			goto Label_140;
	}
		PlayAnimation("all", "idle");

	Label_155:
		WaitForAnimEnd();
		var_148_string = var_3_string;
		if(var_148_string != 0) {
			goto Label_165;
		}
		PlayAnimation("all", "idle");
		goto Label_155;

	}
	goto Label_165;
	
Label_165:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_843(var_50_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_51_string = "";
	var_50_string = var_51_string;
	func_1157(var_51_string);
	PlayAnimation("all", var_50_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_50_string);
	RemoveEnvelope();
	return 0;
}


func_716(var_21_object)
{
	var_22_bool = 0; var_23_bool = 0;
	AddItem(var_23_bool, "lockpick", (int)0, (int)1);
	var_27_object = Obj();
	var_21_object = var_27_object;
	func_727(var_27_object);
	return 2;
}


func_1232(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0;
	var_39_int = 0;
	
Label_1234:
	var_42_string = ""; var_43_int = 0;
	var_39_int = var_43_int;
	func_1225(var_42_string, var_43_int);
	HasAnimation(var_40_bool, "all", var_42_string);
	var_47_bool = var_40_bool == 0; //@nz
	if(var_47_bool != 0) {
	} else {
		var_39_int = var_39_int + (int)1;
		goto Label_1234;
	}
	var_39_int = var_36_int;
	return 4;
	
}


func_1108(var_135_string)
{
	var_136_bool = 0; var_137_float = 0; var_138_float = 0; var_139_bool = 0; var_140_float = 0; var_141_float = 0;
	lshHasAnimation(var_139_bool, var_135_string);
	var_142_bool = var_139_bool;
	if(var_142_bool != 0) {
		lshGetAnimTimes(var_135_string, var_140_float, var_141_float);
		lshPlayAnimation(var_140_float, var_141_float, (bool)0);
	} else {
		var_145_int = "Can't find lsh animation : " + var_135_string;
		Trace(var_145_int);
	}
	return 6;
	
}


func_727(var_27_object)
{
	EventDisable(0);
	var_28_object = Obj();
	var_27_object = var_28_object;
	func_752(var_28_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_738:
	Hold();
	goto Label_738;
}
EMIT "Return(); Pop(0)";


func_1249()
{
	SetVariable("ook1Lisa1", (int)1);
	return 0;
}


func_1124(var_116_string, var_117_bool)
{
	var_120_bool = 0; var_121_float = 0; var_122_float = 0; var_123_bool = 0; var_124_float = 0; var_125_float = 0;
	lshHasAnimation(var_123_bool, var_116_string);
	var_126_bool = var_123_bool;
	if(var_126_bool != 0) {
		lshGetAnimTimes(var_116_string, var_124_float, var_125_float);
		lshPlayAnimation(var_124_float, var_125_float, var_117_bool);
	} else {
		var_128_int = "Can't find lsh animation : " + var_116_string;
		Trace(var_128_int);
	}
	return 6;
	
}


func_1255(var_94_bool)
{
	var_96_int = 0; var_97_string = "";
	func_1208(var_96_int, "k1q01");
	var_101_bool = var_96_int == (int)4;
	if(var_101_bool != 0) {
		var_94_bool = 1;
		return 0;
	}
	var_94_bool = 0;
	return 0;
}


func_616(var_2_object, var_3_string)
{
	func_711();
	KillTimer((int)10);
	var_12_object = var_2_object;
	if(var_12_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_1002(var_16_object, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj();
	GetScene(var_23_object);
	AddActorByType(var_24_object, "scripted", var_23_object, var_19_cvector, var_20_cvector, "blood_dir.xml");
	var_27_object = Obj();
	var_16_object = var_27_object;
	func_890(var_27_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_875(var_44_cvector, var_45_object)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
	GetPosition(var_48_cvector);
	@@var_45_object:GetPosition(var_49_cvector);
	var_44_cvector = var_49_cvector - var_48_cvector;
	return 4;
}


func_752(var_28_object)
{
	var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_object = Obj(); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_string = ""; var_44_object = Obj(); var_45_bool = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0);
	var_49_bool = var_28_object == 0; //@ne
	if(var_49_bool != 0) {
		var_50_string = "";
		func_843("fdie");
	} else {
		@@var_28_object:GetPosition(var_39_cvector);
		GetPosition(var_40_cvector);
		GetDirection(var_41_cvector);
		var_42_cvector = var_40_cvector - var_39_cvector;
		var_82_float = GetByIndex(var_42_cvector, 0);
		var_83_float = GetByIndex(var_41_cvector, 0);
		var_84_float = var_82_float * var_83_float;
		var_85_float = GetByIndex(var_42_cvector, 2);
		var_86_float = GetByIndex(var_41_cvector, 2);
		var_87_float = var_85_float * var_86_float;
		var_88_int = var_84_float + var_87_float;
		var_90_bool = var_88_int >= (int)0;
		if(var_90_bool != 0) {
			var_43_string = "fdie";
		} else {
				var_43_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_28_object = var_44_object;
		var_93_bool = IsFuncExist(var_28_object, "GetScriptProperty", (int)2);
		if(var_93_bool != 0) {
			@@var_28_object:HasScriptProperty(var_45_bool, "Owner");
			var_95_bool = var_45_bool;
			if(var_95_bool != 0) {
				@@var_28_object:GetScriptProperty(var_44_object, "Owner");
				var_97_bool = var_44_object == 0; //@ne
				if(var_97_bool != 0) {
					var_28_object = var_44_object;
				}
			}
		}
		var_100_bool = IsFuncExist(var_44_object, "@GetEyesHeight", (int)1);
		if(var_100_bool != 0) {
			@@var_44_object:GetEyesHeight(var_47_float);
			var_48_cvector = CVector(0.0, 0.0, 0.0);
			var_101_float = GetByIndex(var_48_cvector, 1);
			var_47_float = var_101_float;
			SetByIndex(var_48_cvector, 1) = var_101_float;
			LookAsync(var_28_object, "head", var_48_cvector);
			var_46_bool = 1;
		} else {
			var_46_bool = 0;

		}
		var_103_string = "";
		var_43_string = var_103_string;
		func_1157(var_103_string);
		PlayAnimation("all", var_43_string);
		WaitForAnimEnd();
		var_105_bool = var_46_bool;
		if(var_105_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_43_string);
		RemoveEnvelope();
		var_44_object = 0;
	}
	return 20;
	
}


func_882(var_17_float, var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
	GetPosition(var_22_cvector);
	@@var_18_object:GetPosition(var_23_cvector);
	var_24_cvector = var_23_cvector - var_22_cvector;
	var_17_float = var_24_cvector | var_24_cvector;
	return 6;
}


func_1267(var_102_bool)
{
	var_104_int = 0; var_105_string = "";
	func_1208(var_104_int, "ook1Lisa1");
	var_107_bool = var_104_int == (int)0;
	if(var_107_bool != 0) {
		var_102_bool = 1;
		return 0;
	}
	var_102_bool = 0;
	return 0;
}


func_1139(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0);
	@@var_27_object:GetEyesHeight(var_30_float);
	var_31_cvector = CVector(0.0, 0.0, 0.0);
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	LookAsync(var_27_object, "head", var_31_cvector);
	return 4;
}


func_630()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0;
	WaitForAnimEnd();
	var_34_bool = 0;
	func_1016(var_34_bool);
	var_35_bool = var_34_bool == 0; //@nz
	if(var_35_bool != 0) {
		return 14;
	}
	func_1232((int)0);
	var_36_int = var_27_int;
	var_28_int = 0;
	
Label_644:
	var_49_bool = 0;
	var_49_bool = 0;
	var_51_bool = var_28_int < (int)5;
	if(var_51_bool != 0) {
		var_52_bool = 0;
		func_1016(var_52_bool);
		if(var_52_bool != 0) {
			var_49_bool = 1;
		}
	}
	if(var_49_bool != 0) {
		irand(var_29_int, (int)3);
		var_55_bool = var_29_int == (int)0;
		if(var_55_bool != 0) {
			var_56_int = var_27_int;
			if(var_56_int == 0) goto Label_677;
			irand(var_30_int, var_27_int);
			var_58_string = ""; var_59_int = 0;
			var_30_int = var_59_int;
			func_1225(var_58_string, var_59_int);
			PlayAnimation("all", var_58_string);
			WaitForAnimEnd(var_31_bool);
			var_60_bool = var_31_bool == 0; //@nz
			if(var_60_bool != 0) {
			} else {
		} else {
				var_65_bool = var_29_int == (int)1;
				if(var_65_bool != 0) {
					rand(var_32_float, (int)4);
					var_68_int = var_32_float + (int)1;
					Sleep(var_68_int, var_33_bool);
					var_69_bool = var_33_bool == 0; //@nz
					if(var_69_bool != 0) {
						goto Label_706;
					}
					goto Label_695;
				}
				var_70_int = var_28_int;
				if(var_70_int == 0) goto Label_695;
				goto Label_706;
		}
		Label_695:
			var_61_bool = 0;
			func_709(var_61_bool);
			var_62_bool = var_61_bool == 0; //@nz
			if(var_62_bool != 0) {
				goto Label_706;
			}
			ResetAAS();
			var_28_int = var_28_int + (int)1;
			goto Label_644;

		}
	}
Label_706:
	ResetAAS();
	return 14;
	
}


func_1016(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0;
	IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
	return 2;
}


func_890(var_27_object)
{
	var_28_bool = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = "";
	var_42_bool = var_27_object == 0; //@ne
	if(var_42_bool != 0) {
		return 14;
	}
	IsDead(var_35_bool);
	var_43_bool = var_35_bool;
	if(var_43_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_36_int);
	var_45_bool = var_36_int < (int)0;
	if(var_45_bool != 0) {
		return 14;
	}
	@@var_27_object:GetPosition(var_37_cvector);
	GetPosition(var_38_cvector);
	GetDirection(var_39_cvector);
	var_40_cvector = var_38_cvector - var_37_cvector;
	var_46_float = GetByIndex(var_40_cvector, 0);
	var_47_float = GetByIndex(var_39_cvector, 0);
	var_48_float = var_46_float * var_47_float;
	var_49_float = GetByIndex(var_40_cvector, 2);
	var_50_float = GetByIndex(var_39_cvector, 2);
	var_51_float = var_49_float * var_50_float;
	var_52_int = var_48_float + var_51_float;
	var_54_bool = var_52_int >= (int)0;
	if(var_54_bool != 0) {
		var_41_string = "fhit";
	} else {
		var_41_string = "bhit";
	}
	var_57_int = var_41_string + "1";
	var_59_int = var_41_string + "2";
	FadeSecondaryAnimation("hit_react", var_57_int, var_59_int, (int)-10);
	return 14;
	
}


func_1021(var_25_bool, var_26_object, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0;
	@@var_26_object:GetPosition(var_38_cvector);
	@@var_26_object:GetEyesHeight(var_37_float);
	var_46_float = GetByIndex(var_38_cvector, 1);
	var_46_float = var_46_float + var_37_float;
	SetByIndex(var_38_cvector, 1) = var_46_float;
	GetPosition(var_39_cvector);
	GetEyesHeight(var_37_float);
	var_47_float = GetByIndex(var_39_cvector, 1);
	var_47_float = var_47_float + var_37_float;
	SetByIndex(var_39_cvector, 1) = var_47_float;
	var_40_cvector = var_38_cvector - var_39_cvector;
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (float)0;
	var_49_int = var_40_cvector | var_40_cvector;
	var_50_float = sqrt(var_49_int);
	var_40_cvector = var_40_cvector / var_50_float;
	var_41_cvector = -var_40_cvector;
	var_51_float = var_40_cvector * var_27_float;
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	var_53_cvector = var_41_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1198(var_52_cvector, var_53_cvector);
	var_61_float = var_52_cvector * (int)25;
	var_62_int = var_51_float + var_61_float;
	var_42_cvector = var_62_int - CVector(0.0, 10.0, 0.0);
	var_43_cvector = var_39_cvector + var_42_cvector;
	IsOverrideActive(var_44_bool);
	var_64_bool = var_44_bool;
	if(var_64_bool != 0) {
		var_25_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_43_cvector, var_41_cvector, (bool)1);
	var_66_float = GetByIndex(var_42_cvector, 0);
	var_67_float = GetByIndex(var_42_cvector, 2);
	Rotate(var_66_float, var_67_float);
	var_68_bool = 0;
	func_1323(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		HasAnimationTrack(var_45_bool, "head");
		var_70_bool = var_45_bool;
		if(var_70_bool == 0) goto Label_1084;
		LookAsyncCamera("head");
	}
Label_1084:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_25_bool = 1;
	return 18;
	
}


func_1150()
{
	var_13_bool = 0;
	func_1323(var_13_bool);
	if(var_13_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1279(var_77_int)
{
	var_78_int = 0; var_79_int = 0;
	GetVariable("branch", var_79_int);
	var_82_bool = var_79_int == (int)0;
	if(var_82_bool != 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x50e";
	}
	var_84_bool = var_79_int == (int)1;
	if(var_84_bool != 0) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
	return 2;
}


