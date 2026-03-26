// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1,ShowWindow/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Staring|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Neutral|W:Angry|W:Mysterious|W:Rage|W:player|A:GetPosition|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|W:m|W:Can't find lsh animation : |A:add|W:money|W:Money|W:ui/NPC_Maria.png|W:ui/NPC_Maria_b.png|W:ood1Maria1|W:d1q01RescueListBadReply|W:quest_d1_01|W:place_masks|W:ood1Maria2|W:ood1Maria3|W:money2000 is given|W:playsound|W:givemoney|W:d7q03|W:ood10Maria2|W:ood3Maria1|W:ood3Maria2|W:ood4Maria1|W:ood4Maria2|W:quest_d2_02|W:fail|W:ood2Maria1|W:ood2Maria2|W:d2q02|W:d2q02MariaGotoPetr|W:pt_map_petr|A:AddMark|W:d2q03MariaGotoViktor|W:KnowViktor|W:KnowAlexandr|W:ood6Maria1|W:ood6Maria2|W:ood8Maria1|W:KnowMaria|W:resque_list|A:SetReturnValue|W:ood1Maria5|W:d6MariaVisit|W:ood10Maria1|W:d10q01MariaSavePetr|W:d1q01FirstGeorgVisit|W:d10q02|W:d3KaterinaAboutKills|W:d2q03|W:d3q02|W:d4q03|W:d6q01|W:KnowGeorg|W:d2q01|W:d10q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:branch|W:vol_|A:size|A:get|W:people.xml
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x171f
// @RUN_TASK: 22
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb0 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x217 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x41a vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x8b2 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb21 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xd83 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0xfbe vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1177 vars=int,int
// @TASK_16: vars=object params=2
// @TASK_17: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1335 vars=int,int
// @TASK_18: vars=object params=2
// @TASK_19: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1593 vars=int,int
// @TASK_20: vars=object params=2
// @TASK_21: vars=object,object,string,bool params=2
// @EVENT_11: op=0x16f5 vars=int,int
// @TASK_22: vars=cvector params=0
// @EVENT_7: op=0x176b vars=int
// @EVENT_6: op=0x1791 vars=
// @EVENT_5: op=0x17a0 vars=
// @EVENT_45: op=0x17ad vars=bool
// @EVENT_0: op=0x17b9 vars=object
// @PE: 0x51,0x9a,0xb0,0x191,0x201,0x217,0x362,0x404,0x41a,0x841,0x89c,0x8b2,0xab0,0xb0b,0xb21,0xd1a,0xd6d,0xd83,0xf64,0xfa8,0xfbe,0x1109,0x1161,0x1177,0x12a0,0x131f,0x1335,0x1543,0x157d,0x1593,0x16a5,0x16df,0x16f5,0x176b,0x1791,0x17ad,0x19ad,0x19d5,0x19db,0x19e1,0x19e8,0x19ee,0x19f4,0x19fe,0x1a04,0x1a0d,0x1a13,0x1a19,0x1a1f,0x1a25,0x1a2b,0x1a35,0x1a3b,0x1a58,0x1a5e,0x1a64,0x1a6a,0x1a70,0x1a76,0x1a7c,0x1a82,0x1a8b,0x1a90,0x1a96,0x1a9c,0x1aa2,0x1aa8,0x1ab4,0x1ac0,0x1acc,0x1ad8,0x1ae4,0x1af0,0x1afc,0x1b08,0x1b14,0x1b20,0x1b2c,0x1b38,0x1b44,0x1b50,0x1b5c,0x1b68,0x1b74,0x1b80,0x1b8c,0x1b98,0x1ba4,0x1bb0,0x1bbc,0x1bc8,0x1bd4,0x1be0,0x1bec,0x1bf8,0x1c76,0x1cbc,0x1cc0

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_6488();
		var_61_bool = var_56_bool == (int)84;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_6780();
			var_66_string = "";
			func_154(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)500072);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500073, (int)87, (int)85);
			@@@var_0_object:AddReply((int)500074, (int)88, (int)86);
			@@@var_0_object:AddReply((int)500086, (int)87, (int)98);
			@@@var_0_object:AddReply((int)500087, (int)87, (int)99);
			return 0;
		}
		var_97_bool = var_56_bool == (int)88;
		if(var_97_bool != 0) {
			var_98_object = Obj(); var_99_object = Obj();
			var_98_object = var_1_object;
			var_99_object = var_0_object;
			func_6750();
			var_102_string = "";
			func_154(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500076);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500085, (int)87, (int)97);
			return 0;
		}
		var_108_bool = var_56_bool == (int)87;
		if(var_108_bool != 0) {
			var_109_string = "";
			func_154(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)500075);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500077, (int)93, (int)89);
			@@@var_0_object:AddReply((int)500078, (int)91, (int)90);
			return 0;
		}
		var_118_bool = var_56_bool == (int)91;
		if(var_118_bool != 0) {
			var_119_string = "";
			func_154(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)500079);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500080, (int)-1, (int)92);
			return 0;
		}
		var_125_bool = var_56_bool == (int)93;
		if(var_125_bool != 0) {
			var_126_string = "";
			func_154(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)500081);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500083, (int)-1, (int)95);
			@@@var_0_object:AddReply((int)500084, (int)-1, (int)96);
			return 0;
		}
		var_3_string = true;
		var_134_bool = 0;
		func_6611(var_134_bool);
		if(var_134_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb1";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_6488();
		var_61_bool = var_57_cvector == (int)13313;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_6768();
		}
		var_67_bool = var_56_bool == (int)3539;
		if(var_67_bool != 0) {
			var_68_bool = 0;
			var_68_bool = 0;
			var_69_bool = 0; var_70_object = Obj();
			var_70_object = var_1_object;
			func_7052(var_70_object);
			if(var_69_bool != 0) {
				var_77_bool = 0; var_78_object = Obj();
				var_78_object = var_1_object;
				func_7064(var_78_object);
				if(var_77_bool != 0) {
					var_68_bool = 1;
				}
			}
			if(var_68_bool != 0) {
				var_83_object = Obj(); var_84_object = Obj();
				var_83_object = var_1_object;
				var_84_object = var_0_object;
				func_6762();
				var_87_object = Obj(); var_88_object = Obj();
				var_87_object = var_1_object;
				var_88_object = var_0_object;
				func_6806();
				var_91_string = "";
				func_513(var_57_cvector, "Angry");
				@@@var_0_object:SetMessage((int)503206);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)503207, (int)3543, (int)3540);
				@@@var_0_object:AddReply((int)503208, (int)3542, (int)3541);
				return 0;
			}
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_object;
			func_6806();
			var_117_string = "";
			func_513(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)512086);
			@@@var_0_object:ClearReplies();
			var_119_bool = 0; var_120_object = Obj();
			var_120_object = var_1_object;
			func_7076(var_120_object);
			if(var_119_bool != 0) {
				@@@var_0_object:AddReply((int)512087, (int)13314, (int)13313);
			}
			@@@var_0_object:AddReply((int)512094, (int)-1, (int)13320);
			return 0;
		}
		var_132_bool = var_56_bool == (int)13314;
		if(var_132_bool != 0) {
			var_133_string = "";
			func_513(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)512088);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512089, (int)13316, (int)13315);
			return 0;
		}
		var_139_bool = var_56_bool == (int)13316;
		if(var_139_bool != 0) {
			var_140_string = "";
			func_513(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512090);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512091, (int)13318, (int)13317);
			return 0;
		}
		var_146_bool = var_56_bool == (int)13318;
		if(var_146_bool != 0) {
			var_147_string = "";
			func_513(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512092);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512093, (int)-1, (int)13319);
			return 0;
		}
		var_153_bool = var_56_bool == (int)3542;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_513(var_57_cvector, "Rage");
			@@@var_0_object:SetMessage((int)503209);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503215, (int)3543, (int)3549);
			@@@var_0_object:AddReply((int)503216, (int)3543, (int)3551);
			return 0;
		}
		var_163_bool = var_56_bool == (int)3543;
		if(var_163_bool != 0) {
			var_164_string = "";
			func_513(var_57_cvector, "Rage");
			@@@var_0_object:SetMessage((int)503210);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503211, (int)3545, (int)3544);
			@@@var_0_object:AddReply((int)503214, (int)3545, (int)3547);
			return 0;
		}
		var_173_bool = var_56_bool == (int)3545;
		if(var_173_bool != 0) {
			var_174_string = "";
			func_513(var_57_cvector, "Rage");
			@@@var_0_object:SetMessage((int)503212);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503213, (int)-1, (int)3546);
			@@@var_0_object:AddReply((int)503217, (int)3554, (int)3553);
			return 0;
		}
		var_183_bool = var_56_bool == (int)3554;
		if(var_183_bool != 0) {
			var_184_string = "";
			func_513(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)503218);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503219, (int)-1, (int)3555);
			@@@var_0_object:AddReply((int)503220, (int)-1, (int)3556);
			return 0;
		}
		var_3_string = true;
		var_192_bool = 0;
		func_6611(var_192_bool);
		if(var_192_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x218";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_6488();
		var_61_bool = var_57_cvector == (int)26327;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_6786();
			var_100_object = Obj(); var_101_object = Obj();
			var_100_object = var_1_object;
			var_101_object = var_0_object;
			func_6795(var_101_object);
		}
		var_104_bool = var_57_cvector == (int)26345;
		if(var_104_bool != 0) {
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_6786();
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_6795(var_108_object);
		}
		var_110_bool = var_57_cvector == (int)26346;
		if(var_110_bool != 0) {
			var_111_object = Obj(); var_112_object = Obj();
			var_111_object = var_1_object;
			var_112_object = var_0_object;
			func_6786();
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_6795(var_114_object);
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_object;
			func_6619();
		}
		var_120_bool = var_57_cvector == (int)26333;
		if(var_120_bool != 0) {
			var_121_object = Obj(); var_122_object = Obj();
			var_121_object = var_1_object;
			var_122_object = var_0_object;
			func_6786();
			var_123_object = Obj(); var_124_object = Obj();
			var_123_object = var_1_object;
			var_124_object = var_0_object;
			func_6795(var_124_object);
			var_125_object = Obj(); var_126_object = Obj();
			var_125_object = var_1_object;
			var_126_object = var_0_object;
			func_6619();
		}
		var_128_bool = var_57_cvector == (int)26337;
		if(var_128_bool != 0) {
			var_129_object = Obj(); var_130_object = Obj();
			var_129_object = var_1_object;
			var_130_object = var_0_object;
			func_6786();
			var_131_object = Obj(); var_132_object = Obj();
			var_131_object = var_1_object;
			var_132_object = var_0_object;
			func_6795(var_132_object);
		}
		var_134_bool = var_57_cvector == (int)23003;
		if(var_134_bool != 0) {
			var_135_object = Obj(); var_136_object = Obj();
			var_135_object = var_1_object;
			var_136_object = var_0_object;
			func_6638();
		}
		var_140_bool = var_57_cvector == (int)6183;
		if(var_140_bool != 0) {
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_object;
			func_6613();
		}
		var_146_bool = var_57_cvector == (int)6184;
		if(var_146_bool != 0) {
			var_147_object = Obj(); var_148_object = Obj();
			var_147_object = var_1_object;
			var_148_object = var_0_object;
			func_6613();
		}
		var_150_bool = var_57_cvector == (int)8934;
		if(var_150_bool != 0) {
			var_151_object = Obj(); var_152_object = Obj();
			var_151_object = var_1_object;
			var_152_object = var_0_object;
			func_6800();
		}
		var_156_bool = var_57_cvector == (int)23019;
		if(var_156_bool != 0) {
			var_157_object = Obj(); var_158_object = Obj();
			var_157_object = var_1_object;
			var_158_object = var_0_object;
			func_6800();
		}
		var_160_bool = var_56_bool == (int)6919;
		if(var_160_bool != 0) {
			var_161_bool = 0; var_162_object = Obj();
			var_162_object = var_1_object;
			func_6872(var_162_object);
			var_169_bool = var_161_bool == 0; //@nz
			if(var_169_bool != 0) {
				var_170_string = "";
				func_1028(var_57_cvector, "Staring");
				@@@var_0_object:SetMessage((int)506253);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)506254, (int)6921, (int)6920);
				@@@var_0_object:AddReply((int)506259, (int)6926, (int)6925);
				return 0;
			}
			var_194_bool = 0; var_195_object = Obj();
			var_195_object = var_1_object;
			func_6848(var_195_object);
			if(var_194_bool != 0) {
				var_200_object = Obj(); var_201_object = Obj();
				var_200_object = var_1_object;
				var_201_object = var_0_object;
				func_6632();
				var_204_object = Obj(); var_205_object = Obj();
				var_204_object = var_1_object;
				var_205_object = var_0_object;
				func_6625();
				var_212_string = "";
				func_1028(var_57_cvector, "Mysterious");
				@@@var_0_object:SetMessage((int)524928);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)524944, (int)26279, (int)26278);
				@@@var_0_object:AddReply((int)524952, (int)26279, (int)26286);
				return 0;
			}
			var_220_string = "";
			func_1028(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)508097);
			@@@var_0_object:ClearReplies();
			var_222_bool = 0;
			var_222_bool = 0;
			var_223_bool = 0; var_224_object = Obj();
			var_224_object = var_1_object;
			func_6824(var_224_object);
			if(var_223_bool != 0) {
				var_229_bool = 0; var_230_object = Obj();
				var_230_object = var_1_object;
				func_6860(var_230_object);
				if(var_229_bool != 0) {
					var_222_bool = 1;
				}
			}
			if(var_222_bool != 0) {
				@@@var_0_object:AddReply((int)521832, (int)23004, (int)23003);
			}
			var_238_bool = 0; var_239_object = Obj();
			var_239_object = var_1_object;
			func_6836(var_239_object);
			if(var_238_bool != 0) {
				@@@var_0_object:AddReply((int)505605, (int)6180, (int)6179);
			}
			var_247_bool = 0;
			var_247_bool = 0;
			var_248_bool = 0; var_249_object = Obj();
			var_249_object = var_1_object;
			func_7100(var_249_object);
			if(var_248_bool != 0) {
				var_254_bool = 0; var_255_object = Obj();
				var_255_object = var_1_object;
				func_7124(var_255_object);
				if(var_254_bool != 0) {
					var_247_bool = 1;
				}
			}
			if(var_247_bool != 0) {
				@@@var_0_object:AddReply((int)508111, (int)23011, (int)8934);
			}
			@@@var_0_object:AddReply((int)505611, (int)-1, (int)6185);
			return 0;
		}
		var_267_bool = var_56_bool == (int)23011;
		if(var_267_bool != 0) {
			var_268_string = "";
			func_1028(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521840);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521841, (int)8948, (int)23012);
			return 0;
		}
		var_274_bool = var_56_bool == (int)8948;
		if(var_274_bool != 0) {
			var_275_object = Obj(); var_276_object = Obj();
			var_275_object = var_1_object;
			var_276_object = var_0_object;
			func_6756();
			var_279_string = "";
			func_1028(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508125);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521842, (int)23014, (int)23013);
			@@@var_0_object:AddReply((int)521846, (int)23016, (int)23017);
			return 0;
		}
		var_288_bool = var_56_bool == (int)23014;
		if(var_288_bool != 0) {
			var_289_string = "";
			func_1028(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521843);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521844, (int)23016, (int)23015);
			return 0;
		}
		var_295_bool = var_56_bool == (int)23016;
		if(var_295_bool != 0) {
			var_296_string = "";
			func_1028(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521845);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521847, (int)-1, (int)23019);
			return 0;
		}
		var_302_bool = var_56_bool == (int)6180;
		if(var_302_bool != 0) {
			var_303_string = "";
			func_1028(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)505606);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)505607, (int)6182, (int)6181);
			@@@var_0_object:AddReply((int)524933, (int)6182, (int)26264);
			return 0;
		}
		var_312_bool = var_56_bool == (int)6182;
		if(var_312_bool != 0) {
			var_313_string = "";
			func_1028(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)505608);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)505609, (int)-1, (int)6183);
			@@@var_0_object:AddReply((int)505610, (int)-1, (int)6184);
			return 0;
		}
		var_322_bool = var_56_bool == (int)23004;
		if(var_322_bool != 0) {
			var_323_string = "";
			func_1028(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)521833);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)505529, (int)6187, (int)6093);
			@@@var_0_object:AddReply((int)521834, (int)-1, (int)23005);
			return 0;
		}
		var_332_bool = var_56_bool == (int)6187;
		if(var_332_bool != 0) {
			var_333_string = "";
			func_1028(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)505612);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524934, (int)26267, (int)26266);
			return 0;
		}
		var_339_bool = var_56_bool == (int)26267;
		if(var_339_bool != 0) {
			var_340_string = "";
			func_1028(var_57_cvector, "Rage");
			@@@var_0_object:SetMessage((int)524935);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524936, (int)26269, (int)26268);
			@@@var_0_object:AddReply((int)524938, (int)26269, (int)26270);
			return 0;
		}
		var_349_bool = var_56_bool == (int)26269;
		if(var_349_bool != 0) {
			var_350_string = "";
			func_1028(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)524937);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524939, (int)26273, (int)26272);
			return 0;
		}
		var_356_bool = var_56_bool == (int)26273;
		if(var_356_bool != 0) {
			var_357_string = "";
			func_1028(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)524940);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)505528, (int)6901, (int)6092);
			@@@var_0_object:AddReply((int)505613, (int)26274, (int)6188);
			return 0;
		}
		var_366_bool = var_56_bool == (int)26274;
		if(var_366_bool != 0) {
			var_367_string = "";
			func_1028(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)524941);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524942, (int)6901, (int)26275);
			@@@var_0_object:AddReply((int)524943, (int)-1, (int)26276);
			return 0;
		}
		var_376_bool = var_56_bool == (int)6901;
		if(var_376_bool != 0) {
			var_377_string = "";
			func_1028(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)506238);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506239, (int)-1, (int)6902);
			@@@var_0_object:AddReply((int)506240, (int)-1, (int)6903);
			@@@var_0_object:AddReply((int)506241, (int)-1, (int)6904);
			return 0;
		}
		var_389_bool = var_56_bool == (int)26279;
		if(var_389_bool != 0) {
			var_390_string = "";
			func_1028(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)524945);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524946, (int)26281, (int)26280);
			@@@var_0_object:AddReply((int)524953, (int)26281, (int)26288);
			return 0;
		}
		var_399_bool = var_56_bool == (int)26281;
		if(var_399_bool != 0) {
			var_400_string = "";
			func_1028(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)524947);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524948, (int)26283, (int)26282);
			@@@var_0_object:AddReply((int)524954, (int)26291, (int)26290);
			return 0;
		}
		var_409_bool = var_56_bool == (int)26291;
		if(var_409_bool != 0) {
			var_410_string = "";
			func_1028(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)524955);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524956, (int)26294, (int)26292);
			@@@var_0_object:AddReply((int)524957, (int)26301, (int)26293);
			return 0;
		}
		var_419_bool = var_56_bool == (int)26301;
		if(var_419_bool != 0) {
			var_420_string = "";
			func_1028(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)524965);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524966, (int)26309, (int)26302);
			@@@var_0_object:AddReply((int)524968, (int)26298, (int)26307);
			@@@var_0_object:AddReply((int)533662, (int)26283, (int)35192);
			return 0;
		}
		var_432_bool = var_56_bool == (int)26309;
		if(var_432_bool != 0) {
			var_433_string = "";
			func_1028(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)524969);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524970, (int)26283, (int)26310);
			@@@var_0_object:AddReply((int)524972, (int)26314, (int)26313);
			@@@var_0_object:AddReply((int)524971, (int)-1, (int)26312);
			return 0;
		}
		var_445_bool = var_56_bool == (int)26314;
		if(var_445_bool != 0) {
			var_446_string = "";
			func_1028(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)524973);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524974, (int)26283, (int)26315);
			@@@var_0_object:AddReply((int)524975, (int)26283, (int)26316);
			return 0;
		}
		var_455_bool = var_56_bool == (int)26294;
		if(var_455_bool != 0) {
			var_456_string = "";
			func_1028(var_57_cvector, "Rage");
			@@@var_0_object:SetMessage((int)524958);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524959, (int)26296, (int)26295);
			@@@var_0_object:AddReply((int)524967, (int)26298, (int)26303);
			return 0;
		}
		var_465_bool = var_56_bool == (int)26296;
		if(var_465_bool != 0) {
			var_466_string = "";
			func_1028(var_57_cvector, "Rage");
			@@@var_0_object:SetMessage((int)524960);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524961, (int)26298, (int)26297);
			return 0;
		}
		var_472_bool = var_56_bool == (int)26298;
		if(var_472_bool != 0) {
			var_473_string = "";
			func_1028(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)524962);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524963, (int)26283, (int)26299);
			@@@var_0_object:AddReply((int)524964, (int)26283, (int)26300);
			return 0;
		}
		var_482_bool = var_56_bool == (int)26283;
		if(var_482_bool != 0) {
			var_483_string = "";
			func_1028(var_57_cvector, "Rage");
			@@@var_0_object:SetMessage((int)524949);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524976, (int)26322, (int)26319);
			@@@var_0_object:AddReply((int)533663, (int)26329, (int)35194);
			return 0;
		}
		var_492_bool = var_56_bool == (int)26322;
		if(var_492_bool != 0) {
			var_493_string = "";
			func_1028(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)524979);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524981, (int)26326, (int)26325);
			@@@var_0_object:AddReply((int)524992, (int)26339, (int)26338);
			return 0;
		}
		var_502_bool = var_56_bool == (int)26339;
		if(var_502_bool != 0) {
			var_503_string = "";
			func_1028(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)524993);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524994, (int)26326, (int)26340);
			return 0;
		}
		var_509_bool = var_56_bool == (int)26326;
		if(var_509_bool != 0) {
			var_510_string = "";
			func_1028(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)524982);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524984, (int)26329, (int)26328);
			@@@var_0_object:AddReply((int)524990, (int)26329, (int)26335);
			return 0;
		}
		var_519_bool = var_56_bool == (int)26329;
		if(var_519_bool != 0) {
			var_520_string = "";
			func_1028(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)524985);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524987, (int)26332, (int)26331);
			@@@var_0_object:AddReply((int)524986, (int)26332, (int)26330);
			return 0;
		}
		var_529_bool = var_56_bool == (int)26332;
		if(var_529_bool != 0) {
			var_530_string = "";
			func_1028(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)524988);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524983, (int)-1, (int)26327);
			@@@var_0_object:AddReply((int)524996, (int)26344, (int)26343);
			@@@var_0_object:AddReply((int)524989, (int)-1, (int)26333);
			@@@var_0_object:AddReply((int)524991, (int)-1, (int)26337);
			return 0;
		}
		var_545_bool = var_56_bool == (int)26344;
		if(var_545_bool != 0) {
			var_546_string = "";
			func_1028(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)524997);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524998, (int)-1, (int)26345);
			@@@var_0_object:AddReply((int)524999, (int)-1, (int)26346);
			return 0;
		}
		var_555_bool = var_56_bool == (int)6926;
		if(var_555_bool != 0) {
			var_556_string = "";
			func_1028(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)506260);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506261, (int)6924, (int)6927);
			return 0;
		}
		var_562_bool = var_56_bool == (int)6921;
		if(var_562_bool != 0) {
			var_563_string = "";
			func_1028(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)506255);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506256, (int)-1, (int)6922);
			@@@var_0_object:AddReply((int)506257, (int)6924, (int)6923);
			return 0;
		}
		var_572_bool = var_56_bool == (int)6924;
		if(var_572_bool != 0) {
			var_573_string = "";
			func_1028(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506258);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506262, (int)-1, (int)6929);
			return 0;
		}
		var_3_string = true;
		var_578_bool = 0;
		func_6611(var_578_bool);
		if(var_578_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x41b";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_6488();
		var_61_bool = var_57_cvector == (int)7594;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_6709();
		}
		var_67_bool = var_57_cvector == (int)8183;
		if(var_67_bool != 0) {
			var_68_object = Obj(); var_69_object = Obj();
			var_68_object = var_1_object;
			var_69_object = var_0_object;
			func_6721();
		}
		var_112_bool = var_57_cvector == (int)8187;
		if(var_112_bool != 0) {
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_6699();
		}
		var_130_bool = var_57_cvector == (int)8171;
		if(var_130_bool != 0) {
			var_131_object = Obj(); var_132_object = Obj();
			var_131_object = var_1_object;
			var_132_object = var_0_object;
			func_6715();
			var_135_object = Obj(); var_136_object = Obj();
			var_135_object = var_1_object;
			var_136_object = var_0_object;
			func_6744();
			var_139_object = Obj(); var_140_object = Obj();
			var_139_object = var_1_object;
			var_140_object = var_0_object;
			func_6654();
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_object;
			func_6644(var_144_object);
		}
		var_165_bool = var_57_cvector == (int)8170;
		if(var_165_bool != 0) {
			var_166_object = Obj(); var_167_object = Obj();
			var_166_object = var_1_object;
			var_167_object = var_0_object;
			func_6715();
			var_168_object = Obj(); var_169_object = Obj();
			var_168_object = var_1_object;
			var_169_object = var_0_object;
			func_6654();
			var_170_object = Obj(); var_171_object = Obj();
			var_170_object = var_1_object;
			var_171_object = var_0_object;
			func_6644(var_171_object);
		}
		var_173_bool = var_56_bool == (int)7593;
		if(var_173_bool != 0) {
			var_174_string = "";
			func_2204(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)506887);
			@@@var_0_object:ClearReplies();
			var_192_bool = 0;
			var_192_bool = 0;
			var_193_bool = 0; var_194_object = Obj();
			var_194_object = var_1_object;
			func_6980(var_194_object);
			if(var_193_bool != 0) {
				var_201_bool = 0; var_202_object = Obj();
				var_202_object = var_1_object;
				func_7004(var_202_object);
				if(var_201_bool != 0) {
					var_192_bool = 1;
				}
			}
			if(var_192_bool != 0) {
				@@@var_0_object:AddReply((int)506888, (int)7595, (int)7594);
			}
			var_210_bool = 0;
			var_210_bool = 0;
			var_211_bool = 0; var_212_object = Obj();
			var_212_object = var_1_object;
			func_6992(var_212_object);
			if(var_211_bool != 0) {
				var_217_bool = 0; var_218_object = Obj();
				var_218_object = var_1_object;
				func_7016(var_218_object);
				if(var_217_bool != 0) {
					var_210_bool = 1;
				}
			}
			if(var_210_bool != 0) {
				@@@var_0_object:AddReply((int)506918, (int)7625, (int)7624);
			}
			@@@var_0_object:AddReply((int)507400, (int)-1, (int)8166);
			return 0;
		}
		var_230_bool = var_56_bool == (int)7625;
		if(var_230_bool != 0) {
			var_231_string = "";
			func_2204(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)506919);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507401, (int)8168, (int)8167);
			return 0;
		}
		var_237_bool = var_56_bool == (int)8168;
		if(var_237_bool != 0) {
			var_238_string = "";
			func_2204(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507402);
			@@@var_0_object:ClearReplies();
			var_240_bool = 0; var_241_object = Obj();
			var_241_object = var_1_object;
			func_7112(var_241_object);
			if(var_240_bool != 0) {
				@@@var_0_object:AddReply((int)506920, (int)7628, (int)7626);
			}
			@@@var_0_object:AddReply((int)506921, (int)8169, (int)7627);
			return 0;
		}
		var_253_bool = var_56_bool == (int)8169;
		if(var_253_bool != 0) {
			var_254_string = "";
			func_2204(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507403);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507404, (int)-1, (int)8170);
			return 0;
		}
		var_260_bool = var_56_bool == (int)7628;
		if(var_260_bool != 0) {
			var_261_string = "";
			func_2204(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506922);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507405, (int)-1, (int)8171);
			return 0;
		}
		var_267_bool = var_56_bool == (int)7595;
		if(var_267_bool != 0) {
			var_268_string = "";
			func_2204(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)506889);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507406, (int)35516, (int)8172);
			@@@var_0_object:AddReply((int)506890, (int)7597, (int)7596);
			return 0;
		}
		var_277_bool = var_56_bool == (int)7597;
		if(var_277_bool != 0) {
			var_278_string = "";
			func_2204(var_57_cvector, "Rage");
			@@@var_0_object:SetMessage((int)506891);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507407, (int)8184, (int)8173);
			@@@var_0_object:AddReply((int)507417, (int)8184, (int)8185);
			@@@var_0_object:AddReply((int)533958, (int)8182, (int)35524);
			return 0;
		}
		var_290_bool = var_56_bool == (int)8184;
		if(var_290_bool != 0) {
			var_291_string = "";
			func_2204(var_57_cvector, "Rage");
			@@@var_0_object:SetMessage((int)507416);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507418, (int)-1, (int)8187);
			return 0;
		}
		var_297_bool = var_56_bool == (int)35516;
		if(var_297_bool != 0) {
			var_298_string = "";
			func_2204(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)533952);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533953, (int)8174, (int)35517);
			@@@var_0_object:AddReply((int)533954, (int)35519, (int)35518);
			return 0;
		}
		var_307_bool = var_56_bool == (int)35519;
		if(var_307_bool != 0) {
			var_308_string = "";
			func_2204(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533955);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533956, (int)8182, (int)35520);
			@@@var_0_object:AddReply((int)534427, (int)8182, (int)36054);
			return 0;
		}
		var_317_bool = var_56_bool == (int)8174;
		if(var_317_bool != 0) {
			var_318_string = "";
			func_2204(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507408);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507409, (int)8178, (int)8175);
			@@@var_0_object:AddReply((int)507410, (int)8178, (int)8176);
			@@@var_0_object:AddReply((int)507411, (int)8178, (int)8177);
			return 0;
		}
		var_330_bool = var_56_bool == (int)8178;
		if(var_330_bool != 0) {
			var_331_string = "";
			func_2204(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507412);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507413, (int)8182, (int)8181);
			@@@var_0_object:AddReply((int)534430, (int)36051, (int)36059);
			return 0;
		}
		var_340_bool = var_56_bool == (int)8182;
		if(var_340_bool != 0) {
			var_341_string = "";
			func_2204(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)507414);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534424, (int)36051, (int)36050);
			@@@var_0_object:AddReply((int)534426, (int)36051, (int)36052);
			return 0;
		}
		var_350_bool = var_56_bool == (int)36051;
		if(var_350_bool != 0) {
			var_351_string = "";
			func_2204(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)534425);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507415, (int)-1, (int)8183);
			return 0;
		}
		var_3_string = true;
		var_356_bool = 0;
		func_6611(var_356_bool);
		if(var_356_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x8b3";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_6488();
		var_61_bool = var_57_cvector == (int)11467;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_6675();
		}
		var_67_bool = var_57_cvector == (int)11241;
		if(var_67_bool != 0) {
			var_68_object = Obj(); var_69_object = Obj();
			var_68_object = var_1_object;
			var_69_object = var_0_object;
			func_6681();
		}
		var_73_bool = var_56_bool == (int)11240;
		if(var_73_bool != 0) {
			var_74_string = "";
			func_2827(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)510194);
			@@@var_0_object:ClearReplies();
			var_92_bool = 0;
			var_92_bool = 0;
			var_93_bool = 0; var_94_object = Obj();
			var_94_object = var_1_object;
			func_7028(var_94_object);
			if(var_93_bool != 0) {
				var_101_bool = 0; var_102_object = Obj();
				var_102_object = var_1_object;
				func_6932(var_102_object);
				if(var_101_bool != 0) {
					var_92_bool = 1;
				}
			}
			if(var_92_bool != 0) {
				@@@var_0_object:AddReply((int)510401, (int)11468, (int)11467);
			}
			var_110_bool = 0;
			var_110_bool = 0;
			var_111_bool = 0; var_112_object = Obj();
			var_112_object = var_1_object;
			func_6920(var_112_object);
			if(var_111_bool != 0) {
				var_117_bool = 0; var_118_object = Obj();
				var_118_object = var_1_object;
				func_6944(var_118_object);
				if(var_117_bool != 0) {
					var_110_bool = 1;
				}
			}
			if(var_110_bool != 0) {
				@@@var_0_object:AddReply((int)510195, (int)11242, (int)11241);
			}
			@@@var_0_object:AddReply((int)534399, (int)-1, (int)36018);
			return 0;
		}
		var_130_bool = var_56_bool == (int)11242;
		if(var_130_bool != 0) {
			var_131_string = "";
			func_2827(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510196);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510197, (int)11244, (int)11243);
			return 0;
		}
		var_137_bool = var_56_bool == (int)11244;
		if(var_137_bool != 0) {
			var_138_string = "";
			func_2827(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510198);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510199, (int)36021, (int)11245);
			@@@var_0_object:AddReply((int)534401, (int)11246, (int)36020);
			return 0;
		}
		var_147_bool = var_56_bool == (int)11246;
		if(var_147_bool != 0) {
			var_148_string = "";
			func_2827(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510200);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510400, (int)10992, (int)11466);
			return 0;
		}
		var_154_bool = var_56_bool == (int)10992;
		if(var_154_bool != 0) {
			var_155_string = "";
			func_2827(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509974);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509975, (int)36019, (int)10993);
			@@@var_0_object:AddReply((int)509976, (int)-1, (int)10994);
			return 0;
		}
		var_164_bool = var_56_bool == (int)36019;
		if(var_164_bool != 0) {
			var_165_string = "";
			func_2827(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534400);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541611, (int)-1, (int)43782);
			return 0;
		}
		var_171_bool = var_56_bool == (int)36021;
		if(var_171_bool != 0) {
			var_172_string = "";
			func_2827(var_57_cvector, "Angry");
			@@@var_0_object:SetMessage((int)534402);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534403, (int)-1, (int)36022);
			return 0;
		}
		var_178_bool = var_56_bool == (int)11468;
		if(var_178_bool != 0) {
			var_179_string = "";
			func_2827(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)510402);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510403, (int)11470, (int)11469);
			@@@var_0_object:AddReply((int)510418, (int)11472, (int)11485);
			return 0;
		}
		var_188_bool = var_56_bool == (int)11470;
		if(var_188_bool != 0) {
			var_189_string = "";
			func_2827(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)510404);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534404, (int)36024, (int)36023);
			@@@var_0_object:AddReply((int)510405, (int)11472, (int)11471);
			return 0;
		}
		var_198_bool = var_56_bool == (int)11472;
		if(var_198_bool != 0) {
			var_199_string = "";
			func_2827(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510406);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510407, (int)11474, (int)11473);
			@@@var_0_object:AddReply((int)510409, (int)11476, (int)11475);
			return 0;
		}
		var_208_bool = var_56_bool == (int)11476;
		if(var_208_bool != 0) {
			var_209_string = "";
			func_2827(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510410);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510412, (int)11474, (int)11478);
			return 0;
		}
		var_215_bool = var_56_bool == (int)11474;
		if(var_215_bool != 0) {
			var_216_string = "";
			func_2827(var_57_cvector, "Rage");
			@@@var_0_object:SetMessage((int)510408);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510411, (int)11480, (int)11477);
			@@@var_0_object:AddReply((int)510414, (int)11482, (int)11481);
			return 0;
		}
		var_225_bool = var_56_bool == (int)11482;
		if(var_225_bool != 0) {
			var_226_string = "";
			func_2827(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510415);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510417, (int)-1, (int)11484);
			return 0;
		}
		var_232_bool = var_56_bool == (int)11480;
		if(var_232_bool != 0) {
			var_233_string = "";
			func_2827(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510413);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510416, (int)-1, (int)11483);
			@@@var_0_object:AddReply((int)534421, (int)-1, (int)36048);
			return 0;
		}
		var_242_bool = var_56_bool == (int)36024;
		if(var_242_bool != 0) {
			var_243_string = "";
			func_2827(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534405);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534406, (int)36029, (int)36025);
			@@@var_0_object:AddReply((int)534407, (int)36027, (int)36026);
			return 0;
		}
		var_252_bool = var_56_bool == (int)36027;
		if(var_252_bool != 0) {
			var_253_string = "";
			func_2827(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534408);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534409, (int)11474, (int)36028);
			return 0;
		}
		var_259_bool = var_56_bool == (int)36029;
		if(var_259_bool != 0) {
			var_260_string = "";
			func_2827(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534410);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534411, (int)11474, (int)36030);
			@@@var_0_object:AddReply((int)534412, (int)11474, (int)36031);
			return 0;
		}
		var_3_string = true;
		var_268_bool = 0;
		func_6611(var_268_bool);
		if(var_268_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb22";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_6488();
		var_61_bool = var_57_cvector == (int)38005;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_6687();
		}
		var_67_bool = var_57_cvector == (int)38008;
		if(var_67_bool != 0) {
			var_68_object = Obj(); var_69_object = Obj();
			var_68_object = var_1_object;
			var_69_object = var_0_object;
			func_6693();
		}
		var_73_bool = var_56_bool == (int)36875;
		if(var_73_bool != 0) {
			var_74_string = "";
			func_3437(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)535203);
			@@@var_0_object:ClearReplies();
			var_92_bool = 0; var_93_object = Obj();
			var_93_object = var_1_object;
			func_6956(var_93_object);
			if(var_92_bool != 0) {
				@@@var_0_object:AddReply((int)536230, (int)38006, (int)38005);
			}
			var_103_bool = 0;
			var_103_bool = 0;
			var_104_bool = 0; var_105_object = Obj();
			var_105_object = var_1_object;
			func_6968(var_105_object);
			if(var_104_bool != 0) {
				var_110_bool = 0; var_111_object = Obj();
				var_111_object = var_1_object;
				func_7040(var_111_object);
				var_116_bool = var_110_bool == 0; //@nz
				if(var_116_bool != 0) {
					var_103_bool = 1;
				}
			}
			if(var_103_bool != 0) {
				@@@var_0_object:AddReply((int)536233, (int)12417, (int)38008);
			}
			@@@var_0_object:AddReply((int)536232, (int)-1, (int)38007);
			return 0;
		}
		var_124_bool = var_56_bool == (int)12417;
		if(var_124_bool != 0) {
			var_125_string = "";
			func_3437(var_57_cvector, "Rage");
			@@@var_0_object:SetMessage((int)511227);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511228, (int)12419, (int)12418);
			@@@var_0_object:AddReply((int)536229, (int)36888, (int)38004);
			return 0;
		}
		var_134_bool = var_56_bool == (int)36888;
		if(var_134_bool != 0) {
			var_135_string = "";
			func_3437(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535214);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535215, (int)36890, (int)36889);
			@@@var_0_object:AddReply((int)535223, (int)36898, (int)36897);
			return 0;
		}
		var_144_bool = var_56_bool == (int)36898;
		if(var_144_bool != 0) {
			var_145_string = "";
			func_3437(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)535224);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535225, (int)36900, (int)36899);
			@@@var_0_object:AddReply((int)535228, (int)36890, (int)36902);
			return 0;
		}
		var_154_bool = var_56_bool == (int)36900;
		if(var_154_bool != 0) {
			var_155_string = "";
			func_3437(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)535226);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535227, (int)-1, (int)36901);
			return 0;
		}
		var_161_bool = var_56_bool == (int)36890;
		if(var_161_bool != 0) {
			var_162_string = "";
			func_3437(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535216);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535217, (int)36892, (int)36891);
			@@@var_0_object:AddReply((int)535220, (int)36895, (int)36894);
			return 0;
		}
		var_171_bool = var_56_bool == (int)36895;
		if(var_171_bool != 0) {
			var_172_string = "";
			func_3437(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)535221);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535222, (int)-1, (int)36896);
			return 0;
		}
		var_178_bool = var_56_bool == (int)36892;
		if(var_178_bool != 0) {
			var_179_string = "";
			func_3437(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535218);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535219, (int)-1, (int)36893);
			return 0;
		}
		var_185_bool = var_56_bool == (int)12419;
		if(var_185_bool != 0) {
			var_186_string = "";
			func_3437(var_57_cvector, "Rage");
			@@@var_0_object:SetMessage((int)511229);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511230, (int)12421, (int)12420);
			@@@var_0_object:AddReply((int)536234, (int)38010, (int)38009);
			return 0;
		}
		var_195_bool = var_56_bool == (int)38010;
		if(var_195_bool != 0) {
			var_196_string = "";
			func_3437(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536235);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536236, (int)38012, (int)38011);
			@@@var_0_object:AddReply((int)536238, (int)38012, (int)38013);
			return 0;
		}
		var_205_bool = var_56_bool == (int)38012;
		if(var_205_bool != 0) {
			var_206_string = "";
			func_3437(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536237);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536239, (int)-1, (int)38015);
			@@@var_0_object:AddReply((int)536240, (int)-1, (int)38016);
			return 0;
		}
		var_215_bool = var_56_bool == (int)12421;
		if(var_215_bool != 0) {
			var_216_string = "";
			func_3437(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511231);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511232, (int)-1, (int)12422);
			@@@var_0_object:AddReply((int)536228, (int)-1, (int)38003);
			return 0;
		}
		var_225_bool = var_56_bool == (int)38006;
		if(var_225_bool != 0) {
			var_226_string = "";
			func_3437(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)536231);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535204, (int)36877, (int)36876);
			@@@var_0_object:AddReply((int)535213, (int)36877, (int)36886);
			return 0;
		}
		var_235_bool = var_56_bool == (int)36877;
		if(var_235_bool != 0) {
			var_236_string = "";
			func_3437(var_57_cvector, "Rage");
			@@@var_0_object:SetMessage((int)535205);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535206, (int)36879, (int)36878);
			@@@var_0_object:AddReply((int)535211, (int)36879, (int)36883);
			@@@var_0_object:AddReply((int)535212, (int)-1, (int)36885);
			return 0;
		}
		var_248_bool = var_56_bool == (int)36879;
		if(var_248_bool != 0) {
			var_249_string = "";
			func_3437(var_57_cvector, "Rage");
			@@@var_0_object:SetMessage((int)535207);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535208, (int)-1, (int)36880);
			@@@var_0_object:AddReply((int)535209, (int)-1, (int)36881);
			@@@var_0_object:AddReply((int)535210, (int)-1, (int)36882);
			return 0;
		}
		var_3_string = true;
		var_260_bool = 0;
		func_6611(var_260_bool);
		if(var_260_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xd84";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_6488();
		var_61_bool = var_57_cvector == (int)34757;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_6660();
		}
		var_90_bool = var_57_cvector == (int)37459;
		if(var_90_bool != 0) {
			var_91_object = Obj(); var_92_object = Obj();
			var_91_object = var_1_object;
			var_92_object = var_0_object;
			func_6660();
		}
		var_94_bool = var_57_cvector == (int)37458;
		if(var_94_bool != 0) {
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_object;
			var_96_object = var_0_object;
			func_6660();
		}
		var_98_bool = var_56_bool == (int)34750;
		if(var_98_bool != 0) {
			var_99_string = "";
			func_4008(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)533236);
			@@@var_0_object:ClearReplies();
			var_117_bool = 0; var_118_object = Obj();
			var_118_object = var_1_object;
			func_6884(var_118_object);
			if(var_117_bool != 0) {
				@@@var_0_object:AddReply((int)533237, (int)34752, (int)34751);
			}
			@@@var_0_object:AddReply((int)533244, (int)-1, (int)34758);
			@@@var_0_object:AddReply((int)535757, (int)-1, (int)37438);
			return 0;
		}
		var_135_bool = var_56_bool == (int)34752;
		if(var_135_bool != 0) {
			var_136_string = "";
			func_4008(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)533238);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535764, (int)37446, (int)37445);
			@@@var_0_object:AddReply((int)533239, (int)37440, (int)34753);
			return 0;
		}
		var_145_bool = var_56_bool == (int)37446;
		if(var_145_bool != 0) {
			var_146_string = "";
			func_4008(var_57_cvector, "Angry");
			@@@var_0_object:SetMessage((int)535765);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535766, (int)34754, (int)37447);
			return 0;
		}
		var_152_bool = var_56_bool == (int)34754;
		if(var_152_bool != 0) {
			var_153_string = "";
			func_4008(var_57_cvector, "Rage");
			@@@var_0_object:SetMessage((int)533240);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533241, (int)34756, (int)34755);
			@@@var_0_object:AddReply((int)535767, (int)37440, (int)37448);
			return 0;
		}
		var_162_bool = var_56_bool == (int)34756;
		if(var_162_bool != 0) {
			var_163_string = "";
			func_4008(var_57_cvector, "Rage");
			@@@var_0_object:SetMessage((int)533242);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535758, (int)37440, (int)37439);
			return 0;
		}
		var_169_bool = var_56_bool == (int)37440;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_4008(var_57_cvector, "Rage");
			@@@var_0_object:SetMessage((int)535759);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535760, (int)37442, (int)37441);
			@@@var_0_object:AddReply((int)535770, (int)37442, (int)37453);
			return 0;
		}
		var_179_bool = var_56_bool == (int)37442;
		if(var_179_bool != 0) {
			var_180_string = "";
			func_4008(var_57_cvector, "Rage");
			@@@var_0_object:SetMessage((int)535761);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535762, (int)37444, (int)37443);
			@@@var_0_object:AddReply((int)535771, (int)-1, (int)37455);
			return 0;
		}
		var_189_bool = var_56_bool == (int)37444;
		if(var_189_bool != 0) {
			var_190_string = "";
			func_4008(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)535763);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535772, (int)37457, (int)37456);
			@@@var_0_object:AddReply((int)535774, (int)-1, (int)37458);
			return 0;
		}
		var_199_bool = var_56_bool == (int)37457;
		if(var_199_bool != 0) {
			var_200_string = "";
			func_4008(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)535773);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533243, (int)-1, (int)34757);
			@@@var_0_object:AddReply((int)535775, (int)-1, (int)37459);
			return 0;
		}
		var_3_string = true;
		var_208_bool = 0;
		func_6611(var_208_bool);
		if(var_208_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xfbf";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_6488();
		var_61_bool = var_56_bool == (int)13469;
		if(var_61_bool != 0) {
			var_62_bool = 0; var_63_object = Obj();
			var_63_object = var_1_object;
			func_7088(var_63_object);
			if(var_62_bool != 0) {
				var_70_object = Obj(); var_71_object = Obj();
				var_70_object = var_1_object;
				var_71_object = var_0_object;
				func_6774();
				var_74_string = "";
				func_4449(var_57_cvector, "Mysterious");
				@@@var_0_object:SetMessage((int)512310);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)512311, (int)13471, (int)13470);
				@@@var_0_object:AddReply((int)512313, (int)13473, (int)13472);
				return 0;
			}
			var_98_string = "";
			func_4449(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)513777);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513778, (int)-1, (int)15014);
			@@@var_0_object:AddReply((int)541597, (int)-1, (int)43761);
			return 0;
		}
		var_107_bool = var_56_bool == (int)13473;
		if(var_107_bool != 0) {
			var_108_string = "";
			func_4449(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)512314);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512315, (int)13475, (int)13474);
			return 0;
		}
		var_114_bool = var_56_bool == (int)13475;
		if(var_114_bool != 0) {
			var_115_string = "";
			func_4449(var_57_cvector, "Rage");
			@@@var_0_object:SetMessage((int)512316);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512317, (int)13477, (int)13476);
			return 0;
		}
		var_121_bool = var_56_bool == (int)13477;
		if(var_121_bool != 0) {
			var_122_string = "";
			func_4449(var_57_cvector, "Rage");
			@@@var_0_object:SetMessage((int)512318);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512319, (int)13482, (int)13478);
			return 0;
		}
		var_128_bool = var_56_bool == (int)13482;
		if(var_128_bool != 0) {
			var_129_string = "";
			func_4449(var_57_cvector, "Rage");
			@@@var_0_object:SetMessage((int)512323);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512324, (int)13484, (int)13483);
			return 0;
		}
		var_135_bool = var_56_bool == (int)13484;
		if(var_135_bool != 0) {
			var_136_string = "";
			func_4449(var_57_cvector, "Rage");
			@@@var_0_object:SetMessage((int)512325);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512326, (int)13486, (int)13485);
			return 0;
		}
		var_142_bool = var_56_bool == (int)13486;
		if(var_142_bool != 0) {
			var_143_string = "";
			func_4449(var_57_cvector, "Rage");
			@@@var_0_object:SetMessage((int)512327);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512328, (int)-1, (int)13487);
			return 0;
		}
		var_149_bool = var_56_bool == (int)13471;
		if(var_149_bool != 0) {
			var_150_string = "";
			func_4449(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)512312);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512320, (int)13480, (int)13479);
			return 0;
		}
		var_156_bool = var_56_bool == (int)13480;
		if(var_156_bool != 0) {
			var_157_string = "";
			func_4449(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)512321);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512322, (int)-1, (int)13481);
			return 0;
		}
		var_3_string = true;
		var_162_bool = 0;
		func_6611(var_162_bool);
		if(var_162_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1178";
	
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_6488();
		var_61_bool = var_57_cvector == (int)14178;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_6818();
		}
		var_67_bool = var_57_cvector == (int)41435;
		if(var_67_bool != 0) {
			var_68_object = Obj(); var_69_object = Obj();
			var_68_object = var_1_object;
			var_69_object = var_0_object;
			func_6818();
		}
		var_71_bool = var_57_cvector == (int)35690;
		if(var_71_bool != 0) {
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_6669();
		}
		var_77_bool = var_56_bool == (int)14094;
		if(var_77_bool != 0) {
			var_78_bool = 0;
			var_78_bool = 0;
			var_79_bool = 0;
			var_79_bool = 0;
			var_80_bool = 0; var_81_object = Obj();
			var_81_object = var_1_object;
			func_7160(var_81_object);
			if(var_80_bool != 0) {
				var_88_bool = 0; var_89_object = Obj();
				var_89_object = var_1_object;
				func_7148(var_89_object);
				var_94_bool = var_88_bool == 0; //@nz
				if(var_94_bool != 0) {
					var_79_bool = 1;
				}
			}
			if(var_79_bool != 0) {
				var_95_bool = 0; var_96_object = Obj();
				var_96_object = var_1_object;
				func_7136(var_96_object);
				var_101_bool = var_95_bool == 0; //@nz
				if(var_101_bool != 0) {
					var_78_bool = 1;
				}
			}
			if(var_78_bool != 0) {
				var_102_object = Obj(); var_103_object = Obj();
				var_102_object = var_1_object;
				var_103_object = var_0_object;
				func_6812();
				var_106_string = "";
				func_4895(var_57_cvector, "Mysterious");
				@@@var_0_object:SetMessage((int)512892);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)539495, (int)41421, (int)41420);
				@@@var_0_object:AddReply((int)539501, (int)41427, (int)41426);
				return 0;
			}
			var_130_string = "";
			func_4895(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)512974);
			@@@var_0_object:ClearReplies();
			var_132_bool = 0;
			var_132_bool = 0;
			var_133_bool = 0; var_134_object = Obj();
			var_134_object = var_1_object;
			func_6896(var_134_object);
			if(var_133_bool != 0) {
				var_139_bool = 0; var_140_object = Obj();
				var_140_object = var_1_object;
				func_6908(var_140_object);
				if(var_139_bool != 0) {
					var_132_bool = 1;
				}
			}
			if(var_132_bool != 0) {
				@@@var_0_object:AddReply((int)534097, (int)38198, (int)35690);
			}
			@@@var_0_object:AddReply((int)536416, (int)-1, (int)38196);
			@@@var_0_object:AddReply((int)512975, (int)-1, (int)14180);
			return 0;
		}
		var_155_bool = var_56_bool == (int)38198;
		if(var_155_bool != 0) {
			var_156_string = "";
			func_4895(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)536418);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536419, (int)38200, (int)38199);
			@@@var_0_object:AddReply((int)536427, (int)36081, (int)38209);
			return 0;
		}
		var_165_bool = var_56_bool == (int)38200;
		if(var_165_bool != 0) {
			var_166_string = "";
			func_4895(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)536420);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536421, (int)38202, (int)38201);
			return 0;
		}
		var_172_bool = var_56_bool == (int)38202;
		if(var_172_bool != 0) {
			var_173_string = "";
			func_4895(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)536422);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536423, (int)35691, (int)38203);
			@@@var_0_object:AddReply((int)536424, (int)35691, (int)38204);
			return 0;
		}
		var_182_bool = var_56_bool == (int)35691;
		if(var_182_bool != 0) {
			var_183_string = "";
			func_4895(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)534098);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534447, (int)36081, (int)36080);
			@@@var_0_object:AddReply((int)536417, (int)38216, (int)38197);
			return 0;
		}
		var_192_bool = var_56_bool == (int)38216;
		if(var_192_bool != 0) {
			var_193_string = "";
			func_4895(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536431);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536432, (int)38212, (int)38217);
			return 0;
		}
		var_199_bool = var_56_bool == (int)36081;
		if(var_199_bool != 0) {
			var_200_string = "";
			func_4895(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)534448);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534099, (int)38212, (int)35692);
			return 0;
		}
		var_206_bool = var_56_bool == (int)38212;
		if(var_206_bool != 0) {
			var_207_string = "";
			func_4895(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)536429);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536428, (int)38206, (int)38211);
			@@@var_0_object:AddReply((int)536430, (int)38206, (int)38214);
			return 0;
		}
		var_216_bool = var_56_bool == (int)38206;
		if(var_216_bool != 0) {
			var_217_string = "";
			func_4895(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)536425);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536426, (int)-1, (int)38207);
			return 0;
		}
		var_223_bool = var_56_bool == (int)41427;
		if(var_223_bool != 0) {
			var_224_string = "";
			func_4895(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)539502);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539503, (int)41421, (int)41428);
			return 0;
		}
		var_230_bool = var_56_bool == (int)41421;
		if(var_230_bool != 0) {
			var_231_string = "";
			func_4895(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)539496);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539497, (int)41423, (int)41422);
			return 0;
		}
		var_237_bool = var_56_bool == (int)41423;
		if(var_237_bool != 0) {
			var_238_string = "";
			func_4895(var_57_cvector, "Rage");
			@@@var_0_object:SetMessage((int)539498);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539499, (int)41425, (int)41424);
			@@@var_0_object:AddReply((int)539504, (int)41431, (int)41430);
			return 0;
		}
		var_247_bool = var_56_bool == (int)41431;
		if(var_247_bool != 0) {
			var_248_string = "";
			func_4895(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)539505);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539506, (int)14175, (int)41432);
			@@@var_0_object:AddReply((int)539507, (int)14175, (int)41433);
			return 0;
		}
		var_257_bool = var_56_bool == (int)41425;
		if(var_257_bool != 0) {
			var_258_string = "";
			func_4895(var_57_cvector, "Angry");
			@@@var_0_object:SetMessage((int)539500);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512893, (int)14175, (int)14095);
			@@@var_0_object:AddReply((int)512969, (int)14175, (int)14174);
			return 0;
		}
		var_267_bool = var_56_bool == (int)14175;
		if(var_267_bool != 0) {
			var_268_string = "";
			func_4895(var_57_cvector, "Angry");
			@@@var_0_object:SetMessage((int)512970);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512971, (int)14177, (int)14176);
			return 0;
		}
		var_274_bool = var_56_bool == (int)14177;
		if(var_274_bool != 0) {
			var_275_string = "";
			func_4895(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)512972);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512973, (int)-1, (int)14178);
			@@@var_0_object:AddReply((int)539508, (int)-1, (int)41435);
			return 0;
		}
		var_3_string = true;
		var_283_bool = 0;
		func_6611(var_283_bool);
		if(var_283_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1336";
	
}


