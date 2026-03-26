// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetMainOutdoorScene/1,AddBlankActor/4,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,GetInvItemProperty/3,CreateInvItem/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Adoration|W:Fear|W:Dream|W:Rage|W:player|A:GetPosition|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|W:Can't find lsh animation : |W:.bin|W:Door |W: not found|W:locked|A:add|W:money|W:Money|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:ui/NPC_Anna.png|W:ui/NPC_Anna_b.png|W:d1q02|W:KnowKapella|W:beta_pills 5 is given|W:beta_pills|W:money1000 is given|W:playsound|W:giveitem|W:gold_ring is given|W:gold_ring|W:pt_map_station|A:ShowMap|W:d1q01AnnaMapMarkMladVlad|W:pt_map_mladvlad|A:AddMark|W:silver_ring is given|W:silver_ring|W:bracelet is given|W:bracelet|W:beads is given|W:beads|W:d5AnnaVisit|W:KnowShabnak|W:burah_serum is given|W:burah_serum|W:ood9Anna1|W:d9q04|W:Gun_danko is given|W:Gun_danko|W:ood5Anna2|W:d9AnnaVisit|W:ood2Anna1|W:d2q01|W:d2q01AnnaGotoKapella|W:pt_map_kapella|W:pt_map_laska|W:d1q02AnnaGotoLaska|W:quest_d1_02|W:init_storojka|W:ood4Anna1|W:d4q02AnnaGivesMedcine|W:d4q02JuliaGivesMedcine|W:d4q02LaraGivesMedcine|W:d4q02|W:d4q02BirdmaskNearHome|W:pt_d4q02_birdmask|W:quest_d4_02|W:ood4Anna2|W:d5q02|W:d5q02AnnaGotoGorbun|W:pt_map_gorbun|W:d5q02AnnaGotoGorbunSelf|W:pt_map_anna|W:quest_d5_02|W:place_gorbun|W:d5q02AnnaGotoKabak|W:pt_map_andrei|W:ood1Anna1|W:ood1Anna2|W:d5q01|W:place_girl|W:ood1Anna3|W:ood1Anna4|W:ood6Anna1|W:ood6Anna2|W:d6q01KnowKillerIsKlara|W:d6q01KillerIsKlara|W:pt_map_alexandr|W:quest_d6_01|W:saburov_klara|W:KnowAnna|W:anna blood is given|W:d6q01_anna_blood|W:ood6Anna3|W:beta_pills is given|W:gamma_pills is given|W:gamma_pills|W:delta_pills is given|W:delta_pills|W:ood5Anna1|W:lc_House6_05@door1|W:d1q01|W:d1q01FirstGeorgVisit|W:d9q02|W:d9q03|W:KnowSgustok|W:d5q02KnowNudeIsDead|W:d6q01|W:microscope_d6q01_anna_blood|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x1481
// @RUN_TASK: 18
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa6 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x23b vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x554 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x92d vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb4d vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xdf7 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1138 vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1359 vars=int,int
// @TASK_16: vars=object params=2
// @TASK_17: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1457 vars=int,int
// @TASK_18: vars=cvector params=0
// @EVENT_7: op=0x14cd vars=int
// @EVENT_6: op=0x14f3 vars=
// @EVENT_5: op=0x1502 vars=
// @EVENT_45: op=0x150f vars=bool
// @EVENT_0: op=0x151b vars=object
// @PE: 0x51,0x90,0xa6,0x1a3,0x225,0x23b,0x45a,0x53e,0x554,0x8cf,0x917,0x92d,0xabe,0xb37,0xb4d,0xd63,0xde1,0xdf7,0x1093,0x1122,0x1138,0x1304,0x1343,0x1359,0x1407,0x1441,0x1457,0x14cd,0x14f3,0x150f,0x174b,0x1773,0x177c,0x1782,0x178d,0x1797,0x179d,0x17a8,0x17c8,0x17d3,0x17de,0x17e9,0x17ef,0x17f5,0x1800,0x1806,0x1812,0x181d,0x1826,0x182c,0x1832,0x1837,0x1854,0x1880,0x1890,0x1896,0x18e0,0x1929,0x192f,0x1935,0x194e,0x1954,0x195a,0x1960,0x1989,0x198f,0x199d,0x19a3,0x19a9,0x19b4,0x19bf,0x19ca,0x19d0,0x19e0,0x19e7,0x19f3,0x19ff,0x1a0b,0x1a17,0x1a23,0x1a2f,0x1a3b,0x1a47,0x1a53,0x1a5f,0x1a6b,0x1a77,0x1a83,0x1a8f,0x1a9b,0x1aa7,0x1ab3,0x1abf,0x1acb,0x1ad7,0x1ae3,0x1aef,0x1afb,0x1b07,0x1b13,0x1b1f,0x1b2b,0x1b37,0x1b43,0x1b4f,0x1b5b,0x1b67,0x1b73,0x1b7f,0x1b8b,0x1c9f

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_5818();
		var_51_bool = var_46_bool == (int)260;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_6537();
			var_56_string = "";
			func_144(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500221);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532814, (int)34298, (int)34291);
			@@@var_0_object:AddReply((int)532815, (int)34294, (int)34292);
			return 0;
		}
		var_81_bool = var_46_bool == (int)34294;
		if(var_81_bool != 0) {
			var_82_string = "";
			func_144(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532817);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532818, (int)34302, (int)34295);
			@@@var_0_object:AddReply((int)532819, (int)34297, (int)34296);
			return 0;
		}
		var_91_bool = var_46_bool == (int)34297;
		if(var_91_bool != 0) {
			var_92_string = "";
			func_144(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532820);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532827, (int)34293, (int)34307);
			@@@var_0_object:AddReply((int)532828, (int)-1, (int)34308);
			return 0;
		}
		var_101_bool = var_46_bool == (int)34298;
		if(var_101_bool != 0) {
			var_102_string = "";
			func_144(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532821);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532822, (int)34302, (int)34299);
			@@@var_0_object:AddReply((int)532823, (int)34302, (int)34300);
			@@@var_0_object:AddReply((int)532824, (int)34302, (int)34301);
			return 0;
		}
		var_114_bool = var_46_bool == (int)34302;
		if(var_114_bool != 0) {
			var_115_string = "";
			func_144(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532825);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532826, (int)34293, (int)34306);
			@@@var_0_object:AddReply((int)532829, (int)-1, (int)34310);
			return 0;
		}
		var_124_bool = var_46_bool == (int)34293;
		if(var_124_bool != 0) {
			var_125_string = "";
			func_144(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532816);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532831, (int)-1, (int)34312);
			@@@var_0_object:AddReply((int)532832, (int)-1, (int)34313);
			@@@var_0_object:AddReply((int)532830, (int)-1, (int)34311);
			return 0;
		}
		var_3_string = true;
		var_136_bool = 0;
		func_6001(var_136_bool);
		if(var_136_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa7";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_5818();
		var_51_bool = var_47_cvector == (int)4268;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_6490();
		}
		var_57_bool = var_47_cvector == (int)4269;
		if(var_57_bool != 0) {
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_object;
			func_6490();
		}
		var_61_bool = var_47_cvector == (int)4266;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_6490();
		}
		var_65_bool = var_47_cvector == (int)13914;
		if(var_65_bool != 0) {
			var_66_object = Obj(); var_67_object = Obj();
			var_66_object = var_1_object;
			var_67_object = var_0_object;
			func_6496();
		}
		var_71_bool = var_47_cvector == (int)13920;
		if(var_71_bool != 0) {
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_6502();
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_object;
			var_128_object = var_0_object;
			func_6543(var_128_object);
			var_159_object = Obj(); var_160_object = Obj();
			var_159_object = var_1_object;
			var_160_object = var_0_object;
			func_6557();
		}
		var_164_bool = var_47_cvector == (int)40699;
		if(var_164_bool != 0) {
			var_165_object = Obj(); var_166_object = Obj();
			var_165_object = var_1_object;
			var_166_object = var_0_object;
			func_6502();
			var_167_object = Obj(); var_168_object = Obj();
			var_167_object = var_1_object;
			var_168_object = var_0_object;
			func_6543(var_168_object);
			var_169_object = Obj(); var_170_object = Obj();
			var_169_object = var_1_object;
			var_170_object = var_0_object;
			func_6557();
		}
		var_172_bool = var_47_cvector == (int)40698;
		if(var_172_bool != 0) {
			var_173_object = Obj(); var_174_object = Obj();
			var_173_object = var_1_object;
			var_174_object = var_0_object;
			func_6502();
		}
		var_176_bool = var_47_cvector == (int)14992;
		if(var_176_bool != 0) {
			var_177_object = Obj(); var_178_object = Obj();
			var_177_object = var_1_object;
			var_178_object = var_0_object;
			func_6563();
		}
		var_182_bool = var_47_cvector == (int)40682;
		if(var_182_bool != 0) {
			var_183_object = Obj(); var_184_object = Obj();
			var_183_object = var_1_object;
			var_184_object = var_0_object;
			func_6194();
		}
		var_194_bool = var_47_cvector == (int)40686;
		if(var_194_bool != 0) {
			var_195_object = Obj(); var_196_object = Obj();
			var_195_object = var_1_object;
			var_196_object = var_0_object;
			func_6194();
		}
		var_198_bool = var_46_bool == (int)13912;
		if(var_198_bool != 0) {
			var_199_string = "";
			func_549(var_47_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)512719);
			@@@var_0_object:ClearReplies();
			var_217_bool = 0;
			var_217_bool = 0;
			var_218_bool = 0; var_219_object = Obj();
			var_219_object = var_1_object;
			func_6967(var_219_object);
			if(var_218_bool != 0) {
				var_224_bool = 0; var_225_object = Obj();
				var_225_object = var_1_object;
				func_6931(var_225_object);
				if(var_224_bool != 0) {
					var_217_bool = 1;
				}
			}
			if(var_217_bool != 0) {
				@@@var_0_object:AddReply((int)512720, (int)4261, (int)13913);
			}
			var_233_bool = 0;
			var_233_bool = 0;
			var_234_bool = 0; var_235_object = Obj();
			var_235_object = var_1_object;
			func_6943(var_235_object);
			if(var_234_bool != 0) {
				var_240_bool = 0; var_241_object = Obj();
				var_241_object = var_1_object;
				func_6979(var_241_object);
				if(var_240_bool != 0) {
					var_233_bool = 1;
				}
			}
			if(var_233_bool != 0) {
				@@@var_0_object:AddReply((int)512721, (int)13915, (int)13914);
			}
			var_249_bool = 0;
			var_249_bool = 0;
			var_250_bool = 0;
			var_250_bool = 0;
			var_251_bool = 0;
			var_251_bool = 0;
			var_252_bool = 0; var_253_object = Obj();
			var_253_object = var_1_object;
			func_7003(var_253_object);
			if(var_252_bool != 0) {
				var_258_bool = 0; var_259_object = Obj();
				var_259_object = var_1_object;
				func_7015(var_259_object);
				var_264_bool = var_258_bool == 0; //@nz
				if(var_264_bool != 0) {
					var_251_bool = 1;
				}
			}
			if(var_251_bool != 0) {
				var_265_bool = 0; var_266_object = Obj();
				var_266_object = var_1_object;
				func_7027(var_266_object);
				var_271_bool = var_265_bool == 0; //@nz
				if(var_271_bool != 0) {
					var_250_bool = 1;
				}
			}
			if(var_250_bool != 0) {
				var_272_bool = 0; var_273_object = Obj();
				var_273_object = var_1_object;
				func_7039(var_273_object);
				if(var_272_bool != 0) {
					var_249_bool = 1;
				}
			}
			if(var_249_bool != 0) {
				@@@var_0_object:AddReply((int)513747, (int)14993, (int)14992);
			}
			@@@var_0_object:AddReply((int)512728, (int)-1, (int)13921);
			return 0;
		}
		var_285_bool = var_46_bool == (int)14993;
		if(var_285_bool != 0) {
			var_286_string = "";
			func_549(var_47_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)513748);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538767, (int)40684, (int)40683);
			@@@var_0_object:AddReply((int)513749, (int)40684, (int)14994);
			return 0;
		}
		var_295_bool = var_46_bool == (int)40684;
		if(var_295_bool != 0) {
			var_296_string = "";
			func_549(var_47_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)538768);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538766, (int)-1, (int)40682);
			@@@var_0_object:AddReply((int)538769, (int)-1, (int)40686);
			return 0;
		}
		var_305_bool = var_46_bool == (int)13915;
		if(var_305_bool != 0) {
			var_306_string = "";
			func_549(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)512722);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512723, (int)13917, (int)13916);
			@@@var_0_object:AddReply((int)538770, (int)40688, (int)40687);
			return 0;
		}
		var_315_bool = var_46_bool == (int)40688;
		if(var_315_bool != 0) {
			var_316_string = "";
			func_549(var_47_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)538771);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538772, (int)13919, (int)40689);
			return 0;
		}
		var_322_bool = var_46_bool == (int)13917;
		if(var_322_bool != 0) {
			var_323_string = "";
			func_549(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)512724);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512725, (int)13919, (int)13918);
			@@@var_0_object:AddReply((int)538776, (int)40695, (int)40694);
			return 0;
		}
		var_332_bool = var_46_bool == (int)40695;
		if(var_332_bool != 0) {
			var_333_string = "";
			func_549(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538777);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538778, (int)13919, (int)40696);
			@@@var_0_object:AddReply((int)538779, (int)-1, (int)40698);
			return 0;
		}
		var_342_bool = var_46_bool == (int)13919;
		if(var_342_bool != 0) {
			var_343_string = "";
			func_549(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)512726);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538773, (int)40691, (int)40690);
			@@@var_0_object:AddReply((int)538775, (int)40691, (int)40692);
			return 0;
		}
		var_352_bool = var_46_bool == (int)40691;
		if(var_352_bool != 0) {
			var_353_string = "";
			func_549(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538774);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512727, (int)-1, (int)13920);
			@@@var_0_object:AddReply((int)538780, (int)-1, (int)40699);
			return 0;
		}
		var_362_bool = var_46_bool == (int)4261;
		if(var_362_bool != 0) {
			var_363_string = "";
			func_549(var_47_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)503913);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503914, (int)-1, (int)4262);
			@@@var_0_object:AddReply((int)503915, (int)4264, (int)4263);
			return 0;
		}
		var_372_bool = var_46_bool == (int)4264;
		if(var_372_bool != 0) {
			var_373_string = "";
			func_549(var_47_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)503916);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503917, (int)4267, (int)4265);
			@@@var_0_object:AddReply((int)503918, (int)-1, (int)4266);
			return 0;
		}
		var_382_bool = var_46_bool == (int)4267;
		if(var_382_bool != 0) {
			var_383_string = "";
			func_549(var_47_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)503919);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503920, (int)-1, (int)4268);
			@@@var_0_object:AddReply((int)503921, (int)-1, (int)4269);
			return 0;
		}
		var_3_string = true;
		var_391_bool = 0;
		func_6001(var_391_bool);
		if(var_391_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x23c";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_5818();
		var_51_bool = var_47_cvector == (int)5450;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_6244();
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_6228(var_102_object);
		}
		var_128_bool = var_47_cvector == (int)5451;
		if(var_128_bool != 0) {
			var_129_object = Obj(); var_130_object = Obj();
			var_129_object = var_1_object;
			var_130_object = var_0_object;
			func_6003();
		}
		var_142_bool = var_47_cvector == (int)5488;
		if(var_142_bool != 0) {
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_object;
			func_6029(var_144_object);
			var_164_object = Obj(); var_165_object = Obj();
			var_164_object = var_1_object;
			var_165_object = var_0_object;
			func_6110(var_165_object);
			var_185_object = Obj(); var_186_object = Obj();
			var_185_object = var_1_object;
			var_186_object = var_0_object;
			func_6099(var_186_object);
			var_191_object = Obj(); var_192_object = Obj();
			var_191_object = var_1_object;
			var_192_object = var_0_object;
			func_6045(var_192_object);
			var_197_object = Obj(); var_198_object = Obj();
			var_197_object = var_1_object;
			var_198_object = var_0_object;
			func_6088(var_198_object);
			var_203_object = Obj(); var_204_object = Obj();
			var_203_object = var_1_object;
			var_204_object = var_0_object;
			func_6039();
		}
		var_208_bool = var_47_cvector == (int)9529;
		if(var_208_bool != 0) {
			var_209_object = Obj(); var_210_object = Obj();
			var_209_object = var_1_object;
			var_210_object = var_0_object;
			func_6244();
			var_211_object = Obj(); var_212_object = Obj();
			var_211_object = var_1_object;
			var_212_object = var_0_object;
			func_6228(var_212_object);
		}
		var_214_bool = var_47_cvector == (int)7252;
		if(var_214_bool != 0) {
			var_215_object = Obj(); var_216_object = Obj();
			var_215_object = var_1_object;
			var_216_object = var_0_object;
			func_6478();
		}
		var_220_bool = var_47_cvector == (int)33353;
		if(var_220_bool != 0) {
			var_221_object = Obj(); var_222_object = Obj();
			var_221_object = var_1_object;
			var_222_object = var_0_object;
			func_6484();
		}
		var_226_bool = var_47_cvector == (int)33355;
		if(var_226_bool != 0) {
			var_227_object = Obj(); var_228_object = Obj();
			var_227_object = var_1_object;
			var_228_object = var_0_object;
			func_6072();
			var_237_object = Obj(); var_238_object = Obj();
			var_237_object = var_1_object;
			var_238_object = var_0_object;
			func_6056(var_238_object);
		}
		var_245_bool = var_46_bool == (int)5427;
		if(var_245_bool != 0) {
			var_246_bool = 0;
			var_246_bool = 0;
			var_247_bool = 0; var_248_object = Obj();
			var_248_object = var_1_object;
			func_6907(var_248_object);
			if(var_247_bool != 0) {
				var_255_bool = 0; var_256_object = Obj();
				var_256_object = var_1_object;
				func_6655(var_256_object);
				if(var_255_bool != 0) {
					var_246_bool = 1;
				}
			}
			if(var_246_bool != 0) {
				var_261_object = Obj(); var_262_object = Obj();
				var_261_object = var_1_object;
				var_262_object = var_0_object;
				func_6441();
				var_265_string = "";
				func_1342(var_47_cvector, "Fear");
				@@@var_0_object:SetMessage((int)504938);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)504949, (int)5439, (int)5438);
				@@@var_0_object:AddReply((int)504978, (int)5439, (int)5475);
				@@@var_0_object:AddReply((int)504979, (int)5439, (int)5477);
				return 0;
			}
			var_292_bool = 0; var_293_object = Obj();
			var_293_object = var_1_object;
			func_6799(var_293_object);
			if(var_292_bool != 0) {
				var_298_string = "";
				func_1342(var_47_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)504940);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)504981, (int)5480, (int)5479);
				@@@var_0_object:AddReply((int)504985, (int)-1, (int)5483);
				return 0;
			}
			var_306_bool = 0;
			var_306_bool = 0;
			var_307_bool = 0; var_308_object = Obj();
			var_308_object = var_1_object;
			func_6643(var_308_object);
			if(var_307_bool != 0) {
				var_313_bool = 0; var_314_object = Obj();
				var_314_object = var_1_object;
				func_6919(var_314_object);
				if(var_313_bool != 0) {
					var_306_bool = 1;
				}
			}
			if(var_306_bool != 0) {
				var_319_object = Obj(); var_320_object = Obj();
				var_319_object = var_1_object;
				var_320_object = var_0_object;
				func_6447();
				var_323_string = "";
				func_1342(var_47_cvector, "Adoration");
				@@@var_0_object:SetMessage((int)504943);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)504987, (int)5486, (int)5485);
				@@@var_0_object:AddReply((int)533010, (int)34515, (int)34514);
				return 0;
			}
			var_331_string = "";
			func_1342(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506582);
			@@@var_0_object:ClearReplies();
			var_333_bool = 0; var_334_object = Obj();
			var_334_object = var_1_object;
			func_6655(var_334_object);
			if(var_333_bool != 0) {
				@@@var_0_object:AddReply((int)508690, (int)9528, (int)9527);
			}
			var_338_bool = 0;
			var_338_bool = 0;
			var_339_bool = 0;
			var_339_bool = 0;
			var_340_bool = 0; var_341_object = Obj();
			var_341_object = var_1_object;
			func_6955(var_341_object);
			if(var_340_bool != 0) {
				var_346_bool = 0; var_347_object = Obj();
				var_347_object = var_1_object;
				func_6667(var_347_object);
				if(var_346_bool != 0) {
					var_339_bool = 1;
				}
			}
			if(var_339_bool != 0) {
				var_352_bool = 0; var_353_object = Obj();
				var_353_object = var_1_object;
				func_6631(var_353_object);
				var_358_bool = var_352_bool == 0; //@nz
				if(var_358_bool != 0) {
					var_338_bool = 1;
				}
			}
			if(var_338_bool != 0) {
				@@@var_0_object:AddReply((int)506583, (int)5521, (int)7252);
			}
			var_362_bool = 0;
			var_362_bool = 0;
			var_363_bool = 0;
			var_363_bool = 0;
			var_364_bool = 0; var_365_object = Obj();
			var_365_object = var_1_object;
			func_6679(var_365_object);
			if(var_364_bool != 0) {
				var_370_bool = 0; var_371_object = Obj();
				var_371_object = var_1_object;
				func_6643(var_371_object);
				if(var_370_bool != 0) {
					var_363_bool = 1;
				}
			}
			if(var_363_bool != 0) {
				var_372_bool = 0; var_373_object = Obj();
				var_373_object = var_1_object;
				func_6991(var_373_object);
				if(var_372_bool != 0) {
					var_362_bool = 1;
				}
			}
			if(var_362_bool != 0) {
				@@@var_0_object:AddReply((int)531949, (int)33354, (int)33353);
			}
			@@@var_0_object:AddReply((int)507538, (int)-1, (int)8320);
			return 0;
		}
		var_385_bool = var_46_bool == (int)33354;
		if(var_385_bool != 0) {
			var_386_string = "";
			func_1342(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)531950);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532946, (int)34437, (int)34435);
			@@@var_0_object:AddReply((int)532947, (int)34439, (int)34436);
			return 0;
		}
		var_395_bool = var_46_bool == (int)34439;
		if(var_395_bool != 0) {
			var_396_string = "";
			func_1342(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)532949);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532952, (int)34441, (int)34442);
			@@@var_0_object:AddReply((int)532953, (int)34445, (int)34443);
			return 0;
		}
		var_405_bool = var_46_bool == (int)34437;
		if(var_405_bool != 0) {
			var_406_string = "";
			func_1342(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)532948);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532950, (int)34441, (int)34440);
			@@@var_0_object:AddReply((int)532954, (int)34445, (int)34444);
			return 0;
		}
		var_415_bool = var_46_bool == (int)34445;
		if(var_415_bool != 0) {
			var_416_string = "";
			func_1342(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)532955);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532956, (int)-1, (int)34447);
			@@@var_0_object:AddReply((int)532957, (int)-1, (int)34448);
			return 0;
		}
		var_425_bool = var_46_bool == (int)34441;
		if(var_425_bool != 0) {
			var_426_string = "";
			func_1342(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)532951);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532958, (int)34452, (int)34450);
			@@@var_0_object:AddReply((int)532959, (int)-1, (int)34451);
			return 0;
		}
		var_435_bool = var_46_bool == (int)34452;
		if(var_435_bool != 0) {
			var_436_string = "";
			func_1342(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532960);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531951, (int)-1, (int)33355);
			return 0;
		}
		var_442_bool = var_46_bool == (int)5521;
		if(var_442_bool != 0) {
			var_443_string = "";
			func_1342(var_47_cvector, "Dream");
			@@@var_0_object:SetMessage((int)505021);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)505022, (int)5523, (int)5522);
			return 0;
		}
		var_449_bool = var_46_bool == (int)5523;
		if(var_449_bool != 0) {
			var_450_string = "";
			func_1342(var_47_cvector, "Dream");
			@@@var_0_object:SetMessage((int)505023);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)505024, (int)5498, (int)5524);
			@@@var_0_object:AddReply((int)533032, (int)5498, (int)34541);
			return 0;
		}
		var_459_bool = var_46_bool == (int)5498;
		if(var_459_bool != 0) {
			var_460_string = "";
			func_1342(var_47_cvector, "Dream");
			@@@var_0_object:SetMessage((int)504999);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)505000, (int)5500, (int)5499);
			return 0;
		}
		var_466_bool = var_46_bool == (int)5500;
		if(var_466_bool != 0) {
			var_467_string = "";
			func_1342(var_47_cvector, "Dream");
			@@@var_0_object:SetMessage((int)505001);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525224, (int)5525, (int)26591);
			return 0;
		}
		var_473_bool = var_46_bool == (int)5525;
		if(var_473_bool != 0) {
			var_474_string = "";
			func_1342(var_47_cvector, "Dream");
			@@@var_0_object:SetMessage((int)505025);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)505026, (int)-1, (int)5526);
			return 0;
		}
		var_480_bool = var_46_bool == (int)9528;
		if(var_480_bool != 0) {
			var_481_string = "";
			func_1342(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508691);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508692, (int)-1, (int)9529);
			return 0;
		}
		var_487_bool = var_46_bool == (int)34515;
		if(var_487_bool != 0) {
			var_488_string = "";
			func_1342(var_47_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)533011);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533012, (int)-1, (int)34516);
			return 0;
		}
		var_494_bool = var_46_bool == (int)5486;
		if(var_494_bool != 0) {
			var_495_string = "";
			func_1342(var_47_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)504988);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504990, (int)-1, (int)5488);
			return 0;
		}
		var_501_bool = var_46_bool == (int)5480;
		if(var_501_bool != 0) {
			var_502_string = "";
			func_1342(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)504982);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504983, (int)-1, (int)5481);
			return 0;
		}
		var_508_bool = var_46_bool == (int)5439;
		if(var_508_bool != 0) {
			var_509_string = "";
			func_1342(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)504950);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504951, (int)5441, (int)5440);
			@@@var_0_object:AddReply((int)504977, (int)5441, (int)5473);
			return 0;
		}
		var_518_bool = var_46_bool == (int)5441;
		if(var_518_bool != 0) {
			var_519_string = "";
			func_1342(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)504952);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504953, (int)5443, (int)5442);
			@@@var_0_object:AddReply((int)504972, (int)5466, (int)5465);
			return 0;
		}
		var_528_bool = var_46_bool == (int)5466;
		if(var_528_bool != 0) {
			var_529_string = "";
			func_1342(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)504973);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504974, (int)5445, (int)5467);
			@@@var_0_object:AddReply((int)504975, (int)5445, (int)5469);
			return 0;
		}
		var_538_bool = var_46_bool == (int)5443;
		if(var_538_bool != 0) {
			var_539_string = "";
			func_1342(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)504954);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504955, (int)5445, (int)5444);
			@@@var_0_object:AddReply((int)504968, (int)5460, (int)5459);
			return 0;
		}
		var_548_bool = var_46_bool == (int)5460;
		if(var_548_bool != 0) {
			var_549_string = "";
			func_1342(var_47_cvector, "Rage");
			@@@var_0_object:SetMessage((int)504969);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504970, (int)5445, (int)5461);
			@@@var_0_object:AddReply((int)504971, (int)5445, (int)5463);
			return 0;
		}
		var_558_bool = var_46_bool == (int)5445;
		if(var_558_bool != 0) {
			var_559_string = "";
			func_1342(var_47_cvector, "Rage");
			@@@var_0_object:SetMessage((int)504956);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504957, (int)5447, (int)5446);
			@@@var_0_object:AddReply((int)504967, (int)5447, (int)5457);
			return 0;
		}
		var_568_bool = var_46_bool == (int)5447;
		if(var_568_bool != 0) {
			var_569_string = "";
			func_1342(var_47_cvector, "Rage");
			@@@var_0_object:SetMessage((int)504958);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504959, (int)5449, (int)5448);
			@@@var_0_object:AddReply((int)504966, (int)34511, (int)5455);
			return 0;
		}
		var_578_bool = var_46_bool == (int)34511;
		if(var_578_bool != 0) {
			var_579_string = "";
			func_1342(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533008);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533009, (int)5449, (int)34512);
			return 0;
		}
		var_585_bool = var_46_bool == (int)5449;
		if(var_585_bool != 0) {
			var_586_string = "";
			func_1342(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)504960);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504961, (int)-1, (int)5450);
			@@@var_0_object:AddReply((int)504962, (int)-1, (int)5451);
			return 0;
		}
		var_3_string = true;
		var_594_bool = 0;
		func_6001(var_594_bool);
		if(var_594_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x555";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_5818();
		var_51_bool = var_47_cvector == (int)7333;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_6199();
			var_56_object = Obj(); var_57_object = Obj();
			var_56_object = var_1_object;
			var_57_object = var_0_object;
			func_6205();
			var_99_object = Obj(); var_100_object = Obj();
			var_99_object = var_1_object;
			var_100_object = var_0_object;
			func_6272(var_100_object);
		}
		var_126_bool = var_47_cvector == (int)7336;
		if(var_126_bool != 0) {
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_object;
			var_128_object = var_0_object;
			func_6199();
			var_129_object = Obj(); var_130_object = Obj();
			var_129_object = var_1_object;
			var_130_object = var_0_object;
			func_6205();
			var_131_object = Obj(); var_132_object = Obj();
			var_131_object = var_1_object;
			var_132_object = var_0_object;
			func_6272(var_132_object);
		}
		var_134_bool = var_47_cvector == (int)7337;
		if(var_134_bool != 0) {
			var_135_object = Obj(); var_136_object = Obj();
			var_135_object = var_1_object;
			var_136_object = var_0_object;
			func_6199();
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_object;
			func_6205();
			var_139_object = Obj(); var_140_object = Obj();
			var_139_object = var_1_object;
			var_140_object = var_0_object;
			func_6272(var_140_object);
		}
		var_142_bool = var_46_bool == (int)7293;
		if(var_142_bool != 0) {
			var_143_string = "";
			func_2327(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506624);
			@@@var_0_object:ClearReplies();
			var_161_bool = 0;
			var_161_bool = 0;
			var_162_bool = 0; var_163_object = Obj();
			var_163_object = var_1_object;
			func_6763(var_163_object);
			if(var_162_bool != 0) {
				var_170_bool = 0; var_171_object = Obj();
				var_171_object = var_1_object;
				func_6787(var_171_object);
				if(var_170_bool != 0) {
					var_161_bool = 1;
				}
			}
			if(var_161_bool != 0) {
				@@@var_0_object:AddReply((int)507217, (int)7952, (int)7953);
			}
			@@@var_0_object:AddReply((int)506626, (int)-1, (int)7295);
			return 0;
		}
		var_183_bool = var_46_bool == (int)7952;
		if(var_183_bool != 0) {
			var_184_string = "";
			func_2327(var_47_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)507216);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506651, (int)7326, (int)7325);
			@@@var_0_object:AddReply((int)506672, (int)7954, (int)7352);
			return 0;
		}
		var_193_bool = var_46_bool == (int)7954;
		if(var_193_bool != 0) {
			var_194_string = "";
			func_2327(var_47_cvector, "Dream");
			@@@var_0_object:SetMessage((int)507218);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507219, (int)7326, (int)7955);
			return 0;
		}
		var_200_bool = var_46_bool == (int)7326;
		if(var_200_bool != 0) {
			var_201_string = "";
			func_2327(var_47_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)506652);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506653, (int)7328, (int)7327);
			@@@var_0_object:AddReply((int)506668, (int)7347, (int)7346);
			return 0;
		}
		var_210_bool = var_46_bool == (int)7347;
		if(var_210_bool != 0) {
			var_211_object = Obj(); var_212_object = Obj();
			var_211_object = var_1_object;
			var_212_object = var_0_object;
			func_6127();
			var_215_string = "";
			func_2327(var_47_cvector, "Dream");
			@@@var_0_object:SetMessage((int)506669);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506670, (int)7332, (int)7348);
			@@@var_0_object:AddReply((int)506671, (int)7328, (int)7350);
			return 0;
		}
		var_224_bool = var_46_bool == (int)7328;
		if(var_224_bool != 0) {
			var_225_string = "";
			func_2327(var_47_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)506654);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506655, (int)7330, (int)7329);
			@@@var_0_object:AddReply((int)506666, (int)7332, (int)7342);
			@@@var_0_object:AddReply((int)506667, (int)7332, (int)7344);
			return 0;
		}
		var_237_bool = var_46_bool == (int)7330;
		if(var_237_bool != 0) {
			var_238_object = Obj(); var_239_object = Obj();
			var_238_object = var_1_object;
			var_239_object = var_0_object;
			func_6127();
			var_240_string = "";
			func_2327(var_47_cvector, "Dream");
			@@@var_0_object:SetMessage((int)506656);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506657, (int)7332, (int)7331);
			@@@var_0_object:AddReply((int)506664, (int)7332, (int)7338);
			@@@var_0_object:AddReply((int)506665, (int)7332, (int)7340);
			return 0;
		}
		var_252_bool = var_46_bool == (int)7332;
		if(var_252_bool != 0) {
			var_253_object = Obj(); var_254_object = Obj();
			var_253_object = var_1_object;
			var_254_object = var_0_object;
			func_6012();
			var_257_string = "";
			func_2327(var_47_cvector, "Dream");
			@@@var_0_object:SetMessage((int)506658);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506659, (int)-1, (int)7333);
			var_262_bool = 0; var_263_object = Obj();
			var_263_object = var_1_object;
			func_6775(var_263_object);
			var_268_bool = var_262_bool == 0; //@nz
			if(var_268_bool != 0) {
				@@@var_0_object:AddReply((int)506660, (int)7335, (int)7334);
			}
			@@@var_0_object:AddReply((int)506663, (int)-1, (int)7337);
			return 0;
		}
		var_276_bool = var_46_bool == (int)7335;
		if(var_276_bool != 0) {
			var_277_string = "";
			func_2327(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506661);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506662, (int)-1, (int)7336);
			return 0;
		}
		var_3_string = true;
		var_282_bool = 0;
		func_6001(var_282_bool);
		if(var_282_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x92e";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_5818();
		var_51_bool = var_47_cvector == (int)12543;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_6288();
		}
		var_57_bool = var_47_cvector == (int)12557;
		if(var_57_bool != 0) {
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_object;
			func_6288();
			var_60_object = Obj(); var_61_object = Obj();
			var_60_object = var_1_object;
			var_61_object = var_0_object;
			func_6294();
			var_64_object = Obj(); var_65_object = Obj();
			var_64_object = var_1_object;
			var_65_object = var_0_object;
			func_6300(var_65_object);
			var_130_object = Obj(); var_131_object = Obj();
			var_130_object = var_1_object;
			var_131_object = var_0_object;
			func_6569(var_131_object);
			var_154_object = Obj(); var_155_object = Obj();
			var_154_object = var_1_object;
			var_155_object = var_0_object;
			func_6591(var_155_object);
			var_160_object = Obj(); var_161_object = Obj();
			var_160_object = var_1_object;
			var_161_object = var_0_object;
			func_6580(var_161_object);
			var_166_object = Obj(); var_167_object = Obj();
			var_166_object = var_1_object;
			var_167_object = var_0_object;
			func_6039();
		}
		var_171_bool = var_47_cvector == (int)12681;
		if(var_171_bool != 0) {
			var_172_object = Obj(); var_173_object = Obj();
			var_172_object = var_1_object;
			var_173_object = var_0_object;
			func_6294();
			var_174_object = Obj(); var_175_object = Obj();
			var_174_object = var_1_object;
			var_175_object = var_0_object;
			func_6300(var_175_object);
			var_176_object = Obj(); var_177_object = Obj();
			var_176_object = var_1_object;
			var_177_object = var_0_object;
			func_6039();
			var_178_object = Obj(); var_179_object = Obj();
			var_178_object = var_1_object;
			var_179_object = var_0_object;
			func_6569(var_179_object);
			var_180_object = Obj(); var_181_object = Obj();
			var_180_object = var_1_object;
			var_181_object = var_0_object;
			func_6580(var_181_object);
			var_182_object = Obj(); var_183_object = Obj();
			var_182_object = var_1_object;
			var_183_object = var_0_object;
			func_6591(var_183_object);
		}
		var_185_bool = var_47_cvector == (int)13068;
		if(var_185_bool != 0) {
			var_186_object = Obj(); var_187_object = Obj();
			var_186_object = var_1_object;
			var_187_object = var_0_object;
			func_6368();
			var_190_object = Obj(); var_191_object = Obj();
			var_190_object = var_1_object;
			var_191_object = var_0_object;
			func_6088(var_191_object);
			var_196_object = Obj(); var_197_object = Obj();
			var_196_object = var_1_object;
			var_197_object = var_0_object;
			func_6018(var_197_object);
		}
		var_203_bool = var_46_bool == (int)12541;
		if(var_203_bool != 0) {
			var_204_string = "";
			func_2871(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)511344);
			@@@var_0_object:ClearReplies();
			var_222_bool = 0;
			var_222_bool = 0;
			var_223_bool = 0; var_224_object = Obj();
			var_224_object = var_1_object;
			func_6811(var_224_object);
			if(var_223_bool != 0) {
				var_229_bool = 0; var_230_object = Obj();
				var_230_object = var_1_object;
				func_6823(var_230_object);
				if(var_229_bool != 0) {
					var_222_bool = 1;
				}
			}
			if(var_222_bool != 0) {
				@@@var_0_object:AddReply((int)511346, (int)12544, (int)12543);
			}
			var_238_bool = 0;
			var_238_bool = 0;
			var_239_bool = 0;
			var_239_bool = 0;
			var_240_bool = 0; var_241_object = Obj();
			var_241_object = var_1_object;
			func_6823(var_241_object);
			if(var_240_bool != 0) {
				var_242_bool = 0; var_243_object = Obj();
				var_243_object = var_1_object;
				func_6835(var_243_object);
				var_248_bool = var_242_bool == 0; //@nz
				if(var_248_bool != 0) {
					var_239_bool = 1;
				}
			}
			if(var_239_bool != 0) {
				var_249_bool = 0; var_250_object = Obj();
				var_250_object = var_1_object;
				func_6811(var_250_object);
				var_251_bool = var_249_bool == 0; //@nz
				if(var_251_bool != 0) {
					var_238_bool = 1;
				}
			}
			if(var_238_bool != 0) {
				@@@var_0_object:AddReply((int)511473, (int)12680, (int)12679);
			}
			var_255_bool = 0;
			var_255_bool = 0;
			var_256_bool = 0; var_257_object = Obj();
			var_257_object = var_1_object;
			func_6859(var_257_object);
			if(var_256_bool != 0) {
				var_262_bool = 0; var_263_object = Obj();
				var_263_object = var_1_object;
				func_6847(var_263_object);
				if(var_262_bool != 0) {
					var_255_bool = 1;
				}
			}
			if(var_255_bool != 0) {
				@@@var_0_object:AddReply((int)511853, (int)13067, (int)13066);
			}
			@@@var_0_object:AddReply((int)511345, (int)-1, (int)12542);
			return 0;
		}
		var_275_bool = var_46_bool == (int)13067;
		if(var_275_bool != 0) {
			var_276_string = "";
			func_2871(var_47_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)511854);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511855, (int)-1, (int)13068);
			return 0;
		}
		var_282_bool = var_46_bool == (int)12680;
		if(var_282_bool != 0) {
			var_283_string = "";
			func_2871(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511474);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511475, (int)-1, (int)12681);
			return 0;
		}
		var_289_bool = var_46_bool == (int)12544;
		if(var_289_bool != 0) {
			var_290_string = "";
			func_2871(var_47_cvector, "Rage");
			@@@var_0_object:SetMessage((int)511347);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511348, (int)12550, (int)12545);
			@@@var_0_object:AddReply((int)511367, (int)12566, (int)12565);
			return 0;
		}
		var_299_bool = var_46_bool == (int)12566;
		if(var_299_bool != 0) {
			var_300_string = "";
			func_2871(var_47_cvector, "Rage");
			@@@var_0_object:SetMessage((int)511368);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511369, (int)12614, (int)12567);
			@@@var_0_object:AddReply((int)511419, (int)12554, (int)12616);
			return 0;
		}
		var_309_bool = var_46_bool == (int)12614;
		if(var_309_bool != 0) {
			var_310_string = "";
			func_2871(var_47_cvector, "Rage");
			@@@var_0_object:SetMessage((int)511417);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520959, (int)12556, (int)22175);
			@@@var_0_object:AddReply((int)520960, (int)-1, (int)22176);
			return 0;
		}
		var_319_bool = var_46_bool == (int)12550;
		if(var_319_bool != 0) {
			var_320_string = "";
			func_2871(var_47_cvector, "Rage");
			@@@var_0_object:SetMessage((int)511353);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511354, (int)12552, (int)12551);
			@@@var_0_object:AddReply((int)511365, (int)12556, (int)12562);
			return 0;
		}
		var_329_bool = var_46_bool == (int)12552;
		if(var_329_bool != 0) {
			var_330_string = "";
			func_2871(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)511355);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511356, (int)12554, (int)12553);
			return 0;
		}
		var_336_bool = var_46_bool == (int)12554;
		if(var_336_bool != 0) {
			var_337_string = "";
			func_2871(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)511357);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511358, (int)12556, (int)12555);
			@@@var_0_object:AddReply((int)511421, (int)12620, (int)12619);
			return 0;
		}
		var_346_bool = var_46_bool == (int)12620;
		if(var_346_bool != 0) {
			var_347_string = "";
			func_2871(var_47_cvector, "Rage");
			@@@var_0_object:SetMessage((int)511422);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511423, (int)12624, (int)12621);
			@@@var_0_object:AddReply((int)511424, (int)12556, (int)12622);
			return 0;
		}
		var_356_bool = var_46_bool == (int)12624;
		if(var_356_bool != 0) {
			var_357_string = "";
			func_2871(var_47_cvector, "Rage");
			@@@var_0_object:SetMessage((int)511425);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511426, (int)12626, (int)12625);
			return 0;
		}
		var_363_bool = var_46_bool == (int)12626;
		if(var_363_bool != 0) {
			var_364_string = "";
			func_2871(var_47_cvector, "Rage");
			@@@var_0_object:SetMessage((int)511427);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511428, (int)12556, (int)12627);
			return 0;
		}
		var_370_bool = var_46_bool == (int)12556;
		if(var_370_bool != 0) {
			var_371_string = "";
			func_2871(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511359);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511360, (int)-1, (int)12557);
			@@@var_0_object:AddReply((int)511362, (int)-1, (int)12559);
			return 0;
		}
		var_3_string = true;
		var_379_bool = 0;
		func_6001(var_379_bool);
		if(var_379_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb4e";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_5818();
		var_51_bool = var_47_cvector == (int)13112;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_6374();
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_6608(var_123_object);
			var_148_object = Obj(); var_149_object = Obj();
			var_148_object = var_1_object;
			var_149_object = var_0_object;
			func_6624();
		}
		var_161_bool = var_47_cvector == (int)13122;
		if(var_161_bool != 0) {
			var_162_object = Obj(); var_163_object = Obj();
			var_162_object = var_1_object;
			var_163_object = var_0_object;
			func_6418();
			var_182_object = Obj(); var_183_object = Obj();
			var_182_object = var_1_object;
			var_183_object = var_0_object;
			func_6453();
		}
		var_199_bool = var_47_cvector == (int)13123;
		if(var_199_bool != 0) {
			var_200_object = Obj(); var_201_object = Obj();
			var_200_object = var_1_object;
			var_201_object = var_0_object;
			func_6602();
		}
		var_205_bool = var_46_bool == (int)13085;
		if(var_205_bool != 0) {
			var_206_bool = 0;
			var_206_bool = 0;
			var_207_bool = 0; var_208_object = Obj();
			var_208_object = var_1_object;
			func_6871(var_208_object);
			if(var_207_bool != 0) {
				var_213_bool = 0; var_214_object = Obj();
				var_214_object = var_1_object;
				func_6751(var_214_object);
				if(var_213_bool != 0) {
					var_206_bool = 1;
				}
			}
			if(var_206_bool != 0) {
				var_219_object = Obj(); var_220_object = Obj();
				var_219_object = var_1_object;
				var_220_object = var_0_object;
				func_6121();
				var_223_object = Obj(); var_224_object = Obj();
				var_223_object = var_1_object;
				var_224_object = var_0_object;
				func_6182();
				var_227_string = "";
				func_3553(var_47_cvector, "Adoration");
				@@@var_0_object:SetMessage((int)511872);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)511873, (int)13087, (int)13086);
				@@@var_0_object:AddReply((int)515663, (int)16703, (int)16702);
				return 0;
			}
			var_251_string = "";
			func_3553(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511897);
			@@@var_0_object:ClearReplies();
			var_253_bool = 0; var_254_object = Obj();
			var_254_object = var_1_object;
			func_6883(var_254_object);
			if(var_253_bool != 0) {
				@@@var_0_object:AddReply((int)511898, (int)13115, (int)13114);
			}
			var_262_bool = 0;
			var_262_bool = 0;
			var_263_bool = 0; var_264_object = Obj();
			var_264_object = var_1_object;
			func_6895(var_264_object);
			if(var_263_bool != 0) {
				var_269_bool = 0; var_270_object = Obj();
				var_270_object = var_1_object;
				func_7051(var_270_object);
				if(var_269_bool != 0) {
					var_262_bool = 1;
				}
			}
			if(var_262_bool != 0) {
				@@@var_0_object:AddReply((int)511907, (int)13124, (int)13123);
			}
			@@@var_0_object:AddReply((int)511915, (int)-1, (int)13131);
			return 0;
		}
		var_282_bool = var_46_bool == (int)13124;
		if(var_282_bool != 0) {
			var_283_string = "";
			func_3553(var_47_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)511908);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511909, (int)13126, (int)13125);
			@@@var_0_object:AddReply((int)515675, (int)16719, (int)16718);
			return 0;
		}
		var_292_bool = var_46_bool == (int)16719;
		if(var_292_bool != 0) {
			var_293_string = "";
			func_3553(var_47_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)515676);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515677, (int)13126, (int)16720);
			return 0;
		}
		var_299_bool = var_46_bool == (int)13126;
		if(var_299_bool != 0) {
			var_300_string = "";
			func_3553(var_47_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)511910);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511911, (int)13128, (int)13127);
			@@@var_0_object:AddReply((int)515678, (int)-1, (int)16722);
			return 0;
		}
		var_309_bool = var_46_bool == (int)13128;
		if(var_309_bool != 0) {
			var_310_string = "";
			func_3553(var_47_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)511912);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511913, (int)-1, (int)13129);
			@@@var_0_object:AddReply((int)511914, (int)-1, (int)13130);
			@@@var_0_object:AddReply((int)515679, (int)-1, (int)16723);
			return 0;
		}
		var_322_bool = var_46_bool == (int)13115;
		if(var_322_bool != 0) {
			var_323_string = "";
			func_3553(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)511899);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511900, (int)13117, (int)13116);
			return 0;
		}
		var_329_bool = var_46_bool == (int)13117;
		if(var_329_bool != 0) {
			var_330_string = "";
			func_3553(var_47_cvector, "Rage");
			@@@var_0_object:SetMessage((int)511901);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511902, (int)13119, (int)13118);
			@@@var_0_object:AddReply((int)515672, (int)16715, (int)16714);
			return 0;
		}
		var_339_bool = var_46_bool == (int)16715;
		if(var_339_bool != 0) {
			var_340_string = "";
			func_3553(var_47_cvector, "Rage");
			@@@var_0_object:SetMessage((int)515673);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515674, (int)13119, (int)16716);
			return 0;
		}
		var_346_bool = var_46_bool == (int)13119;
		if(var_346_bool != 0) {
			var_347_string = "";
			func_3553(var_47_cvector, "Rage");
			@@@var_0_object:SetMessage((int)511903);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511904, (int)13121, (int)13120);
			return 0;
		}
		var_353_bool = var_46_bool == (int)13121;
		if(var_353_bool != 0) {
			var_354_string = "";
			func_3553(var_47_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)511905);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511906, (int)-1, (int)13122);
			return 0;
		}
		var_360_bool = var_46_bool == (int)16703;
		if(var_360_bool != 0) {
			var_361_string = "";
			func_3553(var_47_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)515664);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515665, (int)13087, (int)16704);
			return 0;
		}
		var_367_bool = var_46_bool == (int)13087;
		if(var_367_bool != 0) {
			var_368_string = "";
			func_3553(var_47_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)511874);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511875, (int)13089, (int)13088);
			@@@var_0_object:AddReply((int)515666, (int)13089, (int)16706);
			return 0;
		}
		var_377_bool = var_46_bool == (int)13089;
		if(var_377_bool != 0) {
			var_378_string = "";
			func_3553(var_47_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)511876);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511877, (int)13091, (int)13090);
			@@@var_0_object:AddReply((int)515667, (int)-1, (int)16708);
			return 0;
		}
		var_387_bool = var_46_bool == (int)13091;
		if(var_387_bool != 0) {
			var_388_string = "";
			func_3553(var_47_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)511878);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511879, (int)13093, (int)13092);
			@@@var_0_object:AddReply((int)511888, (int)13093, (int)13101);
			return 0;
		}
		var_397_bool = var_46_bool == (int)13093;
		if(var_397_bool != 0) {
			var_398_string = "";
			func_3553(var_47_cvector, "Rage");
			@@@var_0_object:SetMessage((int)511880);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515669, (int)16713, (int)16711);
			@@@var_0_object:AddReply((int)515670, (int)-1, (int)16712);
			return 0;
		}
		var_407_bool = var_46_bool == (int)16713;
		if(var_407_bool != 0) {
			var_408_string = "";
			func_3553(var_47_cvector, "Rage");
			@@@var_0_object:SetMessage((int)515671);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511881, (int)13095, (int)13094);
			@@@var_0_object:AddReply((int)515668, (int)13095, (int)16709);
			return 0;
		}
		var_417_bool = var_46_bool == (int)13095;
		if(var_417_bool != 0) {
			var_418_string = "";
			func_3553(var_47_cvector, "Rage");
			@@@var_0_object:SetMessage((int)511882);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511883, (int)13097, (int)13096);
			@@@var_0_object:AddReply((int)511889, (int)13103, (int)13102);
			return 0;
		}
		var_427_bool = var_46_bool == (int)13103;
		if(var_427_bool != 0) {
			var_428_string = "";
			func_3553(var_47_cvector, "Rage");
			@@@var_0_object:SetMessage((int)511890);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511891, (int)13099, (int)13104);
			return 0;
		}
		var_434_bool = var_46_bool == (int)13097;
		if(var_434_bool != 0) {
			var_435_string = "";
			func_3553(var_47_cvector, "Rage");
			@@@var_0_object:SetMessage((int)511884);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511885, (int)13099, (int)13098);
			return 0;
		}
		var_441_bool = var_46_bool == (int)13099;
		if(var_441_bool != 0) {
			var_442_string = "";
			func_3553(var_47_cvector, "Rage");
			@@@var_0_object:SetMessage((int)511886);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511887, (int)13110, (int)13100);
			@@@var_0_object:AddReply((int)511892, (int)13108, (int)13107);
			return 0;
		}
		var_451_bool = var_46_bool == (int)13108;
		if(var_451_bool != 0) {
			var_452_string = "";
			func_3553(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511893);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511894, (int)13110, (int)13109);
			return 0;
		}
		var_458_bool = var_46_bool == (int)13110;
		if(var_458_bool != 0) {
			var_459_string = "";
			func_3553(var_47_cvector, "Rage");
			@@@var_0_object:SetMessage((int)511895);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511896, (int)-1, (int)13112);
			return 0;
		}
		var_3_string = true;
		var_464_bool = 0;
		func_6001(var_464_bool);
		if(var_464_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xdf8";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_5818();
		var_51_bool = var_47_cvector == (int)35093;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_6150();
			var_87_object = Obj(); var_88_object = Obj();
			var_87_object = var_1_object;
			var_88_object = var_0_object;
			func_6162(var_88_object);
			var_111_object = Obj(); var_112_object = Obj();
			var_111_object = var_1_object;
			var_112_object = var_0_object;
			func_6039();
		}
		var_116_bool = var_47_cvector == (int)35101;
		if(var_116_bool != 0) {
			var_117_object = Obj(); var_118_object = Obj();
			var_117_object = var_1_object;
			var_118_object = var_0_object;
			func_6150();
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_object;
			func_6162(var_120_object);
			var_121_object = Obj(); var_122_object = Obj();
			var_121_object = var_1_object;
			var_122_object = var_0_object;
			func_6039();
		}
		var_124_bool = var_47_cvector == (int)35098;
		if(var_124_bool != 0) {
			var_125_object = Obj(); var_126_object = Obj();
			var_125_object = var_1_object;
			var_126_object = var_0_object;
			func_6173();
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_object;
			func_6133(var_138_object);
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_object;
			func_6039();
		}
		var_146_bool = var_46_bool == (int)35090;
		if(var_146_bool != 0) {
			var_147_bool = 0;
			var_147_bool = 0;
			var_148_bool = 0; var_149_object = Obj();
			var_149_object = var_1_object;
			func_6703(var_149_object);
			var_156_bool = var_148_bool == 0; //@nz
			if(var_156_bool != 0) {
				var_157_bool = 0; var_158_object = Obj();
				var_158_object = var_1_object;
				func_6715(var_158_object);
				if(var_157_bool != 0) {
					var_147_bool = 1;
				}
			}
			if(var_147_bool != 0) {
				var_163_object = Obj(); var_164_object = Obj();
				var_163_object = var_1_object;
				var_164_object = var_0_object;
				func_6144();
				var_167_object = Obj(); var_168_object = Obj();
				var_167_object = var_1_object;
				var_168_object = var_0_object;
				func_6188();
				var_171_string = "";
				func_4386(var_47_cvector, "Adoration");
				@@@var_0_object:SetMessage((int)533560);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)536195, (int)37969, (int)37968);
				var_192_bool = 0; var_193_object = Obj();
				var_193_object = var_1_object;
				func_6691(var_193_object);
				if(var_192_bool != 0) {
					@@@var_0_object:AddReply((int)536202, (int)37976, (int)37975);
				}
				return 0;
			}
			var_201_object = Obj(); var_202_object = Obj();
			var_201_object = var_1_object;
			var_202_object = var_0_object;
			func_6188();
			var_203_string = "";
			func_4386(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533564);
			@@@var_0_object:ClearReplies();
			var_205_bool = 0;
			var_205_bool = 0;
			var_206_bool = 0; var_207_object = Obj();
			var_207_object = var_1_object;
			func_6727(var_207_object);
			if(var_206_bool != 0) {
				var_212_bool = 0; var_213_object = Obj();
				var_213_object = var_1_object;
				func_6703(var_213_object);
				var_214_bool = var_212_bool == 0; //@nz
				if(var_214_bool != 0) {
					var_205_bool = 1;
				}
			}
			if(var_205_bool != 0) {
				@@@var_0_object:AddReply((int)533569, (int)35100, (int)35099);
			}
			var_218_bool = 0; var_219_object = Obj();
			var_219_object = var_1_object;
			func_6739(var_219_object);
			if(var_218_bool != 0) {
				@@@var_0_object:AddReply((int)533565, (int)35096, (int)35095);
			}
			@@@var_0_object:AddReply((int)533572, (int)-1, (int)35102);
			@@@var_0_object:AddReply((int)536201, (int)-1, (int)37974);
			return 0;
		}
		var_234_bool = var_46_bool == (int)35096;
		if(var_234_bool != 0) {
			var_235_string = "";
			func_4386(var_47_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)533566);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533568, (int)-1, (int)35098);
			return 0;
		}
		var_241_bool = var_46_bool == (int)35100;
		if(var_241_bool != 0) {
			var_242_string = "";
			func_4386(var_47_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)533570);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533571, (int)-1, (int)35101);
			return 0;
		}
		var_248_bool = var_46_bool == (int)37969;
		if(var_248_bool != 0) {
			var_249_string = "";
			func_4386(var_47_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)536196);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536197, (int)37971, (int)37970);
			@@@var_0_object:AddReply((int)536245, (int)37971, (int)38021);
			return 0;
		}
		var_258_bool = var_46_bool == (int)37971;
		if(var_258_bool != 0) {
			var_259_string = "";
			func_4386(var_47_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)536198);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536199, (int)37973, (int)37972);
			@@@var_0_object:AddReply((int)536246, (int)38025, (int)38023);
			return 0;
		}
		var_268_bool = var_46_bool == (int)38025;
		if(var_268_bool != 0) {
			var_269_string = "";
			func_4386(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536248);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536249, (int)37973, (int)38027);
			return 0;
		}
		var_275_bool = var_46_bool == (int)37973;
		if(var_275_bool != 0) {
			var_276_string = "";
			func_4386(var_47_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)536200);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536244, (int)35092, (int)38020);
			@@@var_0_object:AddReply((int)536247, (int)37976, (int)38024);
			return 0;
		}
		var_285_bool = var_46_bool == (int)37976;
		if(var_285_bool != 0) {
			var_286_string = "";
			func_4386(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536203);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536250, (int)35092, (int)38029);
			@@@var_0_object:AddReply((int)536251, (int)38033, (int)38031);
			return 0;
		}
		var_295_bool = var_46_bool == (int)38033;
		if(var_295_bool != 0) {
			var_296_string = "";
			func_4386(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536252);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536253, (int)35092, (int)38034);
			var_301_bool = 0; var_302_object = Obj();
			var_302_object = var_1_object;
			func_6691(var_302_object);
			var_303_bool = var_301_bool == 0; //@nz
			if(var_303_bool != 0) {
				@@@var_0_object:AddReply((int)536254, (int)-1, (int)38036);
			}
			return 0;
		}
		var_308_bool = var_46_bool == (int)35092;
		if(var_308_bool != 0) {
			var_309_string = "";
			func_4386(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533562);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533563, (int)-1, (int)35093);
			@@@var_0_object:AddReply((int)533567, (int)-1, (int)35097);
			return 0;
		}
		var_3_string = true;
		var_317_bool = 0;
		func_6001(var_317_bool);
		if(var_317_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1139";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_5818();
		var_51_bool = var_46_bool == (int)36971;
		if(var_51_bool != 0) {
			var_52_string = "";
			func_4931(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535294);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535295, (int)36973, (int)36972);
			@@@var_0_object:AddReply((int)535302, (int)-1, (int)36980);
			@@@var_0_object:AddReply((int)535303, (int)-1, (int)36981);
			return 0;
		}
		var_80_bool = var_46_bool == (int)36973;
		if(var_80_bool != 0) {
			var_81_string = "";
			func_4931(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535296);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535297, (int)36975, (int)36974);
			@@@var_0_object:AddReply((int)535301, (int)36975, (int)36978);
			return 0;
		}
		var_90_bool = var_46_bool == (int)36975;
		if(var_90_bool != 0) {
			var_91_string = "";
			func_4931(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535298);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535299, (int)-1, (int)36976);
			@@@var_0_object:AddReply((int)535300, (int)-1, (int)36977);
			return 0;
		}
		var_3_string = true;
		var_99_bool = 0;
		func_6001(var_99_bool);
		if(var_99_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x135a";
	
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_cvector)
{
	if((int)1 != 0) {
		func_5818();
		var_51_bool = var_46_int == (int)42557;
		if(var_51_bool != 0) {
			var_52_string = "";
			func_5185(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540548);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540549, (int)-1, (int)42558);
			@@@var_0_object:AddReply((int)540797, (int)-1, (int)42846);
			return 0;
		}
		var_3_string = true;
		var_76_bool = 0;
		func_6001(var_76_bool);
		if(var_76_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1458";
	
}


task_18_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_int)
{
	var_48_bool = var_46_int == (int)10;
	if(var_48_bool != 0) {
		func_5321();
		var_50_bool = 0;
		var_50_bool = 0;
		var_51_bool = 0;
		func_5542(var_51_bool);
		if(var_51_bool != 0) {
			var_54_bool = 0;
			func_5290(var_54_bool);
			if(var_54_bool != 0) {
				var_50_bool = 1;
			}
		}
		if(var_50_bool != 0) {
			var_71_bool = 0;
			func_5270(var_71_bool);
			if(var_71_bool != 0) {
				var_90_bool = 0; var_91_object = Obj();
				func_5825(Obj());
				var_92_object = var_91_object;
				func_5692(var_90_bool, var_91_object);
			}
		} else {
			func_5285(var_46_int);
			func_5312();
		}
	}
	return 0;
	
}


