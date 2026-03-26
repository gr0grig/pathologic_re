// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,self/1,GetVariable/2,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,HasAnimation/3
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:D_Mission5|W:ood12Littleboy1|W:ood12Littleboy2|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|A:Remove|W:branch|W:ui/NPC_Citizen3.png|W:ui/NPC_Citizen3_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x284
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xd1 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object,bool,bool params=0
// @EVENT_0: op=0x28a vars=object
// @EVENT_26: op=0x2bb vars=string
// @EVENT_6: op=0x2c3 vars=
// @EVENT_7: op=0x304 vars=int
// @PE: 0x4a,0xbb,0xd1,0x28a,0x2bb,0x2da,0x304,0x31b,0x429,0x449,0x44f,0x455,0x461

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	if((int)1 != 0) {
		func_1037();
		var_17_bool = var_13_bool == (int)16245;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_1103();
		}
		var_23_bool = var_13_bool == (int)16256;
		if(var_23_bool != 0) {
			var_24_object = Obj(); var_25_object = Obj();
			var_24_object = var_1_object;
			var_25_object = var_0_object;
			func_1103();
		}
		var_27_bool = var_12_bool == (int)16209;
		if(var_27_bool != 0) {
			var_28_bool = 0; var_29_object = Obj();
			var_29_object = var_1_object;
			func_1109(var_29_object);
			if(var_28_bool != 0) {
				var_36_object = Obj(); var_37_object = Obj();
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_1097();
				var_40_object = Obj(); var_41_object = Obj();
				var_40_object = var_1_object;
				var_41_object = var_0_object;
				func_1065();
				var_85_string = "";
				func_187(var_13_bool, "Neutral");
				@@@var_0_object:SetMessage((int)514956);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)514957, (int)16211, (int)16210);
				@@@var_0_object:AddReply((int)514975, (int)42184, (int)16230);
				@@@var_0_object:AddReply((int)514977, (int)16233, (int)16232);
				return 0;
			}
			var_112_string = "";
			func_187(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)514988);
			@@@var_0_object:ClearReplies();
			var_114_bool = 0; var_115_object = Obj();
			var_115_object = var_1_object;
			func_1121(var_115_object);
			if(var_114_bool != 0) {
				@@@var_0_object:AddReply((int)514990, (int)16246, (int)16245);
			}
			var_123_bool = 0; var_124_object = Obj();
			var_124_object = var_1_object;
			func_1121(var_124_object);
			if(var_123_bool != 0) {
				@@@var_0_object:AddReply((int)515000, (int)16257, (int)16256);
			}
			@@@var_0_object:AddReply((int)514989, (int)-1, (int)16244);
			return 0;
		}
		var_132_bool = var_12_bool == (int)16257;
		if(var_132_bool != 0) {
			var_133_string = "";
			func_187(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515001);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515002, (int)16251, (int)16258);
			@@@var_0_object:AddReply((int)515003, (int)16248, (int)16260);
			return 0;
		}
		var_142_bool = var_12_bool == (int)16246;
		if(var_142_bool != 0) {
			var_143_string = "";
			func_187(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)514991);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514992, (int)16248, (int)16247);
			@@@var_0_object:AddReply((int)514999, (int)16248, (int)16254);
			return 0;
		}
		var_152_bool = var_12_bool == (int)16248;
		if(var_152_bool != 0) {
			var_153_string = "";
			func_187(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)514993);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514994, (int)-1, (int)16249);
			@@@var_0_object:AddReply((int)514995, (int)16251, (int)16250);
			return 0;
		}
		var_162_bool = var_12_bool == (int)16251;
		if(var_162_bool != 0) {
			var_163_string = "";
			func_187(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)514996);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514997, (int)-1, (int)16252);
			@@@var_0_object:AddReply((int)514998, (int)-1, (int)16253);
			return 0;
		}
		var_172_bool = var_12_bool == (int)16233;
		if(var_172_bool != 0) {
			var_173_string = "";
			func_187(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)514978);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514979, (int)16235, (int)16234);
			@@@var_0_object:AddReply((int)514987, (int)16215, (int)16242);
			return 0;
		}
		var_182_bool = var_12_bool == (int)16235;
		if(var_182_bool != 0) {
			var_183_string = "";
			func_187(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)514980);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514981, (int)16237, (int)16236);
			@@@var_0_object:AddReply((int)514986, (int)16213, (int)16241);
			return 0;
		}
		var_192_bool = var_12_bool == (int)16237;
		if(var_192_bool != 0) {
			var_193_string = "";
			func_187(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)514982);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514983, (int)-1, (int)16238);
			@@@var_0_object:AddReply((int)514984, (int)-1, (int)16239);
			return 0;
		}
		var_202_bool = var_12_bool == (int)42184;
		if(var_202_bool != 0) {
			var_203_string = "";
			func_187(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540206);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540207, (int)42186, (int)42185);
			return 0;
		}
		var_209_bool = var_12_bool == (int)42186;
		if(var_209_bool != 0) {
			var_210_string = "";
			func_187(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540208);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540209, (int)16233, (int)42187);
			return 0;
		}
		var_216_bool = var_12_bool == (int)16211;
		if(var_216_bool != 0) {
			var_217_string = "";
			func_187(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)514958);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514959, (int)16213, (int)16212);
			@@@var_0_object:AddReply((int)514974, (int)16213, (int)16228);
			return 0;
		}
		var_226_bool = var_12_bool == (int)16213;
		if(var_226_bool != 0) {
			var_227_string = "";
			func_187(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)514960);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514961, (int)16215, (int)16214);
			@@@var_0_object:AddReply((int)514973, (int)16215, (int)16226);
			return 0;
		}
		var_236_bool = var_12_bool == (int)16215;
		if(var_236_bool != 0) {
			var_237_string = "";
			func_187(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)514962);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514963, (int)16217, (int)16216);
			@@@var_0_object:AddReply((int)514968, (int)16222, (int)16221);
			return 0;
		}
		var_246_bool = var_12_bool == (int)16222;
		if(var_246_bool != 0) {
			var_247_string = "";
			func_187(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)514969);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514970, (int)-1, (int)16223);
			@@@var_0_object:AddReply((int)514971, (int)-1, (int)16224);
			@@@var_0_object:AddReply((int)514972, (int)-1, (int)16225);
			return 0;
		}
		var_259_bool = var_12_bool == (int)16217;
		if(var_259_bool != 0) {
			var_260_string = "";
			func_187(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)514964);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514965, (int)-1, (int)16218);
			@@@var_0_object:AddReply((int)514966, (int)-1, (int)16219);
			@@@var_0_object:AddReply((int)514967, (int)-1, (int)16220);
			return 0;
		}
		var_3_string = true;
		var_271_bool = 0;
		func_1229(var_271_bool);
		if(var_271_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xd2";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_795(var_11_bool, var_12_object);
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
		func_679(var_12_string);
	}
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int;
	if(var_12_int != 0) {
		func_795(var_10_bool, var_11_bool);
	}
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_int = var_5_int;
	if(var_17_int != 0) {
		var_18_bool = 0;
		func_728(var_18_bool);
		if(var_18_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_19_object = Obj();
		func_1044(var_19_object);
		RemoveActor(var_19_object);
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_14_bool = var_12_int == (int)10;
	if(var_14_bool != 0) {
		var_15_bool = 0;
		func_757(var_10_bool, var_11_bool, var_12_int, var_15_bool);
		if(var_15_bool != 0) {
			var_28_bool = var_2_object == 0; //@nz
			if(var_28_bool != 0) {
				var_29_object = Obj();
				var_29_object = var_4_bool;
				func_1026(var_29_object);
				var_2_object = true;
			}
		} else {
			var_36_object = var_2_object;
			if(var_36_object == 0) goto Label_794;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_794:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0;
	func_661(var_11_bool, (float)300, (float)100);
	return 0;
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0;
	var_0_object = var_17_object;
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0;
	var_17_object = var_28_object;
	func_908(var_27_bool, var_28_object, (float)70.0);
	var_74_bool = var_27_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	CreateDialog(var_23_object);
	var_75_int = 0;
	func_1223(var_75_int);
	@@var_23_object:SetNPCName(var_75_int);
	var_76_int = 0;
	func_1221(var_76_int);
	@@var_23_object:SetNPCDescription(var_76_int);
	var_77_string = "";
	func_1225(var_77_string);
	@@var_23_object:SetPhoto(var_77_string);
	var_78_string = "";
	func_1227(var_78_string);
	@@var_23_object:SetPhoto2(var_78_string);
	var_79_int = 0;
	func_1204(var_79_int);
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
	var_216_bool = var_26_bool == 0; //@nz
	if(var_216_bool != 0) {
		sync();
		@@var_23_object:IsDialogEnd(var_26_bool);
		goto Label_56;
	}
	var_17_object = Obj();
	func_977();
	StopDialog(var_23_object);
	@@var_23_object:GetReturnValue((int)-1);
	var_25_int = var_16_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1026(var_29_object)
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


func_1159(var_120_bool, var_121_object, var_122_int)
{
	var_123_object = Obj(); var_124_object = Obj(); var_125_int = 0; var_126_object = Obj(); var_127_object = Obj(); var_128_int = 0;
	func_1146(Obj());
	var_129_object = var_126_object;
	@@var_126_object:Find(var_122_int, var_127_object);
	var_134_bool = var_127_object == 0; //@nz
	if(var_134_bool != 0) {
		var_136_int = "Can't find diary parent with id: " + var_122_int;
		Trace(var_136_int);
		var_120_bool = 0;
		return 6;
	}
	@@var_127_object:AddChild(var_121_object);
	SendWorldWndMessage((int)7);
	@@var_121_object:GetCategory(var_128_int);
	SetDiarySection(var_128_int);
	var_120_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_903(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
	return 2;
}


func_908(var_27_bool, var_28_object, var_29_float)
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
	func_1050(var_54_cvector, var_55_cvector);
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
	func_1229(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		HasAnimationTrack(var_47_bool, "head");
		var_72_bool = var_47_bool;
		if(var_72_bool == 0) goto Label_971;
		LookAsyncCamera("head");
	}
Label_971:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_27_bool = 1;
	return 18;
	
}


func_1037()
{
	var_15_bool = 0;
	func_1229(var_15_bool);
	if(var_15_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1044(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	self(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_661(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0;
	var_6_int = false;
	
Label_663:
	rand(var_16_float, (int)3);
	var_20_int = var_16_float + (int)3;
	Sleep(var_20_int, var_17_bool);
	var_6_int = true;
	var_21_float = 0; var_22_float = 0;
	var_12_float = var_21_float;
	var_13_float = var_22_float;
	func_730(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
	var_6_int = false;
	goto Label_663;
}
EMIT "Return(); Pop(4)";


func_1050(var_54_cvector, var_55_cvector)
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


func_795(var_2_object, var_3_string)
{
	func_890();
	KillTimer((int)10);
	var_14_object = var_2_object;
	if(var_14_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_1187(var_138_bool, var_139_int)
{
	var_140_object = Obj(); var_141_object = Obj(); var_142_object = Obj(); var_143_object = Obj();
	func_1146(Obj());
	var_144_object = var_142_object;
	@@var_142_object:Find(var_139_int, var_143_object);
	var_145_bool = var_143_object == 0; //@nz
	if(var_145_bool != 0) {
		var_138_bool = 0;
		return 4;
	}
	@@var_143_object:Remove();
	var_138_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1060(var_97_int, var_98_string)
{
	var_99_int = 0; var_100_int = 0;
	GetVariable(var_98_string, var_100_int);
	var_100_int = var_97_int;
	return 2;
}


func_679(var_5_int)
{
	var_5_int = true;
	var_15_bool = 0;
	var_15_bool = 0;
	var_16_bool = 0;
	func_903(var_16_bool);
	var_19_bool = var_16_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_20_bool = 0;
		func_728(var_20_bool);
		if(var_20_bool != 0) {
			var_15_bool = 1;
		}
	}
	if(var_15_bool != 0) {
		var_21_object = Obj();
		func_1044(var_21_object);
		RemoveActor(var_21_object);
	}
	return 0;
}


func_1065()
{
	var_109_int = 0; var_110_string = "";
	func_1060(var_109_int, "D_Mission5");
	var_112_bool = var_109_int == (int)0;
	if(var_112_bool != 0) {
		SetVariable("D_Mission5", (int)1);
		func_1133();
		var_138_bool = 0; var_139_int = 0;
		func_1187(var_138_bool, (int)30);
		var_146_bool = 0; var_147_int = 0;
		func_1187(var_146_bool, (int)3);
		var_148_bool = 0; var_149_int = 0;
		func_1187(var_148_bool, (int)4);
		var_150_bool = 0; var_151_int = 0;
		func_1187(var_150_bool, (int)5);
	}
	return 0;
}


func_809()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0;
	WaitForAnimEnd();
	var_44_bool = 0;
	func_903(var_44_bool);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 14;
	}
	func_1238((int)0);
	var_46_int = var_37_int;
	var_38_int = 0;
	
Label_823:
	var_59_bool = 0;
	var_59_bool = 0;
	var_61_bool = var_38_int < (int)5;
	if(var_61_bool != 0) {
		var_62_bool = 0;
		func_903(var_62_bool);
		if(var_62_bool != 0) {
			var_59_bool = 1;
		}
	}
	if(var_59_bool != 0) {
		irand(var_39_int, (int)3);
		var_65_bool = var_39_int == (int)0;
		if(var_65_bool != 0) {
			var_66_int = var_37_int;
			if(var_66_int == 0) goto Label_856;
			irand(var_40_int, var_37_int);
			var_68_string = ""; var_69_int = 0;
			var_40_int = var_69_int;
			func_1231(var_68_string, var_69_int);
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
						goto Label_885;
					}
					goto Label_874;
				}
				var_80_int = var_38_int;
				if(var_80_int == 0) goto Label_874;
				goto Label_885;
		}
		Label_874:
			var_71_bool = 0;
			func_888(var_71_bool);
			var_72_bool = var_71_bool == 0; //@nz
			if(var_72_bool != 0) {
				goto Label_885;
			}
			ResetAAS();
			var_38_int = var_38_int + (int)1;
			goto Label_823;

		}
	}
Label_885:
	ResetAAS();
	return 14;
	
}


func_1204(var_79_int)
{
	var_80_int = 0; var_81_int = 0;
	GetVariable("branch", var_81_int);
	var_84_bool = var_81_int == (int)0;
	if(var_84_bool != 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x4c3";
	}
	var_86_bool = var_81_int == (int)1;
	if(var_86_bool != 0) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
	return 2;
}


func_187(var_2_object, var_152_string)
{
	var_153_bool = 0;
	func_1229(var_153_bool);
	var_154_bool = var_153_bool == 0; //@nz
	if(var_154_bool != 0) {
		return 0;
	}
	var_155_bool = var_152_string == var_2_object;
	if(var_155_bool != 0) {
		return 0;
	}
	var_156_string = ""; var_157_bool = 0;
	var_152_string = var_156_string;
	var_159_bool = var_152_string == "";
	if(var_159_bool != 0) {
		var_157_bool = 0;
	} else {
		var_157_bool = 1;
	}
	func_1011(var_156_string, var_157_bool);
	var_2_object = var_152_string;
	return 0;
	
}


func_1221(var_76_int)
{
	var_76_int = 515560;
	return 0;
}


func_1223(var_75_int)
{
	var_75_int = 503345;
	return 0;
}


func_1225(var_77_string)
{
	var_77_string = "ui/NPC_Citizen3.png";
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_95_bool = 0; var_96_object = Obj();
		var_96_object = var_1_object;
		func_1109(var_96_object);
		if(var_95_bool != 0) {
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_1097();
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_1065();
			var_152_string = "";
			func_187(var_89_object, "Neutral");
			@@@var_0_object:SetMessage((int)514956);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514957, (int)16211, (int)16210);
			@@@var_0_object:AddReply((int)514975, (int)42184, (int)16230);
			@@@var_0_object:AddReply((int)514977, (int)16233, (int)16232);
		} else {
				var_197_string = "";
				func_187(var_89_object, "Neutral");
				@@@var_0_object:SetMessage((int)514988);
				@@@var_0_object:ClearReplies();
				var_199_bool = 0; var_200_object = Obj();
				var_200_object = var_1_object;
				func_1121(var_200_object);
				if(var_199_bool != 0) {
					@@@var_0_object:AddReply((int)514990, (int)16246, (int)16245);
				}
				var_208_bool = 0; var_209_object = Obj();
				var_209_object = var_1_object;
				func_1121(var_209_object);
				if(var_208_bool != 0) {
					@@@var_0_object:AddReply((int)515000, (int)16257, (int)16256);
				}
				@@@var_0_object:AddReply((int)514989, (int)-1, (int)16244);
				goto Label_157;
		}
	}
Label_157:
	var_179_bool = 0;
	func_1229(var_179_bool);
	if(var_179_bool != 0) {

	Label_161:
		lshWaitForAnimEnd();
		var_180_string = var_3_string;
		if(var_180_string != 0) {
		} else {
			var_181_string = "";
			var_181_string = var_2_object;
			func_995(var_181_string);
			goto Label_161;
	}
		PlayAnimation("all", "idle");

	Label_176:
		WaitForAnimEnd();
		var_194_string = var_3_string;
		if(var_194_string != 0) {
			goto Label_186;
		}
		PlayAnimation("all", "idle");
		goto Label_176;

	}
	goto Label_186;
	
Label_186:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_1227(var_78_string)
{
	var_78_string = "ui/NPC_Citizen3_b.png";
	return 0;
}


func_1097()
{
	SetVariable("ood12Littleboy1", (int)1);
	return 0;
}


func_1229(var_70_bool)
{
	var_70_bool = 0;
	return 0;
}


func_1103()
{
	SetVariable("ood12Littleboy2", (int)1);
	return 0;
}


func_1231(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = "";
	var_56_int = var_53_int;
	if(var_56_int != 0) {
		"idle" = "idle" + var_53_int;
	}
	var_55_string = var_52_string;
	return 2;
}


func_977()
{
	var_218_bool = 0; var_219_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_221_bool = 0;
	func_1229(var_221_bool);
	if(var_221_bool != 0) {
	} else {
		HasAnimationTrack(var_219_bool, "head");
		var_223_bool = var_219_bool;
		if(var_223_bool == 0) goto Label_994;
		UnlookAsync("head");
	}
Label_994:
	return 2;
	
}


func_1109(var_95_bool)
{
	var_97_int = 0; var_98_string = "";
	func_1060(var_97_int, "ood12Littleboy1");
	var_102_bool = var_97_int == (int)0;
	if(var_102_bool != 0) {
		var_95_bool = 1;
		return 0;
	}
	var_95_bool = 0;
	return 0;
}


func_1238(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0;
	var_49_int = 0;
	
Label_1240:
	var_52_string = ""; var_53_int = 0;
	var_49_int = var_53_int;
	func_1231(var_52_string, var_53_int);
	HasAnimation(var_50_bool, "all", var_52_string);
	var_57_bool = var_50_bool == 0; //@nz
	if(var_57_bool != 0) {
	} else {
		var_49_int = var_49_int + (int)1;
		goto Label_1240;
	}
	var_49_int = var_46_int;
	return 4;
	
}


func_728(var_18_bool)
{
	var_18_bool = 1;
	return 0;
}


func_730(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_21_float, var_22_float)
{
	var_23_bool = 0;
	func_903(var_23_bool);
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
	func_809();
	var_81_bool = var_3_string == 0; //@nz
	if(var_81_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_1121(var_199_bool)
{
	var_201_int = 0; var_202_string = "";
	func_1060(var_201_int, "ood12Littleboy2");
	var_204_bool = var_201_int == (int)0;
	if(var_204_bool != 0) {
		var_199_bool = 1;
		return 0;
	}
	var_199_bool = 0;
	return 0;
}


func_995(var_181_string)
{
	var_182_bool = 0; var_183_float = 0; var_184_float = 0; var_185_bool = 0; var_186_float = 0; var_187_float = 0;
	lshHasAnimation(var_185_bool, var_181_string);
	var_188_bool = var_185_bool;
	if(var_188_bool != 0) {
		lshGetAnimTimes(var_181_string, var_186_float, var_187_float);
		lshPlayAnimation(var_186_float, var_187_float, (bool)0);
	} else {
		var_191_int = "Can't find lsh animation : " + var_181_string;
		Trace(var_191_int);
	}
	return 6;
	
}


func_1133()
{
	var_115_object = Obj(); var_116_object = Obj();
	CreateDiaryEntry(var_116_object, (int)561, (int)0, (int)530575);
	var_120_bool = 0; var_121_object = Obj(); var_122_int = 0;
	var_116_object = var_121_object;
	func_1159(var_120_bool, var_121_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1011(var_156_string, var_157_bool)
{
	var_160_bool = 0; var_161_float = 0; var_162_float = 0; var_163_bool = 0; var_164_float = 0; var_165_float = 0;
	lshHasAnimation(var_163_bool, var_156_string);
	var_166_bool = var_163_bool;
	if(var_166_bool != 0) {
		lshGetAnimTimes(var_156_string, var_164_float, var_165_float);
		lshPlayAnimation(var_164_float, var_165_float, var_157_bool);
	} else {
		var_168_int = "Can't find lsh animation : " + var_156_string;
		Trace(var_168_int);
	}
	return 6;
	
}


func_757(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0;
	var_18_bool = var_4_bool == 0; //@ne
	if(var_18_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	var_19_float = 0; var_20_object = Obj();
	var_20_object = var_4_bool;
	func_895(var_19_float, var_20_object);
	var_17_float = sqrt(var_19_float);
	var_27_object = var_2_object;
	if(var_27_object != 0) {
		var_17_float = var_17_float - var_1_object;
	}
	var_15_bool = var_17_float < var_0_object;
	return 2;
}


func_888(var_71_bool)
{
	var_71_bool = 1;
	return 0;
}


func_1146(var_129_object)
{
	var_130_object = Obj(); var_131_object = Obj();
	GetDiaryRoot(var_131_object);
	var_132_bool = var_131_object == 0; //@nz
	if(var_132_bool != 0) {
		Trace("Can't retrieve diary root");
		var_129_object = 0;
		return 2;
	}
	var_131_object = var_129_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_890()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_895(var_19_float, var_20_object)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	GetPosition(var_24_cvector);
	@@var_20_object:GetPosition(var_25_cvector);
	var_26_cvector = var_25_cvector - var_24_cvector;
	var_19_float = var_26_cvector | var_26_cvector;
	return 6;
}


