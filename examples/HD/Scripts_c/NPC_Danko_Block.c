// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Untrust|W:Doubt|W:Agression|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:ui/NPC_Block.png|W:ui/NPC_Block_b.png|W:playsound|W:giveitem|W:ood9Block3|W:d9q02|W:quest_d9_02|W:init_soldiers|W:d9LaraIsSaved|W:quest_d10_03|W:place_sanitars|W:completed|W:ood12Block1|W:d11RotaTalk|W:d9TalkToPolkovodec|W:ood9Block1|W:Rifle is given|W:Rifle|W:durability|A:SetProperty|W:ood11Block1|W:ood11Block2|W:ood11Block3|W:rifle ammo10 is given|W:rifle_ammo|W:ood9Block2|W:d8q01|W:d10q03|W:d9q01|W:d11q02|W:d11q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0xb16
// @RUN_TASK: 10
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xdb vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x4ad vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x784 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x949 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xaec vars=int,int
// @TASK_10: vars=cvector params=0
// @EVENT_7: op=0xb5f vars=int
// @EVENT_6: op=0xb85 vars=
// @EVENT_5: op=0xb94 vars=
// @EVENT_45: op=0xba1 vars=bool
// @EVENT_0: op=0xbad vars=object
// @PE: 0x51,0xc5,0xdb,0x429,0x497,0x4ad,0x72a,0x76e,0x784,0x8c2,0x933,0x949,0xa9c,0xad6,0xaec,0xb16,0xb5f,0xb85,0xba1,0xdaa,0xdd2,0xdd8,0xdde,0xdec,0xdf2,0xe01,0xe07,0xe0d,0xe13,0xe2e,0xe34,0xe3a,0xe40,0xe4b,0xe51,0xe5b,0xe67,0xe73,0xe7f,0xe8b,0xe97,0xea3,0xeaf,0xebb,0xec7,0xed3,0xedf,0xeeb,0xef7,0xf03,0xf62

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_3397();
		var_31_bool = var_27_cvector == (int)15110;
		if(var_31_bool != 0) {
			var_32_object = Obj(); var_33_object = Obj();
			var_32_object = var_1_object;
			var_33_object = var_0_object;
			func_3544();
		}
		var_37_bool = var_27_cvector == (int)15137;
		if(var_37_bool != 0) {
			var_38_object = Obj(); var_39_object = Obj();
			var_38_object = var_1_object;
			var_39_object = var_0_object;
			func_3603();
		}
		var_43_bool = var_27_cvector == (int)15149;
		if(var_43_bool != 0) {
			var_44_object = Obj(); var_45_object = Obj();
			var_44_object = var_1_object;
			var_45_object = var_0_object;
			func_3609(var_45_object);
			var_68_object = Obj(); var_69_object = Obj();
			var_68_object = var_1_object;
			var_69_object = var_0_object;
			func_3538();
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_3648(var_73_object);
		}
		var_84_bool = var_27_cvector == (int)15150;
		if(var_84_bool != 0) {
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_3609(var_86_object);
			var_87_object = Obj(); var_88_object = Obj();
			var_87_object = var_1_object;
			var_88_object = var_0_object;
			func_3538();
			var_89_object = Obj(); var_90_object = Obj();
			var_89_object = var_1_object;
			var_90_object = var_0_object;
			func_3648(var_90_object);
		}
		var_92_bool = var_27_cvector == (int)15155;
		if(var_92_bool != 0) {
			var_93_object = Obj(); var_94_object = Obj();
			var_93_object = var_1_object;
			var_94_object = var_0_object;
			func_3659();
		}
		var_98_bool = var_27_cvector == (int)35071;
		if(var_98_bool != 0) {
			var_99_object = Obj(); var_100_object = Obj();
			var_99_object = var_1_object;
			var_100_object = var_0_object;
			func_3550();
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_3564();
		}
		var_137_bool = var_26_bool == (int)15109;
		if(var_137_bool != 0) {
			var_138_object = Obj(); var_139_object = Obj();
			var_138_object = var_1_object;
			var_139_object = var_0_object;
			func_3597();
			var_142_string = "";
			func_197(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513882);
			@@@var_0_object:ClearReplies();
			var_160_bool = 0;
			var_160_bool = 0;
			var_161_bool = 0; var_162_object = Obj();
			var_162_object = var_1_object;
			func_3675(var_162_object);
			if(var_161_bool != 0) {
				var_169_bool = 0; var_170_object = Obj();
				var_170_object = var_1_object;
				func_3687(var_170_object);
				if(var_169_bool != 0) {
					var_160_bool = 1;
				}
			}
			if(var_160_bool != 0) {
				@@@var_0_object:AddReply((int)513883, (int)15111, (int)15110);
			}
			var_178_bool = 0;
			var_178_bool = 0;
			var_179_bool = 0; var_180_object = Obj();
			var_180_object = var_1_object;
			func_3735(var_180_object);
			if(var_179_bool != 0) {
				var_185_bool = 0; var_186_object = Obj();
				var_186_object = var_1_object;
				func_3747(var_186_object);
				if(var_185_bool != 0) {
					var_178_bool = 1;
				}
			}
			if(var_178_bool != 0) {
				@@@var_0_object:AddReply((int)513906, (int)15138, (int)15137);
			}
			var_194_bool = 0; var_195_object = Obj();
			var_195_object = var_1_object;
			func_3831(var_195_object);
			if(var_194_bool != 0) {
				@@@var_0_object:AddReply((int)513924, (int)15156, (int)15155);
			}
			var_203_bool = 0; var_204_object = Obj();
			var_204_object = var_1_object;
			func_3699(var_204_object);
			if(var_203_bool != 0) {
				@@@var_0_object:AddReply((int)533537, (int)35070, (int)35069);
			}
			@@@var_0_object:AddReply((int)513947, (int)-1, (int)15182);
			return 0;
		}
		var_216_bool = var_26_bool == (int)35070;
		if(var_216_bool != 0) {
			var_217_string = "";
			func_197(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533538);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536553, (int)38366, (int)38365);
			@@@var_0_object:AddReply((int)536557, (int)-1, (int)38369);
			return 0;
		}
		var_226_bool = var_26_bool == (int)38366;
		if(var_226_bool != 0) {
			var_227_string = "";
			func_197(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536554);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536555, (int)38368, (int)38367);
			@@@var_0_object:AddReply((int)536558, (int)38368, (int)38370);
			return 0;
		}
		var_236_bool = var_26_bool == (int)38368;
		if(var_236_bool != 0) {
			var_237_string = "";
			func_197(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536556);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536559, (int)38372, (int)38371);
			return 0;
		}
		var_243_bool = var_26_bool == (int)38372;
		if(var_243_bool != 0) {
			var_244_string = "";
			func_197(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536560);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533539, (int)-1, (int)35071);
			return 0;
		}
		var_250_bool = var_26_bool == (int)15156;
		if(var_250_bool != 0) {
			var_251_string = "";
			func_197(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513925);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513926, (int)15158, (int)15157);
			@@@var_0_object:AddReply((int)513946, (int)15158, (int)15180);
			return 0;
		}
		var_260_bool = var_26_bool == (int)15158;
		if(var_260_bool != 0) {
			var_261_string = "";
			func_197(var_27_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)513927);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513928, (int)15160, (int)15159);
			@@@var_0_object:AddReply((int)513945, (int)15160, (int)15178);
			return 0;
		}
		var_270_bool = var_26_bool == (int)15160;
		if(var_270_bool != 0) {
			var_271_string = "";
			func_197(var_27_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)513929);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513930, (int)15162, (int)15161);
			@@@var_0_object:AddReply((int)513944, (int)15162, (int)15176);
			return 0;
		}
		var_280_bool = var_26_bool == (int)15162;
		if(var_280_bool != 0) {
			var_281_string = "";
			func_197(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513931);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513932, (int)15164, (int)15163);
			@@@var_0_object:AddReply((int)513941, (int)15173, (int)15172);
			return 0;
		}
		var_290_bool = var_26_bool == (int)15173;
		if(var_290_bool != 0) {
			var_291_string = "";
			func_197(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513942);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513943, (int)15166, (int)15174);
			return 0;
		}
		var_297_bool = var_26_bool == (int)15164;
		if(var_297_bool != 0) {
			var_298_string = "";
			func_197(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513933);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513934, (int)15166, (int)15165);
			return 0;
		}
		var_304_bool = var_26_bool == (int)15166;
		if(var_304_bool != 0) {
			var_305_string = "";
			func_197(var_27_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)513935);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513936, (int)15168, (int)15167);
			return 0;
		}
		var_311_bool = var_26_bool == (int)15168;
		if(var_311_bool != 0) {
			var_312_string = "";
			func_197(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513937);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513938, (int)15170, (int)15169);
			return 0;
		}
		var_318_bool = var_26_bool == (int)15170;
		if(var_318_bool != 0) {
			var_319_string = "";
			func_197(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513939);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513940, (int)-1, (int)15171);
			return 0;
		}
		var_325_bool = var_26_bool == (int)15138;
		if(var_325_bool != 0) {
			var_326_string = "";
			func_197(var_27_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)513907);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513908, (int)15140, (int)15139);
			return 0;
		}
		var_332_bool = var_26_bool == (int)15140;
		if(var_332_bool != 0) {
			var_333_string = "";
			func_197(var_27_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)513909);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513910, (int)15142, (int)15141);
			return 0;
		}
		var_339_bool = var_26_bool == (int)15142;
		if(var_339_bool != 0) {
			var_340_string = "";
			func_197(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513911);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513912, (int)15144, (int)15143);
			@@@var_0_object:AddReply((int)513920, (int)15152, (int)15151);
			return 0;
		}
		var_349_bool = var_26_bool == (int)15152;
		if(var_349_bool != 0) {
			var_350_string = "";
			func_197(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513921);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513922, (int)15154, (int)15153);
			return 0;
		}
		var_356_bool = var_26_bool == (int)15154;
		if(var_356_bool != 0) {
			var_357_string = "";
			func_197(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513923);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514067, (int)-1, (int)15304);
			return 0;
		}
		var_363_bool = var_26_bool == (int)15144;
		if(var_363_bool != 0) {
			var_364_string = "";
			func_197(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513913);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513914, (int)15146, (int)15145);
			@@@var_0_object:AddReply((int)513919, (int)-1, (int)15150);
			return 0;
		}
		var_373_bool = var_26_bool == (int)15146;
		if(var_373_bool != 0) {
			var_374_string = "";
			func_197(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513915);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513916, (int)15148, (int)15147);
			return 0;
		}
		var_380_bool = var_26_bool == (int)15148;
		if(var_380_bool != 0) {
			var_381_string = "";
			func_197(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513917);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513918, (int)-1, (int)15149);
			return 0;
		}
		var_387_bool = var_26_bool == (int)15111;
		if(var_387_bool != 0) {
			var_388_string = "";
			func_197(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513884);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513885, (int)15113, (int)15112);
			@@@var_0_object:AddReply((int)513905, (int)15113, (int)15135);
			return 0;
		}
		var_397_bool = var_26_bool == (int)15113;
		if(var_397_bool != 0) {
			var_398_string = "";
			func_197(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513886);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513887, (int)15115, (int)15114);
			@@@var_0_object:AddReply((int)513899, (int)15128, (int)15127);
			return 0;
		}
		var_407_bool = var_26_bool == (int)15128;
		if(var_407_bool != 0) {
			var_408_string = "";
			func_197(var_27_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)513900);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513901, (int)15130, (int)15129);
			@@@var_0_object:AddReply((int)513904, (int)15115, (int)15133);
			return 0;
		}
		var_417_bool = var_26_bool == (int)15130;
		if(var_417_bool != 0) {
			var_418_string = "";
			func_197(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513902);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513903, (int)15121, (int)15131);
			return 0;
		}
		var_424_bool = var_26_bool == (int)15115;
		if(var_424_bool != 0) {
			var_425_string = "";
			func_197(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513888);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513889, (int)15117, (int)15116);
			@@@var_0_object:AddReply((int)513898, (int)15117, (int)15125);
			return 0;
		}
		var_434_bool = var_26_bool == (int)15117;
		if(var_434_bool != 0) {
			var_435_string = "";
			func_197(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513890);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513891, (int)15119, (int)15118);
			@@@var_0_object:AddReply((int)513897, (int)15121, (int)15124);
			return 0;
		}
		var_444_bool = var_26_bool == (int)15119;
		if(var_444_bool != 0) {
			var_445_string = "";
			func_197(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513892);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513893, (int)15121, (int)15120);
			return 0;
		}
		var_451_bool = var_26_bool == (int)15121;
		if(var_451_bool != 0) {
			var_452_string = "";
			func_197(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513894);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513895, (int)-1, (int)15122);
			@@@var_0_object:AddReply((int)513896, (int)-1, (int)15123);
			return 0;
		}
		var_3_string = true;
		var_460_bool = 0;
		func_3536(var_460_bool);
		if(var_460_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xdc";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_3397();
		var_31_bool = var_27_cvector == (int)15501;
		if(var_31_bool != 0) {
			var_32_object = Obj(); var_33_object = Obj();
			var_32_object = var_1_object;
			var_33_object = var_0_object;
			func_3630();
		}
		var_37_bool = var_27_cvector == (int)15528;
		if(var_37_bool != 0) {
			var_38_object = Obj(); var_39_object = Obj();
			var_38_object = var_1_object;
			var_39_object = var_0_object;
			func_3636();
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_3591();
		}
		var_47_bool = var_27_cvector == (int)15539;
		if(var_47_bool != 0) {
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_3642();
		}
		var_53_bool = var_26_bool == (int)15500;
		if(var_53_bool != 0) {
			var_54_string = "";
			func_1175(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514280);
			@@@var_0_object:ClearReplies();
			var_72_bool = 0;
			var_72_bool = 0;
			var_73_bool = 0; var_74_object = Obj();
			var_74_object = var_1_object;
			func_3771(var_74_object);
			if(var_73_bool != 0) {
				var_81_bool = 0; var_82_object = Obj();
				var_82_object = var_1_object;
				func_3783(var_82_object);
				if(var_81_bool != 0) {
					var_72_bool = 1;
				}
			}
			if(var_72_bool != 0) {
				@@@var_0_object:AddReply((int)514281, (int)15502, (int)15501);
			}
			var_90_bool = 0;
			var_90_bool = 0;
			var_91_bool = 0; var_92_object = Obj();
			var_92_object = var_1_object;
			func_3795(var_92_object);
			if(var_91_bool != 0) {
				var_97_bool = 0; var_98_object = Obj();
				var_98_object = var_1_object;
				func_3807(var_98_object);
				if(var_97_bool != 0) {
					var_90_bool = 1;
				}
			}
			if(var_90_bool != 0) {
				@@@var_0_object:AddReply((int)514306, (int)15529, (int)15528);
			}
			var_106_bool = 0;
			var_106_bool = 0;
			var_107_bool = 0; var_108_object = Obj();
			var_108_object = var_1_object;
			func_3759(var_108_object);
			if(var_107_bool != 0) {
				var_113_bool = 0; var_114_object = Obj();
				var_114_object = var_1_object;
				func_3819(var_114_object);
				if(var_113_bool != 0) {
					var_106_bool = 1;
				}
			}
			if(var_106_bool != 0) {
				@@@var_0_object:AddReply((int)514317, (int)15540, (int)15539);
			}
			@@@var_0_object:AddReply((int)514324, (int)-1, (int)15546);
			return 0;
		}
		var_126_bool = var_26_bool == (int)15540;
		if(var_126_bool != 0) {
			var_127_string = "";
			func_1175(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514318);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514319, (int)15542, (int)15541);
			@@@var_0_object:AddReply((int)539610, (int)41557, (int)41556);
			return 0;
		}
		var_136_bool = var_26_bool == (int)41557;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_1175(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539611);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539729, (int)15542, (int)41692);
			return 0;
		}
		var_143_bool = var_26_bool == (int)15542;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_1175(var_27_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)514320);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514321, (int)15544, (int)15543);
			return 0;
		}
		var_150_bool = var_26_bool == (int)15544;
		if(var_150_bool != 0) {
			var_151_string = "";
			func_1175(var_27_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)514322);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514323, (int)41695, (int)15545);
			@@@var_0_object:AddReply((int)539730, (int)-1, (int)41694);
			return 0;
		}
		var_160_bool = var_26_bool == (int)41695;
		if(var_160_bool != 0) {
			var_161_string = "";
			func_1175(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539731);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539732, (int)-1, (int)41696);
			@@@var_0_object:AddReply((int)539733, (int)-1, (int)41697);
			return 0;
		}
		var_170_bool = var_26_bool == (int)15529;
		if(var_170_bool != 0) {
			var_171_string = "";
			func_1175(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514307);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514308, (int)15531, (int)15530);
			return 0;
		}
		var_177_bool = var_26_bool == (int)15531;
		if(var_177_bool != 0) {
			var_178_string = "";
			func_1175(var_27_cvector, "Agression");
			@@@var_0_object:SetMessage((int)514309);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514310, (int)15533, (int)15532);
			return 0;
		}
		var_184_bool = var_26_bool == (int)15533;
		if(var_184_bool != 0) {
			var_185_string = "";
			func_1175(var_27_cvector, "Agression");
			@@@var_0_object:SetMessage((int)514311);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514312, (int)15535, (int)15534);
			@@@var_0_object:AddReply((int)539728, (int)-1, (int)41691);
			return 0;
		}
		var_194_bool = var_26_bool == (int)15535;
		if(var_194_bool != 0) {
			var_195_string = "";
			func_1175(var_27_cvector, "Agression");
			@@@var_0_object:SetMessage((int)514313);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514314, (int)15537, (int)15536);
			return 0;
		}
		var_201_bool = var_26_bool == (int)15537;
		if(var_201_bool != 0) {
			var_202_string = "";
			func_1175(var_27_cvector, "Agression");
			@@@var_0_object:SetMessage((int)514315);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514316, (int)-1, (int)15538);
			@@@var_0_object:AddReply((int)539727, (int)-1, (int)41690);
			return 0;
		}
		var_211_bool = var_26_bool == (int)15502;
		if(var_211_bool != 0) {
			var_212_string = "";
			func_1175(var_27_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)514282);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514283, (int)15504, (int)15503);
			@@@var_0_object:AddReply((int)539903, (int)41864, (int)41863);
			return 0;
		}
		var_221_bool = var_26_bool == (int)41864;
		if(var_221_bool != 0) {
			var_222_string = "";
			func_1175(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539904);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539905, (int)15504, (int)41865);
			return 0;
		}
		var_228_bool = var_26_bool == (int)15504;
		if(var_228_bool != 0) {
			var_229_string = "";
			func_1175(var_27_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)514284);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514285, (int)15506, (int)15505);
			@@@var_0_object:AddReply((int)514290, (int)15511, (int)15510);
			return 0;
		}
		var_238_bool = var_26_bool == (int)15511;
		if(var_238_bool != 0) {
			var_239_string = "";
			func_1175(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514291);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514292, (int)15513, (int)15512);
			@@@var_0_object:AddReply((int)514299, (int)15520, (int)15519);
			return 0;
		}
		var_248_bool = var_26_bool == (int)15520;
		if(var_248_bool != 0) {
			var_249_string = "";
			func_1175(var_27_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)514300);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514301, (int)15513, (int)15521);
			@@@var_0_object:AddReply((int)514302, (int)15524, (int)15523);
			return 0;
		}
		var_258_bool = var_26_bool == (int)15524;
		if(var_258_bool != 0) {
			var_259_string = "";
			func_1175(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514303);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514304, (int)15513, (int)15525);
			@@@var_0_object:AddReply((int)514305, (int)-1, (int)15527);
			return 0;
		}
		var_268_bool = var_26_bool == (int)15513;
		if(var_268_bool != 0) {
			var_269_string = "";
			func_1175(var_27_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)514293);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514294, (int)15515, (int)15514);
			return 0;
		}
		var_275_bool = var_26_bool == (int)15515;
		if(var_275_bool != 0) {
			var_276_string = "";
			func_1175(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514295);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514296, (int)15517, (int)15516);
			return 0;
		}
		var_282_bool = var_26_bool == (int)15517;
		if(var_282_bool != 0) {
			var_283_string = "";
			func_1175(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514297);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514298, (int)-1, (int)15518);
			return 0;
		}
		var_289_bool = var_26_bool == (int)15506;
		if(var_289_bool != 0) {
			var_290_string = "";
			func_1175(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514286);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514287, (int)15508, (int)15507);
			return 0;
		}
		var_296_bool = var_26_bool == (int)15508;
		if(var_296_bool != 0) {
			var_297_string = "";
			func_1175(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514288);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514289, (int)-1, (int)15509);
			@@@var_0_object:AddReply((int)539734, (int)-1, (int)41698);
			return 0;
		}
		var_3_string = true;
		var_305_bool = 0;
		func_3536(var_305_bool);
		if(var_305_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x4ae";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_3397();
		var_31_bool = var_27_cvector == (int)35743;
		if(var_31_bool != 0) {
			var_32_object = Obj(); var_33_object = Obj();
			var_32_object = var_1_object;
			var_33_object = var_0_object;
			func_3570();
		}
		var_67_bool = var_27_cvector == (int)38363;
		if(var_67_bool != 0) {
			var_68_object = Obj(); var_69_object = Obj();
			var_68_object = var_1_object;
			var_69_object = var_0_object;
			func_3570();
		}
		var_71_bool = var_26_bool == (int)35739;
		if(var_71_bool != 0) {
			var_72_string = "";
			func_1902(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534152);
			@@@var_0_object:ClearReplies();
			var_90_bool = 0; var_91_object = Obj();
			var_91_object = var_1_object;
			func_3711(var_91_object);
			if(var_90_bool != 0) {
				@@@var_0_object:AddReply((int)534153, (int)38340, (int)35740);
			}
			@@@var_0_object:AddReply((int)534154, (int)-1, (int)35741);
			@@@var_0_object:AddReply((int)536532, (int)-1, (int)38339);
			return 0;
		}
		var_108_bool = var_26_bool == (int)38340;
		if(var_108_bool != 0) {
			var_109_string = "";
			func_1902(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536533);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536534, (int)38342, (int)38341);
			@@@var_0_object:AddReply((int)536539, (int)38347, (int)38346);
			return 0;
		}
		var_118_bool = var_26_bool == (int)38347;
		if(var_118_bool != 0) {
			var_119_string = "";
			func_1902(var_27_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)536540);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536541, (int)38351, (int)38348);
			@@@var_0_object:AddReply((int)536542, (int)-1, (int)38349);
			return 0;
		}
		var_128_bool = var_26_bool == (int)38342;
		if(var_128_bool != 0) {
			var_129_string = "";
			func_1902(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536535);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536536, (int)38344, (int)38343);
			@@@var_0_object:AddReply((int)536543, (int)38351, (int)38350);
			return 0;
		}
		var_138_bool = var_26_bool == (int)38344;
		if(var_138_bool != 0) {
			var_139_string = "";
			func_1902(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536537);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536538, (int)38351, (int)38345);
			return 0;
		}
		var_145_bool = var_26_bool == (int)38351;
		if(var_145_bool != 0) {
			var_146_string = "";
			func_1902(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536544);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536545, (int)38359, (int)38352);
			@@@var_0_object:AddReply((int)536546, (int)38358, (int)38355);
			return 0;
		}
		var_155_bool = var_26_bool == (int)38358;
		if(var_155_bool != 0) {
			var_156_string = "";
			func_1902(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536548);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536550, (int)35742, (int)38360);
			return 0;
		}
		var_162_bool = var_26_bool == (int)38359;
		if(var_162_bool != 0) {
			var_163_string = "";
			func_1902(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536549);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536551, (int)35742, (int)38361);
			return 0;
		}
		var_169_bool = var_26_bool == (int)35742;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_1902(var_27_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)534155);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534156, (int)-1, (int)35743);
			@@@var_0_object:AddReply((int)536552, (int)-1, (int)38363);
			return 0;
		}
		var_3_string = true;
		var_178_bool = 0;
		func_3536(var_178_bool);
		if(var_178_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x785";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	if((int)1 != 0) {
		func_3397();
		var_31_bool = var_26_bool == (int)37192;
		if(var_31_bool != 0) {
			var_32_bool = 0;
			var_32_bool = 0;
			var_33_bool = 0; var_34_object = Obj();
			var_34_object = var_1_object;
			func_3723(var_34_object);
			if(var_33_bool != 0) {
				var_41_bool = 0; var_42_object = Obj();
				var_42_object = var_1_object;
				func_3665(var_41_bool, var_42_object);
				var_52_bool = var_41_bool == 0; //@nz
				if(var_52_bool != 0) {
					var_32_bool = 1;
				}
			}
			if(var_32_bool != 0) {
				var_53_object = Obj(); var_54_object = Obj();
				var_53_object = var_1_object;
				var_54_object = var_0_object;
				func_3585();
				var_57_string = "";
				func_2355(var_27_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)535510);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)535511, (int)37194, (int)37193);
				return 0;
			}
			var_78_bool = 0; var_79_object = Obj();
			var_79_object = var_1_object;
			func_3665(var_78_bool, var_79_object);
			if(var_78_bool != 0) {
				var_80_string = "";
				func_2355(var_27_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)535528);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)535529, (int)-1, (int)37212);
				@@@var_0_object:AddReply((int)535530, (int)-1, (int)37213);
				return 0;
			}
			var_88_string = "";
			func_2355(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535531);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535539, (int)-1, (int)37222);
			return 0;
		}
		var_94_bool = var_26_bool == (int)37194;
		if(var_94_bool != 0) {
			var_95_string = "";
			func_2355(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535512);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535513, (int)37196, (int)37195);
			@@@var_0_object:AddReply((int)535525, (int)37208, (int)37207);
			return 0;
		}
		var_104_bool = var_26_bool == (int)37208;
		if(var_104_bool != 0) {
			var_105_string = "";
			func_2355(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535526);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535527, (int)37196, (int)37209);
			@@@var_0_object:AddReply((int)539998, (int)41968, (int)41967);
			return 0;
		}
		var_114_bool = var_26_bool == (int)41968;
		if(var_114_bool != 0) {
			var_115_string = "";
			func_2355(var_27_cvector, "Doubt");
			@@@var_0_object:SetMessage((int)539999);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540000, (int)37196, (int)41969);
			@@@var_0_object:AddReply((int)540001, (int)37196, (int)41970);
			return 0;
		}
		var_124_bool = var_26_bool == (int)37196;
		if(var_124_bool != 0) {
			var_125_string = "";
			func_2355(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535514);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535515, (int)37198, (int)37197);
			@@@var_0_object:AddReply((int)535524, (int)-1, (int)37206);
			return 0;
		}
		var_134_bool = var_26_bool == (int)37198;
		if(var_134_bool != 0) {
			var_135_string = "";
			func_2355(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535516);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535517, (int)37200, (int)37199);
			@@@var_0_object:AddReply((int)535523, (int)-1, (int)37205);
			return 0;
		}
		var_144_bool = var_26_bool == (int)37200;
		if(var_144_bool != 0) {
			var_145_string = "";
			func_2355(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535518);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535519, (int)37202, (int)37201);
			@@@var_0_object:AddReply((int)542998, (int)-1, (int)45446);
			return 0;
		}
		var_154_bool = var_26_bool == (int)37202;
		if(var_154_bool != 0) {
			var_155_string = "";
			func_2355(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535520);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535521, (int)-1, (int)37203);
			@@@var_0_object:AddReply((int)535522, (int)-1, (int)37204);
			return 0;
		}
		var_3_string = true;
		var_163_bool = 0;
		func_3536(var_163_bool);
		if(var_163_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x94a";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_cvector)
{
	if((int)1 != 0) {
		func_3397();
		var_31_bool = var_26_int == (int)42551;
		if(var_31_bool != 0) {
			var_32_string = "";
			func_2774(var_27_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540542);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540543, (int)-1, (int)42552);
			@@@var_0_object:AddReply((int)540796, (int)-1, (int)42845);
			return 0;
		}
		var_3_string = true;
		var_56_bool = 0;
		func_3536(var_56_bool);
		if(var_56_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xaed";
	
}


task_10_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_int)
{
	var_28_bool = var_26_int == (int)10;
	if(var_28_bool != 0) {
		func_2907();
		var_30_bool = 0;
		var_30_bool = 0;
		var_31_bool = 0;
		func_3121(var_31_bool);
		if(var_31_bool != 0) {
			var_34_bool = 0;
			func_2876(var_34_bool);
			if(var_34_bool != 0) {
				var_30_bool = 1;
			}
		}
		if(var_30_bool != 0) {
			var_51_bool = 0;
			func_2856(var_51_bool);
			if(var_51_bool != 0) {
				var_70_bool = 0; var_71_object = Obj();
				func_3404(Obj());
				var_72_object = var_71_object;
				func_3271(var_70_bool, var_71_object);
			}
		} else {
			func_2871(var_26_int);
			func_2898();
		}
	}
	return 0;
	
}


task_10_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_3089();
	func_2907();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_10_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	StopGroup0();
	func_2907();
	var_27_string = "";
	func_3351("Neutral");
	func_2898();
	return 0;
}


