// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,SetVariable/2,IsLoaded/1,RemoveActor/1,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,Trigger/2,GetGameTime/1,HasAnimation/3,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Fear|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Smile|W:Neutral|W:Sly|W:b6q01KlaraLaska|W:cleanup|W:restore|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:Door |W: not found|W:locked|A:SetProperty|W:oob6Klara1|W:b6q01|W:b6q01KlaraGotoTermitnik2|W:pt_map_termitnik2|A:AddMark|W:quest_b6_01|W:remove_klara|W:init_termitnik|W:oob6Klara2|W:oob6Klara3|W:termitnik2@door1|A:ShowMap|W:b6q01KlaraVisit|W:fail|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:ui/NPC_Klara.png|W:ui/NPC_Klara_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x292
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xdc vars=int,int
// @TASK_2: vars=cvector,bool params=0
// @EVENT_32: op=0x2a2 vars=
// @EVENT_26: op=0x2ab vars=string
// @EVENT_6: op=0x2bf vars=
// @EVENT_5: op=0x2cc vars=
// @EVENT_7: op=0x315 vars=int
// @EVENT_45: op=0x357 vars=bool
// @EVENT_0: op=0x363 vars=object
// @PE: 0x51,0xc6,0xdc,0x29a,0x2a7,0x2cc,0x315,0x33b,0x357,0x55a,0x581,0x587,0x58d,0x594,0x5a4,0x5aa,0x5b4,0x5c0,0x5cc,0x5d8

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	if((int)1 != 0) {
		func_1275();
		var_12_bool = var_8_bool == (int)21762;
		if(var_12_bool != 0) {
			var_13_object = Obj(); var_14_object = Obj();
			var_13_object = var_1_object;
			var_14_object = var_0_object;
			func_1370();
		}
		var_18_bool = var_8_bool == (int)21883;
		if(var_18_bool != 0) {
			var_19_object = Obj(); var_20_object = Obj();
			var_19_object = var_1_object;
			var_20_object = var_0_object;
			func_1376();
			var_71_object = Obj(); var_72_object = Obj();
			var_71_object = var_1_object;
			var_72_object = var_0_object;
			func_1421();
			var_83_object = Obj(); var_84_object = Obj();
			var_83_object = var_1_object;
			var_84_object = var_0_object;
			func_1428(var_84_object);
		}
		var_110_bool = var_8_bool == (int)21780;
		if(var_110_bool != 0) {
			var_111_object = Obj(); var_112_object = Obj();
			var_111_object = var_1_object;
			var_112_object = var_0_object;
			func_1450();
		}
		var_125_bool = var_8_bool == (int)21788;
		if(var_125_bool != 0) {
			var_126_object = Obj(); var_127_object = Obj();
			var_126_object = var_1_object;
			var_127_object = var_0_object;
			func_1409();
		}
		var_131_bool = var_8_bool == (int)21793;
		if(var_131_bool != 0) {
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_1415();
		}
		var_137_bool = var_7_cvector == (int)21761;
		if(var_137_bool != 0) {
			var_138_object = Obj(); var_139_object = Obj();
			var_138_object = var_1_object;
			var_139_object = var_0_object;
			func_1444();
			var_142_string = "";
			func_198(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)520559);
			@@@var_0_object:ClearReplies();
			var_160_bool = 0;
			var_160_bool = 0;
			var_161_bool = 0; var_162_object = Obj();
			var_162_object = var_1_object;
			func_1460(var_162_object);
			if(var_161_bool != 0) {
				var_169_bool = 0; var_170_object = Obj();
				var_170_object = var_1_object;
				func_1472(var_170_object);
				if(var_169_bool != 0) {
					var_160_bool = 1;
				}
			}
			if(var_160_bool != 0) {
				@@@var_0_object:AddReply((int)520560, (int)21763, (int)21762);
			}
			var_178_bool = 0;
			var_178_bool = 0;
			var_179_bool = 0; var_180_object = Obj();
			var_180_object = var_1_object;
			func_1460(var_180_object);
			var_181_bool = var_179_bool == 0; //@nz
			if(var_181_bool != 0) {
				var_182_bool = 0; var_183_object = Obj();
				var_183_object = var_1_object;
				func_1484(var_183_object);
				if(var_182_bool != 0) {
					var_178_bool = 1;
				}
			}
			if(var_178_bool != 0) {
				@@@var_0_object:AddReply((int)520583, (int)21789, (int)21788);
			}
			var_191_bool = 0;
			var_191_bool = 0;
			var_192_bool = 0; var_193_object = Obj();
			var_193_object = var_1_object;
			func_1460(var_193_object);
			var_194_bool = var_192_bool == 0; //@nz
			if(var_194_bool != 0) {
				var_195_bool = 0; var_196_object = Obj();
				var_196_object = var_1_object;
				func_1496(var_196_object);
				if(var_195_bool != 0) {
					var_191_bool = 1;
				}
			}
			if(var_191_bool != 0) {
				@@@var_0_object:AddReply((int)520588, (int)21794, (int)21793);
			}
			@@@var_0_object:AddReply((int)520593, (int)-1, (int)21798);
			return 0;
		}
		var_208_bool = var_7_cvector == (int)21794;
		if(var_208_bool != 0) {
			var_209_string = "";
			func_198(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)520589);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520590, (int)21796, (int)21795);
			return 0;
		}
		var_215_bool = var_7_cvector == (int)21796;
		if(var_215_bool != 0) {
			var_216_string = "";
			func_198(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)520591);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520592, (int)-1, (int)21797);
			return 0;
		}
		var_222_bool = var_7_cvector == (int)21789;
		if(var_222_bool != 0) {
			var_223_string = "";
			func_198(var_8_bool, "Smile");
			@@@var_0_object:SetMessage((int)520584);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520585, (int)21791, (int)21790);
			return 0;
		}
		var_229_bool = var_7_cvector == (int)21791;
		if(var_229_bool != 0) {
			var_230_string = "";
			func_198(var_8_bool, "Smile");
			@@@var_0_object:SetMessage((int)520586);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520587, (int)-1, (int)21792);
			@@@var_0_object:AddReply((int)528358, (int)29730, (int)29729);
			return 0;
		}
		var_239_bool = var_7_cvector == (int)29730;
		if(var_239_bool != 0) {
			var_240_string = "";
			func_198(var_8_bool, "Smile");
			@@@var_0_object:SetMessage((int)528359);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528360, (int)-1, (int)29731);
			return 0;
		}
		var_246_bool = var_7_cvector == (int)21763;
		if(var_246_bool != 0) {
			var_247_string = "";
			func_198(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)520561);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520562, (int)21765, (int)21764);
			@@@var_0_object:AddReply((int)520582, (int)21769, (int)21787);
			return 0;
		}
		var_256_bool = var_7_cvector == (int)21765;
		if(var_256_bool != 0) {
			var_257_string = "";
			func_198(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520563);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520564, (int)21767, (int)21766);
			return 0;
		}
		var_263_bool = var_7_cvector == (int)21767;
		if(var_263_bool != 0) {
			var_264_string = "";
			func_198(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520565);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520566, (int)21769, (int)21768);
			@@@var_0_object:AddReply((int)528361, (int)21769, (int)29732);
			return 0;
		}
		var_273_bool = var_7_cvector == (int)21769;
		if(var_273_bool != 0) {
			var_274_string = "";
			func_198(var_8_bool, "Sly");
			@@@var_0_object:SetMessage((int)520567);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520568, (int)21771, (int)21770);
			@@@var_0_object:AddReply((int)520581, (int)21771, (int)21785);
			return 0;
		}
		var_283_bool = var_7_cvector == (int)21771;
		if(var_283_bool != 0) {
			var_284_string = "";
			func_198(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520569);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520570, (int)21773, (int)21772);
			@@@var_0_object:AddReply((int)520580, (int)21773, (int)21783);
			return 0;
		}
		var_293_bool = var_7_cvector == (int)21773;
		if(var_293_bool != 0) {
			var_294_string = "";
			func_198(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520571);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520572, (int)21775, (int)21774);
			@@@var_0_object:AddReply((int)520579, (int)21775, (int)21781);
			return 0;
		}
		var_303_bool = var_7_cvector == (int)21775;
		if(var_303_bool != 0) {
			var_304_string = "";
			func_198(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520573);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520574, (int)21777, (int)21776);
			return 0;
		}
		var_310_bool = var_7_cvector == (int)21777;
		if(var_310_bool != 0) {
			var_311_string = "";
			func_198(var_8_bool, "Smile");
			@@@var_0_object:SetMessage((int)520575);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520576, (int)21779, (int)21778);
			@@@var_0_object:AddReply((int)520578, (int)-1, (int)21780);
			return 0;
		}
		var_320_bool = var_7_cvector == (int)21779;
		if(var_320_bool != 0) {
			var_321_string = "";
			func_198(var_8_bool, "Smile");
			@@@var_0_object:SetMessage((int)520577);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520675, (int)-1, (int)21883);
			return 0;
		}
		var_3_string = true;
		var_326_bool = 0;
		func_1650(var_326_bool);
		if(var_326_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xdd";
	
}


