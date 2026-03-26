// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,SendWorldWndMessage/1,CreateFloatVector/1,Trigger/2,Trigger/3,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Strict|A:SetMessage|A:ClearReplies|A:AddReply|W:Neutral|W:all|W:idle|W:Shock|W:Grief|W:Gratitude|W:player|A:GetPosition|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|W:m|W:Can't find lsh animation : |A:add|W:money|W:Money|A:HasItem|W:reputation|W:ui/NPC_Alexandr.png|W:ui/NPC_Alexandr_b.png|W:k1q01|W:k1q01AlexandrGotoKaterina|W:pt_map_katerina|A:AddMark|W:k1q01AlexandrGotoStation|W:pt_k1q01_doberman|W:quest_k1_01|W:init_alexandr|W:completed|A:ShowMap|W:k1q02|W:ook1Alexandr1|W:k2q01|W:k2q01AlexandrGotoMladVlad|W:pt_map_mladvlad|W:ook2Alexandr1|W:volonteers_klara|W:disease|W:ospina|W:k3q01|W:k3q01AlexandrGotoAnna|W:pt_map_anna|W:ook3Alexandr1|W:k4q01|W:k4q01AlexandrGotoGrif|W:pt_map_grif|W:ook4Alexandr1|W:quest_k4_01|W:k4q01_scull_bag|A:RemoveItemByType|W:k4q03|W:k4q03AlexandrGotoBurah|W:pt_map_k4q03_burah|W:quest_k4_03|W:place_burah|W:fail|W:k5q01|W:k5q01AlexandrGotoMladVlad|W:ook5Alexandr1|W:k5q02|W:quest_k5_02|W:place_andrei|W:ook6Alexandr1|W:k6q01|W:quest_k6_01|W:lock_danko|W:ook6Alexandr2|W:k7q01|W:k11q01SoulCount|W:ook11Alexandr1|W:ook4Alexandr2|W:money500 is given|W:playsound|W:givemoney|W:k2AlexandrVisit|A:SetReturnValue|W:k3AlexandrVisit|W:k4AlexandrVisit|W:k5AlexandrVisit|W:k6AlexandrVisit|W:K_Mission2|W:k1q01Healed|W:k11q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|A:Remove|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x1c19
// @RUN_TASK: 22
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x118 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x5e8 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x910 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb7c vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xcc5 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1233 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0x14c4 vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0x16b1 vars=int,int
// @TASK_16: vars=object params=2
// @TASK_17: vars=object,object,string,bool params=2
// @EVENT_11: op=0x18ec vars=int,int
// @TASK_18: vars=object params=2
// @TASK_19: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1a7e vars=int,int
// @TASK_20: vars=object params=2
// @TASK_21: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1bef vars=int,int
// @TASK_22: vars=cvector params=0
// @EVENT_7: op=0x1c65 vars=int
// @EVENT_6: op=0x1c8b vars=
// @EVENT_5: op=0x1c9a vars=
// @EVENT_45: op=0x1ca7 vars=bool
// @EVENT_0: op=0x1cb3 vars=object
// @PE: 0x51,0x102,0x118,0x55c,0x5d2,0x5e8,0x88e,0x8fa,0x910,0xb2c,0xb66,0xb7c,0xc0e,0xcaf,0xcc5,0x11ac,0x121d,0x1233,0x141a,0x14ae,0x14c4,0x1652,0x169b,0x16b1,0x1889,0x18d6,0x18ec,0x1a29,0x1a68,0x1a7e,0x1b9f,0x1bd9,0x1bef,0x1c65,0x1c8b,0x1ca7,0x1e8b,0x1ec1,0x1f14,0x1f6f,0x1f79,0x1f89,0x1f99,0x1fa5,0x1fab,0x1fce,0x1fd4,0x1fe3,0x2006,0x200c,0x201b,0x203e,0x2044,0x2061,0x2087,0x20ab,0x20b1,0x20ba,0x20c8,0x20ce,0x20df,0x20e5,0x20ee,0x212a,0x2130,0x2136,0x2140,0x2146,0x2156,0x215c,0x2161,0x2167,0x216d,0x2173,0x2179,0x218d,0x219d,0x21ad,0x21bd,0x21c4,0x21cb,0x21d7,0x21e3,0x21ef,0x21fb,0x2207,0x2213,0x221f,0x222b,0x2237,0x2243,0x224f,0x225b,0x2267,0x2273,0x227f,0x228b,0x2296,0x22a2,0x22ae,0x22ba,0x22c6,0x22d2,0x22de,0x22ea,0x22f6,0x2302,0x230e,0x231a,0x2326,0x2332,0x233e,0x259b

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_7796();
		var_61_bool = var_57_cvector == (int)25998;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_7996();
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_8057(var_106_object);
		}
		var_132_bool = var_57_cvector == (int)26067;
		if(var_132_bool != 0) {
			var_133_object = Obj(); var_134_object = Obj();
			var_133_object = var_1_object;
			var_134_object = var_0_object;
			func_8089();
		}
		var_154_bool = var_57_cvector == (int)26005;
		if(var_154_bool != 0) {
			var_155_object = Obj(); var_156_object = Obj();
			var_155_object = var_1_object;
			var_156_object = var_0_object;
			func_8019();
			var_181_object = Obj(); var_182_object = Obj();
			var_181_object = var_1_object;
			var_182_object = var_0_object;
			func_8073(var_182_object);
		}
		var_189_bool = var_57_cvector == (int)26052;
		if(var_189_bool != 0) {
			var_190_object = Obj(); var_191_object = Obj();
			var_190_object = var_1_object;
			var_191_object = var_0_object;
			func_8047();
			var_203_object = Obj(); var_204_object = Obj();
			var_203_object = var_1_object;
			var_204_object = var_0_object;
			func_8569();
			var_229_object = Obj(); var_230_object = Obj();
			var_229_object = var_1_object;
			var_230_object = var_0_object;
			func_8637(var_230_object);
			var_269_object = Obj(); var_270_object = Obj();
			var_269_object = var_1_object;
			var_270_object = var_0_object;
			func_8540(var_270_object);
		}
		var_273_bool = var_57_cvector == (int)26071;
		if(var_273_bool != 0) {
			var_274_object = Obj(); var_275_object = Obj();
			var_274_object = var_1_object;
			var_275_object = var_0_object;
			func_8089();
		}
		var_277_bool = var_57_cvector == (int)26094;
		if(var_277_bool != 0) {
			var_278_object = Obj(); var_279_object = Obj();
			var_278_object = var_1_object;
			var_279_object = var_0_object;
			func_8107();
			var_290_object = Obj(); var_291_object = Obj();
			var_290_object = var_1_object;
			var_291_object = var_0_object;
			func_8637(var_291_object);
		}
		var_293_bool = var_57_cvector == (int)43919;
		if(var_293_bool != 0) {
			var_294_object = Obj(); var_295_object = Obj();
			var_294_object = var_1_object;
			var_295_object = var_0_object;
			func_8107();
			var_296_object = Obj(); var_297_object = Obj();
			var_296_object = var_1_object;
			var_297_object = var_0_object;
			func_8637(var_297_object);
		}
		var_299_bool = var_56_bool == (int)25995;
		if(var_299_bool != 0) {
			var_300_bool = 0; var_301_object = Obj();
			var_301_object = var_1_object;
			func_8651(var_301_object);
			if(var_300_bool != 0) {
				var_306_string = "";
				func_258(var_57_cvector, "Strict");
				@@@var_0_object:SetMessage((int)524656);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)526341, (int)27627, (int)27626);
				return 0;
			}
			var_327_bool = 0;
			var_327_bool = 0;
			var_328_bool = 0; var_329_object = Obj();
			var_329_object = var_1_object;
			func_8687(var_329_object);
			if(var_328_bool != 0) {
				var_334_bool = 0; var_335_object = Obj();
				var_335_object = var_1_object;
				func_8711(var_335_object);
				if(var_334_bool != 0) {
					var_327_bool = 1;
				}
			}
			if(var_327_bool != 0) {
				var_340_object = Obj(); var_341_object = Obj();
				var_340_object = var_1_object;
				var_341_object = var_0_object;
				func_8101();
				var_344_string = "";
				func_258(var_57_cvector, "Strict");
				@@@var_0_object:SetMessage((int)524742);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)526324, (int)27607, (int)27606);
				@@@var_0_object:AddReply((int)526540, (int)27607, (int)27809);
				return 0;
			}
			var_352_string = "";
			func_258(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)524660);
			@@@var_0_object:ClearReplies();
			var_354_bool = 0; var_355_object = Obj();
			var_355_object = var_1_object;
			func_8663(var_355_object);
			if(var_354_bool != 0) {
				@@@var_0_object:AddReply((int)524664, (int)26004, (int)26003);
			}
			var_363_bool = 0;
			var_363_bool = 0;
			var_364_bool = 0; var_365_object = Obj();
			var_365_object = var_1_object;
			func_8675(var_365_object);
			if(var_364_bool != 0) {
				var_370_bool = 0; var_371_object = Obj();
				var_371_object = var_1_object;
				func_8687(var_371_object);
				var_372_bool = var_370_bool == 0; //@nz
				if(var_372_bool != 0) {
					var_363_bool = 1;
				}
			}
			if(var_363_bool != 0) {
				@@@var_0_object:AddReply((int)524711, (int)26051, (int)26050);
			}
			var_376_bool = 0;
			var_376_bool = 0;
			var_377_bool = 0; var_378_object = Obj();
			var_378_object = var_1_object;
			func_8699(var_378_object);
			if(var_377_bool != 0) {
				var_383_bool = 0; var_384_object = Obj();
				var_384_object = var_1_object;
				func_8711(var_384_object);
				var_385_bool = var_383_bool == 0; //@nz
				if(var_385_bool != 0) {
					var_376_bool = 1;
				}
			}
			if(var_376_bool != 0) {
				@@@var_0_object:AddReply((int)524745, (int)27820, (int)26069);
			}
			var_389_bool = 0; var_390_object = Obj();
			var_390_object = var_1_object;
			func_8723(var_390_object);
			if(var_389_bool != 0) {
				@@@var_0_object:AddReply((int)524768, (int)27831, (int)26092);
			}
			@@@var_0_object:AddReply((int)524661, (int)-1, (int)26000);
			@@@var_0_object:AddReply((int)541719, (int)-1, (int)43909);
			return 0;
		}
		var_405_bool = var_56_bool == (int)27831;
		if(var_405_bool != 0) {
			var_406_string = "";
			func_258(var_57_cvector, "Shock");
			@@@var_0_object:SetMessage((int)526561);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526562, (int)27833, (int)27832);
			@@@var_0_object:AddReply((int)541720, (int)27833, (int)43910);
			return 0;
		}
		var_415_bool = var_56_bool == (int)27833;
		if(var_415_bool != 0) {
			var_416_string = "";
			func_258(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)526563);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526564, (int)26093, (int)27834);
			return 0;
		}
		var_422_bool = var_56_bool == (int)26093;
		if(var_422_bool != 0) {
			var_423_string = "";
			func_258(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)524769);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526565, (int)43913, (int)27835);
			@@@var_0_object:AddReply((int)526567, (int)27836, (int)27837);
			return 0;
		}
		var_432_bool = var_56_bool == (int)43913;
		if(var_432_bool != 0) {
			var_433_string = "";
			func_258(var_57_cvector, "Shock");
			@@@var_0_object:SetMessage((int)541722);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541723, (int)27836, (int)43914);
			return 0;
		}
		var_439_bool = var_56_bool == (int)27836;
		if(var_439_bool != 0) {
			var_440_string = "";
			func_258(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526566);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526568, (int)27840, (int)27839);
			return 0;
		}
		var_446_bool = var_56_bool == (int)27840;
		if(var_446_bool != 0) {
			var_447_string = "";
			func_258(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)526569);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541724, (int)43916, (int)43915);
			@@@var_0_object:AddReply((int)541726, (int)43916, (int)43917);
			return 0;
		}
		var_456_bool = var_56_bool == (int)43916;
		if(var_456_bool != 0) {
			var_457_string = "";
			func_258(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541725);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524770, (int)-1, (int)26094);
			@@@var_0_object:AddReply((int)541727, (int)-1, (int)43919);
			return 0;
		}
		var_466_bool = var_56_bool == (int)27820;
		if(var_466_bool != 0) {
			var_467_string = "";
			func_258(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)526550);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526613, (int)27887, (int)27886);
			return 0;
		}
		var_473_bool = var_56_bool == (int)27887;
		if(var_473_bool != 0) {
			var_474_string = "";
			func_258(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526614);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526615, (int)27889, (int)27888);
			return 0;
		}
		var_480_bool = var_56_bool == (int)27889;
		if(var_480_bool != 0) {
			var_481_string = "";
			func_258(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526616);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524747, (int)-1, (int)26071);
			return 0;
		}
		var_487_bool = var_56_bool == (int)26051;
		if(var_487_bool != 0) {
			var_488_string = "";
			func_258(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)524712);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526534, (int)27803, (int)27802);
			@@@var_0_object:AddReply((int)541728, (int)43921, (int)43920);
			return 0;
		}
		var_497_bool = var_56_bool == (int)43921;
		if(var_497_bool != 0) {
			var_498_string = "";
			func_258(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541729);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541730, (int)43923, (int)43922);
			@@@var_0_object:AddReply((int)541733, (int)43927, (int)43926);
			return 0;
		}
		var_507_bool = var_56_bool == (int)43927;
		if(var_507_bool != 0) {
			var_508_string = "";
			func_258(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)541734);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541735, (int)27803, (int)43928);
			return 0;
		}
		var_514_bool = var_56_bool == (int)43923;
		if(var_514_bool != 0) {
			var_515_string = "";
			func_258(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541731);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541732, (int)27803, (int)43924);
			return 0;
		}
		var_521_bool = var_56_bool == (int)27803;
		if(var_521_bool != 0) {
			var_522_string = "";
			func_258(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)526535);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524713, (int)-1, (int)26052);
			return 0;
		}
		var_528_bool = var_56_bool == (int)26004;
		if(var_528_bool != 0) {
			var_529_string = "";
			func_258(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)524665);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526349, (int)27635, (int)27634);
			@@@var_0_object:AddReply((int)526347, (int)27633, (int)27632);
			return 0;
		}
		var_538_bool = var_56_bool == (int)27633;
		if(var_538_bool != 0) {
			var_539_string = "";
			func_258(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)526348);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526528, (int)27635, (int)27794);
			return 0;
		}
		var_545_bool = var_56_bool == (int)27635;
		if(var_545_bool != 0) {
			var_546_string = "";
			func_258(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526350);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526526, (int)27793, (int)27792);
			return 0;
		}
		var_552_bool = var_56_bool == (int)27793;
		if(var_552_bool != 0) {
			var_553_string = "";
			func_258(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)526527);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526529, (int)27797, (int)27796);
			@@@var_0_object:AddReply((int)526531, (int)27799, (int)27798);
			return 0;
		}
		var_562_bool = var_56_bool == (int)27799;
		if(var_562_bool != 0) {
			var_563_string = "";
			func_258(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)526532);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526533, (int)27797, (int)27800);
			return 0;
		}
		var_569_bool = var_56_bool == (int)27797;
		if(var_569_bool != 0) {
			var_570_string = "";
			func_258(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526530);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524666, (int)-1, (int)26005);
			return 0;
		}
		var_576_bool = var_56_bool == (int)27607;
		if(var_576_bool != 0) {
			var_577_string = "";
			func_258(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)526325);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526326, (int)27609, (int)27608);
			@@@var_0_object:AddReply((int)526537, (int)27806, (int)27805);
			return 0;
		}
		var_586_bool = var_56_bool == (int)27806;
		if(var_586_bool != 0) {
			var_587_string = "";
			func_258(var_57_cvector, "Shock");
			@@@var_0_object:SetMessage((int)526538);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526539, (int)27609, (int)27807);
			return 0;
		}
		var_593_bool = var_56_bool == (int)27609;
		if(var_593_bool != 0) {
			var_594_string = "";
			func_258(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526327);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526343, (int)27629, (int)27628);
			return 0;
		}
		var_600_bool = var_56_bool == (int)27629;
		if(var_600_bool != 0) {
			var_601_string = "";
			func_258(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)526344);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524743, (int)27631, (int)26067);
			@@@var_0_object:AddReply((int)524744, (int)-1, (int)26068);
			return 0;
		}
		var_610_bool = var_56_bool == (int)27631;
		if(var_610_bool != 0) {
			var_611_string = "";
			func_258(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)526346);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526345, (int)27883, (int)27630);
			return 0;
		}
		var_617_bool = var_56_bool == (int)27883;
		if(var_617_bool != 0) {
			var_618_string = "";
			func_258(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526610);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526611, (int)27817, (int)27884);
			return 0;
		}
		var_624_bool = var_56_bool == (int)27817;
		if(var_624_bool != 0) {
			var_625_string = "";
			func_258(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526547);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526548, (int)-1, (int)27818);
			@@@var_0_object:AddReply((int)526549, (int)-1, (int)27819);
			return 0;
		}
		var_634_bool = var_56_bool == (int)27627;
		if(var_634_bool != 0) {
			var_635_string = "";
			func_258(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)526342);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526328, (int)27611, (int)27610);
			@@@var_0_object:AddReply((int)526332, (int)27615, (int)27614);
			return 0;
		}
		var_644_bool = var_56_bool == (int)27615;
		if(var_644_bool != 0) {
			var_645_string = "";
			func_258(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)526333);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526334, (int)27611, (int)27616);
			return 0;
		}
		var_651_bool = var_56_bool == (int)27611;
		if(var_651_bool != 0) {
			var_652_string = "";
			func_258(var_57_cvector, "Shock");
			@@@var_0_object:SetMessage((int)526329);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526330, (int)27597, (int)27612);
			@@@var_0_object:AddReply((int)526335, (int)27597, (int)27618);
			return 0;
		}
		var_661_bool = var_56_bool == (int)27597;
		if(var_661_bool != 0) {
			var_662_string = "";
			func_258(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)526315);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526336, (int)27621, (int)27620);
			@@@var_0_object:AddReply((int)541703, (int)27599, (int)43887);
			return 0;
		}
		var_671_bool = var_56_bool == (int)27621;
		if(var_671_bool != 0) {
			var_672_string = "";
			func_258(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)526337);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526316, (int)27599, (int)27598);
			return 0;
		}
		var_678_bool = var_56_bool == (int)27599;
		if(var_678_bool != 0) {
			var_679_string = "";
			func_258(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)526317);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526318, (int)27601, (int)27600);
			return 0;
		}
		var_685_bool = var_56_bool == (int)27601;
		if(var_685_bool != 0) {
			var_686_string = "";
			func_258(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)526319);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526320, (int)27603, (int)27602);
			@@@var_0_object:AddReply((int)526340, (int)27603, (int)27624);
			return 0;
		}
		var_695_bool = var_56_bool == (int)27603;
		if(var_695_bool != 0) {
			var_696_string = "";
			func_258(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)526321);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526322, (int)27605, (int)27604);
			return 0;
		}
		var_702_bool = var_56_bool == (int)27605;
		if(var_702_bool != 0) {
			var_703_string = "";
			func_258(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)526323);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524657, (int)25997, (int)25996);
			return 0;
		}
		var_709_bool = var_56_bool == (int)25997;
		if(var_709_bool != 0) {
			var_710_string = "";
			func_258(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)524658);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524659, (int)-1, (int)25998);
			return 0;
		}
		var_3_string = true;
		var_715_bool = 0;
		func_7994(var_715_bool);
		if(var_715_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x119";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_7796();
		var_61_bool = var_57_cvector == (int)26597;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_8116();
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_8605(var_114_object);
		}
		var_140_bool = var_57_cvector == (int)26602;
		if(var_140_bool != 0) {
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_object;
			func_8116();
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_object;
			func_8605(var_144_object);
		}
		var_146_bool = var_57_cvector == (int)26647;
		if(var_146_bool != 0) {
			var_147_object = Obj(); var_148_object = Obj();
			var_147_object = var_1_object;
			var_148_object = var_0_object;
			func_8148();
			var_166_object = Obj(); var_167_object = Obj();
			var_166_object = var_1_object;
			var_167_object = var_0_object;
			func_8637(var_167_object);
		}
		var_207_bool = var_57_cvector == (int)41419;
		if(var_207_bool != 0) {
			var_208_object = Obj(); var_209_object = Obj();
			var_208_object = var_1_object;
			var_209_object = var_0_object;
			func_8148();
			var_210_object = Obj(); var_211_object = Obj();
			var_210_object = var_1_object;
			var_211_object = var_0_object;
			func_8637(var_211_object);
		}
		var_213_bool = var_57_cvector == (int)26645;
		if(var_213_bool != 0) {
			var_214_object = Obj(); var_215_object = Obj();
			var_214_object = var_1_object;
			var_215_object = var_0_object;
			func_8163();
			var_226_object = Obj(); var_227_object = Obj();
			var_226_object = var_1_object;
			var_227_object = var_0_object;
			func_8644(var_227_object);
		}
		var_232_bool = var_57_cvector == (int)41414;
		if(var_232_bool != 0) {
			var_233_object = Obj(); var_234_object = Obj();
			var_233_object = var_1_object;
			var_234_object = var_0_object;
			func_8163();
			var_235_object = Obj(); var_236_object = Obj();
			var_235_object = var_1_object;
			var_236_object = var_0_object;
			func_8644(var_236_object);
		}
		var_238_bool = var_56_bool == (int)26594;
		if(var_238_bool != 0) {
			var_239_bool = 0; var_240_object = Obj();
			var_240_object = var_1_object;
			func_8747(var_240_object);
			if(var_239_bool != 0) {
				var_247_object = Obj(); var_248_object = Obj();
				var_247_object = var_1_object;
				var_248_object = var_0_object;
				func_8142();
				var_251_object = Obj(); var_252_object = Obj();
				var_251_object = var_1_object;
				var_252_object = var_0_object;
				func_8534();
				var_255_string = "";
				func_1490(var_57_cvector, "Shock");
				@@@var_0_object:SetMessage((int)525226);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)529130, (int)30577, (int)30576);
				@@@var_0_object:AddReply((int)539466, (int)30579, (int)41389);
				@@@var_0_object:AddReply((int)542127, (int)30579, (int)44434);
				return 0;
			}
			var_282_string = "";
			func_1490(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525231);
			@@@var_0_object:ClearReplies();
			var_284_bool = 0; var_285_object = Obj();
			var_285_object = var_1_object;
			func_8735(var_285_object);
			if(var_284_bool != 0) {
				@@@var_0_object:AddReply((int)525232, (int)44437, (int)26600);
			}
			var_293_bool = 0; var_294_object = Obj();
			var_294_object = var_1_object;
			func_8759(var_294_object);
			if(var_293_bool != 0) {
				@@@var_0_object:AddReply((int)525274, (int)26643, (int)26642);
			}
			@@@var_0_object:AddReply((int)525235, (int)-1, (int)26603);
			@@@var_0_object:AddReply((int)529138, (int)-1, (int)30584);
			return 0;
		}
		var_309_bool = var_56_bool == (int)26643;
		if(var_309_bool != 0) {
			var_310_string = "";
			func_1490(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525275);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542136, (int)44448, (int)44447);
			@@@var_0_object:AddReply((int)542138, (int)44448, (int)44449);
			@@@var_0_object:AddReply((int)542139, (int)44448, (int)44450);
			return 0;
		}
		var_322_bool = var_56_bool == (int)44448;
		if(var_322_bool != 0) {
			var_323_string = "";
			func_1490(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)542137);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525276, (int)26646, (int)26644);
			@@@var_0_object:AddReply((int)529140, (int)30585, (int)30586);
			return 0;
		}
		var_332_bool = var_56_bool == (int)30585;
		if(var_332_bool != 0) {
			var_333_string = "";
			func_1490(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)529139);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539481, (int)41411, (int)41410);
			@@@var_0_object:AddReply((int)539483, (int)41411, (int)41412);
			return 0;
		}
		var_342_bool = var_56_bool == (int)41411;
		if(var_342_bool != 0) {
			var_343_string = "";
			func_1490(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)539482);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525277, (int)-1, (int)26645);
			@@@var_0_object:AddReply((int)539484, (int)-1, (int)41414);
			return 0;
		}
		var_352_bool = var_56_bool == (int)26646;
		if(var_352_bool != 0) {
			var_353_string = "";
			func_1490(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)525278);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539485, (int)41416, (int)41415);
			@@@var_0_object:AddReply((int)539487, (int)41416, (int)41417);
			return 0;
		}
		var_362_bool = var_56_bool == (int)41416;
		if(var_362_bool != 0) {
			var_363_string = "";
			func_1490(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)539486);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525279, (int)-1, (int)26647);
			@@@var_0_object:AddReply((int)539488, (int)-1, (int)41419);
			return 0;
		}
		var_372_bool = var_56_bool == (int)44437;
		if(var_372_bool != 0) {
			var_373_string = "";
			func_1490(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)542128);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542129, (int)44439, (int)44438);
			@@@var_0_object:AddReply((int)542132, (int)44439, (int)44441);
			return 0;
		}
		var_382_bool = var_56_bool == (int)44439;
		if(var_382_bool != 0) {
			var_383_string = "";
			func_1490(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)542130);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542131, (int)26601, (int)44440);
			@@@var_0_object:AddReply((int)542133, (int)44443, (int)44442);
			return 0;
		}
		var_392_bool = var_56_bool == (int)44443;
		if(var_392_bool != 0) {
			var_393_string = "";
			func_1490(var_57_cvector, "Shock");
			@@@var_0_object:SetMessage((int)542134);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542135, (int)26601, (int)44444);
			return 0;
		}
		var_399_bool = var_56_bool == (int)26601;
		if(var_399_bool != 0) {
			var_400_string = "";
			func_1490(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525233);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525234, (int)-1, (int)26602);
			return 0;
		}
		var_406_bool = var_56_bool == (int)30577;
		if(var_406_bool != 0) {
			var_407_string = "";
			func_1490(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)529131);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529132, (int)30579, (int)30578);
			@@@var_0_object:AddReply((int)539477, (int)41406, (int)41405);
			return 0;
		}
		var_416_bool = var_56_bool == (int)41406;
		if(var_416_bool != 0) {
			var_417_string = "";
			func_1490(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539478);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539479, (int)30579, (int)41407);
			return 0;
		}
		var_423_bool = var_56_bool == (int)30579;
		if(var_423_bool != 0) {
			var_424_string = "";
			func_1490(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)529133);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525227, (int)26596, (int)26595);
			@@@var_0_object:AddReply((int)539467, (int)41393, (int)41392);
			return 0;
		}
		var_433_bool = var_56_bool == (int)41393;
		if(var_433_bool != 0) {
			var_434_string = "";
			func_1490(var_57_cvector, "Shock");
			@@@var_0_object:SetMessage((int)539468);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539469, (int)26596, (int)41394);
			@@@var_0_object:AddReply((int)539470, (int)26596, (int)41396);
			return 0;
		}
		var_443_bool = var_56_bool == (int)26596;
		if(var_443_bool != 0) {
			var_444_string = "";
			func_1490(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525228);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539471, (int)41399, (int)41398);
			@@@var_0_object:AddReply((int)539476, (int)41399, (int)41404);
			return 0;
		}
		var_453_bool = var_56_bool == (int)41399;
		if(var_453_bool != 0) {
			var_454_string = "";
			func_1490(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)539472);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539473, (int)41401, (int)41400);
			@@@var_0_object:AddReply((int)539475, (int)41401, (int)41402);
			return 0;
		}
		var_463_bool = var_56_bool == (int)41401;
		if(var_463_bool != 0) {
			var_464_string = "";
			func_1490(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)539474);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529134, (int)30581, (int)30580);
			@@@var_0_object:AddReply((int)539480, (int)-1, (int)41409);
			return 0;
		}
		var_473_bool = var_56_bool == (int)30581;
		if(var_473_bool != 0) {
			var_474_string = "";
			func_1490(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)529135);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529136, (int)30583, (int)30582);
			return 0;
		}
		var_480_bool = var_56_bool == (int)30583;
		if(var_480_bool != 0) {
			var_481_string = "";
			func_1490(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)529137);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525229, (int)-1, (int)26597);
			return 0;
		}
		var_3_string = true;
		var_486_bool = 0;
		func_7994(var_486_bool);
		if(var_486_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x5e9";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_7796();
		var_61_bool = var_57_cvector == (int)26766;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_8172();
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_8589(var_114_object);
		}
		var_140_bool = var_57_cvector == (int)26772;
		if(var_140_bool != 0) {
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_object;
			func_8172();
		}
		var_144_bool = var_57_cvector == (int)26808;
		if(var_144_bool != 0) {
			var_145_object = Obj(); var_146_object = Obj();
			var_145_object = var_1_object;
			var_146_object = var_0_object;
			func_8204();
			var_164_object = Obj(); var_165_object = Obj();
			var_164_object = var_1_object;
			var_165_object = var_0_object;
			func_8502(var_165_object);
			var_185_object = Obj(); var_186_object = Obj();
			var_185_object = var_1_object;
			var_186_object = var_0_object;
			func_8512();
			var_189_object = Obj(); var_190_object = Obj();
			var_189_object = var_1_object;
			var_190_object = var_0_object;
			func_8637(var_190_object);
		}
		var_230_bool = var_57_cvector == (int)26813;
		if(var_230_bool != 0) {
			var_231_object = Obj(); var_232_object = Obj();
			var_231_object = var_1_object;
			var_232_object = var_0_object;
			func_8219();
			var_243_object = Obj(); var_244_object = Obj();
			var_243_object = var_1_object;
			var_244_object = var_0_object;
			func_8644(var_244_object);
		}
		var_249_bool = var_56_bool == (int)26765;
		if(var_249_bool != 0) {
			var_250_bool = 0; var_251_object = Obj();
			var_251_object = var_1_object;
			func_8783(var_251_object);
			if(var_250_bool != 0) {
				var_258_object = Obj(); var_259_object = Obj();
				var_258_object = var_1_object;
				var_259_object = var_0_object;
				func_8198();
				var_262_object = Obj(); var_263_object = Obj();
				var_262_object = var_1_object;
				var_263_object = var_0_object;
				func_8545();
				var_266_string = "";
				func_2298(var_57_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)525397);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)542415, (int)44794, (int)44793);
				@@@var_0_object:AddReply((int)542421, (int)44794, (int)44799);
				return 0;
			}
			var_290_string = "";
			func_2298(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)525400);
			@@@var_0_object:ClearReplies();
			var_292_bool = 0; var_293_object = Obj();
			var_293_object = var_1_object;
			func_8771(var_293_object);
			if(var_292_bool != 0) {
				@@@var_0_object:AddReply((int)525401, (int)26771, (int)26769);
			}
			var_301_bool = 0; var_302_object = Obj();
			var_302_object = var_1_object;
			func_8795(var_302_object);
			if(var_301_bool != 0) {
				@@@var_0_object:AddReply((int)525435, (int)26804, (int)26803);
			}
			@@@var_0_object:AddReply((int)525402, (int)-1, (int)26770);
			return 0;
		}
		var_314_bool = var_56_bool == (int)26804;
		if(var_314_bool != 0) {
			var_315_string = "";
			func_2298(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)525436);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525437, (int)26807, (int)26805);
			@@@var_0_object:AddReply((int)525438, (int)30783, (int)26806);
			return 0;
		}
		var_324_bool = var_56_bool == (int)30783;
		if(var_324_bool != 0) {
			var_325_string = "";
			func_2298(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)529328);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529329, (int)30785, (int)30784);
			return 0;
		}
		var_331_bool = var_56_bool == (int)30785;
		if(var_331_bool != 0) {
			var_332_string = "";
			func_2298(var_57_cvector, "Shock");
			@@@var_0_object:SetMessage((int)529330);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529331, (int)26812, (int)30786);
			return 0;
		}
		var_338_bool = var_56_bool == (int)26812;
		if(var_338_bool != 0) {
			var_339_string = "";
			func_2298(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)525444);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525445, (int)-1, (int)26813);
			return 0;
		}
		var_345_bool = var_56_bool == (int)26807;
		if(var_345_bool != 0) {
			var_346_string = "";
			func_2298(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525439);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525440, (int)-1, (int)26808);
			return 0;
		}
		var_352_bool = var_56_bool == (int)26771;
		if(var_352_bool != 0) {
			var_353_string = "";
			func_2298(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)525403);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525404, (int)-1, (int)26772);
			return 0;
		}
		var_359_bool = var_56_bool == (int)44794;
		if(var_359_bool != 0) {
			var_360_string = "";
			func_2298(var_57_cvector, "Shock");
			@@@var_0_object:SetMessage((int)542416);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542417, (int)44796, (int)44795);
			@@@var_0_object:AddReply((int)542422, (int)44796, (int)44801);
			return 0;
		}
		var_369_bool = var_56_bool == (int)44796;
		if(var_369_bool != 0) {
			var_370_string = "";
			func_2298(var_57_cvector, "Shock");
			@@@var_0_object:SetMessage((int)542418);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542419, (int)44803, (int)44797);
			return 0;
		}
		var_376_bool = var_56_bool == (int)44803;
		if(var_376_bool != 0) {
			var_377_string = "";
			func_2298(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)542423);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542424, (int)44805, (int)44804);
			@@@var_0_object:AddReply((int)542427, (int)44805, (int)44807);
			return 0;
		}
		var_386_bool = var_56_bool == (int)44805;
		if(var_386_bool != 0) {
			var_387_string = "";
			func_2298(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)542425);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542426, (int)44809, (int)44806);
			@@@var_0_object:AddReply((int)542430, (int)44809, (int)44811);
			return 0;
		}
		var_396_bool = var_56_bool == (int)44809;
		if(var_396_bool != 0) {
			var_397_string = "";
			func_2298(var_57_cvector, "Shock");
			@@@var_0_object:SetMessage((int)542428);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542429, (int)44798, (int)44810);
			@@@var_0_object:AddReply((int)542431, (int)44798, (int)44813);
			return 0;
		}
		var_406_bool = var_56_bool == (int)44798;
		if(var_406_bool != 0) {
			var_407_string = "";
			func_2298(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)542420);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529321, (int)30776, (int)30775);
			@@@var_0_object:AddReply((int)529327, (int)30776, (int)30781);
			return 0;
		}
		var_416_bool = var_56_bool == (int)30776;
		if(var_416_bool != 0) {
			var_417_string = "";
			func_2298(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529322);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529323, (int)30778, (int)30777);
			@@@var_0_object:AddReply((int)542432, (int)30780, (int)44815);
			return 0;
		}
		var_426_bool = var_56_bool == (int)30778;
		if(var_426_bool != 0) {
			var_427_string = "";
			func_2298(var_57_cvector, "Shock");
			@@@var_0_object:SetMessage((int)529324);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529325, (int)30780, (int)30779);
			return 0;
		}
		var_433_bool = var_56_bool == (int)30780;
		if(var_433_bool != 0) {
			var_434_string = "";
			func_2298(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)529326);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525398, (int)-1, (int)26766);
			@@@var_0_object:AddReply((int)525399, (int)-1, (int)26767);
			return 0;
		}
		var_3_string = true;
		var_442_bool = 0;
		func_7994(var_442_bool);
		if(var_442_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x911";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_7796();
		var_61_bool = var_56_bool == (int)26815;
		if(var_61_bool != 0) {
			var_62_string = "";
			func_2918(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525459);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525460, (int)27525, (int)26816);
			@@@var_0_object:AddReply((int)526255, (int)27525, (int)27528);
			return 0;
		}
		var_87_bool = var_56_bool == (int)27525;
		if(var_87_bool != 0) {
			var_88_string = "";
			func_2918(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526252);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526253, (int)-1, (int)27526);
			@@@var_0_object:AddReply((int)526254, (int)-1, (int)27527);
			return 0;
		}
		var_3_string = true;
		var_96_bool = 0;
		func_7994(var_96_bool);
		if(var_96_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb7d";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_7796();
		var_61_bool = var_57_cvector == (int)44605;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_8228();
		}
		var_114_bool = var_57_cvector == (int)26996;
		if(var_114_bool != 0) {
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_object;
			func_8228();
			var_117_object = Obj(); var_118_object = Obj();
			var_117_object = var_1_object;
			var_118_object = var_0_object;
			func_8621(var_118_object);
		}
		var_144_bool = var_57_cvector == (int)27001;
		if(var_144_bool != 0) {
			var_145_object = Obj(); var_146_object = Obj();
			var_145_object = var_1_object;
			var_146_object = var_0_object;
			func_8228();
		}
		var_148_bool = var_57_cvector == (int)27030;
		if(var_148_bool != 0) {
			var_149_object = Obj(); var_150_object = Obj();
			var_149_object = var_1_object;
			var_150_object = var_0_object;
			func_8276(var_150_object);
		}
		var_166_bool = var_57_cvector == (int)27043;
		if(var_166_bool != 0) {
			var_167_object = Obj(); var_168_object = Obj();
			var_167_object = var_1_object;
			var_168_object = var_0_object;
			func_8260();
			var_190_object = Obj(); var_191_object = Obj();
			var_190_object = var_1_object;
			var_191_object = var_0_object;
			func_8637(var_191_object);
		}
		var_231_bool = var_57_cvector == (int)27046;
		if(var_231_bool != 0) {
			var_232_object = Obj(); var_233_object = Obj();
			var_232_object = var_1_object;
			var_233_object = var_0_object;
			func_8289();
			var_245_object = Obj(); var_246_object = Obj();
			var_245_object = var_1_object;
			var_246_object = var_0_object;
			func_8644(var_246_object);
		}
		var_251_bool = var_57_cvector == (int)44652;
		if(var_251_bool != 0) {
			var_252_object = Obj(); var_253_object = Obj();
			var_252_object = var_1_object;
			var_253_object = var_0_object;
			func_8260();
			var_254_object = Obj(); var_255_object = Obj();
			var_254_object = var_1_object;
			var_255_object = var_0_object;
			func_8637(var_255_object);
		}
		var_257_bool = var_57_cvector == (int)27111;
		if(var_257_bool != 0) {
			var_258_object = Obj(); var_259_object = Obj();
			var_258_object = var_1_object;
			var_259_object = var_0_object;
			func_8299();
			var_281_object = Obj(); var_282_object = Obj();
			var_281_object = var_1_object;
			var_282_object = var_0_object;
			func_8518(var_282_object);
		}
		var_289_bool = var_57_cvector == (int)27112;
		if(var_289_bool != 0) {
			var_290_object = Obj(); var_291_object = Obj();
			var_290_object = var_1_object;
			var_291_object = var_0_object;
			func_8299();
			var_292_object = Obj(); var_293_object = Obj();
			var_292_object = var_1_object;
			var_293_object = var_0_object;
			func_8518(var_293_object);
		}
		var_295_bool = var_57_cvector == (int)27122;
		if(var_295_bool != 0) {
			var_296_object = Obj(); var_297_object = Obj();
			var_296_object = var_1_object;
			var_297_object = var_0_object;
			func_8496();
		}
		var_301_bool = var_57_cvector == (int)27124;
		if(var_301_bool != 0) {
			var_302_object = Obj(); var_303_object = Obj();
			var_302_object = var_1_object;
			var_303_object = var_0_object;
			func_8637(var_303_object);
			var_304_object = Obj(); var_305_object = Obj();
			var_304_object = var_1_object;
			var_305_object = var_0_object;
			func_8502(var_305_object);
			var_325_object = Obj(); var_326_object = Obj();
			var_325_object = var_1_object;
			var_326_object = var_0_object;
			func_8512();
			var_329_object = Obj(); var_330_object = Obj();
			var_329_object = var_1_object;
			var_330_object = var_0_object;
			func_8327();
		}
		var_343_bool = var_56_bool == (int)26995;
		if(var_343_bool != 0) {
			var_344_bool = 0; var_345_object = Obj();
			var_345_object = var_1_object;
			func_8819(var_345_object);
			if(var_344_bool != 0) {
				var_352_object = Obj(); var_353_object = Obj();
				var_352_object = var_1_object;
				var_353_object = var_0_object;
				func_8254();
				var_356_object = Obj(); var_357_object = Obj();
				var_356_object = var_1_object;
				var_357_object = var_0_object;
				func_8551();
				var_360_string = "";
				func_3247(var_57_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)525672);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)542240, (int)44577, (int)44576);
				@@@var_0_object:AddReply((int)542244, (int)44579, (int)44580);
				return 0;
			}
			var_384_string = "";
			func_3247(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)525675);
			@@@var_0_object:ClearReplies();
			var_386_bool = 0; var_387_object = Obj();
			var_387_object = var_1_object;
			func_8807(var_387_object);
			if(var_386_bool != 0) {
				@@@var_0_object:AddReply((int)525676, (int)27000, (int)26999);
			}
			var_395_bool = 0;
			var_395_bool = 0;
			var_396_bool = 0; var_397_object = Obj();
			var_397_object = var_1_object;
			func_8843(var_396_bool, var_397_object);
			if(var_396_bool != 0) {
				var_405_bool = 0; var_406_object = Obj();
				var_406_object = var_1_object;
				func_8831(var_406_object);
				if(var_405_bool != 0) {
					var_395_bool = 1;
				}
			}
			if(var_395_bool != 0) {
				@@@var_0_object:AddReply((int)525706, (int)44608, (int)27028);
			}
			var_414_bool = 0; var_415_object = Obj();
			var_415_object = var_1_object;
			func_8854(var_415_object);
			if(var_414_bool != 0) {
				@@@var_0_object:AddReply((int)525717, (int)27040, (int)27039);
			}
			var_423_bool = 0; var_424_object = Obj();
			var_424_object = var_1_object;
			func_8866(var_424_object);
			if(var_423_bool != 0) {
				@@@var_0_object:AddReply((int)525801, (int)30716, (int)27107);
			}
			var_432_bool = 0;
			var_432_bool = 0;
			var_433_bool = 0; var_434_object = Obj();
			var_434_object = var_1_object;
			func_8878(var_434_object);
			if(var_433_bool != 0) {
				var_439_bool = 0; var_440_object = Obj();
				var_440_object = var_1_object;
				func_9022(var_440_object);
				if(var_439_bool != 0) {
					var_432_bool = 1;
				}
			}
			if(var_432_bool != 0) {
				@@@var_0_object:AddReply((int)525816, (int)44664, (int)27122);
			}
			@@@var_0_object:AddReply((int)525679, (int)-1, (int)27002);
			@@@var_0_object:AddReply((int)542265, (int)-1, (int)44607);
			return 0;
		}
		var_455_bool = var_56_bool == (int)44664;
		if(var_455_bool != 0) {
			var_456_string = "";
			func_3247(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)542309);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542310, (int)27123, (int)44665);
			@@@var_0_object:AddReply((int)542311, (int)27123, (int)44666);
			return 0;
		}
		var_465_bool = var_56_bool == (int)27123;
		if(var_465_bool != 0) {
			var_466_string = "";
			func_3247(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)525817);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525818, (int)-1, (int)27124);
			return 0;
		}
		var_472_bool = var_56_bool == (int)30716;
		if(var_472_bool != 0) {
			var_473_string = "";
			func_3247(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)529261);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529262, (int)44668, (int)30717);
			return 0;
		}
		var_479_bool = var_56_bool == (int)44668;
		if(var_479_bool != 0) {
			var_480_string = "";
			func_3247(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)542312);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542313, (int)27108, (int)44669);
			@@@var_0_object:AddReply((int)542314, (int)44671, (int)44670);
			return 0;
		}
		var_489_bool = var_56_bool == (int)44671;
		if(var_489_bool != 0) {
			var_490_string = "";
			func_3247(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)542315);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542316, (int)44673, (int)44672);
			return 0;
		}
		var_496_bool = var_56_bool == (int)44673;
		if(var_496_bool != 0) {
			var_497_string = "";
			func_3247(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)542317);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542318, (int)27108, (int)44674);
			return 0;
		}
		var_503_bool = var_56_bool == (int)27108;
		if(var_503_bool != 0) {
			var_504_string = "";
			func_3247(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)525802);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525803, (int)27110, (int)27109);
			@@@var_0_object:AddReply((int)529263, (int)30719, (int)30718);
			return 0;
		}
		var_513_bool = var_56_bool == (int)30719;
		if(var_513_bool != 0) {
			var_514_string = "";
			func_3247(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)529264);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529267, (int)30721, (int)30722);
			@@@var_0_object:AddReply((int)542319, (int)30721, (int)44675);
			@@@var_0_object:AddReply((int)542322, (int)44678, (int)44679);
			return 0;
		}
		var_526_bool = var_56_bool == (int)27110;
		if(var_526_bool != 0) {
			var_527_string = "";
			func_3247(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)525804);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529265, (int)30721, (int)30720);
			@@@var_0_object:AddReply((int)542320, (int)44678, (int)44677);
			return 0;
		}
		var_536_bool = var_56_bool == (int)44678;
		if(var_536_bool != 0) {
			var_537_string = "";
			func_3247(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)542321);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542323, (int)30721, (int)44681);
			return 0;
		}
		var_543_bool = var_56_bool == (int)30721;
		if(var_543_bool != 0) {
			var_544_string = "";
			func_3247(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529266);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525805, (int)-1, (int)27111);
			@@@var_0_object:AddReply((int)525806, (int)-1, (int)27112);
			return 0;
		}
		var_553_bool = var_56_bool == (int)27040;
		if(var_553_bool != 0) {
			var_554_string = "";
			func_3247(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525718);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542296, (int)44653, (int)44649);
			@@@var_0_object:AddReply((int)542297, (int)44651, (int)44650);
			return 0;
		}
		var_563_bool = var_56_bool == (int)44651;
		if(var_563_bool != 0) {
			var_564_string = "";
			func_3247(var_57_cvector, "Shock");
			@@@var_0_object:SetMessage((int)542298);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542299, (int)-1, (int)44652);
			return 0;
		}
		var_570_bool = var_56_bool == (int)44653;
		if(var_570_bool != 0) {
			var_571_string = "";
			func_3247(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)542300);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542301, (int)44655, (int)44654);
			@@@var_0_object:AddReply((int)542303, (int)44655, (int)44656);
			return 0;
		}
		var_580_bool = var_56_bool == (int)44655;
		if(var_580_bool != 0) {
			var_581_string = "";
			func_3247(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542302);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542304, (int)44659, (int)44657);
			@@@var_0_object:AddReply((int)542305, (int)44661, (int)44658);
			return 0;
		}
		var_590_bool = var_56_bool == (int)44659;
		if(var_590_bool != 0) {
			var_591_string = "";
			func_3247(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)542306);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542307, (int)44661, (int)44660);
			return 0;
		}
		var_597_bool = var_56_bool == (int)44661;
		if(var_597_bool != 0) {
			var_598_string = "";
			func_3247(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542308);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525719, (int)27042, (int)27041);
			@@@var_0_object:AddReply((int)525722, (int)27045, (int)27044);
			return 0;
		}
		var_607_bool = var_56_bool == (int)27045;
		if(var_607_bool != 0) {
			var_608_string = "";
			func_3247(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)525723);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525724, (int)-1, (int)27046);
			return 0;
		}
		var_614_bool = var_56_bool == (int)27042;
		if(var_614_bool != 0) {
			var_615_string = "";
			func_3247(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)525720);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525721, (int)-1, (int)27043);
			return 0;
		}
		var_621_bool = var_56_bool == (int)44608;
		if(var_621_bool != 0) {
			var_622_string = "";
			func_3247(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542266);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542267, (int)44611, (int)44609);
			@@@var_0_object:AddReply((int)542268, (int)44612, (int)44610);
			return 0;
		}
		var_631_bool = var_56_bool == (int)44612;
		if(var_631_bool != 0) {
			var_632_string = "";
			func_3247(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)542270);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542271, (int)44615, (int)44613);
			@@@var_0_object:AddReply((int)542272, (int)44615, (int)44614);
			return 0;
		}
		var_641_bool = var_56_bool == (int)44611;
		if(var_641_bool != 0) {
			var_642_string = "";
			func_3247(var_57_cvector, "Shock");
			@@@var_0_object:SetMessage((int)542269);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542288, (int)44638, (int)44637);
			return 0;
		}
		var_648_bool = var_56_bool == (int)44638;
		if(var_648_bool != 0) {
			var_649_string = "";
			func_3247(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)542289);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542290, (int)44615, (int)44639);
			@@@var_0_object:AddReply((int)542291, (int)44615, (int)44640);
			return 0;
		}
		var_658_bool = var_56_bool == (int)44615;
		if(var_658_bool != 0) {
			var_659_string = "";
			func_3247(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542273);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542274, (int)27029, (int)44617);
			return 0;
		}
		var_665_bool = var_56_bool == (int)27029;
		if(var_665_bool != 0) {
			var_666_string = "";
			func_3247(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525707);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542275, (int)44619, (int)44618);
			@@@var_0_object:AddReply((int)542277, (int)44619, (int)44620);
			return 0;
		}
		var_675_bool = var_56_bool == (int)44619;
		if(var_675_bool != 0) {
			var_676_string = "";
			func_3247(var_57_cvector, "Shock");
			@@@var_0_object:SetMessage((int)542276);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529257, (int)30713, (int)30712);
			@@@var_0_object:AddReply((int)542278, (int)30713, (int)44622);
			return 0;
		}
		var_685_bool = var_56_bool == (int)30713;
		if(var_685_bool != 0) {
			var_686_string = "";
			func_3247(var_57_cvector, "Shock");
			@@@var_0_object:SetMessage((int)529258);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529259, (int)30715, (int)30714);
			@@@var_0_object:AddReply((int)542292, (int)30715, (int)44643);
			return 0;
		}
		var_695_bool = var_56_bool == (int)30715;
		if(var_695_bool != 0) {
			var_696_string = "";
			func_3247(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)529260);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525708, (int)-1, (int)27030);
			return 0;
		}
		var_702_bool = var_56_bool == (int)27000;
		if(var_702_bool != 0) {
			var_703_string = "";
			func_3247(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)525677);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525678, (int)-1, (int)27001);
			return 0;
		}
		var_709_bool = var_56_bool == (int)44577;
		if(var_709_bool != 0) {
			var_710_string = "";
			func_3247(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542241);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542242, (int)44579, (int)44578);
			@@@var_0_object:AddReply((int)542245, (int)44579, (int)44581);
			return 0;
		}
		var_719_bool = var_56_bool == (int)44579;
		if(var_719_bool != 0) {
			var_720_string = "";
			func_3247(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)542243);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529248, (int)44575, (int)30702);
			@@@var_0_object:AddReply((int)529254, (int)30703, (int)30708);
			return 0;
		}
		var_729_bool = var_56_bool == (int)44575;
		if(var_729_bool != 0) {
			var_730_string = "";
			func_3247(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)542239);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542246, (int)44585, (int)44584);
			@@@var_0_object:AddReply((int)542250, (int)30703, (int)44588);
			return 0;
		}
		var_739_bool = var_56_bool == (int)44585;
		if(var_739_bool != 0) {
			var_740_string = "";
			func_3247(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)542247);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542248, (int)30703, (int)44586);
			@@@var_0_object:AddReply((int)542249, (int)30703, (int)44587);
			return 0;
		}
		var_749_bool = var_56_bool == (int)30703;
		if(var_749_bool != 0) {
			var_750_string = "";
			func_3247(var_57_cvector, "Shock");
			@@@var_0_object:SetMessage((int)529249);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529250, (int)30705, (int)30704);
			@@@var_0_object:AddReply((int)542251, (int)44592, (int)44591);
			return 0;
		}
		var_759_bool = var_56_bool == (int)44592;
		if(var_759_bool != 0) {
			var_760_string = "";
			func_3247(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542252);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542253, (int)30705, (int)44593);
			return 0;
		}
		var_766_bool = var_56_bool == (int)30705;
		if(var_766_bool != 0) {
			var_767_string = "";
			func_3247(var_57_cvector, "Shock");
			@@@var_0_object:SetMessage((int)529251);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529252, (int)30707, (int)30706);
			@@@var_0_object:AddReply((int)542254, (int)44596, (int)44595);
			return 0;
		}
		var_776_bool = var_56_bool == (int)44596;
		if(var_776_bool != 0) {
			var_777_string = "";
			func_3247(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)542255);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542256, (int)30707, (int)44597);
			return 0;
		}
		var_783_bool = var_56_bool == (int)30707;
		if(var_783_bool != 0) {
			var_784_string = "";
			func_3247(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)529253);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542282, (int)44628, (int)44627);
			@@@var_0_object:AddReply((int)529255, (int)30711, (int)30710);
			@@@var_0_object:AddReply((int)525674, (int)30711, (int)26997);
			return 0;
		}
		var_796_bool = var_56_bool == (int)30711;
		if(var_796_bool != 0) {
			var_797_string = "";
			func_3247(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529256);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542257, (int)44628, (int)44599);
			return 0;
		}
		var_803_bool = var_56_bool == (int)44628;
		if(var_803_bool != 0) {
			var_804_string = "";
			func_3247(var_57_cvector, "Shock");
			@@@var_0_object:SetMessage((int)542283);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542284, (int)44630, (int)44629);
			@@@var_0_object:AddReply((int)542287, (int)44630, (int)44634);
			return 0;
		}
		var_813_bool = var_56_bool == (int)44630;
		if(var_813_bool != 0) {
			var_814_string = "";
			func_3247(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542285);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542261, (int)44604, (int)44603);
			@@@var_0_object:AddReply((int)525673, (int)-1, (int)26996);
			return 0;
		}
		var_823_bool = var_56_bool == (int)44604;
		if(var_823_bool != 0) {
			var_824_string = "";
			func_3247(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)542262);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542263, (int)-1, (int)44605);
			@@@var_0_object:AddReply((int)542264, (int)-1, (int)44606);
			return 0;
		}
		var_3_string = true;
		var_832_bool = 0;
		func_7994(var_832_bool);
		if(var_832_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xcc6";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_7796();
		var_61_bool = var_57_cvector == (int)27132;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_8337();
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_8605(var_114_object);
		}
		var_140_bool = var_57_cvector == (int)27137;
		if(var_140_bool != 0) {
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_object;
			func_8337();
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_object;
			func_8605(var_144_object);
		}
		var_146_bool = var_57_cvector == (int)27181;
		if(var_146_bool != 0) {
			var_147_object = Obj(); var_148_object = Obj();
			var_147_object = var_1_object;
			var_148_object = var_0_object;
			func_8369();
			var_159_object = Obj(); var_160_object = Obj();
			var_159_object = var_1_object;
			var_160_object = var_0_object;
			func_8637(var_160_object);
		}
		var_200_bool = var_57_cvector == (int)27209;
		if(var_200_bool != 0) {
			var_201_object = Obj(); var_202_object = Obj();
			var_201_object = var_1_object;
			var_202_object = var_0_object;
			func_8378();
		}
		var_220_bool = var_56_bool == (int)27129;
		if(var_220_bool != 0) {
			var_221_bool = 0; var_222_object = Obj();
			var_222_object = var_1_object;
			func_8902(var_222_object);
			if(var_221_bool != 0) {
				var_229_object = Obj(); var_230_object = Obj();
				var_229_object = var_1_object;
				var_230_object = var_0_object;
				func_8363();
				var_233_object = Obj(); var_234_object = Obj();
				var_233_object = var_1_object;
				var_234_object = var_0_object;
				func_8557();
				var_237_string = "";
				func_4637(var_57_cvector, "Strict");
				@@@var_0_object:SetMessage((int)525830);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)529038, (int)30480, (int)30479);
				return 0;
			}
			var_258_string = "";
			func_4637(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525835);
			@@@var_0_object:ClearReplies();
			var_260_bool = 0; var_261_object = Obj();
			var_261_object = var_1_object;
			func_8890(var_261_object);
			if(var_260_bool != 0) {
				@@@var_0_object:AddReply((int)525836, (int)27136, (int)27135);
			}
			var_269_bool = 0; var_270_object = Obj();
			var_270_object = var_1_object;
			func_8914(var_270_object);
			if(var_269_bool != 0) {
				@@@var_0_object:AddReply((int)525880, (int)30489, (int)27179);
			}
			var_278_bool = 0; var_279_object = Obj();
			var_279_object = var_1_object;
			func_8926(var_279_object);
			if(var_278_bool != 0) {
				@@@var_0_object:AddReply((int)525913, (int)30495, (int)27205);
			}
			@@@var_0_object:AddReply((int)525839, (int)-1, (int)27138);
			return 0;
		}
		var_291_bool = var_56_bool == (int)30495;
		if(var_291_bool != 0) {
			var_292_string = "";
			func_4637(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)529053);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529054, (int)30497, (int)30496);
			return 0;
		}
		var_298_bool = var_56_bool == (int)30497;
		if(var_298_bool != 0) {
			var_299_string = "";
			func_4637(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)529055);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529056, (int)27206, (int)30498);
			return 0;
		}
		var_305_bool = var_56_bool == (int)27206;
		if(var_305_bool != 0) {
			var_306_string = "";
			func_4637(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)525914);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525915, (int)27208, (int)27207);
			return 0;
		}
		var_312_bool = var_56_bool == (int)27208;
		if(var_312_bool != 0) {
			var_313_string = "";
			func_4637(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)525916);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525917, (int)-1, (int)27209);
			return 0;
		}
		var_319_bool = var_56_bool == (int)30489;
		if(var_319_bool != 0) {
			var_320_string = "";
			func_4637(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529048);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529049, (int)27180, (int)30490);
			@@@var_0_object:AddReply((int)529050, (int)27180, (int)30491);
			return 0;
		}
		var_329_bool = var_56_bool == (int)27180;
		if(var_329_bool != 0) {
			var_330_string = "";
			func_4637(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)525881);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529051, (int)30494, (int)30493);
			return 0;
		}
		var_336_bool = var_56_bool == (int)30494;
		if(var_336_bool != 0) {
			var_337_string = "";
			func_4637(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)529052);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525882, (int)-1, (int)27181);
			return 0;
		}
		var_343_bool = var_56_bool == (int)27136;
		if(var_343_bool != 0) {
			var_344_string = "";
			func_4637(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)525837);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525838, (int)-1, (int)27137);
			return 0;
		}
		var_350_bool = var_56_bool == (int)30480;
		if(var_350_bool != 0) {
			var_351_string = "";
			func_4637(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529039);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529040, (int)30482, (int)30481);
			return 0;
		}
		var_357_bool = var_56_bool == (int)30482;
		if(var_357_bool != 0) {
			var_358_string = "";
			func_4637(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529041);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529042, (int)30484, (int)30483);
			return 0;
		}
		var_364_bool = var_56_bool == (int)30484;
		if(var_364_bool != 0) {
			var_365_string = "";
			func_4637(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)529043);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529044, (int)30486, (int)30485);
			return 0;
		}
		var_371_bool = var_56_bool == (int)30486;
		if(var_371_bool != 0) {
			var_372_string = "";
			func_4637(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)529045);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525831, (int)27131, (int)27130);
			return 0;
		}
		var_378_bool = var_56_bool == (int)27131;
		if(var_378_bool != 0) {
			var_379_string = "";
			func_4637(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525832);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525833, (int)-1, (int)27132);
			@@@var_0_object:AddReply((int)525834, (int)30487, (int)27133);
			return 0;
		}
		var_388_bool = var_56_bool == (int)30487;
		if(var_388_bool != 0) {
			var_389_string = "";
			func_4637(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)529046);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529047, (int)-1, (int)30488);
			return 0;
		}
		var_3_string = true;
		var_394_bool = 0;
		func_7994(var_394_bool);
		if(var_394_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1234";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_7796();
		var_61_bool = var_57_cvector == (int)27318;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_8398();
		}
		var_104_bool = var_56_bool == (int)27313;
		if(var_104_bool != 0) {
			var_105_bool = 0; var_106_object = Obj();
			var_106_object = var_1_object;
			func_8938(var_106_object);
			if(var_105_bool != 0) {
				var_113_object = Obj(); var_114_object = Obj();
				var_113_object = var_1_object;
				var_114_object = var_0_object;
				func_8392();
				var_117_object = Obj(); var_118_object = Obj();
				var_117_object = var_1_object;
				var_118_object = var_0_object;
				func_8563();
				var_121_string = "";
				func_5294(var_57_cvector, "Strict");
				@@@var_0_object:SetMessage((int)526028);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)528888, (int)30316, (int)30315);
				return 0;
			}
			var_142_bool = 0;
			var_142_bool = 0;
			var_143_bool = 0; var_144_object = Obj();
			var_144_object = var_1_object;
			func_8950(var_144_object);
			if(var_143_bool != 0) {
				var_149_bool = 0; var_150_object = Obj();
				var_150_object = var_1_object;
				func_8962(var_150_object);
				if(var_149_bool != 0) {
					var_142_bool = 1;
				}
			}
			if(var_142_bool != 0) {
				var_155_object = Obj(); var_156_object = Obj();
				var_155_object = var_1_object;
				var_156_object = var_0_object;
				func_8415();
				var_159_string = "";
				func_5294(var_57_cvector, "Grief");
				@@@var_0_object:SetMessage((int)526064);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)526067, (int)30327, (int)27352);
				return 0;
			}
			var_164_bool = 0; var_165_object = Obj();
			var_165_object = var_1_object;
			func_8962(var_165_object);
			var_166_bool = var_164_bool == 0; //@nz
			if(var_166_bool != 0) {
				var_167_string = "";
				func_5294(var_57_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)526034);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)526035, (int)-1, (int)27320);
				@@@var_0_object:AddReply((int)528905, (int)-1, (int)30334);
				return 0;
			}
			var_175_string = "";
			func_5294(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)526065);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526066, (int)-1, (int)27351);
			@@@var_0_object:AddReply((int)528906, (int)-1, (int)30335);
			return 0;
		}
		var_184_bool = var_56_bool == (int)30327;
		if(var_184_bool != 0) {
			var_185_string = "";
			func_5294(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)528899);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528900, (int)30329, (int)30328);
			@@@var_0_object:AddReply((int)528902, (int)30329, (int)30330);
			return 0;
		}
		var_194_bool = var_56_bool == (int)30329;
		if(var_194_bool != 0) {
			var_195_string = "";
			func_5294(var_57_cvector, "Shock");
			@@@var_0_object:SetMessage((int)528901);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528904, (int)-1, (int)30333);
			@@@var_0_object:AddReply((int)528903, (int)-1, (int)30332);
			return 0;
		}
		var_204_bool = var_56_bool == (int)30316;
		if(var_204_bool != 0) {
			var_205_string = "";
			func_5294(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)528889);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528890, (int)30318, (int)30317);
			return 0;
		}
		var_211_bool = var_56_bool == (int)30318;
		if(var_211_bool != 0) {
			var_212_string = "";
			func_5294(var_57_cvector, "Shock");
			@@@var_0_object:SetMessage((int)528891);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528892, (int)30320, (int)30319);
			return 0;
		}
		var_218_bool = var_56_bool == (int)30320;
		if(var_218_bool != 0) {
			var_219_string = "";
			func_5294(var_57_cvector, "Shock");
			@@@var_0_object:SetMessage((int)528893);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526029, (int)27315, (int)27314);
			return 0;
		}
		var_225_bool = var_56_bool == (int)27315;
		if(var_225_bool != 0) {
			var_226_string = "";
			func_5294(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)526030);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526031, (int)27317, (int)27316);
			@@@var_0_object:AddReply((int)528894, (int)30322, (int)30321);
			return 0;
		}
		var_235_bool = var_56_bool == (int)30322;
		if(var_235_bool != 0) {
			var_236_string = "";
			func_5294(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)528895);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528896, (int)30324, (int)30323);
			return 0;
		}
		var_242_bool = var_56_bool == (int)30324;
		if(var_242_bool != 0) {
			var_243_string = "";
			func_5294(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528897);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528898, (int)27317, (int)30325);
			return 0;
		}
		var_249_bool = var_56_bool == (int)27317;
		if(var_249_bool != 0) {
			var_250_string = "";
			func_5294(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)526032);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526033, (int)-1, (int)27318);
			return 0;
		}
		var_3_string = true;
		var_255_bool = 0;
		func_7994(var_255_bool);
		if(var_255_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x14c5";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_7796();
		var_61_bool = var_57_cvector == (int)27436;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_8421();
		}
		var_90_bool = var_57_cvector == (int)27465;
		if(var_90_bool != 0) {
			var_91_object = Obj(); var_92_object = Obj();
			var_91_object = var_1_object;
			var_92_object = var_0_object;
			func_8430();
		}
		var_104_bool = var_56_bool == (int)27431;
		if(var_104_bool != 0) {
			var_105_string = "";
			func_5787(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)526152);
			@@@var_0_object:ClearReplies();
			var_123_bool = 0; var_124_object = Obj();
			var_124_object = var_1_object;
			func_8974(var_124_object);
			if(var_123_bool != 0) {
				@@@var_0_object:AddReply((int)526153, (int)29639, (int)27432);
			}
			var_134_bool = 0; var_135_object = Obj();
			var_135_object = var_1_object;
			func_8986(var_135_object);
			if(var_134_bool != 0) {
				@@@var_0_object:AddReply((int)526182, (int)29651, (int)27463);
			}
			@@@var_0_object:AddReply((int)526158, (int)-1, (int)27437);
			return 0;
		}
		var_147_bool = var_56_bool == (int)29651;
		if(var_147_bool != 0) {
			var_148_string = "";
			func_5787(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)528286);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528287, (int)29653, (int)29652);
			@@@var_0_object:AddReply((int)528623, (int)30028, (int)30026);
			return 0;
		}
		var_157_bool = var_56_bool == (int)30028;
		if(var_157_bool != 0) {
			var_158_string = "";
			func_5787(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)528625);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528705, (int)27464, (int)30122);
			@@@var_0_object:AddReply((int)528626, (int)30030, (int)30029);
			return 0;
		}
		var_167_bool = var_56_bool == (int)29653;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_5787(var_57_cvector, "Shock");
			@@@var_0_object:SetMessage((int)528288);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528289, (int)27464, (int)29654);
			return 0;
		}
		var_174_bool = var_56_bool == (int)27464;
		if(var_174_bool != 0) {
			var_175_string = "";
			func_5787(var_57_cvector, "Shock");
			@@@var_0_object:SetMessage((int)526183);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528706, (int)30125, (int)30124);
			return 0;
		}
		var_181_bool = var_56_bool == (int)30125;
		if(var_181_bool != 0) {
			var_182_string = "";
			func_5787(var_57_cvector, "Shock");
			@@@var_0_object:SetMessage((int)528707);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528624, (int)30030, (int)30027);
			@@@var_0_object:AddReply((int)528708, (int)30030, (int)30126);
			return 0;
		}
		var_191_bool = var_56_bool == (int)30030;
		if(var_191_bool != 0) {
			var_192_string = "";
			func_5787(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)528627);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528628, (int)30033, (int)30032);
			return 0;
		}
		var_198_bool = var_56_bool == (int)30033;
		if(var_198_bool != 0) {
			var_199_string = "";
			func_5787(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)528629);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528631, (int)30036, (int)30035);
			@@@var_0_object:AddReply((int)528630, (int)30036, (int)30034);
			return 0;
		}
		var_208_bool = var_56_bool == (int)30036;
		if(var_208_bool != 0) {
			var_209_string = "";
			func_5787(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528632);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528633, (int)30038, (int)30037);
			@@@var_0_object:AddReply((int)528635, (int)30038, (int)30039);
			return 0;
		}
		var_218_bool = var_56_bool == (int)30038;
		if(var_218_bool != 0) {
			var_219_string = "";
			func_5787(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528634);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526184, (int)-1, (int)27465);
			return 0;
		}
		var_225_bool = var_56_bool == (int)29639;
		if(var_225_bool != 0) {
			var_226_string = "";
			func_5787(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)528275);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528276, (int)27433, (int)29640);
			return 0;
		}
		var_232_bool = var_56_bool == (int)27433;
		if(var_232_bool != 0) {
			var_233_string = "";
			func_5787(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526154);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528277, (int)29642, (int)29641);
			return 0;
		}
		var_239_bool = var_56_bool == (int)29642;
		if(var_239_bool != 0) {
			var_240_string = "";
			func_5787(var_57_cvector, "Strict");
			@@@var_0_object:SetMessage((int)528278);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528279, (int)29644, (int)29643);
			@@@var_0_object:AddReply((int)528283, (int)29646, (int)29647);
			return 0;
		}
		var_249_bool = var_56_bool == (int)29644;
		if(var_249_bool != 0) {
			var_250_string = "";
			func_5787(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528280);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528281, (int)29646, (int)29645);
			return 0;
		}
		var_256_bool = var_56_bool == (int)29646;
		if(var_256_bool != 0) {
			var_257_string = "";
			func_5787(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528282);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528284, (int)29650, (int)29649);
			return 0;
		}
		var_263_bool = var_56_bool == (int)29650;
		if(var_263_bool != 0) {
			var_264_string = "";
			func_5787(var_57_cvector, "Shock");
			@@@var_0_object:SetMessage((int)528285);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526155, (int)27435, (int)27434);
			return 0;
		}
		var_270_bool = var_56_bool == (int)27435;
		if(var_270_bool != 0) {
			var_271_string = "";
			func_5787(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526156);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526157, (int)-1, (int)27436);
			return 0;
		}
		var_3_string = true;
		var_276_bool = 0;
		func_7994(var_276_bool);
		if(var_276_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x16b2";
	
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_7796();
		var_61_bool = var_57_cvector == (int)29013;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_8490();
		}
		var_67_bool = var_57_cvector == (int)29025;
		if(var_67_bool != 0) {
			var_68_object = Obj(); var_69_object = Obj();
			var_68_object = var_1_object;
			var_69_object = var_0_object;
			func_8439();
		}
		var_151_bool = var_56_bool == (int)29011;
		if(var_151_bool != 0) {
			var_152_string = "";
			func_6358(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527664);
			@@@var_0_object:ClearReplies();
			var_170_bool = 0;
			var_170_bool = 0;
			var_171_bool = 0; var_172_object = Obj();
			var_172_object = var_1_object;
			func_9010(var_172_object);
			if(var_171_bool != 0) {
				var_179_bool = 0; var_180_object = Obj();
				var_180_object = var_1_object;
				func_8998(var_180_object);
				if(var_179_bool != 0) {
					var_170_bool = 1;
				}
			}
			if(var_170_bool != 0) {
				@@@var_0_object:AddReply((int)527666, (int)29014, (int)29013);
			}
			@@@var_0_object:AddReply((int)527665, (int)-1, (int)29012);
			@@@var_0_object:AddReply((int)527682, (int)-1, (int)29030);
			return 0;
		}
		var_195_bool = var_56_bool == (int)29014;
		if(var_195_bool != 0) {
			var_196_string = "";
			func_6358(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)527667);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527683, (int)29032, (int)29031);
			return 0;
		}
		var_202_bool = var_56_bool == (int)29032;
		if(var_202_bool != 0) {
			var_203_string = "";
			func_6358(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)527684);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527685, (int)29035, (int)29033);
			@@@var_0_object:AddReply((int)527686, (int)29035, (int)29034);
			return 0;
		}
		var_212_bool = var_56_bool == (int)29035;
		if(var_212_bool != 0) {
			var_213_string = "";
			func_6358(var_57_cvector, "Shock");
			@@@var_0_object:SetMessage((int)527687);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527688, (int)29038, (int)29037);
			@@@var_0_object:AddReply((int)527690, (int)29038, (int)29039);
			return 0;
		}
		var_222_bool = var_56_bool == (int)29038;
		if(var_222_bool != 0) {
			var_223_string = "";
			func_6358(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)527689);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527670, (int)29018, (int)29017);
			@@@var_0_object:AddReply((int)527691, (int)-1, (int)29041);
			return 0;
		}
		var_232_bool = var_56_bool == (int)29018;
		if(var_232_bool != 0) {
			var_233_string = "";
			func_6358(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527671);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527672, (int)29020, (int)29019);
			return 0;
		}
		var_239_bool = var_56_bool == (int)29020;
		if(var_239_bool != 0) {
			var_240_string = "";
			func_6358(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)527673);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527674, (int)29022, (int)29021);
			return 0;
		}
		var_246_bool = var_56_bool == (int)29022;
		if(var_246_bool != 0) {
			var_247_string = "";
			func_6358(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)527675);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527676, (int)29024, (int)29023);
			return 0;
		}
		var_253_bool = var_56_bool == (int)29024;
		if(var_253_bool != 0) {
			var_254_string = "";
			func_6358(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527677);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527678, (int)-1, (int)29025);
			return 0;
		}
		var_3_string = true;
		var_259_bool = 0;
		func_7994(var_259_bool);
		if(var_259_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x18ed";
	
}


