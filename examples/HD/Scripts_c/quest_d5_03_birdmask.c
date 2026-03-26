// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,self/1,GetVariable/2,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,SendWorldWndMessage/1,CreateFloatVector/1,FindActor/2,Trigger/2,GetGameTime/1,TriggerWorld/2,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:quest_d5_03|W:completed|W:cleanup|W:restore|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetPosition|A:GetEyesHeight|W:head|W:Can't find lsh animation : |A:add|W:money|W:Money|W:reputation|W:fail|W:money 60000 removed|W:playsound|W:givemoney|W:ood5Birdmask1|W:d5q03BirdmaskBringMoneySelf|A:FindMark|A:Remove|W:d5q03BirdmaskGotoMladVlad|W:d5q03BirdmaskGotoViktor|W:d5q03MladVladSavePrisonersSelf|W:d5q03SavePrisoners|W:d5q03ViktorSavePrisonersSelf|A:SetReturnValue|W:d5q03|W:pt_map_uprava_prison|A:AddMark|W:pt_map_mladvlad|W:pt_map_viktor|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:branch|W:ui/NPC_bmask.png|W:ui/NPC_bmask_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x255
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xdf vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x245 vars=object
// @EVENT_26: op=0x259 vars=string
// @EVENT_6: op=0x275 vars=
// @PE: 0x4a,0xc9,0xdf,0x245,0x33d,0x36c,0x3aa,0x3b4,0x3be,0x3c4,0x42b,0x432,0x43c,0x448,0x454,0x460,0x46c

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_806();
		var_11_bool = var_7_bool == (int)13729;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_970(var_13_object);
			var_61_object = Obj(); var_62_object = Obj();
			var_61_object = var_1_object;
			var_62_object = var_0_object;
			func_958();
			var_65_object = Obj(); var_66_object = Obj();
			var_65_object = var_1_object;
			var_66_object = var_0_object;
			func_948(var_66_object);
		}
		var_87_bool = var_7_bool == (int)13730;
		if(var_87_bool != 0) {
			var_88_object = Obj(); var_89_object = Obj();
			var_88_object = var_1_object;
			var_89_object = var_0_object;
			func_1026();
		}
		var_121_bool = var_7_bool == (int)16739;
		if(var_121_bool != 0) {
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_1067(var_123_object);
		}
		var_163_bool = var_7_bool == (int)16737;
		if(var_163_bool != 0) {
			var_164_object = Obj(); var_165_object = Obj();
			var_164_object = var_1_object;
			var_165_object = var_0_object;
			func_938();
		}
		var_181_bool = var_7_bool == (int)13735;
		if(var_181_bool != 0) {
			var_182_object = Obj(); var_183_object = Obj();
			var_182_object = var_1_object;
			var_183_object = var_0_object;
			func_958();
			var_184_object = Obj(); var_185_object = Obj();
			var_184_object = var_1_object;
			var_185_object = var_0_object;
			func_970(var_185_object);
			var_186_object = Obj(); var_187_object = Obj();
			var_186_object = var_1_object;
			var_187_object = var_0_object;
			func_948(var_187_object);
		}
		var_189_bool = var_7_bool == (int)13736;
		if(var_189_bool != 0) {
			var_190_object = Obj(); var_191_object = Obj();
			var_190_object = var_1_object;
			var_191_object = var_0_object;
			func_964();
		}
		var_195_bool = var_6_int == (int)13720;
		if(var_195_bool != 0) {
			var_196_bool = 0; var_197_object = Obj();
			var_197_object = var_1_object;
			func_1096(var_197_object);
			if(var_196_bool != 0) {
				var_204_string = "";
				func_201(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)512551);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)512552, (int)13722, (int)13721);
				@@@var_0_object:AddReply((int)515690, (int)-1, (int)16737);
				return 0;
			}
			var_228_string = "";
			func_201(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512562);
			@@@var_0_object:ClearReplies();
			var_230_bool = 0;
			var_230_bool = 0;
			var_231_bool = 0; var_232_object = Obj();
			var_232_object = var_1_object;
			func_1132(var_232_object);
			if(var_231_bool != 0) {
				var_237_bool = 0; var_238_object = Obj();
				var_238_object = var_1_object;
				func_1074(var_237_bool, var_238_object);
				if(var_237_bool != 0) {
					var_230_bool = 1;
				}
			}
			if(var_230_bool != 0) {
				@@@var_0_object:AddReply((int)512563, (int)13734, (int)13732);
			}
			var_249_bool = 0;
			var_249_bool = 0;
			var_250_bool = 0;
			var_250_bool = 0;
			var_251_bool = 0; var_252_object = Obj();
			var_252_object = var_1_object;
			func_1084(var_252_object);
			if(var_251_bool != 0) {
				var_257_bool = 0; var_258_object = Obj();
				var_258_object = var_1_object;
				func_1108(var_258_object);
				var_263_bool = var_257_bool == 0; //@nz
				if(var_263_bool != 0) {
					var_250_bool = 1;
				}
			}
			if(var_250_bool != 0) {
				var_264_bool = 0; var_265_object = Obj();
				var_265_object = var_1_object;
				func_1120(var_265_object);
				var_270_bool = var_264_bool == 0; //@nz
				if(var_270_bool != 0) {
					var_249_bool = 1;
				}
			}
			if(var_249_bool != 0) {
				@@@var_0_object:AddReply((int)512567, (int)13737, (int)13736);
			}
			@@@var_0_object:AddReply((int)512564, (int)-1, (int)13733);
			return 0;
		}
		var_278_bool = var_6_int == (int)13737;
		if(var_278_bool != 0) {
			var_279_string = "";
			func_201(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512568);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512609, (int)13785, (int)13784);
			@@@var_0_object:AddReply((int)515693, (int)13785, (int)16740);
			return 0;
		}
		var_288_bool = var_6_int == (int)13785;
		if(var_288_bool != 0) {
			var_289_string = "";
			func_201(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512610);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512569, (int)-1, (int)13738);
			return 0;
		}
		var_295_bool = var_6_int == (int)13734;
		if(var_295_bool != 0) {
			var_296_string = "";
			func_201(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512565);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512566, (int)-1, (int)13735);
			return 0;
		}
		var_302_bool = var_6_int == (int)13722;
		if(var_302_bool != 0) {
			var_303_string = "";
			func_201(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512553);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512554, (int)13724, (int)13723);
			@@@var_0_object:AddReply((int)512604, (int)13778, (int)13777);
			return 0;
		}
		var_312_bool = var_6_int == (int)13778;
		if(var_312_bool != 0) {
			var_313_string = "";
			func_201(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512605);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512606, (int)13724, (int)13779);
			@@@var_0_object:AddReply((int)515691, (int)13724, (int)16738);
			return 0;
		}
		var_322_bool = var_6_int == (int)13724;
		if(var_322_bool != 0) {
			var_323_string = "";
			func_201(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512555);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512556, (int)13726, (int)13725);
			@@@var_0_object:AddReply((int)512607, (int)13726, (int)13781);
			return 0;
		}
		var_332_bool = var_6_int == (int)13726;
		if(var_332_bool != 0) {
			var_333_string = "";
			func_201(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512557);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512558, (int)13728, (int)13727);
			return 0;
		}
		var_339_bool = var_6_int == (int)13728;
		if(var_339_bool != 0) {
			var_340_string = "";
			func_201(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512559);
			@@@var_0_object:ClearReplies();
			var_342_bool = 0; var_343_object = Obj();
			var_343_object = var_1_object;
			func_1074(var_342_bool, var_343_object);
			if(var_342_bool != 0) {
				@@@var_0_object:AddReply((int)512560, (int)-1, (int)13729);
			}
			@@@var_0_object:AddReply((int)512561, (int)-1, (int)13730);
			@@@var_0_object:AddReply((int)515692, (int)-1, (int)16739);
			return 0;
		}
		var_3_string = true;
		var_353_bool = 0;
		func_1277(var_353_bool);
		if(var_353_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xe0";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj();
	var_6_object = var_8_object;
	TaskCall(0);
	func_0(var_9_object, var_7_int, var_8_object);
	TaskReturn();
	var_195_bool = var_9_object == (int)1;
	if(var_195_bool != 0) {
		var_196_bool = 0; var_197_string = ""; var_198_string = "";
		func_921(var_196_bool, "quest_d5_03", "completed");
	}
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
			func_645(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_813(var_14_object);
			RemoveActor(var_14_object);
		}
	} else {
		var_18_bool = var_6_string == "restore";
		if(var_18_bool == 0) goto Label_628;
		var_0_object = false;
	}
