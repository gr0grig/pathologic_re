// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetMainOutdoorScene/1,AddBlankActor/4,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,SendWorldWndMessage/1,CreateFloatVector/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Sympathy|W:Impatience|W:Fear|W:Strength|W:player|A:GetPosition|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|W:m|W:Can't find lsh animation : |W:.bin|A:add|W:money|W:Money|W:reputation|W:ui/NPC_Kapella.png|W:ui/NPC_Kapella_b.png|W:money 4000 is given|W:k3q01KapellaAboutHan|W:k3q01KapellaGotoAnna|W:pt_map_anna|A:AddMark|W:k3q04KapellaGotoDanko|W:pt_gmap_dt_house2_08|W:quest_k3_04|W:place_burah_lopuh|W:k7q01|W:k6q02|W:ook3Kapella1|W:playsound|W:givemoney|W:ook5Kapella1|W:k5q04|W:k5q04KapellaGotoMaria|W:pt_map_maria|W:quest_k5_04|W:completed|W:k5Kapellavisit|W:ook3Kapella2|W:money 5000 is given|W:mapmark|A:ShowMap|W:k3q01|W:k3q04|W:k5q04SoborVisit|W:k3q04SawDanko|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0xb3f
// @RUN_TASK: 14
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xd1 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x396 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x4bd vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x5e9 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x7a5 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x8da vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb15 vars=int,int
// @TASK_14: vars=cvector params=0
// @EVENT_7: op=0xb8b vars=int
// @EVENT_6: op=0xbb1 vars=
// @EVENT_5: op=0xbc0 vars=
// @EVENT_45: op=0xbcd vars=bool
// @EVENT_0: op=0xbd9 vars=object
// @PE: 0x51,0xbb,0xd1,0x346,0x380,0x396,0x468,0x4a7,0x4bd,0x580,0x5d3,0x5e9,0x750,0x78f,0x7a5,0x853,0x8c4,0x8da,0xac5,0xaff,0xb15,0xb8b,0xbb1,0xbcd,0xdb1,0xdeb,0xe32,0xe5a,0xe64,0xea1,0xeaa,0xeb3,0xeb9,0xebf,0xedf,0xee9,0xeef,0xef6,0xefc,0xf06,0xf0c,0xf13,0xf23,0xf2f,0xf3b,0xf47,0xf53,0xf5f,0xf6b,0xf77,0xf83,0xf8f,0x106f

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3482();
		var_41_bool = var_37_cvector == (int)26964;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_3714();
		}
		var_106_bool = var_37_cvector == (int)26789;
		if(var_106_bool != 0) {
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_3763();
		}
		var_112_bool = var_37_cvector == (int)26791;
		if(var_112_bool != 0) {
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_3691();
			var_133_object = Obj(); var_134_object = Obj();
			var_133_object = var_1_object;
			var_134_object = var_0_object;
			func_3846();
		}
		var_138_bool = var_37_cvector == (int)42604;
		if(var_138_bool != 0) {
			var_139_object = Obj(); var_140_object = Obj();
			var_139_object = var_1_object;
			var_140_object = var_0_object;
			func_3691();
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_object;
			func_3846();
		}
		var_144_bool = var_37_cvector == (int)43745;
		if(var_144_bool != 0) {
			var_145_object = Obj(); var_146_object = Obj();
			var_145_object = var_1_object;
			var_146_object = var_0_object;
			func_3830();
		}
		var_150_bool = var_37_cvector == (int)43750;
		if(var_150_bool != 0) {
			var_151_object = Obj(); var_152_object = Obj();
			var_151_object = var_1_object;
			var_152_object = var_0_object;
			func_3684(var_152_object);
		}
		var_192_bool = var_37_cvector == (int)43751;
		if(var_192_bool != 0) {
			var_193_object = Obj(); var_194_object = Obj();
			var_193_object = var_1_object;
			var_194_object = var_0_object;
			func_3823(var_194_object);
		}
		var_199_bool = var_36_bool == (int)26788;
		if(var_199_bool != 0) {
			var_200_string = "";
			func_187(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525420);
			@@@var_0_object:ClearReplies();
			var_218_bool = 0; var_219_object = Obj();
			var_219_object = var_1_object;
			func_3923(var_219_object);
			if(var_218_bool != 0) {
				@@@var_0_object:AddReply((int)525620, (int)41124, (int)26962);
			}
			var_229_bool = 0;
			var_229_bool = 0;
			var_230_bool = 0; var_231_object = Obj();
			var_231_object = var_1_object;
			func_3875(var_231_object);
			if(var_230_bool != 0) {
				var_236_bool = 0; var_237_object = Obj();
				var_237_object = var_1_object;
				func_3911(var_237_object);
				if(var_236_bool != 0) {
					var_229_bool = 1;
				}
			}
			if(var_229_bool != 0) {
				@@@var_0_object:AddReply((int)525421, (int)42590, (int)26789);
			}
			var_245_bool = 0;
			var_245_bool = 0;
			var_246_bool = 0; var_247_object = Obj();
			var_247_object = var_1_object;
			func_3971(var_247_object);
			if(var_246_bool != 0) {
				var_252_bool = 0; var_253_object = Obj();
				var_253_object = var_1_object;
				func_3983(var_253_object);
				if(var_252_bool != 0) {
					var_245_bool = 1;
				}
			}
			if(var_245_bool != 0) {
				@@@var_0_object:AddReply((int)541574, (int)43746, (int)43745);
			}
			@@@var_0_object:AddReply((int)525424, (int)-1, (int)26792);
			@@@var_0_object:AddReply((int)539182, (int)-1, (int)41123);
			return 0;
		}
		var_268_bool = var_36_bool == (int)43746;
		if(var_268_bool != 0) {
			var_269_string = "";
			func_187(var_37_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)541575);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541576, (int)43749, (int)43747);
			@@@var_0_object:AddReply((int)541577, (int)-1, (int)43748);
			return 0;
		}
		var_278_bool = var_36_bool == (int)43749;
		if(var_278_bool != 0) {
			var_279_string = "";
			func_187(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541578);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541579, (int)-1, (int)43750);
			@@@var_0_object:AddReply((int)541580, (int)-1, (int)43751);
			return 0;
		}
		var_288_bool = var_36_bool == (int)42590;
		if(var_288_bool != 0) {
			var_289_string = "";
			func_187(var_37_cvector, "Impatience");
			@@@var_0_object:SetMessage((int)540576);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540577, (int)42592, (int)42591);
			return 0;
		}
		var_295_bool = var_36_bool == (int)42592;
		if(var_295_bool != 0) {
			var_296_string = "";
			func_187(var_37_cvector, "Fear");
			@@@var_0_object:SetMessage((int)540578);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540579, (int)42594, (int)42593);
			return 0;
		}
		var_302_bool = var_36_bool == (int)42594;
		if(var_302_bool != 0) {
			var_303_string = "";
			func_187(var_37_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)540580);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540581, (int)26790, (int)42595);
			@@@var_0_object:AddReply((int)540613, (int)42634, (int)42633);
			return 0;
		}
		var_312_bool = var_36_bool == (int)42634;
		if(var_312_bool != 0) {
			var_313_string = "";
			func_187(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540614);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540615, (int)42637, (int)42635);
			return 0;
		}
		var_319_bool = var_36_bool == (int)26790;
		if(var_319_bool != 0) {
			var_320_string = "";
			func_187(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525422);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529338, (int)30794, (int)30793);
			return 0;
		}
		var_326_bool = var_36_bool == (int)30794;
		if(var_326_bool != 0) {
			var_327_string = "";
			func_187(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529339);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540612, (int)42637, (int)42632);
			return 0;
		}
		var_333_bool = var_36_bool == (int)42637;
		if(var_333_bool != 0) {
			var_334_string = "";
			func_187(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540617);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540618, (int)42640, (int)42639);
			@@@var_0_object:AddReply((int)540620, (int)42640, (int)42641);
			return 0;
		}
		var_343_bool = var_36_bool == (int)42640;
		if(var_343_bool != 0) {
			var_344_string = "";
			func_187(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540619);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540582, (int)42597, (int)42596);
			return 0;
		}
		var_350_bool = var_36_bool == (int)42597;
		if(var_350_bool != 0) {
			var_351_string = "";
			func_187(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540583);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540584, (int)42599, (int)42598);
			@@@var_0_object:AddReply((int)540588, (int)42603, (int)42602);
			return 0;
		}
		var_360_bool = var_36_bool == (int)42603;
		if(var_360_bool != 0) {
			var_361_string = "";
			func_187(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540589);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540590, (int)-1, (int)42604);
			@@@var_0_object:AddReply((int)540591, (int)42616, (int)42605);
			return 0;
		}
		var_370_bool = var_36_bool == (int)42599;
		if(var_370_bool != 0) {
			var_371_string = "";
			func_187(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540585);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540586, (int)42616, (int)42600);
			@@@var_0_object:AddReply((int)540587, (int)42616, (int)42601);
			return 0;
		}
		var_380_bool = var_36_bool == (int)42616;
		if(var_380_bool != 0) {
			var_381_string = "";
			func_187(var_37_cvector, "Impatience");
			@@@var_0_object:SetMessage((int)540602);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525423, (int)-1, (int)26791);
			return 0;
		}
		var_387_bool = var_36_bool == (int)41124;
		if(var_387_bool != 0) {
			var_388_string = "";
			func_187(var_37_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)539183);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539184, (int)41126, (int)41125);
			@@@var_0_object:AddReply((int)539188, (int)41130, (int)41129);
			return 0;
		}
		var_397_bool = var_36_bool == (int)41126;
		if(var_397_bool != 0) {
			var_398_string = "";
			func_187(var_37_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)539185);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539187, (int)41130, (int)41128);
			@@@var_0_object:AddReply((int)539186, (int)41130, (int)41127);
			return 0;
		}
		var_407_bool = var_36_bool == (int)41130;
		if(var_407_bool != 0) {
			var_408_string = "";
			func_187(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539189);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539190, (int)26963, (int)41132);
			@@@var_0_object:AddReply((int)539191, (int)41134, (int)41133);
			return 0;
		}
		var_417_bool = var_36_bool == (int)41134;
		if(var_417_bool != 0) {
			var_418_string = "";
			func_187(var_37_cvector, "Fear");
			@@@var_0_object:SetMessage((int)539192);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539193, (int)26963, (int)41135);
			return 0;
		}
		var_424_bool = var_36_bool == (int)26963;
		if(var_424_bool != 0) {
			var_425_string = "";
			func_187(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525621);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525622, (int)-1, (int)26964);
			return 0;
		}
		var_3_string = true;
		var_430_bool = 0;
		func_3672(var_430_bool);
		if(var_430_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xd2";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3482();
		var_41_bool = var_36_bool == (int)26845;
		if(var_41_bool != 0) {
			var_42_string = "";
			func_896(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525489);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525490, (int)42621, (int)26846);
			@@@var_0_object:AddReply((int)529311, (int)30766, (int)30765);
			return 0;
		}
		var_67_bool = var_36_bool == (int)30766;
		if(var_67_bool != 0) {
			var_68_string = "";
			func_896(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529312);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529313, (int)42621, (int)30767);
			@@@var_0_object:AddReply((int)540603, (int)42621, (int)42620);
			return 0;
		}
		var_77_bool = var_36_bool == (int)42621;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_896(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540604);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540605, (int)42626, (int)42624);
			@@@var_0_object:AddReply((int)540606, (int)-1, (int)42625);
			return 0;
		}
		var_87_bool = var_36_bool == (int)42626;
		if(var_87_bool != 0) {
			var_88_string = "";
			func_896(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540607);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540608, (int)42628, (int)42627);
			return 0;
		}
		var_94_bool = var_36_bool == (int)42628;
		if(var_94_bool != 0) {
			var_95_string = "";
			func_896(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540609);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540610, (int)-1, (int)42629);
			@@@var_0_object:AddReply((int)540611, (int)-1, (int)42630);
			return 0;
		}
		var_3_string = true;
		var_103_bool = 0;
		func_3672(var_103_bool);
		if(var_103_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x397";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3482();
		var_41_bool = var_37_cvector == (int)27482;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_3745();
		}
		var_70_bool = var_36_bool == (int)27479;
		if(var_70_bool != 0) {
			var_71_string = "";
			func_1191(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526198);
			@@@var_0_object:ClearReplies();
			var_89_bool = 0; var_90_object = Obj();
			var_90_object = var_1_object;
			func_3887(var_90_object);
			if(var_89_bool != 0) {
				@@@var_0_object:AddReply((int)526199, (int)30173, (int)27480);
			}
			@@@var_0_object:AddReply((int)526202, (int)-1, (int)27483);
			return 0;
		}
		var_104_bool = var_36_bool == (int)30173;
		if(var_104_bool != 0) {
			var_105_string = "";
			func_1191(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528747);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528748, (int)27481, (int)30174);
			return 0;
		}
		var_111_bool = var_36_bool == (int)27481;
		if(var_111_bool != 0) {
			var_112_string = "";
			func_1191(var_37_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)526200);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528750, (int)30177, (int)30176);
			@@@var_0_object:AddReply((int)541056, (int)30177, (int)43159);
			return 0;
		}
		var_121_bool = var_36_bool == (int)30177;
		if(var_121_bool != 0) {
			var_122_string = "";
			func_1191(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528751);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526201, (int)-1, (int)27482);
			return 0;
		}
		var_3_string = true;
		var_127_bool = 0;
		func_3672(var_127_bool);
		if(var_127_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x4be";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3482();
		var_41_bool = var_37_cvector == (int)28011;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_3754();
		}
		var_70_bool = var_37_cvector == (int)43707;
		if(var_70_bool != 0) {
			var_71_object = Obj(); var_72_object = Obj();
			var_71_object = var_1_object;
			var_72_object = var_0_object;
			func_3754();
		}
		var_74_bool = var_36_bool == (int)28004;
		if(var_74_bool != 0) {
			var_75_bool = 0; var_76_object = Obj();
			var_76_object = var_1_object;
			func_3899(var_76_object);
			if(var_75_bool != 0) {
				var_83_string = "";
				func_1491(var_37_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)526727);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)526728, (int)30294, (int)28005);
				@@@var_0_object:AddReply((int)541532, (int)43694, (int)43693);
				return 0;
			}
			var_107_string = "";
			func_1491(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526735);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526736, (int)-1, (int)28013);
			@@@var_0_object:AddReply((int)528870, (int)-1, (int)30293);
			return 0;
		}
		var_116_bool = var_36_bool == (int)43694;
		if(var_116_bool != 0) {
			var_117_string = "";
			func_1491(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541533);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541534, (int)43702, (int)43695);
			return 0;
		}
		var_123_bool = var_36_bool == (int)30294;
		if(var_123_bool != 0) {
			var_124_string = "";
			func_1491(var_37_cvector, "Strength");
			@@@var_0_object:SetMessage((int)528871);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528872, (int)28006, (int)30295);
			@@@var_0_object:AddReply((int)541535, (int)43697, (int)43696);
			return 0;
		}
		var_133_bool = var_36_bool == (int)43697;
		if(var_133_bool != 0) {
			var_134_string = "";
			func_1491(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541536);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541537, (int)43699, (int)43698);
			return 0;
		}
		var_140_bool = var_36_bool == (int)43699;
		if(var_140_bool != 0) {
			var_141_string = "";
			func_1491(var_37_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)541538);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541539, (int)43694, (int)43700);
			@@@var_0_object:AddReply((int)541540, (int)43702, (int)43701);
			return 0;
		}
		var_150_bool = var_36_bool == (int)43702;
		if(var_150_bool != 0) {
			var_151_string = "";
			func_1491(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541541);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541543, (int)30297, (int)43705);
			return 0;
		}
		var_157_bool = var_36_bool == (int)28006;
		if(var_157_bool != 0) {
			var_158_string = "";
			func_1491(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526729);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528873, (int)30297, (int)30296);
			return 0;
		}
		var_164_bool = var_36_bool == (int)30297;
		if(var_164_bool != 0) {
			var_165_string = "";
			func_1491(var_37_cvector, "Impatience");
			@@@var_0_object:SetMessage((int)528874);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528875, (int)30299, (int)30298);
			return 0;
		}
		var_171_bool = var_36_bool == (int)30299;
		if(var_171_bool != 0) {
			var_172_string = "";
			func_1491(var_37_cvector, "Impatience");
			@@@var_0_object:SetMessage((int)528876);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526730, (int)28008, (int)28007);
			@@@var_0_object:AddReply((int)541544, (int)-1, (int)43707);
			return 0;
		}
		var_181_bool = var_36_bool == (int)28008;
		if(var_181_bool != 0) {
			var_182_string = "";
			func_1491(var_37_cvector, "Impatience");
			@@@var_0_object:SetMessage((int)526731);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526732, (int)28010, (int)28009);
			return 0;
		}
		var_188_bool = var_36_bool == (int)28010;
		if(var_188_bool != 0) {
			var_189_string = "";
			func_1491(var_37_cvector, "Strength");
			@@@var_0_object:SetMessage((int)526733);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526734, (int)-1, (int)28011);
			return 0;
		}
		var_3_string = true;
		var_194_bool = 0;
		func_3672(var_194_bool);
		if(var_194_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x5ea";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3482();
		var_41_bool = var_36_bool == (int)36960;
		if(var_41_bool != 0) {
			var_42_string = "";
			func_1935(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535284);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535285, (int)36962, (int)36961);
			@@@var_0_object:AddReply((int)535292, (int)-1, (int)36968);
			@@@var_0_object:AddReply((int)535293, (int)-1, (int)36969);
			return 0;
		}
		var_70_bool = var_36_bool == (int)36962;
		if(var_70_bool != 0) {
			var_71_string = "";
			func_1935(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535286);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535287, (int)36964, (int)36963);
			@@@var_0_object:AddReply((int)535291, (int)-1, (int)36967);
			return 0;
		}
		var_80_bool = var_36_bool == (int)36964;
		if(var_80_bool != 0) {
			var_81_string = "";
			func_1935(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535288);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535289, (int)-1, (int)36965);
			@@@var_0_object:AddReply((int)535290, (int)-1, (int)36966);
			return 0;
		}
		var_3_string = true;
		var_89_bool = 0;
		func_3672(var_89_bool);
		if(var_89_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x7a6";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3482();
		var_41_bool = var_37_cvector == (int)41351;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_3781();
			var_93_object = Obj(); var_94_object = Obj();
			var_93_object = var_1_object;
			var_94_object = var_0_object;
			func_3859(var_94_object);
		}
		var_120_bool = var_37_cvector == (int)41387;
		if(var_120_bool != 0) {
			var_121_object = Obj(); var_122_object = Obj();
			var_121_object = var_1_object;
			var_122_object = var_0_object;
			func_3807();
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_object;
			func_3769();
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_object;
			func_3674(var_142_object);
		}
		var_163_bool = var_37_cvector == (int)42788;
		if(var_163_bool != 0) {
			var_164_object = Obj(); var_165_object = Obj();
			var_164_object = var_1_object;
			var_165_object = var_0_object;
			func_3852(var_165_object);
			var_204_object = Obj(); var_205_object = Obj();
			var_204_object = var_1_object;
			var_205_object = var_0_object;
			func_3807();
		}
		var_207_bool = var_37_cvector == (int)42787;
		if(var_207_bool != 0) {
			var_208_object = Obj(); var_209_object = Obj();
			var_208_object = var_1_object;
			var_209_object = var_0_object;
			func_3807();
			var_210_object = Obj(); var_211_object = Obj();
			var_210_object = var_1_object;
			var_211_object = var_0_object;
			func_3836(var_211_object);
			var_215_object = Obj(); var_216_object = Obj();
			var_215_object = var_1_object;
			var_216_object = var_0_object;
			func_3823(var_216_object);
		}
		var_221_bool = var_36_bool == (int)41346;
		if(var_221_bool != 0) {
			var_222_bool = 0; var_223_object = Obj();
			var_223_object = var_1_object;
			func_3935(var_223_object);
			if(var_222_bool != 0) {
				var_230_object = Obj(); var_231_object = Obj();
				var_230_object = var_1_object;
				var_231_object = var_0_object;
				func_3775();
				var_234_object = Obj(); var_235_object = Obj();
				var_234_object = var_1_object;
				var_235_object = var_0_object;
				func_3817();
				var_238_string = "";
				func_2244(var_37_cvector, "Strength");
				@@@var_0_object:SetMessage((int)539415);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)540750, (int)42790, (int)42789);
				@@@var_0_object:AddReply((int)540754, (int)42790, (int)42793);
				return 0;
			}
			var_262_string = "";
			func_2244(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539421);
			@@@var_0_object:ClearReplies();
			var_264_bool = 0;
			var_264_bool = 0;
			var_265_bool = 0; var_266_object = Obj();
			var_266_object = var_1_object;
			func_3947(var_266_object);
			if(var_265_bool != 0) {
				var_271_bool = 0; var_272_object = Obj();
				var_272_object = var_1_object;
				func_3959(var_272_object);
				var_277_bool = var_271_bool == 0; //@nz
				if(var_277_bool != 0) {
					var_264_bool = 1;
				}
			}
			if(var_264_bool != 0) {
				@@@var_0_object:AddReply((int)539454, (int)42779, (int)41385);
			}
			@@@var_0_object:AddReply((int)539422, (int)-1, (int)41353);
			@@@var_0_object:AddReply((int)540740, (int)-1, (int)42778);
			return 0;
		}
		var_288_bool = var_36_bool == (int)42779;
		if(var_288_bool != 0) {
			var_289_string = "";
			func_2244(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540741);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540742, (int)41386, (int)42780);
			return 0;
		}
		var_295_bool = var_36_bool == (int)41386;
		if(var_295_bool != 0) {
			var_296_string = "";
			func_2244(var_37_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)539455);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540743, (int)42782, (int)42781);
			@@@var_0_object:AddReply((int)540747, (int)42782, (int)42785);
			return 0;
		}
		var_305_bool = var_36_bool == (int)42782;
		if(var_305_bool != 0) {
			var_306_string = "";
			func_2244(var_37_cvector, "Strength");
			@@@var_0_object:SetMessage((int)540744);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540745, (int)42784, (int)42783);
			@@@var_0_object:AddReply((int)540748, (int)-1, (int)42787);
			return 0;
		}
		var_315_bool = var_36_bool == (int)42784;
		if(var_315_bool != 0) {
			var_316_string = "";
			func_2244(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540746);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539456, (int)-1, (int)41387);
			@@@var_0_object:AddReply((int)540749, (int)-1, (int)42788);
			return 0;
		}
		var_325_bool = var_36_bool == (int)42790;
		if(var_325_bool != 0) {
			var_326_string = "";
			func_2244(var_37_cvector, "Strength");
			@@@var_0_object:SetMessage((int)540751);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540752, (int)42792, (int)42791);
			@@@var_0_object:AddReply((int)540755, (int)42796, (int)42795);
			return 0;
		}
		var_335_bool = var_36_bool == (int)42796;
		if(var_335_bool != 0) {
			var_336_string = "";
			func_2244(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540756);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540757, (int)42792, (int)42797);
			return 0;
		}
		var_342_bool = var_36_bool == (int)42792;
		if(var_342_bool != 0) {
			var_343_string = "";
			func_2244(var_37_cvector, "Fear");
			@@@var_0_object:SetMessage((int)540753);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539416, (int)41348, (int)41347);
			return 0;
		}
		var_349_bool = var_36_bool == (int)41348;
		if(var_349_bool != 0) {
			var_350_string = "";
			func_2244(var_37_cvector, "Fear");
			@@@var_0_object:SetMessage((int)539417);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539418, (int)42802, (int)41349);
			@@@var_0_object:AddReply((int)540758, (int)42800, (int)42799);
			return 0;
		}
		var_359_bool = var_36_bool == (int)42800;
		if(var_359_bool != 0) {
			var_360_string = "";
			func_2244(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540759);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540760, (int)42802, (int)42801);
			return 0;
		}
		var_366_bool = var_36_bool == (int)42802;
		if(var_366_bool != 0) {
			var_367_string = "";
			func_2244(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540761);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540762, (int)41350, (int)42803);
			return 0;
		}
		var_373_bool = var_36_bool == (int)41350;
		if(var_373_bool != 0) {
			var_374_string = "";
			func_2244(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539419);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540763, (int)42806, (int)42805);
			@@@var_0_object:AddReply((int)540765, (int)42806, (int)42807);
			return 0;
		}
		var_383_bool = var_36_bool == (int)42806;
		if(var_383_bool != 0) {
			var_384_string = "";
			func_2244(var_37_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)540764);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539420, (int)-1, (int)41351);
			@@@var_0_object:AddReply((int)539423, (int)-1, (int)41354);
			return 0;
		}
		var_3_string = true;
		var_392_bool = 0;
		func_3672(var_392_bool);
		if(var_392_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x8db";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_cvector)
{
	if((int)1 != 0) {
		func_3482();
		var_41_bool = var_36_int == (int)42548;
		if(var_41_bool != 0) {
			var_42_string = "";
			func_2815(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540539);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540540, (int)-1, (int)42549);
			@@@var_0_object:AddReply((int)540799, (int)-1, (int)42848);
			return 0;
		}
		var_3_string = true;
		var_66_bool = 0;
		func_3672(var_66_bool);
		if(var_66_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb16";
	
}


task_14_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_int)
{
	var_38_bool = var_36_int == (int)10;
	if(var_38_bool != 0) {
		func_2951();
		var_40_bool = 0;
		var_40_bool = 0;
		var_41_bool = 0;
		func_3206(var_41_bool);
		if(var_41_bool != 0) {
			var_44_bool = 0;
			func_2920(var_44_bool);
			if(var_44_bool != 0) {
				var_40_bool = 1;
			}
		}
		if(var_40_bool != 0) {
			var_61_bool = 0;
			func_2900(var_61_bool);
			if(var_61_bool != 0) {
				var_80_bool = 0; var_81_object = Obj();
				func_3489(Obj());
				var_82_object = var_81_object;
				func_3356(var_80_bool, var_81_object);
			}
		} else {
			func_2915(var_36_int);
			func_2942();
		}
	}
	return 0;
	
}


task_14_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_3133();
	func_2951();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_14_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	StopGroup0();
	func_2951();
	var_37_string = "";
	func_3436("Neutral");
	func_2942();
	return 0;
}