task_19_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_int, var_51_int, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	if((int)1 != 0) {
		func_6488();
		var_61_bool = var_56_bool == (int)37357;
		if(var_61_bool != 0) {
			var_62_string = "";
			func_5501(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)535671);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535672, (int)42114, (int)37358);
			@@@var_0_object:AddReply((int)540141, (int)-1, (int)42113);
			return 0;
		}
		var_87_bool = var_56_bool == (int)42114;
		if(var_87_bool != 0) {
			var_88_string = "";
			func_5501(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)540142);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540143, (int)42117, (int)42115);
			@@@var_0_object:AddReply((int)540144, (int)42117, (int)42116);
			return 0;
		}
		var_97_bool = var_56_bool == (int)42117;
		if(var_97_bool != 0) {
			var_98_string = "";
			func_5501(var_57_cvector, "Mysterious");
			@@@var_0_object:SetMessage((int)540145);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540146, (int)42120, (int)42119);
			@@@var_0_object:AddReply((int)540150, (int)42128, (int)42123);
			return 0;
		}
		var_107_bool = var_56_bool == (int)42120;
		if(var_107_bool != 0) {
			var_108_string = "";
			func_5501(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540147);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540148, (int)42122, (int)42121);
			return 0;
		}
		var_114_bool = var_56_bool == (int)42122;
		if(var_114_bool != 0) {
			var_115_string = "";
			func_5501(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540149);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540151, (int)42126, (int)42124);
			@@@var_0_object:AddReply((int)540154, (int)42128, (int)42127);
			return 0;
		}
		var_124_bool = var_56_bool == (int)42128;
		if(var_124_bool != 0) {
			var_125_string = "";
			func_5501(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540155);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540156, (int)42132, (int)42130);
			return 0;
		}
		var_131_bool = var_56_bool == (int)42126;
		if(var_131_bool != 0) {
			var_132_string = "";
			func_5501(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540153);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540157, (int)42132, (int)42131);
			return 0;
		}
		var_138_bool = var_56_bool == (int)42132;
		if(var_138_bool != 0) {
			var_139_string = "";
			func_5501(var_57_cvector, "Staring");
			@@@var_0_object:SetMessage((int)540158);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540159, (int)-1, (int)42133);
			@@@var_0_object:AddReply((int)540160, (int)-1, (int)42134);
			@@@var_0_object:AddReply((int)540161, (int)-1, (int)42136);
			return 0;
		}
		var_3_string = true;
		var_150_bool = 0;
		func_6611(var_150_bool);
		if(var_150_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1594";
	
}


