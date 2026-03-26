// @IMPORTS: Hold/0,StopGroup0/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,GetMainOutdoorScene/1,AddBlankActor/4,FindActor/2,Trigger/2,GetGameTime/1,lshWaitForAnimEnd/1,SetVariable/2,TriggerWorld/2,GetDiaryRoot/1,SetDiarySection/1,CreateDiaryEntry/4
// @STRINGS: W:Neutral|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetProperty|A:SetProperty|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:.bin|W:No|W:ui/NPC_Viktor.png|W:ood1Viktor1|W:ood1Viktor2|W:ood1Viktor3|W:ood1Viktor4|W:quest_d1_02|W:ood1Viktor5|W:playsound|W:givemoney|W:KnowBattleBrods|W:KnowShabnak|W:ood2Viktor1|W:KnowRavell|W:money 5000 is given|W:ood1Viktor6|W:ood1Viktor7|W:ood1Viktor8|W:ood1Viktor9|W:ood1Viktor10|W:ood1Viktor11|W:d1q02ViktorGotoAnna|W:pt_map_anna|A:AddMark|A:ShowMap|W:KnowStation|W:KnowFactory|W:KnowWarehouses|W:KnowViktor|W:d3q02ViktorGotoMladVlad|W:pt_map_maldvlad|W:d3q02ViktorGotoMladVladSelf|W:pt_map_viktor|W:pt_map_mladvlad|W:d3q02|W:d5q03|W:d5q03ViktorSavePrisonersSelf|W:d5q03SavePrisoners|W:pt_map_uprava_prison|W:quest_d5_03|W:place_prisoners|W:ood5Viktor1|W:money30000 is given|W:ood5Viktor2|W:ood5Viktor3|W:ood6Viktor1|W:d6q01|W:d6q01ViktorGotoAlexandr|W:pt_map_alexandr|W:d6q01ViktorGotoBigVlad|W:pt_map_bigvlad|W:d6q01ViktorGotoAlxBigSelf|W:KnowAlexandr|W:ood8Viktor1|W:ood9Viktor1|W:d9q01|W:quest_d9_01|W:place_rifles|W:ood9Viktor2|W:KnowMyth|W:d6ViktorVisit|W:ood9Viktor3|W:KnowBoyni|W:KnowTaurusProject|W:d1q01|W:d1q01TeloNedostupno|W:d1q02|W:d1q01FirstGeorgVisit|W:d2q03|W:d2q03MariaGotoViktor|W:KnowSaburivClan|W:KnowBigVlad|W:d8KainIsReason|W:KnowEva|W:d9TalkToPolkovodec|W:KnowJulia|W:KnowStamatins|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:player|W:Adding diary entry
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
// @EVENT_11: op=0xbf vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1c3 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x40b vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc9a vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xe54 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0x11f0 vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1474 vars=int,int
// @TASK_16: vars=object params=2
// @TASK_17: vars=object,object,string,bool params=2
// @EVENT_11: op=0x15fd vars=int,int
// @PE: 0x23,0x29,0x70,0xaf,0xbf,0x160,0x1b3,0x1c3,0x2cb,0x3fb,0x40b,0xc25,0xc8a,0xc9a,0xde4,0xe44,0xe54,0x1152,0x11e0,0x11f0,0x1408,0x1464,0x1474,0x1582,0x15ed,0x15fd,0x181d,0x186e,0x1883,0x1889,0x188f,0x1895,0x189b,0x18a4,0x18aa,0x18b0,0x18b6,0x18bc,0x18be,0x18c4,0x18ca,0x18d5,0x18d7,0x18dd,0x18e3,0x18e9,0x18ef,0x18f5,0x190b,0x191b,0x1921,0x1927,0x192d,0x194f,0x1951,0x1961,0x1963,0x1969,0x199e,0x19a4,0x19af,0x19b5,0x19b7,0x19bd,0x19f2,0x19f8,0x19fe,0x1a04,0x1a15,0x1a1b,0x1a21,0x1a27,0x1a2d,0x1a33,0x1a39,0x1a45,0x1a51,0x1a5d,0x1a69,0x1a75,0x1a81,0x1a8d,0x1a99,0x1aa5,0x1ab1,0x1abd,0x1ac9,0x1ad5,0x1ae1,0x1ae6,0x1af2,0x1afe,0x1b0a,0x1b16,0x1b22,0x1b2e,0x1b3a,0x1b46,0x1b4b,0x1b57,0x1b5c,0x1b68,0x1b74,0x1b80,0x1b8c,0x1b98,0x1ba4,0x1bb0,0x1bbc,0x1bc8,0x1bd4,0x1be0,0x1bec,0x1bf8,0x1c04,0x1c10,0x1c1c,0x1c28,0x1c34,0x1c40,0x1c4c,0x1c58,0x1d65

