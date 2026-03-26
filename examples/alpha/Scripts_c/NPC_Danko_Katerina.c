// @IMPORTS: Hold/0,StopGroup0/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,GetMainOutdoorScene/1,AddBlankActor/4,GetInvItemProperty/3,CreateInvItem/1,GetInvItemByName/2,FindActor/2,Trigger/2,GetGameTime/1,lshWaitForAnimEnd/1,SetVariable/2,TriggerWorld/2,GetDiaryRoot/1,SetDiarySection/1,CreateDiaryEntry/4
// @STRINGS: W:Neutral|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:.bin|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|A:HasItem|A:RemoveItemByType|W:No|W:ui/NPC_Black.png|W:ood1Katerina1|W:ood1Katerina2|W:ood1Katerina3|W:KnowKaterina|W:quest_d1_04|W:ood1Katerina4|W:d1q04KaterinaGotoMishka|A:FindMark|A:Remove|W:d1q04Spi4kaGotoPowderHouse|W:d1q04MishkaGotoSpi4ka|W:completed|W:powder|W:playsound|W:giveitem|W:failed|W:KnowZemlja|W:KnowZastroiki|W:pt_map_mishka|A:AddMark|A:ShowMap|W:ood1Katerina5|W:ood1Katerina6|W:ood1Katerina7|W:ood1Katerina8|W:ood1Katerina9|W:ood1Katerina10|W:pt_map_lara|W:KnowRubin|W:d5q01|W:d5q01KaterinaGotoLara|W:d1q01KaterinaUHave1day|W:ood6Katerina1|W:ood6Katerina2|W:d6q01|W:d6q01KaterinaGotoLaska|W:pt_map_laska|W:d6q01KaterinagotoLaskaSelf|W:pt_map_katerina|W:quest_d6_01|W:saburov_klara_remove|W:ood6Katerina3|W:KnowMishka|W:ood3Katerina1|W:drapery is given|W:drapery|W:ood4Katerina1|W:d1q01|W:d1q04|W:d3q01|W:d6q01KnowKillerIsKlara|W:KnowGeorg|W:KnowLaska|W:KnowMaria|W:KnowOspina|W:KnowKapella|W:KnowPredictions|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:player|W:Adding diary entry
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x6
// @RUN_TASK: 1
// @TASK_0: vars= params=0
// @EVENT_5: op=0x3 vars=
// @TASK_1: vars= params=0
// @EVENT_6: op=0x1d vars=
// @EVENT_0: op=0x23 vars=object
// @EVENT_10: op=0x29 vars=object
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc4 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x20c vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x572 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa74 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xbc1 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0xdf0 vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0xee3 vars=int,int
// @PE: 0x23,0x29,0x70,0xb4,0xc4,0x17c,0x1fc,0x20c,0x44a,0x562,0x572,0xa0c,0xa64,0xa74,0xb4a,0xbb1,0xbc1,0xda1,0xde0,0xdf0,0xe8f,0xed3,0xee3,0xffd,0x1079,0x108e,0x1094,0x109a,0x10a0,0x10a6,0x10b2,0x10ee,0x1125,0x112b,0x1141,0x1151,0x1157,0x115d,0x1163,0x1169,0x116f,0x1175,0x1185,0x11a2,0x11ab,0x11b1,0x11dc,0x11e2,0x11e8,0x11ee,0x11f9,0x11ff,0x120b,0x1217,0x1223,0x122f,0x123b,0x1247,0x1252,0x125c,0x1268,0x1274,0x1280,0x128c,0x1298,0x12a4,0x12b0,0x12bc,0x12c8,0x12d4,0x12e0,0x12ec,0x12f8,0x1304,0x1310,0x131c,0x1328,0x1334,0x1340,0x134c,0x1358,0x1364,0x1370,0x1465