task_21_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_int, var_56_int, var_57_cvector)
{
	if((int)1 != 0) {
		func_6488();
		var_61_bool = var_56_int == (int)42557;
		if(var_61_bool != 0) {
			var_62_string = "";
			func_5855(var_57_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540548);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540549, (int)-1, (int)42558);
			@@@var_0_object:AddReply((int)540797, (int)-1, (int)42846);
			return 0;
		}
		var_3_string = true;
		var_86_bool = 0;
		func_6611(var_86_bool);
		if(var_86_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x16f6";
	
}


task_22_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector, var_56_int)
{
	var_58_bool = var_56_int == (int)10;
	if(var_58_bool != 0) {
		func_5991();
		var_60_bool = 0;
		var_60_bool = 0;
		var_61_bool = 0;
		func_6212(var_61_bool);
		if(var_61_bool != 0) {
			var_64_bool = 0;
			func_5960(var_64_bool);
			if(var_64_bool != 0) {
				var_60_bool = 1;
			}
		}
		if(var_60_bool != 0) {
			var_81_bool = 0;
			func_5940(var_81_bool);
			if(var_81_bool != 0) {
				var_100_bool = 0; var_101_object = Obj();
				func_6495(Obj());
				var_102_object = var_101_object;
				func_6362(var_100_bool, var_101_object);
			}
		} else {
			func_5955(var_56_int);
			func_5982();
		}
	}
	return 0;
	
}


