// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,IsLoaded/1,RemoveActor/1,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,GetInvItemProperty/3,CreateInvItem/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Staring|A:SetMessage|A:ClearReplies|A:AddReply|W:Angry|W:Mysterious|W:all|W:idle|W:Neutral|W:cleanup|W:restore|W:player|A:GetPosition|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|W:m|W:Can't find lsh animation : |A:add|W:money|W:Money|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:playsound|W:giveitem|W:oob2MariaKabak1|W:b2q03_1|W:quest_b2_03|W:fail|W:recipe5 is given|W:recipe5|W:money 5000 is given|W:b2q03|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:ui/NPC_Maria.png|W:ui/NPC_Maria_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x24d
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xf6 vars=int,int
// @TASK_2: vars=cvector,bool params=0
// @EVENT_26: op=0x251 vars=string
// @EVENT_6: op=0x265 vars=
// @EVENT_5: op=0x272 vars=
// @EVENT_7: op=0x2bb vars=int
// @EVENT_45: op=0x2fd vars=bool
// @EVENT_0: op=0x309 vars=object
// @PE: 0x51,0xe0,0xf6,0x245,0x24d,0x272,0x2bb,0x2e1,0x2fd,0x530,0x536,0x53c,0x548,0x556,0x561,0x56b,0x577,0x583,0x58f

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	if((int)1 != 0) {
		func_1192();
		var_12_bool = var_8_bool == (int)32390;
		if(var_12_bool != 0) {
			var_13_object = Obj(); var_14_object = Obj();
			var_13_object = var_1_object;
			var_14_object = var_0_object;
			func_1340();
		}
		var_49_bool = var_8_bool == (int)32396;
		if(var_49_bool != 0) {
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_object;
			func_1340();
		}
		var_53_bool = var_8_bool == (int)32574;
		if(var_53_bool != 0) {
			var_54_object = Obj(); var_55_object = Obj();
			var_54_object = var_1_object;
			var_55_object = var_0_object;
			func_1340();
		}
		var_57_bool = var_8_bool == (int)32398;
		if(var_57_bool != 0) {
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_object;
			func_1352();
			var_76_object = Obj(); var_77_object = Obj();
			var_76_object = var_1_object;
			var_77_object = var_0_object;
			func_1377(var_77_object);
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_1366(var_98_object);
			var_118_object = Obj(); var_119_object = Obj();
			var_118_object = var_1_object;
			var_119_object = var_0_object;
			func_1328();
		}
		var_123_bool = var_8_bool == (int)32573;
		if(var_123_bool != 0) {
			var_124_object = Obj(); var_125_object = Obj();
			var_124_object = var_1_object;
			var_125_object = var_0_object;
			func_1352();
			var_126_object = Obj(); var_127_object = Obj();
			var_126_object = var_1_object;
			var_127_object = var_0_object;
			func_1377(var_127_object);
			var_128_object = Obj(); var_129_object = Obj();
			var_128_object = var_1_object;
			var_129_object = var_0_object;
			func_1366(var_129_object);
			var_130_object = Obj(); var_131_object = Obj();
			var_130_object = var_1_object;
			var_131_object = var_0_object;
			func_1328();
		}
		var_133_bool = var_7_cvector == (int)32388;
		if(var_133_bool != 0) {
			var_134_bool = 0;
			var_134_bool = 0;
			var_135_bool = 0; var_136_object = Obj();
			var_136_object = var_1_object;
			func_1399(var_136_object);
			if(var_135_bool != 0) {
				var_143_bool = 0; var_144_object = Obj();
				var_144_object = var_1_object;
				func_1387(var_144_object);
				var_149_bool = var_143_bool == 0; //@nz
				if(var_149_bool != 0) {
					var_134_bool = 1;
				}
			}
			if(var_134_bool != 0) {
				var_150_object = Obj(); var_151_object = Obj();
				var_150_object = var_1_object;
				var_151_object = var_0_object;
				func_1334();
				var_154_string = "";
				func_224(var_8_bool, "Staring");
				@@@var_0_object:SetMessage((int)531063);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)531064, (int)32569, (int)32389);
				@@@var_0_object:AddReply((int)531269, (int)32569, (int)32581);
				return 0;
			}
			var_178_bool = 0; var_179_object = Obj();
			var_179_object = var_1_object;
			func_1387(var_179_object);
			if(var_178_bool != 0) {
				var_180_string = "";
				func_224(var_8_bool, "Angry");
				@@@var_0_object:SetMessage((int)531077);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)531078, (int)-1, (int)32400);
				@@@var_0_object:AddReply((int)531255, (int)-1, (int)32571);
				return 0;
			}
			var_188_string = "";
			func_224(var_8_bool, "Mysterious");
			@@@var_0_object:SetMessage((int)531066);
			@@@var_0_object:ClearReplies();
			var_190_bool = 0; var_191_object = Obj();
			var_191_object = var_1_object;
			func_1411(var_191_object);
			if(var_190_bool != 0) {
				@@@var_0_object:AddReply((int)531067, (int)32395, (int)32392);
			}
			var_199_bool = 0; var_200_object = Obj();
			var_200_object = var_1_object;
			func_1423(var_200_object);
			if(var_199_bool != 0) {
				@@@var_0_object:AddReply((int)531068, (int)32397, (int)32393);
			}
			@@@var_0_object:AddReply((int)531069, (int)-1, (int)32394);
			@@@var_0_object:AddReply((int)531256, (int)-1, (int)32572);
			return 0;
		}
		var_215_bool = var_7_cvector == (int)32397;
		if(var_215_bool != 0) {
			var_216_string = "";
			func_224(var_8_bool, "Staring");
			@@@var_0_object:SetMessage((int)531072);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531073, (int)-1, (int)32398);
			@@@var_0_object:AddReply((int)531257, (int)-1, (int)32573);
			return 0;
		}
		var_225_bool = var_7_cvector == (int)32395;
		if(var_225_bool != 0) {
			var_226_string = "";
			func_224(var_8_bool, "Staring");
			@@@var_0_object:SetMessage((int)531070);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531071, (int)-1, (int)32396);
			@@@var_0_object:AddReply((int)531258, (int)-1, (int)32574);
			return 0;
		}
		var_235_bool = var_7_cvector == (int)32569;
		if(var_235_bool != 0) {
			var_236_string = "";
			func_224(var_8_bool, "Staring");
			@@@var_0_object:SetMessage((int)531253);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531254, (int)32576, (int)32570);
			@@@var_0_object:AddReply((int)531270, (int)-1, (int)32583);
			return 0;
		}
		var_245_bool = var_7_cvector == (int)32576;
		if(var_245_bool != 0) {
			var_246_string = "";
			func_224(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)531264);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531265, (int)32578, (int)32577);
			@@@var_0_object:AddReply((int)531271, (int)-1, (int)32584);
			return 0;
		}
		var_255_bool = var_7_cvector == (int)32578;
		if(var_255_bool != 0) {
			var_256_string = "";
			func_224(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)531266);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531267, (int)32580, (int)32579);
			@@@var_0_object:AddReply((int)531272, (int)32580, (int)32585);
			return 0;
		}
		var_265_bool = var_7_cvector == (int)32580;
		if(var_265_bool != 0) {
			var_266_string = "";
			func_224(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)531268);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531065, (int)-1, (int)32390);
			@@@var_0_object:AddReply((int)531273, (int)-1, (int)32587);
			return 0;
		}
		var_3_string = true;
		var_274_bool = 0;
		func_1540(var_274_bool);
		if(var_274_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xf7";
	
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
			func_1199(var_13_object);
			RemoveActor(var_13_object);
		}
	} else {
		var_17_bool = var_7_string == "restore";
		if(var_17_bool == 0) goto Label_612;
		var_1_object = false;
	}