task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool)
{
	StopGroup0();
	return 0;
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool)
{
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool)
{
	var_36_object = Obj();
	var_35_bool = var_36_object;
	func_5221(var_36_object);
	return 0;
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool)
{
	var_36_bool = 0; var_37_object = Obj();
	var_35_bool = var_37_object;
	func_4020(var_36_bool, var_37_object);
	WaitForAnimEnd();
	return 0;
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_4115();
		var_40_bool = var_35_string == (int)346;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_4256();
			var_45_string = "";
			func_180(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)295);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)296, (int)350, (int)347);
			@@@var_0_object:AddReply((int)297, (int)350, (int)348);
			@@@var_0_object:AddReply((int)298, (int)350, (int)349);
			return 0;
		}
		var_71_bool = var_35_string == (int)350;
		if(var_71_bool != 0) {
			var_72_string = "";
			func_180(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)299);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)300, (int)355, (int)351);
			@@@var_0_object:AddReply((int)301, (int)358, (int)352);
			return 0;
		}
		var_81_bool = var_35_string == (int)358;
		if(var_81_bool != 0) {
			var_82_string = "";
			func_180(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)305);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)306, (int)-1, (int)359);
			@@@var_0_object:AddReply((int)307, (int)-1, (int)360);
			return 0;
		}
		var_91_bool = var_35_string == (int)355;
		if(var_91_bool != 0) {
			var_92_string = "";
			func_180(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)302);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)304, (int)-1, (int)357);
			@@@var_0_object:AddReply((int)303, (int)-1, (int)356);
			return 0;
		}
		var_3_string = true;
		var_100_bool = 0;
		func_4236(var_100_bool);
		if(var_100_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc5";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_4115();
		var_40_bool = var_36_bool == (int)3742;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_4523();
		}
		var_46_bool = var_36_bool == (int)3745;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_4523();
		}
		var_50_bool = var_36_bool == (int)3746;
		if(var_50_bool != 0) {
			var_51_object = Obj(); var_52_object = Obj();
			var_51_object = var_1_object;
			var_52_object = var_0_object;
			func_4523();
		}
		var_54_bool = var_36_bool == (int)3740;
		if(var_54_bool != 0) {
			var_55_object = Obj(); var_56_object = Obj();
			var_55_object = var_1_object;
			var_56_object = var_0_object;
			func_4523();
		}
		var_58_bool = var_36_bool == (int)13984;
		if(var_58_bool != 0) {
			var_59_object = Obj(); var_60_object = Obj();
			var_59_object = var_1_object;
			var_60_object = var_0_object;
			func_4529();
			var_63_object = Obj(); var_64_object = Obj();
			var_63_object = var_1_object;
			var_64_object = var_0_object;
			func_4535();
		}
		var_120_bool = var_36_bool == (int)13988;
		if(var_120_bool != 0) {
			var_121_object = Obj(); var_122_object = Obj();
			var_121_object = var_1_object;
			var_122_object = var_0_object;
			func_4529();
			var_123_object = Obj(); var_124_object = Obj();
			var_123_object = var_1_object;
			var_124_object = var_0_object;
			func_4535();
		}
		var_126_bool = var_36_bool == (int)13990;
		if(var_126_bool != 0) {
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_object;
			var_128_object = var_0_object;
			func_4572();
		}
		var_132_bool = var_35_string == (int)13969;
		if(var_132_bool != 0) {
			var_133_string = "";
			func_508(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12770);
			@@@var_0_object:ClearReplies();
			var_149_bool = 0;
			var_149_bool = 0;
			var_150_bool = 0; var_151_object = Obj();
			var_151_object = var_1_object;
			func_4820(var_151_object);
			if(var_150_bool != 0) {
				var_158_bool = 0; var_159_object = Obj();
				var_159_object = var_1_object;
				func_4796(var_159_object);
				if(var_158_bool != 0) {
					var_149_bool = 1;
				}
			}
			if(var_149_bool != 0) {
				@@@var_0_object:AddReply((int)12771, (int)3726, (int)13970);
			}
			var_167_bool = 0;
			var_167_bool = 0;
			var_168_bool = 0; var_169_object = Obj();
			var_169_object = var_1_object;
			func_4832(var_169_object);
			if(var_168_bool != 0) {
				var_174_bool = 0; var_175_object = Obj();
				var_175_object = var_1_object;
				func_4808(var_175_object);
				if(var_174_bool != 0) {
					var_167_bool = 1;
				}
			}
			if(var_167_bool != 0) {
				@@@var_0_object:AddReply((int)12772, (int)13972, (int)13971);
			}
			var_183_bool = 0;
			var_183_bool = 1;
			var_184_bool = 0;
			var_184_bool = 0;
			var_185_bool = 0; var_186_object = Obj();
			var_186_object = var_1_object;
			func_4844(var_186_object);
			if(var_185_bool != 0) {
				var_191_bool = 0; var_192_object = Obj();
				var_192_object = var_1_object;
				func_4868(var_192_object);
				if(var_191_bool != 0) {
					var_184_bool = 1;
				}
			}
			if(var_184_bool != 1) {
				var_197_bool = 0;
				var_197_bool = 0;
				var_198_bool = 0; var_199_object = Obj();
				var_199_object = var_1_object;
				func_4856(var_199_object);
				if(var_198_bool != 0) {
					var_204_bool = 0; var_205_object = Obj();
					var_205_object = var_1_object;
					func_4868(var_205_object);
					if(var_204_bool != 0) {
						var_197_bool = 1;
					}
				}
				if(var_197_bool != 1) {
					var_183_bool = 0;
				}
			}
			if(var_183_bool != 0) {
				@@@var_0_object:AddReply((int)12791, (int)13991, (int)13990);
			}
			@@@var_0_object:AddReply((int)12790, (int)-1, (int)13989);
			return 0;
		}
		var_213_bool = var_35_string == (int)13991;
		if(var_213_bool != 0) {
			var_214_string = "";
			func_508(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12792);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12793, (int)13993, (int)13992);
			return 0;
		}
		var_220_bool = var_35_string == (int)13993;
		if(var_220_bool != 0) {
			var_221_string = "";
			func_508(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12794);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12795, (int)-1, (int)13994);
			@@@var_0_object:AddReply((int)12798, (int)-1, (int)13997);
			return 0;
		}
		var_230_bool = var_35_string == (int)13972;
		if(var_230_bool != 0) {
			var_231_string = "";
			func_508(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12773);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12774, (int)13974, (int)13973);
			return 0;
		}
		var_237_bool = var_35_string == (int)13974;
		if(var_237_bool != 0) {
			var_238_string = "";
			func_508(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12775);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12776, (int)13976, (int)13975);
			return 0;
		}
		var_244_bool = var_35_string == (int)13976;
		if(var_244_bool != 0) {
			var_245_string = "";
			func_508(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12777);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12779, (int)13980, (int)13978);
			@@@var_0_object:AddReply((int)12778, (int)13979, (int)13977);
			return 0;
		}
		var_254_bool = var_35_string == (int)13979;
		if(var_254_bool != 0) {
			var_255_string = "";
			func_508(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12780);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13020, (int)13983, (int)14226);
			return 0;
		}
		var_261_bool = var_35_string == (int)13980;
		if(var_261_bool != 0) {
			var_262_string = "";
			func_508(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12781);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12782, (int)13983, (int)13981);
			return 0;
		}
		var_268_bool = var_35_string == (int)13983;
		if(var_268_bool != 0) {
			var_269_string = "";
			func_508(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12784);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12785, (int)-1, (int)13984);
			@@@var_0_object:AddReply((int)12783, (int)13985, (int)13982);
			return 0;
		}
		var_278_bool = var_35_string == (int)13985;
		if(var_278_bool != 0) {
			var_279_string = "";
			func_508(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12786);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12787, (int)13987, (int)13986);
			return 0;
		}
		var_285_bool = var_35_string == (int)13987;
		if(var_285_bool != 0) {
			var_286_string = "";
			func_508(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12788);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12789, (int)-1, (int)13988);
			return 0;
		}
		var_292_bool = var_35_string == (int)3726;
		if(var_292_bool != 0) {
			var_293_string = "";
			func_508(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3459);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3460, (int)3729, (int)3727);
			@@@var_0_object:AddReply((int)3461, (int)3730, (int)3728);
			return 0;
		}
		var_302_bool = var_35_string == (int)3730;
		if(var_302_bool != 0) {
			var_303_string = "";
			func_508(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3463);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3464, (int)3729, (int)3731);
			@@@var_0_object:AddReply((int)3465, (int)3734, (int)3733);
			return 0;
		}
		var_312_bool = var_35_string == (int)3734;
		if(var_312_bool != 0) {
			var_313_string = "";
			func_508(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3466);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3467, (int)3729, (int)3735);
			@@@var_0_object:AddReply((int)3468, (int)3729, (int)3736);
			return 0;
		}
		var_322_bool = var_35_string == (int)3729;
		if(var_322_bool != 0) {
			var_323_string = "";
			func_508(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3462);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3469, (int)3741, (int)3739);
			@@@var_0_object:AddReply((int)3470, (int)-1, (int)3740);
			return 0;
		}
		var_332_bool = var_35_string == (int)3741;
		if(var_332_bool != 0) {
			var_333_string = "";
			func_508(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3471);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3472, (int)-1, (int)3742);
			@@@var_0_object:AddReply((int)3473, (int)3744, (int)3743);
			return 0;
		}
		var_342_bool = var_35_string == (int)3744;
		if(var_342_bool != 0) {
			var_343_string = "";
			func_508(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3474);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3475, (int)-1, (int)3745);
			@@@var_0_object:AddReply((int)3476, (int)-1, (int)3746);
			return 0;
		}
		var_3_string = true;
		var_351_bool = 0;
		func_4236(var_351_bool);
		if(var_351_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x20d";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_4115();
		var_40_bool = var_36_bool == (int)6059;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_4238();
			var_45_object = Obj(); var_46_object = Obj();
			var_45_object = var_1_object;
			var_46_object = var_0_object;
			func_4514();
		}
		var_75_bool = var_36_bool == (int)6060;
		if(var_75_bool != 0) {
			var_76_object = Obj(); var_77_object = Obj();
			var_76_object = var_1_object;
			var_77_object = var_0_object;
			func_4238();
			var_78_object = Obj(); var_79_object = Obj();
			var_78_object = var_1_object;
			var_79_object = var_0_object;
			func_4514();
		}
		var_81_bool = var_36_bool == (int)6061;
		if(var_81_bool != 0) {
			var_82_object = Obj(); var_83_object = Obj();
			var_82_object = var_1_object;
			var_83_object = var_0_object;
			func_4238();
			var_84_object = Obj(); var_85_object = Obj();
			var_84_object = var_1_object;
			var_85_object = var_0_object;
			func_4514();
		}
		var_87_bool = var_36_bool == (int)6089;
		if(var_87_bool != 0) {
			var_88_object = Obj(); var_89_object = Obj();
			var_88_object = var_1_object;
			var_89_object = var_0_object;
			func_4238();
			var_90_object = Obj(); var_91_object = Obj();
			var_90_object = var_1_object;
			var_91_object = var_0_object;
			func_4514();
		}
		var_93_bool = var_36_bool == (int)6746;
		if(var_93_bool != 0) {
			var_94_object = Obj(); var_95_object = Obj();
			var_94_object = var_1_object;
			var_95_object = var_0_object;
			func_4244();
			var_98_object = Obj(); var_99_object = Obj();
			var_98_object = var_1_object;
			var_99_object = var_0_object;
			func_4262();
			var_126_object = Obj(); var_127_object = Obj();
			var_126_object = var_1_object;
			var_127_object = var_0_object;
			func_4401();
			var_144_object = Obj(); var_145_object = Obj();
			var_144_object = var_1_object;
			var_145_object = var_0_object;
			func_4417(var_145_object);
		}
		var_171_bool = var_36_bool == (int)6747;
		if(var_171_bool != 0) {
			var_172_object = Obj(); var_173_object = Obj();
			var_172_object = var_1_object;
			var_173_object = var_0_object;
			func_4244();
			var_174_object = Obj(); var_175_object = Obj();
			var_174_object = var_1_object;
			var_175_object = var_0_object;
			func_4262();
			var_176_object = Obj(); var_177_object = Obj();
			var_176_object = var_1_object;
			var_177_object = var_0_object;
			func_4401();
		}
		var_179_bool = var_36_bool == (int)6744;
		if(var_179_bool != 0) {
			var_180_object = Obj(); var_181_object = Obj();
			var_180_object = var_1_object;
			var_181_object = var_0_object;
			func_4244();
		}
		var_183_bool = var_36_bool == (int)6073;
		if(var_183_bool != 0) {
			var_184_object = Obj(); var_185_object = Obj();
			var_184_object = var_1_object;
			var_185_object = var_0_object;
			func_4250();
		}
		var_189_bool = var_36_bool == (int)6074;
		if(var_189_bool != 0) {
			var_190_object = Obj(); var_191_object = Obj();
			var_190_object = var_1_object;
			var_191_object = var_0_object;
			func_4250();
		}
		var_193_bool = var_36_bool == (int)6075;
		if(var_193_bool != 0) {
			var_194_object = Obj(); var_195_object = Obj();
			var_194_object = var_1_object;
			var_195_object = var_0_object;
			func_4250();
		}
		var_197_bool = var_36_bool == (int)6084;
		if(var_197_bool != 0) {
			var_198_object = Obj(); var_199_object = Obj();
			var_198_object = var_1_object;
			var_199_object = var_0_object;
			func_4250();
		}
		var_201_bool = var_36_bool == (int)6048;
		if(var_201_bool != 0) {
			var_202_object = Obj(); var_203_object = Obj();
			var_202_object = var_1_object;
			var_203_object = var_0_object;
			func_4280(var_203_object);
			var_252_object = Obj(); var_253_object = Obj();
			var_252_object = var_1_object;
			var_253_object = var_0_object;
			func_4274();
		}
		var_257_bool = var_36_bool == (int)6946;
		if(var_257_bool != 0) {
			var_258_object = Obj(); var_259_object = Obj();
			var_258_object = var_1_object;
			var_259_object = var_0_object;
			func_4340();
			var_289_object = Obj(); var_290_object = Obj();
			var_289_object = var_1_object;
			var_290_object = var_0_object;
			func_4274();
		}
		var_292_bool = var_36_bool == (int)10030;
		if(var_292_bool != 0) {
			var_293_object = Obj(); var_294_object = Obj();
			var_293_object = var_1_object;
			var_294_object = var_0_object;
			func_4401();
			var_295_object = Obj(); var_296_object = Obj();
			var_295_object = var_1_object;
			var_296_object = var_0_object;
			func_4262();
			var_297_object = Obj(); var_298_object = Obj();
			var_297_object = var_1_object;
			var_298_object = var_0_object;
			func_4433();
		}
		var_302_bool = var_36_bool == (int)10031;
		if(var_302_bool != 0) {
			var_303_object = Obj(); var_304_object = Obj();
			var_303_object = var_1_object;
			var_304_object = var_0_object;
			func_4401();
			var_305_object = Obj(); var_306_object = Obj();
			var_305_object = var_1_object;
			var_306_object = var_0_object;
			func_4417(var_306_object);
			var_307_object = Obj(); var_308_object = Obj();
			var_307_object = var_1_object;
			var_308_object = var_0_object;
			func_4262();
			var_309_object = Obj(); var_310_object = Obj();
			var_309_object = var_1_object;
			var_310_object = var_0_object;
			func_4433();
		}
		var_312_bool = var_36_bool == (int)9548;
		if(var_312_bool != 0) {
			var_313_object = Obj(); var_314_object = Obj();
			var_313_object = var_1_object;
			var_314_object = var_0_object;
			func_4439();
		}
		var_318_bool = var_36_bool == (int)9549;
		if(var_318_bool != 0) {
			var_319_object = Obj(); var_320_object = Obj();
			var_319_object = var_1_object;
			var_320_object = var_0_object;
			func_4445();
		}
		var_324_bool = var_36_bool == (int)9550;
		if(var_324_bool != 0) {
			var_325_object = Obj(); var_326_object = Obj();
			var_325_object = var_1_object;
			var_326_object = var_0_object;
			func_4451();
		}
		var_330_bool = var_36_bool == (int)9551;
		if(var_330_bool != 0) {
			var_331_object = Obj(); var_332_object = Obj();
			var_331_object = var_1_object;
			var_332_object = var_0_object;
			func_4457();
		}
		var_336_bool = var_36_bool == (int)9552;
		if(var_336_bool != 0) {
			var_337_object = Obj(); var_338_object = Obj();
			var_337_object = var_1_object;
			var_338_object = var_0_object;
			func_4463();
		}
		var_342_bool = var_35_string == (int)6050;
		if(var_342_bool != 0) {
			var_343_bool = 0;
			var_343_bool = 0;
			var_344_bool = 0; var_345_object = Obj();
			var_345_object = var_1_object;
			func_4607(var_345_object);
			if(var_344_bool != 0) {
				var_352_bool = 0; var_353_object = Obj();
				var_353_object = var_1_object;
				func_4643(var_353_object);
				var_358_bool = var_352_bool == 0; //@nz
				if(var_358_bool != 0) {
					var_343_bool = 1;
				}
			}
			if(var_343_bool != 0) {
				var_359_string = "";
				func_1378(var_36_bool, "Neutral");
				@@@var_0_object:SetMessage((int)5491);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)5492, (int)6052, (int)6051);
				@@@var_0_object:AddReply((int)5505, (int)6052, (int)6066);
				return 0;
			}
			var_381_bool = 0; var_382_object = Obj();
			var_382_object = var_1_object;
			func_4619(var_382_object);
			if(var_381_bool != 0) {
				var_387_string = "";
				func_1378(var_36_bool, "Neutral");
				@@@var_0_object:SetMessage((int)5486);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)5522, (int)6719, (int)6086);
				@@@var_0_object:AddReply((int)6083, (int)6719, (int)6713);
				@@@var_0_object:AddReply((int)5488, (int)6714, (int)6047);
				return 0;
			}
			var_398_string = "";
			func_1378(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5521);
			@@@var_0_object:ClearReplies();
			var_400_bool = 0;
			var_400_bool = 0;
			var_401_bool = 0; var_402_object = Obj();
			var_402_object = var_1_object;
			func_4631(var_402_object);
			if(var_401_bool != 0) {
				var_407_bool = 0; var_408_object = Obj();
				var_408_object = var_1_object;
				func_4964(var_408_object);
				if(var_407_bool != 0) {
					var_400_bool = 1;
				}
			}
			if(var_400_bool != 0) {
				@@@var_0_object:AddReply((int)9151, (int)6068, (int)10032);
			}
			var_416_bool = 0;
			var_416_bool = 0;
			var_417_bool = 0;
			var_417_bool = 0;
			var_418_bool = 0; var_419_object = Obj();
			var_419_object = var_1_object;
			func_4667(var_419_object);
			if(var_418_bool != 0) {
				var_424_bool = 0; var_425_object = Obj();
				var_425_object = var_1_object;
				func_4655(var_425_object);
				var_430_bool = var_424_bool == 0; //@nz
				if(var_430_bool != 0) {
					var_417_bool = 1;
				}
			}
			if(var_417_bool != 0) {
				var_431_bool = 0; var_432_object = Obj();
				var_432_object = var_1_object;
				func_4679(var_431_bool, var_432_object);
				if(var_431_bool != 0) {
					var_416_bool = 1;
				}
			}
			if(var_416_bool != 0) {
				@@@var_0_object:AddReply((int)6292, (int)6945, (int)6944);
			}
			var_443_bool = 0;
			var_443_bool = 0;
			var_444_bool = 0; var_445_object = Obj();
			var_445_object = var_1_object;
			func_4655(var_445_object);
			if(var_444_bool != 0) {
				var_446_bool = 0; var_447_object = Obj();
				var_447_object = var_1_object;
				func_4700(var_447_object);
				if(var_446_bool != 0) {
					var_443_bool = 1;
				}
			}
			if(var_443_bool != 0) {
				@@@var_0_object:AddReply((int)6111, (int)10029, (int)6748);
			}
			var_455_bool = 0;
			var_455_bool = 0;
			var_456_bool = 0; var_457_object = Obj();
			var_457_object = var_1_object;
			func_4940(var_457_object);
			if(var_456_bool != 0) {
				var_462_bool = 0; var_463_object = Obj();
				var_463_object = var_1_object;
				func_4712(var_463_object);
				if(var_462_bool != 0) {
					var_455_bool = 1;
				}
			}
			if(var_455_bool != 0) {
				@@@var_0_object:AddReply((int)8011, (int)8851, (int)8834);
			}
			var_471_bool = 0;
			var_471_bool = 0;
			var_472_bool = 0; var_473_object = Obj();
			var_473_object = var_1_object;
			func_4904(var_473_object);
			if(var_472_bool != 0) {
				var_478_bool = 0; var_479_object = Obj();
				var_479_object = var_1_object;
				func_4724(var_479_object);
				if(var_478_bool != 0) {
					var_471_bool = 1;
				}
			}
			if(var_471_bool != 0) {
				@@@var_0_object:AddReply((int)8012, (int)8852, (int)8835);
			}
			var_487_bool = 0;
			var_487_bool = 0;
			var_488_bool = 0; var_489_object = Obj();
			var_489_object = var_1_object;
			func_4952(var_489_object);
			if(var_488_bool != 0) {
				var_494_bool = 0; var_495_object = Obj();
				var_495_object = var_1_object;
				func_4736(var_495_object);
				if(var_494_bool != 0) {
					var_487_bool = 1;
				}
			}
			if(var_487_bool != 0) {
				@@@var_0_object:AddReply((int)8023, (int)8856, (int)8846);
			}
			var_503_bool = 0;
			var_503_bool = 0;
			var_504_bool = 0; var_505_object = Obj();
			var_505_object = var_1_object;
			func_4892(var_505_object);
			if(var_504_bool != 0) {
				var_510_bool = 0; var_511_object = Obj();
				var_511_object = var_1_object;
				func_4748(var_511_object);
				if(var_510_bool != 0) {
					var_503_bool = 1;
				}
			}
			if(var_503_bool != 0) {
				@@@var_0_object:AddReply((int)8024, (int)8855, (int)8847);
			}
			var_519_bool = 0;
			var_519_bool = 0;
			var_520_bool = 0; var_521_object = Obj();
			var_521_object = var_1_object;
			func_4880(var_521_object);
			if(var_520_bool != 0) {
				var_526_bool = 0; var_527_object = Obj();
				var_527_object = var_1_object;
				func_4760(var_527_object);
				if(var_526_bool != 0) {
					var_519_bool = 1;
				}
			}
			if(var_519_bool != 0) {
				@@@var_0_object:AddReply((int)8030, (int)8854, (int)8853);
			}
			@@@var_0_object:AddReply((int)8716, (int)-1, (int)9553);
			return 0;
		}
		var_539_bool = var_35_string == (int)8854;
		if(var_539_bool != 0) {
			var_540_string = "";
			func_1378(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8031);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8715, (int)-1, (int)9552);
			return 0;
		}
		var_546_bool = var_35_string == (int)8855;
		if(var_546_bool != 0) {
			var_547_string = "";
			func_1378(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8032);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8714, (int)-1, (int)9551);
			return 0;
		}
		var_553_bool = var_35_string == (int)8856;
		if(var_553_bool != 0) {
			var_554_string = "";
			func_1378(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8033);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8713, (int)-1, (int)9550);
			return 0;
		}
		var_560_bool = var_35_string == (int)8852;
		if(var_560_bool != 0) {
			var_561_string = "";
			func_1378(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8029);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8712, (int)-1, (int)9549);
			return 0;
		}
		var_567_bool = var_35_string == (int)8851;
		if(var_567_bool != 0) {
			var_568_string = "";
			func_1378(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8028);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8711, (int)-1, (int)9548);
			return 0;
		}
		var_574_bool = var_35_string == (int)10029;
		if(var_574_bool != 0) {
			var_575_string = "";
			func_1378(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9148);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9149, (int)-1, (int)10030);
			@@@var_0_object:AddReply((int)9150, (int)-1, (int)10031);
			return 0;
		}
		var_584_bool = var_35_string == (int)6945;
		if(var_584_bool != 0) {
			var_585_string = "";
			func_1378(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6293);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5489, (int)-1, (int)6048);
			@@@var_0_object:AddReply((int)6294, (int)-1, (int)6946);
			return 0;
		}
		var_594_bool = var_35_string == (int)6068;
		if(var_594_bool != 0) {
			var_595_string = "";
			func_1378(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5506);
			@@@var_0_object:ClearReplies();
			var_597_bool = 0; var_598_object = Obj();
			var_598_object = var_1_object;
			func_4964(var_598_object);
			if(var_597_bool != 0) {
				@@@var_0_object:AddReply((int)5507, (int)6070, (int)6069);
			}
			@@@var_0_object:AddReply((int)5520, (int)-1, (int)6084);
			return 0;
		}
		var_606_bool = var_35_string == (int)6070;
		if(var_606_bool != 0) {
			var_607_string = "";
			func_1378(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5508);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5509, (int)6072, (int)6071);
			@@@var_0_object:AddReply((int)5514, (int)6077, (int)6076);
			return 0;
		}
		var_616_bool = var_35_string == (int)6077;
		if(var_616_bool != 0) {
			var_617_string = "";
			func_1378(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5515);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5516, (int)6079, (int)6078);
			return 0;
		}
		var_623_bool = var_35_string == (int)6079;
		if(var_623_bool != 0) {
			var_624_string = "";
			func_1378(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5517);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5518, (int)6072, (int)6080);
			@@@var_0_object:AddReply((int)5519, (int)6072, (int)6082);
			return 0;
		}
		var_633_bool = var_35_string == (int)6072;
		if(var_633_bool != 0) {
			var_634_string = "";
			func_1378(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5510);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5511, (int)-1, (int)6073);
			@@@var_0_object:AddReply((int)5512, (int)-1, (int)6074);
			@@@var_0_object:AddReply((int)5513, (int)-1, (int)6075);
			return 0;
		}
		var_646_bool = var_35_string == (int)6714;
		if(var_646_bool != 0) {
			var_647_string = "";
			func_1378(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6084);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6085, (int)6717, (int)6715);
			@@@var_0_object:AddReply((int)6086, (int)6719, (int)6716);
			return 0;
		}
		var_656_bool = var_35_string == (int)6717;
		if(var_656_bool != 0) {
			var_657_string = "";
			func_1378(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6087);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6088, (int)6719, (int)6718);
			return 0;
		}
		var_663_bool = var_35_string == (int)6719;
		if(var_663_bool != 0) {
			var_664_string = "";
			func_1378(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6089);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6090, (int)6725, (int)6720);
			@@@var_0_object:AddReply((int)6091, (int)6725, (int)6721);
			return 0;
		}
		var_673_bool = var_35_string == (int)6725;
		if(var_673_bool != 0) {
			var_674_object = Obj(); var_675_object = Obj();
			var_674_object = var_1_object;
			var_675_object = var_0_object;
			func_4395();
			var_678_object = Obj(); var_679_object = Obj();
			var_678_object = var_1_object;
			var_679_object = var_0_object;
			func_4389();
			var_682_string = "";
			func_1378(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6092);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6095, (int)6730, (int)6729);
			@@@var_0_object:AddReply((int)6093, (int)6728, (int)6727);
			return 0;
		}
		var_691_bool = var_35_string == (int)6728;
		if(var_691_bool != 0) {
			var_692_object = Obj(); var_693_object = Obj();
			var_692_object = var_1_object;
			var_693_object = var_0_object;
			func_4395();
			var_694_string = "";
			func_1378(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6094);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6097, (int)6732, (int)6731);
			@@@var_0_object:AddReply((int)6102, (int)6730, (int)6736);
			return 0;
		}
		var_703_bool = var_35_string == (int)6732;
		if(var_703_bool != 0) {
			var_704_object = Obj(); var_705_object = Obj();
			var_704_object = var_1_object;
			var_705_object = var_0_object;
			func_4485();
			var_708_string = "";
			func_1378(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6098);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6099, (int)6734, (int)6733);
			@@@var_0_object:AddReply((int)6103, (int)6730, (int)6738);
			return 0;
		}
		var_717_bool = var_35_string == (int)6734;
		if(var_717_bool != 0) {
			var_718_string = "";
			func_1378(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6100);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6101, (int)6730, (int)6735);
			return 0;
		}
		var_724_bool = var_35_string == (int)6730;
		if(var_724_bool != 0) {
			var_725_string = "";
			func_1378(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6096);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6104, (int)6745, (int)6741);
			@@@var_0_object:AddReply((int)6105, (int)6743, (int)6742);
			return 0;
		}
		var_734_bool = var_35_string == (int)6743;
		if(var_734_bool != 0) {
			var_735_string = "";
			func_1378(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6106);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6107, (int)-1, (int)6744);
			return 0;
		}
		var_741_bool = var_35_string == (int)6745;
		if(var_741_bool != 0) {
			var_742_object = Obj(); var_743_object = Obj();
			var_742_object = var_1_object;
			var_743_object = var_0_object;
			func_4578();
			var_746_string = "";
			func_1378(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6108);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6109, (int)-1, (int)6746);
			@@@var_0_object:AddReply((int)6110, (int)-1, (int)6747);
			return 0;
		}
		var_755_bool = var_35_string == (int)6052;
		if(var_755_bool != 0) {
			var_756_string = "";
			func_1378(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5493);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5494, (int)6054, (int)6053);
			@@@var_0_object:AddReply((int)5504, (int)6054, (int)6064);
			@@@var_0_object:AddReply((int)5523, (int)6088, (int)6087);
			return 0;
		}
		var_768_bool = var_35_string == (int)6088;
		if(var_768_bool != 0) {
			var_769_string = "";
			func_1378(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5524);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5525, (int)-1, (int)6089);
			return 0;
		}
		var_775_bool = var_35_string == (int)6054;
		if(var_775_bool != 0) {
			var_776_string = "";
			func_1378(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5495);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5496, (int)6056, (int)6055);
			@@@var_0_object:AddReply((int)5503, (int)6058, (int)6062);
			return 0;
		}
		var_785_bool = var_35_string == (int)6056;
		if(var_785_bool != 0) {
			var_786_string = "";
			func_1378(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5497);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5498, (int)6058, (int)6057);
			@@@var_0_object:AddReply((int)5502, (int)-1, (int)6061);
			return 0;
		}
		var_795_bool = var_35_string == (int)6058;
		if(var_795_bool != 0) {
			var_796_string = "";
			func_1378(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5499);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5500, (int)-1, (int)6059);
			@@@var_0_object:AddReply((int)5501, (int)-1, (int)6060);
			return 0;
		}
		var_3_string = true;
		var_804_bool = 0;
		func_4236(var_804_bool);
		if(var_804_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x573";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_4115();
		var_40_bool = var_35_string == (int)10246;
		if(var_40_bool != 0) {
			var_41_string = "";
			func_2660(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9330);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9331, (int)10248, (int)10247);
			@@@var_0_object:AddReply((int)9340, (int)10248, (int)10258);
			@@@var_0_object:AddReply((int)9341, (int)10248, (int)10260);
			return 0;
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=0";
		EMIT "Call 0xa64";
		EMIT "Pop(1)";
		EMIT "Push((int) 9323)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
		EMIT "Pop(0)";
		EMIT "Push((int) 9324)";
		EMIT "Push((int) 10239)";
		EMIT "Push((int) 10238)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Push((int) 9328)";
		EMIT "Push((int) 10239)";
		EMIT "Push((int) 10242)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Push((int) 9329)";
		EMIT "Push((int) 10239)";
		EMIT "Push((int) 10244)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Return(); Pop(0)";
		}
		var_67_bool = var_35_string == (int)10239;
		if(var_67_bool != 0) {
			var_68_string = "";
			func_2660(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9325);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9326, (int)-1, (int)10240);
			@@@var_0_object:AddReply((int)9327, (int)-1, (int)10241);
			return 0;
		}
		var_77_bool = var_35_string == (int)10248;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_2660(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9332);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9333, (int)10250, (int)10249);
			@@@var_0_object:AddReply((int)9338, (int)10250, (int)10254);
			@@@var_0_object:AddReply((int)9339, (int)10250, (int)10256);
			return 0;
		}
		var_90_bool = var_35_string == (int)10250;
		if(var_90_bool != 0) {
			var_91_string = "";
			func_2660(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9334);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9335, (int)-1, (int)10251);
			@@@var_0_object:AddReply((int)9336, (int)-1, (int)10252);
			@@@var_0_object:AddReply((int)9337, (int)-1, (int)10253);
			return 0;
		}
		var_3_string = true;
		var_102_bool = 0;
		func_4236(var_102_bool);
		if(var_102_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa75";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_4115();
		var_40_bool = var_36_bool == (int)10945;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_4590(var_42_object);
			var_60_object = Obj(); var_61_object = Obj();
			var_60_object = var_1_object;
			var_61_object = var_0_object;
			func_4334();
		}
		var_65_bool = var_36_bool == (int)10946;
		if(var_65_bool != 0) {
			var_66_object = Obj(); var_67_object = Obj();
			var_66_object = var_1_object;
			var_67_object = var_0_object;
			func_4590(var_67_object);
			var_68_object = Obj(); var_69_object = Obj();
			var_68_object = var_1_object;
			var_69_object = var_0_object;
			func_4334();
		}
		var_71_bool = var_35_string == (int)10936;
		if(var_71_bool != 0) {
			var_72_bool = 0;
			var_72_bool = 0;
			var_73_bool = 0; var_74_object = Obj();
			var_74_object = var_1_object;
			func_4916(var_74_object);
			if(var_73_bool != 0) {
				var_81_bool = 0; var_82_object = Obj();
				var_82_object = var_1_object;
				func_4772(var_82_object);
				var_87_bool = var_81_bool == 0; //@nz
				if(var_87_bool != 0) {
					var_72_bool = 1;
				}
			}
			if(var_72_bool != 0) {
				var_88_object = Obj(); var_89_object = Obj();
				var_88_object = var_1_object;
				var_89_object = var_0_object;
				func_4584();
				var_92_string = "";
				func_2993(var_36_bool, "Neutral");
				@@@var_0_object:SetMessage((int)9926);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)9927, (int)10938, (int)10937);
				@@@var_0_object:AddReply((int)9940, (int)10954, (int)10953);
				return 0;
			}
			var_114_bool = 0; var_115_object = Obj();
			var_115_object = var_1_object;
			func_4690(var_114_bool, var_115_object);
			if(var_114_bool != 0) {
				var_118_string = "";
				func_2993(var_36_bool, "Neutral");
				@@@var_0_object:SetMessage((int)10178);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)10186, (int)11233, (int)11232);
				@@@var_0_object:AddReply((int)10464, (int)11233, (int)11537);
				return 0;
			}
		}
		var_127_bool = var_35_string == (int)11233;
		if(var_127_bool != 0) {
			var_128_string = "";
			func_2993(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10187);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10179, (int)11226, (int)11225);
			@@@var_0_object:AddReply((int)10463, (int)11226, (int)11536);
			return 0;
		}
		var_137_bool = var_35_string == (int)11226;
		if(var_137_bool != 0) {
			var_138_string = "";
			func_2993(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10180);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10465, (int)11541, (int)11540);
			@@@var_0_object:AddReply((int)10470, (int)11228, (int)11547);
			return 0;
		}
		var_147_bool = var_35_string == (int)11541;
		if(var_147_bool != 0) {
			var_148_string = "";
			func_2993(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10466);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10181, (int)11228, (int)11227);
			@@@var_0_object:AddReply((int)10467, (int)11228, (int)11542);
			@@@var_0_object:AddReply((int)10468, (int)11228, (int)11543);
			return 0;
		}
		var_160_bool = var_35_string == (int)11228;
		if(var_160_bool != 0) {
			var_161_string = "";
			func_2993(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10182);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10183, (int)11230, (int)11229);
			return 0;
		}
		var_167_bool = var_35_string == (int)11230;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_2993(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10184);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10185, (int)11234, (int)11231);
			@@@var_0_object:AddReply((int)10469, (int)-1, (int)11546);
			return 0;
		}
		var_177_bool = var_35_string == (int)11234;
		if(var_177_bool != 0) {
			var_178_string = "";
			func_2993(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10188);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10189, (int)-1, (int)11235);
			@@@var_0_object:AddReply((int)10471, (int)-1, (int)11549);
			@@@var_0_object:AddReply((int)10472, (int)-1, (int)11550);
			return 0;
		}
		var_190_bool = var_35_string == (int)10954;
		if(var_190_bool != 0) {
			var_191_string = "";
			func_2993(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9941);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9942, (int)10956, (int)10955);
			@@@var_0_object:AddReply((int)9949, (int)10938, (int)10965);
			return 0;
		}
		var_200_bool = var_35_string == (int)10956;
		if(var_200_bool != 0) {
			var_201_string = "";
			func_2993(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9943);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9944, (int)10958, (int)10957);
			@@@var_0_object:AddReply((int)9948, (int)10938, (int)10963);
			return 0;
		}
		var_210_bool = var_35_string == (int)10958;
		if(var_210_bool != 0) {
			var_211_string = "";
			func_2993(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9945);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9946, (int)10938, (int)10959);
			@@@var_0_object:AddReply((int)9947, (int)10938, (int)10961);
			return 0;
		}
		var_220_bool = var_35_string == (int)10938;
		if(var_220_bool != 0) {
			var_221_string = "";
			func_2993(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9928);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9929, (int)10940, (int)10939);
			@@@var_0_object:AddReply((int)9939, (int)10942, (int)10951);
			return 0;
		}
		var_230_bool = var_35_string == (int)10940;
		if(var_230_bool != 0) {
			var_231_string = "";
			func_2993(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9930);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9931, (int)10942, (int)10941);
			@@@var_0_object:AddReply((int)9938, (int)10942, (int)10949);
			return 0;
		}
		var_240_bool = var_35_string == (int)10942;
		if(var_240_bool != 0) {
			var_241_string = "";
			func_2993(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9932);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9933, (int)10944, (int)10943);
			@@@var_0_object:AddReply((int)9937, (int)10944, (int)10947);
			return 0;
		}
		var_250_bool = var_35_string == (int)10944;
		if(var_250_bool != 0) {
			var_251_string = "";
			func_2993(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9934);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9935, (int)-1, (int)10945);
			@@@var_0_object:AddReply((int)9936, (int)-1, (int)10946);
			return 0;
		}
		var_3_string = true;
		var_259_bool = 0;
		func_4236(var_259_bool);
		if(var_259_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xbc2";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_4115();
		var_40_bool = var_36_bool == (int)12392;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_4601();
		}
		var_46_bool = var_35_string == (int)12391;
		if(var_46_bool != 0) {
			var_47_string = "";
			func_3552(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11203);
			@@@var_0_object:ClearReplies();
			var_63_bool = 0; var_64_object = Obj();
			var_64_object = var_1_object;
			func_4928(var_64_object);
			if(var_63_bool != 0) {
				@@@var_0_object:AddReply((int)11204, (int)12393, (int)12392);
			}
			@@@var_0_object:AddReply((int)15336, (int)-1, (int)16559);
			return 0;
		}
		var_78_bool = var_35_string == (int)12393;
		if(var_78_bool != 0) {
			var_79_string = "";
			func_3552(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11205);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11206, (int)12395, (int)12394);
			return 0;
		}
		var_85_bool = var_35_string == (int)12395;
		if(var_85_bool != 0) {
			var_86_string = "";
			func_3552(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11207);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11208, (int)-1, (int)12396);
			@@@var_0_object:AddReply((int)11209, (int)-1, (int)12397);
			return 0;
		}
		var_3_string = true;
		var_94_bool = 0;
		func_4236(var_94_bool);
		if(var_94_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xdf1";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int)
{
	if((int)1 != 0) {
		func_4115();
		var_40_bool = var_36_int == (int)12849;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_4491();
			var_86_object = Obj(); var_87_object = Obj();
			var_86_object = var_1_object;
			var_87_object = var_0_object;
			func_4469(var_87_object);
		}
		var_113_bool = var_35_int == (int)12840;
		if(var_113_bool != 0) {
			var_114_string = "";
			func_3795(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)11641);
			@@@var_0_object:ClearReplies();
			var_130_bool = 0; var_131_object = Obj();
			var_131_object = var_1_object;
			func_4784(var_131_object);
			if(var_130_bool != 0) {
				@@@var_0_object:AddReply((int)11642, (int)12842, (int)12841);
			}
			@@@var_0_object:AddReply((int)11651, (int)12851, (int)12850);
			@@@var_0_object:AddReply((int)11660, (int)-1, (int)12859);
			return 0;
		}
		var_148_bool = var_35_int == (int)12851;
		if(var_148_bool != 0) {
			var_149_string = "";
			func_3795(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)11652);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11653, (int)12853, (int)12852);
			return 0;
		}
		var_155_bool = var_35_int == (int)12853;
		if(var_155_bool != 0) {
			var_156_string = "";
			func_3795(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)11654);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11655, (int)12855, (int)12854);
			return 0;
		}
		var_162_bool = var_35_int == (int)12855;
		if(var_162_bool != 0) {
			var_163_string = "";
			func_3795(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)11656);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11657, (int)12857, (int)12856);
			return 0;
		}
		var_169_bool = var_35_int == (int)12857;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_3795(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)11658);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11659, (int)-1, (int)12858);
			return 0;
		}
		var_176_bool = var_35_int == (int)12842;
		if(var_176_bool != 0) {
			var_177_string = "";
			func_3795(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)11643);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11644, (int)12844, (int)12843);
			return 0;
		}
		var_183_bool = var_35_int == (int)12844;
		if(var_183_bool != 0) {
			var_184_string = "";
			func_3795(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)11645);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11646, (int)12846, (int)12845);
			return 0;
		}
		var_190_bool = var_35_int == (int)12846;
		if(var_190_bool != 0) {
			var_191_string = "";
			func_3795(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)11647);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11648, (int)12848, (int)12847);
			return 0;
		}
		var_197_bool = var_35_int == (int)12848;
		if(var_197_bool != 0) {
			var_198_string = "";
			func_3795(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)11649);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11650, (int)-1, (int)12849);
			return 0;
		}
		var_3_string = true;
		var_203_bool = 0;
		func_4236(var_203_bool);
		if(var_203_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xee4";
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool)
{
	func_5217();
	var_36_bool = 0;
	func_4032(var_36_bool);
	var_39_bool = var_36_bool == 0; //@nz
	if(var_39_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
Label_19:
	var_40_string = "";
	func_4097("Neutral");
	lshWaitForAnimEnd();
	goto Label_19;
}
EMIT "@ Hold()";
EMIT "Pop(0)";
EMIT "Return(); Pop(0)";


func_0()
{
	Hold();
	return 0;
}


func_4097(var_40_string)
{
	var_41_float = 0; var_42_float = 0; var_43_float = 0; var_44_float = 0;
	var_46_int = "playing " + var_40_string;
	Trace(var_46_int);
	lshGetAnimTimes(var_40_string, var_43_float, var_44_float);
	lshPlayAnimation(var_43_float, var_44_float);
	var_48_int = "start: " + var_43_float;
	Trace(var_48_int);
	var_50_int = "end: " + var_44_float;
	Trace(var_50_int);
	return 4;
}


func_5121()
{
	var_100_object = Obj(); var_101_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_101_object, (int)43, (int)2, (int)12125);
	var_106_bool = 0; var_107_object = Obj(); var_108_int = 0;
	var_101_object = var_107_object;
	func_4992(var_106_bool, var_107_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4868(var_191_bool)
{
	var_193_int = 0; var_194_string = "";
	func_4132(var_193_int, "ood6Katerina3");
	var_196_bool = var_193_int == (int)0;
	if(var_196_bool != 0) {
		var_191_bool = 1;
		return 0;
	}
	var_191_bool = 0;
	return 0;
}


func_4619(var_381_bool)
{
	var_383_int = 0; var_384_string = "";
	func_4132(var_383_int, "ood1Katerina2");
	var_386_bool = var_383_int == (int)0;
	if(var_386_bool != 0) {
		var_381_bool = 1;
		return 0;
	}
	var_381_bool = 0;
	return 0;
}


func_2572(var_0_object, var_1_object, var_2_object, var_3_object, var_397_object, var_398_object)
{
	var_0_object = var_398_object;
	var_1_object = var_397_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_404_string = "";
		func_2660(var_398_object, "Neutral");
		@@@var_0_object:SetMessage((int)9330);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)9331, (int)10248, (int)10247);
		@@@var_0_object:AddReply((int)9340, (int)10248, (int)10258);
		@@@var_0_object:AddReply((int)9341, (int)10248, (int)10260);
		goto Label_2630;
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=0";
	EMIT "Call 0xa64";
	EMIT "Pop(1)";
	EMIT "Push((int) 9323)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
	EMIT "Pop(0)";
	EMIT "Push((int) 9324)";
	EMIT "Push((int) 10239)";
	EMIT "Push((int) 10238)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9328)";
	EMIT "Push((int) 10239)";
	EMIT "Push((int) 10242)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9329)";
	EMIT "Push((int) 10239)";
	EMIT "Push((int) 10244)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "GOTO 0xa46";
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xa10";
	}
