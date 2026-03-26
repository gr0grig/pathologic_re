// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,self/1,GetVariable/2,GetInvItemProperty/3,CreateInvItem/1,FindActor/2,Trigger/2,TriggerWorld/2,SetVariable/2,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1,CreateDiaryEntry/4
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:klara blood is given|W:d6q01_klara_blood|W:playsound|W:giveitem|W:ood6Klara1|W:ood6Klara2|W:d6q01KlaraVolonteer|W:d6q01AlexandrGotoJulia|A:FindMark|A:Remove|W:d6q01AlexandrGotoKaterina|W:d6q01AlexandrGotoLara|W:d6q01AlexangrGotoJulLaraSelf|W:d6q01BigVladGotoAnna|W:d6q01BigVladGotoAnnaOspinaSelf|W:d6q01BigVladGotoOspina|W:d6q01KaterinaGotoLaska|W:d6q01KaterinagotoLaskaSelf|W:d6q01KillerIsKlara|W:d6q01LaskaGotoAlbinos|W:d6q01ViktorGotoAlexandr|W:d6q01ViktorGotoAlxBigSelf|W:d6q01ViktorGotoBigVlad|W:quest_d6_01|W:completed|W:ood6Klara3|W:d6q01|W:microscope_d6q01_klara_blood|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:player|W:Adding diary entry|W:ui/NPC_Klara.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x482
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x101 vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x47a vars=object
// @EVENT_26: op=0x486 vars=string
// @EVENT_6: op=0x4a2 vars=
// @PE: 0x3f,0xf1,0x101,0x47a,0x4ec,0x544,0x552,0x558,0x55e,0x5f3,0x5f9,0x605,0x611,0x61d,0x629,0x635,0x641,0x64d,0x659,0x665

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_1282();
		var_11_bool = var_7_bool == (int)13943;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_1374();
		}
		var_17_bool = var_7_bool == (int)3807;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_1348(var_19_object);
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_1362();
		}
		var_67_bool = var_7_bool == (int)3812;
		if(var_67_bool != 0) {
			var_68_object = Obj(); var_69_object = Obj();
			var_68_object = var_1_object;
			var_69_object = var_0_object;
			func_1348(var_69_object);
			var_70_object = Obj(); var_71_object = Obj();
			var_70_object = var_1_object;
			var_71_object = var_0_object;
			func_1362();
		}
		var_73_bool = var_7_bool == (int)13944;
		if(var_73_bool != 0) {
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_object;
			func_1523();
		}
		var_79_bool = var_7_bool == (int)11873;
		if(var_79_bool != 0) {
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_object;
			func_1380();
		}
		var_150_bool = var_6_int == (int)13931;
		if(var_150_bool != 0) {
			var_151_bool = 0;
			var_151_bool = 1;
			var_152_bool = 0;
			var_152_bool = 0;
			var_153_bool = 0; var_154_object = Obj();
			var_154_object = var_1_object;
			func_1565(var_154_object);
			if(var_153_bool != 0) {
				var_161_bool = 0; var_162_object = Obj();
				var_162_object = var_1_object;
				func_1529(var_162_object);
				if(var_161_bool != 0) {
					var_152_bool = 1;
				}
			}
			if(var_152_bool != 1) {
				var_167_bool = 0;
				var_167_bool = 0;
				var_168_bool = 0; var_169_object = Obj();
				var_169_object = var_1_object;
				func_1541(var_169_object);
				if(var_168_bool != 0) {
					var_174_bool = 0; var_175_object = Obj();
					var_175_object = var_1_object;
					func_1565(var_175_object);
					if(var_174_bool != 0) {
						var_167_bool = 1;
					}
				}
				if(var_167_bool != 1) {
					var_151_bool = 0;
				}
			}
			if(var_151_bool != 0) {
				var_176_object = Obj(); var_177_object = Obj();
				var_176_object = var_1_object;
				var_177_object = var_0_object;
				func_1368();
				var_180_string = "";
				func_241(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)12737);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)12738, (int)13933, (int)13932);
				@@@var_0_object:AddReply((int)12744, (int)13965, (int)13938);
				@@@var_0_object:AddReply((int)12745, (int)13954, (int)13939);
				return 0;
			}
			var_205_bool = 0;
			var_205_bool = 1;
			var_206_bool = 0; var_207_object = Obj();
			var_207_object = var_1_object;
			func_1577(var_207_object);
			if(var_206_bool != 1) {
				var_212_bool = 0; var_213_object = Obj();
				var_213_object = var_1_object;
				func_1553(var_213_object);
				if(var_212_bool != 1) {
					var_205_bool = 0;
				}
			}
			if(var_205_bool != 0) {
				var_218_string = "";
				func_241(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)12748);
				@@@var_0_object:ClearReplies();
				var_220_bool = 0; var_221_object = Obj();
				var_221_object = var_1_object;
				func_1589(var_221_object);
				if(var_220_bool != 0) {
					@@@var_0_object:AddReply((int)12749, (int)3753, (int)13943);
				}
				var_229_bool = 0;
				var_229_bool = 0;
				var_230_bool = 0;
				var_230_bool = 0;
				var_231_bool = 0;
				var_231_bool = 0;
				var_232_bool = 0; var_233_object = Obj();
				var_233_object = var_1_object;
				func_1637(var_233_object);
				if(var_232_bool != 0) {
					var_238_bool = 0; var_239_object = Obj();
					var_239_object = var_1_object;
					func_1601(var_239_object);
					if(var_238_bool != 0) {
						var_231_bool = 1;
					}
				}
				if(var_231_bool != 0) {
					var_244_bool = 0; var_245_object = Obj();
					var_245_object = var_1_object;
					func_1613(var_245_object);
					var_250_bool = var_244_bool == 0; //@nz
					if(var_250_bool != 0) {
						var_230_bool = 1;
					}
				}
				if(var_230_bool != 0) {
					var_251_bool = 0; var_252_object = Obj();
					var_252_object = var_1_object;
					func_1625(var_252_object);
					var_257_bool = var_251_bool == 0; //@nz
					if(var_257_bool != 0) {
						var_229_bool = 1;
					}
				}
				if(var_229_bool != 0) {
					@@@var_0_object:AddReply((int)12750, (int)11864, (int)13944);
				}
				@@@var_0_object:AddReply((int)12769, (int)-1, (int)13968);
				return 0;
			}
		}
		var_265_bool = var_6_int == (int)11864;
		if(var_265_bool != 0) {
			var_266_string = "";
			func_241(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10739);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10740, (int)11866, (int)11865);
			@@@var_0_object:AddReply((int)10752, (int)11866, (int)11879);
			return 0;
		}
		var_275_bool = var_6_int == (int)11866;
		if(var_275_bool != 0) {
			var_276_string = "";
			func_241(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10741);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10742, (int)11868, (int)11867);
			@@@var_0_object:AddReply((int)10751, (int)11870, (int)11877);
			return 0;
		}
		var_285_bool = var_6_int == (int)11868;
		if(var_285_bool != 0) {
			var_286_string = "";
			func_241(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10743);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10744, (int)11870, (int)11869);
			@@@var_0_object:AddReply((int)10749, (int)11870, (int)11874);
			@@@var_0_object:AddReply((int)10750, (int)-1, (int)11876);
			return 0;
		}
		var_298_bool = var_6_int == (int)11870;
		if(var_298_bool != 0) {
			var_299_string = "";
			func_241(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10745);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10746, (int)-1, (int)11871);
			@@@var_0_object:AddReply((int)10747, (int)-1, (int)11872);
			@@@var_0_object:AddReply((int)10748, (int)-1, (int)11873);
			return 0;
		}
		var_311_bool = var_6_int == (int)3753;
		if(var_311_bool != 0) {
			var_312_string = "";
			func_241(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3483);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3484, (int)3756, (int)3754);
			@@@var_0_object:AddReply((int)3485, (int)3778, (int)3755);
			@@@var_0_object:AddReply((int)3508, (int)3763, (int)3783);
			return 0;
		}
		var_324_bool = var_6_int == (int)3778;
		if(var_324_bool != 0) {
			var_325_string = "";
			func_241(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3505);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3506, (int)3775, (int)3779);
			@@@var_0_object:AddReply((int)3507, (int)3763, (int)3781);
			return 0;
		}
		var_334_bool = var_6_int == (int)3756;
		if(var_334_bool != 0) {
			var_335_string = "";
			func_241(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3486);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3487, (int)3775, (int)3757);
			@@@var_0_object:AddReply((int)3488, (int)3770, (int)3758);
			@@@var_0_object:AddReply((int)3489, (int)3760, (int)3759);
			@@@var_0_object:AddReply((int)3491, (int)3763, (int)3761);
			return 0;
		}
		var_350_bool = var_6_int == (int)3760;
		if(var_350_bool != 0) {
			var_351_string = "";
			func_241(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3490);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3492, (int)3763, (int)3762);
			@@@var_0_object:AddReply((int)3509, (int)3786, (int)3785);
			return 0;
		}
		var_360_bool = var_6_int == (int)3786;
		if(var_360_bool != 0) {
			var_361_string = "";
			func_241(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3510);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3511, (int)3788, (int)3787);
			@@@var_0_object:AddReply((int)3515, (int)3766, (int)3793);
			return 0;
		}
		var_370_bool = var_6_int == (int)3788;
		if(var_370_bool != 0) {
			var_371_string = "";
			func_241(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3512);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3513, (int)3775, (int)3789);
			@@@var_0_object:AddReply((int)3514, (int)3766, (int)3791);
			return 0;
		}
		var_380_bool = var_6_int == (int)3763;
		if(var_380_bool != 0) {
			var_381_string = "";
			func_241(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3493);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3494, (int)3766, (int)3764);
			@@@var_0_object:AddReply((int)3495, (int)3766, (int)3765);
			return 0;
		}
		var_390_bool = var_6_int == (int)3766;
		if(var_390_bool != 0) {
			var_391_string = "";
			func_241(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3496);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3497, (int)3771, (int)3769);
			@@@var_0_object:AddReply((int)3501, (int)3797, (int)3773);
			@@@var_0_object:AddReply((int)3502, (int)-1, (int)3774);
			return 0;
		}
		var_403_bool = var_6_int == (int)3797;
		if(var_403_bool != 0) {
			var_404_string = "";
			func_241(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3517);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3518, (int)-1, (int)3798);
			@@@var_0_object:AddReply((int)3519, (int)-1, (int)3799);
			@@@var_0_object:AddReply((int)3520, (int)3801, (int)3800);
			return 0;
		}
		var_416_bool = var_6_int == (int)3801;
		if(var_416_bool != 0) {
			var_417_string = "";
			func_241(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3521);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3522, (int)3804, (int)3802);
			@@@var_0_object:AddReply((int)3523, (int)-1, (int)3803);
			return 0;
		}
		var_426_bool = var_6_int == (int)3804;
		if(var_426_bool != 0) {
			var_427_string = "";
			func_241(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3524);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3525, (int)3770, (int)3805);
			return 0;
		}
		var_433_bool = var_6_int == (int)3771;
		if(var_433_bool != 0) {
			var_434_string = "";
			func_241(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3499);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3500, (int)3770, (int)3772);
			@@@var_0_object:AddReply((int)3516, (int)-1, (int)3796);
			return 0;
		}
		var_443_bool = var_6_int == (int)3770;
		if(var_443_bool != 0) {
			var_444_string = "";
			func_241(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3498);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3526, (int)-1, (int)3807);
			@@@var_0_object:AddReply((int)3527, (int)3809, (int)3808);
			return 0;
		}
		var_453_bool = var_6_int == (int)3809;
		if(var_453_bool != 0) {
			var_454_string = "";
			func_241(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3528);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3529, (int)3811, (int)3810);
			return 0;
		}
		var_460_bool = var_6_int == (int)3811;
		if(var_460_bool != 0) {
			var_461_string = "";
			func_241(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3530);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3531, (int)-1, (int)3812);
			@@@var_0_object:AddReply((int)3532, (int)-1, (int)3813);
			return 0;
		}
		var_470_bool = var_6_int == (int)3775;
		if(var_470_bool != 0) {
			var_471_string = "";
			func_241(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3503);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3504, (int)3770, (int)3776);
			return 0;
		}
		var_477_bool = var_6_int == (int)13965;
		if(var_477_bool != 0) {
			var_478_string = "";
			func_241(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12767);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12768, (int)13933, (int)13966);
			return 0;
		}
		var_484_bool = var_6_int == (int)13933;
		if(var_484_bool != 0) {
			var_485_string = "";
			func_241(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12739);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12740, (int)13935, (int)13934);
			@@@var_0_object:AddReply((int)12746, (int)13935, (int)13940);
			@@@var_0_object:AddReply((int)12747, (int)13935, (int)13941);
			return 0;
		}
		var_497_bool = var_6_int == (int)13935;
		if(var_497_bool != 0) {
			var_498_string = "";
			func_241(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12741);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12742, (int)13937, (int)13936);
			@@@var_0_object:AddReply((int)12751, (int)13947, (int)13945);
			@@@var_0_object:AddReply((int)12752, (int)-1, (int)13946);
			return 0;
		}
		var_510_bool = var_6_int == (int)13947;
		if(var_510_bool != 0) {
			var_511_string = "";
			func_241(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12753);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12754, (int)13949, (int)13948);
			return 0;
		}
		var_517_bool = var_6_int == (int)13949;
		if(var_517_bool != 0) {
			var_518_string = "";
			func_241(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12755);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12756, (int)-1, (int)13950);
			@@@var_0_object:AddReply((int)12757, (int)-1, (int)13951);
			return 0;
		}
		var_527_bool = var_6_int == (int)13937;
		if(var_527_bool != 0) {
			var_528_string = "";
			func_241(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12743);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12758, (int)13954, (int)13952);
			@@@var_0_object:AddReply((int)12759, (int)13954, (int)13953);
			return 0;
		}
		var_537_bool = var_6_int == (int)13954;
		if(var_537_bool != 0) {
			var_538_string = "";
			func_241(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12760);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12761, (int)13957, (int)13956);
			return 0;
		}
		var_544_bool = var_6_int == (int)13957;
		if(var_544_bool != 0) {
			var_545_string = "";
			func_241(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12762);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12763, (int)13959, (int)13958);
			return 0;
		}
		var_551_bool = var_6_int == (int)13959;
		if(var_551_bool != 0) {
			var_552_string = "";
			func_241(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12764);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12765, (int)-1, (int)13960);
			@@@var_0_object:AddReply((int)12766, (int)-1, (int)13961);
			return 0;
		}
		var_3_string = true;
		var_560_bool = 0;
		func_1762(var_560_bool);
		if(var_560_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x102";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj();
	var_6_object = var_8_object;
	TaskCall(0);
	func_0(var_9_object, var_7_int, var_8_object);
	TaskReturn();
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0;
	var_10_bool = var_6_string == "cleanup";
	if(var_10_bool != 0) {
		var_0_object = true;
		IsLoaded(var_8_bool);
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = var_8_bool == 0; //@nz
		if(var_12_bool != 0) {
			var_13_bool = 0;
			func_1202(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_1289(var_14_object);
			RemoveActor(var_14_object);
		}
	} else {
		var_18_bool = var_6_string == "restore";
		if(var_18_bool == 0) goto Label_1185;
		var_0_object = false;
	}
Label_1185:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_1202(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_1289(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_1154:
	Hold();
	goto Label_1154;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj();
	var_8_object = var_19_object;
	func_1204(var_18_bool, var_19_object);
	var_58_bool = var_18_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_59_int = 0;
	func_1758(var_59_int);
	@@var_14_object:SetNPCName(var_59_int);
	var_60_string = "";
	func_1760(var_60_string);
	@@var_14_object:SetPhoto(var_60_string);
	var_61_int = 0;
	func_1725(var_61_int);
	@@var_14_object:SetPlayerName(var_61_int);
	IsOverrideActive(var_15_bool);
	var_69_bool = var_15_bool;
	if(var_69_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	DoDialog(var_14_object);
	var_70_object = Obj(); var_71_object = Obj();
	var_8_object = var_70_object;
	var_14_object = var_71_object;
	TaskCall(1);
	func_63(var_72_object, var_73_object, var_74_string, var_75_bool, var_70_object, var_71_object);
	TaskReturn();
	@@var_14_object:IsDialogEnd(var_17_bool);
	
Label_45:
	var_198_bool = var_17_bool == 0; //@nz
	if(var_198_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_45;
	}
	var_8_object = Obj();
	func_1260();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1282()
{
	var_9_bool = 0;
	func_1762(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1541(var_94_bool)
{
	var_96_int = 0; var_97_string = "";
	func_1305(var_96_int, "d6q01");
	var_99_bool = var_96_int == (int)2;
	if(var_99_bool != 0) {
		var_94_bool = 1;
		return 0;
	}
	var_94_bool = 0;
	return 0;
}


func_1289(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1295(var_43_cvector, var_44_cvector)
{
	var_46_float = 0; var_47_float = 0;
	var_48_int = var_44_cvector | var_44_cvector;
	var_47_float = sqrt(var_48_int);
	var_49_float = 9.999999974752427e-07;
	var_50_bool = var_47_float < var_49_float;
	if(var_50_bool != 0) {
		var_43_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_43_cvector = var_44_cvector / var_47_float;
	return 2;
}


func_1553(var_146_bool)
{
	var_148_int = 0; var_149_string = "";
	func_1305(var_148_int, "d6q01");
	var_151_bool = var_148_int == (int)4;
	if(var_151_bool != 0) {
		var_146_bool = 1;
		return 0;
	}
	var_146_bool = 0;
	return 0;
}


func_1305(var_81_int, var_82_string)
{
	var_83_int = 0; var_84_int = 0;
	GetVariable(var_82_string, var_84_int);
	var_84_int = var_81_int;
	return 2;
}


func_1691(var_123_bool, var_124_int)
{
	var_125_object = Obj(); var_126_object = Obj(); var_127_object = Obj(); var_128_object = Obj();
	func_1649(Obj());
	var_129_object = var_127_object;
	@@var_127_object:Find(var_124_int, var_128_object);
	var_130_bool = var_128_object == 0; //@nz
	if(var_130_bool != 0) {
		var_123_bool = 0;
		return 4;
	}
	@@var_128_object:Remove();
	var_123_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1565(var_79_bool)
{
	var_81_int = 0; var_82_string = "";
	func_1305(var_81_int, "ood6Klara1");
	var_86_bool = var_81_int == (int)0;
	if(var_86_bool != 0) {
		var_79_bool = 1;
		return 0;
	}
	var_79_bool = 0;
	return 0;
}


func_1310(var_51_object, var_52_object, var_53_int)
{
	var_54_int = 0; var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_int = 0; var_59_bool = 0;
	@@var_52_object:GetItemID(var_57_int);
	GetInvItemProperty(var_58_int, var_57_int, "Category");
	@@var_51_object:AddItem(var_59_bool, var_52_object, var_58_int, var_53_int);
	var_61_bool = var_59_bool == 0; //@nz
	if(var_61_bool != 0) {
		@@var_51_object:DropItems(var_52_object, var_53_int);
	}
	return 6;
}


func_1577(var_140_bool)
{
	var_142_int = 0; var_143_string = "";
	func_1305(var_142_int, "d6q01");
	var_145_bool = var_142_int == (int)3;
	if(var_145_bool != 0) {
		var_140_bool = 1;
		return 0;
	}
	var_140_bool = 0;
	return 0;
}


func_1323(var_46_object, var_47_string, var_48_int)
{
	var_49_object = Obj(); var_50_object = Obj();
	CreateInvItem(var_50_object);
	@@var_50_object:SetItemName(var_47_string);
	var_51_object = Obj(); var_52_object = Obj(); var_53_int = 0;
	var_46_object = var_51_object;
	var_50_object = var_52_object;
	var_48_int = var_53_int;
	func_1310(var_51_object, var_52_object, var_53_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1708(var_88_object)
{
	var_89_object = Obj(); var_90_object = Obj(); var_91_object = Obj(); var_92_object = Obj();
	GetMainOutdoorScene(var_91_object);
	var_93_bool = var_91_object == 0; //@ne
	if(var_93_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_92_object = 0;
		var_92_object = var_88_object;
		return 4;
	}
	@@var_91_object:GetMap(var_92_object);
	var_92_object = var_88_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1202(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_1204(var_18_bool, var_19_object)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0;
	@@var_19_object:GetPosition(var_29_cvector);
	@@var_19_object:GetEyesHeight(var_28_float);
	var_36_float = GetByIndex(var_29_cvector, 1);
	var_36_float = var_36_float + var_28_float;
	SetByIndex(var_29_cvector, 1) = var_36_float;
	GetPosition(var_30_cvector);
	GetEyesHeight(var_28_float);
	var_37_float = GetByIndex(var_30_cvector, 1);
	var_37_float = var_37_float + var_28_float;
	SetByIndex(var_30_cvector, 1) = var_37_float;
	var_31_cvector = var_29_cvector - var_30_cvector;
	var_38_float = GetByIndex(var_31_cvector, 1);
	SetByIndex(var_31_cvector, 1) = (float)0;
	var_39_int = var_31_cvector | var_31_cvector;
	var_40_float = sqrt(var_39_int);
	var_31_cvector = var_31_cvector / var_40_float;
	var_32_cvector = -var_31_cvector;
	var_42_float = var_31_cvector * (int)70;
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0);
	var_44_cvector = var_32_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1295(var_43_cvector, var_44_cvector);
	var_52_float = var_43_cvector * (int)25;
	var_53_int = var_42_float + var_52_float;
	var_33_cvector = var_53_int - CVector(0.0, 10.0, 0.0);
	var_34_cvector = var_30_cvector + var_33_cvector;
	IsOverrideActive(var_35_bool);
	var_55_bool = var_35_bool;
	if(var_55_bool != 0) {
		var_18_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_34_cvector, var_32_cvector);
	var_56_float = GetByIndex(var_33_cvector, 0);
	var_57_float = GetByIndex(var_33_cvector, 2);
	Rotate(var_56_float, var_57_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 16;
}


func_1589(var_154_bool)
{
	var_156_int = 0; var_157_string = "";
	func_1305(var_156_int, "ood6Klara2");
	var_159_bool = var_156_int == (int)0;
	if(var_159_bool != 0) {
		var_154_bool = 1;
		return 0;
	}
	var_154_bool = 0;
	return 0;
}


func_1336(var_143_bool, var_144_string, var_145_string)
{
	var_146_object = Obj(); var_147_object = Obj();
	FindActor(var_147_object, var_144_string);
	var_148_bool = var_147_object == 0; //@ne
	if(var_148_bool != 0) {
		var_143_bool = 0;
		return 2;
	}
	Trigger(var_147_object, var_145_string);
	var_143_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1725(var_61_int)
{
	var_62_int = 0; var_63_int = 0;
	GetVariable("player", var_63_int);
	var_66_bool = var_63_int == (int)0;
	if(var_66_bool != 0) {
		var_61_int = 200001;
		return 2;
	EMIT "GOTO 0x6cc";
	}
	var_68_bool = var_63_int == (int)1;
	if(var_68_bool != 0) {
		var_61_int = 200002;
		return 2;
	}
	var_61_int = 200003;
	return 2;
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_70_object, var_71_object)
{
	var_0_object = var_71_object;
	var_1_object = var_70_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_77_bool = 0;
		var_77_bool = 1;
		var_78_bool = 0;
		var_78_bool = 0;
		var_79_bool = 0; var_80_object = Obj();
		var_80_object = var_1_object;
		func_1565(var_80_object);
		if(var_79_bool != 0) {
			var_87_bool = 0; var_88_object = Obj();
			var_88_object = var_1_object;
			func_1529(var_88_object);
			if(var_87_bool != 0) {
				var_78_bool = 1;
			}
		}
		if(var_78_bool != 1) {
			var_93_bool = 0;
			var_93_bool = 0;
			var_94_bool = 0; var_95_object = Obj();
			var_95_object = var_1_object;
			func_1541(var_95_object);
			if(var_94_bool != 0) {
				var_100_bool = 0; var_101_object = Obj();
				var_101_object = var_1_object;
				func_1565(var_101_object);
				if(var_100_bool != 0) {
					var_93_bool = 1;
				}
			}
			if(var_93_bool != 1) {
				var_77_bool = 0;
			}
		}
		if(var_77_bool != 0) {
			var_102_object = Obj(); var_103_object = Obj();
			var_102_object = var_1_object;
			var_103_object = var_0_object;
			func_1368();
			var_106_string = "";
			func_241(var_71_object, "Neutral");
			@@@var_0_object:SetMessage((int)12737);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12738, (int)13933, (int)13932);
			@@@var_0_object:AddReply((int)12744, (int)13965, (int)13938);
			@@@var_0_object:AddReply((int)12745, (int)13954, (int)13939);
		} else {
				var_139_bool = 0;
				var_139_bool = 1;
				var_140_bool = 0; var_141_object = Obj();
				var_141_object = var_1_object;
				func_1577(var_141_object);
				if(var_140_bool != 1) {
					var_146_bool = 0; var_147_object = Obj();
					var_147_object = var_1_object;
					func_1553(var_147_object);
					if(var_146_bool != 1) {
						var_139_bool = 0;
					}
				}
				if(var_139_bool != 0) {
					var_152_string = "";
					func_241(var_71_object, "Neutral");
					@@@var_0_object:SetMessage((int)12748);
					@@@var_0_object:ClearReplies();
					var_154_bool = 0; var_155_object = Obj();
					var_155_object = var_1_object;
					func_1589(var_155_object);
					if(var_154_bool != 0) {
						@@@var_0_object:AddReply((int)12749, (int)3753, (int)13943);
					}
					var_163_bool = 0;
					var_163_bool = 0;
					var_164_bool = 0;
					var_164_bool = 0;
					var_165_bool = 0;
					var_165_bool = 0;
					var_166_bool = 0; var_167_object = Obj();
					var_167_object = var_1_object;
					func_1637(var_167_object);
					if(var_166_bool != 0) {
						var_172_bool = 0; var_173_object = Obj();
						var_173_object = var_1_object;
						func_1601(var_173_object);
						if(var_172_bool != 0) {
							var_165_bool = 1;
						}
					}
					if(var_165_bool != 0) {
						var_178_bool = 0; var_179_object = Obj();
						var_179_object = var_1_object;
						func_1613(var_179_object);
						var_184_bool = var_178_bool == 0; //@nz
						if(var_184_bool != 0) {
							var_164_bool = 1;
						}
					}
					if(var_164_bool != 0) {
						var_185_bool = 0; var_186_object = Obj();
						var_186_object = var_1_object;
						func_1625(var_186_object);
						var_191_bool = var_185_bool == 0; //@nz
						if(var_191_bool != 0) {
							var_163_bool = 1;
						}
					}
					if(var_163_bool != 0) {
						@@@var_0_object:AddReply((int)12750, (int)11864, (int)13944);
					}
					@@@var_0_object:AddReply((int)12769, (int)-1, (int)13968);
					goto Label_211;
				}
				return 0;
		}
	}
Label_211:
	var_131_bool = 0;
	func_1762(var_131_bool);
	if(var_131_bool != 0) {

	Label_215:
		lshWaitForAnimEnd();
		var_132_string = var_3_string;
		if(var_132_string != 0) {
		} else {
			var_133_string = "";
			var_133_string = var_2_object;
			func_1264(var_133_string);
			goto Label_215;
	}
		PlayAnimation("all", "idle");

	Label_230:
		WaitForAnimEnd();
		var_136_string = var_3_string;
		if(var_136_string != 0) {
			goto Label_240;
		}
		PlayAnimation("all", "idle");
		goto Label_230;

	}
	goto Label_240;
	
Label_240:
	return 0;
	
}
EMIT "GOTO 0x43";


func_1601(var_172_bool)
{
	var_174_int = 0; var_175_string = "";
	func_1305(var_174_int, "microscope_d6q01_klara_blood");
	var_177_bool = var_174_int != (int)0;
	if(var_177_bool != 0) {
		var_172_bool = 1;
		return 0;
	}
	var_172_bool = 0;
	return 0;
}


func_1348(var_18_object)
{
	func_1742();
	Trace("klara blood is given");
	var_46_object = Obj(); var_47_string = ""; var_48_int = 0;
	var_18_object = var_46_object;
	func_1323(var_46_object, "d6q01_klara_blood", (int)1);
	return 0;
}


func_1613(var_178_bool)
{
	var_180_int = 0; var_181_string = "";
	func_1305(var_180_int, "d6q01");
	var_183_bool = var_180_int == (int)1000;
	if(var_183_bool != 0) {
		var_178_bool = 1;
		return 0;
	}
	var_178_bool = 0;
	return 0;
}


func_1742()
{
	var_20_object = Obj(); var_21_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_21_object, (int)163, (int)1, (int)15405);
	var_26_bool = 0; var_27_object = Obj(); var_28_int = 0;
	var_21_object = var_27_object;
	func_1662(var_26_bool, var_27_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1362()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_1368()
{
	SetVariable("ood6Klara1", (int)1);
	return 0;
}


func_1625(var_185_bool)
{
	var_187_int = 0; var_188_string = "";
	func_1305(var_187_int, "d6q01");
	var_190_bool = var_187_int == (int)-1;
	if(var_190_bool != 0) {
		var_185_bool = 1;
		return 0;
	}
	var_185_bool = 0;
	return 0;
}


func_1758(var_59_int)
{
	var_59_int = 2865;
	return 0;
}


func_1374()
{
	SetVariable("ood6Klara2", (int)1);
	return 0;
}


func_1760(var_60_string)
{
	var_60_string = "ui/NPC_Klara.png";
	return 0;
}


func_1762(var_107_bool)
{
	var_107_bool = 1;
	return 0;
}


func_1380()
{
	var_82_object = Obj(); var_83_object = Obj(); var_84_object = Obj(); var_85_object = Obj();
	SetVariable("d6q01KlaraVolonteer", (int)1);
	func_1708(Obj());
	var_88_object = var_84_object;
	@@var_84_object:FindMark(var_85_object, "d6q01AlexandrGotoJulia");
	var_96_object = var_85_object;
	if(var_96_object != 0) {
		@@var_85_object:Remove();
	}
	@@var_84_object:FindMark(var_85_object, "d6q01AlexandrGotoKaterina");
	var_98_object = var_85_object;
	if(var_98_object != 0) {
		@@var_85_object:Remove();
	}
	@@var_84_object:FindMark(var_85_object, "d6q01AlexandrGotoLara");
	var_100_object = var_85_object;
	if(var_100_object != 0) {
		@@var_85_object:Remove();
	}
	@@var_84_object:FindMark(var_85_object, "d6q01AlexangrGotoJulLaraSelf");
	var_102_object = var_85_object;
	if(var_102_object != 0) {
		@@var_85_object:Remove();
	}
	@@var_84_object:FindMark(var_85_object, "d6q01BigVladGotoAnna");
	var_104_object = var_85_object;
	if(var_104_object != 0) {
		@@var_85_object:Remove();
	}
	@@var_84_object:FindMark(var_85_object, "d6q01BigVladGotoAnnaOspinaSelf");
	var_106_object = var_85_object;
	if(var_106_object != 0) {
		@@var_85_object:Remove();
	}
	@@var_84_object:FindMark(var_85_object, "d6q01BigVladGotoOspina");
	var_108_object = var_85_object;
	if(var_108_object != 0) {
		@@var_85_object:Remove();
	}
	@@var_84_object:FindMark(var_85_object, "d6q01KaterinaGotoLaska");
	var_110_object = var_85_object;
	if(var_110_object != 0) {
		@@var_85_object:Remove();
	}
	@@var_84_object:FindMark(var_85_object, "d6q01KaterinagotoLaskaSelf");
	var_112_object = var_85_object;
	if(var_112_object != 0) {
		@@var_85_object:Remove();
	}
	@@var_84_object:FindMark(var_85_object, "d6q01KillerIsKlara");
	var_114_object = var_85_object;
	if(var_114_object != 0) {
		@@var_85_object:Remove();
	}
	@@var_84_object:FindMark(var_85_object, "d6q01LaskaGotoAlbinos");
	var_116_object = var_85_object;
	if(var_116_object != 0) {
		@@var_85_object:Remove();
	}
	@@var_84_object:FindMark(var_85_object, "d6q01ViktorGotoAlexandr");
	var_118_object = var_85_object;
	if(var_118_object != 0) {
		@@var_85_object:Remove();
	}
	@@var_84_object:FindMark(var_85_object, "d6q01ViktorGotoAlxBigSelf");
	var_120_object = var_85_object;
	if(var_120_object != 0) {
		@@var_85_object:Remove();
	}
	@@var_84_object:FindMark(var_85_object, "d6q01ViktorGotoBigVlad");
	var_122_object = var_85_object;
	if(var_122_object != 0) {
		@@var_85_object:Remove();
	}
	var_123_bool = 0; var_124_int = 0;
	func_1691(var_123_bool, (int)112);
	var_131_bool = 0; var_132_int = 0;
	func_1691(var_131_bool, (int)113);
	var_133_bool = 0; var_134_int = 0;
	func_1691(var_133_bool, (int)114);
	var_135_bool = 0; var_136_int = 0;
	func_1691(var_135_bool, (int)115);
	var_137_bool = 0; var_138_int = 0;
	func_1691(var_137_bool, (int)116);
	var_139_bool = 0; var_140_int = 0;
	func_1691(var_139_bool, (int)117);
	var_141_bool = 0; var_142_int = 0;
	func_1691(var_141_bool, (int)122);
	var_143_bool = 0; var_144_string = ""; var_145_string = "";
	func_1336(var_143_bool, "quest_d6_01", "completed");
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1637(var_166_bool)
{
	var_168_int = 0; var_169_string = "";
	func_1305(var_168_int, "ood6Klara3");
	var_171_bool = var_168_int == (int)0;
	if(var_171_bool != 0) {
		var_166_bool = 1;
		return 0;
	}
	var_166_bool = 0;
	return 0;
}


func_1260()
{
	CameraSwitchToNormal();
	return 0;
}


func_1264(var_110_string)
{
	var_111_float = 0; var_112_float = 0; var_113_float = 0; var_114_float = 0;
	var_116_int = "playing " + var_110_string;
	Trace(var_116_int);
	lshGetAnimTimes(var_110_string, var_113_float, var_114_float);
	lshPlayAnimation(var_113_float, var_114_float);
	var_118_int = "start: " + var_113_float;
	Trace(var_118_int);
	var_120_int = "end: " + var_114_float;
	Trace(var_120_int);
	return 4;
}


func_241(var_2_object, var_106_string)
{
	var_107_bool = 0;
	func_1762(var_107_bool);
	var_108_bool = var_107_bool == 0; //@nz
	if(var_108_bool != 0) {
		return 0;
	}
	var_109_bool = var_106_string == var_2_object;
	if(var_109_bool != 0) {
		return 0;
	}
	var_110_string = "";
	var_106_string = var_110_string;
	func_1264(var_110_string);
	var_2_object = var_106_string;
	return 0;
}


func_1649(var_35_object)
{
	var_36_object = Obj(); var_37_object = Obj();
	GetDiaryRoot(var_37_object);
	var_38_bool = var_37_object == 0; //@nz
	if(var_38_bool != 0) {
		Trace("Can't retrieve diary root");
		var_35_object = 0;
		return 2;
	}
	var_37_object = var_35_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1523()
{
	SetVariable("ood6Klara3", (int)1);
	return 0;
}


func_1529(var_87_bool)
{
	var_89_int = 0; var_90_string = "";
	func_1305(var_89_int, "d6q01");
	var_92_bool = var_89_int == (int)2;
	if(var_92_bool != 0) {
		var_87_bool = 1;
		return 0;
	}
	var_87_bool = 0;
	return 0;
}


func_1662(var_26_bool, var_27_object, var_28_int)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_int = 0; var_32_object = Obj(); var_33_object = Obj(); var_34_int = 0;
	func_1649(Obj());
	var_35_object = var_32_object;
	@@var_32_object:Find(var_28_int, var_33_object);
	var_40_bool = var_33_object == 0; //@nz
	if(var_40_bool != 0) {
		var_42_int = "Can't find diary parent with id: " + var_28_int;
		Trace(var_42_int);
		var_26_bool = 0;
		return 6;
	}
	@@var_33_object:AddChild(var_27_object);
	SetVariable("player_diary", (int)1);
	@@var_27_object:GetCategory(var_34_int);
	SetDiarySection(var_34_int);
	var_26_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


