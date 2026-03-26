// @IMPORTS: Hold/0,StopGroup0/0,sync/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,GetPosition/1,GetDirection/1,SetPosition/1,SetDirection/1,LockAnimation/3,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,irand/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,SendWorldWndMessage/1,CreateFloatVector/1,FindActor/2,Trigger/2,GetGameTime/1,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Confusion|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Anger|W:Surprise|W:Neutral|W:Fear|W:icot_viktor_NPC_Trigger|W:stand|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|W:m|W:Can't find lsh animation : |A:add|W:money|W:Money|W:reputation|W:ui/NPC_Viktor.png|W:ui/NPC_Viktor_b.png|W:ook3Viktor1|W:money2000 is given|W:ook10Viktor1|W:k9q01|W:quest_k9_01|W:init_mnogogrannik|W:playsound|W:givemoney|W:k3q03|W:k10q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x7d2
// @RUN_TASK: 13
// @TASK_0: vars= params=0
// @EVENT_5: op=0x8 vars=
// @TASK_1: vars=object params=2
// @TASK_2: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc1 vars=int,int
// @TASK_3: vars=object params=2
// @TASK_4: vars=object,object,string,bool params=2
// @EVENT_11: op=0x26f vars=int,int
// @TASK_5: vars=object params=2
// @TASK_6: vars=object,object,string,bool params=2
// @EVENT_11: op=0x3b6 vars=int,int
// @TASK_7: vars=object params=2
// @TASK_8: vars=object,object,string,bool params=2
// @EVENT_11: op=0x53b vars=int,int
// @TASK_9: vars=object params=2
// @TASK_10: vars=object,object,string,bool params=2
// @EVENT_11: op=0x6aa vars=int,int
// @TASK_11: vars=object params=2
// @TASK_12: vars=object,object,string,bool params=2
// @EVENT_11: op=0x7a8 vars=int,int
// @TASK_13: vars=bool,cvector,cvector params=0
// @EVENT_26: op=0x7d9 vars=string
// @EVENT_6: op=0x812 vars=
// @EVENT_0: op=0x81b vars=object
// @PE: 0x5e,0xab,0xc1,0x21f,0x259,0x26f,0x346,0x3a0,0x3b6,0x4e1,0x525,0x53b,0x655,0x694,0x6aa,0x758,0x792,0x7a8,0x7d9,0x994,0x9c3,0xa05,0xa15,0xa1c,0xa22,0xa2c,0xa32,0xa40,0xa46,0xa52,0xa5e,0xa6a,0xa76,0xa82,0xad5

task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_bool, var_31_cvector, var_32_cvector)
{
	StopGroup0();
	sync();
	return 0;
}


task_2_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_bool, var_33_cvector, var_34_cvector)
{
	if((int)1 != 0) {
		func_2429();
		var_38_bool = var_34_cvector == (int)26947;
		if(var_38_bool != 0) {
			var_39_object = Obj(); var_40_object = Obj();
			var_39_object = var_1_object;
			var_40_object = var_0_object;
			func_2588();
		}
		var_44_bool = var_34_cvector == (int)26951;
		if(var_44_bool != 0) {
			var_45_object = Obj(); var_46_object = Obj();
			var_45_object = var_1_object;
			var_46_object = var_0_object;
			func_2624();
			var_49_object = Obj(); var_50_object = Obj();
			var_49_object = var_1_object;
			var_50_object = var_0_object;
			func_2594(var_50_object);
		}
		var_71_bool = var_34_cvector == (int)43252;
		if(var_71_bool != 0) {
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_2581(var_73_object);
		}
		var_113_bool = var_33_cvector == (int)26946;
		if(var_113_bool != 0) {
			var_114_string = "";
			func_171(var_34_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)525599);
			@@@var_0_object:ClearReplies();
			var_132_bool = 0;
			var_132_bool = 0;
			var_133_bool = 0; var_134_object = Obj();
			var_134_object = var_1_object;
			func_2630(var_134_object);
			if(var_133_bool != 0) {
				var_141_bool = 0; var_142_object = Obj();
				var_142_object = var_1_object;
				func_2642(var_142_object);
				if(var_141_bool != 0) {
					var_132_bool = 1;
				}
			}
			if(var_132_bool != 0) {
				@@@var_0_object:AddReply((int)525600, (int)26948, (int)26947);
			}
			@@@var_0_object:AddReply((int)525605, (int)-1, (int)26952);
			@@@var_0_object:AddReply((int)542220, (int)-1, (int)44551);
			return 0;
		}
		var_157_bool = var_33_cvector == (int)26948;
		if(var_157_bool != 0) {
			var_158_string = "";
			func_171(var_34_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)525601);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542221, (int)44554, (int)44552);
			@@@var_0_object:AddReply((int)542222, (int)44555, (int)44553);
			return 0;
		}
		var_167_bool = var_33_cvector == (int)44555;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_171(var_34_cvector, "Anger");
			@@@var_0_object:SetMessage((int)542224);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542225, (int)44554, (int)44556);
			@@@var_0_object:AddReply((int)542226, (int)44560, (int)44557);
			return 0;
		}
		var_177_bool = var_33_cvector == (int)44554;
		if(var_177_bool != 0) {
			var_178_string = "";
			func_171(var_34_cvector, "Anger");
			@@@var_0_object:SetMessage((int)542223);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542227, (int)44562, (int)44559);
			@@@var_0_object:AddReply((int)542232, (int)44562, (int)44564);
			return 0;
		}
		var_187_bool = var_33_cvector == (int)44562;
		if(var_187_bool != 0) {
			var_188_string = "";
			func_171(var_34_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)542230);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542231, (int)44560, (int)44563);
			@@@var_0_object:AddReply((int)542229, (int)44560, (int)44561);
			return 0;
		}
		var_197_bool = var_33_cvector == (int)44560;
		if(var_197_bool != 0) {
			var_198_string = "";
			func_171(var_34_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)542228);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525602, (int)26950, (int)26949);
			@@@var_0_object:AddReply((int)542238, (int)44568, (int)44573);
			return 0;
		}
		var_207_bool = var_33_cvector == (int)26950;
		if(var_207_bool != 0) {
			var_208_string = "";
			func_171(var_34_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)525603);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542233, (int)44568, (int)44567);
			@@@var_0_object:AddReply((int)542235, (int)44571, (int)44569);
			return 0;
		}
		var_217_bool = var_33_cvector == (int)44568;
		if(var_217_bool != 0) {
			var_218_string = "";
			func_171(var_34_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542234);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542236, (int)44571, (int)44570);
			return 0;
		}
		var_224_bool = var_33_cvector == (int)44571;
		if(var_224_bool != 0) {
			var_225_string = "";
			func_171(var_34_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542237);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525604, (int)-1, (int)26951);
			@@@var_0_object:AddReply((int)541131, (int)-1, (int)43252);
			return 0;
		}
		var_3_string = true;
		var_233_bool = 0;
		func_2579(var_233_bool);
		if(var_233_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc2";
	
}


task_4_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_bool, var_33_cvector, var_34_cvector)
{
	if((int)1 != 0) {
		func_2429();
		var_38_bool = var_33_cvector == (int)26887;
		if(var_38_bool != 0) {
			var_39_string = "";
			func_601(var_34_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525531);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525532, (int)44536, (int)26888);
			@@@var_0_object:AddReply((int)542207, (int)44538, (int)44535);
			return 0;
		}
		var_64_bool = var_33_cvector == (int)44536;
		if(var_64_bool != 0) {
			var_65_string = "";
			func_601(var_34_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542208);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542209, (int)44538, (int)44537);
			@@@var_0_object:AddReply((int)542214, (int)44538, (int)44543);
			return 0;
		}
		var_74_bool = var_33_cvector == (int)44538;
		if(var_74_bool != 0) {
			var_75_string = "";
			func_601(var_34_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542210);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542211, (int)44542, (int)44539);
			@@@var_0_object:AddReply((int)542212, (int)44548, (int)44541);
			return 0;
		}
		var_84_bool = var_33_cvector == (int)44548;
		if(var_84_bool != 0) {
			var_85_string = "";
			func_601(var_34_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542217);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542218, (int)44542, (int)44549);
			@@@var_0_object:AddReply((int)542219, (int)-1, (int)44550);
			return 0;
		}
		var_94_bool = var_33_cvector == (int)44542;
		if(var_94_bool != 0) {
			var_95_string = "";
			func_601(var_34_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542213);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542215, (int)-1, (int)44546);
			@@@var_0_object:AddReply((int)542216, (int)-1, (int)44547);
			return 0;
		}
		var_3_string = true;
		var_103_bool = 0;
		func_2579(var_103_bool);
		if(var_103_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x270";
	
}