task_22_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector)
{
	func_6173();
	func_5991();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_22_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector)
{
	StopGroup0();
	func_5991();
	var_57_string = "";
	func_6442("Neutral");
	func_5982();
	return 0;
}


task_22_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector, var_56_bool)
{
	var_57_bool = var_56_bool;
	if(var_57_bool != 0) {
		func_5982();
	} else {
		var_63_string = "";
		func_6442("Neutral");
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
		func_6173();
		var_60_bool = 0; var_61_object = Obj();
		var_56_object = var_61_object;
		func_6203(var_60_bool, var_61_object);
		EventEnable(0);
		var_74_object = Obj();
		var_56_object = var_74_object;
		func_7360(var_58_bool, var_74_object);
		var_1172_string = "";
		func_6442("Neutral");
		func_5991();
		func_5982();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector)
{
	var_56_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_5926(var_55_cvector);
	return 0;
}


func_0(var_0_object, var_77_int, var_78_object)
{
	var_80_object = Obj(); var_81_bool = 0; var_82_int = 0; var_83_bool = 0; var_84_object = Obj(); var_85_bool = 0; var_86_int = 0; var_87_bool = 0;
	var_0_object = var_78_object;
	var_88_bool = 0; var_89_object = Obj(); var_90_float = 0;
	var_78_object = var_89_object;
	func_6217(var_88_bool, var_89_object, (float)70.0);
	var_135_bool = var_88_bool == 0; //@nz
	if(var_135_bool != 0) {
		var_77_int = -2;
		return 8;
	}
	CreateDialog(var_84_object);
	var_136_int = 0;
	func_6605(var_136_int);
	@@var_84_object:SetNPCName(var_136_int);
	var_137_int = 0;
	func_6603(var_137_int);
	@@var_84_object:SetNPCDescription(var_137_int);
	var_138_string = "";
	func_6607(var_138_string);
	@@var_84_object:SetPhoto(var_138_string);
	var_139_string = "";
	func_6609(var_139_string);
	@@var_84_object:SetPhoto2(var_139_string);
	var_140_int = 0;
	func_7269(var_140_int);
	@@var_84_object:SetPlayerName(var_140_int);
	IsOverrideActive(var_85_bool);
	var_148_bool = var_85_bool;
	if(var_148_bool != 0) {
		var_77_int = -2;
		return 8;
	}
	DoDialog(var_84_object);
	var_149_bool = 0; var_150_object = Obj();
	func_6495(Obj());
	var_151_object = var_150_object;
	func_6304(var_149_bool, var_150_object);
	var_244_object = Obj(); var_245_object = Obj();
	var_78_object = var_244_object;
	var_84_object = var_245_object;
	TaskCall(1);
	func_81(var_246_object, var_247_object, var_248_string, var_249_bool, var_244_object, var_245_object);
	TaskReturn();
	@@var_84_object:IsDialogEnd(var_87_bool);
	
Label_63:
	var_303_bool = var_87_bool == 0; //@nz
	if(var_303_bool != 0) {
		sync();
		@@var_84_object:IsDialogEnd(var_87_bool);
		goto Label_63;
	}
	var_78_object = Obj();
	func_6286();
	StopDialog(var_84_object);
	@@var_84_object:GetReturnValue((int)-1);
	var_86_int = var_77_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_513(var_2_object, var_766_string)
{
	var_767_bool = 0;
	func_6611(var_767_bool);
	var_768_bool = var_767_bool == 0; //@nz
	if(var_768_bool != 0) {
		return 0;
	}
	var_769_bool = var_766_string == var_2_object;
	if(var_769_bool != 0) {
		return 0;
	}
	var_770_string = ""; var_771_bool = 0;
	var_766_string = var_770_string;
	var_773_bool = var_766_string == "";
	if(var_773_bool != 0) {
		var_771_bool = 0;
	} else {
		var_771_bool = 1;
	}
	func_6458(var_770_string, var_771_bool);
	var_2_object = var_766_string;
	return 0;
	
}


func_1028(var_2_object, var_357_string)
{
	var_358_bool = 0;
	func_6611(var_358_bool);
	var_359_bool = var_358_bool == 0; //@nz
	if(var_359_bool != 0) {
		return 0;
	}
	var_360_bool = var_357_string == var_2_object;
	if(var_360_bool != 0) {
		return 0;
	}
	var_361_string = ""; var_362_bool = 0;
	var_357_string = var_361_string;
	var_364_bool = var_357_string == "";
	if(var_364_bool != 0) {
		var_362_bool = 0;
	} else {
		var_362_bool = 1;
	}
	func_6458(var_361_string, var_362_bool);
	var_2_object = var_357_string;
	return 0;
	
}


func_6660()
{
	SetVariable("d7q03", (int)2);
	func_7198();
	return 0;
}


func_7172()
{
	var_115_object = Obj(); var_116_object = Obj();
	CreateDiaryEntry(var_116_object, (int)781, (int)2, (int)542086);
	var_120_bool = 0; var_121_object = Obj(); var_122_int = 0;
	var_116_object = var_121_object;
	func_7224(var_120_bool, var_121_object, (int)11);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6669()
{
	SetVariable("ood10Maria2", (int)1);
	return 0;
}


func_7185()
{
	var_88_object = Obj(); var_89_object = Obj();
	CreateDiaryEntry(var_89_object, (int)134, (int)2, (int)515285);
	var_93_bool = 0; var_94_object = Obj(); var_95_int = 0;
	var_89_object = var_94_object;
	func_7224(var_93_bool, var_94_object, (int)11);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6675()
{
	SetVariable("ood3Maria1", (int)1);
	return 0;
}


func_6681()
{
	SetVariable("ood3Maria2", (int)1);
	return 0;
}


func_6171(var_95_bool)
{
	var_95_bool = 1;
	return 0;
}


func_6173()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_7198()
{
	var_66_object = Obj(); var_67_object = Obj();
	CreateDiaryEntry(var_67_object, (int)643, (int)2, (int)533277);
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0;
	var_67_object = var_72_object;
	func_7224(var_71_bool, var_72_object, (int)641);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6687()
{
	SetVariable("ood4Maria1", (int)1);
	return 0;
}


func_6178(var_71_float, var_72_object)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	GetPosition(var_76_cvector);
	@@var_72_object:GetPosition(var_77_cvector);
	var_78_cvector = var_77_cvector - var_76_cvector;
	var_71_float = var_78_cvector | var_78_cvector;
	return 6;
}


func_6693()
{
	SetVariable("ood4Maria2", (int)1);
	return 0;
}


func_6186(var_150_object, var_151_string, var_152_int)
{
	var_153_int = 0; var_154_int = 0;
	@@var_150_object:GetProperty(var_151_string, var_154_int);
	var_155_int = var_154_int + var_152_int;
	@@var_150_object:SetProperty(var_151_string, var_155_int);
	return 2;
}


func_6699()
{
	func_7172();
	var_123_bool = 0; var_124_string = ""; var_125_string = "";
	func_6547(var_123_bool, "quest_d2_02", "fail");
	return 0;
}


func_7211(var_80_object)
{
	var_81_object = Obj(); var_82_object = Obj();
	GetDiaryRoot(var_82_object);
	var_83_bool = var_82_object == 0; //@nz
	if(var_83_bool != 0) {
		Trace("Can't retrieve diary root");
		var_80_object = 0;
		return 2;
	}
	var_82_object = var_80_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_6193(var_64_bool, var_65_cvector)
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


func_6709()
{
	SetVariable("ood2Maria1", (int)1);
	return 0;
}


func_7224(var_71_bool, var_72_object, var_73_int)
{
	var_74_object = Obj(); var_75_object = Obj(); var_76_int = 0; var_77_object = Obj(); var_78_object = Obj(); var_79_int = 0;
	func_7211(Obj());
	var_80_object = var_77_object;
	@@var_77_object:Find(var_73_int, var_78_object);
	var_85_bool = var_78_object == 0; //@nz
	if(var_85_bool != 0) {
		var_87_int = "Can't find diary parent with id: " + var_73_int;
		Trace(var_87_int);
		var_71_bool = 0;
		return 6;
	}
	@@var_78_object:AddChild(var_72_object);
	SendWorldWndMessage((int)7);
	@@var_72_object:GetCategory(var_79_int);
	SetDiarySection(var_79_int);
	var_71_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_6715()
{
	SetVariable("ood2Maria2", (int)1);
	return 0;
}


func_6203(var_60_bool, var_61_object)
{
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
	@@var_61_object:GetPosition(var_63_cvector);
	var_64_bool = 0; var_65_cvector = CVector(0,0,0);
	var_63_cvector = var_65_cvector;
	func_6193(var_64_bool, var_65_cvector);
	var_64_bool = var_60_bool;
	return 2;
}


func_2113(var_0_object, var_1_object, var_2_object, var_3_string, var_483_object, var_484_object)
{
	var_0_object = var_484_object;
	var_1_object = var_483_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_490_string = "";
		func_2204(var_484_object, "Staring");
		@@@var_0_object:SetMessage((int)506887);
		@@@var_0_object:ClearReplies();
		var_499_bool = 0;
		var_499_bool = 0;
		var_500_bool = 0; var_501_object = Obj();
		var_501_object = var_1_object;
		func_6980(var_501_object);
		if(var_500_bool != 0) {
			var_506_bool = 0; var_507_object = Obj();
			var_507_object = var_1_object;
			func_7004(var_507_object);
			if(var_506_bool != 0) {
				var_499_bool = 1;
			}
		}
		if(var_499_bool != 0) {
			@@@var_0_object:AddReply((int)506888, (int)7595, (int)7594);
		}
		var_515_bool = 0;
		var_515_bool = 0;
		var_516_bool = 0; var_517_object = Obj();
		var_517_object = var_1_object;
		func_6992(var_517_object);
		if(var_516_bool != 0) {
			var_522_bool = 0; var_523_object = Obj();
			var_523_object = var_1_object;
			func_7016(var_523_object);
			if(var_522_bool != 0) {
				var_515_bool = 1;
			}
		}
		if(var_515_bool != 0) {
			@@@var_0_object:AddReply((int)506918, (int)7625, (int)7624);
		}
		@@@var_0_object:AddReply((int)507400, (int)-1, (int)8166);
		goto Label_2174;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x845";
	}
Label_2174:
	var_534_bool = 0;
	func_6611(var_534_bool);
	if(var_534_bool != 0) {

	Label_2178:
		lshWaitForAnimEnd();
		var_535_string = var_3_string;
		if(var_535_string != 0) {
		} else {
			var_536_string = "";
			var_536_string = var_2_object;
			func_6442(var_536_string);
			goto Label_2178;
	}
		PlayAnimation("all", "idle");

	Label_2193:
		WaitForAnimEnd();
		var_539_string = var_3_string;
		if(var_539_string != 0) {
			goto Label_2203;
		}
		PlayAnimation("all", "idle");
		goto Label_2193;
	}
	goto Label_2203;
	
Label_2203:
	return 0;
	
}


func_6721()
{
	var_70_object = Obj(); var_71_object = Obj();
	SetVariable("d2q02", (int)4);
	func_7252(Obj());
	var_74_object = var_71_object;
	var_85_float = 0;
	func_6559(var_85_float);
	@@var_71_object:AddMark("d2q02MariaGotoPetr", "pt_map_petr", (int)0, (int)515275, var_85_float);
	func_7185();
	return 2;
}
EMIT "Stack[-1] = 0";


func_6212(var_57_bool)
{
	var_58_bool = 0; var_59_bool = 0;
	IsLoaded(var_59_bool);
	var_59_bool = var_57_bool;
	return 2;
}


func_6217(var_88_bool, var_89_object, var_90_float)
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
	func_6501(var_115_cvector, var_116_cvector);
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
	func_6611(var_131_bool);
	if(var_131_bool != 0) {
	} else {
		HasAnimationTrack(var_108_bool, "head");
		var_133_bool = var_108_bool;
		if(var_133_bool == 0) goto Label_6280;
		LookAsyncCamera("head");
	}
Label_6280:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_88_bool = 1;
	return 18;
	
}


func_4687(var_0_object, var_952_int, var_953_object)
{
	var_955_object = Obj(); var_956_bool = 0; var_957_int = 0; var_958_bool = 0; var_959_object = Obj(); var_960_bool = 0; var_961_int = 0; var_962_bool = 0;
	var_0_object = var_953_object;
	var_963_bool = 0; var_964_object = Obj(); var_965_float = 0;
	var_953_object = var_964_object;
	func_6217(var_963_bool, var_964_object, (float)70.0);
	var_966_bool = var_963_bool == 0; //@nz
	if(var_966_bool != 0) {
		var_952_int = -2;
		return 8;
	}
	CreateDialog(var_959_object);
	var_967_int = 0;
	func_6605(var_967_int);
	@@var_959_object:SetNPCName(var_967_int);
	var_968_int = 0;
	func_6603(var_968_int);
	@@var_959_object:SetNPCDescription(var_968_int);
	var_969_string = "";
	func_6607(var_969_string);
	@@var_959_object:SetPhoto(var_969_string);
	var_970_string = "";
	func_6609(var_970_string);
	@@var_959_object:SetPhoto2(var_970_string);
	var_971_int = 0;
	func_7269(var_971_int);
	@@var_959_object:SetPlayerName(var_971_int);
	IsOverrideActive(var_960_bool);
	var_972_bool = var_960_bool;
	if(var_972_bool != 0) {
		var_952_int = -2;
		return 8;
	}
	DoDialog(var_959_object);
	var_973_bool = 0; var_974_object = Obj();
	func_6495(Obj());
	var_975_object = var_974_object;
	func_6304(var_973_bool, var_974_object);
	var_976_object = Obj(); var_977_object = Obj();
	var_953_object = var_976_object;
	var_959_object = var_977_object;
	TaskCall(17);
	func_4768(var_978_object, var_979_object, var_980_string, var_981_bool, var_976_object, var_977_object);
	TaskReturn();
	@@var_959_object:IsDialogEnd(var_962_bool);
	
Label_4750:
	var_1056_bool = var_962_bool == 0; //@nz
	if(var_1056_bool != 0) {
		sync();
		@@var_959_object:IsDialogEnd(var_962_bool);
		goto Label_4750;
	}
	var_953_object = Obj();
	func_6286();
	StopDialog(var_959_object);
	@@var_959_object:GetReturnValue((int)-1);
	var_961_int = var_952_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_244_object, var_245_object)
{
	var_0_object = var_245_object;
	var_1_object = var_244_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_251_object = Obj(); var_252_object = Obj();
		var_251_object = var_1_object;
		var_252_object = var_0_object;
		func_6780();
		var_255_string = "";
		func_154(var_245_object, "Staring");
		@@@var_0_object:SetMessage((int)500072);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)500073, (int)87, (int)85);
		@@@var_0_object:AddReply((int)500074, (int)88, (int)86);
		@@@var_0_object:AddReply((int)500086, (int)87, (int)98);
		@@@var_0_object:AddReply((int)500087, (int)87, (int)99);
		goto Label_124;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_124:
	var_285_bool = 0;
	func_6611(var_285_bool);
	if(var_285_bool != 0) {

	Label_128:
		lshWaitForAnimEnd();
		var_286_string = var_3_string;
		if(var_286_string != 0) {
		} else {
			var_287_string = "";
			var_287_string = var_2_object;
			func_6442(var_287_string);
			goto Label_128;
	}
		PlayAnimation("all", "idle");

	Label_143:
		WaitForAnimEnd();
		var_300_string = var_3_string;
		if(var_300_string != 0) {
			goto Label_153;
		}
		PlayAnimation("all", "idle");
		goto Label_143;
	}
	goto Label_153;
	
Label_153:
	return 0;
	
}


func_7252(var_74_object)
{
	var_75_object = Obj(); var_76_object = Obj(); var_77_object = Obj(); var_78_object = Obj();
	GetMainOutdoorScene(var_77_object);
	var_79_bool = var_77_object == 0; //@ne
	if(var_79_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_78_object = 0;
		var_78_object = var_74_object;
		return 4;
	}
	@@var_77_object:GetMap(var_78_object);
	var_78_object = var_74_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5716(var_0_object, var_1116_int, var_1117_object)
{
	var_1119_object = Obj(); var_1120_bool = 0; var_1121_int = 0; var_1122_bool = 0; var_1123_object = Obj(); var_1124_bool = 0; var_1125_int = 0; var_1126_bool = 0;
	var_0_object = var_1117_object;
	var_1127_bool = 0; var_1128_object = Obj(); var_1129_float = 0;
	var_1117_object = var_1128_object;
	func_6217(var_1127_bool, var_1128_object, (float)70.0);
	var_1130_bool = var_1127_bool == 0; //@nz
	if(var_1130_bool != 0) {
		var_1116_int = -2;
		return 8;
	}
	CreateDialog(var_1123_object);
	var_1131_int = 0;
	func_6605(var_1131_int);
	@@var_1123_object:SetNPCName(var_1131_int);
	var_1132_int = 0;
	func_6603(var_1132_int);
	@@var_1123_object:SetNPCDescription(var_1132_int);
	var_1133_string = "";
	func_6607(var_1133_string);
	@@var_1123_object:SetPhoto(var_1133_string);
	var_1134_string = "";
	func_6609(var_1134_string);
	@@var_1123_object:SetPhoto2(var_1134_string);
	var_1135_int = 0;
	func_7269(var_1135_int);
	@@var_1123_object:SetPlayerName(var_1135_int);
	IsOverrideActive(var_1124_bool);
	var_1136_bool = var_1124_bool;
	if(var_1136_bool != 0) {
		var_1116_int = -2;
		return 8;
	}
	DoDialog(var_1123_object);
	var_1137_bool = 0; var_1138_object = Obj();
	func_6495(Obj());
	var_1139_object = var_1138_object;
	func_6304(var_1137_bool, var_1138_object);
	var_1140_object = Obj(); var_1141_object = Obj();
	var_1117_object = var_1140_object;
	var_1123_object = var_1141_object;
	TaskCall(21);
	func_5797(var_1142_object, var_1143_object, var_1144_string, var_1145_bool, var_1140_object, var_1141_object);
	TaskReturn();
	@@var_1123_object:IsDialogEnd(var_1126_bool);
	
Label_5779:
	var_1170_bool = var_1126_bool == 0; //@nz
	if(var_1170_bool != 0) {
		sync();
		@@var_1123_object:IsDialogEnd(var_1126_bool);
		goto Label_5779;
	}
	var_1117_object = Obj();
	func_6286();
	StopDialog(var_1123_object);
	@@var_1123_object:GetReturnValue((int)-1);
	var_1125_int = var_1116_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6744()
{
	SetVariable("d2q03MariaGotoViktor", (int)1);
	return 0;
}


func_6750()
{
	SetVariable("KnowViktor", (int)1);
	return 0;
}


func_2655(var_0_object, var_546_int, var_547_object)
{
	var_549_object = Obj(); var_550_bool = 0; var_551_int = 0; var_552_bool = 0; var_553_object = Obj(); var_554_bool = 0; var_555_int = 0; var_556_bool = 0;
	var_0_object = var_547_object;
	var_557_bool = 0; var_558_object = Obj(); var_559_float = 0;
	var_547_object = var_558_object;
	func_6217(var_557_bool, var_558_object, (float)70.0);
	var_560_bool = var_557_bool == 0; //@nz
	if(var_560_bool != 0) {
		var_546_int = -2;
		return 8;
	}
	CreateDialog(var_553_object);
	var_561_int = 0;
	func_6605(var_561_int);
	@@var_553_object:SetNPCName(var_561_int);
	var_562_int = 0;
	func_6603(var_562_int);
	@@var_553_object:SetNPCDescription(var_562_int);
	var_563_string = "";
	func_6607(var_563_string);
	@@var_553_object:SetPhoto(var_563_string);
	var_564_string = "";
	func_6609(var_564_string);
	@@var_553_object:SetPhoto2(var_564_string);
	var_565_int = 0;
	func_7269(var_565_int);
	@@var_553_object:SetPlayerName(var_565_int);
	IsOverrideActive(var_554_bool);
	var_566_bool = var_554_bool;
	if(var_566_bool != 0) {
		var_546_int = -2;
		return 8;
	}
	DoDialog(var_553_object);
	var_567_bool = 0; var_568_object = Obj();
	func_6495(Obj());
	var_569_object = var_568_object;
	func_6304(var_567_bool, var_568_object);
	var_570_object = Obj(); var_571_object = Obj();
	var_547_object = var_570_object;
	var_553_object = var_571_object;
	TaskCall(9);
	func_2736(var_572_object, var_573_object, var_574_string, var_575_bool, var_570_object, var_571_object);
	TaskReturn();
	@@var_553_object:IsDialogEnd(var_556_bool);
	
Label_2718:
	var_629_bool = var_556_bool == 0; //@nz
	if(var_629_bool != 0) {
		sync();
		@@var_553_object:IsDialogEnd(var_556_bool);
		goto Label_2718;
	}
	var_547_object = Obj();
	func_6286();
	StopDialog(var_553_object);
	@@var_553_object:GetReturnValue((int)-1);
	var_555_int = var_546_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6756()
{
	SetVariable("KnowAlexandr", (int)1);
	return 0;
}


func_7269(var_140_int)
{
	var_141_int = 0; var_142_int = 0;
	GetVariable("branch", var_142_int);
	var_145_bool = var_142_int == (int)0;
	if(var_145_bool != 0) {
		var_140_int = 1;
		return 2;
	EMIT "GOTO 0x1c74";
	}
	var_147_bool = var_142_int == (int)1;
	if(var_147_bool != 0) {
		var_140_int = 2;
		return 2;
	}
	var_140_int = 3;
	return 2;
}


func_6762()
{
	SetVariable("ood6Maria1", (int)1);
	return 0;
}


func_6768()
{
	SetVariable("ood6Maria2", (int)1);
	return 0;
}


func_6774()
{
	SetVariable("ood8Maria1", (int)1);
	return 0;
}


func_7286(var_74_object, var_75_bool, var_76_int)
{
	@@var_74_object:add((int)6);
	@@var_74_object:add((int)26);
	@@var_74_object:add((int)2);
	@@var_74_object:add((int)22);
	var_82_bool = var_75_bool == (bool)0;
	if(var_82_bool != 0) {
		@@var_74_object:add((int)15);
		@@var_74_object:add((int)5);
		@@var_74_object:add((int)16);
	} else {
		var_87_bool = var_76_int != (int)0;
		if(var_87_bool == 0) goto Label_7318;
		@@var_74_object:add((int)15);
	}
Label_7318:
	return 0;
	
}


func_6780()
{
	SetVariable("KnowMaria", (int)1);
	return 0;
}


func_6786()
{
	SetVariable("resque_list", (int)1);
	func_7356();
	return 0;
}


func_6795(var_101_object)
{
	@@var_101_object:SetReturnValue((int)2000);
	return 0;
}


func_6286()
{
	var_305_bool = 0; var_306_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_308_bool = 0;
	func_6611(var_308_bool);
	if(var_308_bool != 0) {
	} else {
		HasAnimationTrack(var_306_bool, "head");
		var_310_bool = var_306_bool;
		if(var_310_bool == 0) goto Label_6303;
		UnlookAsync("head");
	}
Label_6303:
	return 2;
	
}


func_6800()
{
	SetVariable("ood1Maria5", (int)1);
	return 0;
}


func_6806()
{
	SetVariable("d6MariaVisit", (int)1);
	return 0;
}


func_7319(var_90_int)
{
	var_91_int = 0; var_92_int = 0;
	var_94_int = "vol_" + var_90_int;
	GetVariable(var_94_int, var_92_int);
	var_96_int = "vol_" + var_90_int;
	var_98_int = var_92_int | (int)8;
	SetVariable(var_96_int, var_98_int);
	return 2;
}


func_154(var_2_object, var_255_string)
{
	var_256_bool = 0;
	func_6611(var_256_bool);
	var_257_bool = var_256_bool == 0; //@nz
	if(var_257_bool != 0) {
		return 0;
	}
	var_258_bool = var_255_string == var_2_object;
	if(var_258_bool != 0) {
		return 0;
	}
	var_259_string = ""; var_260_bool = 0;
	var_255_string = var_259_string;
	var_262_bool = var_255_string == "";
	if(var_262_bool != 0) {
		var_260_bool = 0;
	} else {
		var_260_bool = 1;
	}
	func_6458(var_259_string, var_260_bool);
	var_2_object = var_255_string;
	return 0;
	
}


func_2204(var_2_object, var_490_string)
{
	var_491_bool = 0;
	func_6611(var_491_bool);
	var_492_bool = var_491_bool == 0; //@nz
	if(var_492_bool != 0) {
		return 0;
	}
	var_493_bool = var_490_string == var_2_object;
	if(var_493_bool != 0) {
		return 0;
	}
	var_494_string = ""; var_495_bool = 0;
	var_490_string = var_494_string;
	var_497_bool = var_490_string == "";
	if(var_497_bool != 0) {
		var_495_bool = 0;
	} else {
		var_495_bool = 1;
	}
	func_6458(var_494_string, var_495_bool);
	var_2_object = var_490_string;
	return 0;
	
}


func_6812()
{
	SetVariable("ood10Maria1", (int)1);
	return 0;
}


func_6304(var_149_bool, var_150_object)
{
	var_154_int = 0; var_155_int = 0; var_156_int = 0; var_157_int = 0;
	GetVariable("voice_common", var_156_int);
	var_159_int = var_156_int;
	if(var_159_int != 0) {
		var_160_bool = 0; var_161_object = Obj();
		var_150_object = var_161_object;
		func_6362(var_160_bool, var_161_object);
		var_190_bool = var_160_bool == 0; //@nz
		if(var_190_bool != 0) {
			var_191_bool = 0; var_192_object = Obj();
			var_150_object = var_192_object;
			func_6399(var_191_bool, var_192_object);
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
		func_6399(var_236_bool, var_237_object);
		var_238_bool = var_236_bool == 0; //@nz
		if(var_238_bool != 0) {
			var_239_bool = 0; var_240_object = Obj();
			var_150_object = var_240_object;
			func_6362(var_239_bool, var_240_object);
			var_241_bool = var_239_bool == 0; //@nz
			if(var_241_bool != 0) {
				var_149_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_6360;
	
Label_6360:
	var_149_bool = 1;
	return 4;
	
}


func_4768(var_0_object, var_1_object, var_2_object, var_3_string, var_976_object, var_977_object)
{
	var_0_object = var_977_object;
	var_1_object = var_976_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_983_bool = 0;
		var_983_bool = 0;
		var_984_bool = 0;
		var_984_bool = 0;
		var_985_bool = 0; var_986_object = Obj();
		var_986_object = var_1_object;
		func_7160(var_986_object);
		if(var_985_bool != 0) {
			var_991_bool = 0; var_992_object = Obj();
			var_992_object = var_1_object;
			func_7148(var_992_object);
			var_997_bool = var_991_bool == 0; //@nz
			if(var_997_bool != 0) {
				var_984_bool = 1;
			}
		}
		if(var_984_bool != 0) {
			var_998_bool = 0; var_999_object = Obj();
			var_999_object = var_1_object;
			func_7136(var_999_object);
			var_1004_bool = var_998_bool == 0; //@nz
			if(var_1004_bool != 0) {
				var_983_bool = 1;
			}
		}
		if(var_983_bool != 0) {
			var_1005_object = Obj(); var_1006_object = Obj();
			var_1005_object = var_1_object;
			var_1006_object = var_0_object;
			func_6812();
			var_1009_string = "";
			func_4895(var_977_object, "Mysterious");
			@@@var_0_object:SetMessage((int)512892);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539495, (int)41421, (int)41420);
			@@@var_0_object:AddReply((int)539501, (int)41427, (int)41426);
		} else {
				var_1032_string = "";
				func_4895(var_977_object, "Mysterious");
				@@@var_0_object:SetMessage((int)512974);
				@@@var_0_object:ClearReplies();
				var_1034_bool = 0;
				var_1034_bool = 0;
				var_1035_bool = 0; var_1036_object = Obj();
				var_1036_object = var_1_object;
				func_6896(var_1036_object);
				if(var_1035_bool != 0) {
					var_1041_bool = 0; var_1042_object = Obj();
					var_1042_object = var_1_object;
					func_6908(var_1042_object);
					if(var_1041_bool != 0) {
						var_1034_bool = 1;
					}
				}
				if(var_1034_bool != 0) {
					@@@var_0_object:AddReply((int)534097, (int)38198, (int)35690);
				}
				@@@var_0_object:AddReply((int)536416, (int)-1, (int)38196);
				@@@var_0_object:AddReply((int)512975, (int)-1, (int)14180);
				goto Label_4865;
		}
	}
Label_4865:
	var_1024_bool = 0;
	func_6611(var_1024_bool);
	if(var_1024_bool != 0) {

	Label_4869:
		lshWaitForAnimEnd();
		var_1025_string = var_3_string;
		if(var_1025_string != 0) {
		} else {
			var_1026_string = "";
			var_1026_string = var_2_object;
			func_6442(var_1026_string);
			goto Label_4869;
	}
		PlayAnimation("all", "idle");

	Label_4884:
		WaitForAnimEnd();
		var_1029_string = var_3_string;
		if(var_1029_string != 0) {
			goto Label_4894;
		}
		PlayAnimation("all", "idle");
		goto Label_4884;

	}
	goto Label_4894;
	
Label_4894:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x12a4";


func_6818()
{
	SetVariable("d10q01MariaSavePetr", (int)1);
	return 0;
}


func_7331()
{
	var_66_object = Obj(); var_67_int = 0; var_68_int = 0; var_69_int = 0; var_70_object = Obj(); var_71_int = 0; var_72_int = 0; var_73_int = 0;
	CreateIntVector(var_70_object);
	var_74_object = Obj(); var_75_bool = 0; var_76_int = 0;
	var_70_object = var_74_object;
	func_7286(var_74_object, (bool)0, (int)-1);
	@@var_70_object:size(var_71_int);
	var_72_int = 0;
	
Label_7343:
	var_89_bool = var_72_int < var_71_int;
	if(var_89_bool != 0) {
		@@var_70_object:get(var_73_int, var_72_int);
		var_90_int = 0;
		var_73_int = var_90_int;
		func_7319(var_90_int);
		var_72_int = var_72_int + (int)1;
		goto Label_7343;
	}
	return 8;
}
EMIT "Stack[-4] = 0";


func_5797(var_0_object, var_1_object, var_2_object, var_3_string, var_1140_object, var_1141_object)
{
	var_0_object = var_1141_object;
	var_1_object = var_1140_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1147_string = "";
		func_5855(var_1141_object, "Neutral");
		@@@var_0_object:SetMessage((int)540548);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540549, (int)-1, (int)42558);
		@@@var_0_object:AddReply((int)540797, (int)-1, (int)42846);
		goto Label_5825;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x16a9";
	}
Label_5825:
	var_1162_bool = 0;
	func_6611(var_1162_bool);
	if(var_1162_bool != 0) {

	Label_5829:
		lshWaitForAnimEnd();
		var_1163_string = var_3_string;
		if(var_1163_string != 0) {
		} else {
			var_1164_string = "";
			var_1164_string = var_2_object;
			func_6442(var_1164_string);
			goto Label_5829;
	}
		PlayAnimation("all", "idle");

	Label_5844:
		WaitForAnimEnd();
		var_1167_string = var_3_string;
		if(var_1167_string != 0) {
			goto Label_5854;
		}
		PlayAnimation("all", "idle");
		goto Label_5844;
	}
	goto Label_5854;
	
Label_5854:
	return 0;
	
}


func_6824(var_409_bool)
{
	var_411_int = 0; var_412_string = "";
	func_6511(var_411_int, "d1q01RescueListBadReply");
	var_414_bool = var_411_int != (int)0;
	if(var_414_bool != 0) {
		var_409_bool = 1;
		return 0;
	}
	var_409_bool = 0;
	return 0;
}


func_2736(var_0_object, var_1_object, var_2_object, var_3_string, var_570_object, var_571_object)
{
	var_0_object = var_571_object;
	var_1_object = var_570_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_577_string = "";
		func_2827(var_571_object, "Mysterious");
		@@@var_0_object:SetMessage((int)510194);
		@@@var_0_object:ClearReplies();
		var_586_bool = 0;
		var_586_bool = 0;
		var_587_bool = 0; var_588_object = Obj();
		var_588_object = var_1_object;
		func_7028(var_588_object);
		if(var_587_bool != 0) {
			var_593_bool = 0; var_594_object = Obj();
			var_594_object = var_1_object;
			func_6932(var_594_object);
			if(var_593_bool != 0) {
				var_586_bool = 1;
			}
		}
		if(var_586_bool != 0) {
			@@@var_0_object:AddReply((int)510401, (int)11468, (int)11467);
		}
		var_602_bool = 0;
		var_602_bool = 0;
		var_603_bool = 0; var_604_object = Obj();
		var_604_object = var_1_object;
		func_6920(var_604_object);
		if(var_603_bool != 0) {
			var_609_bool = 0; var_610_object = Obj();
			var_610_object = var_1_object;
			func_6944(var_610_object);
			if(var_609_bool != 0) {
				var_602_bool = 1;
			}
		}
		if(var_602_bool != 0) {
			@@@var_0_object:AddReply((int)510195, (int)11242, (int)11241);
		}
		@@@var_0_object:AddReply((int)534399, (int)-1, (int)36018);
		goto Label_2797;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xab4";
	}
Label_2797:
	var_621_bool = 0;
	func_6611(var_621_bool);
	if(var_621_bool != 0) {

	Label_2801:
		lshWaitForAnimEnd();
		var_622_string = var_3_string;
		if(var_622_string != 0) {
		} else {
			var_623_string = "";
			var_623_string = var_2_object;
			func_6442(var_623_string);
			goto Label_2801;
	}
		PlayAnimation("all", "idle");

	Label_2816:
		WaitForAnimEnd();
		var_626_string = var_3_string;
		if(var_626_string != 0) {
			goto Label_2826;
		}
		PlayAnimation("all", "idle");
		goto Label_2816;
	}
	goto Label_2826;
	
Label_2826:
	return 0;
	
}


func_6836(var_424_bool)
{
	var_426_int = 0; var_427_string = "";
	func_6511(var_426_int, "ood1Maria1");
	var_429_bool = var_426_int == (int)0;
	if(var_429_bool != 0) {
		var_424_bool = 1;
		return 0;
	}
	var_424_bool = 0;
	return 0;
}


func_4280(var_0_object, var_876_int, var_877_object)
{
	var_879_object = Obj(); var_880_bool = 0; var_881_int = 0; var_882_bool = 0; var_883_object = Obj(); var_884_bool = 0; var_885_int = 0; var_886_bool = 0;
	var_0_object = var_877_object;
	var_887_bool = 0; var_888_object = Obj(); var_889_float = 0;
	var_877_object = var_888_object;
	func_6217(var_887_bool, var_888_object, (float)70.0);
	var_890_bool = var_887_bool == 0; //@nz
	if(var_890_bool != 0) {
		var_876_int = -2;
		return 8;
	}
	CreateDialog(var_883_object);
	var_891_int = 0;
	func_6605(var_891_int);
	@@var_883_object:SetNPCName(var_891_int);
	var_892_int = 0;
	func_6603(var_892_int);
	@@var_883_object:SetNPCDescription(var_892_int);
	var_893_string = "";
	func_6607(var_893_string);
	@@var_883_object:SetPhoto(var_893_string);
	var_894_string = "";
	func_6609(var_894_string);
	@@var_883_object:SetPhoto2(var_894_string);
	var_895_int = 0;
	func_7269(var_895_int);
	@@var_883_object:SetPlayerName(var_895_int);
	IsOverrideActive(var_884_bool);
	var_896_bool = var_884_bool;
	if(var_896_bool != 0) {
		var_876_int = -2;
		return 8;
	}
	DoDialog(var_883_object);
	var_897_bool = 0; var_898_object = Obj();
	func_6495(Obj());
	var_899_object = var_898_object;
	func_6304(var_897_bool, var_898_object);
	var_900_object = Obj(); var_901_object = Obj();
	var_877_object = var_900_object;
	var_883_object = var_901_object;
	TaskCall(15);
	func_4361(var_902_object, var_903_object, var_904_string, var_905_bool, var_900_object, var_901_object);
	TaskReturn();
	@@var_883_object:IsDialogEnd(var_886_bool);
	
Label_4343:
	var_948_bool = var_886_bool == 0; //@nz
	if(var_948_bool != 0) {
		sync();
		@@var_883_object:IsDialogEnd(var_886_bool);
		goto Label_4343;
	}
	var_877_object = Obj();
	func_6286();
	StopDialog(var_883_object);
	@@var_883_object:GetReturnValue((int)-1);
	var_885_int = var_876_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7356()
{
	func_7331();
	return 0;
}


func_6848(var_380_bool)
{
	var_382_int = 0; var_383_string = "";
	func_6511(var_382_int, "ood1Maria2");
	var_385_bool = var_382_int == (int)0;
	if(var_385_bool != 0) {
		var_380_bool = 1;
		return 0;
	}
	var_380_bool = 0;
	return 0;
}


func_7360(var_74_object, var_319_object)
{
	var_75_bool = GlobalVars[1];
	var_76_bool = var_75_bool == 0; //@nz
	if(var_76_bool != 0) {
		var_77_int = 0; var_78_object = Obj();
		var_74_object = var_78_object;
		TaskCall(0);
		func_0(var_79_object, var_77_int, var_78_object);
		TaskReturn();
		var_312_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_313_bool = 0; var_314_int = 0;
	func_6573(var_313_bool, (int)1);
	if(var_313_bool != 0) {
		var_317_int = 0; var_318_object = Obj();
		var_74_object = var_318_object;
		TaskCall(4);
		func_785(var_319_object, var_317_int, var_318_object);
		TaskReturn();
		var_454_bool = (int)2000 == var_319_object;
		if(var_454_bool != 0) {
			ShowWindow("people.xml", (bool)1);
		}
		return 0;
	}
	var_457_bool = 0; var_458_int = 0;
	func_6573(var_457_bool, (int)2);
	if(var_457_bool != 0) {
		var_459_int = 0; var_460_object = Obj();
		var_74_object = var_460_object;
		TaskCall(6);
		func_2032(var_461_object, var_459_int, var_460_object);
		TaskReturn();
		return 0;
	}
	var_544_bool = 0; var_545_int = 0;
	func_6573(var_544_bool, (int)3);
	if(var_544_bool != 0) {
		var_546_int = 0; var_547_object = Obj();
		var_74_object = var_547_object;
		TaskCall(8);
		func_2655(var_548_object, var_546_int, var_547_object);
		TaskReturn();
		return 0;
	}
	var_631_bool = 0; var_632_int = 0;
	func_6573(var_631_bool, (int)4);
	if(var_631_bool != 0) {
		var_633_int = 0; var_634_object = Obj();
		var_74_object = var_634_object;
		TaskCall(10);
		func_3273(var_635_object, var_633_int, var_634_object);
		TaskReturn();
		return 0;
	}
	var_712_bool = 0; var_713_int = 0;
	func_6573(var_712_bool, (int)6);
	if(var_712_bool != 0) {
		var_714_int = 0; var_715_object = Obj();
		var_74_object = var_715_object;
		TaskCall(2);
		func_320(var_716_object, var_714_int, var_715_object);
		TaskReturn();
		return 0;
	}
	var_807_bool = 0; var_808_int = 0;
	func_6573(var_807_bool, (int)7);
	if(var_807_bool != 0) {
		var_809_int = 0; var_810_object = Obj();
		var_74_object = var_810_object;
		TaskCall(12);
		func_3859(var_811_object, var_809_int, var_810_object);
		TaskReturn();
		return 0;
	}
	var_874_bool = 0; var_875_int = 0;
	func_6573(var_874_bool, (int)8);
	if(var_874_bool != 0) {
		var_876_int = 0; var_877_object = Obj();
		var_74_object = var_877_object;
		TaskCall(14);
		func_4280(var_878_object, var_876_int, var_877_object);
		TaskReturn();
		return 0;
	}
	var_950_bool = 0; var_951_int = 0;
	func_6573(var_950_bool, (int)10);
	if(var_950_bool != 0) {
		var_952_int = 0; var_953_object = Obj();
		var_74_object = var_953_object;
		TaskCall(16);
		func_4687(var_954_object, var_952_int, var_953_object);
		TaskReturn();
		return 0;
	}
	var_1058_bool = 0; var_1059_int = 0;
	func_6573(var_1058_bool, (int)12);
	if(var_1058_bool != 0) {
		var_1060_int = 0; var_1061_object = Obj();
		var_74_object = var_1061_object;
		TaskCall(18);
		func_5362(var_1062_object, var_1060_int, var_1061_object);
		TaskReturn();
		return 0;
	}
	var_1116_int = 0; var_1117_object = Obj();
	var_74_object = var_1117_object;
	TaskCall(20);
	func_5716(var_1118_object, var_1116_int, var_1117_object);
	TaskReturn();
	return 0;
}


func_3273(var_0_object, var_633_int, var_634_object)
{
	var_636_object = Obj(); var_637_bool = 0; var_638_int = 0; var_639_bool = 0; var_640_object = Obj(); var_641_bool = 0; var_642_int = 0; var_643_bool = 0;
	var_0_object = var_634_object;
	var_644_bool = 0; var_645_object = Obj(); var_646_float = 0;
	var_634_object = var_645_object;
	func_6217(var_644_bool, var_645_object, (float)70.0);
	var_647_bool = var_644_bool == 0; //@nz
	if(var_647_bool != 0) {
		var_633_int = -2;
		return 8;
	}
	CreateDialog(var_640_object);
	var_648_int = 0;
	func_6605(var_648_int);
	@@var_640_object:SetNPCName(var_648_int);
	var_649_int = 0;
	func_6603(var_649_int);
	@@var_640_object:SetNPCDescription(var_649_int);
	var_650_string = "";
	func_6607(var_650_string);
	@@var_640_object:SetPhoto(var_650_string);
	var_651_string = "";
	func_6609(var_651_string);
	@@var_640_object:SetPhoto2(var_651_string);
	var_652_int = 0;
	func_7269(var_652_int);
	@@var_640_object:SetPlayerName(var_652_int);
	IsOverrideActive(var_641_bool);
	var_653_bool = var_641_bool;
	if(var_653_bool != 0) {
		var_633_int = -2;
		return 8;
	}
	DoDialog(var_640_object);
	var_654_bool = 0; var_655_object = Obj();
	func_6495(Obj());
	var_656_object = var_655_object;
	func_6304(var_654_bool, var_655_object);
	var_657_object = Obj(); var_658_object = Obj();
	var_634_object = var_657_object;
	var_640_object = var_658_object;
	TaskCall(11);
	func_3354(var_659_object, var_660_object, var_661_string, var_662_bool, var_657_object, var_658_object);
	TaskReturn();
	@@var_640_object:IsDialogEnd(var_643_bool);
	
Label_3336:
	var_710_bool = var_643_bool == 0; //@nz
	if(var_710_bool != 0) {
		sync();
		@@var_640_object:IsDialogEnd(var_643_bool);
		goto Label_3336;
	}
	var_634_object = Obj();
	func_6286();
	StopDialog(var_640_object);
	@@var_640_object:GetReturnValue((int)-1);
	var_642_int = var_633_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6860(var_415_bool)
{
	var_417_int = 0; var_418_string = "";
	func_6511(var_417_int, "ood1Maria3");
	var_420_bool = var_417_int == (int)0;
	if(var_420_bool != 0) {
		var_415_bool = 1;
		return 0;
	}
	var_415_bool = 0;
	return 0;
}


func_6872(var_348_bool)
{
	var_350_int = 0; var_351_string = "";
	func_6511(var_350_int, "d1q01FirstGeorgVisit");
	var_355_bool = var_350_int == (int)1;
	if(var_355_bool != 0) {
		var_348_bool = 1;
		return 0;
	}
	var_348_bool = 0;
	return 0;
}


func_6362(var_160_bool, var_161_object)
{
	var_162_string = ""; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_string = ""; var_167_string = ""; var_168_int = 0; var_169_bool = 0; var_170_int = 0; var_171_string = "";
	var_167_string = "c";
	var_168_int = 0;
	
Label_6365:
	if((int)1 != 0) {
		var_174_int = var_168_int + (int)1;
		var_175_int = var_167_string + var_174_int;
		@@var_161_object:HasProperty(var_175_int, var_169_bool);
		var_176_bool = var_169_bool == 0; //@nz
		if(var_176_bool != 0) {
		} else {
			var_168_int = var_168_int + (int)1;
			goto Label_6365;
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
	func_6473(var_183_bool, var_184_string);
	var_183_bool = var_160_bool;
	return 10;
	
}


func_5855(var_2_object, var_1147_string)
{
	var_1148_bool = 0;
	func_6611(var_1148_bool);
	var_1149_bool = var_1148_bool == 0; //@nz
	if(var_1149_bool != 0) {
		return 0;
	}
	var_1150_bool = var_1147_string == var_2_object;
	if(var_1150_bool != 0) {
		return 0;
	}
	var_1151_string = ""; var_1152_bool = 0;
	var_1147_string = var_1151_string;
	var_1154_bool = var_1147_string == "";
	if(var_1154_bool != 0) {
		var_1152_bool = 0;
	} else {
		var_1152_bool = 1;
	}
	func_6458(var_1151_string, var_1152_bool);
	var_2_object = var_1147_string;
	return 0;
	
}


func_6884(var_849_bool)
{
	var_851_int = 0; var_852_string = "";
	func_6511(var_851_int, "d7q03");
	var_854_bool = var_851_int == (int)1;
	if(var_854_bool != 0) {
		var_849_bool = 1;
		return 0;
	}
	var_849_bool = 0;
	return 0;
}


func_6896(var_1035_bool)
{
	var_1037_int = 0; var_1038_string = "";
	func_6511(var_1037_int, "d10q02");
	var_1040_bool = var_1037_int == (int)2;
	if(var_1040_bool != 0) {
		var_1035_bool = 1;
		return 0;
	}
	var_1035_bool = 0;
	return 0;
}


func_5362(var_0_object, var_1060_int, var_1061_object)
{
	var_1063_object = Obj(); var_1064_bool = 0; var_1065_int = 0; var_1066_bool = 0; var_1067_object = Obj(); var_1068_bool = 0; var_1069_int = 0; var_1070_bool = 0;
	var_0_object = var_1061_object;
	var_1071_bool = 0; var_1072_object = Obj(); var_1073_float = 0;
	var_1061_object = var_1072_object;
	func_6217(var_1071_bool, var_1072_object, (float)70.0);
	var_1074_bool = var_1071_bool == 0; //@nz
	if(var_1074_bool != 0) {
		var_1060_int = -2;
		return 8;
	}
	CreateDialog(var_1067_object);
	var_1075_int = 0;
	func_6605(var_1075_int);
	@@var_1067_object:SetNPCName(var_1075_int);
	var_1076_int = 0;
	func_6603(var_1076_int);
	@@var_1067_object:SetNPCDescription(var_1076_int);
	var_1077_string = "";
	func_6607(var_1077_string);
	@@var_1067_object:SetPhoto(var_1077_string);
	var_1078_string = "";
	func_6609(var_1078_string);
	@@var_1067_object:SetPhoto2(var_1078_string);
	var_1079_int = 0;
	func_7269(var_1079_int);
	@@var_1067_object:SetPlayerName(var_1079_int);
	IsOverrideActive(var_1068_bool);
	var_1080_bool = var_1068_bool;
	if(var_1080_bool != 0) {
		var_1060_int = -2;
		return 8;
	}
	DoDialog(var_1067_object);
	var_1081_bool = 0; var_1082_object = Obj();
	func_6495(Obj());
	var_1083_object = var_1082_object;
	func_6304(var_1081_bool, var_1082_object);
	var_1084_object = Obj(); var_1085_object = Obj();
	var_1061_object = var_1084_object;
	var_1067_object = var_1085_object;
	TaskCall(19);
	func_5443(var_1086_object, var_1087_object, var_1088_string, var_1089_bool, var_1084_object, var_1085_object);
	TaskReturn();
	@@var_1067_object:IsDialogEnd(var_1070_bool);
	
Label_5425:
	var_1114_bool = var_1070_bool == 0; //@nz
	if(var_1114_bool != 0) {
		sync();
		@@var_1067_object:IsDialogEnd(var_1070_bool);
		goto Label_5425;
	}
	var_1061_object = Obj();
	func_6286();
	StopDialog(var_1067_object);
	@@var_1067_object:GetReturnValue((int)-1);
	var_1069_int = var_1060_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6908(var_1041_bool)
{
	var_1043_int = 0; var_1044_string = "";
	func_6511(var_1043_int, "ood10Maria2");
	var_1046_bool = var_1043_int == (int)0;
	if(var_1046_bool != 0) {
		var_1041_bool = 1;
		return 0;
	}
	var_1041_bool = 0;
	return 0;
}


func_6399(var_191_bool, var_192_object)
{
	var_193_string = ""; var_194_int = 0; var_195_bool = 0; var_196_int = 0; var_197_string = ""; var_198_string = ""; var_199_int = 0; var_200_bool = 0; var_201_int = 0; var_202_string = "";
	var_204_int = 0;
	func_6564(var_204_int);
	var_210_int = "d" + var_204_int;
	var_198_string = var_210_int + "m";
	var_199_int = 0;
	
Label_6408:
	if((int)1 != 0) {
		var_214_int = var_199_int + (int)1;
		var_215_int = var_198_string + var_214_int;
		@@var_192_object:HasProperty(var_215_int, var_200_bool);
		var_216_bool = var_200_bool == 0; //@nz
		if(var_216_bool != 0) {
		} else {
			var_199_int = var_199_int + (int)1;
			goto Label_6408;
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
	func_6473(var_223_bool, var_224_string);
	var_223_bool = var_191_bool;
	return 10;
	
}


func_6920(var_603_bool)
{
	var_605_int = 0; var_606_string = "";
	func_6511(var_605_int, "d3KaterinaAboutKills");
	var_608_bool = var_605_int != (int)0;
	if(var_608_bool != 0) {
		var_603_bool = 1;
		return 0;
	}
	var_603_bool = 0;
	return 0;
}


func_4361(var_0_object, var_1_object, var_2_object, var_3_string, var_900_object, var_901_object)
{
	var_0_object = var_901_object;
	var_1_object = var_900_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_907_bool = 0; var_908_object = Obj();
		var_908_object = var_1_object;
		func_7088(var_908_object);
		if(var_907_bool != 0) {
			var_913_object = Obj(); var_914_object = Obj();
			var_913_object = var_1_object;
			var_914_object = var_0_object;
			func_6774();
			var_917_string = "";
			func_4449(var_901_object, "Mysterious");
			@@@var_0_object:SetMessage((int)512310);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512311, (int)13471, (int)13470);
			@@@var_0_object:AddReply((int)512313, (int)13473, (int)13472);
		} else {
				var_940_string = "";
				func_4449(var_901_object, "Staring");
				@@@var_0_object:SetMessage((int)513777);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)513778, (int)-1, (int)15014);
				@@@var_0_object:AddReply((int)541597, (int)-1, (int)43761);
				goto Label_4419;
		}
	}
Label_4419:
	var_932_bool = 0;
	func_6611(var_932_bool);
	if(var_932_bool != 0) {

	Label_4423:
		lshWaitForAnimEnd();
		var_933_string = var_3_string;
		if(var_933_string != 0) {
		} else {
			var_934_string = "";
			var_934_string = var_2_object;
			func_6442(var_934_string);
			goto Label_4423;
	}
		PlayAnimation("all", "idle");

	Label_4438:
		WaitForAnimEnd();
		var_937_string = var_3_string;
		if(var_937_string != 0) {
			goto Label_4448;
		}
		PlayAnimation("all", "idle");
		goto Label_4438;

	}
	goto Label_4448;
	
Label_4448:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x110d";


func_2827(var_2_object, var_577_string)
{
	var_578_bool = 0;
	func_6611(var_578_bool);
	var_579_bool = var_578_bool == 0; //@nz
	if(var_579_bool != 0) {
		return 0;
	}
	var_580_bool = var_577_string == var_2_object;
	if(var_580_bool != 0) {
		return 0;
	}
	var_581_string = ""; var_582_bool = 0;
	var_577_string = var_581_string;
	var_584_bool = var_577_string == "";
	if(var_584_bool != 0) {
		var_582_bool = 0;
	} else {
		var_582_bool = 1;
	}
	func_6458(var_581_string, var_582_bool);
	var_2_object = var_577_string;
	return 0;
	
}


func_785(var_0_object, var_317_int, var_318_object)
{
	var_320_object = Obj(); var_321_bool = 0; var_322_int = 0; var_323_bool = 0; var_324_object = Obj(); var_325_bool = 0; var_326_int = 0; var_327_bool = 0;
	var_0_object = var_318_object;
	var_328_bool = 0; var_329_object = Obj(); var_330_float = 0;
	var_318_object = var_329_object;
	func_6217(var_328_bool, var_329_object, (float)70.0);
	var_331_bool = var_328_bool == 0; //@nz
	if(var_331_bool != 0) {
		var_317_int = -2;
		return 8;
	}
	CreateDialog(var_324_object);
	var_332_int = 0;
	func_6605(var_332_int);
	@@var_324_object:SetNPCName(var_332_int);
	var_333_int = 0;
	func_6603(var_333_int);
	@@var_324_object:SetNPCDescription(var_333_int);
	var_334_string = "";
	func_6607(var_334_string);
	@@var_324_object:SetPhoto(var_334_string);
	var_335_string = "";
	func_6609(var_335_string);
	@@var_324_object:SetPhoto2(var_335_string);
	var_336_int = 0;
	func_7269(var_336_int);
	@@var_324_object:SetPlayerName(var_336_int);
	IsOverrideActive(var_325_bool);
	var_337_bool = var_325_bool;
	if(var_337_bool != 0) {
		var_317_int = -2;
		return 8;
	}
	DoDialog(var_324_object);
	var_338_bool = 0; var_339_object = Obj();
	func_6495(Obj());
	var_340_object = var_339_object;
	func_6304(var_338_bool, var_339_object);
	var_341_object = Obj(); var_342_object = Obj();
	var_318_object = var_341_object;
	var_324_object = var_342_object;
	TaskCall(5);
	func_866(var_343_object, var_344_object, var_345_string, var_346_bool, var_341_object, var_342_object);
	TaskReturn();
	@@var_324_object:IsDialogEnd(var_327_bool);
	
Label_848:
	var_452_bool = var_327_bool == 0; //@nz
	if(var_452_bool != 0) {
		sync();
		@@var_324_object:IsDialogEnd(var_327_bool);
		goto Label_848;
	}
	var_318_object = Obj();
	func_6286();
	StopDialog(var_324_object);
	@@var_324_object:GetReturnValue((int)-1);
	var_326_int = var_317_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3859(var_0_object, var_809_int, var_810_object)
{
	var_812_object = Obj(); var_813_bool = 0; var_814_int = 0; var_815_bool = 0; var_816_object = Obj(); var_817_bool = 0; var_818_int = 0; var_819_bool = 0;
	var_0_object = var_810_object;
	var_820_bool = 0; var_821_object = Obj(); var_822_float = 0;
	var_810_object = var_821_object;
	func_6217(var_820_bool, var_821_object, (float)70.0);
	var_823_bool = var_820_bool == 0; //@nz
	if(var_823_bool != 0) {
		var_809_int = -2;
		return 8;
	}
	CreateDialog(var_816_object);
	var_824_int = 0;
	func_6605(var_824_int);
	@@var_816_object:SetNPCName(var_824_int);
	var_825_int = 0;
	func_6603(var_825_int);
	@@var_816_object:SetNPCDescription(var_825_int);
	var_826_string = "";
	func_6607(var_826_string);
	@@var_816_object:SetPhoto(var_826_string);
	var_827_string = "";
	func_6609(var_827_string);
	@@var_816_object:SetPhoto2(var_827_string);
	var_828_int = 0;
	func_7269(var_828_int);
	@@var_816_object:SetPlayerName(var_828_int);
	IsOverrideActive(var_817_bool);
	var_829_bool = var_817_bool;
	if(var_829_bool != 0) {
		var_809_int = -2;
		return 8;
	}
	DoDialog(var_816_object);
	var_830_bool = 0; var_831_object = Obj();
	func_6495(Obj());
	var_832_object = var_831_object;
	func_6304(var_830_bool, var_831_object);
	var_833_object = Obj(); var_834_object = Obj();
	var_810_object = var_833_object;
	var_816_object = var_834_object;
	TaskCall(13);
	func_3940(var_835_object, var_836_object, var_837_string, var_838_bool, var_833_object, var_834_object);
	TaskReturn();
	@@var_816_object:IsDialogEnd(var_819_bool);
	
Label_3922:
	var_872_bool = var_819_bool == 0; //@nz
	if(var_872_bool != 0) {
		sync();
		@@var_816_object:IsDialogEnd(var_819_bool);
		goto Label_3922;
	}
	var_810_object = Obj();
	func_6286();
	StopDialog(var_816_object);
	@@var_816_object:GetReturnValue((int)-1);
	var_818_int = var_809_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6932(var_593_bool)
{
	var_595_int = 0; var_596_string = "";
	func_6511(var_595_int, "ood3Maria1");
	var_598_bool = var_595_int == (int)0;
	if(var_598_bool != 0) {
		var_593_bool = 1;
		return 0;
	}
	var_593_bool = 0;
	return 0;
}


func_3354(var_0_object, var_1_object, var_2_object, var_3_string, var_657_object, var_658_object)
{
	var_0_object = var_658_object;
	var_1_object = var_657_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_664_string = "";
		func_3437(var_658_object, "Mysterious");
		@@@var_0_object:SetMessage((int)535203);
		@@@var_0_object:ClearReplies();
		var_673_bool = 0; var_674_object = Obj();
		var_674_object = var_1_object;
		func_6956(var_674_object);
		if(var_673_bool != 0) {
			@@@var_0_object:AddReply((int)536230, (int)38006, (int)38005);
		}
		var_682_bool = 0;
		var_682_bool = 0;
		var_683_bool = 0; var_684_object = Obj();
		var_684_object = var_1_object;
		func_6968(var_684_object);
		if(var_683_bool != 0) {
			var_689_bool = 0; var_690_object = Obj();
			var_690_object = var_1_object;
			func_7040(var_690_object);
			var_695_bool = var_689_bool == 0; //@nz
			if(var_695_bool != 0) {
				var_682_bool = 1;
			}
		}
		if(var_682_bool != 0) {
			@@@var_0_object:AddReply((int)536233, (int)12417, (int)38008);
		}
		@@@var_0_object:AddReply((int)536232, (int)-1, (int)38007);
		goto Label_3407;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xd1e";
	}
Label_3407:
	var_702_bool = 0;
	func_6611(var_702_bool);
	if(var_702_bool != 0) {

	Label_3411:
		lshWaitForAnimEnd();
		var_703_string = var_3_string;
		if(var_703_string != 0) {
		} else {
			var_704_string = "";
			var_704_string = var_2_object;
			func_6442(var_704_string);
			goto Label_3411;
	}
		PlayAnimation("all", "idle");

	Label_3426:
		WaitForAnimEnd();
		var_707_string = var_3_string;
		if(var_707_string != 0) {
			goto Label_3436;
		}
		PlayAnimation("all", "idle");
		goto Label_3426;
	}
	goto Label_3436;
	
Label_3436:
	return 0;
	
}


func_4895(var_2_object, var_1009_string)
{
	var_1010_bool = 0;
	func_6611(var_1010_bool);
	var_1011_bool = var_1010_bool == 0; //@nz
	if(var_1011_bool != 0) {
		return 0;
	}
	var_1012_bool = var_1009_string == var_2_object;
	if(var_1012_bool != 0) {
		return 0;
	}
	var_1013_string = ""; var_1014_bool = 0;
	var_1009_string = var_1013_string;
	var_1016_bool = var_1009_string == "";
	if(var_1016_bool != 0) {
		var_1014_bool = 0;
	} else {
		var_1014_bool = 1;
	}
	func_6458(var_1013_string, var_1014_bool);
	var_2_object = var_1009_string;
	return 0;
	
}


func_6944(var_609_bool)
{
	var_611_int = 0; var_612_string = "";
	func_6511(var_611_int, "ood3Maria2");
	var_614_bool = var_611_int == (int)0;
	if(var_614_bool != 0) {
		var_609_bool = 1;
		return 0;
	}
	var_609_bool = 0;
	return 0;
}


func_5926(var_0_object)
{
	var_57_bool = 0;
	func_6212(var_57_bool);
	var_60_bool = var_57_bool == 0; //@nz
	if(var_60_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_5935:
	func_6102();
	goto Label_5935;
}
EMIT "Return(); Pop(0)";


func_6442(var_287_string)
{
	var_288_bool = 0; var_289_float = 0; var_290_float = 0; var_291_bool = 0; var_292_float = 0; var_293_float = 0;
	lshHasAnimation(var_291_bool, var_287_string);
	var_294_bool = var_291_bool;
	if(var_294_bool != 0) {
		lshGetAnimTimes(var_287_string, var_292_float, var_293_float);
		lshPlayAnimation(var_292_float, var_293_float, (bool)0);
	} else {
		var_297_int = "Can't find lsh animation : " + var_287_string;
		Trace(var_297_int);
	}
	return 6;
	
}


func_6956(var_673_bool)
{
	var_675_int = 0; var_676_string = "";
	func_6511(var_675_int, "ood4Maria1");
	var_678_bool = var_675_int == (int)1;
	if(var_678_bool != 0) {
		var_673_bool = 1;
		return 0;
	}
	var_673_bool = 0;
	return 0;
}


func_5940(var_81_bool)
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
	func_6203(var_86_bool, var_87_object);
	var_86_bool = var_81_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_6968(var_683_bool)
{
	var_685_int = 0; var_686_string = "";
	func_6511(var_685_int, "ood4Maria2");
	var_688_bool = var_685_int == (int)0;
	if(var_688_bool != 0) {
		var_683_bool = 1;
		return 0;
	}
	var_683_bool = 0;
	return 0;
}


func_6458(var_259_string, var_260_bool)
{
	var_263_bool = 0; var_264_float = 0; var_265_float = 0; var_266_bool = 0; var_267_float = 0; var_268_float = 0;
	lshHasAnimation(var_266_bool, var_259_string);
	var_269_bool = var_266_bool;
	if(var_269_bool != 0) {
		lshGetAnimTimes(var_259_string, var_267_float, var_268_float);
		lshPlayAnimation(var_267_float, var_268_float, var_260_bool);
	} else {
		var_271_int = "Can't find lsh animation : " + var_259_string;
		Trace(var_271_int);
	}
	return 6;
	
}


func_320(var_0_object, var_714_int, var_715_object)
{
	var_717_object = Obj(); var_718_bool = 0; var_719_int = 0; var_720_bool = 0; var_721_object = Obj(); var_722_bool = 0; var_723_int = 0; var_724_bool = 0;
	var_0_object = var_715_object;
	var_725_bool = 0; var_726_object = Obj(); var_727_float = 0;
	var_715_object = var_726_object;
	func_6217(var_725_bool, var_726_object, (float)70.0);
	var_728_bool = var_725_bool == 0; //@nz
	if(var_728_bool != 0) {
		var_714_int = -2;
		return 8;
	}
	CreateDialog(var_721_object);
	var_729_int = 0;
	func_6605(var_729_int);
	@@var_721_object:SetNPCName(var_729_int);
	var_730_int = 0;
	func_6603(var_730_int);
	@@var_721_object:SetNPCDescription(var_730_int);
	var_731_string = "";
	func_6607(var_731_string);
	@@var_721_object:SetPhoto(var_731_string);
	var_732_string = "";
	func_6609(var_732_string);
	@@var_721_object:SetPhoto2(var_732_string);
	var_733_int = 0;
	func_7269(var_733_int);
	@@var_721_object:SetPlayerName(var_733_int);
	IsOverrideActive(var_722_bool);
	var_734_bool = var_722_bool;
	if(var_734_bool != 0) {
		var_714_int = -2;
		return 8;
	}
	DoDialog(var_721_object);
	var_735_bool = 0; var_736_object = Obj();
	func_6495(Obj());
	var_737_object = var_736_object;
	func_6304(var_735_bool, var_736_object);
	var_738_object = Obj(); var_739_object = Obj();
	var_715_object = var_738_object;
	var_721_object = var_739_object;
	TaskCall(3);
	func_401(var_740_object, var_741_object, var_742_string, var_743_bool, var_738_object, var_739_object);
	TaskReturn();
	@@var_721_object:IsDialogEnd(var_724_bool);
	
Label_383:
	var_805_bool = var_724_bool == 0; //@nz
	if(var_805_bool != 0) {
		sync();
		@@var_721_object:IsDialogEnd(var_724_bool);
		goto Label_383;
	}
	var_715_object = Obj();
	func_6286();
	StopDialog(var_721_object);
	@@var_721_object:GetReturnValue((int)-1);
	var_723_int = var_714_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5443(var_0_object, var_1_object, var_2_object, var_3_string, var_1084_object, var_1085_object)
{
	var_0_object = var_1085_object;
	var_1_object = var_1084_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1091_string = "";
		func_5501(var_1085_object, "Staring");
		@@@var_0_object:SetMessage((int)535671);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535672, (int)42114, (int)37358);
		@@@var_0_object:AddReply((int)540141, (int)-1, (int)42113);
		goto Label_5471;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1547";
	}
Label_5471:
	var_1106_bool = 0;
	func_6611(var_1106_bool);
	if(var_1106_bool != 0) {

	Label_5475:
		lshWaitForAnimEnd();
		var_1107_string = var_3_string;
		if(var_1107_string != 0) {
		} else {
			var_1108_string = "";
			var_1108_string = var_2_object;
			func_6442(var_1108_string);
			goto Label_5475;
	}
		PlayAnimation("all", "idle");

	Label_5490:
		WaitForAnimEnd();
		var_1111_string = var_3_string;
		if(var_1111_string != 0) {
			goto Label_5500;
		}
		PlayAnimation("all", "idle");
		goto Label_5490;
	}
	goto Label_5500;
	
Label_5500:
	return 0;
	
}


func_6980(var_500_bool)
{
	var_502_int = 0; var_503_string = "";
	func_6511(var_502_int, "ood2Maria1");
	var_505_bool = var_502_int == (int)0;
	if(var_505_bool != 0) {
		var_500_bool = 1;
		return 0;
	}
	var_500_bool = 0;
	return 0;
}


func_5955(var_0_object)
{
	var_133_float = GetByIndex(var_0_object, 0);
	var_134_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_133_float, var_134_float);
	return 0;
}


func_5960(var_64_bool)
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
	func_6178(var_71_float, var_72_object);
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


func_6473(var_183_bool, var_184_string)
{
	var_185_bool = 0; var_186_bool = 0;
	var_187_bool = 0;
	func_6611(var_187_bool);
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


func_6992(var_516_bool)
{
	var_518_int = 0; var_519_string = "";
	func_6511(var_518_int, "ood2Maria2");
	var_521_bool = var_518_int == (int)0;
	if(var_521_bool != 0) {
		var_516_bool = 1;
		return 0;
	}
	var_516_bool = 0;
	return 0;
}


func_6488()
{
	var_59_bool = 0;
	func_6611(var_59_bool);
	if(var_59_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_7004(var_506_bool)
{
	var_508_int = 0; var_509_string = "";
	func_6511(var_508_int, "d2q02");
	var_511_bool = var_508_int == (int)3;
	if(var_511_bool != 0) {
		var_506_bool = 1;
		return 0;
	}
	var_506_bool = 0;
	return 0;
}


func_5982()
{
	var_1174_float = 0; var_1175_float = 0;
	rand(var_1175_float, (int)8, (int)16);
	SetTimer((int)10, var_1175_float);
	return 2;
}


func_6495(var_151_object)
{
	var_152_object = Obj(); var_153_object = Obj();
	self(var_153_object);
	var_153_object = var_151_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4449(var_2_object, var_917_string)
{
	var_918_bool = 0;
	func_6611(var_918_bool);
	var_919_bool = var_918_bool == 0; //@nz
	if(var_919_bool != 0) {
		return 0;
	}
	var_920_bool = var_917_string == var_2_object;
	if(var_920_bool != 0) {
		return 0;
	}
	var_921_string = ""; var_922_bool = 0;
	var_917_string = var_921_string;
	var_924_bool = var_917_string == "";
	if(var_924_bool != 0) {
		var_922_bool = 0;
	} else {
		var_922_bool = 1;
	}
	func_6458(var_921_string, var_922_bool);
	var_2_object = var_917_string;
	return 0;
	
}


func_866(var_0_object, var_1_object, var_2_object, var_3_string, var_341_object, var_342_object)
{
	var_0_object = var_342_object;
	var_1_object = var_341_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_348_bool = 0; var_349_object = Obj();
		var_349_object = var_1_object;
		func_6872(var_349_object);
		var_356_bool = var_348_bool == 0; //@nz
		if(var_356_bool != 0) {
			var_357_string = "";
			func_1028(var_342_object, "Staring");
			@@@var_0_object:SetMessage((int)506253);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506254, (int)6921, (int)6920);
			@@@var_0_object:AddReply((int)506259, (int)6926, (int)6925);
		} else {
				var_380_bool = 0; var_381_object = Obj();
				var_381_object = var_1_object;
				func_6848(var_381_object);
				if(var_380_bool != 0) {
					var_386_object = Obj(); var_387_object = Obj();
					var_386_object = var_1_object;
					var_387_object = var_0_object;
					func_6632();
					var_390_object = Obj(); var_391_object = Obj();
					var_390_object = var_1_object;
					var_391_object = var_0_object;
					func_6625();
					var_398_string = "";
					func_1028(var_342_object, "Mysterious");
					@@@var_0_object:SetMessage((int)524928);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)524944, (int)26279, (int)26278);
					@@@var_0_object:AddReply((int)524952, (int)26279, (int)26286);
					goto Label_998;
				}
				var_406_string = "";
				func_1028(var_342_object, "Mysterious");
				@@@var_0_object:SetMessage((int)508097);
				@@@var_0_object:ClearReplies();
				var_408_bool = 0;
				var_408_bool = 0;
				var_409_bool = 0; var_410_object = Obj();
				var_410_object = var_1_object;
				func_6824(var_410_object);
				if(var_409_bool != 0) {
					var_415_bool = 0; var_416_object = Obj();
					var_416_object = var_1_object;
					func_6860(var_416_object);
					if(var_415_bool != 0) {
						var_408_bool = 1;
					}
				}
				if(var_408_bool != 0) {
					@@@var_0_object:AddReply((int)521832, (int)23004, (int)23003);
				}
				var_424_bool = 0; var_425_object = Obj();
				var_425_object = var_1_object;
				func_6836(var_425_object);
				if(var_424_bool != 0) {
					@@@var_0_object:AddReply((int)505605, (int)6180, (int)6179);
				}
				var_433_bool = 0;
				var_433_bool = 0;
				var_434_bool = 0; var_435_object = Obj();
				var_435_object = var_1_object;
				func_7100(var_435_object);
				if(var_434_bool != 0) {
					var_440_bool = 0; var_441_object = Obj();
					var_441_object = var_1_object;
					func_7124(var_441_object);
					if(var_440_bool != 0) {
						var_433_bool = 1;
					}
				}
				if(var_433_bool != 0) {
					@@@var_0_object:AddReply((int)508111, (int)23011, (int)8934);
				}
				@@@var_0_object:AddReply((int)505611, (int)-1, (int)6185);
				goto Label_998;
		}
	}
Label_998:
	var_372_bool = 0;
	func_6611(var_372_bool);
	if(var_372_bool != 0) {

	Label_1002:
		lshWaitForAnimEnd();
		var_373_string = var_3_string;
		if(var_373_string != 0) {
		} else {
			var_374_string = "";
			var_374_string = var_2_object;
			func_6442(var_374_string);
			goto Label_1002;
	}
		PlayAnimation("all", "idle");

	Label_1017:
		WaitForAnimEnd();
		var_377_string = var_3_string;
		if(var_377_string != 0) {
			goto Label_1027;
		}
		PlayAnimation("all", "idle");
		goto Label_1017;

	}
	goto Label_1027;
	
Label_1027:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x366";


func_3940(var_0_object, var_1_object, var_2_object, var_3_string, var_833_object, var_834_object)
{
	var_0_object = var_834_object;
	var_1_object = var_833_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_840_string = "";
		func_4008(var_834_object, "Mysterious");
		@@@var_0_object:SetMessage((int)533236);
		@@@var_0_object:ClearReplies();
		var_849_bool = 0; var_850_object = Obj();
		var_850_object = var_1_object;
		func_6884(var_850_object);
		if(var_849_bool != 0) {
			@@@var_0_object:AddReply((int)533237, (int)34752, (int)34751);
		}
		@@@var_0_object:AddReply((int)533244, (int)-1, (int)34758);
		@@@var_0_object:AddReply((int)535757, (int)-1, (int)37438);
		goto Label_3978;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xf68";
	}
Label_3978:
	var_864_bool = 0;
	func_6611(var_864_bool);
	if(var_864_bool != 0) {

	Label_3982:
		lshWaitForAnimEnd();
		var_865_string = var_3_string;
		if(var_865_string != 0) {
		} else {
			var_866_string = "";
			var_866_string = var_2_object;
			func_6442(var_866_string);
			goto Label_3982;
	}
		PlayAnimation("all", "idle");

	Label_3997:
		WaitForAnimEnd();
		var_869_string = var_3_string;
		if(var_869_string != 0) {
			goto Label_4007;
		}
		PlayAnimation("all", "idle");
		goto Label_3997;
	}
	goto Label_4007;
	
Label_4007:
	return 0;
	
}


func_6501(var_115_cvector, var_116_cvector)
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


func_5991()
{
	KillTimer((int)10);
	return 0;
}


func_7016(var_522_bool)
{
	var_524_int = 0; var_525_string = "";
	func_6511(var_524_int, "d2q03");
	var_527_bool = var_524_int == (int)1;
	if(var_527_bool != 0) {
		var_522_bool = 1;
		return 0;
	}
	var_522_bool = 0;
	return 0;
}


func_3437(var_2_object, var_664_string)
{
	var_665_bool = 0;
	func_6611(var_665_bool);
	var_666_bool = var_665_bool == 0; //@nz
	if(var_666_bool != 0) {
		return 0;
	}
	var_667_bool = var_664_string == var_2_object;
	if(var_667_bool != 0) {
		return 0;
	}
	var_668_string = ""; var_669_bool = 0;
	var_664_string = var_668_string;
	var_671_bool = var_664_string == "";
	if(var_671_bool != 0) {
		var_669_bool = 0;
	} else {
		var_669_bool = 1;
	}
	func_6458(var_668_string, var_669_bool);
	var_2_object = var_664_string;
	return 0;
	
}


func_6511(var_350_int, var_351_string)
{
	var_352_int = 0; var_353_int = 0;
	GetVariable(var_351_string, var_353_int);
	var_353_int = var_350_int;
	return 2;
}


func_7028(var_587_bool)
{
	var_589_int = 0; var_590_string = "";
	func_6511(var_589_int, "d3q02");
	var_592_bool = var_589_int == (int)3;
	if(var_592_bool != 0) {
		var_587_bool = 1;
		return 0;
	}
	var_587_bool = 0;
	return 0;
}


func_6516(var_159_int, var_160_int)
{
	var_161_object = Obj(); var_162_object = Obj();
	CreateIntVector(var_162_object);
	@@var_162_object:add(var_159_int);
	@@var_162_object:add(var_160_int);
	SendWorldWndMessage((int)3, var_162_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5501(var_2_object, var_1091_string)
{
	var_1092_bool = 0;
	func_6611(var_1092_bool);
	var_1093_bool = var_1092_bool == 0; //@nz
	if(var_1093_bool != 0) {
		return 0;
	}
	var_1094_bool = var_1091_string == var_2_object;
	if(var_1094_bool != 0) {
		return 0;
	}
	var_1095_string = ""; var_1096_bool = 0;
	var_1091_string = var_1095_string;
	var_1098_bool = var_1091_string == "";
	if(var_1098_bool != 0) {
		var_1096_bool = 0;
	} else {
		var_1096_bool = 1;
	}
	func_6458(var_1095_string, var_1096_bool);
	var_2_object = var_1091_string;
	return 0;
	
}


func_7040(var_689_bool)
{
	var_691_int = 0; var_692_string = "";
	func_6511(var_691_int, "d4q03");
	var_694_bool = var_691_int == (int)0;
	if(var_694_bool != 0) {
		var_689_bool = 1;
		return 0;
	}
	var_689_bool = 0;
	return 0;
}


func_6528(var_146_object, var_147_int)
{
	var_148_int = 0; var_149_int = 0;
	var_150_object = Obj(); var_151_string = ""; var_152_int = 0;
	var_146_object = var_150_object;
	var_147_int = var_152_int;
	func_6186(var_150_object, "money", var_152_int);
	var_157_bool = var_147_int > (int)0;
	if(var_157_bool != 0) {
		GetInvItemByName(var_149_int, "Money");
		var_159_int = 0; var_160_int = 0;
		var_149_int = var_159_int;
		var_147_int = var_160_int;
		func_6516(var_159_int, var_160_int);
	}
	return 2;
}


func_7052(var_746_bool)
{
	var_748_int = 0; var_749_string = "";
	func_6511(var_748_int, "d6q01");
	var_751_bool = var_748_int == (int)0;
	if(var_751_bool != 0) {
		var_746_bool = 1;
		return 0;
	}
	var_746_bool = 0;
	return 0;
}


func_401(var_0_object, var_1_object, var_2_object, var_3_string, var_738_object, var_739_object)
{
	var_0_object = var_739_object;
	var_1_object = var_738_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_745_bool = 0;
		var_745_bool = 0;
		var_746_bool = 0; var_747_object = Obj();
		var_747_object = var_1_object;
		func_7052(var_747_object);
		if(var_746_bool != 0) {
			var_752_bool = 0; var_753_object = Obj();
			var_753_object = var_1_object;
			func_7064(var_753_object);
			if(var_752_bool != 0) {
				var_745_bool = 1;
			}
		}
		if(var_745_bool != 0) {
			var_758_object = Obj(); var_759_object = Obj();
			var_758_object = var_1_object;
			var_759_object = var_0_object;
			func_6762();
			var_762_object = Obj(); var_763_object = Obj();
			var_762_object = var_1_object;
			var_763_object = var_0_object;
			func_6806();
			var_766_string = "";
			func_513(var_739_object, "Angry");
			@@@var_0_object:SetMessage((int)503206);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503207, (int)3543, (int)3540);
			@@@var_0_object:AddReply((int)503208, (int)3542, (int)3541);
		} else {
				var_789_object = Obj(); var_790_object = Obj();
				var_789_object = var_1_object;
				var_790_object = var_0_object;
				func_6806();
				var_791_string = "";
				func_513(var_739_object, "Mysterious");
				@@@var_0_object:SetMessage((int)512086);
				@@@var_0_object:ClearReplies();
				var_793_bool = 0; var_794_object = Obj();
				var_794_object = var_1_object;
				func_7076(var_794_object);
				if(var_793_bool != 0) {
					@@@var_0_object:AddReply((int)512087, (int)13314, (int)13313);
				}
				@@@var_0_object:AddReply((int)512094, (int)-1, (int)13320);
				goto Label_483;
		}
	}
Label_483:
	var_781_bool = 0;
	func_6611(var_781_bool);
	if(var_781_bool != 0) {

	Label_487:
		lshWaitForAnimEnd();
		var_782_string = var_3_string;
		if(var_782_string != 0) {
		} else {
			var_783_string = "";
			var_783_string = var_2_object;
			func_6442(var_783_string);
			goto Label_487;
	}
		PlayAnimation("all", "idle");

	Label_502:
		WaitForAnimEnd();
		var_786_string = var_3_string;
		if(var_786_string != 0) {
			goto Label_512;
		}
		PlayAnimation("all", "idle");
		goto Label_502;

	}
	goto Label_512;
	
Label_512:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x195";


func_6547(var_392_bool, var_393_string, var_394_string)
{
	var_395_object = Obj(); var_396_object = Obj();
	FindActor(var_396_object, var_393_string);
	var_397_bool = var_396_object == 0; //@ne
	if(var_397_bool != 0) {
		var_392_bool = 0;
		return 2;
	}
	Trigger(var_396_object, var_394_string);
	var_392_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_7064(var_752_bool)
{
	var_754_int = 0; var_755_string = "";
	func_6511(var_754_int, "ood6Maria1");
	var_757_bool = var_754_int == (int)0;
	if(var_757_bool != 0) {
		var_752_bool = 1;
		return 0;
	}
	var_752_bool = 0;
	return 0;
}


func_6559(var_85_float)
{
	var_86_float = 0; var_87_float = 0;
	GetGameTime(var_87_float);
	var_87_float = var_85_float;
	return 2;
}


func_7076(var_793_bool)
{
	var_795_int = 0; var_796_string = "";
	func_6511(var_795_int, "ood6Maria2");
	var_798_bool = var_795_int == (int)0;
	if(var_798_bool != 0) {
		var_793_bool = 1;
		return 0;
	}
	var_793_bool = 0;
	return 0;
}


func_6564(var_204_int)
{
	var_205_float = 0; var_206_float = 0;
	GetGameTime(var_206_float);
	var_208_int = 0;
	var_208_int = var_206_float / (int)24;
	var_204_int = (int)1 + var_208_int;
	return 2;
}


func_4008(var_2_object, var_840_string)
{
	var_841_bool = 0;
	func_6611(var_841_bool);
	var_842_bool = var_841_bool == 0; //@nz
	if(var_842_bool != 0) {
		return 0;
	}
	var_843_bool = var_840_string == var_2_object;
	if(var_843_bool != 0) {
		return 0;
	}
	var_844_string = ""; var_845_bool = 0;
	var_840_string = var_844_string;
	var_847_bool = var_840_string == "";
	if(var_847_bool != 0) {
		var_845_bool = 0;
	} else {
		var_845_bool = 1;
	}
	func_6458(var_844_string, var_845_bool);
	var_2_object = var_840_string;
	return 0;
	
}


func_6573(var_313_bool, var_314_int)
{
	var_315_int = 0;
	func_6564(var_315_int);
	var_313_bool = var_315_int == var_314_int;
	return 0;
}


func_7088(var_907_bool)
{
	var_909_int = 0; var_910_string = "";
	func_6511(var_909_int, "ood8Maria1");
	var_912_bool = var_909_int == (int)0;
	if(var_912_bool != 0) {
		var_907_bool = 1;
		return 0;
	}
	var_907_bool = 0;
	return 0;
}


func_6579(var_81_string, var_82_int)
{
	var_83_string = ""; var_84_string = "";
	var_85_int = var_82_int;
	if(var_85_int != 0) {
		"idle" = "idle" + var_82_int;
	}
	var_84_string = var_81_string;
	return 2;
}


func_6586(var_75_int)
{
	var_76_int = 0; var_77_bool = 0; var_78_int = 0; var_79_bool = 0;
	var_78_int = 0;
	
Label_6588:
	var_81_string = ""; var_82_int = 0;
	var_78_int = var_82_int;
	func_6579(var_81_string, var_82_int);
	HasAnimation(var_79_bool, "all", var_81_string);
	var_86_bool = var_79_bool == 0; //@nz
	if(var_86_bool != 0) {
	} else {
		var_78_int = var_78_int + (int)1;
		goto Label_6588;
	}
	var_78_int = var_75_int;
	return 4;
	
}


func_7100(var_434_bool)
{
	var_436_int = 0; var_437_string = "";
	func_6511(var_436_int, "KnowGeorg");
	var_439_bool = var_436_int == (int)1;
	if(var_439_bool != 0) {
		var_434_bool = 1;
		return 0;
	}
	var_434_bool = 0;
	return 0;
}


func_7112(var_240_bool)
{
	var_242_int = 0; var_243_string = "";
	func_6511(var_242_int, "d2q01");
	var_245_bool = var_242_int >= (int)5;
	if(var_245_bool != 0) {
		var_240_bool = 1;
		return 0;
	}
	var_240_bool = 0;
	return 0;
}


func_6603(var_137_int)
{
	var_137_int = 515543;
	return 0;
}


func_6605(var_136_int)
{
	var_136_int = 502868;
	return 0;
}


func_6607(var_138_string)
{
	var_138_string = "ui/NPC_Maria.png";
	return 0;
}


func_6609(var_139_string)
{
	var_139_string = "ui/NPC_Maria_b.png";
	return 0;
}


func_6611(var_131_bool)
{
	var_131_bool = 1;
	return 0;
}


func_7124(var_440_bool)
{
	var_442_int = 0; var_443_string = "";
	func_6511(var_442_int, "ood1Maria5");
	var_445_bool = var_442_int == (int)0;
	if(var_445_bool != 0) {
		var_440_bool = 1;
		return 0;
	}
	var_440_bool = 0;
	return 0;
}


func_6613()
{
	SetVariable("ood1Maria1", (int)1);
	return 0;
}


func_6102()
{
	var_61_int = 0; var_62_int = 0; var_63_bool = 0; var_64_int = 0; var_65_int = 0; var_66_bool = 0; var_67_int = 0; var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_int = 0; var_72_bool = 0;
	WaitForAnimEnd();
	var_73_bool = 0;
	func_6212(var_73_bool);
	var_74_bool = var_73_bool == 0; //@nz
	if(var_74_bool != 0) {
		return 12;
	}
	func_6586((int)0);
	var_75_int = var_67_int;
	var_68_int = 0;
	
Label_6116:
	var_88_bool = 0;
	var_88_bool = 0;
	var_90_bool = var_68_int < (int)5;
	if(var_90_bool != 0) {
		var_91_bool = 0;
		func_6212(var_91_bool);
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
				func_6579(var_102_string, var_103_int);
				PlayAnimation("all", var_102_string);
				WaitForAnimEnd(var_72_bool);
				var_104_bool = var_72_bool == 0; //@nz
				if(var_104_bool == 0) goto Label_6157;
				goto Label_6168;
		}
		Label_6157:
			var_95_bool = 0;
			func_6171(var_95_bool);
			var_96_bool = var_95_bool == 0; //@nz
			if(var_96_bool != 0) {
				goto Label_6168;
			}
			ResetAAS();
			var_68_int = var_68_int + (int)1;
			goto Label_6116;

		}
	}
Label_6168:
	ResetAAS();
	return 12;
	
}


func_6619()
{
	SetVariable("d1q01RescueListBadReply", (int)1);
	return 0;
}


func_7136(var_998_bool)
{
	var_1000_int = 0; var_1001_string = "";
	func_6511(var_1000_int, "d10q01");
	var_1003_bool = var_1000_int == (int)0;
	if(var_1003_bool != 0) {
		var_998_bool = 1;
		return 0;
	}
	var_998_bool = 0;
	return 0;
}


func_6625()
{
	var_392_bool = 0; var_393_string = ""; var_394_string = "";
	func_6547(var_392_bool, "quest_d1_01", "place_masks");
	return 0;
}


func_6632()
{
	SetVariable("ood1Maria2", (int)1);
	return 0;
}


func_7148(var_991_bool)
{
	var_993_int = 0; var_994_string = "";
	func_6511(var_993_int, "d10q01");
	var_996_bool = var_993_int == (int)1000;
	if(var_996_bool != 0) {
		var_991_bool = 1;
		return 0;
	}
	var_991_bool = 0;
	return 0;
}


func_6638()
{
	SetVariable("ood1Maria3", (int)1);
	return 0;
}


func_2032(var_0_object, var_459_int, var_460_object)
{
	var_462_object = Obj(); var_463_bool = 0; var_464_int = 0; var_465_bool = 0; var_466_object = Obj(); var_467_bool = 0; var_468_int = 0; var_469_bool = 0;
	var_0_object = var_460_object;
	var_470_bool = 0; var_471_object = Obj(); var_472_float = 0;
	var_460_object = var_471_object;
	func_6217(var_470_bool, var_471_object, (float)70.0);
	var_473_bool = var_470_bool == 0; //@nz
	if(var_473_bool != 0) {
		var_459_int = -2;
		return 8;
	}
	CreateDialog(var_466_object);
	var_474_int = 0;
	func_6605(var_474_int);
	@@var_466_object:SetNPCName(var_474_int);
	var_475_int = 0;
	func_6603(var_475_int);
	@@var_466_object:SetNPCDescription(var_475_int);
	var_476_string = "";
	func_6607(var_476_string);
	@@var_466_object:SetPhoto(var_476_string);
	var_477_string = "";
	func_6609(var_477_string);
	@@var_466_object:SetPhoto2(var_477_string);
	var_478_int = 0;
	func_7269(var_478_int);
	@@var_466_object:SetPlayerName(var_478_int);
	IsOverrideActive(var_467_bool);
	var_479_bool = var_467_bool;
	if(var_479_bool != 0) {
		var_459_int = -2;
		return 8;
	}
	DoDialog(var_466_object);
	var_480_bool = 0; var_481_object = Obj();
	func_6495(Obj());
	var_482_object = var_481_object;
	func_6304(var_480_bool, var_481_object);
	var_483_object = Obj(); var_484_object = Obj();
	var_460_object = var_483_object;
	var_466_object = var_484_object;
	TaskCall(7);
	func_2113(var_485_object, var_486_object, var_487_string, var_488_bool, var_483_object, var_484_object);
	TaskReturn();
	@@var_466_object:IsDialogEnd(var_469_bool);
	
Label_2095:
	var_542_bool = var_469_bool == 0; //@nz
	if(var_542_bool != 0) {
		sync();
		@@var_466_object:IsDialogEnd(var_469_bool);
		goto Label_2095;
	}
	var_460_object = Obj();
	func_6286();
	StopDialog(var_466_object);
	@@var_466_object:GetReturnValue((int)-1);
	var_468_int = var_459_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6644(var_143_object)
{
	Trace("money2000 is given");
	var_146_object = Obj(); var_147_int = 0;
	var_143_object = var_146_object;
	func_6528(var_146_object, (int)2000);
	return 0;
}


func_7160(var_985_bool)
{
	var_987_int = 0; var_988_string = "";
	func_6511(var_987_int, "ood10Maria1");
	var_990_bool = var_987_int == (int)0;
	if(var_990_bool != 0) {
		var_985_bool = 1;
		return 0;
	}
	var_985_bool = 0;
	return 0;
}


func_6654()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