task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool)
{
	StopGroup0();
	return 0;
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool)
{
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool)
{
	var_41_object = Obj();
	var_40_bool = var_41_object;
	func_7525(var_41_object);
	return 0;
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool)
{
	var_41_bool = 0; var_42_object = Obj();
	var_40_bool = var_42_object;
	func_6100(var_41_bool, var_42_object);
	WaitForAnimEnd();
	return 0;
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_6195();
		var_45_bool = var_40_string == (int)1779;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_6445();
			var_50_string = "";
			func_175(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)1575);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)1576, (int)1782, (int)1780);
			@@@var_0_object:AddReply((int)1577, (int)1782, (int)1781);
			return 0;
		}
		var_73_bool = var_40_string == (int)1782;
		if(var_73_bool != 0) {
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_object;
			func_6683();
			var_78_string = "";
			func_175(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)1578);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)1580, (int)1785, (int)1784);
			@@@var_0_object:AddReply((int)1579, (int)-1, (int)1783);
			return 0;
		}
		var_87_bool = var_40_string == (int)1785;
		if(var_87_bool != 0) {
			var_88_string = "";
			func_175(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)1581);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)1582, (int)-1, (int)1786);
			@@@var_0_object:AddReply((int)1583, (int)-1, (int)1787);
			return 0;
		}
		var_3_string = true;
		var_96_bool = 0;
		func_6273(var_96_bool);
		if(var_96_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc0";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_6195();
		var_45_bool = var_41_bool == (int)13819;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_6595();
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_object;
			func_6589();
		}
		var_124_bool = var_41_bool == (int)13848;
		if(var_124_bool != 0) {
			var_125_object = Obj(); var_126_object = Obj();
			var_125_object = var_1_object;
			var_126_object = var_0_object;
			func_6595();
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_object;
			var_128_object = var_0_object;
			func_6589();
		}
		var_130_bool = var_40_string == (int)13254;
		if(var_130_bool != 0) {
			var_131_bool = 0; var_132_object = Obj();
			var_132_object = var_1_object;
			func_7100(var_132_object);
			if(var_131_bool != 0) {
				var_139_object = Obj(); var_140_object = Obj();
				var_139_object = var_1_object;
				var_140_object = var_0_object;
				func_6689();
				var_143_string = "";
				func_435(var_41_bool, "Neutral");
				@@@var_0_object:SetMessage((int)12036);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)12037, (int)13256, (int)13255);
				@@@var_0_object:AddReply((int)12640, (int)13821, (int)13820);
				return 0;
			}
			var_165_string = "";
			func_435(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13016);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13017, (int)-1, (int)14223);
			return 0;
		}
		var_171_bool = var_40_string == (int)13821;
		if(var_171_bool != 0) {
			var_172_string = "";
			func_435(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12641);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12642, (int)13823, (int)13822);
			return 0;
		}
		var_178_bool = var_40_string == (int)13823;
		if(var_178_bool != 0) {
			var_179_string = "";
			func_435(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12643);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12644, (int)13825, (int)13824);
			return 0;
		}
		var_185_bool = var_40_string == (int)13825;
		if(var_185_bool != 0) {
			var_186_string = "";
			func_435(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12645);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12666, (int)-1, (int)13848);
			return 0;
		}
		var_192_bool = var_40_string == (int)13256;
		if(var_192_bool != 0) {
			var_193_string = "";
			func_435(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12038);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12635, (int)13816, (int)13815);
			return 0;
		}
		var_199_bool = var_40_string == (int)13816;
		if(var_199_bool != 0) {
			var_200_string = "";
			func_435(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12636);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12637, (int)13818, (int)13817);
			return 0;
		}
		var_206_bool = var_40_string == (int)13818;
		if(var_206_bool != 0) {
			var_207_string = "";
			func_435(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12638);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12639, (int)-1, (int)13819);
			return 0;
		}
		var_3_string = true;
		var_212_bool = 0;
		func_6273(var_212_bool);
		if(var_212_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1c4";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_6195();
		var_45_bool = var_41_bool == (int)5686;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_6299();
			var_81_object = Obj(); var_82_object = Obj();
			var_81_object = var_1_object;
			var_82_object = var_0_object;
			func_6275();
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_6395();
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_6411(var_104_object);
		}
		var_130_bool = var_41_bool == (int)5685;
		if(var_130_bool != 0) {
			var_131_object = Obj(); var_132_object = Obj();
			var_131_object = var_1_object;
			var_132_object = var_0_object;
			func_6275();
		}
		var_134_bool = var_41_bool == (int)5689;
		if(var_134_bool != 0) {
			var_135_object = Obj(); var_136_object = Obj();
			var_135_object = var_1_object;
			var_136_object = var_0_object;
			func_6299();
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_object;
			func_6275();
			var_139_object = Obj(); var_140_object = Obj();
			var_139_object = var_1_object;
			var_140_object = var_0_object;
			func_6395();
		}
		var_142_bool = var_41_bool == (int)9297;
		if(var_142_bool != 0) {
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_object;
			func_6357();
			var_145_object = Obj(); var_146_object = Obj();
			var_145_object = var_1_object;
			var_146_object = var_0_object;
			func_6281();
			var_149_object = Obj(); var_150_object = Obj();
			var_149_object = var_1_object;
			var_150_object = var_0_object;
			func_6505();
		}
		var_161_bool = var_41_bool == (int)5621;
		if(var_161_bool != 0) {
			var_162_object = Obj(); var_163_object = Obj();
			var_162_object = var_1_object;
			var_163_object = var_0_object;
			func_6299();
		}
		var_165_bool = var_41_bool == (int)9316;
		if(var_165_bool != 0) {
			var_166_object = Obj(); var_167_object = Obj();
			var_166_object = var_1_object;
			var_167_object = var_0_object;
			func_6293();
			var_170_object = Obj(); var_171_object = Obj();
			var_170_object = var_1_object;
			var_171_object = var_0_object;
			func_6395();
			var_172_object = Obj(); var_173_object = Obj();
			var_172_object = var_1_object;
			var_173_object = var_0_object;
			func_6299();
			var_174_object = Obj(); var_175_object = Obj();
			var_174_object = var_1_object;
			var_175_object = var_0_object;
			func_6411(var_175_object);
		}
		var_177_bool = var_41_bool == (int)5648;
		if(var_177_bool != 0) {
			var_178_object = Obj(); var_179_object = Obj();
			var_178_object = var_1_object;
			var_179_object = var_0_object;
			func_6287();
		}
		var_183_bool = var_41_bool == (int)5649;
		if(var_183_bool != 0) {
			var_184_object = Obj(); var_185_object = Obj();
			var_184_object = var_1_object;
			var_185_object = var_0_object;
			func_6287();
		}
		var_187_bool = var_41_bool == (int)5718;
		if(var_187_bool != 0) {
			var_188_object = Obj(); var_189_object = Obj();
			var_188_object = var_1_object;
			var_189_object = var_0_object;
			func_6308();
		}
		var_193_bool = var_41_bool == (int)5719;
		if(var_193_bool != 0) {
			var_194_object = Obj(); var_195_object = Obj();
			var_194_object = var_1_object;
			var_195_object = var_0_object;
			func_6308();
		}
		var_197_bool = var_41_bool == (int)5724;
		if(var_197_bool != 0) {
			var_198_object = Obj(); var_199_object = Obj();
			var_198_object = var_1_object;
			var_199_object = var_0_object;
			func_6308();
		}
		var_201_bool = var_41_bool == (int)5725;
		if(var_201_bool != 0) {
			var_202_object = Obj(); var_203_object = Obj();
			var_202_object = var_1_object;
			var_203_object = var_0_object;
			func_6308();
		}
		var_205_bool = var_41_bool == (int)5726;
		if(var_205_bool != 0) {
			var_206_object = Obj(); var_207_object = Obj();
			var_206_object = var_1_object;
			var_207_object = var_0_object;
			func_6308();
		}
		var_209_bool = var_41_bool == (int)9329;
		if(var_209_bool != 0) {
			var_210_object = Obj(); var_211_object = Obj();
			var_210_object = var_1_object;
			var_211_object = var_0_object;
			func_6359();
		}
		var_215_bool = var_41_bool == (int)9334;
		if(var_215_bool != 0) {
			var_216_object = Obj(); var_217_object = Obj();
			var_216_object = var_1_object;
			var_217_object = var_0_object;
			func_6359();
		}
		var_219_bool = var_41_bool == (int)9341;
		if(var_219_bool != 0) {
			var_220_object = Obj(); var_221_object = Obj();
			var_220_object = var_1_object;
			var_221_object = var_0_object;
			func_6365();
		}
		var_225_bool = var_41_bool == (int)9347;
		if(var_225_bool != 0) {
			var_226_object = Obj(); var_227_object = Obj();
			var_226_object = var_1_object;
			var_227_object = var_0_object;
			func_6371();
		}
		var_231_bool = var_41_bool == (int)9349;
		if(var_231_bool != 0) {
			var_232_object = Obj(); var_233_object = Obj();
			var_232_object = var_1_object;
			var_233_object = var_0_object;
			func_6371();
		}
		var_235_bool = var_41_bool == (int)9354;
		if(var_235_bool != 0) {
			var_236_object = Obj(); var_237_object = Obj();
			var_236_object = var_1_object;
			var_237_object = var_0_object;
			func_6377();
		}
		var_241_bool = var_41_bool == (int)9357;
		if(var_241_bool != 0) {
			var_242_object = Obj(); var_243_object = Obj();
			var_242_object = var_1_object;
			var_243_object = var_0_object;
			func_6377();
		}
		var_245_bool = var_41_bool == (int)9360;
		if(var_245_bool != 0) {
			var_246_object = Obj(); var_247_object = Obj();
			var_246_object = var_1_object;
			var_247_object = var_0_object;
			func_6383();
		}
		var_251_bool = var_41_bool == (int)9361;
		if(var_251_bool != 0) {
			var_252_object = Obj(); var_253_object = Obj();
			var_252_object = var_1_object;
			var_253_object = var_0_object;
			func_6383();
		}
		var_255_bool = var_41_bool == (int)5667;
		if(var_255_bool != 0) {
			var_256_object = Obj(); var_257_object = Obj();
			var_256_object = var_1_object;
			var_257_object = var_0_object;
			func_6389();
		}
		var_261_bool = var_41_bool == (int)5668;
		if(var_261_bool != 0) {
			var_262_object = Obj(); var_263_object = Obj();
			var_262_object = var_1_object;
			var_263_object = var_0_object;
			func_6389();
		}
		var_265_bool = var_41_bool == (int)5671;
		if(var_265_bool != 0) {
			var_266_object = Obj(); var_267_object = Obj();
			var_266_object = var_1_object;
			var_267_object = var_0_object;
			func_6389();
		}
		var_269_bool = var_40_string == (int)5624;
		if(var_269_bool != 0) {
			var_270_bool = 0; var_271_object = Obj();
			var_271_object = var_1_object;
			func_6821(var_271_object);
			var_278_bool = var_270_bool == 0; //@nz
			if(var_278_bool != 0) {
				var_279_string = "";
				func_1019(var_41_bool, "Neutral");
				@@@var_0_object:SetMessage((int)5111);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)5112, (int)5626, (int)5625);
				@@@var_0_object:AddReply((int)5119, (int)5626, (int)5632);
				@@@var_0_object:AddReply((int)5120, (int)-1, (int)5634);
				return 0;
			}
			var_304_bool = 0; var_305_object = Obj();
			var_305_object = var_1_object;
			func_6713(var_305_object);
			if(var_304_bool != 0) {
				var_310_string = "";
				func_1019(var_41_bool, "Neutral");
				@@@var_0_object:SetMessage((int)5155);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)5156, (int)5678, (int)5677);
				@@@var_0_object:AddReply((int)5183, (int)5678, (int)5707);
				@@@var_0_object:AddReply((int)5184, (int)5678, (int)5709);
				return 0;
			}
			var_321_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5106);
			@@@var_0_object:ClearReplies();
			var_323_bool = 0;
			var_323_bool = 0;
			var_324_bool = 0; var_325_object = Obj();
			var_325_object = var_1_object;
			func_6725(var_325_object);
			if(var_324_bool != 0) {
				var_330_bool = 0; var_331_object = Obj();
				var_331_object = var_1_object;
				func_6821(var_331_object);
				if(var_330_bool != 0) {
					var_323_bool = 1;
				}
			}
			if(var_323_bool != 0) {
				@@@var_0_object:AddReply((int)5107, (int)9234, (int)5620);
			}
			var_335_bool = 0;
			var_335_bool = 0;
			var_336_bool = 0; var_337_object = Obj();
			var_337_object = var_1_object;
			func_6785(var_337_object);
			if(var_336_bool != 0) {
				var_342_bool = 0; var_343_object = Obj();
				var_343_object = var_1_object;
				func_6749(var_343_object);
				if(var_342_bool != 0) {
					var_335_bool = 1;
				}
			}
			if(var_335_bool != 0) {
				@@@var_0_object:AddReply((int)5108, (int)9315, (int)5621);
			}
			var_351_bool = 0;
			var_351_bool = 0;
			var_352_bool = 0; var_353_object = Obj();
			var_353_object = var_1_object;
			func_6881(var_353_object);
			if(var_352_bool != 0) {
				var_354_bool = 0; var_355_object = Obj();
				var_355_object = var_1_object;
				func_6737(var_355_object);
				if(var_354_bool != 0) {
					var_351_bool = 1;
				}
			}
			if(var_351_bool != 0) {
				@@@var_0_object:AddReply((int)8455, (int)5635, (int)9290);
			}
			var_363_bool = 0;
			var_363_bool = 0;
			var_364_bool = 0; var_365_object = Obj();
			var_365_object = var_1_object;
			func_6797(var_365_object);
			if(var_364_bool != 0) {
				var_370_bool = 0; var_371_object = Obj();
				var_371_object = var_1_object;
				func_6809(var_371_object);
				if(var_370_bool != 0) {
					var_363_bool = 1;
				}
			}
			if(var_363_bool != 0) {
				@@@var_0_object:AddReply((int)5109, (int)5711, (int)5622);
			}
			var_379_bool = 0;
			var_379_bool = 0;
			var_380_bool = 0; var_381_object = Obj();
			var_381_object = var_1_object;
			func_7172(var_381_object);
			if(var_380_bool != 0) {
				var_386_bool = 0; var_387_object = Obj();
				var_387_object = var_1_object;
				func_6886(var_387_object);
				if(var_386_bool != 0) {
					var_379_bool = 1;
				}
			}
			if(var_379_bool != 0) {
				@@@var_0_object:AddReply((int)8390, (int)9317, (int)9213);
			}
			var_395_bool = 0;
			var_395_bool = 0;
			var_396_bool = 0; var_397_object = Obj();
			var_397_object = var_1_object;
			func_7220(var_397_object);
			if(var_396_bool != 0) {
				var_402_bool = 0; var_403_object = Obj();
				var_403_object = var_1_object;
				func_6898(var_403_object);
				if(var_402_bool != 0) {
					var_395_bool = 1;
				}
			}
			if(var_395_bool != 0) {
				@@@var_0_object:AddReply((int)8392, (int)9247, (int)9215);
			}
			var_411_bool = 0;
			var_411_bool = 0;
			var_412_bool = 0; var_413_object = Obj();
			var_413_object = var_1_object;
			func_7112(var_413_object);
			if(var_412_bool != 0) {
				var_418_bool = 0; var_419_object = Obj();
				var_419_object = var_1_object;
				func_6910(var_419_object);
				if(var_418_bool != 0) {
					var_411_bool = 1;
				}
			}
			if(var_411_bool != 0) {
				@@@var_0_object:AddReply((int)8397, (int)9248, (int)9220);
			}
			var_427_bool = 0;
			var_427_bool = 0;
			var_428_bool = 0; var_429_object = Obj();
			var_429_object = var_1_object;
			func_7124(var_429_object);
			if(var_428_bool != 0) {
				var_434_bool = 0; var_435_object = Obj();
				var_435_object = var_1_object;
				func_6922(var_435_object);
				if(var_434_bool != 0) {
					var_427_bool = 1;
				}
			}
			if(var_427_bool != 0) {
				@@@var_0_object:AddReply((int)8399, (int)9249, (int)9222);
			}
			var_443_bool = 0;
			var_443_bool = 0;
			var_444_bool = 0; var_445_object = Obj();
			var_445_object = var_1_object;
			func_7244(var_445_object);
			if(var_444_bool != 0) {
				var_450_bool = 0; var_451_object = Obj();
				var_451_object = var_1_object;
				func_6934(var_451_object);
				if(var_450_bool != 0) {
					var_443_bool = 1;
				}
			}
			if(var_443_bool != 0) {
				@@@var_0_object:AddReply((int)8404, (int)9358, (int)9227);
			}
			var_459_bool = 0;
			var_459_bool = 0;
			var_460_bool = 0; var_461_object = Obj();
			var_461_object = var_1_object;
			func_6773(var_461_object);
			if(var_460_bool != 0) {
				var_466_bool = 0; var_467_object = Obj();
				var_467_object = var_1_object;
				func_6946(var_467_object);
				if(var_466_bool != 0) {
					var_459_bool = 1;
				}
			}
			if(var_459_bool != 0) {
				@@@var_0_object:AddReply((int)5142, (int)5662, (int)5661);
			}
			@@@var_0_object:AddReply((int)5110, (int)-1, (int)5623);
			return 0;
		}
		var_479_bool = var_40_string == (int)5662;
		if(var_479_bool != 0) {
			var_480_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5143);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5144, (int)5664, (int)5663);
			@@@var_0_object:AddReply((int)5154, (int)5664, (int)5674);
			return 0;
		}
		var_489_bool = var_40_string == (int)5664;
		if(var_489_bool != 0) {
			var_490_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5145);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5146, (int)5666, (int)5665);
			@@@var_0_object:AddReply((int)5153, (int)5666, (int)5672);
			return 0;
		}
		var_499_bool = var_40_string == (int)5666;
		if(var_499_bool != 0) {
			var_500_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5147);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5148, (int)-1, (int)5667);
			@@@var_0_object:AddReply((int)5149, (int)-1, (int)5668);
			@@@var_0_object:AddReply((int)5150, (int)5670, (int)5669);
			return 0;
		}
		var_512_bool = var_40_string == (int)5670;
		if(var_512_bool != 0) {
			var_513_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5151);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5152, (int)-1, (int)5671);
			return 0;
		}
		var_519_bool = var_40_string == (int)9358;
		if(var_519_bool != 0) {
			var_520_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8516);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8517, (int)9250, (int)9359);
			return 0;
		}
		var_526_bool = var_40_string == (int)9250;
		if(var_526_bool != 0) {
			var_527_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8427);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8518, (int)-1, (int)9360);
			@@@var_0_object:AddReply((int)8519, (int)-1, (int)9361);
			return 0;
		}
		var_536_bool = var_40_string == (int)9249;
		if(var_536_bool != 0) {
			var_537_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8426);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8508, (int)9351, (int)9350);
			return 0;
		}
		var_543_bool = var_40_string == (int)9351;
		if(var_543_bool != 0) {
			var_544_object = Obj(); var_545_object = Obj();
			var_544_object = var_1_object;
			var_545_object = var_0_object;
			func_6642();
			var_548_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8509);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8510, (int)9353, (int)9352);
			var_553_bool = 0; var_554_object = Obj();
			var_554_object = var_1_object;
			func_7256(var_554_object);
			var_559_bool = var_553_bool == 0; //@nz
			if(var_559_bool != 0) {
				@@@var_0_object:AddReply((int)8513, (int)9356, (int)9355);
			}
			return 0;
		}
		var_564_bool = var_40_string == (int)9356;
		if(var_564_bool != 0) {
			var_565_object = Obj(); var_566_object = Obj();
			var_565_object = var_1_object;
			var_566_object = var_0_object;
			func_6701();
			var_569_object = Obj(); var_570_object = Obj();
			var_569_object = var_1_object;
			var_570_object = var_0_object;
			func_6433();
			var_573_object = Obj(); var_574_object = Obj();
			var_573_object = var_1_object;
			var_574_object = var_0_object;
			func_6427();
			var_577_object = Obj(); var_578_object = Obj();
			var_577_object = var_1_object;
			var_578_object = var_0_object;
			func_6439();
			var_581_object = Obj(); var_582_object = Obj();
			var_581_object = var_1_object;
			var_582_object = var_0_object;
			func_6707();
			var_585_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8514);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8515, (int)-1, (int)9357);
			return 0;
		}
		var_591_bool = var_40_string == (int)9353;
		if(var_591_bool != 0) {
			var_592_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8511);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8512, (int)-1, (int)9354);
			return 0;
		}
		var_598_bool = var_40_string == (int)9248;
		if(var_598_bool != 0) {
			var_599_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8425);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8500, (int)9343, (int)9342);
			return 0;
		}
		var_605_bool = var_40_string == (int)9343;
		if(var_605_bool != 0) {
			var_606_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8501);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8502, (int)9345, (int)9344);
			@@@var_0_object:AddReply((int)8507, (int)-1, (int)9349);
			return 0;
		}
		var_615_bool = var_40_string == (int)9345;
		if(var_615_bool != 0) {
			var_616_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8503);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8504, (int)9348, (int)9346);
			return 0;
		}
		var_622_bool = var_40_string == (int)9348;
		if(var_622_bool != 0) {
			var_623_object = Obj(); var_624_object = Obj();
			var_623_object = var_1_object;
			var_624_object = var_0_object;
			func_6320();
			var_627_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8506);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8505, (int)-1, (int)9347);
			return 0;
		}
		var_633_bool = var_40_string == (int)9247;
		if(var_633_bool != 0) {
			var_634_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8424);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8495, (int)9338, (int)9337);
			return 0;
		}
		var_640_bool = var_40_string == (int)9338;
		if(var_640_bool != 0) {
			var_641_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8496);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8497, (int)9340, (int)9339);
			return 0;
		}
		var_647_bool = var_40_string == (int)9340;
		if(var_647_bool != 0) {
			var_648_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8498);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8499, (int)-1, (int)9341);
			return 0;
		}
		var_654_bool = var_40_string == (int)9317;
		if(var_654_bool != 0) {
			var_655_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8477);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8478, (int)9246, (int)9318);
			@@@var_0_object:AddReply((int)8481, (int)9322, (int)9321);
			return 0;
		}
		var_664_bool = var_40_string == (int)9322;
		if(var_664_bool != 0) {
			var_665_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8482);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8483, (int)9246, (int)9323);
			return 0;
		}
		var_671_bool = var_40_string == (int)9246;
		if(var_671_bool != 0) {
			var_672_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8423);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8479, (int)9320, (int)9319);
			@@@var_0_object:AddReply((int)8494, (int)9331, (int)9335);
			return 0;
		}
		var_681_bool = var_40_string == (int)9320;
		if(var_681_bool != 0) {
			var_682_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8480);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8484, (int)9326, (int)9325);
			return 0;
		}
		var_688_bool = var_40_string == (int)9326;
		if(var_688_bool != 0) {
			var_689_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8485);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8486, (int)9328, (int)9327);
			@@@var_0_object:AddReply((int)8489, (int)9331, (int)9330);
			return 0;
		}
		var_698_bool = var_40_string == (int)9331;
		if(var_698_bool != 0) {
			var_699_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8490);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8491, (int)9333, (int)9332);
			return 0;
		}
		var_705_bool = var_40_string == (int)9333;
		if(var_705_bool != 0) {
			var_706_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8492);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8493, (int)-1, (int)9334);
			return 0;
		}
		var_712_bool = var_40_string == (int)9328;
		if(var_712_bool != 0) {
			var_713_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8487);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8488, (int)-1, (int)9329);
			return 0;
		}
		var_719_bool = var_40_string == (int)5711;
		if(var_719_bool != 0) {
			var_720_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5185);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5186, (int)5713, (int)5712);
			@@@var_0_object:AddReply((int)5202, (int)5713, (int)5729);
			@@@var_0_object:AddReply((int)5203, (int)5713, (int)5731);
			return 0;
		}
		var_732_bool = var_40_string == (int)5713;
		if(var_732_bool != 0) {
			var_733_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5187);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5188, (int)5715, (int)5714);
			@@@var_0_object:AddReply((int)5201, (int)5715, (int)5727);
			return 0;
		}
		var_742_bool = var_40_string == (int)5715;
		if(var_742_bool != 0) {
			var_743_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5189);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5190, (int)5717, (int)5716);
			@@@var_0_object:AddReply((int)5194, (int)5721, (int)5720);
			return 0;
		}
		var_752_bool = var_40_string == (int)5721;
		if(var_752_bool != 0) {
			var_753_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5195);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5196, (int)5723, (int)5722);
			@@@var_0_object:AddReply((int)5200, (int)-1, (int)5726);
			return 0;
		}
		var_762_bool = var_40_string == (int)5723;
		if(var_762_bool != 0) {
			var_763_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5197);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5198, (int)-1, (int)5724);
			@@@var_0_object:AddReply((int)5199, (int)-1, (int)5725);
			return 0;
		}
		var_772_bool = var_40_string == (int)5717;
		if(var_772_bool != 0) {
			var_773_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5191);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5192, (int)-1, (int)5718);
			@@@var_0_object:AddReply((int)5193, (int)-1, (int)5719);
			return 0;
		}
		var_782_bool = var_40_string == (int)5635;
		if(var_782_bool != 0) {
			var_783_object = Obj(); var_784_object = Obj();
			var_783_object = var_1_object;
			var_784_object = var_0_object;
			func_6326();
			var_787_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5121);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5122, (int)5637, (int)5636);
			var_792_bool = 0; var_793_object = Obj();
			var_793_object = var_1_object;
			func_7004(var_793_object);
			var_798_bool = var_792_bool == 0; //@nz
			if(var_798_bool != 0) {
				@@@var_0_object:AddReply((int)8466, (int)9304, (int)9303);
			}
			return 0;
		}
		var_803_bool = var_40_string == (int)9304;
		if(var_803_bool != 0) {
			var_804_object = Obj(); var_805_object = Obj();
			var_804_object = var_1_object;
			var_805_object = var_0_object;
			func_6326();
			var_806_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8467);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8468, (int)5637, (int)9305);
			return 0;
		}
		var_812_bool = var_40_string == (int)5637;
		if(var_812_bool != 0) {
			var_813_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5123);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5124, (int)5639, (int)5638);
			@@@var_0_object:AddReply((int)8472, (int)9312, (int)9311);
			@@@var_0_object:AddReply((int)8469, (int)9308, (int)9307);
			return 0;
		}
		var_825_bool = var_40_string == (int)9308;
		if(var_825_bool != 0) {
			var_826_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8470);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8471, (int)5639, (int)9309);
			return 0;
		}
		var_832_bool = var_40_string == (int)9312;
		if(var_832_bool != 0) {
			var_833_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8473);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8474, (int)5639, (int)9313);
			return 0;
		}
		var_839_bool = var_40_string == (int)5639;
		if(var_839_bool != 0) {
			var_840_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5125);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5126, (int)5641, (int)5640);
			@@@var_0_object:AddReply((int)5138, (int)5641, (int)5654);
			return 0;
		}
		var_849_bool = var_40_string == (int)5641;
		if(var_849_bool != 0) {
			var_850_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5127);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5128, (int)5643, (int)5642);
			@@@var_0_object:AddReply((int)5137, (int)5643, (int)5652);
			return 0;
		}
		var_859_bool = var_40_string == (int)5643;
		if(var_859_bool != 0) {
			var_860_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5129);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5130, (int)5645, (int)5644);
			return 0;
		}
		var_866_bool = var_40_string == (int)5645;
		if(var_866_bool != 0) {
			var_867_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5131);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5132, (int)5647, (int)5646);
			@@@var_0_object:AddReply((int)5136, (int)5647, (int)5650);
			return 0;
		}
		var_876_bool = var_40_string == (int)5647;
		if(var_876_bool != 0) {
			var_877_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5133);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5134, (int)-1, (int)5648);
			@@@var_0_object:AddReply((int)5135, (int)-1, (int)5649);
			return 0;
		}
		var_886_bool = var_40_string == (int)9315;
		if(var_886_bool != 0) {
			var_887_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8475);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8476, (int)-1, (int)9316);
			return 0;
		}
		var_893_bool = var_40_string == (int)9234;
		if(var_893_bool != 0) {
			var_894_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8411);
			@@@var_0_object:ClearReplies();
			var_896_bool = 0; var_897_object = Obj();
			var_897_object = var_1_object;
			func_6958(var_897_object);
			if(var_896_bool != 0) {
				@@@var_0_object:AddReply((int)8448, (int)9282, (int)9281);
			}
			var_905_bool = 0; var_906_object = Obj();
			var_906_object = var_1_object;
			func_6761(var_906_object);
			if(var_905_bool != 0) {
				@@@var_0_object:AddReply((int)8463, (int)9300, (int)9299);
			}
			return 0;
		}
		var_915_bool = var_40_string == (int)9300;
		if(var_915_bool != 0) {
			var_916_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8464);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8465, (int)-1, (int)9301);
			return 0;
		}
		var_922_bool = var_40_string == (int)9282;
		if(var_922_bool != 0) {
			var_923_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8449);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8451, (int)9287, (int)9284);
			@@@var_0_object:AddReply((int)8452, (int)9287, (int)9285);
			@@@var_0_object:AddReply((int)8453, (int)9287, (int)9286);
			return 0;
		}
		var_935_bool = var_40_string == (int)9287;
		if(var_935_bool != 0) {
			var_936_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8454);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8412, (int)9236, (int)9235);
			return 0;
		}
		var_942_bool = var_40_string == (int)9236;
		if(var_942_bool != 0) {
			var_943_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8413);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8414, (int)9238, (int)9237);
			return 0;
		}
		var_949_bool = var_40_string == (int)9238;
		if(var_949_bool != 0) {
			var_950_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8415);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8416, (int)9240, (int)9239);
			@@@var_0_object:AddReply((int)8418, (int)9242, (int)9241);
			return 0;
		}
		var_959_bool = var_40_string == (int)9242;
		if(var_959_bool != 0) {
			var_960_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8419);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8456, (int)9292, (int)9291);
			return 0;
		}
		var_966_bool = var_40_string == (int)9292;
		if(var_966_bool != 0) {
			var_967_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8457);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8459, (int)9244, (int)9294);
			return 0;
		}
		var_973_bool = var_40_string == (int)9240;
		if(var_973_bool != 0) {
			var_974_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8417);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8420, (int)9244, (int)9243);
			return 0;
		}
		var_980_bool = var_40_string == (int)9244;
		if(var_980_bool != 0) {
			var_981_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8421);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8430, (int)9254, (int)9253);
			@@@var_0_object:AddReply((int)8422, (int)9251, (int)9245);
			return 0;
		}
		var_990_bool = var_40_string == (int)9254;
		if(var_990_bool != 0) {
			var_991_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8431);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8432, (int)9256, (int)9255);
			return 0;
		}
		var_997_bool = var_40_string == (int)9256;
		if(var_997_bool != 0) {
			var_998_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8433);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8434, (int)9258, (int)9257);
			return 0;
		}
		var_1004_bool = var_40_string == (int)9258;
		if(var_1004_bool != 0) {
			var_1005_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8435);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8436, (int)9251, (int)9259);
			return 0;
		}
		var_1011_bool = var_40_string == (int)9251;
		if(var_1011_bool != 0) {
			var_1012_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8428);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8429, (int)9296, (int)9252);
			return 0;
		}
		var_1018_bool = var_40_string == (int)9296;
		if(var_1018_bool != 0) {
			var_1019_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8460);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8461, (int)-1, (int)9297);
			return 0;
		}
		var_1025_bool = var_40_string == (int)5678;
		if(var_1025_bool != 0) {
			var_1026_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5157);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5158, (int)5680, (int)5679);
			@@@var_0_object:AddReply((int)5181, (int)5680, (int)5705);
			@@@var_0_object:AddReply((int)5182, (int)5680, (int)5706);
			return 0;
		}
		var_1038_bool = var_40_string == (int)5680;
		if(var_1038_bool != 0) {
			var_1039_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5159);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5160, (int)5682, (int)5681);
			@@@var_0_object:AddReply((int)5177, (int)5684, (int)5700);
			@@@var_0_object:AddReply((int)5178, (int)5703, (int)5702);
			return 0;
		}
		var_1051_bool = var_40_string == (int)5703;
		if(var_1051_bool != 0) {
			var_1052_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5179);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5180, (int)5694, (int)5704);
			return 0;
		}
		var_1058_bool = var_40_string == (int)5682;
		if(var_1058_bool != 0) {
			var_1059_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5161);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5162, (int)5684, (int)5683);
			@@@var_0_object:AddReply((int)5170, (int)5692, (int)5691);
			return 0;
		}
		var_1068_bool = var_40_string == (int)5692;
		if(var_1068_bool != 0) {
			var_1069_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5171);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5172, (int)5694, (int)5693);
			@@@var_0_object:AddReply((int)5176, (int)5694, (int)5699);
			return 0;
		}
		var_1078_bool = var_40_string == (int)5694;
		if(var_1078_bool != 0) {
			var_1079_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5173);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5174, (int)5684, (int)5695);
			@@@var_0_object:AddReply((int)5175, (int)5684, (int)5697);
			return 0;
		}
		var_1088_bool = var_40_string == (int)5684;
		if(var_1088_bool != 0) {
			var_1089_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5163);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5165, (int)-1, (int)5686);
			@@@var_0_object:AddReply((int)5164, (int)-1, (int)5685);
			@@@var_0_object:AddReply((int)5166, (int)5688, (int)5687);
			return 0;
		}
		var_1101_bool = var_40_string == (int)5688;
		if(var_1101_bool != 0) {
			var_1102_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5167);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5168, (int)-1, (int)5689);
			return 0;
		}
		var_1108_bool = var_40_string == (int)5626;
		if(var_1108_bool != 0) {
			var_1109_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5113);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5114, (int)5628, (int)5627);
			@@@var_0_object:AddReply((int)5118, (int)-1, (int)5631);
			return 0;
		}
		var_1118_bool = var_40_string == (int)5628;
		if(var_1118_bool != 0) {
			var_1119_string = "";
			func_1019(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5115);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5116, (int)-1, (int)5629);
			@@@var_0_object:AddReply((int)5117, (int)-1, (int)5630);
			return 0;
		}
		var_3_string = true;
		var_1127_bool = 0;
		func_6273(var_1127_bool);
		if(var_1127_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x40c";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_6195();
		var_45_bool = var_41_bool == (int)8194;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_6334();
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_object;
			func_6346(var_51_object);
			var_59_object = Obj(); var_60_object = Obj();
			var_59_object = var_1_object;
			var_60_object = var_0_object;
			func_6314();
		}
		var_64_bool = var_41_bool == (int)8192;
		if(var_64_bool != 0) {
			var_65_object = Obj(); var_66_object = Obj();
			var_65_object = var_1_object;
			var_66_object = var_0_object;
			func_6334();
		}
		var_68_bool = var_40_string == (int)7630;
		if(var_68_bool != 0) {
			var_69_string = "";
			func_3210(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6924);
			@@@var_0_object:ClearReplies();
			var_85_bool = 0;
			var_85_bool = 0;
			var_86_bool = 0;
			var_86_bool = 0;
			var_87_bool = 0; var_88_object = Obj();
			var_88_object = var_1_object;
			func_6833(var_88_object);
			if(var_87_bool != 0) {
				var_95_bool = 0; var_96_object = Obj();
				var_96_object = var_1_object;
				func_6869(var_96_object);
				if(var_95_bool != 0) {
					var_86_bool = 1;
				}
			}
			if(var_86_bool != 0) {
				var_101_bool = 0; var_102_object = Obj();
				var_102_object = var_1_object;
				func_6857(var_102_object);
				if(var_101_bool != 0) {
					var_85_bool = 1;
				}
			}
			if(var_85_bool != 0) {
				@@@var_0_object:AddReply((int)6925, (int)7632, (int)7631);
			}
			@@@var_0_object:AddReply((int)7777, (int)-1, (int)8579);
			return 0;
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=0";
		EMIT "Call 0xc8a";
		EMIT "Pop(1)";
		EMIT "Push((int) 9531)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
		EMIT "Pop(0)";
		EMIT "Push((int) 9532)";
		EMIT "Push((int) 10478)";
		EMIT "Push((int) 10477)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Push((int) 9539)";
		EMIT "Push((int) 10478)";
		EMIT "Push((int) 10484)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Return(); Pop(0)";
		}
		var_114_bool = var_40_string == (int)10478;
		if(var_114_bool != 0) {
			var_115_string = "";
			func_3210(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9533);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9534, (int)-1, (int)10479);
			@@@var_0_object:AddReply((int)9535, (int)10481, (int)10480);
			return 0;
		}
		var_124_bool = var_40_string == (int)10481;
		if(var_124_bool != 0) {
			var_125_string = "";
			func_3210(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9536);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9537, (int)-1, (int)10482);
			@@@var_0_object:AddReply((int)9538, (int)-1, (int)10483);
			return 0;
		}
		var_134_bool = var_40_string == (int)7632;
		if(var_134_bool != 0) {
			var_135_string = "";
			func_3210(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6926);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6927, (int)8188, (int)7633);
			var_140_bool = 0; var_141_object = Obj();
			var_141_object = var_1_object;
			func_6845(var_141_object);
			if(var_140_bool != 0) {
				@@@var_0_object:AddReply((int)7420, (int)8190, (int)8189);
			}
			return 0;
		}
		var_150_bool = var_40_string == (int)8190;
		if(var_150_bool != 0) {
			var_151_string = "";
			func_3210(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7421);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7426, (int)8197, (int)8195);
			return 0;
		}
		var_157_bool = var_40_string == (int)8197;
		if(var_157_bool != 0) {
			var_158_string = "";
			func_3210(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7427);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7428, (int)8188, (int)8198);
			return 0;
		}
		var_164_bool = var_40_string == (int)8188;
		if(var_164_bool != 0) {
			var_165_object = Obj(); var_166_object = Obj();
			var_165_object = var_1_object;
			var_166_object = var_0_object;
			func_6340();
			var_169_string = "";
			func_3210(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7419);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7422, (int)8193, (int)8191);
			@@@var_0_object:AddReply((int)7423, (int)-1, (int)8192);
			return 0;
		}
		var_178_bool = var_40_string == (int)8193;
		if(var_178_bool != 0) {
			var_179_string = "";
			func_3210(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7424);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7425, (int)-1, (int)8194);
			return 0;
		}
		var_3_string = true;
		var_184_bool = 0;
		func_6273(var_184_bool);
		if(var_184_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc9b";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_6195();
		var_45_bool = var_41_bool == (int)11314;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_6479();
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_6451();
			var_96_object = Obj(); var_97_object = Obj();
			var_96_object = var_1_object;
			var_97_object = var_0_object;
			func_6481(var_97_object);
		}
		var_123_bool = var_41_bool == (int)11315;
		if(var_123_bool != 0) {
			var_124_object = Obj(); var_125_object = Obj();
			var_124_object = var_1_object;
			var_125_object = var_0_object;
			func_6479();
			var_126_object = Obj(); var_127_object = Obj();
			var_126_object = var_1_object;
			var_127_object = var_0_object;
			func_6451();
			var_128_object = Obj(); var_129_object = Obj();
			var_128_object = var_1_object;
			var_129_object = var_0_object;
			func_6481(var_129_object);
		}
		var_131_bool = var_41_bool == (int)11318;
		if(var_131_bool != 0) {
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_6479();
			var_134_object = Obj(); var_135_object = Obj();
			var_134_object = var_1_object;
			var_135_object = var_0_object;
			func_6451();
			var_136_object = Obj(); var_137_object = Obj();
			var_136_object = var_1_object;
			var_137_object = var_0_object;
			func_6481(var_137_object);
		}
		var_139_bool = var_41_bool == (int)11340;
		if(var_139_bool != 0) {
			var_140_object = Obj(); var_141_object = Obj();
			var_140_object = var_1_object;
			var_141_object = var_0_object;
			func_6497();
			var_142_object = Obj(); var_143_object = Obj();
			var_142_object = var_1_object;
			var_143_object = var_0_object;
			func_6499();
			var_146_object = Obj(); var_147_object = Obj();
			var_146_object = var_1_object;
			var_147_object = var_0_object;
			func_6411(var_147_object);
		}
		var_154_bool = var_41_bool == (int)11341;
		if(var_154_bool != 0) {
			var_155_object = Obj(); var_156_object = Obj();
			var_155_object = var_1_object;
			var_156_object = var_0_object;
			func_6497();
			var_157_object = Obj(); var_158_object = Obj();
			var_157_object = var_1_object;
			var_158_object = var_0_object;
			func_6499();
			var_159_object = Obj(); var_160_object = Obj();
			var_159_object = var_1_object;
			var_160_object = var_0_object;
			func_6411(var_160_object);
		}
		var_162_bool = var_41_bool == (int)11335;
		if(var_162_bool != 0) {
			var_163_object = Obj(); var_164_object = Obj();
			var_163_object = var_1_object;
			var_164_object = var_0_object;
			func_6497();
		}
		var_166_bool = var_41_bool == (int)11326;
		if(var_166_bool != 0) {
			var_167_object = Obj(); var_168_object = Obj();
			var_167_object = var_1_object;
			var_168_object = var_0_object;
			func_6497();
		}
		var_170_bool = var_40_string == (int)11285;
		if(var_170_bool != 0) {
			var_171_string = "";
			func_3652(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10235);
			@@@var_0_object:ClearReplies();
			var_187_bool = 0;
			var_187_bool = 0;
			var_188_bool = 0; var_189_object = Obj();
			var_189_object = var_1_object;
			func_6970(var_189_object);
			if(var_188_bool != 0) {
				var_196_bool = 0; var_197_object = Obj();
				var_197_object = var_1_object;
				func_6982(var_197_object);
				if(var_196_bool != 0) {
					var_187_bool = 1;
				}
			}
			if(var_187_bool != 0) {
				@@@var_0_object:AddReply((int)10236, (int)11288, (int)11286);
			}
			var_201_bool = 0;
			var_201_bool = 0;
			var_202_bool = 0; var_203_object = Obj();
			var_203_object = var_1_object;
			func_6987(var_203_object);
			if(var_202_bool != 0) {
				var_208_bool = 0; var_209_object = Obj();
				var_209_object = var_1_object;
				func_6999(var_209_object);
				if(var_208_bool != 0) {
					var_201_bool = 1;
				}
			}
			if(var_201_bool != 0) {
				@@@var_0_object:AddReply((int)10266, (int)11321, (int)11320);
			}
			@@@var_0_object:AddReply((int)10237, (int)11089, (int)11287);
			@@@var_0_object:AddReply((int)11382, (int)-1, (int)12578);
			return 0;
		}
		var_220_bool = var_40_string == (int)11089;
		if(var_220_bool != 0) {
			var_221_string = "";
			func_3652(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10063);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10064, (int)11091, (int)11090);
			return 0;
		}
		var_227_bool = var_40_string == (int)11091;
		if(var_227_bool != 0) {
			var_228_string = "";
			func_3652(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10065);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10066, (int)11093, (int)11092);
			@@@var_0_object:AddReply((int)10070, (int)11097, (int)11096);
			return 0;
		}
		var_237_bool = var_40_string == (int)11097;
		if(var_237_bool != 0) {
			var_238_string = "";
			func_3652(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10071);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10072, (int)11099, (int)11098);
			@@@var_0_object:AddReply((int)10080, (int)-1, (int)11109);
			@@@var_0_object:AddReply((int)10242, (int)11293, (int)11292);
			return 0;
		}
		var_250_bool = var_40_string == (int)11293;
		if(var_250_bool != 0) {
			var_251_string = "";
			func_3652(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10243);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10244, (int)11110, (int)11294);
			@@@var_0_object:AddReply((int)10245, (int)11290, (int)11295);
			return 0;
		}
		var_260_bool = var_40_string == (int)11110;
		if(var_260_bool != 0) {
			var_261_string = "";
			func_3652(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10081);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10239, (int)11290, (int)11289);
			@@@var_0_object:AddReply((int)10083, (int)-1, (int)11112);
			return 0;
		}
		var_270_bool = var_40_string == (int)11290;
		if(var_270_bool != 0) {
			var_271_string = "";
			func_3652(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10240);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10082, (int)-1, (int)11111);
			return 0;
		}
		var_277_bool = var_40_string == (int)11099;
		if(var_277_bool != 0) {
			var_278_string = "";
			func_3652(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10073);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10074, (int)11101, (int)11100);
			@@@var_0_object:AddReply((int)10079, (int)11101, (int)11107);
			return 0;
		}
		var_287_bool = var_40_string == (int)11101;
		if(var_287_bool != 0) {
			var_288_string = "";
			func_3652(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10075);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10076, (int)11093, (int)11102);
			@@@var_0_object:AddReply((int)10078, (int)-1, (int)11106);
			return 0;
		}
		var_297_bool = var_40_string == (int)11093;
		if(var_297_bool != 0) {
			var_298_string = "";
			func_3652(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10067);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10068, (int)-1, (int)11094);
			@@@var_0_object:AddReply((int)10069, (int)-1, (int)11095);
			return 0;
		}
		var_307_bool = var_40_string == (int)11321;
		if(var_307_bool != 0) {
			var_308_string = "";
			func_3652(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10267);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10268, (int)11323, (int)11322);
			@@@var_0_object:AddReply((int)10270, (int)11325, (int)11324);
			return 0;
		}
		var_317_bool = var_40_string == (int)11325;
		if(var_317_bool != 0) {
			var_318_string = "";
			func_3652(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10271);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10272, (int)-1, (int)11326);
			return 0;
		}
		var_324_bool = var_40_string == (int)11323;
		if(var_324_bool != 0) {
			var_325_string = "";
			func_3652(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10269);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10273, (int)11328, (int)11327);
			@@@var_0_object:AddReply((int)10275, (int)11330, (int)11329);
			return 0;
		}
		var_334_bool = var_40_string == (int)11330;
		if(var_334_bool != 0) {
			var_335_string = "";
			func_3652(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10276);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10277, (int)11332, (int)11331);
			return 0;
		}
		var_341_bool = var_40_string == (int)11332;
		if(var_341_bool != 0) {
			var_342_string = "";
			func_3652(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10278);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10279, (int)11328, (int)11333);
			@@@var_0_object:AddReply((int)10280, (int)-1, (int)11335);
			return 0;
		}
		var_351_bool = var_40_string == (int)11328;
		if(var_351_bool != 0) {
			var_352_string = "";
			func_3652(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10274);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10281, (int)11337, (int)11336);
			return 0;
		}
		var_358_bool = var_40_string == (int)11337;
		if(var_358_bool != 0) {
			var_359_string = "";
			func_3652(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10282);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10283, (int)11339, (int)11338);
			return 0;
		}
		var_365_bool = var_40_string == (int)11339;
		if(var_365_bool != 0) {
			var_366_string = "";
			func_3652(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10284);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10285, (int)-1, (int)11340);
			@@@var_0_object:AddReply((int)10286, (int)-1, (int)11341);
			return 0;
		}
		var_375_bool = var_40_string == (int)11288;
		if(var_375_bool != 0) {
			var_376_string = "";
			func_3652(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10238);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10246, (int)11298, (int)11297);
			@@@var_0_object:AddReply((int)10253, (int)11308, (int)11304);
			return 0;
		}
		var_385_bool = var_40_string == (int)11298;
		if(var_385_bool != 0) {
			var_386_string = "";
			func_3652(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10247);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10248, (int)11300, (int)11299);
			@@@var_0_object:AddReply((int)10258, (int)11308, (int)11309);
			return 0;
		}
		var_395_bool = var_40_string == (int)11300;
		if(var_395_bool != 0) {
			var_396_string = "";
			func_3652(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10249);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10250, (int)11302, (int)11301);
			@@@var_0_object:AddReply((int)10256, (int)11302, (int)11307);
			return 0;
		}
		var_405_bool = var_40_string == (int)11302;
		if(var_405_bool != 0) {
			var_406_string = "";
			func_3652(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10251);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10259, (int)11313, (int)11312);
			return 0;
		}
		var_412_bool = var_40_string == (int)11313;
		if(var_412_bool != 0) {
			var_413_string = "";
			func_3652(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10260);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10261, (int)-1, (int)11314);
			@@@var_0_object:AddReply((int)10252, (int)11308, (int)11303);
			return 0;
		}
		var_422_bool = var_40_string == (int)11308;
		if(var_422_bool != 0) {
			var_423_string = "";
			func_3652(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10257);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10262, (int)-1, (int)11315);
			@@@var_0_object:AddReply((int)10263, (int)11317, (int)11316);
			return 0;
		}
		var_432_bool = var_40_string == (int)11317;
		if(var_432_bool != 0) {
			var_433_string = "";
			func_3652(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10264);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10265, (int)-1, (int)11318);
			return 0;
		}
		var_3_string = true;
		var_438_bool = 0;
		func_6273(var_438_bool);
		if(var_438_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xe55";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_6195();
		var_45_bool = var_41_bool == (int)12998;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_6510();
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_6583();
		}
		var_121_bool = var_41_bool == (int)12999;
		if(var_121_bool != 0) {
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_6583();
			var_124_object = Obj(); var_125_object = Obj();
			var_124_object = var_1_object;
			var_125_object = var_0_object;
			func_6510();
		}
		var_127_bool = var_41_bool == (int)13752;
		if(var_127_bool != 0) {
			var_128_object = Obj(); var_129_object = Obj();
			var_128_object = var_1_object;
			var_129_object = var_0_object;
			func_6583();
		}
		var_131_bool = var_41_bool == (int)12989;
		if(var_131_bool != 0) {
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_6558();
			var_136_object = Obj(); var_137_object = Obj();
			var_136_object = var_1_object;
			var_137_object = var_0_object;
			func_6564(var_137_object);
			var_145_object = Obj(); var_146_object = Obj();
			var_145_object = var_1_object;
			var_146_object = var_0_object;
			func_6314();
		}
		var_150_bool = var_41_bool == (int)12990;
		if(var_150_bool != 0) {
			var_151_object = Obj(); var_152_object = Obj();
			var_151_object = var_1_object;
			var_152_object = var_0_object;
			func_6558();
			var_153_object = Obj(); var_154_object = Obj();
			var_153_object = var_1_object;
			var_154_object = var_0_object;
			func_6564(var_154_object);
			var_155_object = Obj(); var_156_object = Obj();
			var_155_object = var_1_object;
			var_156_object = var_0_object;
			func_6314();
		}
		var_158_bool = var_41_bool == (int)13741;
		if(var_158_bool != 0) {
			var_159_object = Obj(); var_160_object = Obj();
			var_159_object = var_1_object;
			var_160_object = var_0_object;
			func_6575();
			var_163_object = Obj(); var_164_object = Obj();
			var_163_object = var_1_object;
			var_164_object = var_0_object;
			func_6332();
			var_165_object = Obj(); var_166_object = Obj();
			var_165_object = var_1_object;
			var_166_object = var_0_object;
			func_6581();
		}
		var_168_bool = var_40_string == (int)13751;
		if(var_168_bool != 0) {
			var_169_bool = 0;
			var_169_bool = 0;
			var_170_bool = 0;
			var_170_bool = 0;
			var_171_bool = 0; var_172_object = Obj();
			var_172_object = var_1_object;
			func_7088(var_172_object);
			if(var_171_bool != 0) {
				var_177_bool = 0; var_178_object = Obj();
				var_178_object = var_1_object;
				func_7028(var_178_object);
				var_183_bool = var_177_bool == 0; //@nz
				if(var_183_bool != 0) {
					var_170_bool = 1;
				}
			}
			if(var_170_bool != 0) {
				var_184_bool = 0; var_185_object = Obj();
				var_185_object = var_1_object;
				func_7040(var_185_object);
				var_190_bool = var_184_bool == 0; //@nz
				if(var_190_bool != 0) {
					var_169_bool = 1;
				}
			}
			if(var_169_bool != 0) {
				var_191_string = "";
				func_4576(var_41_bool, "Neutral");
				@@@var_0_object:SetMessage((int)12584);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)11771, (int)12991, (int)12979);
				var_210_bool = 0; var_211_object = Obj();
				var_211_object = var_1_object;
				func_7016(var_211_object);
				var_216_bool = var_210_bool == 0; //@nz
				if(var_216_bool != 0) {
					@@@var_0_object:AddReply((int)12585, (int)13755, (int)13752);
				}
				return 0;
			}
			var_220_string = "";
			func_4576(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11765);
			@@@var_0_object:ClearReplies();
			var_222_bool = 0;
			var_222_bool = 0;
			var_223_bool = 0; var_224_object = Obj();
			var_224_object = var_1_object;
			func_7052(var_224_object);
			if(var_223_bool != 0) {
				var_229_bool = 0; var_230_object = Obj();
				var_230_object = var_1_object;
				func_7064(var_230_object);
				if(var_229_bool != 0) {
					var_222_bool = 1;
				}
			}
			if(var_222_bool != 0) {
				@@@var_0_object:AddReply((int)11767, (int)12977, (int)12975);
			}
			var_238_bool = 0;
			var_238_bool = 0;
			var_239_bool = 0; var_240_object = Obj();
			var_240_object = var_1_object;
			func_7028(var_240_object);
			if(var_239_bool != 0) {
				var_241_bool = 0; var_242_object = Obj();
				var_242_object = var_1_object;
				func_7076(var_242_object);
				if(var_241_bool != 0) {
					var_238_bool = 1;
				}
			}
			if(var_238_bool != 0) {
				@@@var_0_object:AddReply((int)12570, (int)13740, (int)13739);
			}
			@@@var_0_object:AddReply((int)11766, (int)-1, (int)12974);
			return 0;
		}
		var_254_bool = var_40_string == (int)13740;
		if(var_254_bool != 0) {
			var_255_string = "";
			func_4576(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12571);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12592, (int)13763, (int)13762);
			return 0;
		}
		var_261_bool = var_40_string == (int)13763;
		if(var_261_bool != 0) {
			var_262_string = "";
			func_4576(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12593);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12594, (int)13765, (int)13764);
			return 0;
		}
		var_268_bool = var_40_string == (int)13765;
		if(var_268_bool != 0) {
			var_269_string = "";
			func_4576(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12595);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12572, (int)-1, (int)13741);
			return 0;
		}
		var_275_bool = var_40_string == (int)12977;
		if(var_275_bool != 0) {
			var_276_string = "";
			func_4576(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11769);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11770, (int)12981, (int)12978);
			@@@var_0_object:AddReply((int)11772, (int)12981, (int)12980);
			return 0;
		}
		var_285_bool = var_40_string == (int)12981;
		if(var_285_bool != 0) {
			var_286_string = "";
			func_4576(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11773);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11774, (int)12984, (int)12983);
			return 0;
		}
		var_292_bool = var_40_string == (int)12984;
		if(var_292_bool != 0) {
			var_293_string = "";
			func_4576(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11775);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11776, (int)12987, (int)12985);
			@@@var_0_object:AddReply((int)11777, (int)12987, (int)12986);
			return 0;
		}
		var_302_bool = var_40_string == (int)12987;
		if(var_302_bool != 0) {
			var_303_string = "";
			func_4576(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11778);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11779, (int)-1, (int)12989);
			@@@var_0_object:AddReply((int)11780, (int)-1, (int)12990);
			return 0;
		}
		var_312_bool = var_40_string == (int)13755;
		if(var_312_bool != 0) {
			var_313_string = "";
			func_4576(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12587);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12588, (int)12993, (int)13756);
			return 0;
		}
		var_319_bool = var_40_string == (int)12991;
		if(var_319_bool != 0) {
			var_320_string = "";
			func_4576(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11781);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11782, (int)12993, (int)12992);
			return 0;
		}
		var_326_bool = var_40_string == (int)12993;
		if(var_326_bool != 0) {
			var_327_string = "";
			func_4576(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11783);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12589, (int)12995, (int)13758);
			@@@var_0_object:AddReply((int)11784, (int)13760, (int)12994);
			return 0;
		}
		var_336_bool = var_40_string == (int)12995;
		if(var_336_bool != 0) {
			var_337_string = "";
			func_4576(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11785);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12590, (int)13760, (int)13759);
			return 0;
		}
		var_343_bool = var_40_string == (int)13760;
		if(var_343_bool != 0) {
			var_344_string = "";
			func_4576(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12591);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11786, (int)12997, (int)12996);
			return 0;
		}
		var_350_bool = var_40_string == (int)12997;
		if(var_350_bool != 0) {
			var_351_string = "";
			func_4576(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11787);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11788, (int)-1, (int)12998);
			@@@var_0_object:AddReply((int)11789, (int)-1, (int)12999);
			return 0;
		}
		var_3_string = true;
		var_359_bool = 0;
		func_6273(var_359_bool);
		if(var_359_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x11f1";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_6195();
		var_45_bool = var_40_string == (int)13432;
		if(var_45_bool != 0) {
			var_46_bool = 0;
			var_46_bool = 0;
			var_47_bool = 0; var_48_object = Obj();
			var_48_object = var_1_object;
			func_7148(var_48_object);
			if(var_47_bool != 0) {
				var_55_bool = 0; var_56_object = Obj();
				var_56_object = var_1_object;
				func_7136(var_56_object);
				if(var_55_bool != 0) {
					var_46_bool = 1;
				}
			}
			if(var_46_bool != 0) {
				var_61_object = Obj(); var_62_object = Obj();
				var_61_object = var_1_object;
				var_62_object = var_0_object;
				func_6648();
				var_65_string = "";
				func_5220(var_41_bool, "Neutral");
				@@@var_0_object:SetMessage((int)12275);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)12276, (int)13435, (int)13433);
				@@@var_0_object:AddReply((int)12277, (int)13435, (int)13434);
				return 0;
			}
			var_87_string = "";
			func_5220(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13779);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13780, (int)-1, (int)15016);
			return 0;
		}
		var_93_bool = var_40_string == (int)13435;
		if(var_93_bool != 0) {
			var_94_string = "";
			func_5220(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12278);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12279, (int)13439, (int)13437);
			@@@var_0_object:AddReply((int)12280, (int)13439, (int)13438);
			return 0;
		}
		var_103_bool = var_40_string == (int)13439;
		if(var_103_bool != 0) {
			var_104_string = "";
			func_5220(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12281);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12282, (int)13442, (int)13441);
			return 0;
		}
		var_110_bool = var_40_string == (int)13442;
		if(var_110_bool != 0) {
			var_111_string = "";
			func_5220(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12283);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12284, (int)13444, (int)13443);
			return 0;
		}
		var_117_bool = var_40_string == (int)13444;
		if(var_117_bool != 0) {
			var_118_string = "";
			func_5220(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12285);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12286, (int)13446, (int)13445);
			return 0;
		}
		var_124_bool = var_40_string == (int)13446;
		if(var_124_bool != 0) {
			var_125_string = "";
			func_5220(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12287);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12288, (int)13448, (int)13447);
			return 0;
		}
		var_131_bool = var_40_string == (int)13448;
		if(var_131_bool != 0) {
			var_132_string = "";
			func_5220(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12289);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12290, (int)13450, (int)13449);
			return 0;
		}
		var_138_bool = var_40_string == (int)13450;
		if(var_138_bool != 0) {
			var_139_string = "";
			func_5220(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12291);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12292, (int)-1, (int)13451);
			return 0;
		}
		var_3_string = true;
		var_144_bool = 0;
		func_6273(var_144_bool);
		if(var_144_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1475";
	
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int)
{
	if((int)1 != 0) {
		func_6195();
		var_45_bool = var_41_int == (int)15244;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_6660();
		}
		var_91_bool = var_41_int == (int)15245;
		if(var_91_bool != 0) {
			var_92_object = Obj(); var_93_object = Obj();
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_6660();
		}
		var_95_bool = var_41_int == (int)15247;
		if(var_95_bool != 0) {
			var_96_object = Obj(); var_97_object = Obj();
			var_96_object = var_1_object;
			var_97_object = var_0_object;
			func_6695();
		}
		var_101_bool = var_41_int == (int)15264;
		if(var_101_bool != 0) {
			var_102_object = Obj(); var_103_object = Obj();
			var_102_object = var_1_object;
			var_103_object = var_0_object;
			func_6677();
		}
		var_107_bool = var_40_int == (int)15229;
		if(var_107_bool != 0) {
			var_108_bool = 0; var_109_object = Obj();
			var_109_object = var_1_object;
			func_7160(var_109_object);
			if(var_108_bool != 0) {
				var_116_object = Obj(); var_117_object = Obj();
				var_116_object = var_1_object;
				var_117_object = var_0_object;
				func_6654();
				var_120_string = "";
				func_5613(var_41_int, "Neutral");
				@@@var_0_object:SetMessage((int)13994);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)13995, (int)15231, (int)15230);
				return 0;
			}
			var_139_string = "";
			func_5613(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)14011);
			@@@var_0_object:ClearReplies();
			var_141_bool = 0; var_142_object = Obj();
			var_142_object = var_1_object;
			func_7232(var_142_object);
			if(var_141_bool != 0) {
				@@@var_0_object:AddReply((int)14012, (int)15248, (int)15247);
			}
			var_150_bool = 0;
			var_150_bool = 0;
			var_151_bool = 0; var_152_object = Obj();
			var_152_object = var_1_object;
			func_7184(var_152_object);
			if(var_151_bool != 0) {
				var_157_bool = 0; var_158_object = Obj();
				var_158_object = var_1_object;
				func_7196(var_158_object);
				if(var_157_bool != 0) {
					var_150_bool = 1;
				}
			}
			if(var_150_bool != 0) {
				@@@var_0_object:AddReply((int)14029, (int)15265, (int)15264);
			}
			@@@var_0_object:AddReply((int)14039, (int)-1, (int)15274);
			return 0;
		}
		var_170_bool = var_40_int == (int)15265;
		if(var_170_bool != 0) {
			var_171_string = "";
			func_5613(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)14030);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14031, (int)15267, (int)15266);
			return 0;
		}
		var_177_bool = var_40_int == (int)15267;
		if(var_177_bool != 0) {
			var_178_string = "";
			func_5613(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)14032);
			@@@var_0_object:ClearReplies();
			var_180_bool = 0; var_181_object = Obj();
			var_181_object = var_1_object;
			func_7208(var_181_object);
			if(var_180_bool != 0) {
				@@@var_0_object:AddReply((int)14033, (int)15269, (int)15268);
			}
			@@@var_0_object:AddReply((int)14038, (int)-1, (int)15273);
			return 0;
		}
		var_193_bool = var_40_int == (int)15269;
		if(var_193_bool != 0) {
			var_194_string = "";
			func_5613(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)14034);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14035, (int)-1, (int)15270);
			@@@var_0_object:AddReply((int)14036, (int)-1, (int)15271);
			@@@var_0_object:AddReply((int)14037, (int)-1, (int)15272);
			return 0;
		}
		var_206_bool = var_40_int == (int)15248;
		if(var_206_bool != 0) {
			var_207_string = "";
			func_5613(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)14013);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14014, (int)15250, (int)15249);
			@@@var_0_object:AddReply((int)14024, (int)15260, (int)15259);
			return 0;
		}
		var_216_bool = var_40_int == (int)15260;
		if(var_216_bool != 0) {
			var_217_string = "";
			func_5613(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)14025);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14026, (int)15262, (int)15261);
			return 0;
		}
		var_223_bool = var_40_int == (int)15262;
		if(var_223_bool != 0) {
			var_224_string = "";
			func_5613(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)14027);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14028, (int)-1, (int)15263);
			return 0;
		}
		var_230_bool = var_40_int == (int)15250;
		if(var_230_bool != 0) {
			var_231_string = "";
			func_5613(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)14015);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14016, (int)15252, (int)15251);
			return 0;
		}
		var_237_bool = var_40_int == (int)15252;
		if(var_237_bool != 0) {
			var_238_string = "";
			func_5613(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)14017);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14018, (int)-1, (int)15253);
			@@@var_0_object:AddReply((int)14019, (int)15255, (int)15254);
			return 0;
		}
		var_247_bool = var_40_int == (int)15255;
		if(var_247_bool != 0) {
			var_248_string = "";
			func_5613(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)14020);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14021, (int)15257, (int)15256);
			return 0;
		}
		var_254_bool = var_40_int == (int)15257;
		if(var_254_bool != 0) {
			var_255_string = "";
			func_5613(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)14022);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14023, (int)-1, (int)15258);
			return 0;
		}
		var_261_bool = var_40_int == (int)15231;
		if(var_261_bool != 0) {
			var_262_string = "";
			func_5613(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13996);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13997, (int)15233, (int)15232);
			return 0;
		}
		var_268_bool = var_40_int == (int)15233;
		if(var_268_bool != 0) {
			var_269_string = "";
			func_5613(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13998);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13999, (int)15235, (int)15234);
			return 0;
		}
		var_275_bool = var_40_int == (int)15235;
		if(var_275_bool != 0) {
			var_276_string = "";
			func_5613(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)14000);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14001, (int)15237, (int)15236);
			return 0;
		}
		var_282_bool = var_40_int == (int)15237;
		if(var_282_bool != 0) {
			var_283_string = "";
			func_5613(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)14002);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14003, (int)15239, (int)15238);
			return 0;
		}
		var_289_bool = var_40_int == (int)15239;
		if(var_289_bool != 0) {
			var_290_string = "";
			func_5613(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)14004);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14005, (int)15241, (int)15240);
			return 0;
		}
		var_296_bool = var_40_int == (int)15241;
		if(var_296_bool != 0) {
			var_297_string = "";
			func_5613(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)14006);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14007, (int)15243, (int)15242);
			return 0;
		}
		var_303_bool = var_40_int == (int)15243;
		if(var_303_bool != 0) {
			var_304_string = "";
			func_5613(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)14008);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14009, (int)-1, (int)15244);
			@@@var_0_object:AddReply((int)14010, (int)-1, (int)15245);
			return 0;
		}
		var_3_string = true;
		var_312_bool = 0;
		func_6273(var_312_bool);
		if(var_312_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x15fe";
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool)
{
	func_7521();
	var_41_bool = 0;
	func_6112(var_41_bool);
	var_44_bool = var_41_bool == 0; //@nz
	if(var_44_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
Label_19:
	var_45_string = "";
	func_6177("Neutral");
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


func_7172(var_380_bool)
{
	var_382_int = 0; var_383_string = "";
	func_6212(var_382_int, "KnowEva");
	var_385_bool = var_382_int == (int)1;
	if(var_385_bool != 0) {
		var_380_bool = 1;
		return 0;
	}
	var_380_bool = 0;
	return 0;
}


func_6660()
{
	SetVariable("d9q01", (int)1);
	func_7489();
	func_7505();
	var_84_bool = 0; var_85_string = ""; var_86_string = "";
	func_6228(var_84_bool, "quest_d9_01", "place_rifles");
	return 0;
}


func_5128(var_0_object, var_1_object, var_2_object, var_3_object, var_729_object, var_730_object)
{
	var_0_object = var_730_object;
	var_1_object = var_729_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_736_bool = 0;
		var_736_bool = 0;
		var_737_bool = 0; var_738_object = Obj();
		var_738_object = var_1_object;
		func_7148(var_738_object);
		if(var_737_bool != 0) {
			var_743_bool = 0; var_744_object = Obj();
			var_744_object = var_1_object;
			func_7136(var_744_object);
			if(var_743_bool != 0) {
				var_736_bool = 1;
			}
		}
		if(var_736_bool != 0) {
			var_749_object = Obj(); var_750_object = Obj();
			var_749_object = var_1_object;
			var_750_object = var_0_object;
			func_6648();
			var_753_string = "";
			func_5220(var_730_object, "Neutral");
			@@@var_0_object:SetMessage((int)12275);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12276, (int)13435, (int)13433);
			@@@var_0_object:AddReply((int)12277, (int)13435, (int)13434);
		} else {
				var_773_string = "";
				func_5220(var_730_object, "Neutral");
				@@@var_0_object:SetMessage((int)13779);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)13780, (int)-1, (int)15016);
				goto Label_5190;
		}
	}