task_6_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_bool, var_33_cvector, var_34_cvector)
{
	if((int)1 != 0) {
		func_2429();
		var_38_bool = var_34_cvector == (int)28232;
		if(var_38_bool != 0) {
			var_39_object = Obj(); var_40_object = Obj();
			var_39_object = var_1_object;
			var_40_object = var_0_object;
			func_2604();
		}
		var_44_bool = var_33_cvector == (int)28231;
		if(var_44_bool != 0) {
			var_45_string = "";
			func_928(var_34_cvector, "Fear");
			@@@var_0_object:SetMessage((int)526939);
			@@@var_0_object:ClearReplies();
			var_63_bool = 0;
			var_63_bool = 1;
			var_64_bool = 0;
			var_64_bool = 0;
			var_65_bool = 0; var_66_object = Obj();
			var_66_object = var_1_object;
			func_2654(var_66_object);
			if(var_65_bool != 0) {
				var_73_bool = 0; var_74_object = Obj();
				var_74_object = var_1_object;
				func_2666(var_74_object);
				if(var_73_bool != 0) {
					var_64_bool = 1;
				}
			}
			if(var_64_bool != 1) {
				var_79_bool = 0;
				var_79_bool = 0;
				var_80_bool = 0; var_81_object = Obj();
				var_81_object = var_1_object;
				func_2678(var_81_object);
				if(var_80_bool != 0) {
					var_86_bool = 0; var_87_object = Obj();
					var_87_object = var_1_object;
					func_2666(var_87_object);
					if(var_86_bool != 0) {
						var_79_bool = 1;
					}
				}
				if(var_79_bool != 1) {
					var_63_bool = 0;
				}
			}
			if(var_63_bool != 0) {
				@@@var_0_object:AddReply((int)526940, (int)28233, (int)28232);
			}
			@@@var_0_object:AddReply((int)526945, (int)-1, (int)28237);
			return 0;
		}
		var_95_bool = var_33_cvector == (int)28233;
		if(var_95_bool != 0) {
			var_96_string = "";
			func_928(var_34_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526941);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526942, (int)28235, (int)28234);
			@@@var_0_object:AddReply((int)527965, (int)29330, (int)29322);
			return 0;
		}
		var_105_bool = var_33_cvector == (int)29330;
		if(var_105_bool != 0) {
			var_106_string = "";
			func_928(var_34_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527973);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527974, (int)29332, (int)29331);
			return 0;
		}
		var_112_bool = var_33_cvector == (int)29332;
		if(var_112_bool != 0) {
			var_113_string = "";
			func_928(var_34_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527975);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527976, (int)29321, (int)29333);
			return 0;
		}
		var_119_bool = var_33_cvector == (int)28235;
		if(var_119_bool != 0) {
			var_120_string = "";
			func_928(var_34_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)526943);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526944, (int)29321, (int)28236);
			return 0;
		}
		var_126_bool = var_33_cvector == (int)29321;
		if(var_126_bool != 0) {
			var_127_string = "";
			func_928(var_34_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)527964);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527966, (int)29324, (int)29323);
			return 0;
		}
		var_133_bool = var_33_cvector == (int)29324;
		if(var_133_bool != 0) {
			var_134_string = "";
			func_928(var_34_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)527967);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527969, (int)29327, (int)29326);
			@@@var_0_object:AddReply((int)527968, (int)-1, (int)29325);
			return 0;
		}
		var_143_bool = var_33_cvector == (int)29327;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_928(var_34_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)527970);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527971, (int)-1, (int)29328);
			return 0;
		}
		var_3_string = true;
		var_149_bool = 0;
		func_2579(var_149_bool);
		if(var_149_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x3b7";
	
}


task_8_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_bool, var_33_cvector, var_34_cvector)
{
	if((int)1 != 0) {
		func_2429();
		var_38_bool = var_34_cvector == (int)30380;
		if(var_38_bool != 0) {
			var_39_object = Obj(); var_40_object = Obj();
			var_39_object = var_1_object;
			var_40_object = var_0_object;
			func_2610();
		}
		var_73_bool = var_33_cvector == (int)30373;
		if(var_73_bool != 0) {
			var_74_string = "";
			func_1317(var_34_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528940);
			@@@var_0_object:ClearReplies();
			var_92_bool = 0; var_93_object = Obj();
			var_93_object = var_1_object;
			func_2690(var_93_object);
			if(var_92_bool != 0) {
				@@@var_0_object:AddReply((int)528943, (int)30377, (int)30376);
			}
			@@@var_0_object:AddReply((int)528941, (int)-1, (int)30374);
			@@@var_0_object:AddReply((int)528942, (int)-1, (int)30375);
			return 0;
		}
		var_110_bool = var_33_cvector == (int)30377;
		if(var_110_bool != 0) {
			var_111_string = "";
			func_1317(var_34_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)528944);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528945, (int)30379, (int)30378);
			@@@var_0_object:AddReply((int)528948, (int)30382, (int)30381);
			return 0;
		}
		var_120_bool = var_33_cvector == (int)30382;
		if(var_120_bool != 0) {
			var_121_string = "";
			func_1317(var_34_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)528949);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528950, (int)30384, (int)30383);
			return 0;
		}
		var_127_bool = var_33_cvector == (int)30384;
		if(var_127_bool != 0) {
			var_128_string = "";
			func_1317(var_34_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528951);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528952, (int)30391, (int)30385);
			@@@var_0_object:AddReply((int)528954, (int)30386, (int)30387);
			return 0;
		}
		var_137_bool = var_33_cvector == (int)30386;
		if(var_137_bool != 0) {
			var_138_string = "";
			func_1317(var_34_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)528953);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528955, (int)30389, (int)30388);
			@@@var_0_object:AddReply((int)528957, (int)30389, (int)30390);
			return 0;
		}
		var_147_bool = var_33_cvector == (int)30389;
		if(var_147_bool != 0) {
			var_148_string = "";
			func_1317(var_34_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)528956);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528960, (int)30379, (int)30394);
			return 0;
		}
		var_154_bool = var_33_cvector == (int)30391;
		if(var_154_bool != 0) {
			var_155_string = "";
			func_1317(var_34_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528958);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528959, (int)30379, (int)30392);
			return 0;
		}
		var_161_bool = var_33_cvector == (int)30379;
		if(var_161_bool != 0) {
			var_162_string = "";
			func_1317(var_34_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528946);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528947, (int)-1, (int)30380);
			return 0;
		}
		var_3_string = true;
		var_167_bool = 0;
		func_2579(var_167_bool);
		if(var_167_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x53c";
	
}


task_10_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_bool, var_33_cvector, var_34_cvector)
{
	if((int)1 != 0) {
		func_2429();
		var_38_bool = var_33_cvector == (int)36906;
		if(var_38_bool != 0) {
			var_39_string = "";
			func_1684(var_34_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535231);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535232, (int)36953, (int)36907);
			@@@var_0_object:AddReply((int)535233, (int)-1, (int)36908);
			@@@var_0_object:AddReply((int)535280, (int)-1, (int)36956);
			return 0;
		}
		var_67_bool = var_33_cvector == (int)36953;
		if(var_67_bool != 0) {
			var_68_string = "";
			func_1684(var_34_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535277);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535278, (int)36957, (int)36954);
			@@@var_0_object:AddReply((int)535279, (int)36957, (int)36955);
			return 0;
		}
		var_77_bool = var_33_cvector == (int)36957;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_1684(var_34_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535281);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535282, (int)-1, (int)36958);
			@@@var_0_object:AddReply((int)535283, (int)-1, (int)36959);
			return 0;
		}
		var_3_string = true;
		var_86_bool = 0;
		func_2579(var_86_bool);
		if(var_86_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x6ab";
	
}


task_12_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_bool, var_33_cvector, var_34_cvector)
{
	if((int)1 != 0) {
		func_2429();
		var_38_bool = var_33_cvector == (int)42554;
		if(var_38_bool != 0) {
			var_39_string = "";
			func_1938(var_34_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540545);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540546, (int)-1, (int)42555);
			@@@var_0_object:AddReply((int)540798, (int)-1, (int)42847);
			return 0;
		}
		var_3_string = true;
		var_63_bool = 0;
		func_2579(var_63_bool);
		if(var_63_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x7a9";
	
}


task_13_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_bool, var_31_cvector, var_32_cvector, var_33_string)
{
	var_35_bool = var_33_string == "icot_viktor_NPC_Trigger";
	if(var_35_bool != 0) {
		func_2056(var_33_string);
	}
	return 0;
}


task_13_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_bool, var_31_cvector, var_32_cvector)
{
	TaskCall(0);
	func_0();
	TaskReturn();
	func_2045(var_30_bool, var_31_cvector, var_32_cvector);
	return 0;
}