Label_2630:
	var_419_bool = 0;
	func_4236(var_419_bool);
	if(var_419_bool != 0) {

	Label_2634:
		lshWaitForAnimEnd();
		var_420_object = var_3_object;
		if(var_420_object != 0) {
		} else {
			var_421_string = "";
			var_421_string = var_2_object;
			func_4097(var_421_string);
			goto Label_2634;
	}
		PlayAnimation("all", "idle");

	Label_2649:
		WaitForAnimEnd();
		var_424_object = var_3_object;
		if(var_424_object != 0) {
			goto Label_2659;
		}
		PlayAnimation("all", "idle");
		goto Label_2649;
	}
	goto Label_2659;
	
Label_2659:
	return 0;
	
}


func_1035(var_0_object, var_157_int, var_158_object)
{
	var_160_object = Obj(); var_161_bool = 0; var_162_int = 0; var_163_bool = 0; var_164_object = Obj(); var_165_bool = 0; var_166_int = 0; var_167_bool = 0;
	var_0_object = var_158_object;
	var_168_bool = 0; var_169_object = Obj();
	var_158_object = var_169_object;
	func_4037(var_168_bool, var_169_object);
	var_170_bool = var_168_bool == 0; //@nz
	if(var_170_bool != 0) {
		var_157_int = -2;
		return 8;
	}
	CreateDialog(var_164_object);
	var_171_int = 0;
	func_4232(var_171_int);
	@@var_164_object:SetNPCName(var_171_int);
	var_172_string = "";
	func_4234(var_172_string);
	@@var_164_object:SetPhoto(var_172_string);
	var_173_int = 0;
	func_5088(var_173_int);
	@@var_164_object:SetPlayerName(var_173_int);
	IsOverrideActive(var_165_bool);
	var_174_bool = var_165_bool;
	if(var_174_bool != 0) {
		var_157_int = -2;
		return 8;
	}
	DoDialog(var_164_object);
	var_175_object = Obj(); var_176_object = Obj();
	var_158_object = var_175_object;
	var_164_object = var_176_object;
	TaskCall(7);
	func_1098(var_177_object, var_178_object, var_179_string, var_180_bool, var_175_object, var_176_object);
	TaskReturn();
	@@var_164_object:IsDialogEnd(var_167_bool);
	
Label_1080:
	var_375_bool = var_167_bool == 0; //@nz
	if(var_375_bool != 0) {
		sync();
		@@var_164_object:IsDialogEnd(var_167_bool);
		goto Label_1080;
	}
	var_158_object = Obj();
	func_4093();
	StopDialog(var_164_object);
	@@var_164_object:GetReturnValue((int)-1);
	var_166_int = var_157_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2827(var_0_object, var_431_int, var_432_object)
{
	var_434_object = Obj(); var_435_bool = 0; var_436_int = 0; var_437_bool = 0; var_438_object = Obj(); var_439_bool = 0; var_440_int = 0; var_441_bool = 0;
	var_0_object = var_432_object;
	var_442_bool = 0; var_443_object = Obj();
	var_432_object = var_443_object;
	func_4037(var_442_bool, var_443_object);
	var_444_bool = var_442_bool == 0; //@nz
	if(var_444_bool != 0) {
		var_431_int = -2;
		return 8;
	}
	CreateDialog(var_438_object);
	var_445_int = 0;
	func_4232(var_445_int);
	@@var_438_object:SetNPCName(var_445_int);
	var_446_string = "";
	func_4234(var_446_string);
	@@var_438_object:SetPhoto(var_446_string);
	var_447_int = 0;
	func_5088(var_447_int);
	@@var_438_object:SetPlayerName(var_447_int);
	IsOverrideActive(var_439_bool);
	var_448_bool = var_439_bool;
	if(var_448_bool != 0) {
		var_431_int = -2;
		return 8;
	}
	DoDialog(var_438_object);
	var_449_object = Obj(); var_450_object = Obj();
	var_432_object = var_449_object;
	var_438_object = var_450_object;
	TaskCall(11);
	func_2890(var_451_object, var_452_object, var_453_string, var_454_bool, var_449_object, var_450_object);
	TaskReturn();
	@@var_438_object:IsDialogEnd(var_441_bool);
	
Label_2872:
	var_506_bool = var_441_bool == 0; //@nz
	if(var_506_bool != 0) {
		sync();
		@@var_438_object:IsDialogEnd(var_441_bool);
		goto Label_2872;
	}
	var_432_object = Obj();
	func_4093();
	StopDialog(var_438_object);
	@@var_438_object:GetReturnValue((int)-1);
	var_440_int = var_431_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4880(var_520_bool)
{
	var_522_int = 0; var_523_string = "";
	func_4132(var_522_int, "KnowGeorg");
	var_525_bool = var_522_int == (int)1;
	if(var_525_bool != 0) {
		var_520_bool = 1;
		return 0;
	}
	var_520_bool = 0;
	return 0;
}


func_5137()
{
	var_215_object = Obj(); var_216_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_216_object, (int)47, (int)2, (int)12129);
	var_221_bool = 0; var_222_object = Obj(); var_223_int = 0;
	var_216_object = var_222_object;
	func_4992(var_221_bool, var_222_object, (int)43);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4115()
{
	var_38_bool = 0;
	func_4236(var_38_bool);
	if(var_38_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_4631(var_401_bool)
{
	var_403_int = 0; var_404_string = "";
	func_4132(var_403_int, "ood1Katerina3");
	var_406_bool = var_403_int == (int)0;
	if(var_406_bool != 0) {
		var_401_bool = 1;
		return 0;
	}
	var_401_bool = 0;
	return 0;
}


func_4122(var_75_cvector, var_76_cvector)
{
	var_78_float = 0; var_79_float = 0;
	var_80_int = var_76_cvector | var_76_cvector;
	var_79_float = sqrt(var_80_int);
	var_81_float = 9.999999974752427e-07;
	var_82_bool = var_79_float < var_81_float;
	if(var_82_bool != 0) {
		var_75_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_75_cvector = var_76_cvector / var_79_float;
	return 2;
}


func_4892(var_504_bool)
{
	var_506_int = 0; var_507_string = "";
	func_4132(var_506_int, "KnowLaska");
	var_509_bool = var_506_int == (int)1;
	if(var_509_bool != 0) {
		var_504_bool = 1;
		return 0;
	}
	var_504_bool = 0;
	return 0;
}


func_5153()
{
	var_271_object = Obj(); var_272_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_272_object, (int)48, (int)2, (int)12130);
	var_277_bool = 0; var_278_object = Obj(); var_279_int = 0;
	var_272_object = var_278_object;
	func_4992(var_277_bool, var_278_object, (int)43);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4643(var_352_bool)
{
	var_354_int = 0; var_355_string = "";
	func_4132(var_354_int, "d1q01");
	var_357_bool = var_354_int == (int)0;
	if(var_357_bool != 0) {
		var_352_bool = 1;
		return 0;
	}
	var_352_bool = 0;
	return 0;
}


func_4132(var_132_int, var_133_string)
{
	var_134_int = 0; var_135_int = 0;
	GetVariable(var_133_string, var_135_int);
	var_135_int = var_132_int;
	return 2;
}


func_4389()
{
	SetVariable("KnowZemlja", (int)1);
	return 0;
}


func_4904(var_472_bool)
{
	var_474_int = 0; var_475_string = "";
	func_4132(var_474_int, "KnowMaria");
	var_477_bool = var_474_int == (int)1;
	if(var_477_bool != 0) {
		var_472_bool = 1;
		return 0;
	}
	var_472_bool = 0;
	return 0;
}


func_4137(var_118_object, var_119_string)
{
	var_120_object = Obj(); var_121_object = Obj(); var_122_object = Obj(); var_123_object = Obj();
	GetMainOutdoorScene(var_122_object);
	var_125_int = var_119_string + ".bin";
	AddBlankActor(var_123_object, var_122_object, var_119_string, var_125_int);
	var_123_object = var_118_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4395()
{
	SetVariable("KnowZastroiki", (int)1);
	return 0;
}


func_4655(var_424_bool)
{
	var_426_int = 0; var_427_string = "";
	func_4132(var_426_int, "d1q04");
	var_429_bool = var_426_int == (int)0;
	if(var_429_bool != 0) {
		var_424_bool = 1;
		return 0;
	}
	var_424_bool = 0;
	return 0;
}


func_5169()
{
	var_109_object = Obj(); var_110_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_110_object, (int)44, (int)2, (int)12126);
	var_115_bool = 0; var_116_object = Obj(); var_117_int = 0;
	var_110_object = var_116_object;
	func_4992(var_115_bool, var_116_object, (int)43);
	return 2;
}
EMIT "Stack[-1] = 0";


func_49(var_0_object, var_39_int, var_40_object)
{
	var_42_object = Obj(); var_43_bool = 0; var_44_int = 0; var_45_bool = 0; var_46_object = Obj(); var_47_bool = 0; var_48_int = 0; var_49_bool = 0;
	var_0_object = var_40_object;
	var_50_bool = 0; var_51_object = Obj();
	var_40_object = var_51_object;
	func_4037(var_50_bool, var_51_object);
	var_90_bool = var_50_bool == 0; //@nz
	if(var_90_bool != 0) {
		var_39_int = -2;
		return 8;
	}
	CreateDialog(var_46_object);
	var_91_int = 0;
	func_4232(var_91_int);
	@@var_46_object:SetNPCName(var_91_int);
	var_92_string = "";
	func_4234(var_92_string);
	@@var_46_object:SetPhoto(var_92_string);
	var_93_int = 0;
	func_5088(var_93_int);
	@@var_46_object:SetPlayerName(var_93_int);
	IsOverrideActive(var_47_bool);
	var_101_bool = var_47_bool;
	if(var_101_bool != 0) {
		var_39_int = -2;
		return 8;
	}
	DoDialog(var_46_object);
	var_102_object = Obj(); var_103_object = Obj();
	var_40_object = var_102_object;
	var_46_object = var_103_object;
	TaskCall(3);
	func_112(var_104_object, var_105_object, var_106_string, var_107_bool, var_102_object, var_103_object);
	TaskReturn();
	@@var_46_object:IsDialogEnd(var_49_bool);
	
Label_94:
	var_146_bool = var_49_bool == 0; //@nz
	if(var_146_bool != 0) {
		sync();
		@@var_46_object:IsDialogEnd(var_49_bool);
		goto Label_94;
	}
	var_40_object = Obj();
	func_4093();
	StopDialog(var_46_object);
	@@var_46_object:GetReturnValue((int)-1);
	var_48_int = var_39_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4401()
{
	var_128_object = Obj(); var_129_object = Obj();
	func_5038(Obj());
	var_130_object = var_129_object;
	var_141_float = 0;
	func_4203(var_141_float);
	@@var_129_object:AddMark("d1q04KaterinaGotoMishka", "pt_map_mishka", (int)0, (int)8643, var_141_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4148(var_49_object, var_50_object, var_51_int)
{
	var_52_int = 0; var_53_int = 0; var_54_bool = 0; var_55_int = 0; var_56_int = 0; var_57_bool = 0;
	@@var_50_object:GetItemID(var_55_int);
	GetInvItemProperty(var_56_int, var_55_int, "Category");
	@@var_49_object:AddItem(var_57_bool, var_50_object, var_56_int, var_51_int);
	var_59_bool = var_57_bool == 0; //@nz
	if(var_59_bool != 0) {
		@@var_49_object:DropItems(var_50_object, var_51_int);
	}
	return 6;
}


func_4916(var_73_bool)
{
	var_75_int = 0; var_76_string = "";
	func_4132(var_75_int, "ood3Katerina1");
	var_80_bool = var_75_int == (int)0;
	if(var_80_bool != 0) {
		var_73_bool = 1;
		return 0;
	}
	var_73_bool = 0;
	return 0;
}


func_4667(var_418_bool)
{
	var_420_int = 0; var_421_string = "";
	func_4132(var_420_int, "ood1Katerina4");
	var_423_bool = var_420_int == (int)0;
	if(var_423_bool != 0) {
		var_418_bool = 1;
		return 0;
	}
	var_418_bool = 0;
	return 0;
}


func_317(var_0_object, var_623_int, var_624_object)
{
	var_626_object = Obj(); var_627_bool = 0; var_628_int = 0; var_629_bool = 0; var_630_object = Obj(); var_631_bool = 0; var_632_int = 0; var_633_bool = 0;
	var_0_object = var_624_object;
	var_634_bool = 0; var_635_object = Obj();
	var_624_object = var_635_object;
	func_4037(var_634_bool, var_635_object);
	var_636_bool = var_634_bool == 0; //@nz
	if(var_636_bool != 0) {
		var_623_int = -2;
		return 8;
	}
	CreateDialog(var_630_object);
	var_637_int = 0;
	func_4232(var_637_int);
	@@var_630_object:SetNPCName(var_637_int);
	var_638_string = "";
	func_4234(var_638_string);
	@@var_630_object:SetPhoto(var_638_string);
	var_639_int = 0;
	func_5088(var_639_int);
	@@var_630_object:SetPlayerName(var_639_int);
	IsOverrideActive(var_631_bool);
	var_640_bool = var_631_bool;
	if(var_640_bool != 0) {
		var_623_int = -2;
		return 8;
	}
	DoDialog(var_630_object);
	var_641_object = Obj(); var_642_object = Obj();
	var_624_object = var_641_object;
	var_630_object = var_642_object;
	TaskCall(5);
	func_380(var_643_object, var_644_object, var_645_string, var_646_bool, var_641_object, var_642_object);
	TaskReturn();
	@@var_630_object:IsDialogEnd(var_633_bool);
	
Label_362:
	var_723_bool = var_633_bool == 0; //@nz
	if(var_723_bool != 0) {
		sync();
		@@var_630_object:IsDialogEnd(var_633_bool);
		goto Label_362;
	}
	var_624_object = Obj();
	func_4093();
	StopDialog(var_630_object);
	@@var_630_object:GetReturnValue((int)-1);
	var_632_int = var_623_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4928(var_63_bool)
{
	var_65_int = 0; var_66_string = "";
	func_4132(var_65_int, "ood4Katerina1");
	var_70_bool = var_65_int == (int)0;
	if(var_70_bool != 0) {
		var_63_bool = 1;
		return 0;
	}
	var_63_bool = 0;
	return 0;
}


func_5185()
{
	var_61_object = Obj(); var_62_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_62_object, (int)142, (int)1, (int)15342);
	var_67_bool = 0; var_68_object = Obj(); var_69_int = 0;
	var_62_object = var_68_object;
	func_4992(var_67_bool, var_68_object, (int)139);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4161(var_44_object, var_45_string, var_46_int)
{
	var_47_object = Obj(); var_48_object = Obj();
	CreateInvItem(var_48_object);
	@@var_48_object:SetItemName(var_45_string);
	var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0;
	var_44_object = var_49_object;
	var_48_object = var_50_object;
	var_46_int = var_51_int;
	func_4148(var_49_object, var_50_object, var_51_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4417(var_145_object)
{
	var_146_object = Obj(); var_147_string = ""; var_148_float = 0;
	func_5038(Obj());
	var_149_object = var_146_object;
	func_5055(var_146_object, "pt_map_mishka", (float)2);
	var_169_object = Obj();
	func_5038(var_169_object);
	@@var_145_object:ShowMap(var_169_object);
	return 0;
}


func_4679(var_431_bool, var_432_object)
{
	var_433_bool = 0; var_434_object = Obj(); var_435_string = "";
	var_432_object = var_434_object;
	func_4174(var_433_bool, var_434_object, "powder");
	if(var_433_bool != 0) {
		var_431_bool = 1;
		return 0;
	}
	var_431_bool = 0;
	return 0;
}


func_1098(var_0_object, var_1_object, var_2_object, var_3_object, var_175_object, var_176_object)
{
	var_0_object = var_176_object;
	var_1_object = var_175_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_182_bool = 0;
		var_182_bool = 0;
		var_183_bool = 0; var_184_object = Obj();
		var_184_object = var_1_object;
		func_4607(var_184_object);
		if(var_183_bool != 0) {
			var_191_bool = 0; var_192_object = Obj();
			var_192_object = var_1_object;
			func_4643(var_192_object);
			var_197_bool = var_191_bool == 0; //@nz
			if(var_197_bool != 0) {
				var_182_bool = 1;
			}
		}
		if(var_182_bool != 0) {
			var_198_string = "";
			func_1378(var_176_object, "Neutral");
			@@@var_0_object:SetMessage((int)5491);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5492, (int)6052, (int)6051);
			@@@var_0_object:AddReply((int)5505, (int)6052, (int)6066);
		} else {
				var_218_bool = 0; var_219_object = Obj();
				var_219_object = var_1_object;
				func_4619(var_219_object);
				if(var_218_bool != 0) {
					var_224_string = "";
					func_1378(var_176_object, "Neutral");
					@@@var_0_object:SetMessage((int)5486);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)5522, (int)6719, (int)6086);
					@@@var_0_object:AddReply((int)6083, (int)6719, (int)6713);
					@@@var_0_object:AddReply((int)5488, (int)6714, (int)6047);
					goto Label_1348;
				}
				var_235_string = "";
				func_1378(var_176_object, "Neutral");
				@@@var_0_object:SetMessage((int)5521);
				@@@var_0_object:ClearReplies();
				var_237_bool = 0;
				var_237_bool = 0;
				var_238_bool = 0; var_239_object = Obj();
				var_239_object = var_1_object;
				func_4631(var_239_object);
				if(var_238_bool != 0) {
					var_244_bool = 0; var_245_object = Obj();
					var_245_object = var_1_object;
					func_4964(var_245_object);
					if(var_244_bool != 0) {
						var_237_bool = 1;
					}
				}
				if(var_237_bool != 0) {
					@@@var_0_object:AddReply((int)9151, (int)6068, (int)10032);
				}
				var_253_bool = 0;
				var_253_bool = 0;
				var_254_bool = 0;
				var_254_bool = 0;
				var_255_bool = 0; var_256_object = Obj();
				var_256_object = var_1_object;
				func_4667(var_256_object);
				if(var_255_bool != 0) {
					var_261_bool = 0; var_262_object = Obj();
					var_262_object = var_1_object;
					func_4655(var_262_object);
					var_267_bool = var_261_bool == 0; //@nz
					if(var_267_bool != 0) {
						var_254_bool = 1;
					}
				}
				if(var_254_bool != 0) {
					var_268_bool = 0; var_269_object = Obj();
					var_269_object = var_1_object;
					func_4679(var_268_bool, var_269_object);
					if(var_268_bool != 0) {
						var_253_bool = 1;
					}
				}
				if(var_253_bool != 0) {
					@@@var_0_object:AddReply((int)6292, (int)6945, (int)6944);
				}
				var_280_bool = 0;
				var_280_bool = 0;
				var_281_bool = 0; var_282_object = Obj();
				var_282_object = var_1_object;
				func_4655(var_282_object);
				if(var_281_bool != 0) {
					var_283_bool = 0; var_284_object = Obj();
					var_284_object = var_1_object;
					func_4700(var_284_object);
					if(var_283_bool != 0) {
						var_280_bool = 1;
					}
				}
				if(var_280_bool != 0) {
					@@@var_0_object:AddReply((int)6111, (int)10029, (int)6748);
				}
				var_292_bool = 0;
				var_292_bool = 0;
				var_293_bool = 0; var_294_object = Obj();
				var_294_object = var_1_object;
				func_4940(var_294_object);
				if(var_293_bool != 0) {
					var_299_bool = 0; var_300_object = Obj();
					var_300_object = var_1_object;
					func_4712(var_300_object);
					if(var_299_bool != 0) {
						var_292_bool = 1;
					}
				}
				if(var_292_bool != 0) {
					@@@var_0_object:AddReply((int)8011, (int)8851, (int)8834);
				}
				var_308_bool = 0;
				var_308_bool = 0;
				var_309_bool = 0; var_310_object = Obj();
				var_310_object = var_1_object;
				func_4904(var_310_object);
				if(var_309_bool != 0) {
					var_315_bool = 0; var_316_object = Obj();
					var_316_object = var_1_object;
					func_4724(var_316_object);
					if(var_315_bool != 0) {
						var_308_bool = 1;
					}
				}
				if(var_308_bool != 0) {
					@@@var_0_object:AddReply((int)8012, (int)8852, (int)8835);
				}
				var_324_bool = 0;
				var_324_bool = 0;
				var_325_bool = 0; var_326_object = Obj();
				var_326_object = var_1_object;
				func_4952(var_326_object);
				if(var_325_bool != 0) {
					var_331_bool = 0; var_332_object = Obj();
					var_332_object = var_1_object;
					func_4736(var_332_object);
					if(var_331_bool != 0) {
						var_324_bool = 1;
					}
				}
				if(var_324_bool != 0) {
					@@@var_0_object:AddReply((int)8023, (int)8856, (int)8846);
				}
				var_340_bool = 0;
				var_340_bool = 0;
				var_341_bool = 0; var_342_object = Obj();
				var_342_object = var_1_object;
				func_4892(var_342_object);
				if(var_341_bool != 0) {
					var_347_bool = 0; var_348_object = Obj();
					var_348_object = var_1_object;
					func_4748(var_348_object);
					if(var_347_bool != 0) {
						var_340_bool = 1;
					}
				}
				if(var_340_bool != 0) {
					@@@var_0_object:AddReply((int)8024, (int)8855, (int)8847);
				}
				var_356_bool = 0;
				var_356_bool = 0;
				var_357_bool = 0; var_358_object = Obj();
				var_358_object = var_1_object;
				func_4880(var_358_object);
				if(var_357_bool != 0) {
					var_363_bool = 0; var_364_object = Obj();
					var_364_object = var_1_object;
					func_4760(var_364_object);
					if(var_363_bool != 0) {
						var_356_bool = 1;
					}
				}
				if(var_356_bool != 0) {
					@@@var_0_object:AddReply((int)8030, (int)8854, (int)8853);
				}
				@@@var_0_object:AddReply((int)8716, (int)-1, (int)9553);
				goto Label_1348;
		}
	}
Label_1348:
	var_210_bool = 0;
	func_4236(var_210_bool);
	if(var_210_bool != 0) {

	Label_1352:
		lshWaitForAnimEnd();
		var_211_object = var_3_object;
		if(var_211_object != 0) {
		} else {
			var_212_string = "";
			var_212_string = var_2_object;
			func_4097(var_212_string);
			goto Label_1352;
	}
		PlayAnimation("all", "idle");

	Label_1367:
		WaitForAnimEnd();
		var_215_object = var_3_object;
		if(var_215_object != 0) {
			goto Label_1377;
		}
		PlayAnimation("all", "idle");
		goto Label_1367;

	}
	goto Label_1377;
	
Label_1377:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x44e";


func_2890(var_0_object, var_1_object, var_2_object, var_3_object, var_449_object, var_450_object)
{
	var_0_object = var_450_object;
	var_1_object = var_449_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_456_bool = 0;
		var_456_bool = 0;
		var_457_bool = 0; var_458_object = Obj();
		var_458_object = var_1_object;
		func_4916(var_458_object);
		if(var_457_bool != 0) {
			var_463_bool = 0; var_464_object = Obj();
			var_464_object = var_1_object;
			func_4772(var_464_object);
			var_469_bool = var_463_bool == 0; //@nz
			if(var_469_bool != 0) {
				var_456_bool = 1;
			}
		}
		if(var_456_bool != 0) {
			var_470_object = Obj(); var_471_object = Obj();
			var_470_object = var_1_object;
			var_471_object = var_0_object;
			func_4584();
			var_474_string = "";
			func_2993(var_450_object, "Neutral");
			@@@var_0_object:SetMessage((int)9926);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9927, (int)10938, (int)10937);
			@@@var_0_object:AddReply((int)9940, (int)10954, (int)10953);
		} else {
				var_494_bool = 0; var_495_object = Obj();
				var_495_object = var_1_object;
				func_4690(var_494_bool, var_495_object);
				if(var_494_bool != 0) {
					var_498_string = "";
					func_2993(var_450_object, "Neutral");
					@@@var_0_object:SetMessage((int)10178);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)10186, (int)11233, (int)11232);
					@@@var_0_object:AddReply((int)10464, (int)11233, (int)11537);
					goto Label_2963;
				}
				return 0;
		}
	}
Label_2963:
	var_486_bool = 0;
	func_4236(var_486_bool);
	if(var_486_bool != 0) {

	Label_2967:
		lshWaitForAnimEnd();
		var_487_object = var_3_object;
		if(var_487_object != 0) {
		} else {
			var_488_string = "";
			var_488_string = var_2_object;
			func_4097(var_488_string);
			goto Label_2967;
	}
		PlayAnimation("all", "idle");

	Label_2982:
		WaitForAnimEnd();
		var_491_object = var_3_object;
		if(var_491_object != 0) {
			goto Label_2992;
		}
		PlayAnimation("all", "idle");
		goto Label_2982;

	}
	goto Label_2992;
	
Label_2992:
	return 0;
	
}
EMIT "GOTO 0xb4e";


func_4940(var_456_bool)
{
	var_458_int = 0; var_459_string = "";
	func_4132(var_458_int, "KnowOspina");
	var_461_bool = var_458_int == (int)1;
	if(var_461_bool != 0) {
		var_456_bool = 1;
		return 0;
	}
	var_456_bool = 0;
	return 0;
}


func_4174(var_433_bool, var_434_object, var_435_string)
{
	var_436_int = 0; var_437_bool = 0; var_438_int = 0; var_439_bool = 0;
	GetInvItemByName(var_438_int, var_435_string);
	@@var_434_object:HasItem(var_438_int, var_439_bool);
	var_439_bool = var_433_bool;
	return 4;
}


func_3664(var_0_object, var_565_int, var_566_object)
{
	var_568_object = Obj(); var_569_bool = 0; var_570_int = 0; var_571_bool = 0; var_572_object = Obj(); var_573_bool = 0; var_574_int = 0; var_575_bool = 0;
	var_0_object = var_566_object;
	var_576_bool = 0; var_577_object = Obj();
	var_566_object = var_577_object;
	func_4037(var_576_bool, var_577_object);
	var_578_bool = var_576_bool == 0; //@nz
	if(var_578_bool != 0) {
		var_565_int = -2;
		return 8;
	}
	CreateDialog(var_572_object);
	var_579_int = 0;
	func_4232(var_579_int);
	@@var_572_object:SetNPCName(var_579_int);
	var_580_string = "";
	func_4234(var_580_string);
	@@var_572_object:SetPhoto(var_580_string);
	var_581_int = 0;
	func_5088(var_581_int);
	@@var_572_object:SetPlayerName(var_581_int);
	IsOverrideActive(var_573_bool);
	var_582_bool = var_573_bool;
	if(var_582_bool != 0) {
		var_565_int = -2;
		return 8;
	}
	DoDialog(var_572_object);
	var_583_object = Obj(); var_584_object = Obj();
	var_566_object = var_583_object;
	var_572_object = var_584_object;
	TaskCall(15);
	func_3727(var_585_object, var_586_object, var_587_string, var_588_bool, var_583_object, var_584_object);
	TaskReturn();
	@@var_572_object:IsDialogEnd(var_575_bool);
	
Label_3709:
	var_619_bool = var_575_bool == 0; //@nz
	if(var_619_bool != 0) {
		sync();
		@@var_572_object:IsDialogEnd(var_575_bool);
		goto Label_3709;
	}
	var_566_object = Obj();
	func_4093();
	StopDialog(var_572_object);
	@@var_572_object:GetReturnValue((int)-1);
	var_574_int = var_565_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5201()
{
	var_88_object = Obj(); var_89_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_89_object, (int)123, (int)1, (int)13746);
	var_94_bool = 0; var_95_object = Obj(); var_96_int = 0;
	var_89_object = var_95_object;
	func_4992(var_94_bool, var_95_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4690(var_114_bool, var_115_object)
{
	var_116_bool = 0; var_117_object = Obj();
	var_115_object = var_117_object;
	func_4976(var_117_object);
	if(var_116_bool != 0) {
		var_114_bool = 1;
		return 0;
	}
	var_114_bool = 0;
	return 0;
}


func_4433()
{
	SetVariable("ood1Katerina5", (int)1);
	return 0;
}


func_4181(var_242_bool, var_243_object, var_244_string)
{
	var_245_int = 0; var_246_int = 0; var_247_bool = 0; var_248_int = 0; var_249_int = 0; var_250_bool = 0;
	GetInvItemByName(var_248_int, var_244_string);
	GetInvItemProperty(var_249_int, var_248_int, "Category");
	@@var_243_object:RemoveItemByType(var_250_bool, var_248_int, var_249_int);
	var_250_bool = var_242_bool;
	return 6;
}


func_4439()
{
	SetVariable("ood1Katerina6", (int)1);
	return 0;
}


func_4952(var_488_bool)
{
	var_490_int = 0; var_491_string = "";
	func_4132(var_490_int, "KnowKapella");
	var_493_bool = var_490_int == (int)1;
	if(var_493_bool != 0) {
		var_488_bool = 1;
		return 0;
	}
	var_488_bool = 0;
	return 0;
}


func_4700(var_446_bool)
{
	var_448_int = 0; var_449_string = "";
	func_4132(var_448_int, "ood1Katerina5");
	var_451_bool = var_448_int == (int)0;
	if(var_451_bool != 0) {
		var_446_bool = 1;
		return 0;
	}
	var_446_bool = 0;
	return 0;
}


func_4445()
{
	SetVariable("ood1Katerina7", (int)1);
	return 0;
}


func_4191(var_236_bool, var_237_string, var_238_string)
{
	var_239_object = Obj(); var_240_object = Obj();
	FindActor(var_240_object, var_237_string);
	var_241_bool = var_240_object == 0; //@ne
	if(var_241_bool != 0) {
		var_236_bool = 0;
		return 2;
	}
	Trigger(var_240_object, var_238_string);
	var_236_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5217()
{
	var_35_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	return 0;
}


func_1378(var_2_object, var_359_string)
{
	var_360_bool = 0;
	func_4236(var_360_bool);
	var_361_bool = var_360_bool == 0; //@nz
	if(var_361_bool != 0) {
		return 0;
	}
	var_362_bool = var_359_string == var_2_object;
	if(var_362_bool != 0) {
		return 0;
	}
	var_363_string = "";
	var_359_string = var_363_string;
	func_4097(var_363_string);
	var_2_object = var_359_string;
	return 0;
}


func_4451()
{
	SetVariable("ood1Katerina8", (int)1);
	return 0;
}


func_2660(var_2_object, var_41_string)
{
	var_42_bool = 0;
	func_4236(var_42_bool);
	var_43_bool = var_42_bool == 0; //@nz
	if(var_43_bool != 0) {
		return 0;
	}
	var_44_bool = var_41_string == var_2_object;
	if(var_44_bool != 0) {
		return 0;
	}
	var_45_string = "";
	var_41_string = var_45_string;
	func_4097(var_45_string);
	var_2_object = var_41_string;
	return 0;
}


func_5221(var_36_object)
{
	var_37_bool = GlobalVars[1];
	var_38_bool = var_37_bool == 0; //@nz
	if(var_38_bool != 0) {
		var_39_int = 0; var_40_object = Obj();
		var_36_object = var_40_object;
		TaskCall(2);
		func_49(var_41_object, var_39_int, var_40_object);
		TaskReturn();
		var_148_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_149_bool = 0; var_150_int = 0;
	func_4217(var_149_bool, (int)1);
	if(var_149_bool != 0) {
		var_157_int = 0; var_158_object = Obj();
		var_36_object = var_158_object;
		TaskCall(6);
		func_1035(var_159_object, var_157_int, var_158_object);
		TaskReturn();
		return 0;
	}
	var_377_bool = 0; var_378_int = 0;
	func_4217(var_377_bool, (int)2);
	if(var_377_bool != 0) {
		var_379_int = 0; var_380_object = Obj();
		var_36_object = var_380_object;
		TaskCall(8);
		func_2509(var_381_object, var_379_int, var_380_object);
		TaskReturn();
		return 0;
	}
	var_429_bool = 0; var_430_int = 0;
	func_4217(var_429_bool, (int)3);
	if(var_429_bool != 0) {
		var_431_int = 0; var_432_object = Obj();
		var_36_object = var_432_object;
		TaskCall(10);
		func_2827(var_433_object, var_431_int, var_432_object);
		TaskReturn();
		return 0;
	}
	var_508_bool = 0; var_509_int = 0;
	func_4217(var_508_bool, (int)4);
	if(var_508_bool != 0) {
		var_510_int = 0; var_511_object = Obj();
		var_36_object = var_511_object;
		TaskCall(12);
		func_3426(var_512_object, var_510_int, var_511_object);
		TaskReturn();
		return 0;
	}
	var_563_bool = 0; var_564_int = 0;
	func_4217(var_563_bool, (int)5);
	if(var_563_bool != 0) {
		var_565_int = 0; var_566_object = Obj();
		var_36_object = var_566_object;
		TaskCall(14);
		func_3664(var_567_object, var_565_int, var_566_object);
		TaskReturn();
		return 0;
	}
	var_621_bool = 0; var_622_int = 0;
	func_4217(var_621_bool, (int)6);
	if(var_621_bool != 0) {
		var_623_int = 0; var_624_object = Obj();
		var_36_object = var_624_object;
		TaskCall(4);
		func_317(var_625_object, var_623_int, var_624_object);
		TaskReturn();
		return 0;
	}
	func_4223((bool)0);
	return 0;
}


func_4964(var_407_bool)
{
	var_409_int = 0; var_410_string = "";
	func_4132(var_409_int, "KnowPredictions");
	var_412_bool = var_409_int == (int)1;
	if(var_412_bool != 0) {
		var_407_bool = 1;
		return 0;
	}
	var_407_bool = 0;
	return 0;
}


func_3426(var_0_object, var_510_int, var_511_object)
{
	var_513_object = Obj(); var_514_bool = 0; var_515_int = 0; var_516_bool = 0; var_517_object = Obj(); var_518_bool = 0; var_519_int = 0; var_520_bool = 0;
	var_0_object = var_511_object;
	var_521_bool = 0; var_522_object = Obj();
	var_511_object = var_522_object;
	func_4037(var_521_bool, var_522_object);
	var_523_bool = var_521_bool == 0; //@nz
	if(var_523_bool != 0) {
		var_510_int = -2;
		return 8;
	}
	CreateDialog(var_517_object);
	var_524_int = 0;
	func_4232(var_524_int);
	@@var_517_object:SetNPCName(var_524_int);
	var_525_string = "";
	func_4234(var_525_string);
	@@var_517_object:SetPhoto(var_525_string);
	var_526_int = 0;
	func_5088(var_526_int);
	@@var_517_object:SetPlayerName(var_526_int);
	IsOverrideActive(var_518_bool);
	var_527_bool = var_518_bool;
	if(var_527_bool != 0) {
		var_510_int = -2;
		return 8;
	}
	DoDialog(var_517_object);
	var_528_object = Obj(); var_529_object = Obj();
	var_511_object = var_528_object;
	var_517_object = var_529_object;
	TaskCall(13);
	func_3489(var_530_object, var_531_object, var_532_string, var_533_bool, var_528_object, var_529_object);
	TaskReturn();
	@@var_517_object:IsDialogEnd(var_520_bool);
	
Label_3471:
	var_561_bool = var_520_bool == 0; //@nz
	if(var_561_bool != 0) {
		sync();
		@@var_517_object:IsDialogEnd(var_520_bool);
		goto Label_3471;
	}
	var_511_object = Obj();
	func_4093();
	StopDialog(var_517_object);
	@@var_517_object:GetReturnValue((int)-1);
	var_519_int = var_510_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4712(var_462_bool)
{
	var_464_int = 0; var_465_string = "";
	func_4132(var_464_int, "ood1Katerina6");
	var_467_bool = var_464_int == (int)0;
	if(var_467_bool != 0) {
		var_462_bool = 1;
		return 0;
	}
	var_462_bool = 0;
	return 0;
}


func_4457()
{
	SetVariable("ood1Katerina9", (int)1);
	return 0;
}


func_4203(var_58_float)
{
	var_59_float = 0; var_60_float = 0;
	GetGameTime(var_60_float);
	var_60_float = var_58_float;
	return 2;
}


func_4463()
{
	SetVariable("ood1Katerina10", (int)1);
	return 0;
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_102_object, var_103_object)
{
	var_0_object = var_103_object;
	var_1_object = var_102_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_109_object = Obj(); var_110_object = Obj();
		var_109_object = var_1_object;
		var_110_object = var_0_object;
		func_4256();
		var_113_string = "";
		func_180(var_103_object, "Neutral");
		@@@var_0_object:SetMessage((int)295);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)296, (int)350, (int)347);
		@@@var_0_object:AddReply((int)297, (int)350, (int)348);
		@@@var_0_object:AddReply((int)298, (int)350, (int)349);
		goto Label_150;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_150:
	var_138_bool = 0;
	func_4236(var_138_bool);
	if(var_138_bool != 0) {

	Label_154:
		lshWaitForAnimEnd();
		var_139_object = var_3_object;
		if(var_139_object != 0) {
		} else {
			var_140_string = "";
			var_140_string = var_2_object;
			func_4097(var_140_string);
			goto Label_154;
	}
		PlayAnimation("all", "idle");

	Label_169:
		WaitForAnimEnd();
		var_143_object = var_3_object;
		if(var_143_object != 0) {
			goto Label_179;
		}
		PlayAnimation("all", "idle");
		goto Label_169;
	}
	goto Label_179;
	
Label_179:
	return 0;
	
}


func_4208(var_151_int)
{
	var_152_float = 0; var_153_float = 0;
	GetGameTime(var_153_float);
	var_155_int = 0;
	var_155_int = var_153_float / (int)24;
	var_151_int = (int)1 + var_155_int;
	return 2;
}


func_4976(var_116_bool)
{
	var_116_bool = 0;
	return 0;
}


func_4979(var_76_object)
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


func_4724(var_478_bool)
{
	var_480_int = 0; var_481_string = "";
	func_4132(var_480_int, "ood1Katerina7");
	var_483_bool = var_480_int == (int)0;
	if(var_483_bool != 0) {
		var_478_bool = 1;
		return 0;
	}
	var_478_bool = 0;
	return 0;
}


func_4469(var_87_object)
{
	var_88_object = Obj(); var_89_string = ""; var_90_float = 0;
	func_5038(Obj());
	var_91_object = var_88_object;
	func_5055(var_88_object, "pt_map_lara", (float)2);
	var_111_object = Obj();
	func_5038(var_111_object);
	@@var_87_object:ShowMap(var_111_object);
	return 0;
}


func_4217(var_149_bool, var_150_int)
{
	var_151_int = 0;
	func_4208(var_151_int);
	var_149_bool = var_151_int == var_150_int;
	return 0;
}


func_380(var_0_object, var_1_object, var_2_object, var_3_object, var_641_object, var_642_object)
{
	var_0_object = var_642_object;
	var_1_object = var_641_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_648_string = "";
		func_508(var_642_object, "Neutral");
		@@@var_0_object:SetMessage((int)12770);
		@@@var_0_object:ClearReplies();
		var_654_bool = 0;
		var_654_bool = 0;
		var_655_bool = 0; var_656_object = Obj();
		var_656_object = var_1_object;
		func_4820(var_656_object);
		if(var_655_bool != 0) {
			var_661_bool = 0; var_662_object = Obj();
			var_662_object = var_1_object;
			func_4796(var_662_object);
			if(var_661_bool != 0) {
				var_654_bool = 1;
			}
		}
		if(var_654_bool != 0) {
			@@@var_0_object:AddReply((int)12771, (int)3726, (int)13970);
		}
		var_670_bool = 0;
		var_670_bool = 0;
		var_671_bool = 0; var_672_object = Obj();
		var_672_object = var_1_object;
		func_4832(var_672_object);
		if(var_671_bool != 0) {
			var_677_bool = 0; var_678_object = Obj();
			var_678_object = var_1_object;
			func_4808(var_678_object);
			if(var_677_bool != 0) {
				var_670_bool = 1;
			}
		}
		if(var_670_bool != 0) {
			@@@var_0_object:AddReply((int)12772, (int)13972, (int)13971);
		}
		var_686_bool = 0;
		var_686_bool = 1;
		var_687_bool = 0;
		var_687_bool = 0;
		var_688_bool = 0; var_689_object = Obj();
		var_689_object = var_1_object;
		func_4844(var_689_object);
		if(var_688_bool != 0) {
			var_694_bool = 0; var_695_object = Obj();
			var_695_object = var_1_object;
			func_4868(var_695_object);
			if(var_694_bool != 0) {
				var_687_bool = 1;
			}
		}
		if(var_687_bool != 1) {
			var_700_bool = 0;
			var_700_bool = 0;
			var_701_bool = 0; var_702_object = Obj();
			var_702_object = var_1_object;
			func_4856(var_702_object);
			if(var_701_bool != 0) {
				var_707_bool = 0; var_708_object = Obj();
				var_708_object = var_1_object;
				func_4868(var_708_object);
				if(var_707_bool != 0) {
					var_700_bool = 1;
				}
			}
			if(var_700_bool != 1) {
				var_686_bool = 0;
			}
		}
		if(var_686_bool != 0) {
			@@@var_0_object:AddReply((int)12791, (int)13991, (int)13990);
		}
		@@@var_0_object:AddReply((int)12790, (int)-1, (int)13989);
		goto Label_478;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x180";
	}
Label_478:
	var_715_bool = 0;
	func_4236(var_715_bool);
	if(var_715_bool != 0) {

	Label_482:
		lshWaitForAnimEnd();
		var_716_object = var_3_object;
		if(var_716_object != 0) {
		} else {
			var_717_string = "";
			var_717_string = var_2_object;
			func_4097(var_717_string);
			goto Label_482;
	}
		PlayAnimation("all", "idle");

	Label_497:
		WaitForAnimEnd();
		var_720_object = var_3_object;
		if(var_720_object != 0) {
			goto Label_507;
		}
		PlayAnimation("all", "idle");
		goto Label_497;
	}
	goto Label_507;
	
Label_507:
	return 0;
	
}


func_4223(var_725_bool)
{
	var_726_bool = 0; var_727_bool = 0;
	var_728_string = "";
	func_4097("No");
	lshWaitForAnimEnd(var_727_bool);
	var_727_bool = var_725_bool;
	return 2;
}


func_4736(var_494_bool)
{
	var_496_int = 0; var_497_string = "";
	func_4132(var_496_int, "ood1Katerina8");
	var_499_bool = var_496_int == (int)0;
	if(var_499_bool != 0) {
		var_494_bool = 1;
		return 0;
	}
	var_494_bool = 0;
	return 0;
}


func_4992(var_67_bool, var_68_object, var_69_int)
{
	var_70_object = Obj(); var_71_object = Obj(); var_72_int = 0; var_73_object = Obj(); var_74_object = Obj(); var_75_int = 0;
	func_4979(Obj());
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
	SetVariable("player_diary", (int)1);
	@@var_68_object:GetCategory(var_75_int);
	SetDiarySection(var_75_int);
	var_67_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_4485()
{
	SetVariable("KnowRubin", (int)1);
	return 0;
}


func_4232(var_91_int)
{
	var_91_int = 2864;
	return 0;
}


func_4234(var_92_string)
{
	var_92_string = "ui/NPC_Black.png";
	return 0;
}


func_4491()
{
	var_43_object = Obj(); var_44_object = Obj();
	SetVariable("d5q01", (int)4);
	func_5038(Obj());
	var_47_object = var_44_object;
	var_58_float = 0;
	func_4203(var_58_float);
	@@var_44_object:AddMark("d5q01KaterinaGotoLara", "pt_map_lara", (int)1, (int)11959, var_58_float);
	func_5185();
	return 2;
}
EMIT "Stack[-1] = 0";


func_4236(var_38_bool)
{
	var_38_bool = 1;
	return 0;
}


func_4748(var_510_bool)
{
	var_512_int = 0; var_513_string = "";
	func_4132(var_512_int, "ood1Katerina9");
	var_515_bool = var_512_int == (int)0;
	if(var_515_bool != 0) {
		var_510_bool = 1;
		return 0;
	}
	var_510_bool = 0;
	return 0;
}


func_4238()
{
	SetVariable("ood1Katerina1", (int)1);
	return 0;
}


func_3727(var_0_object, var_1_object, var_2_object, var_3_object, var_583_object, var_584_object)
{
	var_0_object = var_584_object;
	var_1_object = var_583_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_590_string = "";
		func_3795(var_584_object, "Neutral");
		@@@var_0_object:SetMessage((int)11641);
		@@@var_0_object:ClearReplies();
		var_596_bool = 0; var_597_object = Obj();
		var_597_object = var_1_object;
		func_4784(var_597_object);
		if(var_596_bool != 0) {
			@@@var_0_object:AddReply((int)11642, (int)12842, (int)12841);
		}
		@@@var_0_object:AddReply((int)11651, (int)12851, (int)12850);
		@@@var_0_object:AddReply((int)11660, (int)-1, (int)12859);
		goto Label_3765;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xe93";
	}
Label_3765:
	var_611_bool = 0;
	func_4236(var_611_bool);
	if(var_611_bool != 0) {

	Label_3769:
		lshWaitForAnimEnd();
		var_612_object = var_3_object;
		if(var_612_object != 0) {
		} else {
			var_613_string = "";
			var_613_string = var_2_object;
			func_4097(var_613_string);
			goto Label_3769;
	}
		PlayAnimation("all", "idle");

	Label_3784:
		WaitForAnimEnd();
		var_616_object = var_3_object;
		if(var_616_object != 0) {
			goto Label_3794;
		}
		PlayAnimation("all", "idle");
		goto Label_3784;
	}
	goto Label_3794;
	
Label_3794:
	return 0;
	
}


func_4244()
{
	SetVariable("ood1Katerina2", (int)1);
	return 0;
}


func_4760(var_526_bool)
{
	var_528_int = 0; var_529_string = "";
	func_4132(var_528_int, "ood1Katerina10");
	var_531_bool = var_528_int == (int)0;
	if(var_531_bool != 0) {
		var_526_bool = 1;
		return 0;
	}
	var_526_bool = 0;
	return 0;
}


func_4250()
{
	SetVariable("ood1Katerina3", (int)1);
	return 0;
}


func_5021(var_224_bool, var_225_int)
{
	var_226_object = Obj(); var_227_object = Obj(); var_228_object = Obj(); var_229_object = Obj();
	func_4979(Obj());
	var_230_object = var_228_object;
	@@var_228_object:Find(var_225_int, var_229_object);
	var_231_bool = var_229_object == 0; //@nz
	if(var_231_bool != 0) {
		var_224_bool = 0;
		return 4;
	}
	@@var_229_object:Remove();
	var_224_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4256()
{
	SetVariable("KnowKaterina", (int)1);
	return 0;
}


func_3489(var_0_object, var_1_object, var_2_object, var_3_object, var_528_object, var_529_object)
{
	var_0_object = var_529_object;
	var_1_object = var_528_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_535_string = "";
		func_3552(var_529_object, "Neutral");
		@@@var_0_object:SetMessage((int)11203);
		@@@var_0_object:ClearReplies();
		var_541_bool = 0; var_542_object = Obj();
		var_542_object = var_1_object;
		func_4928(var_542_object);
		if(var_541_bool != 0) {
			@@@var_0_object:AddReply((int)11204, (int)12393, (int)12392);
		}
		@@@var_0_object:AddReply((int)15336, (int)-1, (int)16559);
		goto Label_3522;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xda5";
	}
Label_3522:
	var_553_bool = 0;
	func_4236(var_553_bool);
	if(var_553_bool != 0) {

	Label_3526:
		lshWaitForAnimEnd();
		var_554_object = var_3_object;
		if(var_554_object != 0) {
		} else {
			var_555_string = "";
			var_555_string = var_2_object;
			func_4097(var_555_string);
			goto Label_3526;
	}
		PlayAnimation("all", "idle");

	Label_3541:
		WaitForAnimEnd();
		var_558_object = var_3_object;
		if(var_558_object != 0) {
			goto Label_3551;
		}
		PlayAnimation("all", "idle");
		goto Label_3541;
	}
	goto Label_3551;
	
Label_3551:
	return 0;
	
}


func_4514()
{
	SetVariable("d1q01KaterinaUHave1day", (int)1);
	func_5105();
	return 0;
}


func_4772(var_81_bool)
{
	var_83_int = 0; var_84_string = "";
	func_4132(var_83_int, "d3q01");
	var_86_bool = var_83_int == (int)0;
	if(var_86_bool != 0) {
		var_81_bool = 1;
		return 0;
	}
	var_81_bool = 0;
	return 0;
}


func_4262()
{
	func_5121();
	func_5169();
	var_118_object = Obj(); var_119_string = "";
	func_4137(var_118_object, "quest_d1_04");
	return 0;
}


func_4523()
{
	SetVariable("ood6Katerina1", (int)1);
	return 0;
}


func_5038(var_47_object)
{
	var_48_object = Obj(); var_49_object = Obj(); var_50_object = Obj(); var_51_object = Obj();
	GetMainOutdoorScene(var_50_object);
	var_52_bool = var_50_object == 0; //@ne
	if(var_52_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_51_object = 0;
		var_51_object = var_47_object;
		return 4;
	}
	@@var_50_object:GetMap(var_51_object);
	var_51_object = var_47_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4784(var_130_bool)
{
	var_132_int = 0; var_133_string = "";
	func_4132(var_132_int, "d5q01");
	var_137_bool = var_132_int == (int)3;
	if(var_137_bool != 0) {
		var_130_bool = 1;
		return 0;
	}
	var_130_bool = 0;
	return 0;
}


func_4529()
{
	SetVariable("ood6Katerina2", (int)1);
	return 0;
}


func_4274()
{
	SetVariable("ood1Katerina4", (int)1);
	return 0;
}


func_2993(var_2_object, var_92_string)
{
	var_93_bool = 0;
	func_4236(var_93_bool);
	var_94_bool = var_93_bool == 0; //@nz
	if(var_94_bool != 0) {
		return 0;
	}
	var_95_bool = var_92_string == var_2_object;
	if(var_95_bool != 0) {
		return 0;
	}
	var_96_string = "";
	var_92_string = var_96_string;
	func_4097(var_96_string);
	var_2_object = var_92_string;
	return 0;
}


func_180(var_2_object, var_45_string)
{
	var_46_bool = 0;
	func_4236(var_46_bool);
	var_47_bool = var_46_bool == 0; //@nz
	if(var_47_bool != 0) {
		return 0;
	}
	var_48_bool = var_45_string == var_2_object;
	if(var_48_bool != 0) {
		return 0;
	}
	var_49_string = "";
	var_45_string = var_49_string;
	func_4097(var_49_string);
	var_2_object = var_45_string;
	return 0;
}


func_4020(var_36_bool, var_37_object)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0;
	@@var_37_object:GetPosition(var_42_cvector);
	GetPosition(var_43_cvector);
	var_44_cvector = var_42_cvector - var_43_cvector;
	var_46_float = GetByIndex(var_44_cvector, 0);
	var_47_float = GetByIndex(var_44_cvector, 2);
	Rotate(var_46_float, var_47_float, var_45_bool);
	var_45_bool = var_36_bool;
	return 8;
}


func_4535()
{
	var_65_object = Obj(); var_66_object = Obj();
	SetVariable("d6q01", (int)2);
	func_5038(Obj());
	var_69_object = var_66_object;
	var_80_float = 0;
	func_4203(var_80_float);
	@@var_66_object:AddMark("d6q01KaterinaGotoLaska", "pt_map_laska", (int)1, (int)15398, var_80_float);
	var_87_float = 0;
	func_4203(var_87_float);
	@@var_66_object:AddMark("d6q01KaterinagotoLaskaSelf", "pt_map_katerina", (int)1, (int)15399, var_87_float);
	func_5201();
	var_113_bool = 0; var_114_string = ""; var_115_string = "";
	func_4191(var_113_bool, "quest_d6_01", "saburov_klara_remove");
	return 2;
}
EMIT "Stack[-1] = 0";


func_4280(var_202_object)
{
	var_204_object = Obj(); var_205_object = Obj(); var_206_object = Obj(); var_207_object = Obj();
	func_5038(Obj());
	var_208_object = var_206_object;
	@@var_206_object:FindMark(var_207_object, "d1q04KaterinaGotoMishka");
	var_210_object = var_207_object;
	if(var_210_object != 0) {
		@@var_207_object:Remove();
	}
	@@var_206_object:FindMark(var_207_object, "d1q04Spi4kaGotoPowderHouse");
	var_212_object = var_207_object;
	if(var_212_object != 0) {
		@@var_207_object:Remove();
	}
	@@var_206_object:FindMark(var_207_object, "d1q04MishkaGotoSpi4ka");
	var_214_object = var_207_object;
	if(var_214_object != 0) {
		@@var_207_object:Remove();
	}
	func_5137();
	var_224_bool = 0; var_225_int = 0;
	func_5021(var_224_bool, (int)44);
	var_232_bool = 0; var_233_int = 0;
	func_5021(var_232_bool, (int)45);
	var_234_bool = 0; var_235_int = 0;
	func_5021(var_234_bool, (int)46);
	var_236_bool = 0; var_237_string = ""; var_238_string = "";
	func_4191(var_236_bool, "quest_d1_04", "completed");
	var_242_bool = 0; var_243_object = Obj(); var_244_string = "";
	var_202_object = var_243_object;
	func_4181(var_242_bool, var_243_object, "powder");
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4796(var_158_bool)
{
	var_160_int = 0; var_161_string = "";
	func_4132(var_160_int, "d6q01");
	var_163_bool = var_160_int == (int)1;
	if(var_163_bool != 0) {
		var_158_bool = 1;
		return 0;
	}
	var_158_bool = 0;
	return 0;
}


func_5055(var_88_object, var_89_string, var_90_float)
{
	var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_object = Obj(); var_95_bool = 0; var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_object = Obj(); var_99_bool = 0;
	GetMainOutdoorScene(var_98_object);
	var_100_bool = var_98_object == 0; //@ne
	if(var_100_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_98_object:GetLocator(var_89_string, var_99_bool, var_96_cvector, var_97_cvector);
	var_102_bool = var_99_bool == 0; //@nz
	if(var_102_bool != 0) {
		var_104_int = "Warning: outdoor scene locator " + var_89_string;
		var_106_int = var_104_int + " doesnt exist";
		Trace(var_106_int);
	}
	@@var_98_object:GetMap(var_88_object);
	var_107_bool = var_88_object == 0; //@ne
	if(var_107_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_109_float = GetByIndex(var_96_cvector, 0);
	var_110_float = GetByIndex(var_96_cvector, 2);
	@@var_88_object:SetMapParams(var_109_float, var_110_float, var_90_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_4032(var_36_bool)
{
	var_37_bool = 0; var_38_bool = 0;
	IsLoaded(var_38_bool);
	var_38_bool = var_36_bool;
	return 2;
}


func_4037(var_50_bool, var_51_object)
{
	var_52_float = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_bool = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_bool = 0;
	@@var_51_object:GetPosition(var_61_cvector);
	@@var_51_object:GetEyesHeight(var_60_float);
	var_68_float = GetByIndex(var_61_cvector, 1);
	var_68_float = var_68_float + var_60_float;
	SetByIndex(var_61_cvector, 1) = var_68_float;
	GetPosition(var_62_cvector);
	GetEyesHeight(var_60_float);
	var_69_float = GetByIndex(var_62_cvector, 1);
	var_69_float = var_69_float + var_60_float;
	SetByIndex(var_62_cvector, 1) = var_69_float;
	var_63_cvector = var_61_cvector - var_62_cvector;
	var_70_float = GetByIndex(var_63_cvector, 1);
	SetByIndex(var_63_cvector, 1) = (float)0;
	var_71_int = var_63_cvector | var_63_cvector;
	var_72_float = sqrt(var_71_int);
	var_63_cvector = var_63_cvector / var_72_float;
	var_64_cvector = -var_63_cvector;
	var_74_float = var_63_cvector * (int)70;
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0);
	var_76_cvector = var_64_cvector ^ CVector(0.0, 1.0, 0.0);
	func_4122(var_75_cvector, var_76_cvector);
	var_84_float = var_75_cvector * (int)25;
	var_85_int = var_74_float + var_84_float;
	var_65_cvector = var_85_int - CVector(0.0, 10.0, 0.0);
	var_66_cvector = var_62_cvector + var_65_cvector;
	IsOverrideActive(var_67_bool);
	var_87_bool = var_67_bool;
	if(var_87_bool != 0) {
		var_50_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_66_cvector, var_64_cvector);
	var_88_float = GetByIndex(var_65_cvector, 0);
	var_89_float = GetByIndex(var_65_cvector, 2);
	Rotate(var_88_float, var_89_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_50_bool = 1;
	return 16;
}


func_4808(var_174_bool)
{
	var_176_int = 0; var_177_string = "";
	func_4132(var_176_int, "d6q01KnowKillerIsKlara");
	var_179_bool = var_176_int == (int)1;
	if(var_179_bool != 0) {
		var_174_bool = 1;
		return 0;
	}
	var_174_bool = 0;
	return 0;
}


func_2509(var_0_object, var_379_int, var_380_object)
{
	var_382_object = Obj(); var_383_bool = 0; var_384_int = 0; var_385_bool = 0; var_386_object = Obj(); var_387_bool = 0; var_388_int = 0; var_389_bool = 0;
	var_0_object = var_380_object;
	var_390_bool = 0; var_391_object = Obj();
	var_380_object = var_391_object;
	func_4037(var_390_bool, var_391_object);
	var_392_bool = var_390_bool == 0; //@nz
	if(var_392_bool != 0) {
		var_379_int = -2;
		return 8;
	}
	CreateDialog(var_386_object);
	var_393_int = 0;
	func_4232(var_393_int);
	@@var_386_object:SetNPCName(var_393_int);
	var_394_string = "";
	func_4234(var_394_string);
	@@var_386_object:SetPhoto(var_394_string);
	var_395_int = 0;
	func_5088(var_395_int);
	@@var_386_object:SetPlayerName(var_395_int);
	IsOverrideActive(var_387_bool);
	var_396_bool = var_387_bool;
	if(var_396_bool != 0) {
		var_379_int = -2;
		return 8;
	}
	DoDialog(var_386_object);
	var_397_object = Obj(); var_398_object = Obj();
	var_380_object = var_397_object;
	var_386_object = var_398_object;
	TaskCall(9);
	func_2572(var_399_object, var_400_object, var_401_string, var_402_bool, var_397_object, var_398_object);
	TaskReturn();
	@@var_386_object:IsDialogEnd(var_389_bool);
	
Label_2554:
	var_427_bool = var_389_bool == 0; //@nz
	if(var_427_bool != 0) {
		sync();
		@@var_386_object:IsDialogEnd(var_389_bool);
		goto Label_2554;
	}
	var_380_object = Obj();
	func_4093();
	StopDialog(var_386_object);
	@@var_386_object:GetReturnValue((int)-1);
	var_388_int = var_379_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3795(var_2_object, var_114_string)
{
	var_115_bool = 0;
	func_4236(var_115_bool);
	var_116_bool = var_115_bool == 0; //@nz
	if(var_116_bool != 0) {
		return 0;
	}
	var_117_bool = var_114_string == var_2_object;
	if(var_117_bool != 0) {
		return 0;
	}
	var_118_string = "";
	var_114_string = var_118_string;
	func_4097(var_118_string);
	var_2_object = var_114_string;
	return 0;
}


func_4820(var_150_bool)
{
	var_152_int = 0; var_153_string = "";
	func_4132(var_152_int, "ood6Katerina1");
	var_157_bool = var_152_int == (int)0;
	if(var_157_bool != 0) {
		var_150_bool = 1;
		return 0;
	}
	var_150_bool = 0;
	return 0;
}


func_4572()
{
	SetVariable("ood6Katerina3", (int)1);
	return 0;
}


func_4832(var_168_bool)
{
	var_170_int = 0; var_171_string = "";
	func_4132(var_170_int, "ood6Katerina2");
	var_173_bool = var_170_int == (int)0;
	if(var_173_bool != 0) {
		var_168_bool = 1;
		return 0;
	}
	var_168_bool = 0;
	return 0;
}


func_5088(var_93_int)
{
	var_94_int = 0; var_95_int = 0;
	GetVariable("player", var_95_int);
	var_98_bool = var_95_int == (int)0;
	if(var_98_bool != 0) {
		var_93_int = 200001;
		return 2;
	EMIT "GOTO 0x13ef";
	}
	var_100_bool = var_95_int == (int)1;
	if(var_100_bool != 0) {
		var_93_int = 200002;
		return 2;
	}
	var_93_int = 200003;
	return 2;
}


func_3552(var_2_object, var_47_string)
{
	var_48_bool = 0;
	func_4236(var_48_bool);
	var_49_bool = var_48_bool == 0; //@nz
	if(var_49_bool != 0) {
		return 0;
	}
	var_50_bool = var_47_string == var_2_object;
	if(var_50_bool != 0) {
		return 0;
	}
	var_51_string = "";
	var_47_string = var_51_string;
	func_4097(var_51_string);
	var_2_object = var_47_string;
	return 0;
}


func_4578()
{
	SetVariable("KnowMishka", (int)1);
	return 0;
}


func_4584()
{
	SetVariable("ood3Katerina1", (int)1);
	return 0;
}


func_4844(var_185_bool)
{
	var_187_int = 0; var_188_string = "";
	func_4132(var_187_int, "d6q01");
	var_190_bool = var_187_int == (int)4;
	if(var_190_bool != 0) {
		var_185_bool = 1;
		return 0;
	}
	var_185_bool = 0;
	return 0;
}


func_4334()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_4590(var_41_object)
{
	Trace("drapery is given");
	var_44_object = Obj(); var_45_string = ""; var_46_int = 0;
	var_41_object = var_44_object;
	func_4161(var_44_object, "drapery", (int)1);
	return 0;
}


func_5105()
{
	var_49_object = Obj(); var_50_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_50_object, (int)32, (int)1, (int)12114);
	var_55_bool = 0; var_56_object = Obj(); var_57_int = 0;
	var_50_object = var_56_object;
	func_4992(var_55_bool, var_56_object, (int)2);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4340()
{
	var_260_object = Obj(); var_261_object = Obj(); var_262_object = Obj(); var_263_object = Obj();
	func_5038(Obj());
	var_264_object = var_262_object;
	@@var_262_object:FindMark(var_263_object, "d1q04KaterinaGotoMishka");
	var_266_object = var_263_object;
	if(var_266_object != 0) {
		@@var_263_object:Remove();
	}
	@@var_262_object:FindMark(var_263_object, "d1q04MishkaGotoSpi4ka");
	var_268_object = var_263_object;
	if(var_268_object != 0) {
		@@var_263_object:Remove();
	}
	@@var_262_object:FindMark(var_263_object, "d1q04Spi4kaGotoPowderHouse");
	var_270_object = var_263_object;
	if(var_270_object != 0) {
		@@var_263_object:Remove();
	}
	func_5153();
	var_280_bool = 0; var_281_int = 0;
	func_5021(var_280_bool, (int)44);
	var_282_bool = 0; var_283_int = 0;
	func_5021(var_282_bool, (int)45);
	var_284_bool = 0; var_285_int = 0;
	func_5021(var_284_bool, (int)46);
	var_286_bool = 0; var_287_string = ""; var_288_string = "";
	func_4191(var_286_bool, "quest_d1_04", "failed");
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4856(var_198_bool)
{
	var_200_int = 0; var_201_string = "";
	func_4132(var_200_int, "d6q01");
	var_203_bool = var_200_int == (int)3;
	if(var_203_bool != 0) {
		var_198_bool = 1;
		return 0;
	}
	var_198_bool = 0;
	return 0;
}


func_4601()
{
	SetVariable("ood4Katerina1", (int)1);
	return 0;
}


func_508(var_2_object, var_133_string)
{
	var_134_bool = 0;
	func_4236(var_134_bool);
	var_135_bool = var_134_bool == 0; //@nz
	if(var_135_bool != 0) {
		return 0;
	}
	var_136_bool = var_133_string == var_2_object;
	if(var_136_bool != 0) {
		return 0;
	}
	var_137_string = "";
	var_133_string = var_137_string;
	func_4097(var_137_string);
	var_2_object = var_133_string;
	return 0;
}


func_4093()
{
	CameraSwitchToNormal();
	return 0;
}


func_4607(var_344_bool)
{
	var_346_int = 0; var_347_string = "";
	func_4132(var_346_int, "ood1Katerina1");
	var_351_bool = var_346_int == (int)0;
	if(var_351_bool != 0) {
		var_344_bool = 1;
		return 0;
	}
	var_344_bool = 0;
	return 0;
}