Label_628:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_645(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_813(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_597:
	Hold();
	goto Label_597;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0;
	var_8_object = var_19_object;
	func_688(var_18_bool, var_19_object, (float)130.0);
	var_65_bool = var_18_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_66_int = 0;
	func_1271(var_66_int);
	@@var_14_object:SetNPCName(var_66_int);
	var_67_int = 0;
	func_1269(var_67_int);
	@@var_14_object:SetNPCDescription(var_67_int);
	var_68_string = "";
	func_1273(var_68_string);
	@@var_14_object:SetPhoto(var_68_string);
	var_69_string = "";
	func_1275(var_69_string);
	@@var_14_object:SetPhoto2(var_69_string);
	var_70_int = 0;
	func_1252(var_70_int);
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
	var_185_bool = var_17_bool == 0; //@nz
	if(var_185_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_56;
	}
	var_8_object = Obj();
	func_757();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1026()
{
	var_90_object = Obj(); var_91_object = Obj();
	SetVariable("d5q03", (int)2);
	func_1235(Obj());
	var_94_object = var_91_object;
	var_99_float = 0;
	func_933(var_99_float);
	@@var_91_object:AddMark("d5q03BirdmaskBringMoneySelf", "pt_map_uprava_prison", (int)0, (int)515372, var_99_float);
	var_106_float = 0;
	func_933(var_106_float);
	@@var_91_object:AddMark("d5q03BirdmaskGotoMladVlad", "pt_map_mladvlad", (int)0, (int)515374, var_106_float);
	var_111_float = 0;
	func_933(var_111_float);
	@@var_91_object:AddMark("d5q03BirdmaskGotoViktor", "pt_map_viktor", (int)0, (int)515373, var_111_float);
	func_1168();
	return 2;
}
EMIT "Stack[-1] = 0";


func_1155()
{
	var_166_object = Obj(); var_167_object = Obj();
	CreateDiaryEntry(var_167_object, (int)714, (int)2, (int)536322);
	var_171_bool = 0; var_172_object = Obj(); var_173_int = 0;
	var_167_object = var_172_object;
	func_1207(var_171_bool, var_172_object, (int)154);
	return 2;
}
EMIT "Stack[-1] = 0";


func_645(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_775(var_120_string)
{
	var_121_bool = 0; var_122_float = 0; var_123_float = 0; var_124_bool = 0; var_125_float = 0; var_126_float = 0;
	lshHasAnimation(var_124_bool, var_120_string);
	var_127_bool = var_124_bool;
	if(var_127_bool != 0) {
		lshGetAnimTimes(var_120_string, var_125_float, var_126_float);
		lshPlayAnimation(var_125_float, var_126_float, (bool)0);
	} else {
		var_130_int = "Can't find lsh animation : " + var_120_string;
		Trace(var_130_int);
	}
	return 6;
	
}


func_647(var_143_bool, var_144_object, var_145_string)
{
	var_146_bool = 0; var_147_bool = 0;
	var_150_bool = IsFuncExist(var_144_object, "HasProperty", (int)2);
	var_151_bool = var_150_bool == 0; //@nz
	if(var_151_bool != 0) {
		var_143_bool = 0;
		return 2;
	}
	@@var_144_object:HasProperty(var_145_string, var_147_bool);
	var_147_bool = var_143_bool;
	return 2;
}


func_911(var_131_float)
{
	var_132_object = Obj(); var_133_object = Obj();
	CreateFloatVector(var_133_object);
	@@var_133_object:add(var_131_float);
	SendWorldWndMessage((int)16, var_133_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1168()
{
	var_112_object = Obj(); var_113_object = Obj();
	CreateDiaryEntry(var_113_object, (int)156, (int)2, (int)515367);
	var_117_bool = 0; var_118_object = Obj(); var_119_int = 0;
	var_113_object = var_118_object;
	func_1207(var_117_bool, var_118_object, (int)154);
	return 2;
}
EMIT "Stack[-1] = 0";


func_659(var_135_bool, var_136_object, var_137_string, var_138_float, var_139_float, var_140_float)
{
	var_141_float = 0; var_142_float = 0;
	var_143_bool = 0; var_144_object = Obj(); var_145_string = "";
	var_136_object = var_144_object;
	var_137_string = var_145_string;
	func_647(var_143_bool, var_144_object, var_145_string);
	var_152_bool = var_143_bool == 0; //@nz
	if(var_152_bool != 0) {
		var_135_bool = 0;
		return 2;
	}
	@@var_136_object:GetProperty(var_137_string, var_142_float);
	var_153_float = 0; var_154_float = 0; var_155_float = 0; var_156_float = 0;
	var_154_float = var_142_float + var_138_float;
	var_139_float = var_155_float;
	var_140_float = var_156_float;
	func_829(var_153_float, var_154_float, var_155_float, var_156_float);
	@@var_136_object:SetProperty(var_137_string, var_153_float);
	var_135_bool = 1;
	return 2;
}


func_791(var_98_string, var_99_bool)
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


func_921(var_196_bool, var_197_string, var_198_string)
{
	var_199_object = Obj(); var_200_object = Obj();
	FindActor(var_200_object, var_197_string);
	var_201_bool = var_200_object == 0; //@ne
	if(var_201_bool != 0) {
		var_196_bool = 0;
		return 2;
	}
	Trigger(var_200_object, var_198_string);
	var_196_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1181()
{
	var_37_object = Obj(); var_38_object = Obj();
	CreateDiaryEntry(var_38_object, (int)157, (int)2, (int)515368);
	var_42_bool = 0; var_43_object = Obj(); var_44_int = 0;
	var_38_object = var_43_object;
	func_1207(var_42_bool, var_43_object, (int)154);
	return 2;
}
EMIT "Stack[-1] = 0";


func_933(var_99_float)
{
	var_100_float = 0; var_101_float = 0;
	GetGameTime(var_101_float);
	var_101_float = var_99_float;
	return 2;
}


func_806()
{
	var_9_bool = 0;
	func_1277(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_681(var_72_object, var_73_string, var_74_int)
{
	var_75_int = 0; var_76_int = 0;
	@@var_72_object:GetProperty(var_73_string, var_76_int);
	var_77_int = var_76_int + var_74_int;
	@@var_72_object:SetProperty(var_73_string, var_77_int);
	return 2;
}


func_938()
{
	func_1155();
	var_174_bool = 0; var_175_string = ""; var_176_string = "";
	func_921(var_174_bool, "quest_d5_03", "fail");
	return 0;
}


func_1067(var_122_object)
{
	var_124_bool = 0; var_125_object = Obj(); var_126_float = 0;
	var_122_object = var_125_object;
	func_876(var_124_bool, var_125_object, (float)-0.30000001192092896);
	return 0;
}


func_1194(var_51_object)
{
	var_52_object = Obj(); var_53_object = Obj();
	GetDiaryRoot(var_53_object);
	var_54_bool = var_53_object == 0; //@nz
	if(var_54_bool != 0) {
		Trace("Can't retrieve diary root");
		var_51_object = 0;
		return 2;
	}
	var_53_object = var_51_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_813(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_688(var_18_bool, var_19_object, var_20_float)
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
	func_819(var_45_cvector, var_46_cvector);
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
	func_1277(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		HasAnimationTrack(var_38_bool, "head");
		var_63_bool = var_38_bool;
		if(var_63_bool == 0) goto Label_751;
		LookAsyncCamera("head");
	}
Label_751:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 18;
	
}


func_1074(var_145_bool, var_146_object)
{
	var_147_bool = 0; var_148_object = Obj();
	var_146_object = var_148_object;
	func_1144(var_147_bool, var_148_object);
	if(var_147_bool != 0) {
		var_145_bool = 1;
		return 0;
	}
	var_145_bool = 0;
	return 0;
}


func_819(var_45_cvector, var_46_cvector)
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


func_948(var_65_object)
{
	Trace("money 60000 removed");
	var_68_object = Obj(); var_69_int = 0;
	var_65_object = var_68_object;
	func_857(var_68_object, (int)-60000);
	return 0;
}


func_1207(var_42_bool, var_43_object, var_44_int)
{
	var_45_object = Obj(); var_46_object = Obj(); var_47_int = 0; var_48_object = Obj(); var_49_object = Obj(); var_50_int = 0;
	func_1194(Obj());
	var_51_object = var_48_object;
	@@var_48_object:Find(var_44_int, var_49_object);
	var_56_bool = var_49_object == 0; //@nz
	if(var_56_bool != 0) {
		var_58_int = "Can't find diary parent with id: " + var_44_int;
		Trace(var_58_int);
		var_42_bool = 0;
		return 6;
	}
	@@var_49_object:AddChild(var_43_object);
	SendWorldWndMessage((int)7);
	@@var_43_object:GetCategory(var_50_int);
	SetDiarySection(var_50_int);
	var_42_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1084(var_159_bool)
{
	var_161_int = 0; var_162_string = "";
	func_840(var_161_int, "ood5Birdmask1");
	var_164_bool = var_161_int == (int)0;
	if(var_164_bool != 0) {
		var_159_bool = 1;
		return 0;
	}
	var_159_bool = 0;
	return 0;
}


func_829(var_153_float, var_154_float, var_155_float, var_156_float)
{
	var_157_bool = var_154_float < var_155_float;
	if(var_157_bool != 0) {
		var_155_float = var_153_float;
		return 0;
	}
	var_158_bool = var_154_float > var_156_float;
	if(var_158_bool != 0) {
		var_156_float = var_153_float;
		return 0;
	}
	var_154_float = var_153_float;
	return 0;
}


func_958()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_964()
{
	SetVariable("ood5Birdmask1", (int)1);
	return 0;
}


func_1096(var_86_bool)
{
	var_88_int = 0; var_89_string = "";
	func_840(var_88_int, "d5q03");
	var_93_bool = var_88_int == (int)1;
	if(var_93_bool != 0) {
		var_86_bool = 1;
		return 0;
	}
	var_86_bool = 0;
	return 0;
}


func_201(var_2_object, var_94_string)
{
	var_95_bool = 0;
	func_1277(var_95_bool);
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
	func_791(var_98_string, var_99_bool);
	var_2_object = var_94_string;
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
		func_1096(var_87_object);
		if(var_86_bool != 0) {
			var_94_string = "";
			func_201(var_80_object, "Neutral");
			@@@var_0_object:SetMessage((int)512551);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512552, (int)13722, (int)13721);
			@@@var_0_object:AddReply((int)515690, (int)-1, (int)16737);
		} else {
				var_136_string = "";
				func_201(var_80_object, "Neutral");
				@@@var_0_object:SetMessage((int)512562);
				@@@var_0_object:ClearReplies();
				var_138_bool = 0;
				var_138_bool = 0;
				var_139_bool = 0; var_140_object = Obj();
				var_140_object = var_1_object;
				func_1132(var_140_object);
				if(var_139_bool != 0) {
					var_145_bool = 0; var_146_object = Obj();
					var_146_object = var_1_object;
					func_1074(var_145_bool, var_146_object);
					if(var_145_bool != 0) {
						var_138_bool = 1;
					}
				}
				if(var_138_bool != 0) {
					@@@var_0_object:AddReply((int)512563, (int)13734, (int)13732);
				}
				var_157_bool = 0;
				var_157_bool = 0;
				var_158_bool = 0;
				var_158_bool = 0;
				var_159_bool = 0; var_160_object = Obj();
				var_160_object = var_1_object;
				func_1084(var_160_object);
				if(var_159_bool != 0) {
					var_165_bool = 0; var_166_object = Obj();
					var_166_object = var_1_object;
					func_1108(var_166_object);
					var_171_bool = var_165_bool == 0; //@nz
					if(var_171_bool != 0) {
						var_158_bool = 1;
					}
				}
				if(var_158_bool != 0) {
					var_172_bool = 0; var_173_object = Obj();
					var_173_object = var_1_object;
					func_1120(var_173_object);
					var_178_bool = var_172_bool == 0; //@nz
					if(var_178_bool != 0) {
						var_157_bool = 1;
					}
				}
				if(var_157_bool != 0) {
					@@@var_0_object:AddReply((int)512567, (int)13737, (int)13736);
				}
				@@@var_0_object:AddReply((int)512564, (int)-1, (int)13733);
				goto Label_171;
		}
	}
Label_171:
	var_118_bool = 0;
	func_1277(var_118_bool);
	if(var_118_bool != 0) {

	Label_175:
		lshWaitForAnimEnd();
		var_119_string = var_3_string;
		if(var_119_string != 0) {
		} else {
			var_120_string = "";
			var_120_string = var_2_object;
			func_775(var_120_string);
			goto Label_175;
	}
		PlayAnimation("all", "idle");

	Label_190:
		WaitForAnimEnd();
		var_133_string = var_3_string;
		if(var_133_string != 0) {
			goto Label_200;
		}
		PlayAnimation("all", "idle");
		goto Label_190;

	}
	goto Label_200;
	
Label_200:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_970(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj(); var_17_object = Obj();
	func_1235(Obj());
	var_18_object = var_16_object;
	@@var_16_object:FindMark(var_17_object, "d5q03BirdmaskBringMoneySelf");
	var_26_object = var_17_object;
	if(var_26_object != 0) {
		@@var_17_object:Remove();
	}
	@@var_16_object:FindMark(var_17_object, "d5q03BirdmaskGotoMladVlad");
	var_28_object = var_17_object;
	if(var_28_object != 0) {
		@@var_17_object:Remove();
	}
	@@var_16_object:FindMark(var_17_object, "d5q03BirdmaskGotoViktor");
	var_30_object = var_17_object;
	if(var_30_object != 0) {
		@@var_17_object:Remove();
	}
	@@var_16_object:FindMark(var_17_object, "d5q03MladVladSavePrisonersSelf");
	var_32_object = var_17_object;
	if(var_32_object != 0) {
		@@var_17_object:Remove();
	}
	@@var_16_object:FindMark(var_17_object, "d5q03SavePrisoners");
	var_34_object = var_17_object;
	if(var_34_object != 0) {
		@@var_17_object:Remove();
	}
	@@var_16_object:FindMark(var_17_object, "d5q03ViktorSavePrisonersSelf");
	var_36_object = var_17_object;
	if(var_36_object != 0) {
		@@var_17_object:Remove();
	}
	func_1181();
	@@var_13_object:SetReturnValue((int)1);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_840(var_88_int, var_89_string)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable(var_89_string, var_91_int);
	var_91_int = var_88_int;
	return 2;
}


func_845(var_81_int, var_82_int)
{
	var_83_object = Obj(); var_84_object = Obj();
	CreateIntVector(var_84_object);
	@@var_84_object:add(var_81_int);
	@@var_84_object:add(var_82_int);
	SendWorldWndMessage((int)3, var_84_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1235(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj();
	GetMainOutdoorScene(var_21_object);
	var_23_bool = var_21_object == 0; //@ne
	if(var_23_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_22_object = 0;
		var_22_object = var_18_object;
		return 4;
	}
	@@var_21_object:GetMap(var_22_object);
	var_22_object = var_18_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1108(var_165_bool)
{
	var_167_int = 0; var_168_string = "";
	func_840(var_167_int, "d5q03");
	var_170_bool = var_167_int == (int)1000;
	if(var_170_bool != 0) {
		var_165_bool = 1;
		return 0;
	}
	var_165_bool = 0;
	return 0;
}


func_857(var_68_object, var_69_int)
{
	var_70_int = 0; var_71_int = 0;
	var_72_object = Obj(); var_73_string = ""; var_74_int = 0;
	var_68_object = var_72_object;
	var_69_int = var_74_int;
	func_681(var_72_object, "money", var_74_int);
	var_79_bool = var_69_int > (int)0;
	if(var_79_bool != 0) {
		GetInvItemByName(var_71_int, "Money");
		var_81_int = 0; var_82_int = 0;
		var_71_int = var_81_int;
		var_69_int = var_82_int;
		func_845(var_81_int, var_82_int);
	}
	return 2;
}


func_1120(var_172_bool)
{
	var_174_int = 0; var_175_string = "";
	func_840(var_174_int, "d5q03");
	var_177_bool = var_174_int == (int)-1;
	if(var_177_bool != 0) {
		var_172_bool = 1;
		return 0;
	}
	var_172_bool = 0;
	return 0;
}


func_1252(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("branch", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x4f3";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
	return 2;
}


func_1132(var_139_bool)
{
	var_141_int = 0; var_142_string = "";
	func_840(var_141_int, "d5q03");
	var_144_bool = var_141_int == (int)2;
	if(var_144_bool != 0) {
		var_139_bool = 1;
		return 0;
	}
	var_139_bool = 0;
	return 0;
}


func_876(var_124_bool, var_125_object, var_126_float)
{
	var_127_bool = var_125_object == 0; //@nz
	if(var_127_bool != 0) {
		var_124_bool = 0;
		return 0;
	}
	var_129_bool = var_126_float > (int)0;
	if(var_129_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_160_bool = var_126_float < (int)0;
		if(var_160_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_897;
		}
		var_124_bool = 0;
		return 0;
	}
Label_897:
	var_131_float = 0;
	var_126_float = var_131_float;
	func_911(var_131_float);
	var_135_bool = 0; var_136_object = Obj(); var_137_string = ""; var_138_float = 0; var_139_float = 0; var_140_float = 0;
	var_125_object = var_136_object;
	var_126_float = var_138_float;
	func_659(var_135_bool, var_136_object, "reputation", var_138_float, (float)0, (float)1);
	var_124_bool = 1;
	return 0;
	
}


func_1269(var_67_int)
{
	var_67_int = 515571;
	return 0;
}


func_757()
{
	var_187_bool = 0; var_188_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_190_bool = 0;
	func_1277(var_190_bool);
	if(var_190_bool != 0) {
	} else {
		HasAnimationTrack(var_188_bool, "head");
		var_192_bool = var_188_bool;
		if(var_192_bool == 0) goto Label_774;
		UnlookAsync("head");
	}
Label_774:
	return 2;
	
}


func_1271(var_66_int)
{
	var_66_int = 504029;
	return 0;
}


func_1144(var_147_bool, var_148_object)
{
	var_149_float = 0; var_150_float = 0;
	@@var_148_object:GetProperty("money", var_150_float);
	var_153_bool = var_150_float >= (int)60000;
	if(var_153_bool != 0) {
		var_147_bool = 1;
		return 2;
	}
	var_147_bool = 0;
	return 2;
}


func_1273(var_68_string)
{
	var_68_string = "ui/NPC_bmask.png";
	return 0;
}


func_1275(var_69_string)
{
	var_69_string = "ui/NPC_bmask_b.png";
	return 0;
}


func_1277(var_61_bool)
{
	var_61_bool = 0;
	return 0;
}