task_13_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_bool, var_31_cvector, var_32_cvector, var_33_object)
{
	var_34_bool = 0; var_35_bool = 0;
	var_36_object = var_0_object;
	if(var_36_object != 0) {
		IsOverrideActive(var_35_bool);
		var_37_bool = var_35_bool == 0; //@nz
		if(var_37_bool != 0) {
			EventDisable(0);
			var_38_bool = 0; var_39_object = Obj();
			var_33_object = var_39_object;
			func_2144(var_38_bool, var_39_object);
			EventEnable(0);
			var_52_object = Obj();
			var_33_object = var_52_object;
			func_2773(var_52_object);
		}
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_bool, var_31_cvector, var_32_cvector)
{
	var_33_bool = GlobalVars[1];
	GlobalVars[1] = (bool)1;
	func_2017(var_30_bool, var_31_cvector, var_32_cvector);
	return 0;
}


func_0()
{
	
Label_0:
	Hold();
	var_38_bool = 0;
	func_2153(var_38_bool);
	var_39_bool = var_38_bool == 0; //@nz
	if(var_39_bool == 1) goto Label_0;
	return 0;
}


func_1540(var_0_object, var_508_int, var_509_object)
{
	var_511_object = Obj(); var_512_bool = 0; var_513_int = 0; var_514_bool = 0; var_515_object = Obj(); var_516_bool = 0; var_517_int = 0; var_518_bool = 0;
	var_0_object = var_509_object;
	var_519_bool = 0; var_520_object = Obj(); var_521_float = 0;
	var_509_object = var_520_object;
	func_2158(var_519_bool, var_520_object, (float)70.0);
	var_522_bool = var_519_bool == 0; //@nz
	if(var_522_bool != 0) {
		var_508_int = -2;
		return 8;
	}
	CreateDialog(var_515_object);
	var_523_int = 0;
	func_2573(var_523_int);
	@@var_515_object:SetNPCName(var_523_int);
	var_524_int = 0;
	func_2571(var_524_int);
	@@var_515_object:SetNPCDescription(var_524_int);
	var_525_string = "";
	func_2575(var_525_string);
	@@var_515_object:SetPhoto(var_525_string);
	var_526_string = "";
	func_2577(var_526_string);
	@@var_515_object:SetPhoto2(var_526_string);
	var_527_int = 0;
	func_2756(var_527_int);
	@@var_515_object:SetPlayerName(var_527_int);
	IsOverrideActive(var_516_bool);
	var_528_bool = var_516_bool;
	if(var_528_bool != 0) {
		var_508_int = -2;
		return 8;
	}
	DoDialog(var_515_object);
	var_529_bool = 0; var_530_object = Obj();
	func_2436(Obj());
	var_531_object = var_530_object;
	func_2245(var_529_bool, var_530_object);
	var_532_object = Obj(); var_533_object = Obj();
	var_509_object = var_532_object;
	var_515_object = var_533_object;
	TaskCall(10);
	func_1621(var_534_object, var_535_object, var_536_string, var_537_bool, var_532_object, var_533_object);
	TaskReturn();
	@@var_515_object:IsDialogEnd(var_518_bool);
	
Label_1603:
	var_565_bool = var_518_bool == 0; //@nz
	if(var_565_bool != 0) {
		sync();
		@@var_515_object:IsDialogEnd(var_518_bool);
		goto Label_1603;
	}
	var_509_object = Obj();
	func_2227();
	StopDialog(var_515_object);
	@@var_515_object:GetReturnValue((int)-1);
	var_517_int = var_508_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2565(var_281_bool, var_282_int)
{
	var_283_int = 0;
	func_2556(var_283_int);
	var_281_bool = var_283_int == var_282_int;
	return 0;
}


func_1799(var_0_object, var_567_int, var_568_object)
{
	var_570_object = Obj(); var_571_bool = 0; var_572_int = 0; var_573_bool = 0; var_574_object = Obj(); var_575_bool = 0; var_576_int = 0; var_577_bool = 0;
	var_0_object = var_568_object;
	var_578_bool = 0; var_579_object = Obj(); var_580_float = 0;
	var_568_object = var_579_object;
	func_2158(var_578_bool, var_579_object, (float)70.0);
	var_581_bool = var_578_bool == 0; //@nz
	if(var_581_bool != 0) {
		var_567_int = -2;
		return 8;
	}
	CreateDialog(var_574_object);
	var_582_int = 0;
	func_2573(var_582_int);
	@@var_574_object:SetNPCName(var_582_int);
	var_583_int = 0;
	func_2571(var_583_int);
	@@var_574_object:SetNPCDescription(var_583_int);
	var_584_string = "";
	func_2575(var_584_string);
	@@var_574_object:SetPhoto(var_584_string);
	var_585_string = "";
	func_2577(var_585_string);
	@@var_574_object:SetPhoto2(var_585_string);
	var_586_int = 0;
	func_2756(var_586_int);
	@@var_574_object:SetPlayerName(var_586_int);
	IsOverrideActive(var_575_bool);
	var_587_bool = var_575_bool;
	if(var_587_bool != 0) {
		var_567_int = -2;
		return 8;
	}
	DoDialog(var_574_object);
	var_588_bool = 0; var_589_object = Obj();
	func_2436(Obj());
	var_590_object = var_589_object;
	func_2245(var_588_bool, var_589_object);
	var_591_object = Obj(); var_592_object = Obj();
	var_568_object = var_591_object;
	var_574_object = var_592_object;
	TaskCall(12);
	func_1880(var_593_object, var_594_object, var_595_string, var_596_bool, var_591_object, var_592_object);
	TaskReturn();
	@@var_574_object:IsDialogEnd(var_577_bool);
	
Label_1862:
	var_621_bool = var_577_bool == 0; //@nz
	if(var_621_bool != 0) {
		sync();
		@@var_574_object:IsDialogEnd(var_577_bool);
		goto Label_1862;
	}
	var_568_object = Obj();
	func_2227();
	StopDialog(var_574_object);
	@@var_574_object:GetReturnValue((int)-1);
	var_576_int = var_567_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2056(var_0_object)
{
	var_36_bool = var_0_object == 0; //@nz
	if(var_36_bool != 0) {
		var_0_object = true;
		PlayAnimation("all", "stand");
		WaitForAnimEnd();
	}
	return 0;
}


func_2571(var_115_int)
{
	var_115_int = 515554;
	return 0;
}


func_2573(var_114_int)
{
	var_114_int = 502879;
	return 0;
}


func_13(var_0_object, var_284_int, var_285_object)
{
	var_287_object = Obj(); var_288_bool = 0; var_289_int = 0; var_290_bool = 0; var_291_object = Obj(); var_292_bool = 0; var_293_int = 0; var_294_bool = 0;
	var_0_object = var_285_object;
	var_295_bool = 0; var_296_object = Obj(); var_297_float = 0;
	var_285_object = var_296_object;
	func_2158(var_295_bool, var_296_object, (float)70.0);
	var_298_bool = var_295_bool == 0; //@nz
	if(var_298_bool != 0) {
		var_284_int = -2;
		return 8;
	}
	CreateDialog(var_291_object);
	var_299_int = 0;
	func_2573(var_299_int);
	@@var_291_object:SetNPCName(var_299_int);
	var_300_int = 0;
	func_2571(var_300_int);
	@@var_291_object:SetNPCDescription(var_300_int);
	var_301_string = "";
	func_2575(var_301_string);
	@@var_291_object:SetPhoto(var_301_string);
	var_302_string = "";
	func_2577(var_302_string);
	@@var_291_object:SetPhoto2(var_302_string);
	var_303_int = 0;
	func_2756(var_303_int);
	@@var_291_object:SetPlayerName(var_303_int);
	IsOverrideActive(var_292_bool);
	var_304_bool = var_292_bool;
	if(var_304_bool != 0) {
		var_284_int = -2;
		return 8;
	}
	DoDialog(var_291_object);
	var_305_bool = 0; var_306_object = Obj();
	func_2436(Obj());
	var_307_object = var_306_object;
	func_2245(var_305_bool, var_306_object);
	var_308_object = Obj(); var_309_object = Obj();
	var_285_object = var_308_object;
	var_291_object = var_309_object;
	TaskCall(2);
	func_94(var_310_object, var_311_object, var_312_string, var_313_bool, var_308_object, var_309_object);
	TaskReturn();
	@@var_291_object:IsDialogEnd(var_294_bool);
	
Label_76:
	var_356_bool = var_294_bool == 0; //@nz
	if(var_356_bool != 0) {
		sync();
		@@var_291_object:IsDialogEnd(var_294_bool);
		goto Label_76;
	}
	var_285_object = Obj();
	func_2227();
	StopDialog(var_291_object);
	@@var_291_object:GetReturnValue((int)-1);
	var_293_int = var_284_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2575(var_116_string)
{
	var_116_string = "ui/NPC_Viktor.png";
	return 0;
}


func_2577(var_117_string)
{
	var_117_string = "ui/NPC_Viktor_b.png";
	return 0;
}


func_2579(var_109_bool)
{
	var_109_bool = 1;
	return 0;
}


func_2581(var_72_object)
{
	var_74_bool = 0; var_75_object = Obj(); var_76_float = 0;
	var_72_object = var_75_object;
	func_2499(var_74_bool, var_75_object, (float)0.05000000074505806);
	return 0;
}


func_2588()
{
	SetVariable("ook3Viktor1", (int)1);
	return 0;
}


func_543(var_0_object, var_1_object, var_2_object, var_3_string, var_222_object, var_223_object)
{
	var_0_object = var_223_object;
	var_1_object = var_222_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_229_string = "";
		func_601(var_223_object, "Neutral");
		@@@var_0_object:SetMessage((int)525531);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)525532, (int)44536, (int)26888);
		@@@var_0_object:AddReply((int)542207, (int)44538, (int)44535);
		goto Label_571;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x223";
	}
Label_571:
	var_253_bool = 0;
	func_2579(var_253_bool);
	if(var_253_bool != 0) {

	Label_575:
		lshWaitForAnimEnd();
		var_254_string = var_3_string;
		if(var_254_string != 0) {
		} else {
			var_255_string = "";
			var_255_string = var_2_object;
			func_2383(var_255_string);
			goto Label_575;
	}
		PlayAnimation("all", "idle");

	Label_590:
		WaitForAnimEnd();
		var_268_string = var_3_string;
		if(var_268_string != 0) {
			goto Label_600;
		}
		PlayAnimation("all", "idle");
		goto Label_590;
	}
	goto Label_600;
	
Label_600:
	return 0;
	
}


func_2594(var_49_object)
{
	Trace("money2000 is given");
	var_52_object = Obj(); var_53_int = 0;
	var_49_object = var_52_object;
	func_2480(var_52_object, (int)2000);
	return 0;
}


func_2340(var_169_bool, var_170_object)
{
	var_171_string = ""; var_172_int = 0; var_173_bool = 0; var_174_int = 0; var_175_string = ""; var_176_string = ""; var_177_int = 0; var_178_bool = 0; var_179_int = 0; var_180_string = "";
	var_182_int = 0;
	func_2556(var_182_int);
	var_188_int = "d" + var_182_int;
	var_176_string = var_188_int + "m";
	var_177_int = 0;
	
Label_2349:
	if((int)1 != 0) {
		var_192_int = var_177_int + (int)1;
		var_193_int = var_176_string + var_192_int;
		@@var_170_object:HasProperty(var_193_int, var_178_bool);
		var_194_bool = var_178_bool == 0; //@nz
		if(var_194_bool != 0) {
		} else {
			var_177_int = var_177_int + (int)1;
			goto Label_2349;
		}
	}
	var_195_bool = var_177_int == 0; //@nz
	if(var_195_bool != 0) {
		var_169_bool = 0;
		return 10;
	}
	var_179_int = 0;
	var_197_bool = var_177_int > (int)1;
	if(var_197_bool != 0) {
		irand(var_179_int, var_177_int);
	}
	var_199_int = var_179_int + (int)1;
	var_200_int = var_176_string + var_199_int;
	@@var_170_object:GetProperty(var_200_int, var_180_string);
	var_201_bool = 0; var_202_string = "";
	var_180_string = var_202_string;
	func_2414(var_201_bool, var_202_string);
	var_201_bool = var_169_bool;
	return 10;
	
}


func_1317(var_2_object, var_391_string)
{
	var_392_bool = 0;
	func_2579(var_392_bool);
	var_393_bool = var_392_bool == 0; //@nz
	if(var_393_bool != 0) {
		return 0;
	}
	var_394_bool = var_391_string == var_2_object;
	if(var_394_bool != 0) {
		return 0;
	}
	var_395_string = ""; var_396_bool = 0;
	var_391_string = var_395_string;
	var_398_bool = var_391_string == "";
	if(var_398_bool != 0) {
		var_396_bool = 0;
	} else {
		var_396_bool = 1;
	}
	func_2399(var_395_string, var_396_bool);
	var_2_object = var_391_string;
	return 0;
	
}


func_2604()
{
	SetVariable("ook10Viktor1", (int)1);
	return 0;
}


func_2093(var_93_bool, var_94_object, var_95_string)
{
	var_96_bool = 0; var_97_bool = 0;
	var_100_bool = IsFuncExist(var_94_object, "HasProperty", (int)2);
	var_101_bool = var_100_bool == 0; //@nz
	if(var_101_bool != 0) {
		var_93_bool = 0;
		return 2;
	}
	@@var_94_object:HasProperty(var_95_string, var_97_bool);
	var_97_bool = var_93_bool;
	return 2;
}


func_2610()
{
	SetVariable("k9q01", (int)5);
	func_2702();
	var_66_bool = 0; var_67_string = ""; var_68_string = "";
	func_2544(var_66_bool, "quest_k9_01", "init_mnogogrannik");
	return 0;
}


func_2105(var_85_bool, var_86_object, var_87_string, var_88_float, var_89_float, var_90_float)
{
	var_91_float = 0; var_92_float = 0;
	var_93_bool = 0; var_94_object = Obj(); var_95_string = "";
	var_86_object = var_94_object;
	var_87_string = var_95_string;
	func_2093(var_93_bool, var_94_object, var_95_string);
	var_102_bool = var_93_bool == 0; //@nz
	if(var_102_bool != 0) {
		var_85_bool = 0;
		return 2;
	}
	@@var_86_object:GetProperty(var_87_string, var_92_float);
	var_103_float = 0; var_104_float = 0; var_105_float = 0; var_106_float = 0;
	var_104_float = var_92_float + var_88_float;
	var_89_float = var_105_float;
	var_90_float = var_106_float;
	func_2452(var_103_float, var_104_float, var_105_float, var_106_float);
	@@var_86_object:SetProperty(var_87_string, var_103_float);
	var_85_bool = 1;
	return 2;
}


func_2624()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_2630(var_325_bool)
{
	var_327_int = 0; var_328_string = "";
	func_2463(var_327_int, "k3q03");
	var_332_bool = var_327_int == (int)1000;
	if(var_332_bool != 0) {
		var_325_bool = 1;
		return 0;
	}
	var_325_bool = 0;
	return 0;
}


func_838(var_0_object, var_1_object, var_2_object, var_3_string, var_451_object, var_452_object)
{
	var_0_object = var_452_object;
	var_1_object = var_451_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_458_string = "";
		func_928(var_452_object, "Fear");
		@@@var_0_object:SetMessage((int)526939);
		@@@var_0_object:ClearReplies();
		var_467_bool = 0;
		var_467_bool = 1;
		var_468_bool = 0;
		var_468_bool = 0;
		var_469_bool = 0; var_470_object = Obj();
		var_470_object = var_1_object;
		func_2654(var_470_object);
		if(var_469_bool != 0) {
			var_475_bool = 0; var_476_object = Obj();
			var_476_object = var_1_object;
			func_2666(var_476_object);
			if(var_475_bool != 0) {
				var_468_bool = 1;
			}
		}
		if(var_468_bool != 1) {
			var_481_bool = 0;
			var_481_bool = 0;
			var_482_bool = 0; var_483_object = Obj();
			var_483_object = var_1_object;
			func_2678(var_483_object);
			if(var_482_bool != 0) {
				var_488_bool = 0; var_489_object = Obj();
				var_489_object = var_1_object;
				func_2666(var_489_object);
				if(var_488_bool != 0) {
					var_481_bool = 1;
				}
			}
			if(var_481_bool != 1) {
				var_467_bool = 0;
			}
		}
		if(var_467_bool != 0) {
			@@@var_0_object:AddReply((int)526940, (int)28233, (int)28232);
		}
		@@@var_0_object:AddReply((int)526945, (int)-1, (int)28237);
		goto Label_898;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x34a";
	}
Label_898:
	var_496_bool = 0;
	func_2579(var_496_bool);
	if(var_496_bool != 0) {

	Label_902:
		lshWaitForAnimEnd();
		var_497_string = var_3_string;
		if(var_497_string != 0) {
		} else {
			var_498_string = "";
			var_498_string = var_2_object;
			func_2383(var_498_string);
			goto Label_902;
	}
		PlayAnimation("all", "idle");

	Label_917:
		WaitForAnimEnd();
		var_501_string = var_3_string;
		if(var_501_string != 0) {
			goto Label_927;
		}
		PlayAnimation("all", "idle");
		goto Label_917;
	}
	goto Label_927;
	
Label_927:
	return 0;
	
}


