// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetMainOutdoorScene/1,AddBlankActor/4,GetInvItemByName/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Autizm|A:SetMessage|A:ClearReplies|A:AddReply|W:Neutral|W:all|W:idle|W:Welldie|W:Pain|W:Disturbance|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:Can't find lsh animation : |W:.bin|A:HasItem|W:ui/NPC_Laska.png|W:ui/NPC_Laska_b.png|W:pt_map_burah_home|A:ShowMap|W:ook1Laska1|W:ook1Laska2|W:k1q01LaskaGotoBurah|A:AddMark|W:k2q02|W:milk|A:RemoveItemByType|W:bread|W:flower|W:ook2Laska1|W:k5q03LaskaGotoAlbinos|W:pt_k5q03_albinos_path12|W:quest_k5_03|W:ook5Laska1|W:k5LaskaVisit|W:k6LaskaVisit|W:ook6Laska1|W:k6q03LaskaGotoAlbinos|W:pt_k6q03_albinos_path9|W:quest_k6_03|W:playsound|W:giveitem|W:mapmark|W:k1q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:mt_laska
// @GLOBALS: 0:object:
// @RUN_OP: 0xb25
// @RUN_TASK: 14
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xd7 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x377 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x5c5 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x6b3 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x870 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9fd vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0xafb vars=int,int
// @TASK_14: vars=cvector params=0
// @EVENT_7: op=0xb6e vars=int
// @EVENT_6: op=0xb94 vars=
// @EVENT_5: op=0xba3 vars=
// @EVENT_45: op=0xbb0 vars=bool
// @EVENT_0: op=0xbbc vars=object
// @PE: 0x51,0xc1,0xd7,0x2ea,0x361,0x377,0x575,0x5af,0x5c5,0x640,0x69d,0x6b3,0x7fd,0x85a,0x870,0x9a8,0x9e7,0x9fd,0xaab,0xae5,0xafb,0xb25,0xb6e,0xb94,0xbb0,0xd90,0xdb8,0xdc8,0xdce,0xe00,0xe20,0xe26,0xe2c,0xe32,0xe52,0xe58,0xe5e,0xe6a,0xe76,0xe82,0xe8e,0xe9a,0xeb9,0xec5,0xed1

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3412();
		var_41_bool = var_37_cvector == (int)26020;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_3534();
		}
		var_47_bool = var_37_cvector == (int)26022;
		if(var_47_bool != 0) {
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_3540();
			var_91_object = Obj(); var_92_object = Obj();
			var_91_object = var_1_object;
			var_92_object = var_0_object;
			func_3512(var_92_object);
		}
		var_118_bool = var_37_cvector == (int)43956;
		if(var_118_bool != 0) {
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_object;
			func_3512(var_120_object);
			var_121_object = Obj(); var_122_object = Obj();
			var_121_object = var_1_object;
			var_122_object = var_0_object;
			func_3540();
		}
		var_124_bool = var_36_bool == (int)25983;
		if(var_124_bool != 0) {
			var_125_bool = 0;
			var_125_bool = 0;
			var_126_bool = 0; var_127_object = Obj();
			var_127_object = var_1_object;
			func_3678(var_127_object);
			if(var_126_bool != 0) {
				var_134_bool = 0; var_135_object = Obj();
				var_135_object = var_1_object;
				func_3690(var_135_object);
				var_140_bool = var_134_bool == 0; //@nz
				if(var_140_bool != 0) {
					var_125_bool = 1;
				}
			}
			if(var_125_bool != 0) {
				var_141_object = Obj(); var_142_object = Obj();
				var_141_object = var_1_object;
				var_142_object = var_0_object;
				func_3528();
				var_145_string = "";
				func_193(var_37_cvector, "Autizm");
				@@@var_0_object:SetMessage((int)524644);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)526298, (int)27579, (int)27578);
				@@@var_0_object:AddReply((int)526300, (int)27581, (int)27580);
				return 0;
			}
			var_169_string = "";
			func_193(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)524648);
			@@@var_0_object:ClearReplies();
			var_171_bool = 0;
			var_171_bool = 0;
			var_172_bool = 0; var_173_object = Obj();
			var_173_object = var_1_object;
			func_3690(var_173_object);
			if(var_172_bool != 0) {
				var_174_bool = 0; var_175_object = Obj();
				var_175_object = var_1_object;
				func_3702(var_175_object);
				if(var_174_bool != 0) {
					var_171_bool = 1;
				}
			}
			if(var_171_bool != 0) {
				@@@var_0_object:AddReply((int)524681, (int)43988, (int)26020);
			}
			@@@var_0_object:AddReply((int)524649, (int)-1, (int)25988);
			return 0;
		}
		var_187_bool = var_36_bool == (int)43988;
		if(var_187_bool != 0) {
			var_188_string = "";
			func_193(var_37_cvector, "Welldie");
			@@@var_0_object:SetMessage((int)541782);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541783, (int)26021, (int)43989);
			@@@var_0_object:AddReply((int)541784, (int)43991, (int)43990);
			return 0;
		}
		var_197_bool = var_36_bool == (int)43991;
		if(var_197_bool != 0) {
			var_198_string = "";
			func_193(var_37_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)541785);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541786, (int)43995, (int)43992);
			@@@var_0_object:AddReply((int)541787, (int)43994, (int)43993);
			return 0;
		}
		var_207_bool = var_36_bool == (int)43994;
		if(var_207_bool != 0) {
			var_208_string = "";
			func_193(var_37_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)541788);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541791, (int)26021, (int)43997);
			return 0;
		}
		var_214_bool = var_36_bool == (int)43995;
		if(var_214_bool != 0) {
			var_215_string = "";
			func_193(var_37_cvector, "Pain");
			@@@var_0_object:SetMessage((int)541789);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541790, (int)26021, (int)43996);
			return 0;
		}
		var_221_bool = var_36_bool == (int)26021;
		if(var_221_bool != 0) {
			var_222_string = "";
			func_193(var_37_cvector, "Disturbance");
			@@@var_0_object:SetMessage((int)524682);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541792, (int)44001, (int)44000);
			@@@var_0_object:AddReply((int)541794, (int)44001, (int)44002);
			return 0;
		}
		var_231_bool = var_36_bool == (int)44001;
		if(var_231_bool != 0) {
			var_232_string = "";
			func_193(var_37_cvector, "Disturbance");
			@@@var_0_object:SetMessage((int)541793);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526310, (int)27593, (int)27592);
			@@@var_0_object:AddReply((int)541702, (int)44004, (int)43885);
			return 0;
		}
		var_241_bool = var_36_bool == (int)44004;
		if(var_241_bool != 0) {
			var_242_string = "";
			func_193(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541795);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541796, (int)27593, (int)44005);
			return 0;
		}
		var_248_bool = var_36_bool == (int)27593;
		if(var_248_bool != 0) {
			var_249_string = "";
			func_193(var_37_cvector, "Pain");
			@@@var_0_object:SetMessage((int)526311);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526312, (int)27595, (int)27594);
			@@@var_0_object:AddReply((int)541751, (int)43953, (int)43952);
			return 0;
		}
		var_258_bool = var_36_bool == (int)43953;
		if(var_258_bool != 0) {
			var_259_string = "";
			func_193(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541752);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541753, (int)27595, (int)43954);
			return 0;
		}
		var_265_bool = var_36_bool == (int)27595;
		if(var_265_bool != 0) {
			var_266_string = "";
			func_193(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526313);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524683, (int)-1, (int)26022);
			@@@var_0_object:AddReply((int)541754, (int)-1, (int)43956);
			return 0;
		}
		var_275_bool = var_36_bool == (int)27581;
		if(var_275_bool != 0) {
			var_276_string = "";
			func_193(var_37_cvector, "Pain");
			@@@var_0_object:SetMessage((int)526301);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526302, (int)27579, (int)27582);
			return 0;
		}
		var_282_bool = var_36_bool == (int)27579;
		if(var_282_bool != 0) {
			var_283_string = "";
			func_193(var_37_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)526299);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526303, (int)27585, (int)27584);
			@@@var_0_object:AddReply((int)541701, (int)27585, (int)43883);
			return 0;
		}
		var_292_bool = var_36_bool == (int)27585;
		if(var_292_bool != 0) {
			var_293_string = "";
			func_193(var_37_cvector, "Disturbance");
			@@@var_0_object:SetMessage((int)526304);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524645, (int)25985, (int)25984);
			@@@var_0_object:AddReply((int)526305, (int)25985, (int)27586);
			return 0;
		}
		var_302_bool = var_36_bool == (int)25985;
		if(var_302_bool != 0) {
			var_303_string = "";
			func_193(var_37_cvector, "Disturbance");
			@@@var_0_object:SetMessage((int)524646);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524647, (int)-1, (int)25986);
			@@@var_0_object:AddReply((int)526306, (int)27589, (int)27588);
			return 0;
		}
		var_312_bool = var_36_bool == (int)27589;
		if(var_312_bool != 0) {
			var_313_string = "";
			func_193(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526307);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526308, (int)-1, (int)27590);
			@@@var_0_object:AddReply((int)526309, (int)-1, (int)27591);
			return 0;
		}
		var_3_string = true;
		var_321_bool = 0;
		func_3510(var_321_bool);
		if(var_321_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xd8";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3412();
		var_41_bool = var_37_cvector == (int)26672;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_3563(var_43_object);
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_object;
			func_3666();
		}
		var_82_bool = var_37_cvector == (int)30634;
		if(var_82_bool != 0) {
			var_83_object = Obj(); var_84_object = Obj();
			var_83_object = var_1_object;
			var_84_object = var_0_object;
			func_3563(var_84_object);
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_3666();
		}
		var_88_bool = var_37_cvector == (int)26678;
		if(var_88_bool != 0) {
			var_89_object = Obj(); var_90_object = Obj();
			var_89_object = var_1_object;
			var_90_object = var_0_object;
			func_3584();
		}
		var_94_bool = var_36_bool == (int)26665;
		if(var_94_bool != 0) {
			var_95_string = "";
			func_865(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525297);
			@@@var_0_object:ClearReplies();
			var_113_bool = 0;
			var_113_bool = 1;
			var_114_bool = 0;
			var_114_bool = 0;
			var_115_bool = 0; var_116_object = Obj();
			var_116_object = var_1_object;
			func_3738(var_115_bool, var_116_object);
			if(var_115_bool != 0) {
				var_132_bool = 0; var_133_object = Obj();
				var_133_object = var_1_object;
				func_3714(var_133_object);
				if(var_132_bool != 0) {
					var_114_bool = 1;
				}
			}
			if(var_114_bool != 1) {
				var_140_bool = 0;
				var_140_bool = 0;
				var_141_bool = 0; var_142_object = Obj();
				var_142_object = var_1_object;
				func_3726(var_142_object);
				if(var_141_bool != 0) {
					var_147_bool = 0; var_148_object = Obj();
					var_148_object = var_1_object;
					func_3738(var_147_bool, var_148_object);
					if(var_147_bool != 0) {
						var_140_bool = 1;
					}
				}
				if(var_140_bool != 1) {
					var_113_bool = 0;
				}
			}
			if(var_113_bool != 0) {
				@@@var_0_object:AddReply((int)525298, (int)26667, (int)26666);
			}
			var_152_bool = 0;
			var_152_bool = 0;
			var_153_bool = 0;
			var_153_bool = 0;
			var_154_bool = 0; var_155_object = Obj();
			var_155_object = var_1_object;
			func_3714(var_155_object);
			if(var_154_bool != 0) {
				var_156_bool = 0; var_157_object = Obj();
				var_157_object = var_1_object;
				func_3738(var_156_bool, var_157_object);
				var_158_bool = var_156_bool == 0; //@nz
				if(var_158_bool != 0) {
					var_153_bool = 1;
				}
			}
			if(var_153_bool != 0) {
				var_159_bool = 0; var_160_object = Obj();
				var_160_object = var_1_object;
				func_3769(var_160_object);
				if(var_159_bool != 0) {
					var_152_bool = 1;
				}
			}
			if(var_152_bool != 0) {
				@@@var_0_object:AddReply((int)525310, (int)26679, (int)26678);
			}
			@@@var_0_object:AddReply((int)525305, (int)-1, (int)26673);
			return 0;
		}
		var_172_bool = var_36_bool == (int)26679;
		if(var_172_bool != 0) {
			var_173_string = "";
			func_865(var_37_cvector, "Disturbance");
			@@@var_0_object:SetMessage((int)525311);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525312, (int)42889, (int)26680);
			@@@var_0_object:AddReply((int)540831, (int)-1, (int)42888);
			return 0;
		}
		var_182_bool = var_36_bool == (int)42889;
		if(var_182_bool != 0) {
			var_183_string = "";
			func_865(var_37_cvector, "Pain");
			@@@var_0_object:SetMessage((int)540832);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540833, (int)-1, (int)42890);
			@@@var_0_object:AddReply((int)540834, (int)-1, (int)42891);
			return 0;
		}
		var_192_bool = var_36_bool == (int)26667;
		if(var_192_bool != 0) {
			var_193_string = "";
			func_865(var_37_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)525299);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529180, (int)30631, (int)30630);
			@@@var_0_object:AddReply((int)540812, (int)30633, (int)42864);
			return 0;
		}
		var_202_bool = var_36_bool == (int)30631;
		if(var_202_bool != 0) {
			var_203_string = "";
			func_865(var_37_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)529181);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529182, (int)30633, (int)30632);
			return 0;
		}
		var_209_bool = var_36_bool == (int)30633;
		if(var_209_bool != 0) {
			var_210_string = "";
			func_865(var_37_cvector, "Welldie");
			@@@var_0_object:SetMessage((int)529183);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525300, (int)26669, (int)26668);
			@@@var_0_object:AddReply((int)540813, (int)42867, (int)42866);
			return 0;
		}
		var_219_bool = var_36_bool == (int)42867;
		if(var_219_bool != 0) {
			var_220_string = "";
			func_865(var_37_cvector, "Disturbance");
			@@@var_0_object:SetMessage((int)540814);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540819, (int)26669, (int)42872);
			@@@var_0_object:AddReply((int)540820, (int)42875, (int)42874);
			return 0;
		}
		var_229_bool = var_36_bool == (int)42875;
		if(var_229_bool != 0) {
			var_230_string = "";
			func_865(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540821);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540822, (int)42868, (int)42876);
			return 0;
		}
		var_236_bool = var_36_bool == (int)26669;
		if(var_236_bool != 0) {
			var_237_string = "";
			func_865(var_37_cvector, "Welldie");
			@@@var_0_object:SetMessage((int)525301);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525302, (int)42868, (int)26670);
			@@@var_0_object:AddReply((int)540826, (int)42882, (int)42881);
			return 0;
		}
		var_246_bool = var_36_bool == (int)42882;
		if(var_246_bool != 0) {
			var_247_string = "";
			func_865(var_37_cvector, "Welldie");
			@@@var_0_object:SetMessage((int)540827);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540828, (int)42879, (int)42883);
			return 0;
		}
		var_253_bool = var_36_bool == (int)42868;
		if(var_253_bool != 0) {
			var_254_string = "";
			func_865(var_37_cvector, "Disturbance");
			@@@var_0_object:SetMessage((int)540815);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540816, (int)42870, (int)42869);
			@@@var_0_object:AddReply((int)540823, (int)42879, (int)42878);
			return 0;
		}
		var_263_bool = var_36_bool == (int)42879;
		if(var_263_bool != 0) {
			var_264_string = "";
			func_865(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540824);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540825, (int)42870, (int)42880);
			return 0;
		}
		var_270_bool = var_36_bool == (int)42870;
		if(var_270_bool != 0) {
			var_271_string = "";
			func_865(var_37_cvector, "Pain");
			@@@var_0_object:SetMessage((int)540817);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540818, (int)26671, (int)42871);
			return 0;
		}
		var_277_bool = var_36_bool == (int)26671;
		if(var_277_bool != 0) {
			var_278_string = "";
			func_865(var_37_cvector, "Pain");
			@@@var_0_object:SetMessage((int)525303);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525304, (int)-1, (int)26672);
			@@@var_0_object:AddReply((int)540829, (int)42887, (int)42886);
			return 0;
		}
		var_287_bool = var_36_bool == (int)42887;
		if(var_287_bool != 0) {
			var_288_string = "";
			func_865(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540830);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529184, (int)-1, (int)30634);
			return 0;
		}
		var_3_string = true;
		var_293_bool = 0;
		func_3510(var_293_bool);
		if(var_293_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x378";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3412();
		var_41_bool = var_36_bool == (int)26854;
		if(var_41_bool != 0) {
			var_42_string = "";
			func_1455(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525498);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525499, (int)-1, (int)26855);
			@@@var_0_object:AddReply((int)526256, (int)-1, (int)27530);
			return 0;
		}
		var_3_string = true;
		var_66_bool = 0;
		func_3510(var_66_bool);
		if(var_66_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x5c6";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3412();
		var_41_bool = var_37_cvector == (int)27231;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_3590();
			var_99_object = Obj(); var_100_object = Obj();
			var_99_object = var_1_object;
			var_100_object = var_0_object;
			func_3672();
		}
		var_104_bool = var_37_cvector == (int)44834;
		if(var_104_bool != 0) {
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_3590();
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_3672();
		}
		var_110_bool = var_36_bool == (int)27228;
		if(var_110_bool != 0) {
			var_111_bool = 0; var_112_object = Obj();
			var_112_object = var_1_object;
			func_3781(var_112_object);
			if(var_111_bool != 0) {
				var_119_object = Obj(); var_120_object = Obj();
				var_119_object = var_1_object;
				var_120_object = var_0_object;
				func_3616();
				var_123_object = Obj(); var_124_object = Obj();
				var_123_object = var_1_object;
				var_124_object = var_0_object;
				func_3622();
				var_127_string = "";
				func_1693(var_37_cvector, "Autizm");
				@@@var_0_object:SetMessage((int)525944);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)542433, (int)44818, (int)44817);
				@@@var_0_object:AddReply((int)542438, (int)44824, (int)44822);
				return 0;
			}
			var_151_string = "";
			func_1693(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525948);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525949, (int)-1, (int)27233);
			@@@var_0_object:AddReply((int)529092, (int)-1, (int)30537);
			return 0;
		}
		var_160_bool = var_36_bool == (int)44824;
		if(var_160_bool != 0) {
			var_161_string = "";
			func_1693(var_37_cvector, "Disturbance");
			@@@var_0_object:SetMessage((int)542439);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542440, (int)44818, (int)44825);
			return 0;
		}
		var_167_bool = var_36_bool == (int)44818;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_1693(var_37_cvector, "Pain");
			@@@var_0_object:SetMessage((int)542434);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542435, (int)44820, (int)44819);
			@@@var_0_object:AddReply((int)542437, (int)44820, (int)44821);
			return 0;
		}
		var_177_bool = var_36_bool == (int)44820;
		if(var_177_bool != 0) {
			var_178_string = "";
			func_1693(var_37_cvector, "Pain");
			@@@var_0_object:SetMessage((int)542436);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529090, (int)30536, (int)30535);
			@@@var_0_object:AddReply((int)542441, (int)30536, (int)44826);
			return 0;
		}
		var_187_bool = var_36_bool == (int)30536;
		if(var_187_bool != 0) {
			var_188_string = "";
			func_1693(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529091);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525945, (int)27230, (int)27229);
			@@@var_0_object:AddReply((int)542442, (int)44831, (int)44830);
			return 0;
		}
		var_197_bool = var_36_bool == (int)44831;
		if(var_197_bool != 0) {
			var_198_string = "";
			func_1693(var_37_cvector, "Disturbance");
			@@@var_0_object:SetMessage((int)542443);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542444, (int)27230, (int)44832);
			return 0;
		}
		var_204_bool = var_36_bool == (int)27230;
		if(var_204_bool != 0) {
			var_205_string = "";
			func_1693(var_37_cvector, "Welldie");
			@@@var_0_object:SetMessage((int)525946);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529093, (int)30539, (int)30538);
			return 0;
		}
		var_211_bool = var_36_bool == (int)30539;
		if(var_211_bool != 0) {
			var_212_string = "";
			func_1693(var_37_cvector, "Disturbance");
			@@@var_0_object:SetMessage((int)529094);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525947, (int)-1, (int)27231);
			@@@var_0_object:AddReply((int)542445, (int)-1, (int)44834);
			return 0;
		}
		var_3_string = true;
		var_220_bool = 0;
		func_3510(var_220_bool);
		if(var_220_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x6b4";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3412();
		var_41_bool = var_37_cvector == (int)30213;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_3640();
			var_99_object = Obj(); var_100_object = Obj();
			var_99_object = var_1_object;
			var_100_object = var_0_object;
			func_3672();
		}
		var_104_bool = var_37_cvector == (int)44908;
		if(var_104_bool != 0) {
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_3640();
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_3672();
		}
		var_110_bool = var_36_bool == (int)30215;
		if(var_110_bool != 0) {
			var_111_bool = 0; var_112_object = Obj();
			var_112_object = var_1_object;
			func_3793(var_112_object);
			if(var_111_bool != 0) {
				var_119_object = Obj(); var_120_object = Obj();
				var_119_object = var_1_object;
				var_120_object = var_0_object;
				func_3628();
				var_123_object = Obj(); var_124_object = Obj();
				var_123_object = var_1_object;
				var_124_object = var_0_object;
				func_3634();
				var_127_string = "";
				func_2138(var_37_cvector, "Disturbance");
				@@@var_0_object:SetMessage((int)528802);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)526757, (int)30208, (int)28034);
				@@@var_0_object:AddReply((int)528803, (int)30208, (int)30216);
				return 0;
			}
			var_151_string = "";
			func_2138(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526758);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526759, (int)-1, (int)28036);
			@@@var_0_object:AddReply((int)528801, (int)-1, (int)30214);
			return 0;
		}
		var_160_bool = var_36_bool == (int)30208;
		if(var_160_bool != 0) {
			var_161_string = "";
			func_2138(var_37_cvector, "Disturbance");
			@@@var_0_object:SetMessage((int)528795);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528796, (int)30210, (int)30209);
			@@@var_0_object:AddReply((int)542079, (int)44899, (int)44372);
			return 0;
		}
		var_170_bool = var_36_bool == (int)44899;
		if(var_170_bool != 0) {
			var_171_string = "";
			func_2138(var_37_cvector, "Pain");
			@@@var_0_object:SetMessage((int)542509);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542510, (int)44902, (int)44900);
			@@@var_0_object:AddReply((int)542511, (int)44902, (int)44901);
			return 0;
		}
		var_180_bool = var_36_bool == (int)44902;
		if(var_180_bool != 0) {
			var_181_string = "";
			func_2138(var_37_cvector, "Autizm");
			@@@var_0_object:SetMessage((int)542512);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542513, (int)30210, (int)44904);
			@@@var_0_object:AddReply((int)542514, (int)-1, (int)44905);
			return 0;
		}
		var_190_bool = var_36_bool == (int)30210;
		if(var_190_bool != 0) {
			var_191_string = "";
			func_2138(var_37_cvector, "Welldie");
			@@@var_0_object:SetMessage((int)528797);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528798, (int)30212, (int)30211);
			@@@var_0_object:AddReply((int)542515, (int)44907, (int)44906);
			return 0;
		}
		var_200_bool = var_36_bool == (int)44907;
		if(var_200_bool != 0) {
			var_201_string = "";
			func_2138(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542516);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542517, (int)-1, (int)44908);
			return 0;
		}
		var_207_bool = var_36_bool == (int)30212;
		if(var_207_bool != 0) {
			var_208_string = "";
			func_2138(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528799);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528800, (int)-1, (int)30213);
			return 0;
		}
		var_3_string = true;
		var_213_bool = 0;
		func_3510(var_213_bool);
		if(var_213_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x871";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3412();
		var_41_bool = var_36_bool == (int)36960;
		if(var_41_bool != 0) {
			var_42_string = "";
			func_2535(var_37_cvector, "Neutral");
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
			func_2535(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535286);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535287, (int)36964, (int)36963);
			@@@var_0_object:AddReply((int)535291, (int)-1, (int)36967);
			return 0;
		}
		var_80_bool = var_36_bool == (int)36964;
		if(var_80_bool != 0) {
			var_81_string = "";
			func_2535(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535288);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535289, (int)-1, (int)36965);
			@@@var_0_object:AddReply((int)535290, (int)-1, (int)36966);
			return 0;
		}
		var_3_string = true;
		var_89_bool = 0;
		func_3510(var_89_bool);
		if(var_89_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x9fe";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_cvector)
{
	if((int)1 != 0) {
		func_3412();
		var_41_bool = var_36_int == (int)42548;
		if(var_41_bool != 0) {
			var_42_string = "";
			func_2789(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540539);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540540, (int)-1, (int)42549);
			@@@var_0_object:AddReply((int)540799, (int)-1, (int)42848);
			return 0;
		}
		var_3_string = true;
		var_66_bool = 0;
		func_3510(var_66_bool);
		if(var_66_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xafc";
	
}


task_14_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_int)
{
	var_38_bool = var_36_int == (int)10;
	if(var_38_bool != 0) {
		func_2922();
		var_40_bool = 0;
		var_40_bool = 0;
		var_41_bool = 0;
		func_3136(var_41_bool);
		if(var_41_bool != 0) {
			var_44_bool = 0;
			func_2891(var_44_bool);
			if(var_44_bool != 0) {
				var_40_bool = 1;
			}
		}
		if(var_40_bool != 0) {
			var_61_bool = 0;
			func_2871(var_61_bool);
			if(var_61_bool != 0) {
				var_80_bool = 0; var_81_object = Obj();
				func_3419(Obj());
				var_82_object = var_81_object;
				func_3286(var_80_bool, var_81_object);
			}
		} else {
			func_2886(var_36_int);
			func_2913();
		}
	}
	return 0;
	
}


task_14_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_3104();
	func_2922();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_14_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	StopGroup0();
	func_2922();
	var_37_string = "";
	func_3366("Neutral");
	func_2913();
	return 0;
}


