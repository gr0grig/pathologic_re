// @IMPORTS: Hold/0,StopGroup0/0,sync/0,SetTimer/2,MovePoint/3,KillTimer/1,WaitForAnimEnd/1,Rotate/3,IsOverrideActive/1,IsPlayerActor/2,FindActor/2,Stop/0,Sleep/1,StopAnimation/0,HasProperty/2,GetProperty/2,irand/2,PlayAnimation/2,WaitForAnimEnd/0,HasAnimation/3,CreateDialog/1,DoDialog/1,StopDialog/1,lshWaitForAnimEnd/0,lshStopAnimation/0,SensePlayerOnly/1,GetScene/1,GetHeight/1,CanReachByPF/2,GetAnimationOffset/3,GetPosition/1,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,SendWorldWndMessage/1,CreateFloatVector/1,GetGameTime/1,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: W:player|W:ptidle|W:all|A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:Untrust|W:Sly|W:Fear|W:Rage|A:GetLocator|W:loc|W:walk_stopl|W:walk_stopr|A:GetPosition|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:m|W:Can't find lsh animation : |A:add|W:money|W:Money|W:reputation|W:pt_|W:ui/NPC_MladVlad.png|W:ui/NPC_MladVlad_b.png|W:k2q01|W:k2q01MladVladGotoOspina|W:pt_map_ospina|A:AddMark|W:ook2MladVlad1|W:k2q04|W:k2q04MladVladGotoAnna|W:pt_map_anna|W:ook2MladVlad2|W:alpha_pills|A:RemoveItemByType|W:beta_pills|W:ook3MladVlad1|W:ook5MladVlad1|W:k6q02|W:money1000 is given|W:money500 is given|W:playsound|W:givemoney|W:ook5MladVlad2|A:ShowMap|W:k3q01|W:k5q01|W:k6q01|A:GetItemCountOfType|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:string:,1:object:,2:bool:
// @RUN_OP: 0xe7a
// @RUN_TASK: 18
// @TASK_0: vars= params=0
// @EVENT_5: op=0x8 vars=
// @TASK_1: vars=bool params=3
// @EVENT_6: op=0x38 vars=
// @EVENT_0: op=0x45 vars=object
// @EVENT_10: op=0x59 vars=object
// @EVENT_7: op=0x6d vars=int
// @TASK_2: vars= params=1
// @EVENT_6: op=0xa2 vars=
// @EVENT_0: op=0xae vars=object
// @TASK_3: vars= params=1
// @EVENT_6: op=0xf7 vars=
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x231 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x710 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x8ec vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9eb vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb87 vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0xd52 vars=int,int
// @TASK_16: vars=object params=2
// @TASK_17: vars=object,object,string,bool params=2
// @EVENT_11: op=0xe50 vars=int,int
// @TASK_18: vars=float,float,int params=0
// @EVENT_6: op=0xef7 vars=
// @EVENT_0: op=0xf00 vars=object
// @STANDALONE_EVENT_6: op=0x1136 vars=
// @PE: 0xa2,0xf7,0x100,0x16b,0x21b,0x231,0x6b2,0x6fa,0x710,0x89c,0x8d6,0x8ec,0x97e,0x9d5,0x9eb,0xb23,0xb71,0xb87,0xcfd,0xd3c,0xd52,0xe00,0xe3a,0xe50,0xef7,0x108f,0x1097,0x10a2,0x10d0,0x110b,0x1129,0x1141,0x115f,0x117f,0x1196,0x119f,0x11a8,0x11b1,0x11b7,0x11bd,0x11c2,0x11cb,0x11d5,0x11df,0x11e5,0x11ec,0x11f3,0x11f9,0x1209,0x1215,0x1221,0x122d,0x1239,0x1243,0x124f,0x125b,0x1267,0x1273,0x127f,0x128b,0x1297,0x12a3,0x13a3

task_0_event_5(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_float, var_37_float, var_38_int)
{
	StopGroup0();
	sync();
	return 0;
}


task_1_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_float, var_37_float, var_38_int)
{
	var_0_bool = true;
	func_145();
	func_4406();
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_1_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_float, var_38_float, var_39_int)
{
	var_40_bool = 0; var_41_bool = 0;
	IsOverrideActive(var_41_bool);
	var_42_bool = var_41_bool == 0; //@nz
	if(var_42_bool != 0) {
		func_145();
		EventDisable(0);
		var_43_bool = 0; var_44_object = Obj();
		var_39_int = var_44_object;
		func_3920(var_43_bool, var_44_object);
		EventEnable(0);
		var_57_object = Obj();
		var_39_int = var_57_object;
		func_5027(var_57_object);
		var_0_bool = false;
	}
	return 2;
}


	task_1_event_10(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_float, var_38_float, var_39_int, var_40_object, var_41_object, var_61_object)
	{
	var_62_bool = 0; var_63_bool = 0;
	IsPlayerActor(var_61_object, var_63_bool);
	var_64_bool = var_63_bool;
	if(var_64_bool != 0) {
		func_145();
		var_65_object = Obj();
		var_61_object = var_65_object;
		TaskCall(2);
		func_148(var_65_object);
		TaskReturn();
		var_0_bool = false;
		var_79_int = 20;
		var_80_float = 10.0;
		SetTimer(var_79_int, var_80_float);
	}
	return 2;
	}


task_1_event_7(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_float, var_38_float, var_39_int)
{
	var_40_object = Obj(); var_41_object = Obj();
	var_43_bool = var_39_int == (int)20;
	if(var_43_bool != 0) {
		var_0_bool = true;
		KillTimer((int)20);
	} else {
		var_46_bool = var_39_int == (int)21;
		if(var_46_bool == 0) goto Label_144;
		var_47_bool = var_0_bool;
		if(var_47_bool == 0) goto Label_144;
		FindActor(var_41_object, "player");
		var_49_bool = 0;
		var_49_bool = 0;
		var_50_object = var_41_object;
		if(var_50_object != 0) {
			var_51_float = 0; var_52_object = Obj();
			var_41_object = var_52_object;
			func_3861(var_51_float, var_52_object);
			var_60_bool = var_51_float <= (float)62500.0;
			if(var_60_bool != 0) {
				var_49_bool = 1;
			}
		}
		if(var_49_bool != 0) {
			var_41_object = Obj();
			func_89();
		}
		var_41_object = 0;
	}
Label_144:
	return 2;
	
}


task_2_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_float, var_37_float, var_38_int)
{
	func_193();
	func_4406();
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_2_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_float, var_38_float, var_39_int)
{
	var_40_bool = 0; var_41_bool = 0;
	IsOverrideActive(var_41_bool);
	var_42_bool = var_41_bool == 0; //@nz
	if(var_42_bool != 0) {
		func_193();
		EventDisable(0);
		var_43_bool = 0; var_44_object = Obj();
		var_39_int = var_44_object;
		func_3920(var_43_bool, var_44_object);
		EventEnable(0);
		var_57_object = Obj();
		var_39_int = var_57_object;
		func_5027(var_57_object);
	}
	return 2;
}