task_10_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_bool)
{
	var_27_bool = var_26_bool;
	if(var_27_bool != 0) {
		func_2898();
	} else {
		var_33_string = "";
		func_3351("Neutral");
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
		func_3089();
		var_30_bool = 0; var_31_object = Obj();
		var_26_object = var_31_object;
		func_3112(var_30_bool, var_31_object);
		EventEnable(0);
		var_44_object = Obj();
		var_26_object = var_44_object;
		func_3938(var_44_object);
		var_645_string = "";
		func_3351("Neutral");
		func_2907();
		func_2898();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_2842(var_25_cvector);
	return 0;
}


func_0(var_0_object, var_53_int, var_54_object)
{
	var_56_object = Obj(); var_57_bool = 0; var_58_int = 0; var_59_bool = 0; var_60_object = Obj(); var_61_bool = 0; var_62_int = 0; var_63_bool = 0;
	var_0_object = var_54_object;
	var_64_bool = 0; var_65_object = Obj(); var_66_float = 0;
	var_54_object = var_65_object;
	func_3126(var_64_bool, var_65_object, (float)70.0);
	var_111_bool = var_64_bool == 0; //@nz
	if(var_111_bool != 0) {
		var_53_int = -2;
		return 8;
	}
	CreateDialog(var_60_object);
	var_112_int = 0;
	func_3530(var_112_int);
	@@var_60_object:SetNPCName(var_112_int);
	var_113_int = 0;
	func_3528(var_113_int);
	@@var_60_object:SetNPCDescription(var_113_int);
	var_114_string = "";
	func_3532(var_114_string);
	@@var_60_object:SetPhoto(var_114_string);
	var_115_string = "";
	func_3534(var_115_string);
	@@var_60_object:SetPhoto2(var_115_string);
	var_116_int = 0;
	func_3921(var_116_int);
	@@var_60_object:SetPlayerName(var_116_int);
	IsOverrideActive(var_61_bool);
	var_124_bool = var_61_bool;
	if(var_124_bool != 0) {
		var_53_int = -2;
		return 8;
	}
	DoDialog(var_60_object);
	var_125_bool = 0; var_126_object = Obj();
	func_3404(Obj());
	var_127_object = var_126_object;
	func_3213(var_125_bool, var_126_object);
	var_215_object = Obj(); var_216_object = Obj();
	var_54_object = var_215_object;
	var_60_object = var_216_object;
	TaskCall(1);
	func_81(var_217_object, var_218_object, var_219_string, var_220_bool, var_215_object, var_216_object);
	TaskReturn();
	@@var_60_object:IsDialogEnd(var_63_bool);
	
Label_63:
	var_317_bool = var_63_bool == 0; //@nz
	if(var_317_bool != 0) {
		sync();
		@@var_60_object:IsDialogEnd(var_63_bool);
		goto Label_63;
	}
	var_54_object = Obj();
	func_3195();
	StopDialog(var_60_object);
	@@var_60_object:GetReturnValue((int)-1);
	var_62_int = var_53_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3585()
{
	SetVariable("ood12Block1", (int)1);
	return 0;
}


func_3843(var_538_bool)
{
	var_540_int = 0;
	func_3490(var_540_int);
	var_546_bool = var_540_int >= (int)19;
	if(var_546_bool != 0) {
		var_538_bool = 1;
		return 0;
	}
	var_538_bool = 0;
	return 0;
}


func_3591()
{
	SetVariable("d11RotaTalk", (int)1);
	return 0;
}


func_3597()
{
	SetVariable("d9TalkToPolkovodec", (int)1);
	return 0;
}


func_3854()
{
	var_34_object = Obj(); var_35_object = Obj();
	CreateDiaryEntry(var_35_object, (int)676, (int)2, (int)534161);
	var_39_bool = 0; var_40_object = Obj(); var_41_int = 0;
	var_35_object = var_40_object;
	func_3893(var_39_bool, var_40_object, (int)672);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3087(var_64_bool)
{
	var_64_bool = 1;
	return 0;
}


func_3089()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_3603()
{
	SetVariable("ood9Block1", (int)1);
	return 0;
}


func_3094(var_41_float, var_42_object)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	GetPosition(var_46_cvector);
	@@var_42_object:GetPosition(var_47_cvector);
	var_48_cvector = var_47_cvector - var_46_cvector;
	var_41_float = var_48_cvector | var_48_cvector;
	return 6;
}


func_3351(var_301_string)
{
	var_302_bool = 0; var_303_float = 0; var_304_float = 0; var_305_bool = 0; var_306_float = 0; var_307_float = 0;
	lshHasAnimation(var_305_bool, var_301_string);
	var_308_bool = var_305_bool;
	if(var_308_bool != 0) {
		lshGetAnimTimes(var_301_string, var_306_float, var_307_float);
		lshPlayAnimation(var_306_float, var_307_float, (bool)0);
	} else {
		var_311_int = "Can't find lsh animation : " + var_301_string;
		Trace(var_311_int);
	}
	return 6;
	
}


func_3609(var_44_object)
{
	var_46_object = Obj(); var_47_object = Obj();
	Trace("Rifle is given");
	CreateInvItem(var_47_object);
	@@var_47_object:SetItemName("Rifle");
	@@var_47_object:SetProperty("durability", (int)100);
	var_52_object = Obj(); var_53_object = Obj(); var_54_int = 0;
	var_44_object = var_52_object;
	var_47_object = var_53_object;
	func_3437(var_52_object, var_53_object, (int)1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2842(var_0_object)
{
	var_26_bool = 0;
	func_3121(var_26_bool);
	var_29_bool = var_26_bool == 0; //@nz
	if(var_29_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_2851:
	func_3018();
	goto Label_2851;
}
EMIT "Return(); Pop(0)";


func_3867()
{
	var_103_object = Obj(); var_104_object = Obj();
	CreateDiaryEntry(var_104_object, (int)657, (int)2, (int)533575);
	var_108_bool = 0; var_109_object = Obj(); var_110_int = 0;
	var_104_object = var_109_object;
	func_3893(var_108_bool, var_109_object, (int)655);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3102(var_34_bool, var_35_cvector)
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


func_3367(var_230_string, var_231_bool)
{
	var_234_bool = 0; var_235_float = 0; var_236_float = 0; var_237_bool = 0; var_238_float = 0; var_239_float = 0;
	lshHasAnimation(var_237_bool, var_230_string);
	var_240_bool = var_237_bool;
	if(var_240_bool != 0) {
		lshGetAnimTimes(var_230_string, var_238_float, var_239_float);
		lshPlayAnimation(var_238_float, var_239_float, var_231_bool);
	} else {
		var_242_int = "Can't find lsh animation : " + var_230_string;
		Trace(var_242_int);
	}
	return 6;
	
}


func_3112(var_30_bool, var_31_object)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0);
	@@var_31_object:GetPosition(var_33_cvector);
	var_34_bool = 0; var_35_cvector = CVector(0,0,0);
	var_33_cvector = var_35_cvector;
	func_3102(var_34_bool, var_35_cvector);
	var_34_bool = var_30_bool;
	return 2;
}


func_1065(var_0_object, var_1_object, var_2_object, var_3_string, var_419_object, var_420_object)
{
	var_0_object = var_420_object;
	var_1_object = var_419_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_426_string = "";
		func_1175(var_420_object, "Neutral");
		@@@var_0_object:SetMessage((int)514280);
		@@@var_0_object:ClearReplies();
		var_435_bool = 0;
		var_435_bool = 0;
		var_436_bool = 0; var_437_object = Obj();
		var_437_object = var_1_object;
		func_3771(var_437_object);
		if(var_436_bool != 0) {
			var_442_bool = 0; var_443_object = Obj();
			var_443_object = var_1_object;
			func_3783(var_443_object);
			if(var_442_bool != 0) {
				var_435_bool = 1;
			}
		}
		if(var_435_bool != 0) {
			@@@var_0_object:AddReply((int)514281, (int)15502, (int)15501);
		}
		var_451_bool = 0;
		var_451_bool = 0;
		var_452_bool = 0; var_453_object = Obj();
		var_453_object = var_1_object;
		func_3795(var_453_object);
		if(var_452_bool != 0) {
			var_458_bool = 0; var_459_object = Obj();
			var_459_object = var_1_object;
			func_3807(var_459_object);
			if(var_458_bool != 0) {
				var_451_bool = 1;
			}
		}
		if(var_451_bool != 0) {
			@@@var_0_object:AddReply((int)514306, (int)15529, (int)15528);
		}
		var_467_bool = 0;
		var_467_bool = 0;
		var_468_bool = 0; var_469_object = Obj();
		var_469_object = var_1_object;
		func_3759(var_469_object);
		if(var_468_bool != 0) {
			var_474_bool = 0; var_475_object = Obj();
			var_475_object = var_1_object;
			func_3819(var_475_object);
			if(var_474_bool != 0) {
				var_467_bool = 1;
			}
		}
		if(var_467_bool != 0) {
			@@@var_0_object:AddReply((int)514317, (int)15540, (int)15539);
		}
		@@@var_0_object:AddReply((int)514324, (int)-1, (int)15546);
		goto Label_1145;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x42d";
	}
Label_1145:
	var_486_bool = 0;
	func_3536(var_486_bool);
	if(var_486_bool != 0) {

	Label_1149:
		lshWaitForAnimEnd();
		var_487_string = var_3_string;
		if(var_487_string != 0) {
		} else {
			var_488_string = "";
			var_488_string = var_2_object;
			func_3351(var_488_string);
			goto Label_1149;
	}
		PlayAnimation("all", "idle");

	Label_1164:
		WaitForAnimEnd();
		var_491_string = var_3_string;
		if(var_491_string != 0) {
			goto Label_1174;
		}
		PlayAnimation("all", "idle");
		goto Label_1164;
	}
	goto Label_1174;
	
Label_1174:
	return 0;
	
}


func_2856(var_51_bool)
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
	func_3112(var_56_bool, var_57_object);
	var_56_bool = var_51_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3880(var_48_object)
{
	var_49_object = Obj(); var_50_object = Obj();
	GetDiaryRoot(var_50_object);
	var_51_bool = var_50_object == 0; //@nz
	if(var_51_bool != 0) {
		Trace("Can't retrieve diary root");
		var_48_object = 0;
		return 2;
	}
	var_50_object = var_48_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1834(var_0_object, var_1_object, var_2_object, var_3_string, var_352_object, var_353_object)
{
	var_0_object = var_353_object;
	var_1_object = var_352_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_359_string = "";
		func_1902(var_353_object, "Neutral");
		@@@var_0_object:SetMessage((int)534152);
		@@@var_0_object:ClearReplies();
		var_368_bool = 0; var_369_object = Obj();
		var_369_object = var_1_object;
		func_3711(var_369_object);
		if(var_368_bool != 0) {
			@@@var_0_object:AddReply((int)534153, (int)38340, (int)35740);
		}
		@@@var_0_object:AddReply((int)534154, (int)-1, (int)35741);
		@@@var_0_object:AddReply((int)536532, (int)-1, (int)38339);
		goto Label_1872;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x72e";
	}
Label_1872:
	var_383_bool = 0;
	func_3536(var_383_bool);
	if(var_383_bool != 0) {

	Label_1876:
		lshWaitForAnimEnd();
		var_384_string = var_3_string;
		if(var_384_string != 0) {
		} else {
			var_385_string = "";
			var_385_string = var_2_object;
			func_3351(var_385_string);
			goto Label_1876;
	}
		PlayAnimation("all", "idle");

	Label_1891:
		WaitForAnimEnd();
		var_388_string = var_3_string;
		if(var_388_string != 0) {
			goto Label_1901;
		}
		PlayAnimation("all", "idle");
		goto Label_1891;
	}
	goto Label_1901;
	
Label_1901:
	return 0;
	
}


func_3630()
{
	SetVariable("ood11Block1", (int)1);
	return 0;
}


func_3121(var_26_bool)
{
	var_27_bool = 0; var_28_bool = 0;
	IsLoaded(var_28_bool);
	var_28_bool = var_26_bool;
	return 2;
}


func_2355(var_2_object, var_552_string)
{
	var_553_bool = 0;
	func_3536(var_553_bool);
	var_554_bool = var_553_bool == 0; //@nz
	if(var_554_bool != 0) {
		return 0;
	}
	var_555_bool = var_552_string == var_2_object;
	if(var_555_bool != 0) {
		return 0;
	}
	var_556_string = ""; var_557_bool = 0;
	var_552_string = var_556_string;
	var_559_bool = var_552_string == "";
	if(var_559_bool != 0) {
		var_557_bool = 0;
	} else {
		var_557_bool = 1;
	}
	func_3367(var_556_string, var_557_bool);
	var_2_object = var_552_string;
	return 0;
	
}


func_3636()
{
	SetVariable("ood11Block2", (int)1);
	return 0;
}


func_3893(var_39_bool, var_40_object, var_41_int)
{
	var_42_object = Obj(); var_43_object = Obj(); var_44_int = 0; var_45_object = Obj(); var_46_object = Obj(); var_47_int = 0;
	func_3880(Obj());
	var_48_object = var_45_object;
	@@var_45_object:Find(var_41_int, var_46_object);
	var_53_bool = var_46_object == 0; //@nz
	if(var_53_bool != 0) {
		var_55_int = "Can't find diary parent with id: " + var_41_int;
		Trace(var_55_int);
		var_39_bool = 0;
		return 6;
	}
	@@var_46_object:AddChild(var_40_object);
	SendWorldWndMessage((int)7);
	@@var_40_object:GetCategory(var_47_int);
	SetDiarySection(var_47_int);
	var_39_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_3126(var_64_bool, var_65_object, var_66_float)
{
	var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_bool = 0; var_75_bool = 0; var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_bool = 0; var_84_bool = 0;
	@@var_65_object:GetPosition(var_77_cvector);
	@@var_65_object:GetEyesHeight(var_76_float);
	var_85_float = GetByIndex(var_77_cvector, 1);
	var_85_float = var_85_float + var_76_float;
	SetByIndex(var_77_cvector, 1) = var_85_float;
	GetPosition(var_78_cvector);
	GetEyesHeight(var_76_float);
	var_86_float = GetByIndex(var_78_cvector, 1);
	var_86_float = var_86_float + var_76_float;
	SetByIndex(var_78_cvector, 1) = var_86_float;
	var_79_cvector = var_77_cvector - var_78_cvector;
	var_87_float = GetByIndex(var_79_cvector, 1);
	SetByIndex(var_79_cvector, 1) = (float)0;
	var_88_int = var_79_cvector | var_79_cvector;
	var_89_float = sqrt(var_88_int);
	var_79_cvector = var_79_cvector / var_89_float;
	var_80_cvector = -var_79_cvector;
	var_90_float = var_79_cvector * var_66_float;
	var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0);
	var_92_cvector = var_80_cvector ^ CVector(0.0, 1.0, 0.0);
	func_3410(var_91_cvector, var_92_cvector);
	var_100_float = var_91_cvector * (int)25;
	var_101_int = var_90_float + var_100_float;
	var_81_cvector = var_101_int - CVector(0.0, 10.0, 0.0);
	var_82_cvector = var_78_cvector + var_81_cvector;
	IsOverrideActive(var_83_bool);
	var_103_bool = var_83_bool;
	if(var_103_bool != 0) {
		var_64_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_82_cvector, var_80_cvector, (bool)1);
	var_105_float = GetByIndex(var_81_cvector, 0);
	var_106_float = GetByIndex(var_81_cvector, 2);
	Rotate(var_105_float, var_106_float);
	var_107_bool = 0;
	func_3536(var_107_bool);
	if(var_107_bool != 0) {
	} else {
		HasAnimationTrack(var_84_bool, "head");
		var_109_bool = var_84_bool;
		if(var_109_bool == 0) goto Label_3189;
		LookAsyncCamera("head");
	}
Label_3189:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_64_bool = 1;
	return 18;
	
}


func_3382(var_159_bool, var_160_string)
{
	var_161_bool = 0; var_162_bool = 0;
	var_163_bool = 0;
	func_3536(var_163_bool);
	if(var_163_bool != 0) {
		lshHasSpeech(var_162_bool, var_160_string);
		var_164_bool = var_162_bool;
		if(var_164_bool != 0) {
			lshPlaySpeech(var_160_string);
			var_159_bool = 1;
			return 2;
		}
	}
	var_159_bool = 0;
	return 2;
}


func_2871(var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0);
	var_104_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_103_float, var_104_float);
	return 0;
}


func_3642()
{
	SetVariable("ood11Block3", (int)1);
	return 0;
}


func_2876(var_34_bool)
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
	func_3094(var_41_float, var_42_object);
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


func_3648(var_72_object)
{
	Trace("rifle ammo10 is given");
	var_75_object = Obj(); var_76_string = ""; var_77_int = 0;
	var_72_object = var_75_object;
	func_3456(var_75_object, "rifle_ammo", (int)10);
	return 0;
}


func_3397()
{
	var_29_bool = 0;
	func_3536(var_29_bool);
	if(var_29_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_3659()
{
	SetVariable("ood9Block2", (int)1);
	return 0;
}


func_2635(var_0_object, var_589_int, var_590_object)
{
	var_592_object = Obj(); var_593_bool = 0; var_594_int = 0; var_595_bool = 0; var_596_object = Obj(); var_597_bool = 0; var_598_int = 0; var_599_bool = 0;
	var_0_object = var_590_object;
	var_600_bool = 0; var_601_object = Obj(); var_602_float = 0;
	var_590_object = var_601_object;
	func_3126(var_600_bool, var_601_object, (float)70.0);
	var_603_bool = var_600_bool == 0; //@nz
	if(var_603_bool != 0) {
		var_589_int = -2;
		return 8;
	}
	CreateDialog(var_596_object);
	var_604_int = 0;
	func_3530(var_604_int);
	@@var_596_object:SetNPCName(var_604_int);
	var_605_int = 0;
	func_3528(var_605_int);
	@@var_596_object:SetNPCDescription(var_605_int);
	var_606_string = "";
	func_3532(var_606_string);
	@@var_596_object:SetPhoto(var_606_string);
	var_607_string = "";
	func_3534(var_607_string);
	@@var_596_object:SetPhoto2(var_607_string);
	var_608_int = 0;
	func_3921(var_608_int);
	@@var_596_object:SetPlayerName(var_608_int);
	IsOverrideActive(var_597_bool);
	var_609_bool = var_597_bool;
	if(var_609_bool != 0) {
		var_589_int = -2;
		return 8;
	}
	DoDialog(var_596_object);
	var_610_bool = 0; var_611_object = Obj();
	func_3404(Obj());
	var_612_object = var_611_object;
	func_3213(var_610_bool, var_611_object);
	var_613_object = Obj(); var_614_object = Obj();
	var_590_object = var_613_object;
	var_596_object = var_614_object;
	TaskCall(9);
	func_2716(var_615_object, var_616_object, var_617_string, var_618_bool, var_613_object, var_614_object);
	TaskReturn();
	@@var_596_object:IsDialogEnd(var_599_bool);
	
Label_2698:
	var_643_bool = var_599_bool == 0; //@nz
	if(var_643_bool != 0) {
		sync();
		@@var_596_object:IsDialogEnd(var_599_bool);
		goto Label_2698;
	}
	var_590_object = Obj();
	func_3195();
	StopDialog(var_596_object);
	@@var_596_object:GetReturnValue((int)-1);
	var_598_int = var_589_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3404(var_127_object)
{
	var_128_object = Obj(); var_129_object = Obj();
	self(var_129_object);
	var_129_object = var_127_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_215_object, var_216_object)
{
	var_0_object = var_216_object;
	var_1_object = var_215_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_222_object = Obj(); var_223_object = Obj();
		var_222_object = var_1_object;
		var_223_object = var_0_object;
		func_3597();
		var_226_string = "";
		func_197(var_216_object, "Neutral");
		@@@var_0_object:SetMessage((int)513882);
		@@@var_0_object:ClearReplies();
		var_244_bool = 0;
		var_244_bool = 0;
		var_245_bool = 0; var_246_object = Obj();
		var_246_object = var_1_object;
		func_3675(var_246_object);
		if(var_245_bool != 0) {
			var_253_bool = 0; var_254_object = Obj();
			var_254_object = var_1_object;
			func_3687(var_254_object);
			if(var_253_bool != 0) {
				var_244_bool = 1;
			}
		}
		if(var_244_bool != 0) {
			@@@var_0_object:AddReply((int)513883, (int)15111, (int)15110);
		}
		var_262_bool = 0;
		var_262_bool = 0;
		var_263_bool = 0; var_264_object = Obj();
		var_264_object = var_1_object;
		func_3735(var_264_object);
		if(var_263_bool != 0) {
			var_269_bool = 0; var_270_object = Obj();
			var_270_object = var_1_object;
			func_3747(var_270_object);
			if(var_269_bool != 0) {
				var_262_bool = 1;
			}
		}
		if(var_262_bool != 0) {
			@@@var_0_object:AddReply((int)513906, (int)15138, (int)15137);
		}
		var_278_bool = 0; var_279_object = Obj();
		var_279_object = var_1_object;
		func_3831(var_279_object);
		if(var_278_bool != 0) {
			@@@var_0_object:AddReply((int)513924, (int)15156, (int)15155);
		}
		var_287_bool = 0; var_288_object = Obj();
		var_288_object = var_1_object;
		func_3699(var_288_object);
		if(var_287_bool != 0) {
			@@@var_0_object:AddReply((int)533537, (int)35070, (int)35069);
		}
		@@@var_0_object:AddReply((int)513947, (int)-1, (int)15182);
		goto Label_167;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_167:
	var_299_bool = 0;
	func_3536(var_299_bool);
	if(var_299_bool != 0) {

	Label_171:
		lshWaitForAnimEnd();
		var_300_string = var_3_string;
		if(var_300_string != 0) {
		} else {
			var_301_string = "";
			var_301_string = var_2_object;
			func_3351(var_301_string);
			goto Label_171;
	}
		PlayAnimation("all", "idle");

	Label_186:
		WaitForAnimEnd();
		var_314_string = var_3_string;
		if(var_314_string != 0) {
			goto Label_196;
		}
		PlayAnimation("all", "idle");
		goto Label_186;
	}
	goto Label_196;
	
Label_196:
	return 0;
	
}


func_3665(var_536_bool, var_537_object)
{
	var_538_bool = 0; var_539_object = Obj();
	var_537_object = var_539_object;
	func_3843(var_539_object);
	if(var_538_bool != 0) {
		var_536_bool = 1;
		return 0;
	}
	var_536_bool = 0;
	return 0;
}


func_3921(var_116_int)
{
	var_117_int = 0; var_118_int = 0;
	GetVariable("branch", var_118_int);
	var_121_bool = var_118_int == (int)0;
	if(var_121_bool != 0) {
		var_116_int = 1;
		return 2;
	EMIT "GOTO 0xf60";
	}
	var_123_bool = var_118_int == (int)1;
	if(var_123_bool != 0) {
		var_116_int = 2;
		return 2;
	}
	var_116_int = 3;
	return 2;
}


func_2898()
{
	var_647_float = 0; var_648_float = 0;
	rand(var_648_float, (int)8, (int)16);
	SetTimer((int)10, var_648_float);
	return 2;
}


func_3410(var_91_cvector, var_92_cvector)
{
	var_94_float = 0; var_95_float = 0;
	var_96_int = var_92_cvector | var_92_cvector;
	var_95_float = sqrt(var_96_int);
	var_97_float = 9.999999974752427e-07;
	var_98_bool = var_95_float < var_97_float;
	if(var_98_bool != 0) {
		var_91_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_91_cvector = var_92_cvector / var_95_float;
	return 2;
}


func_3675(var_245_bool)
{
	var_247_int = 0; var_248_string = "";
	func_3420(var_247_int, "d8q01");
	var_252_bool = var_247_int == (int)1000;
	if(var_252_bool != 0) {
		var_245_bool = 1;
		return 0;
	}
	var_245_bool = 0;
	return 0;
}


func_2907()
{
	KillTimer((int)10);
	return 0;
}


func_3420(var_247_int, var_248_string)
{
	var_249_int = 0; var_250_int = 0;
	GetVariable(var_248_string, var_250_int);
	var_250_int = var_247_int;
	return 2;
}


func_3425(var_63_int, var_64_int)
{
	var_65_object = Obj(); var_66_object = Obj();
	CreateIntVector(var_66_object);
	@@var_66_object:add(var_63_int);
	@@var_66_object:add(var_64_int);
	SendWorldWndMessage((int)3, var_66_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3938(var_44_object)
{
	var_45_bool = 0; var_46_int = 0;
	func_3498(var_45_bool, (int)9);
	if(var_45_bool != 0) {
		var_53_int = 0; var_54_object = Obj();
		var_44_object = var_54_object;
		TaskCall(0);
		func_0(var_55_object, var_53_int, var_54_object);
		TaskReturn();
		return 0;
	}
	var_326_bool = 0; var_327_int = 0;
	func_3498(var_326_bool, (int)10);
	if(var_326_bool != 0) {
		var_328_int = 0; var_329_object = Obj();
		var_44_object = var_329_object;
		TaskCall(4);
		func_1753(var_330_object, var_328_int, var_329_object);
		TaskReturn();
		return 0;
	}
	var_393_bool = 0; var_394_int = 0;
	func_3498(var_393_bool, (int)11);
	if(var_393_bool != 0) {
		var_395_int = 0; var_396_object = Obj();
		var_44_object = var_396_object;
		TaskCall(2);
		func_984(var_397_object, var_395_int, var_396_object);
		TaskReturn();
		return 0;
	}
	var_496_bool = 0; var_497_int = 0;
	func_3498(var_496_bool, (int)12);
	if(var_496_bool != 0) {
		var_498_int = 0; var_499_object = Obj();
		var_44_object = var_499_object;
		TaskCall(6);
		func_2161(var_500_object, var_498_int, var_499_object);
		TaskReturn();
		return 0;
	}
	var_589_int = 0; var_590_object = Obj();
	var_44_object = var_590_object;
	TaskCall(8);
	func_2635(var_591_object, var_589_int, var_590_object);
	TaskReturn();
	return 0;
}


func_3687(var_253_bool)
{
	var_255_int = 0; var_256_string = "";
	func_3420(var_255_int, "ood9Block3");
	var_258_bool = var_255_int == (int)0;
	if(var_258_bool != 0) {
		var_253_bool = 1;
		return 0;
	}
	var_253_bool = 0;
	return 0;
}


func_3437(var_52_object, var_53_object, var_54_int)
{
	var_55_int = 0; var_56_int = 0; var_57_bool = 0; var_58_int = 0; var_59_int = 0; var_60_bool = 0;
	@@var_53_object:GetItemID(var_58_int);
	GetInvItemProperty(var_59_int, var_58_int, "Category");
	@@var_52_object:AddItem(var_60_bool, var_53_object, var_59_int, var_54_int);
	var_62_bool = var_60_bool == 0; //@nz
	if(var_62_bool != 0) {
		@@var_52_object:DropItems(var_53_object, var_54_int);
	} else {
		var_63_int = 0; var_64_int = 0;
		var_58_int = var_63_int;
		var_54_int = var_64_int;
		func_3425(var_63_int, var_64_int);
	}
	return 6;
	
}


func_1902(var_2_object, var_359_string)
{
	var_360_bool = 0;
	func_3536(var_360_bool);
	var_361_bool = var_360_bool == 0; //@nz
	if(var_361_bool != 0) {
		return 0;
	}
	var_362_bool = var_359_string == var_2_object;
	if(var_362_bool != 0) {
		return 0;
	}
	var_363_string = ""; var_364_bool = 0;
	var_359_string = var_363_string;
	var_366_bool = var_359_string == "";
	if(var_366_bool != 0) {
		var_364_bool = 0;
	} else {
		var_364_bool = 1;
	}
	func_3367(var_363_string, var_364_bool);
	var_2_object = var_359_string;
	return 0;
	
}


func_2161(var_0_object, var_498_int, var_499_object)
{
	var_501_object = Obj(); var_502_bool = 0; var_503_int = 0; var_504_bool = 0; var_505_object = Obj(); var_506_bool = 0; var_507_int = 0; var_508_bool = 0;
	var_0_object = var_499_object;
	var_509_bool = 0; var_510_object = Obj(); var_511_float = 0;
	var_499_object = var_510_object;
	func_3126(var_509_bool, var_510_object, (float)70.0);
	var_512_bool = var_509_bool == 0; //@nz
	if(var_512_bool != 0) {
		var_498_int = -2;
		return 8;
	}
	CreateDialog(var_505_object);
	var_513_int = 0;
	func_3530(var_513_int);
	@@var_505_object:SetNPCName(var_513_int);
	var_514_int = 0;
	func_3528(var_514_int);
	@@var_505_object:SetNPCDescription(var_514_int);
	var_515_string = "";
	func_3532(var_515_string);
	@@var_505_object:SetPhoto(var_515_string);
	var_516_string = "";
	func_3534(var_516_string);
	@@var_505_object:SetPhoto2(var_516_string);
	var_517_int = 0;
	func_3921(var_517_int);
	@@var_505_object:SetPlayerName(var_517_int);
	IsOverrideActive(var_506_bool);
	var_518_bool = var_506_bool;
	if(var_518_bool != 0) {
		var_498_int = -2;
		return 8;
	}
	DoDialog(var_505_object);
	var_519_bool = 0; var_520_object = Obj();
	func_3404(Obj());
	var_521_object = var_520_object;
	func_3213(var_519_bool, var_520_object);
	var_522_object = Obj(); var_523_object = Obj();
	var_499_object = var_522_object;
	var_505_object = var_523_object;
	TaskCall(7);
	func_2242(var_524_object, var_525_object, var_526_string, var_527_bool, var_522_object, var_523_object);
	TaskReturn();
	@@var_505_object:IsDialogEnd(var_508_bool);
	
Label_2224:
	var_587_bool = var_508_bool == 0; //@nz
	if(var_587_bool != 0) {
		sync();
		@@var_505_object:IsDialogEnd(var_508_bool);
		goto Label_2224;
	}
	var_499_object = Obj();
	func_3195();
	StopDialog(var_505_object);
	@@var_505_object:GetReturnValue((int)-1);
	var_507_int = var_498_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3699(var_287_bool)
{
	var_289_int = 0; var_290_string = "";
	func_3420(var_289_int, "d9q02");
	var_292_bool = var_289_int == (int)1;
	if(var_292_bool != 0) {
		var_287_bool = 1;
		return 0;
	}
	var_287_bool = 0;
	return 0;
}


func_3195()
{
	var_319_bool = 0; var_320_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_322_bool = 0;
	func_3536(var_322_bool);
	if(var_322_bool != 0) {
	} else {
		HasAnimationTrack(var_320_bool, "head");
		var_324_bool = var_320_bool;
		if(var_324_bool == 0) goto Label_3212;
		UnlookAsync("head");
	}
Label_3212:
	return 2;
	
}


func_3711(var_368_bool)
{
	var_370_int = 0; var_371_string = "";
	func_3420(var_370_int, "d10q03");
	var_373_bool = var_370_int == (int)3;
	if(var_373_bool != 0) {
		var_368_bool = 1;
		return 0;
	}
	var_368_bool = 0;
	return 0;
}


func_3456(var_75_object, var_76_string, var_77_int)
{
	var_78_object = Obj(); var_79_object = Obj();
	CreateInvItem(var_79_object);
	@@var_79_object:SetItemName(var_76_string);
	var_80_object = Obj(); var_81_object = Obj(); var_82_int = 0;
	var_75_object = var_80_object;
	var_79_object = var_81_object;
	var_77_int = var_82_int;
	func_3437(var_80_object, var_81_object, var_82_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3723(var_530_bool)
{
	var_532_int = 0; var_533_string = "";
	func_3420(var_532_int, "ood12Block1");
	var_535_bool = var_532_int == (int)0;
	if(var_535_bool != 0) {
		var_530_bool = 1;
		return 0;
	}
	var_530_bool = 0;
	return 0;
}


func_3213(var_125_bool, var_126_object)
{
	var_130_int = 0; var_131_int = 0; var_132_int = 0; var_133_int = 0;
	GetVariable("voice_common", var_132_int);
	var_135_int = var_132_int;
	if(var_135_int != 0) {
		var_136_bool = 0; var_137_object = Obj();
		var_126_object = var_137_object;
		func_3271(var_136_bool, var_137_object);
		var_166_bool = var_136_bool == 0; //@nz
		if(var_166_bool != 0) {
			var_167_bool = 0; var_168_object = Obj();
			var_126_object = var_168_object;
			func_3308(var_167_bool, var_168_object);
			var_197_bool = var_167_bool == 0; //@nz
			if(var_197_bool != 0) {
				var_125_bool = 0;
				return 4;
			}
		}
		irand(var_133_int, (int)2);
		var_199_int = var_133_int;
		if(var_199_int != 0) {
			var_202_int = var_132_int + (int)1;
			var_204_int = var_202_int % (int)3;
			SetVariable("voice_common", var_204_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_207_bool = 0; var_208_object = Obj();
		var_126_object = var_208_object;
		func_3308(var_207_bool, var_208_object);
		var_209_bool = var_207_bool == 0; //@nz
		if(var_209_bool != 0) {
			var_210_bool = 0; var_211_object = Obj();
			var_126_object = var_211_object;
			func_3271(var_210_bool, var_211_object);
			var_212_bool = var_210_bool == 0; //@nz
			if(var_212_bool != 0) {
				var_125_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_3269;
	
Label_3269:
	var_125_bool = 1;
	return 4;
	
}


func_3469(var_57_bool, var_58_string, var_59_string)
{
	var_60_object = Obj(); var_61_object = Obj();
	FindActor(var_61_object, var_58_string);
	var_62_bool = var_61_object == 0; //@ne
	if(var_62_bool != 0) {
		var_57_bool = 0;
		return 2;
	}
	Trigger(var_61_object, var_59_string);
	var_57_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3735(var_263_bool)
{
	var_265_int = 0; var_266_string = "";
	func_3420(var_265_int, "d9q01");
	var_268_bool = var_265_int == (int)2;
	if(var_268_bool != 0) {
		var_263_bool = 1;
		return 0;
	}
	var_263_bool = 0;
	return 0;
}


func_1175(var_2_object, var_426_string)
{
	var_427_bool = 0;
	func_3536(var_427_bool);
	var_428_bool = var_427_bool == 0; //@nz
	if(var_428_bool != 0) {
		return 0;
	}
	var_429_bool = var_426_string == var_2_object;
	if(var_429_bool != 0) {
		return 0;
	}
	var_430_string = ""; var_431_bool = 0;
	var_426_string = var_430_string;
	var_433_bool = var_426_string == "";
	if(var_433_bool != 0) {
		var_431_bool = 0;
	} else {
		var_431_bool = 1;
	}
	func_3367(var_430_string, var_431_bool);
	var_2_object = var_426_string;
	return 0;
	
}


func_3481(var_47_int)
{
	var_48_float = 0; var_49_float = 0;
	GetGameTime(var_49_float);
	var_51_int = 0;
	var_51_int = var_49_float / (int)24;
	var_47_int = (int)1 + var_51_int;
	return 2;
}


func_2716(var_0_object, var_1_object, var_2_object, var_3_string, var_613_object, var_614_object)
{
	var_0_object = var_614_object;
	var_1_object = var_613_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_620_string = "";
		func_2774(var_614_object, "Neutral");
		@@@var_0_object:SetMessage((int)540542);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540543, (int)-1, (int)42552);
		@@@var_0_object:AddReply((int)540796, (int)-1, (int)42845);
		goto Label_2744;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xaa0";
	}
Label_2744:
	var_635_bool = 0;
	func_3536(var_635_bool);
	if(var_635_bool != 0) {

	Label_2748:
		lshWaitForAnimEnd();
		var_636_string = var_3_string;
		if(var_636_string != 0) {
		} else {
			var_637_string = "";
			var_637_string = var_2_object;
			func_3351(var_637_string);
			goto Label_2748;
	}
		PlayAnimation("all", "idle");

	Label_2763:
		WaitForAnimEnd();
		var_640_string = var_3_string;
		if(var_640_string != 0) {
			goto Label_2773;
		}
		PlayAnimation("all", "idle");
		goto Label_2763;
	}
	goto Label_2773;
	
Label_2773:
	return 0;
	
}


func_3490(var_540_int)
{
	var_541_float = 0; var_542_float = 0;
	GetGameTime(var_542_float);
	var_543_int = 0;
	var_542_float = var_543_int;
	var_540_int = var_543_int % (int)24;
	return 2;
}


func_3747(var_269_bool)
{
	var_271_int = 0; var_272_string = "";
	func_3420(var_271_int, "ood9Block1");
	var_274_bool = var_271_int == (int)0;
	if(var_274_bool != 0) {
		var_269_bool = 1;
		return 0;
	}
	var_269_bool = 0;
	return 0;
}


func_3498(var_45_bool, var_46_int)
{
	var_47_int = 0;
	func_3481(var_47_int);
	var_45_bool = var_47_int == var_46_int;
	return 0;
}


func_3759(var_468_bool)
{
	var_470_int = 0; var_471_string = "";
	func_3420(var_470_int, "d11q02");
	var_473_bool = var_470_int == (int)1;
	if(var_473_bool != 0) {
		var_468_bool = 1;
		return 0;
	}
	var_468_bool = 0;
	return 0;
}


func_3504(var_50_string, var_51_int)
{
	var_52_string = ""; var_53_string = "";
	var_54_int = var_51_int;
	if(var_54_int != 0) {
		"idle" = "idle" + var_51_int;
	}
	var_53_string = var_50_string;
	return 2;
}


func_3511(var_44_int)
{
	var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_bool = 0;
	var_47_int = 0;
	
Label_3513:
	var_50_string = ""; var_51_int = 0;
	var_47_int = var_51_int;
	func_3504(var_50_string, var_51_int);
	HasAnimation(var_48_bool, "all", var_50_string);
	var_55_bool = var_48_bool == 0; //@nz
	if(var_55_bool != 0) {
	} else {
		var_47_int = var_47_int + (int)1;
		goto Label_3513;
	}
	var_47_int = var_44_int;
	return 4;
	
}


func_3771(var_436_bool)
{
	var_438_int = 0; var_439_string = "";
	func_3420(var_438_int, "d11q01");
	var_441_bool = var_438_int == (int)2;
	if(var_441_bool != 0) {
		var_436_bool = 1;
		return 0;
	}
	var_436_bool = 0;
	return 0;
}


func_2242(var_0_object, var_1_object, var_2_object, var_3_string, var_522_object, var_523_object)
{
	var_0_object = var_523_object;
	var_1_object = var_522_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_529_bool = 0;
		var_529_bool = 0;
		var_530_bool = 0; var_531_object = Obj();
		var_531_object = var_1_object;
		func_3723(var_531_object);
		if(var_530_bool != 0) {
			var_536_bool = 0; var_537_object = Obj();
			var_537_object = var_1_object;
			func_3665(var_536_bool, var_537_object);
			var_547_bool = var_536_bool == 0; //@nz
			if(var_547_bool != 0) {
				var_529_bool = 1;
			}
		}
		if(var_529_bool != 0) {
			var_548_object = Obj(); var_549_object = Obj();
			var_548_object = var_1_object;
			var_549_object = var_0_object;
			func_3585();
			var_552_string = "";
			func_2355(var_523_object, "Neutral");
			@@@var_0_object:SetMessage((int)535510);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535511, (int)37194, (int)37193);
		} else {
				var_572_bool = 0; var_573_object = Obj();
				var_573_object = var_1_object;
				func_3665(var_572_bool, var_573_object);
				if(var_572_bool != 0) {
					var_574_string = "";
					func_2355(var_523_object, "Neutral");
					@@@var_0_object:SetMessage((int)535528);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)535529, (int)-1, (int)37212);
					@@@var_0_object:AddReply((int)535530, (int)-1, (int)37213);
					goto Label_2325;
				}
				var_582_string = "";
				func_2355(var_523_object, "Neutral");
				@@@var_0_object:SetMessage((int)535531);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)535539, (int)-1, (int)37222);
				goto Label_2325;
		}
	}
Label_2325:
	var_564_bool = 0;
	func_3536(var_564_bool);
	if(var_564_bool != 0) {

	Label_2329:
		lshWaitForAnimEnd();
		var_565_string = var_3_string;
		if(var_565_string != 0) {
		} else {
			var_566_string = "";
			var_566_string = var_2_object;
			func_3351(var_566_string);
			goto Label_2329;
	}
		PlayAnimation("all", "idle");

	Label_2344:
		WaitForAnimEnd();
		var_569_string = var_3_string;
		if(var_569_string != 0) {
			goto Label_2354;
		}
		PlayAnimation("all", "idle");
		goto Label_2344;

	}
	goto Label_2354;
	
Label_2354:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x8c6";


func_197(var_2_object, var_226_string)
{
	var_227_bool = 0;
	func_3536(var_227_bool);
	var_228_bool = var_227_bool == 0; //@nz
	if(var_228_bool != 0) {
		return 0;
	}
	var_229_bool = var_226_string == var_2_object;
	if(var_229_bool != 0) {
		return 0;
	}
	var_230_string = ""; var_231_bool = 0;
	var_226_string = var_230_string;
	var_233_bool = var_226_string == "";
	if(var_233_bool != 0) {
		var_231_bool = 0;
	} else {
		var_231_bool = 1;
	}
	func_3367(var_230_string, var_231_bool);
	var_2_object = var_226_string;
	return 0;
	
}


func_3783(var_442_bool)
{
	var_444_int = 0; var_445_string = "";
	func_3420(var_444_int, "ood11Block1");
	var_447_bool = var_444_int == (int)0;
	if(var_447_bool != 0) {
		var_442_bool = 1;
		return 0;
	}
	var_442_bool = 0;
	return 0;
}


func_3271(var_136_bool, var_137_object)
{
	var_138_string = ""; var_139_int = 0; var_140_bool = 0; var_141_int = 0; var_142_string = ""; var_143_string = ""; var_144_int = 0; var_145_bool = 0; var_146_int = 0; var_147_string = "";
	var_143_string = "c";
	var_144_int = 0;
	
Label_3274:
	if((int)1 != 0) {
		var_150_int = var_144_int + (int)1;
		var_151_int = var_143_string + var_150_int;
		@@var_137_object:HasProperty(var_151_int, var_145_bool);
		var_152_bool = var_145_bool == 0; //@nz
		if(var_152_bool != 0) {
		} else {
			var_144_int = var_144_int + (int)1;
			goto Label_3274;
		}
	}
	var_153_bool = var_144_int == 0; //@nz
	if(var_153_bool != 0) {
		var_136_bool = 0;
		return 10;
	}
	var_146_int = 0;
	var_155_bool = var_144_int > (int)1;
	if(var_155_bool != 0) {
		irand(var_146_int, var_144_int);
	}
	var_157_int = var_146_int + (int)1;
	var_158_int = var_143_string + var_157_int;
	@@var_137_object:GetProperty(var_158_int, var_147_string);
	var_159_bool = 0; var_160_string = "";
	var_147_string = var_160_string;
	func_3382(var_159_bool, var_160_string);
	var_159_bool = var_136_bool;
	return 10;
	
}


func_3528(var_113_int)
{
	var_113_int = 515532;
	return 0;
}


func_3530(var_112_int)
{
	var_112_int = 514840;
	return 0;
}


func_3018()
{
	var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0;
	WaitForAnimEnd();
	var_42_bool = 0;
	func_3121(var_42_bool);
	var_43_bool = var_42_bool == 0; //@nz
	if(var_43_bool != 0) {
		return 12;
	}
	func_3511((int)0);
	var_44_int = var_36_int;
	var_37_int = 0;
	
Label_3032:
	var_57_bool = 0;
	var_57_bool = 0;
	var_59_bool = var_37_int < (int)5;
	if(var_59_bool != 0) {
		var_60_bool = 0;
		func_3121(var_60_bool);
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
				func_3504(var_71_string, var_72_int);
				PlayAnimation("all", var_71_string);
				WaitForAnimEnd(var_41_bool);
				var_73_bool = var_41_bool == 0; //@nz
				if(var_73_bool == 0) goto Label_3073;
				goto Label_3084;
		}
		Label_3073:
			var_64_bool = 0;
			func_3087(var_64_bool);
			var_65_bool = var_64_bool == 0; //@nz
			if(var_65_bool != 0) {
				goto Label_3084;
			}
			ResetAAS();
			var_37_int = var_37_int + (int)1;
			goto Label_3032;

		}
	}
Label_3084:
	ResetAAS();
	return 12;
	
}


func_3532(var_114_string)
{
	var_114_string = "ui/NPC_Block.png";
	return 0;
}


func_3534(var_115_string)
{
	var_115_string = "ui/NPC_Block_b.png";
	return 0;
}


func_3536(var_107_bool)
{
	var_107_bool = 1;
	return 0;
}


func_3538()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_3795(var_452_bool)
{
	var_454_int = 0; var_455_string = "";
	func_3420(var_454_int, "d11q01");
	var_457_bool = var_454_int >= (int)3;
	if(var_457_bool != 0) {
		var_452_bool = 1;
		return 0;
	}
	var_452_bool = 0;
	return 0;
}


func_2774(var_2_object, var_620_string)
{
	var_621_bool = 0;
	func_3536(var_621_bool);
	var_622_bool = var_621_bool == 0; //@nz
	if(var_622_bool != 0) {
		return 0;
	}
	var_623_bool = var_620_string == var_2_object;
	if(var_623_bool != 0) {
		return 0;
	}
	var_624_string = ""; var_625_bool = 0;
	var_620_string = var_624_string;
	var_627_bool = var_620_string == "";
	if(var_627_bool != 0) {
		var_625_bool = 0;
	} else {
		var_625_bool = 1;
	}
	func_3367(var_624_string, var_625_bool);
	var_2_object = var_620_string;
	return 0;
	
}


func_3544()
{
	SetVariable("ood9Block3", (int)1);
	return 0;
}


func_1753(var_0_object, var_328_int, var_329_object)
{
	var_331_object = Obj(); var_332_bool = 0; var_333_int = 0; var_334_bool = 0; var_335_object = Obj(); var_336_bool = 0; var_337_int = 0; var_338_bool = 0;
	var_0_object = var_329_object;
	var_339_bool = 0; var_340_object = Obj(); var_341_float = 0;
	var_329_object = var_340_object;
	func_3126(var_339_bool, var_340_object, (float)70.0);
	var_342_bool = var_339_bool == 0; //@nz
	if(var_342_bool != 0) {
		var_328_int = -2;
		return 8;
	}
	CreateDialog(var_335_object);
	var_343_int = 0;
	func_3530(var_343_int);
	@@var_335_object:SetNPCName(var_343_int);
	var_344_int = 0;
	func_3528(var_344_int);
	@@var_335_object:SetNPCDescription(var_344_int);
	var_345_string = "";
	func_3532(var_345_string);
	@@var_335_object:SetPhoto(var_345_string);
	var_346_string = "";
	func_3534(var_346_string);
	@@var_335_object:SetPhoto2(var_346_string);
	var_347_int = 0;
	func_3921(var_347_int);
	@@var_335_object:SetPlayerName(var_347_int);
	IsOverrideActive(var_336_bool);
	var_348_bool = var_336_bool;
	if(var_348_bool != 0) {
		var_328_int = -2;
		return 8;
	}
	DoDialog(var_335_object);
	var_349_bool = 0; var_350_object = Obj();
	func_3404(Obj());
	var_351_object = var_350_object;
	func_3213(var_349_bool, var_350_object);
	var_352_object = Obj(); var_353_object = Obj();
	var_329_object = var_352_object;
	var_335_object = var_353_object;
	TaskCall(5);
	func_1834(var_354_object, var_355_object, var_356_string, var_357_bool, var_352_object, var_353_object);
	TaskReturn();
	@@var_335_object:IsDialogEnd(var_338_bool);
	
Label_1816:
	var_391_bool = var_338_bool == 0; //@nz
	if(var_391_bool != 0) {
		sync();
		@@var_335_object:IsDialogEnd(var_338_bool);
		goto Label_1816;
	}
	var_329_object = Obj();
	func_3195();
	StopDialog(var_335_object);
	@@var_335_object:GetReturnValue((int)-1);
	var_337_int = var_328_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_984(var_0_object, var_395_int, var_396_object)
{
	var_398_object = Obj(); var_399_bool = 0; var_400_int = 0; var_401_bool = 0; var_402_object = Obj(); var_403_bool = 0; var_404_int = 0; var_405_bool = 0;
	var_0_object = var_396_object;
	var_406_bool = 0; var_407_object = Obj(); var_408_float = 0;
	var_396_object = var_407_object;
	func_3126(var_406_bool, var_407_object, (float)70.0);
	var_409_bool = var_406_bool == 0; //@nz
	if(var_409_bool != 0) {
		var_395_int = -2;
		return 8;
	}
	CreateDialog(var_402_object);
	var_410_int = 0;
	func_3530(var_410_int);
	@@var_402_object:SetNPCName(var_410_int);
	var_411_int = 0;
	func_3528(var_411_int);
	@@var_402_object:SetNPCDescription(var_411_int);
	var_412_string = "";
	func_3532(var_412_string);
	@@var_402_object:SetPhoto(var_412_string);
	var_413_string = "";
	func_3534(var_413_string);
	@@var_402_object:SetPhoto2(var_413_string);
	var_414_int = 0;
	func_3921(var_414_int);
	@@var_402_object:SetPlayerName(var_414_int);
	IsOverrideActive(var_403_bool);
	var_415_bool = var_403_bool;
	if(var_415_bool != 0) {
		var_395_int = -2;
		return 8;
	}
	DoDialog(var_402_object);
	var_416_bool = 0; var_417_object = Obj();
	func_3404(Obj());
	var_418_object = var_417_object;
	func_3213(var_416_bool, var_417_object);
	var_419_object = Obj(); var_420_object = Obj();
	var_396_object = var_419_object;
	var_402_object = var_420_object;
	TaskCall(3);
	func_1065(var_421_object, var_422_object, var_423_string, var_424_bool, var_419_object, var_420_object);
	TaskReturn();
	@@var_402_object:IsDialogEnd(var_405_bool);
	
Label_1047:
	var_494_bool = var_405_bool == 0; //@nz
	if(var_494_bool != 0) {
		sync();
		@@var_402_object:IsDialogEnd(var_405_bool);
		goto Label_1047;
	}
	var_396_object = Obj();
	func_3195();
	StopDialog(var_402_object);
	@@var_402_object:GetReturnValue((int)-1);
	var_404_int = var_395_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3550()
{
	SetVariable("d9q02", (int)2);
	func_3867();
	var_126_bool = 0; var_127_string = ""; var_128_string = "";
	func_3469(var_126_bool, "quest_d9_02", "init_soldiers");
	return 0;
}


func_3807(var_458_bool)
{
	var_460_int = 0; var_461_string = "";
	func_3420(var_460_int, "ood11Block2");
	var_463_bool = var_460_int == (int)0;
	if(var_463_bool != 0) {
		var_458_bool = 1;
		return 0;
	}
	var_458_bool = 0;
	return 0;
}


func_3819(var_474_bool)
{
	var_476_int = 0; var_477_string = "";
	func_3420(var_476_int, "ood11Block3");
	var_479_bool = var_476_int == (int)0;
	if(var_479_bool != 0) {
		var_474_bool = 1;
		return 0;
	}
	var_474_bool = 0;
	return 0;
}


func_3308(var_167_bool, var_168_object)
{
	var_169_string = ""; var_170_int = 0; var_171_bool = 0; var_172_int = 0; var_173_string = ""; var_174_string = ""; var_175_int = 0; var_176_bool = 0; var_177_int = 0; var_178_string = "";
	var_180_int = 0;
	func_3481(var_180_int);
	var_181_int = "d" + var_180_int;
	var_174_string = var_181_int + "m";
	var_175_int = 0;
	
Label_3317:
	if((int)1 != 0) {
		var_185_int = var_175_int + (int)1;
		var_186_int = var_174_string + var_185_int;
		@@var_168_object:HasProperty(var_186_int, var_176_bool);
		var_187_bool = var_176_bool == 0; //@nz
		if(var_187_bool != 0) {
		} else {
			var_175_int = var_175_int + (int)1;
			goto Label_3317;
		}
	}
	var_188_bool = var_175_int == 0; //@nz
	if(var_188_bool != 0) {
		var_167_bool = 0;
		return 10;
	}
	var_177_int = 0;
	var_190_bool = var_175_int > (int)1;
	if(var_190_bool != 0) {
		irand(var_177_int, var_175_int);
	}
	var_192_int = var_177_int + (int)1;
	var_193_int = var_174_string + var_192_int;
	@@var_168_object:GetProperty(var_193_int, var_178_string);
	var_194_bool = 0; var_195_string = "";
	var_178_string = var_195_string;
	func_3382(var_194_bool, var_195_string);
	var_194_bool = var_167_bool;
	return 10;
	
}


func_3564()
{
	SetVariable("d9LaraIsSaved", (int)1);
	return 0;
}


func_3570()
{
	func_3854();
	var_57_bool = 0; var_58_string = ""; var_59_string = "";
	func_3469(var_57_bool, "quest_d10_03", "place_sanitars");
	var_63_bool = 0; var_64_string = ""; var_65_string = "";
	func_3469(var_63_bool, "quest_d10_03", "completed");
	return 0;
}


func_3831(var_278_bool)
{
	var_280_int = 0; var_281_string = "";
	func_3420(var_280_int, "ood9Block2");
	var_283_bool = var_280_int == (int)0;
	if(var_283_bool != 0) {
		var_278_bool = 1;
		return 0;
	}
	var_278_bool = 0;
	return 0;
}


