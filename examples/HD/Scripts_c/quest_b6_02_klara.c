// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,IsLoaded/1,RemoveActor/1,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,SendWorldWndMessage/1,CreateFloatVector/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Fear|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Saveyouall|W:cleanup|W:restore|W:player|W:Neutral|A:GetPosition|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|W:m|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:reputation|W:b6q02|W:b6q02KlaraGotoRat|W:pt_map_theater|A:AddMark|W:quest_b6_02|W:init_maze|W:completed|W:oob6Klara2_1|W:playsound|W:giveitem|W:recipe7 is given|W:recipe7|A:ShowMap|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:ui/NPC_Klara.png|W:ui/NPC_Klara_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x1f3
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xd3 vars=int,int
// @TASK_2: vars=cvector,bool params=0
// @EVENT_26: op=0x1f7 vars=string
// @EVENT_6: op=0x20b vars=
// @EVENT_5: op=0x218 vars=
// @EVENT_7: op=0x261 vars=int
// @EVENT_45: op=0x2a3 vars=bool
// @EVENT_0: op=0x2af vars=object
// @PE: 0x51,0xbd,0xd3,0x1eb,0x1f3,0x218,0x261,0x287,0x2a3,0x480,0x4bc,0x53a,0x544,0x54a,0x550,0x55b,0x56b,0x572,0x57e,0x58a,0x596

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	if((int)1 != 0) {
		func_1129();
		var_12_bool = var_8_bool == (int)22381;
		if(var_12_bool != 0) {
			var_13_object = Obj(); var_14_object = Obj();
			var_13_object = var_1_object;
			var_14_object = var_0_object;
			func_1307();
			var_70_object = Obj(); var_71_object = Obj();
			var_70_object = var_1_object;
			var_71_object = var_0_object;
			func_1371(var_71_object);
		}
		var_97_bool = var_8_bool == (int)29741;
		if(var_97_bool != 0) {
			var_98_object = Obj(); var_99_object = Obj();
			var_98_object = var_1_object;
			var_99_object = var_0_object;
			func_1387(var_99_object);
		}
		var_139_bool = var_8_bool == (int)22389;
		if(var_139_bool != 0) {
			var_140_object = Obj(); var_141_object = Obj();
			var_140_object = var_1_object;
			var_141_object = var_0_object;
			func_1307();
			var_142_object = Obj(); var_143_object = Obj();
			var_142_object = var_1_object;
			var_143_object = var_0_object;
			func_1371(var_143_object);
		}
		var_145_bool = var_8_bool == (int)22392;
		if(var_145_bool != 0) {
			var_146_object = Obj(); var_147_object = Obj();
			var_146_object = var_1_object;
			var_147_object = var_0_object;
			func_1338();
			var_159_object = Obj(); var_160_object = Obj();
			var_159_object = var_1_object;
			var_160_object = var_0_object;
			func_1354();
			var_163_object = Obj(); var_164_object = Obj();
			var_163_object = var_1_object;
			var_164_object = var_0_object;
			func_1360(var_164_object);
		}
		var_188_bool = var_7_cvector == (int)22380;
		if(var_188_bool != 0) {
			var_189_bool = 0; var_190_object = Obj();
			var_190_object = var_1_object;
			func_1418(var_190_object);
			if(var_189_bool != 0) {
				var_197_object = Obj(); var_198_object = Obj();
				var_197_object = var_1_object;
				var_198_object = var_0_object;
				func_1348();
				var_201_string = "";
				func_189(var_8_bool, "Fear");
				@@@var_0_object:SetMessage((int)521178);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)528362, (int)29735, (int)29734);
				return 0;
			}
			var_222_string = "";
			func_189(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)521184);
			@@@var_0_object:ClearReplies();
			var_224_bool = 0; var_225_object = Obj();
			var_225_object = var_1_object;
			func_1430(var_225_object);
			if(var_224_bool != 0) {
				@@@var_0_object:AddReply((int)521185, (int)22388, (int)22387);
			}
			var_233_bool = 0;
			var_233_bool = 0;
			var_234_bool = 0; var_235_object = Obj();
			var_235_object = var_1_object;
			func_1406(var_235_object);
			if(var_234_bool != 0) {
				var_240_bool = 0; var_241_object = Obj();
				var_241_object = var_1_object;
				func_1394(var_241_object);
				var_246_bool = var_240_bool == 0; //@nz
				if(var_246_bool != 0) {
					var_233_bool = 1;
				}
			}
			if(var_233_bool != 0) {
				@@@var_0_object:AddReply((int)521188, (int)22391, (int)22390);
			}
			@@@var_0_object:AddReply((int)521191, (int)-1, (int)22393);
			return 0;
		}
		var_254_bool = var_7_cvector == (int)22391;
		if(var_254_bool != 0) {
			var_255_string = "";
			func_189(var_8_bool, "Saveyouall");
			@@@var_0_object:SetMessage((int)521189);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528371, (int)29744, (int)29743);
			@@@var_0_object:AddReply((int)528373, (int)29744, (int)29745);
			return 0;
		}
		var_264_bool = var_7_cvector == (int)29744;
		if(var_264_bool != 0) {
			var_265_string = "";
			func_189(var_8_bool, "Saveyouall");
			@@@var_0_object:SetMessage((int)528372);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521190, (int)-1, (int)22392);
			return 0;
		}
		var_271_bool = var_7_cvector == (int)22388;
		if(var_271_bool != 0) {
			var_272_string = "";
			func_189(var_8_bool, "Saveyouall");
			@@@var_0_object:SetMessage((int)521186);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521187, (int)-1, (int)22389);
			return 0;
		}
		var_278_bool = var_7_cvector == (int)29735;
		if(var_278_bool != 0) {
			var_279_string = "";
			func_189(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)528363);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528364, (int)29737, (int)29736);
			return 0;
		}
		var_285_bool = var_7_cvector == (int)29737;
		if(var_285_bool != 0) {
			var_286_string = "";
			func_189(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)528365);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528366, (int)29739, (int)29738);
			return 0;
		}
		var_292_bool = var_7_cvector == (int)29739;
		if(var_292_bool != 0) {
			var_293_string = "";
			func_189(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)528367);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521183, (int)29740, (int)22385);
			return 0;
		}
		var_299_bool = var_7_cvector == (int)29740;
		if(var_299_bool != 0) {
			var_300_string = "";
			func_189(var_8_bool, "Saveyouall");
			@@@var_0_object:SetMessage((int)528368);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521179, (int)-1, (int)22381);
			@@@var_0_object:AddReply((int)528369, (int)-1, (int)29741);
			return 0;
		}
		var_3_string = true;
		var_308_bool = 0;
		func_1597(var_308_bool);
		if(var_308_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xd4";
	
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
			func_1136(var_13_object);
			RemoveActor(var_13_object);
		}
	} else {
		var_17_bool = var_7_string == "restore";
		if(var_17_bool == 0) goto Label_522;
		var_1_object = false;
	}
