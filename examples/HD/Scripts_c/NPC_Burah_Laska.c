// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetInvItemByName/2,SendWorldWndMessage/1,CreateFloatVector/1,SendWorldWndMessage/2,Trigger/2,GetGameTime/1,HasAnimation/3,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Autizm|W:Welldie|W:Pain|W:player|A:GetPosition|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|W:Can't find lsh animation : |A:HasItem|W:reputation|A:add|W:ui/NPC_Laska.png|W:ui/NPC_Laska_b.png|W:oob6Laska1|W:oob1Laska4|W:b1LaskaGotoMishka|W:pt_map_mishka|A:AddMark|W:oob12Laska1|A:ShowMap|W:pt_map_gorbun|W:oob1Laska1|W:b1q02|W:b1q02LaskaGotoGorbin|W:b1q02LaskaSelf|W:pt_map_laska|W:b1q02_blood|A:RemoveItemByType|W:quest_b1_02|W:agony_cured|W:completed|W:oob1Laska2|W:oob1Laska3|W:fail|W:b6q01KlaraLaska|W:b1q05|W:b1q02_dead|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:mt_laska
// @GLOBALS: 0:object:
// @RUN_OP: 0x7d7
// @RUN_TASK: 10
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x11b vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x464 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x57b vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x679 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x7ad vars=int,int
// @TASK_10: vars=cvector params=0
// @EVENT_7: op=0x820 vars=int
// @EVENT_6: op=0x846 vars=
// @EVENT_5: op=0x855 vars=
// @EVENT_45: op=0x862 vars=bool
// @EVENT_0: op=0x86e vars=object
// @PE: 0x51,0x105,0x11b,0x406,0x44e,0x464,0x52b,0x565,0x57b,0x61f,0x663,0x679,0x75d,0x797,0x7ad,0x7d7,0x820,0x846,0x862,0xa3f,0xa56,0xa9d,0xac5,0xacb,0xae1,0xae7,0xaf7,0xafe,0xb05,0xb15,0xb51,0xb57,0xb5d,0xb64,0xb70,0xb7c,0xb88,0xb94,0xba0,0xbac,0xbb8,0xbca,0xbd6,0xbe2,0xbee

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_2600();
		var_31_bool = var_27_cvector == (int)19038;
		if(var_31_bool != 0) {
			var_32_object = Obj(); var_33_object = Obj();
			var_32_object = var_1_object;
			var_33_object = var_0_object;
			func_2843();
			var_88_object = Obj(); var_89_object = Obj();
			var_88_object = var_1_object;
			var_89_object = var_0_object;
			func_2821(var_89_object);
		}
		var_115_bool = var_27_cvector == (int)20803;
		if(var_115_bool != 0) {
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_2843();
			var_118_object = Obj(); var_119_object = Obj();
			var_118_object = var_1_object;
			var_119_object = var_0_object;
			func_2821(var_119_object);
		}
		var_121_bool = var_27_cvector == (int)21611;
		if(var_121_bool != 0) {
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_2843();
			var_124_object = Obj(); var_125_object = Obj();
			var_124_object = var_1_object;
			var_125_object = var_0_object;
			func_2821(var_125_object);
		}
		var_127_bool = var_27_cvector == (int)19043;
		if(var_127_bool != 0) {
			var_128_object = Obj(); var_129_object = Obj();
			var_128_object = var_1_object;
			var_129_object = var_0_object;
			func_2843();
			var_130_object = Obj(); var_131_object = Obj();
			var_130_object = var_1_object;
			var_131_object = var_0_object;
			func_2821(var_131_object);
		}
		var_133_bool = var_27_cvector == (int)19044;
		if(var_133_bool != 0) {
			var_134_object = Obj(); var_135_object = Obj();
			var_134_object = var_1_object;
			var_135_object = var_0_object;
			func_2897();
		}
		var_139_bool = var_27_cvector == (int)19046;
		if(var_139_bool != 0) {
			var_140_object = Obj(); var_141_object = Obj();
			var_140_object = var_1_object;
			var_141_object = var_0_object;
			func_2878(var_141_object);
			var_163_object = Obj(); var_164_object = Obj();
			var_163_object = var_1_object;
			var_164_object = var_0_object;
			func_2807(var_164_object);
		}
		var_204_bool = var_27_cvector == (int)19111;
		if(var_204_bool != 0) {
			var_205_object = Obj(); var_206_object = Obj();
			var_205_object = var_1_object;
			var_206_object = var_0_object;
			func_2903();
		}
		var_210_bool = var_27_cvector == (int)19113;
		if(var_210_bool != 0) {
			var_211_object = Obj(); var_212_object = Obj();
			var_211_object = var_1_object;
			var_212_object = var_0_object;
			func_2814(var_212_object);
			var_216_object = Obj(); var_217_object = Obj();
			var_216_object = var_1_object;
			var_217_object = var_0_object;
			func_2916();
			var_232_object = Obj(); var_233_object = Obj();
			var_232_object = var_1_object;
			var_233_object = var_0_object;
			func_2909();
		}
		var_238_bool = var_27_cvector == (int)28400;
		if(var_238_bool != 0) {
			var_239_object = Obj(); var_240_object = Obj();
			var_239_object = var_1_object;
			var_240_object = var_0_object;
			func_2763();
		}
		var_244_bool = var_27_cvector == (int)28410;
		if(var_244_bool != 0) {
			var_245_object = Obj(); var_246_object = Obj();
			var_245_object = var_1_object;
			var_246_object = var_0_object;
			func_2769();
			var_255_object = Obj(); var_256_object = Obj();
			var_255_object = var_1_object;
			var_256_object = var_0_object;
			func_2791(var_256_object);
		}
		var_263_bool = var_27_cvector == (int)28411;
		if(var_263_bool != 0) {
			var_264_object = Obj(); var_265_object = Obj();
			var_264_object = var_1_object;
			var_265_object = var_0_object;
			func_2769();
			var_266_object = Obj(); var_267_object = Obj();
			var_266_object = var_1_object;
			var_267_object = var_0_object;
			func_2791(var_267_object);
		}
		var_269_bool = var_26_bool == (int)19030;
		if(var_269_bool != 0) {
			var_270_bool = 0;
			var_270_bool = 0;
			var_271_bool = 0; var_272_object = Obj();
			var_272_object = var_1_object;
			func_2976(var_272_object);
			if(var_271_bool != 0) {
				var_277_bool = 0; var_278_object = Obj();
				var_278_object = var_1_object;
				func_3030(var_278_object);
				var_283_bool = var_277_bool == 0; //@nz
				if(var_283_bool != 0) {
					var_270_bool = 1;
				}
			}
			if(var_270_bool != 0) {
				var_284_object = Obj(); var_285_object = Obj();
				var_284_object = var_1_object;
				var_285_object = var_0_object;
				func_2837();
				var_288_string = "";
				func_261(var_27_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)517892);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)519614, (int)20800, (int)20799);
				@@@var_0_object:AddReply((int)520399, (int)21606, (int)21605);
				return 0;
			}
			var_312_string = "";
			func_261(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)517901);
			@@@var_0_object:ClearReplies();
			var_314_bool = 0;
			var_314_bool = 0;
			var_315_bool = 0; var_316_object = Obj();
			var_316_object = var_1_object;
			func_2988(var_316_object);
			if(var_315_bool != 0) {
				var_321_bool = 0; var_322_object = Obj();
				var_322_object = var_1_object;
				func_3030(var_322_object);
				var_323_bool = var_321_bool == 0; //@nz
				if(var_323_bool != 0) {
					var_314_bool = 1;
				}
			}
			if(var_314_bool != 0) {
				@@@var_0_object:AddReply((int)517902, (int)19042, (int)19040);
			}
			var_327_bool = 0;
			var_327_bool = 0;
			var_328_bool = 0;
			var_328_bool = 0;
			var_329_bool = 0; var_330_object = Obj();
			var_330_object = var_1_object;
			func_3000(var_329_bool, var_330_object);
			if(var_329_bool != 0) {
				var_342_bool = 0; var_343_object = Obj();
				var_343_object = var_1_object;
				func_3018(var_343_object);
				if(var_342_bool != 0) {
					var_328_bool = 1;
				}
			}
			if(var_328_bool != 0) {
				var_348_bool = 0; var_349_object = Obj();
				var_349_object = var_1_object;
				func_3030(var_349_object);
				var_350_bool = var_348_bool == 0; //@nz
				if(var_350_bool != 0) {
					var_327_bool = 1;
				}
			}
			if(var_327_bool != 0) {
				@@@var_0_object:AddReply((int)517906, (int)19045, (int)19044);
			}
			var_354_bool = 0;
			var_354_bool = 0;
			var_355_bool = 0; var_356_object = Obj();
			var_356_object = var_1_object;
			func_3030(var_356_object);
			if(var_355_bool != 0) {
				var_357_bool = 0; var_358_object = Obj();
				var_358_object = var_1_object;
				func_3042(var_358_object);
				if(var_357_bool != 0) {
					var_354_bool = 1;
				}
			}
			if(var_354_bool != 0) {
				@@@var_0_object:AddReply((int)517978, (int)20805, (int)19111);
			}
			var_366_bool = 0;
			var_366_bool = 0;
			var_367_bool = 0; var_368_object = Obj();
			var_368_object = var_1_object;
			func_2928(var_368_object);
			if(var_367_bool != 0) {
				var_373_bool = 0; var_374_object = Obj();
				var_374_object = var_1_object;
				func_2952(var_374_object);
				if(var_373_bool != 0) {
					var_366_bool = 1;
				}
			}
			if(var_366_bool != 0) {
				@@@var_0_object:AddReply((int)527102, (int)28401, (int)28400);
			}
			@@@var_0_object:AddReply((int)517903, (int)-1, (int)19041);
			return 0;
		}
		var_386_bool = var_26_bool == (int)28401;
		if(var_386_bool != 0) {
			var_387_string = "";
			func_261(var_27_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)527103);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527104, (int)28403, (int)28402);
			return 0;
		}
		var_393_bool = var_26_bool == (int)28403;
		if(var_393_bool != 0) {
			var_394_string = "";
			func_261(var_27_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)527105);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527106, (int)28405, (int)28404);
			return 0;
		}
		var_400_bool = var_26_bool == (int)28405;
		if(var_400_bool != 0) {
			var_401_string = "";
			func_261(var_27_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)527107);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527108, (int)28407, (int)28406);
			return 0;
		}
		var_407_bool = var_26_bool == (int)28407;
		if(var_407_bool != 0) {
			var_408_string = "";
			func_261(var_27_cvector, "Welldie");
			@@@var_0_object:SetMessage((int)527109);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527110, (int)28409, (int)28408);
			return 0;
		}
		var_414_bool = var_26_bool == (int)28409;
		if(var_414_bool != 0) {
			var_415_string = "";
			func_261(var_27_cvector, "Welldie");
			@@@var_0_object:SetMessage((int)527111);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527112, (int)-1, (int)28410);
			@@@var_0_object:AddReply((int)527113, (int)-1, (int)28411);
			return 0;
		}
		var_424_bool = var_26_bool == (int)20805;
		if(var_424_bool != 0) {
			var_425_string = "";
			func_261(var_27_cvector, "Pain");
			@@@var_0_object:SetMessage((int)519620);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519621, (int)20808, (int)20806);
			@@@var_0_object:AddReply((int)520405, (int)20808, (int)21612);
			@@@var_0_object:AddReply((int)519622, (int)20808, (int)20807);
			return 0;
		}
		var_437_bool = var_26_bool == (int)20808;
		if(var_437_bool != 0) {
			var_438_string = "";
			func_261(var_27_cvector, "Pain");
			@@@var_0_object:SetMessage((int)519623);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)517980, (int)-1, (int)19113);
			return 0;
		}
		var_444_bool = var_26_bool == (int)19045;
		if(var_444_bool != 0) {
			var_445_string = "";
			func_261(var_27_cvector, "Welldie");
			@@@var_0_object:SetMessage((int)517907);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)517908, (int)-1, (int)19046);
			return 0;
		}
		var_451_bool = var_26_bool == (int)19042;
		if(var_451_bool != 0) {
			var_452_string = "";
			func_261(var_27_cvector, "Welldie");
			@@@var_0_object:SetMessage((int)517904);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520402, (int)21610, (int)21609);
			@@@var_0_object:AddReply((int)517905, (int)-1, (int)19043);
			return 0;
		}
		var_461_bool = var_26_bool == (int)21610;
		if(var_461_bool != 0) {
			var_462_string = "";
			func_261(var_27_cvector, "Welldie");
			@@@var_0_object:SetMessage((int)520403);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520404, (int)-1, (int)21611);
			return 0;
		}
		var_468_bool = var_26_bool == (int)21606;
		if(var_468_bool != 0) {
			var_469_string = "";
			func_261(var_27_cvector, "Pain");
			@@@var_0_object:SetMessage((int)520400);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520401, (int)20800, (int)21607);
			return 0;
		}
		var_475_bool = var_26_bool == (int)20800;
		if(var_475_bool != 0) {
			var_476_string = "";
			func_261(var_27_cvector, "Pain");
			@@@var_0_object:SetMessage((int)519615);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)517896, (int)19035, (int)19034);
			@@@var_0_object:AddReply((int)517893, (int)19032, (int)19031);
			@@@var_0_object:AddReply((int)520398, (int)-1, (int)21604);
			return 0;
		}
		var_488_bool = var_26_bool == (int)19032;
		if(var_488_bool != 0) {
			var_489_string = "";
			func_261(var_27_cvector, "Pain");
			@@@var_0_object:SetMessage((int)517894);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)517895, (int)-1, (int)19033);
			return 0;
		}
		var_495_bool = var_26_bool == (int)19035;
		if(var_495_bool != 0) {
			var_496_string = "";
			func_261(var_27_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)517897);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)517898, (int)19037, (int)19036);
			@@@var_0_object:AddReply((int)527070, (int)28367, (int)28366);
			return 0;
		}
		var_505_bool = var_26_bool == (int)28367;
		if(var_505_bool != 0) {
			var_506_string = "";
			func_261(var_27_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)527071);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527072, (int)28369, (int)28368);
			return 0;
		}
		var_512_bool = var_26_bool == (int)28369;
		if(var_512_bool != 0) {
			var_513_string = "";
			func_261(var_27_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)527073);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527074, (int)19037, (int)28370);
			return 0;
		}
		var_519_bool = var_26_bool == (int)19037;
		if(var_519_bool != 0) {
			var_520_string = "";
			func_261(var_27_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)517899);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)517900, (int)-1, (int)19038);
			@@@var_0_object:AddReply((int)519616, (int)20802, (int)20801);
			return 0;
		}
		var_529_bool = var_26_bool == (int)20802;
		if(var_529_bool != 0) {
			var_530_string = "";
			func_261(var_27_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)519617);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519618, (int)-1, (int)20803);
			@@@var_0_object:AddReply((int)519619, (int)-1, (int)20804);
			return 0;
		}
		var_3_string = true;
		var_538_bool = 0;
		func_2755(var_538_bool);
		if(var_538_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x11c";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_2600();
		var_31_bool = var_27_cvector == (int)21868;
		if(var_31_bool != 0) {
			var_32_object = Obj(); var_33_object = Obj();
			var_32_object = var_1_object;
			var_33_object = var_0_object;
			func_2757();
		}
		var_37_bool = var_26_bool == (int)21867;
		if(var_37_bool != 0) {
			var_38_string = "";
			func_1102(var_27_cvector, "Welldie");
			@@@var_0_object:SetMessage((int)520656);
			@@@var_0_object:ClearReplies();
			var_56_bool = 0;
			var_56_bool = 0;
			var_57_bool = 0; var_58_object = Obj();
			var_58_object = var_1_object;
			func_3054(var_58_object);
			if(var_57_bool != 0) {
				var_65_bool = 0; var_66_object = Obj();
				var_66_object = var_1_object;
				func_2940(var_66_object);
				if(var_65_bool != 0) {
					var_56_bool = 1;
				}
			}
			if(var_56_bool != 0) {
				@@@var_0_object:AddReply((int)520657, (int)21869, (int)21868);
			}
			@@@var_0_object:AddReply((int)520664, (int)-1, (int)21875);
			return 0;
		}
		var_78_bool = var_26_bool == (int)21869;
		if(var_78_bool != 0) {
			var_79_string = "";
			func_1102(var_27_cvector, "Welldie");
			@@@var_0_object:SetMessage((int)520658);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520659, (int)21871, (int)21870);
			return 0;
		}
		var_85_bool = var_26_bool == (int)21871;
		if(var_85_bool != 0) {
			var_86_string = "";
			func_1102(var_27_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)520660);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520661, (int)21873, (int)21872);
			return 0;
		}
		var_92_bool = var_26_bool == (int)21873;
		if(var_92_bool != 0) {
			var_93_string = "";
			func_1102(var_27_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)520662);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520663, (int)-1, (int)21874);
			return 0;
		}
		var_3_string = true;
		var_98_bool = 0;
		func_2755(var_98_bool);
		if(var_98_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x465";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_2600();
		var_31_bool = var_26_bool == (int)21962;
		if(var_31_bool != 0) {
			var_32_string = "";
			func_1381(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520750);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520751, (int)21964, (int)21963);
			@@@var_0_object:AddReply((int)520755, (int)21968, (int)21967);
			return 0;
		}
		var_57_bool = var_26_bool == (int)21968;
		if(var_57_bool != 0) {
			var_58_string = "";
			func_1381(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520756);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520757, (int)21964, (int)21969);
			return 0;
		}
		var_64_bool = var_26_bool == (int)21964;
		if(var_64_bool != 0) {
			var_65_string = "";
			func_1381(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)520752);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520753, (int)-1, (int)21965);
			@@@var_0_object:AddReply((int)520754, (int)-1, (int)21966);
			return 0;
		}
		var_3_string = true;
		var_73_bool = 0;
		func_2755(var_73_bool);
		if(var_73_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x57c";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_2600();
		var_31_bool = var_27_cvector == (int)36929;
		if(var_31_bool != 0) {
			var_32_object = Obj(); var_33_object = Obj();
			var_32_object = var_1_object;
			var_33_object = var_0_object;
			func_2785();
		}
		var_37_bool = var_26_bool == (int)36928;
		if(var_37_bool != 0) {
			var_38_string = "";
			func_1635(var_27_cvector, "Welldie");
			@@@var_0_object:SetMessage((int)535253);
			@@@var_0_object:ClearReplies();
			var_56_bool = 0; var_57_object = Obj();
			var_57_object = var_1_object;
			func_2964(var_57_object);
			if(var_56_bool != 0) {
				@@@var_0_object:AddReply((int)535254, (int)37026, (int)36929);
			}
			@@@var_0_object:AddReply((int)535341, (int)-1, (int)37024);
			@@@var_0_object:AddReply((int)535342, (int)-1, (int)37025);
			return 0;
		}
		var_74_bool = var_26_bool == (int)37026;
		if(var_74_bool != 0) {
			var_75_string = "";
			func_1635(var_27_cvector, "Welldie");
			@@@var_0_object:SetMessage((int)535343);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535344, (int)37028, (int)37027);
			@@@var_0_object:AddReply((int)535347, (int)37031, (int)37030);
			return 0;
		}
		var_84_bool = var_26_bool == (int)37031;
		if(var_84_bool != 0) {
			var_85_string = "";
			func_1635(var_27_cvector, "Welldie");
			@@@var_0_object:SetMessage((int)535348);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535349, (int)37033, (int)37032);
			return 0;
		}
		var_91_bool = var_26_bool == (int)37033;
		if(var_91_bool != 0) {
			var_92_string = "";
			func_1635(var_27_cvector, "Welldie");
			@@@var_0_object:SetMessage((int)535350);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535351, (int)37028, (int)37034);
			@@@var_0_object:AddReply((int)535352, (int)-1, (int)37035);
			return 0;
		}
		var_101_bool = var_26_bool == (int)37028;
		if(var_101_bool != 0) {
			var_102_string = "";
			func_1635(var_27_cvector, "Welldie");
			@@@var_0_object:SetMessage((int)535345);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535346, (int)-1, (int)37029);
			@@@var_0_object:AddReply((int)535353, (int)-1, (int)37037);
			return 0;
		}
		var_3_string = true;
		var_110_bool = 0;
		func_2755(var_110_bool);
		if(var_110_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x67a";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_cvector)
{
	if((int)1 != 0) {
		func_2600();
		var_31_bool = var_26_int == (int)42560;
		if(var_31_bool != 0) {
			var_32_string = "";
			func_1943(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540551);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540552, (int)-1, (int)42561);
			@@@var_0_object:AddReply((int)540795, (int)-1, (int)42844);
			return 0;
		}
		var_3_string = true;
		var_56_bool = 0;
		func_2755(var_56_bool);
		if(var_56_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x7ae";
	
}


task_10_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_int)
{
	var_28_bool = var_26_int == (int)10;
	if(var_28_bool != 0) {
		func_2076();
		var_30_bool = 0;
		var_30_bool = 0;
		var_31_bool = 0;
		func_2324(var_31_bool);
		if(var_31_bool != 0) {
			var_34_bool = 0;
			func_2045(var_34_bool);
			if(var_34_bool != 0) {
				var_30_bool = 1;
			}
		}
		if(var_30_bool != 0) {
			var_51_bool = 0;
			func_2025(var_51_bool);
			if(var_51_bool != 0) {
				var_70_bool = 0; var_71_object = Obj();
				func_2607(Obj());
				var_72_object = var_71_object;
				func_2474(var_70_bool, var_71_object);
			}
		} else {
			func_2040(var_26_int);
			func_2067();
		}
	}
	return 0;
	
}


task_10_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_2258();
	func_2076();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_10_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	StopGroup0();
	func_2076();
	var_27_string = "";
	func_2554("Neutral");
	func_2067();
	return 0;
}