task_14_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_bool)
{
	var_37_bool = var_36_bool;
	if(var_37_bool != 0) {
		func_2913();
	} else {
		var_43_string = "";
		func_3366("Neutral");
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
		func_3104();
		var_40_bool = 0; var_41_object = Obj();
		var_36_object = var_41_object;
		func_3127(var_40_bool, var_41_object);
		EventEnable(0);
		var_54_object = Obj();
		var_36_object = var_54_object;
		func_3991(var_54_object);
		var_767_string = "";
		func_3366("Neutral");
		func_2922();
		func_2913();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_2857(var_35_cvector);
	return 0;
}


func_3584()
{
	SetVariable("ook2Laska1", (int)1);
	return 0;
}


func_0(var_0_object, var_289_int, var_290_object)
{
	var_292_object = Obj(); var_293_bool = 0; var_294_int = 0; var_295_bool = 0; var_296_object = Obj(); var_297_bool = 0; var_298_int = 0; var_299_bool = 0;
	var_0_object = var_290_object;
	var_300_bool = 0; var_301_object = Obj(); var_302_float = 0;
	var_290_object = var_301_object;
	func_3141(var_300_bool, var_301_object, (float)70.0);
	var_303_bool = var_300_bool == 0; //@nz
	if(var_303_bool != 0) {
		var_289_int = -2;
		return 8;
	}
	CreateDialog(var_296_object);
	var_304_int = 0;
	func_3504(var_304_int);
	@@var_296_object:SetNPCName(var_304_int);
	var_305_int = 0;
	func_3502(var_305_int);
	@@var_296_object:SetNPCDescription(var_305_int);
	var_306_string = "";
	func_3506(var_306_string);
	@@var_296_object:SetPhoto(var_306_string);
	var_307_string = "";
	func_3508(var_307_string);
	@@var_296_object:SetPhoto2(var_307_string);
	var_308_int = 0;
	func_3974(var_308_int);
	@@var_296_object:SetPlayerName(var_308_int);
	IsOverrideActive(var_297_bool);
	var_309_bool = var_297_bool;
	if(var_309_bool != 0) {
		var_289_int = -2;
		return 8;
	}
	DoDialog(var_296_object);
	var_310_bool = 0; var_311_object = Obj();
	func_3419(Obj());
	var_312_object = var_311_object;
	func_3228(var_310_bool, var_311_object);
	var_313_object = Obj(); var_314_object = Obj();
	var_290_object = var_313_object;
	var_296_object = var_314_object;
	TaskCall(1);
	func_81(var_315_object, var_316_object, var_317_string, var_318_bool, var_313_object, var_314_object);
	TaskReturn();
	@@var_296_object:IsDialogEnd(var_299_bool);
	
Label_63:
	var_380_bool = var_299_bool == 0; //@nz
	if(var_380_bool != 0) {
		sync();
		@@var_296_object:IsDialogEnd(var_299_bool);
		goto Label_63;
	}
	var_290_object = Obj();
	func_3210();
	StopDialog(var_296_object);
	@@var_296_object:GetReturnValue((int)-1);
	var_298_int = var_289_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3844()
{
	var_83_object = Obj(); var_84_object = Obj();
	CreateDiaryEntry(var_84_object, (int)406, (int)2, (int)526024);
	var_88_bool = 0; var_89_object = Obj(); var_90_int = 0;
	var_84_object = var_89_object;
	func_3896(var_88_bool, var_89_object, (int)405);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3590()
{
	var_44_object = Obj(); var_45_object = Obj();
	func_3924(Obj());
	var_46_object = var_45_object;
	var_57_float = 0;
	func_3458(var_57_float);
	@@var_45_object:AddMark("k5q03LaskaGotoAlbinos", "pt_k5q03_albinos_path12", (int)0, (int)526026, var_57_float);
	func_3831();
	func_3844();
	var_91_object = Obj(); var_92_string = "";
	func_3440(var_91_object, "quest_k5_03");
	return 2;
}
EMIT "Stack[-1] = 0";


func_3857()
{
	var_60_object = Obj(); var_61_object = Obj();
	CreateDiaryEntry(var_61_object, (int)748, (int)2, (int)539627);
	var_65_bool = 0; var_66_object = Obj(); var_67_int = 0;
	var_61_object = var_66_object;
	func_3896(var_65_bool, var_66_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3102(var_74_bool)
{
	var_74_bool = 1;
	return 0;
}


func_3870()
{
	var_83_object = Obj(); var_84_object = Obj();
	CreateDiaryEntry(var_84_object, (int)749, (int)2, (int)539628);
	var_88_bool = 0; var_89_object = Obj(); var_90_int = 0;
	var_84_object = var_89_object;
	func_3896(var_88_bool, var_89_object, (int)748);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3616()
{
	SetVariable("ook5Laska1", (int)1);
	return 0;
}


func_3104()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1316(var_0_object, var_59_int, var_60_object)
{
	var_62_object = Obj(); var_63_bool = 0; var_64_int = 0; var_65_bool = 0; var_66_object = Obj(); var_67_bool = 0; var_68_int = 0; var_69_bool = 0;
	var_0_object = var_60_object;
	var_70_bool = 0; var_71_object = Obj(); var_72_float = 0;
	var_60_object = var_71_object;
	func_3141(var_70_bool, var_71_object, (float)70.0);
	var_117_bool = var_70_bool == 0; //@nz
	if(var_117_bool != 0) {
		var_59_int = -2;
		return 8;
	}
	CreateDialog(var_66_object);
	var_118_int = 0;
	func_3504(var_118_int);
	@@var_66_object:SetNPCName(var_118_int);
	var_119_int = 0;
	func_3502(var_119_int);
	@@var_66_object:SetNPCDescription(var_119_int);
	var_120_string = "";
	func_3506(var_120_string);
	@@var_66_object:SetPhoto(var_120_string);
	var_121_string = "";
	func_3508(var_121_string);
	@@var_66_object:SetPhoto2(var_121_string);
	var_122_int = 0;
	func_3974(var_122_int);
	@@var_66_object:SetPlayerName(var_122_int);
	IsOverrideActive(var_67_bool);
	var_130_bool = var_67_bool;
	if(var_130_bool != 0) {
		var_59_int = -2;
		return 8;
	}
	DoDialog(var_66_object);
	var_131_bool = 0; var_132_object = Obj();
	func_3419(Obj());
	var_133_object = var_132_object;
	func_3228(var_131_bool, var_132_object);
	var_226_object = Obj(); var_227_object = Obj();
	var_60_object = var_226_object;
	var_66_object = var_227_object;
	TaskCall(5);
	func_1397(var_228_object, var_229_object, var_230_string, var_231_bool, var_226_object, var_227_object);
	TaskReturn();
	@@var_66_object:IsDialogEnd(var_69_bool);
	
Label_1379:
	var_275_bool = var_69_bool == 0; //@nz
	if(var_275_bool != 0) {
		sync();
		@@var_66_object:IsDialogEnd(var_69_bool);
		goto Label_1379;
	}
	var_60_object = Obj();
	func_3210();
	StopDialog(var_66_object);
	@@var_66_object:GetReturnValue((int)-1);
	var_68_int = var_59_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3109(var_51_float, var_52_object)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0);
	GetPosition(var_56_cvector);
	@@var_52_object:GetPosition(var_57_cvector);
	var_58_cvector = var_57_cvector - var_56_cvector;
	var_51_float = var_58_cvector | var_58_cvector;
	return 6;
}


func_3622()
{
	SetVariable("k5LaskaVisit", (int)1);
	return 0;
}


func_3366(var_259_string)
{
	var_260_bool = 0; var_261_float = 0; var_262_float = 0; var_263_bool = 0; var_264_float = 0; var_265_float = 0;
	lshHasAnimation(var_263_bool, var_259_string);
	var_266_bool = var_263_bool;
	if(var_266_bool != 0) {
		lshGetAnimTimes(var_259_string, var_264_float, var_265_float);
		lshPlayAnimation(var_264_float, var_265_float, (bool)0);
	} else {
		var_269_int = "Can't find lsh animation : " + var_259_string;
		Trace(var_269_int);
	}
	return 6;
	
}


func_2857(var_0_object)
{
	var_36_bool = 0;
	func_3136(var_36_bool);
	var_39_bool = var_36_bool == 0; //@nz
	if(var_39_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_2866:
	func_3033();
	goto Label_2866;
}
EMIT "Return(); Pop(0)";


func_3883(var_74_object)
{
	var_75_object = Obj(); var_76_object = Obj();
	GetDiaryRoot(var_76_object);
	var_77_bool = var_76_object == 0; //@nz
	if(var_77_bool != 0) {
		Trace("Can't retrieve diary root");
		var_74_object = 0;
		return 2;
	}
	var_76_object = var_74_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3628()
{
	SetVariable("k6LaskaVisit", (int)1);
	return 0;
}


func_3117(var_44_bool, var_45_cvector)
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


func_3634()
{
	SetVariable("ook6Laska1", (int)1);
	return 0;
}


func_3382(var_237_string, var_238_bool)
{
	var_241_bool = 0; var_242_float = 0; var_243_float = 0; var_244_bool = 0; var_245_float = 0; var_246_float = 0;
	lshHasAnimation(var_244_bool, var_237_string);
	var_247_bool = var_244_bool;
	if(var_247_bool != 0) {
		lshGetAnimTimes(var_237_string, var_245_float, var_246_float);
		lshPlayAnimation(var_245_float, var_246_float, var_238_bool);
	} else {
		var_249_int = "Can't find lsh animation : " + var_237_string;
		Trace(var_249_int);
	}
	return 6;
	
}


func_3127(var_40_bool, var_41_object)
{
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	@@var_41_object:GetPosition(var_43_cvector);
	var_44_bool = 0; var_45_cvector = CVector(0,0,0);
	var_43_cvector = var_45_cvector;
	func_3117(var_44_bool, var_45_cvector);
	var_44_bool = var_40_bool;
	return 2;
}


func_3640()
{
	var_44_object = Obj(); var_45_object = Obj();
	func_3924(Obj());
	var_46_object = var_45_object;
	var_57_float = 0;
	func_3458(var_57_float);
	@@var_45_object:AddMark("k6q03LaskaGotoAlbinos", "pt_k6q03_albinos_path9", (int)0, (int)511153, var_57_float);
	func_3857();
	func_3870();
	var_91_object = Obj(); var_92_string = "";
	func_3440(var_91_object, "quest_k6_03");
	return 2;
}
EMIT "Stack[-1] = 0";


func_2871(var_61_bool)
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
	func_3127(var_66_bool, var_67_object);
	var_66_bool = var_61_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3896(var_65_bool, var_66_object, var_67_int)
{
	var_68_object = Obj(); var_69_object = Obj(); var_70_int = 0; var_71_object = Obj(); var_72_object = Obj(); var_73_int = 0;
	func_3883(Obj());
	var_74_object = var_71_object;
	@@var_71_object:Find(var_67_int, var_72_object);
	var_79_bool = var_72_object == 0; //@nz
	if(var_79_bool != 0) {
		var_81_int = "Can't find diary parent with id: " + var_67_int;
		Trace(var_81_int);
		var_65_bool = 0;
		return 6;
	}
	@@var_72_object:AddChild(var_66_object);
	SendWorldWndMessage((int)7);
	@@var_66_object:GetCategory(var_73_int);
	SetDiarySection(var_73_int);
	var_65_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1600(var_0_object, var_1_object, var_2_object, var_3_string, var_516_object, var_517_object)
{
	var_0_object = var_517_object;
	var_1_object = var_516_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_523_bool = 0; var_524_object = Obj();
		var_524_object = var_1_object;
		func_3781(var_524_object);
		if(var_523_bool != 0) {
			var_529_object = Obj(); var_530_object = Obj();
			var_529_object = var_1_object;
			var_530_object = var_0_object;
			func_3616();
			var_533_object = Obj(); var_534_object = Obj();
			var_533_object = var_1_object;
			var_534_object = var_0_object;
			func_3622();
			var_537_string = "";
			func_1693(var_517_object, "Autizm");
			@@@var_0_object:SetMessage((int)525944);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542433, (int)44818, (int)44817);
			@@@var_0_object:AddReply((int)542438, (int)44824, (int)44822);
		} else {
				var_560_string = "";
				func_1693(var_517_object, "Neutral");
				@@@var_0_object:SetMessage((int)525948);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)525949, (int)-1, (int)27233);
				@@@var_0_object:AddReply((int)529092, (int)-1, (int)30537);
				goto Label_1663;
		}
	}
Label_1663:
	var_552_bool = 0;
	func_3510(var_552_bool);
	if(var_552_bool != 0) {

	Label_1667:
		lshWaitForAnimEnd();
		var_553_string = var_3_string;
		if(var_553_string != 0) {
		} else {
			var_554_string = "";
			var_554_string = var_2_object;
			func_3366(var_554_string);
			goto Label_1667;
	}
		PlayAnimation("all", "idle");

	Label_1682:
		WaitForAnimEnd();
		var_557_string = var_3_string;
		if(var_557_string != 0) {
			goto Label_1692;
		}
		PlayAnimation("all", "idle");
		goto Label_1682;

	}
	goto Label_1692;
	
Label_1692:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x644";


func_3136(var_36_bool)
{
	var_37_bool = 0; var_38_bool = 0;
	IsLoaded(var_38_bool);
	var_38_bool = var_36_bool;
	return 2;
}


func_3141(var_70_bool, var_71_object, var_72_float)
{
	var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_bool = 0; var_81_bool = 0; var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_bool = 0; var_90_bool = 0;
	@@var_71_object:GetPosition(var_83_cvector);
	@@var_71_object:GetEyesHeight(var_82_float);
	var_91_float = GetByIndex(var_83_cvector, 1);
	var_91_float = var_91_float + var_82_float;
	SetByIndex(var_83_cvector, 1) = var_91_float;
	GetPosition(var_84_cvector);
	GetEyesHeight(var_82_float);
	var_92_float = GetByIndex(var_84_cvector, 1);
	var_92_float = var_92_float + var_82_float;
	SetByIndex(var_84_cvector, 1) = var_92_float;
	var_85_cvector = var_83_cvector - var_84_cvector;
	var_93_float = GetByIndex(var_85_cvector, 1);
	SetByIndex(var_85_cvector, 1) = (float)0;
	var_94_int = var_85_cvector | var_85_cvector;
	var_95_float = sqrt(var_94_int);
	var_85_cvector = var_85_cvector / var_95_float;
	var_86_cvector = -var_85_cvector;
	var_96_float = var_85_cvector * var_72_float;
	var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0);
	var_98_cvector = var_86_cvector ^ CVector(0.0, 1.0, 0.0);
	func_3425(var_97_cvector, var_98_cvector);
	var_106_float = var_97_cvector * (int)25;
	var_107_int = var_96_float + var_106_float;
	var_87_cvector = var_107_int - CVector(0.0, 10.0, 0.0);
	var_88_cvector = var_84_cvector + var_87_cvector;
	IsOverrideActive(var_89_bool);
	var_109_bool = var_89_bool;
	if(var_109_bool != 0) {
		var_70_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_88_cvector, var_86_cvector, (bool)1);
	var_111_float = GetByIndex(var_87_cvector, 0);
	var_112_float = GetByIndex(var_87_cvector, 2);
	Rotate(var_111_float, var_112_float);
	var_113_bool = 0;
	func_3510(var_113_bool);
	if(var_113_bool != 0) {
	} else {
		HasAnimationTrack(var_90_bool, "head");
		var_115_bool = var_90_bool;
		if(var_115_bool == 0) goto Label_3204;
		LookAsyncCamera("head");
	}
Label_3204:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_70_bool = 1;
	return 18;
	
}


func_3397(var_165_bool, var_166_string)
{
	var_167_bool = 0; var_168_bool = 0;
	var_169_bool = 0;
	func_3510(var_169_bool);
	if(var_169_bool != 0) {
		lshHasSpeech(var_168_bool, var_166_string);
		var_170_bool = var_168_bool;
		if(var_170_bool != 0) {
			lshPlaySpeech(var_166_string);
			var_165_bool = 1;
			return 2;
		}
	}
	var_165_bool = 0;
	return 2;
}


func_2886(var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0);
	var_114_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_113_float, var_114_float);
	return 0;
}


func_2891(var_44_bool)
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
	func_3109(var_51_float, var_52_object);
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


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_313_object, var_314_object)
{
	var_0_object = var_314_object;
	var_1_object = var_313_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_320_bool = 0;
		var_320_bool = 0;
		var_321_bool = 0; var_322_object = Obj();
		var_322_object = var_1_object;
		func_3678(var_322_object);
		if(var_321_bool != 0) {
			var_329_bool = 0; var_330_object = Obj();
			var_330_object = var_1_object;
			func_3690(var_330_object);
			var_335_bool = var_329_bool == 0; //@nz
			if(var_335_bool != 0) {
				var_320_bool = 1;
			}
		}
		if(var_320_bool != 0) {
			var_336_object = Obj(); var_337_object = Obj();
			var_336_object = var_1_object;
			var_337_object = var_0_object;
			func_3528();
			var_340_string = "";
			func_193(var_314_object, "Autizm");
			@@@var_0_object:SetMessage((int)524644);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526298, (int)27579, (int)27578);
			@@@var_0_object:AddReply((int)526300, (int)27581, (int)27580);
		} else {
				var_363_string = "";
				func_193(var_314_object, "Neutral");
				@@@var_0_object:SetMessage((int)524648);
				@@@var_0_object:ClearReplies();
				var_365_bool = 0;
				var_365_bool = 0;
				var_366_bool = 0; var_367_object = Obj();
				var_367_object = var_1_object;
				func_3690(var_367_object);
				if(var_366_bool != 0) {
					var_368_bool = 0; var_369_object = Obj();
					var_369_object = var_1_object;
					func_3702(var_369_object);
					if(var_368_bool != 0) {
						var_365_bool = 1;
					}
				}
				if(var_365_bool != 0) {
					@@@var_0_object:AddReply((int)524681, (int)43988, (int)26020);
				}
				@@@var_0_object:AddReply((int)524649, (int)-1, (int)25988);
				goto Label_163;
		}
	}
