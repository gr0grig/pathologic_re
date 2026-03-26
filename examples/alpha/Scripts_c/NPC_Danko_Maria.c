// @IMPORTS: Hold/0,StopGroup0/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,GetGameTime/1,lshWaitForAnimEnd/1,SetVariable/2,TriggerWorld/2,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1,CreateDiaryEntry/4,irand/2,ShowWindow/2
// @STRINGS: W:Neutral|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetProperty|A:SetProperty|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:No|W:ui/NPC_Maria.png|W:ood1Maria1|W:ood1Maria2|W:ood1Maria3|W:ood1Maria4|W:money500 is given|W:money|W:playsound|W:givemoney|W:ood2Maria1|W:ood2Maria2|W:d2q02|W:d2q02MariaGotoPetr|W:pt_map_petr|A:AddMark|W:d2q03MariaGotoViktor|W:KnowViktor|W:ood6Maria1|W:ood6Maria2|W:ood8Maria1|W:KnowMaria|W:ood11Maria1|W:ood11Maria2|W:ood11Maria3|W:ood2Maria3|W:resque_list|A:SetReturnValue|W:ood1Maria5|W:ood1Maria6|W:ood1Maria7|W:ood1Maria8|W:d6MariaVisit|W:ood10Maria1|W:d10q01MariaSavePetr|W:d1q01FirstGeorgVisit|W:d2q01|W:d2q03|W:KnowMark|W:d6q01|W:KnowGeorg|W:d11q01|W:KnowKaterina|W:d10q01|W:KnowKapella|W:KnowStamatins|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:player|W:Adding diary entry|W:vol_|W:people.xml
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
// @EVENT_11: op=0xc9 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x218 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x481 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa22 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xd2d vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0xeb6 vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0x102f vars=int,int
// @PE: 0x23,0x29,0x70,0xb9,0xc9,0x198,0x208,0x218,0x351,0x471,0x481,0x976,0xa12,0xa22,0xcca,0xd1d,0xd2d,0xe3f,0xea6,0xeb6,0xf9c,0x101f,0x102f,0x127b,0x12b5,0x12ca,0x12d0,0x12d6,0x12dc,0x12e2,0x12ed,0x12f3,0x12f9,0x1316,0x131c,0x1322,0x1328,0x132e,0x1334,0x133a,0x1340,0x1346,0x134c,0x1352,0x135b,0x1360,0x1366,0x136c,0x1372,0x1378,0x137e,0x1384,0x138a,0x1396,0x13a2,0x13ae,0x13ba,0x13c6,0x13d2,0x13de,0x13ea,0x13f4,0x1400,0x140c,0x1418,0x1424,0x1430,0x143c,0x1448,0x1454,0x1460,0x146c,0x1478,0x1484,0x1490,0x149c,0x14a8,0x14b4,0x14c0,0x14cc,0x14d8,0x14e4,0x14f0,0x14fc,0x1508,0x1514,0x1520,0x1602

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
	func_5634(var_35_bool, var_36_object);
	return 0;
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool)
{
	var_36_bool = 0; var_37_object = Obj();
	var_35_bool = var_37_object;
	func_4658(var_36_bool, var_37_object);
	WaitForAnimEnd();
	return 0;
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_4753();
		var_40_bool = var_35_string == (int)84;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_4916();
			var_45_string = "";
			func_185(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)72);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)73, (int)87, (int)85);
			@@@var_0_object:AddReply((int)74, (int)88, (int)86);
			@@@var_0_object:AddReply((int)86, (int)87, (int)98);
			@@@var_0_object:AddReply((int)87, (int)87, (int)99);
			return 0;
		}
		var_74_bool = var_35_string == (int)88;
		if(var_74_bool != 0) {
			var_75_object = Obj(); var_76_object = Obj();
			var_75_object = var_1_object;
			var_76_object = var_0_object;
			func_4892();
			var_79_string = "";
			func_185(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)76);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)85, (int)87, (int)97);
			return 0;
		}
		var_85_bool = var_35_string == (int)87;
		if(var_85_bool != 0) {
			var_86_string = "";
			func_185(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)75);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)77, (int)93, (int)89);
			@@@var_0_object:AddReply((int)78, (int)91, (int)90);
			return 0;
		}
		var_95_bool = var_35_string == (int)91;
		if(var_95_bool != 0) {
			var_96_string = "";
			func_185(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)79);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)80, (int)-1, (int)92);
			return 0;
		}
		var_102_bool = var_35_string == (int)93;
		if(var_102_bool != 0) {
			var_103_string = "";
			func_185(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)81);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)83, (int)-1, (int)95);
			@@@var_0_object:AddReply((int)84, (int)-1, (int)96);
			return 0;
		}
		var_3_string = true;
		var_111_bool = 0;
		func_4808(var_111_bool);
		if(var_111_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xca";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_4753();
		var_40_bool = var_36_bool == (int)13313;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_4904();
		}
		var_46_bool = var_35_string == (int)3539;
		if(var_46_bool != 0) {
			var_47_bool = 0;
			var_47_bool = 0;
			var_48_bool = 0; var_49_object = Obj();
			var_49_object = var_1_object;
			func_5144(var_49_object);
			if(var_48_bool != 0) {
				var_56_bool = 0; var_57_object = Obj();
				var_57_object = var_1_object;
				func_5156(var_57_object);
				if(var_56_bool != 0) {
					var_47_bool = 1;
				}
			}
			if(var_47_bool != 0) {
				var_62_object = Obj(); var_63_object = Obj();
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_4898();
				var_66_object = Obj(); var_67_object = Obj();
				var_66_object = var_1_object;
				var_67_object = var_0_object;
				func_4984();
				var_70_string = "";
				func_520(var_36_bool, "Neutral");
				@@@var_0_object:SetMessage((int)3206);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)3207, (int)3543, (int)3540);
				@@@var_0_object:AddReply((int)3208, (int)3542, (int)3541);
				return 0;
			}
			var_92_object = Obj(); var_93_object = Obj();
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_4984();
			var_94_string = "";
			func_520(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12086);
			@@@var_0_object:ClearReplies();
			var_96_bool = 0; var_97_object = Obj();
			var_97_object = var_1_object;
			func_5168(var_97_object);
			if(var_96_bool != 0) {
				@@@var_0_object:AddReply((int)12087, (int)13314, (int)13313);
			}
			@@@var_0_object:AddReply((int)12094, (int)-1, (int)13320);
			return 0;
		}
		var_109_bool = var_35_string == (int)13314;
		if(var_109_bool != 0) {
			var_110_string = "";
			func_520(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12088);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12089, (int)13316, (int)13315);
			return 0;
		}
		var_116_bool = var_35_string == (int)13316;
		if(var_116_bool != 0) {
			var_117_string = "";
			func_520(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12090);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12091, (int)13318, (int)13317);
			return 0;
		}
		var_123_bool = var_35_string == (int)13318;
		if(var_123_bool != 0) {
			var_124_string = "";
			func_520(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12092);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12093, (int)-1, (int)13319);
			return 0;
		}
		var_130_bool = var_35_string == (int)3542;
		if(var_130_bool != 0) {
			var_131_string = "";
			func_520(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3209);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3215, (int)3543, (int)3549);
			@@@var_0_object:AddReply((int)3216, (int)3543, (int)3551);
			return 0;
		}
		var_140_bool = var_35_string == (int)3543;
		if(var_140_bool != 0) {
			var_141_string = "";
			func_520(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3210);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3211, (int)3545, (int)3544);
			@@@var_0_object:AddReply((int)3214, (int)3545, (int)3547);
			return 0;
		}
		var_150_bool = var_35_string == (int)3545;
		if(var_150_bool != 0) {
			var_151_string = "";
			func_520(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3212);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3213, (int)-1, (int)3546);
			@@@var_0_object:AddReply((int)3217, (int)3554, (int)3553);
			return 0;
		}
		var_160_bool = var_35_string == (int)3554;
		if(var_160_bool != 0) {
			var_161_string = "";
			func_520(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3218);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3219, (int)-1, (int)3555);
			@@@var_0_object:AddReply((int)3220, (int)-1, (int)3556);
			return 0;
		}
		var_3_string = true;
		var_169_bool = 0;
		func_4808(var_169_bool);
		if(var_169_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x219";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_4753();
		var_40_bool = var_36_bool == (int)6112;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_4816();
		}
		var_46_bool = var_36_bool == (int)6113;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_4816();
		}
		var_50_bool = var_36_bool == (int)6122;
		if(var_50_bool != 0) {
			var_51_object = Obj(); var_52_object = Obj();
			var_51_object = var_1_object;
			var_52_object = var_0_object;
			func_4816();
		}
		var_54_bool = var_36_bool == (int)6123;
		if(var_54_bool != 0) {
			var_55_object = Obj(); var_56_object = Obj();
			var_55_object = var_1_object;
			var_56_object = var_0_object;
			func_4816();
		}
		var_58_bool = var_36_bool == (int)6127;
		if(var_58_bool != 0) {
			var_59_object = Obj(); var_60_object = Obj();
			var_59_object = var_1_object;
			var_60_object = var_0_object;
			func_4816();
		}
		var_62_bool = var_36_bool == (int)6128;
		if(var_62_bool != 0) {
			var_63_object = Obj(); var_64_object = Obj();
			var_63_object = var_1_object;
			var_64_object = var_0_object;
			func_4816();
		}
		var_66_bool = var_36_bool == (int)6154;
		if(var_66_bool != 0) {
			var_67_object = Obj(); var_68_object = Obj();
			var_67_object = var_1_object;
			var_68_object = var_0_object;
			func_4822();
		}
		var_72_bool = var_36_bool == (int)6155;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_object;
			func_4822();
		}
		var_76_bool = var_36_bool == (int)6158;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_object;
			func_4822();
		}
		var_80_bool = var_36_bool == (int)6159;
		if(var_80_bool != 0) {
			var_81_object = Obj(); var_82_object = Obj();
			var_81_object = var_1_object;
			var_82_object = var_0_object;
			func_4822();
		}
		var_84_bool = var_36_bool == (int)6164;
		if(var_84_bool != 0) {
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_4822();
		}
		var_88_bool = var_36_bool == (int)6173;
		if(var_88_bool != 0) {
			var_89_object = Obj(); var_90_object = Obj();
			var_89_object = var_1_object;
			var_90_object = var_0_object;
			func_4822();
		}
		var_92_bool = var_36_bool == (int)6902;
		if(var_92_bool != 0) {
			var_93_object = Obj(); var_94_object = Obj();
			var_93_object = var_1_object;
			var_94_object = var_0_object;
			func_4828();
		}
		var_98_bool = var_36_bool == (int)6903;
		if(var_98_bool != 0) {
			var_99_object = Obj(); var_100_object = Obj();
			var_99_object = var_1_object;
			var_100_object = var_0_object;
			func_4828();
		}
		var_102_bool = var_36_bool == (int)6904;
		if(var_102_bool != 0) {
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_4828();
		}
		var_106_bool = var_36_bool == (int)6188;
		if(var_106_bool != 0) {
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_4828();
		}
		var_110_bool = var_36_bool == (int)6183;
		if(var_110_bool != 0) {
			var_111_object = Obj(); var_112_object = Obj();
			var_111_object = var_1_object;
			var_112_object = var_0_object;
			func_4810();
		}
		var_116_bool = var_36_bool == (int)6184;
		if(var_116_bool != 0) {
			var_117_object = Obj(); var_118_object = Obj();
			var_117_object = var_1_object;
			var_118_object = var_0_object;
			func_4810();
		}
		var_120_bool = var_36_bool == (int)8932;
		if(var_120_bool != 0) {
			var_121_object = Obj(); var_122_object = Obj();
			var_121_object = var_1_object;
			var_122_object = var_0_object;
			func_4828();
		}
		var_124_bool = var_36_bool == (int)8934;
		if(var_124_bool != 0) {
			var_125_object = Obj(); var_126_object = Obj();
			var_125_object = var_1_object;
			var_126_object = var_0_object;
			func_4960();
		}
		var_130_bool = var_36_bool == (int)8938;
		if(var_130_bool != 0) {
			var_131_object = Obj(); var_132_object = Obj();
			var_131_object = var_1_object;
			var_132_object = var_0_object;
			func_4966();
		}
		var_136_bool = var_36_bool == (int)8940;
		if(var_136_bool != 0) {
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_object;
			func_4972();
		}
		var_142_bool = var_36_bool == (int)8942;
		if(var_142_bool != 0) {
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_object;
			func_4978();
		}
		var_148_bool = var_35_string == (int)6919;
		if(var_148_bool != 0) {
			var_149_bool = 0; var_150_object = Obj();
			var_150_object = var_1_object;
			func_5050(var_150_object);
			var_157_bool = var_149_bool == 0; //@nz
			if(var_157_bool != 0) {
				var_158_string = "";
				func_1137(var_36_bool, "Neutral");
				@@@var_0_object:SetMessage((int)6253);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)6254, (int)6921, (int)6920);
				@@@var_0_object:AddReply((int)6259, (int)6926, (int)6925);
				return 0;
			}
			var_180_bool = 0; var_181_object = Obj();
			var_181_object = var_1_object;
			func_5014(var_181_object);
			if(var_180_bool != 0) {
				var_186_string = "";
				func_1137(var_36_bool, "Neutral");
				@@@var_0_object:SetMessage((int)5533);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)5534, (int)6099, (int)6098);
				@@@var_0_object:AddReply((int)5571, (int)6140, (int)6139);
				return 0;
			}
			var_194_bool = 0; var_195_object = Obj();
			var_195_object = var_1_object;
			func_5026(var_195_object);
			if(var_194_bool != 0) {
				var_200_string = "";
				func_1137(var_36_bool, "Neutral");
				@@@var_0_object:SetMessage((int)5574);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)5575, (int)6145, (int)6144);
				return 0;
			}
			var_205_bool = 0;
			var_205_bool = 0;
			var_206_bool = 0; var_207_object = Obj();
			var_207_object = var_1_object;
			func_5038(var_207_object);
			if(var_206_bool != 0) {
				var_212_bool = 0; var_213_object = Obj();
				var_213_object = var_1_object;
				func_5098(var_212_bool, var_213_object);
				if(var_212_bool != 0) {
					var_205_bool = 1;
				}
			}
			if(var_205_bool != 0) {
				var_216_string = "";
				func_1137(var_36_bool, "Neutral");
				@@@var_0_object:SetMessage((int)5527);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)5528, (int)6901, (int)6092);
				@@@var_0_object:AddReply((int)5529, (int)6187, (int)6093);
				return 0;
			}
			var_224_bool = 0; var_225_object = Obj();
			var_225_object = var_1_object;
			func_5002(var_225_object);
			if(var_224_bool != 0) {
				var_230_string = "";
				func_1137(var_36_bool, "Neutral");
				@@@var_0_object:SetMessage((int)5604);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)5605, (int)6180, (int)6179);
				@@@var_0_object:AddReply((int)5611, (int)6180, (int)6185);
				return 0;
			}
			var_238_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8097);
			@@@var_0_object:ClearReplies();
			var_240_bool = 0; var_241_object = Obj();
			var_241_object = var_1_object;
			func_5098(var_240_bool, var_241_object);
			if(var_240_bool != 0) {
				@@@var_0_object:AddReply((int)8098, (int)-1, (int)8921);
			}
			var_245_bool = 0;
			var_245_bool = 0;
			var_246_bool = 0; var_247_object = Obj();
			var_247_object = var_1_object;
			func_5288(var_247_object);
			if(var_246_bool != 0) {
				var_252_bool = 0; var_253_object = Obj();
				var_253_object = var_1_object;
				func_5038(var_253_object);
				if(var_252_bool != 0) {
					var_245_bool = 1;
				}
			}
			if(var_245_bool != 0) {
				@@@var_0_object:AddReply((int)8109, (int)8947, (int)8932);
			}
			var_257_bool = 0;
			var_257_bool = 0;
			var_258_bool = 0; var_259_object = Obj();
			var_259_object = var_1_object;
			func_5192(var_259_object);
			if(var_258_bool != 0) {
				var_264_bool = 0; var_265_object = Obj();
				var_265_object = var_1_object;
				func_5300(var_265_object);
				if(var_264_bool != 0) {
					var_257_bool = 1;
				}
			}
			if(var_257_bool != 0) {
				@@@var_0_object:AddReply((int)8111, (int)8948, (int)8934);
			}
			var_273_bool = 0;
			var_273_bool = 0;
			var_274_bool = 0; var_275_object = Obj();
			var_275_object = var_1_object;
			func_5132(var_275_object);
			if(var_274_bool != 0) {
				var_280_bool = 0; var_281_object = Obj();
				var_281_object = var_1_object;
				func_5312(var_281_object);
				if(var_280_bool != 0) {
					var_273_bool = 1;
				}
			}
			if(var_273_bool != 0) {
				@@@var_0_object:AddReply((int)8115, (int)8949, (int)8938);
			}
			var_289_bool = 0;
			var_289_bool = 0;
			var_290_bool = 0; var_291_object = Obj();
			var_291_object = var_1_object;
			func_5396(var_291_object);
			if(var_290_bool != 0) {
				var_296_bool = 0; var_297_object = Obj();
				var_297_object = var_1_object;
				func_5324(var_297_object);
				if(var_296_bool != 0) {
					var_289_bool = 1;
				}
			}
			if(var_289_bool != 0) {
				@@@var_0_object:AddReply((int)8117, (int)8950, (int)8940);
			}
			var_305_bool = 0;
			var_305_bool = 0;
			var_306_bool = 0; var_307_object = Obj();
			var_307_object = var_1_object;
			func_5384(var_307_object);
			if(var_306_bool != 0) {
				var_312_bool = 0; var_313_object = Obj();
				var_313_object = var_1_object;
				func_5336(var_313_object);
				if(var_312_bool != 0) {
					var_305_bool = 1;
				}
			}
			if(var_305_bool != 0) {
				@@@var_0_object:AddReply((int)8119, (int)8951, (int)8942);
			}
			@@@var_0_object:AddReply((int)15220, (int)-1, (int)16497);
			return 0;
		}
		var_325_bool = var_35_string == (int)8951;
		if(var_325_bool != 0) {
			var_326_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8128);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8688, (int)-1, (int)9526);
			return 0;
		}
		var_332_bool = var_35_string == (int)8950;
		if(var_332_bool != 0) {
			var_333_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8127);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8687, (int)-1, (int)9525);
			return 0;
		}
		var_339_bool = var_35_string == (int)8949;
		if(var_339_bool != 0) {
			var_340_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8126);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8686, (int)-1, (int)9524);
			return 0;
		}
		var_346_bool = var_35_string == (int)8948;
		if(var_346_bool != 0) {
			var_347_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8125);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8685, (int)-1, (int)9523);
			return 0;
		}
		var_353_bool = var_35_string == (int)8947;
		if(var_353_bool != 0) {
			var_354_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8124);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8684, (int)-1, (int)9522);
			return 0;
		}
		var_360_bool = var_35_string == (int)6180;
		if(var_360_bool != 0) {
			var_361_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5606);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5607, (int)6182, (int)6181);
			return 0;
		}
		var_367_bool = var_35_string == (int)6182;
		if(var_367_bool != 0) {
			var_368_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5608);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5609, (int)-1, (int)6183);
			@@@var_0_object:AddReply((int)5610, (int)-1, (int)6184);
			return 0;
		}
		var_377_bool = var_35_string == (int)6187;
		if(var_377_bool != 0) {
			var_378_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5612);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5613, (int)-1, (int)6188);
			return 0;
		}
		var_384_bool = var_35_string == (int)6901;
		if(var_384_bool != 0) {
			var_385_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6238);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6239, (int)-1, (int)6902);
			@@@var_0_object:AddReply((int)6240, (int)-1, (int)6903);
			@@@var_0_object:AddReply((int)6241, (int)-1, (int)6904);
			return 0;
		}
		var_397_bool = var_35_string == (int)6145;
		if(var_397_bool != 0) {
			var_398_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5576);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5577, (int)6147, (int)6146);
			@@@var_0_object:AddReply((int)5603, (int)6149, (int)6176);
			return 0;
		}
		var_407_bool = var_35_string == (int)6147;
		if(var_407_bool != 0) {
			var_408_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5578);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5579, (int)6149, (int)6148);
			@@@var_0_object:AddReply((int)5595, (int)6149, (int)6165);
			@@@var_0_object:AddReply((int)5596, (int)6168, (int)6167);
			return 0;
		}
		var_420_bool = var_35_string == (int)6168;
		if(var_420_bool != 0) {
			var_421_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5597);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5598, (int)6151, (int)6169);
			@@@var_0_object:AddReply((int)5599, (int)6172, (int)6171);
			return 0;
		}
		var_430_bool = var_35_string == (int)6172;
		if(var_430_bool != 0) {
			var_431_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5600);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5601, (int)-1, (int)6173);
			@@@var_0_object:AddReply((int)5602, (int)6151, (int)6174);
			return 0;
		}
		var_440_bool = var_35_string == (int)6149;
		if(var_440_bool != 0) {
			var_441_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5580);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5581, (int)6151, (int)6150);
			@@@var_0_object:AddReply((int)5591, (int)6161, (int)6160);
			return 0;
		}
		var_450_bool = var_35_string == (int)6161;
		if(var_450_bool != 0) {
			var_451_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5592);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5593, (int)6157, (int)6162);
			@@@var_0_object:AddReply((int)5594, (int)-1, (int)6164);
			return 0;
		}
		var_460_bool = var_35_string == (int)6151;
		if(var_460_bool != 0) {
			var_461_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5582);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5583, (int)6153, (int)6152);
			@@@var_0_object:AddReply((int)5587, (int)6157, (int)6156);
			return 0;
		}
		var_470_bool = var_35_string == (int)6157;
		if(var_470_bool != 0) {
			var_471_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5588);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5589, (int)-1, (int)6158);
			@@@var_0_object:AddReply((int)5590, (int)-1, (int)6159);
			return 0;
		}
		var_480_bool = var_35_string == (int)6153;
		if(var_480_bool != 0) {
			var_481_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5584);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5585, (int)-1, (int)6154);
			@@@var_0_object:AddReply((int)5586, (int)-1, (int)6155);
			return 0;
		}
		var_490_bool = var_35_string == (int)6140;
		if(var_490_bool != 0) {
			var_491_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5572);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5573, (int)6099, (int)6141);
			return 0;
		}
		var_497_bool = var_35_string == (int)6099;
		if(var_497_bool != 0) {
			var_498_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5535);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5536, (int)6101, (int)6100);
			return 0;
		}
		var_504_bool = var_35_string == (int)6101;
		if(var_504_bool != 0) {
			var_505_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5537);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5538, (int)6103, (int)6102);
			@@@var_0_object:AddReply((int)5565, (int)6132, (int)6131);
			return 0;
		}
		var_514_bool = var_35_string == (int)6132;
		if(var_514_bool != 0) {
			var_515_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5566);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5567, (int)6103, (int)6133);
			@@@var_0_object:AddReply((int)5568, (int)6136, (int)6135);
			return 0;
		}
		var_524_bool = var_35_string == (int)6136;
		if(var_524_bool != 0) {
			var_525_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5569);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5570, (int)6103, (int)6137);
			return 0;
		}
		var_531_bool = var_35_string == (int)6103;
		if(var_531_bool != 0) {
			var_532_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5539);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5540, (int)6105, (int)6104);
			return 0;
		}
		var_538_bool = var_35_string == (int)6105;
		if(var_538_bool != 0) {
			var_539_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5541);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5542, (int)6107, (int)6106);
			@@@var_0_object:AddReply((int)5551, (int)6117, (int)6116);
			return 0;
		}
		var_548_bool = var_35_string == (int)6117;
		if(var_548_bool != 0) {
			var_549_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5552);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5553, (int)6119, (int)6118);
			@@@var_0_object:AddReply((int)5564, (int)6111, (int)6129);
			return 0;
		}
		var_558_bool = var_35_string == (int)6119;
		if(var_558_bool != 0) {
			var_559_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5554);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5555, (int)6121, (int)6120);
			@@@var_0_object:AddReply((int)5559, (int)-1, (int)6124);
			@@@var_0_object:AddReply((int)5560, (int)6126, (int)6125);
			return 0;
		}
		var_571_bool = var_35_string == (int)6126;
		if(var_571_bool != 0) {
			var_572_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5561);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5562, (int)-1, (int)6127);
			@@@var_0_object:AddReply((int)5563, (int)-1, (int)6128);
			return 0;
		}
		var_581_bool = var_35_string == (int)6121;
		if(var_581_bool != 0) {
			var_582_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5556);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5557, (int)-1, (int)6122);
			@@@var_0_object:AddReply((int)5558, (int)-1, (int)6123);
			return 0;
		}
		var_591_bool = var_35_string == (int)6107;
		if(var_591_bool != 0) {
			var_592_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5543);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5544, (int)6109, (int)6108);
			@@@var_0_object:AddReply((int)5550, (int)6111, (int)6114);
			return 0;
		}
		var_601_bool = var_35_string == (int)6109;
		if(var_601_bool != 0) {
			var_602_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5545);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5546, (int)6111, (int)6110);
			return 0;
		}
		var_608_bool = var_35_string == (int)6111;
		if(var_608_bool != 0) {
			var_609_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5547);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5548, (int)-1, (int)6112);
			@@@var_0_object:AddReply((int)5549, (int)-1, (int)6113);
			return 0;
		}
		var_618_bool = var_35_string == (int)6926;
		if(var_618_bool != 0) {
			var_619_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6260);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6261, (int)6924, (int)6927);
			return 0;
		}
		var_625_bool = var_35_string == (int)6921;
		if(var_625_bool != 0) {
			var_626_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6255);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6256, (int)-1, (int)6922);
			@@@var_0_object:AddReply((int)6257, (int)6924, (int)6923);
			return 0;
		}
		var_635_bool = var_35_string == (int)6924;
		if(var_635_bool != 0) {
			var_636_string = "";
			func_1137(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6258);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6262, (int)-1, (int)6929);
			return 0;
		}
		var_3_string = true;
		var_641_bool = 0;
		func_4808(var_641_bool);
		if(var_641_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x482";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_4753();
		var_40_bool = var_36_bool == (int)15761;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_4946();
			var_100_object = Obj(); var_101_object = Obj();
			var_100_object = var_1_object;
			var_101_object = var_0_object;
			func_4955(var_101_object);
		}
		var_104_bool = var_36_bool == (int)15762;
		if(var_104_bool != 0) {
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_4946();
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_4955(var_108_object);
		}
		var_110_bool = var_36_bool == (int)8183;
		if(var_110_bool != 0) {
			var_111_object = Obj(); var_112_object = Obj();
			var_111_object = var_1_object;
			var_112_object = var_0_object;
			func_4851();
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_object;
			func_4863();
		}
		var_161_bool = var_36_bool == (int)8187;
		if(var_161_bool != 0) {
			var_162_object = Obj(); var_163_object = Obj();
			var_162_object = var_1_object;
			var_163_object = var_0_object;
			func_4851();
		}
		var_165_bool = var_36_bool == (int)8171;
		if(var_165_bool != 0) {
			var_166_object = Obj(); var_167_object = Obj();
			var_166_object = var_1_object;
			var_167_object = var_0_object;
			func_4857();
			var_170_object = Obj(); var_171_object = Obj();
			var_170_object = var_1_object;
			var_171_object = var_0_object;
			func_4886();
			var_174_object = Obj(); var_175_object = Obj();
			var_174_object = var_1_object;
			var_175_object = var_0_object;
			func_4845();
			var_178_object = Obj(); var_179_object = Obj();
			var_178_object = var_1_object;
			var_179_object = var_0_object;
			func_4834(var_179_object);
		}
		var_188_bool = var_36_bool == (int)8170;
		if(var_188_bool != 0) {
			var_189_object = Obj(); var_190_object = Obj();
			var_189_object = var_1_object;
			var_190_object = var_0_object;
			func_4857();
			var_191_object = Obj(); var_192_object = Obj();
			var_191_object = var_1_object;
			var_192_object = var_0_object;
			func_4845();
			var_193_object = Obj(); var_194_object = Obj();
			var_193_object = var_1_object;
			var_194_object = var_0_object;
			func_4834(var_194_object);
		}
		var_196_bool = var_35_string == (int)15758;
		if(var_196_bool != 0) {
			var_197_bool = 0; var_198_object = Obj();
			var_198_object = var_1_object;
			func_5276(var_198_object);
			if(var_197_bool != 0) {
				var_205_object = Obj(); var_206_object = Obj();
				var_205_object = var_1_object;
				var_206_object = var_0_object;
				func_4940();
				var_209_string = "";
				func_2578(var_36_bool, "Neutral");
				@@@var_0_object:SetMessage((int)14519);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)14520, (int)15760, (int)15759);
				return 0;
			}
			var_228_string = "";
			func_2578(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6887);
			@@@var_0_object:ClearReplies();
			var_230_bool = 0;
			var_230_bool = 0;
			var_231_bool = 0; var_232_object = Obj();
			var_232_object = var_1_object;
			func_5062(var_232_object);
			if(var_231_bool != 0) {
				var_237_bool = 0; var_238_object = Obj();
				var_238_object = var_1_object;
				func_5086(var_238_object);
				if(var_237_bool != 0) {
					var_230_bool = 1;
				}
			}
			if(var_230_bool != 0) {
				@@@var_0_object:AddReply((int)6888, (int)7595, (int)7594);
			}
			var_246_bool = 0;
			var_246_bool = 0;
			var_247_bool = 0; var_248_object = Obj();
			var_248_object = var_1_object;
			func_5074(var_248_object);
			if(var_247_bool != 0) {
				var_253_bool = 0; var_254_object = Obj();
				var_254_object = var_1_object;
				func_5120(var_254_object);
				if(var_253_bool != 0) {
					var_246_bool = 1;
				}
			}
			if(var_246_bool != 0) {
				@@@var_0_object:AddReply((int)6918, (int)7625, (int)7624);
			}
			@@@var_0_object:AddReply((int)7400, (int)-1, (int)8166);
			return 0;
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=0";
		EMIT "Call 0xa12";
		EMIT "Pop(1)";
		EMIT "Push((int) 9351)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
		EMIT "Pop(0)";
		EMIT "Push((int) 9352)";
		EMIT "Push((int) 10275)";
		EMIT "Push((int) 10274)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Push((int) 9361)";
		EMIT "Push((int) 10275)";
		EMIT "Push((int) 10284)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Return(); Pop(0)";
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=0";
		EMIT "Call 0xa12";
		EMIT "Pop(1)";
		EMIT "Push((int) 9362)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
		EMIT "Pop(0)";
		EMIT "Push((int) 9363)";
		EMIT "Push((int) 10288)";
		EMIT "Push((int) 10287)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Push((int) 9371)";
		EMIT "Push((int) 10296)";
		EMIT "Push((int) 10295)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Return(); Pop(0)";
		}
		var_266_bool = var_35_string == (int)10296;
		if(var_266_bool != 0) {
			var_267_string = "";
			func_2578(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9372);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9373, (int)10298, (int)10297);
			@@@var_0_object:AddReply((int)9376, (int)10288, (int)10300);
			return 0;
		}
		var_276_bool = var_35_string == (int)10298;
		if(var_276_bool != 0) {
			var_277_string = "";
			func_2578(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9374);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9375, (int)-1, (int)10299);
			return 0;
		}
		var_283_bool = var_35_string == (int)10288;
		if(var_283_bool != 0) {
			var_284_string = "";
			func_2578(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9364);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9365, (int)10290, (int)10289);
			@@@var_0_object:AddReply((int)9368, (int)10293, (int)10292);
			return 0;
		}
		var_293_bool = var_35_string == (int)10293;
		if(var_293_bool != 0) {
			var_294_string = "";
			func_2578(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9369);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9370, (int)-1, (int)10294);
			return 0;
		}
		var_300_bool = var_35_string == (int)10290;
		if(var_300_bool != 0) {
			var_301_string = "";
			func_2578(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9366);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9367, (int)-1, (int)10291);
			return 0;
		}
		var_307_bool = var_35_string == (int)10275;
		if(var_307_bool != 0) {
			var_308_string = "";
			func_2578(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9353);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9354, (int)10277, (int)10276);
			@@@var_0_object:AddReply((int)9359, (int)10277, (int)10281);
			@@@var_0_object:AddReply((int)9360, (int)-1, (int)10283);
			return 0;
		}
		var_320_bool = var_35_string == (int)10277;
		if(var_320_bool != 0) {
			var_321_string = "";
			func_2578(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9355);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9356, (int)-1, (int)10278);
			@@@var_0_object:AddReply((int)9357, (int)-1, (int)10279);
			@@@var_0_object:AddReply((int)9358, (int)-1, (int)10280);
			return 0;
		}
		var_333_bool = var_35_string == (int)7625;
		if(var_333_bool != 0) {
			var_334_string = "";
			func_2578(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6919);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7401, (int)8168, (int)8167);
			return 0;
		}
		var_340_bool = var_35_string == (int)8168;
		if(var_340_bool != 0) {
			var_341_string = "";
			func_2578(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7402);
			@@@var_0_object:ClearReplies();
			var_343_bool = 0; var_344_object = Obj();
			var_344_object = var_1_object;
			func_5108(var_344_object);
			if(var_343_bool != 0) {
				@@@var_0_object:AddReply((int)6920, (int)7628, (int)7626);
			}
			@@@var_0_object:AddReply((int)6921, (int)8169, (int)7627);
			return 0;
		}
		var_356_bool = var_35_string == (int)8169;
		if(var_356_bool != 0) {
			var_357_string = "";
			func_2578(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7403);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7404, (int)-1, (int)8170);
			return 0;
		}
		var_363_bool = var_35_string == (int)7628;
		if(var_363_bool != 0) {
			var_364_string = "";
			func_2578(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6922);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7405, (int)-1, (int)8171);
			return 0;
		}
		var_370_bool = var_35_string == (int)7595;
		if(var_370_bool != 0) {
			var_371_string = "";
			func_2578(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6889);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7406, (int)8174, (int)8172);
			@@@var_0_object:AddReply((int)6890, (int)7597, (int)7596);
			return 0;
		}
		var_380_bool = var_35_string == (int)7597;
		if(var_380_bool != 0) {
			var_381_string = "";
			func_2578(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6891);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7407, (int)8184, (int)8173);
			@@@var_0_object:AddReply((int)7417, (int)8184, (int)8185);
			return 0;
		}
		var_390_bool = var_35_string == (int)8184;
		if(var_390_bool != 0) {
			var_391_string = "";
			func_2578(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7416);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7418, (int)-1, (int)8187);
			return 0;
		}
		var_397_bool = var_35_string == (int)8174;
		if(var_397_bool != 0) {
			var_398_string = "";
			func_2578(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7408);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7409, (int)8178, (int)8175);
			@@@var_0_object:AddReply((int)7410, (int)8178, (int)8176);
			@@@var_0_object:AddReply((int)7411, (int)8178, (int)8177);
			return 0;
		}
		var_410_bool = var_35_string == (int)8178;
		if(var_410_bool != 0) {
			var_411_string = "";
			func_2578(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7412);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7413, (int)8182, (int)8181);
			return 0;
		}
		var_417_bool = var_35_string == (int)8182;
		if(var_417_bool != 0) {
			var_418_string = "";
			func_2578(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7414);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7415, (int)-1, (int)8183);
			return 0;
		}
		var_424_bool = var_35_string == (int)15760;
		if(var_424_bool != 0) {
			var_425_string = "";
			func_2578(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14521);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14522, (int)-1, (int)15761);
			@@@var_0_object:AddReply((int)14523, (int)-1, (int)15762);
			return 0;
		}
		var_3_string = true;
		var_433_bool = 0;
		func_4808(var_433_bool);
		if(var_433_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa23";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_4753();
		var_40_bool = var_35_string == (int)13469;
		if(var_40_bool != 0) {
			var_41_bool = 0; var_42_object = Obj();
			var_42_object = var_1_object;
			func_5180(var_42_object);
			if(var_41_bool != 0) {
				var_49_object = Obj(); var_50_object = Obj();
				var_49_object = var_1_object;
				var_50_object = var_0_object;
				func_4910();
				var_53_string = "";
				func_3357(var_36_bool, "Neutral");
				@@@var_0_object:SetMessage((int)12310);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)12311, (int)13471, (int)13470);
				@@@var_0_object:AddReply((int)12313, (int)13473, (int)13472);
				return 0;
			}
			var_75_string = "";
			func_3357(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13777);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13778, (int)-1, (int)15014);
			return 0;
		}
		var_81_bool = var_35_string == (int)13473;
		if(var_81_bool != 0) {
			var_82_string = "";
			func_3357(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12314);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12315, (int)13475, (int)13474);
			return 0;
		}
		var_88_bool = var_35_string == (int)13475;
		if(var_88_bool != 0) {
			var_89_string = "";
			func_3357(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12316);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12317, (int)13477, (int)13476);
			return 0;
		}
		var_95_bool = var_35_string == (int)13477;
		if(var_95_bool != 0) {
			var_96_string = "";
			func_3357(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12318);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12319, (int)13482, (int)13478);
			return 0;
		}
		var_102_bool = var_35_string == (int)13482;
		if(var_102_bool != 0) {
			var_103_string = "";
			func_3357(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12323);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12324, (int)13484, (int)13483);
			return 0;
		}
		var_109_bool = var_35_string == (int)13484;
		if(var_109_bool != 0) {
			var_110_string = "";
			func_3357(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12325);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12326, (int)13486, (int)13485);
			return 0;
		}
		var_116_bool = var_35_string == (int)13486;
		if(var_116_bool != 0) {
			var_117_string = "";
			func_3357(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12327);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12328, (int)-1, (int)13487);
			return 0;
		}
		var_123_bool = var_35_string == (int)13471;
		if(var_123_bool != 0) {
			var_124_string = "";
			func_3357(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12312);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12320, (int)13480, (int)13479);
			return 0;
		}
		var_130_bool = var_35_string == (int)13480;
		if(var_130_bool != 0) {
			var_131_string = "";
			func_3357(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12321);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12322, (int)-1, (int)13481);
			return 0;
		}
		var_3_string = true;
		var_136_bool = 0;
		func_4808(var_136_bool);
		if(var_136_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xd2e";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_4753();
		var_40_bool = var_36_bool == (int)14178;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_4996();
		}
		var_46_bool = var_35_string == (int)14094;
		if(var_46_bool != 0) {
			var_47_bool = 0;
			var_47_bool = 0;
			var_48_bool = 0;
			var_48_bool = 0;
			var_49_bool = 0; var_50_object = Obj();
			var_50_object = var_1_object;
			func_5372(var_50_object);
			if(var_49_bool != 0) {
				var_57_bool = 0; var_58_object = Obj();
				var_58_object = var_1_object;
				func_5360(var_58_object);
				var_63_bool = var_57_bool == 0; //@nz
				if(var_63_bool != 0) {
					var_48_bool = 1;
				}
			}
			if(var_48_bool != 0) {
				var_64_bool = 0; var_65_object = Obj();
				var_65_object = var_1_object;
				func_5348(var_65_object);
				var_70_bool = var_64_bool == 0; //@nz
				if(var_70_bool != 0) {
					var_47_bool = 1;
				}
			}
			if(var_47_bool != 0) {
				var_71_object = Obj(); var_72_object = Obj();
				var_71_object = var_1_object;
				var_72_object = var_0_object;
				func_4990();
				var_75_string = "";
				func_3750(var_36_bool, "Neutral");
				@@@var_0_object:SetMessage((int)12892);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)12893, (int)14096, (int)14095);
				@@@var_0_object:AddReply((int)12969, (int)14175, (int)14174);
				return 0;
			}
			var_97_string = "";
			func_3750(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12974);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12975, (int)-1, (int)14180);
			return 0;
		}
		var_103_bool = var_35_string == (int)14175;
		if(var_103_bool != 0) {
			var_104_string = "";
			func_3750(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12970);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12971, (int)14177, (int)14176);
			return 0;
		}
		var_110_bool = var_35_string == (int)14177;
		if(var_110_bool != 0) {
			var_111_string = "";
			func_3750(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12972);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12973, (int)-1, (int)14178);
			return 0;
		}
		var_117_bool = var_35_string == (int)14096;
		if(var_117_bool != 0) {
			var_118_string = "";
			func_3750(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12894);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12895, (int)14098, (int)14097);
			return 0;
		}
		var_124_bool = var_35_string == (int)14098;
		if(var_124_bool != 0) {
			var_125_string = "";
			func_3750(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12896);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12897, (int)14175, (int)14099);
			return 0;
		}
		var_3_string = true;
		var_130_bool = 0;
		func_4808(var_130_bool);
		if(var_130_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xeb7";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int)
{
	if((int)1 != 0) {
		func_4753();
		var_40_bool = var_36_int == (int)15601;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_4928();
		}
		var_46_bool = var_36_int == (int)15625;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_4934();
		}
		var_52_bool = var_35_int == (int)15592;
		if(var_52_bool != 0) {
			var_53_bool = 0;
			var_53_bool = 0;
			var_54_bool = 0; var_55_object = Obj();
			var_55_object = var_1_object;
			func_5204(var_55_object);
			if(var_54_bool != 0) {
				var_62_bool = 0; var_63_object = Obj();
				var_63_object = var_1_object;
				func_5216(var_63_object);
				if(var_62_bool != 0) {
					var_53_bool = 1;
				}
			}
			if(var_53_bool != 0) {
				var_68_object = Obj(); var_69_object = Obj();
				var_68_object = var_1_object;
				var_69_object = var_0_object;
				func_4922();
				var_72_string = "";
				func_4127(var_36_int, "Neutral");
				@@@var_0_object:SetMessage((int)14369);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)14370, (int)15594, (int)15593);
				@@@var_0_object:AddReply((int)14376, (int)-1, (int)15599);
				return 0;
			}
			var_94_string = "";
			func_4127(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14377);
			@@@var_0_object:ClearReplies();
			var_96_bool = 0;
			var_96_bool = 0;
			var_97_bool = 0;
			var_97_bool = 0;
			var_98_bool = 0; var_99_object = Obj();
			var_99_object = var_1_object;
			func_5216(var_99_object);
			var_100_bool = var_98_bool == 0; //@nz
			if(var_100_bool != 0) {
				var_101_bool = 0; var_102_object = Obj();
				var_102_object = var_1_object;
				func_5228(var_102_object);
				if(var_101_bool != 0) {
					var_97_bool = 1;
				}
			}
			if(var_97_bool != 0) {
				var_107_bool = 0; var_108_object = Obj();
				var_108_object = var_1_object;
				func_5240(var_108_object);
				if(var_107_bool != 0) {
					var_96_bool = 1;
				}
			}
			if(var_96_bool != 0) {
				@@@var_0_object:AddReply((int)14378, (int)15602, (int)15601);
			}
			var_116_bool = 0; var_117_object = Obj();
			var_117_object = var_1_object;
			func_5264(var_117_object);
			if(var_116_bool != 0) {
				@@@var_0_object:AddReply((int)14400, (int)15626, (int)15625);
			}
			@@@var_0_object:AddReply((int)14419, (int)-1, (int)15644);
			return 0;
		}
		var_129_bool = var_35_int == (int)15626;
		if(var_129_bool != 0) {
			var_130_string = "";
			func_4127(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14401);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14402, (int)15628, (int)15627);
			return 0;
		}
		var_136_bool = var_35_int == (int)15628;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_4127(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14403);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14404, (int)15630, (int)15629);
			return 0;
		}
		var_143_bool = var_35_int == (int)15630;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_4127(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14405);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14406, (int)15632, (int)15631);
			return 0;
		}
		var_150_bool = var_35_int == (int)15632;
		if(var_150_bool != 0) {
			var_151_string = "";
			func_4127(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14407);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14408, (int)15634, (int)15633);
			return 0;
		}
		var_157_bool = var_35_int == (int)15634;
		if(var_157_bool != 0) {
			var_158_string = "";
			func_4127(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14409);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14410, (int)15636, (int)15635);
			return 0;
		}
		var_164_bool = var_35_int == (int)15636;
		if(var_164_bool != 0) {
			var_165_string = "";
			func_4127(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14411);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14412, (int)15638, (int)15637);
			return 0;
		}
		var_171_bool = var_35_int == (int)15638;
		if(var_171_bool != 0) {
			var_172_string = "";
			func_4127(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14413);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14414, (int)15640, (int)15639);
			return 0;
		}
		var_178_bool = var_35_int == (int)15640;
		if(var_178_bool != 0) {
			var_179_string = "";
			func_4127(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14415);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14416, (int)-1, (int)15641);
			@@@var_0_object:AddReply((int)14417, (int)-1, (int)15642);
			@@@var_0_object:AddReply((int)14418, (int)-1, (int)15643);
			return 0;
		}
		var_191_bool = var_35_int == (int)15602;
		if(var_191_bool != 0) {
			var_192_string = "";
			func_4127(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14379);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14380, (int)15604, (int)15603);
			@@@var_0_object:AddReply((int)14399, (int)15604, (int)15623);
			return 0;
		}
		var_201_bool = var_35_int == (int)15604;
		if(var_201_bool != 0) {
			var_202_string = "";
			func_4127(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14381);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14382, (int)15606, (int)15605);
			return 0;
		}
		var_208_bool = var_35_int == (int)15606;
		if(var_208_bool != 0) {
			var_209_string = "";
			func_4127(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14383);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14384, (int)15608, (int)15607);
			return 0;
		}
		var_215_bool = var_35_int == (int)15608;
		if(var_215_bool != 0) {
			var_216_string = "";
			func_4127(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14385);
			@@@var_0_object:ClearReplies();
			var_218_bool = 0; var_219_object = Obj();
			var_219_object = var_1_object;
			func_5252(var_219_object);
			if(var_218_bool != 0) {
				@@@var_0_object:AddReply((int)14386, (int)15610, (int)15609);
			}
			@@@var_0_object:AddReply((int)14398, (int)-1, (int)15622);
			return 0;
		}
		var_231_bool = var_35_int == (int)15610;
		if(var_231_bool != 0) {
			var_232_string = "";
			func_4127(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14387);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14388, (int)15612, (int)15611);
			return 0;
		}
		var_238_bool = var_35_int == (int)15612;
		if(var_238_bool != 0) {
			var_239_string = "";
			func_4127(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14389);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14390, (int)15614, (int)15613);
			return 0;
		}
		var_245_bool = var_35_int == (int)15614;
		if(var_245_bool != 0) {
			var_246_string = "";
			func_4127(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14391);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14392, (int)15616, (int)15615);
			@@@var_0_object:AddReply((int)14397, (int)15616, (int)15620);
			return 0;
		}
		var_255_bool = var_35_int == (int)15616;
		if(var_255_bool != 0) {
			var_256_string = "";
			func_4127(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14393);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14394, (int)15618, (int)15617);
			return 0;
		}
		var_262_bool = var_35_int == (int)15618;
		if(var_262_bool != 0) {
			var_263_string = "";
			func_4127(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14395);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14396, (int)-1, (int)15619);
			return 0;
		}
		var_269_bool = var_35_int == (int)15594;
		if(var_269_bool != 0) {
			var_270_string = "";
			func_4127(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14371);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14372, (int)15596, (int)15595);
			return 0;
		}
		var_276_bool = var_35_int == (int)15596;
		if(var_276_bool != 0) {
			var_277_string = "";
			func_4127(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)14373);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14374, (int)-1, (int)15597);
			@@@var_0_object:AddReply((int)14375, (int)-1, (int)15598);
			return 0;
		}
		var_3_string = true;
		var_285_bool = 0;
		func_4808(var_285_bool);
		if(var_285_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1030";
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool)
{
	func_5630();
	var_36_bool = 0;
	func_4670(var_36_bool);
	var_39_bool = var_36_bool == 0; //@nz
	if(var_39_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
Label_19:
	var_40_string = "";
	func_4735("Neutral");
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


func_5120(var_253_bool)
{
	var_255_int = 0; var_256_string = "";
	func_4770(var_255_int, "d2q03");
	var_258_bool = var_255_int == (int)1;
	if(var_258_bool != 0) {
		var_253_bool = 1;
		return 0;
	}
	var_253_bool = 0;
	return 0;
}


func_5634(var_36_object, var_365_object)
{
	var_37_bool = GlobalVars[1];
	var_38_bool = var_37_bool == 0; //@nz
	if(var_38_bool != 0) {
		var_39_int = 0; var_40_object = Obj();
		var_36_object = var_40_object;
		TaskCall(2);
		func_49(var_41_object, var_39_int, var_40_object);
		TaskReturn();
		var_151_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_152_bool = 0; var_153_int = 0;
	func_4789(var_152_bool, (int)1);
	if(var_152_bool != 0) {
		var_160_int = 0; var_161_object = Obj();
		var_36_object = var_161_object;
		TaskCall(6);
		func_786(var_162_object, var_160_int, var_161_object);
		TaskReturn();
		return 0;
	}
	var_360_bool = 0; var_361_int = 0;
	func_4789(var_360_bool, (int)2);
	if(var_360_bool != 0) {
		var_363_int = 0; var_364_object = Obj();
		var_36_object = var_364_object;
		TaskCall(8);
		func_2359(var_365_object, var_363_int, var_364_object);
		TaskReturn();
		var_454_bool = (int)2000 == var_365_object;
		if(var_454_bool != 0) {
			ShowWindow("people.xml", (bool)1);
		}
		return 0;
	}
	var_457_bool = 0; var_458_int = 0;
	func_4789(var_457_bool, (int)6);
	if(var_457_bool != 0) {
		var_459_int = 0; var_460_object = Obj();
		var_36_object = var_460_object;
		TaskCall(4);
		func_345(var_461_object, var_459_int, var_460_object);
		TaskReturn();
		return 0;
	}
	var_543_bool = 0; var_544_int = 0;
	func_4789(var_543_bool, (int)8);
	if(var_543_bool != 0) {
		var_545_int = 0; var_546_object = Obj();
		var_36_object = var_546_object;
		TaskCall(10);
		func_3211(var_547_object, var_545_int, var_546_object);
		TaskReturn();
		return 0;
	}
	var_607_bool = 0; var_608_int = 0;
	func_4789(var_607_bool, (int)10);
	if(var_607_bool != 0) {
		var_609_int = 0; var_610_object = Obj();
		var_36_object = var_610_object;
		TaskCall(12);
		func_3584(var_611_object, var_609_int, var_610_object);
		TaskReturn();
		return 0;
	}
	var_687_bool = 0; var_688_int = 0;
	func_4789(var_687_bool, (int)11);
	if(var_687_bool != 0) {
		var_689_int = 0; var_690_object = Obj();
		var_36_object = var_690_object;
		TaskCall(14);
		func_3933(var_691_object, var_689_int, var_690_object);
		TaskReturn();
		return 0;
	}
	func_4795((bool)0);
	return 0;
}


func_3584(var_0_object, var_609_int, var_610_object)
{
	var_612_object = Obj(); var_613_bool = 0; var_614_int = 0; var_615_bool = 0; var_616_object = Obj(); var_617_bool = 0; var_618_int = 0; var_619_bool = 0;
	var_0_object = var_610_object;
	var_620_bool = 0; var_621_object = Obj();
	var_610_object = var_621_object;
	func_4675(var_620_bool, var_621_object);
	var_622_bool = var_620_bool == 0; //@nz
	if(var_622_bool != 0) {
		var_609_int = -2;
		return 8;
	}
	CreateDialog(var_616_object);
	var_623_int = 0;
	func_4804(var_623_int);
	@@var_616_object:SetNPCName(var_623_int);
	var_624_string = "";
	func_4806(var_624_string);
	@@var_616_object:SetPhoto(var_624_string);
	var_625_int = 0;
	func_5470(var_625_int);
	@@var_616_object:SetPlayerName(var_625_int);
	IsOverrideActive(var_617_bool);
	var_626_bool = var_617_bool;
	if(var_626_bool != 0) {
		var_609_int = -2;
		return 8;
	}
	DoDialog(var_616_object);
	var_627_object = Obj(); var_628_object = Obj();
	var_610_object = var_627_object;
	var_616_object = var_628_object;
	TaskCall(13);
	func_3647(var_629_object, var_630_object, var_631_string, var_632_bool, var_627_object, var_628_object);
	TaskReturn();
	@@var_616_object:IsDialogEnd(var_619_bool);
	
Label_3629:
	var_685_bool = var_619_bool == 0; //@nz
	if(var_685_bool != 0) {
		sync();
		@@var_616_object:IsDialogEnd(var_619_bool);
		goto Label_3629;
	}
	var_610_object = Obj();
	func_4731();
	StopDialog(var_616_object);
	@@var_616_object:GetReturnValue((int)-1);
	var_618_int = var_609_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_520(var_2_object, var_70_string)
{
	var_71_bool = 0;
	func_4808(var_71_bool);
	var_72_bool = var_71_bool == 0; //@nz
	if(var_72_bool != 0) {
		return 0;
	}
	var_73_bool = var_70_string == var_2_object;
	if(var_73_bool != 0) {
		return 0;
	}
	var_74_string = "";
	var_70_string = var_74_string;
	func_4735(var_74_string);
	var_2_object = var_70_string;
	return 0;
}


func_5384(var_306_bool)
{
	var_308_int = 0; var_309_string = "";
	func_4770(var_308_int, "KnowKapella");
	var_311_bool = var_308_int == (int)1;
	if(var_311_bool != 0) {
		var_306_bool = 1;
		return 0;
	}
	var_306_bool = 0;
	return 0;
}


func_5132(var_274_bool)
{
	var_276_int = 0; var_277_string = "";
	func_4770(var_276_int, "KnowMark");
	var_279_bool = var_276_int == (int)1;
	if(var_279_bool != 0) {
		var_274_bool = 1;
		return 0;
	}
	var_274_bool = 0;
	return 0;
}


func_2578(var_2_object, var_209_string)
{
	var_210_bool = 0;
	func_4808(var_210_bool);
	var_211_bool = var_210_bool == 0; //@nz
	if(var_211_bool != 0) {
		return 0;
	}
	var_212_bool = var_209_string == var_2_object;
	if(var_212_bool != 0) {
		return 0;
	}
	var_213_string = "";
	var_209_string = var_213_string;
	func_4735(var_213_string);
	var_2_object = var_209_string;
	return 0;
}


func_786(var_0_object, var_160_int, var_161_object)
{
	var_163_object = Obj(); var_164_bool = 0; var_165_int = 0; var_166_bool = 0; var_167_object = Obj(); var_168_bool = 0; var_169_int = 0; var_170_bool = 0;
	var_0_object = var_161_object;
	var_171_bool = 0; var_172_object = Obj();
	var_161_object = var_172_object;
	func_4675(var_171_bool, var_172_object);
	var_173_bool = var_171_bool == 0; //@nz
	if(var_173_bool != 0) {
		var_160_int = -2;
		return 8;
	}
	CreateDialog(var_167_object);
	var_174_int = 0;
	func_4804(var_174_int);
	@@var_167_object:SetNPCName(var_174_int);
	var_175_string = "";
	func_4806(var_175_string);
	@@var_167_object:SetPhoto(var_175_string);
	var_176_int = 0;
	func_5470(var_176_int);
	@@var_167_object:SetPlayerName(var_176_int);
	IsOverrideActive(var_168_bool);
	var_177_bool = var_168_bool;
	if(var_177_bool != 0) {
		var_160_int = -2;
		return 8;
	}
	DoDialog(var_167_object);
	var_178_object = Obj(); var_179_object = Obj();
	var_161_object = var_178_object;
	var_167_object = var_179_object;
	TaskCall(7);
	func_849(var_180_object, var_181_object, var_182_string, var_183_bool, var_178_object, var_179_object);
	TaskReturn();
	@@var_167_object:IsDialogEnd(var_170_bool);
	
Label_831:
	var_358_bool = var_170_bool == 0; //@nz
	if(var_358_bool != 0) {
		sync();
		@@var_167_object:IsDialogEnd(var_170_bool);
		goto Label_831;
	}
	var_161_object = Obj();
	func_4731();
	StopDialog(var_167_object);
	@@var_167_object:GetReturnValue((int)-1);
	var_169_int = var_160_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5396(var_290_bool)
{
	var_292_int = 0; var_293_string = "";
	func_4770(var_292_int, "KnowStamatins");
	var_295_bool = var_292_int == (int)1;
	if(var_295_bool != 0) {
		var_290_bool = 1;
		return 0;
	}
	var_290_bool = 0;
	return 0;
}


func_4886()
{
	SetVariable("d2q03MariaGotoViktor", (int)1);
	return 0;
}


func_5144(var_48_bool)
{
	var_50_int = 0; var_51_string = "";
	func_4770(var_50_int, "d6q01");
	var_55_bool = var_50_int == (int)0;
	if(var_55_bool != 0) {
		var_48_bool = 1;
		return 0;
	}
	var_48_bool = 0;
	return 0;
}


func_4892()
{
	SetVariable("KnowViktor", (int)1);
	return 0;
}


func_3357(var_2_object, var_53_string)
{
	var_54_bool = 0;
	func_4808(var_54_bool);
	var_55_bool = var_54_bool == 0; //@nz
	if(var_55_bool != 0) {
		return 0;
	}
	var_56_bool = var_53_string == var_2_object;
	if(var_56_bool != 0) {
		return 0;
	}
	var_57_string = "";
	var_53_string = var_57_string;
	func_4735(var_57_string);
	var_2_object = var_53_string;
	return 0;
}


func_4127(var_2_object, var_72_string)
{
	var_73_bool = 0;
	func_4808(var_73_bool);
	var_74_bool = var_73_bool == 0; //@nz
	if(var_74_bool != 0) {
		return 0;
	}
	var_75_bool = var_72_string == var_2_object;
	if(var_75_bool != 0) {
		return 0;
	}
	var_76_string = "";
	var_72_string = var_76_string;
	func_4735(var_76_string);
	var_2_object = var_72_string;
	return 0;
}


func_5408(var_214_bool)
{
	var_214_bool = 0;
	return 0;
}


func_4898()
{
	SetVariable("ood6Maria1", (int)1);
	return 0;
}


func_5411(var_150_object)
{
	var_151_object = Obj(); var_152_object = Obj();
	GetDiaryRoot(var_152_object);
	var_153_bool = var_152_object == 0; //@nz
	if(var_153_bool != 0) {
		Trace("Can't retrieve diary root");
		var_150_object = 0;
		return 2;
	}
	var_152_object = var_150_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5156(var_56_bool)
{
	var_58_int = 0; var_59_string = "";
	func_4770(var_58_int, "ood6Maria1");
	var_61_bool = var_58_int == (int)0;
	if(var_61_bool != 0) {
		var_56_bool = 1;
		return 0;
	}
	var_56_bool = 0;
	return 0;
}


func_4904()
{
	SetVariable("ood6Maria2", (int)1);
	return 0;
}


func_4651(var_181_object, var_182_string, var_183_int)
{
	var_184_int = 0; var_185_int = 0;
	@@var_181_object:GetProperty(var_182_string, var_185_int);
	var_186_int = var_185_int + var_183_int;
	@@var_181_object:SetProperty(var_182_string, var_186_int);
	return 2;
}


func_4910()
{
	SetVariable("ood8Maria1", (int)1);
	return 0;
}


func_5168(var_96_bool)
{
	var_98_int = 0; var_99_string = "";
	func_4770(var_98_int, "ood6Maria2");
	var_101_bool = var_98_int == (int)0;
	if(var_101_bool != 0) {
		var_96_bool = 1;
		return 0;
	}
	var_96_bool = 0;
	return 0;
}


func_49(var_0_object, var_39_int, var_40_object)
{
	var_42_object = Obj(); var_43_bool = 0; var_44_int = 0; var_45_bool = 0; var_46_object = Obj(); var_47_bool = 0; var_48_int = 0; var_49_bool = 0;
	var_0_object = var_40_object;
	var_50_bool = 0; var_51_object = Obj();
	var_40_object = var_51_object;
	func_4675(var_50_bool, var_51_object);
	var_90_bool = var_50_bool == 0; //@nz
	if(var_90_bool != 0) {
		var_39_int = -2;
		return 8;
	}
	CreateDialog(var_46_object);
	var_91_int = 0;
	func_4804(var_91_int);
	@@var_46_object:SetNPCName(var_91_int);
	var_92_string = "";
	func_4806(var_92_string);
	@@var_46_object:SetPhoto(var_92_string);
	var_93_int = 0;
	func_5470(var_93_int);
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
	var_149_bool = var_49_bool == 0; //@nz
	if(var_149_bool != 0) {
		sync();
		@@var_46_object:IsDialogEnd(var_49_bool);
		goto Label_94;
	}
	var_40_object = Obj();
	func_4731();
	StopDialog(var_46_object);
	@@var_46_object:GetReturnValue((int)-1);
	var_48_int = var_39_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4658(var_36_bool, var_37_object)
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


func_5424(var_141_bool, var_142_object, var_143_int)
{
	var_144_object = Obj(); var_145_object = Obj(); var_146_int = 0; var_147_object = Obj(); var_148_object = Obj(); var_149_int = 0;
	func_5411(Obj());
	var_150_object = var_147_object;
	@@var_147_object:Find(var_143_int, var_148_object);
	var_155_bool = var_148_object == 0; //@nz
	if(var_155_bool != 0) {
		var_157_int = "Can't find diary parent with id: " + var_143_int;
		Trace(var_157_int);
		var_141_bool = 0;
		return 6;
	}
	@@var_148_object:AddChild(var_142_object);
	SetVariable("player_diary", (int)1);
	@@var_142_object:GetCategory(var_149_int);
	SetDiarySection(var_149_int);
	var_141_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_4916()
{
	SetVariable("KnowMaria", (int)1);
	return 0;
}


func_2359(var_0_object, var_363_int, var_364_object)
{
	var_366_object = Obj(); var_367_bool = 0; var_368_int = 0; var_369_bool = 0; var_370_object = Obj(); var_371_bool = 0; var_372_int = 0; var_373_bool = 0;
	var_0_object = var_364_object;
	var_374_bool = 0; var_375_object = Obj();
	var_364_object = var_375_object;
	func_4675(var_374_bool, var_375_object);
	var_376_bool = var_374_bool == 0; //@nz
	if(var_376_bool != 0) {
		var_363_int = -2;
		return 8;
	}
	CreateDialog(var_370_object);
	var_377_int = 0;
	func_4804(var_377_int);
	@@var_370_object:SetNPCName(var_377_int);
	var_378_string = "";
	func_4806(var_378_string);
	@@var_370_object:SetPhoto(var_378_string);
	var_379_int = 0;
	func_5470(var_379_int);
	@@var_370_object:SetPlayerName(var_379_int);
	IsOverrideActive(var_371_bool);
	var_380_bool = var_371_bool;
	if(var_380_bool != 0) {
		var_363_int = -2;
		return 8;
	}
	DoDialog(var_370_object);
	var_381_object = Obj(); var_382_object = Obj();
	var_364_object = var_381_object;
	var_370_object = var_382_object;
	TaskCall(9);
	func_2422(var_383_object, var_384_object, var_385_string, var_386_bool, var_381_object, var_382_object);
	TaskReturn();
	@@var_370_object:IsDialogEnd(var_373_bool);
	
Label_2404:
	var_452_bool = var_373_bool == 0; //@nz
	if(var_452_bool != 0) {
		sync();
		@@var_370_object:IsDialogEnd(var_373_bool);
		goto Label_2404;
	}
	var_364_object = Obj();
	func_4731();
	StopDialog(var_370_object);
	@@var_370_object:GetReturnValue((int)-1);
	var_372_int = var_363_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4922()
{
	SetVariable("ood11Maria1", (int)1);
	return 0;
}


func_5180(var_41_bool)
{
	var_43_int = 0; var_44_string = "";
	func_4770(var_43_int, "ood8Maria1");
	var_48_bool = var_43_int == (int)0;
	if(var_48_bool != 0) {
		var_41_bool = 1;
		return 0;
	}
	var_41_bool = 0;
	return 0;
}


func_4670(var_36_bool)
{
	var_37_bool = 0; var_38_bool = 0;
	IsLoaded(var_38_bool);
	var_38_bool = var_36_bool;
	return 2;
}


func_3647(var_0_object, var_1_object, var_2_object, var_3_object, var_627_object, var_628_object)
{
	var_0_object = var_628_object;
	var_1_object = var_627_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_634_bool = 0;
		var_634_bool = 0;
		var_635_bool = 0;
		var_635_bool = 0;
		var_636_bool = 0; var_637_object = Obj();
		var_637_object = var_1_object;
		func_5372(var_637_object);
		if(var_636_bool != 0) {
			var_642_bool = 0; var_643_object = Obj();
			var_643_object = var_1_object;
			func_5360(var_643_object);
			var_648_bool = var_642_bool == 0; //@nz
			if(var_648_bool != 0) {
				var_635_bool = 1;
			}
		}
		if(var_635_bool != 0) {
			var_649_bool = 0; var_650_object = Obj();
			var_650_object = var_1_object;
			func_5348(var_650_object);
			var_655_bool = var_649_bool == 0; //@nz
			if(var_655_bool != 0) {
				var_634_bool = 1;
			}
		}
		if(var_634_bool != 0) {
			var_656_object = Obj(); var_657_object = Obj();
			var_656_object = var_1_object;
			var_657_object = var_0_object;
			func_4990();
			var_660_string = "";
			func_3750(var_628_object, "Neutral");
			@@@var_0_object:SetMessage((int)12892);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12893, (int)14096, (int)14095);
			@@@var_0_object:AddReply((int)12969, (int)14175, (int)14174);
		} else {
				var_680_string = "";
				func_3750(var_628_object, "Neutral");
				@@@var_0_object:SetMessage((int)12974);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)12975, (int)-1, (int)14180);
				goto Label_3720;
		}
	}
Label_3720:
	var_672_bool = 0;
	func_4808(var_672_bool);
	if(var_672_bool != 0) {

	Label_3724:
		lshWaitForAnimEnd();
		var_673_object = var_3_object;
		if(var_673_object != 0) {
		} else {
			var_674_string = "";
			var_674_string = var_2_object;
			func_4735(var_674_string);
			goto Label_3724;
	}
		PlayAnimation("all", "idle");

	Label_3739:
		WaitForAnimEnd();
		var_677_object = var_3_object;
		if(var_677_object != 0) {
			goto Label_3749;
		}
		PlayAnimation("all", "idle");
		goto Label_3739;

	}
	goto Label_3749;
	
Label_3749:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xe43";


func_4928()
{
	SetVariable("ood11Maria2", (int)1);
	return 0;
}


func_4675(var_50_bool, var_51_object)
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
	func_4760(var_75_cvector, var_76_cvector);
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


func_4934()
{
	SetVariable("ood11Maria3", (int)1);
	return 0;
}


func_5192(var_258_bool)
{
	var_260_int = 0; var_261_string = "";
	func_4770(var_260_int, "KnowGeorg");
	var_263_bool = var_260_int == (int)1;
	if(var_263_bool != 0) {
		var_258_bool = 1;
		return 0;
	}
	var_258_bool = 0;
	return 0;
}


func_4940()
{
	SetVariable("ood2Maria3", (int)1);
	return 0;
}


func_5453(var_121_object)
{
	var_122_object = Obj(); var_123_object = Obj(); var_124_object = Obj(); var_125_object = Obj();
	GetMainOutdoorScene(var_124_object);
	var_126_bool = var_124_object == 0; //@ne
	if(var_126_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_125_object = 0;
		var_125_object = var_121_object;
		return 4;
	}
	@@var_124_object:GetMap(var_125_object);
	var_125_object = var_121_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_849(var_0_object, var_1_object, var_2_object, var_3_object, var_178_object, var_179_object)
{
	var_0_object = var_179_object;
	var_1_object = var_178_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_185_bool = 0; var_186_object = Obj();
		var_186_object = var_1_object;
		func_5050(var_186_object);
		var_193_bool = var_185_bool == 0; //@nz
		if(var_193_bool != 0) {
			var_194_string = "";
			func_1137(var_179_object, "Neutral");
			@@@var_0_object:SetMessage((int)6253);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6254, (int)6921, (int)6920);
			@@@var_0_object:AddReply((int)6259, (int)6926, (int)6925);
		} else {
				var_214_bool = 0; var_215_object = Obj();
				var_215_object = var_1_object;
				func_5014(var_215_object);
				if(var_214_bool != 0) {
					var_220_string = "";
					func_1137(var_179_object, "Neutral");
					@@@var_0_object:SetMessage((int)5533);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)5534, (int)6099, (int)6098);
					@@@var_0_object:AddReply((int)5571, (int)6140, (int)6139);
					goto Label_1107;
				}
				var_228_bool = 0; var_229_object = Obj();
				var_229_object = var_1_object;
				func_5026(var_229_object);
				if(var_228_bool != 0) {
					var_234_string = "";
					func_1137(var_179_object, "Neutral");
					@@@var_0_object:SetMessage((int)5574);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)5575, (int)6145, (int)6144);
					goto Label_1107;
				}
				var_239_bool = 0;
				var_239_bool = 0;
				var_240_bool = 0; var_241_object = Obj();
				var_241_object = var_1_object;
				func_5038(var_241_object);
				if(var_240_bool != 0) {
					var_246_bool = 0; var_247_object = Obj();
					var_247_object = var_1_object;
					func_5098(var_246_bool, var_247_object);
					if(var_246_bool != 0) {
						var_239_bool = 1;
					}
				}
				if(var_239_bool != 0) {
					var_250_string = "";
					func_1137(var_179_object, "Neutral");
					@@@var_0_object:SetMessage((int)5527);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)5528, (int)6901, (int)6092);
					@@@var_0_object:AddReply((int)5529, (int)6187, (int)6093);
					goto Label_1107;
				}
				var_258_bool = 0; var_259_object = Obj();
				var_259_object = var_1_object;
				func_5002(var_259_object);
				if(var_258_bool != 0) {
					var_264_string = "";
					func_1137(var_179_object, "Neutral");
					@@@var_0_object:SetMessage((int)5604);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)5605, (int)6180, (int)6179);
					@@@var_0_object:AddReply((int)5611, (int)6180, (int)6185);
					goto Label_1107;
				}
				var_272_string = "";
				func_1137(var_179_object, "Neutral");
				@@@var_0_object:SetMessage((int)8097);
				@@@var_0_object:ClearReplies();
				var_274_bool = 0; var_275_object = Obj();
				var_275_object = var_1_object;
				func_5098(var_274_bool, var_275_object);
				if(var_274_bool != 0) {
					@@@var_0_object:AddReply((int)8098, (int)-1, (int)8921);
				}
				var_279_bool = 0;
				var_279_bool = 0;
				var_280_bool = 0; var_281_object = Obj();
				var_281_object = var_1_object;
				func_5288(var_281_object);
				if(var_280_bool != 0) {
					var_286_bool = 0; var_287_object = Obj();
					var_287_object = var_1_object;
					func_5038(var_287_object);
					if(var_286_bool != 0) {
						var_279_bool = 1;
					}
				}
				if(var_279_bool != 0) {
					@@@var_0_object:AddReply((int)8109, (int)8947, (int)8932);
				}
				var_291_bool = 0;
				var_291_bool = 0;
				var_292_bool = 0; var_293_object = Obj();
				var_293_object = var_1_object;
				func_5192(var_293_object);
				if(var_292_bool != 0) {
					var_298_bool = 0; var_299_object = Obj();
					var_299_object = var_1_object;
					func_5300(var_299_object);
					if(var_298_bool != 0) {
						var_291_bool = 1;
					}
				}
				if(var_291_bool != 0) {
					@@@var_0_object:AddReply((int)8111, (int)8948, (int)8934);
				}
				var_307_bool = 0;
				var_307_bool = 0;
				var_308_bool = 0; var_309_object = Obj();
				var_309_object = var_1_object;
				func_5132(var_309_object);
				if(var_308_bool != 0) {
					var_314_bool = 0; var_315_object = Obj();
					var_315_object = var_1_object;
					func_5312(var_315_object);
					if(var_314_bool != 0) {
						var_307_bool = 1;
					}
				}
				if(var_307_bool != 0) {
					@@@var_0_object:AddReply((int)8115, (int)8949, (int)8938);
				}
				var_323_bool = 0;
				var_323_bool = 0;
				var_324_bool = 0; var_325_object = Obj();
				var_325_object = var_1_object;
				func_5396(var_325_object);
				if(var_324_bool != 0) {
					var_330_bool = 0; var_331_object = Obj();
					var_331_object = var_1_object;
					func_5324(var_331_object);
					if(var_330_bool != 0) {
						var_323_bool = 1;
					}
				}
				if(var_323_bool != 0) {
					@@@var_0_object:AddReply((int)8117, (int)8950, (int)8940);
				}
				var_339_bool = 0;
				var_339_bool = 0;
				var_340_bool = 0; var_341_object = Obj();
				var_341_object = var_1_object;
				func_5384(var_341_object);
				if(var_340_bool != 0) {
					var_346_bool = 0; var_347_object = Obj();
					var_347_object = var_1_object;
					func_5336(var_347_object);
					if(var_346_bool != 0) {
						var_339_bool = 1;
					}
				}
				if(var_339_bool != 0) {
					@@@var_0_object:AddReply((int)8119, (int)8951, (int)8942);
				}
				@@@var_0_object:AddReply((int)15220, (int)-1, (int)16497);
				goto Label_1107;
		}
	}