Label_5190:
	var_765_bool = 0;
	func_6273(var_765_bool);
	if(var_765_bool != 0) {

	Label_5194:
		lshWaitForAnimEnd();
		var_766_object = var_3_object;
		if(var_766_object != 0) {
		} else {
			var_767_string = "";
			var_767_string = var_2_object;
			func_6177(var_767_string);
			goto Label_5194;
	}
		PlayAnimation("all", "idle");

	Label_5209:
		WaitForAnimEnd();
		var_770_object = var_3_object;
		if(var_770_object != 0) {
			goto Label_5219;
		}
		PlayAnimation("all", "idle");
		goto Label_5209;

	}
	goto Label_5219;
	
Label_5219:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x140c";


func_7184(var_151_bool)
{
	var_153_int = 0; var_154_string = "";
	func_6212(var_153_int, "d9q01");
	var_156_bool = var_153_int == (int)2;
	if(var_156_bool != 0) {
		var_151_bool = 1;
		return 0;
	}
	var_151_bool = 0;
	return 0;
}


func_6677()
{
	SetVariable("ood9Viktor2", (int)1);
	return 0;
}


func_6683()
{
	SetVariable("KnowMyth", (int)1);
	return 0;
}


func_7196(var_157_bool)
{
	var_159_int = 0; var_160_string = "";
	func_6212(var_159_int, "ood9Viktor2");
	var_162_bool = var_159_int == (int)0;
	if(var_162_bool != 0) {
		var_157_bool = 1;
		return 0;
	}
	var_157_bool = 0;
	return 0;
}


