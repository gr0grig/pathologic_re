// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,GetInvItemProperty/3,CreateInvItem/1,SendWorldWndMessage/1,CreateFloatVector/1,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Fear|A:SetMessage|A:ClearReplies|A:AddReply|W:Neutral|W:Dream|W:all|W:idle|W:Adoration|W:Rage|W:player|A:GetPosition|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|W:Can't find lsh animation : |A:add|W:money|W:Money|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:reputation|W:ui/NPC_Anna.png|W:ui/NPC_Anna_b.png|W:pt_map_notkin|A:ShowMap|W:ook1Anna1|W:ook1Anna2|W:ook1Anna3|W:k1q03|W:k1q03AnnaGotoNotkin|A:AddMark|W:k2q04|W:k2q04AnnaGotoGatherer1|W:pt_map_gatherer1|W:k2q04AnnaGotoGatherer2|W:pt_map_gatherer2|W:k2q04AnnaGotoGatherer3|W:pt_map_gatherer3|W:alpha_pills 5 is given|W:alpha_pills|W:beta_pills 5 is given|W:beta_pills|W:k3q01|W:k3q01AnnaGotoMladVlad|W:pt_map_mladvlad|W:k3q01AnnaGotoKapella|W:pt_map_kapella|W:ook3Anna1|W:k3q03|W:k3q03AnnaGotoEva|W:pt_map_eva|W:ook6Anna1|W:k11q01SoulCount|W:ook11Anna1|W:playsound|W:givemoney|W:giveitem|W:money 1500 is given|W:mapmark|W:k1q01|W:k1q01Healed|W:k3q01KapellaAboutHan|W:k6q01|W:k6q01DankoPos|W:k11q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0xfd4
// @RUN_TASK: 16
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x126 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x4a0 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x6d5 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0xaa3 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xba1 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xcd7 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0xe48 vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0xfaa vars=int,int
// @TASK_16: vars=cvector params=0
// @EVENT_7: op=0x1020 vars=int
// @EVENT_6: op=0x1046 vars=
// @EVENT_5: op=0x1055 vars=
// @EVENT_45: op=0x1062 vars=bool
// @EVENT_0: op=0x106e vars=object
// @PE: 0x51,0x110,0x126,0x43c,0x48a,0x4a0,0x63c,0x6bf,0x6d5,0xa53,0xa8d,0xaa3,0xb35,0xb8b,0xba1,0xc79,0xcc1,0xcd7,0xdf3,0xe32,0xe48,0xf5a,0xf94,0xfaa,0x1020,0x1046,0x1062,0x1246,0x1295,0x12d0,0x12f8,0x1308,0x130f,0x1315,0x131b,0x133b,0x136d,0x1376,0x1381,0x13ac,0x13b5,0x13d5,0x13db,0x1413,0x1419,0x141f,0x1425,0x142f,0x1435,0x1441,0x144d,0x1459,0x1465,0x1471,0x147d,0x1489,0x1495,0x14a1,0x14ad,0x14b9,0x14c5,0x14d1,0x14dd,0x14e9,0x14f5,0x1501,0x150d,0x1519,0x1661

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_4655();
		var_46_bool = var_42_cvector == (int)26100;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_4897();
			var_98_object = Obj(); var_99_object = Obj();
			var_98_object = var_1_object;
			var_99_object = var_0_object;
			func_4856(var_99_object);
		}
		var_125_bool = var_42_cvector == (int)26104;
		if(var_125_bool != 0) {
			var_126_object = Obj(); var_127_object = Obj();
			var_126_object = var_1_object;
			var_127_object = var_0_object;
			func_4897();
			var_128_object = Obj(); var_129_object = Obj();
			var_128_object = var_1_object;
			var_129_object = var_0_object;
			func_4856(var_129_object);
		}
		var_131_bool = var_42_cvector == (int)44350;
		if(var_131_bool != 0) {
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_4923();
			var_144_object = Obj(); var_145_object = Obj();
			var_144_object = var_1_object;
			var_145_object = var_0_object;
			func_4872(var_145_object);
		}
		var_185_bool = var_42_cvector == (int)26113;
		if(var_185_bool != 0) {
			var_186_object = Obj(); var_187_object = Obj();
			var_186_object = var_1_object;
			var_187_object = var_0_object;
			func_4923();
			var_188_object = Obj(); var_189_object = Obj();
			var_188_object = var_1_object;
			var_189_object = var_0_object;
			func_5157(var_189_object);
			var_209_object = Obj(); var_210_object = Obj();
			var_209_object = var_1_object;
			var_210_object = var_0_object;
			func_5145();
		}
		var_214_bool = var_41_bool == (int)26029;
		if(var_214_bool != 0) {
			var_215_bool = 0;
			var_215_bool = 0;
			var_216_bool = 0; var_217_object = Obj();
			var_217_object = var_1_object;
			func_5173(var_217_object);
			if(var_216_bool != 0) {
				var_224_bool = 0; var_225_object = Obj();
				var_225_object = var_1_object;
				func_5185(var_225_object);
				if(var_224_bool != 0) {
					var_215_bool = 1;
				}
			}
			if(var_215_bool != 0) {
				var_230_object = Obj(); var_231_object = Obj();
				var_230_object = var_1_object;
				var_231_object = var_0_object;
				func_4879();
				var_234_string = "";
				func_272(var_42_cvector, "Fear");
				@@@var_0_object:SetMessage((int)524690);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)524691, (int)28130, (int)26030);
				@@@var_0_object:AddReply((int)542043, (int)44323, (int)44322);
				return 0;
			}
			var_258_bool = 0;
			var_258_bool = 0;
			var_259_bool = 0; var_260_object = Obj();
			var_260_object = var_1_object;
			func_5197(var_260_object);
			if(var_259_bool != 0) {
				var_265_bool = 0; var_266_object = Obj();
				var_266_object = var_1_object;
				func_5209(var_266_object);
				if(var_265_bool != 0) {
					var_258_bool = 1;
				}
			}
			if(var_258_bool != 0) {
				var_271_object = Obj(); var_272_object = Obj();
				var_271_object = var_1_object;
				var_272_object = var_0_object;
				func_4885();
				var_275_string = "";
				func_272(var_42_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)524707);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)524708, (int)28139, (int)26047);
				@@@var_0_object:AddReply((int)542053, (int)28139, (int)44336);
				return 0;
			}
			var_283_bool = 0; var_284_object = Obj();
			var_284_object = var_1_object;
			func_5221(var_284_object);
			if(var_283_bool != 0) {
				var_289_object = Obj(); var_290_object = Obj();
				var_289_object = var_1_object;
				var_290_object = var_0_object;
				func_4891();
				var_293_string = "";
				func_272(var_42_cvector, "Fear");
				@@@var_0_object:SetMessage((int)524780);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)526860, (int)28146, (int)28145);
				@@@var_0_object:AddReply((int)542054, (int)28146, (int)44338);
				return 0;
			}
			var_301_string = "";
			func_272(var_42_cvector, "Dream");
			@@@var_0_object:SetMessage((int)524709);
			@@@var_0_object:ClearReplies();
			var_303_bool = 0;
			var_303_bool = 0;
			var_304_bool = 0; var_305_object = Obj();
			var_305_object = var_1_object;
			func_5233(var_305_object);
			if(var_304_bool != 0) {
				var_310_bool = 0; var_311_object = Obj();
				var_311_object = var_1_object;
				func_5221(var_311_object);
				var_312_bool = var_310_bool == 0; //@nz
				if(var_312_bool != 0) {
					var_303_bool = 1;
				}
			}
			if(var_303_bool != 0) {
				@@@var_0_object:AddReply((int)524787, (int)26103, (int)26102);
			}
			var_316_bool = 0; var_317_object = Obj();
			var_317_object = var_1_object;
			func_5245(var_317_object);
			if(var_316_bool != 0) {
				@@@var_0_object:AddReply((int)524796, (int)28156, (int)26111);
			}
			@@@var_0_object:AddReply((int)524710, (int)-1, (int)26049);
			return 0;
		}
		var_329_bool = var_41_bool == (int)28156;
		if(var_329_bool != 0) {
			var_330_string = "";
			func_272(var_42_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)526870);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526871, (int)44381, (int)28157);
			@@@var_0_object:AddReply((int)542072, (int)44363, (int)44362);
			@@@var_0_object:AddReply((int)526872, (int)28155, (int)28158);
			return 0;
		}
		var_342_bool = var_41_bool == (int)44363;
		if(var_342_bool != 0) {
			var_343_string = "";
			func_272(var_42_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)542073);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542077, (int)26112, (int)44367);
			@@@var_0_object:AddReply((int)542078, (int)26112, (int)44368);
			return 0;
		}
		var_352_bool = var_41_bool == (int)44381;
		if(var_352_bool != 0) {
			@@@var_0_object:SetMessage((int)542087);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542088, (int)26112, (int)44382);
			@@@var_0_object:AddReply((int)542090, (int)26112, (int)44384);
			return 0;
		}
		var_361_bool = var_41_bool == (int)26112;
		if(var_361_bool != 0) {
			var_362_string = "";
			func_272(var_42_cvector, "Rage");
			@@@var_0_object:SetMessage((int)524797);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526868, (int)28155, (int)28154);
			return 0;
		}
		var_368_bool = var_41_bool == (int)28155;
		if(var_368_bool != 0) {
			var_369_string = "";
			func_272(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526869);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542062, (int)-1, (int)44350);
			@@@var_0_object:AddReply((int)542091, (int)44390, (int)44389);
			return 0;
		}
		var_378_bool = var_41_bool == (int)44390;
		if(var_378_bool != 0) {
			var_379_string = "";
			func_272(var_42_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)542092);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524798, (int)-1, (int)26113);
			return 0;
		}
		var_385_bool = var_41_bool == (int)26103;
		if(var_385_bool != 0) {
			var_386_string = "";
			func_272(var_42_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)524788);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524789, (int)-1, (int)26104);
			return 0;
		}
		var_392_bool = var_41_bool == (int)28146;
		if(var_392_bool != 0) {
			var_393_string = "";
			func_272(var_42_cvector, "Fear");
			@@@var_0_object:SetMessage((int)526861);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542064, (int)44355, (int)44352);
			@@@var_0_object:AddReply((int)542069, (int)44355, (int)44357);
			@@@var_0_object:AddReply((int)542070, (int)44364, (int)44358);
			return 0;
		}
		var_405_bool = var_41_bool == (int)44364;
		if(var_405_bool != 0) {
			var_406_string = "";
			func_272(var_42_cvector, "Dream");
			@@@var_0_object:SetMessage((int)542074);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542075, (int)-1, (int)44365);
			@@@var_0_object:AddReply((int)542076, (int)-1, (int)44366);
			return 0;
		}
		var_415_bool = var_41_bool == (int)44355;
		if(var_415_bool != 0) {
			var_416_string = "";
			func_272(var_42_cvector, "Rage");
			@@@var_0_object:SetMessage((int)542067);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542068, (int)44353, (int)44356);
			@@@var_0_object:AddReply((int)542071, (int)44353, (int)44359);
			return 0;
		}
		var_425_bool = var_41_bool == (int)44353;
		if(var_425_bool != 0) {
			var_426_string = "";
			func_272(var_42_cvector, "Rage");
			@@@var_0_object:SetMessage((int)542065);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526862, (int)28148, (int)28147);
			@@@var_0_object:AddReply((int)526865, (int)28148, (int)28150);
			return 0;
		}
		var_435_bool = var_41_bool == (int)28148;
		if(var_435_bool != 0) {
			var_436_string = "";
			func_272(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526863);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524783, (int)26099, (int)26098);
			@@@var_0_object:AddReply((int)542056, (int)26099, (int)44341);
			return 0;
		}
		var_445_bool = var_41_bool == (int)26099;
		if(var_445_bool != 0) {
			var_446_string = "";
			func_272(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)524784);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524785, (int)-1, (int)26100);
			@@@var_0_object:AddReply((int)524786, (int)-1, (int)26101);
			return 0;
		}
		var_455_bool = var_41_bool == (int)28139;
		if(var_455_bool != 0) {
			var_456_string = "";
			func_272(var_42_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)526854);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526855, (int)28142, (int)28140);
			@@@var_0_object:AddReply((int)526856, (int)-1, (int)28141);
			return 0;
		}
		var_465_bool = var_41_bool == (int)28142;
		if(var_465_bool != 0) {
			var_466_string = "";
			func_272(var_42_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)526857);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526858, (int)-1, (int)28143);
			@@@var_0_object:AddReply((int)526859, (int)-1, (int)28144);
			return 0;
		}
		var_475_bool = var_41_bool == (int)44323;
		if(var_475_bool != 0) {
			var_476_string = "";
			func_272(var_42_cvector, "Dream");
			@@@var_0_object:SetMessage((int)542044);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542045, (int)44327, (int)44324);
			@@@var_0_object:AddReply((int)542046, (int)28132, (int)44325);
			return 0;
		}
		var_485_bool = var_41_bool == (int)28130;
		if(var_485_bool != 0) {
			var_486_string = "";
			func_272(var_42_cvector, "Rage");
			@@@var_0_object:SetMessage((int)526845);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526846, (int)28132, (int)28131);
			@@@var_0_object:AddReply((int)542047, (int)44327, (int)44326);
			return 0;
		}
		var_495_bool = var_41_bool == (int)44327;
		if(var_495_bool != 0) {
			var_496_string = "";
			func_272(var_42_cvector, "Dream");
			@@@var_0_object:SetMessage((int)542048);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542050, (int)44333, (int)44331);
			return 0;
		}
		var_502_bool = var_41_bool == (int)44333;
		if(var_502_bool != 0) {
			var_503_string = "";
			func_272(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542051);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542052, (int)28134, (int)44334);
			return 0;
		}
		var_509_bool = var_41_bool == (int)28132;
		if(var_509_bool != 0) {
			var_510_string = "";
			func_272(var_42_cvector, "Rage");
			@@@var_0_object:SetMessage((int)526847);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526848, (int)28134, (int)28133);
			return 0;
		}
		var_516_bool = var_41_bool == (int)28134;
		if(var_516_bool != 0) {
			var_517_string = "";
			func_272(var_42_cvector, "Rage");
			@@@var_0_object:SetMessage((int)526849);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526850, (int)28136, (int)28135);
			return 0;
		}
		var_523_bool = var_41_bool == (int)28136;
		if(var_523_bool != 0) {
			var_524_string = "";
			func_272(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526851);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526852, (int)-1, (int)28137);
			@@@var_0_object:AddReply((int)526853, (int)-1, (int)28138);
			return 0;
		}
		var_3_string = true;
		var_532_bool = 0;
		func_4854(var_532_bool);
		if(var_532_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x127";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_4655();
		var_46_bool = var_42_cvector == (int)26722;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_4932();
		}
		var_101_bool = var_42_cvector == (int)26725;
		if(var_101_bool != 0) {
			var_102_object = Obj(); var_103_object = Obj();
			var_102_object = var_1_object;
			var_103_object = var_0_object;
			func_4973();
			var_114_object = Obj(); var_115_object = Obj();
			var_114_object = var_1_object;
			var_115_object = var_0_object;
			func_4982(var_115_object);
			var_138_object = Obj(); var_139_object = Obj();
			var_138_object = var_1_object;
			var_139_object = var_0_object;
			func_4993(var_139_object);
			var_144_object = Obj(); var_145_object = Obj();
			var_144_object = var_1_object;
			var_145_object = var_0_object;
			func_5151();
		}
		var_149_bool = var_42_cvector == (int)43965;
		if(var_149_bool != 0) {
			var_150_object = Obj(); var_151_object = Obj();
			var_150_object = var_1_object;
			var_151_object = var_0_object;
			func_4973();
			var_152_object = Obj(); var_153_object = Obj();
			var_152_object = var_1_object;
			var_153_object = var_0_object;
			func_4982(var_153_object);
			var_154_object = Obj(); var_155_object = Obj();
			var_154_object = var_1_object;
			var_155_object = var_0_object;
			func_4993(var_155_object);
			var_156_object = Obj(); var_157_object = Obj();
			var_156_object = var_1_object;
			var_157_object = var_0_object;
			func_5151();
		}
		var_159_bool = var_42_cvector == (int)43966;
		if(var_159_bool != 0) {
			var_160_object = Obj(); var_161_object = Obj();
			var_160_object = var_1_object;
			var_161_object = var_0_object;
			func_4973();
			var_162_object = Obj(); var_163_object = Obj();
			var_162_object = var_1_object;
			var_163_object = var_0_object;
			func_4982(var_163_object);
			var_164_object = Obj(); var_165_object = Obj();
			var_164_object = var_1_object;
			var_165_object = var_0_object;
			func_4993(var_165_object);
			var_166_object = Obj(); var_167_object = Obj();
			var_166_object = var_1_object;
			var_167_object = var_0_object;
			func_5151();
		}
		var_169_bool = var_41_bool == (int)26714;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_1162(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525346);
			@@@var_0_object:ClearReplies();
			var_188_bool = 0; var_189_object = Obj();
			var_189_object = var_1_object;
			func_5257(var_189_object);
			if(var_188_bool != 0) {
				@@@var_0_object:AddReply((int)525348, (int)44408, (int)26716);
			}
			var_199_bool = 0; var_200_object = Obj();
			var_200_object = var_1_object;
			func_5269(var_200_object);
			if(var_199_bool != 0) {
				@@@var_0_object:AddReply((int)541760, (int)43964, (int)43963);
			}
			@@@var_0_object:AddReply((int)525347, (int)-1, (int)26715);
			@@@var_0_object:AddReply((int)529145, (int)-1, (int)30591);
			return 0;
		}
		var_215_bool = var_41_bool == (int)43964;
		if(var_215_bool != 0) {
			var_216_string = "";
			func_1162(var_42_cvector, "Fear");
			@@@var_0_object:SetMessage((int)541761);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541762, (int)-1, (int)43965);
			@@@var_0_object:AddReply((int)541763, (int)-1, (int)43966);
			return 0;
		}
		var_225_bool = var_41_bool == (int)44408;
		if(var_225_bool != 0) {
			var_226_string = "";
			func_1162(var_42_cvector, "Rage");
			@@@var_0_object:SetMessage((int)542106);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542107, (int)44410, (int)44409);
			@@@var_0_object:AddReply((int)542110, (int)30593, (int)44412);
			return 0;
		}
		var_235_bool = var_41_bool == (int)44410;
		if(var_235_bool != 0) {
			var_236_string = "";
			func_1162(var_42_cvector, "Rage");
			@@@var_0_object:SetMessage((int)542108);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542109, (int)26717, (int)44411);
			@@@var_0_object:AddReply((int)542111, (int)30593, (int)44414);
			return 0;
		}
		var_245_bool = var_41_bool == (int)26717;
		if(var_245_bool != 0) {
			var_246_string = "";
			func_1162(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525349);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529146, (int)30593, (int)30592);
			@@@var_0_object:AddReply((int)529150, (int)30593, (int)30596);
			return 0;
		}
		var_255_bool = var_41_bool == (int)30593;
		if(var_255_bool != 0) {
			var_256_string = "";
			func_1162(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529147);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529148, (int)30595, (int)30594);
			return 0;
		}
		var_262_bool = var_41_bool == (int)30595;
		if(var_262_bool != 0) {
			var_263_string = "";
			func_1162(var_42_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)529149);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525350, (int)26719, (int)26718);
			@@@var_0_object:AddReply((int)542112, (int)26721, (int)44416);
			return 0;
		}
		var_272_bool = var_41_bool == (int)26719;
		if(var_272_bool != 0) {
			var_273_string = "";
			func_1162(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525351);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525352, (int)26721, (int)26720);
			@@@var_0_object:AddReply((int)525355, (int)26724, (int)26723);
			return 0;
		}
		var_282_bool = var_41_bool == (int)26724;
		if(var_282_bool != 0) {
			var_283_string = "";
			func_1162(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525356);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525357, (int)-1, (int)26725);
			return 0;
		}
		var_289_bool = var_41_bool == (int)26721;
		if(var_289_bool != 0) {
			var_290_string = "";
			func_1162(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525353);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525354, (int)-1, (int)26722);
			return 0;
		}
		var_3_string = true;
		var_295_bool = 0;
		func_4854(var_295_bool);
		if(var_295_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x4a1";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_4655();
		var_46_bool = var_42_cvector == (int)26779;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_5004();
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_object;
			var_96_object = var_0_object;
			func_5167();
		}
		var_100_bool = var_42_cvector == (int)40921;
		if(var_100_bool != 0) {
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_5004();
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_5167();
		}
		var_106_bool = var_42_cvector == (int)26801;
		if(var_106_bool != 0) {
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_5036();
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_object;
			func_5167();
		}
		var_122_bool = var_42_cvector == (int)26922;
		if(var_122_bool != 0) {
			var_123_object = Obj(); var_124_object = Obj();
			var_123_object = var_1_object;
			var_124_object = var_0_object;
			func_5045();
		}
		var_128_bool = var_42_cvector == (int)26924;
		if(var_128_bool != 0) {
			var_129_object = Obj(); var_130_object = Obj();
			var_129_object = var_1_object;
			var_130_object = var_0_object;
			func_5051();
		}
		var_158_bool = var_41_bool == (int)26810;
		if(var_158_bool != 0) {
			var_159_bool = 0; var_160_object = Obj();
			var_160_object = var_1_object;
			func_5317(var_160_object);
			if(var_159_bool != 0) {
				var_167_string = "";
				func_1727(var_42_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)525442);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)525443, (int)-1, (int)26811);
				@@@var_0_object:AddReply((int)529337, (int)-1, (int)30792);
				return 0;
			}
			var_191_string = "";
			func_1727(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525406);
			@@@var_0_object:ClearReplies();
			var_193_bool = 0; var_194_object = Obj();
			var_194_object = var_1_object;
			func_5281(var_194_object);
			if(var_193_bool != 0) {
				@@@var_0_object:AddReply((int)525407, (int)26776, (int)26775);
			}
			var_202_bool = 0;
			var_202_bool = 0;
			var_203_bool = 0; var_204_object = Obj();
			var_204_object = var_1_object;
			func_5305(var_204_object);
			if(var_203_bool != 0) {
				var_209_bool = 0; var_210_object = Obj();
				var_210_object = var_1_object;
				func_5293(var_210_object);
				if(var_209_bool != 0) {
					var_202_bool = 1;
				}
			}
			if(var_202_bool != 0) {
				@@@var_0_object:AddReply((int)525425, (int)40970, (int)26793);
			}
			var_218_bool = 0;
			var_218_bool = 0;
			var_219_bool = 0; var_220_object = Obj();
			var_220_object = var_1_object;
			func_5341(var_220_object);
			if(var_219_bool != 0) {
				var_225_bool = 0; var_226_object = Obj();
				var_226_object = var_1_object;
				func_5329(var_226_object);
				if(var_225_bool != 0) {
					var_218_bool = 1;
				}
			}
			if(var_218_bool != 0) {
				@@@var_0_object:AddReply((int)525575, (int)26923, (int)26922);
			}
			@@@var_0_object:AddReply((int)525412, (int)-1, (int)26780);
			@@@var_0_object:AddReply((int)538971, (int)-1, (int)40909);
			return 0;
		}
		var_241_bool = var_41_bool == (int)26923;
		if(var_241_bool != 0) {
			var_242_string = "";
			func_1727(var_42_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)525576);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538918, (int)40872, (int)40871);
			@@@var_0_object:AddReply((int)538922, (int)40872, (int)40875);
			return 0;
		}
		var_251_bool = var_41_bool == (int)40872;
		if(var_251_bool != 0) {
			var_252_string = "";
			func_1727(var_42_cvector, "Dream");
			@@@var_0_object:SetMessage((int)538919);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538920, (int)40874, (int)40873);
			return 0;
		}
		var_258_bool = var_41_bool == (int)40874;
		if(var_258_bool != 0) {
			var_259_string = "";
			func_1727(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538921);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539033, (int)40975, (int)40974);
			@@@var_0_object:AddReply((int)539035, (int)40975, (int)40976);
			return 0;
		}
		var_268_bool = var_41_bool == (int)40975;
		if(var_268_bool != 0) {
			var_269_string = "";
			func_1727(var_42_cvector, "Dream");
			@@@var_0_object:SetMessage((int)539034);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538923, (int)40878, (int)40877);
			@@@var_0_object:AddReply((int)538925, (int)40878, (int)40879);
			return 0;
		}
		var_278_bool = var_41_bool == (int)40878;
		if(var_278_bool != 0) {
			var_279_string = "";
			func_1727(var_42_cvector, "Dream");
			@@@var_0_object:SetMessage((int)538924);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525577, (int)-1, (int)26924);
			@@@var_0_object:AddReply((int)525614, (int)-1, (int)26961);
			return 0;
		}
		var_288_bool = var_41_bool == (int)40970;
		if(var_288_bool != 0) {
			var_289_string = "";
			func_1727(var_42_cvector, "Rage");
			@@@var_0_object:SetMessage((int)539029);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539030, (int)26794, (int)40971);
			@@@var_0_object:AddReply((int)539031, (int)26794, (int)40972);
			return 0;
		}
		var_298_bool = var_41_bool == (int)26794;
		if(var_298_bool != 0) {
			var_299_string = "";
			func_1727(var_42_cvector, "Fear");
			@@@var_0_object:SetMessage((int)525426);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525427, (int)40979, (int)26795);
			return 0;
		}
		var_305_bool = var_41_bool == (int)40979;
		if(var_305_bool != 0) {
			var_306_string = "";
			func_1727(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539036);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539037, (int)40982, (int)40980);
			@@@var_0_object:AddReply((int)539038, (int)40983, (int)40981);
			return 0;
		}
		var_315_bool = var_41_bool == (int)40983;
		if(var_315_bool != 0) {
			var_316_string = "";
			func_1727(var_42_cvector, "Rage");
			@@@var_0_object:SetMessage((int)539040);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539046, (int)40991, (int)40990);
			@@@var_0_object:AddReply((int)539048, (int)40996, (int)40992);
			return 0;
		}
		var_325_bool = var_41_bool == (int)40991;
		if(var_325_bool != 0) {
			var_326_string = "";
			func_1727(var_42_cvector, "Rage");
			@@@var_0_object:SetMessage((int)539047);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539041, (int)40996, (int)40984);
			return 0;
		}
		var_332_bool = var_41_bool == (int)40996;
		if(var_332_bool != 0) {
			var_333_string = "";
			func_1727(var_42_cvector, "Dream");
			@@@var_0_object:SetMessage((int)539051);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539052, (int)40999, (int)40998);
			return 0;
		}
		var_339_bool = var_41_bool == (int)40999;
		if(var_339_bool != 0) {
			var_340_string = "";
			func_1727(var_42_cvector, "Dream");
			@@@var_0_object:SetMessage((int)539053);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539054, (int)26796, (int)41000);
			@@@var_0_object:AddReply((int)539056, (int)26798, (int)41003);
			return 0;
		}
		var_349_bool = var_41_bool == (int)40982;
		if(var_349_bool != 0) {
			var_350_string = "";
			func_1727(var_42_cvector, "Dream");
			@@@var_0_object:SetMessage((int)539039);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539044, (int)40988, (int)40987);
			return 0;
		}
		var_356_bool = var_41_bool == (int)40988;
		if(var_356_bool != 0) {
			var_357_string = "";
			func_1727(var_42_cvector, "Rage");
			@@@var_0_object:SetMessage((int)539045);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539049, (int)40983, (int)40993);
			@@@var_0_object:AddReply((int)539050, (int)26796, (int)40994);
			return 0;
		}
		var_366_bool = var_41_bool == (int)26796;
		if(var_366_bool != 0) {
			var_367_string = "";
			func_1727(var_42_cvector, "Dream");
			@@@var_0_object:SetMessage((int)525428);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525429, (int)26798, (int)26797);
			@@@var_0_object:AddReply((int)539071, (int)41020, (int)41019);
			return 0;
		}
		var_376_bool = var_41_bool == (int)41020;
		if(var_376_bool != 0) {
			var_377_string = "";
			func_1727(var_42_cvector, "Dream");
			@@@var_0_object:SetMessage((int)539072);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539073, (int)26798, (int)41021);
			return 0;
		}
		var_383_bool = var_41_bool == (int)26798;
		if(var_383_bool != 0) {
			var_384_string = "";
			func_1727(var_42_cvector, "Dream");
			@@@var_0_object:SetMessage((int)525430);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525431, (int)26800, (int)26799);
			return 0;
		}
		var_390_bool = var_41_bool == (int)26800;
		if(var_390_bool != 0) {
			var_391_string = "";
			func_1727(var_42_cvector, "Fear");
			@@@var_0_object:SetMessage((int)525432);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538913, (int)40867, (int)40866);
			@@@var_0_object:AddReply((int)539074, (int)41024, (int)41023);
			return 0;
		}
		var_400_bool = var_41_bool == (int)41024;
		if(var_400_bool != 0) {
			var_401_string = "";
			func_1727(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539075);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539076, (int)41026, (int)41025);
			return 0;
		}
		var_407_bool = var_41_bool == (int)41026;
		if(var_407_bool != 0) {
			var_408_string = "";
			func_1727(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539077);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539078, (int)41029, (int)41027);
			return 0;
		}
		var_414_bool = var_41_bool == (int)41029;
		if(var_414_bool != 0) {
			var_415_string = "";
			func_1727(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539080);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539081, (int)41028, (int)41030);
			return 0;
		}
		var_421_bool = var_41_bool == (int)40867;
		if(var_421_bool != 0) {
			var_422_string = "";
			func_1727(var_42_cvector, "Fear");
			@@@var_0_object:SetMessage((int)538914);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525434, (int)41028, (int)26802);
			@@@var_0_object:AddReply((int)538915, (int)41028, (int)40868);
			return 0;
		}
		var_431_bool = var_41_bool == (int)41028;
		if(var_431_bool != 0) {
			var_432_string = "";
			func_1727(var_42_cvector, "Fear");
			@@@var_0_object:SetMessage((int)539079);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525433, (int)-1, (int)26801);
			var_437_bool = 0; var_438_object = Obj();
			var_438_object = var_1_object;
			func_5317(var_438_object);
			if(var_437_bool != 0) {
				@@@var_0_object:AddReply((int)538917, (int)-1, (int)40870);
			}
			return 0;
		}
		var_443_bool = var_41_bool == (int)26776;
		if(var_443_bool != 0) {
			var_444_string = "";
			func_1727(var_42_cvector, "Fear");
			@@@var_0_object:SetMessage((int)525408);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525409, (int)40903, (int)26777);
			return 0;
		}
		var_450_bool = var_41_bool == (int)40903;
		if(var_450_bool != 0) {
			var_451_string = "";
			func_1727(var_42_cvector, "Fear");
			@@@var_0_object:SetMessage((int)538965);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538966, (int)40905, (int)40904);
			@@@var_0_object:AddReply((int)538972, (int)40905, (int)40910);
			return 0;
		}
		var_460_bool = var_41_bool == (int)40905;
		if(var_460_bool != 0) {
			var_461_string = "";
			func_1727(var_42_cvector, "Dream");
			@@@var_0_object:SetMessage((int)538967);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538968, (int)40907, (int)40906);
			return 0;
		}
		var_467_bool = var_41_bool == (int)40907;
		if(var_467_bool != 0) {
			var_468_string = "";
			func_1727(var_42_cvector, "Dream");
			@@@var_0_object:SetMessage((int)538969);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538970, (int)40912, (int)40908);
			return 0;
		}
		var_474_bool = var_41_bool == (int)40912;
		if(var_474_bool != 0) {
			var_475_string = "";
			func_1727(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538973);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538974, (int)40914, (int)40913);
			@@@var_0_object:AddReply((int)538977, (int)40917, (int)40916);
			return 0;
		}
		var_484_bool = var_41_bool == (int)40917;
		if(var_484_bool != 0) {
			var_485_string = "";
			func_1727(var_42_cvector, "Fear");
			@@@var_0_object:SetMessage((int)538978);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538979, (int)40914, (int)40918);
			return 0;
		}
		var_491_bool = var_41_bool == (int)40914;
		if(var_491_bool != 0) {
			var_492_string = "";
			func_1727(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538975);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525411, (int)-1, (int)26779);
			@@@var_0_object:AddReply((int)538980, (int)26778, (int)40920);
			return 0;
		}
		var_501_bool = var_41_bool == (int)26778;
		if(var_501_bool != 0) {
			var_502_string = "";
			func_1727(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525410);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538981, (int)-1, (int)40921);
			return 0;
		}
		var_3_string = true;
		var_507_bool = 0;
		func_4854(var_507_bool);
		if(var_507_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x6d6";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_4655();
		var_46_bool = var_41_bool == (int)26821;
		if(var_46_bool != 0) {
			var_47_string = "";
			func_2701(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525465);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526257, (int)27533, (int)27531);
			@@@var_0_object:AddReply((int)525466, (int)-1, (int)26822);
			return 0;
		}
		var_72_bool = var_41_bool == (int)27533;
		if(var_72_bool != 0) {
			var_73_string = "";
			func_2701(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526259);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526260, (int)-1, (int)27534);
			@@@var_0_object:AddReply((int)526261, (int)-1, (int)27535);
			return 0;
		}
		var_3_string = true;
		var_81_bool = 0;
		func_4854(var_81_bool);
		if(var_81_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xaa4";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_4655();
		var_46_bool = var_42_cvector == (int)27372;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_5077();
		}
		var_52_bool = var_42_cvector == (int)27374;
		if(var_52_bool != 0) {
			var_53_object = Obj(); var_54_object = Obj();
			var_53_object = var_1_object;
			var_54_object = var_0_object;
			func_5083();
		}
		var_79_bool = var_42_cvector == (int)43967;
		if(var_79_bool != 0) {
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_object;
			func_5083();
		}
		var_83_bool = var_41_bool == (int)27371;
		if(var_83_bool != 0) {
			var_84_string = "";
			func_2955(var_42_cvector, "Fear");
			@@@var_0_object:SetMessage((int)526085);
			@@@var_0_object:ClearReplies();
			var_102_bool = 0;
			var_102_bool = 0;
			var_103_bool = 0;
			var_103_bool = 0;
			var_104_bool = 0; var_105_object = Obj();
			var_105_object = var_1_object;
			func_5353(var_105_object);
			if(var_104_bool != 0) {
				var_112_bool = 0; var_113_object = Obj();
				var_113_object = var_1_object;
				func_5365(var_113_object);
				if(var_112_bool != 0) {
					var_103_bool = 1;
				}
			}
			if(var_103_bool != 0) {
				var_118_bool = 0; var_119_object = Obj();
				var_119_object = var_1_object;
				func_5377(var_119_object);
				if(var_118_bool != 0) {
					var_102_bool = 1;
				}
			}
			if(var_102_bool != 0) {
				@@@var_0_object:AddReply((int)526086, (int)27373, (int)27372);
			}
			@@@var_0_object:AddReply((int)526089, (int)-1, (int)27375);
			@@@var_0_object:AddReply((int)528861, (int)-1, (int)30283);
			return 0;
		}
		var_134_bool = var_41_bool == (int)27373;
		if(var_134_bool != 0) {
			var_135_string = "";
			func_2955(var_42_cvector, "Fear");
			@@@var_0_object:SetMessage((int)526087);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528862, (int)30285, (int)30284);
			return 0;
		}
		var_141_bool = var_41_bool == (int)30285;
		if(var_141_bool != 0) {
			var_142_string = "";
			func_2955(var_42_cvector, "Dream");
			@@@var_0_object:SetMessage((int)528863);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526088, (int)-1, (int)27374);
			@@@var_0_object:AddReply((int)541764, (int)-1, (int)43967);
			return 0;
		}
		var_3_string = true;
		var_150_bool = 0;
		func_4854(var_150_bool);
		if(var_150_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xba2";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_4655();
		var_46_bool = var_42_cvector == (int)28892;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_5139();
		}
		var_52_bool = var_42_cvector == (int)28904;
		if(var_52_bool != 0) {
			var_53_object = Obj(); var_54_object = Obj();
			var_53_object = var_1_object;
			var_54_object = var_0_object;
			func_5088();
		}
		var_136_bool = var_41_bool == (int)28889;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_3265(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527548);
			@@@var_0_object:ClearReplies();
			var_155_bool = 0;
			var_155_bool = 0;
			var_156_bool = 0; var_157_object = Obj();
			var_157_object = var_1_object;
			func_5389(var_157_object);
			if(var_156_bool != 0) {
				var_164_bool = 0; var_165_object = Obj();
				var_165_object = var_1_object;
				func_5401(var_165_object);
				if(var_164_bool != 0) {
					var_155_bool = 1;
				}
			}
			if(var_155_bool != 0) {
				@@@var_0_object:AddReply((int)527551, (int)28893, (int)28892);
			}
			@@@var_0_object:AddReply((int)527550, (int)-1, (int)28891);
			return 0;
		}
		var_177_bool = var_41_bool == (int)28893;
		if(var_177_bool != 0) {
			var_178_string = "";
			func_3265(var_42_cvector, "Dream");
			@@@var_0_object:SetMessage((int)527552);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527553, (int)28895, (int)28894);
			@@@var_0_object:AddReply((int)527564, (int)28906, (int)28905);
			return 0;
		}
		var_187_bool = var_41_bool == (int)28906;
		if(var_187_bool != 0) {
			var_188_string = "";
			func_3265(var_42_cvector, "Dream");
			@@@var_0_object:SetMessage((int)527565);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527566, (int)28897, (int)28907);
			return 0;
		}
		var_194_bool = var_41_bool == (int)28895;
		if(var_194_bool != 0) {
			var_195_string = "";
			func_3265(var_42_cvector, "Rage");
			@@@var_0_object:SetMessage((int)527554);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527555, (int)28897, (int)28896);
			return 0;
		}
		var_201_bool = var_41_bool == (int)28897;
		if(var_201_bool != 0) {
			var_202_string = "";
			func_3265(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527556);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527557, (int)28899, (int)28898);
			return 0;
		}
		var_208_bool = var_41_bool == (int)28899;
		if(var_208_bool != 0) {
			var_209_string = "";
			func_3265(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527558);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527559, (int)28901, (int)28900);
			return 0;
		}
		var_215_bool = var_41_bool == (int)28901;
		if(var_215_bool != 0) {
			var_216_string = "";
			func_3265(var_42_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)527560);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527561, (int)28903, (int)28902);
			return 0;
		}
		var_222_bool = var_41_bool == (int)28903;
		if(var_222_bool != 0) {
			var_223_string = "";
			func_3265(var_42_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)527562);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527563, (int)-1, (int)28904);
			return 0;
		}
		var_3_string = true;
		var_228_bool = 0;
		func_4854(var_228_bool);
		if(var_228_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xcd8";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	if((int)1 != 0) {
		func_4655();
		var_46_bool = var_41_bool == (int)41246;
		if(var_46_bool != 0) {
			var_47_string = "";
			func_3634(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539303);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542544, (int)44940, (int)44939);
			@@@var_0_object:AddReply((int)539304, (int)-1, (int)41247);
			@@@var_0_object:AddReply((int)542543, (int)-1, (int)44938);
			return 0;
		}
		var_75_bool = var_41_bool == (int)44940;
		if(var_75_bool != 0) {
			var_76_string = "";
			func_3634(var_42_cvector, "Dream");
			@@@var_0_object:SetMessage((int)542545);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542553, (int)44954, (int)44950);
			@@@var_0_object:AddReply((int)542554, (int)44952, (int)44951);
			return 0;
		}
		var_85_bool = var_41_bool == (int)44952;
		if(var_85_bool != 0) {
			var_86_string = "";
			func_3634(var_42_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)542555);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542556, (int)44954, (int)44953);
			return 0;
		}
		var_92_bool = var_41_bool == (int)44954;
		if(var_92_bool != 0) {
			var_93_string = "";
			func_3634(var_42_cvector, "Dream");
			@@@var_0_object:SetMessage((int)542557);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542558, (int)44957, (int)44956);
			return 0;
		}
		var_99_bool = var_41_bool == (int)44957;
		if(var_99_bool != 0) {
			var_100_string = "";
			func_3634(var_42_cvector, "Adoration");
			@@@var_0_object:SetMessage((int)542559);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542560, (int)44962, (int)44958);
			@@@var_0_object:AddReply((int)542561, (int)44960, (int)44959);
			return 0;
		}
		var_109_bool = var_41_bool == (int)44960;
		if(var_109_bool != 0) {
			var_110_string = "";
			func_3634(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542562);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542563, (int)44962, (int)44961);
			return 0;
		}
		var_116_bool = var_41_bool == (int)44962;
		if(var_116_bool != 0) {
			var_117_string = "";
			func_3634(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542564);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542565, (int)44966, (int)44964);
			@@@var_0_object:AddReply((int)542566, (int)-1, (int)44965);
			return 0;
		}
		var_126_bool = var_41_bool == (int)44966;
		if(var_126_bool != 0) {
			var_127_string = "";
			func_3634(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542567);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542568, (int)-1, (int)44967);
			@@@var_0_object:AddReply((int)542569, (int)-1, (int)44968);
			return 0;
		}
		var_3_string = true;
		var_135_bool = 0;
		func_4854(var_135_bool);
		if(var_135_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xe49";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_cvector)
{
	if((int)1 != 0) {
		func_4655();
		var_46_bool = var_41_int == (int)42548;
		if(var_46_bool != 0) {
			var_47_string = "";
			func_3988(var_42_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540539);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540540, (int)-1, (int)42549);
			@@@var_0_object:AddReply((int)540799, (int)-1, (int)42848);
			return 0;
		}
		var_3_string = true;
		var_71_bool = 0;
		func_4854(var_71_bool);
		if(var_71_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xfab";
	
}


task_16_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_int)
{
	var_43_bool = var_41_int == (int)10;
	if(var_43_bool != 0) {
		func_4124();
		var_45_bool = 0;
		var_45_bool = 0;
		var_46_bool = 0;
		func_4379(var_46_bool);
		if(var_46_bool != 0) {
			var_49_bool = 0;
			func_4093(var_49_bool);
			if(var_49_bool != 0) {
				var_45_bool = 1;
			}
		}
		if(var_45_bool != 0) {
			var_66_bool = 0;
			func_4073(var_66_bool);
			if(var_66_bool != 0) {
				var_85_bool = 0; var_86_object = Obj();
				func_4662(Obj());
				var_87_object = var_86_object;
				func_4529(var_85_bool, var_86_object);
			}
		} else {
			func_4088(var_41_int);
			func_4115();
		}
	}
	return 0;
	
}


task_16_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	func_4306();
	func_4124();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_16_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	StopGroup0();
	func_4124();
	var_42_string = "";
	func_4609("Neutral");
	func_4115();
	return 0;
}