task_10_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_bool)
{
	var_27_bool = var_26_bool;
	if(var_27_bool != 0) {
		func_2067();
	} else {
		var_33_string = "";
		func_2554("Neutral");
	}
	return 0;
	
}


task_10_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_object)
{
	var_27_bool = 0; var_28_bool = 0;
	IsOverrideActive(var_28_bool);
	var_29_bool = var_28_bool == 0; //@nz
	if(var_29_bool != 0) {
		EventDisable(0);
		func_2258();
		var_30_bool = 0; var_31_object = Obj();
		var_26_object = var_31_object;
		func_2315(var_30_bool, var_31_object);
		EventEnable(0);
		var_44_object = Obj();
		var_26_object = var_44_object;
		func_3226(var_44_object);
		var_622_string = "";
		func_2554("Neutral");
		func_2076();
		func_2067();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_2011(var_25_cvector);
	return 0;
}


func_0(var_0_object, var_279_int, var_280_object)
{
	var_282_object = Obj(); var_283_bool = 0; var_284_int = 0; var_285_bool = 0; var_286_object = Obj(); var_287_bool = 0; var_288_int = 0; var_289_bool = 0;
	var_0_object = var_280_object;
	var_290_bool = 0; var_291_object = Obj(); var_292_float = 0;
	var_280_object = var_291_object;
	func_2329(var_290_bool, var_291_object, (float)70.0);
	var_293_bool = var_290_bool == 0; //@nz
	if(var_293_bool != 0) {
		var_279_int = -2;
		return 8;
	}
	CreateDialog(var_286_object);
	var_294_int = 0;
	func_2749(var_294_int);
	@@var_286_object:SetNPCName(var_294_int);
	var_295_int = 0;
	func_2747(var_295_int);
	@@var_286_object:SetNPCDescription(var_295_int);
	var_296_string = "";
	func_2751(var_296_string);
	@@var_286_object:SetPhoto(var_296_string);
	var_297_string = "";
	func_2753(var_297_string);
	@@var_286_object:SetPhoto2(var_297_string);
	var_298_int = 0;
	func_3209(var_298_int);
	@@var_286_object:SetPlayerName(var_298_int);
	IsOverrideActive(var_287_bool);
	var_299_bool = var_287_bool;
	if(var_299_bool != 0) {
		var_279_int = -2;
		return 8;
	}
	DoDialog(var_286_object);
	var_300_bool = 0; var_301_object = Obj();
	func_2607(Obj());
	var_302_object = var_301_object;
	func_2416(var_300_bool, var_301_object);
	var_303_object = Obj(); var_304_object = Obj();
	var_280_object = var_303_object;
	var_286_object = var_304_object;
	TaskCall(1);
	func_81(var_305_object, var_306_object, var_307_string, var_308_bool, var_303_object, var_304_object);
	TaskReturn();
	@@var_286_object:IsDialogEnd(var_289_bool);
	
Label_63:
	var_426_bool = var_289_bool == 0; //@nz
	if(var_426_bool != 0) {
		sync();
		@@var_286_object:IsDialogEnd(var_289_bool);
		goto Label_63;
	}
	var_280_object = Obj();
	func_2398();
	StopDialog(var_286_object);
	@@var_286_object:GetReturnValue((int)-1);
	var_288_int = var_279_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2305(var_34_bool, var_35_cvector)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0;
	GetPosition(var_39_cvector);
	var_40_cvector = var_35_cvector - var_39_cvector;
	var_42_float = GetByIndex(var_40_cvector, 0);
	var_43_float = GetByIndex(var_40_cvector, 2);
	Rotate(var_42_float, var_43_float, var_41_bool);
	var_41_bool = var_34_bool;
	return 6;
}


func_261(var_2_object, var_330_string)
{
	var_331_bool = 0;
	func_2755(var_331_bool);
	var_332_bool = var_331_bool == 0; //@nz
	if(var_332_bool != 0) {
		return 0;
	}
	var_333_bool = var_330_string == var_2_object;
	if(var_333_bool != 0) {
		return 0;
	}
	var_334_string = ""; var_335_bool = 0;
	var_330_string = var_334_string;
	var_337_bool = var_330_string == "";
	if(var_337_bool != 0) {
		var_335_bool = 0;
	} else {
		var_335_bool = 1;
	}
	func_2570(var_334_string, var_335_bool);
	var_2_object = var_330_string;
	return 0;
	
}


func_1030(var_0_object, var_1_object, var_2_object, var_3_string, var_454_object, var_455_object)
{
	var_0_object = var_455_object;
	var_1_object = var_454_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_461_string = "";
		func_1102(var_455_object, "Welldie");
		@@@var_0_object:SetMessage((int)520656);
		@@@var_0_object:ClearReplies();
		var_470_bool = 0;
		var_470_bool = 0;
		var_471_bool = 0; var_472_object = Obj();
		var_472_object = var_1_object;
		func_3054(var_472_object);
		if(var_471_bool != 0) {
			var_477_bool = 0; var_478_object = Obj();
			var_478_object = var_1_object;
			func_2940(var_478_object);
			if(var_477_bool != 0) {
				var_470_bool = 1;
			}
		}
		if(var_470_bool != 0) {
			@@@var_0_object:AddReply((int)520657, (int)21869, (int)21868);
		}
		@@@var_0_object:AddReply((int)520664, (int)-1, (int)21875);
		goto Label_1072;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x40a";
	}
Label_1072:
	var_489_bool = 0;
	func_2755(var_489_bool);
	if(var_489_bool != 0) {

	Label_1076:
		lshWaitForAnimEnd();
		var_490_string = var_3_string;
		if(var_490_string != 0) {
		} else {
			var_491_string = "";
			var_491_string = var_2_object;
			func_2554(var_491_string);
			goto Label_1076;
	}
		PlayAnimation("all", "idle");

	Label_1091:
		WaitForAnimEnd();
		var_494_string = var_3_string;
		if(var_494_string != 0) {
			goto Label_1101;
		}
		PlayAnimation("all", "idle");
		goto Label_1091;
	}
	goto Label_1101;
	
Label_1101:
	return 0;
	
}


