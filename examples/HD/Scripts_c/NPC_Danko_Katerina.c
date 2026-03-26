// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetMainOutdoorScene/1,AddBlankActor/4,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Fear|W:Suffering|W:Grin|W:Penetrating|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:.bin|A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:ui/NPC_Katerina.png|W:ui/NPC_Katerina_b.png|W:KnowKaterina|W:playsound|W:giveitem|W:ood1Katerina1|W:ood1Katerina2|W:d10q02|W:d10q02KaterinaGotoRubin|W:pt_region01_center01|A:AddMark|W:quest_d10_02|W:ood10Katerina1|W:d10KaterinaVisit|W:ood3Katerina2|W:d3KaterinaAboutKills|W:ood1Katerina3|A:ShowMap|W:d5q01|W:d1q01KaterinaUHave1day|W:ood6Katerina1|W:ood6Katerina2|W:d6q01|W:d6q01KaterinaGotoLaska|W:pt_map_laska|W:d6q01KaterinagotoLaskaSelf|W:pt_map_katerina|W:quest_d6_01|W:saburov_klara_remove|W:ood6Katerina3|W:ood3Katerina1|W:drapery is given|W:drapery|W:ood4Katerina1|W:ood2Katerina1|W:ood2Katerina2|W:ood5Katerina1|W:d1q01FirstGeorgVisit|W:d3q01|W:d6q01KnowKillerIsKlara|W:d1q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x11c4
// @RUN_TASK: 20
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xab vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x20b vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x4f6 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x687 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x8fb vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa42 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc88 vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0xeca vars=int,int
// @TASK_16: vars=object params=2
// @TASK_17: vars=object,object,string,bool params=2
// @EVENT_11: op=0x109c vars=int,int
// @TASK_18: vars=object params=2
// @TASK_19: vars=object,object,string,bool params=2
// @EVENT_11: op=0x119a vars=int,int
// @TASK_20: vars=cvector params=0
// @EVENT_7: op=0x1210 vars=int
// @EVENT_6: op=0x1236 vars=
// @EVENT_5: op=0x1245 vars=
// @EVENT_45: op=0x1252 vars=bool
// @EVENT_0: op=0x125e vars=object
// @PE: 0x51,0x95,0xab,0x175,0x1f5,0x20b,0x460,0x4e0,0x4f6,0x606,0x671,0x687,0x8a1,0x8e5,0x8fb,0x9c8,0xa2c,0xa42,0xbdf,0xc72,0xc88,0xe57,0xeb4,0xeca,0x1047,0x1086,0x109c,0x114a,0x1184,0x119a,0x1210,0x1236,0x1252,0x1463,0x148b,0x1491,0x1497,0x149d,0x14c1,0x14c7,0x14cd,0x14d3,0x14d9,0x14df,0x14ef,0x14fc,0x1502,0x1508,0x1533,0x1539,0x153f,0x154a,0x1550,0x1556,0x155c,0x1562,0x156e,0x157a,0x1586,0x1592,0x15b7,0x15c3,0x15cf,0x15db,0x15e7,0x15f3,0x15ff,0x160b,0x1617,0x1623,0x162f,0x163b,0x1647,0x1653,0x165f,0x166b,0x1677,0x172c

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	if((int)1 != 0) {
		func_5110();
		var_56_bool = var_51_bool == (int)346;
		if(var_56_bool != 0) {
			var_57_object = Obj(); var_58_object = Obj();
			var_57_object = var_1_object;
			var_58_object = var_0_object;
			func_5259();
			var_61_string = "";
			func_149(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500295);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500296, (int)350, (int)347);
			@@@var_0_object:AddReply((int)500297, (int)350, (int)348);
			@@@var_0_object:AddReply((int)500298, (int)350, (int)349);
			return 0;
		}
		var_89_bool = var_51_bool == (int)350;
		if(var_89_bool != 0) {
			var_90_string = "";
			func_149(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500299);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500300, (int)355, (int)351);
			@@@var_0_object:AddReply((int)500301, (int)358, (int)352);
			return 0;
		}
		var_99_bool = var_51_bool == (int)358;
		if(var_99_bool != 0) {
			var_100_string = "";
			func_149(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500305);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500306, (int)-1, (int)359);
			@@@var_0_object:AddReply((int)500307, (int)-1, (int)360);
			return 0;
		}
		var_109_bool = var_51_bool == (int)355;
		if(var_109_bool != 0) {
			var_110_string = "";
			func_149(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500302);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500304, (int)-1, (int)357);
			@@@var_0_object:AddReply((int)500303, (int)-1, (int)356);
			return 0;
		}
		var_3_string = true;
		var_118_bool = 0;
		func_5257(var_118_bool);
		if(var_118_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xac";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	if((int)1 != 0) {
		func_5110();
		var_56_bool = var_52_cvector == (int)3742;
		if(var_56_bool != 0) {
			var_57_object = Obj(); var_58_object = Obj();
			var_57_object = var_1_object;
			var_58_object = var_0_object;
			func_5378();
		}
		var_62_bool = var_52_cvector == (int)3745;
		if(var_62_bool != 0) {
			var_63_object = Obj(); var_64_object = Obj();
			var_63_object = var_1_object;
			var_64_object = var_0_object;
			func_5378();
		}
		var_66_bool = var_52_cvector == (int)3746;
		if(var_66_bool != 0) {
			var_67_object = Obj(); var_68_object = Obj();
			var_67_object = var_1_object;
			var_68_object = var_0_object;
			func_5378();
		}
		var_70_bool = var_52_cvector == (int)3740;
		if(var_70_bool != 0) {
			var_71_object = Obj(); var_72_object = Obj();
			var_71_object = var_1_object;
			var_72_object = var_0_object;
			func_5378();
		}
		var_74_bool = var_52_cvector == (int)13984;
		if(var_74_bool != 0) {
			var_75_object = Obj(); var_76_object = Obj();
			var_75_object = var_1_object;
			var_76_object = var_0_object;
			func_5384();
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_5390();
		}
		var_134_bool = var_52_cvector == (int)13988;
		if(var_134_bool != 0) {
			var_135_object = Obj(); var_136_object = Obj();
			var_135_object = var_1_object;
			var_136_object = var_0_object;
			func_5384();
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_object;
			func_5390();
		}
		var_140_bool = var_52_cvector == (int)13990;
		if(var_140_bool != 0) {
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_object;
			func_5427();
		}
		var_146_bool = var_51_bool == (int)13969;
		if(var_146_bool != 0) {
			var_147_string = "";
			func_501(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)512770);
			@@@var_0_object:ClearReplies();
			var_165_bool = 0;
			var_165_bool = 0;
			var_166_bool = 0; var_167_object = Obj();
			var_167_object = var_1_object;
			func_5631(var_167_object);
			if(var_166_bool != 0) {
				var_174_bool = 0; var_175_object = Obj();
				var_175_object = var_1_object;
				func_5607(var_175_object);
				if(var_174_bool != 0) {
					var_165_bool = 1;
				}
			}
			if(var_165_bool != 0) {
				@@@var_0_object:AddReply((int)512771, (int)3726, (int)13970);
			}
			var_183_bool = 0;
			var_183_bool = 0;
			var_184_bool = 0; var_185_object = Obj();
			var_185_object = var_1_object;
			func_5643(var_185_object);
			if(var_184_bool != 0) {
				var_190_bool = 0; var_191_object = Obj();
				var_191_object = var_1_object;
				func_5619(var_191_object);
				if(var_190_bool != 0) {
					var_183_bool = 1;
				}
			}
			if(var_183_bool != 0) {
				@@@var_0_object:AddReply((int)512772, (int)13972, (int)13971);
			}
			var_199_bool = 0;
			var_199_bool = 1;
			var_200_bool = 0;
			var_200_bool = 0;
			var_201_bool = 0; var_202_object = Obj();
			var_202_object = var_1_object;
			func_5655(var_202_object);
			if(var_201_bool != 0) {
				var_207_bool = 0; var_208_object = Obj();
				var_208_object = var_1_object;
				func_5679(var_208_object);
				if(var_207_bool != 0) {
					var_200_bool = 1;
				}
			}
			if(var_200_bool != 1) {
				var_213_bool = 0;
				var_213_bool = 0;
				var_214_bool = 0; var_215_object = Obj();
				var_215_object = var_1_object;
				func_5667(var_215_object);
				if(var_214_bool != 0) {
					var_220_bool = 0; var_221_object = Obj();
					var_221_object = var_1_object;
					func_5679(var_221_object);
					if(var_220_bool != 0) {
						var_213_bool = 1;
					}
				}
				if(var_213_bool != 1) {
					var_199_bool = 0;
				}
			}
			if(var_199_bool != 0) {
				@@@var_0_object:AddReply((int)512791, (int)13991, (int)13990);
			}
			@@@var_0_object:AddReply((int)512790, (int)-1, (int)13989);
			return 0;
		}
		var_229_bool = var_51_bool == (int)13991;
		if(var_229_bool != 0) {
			var_230_string = "";
			func_501(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)512792);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512793, (int)13993, (int)13992);
			return 0;
		}
		var_236_bool = var_51_bool == (int)13993;
		if(var_236_bool != 0) {
			var_237_string = "";
			func_501(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)512794);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512795, (int)-1, (int)13994);
			@@@var_0_object:AddReply((int)512798, (int)-1, (int)13997);
			return 0;
		}
		var_246_bool = var_51_bool == (int)13972;
		if(var_246_bool != 0) {
			var_247_string = "";
			func_501(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)512773);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512774, (int)13974, (int)13973);
			return 0;
		}
		var_253_bool = var_51_bool == (int)13974;
		if(var_253_bool != 0) {
			var_254_string = "";
			func_501(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)512775);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512776, (int)13976, (int)13975);
			return 0;
		}
		var_260_bool = var_51_bool == (int)13976;
		if(var_260_bool != 0) {
			var_261_string = "";
			func_501(var_52_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)512777);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512779, (int)13980, (int)13978);
			@@@var_0_object:AddReply((int)512778, (int)13979, (int)13977);
			return 0;
		}
		var_270_bool = var_51_bool == (int)13979;
		if(var_270_bool != 0) {
			var_271_string = "";
			func_501(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512780);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513020, (int)13983, (int)14226);
			@@@var_0_object:AddReply((int)541840, (int)13983, (int)44057);
			return 0;
		}
		var_280_bool = var_51_bool == (int)13980;
		if(var_280_bool != 0) {
			var_281_string = "";
			func_501(var_52_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)512781);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512782, (int)13983, (int)13981);
			return 0;
		}
		var_287_bool = var_51_bool == (int)13983;
		if(var_287_bool != 0) {
			var_288_string = "";
			func_501(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512784);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512785, (int)-1, (int)13984);
			@@@var_0_object:AddReply((int)512783, (int)13985, (int)13982);
			return 0;
		}
		var_297_bool = var_51_bool == (int)13985;
		if(var_297_bool != 0) {
			var_298_string = "";
			func_501(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512786);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512787, (int)13987, (int)13986);
			return 0;
		}
		var_304_bool = var_51_bool == (int)13987;
		if(var_304_bool != 0) {
			var_305_string = "";
			func_501(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512788);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512789, (int)-1, (int)13988);
			return 0;
		}
		var_311_bool = var_51_bool == (int)3726;
		if(var_311_bool != 0) {
			var_312_string = "";
			func_501(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)503459);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503460, (int)3729, (int)3727);
			@@@var_0_object:AddReply((int)503461, (int)3730, (int)3728);
			return 0;
		}
		var_321_bool = var_51_bool == (int)3730;
		if(var_321_bool != 0) {
			var_322_string = "";
			func_501(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)503463);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503464, (int)3729, (int)3731);
			@@@var_0_object:AddReply((int)503465, (int)3734, (int)3733);
			return 0;
		}
		var_331_bool = var_51_bool == (int)3734;
		if(var_331_bool != 0) {
			var_332_string = "";
			func_501(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)503466);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503467, (int)3729, (int)3735);
			@@@var_0_object:AddReply((int)503468, (int)3729, (int)3736);
			return 0;
		}
		var_341_bool = var_51_bool == (int)3729;
		if(var_341_bool != 0) {
			var_342_string = "";
			func_501(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)503462);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503469, (int)3741, (int)3739);
			@@@var_0_object:AddReply((int)503470, (int)-1, (int)3740);
			return 0;
		}
		var_351_bool = var_51_bool == (int)3741;
		if(var_351_bool != 0) {
			var_352_string = "";
			func_501(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)503471);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503472, (int)-1, (int)3742);
			@@@var_0_object:AddReply((int)503473, (int)3744, (int)3743);
			return 0;
		}
		var_361_bool = var_51_bool == (int)3744;
		if(var_361_bool != 0) {
			var_362_string = "";
			func_501(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)503474);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503475, (int)-1, (int)3745);
			@@@var_0_object:AddReply((int)503476, (int)-1, (int)3746);
			return 0;
		}
		var_3_string = true;
		var_370_bool = 0;
		func_5257(var_370_bool);
		if(var_370_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x20c";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	if((int)1 != 0) {
		func_5110();
		var_56_bool = var_51_bool == (int)10246;
		if(var_56_bool != 0) {
			var_57_bool = 0; var_58_object = Obj();
			var_58_object = var_1_object;
			func_5715(var_58_object);
			if(var_57_bool != 0) {
				var_65_object = Obj(); var_66_object = Obj();
				var_65_object = var_1_object;
				var_66_object = var_0_object;
				func_5456();
				var_69_string = "";
				func_1248(var_52_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)509330);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)509331, (int)10248, (int)10247);
				@@@var_0_object:AddReply((int)509340, (int)10248, (int)10258);
				@@@var_0_object:AddReply((int)509341, (int)10248, (int)10260);
				return 0;
			}
			var_96_bool = 0; var_97_object = Obj();
			var_97_object = var_1_object;
			func_5727(var_97_object);
			if(var_96_bool != 0) {
				var_102_object = Obj(); var_103_object = Obj();
				var_102_object = var_1_object;
				var_103_object = var_0_object;
				func_5462();
				var_106_string = "";
				func_1248(var_52_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)509323);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)509324, (int)10239, (int)10238);
				@@@var_0_object:AddReply((int)509328, (int)10239, (int)10242);
				@@@var_0_object:AddReply((int)509329, (int)10239, (int)10244);
				return 0;
			}
			var_117_string = "";
			func_1248(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)515792);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533895, (int)-1, (int)35453);
			@@@var_0_object:AddReply((int)533894, (int)-1, (int)35452);
			return 0;
		}
		var_126_bool = var_51_bool == (int)10239;
		if(var_126_bool != 0) {
			var_127_string = "";
			func_1248(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509325);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509326, (int)-1, (int)10240);
			@@@var_0_object:AddReply((int)509327, (int)-1, (int)10241);
			return 0;
		}
		var_136_bool = var_51_bool == (int)10248;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_1248(var_52_cvector, "Grin");
			@@@var_0_object:SetMessage((int)509332);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509333, (int)10250, (int)10249);
			@@@var_0_object:AddReply((int)509338, (int)10250, (int)10254);
			@@@var_0_object:AddReply((int)509339, (int)10250, (int)10256);
			return 0;
		}
		var_149_bool = var_51_bool == (int)10250;
		if(var_149_bool != 0) {
			var_150_string = "";
			func_1248(var_52_cvector, "Grin");
			@@@var_0_object:SetMessage((int)509334);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509335, (int)-1, (int)10251);
			@@@var_0_object:AddReply((int)509336, (int)-1, (int)10252);
			@@@var_0_object:AddReply((int)509337, (int)-1, (int)10253);
			return 0;
		}
		var_3_string = true;
		var_161_bool = 0;
		func_5257(var_161_bool);
		if(var_161_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x4f7";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	if((int)1 != 0) {
		func_5110();
		var_56_bool = var_52_cvector == (int)10945;
		if(var_56_bool != 0) {
			var_57_object = Obj(); var_58_object = Obj();
			var_57_object = var_1_object;
			var_58_object = var_0_object;
			func_5439(var_58_object);
			var_81_object = Obj(); var_82_object = Obj();
			var_81_object = var_1_object;
			var_82_object = var_0_object;
			func_5265();
		}
		var_86_bool = var_52_cvector == (int)10946;
		if(var_86_bool != 0) {
			var_87_object = Obj(); var_88_object = Obj();
			var_87_object = var_1_object;
			var_88_object = var_0_object;
			func_5439(var_88_object);
			var_89_object = Obj(); var_90_object = Obj();
			var_89_object = var_1_object;
			var_90_object = var_0_object;
			func_5265();
		}
		var_92_bool = var_52_cvector == (int)34384;
		if(var_92_bool != 0) {
			var_93_object = Obj(); var_94_object = Obj();
			var_93_object = var_1_object;
			var_94_object = var_0_object;
			func_5325();
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_5331();
		}
		var_102_bool = var_51_bool == (int)10936;
		if(var_102_bool != 0) {
			var_103_bool = 0;
			var_103_bool = 0;
			var_104_bool = 0; var_105_object = Obj();
			var_105_object = var_1_object;
			func_5691(var_105_object);
			if(var_104_bool != 0) {
				var_112_bool = 0; var_113_object = Obj();
				var_113_object = var_1_object;
				func_5522(var_113_object);
				if(var_112_bool != 0) {
					var_103_bool = 1;
				}
			}
			if(var_103_bool != 0) {
				var_131_object = Obj(); var_132_object = Obj();
				var_131_object = var_1_object;
				var_132_object = var_0_object;
				func_5433();
				var_135_string = "";
				func_1649(var_52_cvector, "Grin");
				@@@var_0_object:SetMessage((int)509926);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)509927, (int)10938, (int)10937);
				@@@var_0_object:AddReply((int)509940, (int)10954, (int)10953);
				return 0;
			}
			var_159_string = "";
			func_1649(var_52_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)532898);
			@@@var_0_object:ClearReplies();
			var_161_bool = 0; var_162_object = Obj();
			var_162_object = var_1_object;
			func_5559(var_162_object);
			if(var_161_bool != 0) {
				@@@var_0_object:AddReply((int)532897, (int)11224, (int)34384);
			}
			@@@var_0_object:AddReply((int)534175, (int)-1, (int)35757);
			@@@var_0_object:AddReply((int)534555, (int)-1, (int)36187);
			return 0;
		}
		var_177_bool = var_51_bool == (int)11224;
		if(var_177_bool != 0) {
			var_178_string = "";
			func_1649(var_52_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)510178);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510186, (int)11233, (int)11232);
			@@@var_0_object:AddReply((int)510464, (int)11233, (int)11537);
			return 0;
		}
		var_187_bool = var_51_bool == (int)11233;
		if(var_187_bool != 0) {
			var_188_string = "";
			func_1649(var_52_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)510187);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510179, (int)11226, (int)11225);
			@@@var_0_object:AddReply((int)510463, (int)11226, (int)11536);
			return 0;
		}
		var_197_bool = var_51_bool == (int)11226;
		if(var_197_bool != 0) {
			var_198_string = "";
			func_1649(var_52_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)510180);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510465, (int)11541, (int)11540);
			@@@var_0_object:AddReply((int)510470, (int)11228, (int)11547);
			return 0;
		}
		var_207_bool = var_51_bool == (int)11541;
		if(var_207_bool != 0) {
			var_208_string = "";
			func_1649(var_52_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)510466);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510181, (int)11228, (int)11227);
			@@@var_0_object:AddReply((int)510467, (int)11228, (int)11542);
			@@@var_0_object:AddReply((int)510468, (int)11228, (int)11543);
			return 0;
		}
		var_220_bool = var_51_bool == (int)11228;
		if(var_220_bool != 0) {
			var_221_string = "";
			func_1649(var_52_cvector, "Grin");
			@@@var_0_object:SetMessage((int)510182);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510183, (int)11230, (int)11229);
			return 0;
		}
		var_227_bool = var_51_bool == (int)11230;
		if(var_227_bool != 0) {
			var_228_string = "";
			func_1649(var_52_cvector, "Grin");
			@@@var_0_object:SetMessage((int)510184);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510185, (int)11234, (int)11231);
			@@@var_0_object:AddReply((int)510469, (int)11234, (int)11546);
			return 0;
		}
		var_237_bool = var_51_bool == (int)11234;
		if(var_237_bool != 0) {
			var_238_string = "";
			func_1649(var_52_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)510188);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510189, (int)-1, (int)11235);
			@@@var_0_object:AddReply((int)510471, (int)-1, (int)11549);
			@@@var_0_object:AddReply((int)510472, (int)-1, (int)11550);
			return 0;
		}
		var_250_bool = var_51_bool == (int)10954;
		if(var_250_bool != 0) {
			var_251_string = "";
			func_1649(var_52_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)509941);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509942, (int)10956, (int)10955);
			@@@var_0_object:AddReply((int)509949, (int)10938, (int)10965);
			return 0;
		}
		var_260_bool = var_51_bool == (int)10956;
		if(var_260_bool != 0) {
			var_261_string = "";
			func_1649(var_52_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)509943);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509944, (int)10958, (int)10957);
			@@@var_0_object:AddReply((int)509948, (int)10938, (int)10963);
			return 0;
		}
		var_270_bool = var_51_bool == (int)10958;
		if(var_270_bool != 0) {
			var_271_string = "";
			func_1649(var_52_cvector, "Grin");
			@@@var_0_object:SetMessage((int)509945);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509946, (int)10938, (int)10959);
			@@@var_0_object:AddReply((int)509947, (int)10938, (int)10961);
			return 0;
		}
		var_280_bool = var_51_bool == (int)10938;
		if(var_280_bool != 0) {
			var_281_string = "";
			func_1649(var_52_cvector, "Grin");
			@@@var_0_object:SetMessage((int)509928);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509929, (int)10940, (int)10939);
			@@@var_0_object:AddReply((int)509939, (int)10942, (int)10951);
			return 0;
		}
		var_290_bool = var_51_bool == (int)10940;
		if(var_290_bool != 0) {
			var_291_string = "";
			func_1649(var_52_cvector, "Grin");
			@@@var_0_object:SetMessage((int)509930);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509931, (int)10942, (int)10941);
			@@@var_0_object:AddReply((int)509938, (int)10942, (int)10949);
			return 0;
		}
		var_300_bool = var_51_bool == (int)10942;
		if(var_300_bool != 0) {
			var_301_string = "";
			func_1649(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509932);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509933, (int)10944, (int)10943);
			@@@var_0_object:AddReply((int)509937, (int)10944, (int)10947);
			return 0;
		}
		var_310_bool = var_51_bool == (int)10944;
		if(var_310_bool != 0) {
			var_311_string = "";
			func_1649(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509934);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509935, (int)-1, (int)10945);
			@@@var_0_object:AddReply((int)509936, (int)-1, (int)10946);
			return 0;
		}
		var_3_string = true;
		var_319_bool = 0;
		func_5257(var_319_bool);
		if(var_319_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x688";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	if((int)1 != 0) {
		func_5110();
		var_56_bool = var_52_cvector == (int)12392;
		if(var_56_bool != 0) {
			var_57_object = Obj(); var_58_object = Obj();
			var_57_object = var_1_object;
			var_58_object = var_0_object;
			func_5450();
		}
		var_62_bool = var_51_bool == (int)12391;
		if(var_62_bool != 0) {
			var_63_string = "";
			func_2277(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)511203);
			@@@var_0_object:ClearReplies();
			var_81_bool = 0; var_82_object = Obj();
			var_82_object = var_1_object;
			func_5703(var_82_object);
			if(var_81_bool != 0) {
				@@@var_0_object:AddReply((int)511204, (int)12393, (int)12392);
			}
			@@@var_0_object:AddReply((int)515336, (int)-1, (int)16559);
			@@@var_0_object:AddReply((int)536116, (int)-1, (int)37872);
			return 0;
		}
		var_99_bool = var_51_bool == (int)12393;
		if(var_99_bool != 0) {
			var_100_string = "";
			func_2277(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)511205);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536117, (int)37874, (int)37873);
			return 0;
		}
		var_106_bool = var_51_bool == (int)37874;
		if(var_106_bool != 0) {
			var_107_string = "";
			func_2277(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)536118);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511206, (int)12395, (int)12394);
			@@@var_0_object:AddReply((int)536120, (int)12395, (int)37876);
			return 0;
		}
		var_116_bool = var_51_bool == (int)12395;
		if(var_116_bool != 0) {
			var_117_string = "";
			func_2277(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511207);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511208, (int)-1, (int)12396);
			@@@var_0_object:AddReply((int)511209, (int)-1, (int)12397);
			return 0;
		}
		var_3_string = true;
		var_125_bool = 0;
		func_5257(var_125_bool);
		if(var_125_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x8fc";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	if((int)1 != 0) {
		func_5110();
		var_56_bool = var_52_cvector == (int)12849;
		if(var_56_bool != 0) {
			var_57_object = Obj(); var_58_object = Obj();
			var_57_object = var_1_object;
			var_58_object = var_0_object;
			func_5359();
		}
		var_68_bool = var_52_cvector == (int)12850;
		if(var_68_bool != 0) {
			var_69_object = Obj(); var_70_object = Obj();
			var_69_object = var_1_object;
			var_70_object = var_0_object;
			func_5468();
		}
		var_74_bool = var_52_cvector == (int)12858;
		if(var_74_bool != 0) {
			var_75_object = Obj(); var_76_object = Obj();
			var_75_object = var_1_object;
			var_76_object = var_0_object;
			func_5359();
		}
		var_78_bool = var_52_cvector == (int)37111;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_5359();
		}
		var_82_bool = var_52_cvector == (int)37112;
		if(var_82_bool != 0) {
			var_83_object = Obj(); var_84_object = Obj();
			var_83_object = var_1_object;
			var_84_object = var_0_object;
			func_5359();
		}
		var_86_bool = var_52_cvector == (int)37113;
		if(var_86_bool != 0) {
			var_87_object = Obj(); var_88_object = Obj();
			var_87_object = var_1_object;
			var_88_object = var_0_object;
			func_5359();
		}
		var_90_bool = var_51_bool == (int)12840;
		if(var_90_bool != 0) {
			var_91_string = "";
			func_2604(var_52_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)511641);
			@@@var_0_object:ClearReplies();
			var_109_bool = 0; var_110_object = Obj();
			var_110_object = var_1_object;
			func_5583(var_110_object);
			if(var_109_bool != 0) {
				@@@var_0_object:AddReply((int)511642, (int)12842, (int)12841);
			}
			var_118_bool = 0;
			var_118_bool = 1;
			var_119_bool = 0;
			var_119_bool = 0;
			var_120_bool = 0; var_121_object = Obj();
			var_121_object = var_1_object;
			func_5583(var_121_object);
			if(var_120_bool != 0) {
				var_122_bool = 0; var_123_object = Obj();
				var_123_object = var_1_object;
				func_5739(var_123_object);
				if(var_122_bool != 0) {
					var_119_bool = 1;
				}
			}
			if(var_119_bool != 1) {
				var_128_bool = 0;
				var_128_bool = 0;
				var_129_bool = 0; var_130_object = Obj();
				var_130_object = var_1_object;
				func_5595(var_130_object);
				if(var_129_bool != 0) {
					var_135_bool = 0; var_136_object = Obj();
					var_136_object = var_1_object;
					func_5739(var_136_object);
					if(var_135_bool != 0) {
						var_128_bool = 1;
					}
				}
				if(var_128_bool != 1) {
					var_118_bool = 0;
				}
			}
			if(var_118_bool != 0) {
				@@@var_0_object:AddReply((int)511651, (int)12851, (int)12850);
			}
			@@@var_0_object:AddReply((int)511660, (int)-1, (int)12859);
			return 0;
		}
		var_144_bool = var_51_bool == (int)12851;
		if(var_144_bool != 0) {
			var_145_string = "";
			func_2604(var_52_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)511652);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511653, (int)12853, (int)12852);
			return 0;
		}
		var_151_bool = var_51_bool == (int)12853;
		if(var_151_bool != 0) {
			var_152_string = "";
			func_2604(var_52_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)511654);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511655, (int)12855, (int)12854);
			return 0;
		}
		var_158_bool = var_51_bool == (int)12855;
		if(var_158_bool != 0) {
			var_159_string = "";
			func_2604(var_52_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)511656);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511657, (int)12857, (int)12856);
			@@@var_0_object:AddReply((int)535425, (int)37107, (int)37105);
			return 0;
		}
		var_168_bool = var_51_bool == (int)12857;
		if(var_168_bool != 0) {
			var_169_string = "";
			func_2604(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511658);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535426, (int)37107, (int)37106);
			@@@var_0_object:AddReply((int)535432, (int)-1, (int)37113);
			return 0;
		}
		var_178_bool = var_51_bool == (int)37107;
		if(var_178_bool != 0) {
			var_179_string = "";
			func_2604(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535427);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511659, (int)-1, (int)12858);
			@@@var_0_object:AddReply((int)535428, (int)37110, (int)37109);
			return 0;
		}
		var_188_bool = var_51_bool == (int)37110;
		if(var_188_bool != 0) {
			var_189_string = "";
			func_2604(var_52_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)535429);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535430, (int)-1, (int)37111);
			@@@var_0_object:AddReply((int)535431, (int)-1, (int)37112);
			return 0;
		}
		var_198_bool = var_51_bool == (int)12842;
		if(var_198_bool != 0) {
			var_199_string = "";
			func_2604(var_52_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)511643);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511644, (int)12844, (int)12843);
			return 0;
		}
		var_205_bool = var_51_bool == (int)12844;
		if(var_205_bool != 0) {
			var_206_string = "";
			func_2604(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511645);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511646, (int)12846, (int)12845);
			return 0;
		}
		var_212_bool = var_51_bool == (int)12846;
		if(var_212_bool != 0) {
			var_213_string = "";
			func_2604(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511647);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511648, (int)12848, (int)12847);
			return 0;
		}
		var_219_bool = var_51_bool == (int)12848;
		if(var_219_bool != 0) {
			var_220_string = "";
			func_2604(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511649);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511650, (int)-1, (int)12849);
			return 0;
		}
		var_3_string = true;
		var_225_bool = 0;
		func_5257(var_225_bool);
		if(var_225_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa43";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	if((int)1 != 0) {
		func_5110();
		var_56_bool = var_52_cvector == (int)33614;
		if(var_56_bool != 0) {
			var_57_object = Obj(); var_58_object = Obj();
			var_57_object = var_1_object;
			var_58_object = var_0_object;
			func_5271();
		}
		var_62_bool = var_52_cvector == (int)34517;
		if(var_62_bool != 0) {
			var_63_object = Obj(); var_64_object = Obj();
			var_63_object = var_1_object;
			var_64_object = var_0_object;
			func_5337();
		}
		var_68_bool = var_51_bool == (int)33613;
		if(var_68_bool != 0) {
			var_69_bool = 0; var_70_object = Obj();
			var_70_object = var_1_object;
			func_5474(var_70_object);
			var_77_bool = var_69_bool == 0; //@nz
			if(var_77_bool != 0) {
				var_78_string = "";
				func_3186(var_52_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)532198);
				@@@var_0_object:ClearReplies();
				var_96_bool = 0; var_97_object = Obj();
				var_97_object = var_1_object;
				func_5486(var_97_object);
				if(var_96_bool != 0) {
					@@@var_0_object:AddReply((int)532199, (int)33615, (int)33614);
				}
				@@@var_0_object:AddReply((int)532203, (int)-1, (int)33618);
				return 0;
			}
			var_108_bool = 0;
			var_108_bool = 0;
			var_109_bool = 0; var_110_object = Obj();
			var_110_object = var_1_object;
			func_5498(var_110_object);
			if(var_109_bool != 0) {
				var_115_bool = 0; var_116_object = Obj();
				var_116_object = var_1_object;
				func_5751(var_116_object);
				if(var_115_bool != 0) {
					var_108_bool = 1;
				}
			}
			if(var_108_bool != 0) {
				var_131_object = Obj(); var_132_object = Obj();
				var_131_object = var_1_object;
				var_132_object = var_0_object;
				func_5277();
				var_135_object = Obj(); var_136_object = Obj();
				var_135_object = var_1_object;
				var_136_object = var_0_object;
				func_5372();
				var_139_string = "";
				func_3186(var_52_cvector, "Penetrating");
				@@@var_0_object:SetMessage((int)532204);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)532205, (int)33621, (int)33620);
				@@@var_0_object:AddReply((int)532221, (int)33621, (int)33638);
				return 0;
			}
			var_147_string = "";
			func_3186(var_52_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)532253);
			@@@var_0_object:ClearReplies();
			var_149_bool = 0;
			var_149_bool = 0;
			var_150_bool = 0; var_151_object = Obj();
			var_151_object = var_1_object;
			func_5751(var_151_object);
			if(var_150_bool != 0) {
				var_152_bool = 0; var_153_object = Obj();
				var_153_object = var_1_object;
				func_5571(var_153_object);
				if(var_152_bool != 0) {
					var_149_bool = 1;
				}
			}
			if(var_149_bool != 0) {
				@@@var_0_object:AddReply((int)533013, (int)34518, (int)34517);
			}
			@@@var_0_object:AddReply((int)532338, (int)-1, (int)33767);
			return 0;
		}
		var_165_bool = var_51_bool == (int)34518;
		if(var_165_bool != 0) {
			var_166_string = "";
			func_3186(var_52_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)533014);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533015, (int)34520, (int)34519);
			@@@var_0_object:AddReply((int)533024, (int)34529, (int)34528);
			@@@var_0_object:AddReply((int)533030, (int)34529, (int)34536);
			return 0;
		}
		var_178_bool = var_51_bool == (int)34529;
		if(var_178_bool != 0) {
			var_179_string = "";
			func_3186(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533025);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533026, (int)34520, (int)34530);
			@@@var_0_object:AddReply((int)533027, (int)34533, (int)34532);
			return 0;
		}
		var_188_bool = var_51_bool == (int)34533;
		if(var_188_bool != 0) {
			var_189_string = "";
			func_3186(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533028);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533029, (int)34520, (int)34534);
			return 0;
		}
		var_195_bool = var_51_bool == (int)34520;
		if(var_195_bool != 0) {
			var_196_string = "";
			func_3186(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533016);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533017, (int)-1, (int)34521);
			@@@var_0_object:AddReply((int)533031, (int)-1, (int)34540);
			return 0;
		}
		var_205_bool = var_51_bool == (int)33621;
		if(var_205_bool != 0) {
			var_206_string = "";
			func_3186(var_52_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)532206);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532207, (int)33623, (int)33622);
			@@@var_0_object:AddReply((int)532218, (int)33636, (int)33635);
			@@@var_0_object:AddReply((int)532217, (int)33623, (int)33633);
			return 0;
		}
		var_218_bool = var_51_bool == (int)33636;
		if(var_218_bool != 0) {
			var_219_string = "";
			func_3186(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532219);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532220, (int)-1, (int)33637);
			@@@var_0_object:AddReply((int)533154, (int)33625, (int)34671);
			return 0;
		}
		var_228_bool = var_51_bool == (int)33623;
		if(var_228_bool != 0) {
			var_229_string = "";
			func_3186(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532208);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532209, (int)33625, (int)33624);
			@@@var_0_object:AddReply((int)532216, (int)33627, (int)33631);
			return 0;
		}
		var_238_bool = var_51_bool == (int)33625;
		if(var_238_bool != 0) {
			var_239_string = "";
			func_3186(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532210);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532211, (int)33627, (int)33626);
			@@@var_0_object:AddReply((int)532215, (int)-1, (int)33630);
			return 0;
		}
		var_248_bool = var_51_bool == (int)33627;
		if(var_248_bool != 0) {
			var_249_string = "";
			func_3186(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532212);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532213, (int)-1, (int)33628);
			@@@var_0_object:AddReply((int)532214, (int)-1, (int)33629);
			return 0;
		}
		var_258_bool = var_51_bool == (int)33615;
		if(var_258_bool != 0) {
			var_259_string = "";
			func_3186(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532200);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532201, (int)-1, (int)33616);
			@@@var_0_object:AddReply((int)532202, (int)-1, (int)33617);
			return 0;
		}
		var_3_string = true;
		var_267_bool = 0;
		func_5257(var_267_bool);
		if(var_267_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc89";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	if((int)1 != 0) {
		func_5110();
		var_56_bool = var_52_cvector == (int)35677;
		if(var_56_bool != 0) {
			var_57_object = Obj(); var_58_object = Obj();
			var_57_object = var_1_object;
			var_58_object = var_0_object;
			func_5283();
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_5343(var_117_object);
		}
		var_143_bool = var_52_cvector == (int)35678;
		if(var_143_bool != 0) {
			var_144_object = Obj(); var_145_object = Obj();
			var_144_object = var_1_object;
			var_145_object = var_0_object;
			func_5283();
			var_146_object = Obj(); var_147_object = Obj();
			var_146_object = var_1_object;
			var_147_object = var_0_object;
			func_5343(var_147_object);
		}
		var_149_bool = var_51_bool == (int)35672;
		if(var_149_bool != 0) {
			var_150_bool = 0; var_151_object = Obj();
			var_151_object = var_1_object;
			func_5510(var_151_object);
			if(var_150_bool != 0) {
				var_158_object = Obj(); var_159_object = Obj();
				var_158_object = var_1_object;
				var_159_object = var_0_object;
				func_5313();
				var_162_object = Obj(); var_163_object = Obj();
				var_162_object = var_1_object;
				var_163_object = var_0_object;
				func_5319();
				var_166_string = "";
				func_3764(var_52_cvector, "Fear");
				@@@var_0_object:SetMessage((int)534079);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)534080, (int)38114, (int)35673);
				@@@var_0_object:AddReply((int)536380, (int)38114, (int)38153);
				return 0;
			}
			var_190_string = "";
			func_3764(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534086);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534090, (int)-1, (int)35683);
			@@@var_0_object:AddReply((int)536397, (int)-1, (int)38176);
			return 0;
		}
		var_199_bool = var_51_bool == (int)38114;
		if(var_199_bool != 0) {
			var_200_string = "";
			func_3764(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)536332);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536333, (int)38116, (int)38115);
			@@@var_0_object:AddReply((int)536381, (int)38116, (int)38155);
			return 0;
		}
		var_209_bool = var_51_bool == (int)38116;
		if(var_209_bool != 0) {
			var_210_string = "";
			func_3764(var_52_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)536334);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536335, (int)38118, (int)38117);
			@@@var_0_object:AddReply((int)536382, (int)38161, (int)38156);
			return 0;
		}
		var_219_bool = var_51_bool == (int)38161;
		if(var_219_bool != 0) {
			var_220_string = "";
			func_3764(var_52_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)536386);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536389, (int)38162, (int)38164);
			return 0;
		}
		var_226_bool = var_51_bool == (int)38118;
		if(var_226_bool != 0) {
			var_227_string = "";
			func_3764(var_52_cvector, "Suffering");
			@@@var_0_object:SetMessage((int)536336);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536337, (int)38162, (int)38119);
			@@@var_0_object:AddReply((int)536385, (int)35674, (int)38159);
			return 0;
		}
		var_236_bool = var_51_bool == (int)38162;
		if(var_236_bool != 0) {
			var_237_string = "";
			func_3764(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)536387);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536388, (int)38165, (int)38163);
			@@@var_0_object:AddReply((int)536394, (int)35674, (int)38171);
			return 0;
		}
		var_246_bool = var_51_bool == (int)38165;
		if(var_246_bool != 0) {
			var_247_string = "";
			func_3764(var_52_cvector, "Fear");
			@@@var_0_object:SetMessage((int)536390);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536391, (int)38167, (int)38166);
			@@@var_0_object:AddReply((int)536396, (int)35674, (int)38174);
			return 0;
		}
		var_256_bool = var_51_bool == (int)38167;
		if(var_256_bool != 0) {
			var_257_string = "";
			func_3764(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536392);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536393, (int)35674, (int)38168);
			@@@var_0_object:AddReply((int)536395, (int)-1, (int)38173);
			return 0;
		}
		var_266_bool = var_51_bool == (int)35674;
		if(var_266_bool != 0) {
			var_267_string = "";
			func_3764(var_52_cvector, "Penetrating");
			@@@var_0_object:SetMessage((int)534081);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534082, (int)35676, (int)35675);
			return 0;
		}
		var_273_bool = var_51_bool == (int)35676;
		if(var_273_bool != 0) {
			var_274_string = "";
			func_3764(var_52_cvector, "Grin");
			@@@var_0_object:SetMessage((int)534083);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534084, (int)-1, (int)35677);
			@@@var_0_object:AddReply((int)534085, (int)-1, (int)35678);
			return 0;
		}
		var_3_string = true;
		var_282_bool = 0;
		func_5257(var_282_bool);
		if(var_282_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xecb";
	
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_cvector)
{
	if((int)1 != 0) {
		func_5110();
		var_56_bool = var_51_bool == (int)36971;
		if(var_56_bool != 0) {
			var_57_string = "";
			func_4230(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535294);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535295, (int)36973, (int)36972);
			@@@var_0_object:AddReply((int)535302, (int)-1, (int)36980);
			@@@var_0_object:AddReply((int)535303, (int)-1, (int)36981);
			return 0;
		}
		var_85_bool = var_51_bool == (int)36973;
		if(var_85_bool != 0) {
			var_86_string = "";
			func_4230(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535296);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535297, (int)36975, (int)36974);
			@@@var_0_object:AddReply((int)535301, (int)36975, (int)36978);
			return 0;
		}
		var_95_bool = var_51_bool == (int)36975;
		if(var_95_bool != 0) {
			var_96_string = "";
			func_4230(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535298);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535299, (int)-1, (int)36976);
			@@@var_0_object:AddReply((int)535300, (int)-1, (int)36977);
			return 0;
		}
		var_3_string = true;
		var_104_bool = 0;
		func_5257(var_104_bool);
		if(var_104_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x109d";
	
}