task_18_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	func_5503();
	func_5321();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_18_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	StopGroup0();
	func_5321();
	var_47_string = "";
	func_5772("Neutral");
	func_5312();
	return 0;
}


task_18_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_bool)
{
	var_47_bool = var_46_bool;
	if(var_47_bool != 0) {
		func_5312();
	} else {
		var_53_string = "";
		func_5772("Neutral");
	}
	return 0;
	
}


task_18_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_object)
{
	var_47_bool = 0; var_48_bool = 0;
	IsOverrideActive(var_48_bool);
	var_49_bool = var_48_bool == 0; //@nz
	if(var_49_bool != 0) {
		EventDisable(0);
		func_5503();
		var_50_bool = 0; var_51_object = Obj();
		var_46_object = var_51_object;
		func_5533(var_50_bool, var_51_object);
		EventEnable(0);
		var_64_object = Obj();
		var_46_object = var_64_object;
		func_7327(var_64_object);
		var_1109_string = "";
		func_5772("Neutral");
		func_5321();
		func_5312();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	var_46_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_5256(var_45_cvector);
	return 0;
}


func_6144()
{
	SetVariable("ood9Anna1", (int)1);
	return 0;
}


func_0(var_0_object, var_67_int, var_68_object)
{
	var_70_object = Obj(); var_71_bool = 0; var_72_int = 0; var_73_bool = 0; var_74_object = Obj(); var_75_bool = 0; var_76_int = 0; var_77_bool = 0;
	var_0_object = var_68_object;
	var_78_bool = 0; var_79_object = Obj(); var_80_float = 0;
	var_68_object = var_79_object;
	func_5547(var_78_bool, var_79_object, (float)70.0);
	var_125_bool = var_78_bool == 0; //@nz
	if(var_125_bool != 0) {
		var_67_int = -2;
		return 8;
	}
	CreateDialog(var_74_object);
	var_126_int = 0;
	func_5995(var_126_int);
	@@var_74_object:SetNPCName(var_126_int);
	var_127_int = 0;
	func_5993(var_127_int);
	@@var_74_object:SetNPCDescription(var_127_int);
	var_128_string = "";
	func_5997(var_128_string);
	@@var_74_object:SetPhoto(var_128_string);
	var_129_string = "";
	func_5999(var_129_string);
	@@var_74_object:SetPhoto2(var_129_string);
	var_130_int = 0;
	func_7310(var_130_int);
	@@var_74_object:SetPlayerName(var_130_int);
	IsOverrideActive(var_75_bool);
	var_138_bool = var_75_bool;
	if(var_138_bool != 0) {
		var_67_int = -2;
		return 8;
	}
	DoDialog(var_74_object);
	var_139_bool = 0; var_140_object = Obj();
	func_5825(Obj());
	var_141_object = var_140_object;
	func_5634(var_139_bool, var_140_object);
	var_234_object = Obj(); var_235_object = Obj();
	var_68_object = var_234_object;
	var_74_object = var_235_object;
	TaskCall(1);
	func_81(var_236_object, var_237_object, var_238_string, var_239_bool, var_234_object, var_235_object);
	TaskReturn();
	@@var_74_object:IsDialogEnd(var_77_bool);
	
Label_63:
	var_287_bool = var_77_bool == 0; //@nz
	if(var_287_bool != 0) {
		sync();
		@@var_74_object:IsDialogEnd(var_77_bool);
		goto Label_63;
	}
	var_68_object = Obj();
	func_5616();
	StopDialog(var_74_object);
	@@var_74_object:GetReturnValue((int)-1);
	var_76_int = var_67_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5634(var_139_bool, var_140_object)
{
	var_144_int = 0; var_145_int = 0; var_146_int = 0; var_147_int = 0;
	GetVariable("voice_common", var_146_int);
	var_149_int = var_146_int;
	if(var_149_int != 0) {
		var_150_bool = 0; var_151_object = Obj();
		var_140_object = var_151_object;
		func_5692(var_150_bool, var_151_object);
		var_180_bool = var_150_bool == 0; //@nz
		if(var_180_bool != 0) {
			var_181_bool = 0; var_182_object = Obj();
			var_140_object = var_182_object;
			func_5729(var_181_bool, var_182_object);
			var_216_bool = var_181_bool == 0; //@nz
			if(var_216_bool != 0) {
				var_139_bool = 0;
				return 4;
			}
		}
		irand(var_147_int, (int)2);
		var_218_int = var_147_int;
		if(var_218_int != 0) {
			var_221_int = var_146_int + (int)1;
			var_223_int = var_221_int % (int)3;
			SetVariable("voice_common", var_223_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_226_bool = 0; var_227_object = Obj();
		var_140_object = var_227_object;
		func_5729(var_226_bool, var_227_object);
		var_228_bool = var_226_bool == 0; //@nz
		if(var_228_bool != 0) {
			var_229_bool = 0; var_230_object = Obj();
			var_140_object = var_230_object;
			func_5692(var_229_bool, var_230_object);
			var_231_bool = var_229_bool == 0; //@nz
			if(var_231_bool != 0) {
				var_139_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_5690;
	
Label_5690:
	var_139_bool = 1;
	return 4;
	
}


func_6150()
{
	SetVariable("d9q04", (int)1);
	func_7180();
	func_7193();
	return 0;
}


func_5127(var_0_object, var_1_object, var_2_object, var_3_string, var_1077_object, var_1078_object)
{
	var_0_object = var_1078_object;
	var_1_object = var_1077_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1084_string = "";
		func_5185(var_1078_object, "Neutral");
		@@@var_0_object:SetMessage((int)540548);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540549, (int)-1, (int)42558);
		@@@var_0_object:AddReply((int)540797, (int)-1, (int)42846);
		goto Label_5155;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x140b";
	}
Label_5155:
	var_1099_bool = 0;
	func_6001(var_1099_bool);
	if(var_1099_bool != 0) {

	Label_5159:
		lshWaitForAnimEnd();
		var_1100_string = var_3_string;
		if(var_1100_string != 0) {
		} else {
			var_1101_string = "";
			var_1101_string = var_2_object;
			func_5772(var_1101_string);
			goto Label_5159;
	}
		PlayAnimation("all", "idle");

	Label_5174:
		WaitForAnimEnd();
		var_1104_string = var_3_string;
		if(var_1104_string != 0) {
			goto Label_5184;
		}
		PlayAnimation("all", "idle");
		goto Label_5174;
	}
	goto Label_5184;
	
Label_5184:
	return 0;
	
}


func_1033(var_0_object, var_300_int, var_301_object)
{
	var_303_object = Obj(); var_304_bool = 0; var_305_int = 0; var_306_bool = 0; var_307_object = Obj(); var_308_bool = 0; var_309_int = 0; var_310_bool = 0;
	var_0_object = var_301_object;
	var_311_bool = 0; var_312_object = Obj(); var_313_float = 0;
	var_301_object = var_312_object;
	func_5547(var_311_bool, var_312_object, (float)70.0);
	var_314_bool = var_311_bool == 0; //@nz
	if(var_314_bool != 0) {
		var_300_int = -2;
		return 8;
	}
	CreateDialog(var_307_object);
	var_315_int = 0;
	func_5995(var_315_int);
	@@var_307_object:SetNPCName(var_315_int);
	var_316_int = 0;
	func_5993(var_316_int);
	@@var_307_object:SetNPCDescription(var_316_int);
	var_317_string = "";
	func_5997(var_317_string);
	@@var_307_object:SetPhoto(var_317_string);
	var_318_string = "";
	func_5999(var_318_string);
	@@var_307_object:SetPhoto2(var_318_string);
	var_319_int = 0;
	func_7310(var_319_int);
	@@var_307_object:SetPlayerName(var_319_int);
	IsOverrideActive(var_308_bool);
	var_320_bool = var_308_bool;
	if(var_320_bool != 0) {
		var_300_int = -2;
		return 8;
	}
	DoDialog(var_307_object);
	var_321_bool = 0; var_322_object = Obj();
	func_5825(Obj());
	var_323_object = var_322_object;
	func_5634(var_321_bool, var_322_object);
	var_324_object = Obj(); var_325_object = Obj();
	var_301_object = var_324_object;
	var_307_object = var_325_object;
	TaskCall(5);
	func_1114(var_326_object, var_327_object, var_328_string, var_329_bool, var_324_object, var_325_object);
	TaskReturn();
	@@var_307_object:IsDialogEnd(var_310_bool);
	
Label_1096:
	var_468_bool = var_310_bool == 0; //@nz
	if(var_468_bool != 0) {
		sync();
		@@var_307_object:IsDialogEnd(var_310_bool);
		goto Label_1096;
	}
	var_301_object = Obj();
	func_5616();
	StopDialog(var_307_object);
	@@var_307_object:GetReturnValue((int)-1);
	var_309_int = var_300_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6667(var_430_bool)
{
	var_432_int = 0; var_433_string = "";
	func_5841(var_432_int, "d1q01FirstGeorgVisit");
	var_435_bool = var_432_int == (int)1;
	if(var_435_bool != 0) {
		var_430_bool = 1;
		return 0;
	}
	var_430_bool = 0;
	return 0;
}


func_7180()
{
	var_56_object = Obj(); var_57_object = Obj();
	CreateDiaryEntry(var_57_object, (int)662, (int)2, (int)533580);
	var_61_bool = 0; var_62_object = Obj(); var_63_int = 0;
	var_57_object = var_62_object;
	func_7232(var_61_bool, var_62_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6162(var_87_object)
{
	Trace("Gun_danko is given");
	var_90_object = Obj(); var_91_string = ""; var_92_int = 0;
	var_87_object = var_90_object;
	func_5924(var_90_object, "Gun_danko", (int)1);
	return 0;
}


func_6679(var_448_bool)
{
	var_450_int = 0; var_451_string = "";
	func_5841(var_450_int, "d1q01");
	var_453_bool = var_450_int == (int)6;
	if(var_453_bool != 0) {
		var_448_bool = 1;
		return 0;
	}
	var_448_bool = 0;
	return 0;
}


func_7193()
{
	var_79_object = Obj(); var_80_object = Obj();
	CreateDiaryEntry(var_80_object, (int)663, (int)2, (int)533581);
	var_84_bool = 0; var_85_object = Obj(); var_86_int = 0;
	var_80_object = var_85_object;
	func_7232(var_84_bool, var_85_object, (int)662);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6173()
{
	SetVariable("d9q04", (int)1000);
	func_7206();
	return 0;
}


func_6691(var_941_bool)
{
	var_943_int = 0; var_944_string = "";
	func_5841(var_943_int, "d9q02");
	var_946_bool = var_943_int == (int)1;
	if(var_946_bool != 0) {
		var_941_bool = 1;
		return 0;
	}
	var_941_bool = 0;
	return 0;
}


func_549(var_2_object, var_788_string)
{
	var_789_bool = 0;
	func_6001(var_789_bool);
	var_790_bool = var_789_bool == 0; //@nz
	if(var_790_bool != 0) {
		return 0;
	}
	var_791_bool = var_788_string == var_2_object;
	if(var_791_bool != 0) {
		return 0;
	}
	var_792_string = ""; var_793_bool = 0;
	var_788_string = var_792_string;
	var_795_bool = var_788_string == "";
	if(var_795_bool != 0) {
		var_793_bool = 0;
	} else {
		var_793_bool = 1;
	}
	func_5788(var_792_string, var_793_bool);
	var_2_object = var_788_string;
	return 0;
	
}


func_6182()
{
	SetVariable("ood5Anna2", (int)1);
	return 0;
}


func_7206()
{
	var_129_object = Obj(); var_130_object = Obj();
	CreateDiaryEntry(var_130_object, (int)665, (int)2, (int)533583);
	var_134_bool = 0; var_135_object = Obj(); var_136_int = 0;
	var_130_object = var_135_object;
	func_7232(var_134_bool, var_135_object, (int)662);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6188()
{
	SetVariable("d9AnnaVisit", (int)1);
	return 0;
}


func_6703(var_908_bool)
{
	var_910_int = 0; var_911_string = "";
	func_5841(var_910_int, "d9q03");
	var_913_bool = var_910_int == (int)1000;
	if(var_913_bool != 0) {
		var_908_bool = 1;
		return 0;
	}
	var_908_bool = 0;
	return 0;
}


func_6194()
{
	func_7141();
	return 0;
}


func_7219(var_70_object)
{
	var_71_object = Obj(); var_72_object = Obj();
	GetDiaryRoot(var_72_object);
	var_73_bool = var_72_object == 0; //@nz
	if(var_73_bool != 0) {
		Trace("Can't retrieve diary root");
		var_70_object = 0;
		return 2;
	}
	var_72_object = var_70_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_6199()
{
	SetVariable("ood2Anna1", (int)1);
	return 0;
}


func_6715(var_915_bool)
{
	var_917_int = 0; var_918_string = "";
	func_5841(var_917_int, "ood9Anna1");
	var_920_bool = var_917_int == (int)0;
	if(var_920_bool != 0) {
		var_915_bool = 1;
		return 0;
	}
	var_915_bool = 0;
	return 0;
}


func_5692(var_150_bool, var_151_object)
{
	var_152_string = ""; var_153_int = 0; var_154_bool = 0; var_155_int = 0; var_156_string = ""; var_157_string = ""; var_158_int = 0; var_159_bool = 0; var_160_int = 0; var_161_string = "";
	var_157_string = "c";
	var_158_int = 0;
	
Label_5695:
	if((int)1 != 0) {
		var_164_int = var_158_int + (int)1;
		var_165_int = var_157_string + var_164_int;
		@@var_151_object:HasProperty(var_165_int, var_159_bool);
		var_166_bool = var_159_bool == 0; //@nz
		if(var_166_bool != 0) {
		} else {
			var_158_int = var_158_int + (int)1;
			goto Label_5695;
		}
	}
	var_167_bool = var_158_int == 0; //@nz
	if(var_167_bool != 0) {
		var_150_bool = 0;
		return 10;
	}
	var_160_int = 0;
	var_169_bool = var_158_int > (int)1;
	if(var_169_bool != 0) {
		irand(var_160_int, var_158_int);
	}
	var_171_int = var_160_int + (int)1;
	var_172_int = var_157_string + var_171_int;
	@@var_151_object:GetProperty(var_172_int, var_161_string);
	var_173_bool = 0; var_174_string = "";
	var_161_string = var_174_string;
	func_5803(var_173_bool, var_174_string);
	var_173_bool = var_150_bool;
	return 10;
	
}


func_6205()
{
	var_58_object = Obj(); var_59_object = Obj();
	SetVariable("d2q01", (int)2);
	func_7260(Obj());
	var_62_object = var_59_object;
	var_73_float = 0;
	func_5949(var_73_float);
	@@var_59_object:AddMark("d2q01AnnaGotoKapella", "pt_map_kapella", (int)1, (int)511388, var_73_float);
	func_7089();
	return 2;
}
EMIT "Stack[-1] = 0";


func_7232(var_61_bool, var_62_object, var_63_int)
{
	var_64_object = Obj(); var_65_object = Obj(); var_66_int = 0; var_67_object = Obj(); var_68_object = Obj(); var_69_int = 0;
	func_7219(Obj());
	var_70_object = var_67_object;
	@@var_67_object:Find(var_63_int, var_68_object);
	var_75_bool = var_68_object == 0; //@nz
	if(var_75_bool != 0) {
		var_77_int = "Can't find diary parent with id: " + var_63_int;
		Trace(var_77_int);
		var_61_bool = 0;
		return 6;
	}
	@@var_68_object:AddChild(var_62_object);
	SendWorldWndMessage((int)7);
	@@var_62_object:GetCategory(var_69_int);
	SetDiarySection(var_69_int);
	var_61_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_5185(var_2_object, var_1084_string)
{
	var_1085_bool = 0;
	func_6001(var_1085_bool);
	var_1086_bool = var_1085_bool == 0; //@nz
	if(var_1086_bool != 0) {
		return 0;
	}
	var_1087_bool = var_1084_string == var_2_object;
	if(var_1087_bool != 0) {
		return 0;
	}
	var_1088_string = ""; var_1089_bool = 0;
	var_1084_string = var_1088_string;
	var_1091_bool = var_1084_string == "";
	if(var_1091_bool != 0) {
		var_1089_bool = 0;
	} else {
		var_1089_bool = 1;
	}
	func_5788(var_1088_string, var_1089_bool);
	var_2_object = var_1084_string;
	return 0;
	
}


func_4162(var_0_object, var_876_int, var_877_object)
{
	var_879_object = Obj(); var_880_bool = 0; var_881_int = 0; var_882_bool = 0; var_883_object = Obj(); var_884_bool = 0; var_885_int = 0; var_886_bool = 0;
	var_0_object = var_877_object;
	var_887_bool = 0; var_888_object = Obj(); var_889_float = 0;
	var_877_object = var_888_object;
	func_5547(var_887_bool, var_888_object, (float)70.0);
	var_890_bool = var_887_bool == 0; //@nz
	if(var_890_bool != 0) {
		var_876_int = -2;
		return 8;
	}
	CreateDialog(var_883_object);
	var_891_int = 0;
	func_5995(var_891_int);
	@@var_883_object:SetNPCName(var_891_int);
	var_892_int = 0;
	func_5993(var_892_int);
	@@var_883_object:SetNPCDescription(var_892_int);
	var_893_string = "";
	func_5997(var_893_string);
	@@var_883_object:SetPhoto(var_893_string);
	var_894_string = "";
	func_5999(var_894_string);
	@@var_883_object:SetPhoto2(var_894_string);
	var_895_int = 0;
	func_7310(var_895_int);
	@@var_883_object:SetPlayerName(var_895_int);
	IsOverrideActive(var_884_bool);
	var_896_bool = var_884_bool;
	if(var_896_bool != 0) {
		var_876_int = -2;
		return 8;
	}
	DoDialog(var_883_object);
	var_897_bool = 0; var_898_object = Obj();
	func_5825(Obj());
	var_899_object = var_898_object;
	func_5634(var_897_bool, var_898_object);
	var_900_object = Obj(); var_901_object = Obj();
	var_877_object = var_900_object;
	var_883_object = var_901_object;
	TaskCall(13);
	func_4243(var_902_object, var_903_object, var_904_string, var_905_bool, var_900_object, var_901_object);
	TaskReturn();
	@@var_883_object:IsDialogEnd(var_886_bool);
	
Label_4225:
	var_990_bool = var_886_bool == 0; //@nz
	if(var_990_bool != 0) {
		sync();
		@@var_883_object:IsDialogEnd(var_886_bool);
		goto Label_4225;
	}
	var_877_object = Obj();
	func_5616();
	StopDialog(var_883_object);
	@@var_883_object:GetReturnValue((int)-1);
	var_885_int = var_876_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6727(var_963_bool)
{
	var_965_int = 0; var_966_string = "";
	func_5841(var_965_int, "d9q04");
	var_968_bool = var_965_int == (int)0;
	if(var_968_bool != 0) {
		var_963_bool = 1;
		return 0;
	}
	var_963_bool = 0;
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_234_object, var_235_object)
{
	var_0_object = var_235_object;
	var_1_object = var_234_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_241_object = Obj(); var_242_object = Obj();
		var_241_object = var_1_object;
		var_242_object = var_0_object;
		func_6537();
		var_245_string = "";
		func_144(var_235_object, "Neutral");
		@@@var_0_object:SetMessage((int)500221);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)532814, (int)34298, (int)34291);
		@@@var_0_object:AddReply((int)532815, (int)34294, (int)34292);
		goto Label_114;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_114:
	var_269_bool = 0;
	func_6001(var_269_bool);
	if(var_269_bool != 0) {

	Label_118:
		lshWaitForAnimEnd();
		var_270_string = var_3_string;
		if(var_270_string != 0) {
		} else {
			var_271_string = "";
			var_271_string = var_2_object;
			func_5772(var_271_string);
			goto Label_118;
	}
		PlayAnimation("all", "idle");

	Label_133:
		WaitForAnimEnd();
		var_284_string = var_3_string;
		if(var_284_string != 0) {
			goto Label_143;
		}
		PlayAnimation("all", "idle");
		goto Label_133;
	}
	goto Label_143;
	
Label_143:
	return 0;
	
}


func_6739(var_975_bool)
{
	var_977_int = 0; var_978_string = "";
	func_5841(var_977_int, "d9q04");
	var_980_bool = var_977_int == (int)2;
	if(var_980_bool != 0) {
		var_975_bool = 1;
		return 0;
	}
	var_975_bool = 0;
	return 0;
}


func_6228(var_102_object)
{
	var_103_object = Obj(); var_104_string = ""; var_105_float = 0;
	func_7260(Obj());
	var_106_object = var_103_object;
	func_7277(var_103_object, "pt_map_laska", (float)2);
	var_126_object = Obj();
	func_7260(var_126_object);
	@@var_102_object:ShowMap(var_126_object);
	return 0;
}


func_1114(var_0_object, var_1_object, var_2_object, var_3_string, var_324_object, var_325_object)
{
	var_0_object = var_325_object;
	var_1_object = var_324_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_331_bool = 0;
		var_331_bool = 0;
		var_332_bool = 0; var_333_object = Obj();
		var_333_object = var_1_object;
		func_6907(var_333_object);
		if(var_332_bool != 0) {
			var_340_bool = 0; var_341_object = Obj();
			var_341_object = var_1_object;
			func_6655(var_341_object);
			if(var_340_bool != 0) {
				var_331_bool = 1;
			}
		}
		if(var_331_bool != 0) {
			var_346_object = Obj(); var_347_object = Obj();
			var_346_object = var_1_object;
			var_347_object = var_0_object;
			func_6441();
			var_350_string = "";
			func_1342(var_325_object, "Fear");
			@@@var_0_object:SetMessage((int)504938);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504949, (int)5439, (int)5438);
			@@@var_0_object:AddReply((int)504978, (int)5439, (int)5475);
			@@@var_0_object:AddReply((int)504979, (int)5439, (int)5477);
		} else {
				var_376_bool = 0; var_377_object = Obj();
				var_377_object = var_1_object;
				func_6799(var_377_object);
				if(var_376_bool != 0) {
					var_382_string = "";
					func_1342(var_325_object, "Neutral");
					@@@var_0_object:SetMessage((int)504940);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)504981, (int)5480, (int)5479);
					@@@var_0_object:AddReply((int)504985, (int)-1, (int)5483);
					goto Label_1312;
				}
				var_390_bool = 0;
				var_390_bool = 0;
				var_391_bool = 0; var_392_object = Obj();
				var_392_object = var_1_object;
				func_6643(var_392_object);
				if(var_391_bool != 0) {
					var_397_bool = 0; var_398_object = Obj();
					var_398_object = var_1_object;
					func_6919(var_398_object);
					if(var_397_bool != 0) {
						var_390_bool = 1;
					}
				}
				if(var_390_bool != 0) {
					var_403_object = Obj(); var_404_object = Obj();
					var_403_object = var_1_object;
					var_404_object = var_0_object;
					func_6447();
					var_407_string = "";
					func_1342(var_325_object, "Adoration");
					@@@var_0_object:SetMessage((int)504943);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)504987, (int)5486, (int)5485);
					@@@var_0_object:AddReply((int)533010, (int)34515, (int)34514);
					goto Label_1312;
				}
				var_415_string = "";
				func_1342(var_325_object, "Neutral");
				@@@var_0_object:SetMessage((int)506582);
				@@@var_0_object:ClearReplies();
				var_417_bool = 0; var_418_object = Obj();
				var_418_object = var_1_object;
				func_6655(var_418_object);
				if(var_417_bool != 0) {
					@@@var_0_object:AddReply((int)508690, (int)9528, (int)9527);
				}
				var_422_bool = 0;
				var_422_bool = 0;
				var_423_bool = 0;
				var_423_bool = 0;
				var_424_bool = 0; var_425_object = Obj();
				var_425_object = var_1_object;
				func_6955(var_425_object);
				if(var_424_bool != 0) {
					var_430_bool = 0; var_431_object = Obj();
					var_431_object = var_1_object;
					func_6667(var_431_object);
					if(var_430_bool != 0) {
						var_423_bool = 1;
					}
				}
				if(var_423_bool != 0) {
					var_436_bool = 0; var_437_object = Obj();
					var_437_object = var_1_object;
					func_6631(var_437_object);
					var_442_bool = var_436_bool == 0; //@nz
					if(var_442_bool != 0) {
						var_422_bool = 1;
					}
				}
				if(var_422_bool != 0) {
					@@@var_0_object:AddReply((int)506583, (int)5521, (int)7252);
				}
				var_446_bool = 0;
				var_446_bool = 0;
				var_447_bool = 0;
				var_447_bool = 0;
				var_448_bool = 0; var_449_object = Obj();
				var_449_object = var_1_object;
				func_6679(var_449_object);
				if(var_448_bool != 0) {
					var_454_bool = 0; var_455_object = Obj();
					var_455_object = var_1_object;
					func_6643(var_455_object);
					if(var_454_bool != 0) {
						var_447_bool = 1;
					}
				}
				if(var_447_bool != 0) {
					var_456_bool = 0; var_457_object = Obj();
					var_457_object = var_1_object;
					func_6991(var_457_object);
					if(var_456_bool != 0) {
						var_446_bool = 1;
					}
				}
				if(var_446_bool != 0) {
					@@@var_0_object:AddReply((int)531949, (int)33354, (int)33353);
				}
				@@@var_0_object:AddReply((int)507538, (int)-1, (int)8320);
				goto Label_1312;
		}
	}
Label_1312:
	var_368_bool = 0;
	func_6001(var_368_bool);
	if(var_368_bool != 0) {

	Label_1316:
		lshWaitForAnimEnd();
		var_369_string = var_3_string;
		if(var_369_string != 0) {
		} else {
			var_370_string = "";
			var_370_string = var_2_object;
			func_5772(var_370_string);
			goto Label_1316;
	}
		PlayAnimation("all", "idle");

	Label_1331:
		WaitForAnimEnd();
		var_373_string = var_3_string;
		if(var_373_string != 0) {
			goto Label_1341;
		}
		PlayAnimation("all", "idle");
		goto Label_1331;

	}
	goto Label_1341;
	
Label_1341:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x45e";


func_7260(var_58_object)
{
	var_59_object = Obj(); var_60_object = Obj(); var_61_object = Obj(); var_62_object = Obj();
	GetMainOutdoorScene(var_61_object);
	var_63_bool = var_61_object == 0; //@ne
	if(var_63_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_62_object = 0;
		var_62_object = var_58_object;
		return 4;
	}
	@@var_61_object:GetMap(var_62_object);
	var_62_object = var_58_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_6751(var_686_bool)
{
	var_688_int = 0; var_689_string = "";
	func_5841(var_688_int, "ood5Anna2");
	var_691_bool = var_688_int == (int)0;
	if(var_691_bool != 0) {
		var_686_bool = 1;
		return 0;
	}
	var_686_bool = 0;
	return 0;
}


func_5729(var_181_bool, var_182_object)
{
	var_183_string = ""; var_184_int = 0; var_185_bool = 0; var_186_int = 0; var_187_string = ""; var_188_string = ""; var_189_int = 0; var_190_bool = 0; var_191_int = 0; var_192_string = "";
	var_194_int = 0;
	func_5954(var_194_int);
	var_200_int = "d" + var_194_int;
	var_188_string = var_200_int + "m";
	var_189_int = 0;
	
Label_5738:
	if((int)1 != 0) {
		var_204_int = var_189_int + (int)1;
		var_205_int = var_188_string + var_204_int;
		@@var_182_object:HasProperty(var_205_int, var_190_bool);
		var_206_bool = var_190_bool == 0; //@nz
		if(var_206_bool != 0) {
		} else {
			var_189_int = var_189_int + (int)1;
			goto Label_5738;
		}
	}
	var_207_bool = var_189_int == 0; //@nz
	if(var_207_bool != 0) {
		var_181_bool = 0;
		return 10;
	}
	var_191_int = 0;
	var_209_bool = var_189_int > (int)1;
	if(var_209_bool != 0) {
		irand(var_191_int, var_189_int);
	}
	var_211_int = var_191_int + (int)1;
	var_212_int = var_188_string + var_211_int;
	@@var_182_object:GetProperty(var_212_int, var_192_string);
	var_213_bool = 0; var_214_string = "";
	var_192_string = var_214_string;
	func_5803(var_213_bool, var_214_string);
	var_213_bool = var_181_bool;
	return 10;
	
}


func_6244()
{
	var_54_object = Obj(); var_55_object = Obj();
	SetVariable("d1q02", (int)2);
	func_7260(Obj());
	var_58_object = var_55_object;
	var_69_float = 0;
	func_5949(var_69_float);
	@@var_55_object:AddMark("d1q02AnnaGotoLaska", "pt_map_laska", (int)0, (int)508635, var_69_float);
	func_7063();
	var_95_bool = 0; var_96_string = ""; var_97_string = "";
	func_5937(var_95_bool, "quest_d1_02", "init_storojka");
	return 2;
}
EMIT "Stack[-1] = 0";


func_6763(var_514_bool)
{
	var_516_int = 0; var_517_string = "";
	func_5841(var_516_int, "ood2Anna1");
	var_519_bool = var_516_int == (int)0;
	if(var_519_bool != 0) {
		var_514_bool = 1;
		return 0;
	}
	var_514_bool = 0;
	return 0;
}


func_7277(var_124_object, var_125_string, var_126_float)
{
	var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0); var_130_object = Obj(); var_131_bool = 0; var_132_cvector = CVector(0,0,0); var_133_cvector = CVector(0,0,0); var_134_object = Obj(); var_135_bool = 0;
	GetMainOutdoorScene(var_134_object);
	var_136_bool = var_134_object == 0; //@ne
	if(var_136_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_134_object:GetLocator(var_125_string, var_135_bool, var_132_cvector, var_133_cvector);
	var_138_bool = var_135_bool == 0; //@nz
	if(var_138_bool != 0) {
		var_140_int = "Warning: outdoor scene locator " + var_125_string;
		var_142_int = var_140_int + " doesnt exist";
		Trace(var_142_int);
	}
	@@var_134_object:GetMap(var_124_object);
	var_143_bool = var_124_object == 0; //@ne
	if(var_143_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_145_float = GetByIndex(var_132_cvector, 0);
	var_146_float = GetByIndex(var_132_cvector, 2);
	@@var_124_object:SetMapParams(var_145_float, var_146_float, var_126_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_2669(var_0_object, var_544_int, var_545_object)
{
	var_547_object = Obj(); var_548_bool = 0; var_549_int = 0; var_550_bool = 0; var_551_object = Obj(); var_552_bool = 0; var_553_int = 0; var_554_bool = 0;
	var_0_object = var_545_object;
	var_555_bool = 0; var_556_object = Obj(); var_557_float = 0;
	var_545_object = var_556_object;
	func_5547(var_555_bool, var_556_object, (float)70.0);
	var_558_bool = var_555_bool == 0; //@nz
	if(var_558_bool != 0) {
		var_544_int = -2;
		return 8;
	}
	CreateDialog(var_551_object);
	var_559_int = 0;
	func_5995(var_559_int);
	@@var_551_object:SetNPCName(var_559_int);
	var_560_int = 0;
	func_5993(var_560_int);
	@@var_551_object:SetNPCDescription(var_560_int);
	var_561_string = "";
	func_5997(var_561_string);
	@@var_551_object:SetPhoto(var_561_string);
	var_562_string = "";
	func_5999(var_562_string);
	@@var_551_object:SetPhoto2(var_562_string);
	var_563_int = 0;
	func_7310(var_563_int);
	@@var_551_object:SetPlayerName(var_563_int);
	IsOverrideActive(var_552_bool);
	var_564_bool = var_552_bool;
	if(var_564_bool != 0) {
		var_544_int = -2;
		return 8;
	}
	DoDialog(var_551_object);
	var_565_bool = 0; var_566_object = Obj();
	func_5825(Obj());
	var_567_object = var_566_object;
	func_5634(var_565_bool, var_566_object);
	var_568_object = Obj(); var_569_object = Obj();
	var_545_object = var_568_object;
	var_551_object = var_569_object;
	TaskCall(9);
	func_2750(var_570_object, var_571_object, var_572_string, var_573_bool, var_568_object, var_569_object);
	TaskReturn();
	@@var_551_object:IsDialogEnd(var_554_bool);
	
Label_2732:
	var_644_bool = var_554_bool == 0; //@nz
	if(var_644_bool != 0) {
		sync();
		@@var_551_object:IsDialogEnd(var_554_bool);
		goto Label_2732;
	}
	var_545_object = Obj();
	func_5616();
	StopDialog(var_551_object);
	@@var_551_object:GetReturnValue((int)-1);
	var_553_int = var_544_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6775(var_262_bool)
{
	var_264_int = 0; var_265_string = "";
	func_5841(var_264_int, "KnowSgustok");
	var_267_bool = var_264_int == (int)1;
	if(var_267_bool != 0) {
		var_262_bool = 1;
		return 0;
	}
	var_262_bool = 0;
	return 0;
}


func_2174(var_0_object, var_473_int, var_474_object)
{
	var_476_object = Obj(); var_477_bool = 0; var_478_int = 0; var_479_bool = 0; var_480_object = Obj(); var_481_bool = 0; var_482_int = 0; var_483_bool = 0;
	var_0_object = var_474_object;
	var_484_bool = 0; var_485_object = Obj(); var_486_float = 0;
	var_474_object = var_485_object;
	func_5547(var_484_bool, var_485_object, (float)70.0);
	var_487_bool = var_484_bool == 0; //@nz
	if(var_487_bool != 0) {
		var_473_int = -2;
		return 8;
	}
	CreateDialog(var_480_object);
	var_488_int = 0;
	func_5995(var_488_int);
	@@var_480_object:SetNPCName(var_488_int);
	var_489_int = 0;
	func_5993(var_489_int);
	@@var_480_object:SetNPCDescription(var_489_int);
	var_490_string = "";
	func_5997(var_490_string);
	@@var_480_object:SetPhoto(var_490_string);
	var_491_string = "";
	func_5999(var_491_string);
	@@var_480_object:SetPhoto2(var_491_string);
	var_492_int = 0;
	func_7310(var_492_int);
	@@var_480_object:SetPlayerName(var_492_int);
	IsOverrideActive(var_481_bool);
	var_493_bool = var_481_bool;
	if(var_493_bool != 0) {
		var_473_int = -2;
		return 8;
	}
	DoDialog(var_480_object);
	var_494_bool = 0; var_495_object = Obj();
	func_5825(Obj());
	var_496_object = var_495_object;
	func_5634(var_494_bool, var_495_object);
	var_497_object = Obj(); var_498_object = Obj();
	var_474_object = var_497_object;
	var_480_object = var_498_object;
	TaskCall(7);
	func_2255(var_499_object, var_500_object, var_501_string, var_502_bool, var_497_object, var_498_object);
	TaskReturn();
	@@var_480_object:IsDialogEnd(var_483_bool);
	
Label_2237:
	var_540_bool = var_483_bool == 0; //@nz
	if(var_540_bool != 0) {
		sync();
		@@var_480_object:IsDialogEnd(var_483_bool);
		goto Label_2237;
	}
	var_474_object = Obj();
	func_5616();
	StopDialog(var_480_object);
	@@var_480_object:GetReturnValue((int)-1);
	var_482_int = var_473_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6272(var_100_object)
{
	var_101_object = Obj(); var_102_string = ""; var_103_float = 0;
	func_7260(Obj());
	var_104_object = var_101_object;
	func_7277(var_101_object, "pt_map_kapella", (float)2);
	var_124_object = Obj();
	func_7260(var_124_object);
	@@var_100_object:ShowMap(var_124_object);
	return 0;
}


func_6787(var_520_bool)
{
	var_522_int = 0; var_523_string = "";
	func_5841(var_522_int, "d2q01");
	var_525_bool = var_522_int == (int)1;
	if(var_525_bool != 0) {
		var_520_bool = 1;
		return 0;
	}
	var_520_bool = 0;
	return 0;
}


func_5256(var_0_object)
{
	var_47_bool = 0;
	func_5542(var_47_bool);
	var_50_bool = var_47_bool == 0; //@nz
	if(var_50_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_5265:
	func_5432();
	goto Label_5265;
}
EMIT "Return(); Pop(0)";


func_5772(var_271_string)
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


func_7310(var_130_int)
{
	var_131_int = 0; var_132_int = 0;
	GetVariable("branch", var_132_int);
	var_135_bool = var_132_int == (int)0;
	if(var_135_bool != 0) {
		var_130_int = 1;
		return 2;
	EMIT "GOTO 0x1c9d";
	}
	var_137_bool = var_132_int == (int)1;
	if(var_137_bool != 0) {
		var_130_int = 2;
		return 2;
	}
	var_130_int = 3;
	return 2;
}


func_6799(var_376_bool)
{
	var_378_int = 0; var_379_string = "";
	func_5841(var_378_int, "d1q02");
	var_381_bool = var_378_int == (int)2;
	if(var_381_bool != 0) {
		var_376_bool = 1;
		return 0;
	}
	var_376_bool = 0;
	return 0;
}


func_144(var_2_object, var_245_string)
{
	var_246_bool = 0;
	func_6001(var_246_bool);
	var_247_bool = var_246_bool == 0; //@nz
	if(var_247_bool != 0) {
		return 0;
	}
	var_248_bool = var_245_string == var_2_object;
	if(var_248_bool != 0) {
		return 0;
	}
	var_249_string = ""; var_250_bool = 0;
	var_245_string = var_249_string;
	var_252_bool = var_245_string == "";
	if(var_252_bool != 0) {
		var_250_bool = 0;
	} else {
		var_250_bool = 1;
	}
	func_5788(var_249_string, var_250_bool);
	var_2_object = var_245_string;
	return 0;
	
}


func_6288()
{
	SetVariable("ood4Anna1", (int)1);
	return 0;
}


func_4243(var_0_object, var_1_object, var_2_object, var_3_string, var_900_object, var_901_object)
{
	var_0_object = var_901_object;
	var_1_object = var_900_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_907_bool = 0;
		var_907_bool = 0;
		var_908_bool = 0; var_909_object = Obj();
		var_909_object = var_1_object;
		func_6703(var_909_object);
		var_914_bool = var_908_bool == 0; //@nz
		if(var_914_bool != 0) {
			var_915_bool = 0; var_916_object = Obj();
			var_916_object = var_1_object;
			func_6715(var_916_object);
			if(var_915_bool != 0) {
				var_907_bool = 1;
			}
		}
		if(var_907_bool != 0) {
			var_921_object = Obj(); var_922_object = Obj();
			var_921_object = var_1_object;
			var_922_object = var_0_object;
			func_6144();
			var_925_object = Obj(); var_926_object = Obj();
			var_925_object = var_1_object;
			var_926_object = var_0_object;
			func_6188();
			var_929_string = "";
			func_4386(var_901_object, "Adoration");
			@@@var_0_object:SetMessage((int)533560);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536195, (int)37969, (int)37968);
			var_941_bool = 0; var_942_object = Obj();
			var_942_object = var_1_object;
			func_6691(var_942_object);
			if(var_941_bool != 0) {
				@@@var_0_object:AddReply((int)536202, (int)37976, (int)37975);
			}
		} else {
				var_958_object = Obj(); var_959_object = Obj();
				var_958_object = var_1_object;
				var_959_object = var_0_object;
				func_6188();
				var_960_string = "";
				func_4386(var_901_object, "Neutral");
				@@@var_0_object:SetMessage((int)533564);
				@@@var_0_object:ClearReplies();
				var_962_bool = 0;
				var_962_bool = 0;
				var_963_bool = 0; var_964_object = Obj();
				var_964_object = var_1_object;
				func_6727(var_964_object);
				if(var_963_bool != 0) {
					var_969_bool = 0; var_970_object = Obj();
					var_970_object = var_1_object;
					func_6703(var_970_object);
					var_971_bool = var_969_bool == 0; //@nz
					if(var_971_bool != 0) {
						var_962_bool = 1;
					}
				}
				if(var_962_bool != 0) {
					@@@var_0_object:AddReply((int)533569, (int)35100, (int)35099);
				}
				var_975_bool = 0; var_976_object = Obj();
				var_976_object = var_1_object;
				func_6739(var_976_object);
				if(var_975_bool != 0) {
					@@@var_0_object:AddReply((int)533565, (int)35096, (int)35095);
				}
				@@@var_0_object:AddReply((int)533572, (int)-1, (int)35102);
				@@@var_0_object:AddReply((int)536201, (int)-1, (int)37974);
				goto Label_4356;
		}
	}
Label_4356:
	var_950_bool = 0;
	func_6001(var_950_bool);
	if(var_950_bool != 0) {

	Label_4360:
		lshWaitForAnimEnd();
		var_951_string = var_3_string;
		if(var_951_string != 0) {
		} else {
			var_952_string = "";
			var_952_string = var_2_object;
			func_5772(var_952_string);
			goto Label_4360;
	}
		PlayAnimation("all", "idle");

	Label_4375:
		WaitForAnimEnd();
		var_955_string = var_3_string;
		if(var_955_string != 0) {
			goto Label_4385;
		}
		PlayAnimation("all", "idle");
		goto Label_4375;

	}
	goto Label_4385;
	
Label_4385:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1097";


func_6294()
{
	SetVariable("d4q02AnnaGivesMedcine", (int)1);
	return 0;
}


func_5270(var_71_bool)
{
	var_72_object = Obj(); var_73_object = Obj();
	FindActor(var_73_object, "player");
	var_75_bool = var_73_object == 0; //@nz
	if(var_75_bool != 0) {
		var_71_bool = 0;
		return 2;
	}
	var_76_bool = 0; var_77_object = Obj();
	var_73_object = var_77_object;
	func_5533(var_76_bool, var_77_object);
	var_76_bool = var_71_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_6811(var_585_bool)
{
	var_587_int = 0; var_588_string = "";
	func_5841(var_587_int, "ood4Anna1");
	var_590_bool = var_587_int == (int)0;
	if(var_590_bool != 0) {
		var_585_bool = 1;
		return 0;
	}
	var_585_bool = 0;
	return 0;
}


func_5788(var_249_string, var_250_bool)
{
	var_253_bool = 0; var_254_float = 0; var_255_float = 0; var_256_bool = 0; var_257_float = 0; var_258_float = 0;
	lshHasAnimation(var_256_bool, var_249_string);
	var_259_bool = var_256_bool;
	if(var_259_bool != 0) {
		lshGetAnimTimes(var_249_string, var_257_float, var_258_float);
		lshPlayAnimation(var_257_float, var_258_float, var_250_bool);
	} else {
		var_261_int = "Can't find lsh animation : " + var_249_string;
		Trace(var_261_int);
	}
	return 6;
	
}


func_6300(var_65_object)
{
	var_66_object = Obj(); var_67_object = Obj();
	var_68_bool = 0;
	var_68_bool = 0;
	var_69_bool = 0;
	var_69_bool = 0;
	var_70_int = 0; var_71_string = "";
	func_5841(var_70_int, "d4q02AnnaGivesMedcine");
	var_75_bool = var_70_int == (int)1;
	if(var_75_bool != 0) {
		var_76_int = 0; var_77_string = "";
		func_5841(var_76_int, "d4q02JuliaGivesMedcine");
		var_79_bool = var_76_int == (int)1;
		if(var_79_bool != 0) {
			var_69_bool = 1;
		}
	}
	if(var_69_bool != 0) {
		var_80_int = 0; var_81_string = "";
		func_5841(var_80_int, "d4q02LaraGivesMedcine");
		var_83_bool = var_80_int == (int)1;
		if(var_83_bool != 0) {
			var_68_bool = 1;
		}
	}
	if(var_68_bool != 0) {
		SetVariable("d4q02", (int)2);
		func_7260(Obj());
		var_86_object = var_67_object;
		var_97_float = 0;
		func_5949(var_97_float);
		@@var_67_object:AddMark("d4q02BirdmaskNearHome", "pt_d4q02_birdmask", (int)0, (int)511842, var_97_float);
		var_100_bool = 0; var_101_string = ""; var_102_string = "";
		func_5937(var_100_bool, "quest_d4_02", "birdmask");
		var_106_object = Obj(); var_107_string = ""; var_108_float = 0;
		func_7260(Obj());
		var_109_object = var_106_object;
		func_7277(var_106_object, "pt_d4q02_birdmask", (float)2);
		var_129_object = Obj();
		func_7260(var_129_object);
		@@var_65_object:ShowMap(var_129_object);
		var_67_object = 0;
	}
	return 2;
}


func_7327(var_64_object)
{
	var_65_bool = GlobalVars[1];
	var_66_bool = var_65_bool == 0; //@nz
	if(var_66_bool != 0) {
		var_67_int = 0; var_68_object = Obj();
		var_64_object = var_68_object;
		TaskCall(0);
		func_0(var_69_object, var_67_int, var_68_object);
		TaskReturn();
		var_296_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_297_bool = 0; var_298_int = 0;
	func_5963(var_297_bool, (int)1);
	if(var_297_bool != 0) {
		var_300_int = 0; var_301_object = Obj();
		var_64_object = var_301_object;
		TaskCall(4);
		func_1033(var_302_object, var_300_int, var_301_object);
		TaskReturn();
		var_470_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
		return 0;
	}
	var_471_bool = 0; var_472_int = 0;
	func_5963(var_471_bool, (int)2);
	if(var_471_bool != 0) {
		var_473_int = 0; var_474_object = Obj();
		var_64_object = var_474_object;
		TaskCall(6);
		func_2174(var_475_object, var_473_int, var_474_object);
		TaskReturn();
		return 0;
	}
	var_542_bool = 0; var_543_int = 0;
	func_5963(var_542_bool, (int)4);
	if(var_542_bool != 0) {
		var_544_int = 0; var_545_object = Obj();
		var_64_object = var_545_object;
		TaskCall(8);
		func_2669(var_546_object, var_544_int, var_545_object);
		TaskReturn();
		return 0;
	}
	var_646_bool = 0; var_647_int = 0;
	func_5963(var_646_bool, (int)5);
	if(var_646_bool != 0) {
		var_648_int = 0; var_649_object = Obj();
		var_64_object = var_649_object;
		TaskCall(10);
		func_3346(var_650_object, var_648_int, var_649_object);
		TaskReturn();
		return 0;
	}
	var_755_bool = 0; var_756_int = 0;
	func_5963(var_755_bool, (int)6);
	if(var_755_bool != 0) {
		var_757_int = 0; var_758_object = Obj();
		var_64_object = var_758_object;
		TaskCall(2);
		func_338(var_759_object, var_757_int, var_758_object);
		TaskReturn();
		return 0;
	}
	var_874_bool = 0; var_875_int = 0;
	func_5963(var_874_bool, (int)9);
	if(var_874_bool != 0) {
		var_876_int = 0; var_877_object = Obj();
		var_64_object = var_877_object;
		TaskCall(12);
		func_4162(var_878_object, var_876_int, var_877_object);
		TaskReturn();
		return 0;
	}
	var_992_bool = 0; var_993_int = 0;
	func_5963(var_992_bool, (int)12);
	if(var_992_bool != 0) {
		var_994_int = 0; var_995_object = Obj();
		var_64_object = var_995_object;
		TaskCall(14);
		func_4787(var_996_object, var_994_int, var_995_object);
		TaskReturn();
		return 0;
	}
	var_1053_int = 0; var_1054_object = Obj();
	var_64_object = var_1054_object;
	TaskCall(16);
	func_5046(var_1055_object, var_1053_int, var_1054_object);
	TaskReturn();
	return 0;
}


func_5285(var_0_object)
{
	var_123_float = GetByIndex(var_0_object, 0);
	var_124_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_123_float, var_124_float);
	return 0;
}


func_6823(var_591_bool)
{
	var_593_int = 0; var_594_string = "";
	func_5841(var_593_int, "d4q02");
	var_596_bool = var_593_int == (int)1;
	if(var_596_bool != 0) {
		var_591_bool = 1;
		return 0;
	}
	var_591_bool = 0;
	return 0;
}


func_5290(var_54_bool)
{
	var_55_object = Obj(); var_56_bool = 0; var_57_object = Obj(); var_58_bool = 0;
	FindActor(var_57_object, "player");
	var_60_bool = var_57_object == 0; //@nz
	if(var_60_bool != 0) {
		var_54_bool = 0;
		return 4;
	}
	var_61_float = 0; var_62_object = Obj();
	var_57_object = var_62_object;
	func_5508(var_61_float, var_62_object);
	var_70_bool = var_61_float > (float)90000.0;
	if(var_70_bool != 0) {
		var_54_bool = 0;
		return 4;
	}
	CanSee(var_58_bool, var_57_object);
	var_58_bool = var_54_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_5803(var_173_bool, var_174_string)
{
	var_175_bool = 0; var_176_bool = 0;
	var_177_bool = 0;
	func_6001(var_177_bool);
	if(var_177_bool != 0) {
		lshHasSpeech(var_176_bool, var_174_string);
		var_178_bool = var_176_bool;
		if(var_178_bool != 0) {
			lshPlaySpeech(var_174_string);
			var_173_bool = 1;
			return 2;
		}
	}
	var_173_bool = 0;
	return 2;
}


func_6835(var_604_bool)
{
	var_606_int = 0; var_607_string = "";
	func_5841(var_606_int, "d4q02AnnaGivesMedcine");
	var_609_bool = var_606_int == (int)1;
	if(var_609_bool != 0) {
		var_604_bool = 1;
		return 0;
	}
	var_604_bool = 0;
	return 0;
}


func_4787(var_0_object, var_994_int, var_995_object)
{
	var_997_object = Obj(); var_998_bool = 0; var_999_int = 0; var_1000_bool = 0; var_1001_object = Obj(); var_1002_bool = 0; var_1003_int = 0; var_1004_bool = 0;
	var_0_object = var_995_object;
	var_1005_bool = 0; var_1006_object = Obj(); var_1007_float = 0;
	var_995_object = var_1006_object;
	func_5547(var_1005_bool, var_1006_object, (float)70.0);
	var_1008_bool = var_1005_bool == 0; //@nz
	if(var_1008_bool != 0) {
		var_994_int = -2;
		return 8;
	}
	CreateDialog(var_1001_object);
	var_1009_int = 0;
	func_5995(var_1009_int);
	@@var_1001_object:SetNPCName(var_1009_int);
	var_1010_int = 0;
	func_5993(var_1010_int);
	@@var_1001_object:SetNPCDescription(var_1010_int);
	var_1011_string = "";
	func_5997(var_1011_string);
	@@var_1001_object:SetPhoto(var_1011_string);
	var_1012_string = "";
	func_5999(var_1012_string);
	@@var_1001_object:SetPhoto2(var_1012_string);
	var_1013_int = 0;
	func_7310(var_1013_int);
	@@var_1001_object:SetPlayerName(var_1013_int);
	IsOverrideActive(var_1002_bool);
	var_1014_bool = var_1002_bool;
	if(var_1014_bool != 0) {
		var_994_int = -2;
		return 8;
	}
	DoDialog(var_1001_object);
	var_1015_bool = 0; var_1016_object = Obj();
	func_5825(Obj());
	var_1017_object = var_1016_object;
	func_5634(var_1015_bool, var_1016_object);
	var_1018_object = Obj(); var_1019_object = Obj();
	var_995_object = var_1018_object;
	var_1001_object = var_1019_object;
	TaskCall(15);
	func_4868(var_1020_object, var_1021_object, var_1022_string, var_1023_bool, var_1018_object, var_1019_object);
	TaskReturn();
	@@var_1001_object:IsDialogEnd(var_1004_bool);
	
Label_4850:
	var_1051_bool = var_1004_bool == 0; //@nz
	if(var_1051_bool != 0) {
		sync();
		@@var_1001_object:IsDialogEnd(var_1004_bool);
		goto Label_4850;
	}
	var_995_object = Obj();
	func_5616();
	StopDialog(var_1001_object);
	@@var_1001_object:GetReturnValue((int)-1);
	var_1003_int = var_994_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5818()
{
	var_49_bool = 0;
	func_6001(var_49_bool);
	if(var_49_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2750(var_0_object, var_1_object, var_2_object, var_3_string, var_568_object, var_569_object)
{
	var_0_object = var_569_object;
	var_1_object = var_568_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_575_string = "";
		func_2871(var_569_object, "Fear");
		@@@var_0_object:SetMessage((int)511344);
		@@@var_0_object:ClearReplies();
		var_584_bool = 0;
		var_584_bool = 0;
		var_585_bool = 0; var_586_object = Obj();
		var_586_object = var_1_object;
		func_6811(var_586_object);
		if(var_585_bool != 0) {
			var_591_bool = 0; var_592_object = Obj();
			var_592_object = var_1_object;
			func_6823(var_592_object);
			if(var_591_bool != 0) {
				var_584_bool = 1;
			}
		}
		if(var_584_bool != 0) {
			@@@var_0_object:AddReply((int)511346, (int)12544, (int)12543);
		}
		var_600_bool = 0;
		var_600_bool = 0;
		var_601_bool = 0;
		var_601_bool = 0;
		var_602_bool = 0; var_603_object = Obj();
		var_603_object = var_1_object;
		func_6823(var_603_object);
		if(var_602_bool != 0) {
			var_604_bool = 0; var_605_object = Obj();
			var_605_object = var_1_object;
			func_6835(var_605_object);
			var_610_bool = var_604_bool == 0; //@nz
			if(var_610_bool != 0) {
				var_601_bool = 1;
			}
		}
		if(var_601_bool != 0) {
			var_611_bool = 0; var_612_object = Obj();
			var_612_object = var_1_object;
			func_6811(var_612_object);
			var_613_bool = var_611_bool == 0; //@nz
			if(var_613_bool != 0) {
				var_600_bool = 1;
			}
		}
		if(var_600_bool != 0) {
			@@@var_0_object:AddReply((int)511473, (int)12680, (int)12679);
		}
		var_617_bool = 0;
		var_617_bool = 0;
		var_618_bool = 0; var_619_object = Obj();
		var_619_object = var_1_object;
		func_6859(var_619_object);
		if(var_618_bool != 0) {
			var_624_bool = 0; var_625_object = Obj();
			var_625_object = var_1_object;
			func_6847(var_625_object);
			if(var_624_bool != 0) {
				var_617_bool = 1;
			}
		}
		if(var_617_bool != 0) {
			@@@var_0_object:AddReply((int)511853, (int)13067, (int)13066);
		}
		@@@var_0_object:AddReply((int)511345, (int)-1, (int)12542);
		goto Label_2841;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xac2";
	}
Label_2841:
	var_636_bool = 0;
	func_6001(var_636_bool);
	if(var_636_bool != 0) {

	Label_2845:
		lshWaitForAnimEnd();
		var_637_string = var_3_string;
		if(var_637_string != 0) {
		} else {
			var_638_string = "";
			var_638_string = var_2_object;
			func_5772(var_638_string);
			goto Label_2845;
	}
		PlayAnimation("all", "idle");

	Label_2860:
		WaitForAnimEnd();
		var_641_string = var_3_string;
		if(var_641_string != 0) {
			goto Label_2870;
		}
		PlayAnimation("all", "idle");
		goto Label_2860;
	}
	goto Label_2870;
	
Label_2870:
	return 0;
	
}


func_6847(var_624_bool)
{
	var_626_int = 0; var_627_string = "";
	func_5841(var_626_int, "d4q02");
	var_629_bool = var_626_int == (int)1000;
	if(var_629_bool != 0) {
		var_624_bool = 1;
		return 0;
	}
	var_624_bool = 0;
	return 0;
}


func_5312()
{
	var_1111_float = 0; var_1112_float = 0;
	rand(var_1112_float, (int)8, (int)16);
	SetTimer((int)10, var_1112_float);
	return 2;
}


func_5825(var_141_object)
{
	var_142_object = Obj(); var_143_object = Obj();
	self(var_143_object);
	var_143_object = var_141_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5831(var_105_cvector, var_106_cvector)
{
	var_108_float = 0; var_109_float = 0;
	var_110_int = var_106_cvector | var_106_cvector;
	var_109_float = sqrt(var_110_int);
	var_111_float = 9.999999974752427e-07;
	var_112_bool = var_109_float < var_111_float;
	if(var_112_bool != 0) {
		var_105_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_105_cvector = var_106_cvector / var_109_float;
	return 2;
}


func_5321()
{
	KillTimer((int)10);
	return 0;
}


func_6859(var_618_bool)
{
	var_620_int = 0; var_621_string = "";
	func_5841(var_620_int, "ood4Anna2");
	var_623_bool = var_620_int == (int)0;
	if(var_623_bool != 0) {
		var_618_bool = 1;
		return 0;
	}
	var_618_bool = 0;
	return 0;
}


func_6655(var_340_bool)
{
	var_342_int = 0; var_343_string = "";
	func_5841(var_342_int, "d1q02");
	var_345_bool = var_342_int == (int)1;
	if(var_345_bool != 0) {
		var_340_bool = 1;
		return 0;
	}
	var_340_bool = 0;
	return 0;
}


func_2255(var_0_object, var_1_object, var_2_object, var_3_string, var_497_object, var_498_object)
{
	var_0_object = var_498_object;
	var_1_object = var_497_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_504_string = "";
		func_2327(var_498_object, "Neutral");
		@@@var_0_object:SetMessage((int)506624);
		@@@var_0_object:ClearReplies();
		var_513_bool = 0;
		var_513_bool = 0;
		var_514_bool = 0; var_515_object = Obj();
		var_515_object = var_1_object;
		func_6763(var_515_object);
		if(var_514_bool != 0) {
			var_520_bool = 0; var_521_object = Obj();
			var_521_object = var_1_object;
			func_6787(var_521_object);
			if(var_520_bool != 0) {
				var_513_bool = 1;
			}
		}
		if(var_513_bool != 0) {
			@@@var_0_object:AddReply((int)507217, (int)7952, (int)7953);
		}
		@@@var_0_object:AddReply((int)506626, (int)-1, (int)7295);
		goto Label_2297;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x8d3";
	}
Label_2297:
	var_532_bool = 0;
	func_6001(var_532_bool);
	if(var_532_bool != 0) {

	Label_2301:
		lshWaitForAnimEnd();
		var_533_string = var_3_string;
		if(var_533_string != 0) {
		} else {
			var_534_string = "";
			var_534_string = var_2_object;
			func_5772(var_534_string);
			goto Label_2301;
	}
		PlayAnimation("all", "idle");

	Label_2316:
		WaitForAnimEnd();
		var_537_string = var_3_string;
		if(var_537_string != 0) {
			goto Label_2326;
		}
		PlayAnimation("all", "idle");
		goto Label_2316;
	}
	goto Label_2326;
	
Label_2326:
	return 0;
	
}


func_5841(var_334_int, var_335_string)
{
	var_336_int = 0; var_337_int = 0;
	GetVariable(var_335_string, var_337_int);
	var_337_int = var_334_int;
	return 2;
}


func_5846(var_108_object, var_109_string)
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


func_6871(var_680_bool)
{
	var_682_int = 0; var_683_string = "";
	func_5841(var_682_int, "d5q02");
	var_685_bool = var_682_int == (int)0;
	if(var_685_bool != 0) {
		var_680_bool = 1;
		return 0;
	}
	var_680_bool = 0;
	return 0;
}


func_6368()
{
	SetVariable("ood4Anna2", (int)1);
	return 0;
}


func_5857(var_150_string, var_151_bool)
{
	var_152_object = Obj(); var_153_object = Obj();
	FindActor(var_153_object, var_150_string);
	var_154_bool = var_153_object == 0; //@nz
	if(var_154_bool != 0) {
		var_156_int = "Door " + var_150_string;
		var_158_int = var_156_int + " not found";
		Trace(var_158_int);
	} else {
		@@var_153_object:SetProperty("locked", var_151_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_6883(var_725_bool)
{
	var_727_int = 0; var_728_string = "";
	func_5841(var_727_int, "d5q02");
	var_730_bool = var_727_int == (int)2;
	if(var_730_bool != 0) {
		var_725_bool = 1;
		return 0;
	}
	var_725_bool = 0;
	return 0;
}


func_6374()
{
	var_54_object = Obj(); var_55_object = Obj();
	SetVariable("d5q02", (int)1);
	func_7260(Obj());
	var_58_object = var_55_object;
	var_69_float = 0;
	func_5949(var_69_float);
	@@var_55_object:AddMark("d5q02AnnaGotoGorbun", "pt_map_gorbun", (int)0, (int)515360, var_69_float);
	var_76_float = 0;
	func_5949(var_76_float);
	@@var_55_object:AddMark("d5q02AnnaGotoGorbunSelf", "pt_map_anna", (int)0, (int)515361, var_76_float);
	func_7102();
	func_7115();
	var_108_object = Obj(); var_109_string = "";
	func_5846(var_108_object, "quest_d5_02");
	var_116_bool = 0; var_117_string = ""; var_118_string = "";
	func_5937(var_116_bool, "quest_d5_02", "place_gorbun");
	return 2;
}
EMIT "Stack[-1] = 0";


func_6895(var_735_bool)
{
	var_737_int = 0; var_738_string = "";
	func_5841(var_737_int, "d5q02KnowNudeIsDead");
	var_740_bool = var_737_int == (int)1;
	if(var_740_bool != 0) {
		var_735_bool = 1;
		return 0;
	}
	var_735_bool = 0;
	return 0;
}


func_5874(var_106_int, var_107_int)
{
	var_108_object = Obj(); var_109_object = Obj();
	CreateIntVector(var_109_object);
	@@var_109_object:add(var_106_int);
	@@var_109_object:add(var_107_int);
	SendWorldWndMessage((int)3, var_109_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6907(var_332_bool)
{
	var_334_int = 0; var_335_string = "";
	func_5841(var_334_int, "ood1Anna1");
	var_339_bool = var_334_int == (int)0;
	if(var_339_bool != 0) {
		var_332_bool = 1;
		return 0;
	}
	var_332_bool = 0;
	return 0;
}


func_5886(var_146_object, var_147_int)
{
	var_148_int = 0; var_149_int = 0;
	var_150_object = Obj(); var_151_string = ""; var_152_int = 0;
	var_146_object = var_150_object;
	var_147_int = var_152_int;
	func_5516(var_150_object, "money", var_152_int);
	var_157_bool = var_147_int > (int)0;
	if(var_157_bool != 0) {
		GetInvItemByName(var_149_int, "Money");
		var_159_int = 0; var_160_int = 0;
		var_149_int = var_159_int;
		var_147_int = var_160_int;
		func_5874(var_159_int, var_160_int);
	}
	return 2;
}


func_4868(var_0_object, var_1_object, var_2_object, var_3_string, var_1018_object, var_1019_object)
{
	var_0_object = var_1019_object;
	var_1_object = var_1018_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1025_string = "";
		func_4931(var_1019_object, "Neutral");
		@@@var_0_object:SetMessage((int)535294);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535295, (int)36973, (int)36972);
		@@@var_0_object:AddReply((int)535302, (int)-1, (int)36980);
		@@@var_0_object:AddReply((int)535303, (int)-1, (int)36981);
		goto Label_4901;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1308";
	}
Label_4901:
	var_1043_bool = 0;
	func_6001(var_1043_bool);
	if(var_1043_bool != 0) {

	Label_4905:
		lshWaitForAnimEnd();
		var_1044_string = var_3_string;
		if(var_1044_string != 0) {
		} else {
			var_1045_string = "";
			var_1045_string = var_2_object;
			func_5772(var_1045_string);
			goto Label_4905;
	}
		PlayAnimation("all", "idle");

	Label_4920:
		WaitForAnimEnd();
		var_1048_string = var_3_string;
		if(var_1048_string != 0) {
			goto Label_4930;
		}
		PlayAnimation("all", "idle");
		goto Label_4920;
	}
	goto Label_4930;
	
Label_4930:
	return 0;
	
}


func_6919(var_397_bool)
{
	var_399_int = 0; var_400_string = "";
	func_5841(var_399_int, "ood1Anna2");
	var_402_bool = var_399_int == (int)0;
	if(var_402_bool != 0) {
		var_397_bool = 1;
		return 0;
	}
	var_397_bool = 0;
	return 0;
}


func_5905(var_95_object, var_96_object, var_97_int)
{
	var_98_int = 0; var_99_int = 0; var_100_bool = 0; var_101_int = 0; var_102_int = 0; var_103_bool = 0;
	@@var_96_object:GetItemID(var_101_int);
	GetInvItemProperty(var_102_int, var_101_int, "Category");
	@@var_95_object:AddItem(var_103_bool, var_96_object, var_102_int, var_97_int);
	var_105_bool = var_103_bool == 0; //@nz
	if(var_105_bool != 0) {
		@@var_95_object:DropItems(var_96_object, var_97_int);
	} else {
		var_106_int = 0; var_107_int = 0;
		var_101_int = var_106_int;
		var_97_int = var_107_int;
		func_5874(var_106_int, var_107_int);
	}
	return 6;
	
}


func_6418()
{
	var_164_object = Obj(); var_165_object = Obj();
	SetVariable("d5q02", (int)3);
	func_7260(Obj());
	var_168_object = var_165_object;
	var_173_float = 0;
	func_5949(var_173_float);
	@@var_165_object:AddMark("d5q02AnnaGotoKabak", "pt_map_andrei", (int)0, (int)515363, var_173_float);
	func_7128();
	return 2;
}
EMIT "Stack[-1] = 0";


func_6931(var_804_bool)
{
	var_806_int = 0; var_807_string = "";
	func_5841(var_806_int, "d6q01");
	var_809_bool = var_806_int == (int)0;
	if(var_809_bool != 0) {
		var_804_bool = 1;
		return 0;
	}
	var_804_bool = 0;
	return 0;
}


func_3346(var_0_object, var_648_int, var_649_object)
{
	var_651_object = Obj(); var_652_bool = 0; var_653_int = 0; var_654_bool = 0; var_655_object = Obj(); var_656_bool = 0; var_657_int = 0; var_658_bool = 0;
	var_0_object = var_649_object;
	var_659_bool = 0; var_660_object = Obj(); var_661_float = 0;
	var_649_object = var_660_object;
	func_5547(var_659_bool, var_660_object, (float)70.0);
	var_662_bool = var_659_bool == 0; //@nz
	if(var_662_bool != 0) {
		var_648_int = -2;
		return 8;
	}
	CreateDialog(var_655_object);
	var_663_int = 0;
	func_5995(var_663_int);
	@@var_655_object:SetNPCName(var_663_int);
	var_664_int = 0;
	func_5993(var_664_int);
	@@var_655_object:SetNPCDescription(var_664_int);
	var_665_string = "";
	func_5997(var_665_string);
	@@var_655_object:SetPhoto(var_665_string);
	var_666_string = "";
	func_5999(var_666_string);
	@@var_655_object:SetPhoto2(var_666_string);
	var_667_int = 0;
	func_7310(var_667_int);
	@@var_655_object:SetPlayerName(var_667_int);
	IsOverrideActive(var_656_bool);
	var_668_bool = var_656_bool;
	if(var_668_bool != 0) {
		var_648_int = -2;
		return 8;
	}
	DoDialog(var_655_object);
	var_669_bool = 0; var_670_object = Obj();
	func_5825(Obj());
	var_671_object = var_670_object;
	func_5634(var_669_bool, var_670_object);
	var_672_object = Obj(); var_673_object = Obj();
	var_649_object = var_672_object;
	var_655_object = var_673_object;
	TaskCall(11);
	func_3427(var_674_object, var_675_object, var_676_string, var_677_bool, var_672_object, var_673_object);
	TaskReturn();
	@@var_655_object:IsDialogEnd(var_658_bool);
	
Label_3409:
	var_753_bool = var_658_bool == 0; //@nz
	if(var_753_bool != 0) {
		sync();
		@@var_655_object:IsDialogEnd(var_658_bool);
		goto Label_3409;
	}
	var_649_object = Obj();
	func_5616();
	StopDialog(var_655_object);
	@@var_655_object:GetReturnValue((int)-1);
	var_657_int = var_648_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2327(var_2_object, var_504_string)
{
	var_505_bool = 0;
	func_6001(var_505_bool);
	var_506_bool = var_505_bool == 0; //@nz
	if(var_506_bool != 0) {
		return 0;
	}
	var_507_bool = var_504_string == var_2_object;
	if(var_507_bool != 0) {
		return 0;
	}
	var_508_string = ""; var_509_bool = 0;
	var_504_string = var_508_string;
	var_511_bool = var_504_string == "";
	if(var_511_bool != 0) {
		var_509_bool = 0;
	} else {
		var_509_bool = 1;
	}
	func_5788(var_508_string, var_509_bool);
	var_2_object = var_504_string;
	return 0;
	
}


func_6943(var_814_bool)
{
	var_816_int = 0; var_817_string = "";
	func_5841(var_816_int, "d6q01");
	var_819_bool = var_816_int == (int)1;
	if(var_819_bool != 0) {
		var_814_bool = 1;
		return 0;
	}
	var_814_bool = 0;
	return 0;
}


func_4386(var_2_object, var_929_string)
{
	var_930_bool = 0;
	func_6001(var_930_bool);
	var_931_bool = var_930_bool == 0; //@nz
	if(var_931_bool != 0) {
		return 0;
	}
	var_932_bool = var_929_string == var_2_object;
	if(var_932_bool != 0) {
		return 0;
	}
	var_933_string = ""; var_934_bool = 0;
	var_929_string = var_933_string;
	var_936_bool = var_929_string == "";
	if(var_936_bool != 0) {
		var_934_bool = 0;
	} else {
		var_934_bool = 1;
	}
	func_5788(var_933_string, var_934_bool);
	var_2_object = var_929_string;
	return 0;
	
}


func_5924(var_90_object, var_91_string, var_92_int)
{
	var_93_object = Obj(); var_94_object = Obj();
	CreateInvItem(var_94_object);
	@@var_94_object:SetItemName(var_91_string);
	var_95_object = Obj(); var_96_object = Obj(); var_97_int = 0;
	var_90_object = var_95_object;
	var_94_object = var_96_object;
	var_92_int = var_97_int;
	func_5905(var_95_object, var_96_object, var_97_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6441()
{
	SetVariable("ood1Anna1", (int)1);
	return 0;
}


func_6955(var_424_bool)
{
	var_426_int = 0; var_427_string = "";
	func_5841(var_426_int, "ood1Anna3");
	var_429_bool = var_426_int == (int)0;
	if(var_429_bool != 0) {
		var_424_bool = 1;
		return 0;
	}
	var_424_bool = 0;
	return 0;
}


func_6447()
{
	SetVariable("ood1Anna2", (int)1);
	return 0;
}


func_5937(var_116_bool, var_117_string, var_118_string)
{
	var_119_object = Obj(); var_120_object = Obj();
	FindActor(var_120_object, var_117_string);
	var_121_bool = var_120_object == 0; //@ne
	if(var_121_bool != 0) {
		var_116_bool = 0;
		return 2;
	}
	Trigger(var_120_object, var_118_string);
	var_116_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_6453()
{
	var_184_bool = 0;
	var_184_bool = 0;
	var_185_int = 0; var_186_string = "";
	func_5841(var_185_int, "d5q01");
	var_190_bool = var_185_int < (int)7;
	if(var_190_bool != 0) {
		var_191_int = 0; var_192_string = "";
		func_5841(var_191_int, "d5q01");
		var_194_bool = var_191_int != (int)-1;
		if(var_194_bool != 0) {
			var_184_bool = 1;
		}
	}
	if(var_184_bool != 0) {
		var_195_bool = 0; var_196_string = ""; var_197_string = "";
		func_5937(var_195_bool, "quest_d5_02", "place_girl");
	}
	return 0;
}


func_6967(var_798_bool)
{
	var_800_int = 0; var_801_string = "";
	func_5841(var_800_int, "ood6Anna1");
	var_803_bool = var_800_int == (int)0;
	if(var_803_bool != 0) {
		var_798_bool = 1;
		return 0;
	}
	var_798_bool = 0;
	return 0;
}


func_2871(var_2_object, var_575_string)
{
	var_576_bool = 0;
	func_6001(var_576_bool);
	var_577_bool = var_576_bool == 0; //@nz
	if(var_577_bool != 0) {
		return 0;
	}
	var_578_bool = var_575_string == var_2_object;
	if(var_578_bool != 0) {
		return 0;
	}
	var_579_string = ""; var_580_bool = 0;
	var_575_string = var_579_string;
	var_582_bool = var_575_string == "";
	if(var_582_bool != 0) {
		var_580_bool = 0;
	} else {
		var_580_bool = 1;
	}
	func_5788(var_579_string, var_580_bool);
	var_2_object = var_575_string;
	return 0;
	
}


func_5432()
{
	var_51_int = 0; var_52_int = 0; var_53_bool = 0; var_54_int = 0; var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_int = 0; var_59_bool = 0; var_60_int = 0; var_61_int = 0; var_62_bool = 0;
	WaitForAnimEnd();
	var_63_bool = 0;
	func_5542(var_63_bool);
	var_64_bool = var_63_bool == 0; //@nz
	if(var_64_bool != 0) {
		return 12;
	}
	func_5976((int)0);
	var_65_int = var_57_int;
	var_58_int = 0;
	
Label_5446:
	var_78_bool = 0;
	var_78_bool = 0;
	var_80_bool = var_58_int < (int)5;
	if(var_80_bool != 0) {
		var_81_bool = 0;
		func_5542(var_81_bool);
		if(var_81_bool != 0) {
			var_78_bool = 1;
		}
	}
	if(var_78_bool != 0) {
		var_82_bool = var_57_int == 0; //@nz
		if(var_82_bool != 0) {
			Sleep((int)3, var_59_bool);
			var_84_bool = var_59_bool == 0; //@nz
			if(var_84_bool != 0) {
			} else {
		} else {
				irand(var_60_int, var_57_int);
				irand(var_61_int, (int)5);
				var_90_bool = var_61_int != (int)0;
				if(var_90_bool != 0) {
					var_60_int = 0;
				}
				var_92_string = ""; var_93_int = 0;
				var_60_int = var_93_int;
				func_5969(var_92_string, var_93_int);
				PlayAnimation("all", var_92_string);
				WaitForAnimEnd(var_62_bool);
				var_94_bool = var_62_bool == 0; //@nz
				if(var_94_bool == 0) goto Label_5487;
				goto Label_5498;
		}
		Label_5487:
			var_85_bool = 0;
			func_5501(var_85_bool);
			var_86_bool = var_85_bool == 0; //@nz
			if(var_86_bool != 0) {
				goto Label_5498;
			}
			ResetAAS();
			var_58_int = var_58_int + (int)1;
			goto Label_5446;

		}
	}
Label_5498:
	ResetAAS();
	return 12;
	
}


func_5949(var_69_float)
{
	var_70_float = 0; var_71_float = 0;
	GetGameTime(var_71_float);
	var_71_float = var_69_float;
	return 2;
}


func_1342(var_2_object, var_350_string)
{
	var_351_bool = 0;
	func_6001(var_351_bool);
	var_352_bool = var_351_bool == 0; //@nz
	if(var_352_bool != 0) {
		return 0;
	}
	var_353_bool = var_350_string == var_2_object;
	if(var_353_bool != 0) {
		return 0;
	}
	var_354_string = ""; var_355_bool = 0;
	var_350_string = var_354_string;
	var_357_bool = var_350_string == "";
	if(var_357_bool != 0) {
		var_355_bool = 0;
	} else {
		var_355_bool = 1;
	}
	func_5788(var_354_string, var_355_bool);
	var_2_object = var_350_string;
	return 0;
	
}


func_5954(var_194_int)
{
	var_195_float = 0; var_196_float = 0;
	GetGameTime(var_196_float);
	var_198_int = 0;
	var_198_int = var_196_float / (int)24;
	var_194_int = (int)1 + var_198_int;
	return 2;
}


func_6979(var_820_bool)
{
	var_822_int = 0; var_823_string = "";
	func_5841(var_822_int, "ood6Anna2");
	var_825_bool = var_822_int == (int)0;
	if(var_825_bool != 0) {
		var_820_bool = 1;
		return 0;
	}
	var_820_bool = 0;
	return 0;
}


func_4931(var_2_object, var_1025_string)
{
	var_1026_bool = 0;
	func_6001(var_1026_bool);
	var_1027_bool = var_1026_bool == 0; //@nz
	if(var_1027_bool != 0) {
		return 0;
	}
	var_1028_bool = var_1025_string == var_2_object;
	if(var_1028_bool != 0) {
		return 0;
	}
	var_1029_string = ""; var_1030_bool = 0;
	var_1025_string = var_1029_string;
	var_1032_bool = var_1025_string == "";
	if(var_1032_bool != 0) {
		var_1030_bool = 0;
	} else {
		var_1030_bool = 1;
	}
	func_5788(var_1029_string, var_1030_bool);
	var_2_object = var_1025_string;
	return 0;
	
}


func_5963(var_297_bool, var_298_int)
{
	var_299_int = 0;
	func_5954(var_299_int);
	var_297_bool = var_299_int == var_298_int;
	return 0;
}


func_6478()
{
	SetVariable("ood1Anna3", (int)1);
	return 0;
}


func_6991(var_456_bool)
{
	var_458_int = 0; var_459_string = "";
	func_5841(var_458_int, "ood1Anna4");
	var_461_bool = var_458_int == (int)0;
	if(var_461_bool != 0) {
		var_456_bool = 1;
		return 0;
	}
	var_456_bool = 0;
	return 0;
}


func_5969(var_71_string, var_72_int)
{
	var_73_string = ""; var_74_string = "";
	var_75_int = var_72_int;
	if(var_75_int != 0) {
		"idle" = "idle" + var_72_int;
	}
	var_74_string = var_71_string;
	return 2;
}


func_338(var_0_object, var_757_int, var_758_object)
{
	var_760_object = Obj(); var_761_bool = 0; var_762_int = 0; var_763_bool = 0; var_764_object = Obj(); var_765_bool = 0; var_766_int = 0; var_767_bool = 0;
	var_0_object = var_758_object;
	var_768_bool = 0; var_769_object = Obj(); var_770_float = 0;
	var_758_object = var_769_object;
	func_5547(var_768_bool, var_769_object, (float)70.0);
	var_771_bool = var_768_bool == 0; //@nz
	if(var_771_bool != 0) {
		var_757_int = -2;
		return 8;
	}
	CreateDialog(var_764_object);
	var_772_int = 0;
	func_5995(var_772_int);
	@@var_764_object:SetNPCName(var_772_int);
	var_773_int = 0;
	func_5993(var_773_int);
	@@var_764_object:SetNPCDescription(var_773_int);
	var_774_string = "";
	func_5997(var_774_string);
	@@var_764_object:SetPhoto(var_774_string);
	var_775_string = "";
	func_5999(var_775_string);
	@@var_764_object:SetPhoto2(var_775_string);
	var_776_int = 0;
	func_7310(var_776_int);
	@@var_764_object:SetPlayerName(var_776_int);
	IsOverrideActive(var_765_bool);
	var_777_bool = var_765_bool;
	if(var_777_bool != 0) {
		var_757_int = -2;
		return 8;
	}
	DoDialog(var_764_object);
	var_778_bool = 0; var_779_object = Obj();
	func_5825(Obj());
	var_780_object = var_779_object;
	func_5634(var_778_bool, var_779_object);
	var_781_object = Obj(); var_782_object = Obj();
	var_758_object = var_781_object;
	var_764_object = var_782_object;
	TaskCall(3);
	func_419(var_783_object, var_784_object, var_785_string, var_786_bool, var_781_object, var_782_object);
	TaskReturn();
	@@var_764_object:IsDialogEnd(var_767_bool);
	
Label_401:
	var_872_bool = var_767_bool == 0; //@nz
	if(var_872_bool != 0) {
		sync();
		@@var_764_object:IsDialogEnd(var_767_bool);
		goto Label_401;
	}
	var_758_object = Obj();
	func_5616();
	StopDialog(var_764_object);
	@@var_764_object:GetReturnValue((int)-1);
	var_766_int = var_757_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6484()
{
	SetVariable("ood1Anna4", (int)1);
	return 0;
}


func_5976(var_65_int)
{
	var_66_int = 0; var_67_bool = 0; var_68_int = 0; var_69_bool = 0;
	var_68_int = 0;
	
Label_5978:
	var_71_string = ""; var_72_int = 0;
	var_68_int = var_72_int;
	func_5969(var_71_string, var_72_int);
	HasAnimation(var_69_bool, "all", var_71_string);
	var_76_bool = var_69_bool == 0; //@nz
	if(var_76_bool != 0) {
	} else {
		var_68_int = var_68_int + (int)1;
		goto Label_5978;
	}
	var_68_int = var_65_int;
	return 4;
	
}


func_6490()
{
	SetVariable("ood6Anna1", (int)1);
	return 0;
}


func_7003(var_832_bool)
{
	var_834_int = 0; var_835_string = "";
	func_5841(var_834_int, "microscope_d6q01_anna_blood");
	var_837_bool = var_834_int != (int)0;
	if(var_837_bool != 0) {
		var_832_bool = 1;
		return 0;
	}
	var_832_bool = 0;
	return 0;
}


func_6496()
{
	SetVariable("ood6Anna2", (int)1);
	return 0;
}


func_3427(var_0_object, var_1_object, var_2_object, var_3_string, var_672_object, var_673_object)
{
	var_0_object = var_673_object;
	var_1_object = var_672_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_679_bool = 0;
		var_679_bool = 0;
		var_680_bool = 0; var_681_object = Obj();
		var_681_object = var_1_object;
		func_6871(var_681_object);
		if(var_680_bool != 0) {
			var_686_bool = 0; var_687_object = Obj();
			var_687_object = var_1_object;
			func_6751(var_687_object);
			if(var_686_bool != 0) {
				var_679_bool = 1;
			}
		}
		if(var_679_bool != 0) {
			var_692_object = Obj(); var_693_object = Obj();
			var_692_object = var_1_object;
			var_693_object = var_0_object;
			func_6121();
			var_696_object = Obj(); var_697_object = Obj();
			var_696_object = var_1_object;
			var_697_object = var_0_object;
			func_6182();
			var_700_string = "";
			func_3553(var_673_object, "Adoration");
			@@@var_0_object:SetMessage((int)511872);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511873, (int)13087, (int)13086);
			@@@var_0_object:AddReply((int)515663, (int)16703, (int)16702);
		} else {
				var_723_string = "";
				func_3553(var_673_object, "Neutral");
				@@@var_0_object:SetMessage((int)511897);
				@@@var_0_object:ClearReplies();
				var_725_bool = 0; var_726_object = Obj();
				var_726_object = var_1_object;
				func_6883(var_726_object);
				if(var_725_bool != 0) {
					@@@var_0_object:AddReply((int)511898, (int)13115, (int)13114);
				}
				var_734_bool = 0;
				var_734_bool = 0;
				var_735_bool = 0; var_736_object = Obj();
				var_736_object = var_1_object;
				func_6895(var_736_object);
				if(var_735_bool != 0) {
					var_741_bool = 0; var_742_object = Obj();
					var_742_object = var_1_object;
					func_7051(var_742_object);
					if(var_741_bool != 0) {
						var_734_bool = 1;
					}
				}
				if(var_734_bool != 0) {
					@@@var_0_object:AddReply((int)511907, (int)13124, (int)13123);
				}
				@@@var_0_object:AddReply((int)511915, (int)-1, (int)13131);
				goto Label_3523;
		}
	}
Label_3523:
	var_715_bool = 0;
	func_6001(var_715_bool);
	if(var_715_bool != 0) {

	Label_3527:
		lshWaitForAnimEnd();
		var_716_string = var_3_string;
		if(var_716_string != 0) {
		} else {
			var_717_string = "";
			var_717_string = var_2_object;
			func_5772(var_717_string);
			goto Label_3527;
	}
		PlayAnimation("all", "idle");

	Label_3542:
		WaitForAnimEnd();
		var_720_string = var_3_string;
		if(var_720_string != 0) {
			goto Label_3552;
		}
		PlayAnimation("all", "idle");
		goto Label_3542;

	}
	goto Label_3552;
	
Label_3552:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xd67";


func_6502()
{
	var_74_object = Obj(); var_75_object = Obj();
	var_76_int = 0; var_77_string = "";
	func_5841(var_76_int, "d6q01KnowKillerIsKlara");
	var_81_bool = var_76_int == (int)0;
	if(var_81_bool != 0) {
		SetVariable("d6q01KnowKillerIsKlara", (int)1);
		func_7260(Obj());
		var_84_object = var_75_object;
		var_95_float = 0;
		func_5949(var_95_float);
		@@var_75_object:AddMark("d6q01KillerIsKlara", "pt_map_alexandr", (int)1, (int)515396, var_95_float);
		func_7167();
		var_121_bool = 0; var_122_string = ""; var_123_string = "";
		func_5937(var_121_bool, "quest_d6_01", "saburov_klara");
		var_75_object = 0;
	}
	return 2;
}


func_7015(var_838_bool)
{
	var_840_int = 0; var_841_string = "";
	func_5841(var_840_int, "d6q01");
	var_843_bool = var_840_int == (int)1000;
	if(var_843_bool != 0) {
		var_838_bool = 1;
		return 0;
	}
	var_838_bool = 0;
	return 0;
}


func_5993(var_127_int)
{
	var_127_int = 515530;
	return 0;
}


func_5995(var_126_int)
{
	var_126_int = 502856;
	return 0;
}


func_5997(var_128_string)
{
	var_128_string = "ui/NPC_Anna.png";
	return 0;
}


func_5999(var_129_string)
{
	var_129_string = "ui/NPC_Anna_b.png";
	return 0;
}


func_6001(var_121_bool)
{
	var_121_bool = 1;
	return 0;
}


func_7027(var_845_bool)
{
	var_847_int = 0; var_848_string = "";
	func_5841(var_847_int, "d6q01");
	var_850_bool = var_847_int == (int)-1;
	if(var_850_bool != 0) {
		var_845_bool = 1;
		return 0;
	}
	var_845_bool = 0;
	return 0;
}


func_6003()
{
	SetVariable("d1q02", (int)3);
	func_7076();
	return 0;
}


func_6012()
{
	SetVariable("KnowKapella", (int)1);
	return 0;
}


func_5501(var_85_bool)
{
	var_85_bool = 1;
	return 0;
}


func_7039(var_852_bool)
{
	var_854_int = 0; var_855_string = "";
	func_5841(var_854_int, "ood6Anna3");
	var_857_bool = var_854_int == (int)0;
	if(var_857_bool != 0) {
		var_852_bool = 1;
		return 0;
	}
	var_852_bool = 0;
	return 0;
}


func_5503()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_6018(var_196_object)
{
	Trace("beta_pills 5 is given");
	var_199_object = Obj(); var_200_string = ""; var_201_int = 0;
	var_196_object = var_199_object;
	func_5924(var_199_object, "beta_pills", (int)5);
	return 0;
}


func_5508(var_61_float, var_62_object)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0);
	GetPosition(var_66_cvector);
	@@var_62_object:GetPosition(var_67_cvector);
	var_68_cvector = var_67_cvector - var_66_cvector;
	var_61_float = var_68_cvector | var_68_cvector;
	return 6;
}


func_6537()
{
	SetVariable("KnowAnna", (int)1);
	return 0;
}


func_7051(var_741_bool)
{
	var_743_int = 0; var_744_string = "";
	func_5841(var_743_int, "ood5Anna1");
	var_746_bool = var_743_int == (int)0;
	if(var_746_bool != 0) {
		var_741_bool = 1;
		return 0;
	}
	var_741_bool = 0;
	return 0;
}


func_5516(var_150_object, var_151_string, var_152_int)
{
	var_153_int = 0; var_154_int = 0;
	@@var_150_object:GetProperty(var_151_string, var_154_int);
	var_155_int = var_154_int + var_152_int;
	@@var_150_object:SetProperty(var_151_string, var_155_int);
	return 2;
}


func_6029(var_143_object)
{
	Trace("money1000 is given");
	var_146_object = Obj(); var_147_int = 0;
	var_143_object = var_146_object;
	func_5886(var_146_object, (int)1000);
	return 0;
}


func_6543(var_127_object)
{
	func_7154();
	Trace("anna blood is given");
	var_138_object = Obj(); var_139_string = ""; var_140_int = 0;
	var_127_object = var_138_object;
	func_5924(var_138_object, "d6q01_anna_blood", (int)1);
	return 0;
}


func_5523(var_54_bool, var_55_cvector)
{
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_bool = 0;
	GetPosition(var_59_cvector);
	var_60_cvector = var_55_cvector - var_59_cvector;
	var_62_float = GetByIndex(var_60_cvector, 0);
	var_63_float = GetByIndex(var_60_cvector, 2);
	Rotate(var_62_float, var_63_float, var_61_bool);
	var_61_bool = var_54_bool;
	return 6;
}


func_6039()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_7063()
{
	var_72_object = Obj(); var_73_object = Obj();
	CreateDiaryEntry(var_73_object, (int)35, (int)2, (int)512117);
	var_77_bool = 0; var_78_object = Obj(); var_79_int = 0;
	var_73_object = var_78_object;
	func_7232(var_77_bool, var_78_object, (int)7);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6557()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_6045(var_191_object)
{
	Trace("gold_ring is given");
	var_194_object = Obj(); var_195_string = ""; var_196_int = 0;
	var_191_object = var_194_object;
	func_5924(var_194_object, "gold_ring", (int)1);
	return 0;
}


func_5533(var_50_bool, var_51_object)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	@@var_51_object:GetPosition(var_53_cvector);
	var_54_bool = 0; var_55_cvector = CVector(0,0,0);
	var_53_cvector = var_55_cvector;
	func_5523(var_54_bool, var_55_cvector);
	var_54_bool = var_50_bool;
	return 2;
}


func_419(var_0_object, var_1_object, var_2_object, var_3_string, var_781_object, var_782_object)
{
	var_0_object = var_782_object;
	var_1_object = var_781_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_788_string = "";
		func_549(var_782_object, "Adoration");
		@@@var_0_object:SetMessage((int)512719);
		@@@var_0_object:ClearReplies();
		var_797_bool = 0;
		var_797_bool = 0;
		var_798_bool = 0; var_799_object = Obj();
		var_799_object = var_1_object;
		func_6967(var_799_object);
		if(var_798_bool != 0) {
			var_804_bool = 0; var_805_object = Obj();
			var_805_object = var_1_object;
			func_6931(var_805_object);
			if(var_804_bool != 0) {
				var_797_bool = 1;
			}
		}
		if(var_797_bool != 0) {
			@@@var_0_object:AddReply((int)512720, (int)4261, (int)13913);
		}
		var_813_bool = 0;
		var_813_bool = 0;
		var_814_bool = 0; var_815_object = Obj();
		var_815_object = var_1_object;
		func_6943(var_815_object);
		if(var_814_bool != 0) {
			var_820_bool = 0; var_821_object = Obj();
			var_821_object = var_1_object;
			func_6979(var_821_object);
			if(var_820_bool != 0) {
				var_813_bool = 1;
			}
		}
		if(var_813_bool != 0) {
			@@@var_0_object:AddReply((int)512721, (int)13915, (int)13914);
		}
		var_829_bool = 0;
		var_829_bool = 0;
		var_830_bool = 0;
		var_830_bool = 0;
		var_831_bool = 0;
		var_831_bool = 0;
		var_832_bool = 0; var_833_object = Obj();
		var_833_object = var_1_object;
		func_7003(var_833_object);
		if(var_832_bool != 0) {
			var_838_bool = 0; var_839_object = Obj();
			var_839_object = var_1_object;
			func_7015(var_839_object);
			var_844_bool = var_838_bool == 0; //@nz
			if(var_844_bool != 0) {
				var_831_bool = 1;
			}
		}
		if(var_831_bool != 0) {
			var_845_bool = 0; var_846_object = Obj();
			var_846_object = var_1_object;
			func_7027(var_846_object);
			var_851_bool = var_845_bool == 0; //@nz
			if(var_851_bool != 0) {
				var_830_bool = 1;
			}
		}
		if(var_830_bool != 0) {
			var_852_bool = 0; var_853_object = Obj();
			var_853_object = var_1_object;
			func_7039(var_853_object);
			if(var_852_bool != 0) {
				var_829_bool = 1;
			}
		}
		if(var_829_bool != 0) {
			@@@var_0_object:AddReply((int)513747, (int)14993, (int)14992);
		}
		@@@var_0_object:AddReply((int)512728, (int)-1, (int)13921);
		goto Label_519;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1a7";
	}
Label_519:
	var_864_bool = 0;
	func_6001(var_864_bool);
	if(var_864_bool != 0) {

	Label_523:
		lshWaitForAnimEnd();
		var_865_string = var_3_string;
		if(var_865_string != 0) {
		} else {
			var_866_string = "";
			var_866_string = var_2_object;
			func_5772(var_866_string);
			goto Label_523;
	}
		PlayAnimation("all", "idle");

	Label_538:
		WaitForAnimEnd();
		var_869_string = var_3_string;
		if(var_869_string != 0) {
			goto Label_548;
		}
		PlayAnimation("all", "idle");
		goto Label_538;
	}
	goto Label_548;
	
Label_548:
	return 0;
	
}


func_6563()
{
	SetVariable("ood6Anna3", (int)1);
	return 0;
}


func_7076()
{
	var_133_object = Obj(); var_134_object = Obj();
	CreateDiaryEntry(var_134_object, (int)274, (int)2, (int)521236);
	var_138_bool = 0; var_139_object = Obj(); var_140_int = 0;
	var_134_object = var_139_object;
	func_7232(var_138_bool, var_139_object, (int)7);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5542(var_47_bool)
{
	var_48_bool = 0; var_49_bool = 0;
	IsLoaded(var_49_bool);
	var_49_bool = var_47_bool;
	return 2;
}


func_6056(var_238_object)
{
	var_239_object = Obj(); var_240_string = ""; var_241_float = 0;
	func_7260(Obj());
	var_242_object = var_239_object;
	func_7277(var_239_object, "pt_map_station", (float)2);
	var_243_object = Obj();
	func_7260(var_243_object);
	@@var_238_object:ShowMap(var_243_object);
	return 0;
}


func_6569(var_130_object)
{
	Trace("beta_pills is given");
	var_133_object = Obj(); var_134_string = ""; var_135_int = 0;
	var_130_object = var_133_object;
	func_5924(var_133_object, "beta_pills", (int)1);
	return 0;
}


func_5547(var_78_bool, var_79_object, var_80_float)
{
	var_81_float = 0; var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_bool = 0; var_89_bool = 0; var_90_float = 0; var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_bool = 0; var_98_bool = 0;
	@@var_79_object:GetPosition(var_91_cvector);
	@@var_79_object:GetEyesHeight(var_90_float);
	var_99_float = GetByIndex(var_91_cvector, 1);
	var_99_float = var_99_float + var_90_float;
	SetByIndex(var_91_cvector, 1) = var_99_float;
	GetPosition(var_92_cvector);
	GetEyesHeight(var_90_float);
	var_100_float = GetByIndex(var_92_cvector, 1);
	var_100_float = var_100_float + var_90_float;
	SetByIndex(var_92_cvector, 1) = var_100_float;
	var_93_cvector = var_91_cvector - var_92_cvector;
	var_101_float = GetByIndex(var_93_cvector, 1);
	SetByIndex(var_93_cvector, 1) = (float)0;
	var_102_int = var_93_cvector | var_93_cvector;
	var_103_float = sqrt(var_102_int);
	var_93_cvector = var_93_cvector / var_103_float;
	var_94_cvector = -var_93_cvector;
	var_104_float = var_93_cvector * var_80_float;
	var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0);
	var_106_cvector = var_94_cvector ^ CVector(0.0, 1.0, 0.0);
	func_5831(var_105_cvector, var_106_cvector);
	var_114_float = var_105_cvector * (int)25;
	var_115_int = var_104_float + var_114_float;
	var_95_cvector = var_115_int - CVector(0.0, 10.0, 0.0);
	var_96_cvector = var_92_cvector + var_95_cvector;
	IsOverrideActive(var_97_bool);
	var_117_bool = var_97_bool;
	if(var_117_bool != 0) {
		var_78_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_96_cvector, var_94_cvector, (bool)1);
	var_119_float = GetByIndex(var_95_cvector, 0);
	var_120_float = GetByIndex(var_95_cvector, 2);
	Rotate(var_119_float, var_120_float);
	var_121_bool = 0;
	func_6001(var_121_bool);
	if(var_121_bool != 0) {
	} else {
		HasAnimationTrack(var_98_bool, "head");
		var_123_bool = var_98_bool;
		if(var_123_bool == 0) goto Label_5610;
		LookAsyncCamera("head");
	}
Label_5610:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_78_bool = 1;
	return 18;
	
}


func_7089()
{
	var_76_object = Obj(); var_77_object = Obj();
	CreateDiaryEntry(var_77_object, (int)51, (int)1, (int)512133);
	var_81_bool = 0; var_82_object = Obj(); var_83_int = 0;
	var_77_object = var_82_object;
	func_7232(var_81_bool, var_82_object, (int)10);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6580(var_160_object)
{
	Trace("gamma_pills is given");
	var_163_object = Obj(); var_164_string = ""; var_165_int = 0;
	var_160_object = var_163_object;
	func_5924(var_163_object, "gamma_pills", (int)1);
	return 0;
}


func_5046(var_0_object, var_1053_int, var_1054_object)
{
	var_1056_object = Obj(); var_1057_bool = 0; var_1058_int = 0; var_1059_bool = 0; var_1060_object = Obj(); var_1061_bool = 0; var_1062_int = 0; var_1063_bool = 0;
	var_0_object = var_1054_object;
	var_1064_bool = 0; var_1065_object = Obj(); var_1066_float = 0;
	var_1054_object = var_1065_object;
	func_5547(var_1064_bool, var_1065_object, (float)70.0);
	var_1067_bool = var_1064_bool == 0; //@nz
	if(var_1067_bool != 0) {
		var_1053_int = -2;
		return 8;
	}
	CreateDialog(var_1060_object);
	var_1068_int = 0;
	func_5995(var_1068_int);
	@@var_1060_object:SetNPCName(var_1068_int);
	var_1069_int = 0;
	func_5993(var_1069_int);
	@@var_1060_object:SetNPCDescription(var_1069_int);
	var_1070_string = "";
	func_5997(var_1070_string);
	@@var_1060_object:SetPhoto(var_1070_string);
	var_1071_string = "";
	func_5999(var_1071_string);
	@@var_1060_object:SetPhoto2(var_1071_string);
	var_1072_int = 0;
	func_7310(var_1072_int);
	@@var_1060_object:SetPlayerName(var_1072_int);
	IsOverrideActive(var_1061_bool);
	var_1073_bool = var_1061_bool;
	if(var_1073_bool != 0) {
		var_1053_int = -2;
		return 8;
	}
	DoDialog(var_1060_object);
	var_1074_bool = 0; var_1075_object = Obj();
	func_5825(Obj());
	var_1076_object = var_1075_object;
	func_5634(var_1074_bool, var_1075_object);
	var_1077_object = Obj(); var_1078_object = Obj();
	var_1054_object = var_1077_object;
	var_1060_object = var_1078_object;
	TaskCall(17);
	func_5127(var_1079_object, var_1080_object, var_1081_string, var_1082_bool, var_1077_object, var_1078_object);
	TaskReturn();
	@@var_1060_object:IsDialogEnd(var_1063_bool);
	
Label_5109:
	var_1107_bool = var_1063_bool == 0; //@nz
	if(var_1107_bool != 0) {
		sync();
		@@var_1060_object:IsDialogEnd(var_1063_bool);
		goto Label_5109;
	}
	var_1054_object = Obj();
	func_5616();
	StopDialog(var_1060_object);
	@@var_1060_object:GetReturnValue((int)-1);
	var_1062_int = var_1053_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6072()
{
	var_229_object = Obj(); var_230_object = Obj();
	func_7260(Obj());
	var_231_object = var_230_object;
	var_236_float = 0;
	func_5949(var_236_float);
	@@var_230_object:AddMark("d1q01AnnaMapMarkMladVlad", "pt_map_mladvlad", (int)3, (int)508689, var_236_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7102()
{
	var_77_object = Obj(); var_78_object = Obj();
	CreateDiaryEntry(var_78_object, (int)148, (int)2, (int)515354);
	var_82_bool = 0; var_83_object = Obj(); var_84_int = 0;
	var_78_object = var_83_object;
	func_7232(var_82_bool, var_83_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6591(var_154_object)
{
	Trace("delta_pills is given");
	var_157_object = Obj(); var_158_string = ""; var_159_int = 0;
	var_154_object = var_157_object;
	func_5924(var_157_object, "delta_pills", (int)1);
	return 0;
}


func_6088(var_190_object)
{
	Trace("silver_ring is given");
	var_193_object = Obj(); var_194_string = ""; var_195_int = 0;
	var_190_object = var_193_object;
	func_5924(var_193_object, "silver_ring", (int)1);
	return 0;
}


func_6602()
{
	SetVariable("ood5Anna1", (int)1);
	return 0;
}


func_7115()
{
	var_100_object = Obj(); var_101_object = Obj();
	CreateDiaryEntry(var_101_object, (int)149, (int)2, (int)515355);
	var_105_bool = 0; var_106_object = Obj(); var_107_int = 0;
	var_101_object = var_106_object;
	func_7232(var_105_bool, var_106_object, (int)148);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6608(var_123_object)
{
	var_124_object = Obj(); var_125_string = ""; var_126_float = 0;
	func_7260(Obj());
	var_127_object = var_124_object;
	func_7277(var_124_object, "pt_map_gorbun", (float)2);
	var_147_object = Obj();
	func_7260(var_147_object);
	@@var_123_object:ShowMap(var_147_object);
	return 0;
}


func_6099(var_185_object)
{
	Trace("bracelet is given");
	var_188_object = Obj(); var_189_string = ""; var_190_int = 0;
	var_185_object = var_188_object;
	func_5924(var_188_object, "bracelet", (int)1);
	return 0;
}


func_7128()
{
	var_174_object = Obj(); var_175_object = Obj();
	CreateDiaryEntry(var_175_object, (int)151, (int)2, (int)515357);
	var_179_bool = 0; var_180_object = Obj(); var_181_int = 0;
	var_175_object = var_180_object;
	func_7232(var_179_bool, var_180_object, (int)148);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6110(var_164_object)
{
	Trace("beads is given");
	var_167_object = Obj(); var_168_string = ""; var_169_int = 0;
	var_164_object = var_167_object;
	func_5924(var_167_object, "beads", (int)1);
	return 0;
}


func_6624()
{
	var_150_string = ""; var_151_bool = 0;
	func_5857("lc_House6_05@door1", (bool)0);
	return 0;
}


func_3553(var_2_object, var_700_string)
{
	var_701_bool = 0;
	func_6001(var_701_bool);
	var_702_bool = var_701_bool == 0; //@nz
	if(var_702_bool != 0) {
		return 0;
	}
	var_703_bool = var_700_string == var_2_object;
	if(var_703_bool != 0) {
		return 0;
	}
	var_704_string = ""; var_705_bool = 0;
	var_700_string = var_704_string;
	var_707_bool = var_700_string == "";
	if(var_707_bool != 0) {
		var_705_bool = 0;
	} else {
		var_705_bool = 1;
	}
	func_5788(var_704_string, var_705_bool);
	var_2_object = var_700_string;
	return 0;
	
}


func_7141()
{
	var_185_object = Obj(); var_186_object = Obj();
	CreateDiaryEntry(var_186_object, (int)722, (int)1, (int)538786);
	var_190_bool = 0; var_191_object = Obj(); var_192_int = 0;
	var_186_object = var_191_object;
	func_7232(var_190_bool, var_191_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6631(var_436_bool)
{
	var_438_int = 0; var_439_string = "";
	func_5841(var_438_int, "d1q01");
	var_441_bool = var_438_int == (int)1000;
	if(var_441_bool != 0) {
		var_436_bool = 1;
		return 0;
	}
	var_436_bool = 0;
	return 0;
}


func_6121()
{
	SetVariable("d5AnnaVisit", (int)1);
	return 0;
}


func_6127()
{
	SetVariable("KnowShabnak", (int)1);
	return 0;
}


func_5616()
{
	var_289_bool = 0; var_290_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_292_bool = 0;
	func_6001(var_292_bool);
	if(var_292_bool != 0) {
	} else {
		HasAnimationTrack(var_290_bool, "head");
		var_294_bool = var_290_bool;
		if(var_294_bool == 0) goto Label_5633;
		UnlookAsync("head");
	}
Label_5633:
	return 2;
	
}


func_7154()
{
	var_129_object = Obj(); var_130_object = Obj();
	CreateDiaryEntry(var_130_object, (int)159, (int)1, (int)515392);
	var_134_bool = 0; var_135_object = Obj(); var_136_int = 0;
	var_130_object = var_135_object;
	func_7232(var_134_bool, var_135_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6643(var_391_bool)
{
	var_393_int = 0; var_394_string = "";
	func_5841(var_393_int, "d1q02");
	var_396_bool = var_393_int == (int)1000;
	if(var_396_bool != 0) {
		var_391_bool = 1;
		return 0;
	}
	var_391_bool = 0;
	return 0;
}


func_6133(var_137_object)
{
	Trace("burah_serum is given");
	var_140_object = Obj(); var_141_string = ""; var_142_int = 0;
	var_137_object = var_140_object;
	func_5924(var_140_object, "burah_serum", (int)1);
	return 0;
}


func_7167()
{
	var_98_object = Obj(); var_99_object = Obj();
	CreateDiaryEntry(var_99_object, (int)116, (int)1, (int)513739);
	var_103_bool = 0; var_104_object = Obj(); var_105_int = 0;
	var_99_object = var_104_object;
	func_7232(var_103_bool, var_104_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


