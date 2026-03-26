// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,self/1,GetVariable/2,SendWorldWndMessage/1,CreateFloatVector/1,SendWorldWndMessage/2,Trigger/2,HasAnimation/3,SetVariable/2,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:player|W:head|A:GetPosition|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:Can't find lsh animation : |W:reputation|A:add|W:k7q03|W:tvirin|A:RemoveItemByType|W:quest_k7_03|W:fail|W:playsound|W:giveitem|A:GetItemCountOfType|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:ui/NPC_Citizen2.png|W:ui/NPC_Citizen2_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x144
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xad vars=int,int
// @TASK_2: vars=int,int,bool,bool,object,bool,bool params=0
// @EVENT_0: op=0x14a vars=object
// @EVENT_26: op=0x17b vars=string
// @EVENT_6: op=0x183 vars=
// @EVENT_7: op=0x1c4 vars=int
// @PE: 0x4a,0x97,0xad,0x14a,0x17b,0x19a,0x1c4,0x1db,0x306,0x316,0x367,0x37b,0x385,0x38b,0x397

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	if((int)1 != 0) {
		func_751();
		var_17_bool = var_13_bool == (int)27665;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_878(var_19_object);
			var_49_object = Obj(); var_50_object = Obj();
			var_49_object = var_1_object;
			var_50_object = var_0_object;
			func_901();
		}
		var_54_bool = var_13_bool == (int)30081;
		if(var_54_bool != 0) {
			var_55_object = Obj(); var_56_object = Obj();
			var_55_object = var_1_object;
			var_56_object = var_0_object;
			func_891();
			var_71_object = Obj(); var_72_object = Obj();
			var_71_object = var_1_object;
			var_72_object = var_0_object;
			func_871(var_72_object);
		}
		var_112_bool = var_12_bool == (int)27662;
		if(var_112_bool != 0) {
			var_113_string = "";
			func_151(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526382);
			@@@var_0_object:ClearReplies();
			var_131_bool = 0;
			var_131_bool = 0;
			var_132_bool = 0; var_133_object = Obj();
			var_133_object = var_1_object;
			func_907(var_133_object);
			if(var_132_bool != 0) {
				var_140_bool = 0; var_141_object = Obj();
				var_141_object = var_1_object;
				func_919(var_140_bool, var_141_object);
				if(var_140_bool != 0) {
					var_131_bool = 1;
				}
			}
			if(var_131_bool != 0) {
				@@@var_0_object:AddReply((int)526383, (int)27664, (int)27663);
			}
			@@@var_0_object:AddReply((int)526386, (int)-1, (int)27666);
			@@@var_0_object:AddReply((int)528664, (int)-1, (int)30075);
			return 0;
		}
		var_159_bool = var_12_bool == (int)27664;
		if(var_159_bool != 0) {
			var_160_string = "";
			func_151(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)526384);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528665, (int)30078, (int)30076);
			@@@var_0_object:AddReply((int)528666, (int)30078, (int)30077);
			return 0;
		}
		var_169_bool = var_12_bool == (int)30078;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_151(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528667);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528668, (int)30082, (int)30079);
			@@@var_0_object:AddReply((int)528669, (int)-1, (int)30081);
			return 0;
		}
		var_179_bool = var_12_bool == (int)30082;
		if(var_179_bool != 0) {
			var_180_string = "";
			func_151(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528670);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526385, (int)-1, (int)27665);
			return 0;
		}
		var_3_string = true;
		var_185_bool = 0;
		func_1032(var_185_bool);
		if(var_185_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xae";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_475(var_11_bool, var_12_object);
	var_16_int = 0; var_17_object = Obj();
	var_12_object = var_17_object;
	TaskCall(0);
	func_0(var_18_object, var_16_int, var_17_object);
	TaskReturn();
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_14_bool = var_12_string == "cleanup";
	if(var_14_bool != 0) {
		func_359(var_12_string);
	}
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int;
	if(var_12_int != 0) {
		func_475(var_10_bool, var_11_bool);
	}
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_int = var_5_int;
	if(var_17_int != 0) {
		var_18_bool = 0;
		func_408(var_18_bool);
		if(var_18_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_19_object = Obj();
		func_758(var_19_object);
		RemoveActor(var_19_object);
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_14_bool = var_12_int == (int)10;
	if(var_14_bool != 0) {
		var_15_bool = 0;
		func_437(var_10_bool, var_11_bool, var_12_int, var_15_bool);
		if(var_15_bool != 0) {
			var_28_bool = var_2_object == 0; //@nz
			if(var_28_bool != 0) {
				var_29_object = Obj();
				var_29_object = var_4_bool;
				func_740(var_29_object);
				var_2_object = true;
			}
		} else {
			var_36_object = var_2_object;
			if(var_36_object == 0) goto Label_474;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_474:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0;
	func_341(var_11_bool, (float)300, (float)100);
	return 0;
}


func_1024(var_76_int)
{
	var_76_int = 515564;
	return 0;
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0;
	var_0_object = var_17_object;
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0;
	var_17_object = var_28_object;
	func_622(var_27_bool, var_28_object, (float)70.0);
	var_74_bool = var_27_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	CreateDialog(var_23_object);
	var_75_int = 0;
	func_1026(var_75_int);
	@@var_23_object:SetNPCName(var_75_int);
	var_76_int = 0;
	func_1024(var_76_int);
	@@var_23_object:SetNPCDescription(var_76_int);
	var_77_string = "";
	func_1028(var_77_string);
	@@var_23_object:SetPhoto(var_77_string);
	var_78_string = "";
	func_1030(var_78_string);
	@@var_23_object:SetPhoto2(var_78_string);
	var_79_int = 0;
	func_1007(var_79_int);
	@@var_23_object:SetPlayerName(var_79_int);
	IsOverrideActive(var_24_bool);
	var_87_bool = var_24_bool;
	if(var_87_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	DoDialog(var_23_object);
	var_88_object = Obj(); var_89_object = Obj();
	var_17_object = var_88_object;
	var_23_object = var_89_object;
	TaskCall(1);
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object);
	TaskReturn();
	@@var_23_object:IsDialogEnd(var_26_bool);
	
Label_56:
	var_158_bool = var_26_bool == 0; //@nz
	if(var_158_bool != 0) {
		sync();
		@@var_23_object:IsDialogEnd(var_26_bool);
		goto Label_56;
	}
	var_17_object = Obj();
	func_691();
	StopDialog(var_23_object);
	@@var_23_object:GetReturnValue((int)-1);
	var_25_int = var_16_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1026(var_75_int)
{
	var_75_int = 503349;
	return 0;
}


func_1028(var_77_string)
{
	var_77_string = "ui/NPC_Citizen2.png";
	return 0;
}


func_901()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_1030(var_78_string)
{
	var_78_string = "ui/NPC_Citizen2_b.png";
	return 0;
}


func_774(var_102_float, var_103_float, var_104_float, var_105_float)
{
	var_106_bool = var_103_float < var_104_float;
	if(var_106_bool != 0) {
		var_104_float = var_102_float;
		return 0;
	}
	var_107_bool = var_103_float > var_105_float;
	if(var_107_bool != 0) {
		var_105_float = var_102_float;
		return 0;
	}
	var_103_float = var_102_float;
	return 0;
}


func_1032(var_70_bool)
{
	var_70_bool = 0;
	return 0;
}


func_907(var_114_bool)
{
	var_116_int = 0; var_117_string = "";
	func_785(var_116_int, "k7q03");
	var_121_bool = var_116_int == (int)1;
	if(var_121_bool != 0) {
		var_114_bool = 1;
		return 0;
	}
	var_114_bool = 0;
	return 0;
}


func_785(var_116_int, var_117_string)
{
	var_118_int = 0; var_119_int = 0;
	GetVariable(var_117_string, var_119_int);
	var_119_int = var_116_int;
	return 2;
}


func_790(var_73_bool, var_74_object, var_75_float)
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
			goto Label_811;
		}
		var_73_bool = 0;
		return 0;
	}
Label_811:
	var_80_float = 0;
	var_75_float = var_80_float;
	func_825(var_80_float);
	var_84_bool = 0; var_85_object = Obj(); var_86_string = ""; var_87_float = 0; var_88_float = 0; var_89_float = 0;
	var_74_object = var_85_object;
	var_75_float = var_87_float;
	func_595(var_84_bool, var_85_object, "reputation", var_87_float, (float)0, (float)1);
	var_73_bool = 1;
	return 0;
	
}


func_919(var_122_bool, var_123_object)
{
	var_124_bool = 0; var_125_object = Obj();
	var_123_object = var_125_object;
	func_929(var_124_bool, var_125_object);
	if(var_124_bool != 0) {
		var_122_bool = 1;
		return 0;
	}
	var_122_bool = 0;
	return 0;
}


func_408(var_18_bool)
{
	var_18_bool = 1;
	return 0;
}


func_151(var_2_object, var_95_string)
{
	var_96_bool = 0;
	func_1032(var_96_bool);
	var_97_bool = var_96_bool == 0; //@nz
	if(var_97_bool != 0) {
		return 0;
	}
	var_98_bool = var_95_string == var_2_object;
	if(var_98_bool != 0) {
		return 0;
	}
	var_99_string = ""; var_100_bool = 0;
	var_95_string = var_99_string;
	var_102_bool = var_95_string == "";
	if(var_102_bool != 0) {
		var_100_bool = 0;
	} else {
		var_100_bool = 1;
	}
	func_725(var_99_string, var_100_bool);
	var_2_object = var_95_string;
	return 0;
	
}


func_410(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_21_float, var_22_float)
{
	var_23_bool = 0;
	func_617(var_23_bool);
	var_26_bool = var_23_bool == 0; //@nz
	if(var_26_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_21_float;
	var_1_object = var_22_float;
	SetTimer((int)10, (float)1.0);
	func_489();
	var_81_bool = var_3_string == 0; //@nz
	if(var_81_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_929(var_124_bool, var_125_object)
{
	var_126_int = 0; var_127_int = 0;
	@@var_125_object:GetItemCountOfType(var_127_int, "tvirin");
	var_130_bool = var_127_int >= (int)5;
	if(var_130_bool != 0) {
		var_124_bool = 1;
		return 2;
	}
	var_124_bool = 0;
	return 2;
}


func_940()
{
	var_57_object = Obj(); var_58_object = Obj();
	CreateDiaryEntry(var_58_object, (int)779, (int)2, (int)541759);
	var_62_bool = 0; var_63_object = Obj(); var_64_int = 0;
	var_58_object = var_63_object;
	func_979(var_62_bool, var_63_object, (int)434);
	return 2;
}
EMIT "Stack[-1] = 0";


func_691()
{
	var_160_bool = 0; var_161_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_163_bool = 0;
	func_1032(var_163_bool);
	if(var_163_bool != 0) {
	} else {
		HasAnimationTrack(var_161_bool, "head");
		var_165_bool = var_161_bool;
		if(var_165_bool == 0) goto Label_708;
		UnlookAsync("head");
	}
Label_708:
	return 2;
	
}


func_437(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0;
	var_18_bool = var_4_bool == 0; //@ne
	if(var_18_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	var_19_float = 0; var_20_object = Obj();
	var_20_object = var_4_bool;
	func_575(var_19_float, var_20_object);
	var_17_float = sqrt(var_19_float);
	var_27_object = var_2_object;
	if(var_27_object != 0) {
		var_17_float = var_17_float - var_1_object;
	}
	var_15_bool = var_17_float < var_0_object;
	return 2;
}


func_568(var_71_bool)
{
	var_71_bool = 1;
	return 0;
}


func_825(var_80_float)
{
	var_81_object = Obj(); var_82_object = Obj();
	CreateFloatVector(var_82_object);
	@@var_82_object:add(var_80_float);
	SendWorldWndMessage((int)16, var_82_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_570()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_953()
{
	var_24_object = Obj(); var_25_object = Obj();
	CreateDiaryEntry(var_25_object, (int)436, (int)2, (int)526392);
	var_29_bool = 0; var_30_object = Obj(); var_31_int = 0;
	var_25_object = var_30_object;
	func_979(var_29_bool, var_30_object, (int)434);
	return 2;
}
EMIT "Stack[-1] = 0";


func_575(var_19_float, var_20_object)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	GetPosition(var_24_cvector);
	@@var_20_object:GetPosition(var_25_cvector);
	var_26_cvector = var_25_cvector - var_24_cvector;
	var_19_float = var_26_cvector | var_26_cvector;
	return 6;
}


func_835(var_65_bool, var_66_string, var_67_string)
{
	var_68_object = Obj(); var_69_object = Obj();
	FindActor(var_69_object, var_66_string);
	var_70_bool = var_69_object == 0; //@ne
	if(var_70_bool != 0) {
		var_65_bool = 0;
		return 2;
	}
	Trigger(var_69_object, var_67_string);
	var_65_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_709(var_142_string)
{
	var_143_bool = 0; var_144_float = 0; var_145_float = 0; var_146_bool = 0; var_147_float = 0; var_148_float = 0;
	lshHasAnimation(var_146_bool, var_142_string);
	var_149_bool = var_146_bool;
	if(var_149_bool != 0) {
		lshGetAnimTimes(var_142_string, var_147_float, var_148_float);
		lshPlayAnimation(var_147_float, var_148_float, (bool)0);
	} else {
		var_152_int = "Can't find lsh animation : " + var_142_string;
		Trace(var_152_int);
	}
	return 6;
	
}


func_966(var_38_object)
{
	var_39_object = Obj(); var_40_object = Obj();
	GetDiaryRoot(var_40_object);
	var_41_bool = var_40_object == 0; //@nz
	if(var_41_bool != 0) {
		Trace("Can't retrieve diary root");
		var_38_object = 0;
		return 2;
	}
	var_40_object = var_38_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_583(var_92_bool, var_93_object, var_94_string)
{
	var_95_bool = 0; var_96_bool = 0;
	var_99_bool = IsFuncExist(var_93_object, "HasProperty", (int)2);
	var_100_bool = var_99_bool == 0; //@nz
	if(var_100_bool != 0) {
		var_92_bool = 0;
		return 2;
	}
	@@var_93_object:HasProperty(var_94_string, var_96_bool);
	var_96_bool = var_92_bool;
	return 2;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_95_string = "";
		func_151(var_89_object, "Neutral");
		@@@var_0_object:SetMessage((int)526382);
		@@@var_0_object:ClearReplies();
		var_113_bool = 0;
		var_113_bool = 0;
		var_114_bool = 0; var_115_object = Obj();
		var_115_object = var_1_object;
		func_907(var_115_object);
		if(var_114_bool != 0) {
			var_122_bool = 0; var_123_object = Obj();
			var_123_object = var_1_object;
			func_919(var_122_bool, var_123_object);
			if(var_122_bool != 0) {
				var_113_bool = 1;
			}
		}
		if(var_113_bool != 0) {
			@@@var_0_object:AddReply((int)526383, (int)27664, (int)27663);
		}
		@@@var_0_object:AddReply((int)526386, (int)-1, (int)27666);
		@@@var_0_object:AddReply((int)528664, (int)-1, (int)30075);
		goto Label_121;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_121:
	var_140_bool = 0;
	func_1032(var_140_bool);
	if(var_140_bool != 0) {

	Label_125:
		lshWaitForAnimEnd();
		var_141_string = var_3_string;
		if(var_141_string != 0) {
		} else {
			var_142_string = "";
			var_142_string = var_2_object;
			func_709(var_142_string);
			goto Label_125;
	}
		PlayAnimation("all", "idle");

	Label_140:
		WaitForAnimEnd();
		var_155_string = var_3_string;
		if(var_155_string != 0) {
			goto Label_150;
		}
		PlayAnimation("all", "idle");
		goto Label_140;
	}
	goto Label_150;
	
Label_150:
	return 0;
	
}


func_847(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = "";
	var_56_int = var_53_int;
	if(var_56_int != 0) {
		"idle" = "idle" + var_53_int;
	}
	var_55_string = var_52_string;
	return 2;
}


func_595(var_84_bool, var_85_object, var_86_string, var_87_float, var_88_float, var_89_float)
{
	var_90_float = 0; var_91_float = 0;
	var_92_bool = 0; var_93_object = Obj(); var_94_string = "";
	var_85_object = var_93_object;
	var_86_string = var_94_string;
	func_583(var_92_bool, var_93_object, var_94_string);
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
	func_774(var_102_float, var_103_float, var_104_float, var_105_float);
	@@var_85_object:SetProperty(var_86_string, var_102_float);
	var_84_bool = 1;
	return 2;
}


func_979(var_29_bool, var_30_object, var_31_int)
{
	var_32_object = Obj(); var_33_object = Obj(); var_34_int = 0; var_35_object = Obj(); var_36_object = Obj(); var_37_int = 0;
	func_966(Obj());
	var_38_object = var_35_object;
	@@var_35_object:Find(var_31_int, var_36_object);
	var_43_bool = var_36_object == 0; //@nz
	if(var_43_bool != 0) {
		var_45_int = "Can't find diary parent with id: " + var_31_int;
		Trace(var_45_int);
		var_29_bool = 0;
		return 6;
	}
	@@var_36_object:AddChild(var_30_object);
	SendWorldWndMessage((int)7);
	@@var_30_object:GetCategory(var_37_int);
	SetDiarySection(var_37_int);
	var_29_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_725(var_99_string, var_100_bool)
{
	var_103_bool = 0; var_104_float = 0; var_105_float = 0; var_106_bool = 0; var_107_float = 0; var_108_float = 0;
	lshHasAnimation(var_106_bool, var_99_string);
	var_109_bool = var_106_bool;
	if(var_109_bool != 0) {
		lshGetAnimTimes(var_99_string, var_107_float, var_108_float);
		lshPlayAnimation(var_107_float, var_108_float, var_100_bool);
	} else {
		var_111_int = "Can't find lsh animation : " + var_99_string;
		Trace(var_111_int);
	}
	return 6;
	
}


func_341(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0;
	var_6_int = false;
	
Label_343:
	rand(var_16_float, (int)3);
	var_20_int = var_16_float + (int)3;
	Sleep(var_20_int, var_17_bool);
	var_6_int = true;
	var_21_float = 0; var_22_float = 0;
	var_12_float = var_21_float;
	var_13_float = var_22_float;
	func_410(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
	var_6_int = false;
	goto Label_343;
}
EMIT "Return(); Pop(4)";


func_854(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0;
	var_49_int = 0;
	
Label_856:
	var_52_string = ""; var_53_int = 0;
	var_49_int = var_53_int;
	func_847(var_52_string, var_53_int);
	HasAnimation(var_50_bool, "all", var_52_string);
	var_57_bool = var_50_bool == 0; //@nz
	if(var_57_bool != 0) {
	} else {
		var_49_int = var_49_int + (int)1;
		goto Label_856;
	}
	var_49_int = var_46_int;
	return 4;
	
}


func_475(var_2_object, var_3_string)
{
	func_570();
	KillTimer((int)10);
	var_14_object = var_2_object;
	if(var_14_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_740(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0);
	@@var_29_object:GetEyesHeight(var_32_float);
	var_33_cvector = CVector(0.0, 0.0, 0.0);
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	LookAsync(var_29_object, "head", var_33_cvector);
	return 4;
}


func_871(var_71_object)
{
	var_73_bool = 0; var_74_object = Obj(); var_75_float = 0;
	var_71_object = var_74_object;
	func_790(var_73_bool, var_74_object, (float)-0.05000000074505806);
	return 0;
}


func_359(var_5_int)
{
	var_5_int = true;
	var_15_bool = 0;
	var_15_bool = 0;
	var_16_bool = 0;
	func_617(var_16_bool);
	var_19_bool = var_16_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_20_bool = 0;
		func_408(var_20_bool);
		if(var_20_bool != 0) {
			var_15_bool = 1;
		}
	}
	if(var_15_bool != 0) {
		var_21_object = Obj();
		func_758(var_21_object);
		RemoveActor(var_21_object);
	}
	return 0;
}


func_617(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
	return 2;
}


func_489()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0;
	WaitForAnimEnd();
	var_44_bool = 0;
	func_617(var_44_bool);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 14;
	}
	func_854((int)0);
	var_46_int = var_37_int;
	var_38_int = 0;
	
Label_503:
	var_59_bool = 0;
	var_59_bool = 0;
	var_61_bool = var_38_int < (int)5;
	if(var_61_bool != 0) {
		var_62_bool = 0;
		func_617(var_62_bool);
		if(var_62_bool != 0) {
			var_59_bool = 1;
		}
	}
	if(var_59_bool != 0) {
		irand(var_39_int, (int)3);
		var_65_bool = var_39_int == (int)0;
		if(var_65_bool != 0) {
			var_66_int = var_37_int;
			if(var_66_int == 0) goto Label_536;
			irand(var_40_int, var_37_int);
			var_68_string = ""; var_69_int = 0;
			var_40_int = var_69_int;
			func_847(var_68_string, var_69_int);
			PlayAnimation("all", var_68_string);
			WaitForAnimEnd(var_41_bool);
			var_70_bool = var_41_bool == 0; //@nz
			if(var_70_bool != 0) {
			} else {
		} else {
				var_75_bool = var_39_int == (int)1;
				if(var_75_bool != 0) {
					rand(var_42_float, (int)4);
					var_78_int = var_42_float + (int)1;
					Sleep(var_78_int, var_43_bool);
					var_79_bool = var_43_bool == 0; //@nz
					if(var_79_bool != 0) {
						goto Label_565;
					}
					goto Label_554;
				}
				var_80_int = var_38_int;
				if(var_80_int == 0) goto Label_554;
				goto Label_565;
		}
		Label_554:
			var_71_bool = 0;
			func_568(var_71_bool);
			var_72_bool = var_71_bool == 0; //@nz
			if(var_72_bool != 0) {
				goto Label_565;
			}
			ResetAAS();
			var_38_int = var_38_int + (int)1;
			goto Label_503;

		}
	}
Label_565:
	ResetAAS();
	return 14;
	
}


func_622(var_27_bool, var_28_object, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0;
	@@var_28_object:GetPosition(var_40_cvector);
	@@var_28_object:GetEyesHeight(var_39_float);
	var_48_float = GetByIndex(var_40_cvector, 1);
	var_48_float = var_48_float + var_39_float;
	SetByIndex(var_40_cvector, 1) = var_48_float;
	GetPosition(var_41_cvector);
	GetEyesHeight(var_39_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	var_49_float = var_49_float + var_39_float;
	SetByIndex(var_41_cvector, 1) = var_49_float;
	var_42_cvector = var_40_cvector - var_41_cvector;
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (float)0;
	var_51_int = var_42_cvector | var_42_cvector;
	var_52_float = sqrt(var_51_int);
	var_42_cvector = var_42_cvector / var_52_float;
	var_43_cvector = -var_42_cvector;
	var_53_float = var_42_cvector * var_29_float;
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0);
	var_55_cvector = var_43_cvector ^ CVector(0.0, 1.0, 0.0);
	func_764(var_54_cvector, var_55_cvector);
	var_63_float = var_54_cvector * (int)25;
	var_64_int = var_53_float + var_63_float;
	var_44_cvector = var_64_int - CVector(0.0, 10.0, 0.0);
	var_45_cvector = var_41_cvector + var_44_cvector;
	IsOverrideActive(var_46_bool);
	var_66_bool = var_46_bool;
	if(var_66_bool != 0) {
		var_27_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_45_cvector, var_43_cvector, (bool)1);
	var_68_float = GetByIndex(var_44_cvector, 0);
	var_69_float = GetByIndex(var_44_cvector, 2);
	Rotate(var_68_float, var_69_float);
	var_70_bool = 0;
	func_1032(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		HasAnimationTrack(var_47_bool, "head");
		var_72_bool = var_47_bool;
		if(var_72_bool == 0) goto Label_685;
		LookAsyncCamera("head");
	}
Label_685:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_27_bool = 1;
	return 18;
	
}


func_1007(var_79_int)
{
	var_80_int = 0; var_81_int = 0;
	GetVariable("branch", var_81_int);
	var_84_bool = var_81_int == (int)0;
	if(var_84_bool != 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x3fe";
	}
	var_86_bool = var_81_int == (int)1;
	if(var_86_bool != 0) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
	return 2;
}


func_751()
{
	var_15_bool = 0;
	func_1032(var_15_bool);
	if(var_15_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_878(var_18_object)
{
	var_20_int = 0; var_21_int = 0;
	SetVariable("k7q03", (int)2);
	func_953();
	@@var_18_object:RemoveItemByType(var_21_int, "tvirin", (int)5);
	return 2;
}


func_758(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	self(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_891()
{
	func_940();
	var_65_bool = 0; var_66_string = ""; var_67_string = "";
	func_835(var_65_bool, "quest_k7_03", "fail");
	return 0;
}


func_764(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0;
	var_59_int = var_55_cvector | var_55_cvector;
	var_58_float = sqrt(var_59_int);
	var_60_float = 9.999999974752427e-07;
	var_61_bool = var_58_float < var_60_float;
	if(var_61_bool != 0) {
		var_54_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_54_cvector = var_55_cvector / var_58_float;
	return 2;
}


