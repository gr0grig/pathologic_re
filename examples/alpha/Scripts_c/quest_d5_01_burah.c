// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,self/1,GetVariable/2,FindActor/2,Trigger/2,GetGameTime/1,SetVariable/2,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1,CreateDiaryEntry/4
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:d5q01|W:d5q01BurahMeeting1|W:pt_d5q01_girl_corpse1|A:AddMark|W:d5q01BurahMeeting2|W:pt_d5q01_girl_corpse2|W:quest_d5_01|W:burah_free|W:ood5Burah1|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:player|W:Adding diary entry|W:ui/NPC_Burah.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x1fe
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xbb vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x1f6 vars=object
// @EVENT_26: op=0x202 vars=string
// @EVENT_6: op=0x21e vars=
// @PE: 0x3f,0xab,0xbb,0x1f6,0x268,0x2d0,0x2d6,0x2e0,0x2ec

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_638();
		var_11_bool = var_7_bool == (int)13708;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_720();
			var_16_object = Obj(); var_17_object = Obj();
			var_16_object = var_1_object;
			var_17_object = var_0_object;
			func_683();
		}
		var_73_bool = var_6_int == (int)11632;
		if(var_73_bool != 0) {
			var_74_bool = 0; var_75_object = Obj();
			var_75_object = var_1_object;
			func_726(var_74_bool, var_75_object);
			if(var_74_bool != 0) {
				var_78_string = "";
				func_171(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)10543);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)10544, (int)11634, (int)11633);
				@@@var_0_object:AddReply((int)10560, (int)11650, (int)11649);
				@@@var_0_object:AddReply((int)10566, (int)11634, (int)11655);
				return 0;
			}
			var_103_bool = 0; var_104_object = Obj();
			var_104_object = var_1_object;
			func_726(var_103_bool, var_104_object);
			if(var_103_bool != 0) {
				var_105_string = "";
				func_171(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)11865);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)11866, (int)13080, (int)13079);
				return 0;
			}
			var_110_bool = 0; var_111_object = Obj();
			var_111_object = var_1_object;
			func_736(var_111_object);
			if(var_110_bool != 0) {
				var_118_string = "";
				func_171(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)12536);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)12537, (int)13707, (int)13706);
				return 0;
			}
		}
		var_124_bool = var_6_int == (int)13707;
		if(var_124_bool != 0) {
			var_125_string = "";
			func_171(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12538);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12539, (int)-1, (int)13708);
			return 0;
		}
		var_131_bool = var_6_int == (int)13080;
		if(var_131_bool != 0) {
			var_132_string = "";
			func_171(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11867);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11868, (int)13082, (int)13081);
			return 0;
		}
		var_138_bool = var_6_int == (int)13082;
		if(var_138_bool != 0) {
			var_139_string = "";
			func_171(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11869);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11870, (int)-1, (int)13083);
			return 0;
		}
		var_145_bool = var_6_int == (int)11650;
		if(var_145_bool != 0) {
			var_146_string = "";
			func_171(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10561);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10562, (int)11652, (int)11651);
			return 0;
		}
		var_152_bool = var_6_int == (int)11652;
		if(var_152_bool != 0) {
			var_153_string = "";
			func_171(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10563);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10564, (int)-1, (int)11653);
			@@@var_0_object:AddReply((int)10565, (int)-1, (int)11654);
			return 0;
		}
		var_162_bool = var_6_int == (int)11634;
		if(var_162_bool != 0) {
			var_163_string = "";
			func_171(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10545);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10546, (int)11636, (int)11635);
			@@@var_0_object:AddReply((int)10553, (int)11643, (int)11642);
			@@@var_0_object:AddReply((int)10557, (int)11647, (int)11646);
			return 0;
		}
		var_175_bool = var_6_int == (int)11647;
		if(var_175_bool != 0) {
			var_176_string = "";
			func_171(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10558);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10559, (int)-1, (int)11648);
			return 0;
		}
		var_182_bool = var_6_int == (int)11643;
		if(var_182_bool != 0) {
			var_183_string = "";
			func_171(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10554);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10555, (int)-1, (int)11644);
			@@@var_0_object:AddReply((int)10556, (int)-1, (int)11645);
			return 0;
		}
		var_192_bool = var_6_int == (int)11636;
		if(var_192_bool != 0) {
			var_193_string = "";
			func_171(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10547);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10548, (int)-1, (int)11637);
			@@@var_0_object:AddReply((int)10549, (int)11639, (int)11638);
			return 0;
		}
		var_202_bool = var_6_int == (int)11639;
		if(var_202_bool != 0) {
			var_203_string = "";
			func_171(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10550);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10551, (int)-1, (int)11640);
			@@@var_0_object:AddReply((int)10552, (int)-1, (int)11641);
			return 0;
		}
		var_3_string = true;
		var_211_bool = 0;
		func_847(var_211_bool);
		if(var_211_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xbc";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj();
	var_6_object = var_8_object;
	TaskCall(0);
	func_0(var_9_object, var_7_int, var_8_object);
	TaskReturn();
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0;
	var_10_bool = var_6_string == "cleanup";
	if(var_10_bool != 0) {
		var_0_object = true;
		IsLoaded(var_8_bool);
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = var_8_bool == 0; //@nz
		if(var_12_bool != 0) {
			var_13_bool = 0;
			func_558(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_645(var_14_object);
			RemoveActor(var_14_object);
		}
	} else {
		var_18_bool = var_6_string == "restore";
		if(var_18_bool == 0) goto Label_541;
		var_0_object = false;
	}
Label_541:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_558(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_645(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_510:
	Hold();
	goto Label_510;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj();
	var_8_object = var_19_object;
	func_560(var_18_bool, var_19_object);
	var_58_bool = var_18_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_59_int = 0;
	func_843(var_59_int);
	@@var_14_object:SetNPCName(var_59_int);
	var_60_string = "";
	func_845(var_60_string);
	@@var_14_object:SetPhoto(var_60_string);
	var_61_int = 0;
	func_810(var_61_int);
	@@var_14_object:SetPlayerName(var_61_int);
	IsOverrideActive(var_15_bool);
	var_69_bool = var_15_bool;
	if(var_69_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	DoDialog(var_14_object);
	var_70_object = Obj(); var_71_object = Obj();
	var_8_object = var_70_object;
	var_14_object = var_71_object;
	TaskCall(1);
	func_63(var_72_object, var_73_object, var_74_string, var_75_bool, var_70_object, var_71_object);
	TaskReturn();
	@@var_14_object:IsDialogEnd(var_17_bool);
	
Label_45:
	var_134_bool = var_17_bool == 0; //@nz
	if(var_134_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_45;
	}
	var_8_object = Obj();
	func_616();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_645(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_651(var_43_cvector, var_44_cvector)
{
	var_46_float = 0; var_47_float = 0;
	var_48_int = var_44_cvector | var_44_cvector;
	var_47_float = sqrt(var_48_int);
	var_49_float = 9.999999974752427e-07;
	var_50_bool = var_47_float < var_49_float;
	if(var_50_bool != 0) {
		var_43_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_43_cvector = var_44_cvector / var_47_float;
	return 2;
}


func_843(var_59_int)
{
	var_59_int = 11961;
	return 0;
}


func_845(var_60_string)
{
	var_60_string = "ui/NPC_Burah.png";
	return 0;
}


func_847(var_82_bool)
{
	var_82_bool = 1;
	return 0;
}


func_720()
{
	SetVariable("ood5Burah1", (int)1);
	return 0;
}


func_661(var_123_int, var_124_string)
{
	var_125_int = 0; var_126_int = 0;
	GetVariable(var_124_string, var_126_int);
	var_126_int = var_123_int;
	return 2;
}


func_726(var_77_bool, var_78_object)
{
	var_79_bool = 0; var_80_object = Obj();
	var_78_object = var_80_object;
	func_748(var_80_object);
	if(var_79_bool != 0) {
		var_77_bool = 1;
		return 0;
	}
	var_77_bool = 0;
	return 0;
}


func_793(var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj();
	GetMainOutdoorScene(var_25_object);
	var_27_bool = var_25_object == 0; //@ne
	if(var_27_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_26_object = 0;
		var_26_object = var_22_object;
		return 4;
	}
	@@var_25_object:GetMap(var_26_object);
	var_26_object = var_22_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_666(var_66_bool, var_67_string, var_68_string)
{
	var_69_object = Obj(); var_70_object = Obj();
	FindActor(var_70_object, var_67_string);
	var_71_bool = var_70_object == 0; //@ne
	if(var_71_bool != 0) {
		var_66_bool = 0;
		return 2;
	}
	Trigger(var_70_object, var_68_string);
	var_66_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_736(var_121_bool)
{
	var_123_int = 0; var_124_string = "";
	func_661(var_123_int, "ood5Burah1");
	var_128_bool = var_123_int == (int)0;
	if(var_128_bool != 0) {
		var_121_bool = 1;
		return 0;
	}
	var_121_bool = 0;
	return 0;
}


func_678(var_33_float)
{
	var_34_float = 0; var_35_float = 0;
	GetGameTime(var_35_float);
	var_35_float = var_33_float;
	return 2;
}


func_616()
{
	CameraSwitchToNormal();
	return 0;
}


func_810(var_61_int)
{
	var_62_int = 0; var_63_int = 0;
	GetVariable("player", var_63_int);
	var_66_bool = var_63_int == (int)0;
	if(var_66_bool != 0) {
		var_61_int = 200001;
		return 2;
	EMIT "GOTO 0x339";
	}
	var_68_bool = var_63_int == (int)1;
	if(var_68_bool != 0) {
		var_61_int = 200002;
		return 2;
	}
	var_61_int = 200003;
	return 2;
}


func_171(var_2_object, var_81_string)
{
	var_82_bool = 0;
	func_847(var_82_bool);
	var_83_bool = var_82_bool == 0; //@nz
	if(var_83_bool != 0) {
		return 0;
	}
	var_84_bool = var_81_string == var_2_object;
	if(var_84_bool != 0) {
		return 0;
	}
	var_85_string = "";
	var_81_string = var_85_string;
	func_620(var_85_string);
	var_2_object = var_81_string;
	return 0;
}


func_683()
{
	var_18_object = Obj(); var_19_object = Obj();
	SetVariable("d5q01", (int)7);
	func_793(Obj());
	var_22_object = var_19_object;
	var_33_float = 0;
	func_678(var_33_float);
	@@var_19_object:AddMark("d5q01BurahMeeting1", "pt_d5q01_girl_corpse1", (int)1, (int)15351, var_33_float);
	var_40_float = 0;
	func_678(var_40_float);
	@@var_19_object:AddMark("d5q01BurahMeeting2", "pt_d5q01_girl_corpse2", (int)1, (int)15352, var_40_float);
	func_827();
	var_66_bool = 0; var_67_string = ""; var_68_string = "";
	func_666(var_66_bool, "quest_d5_01", "burah_free");
	return 2;
}
EMIT "Stack[-1] = 0";


func_620(var_85_string)
{
	var_86_float = 0; var_87_float = 0; var_88_float = 0; var_89_float = 0;
	var_91_int = "playing " + var_85_string;
	Trace(var_91_int);
	lshGetAnimTimes(var_85_string, var_88_float, var_89_float);
	lshPlayAnimation(var_88_float, var_89_float);
	var_93_int = "start: " + var_88_float;
	Trace(var_93_int);
	var_95_int = "end: " + var_89_float;
	Trace(var_95_int);
	return 4;
}


func_558(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_748(var_79_bool)
{
	var_79_bool = 0;
	return 0;
}


func_560(var_18_bool, var_19_object)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0;
	@@var_19_object:GetPosition(var_29_cvector);
	@@var_19_object:GetEyesHeight(var_28_float);
	var_36_float = GetByIndex(var_29_cvector, 1);
	var_36_float = var_36_float + var_28_float;
	SetByIndex(var_29_cvector, 1) = var_36_float;
	GetPosition(var_30_cvector);
	GetEyesHeight(var_28_float);
	var_37_float = GetByIndex(var_30_cvector, 1);
	var_37_float = var_37_float + var_28_float;
	SetByIndex(var_30_cvector, 1) = var_37_float;
	var_31_cvector = var_29_cvector - var_30_cvector;
	var_38_float = GetByIndex(var_31_cvector, 1);
	SetByIndex(var_31_cvector, 1) = (float)0;
	var_39_int = var_31_cvector | var_31_cvector;
	var_40_float = sqrt(var_39_int);
	var_31_cvector = var_31_cvector / var_40_float;
	var_32_cvector = -var_31_cvector;
	var_42_float = var_31_cvector * (int)70;
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0);
	var_44_cvector = var_32_cvector ^ CVector(0.0, 1.0, 0.0);
	func_651(var_43_cvector, var_44_cvector);
	var_52_float = var_43_cvector * (int)25;
	var_53_int = var_42_float + var_52_float;
	var_33_cvector = var_53_int - CVector(0.0, 10.0, 0.0);
	var_34_cvector = var_30_cvector + var_33_cvector;
	IsOverrideActive(var_35_bool);
	var_55_bool = var_35_bool;
	if(var_55_bool != 0) {
		var_18_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_34_cvector, var_32_cvector);
	var_56_float = GetByIndex(var_33_cvector, 0);
	var_57_float = GetByIndex(var_33_cvector, 2);
	Rotate(var_56_float, var_57_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 16;
}


func_751(var_56_object)
{
	var_57_object = Obj(); var_58_object = Obj();
	GetDiaryRoot(var_58_object);
	var_59_bool = var_58_object == 0; //@nz
	if(var_59_bool != 0) {
		Trace("Can't retrieve diary root");
		var_56_object = 0;
		return 2;
	}
	var_58_object = var_56_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_827()
{
	var_41_object = Obj(); var_42_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_42_object, (int)146, (int)1, (int)15346);
	var_47_bool = 0; var_48_object = Obj(); var_49_int = 0;
	var_42_object = var_48_object;
	func_764(var_47_bool, var_48_object, (int)139);
	return 2;
}
EMIT "Stack[-1] = 0";


func_764(var_47_bool, var_48_object, var_49_int)
{
	var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0; var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0;
	func_751(Obj());
	var_56_object = var_53_object;
	@@var_53_object:Find(var_49_int, var_54_object);
	var_61_bool = var_54_object == 0; //@nz
	if(var_61_bool != 0) {
		var_63_int = "Can't find diary parent with id: " + var_49_int;
		Trace(var_63_int);
		var_47_bool = 0;
		return 6;
	}
	@@var_54_object:AddChild(var_48_object);
	SetVariable("player_diary", (int)1);
	@@var_48_object:GetCategory(var_55_int);
	SetDiarySection(var_55_int);
	var_47_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_638()
{
	var_9_bool = 0;
	func_847(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_70_object, var_71_object)
{
	var_0_object = var_71_object;
	var_1_object = var_70_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_77_bool = 0; var_78_object = Obj();
		var_78_object = var_1_object;
		func_726(var_77_bool, var_78_object);
		if(var_77_bool != 0) {
			var_81_string = "";
			func_171(var_71_object, "Neutral");
			@@@var_0_object:SetMessage((int)10543);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10544, (int)11634, (int)11633);
			@@@var_0_object:AddReply((int)10560, (int)11650, (int)11649);
			@@@var_0_object:AddReply((int)10566, (int)11634, (int)11655);
		} else {
				var_114_bool = 0; var_115_object = Obj();
				var_115_object = var_1_object;
				func_726(var_114_bool, var_115_object);
				if(var_114_bool != 0) {
					var_116_string = "";
					func_171(var_71_object, "Neutral");
					@@@var_0_object:SetMessage((int)11865);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)11866, (int)13080, (int)13079);
					goto Label_141;
				}
				var_121_bool = 0; var_122_object = Obj();
				var_122_object = var_1_object;
				func_736(var_122_object);
				if(var_121_bool != 0) {
					var_129_string = "";
					func_171(var_71_object, "Neutral");
					@@@var_0_object:SetMessage((int)12536);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)12537, (int)13707, (int)13706);
					goto Label_141;
				}
				return 0;
		}
	}
Label_141:
	var_106_bool = 0;
	func_847(var_106_bool);
	if(var_106_bool != 0) {

	Label_145:
		lshWaitForAnimEnd();
		var_107_string = var_3_string;
		if(var_107_string != 0) {
		} else {
			var_108_string = "";
			var_108_string = var_2_object;
			func_620(var_108_string);
			goto Label_145;
	}
		PlayAnimation("all", "idle");

	Label_160:
		WaitForAnimEnd();
		var_111_string = var_3_string;
		if(var_111_string != 0) {
			goto Label_170;
		}
		PlayAnimation("all", "idle");
		goto Label_160;

	}
	goto Label_170;
	
Label_170:
	return 0;
	
}
EMIT "GOTO 0x43";


