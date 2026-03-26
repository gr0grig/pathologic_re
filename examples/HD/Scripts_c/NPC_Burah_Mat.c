// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetMainOutdoorScene/1,AddBlankActor/4,Trigger/2,GetGameTime/1,HasAnimation/3,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Rage|W:Discontent|W:Untrust|W:Patronage|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:.bin|W:ui/NPC_Mat.png|W:ui/NPC_Mat_b.png|W:b7q01|W:b7q01MatGotoPrison|W:pt_map_uprava_prison|A:AddMark|W:quest_b7_01|W:init_prison|A:ShowMap|W:b7q02|W:quest_b7_02|W:init_termitnik2|W:completed|W:b8q01|W:quest_b8_01|W:place_klara|W:remove_klara|W:unlock_boiny|W:b8q03|W:b8q03MladVladIsVictim|W:oob10Mat1|W:oob10Mat2|W:b10q04|W:b10q04MatGotoMorlok|W:pt_b10q04_morlok|W:quest_b10_04|W:place_morloks|W:b10MatVisit|W:fail|W:oob12Mat1|W:b10q01|W:b10q04PlennikTalk|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:mt_mat
// @GLOBALS: 0:object:
// @RUN_OP: 0xae3
// @RUN_TASK: 12
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa1 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1f8 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x3da vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x70d vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x980 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xab9 vars=int,int
// @TASK_12: vars=cvector params=0
// @EVENT_7: op=0xb2c vars=int
// @EVENT_6: op=0xb52 vars=
// @EVENT_5: op=0xb61 vars=
// @EVENT_45: op=0xb6e vars=bool
// @EVENT_0: op=0xb7a vars=object
// @PE: 0x51,0x8b,0xa1,0x185,0x1e2,0x1f8,0x371,0x3c4,0x3da,0x64c,0x6f7,0x70d,0x926,0x96a,0x980,0xa69,0xaa3,0xab9,0xae3,0xb2c,0xb52,0xb6e,0xd5b,0xd9f,0xdaf,0xdc4,0xdce,0xddc,0xdef,0xdfc,0xe09,0xe0f,0xe34,0xe44,0xe4a,0xe54,0xe5a,0xe66,0xe72,0xe7e,0xe8a,0xe96,0xea2,0xeae,0xeba,0xec6,0xed2,0xede,0xeea,0xef6,0xf00,0xf0a,0xf16,0xf2b

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_3346();
		var_36_bool = var_31_bool == (int)19193;
		if(var_36_bool != 0) {
			var_37_string = "";
			func_139(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518060);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518061, (int)29781, (int)19194);
			@@@var_0_object:AddReply((int)528400, (int)29777, (int)29776);
			return 0;
		}
		var_62_bool = var_31_bool == (int)29777;
		if(var_62_bool != 0) {
			var_63_string = "";
			func_139(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528401);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528402, (int)29779, (int)29778);
			return 0;
		}
		var_69_bool = var_31_bool == (int)29779;
		if(var_69_bool != 0) {
			var_70_string = "";
			func_139(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528403);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528404, (int)29781, (int)29780);
			return 0;
		}
		var_76_bool = var_31_bool == (int)29781;
		if(var_76_bool != 0) {
			var_77_string = "";
			func_139(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528405);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528406, (int)29784, (int)29782);
			@@@var_0_object:AddReply((int)528407, (int)29786, (int)29783);
			return 0;
		}
		var_86_bool = var_31_bool == (int)29786;
		if(var_86_bool != 0) {
			var_87_string = "";
			func_139(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528409);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528410, (int)29784, (int)29787);
			@@@var_0_object:AddReply((int)528411, (int)29784, (int)29788);
			return 0;
		}
		var_96_bool = var_31_bool == (int)29784;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_139(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528408);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528412, (int)-1, (int)29791);
			@@@var_0_object:AddReply((int)528413, (int)-1, (int)29792);
			return 0;
		}
		var_3_string = true;
		var_105_bool = 0;
		func_3457(var_105_bool);
		if(var_105_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa2";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_3346();
		var_36_bool = var_32_cvector == (int)22198;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_3459();
			var_86_object = Obj(); var_87_object = Obj();
			var_86_object = var_1_object;
			var_87_object = var_0_object;
			func_3487(var_87_object);
		}
		var_113_bool = var_32_cvector == (int)22409;
		if(var_113_bool != 0) {
			var_114_object = Obj(); var_115_object = Obj();
			var_114_object = var_1_object;
			var_115_object = var_0_object;
			func_3503();
		}
		var_146_bool = var_32_cvector == (int)22412;
		if(var_146_bool != 0) {
			var_147_object = Obj(); var_148_object = Obj();
			var_147_object = var_1_object;
			var_148_object = var_0_object;
			func_3524();
		}
		var_161_bool = var_31_bool == (int)22197;
		if(var_161_bool != 0) {
			var_162_bool = 0; var_163_object = Obj();
			var_163_object = var_1_object;
			func_3850(var_163_object);
			if(var_162_bool != 0) {
				var_170_string = "";
				func_482(var_32_cvector, "Rage");
				@@@var_0_object:SetMessage((int)520984);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)528518, (int)29911, (int)29910);
				return 0;
			}
			var_191_string = "";
			func_482(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520986);
			@@@var_0_object:ClearReplies();
			var_193_bool = 0; var_194_object = Obj();
			var_194_object = var_1_object;
			func_3674(var_194_object);
			if(var_193_bool != 0) {
				@@@var_0_object:AddReply((int)521209, (int)29920, (int)22405);
			}
			var_202_bool = 0; var_203_object = Obj();
			var_203_object = var_1_object;
			func_3686(var_203_object);
			if(var_202_bool != 0) {
				@@@var_0_object:AddReply((int)521216, (int)22411, (int)22410);
			}
			@@@var_0_object:AddReply((int)520987, (int)-1, (int)22200);
			return 0;
		}
		var_215_bool = var_31_bool == (int)22411;
		if(var_215_bool != 0) {
			var_216_string = "";
			func_482(var_32_cvector, "Rage");
			@@@var_0_object:SetMessage((int)521217);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521218, (int)-1, (int)22412);
			return 0;
		}
		var_222_bool = var_31_bool == (int)29920;
		if(var_222_bool != 0) {
			var_223_string = "";
			func_482(var_32_cvector, "Rage");
			@@@var_0_object:SetMessage((int)528528);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528529, (int)29922, (int)29921);
			return 0;
		}
		var_229_bool = var_31_bool == (int)29922;
		if(var_229_bool != 0) {
			var_230_string = "";
			func_482(var_32_cvector, "Discontent");
			@@@var_0_object:SetMessage((int)528530);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528548, (int)29942, (int)29940);
			@@@var_0_object:AddReply((int)528531, (int)29924, (int)29923);
			return 0;
		}
		var_239_bool = var_31_bool == (int)29924;
		if(var_239_bool != 0) {
			var_240_string = "";
			func_482(var_32_cvector, "Discontent");
			@@@var_0_object:SetMessage((int)528532);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528533, (int)22406, (int)29925);
			return 0;
		}
		var_246_bool = var_31_bool == (int)22406;
		if(var_246_bool != 0) {
			var_247_string = "";
			func_482(var_32_cvector, "Discontent");
			@@@var_0_object:SetMessage((int)521210);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528549, (int)29942, (int)29941);
			return 0;
		}
		var_253_bool = var_31_bool == (int)29942;
		if(var_253_bool != 0) {
			var_254_string = "";
			func_482(var_32_cvector, "Discontent");
			@@@var_0_object:SetMessage((int)528550);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521211, (int)22408, (int)22407);
			@@@var_0_object:AddReply((int)528524, (int)22408, (int)29916);
			return 0;
		}
		var_263_bool = var_31_bool == (int)22408;
		if(var_263_bool != 0) {
			var_264_string = "";
			func_482(var_32_cvector, "Discontent");
			@@@var_0_object:SetMessage((int)521212);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521213, (int)-1, (int)22409);
			return 0;
		}
		var_270_bool = var_31_bool == (int)29911;
		if(var_270_bool != 0) {
			var_271_string = "";
			func_482(var_32_cvector, "Rage");
			@@@var_0_object:SetMessage((int)528519);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528520, (int)29913, (int)29912);
			return 0;
		}
		var_277_bool = var_31_bool == (int)29913;
		if(var_277_bool != 0) {
			var_278_string = "";
			func_482(var_32_cvector, "Rage");
			@@@var_0_object:SetMessage((int)528521);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528522, (int)29915, (int)29914);
			return 0;
		}
		var_284_bool = var_31_bool == (int)29915;
		if(var_284_bool != 0) {
			var_285_string = "";
			func_482(var_32_cvector, "Rage");
			@@@var_0_object:SetMessage((int)528523);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520985, (int)-1, (int)22198);
			return 0;
		}
		var_3_string = true;
		var_290_bool = 0;
		func_3457(var_290_bool);
		if(var_290_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1f9";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_3346();
		var_36_bool = var_32_cvector == (int)22564;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_3534();
		}
		var_71_bool = var_32_cvector == (int)32575;
		if(var_71_bool != 0) {
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_3658();
		}
		var_86_bool = var_32_cvector == (int)22594;
		if(var_86_bool != 0) {
			var_87_object = Obj(); var_88_object = Obj();
			var_87_object = var_1_object;
			var_88_object = var_0_object;
			func_3548();
		}
		var_106_bool = var_32_cvector == (int)22682;
		if(var_106_bool != 0) {
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_3567();
		}
		var_122_bool = var_32_cvector == (int)22683;
		if(var_122_bool != 0) {
			var_123_object = Obj(); var_124_object = Obj();
			var_123_object = var_1_object;
			var_124_object = var_0_object;
			func_3580();
		}
		var_138_bool = var_31_bool == (int)22560;
		if(var_138_bool != 0) {
			var_139_string = "";
			func_964(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521382);
			@@@var_0_object:ClearReplies();
			var_157_bool = 0; var_158_object = Obj();
			var_158_object = var_1_object;
			func_3698(var_158_object);
			if(var_157_bool != 0) {
				@@@var_0_object:AddReply((int)521383, (int)25136, (int)22561);
			}
			var_168_bool = 0; var_169_object = Obj();
			var_169_object = var_1_object;
			func_3710(var_169_object);
			if(var_168_bool != 0) {
				@@@var_0_object:AddReply((int)521412, (int)22591, (int)22590);
			}
			var_177_bool = 0; var_178_object = Obj();
			var_178_object = var_1_object;
			func_3734(var_178_object);
			if(var_177_bool != 0) {
				@@@var_0_object:AddReply((int)521519, (int)25119, (int)22680);
			}
			@@@var_0_object:AddReply((int)521384, (int)-1, (int)22562);
			return 0;
		}
		var_190_bool = var_31_bool == (int)25119;
		if(var_190_bool != 0) {
			var_191_string = "";
			func_964(var_32_cvector, "Rage");
			@@@var_0_object:SetMessage((int)523846);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523851, (int)25125, (int)25124);
			@@@var_0_object:AddReply((int)523847, (int)25121, (int)25120);
			return 0;
		}
		var_200_bool = var_31_bool == (int)25121;
		if(var_200_bool != 0) {
			var_201_string = "";
			func_964(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523848);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523855, (int)25123, (int)25128);
			return 0;
		}
		var_207_bool = var_31_bool == (int)25125;
		if(var_207_bool != 0) {
			var_208_string = "";
			func_964(var_32_cvector, "Rage");
			@@@var_0_object:SetMessage((int)523852);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523853, (int)25127, (int)25126);
			return 0;
		}
		var_214_bool = var_31_bool == (int)25127;
		if(var_214_bool != 0) {
			var_215_string = "";
			func_964(var_32_cvector, "Rage");
			@@@var_0_object:SetMessage((int)523854);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523849, (int)25123, (int)25122);
			return 0;
		}
		var_221_bool = var_31_bool == (int)25123;
		if(var_221_bool != 0) {
			var_222_string = "";
			func_964(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523850);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523856, (int)22681, (int)25130);
			return 0;
		}
		var_228_bool = var_31_bool == (int)22681;
		if(var_228_bool != 0) {
			var_229_string = "";
			func_964(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521520);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521521, (int)25132, (int)22682);
			@@@var_0_object:AddReply((int)521522, (int)25134, (int)22683);
			@@@var_0_object:AddReply((int)523857, (int)-1, (int)25131);
			return 0;
		}
		var_241_bool = var_31_bool == (int)25134;
		if(var_241_bool != 0) {
			var_242_string = "";
			func_964(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523860);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523861, (int)-1, (int)25135);
			return 0;
		}
		var_248_bool = var_31_bool == (int)25132;
		if(var_248_bool != 0) {
			var_249_string = "";
			func_964(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523858);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523859, (int)-1, (int)25133);
			return 0;
		}
		var_255_bool = var_31_bool == (int)22591;
		if(var_255_bool != 0) {
			var_256_string = "";
			func_964(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521413);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523877, (int)25154, (int)25153);
			return 0;
		}
		var_262_bool = var_31_bool == (int)25154;
		if(var_262_bool != 0) {
			var_263_string = "";
			func_964(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523878);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523879, (int)25162, (int)25155);
			@@@var_0_object:AddReply((int)523880, (int)25162, (int)25156);
			@@@var_0_object:AddReply((int)523881, (int)25158, (int)25157);
			return 0;
		}
		var_275_bool = var_31_bool == (int)25158;
		if(var_275_bool != 0) {
			var_276_string = "";
			func_964(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)523882);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523884, (int)25162, (int)25160);
			@@@var_0_object:AddReply((int)523883, (int)25163, (int)25159);
			@@@var_0_object:AddReply((int)523885, (int)25162, (int)25161);
			return 0;
		}
		var_288_bool = var_31_bool == (int)25163;
		if(var_288_bool != 0) {
			var_289_string = "";
			func_964(var_32_cvector, "Discontent");
			@@@var_0_object:SetMessage((int)523887);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521414, (int)22593, (int)22592);
			return 0;
		}
		var_295_bool = var_31_bool == (int)22593;
		if(var_295_bool != 0) {
			var_296_string = "";
			func_964(var_32_cvector, "Rage");
			@@@var_0_object:SetMessage((int)521415);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521416, (int)-1, (int)22594);
			var_301_bool = 0; var_302_object = Obj();
			var_302_object = var_1_object;
			func_3722(var_302_object);
			if(var_301_bool != 0) {
				@@@var_0_object:AddReply((int)541573, (int)-1, (int)43744);
			}
			return 0;
		}
		var_311_bool = var_31_bool == (int)25162;
		if(var_311_bool != 0) {
			var_312_string = "";
			func_964(var_32_cvector, "Discontent");
			@@@var_0_object:SetMessage((int)523886);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531259, (int)-1, (int)32575);
			return 0;
		}
		var_318_bool = var_31_bool == (int)25136;
		if(var_318_bool != 0) {
			var_319_string = "";
			func_964(var_32_cvector, "Patronage");
			@@@var_0_object:SetMessage((int)523862);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523863, (int)25138, (int)25137);
			return 0;
		}
		var_325_bool = var_31_bool == (int)25138;
		if(var_325_bool != 0) {
			var_326_string = "";
			func_964(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)523864);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523865, (int)22563, (int)25139);
			@@@var_0_object:AddReply((int)523876, (int)22563, (int)25151);
			return 0;
		}
		var_335_bool = var_31_bool == (int)22563;
		if(var_335_bool != 0) {
			var_336_string = "";
			func_964(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)521385);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523866, (int)25141, (int)25140);
			return 0;
		}
		var_342_bool = var_31_bool == (int)25141;
		if(var_342_bool != 0) {
			var_343_string = "";
			func_964(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)523867);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523868, (int)25143, (int)25142);
			return 0;
		}
		var_349_bool = var_31_bool == (int)25143;
		if(var_349_bool != 0) {
			var_350_string = "";
			func_964(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523869);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523870, (int)25148, (int)25144);
			@@@var_0_object:AddReply((int)523871, (int)25146, (int)25145);
			return 0;
		}
		var_359_bool = var_31_bool == (int)25146;
		if(var_359_bool != 0) {
			var_360_string = "";
			func_964(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523872);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523873, (int)25148, (int)25147);
			return 0;
		}
		var_366_bool = var_31_bool == (int)25148;
		if(var_366_bool != 0) {
			var_367_string = "";
			func_964(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523874);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521386, (int)-1, (int)22564);
			@@@var_0_object:AddReply((int)523875, (int)-1, (int)25150);
			return 0;
		}
		var_3_string = true;
		var_375_bool = 0;
		func_3457(var_375_bool);
		if(var_375_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x3db";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_3346();
		var_36_bool = var_32_cvector == (int)23126;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_3593();
		}
		var_42_bool = var_32_cvector == (int)31745;
		if(var_42_bool != 0) {
			var_43_object = Obj(); var_44_object = Obj();
			var_43_object = var_1_object;
			var_44_object = var_0_object;
			func_3599();
		}
		var_48_bool = var_32_cvector == (int)32812;
		if(var_48_bool != 0) {
			var_49_object = Obj(); var_50_object = Obj();
			var_49_object = var_1_object;
			var_50_object = var_0_object;
			func_3605();
			var_106_object = Obj(); var_107_object = Obj();
			var_106_object = var_1_object;
			var_107_object = var_0_object;
			func_3636(var_107_object);
		}
		var_133_bool = var_32_cvector == (int)31750;
		if(var_133_bool != 0) {
			var_134_object = Obj(); var_135_object = Obj();
			var_134_object = var_1_object;
			var_135_object = var_0_object;
			func_3605();
			var_136_object = Obj(); var_137_object = Obj();
			var_136_object = var_1_object;
			var_137_object = var_0_object;
			func_3636(var_137_object);
		}
		var_139_bool = var_31_bool == (int)23125;
		if(var_139_bool != 0) {
			var_140_object = Obj(); var_141_object = Obj();
			var_140_object = var_1_object;
			var_141_object = var_0_object;
			func_3652();
			var_144_string = "";
			func_1783(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521951);
			@@@var_0_object:ClearReplies();
			var_162_bool = 0;
			var_162_bool = 1;
			var_163_bool = 0;
			var_163_bool = 0;
			var_164_bool = 0; var_165_object = Obj();
			var_165_object = var_1_object;
			func_3746(var_165_object);
			if(var_164_bool != 0) {
				var_172_bool = 0; var_173_object = Obj();
				var_173_object = var_1_object;
				func_3770(var_173_object);
				if(var_172_bool != 0) {
					var_163_bool = 1;
				}
			}
			if(var_163_bool != 1) {
				var_178_bool = 0;
				var_178_bool = 0;
				var_179_bool = 0; var_180_object = Obj();
				var_180_object = var_1_object;
				func_3758(var_180_object);
				if(var_179_bool != 0) {
					var_185_bool = 0; var_186_object = Obj();
					var_186_object = var_1_object;
					func_3770(var_186_object);
					if(var_185_bool != 0) {
						var_178_bool = 1;
					}
				}
				if(var_178_bool != 1) {
					var_162_bool = 0;
				}
			}
			if(var_162_bool != 0) {
				@@@var_0_object:AddReply((int)521952, (int)23688, (int)23126);
			}
			var_190_bool = 0;
			var_190_bool = 1;
			var_191_bool = 0;
			var_191_bool = 0;
			var_192_bool = 0;
			var_192_bool = 0;
			var_193_bool = 0; var_194_object = Obj();
			var_194_object = var_1_object;
			func_3782(var_194_object);
			var_199_bool = var_193_bool == 0; //@nz
			if(var_199_bool != 0) {
				var_200_bool = 0; var_201_object = Obj();
				var_201_object = var_1_object;
				func_3794(var_201_object);
				if(var_200_bool != 0) {
					var_192_bool = 1;
				}
			}
			if(var_192_bool != 0) {
				var_206_bool = 0; var_207_object = Obj();
				var_207_object = var_1_object;
				func_3840(var_206_bool, var_207_object);
				if(var_206_bool != 0) {
					var_191_bool = 1;
				}
			}
			if(var_191_bool != 1) {
				var_217_bool = 0;
				var_217_bool = 0;
				var_218_bool = 0;
				var_218_bool = 0;
				var_219_bool = 0; var_220_object = Obj();
				var_220_object = var_1_object;
				func_3782(var_220_object);
				var_221_bool = var_219_bool == 0; //@nz
				if(var_221_bool != 0) {
					var_222_bool = 0; var_223_object = Obj();
					var_223_object = var_1_object;
					func_3794(var_223_object);
					if(var_222_bool != 0) {
						var_218_bool = 1;
					}
				}
				if(var_218_bool != 0) {
					var_224_bool = 0; var_225_object = Obj();
					var_225_object = var_1_object;
					func_3830(var_224_bool, var_225_object);
					if(var_224_bool != 0) {
						var_217_bool = 1;
					}
				}
				if(var_217_bool != 1) {
					var_190_bool = 0;
				}
			}
			if(var_190_bool != 0) {
				@@@var_0_object:AddReply((int)530373, (int)31746, (int)31745);
			}
			var_238_bool = 0;
			var_238_bool = 0;
			var_239_bool = 0; var_240_object = Obj();
			var_240_object = var_1_object;
			func_3782(var_240_object);
			if(var_239_bool != 0) {
				var_241_bool = 0; var_242_object = Obj();
				var_242_object = var_1_object;
				func_3806(var_242_object);
				if(var_241_bool != 0) {
					var_238_bool = 1;
				}
			}
			if(var_238_bool != 0) {
				@@@var_0_object:AddReply((int)530376, (int)31749, (int)31748);
			}
			@@@var_0_object:AddReply((int)521955, (int)-1, (int)23129);
			return 0;
		}
		var_254_bool = var_31_bool == (int)31749;
		if(var_254_bool != 0) {
			var_255_string = "";
			func_1783(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)530377);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531437, (int)32785, (int)32783);
			@@@var_0_object:AddReply((int)531438, (int)-1, (int)32784);
			return 0;
		}
		var_264_bool = var_31_bool == (int)32785;
		if(var_264_bool != 0) {
			var_265_string = "";
			func_1783(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)531439);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531460, (int)32811, (int)32810);
			@@@var_0_object:AddReply((int)530378, (int)-1, (int)31750);
			return 0;
		}
		var_274_bool = var_31_bool == (int)32811;
		if(var_274_bool != 0) {
			var_275_string = "";
			func_1783(var_32_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)531461);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531462, (int)-1, (int)32812);
			return 0;
		}
		var_281_bool = var_31_bool == (int)31746;
		if(var_281_bool != 0) {
			var_282_string = "";
			func_1783(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)530374);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530375, (int)-1, (int)31747);
			return 0;
		}
		var_288_bool = var_31_bool == (int)23688;
		if(var_288_bool != 0) {
			var_289_string = "";
			func_1783(var_32_cvector, "Patronage");
			@@@var_0_object:SetMessage((int)522512);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522513, (int)23690, (int)23689);
			@@@var_0_object:AddReply((int)522525, (int)23702, (int)23701);
			return 0;
		}
		var_298_bool = var_31_bool == (int)23702;
		if(var_298_bool != 0) {
			var_299_string = "";
			func_1783(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522526);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522527, (int)23692, (int)23703);
			return 0;
		}
		var_305_bool = var_31_bool == (int)23690;
		if(var_305_bool != 0) {
			var_306_string = "";
			func_1783(var_32_cvector, "Patronage");
			@@@var_0_object:SetMessage((int)522514);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522515, (int)23692, (int)23691);
			return 0;
		}
		var_312_bool = var_31_bool == (int)23692;
		if(var_312_bool != 0) {
			var_313_string = "";
			func_1783(var_32_cvector, "Rage");
			@@@var_0_object:SetMessage((int)522516);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522517, (int)23694, (int)23693);
			@@@var_0_object:AddReply((int)522528, (int)23706, (int)23705);
			return 0;
		}
		var_322_bool = var_31_bool == (int)23706;
		if(var_322_bool != 0) {
			var_323_string = "";
			func_1783(var_32_cvector, "Patronage");
			@@@var_0_object:SetMessage((int)522529);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522530, (int)23709, (int)23707);
			return 0;
		}
		var_329_bool = var_31_bool == (int)23709;
		if(var_329_bool != 0) {
			var_330_string = "";
			func_1783(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522531);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522532, (int)23694, (int)23710);
			return 0;
		}
		var_336_bool = var_31_bool == (int)23694;
		if(var_336_bool != 0) {
			var_337_string = "";
			func_1783(var_32_cvector, "Rage");
			@@@var_0_object:SetMessage((int)522518);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522519, (int)23696, (int)23695);
			return 0;
		}
		var_343_bool = var_31_bool == (int)23696;
		if(var_343_bool != 0) {
			var_344_string = "";
			func_1783(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522520);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522521, (int)-1, (int)23697);
			@@@var_0_object:AddReply((int)522522, (int)23699, (int)23698);
			return 0;
		}
		var_353_bool = var_31_bool == (int)23699;
		if(var_353_bool != 0) {
			var_354_string = "";
			func_1783(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522523);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522524, (int)-1, (int)23700);
			return 0;
		}
		var_3_string = true;
		var_359_bool = 0;
		func_3457(var_359_bool);
		if(var_359_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x70e";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_3346();
		var_36_bool = var_32_cvector == (int)36939;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_3668();
		}
		var_42_bool = var_31_bool == (int)36938;
		if(var_42_bool != 0) {
			var_43_string = "";
			func_2410(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535263);
			@@@var_0_object:ClearReplies();
			var_61_bool = 0; var_62_object = Obj();
			var_62_object = var_1_object;
			func_3818(var_62_object);
			if(var_61_bool != 0) {
				@@@var_0_object:AddReply((int)535264, (int)37039, (int)36939);
			}
			@@@var_0_object:AddReply((int)535339, (int)-1, (int)37021);
			@@@var_0_object:AddReply((int)535354, (int)-1, (int)37038);
			return 0;
		}
		var_79_bool = var_31_bool == (int)37039;
		if(var_79_bool != 0) {
			var_80_string = "";
			func_2410(var_32_cvector, "Rage");
			@@@var_0_object:SetMessage((int)535355);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535356, (int)37042, (int)37040);
			@@@var_0_object:AddReply((int)535357, (int)37043, (int)37041);
			return 0;
		}
		var_89_bool = var_31_bool == (int)37043;
		if(var_89_bool != 0) {
			var_90_string = "";
			func_2410(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535359);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535360, (int)-1, (int)37044);
			@@@var_0_object:AddReply((int)535361, (int)37042, (int)37045);
			return 0;
		}
		var_99_bool = var_31_bool == (int)37042;
		if(var_99_bool != 0) {
			var_100_string = "";
			func_2410(var_32_cvector, "Rage");
			@@@var_0_object:SetMessage((int)535358);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535362, (int)37049, (int)37047);
			@@@var_0_object:AddReply((int)535363, (int)-1, (int)37048);
			return 0;
		}
		var_109_bool = var_31_bool == (int)37049;
		if(var_109_bool != 0) {
			var_110_string = "";
			func_2410(var_32_cvector, "Patronage");
			@@@var_0_object:SetMessage((int)535364);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535365, (int)-1, (int)37050);
			@@@var_0_object:AddReply((int)535366, (int)-1, (int)37051);
			return 0;
		}
		var_3_string = true;
		var_118_bool = 0;
		func_3457(var_118_bool);
		if(var_118_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x981";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_cvector)
{
	if((int)1 != 0) {
		func_3346();
		var_36_bool = var_31_int == (int)42560;
		if(var_36_bool != 0) {
			var_37_string = "";
			func_2723(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540551);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540552, (int)-1, (int)42561);
			@@@var_0_object:AddReply((int)540795, (int)-1, (int)42844);
			return 0;
		}
		var_3_string = true;
		var_61_bool = 0;
		func_3457(var_61_bool);
		if(var_61_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xaba";
	
}


task_12_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_int)
{
	var_33_bool = var_31_int == (int)10;
	if(var_33_bool != 0) {
		func_2856();
		var_35_bool = 0;
		var_35_bool = 0;
		var_36_bool = 0;
		func_3070(var_36_bool);
		if(var_36_bool != 0) {
			var_39_bool = 0;
			func_2825(var_39_bool);
			if(var_39_bool != 0) {
				var_35_bool = 1;
			}
		}
		if(var_35_bool != 0) {
			var_56_bool = 0;
			func_2805(var_56_bool);
			if(var_56_bool != 0) {
				var_75_bool = 0; var_76_object = Obj();
				func_3353(Obj());
				var_77_object = var_76_object;
				func_3220(var_75_bool, var_76_object);
			}
		} else {
			func_2820(var_31_int);
			func_2847();
		}
	}
	return 0;
	
}


task_12_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_3038();
	func_2856();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_12_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	StopGroup0();
	func_2856();
	var_32_string = "";
	func_3300("Neutral");
	func_2847();
	return 0;
}