task_19_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_int, var_51_int, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_7796();
		var_61_bool = var_56_bool == (int)41249;
		if(var_61_bool != 0) {
			var_62_string = "";
			func_6760(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)539306);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542527, (int)44924, (int)44922);
			@@@var_0_object:AddReply((int)539307, (int)-1, (int)41250);
			@@@var_0_object:AddReply((int)542528, (int)-1, (int)44923);
			return 0;
		}
		var_90_bool = var_56_bool == (int)44924;
		if(var_90_bool != 0) {
			var_91_string = "";
			func_6760(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)542529);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542530, (int)44927, (int)44925);
			@@@var_0_object:AddReply((int)542531, (int)-1, (int)44926);
			return 0;
		}
		var_100_bool = var_56_bool == (int)44927;
		if(var_100_bool != 0) {
			var_101_string = "";
			func_6760(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542532);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542533, (int)44930, (int)44928);
			@@@var_0_object:AddReply((int)542534, (int)-1, (int)44929);
			return 0;
		}
		var_110_bool = var_56_bool == (int)44930;
		if(var_110_bool != 0) {
			var_111_string = "";
			func_6760(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542535);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542536, (int)44933, (int)44931);
			@@@var_0_object:AddReply((int)542537, (int)-1, (int)44932);
			return 0;
		}
		var_120_bool = var_56_bool == (int)44933;
		if(var_120_bool != 0) {
			var_121_string = "";
			func_6760(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)542538);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542539, (int)44935, (int)44934);
			@@@var_0_object:AddReply((int)542546, (int)44942, (int)44941);
			return 0;
		}
		var_130_bool = var_56_bool == (int)44942;
		if(var_130_bool != 0) {
			var_131_string = "";
			func_6760(var_57_cvector, "Grief");
			@@@var_0_object:SetMessage((int)542547);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542548, (int)44945, (int)44943);
			@@@var_0_object:AddReply((int)542549, (int)44945, (int)44944);
			return 0;
		}
		var_140_bool = var_56_bool == (int)44945;
		if(var_140_bool != 0) {
			var_141_string = "";
			func_6760(var_57_cvector, "Gratitude");
			@@@var_0_object:SetMessage((int)542550);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542551, (int)44935, (int)44947);
			@@@var_0_object:AddReply((int)542552, (int)-1, (int)44948);
			return 0;
		}
		var_150_bool = var_56_bool == (int)44935;
		if(var_150_bool != 0) {
			var_151_string = "";
			func_6760(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542540);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542541, (int)-1, (int)44936);
			@@@var_0_object:AddReply((int)542542, (int)-1, (int)44937);
			return 0;
		}
		var_3_string = true;
		var_159_bool = 0;
		func_7994(var_159_bool);
		if(var_159_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1a7f";
	
}