func_3079()
{
	var_144_object = Obj(); var_145_object = Obj();
	CreateDiaryEntry(var_145_object, (int)203, (int)2, (int)517943);
	var_149_bool = 0; var_150_object = Obj(); var_151_int = 0;
	var_145_object = var_150_object;
	func_3131(var_149_bool, var_150_object, (int)200);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2821(var_89_object)
{
	var_90_object = Obj(); var_91_string = ""; var_92_float = 0;
	func_3159(Obj());
	var_93_object = var_90_object;
	func_3176(var_90_object, "pt_map_gorbun", (float)2);
	var_113_object = Obj();
	func_3159(var_113_object);
	@@var_89_object:ShowMap(var_113_object);
	return 0;
}


func_2570(var_227_string, var_228_bool)
{
	var_231_bool = 0; var_232_float = 0; var_233_float = 0; var_234_bool = 0; var_235_float = 0; var_236_float = 0;
	lshHasAnimation(var_234_bool, var_227_string);
	var_237_bool = var_234_bool;
	if(var_237_bool != 0) {
		lshGetAnimTimes(var_227_string, var_235_float, var_236_float);
		lshPlayAnimation(var_235_float, var_236_float, var_228_bool);
	} else {
		var_239_int = "Can't find lsh animation : " + var_227_string;
		Trace(var_239_int);
	}
	return 6;
	
}


func_2315(var_30_bool, var_31_object)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0);
	@@var_31_object:GetPosition(var_33_cvector);
	var_34_bool = 0; var_35_cvector = CVector(0,0,0);
	var_33_cvector = var_35_cvector;
	func_2305(var_34_bool, var_35_cvector);
	var_34_bool = var_30_bool;
	return 2;
}