func_2383(var_43_string)
{
	var_44_bool = 0; var_45_float = 0; var_46_float = 0; var_47_bool = 0; var_48_float = 0; var_49_float = 0;
	lshHasAnimation(var_47_bool, var_43_string);
	var_50_bool = var_47_bool;
	if(var_50_bool != 0) {
		lshGetAnimTimes(var_43_string, var_48_float, var_49_float);
		lshPlayAnimation(var_48_float, var_49_float, (bool)0);
	} else {
		var_53_int = "Can't find lsh animation : " + var_43_string;
		Trace(var_53_int);
	}
	return 6;
	
}


func_2127(var_56_object, var_57_string, var_58_int)
{
	var_59_int = 0; var_60_int = 0;
	@@var_56_object:GetProperty(var_57_string, var_60_int);
	var_61_int = var_60_int + var_58_int;
	@@var_56_object:SetProperty(var_57_string, var_61_int);
	return 2;
}


func_2642(var_333_bool)
{
	var_335_int = 0; var_336_string = "";
	func_2463(var_335_int, "ook3Viktor1");
	var_338_bool = var_335_int == (int)0;
	if(var_338_bool != 0) {
		var_333_bool = 1;
		return 0;
	}
	var_333_bool = 0;
	return 0;
}


func_1621(var_0_object, var_1_object, var_2_object, var_3_string, var_532_object, var_533_object)
{
	var_0_object = var_533_object;
	var_1_object = var_532_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_539_string = "";
		func_1684(var_533_object, "Neutral");
		@@@var_0_object:SetMessage((int)535231);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535232, (int)36953, (int)36907);
		@@@var_0_object:AddReply((int)535233, (int)-1, (int)36908);
		@@@var_0_object:AddReply((int)535280, (int)-1, (int)36956);
		goto Label_1654;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x659";
	}
