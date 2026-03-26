// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,rand/2,Sleep/1,IsLoaded/1,RemoveActor/1,StopGroup0/0,irand/2,WaitForAnimEnd/1,Sleep/2,ResetAAS/0,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,self/1,GetVariable/2,FindActor/2,Trigger/2,HasAnimation/3,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|A:GetPosition|A:GetEyesHeight|W:head|W:Can't find lsh animation : |W:b7q03|W:disease|A:GetProperty|A:SetProperty|W:quest_b7_03|W:remove_birdmask|W:b7q03SerumWorks|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:ui/NPC_bmask.png|W:ui/NPC_bmask_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x1ae
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xcd vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x1a3 vars=object
// @EVENT_26: op=0x1d7 vars=string
// @EVENT_5: op=0x1df vars=
// @EVENT_6: op=0x1e4 vars=
// @PE: 0x4a,0xb7,0xcd,0x1a3,0x1d7,0x31f,0x325,0x331

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_711();
		var_11_bool = var_7_bool == (int)22542;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_775(var_13_object);
		}
		var_53_bool = var_6_int == (int)22539;
		if(var_53_bool != 0) {
			var_54_bool = 0; var_55_object = Obj();
			var_55_object = var_1_object;
			func_805(var_55_object);
			if(var_54_bool != 0) {
				var_62_string = "";
				func_183(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)521352);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)524063, (int)25361, (int)25360);
				return 0;
			}
			var_83_bool = 0; var_84_object = Obj();
			var_84_object = var_1_object;
			func_817(var_83_bool, var_84_object);
			var_91_bool = var_83_bool == 0; //@nz
			if(var_91_bool != 0) {
				var_92_string = "";
				func_183(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)521356);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)521357, (int)25366, (int)22544);
				@@@var_0_object:AddReply((int)524069, (int)25368, (int)25367);
				return 0;
			}
			var_100_bool = 0; var_101_object = Obj();
			var_101_object = var_1_object;
			func_817(var_100_bool, var_101_object);
			if(var_100_bool != 0) {
				var_102_object = Obj(); var_103_object = Obj();
				var_102_object = var_1_object;
				var_103_object = var_0_object;
				func_799();
				var_106_string = "";
				func_183(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)521358);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)521359, (int)-1, (int)22546);
				return 0;
			}
		}
		var_112_bool = var_6_int == (int)25368;
		if(var_112_bool != 0) {
			var_113_string = "";
			func_183(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)524070);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524071, (int)25366, (int)25369);
			return 0;
		}
		var_119_bool = var_6_int == (int)25366;
		if(var_119_bool != 0) {
			var_120_string = "";
			func_183(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)524068);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524072, (int)25372, (int)25371);
			return 0;
		}
		var_126_bool = var_6_int == (int)25372;
		if(var_126_bool != 0) {
			var_127_string = "";
			func_183(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)524073);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524074, (int)-1, (int)25373);
			return 0;
		}
		var_133_bool = var_6_int == (int)25361;
		if(var_133_bool != 0) {
			var_134_string = "";
			func_183(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)524064);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524065, (int)25363, (int)25362);
			return 0;
		}
		var_140_bool = var_6_int == (int)25363;
		if(var_140_bool != 0) {
			var_141_string = "";
			func_183(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)524066);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521353, (int)22541, (int)22540);
			@@@var_0_object:AddReply((int)524067, (int)22541, (int)25364);
			return 0;
		}
		var_150_bool = var_6_int == (int)22541;
		if(var_150_bool != 0) {
			var_151_string = "";
			func_183(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)521354);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521355, (int)-1, (int)22542);
			return 0;
		}
		var_3_string = true;
		var_156_bool = 0;
		func_913(var_156_bool);
		if(var_156_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xce";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_583();
	var_7_int = 0; var_8_object = Obj();
	var_6_object = var_8_object;
	TaskCall(0);
	func_0(var_9_object, var_7_int, var_8_object);
	TaskReturn();
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_8_bool = var_6_string == "cleanup";
	if(var_8_bool != 0) {
		func_451(var_6_string);
	}
	return 0;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0();
	sync();
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_500(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_718(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_float = 0; var_7_float = 0;
	
Label_431:
	var_8_bool = 0;
	func_588(var_8_bool);
	var_11_bool = var_8_bool == 0; //@nz
	if(var_11_bool != 0) {
		Hold();
		goto Label_431;
	}
	rand(var_7_float, (int)3);
	var_14_int = var_7_float + (int)3;
	Sleep(var_14_int);
	func_502();
	goto Label_431;
}
EMIT "Return(); Pop(2)";


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0;
	var_8_object = var_19_object;
	func_593(var_18_bool, var_19_object, (float)130.0);
	var_65_bool = var_18_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_66_int = 0;
	func_907(var_66_int);
	@@var_14_object:SetNPCName(var_66_int);
	var_67_int = 0;
	func_905(var_67_int);
	@@var_14_object:SetNPCDescription(var_67_int);
	var_68_string = "";
	func_909(var_68_string);
	@@var_14_object:SetPhoto(var_68_string);
	var_69_string = "";
	func_911(var_69_string);
	@@var_14_object:SetPhoto2(var_69_string);
	var_70_int = 0;
	func_888(var_70_int);
	@@var_14_object:SetPlayerName(var_70_int);
	IsOverrideActive(var_15_bool);
	var_78_bool = var_15_bool;
	if(var_78_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	DoDialog(var_14_object);
	var_79_object = Obj(); var_80_object = Obj();
	var_8_object = var_79_object;
	var_14_object = var_80_object;
	TaskCall(1);
	func_74(var_81_object, var_82_object, var_83_string, var_84_bool, var_79_object, var_80_object);
	TaskReturn();
	@@var_14_object:IsDialogEnd(var_17_bool);
	
Label_56:
	var_161_bool = var_17_bool == 0; //@nz
	if(var_161_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_56;
	}
	var_8_object = Obj();
	func_662();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_775(var_12_object)
{
	var_14_float = 0; var_15_float = 0;
	SetVariable("b7q03", (int)2);
	func_834();
	@@var_12_object:GetProperty("disease", var_15_float);
	var_43_bool = var_15_float < (float)0.5;
	if(var_43_bool != 0) {
		@@var_12_object:SetProperty("disease", (float)0.5);
	}
	var_46_bool = 0; var_47_string = ""; var_48_string = "";
	func_739(var_46_bool, "quest_b7_03", "remove_birdmask");
	return 2;
}


func_905(var_67_int)
{
	var_67_int = 515571;
	return 0;
}


func_907(var_66_int)
{
	var_66_int = 504029;
	return 0;
}


func_909(var_68_string)
{
	var_68_string = "ui/NPC_bmask.png";
	return 0;
}


func_911(var_69_string)
{
	var_69_string = "ui/NPC_bmask_b.png";
	return 0;
}


func_913(var_61_bool)
{
	var_61_bool = 0;
	return 0;
}


func_662()
{
	var_163_bool = 0; var_164_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_166_bool = 0;
	func_913(var_166_bool);
	if(var_166_bool != 0) {
	} else {
		HasAnimationTrack(var_164_bool, "head");
		var_168_bool = var_164_bool;
		if(var_168_bool == 0) goto Label_679;
		UnlookAsync("head");
	}
Label_679:
	return 2;
	
}


func_799()
{
	SetVariable("b7q03SerumWorks", (int)1);
	return 0;
}


func_805(var_86_bool)
{
	var_88_int = 0; var_89_string = "";
	func_734(var_88_int, "b7q03");
	var_93_bool = var_88_int == (int)1;
	if(var_93_bool != 0) {
		var_86_bool = 1;
		return 0;
	}
	var_86_bool = 0;
	return 0;
}


func_680(var_117_string)
{
	var_118_bool = 0; var_119_float = 0; var_120_float = 0; var_121_bool = 0; var_122_float = 0; var_123_float = 0;
	lshHasAnimation(var_121_bool, var_117_string);
	var_124_bool = var_121_bool;
	if(var_124_bool != 0) {
		lshGetAnimTimes(var_117_string, var_122_float, var_123_float);
		lshPlayAnimation(var_122_float, var_123_float, (bool)0);
	} else {
		var_127_int = "Can't find lsh animation : " + var_117_string;
		Trace(var_127_int);
	}
	return 6;
	
}


func_817(var_133_bool, var_134_object)
{
	var_135_bool = 0; var_136_object = Obj();
	var_134_object = var_136_object;
	func_827(var_135_bool, var_136_object);
	if(var_135_bool != 0) {
		var_133_bool = 1;
		return 0;
	}
	var_133_bool = 0;
	return 0;
}


func_183(var_2_object, var_94_string)
{
	var_95_bool = 0;
	func_913(var_95_bool);
	var_96_bool = var_95_bool == 0; //@nz
	if(var_96_bool != 0) {
		return 0;
	}
	var_97_bool = var_94_string == var_2_object;
	if(var_97_bool != 0) {
		return 0;
	}
	var_98_string = ""; var_99_bool = 0;
	var_94_string = var_98_string;
	var_101_bool = var_94_string == "";
	if(var_101_bool != 0) {
		var_99_bool = 0;
	} else {
		var_99_bool = 1;
	}
	func_696(var_98_string, var_99_bool);
	var_2_object = var_94_string;
	return 0;
	
}


func_696(var_98_string, var_99_bool)
{
	var_102_bool = 0; var_103_float = 0; var_104_float = 0; var_105_bool = 0; var_106_float = 0; var_107_float = 0;
	lshHasAnimation(var_105_bool, var_98_string);
	var_108_bool = var_105_bool;
	if(var_108_bool != 0) {
		lshGetAnimTimes(var_98_string, var_106_float, var_107_float);
		lshPlayAnimation(var_106_float, var_107_float, var_99_bool);
	} else {
		var_110_int = "Can't find lsh animation : " + var_98_string;
		Trace(var_110_int);
	}
	return 6;
	
}


func_827(var_135_bool, var_136_object)
{
	var_137_float = 0; var_138_float = 0;
	@@var_136_object:GetProperty("disease", var_138_float);
	var_135_bool = var_138_float == (int)0;
	return 2;
}


func_834()
{
	var_18_object = Obj(); var_19_object = Obj();
	CreateDiaryEntry(var_19_object, (int)282, (int)2, (int)521365);
	var_23_bool = 0; var_24_object = Obj(); var_25_int = 0;
	var_19_object = var_24_object;
	func_860(var_23_bool, var_24_object, (int)280);
	return 2;
}
EMIT "Stack[-1] = 0";


func_451(var_0_object)
{
	var_9_bool = 0; var_10_bool = 0;
	var_0_object = true;
	IsLoaded(var_10_bool);
	var_11_bool = 0;
	var_11_bool = 0;
	var_12_bool = var_10_bool == 0; //@nz
	if(var_12_bool != 0) {
		var_13_bool = 0;
		func_500(var_13_bool);
		if(var_13_bool != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		var_14_object = Obj();
		func_718(var_14_object);
		RemoveActor(var_14_object);
	}
	return 2;
}


func_581(var_56_bool)
{
	var_56_bool = 1;
	return 0;
}


func_711()
{
	var_9_bool = 0;
	func_913(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_583()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_79_object, var_80_object)
{
	var_0_object = var_80_object;
	var_1_object = var_79_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_86_bool = 0; var_87_object = Obj();
		var_87_object = var_1_object;
		func_805(var_87_object);
		if(var_86_bool != 0) {
			var_94_string = "";
			func_183(var_80_object, "Neutral");
			@@@var_0_object:SetMessage((int)521352);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524063, (int)25361, (int)25360);
		} else {
				var_133_bool = 0; var_134_object = Obj();
				var_134_object = var_1_object;
				func_817(var_133_bool, var_134_object);
				var_141_bool = var_133_bool == 0; //@nz
				if(var_141_bool != 0) {
					var_142_string = "";
					func_183(var_80_object, "Neutral");
					@@@var_0_object:SetMessage((int)521356);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)521357, (int)25366, (int)22544);
					@@@var_0_object:AddReply((int)524069, (int)25368, (int)25367);
					goto Label_153;
				}
				var_150_bool = 0; var_151_object = Obj();
				var_151_object = var_1_object;
				func_817(var_150_bool, var_151_object);
				if(var_150_bool != 0) {
					var_152_object = Obj(); var_153_object = Obj();
					var_152_object = var_1_object;
					var_153_object = var_0_object;
					func_799();
					var_156_string = "";
					func_183(var_80_object, "Neutral");
					@@@var_0_object:SetMessage((int)521358);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)521359, (int)-1, (int)22546);
					goto Label_153;
				}
				return 0;
		}
	}