task_12_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_bool)
{
	var_32_bool = var_31_bool;
	if(var_32_bool != 0) {
		func_2847();
	} else {
		var_38_string = "";
		func_3300("Neutral");
	}
	return 0;
	
}


task_12_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_object)
{
	var_32_bool = 0; var_33_bool = 0;
	IsOverrideActive(var_33_bool);
	var_34_bool = var_33_bool == 0; //@nz
	if(var_34_bool != 0) {
		EventDisable(0);
		func_3038();
		var_35_bool = 0; var_36_object = Obj();
		var_31_object = var_36_object;
		func_3061(var_35_bool, var_36_object);
		EventEnable(0);
		var_49_object = Obj();
		var_31_object = var_49_object;
		func_4145(var_49_object);
		var_718_string = "";
		func_3300("Neutral");
		func_2856();
		func_2847();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_2791(var_30_cvector);
	return 0;
}


func_0(var_0_object, var_54_int, var_55_object)
{
	var_57_object = Obj(); var_58_bool = 0; var_59_int = 0; var_60_bool = 0; var_61_object = Obj(); var_62_bool = 0; var_63_int = 0; var_64_bool = 0;
	var_0_object = var_55_object;
	var_65_bool = 0; var_66_object = Obj(); var_67_float = 0;
	var_55_object = var_66_object;
	func_3075(var_65_bool, var_66_object, (float)70.0);
	var_112_bool = var_65_bool == 0; //@nz
	if(var_112_bool != 0) {
		var_54_int = -2;
		return 8;
	}
	CreateDialog(var_61_object);
	var_113_int = 0;
	func_3451(var_113_int);
	@@var_61_object:SetNPCName(var_113_int);
	var_114_int = 0;
	func_3449(var_114_int);
	@@var_61_object:SetNPCDescription(var_114_int);
	var_115_string = "";
	func_3453(var_115_string);
	@@var_61_object:SetPhoto(var_115_string);
	var_116_string = "";
	func_3455(var_116_string);
	@@var_61_object:SetPhoto2(var_116_string);
	var_117_int = 0;
	func_4128(var_117_int);
	@@var_61_object:SetPlayerName(var_117_int);
	IsOverrideActive(var_62_bool);
	var_125_bool = var_62_bool;
	if(var_125_bool != 0) {
		var_54_int = -2;
		return 8;
	}
	DoDialog(var_61_object);
	var_126_bool = 0; var_127_object = Obj();
	func_3353(Obj());
	var_128_object = var_127_object;
	func_3162(var_126_bool, var_127_object);
	var_221_object = Obj(); var_222_object = Obj();
	var_55_object = var_221_object;
	var_61_object = var_222_object;
	TaskCall(1);
	func_81(var_223_object, var_224_object, var_225_string, var_226_bool, var_221_object, var_222_object);
	TaskReturn();
	@@var_61_object:IsDialogEnd(var_64_bool);
	
Label_63:
	var_270_bool = var_64_bool == 0; //@nz
	if(var_270_bool != 0) {
		sync();
		@@var_61_object:IsDialogEnd(var_64_bool);
		goto Label_63;
	}
	var_55_object = Obj();
	func_3144();
	StopDialog(var_61_object);
	@@var_61_object:GetReturnValue((int)-1);
	var_63_int = var_54_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3840(var_538_bool, var_539_object)
{
	var_540_bool = 0; var_541_object = Obj();
	var_539_object = var_541_object;
	func_3883(var_541_object);
	if(var_540_bool != 0) {
		var_538_bool = 1;
		return 0;
	}
	var_538_bool = 0;
	return 0;
}


func_3075(var_65_bool, var_66_object, var_67_float)
{
	var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_bool = 0; var_76_bool = 0; var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_bool = 0; var_85_bool = 0;
	@@var_66_object:GetPosition(var_78_cvector);
	@@var_66_object:GetEyesHeight(var_77_float);
	var_86_float = GetByIndex(var_78_cvector, 1);
	var_86_float = var_86_float + var_77_float;
	SetByIndex(var_78_cvector, 1) = var_86_float;
	GetPosition(var_79_cvector);
	GetEyesHeight(var_77_float);
	var_87_float = GetByIndex(var_79_cvector, 1);
	var_87_float = var_87_float + var_77_float;
	SetByIndex(var_79_cvector, 1) = var_87_float;
	var_80_cvector = var_78_cvector - var_79_cvector;
	var_88_float = GetByIndex(var_80_cvector, 1);
	SetByIndex(var_80_cvector, 1) = (float)0;
	var_89_int = var_80_cvector | var_80_cvector;
	var_90_float = sqrt(var_89_int);
	var_80_cvector = var_80_cvector / var_90_float;
	var_81_cvector = -var_80_cvector;
	var_91_float = var_80_cvector * var_67_float;
	var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0);
	var_93_cvector = var_81_cvector ^ CVector(0.0, 1.0, 0.0);
	func_3359(var_92_cvector, var_93_cvector);
	var_101_float = var_92_cvector * (int)25;
	var_102_int = var_91_float + var_101_float;
	var_82_cvector = var_102_int - CVector(0.0, 10.0, 0.0);
	var_83_cvector = var_79_cvector + var_82_cvector;
	IsOverrideActive(var_84_bool);
	var_104_bool = var_84_bool;
	if(var_104_bool != 0) {
		var_65_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_83_cvector, var_81_cvector, (bool)1);
	var_106_float = GetByIndex(var_82_cvector, 0);
	var_107_float = GetByIndex(var_82_cvector, 2);
	Rotate(var_106_float, var_107_float);
	var_108_bool = 0;
	func_3457(var_108_bool);
	if(var_108_bool != 0) {
	} else {
		HasAnimationTrack(var_85_bool, "head");
		var_110_bool = var_85_bool;
		if(var_110_bool == 0) goto Label_3138;
		LookAsyncCamera("head");
	}
Label_3138:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_65_bool = 1;
	return 18;
	
}


func_3331(var_160_bool, var_161_string)
{
	var_162_bool = 0; var_163_bool = 0;
	var_164_bool = 0;
	func_3457(var_164_bool);
	if(var_164_bool != 0) {
		lshHasSpeech(var_163_bool, var_161_string);
		var_165_bool = var_163_bool;
		if(var_165_bool != 0) {
			lshPlaySpeech(var_161_string);
			var_160_bool = 1;
			return 2;
		}
	}
	var_160_bool = 0;
	return 2;
}


func_2820(var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0);
	var_109_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_108_float, var_109_float);
	return 0;
}