Label_1654:
	var_557_bool = 0;
	func_2579(var_557_bool);
	if(var_557_bool != 0) {

	Label_1658:
		lshWaitForAnimEnd();
		var_558_string = var_3_string;
		if(var_558_string != 0) {
		} else {
			var_559_string = "";
			var_559_string = var_2_object;
			func_2383(var_559_string);
			goto Label_1658;
	}
		PlayAnimation("all", "idle");

	Label_1673:
		WaitForAnimEnd();
		var_562_string = var_3_string;
		if(var_562_string != 0) {
			goto Label_1683;
		}
		PlayAnimation("all", "idle");
		goto Label_1673;
	}
	goto Label_1683;
	
Label_1683:
	return 0;
	
}


func_2134(var_42_bool, var_43_cvector)
{
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_bool = 0;
	GetPosition(var_47_cvector);
	var_48_cvector = var_43_cvector - var_47_cvector;
	var_50_float = GetByIndex(var_48_cvector, 0);
	var_51_float = GetByIndex(var_48_cvector, 2);
	Rotate(var_50_float, var_51_float, var_49_bool);
	var_49_bool = var_42_bool;
	return 6;
}


func_1880(var_0_object, var_1_object, var_2_object, var_3_string, var_591_object, var_592_object)
{
	var_0_object = var_592_object;
	var_1_object = var_591_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_598_string = "";
		func_1938(var_592_object, "Neutral");
		@@@var_0_object:SetMessage((int)540545);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540546, (int)-1, (int)42555);
		@@@var_0_object:AddReply((int)540798, (int)-1, (int)42847);
		goto Label_1908;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x75c";
	}
Label_1908:
	var_613_bool = 0;
	func_2579(var_613_bool);
	if(var_613_bool != 0) {

	Label_1912:
		lshWaitForAnimEnd();
		var_614_string = var_3_string;
		if(var_614_string != 0) {
		} else {
			var_615_string = "";
			var_615_string = var_2_object;
			func_2383(var_615_string);
			goto Label_1912;
	}
		PlayAnimation("all", "idle");

	Label_1927:
		WaitForAnimEnd();
		var_618_string = var_3_string;
		if(var_618_string != 0) {
			goto Label_1937;
		}
		PlayAnimation("all", "idle");
		goto Label_1927;
	}
	goto Label_1937;
	
Label_1937:
	return 0;
	
}


func_601(var_2_object, var_229_string)
{
	var_230_bool = 0;
	func_2579(var_230_bool);
	var_231_bool = var_230_bool == 0; //@nz
	if(var_231_bool != 0) {
		return 0;
	}
	var_232_bool = var_229_string == var_2_object;
	if(var_232_bool != 0) {
		return 0;
	}
	var_233_string = ""; var_234_bool = 0;
	var_229_string = var_233_string;
	var_236_bool = var_229_string == "";
	if(var_236_bool != 0) {
		var_234_bool = 0;
	} else {
		var_234_bool = 1;
	}
	func_2399(var_233_string, var_234_bool);
	var_2_object = var_229_string;
	return 0;
	
}


func_94(var_0_object, var_1_object, var_2_object, var_3_string, var_308_object, var_309_object)
{
	var_0_object = var_309_object;
	var_1_object = var_308_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_315_string = "";
		func_171(var_309_object, "Confusion");
		@@@var_0_object:SetMessage((int)525599);
		@@@var_0_object:ClearReplies();
		var_324_bool = 0;
		var_324_bool = 0;
		var_325_bool = 0; var_326_object = Obj();
		var_326_object = var_1_object;
		func_2630(var_326_object);
		if(var_325_bool != 0) {
			var_333_bool = 0; var_334_object = Obj();
			var_334_object = var_1_object;
			func_2642(var_334_object);
			if(var_333_bool != 0) {
				var_324_bool = 1;
			}
		}
		if(var_324_bool != 0) {
			@@@var_0_object:AddReply((int)525600, (int)26948, (int)26947);
		}
		@@@var_0_object:AddReply((int)525605, (int)-1, (int)26952);
		@@@var_0_object:AddReply((int)542220, (int)-1, (int)44551);
		goto Label_141;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_141:
	var_348_bool = 0;
	func_2579(var_348_bool);
	if(var_348_bool != 0) {

	Label_145:
		lshWaitForAnimEnd();
		var_349_string = var_3_string;
		if(var_349_string != 0) {
		} else {
			var_350_string = "";
			var_350_string = var_2_object;
			func_2383(var_350_string);
			goto Label_145;
	}
		PlayAnimation("all", "idle");

	Label_160:
		WaitForAnimEnd();
		var_353_string = var_3_string;
		if(var_353_string != 0) {
			goto Label_170;
		}
		PlayAnimation("all", "idle");
		goto Label_160;
	}
	goto Label_170;
	
Label_170:
	return 0;
	
}


func_2399(var_233_string, var_234_bool)
{
	var_237_bool = 0; var_238_float = 0; var_239_float = 0; var_240_bool = 0; var_241_float = 0; var_242_float = 0;
	lshHasAnimation(var_240_bool, var_233_string);
	var_243_bool = var_240_bool;
	if(var_243_bool != 0) {
		lshGetAnimTimes(var_233_string, var_241_float, var_242_float);
		lshPlayAnimation(var_241_float, var_242_float, var_234_bool);
	} else {
		var_245_int = "Can't find lsh animation : " + var_233_string;
		Trace(var_245_int);
	}
	return 6;
	
}


func_2654(var_469_bool)
{
	var_471_int = 0; var_472_string = "";
	func_2463(var_471_int, "k10q01");
	var_474_bool = var_471_int == (int)1;
	if(var_474_bool != 0) {
		var_469_bool = 1;
		return 0;
	}
	var_469_bool = 0;
	return 0;
}


func_2144(var_38_bool, var_39_object)
{
	var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0);
	@@var_39_object:GetPosition(var_41_cvector);
	var_42_bool = 0; var_43_cvector = CVector(0,0,0);
	var_41_cvector = var_43_cvector;
	func_2134(var_42_bool, var_43_cvector);
	var_42_bool = var_38_bool;
	return 2;
}


func_2153(var_34_bool)
{
	var_35_bool = 0; var_36_bool = 0;
	IsLoaded(var_36_bool);
	var_36_bool = var_34_bool;
	return 2;
}


func_2666(var_475_bool)
{
	var_477_int = 0; var_478_string = "";
	func_2463(var_477_int, "ook10Viktor1");
	var_480_bool = var_477_int == (int)0;
	if(var_480_bool != 0) {
		var_475_bool = 1;
		return 0;
	}
	var_475_bool = 0;
	return 0;
}