task_19_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_int, var_51_int, var_52_cvector)
{
	if((int)1 != 0) {
		func_5110();
		var_56_bool = var_51_int == (int)42557;
		if(var_56_bool != 0) {
			var_57_string = "";
			func_4484(var_52_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540548);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540549, (int)-1, (int)42558);
			@@@var_0_object:AddReply((int)540797, (int)-1, (int)42846);
			return 0;
		}
		var_3_string = true;
		var_81_bool = 0;
		func_5257(var_81_bool);
		if(var_81_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x119b";
	
}


task_20_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_cvector, var_51_int)
{
	var_53_bool = var_51_int == (int)10;
	if(var_53_bool != 0) {
		func_4620();
		var_55_bool = 0;
		var_55_bool = 0;
		var_56_bool = 0;
		func_4834(var_56_bool);
		if(var_56_bool != 0) {
			var_59_bool = 0;
			func_4589(var_59_bool);
			if(var_59_bool != 0) {
				var_55_bool = 1;
			}
		}
		if(var_55_bool != 0) {
			var_76_bool = 0;
			func_4569(var_76_bool);
			if(var_76_bool != 0) {
				var_95_bool = 0; var_96_object = Obj();
				func_5117(Obj());
				var_97_object = var_96_object;
				func_4984(var_95_bool, var_96_object);
			}
		} else {
			func_4584(var_51_int);
			func_4611();
		}
	}
	return 0;
	
}