task_3_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_float, var_37_float, var_38_int)
{
	func_4406();
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_5_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_float, var_39_float, var_40_int)
{
	if((int)1 != 0) {
		func_4216();
		var_44_bool = var_40_int == (int)26708;
		if(var_44_bool != 0) {
			var_45_object = Obj(); var_46_object = Obj();
			var_45_object = var_1_object;
			var_46_object = var_0_bool;
			func_4453();
			var_96_object = Obj(); var_97_object = Obj();
			var_96_object = var_1_object;
			var_97_object = var_0_bool;
			func_4601(var_97_object);
		}
		var_123_bool = var_40_int == (int)44290;
		if(var_123_bool != 0) {
			var_124_object = Obj(); var_125_object = Obj();
			var_124_object = var_1_object;
			var_125_object = var_0_bool;
			func_4417(var_125_object);
		}
		var_165_bool = var_40_int == (int)44277;
		if(var_165_bool != 0) {
			var_166_object = Obj(); var_167_object = Obj();
			var_166_object = var_1_object;
			var_167_object = var_0_bool;
			func_4581(var_167_object);
		}
		var_172_bool = var_40_int == (int)26610;
		if(var_172_bool != 0) {
			var_173_object = Obj(); var_174_object = Obj();
			var_173_object = var_1_object;
			var_174_object = var_0_bool;
			func_4424();
		}
		var_194_bool = var_40_int == (int)44473;
		if(var_194_bool != 0) {
			var_195_object = Obj(); var_196_object = Obj();
			var_195_object = var_1_object;
			var_196_object = var_0_bool;
			func_4424();
		}
		var_198_bool = var_40_int == (int)26740;
		if(var_198_bool != 0) {
			var_199_object = Obj(); var_200_object = Obj();
			var_199_object = var_1_object;
			var_200_object = var_0_bool;
			func_4479();
		}
		var_204_bool = var_40_int == (int)26739;
		if(var_204_bool != 0) {
			var_205_object = Obj(); var_206_object = Obj();
			var_205_object = var_1_object;
			var_206_object = var_0_bool;
			func_4485(var_206_object);
			var_223_object = Obj(); var_224_object = Obj();
			var_223_object = var_1_object;
			var_224_object = var_0_bool;
			func_4565(var_224_object);
			var_244_object = Obj(); var_245_object = Obj();
			var_244_object = var_1_object;
			var_245_object = var_0_bool;
			func_4575();
		}
		var_249_bool = var_40_int == (int)26751;
		if(var_249_bool != 0) {
			var_250_object = Obj(); var_251_object = Obj();
			var_250_object = var_1_object;
			var_251_object = var_0_bool;
			func_4502();
			var_262_object = Obj(); var_263_object = Obj();
			var_262_object = var_1_object;
			var_263_object = var_0_bool;
			func_4417(var_263_object);
		}
		var_265_bool = var_40_int == (int)26748;
		if(var_265_bool != 0) {
			var_266_object = Obj(); var_267_object = Obj();
			var_266_object = var_1_object;
			var_267_object = var_0_bool;
			func_4511();
			var_278_object = Obj(); var_279_object = Obj();
			var_278_object = var_1_object;
			var_279_object = var_0_bool;
			func_4555(var_279_object);
			var_283_object = Obj(); var_284_object = Obj();
			var_283_object = var_1_object;
			var_284_object = var_0_bool;
			func_4575();
		}
		var_286_bool = var_40_int == (int)26746;
		if(var_286_bool != 0) {
			var_287_object = Obj(); var_288_object = Obj();
			var_287_object = var_1_object;
			var_288_object = var_0_bool;
			func_4520();
			var_299_object = Obj(); var_300_object = Obj();
			var_299_object = var_1_object;
			var_300_object = var_0_bool;
			func_4588(var_300_object);
		}
		var_305_bool = var_39_float == (int)26705;
		if(var_305_bool != 0) {
			var_306_bool = 0;
			var_306_bool = 0;
			var_307_bool = 0; var_308_object = Obj();
			var_308_object = var_1_object;
			func_4629(var_308_object);
			if(var_307_bool != 0) {
				var_315_bool = 0; var_316_object = Obj();
				var_316_object = var_1_object;
				func_4617(var_316_object);
				var_321_bool = var_315_bool == 0; //@nz
				if(var_321_bool != 0) {
					var_306_bool = 1;
				}
			}
			if(var_306_bool != 0) {
				var_322_object = Obj(); var_323_object = Obj();
				var_322_object = var_1_object;
				var_323_object = var_0_bool;
				func_4447();
				var_326_string = "";
				func_539(var_40_int, "Neutral");
				@@@var_0_bool:SetMessage((int)525337);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)525338, (int)44250, (int)26706);
				@@@var_0_bool:AddReply((int)539465, (int)44260, (int)41388);
				return 0;
			}
			var_350_string = "";
			func_539(var_40_int, "Neutral");
			@@@var_0_bool:SetMessage((int)525237);
			@@@var_0_bool:ClearReplies();
			var_352_bool = 0; var_353_object = Obj();
			var_353_object = var_1_object;
			func_4617(var_353_object);
			if(var_352_bool != 0) {
				@@@var_0_bool:AddReply((int)525238, (int)26607, (int)26606);
			}
			var_357_bool = 0;
			var_357_bool = 0;
			var_358_bool = 0; var_359_object = Obj();
			var_359_object = var_1_object;
			func_4641(var_359_object);
			if(var_358_bool != 0) {
				var_364_bool = 0; var_365_object = Obj();
				var_365_object = var_1_object;
				func_4675(var_365_object);
				if(var_364_bool != 0) {
					var_357_bool = 1;
				}
			}
			if(var_357_bool != 0) {
				@@@var_0_bool:AddReply((int)525372, (int)26741, (int)26740);
			}
			var_373_bool = 0;
			var_373_bool = 0;
			var_374_bool = 0; var_375_object = Obj();
			var_375_object = var_1_object;
			func_4665(var_374_bool, var_375_object);
			if(var_374_bool != 0) {
				var_386_bool = 0; var_387_object = Obj();
				var_387_object = var_1_object;
				func_4687(var_387_object);
				if(var_386_bool != 0) {
					var_373_bool = 1;
				}
			}
			if(var_373_bool != 0) {
				@@@var_0_bool:AddReply((int)525369, (int)44309, (int)26737);
			}
			var_395_bool = 0;
			var_395_bool = 0;
			var_396_bool = 0; var_397_object = Obj();
			var_397_object = var_1_object;
			func_4665(var_396_bool, var_397_object);
			var_398_bool = var_396_bool == 0; //@nz
			if(var_398_bool != 0) {
				var_399_bool = 0; var_400_object = Obj();
				var_400_object = var_1_object;
				func_4687(var_400_object);
				if(var_399_bool != 0) {
					var_395_bool = 1;
				}
			}
			if(var_395_bool != 0) {
				@@@var_0_bool:AddReply((int)525381, (int)26750, (int)26749);
			}
			var_404_bool = 0; var_405_object = Obj();
			var_405_object = var_1_object;
			func_4653(var_405_object);
			if(var_404_bool != 0) {
				@@@var_0_bool:AddReply((int)525375, (int)26744, (int)26743);
			}
			@@@var_0_bool:AddReply((int)525243, (int)-1, (int)26611);
			@@@var_0_bool:AddReply((int)529207, (int)-1, (int)30658);
			return 0;
		}
		var_420_bool = var_39_float == (int)26744;
		if(var_420_bool != 0) {
			var_421_string = "";
			func_539(var_40_int, "Untrust");
			@@@var_0_bool:SetMessage((int)525376);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542113, (int)44419, (int)44418);
			return 0;
		}
		var_427_bool = var_39_float == (int)44419;
		if(var_427_bool != 0) {
			var_428_string = "";
			func_539(var_40_int, "Untrust");
			@@@var_0_bool:SetMessage((int)542114);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542115, (int)44421, (int)44420);
			return 0;
		}
		var_434_bool = var_39_float == (int)44421;
		if(var_434_bool != 0) {
			var_435_string = "";
			func_539(var_40_int, "Untrust");
			@@@var_0_bool:SetMessage((int)542116);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)525377, (int)26747, (int)26745);
			@@@var_0_bool:AddReply((int)542117, (int)44423, (int)44422);
			return 0;
		}
		var_444_bool = var_39_float == (int)44423;
		if(var_444_bool != 0) {
			var_445_string = "";
			func_539(var_40_int, "Neutral");
			@@@var_0_bool:SetMessage((int)542118);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)525378, (int)-1, (int)26746);
			return 0;
		}
		var_451_bool = var_39_float == (int)26747;
		if(var_451_bool != 0) {
			var_452_string = "";
			func_539(var_40_int, "Sly");
			@@@var_0_bool:SetMessage((int)525379);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)525380, (int)-1, (int)26748);
			return 0;
		}
		var_458_bool = var_39_float == (int)26750;
		if(var_458_bool != 0) {
			var_459_string = "";
			func_539(var_40_int, "Fear");
			@@@var_0_bool:SetMessage((int)525382);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)525383, (int)-1, (int)26751);
			return 0;
		}
		var_465_bool = var_39_float == (int)44309;
		if(var_465_bool != 0) {
			var_466_string = "";
			func_539(var_40_int, "Sly");
			@@@var_0_bool:SetMessage((int)542032);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542033, (int)44311, (int)44310);
			return 0;
		}
		var_472_bool = var_39_float == (int)44311;
		if(var_472_bool != 0) {
			var_473_string = "";
			func_539(var_40_int, "Untrust");
			@@@var_0_bool:SetMessage((int)542034);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542035, (int)44428, (int)44312);
			@@@var_0_bool:AddReply((int)542120, (int)26738, (int)44425);
			return 0;
		}
		var_482_bool = var_39_float == (int)44428;
		if(var_482_bool != 0) {
			var_483_string = "";
			func_539(var_40_int, "Neutral");
			@@@var_0_bool:SetMessage((int)542122);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542123, (int)44430, (int)44429);
			@@@var_0_bool:AddReply((int)542126, (int)26738, (int)44432);
			return 0;
		}
		var_492_bool = var_39_float == (int)44430;
		if(var_492_bool != 0) {
			var_493_string = "";
			func_539(var_40_int, "Neutral");
			@@@var_0_bool:SetMessage((int)542124);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542125, (int)26738, (int)44431);
			return 0;
		}
		var_499_bool = var_39_float == (int)26738;
		if(var_499_bool != 0) {
			var_500_string = "";
			func_539(var_40_int, "Neutral");
			@@@var_0_bool:SetMessage((int)525370);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)525371, (int)-1, (int)26739);
			return 0;
		}
		var_506_bool = var_39_float == (int)26741;
		if(var_506_bool != 0) {
			var_507_string = "";
			func_539(var_40_int, "Fear");
			@@@var_0_bool:SetMessage((int)525373);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)525374, (int)44313, (int)26742);
			return 0;
		}
		var_513_bool = var_39_float == (int)44313;
		if(var_513_bool != 0) {
			var_514_string = "";
			func_539(var_40_int, "Untrust");
			@@@var_0_bool:SetMessage((int)542036);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542119, (int)-1, (int)44424);
			return 0;
		}
		var_520_bool = var_39_float == (int)26607;
		if(var_520_bool != 0) {
			var_521_string = "";
			func_539(var_40_int, "Neutral");
			@@@var_0_bool:SetMessage((int)525239);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)529208, (int)44301, (int)30659);
			@@@var_0_bool:AddReply((int)529212, (int)44453, (int)30663);
			return 0;
		}
		var_530_bool = var_39_float == (int)44453;
		if(var_530_bool != 0) {
			var_531_string = "";
			func_539(var_40_int, "Rage");
			@@@var_0_bool:SetMessage((int)542140);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542141, (int)44458, (int)44454);
			return 0;
		}
		var_537_bool = var_39_float == (int)44458;
		if(var_537_bool != 0) {
			var_538_string = "";
			func_539(var_40_int, "Rage");
			@@@var_0_bool:SetMessage((int)542145);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542146, (int)30660, (int)44459);
			return 0;
		}
		var_544_bool = var_39_float == (int)44301;
		if(var_544_bool != 0) {
			var_545_string = "";
			func_539(var_40_int, "Untrust");
			@@@var_0_bool:SetMessage((int)542024);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542025, (int)30660, (int)44302);
			@@@var_0_bool:AddReply((int)542143, (int)44457, (int)44456);
			return 0;
		}
		var_554_bool = var_39_float == (int)44457;
		if(var_554_bool != 0) {
			var_555_string = "";
			func_539(var_40_int, "Neutral");
			@@@var_0_bool:SetMessage((int)542144);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542147, (int)30660, (int)44462);
			return 0;
		}
		var_561_bool = var_39_float == (int)30660;
		if(var_561_bool != 0) {
			var_562_string = "";
			func_539(var_40_int, "Fear");
			@@@var_0_bool:SetMessage((int)529209);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)529210, (int)30662, (int)30661);
			return 0;
		}
		var_568_bool = var_39_float == (int)30662;
		if(var_568_bool != 0) {
			var_569_string = "";
			func_539(var_40_int, "Sly");
			@@@var_0_bool:SetMessage((int)529211);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)525240, (int)26609, (int)26608);
			@@@var_0_bool:AddReply((int)542150, (int)44466, (int)44465);
			return 0;
		}
		var_578_bool = var_39_float == (int)44466;
		if(var_578_bool != 0) {
			var_579_string = "";
			func_539(var_40_int, "Neutral");
			@@@var_0_bool:SetMessage((int)542151);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542152, (int)44468, (int)44467);
			return 0;
		}
		var_585_bool = var_39_float == (int)44468;
		if(var_585_bool != 0) {
			var_586_string = "";
			func_539(var_40_int, "Neutral");
			@@@var_0_bool:SetMessage((int)542153);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542154, (int)26609, (int)44469);
			return 0;
		}
		var_592_bool = var_39_float == (int)26609;
		if(var_592_bool != 0) {
			var_593_string = "";
			func_539(var_40_int, "Sly");
			@@@var_0_bool:SetMessage((int)525241);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542022, (int)44300, (int)44299);
			return 0;
		}
		var_599_bool = var_39_float == (int)44300;
		if(var_599_bool != 0) {
			var_600_string = "";
			func_539(var_40_int, "Untrust");
			@@@var_0_bool:SetMessage((int)542023);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542155, (int)44472, (int)44471);
			return 0;
		}
		var_606_bool = var_39_float == (int)44472;
		if(var_606_bool != 0) {
			var_607_string = "";
			func_539(var_40_int, "Neutral");
			@@@var_0_bool:SetMessage((int)542156);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)525242, (int)-1, (int)26610);
			@@@var_0_bool:AddReply((int)542157, (int)-1, (int)44473);
			return 0;
		}
		var_616_bool = var_39_float == (int)44260;
		if(var_616_bool != 0) {
			var_617_string = "";
			func_539(var_40_int, "Sly");
			@@@var_0_bool:SetMessage((int)541993);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)541994, (int)44250, (int)44261);
			@@@var_0_bool:AddReply((int)541995, (int)44263, (int)44262);
			return 0;
		}
		var_626_bool = var_39_float == (int)44263;
		if(var_626_bool != 0) {
			var_627_string = "";
			func_539(var_40_int, "Sly");
			@@@var_0_bool:SetMessage((int)541996);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)541997, (int)44250, (int)44264);
			return 0;
		}
		var_633_bool = var_39_float == (int)44250;
		if(var_633_bool != 0) {
			var_634_string = "";
			func_539(var_40_int, "Untrust");
			@@@var_0_bool:SetMessage((int)541985);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)541986, (int)26707, (int)44251);
			@@@var_0_bool:AddReply((int)541998, (int)44252, (int)44266);
			return 0;
		}
		var_643_bool = var_39_float == (int)44252;
		if(var_643_bool != 0) {
			var_644_string = "";
			func_539(var_40_int, "Neutral");
			@@@var_0_bool:SetMessage((int)541987);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)541988, (int)44268, (int)44253);
			@@@var_0_bool:AddReply((int)542001, (int)26707, (int)44270);
			return 0;
		}
		var_653_bool = var_39_float == (int)26707;
		if(var_653_bool != 0) {
			var_654_string = "";
			func_539(var_40_int, "Untrust");
			@@@var_0_bool:SetMessage((int)525339);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)541989, (int)44268, (int)44254);
			@@@var_0_bool:AddReply((int)542002, (int)44273, (int)44272);
			return 0;
		}
		var_663_bool = var_39_float == (int)44273;
		if(var_663_bool != 0) {
			var_664_string = "";
			func_539(var_40_int, "Neutral");
			@@@var_0_bool:SetMessage((int)542003);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542004, (int)44268, (int)44274);
			@@@var_0_bool:AddReply((int)542005, (int)44276, (int)44275);
			return 0;
		}
		var_673_bool = var_39_float == (int)44276;
		if(var_673_bool != 0) {
			var_674_string = "";
			func_539(var_40_int, "Untrust");
			@@@var_0_bool:SetMessage((int)542006);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542007, (int)-1, (int)44277);
			@@@var_0_bool:AddReply((int)542008, (int)44255, (int)44278);
			return 0;
		}
		var_683_bool = var_39_float == (int)44268;
		if(var_683_bool != 0) {
			var_684_string = "";
			func_539(var_40_int, "Sly");
			@@@var_0_bool:SetMessage((int)541999);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542000, (int)44255, (int)44269);
			@@@var_0_bool:AddReply((int)542009, (int)44286, (int)44281);
			return 0;
		}
		var_693_bool = var_39_float == (int)44255;
		if(var_693_bool != 0) {
			var_694_string = "";
			func_539(var_40_int, "Sly");
			@@@var_0_bool:SetMessage((int)541990);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542010, (int)44284, (int)44283);
			@@@var_0_bool:AddReply((int)542012, (int)44286, (int)44285);
			return 0;
		}
		var_703_bool = var_39_float == (int)44286;
		if(var_703_bool != 0) {
			var_704_string = "";
			func_539(var_40_int, "Rage");
			@@@var_0_bool:SetMessage((int)542013);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542015, (int)-1, (int)44290);
			@@@var_0_bool:AddReply((int)542014, (int)44284, (int)44289);
			return 0;
		}
		var_713_bool = var_39_float == (int)44284;
		if(var_713_bool != 0) {
			var_714_string = "";
			func_539(var_40_int, "Sly");
			@@@var_0_bool:SetMessage((int)542011);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)541991, (int)44257, (int)44256);
			@@@var_0_bool:AddReply((int)542016, (int)44293, (int)44292);
			return 0;
		}
		var_723_bool = var_39_float == (int)44293;
		if(var_723_bool != 0) {
			var_724_string = "";
			func_539(var_40_int, "Rage");
			@@@var_0_bool:SetMessage((int)542017);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542018, (int)44297, (int)44294);
			@@@var_0_bool:AddReply((int)542019, (int)44257, (int)44295);
			return 0;
		}
		var_733_bool = var_39_float == (int)44297;
		if(var_733_bool != 0) {
			var_734_string = "";
			func_539(var_40_int, "Sly");
			@@@var_0_bool:SetMessage((int)542020);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542021, (int)44257, (int)44298);
			return 0;
		}
		var_740_bool = var_39_float == (int)44257;
		if(var_740_bool != 0) {
			var_741_string = "";
			func_539(var_40_int, "Neutral");
			@@@var_0_bool:SetMessage((int)541992);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)525340, (int)-1, (int)26708);
			@@@var_0_bool:AddReply((int)525341, (int)-1, (int)26709);
			return 0;
		}
		var_3_object = true;
		var_749_bool = 0;
		func_4415(var_749_bool);
		if(var_749_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x232";
	
}


task_7_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_float, var_39_float, var_40_int)
{
	if((int)1 != 0) {
		func_4216();
		var_44_bool = var_40_int == (int)26783;
		if(var_44_bool != 0) {
			var_45_object = Obj(); var_46_object = Obj();
			var_45_object = var_1_object;
			var_46_object = var_0_bool;
			func_4529();
		}
		var_50_bool = var_39_float == (int)26782;
		if(var_50_bool != 0) {
			var_51_string = "";
			func_1786(var_40_int, "Neutral");
			@@@var_0_bool:SetMessage((int)525414);
			@@@var_0_bool:ClearReplies();
			var_69_bool = 0;
			var_69_bool = 0;
			var_70_bool = 0; var_71_object = Obj();
			var_71_object = var_1_object;
			func_4699(var_71_object);
			if(var_70_bool != 0) {
				var_78_bool = 0; var_79_object = Obj();
				var_79_object = var_1_object;
				func_4711(var_79_object);
				if(var_78_bool != 0) {
					var_69_bool = 1;
				}
			}
			if(var_69_bool != 0) {
				@@@var_0_bool:AddReply((int)525415, (int)42567, (int)26783);
			}
			@@@var_0_bool:AddReply((int)525418, (int)-1, (int)26786);
			return 0;
		}
		var_91_bool = var_39_float == (int)42567;
		if(var_91_bool != 0) {
			var_92_string = "";
			func_1786(var_40_int, "Untrust");
			@@@var_0_bool:SetMessage((int)540558);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)540559, (int)26784, (int)42568);
			@@@var_0_bool:AddReply((int)540560, (int)40922, (int)42569);
			return 0;
		}
		var_101_bool = var_39_float == (int)26784;
		if(var_101_bool != 0) {
			var_102_string = "";
			func_1786(var_40_int, "Untrust");
			@@@var_0_bool:SetMessage((int)525416);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)525417, (int)40922, (int)26785);
			@@@var_0_bool:AddReply((int)540561, (int)40924, (int)42571);
			return 0;
		}
		var_111_bool = var_39_float == (int)40922;
		if(var_111_bool != 0) {
			var_112_string = "";
			func_1786(var_40_int, "Fear");
			@@@var_0_bool:SetMessage((int)538982);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538983, (int)40924, (int)40923);
			return 0;
		}
		var_118_bool = var_39_float == (int)40924;
		if(var_118_bool != 0) {
			var_119_string = "";
			func_1786(var_40_int, "Neutral");
			@@@var_0_bool:SetMessage((int)538984);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538985, (int)40926, (int)40925);
			@@@var_0_bool:AddReply((int)538988, (int)40929, (int)40928);
			return 0;
		}
		var_128_bool = var_39_float == (int)40929;
		if(var_128_bool != 0) {
			var_129_string = "";
			func_1786(var_40_int, "Untrust");
			@@@var_0_bool:SetMessage((int)538989);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)540565, (int)42578, (int)42577);
			@@@var_0_bool:AddReply((int)538990, (int)40931, (int)40930);
			return 0;
		}
		var_138_bool = var_39_float == (int)40931;
		if(var_138_bool != 0) {
			var_139_string = "";
			func_1786(var_40_int, "Fear");
			@@@var_0_bool:SetMessage((int)538991);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538992, (int)-1, (int)40932);
			@@@var_0_bool:AddReply((int)540575, (int)-1, (int)42589);
			return 0;
		}
		var_148_bool = var_39_float == (int)40926;
		if(var_148_bool != 0) {
			var_149_string = "";
			func_1786(var_40_int, "Untrust");
			@@@var_0_bool:SetMessage((int)538986);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538987, (int)42573, (int)40927);
			return 0;
		}
		var_155_bool = var_39_float == (int)42573;
		if(var_155_bool != 0) {
			var_156_string = "";
			func_1786(var_40_int, "Rage");
			@@@var_0_bool:SetMessage((int)540562);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)540563, (int)40929, (int)42574);
			@@@var_0_bool:AddReply((int)540564, (int)42578, (int)42576);
			return 0;
		}
		var_165_bool = var_39_float == (int)42578;
		if(var_165_bool != 0) {
			var_166_string = "";
			func_1786(var_40_int, "Rage");
			@@@var_0_bool:SetMessage((int)540566);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)540592, (int)42607, (int)42606);
			return 0;
		}
		var_172_bool = var_39_float == (int)42607;
		if(var_172_bool != 0) {
			var_173_string = "";
			func_1786(var_40_int, "Rage");
			@@@var_0_bool:SetMessage((int)540593);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)540594, (int)42609, (int)42608);
			@@@var_0_bool:AddReply((int)540601, (int)-1, (int)42615);
			return 0;
		}
		var_182_bool = var_39_float == (int)42609;
		if(var_182_bool != 0) {
			var_183_string = "";
			func_1786(var_40_int, "Neutral");
			@@@var_0_bool:SetMessage((int)540595);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)540596, (int)42611, (int)42610);
			return 0;
		}
		var_189_bool = var_39_float == (int)42611;
		if(var_189_bool != 0) {
			var_190_string = "";
			func_1786(var_40_int, "Neutral");
			@@@var_0_bool:SetMessage((int)540597);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)540600, (int)-1, (int)42614);
			return 0;
		}
		var_3_object = true;
		var_195_bool = 0;
		func_4415(var_195_bool);
		if(var_195_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x711";
	
}