Label_1107:
	var_206_bool = 0;
	func_4808(var_206_bool);
	if(var_206_bool != 0) {

	Label_1111:
		lshWaitForAnimEnd();
		var_207_object = var_3_object;
		if(var_207_object != 0) {
		} else {
			var_208_string = "";
			var_208_string = var_2_object;
			func_4735(var_208_string);
			goto Label_1111;
	}
		PlayAnimation("all", "idle");

	Label_1126:
		WaitForAnimEnd();
		var_211_object = var_3_object;
		if(var_211_object != 0) {
			goto Label_1136;
		}
		PlayAnimation("all", "idle");
		goto Label_1126;

	}
	goto Label_1136;
	
Label_1136:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x355";


func_4946()
{
	SetVariable("resque_list", (int)1);
	func_5515();
	return 0;
}


func_5204(var_54_bool)
{
	var_56_int = 0; var_57_string = "";
	func_4770(var_56_int, "d11q01");
	var_61_bool = var_56_int == (int)1;
	if(var_61_bool != 0) {
		var_54_bool = 1;
		return 0;
	}
	var_54_bool = 0;
	return 0;
}


func_345(var_0_object, var_459_int, var_460_object)
{
	var_462_object = Obj(); var_463_bool = 0; var_464_int = 0; var_465_bool = 0; var_466_object = Obj(); var_467_bool = 0; var_468_int = 0; var_469_bool = 0;
	var_0_object = var_460_object;
	var_470_bool = 0; var_471_object = Obj();
	var_460_object = var_471_object;
	func_4675(var_470_bool, var_471_object);
	var_472_bool = var_470_bool == 0; //@nz
	if(var_472_bool != 0) {
		var_459_int = -2;
		return 8;
	}
	CreateDialog(var_466_object);
	var_473_int = 0;
	func_4804(var_473_int);
	@@var_466_object:SetNPCName(var_473_int);
	var_474_string = "";
	func_4806(var_474_string);
	@@var_466_object:SetPhoto(var_474_string);
	var_475_int = 0;
	func_5470(var_475_int);
	@@var_466_object:SetPlayerName(var_475_int);
	IsOverrideActive(var_467_bool);
	var_476_bool = var_467_bool;
	if(var_476_bool != 0) {
		var_459_int = -2;
		return 8;
	}
	DoDialog(var_466_object);
	var_477_object = Obj(); var_478_object = Obj();
	var_460_object = var_477_object;
	var_466_object = var_478_object;
	TaskCall(5);
	func_408(var_479_object, var_480_object, var_481_string, var_482_bool, var_477_object, var_478_object);
	TaskReturn();
	@@var_466_object:IsDialogEnd(var_469_bool);
	
Label_390:
	var_541_bool = var_469_bool == 0; //@nz
	if(var_541_bool != 0) {
		sync();
		@@var_466_object:IsDialogEnd(var_469_bool);
		goto Label_390;
	}
	var_460_object = Obj();
	func_4731();
	StopDialog(var_466_object);
	@@var_466_object:GetReturnValue((int)-1);
	var_468_int = var_459_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4955(var_101_object)
{
	@@var_101_object:SetReturnValue((int)2000);
	return 0;
}


func_3933(var_0_object, var_689_int, var_690_object)
{
	var_692_object = Obj(); var_693_bool = 0; var_694_int = 0; var_695_bool = 0; var_696_object = Obj(); var_697_bool = 0; var_698_int = 0; var_699_bool = 0;
	var_0_object = var_690_object;
	var_700_bool = 0; var_701_object = Obj();
	var_690_object = var_701_object;
	func_4675(var_700_bool, var_701_object);
	var_702_bool = var_700_bool == 0; //@nz
	if(var_702_bool != 0) {
		var_689_int = -2;
		return 8;
	}
	CreateDialog(var_696_object);
	var_703_int = 0;
	func_4804(var_703_int);
	@@var_696_object:SetNPCName(var_703_int);
	var_704_string = "";
	func_4806(var_704_string);
	@@var_696_object:SetPhoto(var_704_string);
	var_705_int = 0;
	func_5470(var_705_int);
	@@var_696_object:SetPlayerName(var_705_int);
	IsOverrideActive(var_697_bool);
	var_706_bool = var_697_bool;
	if(var_706_bool != 0) {
		var_689_int = -2;
		return 8;
	}
	DoDialog(var_696_object);
	var_707_object = Obj(); var_708_object = Obj();
	var_690_object = var_707_object;
	var_696_object = var_708_object;
	TaskCall(15);
	func_3996(var_709_object, var_710_object, var_711_string, var_712_bool, var_707_object, var_708_object);
	TaskReturn();
	@@var_696_object:IsDialogEnd(var_699_bool);
	
Label_3978:
	var_785_bool = var_699_bool == 0; //@nz
	if(var_785_bool != 0) {
		sync();
		@@var_696_object:IsDialogEnd(var_699_bool);
		goto Label_3978;
	}
	var_690_object = Obj();
	func_4731();
	StopDialog(var_696_object);
	@@var_696_object:GetReturnValue((int)-1);
	var_698_int = var_689_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5470(var_93_int)
{
	var_94_int = 0; var_95_int = 0;
	GetVariable("player", var_95_int);
	var_98_bool = var_95_int == (int)0;
	if(var_98_bool != 0) {
		var_93_int = 200001;
		return 2;
	EMIT "GOTO 0x156d";
	}
	var_100_bool = var_95_int == (int)1;
	if(var_100_bool != 0) {
		var_93_int = 200002;
		return 2;
	}
	var_93_int = 200003;
	return 2;
}


func_5216(var_62_bool)
{
	var_64_int = 0; var_65_string = "";
	func_4770(var_64_int, "ood11Maria1");
	var_67_bool = var_64_int == (int)0;
	if(var_67_bool != 0) {
		var_62_bool = 1;
		return 0;
	}
	var_62_bool = 0;
	return 0;
}


func_4960()
{
	SetVariable("ood1Maria5", (int)1);
	return 0;
}


func_4966()
{
	SetVariable("ood1Maria6", (int)1);
	return 0;
}


func_5228(var_101_bool)
{
	var_103_int = 0; var_104_string = "";
	func_4770(var_103_int, "ood11Maria2");
	var_106_bool = var_103_int == (int)0;
	if(var_106_bool != 0) {
		var_101_bool = 1;
		return 0;
	}
	var_101_bool = 0;
	return 0;
}


func_4972()
{
	SetVariable("ood1Maria7", (int)1);
	return 0;
}


func_5487()
{
	var_135_object = Obj(); var_136_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_136_object, (int)134, (int)2, (int)15285);
	var_141_bool = 0; var_142_object = Obj(); var_143_int = 0;
	var_136_object = var_142_object;
	func_5424(var_141_bool, var_142_object, (int)11);
	return 2;
}
EMIT "Stack[-1] = 0";


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_102_object, var_103_object)
{
	var_0_object = var_103_object;
	var_1_object = var_102_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_109_object = Obj(); var_110_object = Obj();
		var_109_object = var_1_object;
		var_110_object = var_0_object;
		func_4916();
		var_113_string = "";
		func_185(var_103_object, "Neutral");
		@@@var_0_object:SetMessage((int)72);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)73, (int)87, (int)85);
		@@@var_0_object:AddReply((int)74, (int)88, (int)86);
		@@@var_0_object:AddReply((int)86, (int)87, (int)98);
		@@@var_0_object:AddReply((int)87, (int)87, (int)99);
		goto Label_155;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_155:
	var_141_bool = 0;
	func_4808(var_141_bool);
	if(var_141_bool != 0) {

	Label_159:
		lshWaitForAnimEnd();
		var_142_object = var_3_object;
		if(var_142_object != 0) {
		} else {
			var_143_string = "";
			var_143_string = var_2_object;
			func_4735(var_143_string);
			goto Label_159;
	}
		PlayAnimation("all", "idle");

	Label_174:
		WaitForAnimEnd();
		var_146_object = var_3_object;
		if(var_146_object != 0) {
			goto Label_184;
		}
		PlayAnimation("all", "idle");
		goto Label_174;
	}
	goto Label_184;
	