Label_153:
	var_115_bool = 0;
	func_913(var_115_bool);
	if(var_115_bool != 0) {

	Label_157:
		lshWaitForAnimEnd();
		var_116_string = var_3_string;
		if(var_116_string != 0) {
		} else {
			var_117_string = "";
			var_117_string = var_2_object;
			func_680(var_117_string);
			goto Label_157;
	}
		PlayAnimation("all", "idle");

	Label_172:
		WaitForAnimEnd();
		var_130_string = var_3_string;
		if(var_130_string != 0) {
			goto Label_182;
		}
		PlayAnimation("all", "idle");
		goto Label_172;

	}
	goto Label_182;
	
Label_182:
	return 0;
	
}
EMIT "GOTO 0x4e";


func_588(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0;
	IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
	return 2;
}


func_718(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_847(var_32_object)
{
	var_33_object = Obj(); var_34_object = Obj();
	GetDiaryRoot(var_34_object);
	var_35_bool = var_34_object == 0; //@nz
	if(var_35_bool != 0) {
		Trace("Can't retrieve diary root");
		var_32_object = 0;
		return 2;
	}
	var_34_object = var_32_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_593(var_18_bool, var_19_object, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0;
	@@var_19_object:GetPosition(var_31_cvector);
	@@var_19_object:GetEyesHeight(var_30_float);
	var_39_float = GetByIndex(var_31_cvector, 1);
	var_39_float = var_39_float + var_30_float;
	SetByIndex(var_31_cvector, 1) = var_39_float;
	GetPosition(var_32_cvector);
	GetEyesHeight(var_30_float);
	var_40_float = GetByIndex(var_32_cvector, 1);
	var_40_float = var_40_float + var_30_float;
	SetByIndex(var_32_cvector, 1) = var_40_float;
	var_33_cvector = var_31_cvector - var_32_cvector;
	var_41_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (float)0;
	var_42_int = var_33_cvector | var_33_cvector;
	var_43_float = sqrt(var_42_int);
	var_33_cvector = var_33_cvector / var_43_float;
	var_34_cvector = -var_33_cvector;
	var_44_float = var_33_cvector * var_20_float;
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0);
	var_46_cvector = var_34_cvector ^ CVector(0.0, 1.0, 0.0);
	func_724(var_45_cvector, var_46_cvector);
	var_54_float = var_45_cvector * (int)25;
	var_55_int = var_44_float + var_54_float;
	var_35_cvector = var_55_int - CVector(0.0, 10.0, 0.0);
	var_36_cvector = var_32_cvector + var_35_cvector;
	IsOverrideActive(var_37_bool);
	var_57_bool = var_37_bool;
	if(var_57_bool != 0) {
		var_18_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_36_cvector, var_34_cvector, (bool)1);
	var_59_float = GetByIndex(var_35_cvector, 0);
	var_60_float = GetByIndex(var_35_cvector, 2);
	Rotate(var_59_float, var_60_float);
	var_61_bool = 0;
	func_913(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		HasAnimationTrack(var_38_bool, "head");
		var_63_bool = var_38_bool;
		if(var_63_bool == 0) goto Label_656;
		LookAsyncCamera("head");
	}
Label_656:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 18;
	
}


func_724(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0;
	var_50_int = var_46_cvector | var_46_cvector;
	var_49_float = sqrt(var_50_int);
	var_51_float = 9.999999974752427e-07;
	var_52_bool = var_49_float < var_51_float;
	if(var_52_bool != 0) {
		var_45_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_45_cvector = var_46_cvector / var_49_float;
	return 2;
}


func_860(var_23_bool, var_24_object, var_25_int)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_int = 0; var_29_object = Obj(); var_30_object = Obj(); var_31_int = 0;
	func_847(Obj());
	var_32_object = var_29_object;
	@@var_29_object:Find(var_25_int, var_30_object);
	var_37_bool = var_30_object == 0; //@nz
	if(var_37_bool != 0) {
		var_39_int = "Can't find diary parent with id: " + var_25_int;
		Trace(var_39_int);
		var_23_bool = 0;
		return 6;
	}
	@@var_30_object:AddChild(var_24_object);
	SendWorldWndMessage((int)7);
	@@var_24_object:GetCategory(var_31_int);
	SetDiarySection(var_31_int);
	var_23_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_734(var_88_int, var_89_string)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable(var_89_string, var_91_int);
	var_91_int = var_88_int;
	return 2;
}


func_739(var_46_bool, var_47_string, var_48_string)
{
	var_49_object = Obj(); var_50_object = Obj();
	FindActor(var_50_object, var_47_string);
	var_51_bool = var_50_object == 0; //@ne
	if(var_51_bool != 0) {
		var_46_bool = 0;
		return 2;
	}
	Trigger(var_50_object, var_48_string);
	var_46_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_751(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = "";
	var_41_int = var_38_int;
	if(var_41_int != 0) {
		"idle" = "idle" + var_38_int;
	}
	var_40_string = var_37_string;
	return 2;
}


func_500(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_502()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0;
	WaitForAnimEnd();
	var_29_bool = 0;
	func_588(var_29_bool);
	var_30_bool = var_29_bool == 0; //@nz
	if(var_30_bool != 0) {
		return 14;
	}
	func_758((int)0);
	var_31_int = var_22_int;
	var_23_int = 0;
	
Label_516:
	var_44_bool = 0;
	var_44_bool = 0;
	var_46_bool = var_23_int < (int)5;
	if(var_46_bool != 0) {
		var_47_bool = 0;
		func_588(var_47_bool);
		if(var_47_bool != 0) {
			var_44_bool = 1;
		}
	}
	if(var_44_bool != 0) {
		irand(var_24_int, (int)3);
		var_50_bool = var_24_int == (int)0;
		if(var_50_bool != 0) {
			var_51_int = var_22_int;
			if(var_51_int == 0) goto Label_549;
			irand(var_25_int, var_22_int);
			var_53_string = ""; var_54_int = 0;
			var_25_int = var_54_int;
			func_751(var_53_string, var_54_int);
			PlayAnimation("all", var_53_string);
			WaitForAnimEnd(var_26_bool);
			var_55_bool = var_26_bool == 0; //@nz
			if(var_55_bool != 0) {
			} else {
		} else {
				var_60_bool = var_24_int == (int)1;
				if(var_60_bool != 0) {
					rand(var_27_float, (int)4);
					var_63_int = var_27_float + (int)1;
					Sleep(var_63_int, var_28_bool);
					var_64_bool = var_28_bool == 0; //@nz
					if(var_64_bool != 0) {
						goto Label_578;
					}
					goto Label_567;
				}
				var_65_int = var_23_int;
				if(var_65_int == 0) goto Label_567;
				goto Label_578;
		}
		Label_567:
			var_56_bool = 0;
			func_581(var_56_bool);
			var_57_bool = var_56_bool == 0; //@nz
			if(var_57_bool != 0) {
				goto Label_578;
			}
			ResetAAS();
			var_23_int = var_23_int + (int)1;
			goto Label_516;

		}
	}
Label_578:
	ResetAAS();
	return 14;
	
}


func_758(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0;
	var_34_int = 0;
	
Label_760:
	var_37_string = ""; var_38_int = 0;
	var_34_int = var_38_int;
	func_751(var_37_string, var_38_int);
	HasAnimation(var_35_bool, "all", var_37_string);
	var_42_bool = var_35_bool == 0; //@nz
	if(var_42_bool != 0) {
	} else {
		var_34_int = var_34_int + (int)1;
		goto Label_760;
	}
	var_34_int = var_31_int;
	return 4;
	
}


func_888(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("branch", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x387";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
	return 2;
}