task_9_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_int, var_17_int, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_float, var_39_float, var_40_int)
{
	if((int)1 != 0) {
		func_4216();
		var_44_bool = var_39_float == (int)26869;
		if(var_44_bool != 0) {
			var_45_string = "";
			func_2262(var_40_int, "Neutral");
			@@@var_0_bool:SetMessage((int)525513);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)525514, (int)30738, (int)26870);
			@@@var_0_bool:AddReply((int)529284, (int)30738, (int)30737);
			return 0;
		}
		var_70_bool = var_39_float == (int)30738;
		if(var_70_bool != 0) {
			var_71_string = "";
			func_2262(var_40_int, "Neutral");
			@@@var_0_bool:SetMessage((int)529285);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)529286, (int)-1, (int)30740);
			@@@var_0_bool:AddReply((int)529287, (int)-1, (int)30741);
			return 0;
		}
		var_3_object = true;
		var_79_bool = 0;
		func_4415(var_79_bool);
		if(var_79_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x8ed";
	
}


task_11_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_int, var_22_int, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_float, var_39_float, var_40_int)
{
	if((int)1 != 0) {
		func_4216();
		var_44_bool = var_40_int == (int)27141;
		if(var_44_bool != 0) {
			var_45_object = Obj(); var_46_object = Obj();
			var_45_object = var_1_object;
			var_46_object = var_0_bool;
			func_4535();
		}
		var_50_bool = var_40_int == (int)27143;
		if(var_50_bool != 0) {
			var_51_object = Obj(); var_52_object = Obj();
			var_51_object = var_1_object;
			var_52_object = var_0_bool;
			func_4541();
		}
		var_77_bool = var_40_int == (int)27144;
		if(var_77_bool != 0) {
			var_78_object = Obj(); var_79_object = Obj();
			var_78_object = var_1_object;
			var_79_object = var_0_bool;
			func_4595();
		}
		var_83_bool = var_39_float == (int)27140;
		if(var_83_bool != 0) {
			var_84_string = "";
			func_2517(var_40_int, "Neutral");
			@@@var_0_bool:SetMessage((int)525841);
			@@@var_0_bool:ClearReplies();
			var_102_bool = 0;
			var_102_bool = 0;
			var_103_bool = 0; var_104_object = Obj();
			var_104_object = var_1_object;
			func_4723(var_104_object);
			if(var_103_bool != 0) {
				var_111_bool = 0; var_112_object = Obj();
				var_112_object = var_1_object;
				func_4735(var_112_object);
				if(var_111_bool != 0) {
					var_102_bool = 1;
				}
			}
			if(var_102_bool != 0) {
				@@@var_0_bool:AddReply((int)525842, (int)30544, (int)27141);
			}
			var_120_bool = 0; var_121_object = Obj();
			var_121_object = var_1_object;
			func_4771(var_121_object);
			if(var_120_bool != 0) {
				@@@var_0_bool:AddReply((int)525845, (int)30542, (int)27144);
			}
			@@@var_0_bool:AddReply((int)529095, (int)-1, (int)30540);
			@@@var_0_bool:AddReply((int)529096, (int)-1, (int)30541);
			return 0;
		}
		var_136_bool = var_39_float == (int)30542;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_2517(var_40_int, "Untrust");
			@@@var_0_bool:SetMessage((int)529097);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)529098, (int)-1, (int)30543);
			@@@var_0_bool:AddReply((int)541643, (int)-1, (int)43815);
			return 0;
		}
		var_146_bool = var_39_float == (int)30544;
		if(var_146_bool != 0) {
			var_147_string = "";
			func_2517(var_40_int, "Sly");
			@@@var_0_bool:SetMessage((int)529099);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)529100, (int)30546, (int)30545);
			return 0;
		}
		var_153_bool = var_39_float == (int)30546;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_2517(var_40_int, "Sly");
			@@@var_0_bool:SetMessage((int)529101);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)529102, (int)27142, (int)30547);
			return 0;
		}
		var_160_bool = var_39_float == (int)27142;
		if(var_160_bool != 0) {
			var_161_string = "";
			func_2517(var_40_int, "Sly");
			@@@var_0_bool:SetMessage((int)525843);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)529103, (int)30549, (int)30548);
			return 0;
		}
		var_167_bool = var_39_float == (int)30549;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_2517(var_40_int, "Rage");
			@@@var_0_bool:SetMessage((int)529104);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)529105, (int)30551, (int)30550);
			@@@var_0_bool:AddReply((int)539587, (int)41533, (int)41532);
			return 0;
		}
		var_177_bool = var_39_float == (int)41533;
		if(var_177_bool != 0) {
			var_178_string = "";
			func_2517(var_40_int, "Neutral");
			@@@var_0_bool:SetMessage((int)539588);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)539589, (int)30551, (int)41534);
			return 0;
		}
		var_184_bool = var_39_float == (int)30551;
		if(var_184_bool != 0) {
			var_185_string = "";
			func_2517(var_40_int, "Untrust");
			@@@var_0_bool:SetMessage((int)529106);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)525844, (int)-1, (int)27143);
			return 0;
		}
		var_3_object = true;
		var_190_bool = 0;
		func_4415(var_190_bool);
		if(var_190_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x9ec";
	
}


task_13_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_int, var_27_int, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_float, var_39_float, var_40_int)
{
	if((int)1 != 0) {
		func_4216();
		var_44_bool = var_40_int == (int)28018;
		if(var_44_bool != 0) {
			var_45_object = Obj(); var_46_object = Obj();
			var_45_object = var_1_object;
			var_46_object = var_0_bool;
			func_4546();
		}
		var_73_bool = var_40_int == (int)45451;
		if(var_73_bool != 0) {
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_bool;
			func_4546();
		}
		var_77_bool = var_39_float == (int)28015;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_2929(var_40_int, "Rage");
			@@@var_0_bool:SetMessage((int)526738);
			@@@var_0_bool:ClearReplies();
			var_96_bool = 0; var_97_object = Obj();
			var_97_object = var_1_object;
			func_4759(var_97_object);
			if(var_96_bool != 0) {
				@@@var_0_bool:AddReply((int)526739, (int)28017, (int)28016);
			}
			var_107_bool = 0; var_108_object = Obj();
			var_108_object = var_1_object;
			func_4747(var_108_object);
			if(var_107_bool != 0) {
				@@@var_0_bool:AddReply((int)528763, (int)30180, (int)30179);
			}
			@@@var_0_bool:AddReply((int)526742, (int)-1, (int)28019);
			@@@var_0_bool:AddReply((int)528847, (int)-1, (int)30265);
			return 0;
		}
		var_123_bool = var_39_float == (int)30180;
		if(var_123_bool != 0) {
			var_124_string = "";
			func_2929(var_40_int, "Rage");
			@@@var_0_bool:SetMessage((int)528764);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542466, (int)44860, (int)44859);
			@@@var_0_bool:AddReply((int)542463, (int)44857, (int)44856);
			@@@var_0_bool:AddReply((int)528765, (int)-1, (int)30181);
			return 0;
		}
		var_136_bool = var_39_float == (int)44857;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_2929(var_40_int, "Neutral");
			@@@var_0_bool:SetMessage((int)542464);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542465, (int)-1, (int)44858);
			return 0;
		}
		var_143_bool = var_39_float == (int)44860;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_2929(var_40_int, "Neutral");
			@@@var_0_bool:SetMessage((int)542467);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542468, (int)-1, (int)44861);
			@@@var_0_bool:AddReply((int)543008, (int)-1, (int)45460);
			return 0;
		}
		var_153_bool = var_39_float == (int)28017;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_2929(var_40_int, "Rage");
			@@@var_0_bool:SetMessage((int)526740);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)528841, (int)30260, (int)30259);
			@@@var_0_bool:AddReply((int)528848, (int)30267, (int)30266);
			return 0;
		}
		var_163_bool = var_39_float == (int)30267;
		if(var_163_bool != 0) {
			var_164_string = "";
			func_2929(var_40_int, "Neutral");
			@@@var_0_bool:SetMessage((int)528849);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)528850, (int)45452, (int)30268);
			@@@var_0_bool:AddReply((int)528851, (int)45452, (int)30269);
			return 0;
		}
		var_173_bool = var_39_float == (int)45452;
		if(var_173_bool != 0) {
			var_174_string = "";
			func_2929(var_40_int, "Neutral");
			@@@var_0_bool:SetMessage((int)543003);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543005, (int)45457, (int)45456);
			return 0;
		}
		var_180_bool = var_39_float == (int)45457;
		if(var_180_bool != 0) {
			var_181_string = "";
			func_2929(var_40_int, "Sly");
			@@@var_0_bool:SetMessage((int)543006);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)543007, (int)30264, (int)45458);
			return 0;
		}
		var_187_bool = var_39_float == (int)30260;
		if(var_187_bool != 0) {
			var_188_string = "";
			func_2929(var_40_int, "Sly");
			@@@var_0_bool:SetMessage((int)528842);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)528843, (int)30262, (int)30261);
			return 0;
		}
		var_194_bool = var_39_float == (int)30262;
		if(var_194_bool != 0) {
			var_195_string = "";
			func_2929(var_40_int, "Rage");
			@@@var_0_bool:SetMessage((int)528844);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)528845, (int)30264, (int)30263);
			@@@var_0_bool:AddReply((int)543004, (int)30264, (int)45454);
			return 0;
		}
		var_204_bool = var_39_float == (int)30264;
		if(var_204_bool != 0) {
			var_205_string = "";
			func_2929(var_40_int, "Neutral");
			@@@var_0_bool:SetMessage((int)528846);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)526741, (int)-1, (int)28018);
			@@@var_0_bool:AddReply((int)543002, (int)-1, (int)45451);
			return 0;
		}
		var_3_object = true;
		var_213_bool = 0;
		func_4415(var_213_bool);
		if(var_213_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb88";
	
}


task_15_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_int, var_32_int, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_float, var_39_float, var_40_int)
{
	if((int)1 != 0) {
		func_4216();
		var_44_bool = var_39_float == (int)36906;
		if(var_44_bool != 0) {
			var_45_string = "";
			func_3388(var_40_int, "Neutral");
			@@@var_0_bool:SetMessage((int)535231);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)535232, (int)36953, (int)36907);
			@@@var_0_bool:AddReply((int)535233, (int)-1, (int)36908);
			@@@var_0_bool:AddReply((int)535280, (int)-1, (int)36956);
			return 0;
		}
		var_73_bool = var_39_float == (int)36953;
		if(var_73_bool != 0) {
			var_74_string = "";
			func_3388(var_40_int, "Neutral");
			@@@var_0_bool:SetMessage((int)535277);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)535278, (int)36957, (int)36954);
			@@@var_0_bool:AddReply((int)535279, (int)36957, (int)36955);
			return 0;
		}
		var_83_bool = var_39_float == (int)36957;
		if(var_83_bool != 0) {
			var_84_string = "";
			func_3388(var_40_int, "Neutral");
			@@@var_0_bool:SetMessage((int)535281);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)535282, (int)-1, (int)36958);
			@@@var_0_bool:AddReply((int)535283, (int)-1, (int)36959);
			return 0;
		}
		var_3_object = true;
		var_92_bool = 0;
		func_4415(var_92_bool);
		if(var_92_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xd53";
	
}


task_17_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_int, var_37_int, var_38_float, var_39_float, var_40_int)
{
	if((int)1 != 0) {
		func_4216();
		var_44_bool = var_39_float == (int)42554;
		if(var_44_bool != 0) {
			var_45_string = "";
			func_3642(var_40_int, "Neutral");
			@@@var_0_bool:SetMessage((int)540545);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)540546, (int)-1, (int)42555);
			@@@var_0_bool:AddReply((int)540798, (int)-1, (int)42847);
			return 0;
		}
		var_3_object = true;
		var_69_bool = 0;
		func_4415(var_69_bool);
		if(var_69_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xe51";
	
}


task_18_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_float, var_37_float, var_38_int)
{
	func_4406();
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_18_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_float, var_37_float, var_38_int, var_39_object)
{
	var_40_bool = 0; var_41_bool = 0;
	IsOverrideActive(var_41_bool);
	var_42_bool = var_41_bool == 0; //@nz
	if(var_42_bool != 0) {
		EventDisable(0);
		var_43_bool = 0; var_44_object = Obj();
		var_39_object = var_44_object;
		func_3920(var_43_bool, var_44_object);
		EventEnable(0);
		var_57_object = Obj();
		var_39_object = var_57_object;
		func_5027(var_57_object);
	}
	return 2;
}


event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_float, var_37_float, var_38_int)
{
	return 0;
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_float, var_37_float, var_38_int)
{
	var_39_bool = GlobalVars[2];
	GlobalVars[2] = (bool)0;
	func_3713(var_36_float, var_37_float, var_38_int);
	return 0;
}


func_0()
{
	
Label_0:
	Hold();
	var_81_bool = 0;
	func_3940(var_81_bool);
	var_82_bool = var_81_bool == 0; //@nz
	if(var_82_bool == 1) goto Label_0;
	return 0;
}


func_3584(var_0_bool, var_1_object, var_2_object, var_3_object, var_749_object, var_750_object)
{
	var_0_bool = var_750_object;
	var_1_object = var_749_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_756_string = "";
		func_3642(var_750_object, "Neutral");
		@@@var_0_bool:SetMessage((int)540545);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)540546, (int)-1, (int)42555);
		@@@var_0_bool:AddReply((int)540798, (int)-1, (int)42847);
		goto Label_3612;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xe04";
	}
Label_3612:
	var_771_bool = 0;
	func_4415(var_771_bool);
	if(var_771_bool != 0) {

	Label_3616:
		lshWaitForAnimEnd();
		var_772_object = var_3_object;
		if(var_772_object != 0) {
		} else {
			var_773_string = "";
			var_773_string = var_2_object;
			func_4170(var_773_string);
			goto Label_3616;
	}
		PlayAnimation("all", "idle");

	Label_3631:
		WaitForAnimEnd();
		var_776_object = var_3_object;
		if(var_776_object != 0) {
			goto Label_3641;
		}
		PlayAnimation("all", "idle");
		goto Label_3631;
	}
	goto Label_3641;
	
Label_3641:
	return 0;
	
}


func_256(var_174_string, var_175_string, var_176_int)
{
	var_178_bool = var_176_int == (int)0;
	if(var_178_bool != 0) {
		var_175_string = var_174_string;
	} else {
		var_174_string = var_175_string + var_176_int;
	}
	return 0;
	
}


func_4354(var_187_int)
{
	var_188_float = 0; var_189_float = 0;
	GetGameTime(var_189_float);
	var_191_int = 0;
	var_191_int = var_189_float / (int)24;
	var_187_int = (int)1 + var_191_int;
	return 2;
}