func_3593()
{
	SetVariable("oob10Mat1", (int)1);
	return 0;
}


func_2825(var_39_bool)
{
	var_40_object = Obj(); var_41_bool = 0; var_42_object = Obj(); var_43_bool = 0;
	FindActor(var_42_object, "player");
	var_45_bool = var_42_object == 0; //@nz
	if(var_45_bool != 0) {
		var_39_bool = 0;
		return 4;
	}
	var_46_float = 0; var_47_object = Obj();
	var_42_object = var_47_object;
	func_3043(var_46_float, var_47_object);
	var_55_bool = var_46_float > (float)90000.0;
	if(var_55_bool != 0) {
		var_39_bool = 0;
		return 4;
	}
	CanSee(var_43_bool, var_42_object);
	var_43_bool = var_39_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_3850(var_315_bool)
{
	var_317_int = 0; var_318_string = "";
	func_3369(var_317_int, "b7q01");
	var_322_bool = var_317_int == (int)2;
	if(var_322_bool != 0) {
		var_315_bool = 1;
		return 0;
	}
	var_315_bool = 0;
	return 0;
}


func_3599()
{
	SetVariable("oob10Mat2", (int)1);
	return 0;
}


func_3346()
{
	var_34_bool = 0;
	func_3457(var_34_bool);
	if(var_34_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_3605()
{
	var_51_object = Obj(); var_52_object = Obj();
	SetVariable("b10q04", (int)1);
	func_4078(Obj());
	var_55_object = var_52_object;
	var_66_float = 0;
	func_3397(var_66_float);
	@@var_52_object:AddMark("b10q04MatGotoMorlok", "pt_b10q04_morlok", (int)0, (int)530534, var_66_float);
	func_3894();
	func_3907();
	var_100_bool = 0; var_101_string = ""; var_102_string = "";
	func_3385(var_100_bool, "quest_b10_04", "place_morloks");
	return 2;
}
EMIT "Stack[-1] = 0";


func_3862(var_558_bool)
{
	var_560_bool = 0;
	var_560_bool = 0;
	var_561_int = 0;
	func_3411(var_561_int);
	var_563_bool = var_561_int >= (int)6;
	if(var_563_bool != 0) {
		var_564_int = 0;
		func_3411(var_564_int);
		var_566_bool = var_564_int < (int)12;
		if(var_566_bool != 0) {
			var_560_bool = 1;
		}
	}
	if(var_560_bool != 0) {
		var_558_bool = 1;
		return 0;
	}
	var_558_bool = 0;
	return 0;
}


func_2584(var_0_object, var_662_int, var_663_object)
{
	var_665_object = Obj(); var_666_bool = 0; var_667_int = 0; var_668_bool = 0; var_669_object = Obj(); var_670_bool = 0; var_671_int = 0; var_672_bool = 0;
	var_0_object = var_663_object;
	var_673_bool = 0; var_674_object = Obj(); var_675_float = 0;
	var_663_object = var_674_object;
	func_3075(var_673_bool, var_674_object, (float)70.0);
	var_676_bool = var_673_bool == 0; //@nz
	if(var_676_bool != 0) {
		var_662_int = -2;
		return 8;
	}
	CreateDialog(var_669_object);
	var_677_int = 0;
	func_3451(var_677_int);
	@@var_669_object:SetNPCName(var_677_int);
	var_678_int = 0;
	func_3449(var_678_int);
	@@var_669_object:SetNPCDescription(var_678_int);
	var_679_string = "";
	func_3453(var_679_string);
	@@var_669_object:SetPhoto(var_679_string);
	var_680_string = "";
	func_3455(var_680_string);
	@@var_669_object:SetPhoto2(var_680_string);
	var_681_int = 0;
	func_4128(var_681_int);
	@@var_669_object:SetPlayerName(var_681_int);
	IsOverrideActive(var_670_bool);
	var_682_bool = var_670_bool;
	if(var_682_bool != 0) {
		var_662_int = -2;
		return 8;
	}
	DoDialog(var_669_object);
	var_683_bool = 0; var_684_object = Obj();
	func_3353(Obj());
	var_685_object = var_684_object;
	func_3162(var_683_bool, var_684_object);
	var_686_object = Obj(); var_687_object = Obj();
	var_663_object = var_686_object;
	var_669_object = var_687_object;
	TaskCall(11);
	func_2665(var_688_object, var_689_object, var_690_string, var_691_bool, var_686_object, var_687_object);
	TaskReturn();
	@@var_669_object:IsDialogEnd(var_672_bool);
	
Label_2647:
	var_716_bool = var_672_bool == 0; //@nz
	if(var_716_bool != 0) {
		sync();
		@@var_669_object:IsDialogEnd(var_672_bool);
		goto Label_2647;
	}
	var_663_object = Obj();
	func_3144();
	StopDialog(var_669_object);
	@@var_669_object:GetReturnValue((int)-1);
	var_671_int = var_662_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3353(var_128_object)
{
	var_129_object = Obj(); var_130_object = Obj();
	self(var_130_object);
	var_130_object = var_128_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2847()
{
	var_720_float = 0; var_721_float = 0;
	rand(var_721_float, (int)8, (int)16);
	SetTimer((int)10, var_721_float);
	return 2;
}


func_4128(var_117_int)
{
	var_118_int = 0; var_119_int = 0;
	GetVariable("branch", var_119_int);
	var_122_bool = var_119_int == (int)0;
	if(var_122_bool != 0) {
		var_117_int = 1;
		return 2;
	EMIT "GOTO 0x102f";
	}
	var_124_bool = var_119_int == (int)1;
	if(var_124_bool != 0) {
		var_117_int = 2;
		return 2;
	}
	var_117_int = 3;
	return 2;
}


func_3359(var_92_cvector, var_93_cvector)
{
	var_95_float = 0; var_96_float = 0;
	var_97_int = var_93_cvector | var_93_cvector;
	var_96_float = sqrt(var_97_int);
	var_98_float = 9.999999974752427e-07;
	var_99_bool = var_96_float < var_98_float;
	if(var_99_bool != 0) {
		var_92_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_92_cvector = var_93_cvector / var_96_float;
	return 2;
}


func_800(var_0_object, var_370_int, var_371_object)
{
	var_373_object = Obj(); var_374_bool = 0; var_375_int = 0; var_376_bool = 0; var_377_object = Obj(); var_378_bool = 0; var_379_int = 0; var_380_bool = 0;
	var_0_object = var_371_object;
	var_381_bool = 0; var_382_object = Obj(); var_383_float = 0;
	var_371_object = var_382_object;
	func_3075(var_381_bool, var_382_object, (float)70.0);
	var_384_bool = var_381_bool == 0; //@nz
	if(var_384_bool != 0) {
		var_370_int = -2;
		return 8;
	}
	CreateDialog(var_377_object);
	var_385_int = 0;
	func_3451(var_385_int);
	@@var_377_object:SetNPCName(var_385_int);
	var_386_int = 0;
	func_3449(var_386_int);
	@@var_377_object:SetNPCDescription(var_386_int);
	var_387_string = "";
	func_3453(var_387_string);
	@@var_377_object:SetPhoto(var_387_string);
	var_388_string = "";
	func_3455(var_388_string);
	@@var_377_object:SetPhoto2(var_388_string);
	var_389_int = 0;
	func_4128(var_389_int);
	@@var_377_object:SetPlayerName(var_389_int);
	IsOverrideActive(var_378_bool);
	var_390_bool = var_378_bool;
	if(var_390_bool != 0) {
		var_370_int = -2;
		return 8;
	}
	DoDialog(var_377_object);
	var_391_bool = 0; var_392_object = Obj();
	func_3353(Obj());
	var_393_object = var_392_object;
	func_3162(var_391_bool, var_392_object);
	var_394_object = Obj(); var_395_object = Obj();
	var_371_object = var_394_object;
	var_377_object = var_395_object;
	TaskCall(5);
	func_881(var_396_object, var_397_object, var_398_string, var_399_bool, var_394_object, var_395_object);
	TaskReturn();
	@@var_377_object:IsDialogEnd(var_380_bool);
	
Label_863:
	var_448_bool = var_380_bool == 0; //@nz
	if(var_448_bool != 0) {
		sync();
		@@var_377_object:IsDialogEnd(var_380_bool);
		goto Label_863;
	}
	var_371_object = Obj();
	func_3144();
	StopDialog(var_377_object);
	@@var_377_object:GetReturnValue((int)-1);
	var_379_int = var_370_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2342(var_0_object, var_1_object, var_2_object, var_3_string, var_621_object, var_622_object)
{
	var_0_object = var_622_object;
	var_1_object = var_621_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_628_string = "";
		func_2410(var_622_object, "Neutral");
		@@@var_0_object:SetMessage((int)535263);
		@@@var_0_object:ClearReplies();
		var_637_bool = 0; var_638_object = Obj();
		var_638_object = var_1_object;
		func_3818(var_638_object);
		if(var_637_bool != 0) {
			@@@var_0_object:AddReply((int)535264, (int)37039, (int)36939);
		}
		@@@var_0_object:AddReply((int)535339, (int)-1, (int)37021);
		@@@var_0_object:AddReply((int)535354, (int)-1, (int)37038);
		goto Label_2380;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x92a";
	}
Label_2380:
	var_652_bool = 0;
	func_3457(var_652_bool);
	if(var_652_bool != 0) {

	Label_2384:
		lshWaitForAnimEnd();
		var_653_string = var_3_string;
		if(var_653_string != 0) {
		} else {
			var_654_string = "";
			var_654_string = var_2_object;
			func_3300(var_654_string);
			goto Label_2384;
	}
		PlayAnimation("all", "idle");

	Label_2399:
		WaitForAnimEnd();
		var_657_string = var_3_string;
		if(var_657_string != 0) {
			goto Label_2409;
		}
		PlayAnimation("all", "idle");
		goto Label_2399;
	}
	goto Label_2409;
	
Label_2409:
	return 0;
	
}


func_2856()
{
	KillTimer((int)10);
	return 0;
}


func_3369(var_317_int, var_318_string)
{
	var_319_int = 0; var_320_int = 0;
	GetVariable(var_318_string, var_320_int);
	var_320_int = var_317_int;
	return 2;
}


func_3883(var_540_bool)
{
	var_542_int = 0;
	func_3411(var_542_int);
	var_548_bool = var_542_int >= (int)12;
	if(var_548_bool != 0) {
		var_540_bool = 1;
		return 0;
	}
	var_540_bool = 0;
	return 0;
}


func_3374(var_134_object, var_135_string)
{
	var_136_object = Obj(); var_137_object = Obj(); var_138_object = Obj(); var_139_object = Obj();
	GetMainOutdoorScene(var_138_object);
	var_141_int = var_135_string + ".bin";
	AddBlankActor(var_139_object, var_138_object, var_135_string, var_141_int);
	var_139_object = var_134_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4145(var_49_object)
{
	var_50_int = 0; var_51_int = 0;
	GetVariable("mt_mat", var_51_int);
	var_53_bool = var_51_int == 0; //@nz
	if(var_53_bool != 0) {
		var_54_int = 0; var_55_object = Obj();
		var_49_object = var_55_object;
		TaskCall(0);
		func_0(var_56_object, var_54_int, var_55_object);
		TaskReturn();
		SetVariable("mt_mat", (int)1);
	}
	var_281_bool = 0; var_282_int = 0;
	func_3419(var_281_bool, (int)7);
	if(var_281_bool != 0) {
		var_284_int = 0; var_285_object = Obj();
		var_49_object = var_285_object;
		TaskCall(2);
		func_308(var_286_object, var_284_int, var_285_object);
		TaskReturn();
		return 2;
	}
	var_368_bool = 0; var_369_int = 0;
	func_3419(var_368_bool, (int)8);
	if(var_368_bool != 0) {
		var_370_int = 0; var_371_object = Obj();
		var_49_object = var_371_object;
		TaskCall(4);
		func_800(var_372_object, var_370_int, var_371_object);
		TaskReturn();
		return 2;
	}
	var_450_bool = 0; var_451_int = 0;
	func_3419(var_450_bool, (int)10);
	if(var_450_bool != 0) {
		var_452_int = 0; var_453_object = Obj();
		var_49_object = var_453_object;
		TaskCall(6);
		func_1531(var_454_object, var_452_int, var_453_object);
		TaskReturn();
		return 2;
	}
	var_595_bool = 0; var_596_int = 0;
	func_3419(var_595_bool, (int)12);
	if(var_595_bool != 0) {
		var_597_int = 0; var_598_object = Obj();
		var_49_object = var_598_object;
		TaskCall(8);
		func_2261(var_599_object, var_597_int, var_598_object);
		TaskReturn();
		return 2;
	}
	var_662_int = 0; var_663_object = Obj();
	var_49_object = var_663_object;
	TaskCall(10);
	func_2584(var_664_object, var_662_int, var_663_object);
	TaskReturn();
	return 2;
}


func_3636(var_107_object)
{
	var_108_object = Obj(); var_109_string = ""; var_110_float = 0;
	func_4078(Obj());
	var_111_object = var_108_object;
	func_4095(var_108_object, "pt_b10q04_morlok", (float)2);
	var_131_object = Obj();
	func_4078(var_131_object);
	@@var_107_object:ShowMap(var_131_object);
	return 0;
}


func_308(var_0_object, var_284_int, var_285_object)
{
	var_287_object = Obj(); var_288_bool = 0; var_289_int = 0; var_290_bool = 0; var_291_object = Obj(); var_292_bool = 0; var_293_int = 0; var_294_bool = 0;
	var_0_object = var_285_object;
	var_295_bool = 0; var_296_object = Obj(); var_297_float = 0;
	var_285_object = var_296_object;
	func_3075(var_295_bool, var_296_object, (float)70.0);
	var_298_bool = var_295_bool == 0; //@nz
	if(var_298_bool != 0) {
		var_284_int = -2;
		return 8;
	}
	CreateDialog(var_291_object);
	var_299_int = 0;
	func_3451(var_299_int);
	@@var_291_object:SetNPCName(var_299_int);
	var_300_int = 0;
	func_3449(var_300_int);
	@@var_291_object:SetNPCDescription(var_300_int);
	var_301_string = "";
	func_3453(var_301_string);
	@@var_291_object:SetPhoto(var_301_string);
	var_302_string = "";
	func_3455(var_302_string);
	@@var_291_object:SetPhoto2(var_302_string);
	var_303_int = 0;
	func_4128(var_303_int);
	@@var_291_object:SetPlayerName(var_303_int);
	IsOverrideActive(var_292_bool);
	var_304_bool = var_292_bool;
	if(var_304_bool != 0) {
		var_284_int = -2;
		return 8;
	}
	DoDialog(var_291_object);
	var_305_bool = 0; var_306_object = Obj();
	func_3353(Obj());
	var_307_object = var_306_object;
	func_3162(var_305_bool, var_306_object);
	var_308_object = Obj(); var_309_object = Obj();
	var_285_object = var_308_object;
	var_291_object = var_309_object;
	TaskCall(3);
	func_389(var_310_object, var_311_object, var_312_string, var_313_bool, var_308_object, var_309_object);
	TaskReturn();
	@@var_291_object:IsDialogEnd(var_294_bool);
	
Label_371:
	var_366_bool = var_294_bool == 0; //@nz
	if(var_366_bool != 0) {
		sync();
		@@var_291_object:IsDialogEnd(var_294_bool);
		goto Label_371;
	}
	var_285_object = Obj();
	func_3144();
	StopDialog(var_291_object);
	@@var_291_object:GetReturnValue((int)-1);
	var_293_int = var_284_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3894()
{
	var_69_object = Obj(); var_70_object = Obj();
	CreateDiaryEntry(var_70_object, (int)545, (int)2, (int)530436);
	var_74_bool = 0; var_75_object = Obj(); var_76_int = 0;
	var_70_object = var_75_object;
	func_4050(var_74_bool, var_75_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3385(var_100_bool, var_101_string, var_102_string)
{
	var_103_object = Obj(); var_104_object = Obj();
	FindActor(var_104_object, var_101_string);
	var_105_bool = var_104_object == 0; //@ne
	if(var_105_bool != 0) {
		var_100_bool = 0;
		return 2;
	}
	Trigger(var_104_object, var_102_string);
	var_100_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3907()
{
	var_92_object = Obj(); var_93_object = Obj();
	CreateDiaryEntry(var_93_object, (int)546, (int)2, (int)530437);
	var_97_bool = 0; var_98_object = Obj(); var_99_int = 0;
	var_93_object = var_98_object;
	func_4050(var_97_bool, var_98_object, (int)545);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3652()
{
	SetVariable("b10MatVisit", (int)1);
	return 0;
}


func_3397(var_66_float)
{
	var_67_float = 0; var_68_float = 0;
	GetGameTime(var_68_float);
	var_68_float = var_66_float;
	return 2;
}


func_3144()
{
	var_272_bool = 0; var_273_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_275_bool = 0;
	func_3457(var_275_bool);
	if(var_275_bool != 0) {
	} else {
		HasAnimationTrack(var_273_bool, "head");
		var_277_bool = var_273_bool;
		if(var_277_bool == 0) goto Label_3161;
		UnlookAsync("head");
	}
Label_3161:
	return 2;
	
}


func_3658()
{
	func_3972();
	var_82_bool = 0; var_83_string = ""; var_84_string = "";
	func_3385(var_82_bool, "quest_b8_01", "fail");
	return 0;
}


func_3402(var_181_int)
{
	var_182_float = 0; var_183_float = 0;
	GetGameTime(var_183_float);
	var_185_int = 0;
	var_185_int = var_183_float / (int)24;
	var_181_int = (int)1 + var_185_int;
	return 2;
}


func_1612(var_0_object, var_1_object, var_2_object, var_3_string, var_476_object, var_477_object)
{
	var_0_object = var_477_object;
	var_1_object = var_476_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_483_object = Obj(); var_484_object = Obj();
		var_483_object = var_1_object;
		var_484_object = var_0_object;
		func_3652();
		var_487_string = "";
		func_1783(var_477_object, "Neutral");
		@@@var_0_object:SetMessage((int)521951);
		@@@var_0_object:ClearReplies();
		var_496_bool = 0;
		var_496_bool = 1;
		var_497_bool = 0;
		var_497_bool = 0;
		var_498_bool = 0; var_499_object = Obj();
		var_499_object = var_1_object;
		func_3746(var_499_object);
		if(var_498_bool != 0) {
			var_504_bool = 0; var_505_object = Obj();
			var_505_object = var_1_object;
			func_3770(var_505_object);
			if(var_504_bool != 0) {
				var_497_bool = 1;
			}
		}
		if(var_497_bool != 1) {
			var_510_bool = 0;
			var_510_bool = 0;
			var_511_bool = 0; var_512_object = Obj();
			var_512_object = var_1_object;
			func_3758(var_512_object);
			if(var_511_bool != 0) {
				var_517_bool = 0; var_518_object = Obj();
				var_518_object = var_1_object;
				func_3770(var_518_object);
				if(var_517_bool != 0) {
					var_510_bool = 1;
				}
			}
			if(var_510_bool != 1) {
				var_496_bool = 0;
			}
		}
		if(var_496_bool != 0) {
			@@@var_0_object:AddReply((int)521952, (int)23688, (int)23126);
		}
		var_522_bool = 0;
		var_522_bool = 1;
		var_523_bool = 0;
		var_523_bool = 0;
		var_524_bool = 0;
		var_524_bool = 0;
		var_525_bool = 0; var_526_object = Obj();
		var_526_object = var_1_object;
		func_3782(var_526_object);
		var_531_bool = var_525_bool == 0; //@nz
		if(var_531_bool != 0) {
			var_532_bool = 0; var_533_object = Obj();
			var_533_object = var_1_object;
			func_3794(var_533_object);
			if(var_532_bool != 0) {
				var_524_bool = 1;
			}
		}
		if(var_524_bool != 0) {
			var_538_bool = 0; var_539_object = Obj();
			var_539_object = var_1_object;
			func_3840(var_538_bool, var_539_object);
			if(var_538_bool != 0) {
				var_523_bool = 1;
			}
		}
		if(var_523_bool != 1) {
			var_549_bool = 0;
			var_549_bool = 0;
			var_550_bool = 0;
			var_550_bool = 0;
			var_551_bool = 0; var_552_object = Obj();
			var_552_object = var_1_object;
			func_3782(var_552_object);
			var_553_bool = var_551_bool == 0; //@nz
			if(var_553_bool != 0) {
				var_554_bool = 0; var_555_object = Obj();
				var_555_object = var_1_object;
				func_3794(var_555_object);
				if(var_554_bool != 0) {
					var_550_bool = 1;
				}
			}
			if(var_550_bool != 0) {
				var_556_bool = 0; var_557_object = Obj();
				var_557_object = var_1_object;
				func_3830(var_556_bool, var_557_object);
				if(var_556_bool != 0) {
					var_549_bool = 1;
				}
			}
			if(var_549_bool != 1) {
				var_522_bool = 0;
			}
		}
		if(var_522_bool != 0) {
			@@@var_0_object:AddReply((int)530373, (int)31746, (int)31745);
		}
		var_570_bool = 0;
		var_570_bool = 0;
		var_571_bool = 0; var_572_object = Obj();
		var_572_object = var_1_object;
		func_3782(var_572_object);
		if(var_571_bool != 0) {
			var_573_bool = 0; var_574_object = Obj();
			var_574_object = var_1_object;
			func_3806(var_574_object);
			if(var_573_bool != 0) {
				var_570_bool = 1;
			}
		}
		if(var_570_bool != 0) {
			@@@var_0_object:AddReply((int)530376, (int)31749, (int)31748);
		}
		@@@var_0_object:AddReply((int)521955, (int)-1, (int)23129);
		goto Label_1753;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x650";
	}
Label_1753:
	var_585_bool = 0;
	func_3457(var_585_bool);
	if(var_585_bool != 0) {

	Label_1757:
		lshWaitForAnimEnd();
		var_586_string = var_3_string;
		if(var_586_string != 0) {
		} else {
			var_587_string = "";
			var_587_string = var_2_object;
			func_3300(var_587_string);
			goto Label_1757;
	}
		PlayAnimation("all", "idle");

	Label_1772:
		WaitForAnimEnd();
		var_590_string = var_3_string;
		if(var_590_string != 0) {
			goto Label_1782;
		}
		PlayAnimation("all", "idle");
		goto Label_1772;
	}
	goto Label_1782;
	
Label_1782:
	return 0;
	
}


func_3920()
{
	var_57_object = Obj(); var_58_object = Obj();
	CreateDiaryEntry(var_58_object, (int)256, (int)1, (int)521028);
	var_62_bool = 0; var_63_object = Obj(); var_64_int = 0;
	var_58_object = var_63_object;
	func_4050(var_62_bool, var_63_object, (int)253);
	return 2;
}
EMIT "Stack[-1] = 0";


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_221_object, var_222_object)
{
	var_0_object = var_222_object;
	var_1_object = var_221_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_228_string = "";
		func_139(var_222_object, "Neutral");
		@@@var_0_object:SetMessage((int)518060);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)518061, (int)29781, (int)19194);
		@@@var_0_object:AddReply((int)528400, (int)29777, (int)29776);
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	var_252_bool = 0;
	func_3457(var_252_bool);
	if(var_252_bool != 0) {

	Label_113:
		lshWaitForAnimEnd();
		var_253_string = var_3_string;
		if(var_253_string != 0) {
		} else {
			var_254_string = "";
			var_254_string = var_2_object;
			func_3300(var_254_string);
			goto Label_113;
	}
		PlayAnimation("all", "idle");

	Label_128:
		WaitForAnimEnd();
		var_267_string = var_3_string;
		if(var_267_string != 0) {
			goto Label_138;
		}
		PlayAnimation("all", "idle");
		goto Label_128;
	}
	goto Label_138;
	
Label_138:
	return 0;
	
}


func_3411(var_542_int)
{
	var_543_float = 0; var_544_float = 0;
	GetGameTime(var_544_float);
	var_545_int = 0;
	var_544_float = var_545_int;
	var_542_int = var_545_int % (int)24;
	return 2;
}


func_3668()
{
	SetVariable("oob12Mat1", (int)1);
	return 0;
}


func_3162(var_126_bool, var_127_object)
{
	var_131_int = 0; var_132_int = 0; var_133_int = 0; var_134_int = 0;
	GetVariable("voice_common", var_133_int);
	var_136_int = var_133_int;
	if(var_136_int != 0) {
		var_137_bool = 0; var_138_object = Obj();
		var_127_object = var_138_object;
		func_3220(var_137_bool, var_138_object);
		var_167_bool = var_137_bool == 0; //@nz
		if(var_167_bool != 0) {
			var_168_bool = 0; var_169_object = Obj();
			var_127_object = var_169_object;
			func_3257(var_168_bool, var_169_object);
			var_203_bool = var_168_bool == 0; //@nz
			if(var_203_bool != 0) {
				var_126_bool = 0;
				return 4;
			}
		}
		irand(var_134_int, (int)2);
		var_205_int = var_134_int;
		if(var_205_int != 0) {
			var_208_int = var_133_int + (int)1;
			var_210_int = var_208_int % (int)3;
			SetVariable("voice_common", var_210_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_213_bool = 0; var_214_object = Obj();
		var_127_object = var_214_object;
		func_3257(var_213_bool, var_214_object);
		var_215_bool = var_213_bool == 0; //@nz
		if(var_215_bool != 0) {
			var_216_bool = 0; var_217_object = Obj();
			var_127_object = var_217_object;
			func_3220(var_216_bool, var_217_object);
			var_218_bool = var_216_bool == 0; //@nz
			if(var_218_bool != 0) {
				var_126_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_3218;
	
Label_3218:
	var_126_bool = 1;
	return 4;
	
}


func_3674(var_345_bool)
{
	var_347_int = 0; var_348_string = "";
	func_3369(var_347_int, "b7q02");
	var_350_bool = var_347_int == (int)0;
	if(var_350_bool != 0) {
		var_345_bool = 1;
		return 0;
	}
	var_345_bool = 0;
	return 0;
}


func_3419(var_281_bool, var_282_int)
{
	var_283_int = 0;
	func_3402(var_283_int);
	var_281_bool = var_283_int == var_282_int;
	return 0;
}


func_3933()
{
	var_118_object = Obj(); var_119_object = Obj();
	CreateDiaryEntry(var_119_object, (int)270, (int)2, (int)521214);
	var_123_bool = 0; var_124_object = Obj(); var_125_int = 0;
	var_119_object = var_124_object;
	func_4050(var_123_bool, var_124_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3425(var_55_string, var_56_int)
{
	var_57_string = ""; var_58_string = "";
	var_59_int = var_56_int;
	if(var_59_int != 0) {
		"idle" = "idle" + var_56_int;
	}
	var_58_string = var_55_string;
	return 2;
}


func_3686(var_354_bool)
{
	var_356_int = 0; var_357_string = "";
	func_3369(var_356_int, "b7q02");
	var_359_bool = var_356_int == (int)2;
	if(var_359_bool != 0) {
		var_354_bool = 1;
		return 0;
	}
	var_354_bool = 0;
	return 0;
}


func_3432(var_49_int)
{
	var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_bool = 0;
	var_52_int = 0;
	
Label_3434:
	var_55_string = ""; var_56_int = 0;
	var_52_int = var_56_int;
	func_3425(var_55_string, var_56_int);
	HasAnimation(var_53_bool, "all", var_55_string);
	var_60_bool = var_53_bool == 0; //@nz
	if(var_60_bool != 0) {
	} else {
		var_52_int = var_52_int + (int)1;
		goto Label_3434;
	}
	var_52_int = var_49_int;
	return 4;
	
}


func_2665(var_0_object, var_1_object, var_2_object, var_3_string, var_686_object, var_687_object)
{
	var_0_object = var_687_object;
	var_1_object = var_686_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_693_string = "";
		func_2723(var_687_object, "Neutral");
		@@@var_0_object:SetMessage((int)540551);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540552, (int)-1, (int)42561);
		@@@var_0_object:AddReply((int)540795, (int)-1, (int)42844);
		goto Label_2693;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xa6d";
	}
Label_2693:
	var_708_bool = 0;
	func_3457(var_708_bool);
	if(var_708_bool != 0) {

	Label_2697:
		lshWaitForAnimEnd();
		var_709_string = var_3_string;
		if(var_709_string != 0) {
		} else {
			var_710_string = "";
			var_710_string = var_2_object;
			func_3300(var_710_string);
			goto Label_2697;
	}
		PlayAnimation("all", "idle");

	Label_2712:
		WaitForAnimEnd();
		var_713_string = var_3_string;
		if(var_713_string != 0) {
			goto Label_2722;
		}
		PlayAnimation("all", "idle");
		goto Label_2712;
	}
	goto Label_2722;
	
Label_2722:
	return 0;
	
}


func_2410(var_2_object, var_628_string)
{
	var_629_bool = 0;
	func_3457(var_629_bool);
	var_630_bool = var_629_bool == 0; //@nz
	if(var_630_bool != 0) {
		return 0;
	}
	var_631_bool = var_628_string == var_2_object;
	if(var_631_bool != 0) {
		return 0;
	}
	var_632_string = ""; var_633_bool = 0;
	var_628_string = var_632_string;
	var_635_bool = var_628_string == "";
	if(var_635_bool != 0) {
		var_633_bool = 0;
	} else {
		var_633_bool = 1;
	}
	func_3316(var_632_string, var_633_bool);
	var_2_object = var_628_string;
	return 0;
	
}


func_3946()
{
	var_149_object = Obj(); var_150_object = Obj();
	CreateDiaryEntry(var_150_object, (int)273, (int)2, (int)521227);
	var_154_bool = 0; var_155_object = Obj(); var_156_int = 0;
	var_150_object = var_155_object;
	func_4050(var_154_bool, var_155_object, (int)270);
	return 2;
}
EMIT "Stack[-1] = 0";


func_881(var_0_object, var_1_object, var_2_object, var_3_string, var_394_object, var_395_object)
{
	var_0_object = var_395_object;
	var_1_object = var_394_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_401_string = "";
		func_964(var_395_object, "Neutral");
		@@@var_0_object:SetMessage((int)521382);
		@@@var_0_object:ClearReplies();
		var_410_bool = 0; var_411_object = Obj();
		var_411_object = var_1_object;
		func_3698(var_411_object);
		if(var_410_bool != 0) {
			@@@var_0_object:AddReply((int)521383, (int)25136, (int)22561);
		}
		var_419_bool = 0; var_420_object = Obj();
		var_420_object = var_1_object;
		func_3710(var_420_object);
		if(var_419_bool != 0) {
			@@@var_0_object:AddReply((int)521412, (int)22591, (int)22590);
		}
		var_428_bool = 0; var_429_object = Obj();
		var_429_object = var_1_object;
		func_3734(var_429_object);
		if(var_428_bool != 0) {
			@@@var_0_object:AddReply((int)521519, (int)25119, (int)22680);
		}
		@@@var_0_object:AddReply((int)521384, (int)-1, (int)22562);
		goto Label_934;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x375";
	}
Label_934:
	var_440_bool = 0;
	func_3457(var_440_bool);
	if(var_440_bool != 0) {

	Label_938:
		lshWaitForAnimEnd();
		var_441_string = var_3_string;
		if(var_441_string != 0) {
		} else {
			var_442_string = "";
			var_442_string = var_2_object;
			func_3300(var_442_string);
			goto Label_938;
	}
		PlayAnimation("all", "idle");

	Label_953:
		WaitForAnimEnd();
		var_445_string = var_3_string;
		if(var_445_string != 0) {
			goto Label_963;
		}
		PlayAnimation("all", "idle");
		goto Label_953;
	}
	goto Label_963;
	
Label_963:
	return 0;
	
}


func_3698(var_410_bool)
{
	var_412_int = 0; var_413_string = "";
	func_3369(var_412_int, "b8q01");
	var_415_bool = var_412_int == (int)1;
	if(var_415_bool != 0) {
		var_410_bool = 1;
		return 0;
	}
	var_410_bool = 0;
	return 0;
}


func_3959()
{
	var_126_object = Obj(); var_127_object = Obj();
	CreateDiaryEntry(var_127_object, (int)271, (int)2, (int)521215);
	var_131_bool = 0; var_132_object = Obj(); var_133_int = 0;
	var_127_object = var_132_object;
	func_4050(var_131_bool, var_132_object, (int)270);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3449(var_114_int)
{
	var_114_int = 515545;
	return 0;
}


func_3451(var_113_int)
{
	var_113_int = 502870;
	return 0;
}


func_3453(var_115_string)
{
	var_115_string = "ui/NPC_Mat.png";
	return 0;
}


func_3710(var_419_bool)
{
	var_421_int = 0; var_422_string = "";
	func_3369(var_421_int, "b8q01");
	var_424_bool = var_421_int == (int)3;
	if(var_424_bool != 0) {
		var_419_bool = 1;
		return 0;
	}
	var_419_bool = 0;
	return 0;
}


func_3455(var_116_string)
{
	var_116_string = "ui/NPC_Mat_b.png";
	return 0;
}


func_3457(var_108_bool)
{
	var_108_bool = 1;
	return 0;
}


func_3459()
{
	var_39_object = Obj(); var_40_object = Obj();
	SetVariable("b7q01", (int)3);
	func_4078(Obj());
	var_43_object = var_40_object;
	var_54_float = 0;
	func_3397(var_54_float);
	@@var_40_object:AddMark("b7q01MatGotoPrison", "pt_map_uprava_prison", (int)1, (int)521024, var_54_float);
	func_3920();
	var_80_bool = 0; var_81_string = ""; var_82_string = "";
	func_3385(var_80_bool, "quest_b7_01", "init_prison");
	return 2;
}
EMIT "Stack[-1] = 0";


func_3972()
{
	var_74_object = Obj(); var_75_object = Obj();
	CreateDiaryEntry(var_75_object, (int)606, (int)1, (int)531260);
	var_79_bool = 0; var_80_object = Obj(); var_81_int = 0;
	var_75_object = var_80_object;
	func_4050(var_79_bool, var_80_object, (int)284);
	return 2;
}
EMIT "Stack[-1] = 0";


func_389(var_0_object, var_1_object, var_2_object, var_3_string, var_308_object, var_309_object)
{
	var_0_object = var_309_object;
	var_1_object = var_308_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_315_bool = 0; var_316_object = Obj();
		var_316_object = var_1_object;
		func_3850(var_316_object);
		if(var_315_bool != 0) {
			var_323_string = "";
			func_482(var_309_object, "Rage");
			@@@var_0_object:SetMessage((int)520984);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528518, (int)29911, (int)29910);
		} else {
				var_343_string = "";
				func_482(var_309_object, "Neutral");
				@@@var_0_object:SetMessage((int)520986);
				@@@var_0_object:ClearReplies();
				var_345_bool = 0; var_346_object = Obj();
				var_346_object = var_1_object;
				func_3674(var_346_object);
				if(var_345_bool != 0) {
					@@@var_0_object:AddReply((int)521209, (int)29920, (int)22405);
				}
				var_354_bool = 0; var_355_object = Obj();
				var_355_object = var_1_object;
				func_3686(var_355_object);
				if(var_354_bool != 0) {
					@@@var_0_object:AddReply((int)521216, (int)22411, (int)22410);
				}
				@@@var_0_object:AddReply((int)520987, (int)-1, (int)22200);
				goto Label_452;
		}
	}
Label_452:
	var_335_bool = 0;
	func_3457(var_335_bool);
	if(var_335_bool != 0) {

	Label_456:
		lshWaitForAnimEnd();
		var_336_string = var_3_string;
		if(var_336_string != 0) {
		} else {
			var_337_string = "";
			var_337_string = var_2_object;
			func_3300(var_337_string);
			goto Label_456;
	}
		PlayAnimation("all", "idle");

	Label_471:
		WaitForAnimEnd();
		var_340_string = var_3_string;
		if(var_340_string != 0) {
			goto Label_481;
		}
		PlayAnimation("all", "idle");
		goto Label_471;

	}
	goto Label_481;
	
Label_481:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x189";


func_3722(var_301_bool)
{
	var_303_int = 0; var_304_string = "";
	func_3369(var_303_int, "b8q01");
	var_306_bool = var_303_int == (int)4;
	if(var_306_bool != 0) {
		var_301_bool = 1;
		return 0;
	}
	var_301_bool = 0;
	return 0;
}


func_139(var_2_object, var_228_string)
{
	var_229_bool = 0;
	func_3457(var_229_bool);
	var_230_bool = var_229_bool == 0; //@nz
	if(var_230_bool != 0) {
		return 0;
	}
	var_231_bool = var_228_string == var_2_object;
	if(var_231_bool != 0) {
		return 0;
	}
	var_232_string = ""; var_233_bool = 0;
	var_228_string = var_232_string;
	var_235_bool = var_228_string == "";
	if(var_235_bool != 0) {
		var_233_bool = 0;
	} else {
		var_233_bool = 1;
	}
	func_3316(var_232_string, var_233_bool);
	var_2_object = var_228_string;
	return 0;
	
}


func_3985()
{
	var_41_object = Obj(); var_42_object = Obj();
	CreateDiaryEntry(var_42_object, (int)286, (int)1, (int)521457);
	var_46_bool = 0; var_47_object = Obj(); var_48_int = 0;
	var_42_object = var_47_object;
	func_4050(var_46_bool, var_47_object, (int)284);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3220(var_137_bool, var_138_object)
{
	var_139_string = ""; var_140_int = 0; var_141_bool = 0; var_142_int = 0; var_143_string = ""; var_144_string = ""; var_145_int = 0; var_146_bool = 0; var_147_int = 0; var_148_string = "";
	var_144_string = "c";
	var_145_int = 0;
	
Label_3223:
	if((int)1 != 0) {
		var_151_int = var_145_int + (int)1;
		var_152_int = var_144_string + var_151_int;
		@@var_138_object:HasProperty(var_152_int, var_146_bool);
		var_153_bool = var_146_bool == 0; //@nz
		if(var_153_bool != 0) {
		} else {
			var_145_int = var_145_int + (int)1;
			goto Label_3223;
		}
	}
	var_154_bool = var_145_int == 0; //@nz
	if(var_154_bool != 0) {
		var_137_bool = 0;
		return 10;
	}
	var_147_int = 0;
	var_156_bool = var_145_int > (int)1;
	if(var_156_bool != 0) {
		irand(var_147_int, var_145_int);
	}
	var_158_int = var_147_int + (int)1;
	var_159_int = var_144_string + var_158_int;
	@@var_138_object:GetProperty(var_159_int, var_148_string);
	var_160_bool = 0; var_161_string = "";
	var_148_string = var_161_string;
	func_3331(var_160_bool, var_161_string);
	var_160_bool = var_137_bool;
	return 10;
	
}


func_3734(var_428_bool)
{
	var_430_int = 0; var_431_string = "";
	func_3369(var_430_int, "b8q03");
	var_433_bool = var_430_int == (int)2;
	if(var_433_bool != 0) {
		var_428_bool = 1;
		return 0;
	}
	var_428_bool = 0;
	return 0;
}


func_2967()
{
	var_35_int = 0; var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_int = 0; var_46_bool = 0;
	WaitForAnimEnd();
	var_47_bool = 0;
	func_3070(var_47_bool);
	var_48_bool = var_47_bool == 0; //@nz
	if(var_48_bool != 0) {
		return 12;
	}
	func_3432((int)0);
	var_49_int = var_41_int;
	var_42_int = 0;
	
Label_2981:
	var_62_bool = 0;
	var_62_bool = 0;
	var_64_bool = var_42_int < (int)5;
	if(var_64_bool != 0) {
		var_65_bool = 0;
		func_3070(var_65_bool);
		if(var_65_bool != 0) {
			var_62_bool = 1;
		}
	}
	if(var_62_bool != 0) {
		var_66_bool = var_41_int == 0; //@nz
		if(var_66_bool != 0) {
			Sleep((int)3, var_43_bool);
			var_68_bool = var_43_bool == 0; //@nz
			if(var_68_bool != 0) {
			} else {
		} else {
				irand(var_44_int, var_41_int);
				irand(var_45_int, (int)5);
				var_74_bool = var_45_int != (int)0;
				if(var_74_bool != 0) {
					var_44_int = 0;
				}
				var_76_string = ""; var_77_int = 0;
				var_44_int = var_77_int;
				func_3425(var_76_string, var_77_int);
				PlayAnimation("all", var_76_string);
				WaitForAnimEnd(var_46_bool);
				var_78_bool = var_46_bool == 0; //@nz
				if(var_78_bool == 0) goto Label_3022;
				goto Label_3033;
		}
		Label_3022:
			var_69_bool = 0;
			func_3036(var_69_bool);
			var_70_bool = var_69_bool == 0; //@nz
			if(var_70_bool != 0) {
				goto Label_3033;
			}
			ResetAAS();
			var_42_int = var_42_int + (int)1;
			goto Label_2981;

		}
	}
Label_3033:
	ResetAAS();
	return 12;
	
}


func_3998()
{
	var_91_object = Obj(); var_92_object = Obj();
	CreateDiaryEntry(var_92_object, (int)288, (int)1, (int)521459);
	var_96_bool = 0; var_97_object = Obj(); var_98_int = 0;
	var_92_object = var_97_object;
	func_4050(var_96_bool, var_97_object, (int)284);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3487(var_87_object)
{
	var_88_object = Obj(); var_89_string = ""; var_90_float = 0;
	func_4078(Obj());
	var_91_object = var_88_object;
	func_4095(var_88_object, "pt_map_uprava_prison", (float)2);
	var_111_object = Obj();
	func_4078(var_111_object);
	@@var_87_object:ShowMap(var_111_object);
	return 0;
}


func_3746(var_498_bool)
{
	var_500_int = 0; var_501_string = "";
	func_3369(var_500_int, "b10q01");
	var_503_bool = var_500_int == (int)4;
	if(var_503_bool != 0) {
		var_498_bool = 1;
		return 0;
	}
	var_498_bool = 0;
	return 0;
}


func_2723(var_2_object, var_693_string)
{
	var_694_bool = 0;
	func_3457(var_694_bool);
	var_695_bool = var_694_bool == 0; //@nz
	if(var_695_bool != 0) {
		return 0;
	}
	var_696_bool = var_693_string == var_2_object;
	if(var_696_bool != 0) {
		return 0;
	}
	var_697_string = ""; var_698_bool = 0;
	var_693_string = var_697_string;
	var_700_bool = var_693_string == "";
	if(var_700_bool != 0) {
		var_698_bool = 0;
	} else {
		var_698_bool = 1;
	}
	func_3316(var_697_string, var_698_bool);
	var_2_object = var_693_string;
	return 0;
	
}


func_4011()
{
	var_113_object = Obj(); var_114_object = Obj();
	CreateDiaryEntry(var_114_object, (int)578, (int)2, (int)530658);
	var_118_bool = 0; var_119_object = Obj(); var_120_int = 0;
	var_114_object = var_119_object;
	func_4050(var_118_bool, var_119_object, (int)575);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3758(var_511_bool)
{
	var_513_int = 0; var_514_string = "";
	func_3369(var_513_int, "b10q01");
	var_516_bool = var_513_int == (int)1000;
	if(var_516_bool != 0) {
		var_511_bool = 1;
		return 0;
	}
	var_511_bool = 0;
	return 0;
}


func_3503()
{
	SetVariable("b7q02", (int)1);
	func_3933();
	func_3959();
	var_134_object = Obj(); var_135_string = "";
	func_3374(var_134_object, "quest_b7_02");
	var_142_bool = 0; var_143_string = ""; var_144_string = "";
	func_3385(var_142_bool, "quest_b7_02", "init_termitnik2");
	return 0;
}


func_4024()
{
	var_129_object = Obj(); var_130_object = Obj();
	CreateDiaryEntry(var_130_object, (int)579, (int)2, (int)530659);
	var_134_bool = 0; var_135_object = Obj(); var_136_int = 0;
	var_130_object = var_135_object;
	func_4050(var_134_bool, var_135_object, (int)575);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3257(var_168_bool, var_169_object)
{
	var_170_string = ""; var_171_int = 0; var_172_bool = 0; var_173_int = 0; var_174_string = ""; var_175_string = ""; var_176_int = 0; var_177_bool = 0; var_178_int = 0; var_179_string = "";
	var_181_int = 0;
	func_3402(var_181_int);
	var_187_int = "d" + var_181_int;
	var_175_string = var_187_int + "m";
	var_176_int = 0;
	
Label_3266:
	if((int)1 != 0) {
		var_191_int = var_176_int + (int)1;
		var_192_int = var_175_string + var_191_int;
		@@var_169_object:HasProperty(var_192_int, var_177_bool);
		var_193_bool = var_177_bool == 0; //@nz
		if(var_193_bool != 0) {
		} else {
			var_176_int = var_176_int + (int)1;
			goto Label_3266;
		}
	}
	var_194_bool = var_176_int == 0; //@nz
	if(var_194_bool != 0) {
		var_168_bool = 0;
		return 10;
	}
	var_178_int = 0;
	var_196_bool = var_176_int > (int)1;
	if(var_196_bool != 0) {
		irand(var_178_int, var_176_int);
	}
	var_198_int = var_178_int + (int)1;
	var_199_int = var_175_string + var_198_int;
	@@var_169_object:GetProperty(var_199_int, var_179_string);
	var_200_bool = 0; var_201_string = "";
	var_179_string = var_201_string;
	func_3331(var_200_bool, var_201_string);
	var_200_bool = var_168_bool;
	return 10;
	
}


func_3770(var_504_bool)
{
	var_506_int = 0; var_507_string = "";
	func_3369(var_506_int, "oob10Mat1");
	var_509_bool = var_506_int == (int)0;
	if(var_509_bool != 0) {
		var_504_bool = 1;
		return 0;
	}
	var_504_bool = 0;
	return 0;
}


func_3524()
{
	func_3946();
	var_157_bool = 0; var_158_string = ""; var_159_string = "";
	func_3385(var_157_bool, "quest_b7_02", "completed");
	return 0;
}


func_964(var_2_object, var_401_string)
{
	var_402_bool = 0;
	func_3457(var_402_bool);
	var_403_bool = var_402_bool == 0; //@nz
	if(var_403_bool != 0) {
		return 0;
	}
	var_404_bool = var_401_string == var_2_object;
	if(var_404_bool != 0) {
		return 0;
	}
	var_405_string = ""; var_406_bool = 0;
	var_401_string = var_405_string;
	var_408_bool = var_401_string == "";
	if(var_408_bool != 0) {
		var_406_bool = 0;
	} else {
		var_406_bool = 1;
	}
	func_3316(var_405_string, var_406_bool);
	var_2_object = var_401_string;
	return 0;
	
}


func_3782(var_525_bool)
{
	var_527_int = 0; var_528_string = "";
	func_3369(var_527_int, "b10q04PlennikTalk");
	var_530_bool = var_527_int != (int)0;
	if(var_530_bool != 0) {
		var_525_bool = 1;
		return 0;
	}
	var_525_bool = 0;
	return 0;
}


func_4037(var_83_object)
{
	var_84_object = Obj(); var_85_object = Obj();
	GetDiaryRoot(var_85_object);
	var_86_bool = var_85_object == 0; //@nz
	if(var_86_bool != 0) {
		Trace("Can't retrieve diary root");
		var_83_object = 0;
		return 2;
	}
	var_85_object = var_83_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3534()
{
	SetVariable("b8q01", (int)2);
	func_3985();
	var_64_bool = 0; var_65_string = ""; var_66_string = "";
	func_3385(var_64_bool, "quest_b8_01", "place_klara");
	return 0;
}


func_3794(var_532_bool)
{
	var_534_int = 0; var_535_string = "";
	func_3369(var_534_int, "oob10Mat2");
	var_537_bool = var_534_int == (int)0;
	if(var_537_bool != 0) {
		var_532_bool = 1;
		return 0;
	}
	var_532_bool = 0;
	return 0;
}


func_4050(var_74_bool, var_75_object, var_76_int)
{
	var_77_object = Obj(); var_78_object = Obj(); var_79_int = 0; var_80_object = Obj(); var_81_object = Obj(); var_82_int = 0;
	func_4037(Obj());
	var_83_object = var_80_object;
	@@var_80_object:Find(var_76_int, var_81_object);
	var_88_bool = var_81_object == 0; //@nz
	if(var_88_bool != 0) {
		var_90_int = "Can't find diary parent with id: " + var_76_int;
		Trace(var_90_int);
		var_74_bool = 0;
		return 6;
	}
	@@var_81_object:AddChild(var_75_object);
	SendWorldWndMessage((int)7);
	@@var_75_object:GetCategory(var_82_int);
	SetDiarySection(var_82_int);
	var_74_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_2261(var_0_object, var_597_int, var_598_object)
{
	var_600_object = Obj(); var_601_bool = 0; var_602_int = 0; var_603_bool = 0; var_604_object = Obj(); var_605_bool = 0; var_606_int = 0; var_607_bool = 0;
	var_0_object = var_598_object;
	var_608_bool = 0; var_609_object = Obj(); var_610_float = 0;
	var_598_object = var_609_object;
	func_3075(var_608_bool, var_609_object, (float)70.0);
	var_611_bool = var_608_bool == 0; //@nz
	if(var_611_bool != 0) {
		var_597_int = -2;
		return 8;
	}
	CreateDialog(var_604_object);
	var_612_int = 0;
	func_3451(var_612_int);
	@@var_604_object:SetNPCName(var_612_int);
	var_613_int = 0;
	func_3449(var_613_int);
	@@var_604_object:SetNPCDescription(var_613_int);
	var_614_string = "";
	func_3453(var_614_string);
	@@var_604_object:SetPhoto(var_614_string);
	var_615_string = "";
	func_3455(var_615_string);
	@@var_604_object:SetPhoto2(var_615_string);
	var_616_int = 0;
	func_4128(var_616_int);
	@@var_604_object:SetPlayerName(var_616_int);
	IsOverrideActive(var_605_bool);
	var_617_bool = var_605_bool;
	if(var_617_bool != 0) {
		var_597_int = -2;
		return 8;
	}
	DoDialog(var_604_object);
	var_618_bool = 0; var_619_object = Obj();
	func_3353(Obj());
	var_620_object = var_619_object;
	func_3162(var_618_bool, var_619_object);
	var_621_object = Obj(); var_622_object = Obj();
	var_598_object = var_621_object;
	var_604_object = var_622_object;
	TaskCall(9);
	func_2342(var_623_object, var_624_object, var_625_string, var_626_bool, var_621_object, var_622_object);
	TaskReturn();
	@@var_604_object:IsDialogEnd(var_607_bool);
	
Label_2324:
	var_660_bool = var_607_bool == 0; //@nz
	if(var_660_bool != 0) {
		sync();
		@@var_604_object:IsDialogEnd(var_607_bool);
		goto Label_2324;
	}
	var_598_object = Obj();
	func_3144();
	StopDialog(var_604_object);
	@@var_604_object:GetReturnValue((int)-1);
	var_606_int = var_597_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3548()
{
	SetVariable("b8q01", (int)4);
	func_3998();
	var_99_bool = 0; var_100_string = ""; var_101_string = "";
	func_3385(var_99_bool, "quest_b8_01", "remove_klara");
	var_102_bool = 0; var_103_string = ""; var_104_string = "";
	func_3385(var_102_bool, "quest_b8_01", "unlock_boiny");
	return 0;
}


func_3036(var_69_bool)
{
	var_69_bool = 1;
	return 0;
}


func_3806(var_573_bool)
{
	var_575_int = 0; var_576_string = "";
	func_3369(var_575_int, "b10q04");
	var_578_bool = var_575_int == (int)0;
	if(var_578_bool != 0) {
		var_573_bool = 1;
		return 0;
	}
	var_573_bool = 0;
	return 0;
}


func_3038()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_482(var_2_object, var_323_string)
{
	var_324_bool = 0;
	func_3457(var_324_bool);
	var_325_bool = var_324_bool == 0; //@nz
	if(var_325_bool != 0) {
		return 0;
	}
	var_326_bool = var_323_string == var_2_object;
	if(var_326_bool != 0) {
		return 0;
	}
	var_327_string = ""; var_328_bool = 0;
	var_323_string = var_327_string;
	var_330_bool = var_323_string == "";
	if(var_330_bool != 0) {
		var_328_bool = 0;
	} else {
		var_328_bool = 1;
	}
	func_3316(var_327_string, var_328_bool);
	var_2_object = var_323_string;
	return 0;
	
}


func_3043(var_46_float, var_47_object)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	GetPosition(var_51_cvector);
	@@var_47_object:GetPosition(var_52_cvector);
	var_53_cvector = var_52_cvector - var_51_cvector;
	var_46_float = var_53_cvector | var_53_cvector;
	return 6;
}


func_3300(var_254_string)
{
	var_255_bool = 0; var_256_float = 0; var_257_float = 0; var_258_bool = 0; var_259_float = 0; var_260_float = 0;
	lshHasAnimation(var_258_bool, var_254_string);
	var_261_bool = var_258_bool;
	if(var_261_bool != 0) {
		lshGetAnimTimes(var_254_string, var_259_float, var_260_float);
		lshPlayAnimation(var_259_float, var_260_float, (bool)0);
	} else {
		var_264_int = "Can't find lsh animation : " + var_254_string;
		Trace(var_264_int);
	}
	return 6;
	
}


func_2791(var_0_object)
{
	var_31_bool = 0;
	func_3070(var_31_bool);
	var_34_bool = var_31_bool == 0; //@nz
	if(var_34_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_2800:
	func_2967();
	goto Label_2800;
}
EMIT "Return(); Pop(0)";


func_3818(var_637_bool)
{
	var_639_int = 0; var_640_string = "";
	func_3369(var_639_int, "oob12Mat1");
	var_642_bool = var_639_int == (int)0;
	if(var_642_bool != 0) {
		var_637_bool = 1;
		return 0;
	}
	var_637_bool = 0;
	return 0;
}


func_3051(var_39_bool, var_40_cvector)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0;
	GetPosition(var_44_cvector);
	var_45_cvector = var_40_cvector - var_44_cvector;
	var_47_float = GetByIndex(var_45_cvector, 0);
	var_48_float = GetByIndex(var_45_cvector, 2);
	Rotate(var_47_float, var_48_float, var_46_bool);
	var_46_bool = var_39_bool;
	return 6;
}


func_4078(var_55_object)
{
	var_56_object = Obj(); var_57_object = Obj(); var_58_object = Obj(); var_59_object = Obj();
	GetMainOutdoorScene(var_58_object);
	var_60_bool = var_58_object == 0; //@ne
	if(var_60_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_59_object = 0;
		var_59_object = var_55_object;
		return 4;
	}
	@@var_58_object:GetMap(var_59_object);
	var_59_object = var_55_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_3567()
{
	SetVariable("b8q03", (int)3);
	SetVariable("b8q03MladVladIsVictim", (int)0);
	func_4011();
	return 0;
}


func_3316(var_232_string, var_233_bool)
{
	var_236_bool = 0; var_237_float = 0; var_238_float = 0; var_239_bool = 0; var_240_float = 0; var_241_float = 0;
	lshHasAnimation(var_239_bool, var_232_string);
	var_242_bool = var_239_bool;
	if(var_242_bool != 0) {
		lshGetAnimTimes(var_232_string, var_240_float, var_241_float);
		lshPlayAnimation(var_240_float, var_241_float, var_233_bool);
	} else {
		var_244_int = "Can't find lsh animation : " + var_232_string;
		Trace(var_244_int);
	}
	return 6;
	
}


func_2805(var_56_bool)
{
	var_57_object = Obj(); var_58_object = Obj();
	FindActor(var_58_object, "player");
	var_60_bool = var_58_object == 0; //@nz
	if(var_60_bool != 0) {
		var_56_bool = 0;
		return 2;
	}
	var_61_bool = 0; var_62_object = Obj();
	var_58_object = var_62_object;
	func_3061(var_61_bool, var_62_object);
	var_61_bool = var_56_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3830(var_556_bool, var_557_object)
{
	var_558_bool = 0; var_559_object = Obj();
	var_557_object = var_559_object;
	func_3862(var_559_object);
	if(var_558_bool != 0) {
		var_556_bool = 1;
		return 0;
	}
	var_556_bool = 0;
	return 0;
}


func_1783(var_2_object, var_487_string)
{
	var_488_bool = 0;
	func_3457(var_488_bool);
	var_489_bool = var_488_bool == 0; //@nz
	if(var_489_bool != 0) {
		return 0;
	}
	var_490_bool = var_487_string == var_2_object;
	if(var_490_bool != 0) {
		return 0;
	}
	var_491_string = ""; var_492_bool = 0;
	var_487_string = var_491_string;
	var_494_bool = var_487_string == "";
	if(var_494_bool != 0) {
		var_492_bool = 0;
	} else {
		var_492_bool = 1;
	}
	func_3316(var_491_string, var_492_bool);
	var_2_object = var_487_string;
	return 0;
	
}


func_3061(var_35_bool, var_36_object)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0);
	@@var_36_object:GetPosition(var_38_cvector);
	var_39_bool = 0; var_40_cvector = CVector(0,0,0);
	var_38_cvector = var_40_cvector;
	func_3051(var_39_bool, var_40_cvector);
	var_39_bool = var_35_bool;
	return 2;
}


func_1531(var_0_object, var_452_int, var_453_object)
{
	var_455_object = Obj(); var_456_bool = 0; var_457_int = 0; var_458_bool = 0; var_459_object = Obj(); var_460_bool = 0; var_461_int = 0; var_462_bool = 0;
	var_0_object = var_453_object;
	var_463_bool = 0; var_464_object = Obj(); var_465_float = 0;
	var_453_object = var_464_object;
	func_3075(var_463_bool, var_464_object, (float)70.0);
	var_466_bool = var_463_bool == 0; //@nz
	if(var_466_bool != 0) {
		var_452_int = -2;
		return 8;
	}
	CreateDialog(var_459_object);
	var_467_int = 0;
	func_3451(var_467_int);
	@@var_459_object:SetNPCName(var_467_int);
	var_468_int = 0;
	func_3449(var_468_int);
	@@var_459_object:SetNPCDescription(var_468_int);
	var_469_string = "";
	func_3453(var_469_string);
	@@var_459_object:SetPhoto(var_469_string);
	var_470_string = "";
	func_3455(var_470_string);
	@@var_459_object:SetPhoto2(var_470_string);
	var_471_int = 0;
	func_4128(var_471_int);
	@@var_459_object:SetPlayerName(var_471_int);
	IsOverrideActive(var_460_bool);
	var_472_bool = var_460_bool;
	if(var_472_bool != 0) {
		var_452_int = -2;
		return 8;
	}
	DoDialog(var_459_object);
	var_473_bool = 0; var_474_object = Obj();
	func_3353(Obj());
	var_475_object = var_474_object;
	func_3162(var_473_bool, var_474_object);
	var_476_object = Obj(); var_477_object = Obj();
	var_453_object = var_476_object;
	var_459_object = var_477_object;
	TaskCall(7);
	func_1612(var_478_object, var_479_object, var_480_string, var_481_bool, var_476_object, var_477_object);
	TaskReturn();
	@@var_459_object:IsDialogEnd(var_462_bool);
	
Label_1594:
	var_593_bool = var_462_bool == 0; //@nz
	if(var_593_bool != 0) {
		sync();
		@@var_459_object:IsDialogEnd(var_462_bool);
		goto Label_1594;
	}
	var_453_object = Obj();
	func_3144();
	StopDialog(var_459_object);
	@@var_459_object:GetReturnValue((int)-1);
	var_461_int = var_452_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3580()
{
	SetVariable("b8q03", (int)3);
	SetVariable("b8q03MladVladIsVictim", (int)1);
	func_4024();
	return 0;
}


func_3070(var_31_bool)
{
	var_32_bool = 0; var_33_bool = 0;
	IsLoaded(var_33_bool);
	var_33_bool = var_31_bool;
	return 2;
}


func_4095(var_108_object, var_109_string, var_110_float)
{
	var_112_cvector = CVector(0,0,0); var_113_cvector = CVector(0,0,0); var_114_object = Obj(); var_115_bool = 0; var_116_cvector = CVector(0,0,0); var_117_cvector = CVector(0,0,0); var_118_object = Obj(); var_119_bool = 0;
	GetMainOutdoorScene(var_118_object);
	var_120_bool = var_118_object == 0; //@ne
	if(var_120_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_118_object:GetLocator(var_109_string, var_119_bool, var_116_cvector, var_117_cvector);
	var_122_bool = var_119_bool == 0; //@nz
	if(var_122_bool != 0) {
		var_124_int = "Warning: outdoor scene locator " + var_109_string;
		var_126_int = var_124_int + " doesnt exist";
		Trace(var_126_int);
	}
	@@var_118_object:GetMap(var_108_object);
	var_127_bool = var_108_object == 0; //@ne
	if(var_127_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_129_float = GetByIndex(var_116_cvector, 0);
	var_130_float = GetByIndex(var_116_cvector, 2);
	@@var_108_object:SetMapParams(var_129_float, var_130_float, var_110_float);
	return 8;
}
EMIT "Stack[-2] = 0";