Label_184:
	return 0;
	
}


func_1137(var_2_object, var_158_string)
{
	var_159_bool = 0;
	func_4808(var_159_bool);
	var_160_bool = var_159_bool == 0; //@nz
	if(var_160_bool != 0) {
		return 0;
	}
	var_161_bool = var_158_string == var_2_object;
	if(var_161_bool != 0) {
		return 0;
	}
	var_162_string = "";
	var_158_string = var_162_string;
	func_4735(var_162_string);
	var_2_object = var_158_string;
	return 0;
}


func_4978()
{
	SetVariable("ood1Maria8", (int)1);
	return 0;
}


func_2422(var_0_object, var_1_object, var_2_object, var_3_object, var_381_object, var_382_object)
{
	var_0_object = var_382_object;
	var_1_object = var_381_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_388_bool = 0; var_389_object = Obj();
		var_389_object = var_1_object;
		func_5276(var_389_object);
		if(var_388_bool != 0) {
			var_394_object = Obj(); var_395_object = Obj();
			var_394_object = var_1_object;
			var_395_object = var_0_object;
			func_4940();
			var_398_string = "";
			func_2578(var_382_object, "Neutral");
			@@@var_0_object:SetMessage((int)14519);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14520, (int)15760, (int)15759);
		} else {
				var_415_string = "";
				func_2578(var_382_object, "Neutral");
				@@@var_0_object:SetMessage((int)6887);
				@@@var_0_object:ClearReplies();
				var_417_bool = 0;
				var_417_bool = 0;
				var_418_bool = 0; var_419_object = Obj();
				var_419_object = var_1_object;
				func_5062(var_419_object);
				if(var_418_bool != 0) {
					var_424_bool = 0; var_425_object = Obj();
					var_425_object = var_1_object;
					func_5086(var_425_object);
					if(var_424_bool != 0) {
						var_417_bool = 1;
					}
				}
				if(var_417_bool != 0) {
					@@@var_0_object:AddReply((int)6888, (int)7595, (int)7594);
				}
				var_433_bool = 0;
				var_433_bool = 0;
				var_434_bool = 0; var_435_object = Obj();
				var_435_object = var_1_object;
				func_5074(var_435_object);
				if(var_434_bool != 0) {
					var_440_bool = 0; var_441_object = Obj();
					var_441_object = var_1_object;
					func_5120(var_441_object);
					if(var_440_bool != 0) {
						var_433_bool = 1;
					}
				}
				if(var_433_bool != 0) {
					@@@var_0_object:AddReply((int)6918, (int)7625, (int)7624);
				}
				@@@var_0_object:AddReply((int)7400, (int)-1, (int)8166);
				goto Label_2548;
		}
	}