Label_522:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object;
	if(var_7_object != 0) {
		var_8_object = Obj();
		func_1136(var_8_object);
		RemoveActor(var_8_object);
		Hold();
	}
	func_647();
	return 0;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_662();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_9_bool = var_7_int == (int)10;
	if(var_9_bool != 0) {
		func_605();
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = 0;
		func_853(var_12_bool);
		if(var_12_bool != 0) {
			var_15_bool = 0;
			func_574(var_15_bool);
			if(var_15_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_32_bool = 0;
			func_554(var_32_bool);
			if(var_32_bool != 0) {
				var_51_bool = 0; var_52_object = Obj();
				func_1136(Obj());
				var_53_object = var_52_object;
				func_1003(var_51_bool, var_52_object);
			}
		} else {
			func_569(var_7_int);
			func_596();
		}
	}
	return 0;
	
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool;
	if(var_8_bool != 0) {
		func_596();
	} else {
		var_14_string = "";
		func_1083("Neutral");
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
		func_787();
		var_11_bool = 0; var_12_object = Obj();
		var_7_object = var_12_object;
		func_844(var_11_bool, var_12_object);
		EventEnable(0);
		var_25_object = Obj();
		var_7_object = var_25_object;
		func_491(var_25_object);
		var_291_string = "";
		func_1083("Neutral");
		func_605();
		func_596();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_540(var_6_bool);
	return 0;
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0;
	var_0_object = var_27_object;
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0;
	var_27_object = var_38_object;
	func_858(var_37_bool, var_38_object, (float)70.0);
	var_84_bool = var_37_bool == 0; //@nz
	if(var_84_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	CreateDialog(var_33_object);
	var_85_int = 0;
	func_1591(var_85_int);
	@@var_33_object:SetNPCName(var_85_int);
	var_86_int = 0;
	func_1589(var_86_int);
	@@var_33_object:SetNPCDescription(var_86_int);
	var_87_string = "";
	func_1593(var_87_string);
	@@var_33_object:SetPhoto(var_87_string);
	var_88_string = "";
	func_1595(var_88_string);
	@@var_33_object:SetPhoto2(var_88_string);
	var_89_int = 0;
	func_1572(var_89_int);
	@@var_33_object:SetPlayerName(var_89_int);
	IsOverrideActive(var_34_bool);
	var_97_bool = var_34_bool;
	if(var_97_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	DoDialog(var_33_object);
	var_98_bool = 0; var_99_object = Obj();
	func_1136(Obj());
	var_100_object = var_99_object;
	func_945(var_98_bool, var_99_object);
	var_193_object = Obj(); var_194_object = Obj();
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	@@var_33_object:IsDialogEnd(var_36_bool);
	
Label_63:
	var_282_bool = var_36_bool == 0; //@nz
	if(var_282_bool != 0) {
		sync();
		@@var_33_object:IsDialogEnd(var_36_bool);
		goto Label_63;
	}
	var_27_object = Obj();
	func_927();
	StopDialog(var_33_object);
	@@var_33_object:GetReturnValue((int)-1);
	var_35_int = var_26_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1539(var_72_object, var_73_string, var_74_float)
{
	var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_object = Obj(); var_79_bool = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_object = Obj(); var_83_bool = 0;
	GetMainOutdoorScene(var_82_object);
	var_84_bool = var_82_object == 0; //@ne
	if(var_84_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_82_object:GetLocator(var_73_string, var_83_bool, var_80_cvector, var_81_cvector);
	var_86_bool = var_83_bool == 0; //@nz
	if(var_86_bool != 0) {
		var_88_int = "Warning: outdoor scene locator " + var_73_string;
		var_90_int = var_88_int + " doesnt exist";
		Trace(var_90_int);
	}
	@@var_82_object:GetMap(var_72_object);
	var_91_bool = var_72_object == 0; //@ne
	if(var_91_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_93_float = GetByIndex(var_80_cvector, 0);
	var_94_float = GetByIndex(var_80_cvector, 2);
	@@var_72_object:SetMapParams(var_93_float, var_94_float, var_74_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_1283(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = "";
	var_35_int = var_32_int;
	if(var_35_int != 0) {
		"idle" = "idle" + var_32_int;
	}
	var_34_string = var_31_string;
	return 2;
}


func_1290(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0;
	var_28_int = 0;
	
Label_1292:
	var_31_string = ""; var_32_int = 0;
	var_28_int = var_32_int;
	func_1283(var_31_string, var_32_int);
	HasAnimation(var_29_bool, "all", var_31_string);
	var_36_bool = var_29_bool == 0; //@nz
	if(var_36_bool != 0) {
	} else {
		var_28_int = var_28_int + (int)1;
		goto Label_1292;
	}
	var_28_int = var_25_int;
	return 4;
	
}


func_1040(var_140_bool, var_141_object)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = "";
	var_153_int = 0;
	func_1274(var_153_int);
	var_159_int = "d" + var_153_int;
	var_147_string = var_159_int + "m";
	var_148_int = 0;
	
Label_1049:
	if((int)1 != 0) {
		var_163_int = var_148_int + (int)1;
		var_164_int = var_147_string + var_163_int;
		@@var_141_object:HasProperty(var_164_int, var_149_bool);
		var_165_bool = var_149_bool == 0; //@nz
		if(var_165_bool != 0) {
		} else {
			var_148_int = var_148_int + (int)1;
			goto Label_1049;
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
	func_1114(var_172_bool, var_173_string);
	var_172_bool = var_140_bool;
	return 10;
	
}


func_785(var_45_bool)
{
	var_45_bool = 1;
	return 0;
}


func_787()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_792(var_22_float, var_23_object)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0);
	GetPosition(var_27_cvector);
	@@var_23_object:GetPosition(var_28_cvector);
	var_29_cvector = var_28_cvector - var_27_cvector;
	var_22_float = var_29_cvector | var_29_cvector;
	return 6;
}


func_1307()
{
	var_15_object = Obj(); var_16_object = Obj();
	SetVariable("b6q02", (int)1);
	func_1522(Obj());
	var_19_object = var_16_object;
	var_30_float = 0;
	func_1269(var_30_float);
	@@var_16_object:AddMark("b6q02KlaraGotoRat", "pt_map_theater", (int)0, (int)521207, var_30_float);
	func_1442();
	func_1468();
	var_64_bool = 0; var_65_string = ""; var_66_string = "";
	func_1257(var_64_bool, "quest_b6_02", "init_maze");
	return 2;
}
EMIT "Stack[-1] = 0";


func_540(var_0_object)
{
	var_7_bool = 0;
	func_853(var_7_bool);
	var_10_bool = var_7_bool == 0; //@nz
	if(var_10_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_549:
	func_716();
	goto Label_549;
}
EMIT "Return(); Pop(0)";


func_800(var_119_bool, var_120_object, var_121_string)
{
	var_122_bool = 0; var_123_bool = 0;
	var_126_bool = IsFuncExist(var_120_object, "HasProperty", (int)2);
	var_127_bool = var_126_bool == 0; //@nz
	if(var_127_bool != 0) {
		var_119_bool = 0;
		return 2;
	}
	@@var_120_object:HasProperty(var_121_string, var_123_bool);
	var_123_bool = var_119_bool;
	return 2;
}


func_1572(var_89_int)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable("branch", var_91_int);
	var_94_bool = var_91_int == (int)0;
	if(var_94_bool != 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x633";
	}
	var_96_bool = var_91_int == (int)1;
	if(var_96_bool != 0) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
	return 2;
}


func_554(var_32_bool)
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
	func_844(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_812(var_111_bool, var_112_object, var_113_string, var_114_float, var_115_float, var_116_float)
{
	var_117_float = 0; var_118_float = 0;
	var_119_bool = 0; var_120_object = Obj(); var_121_string = "";
	var_112_object = var_120_object;
	var_113_string = var_121_string;
	func_800(var_119_bool, var_120_object, var_121_string);
	var_128_bool = var_119_bool == 0; //@nz
	if(var_128_bool != 0) {
		var_111_bool = 0;
		return 2;
	}
	@@var_112_object:GetProperty(var_113_string, var_118_float);
	var_129_float = 0; var_130_float = 0; var_131_float = 0; var_132_float = 0;
	var_130_float = var_118_float + var_114_float;
	var_115_float = var_131_float;
	var_116_float = var_132_float;
	func_1152(var_129_float, var_130_float, var_131_float, var_132_float);
	@@var_112_object:SetProperty(var_113_string, var_129_float);
	var_111_bool = 1;
	return 2;
}


func_1589(var_86_int)
{
	var_86_int = 515540;
	return 0;
}


func_1591(var_85_int)
{
	var_85_int = 502865;
	return 0;
}


func_1593(var_87_string)
{
	var_87_string = "ui/NPC_Klara.png";
	return 0;
}


func_1338()
{
	func_1455();
	var_156_bool = 0; var_157_string = ""; var_158_string = "";
	func_1257(var_156_bool, "quest_b6_02", "completed");
	return 0;
}


func_1083(var_235_string)
{
	var_236_bool = 0; var_237_float = 0; var_238_float = 0; var_239_bool = 0; var_240_float = 0; var_241_float = 0;
	lshHasAnimation(var_239_bool, var_235_string);
	var_242_bool = var_239_bool;
	if(var_242_bool != 0) {
		lshGetAnimTimes(var_235_string, var_240_float, var_241_float);
		lshPlayAnimation(var_240_float, var_241_float, (bool)0);
	} else {
		var_245_int = "Can't find lsh animation : " + var_235_string;
		Trace(var_245_int);
	}
	return 6;
	
}


func_1595(var_88_string)
{
	var_88_string = "ui/NPC_Klara_b.png";
	return 0;
}


func_1597(var_80_bool)
{
	var_80_bool = 1;
	return 0;
}


func_574(var_15_bool)
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
	func_792(var_22_float, var_23_object);
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


func_569(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_84_float, var_85_float);
	return 0;
}


func_834(var_15_bool, var_16_cvector)
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


func_1348()
{
	SetVariable("oob6Klara2_1", (int)1);
	return 0;
}


func_1354()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_1099(var_216_string, var_217_bool)
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


func_844(var_11_bool, var_12_object)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0);
	@@var_12_object:GetPosition(var_14_cvector);
	var_15_bool = 0; var_16_cvector = CVector(0,0,0);
	var_14_cvector = var_16_cvector;
	func_834(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
	return 2;
}


func_1360(var_163_object)
{
	Trace("recipe7 is given");
	var_166_object = Obj(); var_167_string = ""; var_168_int = 0;
	var_163_object = var_166_object;
	func_1199(var_166_object, "recipe7", (int)1);
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
		func_1418(var_201_object);
		if(var_200_bool != 0) {
			var_208_object = Obj(); var_209_object = Obj();
			var_208_object = var_1_object;
			var_209_object = var_0_object;
			func_1348();
			var_212_string = "";
			func_189(var_194_object, "Fear");
			@@@var_0_object:SetMessage((int)521178);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528362, (int)29735, (int)29734);
		} else {
				var_251_string = "";
				func_189(var_194_object, "Fear");
				@@@var_0_object:SetMessage((int)521184);
				@@@var_0_object:ClearReplies();
				var_253_bool = 0; var_254_object = Obj();
				var_254_object = var_1_object;
				func_1430(var_254_object);
				if(var_253_bool != 0) {
					@@@var_0_object:AddReply((int)521185, (int)22388, (int)22387);
				}
				var_262_bool = 0;
				var_262_bool = 0;
				var_263_bool = 0; var_264_object = Obj();
				var_264_object = var_1_object;
				func_1406(var_264_object);
				if(var_263_bool != 0) {
					var_269_bool = 0; var_270_object = Obj();
					var_270_object = var_1_object;
					func_1394(var_270_object);
					var_275_bool = var_269_bool == 0; //@nz
					if(var_275_bool != 0) {
						var_262_bool = 1;
					}
				}
				if(var_262_bool != 0) {
					@@@var_0_object:AddReply((int)521188, (int)22391, (int)22390);
				}
				@@@var_0_object:AddReply((int)521191, (int)-1, (int)22393);
				goto Label_159;
		}
	}
Label_159:
	var_233_bool = 0;
	func_1597(var_233_bool);
	if(var_233_bool != 0) {

	Label_163:
		lshWaitForAnimEnd();
		var_234_string = var_3_string;
		if(var_234_string != 0) {
		} else {
			var_235_string = "";
			var_235_string = var_2_object;
			func_1083(var_235_string);
			goto Label_163;
	}
		PlayAnimation("all", "idle");

	Label_178:
		WaitForAnimEnd();
		var_248_string = var_3_string;
		if(var_248_string != 0) {
			goto Label_188;
		}
		PlayAnimation("all", "idle");
		goto Label_178;

	}
	goto Label_188;
	
Label_188:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_596()
{
	var_293_float = 0; var_294_float = 0;
	rand(var_294_float, (int)8, (int)16);
	SetTimer((int)10, var_294_float);
	return 2;
}


func_853(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0;
	IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
	return 2;
}


func_858(var_37_bool, var_38_object, var_39_float)
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
	func_1142(var_64_cvector, var_65_cvector);
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
	func_1597(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		HasAnimationTrack(var_57_bool, "head");
		var_82_bool = var_57_bool;
		if(var_82_bool == 0) goto Label_921;
		LookAsyncCamera("head");
	}
Label_921:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_37_bool = 1;
	return 18;
	
}


func_1371(var_71_object)
{
	var_72_object = Obj(); var_73_string = ""; var_74_float = 0;
	func_1522(Obj());
	var_75_object = var_72_object;
	func_1539(var_72_object, "pt_map_theater", (float)2);
	var_95_object = Obj();
	func_1522(var_95_object);
	@@var_71_object:ShowMap(var_95_object);
	return 0;
}


func_1114(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0;
	var_136_bool = 0;
	func_1597(var_136_bool);
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


func_605()
{
	KillTimer((int)10);
	return 0;
}


func_1129()
{
	var_10_bool = 0;
	func_1597(var_10_bool);
	if(var_10_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1387(var_98_object)
{
	var_100_bool = 0; var_101_object = Obj(); var_102_float = 0;
	var_98_object = var_101_object;
	func_1212(var_100_bool, var_101_object, (float)-0.10000000149011612);
	return 0;
}


func_1136(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj();
	self(var_102_object);
	var_102_object = var_100_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1394(var_269_bool)
{
	var_271_int = 0; var_272_string = "";
	func_1163(var_271_int, "b6q02");
	var_274_bool = var_271_int == (int)1000;
	if(var_274_bool != 0) {
		var_269_bool = 1;
		return 0;
	}
	var_269_bool = 0;
	return 0;
}


func_1142(var_64_cvector, var_65_cvector)
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


func_1406(var_263_bool)
{
	var_265_int = 0; var_266_string = "";
	func_1163(var_265_int, "b6q02");
	var_268_bool = var_265_int == (int)2;
	if(var_268_bool != 0) {
		var_263_bool = 1;
		return 0;
	}
	var_263_bool = 0;
	return 0;
}


func_1152(var_129_float, var_130_float, var_131_float, var_132_float)
{
	var_133_bool = var_130_float < var_131_float;
	if(var_133_bool != 0) {
		var_131_float = var_129_float;
		return 0;
	}
	var_134_bool = var_130_float > var_132_float;
	if(var_134_bool != 0) {
		var_132_float = var_129_float;
		return 0;
	}
	var_130_float = var_129_float;
	return 0;
}


func_647()
{
	func_787();
	func_605();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


func_1418(var_200_bool)
{
	var_202_int = 0; var_203_string = "";
	func_1163(var_202_int, "oob6Klara2_1");
	var_207_bool = var_202_int == (int)0;
	if(var_207_bool != 0) {
		var_200_bool = 1;
		return 0;
	}
	var_200_bool = 0;
	return 0;
}


func_1163(var_202_int, var_203_string)
{
	var_204_int = 0; var_205_int = 0;
	GetVariable(var_203_string, var_205_int);
	var_205_int = var_202_int;
	return 2;
}


func_1168(var_182_int, var_183_int)
{
	var_184_object = Obj(); var_185_object = Obj();
	CreateIntVector(var_185_object);
	@@var_185_object:add(var_182_int);
	@@var_185_object:add(var_183_int);
	SendWorldWndMessage((int)3, var_185_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1430(var_253_bool)
{
	var_255_int = 0; var_256_string = "";
	func_1163(var_255_int, "b6q02");
	var_258_bool = var_255_int == (int)0;
	if(var_258_bool != 0) {
		var_253_bool = 1;
		return 0;
	}
	var_253_bool = 0;
	return 0;
}


func_662()
{
	StopGroup0();
	func_605();
	var_8_string = "";
	func_1083("Neutral");
	func_596();
	return 0;
}


func_1180(var_171_object, var_172_object, var_173_int)
{
	var_174_int = 0; var_175_int = 0; var_176_bool = 0; var_177_int = 0; var_178_int = 0; var_179_bool = 0;
	@@var_172_object:GetItemID(var_177_int);
	GetInvItemProperty(var_178_int, var_177_int, "Category");
	@@var_171_object:AddItem(var_179_bool, var_172_object, var_178_int, var_173_int);
	var_181_bool = var_179_bool == 0; //@nz
	if(var_181_bool != 0) {
		@@var_171_object:DropItems(var_172_object, var_173_int);
	} else {
		var_182_int = 0; var_183_int = 0;
		var_177_int = var_182_int;
		var_173_int = var_183_int;
		func_1168(var_182_int, var_183_int);
	}
	return 6;
	
}


func_927()
{
	var_284_bool = 0; var_285_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_287_bool = 0;
	func_1597(var_287_bool);
	if(var_287_bool != 0) {
	} else {
		HasAnimationTrack(var_285_bool, "head");
		var_289_bool = var_285_bool;
		if(var_289_bool == 0) goto Label_944;
		UnlookAsync("head");
	}
Label_944:
	return 2;
	
}


func_1442()
{
	var_33_object = Obj(); var_34_object = Obj();
	CreateDiaryEntry(var_34_object, (int)266, (int)2, (int)521193);
	var_38_bool = 0; var_39_object = Obj(); var_40_int = 0;
	var_34_object = var_39_object;
	func_1494(var_38_bool, var_39_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1455()
{
	var_148_object = Obj(); var_149_object = Obj();
	CreateDiaryEntry(var_149_object, (int)269, (int)2, (int)521196);
	var_153_bool = 0; var_154_object = Obj(); var_155_int = 0;
	var_149_object = var_154_object;
	func_1494(var_153_bool, var_154_object, (int)266);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1199(var_166_object, var_167_string, var_168_int)
{
	var_169_object = Obj(); var_170_object = Obj();
	CreateInvItem(var_170_object);
	@@var_170_object:SetItemName(var_167_string);
	var_171_object = Obj(); var_172_object = Obj(); var_173_int = 0;
	var_166_object = var_171_object;
	var_170_object = var_172_object;
	var_168_int = var_173_int;
	func_1180(var_171_object, var_172_object, var_173_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_945(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0;
	GetVariable("voice_common", var_105_int);
	var_108_int = var_105_int;
	if(var_108_int != 0) {
		var_109_bool = 0; var_110_object = Obj();
		var_99_object = var_110_object;
		func_1003(var_109_bool, var_110_object);
		var_139_bool = var_109_bool == 0; //@nz
		if(var_139_bool != 0) {
			var_140_bool = 0; var_141_object = Obj();
			var_99_object = var_141_object;
			func_1040(var_140_bool, var_141_object);
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
		func_1040(var_185_bool, var_186_object);
		var_187_bool = var_185_bool == 0; //@nz
		if(var_187_bool != 0) {
			var_188_bool = 0; var_189_object = Obj();
			var_99_object = var_189_object;
			func_1003(var_188_bool, var_189_object);
			var_190_bool = var_188_bool == 0; //@nz
			if(var_190_bool != 0) {
				var_98_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1001;
	
Label_1001:
	var_98_bool = 1;
	return 4;
	
}


func_1468()
{
	var_56_object = Obj(); var_57_object = Obj();
	CreateDiaryEntry(var_57_object, (int)267, (int)2, (int)521194);
	var_61_bool = 0; var_62_object = Obj(); var_63_int = 0;
	var_57_object = var_62_object;
	func_1494(var_61_bool, var_62_object, (int)266);
	return 2;
}
EMIT "Stack[-1] = 0";


func_189(var_2_object, var_212_string)
{
	var_213_bool = 0;
	func_1597(var_213_bool);
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
	func_1099(var_216_string, var_217_bool);
	var_2_object = var_212_string;
	return 0;
	
}


func_1212(var_100_bool, var_101_object, var_102_float)
{
	var_103_bool = var_101_object == 0; //@nz
	if(var_103_bool != 0) {
		var_100_bool = 0;
		return 0;
	}
	var_105_bool = var_102_float > (int)0;
	if(var_105_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_136_bool = var_102_float < (int)0;
		if(var_136_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_1233;
		}
		var_100_bool = 0;
		return 0;
	}
Label_1233:
	var_107_float = 0;
	var_102_float = var_107_float;
	func_1247(var_107_float);
	var_111_bool = 0; var_112_object = Obj(); var_113_string = ""; var_114_float = 0; var_115_float = 0; var_116_float = 0;
	var_101_object = var_112_object;
	var_102_float = var_114_float;
	func_812(var_111_bool, var_112_object, "reputation", var_114_float, (float)0, (float)1);
	var_100_bool = 1;
	return 0;
	
}


func_1481(var_47_object)
{
	var_48_object = Obj(); var_49_object = Obj();
	GetDiaryRoot(var_49_object);
	var_50_bool = var_49_object == 0; //@nz
	if(var_50_bool != 0) {
		Trace("Can't retrieve diary root");
		var_47_object = 0;
		return 2;
	}
	var_49_object = var_47_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_716()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0;
	WaitForAnimEnd();
	var_23_bool = 0;
	func_853(var_23_bool);
	var_24_bool = var_23_bool == 0; //@nz
	if(var_24_bool != 0) {
		return 12;
	}
	func_1290((int)0);
	var_25_int = var_17_int;
	var_18_int = 0;
	
Label_730:
	var_38_bool = 0;
	var_38_bool = 0;
	var_40_bool = var_18_int < (int)5;
	if(var_40_bool != 0) {
		var_41_bool = 0;
		func_853(var_41_bool);
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
				func_1283(var_52_string, var_53_int);
				PlayAnimation("all", var_52_string);
				WaitForAnimEnd(var_22_bool);
				var_54_bool = var_22_bool == 0; //@nz
				if(var_54_bool == 0) goto Label_771;
				goto Label_782;
		}
		Label_771:
			var_45_bool = 0;
			func_785(var_45_bool);
			var_46_bool = var_45_bool == 0; //@nz
			if(var_46_bool != 0) {
				goto Label_782;
			}
			ResetAAS();
			var_18_int = var_18_int + (int)1;
			goto Label_730;

		}
	}
Label_782:
	ResetAAS();
	return 12;
	
}


func_1494(var_38_bool, var_39_object, var_40_int)
{
	var_41_object = Obj(); var_42_object = Obj(); var_43_int = 0; var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0;
	func_1481(Obj());
	var_47_object = var_44_object;
	@@var_44_object:Find(var_40_int, var_45_object);
	var_52_bool = var_45_object == 0; //@nz
	if(var_52_bool != 0) {
		var_54_int = "Can't find diary parent with id: " + var_40_int;
		Trace(var_54_int);
		var_38_bool = 0;
		return 6;
	}
	@@var_45_object:AddChild(var_39_object);
	SendWorldWndMessage((int)7);
	@@var_39_object:GetCategory(var_46_int);
	SetDiarySection(var_46_int);
	var_38_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1247(var_107_float)
{
	var_108_object = Obj(); var_109_object = Obj();
	CreateFloatVector(var_109_object);
	@@var_109_object:add(var_107_float);
	SendWorldWndMessage((int)16, var_109_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1257(var_64_bool, var_65_string, var_66_string)
{
	var_67_object = Obj(); var_68_object = Obj();
	FindActor(var_68_object, var_65_string);
	var_69_bool = var_68_object == 0; //@ne
	if(var_69_bool != 0) {
		var_64_bool = 0;
		return 2;
	}
	Trigger(var_68_object, var_66_string);
	var_64_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1003(var_109_bool, var_110_object)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = "";
	var_116_string = "c";
	var_117_int = 0;
	
Label_1006:
	if((int)1 != 0) {
		var_123_int = var_117_int + (int)1;
		var_124_int = var_116_string + var_123_int;
		@@var_110_object:HasProperty(var_124_int, var_118_bool);
		var_125_bool = var_118_bool == 0; //@nz
		if(var_125_bool != 0) {
		} else {
			var_117_int = var_117_int + (int)1;
			goto Label_1006;
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
	func_1114(var_132_bool, var_133_string);
	var_132_bool = var_109_bool;
	return 10;
	
}


func_491(var_25_object)
{
	var_26_int = 0; var_27_object = Obj();
	var_25_object = var_27_object;
	TaskCall(0);
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
	return 0;
}


func_1522(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj();
	GetMainOutdoorScene(var_22_object);
	var_24_bool = var_22_object == 0; //@ne
	if(var_24_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_23_object = 0;
		var_23_object = var_19_object;
		return 4;
	}
	@@var_22_object:GetMap(var_23_object);
	var_23_object = var_19_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1269(var_30_float)
{
	var_31_float = 0; var_32_float = 0;
	GetGameTime(var_32_float);
	var_32_float = var_30_float;
	return 2;
}


func_1274(var_153_int)
{
	var_154_float = 0; var_155_float = 0;
	GetGameTime(var_155_float);
	var_157_int = 0;
	var_157_int = var_155_float / (int)24;
	var_153_int = (int)1 + var_157_int;
	return 2;
}