task_21_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_int, var_56_int, var_57_cvector)
{
	if((int)1 != 0) {
		func_7796();
		var_61_bool = var_56_int == (int)42554;
		if(var_61_bool != 0) {
			var_62_string = "";
			func_7129(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540545);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540546, (int)-1, (int)42555);
			@@@var_0_object:AddReply((int)540798, (int)-1, (int)42847);
			return 0;
		}
		var_3_string = true;
		var_86_bool = 0;
		func_7994(var_86_bool);
		if(var_86_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1bf0";
	
}


task_22_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector, var_56_int)
{
	var_58_bool = var_56_int == (int)10;
	if(var_58_bool != 0) {
		func_7265();
		var_60_bool = 0;
		var_60_bool = 0;
		var_61_bool = 0;
		func_7520(var_61_bool);
		if(var_61_bool != 0) {
			var_64_bool = 0;
			func_7234(var_64_bool);
			if(var_64_bool != 0) {
				var_60_bool = 1;
			}
		}
		if(var_60_bool != 0) {
			var_81_bool = 0;
			func_7214(var_81_bool);
			if(var_81_bool != 0) {
				var_100_bool = 0; var_101_object = Obj();
				func_7803(Obj());
				var_102_object = var_101_object;
				func_7670(var_100_bool, var_101_object);
			}
		} else {
			func_7229(var_56_int);
			func_7256();
		}
	}
	return 0;
	
}