Label_2548:
	var_407_bool = 0;
	func_4808(var_407_bool);
	if(var_407_bool != 0) {

	Label_2552:
		lshWaitForAnimEnd();
		var_408_object = var_3_object;
		if(var_408_object != 0) {
		} else {
			var_409_string = "";
			var_409_string = var_2_object;
			func_4735(var_409_string);
			goto Label_2552;
	}
		PlayAnimation("all", "idle");

	Label_2567:
		WaitForAnimEnd();
		var_412_object = var_3_object;
		if(var_412_object != 0) {
			goto Label_2577;
		}
		PlayAnimation("all", "idle");
		goto Label_2567;

	}
	goto Label_2577;
	
Label_2577:
	return 0;
	
}
EMIT "PushEmpty(string)";
EMIT "Stack[-1] = \"Neutral\" // @poff=0";
EMIT "Call 0xa12";
EMIT "Pop(1)";
EMIT "Push((int) 9351)";
EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
EMIT "Pop(1)";
EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
EMIT "Pop(0)";
EMIT "Push((int) 9352)";
EMIT "Push((int) 10275)";
EMIT "Push((int) 10274)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
EMIT "Pop(3)";
EMIT "Push((int) 9361)";
EMIT "Push((int) 10275)";
EMIT "Push((int) 10284)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
EMIT "Pop(3)";
EMIT "GOTO 0x9f4";
EMIT "PushEmpty(string)";
EMIT "Stack[-1] = \"Neutral\" // @poff=0";
EMIT "Call 0xa12";
EMIT "Pop(1)";
EMIT "Push((int) 9362)";
EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
EMIT "Pop(1)";
EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
EMIT "Pop(0)";
EMIT "Push((int) 9363)";
EMIT "Push((int) 10288)";
EMIT "Push((int) 10287)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
EMIT "Pop(3)";
EMIT "Push((int) 9371)";
EMIT "Push((int) 10296)";
EMIT "Push((int) 10295)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
EMIT "Pop(3)";
EMIT "GOTO 0x9f4";
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x97a";