task_16_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_bool)
{
	var_42_bool = var_41_bool;
	if(var_42_bool != 0) {
		func_4115();
	} else {
		var_48_string = "";
		func_4609("Neutral");
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
		func_4306();
		var_45_bool = 0; var_46_object = Obj();
		var_41_object = var_46_object;
		func_4370(var_45_bool, var_46_object);
		EventEnable(0);
		var_59_object = Obj();
		var_41_object = var_59_object;
		func_5729(var_59_object);
		var_894_string = "";
		func_4609("Neutral");
		func_4124();
		func_4115();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	var_41_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_4059(var_40_cvector);
	return 0;
}


func_0(var_0_object, var_291_int, var_292_object)
{
	var_294_object = Obj(); var_295_bool = 0; var_296_int = 0; var_297_bool = 0; var_298_object = Obj(); var_299_bool = 0; var_300_int = 0; var_301_bool = 0;
	var_0_object = var_292_object;
	var_302_bool = 0; var_303_object = Obj(); var_304_float = 0;
	var_292_object = var_303_object;
	func_4384(var_302_bool, var_303_object, (float)70.0);
	var_305_bool = var_302_bool == 0; //@nz
	if(var_305_bool != 0) {
		var_291_int = -2;
		return 8;
	}
	CreateDialog(var_298_object);
	var_306_int = 0;
	func_4848(var_306_int);
	@@var_298_object:SetNPCName(var_306_int);
	var_307_int = 0;
	func_4846(var_307_int);
	@@var_298_object:SetNPCDescription(var_307_int);
	var_308_string = "";
	func_4850(var_308_string);
	@@var_298_object:SetPhoto(var_308_string);
	var_309_string = "";
	func_4852(var_309_string);
	@@var_298_object:SetPhoto2(var_309_string);
	var_310_int = 0;
	func_5712(var_310_int);
	@@var_298_object:SetPlayerName(var_310_int);
	IsOverrideActive(var_299_bool);
	var_311_bool = var_299_bool;
	if(var_311_bool != 0) {
		var_291_int = -2;
		return 8;
	}
	DoDialog(var_298_object);
	var_312_bool = 0; var_313_object = Obj();
	func_4662(Obj());
	var_314_object = var_313_object;
	func_4471(var_312_bool, var_313_object);
	var_315_object = Obj(); var_316_object = Obj();
	var_292_object = var_315_object;
	var_298_object = var_316_object;
	TaskCall(1);
	func_81(var_317_object, var_318_object, var_319_string, var_320_bool, var_315_object, var_316_object);
	TaskReturn();
	@@var_298_object:IsDialogEnd(var_301_bool);
	
Label_63:
	var_434_bool = var_301_bool == 0; //@nz
	if(var_434_bool != 0) {
		sync();
		@@var_298_object:IsDialogEnd(var_301_bool);
		goto Label_63;
	}
	var_292_object = Obj();
	func_4453();
	StopDialog(var_298_object);
	@@var_298_object:GetReturnValue((int)-1);
	var_300_int = var_291_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4609(var_262_string)
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


func_5634(var_67_bool, var_68_object, var_69_int)
{
	var_70_object = Obj(); var_71_object = Obj(); var_72_int = 0; var_73_object = Obj(); var_74_object = Obj(); var_75_int = 0;
	func_5621(Obj());
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


func_2562(var_0_object, var_62_int, var_63_object)
{
	var_65_object = Obj(); var_66_bool = 0; var_67_int = 0; var_68_bool = 0; var_69_object = Obj(); var_70_bool = 0; var_71_int = 0; var_72_bool = 0;
	var_0_object = var_63_object;
	var_73_bool = 0; var_74_object = Obj(); var_75_float = 0;
	var_63_object = var_74_object;
	func_4384(var_73_bool, var_74_object, (float)70.0);
	var_120_bool = var_73_bool == 0; //@nz
	if(var_120_bool != 0) {
		var_62_int = -2;
		return 8;
	}
	CreateDialog(var_69_object);
	var_121_int = 0;
	func_4848(var_121_int);
	@@var_69_object:SetNPCName(var_121_int);
	var_122_int = 0;
	func_4846(var_122_int);
	@@var_69_object:SetNPCDescription(var_122_int);
	var_123_string = "";
	func_4850(var_123_string);
	@@var_69_object:SetPhoto(var_123_string);
	var_124_string = "";
	func_4852(var_124_string);
	@@var_69_object:SetPhoto2(var_124_string);
	var_125_int = 0;
	func_5712(var_125_int);
	@@var_69_object:SetPlayerName(var_125_int);
	IsOverrideActive(var_70_bool);
	var_133_bool = var_70_bool;
	if(var_133_bool != 0) {
		var_62_int = -2;
		return 8;
	}
	DoDialog(var_69_object);
	var_134_bool = 0; var_135_object = Obj();
	func_4662(Obj());
	var_136_object = var_135_object;
	func_4471(var_134_bool, var_135_object);
	var_229_object = Obj(); var_230_object = Obj();
	var_63_object = var_229_object;
	var_69_object = var_230_object;
	TaskCall(7);
	func_2643(var_231_object, var_232_object, var_233_string, var_234_bool, var_229_object, var_230_object);
	TaskReturn();
	@@var_69_object:IsDialogEnd(var_72_bool);
	
Label_2625:
	var_278_bool = var_72_bool == 0; //@nz
	if(var_278_bool != 0) {
		sync();
		@@var_69_object:IsDialogEnd(var_72_bool);
		goto Label_2625;
	}
	var_63_object = Obj();
	func_4453();
	StopDialog(var_69_object);
	@@var_69_object:GetReturnValue((int)-1);
	var_71_int = var_62_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4625(var_240_string, var_241_bool)
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


func_5139()
{
	SetVariable("ook11Anna1", (int)1);
	return 0;
}


func_4115()
{
	var_896_float = 0; var_897_float = 0;
	rand(var_897_float, (int)8, (int)16);
	SetTimer((int)10, var_897_float);
	return 2;
}


func_5145()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_4124()
{
	KillTimer((int)10);
	return 0;
}


func_5662(var_53_object)
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


func_5151()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_4640(var_168_bool, var_169_string)
{
	var_170_bool = 0; var_171_bool = 0;
	var_172_bool = 0;
	func_4854(var_172_bool);
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


func_5157(var_188_object)
{
	Trace("money 1500 is given");
	var_191_object = Obj(); var_192_int = 0;
	var_188_object = var_191_object;
	func_4706(var_191_object, (int)1500);
	return 0;
}


func_3112(var_0_object, var_708_int, var_709_object)
{
	var_711_object = Obj(); var_712_bool = 0; var_713_int = 0; var_714_bool = 0; var_715_object = Obj(); var_716_bool = 0; var_717_int = 0; var_718_bool = 0;
	var_0_object = var_709_object;
	var_719_bool = 0; var_720_object = Obj(); var_721_float = 0;
	var_709_object = var_720_object;
	func_4384(var_719_bool, var_720_object, (float)70.0);
	var_722_bool = var_719_bool == 0; //@nz
	if(var_722_bool != 0) {
		var_708_int = -2;
		return 8;
	}
	CreateDialog(var_715_object);
	var_723_int = 0;
	func_4848(var_723_int);
	@@var_715_object:SetNPCName(var_723_int);
	var_724_int = 0;
	func_4846(var_724_int);
	@@var_715_object:SetNPCDescription(var_724_int);
	var_725_string = "";
	func_4850(var_725_string);
	@@var_715_object:SetPhoto(var_725_string);
	var_726_string = "";
	func_4852(var_726_string);
	@@var_715_object:SetPhoto2(var_726_string);
	var_727_int = 0;
	func_5712(var_727_int);
	@@var_715_object:SetPlayerName(var_727_int);
	IsOverrideActive(var_716_bool);
	var_728_bool = var_716_bool;
	if(var_728_bool != 0) {
		var_708_int = -2;
		return 8;
	}
	DoDialog(var_715_object);
	var_729_bool = 0; var_730_object = Obj();
	func_4662(Obj());
	var_731_object = var_730_object;
	func_4471(var_729_bool, var_730_object);
	var_732_object = Obj(); var_733_object = Obj();
	var_709_object = var_732_object;
	var_715_object = var_733_object;
	TaskCall(11);
	func_3193(var_734_object, var_735_object, var_736_string, var_737_bool, var_732_object, var_733_object);
	TaskReturn();
	@@var_715_object:IsDialogEnd(var_718_bool);
	
Label_3175:
	var_775_bool = var_718_bool == 0; //@nz
	if(var_775_bool != 0) {
		sync();
		@@var_715_object:IsDialogEnd(var_718_bool);
		goto Label_3175;
	}
	var_709_object = Obj();
	func_4453();
	StopDialog(var_715_object);
	@@var_715_object:GetReturnValue((int)-1);
	var_717_int = var_708_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4655()
{
	var_44_bool = 0;
	func_4854(var_44_bool);
	if(var_44_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_5167()
{
	TriggerWorld("playsound", "mapmark");
	return 0;
}


func_5679(var_100_object, var_101_string, var_102_float)
{
	var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_object = Obj(); var_107_bool = 0; var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_object = Obj(); var_111_bool = 0;
	GetMainOutdoorScene(var_110_object);
	var_112_bool = var_110_object == 0; //@ne
	if(var_112_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_110_object:GetLocator(var_101_string, var_111_bool, var_108_cvector, var_109_cvector);
	var_114_bool = var_111_bool == 0; //@nz
	if(var_114_bool != 0) {
		var_116_int = "Warning: outdoor scene locator " + var_101_string;
		var_118_int = var_116_int + " doesnt exist";
		Trace(var_118_int);
	}
	@@var_110_object:GetMap(var_100_object);
	var_119_bool = var_100_object == 0; //@ne
	if(var_119_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_121_float = GetByIndex(var_108_cvector, 0);
	var_122_float = GetByIndex(var_108_cvector, 2);
	@@var_100_object:SetMapParams(var_121_float, var_122_float, var_102_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_3634(var_2_object, var_810_string)
{
	var_811_bool = 0;
	func_4854(var_811_bool);
	var_812_bool = var_811_bool == 0; //@nz
	if(var_812_bool != 0) {
		return 0;
	}
	var_813_bool = var_810_string == var_2_object;
	if(var_813_bool != 0) {
		return 0;
	}
	var_814_string = ""; var_815_bool = 0;
	var_810_string = var_814_string;
	var_817_bool = var_810_string == "";
	if(var_817_bool != 0) {
		var_815_bool = 0;
	} else {
		var_815_bool = 1;
	}
	func_4625(var_814_string, var_815_bool);
	var_2_object = var_810_string;
	return 0;
	
}


func_5173(var_323_bool)
{
	var_325_int = 0; var_326_string = "";
	func_4689(var_325_int, "k1q01");
	var_330_bool = var_325_int == (int)4;
	if(var_330_bool != 0) {
		var_323_bool = 1;
		return 0;
	}
	var_323_bool = 0;
	return 0;
}


func_4662(var_136_object)
{
	var_137_object = Obj(); var_138_object = Obj();
	self(var_138_object);
	var_138_object = var_136_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1084(var_0_object, var_1_object, var_2_object, var_3_string, var_462_object, var_463_object)
{
	var_0_object = var_463_object;
	var_1_object = var_462_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_469_string = "";
		func_1162(var_463_object, "Neutral");
		@@@var_0_object:SetMessage((int)525346);
		@@@var_0_object:ClearReplies();
		var_478_bool = 0; var_479_object = Obj();
		var_479_object = var_1_object;
		func_5257(var_479_object);
		if(var_478_bool != 0) {
			@@@var_0_object:AddReply((int)525348, (int)44408, (int)26716);
		}
		var_487_bool = 0; var_488_object = Obj();
		var_488_object = var_1_object;
		func_5269(var_488_object);
		if(var_487_bool != 0) {
			@@@var_0_object:AddReply((int)541760, (int)43964, (int)43963);
		}
		@@@var_0_object:AddReply((int)525347, (int)-1, (int)26715);
		@@@var_0_object:AddReply((int)529145, (int)-1, (int)30591);
		goto Label_1132;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x440";
	}
Label_1132:
	var_502_bool = 0;
	func_4854(var_502_bool);
	if(var_502_bool != 0) {

	Label_1136:
		lshWaitForAnimEnd();
		var_503_string = var_3_string;
		if(var_503_string != 0) {
		} else {
			var_504_string = "";
			var_504_string = var_2_object;
			func_4609(var_504_string);
			goto Label_1136;
	}
		PlayAnimation("all", "idle");

	Label_1151:
		WaitForAnimEnd();
		var_507_string = var_3_string;
		if(var_507_string != 0) {
			goto Label_1161;
		}
		PlayAnimation("all", "idle");
		goto Label_1151;
	}
	goto Label_1161;
	
Label_1161:
	return 0;
	
}


func_1596(var_0_object, var_1_object, var_2_object, var_3_string, var_538_object, var_539_object)
{
	var_0_object = var_539_object;
	var_1_object = var_538_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_545_bool = 0; var_546_object = Obj();
		var_546_object = var_1_object;
		func_5317(var_546_object);
		if(var_545_bool != 0) {
			var_551_string = "";
			func_1727(var_539_object, "Neutral");
			@@@var_0_object:SetMessage((int)525442);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525443, (int)-1, (int)26811);
			@@@var_0_object:AddReply((int)529337, (int)-1, (int)30792);
		} else {
				var_574_string = "";
				func_1727(var_539_object, "Neutral");
				@@@var_0_object:SetMessage((int)525406);
				@@@var_0_object:ClearReplies();
				var_576_bool = 0; var_577_object = Obj();
				var_577_object = var_1_object;
				func_5281(var_577_object);
				if(var_576_bool != 0) {
					@@@var_0_object:AddReply((int)525407, (int)26776, (int)26775);
				}
				var_585_bool = 0;
				var_585_bool = 0;
				var_586_bool = 0; var_587_object = Obj();
				var_587_object = var_1_object;
				func_5305(var_587_object);
				if(var_586_bool != 0) {
					var_592_bool = 0; var_593_object = Obj();
					var_593_object = var_1_object;
					func_5293(var_593_object);
					if(var_592_bool != 0) {
						var_585_bool = 1;
					}
				}
				if(var_585_bool != 0) {
					@@@var_0_object:AddReply((int)525425, (int)40970, (int)26793);
				}
				var_601_bool = 0;
				var_601_bool = 0;
				var_602_bool = 0; var_603_object = Obj();
				var_603_object = var_1_object;
				func_5341(var_603_object);
				if(var_602_bool != 0) {
					var_608_bool = 0; var_609_object = Obj();
					var_609_object = var_1_object;
					func_5329(var_609_object);
					if(var_608_bool != 0) {
						var_601_bool = 1;
					}
				}
				if(var_601_bool != 0) {
					@@@var_0_object:AddReply((int)525575, (int)26923, (int)26922);
				}
				@@@var_0_object:AddReply((int)525412, (int)-1, (int)26780);
				@@@var_0_object:AddReply((int)538971, (int)-1, (int)40909);
				goto Label_1697;
		}
	}
Label_1697:
	var_566_bool = 0;
	func_4854(var_566_bool);
	if(var_566_bool != 0) {

	Label_1701:
		lshWaitForAnimEnd();
		var_567_string = var_3_string;
		if(var_567_string != 0) {
		} else {
			var_568_string = "";
			var_568_string = var_2_object;
			func_4609(var_568_string);
			goto Label_1701;
	}
		PlayAnimation("all", "idle");

	Label_1716:
		WaitForAnimEnd();
		var_571_string = var_3_string;
		if(var_571_string != 0) {
			goto Label_1726;
		}
		PlayAnimation("all", "idle");
		goto Label_1716;

	}
	goto Label_1726;
	
Label_1726:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x640";


func_4668(var_100_cvector, var_101_cvector)
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


func_5185(var_331_bool)
{
	var_333_int = 0; var_334_string = "";
	func_4689(var_333_int, "ook1Anna1");
	var_336_bool = var_333_int == (int)0;
	if(var_336_bool != 0) {
		var_331_bool = 1;
		return 0;
	}
	var_331_bool = 0;
	return 0;
}


func_4678(var_175_float, var_176_float, var_177_float, var_178_float)
{
	var_179_bool = var_176_float < var_177_float;
	if(var_179_bool != 0) {
		var_177_float = var_175_float;
		return 0;
	}
	var_180_bool = var_176_float > var_178_float;
	if(var_180_bool != 0) {
		var_178_float = var_175_float;
		return 0;
	}
	var_176_float = var_175_float;
	return 0;
}


func_5197(var_365_bool)
{
	var_367_int = 0; var_368_string = "";
	func_4689(var_367_int, "k1q01Healed");
	var_370_bool = var_367_int != (int)0;
	if(var_370_bool != 0) {
		var_365_bool = 1;
		return 0;
	}
	var_365_bool = 0;
	return 0;
}


func_5712(var_125_int)
{
	var_126_int = 0; var_127_int = 0;
	GetVariable("branch", var_127_int);
	var_130_bool = var_127_int == (int)0;
	if(var_130_bool != 0) {
		var_125_int = 1;
		return 2;
	EMIT "GOTO 0x165f";
	}
	var_132_bool = var_127_int == (int)1;
	if(var_132_bool != 0) {
		var_125_int = 2;
		return 2;
	}
	var_125_int = 3;
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
		func_5173(var_324_object);
		if(var_323_bool != 0) {
			var_331_bool = 0; var_332_object = Obj();
			var_332_object = var_1_object;
			func_5185(var_332_object);
			if(var_331_bool != 0) {
				var_322_bool = 1;
			}
		}
		if(var_322_bool != 0) {
			var_337_object = Obj(); var_338_object = Obj();
			var_337_object = var_1_object;
			var_338_object = var_0_object;
			func_4879();
			var_341_string = "";
			func_272(var_316_object, "Fear");
			@@@var_0_object:SetMessage((int)524690);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524691, (int)28130, (int)26030);
			@@@var_0_object:AddReply((int)542043, (int)44323, (int)44322);
		} else {
				var_364_bool = 0;
				var_364_bool = 0;
				var_365_bool = 0; var_366_object = Obj();
				var_366_object = var_1_object;
				func_5197(var_366_object);
				if(var_365_bool != 0) {
					var_371_bool = 0; var_372_object = Obj();
					var_372_object = var_1_object;
					func_5209(var_372_object);
					if(var_371_bool != 0) {
						var_364_bool = 1;
					}
				}
				if(var_364_bool != 0) {
					var_377_object = Obj(); var_378_object = Obj();
					var_377_object = var_1_object;
					var_378_object = var_0_object;
					func_4885();
					var_381_string = "";
					func_272(var_316_object, "Neutral");
					@@@var_0_object:SetMessage((int)524707);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)524708, (int)28139, (int)26047);
					@@@var_0_object:AddReply((int)542053, (int)28139, (int)44336);
					goto Label_242;
				}
				var_389_bool = 0; var_390_object = Obj();
				var_390_object = var_1_object;
				func_5221(var_390_object);
				if(var_389_bool != 0) {
					var_395_object = Obj(); var_396_object = Obj();
					var_395_object = var_1_object;
					var_396_object = var_0_object;
					func_4891();
					var_399_string = "";
					func_272(var_316_object, "Fear");
					@@@var_0_object:SetMessage((int)524780);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)526860, (int)28146, (int)28145);
					@@@var_0_object:AddReply((int)542054, (int)28146, (int)44338);
					goto Label_242;
				}
				var_407_string = "";
				func_272(var_316_object, "Dream");
				@@@var_0_object:SetMessage((int)524709);
				@@@var_0_object:ClearReplies();
				var_409_bool = 0;
				var_409_bool = 0;
				var_410_bool = 0; var_411_object = Obj();
				var_411_object = var_1_object;
				func_5233(var_411_object);
				if(var_410_bool != 0) {
					var_416_bool = 0; var_417_object = Obj();
					var_417_object = var_1_object;
					func_5221(var_417_object);
					var_418_bool = var_416_bool == 0; //@nz
					if(var_418_bool != 0) {
						var_409_bool = 1;
					}
				}
				if(var_409_bool != 0) {
					@@@var_0_object:AddReply((int)524787, (int)26103, (int)26102);
				}
				var_422_bool = 0; var_423_object = Obj();
				var_423_object = var_1_object;
				func_5245(var_423_object);
				if(var_422_bool != 0) {
					@@@var_0_object:AddReply((int)524796, (int)28156, (int)26111);
				}
				@@@var_0_object:AddReply((int)524710, (int)-1, (int)26049);
				goto Label_242;
		}
	}
Label_242:
	var_356_bool = 0;
	func_4854(var_356_bool);
	if(var_356_bool != 0) {

	Label_246:
		lshWaitForAnimEnd();
		var_357_string = var_3_string;
		if(var_357_string != 0) {
		} else {
			var_358_string = "";
			var_358_string = var_2_object;
			func_4609(var_358_string);
			goto Label_246;
	}
		PlayAnimation("all", "idle");

	Label_261:
		WaitForAnimEnd();
		var_361_string = var_3_string;
		if(var_361_string != 0) {
			goto Label_271;
		}
		PlayAnimation("all", "idle");
		goto Label_261;

	}
	goto Label_271;
	
Label_271:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_4689(var_325_int, var_326_string)
{
	var_327_int = 0; var_328_int = 0;
	GetVariable(var_326_string, var_328_int);
	var_328_int = var_325_int;
	return 2;
}


func_2643(var_0_object, var_1_object, var_2_object, var_3_string, var_229_object, var_230_object)
{
	var_0_object = var_230_object;
	var_1_object = var_229_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_236_string = "";
		func_2701(var_230_object, "Neutral");
		@@@var_0_object:SetMessage((int)525465);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)526257, (int)27533, (int)27531);
		@@@var_0_object:AddReply((int)525466, (int)-1, (int)26822);
		goto Label_2671;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xa57";
	}
Label_2671:
	var_260_bool = 0;
	func_4854(var_260_bool);
	if(var_260_bool != 0) {

	Label_2675:
		lshWaitForAnimEnd();
		var_261_string = var_3_string;
		if(var_261_string != 0) {
		} else {
			var_262_string = "";
			var_262_string = var_2_object;
			func_4609(var_262_string);
			goto Label_2675;
	}
		PlayAnimation("all", "idle");

	Label_2690:
		WaitForAnimEnd();
		var_275_string = var_3_string;
		if(var_275_string != 0) {
			goto Label_2700;
		}
		PlayAnimation("all", "idle");
		goto Label_2690;
	}
	goto Label_2700;
	
Label_2700:
	return 0;
	
}


func_4694(var_133_int, var_134_int)
{
	var_135_object = Obj(); var_136_object = Obj();
	CreateIntVector(var_136_object);
	@@var_136_object:add(var_133_int);
	@@var_136_object:add(var_134_int);
	SendWorldWndMessage((int)3, var_136_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5209(var_371_bool)
{
	var_373_int = 0; var_374_string = "";
	func_4689(var_373_int, "ook1Anna2");
	var_376_bool = var_373_int == (int)0;
	if(var_376_bool != 0) {
		var_371_bool = 1;
		return 0;
	}
	var_371_bool = 0;
	return 0;
}


func_5729(var_59_object)
{
	var_60_bool = GlobalVars[1];
	var_61_bool = var_60_bool == 0; //@nz
	if(var_61_bool != 0) {
		var_62_int = 0; var_63_object = Obj();
		var_59_object = var_63_object;
		TaskCall(6);
		func_2562(var_64_object, var_62_int, var_63_object);
		TaskReturn();
		var_287_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_288_bool = 0; var_289_int = 0;
	func_4816(var_288_bool, (int)1);
	if(var_288_bool != 0) {
		var_291_int = 0; var_292_object = Obj();
		var_59_object = var_292_object;
		TaskCall(0);
		func_0(var_293_object, var_291_int, var_292_object);
		TaskReturn();
		return 0;
	}
	var_436_bool = 0; var_437_int = 0;
	func_4816(var_436_bool, (int)2);
	if(var_436_bool != 0) {
		var_438_int = 0; var_439_object = Obj();
		var_59_object = var_439_object;
		TaskCall(2);
		func_1003(var_440_object, var_438_int, var_439_object);
		TaskReturn();
		return 0;
	}
	var_512_bool = 0; var_513_int = 0;
	func_4816(var_512_bool, (int)3);
	if(var_512_bool != 0) {
		var_514_int = 0; var_515_object = Obj();
		var_59_object = var_515_object;
		TaskCall(4);
		func_1515(var_516_object, var_514_int, var_515_object);
		TaskReturn();
		return 0;
	}
	var_625_bool = 0; var_626_int = 0;
	func_4816(var_625_bool, (int)6);
	if(var_625_bool != 0) {
		var_627_int = 0; var_628_object = Obj();
		var_59_object = var_628_object;
		TaskCall(8);
		func_2788(var_629_object, var_627_int, var_628_object);
		TaskReturn();
		return 0;
	}
	var_706_bool = 0; var_707_int = 0;
	func_4816(var_706_bool, (int)11);
	if(var_706_bool != 0) {
		var_708_int = 0; var_709_object = Obj();
		var_59_object = var_709_object;
		TaskCall(10);
		func_3112(var_710_object, var_708_int, var_709_object);
		TaskReturn();
		return 0;
	}
	var_777_bool = 0; var_778_int = 0;
	func_4816(var_777_bool, (int)12);
	if(var_777_bool != 0) {
		var_779_int = 0; var_780_object = Obj();
		var_59_object = var_780_object;
		TaskCall(12);
		func_3490(var_781_object, var_779_int, var_780_object);
		TaskReturn();
		return 0;
	}
	var_838_int = 0; var_839_object = Obj();
	var_59_object = var_839_object;
	TaskCall(14);
	func_3849(var_840_object, var_838_int, var_839_object);
	TaskReturn();
	return 0;
}


func_4706(var_191_object, var_192_int)
{
	var_193_int = 0; var_194_int = 0;
	var_195_object = Obj(); var_196_string = ""; var_197_int = 0;
	var_191_object = var_195_object;
	var_192_int = var_197_int;
	func_4353(var_195_object, "money", var_197_int);
	var_202_bool = var_192_int > (int)0;
	if(var_202_bool != 0) {
		GetInvItemByName(var_194_int, "Money");
		var_204_int = 0; var_205_int = 0;
		var_194_int = var_204_int;
		var_192_int = var_205_int;
		func_4694(var_204_int, var_205_int);
	}
	return 2;
}


func_5221(var_389_bool)
{
	var_391_int = 0; var_392_string = "";
	func_4689(var_391_int, "ook1Anna3");
	var_394_bool = var_391_int == (int)0;
	if(var_394_bool != 0) {
		var_389_bool = 1;
		return 0;
	}
	var_389_bool = 0;
	return 0;
}


func_5233(var_410_bool)
{
	var_412_int = 0; var_413_string = "";
	func_4689(var_412_int, "k1q03");
	var_415_bool = var_412_int == (int)0;
	if(var_415_bool != 0) {
		var_410_bool = 1;
		return 0;
	}
	var_410_bool = 0;
	return 0;
}


func_4725(var_122_object, var_123_object, var_124_int)
{
	var_125_int = 0; var_126_int = 0; var_127_bool = 0; var_128_int = 0; var_129_int = 0; var_130_bool = 0;
	@@var_123_object:GetItemID(var_128_int);
	GetInvItemProperty(var_129_int, var_128_int, "Category");
	@@var_122_object:AddItem(var_130_bool, var_123_object, var_129_int, var_124_int);
	var_132_bool = var_130_bool == 0; //@nz
	if(var_132_bool != 0) {
		@@var_122_object:DropItems(var_123_object, var_124_int);
	} else {
		var_133_int = 0; var_134_int = 0;
		var_128_int = var_133_int;
		var_124_int = var_134_int;
		func_4694(var_133_int, var_134_int);
	}
	return 6;
	
}


func_3193(var_0_object, var_1_object, var_2_object, var_3_string, var_732_object, var_733_object)
{
	var_0_object = var_733_object;
	var_1_object = var_732_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_739_string = "";
		func_3265(var_733_object, "Neutral");
		@@@var_0_object:SetMessage((int)527548);
		@@@var_0_object:ClearReplies();
		var_748_bool = 0;
		var_748_bool = 0;
		var_749_bool = 0; var_750_object = Obj();
		var_750_object = var_1_object;
		func_5389(var_750_object);
		if(var_749_bool != 0) {
			var_755_bool = 0; var_756_object = Obj();
			var_756_object = var_1_object;
			func_5401(var_756_object);
			if(var_755_bool != 0) {
				var_748_bool = 1;
			}
		}
		if(var_748_bool != 0) {
			@@@var_0_object:AddReply((int)527551, (int)28893, (int)28892);
		}
		@@@var_0_object:AddReply((int)527550, (int)-1, (int)28891);
		goto Label_3235;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xc7d";
	}
Label_3235:
	var_767_bool = 0;
	func_4854(var_767_bool);
	if(var_767_bool != 0) {

	Label_3239:
		lshWaitForAnimEnd();
		var_768_string = var_3_string;
		if(var_768_string != 0) {
		} else {
			var_769_string = "";
			var_769_string = var_2_object;
			func_4609(var_769_string);
			goto Label_3239;
	}
		PlayAnimation("all", "idle");

	Label_3254:
		WaitForAnimEnd();
		var_772_string = var_3_string;
		if(var_772_string != 0) {
			goto Label_3264;
		}
		PlayAnimation("all", "idle");
		goto Label_3254;
	}
	goto Label_3264;
	
Label_3264:
	return 0;
	
}


func_5245(var_422_bool)
{
	var_424_int = 0; var_425_string = "";
	func_4689(var_424_int, "k1q03");
	var_427_bool = var_424_int == (int)2;
	if(var_427_bool != 0) {
		var_422_bool = 1;
		return 0;
	}
	var_422_bool = 0;
	return 0;
}


func_4744(var_117_object, var_118_string, var_119_int)
{
	var_120_object = Obj(); var_121_object = Obj();
	CreateInvItem(var_121_object);
	@@var_121_object:SetItemName(var_118_string);
	var_122_object = Obj(); var_123_object = Obj(); var_124_int = 0;
	var_117_object = var_122_object;
	var_121_object = var_123_object;
	var_119_int = var_124_int;
	func_4725(var_122_object, var_123_object, var_124_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5257(var_478_bool)
{
	var_480_int = 0; var_481_string = "";
	func_4689(var_480_int, "k2q04");
	var_483_bool = var_480_int == (int)1;
	if(var_483_bool != 0) {
		var_478_bool = 1;
		return 0;
	}
	var_478_bool = 0;
	return 0;
}


func_1162(var_2_object, var_469_string)
{
	var_470_bool = 0;
	func_4854(var_470_bool);
	var_471_bool = var_470_bool == 0; //@nz
	if(var_471_bool != 0) {
		return 0;
	}
	var_472_bool = var_469_string == var_2_object;
	if(var_472_bool != 0) {
		return 0;
	}
	var_473_string = ""; var_474_bool = 0;
	var_469_string = var_473_string;
	var_476_bool = var_469_string == "";
	if(var_476_bool != 0) {
		var_474_bool = 0;
	} else {
		var_474_bool = 1;
	}
	func_4625(var_473_string, var_474_bool);
	var_2_object = var_469_string;
	return 0;
	
}


func_4235()
{
	var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_int = 0; var_54_bool = 0; var_55_int = 0; var_56_int = 0; var_57_bool = 0;
	WaitForAnimEnd();
	var_58_bool = 0;
	func_4379(var_58_bool);
	var_59_bool = var_58_bool == 0; //@nz
	if(var_59_bool != 0) {
		return 12;
	}
	func_4829((int)0);
	var_60_int = var_52_int;
	var_53_int = 0;
	
Label_4249:
	var_73_bool = 0;
	var_73_bool = 0;
	var_75_bool = var_53_int < (int)5;
	if(var_75_bool != 0) {
		var_76_bool = 0;
		func_4379(var_76_bool);
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
				func_4822(var_87_string, var_88_int);
				PlayAnimation("all", var_87_string);
				WaitForAnimEnd(var_57_bool);
				var_89_bool = var_57_bool == 0; //@nz
				if(var_89_bool == 0) goto Label_4290;
				goto Label_4301;
		}
		Label_4290:
			var_80_bool = 0;
			func_4304(var_80_bool);
			var_81_bool = var_80_bool == 0; //@nz
			if(var_81_bool != 0) {
				goto Label_4301;
			}
			ResetAAS();
			var_53_int = var_53_int + (int)1;
			goto Label_4249;

		}
	}
Label_4301:
	ResetAAS();
	return 12;
	
}


func_2701(var_2_object, var_236_string)
{
	var_237_bool = 0;
	func_4854(var_237_bool);
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
	func_4625(var_240_string, var_241_bool);
	var_2_object = var_236_string;
	return 0;
	
}


func_5269(var_487_bool)
{
	var_489_int = 0; var_490_string = "";
	func_4689(var_489_int, "k2q04");
	var_492_bool = var_489_int == (int)3;
	if(var_492_bool != 0) {
		var_487_bool = 1;
		return 0;
	}
	var_487_bool = 0;
	return 0;
}


func_4757(var_146_bool, var_147_object, var_148_float)
{
	var_149_bool = var_147_object == 0; //@nz
	if(var_149_bool != 0) {
		var_146_bool = 0;
		return 0;
	}
	var_151_bool = var_148_float > (int)0;
	if(var_151_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_182_bool = var_148_float < (int)0;
		if(var_182_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_4778;
		}
		var_146_bool = 0;
		return 0;
	}
Label_4778:
	var_153_float = 0;
	var_148_float = var_153_float;
	func_4792(var_153_float);
	var_157_bool = 0; var_158_object = Obj(); var_159_string = ""; var_160_float = 0; var_161_float = 0; var_162_float = 0;
	var_147_object = var_158_object;
	var_148_float = var_160_float;
	func_4331(var_157_bool, var_158_object, "reputation", var_160_float, (float)0, (float)1);
	var_146_bool = 1;
	return 0;
	
}


func_5281(var_576_bool)
{
	var_578_int = 0; var_579_string = "";
	func_4689(var_578_int, "k3q01");
	var_581_bool = var_578_int == (int)1;
	if(var_581_bool != 0) {
		var_576_bool = 1;
		return 0;
	}
	var_576_bool = 0;
	return 0;
}


func_5293(var_592_bool)
{
	var_594_int = 0; var_595_string = "";
	func_4689(var_594_int, "k3q01");
	var_597_bool = var_594_int == (int)2;
	if(var_597_bool != 0) {
		var_592_bool = 1;
		return 0;
	}
	var_592_bool = 0;
	return 0;
}


func_4792(var_153_float)
{
	var_154_object = Obj(); var_155_object = Obj();
	CreateFloatVector(var_155_object);
	@@var_155_object:add(var_153_float);
	SendWorldWndMessage((int)16, var_155_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5305(var_586_bool)
{
	var_588_int = 0; var_589_string = "";
	func_4689(var_588_int, "k3q01KapellaAboutHan");
	var_591_bool = var_588_int != (int)0;
	if(var_591_bool != 0) {
		var_586_bool = 1;
		return 0;
	}
	var_586_bool = 0;
	return 0;
}


func_1727(var_2_object, var_551_string)
{
	var_552_bool = 0;
	func_4854(var_552_bool);
	var_553_bool = var_552_bool == 0; //@nz
	if(var_553_bool != 0) {
		return 0;
	}
	var_554_bool = var_551_string == var_2_object;
	if(var_554_bool != 0) {
		return 0;
	}
	var_555_string = ""; var_556_bool = 0;
	var_551_string = var_555_string;
	var_558_bool = var_551_string == "";
	if(var_558_bool != 0) {
		var_556_bool = 0;
	} else {
		var_556_bool = 1;
	}
	func_4625(var_555_string, var_556_bool);
	var_2_object = var_551_string;
	return 0;
	
}


func_3265(var_2_object, var_739_string)
{
	var_740_bool = 0;
	func_4854(var_740_bool);
	var_741_bool = var_740_bool == 0; //@nz
	if(var_741_bool != 0) {
		return 0;
	}
	var_742_bool = var_739_string == var_2_object;
	if(var_742_bool != 0) {
		return 0;
	}
	var_743_string = ""; var_744_bool = 0;
	var_739_string = var_743_string;
	var_746_bool = var_739_string == "";
	if(var_746_bool != 0) {
		var_744_bool = 0;
	} else {
		var_744_bool = 1;
	}
	func_4625(var_743_string, var_744_bool);
	var_2_object = var_739_string;
	return 0;
	
}


func_4802(var_64_float)
{
	var_65_float = 0; var_66_float = 0;
	GetGameTime(var_66_float);
	var_66_float = var_64_float;
	return 2;
}


func_5317(var_545_bool)
{
	var_547_int = 0; var_548_string = "";
	func_4689(var_547_int, "k3q01");
	var_550_bool = var_547_int == (int)3;
	if(var_550_bool != 0) {
		var_545_bool = 1;
		return 0;
	}
	var_545_bool = 0;
	return 0;
}


func_4807(var_189_int)
{
	var_190_float = 0; var_191_float = 0;
	GetGameTime(var_191_float);
	var_193_int = 0;
	var_193_int = var_191_float / (int)24;
	var_189_int = (int)1 + var_193_int;
	return 2;
}


func_4304(var_80_bool)
{
	var_80_bool = 1;
	return 0;
}


func_5329(var_608_bool)
{
	var_610_int = 0; var_611_string = "";
	func_4689(var_610_int, "ook3Anna1");
	var_613_bool = var_610_int == (int)0;
	if(var_613_bool != 0) {
		var_608_bool = 1;
		return 0;
	}
	var_608_bool = 0;
	return 0;
}


func_4306()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_4816(var_288_bool, var_289_int)
{
	var_290_int = 0;
	func_4807(var_290_int);
	var_288_bool = var_290_int == var_289_int;
	return 0;
}


func_4822(var_66_string, var_67_int)
{
	var_68_string = ""; var_69_string = "";
	var_70_int = var_67_int;
	if(var_70_int != 0) {
		"idle" = "idle" + var_67_int;
	}
	var_69_string = var_66_string;
	return 2;
}


func_4311(var_56_float, var_57_object)
{
	var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
	GetPosition(var_61_cvector);
	@@var_57_object:GetPosition(var_62_cvector);
	var_63_cvector = var_62_cvector - var_61_cvector;
	var_56_float = var_63_cvector | var_63_cvector;
	return 6;
}


func_5341(var_602_bool)
{
	var_604_int = 0; var_605_string = "";
	func_4689(var_604_int, "k3q03");
	var_607_bool = var_604_int == (int)0;
	if(var_607_bool != 0) {
		var_602_bool = 1;
		return 0;
	}
	var_602_bool = 0;
	return 0;
}


func_4829(var_60_int)
{
	var_61_int = 0; var_62_bool = 0; var_63_int = 0; var_64_bool = 0;
	var_63_int = 0;
	
Label_4831:
	var_66_string = ""; var_67_int = 0;
	var_63_int = var_67_int;
	func_4822(var_66_string, var_67_int);
	HasAnimation(var_64_bool, "all", var_66_string);
	var_71_bool = var_64_bool == 0; //@nz
	if(var_71_bool != 0) {
	} else {
		var_63_int = var_63_int + (int)1;
		goto Label_4831;
	}
	var_63_int = var_60_int;
	return 4;
	
}


func_4319(var_165_bool, var_166_object, var_167_string)
{
	var_168_bool = 0; var_169_bool = 0;
	var_172_bool = IsFuncExist(var_166_object, "HasProperty", (int)2);
	var_173_bool = var_172_bool == 0; //@nz
	if(var_173_bool != 0) {
		var_165_bool = 0;
		return 2;
	}
	@@var_166_object:HasProperty(var_167_string, var_169_bool);
	var_169_bool = var_165_bool;
	return 2;
}


func_2788(var_0_object, var_627_int, var_628_object)
{
	var_630_object = Obj(); var_631_bool = 0; var_632_int = 0; var_633_bool = 0; var_634_object = Obj(); var_635_bool = 0; var_636_int = 0; var_637_bool = 0;
	var_0_object = var_628_object;
	var_638_bool = 0; var_639_object = Obj(); var_640_float = 0;
	var_628_object = var_639_object;
	func_4384(var_638_bool, var_639_object, (float)70.0);
	var_641_bool = var_638_bool == 0; //@nz
	if(var_641_bool != 0) {
		var_627_int = -2;
		return 8;
	}
	CreateDialog(var_634_object);
	var_642_int = 0;
	func_4848(var_642_int);
	@@var_634_object:SetNPCName(var_642_int);
	var_643_int = 0;
	func_4846(var_643_int);
	@@var_634_object:SetNPCDescription(var_643_int);
	var_644_string = "";
	func_4850(var_644_string);
	@@var_634_object:SetPhoto(var_644_string);
	var_645_string = "";
	func_4852(var_645_string);
	@@var_634_object:SetPhoto2(var_645_string);
	var_646_int = 0;
	func_5712(var_646_int);
	@@var_634_object:SetPlayerName(var_646_int);
	IsOverrideActive(var_635_bool);
	var_647_bool = var_635_bool;
	if(var_647_bool != 0) {
		var_627_int = -2;
		return 8;
	}
	DoDialog(var_634_object);
	var_648_bool = 0; var_649_object = Obj();
	func_4662(Obj());
	var_650_object = var_649_object;
	func_4471(var_648_bool, var_649_object);
	var_651_object = Obj(); var_652_object = Obj();
	var_628_object = var_651_object;
	var_634_object = var_652_object;
	TaskCall(9);
	func_2869(var_653_object, var_654_object, var_655_string, var_656_bool, var_651_object, var_652_object);
	TaskReturn();
	@@var_634_object:IsDialogEnd(var_637_bool);
	
Label_2851:
	var_704_bool = var_637_bool == 0; //@nz
	if(var_704_bool != 0) {
		sync();
		@@var_634_object:IsDialogEnd(var_637_bool);
		goto Label_2851;
	}
	var_628_object = Obj();
	func_4453();
	StopDialog(var_634_object);
	@@var_634_object:GetReturnValue((int)-1);
	var_636_int = var_627_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5353(var_669_bool)
{
	var_671_int = 0; var_672_string = "";
	func_4689(var_671_int, "k6q01");
	var_674_bool = var_671_int == (int)2;
	if(var_674_bool != 0) {
		var_669_bool = 1;
		return 0;
	}
	var_669_bool = 0;
	return 0;
}


func_4331(var_157_bool, var_158_object, var_159_string, var_160_float, var_161_float, var_162_float)
{
	var_163_float = 0; var_164_float = 0;
	var_165_bool = 0; var_166_object = Obj(); var_167_string = "";
	var_158_object = var_166_object;
	var_159_string = var_167_string;
	func_4319(var_165_bool, var_166_object, var_167_string);
	var_174_bool = var_165_bool == 0; //@nz
	if(var_174_bool != 0) {
		var_157_bool = 0;
		return 2;
	}
	@@var_158_object:GetProperty(var_159_string, var_164_float);
	var_175_float = 0; var_176_float = 0; var_177_float = 0; var_178_float = 0;
	var_176_float = var_164_float + var_160_float;
	var_161_float = var_177_float;
	var_162_float = var_178_float;
	func_4678(var_175_float, var_176_float, var_177_float, var_178_float);
	@@var_158_object:SetProperty(var_159_string, var_175_float);
	var_157_bool = 1;
	return 2;
}


func_4846(var_122_int)
{
	var_122_int = 515530;
	return 0;
}


func_4848(var_121_int)
{
	var_121_int = 502856;
	return 0;
}


func_4850(var_123_string)
{
	var_123_string = "ui/NPC_Anna.png";
	return 0;
}


func_4852(var_124_string)
{
	var_124_string = "ui/NPC_Anna_b.png";
	return 0;
}


func_5365(var_675_bool)
{
	var_677_int = 0; var_678_string = "";
	func_4689(var_677_int, "k6q01DankoPos");
	var_680_bool = var_677_int > (int)1;
	if(var_680_bool != 0) {
		var_675_bool = 1;
		return 0;
	}
	var_675_bool = 0;
	return 0;
}


func_4854(var_116_bool)
{
	var_116_bool = 1;
	return 0;
}


func_4856(var_99_object)
{
	var_100_object = Obj(); var_101_string = ""; var_102_float = 0;
	func_5662(Obj());
	var_103_object = var_100_object;
	func_5679(var_100_object, "pt_map_notkin", (float)2);
	var_123_object = Obj();
	func_5662(var_123_object);
	@@var_99_object:ShowMap(var_123_object);
	return 0;
}


func_5377(var_681_bool)
{
	var_683_int = 0; var_684_string = "";
	func_4689(var_683_int, "ook6Anna1");
	var_686_bool = var_683_int == (int)0;
	if(var_686_bool != 0) {
		var_681_bool = 1;
		return 0;
	}
	var_681_bool = 0;
	return 0;
}


func_4353(var_195_object, var_196_string, var_197_int)
{
	var_198_int = 0; var_199_int = 0;
	@@var_195_object:GetProperty(var_196_string, var_199_int);
	var_200_int = var_199_int + var_197_int;
	@@var_195_object:SetProperty(var_196_string, var_200_int);
	return 2;
}


func_4872(var_144_object)
{
	var_146_bool = 0; var_147_object = Obj(); var_148_float = 0;
	var_144_object = var_147_object;
	func_4757(var_146_bool, var_147_object, (float)0.05000000074505806);
	return 0;
}


func_4360(var_49_bool, var_50_cvector)
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


func_3849(var_0_object, var_838_int, var_839_object)
{
	var_841_object = Obj(); var_842_bool = 0; var_843_int = 0; var_844_bool = 0; var_845_object = Obj(); var_846_bool = 0; var_847_int = 0; var_848_bool = 0;
	var_0_object = var_839_object;
	var_849_bool = 0; var_850_object = Obj(); var_851_float = 0;
	var_839_object = var_850_object;
	func_4384(var_849_bool, var_850_object, (float)70.0);
	var_852_bool = var_849_bool == 0; //@nz
	if(var_852_bool != 0) {
		var_838_int = -2;
		return 8;
	}
	CreateDialog(var_845_object);
	var_853_int = 0;
	func_4848(var_853_int);
	@@var_845_object:SetNPCName(var_853_int);
	var_854_int = 0;
	func_4846(var_854_int);
	@@var_845_object:SetNPCDescription(var_854_int);
	var_855_string = "";
	func_4850(var_855_string);
	@@var_845_object:SetPhoto(var_855_string);
	var_856_string = "";
	func_4852(var_856_string);
	@@var_845_object:SetPhoto2(var_856_string);
	var_857_int = 0;
	func_5712(var_857_int);
	@@var_845_object:SetPlayerName(var_857_int);
	IsOverrideActive(var_846_bool);
	var_858_bool = var_846_bool;
	if(var_858_bool != 0) {
		var_838_int = -2;
		return 8;
	}
	DoDialog(var_845_object);
	var_859_bool = 0; var_860_object = Obj();
	func_4662(Obj());
	var_861_object = var_860_object;
	func_4471(var_859_bool, var_860_object);
	var_862_object = Obj(); var_863_object = Obj();
	var_839_object = var_862_object;
	var_845_object = var_863_object;
	TaskCall(15);
	func_3930(var_864_object, var_865_object, var_866_string, var_867_bool, var_862_object, var_863_object);
	TaskReturn();
	@@var_845_object:IsDialogEnd(var_848_bool);
	
Label_3912:
	var_892_bool = var_848_bool == 0; //@nz
	if(var_892_bool != 0) {
		sync();
		@@var_845_object:IsDialogEnd(var_848_bool);
		goto Label_3912;
	}
	var_839_object = Obj();
	func_4453();
	StopDialog(var_845_object);
	@@var_845_object:GetReturnValue((int)-1);
	var_847_int = var_838_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5389(var_749_bool)
{
	var_751_int = 0; var_752_string = "";
	func_4689(var_751_int, "k11q01");
	var_754_bool = var_751_int == (int)9;
	if(var_754_bool != 0) {
		var_749_bool = 1;
		return 0;
	}
	var_749_bool = 0;
	return 0;
}


func_4879()
{
	SetVariable("ook1Anna1", (int)1);
	return 0;
}


func_272(var_2_object, var_341_string)
{
	var_342_bool = 0;
	func_4854(var_342_bool);
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
	func_4625(var_345_string, var_346_bool);
	var_2_object = var_341_string;
	return 0;
	
}


func_4370(var_45_bool, var_46_object)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	@@var_46_object:GetPosition(var_48_cvector);
	var_49_bool = 0; var_50_cvector = CVector(0,0,0);
	var_48_cvector = var_50_cvector;
	func_4360(var_49_bool, var_50_cvector);
	var_49_bool = var_45_bool;
	return 2;
}


func_4885()
{
	SetVariable("ook1Anna2", (int)1);
	return 0;
}


func_5401(var_755_bool)
{
	var_757_int = 0; var_758_string = "";
	func_4689(var_757_int, "ook11Anna1");
	var_760_bool = var_757_int == (int)0;
	if(var_760_bool != 0) {
		var_755_bool = 1;
		return 0;
	}
	var_755_bool = 0;
	return 0;
}


func_4891()
{
	SetVariable("ook1Anna3", (int)1);
	return 0;
}


func_4379(var_42_bool)
{
	var_43_bool = 0; var_44_bool = 0;
	IsLoaded(var_44_bool);
	var_44_bool = var_42_bool;
	return 2;
}


func_4384(var_73_bool, var_74_object, var_75_float)
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
	func_4668(var_100_cvector, var_101_cvector);
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
	func_4854(var_116_bool);
	if(var_116_bool != 0) {
	} else {
		HasAnimationTrack(var_93_bool, "head");
		var_118_bool = var_93_bool;
		if(var_118_bool == 0) goto Label_4447;
		LookAsyncCamera("head");
	}
Label_4447:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_73_bool = 1;
	return 18;
	
}


func_4897()
{
	var_49_object = Obj(); var_50_object = Obj();
	SetVariable("k1q03", (int)1);
	func_5662(Obj());
	var_53_object = var_50_object;
	var_64_float = 0;
	func_4802(var_64_float);
	@@var_50_object:AddMark("k1q03AnnaGotoNotkin", "pt_map_notkin", (int)0, (int)524799, var_64_float);
	func_5491();
	func_5504();
	return 2;
}
EMIT "Stack[-1] = 0";


func_5413()
{
	var_127_object = Obj(); var_128_object = Obj();
	CreateDiaryEntry(var_128_object, (int)498, (int)1, (int)528065);
	var_132_bool = 0; var_133_object = Obj(); var_134_int = 0;
	var_128_object = var_133_object;
	func_5634(var_132_bool, var_133_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5426()
{
	var_117_object = Obj(); var_118_object = Obj();
	CreateDiaryEntry(var_118_object, (int)497, (int)1, (int)528064);
	var_122_bool = 0; var_123_object = Obj(); var_124_int = 0;
	var_118_object = var_123_object;
	func_5634(var_122_bool, var_123_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2869(var_0_object, var_1_object, var_2_object, var_3_string, var_651_object, var_652_object)
{
	var_0_object = var_652_object;
	var_1_object = var_651_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_658_string = "";
		func_2955(var_652_object, "Fear");
		@@@var_0_object:SetMessage((int)526085);
		@@@var_0_object:ClearReplies();
		var_667_bool = 0;
		var_667_bool = 0;
		var_668_bool = 0;
		var_668_bool = 0;
		var_669_bool = 0; var_670_object = Obj();
		var_670_object = var_1_object;
		func_5353(var_670_object);
		if(var_669_bool != 0) {
			var_675_bool = 0; var_676_object = Obj();
			var_676_object = var_1_object;
			func_5365(var_676_object);
			if(var_675_bool != 0) {
				var_668_bool = 1;
			}
		}
		if(var_668_bool != 0) {
			var_681_bool = 0; var_682_object = Obj();
			var_682_object = var_1_object;
			func_5377(var_682_object);
			if(var_681_bool != 0) {
				var_667_bool = 1;
			}
		}
		if(var_667_bool != 0) {
			@@@var_0_object:AddReply((int)526086, (int)27373, (int)27372);
		}
		@@@var_0_object:AddReply((int)526089, (int)-1, (int)27375);
		@@@var_0_object:AddReply((int)528861, (int)-1, (int)30283);
		goto Label_2925;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xb39";
	}
Label_2925:
	var_696_bool = 0;
	func_4854(var_696_bool);
	if(var_696_bool != 0) {

	Label_2929:
		lshWaitForAnimEnd();
		var_697_string = var_3_string;
		if(var_697_string != 0) {
		} else {
			var_698_string = "";
			var_698_string = var_2_object;
			func_4609(var_698_string);
			goto Label_2929;
	}
		PlayAnimation("all", "idle");

	Label_2944:
		WaitForAnimEnd();
		var_701_string = var_3_string;
		if(var_701_string != 0) {
			goto Label_2954;
		}
		PlayAnimation("all", "idle");
		goto Label_2944;
	}
	goto Label_2954;
	
Label_2954:
	return 0;
	
}


func_4923()
{
	SetVariable("k1q03", (int)1000);
	func_5517();
	return 0;
}


func_5439()
{
	var_107_object = Obj(); var_108_object = Obj();
	CreateDiaryEntry(var_108_object, (int)496, (int)1, (int)528063);
	var_112_bool = 0; var_113_object = Obj(); var_114_int = 0;
	var_108_object = var_113_object;
	func_5634(var_112_bool, var_113_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4932()
{
	var_49_object = Obj(); var_50_object = Obj();
	SetVariable("k2q04", (int)2);
	func_5662(Obj());
	var_53_object = var_50_object;
	var_64_float = 0;
	func_4802(var_64_float);
	@@var_50_object:AddMark("k2q04AnnaGotoGatherer1", "pt_map_gatherer1", (int)0, (int)508643, var_64_float);
	var_71_float = 0;
	func_4802(var_71_float);
	@@var_50_object:AddMark("k2q04AnnaGotoGatherer2", "pt_map_gatherer2", (int)0, (int)539379, var_71_float);
	var_76_float = 0;
	func_4802(var_76_float);
	@@var_50_object:AddMark("k2q04AnnaGotoGatherer3", "pt_map_gatherer3", (int)0, (int)508644, var_76_float);
	func_5543();
	return 2;
}
EMIT "Stack[-1] = 0";


func_5452()
{
	var_97_object = Obj(); var_98_object = Obj();
	CreateDiaryEntry(var_98_object, (int)495, (int)1, (int)528062);
	var_102_bool = 0; var_103_object = Obj(); var_104_int = 0;
	var_98_object = var_103_object;
	func_5634(var_102_bool, var_103_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5465()
{
	var_87_object = Obj(); var_88_object = Obj();
	CreateDiaryEntry(var_88_object, (int)494, (int)1, (int)528061);
	var_92_bool = 0; var_93_object = Obj(); var_94_int = 0;
	var_88_object = var_93_object;
	func_5634(var_92_bool, var_93_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3930(var_0_object, var_1_object, var_2_object, var_3_string, var_862_object, var_863_object)
{
	var_0_object = var_863_object;
	var_1_object = var_862_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_869_string = "";
		func_3988(var_863_object, "Neutral");
		@@@var_0_object:SetMessage((int)540539);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540540, (int)-1, (int)42549);
		@@@var_0_object:AddReply((int)540799, (int)-1, (int)42848);
		goto Label_3958;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xf5e";
	}
Label_3958:
	var_884_bool = 0;
	func_4854(var_884_bool);
	if(var_884_bool != 0) {

	Label_3962:
		lshWaitForAnimEnd();
		var_885_string = var_3_string;
		if(var_885_string != 0) {
		} else {
			var_886_string = "";
			var_886_string = var_2_object;
			func_4609(var_886_string);
			goto Label_3962;
	}
		PlayAnimation("all", "idle");

	Label_3977:
		WaitForAnimEnd();
		var_889_string = var_3_string;
		if(var_889_string != 0) {
			goto Label_3987;
		}
		PlayAnimation("all", "idle");
		goto Label_3977;
	}
	goto Label_3987;
	
Label_3987:
	return 0;
	
}


func_4453()
{
	var_280_bool = 0; var_281_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_283_bool = 0;
	func_4854(var_283_bool);
	if(var_283_bool != 0) {
	} else {
		HasAnimationTrack(var_281_bool, "head");
		var_285_bool = var_281_bool;
		if(var_285_bool == 0) goto Label_4470;
		UnlookAsync("head");
	}
Label_4470:
	return 2;
	
}


func_5478()
{
	var_62_object = Obj(); var_63_object = Obj();
	CreateDiaryEntry(var_63_object, (int)493, (int)1, (int)528060);
	var_67_bool = 0; var_68_object = Obj(); var_69_int = 0;
	var_63_object = var_68_object;
	func_5634(var_67_bool, var_68_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4973()
{
	SetVariable("k2q04", (int)9);
	func_5530();
	return 0;
}


func_5491()
{
	var_67_object = Obj(); var_68_object = Obj();
	CreateDiaryEntry(var_68_object, (int)333, (int)2, (int)524800);
	var_72_bool = 0; var_73_object = Obj(); var_74_int = 0;
	var_68_object = var_73_object;
	func_5634(var_72_bool, var_73_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4982(var_114_object)
{
	Trace("alpha_pills 5 is given");
	var_117_object = Obj(); var_118_string = ""; var_119_int = 0;
	var_114_object = var_117_object;
	func_4744(var_117_object, "alpha_pills", (int)5);
	return 0;
}


func_4471(var_134_bool, var_135_object)
{
	var_139_int = 0; var_140_int = 0; var_141_int = 0; var_142_int = 0;
	GetVariable("voice_common", var_141_int);
	var_144_int = var_141_int;
	if(var_144_int != 0) {
		var_145_bool = 0; var_146_object = Obj();
		var_135_object = var_146_object;
		func_4529(var_145_bool, var_146_object);
		var_175_bool = var_145_bool == 0; //@nz
		if(var_175_bool != 0) {
			var_176_bool = 0; var_177_object = Obj();
			var_135_object = var_177_object;
			func_4566(var_176_bool, var_177_object);
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
		func_4566(var_221_bool, var_222_object);
		var_223_bool = var_221_bool == 0; //@nz
		if(var_223_bool != 0) {
			var_224_bool = 0; var_225_object = Obj();
			var_135_object = var_225_object;
			func_4529(var_224_bool, var_225_object);
			var_226_bool = var_224_bool == 0; //@nz
			if(var_226_bool != 0) {
				var_134_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_4527;
	
Label_4527:
	var_134_bool = 1;
	return 4;
	
}


func_5504()
{
	var_90_object = Obj(); var_91_object = Obj();
	CreateDiaryEntry(var_91_object, (int)334, (int)2, (int)524801);
	var_95_bool = 0; var_96_object = Obj(); var_97_int = 0;
	var_91_object = var_96_object;
	func_5634(var_95_bool, var_96_object, (int)333);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4993(var_138_object)
{
	Trace("beta_pills 5 is given");
	var_141_object = Obj(); var_142_string = ""; var_143_int = 0;
	var_138_object = var_141_object;
	func_4744(var_141_object, "beta_pills", (int)5);
	return 0;
}


func_2955(var_2_object, var_658_string)
{
	var_659_bool = 0;
	func_4854(var_659_bool);
	var_660_bool = var_659_bool == 0; //@nz
	if(var_660_bool != 0) {
		return 0;
	}
	var_661_bool = var_658_string == var_2_object;
	if(var_661_bool != 0) {
		return 0;
	}
	var_662_string = ""; var_663_bool = 0;
	var_658_string = var_662_string;
	var_665_bool = var_658_string == "";
	if(var_665_bool != 0) {
		var_663_bool = 0;
	} else {
		var_663_bool = 1;
	}
	func_4625(var_662_string, var_663_bool);
	var_2_object = var_658_string;
	return 0;
	
}


func_5004()
{
	var_49_object = Obj(); var_50_object = Obj();
	SetVariable("k3q01", (int)2);
	func_5662(Obj());
	var_53_object = var_50_object;
	var_64_float = 0;
	func_4802(var_64_float);
	@@var_50_object:AddMark("k3q01AnnaGotoMladVlad", "pt_map_mladvlad", (int)1, (int)525454, var_64_float);
	var_71_float = 0;
	func_4802(var_71_float);
	@@var_50_object:AddMark("k3q01AnnaGotoKapella", "pt_map_kapella", (int)1, (int)525455, var_71_float);
	func_5569();
	return 2;
}
EMIT "Stack[-1] = 0";


func_5517()
{
	var_136_object = Obj(); var_137_object = Obj();
	CreateDiaryEntry(var_137_object, (int)336, (int)2, (int)524803);
	var_141_bool = 0; var_142_object = Obj(); var_143_int = 0;
	var_137_object = var_142_object;
	func_5634(var_141_bool, var_142_object, (int)333);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3988(var_2_object, var_869_string)
{
	var_870_bool = 0;
	func_4854(var_870_bool);
	var_871_bool = var_870_bool == 0; //@nz
	if(var_871_bool != 0) {
		return 0;
	}
	var_872_bool = var_869_string == var_2_object;
	if(var_872_bool != 0) {
		return 0;
	}
	var_873_string = ""; var_874_bool = 0;
	var_869_string = var_873_string;
	var_876_bool = var_869_string == "";
	if(var_876_bool != 0) {
		var_874_bool = 0;
	} else {
		var_874_bool = 1;
	}
	func_4625(var_873_string, var_874_bool);
	var_2_object = var_869_string;
	return 0;
	
}


func_5530()
{
	var_106_object = Obj(); var_107_object = Obj();
	CreateDiaryEntry(var_107_object, (int)510, (int)2, (int)529709);
	var_111_bool = 0; var_112_object = Obj(); var_113_int = 0;
	var_107_object = var_112_object;
	func_5634(var_111_bool, var_112_object, (int)507);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3490(var_0_object, var_779_int, var_780_object)
{
	var_782_object = Obj(); var_783_bool = 0; var_784_int = 0; var_785_bool = 0; var_786_object = Obj(); var_787_bool = 0; var_788_int = 0; var_789_bool = 0;
	var_0_object = var_780_object;
	var_790_bool = 0; var_791_object = Obj(); var_792_float = 0;
	var_780_object = var_791_object;
	func_4384(var_790_bool, var_791_object, (float)70.0);
	var_793_bool = var_790_bool == 0; //@nz
	if(var_793_bool != 0) {
		var_779_int = -2;
		return 8;
	}
	CreateDialog(var_786_object);
	var_794_int = 0;
	func_4848(var_794_int);
	@@var_786_object:SetNPCName(var_794_int);
	var_795_int = 0;
	func_4846(var_795_int);
	@@var_786_object:SetNPCDescription(var_795_int);
	var_796_string = "";
	func_4850(var_796_string);
	@@var_786_object:SetPhoto(var_796_string);
	var_797_string = "";
	func_4852(var_797_string);
	@@var_786_object:SetPhoto2(var_797_string);
	var_798_int = 0;
	func_5712(var_798_int);
	@@var_786_object:SetPlayerName(var_798_int);
	IsOverrideActive(var_787_bool);
	var_799_bool = var_787_bool;
	if(var_799_bool != 0) {
		var_779_int = -2;
		return 8;
	}
	DoDialog(var_786_object);
	var_800_bool = 0; var_801_object = Obj();
	func_4662(Obj());
	var_802_object = var_801_object;
	func_4471(var_800_bool, var_801_object);
	var_803_object = Obj(); var_804_object = Obj();
	var_780_object = var_803_object;
	var_786_object = var_804_object;
	TaskCall(13);
	func_3571(var_805_object, var_806_object, var_807_string, var_808_bool, var_803_object, var_804_object);
	TaskReturn();
	@@var_786_object:IsDialogEnd(var_789_bool);
	
Label_3553:
	var_836_bool = var_789_bool == 0; //@nz
	if(var_836_bool != 0) {
		sync();
		@@var_786_object:IsDialogEnd(var_789_bool);
		goto Label_3553;
	}
	var_780_object = Obj();
	func_4453();
	StopDialog(var_786_object);
	@@var_786_object:GetReturnValue((int)-1);
	var_788_int = var_779_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5543()
{
	var_77_object = Obj(); var_78_object = Obj();
	CreateDiaryEntry(var_78_object, (int)509, (int)2, (int)529708);
	var_82_bool = 0; var_83_object = Obj(); var_84_int = 0;
	var_78_object = var_83_object;
	func_5634(var_82_bool, var_83_object, (int)507);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5036()
{
	SetVariable("k3q01", (int)3);
	func_5556();
	return 0;
}


func_4529(var_145_bool, var_146_object)
{
	var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; var_152_string = ""; var_153_int = 0; var_154_bool = 0; var_155_int = 0; var_156_string = "";
	var_152_string = "c";
	var_153_int = 0;
	
Label_4532:
	if((int)1 != 0) {
		var_159_int = var_153_int + (int)1;
		var_160_int = var_152_string + var_159_int;
		@@var_146_object:HasProperty(var_160_int, var_154_bool);
		var_161_bool = var_154_bool == 0; //@nz
		if(var_161_bool != 0) {
		} else {
			var_153_int = var_153_int + (int)1;
			goto Label_4532;
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
	func_4640(var_168_bool, var_169_string);
	var_168_bool = var_145_bool;
	return 10;
	
}


func_5556()
{
	var_111_object = Obj(); var_112_object = Obj();
	CreateDiaryEntry(var_112_object, (int)341, (int)1, (int)525450);
	var_116_bool = 0; var_117_object = Obj(); var_118_int = 0;
	var_112_object = var_117_object;
	func_5634(var_116_bool, var_117_object, (int)337);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5045()
{
	SetVariable("ook3Anna1", (int)1);
	return 0;
}


func_5051()
{
	var_131_object = Obj(); var_132_object = Obj();
	SetVariable("k3q03", (int)1);
	func_5662(Obj());
	var_135_object = var_132_object;
	var_140_float = 0;
	func_4802(var_140_float);
	@@var_132_object:AddMark("k3q03AnnaGotoEva", "pt_map_eva", (int)0, (int)525615, var_140_float);
	func_5582();
	func_5595();
	return 2;
}
EMIT "Stack[-1] = 0";


func_5569()
{
	var_72_object = Obj(); var_73_object = Obj();
	CreateDiaryEntry(var_73_object, (int)339, (int)1, (int)525448);
	var_77_bool = 0; var_78_object = Obj(); var_79_int = 0;
	var_73_object = var_78_object;
	func_5634(var_77_bool, var_78_object, (int)337);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5582()
{
	var_141_object = Obj(); var_142_object = Obj();
	CreateDiaryEntry(var_142_object, (int)350, (int)2, (int)525616);
	var_146_bool = 0; var_147_object = Obj(); var_148_int = 0;
	var_142_object = var_147_object;
	func_5634(var_146_bool, var_147_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5077()
{
	SetVariable("ook6Anna1", (int)1);
	return 0;
}


func_4566(var_176_bool, var_177_object)
{
	var_178_string = ""; var_179_int = 0; var_180_bool = 0; var_181_int = 0; var_182_string = ""; var_183_string = ""; var_184_int = 0; var_185_bool = 0; var_186_int = 0; var_187_string = "";
	var_189_int = 0;
	func_4807(var_189_int);
	var_195_int = "d" + var_189_int;
	var_183_string = var_195_int + "m";
	var_184_int = 0;
	
Label_4575:
	if((int)1 != 0) {
		var_199_int = var_184_int + (int)1;
		var_200_int = var_183_string + var_199_int;
		@@var_177_object:HasProperty(var_200_int, var_185_bool);
		var_201_bool = var_185_bool == 0; //@nz
		if(var_201_bool != 0) {
		} else {
			var_184_int = var_184_int + (int)1;
			goto Label_4575;
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
	func_4640(var_208_bool, var_209_string);
	var_208_bool = var_176_bool;
	return 10;
	
}


func_5083()
{
	func_5608();
	return 0;
}


func_4059(var_0_object)
{
	var_42_bool = 0;
	func_4379(var_42_bool);
	var_45_bool = var_42_bool == 0; //@nz
	if(var_45_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_4068:
	func_4235();
	goto Label_4068;
}
EMIT "Return(); Pop(0)";


func_5595()
{
	var_149_object = Obj(); var_150_object = Obj();
	CreateDiaryEntry(var_150_object, (int)351, (int)2, (int)525617);
	var_154_bool = 0; var_155_object = Obj(); var_156_int = 0;
	var_150_object = var_155_object;
	func_5634(var_154_bool, var_155_object, (int)350);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5088()
{
	var_55_int = 0; var_56_int = 0;
	GetVariable("k11q01SoulCount", var_56_int);
	var_56_int = var_56_int + (int)1;
	SetVariable("k11q01SoulCount", var_56_int);
	var_61_bool = var_56_int == (int)2;
	if(var_61_bool != 0) {
		func_5478();
	} else {
		var_86_bool = var_56_int == (int)3;
		if(var_86_bool != 0) {
			func_5465();
			goto Label_5138;
		}
		var_96_bool = var_56_int == (int)4;
		if(var_96_bool != 0) {
			func_5452();
			goto Label_5138;
		}
		var_106_bool = var_56_int == (int)5;
		if(var_106_bool != 0) {
			func_5439();
			goto Label_5138;
		}
		var_116_bool = var_56_int == (int)6;
		if(var_116_bool != 0) {
			func_5426();
			goto Label_5138;
		}
		var_126_bool = var_56_int == (int)7;
		if(var_126_bool == 0) goto Label_5138;
		func_5413();
	}
Label_5138:
	return 2;
	
}


func_5608()
{
	var_55_object = Obj(); var_56_object = Obj();
	CreateDiaryEntry(var_56_object, (int)412, (int)1, (int)526113);
	var_60_bool = 0; var_61_object = Obj(); var_62_int = 0;
	var_56_object = var_61_object;
	func_5634(var_60_bool, var_61_object, (int)408);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4073(var_66_bool)
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
	func_4370(var_71_bool, var_72_object);
	var_71_bool = var_66_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1003(var_0_object, var_438_int, var_439_object)
{
	var_441_object = Obj(); var_442_bool = 0; var_443_int = 0; var_444_bool = 0; var_445_object = Obj(); var_446_bool = 0; var_447_int = 0; var_448_bool = 0;
	var_0_object = var_439_object;
	var_449_bool = 0; var_450_object = Obj(); var_451_float = 0;
	var_439_object = var_450_object;
	func_4384(var_449_bool, var_450_object, (float)70.0);
	var_452_bool = var_449_bool == 0; //@nz
	if(var_452_bool != 0) {
		var_438_int = -2;
		return 8;
	}
	CreateDialog(var_445_object);
	var_453_int = 0;
	func_4848(var_453_int);
	@@var_445_object:SetNPCName(var_453_int);
	var_454_int = 0;
	func_4846(var_454_int);
	@@var_445_object:SetNPCDescription(var_454_int);
	var_455_string = "";
	func_4850(var_455_string);
	@@var_445_object:SetPhoto(var_455_string);
	var_456_string = "";
	func_4852(var_456_string);
	@@var_445_object:SetPhoto2(var_456_string);
	var_457_int = 0;
	func_5712(var_457_int);
	@@var_445_object:SetPlayerName(var_457_int);
	IsOverrideActive(var_446_bool);
	var_458_bool = var_446_bool;
	if(var_458_bool != 0) {
		var_438_int = -2;
		return 8;
	}
	DoDialog(var_445_object);
	var_459_bool = 0; var_460_object = Obj();
	func_4662(Obj());
	var_461_object = var_460_object;
	func_4471(var_459_bool, var_460_object);
	var_462_object = Obj(); var_463_object = Obj();
	var_439_object = var_462_object;
	var_445_object = var_463_object;
	TaskCall(3);
	func_1084(var_464_object, var_465_object, var_466_string, var_467_bool, var_462_object, var_463_object);
	TaskReturn();
	@@var_445_object:IsDialogEnd(var_448_bool);
	
Label_1066:
	var_510_bool = var_448_bool == 0; //@nz
	if(var_510_bool != 0) {
		sync();
		@@var_445_object:IsDialogEnd(var_448_bool);
		goto Label_1066;
	}
	var_439_object = Obj();
	func_4453();
	StopDialog(var_445_object);
	@@var_445_object:GetReturnValue((int)-1);
	var_447_int = var_438_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1515(var_0_object, var_514_int, var_515_object)
{
	var_517_object = Obj(); var_518_bool = 0; var_519_int = 0; var_520_bool = 0; var_521_object = Obj(); var_522_bool = 0; var_523_int = 0; var_524_bool = 0;
	var_0_object = var_515_object;
	var_525_bool = 0; var_526_object = Obj(); var_527_float = 0;
	var_515_object = var_526_object;
	func_4384(var_525_bool, var_526_object, (float)70.0);
	var_528_bool = var_525_bool == 0; //@nz
	if(var_528_bool != 0) {
		var_514_int = -2;
		return 8;
	}
	CreateDialog(var_521_object);
	var_529_int = 0;
	func_4848(var_529_int);
	@@var_521_object:SetNPCName(var_529_int);
	var_530_int = 0;
	func_4846(var_530_int);
	@@var_521_object:SetNPCDescription(var_530_int);
	var_531_string = "";
	func_4850(var_531_string);
	@@var_521_object:SetPhoto(var_531_string);
	var_532_string = "";
	func_4852(var_532_string);
	@@var_521_object:SetPhoto2(var_532_string);
	var_533_int = 0;
	func_5712(var_533_int);
	@@var_521_object:SetPlayerName(var_533_int);
	IsOverrideActive(var_522_bool);
	var_534_bool = var_522_bool;
	if(var_534_bool != 0) {
		var_514_int = -2;
		return 8;
	}
	DoDialog(var_521_object);
	var_535_bool = 0; var_536_object = Obj();
	func_4662(Obj());
	var_537_object = var_536_object;
	func_4471(var_535_bool, var_536_object);
	var_538_object = Obj(); var_539_object = Obj();
	var_515_object = var_538_object;
	var_521_object = var_539_object;
	TaskCall(5);
	func_1596(var_540_object, var_541_object, var_542_string, var_543_bool, var_538_object, var_539_object);
	TaskReturn();
	@@var_521_object:IsDialogEnd(var_524_bool);
	
Label_1578:
	var_623_bool = var_524_bool == 0; //@nz
	if(var_623_bool != 0) {
		sync();
		@@var_521_object:IsDialogEnd(var_524_bool);
		goto Label_1578;
	}
	var_515_object = Obj();
	func_4453();
	StopDialog(var_521_object);
	@@var_521_object:GetReturnValue((int)-1);
	var_523_int = var_514_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3571(var_0_object, var_1_object, var_2_object, var_3_string, var_803_object, var_804_object)
{
	var_0_object = var_804_object;
	var_1_object = var_803_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_810_string = "";
		func_3634(var_804_object, "Neutral");
		@@@var_0_object:SetMessage((int)539303);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)542544, (int)44940, (int)44939);
		@@@var_0_object:AddReply((int)539304, (int)-1, (int)41247);
		@@@var_0_object:AddReply((int)542543, (int)-1, (int)44938);
		goto Label_3604;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xdf7";
	}
Label_3604:
	var_828_bool = 0;
	func_4854(var_828_bool);
	if(var_828_bool != 0) {

	Label_3608:
		lshWaitForAnimEnd();
		var_829_string = var_3_string;
		if(var_829_string != 0) {
		} else {
			var_830_string = "";
			var_830_string = var_2_object;
			func_4609(var_830_string);
			goto Label_3608;
	}
		PlayAnimation("all", "idle");

	Label_3623:
		WaitForAnimEnd();
		var_833_string = var_3_string;
		if(var_833_string != 0) {
			goto Label_3633;
		}
		PlayAnimation("all", "idle");
		goto Label_3623;
	}
	goto Label_3633;
	
Label_3633:
	return 0;
	
}


func_5621(var_76_object)
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


func_4088(var_0_object)
{
	var_118_float = GetByIndex(var_0_object, 0);
	var_119_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_118_float, var_119_float);
	return 0;
}


func_4093(var_49_bool)
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
	func_4311(var_56_float, var_57_object);
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