func_4867()
{
	var_291_object = Obj(); var_292_object = Obj();
	CreateDiaryEntry(var_292_object, (int)516, (int)2, (int)529715);
	var_296_bool = 0; var_297_object = Obj(); var_298_int = 0;
	var_292_object = var_297_object;
	func_4932(var_296_bool, var_297_object, (int)507);
	return 2;
}
EMIT "Stack[-1] = 0";


func_264(var_167_int, var_168_string)
{
	var_169_int = 0; var_170_bool = 0; var_171_int = 0; var_172_bool = 0;
	var_171_int = 0;
	
Label_266:
	var_174_string = ""; var_175_string = ""; var_176_int = 0;
	var_168_string = var_175_string;
	var_171_int = var_176_int;
	func_256(var_174_string, var_175_string, var_176_int);
	HasAnimation(var_172_bool, "all", var_174_string);
	var_179_bool = var_172_bool == 0; //@nz
	if(var_179_bool != 0) {
	} else {
		var_171_int = var_171_int + (int)1;
		goto Label_266;
	}
	var_171_int = var_167_int;
	return 4;
	
}


func_4617(var_329_bool)
{
	var_331_int = 0; var_332_string = "";
	func_4268(var_331_int, "k2q01");
	var_334_bool = var_331_int == (int)1;
	if(var_334_bool != 0) {
		var_329_bool = 1;
		return 0;
	}
	var_329_bool = 0;
	return 0;
}


func_4363(var_286_bool, var_287_int)
{
	var_288_int = 0;
	func_4354(var_288_int);
	var_286_bool = var_288_int == var_287_int;
	return 0;
}


func_13(var_0_bool, var_122_bool, var_123_cvector, var_124_cvector)
{
	var_126_bool = 0; var_127_bool = 0;
	var_0_bool = true;
	SetTimer((int)21, (float)0.5);
	
Label_19:
	var_130_bool = 0; var_131_cvector = CVector(0,0,0);
	var_123_cvector = var_131_cvector;
	func_3910(var_130_bool, var_131_cvector);
	var_140_bool = var_130_bool == 0; //@nz
	if(var_140_bool != 0) {
		goto Label_19;
	}
	MovePoint(var_123_cvector, (bool)0, var_127_bool);
	var_142_bool = var_127_bool;
	if(var_142_bool != 0) {
	} else {
		goto Label_19;
	}
	KillTimer((int)20);
	KillTimer((int)21);
	var_0_bool = false;
	WaitForAnimEnd(var_127_bool);
	var_145_bool = var_127_bool == 0; //@nz
	if(var_145_bool != 0) {
		var_122_bool = 0;
		return 2;
	}
	var_146_float = GetByIndex(var_124_cvector, 0);
	var_147_float = GetByIndex(var_124_cvector, 2);
	Rotate(var_146_float, var_147_float, var_127_bool);
	var_148_bool = var_127_bool == 0; //@nz
	if(var_148_bool != 0) {
		var_122_bool = 0;
		return 2;
	}
	var_122_bool = 1;
	return 2;
	
}


func_3856(var_103_cvector)
{
	var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0);
	GetPosition(var_105_cvector);
	var_105_cvector = var_103_cvector;
	return 2;
}


func_4369(var_191_string, var_192_int)
{
	var_193_string = ""; var_194_string = "";
	var_195_int = var_192_int;
	if(var_195_int != 0) {
		"idle" = "idle" + var_192_int;
	}
	var_194_string = var_191_string;
	return 2;
}


func_4880()
{
	var_88_object = Obj(); var_89_object = Obj();
	CreateDiaryEntry(var_89_object, (int)508, (int)2, (int)529707);
	var_93_bool = 0; var_94_object = Obj(); var_95_int = 0;
	var_89_object = var_94_object;
	func_4932(var_93_bool, var_94_object, (int)507);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4629(var_321_bool)
{
	var_323_int = 0; var_324_string = "";
	func_4268(var_323_int, "ook2MladVlad1");
	var_328_bool = var_323_int == (int)0;
	if(var_328_bool != 0) {
		var_321_bool = 1;
		return 0;
	}
	var_321_bool = 0;
	return 0;
}


func_3861(var_51_float, var_52_object)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0);
	GetPosition(var_56_cvector);
	@@var_52_object:GetPosition(var_57_cvector);
	var_58_cvector = var_57_cvector - var_56_cvector;
	var_51_float = var_58_cvector | var_58_cvector;
	return 6;
}


func_4376(var_185_int)
{
	var_186_int = 0; var_187_bool = 0; var_188_int = 0; var_189_bool = 0;
	var_188_int = 0;
	
Label_4378:
	var_191_string = ""; var_192_int = 0;
	var_188_int = var_192_int;
	func_4369(var_191_string, var_192_int);
	HasAnimation(var_189_bool, "all", var_191_string);
	var_196_bool = var_189_bool == 0; //@nz
	if(var_196_bool != 0) {
	} else {
		var_188_int = var_188_int + (int)1;
		goto Label_4378;
	}
	var_188_int = var_185_int;
	return 4;
	
}