func_5240(var_107_bool)
{
	var_109_int = 0; var_110_string = "";
	func_4770(var_109_int, "d11q01");
	var_112_bool = var_109_int >= (int)4;
	if(var_112_bool != 0) {
		var_107_bool = 1;
		return 0;
	}
	var_107_bool = 0;
	return 0;
}


func_4984()
{
	SetVariable("d6MariaVisit", (int)1);
	return 0;
}


func_4731()
{
	CameraSwitchToNormal();
	return 0;
}


func_4990()
{
	SetVariable("ood10Maria1", (int)1);
	return 0;
}


func_4735(var_40_string)
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


func_5503(var_54_int)
{
	var_55_int = 0; var_56_int = 0;
	var_58_int = "vol_" + var_54_int;
	GetVariable(var_58_int, var_56_int);
	var_60_int = "vol_" + var_54_int;
	var_62_int = var_56_int | (int)8;
	SetVariable(var_60_int, var_62_int);
	return 2;
}


func_5252(var_218_bool)
{
	var_220_int = 0; var_221_string = "";
	func_4770(var_220_int, "d11q01");
	var_223_bool = var_220_int == (int)1000;
	if(var_223_bool != 0) {
		var_218_bool = 1;
		return 0;
	}
	var_218_bool = 0;
	return 0;
}


