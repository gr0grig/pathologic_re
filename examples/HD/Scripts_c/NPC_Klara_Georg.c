// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,SendWorldWndMessage/1,CreateFloatVector/1,Trigger/2,GetGameTime/1,HasAnimation/3,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Anger|A:SetMessage|A:ClearReplies|A:AddReply|W:Jeer|W:all|W:idle|W:Distrust|W:Neutral|W:Grin|W:player|A:GetPosition|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|W:m|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:reputation|W:ui/NPC_Georg.png|W:ui/NPC_Georg_b.png|W:k1q02|W:k1q02GeorgGotoMaria|W:pt_map_maria|A:AddMark|W:beta_pills 5 is given|W:beta_pills|W:ook3Georg1|W:k5q01|W:ook10Georg1|W:k9q01|W:quest_k9_01|W:init_termitnik2|W:ook1Georg1|W:raincoat_repel is given|W:raincoat_repel|W:fail|W:revolver ammo6 is given|W:revolver_ammo|A:ShowMap|W:k3q03|W:k10q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0xd10
// @RUN_TASK: 16
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xd2 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x3b9 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x4c0 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x5fb vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x74b vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9ff vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0xbe8 vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0xce6 vars=int,int
// @TASK_16: vars=cvector params=0
// @EVENT_7: op=0xd5c vars=int
// @EVENT_6: op=0xd82 vars=
// @EVENT_5: op=0xd91 vars=
// @EVENT_45: op=0xd9e vars=bool
// @EVENT_0: op=0xdaa vars=object
// @PE: 0x51,0xbc,0xd2,0x369,0x3a3,0x3b9,0x462,0x4aa,0x4c0,0x5a6,0x5e5,0x5fb,0x6e7,0x735,0x74b,0x98f,0x9e9,0x9ff,0xb93,0xbd2,0xbe8,0xc96,0xcd0,0xce6,0xd5c,0xd82,0xd9e,0xf7b,0xfb7,0xffe,0x103d,0x1046,0x1051,0x1057,0x1060,0x1066,0x1074,0x107d,0x1083,0x108c,0x1097,0x10a1,0x10ac,0x10b3,0x10ba,0x10ca,0x10d6,0x10e2,0x10ee,0x10fa,0x1106,0x1112,0x111e,0x112a,0x1136,0x1142,0x1215

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_3940();
		var_46_bool = var_42_cvector == (int)28456;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_4134();
			var_90_object = Obj(); var_91_object = Obj();
			var_90_object = var_1_object;
			var_91_object = var_0_object;
			func_4282(var_91_object);
		}
		var_117_bool = var_42_cvector == (int)26079;
		if(var_117_bool != 0) {
			var_118_object = Obj(); var_119_object = Obj();
			var_118_object = var_1_object;
			var_119_object = var_0_object;
			func_4134();
			var_120_object = Obj(); var_121_object = Obj();
			var_120_object = var_1_object;
			var_121_object = var_0_object;
			func_4282(var_121_object);
		}
		var_123_bool = var_42_cvector == (int)26091;
		if(var_123_bool != 0) {
			var_124_object = Obj(); var_125_object = Obj();
			var_124_object = var_1_object;
			var_125_object = var_0_object;
			func_4157();
		}
		var_137_bool = var_42_cvector == (int)28475;
		if(var_137_bool != 0) {
			var_138_object = Obj(); var_139_object = Obj();
			var_138_object = var_1_object;
			var_139_object = var_0_object;
			func_4157();
		}
		var_141_bool = var_42_cvector == (int)28220;
		if(var_141_bool != 0) {
			var_142_object = Obj(); var_143_object = Obj();
			var_142_object = var_1_object;
			var_143_object = var_0_object;
			func_4227();
		}
		var_155_bool = var_42_cvector == (int)28221;
		if(var_155_bool != 0) {
			var_156_object = Obj(); var_157_object = Obj();
			var_156_object = var_1_object;
			var_157_object = var_0_object;
			func_4227();
		}
		var_159_bool = var_42_cvector == (int)28218;
		if(var_159_bool != 0) {
			var_160_object = Obj(); var_161_object = Obj();
			var_160_object = var_1_object;
			var_161_object = var_0_object;
			func_4227();
		}
		var_163_bool = var_42_cvector == (int)31738;
		if(var_163_bool != 0) {
			var_164_object = Obj(); var_165_object = Obj();
			var_164_object = var_1_object;
			var_165_object = var_0_object;
			func_4134();
			var_166_object = Obj(); var_167_object = Obj();
			var_166_object = var_1_object;
			var_167_object = var_0_object;
			func_4282(var_167_object);
		}
		var_169_bool = var_41_bool == (int)26078;
		if(var_169_bool != 0) {
			var_170_bool = 0;
			var_170_bool = 0;
			var_171_bool = 0; var_172_object = Obj();
			var_172_object = var_1_object;
			func_4298(var_172_object);
			if(var_171_bool != 0) {
				var_179_bool = 0; var_180_object = Obj();
				var_180_object = var_1_object;
				func_4418(var_180_object);
				if(var_179_bool != 0) {
					var_170_bool = 1;
				}
			}
			if(var_170_bool != 0) {
				var_185_object = Obj(); var_186_object = Obj();
				var_185_object = var_1_object;
				var_186_object = var_0_object;
				func_4221();
				var_189_string = "";
				func_188(var_42_cvector, "Anger");
				@@@var_0_object:SetMessage((int)524754);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)526909, (int)28202, (int)28201);
				return 0;
			}
			var_210_string = "";
			func_188(var_42_cvector, "Jeer");
			@@@var_0_object:SetMessage((int)524756);
			@@@var_0_object:ClearReplies();
			var_212_bool = 0; var_213_object = Obj();
			var_213_object = var_1_object;
			func_4310(var_213_object);
			if(var_212_bool != 0) {
				@@@var_0_object:AddReply((int)524763, (int)26088, (int)26087);
			}
			var_221_bool = 0; var_222_object = Obj();
			var_222_object = var_1_object;
			func_4298(var_222_object);
			if(var_221_bool != 0) {
				@@@var_0_object:AddReply((int)530365, (int)-1, (int)31738);
			}
			@@@var_0_object:AddReply((int)524757, (int)-1, (int)26081);
			return 0;
		}
		var_230_bool = var_41_bool == (int)26088;
		if(var_230_bool != 0) {
			var_231_string = "";
			func_188(var_42_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)524764);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524765, (int)26090, (int)26089);
			@@@var_0_object:AddReply((int)526923, (int)28216, (int)28215);
			return 0;
		}
		var_240_bool = var_41_bool == (int)28216;
		if(var_240_bool != 0) {
			var_241_string = "";
			func_188(var_42_cvector, "Anger");
			@@@var_0_object:SetMessage((int)526924);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526925, (int)28219, (int)28217);
			@@@var_0_object:AddReply((int)526926, (int)-1, (int)28218);
			return 0;
		}
		var_250_bool = var_41_bool == (int)28219;
		if(var_250_bool != 0) {
			var_251_string = "";
			func_188(var_42_cvector, "Anger");
			@@@var_0_object:SetMessage((int)526927);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526928, (int)-1, (int)28220);
			@@@var_0_object:AddReply((int)526929, (int)-1, (int)28221);
			return 0;
		}
		var_260_bool = var_41_bool == (int)26090;
		if(var_260_bool != 0) {
			var_261_string = "";
			func_188(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)524766);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526915, (int)28208, (int)28207);
			@@@var_0_object:AddReply((int)526930, (int)28223, (int)28222);
			return 0;
		}
		var_270_bool = var_41_bool == (int)28223;
		if(var_270_bool != 0) {
			var_271_string = "";
			func_188(var_42_cvector, "Anger");
			@@@var_0_object:SetMessage((int)526931);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526932, (int)28208, (int)28224);
			return 0;
		}
		var_277_bool = var_41_bool == (int)28208;
		if(var_277_bool != 0) {
			var_278_string = "";
			func_188(var_42_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)526916);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526917, (int)28210, (int)28209);
			@@@var_0_object:AddReply((int)527156, (int)28460, (int)28459);
			return 0;
		}
		var_287_bool = var_41_bool == (int)28460;
		if(var_287_bool != 0) {
			var_288_string = "";
			func_188(var_42_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)527157);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527158, (int)28210, (int)28461);
			return 0;
		}
		var_294_bool = var_41_bool == (int)28210;
		if(var_294_bool != 0) {
			var_295_string = "";
			func_188(var_42_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)526918);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526919, (int)28212, (int)28211);
			@@@var_0_object:AddReply((int)527159, (int)28464, (int)28463);
			return 0;
		}
		var_304_bool = var_41_bool == (int)28464;
		if(var_304_bool != 0) {
			var_305_string = "";
			func_188(var_42_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)527160);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527161, (int)28214, (int)28465);
			return 0;
		}
		var_311_bool = var_41_bool == (int)28212;
		if(var_311_bool != 0) {
			var_312_string = "";
			func_188(var_42_cvector, "Anger");
			@@@var_0_object:SetMessage((int)526920);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526921, (int)28214, (int)28213);
			@@@var_0_object:AddReply((int)527166, (int)28214, (int)28471);
			return 0;
		}
		var_321_bool = var_41_bool == (int)28214;
		if(var_321_bool != 0) {
			var_322_string = "";
			func_188(var_42_cvector, "Anger");
			@@@var_0_object:SetMessage((int)526922);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527162, (int)28467, (int)28466);
			@@@var_0_object:AddReply((int)527167, (int)28467, (int)28473);
			return 0;
		}
		var_331_bool = var_41_bool == (int)28467;
		if(var_331_bool != 0) {
			var_332_string = "";
			func_188(var_42_cvector, "Anger");
			@@@var_0_object:SetMessage((int)527163);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527164, (int)28469, (int)28468);
			@@@var_0_object:AddReply((int)527169, (int)28477, (int)28476);
			return 0;
		}
		var_341_bool = var_41_bool == (int)28477;
		if(var_341_bool != 0) {
			var_342_string = "";
			func_188(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527170);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527171, (int)28469, (int)28478);
			return 0;
		}
		var_348_bool = var_41_bool == (int)28469;
		if(var_348_bool != 0) {
			var_349_string = "";
			func_188(var_42_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)527165);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524767, (int)-1, (int)26091);
			@@@var_0_object:AddReply((int)527168, (int)-1, (int)28475);
			return 0;
		}
		var_358_bool = var_41_bool == (int)28202;
		if(var_358_bool != 0) {
			var_359_string = "";
			func_188(var_42_cvector, "Anger");
			@@@var_0_object:SetMessage((int)526910);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527148, (int)28450, (int)28448);
			@@@var_0_object:AddReply((int)527149, (int)28450, (int)28449);
			return 0;
		}
		var_368_bool = var_41_bool == (int)28450;
		if(var_368_bool != 0) {
			var_369_string = "";
			func_188(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527150);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526911, (int)28452, (int)28203);
			return 0;
		}
		var_375_bool = var_41_bool == (int)28452;
		if(var_375_bool != 0) {
			var_376_string = "";
			func_188(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527151);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527152, (int)28204, (int)28453);
			@@@var_0_object:AddReply((int)527153, (int)28204, (int)28454);
			return 0;
		}
		var_385_bool = var_41_bool == (int)28204;
		if(var_385_bool != 0) {
			var_386_string = "";
			func_188(var_42_cvector, "Jeer");
			@@@var_0_object:SetMessage((int)526912);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527146, (int)28447, (int)28446);
			@@@var_0_object:AddReply((int)524755, (int)-1, (int)26079);
			return 0;
		}
		var_395_bool = var_41_bool == (int)28447;
		if(var_395_bool != 0) {
			var_396_string = "";
			func_188(var_42_cvector, "Jeer");
			@@@var_0_object:SetMessage((int)527147);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527154, (int)-1, (int)28456);
			@@@var_0_object:AddReply((int)527155, (int)-1, (int)28457);
			return 0;
		}
		var_3_string = true;
		var_404_bool = 0;
		func_4132(var_404_bool);
		if(var_404_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xd3";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_3940();
		var_46_bool = var_41_bool == (int)26836;
		if(var_46_bool != 0) {
			var_47_string = "";
			func_931(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525480);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525481, (int)27536, (int)26837);
			@@@var_0_object:AddReply((int)526263, (int)27536, (int)27537);
			return 0;
		}
		var_72_bool = var_41_bool == (int)27536;
		if(var_72_bool != 0) {
			var_73_string = "";
			func_931(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526262);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526264, (int)27540, (int)27539);
			@@@var_0_object:AddReply((int)526266, (int)-1, (int)27541);
			return 0;
		}
		var_82_bool = var_41_bool == (int)27540;
		if(var_82_bool != 0) {
			var_83_string = "";
			func_931(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526265);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526267, (int)-1, (int)27542);
			@@@var_0_object:AddReply((int)526268, (int)-1, (int)27543);
			return 0;
		}
		var_3_string = true;
		var_91_bool = 0;
		func_4132(var_91_bool);
		if(var_91_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x3ba";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_3940();
		var_46_bool = var_42_cvector == (int)26943;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_4177();
		}
		var_52_bool = var_42_cvector == (int)26945;
		if(var_52_bool != 0) {
			var_53_object = Obj(); var_54_object = Obj();
			var_53_object = var_1_object;
			var_54_object = var_0_object;
			func_4268(var_54_object);
		}
		var_94_bool = var_42_cvector == (int)42709;
		if(var_94_bool != 0) {
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_object;
			var_96_object = var_0_object;
			func_4275(var_96_object);
		}
		var_101_bool = var_41_bool == (int)26941;
		if(var_101_bool != 0) {
			var_102_string = "";
			func_1194(var_42_cvector, "Jeer");
			@@@var_0_object:SetMessage((int)525594);
			@@@var_0_object:ClearReplies();
			var_120_bool = 0;
			var_120_bool = 0;
			var_121_bool = 0; var_122_object = Obj();
			var_122_object = var_1_object;
			func_4322(var_122_object);
			if(var_121_bool != 0) {
				var_129_bool = 0; var_130_object = Obj();
				var_130_object = var_1_object;
				func_4334(var_130_object);
				if(var_129_bool != 0) {
					var_120_bool = 1;
				}
			}
			if(var_120_bool != 0) {
				@@@var_0_object:AddReply((int)525596, (int)26944, (int)26943);
			}
			@@@var_0_object:AddReply((int)525595, (int)-1, (int)26942);
			return 0;
		}
		var_142_bool = var_41_bool == (int)26944;
		if(var_142_bool != 0) {
			var_143_string = "";
			func_1194(var_42_cvector, "Anger");
			@@@var_0_object:SetMessage((int)525597);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540670, (int)42702, (int)42701);
			@@@var_0_object:AddReply((int)540672, (int)42702, (int)42703);
			return 0;
		}
		var_152_bool = var_41_bool == (int)42702;
		if(var_152_bool != 0) {
			var_153_string = "";
			func_1194(var_42_cvector, "Anger");
			@@@var_0_object:SetMessage((int)540671);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540673, (int)42706, (int)42704);
			@@@var_0_object:AddReply((int)540675, (int)42706, (int)42707);
			return 0;
		}
		var_162_bool = var_41_bool == (int)42706;
		if(var_162_bool != 0) {
			var_163_string = "";
			func_1194(var_42_cvector, "Anger");
			@@@var_0_object:SetMessage((int)540674);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525598, (int)-1, (int)26945);
			@@@var_0_object:AddReply((int)540676, (int)-1, (int)42709);
			return 0;
		}
		var_3_string = true;
		var_171_bool = 0;
		func_4132(var_171_bool);
		if(var_171_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x4c1";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_3940();
		var_46_bool = var_42_cvector == (int)27172;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_4183();
		}
		var_75_bool = var_41_bool == (int)27163;
		if(var_75_bool != 0) {
			var_76_string = "";
			func_1509(var_42_cvector, "Anger");
			@@@var_0_object:SetMessage((int)525864);
			@@@var_0_object:ClearReplies();
			var_94_bool = 0; var_95_object = Obj();
			var_95_object = var_1_object;
			func_4346(var_95_object);
			if(var_94_bool != 0) {
				@@@var_0_object:AddReply((int)525865, (int)30508, (int)27164);
			}
			@@@var_0_object:AddReply((int)525874, (int)-1, (int)27173);
			return 0;
		}
		var_109_bool = var_41_bool == (int)30508;
		if(var_109_bool != 0) {
			var_110_string = "";
			func_1509(var_42_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)529065);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529066, (int)27165, (int)30509);
			@@@var_0_object:AddReply((int)540766, (int)27165, (int)42809);
			return 0;
		}
		var_119_bool = var_41_bool == (int)27165;
		if(var_119_bool != 0) {
			var_120_string = "";
			func_1509(var_42_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)525866);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525868, (int)27168, (int)27167);
			@@@var_0_object:AddReply((int)529067, (int)30511, (int)30510);
			return 0;
		}
		var_129_bool = var_41_bool == (int)30511;
		if(var_129_bool != 0) {
			var_130_string = "";
			func_1509(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529068);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529069, (int)27171, (int)30512);
			return 0;
		}
		var_136_bool = var_41_bool == (int)27168;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_1509(var_42_cvector, "Anger");
			@@@var_0_object:SetMessage((int)525869);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525870, (int)27171, (int)27169);
			return 0;
		}
		var_143_bool = var_41_bool == (int)27171;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_1509(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525872);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525873, (int)-1, (int)27172);
			return 0;
		}
		var_3_string = true;
		var_149_bool = 0;
		func_4132(var_149_bool);
		if(var_149_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x5fc";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_3940();
		var_46_bool = var_42_cvector == (int)30351;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_4198();
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_object;
			func_4166(var_81_object);
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_4257(var_105_object);
			var_110_object = Obj(); var_111_object = Obj();
			var_110_object = var_1_object;
			var_111_object = var_0_object;
			func_4236(var_111_object);
		}
		var_117_bool = var_42_cvector == (int)30371;
		if(var_117_bool != 0) {
			var_118_object = Obj(); var_119_object = Obj();
			var_118_object = var_1_object;
			var_119_object = var_0_object;
			func_4212();
		}
		var_131_bool = var_42_cvector == (int)43830;
		if(var_131_bool != 0) {
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_4247();
		}
		var_146_bool = var_42_cvector == (int)43828;
		if(var_146_bool != 0) {
			var_147_object = Obj(); var_148_object = Obj();
			var_147_object = var_1_object;
			var_148_object = var_0_object;
			func_4247();
		}
		var_150_bool = var_42_cvector == (int)43824;
		if(var_150_bool != 0) {
			var_151_object = Obj(); var_152_object = Obj();
			var_151_object = var_1_object;
			var_152_object = var_0_object;
			func_4247();
		}
		var_154_bool = var_41_bool == (int)27747;
		if(var_154_bool != 0) {
			var_155_string = "";
			func_1845(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526481);
			@@@var_0_object:ClearReplies();
			var_173_bool = 0; var_174_object = Obj();
			var_174_object = var_1_object;
			func_4394(var_174_object);
			if(var_173_bool != 0) {
				@@@var_0_object:AddReply((int)526482, (int)30355, (int)27748);
			}
			var_184_bool = 0; var_185_object = Obj();
			var_185_object = var_1_object;
			func_4406(var_185_object);
			if(var_184_bool != 0) {
				@@@var_0_object:AddReply((int)526504, (int)30366, (int)27770);
			}
			@@@var_0_object:AddReply((int)526489, (int)-1, (int)27755);
			@@@var_0_object:AddReply((int)528924, (int)-1, (int)30354);
			return 0;
		}
		var_200_bool = var_41_bool == (int)30366;
		if(var_200_bool != 0) {
			var_201_string = "";
			func_1845(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528933);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528934, (int)27771, (int)30367);
			@@@var_0_object:AddReply((int)541644, (int)43817, (int)43816);
			return 0;
		}
		var_210_bool = var_41_bool == (int)43817;
		if(var_210_bool != 0) {
			var_211_string = "";
			func_1845(var_42_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)541645);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541646, (int)43819, (int)43818);
			@@@var_0_object:AddReply((int)541648, (int)43821, (int)43820);
			return 0;
		}
		var_220_bool = var_41_bool == (int)43821;
		if(var_220_bool != 0) {
			var_221_string = "";
			func_1845(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541649);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541650, (int)43825, (int)43822);
			return 0;
		}
		var_227_bool = var_41_bool == (int)43819;
		if(var_227_bool != 0) {
			var_228_string = "";
			func_1845(var_42_cvector, "Anger");
			@@@var_0_object:SetMessage((int)541647);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541651, (int)43825, (int)43823);
			@@@var_0_object:AddReply((int)541652, (int)-1, (int)43824);
			return 0;
		}
		var_237_bool = var_41_bool == (int)43825;
		if(var_237_bool != 0) {
			var_238_string = "";
			func_1845(var_42_cvector, "Anger");
			@@@var_0_object:SetMessage((int)541653);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541654, (int)27773, (int)43827);
			@@@var_0_object:AddReply((int)541655, (int)-1, (int)43828);
			return 0;
		}
		var_247_bool = var_41_bool == (int)27771;
		if(var_247_bool != 0) {
			var_248_string = "";
			func_1845(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526505);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526506, (int)27773, (int)27772);
			return 0;
		}
		var_254_bool = var_41_bool == (int)27773;
		if(var_254_bool != 0) {
			var_255_string = "";
			func_1845(var_42_cvector, "Anger");
			@@@var_0_object:SetMessage((int)526507);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526508, (int)27775, (int)27774);
			@@@var_0_object:AddReply((int)541656, (int)-1, (int)43830);
			return 0;
		}
		var_264_bool = var_41_bool == (int)27775;
		if(var_264_bool != 0) {
			var_265_string = "";
			func_1845(var_42_cvector, "Anger");
			@@@var_0_object:SetMessage((int)526509);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526510, (int)27777, (int)27776);
			@@@var_0_object:AddReply((int)541657, (int)27777, (int)43831);
			return 0;
		}
		var_274_bool = var_41_bool == (int)27777;
		if(var_274_bool != 0) {
			var_275_string = "";
			func_1845(var_42_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)526511);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526512, (int)30368, (int)27778);
			return 0;
		}
		var_281_bool = var_41_bool == (int)30368;
		if(var_281_bool != 0) {
			var_282_string = "";
			func_1845(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528935);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528936, (int)30370, (int)30369);
			return 0;
		}
		var_288_bool = var_41_bool == (int)30370;
		if(var_288_bool != 0) {
			var_289_string = "";
			func_1845(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528937);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528938, (int)-1, (int)30371);
			return 0;
		}
		var_295_bool = var_41_bool == (int)30355;
		if(var_295_bool != 0) {
			var_296_string = "";
			func_1845(var_42_cvector, "Jeer");
			@@@var_0_object:SetMessage((int)528925);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528926, (int)30357, (int)30356);
			return 0;
		}
		var_302_bool = var_41_bool == (int)30357;
		if(var_302_bool != 0) {
			var_303_string = "";
			func_1845(var_42_cvector, "Anger");
			@@@var_0_object:SetMessage((int)528927);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528928, (int)27749, (int)30358);
			@@@var_0_object:AddReply((int)528929, (int)27749, (int)30359);
			return 0;
		}
		var_312_bool = var_41_bool == (int)27749;
		if(var_312_bool != 0) {
			var_313_string = "";
			func_1845(var_42_cvector, "Anger");
			@@@var_0_object:SetMessage((int)526483);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526484, (int)27751, (int)27750);
			return 0;
		}
		var_319_bool = var_41_bool == (int)27751;
		if(var_319_bool != 0) {
			var_320_string = "";
			func_1845(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526485);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526486, (int)27753, (int)27752);
			@@@var_0_object:AddReply((int)528930, (int)30363, (int)30362);
			return 0;
		}
		var_329_bool = var_41_bool == (int)30363;
		if(var_329_bool != 0) {
			var_330_string = "";
			func_1845(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528931);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528932, (int)27753, (int)30364);
			return 0;
		}
		var_336_bool = var_41_bool == (int)27753;
		if(var_336_bool != 0) {
			var_337_string = "";
			func_1845(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526487);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526488, (int)30348, (int)27754);
			return 0;
		}
		var_343_bool = var_41_bool == (int)30348;
		if(var_343_bool != 0) {
			var_344_string = "";
			func_1845(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528918);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528919, (int)30350, (int)30349);
			return 0;
		}
		var_350_bool = var_41_bool == (int)30350;
		if(var_350_bool != 0) {
			var_351_string = "";
			func_1845(var_42_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)528920);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528921, (int)-1, (int)30351);
			return 0;
		}
		var_3_string = true;
		var_356_bool = 0;
		func_4132(var_356_bool);
		if(var_356_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x74c";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_3940();
		var_46_bool = var_42_cvector == (int)28246;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_4192();
		}
		var_52_bool = var_41_bool == (int)28245;
		if(var_52_bool != 0) {
			var_53_string = "";
			func_2537(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526953);
			@@@var_0_object:ClearReplies();
			var_71_bool = 0;
			var_71_bool = 1;
			var_72_bool = 0;
			var_72_bool = 0;
			var_73_bool = 0; var_74_object = Obj();
			var_74_object = var_1_object;
			func_4358(var_74_object);
			if(var_73_bool != 0) {
				var_81_bool = 0; var_82_object = Obj();
				var_82_object = var_1_object;
				func_4382(var_82_object);
				if(var_81_bool != 0) {
					var_72_bool = 1;
				}
			}
			if(var_72_bool != 1) {
				var_87_bool = 0;
				var_87_bool = 0;
				var_88_bool = 0; var_89_object = Obj();
				var_89_object = var_1_object;
				func_4370(var_89_object);
				if(var_88_bool != 0) {
					var_94_bool = 0; var_95_object = Obj();
					var_95_object = var_1_object;
					func_4382(var_95_object);
					if(var_94_bool != 0) {
						var_87_bool = 1;
					}
				}
				if(var_87_bool != 1) {
					var_71_bool = 0;
				}
			}
			if(var_71_bool != 0) {
				@@@var_0_object:AddReply((int)526954, (int)29329, (int)28246);
			}
			@@@var_0_object:AddReply((int)526957, (int)-1, (int)28249);
			return 0;
		}
		var_103_bool = var_41_bool == (int)29329;
		if(var_103_bool != 0) {
			var_104_string = "";
			func_2537(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527972);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527977, (int)29339, (int)29335);
			@@@var_0_object:AddReply((int)527978, (int)29337, (int)29336);
			return 0;
		}
		var_113_bool = var_41_bool == (int)29337;
		if(var_113_bool != 0) {
			var_114_string = "";
			func_2537(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527979);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527980, (int)29339, (int)29338);
			return 0;
		}
		var_120_bool = var_41_bool == (int)29339;
		if(var_120_bool != 0) {
			var_121_string = "";
			func_2537(var_42_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)527981);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527982, (int)29341, (int)29340);
			return 0;
		}
		var_127_bool = var_41_bool == (int)29341;
		if(var_127_bool != 0) {
			var_128_string = "";
			func_2537(var_42_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)527983);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527988, (int)29347, (int)29346);
			@@@var_0_object:AddReply((int)527990, (int)29349, (int)29348);
			return 0;
		}
		var_137_bool = var_41_bool == (int)29349;
		if(var_137_bool != 0) {
			var_138_string = "";
			func_2537(var_42_cvector, "Anger");
			@@@var_0_object:SetMessage((int)527991);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527992, (int)28247, (int)29350);
			return 0;
		}
		var_144_bool = var_41_bool == (int)29347;
		if(var_144_bool != 0) {
			var_145_string = "";
			func_2537(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527989);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527984, (int)28247, (int)29342);
			@@@var_0_object:AddReply((int)527986, (int)29345, (int)29344);
			return 0;
		}
		var_154_bool = var_41_bool == (int)29345;
		if(var_154_bool != 0) {
			var_155_string = "";
			func_2537(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527987);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527993, (int)28247, (int)29352);
			return 0;
		}
		var_161_bool = var_41_bool == (int)28247;
		if(var_161_bool != 0) {
			var_162_string = "";
			func_2537(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526955);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526956, (int)29354, (int)28248);
			return 0;
		}
		var_168_bool = var_41_bool == (int)29354;
		if(var_168_bool != 0) {
			var_169_string = "";
			func_2537(var_42_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)527994);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527995, (int)29362, (int)29355);
			@@@var_0_object:AddReply((int)527996, (int)29357, (int)29356);
			return 0;
		}
		var_178_bool = var_41_bool == (int)29357;
		if(var_178_bool != 0) {
			var_179_string = "";
			func_2537(var_42_cvector, "Anger");
			@@@var_0_object:SetMessage((int)527997);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527998, (int)-1, (int)29358);
			@@@var_0_object:AddReply((int)527999, (int)-1, (int)29359);
			return 0;
		}
		var_188_bool = var_41_bool == (int)29362;
		if(var_188_bool != 0) {
			var_189_string = "";
			func_2537(var_42_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)528002);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528003, (int)29364, (int)29363);
			return 0;
		}
		var_195_bool = var_41_bool == (int)29364;
		if(var_195_bool != 0) {
			var_196_string = "";
			func_2537(var_42_cvector, "Grin");
			@@@var_0_object:SetMessage((int)528004);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528005, (int)-1, (int)29365);
			return 0;
		}
		var_3_string = true;
		var_201_bool = 0;
		func_4132(var_201_bool);
		if(var_201_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa00";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_3940();
		var_46_bool = var_41_bool == (int)36906;
		if(var_46_bool != 0) {
			var_47_string = "";
			func_3026(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535231);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535232, (int)36953, (int)36907);
			@@@var_0_object:AddReply((int)535233, (int)-1, (int)36908);
			@@@var_0_object:AddReply((int)535280, (int)-1, (int)36956);
			return 0;
		}
		var_75_bool = var_41_bool == (int)36953;
		if(var_75_bool != 0) {
			var_76_string = "";
			func_3026(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535277);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535278, (int)36957, (int)36954);
			@@@var_0_object:AddReply((int)535279, (int)36957, (int)36955);
			return 0;
		}
		var_85_bool = var_41_bool == (int)36957;
		if(var_85_bool != 0) {
			var_86_string = "";
			func_3026(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535281);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535282, (int)-1, (int)36958);
			@@@var_0_object:AddReply((int)535283, (int)-1, (int)36959);
			return 0;
		}
		var_3_string = true;
		var_94_bool = 0;
		func_4132(var_94_bool);
		if(var_94_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xbe9";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_cvector)
{
	if((int)1 != 0) {
		func_3940();
		var_46_bool = var_41_int == (int)42554;
		if(var_46_bool != 0) {
			var_47_string = "";
			func_3280(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540545);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540546, (int)-1, (int)42555);
			@@@var_0_object:AddReply((int)540798, (int)-1, (int)42847);
			return 0;
		}
		var_3_string = true;
		var_71_bool = 0;
		func_4132(var_71_bool);
		if(var_71_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xce7";
	
}


task_16_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_int)
{
	var_43_bool = var_41_int == (int)10;
	if(var_43_bool != 0) {
		func_3416();
		var_45_bool = 0;
		var_45_bool = 0;
		var_46_bool = 0;
		func_3664(var_46_bool);
		if(var_46_bool != 0) {
			var_49_bool = 0;
			func_3385(var_49_bool);
			if(var_49_bool != 0) {
				var_45_bool = 1;
			}
		}
		if(var_45_bool != 0) {
			var_66_bool = 0;
			func_3365(var_66_bool);
			if(var_66_bool != 0) {
				var_85_bool = 0; var_86_object = Obj();
				func_3947(Obj());
				var_87_object = var_86_object;
				func_3814(var_85_bool, var_86_object);
			}
		} else {
			func_3380(var_41_int);
			func_3407();
		}
	}
	return 0;
	
}


task_16_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	func_3598();
	func_3416();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_16_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	StopGroup0();
	func_3416();
	var_42_string = "";
	func_3894("Neutral");
	func_3407();
	return 0;
}