func_282(var_0_bool, var_289_int, var_290_object)
{
	var_292_object = Obj(); var_293_bool = 0; var_294_int = 0; var_295_bool = 0; var_296_object = Obj(); var_297_bool = 0; var_298_int = 0; var_299_bool = 0;
	var_0_bool = var_290_object;
	var_300_bool = 0; var_301_object = Obj(); var_302_float = 0;
	var_290_object = var_301_object;
	func_3945(var_300_bool, var_301_object, (float)70.0);
	var_303_bool = var_300_bool == 0; //@nz
	if(var_303_bool != 0) {
		var_289_int = -2;
		return 8;
	}
	CreateDialog(var_296_object);
	var_304_int = 0;
	func_4409(var_304_int);
	@@var_296_object:SetNPCName(var_304_int);
	var_305_int = 0;
	func_4407(var_305_int);
	@@var_296_object:SetNPCDescription(var_305_int);
	var_306_string = "";
	func_4411(var_306_string);
	@@var_296_object:SetPhoto(var_306_string);
	var_307_string = "";
	func_4413(var_307_string);
	@@var_296_object:SetPhoto2(var_307_string);
	var_308_int = 0;
	func_5010(var_308_int);
	@@var_296_object:SetPlayerName(var_308_int);
	IsOverrideActive(var_297_bool);
	var_309_bool = var_297_bool;
	if(var_309_bool != 0) {
		var_289_int = -2;
		return 8;
	}
	DoDialog(var_296_object);
	var_310_bool = 0; var_311_object = Obj();
	func_4223(Obj());
	var_312_object = var_311_object;
	func_4032(var_310_bool, var_311_object);
	var_313_object = Obj(); var_314_object = Obj();
	var_290_object = var_313_object;
	var_296_object = var_314_object;
	TaskCall(5);
	func_363(var_315_object, var_316_object, var_317_string, var_318_bool, var_313_object, var_314_object);
	TaskReturn();
	@@var_296_object:IsDialogEnd(var_299_bool);
	
Label_345:
	var_432_bool = var_299_bool == 0; //@nz
	if(var_432_bool != 0) {
		sync();
		@@var_296_object:IsDialogEnd(var_299_bool);
		goto Label_345;
	}
	var_290_object = Obj();
	func_4014();
	StopDialog(var_296_object);
	@@var_296_object:GetReturnValue((int)-1);
	var_298_int = var_289_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_539(var_2_object, var_340_string)
{
	var_341_bool = 0;
	func_4415(var_341_bool);
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
	func_4186(var_344_string, var_345_bool);
	var_2_object = var_340_string;
	return 0;
	
}


func_3869(var_145_bool, var_146_object, var_147_string)
{
	var_148_bool = 0; var_149_bool = 0;
	var_152_bool = IsFuncExist(var_146_object, "HasProperty", (int)2);
	var_153_bool = var_152_bool == 0; //@nz
	if(var_153_bool != 0) {
		var_145_bool = 0;
		return 2;
	}
	@@var_146_object:HasProperty(var_147_string, var_149_bool);
	var_149_bool = var_145_bool;
	return 2;
}


func_4893()
{
	var_53_object = Obj(); var_54_object = Obj();
	CreateDiaryEntry(var_54_object, (int)392, (int)1, (int)525885);
	var_58_bool = 0; var_59_object = Obj(); var_60_int = 0;
	var_54_object = var_59_object;
	func_4932(var_58_bool, var_59_object, (int)390);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4127(var_174_bool, var_175_object)
{
	var_176_string = ""; var_177_int = 0; var_178_bool = 0; var_179_int = 0; var_180_string = ""; var_181_string = ""; var_182_int = 0; var_183_bool = 0; var_184_int = 0; var_185_string = "";
	var_187_int = 0;
	func_4354(var_187_int);
	var_193_int = "d" + var_187_int;
	var_181_string = var_193_int + "m";
	var_182_int = 0;
	
Label_4136:
	if((int)1 != 0) {
		var_197_int = var_182_int + (int)1;
		var_198_int = var_181_string + var_197_int;
		@@var_175_object:HasProperty(var_198_int, var_183_bool);
		var_199_bool = var_183_bool == 0; //@nz
		if(var_199_bool != 0) {
		} else {
			var_182_int = var_182_int + (int)1;
			goto Label_4136;
		}
	}
	var_200_bool = var_182_int == 0; //@nz
	if(var_200_bool != 0) {
		var_174_bool = 0;
		return 10;
	}
	var_184_int = 0;
	var_202_bool = var_182_int > (int)1;
	if(var_202_bool != 0) {
		irand(var_184_int, var_182_int);
	}
	var_204_int = var_184_int + (int)1;
	var_205_int = var_181_string + var_204_int;
	@@var_175_object:GetProperty(var_205_int, var_185_string);
	var_206_bool = 0; var_207_string = "";
	var_185_string = var_207_string;
	func_4201(var_206_bool, var_207_string);
	var_206_bool = var_174_bool;
	return 10;
	
}


func_4641(var_371_bool)
{
	var_373_int = 0; var_374_string = "";
	func_4268(var_373_int, "k2q04");
	var_376_bool = var_373_int == (int)2;
	if(var_376_bool != 0) {
		var_371_bool = 1;
		return 0;
	}
	var_371_bool = 0;
	return 0;
}


func_2851(var_0_bool, var_1_object, var_2_object, var_3_object, var_614_object, var_615_object)
{
	var_0_bool = var_615_object;
	var_1_object = var_614_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_621_string = "";
		func_2929(var_615_object, "Rage");
		@@@var_0_bool:SetMessage((int)526738);
		@@@var_0_bool:ClearReplies();
		var_630_bool = 0; var_631_object = Obj();
		var_631_object = var_1_object;
		func_4759(var_631_object);
		if(var_630_bool != 0) {
			@@@var_0_bool:AddReply((int)526739, (int)28017, (int)28016);
		}
		var_639_bool = 0; var_640_object = Obj();
		var_640_object = var_1_object;
		func_4747(var_640_object);
		if(var_639_bool != 0) {
			@@@var_0_bool:AddReply((int)528763, (int)30180, (int)30179);
		}
		@@@var_0_bool:AddReply((int)526742, (int)-1, (int)28019);
		@@@var_0_bool:AddReply((int)528847, (int)-1, (int)30265);
		goto Label_2899;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xb27";
	}
Label_2899:
	var_654_bool = 0;
	func_4415(var_654_bool);
	if(var_654_bool != 0) {

	Label_2903:
		lshWaitForAnimEnd();
		var_655_object = var_3_object;
		if(var_655_object != 0) {
		} else {
			var_656_string = "";
			var_656_string = var_2_object;
			func_4170(var_656_string);
			goto Label_2903;
	}
		PlayAnimation("all", "idle");

	Label_2918:
		WaitForAnimEnd();
		var_659_object = var_3_object;
		if(var_659_object != 0) {
			goto Label_2928;
		}
		PlayAnimation("all", "idle");
		goto Label_2918;
	}
	goto Label_2928;
	
Label_2928:
	return 0;
	
}


func_4393(var_67_string, var_68_int)
{
	var_70_bool = var_68_int == (int)0;
	if(var_70_bool != 0) {
		var_72_string = GlobalVars[0];
		var_67_string = "pt_" + var_72_string;
	} else {
		var_74_string = GlobalVars[0];
		var_75_int = "pt_" + var_74_string;
		var_67_string = var_75_int + var_68_int;
	}
	return 0;
	
}


func_3881(var_137_bool, var_138_object, var_139_string, var_140_float, var_141_float, var_142_float)
{
	var_143_float = 0; var_144_float = 0;
	var_145_bool = 0; var_146_object = Obj(); var_147_string = "";
	var_138_object = var_146_object;
	var_139_string = var_147_string;
	func_3869(var_145_bool, var_146_object, var_147_string);
	var_154_bool = var_145_bool == 0; //@nz
	if(var_154_bool != 0) {
		var_137_bool = 0;
		return 2;
	}
	@@var_138_object:GetProperty(var_139_string, var_144_float);
	var_155_float = 0; var_156_float = 0; var_157_float = 0; var_158_float = 0;
	var_156_float = var_144_float + var_140_float;
	var_141_float = var_157_float;
	var_142_float = var_158_float;
	func_4247(var_155_float, var_156_float, var_157_float, var_158_float);
	@@var_138_object:SetProperty(var_139_string, var_155_float);
	var_137_bool = 1;
	return 2;
}


func_4906()
{
	var_49_object = Obj(); var_50_object = Obj();
	CreateDiaryEntry(var_50_object, (int)503, (int)2, (int)528769);
	var_54_bool = 0; var_55_object = Obj(); var_56_int = 0;
	var_50_object = var_55_object;
	func_4932(var_54_bool, var_55_object, (int)500);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4653(var_417_bool)
{
	var_419_int = 0; var_420_string = "";
	func_4268(var_419_int, "k2q04");
	var_422_bool = var_419_int == (int)3;
	if(var_422_bool != 0) {
		var_417_bool = 1;
		return 0;
	}
	var_417_bool = 0;
	return 0;
}


func_2349(var_0_bool, var_507_int, var_508_object)
{
	var_510_object = Obj(); var_511_bool = 0; var_512_int = 0; var_513_bool = 0; var_514_object = Obj(); var_515_bool = 0; var_516_int = 0; var_517_bool = 0;
	var_0_bool = var_508_object;
	var_518_bool = 0; var_519_object = Obj(); var_520_float = 0;
	var_508_object = var_519_object;
	func_3945(var_518_bool, var_519_object, (float)70.0);
	var_521_bool = var_518_bool == 0; //@nz
	if(var_521_bool != 0) {
		var_507_int = -2;
		return 8;
	}
	CreateDialog(var_514_object);
	var_522_int = 0;
	func_4409(var_522_int);
	@@var_514_object:SetNPCName(var_522_int);
	var_523_int = 0;
	func_4407(var_523_int);
	@@var_514_object:SetNPCDescription(var_523_int);
	var_524_string = "";
	func_4411(var_524_string);
	@@var_514_object:SetPhoto(var_524_string);
	var_525_string = "";
	func_4413(var_525_string);
	@@var_514_object:SetPhoto2(var_525_string);
	var_526_int = 0;
	func_5010(var_526_int);
	@@var_514_object:SetPlayerName(var_526_int);
	IsOverrideActive(var_515_bool);
	var_527_bool = var_515_bool;
	if(var_527_bool != 0) {
		var_507_int = -2;
		return 8;
	}
	DoDialog(var_514_object);
	var_528_bool = 0; var_529_object = Obj();
	func_4223(Obj());
	var_530_object = var_529_object;
	func_4032(var_528_bool, var_529_object);
	var_531_object = Obj(); var_532_object = Obj();
	var_508_object = var_531_object;
	var_514_object = var_532_object;
	TaskCall(11);
	func_2430(var_533_object, var_534_object, var_535_string, var_536_bool, var_531_object, var_532_object);
	TaskReturn();
	@@var_514_object:IsDialogEnd(var_517_bool);
	
Label_2412:
	var_586_bool = var_517_bool == 0; //@nz
	if(var_586_bool != 0) {
		sync();
		@@var_514_object:IsDialogEnd(var_517_bool);
		goto Label_2412;
	}
	var_508_object = Obj();
	func_4014();
	StopDialog(var_514_object);
	@@var_514_object:GetReturnValue((int)-1);
	var_516_int = var_507_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4407(var_120_int)
{
	var_120_int = 515547;
	return 0;
}


func_4919(var_63_object)
{
	var_64_object = Obj(); var_65_object = Obj();
	GetDiaryRoot(var_65_object);
	var_66_bool = var_65_object == 0; //@nz
	if(var_66_bool != 0) {
		Trace("Can't retrieve diary root");
		var_63_object = 0;
		return 2;
	}
	var_65_object = var_63_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4665(var_387_bool, var_388_object)
{
	var_389_bool = 0; var_390_object = Obj();
	var_388_object = var_390_object;
	func_4783(var_389_bool, var_390_object);
	if(var_389_bool != 0) {
		var_387_bool = 1;
		return 0;
	}
	var_387_bool = 0;
	return 0;
}


func_3642(var_2_object, var_756_string)
{
	var_757_bool = 0;
	func_4415(var_757_bool);
	var_758_bool = var_757_bool == 0; //@nz
	if(var_758_bool != 0) {
		return 0;
	}
	var_759_bool = var_756_string == var_2_object;
	if(var_759_bool != 0) {
		return 0;
	}
	var_760_string = ""; var_761_bool = 0;
	var_756_string = var_760_string;
	var_763_bool = var_756_string == "";
	if(var_763_bool != 0) {
		var_761_bool = 0;
	} else {
		var_761_bool = 1;
	}
	func_4186(var_760_string, var_761_bool);
	var_2_object = var_756_string;
	return 0;
	
}


func_4409(var_119_int)
{
	var_119_int = 502872;
	return 0;
}


func_4411(var_121_string)
{
	var_121_string = "ui/NPC_MladVlad.png";
	return 0;
}


func_3388(var_2_object, var_697_string)
{
	var_698_bool = 0;
	func_4415(var_698_bool);
	var_699_bool = var_698_bool == 0; //@nz
	if(var_699_bool != 0) {
		return 0;
	}
	var_700_bool = var_697_string == var_2_object;
	if(var_700_bool != 0) {
		return 0;
	}
	var_701_string = ""; var_702_bool = 0;
	var_697_string = var_701_string;
	var_704_bool = var_697_string == "";
	if(var_704_bool != 0) {
		var_702_bool = 0;
	} else {
		var_702_bool = 1;
	}
	func_4186(var_701_string, var_702_bool);
	var_2_object = var_697_string;
	return 0;
	
}


func_4413(var_122_string)
{
	var_122_string = "ui/NPC_MladVlad_b.png";
	return 0;
}


func_4415(var_114_bool)
{
	var_114_bool = 1;
	return 0;
}


func_3903(var_230_object, var_231_string, var_232_int)
{
	var_233_int = 0; var_234_int = 0;
	@@var_230_object:GetProperty(var_231_string, var_234_int);
	var_235_int = var_234_int + var_232_int;
	@@var_230_object:SetProperty(var_231_string, var_235_int);
	return 2;
}


func_4417(var_124_object)
{
	var_126_bool = 0; var_127_object = Obj(); var_128_float = 0;
	var_124_object = var_127_object;
	func_4304(var_126_bool, var_127_object, (float)-0.05000000074505806);
	return 0;
}


func_4675(var_377_bool)
{
	var_379_int = 0; var_380_string = "";
	func_4268(var_379_int, "ook2MladVlad2");
	var_382_bool = var_379_int == (int)0;
	if(var_382_bool != 0) {
		var_377_bool = 1;
		return 0;
	}
	var_377_bool = 0;
	return 0;
}


func_4932(var_54_bool, var_55_object, var_56_int)
{
	var_57_object = Obj(); var_58_object = Obj(); var_59_int = 0; var_60_object = Obj(); var_61_object = Obj(); var_62_int = 0;
	func_4919(Obj());
	var_63_object = var_60_object;
	@@var_60_object:Find(var_56_int, var_61_object);
	var_68_bool = var_61_object == 0; //@nz
	if(var_68_bool != 0) {
		var_70_int = "Can't find diary parent with id: " + var_56_int;
		Trace(var_70_int);
		var_54_bool = 0;
		return 6;
	}
	@@var_61_object:AddChild(var_55_object);
	SendWorldWndMessage((int)7);
	@@var_55_object:GetCategory(var_62_int);
	SetDiarySection(var_62_int);
	var_54_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_3910(var_130_bool, var_131_cvector)
{
	var_132_cvector = CVector(0,0,0); var_133_cvector = CVector(0,0,0); var_134_bool = 0; var_135_cvector = CVector(0,0,0); var_136_cvector = CVector(0,0,0); var_137_bool = 0;
	GetPosition(var_135_cvector);
	var_136_cvector = var_131_cvector - var_135_cvector;
	var_138_float = GetByIndex(var_136_cvector, 0);
	var_139_float = GetByIndex(var_136_cvector, 2);
	Rotate(var_138_float, var_139_float, var_137_bool);
	var_137_bool = var_130_bool;
	return 6;
}


func_4424()
{
	var_175_object = Obj(); var_176_object = Obj();
	SetVariable("k2q01", (int)2);
	func_4960(Obj());
	var_179_object = var_176_object;
	var_184_float = 0;
	func_4349(var_184_float);
	@@var_176_object:AddMark("k2q01MladVladGotoOspina", "pt_map_ospina", (int)1, (int)539374, var_184_float);
	func_4802();
	return 2;
}
EMIT "Stack[-1] = 0";


func_4170(var_260_string)
{
	var_261_bool = 0; var_262_float = 0; var_263_float = 0; var_264_bool = 0; var_265_float = 0; var_266_float = 0;
	lshHasAnimation(var_264_bool, var_260_string);
	var_267_bool = var_264_bool;
	if(var_267_bool != 0) {
		lshGetAnimTimes(var_260_string, var_265_float, var_266_float);
		lshPlayAnimation(var_265_float, var_266_float, (bool)0);
	} else {
		var_270_int = "Can't find lsh animation : " + var_260_string;
		Trace(var_270_int);
	}
	return 6;
	
}


func_2123(var_0_bool, var_60_int, var_61_object)
{
	var_63_object = Obj(); var_64_bool = 0; var_65_int = 0; var_66_bool = 0; var_67_object = Obj(); var_68_bool = 0; var_69_int = 0; var_70_bool = 0;
	var_0_bool = var_61_object;
	var_71_bool = 0; var_72_object = Obj(); var_73_float = 0;
	var_61_object = var_72_object;
	func_3945(var_71_bool, var_72_object, (float)70.0);
	var_118_bool = var_71_bool == 0; //@nz
	if(var_118_bool != 0) {
		var_60_int = -2;
		return 8;
	}
	CreateDialog(var_67_object);
	var_119_int = 0;
	func_4409(var_119_int);
	@@var_67_object:SetNPCName(var_119_int);
	var_120_int = 0;
	func_4407(var_120_int);
	@@var_67_object:SetNPCDescription(var_120_int);
	var_121_string = "";
	func_4411(var_121_string);
	@@var_67_object:SetPhoto(var_121_string);
	var_122_string = "";
	func_4413(var_122_string);
	@@var_67_object:SetPhoto2(var_122_string);
	var_123_int = 0;
	func_5010(var_123_int);
	@@var_67_object:SetPlayerName(var_123_int);
	IsOverrideActive(var_68_bool);
	var_131_bool = var_68_bool;
	if(var_131_bool != 0) {
		var_60_int = -2;
		return 8;
	}
	DoDialog(var_67_object);
	var_132_bool = 0; var_133_object = Obj();
	func_4223(Obj());
	var_134_object = var_133_object;
	func_4032(var_132_bool, var_133_object);
	var_227_object = Obj(); var_228_object = Obj();
	var_61_object = var_227_object;
	var_67_object = var_228_object;
	TaskCall(9);
	func_2204(var_229_object, var_230_object, var_231_string, var_232_bool, var_227_object, var_228_object);
	TaskReturn();
	@@var_67_object:IsDialogEnd(var_70_bool);
	
Label_2186:
	var_276_bool = var_70_bool == 0; //@nz
	if(var_276_bool != 0) {
		sync();
		@@var_67_object:IsDialogEnd(var_70_bool);
		goto Label_2186;
	}
	var_61_object = Obj();
	func_4014();
	StopDialog(var_67_object);
	@@var_67_object:GetReturnValue((int)-1);
	var_69_int = var_60_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4687(var_399_bool)
{
	var_401_int = 0; var_402_string = "";
	func_4268(var_401_int, "k2q04");
	var_404_bool = var_401_int == (int)9;
	if(var_404_bool != 0) {
		var_399_bool = 1;
		return 0;
	}
	var_399_bool = 0;
	return 0;
}


func_3920(var_43_bool, var_44_object)
{
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0);
	@@var_44_object:GetPosition(var_46_cvector);
	var_47_bool = 0; var_48_cvector = CVector(0,0,0);
	var_46_cvector = var_48_cvector;
	func_3910(var_47_bool, var_48_cvector);
	var_47_bool = var_43_bool;
	return 2;
}


func_4186(var_238_string, var_239_bool)
{
	var_242_bool = 0; var_243_float = 0; var_244_float = 0; var_245_bool = 0; var_246_float = 0; var_247_float = 0;
	lshHasAnimation(var_245_bool, var_238_string);
	var_248_bool = var_245_bool;
	if(var_248_bool != 0) {
		lshGetAnimTimes(var_238_string, var_246_float, var_247_float);
		lshPlayAnimation(var_246_float, var_247_float, var_239_bool);
	} else {
		var_250_int = "Can't find lsh animation : " + var_238_string;
		Trace(var_250_int);
	}
	return 6;
	
}


func_4699(var_477_bool)
{
	var_479_int = 0; var_480_string = "";
	func_4268(var_479_int, "k3q01");
	var_482_bool = var_479_int == (int)2;
	if(var_482_bool != 0) {
		var_477_bool = 1;
		return 0;
	}
	var_477_bool = 0;
	return 0;
}


func_3325(var_0_bool, var_1_object, var_2_object, var_3_object, var_690_object, var_691_object)
{
	var_0_bool = var_691_object;
	var_1_object = var_690_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_697_string = "";
		func_3388(var_691_object, "Neutral");
		@@@var_0_bool:SetMessage((int)535231);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)535232, (int)36953, (int)36907);
		@@@var_0_bool:AddReply((int)535233, (int)-1, (int)36908);
		@@@var_0_bool:AddReply((int)535280, (int)-1, (int)36956);
		goto Label_3358;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xd01";
	}
Label_3358:
	var_715_bool = 0;
	func_4415(var_715_bool);
	if(var_715_bool != 0) {

	Label_3362:
		lshWaitForAnimEnd();
		var_716_object = var_3_object;
		if(var_716_object != 0) {
		} else {
			var_717_string = "";
			var_717_string = var_2_object;
			func_4170(var_717_string);
			goto Label_3362;
	}
		PlayAnimation("all", "idle");

	Label_3377:
		WaitForAnimEnd();
		var_720_object = var_3_object;
		if(var_720_object != 0) {
			goto Label_3387;
		}
		PlayAnimation("all", "idle");
		goto Label_3377;
	}
	goto Label_3387;
	
Label_3387:
	return 0;
	
}


func_3929(var_69_object)
{
	var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0);
	@@var_69_object:GetPosition(var_73_cvector);
	GetPosition(var_74_cvector);
	var_75_cvector = var_73_cvector - var_74_cvector;
	var_76_float = GetByIndex(var_75_cvector, 0);
	var_77_float = GetByIndex(var_75_cvector, 2);
	RotateAsync(var_76_float, var_77_float);
	return 6;
}


func_4447()
{
	SetVariable("ook2MladVlad1", (int)1);
	return 0;
}


func_4960(var_51_object)
{
	var_52_object = Obj(); var_53_object = Obj(); var_54_object = Obj(); var_55_object = Obj();
	GetMainOutdoorScene(var_54_object);
	var_56_bool = var_54_object == 0; //@ne
	if(var_56_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_55_object = 0;
		var_55_object = var_51_object;
		return 4;
	}
	@@var_54_object:GetMap(var_55_object);
	var_55_object = var_51_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1633(var_0_bool, var_436_int, var_437_object)
{
	var_439_object = Obj(); var_440_bool = 0; var_441_int = 0; var_442_bool = 0; var_443_object = Obj(); var_444_bool = 0; var_445_int = 0; var_446_bool = 0;
	var_0_bool = var_437_object;
	var_447_bool = 0; var_448_object = Obj(); var_449_float = 0;
	var_437_object = var_448_object;
	func_3945(var_447_bool, var_448_object, (float)70.0);
	var_450_bool = var_447_bool == 0; //@nz
	if(var_450_bool != 0) {
		var_436_int = -2;
		return 8;
	}
	CreateDialog(var_443_object);
	var_451_int = 0;
	func_4409(var_451_int);
	@@var_443_object:SetNPCName(var_451_int);
	var_452_int = 0;
	func_4407(var_452_int);
	@@var_443_object:SetNPCDescription(var_452_int);
	var_453_string = "";
	func_4411(var_453_string);
	@@var_443_object:SetPhoto(var_453_string);
	var_454_string = "";
	func_4413(var_454_string);
	@@var_443_object:SetPhoto2(var_454_string);
	var_455_int = 0;
	func_5010(var_455_int);
	@@var_443_object:SetPlayerName(var_455_int);
	IsOverrideActive(var_444_bool);
	var_456_bool = var_444_bool;
	if(var_456_bool != 0) {
		var_436_int = -2;
		return 8;
	}
	DoDialog(var_443_object);
	var_457_bool = 0; var_458_object = Obj();
	func_4223(Obj());
	var_459_object = var_458_object;
	func_4032(var_457_bool, var_458_object);
	var_460_object = Obj(); var_461_object = Obj();
	var_437_object = var_460_object;
	var_443_object = var_461_object;
	TaskCall(7);
	func_1714(var_462_object, var_463_object, var_464_string, var_465_bool, var_460_object, var_461_object);
	TaskReturn();
	@@var_443_object:IsDialogEnd(var_446_bool);
	
Label_1696:
	var_503_bool = var_446_bool == 0; //@nz
	if(var_503_bool != 0) {
		sync();
		@@var_443_object:IsDialogEnd(var_446_bool);
		goto Label_1696;
	}
	var_437_object = Obj();
	func_4014();
	StopDialog(var_443_object);
	@@var_443_object:GetReturnValue((int)-1);
	var_445_int = var_436_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4090(var_143_bool, var_144_object)
{
	var_145_string = ""; var_146_int = 0; var_147_bool = 0; var_148_int = 0; var_149_string = ""; var_150_string = ""; var_151_int = 0; var_152_bool = 0; var_153_int = 0; var_154_string = "";
	var_150_string = "c";
	var_151_int = 0;
	
Label_4093:
	if((int)1 != 0) {
		var_157_int = var_151_int + (int)1;
		var_158_int = var_150_string + var_157_int;
		@@var_144_object:HasProperty(var_158_int, var_152_bool);
		var_159_bool = var_152_bool == 0; //@nz
		if(var_159_bool != 0) {
		} else {
			var_151_int = var_151_int + (int)1;
			goto Label_4093;
		}
	}
	var_160_bool = var_151_int == 0; //@nz
	if(var_160_bool != 0) {
		var_143_bool = 0;
		return 10;
	}
	var_153_int = 0;
	var_162_bool = var_151_int > (int)1;
	if(var_162_bool != 0) {
		irand(var_153_int, var_151_int);
	}
	var_164_int = var_153_int + (int)1;
	var_165_int = var_150_string + var_164_int;
	@@var_144_object:GetProperty(var_165_int, var_154_string);
	var_166_bool = 0; var_167_string = "";
	var_154_string = var_167_string;
	func_4201(var_166_bool, var_167_string);
	var_166_bool = var_143_bool;
	return 10;
	
}


func_3940(var_77_bool)
{
	var_78_bool = 0; var_79_bool = 0;
	IsLoaded(var_79_bool);
	var_79_bool = var_77_bool;
	return 2;
}


func_4453()
{
	var_47_object = Obj(); var_48_object = Obj();
	SetVariable("k2q04", (int)1);
	func_4960(Obj());
	var_51_object = var_48_object;
	var_62_float = 0;
	func_4349(var_62_float);
	@@var_48_object:AddMark("k2q04MladVladGotoAnna", "pt_map_anna", (int)0, (int)508645, var_62_float);
	func_4815();
	func_4880();
	return 2;
}
EMIT "Stack[-1] = 0";


func_4711(var_483_bool)
{
	var_485_int = 0; var_486_string = "";
	func_4268(var_485_int, "ook3MladVlad1");
	var_488_bool = var_485_int == (int)0;
	if(var_488_bool != 0) {
		var_483_bool = 1;
		return 0;
	}
	var_483_bool = 0;
	return 0;
}


func_4201(var_166_bool, var_167_string)
{
	var_168_bool = 0; var_169_bool = 0;
	var_170_bool = 0;
	func_4415(var_170_bool);
	if(var_170_bool != 0) {
		lshHasSpeech(var_169_bool, var_167_string);
		var_171_bool = var_169_bool;
		if(var_171_bool != 0) {
			lshPlaySpeech(var_167_string);
			var_166_bool = 1;
			return 2;
		}
	}
	var_166_bool = 0;
	return 2;
}


func_3945(var_71_bool, var_72_object, var_73_float)
{
	var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_bool = 0; var_82_bool = 0; var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_bool = 0; var_91_bool = 0;
	@@var_72_object:GetPosition(var_84_cvector);
	@@var_72_object:GetEyesHeight(var_83_float);
	var_92_float = GetByIndex(var_84_cvector, 1);
	var_92_float = var_92_float + var_83_float;
	SetByIndex(var_84_cvector, 1) = var_92_float;
	GetPosition(var_85_cvector);
	GetEyesHeight(var_83_float);
	var_93_float = GetByIndex(var_85_cvector, 1);
	var_93_float = var_93_float + var_83_float;
	SetByIndex(var_85_cvector, 1) = var_93_float;
	var_86_cvector = var_84_cvector - var_85_cvector;
	var_94_float = GetByIndex(var_86_cvector, 1);
	SetByIndex(var_86_cvector, 1) = (float)0;
	var_95_int = var_86_cvector | var_86_cvector;
	var_96_float = sqrt(var_95_int);
	var_86_cvector = var_86_cvector / var_96_float;
	var_87_cvector = -var_86_cvector;
	var_97_float = var_86_cvector * var_73_float;
	var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0);
	var_99_cvector = var_87_cvector ^ CVector(0.0, 1.0, 0.0);
	func_4229(var_98_cvector, var_99_cvector);
	var_107_float = var_98_cvector * (int)25;
	var_108_int = var_97_float + var_107_float;
	var_88_cvector = var_108_int - CVector(0.0, 10.0, 0.0);
	var_89_cvector = var_85_cvector + var_88_cvector;
	IsOverrideActive(var_90_bool);
	var_110_bool = var_90_bool;
	if(var_110_bool != 0) {
		var_71_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_89_cvector, var_87_cvector, (bool)1);
	var_112_float = GetByIndex(var_88_cvector, 0);
	var_113_float = GetByIndex(var_88_cvector, 2);
	Rotate(var_112_float, var_113_float);
	var_114_bool = 0;
	func_4415(var_114_bool);
	if(var_114_bool != 0) {
	} else {
		HasAnimationTrack(var_91_bool, "head");
		var_116_bool = var_91_bool;
		if(var_116_bool == 0) goto Label_4008;
		LookAsyncCamera("head");
	}
Label_4008:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_71_bool = 1;
	return 18;
	
}


func_363(var_0_bool, var_1_object, var_2_object, var_3_object, var_313_object, var_314_object)
{
	var_0_bool = var_314_object;
	var_1_object = var_313_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_320_bool = 0;
		var_320_bool = 0;
		var_321_bool = 0; var_322_object = Obj();
		var_322_object = var_1_object;
		func_4629(var_322_object);
		if(var_321_bool != 0) {
			var_329_bool = 0; var_330_object = Obj();
			var_330_object = var_1_object;
			func_4617(var_330_object);
			var_335_bool = var_329_bool == 0; //@nz
			if(var_335_bool != 0) {
				var_320_bool = 1;
			}
		}
		if(var_320_bool != 0) {
			var_336_object = Obj(); var_337_object = Obj();
			var_336_object = var_1_object;
			var_337_object = var_0_bool;
			func_4447();
			var_340_string = "";
			func_539(var_314_object, "Neutral");
			@@@var_0_bool:SetMessage((int)525337);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)525338, (int)44250, (int)26706);
			@@@var_0_bool:AddReply((int)539465, (int)44260, (int)41388);
		} else {
				var_363_string = "";
				func_539(var_314_object, "Neutral");
				@@@var_0_bool:SetMessage((int)525237);
				@@@var_0_bool:ClearReplies();
				var_365_bool = 0; var_366_object = Obj();
				var_366_object = var_1_object;
				func_4617(var_366_object);
				if(var_365_bool != 0) {
					@@@var_0_bool:AddReply((int)525238, (int)26607, (int)26606);
				}
				var_370_bool = 0;
				var_370_bool = 0;
				var_371_bool = 0; var_372_object = Obj();
				var_372_object = var_1_object;
				func_4641(var_372_object);
				if(var_371_bool != 0) {
					var_377_bool = 0; var_378_object = Obj();
					var_378_object = var_1_object;
					func_4675(var_378_object);
					if(var_377_bool != 0) {
						var_370_bool = 1;
					}
				}
				if(var_370_bool != 0) {
					@@@var_0_bool:AddReply((int)525372, (int)26741, (int)26740);
				}
				var_386_bool = 0;
				var_386_bool = 0;
				var_387_bool = 0; var_388_object = Obj();
				var_388_object = var_1_object;
				func_4665(var_387_bool, var_388_object);
				if(var_387_bool != 0) {
					var_399_bool = 0; var_400_object = Obj();
					var_400_object = var_1_object;
					func_4687(var_400_object);
					if(var_399_bool != 0) {
						var_386_bool = 1;
					}
				}
				if(var_386_bool != 0) {
					@@@var_0_bool:AddReply((int)525369, (int)44309, (int)26737);
				}
				var_408_bool = 0;
				var_408_bool = 0;
				var_409_bool = 0; var_410_object = Obj();
				var_410_object = var_1_object;
				func_4665(var_409_bool, var_410_object);
				var_411_bool = var_409_bool == 0; //@nz
				if(var_411_bool != 0) {
					var_412_bool = 0; var_413_object = Obj();
					var_413_object = var_1_object;
					func_4687(var_413_object);
					if(var_412_bool != 0) {
						var_408_bool = 1;
					}
				}
				if(var_408_bool != 0) {
					@@@var_0_bool:AddReply((int)525381, (int)26750, (int)26749);
				}
				var_417_bool = 0; var_418_object = Obj();
				var_418_object = var_1_object;
				func_4653(var_418_object);
				if(var_417_bool != 0) {
					@@@var_0_bool:AddReply((int)525375, (int)26744, (int)26743);
				}
				@@@var_0_bool:AddReply((int)525243, (int)-1, (int)26611);
				@@@var_0_bool:AddReply((int)529207, (int)-1, (int)30658);
				goto Label_509;
		}
	}