func_6173()
{
	CameraSwitchToNormal();
	return 0;
}


func_6177(var_45_string)
{
	var_46_float = 0; var_47_float = 0; var_48_float = 0; var_49_float = 0;
	var_51_int = "playing " + var_45_string;
	Trace(var_51_int);
	lshGetAnimTimes(var_45_string, var_48_float, var_49_float);
	lshPlayAnimation(var_48_float, var_49_float);
	var_53_int = "start: " + var_48_float;
	Trace(var_53_int);
	var_55_int = "end: " + var_49_float;
	Trace(var_55_int);
	return 4;
}


func_6689()
{
	SetVariable("d6ViktorVisit", (int)1);
	return 0;
}


func_3109(var_0_object, var_1_object, var_2_object, var_3_object, var_412_object, var_413_object)
{
	var_0_object = var_413_object;
	var_1_object = var_412_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_419_string = "";
		func_3210(var_413_object, "Neutral");
		@@@var_0_object:SetMessage((int)6924);
		@@@var_0_object:ClearReplies();
		var_425_bool = 0;
		var_425_bool = 0;
		var_426_bool = 0;
		var_426_bool = 0;
		var_427_bool = 0; var_428_object = Obj();
		var_428_object = var_1_object;
		func_6833(var_428_object);
		if(var_427_bool != 0) {
			var_433_bool = 0; var_434_object = Obj();
			var_434_object = var_1_object;
			func_6869(var_434_object);
			if(var_433_bool != 0) {
				var_426_bool = 1;
			}
		}
		if(var_426_bool != 0) {
			var_439_bool = 0; var_440_object = Obj();
			var_440_object = var_1_object;
			func_6857(var_440_object);
			if(var_439_bool != 0) {
				var_425_bool = 1;
			}
		}
		if(var_425_bool != 0) {
			@@@var_0_object:AddReply((int)6925, (int)7632, (int)7631);
		}
		@@@var_0_object:AddReply((int)7777, (int)-1, (int)8579);
		goto Label_3180;
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=0";
	EMIT "Call 0xc8a";
	EMIT "Pop(1)";
	EMIT "Push((int) 9531)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
	EMIT "Pop(0)";
	EMIT "Push((int) 9532)";
	EMIT "Push((int) 10478)";
	EMIT "Push((int) 10477)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9539)";
	EMIT "Push((int) 10478)";
	EMIT "Push((int) 10484)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "GOTO 0xc6c";
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xc29";
	}