Label_163:
	var_355_bool = 0;
	func_3510(var_355_bool);
	if(var_355_bool != 0) {

	Label_167:
		lshWaitForAnimEnd();
		var_356_string = var_3_string;
		if(var_356_string != 0) {
		} else {
			var_357_string = "";
			var_357_string = var_2_object;
			func_3366(var_357_string);
			goto Label_167;
	}
		PlayAnimation("all", "idle");

	Label_182:
		WaitForAnimEnd();
		var_360_string = var_3_string;
		if(var_360_string != 0) {
			goto Label_192;
		}
		PlayAnimation("all", "idle");
		goto Label_182;

	}
	goto Label_192;
	
Label_192:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_3666()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_3412()
{
	var_39_bool = 0;
	func_3510(var_39_bool);
	if(var_39_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_3924(var_46_object)
{
	var_47_object = Obj(); var_48_object = Obj(); var_49_object = Obj(); var_50_object = Obj();
	GetMainOutdoorScene(var_49_object);
	var_51_bool = var_49_object == 0; //@ne
	if(var_51_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_50_object = 0;
		var_50_object = var_46_object;
		return 4;
	}
	@@var_49_object:GetMap(var_50_object);
	var_50_object = var_46_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2391(var_0_object, var_652_int, var_653_object)
{
	var_655_object = Obj(); var_656_bool = 0; var_657_int = 0; var_658_bool = 0; var_659_object = Obj(); var_660_bool = 0; var_661_int = 0; var_662_bool = 0;
	var_0_object = var_653_object;
	var_663_bool = 0; var_664_object = Obj(); var_665_float = 0;
	var_653_object = var_664_object;
	func_3141(var_663_bool, var_664_object, (float)70.0);
	var_666_bool = var_663_bool == 0; //@nz
	if(var_666_bool != 0) {
		var_652_int = -2;
		return 8;
	}
	CreateDialog(var_659_object);
	var_667_int = 0;
	func_3504(var_667_int);
	@@var_659_object:SetNPCName(var_667_int);
	var_668_int = 0;
	func_3502(var_668_int);
	@@var_659_object:SetNPCDescription(var_668_int);
	var_669_string = "";
	func_3506(var_669_string);
	@@var_659_object:SetPhoto(var_669_string);
	var_670_string = "";
	func_3508(var_670_string);
	@@var_659_object:SetPhoto2(var_670_string);
	var_671_int = 0;
	func_3974(var_671_int);
	@@var_659_object:SetPlayerName(var_671_int);
	IsOverrideActive(var_660_bool);
	var_672_bool = var_660_bool;
	if(var_672_bool != 0) {
		var_652_int = -2;
		return 8;
	}
	DoDialog(var_659_object);
	var_673_bool = 0; var_674_object = Obj();
	func_3419(Obj());
	var_675_object = var_674_object;
	func_3228(var_673_bool, var_674_object);
	var_676_object = Obj(); var_677_object = Obj();
	var_653_object = var_676_object;
	var_659_object = var_677_object;
	TaskCall(11);
	func_2472(var_678_object, var_679_object, var_680_string, var_681_bool, var_676_object, var_677_object);
	TaskReturn();
	@@var_659_object:IsDialogEnd(var_662_bool);
	
Label_2454:
	var_709_bool = var_662_bool == 0; //@nz
	if(var_709_bool != 0) {
		sync();
		@@var_659_object:IsDialogEnd(var_662_bool);
		goto Label_2454;
	}
	var_653_object = Obj();
	func_3210();
	StopDialog(var_659_object);
	@@var_659_object:GetReturnValue((int)-1);
	var_661_int = var_652_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3672()
{
	TriggerWorld("playsound", "mapmark");
	return 0;
}


func_2138(var_2_object, var_617_string)
{
	var_618_bool = 0;
	func_3510(var_618_bool);
	var_619_bool = var_618_bool == 0; //@nz
	if(var_619_bool != 0) {
		return 0;
	}
	var_620_bool = var_617_string == var_2_object;
	if(var_620_bool != 0) {
		return 0;
	}
	var_621_string = ""; var_622_bool = 0;
	var_617_string = var_621_string;
	var_624_bool = var_617_string == "";
	if(var_624_bool != 0) {
		var_622_bool = 0;
	} else {
		var_622_bool = 1;
	}
	func_3382(var_621_string, var_622_bool);
	var_2_object = var_617_string;
	return 0;
	
}


func_2650(var_0_object, var_711_int, var_712_object)
{
	var_714_object = Obj(); var_715_bool = 0; var_716_int = 0; var_717_bool = 0; var_718_object = Obj(); var_719_bool = 0; var_720_int = 0; var_721_bool = 0;
	var_0_object = var_712_object;
	var_722_bool = 0; var_723_object = Obj(); var_724_float = 0;
	var_712_object = var_723_object;
	func_3141(var_722_bool, var_723_object, (float)70.0);
	var_725_bool = var_722_bool == 0; //@nz
	if(var_725_bool != 0) {
		var_711_int = -2;
		return 8;
	}
	CreateDialog(var_718_object);
	var_726_int = 0;
	func_3504(var_726_int);
	@@var_718_object:SetNPCName(var_726_int);
	var_727_int = 0;
	func_3502(var_727_int);
	@@var_718_object:SetNPCDescription(var_727_int);
	var_728_string = "";
	func_3506(var_728_string);
	@@var_718_object:SetPhoto(var_728_string);
	var_729_string = "";
	func_3508(var_729_string);
	@@var_718_object:SetPhoto2(var_729_string);
	var_730_int = 0;
	func_3974(var_730_int);
	@@var_718_object:SetPlayerName(var_730_int);
	IsOverrideActive(var_719_bool);
	var_731_bool = var_719_bool;
	if(var_731_bool != 0) {
		var_711_int = -2;
		return 8;
	}
	DoDialog(var_718_object);
	var_732_bool = 0; var_733_object = Obj();
	func_3419(Obj());
	var_734_object = var_733_object;
	func_3228(var_732_bool, var_733_object);
	var_735_object = Obj(); var_736_object = Obj();
	var_712_object = var_735_object;
	var_718_object = var_736_object;
	TaskCall(13);
	func_2731(var_737_object, var_738_object, var_739_string, var_740_bool, var_735_object, var_736_object);
	TaskReturn();
	@@var_718_object:IsDialogEnd(var_721_bool);
	
Label_2713:
	var_765_bool = var_721_bool == 0; //@nz
	if(var_765_bool != 0) {
		sync();
		@@var_718_object:IsDialogEnd(var_721_bool);
		goto Label_2713;
	}
	var_712_object = Obj();
	func_3210();
	StopDialog(var_718_object);
	@@var_718_object:GetReturnValue((int)-1);
	var_720_int = var_711_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3419(var_133_object)
{
	var_134_object = Obj(); var_135_object = Obj();
	self(var_135_object);
	var_135_object = var_133_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3678(var_321_bool)
{
	var_323_int = 0; var_324_string = "";
	func_3435(var_323_int, "ook1Laska1");
	var_328_bool = var_323_int == (int)0;
	if(var_328_bool != 0) {
		var_321_bool = 1;
		return 0;
	}
	var_321_bool = 0;
	return 0;
}


func_865(var_2_object, var_415_string)
{
	var_416_bool = 0;
	func_3510(var_416_bool);
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
	func_3382(var_419_string, var_420_bool);
	var_2_object = var_415_string;
	return 0;
	
}


func_2913()
{
	var_769_float = 0; var_770_float = 0;
	rand(var_770_float, (int)8, (int)16);
	SetTimer((int)10, var_770_float);
	return 2;
}


func_3425(var_97_cvector, var_98_cvector)
{
	var_100_float = 0; var_101_float = 0;
	var_102_int = var_98_cvector | var_98_cvector;
	var_101_float = sqrt(var_102_int);
	var_103_float = 9.999999974752427e-07;
	var_104_bool = var_101_float < var_103_float;
	if(var_104_bool != 0) {
		var_97_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_97_cvector = var_98_cvector / var_101_float;
	return 2;
}


func_3941(var_93_object, var_94_string, var_95_float)
{
	var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_object = Obj(); var_100_bool = 0; var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_object = Obj(); var_104_bool = 0;
	GetMainOutdoorScene(var_103_object);
	var_105_bool = var_103_object == 0; //@ne
	if(var_105_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_103_object:GetLocator(var_94_string, var_104_bool, var_101_cvector, var_102_cvector);
	var_107_bool = var_104_bool == 0; //@nz
	if(var_107_bool != 0) {
		var_109_int = "Warning: outdoor scene locator " + var_94_string;
		var_111_int = var_109_int + " doesnt exist";
		Trace(var_111_int);
	}
	@@var_103_object:GetMap(var_93_object);
	var_112_bool = var_93_object == 0; //@ne
	if(var_112_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_114_float = GetByIndex(var_101_cvector, 0);
	var_115_float = GetByIndex(var_101_cvector, 2);
	@@var_93_object:SetMapParams(var_114_float, var_115_float, var_95_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_3690(var_329_bool)
{
	var_331_int = 0; var_332_string = "";
	func_3435(var_331_int, "k1q01");
	var_334_bool = var_331_int == (int)4;
	if(var_334_bool != 0) {
		var_329_bool = 1;
		return 0;
	}
	var_329_bool = 0;
	return 0;
}


func_2922()
{
	KillTimer((int)10);
	return 0;
}


func_3435(var_323_int, var_324_string)
{
	var_325_int = 0; var_326_int = 0;
	GetVariable(var_324_string, var_326_int);
	var_326_int = var_323_int;
	return 2;
}


func_3440(var_91_object, var_92_string)
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


func_1397(var_0_object, var_1_object, var_2_object, var_3_string, var_226_object, var_227_object)
{
	var_0_object = var_227_object;
	var_1_object = var_226_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_233_string = "";
		func_1455(var_227_object, "Neutral");
		@@@var_0_object:SetMessage((int)525498);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)525499, (int)-1, (int)26855);
		@@@var_0_object:AddReply((int)526256, (int)-1, (int)27530);
		goto Label_1425;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x579";
	}
Label_1425:
	var_257_bool = 0;
	func_3510(var_257_bool);
	if(var_257_bool != 0) {

	Label_1429:
		lshWaitForAnimEnd();
		var_258_string = var_3_string;
		if(var_258_string != 0) {
		} else {
			var_259_string = "";
			var_259_string = var_2_object;
			func_3366(var_259_string);
			goto Label_1429;
	}
		PlayAnimation("all", "idle");

	Label_1444:
		WaitForAnimEnd();
		var_272_string = var_3_string;
		if(var_272_string != 0) {
			goto Label_1454;
		}
		PlayAnimation("all", "idle");
		goto Label_1444;
	}
	goto Label_1454;
	
Label_1454:
	return 0;
	
}


func_3702(var_368_bool)
{
	var_370_int = 0; var_371_string = "";
	func_3435(var_370_int, "ook1Laska2");
	var_373_bool = var_370_int == (int)0;
	if(var_373_bool != 0) {
		var_368_bool = 1;
		return 0;
	}
	var_368_bool = 0;
	return 0;
}


func_3451(var_430_bool, var_431_object, var_432_string)
{
	var_433_int = 0; var_434_bool = 0; var_435_int = 0; var_436_bool = 0;
	GetInvItemByName(var_435_int, var_432_string);
	@@var_431_object:HasItem(var_435_int, var_436_bool);
	var_436_bool = var_430_bool;
	return 4;
}


func_3714(var_443_bool)
{
	var_445_int = 0; var_446_string = "";
	func_3435(var_445_int, "k2q02");
	var_448_bool = var_445_int == (int)1;
	if(var_448_bool != 0) {
		var_443_bool = 1;
		return 0;
	}
	var_443_bool = 0;
	return 0;
}


func_3458(var_57_float)
{
	var_58_float = 0; var_59_float = 0;
	GetGameTime(var_59_float);
	var_59_float = var_57_float;
	return 2;
}


func_3974(var_122_int)
{
	var_123_int = 0; var_124_int = 0;
	GetVariable("branch", var_124_int);
	var_127_bool = var_124_int == (int)0;
	if(var_127_bool != 0) {
		var_122_int = 1;
		return 2;
	EMIT "GOTO 0xf95";
	}
	var_129_bool = var_124_int == (int)1;
	if(var_129_bool != 0) {
		var_122_int = 2;
		return 2;
	}
	var_122_int = 3;
	return 2;
}


func_3463(var_186_int)
{
	var_187_float = 0; var_188_float = 0;
	GetGameTime(var_188_float);
	var_190_int = 0;
	var_190_int = var_188_float / (int)24;
	var_186_int = (int)1 + var_190_int;
	return 2;
}


func_3210()
{
	var_277_bool = 0; var_278_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_280_bool = 0;
	func_3510(var_280_bool);
	if(var_280_bool != 0) {
	} else {
		HasAnimationTrack(var_278_bool, "head");
		var_282_bool = var_278_bool;
		if(var_282_bool == 0) goto Label_3227;
		UnlookAsync("head");
	}
Label_3227:
	return 2;
	
}


func_3726(var_450_bool)
{
	var_452_int = 0; var_453_string = "";
	func_3435(var_452_int, "k2q02");
	var_455_bool = var_452_int == (int)2;
	if(var_455_bool != 0) {
		var_450_bool = 1;
		return 0;
	}
	var_450_bool = 0;
	return 0;
}


func_3472(var_286_bool, var_287_int)
{
	var_288_int = 0;
	func_3463(var_288_int);
	var_286_bool = var_288_int == var_287_int;
	return 0;
}


func_3478(var_60_string, var_61_int)
{
	var_62_string = ""; var_63_string = "";
	var_64_int = var_61_int;
	if(var_64_int != 0) {
		"idle" = "idle" + var_61_int;
	}
	var_63_string = var_60_string;
	return 2;
}


func_3991(var_54_object)
{
	var_55_int = 0; var_56_int = 0;
	GetVariable("mt_laska", var_56_int);
	var_58_bool = var_56_int == 0; //@nz
	if(var_58_bool != 0) {
		var_59_int = 0; var_60_object = Obj();
		var_54_object = var_60_object;
		TaskCall(4);
		func_1316(var_61_object, var_59_int, var_60_object);
		TaskReturn();
		SetVariable("mt_laska", (int)1);
	}
	var_286_bool = 0; var_287_int = 0;
	func_3472(var_286_bool, (int)1);
	if(var_286_bool != 0) {
		var_289_int = 0; var_290_object = Obj();
		var_54_object = var_290_object;
		TaskCall(0);
		func_0(var_291_object, var_289_int, var_290_object);
		TaskReturn();
		return 2;
	}
	var_382_bool = 0; var_383_int = 0;
	func_3472(var_382_bool, (int)2);
	if(var_382_bool != 0) {
		var_384_int = 0; var_385_object = Obj();
		var_54_object = var_385_object;
		TaskCall(2);
		func_665(var_386_object, var_384_int, var_385_object);
		TaskReturn();
		return 2;
	}
	var_490_bool = 0; var_491_int = 0;
	func_3472(var_490_bool, (int)5);
	if(var_490_bool != 0) {
		var_492_int = 0; var_493_object = Obj();
		var_54_object = var_493_object;
		TaskCall(6);
		func_1519(var_494_object, var_492_int, var_493_object);
		TaskReturn();
		return 2;
	}
	var_570_bool = 0; var_571_int = 0;
	func_3472(var_570_bool, (int)6);
	if(var_570_bool != 0) {
		var_572_int = 0; var_573_object = Obj();
		var_54_object = var_573_object;
		TaskCall(8);
		func_1964(var_574_object, var_572_int, var_573_object);
		TaskReturn();
		return 2;
	}
	var_650_bool = 0; var_651_int = 0;
	func_3472(var_650_bool, (int)12);
	if(var_650_bool != 0) {
		var_652_int = 0; var_653_object = Obj();
		var_54_object = var_653_object;
		TaskCall(10);
		func_2391(var_654_object, var_652_int, var_653_object);
		TaskReturn();
		return 2;
	}
	var_711_int = 0; var_712_object = Obj();
	var_54_object = var_712_object;
	TaskCall(12);
	func_2650(var_713_object, var_711_int, var_712_object);
	TaskReturn();
	return 2;
}


func_665(var_0_object, var_384_int, var_385_object)
{
	var_387_object = Obj(); var_388_bool = 0; var_389_int = 0; var_390_bool = 0; var_391_object = Obj(); var_392_bool = 0; var_393_int = 0; var_394_bool = 0;
	var_0_object = var_385_object;
	var_395_bool = 0; var_396_object = Obj(); var_397_float = 0;
	var_385_object = var_396_object;
	func_3141(var_395_bool, var_396_object, (float)70.0);
	var_398_bool = var_395_bool == 0; //@nz
	if(var_398_bool != 0) {
		var_384_int = -2;
		return 8;
	}
	CreateDialog(var_391_object);
	var_399_int = 0;
	func_3504(var_399_int);
	@@var_391_object:SetNPCName(var_399_int);
	var_400_int = 0;
	func_3502(var_400_int);
	@@var_391_object:SetNPCDescription(var_400_int);
	var_401_string = "";
	func_3506(var_401_string);
	@@var_391_object:SetPhoto(var_401_string);
	var_402_string = "";
	func_3508(var_402_string);
	@@var_391_object:SetPhoto2(var_402_string);
	var_403_int = 0;
	func_3974(var_403_int);
	@@var_391_object:SetPlayerName(var_403_int);
	IsOverrideActive(var_392_bool);
	var_404_bool = var_392_bool;
	if(var_404_bool != 0) {
		var_384_int = -2;
		return 8;
	}
	DoDialog(var_391_object);
	var_405_bool = 0; var_406_object = Obj();
	func_3419(Obj());
	var_407_object = var_406_object;
	func_3228(var_405_bool, var_406_object);
	var_408_object = Obj(); var_409_object = Obj();
	var_385_object = var_408_object;
	var_391_object = var_409_object;
	TaskCall(3);
	func_746(var_410_object, var_411_object, var_412_string, var_413_bool, var_408_object, var_409_object);
	TaskReturn();
	@@var_391_object:IsDialogEnd(var_394_bool);
	
Label_728:
	var_488_bool = var_394_bool == 0; //@nz
	if(var_488_bool != 0) {
		sync();
		@@var_391_object:IsDialogEnd(var_394_bool);
		goto Label_728;
	}
	var_385_object = Obj();
	func_3210();
	StopDialog(var_391_object);
	@@var_391_object:GetReturnValue((int)-1);
	var_393_int = var_384_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3738(var_426_bool, var_427_object)
{
	var_428_bool = 0;
	var_428_bool = 0;
	var_429_bool = 0;
	var_429_bool = 0;
	var_430_bool = 0; var_431_object = Obj(); var_432_string = "";
	var_427_object = var_431_object;
	func_3451(var_430_bool, var_431_object, "flower");
	if(var_430_bool != 0) {
		var_437_bool = 0; var_438_object = Obj(); var_439_string = "";
		var_427_object = var_438_object;
		func_3451(var_437_bool, var_438_object, "milk");
		if(var_437_bool != 0) {
			var_429_bool = 1;
		}
	}
	if(var_429_bool != 0) {
		var_440_bool = 0; var_441_object = Obj(); var_442_string = "";
		var_427_object = var_441_object;
		func_3451(var_440_bool, var_441_object, "bread");
		if(var_440_bool != 0) {
			var_428_bool = 1;
		}
	}
	if(var_428_bool != 0) {
		var_426_bool = 1;
		return 0;
	}
	var_426_bool = 0;
	return 0;
}


func_3228(var_131_bool, var_132_object)
{
	var_136_int = 0; var_137_int = 0; var_138_int = 0; var_139_int = 0;
	GetVariable("voice_common", var_138_int);
	var_141_int = var_138_int;
	if(var_141_int != 0) {
		var_142_bool = 0; var_143_object = Obj();
		var_132_object = var_143_object;
		func_3286(var_142_bool, var_143_object);
		var_172_bool = var_142_bool == 0; //@nz
		if(var_172_bool != 0) {
			var_173_bool = 0; var_174_object = Obj();
			var_132_object = var_174_object;
			func_3323(var_173_bool, var_174_object);
			var_208_bool = var_173_bool == 0; //@nz
			if(var_208_bool != 0) {
				var_131_bool = 0;
				return 4;
			}
		}
		irand(var_139_int, (int)2);
		var_210_int = var_139_int;
		if(var_210_int != 0) {
			var_213_int = var_138_int + (int)1;
			var_215_int = var_213_int % (int)3;
			SetVariable("voice_common", var_215_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_218_bool = 0; var_219_object = Obj();
		var_132_object = var_219_object;
		func_3323(var_218_bool, var_219_object);
		var_220_bool = var_218_bool == 0; //@nz
		if(var_220_bool != 0) {
			var_221_bool = 0; var_222_object = Obj();
			var_132_object = var_222_object;
			func_3286(var_221_bool, var_222_object);
			var_223_bool = var_221_bool == 0; //@nz
			if(var_223_bool != 0) {
				var_131_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_3284;
	
Label_3284:
	var_131_bool = 1;
	return 4;
	
}


func_1693(var_2_object, var_537_string)
{
	var_538_bool = 0;
	func_3510(var_538_bool);
	var_539_bool = var_538_bool == 0; //@nz
	if(var_539_bool != 0) {
		return 0;
	}
	var_540_bool = var_537_string == var_2_object;
	if(var_540_bool != 0) {
		return 0;
	}
	var_541_string = ""; var_542_bool = 0;
	var_537_string = var_541_string;
	var_544_bool = var_537_string == "";
	if(var_544_bool != 0) {
		var_542_bool = 0;
	} else {
		var_542_bool = 1;
	}
	func_3382(var_541_string, var_542_bool);
	var_2_object = var_537_string;
	return 0;
	
}


func_3485(var_54_int)
{
	var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_bool = 0;
	var_57_int = 0;
	
Label_3487:
	var_60_string = ""; var_61_int = 0;
	var_57_int = var_61_int;
	func_3478(var_60_string, var_61_int);
	HasAnimation(var_58_bool, "all", var_60_string);
	var_65_bool = var_58_bool == 0; //@nz
	if(var_65_bool != 0) {
	} else {
		var_57_int = var_57_int + (int)1;
		goto Label_3487;
	}
	var_57_int = var_54_int;
	return 4;
	
}


func_2472(var_0_object, var_1_object, var_2_object, var_3_string, var_676_object, var_677_object)
{
	var_0_object = var_677_object;
	var_1_object = var_676_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_683_string = "";
		func_2535(var_677_object, "Neutral");
		@@@var_0_object:SetMessage((int)535284);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535285, (int)36962, (int)36961);
		@@@var_0_object:AddReply((int)535292, (int)-1, (int)36968);
		@@@var_0_object:AddReply((int)535293, (int)-1, (int)36969);
		goto Label_2505;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x9ac";
	}
Label_2505:
	var_701_bool = 0;
	func_3510(var_701_bool);
	if(var_701_bool != 0) {

	Label_2509:
		lshWaitForAnimEnd();
		var_702_string = var_3_string;
		if(var_702_string != 0) {
		} else {
			var_703_string = "";
			var_703_string = var_2_object;
			func_3366(var_703_string);
			goto Label_2509;
	}
		PlayAnimation("all", "idle");

	Label_2524:
		WaitForAnimEnd();
		var_706_string = var_3_string;
		if(var_706_string != 0) {
			goto Label_2534;
		}
		PlayAnimation("all", "idle");
		goto Label_2524;
	}
	goto Label_2534;
	
Label_2534:
	return 0;
	
}


func_2731(var_0_object, var_1_object, var_2_object, var_3_string, var_735_object, var_736_object)
{
	var_0_object = var_736_object;
	var_1_object = var_735_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_742_string = "";
		func_2789(var_736_object, "Neutral");
		@@@var_0_object:SetMessage((int)540539);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540540, (int)-1, (int)42549);
		@@@var_0_object:AddReply((int)540799, (int)-1, (int)42848);
		goto Label_2759;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xaaf";
	}
Label_2759:
	var_757_bool = 0;
	func_3510(var_757_bool);
	if(var_757_bool != 0) {

	Label_2763:
		lshWaitForAnimEnd();
		var_758_string = var_3_string;
		if(var_758_string != 0) {
		} else {
			var_759_string = "";
			var_759_string = var_2_object;
			func_3366(var_759_string);
			goto Label_2763;
	}
		PlayAnimation("all", "idle");

	Label_2778:
		WaitForAnimEnd();
		var_762_string = var_3_string;
		if(var_762_string != 0) {
			goto Label_2788;
		}
		PlayAnimation("all", "idle");
		goto Label_2778;
	}
	goto Label_2788;
	
Label_2788:
	return 0;
	
}


func_1964(var_0_object, var_572_int, var_573_object)
{
	var_575_object = Obj(); var_576_bool = 0; var_577_int = 0; var_578_bool = 0; var_579_object = Obj(); var_580_bool = 0; var_581_int = 0; var_582_bool = 0;
	var_0_object = var_573_object;
	var_583_bool = 0; var_584_object = Obj(); var_585_float = 0;
	var_573_object = var_584_object;
	func_3141(var_583_bool, var_584_object, (float)70.0);
	var_586_bool = var_583_bool == 0; //@nz
	if(var_586_bool != 0) {
		var_572_int = -2;
		return 8;
	}
	CreateDialog(var_579_object);
	var_587_int = 0;
	func_3504(var_587_int);
	@@var_579_object:SetNPCName(var_587_int);
	var_588_int = 0;
	func_3502(var_588_int);
	@@var_579_object:SetNPCDescription(var_588_int);
	var_589_string = "";
	func_3506(var_589_string);
	@@var_579_object:SetPhoto(var_589_string);
	var_590_string = "";
	func_3508(var_590_string);
	@@var_579_object:SetPhoto2(var_590_string);
	var_591_int = 0;
	func_3974(var_591_int);
	@@var_579_object:SetPlayerName(var_591_int);
	IsOverrideActive(var_580_bool);
	var_592_bool = var_580_bool;
	if(var_592_bool != 0) {
		var_572_int = -2;
		return 8;
	}
	DoDialog(var_579_object);
	var_593_bool = 0; var_594_object = Obj();
	func_3419(Obj());
	var_595_object = var_594_object;
	func_3228(var_593_bool, var_594_object);
	var_596_object = Obj(); var_597_object = Obj();
	var_573_object = var_596_object;
	var_579_object = var_597_object;
	TaskCall(9);
	func_2045(var_598_object, var_599_object, var_600_string, var_601_bool, var_596_object, var_597_object);
	TaskReturn();
	@@var_579_object:IsDialogEnd(var_582_bool);
	
Label_2027:
	var_648_bool = var_582_bool == 0; //@nz
	if(var_648_bool != 0) {
		sync();
		@@var_579_object:IsDialogEnd(var_582_bool);
		goto Label_2027;
	}
	var_573_object = Obj();
	func_3210();
	StopDialog(var_579_object);
	@@var_579_object:GetReturnValue((int)-1);
	var_581_int = var_572_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3502(var_119_int)
{
	var_119_int = 515542;
	return 0;
}


func_1455(var_2_object, var_233_string)
{
	var_234_bool = 0;
	func_3510(var_234_bool);
	var_235_bool = var_234_bool == 0; //@nz
	if(var_235_bool != 0) {
		return 0;
	}
	var_236_bool = var_233_string == var_2_object;
	if(var_236_bool != 0) {
		return 0;
	}
	var_237_string = ""; var_238_bool = 0;
	var_233_string = var_237_string;
	var_240_bool = var_233_string == "";
	if(var_240_bool != 0) {
		var_238_bool = 0;
	} else {
		var_238_bool = 1;
	}
	func_3382(var_237_string, var_238_bool);
	var_2_object = var_233_string;
	return 0;
	
}


func_3504(var_118_int)
{
	var_118_int = 502867;
	return 0;
}


func_3506(var_120_string)
{
	var_120_string = "ui/NPC_Laska.png";
	return 0;
}


func_3508(var_121_string)
{
	var_121_string = "ui/NPC_Laska_b.png";
	return 0;
}


func_3510(var_113_bool)
{
	var_113_bool = 1;
	return 0;
}


func_3512(var_92_object)
{
	var_93_object = Obj(); var_94_string = ""; var_95_float = 0;
	func_3924(Obj());
	var_96_object = var_93_object;
	func_3941(var_93_object, "pt_map_burah_home", (float)2);
	var_116_object = Obj();
	func_3924(var_116_object);
	@@var_92_object:ShowMap(var_116_object);
	return 0;
}


func_3769(var_468_bool)
{
	var_470_int = 0; var_471_string = "";
	func_3435(var_470_int, "ook2Laska1");
	var_473_bool = var_470_int == (int)0;
	if(var_473_bool != 0) {
		var_468_bool = 1;
		return 0;
	}
	var_468_bool = 0;
	return 0;
}


func_193(var_2_object, var_340_string)
{
	var_341_bool = 0;
	func_3510(var_341_bool);
	var_342_bool = var_341_bool == 0; //@nz
	if(var_342_bool != 0) {
		return 0;
	}
	var_343_bool = var_340_string == var_2_object;
	if(var_343_bool != 0) {
		return 0;
	}
	var_344_string = ""; var_345_bool = 0;
	var_340_string = var_344_string;
	var_347_bool = var_340_string == "";
	if(var_347_bool != 0) {
		var_345_bool = 0;
	} else {
		var_345_bool = 1;
	}
	func_3382(var_344_string, var_345_bool);
	var_2_object = var_340_string;
	return 0;
	
}


func_3781(var_523_bool)
{
	var_525_int = 0; var_526_string = "";
	func_3435(var_525_int, "ook5Laska1");
	var_528_bool = var_525_int == (int)0;
	if(var_528_bool != 0) {
		var_523_bool = 1;
		return 0;
	}
	var_523_bool = 0;
	return 0;
}


func_3528()
{
	SetVariable("ook1Laska1", (int)1);
	return 0;
}


func_3534()
{
	SetVariable("ook1Laska2", (int)1);
	return 0;
}


func_3793(var_603_bool)
{
	var_605_int = 0; var_606_string = "";
	func_3435(var_605_int, "ook6Laska1");
	var_608_bool = var_605_int == (int)0;
	if(var_608_bool != 0) {
		var_603_bool = 1;
		return 0;
	}
	var_603_bool = 0;
	return 0;
}


func_3540()
{
	var_50_object = Obj(); var_51_object = Obj();
	SetVariable("k1q01LaskaGotoBurah", (int)1);
	func_3924(Obj());
	var_54_object = var_51_object;
	var_65_float = 0;
	func_3458(var_65_float);
	@@var_51_object:AddMark("k1q01LaskaGotoBurah", "pt_map_burah_home", (int)1, (int)524731, var_65_float);
	func_3805();
	return 2;
}
EMIT "Stack[-1] = 0";


func_3286(var_142_bool, var_143_object)
{
	var_144_string = ""; var_145_int = 0; var_146_bool = 0; var_147_int = 0; var_148_string = ""; var_149_string = ""; var_150_int = 0; var_151_bool = 0; var_152_int = 0; var_153_string = "";
	var_149_string = "c";
	var_150_int = 0;
	
Label_3289:
	if((int)1 != 0) {
		var_156_int = var_150_int + (int)1;
		var_157_int = var_149_string + var_156_int;
		@@var_143_object:HasProperty(var_157_int, var_151_bool);
		var_158_bool = var_151_bool == 0; //@nz
		if(var_158_bool != 0) {
		} else {
			var_150_int = var_150_int + (int)1;
			goto Label_3289;
		}
	}
	var_159_bool = var_150_int == 0; //@nz
	if(var_159_bool != 0) {
		var_142_bool = 0;
		return 10;
	}
	var_152_int = 0;
	var_161_bool = var_150_int > (int)1;
	if(var_161_bool != 0) {
		irand(var_152_int, var_150_int);
	}
	var_163_int = var_152_int + (int)1;
	var_164_int = var_149_string + var_163_int;
	@@var_143_object:GetProperty(var_164_int, var_153_string);
	var_165_bool = 0; var_166_string = "";
	var_153_string = var_166_string;
	func_3397(var_165_bool, var_166_string);
	var_165_bool = var_142_bool;
	return 10;
	
}


func_3033()
{
	var_40_int = 0; var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_int = 0; var_45_bool = 0; var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0;
	WaitForAnimEnd();
	var_52_bool = 0;
	func_3136(var_52_bool);
	var_53_bool = var_52_bool == 0; //@nz
	if(var_53_bool != 0) {
		return 12;
	}
	func_3485((int)0);
	var_54_int = var_46_int;
	var_47_int = 0;
	
Label_3047:
	var_67_bool = 0;
	var_67_bool = 0;
	var_69_bool = var_47_int < (int)5;
	if(var_69_bool != 0) {
		var_70_bool = 0;
		func_3136(var_70_bool);
		if(var_70_bool != 0) {
			var_67_bool = 1;
		}
	}
	if(var_67_bool != 0) {
		var_71_bool = var_46_int == 0; //@nz
		if(var_71_bool != 0) {
			Sleep((int)3, var_48_bool);
			var_73_bool = var_48_bool == 0; //@nz
			if(var_73_bool != 0) {
			} else {
		} else {
				irand(var_49_int, var_46_int);
				irand(var_50_int, (int)5);
				var_79_bool = var_50_int != (int)0;
				if(var_79_bool != 0) {
					var_49_int = 0;
				}
				var_81_string = ""; var_82_int = 0;
				var_49_int = var_82_int;
				func_3478(var_81_string, var_82_int);
				PlayAnimation("all", var_81_string);
				WaitForAnimEnd(var_51_bool);
				var_83_bool = var_51_bool == 0; //@nz
				if(var_83_bool == 0) goto Label_3088;
				goto Label_3099;
		}
		Label_3088:
			var_74_bool = 0;
			func_3102(var_74_bool);
			var_75_bool = var_74_bool == 0; //@nz
			if(var_75_bool != 0) {
				goto Label_3099;
			}
			ResetAAS();
			var_47_int = var_47_int + (int)1;
			goto Label_3047;

		}
	}
Label_3099:
	ResetAAS();
	return 12;
	
}


func_3805()
{
	var_68_object = Obj(); var_69_object = Obj();
	CreateDiaryEntry(var_69_object, (int)776, (int)1, (int)541530);
	var_73_bool = 0; var_74_object = Obj(); var_75_int = 0;
	var_69_object = var_74_object;
	func_3896(var_73_bool, var_74_object, (int)318);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2789(var_2_object, var_742_string)
{
	var_743_bool = 0;
	func_3510(var_743_bool);
	var_744_bool = var_743_bool == 0; //@nz
	if(var_744_bool != 0) {
		return 0;
	}
	var_745_bool = var_742_string == var_2_object;
	if(var_745_bool != 0) {
		return 0;
	}
	var_746_string = ""; var_747_bool = 0;
	var_742_string = var_746_string;
	var_749_bool = var_742_string == "";
	if(var_749_bool != 0) {
		var_747_bool = 0;
	} else {
		var_747_bool = 1;
	}
	func_3382(var_746_string, var_747_bool);
	var_2_object = var_742_string;
	return 0;
	
}


func_2535(var_2_object, var_683_string)
{
	var_684_bool = 0;
	func_3510(var_684_bool);
	var_685_bool = var_684_bool == 0; //@nz
	if(var_685_bool != 0) {
		return 0;
	}
	var_686_bool = var_683_string == var_2_object;
	if(var_686_bool != 0) {
		return 0;
	}
	var_687_string = ""; var_688_bool = 0;
	var_683_string = var_687_string;
	var_690_bool = var_683_string == "";
	if(var_690_bool != 0) {
		var_688_bool = 0;
	} else {
		var_688_bool = 1;
	}
	func_3382(var_687_string, var_688_bool);
	var_2_object = var_683_string;
	return 0;
	
}


func_746(var_0_object, var_1_object, var_2_object, var_3_string, var_408_object, var_409_object)
{
	var_0_object = var_409_object;
	var_1_object = var_408_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_415_string = "";
		func_865(var_409_object, "Neutral");
		@@@var_0_object:SetMessage((int)525297);
		@@@var_0_object:ClearReplies();
		var_424_bool = 0;
		var_424_bool = 1;
		var_425_bool = 0;
		var_425_bool = 0;
		var_426_bool = 0; var_427_object = Obj();
		var_427_object = var_1_object;
		func_3738(var_426_bool, var_427_object);
		if(var_426_bool != 0) {
			var_443_bool = 0; var_444_object = Obj();
			var_444_object = var_1_object;
			func_3714(var_444_object);
			if(var_443_bool != 0) {
				var_425_bool = 1;
			}
		}
		if(var_425_bool != 1) {
			var_449_bool = 0;
			var_449_bool = 0;
			var_450_bool = 0; var_451_object = Obj();
			var_451_object = var_1_object;
			func_3726(var_451_object);
			if(var_450_bool != 0) {
				var_456_bool = 0; var_457_object = Obj();
				var_457_object = var_1_object;
				func_3738(var_456_bool, var_457_object);
				if(var_456_bool != 0) {
					var_449_bool = 1;
				}
			}
			if(var_449_bool != 1) {
				var_424_bool = 0;
			}
		}
		if(var_424_bool != 0) {
			@@@var_0_object:AddReply((int)525298, (int)26667, (int)26666);
		}
		var_461_bool = 0;
		var_461_bool = 0;
		var_462_bool = 0;
		var_462_bool = 0;
		var_463_bool = 0; var_464_object = Obj();
		var_464_object = var_1_object;
		func_3714(var_464_object);
		if(var_463_bool != 0) {
			var_465_bool = 0; var_466_object = Obj();
			var_466_object = var_1_object;
			func_3738(var_465_bool, var_466_object);
			var_467_bool = var_465_bool == 0; //@nz
			if(var_467_bool != 0) {
				var_462_bool = 1;
			}
		}
		if(var_462_bool != 0) {
			var_468_bool = 0; var_469_object = Obj();
			var_469_object = var_1_object;
			func_3769(var_469_object);
			if(var_468_bool != 0) {
				var_461_bool = 1;
			}
		}
		if(var_461_bool != 0) {
			@@@var_0_object:AddReply((int)525310, (int)26679, (int)26678);
		}
		@@@var_0_object:AddReply((int)525305, (int)-1, (int)26673);
		goto Label_835;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2ee";
	}
Label_835:
	var_480_bool = 0;
	func_3510(var_480_bool);
	if(var_480_bool != 0) {

	Label_839:
		lshWaitForAnimEnd();
		var_481_string = var_3_string;
		if(var_481_string != 0) {
		} else {
			var_482_string = "";
			var_482_string = var_2_object;
			func_3366(var_482_string);
			goto Label_839;
	}
		PlayAnimation("all", "idle");

	Label_854:
		WaitForAnimEnd();
		var_485_string = var_3_string;
		if(var_485_string != 0) {
			goto Label_864;
		}
		PlayAnimation("all", "idle");
		goto Label_854;
	}
	goto Label_864;
	
Label_864:
	return 0;
	
}


func_3818()
{
	var_48_object = Obj(); var_49_object = Obj();
	CreateDiaryEntry(var_49_object, (int)473, (int)2, (int)527789);
	var_53_bool = 0; var_54_object = Obj(); var_55_int = 0;
	var_49_object = var_54_object;
	func_3896(var_53_bool, var_54_object, (int)470);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3563(var_42_object)
{
	var_44_int = 0; var_45_int = 0;
	SetVariable("k2q02", (int)3);
	func_3818();
	@@var_42_object:RemoveItemByType(var_45_int, "milk", (int)1);
	@@var_42_object:RemoveItemByType(var_45_int, "bread", (int)1);
	@@var_42_object:RemoveItemByType(var_45_int, "flower", (int)1);
	return 2;
}


func_1519(var_0_object, var_492_int, var_493_object)
{
	var_495_object = Obj(); var_496_bool = 0; var_497_int = 0; var_498_bool = 0; var_499_object = Obj(); var_500_bool = 0; var_501_int = 0; var_502_bool = 0;
	var_0_object = var_493_object;
	var_503_bool = 0; var_504_object = Obj(); var_505_float = 0;
	var_493_object = var_504_object;
	func_3141(var_503_bool, var_504_object, (float)70.0);
	var_506_bool = var_503_bool == 0; //@nz
	if(var_506_bool != 0) {
		var_492_int = -2;
		return 8;
	}
	CreateDialog(var_499_object);
	var_507_int = 0;
	func_3504(var_507_int);
	@@var_499_object:SetNPCName(var_507_int);
	var_508_int = 0;
	func_3502(var_508_int);
	@@var_499_object:SetNPCDescription(var_508_int);
	var_509_string = "";
	func_3506(var_509_string);
	@@var_499_object:SetPhoto(var_509_string);
	var_510_string = "";
	func_3508(var_510_string);
	@@var_499_object:SetPhoto2(var_510_string);
	var_511_int = 0;
	func_3974(var_511_int);
	@@var_499_object:SetPlayerName(var_511_int);
	IsOverrideActive(var_500_bool);
	var_512_bool = var_500_bool;
	if(var_512_bool != 0) {
		var_492_int = -2;
		return 8;
	}
	DoDialog(var_499_object);
	var_513_bool = 0; var_514_object = Obj();
	func_3419(Obj());
	var_515_object = var_514_object;
	func_3228(var_513_bool, var_514_object);
	var_516_object = Obj(); var_517_object = Obj();
	var_493_object = var_516_object;
	var_499_object = var_517_object;
	TaskCall(7);
	func_1600(var_518_object, var_519_object, var_520_string, var_521_bool, var_516_object, var_517_object);
	TaskReturn();
	@@var_499_object:IsDialogEnd(var_502_bool);
	
Label_1582:
	var_568_bool = var_502_bool == 0; //@nz
	if(var_568_bool != 0) {
		sync();
		@@var_499_object:IsDialogEnd(var_502_bool);
		goto Label_1582;
	}
	var_493_object = Obj();
	func_3210();
	StopDialog(var_499_object);
	@@var_499_object:GetReturnValue((int)-1);
	var_501_int = var_492_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3831()
{
	var_60_object = Obj(); var_61_object = Obj();
	CreateDiaryEntry(var_61_object, (int)405, (int)2, (int)526023);
	var_65_bool = 0; var_66_object = Obj(); var_67_int = 0;
	var_61_object = var_66_object;
	func_3896(var_65_bool, var_66_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3323(var_173_bool, var_174_object)
{
	var_175_string = ""; var_176_int = 0; var_177_bool = 0; var_178_int = 0; var_179_string = ""; var_180_string = ""; var_181_int = 0; var_182_bool = 0; var_183_int = 0; var_184_string = "";
	var_186_int = 0;
	func_3463(var_186_int);
	var_192_int = "d" + var_186_int;
	var_180_string = var_192_int + "m";
	var_181_int = 0;
	
Label_3332:
	if((int)1 != 0) {
		var_196_int = var_181_int + (int)1;
		var_197_int = var_180_string + var_196_int;
		@@var_174_object:HasProperty(var_197_int, var_182_bool);
		var_198_bool = var_182_bool == 0; //@nz
		if(var_198_bool != 0) {
		} else {
			var_181_int = var_181_int + (int)1;
			goto Label_3332;
		}
	}
	var_199_bool = var_181_int == 0; //@nz
	if(var_199_bool != 0) {
		var_173_bool = 0;
		return 10;
	}
	var_183_int = 0;
	var_201_bool = var_181_int > (int)1;
	if(var_201_bool != 0) {
		irand(var_183_int, var_181_int);
	}
	var_203_int = var_183_int + (int)1;
	var_204_int = var_180_string + var_203_int;
	@@var_174_object:GetProperty(var_204_int, var_184_string);
	var_205_bool = 0; var_206_string = "";
	var_184_string = var_206_string;
	func_3397(var_205_bool, var_206_string);
	var_205_bool = var_173_bool;
	return 10;
	
}


func_2045(var_0_object, var_1_object, var_2_object, var_3_string, var_596_object, var_597_object)
{
	var_0_object = var_597_object;
	var_1_object = var_596_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_603_bool = 0; var_604_object = Obj();
		var_604_object = var_1_object;
		func_3793(var_604_object);
		if(var_603_bool != 0) {
			var_609_object = Obj(); var_610_object = Obj();
			var_609_object = var_1_object;
			var_610_object = var_0_object;
			func_3628();
			var_613_object = Obj(); var_614_object = Obj();
			var_613_object = var_1_object;
			var_614_object = var_0_object;
			func_3634();
			var_617_string = "";
			func_2138(var_597_object, "Disturbance");
			@@@var_0_object:SetMessage((int)528802);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526757, (int)30208, (int)28034);
			@@@var_0_object:AddReply((int)528803, (int)30208, (int)30216);
		} else {
				var_640_string = "";
				func_2138(var_597_object, "Neutral");
				@@@var_0_object:SetMessage((int)526758);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)526759, (int)-1, (int)28036);
				@@@var_0_object:AddReply((int)528801, (int)-1, (int)30214);
				goto Label_2108;
		}
	}
Label_2108:
	var_632_bool = 0;
	func_3510(var_632_bool);
	if(var_632_bool != 0) {

	Label_2112:
		lshWaitForAnimEnd();
		var_633_string = var_3_string;
		if(var_633_string != 0) {
		} else {
			var_634_string = "";
			var_634_string = var_2_object;
			func_3366(var_634_string);
			goto Label_2112;
	}
		PlayAnimation("all", "idle");

	Label_2127:
		WaitForAnimEnd();
		var_637_string = var_3_string;
		if(var_637_string != 0) {
			goto Label_2137;
		}
		PlayAnimation("all", "idle");
		goto Label_2127;

	}
	goto Label_2137;
	
Label_2137:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x801";