task_14_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_bool)
{
	var_37_bool = var_36_bool;
	if(var_37_bool != 0) {
		func_2942();
	} else {
		var_43_string = "";
		func_3436("Neutral");
	}
	return 0;
	
}


task_14_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_object)
{
	var_37_bool = 0; var_38_bool = 0;
	IsOverrideActive(var_38_bool);
	var_39_bool = var_38_bool == 0; //@nz
	if(var_39_bool != 0) {
		EventDisable(0);
		func_3133();
		var_40_bool = 0; var_41_object = Obj();
		var_36_object = var_41_object;
		func_3197(var_40_bool, var_41_object);
		EventEnable(0);
		var_54_object = Obj();
		var_36_object = var_54_object;
		func_4207(var_54_object);
		var_735_string = "";
		func_3436("Neutral");
		func_2951();
		func_2942();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	var_36_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_2886(var_35_cvector);
	return 0;
}


func_0(var_0_object, var_286_int, var_287_object)
{
	var_289_object = Obj(); var_290_bool = 0; var_291_int = 0; var_292_bool = 0; var_293_object = Obj(); var_294_bool = 0; var_295_int = 0; var_296_bool = 0;
	var_0_object = var_287_object;
	var_297_bool = 0; var_298_object = Obj(); var_299_float = 0;
	var_287_object = var_298_object;
	func_3211(var_297_bool, var_298_object, (float)70.0);
	var_300_bool = var_297_bool == 0; //@nz
	if(var_300_bool != 0) {
		var_286_int = -2;
		return 8;
	}
	CreateDialog(var_293_object);
	var_301_int = 0;
	func_3666(var_301_int);
	@@var_293_object:SetNPCName(var_301_int);
	var_302_int = 0;
	func_3664(var_302_int);
	@@var_293_object:SetNPCDescription(var_302_int);
	var_303_string = "";
	func_3668(var_303_string);
	@@var_293_object:SetPhoto(var_303_string);
	var_304_string = "";
	func_3670(var_304_string);
	@@var_293_object:SetPhoto2(var_304_string);
	var_305_int = 0;
	func_4190(var_305_int);
	@@var_293_object:SetPlayerName(var_305_int);
	IsOverrideActive(var_294_bool);
	var_306_bool = var_294_bool;
	if(var_306_bool != 0) {
		var_286_int = -2;
		return 8;
	}
	DoDialog(var_293_object);
	var_307_bool = 0; var_308_object = Obj();
	func_3489(Obj());
	var_309_object = var_308_object;
	func_3298(var_307_bool, var_308_object);
	var_310_object = Obj(); var_311_object = Obj();
	var_287_object = var_310_object;
	var_293_object = var_311_object;
	TaskCall(1);
	func_81(var_312_object, var_313_object, var_314_string, var_315_bool, var_310_object, var_311_object);
	TaskReturn();
	@@var_293_object:IsDialogEnd(var_296_bool);
	
Label_63:
	var_383_bool = var_296_bool == 0; //@nz
	if(var_383_bool != 0) {
		sync();
		@@var_293_object:IsDialogEnd(var_296_bool);
		goto Label_63;
	}
	var_287_object = Obj();
	func_3280();
	StopDialog(var_293_object);
	@@var_293_object:GetReturnValue((int)-1);
	var_295_int = var_286_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2050(var_0_object, var_387_int, var_388_object)
{
	var_390_object = Obj(); var_391_bool = 0; var_392_int = 0; var_393_bool = 0; var_394_object = Obj(); var_395_bool = 0; var_396_int = 0; var_397_bool = 0;
	var_0_object = var_388_object;
	var_398_bool = 0; var_399_object = Obj(); var_400_float = 0;
	var_388_object = var_399_object;
	func_3211(var_398_bool, var_399_object, (float)70.0);
	var_401_bool = var_398_bool == 0; //@nz
	if(var_401_bool != 0) {
		var_387_int = -2;
		return 8;
	}
	CreateDialog(var_394_object);
	var_402_int = 0;
	func_3666(var_402_int);
	@@var_394_object:SetNPCName(var_402_int);
	var_403_int = 0;
	func_3664(var_403_int);
	@@var_394_object:SetNPCDescription(var_403_int);
	var_404_string = "";
	func_3668(var_404_string);
	@@var_394_object:SetPhoto(var_404_string);
	var_405_string = "";
	func_3670(var_405_string);
	@@var_394_object:SetPhoto2(var_405_string);
	var_406_int = 0;
	func_4190(var_406_int);
	@@var_394_object:SetPlayerName(var_406_int);
	IsOverrideActive(var_395_bool);
	var_407_bool = var_395_bool;
	if(var_407_bool != 0) {
		var_387_int = -2;
		return 8;
	}
	DoDialog(var_394_object);
	var_408_bool = 0; var_409_object = Obj();
	func_3489(Obj());
	var_410_object = var_409_object;
	func_3298(var_408_bool, var_409_object);
	var_411_object = Obj(); var_412_object = Obj();
	var_388_object = var_411_object;
	var_394_object = var_412_object;
	TaskCall(11);
	func_2131(var_413_object, var_414_object, var_415_string, var_416_bool, var_411_object, var_412_object);
	TaskReturn();
	@@var_394_object:IsDialogEnd(var_397_bool);
	
Label_2113:
	var_480_bool = var_397_bool == 0; //@nz
	if(var_480_bool != 0) {
		sync();
		@@var_394_object:IsDialogEnd(var_397_bool);
		goto Label_2113;
	}
	var_388_object = Obj();
	func_3280();
	StopDialog(var_394_object);
	@@var_394_object:GetReturnValue((int)-1);
	var_396_int = var_387_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4099(var_76_object)
{
	var_77_object = Obj(); var_78_object = Obj();
	GetDiaryRoot(var_78_object);
	var_79_bool = var_78_object == 0; //@nz
	if(var_79_bool != 0) {
		Trace("Can't retrieve diary root");
		var_76_object = 0;
		return 2;
	}
	var_78_object = var_76_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3846()
{
	TriggerWorld("playsound", "mapmark");
	return 0;
}


func_3852(var_164_object)
{
	var_166_bool = 0; var_167_object = Obj(); var_168_float = 0;
	var_164_object = var_167_object;
	func_3563(var_166_bool, var_167_object, (float)0.10000000149011612);
	return 0;
}


func_3598(var_173_float)
{
	var_174_object = Obj(); var_175_object = Obj();
	CreateFloatVector(var_175_object);
	@@var_175_object:add(var_173_float);
	SendWorldWndMessage((int)16, var_175_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4112(var_67_bool, var_68_object, var_69_int)
{
	var_70_object = Obj(); var_71_object = Obj(); var_72_int = 0; var_73_object = Obj(); var_74_object = Obj(); var_75_int = 0;
	func_4099(Obj());
	var_76_object = var_73_object;
	@@var_73_object:Find(var_69_int, var_74_object);
	var_81_bool = var_74_object == 0; //@nz
	if(var_81_bool != 0) {
		var_83_int = "Can't find diary parent with id: " + var_69_int;
		Trace(var_83_int);
		var_67_bool = 0;
		return 6;
	}
	@@var_74_object:AddChild(var_68_object);
	SendWorldWndMessage((int)7);
	@@var_68_object:GetCategory(var_75_int);
	SetDiarySection(var_75_int);
	var_67_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_3859(var_94_object)
{
	var_95_object = Obj(); var_96_string = ""; var_97_float = 0;
	func_4140(Obj());
	var_98_object = var_95_object;
	func_4157(var_95_object, "pt_map_maria", (float)2);
	var_118_object = Obj();
	func_4140(var_118_object);
	@@var_94_object:ShowMap(var_118_object);
	return 0;
}


func_1047(var_0_object, var_556_int, var_557_object)
{
	var_559_object = Obj(); var_560_bool = 0; var_561_int = 0; var_562_bool = 0; var_563_object = Obj(); var_564_bool = 0; var_565_int = 0; var_566_bool = 0;
	var_0_object = var_557_object;
	var_567_bool = 0; var_568_object = Obj(); var_569_float = 0;
	var_557_object = var_568_object;
	func_3211(var_567_bool, var_568_object, (float)70.0);
	var_570_bool = var_567_bool == 0; //@nz
	if(var_570_bool != 0) {
		var_556_int = -2;
		return 8;
	}
	CreateDialog(var_563_object);
	var_571_int = 0;
	func_3666(var_571_int);
	@@var_563_object:SetNPCName(var_571_int);
	var_572_int = 0;
	func_3664(var_572_int);
	@@var_563_object:SetNPCDescription(var_572_int);
	var_573_string = "";
	func_3668(var_573_string);
	@@var_563_object:SetPhoto(var_573_string);
	var_574_string = "";
	func_3670(var_574_string);
	@@var_563_object:SetPhoto2(var_574_string);
	var_575_int = 0;
	func_4190(var_575_int);
	@@var_563_object:SetPlayerName(var_575_int);
	IsOverrideActive(var_564_bool);
	var_576_bool = var_564_bool;
	if(var_576_bool != 0) {
		var_556_int = -2;
		return 8;
	}
	DoDialog(var_563_object);
	var_577_bool = 0; var_578_object = Obj();
	func_3489(Obj());
	var_579_object = var_578_object;
	func_3298(var_577_bool, var_578_object);
	var_580_object = Obj(); var_581_object = Obj();
	var_557_object = var_580_object;
	var_563_object = var_581_object;
	TaskCall(5);
	func_1128(var_582_object, var_583_object, var_584_string, var_585_bool, var_580_object, var_581_object);
	TaskReturn();
	@@var_563_object:IsDialogEnd(var_566_bool);
	
Label_1110:
	var_616_bool = var_566_bool == 0; //@nz
	if(var_616_bool != 0) {
		sync();
		@@var_563_object:IsDialogEnd(var_566_bool);
		goto Label_1110;
	}
	var_557_object = Obj();
	func_3280();
	StopDialog(var_563_object);
	@@var_563_object:GetReturnValue((int)-1);
	var_565_int = var_556_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3608(var_131_bool, var_132_string, var_133_string)
{
	var_134_object = Obj(); var_135_object = Obj();
	FindActor(var_135_object, var_132_string);
	var_136_bool = var_135_object == 0; //@ne
	if(var_136_bool != 0) {
		var_131_bool = 0;
		return 2;
	}
	Trigger(var_135_object, var_133_string);
	var_131_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3356(var_140_bool, var_141_object)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = "";
	var_147_string = "c";
	var_148_int = 0;
	
Label_3359:
	if((int)1 != 0) {
		var_154_int = var_148_int + (int)1;
		var_155_int = var_147_string + var_154_int;
		@@var_141_object:HasProperty(var_155_int, var_149_bool);
		var_156_bool = var_149_bool == 0; //@nz
		if(var_156_bool != 0) {
		} else {
			var_148_int = var_148_int + (int)1;
			goto Label_3359;
		}
	}
	var_157_bool = var_148_int == 0; //@nz
	if(var_157_bool != 0) {
		var_140_bool = 0;
		return 10;
	}
	var_150_int = 0;
	var_159_bool = var_148_int > (int)1;
	if(var_159_bool != 0) {
		irand(var_150_int, var_148_int);
	}
	var_161_int = var_150_int + (int)1;
	var_162_int = var_147_string + var_161_int;
	@@var_141_object:GetProperty(var_162_int, var_151_string);
	var_163_bool = 0; var_164_string = "";
	var_151_string = var_164_string;
	func_3467(var_163_bool, var_164_string);
	var_163_bool = var_140_bool;
	return 10;
	
}


func_3875(var_338_bool)
{
	var_340_int = 0; var_341_string = "";
	func_3516(var_340_int, "k3q01");
	var_343_bool = var_340_int == (int)2;
	if(var_343_bool != 0) {
		var_338_bool = 1;
		return 0;
	}
	var_338_bool = 0;
	return 0;
}


func_3620(var_59_float)
{
	var_60_float = 0; var_61_float = 0;
	GetGameTime(var_61_float);
	var_61_float = var_59_float;
	return 2;
}


func_3625(var_184_int)
{
	var_185_float = 0; var_186_float = 0;
	GetGameTime(var_186_float);
	var_188_int = 0;
	var_188_int = var_186_float / (int)24;
	var_184_int = (int)1 + var_188_int;
	return 2;
}


func_4140(var_48_object)
{
	var_49_object = Obj(); var_50_object = Obj(); var_51_object = Obj(); var_52_object = Obj();
	GetMainOutdoorScene(var_51_object);
	var_53_bool = var_51_object == 0; //@ne
	if(var_53_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_52_object = 0;
		var_52_object = var_48_object;
		return 4;
	}
	@@var_51_object:GetMap(var_52_object);
	var_52_object = var_48_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_3887(var_596_bool)
{
	var_598_int = 0; var_599_string = "";
	func_3516(var_598_int, "k7q01");
	var_601_bool = var_598_int == (int)7;
	if(var_601_bool != 0) {
		var_596_bool = 1;
		return 0;
	}
	var_596_bool = 0;
	return 0;
}


func_1327(var_0_object, var_484_int, var_485_object)
{
	var_487_object = Obj(); var_488_bool = 0; var_489_int = 0; var_490_bool = 0; var_491_object = Obj(); var_492_bool = 0; var_493_int = 0; var_494_bool = 0;
	var_0_object = var_485_object;
	var_495_bool = 0; var_496_object = Obj(); var_497_float = 0;
	var_485_object = var_496_object;
	func_3211(var_495_bool, var_496_object, (float)70.0);
	var_498_bool = var_495_bool == 0; //@nz
	if(var_498_bool != 0) {
		var_484_int = -2;
		return 8;
	}
	CreateDialog(var_491_object);
	var_499_int = 0;
	func_3666(var_499_int);
	@@var_491_object:SetNPCName(var_499_int);
	var_500_int = 0;
	func_3664(var_500_int);
	@@var_491_object:SetNPCDescription(var_500_int);
	var_501_string = "";
	func_3668(var_501_string);
	@@var_491_object:SetPhoto(var_501_string);
	var_502_string = "";
	func_3670(var_502_string);
	@@var_491_object:SetPhoto2(var_502_string);
	var_503_int = 0;
	func_4190(var_503_int);
	@@var_491_object:SetPlayerName(var_503_int);
	IsOverrideActive(var_492_bool);
	var_504_bool = var_492_bool;
	if(var_504_bool != 0) {
		var_484_int = -2;
		return 8;
	}
	DoDialog(var_491_object);
	var_505_bool = 0; var_506_object = Obj();
	func_3489(Obj());
	var_507_object = var_506_object;
	func_3298(var_505_bool, var_506_object);
	var_508_object = Obj(); var_509_object = Obj();
	var_485_object = var_508_object;
	var_491_object = var_509_object;
	TaskCall(7);
	func_1408(var_510_object, var_511_object, var_512_string, var_513_bool, var_508_object, var_509_object);
	TaskReturn();
	@@var_491_object:IsDialogEnd(var_494_bool);
	
Label_1390:
	var_552_bool = var_494_bool == 0; //@nz
	if(var_552_bool != 0) {
		sync();
		@@var_491_object:IsDialogEnd(var_494_bool);
		goto Label_1390;
	}
	var_485_object = Obj();
	func_3280();
	StopDialog(var_491_object);
	@@var_491_object:GetReturnValue((int)-1);
	var_493_int = var_484_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3634(var_283_bool, var_284_int)
{
	var_285_int = 0;
	func_3625(var_285_int);
	var_283_bool = var_285_int == var_284_int;
	return 0;
}


func_3640(var_61_string, var_62_int)
{
	var_63_string = ""; var_64_string = "";
	var_65_int = var_62_int;
	if(var_65_int != 0) {
		"idle" = "idle" + var_62_int;
	}
	var_64_string = var_61_string;
	return 2;
}


func_3131(var_75_bool)
{
	var_75_bool = 1;
	return 0;
}


func_3899(var_515_bool)
{
	var_517_int = 0; var_518_string = "";
	func_3516(var_517_int, "k6q02");
	var_520_bool = var_517_int == (int)1;
	if(var_520_bool != 0) {
		var_515_bool = 1;
		return 0;
	}
	var_515_bool = 0;
	return 0;
}


func_4157(var_95_object, var_96_string, var_97_float)
{
	var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_object = Obj(); var_102_bool = 0; var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_object = Obj(); var_106_bool = 0;
	GetMainOutdoorScene(var_105_object);
	var_107_bool = var_105_object == 0; //@ne
	if(var_107_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_105_object:GetLocator(var_96_string, var_106_bool, var_103_cvector, var_104_cvector);
	var_109_bool = var_106_bool == 0; //@nz
	if(var_109_bool != 0) {
		var_111_int = "Warning: outdoor scene locator " + var_96_string;
		var_113_int = var_111_int + " doesnt exist";
		Trace(var_113_int);
	}
	@@var_105_object:GetMap(var_95_object);
	var_114_bool = var_95_object == 0; //@ne
	if(var_114_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_116_float = GetByIndex(var_103_cvector, 0);
	var_117_float = GetByIndex(var_103_cvector, 2);
	@@var_95_object:SetMapParams(var_116_float, var_117_float, var_97_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_3133()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_3647(var_55_int)
{
	var_56_int = 0; var_57_bool = 0; var_58_int = 0; var_59_bool = 0;
	var_58_int = 0;
	
Label_3649:
	var_61_string = ""; var_62_int = 0;
	var_58_int = var_62_int;
	func_3640(var_61_string, var_62_int);
	HasAnimation(var_59_bool, "all", var_61_string);
	var_66_bool = var_59_bool == 0; //@nz
	if(var_66_bool != 0) {
	} else {
		var_58_int = var_58_int + (int)1;
		goto Label_3649;
	}
	var_58_int = var_55_int;
	return 4;
	
}


func_3393(var_171_bool, var_172_object)
{
	var_173_string = ""; var_174_int = 0; var_175_bool = 0; var_176_int = 0; var_177_string = ""; var_178_string = ""; var_179_int = 0; var_180_bool = 0; var_181_int = 0; var_182_string = "";
	var_184_int = 0;
	func_3625(var_184_int);
	var_190_int = "d" + var_184_int;
	var_178_string = var_190_int + "m";
	var_179_int = 0;
	
Label_3402:
	if((int)1 != 0) {
		var_194_int = var_179_int + (int)1;
		var_195_int = var_178_string + var_194_int;
		@@var_172_object:HasProperty(var_195_int, var_180_bool);
		var_196_bool = var_180_bool == 0; //@nz
		if(var_196_bool != 0) {
		} else {
			var_179_int = var_179_int + (int)1;
			goto Label_3402;
		}
	}
	var_197_bool = var_179_int == 0; //@nz
	if(var_197_bool != 0) {
		var_171_bool = 0;
		return 10;
	}
	var_181_int = 0;
	var_199_bool = var_179_int > (int)1;
	if(var_199_bool != 0) {
		irand(var_181_int, var_179_int);
	}
	var_201_int = var_181_int + (int)1;
	var_202_int = var_178_string + var_201_int;
	@@var_172_object:GetProperty(var_202_int, var_182_string);
	var_203_bool = 0; var_204_string = "";
	var_182_string = var_204_string;
	func_3467(var_203_bool, var_204_string);
	var_203_bool = var_171_bool;
	return 10;
	
}


func_3138(var_51_float, var_52_object)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0);
	GetPosition(var_56_cvector);
	@@var_52_object:GetPosition(var_57_cvector);
	var_58_cvector = var_57_cvector - var_56_cvector;
	var_51_float = var_58_cvector | var_58_cvector;
	return 6;
}


func_838(var_0_object, var_1_object, var_2_object, var_3_string, var_224_object, var_225_object)
{
	var_0_object = var_225_object;
	var_1_object = var_224_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_231_string = "";
		func_896(var_225_object, "Neutral");
		@@@var_0_object:SetMessage((int)525489);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)525490, (int)42621, (int)26846);
		@@@var_0_object:AddReply((int)529311, (int)30766, (int)30765);
		goto Label_866;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x34a";
	}
Label_866:
	var_255_bool = 0;
	func_3672(var_255_bool);
	if(var_255_bool != 0) {

	Label_870:
		lshWaitForAnimEnd();
		var_256_string = var_3_string;
		if(var_256_string != 0) {
		} else {
			var_257_string = "";
			var_257_string = var_2_object;
			func_3436(var_257_string);
			goto Label_870;
	}
		PlayAnimation("all", "idle");

	Label_885:
		WaitForAnimEnd();
		var_270_string = var_3_string;
		if(var_270_string != 0) {
			goto Label_895;
		}
		PlayAnimation("all", "idle");
		goto Label_885;
	}
	goto Label_895;
	
Label_895:
	return 0;
	
}


func_3911(var_344_bool)
{
	var_346_int = 0; var_347_string = "";
	func_3516(var_346_int, "ook3Kapella1");
	var_349_bool = var_346_int == (int)0;
	if(var_349_bool != 0) {
		var_344_bool = 1;
		return 0;
	}
	var_344_bool = 0;
	return 0;
}


func_2886(var_0_object)
{
	var_37_bool = 0;
	func_3206(var_37_bool);
	var_40_bool = var_37_bool == 0; //@nz
	if(var_40_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_2895:
	func_3062();
	goto Label_2895;
}
EMIT "Return(); Pop(0)";


func_3146(var_185_bool, var_186_object, var_187_string)
{
	var_188_bool = 0; var_189_bool = 0;
	var_192_bool = IsFuncExist(var_186_object, "HasProperty", (int)2);
	var_193_bool = var_192_bool == 0; //@nz
	if(var_193_bool != 0) {
		var_185_bool = 0;
		return 2;
	}
	@@var_186_object:HasProperty(var_187_string, var_189_bool);
	var_189_bool = var_185_bool;
	return 2;
}


func_3664(var_117_int)
{
	var_117_int = 515538;
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_310_object, var_311_object)
{
	var_0_object = var_311_object;
	var_1_object = var_310_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_317_string = "";
		func_187(var_311_object, "Neutral");
		@@@var_0_object:SetMessage((int)525420);
		@@@var_0_object:ClearReplies();
		var_326_bool = 0; var_327_object = Obj();
		var_327_object = var_1_object;
		func_3923(var_327_object);
		if(var_326_bool != 0) {
			@@@var_0_object:AddReply((int)525620, (int)41124, (int)26962);
		}
		var_337_bool = 0;
		var_337_bool = 0;
		var_338_bool = 0; var_339_object = Obj();
		var_339_object = var_1_object;
		func_3875(var_339_object);
		if(var_338_bool != 0) {
			var_344_bool = 0; var_345_object = Obj();
			var_345_object = var_1_object;
			func_3911(var_345_object);
			if(var_344_bool != 0) {
				var_337_bool = 1;
			}
		}
		if(var_337_bool != 0) {
			@@@var_0_object:AddReply((int)525421, (int)42590, (int)26789);
		}
		var_353_bool = 0;
		var_353_bool = 0;
		var_354_bool = 0; var_355_object = Obj();
		var_355_object = var_1_object;
		func_3971(var_355_object);
		if(var_354_bool != 0) {
			var_360_bool = 0; var_361_object = Obj();
			var_361_object = var_1_object;
			func_3983(var_361_object);
			if(var_360_bool != 0) {
				var_353_bool = 1;
			}
		}
		if(var_353_bool != 0) {
			@@@var_0_object:AddReply((int)541574, (int)43746, (int)43745);
		}
		@@@var_0_object:AddReply((int)525424, (int)-1, (int)26792);
		@@@var_0_object:AddReply((int)539182, (int)-1, (int)41123);
		goto Label_157;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_157:
	var_375_bool = 0;
	func_3672(var_375_bool);
	if(var_375_bool != 0) {

	Label_161:
		lshWaitForAnimEnd();
		var_376_string = var_3_string;
		if(var_376_string != 0) {
		} else {
			var_377_string = "";
			var_377_string = var_2_object;
			func_3436(var_377_string);
			goto Label_161;
	}
		PlayAnimation("all", "idle");

	Label_176:
		WaitForAnimEnd();
		var_380_string = var_3_string;
		if(var_380_string != 0) {
			goto Label_186;
		}
		PlayAnimation("all", "idle");
		goto Label_176;
	}
	goto Label_186;
	
Label_186:
	return 0;
	
}


func_3666(var_116_int)
{
	var_116_int = 502863;
	return 0;
}


func_2131(var_0_object, var_1_object, var_2_object, var_3_string, var_411_object, var_412_object)
{
	var_0_object = var_412_object;
	var_1_object = var_411_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_418_bool = 0; var_419_object = Obj();
		var_419_object = var_1_object;
		func_3935(var_419_object);
		if(var_418_bool != 0) {
			var_424_object = Obj(); var_425_object = Obj();
			var_424_object = var_1_object;
			var_425_object = var_0_object;
			func_3775();
			var_428_object = Obj(); var_429_object = Obj();
			var_428_object = var_1_object;
			var_429_object = var_0_object;
			func_3817();
			var_432_string = "";
			func_2244(var_412_object, "Strength");
			@@@var_0_object:SetMessage((int)539415);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540750, (int)42790, (int)42789);
			@@@var_0_object:AddReply((int)540754, (int)42790, (int)42793);
		} else {
				var_455_string = "";
				func_2244(var_412_object, "Neutral");
				@@@var_0_object:SetMessage((int)539421);
				@@@var_0_object:ClearReplies();
				var_457_bool = 0;
				var_457_bool = 0;
				var_458_bool = 0; var_459_object = Obj();
				var_459_object = var_1_object;
				func_3947(var_459_object);
				if(var_458_bool != 0) {
					var_464_bool = 0; var_465_object = Obj();
					var_465_object = var_1_object;
					func_3959(var_465_object);
					var_470_bool = var_464_bool == 0; //@nz
					if(var_470_bool != 0) {
						var_457_bool = 1;
					}
				}
				if(var_457_bool != 0) {
					@@@var_0_object:AddReply((int)539454, (int)42779, (int)41385);
				}
				@@@var_0_object:AddReply((int)539422, (int)-1, (int)41353);
				@@@var_0_object:AddReply((int)540740, (int)-1, (int)42778);
				goto Label_2214;
		}
	}
Label_2214:
	var_447_bool = 0;
	func_3672(var_447_bool);
	if(var_447_bool != 0) {

	Label_2218:
		lshWaitForAnimEnd();
		var_448_string = var_3_string;
		if(var_448_string != 0) {
		} else {
			var_449_string = "";
			var_449_string = var_2_object;
			func_3436(var_449_string);
			goto Label_2218;
	}
		PlayAnimation("all", "idle");

	Label_2233:
		WaitForAnimEnd();
		var_452_string = var_3_string;
		if(var_452_string != 0) {
			goto Label_2243;
		}
		PlayAnimation("all", "idle");
		goto Label_2233;

	}
	goto Label_2243;
	
Label_2243:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x857";


func_3668(var_118_string)
{
	var_118_string = "ui/NPC_Kapella.png";
	return 0;
}


func_2815(var_2_object, var_710_string)
{
	var_711_bool = 0;
	func_3672(var_711_bool);
	var_712_bool = var_711_bool == 0; //@nz
	if(var_712_bool != 0) {
		return 0;
	}
	var_713_bool = var_710_string == var_2_object;
	if(var_713_bool != 0) {
		return 0;
	}
	var_714_string = ""; var_715_bool = 0;
	var_710_string = var_714_string;
	var_717_bool = var_710_string == "";
	if(var_717_bool != 0) {
		var_715_bool = 0;
	} else {
		var_715_bool = 1;
	}
	func_3452(var_714_string, var_715_bool);
	var_2_object = var_710_string;
	return 0;
	
}


func_3670(var_119_string)
{
	var_119_string = "ui/NPC_Kapella_b.png";
	return 0;
}


func_3158(var_177_bool, var_178_object, var_179_string, var_180_float, var_181_float, var_182_float)
{
	var_183_float = 0; var_184_float = 0;
	var_185_bool = 0; var_186_object = Obj(); var_187_string = "";
	var_178_object = var_186_object;
	var_179_string = var_187_string;
	func_3146(var_185_bool, var_186_object, var_187_string);
	var_194_bool = var_185_bool == 0; //@nz
	if(var_194_bool != 0) {
		var_177_bool = 0;
		return 2;
	}
	@@var_178_object:GetProperty(var_179_string, var_184_float);
	var_195_float = 0; var_196_float = 0; var_197_float = 0; var_198_float = 0;
	var_196_float = var_184_float + var_180_float;
	var_181_float = var_197_float;
	var_182_float = var_198_float;
	func_3505(var_195_float, var_196_float, var_197_float, var_198_float);
	@@var_178_object:SetProperty(var_179_string, var_195_float);
	var_177_bool = 1;
	return 2;
}


func_3672(var_111_bool)
{
	var_111_bool = 1;
	return 0;
}


func_1872(var_0_object, var_1_object, var_2_object, var_3_string, var_644_object, var_645_object)
{
	var_0_object = var_645_object;
	var_1_object = var_644_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_651_string = "";
		func_1935(var_645_object, "Neutral");
		@@@var_0_object:SetMessage((int)535284);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535285, (int)36962, (int)36961);
		@@@var_0_object:AddReply((int)535292, (int)-1, (int)36968);
		@@@var_0_object:AddReply((int)535293, (int)-1, (int)36969);
		goto Label_1905;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x754";
	}
Label_1905:
	var_669_bool = 0;
	func_3672(var_669_bool);
	if(var_669_bool != 0) {

	Label_1909:
		lshWaitForAnimEnd();
		var_670_string = var_3_string;
		if(var_670_string != 0) {
		} else {
			var_671_string = "";
			var_671_string = var_2_object;
			func_3436(var_671_string);
			goto Label_1909;
	}
		PlayAnimation("all", "idle");

	Label_1924:
		WaitForAnimEnd();
		var_674_string = var_3_string;
		if(var_674_string != 0) {
			goto Label_1934;
		}
		PlayAnimation("all", "idle");
		goto Label_1924;
	}
	goto Label_1934;
	
Label_1934:
	return 0;
	
}


func_3674(var_141_object)
{
	Trace("money 4000 is given");
	var_144_object = Obj(); var_145_int = 0;
	var_141_object = var_144_object;
	func_3544(var_144_object, (int)4000);
	return 0;
}


func_3923(var_326_bool)
{
	var_328_int = 0; var_329_string = "";
	func_3516(var_328_int, "k3q04");
	var_333_bool = var_328_int == (int)0;
	if(var_333_bool != 0) {
		var_326_bool = 1;
		return 0;
	}
	var_326_bool = 0;
	return 0;
}


func_2900(var_61_bool)
{
	var_62_object = Obj(); var_63_object = Obj();
	FindActor(var_63_object, "player");
	var_65_bool = var_63_object == 0; //@nz
	if(var_65_bool != 0) {
		var_61_bool = 0;
		return 2;
	}
	var_66_bool = 0; var_67_object = Obj();
	var_63_object = var_67_object;
	func_3197(var_66_bool, var_67_object);
	var_66_bool = var_61_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4190(var_120_int)
{
	var_121_int = 0; var_122_int = 0;
	GetVariable("branch", var_122_int);
	var_125_bool = var_122_int == (int)0;
	if(var_125_bool != 0) {
		var_120_int = 1;
		return 2;
	EMIT "GOTO 0x106d";
	}
	var_127_bool = var_122_int == (int)1;
	if(var_127_bool != 0) {
		var_120_int = 2;
		return 2;
	}
	var_120_int = 3;
	return 2;
}


func_3935(var_418_bool)
{
	var_420_int = 0; var_421_string = "";
	func_3516(var_420_int, "ook5Kapella1");
	var_423_bool = var_420_int == (int)0;
	if(var_423_bool != 0) {
		var_418_bool = 1;
		return 0;
	}
	var_418_bool = 0;
	return 0;
}


func_2915(var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0);
	var_114_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_113_float, var_114_float);
	return 0;
}


func_3684(var_151_object)
{
	var_153_bool = 0; var_154_object = Obj(); var_155_float = 0;
	var_151_object = var_154_object;
	func_3563(var_153_bool, var_154_object, (float)0.05000000074505806);
	return 0;
}


func_1128(var_0_object, var_1_object, var_2_object, var_3_string, var_580_object, var_581_object)
{
	var_0_object = var_581_object;
	var_1_object = var_580_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_587_string = "";
		func_1191(var_581_object, "Neutral");
		@@@var_0_object:SetMessage((int)526198);
		@@@var_0_object:ClearReplies();
		var_596_bool = 0; var_597_object = Obj();
		var_597_object = var_1_object;
		func_3887(var_597_object);
		if(var_596_bool != 0) {
			@@@var_0_object:AddReply((int)526199, (int)30173, (int)27480);
		}
		@@@var_0_object:AddReply((int)526202, (int)-1, (int)27483);
		goto Label_1161;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x46c";
	}
Label_1161:
	var_608_bool = 0;
	func_3672(var_608_bool);
	if(var_608_bool != 0) {

	Label_1165:
		lshWaitForAnimEnd();
		var_609_string = var_3_string;
		if(var_609_string != 0) {
		} else {
			var_610_string = "";
			var_610_string = var_2_object;
			func_3436(var_610_string);
			goto Label_1165;
	}
		PlayAnimation("all", "idle");

	Label_1180:
		WaitForAnimEnd();
		var_613_string = var_3_string;
		if(var_613_string != 0) {
			goto Label_1190;
		}
		PlayAnimation("all", "idle");
		goto Label_1180;
	}
	goto Label_1190;
	
Label_1190:
	return 0;
	
}


func_2920(var_44_bool)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_object = Obj(); var_48_bool = 0;
	FindActor(var_47_object, "player");
	var_50_bool = var_47_object == 0; //@nz
	if(var_50_bool != 0) {
		var_44_bool = 0;
		return 4;
	}
	var_51_float = 0; var_52_object = Obj();
	var_47_object = var_52_object;
	func_3138(var_51_float, var_52_object);
	var_60_bool = var_51_float > (float)90000.0;
	if(var_60_bool != 0) {
		var_44_bool = 0;
		return 4;
	}
	CanSee(var_48_bool, var_47_object);
	var_48_bool = var_44_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_3691()
{
	var_115_object = Obj(); var_116_object = Obj();
	SetVariable("k3q01KapellaAboutHan", (int)1);
	func_4140(Obj());
	var_119_object = var_116_object;
	var_124_float = 0;
	func_3620(var_124_float);
	@@var_116_object:AddMark("k3q01KapellaGotoAnna", "pt_map_anna", (int)1, (int)525456, var_124_float);
	func_3995();
	return 2;
}
EMIT "Stack[-1] = 0";


func_3180(var_148_object, var_149_string, var_150_int)
{
	var_151_int = 0; var_152_int = 0;
	@@var_148_object:GetProperty(var_149_string, var_152_int);
	var_153_int = var_152_int + var_150_int;
	@@var_148_object:SetProperty(var_149_string, var_153_int);
	return 2;
}


func_3947(var_458_bool)
{
	var_460_int = 0; var_461_string = "";
	func_3516(var_460_int, "k5q04SoborVisit");
	var_463_bool = var_460_int != (int)0;
	if(var_463_bool != 0) {
		var_458_bool = 1;
		return 0;
	}
	var_458_bool = 0;
	return 0;
}


func_3436(var_257_string)
{
	var_258_bool = 0; var_259_float = 0; var_260_float = 0; var_261_bool = 0; var_262_float = 0; var_263_float = 0;
	lshHasAnimation(var_261_bool, var_257_string);
	var_264_bool = var_261_bool;
	if(var_264_bool != 0) {
		lshGetAnimTimes(var_257_string, var_262_float, var_263_float);
		lshPlayAnimation(var_262_float, var_263_float, (bool)0);
	} else {
		var_267_int = "Can't find lsh animation : " + var_257_string;
		Trace(var_267_int);
	}
	return 6;
	
}


func_4207(var_54_object)
{
	var_55_bool = GlobalVars[1];
	var_56_bool = var_55_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_57_int = 0; var_58_object = Obj();
		var_54_object = var_58_object;
		TaskCall(2);
		func_757(var_59_object, var_57_int, var_58_object);
		TaskReturn();
		var_282_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_283_bool = 0; var_284_int = 0;
	func_3634(var_283_bool, (int)3);
	if(var_283_bool != 0) {
		var_286_int = 0; var_287_object = Obj();
		var_54_object = var_287_object;
		TaskCall(0);
		func_0(var_288_object, var_286_int, var_287_object);
		TaskReturn();
		return 0;
	}
	var_385_bool = 0; var_386_int = 0;
	func_3634(var_385_bool, (int)5);
	if(var_385_bool != 0) {
		var_387_int = 0; var_388_object = Obj();
		var_54_object = var_388_object;
		TaskCall(10);
		func_2050(var_389_object, var_387_int, var_388_object);
		TaskReturn();
		return 0;
	}
	var_482_bool = 0; var_483_int = 0;
	func_3634(var_482_bool, (int)6);
	if(var_482_bool != 0) {
		var_484_int = 0; var_485_object = Obj();
		var_54_object = var_485_object;
		TaskCall(6);
		func_1327(var_486_object, var_484_int, var_485_object);
		TaskReturn();
		return 0;
	}
	var_554_bool = 0; var_555_int = 0;
	func_3634(var_554_bool, (int)7);
	if(var_554_bool != 0) {
		var_556_int = 0; var_557_object = Obj();
		var_54_object = var_557_object;
		TaskCall(4);
		func_1047(var_558_object, var_556_int, var_557_object);
		TaskReturn();
		return 0;
	}
	var_618_bool = 0; var_619_int = 0;
	func_3634(var_618_bool, (int)12);
	if(var_618_bool != 0) {
		var_620_int = 0; var_621_object = Obj();
		var_54_object = var_621_object;
		TaskCall(8);
		func_1791(var_622_object, var_620_int, var_621_object);
		TaskReturn();
		return 0;
	}
	var_679_int = 0; var_680_object = Obj();
	var_54_object = var_680_object;
	TaskCall(12);
	func_2676(var_681_object, var_679_int, var_680_object);
	TaskReturn();
	return 0;
}


func_3187(var_44_bool, var_45_cvector)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_bool = 0;
	GetPosition(var_49_cvector);
	var_50_cvector = var_45_cvector - var_49_cvector;
	var_52_float = GetByIndex(var_50_cvector, 0);
	var_53_float = GetByIndex(var_50_cvector, 2);
	Rotate(var_52_float, var_53_float, var_51_bool);
	var_51_bool = var_44_bool;
	return 6;
}


func_2676(var_0_object, var_679_int, var_680_object)
{
	var_682_object = Obj(); var_683_bool = 0; var_684_int = 0; var_685_bool = 0; var_686_object = Obj(); var_687_bool = 0; var_688_int = 0; var_689_bool = 0;
	var_0_object = var_680_object;
	var_690_bool = 0; var_691_object = Obj(); var_692_float = 0;
	var_680_object = var_691_object;
	func_3211(var_690_bool, var_691_object, (float)70.0);
	var_693_bool = var_690_bool == 0; //@nz
	if(var_693_bool != 0) {
		var_679_int = -2;
		return 8;
	}
	CreateDialog(var_686_object);
	var_694_int = 0;
	func_3666(var_694_int);
	@@var_686_object:SetNPCName(var_694_int);
	var_695_int = 0;
	func_3664(var_695_int);
	@@var_686_object:SetNPCDescription(var_695_int);
	var_696_string = "";
	func_3668(var_696_string);
	@@var_686_object:SetPhoto(var_696_string);
	var_697_string = "";
	func_3670(var_697_string);
	@@var_686_object:SetPhoto2(var_697_string);
	var_698_int = 0;
	func_4190(var_698_int);
	@@var_686_object:SetPlayerName(var_698_int);
	IsOverrideActive(var_687_bool);
	var_699_bool = var_687_bool;
	if(var_699_bool != 0) {
		var_679_int = -2;
		return 8;
	}
	DoDialog(var_686_object);
	var_700_bool = 0; var_701_object = Obj();
	func_3489(Obj());
	var_702_object = var_701_object;
	func_3298(var_700_bool, var_701_object);
	var_703_object = Obj(); var_704_object = Obj();
	var_680_object = var_703_object;
	var_686_object = var_704_object;
	TaskCall(13);
	func_2757(var_705_object, var_706_object, var_707_string, var_708_bool, var_703_object, var_704_object);
	TaskReturn();
	@@var_686_object:IsDialogEnd(var_689_bool);
	
Label_2739:
	var_733_bool = var_689_bool == 0; //@nz
	if(var_733_bool != 0) {
		sync();
		@@var_686_object:IsDialogEnd(var_689_bool);
		goto Label_2739;
	}
	var_680_object = Obj();
	func_3280();
	StopDialog(var_686_object);
	@@var_686_object:GetReturnValue((int)-1);
	var_688_int = var_679_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3959(var_464_bool)
{
	var_466_int = 0; var_467_string = "";
	func_3516(var_466_int, "k5q04");
	var_469_bool = var_466_int == (int)1000;
	if(var_469_bool != 0) {
		var_464_bool = 1;
		return 0;
	}
	var_464_bool = 0;
	return 0;
}


func_3452(var_235_string, var_236_bool)
{
	var_239_bool = 0; var_240_float = 0; var_241_float = 0; var_242_bool = 0; var_243_float = 0; var_244_float = 0;
	lshHasAnimation(var_242_bool, var_235_string);
	var_245_bool = var_242_bool;
	if(var_245_bool != 0) {
		lshGetAnimTimes(var_235_string, var_243_float, var_244_float);
		lshPlayAnimation(var_243_float, var_244_float, var_236_bool);
	} else {
		var_247_int = "Can't find lsh animation : " + var_235_string;
		Trace(var_247_int);
	}
	return 6;
	
}


func_3197(var_40_bool, var_41_object)
{
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	@@var_41_object:GetPosition(var_43_cvector);
	var_44_bool = 0; var_45_cvector = CVector(0,0,0);
	var_43_cvector = var_45_cvector;
	func_3187(var_44_bool, var_45_cvector);
	var_44_bool = var_40_bool;
	return 2;
}


func_2942()
{
	var_737_float = 0; var_738_float = 0;
	rand(var_738_float, (int)8, (int)16);
	SetTimer((int)10, var_738_float);
	return 2;
}


func_896(var_2_object, var_231_string)
{
	var_232_bool = 0;
	func_3672(var_232_bool);
	var_233_bool = var_232_bool == 0; //@nz
	if(var_233_bool != 0) {
		return 0;
	}
	var_234_bool = var_231_string == var_2_object;
	if(var_234_bool != 0) {
		return 0;
	}
	var_235_string = ""; var_236_bool = 0;
	var_231_string = var_235_string;
	var_238_bool = var_231_string == "";
	if(var_238_bool != 0) {
		var_236_bool = 0;
	} else {
		var_236_bool = 1;
	}
	func_3452(var_235_string, var_236_bool);
	var_2_object = var_231_string;
	return 0;
	
}


func_1408(var_0_object, var_1_object, var_2_object, var_3_string, var_508_object, var_509_object)
{
	var_0_object = var_509_object;
	var_1_object = var_508_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_515_bool = 0; var_516_object = Obj();
		var_516_object = var_1_object;
		func_3899(var_516_object);
		if(var_515_bool != 0) {
			var_521_string = "";
			func_1491(var_509_object, "Neutral");
			@@@var_0_object:SetMessage((int)526727);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526728, (int)30294, (int)28005);
			@@@var_0_object:AddReply((int)541532, (int)43694, (int)43693);
		} else {
				var_544_string = "";
				func_1491(var_509_object, "Neutral");
				@@@var_0_object:SetMessage((int)526735);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)526736, (int)-1, (int)28013);
				@@@var_0_object:AddReply((int)528870, (int)-1, (int)30293);
				goto Label_1461;
		}
	}
Label_1461:
	var_536_bool = 0;
	func_3672(var_536_bool);
	if(var_536_bool != 0) {

	Label_1465:
		lshWaitForAnimEnd();
		var_537_string = var_3_string;
		if(var_537_string != 0) {
		} else {
			var_538_string = "";
			var_538_string = var_2_object;
			func_3436(var_538_string);
			goto Label_1465;
	}
		PlayAnimation("all", "idle");

	Label_1480:
		WaitForAnimEnd();
		var_541_string = var_3_string;
		if(var_541_string != 0) {
			goto Label_1490;
		}
		PlayAnimation("all", "idle");
		goto Label_1480;

	}
	goto Label_1490;
	
Label_1490:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x584";


func_3714()
{
	var_44_object = Obj(); var_45_object = Obj();
	func_4140(Obj());
	var_46_object = var_45_object;
	var_57_float = 0;
	func_3620(var_57_float);
	@@var_45_object:AddMark("k3q04KapellaGotoDanko", "pt_gmap_dt_house2_08", (int)0, (int)529819, var_57_float);
	func_4008();
	func_4021();
	var_91_object = Obj(); var_92_string = "";
	func_3521(var_91_object, "quest_k3_04");
	var_99_bool = 0; var_100_string = ""; var_101_string = "";
	func_3608(var_99_bool, "quest_k3_04", "place_burah_lopuh");
	return 2;
}
EMIT "Stack[-1] = 0";


func_3971(var_354_bool)
{
	var_356_int = 0; var_357_string = "";
	func_3516(var_356_int, "k3q04SawDanko");
	var_359_bool = var_356_int != (int)0;
	if(var_359_bool != 0) {
		var_354_bool = 1;
		return 0;
	}
	var_354_bool = 0;
	return 0;
}


func_3206(var_37_bool)
{
	var_38_bool = 0; var_39_bool = 0;
	IsLoaded(var_39_bool);
	var_39_bool = var_37_bool;
	return 2;
}


func_2951()
{
	KillTimer((int)10);
	return 0;
}


func_3211(var_68_bool, var_69_object, var_70_float)
{
	var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_bool = 0; var_79_bool = 0; var_80_float = 0; var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_bool = 0; var_88_bool = 0;
	@@var_69_object:GetPosition(var_81_cvector);
	@@var_69_object:GetEyesHeight(var_80_float);
	var_89_float = GetByIndex(var_81_cvector, 1);
	var_89_float = var_89_float + var_80_float;
	SetByIndex(var_81_cvector, 1) = var_89_float;
	GetPosition(var_82_cvector);
	GetEyesHeight(var_80_float);
	var_90_float = GetByIndex(var_82_cvector, 1);
	var_90_float = var_90_float + var_80_float;
	SetByIndex(var_82_cvector, 1) = var_90_float;
	var_83_cvector = var_81_cvector - var_82_cvector;
	var_91_float = GetByIndex(var_83_cvector, 1);
	SetByIndex(var_83_cvector, 1) = (float)0;
	var_92_int = var_83_cvector | var_83_cvector;
	var_93_float = sqrt(var_92_int);
	var_83_cvector = var_83_cvector / var_93_float;
	var_84_cvector = -var_83_cvector;
	var_94_float = var_83_cvector * var_70_float;
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0);
	var_96_cvector = var_84_cvector ^ CVector(0.0, 1.0, 0.0);
	func_3495(var_95_cvector, var_96_cvector);
	var_104_float = var_95_cvector * (int)25;
	var_105_int = var_94_float + var_104_float;
	var_85_cvector = var_105_int - CVector(0.0, 10.0, 0.0);
	var_86_cvector = var_82_cvector + var_85_cvector;
	IsOverrideActive(var_87_bool);
	var_107_bool = var_87_bool;
	if(var_107_bool != 0) {
		var_68_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_86_cvector, var_84_cvector, (bool)1);
	var_109_float = GetByIndex(var_85_cvector, 0);
	var_110_float = GetByIndex(var_85_cvector, 2);
	Rotate(var_109_float, var_110_float);
	var_111_bool = 0;
	func_3672(var_111_bool);
	if(var_111_bool != 0) {
	} else {
		HasAnimationTrack(var_88_bool, "head");
		var_113_bool = var_88_bool;
		if(var_113_bool == 0) goto Label_3274;
		LookAsyncCamera("head");
	}
Label_3274:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_68_bool = 1;
	return 18;
	
}


func_3467(var_163_bool, var_164_string)
{
	var_165_bool = 0; var_166_bool = 0;
	var_167_bool = 0;
	func_3672(var_167_bool);
	if(var_167_bool != 0) {
		lshHasSpeech(var_166_bool, var_164_string);
		var_168_bool = var_166_bool;
		if(var_168_bool != 0) {
			lshPlaySpeech(var_164_string);
			var_163_bool = 1;
			return 2;
		}
	}
	var_163_bool = 0;
	return 2;
}


func_3983(var_360_bool)
{
	var_362_int = 0; var_363_string = "";
	func_3516(var_362_int, "ook3Kapella2");
	var_365_bool = var_362_int == (int)0;
	if(var_365_bool != 0) {
		var_360_bool = 1;
		return 0;
	}
	var_360_bool = 0;
	return 0;
}


func_1935(var_2_object, var_651_string)
{
	var_652_bool = 0;
	func_3672(var_652_bool);
	var_653_bool = var_652_bool == 0; //@nz
	if(var_653_bool != 0) {
		return 0;
	}
	var_654_bool = var_651_string == var_2_object;
	if(var_654_bool != 0) {
		return 0;
	}
	var_655_string = ""; var_656_bool = 0;
	var_651_string = var_655_string;
	var_658_bool = var_651_string == "";
	if(var_658_bool != 0) {
		var_656_bool = 0;
	} else {
		var_656_bool = 1;
	}
	func_3452(var_655_string, var_656_bool);
	var_2_object = var_651_string;
	return 0;
	
}


func_3482()
{
	var_39_bool = 0;
	func_3672(var_39_bool);
	if(var_39_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_3995()
{
	var_125_object = Obj(); var_126_object = Obj();
	CreateDiaryEntry(var_126_object, (int)340, (int)1, (int)525449);
	var_130_bool = 0; var_131_object = Obj(); var_132_int = 0;
	var_126_object = var_131_object;
	func_4112(var_130_bool, var_131_object, (int)337);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3745()
{
	SetVariable("k7q01", (int)8);
	func_4086();
	return 0;
}


func_3489(var_131_object)
{
	var_132_object = Obj(); var_133_object = Obj();
	self(var_133_object);
	var_133_object = var_131_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1191(var_2_object, var_587_string)
{
	var_588_bool = 0;
	func_3672(var_588_bool);
	var_589_bool = var_588_bool == 0; //@nz
	if(var_589_bool != 0) {
		return 0;
	}
	var_590_bool = var_587_string == var_2_object;
	if(var_590_bool != 0) {
		return 0;
	}
	var_591_string = ""; var_592_bool = 0;
	var_587_string = var_591_string;
	var_594_bool = var_587_string == "";
	if(var_594_bool != 0) {
		var_592_bool = 0;
	} else {
		var_592_bool = 1;
	}
	func_3452(var_591_string, var_592_bool);
	var_2_object = var_587_string;
	return 0;
	
}


func_3495(var_95_cvector, var_96_cvector)
{
	var_98_float = 0; var_99_float = 0;
	var_100_int = var_96_cvector | var_96_cvector;
	var_99_float = sqrt(var_100_int);
	var_101_float = 9.999999974752427e-07;
	var_102_bool = var_99_float < var_101_float;
	if(var_102_bool != 0) {
		var_95_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_95_cvector = var_96_cvector / var_99_float;
	return 2;
}


func_4008()
{
	var_60_object = Obj(); var_61_object = Obj();
	CreateDiaryEntry(var_61_object, (int)354, (int)2, (int)525654);
	var_65_bool = 0; var_66_object = Obj(); var_67_int = 0;
	var_61_object = var_66_object;
	func_4112(var_65_bool, var_66_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3754()
{
	SetVariable("k6q02", (int)2);
	func_4073();
	return 0;
}


func_3505(var_195_float, var_196_float, var_197_float, var_198_float)
{
	var_199_bool = var_196_float < var_197_float;
	if(var_199_bool != 0) {
		var_197_float = var_195_float;
		return 0;
	}
	var_200_bool = var_196_float > var_198_float;
	if(var_200_bool != 0) {
		var_198_float = var_195_float;
		return 0;
	}
	var_196_float = var_195_float;
	return 0;
}


func_3763()
{
	SetVariable("ook3Kapella1", (int)1);
	return 0;
}


func_4021()
{
	var_83_object = Obj(); var_84_object = Obj();
	CreateDiaryEntry(var_84_object, (int)355, (int)2, (int)525655);
	var_88_bool = 0; var_89_object = Obj(); var_90_int = 0;
	var_84_object = var_89_object;
	func_4112(var_88_bool, var_89_object, (int)354);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3769()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_187(var_2_object, var_317_string)
{
	var_318_bool = 0;
	func_3672(var_318_bool);
	var_319_bool = var_318_bool == 0; //@nz
	if(var_319_bool != 0) {
		return 0;
	}
	var_320_bool = var_317_string == var_2_object;
	if(var_320_bool != 0) {
		return 0;
	}
	var_321_string = ""; var_322_bool = 0;
	var_317_string = var_321_string;
	var_324_bool = var_317_string == "";
	if(var_324_bool != 0) {
		var_322_bool = 0;
	} else {
		var_322_bool = 1;
	}
	func_3452(var_321_string, var_322_bool);
	var_2_object = var_317_string;
	return 0;
	
}


func_3516(var_328_int, var_329_string)
{
	var_330_int = 0; var_331_int = 0;
	GetVariable(var_329_string, var_331_int);
	var_331_int = var_328_int;
	return 2;
}


func_3775()
{
	SetVariable("ook5Kapella1", (int)1);
	return 0;
}


func_3521(var_91_object, var_92_string)
{
	var_93_object = Obj(); var_94_object = Obj(); var_95_object = Obj(); var_96_object = Obj();
	GetMainOutdoorScene(var_95_object);
	var_98_int = var_92_string + ".bin";
	AddBlankActor(var_96_object, var_95_object, var_92_string, var_98_int);
	var_96_object = var_91_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4034()
{
	var_62_object = Obj(); var_63_object = Obj();
	CreateDiaryEntry(var_63_object, (int)740, (int)2, (int)539457);
	var_67_bool = 0; var_68_object = Obj(); var_69_int = 0;
	var_63_object = var_68_object;
	func_4112(var_67_bool, var_68_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2244(var_2_object, var_432_string)
{
	var_433_bool = 0;
	func_3672(var_433_bool);
	var_434_bool = var_433_bool == 0; //@nz
	if(var_434_bool != 0) {
		return 0;
	}
	var_435_bool = var_432_string == var_2_object;
	if(var_435_bool != 0) {
		return 0;
	}
	var_436_string = ""; var_437_bool = 0;
	var_432_string = var_436_string;
	var_439_bool = var_432_string == "";
	if(var_439_bool != 0) {
		var_437_bool = 0;
	} else {
		var_437_bool = 1;
	}
	func_3452(var_436_string, var_437_bool);
	var_2_object = var_432_string;
	return 0;
	
}


func_3781()
{
	var_44_object = Obj(); var_45_object = Obj();
	SetVariable("k5q04", (int)1);
	func_4140(Obj());
	var_48_object = var_45_object;
	var_59_float = 0;
	func_3620(var_59_float);
	@@var_45_object:AddMark("k5q04KapellaGotoMaria", "pt_map_maria", (int)0, (int)515282, var_59_float);
	func_4034();
	func_4060();
	return 2;
}
EMIT "Stack[-1] = 0";


func_2757(var_0_object, var_1_object, var_2_object, var_3_string, var_703_object, var_704_object)
{
	var_0_object = var_704_object;
	var_1_object = var_703_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_710_string = "";
		func_2815(var_704_object, "Neutral");
		@@@var_0_object:SetMessage((int)540539);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540540, (int)-1, (int)42549);
		@@@var_0_object:AddReply((int)540799, (int)-1, (int)42848);
		goto Label_2785;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xac9";
	}
Label_2785:
	var_725_bool = 0;
	func_3672(var_725_bool);
	if(var_725_bool != 0) {

	Label_2789:
		lshWaitForAnimEnd();
		var_726_string = var_3_string;
		if(var_726_string != 0) {
		} else {
			var_727_string = "";
			var_727_string = var_2_object;
			func_3436(var_727_string);
			goto Label_2789;
	}
		PlayAnimation("all", "idle");

	Label_2804:
		WaitForAnimEnd();
		var_730_string = var_3_string;
		if(var_730_string != 0) {
			goto Label_2814;
		}
		PlayAnimation("all", "idle");
		goto Label_2804;
	}
	goto Label_2814;
	
Label_2814:
	return 0;
	
}


func_3532(var_157_int, var_158_int)
{
	var_159_object = Obj(); var_160_object = Obj();
	CreateIntVector(var_160_object);
	@@var_160_object:add(var_157_int);
	@@var_160_object:add(var_158_int);
	SendWorldWndMessage((int)3, var_160_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4047()
{
	var_123_object = Obj(); var_124_object = Obj();
	CreateDiaryEntry(var_124_object, (int)747, (int)2, (int)539464);
	var_128_bool = 0; var_129_object = Obj(); var_130_int = 0;
	var_124_object = var_129_object;
	func_4112(var_128_bool, var_129_object, (int)740);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3280()
{
	var_275_bool = 0; var_276_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_278_bool = 0;
	func_3672(var_278_bool);
	if(var_278_bool != 0) {
	} else {
		HasAnimationTrack(var_276_bool, "head");
		var_280_bool = var_276_bool;
		if(var_280_bool == 0) goto Label_3297;
		UnlookAsync("head");
	}
Label_3297:
	return 2;
	
}


func_1491(var_2_object, var_521_string)
{
	var_522_bool = 0;
	func_3672(var_522_bool);
	var_523_bool = var_522_bool == 0; //@nz
	if(var_523_bool != 0) {
		return 0;
	}
	var_524_bool = var_521_string == var_2_object;
	if(var_524_bool != 0) {
		return 0;
	}
	var_525_string = ""; var_526_bool = 0;
	var_521_string = var_525_string;
	var_528_bool = var_521_string == "";
	if(var_528_bool != 0) {
		var_526_bool = 0;
	} else {
		var_526_bool = 1;
	}
	func_3452(var_525_string, var_526_bool);
	var_2_object = var_521_string;
	return 0;
	
}


func_3544(var_144_object, var_145_int)
{
	var_146_int = 0; var_147_int = 0;
	var_148_object = Obj(); var_149_string = ""; var_150_int = 0;
	var_144_object = var_148_object;
	var_145_int = var_150_int;
	func_3180(var_148_object, "money", var_150_int);
	var_155_bool = var_145_int > (int)0;
	if(var_155_bool != 0) {
		GetInvItemByName(var_147_int, "Money");
		var_157_int = 0; var_158_int = 0;
		var_147_int = var_157_int;
		var_145_int = var_158_int;
		func_3532(var_157_int, var_158_int);
	}
	return 2;
}


func_4060()
{
	var_85_object = Obj(); var_86_object = Obj();
	CreateDiaryEntry(var_86_object, (int)741, (int)2, (int)539458);
	var_90_bool = 0; var_91_object = Obj(); var_92_int = 0;
	var_86_object = var_91_object;
	func_4112(var_90_bool, var_91_object, (int)740);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3807()
{
	func_4047();
	var_131_bool = 0; var_132_string = ""; var_133_string = "";
	func_3608(var_131_bool, "quest_k5_04", "completed");
	return 0;
}


func_3298(var_129_bool, var_130_object)
{
	var_134_int = 0; var_135_int = 0; var_136_int = 0; var_137_int = 0;
	GetVariable("voice_common", var_136_int);
	var_139_int = var_136_int;
	if(var_139_int != 0) {
		var_140_bool = 0; var_141_object = Obj();
		var_130_object = var_141_object;
		func_3356(var_140_bool, var_141_object);
		var_170_bool = var_140_bool == 0; //@nz
		if(var_170_bool != 0) {
			var_171_bool = 0; var_172_object = Obj();
			var_130_object = var_172_object;
			func_3393(var_171_bool, var_172_object);
			var_206_bool = var_171_bool == 0; //@nz
			if(var_206_bool != 0) {
				var_129_bool = 0;
				return 4;
			}
		}
		irand(var_137_int, (int)2);
		var_208_int = var_137_int;
		if(var_208_int != 0) {
			var_211_int = var_136_int + (int)1;
			var_213_int = var_211_int % (int)3;
			SetVariable("voice_common", var_213_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_216_bool = 0; var_217_object = Obj();
		var_130_object = var_217_object;
		func_3393(var_216_bool, var_217_object);
		var_218_bool = var_216_bool == 0; //@nz
		if(var_218_bool != 0) {
			var_219_bool = 0; var_220_object = Obj();
			var_130_object = var_220_object;
			func_3356(var_219_bool, var_220_object);
			var_221_bool = var_219_bool == 0; //@nz
			if(var_221_bool != 0) {
				var_129_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_3354;
	
Label_3354:
	var_129_bool = 1;
	return 4;
	
}


func_3817()
{
	SetVariable("k5Kapellavisit", (int)1);
	return 0;
}


func_4073()
{
	var_46_object = Obj(); var_47_object = Obj();
	CreateDiaryEntry(var_47_object, (int)502, (int)2, (int)528768);
	var_51_bool = 0; var_52_object = Obj(); var_53_int = 0;
	var_47_object = var_52_object;
	func_4112(var_51_bool, var_52_object, (int)500);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3563(var_166_bool, var_167_object, var_168_float)
{
	var_169_bool = var_167_object == 0; //@nz
	if(var_169_bool != 0) {
		var_166_bool = 0;
		return 0;
	}
	var_171_bool = var_168_float > (int)0;
	if(var_171_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_202_bool = var_168_float < (int)0;
		if(var_202_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_3584;
		}
		var_166_bool = 0;
		return 0;
	}
Label_3584:
	var_173_float = 0;
	var_168_float = var_173_float;
	func_3598(var_173_float);
	var_177_bool = 0; var_178_object = Obj(); var_179_string = ""; var_180_float = 0; var_181_float = 0; var_182_float = 0;
	var_167_object = var_178_object;
	var_168_float = var_180_float;
	func_3158(var_177_bool, var_178_object, "reputation", var_180_float, (float)0, (float)1);
	var_166_bool = 1;
	return 0;
	
}


func_3823(var_215_object)
{
	var_217_bool = 0; var_218_object = Obj(); var_219_float = 0;
	var_215_object = var_218_object;
	func_3563(var_217_bool, var_218_object, (float)0.019999999552965164);
	return 0;
}


func_757(var_0_object, var_57_int, var_58_object)
{
	var_60_object = Obj(); var_61_bool = 0; var_62_int = 0; var_63_bool = 0; var_64_object = Obj(); var_65_bool = 0; var_66_int = 0; var_67_bool = 0;
	var_0_object = var_58_object;
	var_68_bool = 0; var_69_object = Obj(); var_70_float = 0;
	var_58_object = var_69_object;
	func_3211(var_68_bool, var_69_object, (float)70.0);
	var_115_bool = var_68_bool == 0; //@nz
	if(var_115_bool != 0) {
		var_57_int = -2;
		return 8;
	}
	CreateDialog(var_64_object);
	var_116_int = 0;
	func_3666(var_116_int);
	@@var_64_object:SetNPCName(var_116_int);
	var_117_int = 0;
	func_3664(var_117_int);
	@@var_64_object:SetNPCDescription(var_117_int);
	var_118_string = "";
	func_3668(var_118_string);
	@@var_64_object:SetPhoto(var_118_string);
	var_119_string = "";
	func_3670(var_119_string);
	@@var_64_object:SetPhoto2(var_119_string);
	var_120_int = 0;
	func_4190(var_120_int);
	@@var_64_object:SetPlayerName(var_120_int);
	IsOverrideActive(var_65_bool);
	var_128_bool = var_65_bool;
	if(var_128_bool != 0) {
		var_57_int = -2;
		return 8;
	}
	DoDialog(var_64_object);
	var_129_bool = 0; var_130_object = Obj();
	func_3489(Obj());
	var_131_object = var_130_object;
	func_3298(var_129_bool, var_130_object);
	var_224_object = Obj(); var_225_object = Obj();
	var_58_object = var_224_object;
	var_64_object = var_225_object;
	TaskCall(3);
	func_838(var_226_object, var_227_object, var_228_string, var_229_bool, var_224_object, var_225_object);
	TaskReturn();
	@@var_64_object:IsDialogEnd(var_67_bool);
	
Label_820:
	var_273_bool = var_67_bool == 0; //@nz
	if(var_273_bool != 0) {
		sync();
		@@var_64_object:IsDialogEnd(var_67_bool);
		goto Label_820;
	}
	var_58_object = Obj();
	func_3280();
	StopDialog(var_64_object);
	@@var_64_object:GetReturnValue((int)-1);
	var_66_int = var_57_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3830()
{
	SetVariable("ook3Kapella2", (int)1);
	return 0;
}


func_3062()
{
	var_41_int = 0; var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_int = 0; var_52_bool = 0;
	WaitForAnimEnd();
	var_53_bool = 0;
	func_3206(var_53_bool);
	var_54_bool = var_53_bool == 0; //@nz
	if(var_54_bool != 0) {
		return 12;
	}
	func_3647((int)0);
	var_55_int = var_47_int;
	var_48_int = 0;
	
Label_3076:
	var_68_bool = 0;
	var_68_bool = 0;
	var_70_bool = var_48_int < (int)5;
	if(var_70_bool != 0) {
		var_71_bool = 0;
		func_3206(var_71_bool);
		if(var_71_bool != 0) {
			var_68_bool = 1;
		}
	}
	if(var_68_bool != 0) {
		var_72_bool = var_47_int == 0; //@nz
		if(var_72_bool != 0) {
			Sleep((int)3, var_49_bool);
			var_74_bool = var_49_bool == 0; //@nz
			if(var_74_bool != 0) {
			} else {
		} else {
				irand(var_50_int, var_47_int);
				irand(var_51_int, (int)5);
				var_80_bool = var_51_int != (int)0;
				if(var_80_bool != 0) {
					var_50_int = 0;
				}
				var_82_string = ""; var_83_int = 0;
				var_50_int = var_83_int;
				func_3640(var_82_string, var_83_int);
				PlayAnimation("all", var_82_string);
				WaitForAnimEnd(var_52_bool);
				var_84_bool = var_52_bool == 0; //@nz
				if(var_84_bool == 0) goto Label_3117;
				goto Label_3128;
		}
		Label_3117:
			var_75_bool = 0;
			func_3131(var_75_bool);
			var_76_bool = var_75_bool == 0; //@nz
			if(var_76_bool != 0) {
				goto Label_3128;
			}
			ResetAAS();
			var_48_int = var_48_int + (int)1;
			goto Label_3076;

		}
	}
Label_3128:
	ResetAAS();
	return 12;
	
}


func_4086()
{
	var_46_object = Obj(); var_47_object = Obj();
	CreateDiaryEntry(var_47_object, (int)426, (int)1, (int)526225);
	var_51_bool = 0; var_52_object = Obj(); var_53_int = 0;
	var_47_object = var_52_object;
	func_4112(var_51_bool, var_52_object, (int)416);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3836(var_210_object)
{
	Trace("money 5000 is given");
	var_213_object = Obj(); var_214_int = 0;
	var_210_object = var_213_object;
	func_3544(var_213_object, (int)5000);
	return 0;
}


func_1791(var_0_object, var_620_int, var_621_object)
{
	var_623_object = Obj(); var_624_bool = 0; var_625_int = 0; var_626_bool = 0; var_627_object = Obj(); var_628_bool = 0; var_629_int = 0; var_630_bool = 0;
	var_0_object = var_621_object;
	var_631_bool = 0; var_632_object = Obj(); var_633_float = 0;
	var_621_object = var_632_object;
	func_3211(var_631_bool, var_632_object, (float)70.0);
	var_634_bool = var_631_bool == 0; //@nz
	if(var_634_bool != 0) {
		var_620_int = -2;
		return 8;
	}
	CreateDialog(var_627_object);
	var_635_int = 0;
	func_3666(var_635_int);
	@@var_627_object:SetNPCName(var_635_int);
	var_636_int = 0;
	func_3664(var_636_int);
	@@var_627_object:SetNPCDescription(var_636_int);
	var_637_string = "";
	func_3668(var_637_string);
	@@var_627_object:SetPhoto(var_637_string);
	var_638_string = "";
	func_3670(var_638_string);
	@@var_627_object:SetPhoto2(var_638_string);
	var_639_int = 0;
	func_4190(var_639_int);
	@@var_627_object:SetPlayerName(var_639_int);
	IsOverrideActive(var_628_bool);
	var_640_bool = var_628_bool;
	if(var_640_bool != 0) {
		var_620_int = -2;
		return 8;
	}
	DoDialog(var_627_object);
	var_641_bool = 0; var_642_object = Obj();
	func_3489(Obj());
	var_643_object = var_642_object;
	func_3298(var_641_bool, var_642_object);
	var_644_object = Obj(); var_645_object = Obj();
	var_621_object = var_644_object;
	var_627_object = var_645_object;
	TaskCall(9);
	func_1872(var_646_object, var_647_object, var_648_string, var_649_bool, var_644_object, var_645_object);
	TaskReturn();
	@@var_627_object:IsDialogEnd(var_630_bool);
	
Label_1854:
	var_677_bool = var_630_bool == 0; //@nz
	if(var_677_bool != 0) {
		sync();
		@@var_627_object:IsDialogEnd(var_630_bool);
		goto Label_1854;
	}
	var_621_object = Obj();
	func_3280();
	StopDialog(var_627_object);
	@@var_627_object:GetReturnValue((int)-1);
	var_629_int = var_620_int;
	return 8;
}
EMIT "Stack[-4] = 0";