Label_509:
	var_355_bool = 0;
	func_4415(var_355_bool);
	if(var_355_bool != 0) {

	Label_513:
		lshWaitForAnimEnd();
		var_356_object = var_3_object;
		if(var_356_object != 0) {
		} else {
			var_357_string = "";
			var_357_string = var_2_object;
			func_4170(var_357_string);
			goto Label_513;
	}
		PlayAnimation("all", "idle");

	Label_528:
		WaitForAnimEnd();
		var_360_object = var_3_object;
		if(var_360_object != 0) {
			goto Label_538;
		}
		PlayAnimation("all", "idle");
		goto Label_528;

	}
	goto Label_538;
	
Label_538:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x16f";


func_2929(var_2_object, var_621_string)
{
	var_622_bool = 0;
	func_4415(var_622_bool);
	var_623_bool = var_622_bool == 0; //@nz
	if(var_623_bool != 0) {
		return 0;
	}
	var_624_bool = var_621_string == var_2_object;
	if(var_624_bool != 0) {
		return 0;
	}
	var_625_string = ""; var_626_bool = 0;
	var_621_string = var_625_string;
	var_628_bool = var_621_string == "";
	if(var_628_bool != 0) {
		var_626_bool = 0;
	} else {
		var_626_bool = 1;
	}
	func_4186(var_625_string, var_626_bool);
	var_2_object = var_621_string;
	return 0;
	
}