task_22_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector)
{
	func_7447();
	func_7265();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_22_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector)
{
	StopGroup0();
	func_7265();
	var_57_string = "";
	func_7750("Neutral");
	func_7256();
	return 0;
}


task_22_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector, var_56_bool)
{
	var_57_bool = var_56_bool;
	if(var_57_bool != 0) {
		func_7256();
	} else {
		var_63_string = "";
		func_7750("Neutral");
	}
	return 0;
	
}


task_22_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector, var_56_object)
{
	var_57_bool = 0; var_58_bool = 0;
	IsOverrideActive(var_58_bool);
	var_59_bool = var_58_bool == 0; //@nz
	if(var_59_bool != 0) {
		EventDisable(0);
		func_7447();
		var_60_bool = 0; var_61_object = Obj();
		var_56_object = var_61_object;
		func_7511(var_60_bool, var_61_object);
		EventEnable(0);
		var_74_object = Obj();
		var_56_object = var_74_object;
		func_9627(var_58_bool, var_74_object);
		var_1259_string = "";
		func_7750("Neutral");
		func_7265();
		func_7256();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector)
{
	var_56_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_7200(var_55_cvector);
	return 0;
}


func_9216()
{
	var_105_object = Obj(); var_106_object = Obj();
	CreateDiaryEntry(var_106_object, (int)462, (int)1, (int)527778);
	var_110_bool = 0; var_111_object = Obj(); var_112_int = 0;
	var_106_object = var_111_object;
	func_9515(var_110_bool, var_111_object, (int)461);
	return 2;
}
EMIT "Stack[-1] = 0";


func_0(var_0_object, var_307_int, var_308_object)
{
	var_310_object = Obj(); var_311_bool = 0; var_312_int = 0; var_313_bool = 0; var_314_object = Obj(); var_315_bool = 0; var_316_int = 0; var_317_bool = 0;
	var_0_object = var_308_object;
	var_318_bool = 0; var_319_object = Obj(); var_320_float = 0;
	var_308_object = var_319_object;
	func_7525(var_318_bool, var_319_object, (float)70.0);
	var_321_bool = var_318_bool == 0; //@nz
	if(var_321_bool != 0) {
		var_307_int = -2;
		return 8;
	}
	CreateDialog(var_314_object);
	var_322_int = 0;
	func_7988(var_322_int);
	@@var_314_object:SetNPCName(var_322_int);
	var_323_int = 0;
	func_7986(var_323_int);
	@@var_314_object:SetNPCDescription(var_323_int);
	var_324_string = "";
	func_7990(var_324_string);
	@@var_314_object:SetPhoto(var_324_string);
	var_325_string = "";
	func_7992(var_325_string);
	@@var_314_object:SetPhoto2(var_325_string);
	var_326_int = 0;
	func_9610(var_326_int);
	@@var_314_object:SetPlayerName(var_326_int);
	IsOverrideActive(var_315_bool);
	var_327_bool = var_315_bool;
	if(var_327_bool != 0) {
		var_307_int = -2;
		return 8;
	}
	DoDialog(var_314_object);
	var_328_bool = 0; var_329_object = Obj();
	func_7803(Obj());
	var_330_object = var_329_object;
	func_7612(var_328_bool, var_329_object);
	var_331_object = Obj(); var_332_object = Obj();
	var_308_object = var_331_object;
	var_314_object = var_332_object;
	TaskCall(1);
	func_81(var_333_object, var_334_object, var_335_string, var_336_bool, var_331_object, var_332_object);
	TaskReturn();
	@@var_314_object:IsDialogEnd(var_317_bool);
	
Label_63:
	var_443_bool = var_317_bool == 0; //@nz
	if(var_443_bool != 0) {
		sync();
		@@var_314_object:IsDialogEnd(var_317_bool);
		goto Label_63;
	}
	var_308_object = Obj();
	func_7594();
	StopDialog(var_314_object);
	@@var_314_object:GetReturnValue((int)-1);
	var_316_int = var_307_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5633(var_0_object, var_997_int, var_998_object)
{
	var_1000_object = Obj(); var_1001_bool = 0; var_1002_int = 0; var_1003_bool = 0; var_1004_object = Obj(); var_1005_bool = 0; var_1006_int = 0; var_1007_bool = 0;
	var_0_object = var_998_object;
	var_1008_bool = 0; var_1009_object = Obj(); var_1010_float = 0;
	var_998_object = var_1009_object;
	func_7525(var_1008_bool, var_1009_object, (float)70.0);
	var_1011_bool = var_1008_bool == 0; //@nz
	if(var_1011_bool != 0) {
		var_997_int = -2;
		return 8;
	}
	CreateDialog(var_1004_object);
	var_1012_int = 0;
	func_7988(var_1012_int);
	@@var_1004_object:SetNPCName(var_1012_int);
	var_1013_int = 0;
	func_7986(var_1013_int);
	@@var_1004_object:SetNPCDescription(var_1013_int);
	var_1014_string = "";
	func_7990(var_1014_string);
	@@var_1004_object:SetPhoto(var_1014_string);
	var_1015_string = "";
	func_7992(var_1015_string);
	@@var_1004_object:SetPhoto2(var_1015_string);
	var_1016_int = 0;
	func_9610(var_1016_int);
	@@var_1004_object:SetPlayerName(var_1016_int);
	IsOverrideActive(var_1005_bool);
	var_1017_bool = var_1005_bool;
	if(var_1017_bool != 0) {
		var_997_int = -2;
		return 8;
	}
	DoDialog(var_1004_object);
	var_1018_bool = 0; var_1019_object = Obj();
	func_7803(Obj());
	var_1020_object = var_1019_object;
	func_7612(var_1018_bool, var_1019_object);
	var_1021_object = Obj(); var_1022_object = Obj();
	var_998_object = var_1021_object;
	var_1004_object = var_1022_object;
	TaskCall(15);
	func_5714(var_1023_object, var_1024_object, var_1025_string, var_1026_bool, var_1021_object, var_1022_object);
	TaskReturn();
	@@var_1004_object:IsDialogEnd(var_1007_bool);
	
Label_5696:
	var_1066_bool = var_1007_bool == 0; //@nz
	if(var_1066_bool != 0) {
		sync();
		@@var_1004_object:IsDialogEnd(var_1007_bool);
		goto Label_5696;
	}
	var_998_object = Obj();
	func_7594();
	StopDialog(var_1004_object);
	@@var_1004_object:GetReturnValue((int)-1);
	var_1006_int = var_997_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8198()
{
	SetVariable("ook3Alexandr1", (int)1);
	return 0;
}


func_8711(var_373_bool)
{
	var_375_int = 0; var_376_string = "";
	func_7830(var_375_int, "ook1Alexandr1");
	var_378_bool = var_375_int == (int)0;
	if(var_378_bool != 0) {
		var_373_bool = 1;
		return 0;
	}
	var_373_bool = 0;
	return 0;
}


func_8204()
{
	SetVariable("k3q01", (int)1000);
	func_9281();
	var_157_bool = 0; var_158_string = ""; var_159_string = ""; var_160_string = "";
	func_7930(var_157_bool, "volonteers_klara", "disease", "anna");
	return 0;
}


func_9229()
{
	var_151_object = Obj(); var_152_object = Obj();
	CreateDiaryEntry(var_152_object, (int)468, (int)1, (int)527784);
	var_156_bool = 0; var_157_object = Obj(); var_158_int = 0;
	var_152_object = var_157_object;
	func_9515(var_156_bool, var_157_object, (int)461);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3086(var_0_object, var_1_object, var_2_object, var_3_string, var_668_object, var_669_object)
{
	var_0_object = var_669_object;
	var_1_object = var_668_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_675_bool = 0; var_676_object = Obj();
		var_676_object = var_1_object;
		func_8819(var_676_object);
		if(var_675_bool != 0) {
			var_681_object = Obj(); var_682_object = Obj();
			var_681_object = var_1_object;
			var_682_object = var_0_object;
			func_8254();
			var_685_object = Obj(); var_686_object = Obj();
			var_685_object = var_1_object;
			var_686_object = var_0_object;
			func_8551();
			var_689_string = "";
			func_3247(var_669_object, "Neutral");
			@@@var_0_object:SetMessage((int)525672);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542240, (int)44577, (int)44576);
			@@@var_0_object:AddReply((int)542244, (int)44579, (int)44580);
		} else {
				var_712_string = "";
				func_3247(var_669_object, "Gratitude");
				@@@var_0_object:SetMessage((int)525675);
				@@@var_0_object:ClearReplies();
				var_714_bool = 0; var_715_object = Obj();
				var_715_object = var_1_object;
				func_8807(var_715_object);
				if(var_714_bool != 0) {
					@@@var_0_object:AddReply((int)525676, (int)27000, (int)26999);
				}
				var_723_bool = 0;
				var_723_bool = 0;
				var_724_bool = 0; var_725_object = Obj();
				var_725_object = var_1_object;
				func_8843(var_724_bool, var_725_object);
				if(var_724_bool != 0) {
					var_733_bool = 0; var_734_object = Obj();
					var_734_object = var_1_object;
					func_8831(var_734_object);
					if(var_733_bool != 0) {
						var_723_bool = 1;
					}
				}
				if(var_723_bool != 0) {
					@@@var_0_object:AddReply((int)525706, (int)44608, (int)27028);
				}
				var_742_bool = 0; var_743_object = Obj();
				var_743_object = var_1_object;
				func_8854(var_743_object);
				if(var_742_bool != 0) {
					@@@var_0_object:AddReply((int)525717, (int)27040, (int)27039);
				}
				var_751_bool = 0; var_752_object = Obj();
				var_752_object = var_1_object;
				func_8866(var_752_object);
				if(var_751_bool != 0) {
					@@@var_0_object:AddReply((int)525801, (int)30716, (int)27107);
				}
				var_760_bool = 0;
				var_760_bool = 0;
				var_761_bool = 0; var_762_object = Obj();
				var_762_object = var_1_object;
				func_8878(var_762_object);
				if(var_761_bool != 0) {
					var_767_bool = 0; var_768_object = Obj();
					var_768_object = var_1_object;
					func_9022(var_768_object);
					if(var_767_bool != 0) {
						var_760_bool = 1;
					}
				}
				if(var_760_bool != 0) {
					@@@var_0_object:AddReply((int)525816, (int)44664, (int)27122);
				}
				@@@var_0_object:AddReply((int)525679, (int)-1, (int)27002);
				@@@var_0_object:AddReply((int)542265, (int)-1, (int)44607);
				goto Label_3217;
		}
	}
Label_3217:
	var_704_bool = 0;
	func_7994(var_704_bool);
	if(var_704_bool != 0) {

	Label_3221:
		lshWaitForAnimEnd();
		var_705_string = var_3_string;
		if(var_705_string != 0) {
		} else {
			var_706_string = "";
			var_706_string = var_2_object;
			func_7750(var_706_string);
			goto Label_3221;
	}
		PlayAnimation("all", "idle");

	Label_3236:
		WaitForAnimEnd();
		var_709_string = var_3_string;
		if(var_709_string != 0) {
			goto Label_3246;
		}
		PlayAnimation("all", "idle");
		goto Label_3236;

	}
	goto Label_3246;
	
Label_3246:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xc12";


func_8723(var_428_bool)
{
	var_430_int = 0; var_431_string = "";
	func_7830(var_430_int, "k1q02");
	var_433_bool = var_430_int == (int)5;
	if(var_433_bool != 0) {
		var_428_bool = 1;
		return 0;
	}
	var_428_bool = 0;
	return 0;
}


func_9242()
{
	var_218_object = Obj(); var_219_object = Obj();
	CreateDiaryEntry(var_219_object, (int)469, (int)1, (int)527785);
	var_223_bool = 0; var_224_object = Obj(); var_225_int = 0;
	var_219_object = var_224_object;
	func_9515(var_223_bool, var_224_object, (int)461);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7707(var_191_bool, var_192_object)
{
	var_193_string = ""; var_194_int = 0; var_195_bool = 0; var_196_int = 0; var_197_string = ""; var_198_string = ""; var_199_int = 0; var_200_bool = 0; var_201_int = 0; var_202_string = "";
	var_204_int = 0;
	func_7947(var_204_int);
	var_210_int = "d" + var_204_int;
	var_198_string = var_210_int + "m";
	var_199_int = 0;
	
Label_7716:
	if((int)1 != 0) {
		var_214_int = var_199_int + (int)1;
		var_215_int = var_198_string + var_214_int;
		@@var_192_object:HasProperty(var_215_int, var_200_bool);
		var_216_bool = var_200_bool == 0; //@nz
		if(var_216_bool != 0) {
		} else {
			var_199_int = var_199_int + (int)1;
			goto Label_7716;
		}
	}
	var_217_bool = var_199_int == 0; //@nz
	if(var_217_bool != 0) {
		var_191_bool = 0;
		return 10;
	}
	var_201_int = 0;
	var_219_bool = var_199_int > (int)1;
	if(var_219_bool != 0) {
		irand(var_201_int, var_199_int);
	}
	var_221_int = var_201_int + (int)1;
	var_222_int = var_198_string + var_221_int;
	@@var_192_object:GetProperty(var_222_int, var_202_string);
	var_223_bool = 0; var_224_string = "";
	var_202_string = var_224_string;
	func_7781(var_223_bool, var_224_string);
	var_223_bool = var_191_bool;
	return 10;
	
}


func_5146(var_0_object, var_1_object, var_2_object, var_3_string, var_911_object, var_912_object)
{
	var_0_object = var_912_object;
	var_1_object = var_911_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_918_bool = 0; var_919_object = Obj();
		var_919_object = var_1_object;
		func_8938(var_919_object);
		if(var_918_bool != 0) {
			var_924_object = Obj(); var_925_object = Obj();
			var_924_object = var_1_object;
			var_925_object = var_0_object;
			func_8392();
			var_928_object = Obj(); var_929_object = Obj();
			var_928_object = var_1_object;
			var_929_object = var_0_object;
			func_8563();
			var_932_string = "";
			func_5294(var_912_object, "Strict");
			@@@var_0_object:SetMessage((int)526028);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528888, (int)30316, (int)30315);
		} else {
				var_952_bool = 0;
				var_952_bool = 0;
				var_953_bool = 0; var_954_object = Obj();
				var_954_object = var_1_object;
				func_8950(var_954_object);
				if(var_953_bool != 0) {
					var_959_bool = 0; var_960_object = Obj();
					var_960_object = var_1_object;
					func_8962(var_960_object);
					if(var_959_bool != 0) {
						var_952_bool = 1;
					}
				}
				if(var_952_bool != 0) {
					var_965_object = Obj(); var_966_object = Obj();
					var_965_object = var_1_object;
					var_966_object = var_0_object;
					func_8415();
					var_969_string = "";
					func_5294(var_912_object, "Grief");
					@@@var_0_object:SetMessage((int)526064);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)526067, (int)30327, (int)27352);
					goto Label_5264;
				}
				var_974_bool = 0; var_975_object = Obj();
				var_975_object = var_1_object;
				func_8962(var_975_object);
				var_976_bool = var_974_bool == 0; //@nz
				if(var_976_bool != 0) {
					var_977_string = "";
					func_5294(var_912_object, "Neutral");
					@@@var_0_object:SetMessage((int)526034);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)526035, (int)-1, (int)27320);
					@@@var_0_object:AddReply((int)528905, (int)-1, (int)30334);
					goto Label_5264;
				}
				var_985_string = "";
				func_5294(var_912_object, "Grief");
				@@@var_0_object:SetMessage((int)526065);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)526066, (int)-1, (int)27351);
				@@@var_0_object:AddReply((int)528906, (int)-1, (int)30335);
				goto Label_5264;
		}
	}
Label_5264:
	var_944_bool = 0;
	func_7994(var_944_bool);
	if(var_944_bool != 0) {

	Label_5268:
		lshWaitForAnimEnd();
		var_945_string = var_3_string;
		if(var_945_string != 0) {
		} else {
			var_946_string = "";
			var_946_string = var_2_object;
			func_7750(var_946_string);
			goto Label_5268;
	}
		PlayAnimation("all", "idle");

	Label_5283:
		WaitForAnimEnd();
		var_949_string = var_3_string;
		if(var_949_string != 0) {
			goto Label_5293;
		}
		PlayAnimation("all", "idle");
		goto Label_5283;

	}
	goto Label_5293;
	
Label_5293:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x141e";


func_8219()
{
	SetVariable("k3q01", (int)1000);
	func_9294();
	return 0;
}


func_4637(var_2_object, var_831_string)
{
	var_832_bool = 0;
	func_7994(var_832_bool);
	var_833_bool = var_832_bool == 0; //@nz
	if(var_833_bool != 0) {
		return 0;
	}
	var_834_bool = var_831_string == var_2_object;
	if(var_834_bool != 0) {
		return 0;
	}
	var_835_string = ""; var_836_bool = 0;
	var_831_string = var_835_string;
	var_838_bool = var_831_string == "";
	if(var_838_bool != 0) {
		var_836_bool = 0;
	} else {
		var_836_bool = 1;
	}
	func_7766(var_835_string, var_836_bool);
	var_2_object = var_831_string;
	return 0;
	
}


func_8735(var_521_bool)
{
	var_523_int = 0; var_524_string = "";
	func_7830(var_523_int, "k2q01");
	var_526_bool = var_523_int == (int)0;
	if(var_526_bool != 0) {
		var_521_bool = 1;
		return 0;
	}
	var_521_bool = 0;
	return 0;
}


func_7200(var_0_object)
{
	var_57_bool = 0;
	func_7520(var_57_bool);
	var_60_bool = var_57_bool == 0; //@nz
	if(var_60_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_7209:
	func_7376();
	goto Label_7209;
}
EMIT "Return(); Pop(0)";


func_8228()
{
	var_64_object = Obj(); var_65_object = Obj();
	SetVariable("k4q01", (int)1);
	func_9560(Obj());
	var_68_object = var_65_object;
	var_79_float = 0;
	func_7942(var_79_float);
	@@var_65_object:AddMark("k4q01AlexandrGotoGrif", "pt_map_grif", (int)1, (int)539601, var_79_float);
	func_9307();
	func_9320();
	return 2;
}
EMIT "Stack[-1] = 0";


func_9255()
{
	var_82_object = Obj(); var_83_object = Obj();
	CreateDiaryEntry(var_83_object, (int)337, (int)1, (int)525446);
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0;
	var_83_object = var_88_object;
	func_9515(var_87_bool, var_88_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6697(var_0_object, var_1_object, var_2_object, var_3_string, var_1168_object, var_1169_object)
{
	var_0_object = var_1169_object;
	var_1_object = var_1168_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1175_string = "";
		func_6760(var_1169_object, "Gratitude");
		@@@var_0_object:SetMessage((int)539306);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)542527, (int)44924, (int)44922);
		@@@var_0_object:AddReply((int)539307, (int)-1, (int)41250);
		@@@var_0_object:AddReply((int)542528, (int)-1, (int)44923);
		goto Label_6730;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1a2d";
	}
Label_6730:
	var_1193_bool = 0;
	func_7994(var_1193_bool);
	if(var_1193_bool != 0) {

	Label_6734:
		lshWaitForAnimEnd();
		var_1194_string = var_3_string;
		if(var_1194_string != 0) {
		} else {
			var_1195_string = "";
			var_1195_string = var_2_object;
			func_7750(var_1195_string);
			goto Label_6734;
	}
		PlayAnimation("all", "idle");

	Label_6749:
		WaitForAnimEnd();
		var_1198_string = var_3_string;
		if(var_1198_string != 0) {
			goto Label_6759;
		}
		PlayAnimation("all", "idle");
		goto Label_6749;
	}
	goto Label_6759;
	
Label_6759:
	return 0;
	
}


func_8747(var_479_bool)
{
	var_481_int = 0; var_482_string = "";
	func_7830(var_481_int, "ook2Alexandr1");
	var_484_bool = var_481_int == (int)0;
	if(var_484_bool != 0) {
		var_479_bool = 1;
		return 0;
	}
	var_479_bool = 0;
	return 0;
}