func_4996()
{
	SetVariable("d10q01MariaSavePetr", (int)1);
	return 0;
}


func_5002(var_224_bool)
{
	var_226_int = 0; var_227_string = "";
	func_4770(var_226_int, "ood1Maria1");
	var_229_bool = var_226_int == (int)0;
	if(var_229_bool != 0) {
		var_224_bool = 1;
		return 0;
	}
	var_224_bool = 0;
	return 0;
}


func_3211(var_0_object, var_545_int, var_546_object)
{
	var_548_object = Obj(); var_549_bool = 0; var_550_int = 0; var_551_bool = 0; var_552_object = Obj(); var_553_bool = 0; var_554_int = 0; var_555_bool = 0;
	var_0_object = var_546_object;
	var_556_bool = 0; var_557_object = Obj();
	var_546_object = var_557_object;
	func_4675(var_556_bool, var_557_object);
	var_558_bool = var_556_bool == 0; //@nz
	if(var_558_bool != 0) {
		var_545_int = -2;
		return 8;
	}
	CreateDialog(var_552_object);
	var_559_int = 0;
	func_4804(var_559_int);
	@@var_552_object:SetNPCName(var_559_int);
	var_560_string = "";
	func_4806(var_560_string);
	@@var_552_object:SetPhoto(var_560_string);
	var_561_int = 0;
	func_5470(var_561_int);
	@@var_552_object:SetPlayerName(var_561_int);
	IsOverrideActive(var_553_bool);
	var_562_bool = var_553_bool;
	if(var_562_bool != 0) {
		var_545_int = -2;
		return 8;
	}
	DoDialog(var_552_object);
	var_563_object = Obj(); var_564_object = Obj();
	var_546_object = var_563_object;
	var_552_object = var_564_object;
	TaskCall(11);
	func_3274(var_565_object, var_566_object, var_567_string, var_568_bool, var_563_object, var_564_object);
	TaskReturn();
	@@var_552_object:IsDialogEnd(var_555_bool);
	
Label_3256:
	var_605_bool = var_555_bool == 0; //@nz
	if(var_605_bool != 0) {
		sync();
		@@var_552_object:IsDialogEnd(var_555_bool);
		goto Label_3256;
	}
	var_546_object = Obj();
	func_4731();
	StopDialog(var_552_object);
	@@var_552_object:GetReturnValue((int)-1);
	var_554_int = var_545_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5515()
{
	var_45_int = 0; var_46_int = 0; var_47_int = 0; var_48_int = 0;
	var_47_int = 0;
	
Label_5517:
	var_50_bool = var_47_int < (int)3;
	if(var_50_bool != 0) {
		irand(var_48_int, (int)13);
		var_53_bool = var_48_int == (int)0;
		if(var_53_bool != 0) {
			var_54_int = 0;
			func_5503((int)11);
		} else {
			var_65_bool = var_48_int == (int)1;
			if(var_65_bool != 0) {
				var_66_int = 0;
				func_5503((int)18);
				goto Label_5626;
			}
			var_68_bool = var_48_int == (int)2;
			if(var_68_bool != 0) {
				var_69_int = 0;
				func_5503((int)21);
				goto Label_5626;
			}
			var_71_bool = var_48_int == (int)3;
			if(var_71_bool != 0) {
				var_72_int = 0;
				func_5503((int)2);
				goto Label_5626;
			}
			var_74_bool = var_48_int == (int)4;
			if(var_74_bool != 0) {
				var_75_int = 0;
				func_5503((int)9);
				goto Label_5626;
			}
			var_77_bool = var_48_int == (int)5;
			if(var_77_bool != 0) {
				var_78_int = 0;
				func_5503((int)13);
				goto Label_5626;
			}
			var_80_bool = var_48_int == (int)6;
			if(var_80_bool != 0) {
				var_81_int = 0;
				func_5503((int)24);
				goto Label_5626;
			}
			var_83_bool = var_48_int == (int)7;
			if(var_83_bool != 0) {
				var_84_int = 0;
				func_5503((int)10);
				goto Label_5626;
			}
			var_86_bool = var_48_int == (int)8;
			if(var_86_bool != 0) {
				var_87_int = 0;
				func_5503((int)20);
				goto Label_5626;
			}
			var_89_bool = var_48_int == (int)9;
			if(var_89_bool != 0) {
				var_90_int = 0;
				func_5503((int)21);
				goto Label_5626;
			}
			var_92_bool = var_48_int == (int)10;
			if(var_92_bool != 0) {
				var_93_int = 0;
				func_5503((int)3);
				goto Label_5626;
			}
			var_95_bool = var_48_int == (int)11;
			if(var_95_bool != 0) {
				var_96_int = 0;
				func_5503((int)19);
				goto Label_5626;
			}
			var_98_bool = var_48_int == (int)12;
			if(var_98_bool == 0) goto Label_5626;
			var_99_int = 0;
			func_5503((int)26);
	}
		var_47_int = var_47_int + (int)1;
		goto Label_5517;
	}
	return 4;
	
}


func_5264(var_116_bool)
{
	var_118_int = 0; var_119_string = "";
	func_4770(var_118_int, "ood11Maria3");
	var_121_bool = var_118_int == (int)0;
	if(var_121_bool != 0) {
		var_116_bool = 1;
		return 0;
	}
	var_116_bool = 0;
	return 0;
}


func_4753()
{
	var_38_bool = 0;
	func_4808(var_38_bool);
	if(var_38_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_5014(var_180_bool)
{
	var_182_int = 0; var_183_string = "";
	func_4770(var_182_int, "ood1Maria2");
	var_185_bool = var_182_int == (int)0;
	if(var_185_bool != 0) {
		var_180_bool = 1;
		return 0;
	}
	var_180_bool = 0;
	return 0;
}


func_4760(var_75_cvector, var_76_cvector)
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


func_408(var_0_object, var_1_object, var_2_object, var_3_object, var_477_object, var_478_object)
{
	var_0_object = var_478_object;
	var_1_object = var_477_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_484_bool = 0;
		var_484_bool = 0;
		var_485_bool = 0; var_486_object = Obj();
		var_486_object = var_1_object;
		func_5144(var_486_object);
		if(var_485_bool != 0) {
			var_491_bool = 0; var_492_object = Obj();
			var_492_object = var_1_object;
			func_5156(var_492_object);
			if(var_491_bool != 0) {
				var_484_bool = 1;
			}
		}
		if(var_484_bool != 0) {
			var_497_object = Obj(); var_498_object = Obj();
			var_497_object = var_1_object;
			var_498_object = var_0_object;
			func_4898();
			var_501_object = Obj(); var_502_object = Obj();
			var_501_object = var_1_object;
			var_502_object = var_0_object;
			func_4984();
			var_505_string = "";
			func_520(var_478_object, "Neutral");
			@@@var_0_object:SetMessage((int)3206);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3207, (int)3543, (int)3540);
			@@@var_0_object:AddReply((int)3208, (int)3542, (int)3541);
		} else {
				var_525_object = Obj(); var_526_object = Obj();
				var_525_object = var_1_object;
				var_526_object = var_0_object;
				func_4984();
				var_527_string = "";
				func_520(var_478_object, "Neutral");
				@@@var_0_object:SetMessage((int)12086);
				@@@var_0_object:ClearReplies();
				var_529_bool = 0; var_530_object = Obj();
				var_530_object = var_1_object;
				func_5168(var_530_object);
				if(var_529_bool != 0) {
					@@@var_0_object:AddReply((int)12087, (int)13314, (int)13313);
				}
				@@@var_0_object:AddReply((int)12094, (int)-1, (int)13320);
				goto Label_490;
		}
	}
Label_490:
	var_517_bool = 0;
	func_4808(var_517_bool);
	if(var_517_bool != 0) {

	Label_494:
		lshWaitForAnimEnd();
		var_518_object = var_3_object;
		if(var_518_object != 0) {
		} else {
			var_519_string = "";
			var_519_string = var_2_object;
			func_4735(var_519_string);
			goto Label_494;
	}
		PlayAnimation("all", "idle");

	Label_509:
		WaitForAnimEnd();
		var_522_object = var_3_object;
		if(var_522_object != 0) {
			goto Label_519;
		}
		PlayAnimation("all", "idle");
		goto Label_509;

	}
	goto Label_519;
	
Label_519:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x19c";


func_5276(var_197_bool)
{
	var_199_int = 0; var_200_string = "";
	func_4770(var_199_int, "ood2Maria3");
	var_204_bool = var_199_int == (int)0;
	if(var_204_bool != 0) {
		var_197_bool = 1;
		return 0;
	}
	var_197_bool = 0;
	return 0;
}


func_3996(var_0_object, var_1_object, var_2_object, var_3_object, var_707_object, var_708_object)
{
	var_0_object = var_708_object;
	var_1_object = var_707_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_714_bool = 0;
		var_714_bool = 0;
		var_715_bool = 0; var_716_object = Obj();
		var_716_object = var_1_object;
		func_5204(var_716_object);
		if(var_715_bool != 0) {
			var_721_bool = 0; var_722_object = Obj();
			var_722_object = var_1_object;
			func_5216(var_722_object);
			if(var_721_bool != 0) {
				var_714_bool = 1;
			}
		}
		if(var_714_bool != 0) {
			var_727_object = Obj(); var_728_object = Obj();
			var_727_object = var_1_object;
			var_728_object = var_0_object;
			func_4922();
			var_731_string = "";
			func_4127(var_708_object, "Neutral");
			@@@var_0_object:SetMessage((int)14369);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14370, (int)15594, (int)15593);
			@@@var_0_object:AddReply((int)14376, (int)-1, (int)15599);
		} else {
				var_751_string = "";
				func_4127(var_708_object, "Neutral");
				@@@var_0_object:SetMessage((int)14377);
				@@@var_0_object:ClearReplies();
				var_753_bool = 0;
				var_753_bool = 0;
				var_754_bool = 0;
				var_754_bool = 0;
				var_755_bool = 0; var_756_object = Obj();
				var_756_object = var_1_object;
				func_5216(var_756_object);
				var_757_bool = var_755_bool == 0; //@nz
				if(var_757_bool != 0) {
					var_758_bool = 0; var_759_object = Obj();
					var_759_object = var_1_object;
					func_5228(var_759_object);
					if(var_758_bool != 0) {
						var_754_bool = 1;
					}
				}
				if(var_754_bool != 0) {
					var_764_bool = 0; var_765_object = Obj();
					var_765_object = var_1_object;
					func_5240(var_765_object);
					if(var_764_bool != 0) {
						var_753_bool = 1;
					}
				}
				if(var_753_bool != 0) {
					@@@var_0_object:AddReply((int)14378, (int)15602, (int)15601);
				}
				var_773_bool = 0; var_774_object = Obj();
				var_774_object = var_1_object;
				func_5264(var_774_object);
				if(var_773_bool != 0) {
					@@@var_0_object:AddReply((int)14400, (int)15626, (int)15625);
				}
				@@@var_0_object:AddReply((int)14419, (int)-1, (int)15644);
				goto Label_4097;
		}
	}
Label_4097:
	var_743_bool = 0;
	func_4808(var_743_bool);
	if(var_743_bool != 0) {

	Label_4101:
		lshWaitForAnimEnd();
		var_744_object = var_3_object;
		if(var_744_object != 0) {
		} else {
			var_745_string = "";
			var_745_string = var_2_object;
			func_4735(var_745_string);
			goto Label_4101;
	}
		PlayAnimation("all", "idle");

	Label_4116:
		WaitForAnimEnd();
		var_748_object = var_3_object;
		if(var_748_object != 0) {
			goto Label_4126;
		}
		PlayAnimation("all", "idle");
		goto Label_4116;

	}
	goto Label_4126;
	
Label_4126:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xfa0";


func_4770(var_56_int, var_57_string)
{
	var_58_int = 0; var_59_int = 0;
	GetVariable(var_57_string, var_59_int);
	var_59_int = var_56_int;
	return 2;
}


func_5026(var_194_bool)
{
	var_196_int = 0; var_197_string = "";
	func_4770(var_196_int, "ood1Maria3");
	var_199_bool = var_196_int == (int)0;
	if(var_199_bool != 0) {
		var_194_bool = 1;
		return 0;
	}
	var_194_bool = 0;
	return 0;
}


func_3750(var_2_object, var_75_string)
{
	var_76_bool = 0;
	func_4808(var_76_bool);
	var_77_bool = var_76_bool == 0; //@nz
	if(var_77_bool != 0) {
		return 0;
	}
	var_78_bool = var_75_string == var_2_object;
	if(var_78_bool != 0) {
		return 0;
	}
	var_79_string = "";
	var_75_string = var_79_string;
	func_4735(var_79_string);
	var_2_object = var_75_string;
	return 0;
}


func_4775(var_132_float)
{
	var_133_float = 0; var_134_float = 0;
	GetGameTime(var_134_float);
	var_134_float = var_132_float;
	return 2;
}


func_5288(var_246_bool)
{
	var_248_int = 0; var_249_string = "";
	func_4770(var_248_int, "KnowKaterina");
	var_251_bool = var_248_int == (int)1;
	if(var_251_bool != 0) {
		var_246_bool = 1;
		return 0;
	}
	var_246_bool = 0;
	return 0;
}


func_4780(var_154_int)
{
	var_155_float = 0; var_156_float = 0;
	GetGameTime(var_156_float);
	var_158_int = 0;
	var_158_int = var_156_float / (int)24;
	var_154_int = (int)1 + var_158_int;
	return 2;
}


func_5038(var_206_bool)
{
	var_208_int = 0; var_209_string = "";
	func_4770(var_208_int, "ood1Maria4");
	var_211_bool = var_208_int == (int)0;
	if(var_211_bool != 0) {
		var_206_bool = 1;
		return 0;
	}
	var_206_bool = 0;
	return 0;
}


func_5300(var_264_bool)
{
	var_266_int = 0; var_267_string = "";
	func_4770(var_266_int, "ood1Maria5");
	var_269_bool = var_266_int == (int)0;
	if(var_269_bool != 0) {
		var_264_bool = 1;
		return 0;
	}
	var_264_bool = 0;
	return 0;
}


func_4789(var_152_bool, var_153_int)
{
	var_154_int = 0;
	func_4780(var_154_int);
	var_152_bool = var_154_int == var_153_int;
	return 0;
}


func_185(var_2_object, var_45_string)
{
	var_46_bool = 0;
	func_4808(var_46_bool);
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
	func_4735(var_49_string);
	var_2_object = var_45_string;
	return 0;
}


func_5050(var_149_bool)
{
	var_151_int = 0; var_152_string = "";
	func_4770(var_151_int, "d1q01FirstGeorgVisit");
	var_156_bool = var_151_int == (int)1;
	if(var_156_bool != 0) {
		var_149_bool = 1;
		return 0;
	}
	var_149_bool = 0;
	return 0;
}


func_4795(var_787_bool)
{
	var_788_bool = 0; var_789_bool = 0;
	var_790_string = "";
	func_4735("No");
	lshWaitForAnimEnd(var_789_bool);
	var_789_bool = var_787_bool;
	return 2;
}


func_5312(var_280_bool)
{
	var_282_int = 0; var_283_string = "";
	func_4770(var_282_int, "ood1Maria6");
	var_285_bool = var_282_int == (int)0;
	if(var_285_bool != 0) {
		var_280_bool = 1;
		return 0;
	}
	var_280_bool = 0;
	return 0;
}


func_4804(var_91_int)
{
	var_91_int = 2868;
	return 0;
}


func_4806(var_92_string)
{
	var_92_string = "ui/NPC_Maria.png";
	return 0;
}


func_5062(var_231_bool)
{
	var_233_int = 0; var_234_string = "";
	func_4770(var_233_int, "ood2Maria1");
	var_236_bool = var_233_int == (int)0;
	if(var_236_bool != 0) {
		var_231_bool = 1;
		return 0;
	}
	var_231_bool = 0;
	return 0;
}


func_4808(var_38_bool)
{
	var_38_bool = 1;
	return 0;
}


func_4810()
{
	SetVariable("ood1Maria1", (int)1);
	return 0;
}


func_3274(var_0_object, var_1_object, var_2_object, var_3_object, var_563_object, var_564_object)
{
	var_0_object = var_564_object;
	var_1_object = var_563_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_570_bool = 0; var_571_object = Obj();
		var_571_object = var_1_object;
		func_5180(var_571_object);
		if(var_570_bool != 0) {
			var_576_object = Obj(); var_577_object = Obj();
			var_576_object = var_1_object;
			var_577_object = var_0_object;
			func_4910();
			var_580_string = "";
			func_3357(var_564_object, "Neutral");
			@@@var_0_object:SetMessage((int)12310);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12311, (int)13471, (int)13470);
			@@@var_0_object:AddReply((int)12313, (int)13473, (int)13472);
		} else {
				var_600_string = "";
				func_3357(var_564_object, "Neutral");
				@@@var_0_object:SetMessage((int)13777);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)13778, (int)-1, (int)15014);
				goto Label_3327;
		}
	}