func_2158(var_66_bool, var_67_object, var_68_float)
{
	var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_bool = 0; var_77_bool = 0; var_78_float = 0; var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_bool = 0; var_86_bool = 0;
	@@var_67_object:GetPosition(var_79_cvector);
	@@var_67_object:GetEyesHeight(var_78_float);
	var_87_float = GetByIndex(var_79_cvector, 1);
	var_87_float = var_87_float + var_78_float;
	SetByIndex(var_79_cvector, 1) = var_87_float;
	GetPosition(var_80_cvector);
	GetEyesHeight(var_78_float);
	var_88_float = GetByIndex(var_80_cvector, 1);
	var_88_float = var_88_float + var_78_float;
	SetByIndex(var_80_cvector, 1) = var_88_float;
	var_81_cvector = var_79_cvector - var_80_cvector;
	var_89_float = GetByIndex(var_81_cvector, 1);
	SetByIndex(var_81_cvector, 1) = (float)0;
	var_90_int = var_81_cvector | var_81_cvector;
	var_91_float = sqrt(var_90_int);
	var_81_cvector = var_81_cvector / var_91_float;
	var_82_cvector = -var_81_cvector;
	var_92_float = var_81_cvector * var_68_float;
	var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0);
	var_94_cvector = var_82_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2442(var_93_cvector, var_94_cvector);
	var_102_float = var_93_cvector * (int)25;
	var_103_int = var_92_float + var_102_float;
	var_83_cvector = var_103_int - CVector(0.0, 10.0, 0.0);
	var_84_cvector = var_80_cvector + var_83_cvector;
	IsOverrideActive(var_85_bool);
	var_105_bool = var_85_bool;
	if(var_105_bool != 0) {
		var_66_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_84_cvector, var_82_cvector, (bool)1);
	var_107_float = GetByIndex(var_83_cvector, 0);
	var_108_float = GetByIndex(var_83_cvector, 2);
	Rotate(var_107_float, var_108_float);
	var_109_bool = 0;
	func_2579(var_109_bool);
	if(var_109_bool != 0) {
	} else {
		HasAnimationTrack(var_86_bool, "head");
		var_111_bool = var_86_bool;
		if(var_111_bool == 0) goto Label_2221;
		LookAsyncCamera("head");
	}
Label_2221:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_66_bool = 1;
	return 18;
	
}


func_2414(var_161_bool, var_162_string)
{
	var_163_bool = 0; var_164_bool = 0;
	var_165_bool = 0;
	func_2579(var_165_bool);
	if(var_165_bool != 0) {
		lshHasSpeech(var_164_bool, var_162_string);
		var_166_bool = var_164_bool;
		if(var_166_bool != 0) {
			lshPlaySpeech(var_162_string);
			var_161_bool = 1;
			return 2;
		}
	}
	var_161_bool = 0;
	return 2;
}


func_2678(var_482_bool)
{
	var_484_int = 0; var_485_string = "";
	func_2463(var_484_int, "k10q01");
	var_487_bool = var_484_int == (int)2;
	if(var_487_bool != 0) {
		var_482_bool = 1;
		return 0;
	}
	var_482_bool = 0;
	return 0;
}