task_20_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_cvector)
{
	func_4802();
	func_4620();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_20_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_cvector)
{
	StopGroup0();
	func_4620();
	var_52_string = "";
	func_5064("Neutral");
	func_4611();
	return 0;
}


task_20_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_cvector, var_51_bool)
{
	var_52_bool = var_51_bool;
	if(var_52_bool != 0) {
		func_4611();
	} else {
		var_58_string = "";
		func_5064("Neutral");
	}
	return 0;
	
}


task_20_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_cvector, var_51_object)
{
	var_52_bool = 0; var_53_bool = 0;
	IsOverrideActive(var_53_bool);
	var_54_bool = var_53_bool == 0; //@nz
	if(var_54_bool != 0) {
		EventDisable(0);
		func_4802();
		var_55_bool = 0; var_56_object = Obj();
		var_51_object = var_56_object;
		func_4825(var_55_bool, var_56_object);
		EventEnable(0);
		var_69_object = Obj();
		var_51_object = var_69_object;
		func_5932(var_69_object);
		var_1103_string = "";
		func_5064("Neutral");
		func_4620();
		func_4611();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_cvector)
{
	var_51_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_4555(var_50_cvector);
	return 0;
}


func_0(var_0_object, var_72_int, var_73_object)
{
	var_75_object = Obj(); var_76_bool = 0; var_77_int = 0; var_78_bool = 0; var_79_object = Obj(); var_80_bool = 0; var_81_int = 0; var_82_bool = 0;
	var_0_object = var_73_object;
	var_83_bool = 0; var_84_object = Obj(); var_85_float = 0;
	var_73_object = var_84_object;
	func_4839(var_83_bool, var_84_object, (float)70.0);
	var_130_bool = var_83_bool == 0; //@nz
	if(var_130_bool != 0) {
		var_72_int = -2;
		return 8;
	}
	CreateDialog(var_79_object);
	var_131_int = 0;
	func_5251(var_131_int);
	@@var_79_object:SetNPCName(var_131_int);
	var_132_int = 0;
	func_5249(var_132_int);
	@@var_79_object:SetNPCDescription(var_132_int);
	var_133_string = "";
	func_5253(var_133_string);
	@@var_79_object:SetPhoto(var_133_string);
	var_134_string = "";
	func_5255(var_134_string);
	@@var_79_object:SetPhoto2(var_134_string);
	var_135_int = 0;
	func_5915(var_135_int);
	@@var_79_object:SetPlayerName(var_135_int);
	IsOverrideActive(var_80_bool);
	var_143_bool = var_80_bool;
	if(var_143_bool != 0) {
		var_72_int = -2;
		return 8;
	}
	DoDialog(var_79_object);
	var_144_bool = 0; var_145_object = Obj();
	func_5117(Obj());
	var_146_object = var_145_object;
	func_4926(var_144_bool, var_145_object);
	var_239_object = Obj(); var_240_object = Obj();
	var_73_object = var_239_object;
	var_79_object = var_240_object;
	TaskCall(1);
	func_81(var_241_object, var_242_object, var_243_string, var_244_bool, var_239_object, var_240_object);
	TaskReturn();
	@@var_79_object:IsDialogEnd(var_82_bool);
	
Label_63:
	var_295_bool = var_82_bool == 0; //@nz
	if(var_295_bool != 0) {
		sync();
		@@var_79_object:IsDialogEnd(var_82_bool);
		goto Label_63;
	}
	var_73_object = Obj();
	func_4908();
	StopDialog(var_79_object);
	@@var_79_object:GetReturnValue((int)-1);
	var_81_int = var_72_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5378()
{
	SetVariable("ood6Katerina1", (int)1);
	return 0;
}


func_4611()
{
	var_1105_float = 0; var_1106_float = 0;
	rand(var_1106_float, (int)8, (int)16);
	SetTimer((int)10, var_1106_float);
	return 2;
}


func_5123(var_110_cvector, var_111_cvector)
{
	var_113_float = 0; var_114_float = 0;
	var_115_int = var_111_cvector | var_111_cvector;
	var_114_float = sqrt(var_115_int);
	var_116_float = 9.999999974752427e-07;
	var_117_bool = var_114_float < var_116_float;
	if(var_117_bool != 0) {
		var_110_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_110_cvector = var_111_cvector / var_114_float;
	return 2;
}


func_3590(var_0_object, var_908_int, var_909_object)
{
	var_911_object = Obj(); var_912_bool = 0; var_913_int = 0; var_914_bool = 0; var_915_object = Obj(); var_916_bool = 0; var_917_int = 0; var_918_bool = 0;
	var_0_object = var_909_object;
	var_919_bool = 0; var_920_object = Obj(); var_921_float = 0;
	var_909_object = var_920_object;
	func_4839(var_919_bool, var_920_object, (float)70.0);
	var_922_bool = var_919_bool == 0; //@nz
	if(var_922_bool != 0) {
		var_908_int = -2;
		return 8;
	}
	CreateDialog(var_915_object);
	var_923_int = 0;
	func_5251(var_923_int);
	@@var_915_object:SetNPCName(var_923_int);
	var_924_int = 0;
	func_5249(var_924_int);
	@@var_915_object:SetNPCDescription(var_924_int);
	var_925_string = "";
	func_5253(var_925_string);
	@@var_915_object:SetPhoto(var_925_string);
	var_926_string = "";
	func_5255(var_926_string);
	@@var_915_object:SetPhoto2(var_926_string);
	var_927_int = 0;
	func_5915(var_927_int);
	@@var_915_object:SetPlayerName(var_927_int);
	IsOverrideActive(var_916_bool);
	var_928_bool = var_916_bool;
	if(var_928_bool != 0) {
		var_908_int = -2;
		return 8;
	}
	DoDialog(var_915_object);
	var_929_bool = 0; var_930_object = Obj();
	func_5117(Obj());
	var_931_object = var_930_object;
	func_4926(var_929_bool, var_930_object);
	var_932_object = Obj(); var_933_object = Obj();
	var_909_object = var_932_object;
	var_915_object = var_933_object;
	TaskCall(15);
	func_3671(var_934_object, var_935_object, var_936_string, var_937_bool, var_932_object, var_933_object);
	TaskReturn();
	@@var_915_object:IsDialogEnd(var_918_bool);
	
Label_3653:
	var_984_bool = var_918_bool == 0; //@nz
	if(var_984_bool != 0) {
		sync();
		@@var_915_object:IsDialogEnd(var_918_bool);
		goto Label_3653;
	}
	var_909_object = Obj();
	func_4908();
	StopDialog(var_915_object);
	@@var_915_object:GetReturnValue((int)-1);
	var_917_int = var_908_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1542(var_0_object, var_1_object, var_2_object, var_3_string, var_561_object, var_562_object)
{
	var_0_object = var_562_object;
	var_1_object = var_561_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_568_bool = 0;
		var_568_bool = 0;
		var_569_bool = 0; var_570_object = Obj();
		var_570_object = var_1_object;
		func_5691(var_570_object);
		if(var_569_bool != 0) {
			var_575_bool = 0; var_576_object = Obj();
			var_576_object = var_1_object;
			func_5522(var_576_object);
			if(var_575_bool != 0) {
				var_568_bool = 1;
			}
		}
		if(var_568_bool != 0) {
			var_594_object = Obj(); var_595_object = Obj();
			var_594_object = var_1_object;
			var_595_object = var_0_object;
			func_5433();
			var_598_string = "";
			func_1649(var_562_object, "Grin");
			@@@var_0_object:SetMessage((int)509926);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509927, (int)10938, (int)10937);
			@@@var_0_object:AddReply((int)509940, (int)10954, (int)10953);
		} else {
				var_621_string = "";
				func_1649(var_562_object, "Penetrating");
				@@@var_0_object:SetMessage((int)532898);
				@@@var_0_object:ClearReplies();
				var_623_bool = 0; var_624_object = Obj();
				var_624_object = var_1_object;
				func_5559(var_624_object);
				if(var_623_bool != 0) {
					@@@var_0_object:AddReply((int)532897, (int)11224, (int)34384);
				}
				@@@var_0_object:AddReply((int)534175, (int)-1, (int)35757);
				@@@var_0_object:AddReply((int)534555, (int)-1, (int)36187);
				goto Label_1619;
		}
	}
Label_1619:
	var_613_bool = 0;
	func_5257(var_613_bool);
	if(var_613_bool != 0) {

	Label_1623:
		lshWaitForAnimEnd();
		var_614_string = var_3_string;
		if(var_614_string != 0) {
		} else {
			var_615_string = "";
			var_615_string = var_2_object;
			func_5064(var_615_string);
			goto Label_1623;
	}
		PlayAnimation("all", "idle");

	Label_1638:
		WaitForAnimEnd();
		var_618_string = var_3_string;
		if(var_618_string != 0) {
			goto Label_1648;
		}
		PlayAnimation("all", "idle");
		goto Label_1638;

	}
	goto Label_1648;
	
Label_1648:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x60a";


func_5384()
{
	SetVariable("ood6Katerina2", (int)1);
	return 0;
}


func_5643(var_852_bool)
{
	var_854_int = 0; var_855_string = "";
	func_5133(var_854_int, "ood6Katerina2");
	var_857_bool = var_854_int == (int)0;
	if(var_857_bool != 0) {
		var_852_bool = 1;
		return 0;
	}
	var_852_bool = 0;
	return 0;
}


func_4620()
{
	KillTimer((int)10);
	return 0;
}


func_5133(var_341_int, var_342_string)
{
	var_343_int = 0; var_344_int = 0;
	GetVariable(var_342_string, var_344_int);
	var_344_int = var_341_int;
	return 2;
}


func_5390()
{
	var_81_object = Obj(); var_82_object = Obj();
	SetVariable("d6q01", (int)2);
	func_5865(Obj());
	var_85_object = var_82_object;
	var_96_float = 0;
	func_5205(var_96_float);
	@@var_82_object:AddMark("d6q01KaterinaGotoLaska", "pt_map_laska", (int)1, (int)515398, var_96_float);
	var_103_float = 0;
	func_5205(var_103_float);
	@@var_82_object:AddMark("d6q01KaterinagotoLaskaSelf", "pt_map_katerina", (int)1, (int)515399, var_103_float);
	func_5811();
	var_127_bool = 0; var_128_string = ""; var_129_string = "";
	func_5193(var_127_bool, "quest_d6_01", "saburov_klara_remove");
	return 2;
}
EMIT "Stack[-1] = 0";


func_1039(var_0_object, var_437_int, var_438_object)
{
	var_440_object = Obj(); var_441_bool = 0; var_442_int = 0; var_443_bool = 0; var_444_object = Obj(); var_445_bool = 0; var_446_int = 0; var_447_bool = 0;
	var_0_object = var_438_object;
	var_448_bool = 0; var_449_object = Obj(); var_450_float = 0;
	var_438_object = var_449_object;
	func_4839(var_448_bool, var_449_object, (float)70.0);
	var_451_bool = var_448_bool == 0; //@nz
	if(var_451_bool != 0) {
		var_437_int = -2;
		return 8;
	}
	CreateDialog(var_444_object);
	var_452_int = 0;
	func_5251(var_452_int);
	@@var_444_object:SetNPCName(var_452_int);
	var_453_int = 0;
	func_5249(var_453_int);
	@@var_444_object:SetNPCDescription(var_453_int);
	var_454_string = "";
	func_5253(var_454_string);
	@@var_444_object:SetPhoto(var_454_string);
	var_455_string = "";
	func_5255(var_455_string);
	@@var_444_object:SetPhoto2(var_455_string);
	var_456_int = 0;
	func_5915(var_456_int);
	@@var_444_object:SetPlayerName(var_456_int);
	IsOverrideActive(var_445_bool);
	var_457_bool = var_445_bool;
	if(var_457_bool != 0) {
		var_437_int = -2;
		return 8;
	}
	DoDialog(var_444_object);
	var_458_bool = 0; var_459_object = Obj();
	func_5117(Obj());
	var_460_object = var_459_object;
	func_4926(var_458_bool, var_459_object);
	var_461_object = Obj(); var_462_object = Obj();
	var_438_object = var_461_object;
	var_444_object = var_462_object;
	TaskCall(5);
	func_1120(var_463_object, var_464_object, var_465_string, var_466_bool, var_461_object, var_462_object);
	TaskReturn();
	@@var_444_object:IsDialogEnd(var_447_bool);
	
Label_1102:
	var_533_bool = var_447_bool == 0; //@nz
	if(var_533_bool != 0) {
		sync();
		@@var_444_object:IsDialogEnd(var_447_bool);
		goto Label_1102;
	}
	var_438_object = Obj();
	func_4908();
	StopDialog(var_444_object);
	@@var_444_object:GetReturnValue((int)-1);
	var_446_int = var_437_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5138(var_108_object, var_109_string)
{
	var_110_object = Obj(); var_111_object = Obj(); var_112_object = Obj(); var_113_object = Obj();
	GetMainOutdoorScene(var_112_object);
	var_115_int = var_109_string + ".bin";
	AddBlankActor(var_113_object, var_112_object, var_109_string, var_115_int);
	var_113_object = var_108_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5655(var_869_bool)
{
	var_871_int = 0; var_872_string = "";
	func_5133(var_871_int, "d6q01");
	var_874_bool = var_871_int == (int)4;
	if(var_874_bool != 0) {
		var_869_bool = 1;
		return 0;
	}
	var_869_bool = 0;
	return 0;
}


func_5915(var_135_int)
{
	var_136_int = 0; var_137_int = 0;
	GetVariable("branch", var_137_int);
	var_140_bool = var_137_int == (int)0;
	if(var_140_bool != 0) {
		var_135_int = 1;
		return 2;
	EMIT "GOTO 0x172a";
	}
	var_142_bool = var_137_int == (int)1;
	if(var_142_bool != 0) {
		var_135_int = 2;
		return 2;
	}
	var_135_int = 3;
	return 2;
}


func_5149(var_76_int, var_77_int)
{
	var_78_object = Obj(); var_79_object = Obj();
	CreateIntVector(var_79_object);
	@@var_79_object:add(var_76_int);
	@@var_79_object:add(var_77_int);
	SendWorldWndMessage((int)3, var_79_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5667(var_882_bool)
{
	var_884_int = 0; var_885_string = "";
	func_5133(var_884_int, "d6q01");
	var_887_bool = var_884_int == (int)3;
	if(var_887_bool != 0) {
		var_882_bool = 1;
		return 0;
	}
	var_882_bool = 0;
	return 0;
}


func_292(var_0_object, var_795_int, var_796_object)
{
	var_798_object = Obj(); var_799_bool = 0; var_800_int = 0; var_801_bool = 0; var_802_object = Obj(); var_803_bool = 0; var_804_int = 0; var_805_bool = 0;
	var_0_object = var_796_object;
	var_806_bool = 0; var_807_object = Obj(); var_808_float = 0;
	var_796_object = var_807_object;
	func_4839(var_806_bool, var_807_object, (float)70.0);
	var_809_bool = var_806_bool == 0; //@nz
	if(var_809_bool != 0) {
		var_795_int = -2;
		return 8;
	}
	CreateDialog(var_802_object);
	var_810_int = 0;
	func_5251(var_810_int);
	@@var_802_object:SetNPCName(var_810_int);
	var_811_int = 0;
	func_5249(var_811_int);
	@@var_802_object:SetNPCDescription(var_811_int);
	var_812_string = "";
	func_5253(var_812_string);
	@@var_802_object:SetPhoto(var_812_string);
	var_813_string = "";
	func_5255(var_813_string);
	@@var_802_object:SetPhoto2(var_813_string);
	var_814_int = 0;
	func_5915(var_814_int);
	@@var_802_object:SetPlayerName(var_814_int);
	IsOverrideActive(var_803_bool);
	var_815_bool = var_803_bool;
	if(var_815_bool != 0) {
		var_795_int = -2;
		return 8;
	}
	DoDialog(var_802_object);
	var_816_bool = 0; var_817_object = Obj();
	func_5117(Obj());
	var_818_object = var_817_object;
	func_4926(var_816_bool, var_817_object);
	var_819_object = Obj(); var_820_object = Obj();
	var_796_object = var_819_object;
	var_802_object = var_820_object;
	TaskCall(3);
	func_373(var_821_object, var_822_object, var_823_string, var_824_bool, var_819_object, var_820_object);
	TaskReturn();
	@@var_802_object:IsDialogEnd(var_805_bool);
	
Label_355:
	var_904_bool = var_805_bool == 0; //@nz
	if(var_904_bool != 0) {
		sync();
		@@var_802_object:IsDialogEnd(var_805_bool);
		goto Label_355;
	}
	var_796_object = Obj();
	func_4908();
	StopDialog(var_802_object);
	@@var_802_object:GetReturnValue((int)-1);
	var_804_int = var_795_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5161(var_65_object, var_66_object, var_67_int)
{
	var_68_int = 0; var_69_int = 0; var_70_bool = 0; var_71_int = 0; var_72_int = 0; var_73_bool = 0;
	@@var_66_object:GetItemID(var_71_int);
	GetInvItemProperty(var_72_int, var_71_int, "Category");
	@@var_65_object:AddItem(var_73_bool, var_66_object, var_72_int, var_67_int);
	var_75_bool = var_73_bool == 0; //@nz
	if(var_75_bool != 0) {
		@@var_65_object:DropItems(var_66_object, var_67_int);
	} else {
		var_76_int = 0; var_77_int = 0;
		var_71_int = var_76_int;
		var_67_int = var_77_int;
		func_5149(var_76_int, var_77_int);
	}
	return 6;
	
}


func_2604(var_2_object, var_740_string)
{
	var_741_bool = 0;
	func_5257(var_741_bool);
	var_742_bool = var_741_bool == 0; //@nz
	if(var_742_bool != 0) {
		return 0;
	}
	var_743_bool = var_740_string == var_2_object;
	if(var_743_bool != 0) {
		return 0;
	}
	var_744_string = ""; var_745_bool = 0;
	var_740_string = var_744_string;
	var_747_bool = var_740_string == "";
	if(var_747_bool != 0) {
		var_745_bool = 0;
	} else {
		var_745_bool = 1;
	}
	func_5080(var_744_string, var_745_bool);
	var_2_object = var_740_string;
	return 0;
	
}


func_4908()
{
	var_297_bool = 0; var_298_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_300_bool = 0;
	func_5257(var_300_bool);
	if(var_300_bool != 0) {
	} else {
		HasAnimationTrack(var_298_bool, "head");
		var_302_bool = var_298_bool;
		if(var_302_bool == 0) goto Label_4925;
		UnlookAsync("head");
	}
Label_4925:
	return 2;
	
}


func_5932(var_69_object)
{
	var_70_bool = GlobalVars[1];
	var_71_bool = var_70_bool == 0; //@nz
	if(var_71_bool != 0) {
		var_72_int = 0; var_73_object = Obj();
		var_69_object = var_73_object;
		TaskCall(0);
		func_0(var_74_object, var_72_int, var_73_object);
		TaskReturn();
		var_304_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_305_bool = 0; var_306_int = 0;
	func_5219(var_305_bool, (int)1);
	if(var_305_bool != 0) {
		var_308_int = 0; var_309_object = Obj();
		var_69_object = var_309_object;
		TaskCall(12);
		func_2958(var_310_object, var_308_int, var_309_object);
		TaskReturn();
		return 0;
	}
	var_435_bool = 0; var_436_int = 0;
	func_5219(var_435_bool, (int)2);
	if(var_435_bool != 0) {
		var_437_int = 0; var_438_object = Obj();
		var_69_object = var_438_object;
		TaskCall(4);
		func_1039(var_439_object, var_437_int, var_438_object);
		TaskReturn();
		return 0;
	}
	var_535_bool = 0; var_536_int = 0;
	func_5219(var_535_bool, (int)3);
	if(var_535_bool != 0) {
		var_537_int = 0; var_538_object = Obj();
		var_69_object = var_538_object;
		TaskCall(6);
		func_1461(var_539_object, var_537_int, var_538_object);
		TaskReturn();
		return 0;
	}
	var_640_bool = 0; var_641_int = 0;
	func_5219(var_640_bool, (int)4);
	if(var_640_bool != 0) {
		var_642_int = 0; var_643_object = Obj();
		var_69_object = var_643_object;
		TaskCall(8);
		func_2128(var_644_object, var_642_int, var_643_object);
		TaskReturn();
		return 0;
	}
	var_707_bool = 0; var_708_int = 0;
	func_5219(var_707_bool, (int)5);
	if(var_707_bool != 0) {
		var_709_int = 0; var_710_object = Obj();
		var_69_object = var_710_object;
		TaskCall(10);
		func_2423(var_711_object, var_709_int, var_710_object);
		TaskReturn();
		return 0;
	}
	var_793_bool = 0; var_794_int = 0;
	func_5219(var_793_bool, (int)6);
	if(var_793_bool != 0) {
		var_795_int = 0; var_796_object = Obj();
		var_69_object = var_796_object;
		TaskCall(2);
		func_292(var_797_object, var_795_int, var_796_object);
		TaskReturn();
		return 0;
	}
	var_906_bool = 0; var_907_int = 0;
	func_5219(var_906_bool, (int)10);
	if(var_906_bool != 0) {
		var_908_int = 0; var_909_object = Obj();
		var_69_object = var_909_object;
		TaskCall(14);
		func_3590(var_910_object, var_908_int, var_909_object);
		TaskReturn();
		return 0;
	}
	var_986_bool = 0; var_987_int = 0;
	func_5219(var_986_bool, (int)12);
	if(var_986_bool != 0) {
		var_988_int = 0; var_989_object = Obj();
		var_69_object = var_989_object;
		TaskCall(16);
		func_4086(var_990_object, var_988_int, var_989_object);
		TaskReturn();
		return 0;
	}
	var_1047_int = 0; var_1048_object = Obj();
	var_69_object = var_1048_object;
	TaskCall(18);
	func_4345(var_1049_object, var_1047_int, var_1048_object);
	TaskReturn();
	return 0;
}


func_5679(var_875_bool)
{
	var_877_int = 0; var_878_string = "";
	func_5133(var_877_int, "ood6Katerina3");
	var_880_bool = var_877_int == (int)0;
	if(var_880_bool != 0) {
		var_875_bool = 1;
		return 0;
	}
	var_875_bool = 0;
	return 0;
}


func_5427()
{
	SetVariable("ood6Katerina3", (int)1);
	return 0;
}


func_5433()
{
	SetVariable("ood3Katerina1", (int)1);
	return 0;
}


func_5691(var_569_bool)
{
	var_571_int = 0; var_572_string = "";
	func_5133(var_571_int, "ood3Katerina1");
	var_574_bool = var_571_int == (int)0;
	if(var_574_bool != 0) {
		var_569_bool = 1;
		return 0;
	}
	var_569_bool = 0;
	return 0;
}


func_5180(var_60_object, var_61_string, var_62_int)
{
	var_63_object = Obj(); var_64_object = Obj();
	CreateInvItem(var_64_object);
	@@var_64_object:SetItemName(var_61_string);
	var_65_object = Obj(); var_66_object = Obj(); var_67_int = 0;
	var_60_object = var_65_object;
	var_64_object = var_66_object;
	var_62_int = var_67_int;
	func_5161(var_65_object, var_66_object, var_67_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4926(var_144_bool, var_145_object)
{
	var_149_int = 0; var_150_int = 0; var_151_int = 0; var_152_int = 0;
	GetVariable("voice_common", var_151_int);
	var_154_int = var_151_int;
	if(var_154_int != 0) {
		var_155_bool = 0; var_156_object = Obj();
		var_145_object = var_156_object;
		func_4984(var_155_bool, var_156_object);
		var_185_bool = var_155_bool == 0; //@nz
		if(var_185_bool != 0) {
			var_186_bool = 0; var_187_object = Obj();
			var_145_object = var_187_object;
			func_5021(var_186_bool, var_187_object);
			var_221_bool = var_186_bool == 0; //@nz
			if(var_221_bool != 0) {
				var_144_bool = 0;
				return 4;
			}
		}
		irand(var_152_int, (int)2);
		var_223_int = var_152_int;
		if(var_223_int != 0) {
			var_226_int = var_151_int + (int)1;
			var_228_int = var_226_int % (int)3;
			SetVariable("voice_common", var_228_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_231_bool = 0; var_232_object = Obj();
		var_145_object = var_232_object;
		func_5021(var_231_bool, var_232_object);
		var_233_bool = var_231_bool == 0; //@nz
		if(var_233_bool != 0) {
			var_234_bool = 0; var_235_object = Obj();
			var_145_object = var_235_object;
			func_4984(var_234_bool, var_235_object);
			var_236_bool = var_234_bool == 0; //@nz
			if(var_236_bool != 0) {
				var_144_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_4982;
	
Label_4982:
	var_144_bool = 1;
	return 4;
	
}


func_5439(var_57_object)
{
	Trace("drapery is given");
	var_60_object = Obj(); var_61_string = ""; var_62_int = 0;
	var_57_object = var_60_object;
	func_5180(var_60_object, "drapery", (int)1);
	return 0;
}


func_5703(var_682_bool)
{
	var_684_int = 0; var_685_string = "";
	func_5133(var_684_int, "ood4Katerina1");
	var_687_bool = var_684_int == (int)0;
	if(var_687_bool != 0) {
		var_682_bool = 1;
		return 0;
	}
	var_682_bool = 0;
	return 0;
}


func_4167(var_0_object, var_1_object, var_2_object, var_3_string, var_1012_object, var_1013_object)
{
	var_0_object = var_1013_object;
	var_1_object = var_1012_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1019_string = "";
		func_4230(var_1013_object, "Neutral");
		@@@var_0_object:SetMessage((int)535294);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535295, (int)36973, (int)36972);
		@@@var_0_object:AddReply((int)535302, (int)-1, (int)36980);
		@@@var_0_object:AddReply((int)535303, (int)-1, (int)36981);
		goto Label_4200;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x104b";
	}
Label_4200:
	var_1037_bool = 0;
	func_5257(var_1037_bool);
	if(var_1037_bool != 0) {

	Label_4204:
		lshWaitForAnimEnd();
		var_1038_string = var_3_string;
		if(var_1038_string != 0) {
		} else {
			var_1039_string = "";
			var_1039_string = var_2_object;
			func_5064(var_1039_string);
			goto Label_4204;
	}
		PlayAnimation("all", "idle");

	Label_4219:
		WaitForAnimEnd();
		var_1042_string = var_3_string;
		if(var_1042_string != 0) {
			goto Label_4229;
		}
		PlayAnimation("all", "idle");
		goto Label_4219;
	}
	goto Label_4229;
	
Label_4229:
	return 0;
	
}


func_5193(var_127_bool, var_128_string, var_129_string)
{
	var_130_object = Obj(); var_131_object = Obj();
	FindActor(var_131_object, var_128_string);
	var_132_bool = var_131_object == 0; //@ne
	if(var_132_bool != 0) {
		var_127_bool = 0;
		return 2;
	}
	Trigger(var_131_object, var_129_string);
	var_127_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5450()
{
	SetVariable("ood4Katerina1", (int)1);
	return 0;
}


func_4426(var_0_object, var_1_object, var_2_object, var_3_string, var_1071_object, var_1072_object)
{
	var_0_object = var_1072_object;
	var_1_object = var_1071_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1078_string = "";
		func_4484(var_1072_object, "Neutral");
		@@@var_0_object:SetMessage((int)540548);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540549, (int)-1, (int)42558);
		@@@var_0_object:AddReply((int)540797, (int)-1, (int)42846);
		goto Label_4454;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x114e";
	}
Label_4454:
	var_1093_bool = 0;
	func_5257(var_1093_bool);
	if(var_1093_bool != 0) {

	Label_4458:
		lshWaitForAnimEnd();
		var_1094_string = var_3_string;
		if(var_1094_string != 0) {
		} else {
			var_1095_string = "";
			var_1095_string = var_2_object;
			func_5064(var_1095_string);
			goto Label_4458;
	}
		PlayAnimation("all", "idle");

	Label_4473:
		WaitForAnimEnd();
		var_1098_string = var_3_string;
		if(var_1098_string != 0) {
			goto Label_4483;
		}
		PlayAnimation("all", "idle");
		goto Label_4473;
	}
	goto Label_4483;
	
Label_4483:
	return 0;
	
}


func_2128(var_0_object, var_642_int, var_643_object)
{
	var_645_object = Obj(); var_646_bool = 0; var_647_int = 0; var_648_bool = 0; var_649_object = Obj(); var_650_bool = 0; var_651_int = 0; var_652_bool = 0;
	var_0_object = var_643_object;
	var_653_bool = 0; var_654_object = Obj(); var_655_float = 0;
	var_643_object = var_654_object;
	func_4839(var_653_bool, var_654_object, (float)70.0);
	var_656_bool = var_653_bool == 0; //@nz
	if(var_656_bool != 0) {
		var_642_int = -2;
		return 8;
	}
	CreateDialog(var_649_object);
	var_657_int = 0;
	func_5251(var_657_int);
	@@var_649_object:SetNPCName(var_657_int);
	var_658_int = 0;
	func_5249(var_658_int);
	@@var_649_object:SetNPCDescription(var_658_int);
	var_659_string = "";
	func_5253(var_659_string);
	@@var_649_object:SetPhoto(var_659_string);
	var_660_string = "";
	func_5255(var_660_string);
	@@var_649_object:SetPhoto2(var_660_string);
	var_661_int = 0;
	func_5915(var_661_int);
	@@var_649_object:SetPlayerName(var_661_int);
	IsOverrideActive(var_650_bool);
	var_662_bool = var_650_bool;
	if(var_662_bool != 0) {
		var_642_int = -2;
		return 8;
	}
	DoDialog(var_649_object);
	var_663_bool = 0; var_664_object = Obj();
	func_5117(Obj());
	var_665_object = var_664_object;
	func_4926(var_663_bool, var_664_object);
	var_666_object = Obj(); var_667_object = Obj();
	var_643_object = var_666_object;
	var_649_object = var_667_object;
	TaskCall(9);
	func_2209(var_668_object, var_669_object, var_670_string, var_671_bool, var_666_object, var_667_object);
	TaskReturn();
	@@var_649_object:IsDialogEnd(var_652_bool);
	
Label_2191:
	var_705_bool = var_652_bool == 0; //@nz
	if(var_705_bool != 0) {
		sync();
		@@var_649_object:IsDialogEnd(var_652_bool);
		goto Label_2191;
	}
	var_643_object = Obj();
	func_4908();
	StopDialog(var_649_object);
	@@var_649_object:GetReturnValue((int)-1);
	var_651_int = var_642_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_239_object, var_240_object)
{
	var_0_object = var_240_object;
	var_1_object = var_239_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_246_object = Obj(); var_247_object = Obj();
		var_246_object = var_1_object;
		var_247_object = var_0_object;
		func_5259();
		var_250_string = "";
		func_149(var_240_object, "Neutral");
		@@@var_0_object:SetMessage((int)500295);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)500296, (int)350, (int)347);
		@@@var_0_object:AddReply((int)500297, (int)350, (int)348);
		@@@var_0_object:AddReply((int)500298, (int)350, (int)349);
		goto Label_119;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_119:
	var_277_bool = 0;
	func_5257(var_277_bool);
	if(var_277_bool != 0) {

	Label_123:
		lshWaitForAnimEnd();
		var_278_string = var_3_string;
		if(var_278_string != 0) {
		} else {
			var_279_string = "";
			var_279_string = var_2_object;
			func_5064(var_279_string);
			goto Label_123;
	}
		PlayAnimation("all", "idle");

	Label_138:
		WaitForAnimEnd();
		var_292_string = var_3_string;
		if(var_292_string != 0) {
			goto Label_148;
		}
		PlayAnimation("all", "idle");
		goto Label_138;
	}
	goto Label_148;
	
Label_148:
	return 0;
	
}


func_5456()
{
	SetVariable("ood2Katerina1", (int)1);
	return 0;
}


func_5715(var_468_bool)
{
	var_470_int = 0; var_471_string = "";
	func_5133(var_470_int, "ood2Katerina1");
	var_473_bool = var_470_int == (int)0;
	if(var_473_bool != 0) {
		var_468_bool = 1;
		return 0;
	}
	var_468_bool = 0;
	return 0;
}


func_5205(var_74_float)
{
	var_75_float = 0; var_76_float = 0;
	GetGameTime(var_76_float);
	var_76_float = var_74_float;
	return 2;
}


func_5462()
{
	SetVariable("ood2Katerina2", (int)1);
	return 0;
}


func_3671(var_0_object, var_1_object, var_2_object, var_3_string, var_932_object, var_933_object)
{
	var_0_object = var_933_object;
	var_1_object = var_932_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_939_bool = 0; var_940_object = Obj();
		var_940_object = var_1_object;
		func_5510(var_940_object);
		if(var_939_bool != 0) {
			var_945_object = Obj(); var_946_object = Obj();
			var_945_object = var_1_object;
			var_946_object = var_0_object;
			func_5313();
			var_949_object = Obj(); var_950_object = Obj();
			var_949_object = var_1_object;
			var_950_object = var_0_object;
			func_5319();
			var_953_string = "";
			func_3764(var_933_object, "Fear");
			@@@var_0_object:SetMessage((int)534079);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534080, (int)38114, (int)35673);
			@@@var_0_object:AddReply((int)536380, (int)38114, (int)38153);
		} else {
				var_976_string = "";
				func_3764(var_933_object, "Neutral");
				@@@var_0_object:SetMessage((int)534086);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)534090, (int)-1, (int)35683);
				@@@var_0_object:AddReply((int)536397, (int)-1, (int)38176);
				goto Label_3734;
		}
	}
Label_3734:
	var_968_bool = 0;
	func_5257(var_968_bool);
	if(var_968_bool != 0) {

	Label_3738:
		lshWaitForAnimEnd();
		var_969_string = var_3_string;
		if(var_969_string != 0) {
		} else {
			var_970_string = "";
			var_970_string = var_2_object;
			func_5064(var_970_string);
			goto Label_3738;
	}
		PlayAnimation("all", "idle");

	Label_3753:
		WaitForAnimEnd();
		var_973_string = var_3_string;
		if(var_973_string != 0) {
			goto Label_3763;
		}
		PlayAnimation("all", "idle");
		goto Label_3753;

	}
	goto Label_3763;
	
Label_3763:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xe5b";


func_5210(var_199_int)
{
	var_200_float = 0; var_201_float = 0;
	GetGameTime(var_201_float);
	var_203_int = 0;
	var_203_int = var_201_float / (int)24;
	var_199_int = (int)1 + var_203_int;
	return 2;
}


func_5468()
{
	SetVariable("ood5Katerina1", (int)1);
	return 0;
}


func_5727(var_504_bool)
{
	var_506_int = 0; var_507_string = "";
	func_5133(var_506_int, "ood2Katerina2");
	var_509_bool = var_506_int == (int)0;
	if(var_509_bool != 0) {
		var_504_bool = 1;
		return 0;
	}
	var_504_bool = 0;
	return 0;
}


func_1120(var_0_object, var_1_object, var_2_object, var_3_string, var_461_object, var_462_object)
{
	var_0_object = var_462_object;
	var_1_object = var_461_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_468_bool = 0; var_469_object = Obj();
		var_469_object = var_1_object;
		func_5715(var_469_object);
		if(var_468_bool != 0) {
			var_474_object = Obj(); var_475_object = Obj();
			var_474_object = var_1_object;
			var_475_object = var_0_object;
			func_5456();
			var_478_string = "";
			func_1248(var_462_object, "Neutral");
			@@@var_0_object:SetMessage((int)509330);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509331, (int)10248, (int)10247);
			@@@var_0_object:AddReply((int)509340, (int)10248, (int)10258);
			@@@var_0_object:AddReply((int)509341, (int)10248, (int)10260);
		} else {
				var_504_bool = 0; var_505_object = Obj();
				var_505_object = var_1_object;
				func_5727(var_505_object);
				if(var_504_bool != 0) {
					var_510_object = Obj(); var_511_object = Obj();
					var_510_object = var_1_object;
					var_511_object = var_0_object;
					func_5462();
					var_514_string = "";
					func_1248(var_462_object, "Neutral");
					@@@var_0_object:SetMessage((int)509323);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)509324, (int)10239, (int)10238);
					@@@var_0_object:AddReply((int)509328, (int)10239, (int)10242);
					@@@var_0_object:AddReply((int)509329, (int)10239, (int)10244);
					goto Label_1218;
				}
				var_525_string = "";
				func_1248(var_462_object, "Neutral");
				@@@var_0_object:SetMessage((int)515792);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)533895, (int)-1, (int)35453);
				@@@var_0_object:AddReply((int)533894, (int)-1, (int)35452);
				goto Label_1218;
		}
	}
Label_1218:
	var_496_bool = 0;
	func_5257(var_496_bool);
	if(var_496_bool != 0) {

	Label_1222:
		lshWaitForAnimEnd();
		var_497_string = var_3_string;
		if(var_497_string != 0) {
		} else {
			var_498_string = "";
			var_498_string = var_2_object;
			func_5064(var_498_string);
			goto Label_1222;
	}
		PlayAnimation("all", "idle");

	Label_1237:
		WaitForAnimEnd();
		var_501_string = var_3_string;
		if(var_501_string != 0) {
			goto Label_1247;
		}
		PlayAnimation("all", "idle");
		goto Label_1237;

	}
	goto Label_1247;
	
Label_1247:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x464";


func_5474(var_339_bool)
{
	var_341_int = 0; var_342_string = "";
	func_5133(var_341_int, "d1q01FirstGeorgVisit");
	var_346_bool = var_341_int == (int)1;
	if(var_346_bool != 0) {
		var_339_bool = 1;
		return 0;
	}
	var_339_bool = 0;
	return 0;
}


func_5219(var_305_bool, var_306_int)
{
	var_307_int = 0;
	func_5210(var_307_int);
	var_305_bool = var_307_int == var_306_int;
	return 0;
}


func_5225(var_76_string, var_77_int)
{
	var_78_string = ""; var_79_string = "";
	var_80_int = var_77_int;
	if(var_80_int != 0) {
		"idle" = "idle" + var_77_int;
	}
	var_79_string = var_76_string;
	return 2;
}


func_5739(var_762_bool)
{
	var_764_int = 0; var_765_string = "";
	func_5133(var_764_int, "ood5Katerina1");
	var_767_bool = var_764_int == (int)0;
	if(var_767_bool != 0) {
		var_762_bool = 1;
		return 0;
	}
	var_762_bool = 0;
	return 0;
}


func_5486(var_357_bool)
{
	var_359_int = 0; var_360_string = "";
	func_5133(var_359_int, "ood1Katerina1");
	var_362_bool = var_359_int == (int)0;
	if(var_362_bool != 0) {
		var_357_bool = 1;
		return 0;
	}
	var_357_bool = 0;
	return 0;
}


func_5232(var_70_int)
{
	var_71_int = 0; var_72_bool = 0; var_73_int = 0; var_74_bool = 0;
	var_73_int = 0;
	
Label_5234:
	var_76_string = ""; var_77_int = 0;
	var_73_int = var_77_int;
	func_5225(var_76_string, var_77_int);
	HasAnimation(var_74_bool, "all", var_76_string);
	var_81_bool = var_74_bool == 0; //@nz
	if(var_81_bool != 0) {
	} else {
		var_73_int = var_73_int + (int)1;
		goto Label_5234;
	}
	var_73_int = var_70_int;
	return 4;
	
}


func_1649(var_2_object, var_598_string)
{
	var_599_bool = 0;
	func_5257(var_599_bool);
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
	func_5080(var_602_string, var_603_bool);
	var_2_object = var_598_string;
	return 0;
	
}


func_3186(var_2_object, var_348_string)
{
	var_349_bool = 0;
	func_5257(var_349_bool);
	var_350_bool = var_349_bool == 0; //@nz
	if(var_350_bool != 0) {
		return 0;
	}
	var_351_bool = var_348_string == var_2_object;
	if(var_351_bool != 0) {
		return 0;
	}
	var_352_string = ""; var_353_bool = 0;
	var_348_string = var_352_string;
	var_355_bool = var_348_string == "";
	if(var_355_bool != 0) {
		var_353_bool = 0;
	} else {
		var_353_bool = 1;
	}
	func_5080(var_352_string, var_353_bool);
	var_2_object = var_348_string;
	return 0;
	
}


func_373(var_0_object, var_1_object, var_2_object, var_3_string, var_819_object, var_820_object)
{
	var_0_object = var_820_object;
	var_1_object = var_819_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_826_string = "";
		func_501(var_820_object, "Fear");
		@@@var_0_object:SetMessage((int)512770);
		@@@var_0_object:ClearReplies();
		var_835_bool = 0;
		var_835_bool = 0;
		var_836_bool = 0; var_837_object = Obj();
		var_837_object = var_1_object;
		func_5631(var_837_object);
		if(var_836_bool != 0) {
			var_842_bool = 0; var_843_object = Obj();
			var_843_object = var_1_object;
			func_5607(var_843_object);
			if(var_842_bool != 0) {
				var_835_bool = 1;
			}
		}
		if(var_835_bool != 0) {
			@@@var_0_object:AddReply((int)512771, (int)3726, (int)13970);
		}
		var_851_bool = 0;
		var_851_bool = 0;
		var_852_bool = 0; var_853_object = Obj();
		var_853_object = var_1_object;
		func_5643(var_853_object);
		if(var_852_bool != 0) {
			var_858_bool = 0; var_859_object = Obj();
			var_859_object = var_1_object;
			func_5619(var_859_object);
			if(var_858_bool != 0) {
				var_851_bool = 1;
			}
		}
		if(var_851_bool != 0) {
			@@@var_0_object:AddReply((int)512772, (int)13972, (int)13971);
		}
		var_867_bool = 0;
		var_867_bool = 1;
		var_868_bool = 0;
		var_868_bool = 0;
		var_869_bool = 0; var_870_object = Obj();
		var_870_object = var_1_object;
		func_5655(var_870_object);
		if(var_869_bool != 0) {
			var_875_bool = 0; var_876_object = Obj();
			var_876_object = var_1_object;
			func_5679(var_876_object);
			if(var_875_bool != 0) {
				var_868_bool = 1;
			}
		}
		if(var_868_bool != 1) {
			var_881_bool = 0;
			var_881_bool = 0;
			var_882_bool = 0; var_883_object = Obj();
			var_883_object = var_1_object;
			func_5667(var_883_object);
			if(var_882_bool != 0) {
				var_888_bool = 0; var_889_object = Obj();
				var_889_object = var_1_object;
				func_5679(var_889_object);
				if(var_888_bool != 0) {
					var_881_bool = 1;
				}
			}
			if(var_881_bool != 1) {
				var_867_bool = 0;
			}
		}
		if(var_867_bool != 0) {
			@@@var_0_object:AddReply((int)512791, (int)13991, (int)13990);
		}
		@@@var_0_object:AddReply((int)512790, (int)-1, (int)13989);
		goto Label_471;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x179";
	}
Label_471:
	var_896_bool = 0;
	func_5257(var_896_bool);
	if(var_896_bool != 0) {

	Label_475:
		lshWaitForAnimEnd();
		var_897_string = var_3_string;
		if(var_897_string != 0) {
		} else {
			var_898_string = "";
			var_898_string = var_2_object;
			func_5064(var_898_string);
			goto Label_475;
	}
		PlayAnimation("all", "idle");

	Label_490:
		WaitForAnimEnd();
		var_901_string = var_3_string;
		if(var_901_string != 0) {
			goto Label_500;
		}
		PlayAnimation("all", "idle");
		goto Label_490;
	}
	goto Label_500;
	
Label_500:
	return 0;
	
}


func_5751(var_384_bool)
{
	var_386_bool = 0;
	var_386_bool = 0;
	var_387_bool = 0;
	var_387_bool = 0;
	var_388_int = 0; var_389_string = "";
	func_5133(var_388_int, "d1q01");
	var_391_bool = var_388_int != (int)0;
	if(var_391_bool != 0) {
		var_392_int = 0; var_393_string = "";
		func_5133(var_392_int, "d1q01");
		var_395_bool = var_392_int != (int)1000;
		if(var_395_bool != 0) {
			var_387_bool = 1;
		}
	}
	if(var_387_bool != 0) {
		var_396_int = 0; var_397_string = "";
		func_5133(var_396_int, "d1q01");
		var_399_bool = var_396_int != (int)-1;
		if(var_399_bool != 0) {
			var_386_bool = 1;
		}
	}
	if(var_386_bool != 0) {
		var_384_bool = 1;
		return 0;
	}
	var_384_bool = 0;
	return 0;
}


func_2423(var_0_object, var_709_int, var_710_object)
{
	var_712_object = Obj(); var_713_bool = 0; var_714_int = 0; var_715_bool = 0; var_716_object = Obj(); var_717_bool = 0; var_718_int = 0; var_719_bool = 0;
	var_0_object = var_710_object;
	var_720_bool = 0; var_721_object = Obj(); var_722_float = 0;
	var_710_object = var_721_object;
	func_4839(var_720_bool, var_721_object, (float)70.0);
	var_723_bool = var_720_bool == 0; //@nz
	if(var_723_bool != 0) {
		var_709_int = -2;
		return 8;
	}
	CreateDialog(var_716_object);
	var_724_int = 0;
	func_5251(var_724_int);
	@@var_716_object:SetNPCName(var_724_int);
	var_725_int = 0;
	func_5249(var_725_int);
	@@var_716_object:SetNPCDescription(var_725_int);
	var_726_string = "";
	func_5253(var_726_string);
	@@var_716_object:SetPhoto(var_726_string);
	var_727_string = "";
	func_5255(var_727_string);
	@@var_716_object:SetPhoto2(var_727_string);
	var_728_int = 0;
	func_5915(var_728_int);
	@@var_716_object:SetPlayerName(var_728_int);
	IsOverrideActive(var_717_bool);
	var_729_bool = var_717_bool;
	if(var_729_bool != 0) {
		var_709_int = -2;
		return 8;
	}
	DoDialog(var_716_object);
	var_730_bool = 0; var_731_object = Obj();
	func_5117(Obj());
	var_732_object = var_731_object;
	func_4926(var_730_bool, var_731_object);
	var_733_object = Obj(); var_734_object = Obj();
	var_710_object = var_733_object;
	var_716_object = var_734_object;
	TaskCall(11);
	func_2504(var_735_object, var_736_object, var_737_string, var_738_bool, var_733_object, var_734_object);
	TaskReturn();
	@@var_716_object:IsDialogEnd(var_719_bool);
	
Label_2486:
	var_791_bool = var_719_bool == 0; //@nz
	if(var_791_bool != 0) {
		sync();
		@@var_716_object:IsDialogEnd(var_719_bool);
		goto Label_2486;
	}
	var_710_object = Obj();
	func_4908();
	StopDialog(var_716_object);
	@@var_716_object:GetReturnValue((int)-1);
	var_718_int = var_709_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4984(var_155_bool, var_156_object)
{
	var_157_string = ""; var_158_int = 0; var_159_bool = 0; var_160_int = 0; var_161_string = ""; var_162_string = ""; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_string = "";
	var_162_string = "c";
	var_163_int = 0;
	
Label_4987:
	if((int)1 != 0) {
		var_169_int = var_163_int + (int)1;
		var_170_int = var_162_string + var_169_int;
		@@var_156_object:HasProperty(var_170_int, var_164_bool);
		var_171_bool = var_164_bool == 0; //@nz
		if(var_171_bool != 0) {
		} else {
			var_163_int = var_163_int + (int)1;
			goto Label_4987;
		}
	}
	var_172_bool = var_163_int == 0; //@nz
	if(var_172_bool != 0) {
		var_155_bool = 0;
		return 10;
	}
	var_165_int = 0;
	var_174_bool = var_163_int > (int)1;
	if(var_174_bool != 0) {
		irand(var_165_int, var_163_int);
	}
	var_176_int = var_165_int + (int)1;
	var_177_int = var_162_string + var_176_int;
	@@var_156_object:GetProperty(var_177_int, var_166_string);
	var_178_bool = 0; var_179_string = "";
	var_166_string = var_179_string;
	func_5095(var_178_bool, var_179_string);
	var_178_bool = var_155_bool;
	return 10;
	
}


func_5498(var_378_bool)
{
	var_380_int = 0; var_381_string = "";
	func_5133(var_380_int, "ood1Katerina2");
	var_383_bool = var_380_int == (int)0;
	if(var_383_bool != 0) {
		var_378_bool = 1;
		return 0;
	}
	var_378_bool = 0;
	return 0;
}


func_4731()
{
	var_56_int = 0; var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_int = 0; var_61_bool = 0; var_62_int = 0; var_63_int = 0; var_64_bool = 0; var_65_int = 0; var_66_int = 0; var_67_bool = 0;
	WaitForAnimEnd();
	var_68_bool = 0;
	func_4834(var_68_bool);
	var_69_bool = var_68_bool == 0; //@nz
	if(var_69_bool != 0) {
		return 12;
	}
	func_5232((int)0);
	var_70_int = var_62_int;
	var_63_int = 0;
	
Label_4745:
	var_83_bool = 0;
	var_83_bool = 0;
	var_85_bool = var_63_int < (int)5;
	if(var_85_bool != 0) {
		var_86_bool = 0;
		func_4834(var_86_bool);
		if(var_86_bool != 0) {
			var_83_bool = 1;
		}
	}
	if(var_83_bool != 0) {
		var_87_bool = var_62_int == 0; //@nz
		if(var_87_bool != 0) {
			Sleep((int)3, var_64_bool);
			var_89_bool = var_64_bool == 0; //@nz
			if(var_89_bool != 0) {
			} else {
		} else {
				irand(var_65_int, var_62_int);
				irand(var_66_int, (int)5);
				var_95_bool = var_66_int != (int)0;
				if(var_95_bool != 0) {
					var_65_int = 0;
				}
				var_97_string = ""; var_98_int = 0;
				var_65_int = var_98_int;
				func_5225(var_97_string, var_98_int);
				PlayAnimation("all", var_97_string);
				WaitForAnimEnd(var_67_bool);
				var_99_bool = var_67_bool == 0; //@nz
				if(var_99_bool == 0) goto Label_4786;
				goto Label_4797;
		}
		Label_4786:
			var_90_bool = 0;
			func_4800(var_90_bool);
			var_91_bool = var_90_bool == 0; //@nz
			if(var_91_bool != 0) {
				goto Label_4797;
			}
			ResetAAS();
			var_63_int = var_63_int + (int)1;
			goto Label_4745;

		}
	}
Label_4797:
	ResetAAS();
	return 12;
	
}


func_5249(var_132_int)
{
	var_132_int = 515539;
	return 0;
}


func_5251(var_131_int)
{
	var_131_int = 502864;
	return 0;
}


func_4484(var_2_object, var_1078_string)
{
	var_1079_bool = 0;
	func_5257(var_1079_bool);
	var_1080_bool = var_1079_bool == 0; //@nz
	if(var_1080_bool != 0) {
		return 0;
	}
	var_1081_bool = var_1078_string == var_2_object;
	if(var_1081_bool != 0) {
		return 0;
	}
	var_1082_string = ""; var_1083_bool = 0;
	var_1078_string = var_1082_string;
	var_1085_bool = var_1078_string == "";
	if(var_1085_bool != 0) {
		var_1083_bool = 0;
	} else {
		var_1083_bool = 1;
	}
	func_5080(var_1082_string, var_1083_bool);
	var_2_object = var_1078_string;
	return 0;
	
}


func_5253(var_133_string)
{
	var_133_string = "ui/NPC_Katerina.png";
	return 0;
}


func_4230(var_2_object, var_1019_string)
{
	var_1020_bool = 0;
	func_5257(var_1020_bool);
	var_1021_bool = var_1020_bool == 0; //@nz
	if(var_1021_bool != 0) {
		return 0;
	}
	var_1022_bool = var_1019_string == var_2_object;
	if(var_1022_bool != 0) {
		return 0;
	}
	var_1023_string = ""; var_1024_bool = 0;
	var_1019_string = var_1023_string;
	var_1026_bool = var_1019_string == "";
	if(var_1026_bool != 0) {
		var_1024_bool = 0;
	} else {
		var_1024_bool = 1;
	}
	func_5080(var_1023_string, var_1024_bool);
	var_2_object = var_1019_string;
	return 0;
	
}


func_5255(var_134_string)
{
	var_134_string = "ui/NPC_Katerina_b.png";
	return 0;
}


func_5510(var_939_bool)
{
	var_941_int = 0; var_942_string = "";
	func_5133(var_941_int, "ood10Katerina1");
	var_944_bool = var_941_int == (int)0;
	if(var_944_bool != 0) {
		var_939_bool = 1;
		return 0;
	}
	var_939_bool = 0;
	return 0;
}


func_5257(var_126_bool)
{
	var_126_bool = 1;
	return 0;
}


func_5259()
{
	SetVariable("KnowKaterina", (int)1);
	return 0;
}


func_2958(var_0_object, var_308_int, var_309_object)
{
	var_311_object = Obj(); var_312_bool = 0; var_313_int = 0; var_314_bool = 0; var_315_object = Obj(); var_316_bool = 0; var_317_int = 0; var_318_bool = 0;
	var_0_object = var_309_object;
	var_319_bool = 0; var_320_object = Obj(); var_321_float = 0;
	var_309_object = var_320_object;
	func_4839(var_319_bool, var_320_object, (float)70.0);
	var_322_bool = var_319_bool == 0; //@nz
	if(var_322_bool != 0) {
		var_308_int = -2;
		return 8;
	}
	CreateDialog(var_315_object);
	var_323_int = 0;
	func_5251(var_323_int);
	@@var_315_object:SetNPCName(var_323_int);
	var_324_int = 0;
	func_5249(var_324_int);
	@@var_315_object:SetNPCDescription(var_324_int);
	var_325_string = "";
	func_5253(var_325_string);
	@@var_315_object:SetPhoto(var_325_string);
	var_326_string = "";
	func_5255(var_326_string);
	@@var_315_object:SetPhoto2(var_326_string);
	var_327_int = 0;
	func_5915(var_327_int);
	@@var_315_object:SetPlayerName(var_327_int);
	IsOverrideActive(var_316_bool);
	var_328_bool = var_316_bool;
	if(var_328_bool != 0) {
		var_308_int = -2;
		return 8;
	}
	DoDialog(var_315_object);
	var_329_bool = 0; var_330_object = Obj();
	func_5117(Obj());
	var_331_object = var_330_object;
	func_4926(var_329_bool, var_330_object);
	var_332_object = Obj(); var_333_object = Obj();
	var_309_object = var_332_object;
	var_315_object = var_333_object;
	TaskCall(13);
	func_3039(var_334_object, var_335_object, var_336_string, var_337_bool, var_332_object, var_333_object);
	TaskReturn();
	@@var_315_object:IsDialogEnd(var_318_bool);
	
Label_3021:
	var_433_bool = var_318_bool == 0; //@nz
	if(var_433_bool != 0) {
		sync();
		@@var_315_object:IsDialogEnd(var_318_bool);
		goto Label_3021;
	}
	var_309_object = Obj();
	func_4908();
	StopDialog(var_315_object);
	@@var_315_object:GetReturnValue((int)-1);
	var_317_int = var_308_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5265()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_5522(var_575_bool)
{
	var_577_bool = 0;
	var_577_bool = 0;
	var_578_bool = 0;
	var_578_bool = 0;
	var_579_int = 0; var_580_string = "";
	func_5133(var_579_int, "d3q01");
	var_582_bool = var_579_int == (int)0;
	var_583_bool = var_582_bool == 0; //@nz
	if(var_583_bool != 0) {
		var_584_int = 0; var_585_string = "";
		func_5133(var_584_int, "d3q01");
		var_587_bool = var_584_int == (int)1000;
		var_588_bool = var_587_bool == 0; //@nz
		if(var_588_bool != 0) {
			var_578_bool = 1;
		}
	}
	if(var_578_bool != 0) {
		var_589_int = 0; var_590_string = "";
		func_5133(var_589_int, "d3q01");
		var_592_bool = var_589_int == (int)-1;
		var_593_bool = var_592_bool == 0; //@nz
		if(var_593_bool != 0) {
			var_577_bool = 1;
		}
	}
	if(var_577_bool != 0) {
		var_575_bool = 1;
		return 0;
	}
	var_575_bool = 0;
	return 0;
}


func_149(var_2_object, var_250_string)
{
	var_251_bool = 0;
	func_5257(var_251_bool);
	var_252_bool = var_251_bool == 0; //@nz
	if(var_252_bool != 0) {
		return 0;
	}
	var_253_bool = var_250_string == var_2_object;
	if(var_253_bool != 0) {
		return 0;
	}
	var_254_string = ""; var_255_bool = 0;
	var_250_string = var_254_string;
	var_257_bool = var_250_string == "";
	if(var_257_bool != 0) {
		var_255_bool = 0;
	} else {
		var_255_bool = 1;
	}
	func_5080(var_254_string, var_255_bool);
	var_2_object = var_250_string;
	return 0;
	
}


func_5271()
{
	SetVariable("ood1Katerina1", (int)1);
	return 0;
}


func_5785()
{
	var_77_object = Obj(); var_78_object = Obj();
	CreateDiaryEntry(var_78_object, (int)666, (int)2, (int)534120);
	var_82_bool = 0; var_83_object = Obj(); var_84_int = 0;
	var_78_object = var_83_object;
	func_5837(var_82_bool, var_83_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5277()
{
	SetVariable("ood1Katerina2", (int)1);
	return 0;
}


func_5021(var_186_bool, var_187_object)
{
	var_188_string = ""; var_189_int = 0; var_190_bool = 0; var_191_int = 0; var_192_string = ""; var_193_string = ""; var_194_int = 0; var_195_bool = 0; var_196_int = 0; var_197_string = "";
	var_199_int = 0;
	func_5210(var_199_int);
	var_205_int = "d" + var_199_int;
	var_193_string = var_205_int + "m";
	var_194_int = 0;
	
Label_5030:
	if((int)1 != 0) {
		var_209_int = var_194_int + (int)1;
		var_210_int = var_193_string + var_209_int;
		@@var_187_object:HasProperty(var_210_int, var_195_bool);
		var_211_bool = var_195_bool == 0; //@nz
		if(var_211_bool != 0) {
		} else {
			var_194_int = var_194_int + (int)1;
			goto Label_5030;
		}
	}
	var_212_bool = var_194_int == 0; //@nz
	if(var_212_bool != 0) {
		var_186_bool = 0;
		return 10;
	}
	var_196_int = 0;
	var_214_bool = var_194_int > (int)1;
	if(var_214_bool != 0) {
		irand(var_196_int, var_194_int);
	}
	var_216_int = var_196_int + (int)1;
	var_217_int = var_193_string + var_216_int;
	@@var_187_object:GetProperty(var_217_int, var_197_string);
	var_218_bool = 0; var_219_string = "";
	var_197_string = var_219_string;
	func_5095(var_218_bool, var_219_string);
	var_218_bool = var_186_bool;
	return 10;
	
}


func_2209(var_0_object, var_1_object, var_2_object, var_3_string, var_666_object, var_667_object)
{
	var_0_object = var_667_object;
	var_1_object = var_666_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_673_string = "";
		func_2277(var_667_object, "Fear");
		@@@var_0_object:SetMessage((int)511203);
		@@@var_0_object:ClearReplies();
		var_682_bool = 0; var_683_object = Obj();
		var_683_object = var_1_object;
		func_5703(var_683_object);
		if(var_682_bool != 0) {
			@@@var_0_object:AddReply((int)511204, (int)12393, (int)12392);
		}
		@@@var_0_object:AddReply((int)515336, (int)-1, (int)16559);
		@@@var_0_object:AddReply((int)536116, (int)-1, (int)37872);
		goto Label_2247;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x8a5";
	}
Label_2247:
	var_697_bool = 0;
	func_5257(var_697_bool);
	if(var_697_bool != 0) {

	Label_2251:
		lshWaitForAnimEnd();
		var_698_string = var_3_string;
		if(var_698_string != 0) {
		} else {
			var_699_string = "";
			var_699_string = var_2_object;
			func_5064(var_699_string);
			goto Label_2251;
	}
		PlayAnimation("all", "idle");

	Label_2266:
		WaitForAnimEnd();
		var_702_string = var_3_string;
		if(var_702_string != 0) {
			goto Label_2276;
		}
		PlayAnimation("all", "idle");
		goto Label_2266;
	}
	goto Label_2276;
	
Label_2276:
	return 0;
	
}


func_5283()
{
	var_59_object = Obj(); var_60_object = Obj();
	SetVariable("d10q02", (int)1);
	func_5865(Obj());
	var_63_object = var_60_object;
	var_74_float = 0;
	func_5205(var_74_float);
	@@var_60_object:AddMark("d10q02KaterinaGotoRubin", "pt_region01_center01", (int)0, (int)515467, var_74_float);
	func_5785();
	func_5798();
	var_108_object = Obj(); var_109_string = "";
	func_5138(var_108_object, "quest_d10_02");
	return 2;
}
EMIT "Stack[-1] = 0";


func_5798()
{
	var_100_object = Obj(); var_101_object = Obj();
	CreateDiaryEntry(var_101_object, (int)667, (int)2, (int)534121);
	var_105_bool = 0; var_106_object = Obj(); var_107_int = 0;
	var_101_object = var_106_object;
	func_5837(var_105_bool, var_106_object, (int)666);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5811()
{
	var_104_object = Obj(); var_105_object = Obj();
	CreateDiaryEntry(var_105_object, (int)123, (int)1, (int)513746);
	var_109_bool = 0; var_110_object = Obj(); var_111_int = 0;
	var_105_object = var_110_object;
	func_5837(var_109_bool, var_110_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3764(var_2_object, var_953_string)
{
	var_954_bool = 0;
	func_5257(var_954_bool);
	var_955_bool = var_954_bool == 0; //@nz
	if(var_955_bool != 0) {
		return 0;
	}
	var_956_bool = var_953_string == var_2_object;
	if(var_956_bool != 0) {
		return 0;
	}
	var_957_string = ""; var_958_bool = 0;
	var_953_string = var_957_string;
	var_960_bool = var_953_string == "";
	if(var_960_bool != 0) {
		var_958_bool = 0;
	} else {
		var_958_bool = 1;
	}
	func_5080(var_957_string, var_958_bool);
	var_2_object = var_953_string;
	return 0;
	
}


func_1461(var_0_object, var_537_int, var_538_object)
{
	var_540_object = Obj(); var_541_bool = 0; var_542_int = 0; var_543_bool = 0; var_544_object = Obj(); var_545_bool = 0; var_546_int = 0; var_547_bool = 0;
	var_0_object = var_538_object;
	var_548_bool = 0; var_549_object = Obj(); var_550_float = 0;
	var_538_object = var_549_object;
	func_4839(var_548_bool, var_549_object, (float)70.0);
	var_551_bool = var_548_bool == 0; //@nz
	if(var_551_bool != 0) {
		var_537_int = -2;
		return 8;
	}
	CreateDialog(var_544_object);
	var_552_int = 0;
	func_5251(var_552_int);
	@@var_544_object:SetNPCName(var_552_int);
	var_553_int = 0;
	func_5249(var_553_int);
	@@var_544_object:SetNPCDescription(var_553_int);
	var_554_string = "";
	func_5253(var_554_string);
	@@var_544_object:SetPhoto(var_554_string);
	var_555_string = "";
	func_5255(var_555_string);
	@@var_544_object:SetPhoto2(var_555_string);
	var_556_int = 0;
	func_5915(var_556_int);
	@@var_544_object:SetPlayerName(var_556_int);
	IsOverrideActive(var_545_bool);
	var_557_bool = var_545_bool;
	if(var_557_bool != 0) {
		var_537_int = -2;
		return 8;
	}
	DoDialog(var_544_object);
	var_558_bool = 0; var_559_object = Obj();
	func_5117(Obj());
	var_560_object = var_559_object;
	func_4926(var_558_bool, var_559_object);
	var_561_object = Obj(); var_562_object = Obj();
	var_538_object = var_561_object;
	var_544_object = var_562_object;
	TaskCall(7);
	func_1542(var_563_object, var_564_object, var_565_string, var_566_bool, var_561_object, var_562_object);
	TaskReturn();
	@@var_544_object:IsDialogEnd(var_547_bool);
	
Label_1524:
	var_638_bool = var_547_bool == 0; //@nz
	if(var_638_bool != 0) {
		sync();
		@@var_544_object:IsDialogEnd(var_547_bool);
		goto Label_1524;
	}
	var_538_object = Obj();
	func_4908();
	StopDialog(var_544_object);
	@@var_544_object:GetReturnValue((int)-1);
	var_546_int = var_537_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5559(var_623_bool)
{
	var_625_int = 0; var_626_string = "";
	func_5133(var_625_int, "ood3Katerina2");
	var_628_bool = var_625_int == (int)0;
	if(var_628_bool != 0) {
		var_623_bool = 1;
		return 0;
	}
	var_623_bool = 0;
	return 0;
}


func_4800(var_90_bool)
{
	var_90_bool = 1;
	return 0;
}


func_5313()
{
	SetVariable("ood10Katerina1", (int)1);
	return 0;
}


func_4802()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_5824(var_91_object)
{
	var_92_object = Obj(); var_93_object = Obj();
	GetDiaryRoot(var_93_object);
	var_94_bool = var_93_object == 0; //@nz
	if(var_94_bool != 0) {
		Trace("Can't retrieve diary root");
		var_91_object = 0;
		return 2;
	}
	var_93_object = var_91_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5571(var_421_bool)
{
	var_423_int = 0; var_424_string = "";
	func_5133(var_423_int, "ood1Katerina3");
	var_426_bool = var_423_int == (int)0;
	if(var_426_bool != 0) {
		var_421_bool = 1;
		return 0;
	}
	var_421_bool = 0;
	return 0;
}


func_5319()
{
	SetVariable("d10KaterinaVisit", (int)1);
	return 0;
}


func_4807(var_66_float, var_67_object)
{
	var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0);
	GetPosition(var_71_cvector);
	@@var_67_object:GetPosition(var_72_cvector);
	var_73_cvector = var_72_cvector - var_71_cvector;
	var_66_float = var_73_cvector | var_73_cvector;
	return 6;
}


func_5064(var_279_string)
{
	var_280_bool = 0; var_281_float = 0; var_282_float = 0; var_283_bool = 0; var_284_float = 0; var_285_float = 0;
	lshHasAnimation(var_283_bool, var_279_string);
	var_286_bool = var_283_bool;
	if(var_286_bool != 0) {
		lshGetAnimTimes(var_279_string, var_284_float, var_285_float);
		lshPlayAnimation(var_284_float, var_285_float, (bool)0);
	} else {
		var_289_int = "Can't find lsh animation : " + var_279_string;
		Trace(var_289_int);
	}
	return 6;
	
}


func_2504(var_0_object, var_1_object, var_2_object, var_3_string, var_733_object, var_734_object)
{
	var_0_object = var_734_object;
	var_1_object = var_733_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_740_string = "";
		func_2604(var_734_object, "Penetrating");
		@@@var_0_object:SetMessage((int)511641);
		@@@var_0_object:ClearReplies();
		var_749_bool = 0; var_750_object = Obj();
		var_750_object = var_1_object;
		func_5583(var_750_object);
		if(var_749_bool != 0) {
			@@@var_0_object:AddReply((int)511642, (int)12842, (int)12841);
		}
		var_758_bool = 0;
		var_758_bool = 1;
		var_759_bool = 0;
		var_759_bool = 0;
		var_760_bool = 0; var_761_object = Obj();
		var_761_object = var_1_object;
		func_5583(var_761_object);
		if(var_760_bool != 0) {
			var_762_bool = 0; var_763_object = Obj();
			var_763_object = var_1_object;
			func_5739(var_763_object);
			if(var_762_bool != 0) {
				var_759_bool = 1;
			}
		}
		if(var_759_bool != 1) {
			var_768_bool = 0;
			var_768_bool = 0;
			var_769_bool = 0; var_770_object = Obj();
			var_770_object = var_1_object;
			func_5595(var_770_object);
			if(var_769_bool != 0) {
				var_775_bool = 0; var_776_object = Obj();
				var_776_object = var_1_object;
				func_5739(var_776_object);
				if(var_775_bool != 0) {
					var_768_bool = 1;
				}
			}
			if(var_768_bool != 1) {
				var_758_bool = 0;
			}
		}
		if(var_758_bool != 0) {
			@@@var_0_object:AddReply((int)511651, (int)12851, (int)12850);
		}
		@@@var_0_object:AddReply((int)511660, (int)-1, (int)12859);
		goto Label_2574;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x9cc";
	}
Label_2574:
	var_783_bool = 0;
	func_5257(var_783_bool);
	if(var_783_bool != 0) {

	Label_2578:
		lshWaitForAnimEnd();
		var_784_string = var_3_string;
		if(var_784_string != 0) {
		} else {
			var_785_string = "";
			var_785_string = var_2_object;
			func_5064(var_785_string);
			goto Label_2578;
	}
		PlayAnimation("all", "idle");

	Label_2593:
		WaitForAnimEnd();
		var_788_string = var_3_string;
		if(var_788_string != 0) {
			goto Label_2603;
		}
		PlayAnimation("all", "idle");
		goto Label_2593;
	}
	goto Label_2603;
	
Label_2603:
	return 0;
	
}


func_4555(var_0_object)
{
	var_52_bool = 0;
	func_4834(var_52_bool);
	var_55_bool = var_52_bool == 0; //@nz
	if(var_55_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_4564:
	func_4731();
	goto Label_4564;
}
EMIT "Return(); Pop(0)";


func_5325()
{
	SetVariable("ood3Katerina2", (int)1);
	return 0;
}


func_5837(var_82_bool, var_83_object, var_84_int)
{
	var_85_object = Obj(); var_86_object = Obj(); var_87_int = 0; var_88_object = Obj(); var_89_object = Obj(); var_90_int = 0;
	func_5824(Obj());
	var_91_object = var_88_object;
	@@var_88_object:Find(var_84_int, var_89_object);
	var_96_bool = var_89_object == 0; //@nz
	if(var_96_bool != 0) {
		var_98_int = "Can't find diary parent with id: " + var_84_int;
		Trace(var_98_int);
		var_82_bool = 0;
		return 6;
	}
	@@var_89_object:AddChild(var_83_object);
	SendWorldWndMessage((int)7);
	@@var_83_object:GetCategory(var_90_int);
	SetDiarySection(var_90_int);
	var_82_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_4815(var_59_bool, var_60_cvector)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_bool = 0;
	GetPosition(var_64_cvector);
	var_65_cvector = var_60_cvector - var_64_cvector;
	var_67_float = GetByIndex(var_65_cvector, 0);
	var_68_float = GetByIndex(var_65_cvector, 2);
	Rotate(var_67_float, var_68_float, var_66_bool);
	var_66_bool = var_59_bool;
	return 6;
}


func_5583(var_749_bool)
{
	var_751_int = 0; var_752_string = "";
	func_5133(var_751_int, "d5q01");
	var_754_bool = var_751_int == (int)3;
	if(var_754_bool != 0) {
		var_749_bool = 1;
		return 0;
	}
	var_749_bool = 0;
	return 0;
}


func_5331()
{
	SetVariable("d3KaterinaAboutKills", (int)1);
	return 0;
}


func_5080(var_254_string, var_255_bool)
{
	var_258_bool = 0; var_259_float = 0; var_260_float = 0; var_261_bool = 0; var_262_float = 0; var_263_float = 0;
	lshHasAnimation(var_261_bool, var_254_string);
	var_264_bool = var_261_bool;
	if(var_264_bool != 0) {
		lshGetAnimTimes(var_254_string, var_262_float, var_263_float);
		lshPlayAnimation(var_262_float, var_263_float, var_255_bool);
	} else {
		var_266_int = "Can't find lsh animation : " + var_254_string;
		Trace(var_266_int);
	}
	return 6;
	
}


func_5337()
{
	SetVariable("ood1Katerina3", (int)1);
	return 0;
}


func_4825(var_55_bool, var_56_object)
{
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0);
	@@var_56_object:GetPosition(var_58_cvector);
	var_59_bool = 0; var_60_cvector = CVector(0,0,0);
	var_58_cvector = var_60_cvector;
	func_4815(var_59_bool, var_60_cvector);
	var_59_bool = var_55_bool;
	return 2;
}


func_4569(var_76_bool)
{
	var_77_object = Obj(); var_78_object = Obj();
	FindActor(var_78_object, "player");
	var_80_bool = var_78_object == 0; //@nz
	if(var_80_bool != 0) {
		var_76_bool = 0;
		return 2;
	}
	var_81_bool = 0; var_82_object = Obj();
	var_78_object = var_82_object;
	func_4825(var_81_bool, var_82_object);
	var_81_bool = var_76_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5595(var_769_bool)
{
	var_771_int = 0; var_772_string = "";
	func_5133(var_771_int, "d5q01");
	var_774_bool = var_771_int == (int)4;
	if(var_774_bool != 0) {
		var_769_bool = 1;
		return 0;
	}
	var_769_bool = 0;
	return 0;
}


func_5343(var_117_object)
{
	var_118_object = Obj(); var_119_string = ""; var_120_float = 0;
	func_5865(Obj());
	var_121_object = var_118_object;
	func_5882(var_118_object, "pt_region01_center01", (float)2);
	var_141_object = Obj();
	func_5865(var_141_object);
	@@var_117_object:ShowMap(var_141_object);
	return 0;
}


func_1248(var_2_object, var_478_string)
{
	var_479_bool = 0;
	func_5257(var_479_bool);
	var_480_bool = var_479_bool == 0; //@nz
	if(var_480_bool != 0) {
		return 0;
	}
	var_481_bool = var_478_string == var_2_object;
	if(var_481_bool != 0) {
		return 0;
	}
	var_482_string = ""; var_483_bool = 0;
	var_478_string = var_482_string;
	var_485_bool = var_478_string == "";
	if(var_485_bool != 0) {
		var_483_bool = 0;
	} else {
		var_483_bool = 1;
	}
	func_5080(var_482_string, var_483_bool);
	var_2_object = var_478_string;
	return 0;
	
}


func_3039(var_0_object, var_1_object, var_2_object, var_3_string, var_332_object, var_333_object)
{
	var_0_object = var_333_object;
	var_1_object = var_332_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_339_bool = 0; var_340_object = Obj();
		var_340_object = var_1_object;
		func_5474(var_340_object);
		var_347_bool = var_339_bool == 0; //@nz
		if(var_347_bool != 0) {
			var_348_string = "";
			func_3186(var_333_object, "Neutral");
			@@@var_0_object:SetMessage((int)532198);
			@@@var_0_object:ClearReplies();
			var_357_bool = 0; var_358_object = Obj();
			var_358_object = var_1_object;
			func_5486(var_358_object);
			if(var_357_bool != 0) {
				@@@var_0_object:AddReply((int)532199, (int)33615, (int)33614);
			}
			@@@var_0_object:AddReply((int)532203, (int)-1, (int)33618);
		} else {
				var_377_bool = 0;
				var_377_bool = 0;
				var_378_bool = 0; var_379_object = Obj();
				var_379_object = var_1_object;
				func_5498(var_379_object);
				if(var_378_bool != 0) {
					var_384_bool = 0; var_385_object = Obj();
					var_385_object = var_1_object;
					func_5751(var_385_object);
					if(var_384_bool != 0) {
						var_377_bool = 1;
					}
				}
				if(var_377_bool != 0) {
					var_400_object = Obj(); var_401_object = Obj();
					var_400_object = var_1_object;
					var_401_object = var_0_object;
					func_5277();
					var_404_object = Obj(); var_405_object = Obj();
					var_404_object = var_1_object;
					var_405_object = var_0_object;
					func_5372();
					var_408_string = "";
					func_3186(var_333_object, "Penetrating");
					@@@var_0_object:SetMessage((int)532204);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)532205, (int)33621, (int)33620);
					@@@var_0_object:AddReply((int)532221, (int)33621, (int)33638);
					goto Label_3156;
				}
				var_416_string = "";
				func_3186(var_333_object, "Suffering");
				@@@var_0_object:SetMessage((int)532253);
				@@@var_0_object:ClearReplies();
				var_418_bool = 0;
				var_418_bool = 0;
				var_419_bool = 0; var_420_object = Obj();
				var_420_object = var_1_object;
				func_5751(var_420_object);
				if(var_419_bool != 0) {
					var_421_bool = 0; var_422_object = Obj();
					var_422_object = var_1_object;
					func_5571(var_422_object);
					if(var_421_bool != 0) {
						var_418_bool = 1;
					}
				}
				if(var_418_bool != 0) {
					@@@var_0_object:AddReply((int)533013, (int)34518, (int)34517);
				}
				@@@var_0_object:AddReply((int)532338, (int)-1, (int)33767);
				goto Label_3156;
		}
	}
Label_3156:
	var_369_bool = 0;
	func_5257(var_369_bool);
	if(var_369_bool != 0) {

	Label_3160:
		lshWaitForAnimEnd();
		var_370_string = var_3_string;
		if(var_370_string != 0) {
		} else {
			var_371_string = "";
			var_371_string = var_2_object;
			func_5064(var_371_string);
			goto Label_3160;
	}
		PlayAnimation("all", "idle");

	Label_3175:
		WaitForAnimEnd();
		var_374_string = var_3_string;
		if(var_374_string != 0) {
			goto Label_3185;
		}
		PlayAnimation("all", "idle");
		goto Label_3175;

	}
	goto Label_3185;
	
Label_3185:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xbe3";


func_4834(var_52_bool)
{
	var_53_bool = 0; var_54_bool = 0;
	IsLoaded(var_54_bool);
	var_54_bool = var_52_bool;
	return 2;
}


func_2277(var_2_object, var_673_string)
{
	var_674_bool = 0;
	func_5257(var_674_bool);
	var_675_bool = var_674_bool == 0; //@nz
	if(var_675_bool != 0) {
		return 0;
	}
	var_676_bool = var_673_string == var_2_object;
	if(var_676_bool != 0) {
		return 0;
	}
	var_677_string = ""; var_678_bool = 0;
	var_673_string = var_677_string;
	var_680_bool = var_673_string == "";
	if(var_680_bool != 0) {
		var_678_bool = 0;
	} else {
		var_678_bool = 1;
	}
	func_5080(var_677_string, var_678_bool);
	var_2_object = var_673_string;
	return 0;
	
}


func_4839(var_83_bool, var_84_object, var_85_float)
{
	var_86_float = 0; var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_bool = 0; var_94_bool = 0; var_95_float = 0; var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_bool = 0; var_103_bool = 0;
	@@var_84_object:GetPosition(var_96_cvector);
	@@var_84_object:GetEyesHeight(var_95_float);
	var_104_float = GetByIndex(var_96_cvector, 1);
	var_104_float = var_104_float + var_95_float;
	SetByIndex(var_96_cvector, 1) = var_104_float;
	GetPosition(var_97_cvector);
	GetEyesHeight(var_95_float);
	var_105_float = GetByIndex(var_97_cvector, 1);
	var_105_float = var_105_float + var_95_float;
	SetByIndex(var_97_cvector, 1) = var_105_float;
	var_98_cvector = var_96_cvector - var_97_cvector;
	var_106_float = GetByIndex(var_98_cvector, 1);
	SetByIndex(var_98_cvector, 1) = (float)0;
	var_107_int = var_98_cvector | var_98_cvector;
	var_108_float = sqrt(var_107_int);
	var_98_cvector = var_98_cvector / var_108_float;
	var_99_cvector = -var_98_cvector;
	var_109_float = var_98_cvector * var_85_float;
	var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0);
	var_111_cvector = var_99_cvector ^ CVector(0.0, 1.0, 0.0);
	func_5123(var_110_cvector, var_111_cvector);
	var_119_float = var_110_cvector * (int)25;
	var_120_int = var_109_float + var_119_float;
	var_100_cvector = var_120_int - CVector(0.0, 10.0, 0.0);
	var_101_cvector = var_97_cvector + var_100_cvector;
	IsOverrideActive(var_102_bool);
	var_122_bool = var_102_bool;
	if(var_122_bool != 0) {
		var_83_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_101_cvector, var_99_cvector, (bool)1);
	var_124_float = GetByIndex(var_100_cvector, 0);
	var_125_float = GetByIndex(var_100_cvector, 2);
	Rotate(var_124_float, var_125_float);
	var_126_bool = 0;
	func_5257(var_126_bool);
	if(var_126_bool != 0) {
	} else {
		HasAnimationTrack(var_103_bool, "head");
		var_128_bool = var_103_bool;
		if(var_128_bool == 0) goto Label_4902;
		LookAsyncCamera("head");
	}
Label_4902:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_83_bool = 1;
	return 18;
	
}


func_5607(var_842_bool)
{
	var_844_int = 0; var_845_string = "";
	func_5133(var_844_int, "d6q01");
	var_847_bool = var_844_int == (int)1;
	if(var_847_bool != 0) {
		var_842_bool = 1;
		return 0;
	}
	var_842_bool = 0;
	return 0;
}


func_5865(var_63_object)
{
	var_64_object = Obj(); var_65_object = Obj(); var_66_object = Obj(); var_67_object = Obj();
	GetMainOutdoorScene(var_66_object);
	var_68_bool = var_66_object == 0; //@ne
	if(var_68_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_67_object = 0;
		var_67_object = var_63_object;
		return 4;
	}
	@@var_66_object:GetMap(var_67_object);
	var_67_object = var_63_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4584(var_0_object)
{
	var_128_float = GetByIndex(var_0_object, 0);
	var_129_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_128_float, var_129_float);
	return 0;
}


func_5095(var_178_bool, var_179_string)
{
	var_180_bool = 0; var_181_bool = 0;
	var_182_bool = 0;
	func_5257(var_182_bool);
	if(var_182_bool != 0) {
		lshHasSpeech(var_181_bool, var_179_string);
		var_183_bool = var_181_bool;
		if(var_183_bool != 0) {
			lshPlaySpeech(var_179_string);
			var_178_bool = 1;
			return 2;
		}
	}
	var_178_bool = 0;
	return 2;
}


func_4589(var_59_bool)
{
	var_60_object = Obj(); var_61_bool = 0; var_62_object = Obj(); var_63_bool = 0;
	FindActor(var_62_object, "player");
	var_65_bool = var_62_object == 0; //@nz
	if(var_65_bool != 0) {
		var_59_bool = 0;
		return 4;
	}
	var_66_float = 0; var_67_object = Obj();
	var_62_object = var_67_object;
	func_4807(var_66_float, var_67_object);
	var_75_bool = var_66_float > (float)90000.0;
	if(var_75_bool != 0) {
		var_59_bool = 0;
		return 4;
	}
	CanSee(var_63_bool, var_62_object);
	var_63_bool = var_59_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_5359()
{
	var_59_int = 0; var_60_string = "";
	func_5133(var_59_int, "d5q01");
	var_64_bool = var_59_int != (int)4;
	if(var_64_bool != 0) {
		SetVariable("d5q01", (int)4);
	}
	return 0;
}


func_5619(var_858_bool)
{
	var_860_int = 0; var_861_string = "";
	func_5133(var_860_int, "d6q01KnowKillerIsKlara");
	var_863_bool = var_860_int == (int)1;
	if(var_863_bool != 0) {
		var_858_bool = 1;
		return 0;
	}
	var_858_bool = 0;
	return 0;
}


func_501(var_2_object, var_826_string)
{
	var_827_bool = 0;
	func_5257(var_827_bool);
	var_828_bool = var_827_bool == 0; //@nz
	if(var_828_bool != 0) {
		return 0;
	}
	var_829_bool = var_826_string == var_2_object;
	if(var_829_bool != 0) {
		return 0;
	}
	var_830_string = ""; var_831_bool = 0;
	var_826_string = var_830_string;
	var_833_bool = var_826_string == "";
	if(var_833_bool != 0) {
		var_831_bool = 0;
	} else {
		var_831_bool = 1;
	}
	func_5080(var_830_string, var_831_bool);
	var_2_object = var_826_string;
	return 0;
	
}


func_5110()
{
	var_54_bool = 0;
	func_5257(var_54_bool);
	if(var_54_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_4086(var_0_object, var_988_int, var_989_object)
{
	var_991_object = Obj(); var_992_bool = 0; var_993_int = 0; var_994_bool = 0; var_995_object = Obj(); var_996_bool = 0; var_997_int = 0; var_998_bool = 0;
	var_0_object = var_989_object;
	var_999_bool = 0; var_1000_object = Obj(); var_1001_float = 0;
	var_989_object = var_1000_object;
	func_4839(var_999_bool, var_1000_object, (float)70.0);
	var_1002_bool = var_999_bool == 0; //@nz
	if(var_1002_bool != 0) {
		var_988_int = -2;
		return 8;
	}
	CreateDialog(var_995_object);
	var_1003_int = 0;
	func_5251(var_1003_int);
	@@var_995_object:SetNPCName(var_1003_int);
	var_1004_int = 0;
	func_5249(var_1004_int);
	@@var_995_object:SetNPCDescription(var_1004_int);
	var_1005_string = "";
	func_5253(var_1005_string);
	@@var_995_object:SetPhoto(var_1005_string);
	var_1006_string = "";
	func_5255(var_1006_string);
	@@var_995_object:SetPhoto2(var_1006_string);
	var_1007_int = 0;
	func_5915(var_1007_int);
	@@var_995_object:SetPlayerName(var_1007_int);
	IsOverrideActive(var_996_bool);
	var_1008_bool = var_996_bool;
	if(var_1008_bool != 0) {
		var_988_int = -2;
		return 8;
	}
	DoDialog(var_995_object);
	var_1009_bool = 0; var_1010_object = Obj();
	func_5117(Obj());
	var_1011_object = var_1010_object;
	func_4926(var_1009_bool, var_1010_object);
	var_1012_object = Obj(); var_1013_object = Obj();
	var_989_object = var_1012_object;
	var_995_object = var_1013_object;
	TaskCall(17);
	func_4167(var_1014_object, var_1015_object, var_1016_string, var_1017_bool, var_1012_object, var_1013_object);
	TaskReturn();
	@@var_995_object:IsDialogEnd(var_998_bool);
	
Label_4149:
	var_1045_bool = var_998_bool == 0; //@nz
	if(var_1045_bool != 0) {
		sync();
		@@var_995_object:IsDialogEnd(var_998_bool);
		goto Label_4149;
	}
	var_989_object = Obj();
	func_4908();
	StopDialog(var_995_object);
	@@var_995_object:GetReturnValue((int)-1);
	var_997_int = var_988_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4345(var_0_object, var_1047_int, var_1048_object)
{
	var_1050_object = Obj(); var_1051_bool = 0; var_1052_int = 0; var_1053_bool = 0; var_1054_object = Obj(); var_1055_bool = 0; var_1056_int = 0; var_1057_bool = 0;
	var_0_object = var_1048_object;
	var_1058_bool = 0; var_1059_object = Obj(); var_1060_float = 0;
	var_1048_object = var_1059_object;
	func_4839(var_1058_bool, var_1059_object, (float)70.0);
	var_1061_bool = var_1058_bool == 0; //@nz
	if(var_1061_bool != 0) {
		var_1047_int = -2;
		return 8;
	}
	CreateDialog(var_1054_object);
	var_1062_int = 0;
	func_5251(var_1062_int);
	@@var_1054_object:SetNPCName(var_1062_int);
	var_1063_int = 0;
	func_5249(var_1063_int);
	@@var_1054_object:SetNPCDescription(var_1063_int);
	var_1064_string = "";
	func_5253(var_1064_string);
	@@var_1054_object:SetPhoto(var_1064_string);
	var_1065_string = "";
	func_5255(var_1065_string);
	@@var_1054_object:SetPhoto2(var_1065_string);
	var_1066_int = 0;
	func_5915(var_1066_int);
	@@var_1054_object:SetPlayerName(var_1066_int);
	IsOverrideActive(var_1055_bool);
	var_1067_bool = var_1055_bool;
	if(var_1067_bool != 0) {
		var_1047_int = -2;
		return 8;
	}
	DoDialog(var_1054_object);
	var_1068_bool = 0; var_1069_object = Obj();
	func_5117(Obj());
	var_1070_object = var_1069_object;
	func_4926(var_1068_bool, var_1069_object);
	var_1071_object = Obj(); var_1072_object = Obj();
	var_1048_object = var_1071_object;
	var_1054_object = var_1072_object;
	TaskCall(19);
	func_4426(var_1073_object, var_1074_object, var_1075_string, var_1076_bool, var_1071_object, var_1072_object);
	TaskReturn();
	@@var_1054_object:IsDialogEnd(var_1057_bool);
	
Label_4408:
	var_1101_bool = var_1057_bool == 0; //@nz
	if(var_1101_bool != 0) {
		sync();
		@@var_1054_object:IsDialogEnd(var_1057_bool);
		goto Label_4408;
	}
	var_1048_object = Obj();
	func_4908();
	StopDialog(var_1054_object);
	@@var_1054_object:GetReturnValue((int)-1);
	var_1056_int = var_1047_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5882(var_118_object, var_119_string, var_120_float)
{
	var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_object = Obj(); var_125_bool = 0; var_126_cvector = CVector(0,0,0); var_127_cvector = CVector(0,0,0); var_128_object = Obj(); var_129_bool = 0;
	GetMainOutdoorScene(var_128_object);
	var_130_bool = var_128_object == 0; //@ne
	if(var_130_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_128_object:GetLocator(var_119_string, var_129_bool, var_126_cvector, var_127_cvector);
	var_132_bool = var_129_bool == 0; //@nz
	if(var_132_bool != 0) {
		var_134_int = "Warning: outdoor scene locator " + var_119_string;
		var_136_int = var_134_int + " doesnt exist";
		Trace(var_136_int);
	}
	@@var_128_object:GetMap(var_118_object);
	var_137_bool = var_118_object == 0; //@ne
	if(var_137_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_139_float = GetByIndex(var_126_cvector, 0);
	var_140_float = GetByIndex(var_126_cvector, 2);
	@@var_118_object:SetMapParams(var_139_float, var_140_float, var_120_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_5372()
{
	SetVariable("d1q01KaterinaUHave1day", (int)1);
	return 0;
}


func_5117(var_146_object)
{
	var_147_object = Obj(); var_148_object = Obj();
	self(var_148_object);
	var_148_object = var_146_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5631(var_836_bool)
{
	var_838_int = 0; var_839_string = "";
	func_5133(var_838_int, "ood6Katerina1");
	var_841_bool = var_838_int == (int)0;
	if(var_841_bool != 0) {
		var_836_bool = 1;
		return 0;
	}
	var_836_bool = 0;
	return 0;
}