func_1804(var_0_object, var_566_int, var_567_object)
{
	var_569_object = Obj(); var_570_bool = 0; var_571_int = 0; var_572_bool = 0; var_573_object = Obj(); var_574_bool = 0; var_575_int = 0; var_576_bool = 0;
	var_0_object = var_567_object;
	var_577_bool = 0; var_578_object = Obj(); var_579_float = 0;
	var_567_object = var_578_object;
	func_2329(var_577_bool, var_578_object, (float)70.0);
	var_580_bool = var_577_bool == 0; //@nz
	if(var_580_bool != 0) {
		var_566_int = -2;
		return 8;
	}
	CreateDialog(var_573_object);
	var_581_int = 0;
	func_2749(var_581_int);
	@@var_573_object:SetNPCName(var_581_int);
	var_582_int = 0;
	func_2747(var_582_int);
	@@var_573_object:SetNPCDescription(var_582_int);
	var_583_string = "";
	func_2751(var_583_string);
	@@var_573_object:SetPhoto(var_583_string);
	var_584_string = "";
	func_2753(var_584_string);
	@@var_573_object:SetPhoto2(var_584_string);
	var_585_int = 0;
	func_3209(var_585_int);
	@@var_573_object:SetPlayerName(var_585_int);
	IsOverrideActive(var_574_bool);
	var_586_bool = var_574_bool;
	if(var_586_bool != 0) {
		var_566_int = -2;
		return 8;
	}
	DoDialog(var_573_object);
	var_587_bool = 0; var_588_object = Obj();
	func_2607(Obj());
	var_589_object = var_588_object;
	func_2416(var_587_bool, var_588_object);
	var_590_object = Obj(); var_591_object = Obj();
	var_567_object = var_590_object;
	var_573_object = var_591_object;
	TaskCall(9);
	func_1885(var_592_object, var_593_object, var_594_string, var_595_bool, var_590_object, var_591_object);
	TaskReturn();
	@@var_573_object:IsDialogEnd(var_576_bool);
	
Label_1867:
	var_620_bool = var_576_bool == 0; //@nz
	if(var_620_bool != 0) {
		sync();
		@@var_573_object:IsDialogEnd(var_576_bool);
		goto Label_1867;
	}
	var_567_object = Obj();
	func_2398();
	StopDialog(var_573_object);
	@@var_573_object:GetReturnValue((int)-1);
	var_575_int = var_566_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2067()
{
	var_624_float = 0; var_625_float = 0;
	rand(var_625_float, (int)8, (int)16);
	SetTimer((int)10, var_625_float);
	return 2;
}


func_3092()
{
	var_224_object = Obj(); var_225_object = Obj();
	CreateDiaryEntry(var_225_object, (int)204, (int)2, (int)518079);
	var_229_bool = 0; var_230_object = Obj(); var_231_int = 0;
	var_225_object = var_230_object;
	func_3131(var_229_bool, var_230_object, (int)200);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2324(var_26_bool)
{
	var_27_bool = 0; var_28_bool = 0;
	IsLoaded(var_28_bool);
	var_28_bool = var_26_bool;
	return 2;
}


func_2837()
{
	SetVariable("oob1Laska1", (int)1);
	return 0;
}


func_2585(var_155_bool, var_156_string)
{
	var_157_bool = 0; var_158_bool = 0;
	var_159_bool = 0;
	func_2755(var_159_bool);
	if(var_159_bool != 0) {
		lshHasSpeech(var_158_bool, var_156_string);
		var_160_bool = var_158_bool;
		if(var_160_bool != 0) {
			lshPlaySpeech(var_156_string);
			var_155_bool = 1;
			return 2;
		}
	}
	var_155_bool = 0;
	return 2;
}


func_2329(var_60_bool, var_61_object, var_62_float)
{
	var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_bool = 0; var_71_bool = 0; var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_bool = 0;
	@@var_61_object:GetPosition(var_73_cvector);
	@@var_61_object:GetEyesHeight(var_72_float);
	var_81_float = GetByIndex(var_73_cvector, 1);
	var_81_float = var_81_float + var_72_float;
	SetByIndex(var_73_cvector, 1) = var_81_float;
	GetPosition(var_74_cvector);
	GetEyesHeight(var_72_float);
	var_82_float = GetByIndex(var_74_cvector, 1);
	var_82_float = var_82_float + var_72_float;
	SetByIndex(var_74_cvector, 1) = var_82_float;
	var_75_cvector = var_73_cvector - var_74_cvector;
	var_83_float = GetByIndex(var_75_cvector, 1);
	SetByIndex(var_75_cvector, 1) = (float)0;
	var_84_int = var_75_cvector | var_75_cvector;
	var_85_float = sqrt(var_84_int);
	var_75_cvector = var_75_cvector / var_85_float;
	var_76_cvector = -var_75_cvector;
	var_86_float = var_75_cvector * var_62_float;
	var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0);
	var_88_cvector = var_76_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2613(var_87_cvector, var_88_cvector);
	var_96_float = var_87_cvector * (int)25;
	var_97_int = var_86_float + var_96_float;
	var_77_cvector = var_97_int - CVector(0.0, 10.0, 0.0);
	var_78_cvector = var_74_cvector + var_77_cvector;
	IsOverrideActive(var_79_bool);
	var_99_bool = var_79_bool;
	if(var_99_bool != 0) {
		var_60_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_78_cvector, var_76_cvector, (bool)1);
	var_101_float = GetByIndex(var_77_cvector, 0);
	var_102_float = GetByIndex(var_77_cvector, 2);
	Rotate(var_101_float, var_102_float);
	var_103_bool = 0;
	func_2755(var_103_bool);
	if(var_103_bool != 0) {
	} else {
		HasAnimationTrack(var_80_bool, "head");
		var_105_bool = var_80_bool;
		if(var_105_bool == 0) goto Label_2392;
		LookAsyncCamera("head");
	}
Label_2392:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_60_bool = 1;
	return 18;
	
}


func_2843()
{
	var_34_object = Obj(); var_35_object = Obj();
	SetVariable("b1q02", (int)1);
	func_3159(Obj());
	var_38_object = var_35_object;
	var_49_float = 0;
	func_2703(var_49_float);
	@@var_35_object:AddMark("b1q02LaskaGotoGorbin", "pt_map_gorbun", (int)0, (int)517938, var_49_float);
	var_56_float = 0;
	func_2703(var_56_float);
	@@var_35_object:AddMark("b1q02LaskaSelf", "pt_map_laska", (int)0, (int)517939, var_56_float);
	func_3066();
	func_3105();
	return 2;
}
EMIT "Stack[-1] = 0";


func_2076()
{
	KillTimer((int)10);
	return 0;
}


func_1567(var_0_object, var_1_object, var_2_object, var_3_string, var_525_object, var_526_object)
{
	var_0_object = var_526_object;
	var_1_object = var_525_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_532_string = "";
		func_1635(var_526_object, "Welldie");
		@@@var_0_object:SetMessage((int)535253);
		@@@var_0_object:ClearReplies();
		var_541_bool = 0; var_542_object = Obj();
		var_542_object = var_1_object;
		func_2964(var_542_object);
		if(var_541_bool != 0) {
			@@@var_0_object:AddReply((int)535254, (int)37026, (int)36929);
		}
		@@@var_0_object:AddReply((int)535341, (int)-1, (int)37024);
		@@@var_0_object:AddReply((int)535342, (int)-1, (int)37025);
		goto Label_1605;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x623";
	}
Label_1605:
	var_556_bool = 0;
	func_2755(var_556_bool);
	if(var_556_bool != 0) {

	Label_1609:
		lshWaitForAnimEnd();
		var_557_string = var_3_string;
		if(var_557_string != 0) {
		} else {
			var_558_string = "";
			var_558_string = var_2_object;
			func_2554(var_558_string);
			goto Label_1609;
	}
		PlayAnimation("all", "idle");

	Label_1624:
		WaitForAnimEnd();
		var_561_string = var_3_string;
		if(var_561_string != 0) {
			goto Label_1634;
		}
		PlayAnimation("all", "idle");
		goto Label_1624;
	}
	goto Label_1634;
	
Label_1634:
	return 0;
	
}


func_3105()
{
	var_80_object = Obj(); var_81_object = Obj();
	CreateDiaryEntry(var_81_object, (int)201, (int)2, (int)517941);
	var_85_bool = 0; var_86_object = Obj(); var_87_int = 0;
	var_81_object = var_86_object;
	func_3131(var_85_bool, var_86_object, (int)200);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2600()
{
	var_29_bool = 0;
	func_2755(var_29_bool);
	if(var_29_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1323(var_0_object, var_1_object, var_2_object, var_3_string, var_216_object, var_217_object)
{
	var_0_object = var_217_object;
	var_1_object = var_216_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_223_string = "";
		func_1381(var_217_object, "Neutral");
		@@@var_0_object:SetMessage((int)520750);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)520751, (int)21964, (int)21963);
		@@@var_0_object:AddReply((int)520755, (int)21968, (int)21967);
		goto Label_1351;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x52f";
	}
Label_1351:
	var_247_bool = 0;
	func_2755(var_247_bool);
	if(var_247_bool != 0) {

	Label_1355:
		lshWaitForAnimEnd();
		var_248_string = var_3_string;
		if(var_248_string != 0) {
		} else {
			var_249_string = "";
			var_249_string = var_2_object;
			func_2554(var_249_string);
			goto Label_1355;
	}
		PlayAnimation("all", "idle");

	Label_1370:
		WaitForAnimEnd();
		var_262_string = var_3_string;
		if(var_262_string != 0) {
			goto Label_1380;
		}
		PlayAnimation("all", "idle");
		goto Label_1370;
	}
	goto Label_1380;
	
Label_1380:
	return 0;
	
}