Label_3327:
	var_592_bool = 0;
	func_4808(var_592_bool);
	if(var_592_bool != 0) {

	Label_3331:
		lshWaitForAnimEnd();
		var_593_object = var_3_object;
		if(var_593_object != 0) {
		} else {
			var_594_string = "";
			var_594_string = var_2_object;
			func_4735(var_594_string);
			goto Label_3331;
	}
		PlayAnimation("all", "idle");

	Label_3346:
		WaitForAnimEnd();
		var_597_object = var_3_object;
		if(var_597_object != 0) {
			goto Label_3356;
		}
		PlayAnimation("all", "idle");
		goto Label_3346;

	}
	goto Label_3356;
	
Label_3356:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xcce";


func_5324(var_296_bool)
{
	var_298_int = 0; var_299_string = "";
	func_4770(var_298_int, "ood1Maria7");
	var_301_bool = var_298_int == (int)0;
	if(var_301_bool != 0) {
		var_296_bool = 1;
		return 0;
	}
	var_296_bool = 0;
	return 0;
}


func_4816()
{
	SetVariable("ood1Maria2", (int)1);
	return 0;
}


func_5074(var_247_bool)
{
	var_249_int = 0; var_250_string = "";
	func_4770(var_249_int, "ood2Maria2");
	var_252_bool = var_249_int == (int)0;
	if(var_252_bool != 0) {
		var_247_bool = 1;
		return 0;
	}
	var_247_bool = 0;
	return 0;
}


