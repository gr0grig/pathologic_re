// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,self/1,GetVariable/2,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,HasAnimation/3
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:Door |W: not found|W:locked|A:SetProperty|W:oob12Littleboy1|W:oob12Littleboy2|W:oob12Littleboy3|W:mnogogrannik@door2|W:B_Mission5|W:b12q01ChildsAreVisited|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|A:Remove|W:branch|W:ui/NPC_Citizen3.png|W:ui/NPC_Citizen3_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x298
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xe0 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object,bool,bool params=0
// @EVENT_0: op=0x29e vars=object
// @EVENT_26: op=0x2cf vars=string
// @EVENT_6: op=0x2d7 vars=
// @EVENT_7: op=0x318 vars=int
// @PE: 0x4a,0xca,0xe0,0x29e,0x2cf,0x2ee,0x318,0x32f,0x44e,0x454,0x45a,0x460,0x467,0x487,0x48d,0x499,0x4a5

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	if((int)1 != 0) {
		func_1057();
		var_17_bool = var_13_bool == (int)42528;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_1108();
		}
		var_23_bool = var_13_bool == (int)42539;
		if(var_23_bool != 0) {
			var_24_object = Obj(); var_25_object = Obj();
			var_24_object = var_1_object;
			var_25_object = var_0_object;
			func_1114();
		}
		var_29_bool = var_12_bool == (int)24067;
		if(var_29_bool != 0) {
			var_30_bool = 0; var_31_object = Obj();
			var_31_object = var_1_object;
			func_1165(var_31_object);
			if(var_30_bool != 0) {
				var_38_object = Obj(); var_39_object = Obj();
				var_38_object = var_1_object;
				var_39_object = var_0_object;
				func_1120();
				var_50_object = Obj(); var_51_object = Obj();
				var_50_object = var_1_object;
				var_51_object = var_0_object;
				func_1159();
				var_54_object = Obj(); var_55_object = Obj();
				var_54_object = var_1_object;
				var_55_object = var_0_object;
				func_1127();
				var_99_object = Obj(); var_100_object = Obj();
				var_99_object = var_1_object;
				var_100_object = var_0_object;
				func_1102();
				var_103_string = "";
				func_202(var_13_bool, "Neutral");
				@@@var_0_object:SetMessage((int)522879);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)522880, (int)24069, (int)24068);
				@@@var_0_object:AddReply((int)522898, (int)24089, (int)24088);
				@@@var_0_object:AddReply((int)522900, (int)24091, (int)24090);
				return 0;
			}
			var_130_string = "";
			func_202(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540520);
			@@@var_0_object:ClearReplies();
			var_132_bool = 0; var_133_object = Obj();
			var_133_object = var_1_object;
			func_1177(var_133_object);
			if(var_132_bool != 0) {
				@@@var_0_object:AddReply((int)540521, (int)42529, (int)42528);
			}
			var_141_bool = 0; var_142_object = Obj();
			var_142_object = var_1_object;
			func_1189(var_142_object);
			if(var_141_bool != 0) {
				@@@var_0_object:AddReply((int)540531, (int)42540, (int)42539);
			}
			@@@var_0_object:AddReply((int)540535, (int)-1, (int)42545);
			@@@var_0_object:AddReply((int)523160, (int)-1, (int)24362);
			return 0;
		}
		var_157_bool = var_12_bool == (int)42540;
		if(var_157_bool != 0) {
			var_158_string = "";
			func_202(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540532);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540533, (int)42534, (int)42541);
			@@@var_0_object:AddReply((int)540534, (int)42531, (int)42543);
			return 0;
		}
		var_167_bool = var_12_bool == (int)42529;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_202(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540522);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540523, (int)42531, (int)42530);
			@@@var_0_object:AddReply((int)540530, (int)42531, (int)42537);
			return 0;
		}
		var_177_bool = var_12_bool == (int)42531;
		if(var_177_bool != 0) {
			var_178_string = "";
			func_202(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540524);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540525, (int)-1, (int)42532);
			@@@var_0_object:AddReply((int)540526, (int)42534, (int)42533);
			return 0;
		}
		var_187_bool = var_12_bool == (int)42534;
		if(var_187_bool != 0) {
			var_188_string = "";
			func_202(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540527);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540528, (int)-1, (int)42535);
			@@@var_0_object:AddReply((int)540529, (int)-1, (int)42536);
			return 0;
		}
		var_197_bool = var_12_bool == (int)24091;
		if(var_197_bool != 0) {
			var_198_string = "";
			func_202(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522901);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522902, (int)24093, (int)24092);
			@@@var_0_object:AddReply((int)522910, (int)-1, (int)24100);
			return 0;
		}
		var_207_bool = var_12_bool == (int)24093;
		if(var_207_bool != 0) {
			var_208_string = "";
			func_202(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522903);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522904, (int)24095, (int)24094);
			@@@var_0_object:AddReply((int)522909, (int)-1, (int)24099);
			return 0;
		}
		var_217_bool = var_12_bool == (int)24095;
		if(var_217_bool != 0) {
			var_218_string = "";
			func_202(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522905);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522906, (int)-1, (int)24096);
			@@@var_0_object:AddReply((int)522908, (int)-1, (int)24098);
			return 0;
		}
		var_227_bool = var_12_bool == (int)24089;
		if(var_227_bool != 0) {
			var_228_string = "";
			func_202(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522899);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522911, (int)24102, (int)24101);
			return 0;
		}
		var_234_bool = var_12_bool == (int)24102;
		if(var_234_bool != 0) {
			var_235_string = "";
			func_202(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522912);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522913, (int)24091, (int)24103);
			return 0;
		}
		var_241_bool = var_12_bool == (int)24069;
		if(var_241_bool != 0) {
			var_242_string = "";
			func_202(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522881);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522882, (int)24071, (int)24070);
			@@@var_0_object:AddReply((int)522897, (int)24071, (int)24086);
			return 0;
		}
		var_251_bool = var_12_bool == (int)24071;
		if(var_251_bool != 0) {
			var_252_string = "";
			func_202(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522883);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522884, (int)24073, (int)24072);
			@@@var_0_object:AddReply((int)522896, (int)24073, (int)24084);
			return 0;
		}
		var_261_bool = var_12_bool == (int)24073;
		if(var_261_bool != 0) {
			var_262_string = "";
			func_202(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522885);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522886, (int)24075, (int)24074);
			@@@var_0_object:AddReply((int)522891, (int)24080, (int)24079);
			return 0;
		}
		var_271_bool = var_12_bool == (int)24080;
		if(var_271_bool != 0) {
			var_272_string = "";
			func_202(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522892);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522894, (int)-1, (int)24082);
			@@@var_0_object:AddReply((int)522895, (int)-1, (int)24083);
			return 0;
		}
		var_281_bool = var_12_bool == (int)24075;
		if(var_281_bool != 0) {
			var_282_string = "";
			func_202(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522887);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522889, (int)-1, (int)24077);
			@@@var_0_object:AddReply((int)522890, (int)-1, (int)24078);
			return 0;
		}
		var_3_string = true;
		var_290_bool = 0;
		func_1297(var_290_bool);
		if(var_290_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xe1";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_815(var_11_bool, var_12_object);
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
		func_699(var_12_string);
	}
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int;
	if(var_12_int != 0) {
		func_815(var_10_bool, var_11_bool);
	}
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_int = var_5_int;
	if(var_17_int != 0) {
		var_18_bool = 0;
		func_748(var_18_bool);
		if(var_18_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_19_object = Obj();
		func_1064(var_19_object);
		RemoveActor(var_19_object);
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_14_bool = var_12_int == (int)10;
	if(var_14_bool != 0) {
		var_15_bool = 0;
		func_777(var_10_bool, var_11_bool, var_12_int, var_15_bool);
		if(var_15_bool != 0) {
			var_28_bool = var_2_object == 0; //@nz
			if(var_28_bool != 0) {
				var_29_object = Obj();
				var_29_object = var_4_bool;
				func_1046(var_29_object);
				var_2_object = true;
			}
		} else {
			var_36_object = var_2_object;
			if(var_36_object == 0) goto Label_814;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_814:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0;
	func_681(var_11_bool, (float)300, (float)100);
	return 0;
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0;
	var_0_object = var_17_object;
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0;
	var_17_object = var_28_object;
	func_928(var_27_bool, var_28_object, (float)70.0);
	var_74_bool = var_27_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	CreateDialog(var_23_object);
	var_75_int = 0;
	func_1291(var_75_int);
	@@var_23_object:SetNPCName(var_75_int);
	var_76_int = 0;
	func_1289(var_76_int);
	@@var_23_object:SetNPCDescription(var_76_int);
	var_77_string = "";
	func_1293(var_77_string);
	@@var_23_object:SetPhoto(var_77_string);
	var_78_string = "";
	func_1295(var_78_string);
	@@var_23_object:SetPhoto2(var_78_string);
	var_79_int = 0;
	func_1272(var_79_int);
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
	var_239_bool = var_26_bool == 0; //@nz
	if(var_239_bool != 0) {
		sync();
		@@var_23_object:IsDialogEnd(var_26_bool);
		goto Label_56;
	}
	var_17_object = Obj();
	func_997();
	StopDialog(var_23_object);
	@@var_23_object:GetReturnValue((int)-1);
	var_25_int = var_16_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1159()
{
	SetVariable("b12q01ChildsAreVisited", (int)1);
	return 0;
}


func_1031(var_172_string, var_173_bool)
{
	var_176_bool = 0; var_177_float = 0; var_178_float = 0; var_179_bool = 0; var_180_float = 0; var_181_float = 0;
	lshHasAnimation(var_179_bool, var_172_string);
	var_182_bool = var_179_bool;
	if(var_182_bool != 0) {
		lshGetAnimTimes(var_172_string, var_180_float, var_181_float);
		lshPlayAnimation(var_180_float, var_181_float, var_173_bool);
	} else {
		var_184_int = "Can't find lsh animation : " + var_172_string;
		Trace(var_184_int);
	}
	return 6;
	
}


func_1289(var_76_int)
{
	var_76_int = 515560;
	return 0;
}


func_777(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0;
	var_18_bool = var_4_bool == 0; //@ne
	if(var_18_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	var_19_float = 0; var_20_object = Obj();
	var_20_object = var_4_bool;
	func_915(var_19_float, var_20_object);
	var_17_float = sqrt(var_19_float);
	var_27_object = var_2_object;
	if(var_27_object != 0) {
		var_17_float = var_17_float - var_1_object;
	}
	var_15_bool = var_17_float < var_0_object;
	return 2;
}


func_1291(var_75_int)
{
	var_75_int = 503345;
	return 0;
}


func_908(var_71_bool)
{
	var_71_bool = 1;
	return 0;
}


func_1293(var_77_string)
{
	var_77_string = "ui/NPC_Citizen3.png";
	return 0;
}


func_1165(var_95_bool)
{
	var_97_int = 0; var_98_string = "";
	func_1080(var_97_int, "oob12Littleboy1");
	var_102_bool = var_97_int == (int)0;
	if(var_102_bool != 0) {
		var_95_bool = 1;
		return 0;
	}
	var_95_bool = 0;
	return 0;
}


func_1295(var_78_string)
{
	var_78_string = "ui/NPC_Citizen3_b.png";
	return 0;
}


func_910()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1297(var_70_bool)
{
	var_70_bool = 0;
	return 0;
}


func_915(var_19_float, var_20_object)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	GetPosition(var_24_cvector);
	@@var_20_object:GetPosition(var_25_cvector);
	var_26_cvector = var_25_cvector - var_24_cvector;
	var_19_float = var_26_cvector | var_26_cvector;
	return 6;
}


func_1299(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = "";
	var_56_int = var_53_int;
	if(var_56_int != 0) {
		"idle" = "idle" + var_53_int;
	}
	var_55_string = var_52_string;
	return 2;
}


func_1046(var_29_object)
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


func_1177(var_215_bool)
{
	var_217_int = 0; var_218_string = "";
	func_1080(var_217_int, "oob12Littleboy2");
	var_220_bool = var_217_int == (int)0;
	if(var_220_bool != 0) {
		var_215_bool = 1;
		return 0;
	}
	var_215_bool = 0;
	return 0;
}


func_1306(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0;
	var_49_int = 0;
	
Label_1308:
	var_52_string = ""; var_53_int = 0;
	var_49_int = var_53_int;
	func_1299(var_52_string, var_53_int);
	HasAnimation(var_50_bool, "all", var_52_string);
	var_57_bool = var_50_bool == 0; //@nz
	if(var_57_bool != 0) {
	} else {
		var_49_int = var_49_int + (int)1;
		goto Label_1308;
	}
	var_49_int = var_46_int;
	return 4;
	
}


func_923(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
	return 2;
}


func_928(var_27_bool, var_28_object, var_29_float)
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
	func_1070(var_54_cvector, var_55_cvector);
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
	func_1297(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		HasAnimationTrack(var_47_bool, "head");
		var_72_bool = var_47_bool;
		if(var_72_bool == 0) goto Label_991;
		LookAsyncCamera("head");
	}
Label_991:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_27_bool = 1;
	return 18;
	
}


func_1057()
{
	var_15_bool = 0;
	func_1297(var_15_bool);
	if(var_15_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1189(var_224_bool)
{
	var_226_int = 0; var_227_string = "";
	func_1080(var_226_int, "oob12Littleboy3");
	var_229_bool = var_226_int == (int)0;
	if(var_229_bool != 0) {
		var_224_bool = 1;
		return 0;
	}
	var_224_bool = 0;
	return 0;
}


func_1064(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	self(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_681(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0;
	var_6_int = false;
	
Label_683:
	rand(var_16_float, (int)3);
	var_20_int = var_16_float + (int)3;
	Sleep(var_20_int, var_17_bool);
	var_6_int = true;
	var_21_float = 0; var_22_float = 0;
	var_12_float = var_21_float;
	var_13_float = var_22_float;
	func_750(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
	var_6_int = false;
	goto Label_683;
}
EMIT "Return(); Pop(4)";


func_1070(var_54_cvector, var_55_cvector)
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


func_815(var_2_object, var_3_string)
{
	func_910();
	KillTimer((int)10);
	var_14_object = var_2_object;
	if(var_14_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_1201()
{
	var_127_object = Obj(); var_128_object = Obj();
	CreateDiaryEntry(var_128_object, (int)566, (int)0, (int)530580);
	var_132_bool = 0; var_133_object = Obj(); var_134_int = 0;
	var_128_object = var_133_object;
	func_1227(var_132_bool, var_133_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1080(var_97_int, var_98_string)
{
	var_99_int = 0; var_100_int = 0;
	GetVariable(var_98_string, var_100_int);
	var_100_int = var_97_int;
	return 2;
}


func_699(var_5_int)
{
	var_5_int = true;
	var_15_bool = 0;
	var_15_bool = 0;
	var_16_bool = 0;
	func_923(var_16_bool);
	var_19_bool = var_16_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_20_bool = 0;
		func_748(var_20_bool);
		if(var_20_bool != 0) {
			var_15_bool = 1;
		}
	}
	if(var_15_bool != 0) {
		var_21_object = Obj();
		func_1064(var_21_object);
		RemoveActor(var_21_object);
	}
	return 0;
}


func_829()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0;
	WaitForAnimEnd();
	var_44_bool = 0;
	func_923(var_44_bool);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 14;
	}
	func_1306((int)0);
	var_46_int = var_37_int;
	var_38_int = 0;
	
Label_843:
	var_59_bool = 0;
	var_59_bool = 0;
	var_61_bool = var_38_int < (int)5;
	if(var_61_bool != 0) {
		var_62_bool = 0;
		func_923(var_62_bool);
		if(var_62_bool != 0) {
			var_59_bool = 1;
		}
	}
	if(var_59_bool != 0) {
		irand(var_39_int, (int)3);
		var_65_bool = var_39_int == (int)0;
		if(var_65_bool != 0) {
			var_66_int = var_37_int;
			if(var_66_int == 0) goto Label_876;
			irand(var_40_int, var_37_int);
			var_68_string = ""; var_69_int = 0;
			var_40_int = var_69_int;
			func_1299(var_68_string, var_69_int);
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
						goto Label_905;
					}
					goto Label_894;
				}
				var_80_int = var_38_int;
				if(var_80_int == 0) goto Label_894;
				goto Label_905;
		}
		Label_894:
			var_71_bool = 0;
			func_908(var_71_bool);
			var_72_bool = var_71_bool == 0; //@nz
			if(var_72_bool != 0) {
				goto Label_905;
			}
			ResetAAS();
			var_38_int = var_38_int + (int)1;
			goto Label_843;

		}
	}
Label_905:
	ResetAAS();
	return 14;
	
}


func_1085(var_105_string, var_106_bool)
{
	var_107_object = Obj(); var_108_object = Obj();
	FindActor(var_108_object, var_105_string);
	var_109_bool = var_108_object == 0; //@nz
	if(var_109_bool != 0) {
		var_111_int = "Door " + var_105_string;
		var_113_int = var_111_int + " not found";
		Trace(var_113_int);
	} else {
		@@var_108_object:SetProperty("locked", var_106_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_1214(var_141_object)
{
	var_142_object = Obj(); var_143_object = Obj();
	GetDiaryRoot(var_143_object);
	var_144_bool = var_143_object == 0; //@nz
	if(var_144_bool != 0) {
		Trace("Can't retrieve diary root");
		var_141_object = 0;
		return 2;
	}
	var_143_object = var_141_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_95_bool = 0; var_96_object = Obj();
		var_96_object = var_1_object;
		func_1165(var_96_object);
		if(var_95_bool != 0) {
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_1120();
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_object;
			func_1159();
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_object;
			func_1127();
			var_164_object = Obj(); var_165_object = Obj();
			var_164_object = var_1_object;
			var_165_object = var_0_object;
			func_1102();
			var_168_string = "";
			func_202(var_89_object, "Neutral");
			@@@var_0_object:SetMessage((int)522879);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522880, (int)24069, (int)24068);
			@@@var_0_object:AddReply((int)522898, (int)24089, (int)24088);
			@@@var_0_object:AddReply((int)522900, (int)24091, (int)24090);
		} else {
				var_213_string = "";
				func_202(var_89_object, "Neutral");
				@@@var_0_object:SetMessage((int)540520);
				@@@var_0_object:ClearReplies();
				var_215_bool = 0; var_216_object = Obj();
				var_216_object = var_1_object;
				func_1177(var_216_object);
				if(var_215_bool != 0) {
					@@@var_0_object:AddReply((int)540521, (int)42529, (int)42528);
				}
				var_224_bool = 0; var_225_object = Obj();
				var_225_object = var_1_object;
				func_1189(var_225_object);
				if(var_224_bool != 0) {
					@@@var_0_object:AddReply((int)540531, (int)42540, (int)42539);
				}
				@@@var_0_object:AddReply((int)540535, (int)-1, (int)42545);
				@@@var_0_object:AddReply((int)523160, (int)-1, (int)24362);
				goto Label_172;
		}
	}
Label_172:
	var_195_bool = 0;
	func_1297(var_195_bool);
	if(var_195_bool != 0) {

	Label_176:
		lshWaitForAnimEnd();
		var_196_string = var_3_string;
		if(var_196_string != 0) {
		} else {
			var_197_string = "";
			var_197_string = var_2_object;
			func_1015(var_197_string);
			goto Label_176;
	}
		PlayAnimation("all", "idle");

	Label_191:
		WaitForAnimEnd();
		var_210_string = var_3_string;
		if(var_210_string != 0) {
			goto Label_201;
		}
		PlayAnimation("all", "idle");
		goto Label_191;

	}
	goto Label_201;
	
Label_201:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_202(var_2_object, var_168_string)
{
	var_169_bool = 0;
	func_1297(var_169_bool);
	var_170_bool = var_169_bool == 0; //@nz
	if(var_170_bool != 0) {
		return 0;
	}
	var_171_bool = var_168_string == var_2_object;
	if(var_171_bool != 0) {
		return 0;
	}
	var_172_string = ""; var_173_bool = 0;
	var_168_string = var_172_string;
	var_175_bool = var_168_string == "";
	if(var_175_bool != 0) {
		var_173_bool = 0;
	} else {
		var_173_bool = 1;
	}
	func_1031(var_172_string, var_173_bool);
	var_2_object = var_168_string;
	return 0;
	
}


func_1227(var_132_bool, var_133_object, var_134_int)
{
	var_135_object = Obj(); var_136_object = Obj(); var_137_int = 0; var_138_object = Obj(); var_139_object = Obj(); var_140_int = 0;
	func_1214(Obj());
	var_141_object = var_138_object;
	@@var_138_object:Find(var_134_int, var_139_object);
	var_146_bool = var_139_object == 0; //@nz
	if(var_146_bool != 0) {
		var_148_int = "Can't find diary parent with id: " + var_134_int;
		Trace(var_148_int);
		var_132_bool = 0;
		return 6;
	}
	@@var_139_object:AddChild(var_133_object);
	SendWorldWndMessage((int)7);
	@@var_133_object:GetCategory(var_140_int);
	SetDiarySection(var_140_int);
	var_132_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1102()
{
	SetVariable("oob12Littleboy1", (int)1);
	return 0;
}


func_1108()
{
	SetVariable("oob12Littleboy2", (int)1);
	return 0;
}


func_1114()
{
	SetVariable("oob12Littleboy3", (int)1);
	return 0;
}


func_1120()
{
	var_105_string = ""; var_106_bool = 0;
	func_1085("mnogogrannik@door2", (bool)0);
	return 0;
}


func_997()
{
	var_241_bool = 0; var_242_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_244_bool = 0;
	func_1297(var_244_bool);
	if(var_244_bool != 0) {
	} else {
		HasAnimationTrack(var_242_bool, "head");
		var_246_bool = var_242_bool;
		if(var_246_bool == 0) goto Label_1014;
		UnlookAsync("head");
	}
Label_1014:
	return 2;
	
}


func_1127()
{
	var_121_int = 0; var_122_string = "";
	func_1080(var_121_int, "B_Mission5");
	var_124_bool = var_121_int == (int)0;
	if(var_124_bool != 0) {
		SetVariable("B_Mission5", (int)1);
		func_1201();
		var_150_bool = 0; var_151_int = 0;
		func_1255(var_150_bool, (int)562);
		var_158_bool = 0; var_159_int = 0;
		func_1255(var_158_bool, (int)563);
		var_160_bool = 0; var_161_int = 0;
		func_1255(var_160_bool, (int)564);
		var_162_bool = 0; var_163_int = 0;
		func_1255(var_162_bool, (int)565);
	}
	return 0;
}


func_1255(var_150_bool, var_151_int)
{
	var_152_object = Obj(); var_153_object = Obj(); var_154_object = Obj(); var_155_object = Obj();
	func_1214(Obj());
	var_156_object = var_154_object;
	@@var_154_object:Find(var_151_int, var_155_object);
	var_157_bool = var_155_object == 0; //@nz
	if(var_157_bool != 0) {
		var_150_bool = 0;
		return 4;
	}
	@@var_155_object:Remove();
	var_150_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_748(var_18_bool)
{
	var_18_bool = 1;
	return 0;
}


func_750(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_21_float, var_22_float)
{
	var_23_bool = 0;
	func_923(var_23_bool);
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
	func_829();
	var_81_bool = var_3_string == 0; //@nz
	if(var_81_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_1015(var_197_string)
{
	var_198_bool = 0; var_199_float = 0; var_200_float = 0; var_201_bool = 0; var_202_float = 0; var_203_float = 0;
	lshHasAnimation(var_201_bool, var_197_string);
	var_204_bool = var_201_bool;
	if(var_204_bool != 0) {
		lshGetAnimTimes(var_197_string, var_202_float, var_203_float);
		lshPlayAnimation(var_202_float, var_203_float, (bool)0);
	} else {
		var_207_int = "Can't find lsh animation : " + var_197_string;
		Trace(var_207_int);
	}
	return 6;
	
}


func_1272(var_79_int)
{
	var_80_int = 0; var_81_int = 0;
	GetVariable("branch", var_81_int);
	var_84_bool = var_81_int == (int)0;
	if(var_84_bool != 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x507";
	}
	var_86_bool = var_81_int == (int)1;
	if(var_86_bool != 0) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
	return 2;
}