func_7214(var_81_bool)
{
	var_82_object = Obj(); var_83_object = Obj();
	FindActor(var_83_object, "player");
	var_85_bool = var_83_object == 0; //@nz
	if(var_85_bool != 0) {
		var_81_bool = 0;
		return 2;
	}
	var_86_bool = 0; var_87_object = Obj();
	var_83_object = var_87_object;
	func_7511(var_86_bool, var_87_object);
	var_86_bool = var_81_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_9268()
{
	var_105_object = Obj(); var_106_object = Obj();
	CreateDiaryEntry(var_106_object, (int)338, (int)1, (int)525447);
	var_110_bool = 0; var_111_object = Obj(); var_112_int = 0;
	var_106_object = var_111_object;
	func_9515(var_110_bool, var_111_object, (int)337);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8759(var_530_bool)
{
	var_532_int = 0; var_533_string = "";
	func_7830(var_532_int, "k2q01");
	var_535_bool = var_532_int == (int)6;
	if(var_535_bool != 0) {
		var_530_bool = 1;
		return 0;
	}
	var_530_bool = 0;
	return 0;
}


func_6200(var_0_object, var_1070_int, var_1071_object)
{
	var_1073_object = Obj(); var_1074_bool = 0; var_1075_int = 0; var_1076_bool = 0; var_1077_object = Obj(); var_1078_bool = 0; var_1079_int = 0; var_1080_bool = 0;
	var_0_object = var_1071_object;
	var_1081_bool = 0; var_1082_object = Obj(); var_1083_float = 0;
	var_1071_object = var_1082_object;
	func_7525(var_1081_bool, var_1082_object, (float)70.0);
	var_1084_bool = var_1081_bool == 0; //@nz
	if(var_1084_bool != 0) {
		var_1070_int = -2;
		return 8;
	}
	CreateDialog(var_1077_object);
	var_1085_int = 0;
	func_7988(var_1085_int);
	@@var_1077_object:SetNPCName(var_1085_int);
	var_1086_int = 0;
	func_7986(var_1086_int);
	@@var_1077_object:SetNPCDescription(var_1086_int);
	var_1087_string = "";
	func_7990(var_1087_string);
	@@var_1077_object:SetPhoto(var_1087_string);
	var_1088_string = "";
	func_7992(var_1088_string);
	@@var_1077_object:SetPhoto2(var_1088_string);
	var_1089_int = 0;
	func_9610(var_1089_int);
	@@var_1077_object:SetPlayerName(var_1089_int);
	IsOverrideActive(var_1078_bool);
	var_1090_bool = var_1078_bool;
	if(var_1090_bool != 0) {
		var_1070_int = -2;
		return 8;
	}
	DoDialog(var_1077_object);
	var_1091_bool = 0; var_1092_object = Obj();
	func_7803(Obj());
	var_1093_object = var_1092_object;
	func_7612(var_1091_bool, var_1092_object);
	var_1094_object = Obj(); var_1095_object = Obj();
	var_1071_object = var_1094_object;
	var_1077_object = var_1095_object;
	TaskCall(17);
	func_6281(var_1096_object, var_1097_object, var_1098_string, var_1099_bool, var_1094_object, var_1095_object);
	TaskReturn();
	@@var_1077_object:IsDialogEnd(var_1080_bool);
	
Label_6263:
	var_1140_bool = var_1080_bool == 0; //@nz
	if(var_1140_bool != 0) {
		sync();
		@@var_1077_object:IsDialogEnd(var_1080_bool);
		goto Label_6263;
	}
	var_1071_object = Obj();
	func_7594();
	StopDialog(var_1077_object);
	@@var_1077_object:GetReturnValue((int)-1);
	var_1079_int = var_1070_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7229(var_0_object)
{
	var_133_float = GetByIndex(var_0_object, 0);
	var_134_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_133_float, var_134_float);
	return 0;
}


func_8254()
{
	SetVariable("ook4Alexandr1", (int)1);
	return 0;
}


func_2109(var_0_object, var_549_int, var_550_object)
{
	var_552_object = Obj(); var_553_bool = 0; var_554_int = 0; var_555_bool = 0; var_556_object = Obj(); var_557_bool = 0; var_558_int = 0; var_559_bool = 0;
	var_0_object = var_550_object;
	var_560_bool = 0; var_561_object = Obj(); var_562_float = 0;
	var_550_object = var_561_object;
	func_7525(var_560_bool, var_561_object, (float)70.0);
	var_563_bool = var_560_bool == 0; //@nz
	if(var_563_bool != 0) {
		var_549_int = -2;
		return 8;
	}
	CreateDialog(var_556_object);
	var_564_int = 0;
	func_7988(var_564_int);
	@@var_556_object:SetNPCName(var_564_int);
	var_565_int = 0;
	func_7986(var_565_int);
	@@var_556_object:SetNPCDescription(var_565_int);
	var_566_string = "";
	func_7990(var_566_string);
	@@var_556_object:SetPhoto(var_566_string);
	var_567_string = "";
	func_7992(var_567_string);
	@@var_556_object:SetPhoto2(var_567_string);
	var_568_int = 0;
	func_9610(var_568_int);
	@@var_556_object:SetPlayerName(var_568_int);
	IsOverrideActive(var_557_bool);
	var_569_bool = var_557_bool;
	if(var_569_bool != 0) {
		var_549_int = -2;
		return 8;
	}
	DoDialog(var_556_object);
	var_570_bool = 0; var_571_object = Obj();
	func_7803(Obj());
	var_572_object = var_571_object;
	func_7612(var_570_bool, var_571_object);
	var_573_object = Obj(); var_574_object = Obj();
	var_550_object = var_573_object;
	var_556_object = var_574_object;
	TaskCall(5);
	func_2190(var_575_object, var_576_object, var_577_string, var_578_bool, var_573_object, var_574_object);
	TaskReturn();
	@@var_556_object:IsDialogEnd(var_559_bool);
	
Label_2172:
	var_640_bool = var_559_bool == 0; //@nz
	if(var_640_bool != 0) {
		sync();
		@@var_556_object:IsDialogEnd(var_559_bool);
		goto Label_2172;
	}
	var_550_object = Obj();
	func_7594();
	StopDialog(var_556_object);
	@@var_556_object:GetReturnValue((int)-1);
	var_558_int = var_549_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_9281()
{
	var_149_object = Obj(); var_150_object = Obj();
	CreateDiaryEntry(var_150_object, (int)342, (int)1, (int)525451);
	var_154_bool = 0; var_155_object = Obj(); var_156_int = 0;
	var_150_object = var_155_object;
	func_9515(var_154_bool, var_155_object, (int)337);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7234(var_64_bool)
{
	var_65_object = Obj(); var_66_bool = 0; var_67_object = Obj(); var_68_bool = 0;
	FindActor(var_67_object, "player");
	var_70_bool = var_67_object == 0; //@nz
	if(var_70_bool != 0) {
		var_64_bool = 0;
		return 4;
	}
	var_71_float = 0; var_72_object = Obj();
	var_67_object = var_72_object;
	func_7452(var_71_float, var_72_object);
	var_80_bool = var_71_float > (float)90000.0;
	if(var_80_bool != 0) {
		var_64_bool = 0;
		return 4;
	}
	CanSee(var_68_bool, var_67_object);
	var_68_bool = var_64_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_8771(var_619_bool)
{
	var_621_int = 0; var_622_string = "";
	func_7830(var_621_int, "k3q01");
	var_624_bool = var_621_int == (int)0;
	if(var_624_bool != 0) {
		var_619_bool = 1;
		return 0;
	}
	var_619_bool = 0;
	return 0;
}


func_8260()
{
	func_9359();
	var_177_bool = 0; var_178_string = ""; var_179_string = ""; var_180_string = "";
	func_7930(var_177_bool, "volonteers_klara", "disease", "grif");
	var_184_bool = 0; var_185_string = ""; var_186_string = "";
	func_7918(var_184_bool, "quest_k4_01", "completed");
	return 0;
}


func_7750(var_277_string)
{
	var_278_bool = 0; var_279_float = 0; var_280_float = 0; var_281_bool = 0; var_282_float = 0; var_283_float = 0;
	lshHasAnimation(var_281_bool, var_277_string);
	var_284_bool = var_281_bool;
	if(var_284_bool != 0) {
		lshGetAnimTimes(var_277_string, var_282_float, var_283_float);
		lshPlayAnimation(var_282_float, var_283_float, (bool)0);
	} else {
		var_287_int = "Can't find lsh animation : " + var_277_string;
		Trace(var_287_int);
	}
	return 6;
	
}


func_9294()
{
	var_235_object = Obj(); var_236_object = Obj();
	CreateDiaryEntry(var_236_object, (int)343, (int)1, (int)525452);
	var_240_bool = 0; var_241_object = Obj(); var_242_int = 0;
	var_236_object = var_241_object;
	func_9515(var_240_bool, var_241_object, (int)337);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8783(var_580_bool)
{
	var_582_int = 0; var_583_string = "";
	func_7830(var_582_int, "ook3Alexandr1");
	var_585_bool = var_582_int == (int)0;
	if(var_585_bool != 0) {
		var_580_bool = 1;
		return 0;
	}
	var_580_bool = 0;
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_331_object, var_332_object)
{
	var_0_object = var_332_object;
	var_1_object = var_331_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_338_bool = 0; var_339_object = Obj();
		var_339_object = var_1_object;
		func_8651(var_339_object);
		if(var_338_bool != 0) {
			var_346_string = "";
			func_258(var_332_object, "Strict");
			@@@var_0_object:SetMessage((int)524656);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526341, (int)27627, (int)27626);
		} else {
				var_366_bool = 0;
				var_366_bool = 0;
				var_367_bool = 0; var_368_object = Obj();
				var_368_object = var_1_object;
				func_8687(var_368_object);
				if(var_367_bool != 0) {
					var_373_bool = 0; var_374_object = Obj();
					var_374_object = var_1_object;
					func_8711(var_374_object);
					if(var_373_bool != 0) {
						var_366_bool = 1;
					}
				}
				if(var_366_bool != 0) {
					var_379_object = Obj(); var_380_object = Obj();
					var_379_object = var_1_object;
					var_380_object = var_0_object;
					func_8101();
					var_383_string = "";
					func_258(var_332_object, "Strict");
					@@@var_0_object:SetMessage((int)524742);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)526324, (int)27607, (int)27606);
					@@@var_0_object:AddReply((int)526540, (int)27607, (int)27809);
					goto Label_228;
				}
				var_391_string = "";
				func_258(var_332_object, "Neutral");
				@@@var_0_object:SetMessage((int)524660);
				@@@var_0_object:ClearReplies();
				var_393_bool = 0; var_394_object = Obj();
				var_394_object = var_1_object;
				func_8663(var_394_object);
				if(var_393_bool != 0) {
					@@@var_0_object:AddReply((int)524664, (int)26004, (int)26003);
				}
				var_402_bool = 0;
				var_402_bool = 0;
				var_403_bool = 0; var_404_object = Obj();
				var_404_object = var_1_object;
				func_8675(var_404_object);
				if(var_403_bool != 0) {
					var_409_bool = 0; var_410_object = Obj();
					var_410_object = var_1_object;
					func_8687(var_410_object);
					var_411_bool = var_409_bool == 0; //@nz
					if(var_411_bool != 0) {
						var_402_bool = 1;
					}
				}
				if(var_402_bool != 0) {
					@@@var_0_object:AddReply((int)524711, (int)26051, (int)26050);
				}
				var_415_bool = 0;
				var_415_bool = 0;
				var_416_bool = 0; var_417_object = Obj();
				var_417_object = var_1_object;
				func_8699(var_417_object);
				if(var_416_bool != 0) {
					var_422_bool = 0; var_423_object = Obj();
					var_423_object = var_1_object;
					func_8711(var_423_object);
					var_424_bool = var_422_bool == 0; //@nz
					if(var_424_bool != 0) {
						var_415_bool = 1;
					}
				}
				if(var_415_bool != 0) {
					@@@var_0_object:AddReply((int)524745, (int)27820, (int)26069);
				}
				var_428_bool = 0; var_429_object = Obj();
				var_429_object = var_1_object;
				func_8723(var_429_object);
				if(var_428_bool != 0) {
					@@@var_0_object:AddReply((int)524768, (int)27831, (int)26092);
				}
				@@@var_0_object:AddReply((int)524661, (int)-1, (int)26000);
				@@@var_0_object:AddReply((int)541719, (int)-1, (int)43909);
				goto Label_228;
		}
	}
Label_228:
	var_358_bool = 0;
	func_7994(var_358_bool);
	if(var_358_bool != 0) {

	Label_232:
		lshWaitForAnimEnd();
		var_359_string = var_3_string;
		if(var_359_string != 0) {
		} else {
			var_360_string = "";
			var_360_string = var_2_object;
			func_7750(var_360_string);
			goto Label_232;
	}
		PlayAnimation("all", "idle");

	Label_247:
		WaitForAnimEnd();
		var_363_string = var_3_string;
		if(var_363_string != 0) {
			goto Label_257;
		}
		PlayAnimation("all", "idle");
		goto Label_247;

	}
	goto Label_257;
	
Label_257:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_5714(var_0_object, var_1_object, var_2_object, var_3_string, var_1021_object, var_1022_object)
{
	var_0_object = var_1022_object;
	var_1_object = var_1021_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1028_string = "";
		func_5787(var_1022_object, "Grief");
		@@@var_0_object:SetMessage((int)526152);
		@@@var_0_object:ClearReplies();
		var_1037_bool = 0; var_1038_object = Obj();
		var_1038_object = var_1_object;
		func_8974(var_1038_object);
		if(var_1037_bool != 0) {
			@@@var_0_object:AddReply((int)526153, (int)29639, (int)27432);
		}
		var_1046_bool = 0; var_1047_object = Obj();
		var_1047_object = var_1_object;
		func_8986(var_1047_object);
		if(var_1046_bool != 0) {
			@@@var_0_object:AddReply((int)526182, (int)29651, (int)27463);
		}
		@@@var_0_object:AddReply((int)526158, (int)-1, (int)27437);
		goto Label_5757;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1656";
	}
Label_5757:
	var_1058_bool = 0;
	func_7994(var_1058_bool);
	if(var_1058_bool != 0) {

	Label_5761:
		lshWaitForAnimEnd();
		var_1059_string = var_3_string;
		if(var_1059_string != 0) {
		} else {
			var_1060_string = "";
			var_1060_string = var_2_object;
			func_7750(var_1060_string);
			goto Label_5761;
	}
		PlayAnimation("all", "idle");

	Label_5776:
		WaitForAnimEnd();
		var_1063_string = var_3_string;
		if(var_1063_string != 0) {
			goto Label_5786;
		}
		PlayAnimation("all", "idle");
		goto Label_5776;
	}
	goto Label_5786;
	
Label_5786:
	return 0;
	
}


func_8276(var_149_object)
{
	var_151_int = 0; var_152_int = 0;
	SetVariable("k4q01", (int)5);
	func_9333();
	@@var_149_object:RemoveItemByType(var_152_int, "k4q01_scull_bag", (int)1);
	return 2;
}


func_7766(var_255_string, var_256_bool)
{
	var_259_bool = 0; var_260_float = 0; var_261_float = 0; var_262_bool = 0; var_263_float = 0; var_264_float = 0;
	lshHasAnimation(var_262_bool, var_255_string);
	var_265_bool = var_262_bool;
	if(var_265_bool != 0) {
		lshGetAnimTimes(var_255_string, var_263_float, var_264_float);
		lshPlayAnimation(var_263_float, var_264_float, var_256_bool);
	} else {
		var_267_int = "Can't find lsh animation : " + var_255_string;
		Trace(var_267_int);
	}
	return 6;
	
}


func_7256()
{
	var_1261_float = 0; var_1262_float = 0;
	rand(var_1262_float, (int)8, (int)16);
	SetTimer((int)10, var_1262_float);
	return 2;
}


func_8795(var_628_bool)
{
	var_630_int = 0; var_631_string = "";
	func_7830(var_630_int, "k3q01");
	var_633_bool = var_630_int == (int)3;
	if(var_633_bool != 0) {
		var_628_bool = 1;
		return 0;
	}
	var_628_bool = 0;
	return 0;
}


func_9307()
{
	var_82_object = Obj(); var_83_object = Obj();
	CreateDiaryEntry(var_83_object, (int)368, (int)1, (int)525725);
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0;
	var_83_object = var_88_object;
	func_9515(var_87_bool, var_88_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8289()
{
	func_9346();
	var_242_bool = 0; var_243_string = ""; var_244_string = "";
	func_7918(var_242_bool, "quest_k4_01", "completed");
	return 0;
}


func_7265()
{
	KillTimer((int)10);
	return 0;
}


func_7781(var_183_bool, var_184_string)
{
	var_185_bool = 0; var_186_bool = 0;
	var_187_bool = 0;
	func_7994(var_187_bool);
	if(var_187_bool != 0) {
		lshHasSpeech(var_186_bool, var_184_string);
		var_188_bool = var_186_bool;
		if(var_188_bool != 0) {
			lshPlaySpeech(var_184_string);
			var_183_bool = 1;
			return 2;
		}
	}
	var_183_bool = 0;
	return 2;
}


func_8807(var_714_bool)
{
	var_716_int = 0; var_717_string = "";
	func_7830(var_716_int, "k4q01");
	var_719_bool = var_716_int == (int)0;
	if(var_719_bool != 0) {
		var_714_bool = 1;
		return 0;
	}
	var_714_bool = 0;
	return 0;
}


func_6760(var_2_object, var_1175_string)
{
	var_1176_bool = 0;
	func_7994(var_1176_bool);
	var_1177_bool = var_1176_bool == 0; //@nz
	if(var_1177_bool != 0) {
		return 0;
	}
	var_1178_bool = var_1175_string == var_2_object;
	if(var_1178_bool != 0) {
		return 0;
	}
	var_1179_string = ""; var_1180_bool = 0;
	var_1175_string = var_1179_string;
	var_1182_bool = var_1175_string == "";
	if(var_1182_bool != 0) {
		var_1180_bool = 0;
	} else {
		var_1180_bool = 1;
	}
	func_7766(var_1179_string, var_1180_bool);
	var_2_object = var_1175_string;
	return 0;
	
}


func_9320()
{
	var_105_object = Obj(); var_106_object = Obj();
	CreateDiaryEntry(var_106_object, (int)369, (int)1, (int)525726);
	var_110_bool = 0; var_111_object = Obj(); var_112_int = 0;
	var_106_object = var_111_object;
	func_9515(var_110_bool, var_111_object, (int)368);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8299()
{
	var_260_object = Obj(); var_261_object = Obj();
	SetVariable("k4q03", (int)2);
	func_9560(Obj());
	var_264_object = var_261_object;
	var_269_float = 0;
	func_7942(var_269_float);
	@@var_261_object:AddMark("k4q03AlexandrGotoBurah", "pt_map_k4q03_burah", (int)0, (int)525827, var_269_float);
	func_9372();
	var_278_bool = 0; var_279_string = ""; var_280_string = "";
	func_7918(var_278_bool, "quest_k4_03", "place_burah");
	return 2;
}
EMIT "Stack[-1] = 0";


func_8819(var_675_bool)
{
	var_677_int = 0; var_678_string = "";
	func_7830(var_677_int, "ook4Alexandr1");
	var_680_bool = var_677_int == (int)0;
	if(var_680_bool != 0) {
		var_675_bool = 1;
		return 0;
	}
	var_675_bool = 0;
	return 0;
}


func_7796()
{
	var_59_bool = 0;
	func_7994(var_59_bool);
	if(var_59_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_9333()
{
	var_155_object = Obj(); var_156_object = Obj();
	CreateDiaryEntry(var_156_object, (int)374, (int)1, (int)525731);
	var_160_bool = 0; var_161_object = Obj(); var_162_int = 0;
	var_156_object = var_161_object;
	func_9515(var_160_bool, var_161_object, (int)368);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7803(var_151_object)
{
	var_152_object = Obj(); var_153_object = Obj();
	self(var_153_object);
	var_153_object = var_151_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_8831(var_733_bool)
{
	var_735_int = 0; var_736_string = "";
	func_7830(var_735_int, "k4q01");
	var_738_bool = var_735_int == (int)4;
	if(var_738_bool != 0) {
		var_733_bool = 1;
		return 0;
	}
	var_733_bool = 0;
	return 0;
}


func_7809(var_115_cvector, var_116_cvector)
{
	var_118_float = 0; var_119_float = 0;
	var_120_int = var_116_cvector | var_116_cvector;
	var_119_float = sqrt(var_120_int);
	var_121_float = 9.999999974752427e-07;
	var_122_bool = var_119_float < var_121_float;
	if(var_122_bool != 0) {
		var_115_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_115_cvector = var_116_cvector / var_119_float;
	return 2;
}


func_9346()
{
	var_234_object = Obj(); var_235_object = Obj();
	CreateDiaryEntry(var_235_object, (int)376, (int)1, (int)525733);
	var_239_bool = 0; var_240_object = Obj(); var_241_int = 0;
	var_235_object = var_240_object;
	func_9515(var_239_bool, var_240_object, (int)368);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8327()
{
	func_9385();
	var_339_bool = 0; var_340_string = ""; var_341_string = "";
	func_7918(var_339_bool, "quest_k4_03", "fail");
	return 0;
}


func_6281(var_0_object, var_1_object, var_2_object, var_3_string, var_1094_object, var_1095_object)
{
	var_0_object = var_1095_object;
	var_1_object = var_1094_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1101_string = "";
		func_6358(var_1095_object, "Neutral");
		@@@var_0_object:SetMessage((int)527664);
		@@@var_0_object:ClearReplies();
		var_1110_bool = 0;
		var_1110_bool = 0;
		var_1111_bool = 0; var_1112_object = Obj();
		var_1112_object = var_1_object;
		func_9010(var_1112_object);
		if(var_1111_bool != 0) {
			var_1117_bool = 0; var_1118_object = Obj();
			var_1118_object = var_1_object;
			func_8998(var_1118_object);
			if(var_1117_bool != 0) {
				var_1110_bool = 1;
			}
		}
		if(var_1110_bool != 0) {
			@@@var_0_object:AddReply((int)527666, (int)29014, (int)29013);
		}
		@@@var_0_object:AddReply((int)527665, (int)-1, (int)29012);
		@@@var_0_object:AddReply((int)527682, (int)-1, (int)29030);
		goto Label_6328;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x188d";
	}
Label_6328:
	var_1132_bool = 0;
	func_7994(var_1132_bool);
	if(var_1132_bool != 0) {

	Label_6332:
		lshWaitForAnimEnd();
		var_1133_string = var_3_string;
		if(var_1133_string != 0) {
		} else {
			var_1134_string = "";
			var_1134_string = var_2_object;
			func_7750(var_1134_string);
			goto Label_6332;
	}
		PlayAnimation("all", "idle");

	Label_6347:
		WaitForAnimEnd();
		var_1137_string = var_3_string;
		if(var_1137_string != 0) {
			goto Label_6357;
		}
		PlayAnimation("all", "idle");
		goto Label_6347;
	}
	goto Label_6357;
	
Label_6357:
	return 0;
	
}


func_8843(var_724_bool, var_725_object)
{
	var_726_bool = 0; var_727_object = Obj(); var_728_string = "";
	var_725_object = var_727_object;
	func_7866(var_726_bool, var_727_object, "k4q01_scull_bag");
	if(var_726_bool != 0) {
		var_724_bool = 1;
		return 0;
	}
	var_724_bool = 0;
	return 0;
}


func_7819(var_190_float, var_191_float, var_192_float, var_193_float)
{
	var_194_bool = var_191_float < var_192_float;
	if(var_194_bool != 0) {
		var_192_float = var_190_float;
		return 0;
	}
	var_195_bool = var_191_float > var_193_float;
	if(var_195_bool != 0) {
		var_193_float = var_190_float;
		return 0;
	}
	var_191_float = var_190_float;
	return 0;
}


func_2190(var_0_object, var_1_object, var_2_object, var_3_string, var_573_object, var_574_object)
{
	var_0_object = var_574_object;
	var_1_object = var_573_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_580_bool = 0; var_581_object = Obj();
		var_581_object = var_1_object;
		func_8783(var_581_object);
		if(var_580_bool != 0) {
			var_586_object = Obj(); var_587_object = Obj();
			var_586_object = var_1_object;
			var_587_object = var_0_object;
			func_8198();
			var_590_object = Obj(); var_591_object = Obj();
			var_590_object = var_1_object;
			var_591_object = var_0_object;
			func_8545();
			var_594_string = "";
			func_2298(var_574_object, "Neutral");
			@@@var_0_object:SetMessage((int)525397);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542415, (int)44794, (int)44793);
			@@@var_0_object:AddReply((int)542421, (int)44794, (int)44799);
		} else {
				var_617_string = "";
				func_2298(var_574_object, "Grief");
				@@@var_0_object:SetMessage((int)525400);
				@@@var_0_object:ClearReplies();
				var_619_bool = 0; var_620_object = Obj();
				var_620_object = var_1_object;
				func_8771(var_620_object);
				if(var_619_bool != 0) {
					@@@var_0_object:AddReply((int)525401, (int)26771, (int)26769);
				}
				var_628_bool = 0; var_629_object = Obj();
				var_629_object = var_1_object;
				func_8795(var_629_object);
				if(var_628_bool != 0) {
					@@@var_0_object:AddReply((int)525435, (int)26804, (int)26803);
				}
				@@@var_0_object:AddReply((int)525402, (int)-1, (int)26770);
				goto Label_2268;
		}
	}
Label_2268:
	var_609_bool = 0;
	func_7994(var_609_bool);
	if(var_609_bool != 0) {

	Label_2272:
		lshWaitForAnimEnd();
		var_610_string = var_3_string;
		if(var_610_string != 0) {
		} else {
			var_611_string = "";
			var_611_string = var_2_object;
			func_7750(var_611_string);
			goto Label_2272;
	}
		PlayAnimation("all", "idle");

	Label_2287:
		WaitForAnimEnd();
		var_614_string = var_3_string;
		if(var_614_string != 0) {
			goto Label_2297;
		}
		PlayAnimation("all", "idle");
		goto Label_2287;

	}
	goto Label_2297;
	
Label_2297:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x892";


func_9359()
{
	var_169_object = Obj(); var_170_object = Obj();
	CreateDiaryEntry(var_170_object, (int)375, (int)1, (int)525732);
	var_174_bool = 0; var_175_object = Obj(); var_176_int = 0;
	var_170_object = var_175_object;
	func_9515(var_174_bool, var_175_object, (int)368);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8337()
{
	var_64_object = Obj(); var_65_object = Obj();
	SetVariable("k5q01", (int)1);
	func_9560(Obj());
	var_68_object = var_65_object;
	var_79_float = 0;
	func_7942(var_79_float);
	@@var_65_object:AddMark("k5q01AlexandrGotoMladVlad", "pt_map_mladvlad", (int)1, (int)515284, var_79_float);
	func_9398();
	func_9411();
	return 2;
}
EMIT "Stack[-1] = 0";


func_8854(var_742_bool)
{
	var_744_int = 0; var_745_string = "";
	func_7830(var_744_int, "k4q01");
	var_747_bool = var_744_int == (int)6;
	if(var_747_bool != 0) {
		var_742_bool = 1;
		return 0;
	}
	var_742_bool = 0;
	return 0;
}


func_7830(var_340_int, var_341_string)
{
	var_342_int = 0; var_343_int = 0;
	GetVariable(var_341_string, var_343_int);
	var_343_int = var_340_int;
	return 2;
}


func_5787(var_2_object, var_1028_string)
{
	var_1029_bool = 0;
	func_7994(var_1029_bool);
	var_1030_bool = var_1029_bool == 0; //@nz
	if(var_1030_bool != 0) {
		return 0;
	}
	var_1031_bool = var_1028_string == var_2_object;
	if(var_1031_bool != 0) {
		return 0;
	}
	var_1032_string = ""; var_1033_bool = 0;
	var_1028_string = var_1032_string;
	var_1035_bool = var_1028_string == "";
	if(var_1035_bool != 0) {
		var_1033_bool = 0;
	} else {
		var_1033_bool = 1;
	}
	func_7766(var_1032_string, var_1033_bool);
	var_2_object = var_1028_string;
	return 0;
	
}


func_7835(var_320_int, var_321_int)
{
	var_322_object = Obj(); var_323_object = Obj();
	CreateIntVector(var_323_object);
	@@var_323_object:add(var_320_int);
	@@var_323_object:add(var_321_int);
	SendWorldWndMessage((int)3, var_323_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9372()
{
	var_270_object = Obj(); var_271_object = Obj();
	CreateDiaryEntry(var_271_object, (int)386, (int)2, (int)525824);
	var_275_bool = 0; var_276_object = Obj(); var_277_int = 0;
	var_271_object = var_276_object;
	func_9515(var_275_bool, var_276_object, (int)384);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8866(var_751_bool)
{
	var_753_int = 0; var_754_string = "";
	func_7830(var_753_int, "k4q03");
	var_756_bool = var_753_int == (int)1;
	if(var_756_bool != 0) {
		var_751_bool = 1;
		return 0;
	}
	var_751_bool = 0;
	return 0;
}


func_7847(var_307_object, var_308_int)
{
	var_309_int = 0; var_310_int = 0;
	var_311_object = Obj(); var_312_string = ""; var_313_int = 0;
	var_307_object = var_311_object;
	var_308_int = var_313_int;
	func_7494(var_311_object, "money", var_313_int);
	var_318_bool = var_308_int > (int)0;
	if(var_318_bool != 0) {
		GetInvItemByName(var_310_int, "Money");
		var_320_int = 0; var_321_int = 0;
		var_310_int = var_320_int;
		var_308_int = var_321_int;
		func_7835(var_320_int, var_321_int);
	}
	return 2;
}


func_9385()
{
	var_331_object = Obj(); var_332_object = Obj();
	CreateDiaryEntry(var_332_object, (int)388, (int)2, (int)525826);
	var_336_bool = 0; var_337_object = Obj(); var_338_int = 0;
	var_332_object = var_337_object;
	func_9515(var_336_bool, var_337_object, (int)384);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8363()
{
	SetVariable("ook5Alexandr1", (int)1);
	return 0;
}


func_8878(var_761_bool)
{
	var_763_int = 0; var_764_string = "";
	func_7830(var_763_int, "k4q03");
	var_766_bool = var_763_int == (int)4;
	if(var_766_bool != 0) {
		var_761_bool = 1;
		return 0;
	}
	var_761_bool = 0;
	return 0;
}


func_3247(var_2_object, var_689_string)
{
	var_690_bool = 0;
	func_7994(var_690_bool);
	var_691_bool = var_690_bool == 0; //@nz
	if(var_691_bool != 0) {
		return 0;
	}
	var_692_bool = var_689_string == var_2_object;
	if(var_692_bool != 0) {
		return 0;
	}
	var_693_string = ""; var_694_bool = 0;
	var_689_string = var_693_string;
	var_696_bool = var_689_string == "";
	if(var_696_bool != 0) {
		var_694_bool = 0;
	} else {
		var_694_bool = 1;
	}
	func_7766(var_693_string, var_694_bool);
	var_2_object = var_689_string;
	return 0;
	
}


func_5294(var_2_object, var_932_string)
{
	var_933_bool = 0;
	func_7994(var_933_bool);
	var_934_bool = var_933_bool == 0; //@nz
	if(var_934_bool != 0) {
		return 0;
	}
	var_935_bool = var_932_string == var_2_object;
	if(var_935_bool != 0) {
		return 0;
	}
	var_936_string = ""; var_937_bool = 0;
	var_932_string = var_936_string;
	var_939_bool = var_932_string == "";
	if(var_939_bool != 0) {
		var_937_bool = 0;
	} else {
		var_937_bool = 1;
	}
	func_7766(var_936_string, var_937_bool);
	var_2_object = var_932_string;
	return 0;
	
}


func_8369()
{
	SetVariable("k5q01", (int)1000);
	func_9424();
	return 0;
}


func_9398()
{
	var_82_object = Obj(); var_83_object = Obj();
	CreateDiaryEntry(var_83_object, (int)390, (int)1, (int)525883);
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0;
	var_83_object = var_88_object;
	func_9515(var_87_bool, var_88_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8890(var_853_bool)
{
	var_855_int = 0; var_856_string = "";
	func_7830(var_855_int, "k5q01");
	var_858_bool = var_855_int == (int)0;
	if(var_858_bool != 0) {
		var_853_bool = 1;
		return 0;
	}
	var_853_bool = 0;
	return 0;
}


func_8378()
{
	SetVariable("k5q02", (int)4);
	func_9437();
	var_213_bool = 0; var_214_string = ""; var_215_string = "";
	func_7918(var_213_bool, "quest_k5_02", "place_andrei");
	return 0;
}


func_7866(var_726_bool, var_727_object, var_728_string)
{
	var_729_int = 0; var_730_bool = 0; var_731_int = 0; var_732_bool = 0;
	GetInvItemByName(var_731_int, var_728_string);
	@@var_727_object:HasItem(var_731_int, var_732_bool);
	var_732_bool = var_726_bool;
	return 4;
}


func_7873(var_161_bool, var_162_object, var_163_float)
{
	var_164_bool = var_162_object == 0; //@nz
	if(var_164_bool != 0) {
		var_161_bool = 0;
		return 0;
	}
	var_166_bool = var_163_float > (int)0;
	if(var_166_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_197_bool = var_163_float < (int)0;
		if(var_197_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_7894;
		}
		var_161_bool = 0;
		return 0;
	}
Label_7894:
	var_168_float = 0;
	var_163_float = var_168_float;
	func_7908(var_168_float);
	var_172_bool = 0; var_173_object = Obj(); var_174_string = ""; var_175_float = 0; var_176_float = 0; var_177_float = 0;
	var_162_object = var_173_object;
	var_163_float = var_175_float;
	func_7472(var_172_bool, var_173_object, "reputation", var_175_float, (float)0, (float)1);
	var_161_bool = 1;
	return 0;
	
}


func_9411()
{
	var_105_object = Obj(); var_106_object = Obj();
	CreateDiaryEntry(var_106_object, (int)391, (int)1, (int)525884);
	var_110_bool = 0; var_111_object = Obj(); var_112_int = 0;
	var_106_object = var_111_object;
	func_9515(var_110_bool, var_111_object, (int)390);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8902(var_817_bool)
{
	var_819_int = 0; var_820_string = "";
	func_7830(var_819_int, "ook5Alexandr1");
	var_822_bool = var_819_int == (int)0;
	if(var_822_bool != 0) {
		var_817_bool = 1;
		return 0;
	}
	var_817_bool = 0;
	return 0;
}


func_8392()
{
	SetVariable("ook6Alexandr1", (int)1);
	return 0;
}


func_8398()
{
	SetVariable("k6q01", (int)1);
	func_9450();
	func_9463();
	var_97_bool = 0; var_98_string = ""; var_99_string = "";
	func_7918(var_97_bool, "quest_k6_01", "lock_danko");
	return 0;
}


func_7376()
{
	var_61_int = 0; var_62_int = 0; var_63_bool = 0; var_64_int = 0; var_65_int = 0; var_66_bool = 0; var_67_int = 0; var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_int = 0; var_72_bool = 0;
	WaitForAnimEnd();
	var_73_bool = 0;
	func_7520(var_73_bool);
	var_74_bool = var_73_bool == 0; //@nz
	if(var_74_bool != 0) {
		return 12;
	}
	func_7969((int)0);
	var_75_int = var_67_int;
	var_68_int = 0;
	
Label_7390:
	var_88_bool = 0;
	var_88_bool = 0;
	var_90_bool = var_68_int < (int)5;
	if(var_90_bool != 0) {
		var_91_bool = 0;
		func_7520(var_91_bool);
		if(var_91_bool != 0) {
			var_88_bool = 1;
		}
	}
	if(var_88_bool != 0) {
		var_92_bool = var_67_int == 0; //@nz
		if(var_92_bool != 0) {
			Sleep((int)3, var_69_bool);
			var_94_bool = var_69_bool == 0; //@nz
			if(var_94_bool != 0) {
			} else {
		} else {
				irand(var_70_int, var_67_int);
				irand(var_71_int, (int)5);
				var_100_bool = var_71_int != (int)0;
				if(var_100_bool != 0) {
					var_70_int = 0;
				}
				var_102_string = ""; var_103_int = 0;
				var_70_int = var_103_int;
				func_7962(var_102_string, var_103_int);
				PlayAnimation("all", var_102_string);
				WaitForAnimEnd(var_72_bool);
				var_104_bool = var_72_bool == 0; //@nz
				if(var_104_bool == 0) goto Label_7431;
				goto Label_7442;
		}
		Label_7431:
			var_95_bool = 0;
			func_7445(var_95_bool);
			var_96_bool = var_95_bool == 0; //@nz
			if(var_96_bool != 0) {
				goto Label_7442;
			}
			ResetAAS();
			var_68_int = var_68_int + (int)1;
			goto Label_7390;

		}
	}
Label_7442:
	ResetAAS();
	return 12;
	
}


func_9424()
{
	var_151_object = Obj(); var_152_object = Obj();
	CreateDiaryEntry(var_152_object, (int)396, (int)1, (int)525889);
	var_156_bool = 0; var_157_object = Obj(); var_158_int = 0;
	var_152_object = var_157_object;
	func_9515(var_156_bool, var_157_object, (int)390);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8914(var_862_bool)
{
	var_864_int = 0; var_865_string = "";
	func_7830(var_864_int, "k5q01");
	var_867_bool = var_864_int == (int)4;
	if(var_867_bool != 0) {
		var_862_bool = 1;
		return 0;
	}
	var_862_bool = 0;
	return 0;
}


func_6358(var_2_object, var_1101_string)
{
	var_1102_bool = 0;
	func_7994(var_1102_bool);
	var_1103_bool = var_1102_bool == 0; //@nz
	if(var_1103_bool != 0) {
		return 0;
	}
	var_1104_bool = var_1101_string == var_2_object;
	if(var_1104_bool != 0) {
		return 0;
	}
	var_1105_string = ""; var_1106_bool = 0;
	var_1101_string = var_1105_string;
	var_1108_bool = var_1101_string == "";
	if(var_1108_bool != 0) {
		var_1106_bool = 0;
	} else {
		var_1106_bool = 1;
	}
	func_7766(var_1105_string, var_1106_bool);
	var_2_object = var_1101_string;
	return 0;
	
}


func_2779(var_0_object, var_77_int, var_78_object)
{
	var_80_object = Obj(); var_81_bool = 0; var_82_int = 0; var_83_bool = 0; var_84_object = Obj(); var_85_bool = 0; var_86_int = 0; var_87_bool = 0;
	var_0_object = var_78_object;
	var_88_bool = 0; var_89_object = Obj(); var_90_float = 0;
	var_78_object = var_89_object;
	func_7525(var_88_bool, var_89_object, (float)70.0);
	var_135_bool = var_88_bool == 0; //@nz
	if(var_135_bool != 0) {
		var_77_int = -2;
		return 8;
	}
	CreateDialog(var_84_object);
	var_136_int = 0;
	func_7988(var_136_int);
	@@var_84_object:SetNPCName(var_136_int);
	var_137_int = 0;
	func_7986(var_137_int);
	@@var_84_object:SetNPCDescription(var_137_int);
	var_138_string = "";
	func_7990(var_138_string);
	@@var_84_object:SetPhoto(var_138_string);
	var_139_string = "";
	func_7992(var_139_string);
	@@var_84_object:SetPhoto2(var_139_string);
	var_140_int = 0;
	func_9610(var_140_int);
	@@var_84_object:SetPlayerName(var_140_int);
	IsOverrideActive(var_85_bool);
	var_148_bool = var_85_bool;
	if(var_148_bool != 0) {
		var_77_int = -2;
		return 8;
	}
	DoDialog(var_84_object);
	var_149_bool = 0; var_150_object = Obj();
	func_7803(Obj());
	var_151_object = var_150_object;
	func_7612(var_149_bool, var_150_object);
	var_244_object = Obj(); var_245_object = Obj();
	var_78_object = var_244_object;
	var_84_object = var_245_object;
	TaskCall(7);
	func_2860(var_246_object, var_247_object, var_248_string, var_249_bool, var_244_object, var_245_object);
	TaskReturn();
	@@var_84_object:IsDialogEnd(var_87_bool);
	
Label_2842:
	var_293_bool = var_87_bool == 0; //@nz
	if(var_293_bool != 0) {
		sync();
		@@var_84_object:IsDialogEnd(var_87_bool);
		goto Label_2842;
	}
	var_78_object = Obj();
	func_7594();
	StopDialog(var_84_object);
	@@var_84_object:GetReturnValue((int)-1);
	var_86_int = var_77_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_9437()
{
	var_205_object = Obj(); var_206_object = Obj();
	CreateDiaryEntry(var_206_object, (int)401, (int)2, (int)525939);
	var_210_bool = 0; var_211_object = Obj(); var_212_int = 0;
	var_206_object = var_211_object;
	func_9515(var_210_bool, var_211_object, (int)397);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8926(var_871_bool)
{
	var_873_int = 0; var_874_string = "";
	func_7830(var_873_int, "k5q02");
	var_876_bool = var_873_int == (int)3;
	if(var_876_bool != 0) {
		var_871_bool = 1;
		return 0;
	}
	var_871_bool = 0;
	return 0;
}


func_8415()
{
	SetVariable("ook6Alexandr2", (int)1);
	return 0;
}


func_7908(var_168_float)
{
	var_169_object = Obj(); var_170_object = Obj();
	CreateFloatVector(var_170_object);
	@@var_170_object:add(var_168_float);
	SendWorldWndMessage((int)16, var_170_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8421()
{
	SetVariable("k7q01", (int)2);
	func_9476();
	return 0;
}


func_8938(var_918_bool)
{
	var_920_int = 0; var_921_string = "";
	func_7830(var_920_int, "ook6Alexandr1");
	var_923_bool = var_920_int == (int)0;
	if(var_923_bool != 0) {
		var_918_bool = 1;
		return 0;
	}
	var_918_bool = 0;
	return 0;
}


func_9450()
{
	var_66_object = Obj(); var_67_object = Obj();
	CreateDiaryEntry(var_67_object, (int)408, (int)1, (int)526109);
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0;
	var_67_object = var_72_object;
	func_9515(var_71_bool, var_72_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8430()
{
	SetVariable("k7q01", (int)5);
	func_9489();
	return 0;
}


func_7918(var_97_bool, var_98_string, var_99_string)
{
	var_100_object = Obj(); var_101_object = Obj();
	FindActor(var_101_object, var_98_string);
	var_102_bool = var_101_object == 0; //@ne
	if(var_102_bool != 0) {
		var_97_bool = 0;
		return 2;
	}
	Trigger(var_101_object, var_99_string);
	var_97_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_8950(var_953_bool)
{
	var_955_int = 0; var_956_string = "";
	func_7830(var_955_int, "ook6Alexandr2");
	var_958_bool = var_955_int == (int)0;
	if(var_958_bool != 0) {
		var_953_bool = 1;
		return 0;
	}
	var_953_bool = 0;
	return 0;
}


func_8439()
{
	var_70_int = 0; var_71_int = 0;
	GetVariable("k11q01SoulCount", var_71_int);
	var_71_int = var_71_int + (int)1;
	SetVariable("k11q01SoulCount", var_71_int);
	var_76_bool = var_71_int == (int)2;
	if(var_76_bool != 0) {
		func_9112();
	} else {
		var_101_bool = var_71_int == (int)3;
		if(var_101_bool != 0) {
			func_9099();
			goto Label_8489;
		}
		var_111_bool = var_71_int == (int)4;
		if(var_111_bool != 0) {
			func_9086();
			goto Label_8489;
		}
		var_121_bool = var_71_int == (int)5;
		if(var_121_bool != 0) {
			func_9073();
			goto Label_8489;
		}
		var_131_bool = var_71_int == (int)6;
		if(var_131_bool != 0) {
			func_9060();
			goto Label_8489;
		}
		var_141_bool = var_71_int == (int)7;
		if(var_141_bool == 0) goto Label_8489;
		func_9047();
	}
Label_8489:
	return 2;
	
}


func_9463()
{
	var_89_object = Obj(); var_90_object = Obj();
	CreateDiaryEntry(var_90_object, (int)409, (int)1, (int)526110);
	var_94_bool = 0; var_95_object = Obj(); var_96_int = 0;
	var_90_object = var_95_object;
	func_9515(var_94_bool, var_95_object, (int)408);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2298(var_2_object, var_594_string)
{
	var_595_bool = 0;
	func_7994(var_595_bool);
	var_596_bool = var_595_bool == 0; //@nz
	if(var_596_bool != 0) {
		return 0;
	}
	var_597_bool = var_594_string == var_2_object;
	if(var_597_bool != 0) {
		return 0;
	}
	var_598_string = ""; var_599_bool = 0;
	var_594_string = var_598_string;
	var_601_bool = var_594_string == "";
	if(var_601_bool != 0) {
		var_599_bool = 0;
	} else {
		var_599_bool = 1;
	}
	func_7766(var_598_string, var_599_bool);
	var_2_object = var_594_string;
	return 0;
	
}


func_7930(var_177_bool, var_178_string, var_179_string, var_180_string)
{
	var_181_object = Obj(); var_182_object = Obj();
	FindActor(var_182_object, var_178_string);
	var_183_bool = var_182_object == 0; //@ne
	if(var_183_bool != 0) {
		var_177_bool = 0;
		return 2;
	}
	Trigger(var_182_object, var_179_string, var_180_string);
	var_177_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_258(var_2_object, var_346_string)
{
	var_347_bool = 0;
	func_7994(var_347_bool);
	var_348_bool = var_347_bool == 0; //@nz
	if(var_348_bool != 0) {
		return 0;
	}
	var_349_bool = var_346_string == var_2_object;
	if(var_349_bool != 0) {
		return 0;
	}
	var_350_string = ""; var_351_bool = 0;
	var_346_string = var_350_string;
	var_353_bool = var_346_string == "";
	if(var_353_bool != 0) {
		var_351_bool = 0;
	} else {
		var_351_bool = 1;
	}
	func_7766(var_350_string, var_351_bool);
	var_2_object = var_346_string;
	return 0;
	
}


func_8962(var_959_bool)
{
	var_961_int = 0; var_962_string = "";
	func_7830(var_961_int, "k6q01");
	var_964_bool = var_961_int > (int)1;
	if(var_964_bool != 0) {
		var_959_bool = 1;
		return 0;
	}
	var_959_bool = 0;
	return 0;
}


func_9476()
{
	var_66_object = Obj(); var_67_object = Obj();
	CreateDiaryEntry(var_67_object, (int)418, (int)1, (int)526217);
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0;
	var_67_object = var_72_object;
	func_9515(var_71_bool, var_72_object, (int)416);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7942(var_79_float)
{
	var_80_float = 0; var_81_float = 0;
	GetGameTime(var_81_float);
	var_81_float = var_79_float;
	return 2;
}


func_7947(var_204_int)
{
	var_205_float = 0; var_206_float = 0;
	GetGameTime(var_206_float);
	var_208_int = 0;
	var_208_int = var_206_float / (int)24;
	var_204_int = (int)1 + var_208_int;
	return 2;
}


func_1291(var_0_object, var_448_int, var_449_object)
{
	var_451_object = Obj(); var_452_bool = 0; var_453_int = 0; var_454_bool = 0; var_455_object = Obj(); var_456_bool = 0; var_457_int = 0; var_458_bool = 0;
	var_0_object = var_449_object;
	var_459_bool = 0; var_460_object = Obj(); var_461_float = 0;
	var_449_object = var_460_object;
	func_7525(var_459_bool, var_460_object, (float)70.0);
	var_462_bool = var_459_bool == 0; //@nz
	if(var_462_bool != 0) {
		var_448_int = -2;
		return 8;
	}
	CreateDialog(var_455_object);
	var_463_int = 0;
	func_7988(var_463_int);
	@@var_455_object:SetNPCName(var_463_int);
	var_464_int = 0;
	func_7986(var_464_int);
	@@var_455_object:SetNPCDescription(var_464_int);
	var_465_string = "";
	func_7990(var_465_string);
	@@var_455_object:SetPhoto(var_465_string);
	var_466_string = "";
	func_7992(var_466_string);
	@@var_455_object:SetPhoto2(var_466_string);
	var_467_int = 0;
	func_9610(var_467_int);
	@@var_455_object:SetPlayerName(var_467_int);
	IsOverrideActive(var_456_bool);
	var_468_bool = var_456_bool;
	if(var_468_bool != 0) {
		var_448_int = -2;
		return 8;
	}
	DoDialog(var_455_object);
	var_469_bool = 0; var_470_object = Obj();
	func_7803(Obj());
	var_471_object = var_470_object;
	func_7612(var_469_bool, var_470_object);
	var_472_object = Obj(); var_473_object = Obj();
	var_449_object = var_472_object;
	var_455_object = var_473_object;
	TaskCall(3);
	func_1372(var_474_object, var_475_object, var_476_string, var_477_bool, var_472_object, var_473_object);
	TaskReturn();
	@@var_455_object:IsDialogEnd(var_458_bool);
	
Label_1354:
	var_545_bool = var_458_bool == 0; //@nz
	if(var_545_bool != 0) {
		sync();
		@@var_455_object:IsDialogEnd(var_458_bool);
		goto Label_1354;
	}
	var_449_object = Obj();
	func_7594();
	StopDialog(var_455_object);
	@@var_455_object:GetReturnValue((int)-1);
	var_457_int = var_448_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8974(var_1037_bool)
{
	var_1039_int = 0; var_1040_string = "";
	func_7830(var_1039_int, "k7q01");
	var_1042_bool = var_1039_int == (int)1;
	if(var_1042_bool != 0) {
		var_1037_bool = 1;
		return 0;
	}
	var_1037_bool = 0;
	return 0;
}


func_9489()
{
	var_95_object = Obj(); var_96_object = Obj();
	CreateDiaryEntry(var_96_object, (int)423, (int)1, (int)526222);
	var_100_bool = 0; var_101_object = Obj(); var_102_int = 0;
	var_96_object = var_101_object;
	func_9515(var_100_bool, var_101_object, (int)416);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7956(var_303_bool, var_304_int)
{
	var_305_int = 0;
	func_7947(var_305_int);
	var_303_bool = var_305_int == var_304_int;
	return 0;
}


func_7445(var_95_bool)
{
	var_95_bool = 1;
	return 0;
}


func_7447()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_8986(var_1046_bool)
{
	var_1048_int = 0; var_1049_string = "";
	func_7830(var_1048_int, "k7q01");
	var_1051_bool = var_1048_int == (int)4;
	if(var_1051_bool != 0) {
		var_1046_bool = 1;
		return 0;
	}
	var_1046_bool = 0;
	return 0;
}


func_7962(var_81_string, var_82_int)
{
	var_83_string = ""; var_84_string = "";
	var_85_int = var_82_int;
	if(var_85_int != 0) {
		"idle" = "idle" + var_82_int;
	}
	var_84_string = var_81_string;
	return 2;
}


func_7452(var_71_float, var_72_object)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	GetPosition(var_76_cvector);
	@@var_72_object:GetPosition(var_77_cvector);
	var_78_cvector = var_77_cvector - var_76_cvector;
	var_71_float = var_78_cvector | var_78_cvector;
	return 6;
}


func_9502(var_91_object)
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


func_7969(var_75_int)
{
	var_76_int = 0; var_77_bool = 0; var_78_int = 0; var_79_bool = 0;
	var_78_int = 0;
	
Label_7971:
	var_81_string = ""; var_82_int = 0;
	var_78_int = var_82_int;
	func_7962(var_81_string, var_82_int);
	HasAnimation(var_79_bool, "all", var_81_string);
	var_86_bool = var_79_bool == 0; //@nz
	if(var_86_bool != 0) {
	} else {
		var_78_int = var_78_int + (int)1;
		goto Label_7971;
	}
	var_78_int = var_75_int;
	return 4;
	
}


func_7460(var_180_bool, var_181_object, var_182_string)
{
	var_183_bool = 0; var_184_bool = 0;
	var_187_bool = IsFuncExist(var_181_object, "HasProperty", (int)2);
	var_188_bool = var_187_bool == 0; //@nz
	if(var_188_bool != 0) {
		var_180_bool = 0;
		return 2;
	}
	@@var_181_object:HasProperty(var_182_string, var_184_bool);
	var_184_bool = var_180_bool;
	return 2;
}


func_8998(var_1117_bool)
{
	var_1119_int = 0; var_1120_string = "";
	func_7830(var_1119_int, "k11q01");
	var_1122_bool = var_1119_int == (int)9;
	if(var_1122_bool != 0) {
		var_1117_bool = 1;
		return 0;
	}
	var_1117_bool = 0;
	return 0;
}


func_8490()
{
	SetVariable("ook11Alexandr1", (int)1);
	return 0;
}


func_9515(var_82_bool, var_83_object, var_84_int)
{
	var_85_object = Obj(); var_86_object = Obj(); var_87_int = 0; var_88_object = Obj(); var_89_object = Obj(); var_90_int = 0;
	func_9502(Obj());
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


func_2860(var_0_object, var_1_object, var_2_object, var_3_string, var_244_object, var_245_object)
{
	var_0_object = var_245_object;
	var_1_object = var_244_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_251_string = "";
		func_2918(var_245_object, "Neutral");
		@@@var_0_object:SetMessage((int)525459);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)525460, (int)27525, (int)26816);
		@@@var_0_object:AddReply((int)526255, (int)27525, (int)27528);
		goto Label_2888;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xb30";
	}
Label_2888:
	var_275_bool = 0;
	func_7994(var_275_bool);
	if(var_275_bool != 0) {

	Label_2892:
		lshWaitForAnimEnd();
		var_276_string = var_3_string;
		if(var_276_string != 0) {
		} else {
			var_277_string = "";
			var_277_string = var_2_object;
			func_7750(var_277_string);
			goto Label_2892;
	}
		PlayAnimation("all", "idle");

	Label_2907:
		WaitForAnimEnd();
		var_290_string = var_3_string;
		if(var_290_string != 0) {
			goto Label_2917;
		}
		PlayAnimation("all", "idle");
		goto Label_2907;
	}
	goto Label_2917;
	
Label_2917:
	return 0;
	
}


func_8496()
{
	SetVariable("ook4Alexandr2", (int)1);
	return 0;
}


func_7472(var_172_bool, var_173_object, var_174_string, var_175_float, var_176_float, var_177_float)
{
	var_178_float = 0; var_179_float = 0;
	var_180_bool = 0; var_181_object = Obj(); var_182_string = "";
	var_173_object = var_181_object;
	var_174_string = var_182_string;
	func_7460(var_180_bool, var_181_object, var_182_string);
	var_189_bool = var_180_bool == 0; //@nz
	if(var_189_bool != 0) {
		var_172_bool = 0;
		return 2;
	}
	@@var_173_object:GetProperty(var_174_string, var_179_float);
	var_190_float = 0; var_191_float = 0; var_192_float = 0; var_193_float = 0;
	var_191_float = var_179_float + var_175_float;
	var_176_float = var_192_float;
	var_177_float = var_193_float;
	func_7819(var_190_float, var_191_float, var_192_float, var_193_float);
	@@var_173_object:SetProperty(var_174_string, var_190_float);
	var_172_bool = 1;
	return 2;
}


func_7986(var_137_int)
{
	var_137_int = 515528;
	return 0;
}


func_9010(var_1111_bool)
{
	var_1113_int = 0; var_1114_string = "";
	func_7830(var_1113_int, "ook11Alexandr1");
	var_1116_bool = var_1113_int == (int)0;
	if(var_1116_bool != 0) {
		var_1111_bool = 1;
		return 0;
	}
	var_1111_bool = 0;
	return 0;
}


func_7988(var_136_int)
{
	var_136_int = 502854;
	return 0;
}


func_7990(var_138_string)
{
	var_138_string = "ui/NPC_Alexandr.png";
	return 0;
}


func_8502(var_304_object)
{
	Trace("money500 is given");
	var_307_object = Obj(); var_308_int = 0;
	var_304_object = var_307_object;
	func_7847(var_307_object, (int)500);
	return 0;
}


func_7992(var_139_string)
{
	var_139_string = "ui/NPC_Alexandr_b.png";
	return 0;
}


func_7994(var_131_bool)
{
	var_131_bool = 1;
	return 0;
}


func_7996()
{
	var_64_object = Obj(); var_65_object = Obj();
	SetVariable("k1q01", (int)2);
	func_9560(Obj());
	var_68_object = var_65_object;
	var_79_float = 0;
	func_7942(var_79_float);
	@@var_65_object:AddMark("k1q01AlexandrGotoKaterina", "pt_map_katerina", (int)1, (int)524728, var_79_float);
	func_9125();
	return 2;
}
EMIT "Stack[-1] = 0";


func_9022(var_767_bool)
{
	var_769_int = 0; var_770_string = "";
	func_7830(var_769_int, "ook4Alexandr2");
	var_772_bool = var_769_int == (int)0;
	if(var_772_bool != 0) {
		var_767_bool = 1;
		return 0;
	}
	var_767_bool = 0;
	return 0;
}


func_8512()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_8518(var_282_object)
{
	var_283_object = Obj(); var_284_string = ""; var_285_float = 0;
	func_9560(Obj());
	var_286_object = var_283_object;
	func_9577(var_283_object, "pt_map_k4q03_burah", (float)2);
	var_287_object = Obj();
	func_9560(var_287_object);
	@@var_282_object:ShowMap(var_287_object);
	return 0;
}


func_7494(var_311_object, var_312_string, var_313_int)
{
	var_314_int = 0; var_315_int = 0;
	@@var_311_object:GetProperty(var_312_string, var_315_int);
	var_316_int = var_315_int + var_313_int;
	@@var_311_object:SetProperty(var_312_string, var_316_int);
	return 2;
}


func_9543(var_221_bool, var_222_int)
{
	var_223_object = Obj(); var_224_object = Obj(); var_225_object = Obj(); var_226_object = Obj();
	func_9502(Obj());
	var_227_object = var_225_object;
	@@var_225_object:Find(var_222_int, var_226_object);
	var_228_bool = var_226_object == 0; //@nz
	if(var_228_bool != 0) {
		var_221_bool = 0;
		return 4;
	}
	@@var_226_object:Remove();
	var_221_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_9034()
{
	var_213_object = Obj(); var_214_object = Obj();
	CreateDiaryEntry(var_214_object, (int)568, (int)0, (int)530582);
	var_218_bool = 0; var_219_object = Obj(); var_220_int = 0;
	var_214_object = var_219_object;
	func_9515(var_218_bool, var_219_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7501(var_64_bool, var_65_cvector)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_bool = 0;
	GetPosition(var_69_cvector);
	var_70_cvector = var_65_cvector - var_69_cvector;
	var_72_float = GetByIndex(var_70_cvector, 0);
	var_73_float = GetByIndex(var_70_cvector, 2);
	Rotate(var_72_float, var_73_float, var_71_bool);
	var_71_bool = var_64_bool;
	return 6;
}


func_6990(var_0_object, var_1203_int, var_1204_object)
{
	var_1206_object = Obj(); var_1207_bool = 0; var_1208_int = 0; var_1209_bool = 0; var_1210_object = Obj(); var_1211_bool = 0; var_1212_int = 0; var_1213_bool = 0;
	var_0_object = var_1204_object;
	var_1214_bool = 0; var_1215_object = Obj(); var_1216_float = 0;
	var_1204_object = var_1215_object;
	func_7525(var_1214_bool, var_1215_object, (float)70.0);
	var_1217_bool = var_1214_bool == 0; //@nz
	if(var_1217_bool != 0) {
		var_1203_int = -2;
		return 8;
	}
	CreateDialog(var_1210_object);
	var_1218_int = 0;
	func_7988(var_1218_int);
	@@var_1210_object:SetNPCName(var_1218_int);
	var_1219_int = 0;
	func_7986(var_1219_int);
	@@var_1210_object:SetNPCDescription(var_1219_int);
	var_1220_string = "";
	func_7990(var_1220_string);
	@@var_1210_object:SetPhoto(var_1220_string);
	var_1221_string = "";
	func_7992(var_1221_string);
	@@var_1210_object:SetPhoto2(var_1221_string);
	var_1222_int = 0;
	func_9610(var_1222_int);
	@@var_1210_object:SetPlayerName(var_1222_int);
	IsOverrideActive(var_1211_bool);
	var_1223_bool = var_1211_bool;
	if(var_1223_bool != 0) {
		var_1203_int = -2;
		return 8;
	}
	DoDialog(var_1210_object);
	var_1224_bool = 0; var_1225_object = Obj();
	func_7803(Obj());
	var_1226_object = var_1225_object;
	func_7612(var_1224_bool, var_1225_object);
	var_1227_object = Obj(); var_1228_object = Obj();
	var_1204_object = var_1227_object;
	var_1210_object = var_1228_object;
	TaskCall(21);
	func_7071(var_1229_object, var_1230_object, var_1231_string, var_1232_bool, var_1227_object, var_1228_object);
	TaskReturn();
	@@var_1210_object:IsDialogEnd(var_1213_bool);
	
Label_7053:
	var_1257_bool = var_1213_bool == 0; //@nz
	if(var_1257_bool != 0) {
		sync();
		@@var_1210_object:IsDialogEnd(var_1213_bool);
		goto Label_7053;
	}
	var_1204_object = Obj();
	func_7594();
	StopDialog(var_1210_object);
	@@var_1210_object:GetReturnValue((int)-1);
	var_1212_int = var_1203_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8019()
{
	var_157_object = Obj(); var_158_object = Obj();
	SetVariable("k1q01", (int)4);
	func_9560(Obj());
	var_161_object = var_158_object;
	var_166_float = 0;
	func_7942(var_166_float);
	@@var_158_object:AddMark("k1q01AlexandrGotoStation", "pt_k1q01_doberman", (int)1, (int)524729, var_166_float);
	func_9151();
	var_175_bool = 0; var_176_string = ""; var_177_string = "";
	func_7918(var_175_bool, "quest_k1_01", "init_alexandr");
	return 2;
}
EMIT "Stack[-1] = 0";


func_8534()
{
	SetVariable("k2AlexandrVisit", (int)1);
	return 0;
}


func_7511(var_60_bool, var_61_object)
{
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
	@@var_61_object:GetPosition(var_63_cvector);
	var_64_bool = 0; var_65_cvector = CVector(0,0,0);
	var_63_cvector = var_65_cvector;
	func_7501(var_64_bool, var_65_cvector);
	var_64_bool = var_60_bool;
	return 2;
}


func_9560(var_68_object)
{
	var_69_object = Obj(); var_70_object = Obj(); var_71_object = Obj(); var_72_object = Obj();
	GetMainOutdoorScene(var_71_object);
	var_73_bool = var_71_object == 0; //@ne
	if(var_73_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_72_object = 0;
		var_72_object = var_68_object;
		return 4;
	}
	@@var_71_object:GetMap(var_72_object);
	var_72_object = var_68_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_9047()
{
	var_142_object = Obj(); var_143_object = Obj();
	CreateDiaryEntry(var_143_object, (int)498, (int)1, (int)528065);
	var_147_bool = 0; var_148_object = Obj(); var_149_int = 0;
	var_143_object = var_148_object;
	func_9515(var_147_bool, var_148_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4443(var_0_object, var_786_int, var_787_object)
{
	var_789_object = Obj(); var_790_bool = 0; var_791_int = 0; var_792_bool = 0; var_793_object = Obj(); var_794_bool = 0; var_795_int = 0; var_796_bool = 0;
	var_0_object = var_787_object;
	var_797_bool = 0; var_798_object = Obj(); var_799_float = 0;
	var_787_object = var_798_object;
	func_7525(var_797_bool, var_798_object, (float)70.0);
	var_800_bool = var_797_bool == 0; //@nz
	if(var_800_bool != 0) {
		var_786_int = -2;
		return 8;
	}
	CreateDialog(var_793_object);
	var_801_int = 0;
	func_7988(var_801_int);
	@@var_793_object:SetNPCName(var_801_int);
	var_802_int = 0;
	func_7986(var_802_int);
	@@var_793_object:SetNPCDescription(var_802_int);
	var_803_string = "";
	func_7990(var_803_string);
	@@var_793_object:SetPhoto(var_803_string);
	var_804_string = "";
	func_7992(var_804_string);
	@@var_793_object:SetPhoto2(var_804_string);
	var_805_int = 0;
	func_9610(var_805_int);
	@@var_793_object:SetPlayerName(var_805_int);
	IsOverrideActive(var_794_bool);
	var_806_bool = var_794_bool;
	if(var_806_bool != 0) {
		var_786_int = -2;
		return 8;
	}
	DoDialog(var_793_object);
	var_807_bool = 0; var_808_object = Obj();
	func_7803(Obj());
	var_809_object = var_808_object;
	func_7612(var_807_bool, var_808_object);
	var_810_object = Obj(); var_811_object = Obj();
	var_787_object = var_810_object;
	var_793_object = var_811_object;
	TaskCall(11);
	func_4524(var_812_object, var_813_object, var_814_string, var_815_bool, var_810_object, var_811_object);
	TaskReturn();
	@@var_793_object:IsDialogEnd(var_796_bool);
	
Label_4506:
	var_883_bool = var_796_bool == 0; //@nz
	if(var_883_bool != 0) {
		sync();
		@@var_793_object:IsDialogEnd(var_796_bool);
		goto Label_4506;
	}
	var_787_object = Obj();
	func_7594();
	StopDialog(var_793_object);
	@@var_793_object:GetReturnValue((int)-1);
	var_795_int = var_786_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8540(var_270_object)
{
	@@var_270_object:SetReturnValue((int)2);
	return 0;
}


func_1372(var_0_object, var_1_object, var_2_object, var_3_string, var_472_object, var_473_object)
{
	var_0_object = var_473_object;
	var_1_object = var_472_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_479_bool = 0; var_480_object = Obj();
		var_480_object = var_1_object;
		func_8747(var_480_object);
		if(var_479_bool != 0) {
			var_485_object = Obj(); var_486_object = Obj();
			var_485_object = var_1_object;
			var_486_object = var_0_object;
			func_8142();
			var_489_object = Obj(); var_490_object = Obj();
			var_489_object = var_1_object;
			var_490_object = var_0_object;
			func_8534();
			var_493_string = "";
			func_1490(var_473_object, "Shock");
			@@@var_0_object:SetMessage((int)525226);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529130, (int)30577, (int)30576);
			@@@var_0_object:AddReply((int)539466, (int)30579, (int)41389);
			@@@var_0_object:AddReply((int)542127, (int)30579, (int)44434);
		} else {
				var_519_string = "";
				func_1490(var_473_object, "Neutral");
				@@@var_0_object:SetMessage((int)525231);
				@@@var_0_object:ClearReplies();
				var_521_bool = 0; var_522_object = Obj();
				var_522_object = var_1_object;
				func_8735(var_522_object);
				if(var_521_bool != 0) {
					@@@var_0_object:AddReply((int)525232, (int)44437, (int)26600);
				}
				var_530_bool = 0; var_531_object = Obj();
				var_531_object = var_1_object;
				func_8759(var_531_object);
				if(var_530_bool != 0) {
					@@@var_0_object:AddReply((int)525274, (int)26643, (int)26642);
				}
				@@@var_0_object:AddReply((int)525235, (int)-1, (int)26603);
				@@@var_0_object:AddReply((int)529138, (int)-1, (int)30584);
				goto Label_1460;
		}
	}
Label_1460:
	var_511_bool = 0;
	func_7994(var_511_bool);
	if(var_511_bool != 0) {

	Label_1464:
		lshWaitForAnimEnd();
		var_512_string = var_3_string;
		if(var_512_string != 0) {
		} else {
			var_513_string = "";
			var_513_string = var_2_object;
			func_7750(var_513_string);
			goto Label_1464;
	}
		PlayAnimation("all", "idle");

	Label_1479:
		WaitForAnimEnd();
		var_516_string = var_3_string;
		if(var_516_string != 0) {
			goto Label_1489;
		}
		PlayAnimation("all", "idle");
		goto Label_1479;

	}
	goto Label_1489;
	
Label_1489:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x560";


func_7520(var_57_bool)
{
	var_58_bool = 0; var_59_bool = 0;
	IsLoaded(var_59_bool);
	var_59_bool = var_57_bool;
	return 2;
}


func_8545()
{
	SetVariable("k3AlexandrVisit", (int)1);
	return 0;
}


func_9060()
{
	var_132_object = Obj(); var_133_object = Obj();
	CreateDiaryEntry(var_133_object, (int)497, (int)1, (int)528064);
	var_137_bool = 0; var_138_object = Obj(); var_139_int = 0;
	var_133_object = var_138_object;
	func_9515(var_137_bool, var_138_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7525(var_88_bool, var_89_object, var_90_float)
{
	var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_bool = 0; var_99_bool = 0; var_100_float = 0; var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_bool = 0; var_108_bool = 0;
	@@var_89_object:GetPosition(var_101_cvector);
	@@var_89_object:GetEyesHeight(var_100_float);
	var_109_float = GetByIndex(var_101_cvector, 1);
	var_109_float = var_109_float + var_100_float;
	SetByIndex(var_101_cvector, 1) = var_109_float;
	GetPosition(var_102_cvector);
	GetEyesHeight(var_100_float);
	var_110_float = GetByIndex(var_102_cvector, 1);
	var_110_float = var_110_float + var_100_float;
	SetByIndex(var_102_cvector, 1) = var_110_float;
	var_103_cvector = var_101_cvector - var_102_cvector;
	var_111_float = GetByIndex(var_103_cvector, 1);
	SetByIndex(var_103_cvector, 1) = (float)0;
	var_112_int = var_103_cvector | var_103_cvector;
	var_113_float = sqrt(var_112_int);
	var_103_cvector = var_103_cvector / var_113_float;
	var_104_cvector = -var_103_cvector;
	var_114_float = var_103_cvector * var_90_float;
	var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0);
	var_116_cvector = var_104_cvector ^ CVector(0.0, 1.0, 0.0);
	func_7809(var_115_cvector, var_116_cvector);
	var_124_float = var_115_cvector * (int)25;
	var_125_int = var_114_float + var_124_float;
	var_105_cvector = var_125_int - CVector(0.0, 10.0, 0.0);
	var_106_cvector = var_102_cvector + var_105_cvector;
	IsOverrideActive(var_107_bool);
	var_127_bool = var_107_bool;
	if(var_127_bool != 0) {
		var_88_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_106_cvector, var_104_cvector, (bool)1);
	var_129_float = GetByIndex(var_105_cvector, 0);
	var_130_float = GetByIndex(var_105_cvector, 2);
	Rotate(var_129_float, var_130_float);
	var_131_bool = 0;
	func_7994(var_131_bool);
	if(var_131_bool != 0) {
	} else {
		HasAnimationTrack(var_108_bool, "head");
		var_133_bool = var_108_bool;
		if(var_133_bool == 0) goto Label_7588;
		LookAsyncCamera("head");
	}
Label_7588:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_88_bool = 1;
	return 18;
	
}


func_2918(var_2_object, var_251_string)
{
	var_252_bool = 0;
	func_7994(var_252_bool);
	var_253_bool = var_252_bool == 0; //@nz
	if(var_253_bool != 0) {
		return 0;
	}
	var_254_bool = var_251_string == var_2_object;
	if(var_254_bool != 0) {
		return 0;
	}
	var_255_string = ""; var_256_bool = 0;
	var_251_string = var_255_string;
	var_258_bool = var_251_string == "";
	if(var_258_bool != 0) {
		var_256_bool = 0;
	} else {
		var_256_bool = 1;
	}
	func_7766(var_255_string, var_256_bool);
	var_2_object = var_251_string;
	return 0;
	
}


func_8551()
{
	SetVariable("k4AlexandrVisit", (int)1);
	return 0;
}


func_9577(var_115_object, var_116_string, var_117_float)
{
	var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_object = Obj(); var_122_bool = 0; var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_object = Obj(); var_126_bool = 0;
	GetMainOutdoorScene(var_125_object);
	var_127_bool = var_125_object == 0; //@ne
	if(var_127_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_125_object:GetLocator(var_116_string, var_126_bool, var_123_cvector, var_124_cvector);
	var_129_bool = var_126_bool == 0; //@nz
	if(var_129_bool != 0) {
		var_131_int = "Warning: outdoor scene locator " + var_116_string;
		var_133_int = var_131_int + " doesnt exist";
		Trace(var_133_int);
	}
	@@var_125_object:GetMap(var_115_object);
	var_134_bool = var_115_object == 0; //@ne
	if(var_134_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_136_float = GetByIndex(var_123_cvector, 0);
	var_137_float = GetByIndex(var_123_cvector, 2);
	@@var_115_object:SetMapParams(var_136_float, var_137_float, var_117_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_8557()
{
	SetVariable("k5AlexandrVisit", (int)1);
	return 0;
}


func_8047()
{
	func_9138();
	var_200_bool = 0; var_201_string = ""; var_202_string = "";
	func_7918(var_200_bool, "quest_k1_01", "completed");
	return 0;
}


func_9073()
{
	var_122_object = Obj(); var_123_object = Obj();
	CreateDiaryEntry(var_123_object, (int)496, (int)1, (int)528063);
	var_127_bool = 0; var_128_object = Obj(); var_129_int = 0;
	var_123_object = var_128_object;
	func_9515(var_127_bool, var_128_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8563()
{
	SetVariable("k6AlexandrVisit", (int)1);
	return 0;
}


func_8569()
{
	var_205_int = 0; var_206_string = "";
	func_7830(var_205_int, "K_Mission2");
	var_210_bool = var_205_int == (int)0;
	if(var_210_bool != 0) {
		SetVariable("K_Mission2", (int)1);
		func_9034();
		var_221_bool = 0; var_222_int = 0;
		func_9543(var_221_bool, (int)567);
	}
	return 0;
}


func_8057(var_106_object)
{
	var_107_object = Obj(); var_108_string = ""; var_109_float = 0;
	func_9560(Obj());
	var_110_object = var_107_object;
	func_9577(var_107_object, "pt_map_katerina", (float)2);
	var_130_object = Obj();
	func_9560(var_130_object);
	@@var_106_object:ShowMap(var_130_object);
	return 0;
}


func_9086()
{
	var_112_object = Obj(); var_113_object = Obj();
	CreateDiaryEntry(var_113_object, (int)495, (int)1, (int)528062);
	var_117_bool = 0; var_118_object = Obj(); var_119_int = 0;
	var_113_object = var_118_object;
	func_9515(var_117_bool, var_118_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8073(var_182_object)
{
	var_183_object = Obj(); var_184_string = ""; var_185_float = 0;
	func_9560(Obj());
	var_186_object = var_183_object;
	func_9577(var_183_object, "pt_k1q01_doberman", (float)2);
	var_187_object = Obj();
	func_9560(var_187_object);
	@@var_182_object:ShowMap(var_187_object);
	return 0;
}


func_9610(var_140_int)
{
	var_141_int = 0; var_142_int = 0;
	GetVariable("branch", var_142_int);
	var_145_bool = var_142_int == (int)0;
	if(var_145_bool != 0) {
		var_140_int = 1;
		return 2;
	EMIT "GOTO 0x2599";
	}
	var_147_bool = var_142_int == (int)1;
	if(var_147_bool != 0) {
		var_140_int = 2;
		return 2;
	}
	var_140_int = 3;
	return 2;
}


func_9099()
{
	var_102_object = Obj(); var_103_object = Obj();
	CreateDiaryEntry(var_103_object, (int)494, (int)1, (int)528061);
	var_107_bool = 0; var_108_object = Obj(); var_109_int = 0;
	var_103_object = var_108_object;
	func_9515(var_107_bool, var_108_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8589(var_114_object)
{
	var_115_object = Obj(); var_116_string = ""; var_117_float = 0;
	func_9560(Obj());
	var_118_object = var_115_object;
	func_9577(var_115_object, "pt_map_anna", (float)2);
	var_138_object = Obj();
	func_9560(var_138_object);
	@@var_114_object:ShowMap(var_138_object);
	return 0;
}


func_9112()
{
	var_77_object = Obj(); var_78_object = Obj();
	CreateDiaryEntry(var_78_object, (int)493, (int)1, (int)528060);
	var_82_bool = 0; var_83_object = Obj(); var_84_int = 0;
	var_78_object = var_83_object;
	func_9515(var_82_bool, var_83_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8089()
{
	SetVariable("k1q02", (int)1);
	func_9164();
	func_9177();
	return 0;
}


func_9627(var_74_object, var_309_object)
{
	var_75_bool = GlobalVars[1];
	var_76_bool = var_75_bool == 0; //@nz
	if(var_76_bool != 0) {
		var_77_int = 0; var_78_object = Obj();
		var_74_object = var_78_object;
		TaskCall(6);
		func_2779(var_79_object, var_77_int, var_78_object);
		TaskReturn();
		var_302_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_303_bool = 0; var_304_int = 0;
	func_7956(var_303_bool, (int)1);
	if(var_303_bool != 0) {

	Label_9645:
		var_307_int = 0; var_308_object = Obj();
		var_74_object = var_308_object;
		TaskCall(0);
		func_0(var_309_object, var_307_int, var_308_object);
		TaskReturn();
		var_445_bool = (int)2 == var_309_object;
		if(var_445_bool != 0) {
			sync();
			goto Label_9645;
		}
		return 0;
	}
	var_446_bool = 0; var_447_int = 0;
	func_7956(var_446_bool, (int)2);
	if(var_446_bool != 0) {
		var_448_int = 0; var_449_object = Obj();
		var_74_object = var_449_object;
		TaskCall(2);
		func_1291(var_450_object, var_448_int, var_449_object);
		TaskReturn();
		return 0;
	}
	var_547_bool = 0; var_548_int = 0;
	func_7956(var_547_bool, (int)3);
	if(var_547_bool != 0) {
		var_549_int = 0; var_550_object = Obj();
		var_74_object = var_550_object;
		TaskCall(4);
		func_2109(var_551_object, var_549_int, var_550_object);
		TaskReturn();
		return 0;
	}
	var_642_bool = 0; var_643_int = 0;
	func_7956(var_642_bool, (int)4);
	if(var_642_bool != 0) {
		var_644_int = 0; var_645_object = Obj();
		var_74_object = var_645_object;
		TaskCall(8);
		func_3005(var_646_object, var_644_int, var_645_object);
		TaskReturn();
		return 0;
	}
	var_784_bool = 0; var_785_int = 0;
	func_7956(var_784_bool, (int)5);
	if(var_784_bool != 0) {
		var_786_int = 0; var_787_object = Obj();
		var_74_object = var_787_object;
		TaskCall(10);
		func_4443(var_788_object, var_786_int, var_787_object);
		TaskReturn();
		return 0;
	}
	var_885_bool = 0; var_886_int = 0;
	func_7956(var_885_bool, (int)6);
	if(var_885_bool != 0) {
		var_887_int = 0; var_888_object = Obj();
		var_74_object = var_888_object;
		TaskCall(12);
		func_5065(var_889_object, var_887_int, var_888_object);
		TaskReturn();
		return 0;
	}
	var_995_bool = 0; var_996_int = 0;
	func_7956(var_995_bool, (int)7);
	if(var_995_bool != 0) {
		var_997_int = 0; var_998_object = Obj();
		var_74_object = var_998_object;
		TaskCall(14);
		func_5633(var_999_object, var_997_int, var_998_object);
		TaskReturn();
		return 0;
	}
	var_1068_bool = 0; var_1069_int = 0;
	func_7956(var_1068_bool, (int)11);
	if(var_1068_bool != 0) {
		var_1070_int = 0; var_1071_object = Obj();
		var_74_object = var_1071_object;
		TaskCall(16);
		func_6200(var_1072_object, var_1070_int, var_1071_object);
		TaskReturn();
		return 0;
	}
	var_1142_bool = 0; var_1143_int = 0;
	func_7956(var_1142_bool, (int)12);
	if(var_1142_bool != 0) {
		var_1144_int = 0; var_1145_object = Obj();
		var_74_object = var_1145_object;
		TaskCall(18);
		func_6616(var_1146_object, var_1144_int, var_1145_object);
		TaskReturn();
		return 0;
	}
	var_1203_int = 0; var_1204_object = Obj();
	var_74_object = var_1204_object;
	TaskCall(20);
	func_6990(var_1205_object, var_1203_int, var_1204_object);
	TaskReturn();
	return 0;
}


func_8605(var_114_object)
{
	var_115_object = Obj(); var_116_string = ""; var_117_float = 0;
	func_9560(Obj());
	var_118_object = var_115_object;
	func_9577(var_115_object, "pt_map_mladvlad", (float)2);
	var_138_object = Obj();
	func_9560(var_138_object);
	@@var_114_object:ShowMap(var_138_object);
	return 0;
}


func_7071(var_0_object, var_1_object, var_2_object, var_3_string, var_1227_object, var_1228_object)
{
	var_0_object = var_1228_object;
	var_1_object = var_1227_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1234_string = "";
		func_7129(var_1228_object, "Neutral");
		@@@var_0_object:SetMessage((int)540545);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540546, (int)-1, (int)42555);
		@@@var_0_object:AddReply((int)540798, (int)-1, (int)42847);
		goto Label_7099;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1ba3";
	}
Label_7099:
	var_1249_bool = 0;
	func_7994(var_1249_bool);
	if(var_1249_bool != 0) {

	Label_7103:
		lshWaitForAnimEnd();
		var_1250_string = var_3_string;
		if(var_1250_string != 0) {
		} else {
			var_1251_string = "";
			var_1251_string = var_2_object;
			func_7750(var_1251_string);
			goto Label_7103;
	}
		PlayAnimation("all", "idle");

	Label_7118:
		WaitForAnimEnd();
		var_1254_string = var_3_string;
		if(var_1254_string != 0) {
			goto Label_7128;
		}
		PlayAnimation("all", "idle");
		goto Label_7118;
	}
	goto Label_7128;
	
Label_7128:
	return 0;
	
}


func_8101()
{
	SetVariable("ook1Alexandr1", (int)1);
	return 0;
}


func_9125()
{
	var_82_object = Obj(); var_83_object = Obj();
	CreateDiaryEntry(var_83_object, (int)320, (int)1, (int)524736);
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0;
	var_83_object = var_88_object;
	func_9515(var_87_bool, var_88_object, (int)318);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7594()
{
	var_295_bool = 0; var_296_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_298_bool = 0;
	func_7994(var_298_bool);
	if(var_298_bool != 0) {
	} else {
		HasAnimationTrack(var_296_bool, "head");
		var_300_bool = var_296_bool;
		if(var_300_bool == 0) goto Label_7611;
		UnlookAsync("head");
	}
Label_7611:
	return 2;
	
}


func_8107()
{
	SetVariable("k1q02", (int)1000);
	func_9190();
	return 0;
}


func_4524(var_0_object, var_1_object, var_2_object, var_3_string, var_810_object, var_811_object)
{
	var_0_object = var_811_object;
	var_1_object = var_810_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_817_bool = 0; var_818_object = Obj();
		var_818_object = var_1_object;
		func_8902(var_818_object);
		if(var_817_bool != 0) {
			var_823_object = Obj(); var_824_object = Obj();
			var_823_object = var_1_object;
			var_824_object = var_0_object;
			func_8363();
			var_827_object = Obj(); var_828_object = Obj();
			var_827_object = var_1_object;
			var_828_object = var_0_object;
			func_8557();
			var_831_string = "";
			func_4637(var_811_object, "Strict");
			@@@var_0_object:SetMessage((int)525830);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529038, (int)30480, (int)30479);
		} else {
				var_851_string = "";
				func_4637(var_811_object, "Neutral");
				@@@var_0_object:SetMessage((int)525835);
				@@@var_0_object:ClearReplies();
				var_853_bool = 0; var_854_object = Obj();
				var_854_object = var_1_object;
				func_8890(var_854_object);
				if(var_853_bool != 0) {
					@@@var_0_object:AddReply((int)525836, (int)27136, (int)27135);
				}
				var_862_bool = 0; var_863_object = Obj();
				var_863_object = var_1_object;
				func_8914(var_863_object);
				if(var_862_bool != 0) {
					@@@var_0_object:AddReply((int)525880, (int)30489, (int)27179);
				}
				var_871_bool = 0; var_872_object = Obj();
				var_872_object = var_1_object;
				func_8926(var_872_object);
				if(var_871_bool != 0) {
					@@@var_0_object:AddReply((int)525913, (int)30495, (int)27205);
				}
				@@@var_0_object:AddReply((int)525839, (int)-1, (int)27138);
				goto Label_4607;
		}
	}
Label_4607:
	var_843_bool = 0;
	func_7994(var_843_bool);
	if(var_843_bool != 0) {

	Label_4611:
		lshWaitForAnimEnd();
		var_844_string = var_3_string;
		if(var_844_string != 0) {
		} else {
			var_845_string = "";
			var_845_string = var_2_object;
			func_7750(var_845_string);
			goto Label_4611;
	}
		PlayAnimation("all", "idle");

	Label_4626:
		WaitForAnimEnd();
		var_848_string = var_3_string;
		if(var_848_string != 0) {
			goto Label_4636;
		}
		PlayAnimation("all", "idle");
		goto Label_4626;

	}
	goto Label_4636;
	
Label_4636:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x11b0";


func_8621(var_118_object)
{
	var_119_object = Obj(); var_120_string = ""; var_121_float = 0;
	func_9560(Obj());
	var_122_object = var_119_object;
	func_9577(var_119_object, "pt_map_grif", (float)2);
	var_142_object = Obj();
	func_9560(var_142_object);
	@@var_118_object:ShowMap(var_142_object);
	return 0;
}


func_9138()
{
	var_192_object = Obj(); var_193_object = Obj();
	CreateDiaryEntry(var_193_object, (int)324, (int)1, (int)524740);
	var_197_bool = 0; var_198_object = Obj(); var_199_int = 0;
	var_193_object = var_198_object;
	func_9515(var_197_bool, var_198_object, (int)318);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8116()
{
	var_64_object = Obj(); var_65_object = Obj();
	SetVariable("k2q01", (int)1);
	func_9560(Obj());
	var_68_object = var_65_object;
	var_79_float = 0;
	func_7942(var_79_float);
	@@var_65_object:AddMark("k2q01AlexandrGotoMladVlad", "pt_map_mladvlad", (int)1, (int)508648, var_79_float);
	func_9203();
	func_9216();
	return 2;
}
EMIT "Stack[-1] = 0";


func_7612(var_149_bool, var_150_object)
{
	var_154_int = 0; var_155_int = 0; var_156_int = 0; var_157_int = 0;
	GetVariable("voice_common", var_156_int);
	var_159_int = var_156_int;
	if(var_159_int != 0) {
		var_160_bool = 0; var_161_object = Obj();
		var_150_object = var_161_object;
		func_7670(var_160_bool, var_161_object);
		var_190_bool = var_160_bool == 0; //@nz
		if(var_190_bool != 0) {
			var_191_bool = 0; var_192_object = Obj();
			var_150_object = var_192_object;
			func_7707(var_191_bool, var_192_object);
			var_226_bool = var_191_bool == 0; //@nz
			if(var_226_bool != 0) {
				var_149_bool = 0;
				return 4;
			}
		}
		irand(var_157_int, (int)2);
		var_228_int = var_157_int;
		if(var_228_int != 0) {
			var_231_int = var_156_int + (int)1;
			var_233_int = var_231_int % (int)3;
			SetVariable("voice_common", var_233_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_236_bool = 0; var_237_object = Obj();
		var_150_object = var_237_object;
		func_7707(var_236_bool, var_237_object);
		var_238_bool = var_236_bool == 0; //@nz
		if(var_238_bool != 0) {
			var_239_bool = 0; var_240_object = Obj();
			var_150_object = var_240_object;
			func_7670(var_239_bool, var_240_object);
			var_241_bool = var_239_bool == 0; //@nz
			if(var_241_bool != 0) {
				var_149_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_7668;
	
Label_7668:
	var_149_bool = 1;
	return 4;
	
}


func_8637(var_159_object)
{
	var_161_bool = 0; var_162_object = Obj(); var_163_float = 0;
	var_159_object = var_162_object;
	func_7873(var_161_bool, var_162_object, (float)0.10000000149011612);
	return 0;
}


func_3005(var_0_object, var_644_int, var_645_object)
{
	var_647_object = Obj(); var_648_bool = 0; var_649_int = 0; var_650_bool = 0; var_651_object = Obj(); var_652_bool = 0; var_653_int = 0; var_654_bool = 0;
	var_0_object = var_645_object;
	var_655_bool = 0; var_656_object = Obj(); var_657_float = 0;
	var_645_object = var_656_object;
	func_7525(var_655_bool, var_656_object, (float)70.0);
	var_658_bool = var_655_bool == 0; //@nz
	if(var_658_bool != 0) {
		var_644_int = -2;
		return 8;
	}
	CreateDialog(var_651_object);
	var_659_int = 0;
	func_7988(var_659_int);
	@@var_651_object:SetNPCName(var_659_int);
	var_660_int = 0;
	func_7986(var_660_int);
	@@var_651_object:SetNPCDescription(var_660_int);
	var_661_string = "";
	func_7990(var_661_string);
	@@var_651_object:SetPhoto(var_661_string);
	var_662_string = "";
	func_7992(var_662_string);
	@@var_651_object:SetPhoto2(var_662_string);
	var_663_int = 0;
	func_9610(var_663_int);
	@@var_651_object:SetPlayerName(var_663_int);
	IsOverrideActive(var_652_bool);
	var_664_bool = var_652_bool;
	if(var_664_bool != 0) {
		var_644_int = -2;
		return 8;
	}
	DoDialog(var_651_object);
	var_665_bool = 0; var_666_object = Obj();
	func_7803(Obj());
	var_667_object = var_666_object;
	func_7612(var_665_bool, var_666_object);
	var_668_object = Obj(); var_669_object = Obj();
	var_645_object = var_668_object;
	var_651_object = var_669_object;
	TaskCall(9);
	func_3086(var_670_object, var_671_object, var_672_string, var_673_bool, var_668_object, var_669_object);
	TaskReturn();
	@@var_651_object:IsDialogEnd(var_654_bool);
	
Label_3068:
	var_782_bool = var_654_bool == 0; //@nz
	if(var_782_bool != 0) {
		sync();
		@@var_651_object:IsDialogEnd(var_654_bool);
		goto Label_3068;
	}
	var_645_object = Obj();
	func_7594();
	StopDialog(var_651_object);
	@@var_651_object:GetReturnValue((int)-1);
	var_653_int = var_644_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_9151()
{
	var_167_object = Obj(); var_168_object = Obj();
	CreateDiaryEntry(var_168_object, (int)322, (int)1, (int)524738);
	var_172_bool = 0; var_173_object = Obj(); var_174_int = 0;
	var_168_object = var_173_object;
	func_9515(var_172_bool, var_173_object, (int)318);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8644(var_245_object)
{
	var_247_bool = 0; var_248_object = Obj(); var_249_float = 0;
	var_245_object = var_248_object;
	func_7873(var_247_bool, var_248_object, (float)-0.10000000149011612);
	return 0;
}


func_5065(var_0_object, var_887_int, var_888_object)
{
	var_890_object = Obj(); var_891_bool = 0; var_892_int = 0; var_893_bool = 0; var_894_object = Obj(); var_895_bool = 0; var_896_int = 0; var_897_bool = 0;
	var_0_object = var_888_object;
	var_898_bool = 0; var_899_object = Obj(); var_900_float = 0;
	var_888_object = var_899_object;
	func_7525(var_898_bool, var_899_object, (float)70.0);
	var_901_bool = var_898_bool == 0; //@nz
	if(var_901_bool != 0) {
		var_887_int = -2;
		return 8;
	}
	CreateDialog(var_894_object);
	var_902_int = 0;
	func_7988(var_902_int);
	@@var_894_object:SetNPCName(var_902_int);
	var_903_int = 0;
	func_7986(var_903_int);
	@@var_894_object:SetNPCDescription(var_903_int);
	var_904_string = "";
	func_7990(var_904_string);
	@@var_894_object:SetPhoto(var_904_string);
	var_905_string = "";
	func_7992(var_905_string);
	@@var_894_object:SetPhoto2(var_905_string);
	var_906_int = 0;
	func_9610(var_906_int);
	@@var_894_object:SetPlayerName(var_906_int);
	IsOverrideActive(var_895_bool);
	var_907_bool = var_895_bool;
	if(var_907_bool != 0) {
		var_887_int = -2;
		return 8;
	}
	DoDialog(var_894_object);
	var_908_bool = 0; var_909_object = Obj();
	func_7803(Obj());
	var_910_object = var_909_object;
	func_7612(var_908_bool, var_909_object);
	var_911_object = Obj(); var_912_object = Obj();
	var_888_object = var_911_object;
	var_894_object = var_912_object;
	TaskCall(13);
	func_5146(var_913_object, var_914_object, var_915_string, var_916_bool, var_911_object, var_912_object);
	TaskReturn();
	@@var_894_object:IsDialogEnd(var_897_bool);
	
Label_5128:
	var_993_bool = var_897_bool == 0; //@nz
	if(var_993_bool != 0) {
		sync();
		@@var_894_object:IsDialogEnd(var_897_bool);
		goto Label_5128;
	}
	var_888_object = Obj();
	func_7594();
	StopDialog(var_894_object);
	@@var_894_object:GetReturnValue((int)-1);
	var_896_int = var_887_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8651(var_338_bool)
{
	var_340_int = 0; var_341_string = "";
	func_7830(var_340_int, "k1q01");
	var_345_bool = var_340_int == (int)1;
	if(var_345_bool != 0) {
		var_338_bool = 1;
		return 0;
	}
	var_338_bool = 0;
	return 0;
}


func_9164()
{
	var_137_object = Obj(); var_138_object = Obj();
	CreateDiaryEntry(var_138_object, (int)326, (int)2, (int)524771);
	var_142_bool = 0; var_143_object = Obj(); var_144_int = 0;
	var_138_object = var_143_object;
	func_9515(var_142_bool, var_143_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8142()
{
	SetVariable("ook2Alexandr1", (int)1);
	return 0;
}


func_1490(var_2_object, var_493_string)
{
	var_494_bool = 0;
	func_7994(var_494_bool);
	var_495_bool = var_494_bool == 0; //@nz
	if(var_495_bool != 0) {
		return 0;
	}
	var_496_bool = var_493_string == var_2_object;
	if(var_496_bool != 0) {
		return 0;
	}
	var_497_string = ""; var_498_bool = 0;
	var_493_string = var_497_string;
	var_500_bool = var_493_string == "";
	if(var_500_bool != 0) {
		var_498_bool = 0;
	} else {
		var_498_bool = 1;
	}
	func_7766(var_497_string, var_498_bool);
	var_2_object = var_493_string;
	return 0;
	
}


func_8148()
{
	SetVariable("k2q01", (int)1000);
	func_9229();
	var_159_bool = 0; var_160_string = ""; var_161_string = ""; var_162_string = "";
	func_7930(var_159_bool, "volonteers_klara", "disease", "ospina");
	return 0;
}


func_8663(var_393_bool)
{
	var_395_int = 0; var_396_string = "";
	func_7830(var_395_int, "k1q01");
	var_398_bool = var_395_int == (int)3;
	if(var_398_bool != 0) {
		var_393_bool = 1;
		return 0;
	}
	var_393_bool = 0;
	return 0;
}


func_6616(var_0_object, var_1144_int, var_1145_object)
{
	var_1147_object = Obj(); var_1148_bool = 0; var_1149_int = 0; var_1150_bool = 0; var_1151_object = Obj(); var_1152_bool = 0; var_1153_int = 0; var_1154_bool = 0;
	var_0_object = var_1145_object;
	var_1155_bool = 0; var_1156_object = Obj(); var_1157_float = 0;
	var_1145_object = var_1156_object;
	func_7525(var_1155_bool, var_1156_object, (float)70.0);
	var_1158_bool = var_1155_bool == 0; //@nz
	if(var_1158_bool != 0) {
		var_1144_int = -2;
		return 8;
	}
	CreateDialog(var_1151_object);
	var_1159_int = 0;
	func_7988(var_1159_int);
	@@var_1151_object:SetNPCName(var_1159_int);
	var_1160_int = 0;
	func_7986(var_1160_int);
	@@var_1151_object:SetNPCDescription(var_1160_int);
	var_1161_string = "";
	func_7990(var_1161_string);
	@@var_1151_object:SetPhoto(var_1161_string);
	var_1162_string = "";
	func_7992(var_1162_string);
	@@var_1151_object:SetPhoto2(var_1162_string);
	var_1163_int = 0;
	func_9610(var_1163_int);
	@@var_1151_object:SetPlayerName(var_1163_int);
	IsOverrideActive(var_1152_bool);
	var_1164_bool = var_1152_bool;
	if(var_1164_bool != 0) {
		var_1144_int = -2;
		return 8;
	}
	DoDialog(var_1151_object);
	var_1165_bool = 0; var_1166_object = Obj();
	func_7803(Obj());
	var_1167_object = var_1166_object;
	func_7612(var_1165_bool, var_1166_object);
	var_1168_object = Obj(); var_1169_object = Obj();
	var_1145_object = var_1168_object;
	var_1151_object = var_1169_object;
	TaskCall(19);
	func_6697(var_1170_object, var_1171_object, var_1172_string, var_1173_bool, var_1168_object, var_1169_object);
	TaskReturn();
	@@var_1151_object:IsDialogEnd(var_1154_bool);
	
Label_6679:
	var_1201_bool = var_1154_bool == 0; //@nz
	if(var_1201_bool != 0) {
		sync();
		@@var_1151_object:IsDialogEnd(var_1154_bool);
		goto Label_6679;
	}
	var_1145_object = Obj();
	func_7594();
	StopDialog(var_1151_object);
	@@var_1151_object:GetReturnValue((int)-1);
	var_1153_int = var_1144_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7129(var_2_object, var_1234_string)
{
	var_1235_bool = 0;
	func_7994(var_1235_bool);
	var_1236_bool = var_1235_bool == 0; //@nz
	if(var_1236_bool != 0) {
		return 0;
	}
	var_1237_bool = var_1234_string == var_2_object;
	if(var_1237_bool != 0) {
		return 0;
	}
	var_1238_string = ""; var_1239_bool = 0;
	var_1234_string = var_1238_string;
	var_1241_bool = var_1234_string == "";
	if(var_1241_bool != 0) {
		var_1239_bool = 0;
	} else {
		var_1239_bool = 1;
	}
	func_7766(var_1238_string, var_1239_bool);
	var_2_object = var_1234_string;
	return 0;
	
}


func_9177()
{
	var_145_object = Obj(); var_146_object = Obj();
	CreateDiaryEntry(var_146_object, (int)327, (int)2, (int)524772);
	var_150_bool = 0; var_151_object = Obj(); var_152_int = 0;
	var_146_object = var_151_object;
	func_9515(var_150_bool, var_151_object, (int)326);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8675(var_403_bool)
{
	var_405_int = 0; var_406_string = "";
	func_7830(var_405_int, "k1q01Healed");
	var_408_bool = var_405_int != (int)0;
	if(var_408_bool != 0) {
		var_403_bool = 1;
		return 0;
	}
	var_403_bool = 0;
	return 0;
}


func_8163()
{
	SetVariable("k2q01", (int)1000);
	func_9242();
	return 0;
}


func_9190()
{
	var_282_object = Obj(); var_283_object = Obj();
	CreateDiaryEntry(var_283_object, (int)332, (int)2, (int)524777);
	var_287_bool = 0; var_288_object = Obj(); var_289_int = 0;
	var_283_object = var_288_object;
	func_9515(var_287_bool, var_288_object, (int)326);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8172()
{
	var_64_object = Obj(); var_65_object = Obj();
	SetVariable("k3q01", (int)1);
	func_9560(Obj());
	var_68_object = var_65_object;
	var_79_float = 0;
	func_7942(var_79_float);
	@@var_65_object:AddMark("k3q01AlexandrGotoAnna", "pt_map_anna", (int)1, (int)525453, var_79_float);
	func_9255();
	func_9268();
	return 2;
}
EMIT "Stack[-1] = 0";


func_8687(var_367_bool)
{
	var_369_int = 0; var_370_string = "";
	func_7830(var_369_int, "k1q01");
	var_372_bool = var_369_int == (int)1000;
	if(var_372_bool != 0) {
		var_367_bool = 1;
		return 0;
	}
	var_367_bool = 0;
	return 0;
}


func_9203()
{
	var_82_object = Obj(); var_83_object = Obj();
	CreateDiaryEntry(var_83_object, (int)461, (int)1, (int)527777);
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0;
	var_83_object = var_88_object;
	func_9515(var_87_bool, var_88_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7670(var_160_bool, var_161_object)
{
	var_162_string = ""; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_string = ""; var_167_string = ""; var_168_int = 0; var_169_bool = 0; var_170_int = 0; var_171_string = "";
	var_167_string = "c";
	var_168_int = 0;
	
Label_7673:
	if((int)1 != 0) {
		var_174_int = var_168_int + (int)1;
		var_175_int = var_167_string + var_174_int;
		@@var_161_object:HasProperty(var_175_int, var_169_bool);
		var_176_bool = var_169_bool == 0; //@nz
		if(var_176_bool != 0) {
		} else {
			var_168_int = var_168_int + (int)1;
			goto Label_7673;
		}
	}
	var_177_bool = var_168_int == 0; //@nz
	if(var_177_bool != 0) {
		var_160_bool = 0;
		return 10;
	}
	var_170_int = 0;
	var_179_bool = var_168_int > (int)1;
	if(var_179_bool != 0) {
		irand(var_170_int, var_168_int);
	}
	var_181_int = var_170_int + (int)1;
	var_182_int = var_167_string + var_181_int;
	@@var_161_object:GetProperty(var_182_int, var_171_string);
	var_183_bool = 0; var_184_string = "";
	var_171_string = var_184_string;
	func_7781(var_183_bool, var_184_string);
	var_183_bool = var_160_bool;
	return 10;
	
}


func_8699(var_416_bool)
{
	var_418_int = 0; var_419_string = "";
	func_7830(var_418_int, "k1q02");
	var_421_bool = var_418_int == (int)0;
	if(var_421_bool != 0) {
		var_416_bool = 1;
		return 0;
	}
	var_416_bool = 0;
	return 0;
}