func_3118(var_71_object)
{
	var_72_object = Obj(); var_73_object = Obj();
	GetDiaryRoot(var_73_object);
	var_74_bool = var_73_object == 0; //@nz
	if(var_74_bool != 0) {
		Trace("Can't retrieve diary root");
		var_71_object = 0;
		return 2;
	}
	var_73_object = var_71_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2607(var_123_object)
{
	var_124_object = Obj(); var_125_object = Obj();
	self(var_125_object);
	var_125_object = var_123_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2613(var_87_cvector, var_88_cvector)
{
	var_90_float = 0; var_91_float = 0;
	var_92_int = var_88_cvector | var_88_cvector;
	var_91_float = sqrt(var_92_int);
	var_93_float = 9.999999974752427e-07;
	var_94_bool = var_91_float < var_93_float;
	if(var_94_bool != 0) {
		var_87_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_87_cvector = var_88_cvector / var_91_float;
	return 2;
}


func_3131(var_62_bool, var_63_object, var_64_int)
{
	var_65_object = Obj(); var_66_object = Obj(); var_67_int = 0; var_68_object = Obj(); var_69_object = Obj(); var_70_int = 0;
	func_3118(Obj());
	var_71_object = var_68_object;
	@@var_68_object:Find(var_64_int, var_69_object);
	var_76_bool = var_69_object == 0; //@nz
	if(var_76_bool != 0) {
		var_78_int = "Can't find diary parent with id: " + var_64_int;
		Trace(var_78_int);
		var_62_bool = 0;
		return 6;
	}
	@@var_69_object:AddChild(var_63_object);
	SendWorldWndMessage((int)7);
	@@var_63_object:GetCategory(var_70_int);
	SetDiarySection(var_70_int);
	var_62_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_2878(var_140_object)
{
	var_142_int = 0; var_143_int = 0;
	func_3079();
	@@var_140_object:RemoveItemByType(var_143_int, "b1q02_blood", (int)1);
	var_154_bool = 0; var_155_string = ""; var_156_string = "";
	func_2691(var_154_bool, "quest_b1_02", "agony_cured");
	var_160_bool = 0; var_161_string = ""; var_162_string = "";
	func_2691(var_160_bool, "quest_b1_02", "completed");
	return 2;
}


func_2623(var_194_float, var_195_float, var_196_float, var_197_float)
{
	var_198_bool = var_195_float < var_196_float;
	if(var_198_bool != 0) {
		var_196_float = var_194_float;
		return 0;
	}
	var_199_bool = var_195_float > var_197_float;
	if(var_199_bool != 0) {
		var_197_float = var_194_float;
		return 0;
	}
	var_195_float = var_194_float;
	return 0;
}


func_3066()
{
	var_57_object = Obj(); var_58_object = Obj();
	CreateDiaryEntry(var_58_object, (int)200, (int)2, (int)517940);
	var_62_bool = 0; var_63_object = Obj(); var_64_int = 0;
	var_58_object = var_63_object;
	func_3131(var_62_bool, var_63_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2634(var_313_int, var_314_string)
{
	var_315_int = 0; var_316_int = 0;
	GetVariable(var_314_string, var_316_int);
	var_316_int = var_313_int;
	return 2;
}


func_1102(var_2_object, var_461_string)
{
	var_462_bool = 0;
	func_2755(var_462_bool);
	var_463_bool = var_462_bool == 0; //@nz
	if(var_463_bool != 0) {
		return 0;
	}
	var_464_bool = var_461_string == var_2_object;
	if(var_464_bool != 0) {
		return 0;
	}
	var_465_string = ""; var_466_bool = 0;
	var_461_string = var_465_string;
	var_468_bool = var_461_string == "";
	if(var_468_bool != 0) {
		var_466_bool = 0;
	} else {
		var_466_bool = 1;
	}
	func_2570(var_465_string, var_466_bool);
	var_2_object = var_461_string;
	return 0;
	
}


func_2639(var_372_bool, var_373_object, var_374_string)
{
	var_375_int = 0; var_376_bool = 0; var_377_int = 0; var_378_bool = 0;
	GetInvItemByName(var_377_int, var_374_string);
	@@var_373_object:HasItem(var_377_int, var_378_bool);
	var_378_bool = var_372_bool;
	return 4;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_303_object, var_304_object)
{
	var_0_object = var_304_object;
	var_1_object = var_303_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_310_bool = 0;
		var_310_bool = 0;
		var_311_bool = 0; var_312_object = Obj();
		var_312_object = var_1_object;
		func_2976(var_312_object);
		if(var_311_bool != 0) {
			var_319_bool = 0; var_320_object = Obj();
			var_320_object = var_1_object;
			func_3030(var_320_object);
			var_325_bool = var_319_bool == 0; //@nz
			if(var_325_bool != 0) {
				var_310_bool = 1;
			}
		}
		if(var_310_bool != 0) {
			var_326_object = Obj(); var_327_object = Obj();
			var_326_object = var_1_object;
			var_327_object = var_0_object;
			func_2837();
			var_330_string = "";
			func_261(var_304_object, "Neutral");
			@@@var_0_object:SetMessage((int)517892);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519614, (int)20800, (int)20799);
			@@@var_0_object:AddReply((int)520399, (int)21606, (int)21605);
		} else {
				var_353_string = "";
				func_261(var_304_object, "Neutral");
				@@@var_0_object:SetMessage((int)517901);
				@@@var_0_object:ClearReplies();
				var_355_bool = 0;
				var_355_bool = 0;
				var_356_bool = 0; var_357_object = Obj();
				var_357_object = var_1_object;
				func_2988(var_357_object);
				if(var_356_bool != 0) {
					var_362_bool = 0; var_363_object = Obj();
					var_363_object = var_1_object;
					func_3030(var_363_object);
					var_364_bool = var_362_bool == 0; //@nz
					if(var_364_bool != 0) {
						var_355_bool = 1;
					}
				}
				if(var_355_bool != 0) {
					@@@var_0_object:AddReply((int)517902, (int)19042, (int)19040);
				}
				var_368_bool = 0;
				var_368_bool = 0;
				var_369_bool = 0;
				var_369_bool = 0;
				var_370_bool = 0; var_371_object = Obj();
				var_371_object = var_1_object;
				func_3000(var_370_bool, var_371_object);
				if(var_370_bool != 0) {
					var_383_bool = 0; var_384_object = Obj();
					var_384_object = var_1_object;
					func_3018(var_384_object);
					if(var_383_bool != 0) {
						var_369_bool = 1;
					}
				}
				if(var_369_bool != 0) {
					var_389_bool = 0; var_390_object = Obj();
					var_390_object = var_1_object;
					func_3030(var_390_object);
					var_391_bool = var_389_bool == 0; //@nz
					if(var_391_bool != 0) {
						var_368_bool = 1;
					}
				}
				if(var_368_bool != 0) {
					@@@var_0_object:AddReply((int)517906, (int)19045, (int)19044);
				}
				var_395_bool = 0;
				var_395_bool = 0;
				var_396_bool = 0; var_397_object = Obj();
				var_397_object = var_1_object;
				func_3030(var_397_object);
				if(var_396_bool != 0) {
					var_398_bool = 0; var_399_object = Obj();
					var_399_object = var_1_object;
					func_3042(var_399_object);
					if(var_398_bool != 0) {
						var_395_bool = 1;
					}
				}
				if(var_395_bool != 0) {
					@@@var_0_object:AddReply((int)517978, (int)20805, (int)19111);
				}
				var_407_bool = 0;
				var_407_bool = 0;
				var_408_bool = 0; var_409_object = Obj();
				var_409_object = var_1_object;
				func_2928(var_409_object);
				if(var_408_bool != 0) {
					var_414_bool = 0; var_415_object = Obj();
					var_415_object = var_1_object;
					func_2952(var_415_object);
					if(var_414_bool != 0) {
						var_407_bool = 1;
					}
				}
				if(var_407_bool != 0) {
					@@@var_0_object:AddReply((int)527102, (int)28401, (int)28400);
				}
				@@@var_0_object:AddReply((int)517903, (int)-1, (int)19041);
				goto Label_231;
		}
	}
Label_231:
	var_345_bool = 0;
	func_2755(var_345_bool);
	if(var_345_bool != 0) {

	Label_235:
		lshWaitForAnimEnd();
		var_346_string = var_3_string;
		if(var_346_string != 0) {
		} else {
			var_347_string = "";
			var_347_string = var_2_object;
			func_2554(var_347_string);
			goto Label_235;
	}
		PlayAnimation("all", "idle");

	Label_250:
		WaitForAnimEnd();
		var_350_string = var_3_string;
		if(var_350_string != 0) {
			goto Label_260;
		}
		PlayAnimation("all", "idle");
		goto Label_250;

	}
	goto Label_260;
	
Label_260:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_2897()
{
	SetVariable("oob1Laska2", (int)1);
	return 0;
}


func_2646(var_165_bool, var_166_object, var_167_float)
{
	var_168_bool = var_166_object == 0; //@nz
	if(var_168_bool != 0) {
		var_165_bool = 0;
		return 0;
	}
	var_170_bool = var_167_float > (int)0;
	if(var_170_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_201_bool = var_167_float < (int)0;
		if(var_201_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_2667;
		}
		var_165_bool = 0;
		return 0;
	}
Label_2667:
	var_172_float = 0;
	var_167_float = var_172_float;
	func_2681(var_172_float);
	var_176_bool = 0; var_177_object = Obj(); var_178_string = ""; var_179_float = 0; var_180_float = 0; var_181_float = 0;
	var_166_object = var_177_object;
	var_167_float = var_179_float;
	func_2283(var_176_bool, var_177_object, "reputation", var_179_float, (float)0, (float)1);
	var_165_bool = 1;
	return 0;
	
}


func_3159(var_38_object)
{
	var_39_object = Obj(); var_40_object = Obj(); var_41_object = Obj(); var_42_object = Obj();
	GetMainOutdoorScene(var_41_object);
	var_43_bool = var_41_object == 0; //@ne
	if(var_43_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_42_object = 0;
		var_42_object = var_38_object;
		return 4;
	}
	@@var_41_object:GetMap(var_42_object);
	var_42_object = var_38_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2903()
{
	SetVariable("oob1Laska3", (int)1);
	return 0;
}


func_2909()
{
	var_234_bool = 0; var_235_string = ""; var_236_string = "";
	func_2691(var_234_bool, "quest_b1_02", "fail");
	return 0;
}


func_2398()
{
	var_267_bool = 0; var_268_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_270_bool = 0;
	func_2755(var_270_bool);
	if(var_270_bool != 0) {
	} else {
		HasAnimationTrack(var_268_bool, "head");
		var_272_bool = var_268_bool;
		if(var_272_bool == 0) goto Label_2415;
		UnlookAsync("head");
	}
Label_2415:
	return 2;
	
}


func_1885(var_0_object, var_1_object, var_2_object, var_3_string, var_590_object, var_591_object)
{
	var_0_object = var_591_object;
	var_1_object = var_590_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_597_string = "";
		func_1943(var_591_object, "Neutral");
		@@@var_0_object:SetMessage((int)540551);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540552, (int)-1, (int)42561);
		@@@var_0_object:AddReply((int)540795, (int)-1, (int)42844);
		goto Label_1913;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x761";
	}
Label_1913:
	var_612_bool = 0;
	func_2755(var_612_bool);
	if(var_612_bool != 0) {

	Label_1917:
		lshWaitForAnimEnd();
		var_613_string = var_3_string;
		if(var_613_string != 0) {
		} else {
			var_614_string = "";
			var_614_string = var_2_object;
			func_2554(var_614_string);
			goto Label_1917;
	}
		PlayAnimation("all", "idle");

	Label_1932:
		WaitForAnimEnd();
		var_617_string = var_3_string;
		if(var_617_string != 0) {
			goto Label_1942;
		}
		PlayAnimation("all", "idle");
		goto Label_1932;
	}
	goto Label_1942;
	
Label_1942:
	return 0;
	
}


func_1635(var_2_object, var_532_string)
{
	var_533_bool = 0;
	func_2755(var_533_bool);
	var_534_bool = var_533_bool == 0; //@nz
	if(var_534_bool != 0) {
		return 0;
	}
	var_535_bool = var_532_string == var_2_object;
	if(var_535_bool != 0) {
		return 0;
	}
	var_536_string = ""; var_537_bool = 0;
	var_532_string = var_536_string;
	var_539_bool = var_532_string == "";
	if(var_539_bool != 0) {
		var_537_bool = 0;
	} else {
		var_537_bool = 1;
	}
	func_2570(var_536_string, var_537_bool);
	var_2_object = var_532_string;
	return 0;
	
}


func_2916()
{
	var_218_int = 0; var_219_string = "";
	func_2634(var_218_int, "b1q02");
	var_223_bool = var_218_int != (int)0;
	if(var_223_bool != 0) {
		func_3092();
	}
	return 0;
}


func_1381(var_2_object, var_223_string)
{
	var_224_bool = 0;
	func_2755(var_224_bool);
	var_225_bool = var_224_bool == 0; //@nz
	if(var_225_bool != 0) {
		return 0;
	}
	var_226_bool = var_223_string == var_2_object;
	if(var_226_bool != 0) {
		return 0;
	}
	var_227_string = ""; var_228_bool = 0;
	var_223_string = var_227_string;
	var_230_bool = var_223_string == "";
	if(var_230_bool != 0) {
		var_228_bool = 0;
	} else {
		var_228_bool = 1;
	}
	func_2570(var_227_string, var_228_bool);
	var_2_object = var_223_string;
	return 0;
	
}


func_3176(var_90_object, var_91_string, var_92_float)
{
	var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_object = Obj(); var_97_bool = 0; var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_object = Obj(); var_101_bool = 0;
	GetMainOutdoorScene(var_100_object);
	var_102_bool = var_100_object == 0; //@ne
	if(var_102_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_100_object:GetLocator(var_91_string, var_101_bool, var_98_cvector, var_99_cvector);
	var_104_bool = var_101_bool == 0; //@nz
	if(var_104_bool != 0) {
		var_106_int = "Warning: outdoor scene locator " + var_91_string;
		var_108_int = var_106_int + " doesnt exist";
		Trace(var_108_int);
	}
	@@var_100_object:GetMap(var_90_object);
	var_109_bool = var_90_object == 0; //@ne
	if(var_109_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_111_float = GetByIndex(var_98_cvector, 0);
	var_112_float = GetByIndex(var_98_cvector, 2);
	@@var_90_object:SetMapParams(var_111_float, var_112_float, var_92_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_2416(var_121_bool, var_122_object)
{
	var_126_int = 0; var_127_int = 0; var_128_int = 0; var_129_int = 0;
	GetVariable("voice_common", var_128_int);
	var_131_int = var_128_int;
	if(var_131_int != 0) {
		var_132_bool = 0; var_133_object = Obj();
		var_122_object = var_133_object;
		func_2474(var_132_bool, var_133_object);
		var_162_bool = var_132_bool == 0; //@nz
		if(var_162_bool != 0) {
			var_163_bool = 0; var_164_object = Obj();
			var_122_object = var_164_object;
			func_2511(var_163_bool, var_164_object);
			var_198_bool = var_163_bool == 0; //@nz
			if(var_198_bool != 0) {
				var_121_bool = 0;
				return 4;
			}
		}
		irand(var_129_int, (int)2);
		var_200_int = var_129_int;
		if(var_200_int != 0) {
			var_203_int = var_128_int + (int)1;
			var_205_int = var_203_int % (int)3;
			SetVariable("voice_common", var_205_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_208_bool = 0; var_209_object = Obj();
		var_122_object = var_209_object;
		func_2511(var_208_bool, var_209_object);
		var_210_bool = var_208_bool == 0; //@nz
		if(var_210_bool != 0) {
			var_211_bool = 0; var_212_object = Obj();
			var_122_object = var_212_object;
			func_2474(var_211_bool, var_212_object);
			var_213_bool = var_211_bool == 0; //@nz
			if(var_213_bool != 0) {
				var_121_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_2472;
	
Label_2472:
	var_121_bool = 1;
	return 4;
	
}


func_2928(var_408_bool)
{
	var_410_int = 0; var_411_string = "";
	func_2634(var_410_int, "oob1Laska4");
	var_413_bool = var_410_int == (int)0;
	if(var_413_bool != 0) {
		var_408_bool = 1;
		return 0;
	}
	var_408_bool = 0;
	return 0;
}


func_2681(var_172_float)
{
	var_173_object = Obj(); var_174_object = Obj();
	CreateFloatVector(var_174_object);
	@@var_174_object:add(var_172_float);
	SendWorldWndMessage((int)16, var_174_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2940(var_477_bool)
{
	var_479_int = 0; var_480_string = "";
	func_2634(var_479_int, "b6q01KlaraLaska");
	var_482_bool = var_479_int != (int)0;
	if(var_482_bool != 0) {
		var_477_bool = 1;
		return 0;
	}
	var_477_bool = 0;
	return 0;
}


func_2691(var_154_bool, var_155_string, var_156_string)
{
	var_157_object = Obj(); var_158_object = Obj();
	FindActor(var_158_object, var_155_string);
	var_159_bool = var_158_object == 0; //@ne
	if(var_159_bool != 0) {
		var_154_bool = 0;
		return 2;
	}
	Trigger(var_158_object, var_156_string);
	var_154_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2952(var_414_bool)
{
	var_416_int = 0; var_417_string = "";
	func_2634(var_416_int, "b1q05");
	var_419_bool = var_416_int == (int)1000;
	if(var_419_bool != 0) {
		var_414_bool = 1;
		return 0;
	}
	var_414_bool = 0;
	return 0;
}


func_3209(var_112_int)
{
	var_113_int = 0; var_114_int = 0;
	GetVariable("branch", var_114_int);
	var_117_bool = var_114_int == (int)0;
	if(var_117_bool != 0) {
		var_112_int = 1;
		return 2;
	EMIT "GOTO 0xc98";
	}
	var_119_bool = var_114_int == (int)1;
	if(var_119_bool != 0) {
		var_112_int = 2;
		return 2;
	}
	var_112_int = 3;
	return 2;
}


func_2187()
{
	var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0;
	WaitForAnimEnd();
	var_42_bool = 0;
	func_2324(var_42_bool);
	var_43_bool = var_42_bool == 0; //@nz
	if(var_43_bool != 0) {
		return 12;
	}
	func_2730((int)0);
	var_44_int = var_36_int;
	var_37_int = 0;
	
Label_2201:
	var_57_bool = 0;
	var_57_bool = 0;
	var_59_bool = var_37_int < (int)5;
	if(var_59_bool != 0) {
		var_60_bool = 0;
		func_2324(var_60_bool);
		if(var_60_bool != 0) {
			var_57_bool = 1;
		}
	}
	if(var_57_bool != 0) {
		var_61_bool = var_36_int == 0; //@nz
		if(var_61_bool != 0) {
			Sleep((int)3, var_38_bool);
			var_63_bool = var_38_bool == 0; //@nz
			if(var_63_bool != 0) {
			} else {
		} else {
				irand(var_39_int, var_36_int);
				irand(var_40_int, (int)5);
				var_69_bool = var_40_int != (int)0;
				if(var_69_bool != 0) {
					var_39_int = 0;
				}
				var_71_string = ""; var_72_int = 0;
				var_39_int = var_72_int;
				func_2723(var_71_string, var_72_int);
				PlayAnimation("all", var_71_string);
				WaitForAnimEnd(var_41_bool);
				var_73_bool = var_41_bool == 0; //@nz
				if(var_73_bool == 0) goto Label_2242;
				goto Label_2253;
		}
		Label_2242:
			var_64_bool = 0;
			func_2256(var_64_bool);
			var_65_bool = var_64_bool == 0; //@nz
			if(var_65_bool != 0) {
				goto Label_2253;
			}
			ResetAAS();
			var_37_int = var_37_int + (int)1;
			goto Label_2201;

		}
	}
Label_2253:
	ResetAAS();
	return 12;
	
}


func_2703(var_49_float)
{
	var_50_float = 0; var_51_float = 0;
	GetGameTime(var_51_float);
	var_51_float = var_49_float;
	return 2;
}


func_2708(var_176_int)
{
	var_177_float = 0; var_178_float = 0;
	GetGameTime(var_178_float);
	var_180_int = 0;
	var_180_int = var_178_float / (int)24;
	var_176_int = (int)1 + var_180_int;
	return 2;
}


func_2964(var_541_bool)
{
	var_543_int = 0; var_544_string = "";
	func_2634(var_543_int, "oob12Laska1");
	var_546_bool = var_543_int == (int)0;
	if(var_546_bool != 0) {
		var_541_bool = 1;
		return 0;
	}
	var_541_bool = 0;
	return 0;
}


func_1943(var_2_object, var_597_string)
{
	var_598_bool = 0;
	func_2755(var_598_bool);
	var_599_bool = var_598_bool == 0; //@nz
	if(var_599_bool != 0) {
		return 0;
	}
	var_600_bool = var_597_string == var_2_object;
	if(var_600_bool != 0) {
		return 0;
	}
	var_601_string = ""; var_602_bool = 0;
	var_597_string = var_601_string;
	var_604_bool = var_597_string == "";
	if(var_604_bool != 0) {
		var_602_bool = 0;
	} else {
		var_602_bool = 1;
	}
	func_2570(var_601_string, var_602_bool);
	var_2_object = var_597_string;
	return 0;
	
}


func_3226(var_44_object)
{
	var_45_int = 0; var_46_int = 0;
	GetVariable("mt_laska", var_46_int);
	var_48_bool = var_46_int == 0; //@nz
	if(var_48_bool != 0) {
		var_49_int = 0; var_50_object = Obj();
		var_44_object = var_50_object;
		TaskCall(4);
		func_1242(var_51_object, var_49_int, var_50_object);
		TaskReturn();
		SetVariable("mt_laska", (int)1);
	}
	var_276_bool = 0; var_277_int = 0;
	func_2717(var_276_bool, (int)1);
	if(var_276_bool != 0) {
		var_279_int = 0; var_280_object = Obj();
		var_44_object = var_280_object;
		TaskCall(0);
		func_0(var_281_object, var_279_int, var_280_object);
		TaskReturn();
		return 2;
	}
	var_428_bool = 0; var_429_int = 0;
	func_2717(var_428_bool, (int)6);
	if(var_428_bool != 0) {
		var_430_int = 0; var_431_object = Obj();
		var_44_object = var_431_object;
		TaskCall(2);
		func_949(var_432_object, var_430_int, var_431_object);
		TaskReturn();
		return 2;
	}
	var_499_bool = 0; var_500_int = 0;
	func_2717(var_499_bool, (int)12);
	if(var_499_bool != 0) {
		var_501_int = 0; var_502_object = Obj();
		var_44_object = var_502_object;
		TaskCall(6);
		func_1486(var_503_object, var_501_int, var_502_object);
		TaskReturn();
		return 2;
	}
	var_566_int = 0; var_567_object = Obj();
	var_44_object = var_567_object;
	TaskCall(8);
	func_1804(var_568_object, var_566_int, var_567_object);
	TaskReturn();
	return 2;
}


func_2717(var_276_bool, var_277_int)
{
	var_278_int = 0;
	func_2708(var_278_int);
	var_276_bool = var_278_int == var_277_int;
	return 0;
}


func_2976(var_311_bool)
{
	var_313_int = 0; var_314_string = "";
	func_2634(var_313_int, "oob1Laska1");
	var_318_bool = var_313_int == (int)0;
	if(var_318_bool != 0) {
		var_311_bool = 1;
		return 0;
	}
	var_311_bool = 0;
	return 0;
}


func_2723(var_50_string, var_51_int)
{
	var_52_string = ""; var_53_string = "";
	var_54_int = var_51_int;
	if(var_54_int != 0) {
		"idle" = "idle" + var_51_int;
	}
	var_53_string = var_50_string;
	return 2;
}


func_2730(var_44_int)
{
	var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_bool = 0;
	var_47_int = 0;
	
Label_2732:
	var_50_string = ""; var_51_int = 0;
	var_47_int = var_51_int;
	func_2723(var_50_string, var_51_int);
	HasAnimation(var_48_bool, "all", var_50_string);
	var_55_bool = var_48_bool == 0; //@nz
	if(var_55_bool != 0) {
	} else {
		var_47_int = var_47_int + (int)1;
		goto Label_2732;
	}
	var_47_int = var_44_int;
	return 4;
	
}


func_2474(var_132_bool, var_133_object)
{
	var_134_string = ""; var_135_int = 0; var_136_bool = 0; var_137_int = 0; var_138_string = ""; var_139_string = ""; var_140_int = 0; var_141_bool = 0; var_142_int = 0; var_143_string = "";
	var_139_string = "c";
	var_140_int = 0;
	
Label_2477:
	if((int)1 != 0) {
		var_146_int = var_140_int + (int)1;
		var_147_int = var_139_string + var_146_int;
		@@var_133_object:HasProperty(var_147_int, var_141_bool);
		var_148_bool = var_141_bool == 0; //@nz
		if(var_148_bool != 0) {
		} else {
			var_140_int = var_140_int + (int)1;
			goto Label_2477;
		}
	}
	var_149_bool = var_140_int == 0; //@nz
	if(var_149_bool != 0) {
		var_132_bool = 0;
		return 10;
	}
	var_142_int = 0;
	var_151_bool = var_140_int > (int)1;
	if(var_151_bool != 0) {
		irand(var_142_int, var_140_int);
	}
	var_153_int = var_142_int + (int)1;
	var_154_int = var_139_string + var_153_int;
	@@var_133_object:GetProperty(var_154_int, var_143_string);
	var_155_bool = 0; var_156_string = "";
	var_143_string = var_156_string;
	func_2585(var_155_bool, var_156_string);
	var_155_bool = var_132_bool;
	return 10;
	
}


func_2988(var_356_bool)
{
	var_358_int = 0; var_359_string = "";
	func_2634(var_358_int, "b1q02");
	var_361_bool = var_358_int == (int)0;
	if(var_361_bool != 0) {
		var_356_bool = 1;
		return 0;
	}
	var_356_bool = 0;
	return 0;
}


func_949(var_0_object, var_430_int, var_431_object)
{
	var_433_object = Obj(); var_434_bool = 0; var_435_int = 0; var_436_bool = 0; var_437_object = Obj(); var_438_bool = 0; var_439_int = 0; var_440_bool = 0;
	var_0_object = var_431_object;
	var_441_bool = 0; var_442_object = Obj(); var_443_float = 0;
	var_431_object = var_442_object;
	func_2329(var_441_bool, var_442_object, (float)70.0);
	var_444_bool = var_441_bool == 0; //@nz
	if(var_444_bool != 0) {
		var_430_int = -2;
		return 8;
	}
	CreateDialog(var_437_object);
	var_445_int = 0;
	func_2749(var_445_int);
	@@var_437_object:SetNPCName(var_445_int);
	var_446_int = 0;
	func_2747(var_446_int);
	@@var_437_object:SetNPCDescription(var_446_int);
	var_447_string = "";
	func_2751(var_447_string);
	@@var_437_object:SetPhoto(var_447_string);
	var_448_string = "";
	func_2753(var_448_string);
	@@var_437_object:SetPhoto2(var_448_string);
	var_449_int = 0;
	func_3209(var_449_int);
	@@var_437_object:SetPlayerName(var_449_int);
	IsOverrideActive(var_438_bool);
	var_450_bool = var_438_bool;
	if(var_450_bool != 0) {
		var_430_int = -2;
		return 8;
	}
	DoDialog(var_437_object);
	var_451_bool = 0; var_452_object = Obj();
	func_2607(Obj());
	var_453_object = var_452_object;
	func_2416(var_451_bool, var_452_object);
	var_454_object = Obj(); var_455_object = Obj();
	var_431_object = var_454_object;
	var_437_object = var_455_object;
	TaskCall(3);
	func_1030(var_456_object, var_457_object, var_458_string, var_459_bool, var_454_object, var_455_object);
	TaskReturn();
	@@var_437_object:IsDialogEnd(var_440_bool);
	
Label_1012:
	var_497_bool = var_440_bool == 0; //@nz
	if(var_497_bool != 0) {
		sync();
		@@var_437_object:IsDialogEnd(var_440_bool);
		goto Label_1012;
	}
	var_431_object = Obj();
	func_2398();
	StopDialog(var_437_object);
	@@var_437_object:GetReturnValue((int)-1);
	var_439_int = var_430_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3000(var_370_bool, var_371_object)
{
	var_372_bool = 0; var_373_object = Obj(); var_374_string = "";
	var_371_object = var_373_object;
	func_2639(var_372_bool, var_373_object, "b1q02_blood");
	if(var_372_bool != 0) {
		var_379_int = 0; var_380_string = "";
		func_2634(var_379_int, "b1q02");
		var_382_bool = var_379_int == (int)2;
		if(var_382_bool != 0) {
			var_370_bool = 1;
			return 0;
		}
	}
	var_370_bool = 0;
	return 0;
}


func_2747(var_109_int)
{
	var_109_int = 515542;
	return 0;
}


func_2749(var_108_int)
{
	var_108_int = 502867;
	return 0;
}


func_2751(var_110_string)
{
	var_110_string = "ui/NPC_Laska.png";
	return 0;
}


func_2753(var_111_string)
{
	var_111_string = "ui/NPC_Laska_b.png";
	return 0;
}


func_2755(var_103_bool)
{
	var_103_bool = 1;
	return 0;
}


func_2757()
{
	SetVariable("oob6Laska1", (int)1);
	return 0;
}


func_3018(var_383_bool)
{
	var_385_int = 0; var_386_string = "";
	func_2634(var_385_int, "oob1Laska2");
	var_388_bool = var_385_int == (int)0;
	if(var_388_bool != 0) {
		var_383_bool = 1;
		return 0;
	}
	var_383_bool = 0;
	return 0;
}


func_2763()
{
	SetVariable("oob1Laska4", (int)1);
	return 0;
}


func_1486(var_0_object, var_501_int, var_502_object)
{
	var_504_object = Obj(); var_505_bool = 0; var_506_int = 0; var_507_bool = 0; var_508_object = Obj(); var_509_bool = 0; var_510_int = 0; var_511_bool = 0;
	var_0_object = var_502_object;
	var_512_bool = 0; var_513_object = Obj(); var_514_float = 0;
	var_502_object = var_513_object;
	func_2329(var_512_bool, var_513_object, (float)70.0);
	var_515_bool = var_512_bool == 0; //@nz
	if(var_515_bool != 0) {
		var_501_int = -2;
		return 8;
	}
	CreateDialog(var_508_object);
	var_516_int = 0;
	func_2749(var_516_int);
	@@var_508_object:SetNPCName(var_516_int);
	var_517_int = 0;
	func_2747(var_517_int);
	@@var_508_object:SetNPCDescription(var_517_int);
	var_518_string = "";
	func_2751(var_518_string);
	@@var_508_object:SetPhoto(var_518_string);
	var_519_string = "";
	func_2753(var_519_string);
	@@var_508_object:SetPhoto2(var_519_string);
	var_520_int = 0;
	func_3209(var_520_int);
	@@var_508_object:SetPlayerName(var_520_int);
	IsOverrideActive(var_509_bool);
	var_521_bool = var_509_bool;
	if(var_521_bool != 0) {
		var_501_int = -2;
		return 8;
	}
	DoDialog(var_508_object);
	var_522_bool = 0; var_523_object = Obj();
	func_2607(Obj());
	var_524_object = var_523_object;
	func_2416(var_522_bool, var_523_object);
	var_525_object = Obj(); var_526_object = Obj();
	var_502_object = var_525_object;
	var_508_object = var_526_object;
	TaskCall(7);
	func_1567(var_527_object, var_528_object, var_529_string, var_530_bool, var_525_object, var_526_object);
	TaskReturn();
	@@var_508_object:IsDialogEnd(var_511_bool);
	
Label_1549:
	var_564_bool = var_511_bool == 0; //@nz
	if(var_564_bool != 0) {
		sync();
		@@var_508_object:IsDialogEnd(var_511_bool);
		goto Label_1549;
	}
	var_502_object = Obj();
	func_2398();
	StopDialog(var_508_object);
	@@var_508_object:GetReturnValue((int)-1);
	var_510_int = var_501_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2511(var_163_bool, var_164_object)
{
	var_165_string = ""; var_166_int = 0; var_167_bool = 0; var_168_int = 0; var_169_string = ""; var_170_string = ""; var_171_int = 0; var_172_bool = 0; var_173_int = 0; var_174_string = "";
	var_176_int = 0;
	func_2708(var_176_int);
	var_182_int = "d" + var_176_int;
	var_170_string = var_182_int + "m";
	var_171_int = 0;
	
Label_2520:
	if((int)1 != 0) {
		var_186_int = var_171_int + (int)1;
		var_187_int = var_170_string + var_186_int;
		@@var_164_object:HasProperty(var_187_int, var_172_bool);
		var_188_bool = var_172_bool == 0; //@nz
		if(var_188_bool != 0) {
		} else {
			var_171_int = var_171_int + (int)1;
			goto Label_2520;
		}
	}
	var_189_bool = var_171_int == 0; //@nz
	if(var_189_bool != 0) {
		var_163_bool = 0;
		return 10;
	}
	var_173_int = 0;
	var_191_bool = var_171_int > (int)1;
	if(var_191_bool != 0) {
		irand(var_173_int, var_171_int);
	}
	var_193_int = var_173_int + (int)1;
	var_194_int = var_170_string + var_193_int;
	@@var_164_object:GetProperty(var_194_int, var_174_string);
	var_195_bool = 0; var_196_string = "";
	var_174_string = var_196_string;
	func_2585(var_195_bool, var_196_string);
	var_195_bool = var_163_bool;
	return 10;
	
}


func_2256(var_64_bool)
{
	var_64_bool = 1;
	return 0;
}


func_2769()
{
	var_247_object = Obj(); var_248_object = Obj();
	func_3159(Obj());
	var_249_object = var_248_object;
	var_254_float = 0;
	func_2703(var_254_float);
	@@var_248_object:AddMark("b1LaskaGotoMishka", "pt_map_mishka", (int)3, (int)530602, var_254_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2258()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_3030(var_319_bool)
{
	var_321_int = 0; var_322_string = "";
	func_2634(var_321_int, "b1q02_dead");
	var_324_bool = var_321_int != (int)0;
	if(var_324_bool != 0) {
		var_319_bool = 1;
		return 0;
	}
	var_319_bool = 0;
	return 0;
}


func_2263(var_41_float, var_42_object)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	GetPosition(var_46_cvector);
	@@var_42_object:GetPosition(var_47_cvector);
	var_48_cvector = var_47_cvector - var_46_cvector;
	var_41_float = var_48_cvector | var_48_cvector;
	return 6;
}


func_1242(var_0_object, var_49_int, var_50_object)
{
	var_52_object = Obj(); var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_object = Obj(); var_57_bool = 0; var_58_int = 0; var_59_bool = 0;
	var_0_object = var_50_object;
	var_60_bool = 0; var_61_object = Obj(); var_62_float = 0;
	var_50_object = var_61_object;
	func_2329(var_60_bool, var_61_object, (float)70.0);
	var_107_bool = var_60_bool == 0; //@nz
	if(var_107_bool != 0) {
		var_49_int = -2;
		return 8;
	}
	CreateDialog(var_56_object);
	var_108_int = 0;
	func_2749(var_108_int);
	@@var_56_object:SetNPCName(var_108_int);
	var_109_int = 0;
	func_2747(var_109_int);
	@@var_56_object:SetNPCDescription(var_109_int);
	var_110_string = "";
	func_2751(var_110_string);
	@@var_56_object:SetPhoto(var_110_string);
	var_111_string = "";
	func_2753(var_111_string);
	@@var_56_object:SetPhoto2(var_111_string);
	var_112_int = 0;
	func_3209(var_112_int);
	@@var_56_object:SetPlayerName(var_112_int);
	IsOverrideActive(var_57_bool);
	var_120_bool = var_57_bool;
	if(var_120_bool != 0) {
		var_49_int = -2;
		return 8;
	}
	DoDialog(var_56_object);
	var_121_bool = 0; var_122_object = Obj();
	func_2607(Obj());
	var_123_object = var_122_object;
	func_2416(var_121_bool, var_122_object);
	var_216_object = Obj(); var_217_object = Obj();
	var_50_object = var_216_object;
	var_56_object = var_217_object;
	TaskCall(5);
	func_1323(var_218_object, var_219_object, var_220_string, var_221_bool, var_216_object, var_217_object);
	TaskReturn();
	@@var_56_object:IsDialogEnd(var_59_bool);
	
Label_1305:
	var_265_bool = var_59_bool == 0; //@nz
	if(var_265_bool != 0) {
		sync();
		@@var_56_object:IsDialogEnd(var_59_bool);
		goto Label_1305;
	}
	var_50_object = Obj();
	func_2398();
	StopDialog(var_56_object);
	@@var_56_object:GetReturnValue((int)-1);
	var_58_int = var_49_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2011(var_0_object)
{
	var_26_bool = 0;
	func_2324(var_26_bool);
	var_29_bool = var_26_bool == 0; //@nz
	if(var_29_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_2020:
	func_2187();
	goto Label_2020;
}
EMIT "Return(); Pop(0)";


func_2271(var_184_bool, var_185_object, var_186_string)
{
	var_187_bool = 0; var_188_bool = 0;
	var_191_bool = IsFuncExist(var_185_object, "HasProperty", (int)2);
	var_192_bool = var_191_bool == 0; //@nz
	if(var_192_bool != 0) {
		var_184_bool = 0;
		return 2;
	}
	@@var_185_object:HasProperty(var_186_string, var_188_bool);
	var_188_bool = var_184_bool;
	return 2;
}


func_2785()
{
	SetVariable("oob12Laska1", (int)1);
	return 0;
}


func_3042(var_398_bool)
{
	var_400_int = 0; var_401_string = "";
	func_2634(var_400_int, "oob1Laska3");
	var_403_bool = var_400_int == (int)0;
	if(var_403_bool != 0) {
		var_398_bool = 1;
		return 0;
	}
	var_398_bool = 0;
	return 0;
}


func_2791(var_256_object)
{
	var_257_object = Obj(); var_258_string = ""; var_259_float = 0;
	func_3159(Obj());
	var_260_object = var_257_object;
	func_3176(var_257_object, "pt_map_mishka", (float)2);
	var_261_object = Obj();
	func_3159(var_261_object);
	@@var_256_object:ShowMap(var_261_object);
	return 0;
}


func_2025(var_51_bool)
{
	var_52_object = Obj(); var_53_object = Obj();
	FindActor(var_53_object, "player");
	var_55_bool = var_53_object == 0; //@nz
	if(var_55_bool != 0) {
		var_51_bool = 0;
		return 2;
	}
	var_56_bool = 0; var_57_object = Obj();
	var_53_object = var_57_object;
	func_2315(var_56_bool, var_57_object);
	var_56_bool = var_51_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2283(var_176_bool, var_177_object, var_178_string, var_179_float, var_180_float, var_181_float)
{
	var_182_float = 0; var_183_float = 0;
	var_184_bool = 0; var_185_object = Obj(); var_186_string = "";
	var_177_object = var_185_object;
	var_178_string = var_186_string;
	func_2271(var_184_bool, var_185_object, var_186_string);
	var_193_bool = var_184_bool == 0; //@nz
	if(var_193_bool != 0) {
		var_176_bool = 0;
		return 2;
	}
	@@var_177_object:GetProperty(var_178_string, var_183_float);
	var_194_float = 0; var_195_float = 0; var_196_float = 0; var_197_float = 0;
	var_195_float = var_183_float + var_179_float;
	var_180_float = var_196_float;
	var_181_float = var_197_float;
	func_2623(var_194_float, var_195_float, var_196_float, var_197_float);
	@@var_177_object:SetProperty(var_178_string, var_194_float);
	var_176_bool = 1;
	return 2;
}


func_3054(var_471_bool)
{
	var_473_int = 0; var_474_string = "";
	func_2634(var_473_int, "oob6Laska1");
	var_476_bool = var_473_int == (int)0;
	if(var_476_bool != 0) {
		var_471_bool = 1;
		return 0;
	}
	var_471_bool = 0;
	return 0;
}


func_2807(var_163_object)
{
	var_165_bool = 0; var_166_object = Obj(); var_167_float = 0;
	var_163_object = var_166_object;
	func_2646(var_165_bool, var_166_object, (float)0.30000001192092896);
	return 0;
}


func_2040(var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0);
	var_104_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_103_float, var_104_float);
	return 0;
}


func_2554(var_249_string)
{
	var_250_bool = 0; var_251_float = 0; var_252_float = 0; var_253_bool = 0; var_254_float = 0; var_255_float = 0;
	lshHasAnimation(var_253_bool, var_249_string);
	var_256_bool = var_253_bool;
	if(var_256_bool != 0) {
		lshGetAnimTimes(var_249_string, var_254_float, var_255_float);
		lshPlayAnimation(var_254_float, var_255_float, (bool)0);
	} else {
		var_259_int = "Can't find lsh animation : " + var_249_string;
		Trace(var_259_int);
	}
	return 6;
	
}


func_2045(var_34_bool)
{
	var_35_object = Obj(); var_36_bool = 0; var_37_object = Obj(); var_38_bool = 0;
	FindActor(var_37_object, "player");
	var_40_bool = var_37_object == 0; //@nz
	if(var_40_bool != 0) {
		var_34_bool = 0;
		return 4;
	}
	var_41_float = 0; var_42_object = Obj();
	var_37_object = var_42_object;
	func_2263(var_41_float, var_42_object);
	var_50_bool = var_41_float > (float)90000.0;
	if(var_50_bool != 0) {
		var_34_bool = 0;
		return 4;
	}
	CanSee(var_38_bool, var_37_object);
	var_38_bool = var_34_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_2814(var_211_object)
{
	var_213_bool = 0; var_214_object = Obj(); var_215_float = 0;
	var_211_object = var_214_object;
	func_2646(var_213_bool, var_214_object, (float)-0.10000000149011612);
	return 0;
}