func_4822()
{
	SetVariable("ood1Maria3", (int)1);
	return 0;
}


func_5336(var_312_bool)
{
	var_314_int = 0; var_315_string = "";
	func_4770(var_314_int, "ood1Maria8");
	var_317_bool = var_314_int == (int)0;
	if(var_317_bool != 0) {
		var_312_bool = 1;
		return 0;
	}
	var_312_bool = 0;
	return 0;
}


func_4828()
{
	SetVariable("ood1Maria4", (int)1);
	return 0;
}


func_5086(var_237_bool)
{
	var_239_int = 0; var_240_string = "";
	func_4770(var_239_int, "d2q02");
	var_242_bool = var_239_int == (int)3;
	if(var_242_bool != 0) {
		var_237_bool = 1;
		return 0;
	}
	var_237_bool = 0;
	return 0;
}


func_4834(var_178_object)
{
	Trace("money500 is given");
	var_181_object = Obj(); var_182_string = ""; var_183_int = 0;
	var_178_object = var_181_object;
	func_4651(var_181_object, "money", (int)500);
	return 0;
}


func_5348(var_64_bool)
{
	var_66_int = 0; var_67_string = "";
	func_4770(var_66_int, "d10q01");
	var_69_bool = var_66_int == (int)0;
	if(var_69_bool != 0) {
		var_64_bool = 1;
		return 0;
	}
	var_64_bool = 0;
	return 0;
}


func_5098(var_212_bool, var_213_object)
{
	var_214_bool = 0; var_215_object = Obj();
	var_213_object = var_215_object;
	func_5408(var_215_object);
	if(var_214_bool != 0) {
		var_212_bool = 1;
		return 0;
	}
	var_212_bool = 0;
	return 0;
}


func_4845()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_5360(var_57_bool)
{
	var_59_int = 0; var_60_string = "";
	func_4770(var_59_int, "d10q01");
	var_62_bool = var_59_int == (int)1000;
	if(var_62_bool != 0) {
		var_57_bool = 1;
		return 0;
	}
	var_57_bool = 0;
	return 0;
}


func_4851()
{
	SetVariable("ood2Maria1", (int)1);
	return 0;
}


func_5108(var_343_bool)
{
	var_345_int = 0; var_346_string = "";
	func_4770(var_345_int, "d2q01");
	var_348_bool = var_345_int == (int)1000;
	if(var_348_bool != 0) {
		var_343_bool = 1;
		return 0;
	}
	var_343_bool = 0;
	return 0;
}


func_4857()
{
	SetVariable("ood2Maria2", (int)1);
	return 0;
}


func_5372(var_49_bool)
{
	var_51_int = 0; var_52_string = "";
	func_4770(var_51_int, "ood10Maria1");
	var_56_bool = var_51_int == (int)0;
	if(var_56_bool != 0) {
		var_49_bool = 1;
		return 0;
	}
	var_49_bool = 0;
	return 0;
}


func_5630()
{
	var_35_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	return 0;
}


func_4863()
{
	var_117_object = Obj(); var_118_object = Obj();
	SetVariable("d2q02", (int)4);
	func_5453(Obj());
	var_121_object = var_118_object;
	var_132_float = 0;
	func_4775(var_132_float);
	@@var_118_object:AddMark("d2q02MariaGotoPetr", "pt_map_petr", (int)0, (int)15275, var_132_float);
	func_5487();
	return 2;
}
EMIT "Stack[-1] = 0";