func_2429()
{
	var_36_bool = 0;
	func_2579(var_36_bool);
	if(var_36_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2690(var_400_bool)
{
	var_402_int = 0; var_403_string = "";
	func_2463(var_402_int, "k9q01");
	var_405_bool = var_402_int == (int)4;
	if(var_405_bool != 0) {
		var_400_bool = 1;
		return 0;
	}
	var_400_bool = 0;
	return 0;
}


func_2436(var_129_object)
{
	var_130_object = Obj(); var_131_object = Obj();
	self(var_131_object);
	var_131_object = var_129_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2442(var_93_cvector, var_94_cvector)
{
	var_96_float = 0; var_97_float = 0;
	var_98_int = var_94_cvector | var_94_cvector;
	var_97_float = sqrt(var_98_int);
	var_99_float = 9.999999974752427e-07;
	var_100_bool = var_97_float < var_99_float;
	if(var_100_bool != 0) {
		var_93_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_93_cvector = var_94_cvector / var_97_float;
	return 2;
}


func_2702()
{
	var_43_object = Obj(); var_44_object = Obj();
	CreateDiaryEntry(var_44_object, (int)522, (int)1, (int)529814);
	var_48_bool = 0; var_49_object = Obj(); var_50_int = 0;
	var_44_object = var_49_object;
	func_2728(var_48_bool, var_49_object, (int)517);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1168(var_0_object, var_360_int, var_361_object)
{
	var_363_object = Obj(); var_364_bool = 0; var_365_int = 0; var_366_bool = 0; var_367_object = Obj(); var_368_bool = 0; var_369_int = 0; var_370_bool = 0;
	var_0_object = var_361_object;
	var_371_bool = 0; var_372_object = Obj(); var_373_float = 0;
	var_361_object = var_372_object;
	func_2158(var_371_bool, var_372_object, (float)70.0);
	var_374_bool = var_371_bool == 0; //@nz
	if(var_374_bool != 0) {
		var_360_int = -2;
		return 8;
	}
	CreateDialog(var_367_object);
	var_375_int = 0;
	func_2573(var_375_int);
	@@var_367_object:SetNPCName(var_375_int);
	var_376_int = 0;
	func_2571(var_376_int);
	@@var_367_object:SetNPCDescription(var_376_int);
	var_377_string = "";
	func_2575(var_377_string);
	@@var_367_object:SetPhoto(var_377_string);
	var_378_string = "";
	func_2577(var_378_string);
	@@var_367_object:SetPhoto2(var_378_string);
	var_379_int = 0;
	func_2756(var_379_int);
	@@var_367_object:SetPlayerName(var_379_int);
	IsOverrideActive(var_368_bool);
	var_380_bool = var_368_bool;
	if(var_380_bool != 0) {
		var_360_int = -2;
		return 8;
	}
	DoDialog(var_367_object);
	var_381_bool = 0; var_382_object = Obj();
	func_2436(Obj());
	var_383_object = var_382_object;
	func_2245(var_381_bool, var_382_object);
	var_384_object = Obj(); var_385_object = Obj();
	var_361_object = var_384_object;
	var_367_object = var_385_object;
	TaskCall(8);
	func_1249(var_386_object, var_387_object, var_388_string, var_389_bool, var_384_object, var_385_object);
	TaskReturn();
	@@var_367_object:IsDialogEnd(var_370_bool);
	
Label_1231:
	var_423_bool = var_370_bool == 0; //@nz
	if(var_423_bool != 0) {
		sync();
		@@var_367_object:IsDialogEnd(var_370_bool);
		goto Label_1231;
	}
	var_361_object = Obj();
	func_2227();
	StopDialog(var_367_object);
	@@var_367_object:GetReturnValue((int)-1);
	var_369_int = var_360_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1938(var_2_object, var_598_string)
{
	var_599_bool = 0;
	func_2579(var_599_bool);
	var_600_bool = var_599_bool == 0; //@nz
	if(var_600_bool != 0) {
		return 0;
	}
	var_601_bool = var_598_string == var_2_object;
	if(var_601_bool != 0) {
		return 0;
	}
	var_602_string = ""; var_603_bool = 0;
	var_598_string = var_602_string;
	var_605_bool = var_598_string == "";
	if(var_605_bool != 0) {
		var_603_bool = 0;
	} else {
		var_603_bool = 1;
	}
	func_2399(var_602_string, var_603_bool);
	var_2_object = var_598_string;
	return 0;
	
}


func_1684(var_2_object, var_539_string)
{
	var_540_bool = 0;
	func_2579(var_540_bool);
	var_541_bool = var_540_bool == 0; //@nz
	if(var_541_bool != 0) {
		return 0;
	}
	var_542_bool = var_539_string == var_2_object;
	if(var_542_bool != 0) {
		return 0;
	}
	var_543_string = ""; var_544_bool = 0;
	var_539_string = var_543_string;
	var_546_bool = var_539_string == "";
	if(var_546_bool != 0) {
		var_544_bool = 0;
	} else {
		var_544_bool = 1;
	}
	func_2399(var_543_string, var_544_bool);
	var_2_object = var_539_string;
	return 0;
	
}


func_2452(var_103_float, var_104_float, var_105_float, var_106_float)
{
	var_107_bool = var_104_float < var_105_float;
	if(var_107_bool != 0) {
		var_105_float = var_103_float;
		return 0;
	}
	var_108_bool = var_104_float > var_106_float;
	if(var_108_bool != 0) {
		var_106_float = var_103_float;
		return 0;
	}
	var_104_float = var_103_float;
	return 0;
}


func_2715(var_57_object)
{
	var_58_object = Obj(); var_59_object = Obj();
	GetDiaryRoot(var_59_object);
	var_60_bool = var_59_object == 0; //@nz
	if(var_60_bool != 0) {
		Trace("Can't retrieve diary root");
		var_57_object = 0;
		return 2;
	}
	var_59_object = var_57_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2463(var_327_int, var_328_string)
{
	var_329_int = 0; var_330_int = 0;
	GetVariable(var_328_string, var_330_int);
	var_330_int = var_327_int;
	return 2;
}


func_928(var_2_object, var_458_string)
{
	var_459_bool = 0;
	func_2579(var_459_bool);
	var_460_bool = var_459_bool == 0; //@nz
	if(var_460_bool != 0) {
		return 0;
	}
	var_461_bool = var_458_string == var_2_object;
	if(var_461_bool != 0) {
		return 0;
	}
	var_462_string = ""; var_463_bool = 0;
	var_458_string = var_462_string;
	var_465_bool = var_458_string == "";
	if(var_465_bool != 0) {
		var_463_bool = 0;
	} else {
		var_463_bool = 1;
	}
	func_2399(var_462_string, var_463_bool);
	var_2_object = var_458_string;
	return 0;
	
}


func_2468(var_65_int, var_66_int)
{
	var_67_object = Obj(); var_68_object = Obj();
	CreateIntVector(var_68_object);
	@@var_68_object:add(var_65_int);
	@@var_68_object:add(var_66_int);
	SendWorldWndMessage((int)3, var_68_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2728(var_48_bool, var_49_object, var_50_int)
{
	var_51_object = Obj(); var_52_object = Obj(); var_53_int = 0; var_54_object = Obj(); var_55_object = Obj(); var_56_int = 0;
	func_2715(Obj());
	var_57_object = var_54_object;
	@@var_54_object:Find(var_50_int, var_55_object);
	var_62_bool = var_55_object == 0; //@nz
	if(var_62_bool != 0) {
		var_64_int = "Can't find diary parent with id: " + var_50_int;
		Trace(var_64_int);
		var_48_bool = 0;
		return 6;
	}
	@@var_55_object:AddChild(var_49_object);
	SendWorldWndMessage((int)7);
	@@var_49_object:GetCategory(var_56_int);
	SetDiarySection(var_56_int);
	var_48_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_171(var_2_object, var_315_string)
{
	var_316_bool = 0;
	func_2579(var_316_bool);
	var_317_bool = var_316_bool == 0; //@nz
	if(var_317_bool != 0) {
		return 0;
	}
	var_318_bool = var_315_string == var_2_object;
	if(var_318_bool != 0) {
		return 0;
	}
	var_319_string = ""; var_320_bool = 0;
	var_315_string = var_319_string;
	var_322_bool = var_315_string == "";
	if(var_322_bool != 0) {
		var_320_bool = 0;
	} else {
		var_320_bool = 1;
	}
	func_2399(var_319_string, var_320_bool);
	var_2_object = var_315_string;
	return 0;
	
}


func_2480(var_52_object, var_53_int)
{
	var_54_int = 0; var_55_int = 0;
	var_56_object = Obj(); var_57_string = ""; var_58_int = 0;
	var_52_object = var_56_object;
	var_53_int = var_58_int;
	func_2127(var_56_object, "money", var_58_int);
	var_63_bool = var_53_int > (int)0;
	if(var_63_bool != 0) {
		GetInvItemByName(var_55_int, "Money");
		var_65_int = 0; var_66_int = 0;
		var_55_int = var_65_int;
		var_53_int = var_66_int;
		func_2468(var_65_int, var_66_int);
	}
	return 2;
}


func_2227()
{
	var_273_bool = 0; var_274_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_276_bool = 0;
	func_2579(var_276_bool);
	if(var_276_bool != 0) {
	} else {
		HasAnimationTrack(var_274_bool, "head");
		var_278_bool = var_274_bool;
		if(var_278_bool == 0) goto Label_2244;
		UnlookAsync("head");
	}
Label_2244:
	return 2;
	
}


func_2499(var_74_bool, var_75_object, var_76_float)
{
	var_77_bool = var_75_object == 0; //@nz
	if(var_77_bool != 0) {
		var_74_bool = 0;
		return 0;
	}
	var_79_bool = var_76_float > (int)0;
	if(var_79_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_110_bool = var_76_float < (int)0;
		if(var_110_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_2520;
		}
		var_74_bool = 0;
		return 0;
	}
Label_2520:
	var_81_float = 0;
	var_76_float = var_81_float;
	func_2534(var_81_float);
	var_85_bool = 0; var_86_object = Obj(); var_87_string = ""; var_88_float = 0; var_89_float = 0; var_90_float = 0;
	var_75_object = var_86_object;
	var_76_float = var_88_float;
	func_2105(var_85_bool, var_86_object, "reputation", var_88_float, (float)0, (float)1);
	var_74_bool = 1;
	return 0;
	
}


func_2756(var_118_int)
{
	var_119_int = 0; var_120_int = 0;
	GetVariable("branch", var_120_int);
	var_123_bool = var_120_int == (int)0;
	if(var_123_bool != 0) {
		var_118_int = 1;
		return 2;
	EMIT "GOTO 0xad3";
	}
	var_125_bool = var_120_int == (int)1;
	if(var_125_bool != 0) {
		var_118_int = 2;
		return 2;
	}
	var_118_int = 3;
	return 2;
}


func_2245(var_127_bool, var_128_object)
{
	var_132_int = 0; var_133_int = 0; var_134_int = 0; var_135_int = 0;
	GetVariable("voice_common", var_134_int);
	var_137_int = var_134_int;
	if(var_137_int != 0) {
		var_138_bool = 0; var_139_object = Obj();
		var_128_object = var_139_object;
		func_2303(var_138_bool, var_139_object);
		var_168_bool = var_138_bool == 0; //@nz
		if(var_168_bool != 0) {
			var_169_bool = 0; var_170_object = Obj();
			var_128_object = var_170_object;
			func_2340(var_169_bool, var_170_object);
			var_204_bool = var_169_bool == 0; //@nz
			if(var_204_bool != 0) {
				var_127_bool = 0;
				return 4;
			}
		}
		irand(var_135_int, (int)2);
		var_206_int = var_135_int;
		if(var_206_int != 0) {
			var_209_int = var_134_int + (int)1;
			var_211_int = var_209_int % (int)3;
			SetVariable("voice_common", var_211_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_214_bool = 0; var_215_object = Obj();
		var_128_object = var_215_object;
		func_2340(var_214_bool, var_215_object);
		var_216_bool = var_214_bool == 0; //@nz
		if(var_216_bool != 0) {
			var_217_bool = 0; var_218_object = Obj();
			var_128_object = var_218_object;
			func_2303(var_217_bool, var_218_object);
			var_219_bool = var_217_bool == 0; //@nz
			if(var_219_bool != 0) {
				var_127_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_2301;
	
Label_2301:
	var_127_bool = 1;
	return 4;
	
}


func_462(var_0_object, var_55_int, var_56_object)
{
	var_58_object = Obj(); var_59_bool = 0; var_60_int = 0; var_61_bool = 0; var_62_object = Obj(); var_63_bool = 0; var_64_int = 0; var_65_bool = 0;
	var_0_object = var_56_object;
	var_66_bool = 0; var_67_object = Obj(); var_68_float = 0;
	var_56_object = var_67_object;
	func_2158(var_66_bool, var_67_object, (float)70.0);
	var_113_bool = var_66_bool == 0; //@nz
	if(var_113_bool != 0) {
		var_55_int = -2;
		return 8;
	}
	CreateDialog(var_62_object);
	var_114_int = 0;
	func_2573(var_114_int);
	@@var_62_object:SetNPCName(var_114_int);
	var_115_int = 0;
	func_2571(var_115_int);
	@@var_62_object:SetNPCDescription(var_115_int);
	var_116_string = "";
	func_2575(var_116_string);
	@@var_62_object:SetPhoto(var_116_string);
	var_117_string = "";
	func_2577(var_117_string);
	@@var_62_object:SetPhoto2(var_117_string);
	var_118_int = 0;
	func_2756(var_118_int);
	@@var_62_object:SetPlayerName(var_118_int);
	IsOverrideActive(var_63_bool);
	var_126_bool = var_63_bool;
	if(var_126_bool != 0) {
		var_55_int = -2;
		return 8;
	}
	DoDialog(var_62_object);
	var_127_bool = 0; var_128_object = Obj();
	func_2436(Obj());
	var_129_object = var_128_object;
	func_2245(var_127_bool, var_128_object);
	var_222_object = Obj(); var_223_object = Obj();
	var_56_object = var_222_object;
	var_62_object = var_223_object;
	TaskCall(4);
	func_543(var_224_object, var_225_object, var_226_string, var_227_bool, var_222_object, var_223_object);
	TaskReturn();
	@@var_62_object:IsDialogEnd(var_65_bool);
	
Label_525:
	var_271_bool = var_65_bool == 0; //@nz
	if(var_271_bool != 0) {
		sync();
		@@var_62_object:IsDialogEnd(var_65_bool);
		goto Label_525;
	}
	var_56_object = Obj();
	func_2227();
	StopDialog(var_62_object);
	@@var_62_object:GetReturnValue((int)-1);
	var_64_int = var_55_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2773(var_52_object)
{
	var_53_bool = GlobalVars[1];
	var_54_bool = var_53_bool == 0; //@nz
	if(var_54_bool != 0) {
		var_55_int = 0; var_56_object = Obj();
		var_52_object = var_56_object;
		TaskCall(3);
		func_462(var_57_object, var_55_int, var_56_object);
		TaskReturn();
		var_280_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_281_bool = 0; var_282_int = 0;
	func_2565(var_281_bool, (int)3);
	if(var_281_bool != 0) {
		var_284_int = 0; var_285_object = Obj();
		var_52_object = var_285_object;
		TaskCall(1);
		func_13(var_286_object, var_284_int, var_285_object);
		TaskReturn();
		return 0;
	}
	var_358_bool = 0; var_359_int = 0;
	func_2565(var_358_bool, (int)9);
	if(var_358_bool != 0) {
		var_360_int = 0; var_361_object = Obj();
		var_52_object = var_361_object;
		TaskCall(7);
		func_1168(var_362_object, var_360_int, var_361_object);
		TaskReturn();
		return 0;
	}
	var_425_bool = 0; var_426_int = 0;
	func_2565(var_425_bool, (int)10);
	if(var_425_bool != 0) {
		var_427_int = 0; var_428_object = Obj();
		var_52_object = var_428_object;
		TaskCall(5);
		func_757(var_429_object, var_427_int, var_428_object);
		TaskReturn();
		return 0;
	}
	var_506_bool = 0; var_507_int = 0;
	func_2565(var_506_bool, (int)12);
	if(var_506_bool != 0) {
		var_508_int = 0; var_509_object = Obj();
		var_52_object = var_509_object;
		TaskCall(9);
		func_1540(var_510_object, var_508_int, var_509_object);
		TaskReturn();
		return 0;
	}
	var_567_int = 0; var_568_object = Obj();
	var_52_object = var_568_object;
	TaskCall(11);
	func_1799(var_569_object, var_567_int, var_568_object);
	TaskReturn();
	return 0;
}


func_1249(var_0_object, var_1_object, var_2_object, var_3_string, var_384_object, var_385_object)
{
	var_0_object = var_385_object;
	var_1_object = var_384_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_391_string = "";
		func_1317(var_385_object, "Neutral");
		@@@var_0_object:SetMessage((int)528940);
		@@@var_0_object:ClearReplies();
		var_400_bool = 0; var_401_object = Obj();
		var_401_object = var_1_object;
		func_2690(var_401_object);
		if(var_400_bool != 0) {
			@@@var_0_object:AddReply((int)528943, (int)30377, (int)30376);
		}
		@@@var_0_object:AddReply((int)528941, (int)-1, (int)30374);
		@@@var_0_object:AddReply((int)528942, (int)-1, (int)30375);
		goto Label_1287;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e5";
	}
Label_1287:
	var_415_bool = 0;
	func_2579(var_415_bool);
	if(var_415_bool != 0) {

	Label_1291:
		lshWaitForAnimEnd();
		var_416_string = var_3_string;
		if(var_416_string != 0) {
		} else {
			var_417_string = "";
			var_417_string = var_2_object;
			func_2383(var_417_string);
			goto Label_1291;
	}
		PlayAnimation("all", "idle");

	Label_1306:
		WaitForAnimEnd();
		var_420_string = var_3_string;
		if(var_420_string != 0) {
			goto Label_1316;
		}
		PlayAnimation("all", "idle");
		goto Label_1306;
	}
	goto Label_1316;
	
Label_1316:
	return 0;
	
}


func_2017(var_0_object, var_1_object, var_2_object)
{
	GetPosition(var_1_object);
	GetDirection(var_2_object);
	var_0_object = false;
	var_34_bool = 0;
	func_2153(var_34_bool);
	var_37_bool = var_34_bool == 0; //@nz
	if(var_37_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
		func_2045(var_30_bool, var_31_cvector, var_32_cvector);
	}
Label_2035:
	var_43_string = "";
	func_2383("Neutral");
	lshWaitForAnimEnd();
	goto Label_2035;
}
EMIT "@ Hold()";
EMIT "Pop(0)";
EMIT "Return(); Pop(0)";


func_2534(var_81_float)
{
	var_82_object = Obj(); var_83_object = Obj();
	CreateFloatVector(var_83_object);
	@@var_83_object:add(var_81_float);
	SendWorldWndMessage((int)16, var_83_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2544(var_66_bool, var_67_string, var_68_string)
{
	var_69_object = Obj(); var_70_object = Obj();
	FindActor(var_70_object, var_67_string);
	var_71_bool = var_70_object == 0; //@ne
	if(var_71_bool != 0) {
		var_66_bool = 0;
		return 2;
	}
	Trigger(var_70_object, var_68_string);
	var_66_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_757(var_0_object, var_427_int, var_428_object)
{
	var_430_object = Obj(); var_431_bool = 0; var_432_int = 0; var_433_bool = 0; var_434_object = Obj(); var_435_bool = 0; var_436_int = 0; var_437_bool = 0;
	var_0_object = var_428_object;
	var_438_bool = 0; var_439_object = Obj(); var_440_float = 0;
	var_428_object = var_439_object;
	func_2158(var_438_bool, var_439_object, (float)70.0);
	var_441_bool = var_438_bool == 0; //@nz
	if(var_441_bool != 0) {
		var_427_int = -2;
		return 8;
	}
	CreateDialog(var_434_object);
	var_442_int = 0;
	func_2573(var_442_int);
	@@var_434_object:SetNPCName(var_442_int);
	var_443_int = 0;
	func_2571(var_443_int);
	@@var_434_object:SetNPCDescription(var_443_int);
	var_444_string = "";
	func_2575(var_444_string);
	@@var_434_object:SetPhoto(var_444_string);
	var_445_string = "";
	func_2577(var_445_string);
	@@var_434_object:SetPhoto2(var_445_string);
	var_446_int = 0;
	func_2756(var_446_int);
	@@var_434_object:SetPlayerName(var_446_int);
	IsOverrideActive(var_435_bool);
	var_447_bool = var_435_bool;
	if(var_447_bool != 0) {
		var_427_int = -2;
		return 8;
	}
	DoDialog(var_434_object);
	var_448_bool = 0; var_449_object = Obj();
	func_2436(Obj());
	var_450_object = var_449_object;
	func_2245(var_448_bool, var_449_object);
	var_451_object = Obj(); var_452_object = Obj();
	var_428_object = var_451_object;
	var_434_object = var_452_object;
	TaskCall(6);
	func_838(var_453_object, var_454_object, var_455_string, var_456_bool, var_451_object, var_452_object);
	TaskReturn();
	@@var_434_object:IsDialogEnd(var_437_bool);
	
Label_820:
	var_504_bool = var_437_bool == 0; //@nz
	if(var_504_bool != 0) {
		sync();
		@@var_434_object:IsDialogEnd(var_437_bool);
		goto Label_820;
	}
	var_428_object = Obj();
	func_2227();
	StopDialog(var_434_object);
	@@var_434_object:GetReturnValue((int)-1);
	var_436_int = var_427_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2556(var_182_int)
{
	var_183_float = 0; var_184_float = 0;
	GetGameTime(var_184_float);
	var_186_int = 0;
	var_186_int = var_184_float / (int)24;
	var_182_int = (int)1 + var_186_int;
	return 2;
}


func_2045(var_0_object, var_1_object, var_2_object)
{
	SetPosition(var_1_object);
	SetDirection(var_2_object);
	var_0_object = false;
	LockAnimation("all", "stand", (int)0);
	return 0;
}


func_2303(var_138_bool, var_139_object)
{
	var_140_string = ""; var_141_int = 0; var_142_bool = 0; var_143_int = 0; var_144_string = ""; var_145_string = ""; var_146_int = 0; var_147_bool = 0; var_148_int = 0; var_149_string = "";
	var_145_string = "c";
	var_146_int = 0;
	
Label_2306:
	if((int)1 != 0) {
		var_152_int = var_146_int + (int)1;
		var_153_int = var_145_string + var_152_int;
		@@var_139_object:HasProperty(var_153_int, var_147_bool);
		var_154_bool = var_147_bool == 0; //@nz
		if(var_154_bool != 0) {
		} else {
			var_146_int = var_146_int + (int)1;
			goto Label_2306;
		}
	}
	var_155_bool = var_146_int == 0; //@nz
	if(var_155_bool != 0) {
		var_138_bool = 0;
		return 10;
	}
	var_148_int = 0;
	var_157_bool = var_146_int > (int)1;
	if(var_157_bool != 0) {
		irand(var_148_int, var_146_int);
	}
	var_159_int = var_148_int + (int)1;
	var_160_int = var_145_string + var_159_int;
	@@var_139_object:GetProperty(var_160_int, var_149_string);
	var_161_bool = 0; var_162_string = "";
	var_149_string = var_162_string;
	func_2414(var_161_bool, var_162_string);
	var_161_bool = var_138_bool;
	return 10;
	
}