Label_612:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object;
	if(var_7_object != 0) {
		var_8_object = Obj();
		func_1199(var_8_object);
		RemoveActor(var_8_object);
		Hold();
	}
	func_737();
	return 0;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_752();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_9_bool = var_7_int == (int)10;
	if(var_9_bool != 0) {
		func_695();
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = 0;
		func_916(var_12_bool);
		if(var_12_bool != 0) {
			var_15_bool = 0;
			func_664(var_15_bool);
			if(var_15_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_32_bool = 0;
			func_644(var_32_bool);
			if(var_32_bool != 0) {
				var_51_bool = 0; var_52_object = Obj();
				func_1199(Obj());
				var_53_object = var_52_object;
				func_1066(var_51_bool, var_52_object);
			}
		} else {
			func_659(var_7_int);
			func_686();
		}
	}
	return 0;
	
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool;
	if(var_8_bool != 0) {
		func_686();
	} else {
		var_14_string = "";
		func_1146("Neutral");
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
		func_877();
		var_11_bool = 0; var_12_object = Obj();
		var_7_object = var_12_object;
		func_907(var_11_bool, var_12_object);
		EventEnable(0);
		var_25_object = Obj();
		var_7_object = var_25_object;
		func_581(var_25_object);
		var_307_string = "";
		func_1146("Neutral");
		func_695();
		func_686();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_630(var_6_bool);
	return 0;
}


func_1536(var_87_string)
{
	var_87_string = "ui/NPC_Maria.png";
	return 0;
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0;
	var_0_object = var_27_object;
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0;
	var_27_object = var_38_object;
	func_921(var_37_bool, var_38_object, (float)70.0);
	var_84_bool = var_37_bool == 0; //@nz
	if(var_84_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	CreateDialog(var_33_object);
	var_85_int = 0;
	func_1534(var_85_int);
	@@var_33_object:SetNPCName(var_85_int);
	var_86_int = 0;
	func_1532(var_86_int);
	@@var_33_object:SetNPCDescription(var_86_int);
	var_87_string = "";
	func_1536(var_87_string);
	@@var_33_object:SetPhoto(var_87_string);
	var_88_string = "";
	func_1538(var_88_string);
	@@var_33_object:SetPhoto2(var_88_string);
	var_89_int = 0;
	func_1515(var_89_int);
	@@var_33_object:SetPlayerName(var_89_int);
	IsOverrideActive(var_34_bool);
	var_97_bool = var_34_bool;
	if(var_97_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	DoDialog(var_33_object);
	var_98_bool = 0; var_99_object = Obj();
	func_1199(Obj());
	var_100_object = var_99_object;
	func_1008(var_98_bool, var_99_object);
	var_193_object = Obj(); var_194_object = Obj();
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	@@var_33_object:IsDialogEnd(var_36_bool);
	
Label_63:
	var_298_bool = var_36_bool == 0; //@nz
	if(var_298_bool != 0) {
		sync();
		@@var_33_object:IsDialogEnd(var_36_bool);
		goto Label_63;
	}
	var_27_object = Obj();
	func_990();
	StopDialog(var_33_object);
	@@var_33_object:GetReturnValue((int)-1);
	var_35_int = var_26_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1538(var_88_string)
{
	var_88_string = "ui/NPC_Maria_b.png";
	return 0;
}


func_1411(var_274_bool)
{
	var_276_int = 0; var_277_string = "";
	func_1215(var_276_int, "b2q03_1");
	var_279_bool = var_276_int == (int)0;
	if(var_279_bool != 0) {
		var_274_bool = 1;
		return 0;
	}
	var_274_bool = 0;
	return 0;
}


func_1540(var_80_bool)
{
	var_80_bool = 1;
	return 0;
}


func_644(var_32_bool)
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
	func_907(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_897(var_15_bool, var_16_cvector)
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


func_1283(var_70_bool, var_71_string, var_72_string)
{
	var_73_object = Obj(); var_74_object = Obj();
	FindActor(var_74_object, var_71_string);
	var_75_bool = var_74_object == 0; //@ne
	if(var_75_bool != 0) {
		var_70_bool = 0;
		return 2;
	}
	Trigger(var_74_object, var_72_string);
	var_70_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1146(var_246_string)
{
	var_247_bool = 0; var_248_float = 0; var_249_float = 0; var_250_bool = 0; var_251_float = 0; var_252_float = 0;
	lshHasAnimation(var_250_bool, var_246_string);
	var_253_bool = var_250_bool;
	if(var_253_bool != 0) {
		lshGetAnimTimes(var_246_string, var_251_float, var_252_float);
		lshPlayAnimation(var_251_float, var_252_float, (bool)0);
	} else {
		var_256_int = "Can't find lsh animation : " + var_246_string;
		Trace(var_256_int);
	}
	return 6;
	
}


func_1162(var_224_string, var_225_bool)
{
	var_228_bool = 0; var_229_float = 0; var_230_float = 0; var_231_bool = 0; var_232_float = 0; var_233_float = 0;
	lshHasAnimation(var_231_bool, var_224_string);
	var_234_bool = var_231_bool;
	if(var_234_bool != 0) {
		lshGetAnimTimes(var_224_string, var_232_float, var_233_float);
		lshPlayAnimation(var_232_float, var_233_float, var_225_bool);
	} else {
		var_236_int = "Can't find lsh animation : " + var_224_string;
		Trace(var_236_int);
	}
	return 6;
	
}


func_907(var_11_bool, var_12_object)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0);
	@@var_12_object:GetPosition(var_14_cvector);
	var_15_bool = 0; var_16_cvector = CVector(0,0,0);
	var_14_cvector = var_16_cvector;
	func_897(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
	return 2;
}


func_1423(var_283_bool)
{
	var_285_int = 0; var_286_string = "";
	func_1215(var_285_int, "b2q03_1");
	var_288_bool = var_285_int == (int)2;
	if(var_288_bool != 0) {
		var_283_bool = 1;
		return 0;
	}
	var_283_bool = 0;
	return 0;
}


func_1295(var_153_int)
{
	var_154_float = 0; var_155_float = 0;
	GetGameTime(var_155_float);
	var_157_int = 0;
	var_157_int = var_155_float / (int)24;
	var_153_int = (int)1 + var_157_int;
	return 2;
}


func_659(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_84_float, var_85_float);
	return 0;
}


func_916(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0;
	IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
	return 2;
}


func_1304(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = "";
	var_35_int = var_32_int;
	if(var_35_int != 0) {
		"idle" = "idle" + var_32_int;
	}
	var_34_string = var_31_string;
	return 2;
}


func_1177(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0;
	var_136_bool = 0;
	func_1540(var_136_bool);
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


func_664(var_15_bool)
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
	func_882(var_22_float, var_23_object);
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


func_921(var_37_bool, var_38_object, var_39_float)
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
	func_1205(var_64_cvector, var_65_cvector);
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
	func_1540(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		HasAnimationTrack(var_57_bool, "head");
		var_82_bool = var_57_bool;
		if(var_82_bool == 0) goto Label_984;
		LookAsyncCamera("head");
	}
Label_984:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_37_bool = 1;
	return 18;
	
}


func_1435()
{
	var_17_object = Obj(); var_18_object = Obj();
	CreateDiaryEntry(var_18_object, (int)588, (int)2, (int)531074);
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0;
	var_18_object = var_23_object;
	func_1487(var_22_bool, var_23_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1311(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0;
	var_28_int = 0;
	
Label_1313:
	var_31_string = ""; var_32_int = 0;
	var_28_int = var_32_int;
	func_1304(var_31_string, var_32_int);
	HasAnimation(var_29_bool, "all", var_31_string);
	var_36_bool = var_29_bool == 0; //@nz
	if(var_36_bool != 0) {
	} else {
		var_28_int = var_28_int + (int)1;
		goto Label_1313;
	}
	var_28_int = var_25_int;
	return 4;
	
}


func_806()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0;
	WaitForAnimEnd();
	var_23_bool = 0;
	func_916(var_23_bool);
	var_24_bool = var_23_bool == 0; //@nz
	if(var_24_bool != 0) {
		return 12;
	}
	func_1311((int)0);
	var_25_int = var_17_int;
	var_18_int = 0;
	
Label_820:
	var_38_bool = 0;
	var_38_bool = 0;
	var_40_bool = var_18_int < (int)5;
	if(var_40_bool != 0) {
		var_41_bool = 0;
		func_916(var_41_bool);
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
				func_1304(var_52_string, var_53_int);
				PlayAnimation("all", var_52_string);
				WaitForAnimEnd(var_22_bool);
				var_54_bool = var_22_bool == 0; //@nz
				if(var_54_bool == 0) goto Label_861;
				goto Label_872;
		}
		Label_861:
			var_45_bool = 0;
			func_875(var_45_bool);
			var_46_bool = var_45_bool == 0; //@nz
			if(var_46_bool != 0) {
				goto Label_872;
			}
			ResetAAS();
			var_18_int = var_18_int + (int)1;
			goto Label_820;

		}
	}
Label_872:
	ResetAAS();
	return 12;
	
}


func_1192()
{
	var_10_bool = 0;
	func_1540(var_10_bool);
	if(var_10_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1448()
{
	var_62_object = Obj(); var_63_object = Obj();
	CreateDiaryEntry(var_63_object, (int)590, (int)2, (int)531076);
	var_67_bool = 0; var_68_object = Obj(); var_69_int = 0;
	var_63_object = var_68_object;
	func_1487(var_67_bool, var_68_object, (int)588);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1066(var_109_bool, var_110_object)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = "";
	var_116_string = "c";
	var_117_int = 0;
	
Label_1069:
	if((int)1 != 0) {
		var_123_int = var_117_int + (int)1;
		var_124_int = var_116_string + var_123_int;
		@@var_110_object:HasProperty(var_124_int, var_118_bool);
		var_125_bool = var_118_bool == 0; //@nz
		if(var_125_bool != 0) {
		} else {
			var_117_int = var_117_int + (int)1;
			goto Label_1069;
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
	func_1177(var_132_bool, var_133_string);
	var_132_bool = var_109_bool;
	return 10;
	
}


func_686()
{
	var_309_float = 0; var_310_float = 0;
	rand(var_310_float, (int)8, (int)16);
	SetTimer((int)10, var_310_float);
	return 2;
}


func_1199(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj();
	self(var_102_object);
	var_102_object = var_100_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1328()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_1205(var_64_cvector, var_65_cvector)
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


func_1334()
{
	SetVariable("oob2MariaKabak1", (int)1);
	return 0;
}


func_695()
{
	KillTimer((int)10);
	return 0;
}


func_1461()
{
	var_40_object = Obj(); var_41_object = Obj();
	CreateDiaryEntry(var_41_object, (int)589, (int)2, (int)531075);
	var_45_bool = 0; var_46_object = Obj(); var_47_int = 0;
	var_41_object = var_46_object;
	func_1487(var_45_bool, var_46_object, (int)588);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1340()
{
	SetVariable("b2q03_1", (int)1);
	func_1435();
	func_1461();
	return 0;
}


func_1215(var_203_int, var_204_string)
{
	var_205_int = 0; var_206_int = 0;
	GetVariable(var_204_string, var_206_int);
	var_206_int = var_203_int;
	return 2;
}


func_1474(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj();
	GetDiaryRoot(var_33_object);
	var_34_bool = var_33_object == 0; //@nz
	if(var_34_bool != 0) {
		Trace("Can't retrieve diary root");
		var_31_object = 0;
		return 2;
	}
	var_33_object = var_31_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1220(var_92_int, var_93_int)
{
	var_94_object = Obj(); var_95_object = Obj();
	CreateIntVector(var_95_object);
	@@var_95_object:add(var_92_int);
	@@var_95_object:add(var_93_int);
	SendWorldWndMessage((int)3, var_95_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_581(var_25_object)
{
	var_26_int = 0; var_27_object = Obj();
	var_25_object = var_27_object;
	TaskCall(0);
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
	return 0;
}


func_1352()
{
	SetVariable("b2q03_1", (int)1000);
	func_1448();
	var_70_bool = 0; var_71_string = ""; var_72_string = "";
	func_1283(var_70_bool, "quest_b2_03", "fail");
	return 0;
}


func_1103(var_140_bool, var_141_object)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = "";
	var_153_int = 0;
	func_1295(var_153_int);
	var_159_int = "d" + var_153_int;
	var_147_string = var_159_int + "m";
	var_148_int = 0;
	
Label_1112:
	if((int)1 != 0) {
		var_163_int = var_148_int + (int)1;
		var_164_int = var_147_string + var_163_int;
		@@var_141_object:HasProperty(var_164_int, var_149_bool);
		var_165_bool = var_149_bool == 0; //@nz
		if(var_165_bool != 0) {
		} else {
			var_148_int = var_148_int + (int)1;
			goto Label_1112;
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
	func_1177(var_172_bool, var_173_string);
	var_172_bool = var_140_bool;
	return 10;
	
}


func_1232(var_79_object, var_80_int)
{
	var_81_int = 0; var_82_int = 0;
	var_83_object = Obj(); var_84_string = ""; var_85_int = 0;
	var_79_object = var_83_object;
	var_80_int = var_85_int;
	func_890(var_83_object, "money", var_85_int);
	var_90_bool = var_80_int > (int)0;
	if(var_90_bool != 0) {
		GetInvItemByName(var_82_int, "Money");
		var_92_int = 0; var_93_int = 0;
		var_82_int = var_92_int;
		var_80_int = var_93_int;
		func_1220(var_92_int, var_93_int);
	}
	return 2;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_200_bool = 0;
		var_200_bool = 0;
		var_201_bool = 0; var_202_object = Obj();
		var_202_object = var_1_object;
		func_1399(var_202_object);
		if(var_201_bool != 0) {
			var_209_bool = 0; var_210_object = Obj();
			var_210_object = var_1_object;
			func_1387(var_210_object);
			var_215_bool = var_209_bool == 0; //@nz
			if(var_215_bool != 0) {
				var_200_bool = 1;
			}
		}
		if(var_200_bool != 0) {
			var_216_object = Obj(); var_217_object = Obj();
			var_216_object = var_1_object;
			var_217_object = var_0_object;
			func_1334();
			var_220_string = "";
			func_224(var_194_object, "Staring");
			@@@var_0_object:SetMessage((int)531063);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531064, (int)32569, (int)32389);
			@@@var_0_object:AddReply((int)531269, (int)32569, (int)32581);
		} else {
				var_262_bool = 0; var_263_object = Obj();
				var_263_object = var_1_object;
				func_1387(var_263_object);
				if(var_262_bool != 0) {
					var_264_string = "";
					func_224(var_194_object, "Angry");
					@@@var_0_object:SetMessage((int)531077);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)531078, (int)-1, (int)32400);
					@@@var_0_object:AddReply((int)531255, (int)-1, (int)32571);
					goto Label_194;
				}
				var_272_string = "";
				func_224(var_194_object, "Mysterious");
				@@@var_0_object:SetMessage((int)531066);
				@@@var_0_object:ClearReplies();
				var_274_bool = 0; var_275_object = Obj();
				var_275_object = var_1_object;
				func_1411(var_275_object);
				if(var_274_bool != 0) {
					@@@var_0_object:AddReply((int)531067, (int)32395, (int)32392);
				}
				var_283_bool = 0; var_284_object = Obj();
				var_284_object = var_1_object;
				func_1423(var_284_object);
				if(var_283_bool != 0) {
					@@@var_0_object:AddReply((int)531068, (int)32397, (int)32393);
				}
				@@@var_0_object:AddReply((int)531069, (int)-1, (int)32394);
				@@@var_0_object:AddReply((int)531256, (int)-1, (int)32572);
				goto Label_194;
		}
	}
Label_194:
	var_244_bool = 0;
	func_1540(var_244_bool);
	if(var_244_bool != 0) {

	Label_198:
		lshWaitForAnimEnd();
		var_245_string = var_3_string;
		if(var_245_string != 0) {
		} else {
			var_246_string = "";
			var_246_string = var_2_object;
			func_1146(var_246_string);
			goto Label_198;
	}
		PlayAnimation("all", "idle");

	Label_213:
		WaitForAnimEnd();
		var_259_string = var_3_string;
		if(var_259_string != 0) {
			goto Label_223;
		}
		PlayAnimation("all", "idle");
		goto Label_213;

	}
	goto Label_223;
	
Label_223:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_1487(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0;
	func_1474(Obj());
	var_31_object = var_28_object;
	@@var_28_object:Find(var_24_int, var_29_object);
	var_36_bool = var_29_object == 0; //@nz
	if(var_36_bool != 0) {
		var_38_int = "Can't find diary parent with id: " + var_24_int;
		Trace(var_38_int);
		var_22_bool = 0;
		return 6;
	}
	@@var_29_object:AddChild(var_23_object);
	SendWorldWndMessage((int)7);
	@@var_23_object:GetCategory(var_30_int);
	SetDiarySection(var_30_int);
	var_22_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1366(var_97_object)
{
	Trace("recipe5 is given");
	var_100_object = Obj(); var_101_string = ""; var_102_int = 0;
	var_97_object = var_100_object;
	func_1270(var_100_object, "recipe5", (int)1);
	return 0;
}


func_990()
{
	var_300_bool = 0; var_301_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_303_bool = 0;
	func_1540(var_303_bool);
	if(var_303_bool != 0) {
	} else {
		HasAnimationTrack(var_301_bool, "head");
		var_305_bool = var_301_bool;
		if(var_305_bool == 0) goto Label_1007;
		UnlookAsync("head");
	}
Label_1007:
	return 2;
	
}


func_224(var_2_object, var_220_string)
{
	var_221_bool = 0;
	func_1540(var_221_bool);
	var_222_bool = var_221_bool == 0; //@nz
	if(var_222_bool != 0) {
		return 0;
	}
	var_223_bool = var_220_string == var_2_object;
	if(var_223_bool != 0) {
		return 0;
	}
	var_224_string = ""; var_225_bool = 0;
	var_220_string = var_224_string;
	var_227_bool = var_220_string == "";
	if(var_227_bool != 0) {
		var_225_bool = 0;
	} else {
		var_225_bool = 1;
	}
	func_1162(var_224_string, var_225_bool);
	var_2_object = var_220_string;
	return 0;
	
}


func_1377(var_76_object)
{
	Trace("money 5000 is given");
	var_79_object = Obj(); var_80_int = 0;
	var_76_object = var_79_object;
	func_1232(var_79_object, (int)5000);
	return 0;
}


func_737()
{
	func_877();
	func_695();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


func_1251(var_105_object, var_106_object, var_107_int)
{
	var_108_int = 0; var_109_int = 0; var_110_bool = 0; var_111_int = 0; var_112_int = 0; var_113_bool = 0;
	@@var_106_object:GetItemID(var_111_int);
	GetInvItemProperty(var_112_int, var_111_int, "Category");
	@@var_105_object:AddItem(var_113_bool, var_106_object, var_112_int, var_107_int);
	var_115_bool = var_113_bool == 0; //@nz
	if(var_115_bool != 0) {
		@@var_105_object:DropItems(var_106_object, var_107_int);
	} else {
		var_116_int = 0; var_117_int = 0;
		var_111_int = var_116_int;
		var_107_int = var_117_int;
		func_1220(var_116_int, var_117_int);
	}
	return 6;
	
}


func_1515(var_89_int)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable("branch", var_91_int);
	var_94_bool = var_91_int == (int)0;
	if(var_94_bool != 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x5fa";
	}
	var_96_bool = var_91_int == (int)1;
	if(var_96_bool != 0) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
	return 2;
}


func_1387(var_209_bool)
{
	var_211_int = 0; var_212_string = "";
	func_1215(var_211_int, "b2q03");
	var_214_bool = var_211_int == (int)1000;
	if(var_214_bool != 0) {
		var_209_bool = 1;
		return 0;
	}
	var_209_bool = 0;
	return 0;
}


func_877()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_875(var_45_bool)
{
	var_45_bool = 1;
	return 0;
}


func_1008(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0;
	GetVariable("voice_common", var_105_int);
	var_108_int = var_105_int;
	if(var_108_int != 0) {
		var_109_bool = 0; var_110_object = Obj();
		var_99_object = var_110_object;
		func_1066(var_109_bool, var_110_object);
		var_139_bool = var_109_bool == 0; //@nz
		if(var_139_bool != 0) {
			var_140_bool = 0; var_141_object = Obj();
			var_99_object = var_141_object;
			func_1103(var_140_bool, var_141_object);
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
		func_1103(var_185_bool, var_186_object);
		var_187_bool = var_185_bool == 0; //@nz
		if(var_187_bool != 0) {
			var_188_bool = 0; var_189_object = Obj();
			var_99_object = var_189_object;
			func_1066(var_188_bool, var_189_object);
			var_190_bool = var_188_bool == 0; //@nz
			if(var_190_bool != 0) {
				var_98_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1064;
	
Label_1064:
	var_98_bool = 1;
	return 4;
	
}


func_752()
{
	StopGroup0();
	func_695();
	var_8_string = "";
	func_1146("Neutral");
	func_686();
	return 0;
}


func_882(var_22_float, var_23_object)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0);
	GetPosition(var_27_cvector);
	@@var_23_object:GetPosition(var_28_cvector);
	var_29_cvector = var_28_cvector - var_27_cvector;
	var_22_float = var_29_cvector | var_29_cvector;
	return 6;
}


func_630(var_0_object)
{
	var_7_bool = 0;
	func_916(var_7_bool);
	var_10_bool = var_7_bool == 0; //@nz
	if(var_10_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_639:
	func_806();
	goto Label_639;
}
EMIT "Return(); Pop(0)";


func_1399(var_201_bool)
{
	var_203_int = 0; var_204_string = "";
	func_1215(var_203_int, "oob2MariaKabak1");
	var_208_bool = var_203_int == (int)0;
	if(var_208_bool != 0) {
		var_201_bool = 1;
		return 0;
	}
	var_201_bool = 0;
	return 0;
}


func_1270(var_100_object, var_101_string, var_102_int)
{
	var_103_object = Obj(); var_104_object = Obj();
	CreateInvItem(var_104_object);
	@@var_104_object:SetItemName(var_101_string);
	var_105_object = Obj(); var_106_object = Obj(); var_107_int = 0;
	var_100_object = var_105_object;
	var_104_object = var_106_object;
	var_102_int = var_107_int;
	func_1251(var_105_object, var_106_object, var_107_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_890(var_83_object, var_84_string, var_85_int)
{
	var_86_int = 0; var_87_int = 0;
	@@var_83_object:GetProperty(var_84_string, var_87_int);
	var_88_int = var_87_int + var_85_int;
	@@var_83_object:SetProperty(var_84_string, var_88_int);
	return 2;
}


func_1532(var_86_int)
{
	var_86_int = 515543;
	return 0;
}


func_1534(var_85_int)
{
	var_85_int = 502868;
	return 0;
}