Label_3180:
	var_451_bool = 0;
	func_6273(var_451_bool);
	if(var_451_bool != 0) {

	Label_3184:
		lshWaitForAnimEnd();
		var_452_object = var_3_object;
		if(var_452_object != 0) {
		} else {
			var_453_string = "";
			var_453_string = var_2_object;
			func_6177(var_453_string);
			goto Label_3184;
	}
		PlayAnimation("all", "idle");

	Label_3199:
		WaitForAnimEnd();
		var_456_object = var_3_object;
		if(var_456_object != 0) {
			goto Label_3209;
		}
		PlayAnimation("all", "idle");
		goto Label_3199;
	}
	goto Label_3209;
	
Label_3209:
	return 0;
	
}


func_6695()
{
	SetVariable("ood9Viktor3", (int)1);
	return 0;
}


func_7208(var_180_bool)
{
	var_182_int = 0; var_183_string = "";
	func_6212(var_182_int, "d9TalkToPolkovodec");
	var_185_bool = var_182_int != (int)0;
	if(var_185_bool != 0) {
		var_180_bool = 1;
		return 0;
	}
	var_180_bool = 0;
	return 0;
}


func_6701()
{
	SetVariable("KnowBoyni", (int)1);
	return 0;
}


func_49(var_0_object, var_44_int, var_45_object)
{
	var_47_object = Obj(); var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_object = Obj(); var_52_bool = 0; var_53_int = 0; var_54_bool = 0;
	var_0_object = var_45_object;
	var_55_bool = 0; var_56_object = Obj();
	var_45_object = var_56_object;
	func_6117(var_55_bool, var_56_object);
	var_95_bool = var_55_bool == 0; //@nz
	if(var_95_bool != 0) {
		var_44_int = -2;
		return 8;
	}
	CreateDialog(var_51_object);
	var_96_int = 0;
	func_6269(var_96_int);
	@@var_51_object:SetNPCName(var_96_int);
	var_97_string = "";
	func_6271(var_97_string);
	@@var_51_object:SetPhoto(var_97_string);
	var_98_int = 0;
	func_7360(var_98_int);
	@@var_51_object:SetPlayerName(var_98_int);
	IsOverrideActive(var_52_bool);
	var_106_bool = var_52_bool;
	if(var_106_bool != 0) {
		var_44_int = -2;
		return 8;
	}
	DoDialog(var_51_object);
	var_107_object = Obj(); var_108_object = Obj();
	var_45_object = var_107_object;
	var_51_object = var_108_object;
	TaskCall(3);
	func_112(var_109_object, var_110_object, var_111_string, var_112_bool, var_107_object, var_108_object);
	TaskReturn();
	@@var_51_object:IsDialogEnd(var_54_bool);
	
Label_94:
	var_148_bool = var_54_bool == 0; //@nz
	if(var_148_bool != 0) {
		sync();
		@@var_51_object:IsDialogEnd(var_54_bool);
		goto Label_94;
	}
	var_45_object = Obj();
	func_6173();
	StopDialog(var_51_object);
	@@var_51_object:GetReturnValue((int)-1);
	var_53_int = var_44_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6195()
{
	var_43_bool = 0;
	func_6273(var_43_bool);
	if(var_43_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_7220(var_396_bool)
{
	var_398_int = 0; var_399_string = "";
	func_6212(var_398_int, "KnowJulia");
	var_401_bool = var_398_int == (int)1;
	if(var_401_bool != 0) {
		var_396_bool = 1;
		return 0;
	}
	var_396_bool = 0;
	return 0;
}


func_6707()
{
	SetVariable("KnowTaurusProject", (int)1);
	return 0;
}


func_6713(var_304_bool)
{
	var_306_int = 0; var_307_string = "";
	func_6212(var_306_int, "ood1Viktor1");
	var_309_bool = var_306_int == (int)0;
	if(var_309_bool != 0) {
		var_304_bool = 1;
		return 0;
	}
	var_304_bool = 0;
	return 0;
}


func_6202(var_80_cvector, var_81_cvector)
{
	var_83_float = 0; var_84_float = 0;
	var_85_int = var_81_cvector | var_81_cvector;
	var_84_float = sqrt(var_85_int);
	var_86_float = 9.999999974752427e-07;
	var_87_bool = var_84_float < var_86_float;
	if(var_87_bool != 0) {
		var_80_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_80_cvector = var_81_cvector / var_84_float;
	return 2;
}


func_7232(var_141_bool)
{
	var_143_int = 0; var_144_string = "";
	func_6212(var_143_int, "ood9Viktor3");
	var_146_bool = var_143_int == (int)0;
	if(var_146_bool != 0) {
		var_141_bool = 1;
		return 0;
	}
	var_141_bool = 0;
	return 0;
}


func_3652(var_2_object, var_171_string)
{
	var_172_bool = 0;
	func_6273(var_172_bool);
	var_173_bool = var_172_bool == 0; //@nz
	if(var_173_bool != 0) {
		return 0;
	}
	var_174_bool = var_171_string == var_2_object;
	if(var_174_bool != 0) {
		return 0;
	}
	var_175_string = "";
	var_171_string = var_175_string;
	func_6177(var_175_string);
	var_2_object = var_171_string;
	return 0;
}


func_6725(var_324_bool)
{
	var_326_int = 0; var_327_string = "";
	func_6212(var_326_int, "ood1Viktor2");
	var_329_bool = var_326_int == (int)0;
	if(var_329_bool != 0) {
		var_324_bool = 1;
		return 0;
	}
	var_324_bool = 0;
	return 0;
}


func_6212(var_110_int, var_111_string)
{
	var_112_int = 0; var_113_int = 0;
	GetVariable(var_111_string, var_113_int);
	var_113_int = var_110_int;
	return 2;
}


func_6217(var_102_object, var_103_string)
{
	var_104_object = Obj(); var_105_object = Obj(); var_106_object = Obj(); var_107_object = Obj();
	GetMainOutdoorScene(var_106_object);
	var_109_int = var_103_string + ".bin";
	AddBlankActor(var_107_object, var_106_object, var_103_string, var_109_int);
	var_107_object = var_102_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_7244(var_444_bool)
{
	var_446_int = 0; var_447_string = "";
	func_6212(var_446_int, "KnowStamatins");
	var_449_bool = var_446_int == (int)1;
	if(var_449_bool != 0) {
		var_444_bool = 1;
		return 0;
	}
	var_444_bool = 0;
	return 0;
}


func_6737(var_354_bool)
{
	var_356_int = 0; var_357_string = "";
	func_6212(var_356_int, "ood1Viktor3");
	var_359_bool = var_356_int == (int)0;
	if(var_359_bool != 0) {
		var_354_bool = 1;
		return 0;
	}
	var_354_bool = 0;
	return 0;
}


func_6228(var_84_bool, var_85_string, var_86_string)
{
	var_87_object = Obj(); var_88_object = Obj();
	FindActor(var_88_object, var_85_string);
	var_89_bool = var_88_object == 0; //@ne
	if(var_89_bool != 0) {
		var_84_bool = 0;
		return 2;
	}
	Trigger(var_88_object, var_86_string);
	var_84_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_7256(var_553_bool)
{
	var_555_int = 0; var_556_string = "";
	func_6212(var_555_int, "KnowTaurusProject");
	var_558_bool = var_555_int == (int)1;
	if(var_558_bool != 0) {
		var_553_bool = 1;
		return 0;
	}
	var_553_bool = 0;
	return 0;
}


func_6749(var_342_bool)
{
	var_344_int = 0; var_345_string = "";
	func_6212(var_344_int, "ood1Viktor4");
	var_347_bool = var_344_int == (int)0;
	if(var_347_bool != 0) {
		var_342_bool = 1;
		return 0;
	}
	var_342_bool = 0;
	return 0;
}


func_6240(var_69_float)
{
	var_70_float = 0; var_71_float = 0;
	GetGameTime(var_71_float);
	var_71_float = var_69_float;
	return 2;
}


func_5220(var_2_object, var_65_string)
{
	var_66_bool = 0;
	func_6273(var_66_bool);
	var_67_bool = var_66_bool == 0; //@nz
	if(var_67_bool != 0) {
		return 0;
	}
	var_68_bool = var_65_string == var_2_object;
	if(var_68_bool != 0) {
		return 0;
	}
	var_69_string = "";
	var_65_string = var_69_string;
	func_6177(var_69_string);
	var_2_object = var_65_string;
	return 0;
}


func_6245(var_153_int)
{
	var_154_float = 0; var_155_float = 0;
	GetGameTime(var_155_float);
	var_157_int = 0;
	var_157_int = var_155_float / (int)24;
	var_153_int = (int)1 + var_157_int;
	return 2;
}


func_7268(var_65_object)
{
	var_66_object = Obj(); var_67_object = Obj();
	GetDiaryRoot(var_67_object);
	var_68_bool = var_67_object == 0; //@nz
	if(var_68_bool != 0) {
		Trace("Can't retrieve diary root");
		var_65_object = 0;
		return 2;
	}
	var_67_object = var_65_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_6761(var_905_bool)
{
	var_907_int = 0; var_908_string = "";
	func_6212(var_907_int, "d1q01");
	var_910_bool = var_907_int == (int)0;
	if(var_910_bool != 0) {
		var_905_bool = 1;
		return 0;
	}
	var_905_bool = 0;
	return 0;
}


func_6254(var_151_bool, var_152_int)
{
	var_153_int = 0;
	func_6245(var_153_int);
	var_151_bool = var_153_int == var_152_int;
	return 0;
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_107_object, var_108_object)
{
	var_0_object = var_108_object;
	var_1_object = var_107_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_114_object = Obj(); var_115_object = Obj();
		var_114_object = var_1_object;
		var_115_object = var_0_object;
		func_6445();
		var_118_string = "";
		func_175(var_108_object, "Neutral");
		@@@var_0_object:SetMessage((int)1575);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)1576, (int)1782, (int)1780);
		@@@var_0_object:AddReply((int)1577, (int)1782, (int)1781);
		goto Label_145;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_145:
	var_140_bool = 0;
	func_6273(var_140_bool);
	if(var_140_bool != 0) {

	Label_149:
		lshWaitForAnimEnd();
		var_141_object = var_3_object;
		if(var_141_object != 0) {
		} else {
			var_142_string = "";
			var_142_string = var_2_object;
			func_6177(var_142_string);
			goto Label_149;
	}
		PlayAnimation("all", "idle");

	Label_164:
		WaitForAnimEnd();
		var_145_object = var_3_object;
		if(var_145_object != 0) {
			goto Label_174;
		}
		PlayAnimation("all", "idle");
		goto Label_164;
	}
	goto Label_174;
	
Label_174:
	return 0;
	
}


func_7281(var_56_bool, var_57_object, var_58_int)
{
	var_59_object = Obj(); var_60_object = Obj(); var_61_int = 0; var_62_object = Obj(); var_63_object = Obj(); var_64_int = 0;
	func_7268(Obj());
	var_65_object = var_62_object;
	@@var_62_object:Find(var_58_int, var_63_object);
	var_70_bool = var_63_object == 0; //@nz
	if(var_70_bool != 0) {
		var_72_int = "Can't find diary parent with id: " + var_58_int;
		Trace(var_72_int);
		var_56_bool = 0;
		return 6;
	}
	@@var_63_object:AddChild(var_57_object);
	SetVariable("player_diary", (int)1);
	@@var_57_object:GetCategory(var_64_int);
	SetDiarySection(var_64_int);
	var_56_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_6260(var_866_bool)
{
	var_867_bool = 0; var_868_bool = 0;
	var_869_string = "";
	func_6177("No");
	lshWaitForAnimEnd(var_868_bool);
	var_868_bool = var_866_bool;
	return 2;
}


func_6773(var_460_bool)
{
	var_462_int = 0; var_463_string = "";
	func_6212(var_462_int, "d1q01TeloNedostupno");
	var_465_bool = var_462_int == (int)1;
	if(var_465_bool != 0) {
		var_460_bool = 1;
		return 0;
	}
	var_460_bool = 0;
	return 0;
}


func_6269(var_96_int)
{
	var_96_int = 2879;
	return 0;
}


func_6271(var_97_string)
{
	var_97_string = "ui/NPC_Viktor.png";
	return 0;
}


func_6273(var_43_bool)
{
	var_43_bool = 1;
	return 0;
}


func_6785(var_336_bool)
{
	var_338_int = 0; var_339_string = "";
	func_6212(var_338_int, "d1q02");
	var_341_bool = var_338_int == (int)0;
	if(var_341_bool != 0) {
		var_336_bool = 1;
		return 0;
	}
	var_336_bool = 0;
	return 0;
}


func_6275()
{
	SetVariable("ood1Viktor1", (int)1);
	return 0;
}


func_6281()
{
	SetVariable("ood1Viktor2", (int)1);
	return 0;
}


func_3210(var_2_object, var_69_string)
{
	var_70_bool = 0;
	func_6273(var_70_bool);
	var_71_bool = var_70_bool == 0; //@nz
	if(var_71_bool != 0) {
		return 0;
	}
	var_72_bool = var_69_string == var_2_object;
	if(var_72_bool != 0) {
		return 0;
	}
	var_73_string = "";
	var_69_string = var_73_string;
	func_6177(var_73_string);
	var_2_object = var_69_string;
	return 0;
}


func_652(var_0_object, var_159_int, var_160_object)
{
	var_162_object = Obj(); var_163_bool = 0; var_164_int = 0; var_165_bool = 0; var_166_object = Obj(); var_167_bool = 0; var_168_int = 0; var_169_bool = 0;
	var_0_object = var_160_object;
	var_170_bool = 0; var_171_object = Obj();
	var_160_object = var_171_object;
	func_6117(var_170_bool, var_171_object);
	var_172_bool = var_170_bool == 0; //@nz
	if(var_172_bool != 0) {
		var_159_int = -2;
		return 8;
	}
	CreateDialog(var_166_object);
	var_173_int = 0;
	func_6269(var_173_int);
	@@var_166_object:SetNPCName(var_173_int);
	var_174_string = "";
	func_6271(var_174_string);
	@@var_166_object:SetPhoto(var_174_string);
	var_175_int = 0;
	func_7360(var_175_int);
	@@var_166_object:SetPlayerName(var_175_int);
	IsOverrideActive(var_167_bool);
	var_176_bool = var_167_bool;
	if(var_176_bool != 0) {
		var_159_int = -2;
		return 8;
	}
	DoDialog(var_166_object);
	var_177_object = Obj(); var_178_object = Obj();
	var_160_object = var_177_object;
	var_166_object = var_178_object;
	TaskCall(7);
	func_715(var_179_object, var_180_object, var_181_string, var_182_bool, var_177_object, var_178_object);
	TaskReturn();
	@@var_166_object:IsDialogEnd(var_169_bool);
	
Label_697:
	var_390_bool = var_169_bool == 0; //@nz
	if(var_390_bool != 0) {
		sync();
		@@var_166_object:IsDialogEnd(var_169_bool);
		goto Label_697;
	}
	var_160_object = Obj();
	func_6173();
	StopDialog(var_166_object);
	@@var_166_object:GetReturnValue((int)-1);
	var_168_int = var_159_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6797(var_364_bool)
{
	var_366_int = 0; var_367_string = "";
	func_6212(var_366_int, "d1q02");
	var_369_bool = var_366_int == (int)1000;
	if(var_369_bool != 0) {
		var_364_bool = 1;
		return 0;
	}
	var_364_bool = 0;
	return 0;
}


func_7310(var_58_object)
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


func_6287()
{
	SetVariable("ood1Viktor3", (int)1);
	return 0;
}


func_6293()
{
	SetVariable("ood1Viktor4", (int)1);
	return 0;
}


func_6809(var_370_bool)
{
	var_372_int = 0; var_373_string = "";
	func_6212(var_372_int, "ood1Viktor5");
	var_375_bool = var_372_int == (int)0;
	if(var_375_bool != 0) {
		var_370_bool = 1;
		return 0;
	}
	var_370_bool = 0;
	return 0;
}


func_6299()
{
	func_7393();
	var_73_object = Obj(); var_74_string = "";
	func_6217(var_73_object, "quest_d1_02");
	return 0;
}


func_7327(var_98_object, var_99_string, var_100_float)
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


func_6308()
{
	SetVariable("ood1Viktor5", (int)1);
	return 0;
}


func_6821(var_270_bool)
{
	var_272_int = 0; var_273_string = "";
	func_6212(var_272_int, "d1q01FirstGeorgVisit");
	var_277_bool = var_272_int == (int)1;
	if(var_277_bool != 0) {
		var_270_bool = 1;
		return 0;
	}
	var_270_bool = 0;
	return 0;
}


func_6648()
{
	SetVariable("ood8Viktor1", (int)1);
	return 0;
}


func_6314()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_175(var_2_object, var_50_string)
{
	var_51_bool = 0;
	func_6273(var_51_bool);
	var_52_bool = var_51_bool == 0; //@nz
	if(var_52_bool != 0) {
		return 0;
	}
	var_53_bool = var_50_string == var_2_object;
	if(var_53_bool != 0) {
		return 0;
	}
	var_54_string = "";
	var_50_string = var_54_string;
	func_6177(var_54_string);
	var_2_object = var_50_string;
	return 0;
}


func_6320()
{
	SetVariable("KnowBattleBrods", (int)1);
	return 0;
}


func_6833(var_87_bool)
{
	var_89_int = 0; var_90_string = "";
	func_6212(var_89_int, "ood2Viktor1");
	var_94_bool = var_89_int == (int)0;
	if(var_94_bool != 0) {
		var_87_bool = 1;
		return 0;
	}
	var_87_bool = 0;
	return 0;
}


func_6326()
{
	SetVariable("KnowShabnak", (int)1);
	return 0;
}


func_6332()
{
	return 0;
}


func_6845(var_140_bool)
{
	var_142_int = 0; var_143_string = "";
	func_6212(var_142_int, "KnowRavell");
	var_145_bool = var_142_int == (int)1;
	if(var_145_bool != 0) {
		var_140_bool = 1;
		return 0;
	}
	var_140_bool = 0;
	return 0;
}


func_6334()
{
	SetVariable("ood2Viktor1", (int)1);
	return 0;
}


func_7360(var_98_int)
{
	var_99_int = 0; var_100_int = 0;
	GetVariable("player", var_100_int);
	var_103_bool = var_100_int == (int)0;
	if(var_103_bool != 0) {
		var_98_int = 200001;
		return 2;
	EMIT "GOTO 0x1ccf";
	}
	var_105_bool = var_100_int == (int)1;
	if(var_105_bool != 0) {
		var_98_int = 200002;
		return 2;
	}
	var_98_int = 200003;
	return 2;
}


func_6340()
{
	SetVariable("KnowRavell", (int)1);
	return 0;
}


func_6857(var_101_bool)
{
	var_103_int = 0; var_104_string = "";
	func_6212(var_103_int, "d2q03");
	var_106_bool = var_103_int == (int)1;
	if(var_106_bool != 0) {
		var_101_bool = 1;
		return 0;
	}
	var_101_bool = 0;
	return 0;
}


func_6346(var_50_object)
{
	Trace("money 5000 is given");
	var_53_object = Obj(); var_54_string = ""; var_55_int = 0;
	var_50_object = var_53_object;
	func_6093(var_53_object, "money", (int)5000);
	return 0;
}


func_715(var_0_object, var_1_object, var_2_object, var_3_object, var_177_object, var_178_object)
{
	var_0_object = var_178_object;
	var_1_object = var_177_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_184_bool = 0; var_185_object = Obj();
		var_185_object = var_1_object;
		func_6821(var_185_object);
		var_192_bool = var_184_bool == 0; //@nz
		if(var_192_bool != 0) {
			var_193_string = "";
			func_1019(var_178_object, "Neutral");
			@@@var_0_object:SetMessage((int)5111);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5112, (int)5626, (int)5625);
			@@@var_0_object:AddReply((int)5119, (int)5626, (int)5632);
			@@@var_0_object:AddReply((int)5120, (int)-1, (int)5634);
		} else {
				var_216_bool = 0; var_217_object = Obj();
				var_217_object = var_1_object;
				func_6713(var_217_object);
				if(var_216_bool != 0) {
					var_222_string = "";
					func_1019(var_178_object, "Neutral");
					@@@var_0_object:SetMessage((int)5155);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)5156, (int)5678, (int)5677);
					@@@var_0_object:AddReply((int)5183, (int)5678, (int)5707);
					@@@var_0_object:AddReply((int)5184, (int)5678, (int)5709);
					goto Label_989;
				}
				var_233_string = "";
				func_1019(var_178_object, "Neutral");
				@@@var_0_object:SetMessage((int)5106);
				@@@var_0_object:ClearReplies();
				var_235_bool = 0;
				var_235_bool = 0;
				var_236_bool = 0; var_237_object = Obj();
				var_237_object = var_1_object;
				func_6725(var_237_object);
				if(var_236_bool != 0) {
					var_242_bool = 0; var_243_object = Obj();
					var_243_object = var_1_object;
					func_6821(var_243_object);
					if(var_242_bool != 0) {
						var_235_bool = 1;
					}
				}
				if(var_235_bool != 0) {
					@@@var_0_object:AddReply((int)5107, (int)9234, (int)5620);
				}
				var_247_bool = 0;
				var_247_bool = 0;
				var_248_bool = 0; var_249_object = Obj();
				var_249_object = var_1_object;
				func_6785(var_249_object);
				if(var_248_bool != 0) {
					var_254_bool = 0; var_255_object = Obj();
					var_255_object = var_1_object;
					func_6749(var_255_object);
					if(var_254_bool != 0) {
						var_247_bool = 1;
					}
				}
				if(var_247_bool != 0) {
					@@@var_0_object:AddReply((int)5108, (int)9315, (int)5621);
				}
				var_263_bool = 0;
				var_263_bool = 0;
				var_264_bool = 0; var_265_object = Obj();
				var_265_object = var_1_object;
				func_6881(var_265_object);
				if(var_264_bool != 0) {
					var_266_bool = 0; var_267_object = Obj();
					var_267_object = var_1_object;
					func_6737(var_267_object);
					if(var_266_bool != 0) {
						var_263_bool = 1;
					}
				}
				if(var_263_bool != 0) {
					@@@var_0_object:AddReply((int)8455, (int)5635, (int)9290);
				}
				var_275_bool = 0;
				var_275_bool = 0;
				var_276_bool = 0; var_277_object = Obj();
				var_277_object = var_1_object;
				func_6797(var_277_object);
				if(var_276_bool != 0) {
					var_282_bool = 0; var_283_object = Obj();
					var_283_object = var_1_object;
					func_6809(var_283_object);
					if(var_282_bool != 0) {
						var_275_bool = 1;
					}
				}
				if(var_275_bool != 0) {
					@@@var_0_object:AddReply((int)5109, (int)5711, (int)5622);
				}
				var_291_bool = 0;
				var_291_bool = 0;
				var_292_bool = 0; var_293_object = Obj();
				var_293_object = var_1_object;
				func_7172(var_293_object);
				if(var_292_bool != 0) {
					var_298_bool = 0; var_299_object = Obj();
					var_299_object = var_1_object;
					func_6886(var_299_object);
					if(var_298_bool != 0) {
						var_291_bool = 1;
					}
				}
				if(var_291_bool != 0) {
					@@@var_0_object:AddReply((int)8390, (int)9317, (int)9213);
				}
				var_307_bool = 0;
				var_307_bool = 0;
				var_308_bool = 0; var_309_object = Obj();
				var_309_object = var_1_object;
				func_7220(var_309_object);
				if(var_308_bool != 0) {
					var_314_bool = 0; var_315_object = Obj();
					var_315_object = var_1_object;
					func_6898(var_315_object);
					if(var_314_bool != 0) {
						var_307_bool = 1;
					}
				}
				if(var_307_bool != 0) {
					@@@var_0_object:AddReply((int)8392, (int)9247, (int)9215);
				}
				var_323_bool = 0;
				var_323_bool = 0;
				var_324_bool = 0; var_325_object = Obj();
				var_325_object = var_1_object;
				func_7112(var_325_object);
				if(var_324_bool != 0) {
					var_330_bool = 0; var_331_object = Obj();
					var_331_object = var_1_object;
					func_6910(var_331_object);
					if(var_330_bool != 0) {
						var_323_bool = 1;
					}
				}
				if(var_323_bool != 0) {
					@@@var_0_object:AddReply((int)8397, (int)9248, (int)9220);
				}
				var_339_bool = 0;
				var_339_bool = 0;
				var_340_bool = 0; var_341_object = Obj();
				var_341_object = var_1_object;
				func_7124(var_341_object);
				if(var_340_bool != 0) {
					var_346_bool = 0; var_347_object = Obj();
					var_347_object = var_1_object;
					func_6922(var_347_object);
					if(var_346_bool != 0) {
						var_339_bool = 1;
					}
				}
				if(var_339_bool != 0) {
					@@@var_0_object:AddReply((int)8399, (int)9249, (int)9222);
				}
				var_355_bool = 0;
				var_355_bool = 0;
				var_356_bool = 0; var_357_object = Obj();
				var_357_object = var_1_object;
				func_7244(var_357_object);
				if(var_356_bool != 0) {
					var_362_bool = 0; var_363_object = Obj();
					var_363_object = var_1_object;
					func_6934(var_363_object);
					if(var_362_bool != 0) {
						var_355_bool = 1;
					}
				}
				if(var_355_bool != 0) {
					@@@var_0_object:AddReply((int)8404, (int)9358, (int)9227);
				}
				var_371_bool = 0;
				var_371_bool = 0;
				var_372_bool = 0; var_373_object = Obj();
				var_373_object = var_1_object;
				func_6773(var_373_object);
				if(var_372_bool != 0) {
					var_378_bool = 0; var_379_object = Obj();
					var_379_object = var_1_object;
					func_6946(var_379_object);
					if(var_378_bool != 0) {
						var_371_bool = 1;
					}
				}
				if(var_371_bool != 0) {
					@@@var_0_object:AddReply((int)5142, (int)5662, (int)5661);
				}
				@@@var_0_object:AddReply((int)5110, (int)-1, (int)5623);
				goto Label_989;
		}
	}
Label_989:
	var_208_bool = 0;
	func_6273(var_208_bool);
	if(var_208_bool != 0) {

	Label_993:
		lshWaitForAnimEnd();
		var_209_object = var_3_object;
		if(var_209_object != 0) {
		} else {
			var_210_string = "";
			var_210_string = var_2_object;
			func_6177(var_210_string);
			goto Label_993;
	}
		PlayAnimation("all", "idle");

	Label_1008:
		WaitForAnimEnd();
		var_213_object = var_3_object;
		if(var_213_object != 0) {
			goto Label_1018;
		}
		PlayAnimation("all", "idle");
		goto Label_1008;

	}
	goto Label_1018;
	
Label_1018:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x2cf";


func_7377()
{
	var_151_object = Obj(); var_152_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_152_object, (int)31, (int)1, (int)12113);
	var_157_bool = 0; var_158_object = Obj(); var_159_int = 0;
	var_152_object = var_158_object;
	func_7281(var_157_bool, var_158_object, (int)2);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6357()
{
	return 0;
}


func_6869(var_95_bool)
{
	var_97_int = 0; var_98_string = "";
	func_6212(var_97_int, "d2q03MariaGotoViktor");
	var_100_bool = var_97_int == (int)1;
	if(var_100_bool != 0) {
		var_95_bool = 1;
		return 0;
	}
	var_95_bool = 0;
	return 0;
}


func_6359()
{
	SetVariable("ood1Viktor6", (int)1);
	return 0;
}


func_6365()
{
	SetVariable("ood1Viktor7", (int)1);
	return 0;
}


func_6881(var_352_bool)
{
	var_352_bool = 1;
	return 0;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


func_7393()
{
	var_48_object = Obj(); var_49_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_49_object, (int)7, (int)2, (int)3078);
	var_54_bool = 0; var_55_object = Obj(); var_56_int = 0;
	var_49_object = var_55_object;
	func_7281(var_54_bool, var_55_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6371()
{
	SetVariable("ood1Viktor8", (int)1);
	return 0;
}


func_6886(var_386_bool)
{
	var_388_int = 0; var_389_string = "";
	func_6212(var_388_int, "ood1Viktor6");
	var_391_bool = var_388_int == (int)0;
	if(var_391_bool != 0) {
		var_386_bool = 1;
		return 0;
	}
	var_386_bool = 0;
	return 0;
}


func_6377()
{
	SetVariable("ood1Viktor9", (int)1);
	return 0;
}


func_6383()
{
	SetVariable("ood1Viktor10", (int)1);
	return 0;
}


func_7409()
{
	var_71_object = Obj(); var_72_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_72_object, (int)77, (int)2, (int)12159);
	var_77_bool = 0; var_78_object = Obj(); var_79_int = 0;
	var_72_object = var_78_object;
	func_7281(var_77_bool, var_78_object, (int)26);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6898(var_402_bool)
{
	var_404_int = 0; var_405_string = "";
	func_6212(var_404_int, "ood1Viktor7");
	var_407_bool = var_404_int == (int)0;
	if(var_407_bool != 0) {
		var_402_bool = 1;
		return 0;
	}
	var_402_bool = 0;
	return 0;
}


func_6389()
{
	SetVariable("ood1Viktor11", (int)1);
	return 0;
}


func_6395()
{
	var_87_object = Obj(); var_88_object = Obj();
	func_7310(Obj());
	var_89_object = var_88_object;
	var_100_float = 0;
	func_6240(var_100_float);
	@@var_88_object:AddMark("d1q02ViktorGotoAnna", "pt_map_anna", (int)0, (int)8634, var_100_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6910(var_418_bool)
{
	var_420_int = 0; var_421_string = "";
	func_6212(var_420_int, "ood1Viktor8");
	var_423_bool = var_420_int == (int)0;
	if(var_423_bool != 0) {
		var_418_bool = 1;
		return 0;
	}
	var_418_bool = 0;
	return 0;
}


func_7425()
{
	var_77_object = Obj(); var_78_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_78_object, (int)154, (int)2, (int)15365);
	var_83_bool = 0; var_84_object = Obj(); var_85_int = 0;
	var_78_object = var_84_object;
	func_7281(var_83_bool, var_84_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6922(var_434_bool)
{
	var_436_int = 0; var_437_string = "";
	func_6212(var_436_int, "ood1Viktor9");
	var_439_bool = var_436_int == (int)0;
	if(var_439_bool != 0) {
		var_434_bool = 1;
		return 0;
	}
	var_434_bool = 0;
	return 0;
}


func_6411(var_147_object)
{
	var_148_object = Obj(); var_149_string = ""; var_150_float = 0;
	func_7310(Obj());
	var_151_object = var_148_object;
	func_7327(var_148_object, "pt_map_anna", (float)2);
	var_152_object = Obj();
	func_7310(var_152_object);
	@@var_147_object:ShowMap(var_152_object);
	return 0;
}


func_7441()
{
	var_76_object = Obj(); var_77_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_77_object, (int)111, (int)1, (int)13734);
	var_82_bool = 0; var_83_object = Obj(); var_84_int = 0;
	var_77_object = var_83_object;
	func_7281(var_82_bool, var_83_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4371(var_0_object, var_536_int, var_537_object)
{
	var_539_object = Obj(); var_540_bool = 0; var_541_int = 0; var_542_bool = 0; var_543_object = Obj(); var_544_bool = 0; var_545_int = 0; var_546_bool = 0;
	var_0_object = var_537_object;
	var_547_bool = 0; var_548_object = Obj();
	var_537_object = var_548_object;
	func_6117(var_547_bool, var_548_object);
	var_549_bool = var_547_bool == 0; //@nz
	if(var_549_bool != 0) {
		var_536_int = -2;
		return 8;
	}
	CreateDialog(var_543_object);
	var_550_int = 0;
	func_6269(var_550_int);
	@@var_543_object:SetNPCName(var_550_int);
	var_551_string = "";
	func_6271(var_551_string);
	@@var_543_object:SetPhoto(var_551_string);
	var_552_int = 0;
	func_7360(var_552_int);
	@@var_543_object:SetPlayerName(var_552_int);
	IsOverrideActive(var_544_bool);
	var_553_bool = var_544_bool;
	if(var_553_bool != 0) {
		var_536_int = -2;
		return 8;
	}
	DoDialog(var_543_object);
	var_554_object = Obj(); var_555_object = Obj();
	var_537_object = var_554_object;
	var_543_object = var_555_object;
	TaskCall(13);
	func_4434(var_556_object, var_557_object, var_558_string, var_559_bool, var_554_object, var_555_object);
	TaskReturn();
	@@var_543_object:IsDialogEnd(var_546_bool);
	
Label_4416:
	var_643_bool = var_546_bool == 0; //@nz
	if(var_643_bool != 0) {
		sync();
		@@var_543_object:IsDialogEnd(var_546_bool);
		goto Label_4416;
	}
	var_537_object = Obj();
	func_6173();
	StopDialog(var_543_object);
	@@var_543_object:GetReturnValue((int)-1);
	var_545_int = var_536_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6934(var_450_bool)
{
	var_452_int = 0; var_453_string = "";
	func_6212(var_452_int, "ood1Viktor10");
	var_455_bool = var_452_int == (int)0;
	if(var_455_bool != 0) {
		var_450_bool = 1;
		return 0;
	}
	var_450_bool = 0;
	return 0;
}


func_6427()
{
	SetVariable("KnowStation", (int)1);
	return 0;
}


func_6433()
{
	SetVariable("KnowFactory", (int)1);
	return 0;
}


func_6946(var_466_bool)
{
	var_468_int = 0; var_469_string = "";
	func_6212(var_468_int, "ood1Viktor11");
	var_471_bool = var_468_int == (int)0;
	if(var_471_bool != 0) {
		var_466_bool = 1;
		return 0;
	}
	var_466_bool = 0;
	return 0;
}


func_7457()
{
	var_110_object = Obj(); var_111_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_111_object, (int)113, (int)1, (int)13736);
	var_116_bool = 0; var_117_object = Obj(); var_118_int = 0;
	var_111_object = var_117_object;
	func_7281(var_116_bool, var_117_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_289(var_0_object, var_647_int, var_648_object)
{
	var_650_object = Obj(); var_651_bool = 0; var_652_int = 0; var_653_bool = 0; var_654_object = Obj(); var_655_bool = 0; var_656_int = 0; var_657_bool = 0;
	var_0_object = var_648_object;
	var_658_bool = 0; var_659_object = Obj();
	var_648_object = var_659_object;
	func_6117(var_658_bool, var_659_object);
	var_660_bool = var_658_bool == 0; //@nz
	if(var_660_bool != 0) {
		var_647_int = -2;
		return 8;
	}
	CreateDialog(var_654_object);
	var_661_int = 0;
	func_6269(var_661_int);
	@@var_654_object:SetNPCName(var_661_int);
	var_662_string = "";
	func_6271(var_662_string);
	@@var_654_object:SetPhoto(var_662_string);
	var_663_int = 0;
	func_7360(var_663_int);
	@@var_654_object:SetPlayerName(var_663_int);
	IsOverrideActive(var_655_bool);
	var_664_bool = var_655_bool;
	if(var_664_bool != 0) {
		var_647_int = -2;
		return 8;
	}
	DoDialog(var_654_object);
	var_665_object = Obj(); var_666_object = Obj();
	var_648_object = var_665_object;
	var_654_object = var_666_object;
	TaskCall(5);
	func_352(var_667_object, var_668_object, var_669_string, var_670_bool, var_665_object, var_666_object);
	TaskReturn();
	@@var_654_object:IsDialogEnd(var_657_bool);
	
Label_334:
	var_707_bool = var_657_bool == 0; //@nz
	if(var_707_bool != 0) {
		sync();
		@@var_654_object:IsDialogEnd(var_657_bool);
		goto Label_334;
	}
	var_648_object = Obj();
	func_6173();
	StopDialog(var_654_object);
	@@var_654_object:GetReturnValue((int)-1);
	var_656_int = var_647_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6439()
{
	SetVariable("KnowWarehouses", (int)1);
	return 0;
}


func_6445()
{
	SetVariable("KnowViktor", (int)1);
	return 0;
}


func_6958(var_896_bool)
{
	var_898_int = 0; var_899_string = "";
	func_6212(var_898_int, "d1q01");
	var_901_bool = var_898_int == (int)1;
	if(var_901_bool != 0) {
		var_896_bool = 1;
		return 0;
	}
	var_896_bool = 0;
	return 0;
}


func_7473()
{
	var_101_object = Obj(); var_102_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_102_object, (int)112, (int)1, (int)13735);
	var_107_bool = 0; var_108_object = Obj(); var_109_int = 0;
	var_102_object = var_108_object;
	func_7281(var_107_bool, var_108_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6451()
{
	var_50_object = Obj(); var_51_object = Obj();
	func_7310(Obj());
	var_52_object = var_51_object;
	var_63_float = 0;
	func_6240(var_63_float);
	@@var_51_object:AddMark("d3q02ViktorGotoMladVlad", "pt_map_maldvlad", (int)0, (int)11380, var_63_float);
	var_70_float = 0;
	func_6240(var_70_float);
	@@var_51_object:AddMark("d3q02ViktorGotoMladVladSelf", "pt_map_viktor", (int)0, (int)15305, var_70_float);
	func_7409();
	return 2;
}
EMIT "Stack[-1] = 0";


func_6970(var_188_bool)
{
	var_190_int = 0; var_191_string = "";
	func_6212(var_190_int, "d3q02");
	var_195_bool = var_190_int == (int)1;
	if(var_195_bool != 0) {
		var_188_bool = 1;
		return 0;
	}
	var_188_bool = 0;
	return 0;
}


func_7489()
{
	var_50_object = Obj(); var_51_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_51_object, (int)182, (int)1, (int)15445);
	var_56_bool = 0; var_57_object = Obj(); var_58_int = 0;
	var_51_object = var_57_object;
	func_7281(var_56_bool, var_57_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5443(var_0_object, var_782_int, var_783_object)
{
	var_785_object = Obj(); var_786_bool = 0; var_787_int = 0; var_788_bool = 0; var_789_object = Obj(); var_790_bool = 0; var_791_int = 0; var_792_bool = 0;
	var_0_object = var_783_object;
	var_793_bool = 0; var_794_object = Obj();
	var_783_object = var_794_object;
	func_6117(var_793_bool, var_794_object);
	var_795_bool = var_793_bool == 0; //@nz
	if(var_795_bool != 0) {
		var_782_int = -2;
		return 8;
	}
	CreateDialog(var_789_object);
	var_796_int = 0;
	func_6269(var_796_int);
	@@var_789_object:SetNPCName(var_796_int);
	var_797_string = "";
	func_6271(var_797_string);
	@@var_789_object:SetPhoto(var_797_string);
	var_798_int = 0;
	func_7360(var_798_int);
	@@var_789_object:SetPlayerName(var_798_int);
	IsOverrideActive(var_790_bool);
	var_799_bool = var_790_bool;
	if(var_799_bool != 0) {
		var_782_int = -2;
		return 8;
	}
	DoDialog(var_789_object);
	var_800_object = Obj(); var_801_object = Obj();
	var_783_object = var_800_object;
	var_789_object = var_801_object;
	TaskCall(17);
	func_5506(var_802_object, var_803_object, var_804_string, var_805_bool, var_800_object, var_801_object);
	TaskReturn();
	@@var_789_object:IsDialogEnd(var_792_bool);
	
Label_5488:
	var_864_bool = var_792_bool == 0; //@nz
	if(var_864_bool != 0) {
		sync();
		@@var_789_object:IsDialogEnd(var_792_bool);
		goto Label_5488;
	}
	var_783_object = Obj();
	func_6173();
	StopDialog(var_789_object);
	@@var_789_object:GetReturnValue((int)-1);
	var_791_int = var_782_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6982(var_196_bool)
{
	var_196_bool = 1;
	return 0;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


func_6987(var_202_bool)
{
	var_204_int = 0; var_205_string = "";
	func_6212(var_204_int, "d3q02");
	var_207_bool = var_204_int == (int)4;
	if(var_207_bool != 0) {
		var_202_bool = 1;
		return 0;
	}
	var_202_bool = 0;
	return 0;
}


func_6479()
{
	return 0;
}


func_6481(var_97_object)
{
	var_98_object = Obj(); var_99_string = ""; var_100_float = 0;
	func_7310(Obj());
	var_101_object = var_98_object;
	func_7327(var_98_object, "pt_map_mladvlad", (float)2);
	var_121_object = Obj();
	func_7310(var_121_object);
	@@var_97_object:ShowMap(var_121_object);
	return 0;
}


func_4434(var_0_object, var_1_object, var_2_object, var_3_object, var_554_object, var_555_object)
{
	var_0_object = var_555_object;
	var_1_object = var_554_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_561_bool = 0;
		var_561_bool = 0;
		var_562_bool = 0;
		var_562_bool = 0;
		var_563_bool = 0; var_564_object = Obj();
		var_564_object = var_1_object;
		func_7088(var_564_object);
		if(var_563_bool != 0) {
			var_569_bool = 0; var_570_object = Obj();
			var_570_object = var_1_object;
			func_7028(var_570_object);
			var_575_bool = var_569_bool == 0; //@nz
			if(var_575_bool != 0) {
				var_562_bool = 1;
			}
		}
		if(var_562_bool != 0) {
			var_576_bool = 0; var_577_object = Obj();
			var_577_object = var_1_object;
			func_7040(var_577_object);
			var_582_bool = var_576_bool == 0; //@nz
			if(var_582_bool != 0) {
				var_561_bool = 1;
			}
		}
		if(var_561_bool != 0) {
			var_583_string = "";
			func_4576(var_555_object, "Neutral");
			@@@var_0_object:SetMessage((int)12584);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11771, (int)12991, (int)12979);
			var_592_bool = 0; var_593_object = Obj();
			var_593_object = var_1_object;
			func_7016(var_593_object);
			var_598_bool = var_592_bool == 0; //@nz
			if(var_598_bool != 0) {
				@@@var_0_object:AddReply((int)12585, (int)13755, (int)13752);
			}
		} else {
				var_610_string = "";
				func_4576(var_555_object, "Neutral");
				@@@var_0_object:SetMessage((int)11765);
				@@@var_0_object:ClearReplies();
				var_612_bool = 0;
				var_612_bool = 0;
				var_613_bool = 0; var_614_object = Obj();
				var_614_object = var_1_object;
				func_7052(var_614_object);
				if(var_613_bool != 0) {
					var_619_bool = 0; var_620_object = Obj();
					var_620_object = var_1_object;
					func_7064(var_620_object);
					if(var_619_bool != 0) {
						var_612_bool = 1;
					}
				}
				if(var_612_bool != 0) {
					@@@var_0_object:AddReply((int)11767, (int)12977, (int)12975);
				}
				var_628_bool = 0;
				var_628_bool = 0;
				var_629_bool = 0; var_630_object = Obj();
				var_630_object = var_1_object;
				func_7028(var_630_object);
				if(var_629_bool != 0) {
					var_631_bool = 0; var_632_object = Obj();
					var_632_object = var_1_object;
					func_7076(var_632_object);
					if(var_631_bool != 0) {
						var_628_bool = 1;
					}
				}
				if(var_628_bool != 0) {
					@@@var_0_object:AddReply((int)12570, (int)13740, (int)13739);
				}
				@@@var_0_object:AddReply((int)11766, (int)-1, (int)12974);
				goto Label_4546;
		}
	}
Label_4546:
	var_602_bool = 0;
	func_6273(var_602_bool);
	if(var_602_bool != 0) {

	Label_4550:
		lshWaitForAnimEnd();
		var_603_object = var_3_object;
		if(var_603_object != 0) {
		} else {
			var_604_string = "";
			var_604_string = var_2_object;
			func_6177(var_604_string);
			goto Label_4550;
	}
		PlayAnimation("all", "idle");

	Label_4565:
		WaitForAnimEnd();
		var_607_object = var_3_object;
		if(var_607_object != 0) {
			goto Label_4575;
		}
		PlayAnimation("all", "idle");
		goto Label_4565;

	}
	goto Label_4575;
	
Label_4575:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1156";


func_7505()
{
	var_75_object = Obj(); var_76_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_76_object, (int)183, (int)1, (int)15446);
	var_81_bool = 0; var_82_object = Obj(); var_83_int = 0;
	var_76_object = var_82_object;
	func_7281(var_81_bool, var_82_object, (int)182);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6999(var_208_bool)
{
	var_208_bool = 1;
	return 0;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


func_7004(var_792_bool)
{
	var_794_int = 0; var_795_string = "";
	func_6212(var_794_int, "KnowSaburivClan");
	var_797_bool = var_794_int == (int)1;
	if(var_797_bool != 0) {
		var_792_bool = 1;
		return 0;
	}
	var_792_bool = 0;
	return 0;
}


func_352(var_0_object, var_1_object, var_2_object, var_3_object, var_665_object, var_666_object)
{
	var_0_object = var_666_object;
	var_1_object = var_665_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_672_bool = 0; var_673_object = Obj();
		var_673_object = var_1_object;
		func_7100(var_673_object);
		if(var_672_bool != 0) {
			var_678_object = Obj(); var_679_object = Obj();
			var_678_object = var_1_object;
			var_679_object = var_0_object;
			func_6689();
			var_682_string = "";
			func_435(var_666_object, "Neutral");
			@@@var_0_object:SetMessage((int)12036);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12037, (int)13256, (int)13255);
			@@@var_0_object:AddReply((int)12640, (int)13821, (int)13820);
		} else {
				var_702_string = "";
				func_435(var_666_object, "Neutral");
				@@@var_0_object:SetMessage((int)13016);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)13017, (int)-1, (int)14223);
				goto Label_405;
		}
	}
Label_405:
	var_694_bool = 0;
	func_6273(var_694_bool);
	if(var_694_bool != 0) {

	Label_409:
		lshWaitForAnimEnd();
		var_695_object = var_3_object;
		if(var_695_object != 0) {
		} else {
			var_696_string = "";
			var_696_string = var_2_object;
			func_6177(var_696_string);
			goto Label_409;
	}
		PlayAnimation("all", "idle");

	Label_424:
		WaitForAnimEnd();
		var_699_object = var_3_object;
		if(var_699_object != 0) {
			goto Label_434;
		}
		PlayAnimation("all", "idle");
		goto Label_424;

	}
	goto Label_434;
	
Label_434:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x164";


func_7521()
{
	var_40_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	return 0;
}


func_6497()
{
	return 0;
}


func_6499()
{
	SetVariable("d3q02", (int)5);
	return 0;
}


func_7525(var_41_object)
{
	var_42_bool = GlobalVars[1];
	var_43_bool = var_42_bool == 0; //@nz
	if(var_43_bool != 0) {
		var_44_int = 0; var_45_object = Obj();
		var_41_object = var_45_object;
		TaskCall(2);
		func_49(var_46_object, var_44_int, var_45_object);
		TaskReturn();
		var_150_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_151_bool = 0; var_152_int = 0;
	func_6254(var_151_bool, (int)1);
	if(var_151_bool != 0) {
		var_159_int = 0; var_160_object = Obj();
		var_41_object = var_160_object;
		TaskCall(6);
		func_652(var_161_object, var_159_int, var_160_object);
		TaskReturn();
		return 0;
	}
	var_392_bool = 0; var_393_int = 0;
	func_6254(var_392_bool, (int)2);
	if(var_392_bool != 0) {
		var_394_int = 0; var_395_object = Obj();
		var_41_object = var_395_object;
		TaskCall(8);
		func_3046(var_396_object, var_394_int, var_395_object);
		TaskReturn();
		return 0;
	}
	var_461_bool = 0; var_462_int = 0;
	func_6254(var_461_bool, (int)3);
	if(var_461_bool != 0) {
		var_463_int = 0; var_464_object = Obj();
		var_41_object = var_464_object;
		TaskCall(10);
		func_3493(var_465_object, var_463_int, var_464_object);
		TaskReturn();
		return 0;
	}
	var_534_bool = 0; var_535_int = 0;
	func_6254(var_534_bool, (int)5);
	if(var_534_bool != 0) {
		var_536_int = 0; var_537_object = Obj();
		var_41_object = var_537_object;
		TaskCall(12);
		func_4371(var_538_object, var_536_int, var_537_object);
		TaskReturn();
		return 0;
	}
	var_645_bool = 0; var_646_int = 0;
	func_6254(var_645_bool, (int)6);
	if(var_645_bool != 0) {
		var_647_int = 0; var_648_object = Obj();
		var_41_object = var_648_object;
		TaskCall(4);
		func_289(var_649_object, var_647_int, var_648_object);
		TaskReturn();
		return 0;
	}
	var_709_bool = 0; var_710_int = 0;
	func_6254(var_709_bool, (int)8);
	if(var_709_bool != 0) {
		var_711_int = 0; var_712_object = Obj();
		var_41_object = var_712_object;
		TaskCall(14);
		func_5065(var_713_object, var_711_int, var_712_object);
		TaskReturn();
		return 0;
	}
	var_780_bool = 0; var_781_int = 0;
	func_6254(var_780_bool, (int)9);
	if(var_780_bool != 0) {
		var_782_int = 0; var_783_object = Obj();
		var_41_object = var_783_object;
		TaskCall(16);
		func_5443(var_784_object, var_782_int, var_783_object);
		TaskReturn();
		return 0;
	}
	func_6260((bool)0);
	return 0;
}


func_7016(var_210_bool)
{
	var_212_int = 0; var_213_string = "";
	func_6212(var_212_int, "d5q03");
	var_215_bool = var_212_int == (int)0;
	if(var_215_bool != 0) {
		var_210_bool = 1;
		return 0;
	}
	var_210_bool = 0;
	return 0;
}


func_6505()
{
	func_7377();
	return 0;
}


func_6510()
{
	var_48_object = Obj(); var_49_object = Obj();
	var_50_int = 0; var_51_string = "";
	func_6212(var_50_int, "d5q03");
	var_55_bool = var_50_int == (int)0;
	if(var_55_bool != 0) {
		SetVariable("d5q03", (int)1);
		func_7310(Obj());
		var_58_object = var_49_object;
		var_69_float = 0;
		func_6240(var_69_float);
		@@var_49_object:AddMark("d5q03ViktorSavePrisonersSelf", "pt_map_viktor", (int)0, (int)15371, var_69_float);
		var_76_float = 0;
		func_6240(var_76_float);
		@@var_49_object:AddMark("d5q03SavePrisoners", "pt_map_uprava_prison", (int)0, (int)15370, var_76_float);
		func_7425();
		var_102_object = Obj(); var_103_string = "";
		func_6217(var_102_object, "quest_d5_03");
		var_110_bool = 0; var_111_string = ""; var_112_string = "";
		func_6228(var_110_bool, "quest_d5_03", "place_prisoners");
		var_49_object = 0;
	}
	return 2;
}


func_7028(var_177_bool)
{
	var_179_int = 0; var_180_string = "";
	func_6212(var_179_int, "d5q03");
	var_182_bool = var_179_int == (int)1000;
	if(var_182_bool != 0) {
		var_177_bool = 1;
		return 0;
	}
	var_177_bool = 0;
	return 0;
}


func_7040(var_184_bool)
{
	var_186_int = 0; var_187_string = "";
	func_6212(var_186_int, "d5q03");
	var_189_bool = var_186_int == (int)-1;
	if(var_189_bool != 0) {
		var_184_bool = 1;
		return 0;
	}
	var_184_bool = 0;
	return 0;
}


func_5506(var_0_object, var_1_object, var_2_object, var_3_object, var_800_object, var_801_object)
{
	var_0_object = var_801_object;
	var_1_object = var_800_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_807_bool = 0; var_808_object = Obj();
		var_808_object = var_1_object;
		func_7160(var_808_object);
		if(var_807_bool != 0) {
			var_813_object = Obj(); var_814_object = Obj();
			var_813_object = var_1_object;
			var_814_object = var_0_object;
			func_6654();
			var_817_string = "";
			func_5613(var_801_object, "Neutral");
			@@@var_0_object:SetMessage((int)13994);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13995, (int)15231, (int)15230);
		} else {
				var_834_string = "";
				func_5613(var_801_object, "Neutral");
				@@@var_0_object:SetMessage((int)14011);
				@@@var_0_object:ClearReplies();
				var_836_bool = 0; var_837_object = Obj();
				var_837_object = var_1_object;
				func_7232(var_837_object);
				if(var_836_bool != 0) {
					@@@var_0_object:AddReply((int)14012, (int)15248, (int)15247);
				}
				var_845_bool = 0;
				var_845_bool = 0;
				var_846_bool = 0; var_847_object = Obj();
				var_847_object = var_1_object;
				func_7184(var_847_object);
				if(var_846_bool != 0) {
					var_852_bool = 0; var_853_object = Obj();
					var_853_object = var_1_object;
					func_7196(var_853_object);
					if(var_852_bool != 0) {
						var_845_bool = 1;
					}
				}
				if(var_845_bool != 0) {
					@@@var_0_object:AddReply((int)14029, (int)15265, (int)15264);
				}
				@@@var_0_object:AddReply((int)14039, (int)-1, (int)15274);
				goto Label_5583;
		}
	}
Label_5583:
	var_826_bool = 0;
	func_6273(var_826_bool);
	if(var_826_bool != 0) {

	Label_5587:
		lshWaitForAnimEnd();
		var_827_object = var_3_object;
		if(var_827_object != 0) {
		} else {
			var_828_string = "";
			var_828_string = var_2_object;
			func_6177(var_828_string);
			goto Label_5587;
	}
		PlayAnimation("all", "idle");

	Label_5602:
		WaitForAnimEnd();
		var_831_object = var_3_object;
		if(var_831_object != 0) {
			goto Label_5612;
		}
		PlayAnimation("all", "idle");
		goto Label_5602;

	}
	goto Label_5612;
	
Label_5612:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1586";


func_7052(var_223_bool)
{
	var_225_int = 0; var_226_string = "";
	func_6212(var_225_int, "d5q03");
	var_228_bool = var_225_int == (int)2;
	if(var_228_bool != 0) {
		var_223_bool = 1;
		return 0;
	}
	var_223_bool = 0;
	return 0;
}


func_7064(var_229_bool)
{
	var_231_int = 0; var_232_string = "";
	func_6212(var_231_int, "ood5Viktor1");
	var_234_bool = var_231_int == (int)0;
	if(var_234_bool != 0) {
		var_229_bool = 1;
		return 0;
	}
	var_229_bool = 0;
	return 0;
}


func_6558()
{
	SetVariable("ood5Viktor1", (int)1);
	return 0;
}


func_7076(var_241_bool)
{
	var_243_int = 0; var_244_string = "";
	func_6212(var_243_int, "ood5Viktor2");
	var_246_bool = var_243_int == (int)0;
	if(var_246_bool != 0) {
		var_241_bool = 1;
		return 0;
	}
	var_241_bool = 0;
	return 0;
}


func_6564(var_136_object)
{
	Trace("money30000 is given");
	var_139_object = Obj(); var_140_string = ""; var_141_int = 0;
	var_136_object = var_139_object;
	func_6093(var_139_object, "money", (int)30000);
	return 0;
}


func_3493(var_0_object, var_463_int, var_464_object)
{
	var_466_object = Obj(); var_467_bool = 0; var_468_int = 0; var_469_bool = 0; var_470_object = Obj(); var_471_bool = 0; var_472_int = 0; var_473_bool = 0;
	var_0_object = var_464_object;
	var_474_bool = 0; var_475_object = Obj();
	var_464_object = var_475_object;
	func_6117(var_474_bool, var_475_object);
	var_476_bool = var_474_bool == 0; //@nz
	if(var_476_bool != 0) {
		var_463_int = -2;
		return 8;
	}
	CreateDialog(var_470_object);
	var_477_int = 0;
	func_6269(var_477_int);
	@@var_470_object:SetNPCName(var_477_int);
	var_478_string = "";
	func_6271(var_478_string);
	@@var_470_object:SetPhoto(var_478_string);
	var_479_int = 0;
	func_7360(var_479_int);
	@@var_470_object:SetPlayerName(var_479_int);
	IsOverrideActive(var_471_bool);
	var_480_bool = var_471_bool;
	if(var_480_bool != 0) {
		var_463_int = -2;
		return 8;
	}
	DoDialog(var_470_object);
	var_481_object = Obj(); var_482_object = Obj();
	var_464_object = var_481_object;
	var_470_object = var_482_object;
	TaskCall(11);
	func_3556(var_483_object, var_484_object, var_485_string, var_486_bool, var_481_object, var_482_object);
	TaskReturn();
	@@var_470_object:IsDialogEnd(var_473_bool);
	
Label_3538:
	var_532_bool = var_473_bool == 0; //@nz
	if(var_532_bool != 0) {
		sync();
		@@var_470_object:IsDialogEnd(var_473_bool);
		goto Label_3538;
	}
	var_464_object = Obj();
	func_6173();
	StopDialog(var_470_object);
	@@var_470_object:GetReturnValue((int)-1);
	var_472_int = var_463_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6575()
{
	SetVariable("ood5Viktor2", (int)1);
	return 0;
}


func_7088(var_171_bool)
{
	var_173_int = 0; var_174_string = "";
	func_6212(var_173_int, "ood5Viktor3");
	var_176_bool = var_173_int == (int)0;
	if(var_176_bool != 0) {
		var_171_bool = 1;
		return 0;
	}
	var_171_bool = 0;
	return 0;
}


func_435(var_2_object, var_143_string)
{
	var_144_bool = 0;
	func_6273(var_144_bool);
	var_145_bool = var_144_bool == 0; //@nz
	if(var_145_bool != 0) {
		return 0;
	}
	var_146_bool = var_143_string == var_2_object;
	if(var_146_bool != 0) {
		return 0;
	}
	var_147_string = "";
	var_143_string = var_147_string;
	func_6177(var_147_string);
	var_2_object = var_143_string;
	return 0;
}


func_6581()
{
	return 0;
}


func_6583()
{
	SetVariable("ood5Viktor3", (int)1);
	return 0;
}


func_7100(var_131_bool)
{
	var_133_int = 0; var_134_string = "";
	func_6212(var_133_int, "ood6Viktor1");
	var_138_bool = var_133_int == (int)0;
	if(var_138_bool != 0) {
		var_131_bool = 1;
		return 0;
	}
	var_131_bool = 0;
	return 0;
}


func_6589()
{
	SetVariable("ood6Viktor1", (int)1);
	return 0;
}


func_6595()
{
	var_48_object = Obj(); var_49_object = Obj();
	SetVariable("d6q01", (int)1);
	func_7310(Obj());
	var_52_object = var_49_object;
	var_63_float = 0;
	func_6240(var_63_float);
	@@var_49_object:AddMark("d6q01ViktorGotoAlexandr", "pt_map_alexandr", (int)1, (int)15383, var_63_float);
	var_70_float = 0;
	func_6240(var_70_float);
	@@var_49_object:AddMark("d6q01ViktorGotoBigVlad", "pt_map_bigvlad", (int)1, (int)15384, var_70_float);
	var_75_float = 0;
	func_6240(var_75_float);
	@@var_49_object:AddMark("d6q01ViktorGotoAlxBigSelf", "pt_map_viktor", (int)1, (int)15385, var_75_float);
	func_7441();
	func_7473();
	func_7457();
	return 2;
}
EMIT "Stack[-1] = 0";


func_7112(var_412_bool)
{
	var_414_int = 0; var_415_string = "";
	func_6212(var_414_int, "KnowAlexandr");
	var_417_bool = var_414_int == (int)1;
	if(var_417_bool != 0) {
		var_412_bool = 1;
		return 0;
	}
	var_412_bool = 0;
	return 0;
}


func_5065(var_0_object, var_711_int, var_712_object)
{
	var_714_object = Obj(); var_715_bool = 0; var_716_int = 0; var_717_bool = 0; var_718_object = Obj(); var_719_bool = 0; var_720_int = 0; var_721_bool = 0;
	var_0_object = var_712_object;
	var_722_bool = 0; var_723_object = Obj();
	var_712_object = var_723_object;
	func_6117(var_722_bool, var_723_object);
	var_724_bool = var_722_bool == 0; //@nz
	if(var_724_bool != 0) {
		var_711_int = -2;
		return 8;
	}
	CreateDialog(var_718_object);
	var_725_int = 0;
	func_6269(var_725_int);
	@@var_718_object:SetNPCName(var_725_int);
	var_726_string = "";
	func_6271(var_726_string);
	@@var_718_object:SetPhoto(var_726_string);
	var_727_int = 0;
	func_7360(var_727_int);
	@@var_718_object:SetPlayerName(var_727_int);
	IsOverrideActive(var_719_bool);
	var_728_bool = var_719_bool;
	if(var_728_bool != 0) {
		var_711_int = -2;
		return 8;
	}
	DoDialog(var_718_object);
	var_729_object = Obj(); var_730_object = Obj();
	var_712_object = var_729_object;
	var_718_object = var_730_object;
	TaskCall(15);
	func_5128(var_731_object, var_732_object, var_733_string, var_734_bool, var_729_object, var_730_object);
	TaskReturn();
	@@var_718_object:IsDialogEnd(var_721_bool);
	
Label_5110:
	var_778_bool = var_721_bool == 0; //@nz
	if(var_778_bool != 0) {
		sync();
		@@var_718_object:IsDialogEnd(var_721_bool);
		goto Label_5110;
	}
	var_712_object = Obj();
	func_6173();
	StopDialog(var_718_object);
	@@var_718_object:GetReturnValue((int)-1);
	var_720_int = var_711_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6093(var_139_object, var_140_string, var_141_int)
{
	var_142_int = 0; var_143_int = 0;
	@@var_139_object:GetProperty(var_140_string, var_143_int);
	var_144_int = var_143_int + var_141_int;
	@@var_139_object:SetProperty(var_140_string, var_144_int);
	return 2;
}


func_6100(var_41_bool, var_42_object)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0;
	@@var_42_object:GetPosition(var_47_cvector);
	GetPosition(var_48_cvector);
	var_49_cvector = var_47_cvector - var_48_cvector;
	var_51_float = GetByIndex(var_49_cvector, 0);
	var_52_float = GetByIndex(var_49_cvector, 2);
	Rotate(var_51_float, var_52_float, var_50_bool);
	var_50_bool = var_41_bool;
	return 8;
}


func_7124(var_428_bool)
{
	var_430_int = 0; var_431_string = "";
	func_6212(var_430_int, "KnowBigVlad");
	var_433_bool = var_430_int == (int)1;
	if(var_433_bool != 0) {
		var_428_bool = 1;
		return 0;
	}
	var_428_bool = 0;
	return 0;
}


func_6112(var_41_bool)
{
	var_42_bool = 0; var_43_bool = 0;
	IsLoaded(var_43_bool);
	var_43_bool = var_41_bool;
	return 2;
}


func_4576(var_2_object, var_191_string)
{
	var_192_bool = 0;
	func_6273(var_192_bool);
	var_193_bool = var_192_bool == 0; //@nz
	if(var_193_bool != 0) {
		return 0;
	}
	var_194_bool = var_191_string == var_2_object;
	if(var_194_bool != 0) {
		return 0;
	}
	var_195_string = "";
	var_191_string = var_195_string;
	func_6177(var_195_string);
	var_2_object = var_191_string;
	return 0;
}


func_7136(var_55_bool)
{
	var_57_int = 0; var_58_string = "";
	func_6212(var_57_int, "ood8Viktor1");
	var_60_bool = var_57_int == (int)0;
	if(var_60_bool != 0) {
		var_55_bool = 1;
		return 0;
	}
	var_55_bool = 0;
	return 0;
}


func_3556(var_0_object, var_1_object, var_2_object, var_3_object, var_481_object, var_482_object)
{
	var_0_object = var_482_object;
	var_1_object = var_481_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_488_string = "";
		func_3652(var_482_object, "Neutral");
		@@@var_0_object:SetMessage((int)10235);
		@@@var_0_object:ClearReplies();
		var_494_bool = 0;
		var_494_bool = 0;
		var_495_bool = 0; var_496_object = Obj();
		var_496_object = var_1_object;
		func_6970(var_496_object);
		if(var_495_bool != 0) {
			var_501_bool = 0; var_502_object = Obj();
			var_502_object = var_1_object;
			func_6982(var_502_object);
			if(var_501_bool != 0) {
				var_494_bool = 1;
			}
		}
		if(var_494_bool != 0) {
			@@@var_0_object:AddReply((int)10236, (int)11288, (int)11286);
		}
		var_506_bool = 0;
		var_506_bool = 0;
		var_507_bool = 0; var_508_object = Obj();
		var_508_object = var_1_object;
		func_6987(var_508_object);
		if(var_507_bool != 0) {
			var_513_bool = 0; var_514_object = Obj();
			var_514_object = var_1_object;
			func_6999(var_514_object);
			if(var_513_bool != 0) {
				var_506_bool = 1;
			}
		}
		if(var_506_bool != 0) {
			@@@var_0_object:AddReply((int)10266, (int)11321, (int)11320);
		}
		@@@var_0_object:AddReply((int)10237, (int)11089, (int)11287);
		@@@var_0_object:AddReply((int)11382, (int)-1, (int)12578);
		goto Label_3622;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xde8";
	}
Label_3622:
	var_524_bool = 0;
	func_6273(var_524_bool);
	if(var_524_bool != 0) {

	Label_3626:
		lshWaitForAnimEnd();
		var_525_object = var_3_object;
		if(var_525_object != 0) {
		} else {
			var_526_string = "";
			var_526_string = var_2_object;
			func_6177(var_526_string);
			goto Label_3626;
	}
		PlayAnimation("all", "idle");

	Label_3641:
		WaitForAnimEnd();
		var_529_object = var_3_object;
		if(var_529_object != 0) {
			goto Label_3651;
		}
		PlayAnimation("all", "idle");
		goto Label_3641;
	}
	goto Label_3651;
	
Label_3651:
	return 0;
	
}


func_6117(var_55_bool, var_56_object)
{
	var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0;
	@@var_56_object:GetPosition(var_66_cvector);
	@@var_56_object:GetEyesHeight(var_65_float);
	var_73_float = GetByIndex(var_66_cvector, 1);
	var_73_float = var_73_float + var_65_float;
	SetByIndex(var_66_cvector, 1) = var_73_float;
	GetPosition(var_67_cvector);
	GetEyesHeight(var_65_float);
	var_74_float = GetByIndex(var_67_cvector, 1);
	var_74_float = var_74_float + var_65_float;
	SetByIndex(var_67_cvector, 1) = var_74_float;
	var_68_cvector = var_66_cvector - var_67_cvector;
	var_75_float = GetByIndex(var_68_cvector, 1);
	SetByIndex(var_68_cvector, 1) = (float)0;
	var_76_int = var_68_cvector | var_68_cvector;
	var_77_float = sqrt(var_76_int);
	var_68_cvector = var_68_cvector / var_77_float;
	var_69_cvector = -var_68_cvector;
	var_79_float = var_68_cvector * (int)70;
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0);
	var_81_cvector = var_69_cvector ^ CVector(0.0, 1.0, 0.0);
	func_6202(var_80_cvector, var_81_cvector);
	var_89_float = var_80_cvector * (int)25;
	var_90_int = var_79_float + var_89_float;
	var_70_cvector = var_90_int - CVector(0.0, 10.0, 0.0);
	var_71_cvector = var_67_cvector + var_70_cvector;
	IsOverrideActive(var_72_bool);
	var_92_bool = var_72_bool;
	if(var_92_bool != 0) {
		var_55_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_71_cvector, var_69_cvector);
	var_93_float = GetByIndex(var_70_cvector, 0);
	var_94_float = GetByIndex(var_70_cvector, 2);
	Rotate(var_93_float, var_94_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_55_bool = 1;
	return 16;
}


func_3046(var_0_object, var_394_int, var_395_object)
{
	var_397_object = Obj(); var_398_bool = 0; var_399_int = 0; var_400_bool = 0; var_401_object = Obj(); var_402_bool = 0; var_403_int = 0; var_404_bool = 0;
	var_0_object = var_395_object;
	var_405_bool = 0; var_406_object = Obj();
	var_395_object = var_406_object;
	func_6117(var_405_bool, var_406_object);
	var_407_bool = var_405_bool == 0; //@nz
	if(var_407_bool != 0) {
		var_394_int = -2;
		return 8;
	}
	CreateDialog(var_401_object);
	var_408_int = 0;
	func_6269(var_408_int);
	@@var_401_object:SetNPCName(var_408_int);
	var_409_string = "";
	func_6271(var_409_string);
	@@var_401_object:SetPhoto(var_409_string);
	var_410_int = 0;
	func_7360(var_410_int);
	@@var_401_object:SetPlayerName(var_410_int);
	IsOverrideActive(var_402_bool);
	var_411_bool = var_402_bool;
	if(var_411_bool != 0) {
		var_394_int = -2;
		return 8;
	}
	DoDialog(var_401_object);
	var_412_object = Obj(); var_413_object = Obj();
	var_395_object = var_412_object;
	var_401_object = var_413_object;
	TaskCall(9);
	func_3109(var_414_object, var_415_object, var_416_string, var_417_bool, var_412_object, var_413_object);
	TaskReturn();
	@@var_401_object:IsDialogEnd(var_404_bool);
	
Label_3091:
	var_459_bool = var_404_bool == 0; //@nz
	if(var_459_bool != 0) {
		sync();
		@@var_401_object:IsDialogEnd(var_404_bool);
		goto Label_3091;
	}
	var_395_object = Obj();
	func_6173();
	StopDialog(var_401_object);
	@@var_401_object:GetReturnValue((int)-1);
	var_403_int = var_394_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7148(var_47_bool)
{
	var_49_int = 0; var_50_string = "";
	func_6212(var_49_int, "d8KainIsReason");
	var_54_bool = var_49_int == (int)1;
	if(var_54_bool != 0) {
		var_47_bool = 1;
		return 0;
	}
	var_47_bool = 0;
	return 0;
}


func_5613(var_2_object, var_120_string)
{
	var_121_bool = 0;
	func_6273(var_121_bool);
	var_122_bool = var_121_bool == 0; //@nz
	if(var_122_bool != 0) {
		return 0;
	}
	var_123_bool = var_120_string == var_2_object;
	if(var_123_bool != 0) {
		return 0;
	}
	var_124_string = "";
	var_120_string = var_124_string;
	func_6177(var_124_string);
	var_2_object = var_120_string;
	return 0;
}


func_6642()
{
	SetVariable("KnowAlexandr", (int)1);
	return 0;
}


func_7160(var_108_bool)
{
	var_110_int = 0; var_111_string = "";
	func_6212(var_110_int, "ood9Viktor1");
	var_115_bool = var_110_int == (int)0;
	if(var_115_bool != 0) {
		var_108_bool = 1;
		return 0;
	}
	var_108_bool = 0;
	return 0;
}


func_1019(var_2_object, var_279_string)
{
	var_280_bool = 0;
	func_6273(var_280_bool);
	var_281_bool = var_280_bool == 0; //@nz
	if(var_281_bool != 0) {
		return 0;
	}
	var_282_bool = var_279_string == var_2_object;
	if(var_282_bool != 0) {
		return 0;
	}
	var_283_string = "";
	var_279_string = var_283_string;
	func_6177(var_283_string);
	var_2_object = var_279_string;
	return 0;
}


func_6654()
{
	SetVariable("ood9Viktor1", (int)1);
	return 0;
}