task_16_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_bool)
{
	var_42_bool = var_41_bool;
	if(var_42_bool != 0) {
		func_3407();
	} else {
		var_48_string = "";
		func_3894("Neutral");
	}
	return 0;
	
}


task_16_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_object)
{
	var_42_bool = 0; var_43_bool = 0;
	IsOverrideActive(var_43_bool);
	var_44_bool = var_43_bool == 0; //@nz
	if(var_44_bool != 0) {
		EventDisable(0);
		func_3598();
		var_45_bool = 0; var_46_object = Obj();
		var_41_object = var_46_object;
		func_3655(var_45_bool, var_46_object);
		EventEnable(0);
		var_59_object = Obj();
		var_41_object = var_59_object;
		func_4629(var_59_object);
		var_791_string = "";
		func_3894("Neutral");
		func_3416();
		func_3407();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	var_41_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_3351(var_40_cvector);
	return 0;
}


func_0(var_0_object, var_291_int, var_292_object)
{
	var_294_object = Obj(); var_295_bool = 0; var_296_int = 0; var_297_bool = 0; var_298_object = Obj(); var_299_bool = 0; var_300_int = 0; var_301_bool = 0;
	var_0_object = var_292_object;
	var_302_bool = 0; var_303_object = Obj(); var_304_float = 0;
	var_292_object = var_303_object;
	func_3669(var_302_bool, var_303_object, (float)70.0);
	var_305_bool = var_302_bool == 0; //@nz
	if(var_305_bool != 0) {
		var_291_int = -2;
		return 8;
	}
	CreateDialog(var_298_object);
	var_306_int = 0;
	func_4126(var_306_int);
	@@var_298_object:SetNPCName(var_306_int);
	var_307_int = 0;
	func_4124(var_307_int);
	@@var_298_object:SetNPCDescription(var_307_int);
	var_308_string = "";
	func_4128(var_308_string);
	@@var_298_object:SetPhoto(var_308_string);
	var_309_string = "";
	func_4130(var_309_string);
	@@var_298_object:SetPhoto2(var_309_string);
	var_310_int = 0;
	func_4612(var_310_int);
	@@var_298_object:SetPlayerName(var_310_int);
	IsOverrideActive(var_299_bool);
	var_311_bool = var_299_bool;
	if(var_311_bool != 0) {
		var_291_int = -2;
		return 8;
	}
	DoDialog(var_298_object);
	var_312_bool = 0; var_313_object = Obj();
	func_3947(Obj());
	var_314_object = var_313_object;
	func_3756(var_312_bool, var_313_object);
	var_315_object = Obj(); var_316_object = Obj();
	var_292_object = var_315_object;
	var_298_object = var_316_object;
	TaskCall(1);
	func_81(var_317_object, var_318_object, var_319_string, var_320_bool, var_315_object, var_316_object);
	TaskReturn();
	@@var_298_object:IsDialogEnd(var_301_bool);
	
Label_63:
	var_380_bool = var_301_bool == 0; //@nz
	if(var_380_bool != 0) {
		sync();
		@@var_298_object:IsDialogEnd(var_301_bool);
		goto Label_63;
	}
	var_292_object = Obj();
	func_3738();
	StopDialog(var_298_object);
	@@var_298_object:GetReturnValue((int)-1);
	var_300_int = var_291_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4612(var_125_int)
{
	var_126_int = 0; var_127_int = 0;
	GetVariable("branch", var_127_int);
	var_130_bool = var_127_int == (int)0;
	if(var_130_bool != 0) {
		var_125_int = 1;
		return 2;
	EMIT "GOTO 0x1213";
	}
	var_132_bool = var_127_int == (int)1;
	if(var_132_bool != 0) {
		var_125_int = 2;
		return 2;
	}
	var_125_int = 3;
	return 2;
}


func_4100(var_66_string, var_67_int)
{
	var_68_string = ""; var_69_string = "";
	var_70_int = var_67_int;
	if(var_70_int != 0) {
		"idle" = "idle" + var_67_int;
	}
	var_69_string = var_66_string;
	return 2;
}


func_4358(var_637_bool)
{
	var_639_int = 0; var_640_string = "";
	func_3974(var_639_int, "k10q01");
	var_642_bool = var_639_int == (int)1;
	if(var_642_bool != 0) {
		var_637_bool = 1;
		return 0;
	}
	var_637_bool = 0;
	return 0;
}


func_4107(var_60_int)
{
	var_61_int = 0; var_62_bool = 0; var_63_int = 0; var_64_bool = 0;
	var_63_int = 0;
	
Label_4109:
	var_66_string = ""; var_67_int = 0;
	var_63_int = var_67_int;
	func_4100(var_66_string, var_67_int);
	HasAnimation(var_64_bool, "all", var_66_string);
	var_71_bool = var_64_bool == 0; //@nz
	if(var_71_bool != 0) {
	} else {
		var_63_int = var_63_int + (int)1;
		goto Label_4109;
	}
	var_63_int = var_60_int;
	return 4;
	
}


func_3596(var_80_bool)
{
	var_80_bool = 1;
	return 0;
}


func_3851(var_176_bool, var_177_object)
{
	var_178_string = ""; var_179_int = 0; var_180_bool = 0; var_181_int = 0; var_182_string = ""; var_183_string = ""; var_184_int = 0; var_185_bool = 0; var_186_int = 0; var_187_string = "";
	var_189_int = 0;
	func_4085(var_189_int);
	var_195_int = "d" + var_189_int;
	var_183_string = var_195_int + "m";
	var_184_int = 0;
	
Label_3860:
	if((int)1 != 0) {
		var_199_int = var_184_int + (int)1;
		var_200_int = var_183_string + var_199_int;
		@@var_177_object:HasProperty(var_200_int, var_185_bool);
		var_201_bool = var_185_bool == 0; //@nz
		if(var_201_bool != 0) {
		} else {
			var_184_int = var_184_int + (int)1;
			goto Label_3860;
		}
	}
	var_202_bool = var_184_int == 0; //@nz
	if(var_202_bool != 0) {
		var_176_bool = 0;
		return 10;
	}
	var_186_int = 0;
	var_204_bool = var_184_int > (int)1;
	if(var_204_bool != 0) {
		irand(var_186_int, var_184_int);
	}
	var_206_int = var_186_int + (int)1;
	var_207_int = var_183_string + var_206_int;
	@@var_177_object:GetProperty(var_207_int, var_187_string);
	var_208_bool = 0; var_209_string = "";
	var_187_string = var_209_string;
	func_3925(var_208_bool, var_209_string);
	var_208_bool = var_176_bool;
	return 10;
	
}


func_3598()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1041(var_0_object, var_384_int, var_385_object)
{
	var_387_object = Obj(); var_388_bool = 0; var_389_int = 0; var_390_bool = 0; var_391_object = Obj(); var_392_bool = 0; var_393_int = 0; var_394_bool = 0;
	var_0_object = var_385_object;
	var_395_bool = 0; var_396_object = Obj(); var_397_float = 0;
	var_385_object = var_396_object;
	func_3669(var_395_bool, var_396_object, (float)70.0);
	var_398_bool = var_395_bool == 0; //@nz
	if(var_398_bool != 0) {
		var_384_int = -2;
		return 8;
	}
	CreateDialog(var_391_object);
	var_399_int = 0;
	func_4126(var_399_int);
	@@var_391_object:SetNPCName(var_399_int);
	var_400_int = 0;
	func_4124(var_400_int);
	@@var_391_object:SetNPCDescription(var_400_int);
	var_401_string = "";
	func_4128(var_401_string);
	@@var_391_object:SetPhoto(var_401_string);
	var_402_string = "";
	func_4130(var_402_string);
	@@var_391_object:SetPhoto2(var_402_string);
	var_403_int = 0;
	func_4612(var_403_int);
	@@var_391_object:SetPlayerName(var_403_int);
	IsOverrideActive(var_392_bool);
	var_404_bool = var_392_bool;
	if(var_404_bool != 0) {
		var_384_int = -2;
		return 8;
	}
	DoDialog(var_391_object);
	var_405_bool = 0; var_406_object = Obj();
	func_3947(Obj());
	var_407_object = var_406_object;
	func_3756(var_405_bool, var_406_object);
	var_408_object = Obj(); var_409_object = Obj();
	var_385_object = var_408_object;
	var_391_object = var_409_object;
	TaskCall(5);
	func_1122(var_410_object, var_411_object, var_412_string, var_413_bool, var_408_object, var_409_object);
	TaskReturn();
	@@var_391_object:IsDialogEnd(var_394_bool);
	
Label_1104:
	var_451_bool = var_394_bool == 0; //@nz
	if(var_451_bool != 0) {
		sync();
		@@var_391_object:IsDialogEnd(var_394_bool);
		goto Label_1104;
	}
	var_385_object = Obj();
	func_3738();
	StopDialog(var_391_object);
	@@var_391_object:GetReturnValue((int)-1);
	var_393_int = var_384_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4370(var_650_bool)
{
	var_652_int = 0; var_653_string = "";
	func_3974(var_652_int, "k10q01");
	var_655_bool = var_652_int == (int)2;
	if(var_655_bool != 0) {
		var_650_bool = 1;
		return 0;
	}
	var_650_bool = 0;
	return 0;
}


func_3603(var_56_float, var_57_object)
{
	var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
	GetPosition(var_61_cvector);
	@@var_57_object:GetPosition(var_62_cvector);
	var_63_cvector = var_62_cvector - var_61_cvector;
	var_56_float = var_63_cvector | var_63_cvector;
	return 6;
}


func_4629(var_59_object)
{
	var_60_bool = GlobalVars[1];
	var_61_bool = var_60_bool == 0; //@nz
	if(var_61_bool != 0) {
		var_62_int = 0; var_63_object = Obj();
		var_59_object = var_63_object;
		TaskCall(2);
		func_792(var_64_object, var_62_int, var_63_object);
		TaskReturn();
		var_287_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_288_bool = 0; var_289_int = 0;
	func_4094(var_288_bool, (int)1);
	if(var_288_bool != 0) {
		var_291_int = 0; var_292_object = Obj();
		var_59_object = var_292_object;
		TaskCall(0);
		func_0(var_293_object, var_291_int, var_292_object);
		TaskReturn();
		return 0;
	}
	var_382_bool = 0; var_383_int = 0;
	func_4094(var_382_bool, (int)3);
	if(var_382_bool != 0) {
		var_384_int = 0; var_385_object = Obj();
		var_59_object = var_385_object;
		TaskCall(4);
		func_1041(var_386_object, var_384_int, var_385_object);
		TaskReturn();
		return 0;
	}
	var_453_bool = 0; var_454_int = 0;
	func_4094(var_453_bool, (int)5);
	if(var_453_bool != 0) {
		var_455_int = 0; var_456_object = Obj();
		var_59_object = var_456_object;
		TaskCall(6);
		func_1365(var_457_object, var_455_int, var_456_object);
		TaskReturn();
		return 0;
	}
	var_517_bool = 0; var_518_int = 0;
	func_4094(var_517_bool, (int)9);
	if(var_517_bool != 0) {
		var_519_int = 0; var_520_object = Obj();
		var_59_object = var_520_object;
		TaskCall(8);
		func_1686(var_521_object, var_519_int, var_520_object);
		TaskReturn();
		return 0;
	}
	var_593_bool = 0; var_594_int = 0;
	func_4094(var_593_bool, (int)10);
	if(var_593_bool != 0) {
		var_595_int = 0; var_596_object = Obj();
		var_59_object = var_596_object;
		TaskCall(10);
		func_2366(var_597_object, var_595_int, var_596_object);
		TaskReturn();
		return 0;
	}
	var_674_bool = 0; var_675_int = 0;
	func_4094(var_674_bool, (int)12);
	if(var_674_bool != 0) {
		var_676_int = 0; var_677_object = Obj();
		var_59_object = var_677_object;
		TaskCall(12);
		func_2882(var_678_object, var_676_int, var_677_object);
		TaskReturn();
		return 0;
	}
	var_735_int = 0; var_736_object = Obj();
	var_59_object = var_736_object;
	TaskCall(14);
	func_3141(var_737_object, var_735_int, var_736_object);
	TaskReturn();
	return 0;
}


func_3351(var_0_object)
{
	var_42_bool = 0;
	func_3664(var_42_bool);
	var_45_bool = var_42_bool == 0; //@nz
	if(var_45_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_3360:
	func_3527();
	goto Label_3360;
}
EMIT "Return(); Pop(0)";


func_792(var_0_object, var_62_int, var_63_object)
{
	var_65_object = Obj(); var_66_bool = 0; var_67_int = 0; var_68_bool = 0; var_69_object = Obj(); var_70_bool = 0; var_71_int = 0; var_72_bool = 0;
	var_0_object = var_63_object;
	var_73_bool = 0; var_74_object = Obj(); var_75_float = 0;
	var_63_object = var_74_object;
	func_3669(var_73_bool, var_74_object, (float)70.0);
	var_120_bool = var_73_bool == 0; //@nz
	if(var_120_bool != 0) {
		var_62_int = -2;
		return 8;
	}
	CreateDialog(var_69_object);
	var_121_int = 0;
	func_4126(var_121_int);
	@@var_69_object:SetNPCName(var_121_int);
	var_122_int = 0;
	func_4124(var_122_int);
	@@var_69_object:SetNPCDescription(var_122_int);
	var_123_string = "";
	func_4128(var_123_string);
	@@var_69_object:SetPhoto(var_123_string);
	var_124_string = "";
	func_4130(var_124_string);
	@@var_69_object:SetPhoto2(var_124_string);
	var_125_int = 0;
	func_4612(var_125_int);
	@@var_69_object:SetPlayerName(var_125_int);
	IsOverrideActive(var_70_bool);
	var_133_bool = var_70_bool;
	if(var_133_bool != 0) {
		var_62_int = -2;
		return 8;
	}
	DoDialog(var_69_object);
	var_134_bool = 0; var_135_object = Obj();
	func_3947(Obj());
	var_136_object = var_135_object;
	func_3756(var_134_bool, var_135_object);
	var_229_object = Obj(); var_230_object = Obj();
	var_63_object = var_229_object;
	var_69_object = var_230_object;
	TaskCall(3);
	func_873(var_231_object, var_232_object, var_233_string, var_234_bool, var_229_object, var_230_object);
	TaskReturn();
	@@var_69_object:IsDialogEnd(var_72_bool);
	
Label_855:
	var_278_bool = var_72_bool == 0; //@nz
	if(var_278_bool != 0) {
		sync();
		@@var_69_object:IsDialogEnd(var_72_bool);
		goto Label_855;
	}
	var_63_object = Obj();
	func_3738();
	StopDialog(var_69_object);
	@@var_69_object:GetReturnValue((int)-1);
	var_71_int = var_62_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3611(var_74_bool, var_75_object, var_76_string)
{
	var_77_bool = 0; var_78_bool = 0;
	var_81_bool = IsFuncExist(var_75_object, "HasProperty", (int)2);
	var_82_bool = var_81_bool == 0; //@nz
	if(var_82_bool != 0) {
		var_74_bool = 0;
		return 2;
	}
	@@var_75_object:HasProperty(var_76_string, var_78_bool);
	var_78_bool = var_74_bool;
	return 2;
}


func_4124(var_122_int)
{
	var_122_int = 515534;
	return 0;
}


func_4126(var_121_int)
{
	var_121_int = 502859;
	return 0;
}


func_4382(var_643_bool)
{
	var_645_int = 0; var_646_string = "";
	func_3974(var_645_int, "ook10Georg1");
	var_648_bool = var_645_int == (int)0;
	if(var_648_bool != 0) {
		var_643_bool = 1;
		return 0;
	}
	var_643_bool = 0;
	return 0;
}


func_4128(var_123_string)
{
	var_123_string = "ui/NPC_Georg.png";
	return 0;
}


func_4130(var_124_string)
{
	var_124_string = "ui/NPC_Georg_b.png";
	return 0;
}


func_4132(var_116_bool)
{
	var_116_bool = 1;
	return 0;
}


func_3365(var_66_bool)
{
	var_67_object = Obj(); var_68_object = Obj();
	FindActor(var_68_object, "player");
	var_70_bool = var_68_object == 0; //@nz
	if(var_70_bool != 0) {
		var_66_bool = 0;
		return 2;
	}
	var_71_bool = 0; var_72_object = Obj();
	var_68_object = var_72_object;
	func_3655(var_71_bool, var_72_object);
	var_71_bool = var_66_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4134()
{
	var_49_object = Obj(); var_50_object = Obj();
	SetVariable("k1q02", (int)3);
	func_4562(Obj());
	var_53_object = var_50_object;
	var_64_float = 0;
	func_4080(var_64_float);
	@@var_50_object:AddMark("k1q02GeorgGotoMaria", "pt_map_maria", (int)0, (int)524779, var_64_float);
	func_4443();
	return 2;
}
EMIT "Stack[-1] = 0";


func_3623(var_66_bool, var_67_object, var_68_string, var_69_float, var_70_float, var_71_float)
{
	var_72_float = 0; var_73_float = 0;
	var_74_bool = 0; var_75_object = Obj(); var_76_string = "";
	var_67_object = var_75_object;
	var_68_string = var_76_string;
	func_3611(var_74_bool, var_75_object, var_76_string);
	var_83_bool = var_74_bool == 0; //@nz
	if(var_83_bool != 0) {
		var_66_bool = 0;
		return 2;
	}
	@@var_67_object:GetProperty(var_68_string, var_73_float);
	var_84_float = 0; var_85_float = 0; var_86_float = 0; var_87_float = 0;
	var_85_float = var_73_float + var_69_float;
	var_70_float = var_86_float;
	var_71_float = var_87_float;
	func_3963(var_84_float, var_85_float, var_86_float, var_87_float);
	@@var_67_object:SetProperty(var_68_string, var_84_float);
	var_66_bool = 1;
	return 2;
}


func_4394(var_559_bool)
{
	var_561_int = 0; var_562_string = "";
	func_3974(var_561_int, "k9q01");
	var_564_bool = var_561_int == (int)1;
	if(var_564_bool != 0) {
		var_559_bool = 1;
		return 0;
	}
	var_559_bool = 0;
	return 0;
}


func_3380(var_0_object)
{
	var_118_float = GetByIndex(var_0_object, 0);
	var_119_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_118_float, var_119_float);
	return 0;
}


func_1845(var_2_object, var_550_string)
{
	var_551_bool = 0;
	func_4132(var_551_bool);
	var_552_bool = var_551_bool == 0; //@nz
	if(var_552_bool != 0) {
		return 0;
	}
	var_553_bool = var_550_string == var_2_object;
	if(var_553_bool != 0) {
		return 0;
	}
	var_554_string = ""; var_555_bool = 0;
	var_550_string = var_554_string;
	var_557_bool = var_550_string == "";
	if(var_557_bool != 0) {
		var_555_bool = 0;
	} else {
		var_555_bool = 1;
	}
	func_3910(var_554_string, var_555_bool);
	var_2_object = var_550_string;
	return 0;
	
}


func_3894(var_262_string)
{
	var_263_bool = 0; var_264_float = 0; var_265_float = 0; var_266_bool = 0; var_267_float = 0; var_268_float = 0;
	lshHasAnimation(var_266_bool, var_262_string);
	var_269_bool = var_266_bool;
	if(var_269_bool != 0) {
		lshGetAnimTimes(var_262_string, var_267_float, var_268_float);
		lshPlayAnimation(var_267_float, var_268_float, (bool)0);
	} else {
		var_272_int = "Can't find lsh animation : " + var_262_string;
		Trace(var_272_int);
	}
	return 6;
	
}


func_4406(var_568_bool)
{
	var_570_int = 0; var_571_string = "";
	func_3974(var_570_int, "k9q01");
	var_573_bool = var_570_int == (int)3;
	if(var_573_bool != 0) {
		var_568_bool = 1;
		return 0;
	}
	var_568_bool = 0;
	return 0;
}


func_3385(var_49_bool)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_object = Obj(); var_53_bool = 0;
	FindActor(var_52_object, "player");
	var_55_bool = var_52_object == 0; //@nz
	if(var_55_bool != 0) {
		var_49_bool = 0;
		return 4;
	}
	var_56_float = 0; var_57_object = Obj();
	var_52_object = var_57_object;
	func_3603(var_56_float, var_57_object);
	var_65_bool = var_56_float > (float)90000.0;
	if(var_65_bool != 0) {
		var_49_bool = 0;
		return 4;
	}
	CanSee(var_53_bool, var_52_object);
	var_53_bool = var_49_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_3645(var_49_bool, var_50_cvector)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_bool = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0;
	GetPosition(var_54_cvector);
	var_55_cvector = var_50_cvector - var_54_cvector;
	var_57_float = GetByIndex(var_55_cvector, 0);
	var_58_float = GetByIndex(var_55_cvector, 2);
	Rotate(var_57_float, var_58_float, var_56_bool);
	var_56_bool = var_49_bool;
	return 6;
}


func_4157()
{
	SetVariable("k1q02", (int)5);
	func_4430();
	return 0;
}


func_2366(var_0_object, var_595_int, var_596_object)
{
	var_598_object = Obj(); var_599_bool = 0; var_600_int = 0; var_601_bool = 0; var_602_object = Obj(); var_603_bool = 0; var_604_int = 0; var_605_bool = 0;
	var_0_object = var_596_object;
	var_606_bool = 0; var_607_object = Obj(); var_608_float = 0;
	var_596_object = var_607_object;
	func_3669(var_606_bool, var_607_object, (float)70.0);
	var_609_bool = var_606_bool == 0; //@nz
	if(var_609_bool != 0) {
		var_595_int = -2;
		return 8;
	}
	CreateDialog(var_602_object);
	var_610_int = 0;
	func_4126(var_610_int);
	@@var_602_object:SetNPCName(var_610_int);
	var_611_int = 0;
	func_4124(var_611_int);
	@@var_602_object:SetNPCDescription(var_611_int);
	var_612_string = "";
	func_4128(var_612_string);
	@@var_602_object:SetPhoto(var_612_string);
	var_613_string = "";
	func_4130(var_613_string);
	@@var_602_object:SetPhoto2(var_613_string);
	var_614_int = 0;
	func_4612(var_614_int);
	@@var_602_object:SetPlayerName(var_614_int);
	IsOverrideActive(var_603_bool);
	var_615_bool = var_603_bool;
	if(var_615_bool != 0) {
		var_595_int = -2;
		return 8;
	}
	DoDialog(var_602_object);
	var_616_bool = 0; var_617_object = Obj();
	func_3947(Obj());
	var_618_object = var_617_object;
	func_3756(var_616_bool, var_617_object);
	var_619_object = Obj(); var_620_object = Obj();
	var_596_object = var_619_object;
	var_602_object = var_620_object;
	TaskCall(11);
	func_2447(var_621_object, var_622_object, var_623_string, var_624_bool, var_619_object, var_620_object);
	TaskReturn();
	@@var_602_object:IsDialogEnd(var_605_bool);
	
Label_2429:
	var_672_bool = var_605_bool == 0; //@nz
	if(var_672_bool != 0) {
		sync();
		@@var_602_object:IsDialogEnd(var_605_bool);
		goto Label_2429;
	}
	var_596_object = Obj();
	func_3738();
	StopDialog(var_602_object);
	@@var_602_object:GetReturnValue((int)-1);
	var_604_int = var_595_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4418(var_331_bool)
{
	var_333_int = 0; var_334_string = "";
	func_3974(var_333_int, "ook1Georg1");
	var_336_bool = var_333_int == (int)0;
	if(var_336_bool != 0) {
		var_331_bool = 1;
		return 0;
	}
	var_331_bool = 0;
	return 0;
}


func_2882(var_0_object, var_676_int, var_677_object)
{
	var_679_object = Obj(); var_680_bool = 0; var_681_int = 0; var_682_bool = 0; var_683_object = Obj(); var_684_bool = 0; var_685_int = 0; var_686_bool = 0;
	var_0_object = var_677_object;
	var_687_bool = 0; var_688_object = Obj(); var_689_float = 0;
	var_677_object = var_688_object;
	func_3669(var_687_bool, var_688_object, (float)70.0);
	var_690_bool = var_687_bool == 0; //@nz
	if(var_690_bool != 0) {
		var_676_int = -2;
		return 8;
	}
	CreateDialog(var_683_object);
	var_691_int = 0;
	func_4126(var_691_int);
	@@var_683_object:SetNPCName(var_691_int);
	var_692_int = 0;
	func_4124(var_692_int);
	@@var_683_object:SetNPCDescription(var_692_int);
	var_693_string = "";
	func_4128(var_693_string);
	@@var_683_object:SetPhoto(var_693_string);
	var_694_string = "";
	func_4130(var_694_string);
	@@var_683_object:SetPhoto2(var_694_string);
	var_695_int = 0;
	func_4612(var_695_int);
	@@var_683_object:SetPlayerName(var_695_int);
	IsOverrideActive(var_684_bool);
	var_696_bool = var_684_bool;
	if(var_696_bool != 0) {
		var_676_int = -2;
		return 8;
	}
	DoDialog(var_683_object);
	var_697_bool = 0; var_698_object = Obj();
	func_3947(Obj());
	var_699_object = var_698_object;
	func_3756(var_697_bool, var_698_object);
	var_700_object = Obj(); var_701_object = Obj();
	var_677_object = var_700_object;
	var_683_object = var_701_object;
	TaskCall(13);
	func_2963(var_702_object, var_703_object, var_704_string, var_705_bool, var_700_object, var_701_object);
	TaskReturn();
	@@var_683_object:IsDialogEnd(var_686_bool);
	
Label_2945:
	var_733_bool = var_686_bool == 0; //@nz
	if(var_733_bool != 0) {
		sync();
		@@var_683_object:IsDialogEnd(var_686_bool);
		goto Label_2945;
	}
	var_677_object = Obj();
	func_3738();
	StopDialog(var_683_object);
	@@var_683_object:GetReturnValue((int)-1);
	var_685_int = var_676_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3141(var_0_object, var_735_int, var_736_object)
{
	var_738_object = Obj(); var_739_bool = 0; var_740_int = 0; var_741_bool = 0; var_742_object = Obj(); var_743_bool = 0; var_744_int = 0; var_745_bool = 0;
	var_0_object = var_736_object;
	var_746_bool = 0; var_747_object = Obj(); var_748_float = 0;
	var_736_object = var_747_object;
	func_3669(var_746_bool, var_747_object, (float)70.0);
	var_749_bool = var_746_bool == 0; //@nz
	if(var_749_bool != 0) {
		var_735_int = -2;
		return 8;
	}
	CreateDialog(var_742_object);
	var_750_int = 0;
	func_4126(var_750_int);
	@@var_742_object:SetNPCName(var_750_int);
	var_751_int = 0;
	func_4124(var_751_int);
	@@var_742_object:SetNPCDescription(var_751_int);
	var_752_string = "";
	func_4128(var_752_string);
	@@var_742_object:SetPhoto(var_752_string);
	var_753_string = "";
	func_4130(var_753_string);
	@@var_742_object:SetPhoto2(var_753_string);
	var_754_int = 0;
	func_4612(var_754_int);
	@@var_742_object:SetPlayerName(var_754_int);
	IsOverrideActive(var_743_bool);
	var_755_bool = var_743_bool;
	if(var_755_bool != 0) {
		var_735_int = -2;
		return 8;
	}
	DoDialog(var_742_object);
	var_756_bool = 0; var_757_object = Obj();
	func_3947(Obj());
	var_758_object = var_757_object;
	func_3756(var_756_bool, var_757_object);
	var_759_object = Obj(); var_760_object = Obj();
	var_736_object = var_759_object;
	var_742_object = var_760_object;
	TaskCall(15);
	func_3222(var_761_object, var_762_object, var_763_string, var_764_bool, var_759_object, var_760_object);
	TaskReturn();
	@@var_742_object:IsDialogEnd(var_745_bool);
	
Label_3204:
	var_789_bool = var_745_bool == 0; //@nz
	if(var_789_bool != 0) {
		sync();
		@@var_742_object:IsDialogEnd(var_745_bool);
		goto Label_3204;
	}
	var_736_object = Obj();
	func_3738();
	StopDialog(var_742_object);
	@@var_742_object:GetReturnValue((int)-1);
	var_744_int = var_735_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4166(var_80_object)
{
	Trace("beta_pills 5 is given");
	var_83_object = Obj(); var_84_string = ""; var_85_int = 0;
	var_80_object = var_83_object;
	func_4010(var_83_object, "beta_pills", (int)5);
	return 0;
}


func_3655(var_45_bool, var_46_object)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	@@var_46_object:GetPosition(var_48_cvector);
	var_49_bool = 0; var_50_cvector = CVector(0,0,0);
	var_48_cvector = var_50_cvector;
	func_3645(var_49_bool, var_50_cvector);
	var_49_bool = var_45_bool;
	return 2;
}


func_3910(var_240_string, var_241_bool)
{
	var_244_bool = 0; var_245_float = 0; var_246_float = 0; var_247_bool = 0; var_248_float = 0; var_249_float = 0;
	lshHasAnimation(var_247_bool, var_240_string);
	var_250_bool = var_247_bool;
	if(var_250_bool != 0) {
		lshGetAnimTimes(var_240_string, var_248_float, var_249_float);
		lshPlayAnimation(var_248_float, var_249_float, var_241_bool);
	} else {
		var_252_int = "Can't find lsh animation : " + var_240_string;
		Trace(var_252_int);
	}
	return 6;
	
}


func_4430()
{
	var_128_object = Obj(); var_129_object = Obj();
	CreateDiaryEntry(var_129_object, (int)331, (int)2, (int)524776);
	var_133_bool = 0; var_134_object = Obj(); var_135_int = 0;
	var_129_object = var_134_object;
	func_4534(var_133_bool, var_134_object, (int)326);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3407()
{
	var_793_float = 0; var_794_float = 0;
	rand(var_794_float, (int)8, (int)16);
	SetTimer((int)10, var_794_float);
	return 2;
}


func_3664(var_42_bool)
{
	var_43_bool = 0; var_44_bool = 0;
	IsLoaded(var_44_bool);
	var_44_bool = var_42_bool;
	return 2;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_315_object, var_316_object)
{
	var_0_object = var_316_object;
	var_1_object = var_315_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_322_bool = 0;
		var_322_bool = 0;
		var_323_bool = 0; var_324_object = Obj();
		var_324_object = var_1_object;
		func_4298(var_324_object);
		if(var_323_bool != 0) {
			var_331_bool = 0; var_332_object = Obj();
			var_332_object = var_1_object;
			func_4418(var_332_object);
			if(var_331_bool != 0) {
				var_322_bool = 1;
			}
		}
		if(var_322_bool != 0) {
			var_337_object = Obj(); var_338_object = Obj();
			var_337_object = var_1_object;
			var_338_object = var_0_object;
			func_4221();
			var_341_string = "";
			func_188(var_316_object, "Anger");
			@@@var_0_object:SetMessage((int)524754);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526909, (int)28202, (int)28201);
		} else {
				var_361_string = "";
				func_188(var_316_object, "Jeer");
				@@@var_0_object:SetMessage((int)524756);
				@@@var_0_object:ClearReplies();
				var_363_bool = 0; var_364_object = Obj();
				var_364_object = var_1_object;
				func_4310(var_364_object);
				if(var_363_bool != 0) {
					@@@var_0_object:AddReply((int)524763, (int)26088, (int)26087);
				}
				var_372_bool = 0; var_373_object = Obj();
				var_373_object = var_1_object;
				func_4298(var_373_object);
				if(var_372_bool != 0) {
					@@@var_0_object:AddReply((int)530365, (int)-1, (int)31738);
				}
				@@@var_0_object:AddReply((int)524757, (int)-1, (int)26081);
				goto Label_158;
		}
	}
Label_158:
	var_353_bool = 0;
	func_4132(var_353_bool);
	if(var_353_bool != 0) {

	Label_162:
		lshWaitForAnimEnd();
		var_354_string = var_3_string;
		if(var_354_string != 0) {
		} else {
			var_355_string = "";
			var_355_string = var_2_object;
			func_3894(var_355_string);
			goto Label_162;
	}
		PlayAnimation("all", "idle");

	Label_177:
		WaitForAnimEnd();
		var_358_string = var_3_string;
		if(var_358_string != 0) {
			goto Label_187;
		}
		PlayAnimation("all", "idle");
		goto Label_177;

	}
	goto Label_187;
	
Label_187:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_4177()
{
	SetVariable("ook3Georg1", (int)1);
	return 0;
}


func_3669(var_73_bool, var_74_object, var_75_float)
{
	var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_bool = 0; var_84_bool = 0; var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_bool = 0; var_93_bool = 0;
	@@var_74_object:GetPosition(var_86_cvector);
	@@var_74_object:GetEyesHeight(var_85_float);
	var_94_float = GetByIndex(var_86_cvector, 1);
	var_94_float = var_94_float + var_85_float;
	SetByIndex(var_86_cvector, 1) = var_94_float;
	GetPosition(var_87_cvector);
	GetEyesHeight(var_85_float);
	var_95_float = GetByIndex(var_87_cvector, 1);
	var_95_float = var_95_float + var_85_float;
	SetByIndex(var_87_cvector, 1) = var_95_float;
	var_88_cvector = var_86_cvector - var_87_cvector;
	var_96_float = GetByIndex(var_88_cvector, 1);
	SetByIndex(var_88_cvector, 1) = (float)0;
	var_97_int = var_88_cvector | var_88_cvector;
	var_98_float = sqrt(var_97_int);
	var_88_cvector = var_88_cvector / var_98_float;
	var_89_cvector = -var_88_cvector;
	var_99_float = var_88_cvector * var_75_float;
	var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0);
	var_101_cvector = var_89_cvector ^ CVector(0.0, 1.0, 0.0);
	func_3953(var_100_cvector, var_101_cvector);
	var_109_float = var_100_cvector * (int)25;
	var_110_int = var_99_float + var_109_float;
	var_90_cvector = var_110_int - CVector(0.0, 10.0, 0.0);
	var_91_cvector = var_87_cvector + var_90_cvector;
	IsOverrideActive(var_92_bool);
	var_112_bool = var_92_bool;
	if(var_112_bool != 0) {
		var_73_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_91_cvector, var_89_cvector, (bool)1);
	var_114_float = GetByIndex(var_90_cvector, 0);
	var_115_float = GetByIndex(var_90_cvector, 2);
	Rotate(var_114_float, var_115_float);
	var_116_bool = 0;
	func_4132(var_116_bool);
	if(var_116_bool != 0) {
	} else {
		HasAnimationTrack(var_93_bool, "head");
		var_118_bool = var_93_bool;
		if(var_118_bool == 0) goto Label_3732;
		LookAsyncCamera("head");
	}
Label_3732:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_73_bool = 1;
	return 18;
	
}


func_3925(var_168_bool, var_169_string)
{
	var_170_bool = 0; var_171_bool = 0;
	var_172_bool = 0;
	func_4132(var_172_bool);
	if(var_172_bool != 0) {
		lshHasSpeech(var_171_bool, var_169_string);
		var_173_bool = var_171_bool;
		if(var_173_bool != 0) {
			lshPlaySpeech(var_169_string);
			var_168_bool = 1;
			return 2;
		}
	}
	var_168_bool = 0;
	return 2;
}


func_4183()
{
	SetVariable("k5q01", (int)3);
	func_4469();
	return 0;
}


func_1365(var_0_object, var_455_int, var_456_object)
{
	var_458_object = Obj(); var_459_bool = 0; var_460_int = 0; var_461_bool = 0; var_462_object = Obj(); var_463_bool = 0; var_464_int = 0; var_465_bool = 0;
	var_0_object = var_456_object;
	var_466_bool = 0; var_467_object = Obj(); var_468_float = 0;
	var_456_object = var_467_object;
	func_3669(var_466_bool, var_467_object, (float)70.0);
	var_469_bool = var_466_bool == 0; //@nz
	if(var_469_bool != 0) {
		var_455_int = -2;
		return 8;
	}
	CreateDialog(var_462_object);
	var_470_int = 0;
	func_4126(var_470_int);
	@@var_462_object:SetNPCName(var_470_int);
	var_471_int = 0;
	func_4124(var_471_int);
	@@var_462_object:SetNPCDescription(var_471_int);
	var_472_string = "";
	func_4128(var_472_string);
	@@var_462_object:SetPhoto(var_472_string);
	var_473_string = "";
	func_4130(var_473_string);
	@@var_462_object:SetPhoto2(var_473_string);
	var_474_int = 0;
	func_4612(var_474_int);
	@@var_462_object:SetPlayerName(var_474_int);
	IsOverrideActive(var_463_bool);
	var_475_bool = var_463_bool;
	if(var_475_bool != 0) {
		var_455_int = -2;
		return 8;
	}
	DoDialog(var_462_object);
	var_476_bool = 0; var_477_object = Obj();
	func_3947(Obj());
	var_478_object = var_477_object;
	func_3756(var_476_bool, var_477_object);
	var_479_object = Obj(); var_480_object = Obj();
	var_456_object = var_479_object;
	var_462_object = var_480_object;
	TaskCall(7);
	func_1446(var_481_object, var_482_object, var_483_string, var_484_bool, var_479_object, var_480_object);
	TaskReturn();
	@@var_462_object:IsDialogEnd(var_465_bool);
	
Label_1428:
	var_515_bool = var_465_bool == 0; //@nz
	if(var_515_bool != 0) {
		sync();
		@@var_462_object:IsDialogEnd(var_465_bool);
		goto Label_1428;
	}
	var_456_object = Obj();
	func_3738();
	StopDialog(var_462_object);
	@@var_462_object:GetReturnValue((int)-1);
	var_464_int = var_455_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3416()
{
	KillTimer((int)10);
	return 0;
}


func_4443()
{
	var_67_object = Obj(); var_68_object = Obj();
	CreateDiaryEntry(var_68_object, (int)329, (int)2, (int)524774);
	var_72_bool = 0; var_73_object = Obj(); var_74_int = 0;
	var_68_object = var_73_object;
	func_4534(var_72_bool, var_73_object, (int)326);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4192()
{
	SetVariable("ook10Georg1", (int)1);
	return 0;
}


func_1122(var_0_object, var_1_object, var_2_object, var_3_string, var_408_object, var_409_object)
{
	var_0_object = var_409_object;
	var_1_object = var_408_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_415_string = "";
		func_1194(var_409_object, "Jeer");
		@@@var_0_object:SetMessage((int)525594);
		@@@var_0_object:ClearReplies();
		var_424_bool = 0;
		var_424_bool = 0;
		var_425_bool = 0; var_426_object = Obj();
		var_426_object = var_1_object;
		func_4322(var_426_object);
		if(var_425_bool != 0) {
			var_431_bool = 0; var_432_object = Obj();
			var_432_object = var_1_object;
			func_4334(var_432_object);
			if(var_431_bool != 0) {
				var_424_bool = 1;
			}
		}
		if(var_424_bool != 0) {
			@@@var_0_object:AddReply((int)525596, (int)26944, (int)26943);
		}
		@@@var_0_object:AddReply((int)525595, (int)-1, (int)26942);
		goto Label_1164;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x466";
	}
Label_1164:
	var_443_bool = 0;
	func_4132(var_443_bool);
	if(var_443_bool != 0) {

	Label_1168:
		lshWaitForAnimEnd();
		var_444_string = var_3_string;
		if(var_444_string != 0) {
		} else {
			var_445_string = "";
			var_445_string = var_2_object;
			func_3894(var_445_string);
			goto Label_1168;
	}
		PlayAnimation("all", "idle");

	Label_1183:
		WaitForAnimEnd();
		var_448_string = var_3_string;
		if(var_448_string != 0) {
			goto Label_1193;
		}
		PlayAnimation("all", "idle");
		goto Label_1183;
	}
	goto Label_1193;
	
Label_1193:
	return 0;
	
}


func_3940()
{
	var_44_bool = 0;
	func_4132(var_44_bool);
	if(var_44_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_4198()
{
	SetVariable("k9q01", (int)2);
	func_4495();
	var_74_bool = 0; var_75_string = ""; var_76_string = "";
	func_4068(var_74_bool, "quest_k9_01", "init_termitnik2");
	return 0;
}


func_4456()
{
	var_146_object = Obj(); var_147_object = Obj();
	CreateDiaryEntry(var_147_object, (int)544, (int)2, (int)530366);
	var_151_bool = 0; var_152_object = Obj(); var_153_int = 0;
	var_147_object = var_152_object;
	func_4534(var_151_bool, var_152_object, (int)326);
	return 2;
}
EMIT "Stack[-1] = 0";


func_873(var_0_object, var_1_object, var_2_object, var_3_string, var_229_object, var_230_object)
{
	var_0_object = var_230_object;
	var_1_object = var_229_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_236_string = "";
		func_931(var_230_object, "Neutral");
		@@@var_0_object:SetMessage((int)525480);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)525481, (int)27536, (int)26837);
		@@@var_0_object:AddReply((int)526263, (int)27536, (int)27537);
		goto Label_901;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x36d";
	}
Label_901:
	var_260_bool = 0;
	func_4132(var_260_bool);
	if(var_260_bool != 0) {

	Label_905:
		lshWaitForAnimEnd();
		var_261_string = var_3_string;
		if(var_261_string != 0) {
		} else {
			var_262_string = "";
			var_262_string = var_2_object;
			func_3894(var_262_string);
			goto Label_905;
	}
		PlayAnimation("all", "idle");

	Label_920:
		WaitForAnimEnd();
		var_275_string = var_3_string;
		if(var_275_string != 0) {
			goto Label_930;
		}
		PlayAnimation("all", "idle");
		goto Label_920;
	}
	goto Label_930;
	
Label_930:
	return 0;
	
}


func_3947(var_136_object)
{
	var_137_object = Obj(); var_138_object = Obj();
	self(var_138_object);
	var_138_object = var_136_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3953(var_100_cvector, var_101_cvector)
{
	var_103_float = 0; var_104_float = 0;
	var_105_int = var_101_cvector | var_101_cvector;
	var_104_float = sqrt(var_105_int);
	var_106_float = 9.999999974752427e-07;
	var_107_bool = var_104_float < var_106_float;
	if(var_107_bool != 0) {
		var_100_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_100_cvector = var_101_cvector / var_104_float;
	return 2;
}


func_4212()
{
	SetVariable("k9q01", (int)4);
	func_4508();
	return 0;
}


func_4469()
{
	var_51_object = Obj(); var_52_object = Obj();
	CreateDiaryEntry(var_52_object, (int)394, (int)1, (int)525887);
	var_56_bool = 0; var_57_object = Obj(); var_58_int = 0;
	var_52_object = var_57_object;
	func_4534(var_56_bool, var_57_object, (int)390);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3963(var_84_float, var_85_float, var_86_float, var_87_float)
{
	var_88_bool = var_85_float < var_86_float;
	if(var_88_bool != 0) {
		var_86_float = var_84_float;
		return 0;
	}
	var_89_bool = var_85_float > var_87_float;
	if(var_89_bool != 0) {
		var_87_float = var_84_float;
		return 0;
	}
	var_85_float = var_84_float;
	return 0;
}


func_4221()
{
	SetVariable("ook1Georg1", (int)1);
	return 0;
}


func_4482()
{
	var_134_object = Obj(); var_135_object = Obj();
	CreateDiaryEntry(var_135_object, (int)789, (int)1, (int)542508);
	var_139_bool = 0; var_140_object = Obj(); var_141_int = 0;
	var_135_object = var_140_object;
	func_4534(var_139_bool, var_140_object, (int)517);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4227()
{
	SetVariable("k1q02", (int)-1);
	func_4456();
	return 0;
}


func_3974(var_325_int, var_326_string)
{
	var_327_int = 0; var_328_int = 0;
	GetVariable(var_326_string, var_328_int);
	var_328_int = var_325_int;
	return 2;
}


func_3979(var_99_int, var_100_int)
{
	var_101_object = Obj(); var_102_object = Obj();
	CreateIntVector(var_102_object);
	@@var_102_object:add(var_99_int);
	@@var_102_object:add(var_100_int);
	SendWorldWndMessage((int)3, var_102_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4236(var_110_object)
{
	Trace("raincoat_repel is given");
	var_113_object = Obj(); var_114_string = ""; var_115_int = 0;
	var_110_object = var_113_object;
	func_4010(var_113_object, "raincoat_repel", (int)1);
	return 0;
}


func_2447(var_0_object, var_1_object, var_2_object, var_3_string, var_619_object, var_620_object)
{
	var_0_object = var_620_object;
	var_1_object = var_619_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_626_string = "";
		func_2537(var_620_object, "Neutral");
		@@@var_0_object:SetMessage((int)526953);
		@@@var_0_object:ClearReplies();
		var_635_bool = 0;
		var_635_bool = 1;
		var_636_bool = 0;
		var_636_bool = 0;
		var_637_bool = 0; var_638_object = Obj();
		var_638_object = var_1_object;
		func_4358(var_638_object);
		if(var_637_bool != 0) {
			var_643_bool = 0; var_644_object = Obj();
			var_644_object = var_1_object;
			func_4382(var_644_object);
			if(var_643_bool != 0) {
				var_636_bool = 1;
			}
		}
		if(var_636_bool != 1) {
			var_649_bool = 0;
			var_649_bool = 0;
			var_650_bool = 0; var_651_object = Obj();
			var_651_object = var_1_object;
			func_4370(var_651_object);
			if(var_650_bool != 0) {
				var_656_bool = 0; var_657_object = Obj();
				var_657_object = var_1_object;
				func_4382(var_657_object);
				if(var_656_bool != 0) {
					var_649_bool = 1;
				}
			}
			if(var_649_bool != 1) {
				var_635_bool = 0;
			}
		}
		if(var_635_bool != 0) {
			@@@var_0_object:AddReply((int)526954, (int)29329, (int)28246);
		}
		@@@var_0_object:AddReply((int)526957, (int)-1, (int)28249);
		goto Label_2507;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x993";
	}
Label_2507:
	var_664_bool = 0;
	func_4132(var_664_bool);
	if(var_664_bool != 0) {

	Label_2511:
		lshWaitForAnimEnd();
		var_665_string = var_3_string;
		if(var_665_string != 0) {
		} else {
			var_666_string = "";
			var_666_string = var_2_object;
			func_3894(var_666_string);
			goto Label_2511;
	}
		PlayAnimation("all", "idle");

	Label_2526:
		WaitForAnimEnd();
		var_669_string = var_3_string;
		if(var_669_string != 0) {
			goto Label_2536;
		}
		PlayAnimation("all", "idle");
		goto Label_2526;
	}
	goto Label_2536;
	
Label_2536:
	return 0;
	
}


func_4495()
{
	var_51_object = Obj(); var_52_object = Obj();
	CreateDiaryEntry(var_52_object, (int)519, (int)1, (int)529811);
	var_56_bool = 0; var_57_object = Obj(); var_58_int = 0;
	var_52_object = var_57_object;
	func_4534(var_56_bool, var_57_object, (int)517);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2963(var_0_object, var_1_object, var_2_object, var_3_string, var_700_object, var_701_object)
{
	var_0_object = var_701_object;
	var_1_object = var_700_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_707_string = "";
		func_3026(var_701_object, "Neutral");
		@@@var_0_object:SetMessage((int)535231);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535232, (int)36953, (int)36907);
		@@@var_0_object:AddReply((int)535233, (int)-1, (int)36908);
		@@@var_0_object:AddReply((int)535280, (int)-1, (int)36956);
		goto Label_2996;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xb97";
	}
Label_2996:
	var_725_bool = 0;
	func_4132(var_725_bool);
	if(var_725_bool != 0) {

	Label_3000:
		lshWaitForAnimEnd();
		var_726_string = var_3_string;
		if(var_726_string != 0) {
		} else {
			var_727_string = "";
			var_727_string = var_2_object;
			func_3894(var_727_string);
			goto Label_3000;
	}
		PlayAnimation("all", "idle");

	Label_3015:
		WaitForAnimEnd();
		var_730_string = var_3_string;
		if(var_730_string != 0) {
			goto Label_3025;
		}
		PlayAnimation("all", "idle");
		goto Label_3015;
	}
	goto Label_3025;
	
Label_3025:
	return 0;
	
}


func_3222(var_0_object, var_1_object, var_2_object, var_3_string, var_759_object, var_760_object)
{
	var_0_object = var_760_object;
	var_1_object = var_759_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_766_string = "";
		func_3280(var_760_object, "Neutral");
		@@@var_0_object:SetMessage((int)540545);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540546, (int)-1, (int)42555);
		@@@var_0_object:AddReply((int)540798, (int)-1, (int)42847);
		goto Label_3250;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xc9a";
	}
Label_3250:
	var_781_bool = 0;
	func_4132(var_781_bool);
	if(var_781_bool != 0) {

	Label_3254:
		lshWaitForAnimEnd();
		var_782_string = var_3_string;
		if(var_782_string != 0) {
		} else {
			var_783_string = "";
			var_783_string = var_2_object;
			func_3894(var_783_string);
			goto Label_3254;
	}
		PlayAnimation("all", "idle");

	Label_3269:
		WaitForAnimEnd();
		var_786_string = var_3_string;
		if(var_786_string != 0) {
			goto Label_3279;
		}
		PlayAnimation("all", "idle");
		goto Label_3269;
	}
	goto Label_3279;
	
Label_3279:
	return 0;
	
}


func_4247()
{
	func_4482();
	var_142_bool = 0; var_143_string = ""; var_144_string = "";
	func_4068(var_142_bool, "quest_k9_01", "fail");
	return 0;
}


func_1686(var_0_object, var_519_int, var_520_object)
{
	var_522_object = Obj(); var_523_bool = 0; var_524_int = 0; var_525_bool = 0; var_526_object = Obj(); var_527_bool = 0; var_528_int = 0; var_529_bool = 0;
	var_0_object = var_520_object;
	var_530_bool = 0; var_531_object = Obj(); var_532_float = 0;
	var_520_object = var_531_object;
	func_3669(var_530_bool, var_531_object, (float)70.0);
	var_533_bool = var_530_bool == 0; //@nz
	if(var_533_bool != 0) {
		var_519_int = -2;
		return 8;
	}
	CreateDialog(var_526_object);
	var_534_int = 0;
	func_4126(var_534_int);
	@@var_526_object:SetNPCName(var_534_int);
	var_535_int = 0;
	func_4124(var_535_int);
	@@var_526_object:SetNPCDescription(var_535_int);
	var_536_string = "";
	func_4128(var_536_string);
	@@var_526_object:SetPhoto(var_536_string);
	var_537_string = "";
	func_4130(var_537_string);
	@@var_526_object:SetPhoto2(var_537_string);
	var_538_int = 0;
	func_4612(var_538_int);
	@@var_526_object:SetPlayerName(var_538_int);
	IsOverrideActive(var_527_bool);
	var_539_bool = var_527_bool;
	if(var_539_bool != 0) {
		var_519_int = -2;
		return 8;
	}
	DoDialog(var_526_object);
	var_540_bool = 0; var_541_object = Obj();
	func_3947(Obj());
	var_542_object = var_541_object;
	func_3756(var_540_bool, var_541_object);
	var_543_object = Obj(); var_544_object = Obj();
	var_520_object = var_543_object;
	var_526_object = var_544_object;
	TaskCall(9);
	func_1767(var_545_object, var_546_object, var_547_string, var_548_bool, var_543_object, var_544_object);
	TaskReturn();
	@@var_526_object:IsDialogEnd(var_529_bool);
	
Label_1749:
	var_591_bool = var_529_bool == 0; //@nz
	if(var_591_bool != 0) {
		sync();
		@@var_526_object:IsDialogEnd(var_529_bool);
		goto Label_1749;
	}
	var_520_object = Obj();
	func_3738();
	StopDialog(var_526_object);
	@@var_526_object:GetReturnValue((int)-1);
	var_528_int = var_519_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3991(var_88_object, var_89_object, var_90_int)
{
	var_91_int = 0; var_92_int = 0; var_93_bool = 0; var_94_int = 0; var_95_int = 0; var_96_bool = 0;
	@@var_89_object:GetItemID(var_94_int);
	GetInvItemProperty(var_95_int, var_94_int, "Category");
	@@var_88_object:AddItem(var_96_bool, var_89_object, var_95_int, var_90_int);
	var_98_bool = var_96_bool == 0; //@nz
	if(var_98_bool != 0) {
		@@var_88_object:DropItems(var_89_object, var_90_int);
	} else {
		var_99_int = 0; var_100_int = 0;
		var_94_int = var_99_int;
		var_90_int = var_100_int;
		func_3979(var_99_int, var_100_int);
	}
	return 6;
	
}


func_3738()
{
	var_280_bool = 0; var_281_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_283_bool = 0;
	func_4132(var_283_bool);
	if(var_283_bool != 0) {
	} else {
		HasAnimationTrack(var_281_bool, "head");
		var_285_bool = var_281_bool;
		if(var_285_bool == 0) goto Label_3755;
		UnlookAsync("head");
	}
Label_3755:
	return 2;
	
}


func_4508()
{
	var_122_object = Obj(); var_123_object = Obj();
	CreateDiaryEntry(var_123_object, (int)521, (int)1, (int)529813);
	var_127_bool = 0; var_128_object = Obj(); var_129_int = 0;
	var_123_object = var_128_object;
	func_4534(var_127_bool, var_128_object, (int)517);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4257(var_104_object)
{
	Trace("revolver ammo6 is given");
	var_107_object = Obj(); var_108_string = ""; var_109_int = 0;
	var_104_object = var_107_object;
	func_4010(var_107_object, "revolver_ammo", (int)6);
	return 0;
}


func_931(var_2_object, var_236_string)
{
	var_237_bool = 0;
	func_4132(var_237_bool);
	var_238_bool = var_237_bool == 0; //@nz
	if(var_238_bool != 0) {
		return 0;
	}
	var_239_bool = var_236_string == var_2_object;
	if(var_239_bool != 0) {
		return 0;
	}
	var_240_string = ""; var_241_bool = 0;
	var_236_string = var_240_string;
	var_243_bool = var_236_string == "";
	if(var_243_bool != 0) {
		var_241_bool = 0;
	} else {
		var_241_bool = 1;
	}
	func_3910(var_240_string, var_241_bool);
	var_2_object = var_236_string;
	return 0;
	
}


func_1446(var_0_object, var_1_object, var_2_object, var_3_string, var_479_object, var_480_object)
{
	var_0_object = var_480_object;
	var_1_object = var_479_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_486_string = "";
		func_1509(var_480_object, "Anger");
		@@@var_0_object:SetMessage((int)525864);
		@@@var_0_object:ClearReplies();
		var_495_bool = 0; var_496_object = Obj();
		var_496_object = var_1_object;
		func_4346(var_496_object);
		if(var_495_bool != 0) {
			@@@var_0_object:AddReply((int)525865, (int)30508, (int)27164);
		}
		@@@var_0_object:AddReply((int)525874, (int)-1, (int)27173);
		goto Label_1479;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x5aa";
	}
Label_1479:
	var_507_bool = 0;
	func_4132(var_507_bool);
	if(var_507_bool != 0) {

	Label_1483:
		lshWaitForAnimEnd();
		var_508_string = var_3_string;
		if(var_508_string != 0) {
		} else {
			var_509_string = "";
			var_509_string = var_2_object;
			func_3894(var_509_string);
			goto Label_1483;
	}
		PlayAnimation("all", "idle");

	Label_1498:
		WaitForAnimEnd();
		var_512_string = var_3_string;
		if(var_512_string != 0) {
			goto Label_1508;
		}
		PlayAnimation("all", "idle");
		goto Label_1498;
	}
	goto Label_1508;
	
Label_1508:
	return 0;
	
}


func_4521(var_65_object)
{
	var_66_object = Obj(); var_67_object = Obj();
	GetDiaryRoot(var_67_object);
	var_68_bool = var_67_object == 0; //@nz
	if(var_68_bool != 0) {
		Trace("Can't retrieve diary root");
		var_65_object = 0;
		return 2;
	}
	var_67_object = var_65_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1194(var_2_object, var_415_string)
{
	var_416_bool = 0;
	func_4132(var_416_bool);
	var_417_bool = var_416_bool == 0; //@nz
	if(var_417_bool != 0) {
		return 0;
	}
	var_418_bool = var_415_string == var_2_object;
	if(var_418_bool != 0) {
		return 0;
	}
	var_419_string = ""; var_420_bool = 0;
	var_415_string = var_419_string;
	var_422_bool = var_415_string == "";
	if(var_422_bool != 0) {
		var_420_bool = 0;
	} else {
		var_420_bool = 1;
	}
	func_3910(var_419_string, var_420_bool);
	var_2_object = var_415_string;
	return 0;
	
}


func_4010(var_83_object, var_84_string, var_85_int)
{
	var_86_object = Obj(); var_87_object = Obj();
	CreateInvItem(var_87_object);
	@@var_87_object:SetItemName(var_84_string);
	var_88_object = Obj(); var_89_object = Obj(); var_90_int = 0;
	var_83_object = var_88_object;
	var_87_object = var_89_object;
	var_85_int = var_90_int;
	func_3991(var_88_object, var_89_object, var_90_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3756(var_134_bool, var_135_object)
{
	var_139_int = 0; var_140_int = 0; var_141_int = 0; var_142_int = 0;
	GetVariable("voice_common", var_141_int);
	var_144_int = var_141_int;
	if(var_144_int != 0) {
		var_145_bool = 0; var_146_object = Obj();
		var_135_object = var_146_object;
		func_3814(var_145_bool, var_146_object);
		var_175_bool = var_145_bool == 0; //@nz
		if(var_175_bool != 0) {
			var_176_bool = 0; var_177_object = Obj();
			var_135_object = var_177_object;
			func_3851(var_176_bool, var_177_object);
			var_211_bool = var_176_bool == 0; //@nz
			if(var_211_bool != 0) {
				var_134_bool = 0;
				return 4;
			}
		}
		irand(var_142_int, (int)2);
		var_213_int = var_142_int;
		if(var_213_int != 0) {
			var_216_int = var_141_int + (int)1;
			var_218_int = var_216_int % (int)3;
			SetVariable("voice_common", var_218_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_221_bool = 0; var_222_object = Obj();
		var_135_object = var_222_object;
		func_3851(var_221_bool, var_222_object);
		var_223_bool = var_221_bool == 0; //@nz
		if(var_223_bool != 0) {
			var_224_bool = 0; var_225_object = Obj();
			var_135_object = var_225_object;
			func_3814(var_224_bool, var_225_object);
			var_226_bool = var_224_bool == 0; //@nz
			if(var_226_bool != 0) {
				var_134_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_3812;
	
Label_3812:
	var_134_bool = 1;
	return 4;
	
}


func_4268(var_53_object)
{
	var_55_bool = 0; var_56_object = Obj(); var_57_float = 0;
	var_53_object = var_56_object;
	func_4023(var_55_bool, var_56_object, (float)-0.30000001192092896);
	return 0;
}


func_4275(var_95_object)
{
	var_97_bool = 0; var_98_object = Obj(); var_99_float = 0;
	var_95_object = var_98_object;
	func_4023(var_97_bool, var_98_object, (float)-0.5);
	return 0;
}


func_4534(var_56_bool, var_57_object, var_58_int)
{
	var_59_object = Obj(); var_60_object = Obj(); var_61_int = 0; var_62_object = Obj(); var_63_object = Obj(); var_64_int = 0;
	func_4521(Obj());
	var_65_object = var_62_object;
	@@var_62_object:Find(var_58_int, var_63_object);
	var_70_bool = var_63_object == 0; //@nz
	if(var_70_bool != 0) {
		var_72_int = "Can't find diary parent with id: " + var_58_int;
		Trace(var_72_int);
		var_56_bool = 0;
		return 6;
	}
	@@var_63_object:AddChild(var_57_object);
	SendWorldWndMessage((int)7);
	@@var_57_object:GetCategory(var_64_int);
	SetDiarySection(var_64_int);
	var_56_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_4023(var_55_bool, var_56_object, var_57_float)
{
	var_58_bool = var_56_object == 0; //@nz
	if(var_58_bool != 0) {
		var_55_bool = 0;
		return 0;
	}
	var_60_bool = var_57_float > (int)0;
	if(var_60_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_91_bool = var_57_float < (int)0;
		if(var_91_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_4044;
		}
		var_55_bool = 0;
		return 0;
	}
Label_4044:
	var_62_float = 0;
	var_57_float = var_62_float;
	func_4058(var_62_float);
	var_66_bool = 0; var_67_object = Obj(); var_68_string = ""; var_69_float = 0; var_70_float = 0; var_71_float = 0;
	var_56_object = var_67_object;
	var_57_float = var_69_float;
	func_3623(var_66_bool, var_67_object, "reputation", var_69_float, (float)0, (float)1);
	var_55_bool = 1;
	return 0;
	
}


func_4282(var_91_object)
{
	var_92_object = Obj(); var_93_string = ""; var_94_float = 0;
	func_4562(Obj());
	var_95_object = var_92_object;
	func_4579(var_92_object, "pt_map_maria", (float)2);
	var_115_object = Obj();
	func_4562(var_115_object);
	@@var_91_object:ShowMap(var_115_object);
	return 0;
}


func_188(var_2_object, var_341_string)
{
	var_342_bool = 0;
	func_4132(var_342_bool);
	var_343_bool = var_342_bool == 0; //@nz
	if(var_343_bool != 0) {
		return 0;
	}
	var_344_bool = var_341_string == var_2_object;
	if(var_344_bool != 0) {
		return 0;
	}
	var_345_string = ""; var_346_bool = 0;
	var_341_string = var_345_string;
	var_348_bool = var_341_string == "";
	if(var_348_bool != 0) {
		var_346_bool = 0;
	} else {
		var_346_bool = 1;
	}
	func_3910(var_345_string, var_346_bool);
	var_2_object = var_341_string;
	return 0;
	
}


func_3527()
{
	var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_int = 0; var_54_bool = 0; var_55_int = 0; var_56_int = 0; var_57_bool = 0;
	WaitForAnimEnd();
	var_58_bool = 0;
	func_3664(var_58_bool);
	var_59_bool = var_58_bool == 0; //@nz
	if(var_59_bool != 0) {
		return 12;
	}
	func_4107((int)0);
	var_60_int = var_52_int;
	var_53_int = 0;
	
Label_3541:
	var_73_bool = 0;
	var_73_bool = 0;
	var_75_bool = var_53_int < (int)5;
	if(var_75_bool != 0) {
		var_76_bool = 0;
		func_3664(var_76_bool);
		if(var_76_bool != 0) {
			var_73_bool = 1;
		}
	}
	if(var_73_bool != 0) {
		var_77_bool = var_52_int == 0; //@nz
		if(var_77_bool != 0) {
			Sleep((int)3, var_54_bool);
			var_79_bool = var_54_bool == 0; //@nz
			if(var_79_bool != 0) {
			} else {
		} else {
				irand(var_55_int, var_52_int);
				irand(var_56_int, (int)5);
				var_85_bool = var_56_int != (int)0;
				if(var_85_bool != 0) {
					var_55_int = 0;
				}
				var_87_string = ""; var_88_int = 0;
				var_55_int = var_88_int;
				func_4100(var_87_string, var_88_int);
				PlayAnimation("all", var_87_string);
				WaitForAnimEnd(var_57_bool);
				var_89_bool = var_57_bool == 0; //@nz
				if(var_89_bool == 0) goto Label_3582;
				goto Label_3593;
		}
		Label_3582:
			var_80_bool = 0;
			func_3596(var_80_bool);
			var_81_bool = var_80_bool == 0; //@nz
			if(var_81_bool != 0) {
				goto Label_3593;
			}
			ResetAAS();
			var_53_int = var_53_int + (int)1;
			goto Label_3541;

		}
	}
Label_3593:
	ResetAAS();
	return 12;
	
}


func_4298(var_323_bool)
{
	var_325_int = 0; var_326_string = "";
	func_3974(var_325_int, "k1q02");
	var_330_bool = var_325_int == (int)2;
	if(var_330_bool != 0) {
		var_323_bool = 1;
		return 0;
	}
	var_323_bool = 0;
	return 0;
}


func_3280(var_2_object, var_766_string)
{
	var_767_bool = 0;
	func_4132(var_767_bool);
	var_768_bool = var_767_bool == 0; //@nz
	if(var_768_bool != 0) {
		return 0;
	}
	var_769_bool = var_766_string == var_2_object;
	if(var_769_bool != 0) {
		return 0;
	}
	var_770_string = ""; var_771_bool = 0;
	var_766_string = var_770_string;
	var_773_bool = var_766_string == "";
	if(var_773_bool != 0) {
		var_771_bool = 0;
	} else {
		var_771_bool = 1;
	}
	func_3910(var_770_string, var_771_bool);
	var_2_object = var_766_string;
	return 0;
	
}


func_3026(var_2_object, var_707_string)
{
	var_708_bool = 0;
	func_4132(var_708_bool);
	var_709_bool = var_708_bool == 0; //@nz
	if(var_709_bool != 0) {
		return 0;
	}
	var_710_bool = var_707_string == var_2_object;
	if(var_710_bool != 0) {
		return 0;
	}
	var_711_string = ""; var_712_bool = 0;
	var_707_string = var_711_string;
	var_714_bool = var_707_string == "";
	if(var_714_bool != 0) {
		var_712_bool = 0;
	} else {
		var_712_bool = 1;
	}
	func_3910(var_711_string, var_712_bool);
	var_2_object = var_707_string;
	return 0;
	
}


func_4562(var_53_object)
{
	var_54_object = Obj(); var_55_object = Obj(); var_56_object = Obj(); var_57_object = Obj();
	GetMainOutdoorScene(var_56_object);
	var_58_bool = var_56_object == 0; //@ne
	if(var_58_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_57_object = 0;
		var_57_object = var_53_object;
		return 4;
	}
	@@var_56_object:GetMap(var_57_object);
	var_57_object = var_53_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4310(var_363_bool)
{
	var_365_int = 0; var_366_string = "";
	func_3974(var_365_int, "k1q02");
	var_368_bool = var_365_int == (int)4;
	if(var_368_bool != 0) {
		var_363_bool = 1;
		return 0;
	}
	var_363_bool = 0;
	return 0;
}


func_4058(var_62_float)
{
	var_63_object = Obj(); var_64_object = Obj();
	CreateFloatVector(var_64_object);
	@@var_64_object:add(var_62_float);
	SendWorldWndMessage((int)16, var_64_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4322(var_425_bool)
{
	var_427_int = 0; var_428_string = "";
	func_3974(var_427_int, "k3q03");
	var_430_bool = var_427_int == (int)1000;
	if(var_430_bool != 0) {
		var_425_bool = 1;
		return 0;
	}
	var_425_bool = 0;
	return 0;
}


func_4579(var_92_object, var_93_string, var_94_float)
{
	var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_object = Obj(); var_99_bool = 0; var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_object = Obj(); var_103_bool = 0;
	GetMainOutdoorScene(var_102_object);
	var_104_bool = var_102_object == 0; //@ne
	if(var_104_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_102_object:GetLocator(var_93_string, var_103_bool, var_100_cvector, var_101_cvector);
	var_106_bool = var_103_bool == 0; //@nz
	if(var_106_bool != 0) {
		var_108_int = "Warning: outdoor scene locator " + var_93_string;
		var_110_int = var_108_int + " doesnt exist";
		Trace(var_110_int);
	}
	@@var_102_object:GetMap(var_92_object);
	var_111_bool = var_92_object == 0; //@ne
	if(var_111_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_113_float = GetByIndex(var_100_cvector, 0);
	var_114_float = GetByIndex(var_100_cvector, 2);
	@@var_92_object:SetMapParams(var_113_float, var_114_float, var_94_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_4068(var_74_bool, var_75_string, var_76_string)
{
	var_77_object = Obj(); var_78_object = Obj();
	FindActor(var_78_object, var_75_string);
	var_79_bool = var_78_object == 0; //@ne
	if(var_79_bool != 0) {
		var_74_bool = 0;
		return 2;
	}
	Trigger(var_78_object, var_76_string);
	var_74_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1509(var_2_object, var_486_string)
{
	var_487_bool = 0;
	func_4132(var_487_bool);
	var_488_bool = var_487_bool == 0; //@nz
	if(var_488_bool != 0) {
		return 0;
	}
	var_489_bool = var_486_string == var_2_object;
	if(var_489_bool != 0) {
		return 0;
	}
	var_490_string = ""; var_491_bool = 0;
	var_486_string = var_490_string;
	var_493_bool = var_486_string == "";
	if(var_493_bool != 0) {
		var_491_bool = 0;
	} else {
		var_491_bool = 1;
	}
	func_3910(var_490_string, var_491_bool);
	var_2_object = var_486_string;
	return 0;
	
}


func_3814(var_145_bool, var_146_object)
{
	var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; var_152_string = ""; var_153_int = 0; var_154_bool = 0; var_155_int = 0; var_156_string = "";
	var_152_string = "c";
	var_153_int = 0;
	
Label_3817:
	if((int)1 != 0) {
		var_159_int = var_153_int + (int)1;
		var_160_int = var_152_string + var_159_int;
		@@var_146_object:HasProperty(var_160_int, var_154_bool);
		var_161_bool = var_154_bool == 0; //@nz
		if(var_161_bool != 0) {
		} else {
			var_153_int = var_153_int + (int)1;
			goto Label_3817;
		}
	}
	var_162_bool = var_153_int == 0; //@nz
	if(var_162_bool != 0) {
		var_145_bool = 0;
		return 10;
	}
	var_155_int = 0;
	var_164_bool = var_153_int > (int)1;
	if(var_164_bool != 0) {
		irand(var_155_int, var_153_int);
	}
	var_166_int = var_155_int + (int)1;
	var_167_int = var_152_string + var_166_int;
	@@var_146_object:GetProperty(var_167_int, var_156_string);
	var_168_bool = 0; var_169_string = "";
	var_156_string = var_169_string;
	func_3925(var_168_bool, var_169_string);
	var_168_bool = var_145_bool;
	return 10;
	
}


func_1767(var_0_object, var_1_object, var_2_object, var_3_string, var_543_object, var_544_object)
{
	var_0_object = var_544_object;
	var_1_object = var_543_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_550_string = "";
		func_1845(var_544_object, "Neutral");
		@@@var_0_object:SetMessage((int)526481);
		@@@var_0_object:ClearReplies();
		var_559_bool = 0; var_560_object = Obj();
		var_560_object = var_1_object;
		func_4394(var_560_object);
		if(var_559_bool != 0) {
			@@@var_0_object:AddReply((int)526482, (int)30355, (int)27748);
		}
		var_568_bool = 0; var_569_object = Obj();
		var_569_object = var_1_object;
		func_4406(var_569_object);
		if(var_568_bool != 0) {
			@@@var_0_object:AddReply((int)526504, (int)30366, (int)27770);
		}
		@@@var_0_object:AddReply((int)526489, (int)-1, (int)27755);
		@@@var_0_object:AddReply((int)528924, (int)-1, (int)30354);
		goto Label_1815;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x6eb";
	}
Label_1815:
	var_583_bool = 0;
	func_4132(var_583_bool);
	if(var_583_bool != 0) {

	Label_1819:
		lshWaitForAnimEnd();
		var_584_string = var_3_string;
		if(var_584_string != 0) {
		} else {
			var_585_string = "";
			var_585_string = var_2_object;
			func_3894(var_585_string);
			goto Label_1819;
	}
		PlayAnimation("all", "idle");

	Label_1834:
		WaitForAnimEnd();
		var_588_string = var_3_string;
		if(var_588_string != 0) {
			goto Label_1844;
		}
		PlayAnimation("all", "idle");
		goto Label_1834;
	}
	goto Label_1844;
	
Label_1844:
	return 0;
	
}


func_2537(var_2_object, var_626_string)
{
	var_627_bool = 0;
	func_4132(var_627_bool);
	var_628_bool = var_627_bool == 0; //@nz
	if(var_628_bool != 0) {
		return 0;
	}
	var_629_bool = var_626_string == var_2_object;
	if(var_629_bool != 0) {
		return 0;
	}
	var_630_string = ""; var_631_bool = 0;
	var_626_string = var_630_string;
	var_633_bool = var_626_string == "";
	if(var_633_bool != 0) {
		var_631_bool = 0;
	} else {
		var_631_bool = 1;
	}
	func_3910(var_630_string, var_631_bool);
	var_2_object = var_626_string;
	return 0;
	
}


func_4334(var_431_bool)
{
	var_433_int = 0; var_434_string = "";
	func_3974(var_433_int, "ook3Georg1");
	var_436_bool = var_433_int == (int)0;
	if(var_436_bool != 0) {
		var_431_bool = 1;
		return 0;
	}
	var_431_bool = 0;
	return 0;
}


func_4080(var_64_float)
{
	var_65_float = 0; var_66_float = 0;
	GetGameTime(var_66_float);
	var_66_float = var_64_float;
	return 2;
}


func_4085(var_189_int)
{
	var_190_float = 0; var_191_float = 0;
	GetGameTime(var_191_float);
	var_193_int = 0;
	var_193_int = var_191_float / (int)24;
	var_189_int = (int)1 + var_193_int;
	return 2;
}


func_4346(var_495_bool)
{
	var_497_int = 0; var_498_string = "";
	func_3974(var_497_int, "k5q01");
	var_500_bool = var_497_int == (int)2;
	if(var_500_bool != 0) {
		var_495_bool = 1;
		return 0;
	}
	var_495_bool = 0;
	return 0;
}


func_4094(var_288_bool, var_289_int)
{
	var_290_int = 0;
	func_4085(var_290_int);
	var_288_bool = var_290_int == var_289_int;
	return 0;
}


