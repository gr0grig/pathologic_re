// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,IsLoaded/1,RemoveActor/1,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,GetGameTime/1,HasAnimation/3,CreateInvItem/1,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Sorrow|A:SetMessage|A:ClearReplies|A:AddReply|W:Neutral|W:all|W:idle|W:Agression|W:Doubt|W:cleanup|W:restore|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|W:ook3BurahIndoor1|W:k3q04|W:k3q04Promise|W:grass combination (good) is given|W:grass_combination|A:SetItemName|W:im_inc|A:SetProperty|W:hl_inc|W:tr_inc|W:grass combination (bad) is given|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:ui/NPC_Burah.png|W:ui/NPC_Burah_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x17b
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xbf vars=int,int
// @TASK_2: vars=cvector,bool params=0
// @EVENT_26: op=0x17f vars=string
// @EVENT_6: op=0x193 vars=
// @EVENT_5: op=0x1a0 vars=
// @EVENT_7: op=0x1e9 vars=int
// @EVENT_45: op=0x22b vars=bool
// @EVENT_0: op=0x237 vars=object
// @PE: 0x51,0xa9,0xbf,0x173,0x17b,0x1a0,0x1e9,0x20f,0x22b,0x42b,0x431,0x43a,0x481

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	if((int)1 != 0) {
		func_975();
		var_12_bool = var_8_bool == (int)26978;
		if(var_12_bool != 0) {
			var_13_object = Obj(); var_14_object = Obj();
			var_13_object = var_1_object;
			var_14_object = var_0_object;
			func_1082();
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_1095(var_43_object);
			var_70_object = Obj(); var_71_object = Obj();
			var_70_object = var_1_object;
			var_71_object = var_0_object;
			func_1124(var_71_object);
		}
		var_86_bool = var_8_bool == (int)26979;
		if(var_86_bool != 0) {
			var_87_object = Obj(); var_88_object = Obj();
			var_87_object = var_1_object;
			var_88_object = var_0_object;
			func_1073();
		}
		var_92_bool = var_7_cvector == (int)26977;
		if(var_92_bool != 0) {
			var_93_bool = 0; var_94_object = Obj();
			var_94_object = var_1_object;
			func_1153(var_94_object);
			if(var_93_bool != 0) {
				var_101_object = Obj(); var_102_object = Obj();
				var_101_object = var_1_object;
				var_102_object = var_0_object;
				func_1067();
				var_105_string = "";
				func_169(var_8_bool, "Sorrow");
				@@@var_0_object:SetMessage((int)525635);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)529332, (int)30788, (int)30787);
				@@@var_0_object:AddReply((int)540664, (int)42695, (int)42694);
				return 0;
			}
			var_129_string = "";
			func_169(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)525638);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525639, (int)-1, (int)26981);
			@@@var_0_object:AddReply((int)529336, (int)-1, (int)30791);
			return 0;
		}
		var_138_bool = var_7_cvector == (int)42695;
		if(var_138_bool != 0) {
			var_139_string = "";
			func_169(var_8_bool, "Sorrow");
			@@@var_0_object:SetMessage((int)540665);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540666, (int)30788, (int)42696);
			@@@var_0_object:AddReply((int)540667, (int)30790, (int)42697);
			return 0;
		}
		var_148_bool = var_7_cvector == (int)30788;
		if(var_148_bool != 0) {
			var_149_string = "";
			func_169(var_8_bool, "Agression");
			@@@var_0_object:SetMessage((int)529333);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540668, (int)42699, (int)42698);
			return 0;
		}
		var_155_bool = var_7_cvector == (int)42699;
		if(var_155_bool != 0) {
			var_156_string = "";
			func_169(var_8_bool, "Agression");
			@@@var_0_object:SetMessage((int)540669);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529334, (int)30790, (int)30789);
			return 0;
		}
		var_162_bool = var_7_cvector == (int)30790;
		if(var_162_bool != 0) {
			var_163_string = "";
			func_169(var_8_bool, "Doubt");
			@@@var_0_object:SetMessage((int)529335);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525636, (int)-1, (int)26978);
			@@@var_0_object:AddReply((int)525637, (int)-1, (int)26979);
			return 0;
		}
		var_3_string = true;
		var_171_bool = 0;
		func_1244(var_171_bool);
		if(var_171_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc0";
	
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0;
	var_11_bool = var_7_string == "cleanup";
	if(var_11_bool != 0) {
		var_1_object = true;
		IsLoaded(var_9_bool);
		var_12_bool = var_9_bool == 0; //@nz
		if(var_12_bool != 0) {
			var_13_object = Obj();
			func_982(var_13_object);
			RemoveActor(var_13_object);
		}
	} else {
		var_17_bool = var_7_string == "restore";
		if(var_17_bool == 0) goto Label_402;
		var_1_object = false;
	}
Label_402:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object;
	if(var_7_object != 0) {
		var_8_object = Obj();
		func_982(var_8_object);
		RemoveActor(var_8_object);
		Hold();
	}
	func_527();
	return 0;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_542();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_9_bool = var_7_int == (int)10;
	if(var_9_bool != 0) {
		func_485();
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = 0;
		func_699(var_12_bool);
		if(var_12_bool != 0) {
			var_15_bool = 0;
			func_454(var_15_bool);
			if(var_15_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_32_bool = 0;
			func_434(var_32_bool);
			if(var_32_bool != 0) {
				var_51_bool = 0; var_52_object = Obj();
				func_982(Obj());
				var_53_object = var_52_object;
				func_849(var_51_bool, var_52_object);
			}
		} else {
			func_449(var_7_int);
			func_476();
		}
	}
	return 0;
	
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool;
	if(var_8_bool != 0) {
		func_476();
	} else {
		var_14_string = "";
		func_929("Neutral");
	}
	return 0;
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0;
	IsOverrideActive(var_9_bool);
	var_10_bool = var_9_bool == 0; //@nz
	if(var_10_bool != 0) {
		EventDisable(0);
		func_667();
		var_11_bool = 0; var_12_object = Obj();
		var_7_object = var_12_object;
		func_690(var_11_bool, var_12_object);
		EventEnable(0);
		var_25_object = Obj();
		var_7_object = var_25_object;
		func_371(var_25_object);
		var_271_string = "";
		func_929("Neutral");
		func_485();
		func_476();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_420(var_6_bool);
	return 0;
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0;
	var_0_object = var_27_object;
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0;
	var_27_object = var_38_object;
	func_704(var_37_bool, var_38_object, (float)70.0);
	var_84_bool = var_37_bool == 0; //@nz
	if(var_84_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	CreateDialog(var_33_object);
	var_85_int = 0;
	func_1238(var_85_int);
	@@var_33_object:SetNPCName(var_85_int);
	var_86_int = 0;
	func_1236(var_86_int);
	@@var_33_object:SetNPCDescription(var_86_int);
	var_87_string = "";
	func_1240(var_87_string);
	@@var_33_object:SetPhoto(var_87_string);
	var_88_string = "";
	func_1242(var_88_string);
	@@var_33_object:SetPhoto2(var_88_string);
	var_89_int = 0;
	func_1219(var_89_int);
	@@var_33_object:SetPlayerName(var_89_int);
	IsOverrideActive(var_34_bool);
	var_97_bool = var_34_bool;
	if(var_97_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	DoDialog(var_33_object);
	var_98_bool = 0; var_99_object = Obj();
	func_982(Obj());
	var_100_object = var_99_object;
	func_791(var_98_bool, var_99_object);
	var_193_object = Obj(); var_194_object = Obj();
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	@@var_33_object:IsDialogEnd(var_36_bool);
	
Label_63:
	var_262_bool = var_36_bool == 0; //@nz
	if(var_262_bool != 0) {
		sync();
		@@var_33_object:IsDialogEnd(var_36_bool);
		goto Label_63;
	}
	var_27_object = Obj();
	func_773();
	StopDialog(var_33_object);
	@@var_33_object:GetReturnValue((int)-1);
	var_35_int = var_26_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1153(var_200_bool)
{
	var_202_int = 0; var_203_string = "";
	func_998(var_202_int, "ook3BurahIndoor1");
	var_207_bool = var_202_int == (int)0;
	if(var_207_bool != 0) {
		var_200_bool = 1;
		return 0;
	}
	var_200_bool = 0;
	return 0;
}


func_773()
{
	var_264_bool = 0; var_265_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_267_bool = 0;
	func_1244(var_267_bool);
	if(var_267_bool != 0) {
	} else {
		HasAnimationTrack(var_265_bool, "head");
		var_269_bool = var_265_bool;
		if(var_269_bool == 0) goto Label_790;
		UnlookAsync("head");
	}
Label_790:
	return 2;
	
}


func_1034(var_153_int)
{
	var_154_float = 0; var_155_float = 0;
	GetGameTime(var_155_float);
	var_157_int = 0;
	var_157_int = var_155_float / (int)24;
	var_153_int = (int)1 + var_157_int;
	return 2;
}


func_1165()
{
	var_19_object = Obj(); var_20_object = Obj();
	CreateDiaryEntry(var_20_object, (int)357, (int)2, (int)525657);
	var_24_bool = 0; var_25_object = Obj(); var_26_int = 0;
	var_20_object = var_25_object;
	func_1191(var_24_bool, var_25_object, (int)354);
	return 2;
}
EMIT "Stack[-1] = 0";


func_527()
{
	func_667();
	func_485();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


func_1043(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = "";
	var_35_int = var_32_int;
	if(var_35_int != 0) {
		"idle" = "idle" + var_32_int;
	}
	var_34_string = var_31_string;
	return 2;
}


func_791(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0;
	GetVariable("voice_common", var_105_int);
	var_108_int = var_105_int;
	if(var_108_int != 0) {
		var_109_bool = 0; var_110_object = Obj();
		var_99_object = var_110_object;
		func_849(var_109_bool, var_110_object);
		var_139_bool = var_109_bool == 0; //@nz
		if(var_139_bool != 0) {
			var_140_bool = 0; var_141_object = Obj();
			var_99_object = var_141_object;
			func_886(var_140_bool, var_141_object);
			var_175_bool = var_140_bool == 0; //@nz
			if(var_175_bool != 0) {
				var_98_bool = 0;
				return 4;
			}
		}
		irand(var_106_int, (int)2);
		var_177_int = var_106_int;
		if(var_177_int != 0) {
			var_180_int = var_105_int + (int)1;
			var_182_int = var_180_int % (int)3;
			SetVariable("voice_common", var_182_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_185_bool = 0; var_186_object = Obj();
		var_99_object = var_186_object;
		func_886(var_185_bool, var_186_object);
		var_187_bool = var_185_bool == 0; //@nz
		if(var_187_bool != 0) {
			var_188_bool = 0; var_189_object = Obj();
			var_99_object = var_189_object;
			func_849(var_188_bool, var_189_object);
			var_190_bool = var_188_bool == 0; //@nz
			if(var_190_bool != 0) {
				var_98_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_847;
	
Label_847:
	var_98_bool = 1;
	return 4;
	
}


func_665(var_45_bool)
{
	var_45_bool = 1;
	return 0;
}


func_1178(var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj();
	GetDiaryRoot(var_35_object);
	var_36_bool = var_35_object == 0; //@nz
	if(var_36_bool != 0) {
		Trace("Can't retrieve diary root");
		var_33_object = 0;
		return 2;
	}
	var_35_object = var_33_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1050(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0;
	var_28_int = 0;
	
Label_1052:
	var_31_string = ""; var_32_int = 0;
	var_28_int = var_32_int;
	func_1043(var_31_string, var_32_int);
	HasAnimation(var_29_bool, "all", var_31_string);
	var_36_bool = var_29_bool == 0; //@nz
	if(var_36_bool != 0) {
	} else {
		var_28_int = var_28_int + (int)1;
		goto Label_1052;
	}
	var_28_int = var_25_int;
	return 4;
	
}


func_667()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_542()
{
	StopGroup0();
	func_485();
	var_8_string = "";
	func_929("Neutral");
	func_476();
	return 0;
}


func_672(var_22_float, var_23_object)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0);
	GetPosition(var_27_cvector);
	@@var_23_object:GetPosition(var_28_cvector);
	var_29_cvector = var_28_cvector - var_27_cvector;
	var_22_float = var_29_cvector | var_29_cvector;
	return 6;
}


func_929(var_238_string)
{
	var_239_bool = 0; var_240_float = 0; var_241_float = 0; var_242_bool = 0; var_243_float = 0; var_244_float = 0;
	lshHasAnimation(var_242_bool, var_238_string);
	var_245_bool = var_242_bool;
	if(var_245_bool != 0) {
		lshGetAnimTimes(var_238_string, var_243_float, var_244_float);
		lshPlayAnimation(var_243_float, var_244_float, (bool)0);
	} else {
		var_248_int = "Can't find lsh animation : " + var_238_string;
		Trace(var_248_int);
	}
	return 6;
	
}


func_420(var_0_object)
{
	var_7_bool = 0;
	func_699(var_7_bool);
	var_10_bool = var_7_bool == 0; //@nz
	if(var_10_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_429:
	func_596();
	goto Label_429;
}
EMIT "Return(); Pop(0)";


func_1191(var_24_bool, var_25_object, var_26_int)
{
	var_27_object = Obj(); var_28_object = Obj(); var_29_int = 0; var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0;
	func_1178(Obj());
	var_33_object = var_30_object;
	@@var_30_object:Find(var_26_int, var_31_object);
	var_38_bool = var_31_object == 0; //@nz
	if(var_38_bool != 0) {
		var_40_int = "Can't find diary parent with id: " + var_26_int;
		Trace(var_40_int);
		var_24_bool = 0;
		return 6;
	}
	@@var_31_object:AddChild(var_25_object);
	SendWorldWndMessage((int)7);
	@@var_25_object:GetCategory(var_32_int);
	SetDiarySection(var_32_int);
	var_24_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_680(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0;
	GetPosition(var_20_cvector);
	var_21_cvector = var_16_cvector - var_20_cvector;
	var_23_float = GetByIndex(var_21_cvector, 0);
	var_24_float = GetByIndex(var_21_cvector, 2);
	Rotate(var_23_float, var_24_float, var_22_bool);
	var_22_bool = var_15_bool;
	return 6;
}


func_169(var_2_object, var_212_string)
{
	var_213_bool = 0;
	func_1244(var_213_bool);
	var_214_bool = var_213_bool == 0; //@nz
	if(var_214_bool != 0) {
		return 0;
	}
	var_215_bool = var_212_string == var_2_object;
	if(var_215_bool != 0) {
		return 0;
	}
	var_216_string = ""; var_217_bool = 0;
	var_212_string = var_216_string;
	var_219_bool = var_212_string == "";
	if(var_219_bool != 0) {
		var_217_bool = 0;
	} else {
		var_217_bool = 1;
	}
	func_945(var_216_string, var_217_bool);
	var_2_object = var_212_string;
	return 0;
	
}


func_1067()
{
	SetVariable("ook3BurahIndoor1", (int)1);
	return 0;
}


func_945(var_216_string, var_217_bool)
{
	var_220_bool = 0; var_221_float = 0; var_222_float = 0; var_223_bool = 0; var_224_float = 0; var_225_float = 0;
	lshHasAnimation(var_223_bool, var_216_string);
	var_226_bool = var_223_bool;
	if(var_226_bool != 0) {
		lshGetAnimTimes(var_216_string, var_224_float, var_225_float);
		lshPlayAnimation(var_224_float, var_225_float, var_217_bool);
	} else {
		var_228_int = "Can't find lsh animation : " + var_216_string;
		Trace(var_228_int);
	}
	return 6;
	
}


func_1073()
{
	SetVariable("k3q04", (int)3);
	func_1165();
	return 0;
}


func_690(var_11_bool, var_12_object)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0);
	@@var_12_object:GetPosition(var_14_cvector);
	var_15_bool = 0; var_16_cvector = CVector(0,0,0);
	var_14_cvector = var_16_cvector;
	func_680(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
	return 2;
}


func_434(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj();
	FindActor(var_34_object, "player");
	var_36_bool = var_34_object == 0; //@nz
	if(var_36_bool != 0) {
		var_32_bool = 0;
		return 2;
	}
	var_37_bool = 0; var_38_object = Obj();
	var_34_object = var_38_object;
	func_690(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1082()
{
	SetVariable("k3q04", (int)3);
	SetVariable("k3q04Promise", (int)1);
	func_1165();
	return 0;
}


func_699(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0;
	IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
	return 2;
}


func_704(var_37_bool, var_38_object, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0;
	@@var_38_object:GetPosition(var_50_cvector);
	@@var_38_object:GetEyesHeight(var_49_float);
	var_58_float = GetByIndex(var_50_cvector, 1);
	var_58_float = var_58_float + var_49_float;
	SetByIndex(var_50_cvector, 1) = var_58_float;
	GetPosition(var_51_cvector);
	GetEyesHeight(var_49_float);
	var_59_float = GetByIndex(var_51_cvector, 1);
	var_59_float = var_59_float + var_49_float;
	SetByIndex(var_51_cvector, 1) = var_59_float;
	var_52_cvector = var_50_cvector - var_51_cvector;
	var_60_float = GetByIndex(var_52_cvector, 1);
	SetByIndex(var_52_cvector, 1) = (float)0;
	var_61_int = var_52_cvector | var_52_cvector;
	var_62_float = sqrt(var_61_int);
	var_52_cvector = var_52_cvector / var_62_float;
	var_53_cvector = -var_52_cvector;
	var_63_float = var_52_cvector * var_39_float;
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0);
	var_65_cvector = var_53_cvector ^ CVector(0.0, 1.0, 0.0);
	func_988(var_64_cvector, var_65_cvector);
	var_73_float = var_64_cvector * (int)25;
	var_74_int = var_63_float + var_73_float;
	var_54_cvector = var_74_int - CVector(0.0, 10.0, 0.0);
	var_55_cvector = var_51_cvector + var_54_cvector;
	IsOverrideActive(var_56_bool);
	var_76_bool = var_56_bool;
	if(var_76_bool != 0) {
		var_37_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_55_cvector, var_53_cvector, (bool)1);
	var_78_float = GetByIndex(var_54_cvector, 0);
	var_79_float = GetByIndex(var_54_cvector, 2);
	Rotate(var_78_float, var_79_float);
	var_80_bool = 0;
	func_1244(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		HasAnimationTrack(var_57_bool, "head");
		var_82_bool = var_57_bool;
		if(var_82_bool == 0) goto Label_767;
		LookAsyncCamera("head");
	}
Label_767:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_37_bool = 1;
	return 18;
	
}


func_449(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_84_float, var_85_float);
	return 0;
}


func_960(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0;
	var_136_bool = 0;
	func_1244(var_136_bool);
	if(var_136_bool != 0) {
		lshHasSpeech(var_135_bool, var_133_string);
		var_137_bool = var_135_bool;
		if(var_137_bool != 0) {
			lshPlaySpeech(var_133_string);
			var_132_bool = 1;
			return 2;
		}
	}
	var_132_bool = 0;
	return 2;
}


func_1219(var_89_int)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable("branch", var_91_int);
	var_94_bool = var_91_int == (int)0;
	if(var_94_bool != 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x4d2";
	}
	var_96_bool = var_91_int == (int)1;
	if(var_96_bool != 0) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
	return 2;
}


func_454(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0;
	FindActor(var_18_object, "player");
	var_21_bool = var_18_object == 0; //@nz
	if(var_21_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	var_22_float = 0; var_23_object = Obj();
	var_18_object = var_23_object;
	func_672(var_22_float, var_23_object);
	var_31_bool = var_22_float > (float)90000.0;
	if(var_31_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	CanSee(var_19_bool, var_18_object);
	var_19_bool = var_15_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_1095(var_42_object)
{
	var_44_object = Obj(); var_45_object = Obj();
	Trace("grass combination (good) is given");
	CreateInvItem(var_45_object);
	@@var_45_object:SetItemName("grass_combination");
	@@var_45_object:SetProperty("im_inc", (float)0.4000000059604645);
	@@var_45_object:SetProperty("hl_inc", (float)-0.009999999776482582);
	@@var_45_object:SetProperty("tr_inc", (float)0.029999999329447746);
	var_54_object = Obj(); var_55_object = Obj(); var_56_int = 0;
	var_42_object = var_54_object;
	var_45_object = var_55_object;
	func_1015(var_54_object, var_55_object, (int)1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_975()
{
	var_10_bool = 0;
	func_1244(var_10_bool);
	if(var_10_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_200_bool = 0; var_201_object = Obj();
		var_201_object = var_1_object;
		func_1153(var_201_object);
		if(var_200_bool != 0) {
			var_208_object = Obj(); var_209_object = Obj();
			var_208_object = var_1_object;
			var_209_object = var_0_object;
			func_1067();
			var_212_string = "";
			func_169(var_194_object, "Sorrow");
			@@@var_0_object:SetMessage((int)525635);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529332, (int)30788, (int)30787);
			@@@var_0_object:AddReply((int)540664, (int)42695, (int)42694);
		} else {
				var_254_string = "";
				func_169(var_194_object, "Neutral");
				@@@var_0_object:SetMessage((int)525638);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)525639, (int)-1, (int)26981);
				@@@var_0_object:AddReply((int)529336, (int)-1, (int)30791);
				goto Label_139;
		}
	}
Label_139:
	var_236_bool = 0;
	func_1244(var_236_bool);
	if(var_236_bool != 0) {

	Label_143:
		lshWaitForAnimEnd();
		var_237_string = var_3_string;
		if(var_237_string != 0) {
		} else {
			var_238_string = "";
			var_238_string = var_2_object;
			func_929(var_238_string);
			goto Label_143;
	}
		PlayAnimation("all", "idle");

	Label_158:
		WaitForAnimEnd();
		var_251_string = var_3_string;
		if(var_251_string != 0) {
			goto Label_168;
		}
		PlayAnimation("all", "idle");
		goto Label_158;

	}
	goto Label_168;
	
Label_168:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_849(var_109_bool, var_110_object)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = "";
	var_116_string = "c";
	var_117_int = 0;
	
Label_852:
	if((int)1 != 0) {
		var_123_int = var_117_int + (int)1;
		var_124_int = var_116_string + var_123_int;
		@@var_110_object:HasProperty(var_124_int, var_118_bool);
		var_125_bool = var_118_bool == 0; //@nz
		if(var_125_bool != 0) {
		} else {
			var_117_int = var_117_int + (int)1;
			goto Label_852;
		}
	}
	var_126_bool = var_117_int == 0; //@nz
	if(var_126_bool != 0) {
		var_109_bool = 0;
		return 10;
	}
	var_119_int = 0;
	var_128_bool = var_117_int > (int)1;
	if(var_128_bool != 0) {
		irand(var_119_int, var_117_int);
	}
	var_130_int = var_119_int + (int)1;
	var_131_int = var_116_string + var_130_int;
	@@var_110_object:GetProperty(var_131_int, var_120_string);
	var_132_bool = 0; var_133_string = "";
	var_120_string = var_133_string;
	func_960(var_132_bool, var_133_string);
	var_132_bool = var_109_bool;
	return 10;
	
}


func_1236(var_86_int)
{
	var_86_int = 515592;
	return 0;
}


func_596()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0;
	WaitForAnimEnd();
	var_23_bool = 0;
	func_699(var_23_bool);
	var_24_bool = var_23_bool == 0; //@nz
	if(var_24_bool != 0) {
		return 12;
	}
	func_1050((int)0);
	var_25_int = var_17_int;
	var_18_int = 0;
	
Label_610:
	var_38_bool = 0;
	var_38_bool = 0;
	var_40_bool = var_18_int < (int)5;
	if(var_40_bool != 0) {
		var_41_bool = 0;
		func_699(var_41_bool);
		if(var_41_bool != 0) {
			var_38_bool = 1;
		}
	}
	if(var_38_bool != 0) {
		var_42_bool = var_17_int == 0; //@nz
		if(var_42_bool != 0) {
			Sleep((int)3, var_19_bool);
			var_44_bool = var_19_bool == 0; //@nz
			if(var_44_bool != 0) {
			} else {
		} else {
				irand(var_20_int, var_17_int);
				irand(var_21_int, (int)5);
				var_50_bool = var_21_int != (int)0;
				if(var_50_bool != 0) {
					var_20_int = 0;
				}
				var_52_string = ""; var_53_int = 0;
				var_20_int = var_53_int;
				func_1043(var_52_string, var_53_int);
				PlayAnimation("all", var_52_string);
				WaitForAnimEnd(var_22_bool);
				var_54_bool = var_22_bool == 0; //@nz
				if(var_54_bool == 0) goto Label_651;
				goto Label_662;
		}
		Label_651:
			var_45_bool = 0;
			func_665(var_45_bool);
			var_46_bool = var_45_bool == 0; //@nz
			if(var_46_bool != 0) {
				goto Label_662;
			}
			ResetAAS();
			var_18_int = var_18_int + (int)1;
			goto Label_610;

		}
	}
Label_662:
	ResetAAS();
	return 12;
	
}


func_1238(var_85_int)
{
	var_85_int = 511961;
	return 0;
}


func_982(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj();
	self(var_102_object);
	var_102_object = var_100_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1240(var_87_string)
{
	var_87_string = "ui/NPC_Burah.png";
	return 0;
}


func_1242(var_88_string)
{
	var_88_string = "ui/NPC_Burah_b.png";
	return 0;
}


func_1244(var_80_bool)
{
	var_80_bool = 1;
	return 0;
}


func_476()
{
	var_273_float = 0; var_274_float = 0;
	rand(var_274_float, (int)8, (int)16);
	SetTimer((int)10, var_274_float);
	return 2;
}


func_988(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0;
	var_69_int = var_65_cvector | var_65_cvector;
	var_68_float = sqrt(var_69_int);
	var_70_float = 9.999999974752427e-07;
	var_71_bool = var_68_float < var_70_float;
	if(var_71_bool != 0) {
		var_64_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_64_cvector = var_65_cvector / var_68_float;
	return 2;
}


func_1124(var_70_object)
{
	var_72_object = Obj(); var_73_object = Obj();
	Trace("grass combination (bad) is given");
	CreateInvItem(var_73_object);
	@@var_73_object:SetItemName("grass_combination");
	@@var_73_object:SetProperty("im_inc", (float)0.20000000298023224);
	@@var_73_object:SetProperty("hl_inc", (float)-0.07999999821186066);
	@@var_73_object:SetProperty("tr_inc", (float)0.11999999731779099);
	var_82_object = Obj(); var_83_object = Obj(); var_84_int = 0;
	var_70_object = var_82_object;
	var_73_object = var_83_object;
	func_1015(var_82_object, var_83_object, (int)1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_485()
{
	KillTimer((int)10);
	return 0;
}


func_998(var_202_int, var_203_string)
{
	var_204_int = 0; var_205_int = 0;
	GetVariable(var_203_string, var_205_int);
	var_205_int = var_202_int;
	return 2;
}


func_1003(var_65_int, var_66_int)
{
	var_67_object = Obj(); var_68_object = Obj();
	CreateIntVector(var_68_object);
	@@var_68_object:add(var_65_int);
	@@var_68_object:add(var_66_int);
	SendWorldWndMessage((int)3, var_68_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_371(var_25_object)
{
	var_26_int = 0; var_27_object = Obj();
	var_25_object = var_27_object;
	TaskCall(0);
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
	return 0;
}


func_886(var_140_bool, var_141_object)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = "";
	var_153_int = 0;
	func_1034(var_153_int);
	var_159_int = "d" + var_153_int;
	var_147_string = var_159_int + "m";
	var_148_int = 0;
	
Label_895:
	if((int)1 != 0) {
		var_163_int = var_148_int + (int)1;
		var_164_int = var_147_string + var_163_int;
		@@var_141_object:HasProperty(var_164_int, var_149_bool);
		var_165_bool = var_149_bool == 0; //@nz
		if(var_165_bool != 0) {
		} else {
			var_148_int = var_148_int + (int)1;
			goto Label_895;
		}
	}
	var_166_bool = var_148_int == 0; //@nz
	if(var_166_bool != 0) {
		var_140_bool = 0;
		return 10;
	}
	var_150_int = 0;
	var_168_bool = var_148_int > (int)1;
	if(var_168_bool != 0) {
		irand(var_150_int, var_148_int);
	}
	var_170_int = var_150_int + (int)1;
	var_171_int = var_147_string + var_170_int;
	@@var_141_object:GetProperty(var_171_int, var_151_string);
	var_172_bool = 0; var_173_string = "";
	var_151_string = var_173_string;
	func_960(var_172_bool, var_173_string);
	var_172_bool = var_140_bool;
	return 10;
	
}


func_1015(var_54_object, var_55_object, var_56_int)
{
	var_57_int = 0; var_58_int = 0; var_59_bool = 0; var_60_int = 0; var_61_int = 0; var_62_bool = 0;
	@@var_55_object:GetItemID(var_60_int);
	GetInvItemProperty(var_61_int, var_60_int, "Category");
	@@var_54_object:AddItem(var_62_bool, var_55_object, var_61_int, var_56_int);
	var_64_bool = var_62_bool == 0; //@nz
	if(var_64_bool != 0) {
		@@var_54_object:DropItems(var_55_object, var_56_int);
	} else {
		var_65_int = 0; var_66_int = 0;
		var_60_int = var_65_int;
		var_56_int = var_66_int;
		func_1003(var_65_int, var_66_int);
	}
	return 6;
	
}