task_2_event_32(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	SetVariable("b6q01KlaraLaska", (int)0);
	return 0;
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
			func_1282(var_13_object);
			RemoveActor(var_13_object);
		}
	} else {
		var_17_bool = var_7_string == "restore";
		if(var_17_bool == 0) goto Label_702;
		var_1_object = false;
	}
Label_702:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object;
	if(var_7_object != 0) {
		var_8_object = Obj();
		func_1282(var_8_object);
		RemoveActor(var_8_object);
		Hold();
	}
	func_827();
	return 0;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_842();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_9_bool = var_7_int == (int)10;
	if(var_9_bool != 0) {
		func_785();
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = 0;
		func_999(var_12_bool);
		if(var_12_bool != 0) {
			var_15_bool = 0;
			func_754(var_15_bool);
			if(var_15_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_32_bool = 0;
			func_734(var_32_bool);
			if(var_32_bool != 0) {
				var_51_bool = 0; var_52_object = Obj();
				func_1282(Obj());
				var_53_object = var_52_object;
				func_1149(var_51_bool, var_52_object);
			}
		} else {
			func_749(var_7_int);
			func_776();
		}
	}
	return 0;
	
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool;
	if(var_8_bool != 0) {
		func_776();
	} else {
		var_14_string = "";
		func_1229("Neutral");
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
		func_967();
		var_11_bool = 0; var_12_object = Obj();
		var_7_object = var_12_object;
		func_990(var_11_bool, var_12_object);
		EventEnable(0);
		var_25_object = Obj();
		var_7_object = var_25_object;
		func_666(var_25_object);
		var_296_string = "";
		func_1229("Neutral");
		func_785();
		func_776();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	SetVariable("b6q01KlaraLaska", (int)1);
	func_679();
	return 0;
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0;
	var_0_object = var_27_object;
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0;
	var_27_object = var_38_object;
	func_1004(var_37_bool, var_38_object, (float)70.0);
	var_84_bool = var_37_bool == 0; //@nz
	if(var_84_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	CreateDialog(var_33_object);
	var_85_int = 0;
	func_1644(var_85_int);
	@@var_33_object:SetNPCName(var_85_int);
	var_86_int = 0;
	func_1642(var_86_int);
	@@var_33_object:SetNPCDescription(var_86_int);
	var_87_string = "";
	func_1646(var_87_string);
	@@var_33_object:SetPhoto(var_87_string);
	var_88_string = "";
	func_1648(var_88_string);
	@@var_33_object:SetPhoto2(var_88_string);
	var_89_int = 0;
	func_1625(var_89_int);
	@@var_33_object:SetPlayerName(var_89_int);
	IsOverrideActive(var_34_bool);
	var_97_bool = var_34_bool;
	if(var_97_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	DoDialog(var_33_object);
	var_98_bool = 0; var_99_object = Obj();
	func_1282(Obj());
	var_100_object = var_99_object;
	func_1091(var_98_bool, var_99_object);
	var_193_object = Obj(); var_194_object = Obj();
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	@@var_33_object:IsDialogEnd(var_36_bool);
	
Label_63:
	var_287_bool = var_36_bool == 0; //@nz
	if(var_287_bool != 0) {
		sync();
		@@var_33_object:IsDialogEnd(var_36_bool);
		goto Label_63;
	}
	var_27_object = Obj();
	func_1073();
	StopDialog(var_33_object);
	@@var_33_object:GetReturnValue((int)-1);
	var_35_int = var_26_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1409()
{
	SetVariable("oob6Klara2", (int)1);
	return 0;
}


func_1282(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj();
	self(var_102_object);
	var_102_object = var_100_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_896()
{
	var_13_int = 0; var_14_int = 0; var_15_bool = 0; var_16_int = 0; var_17_int = 0; var_18_bool = 0; var_19_int = 0; var_20_int = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0;
	WaitForAnimEnd();
	var_25_bool = 0;
	func_999(var_25_bool);
	var_26_bool = var_25_bool == 0; //@nz
	if(var_26_bool != 0) {
		return 12;
	}
	func_1353((int)0);
	var_27_int = var_19_int;
	var_20_int = 0;
	
Label_910:
	var_40_bool = 0;
	var_40_bool = 0;
	var_42_bool = var_20_int < (int)5;
	if(var_42_bool != 0) {
		var_43_bool = 0;
		func_999(var_43_bool);
		if(var_43_bool != 0) {
			var_40_bool = 1;
		}
	}
	if(var_40_bool != 0) {
		var_44_bool = var_19_int == 0; //@nz
		if(var_44_bool != 0) {
			Sleep((int)3, var_21_bool);
			var_46_bool = var_21_bool == 0; //@nz
			if(var_46_bool != 0) {
			} else {
		} else {
				irand(var_22_int, var_19_int);
				irand(var_23_int, (int)5);
				var_52_bool = var_23_int != (int)0;
				if(var_52_bool != 0) {
					var_22_int = 0;
				}
				var_54_string = ""; var_55_int = 0;
				var_22_int = var_55_int;
				func_1346(var_54_string, var_55_int);
				PlayAnimation("all", var_54_string);
				WaitForAnimEnd(var_24_bool);
				var_56_bool = var_24_bool == 0; //@nz
				if(var_56_bool == 0) goto Label_951;
				goto Label_962;
		}
		Label_951:
			var_47_bool = 0;
			func_965(var_47_bool);
			var_48_bool = var_47_bool == 0; //@nz
			if(var_48_bool != 0) {
				goto Label_962;
			}
			ResetAAS();
			var_20_int = var_20_int + (int)1;
			goto Label_910;

		}
	}
Label_962:
	ResetAAS();
	return 12;
	
}


func_1415()
{
	SetVariable("oob6Klara3", (int)1);
	return 0;
}


func_776()
{
	var_298_float = 0; var_299_float = 0;
	rand(var_299_float, (int)8, (int)16);
	SetTimer((int)10, var_299_float);
	return 2;
}


func_1288(var_64_cvector, var_65_cvector)
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


func_1547(var_44_bool, var_45_object, var_46_int)
{
	var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0; var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0;
	func_1534(Obj());
	var_53_object = var_50_object;
	@@var_50_object:Find(var_46_int, var_51_object);
	var_58_bool = var_51_object == 0; //@nz
	if(var_58_bool != 0) {
		var_60_int = "Can't find diary parent with id: " + var_46_int;
		Trace(var_60_int);
		var_44_bool = 0;
		return 6;
	}
	@@var_51_object:AddChild(var_45_object);
	SendWorldWndMessage((int)7);
	@@var_45_object:GetCategory(var_52_int);
	SetDiarySection(var_52_int);
	var_44_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1421()
{
	var_73_string = ""; var_74_bool = 0;
	func_1303("termitnik2@door1", (bool)0);
	return 0;
}


func_785()
{
	KillTimer((int)10);
	return 0;
}


func_1298(var_225_int, var_226_string)
{
	var_227_int = 0; var_228_int = 0;
	GetVariable(var_226_string, var_228_int);
	var_228_int = var_225_int;
	return 2;
}


func_1428(var_84_object)
{
	var_85_object = Obj(); var_86_string = ""; var_87_float = 0;
	func_1575(Obj());
	var_88_object = var_85_object;
	func_1592(var_85_object, "pt_map_termitnik2", (float)2);
	var_108_object = Obj();
	func_1575(var_108_object);
	@@var_84_object:ShowMap(var_108_object);
	return 0;
}


func_1303(var_73_string, var_74_bool)
{
	var_75_object = Obj(); var_76_object = Obj();
	FindActor(var_76_object, var_73_string);
	var_77_bool = var_76_object == 0; //@nz
	if(var_77_bool != 0) {
		var_79_int = "Door " + var_73_string;
		var_81_int = var_79_int + " not found";
		Trace(var_81_int);
	} else {
		@@var_76_object:SetProperty("locked", var_74_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_666(var_25_object)
{
	var_26_int = 0; var_27_object = Obj();
	var_25_object = var_27_object;
	TaskCall(0);
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
	return 0;
}


func_1186(var_140_bool, var_141_object)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = "";
	var_153_int = 0;
	func_1337(var_153_int);
	var_159_int = "d" + var_153_int;
	var_147_string = var_159_int + "m";
	var_148_int = 0;
	
Label_1195:
	if((int)1 != 0) {
		var_163_int = var_148_int + (int)1;
		var_164_int = var_147_string + var_163_int;
		@@var_141_object:HasProperty(var_164_int, var_149_bool);
		var_165_bool = var_149_bool == 0; //@nz
		if(var_165_bool != 0) {
		} else {
			var_148_int = var_148_int + (int)1;
			goto Label_1195;
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
	func_1260(var_172_bool, var_173_string);
	var_172_bool = var_140_bool;
	return 10;
	
}


func_1444()
{
	SetVariable("b6q01KlaraVisit", (int)1);
	return 0;
}


func_679()
{
	func_720(var_6_bool);
	return 0;
}


func_1575(var_25_object)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj();
	GetMainOutdoorScene(var_28_object);
	var_30_bool = var_28_object == 0; //@ne
	if(var_30_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_29_object = 0;
		var_29_object = var_25_object;
		return 4;
	}
	@@var_28_object:GetMap(var_29_object);
	var_29_object = var_25_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1320(var_62_bool, var_63_string, var_64_string)
{
	var_65_object = Obj(); var_66_object = Obj();
	FindActor(var_66_object, var_63_string);
	var_67_bool = var_66_object == 0; //@ne
	if(var_67_bool != 0) {
		var_62_bool = 0;
		return 2;
	}
	Trigger(var_66_object, var_64_string);
	var_62_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1450()
{
	func_1508();
	var_121_bool = 0; var_122_string = ""; var_123_string = "";
	func_1320(var_121_bool, "quest_b6_01", "fail");
	return 0;
}


func_1073()
{
	var_289_bool = 0; var_290_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_292_bool = 0;
	func_1650(var_292_bool);
	if(var_292_bool != 0) {
	} else {
		HasAnimationTrack(var_290_bool, "head");
		var_294_bool = var_290_bool;
		if(var_294_bool == 0) goto Label_1090;
		UnlookAsync("head");
	}
Label_1090:
	return 2;
	
}


func_1460(var_223_bool)
{
	var_225_int = 0; var_226_string = "";
	func_1298(var_225_int, "oob6Klara1");
	var_230_bool = var_225_int == (int)0;
	if(var_230_bool != 0) {
		var_223_bool = 1;
		return 0;
	}
	var_223_bool = 0;
	return 0;
}


func_1332(var_36_float)
{
	var_37_float = 0; var_38_float = 0;
	GetGameTime(var_38_float);
	var_38_float = var_36_float;
	return 2;
}


func_1592(var_85_object, var_86_string, var_87_float)
{
	var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_object = Obj(); var_92_bool = 0; var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_object = Obj(); var_96_bool = 0;
	GetMainOutdoorScene(var_95_object);
	var_97_bool = var_95_object == 0; //@ne
	if(var_97_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_95_object:GetLocator(var_86_string, var_96_bool, var_93_cvector, var_94_cvector);
	var_99_bool = var_96_bool == 0; //@nz
	if(var_99_bool != 0) {
		var_101_int = "Warning: outdoor scene locator " + var_86_string;
		var_103_int = var_101_int + " doesnt exist";
		Trace(var_103_int);
	}
	@@var_95_object:GetMap(var_85_object);
	var_104_bool = var_85_object == 0; //@ne
	if(var_104_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_106_float = GetByIndex(var_93_cvector, 0);
	var_107_float = GetByIndex(var_93_cvector, 2);
	@@var_85_object:SetMapParams(var_106_float, var_107_float, var_87_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_1337(var_153_int)
{
	var_154_float = 0; var_155_float = 0;
	GetGameTime(var_155_float);
	var_157_int = 0;
	var_157_int = var_155_float / (int)24;
	var_153_int = (int)1 + var_157_int;
	return 2;
}


func_827()
{
	func_967();
	func_785();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


func_1472(var_231_bool)
{
	var_233_int = 0; var_234_string = "";
	func_1298(var_233_int, "b6q01");
	var_236_bool = var_233_int == (int)1;
	if(var_236_bool != 0) {
		var_231_bool = 1;
		return 0;
	}
	var_231_bool = 0;
	return 0;
}


func_1346(var_33_string, var_34_int)
{
	var_35_string = ""; var_36_string = "";
	var_37_int = var_34_int;
	if(var_37_int != 0) {
		"idle" = "idle" + var_34_int;
	}
	var_36_string = var_33_string;
	return 2;
}


func_1091(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0;
	GetVariable("voice_common", var_105_int);
	var_108_int = var_105_int;
	if(var_108_int != 0) {
		var_109_bool = 0; var_110_object = Obj();
		var_99_object = var_110_object;
		func_1149(var_109_bool, var_110_object);
		var_139_bool = var_109_bool == 0; //@nz
		if(var_139_bool != 0) {
			var_140_bool = 0; var_141_object = Obj();
			var_99_object = var_141_object;
			func_1186(var_140_bool, var_141_object);
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
		func_1186(var_185_bool, var_186_object);
		var_187_bool = var_185_bool == 0; //@nz
		if(var_187_bool != 0) {
			var_188_bool = 0; var_189_object = Obj();
			var_99_object = var_189_object;
			func_1149(var_188_bool, var_189_object);
			var_190_bool = var_188_bool == 0; //@nz
			if(var_190_bool != 0) {
				var_98_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1147;
	
Label_1147:
	var_98_bool = 1;
	return 4;
	
}


func_965(var_47_bool)
{
	var_47_bool = 1;
	return 0;
}


func_198(var_2_object, var_204_string)
{
	var_205_bool = 0;
	func_1650(var_205_bool);
	var_206_bool = var_205_bool == 0; //@nz
	if(var_206_bool != 0) {
		return 0;
	}
	var_207_bool = var_204_string == var_2_object;
	if(var_207_bool != 0) {
		return 0;
	}
	var_208_string = ""; var_209_bool = 0;
	var_204_string = var_208_string;
	var_211_bool = var_204_string == "";
	if(var_211_bool != 0) {
		var_209_bool = 0;
	} else {
		var_209_bool = 1;
	}
	func_1245(var_208_string, var_209_bool);
	var_2_object = var_204_string;
	return 0;
	
}


func_967()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1353(var_27_int)
{
	var_28_int = 0; var_29_bool = 0; var_30_int = 0; var_31_bool = 0;
	var_30_int = 0;
	
Label_1355:
	var_33_string = ""; var_34_int = 0;
	var_30_int = var_34_int;
	func_1346(var_33_string, var_34_int);
	HasAnimation(var_31_bool, "all", var_33_string);
	var_38_bool = var_31_bool == 0; //@nz
	if(var_38_bool != 0) {
	} else {
		var_30_int = var_30_int + (int)1;
		goto Label_1355;
	}
	var_30_int = var_27_int;
	return 4;
	
}


func_842()
{
	StopGroup0();
	func_785();
	var_8_string = "";
	func_1229("Neutral");
	func_776();
	return 0;
}


func_1484(var_244_bool)
{
	var_246_int = 0; var_247_string = "";
	func_1298(var_246_int, "oob6Klara2");
	var_249_bool = var_246_int == (int)0;
	if(var_249_bool != 0) {
		var_244_bool = 1;
		return 0;
	}
	var_244_bool = 0;
	return 0;
}


func_1229(var_271_string)
{
	var_272_bool = 0; var_273_float = 0; var_274_float = 0; var_275_bool = 0; var_276_float = 0; var_277_float = 0;
	lshHasAnimation(var_275_bool, var_271_string);
	var_278_bool = var_275_bool;
	if(var_278_bool != 0) {
		lshGetAnimTimes(var_271_string, var_276_float, var_277_float);
		lshPlayAnimation(var_276_float, var_277_float, (bool)0);
	} else {
		var_281_int = "Can't find lsh animation : " + var_271_string;
		Trace(var_281_int);
	}
	return 6;
	
}


func_972(var_22_float, var_23_object)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0);
	GetPosition(var_27_cvector);
	@@var_23_object:GetPosition(var_28_cvector);
	var_29_cvector = var_28_cvector - var_27_cvector;
	var_22_float = var_29_cvector | var_29_cvector;
	return 6;
}


func_720(var_0_object)
{
	var_9_bool = 0;
	func_999(var_9_bool);
	var_12_bool = var_9_bool == 0; //@nz
	if(var_12_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_729:
	func_896();
	goto Label_729;
}
EMIT "Return(); Pop(0)";


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_200_object = Obj(); var_201_object = Obj();
		var_200_object = var_1_object;
		var_201_object = var_0_object;
		func_1444();
		var_204_string = "";
		func_198(var_194_object, "Fear");
		@@@var_0_object:SetMessage((int)520559);
		@@@var_0_object:ClearReplies();
		var_222_bool = 0;
		var_222_bool = 0;
		var_223_bool = 0; var_224_object = Obj();
		var_224_object = var_1_object;
		func_1460(var_224_object);
		if(var_223_bool != 0) {
			var_231_bool = 0; var_232_object = Obj();
			var_232_object = var_1_object;
			func_1472(var_232_object);
			if(var_231_bool != 0) {
				var_222_bool = 1;
			}
		}
		if(var_222_bool != 0) {
			@@@var_0_object:AddReply((int)520560, (int)21763, (int)21762);
		}
		var_240_bool = 0;
		var_240_bool = 0;
		var_241_bool = 0; var_242_object = Obj();
		var_242_object = var_1_object;
		func_1460(var_242_object);
		var_243_bool = var_241_bool == 0; //@nz
		if(var_243_bool != 0) {
			var_244_bool = 0; var_245_object = Obj();
			var_245_object = var_1_object;
			func_1484(var_245_object);
			if(var_244_bool != 0) {
				var_240_bool = 1;
			}
		}
		if(var_240_bool != 0) {
			@@@var_0_object:AddReply((int)520583, (int)21789, (int)21788);
		}
		var_253_bool = 0;
		var_253_bool = 0;
		var_254_bool = 0; var_255_object = Obj();
		var_255_object = var_1_object;
		func_1460(var_255_object);
		var_256_bool = var_254_bool == 0; //@nz
		if(var_256_bool != 0) {
			var_257_bool = 0; var_258_object = Obj();
			var_258_object = var_1_object;
			func_1496(var_258_object);
			if(var_257_bool != 0) {
				var_253_bool = 1;
			}
		}
		if(var_253_bool != 0) {
			@@@var_0_object:AddReply((int)520588, (int)21794, (int)21793);
		}
		@@@var_0_object:AddReply((int)520593, (int)-1, (int)21798);
		goto Label_168;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_168:
	var_269_bool = 0;
	func_1650(var_269_bool);
	if(var_269_bool != 0) {

	Label_172:
		lshWaitForAnimEnd();
		var_270_string = var_3_string;
		if(var_270_string != 0) {
		} else {
			var_271_string = "";
			var_271_string = var_2_object;
			func_1229(var_271_string);
			goto Label_172;
	}
		PlayAnimation("all", "idle");

	Label_187:
		WaitForAnimEnd();
		var_284_string = var_3_string;
		if(var_284_string != 0) {
			goto Label_197;
		}
		PlayAnimation("all", "idle");
		goto Label_187;
	}
	goto Label_197;
	
Label_197:
	return 0;
	
}


func_980(var_15_bool, var_16_cvector)
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


func_1496(var_257_bool)
{
	var_259_int = 0; var_260_string = "";
	func_1298(var_259_int, "oob6Klara3");
	var_262_bool = var_259_int == (int)0;
	if(var_262_bool != 0) {
		var_257_bool = 1;
		return 0;
	}
	var_257_bool = 0;
	return 0;
}


func_1625(var_89_int)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable("branch", var_91_int);
	var_94_bool = var_91_int == (int)0;
	if(var_94_bool != 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x668";
	}
	var_96_bool = var_91_int == (int)1;
	if(var_96_bool != 0) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
	return 2;
}


func_1370()
{
	SetVariable("oob6Klara1", (int)1);
	return 0;
}


func_1245(var_208_string, var_209_bool)
{
	var_212_bool = 0; var_213_float = 0; var_214_float = 0; var_215_bool = 0; var_216_float = 0; var_217_float = 0;
	lshHasAnimation(var_215_bool, var_208_string);
	var_218_bool = var_215_bool;
	if(var_218_bool != 0) {
		lshGetAnimTimes(var_208_string, var_216_float, var_217_float);
		lshPlayAnimation(var_216_float, var_217_float, var_209_bool);
	} else {
		var_220_int = "Can't find lsh animation : " + var_208_string;
		Trace(var_220_int);
	}
	return 6;
	
}


func_990(var_11_bool, var_12_object)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0);
	@@var_12_object:GetPosition(var_14_cvector);
	var_15_bool = 0; var_16_cvector = CVector(0,0,0);
	var_14_cvector = var_16_cvector;
	func_980(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
	return 2;
}


func_734(var_32_bool)
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
	func_990(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1376()
{
	var_21_object = Obj(); var_22_object = Obj();
	SetVariable("b6q01", (int)2);
	func_1575(Obj());
	var_25_object = var_22_object;
	var_36_float = 0;
	func_1332(var_36_float);
	@@var_22_object:AddMark("b6q01KlaraGotoTermitnik2", "pt_map_termitnik2", (int)1, (int)525668, var_36_float);
	func_1521();
	var_62_bool = 0; var_63_string = ""; var_64_string = "";
	func_1320(var_62_bool, "quest_b6_01", "remove_klara");
	var_68_bool = 0; var_69_string = ""; var_70_string = "";
	func_1320(var_68_bool, "quest_b6_01", "init_termitnik");
	return 2;
}
EMIT "Stack[-1] = 0";


func_1508()
{
	var_113_object = Obj(); var_114_object = Obj();
	CreateDiaryEntry(var_114_object, (int)783, (int)1, (int)542148);
	var_118_bool = 0; var_119_object = Obj(); var_120_int = 0;
	var_114_object = var_119_object;
	func_1547(var_118_bool, var_119_object, (int)265);
	return 2;
}
EMIT "Stack[-1] = 0";


func_999(var_9_bool)
{
	var_10_bool = 0; var_11_bool = 0;
	IsLoaded(var_11_bool);
	var_11_bool = var_9_bool;
	return 2;
}


func_1642(var_86_int)
{
	var_86_int = 515540;
	return 0;
}


func_1644(var_85_int)
{
	var_85_int = 502865;
	return 0;
}


func_1004(var_37_bool, var_38_object, var_39_float)
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
	func_1288(var_64_cvector, var_65_cvector);
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
	func_1650(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		HasAnimationTrack(var_57_bool, "head");
		var_82_bool = var_57_bool;
		if(var_82_bool == 0) goto Label_1067;
		LookAsyncCamera("head");
	}
Label_1067:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_37_bool = 1;
	return 18;
	
}


func_1646(var_87_string)
{
	var_87_string = "ui/NPC_Klara.png";
	return 0;
}


func_749(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_84_float, var_85_float);
	return 0;
}


func_1648(var_88_string)
{
	var_88_string = "ui/NPC_Klara_b.png";
	return 0;
}


func_1260(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0;
	var_136_bool = 0;
	func_1650(var_136_bool);
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


func_1650(var_80_bool)
{
	var_80_bool = 1;
	return 0;
}


func_754(var_15_bool)
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
	func_972(var_22_float, var_23_object);
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


func_1521()
{
	var_39_object = Obj(); var_40_object = Obj();
	CreateDiaryEntry(var_40_object, (int)362, (int)1, (int)525662);
	var_44_bool = 0; var_45_object = Obj(); var_46_int = 0;
	var_40_object = var_45_object;
	func_1547(var_44_bool, var_45_object, (int)265);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1275()
{
	var_10_bool = 0;
	func_1650(var_10_bool);
	if(var_10_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1149(var_109_bool, var_110_object)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = "";
	var_116_string = "c";
	var_117_int = 0;
	
Label_1152:
	if((int)1 != 0) {
		var_123_int = var_117_int + (int)1;
		var_124_int = var_116_string + var_123_int;
		@@var_110_object:HasProperty(var_124_int, var_118_bool);
		var_125_bool = var_118_bool == 0; //@nz
		if(var_125_bool != 0) {
		} else {
			var_117_int = var_117_int + (int)1;
			goto Label_1152;
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
	func_1260(var_132_bool, var_133_string);
	var_132_bool = var_109_bool;
	return 10;
	
}


func_1534(var_53_object)
{
	var_54_object = Obj(); var_55_object = Obj();
	GetDiaryRoot(var_55_object);
	var_56_bool = var_55_object == 0; //@nz
	if(var_56_bool != 0) {
		Trace("Can't retrieve diary root");
		var_53_object = 0;
		return 2;
	}
	var_55_object = var_53_object;
	return 2;
}
EMIT "Stack[-1] = 0";