func_4977(var_98_object, var_99_string, var_100_float)
{
	var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_object = Obj(); var_105_bool = 0; var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_object = Obj(); var_109_bool = 0;
	GetMainOutdoorScene(var_108_object);
	var_110_bool = var_108_object == 0; //@ne
	if(var_110_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_108_object:GetLocator(var_99_string, var_109_bool, var_106_cvector, var_107_cvector);
	var_112_bool = var_109_bool == 0; //@nz
	if(var_112_bool != 0) {
		var_114_int = "Warning: outdoor scene locator " + var_99_string;
		var_116_int = var_114_int + " doesnt exist";
		Trace(var_116_int);
	}
	@@var_108_object:GetMap(var_98_object);
	var_117_bool = var_98_object == 0; //@ne
	if(var_117_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_119_float = GetByIndex(var_106_cvector, 0);
	var_120_float = GetByIndex(var_106_cvector, 2);
	@@var_98_object:SetMapParams(var_119_float, var_120_float, var_100_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_4723(var_548_bool)
{
	var_550_int = 0; var_551_string = "";
	func_4268(var_550_int, "k5q01");
	var_553_bool = var_550_int == (int)1;
	if(var_553_bool != 0) {
		var_548_bool = 1;
		return 0;
	}
	var_548_bool = 0;
	return 0;
}


func_4216()
{
	var_42_bool = 0;
	func_4415(var_42_bool);
	if(var_42_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2430(var_0_bool, var_1_object, var_2_object, var_3_object, var_531_object, var_532_object)
{
	var_0_bool = var_532_object;
	var_1_object = var_531_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_538_string = "";
		func_2517(var_532_object, "Neutral");
		@@@var_0_bool:SetMessage((int)525841);
		@@@var_0_bool:ClearReplies();
		var_547_bool = 0;
		var_547_bool = 0;
		var_548_bool = 0; var_549_object = Obj();
		var_549_object = var_1_object;
		func_4723(var_549_object);
		if(var_548_bool != 0) {
			var_554_bool = 0; var_555_object = Obj();
			var_555_object = var_1_object;
			func_4735(var_555_object);
			if(var_554_bool != 0) {
				var_547_bool = 1;
			}
		}
		if(var_547_bool != 0) {
			@@@var_0_bool:AddReply((int)525842, (int)30544, (int)27141);
		}
		var_563_bool = 0; var_564_object = Obj();
		var_564_object = var_1_object;
		func_4771(var_564_object);
		if(var_563_bool != 0) {
			@@@var_0_bool:AddReply((int)525845, (int)30542, (int)27144);
		}
		@@@var_0_bool:AddReply((int)529095, (int)-1, (int)30540);
		@@@var_0_bool:AddReply((int)529096, (int)-1, (int)30541);
		goto Label_2487;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x982";
	}
Label_2487:
	var_578_bool = 0;
	func_4415(var_578_bool);
	if(var_578_bool != 0) {

	Label_2491:
		lshWaitForAnimEnd();
		var_579_object = var_3_object;
		if(var_579_object != 0) {
		} else {
			var_580_string = "";
			var_580_string = var_2_object;
			func_4170(var_580_string);
			goto Label_2491;
	}
		PlayAnimation("all", "idle");

	Label_2506:
		WaitForAnimEnd();
		var_583_object = var_3_object;
		if(var_583_object != 0) {
			goto Label_2516;
		}
		PlayAnimation("all", "idle");
		goto Label_2506;
	}
	goto Label_2516;
	
Label_2516:
	return 0;
	
}


func_4223(var_134_object)
{
	var_135_object = Obj(); var_136_object = Obj();
	self(var_136_object);
	var_136_object = var_134_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4735(var_554_bool)
{
	var_556_int = 0; var_557_string = "";
	func_4268(var_556_int, "ook5MladVlad1");
	var_559_bool = var_556_int == (int)0;
	if(var_559_bool != 0) {
		var_554_bool = 1;
		return 0;
	}
	var_554_bool = 0;
	return 0;
}


func_3713(var_0_bool, var_1_object, var_2_object)
{
	var_40_object = Obj(); var_41_bool = 0; var_42_int = 0; var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_bool = 0; var_50_cvector = CVector(0,0,0); var_51_object = Obj(); var_52_bool = 0; var_53_int = 0; var_54_bool = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_bool = 0; var_61_cvector = CVector(0,0,0);
	SensePlayerOnly((bool)1);
	func_3801();
	GetScene(var_51_object);
	var_2_object = 0;
	
Label_3723:
	var_67_string = ""; var_68_int = 0;
	var_68_int = var_2_object;
	func_4393(var_67_string, var_68_int);
	@@var_51_object:GetLocator(var_67_string, var_52_bool);
	var_76_bool = var_52_bool == 0; //@nz
	if(var_76_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_3723;
	}
	var_77_bool = 0;
	func_3940(var_77_bool);
	var_80_bool = var_77_bool == 0; //@nz
	if(var_80_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_3809(var_60_bool, var_61_cvector);
	
Label_3748:
	irand(var_53_int, var_2_object);
	var_101_string = ""; var_102_int = 0;
	var_53_int = var_102_int;
	func_4393(var_101_string, var_102_int);
	@@var_51_object:GetLocator(var_101_string, var_54_bool, var_55_cvector, var_56_cvector);
	var_103_cvector = CVector(0,0,0);
	func_3856(var_103_cvector);
	var_57_cvector = var_55_cvector - var_103_cvector;
	var_106_float = 0; var_107_cvector = CVector(0,0,0);
	var_57_cvector = var_107_cvector;
	func_4258(var_106_float, var_107_cvector);
	var_115_bool = var_106_float > var_1_object;
	if(var_115_bool != 0) {
		GetHeight(var_58_float);
		var_55_cvector = var_59_cvector;
		var_116_float = GetByIndex(var_59_cvector, 1);
		var_116_float = var_116_float + var_58_float;
		SetByIndex(var_59_cvector, 1) = var_116_float;
		CanReachByPF(var_60_bool, var_59_cvector);
		var_117_bool = var_60_bool;
		if(var_117_bool != 0) {
			var_118_int = var_57_cvector | var_57_cvector;
			var_119_float = sqrt(var_118_int);
			var_120_float = var_0_bool / var_119_float;
			var_121_float = var_57_cvector * var_120_float;
			var_61_cvector = var_55_cvector - var_121_float;
			var_122_bool = 0; var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0);
			var_61_cvector = var_123_cvector;
			var_56_cvector = var_124_cvector;
			TaskCall(1);
			func_13(var_125_bool, var_122_bool, var_123_cvector, var_124_cvector);
			TaskReturn();
			if(var_125_bool != 0) {
				var_149_int = 0;
				var_53_int = var_149_int;
				TaskCall(3);
				func_198(var_149_int);
				TaskReturn();
			}
		}
	}
	Sleep((int)1);
	goto Label_3748;
	
}
EMIT "Return(); Pop(22)";
EMIT "Stack[-11] = 0";


func_4479()
{
	SetVariable("ook2MladVlad2", (int)1);
	return 0;
}


func_4229(var_98_cvector, var_99_cvector)
{
	var_101_float = 0; var_102_float = 0;
	var_103_int = var_99_cvector | var_99_cvector;
	var_102_float = sqrt(var_103_int);
	var_104_float = 9.999999974752427e-07;
	var_105_bool = var_102_float < var_104_float;
	if(var_105_bool != 0) {
		var_98_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_98_cvector = var_99_cvector / var_102_float;
	return 2;
}


func_4485(var_205_object)
{
	var_207_int = 0; var_208_int = 0;
	SetVariable("k2q04", (int)1000);
	func_4828();
	@@var_205_object:RemoveItemByType(var_208_int, "alpha_pills", (int)4);
	@@var_205_object:RemoveItemByType(var_208_int, "beta_pills", (int)4);
	return 2;
}


func_4747(var_639_bool)
{
	var_641_int = 0; var_642_string = "";
	func_4268(var_641_int, "k6q01");
	var_644_bool = var_641_int == (int)1;
	if(var_644_bool != 0) {
		var_639_bool = 1;
		return 0;
	}
	var_639_bool = 0;
	return 0;
}


func_4239(var_95_float, var_96_float)
{
	var_99_bool = var_96_float < (int)0;
	if(var_99_bool != 0) {
		var_95_float = -var_96_float;
	} else {
		var_96_float = var_95_float;
	}
	return 0;
	
}


func_145()
{
	Stop();
	return 0;
}


func_5010(var_123_int)
{
	var_124_int = 0; var_125_int = 0;
	GetVariable("branch", var_125_int);
	var_128_bool = var_125_int == (int)0;
	if(var_128_bool != 0) {
		var_123_int = 1;
		return 2;
	EMIT "GOTO 0x13a1";
	}
	var_130_bool = var_125_int == (int)1;
	if(var_130_bool != 0) {
		var_123_int = 2;
		return 2;
	}
	var_123_int = 3;
	return 2;
}


func_148(var_65_object)
{
	var_66_bool = 0; var_67_bool = 0;
	WaitForAnimEnd(var_67_bool);
	var_68_bool = var_67_bool == 0; //@nz
	if(var_68_bool != 0) {
		return 2;
	}
	var_69_object = Obj();
	var_65_object = var_69_object;
	func_3929(var_69_object);
	Sleep((int)6);
	return 2;
}


func_4502()
{
	SetVariable("k2q04", (int)1000);
	func_4841();
	return 0;
}


func_4759(var_630_bool)
{
	var_632_int = 0; var_633_string = "";
	func_4268(var_632_int, "k6q02");
	var_635_bool = var_632_int == (int)2;
	if(var_635_bool != 0) {
		var_630_bool = 1;
		return 0;
	}
	var_630_bool = 0;
	return 0;
}


func_4247(var_155_float, var_156_float, var_157_float, var_158_float)
{
	var_159_bool = var_156_float < var_157_float;
	if(var_159_bool != 0) {
		var_157_float = var_155_float;
		return 0;
	}
	var_160_bool = var_156_float > var_158_float;
	if(var_160_bool != 0) {
		var_158_float = var_155_float;
		return 0;
	}
	var_156_float = var_155_float;
	return 0;
}


func_2204(var_0_bool, var_1_object, var_2_object, var_3_object, var_227_object, var_228_object)
{
	var_0_bool = var_228_object;
	var_1_object = var_227_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_234_string = "";
		func_2262(var_228_object, "Neutral");
		@@@var_0_bool:SetMessage((int)525513);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)525514, (int)30738, (int)26870);
		@@@var_0_bool:AddReply((int)529284, (int)30738, (int)30737);
		goto Label_2232;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x8a0";
	}
Label_2232:
	var_258_bool = 0;
	func_4415(var_258_bool);
	if(var_258_bool != 0) {

	Label_2236:
		lshWaitForAnimEnd();
		var_259_object = var_3_object;
		if(var_259_object != 0) {
		} else {
			var_260_string = "";
			var_260_string = var_2_object;
			func_4170(var_260_string);
			goto Label_2236;
	}
		PlayAnimation("all", "idle");

	Label_2251:
		WaitForAnimEnd();
		var_273_object = var_3_object;
		if(var_273_object != 0) {
			goto Label_2261;
		}
		PlayAnimation("all", "idle");
		goto Label_2251;
	}
	goto Label_2261;
	
Label_2261:
	return 0;
	
}


func_4511()
{
	SetVariable("k2q04", (int)1000);
	func_4854();
	return 0;
}


func_4258(var_106_float, var_107_cvector)
{
	var_108_float = GetByIndex(var_107_cvector, 0);
	var_109_float = GetByIndex(var_107_cvector, 0);
	var_110_float = var_108_float * var_109_float;
	var_111_float = GetByIndex(var_107_cvector, 2);
	var_112_float = GetByIndex(var_107_cvector, 2);
	var_113_float = var_111_float * var_112_float;
	var_114_int = var_110_float + var_113_float;
	var_106_float = sqrt(var_114_int);
	return 0;
}


func_4771(var_563_bool)
{
	var_565_int = 0; var_566_string = "";
	func_4268(var_565_int, "ook5MladVlad2");
	var_568_bool = var_565_int == (int)0;
	if(var_568_bool != 0) {
		var_563_bool = 1;
		return 0;
	}
	var_563_bool = 0;
	return 0;
}


func_5027(var_57_object)
{
	var_58_bool = GlobalVars[2];
	var_59_bool = var_58_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_60_int = 0; var_61_object = Obj();
		var_57_object = var_61_object;
		TaskCall(8);
		func_2123(var_62_object, var_60_int, var_61_object);
		TaskReturn();
		var_285_bool = GlobalVars[2];
		GlobalVars[2] = (bool)1;
	}
	var_286_bool = 0; var_287_int = 0;
	func_4363(var_286_bool, (int)2);
	if(var_286_bool != 0) {
		var_289_int = 0; var_290_object = Obj();
		var_57_object = var_290_object;
		TaskCall(4);
		func_282(var_291_object, var_289_int, var_290_object);
		TaskReturn();
		return 0;
	}
	var_434_bool = 0; var_435_int = 0;
	func_4363(var_434_bool, (int)3);
	if(var_434_bool != 0) {
		var_436_int = 0; var_437_object = Obj();
		var_57_object = var_437_object;
		TaskCall(6);
		func_1633(var_438_object, var_436_int, var_437_object);
		TaskReturn();
		return 0;
	}
	var_505_bool = 0; var_506_int = 0;
	func_4363(var_505_bool, (int)5);
	if(var_505_bool != 0) {
		var_507_int = 0; var_508_object = Obj();
		var_57_object = var_508_object;
		TaskCall(10);
		func_2349(var_509_object, var_507_int, var_508_object);
		TaskReturn();
		return 0;
	}
	var_588_bool = 0; var_589_int = 0;
	func_4363(var_588_bool, (int)6);
	if(var_588_bool != 0) {
		var_590_int = 0; var_591_object = Obj();
		var_57_object = var_591_object;
		TaskCall(12);
		func_2770(var_592_object, var_590_int, var_591_object);
		TaskReturn();
		return 0;
	}
	var_664_bool = 0; var_665_int = 0;
	func_4363(var_664_bool, (int)12);
	if(var_664_bool != 0) {
		var_666_int = 0; var_667_object = Obj();
		var_57_object = var_667_object;
		TaskCall(14);
		func_3244(var_668_object, var_666_int, var_667_object);
		TaskReturn();
		return 0;
	}
	var_725_int = 0; var_726_object = Obj();
	var_57_object = var_726_object;
	TaskCall(16);
	func_3503(var_727_object, var_725_int, var_726_object);
	TaskReturn();
	return 0;
}


func_4520()
{
	SetVariable("k2q04", (int)1000);
	func_4867();
	return 0;
}


func_4268(var_323_int, var_324_string)
{
	var_325_int = 0; var_326_int = 0;
	GetVariable(var_324_string, var_326_int);
	var_326_int = var_323_int;
	return 2;
}


func_3244(var_0_bool, var_666_int, var_667_object)
{
	var_669_object = Obj(); var_670_bool = 0; var_671_int = 0; var_672_bool = 0; var_673_object = Obj(); var_674_bool = 0; var_675_int = 0; var_676_bool = 0;
	var_0_bool = var_667_object;
	var_677_bool = 0; var_678_object = Obj(); var_679_float = 0;
	var_667_object = var_678_object;
	func_3945(var_677_bool, var_678_object, (float)70.0);
	var_680_bool = var_677_bool == 0; //@nz
	if(var_680_bool != 0) {
		var_666_int = -2;
		return 8;
	}
	CreateDialog(var_673_object);
	var_681_int = 0;
	func_4409(var_681_int);
	@@var_673_object:SetNPCName(var_681_int);
	var_682_int = 0;
	func_4407(var_682_int);
	@@var_673_object:SetNPCDescription(var_682_int);
	var_683_string = "";
	func_4411(var_683_string);
	@@var_673_object:SetPhoto(var_683_string);
	var_684_string = "";
	func_4413(var_684_string);
	@@var_673_object:SetPhoto2(var_684_string);
	var_685_int = 0;
	func_5010(var_685_int);
	@@var_673_object:SetPlayerName(var_685_int);
	IsOverrideActive(var_674_bool);
	var_686_bool = var_674_bool;
	if(var_686_bool != 0) {
		var_666_int = -2;
		return 8;
	}
	DoDialog(var_673_object);
	var_687_bool = 0; var_688_object = Obj();
	func_4223(Obj());
	var_689_object = var_688_object;
	func_4032(var_687_bool, var_688_object);
	var_690_object = Obj(); var_691_object = Obj();
	var_667_object = var_690_object;
	var_673_object = var_691_object;
	TaskCall(15);
	func_3325(var_692_object, var_693_object, var_694_string, var_695_bool, var_690_object, var_691_object);
	TaskReturn();
	@@var_673_object:IsDialogEnd(var_676_bool);
	
Label_3307:
	var_723_bool = var_676_bool == 0; //@nz
	if(var_723_bool != 0) {
		sync();
		@@var_673_object:IsDialogEnd(var_676_bool);
		goto Label_3307;
	}
	var_667_object = Obj();
	func_4014();
	StopDialog(var_673_object);
	@@var_673_object:GetReturnValue((int)-1);
	var_675_int = var_666_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4014()
{
	var_278_bool = 0; var_279_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_281_bool = 0;
	func_4415(var_281_bool);
	if(var_281_bool != 0) {
	} else {
		HasAnimationTrack(var_279_bool, "head");
		var_283_bool = var_279_bool;
		if(var_283_bool == 0) goto Label_4031;
		UnlookAsync("head");
	}
Label_4031:
	return 2;
	
}


func_4783(var_389_bool, var_390_object)
{
	var_391_int = 0; var_392_int = 0;
	@@var_390_object:GetItemCountOfType(var_392_int, "alpha_pills");
	var_395_bool = var_392_int < (int)4;
	if(var_395_bool != 0) {
		var_389_bool = 0;
		return 2;
	}
	@@var_390_object:GetItemCountOfType(var_392_int, "beta_pills");
	var_398_bool = var_392_int < (int)4;
	if(var_398_bool != 0) {
		var_389_bool = 0;
		return 2;
	}
	var_389_bool = 1;
	return 2;
}


func_3503(var_0_bool, var_725_int, var_726_object)
{
	var_728_object = Obj(); var_729_bool = 0; var_730_int = 0; var_731_bool = 0; var_732_object = Obj(); var_733_bool = 0; var_734_int = 0; var_735_bool = 0;
	var_0_bool = var_726_object;
	var_736_bool = 0; var_737_object = Obj(); var_738_float = 0;
	var_726_object = var_737_object;
	func_3945(var_736_bool, var_737_object, (float)70.0);
	var_739_bool = var_736_bool == 0; //@nz
	if(var_739_bool != 0) {
		var_725_int = -2;
		return 8;
	}
	CreateDialog(var_732_object);
	var_740_int = 0;
	func_4409(var_740_int);
	@@var_732_object:SetNPCName(var_740_int);
	var_741_int = 0;
	func_4407(var_741_int);
	@@var_732_object:SetNPCDescription(var_741_int);
	var_742_string = "";
	func_4411(var_742_string);
	@@var_732_object:SetPhoto(var_742_string);
	var_743_string = "";
	func_4413(var_743_string);
	@@var_732_object:SetPhoto2(var_743_string);
	var_744_int = 0;
	func_5010(var_744_int);
	@@var_732_object:SetPlayerName(var_744_int);
	IsOverrideActive(var_733_bool);
	var_745_bool = var_733_bool;
	if(var_745_bool != 0) {
		var_725_int = -2;
		return 8;
	}
	DoDialog(var_732_object);
	var_746_bool = 0; var_747_object = Obj();
	func_4223(Obj());
	var_748_object = var_747_object;
	func_4032(var_746_bool, var_747_object);
	var_749_object = Obj(); var_750_object = Obj();
	var_726_object = var_749_object;
	var_732_object = var_750_object;
	TaskCall(17);
	func_3584(var_751_object, var_752_object, var_753_string, var_754_bool, var_749_object, var_750_object);
	TaskReturn();
	@@var_732_object:IsDialogEnd(var_735_bool);
	
Label_3566:
	var_779_bool = var_735_bool == 0; //@nz
	if(var_779_bool != 0) {
		sync();
		@@var_732_object:IsDialogEnd(var_735_bool);
		goto Label_3566;
	}
	var_726_object = Obj();
	func_4014();
	StopDialog(var_732_object);
	@@var_732_object:GetReturnValue((int)-1);
	var_734_int = var_725_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4273(var_239_int, var_240_int)
{
	var_241_object = Obj(); var_242_object = Obj();
	CreateIntVector(var_242_object);
	@@var_242_object:add(var_239_int);
	@@var_242_object:add(var_240_int);
	SendWorldWndMessage((int)3, var_242_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1714(var_0_bool, var_1_object, var_2_object, var_3_object, var_460_object, var_461_object)
{
	var_0_bool = var_461_object;
	var_1_object = var_460_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_467_string = "";
		func_1786(var_461_object, "Neutral");
		@@@var_0_bool:SetMessage((int)525414);
		@@@var_0_bool:ClearReplies();
		var_476_bool = 0;
		var_476_bool = 0;
		var_477_bool = 0; var_478_object = Obj();
		var_478_object = var_1_object;
		func_4699(var_478_object);
		if(var_477_bool != 0) {
			var_483_bool = 0; var_484_object = Obj();
			var_484_object = var_1_object;
			func_4711(var_484_object);
			if(var_483_bool != 0) {
				var_476_bool = 1;
			}
		}
		if(var_476_bool != 0) {
			@@@var_0_bool:AddReply((int)525415, (int)42567, (int)26783);
		}
		@@@var_0_bool:AddReply((int)525418, (int)-1, (int)26786);
		goto Label_1756;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x6b6";
	}
Label_1756:
	var_495_bool = 0;
	func_4415(var_495_bool);
	if(var_495_bool != 0) {

	Label_1760:
		lshWaitForAnimEnd();
		var_496_object = var_3_object;
		if(var_496_object != 0) {
		} else {
			var_497_string = "";
			var_497_string = var_2_object;
			func_4170(var_497_string);
			goto Label_1760;
	}
		PlayAnimation("all", "idle");

	Label_1775:
		WaitForAnimEnd();
		var_500_object = var_3_object;
		if(var_500_object != 0) {
			goto Label_1785;
		}
		PlayAnimation("all", "idle");
		goto Label_1775;
	}
	goto Label_1785;
	
Label_1785:
	return 0;
	
}


func_4529()
{
	SetVariable("ook3MladVlad1", (int)1);
	return 0;
}


func_4535()
{
	SetVariable("ook5MladVlad1", (int)1);
	return 0;
}


func_4285(var_226_object, var_227_int)
{
	var_228_int = 0; var_229_int = 0;
	var_230_object = Obj(); var_231_string = ""; var_232_int = 0;
	var_226_object = var_230_object;
	var_227_int = var_232_int;
	func_3903(var_230_object, "money", var_232_int);
	var_237_bool = var_227_int > (int)0;
	if(var_237_bool != 0) {
		GetInvItemByName(var_229_int, "Money");
		var_239_int = 0; var_240_int = 0;
		var_229_int = var_239_int;
		var_227_int = var_240_int;
		func_4273(var_239_int, var_240_int);
	}
	return 2;
}


func_4541()
{
	func_4893();
	return 0;
}


func_4032(var_132_bool, var_133_object)
{
	var_137_int = 0; var_138_int = 0; var_139_int = 0; var_140_int = 0;
	GetVariable("voice_common", var_139_int);
	var_142_int = var_139_int;
	if(var_142_int != 0) {
		var_143_bool = 0; var_144_object = Obj();
		var_133_object = var_144_object;
		func_4090(var_143_bool, var_144_object);
		var_173_bool = var_143_bool == 0; //@nz
		if(var_173_bool != 0) {
			var_174_bool = 0; var_175_object = Obj();
			var_133_object = var_175_object;
			func_4127(var_174_bool, var_175_object);
			var_209_bool = var_174_bool == 0; //@nz
			if(var_209_bool != 0) {
				var_132_bool = 0;
				return 4;
			}
		}
		irand(var_140_int, (int)2);
		var_211_int = var_140_int;
		if(var_211_int != 0) {
			var_214_int = var_139_int + (int)1;
			var_216_int = var_214_int % (int)3;
			SetVariable("voice_common", var_216_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_219_bool = 0; var_220_object = Obj();
		var_133_object = var_220_object;
		func_4127(var_219_bool, var_220_object);
		var_221_bool = var_219_bool == 0; //@nz
		if(var_221_bool != 0) {
			var_222_bool = 0; var_223_object = Obj();
			var_133_object = var_223_object;
			func_4090(var_222_bool, var_223_object);
			var_224_bool = var_222_bool == 0; //@nz
			if(var_224_bool != 0) {
				var_132_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_4088;
	
Label_4088:
	var_132_bool = 1;
	return 4;
	
}


func_193()
{
	StopGroup0();
	StopAnimation();
	return 0;
}


func_4802()
{
	var_185_object = Obj(); var_186_object = Obj();
	CreateDiaryEntry(var_186_object, (int)463, (int)1, (int)527779);
	var_190_bool = 0; var_191_object = Obj(); var_192_int = 0;
	var_186_object = var_191_object;
	func_4932(var_190_bool, var_191_object, (int)461);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4546()
{
	SetVariable("k6q02", (int)3);
	func_4906();
	return 0;
}


func_198(var_149_int)
{
	var_150_string = ""; var_151_bool = 0; var_152_string = ""; var_153_int = 0; var_154_int = 0; var_155_int = 0; var_156_int = 0; var_157_string = ""; var_158_bool = 0; var_159_string = ""; var_160_int = 0; var_161_int = 0; var_162_int = 0; var_163_int = 0;
	var_164_int = var_149_int;
	if(var_164_int != 0) {
		var_157_string = "ptidle" + var_149_int;
	} else {
			var_157_string = "ptidle";
	}
	HasProperty(var_157_string, var_158_bool);
	var_166_bool = var_158_bool;
	if(var_166_bool != 0) {
		GetProperty(var_157_string, var_159_string);
		var_167_int = 0; var_168_string = "";
		var_159_string = var_168_string;
		func_264(var_167_int, var_168_string);
		var_167_int = var_160_int;
		irand(var_161_int, var_160_int);
		var_182_string = ""; var_183_string = ""; var_184_int = 0;
		var_159_string = var_183_string;
		var_161_int = var_184_int;
		func_256(var_182_string, var_183_string, var_184_int);
		PlayAnimation("all", var_182_string);
		WaitForAnimEnd();
	} else {
		func_4376((int)0);
		var_185_int = var_162_int;
		var_198_int = var_162_int;
		if(var_198_int == 0) goto Label_246;
		irand(var_163_int, var_162_int);
		var_200_string = ""; var_201_int = 0;
		var_163_int = var_201_int;
		func_4369(var_200_string, var_201_int);
		PlayAnimation("all", var_200_string);
		WaitForAnimEnd();

	}
Label_246:
	return 14;
	
}


func_4555(var_278_object)
{
	Trace("money1000 is given");
	var_281_object = Obj(); var_282_int = 0;
	var_278_object = var_281_object;
	func_4285(var_281_object, (int)1000);
	return 0;
}


func_4815()
{
	var_65_object = Obj(); var_66_object = Obj();
	CreateDiaryEntry(var_66_object, (int)507, (int)2, (int)529706);
	var_70_bool = 0; var_71_object = Obj(); var_72_int = 0;
	var_66_object = var_71_object;
	func_4932(var_70_bool, var_71_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4304(var_126_bool, var_127_object, var_128_float)
{
	var_129_bool = var_127_object == 0; //@nz
	if(var_129_bool != 0) {
		var_126_bool = 0;
		return 0;
	}
	var_131_bool = var_128_float > (int)0;
	if(var_131_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_162_bool = var_128_float < (int)0;
		if(var_162_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_4325;
		}
		var_126_bool = 0;
		return 0;
	}
Label_4325:
	var_133_float = 0;
	var_128_float = var_133_float;
	func_4339(var_133_float);
	var_137_bool = 0; var_138_object = Obj(); var_139_string = ""; var_140_float = 0; var_141_float = 0; var_142_float = 0;
	var_127_object = var_138_object;
	var_128_float = var_140_float;
	func_3881(var_137_bool, var_138_object, "reputation", var_140_float, (float)0, (float)1);
	var_126_bool = 1;
	return 0;
	
}


func_2770(var_0_bool, var_590_int, var_591_object)
{
	var_593_object = Obj(); var_594_bool = 0; var_595_int = 0; var_596_bool = 0; var_597_object = Obj(); var_598_bool = 0; var_599_int = 0; var_600_bool = 0;
	var_0_bool = var_591_object;
	var_601_bool = 0; var_602_object = Obj(); var_603_float = 0;
	var_591_object = var_602_object;
	func_3945(var_601_bool, var_602_object, (float)70.0);
	var_604_bool = var_601_bool == 0; //@nz
	if(var_604_bool != 0) {
		var_590_int = -2;
		return 8;
	}
	CreateDialog(var_597_object);
	var_605_int = 0;
	func_4409(var_605_int);
	@@var_597_object:SetNPCName(var_605_int);
	var_606_int = 0;
	func_4407(var_606_int);
	@@var_597_object:SetNPCDescription(var_606_int);
	var_607_string = "";
	func_4411(var_607_string);
	@@var_597_object:SetPhoto(var_607_string);
	var_608_string = "";
	func_4413(var_608_string);
	@@var_597_object:SetPhoto2(var_608_string);
	var_609_int = 0;
	func_5010(var_609_int);
	@@var_597_object:SetPlayerName(var_609_int);
	IsOverrideActive(var_598_bool);
	var_610_bool = var_598_bool;
	if(var_610_bool != 0) {
		var_590_int = -2;
		return 8;
	}
	DoDialog(var_597_object);
	var_611_bool = 0; var_612_object = Obj();
	func_4223(Obj());
	var_613_object = var_612_object;
	func_4032(var_611_bool, var_612_object);
	var_614_object = Obj(); var_615_object = Obj();
	var_591_object = var_614_object;
	var_597_object = var_615_object;
	TaskCall(13);
	func_2851(var_616_object, var_617_object, var_618_string, var_619_bool, var_614_object, var_615_object);
	TaskReturn();
	@@var_597_object:IsDialogEnd(var_600_bool);
	
Label_2833:
	var_662_bool = var_600_bool == 0; //@nz
	if(var_662_bool != 0) {
		sync();
		@@var_597_object:IsDialogEnd(var_600_bool);
		goto Label_2833;
	}
	var_591_object = Obj();
	func_4014();
	StopDialog(var_597_object);
	@@var_597_object:GetReturnValue((int)-1);
	var_599_int = var_590_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4565(var_223_object)
{
	Trace("money500 is given");
	var_226_object = Obj(); var_227_int = 0;
	var_223_object = var_226_object;
	func_4285(var_226_object, (int)500);
	return 0;
}


func_2262(var_2_object, var_234_string)
{
	var_235_bool = 0;
	func_4415(var_235_bool);
	var_236_bool = var_235_bool == 0; //@nz
	if(var_236_bool != 0) {
		return 0;
	}
	var_237_bool = var_234_string == var_2_object;
	if(var_237_bool != 0) {
		return 0;
	}
	var_238_string = ""; var_239_bool = 0;
	var_234_string = var_238_string;
	var_241_bool = var_234_string == "";
	if(var_241_bool != 0) {
		var_239_bool = 0;
	} else {
		var_239_bool = 1;
	}
	func_4186(var_238_string, var_239_bool);
	var_2_object = var_234_string;
	return 0;
	
}


func_2517(var_2_object, var_538_string)
{
	var_539_bool = 0;
	func_4415(var_539_bool);
	var_540_bool = var_539_bool == 0; //@nz
	if(var_540_bool != 0) {
		return 0;
	}
	var_541_bool = var_538_string == var_2_object;
	if(var_541_bool != 0) {
		return 0;
	}
	var_542_string = ""; var_543_bool = 0;
	var_538_string = var_542_string;
	var_545_bool = var_538_string == "";
	if(var_545_bool != 0) {
		var_543_bool = 0;
	} else {
		var_543_bool = 1;
	}
	func_4186(var_542_string, var_543_bool);
	var_2_object = var_538_string;
	return 0;
	
}


func_3801()
{
	var_63_string = ""; var_64_string = "";
	GetProperty("loc", var_64_string);
	var_66_string = GlobalVars[0];
	var_64_string = var_66_string;
	GlobalVars[0] = var_66_string;
	return 2;
}


func_4828()
{
	var_211_object = Obj(); var_212_object = Obj();
	CreateDiaryEntry(var_212_object, (int)513, (int)2, (int)529712);
	var_216_bool = 0; var_217_object = Obj(); var_218_int = 0;
	var_212_object = var_217_object;
	func_4932(var_216_bool, var_217_object, (int)507);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4575()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_3809(var_0_bool, var_1_object)
{
	var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0);
	GetAnimationOffset(var_85_cvector, "all", "walk_stopl");
	GetAnimationOffset(var_86_cvector, "all", "walk_stopr");
	var_91_float = GetByIndex(var_85_cvector, 2);
	var_92_float = GetByIndex(var_86_cvector, 2);
	var_93_int = var_91_float + var_92_float;
	var_0_bool = var_93_int / (float)2.0;
	var_95_float = 0; var_96_float = 0;
	var_97_float = GetByIndex(var_85_cvector, 2);
	var_96_float = var_97_float - var_0_bool;
	func_4239(var_95_float, var_96_float);
	var_1_object = var_95_float + (int)40;
	return 4;
}


func_4581(var_166_object)
{
	var_168_bool = 0; var_169_object = Obj(); var_170_float = 0;
	var_166_object = var_169_object;
	func_4304(var_168_bool, var_169_object, (float)-0.019999999552965164);
	return 0;
}


func_4841()
{
	var_254_object = Obj(); var_255_object = Obj();
	CreateDiaryEntry(var_255_object, (int)514, (int)2, (int)529713);
	var_259_bool = 0; var_260_object = Obj(); var_261_int = 0;
	var_255_object = var_260_object;
	func_4932(var_259_bool, var_260_object, (int)507);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4588(var_299_object)
{
	var_301_bool = 0; var_302_object = Obj(); var_303_float = 0;
	var_299_object = var_302_object;
	func_4304(var_301_bool, var_302_object, (float)0.019999999552965164);
	return 0;
}


func_4339(var_133_float)
{
	var_134_object = Obj(); var_135_object = Obj();
	CreateFloatVector(var_135_object);
	@@var_135_object:add(var_133_float);
	SendWorldWndMessage((int)16, var_135_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4595()
{
	SetVariable("ook5MladVlad2", (int)1);
	return 0;
}


func_4854()
{
	var_270_object = Obj(); var_271_object = Obj();
	CreateDiaryEntry(var_271_object, (int)515, (int)2, (int)529714);
	var_275_bool = 0; var_276_object = Obj(); var_277_int = 0;
	var_271_object = var_276_object;
	func_4932(var_275_bool, var_276_object, (int)507);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4601(var_97_object)
{
	var_98_object = Obj(); var_99_string = ""; var_100_float = 0;
	func_4960(Obj());
	var_101_object = var_98_object;
	func_4977(var_98_object, "pt_map_anna", (float)2);
	var_121_object = Obj();
	func_4960(var_121_object);
	@@var_97_object:ShowMap(var_121_object);
	return 0;
}


func_1786(var_2_object, var_467_string)
{
	var_468_bool = 0;
	func_4415(var_468_bool);
	var_469_bool = var_468_bool == 0; //@nz
	if(var_469_bool != 0) {
		return 0;
	}
	var_470_bool = var_467_string == var_2_object;
	if(var_470_bool != 0) {
		return 0;
	}
	var_471_string = ""; var_472_bool = 0;
	var_467_string = var_471_string;
	var_474_bool = var_467_string == "";
	if(var_474_bool != 0) {
		var_472_bool = 0;
	} else {
		var_472_bool = 1;
	}
	func_4186(var_471_string, var_472_bool);
	var_2_object = var_467_string;
	return 0;
	
}


func_4349(var_62_float)
{
	var_63_float = 0; var_64_float = 0;
	GetGameTime(var_64_float);
	var_64_float = var_62_float;
	return 2;
}


