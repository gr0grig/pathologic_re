// @IMPORTS: Hold/0,StopGroup0/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,GetMainOutdoorScene/1,AddBlankActor/4,AddBlankActorFromXml/4,FindActor/2,Trigger/2,GetGameTime/1,lshWaitForAnimEnd/1,SetVariable/2,TriggerWorld/2,GetDiaryRoot/1,SetDiarySection/1,CreateDiaryEntry/4
// @STRINGS: W:Neutral|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetProperty|A:SetProperty|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:.bin|W:.xml|W:No|W:ui/NPC_MladVlad.png|W:ood1MladVlad3|W:KnowUklad|W:ood1MladVlad4|W:d1q03IsKapella|W:d1q03MladVladGotoOspina|W:pt_map_ospina|A:AddMark|W:quest_d1_03|W:money500 is given|W:money|W:playsound|W:givemoney|W:KnowPochka|W:ood2MladVlad1|W:ood2MladVlad2|W:ood2MladVlad3|W:ood2MladVlad4|W:d2q04|W:pt_map_anna|A:ShowMap|W:pt_map_bigvlad|W:d3q02|W:d3q02MladVladGotoBigVlad|W:ood4MladVlad1|W:d4q01|W:d4q01MladVladGotoBigVlad|W:d4q01MladVladGotoBigVladSelf|W:pt_map_mladvlad|W:d4q01_subquest|W:d4q01MladVladGotoOspina|W:ood4MladVlad2|W:d4q02MladVladGotoAnna|W:d4q02MladVladGotoJulia|W:pt_map_julia|W:d4q02MladVladGotoLara|W:pt_map_lara|W:d4q02MladVladGotoAJLSelf|W:quest_d4_02|W:ood4MladVlad3|W:money 50000 is given|W:d6q02MladVladGotoBigVlad|W:d6q02MladVladGotoBigVladSelf|W:quest_d6_02|W:place_trigger|W:ood6MladVlad1|W:ood6MladVlad2|W:d6q02KnowAboutAttack|W:ood6MladVlad3|W:quest_d6_03|W:failed|W:money30000 is given|W:ood5MladVlad1|W:ood5MladVlad2|W:ood5MladVlad3|W:d6q02BigVlad|A:FindMark|A:Remove|W:d6q02KapellaGotoMladVlad|W:ood8MladVlad1|W:ood8MladVlad2|W:ood8MladVlad3|W:d8q01MladVladIsVictim|W:ood8MladVlad4|W:ood8MladVlad5|W:KnowMladVlad|W:ood1MladVlad5|W:ood1MladVlad6|W:ood1MladVlad7|W:ood1MladVlad8|W:ood1MladVlad9|W:ood1MladVlad10|W:ood1MladVlad11|W:d5q03|W:d5q03MladVladSavePrisonersSelf|W:d5q03SavePrisoners|W:pt_map_uprava_prison|W:quest_d5_03|W:place_prisoners|W:KnowTaurusProject|W:ood1MladVlad1|W:ood1MladVlad2|W:d1q01FirstGeorgVisit|W:d1q03|W:d2q03|W:KnowViktor|W:d4q02|W:d5q02|W:d6q02|W:d6q02GorbunDeath|W:d6q02Trigger|W:d8q01|W:d8q01MladVladIsBad|W:d8q01BringBadBoy|W:KnowBigVlad|W:KnowGrif|W:KnowKaterina|W:KnowLara|W:ood1MladVlad12|W:KnowMaria|W:KnowOspina|W:KnowKapella|W:KnowMyth|W:KnowTermitnik|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:player|W:Adding diary entry
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
// @EVENT_11: op=0x2c5 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x886 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc2a vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xeea vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0x12e9 vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0x155b vars=int,int
// @TASK_16: vars=object params=2
// @TASK_17: vars=object,object,string,bool params=2
// @EVENT_11: op=0x17d7 vars=int,int
// @PE: 0x23,0x29,0x70,0xb4,0xc4,0x16a,0x2b5,0x2c5,0x7d9,0x876,0x886,0xbcd,0xc1a,0xc2a,0xe57,0xeda,0xeea,0x1246,0x12d9,0x12e9,0x14c3,0x154b,0x155b,0x1716,0x17c7,0x17d7,0x1bd1,0x1c2d,0x1c42,0x1c48,0x1c4e,0x1c6f,0x1c7a,0x1c80,0x1c86,0x1c8c,0x1c92,0x1c98,0x1c9e,0x1ca4,0x1cb4,0x1cc4,0x1cd4,0x1ced,0x1d27,0x1d62,0x1d68,0x1d9b,0x1da1,0x1da7,0x1dad,0x1db3,0x1dbd,0x1dc8,0x1dca,0x1dd0,0x1dd6,0x1dd8,0x1e05,0x1e0b,0x1e11,0x1e13,0x1e19,0x1e1f,0x1e25,0x1e2b,0x1e31,0x1e37,0x1e3d,0x1e43,0x1e49,0x1e4f,0x1e55,0x1e8b,0x1e90,0x1e96,0x1e9c,0x1ea2,0x1eae,0x1eba,0x1ec6,0x1ed2,0x1ede,0x1ee8,0x1ef4,0x1f00,0x1f0c,0x1f18,0x1f24,0x1f30,0x1f3c,0x1f48,0x1f4d,0x1f59,0x1f65,0x1f71,0x1f7d,0x1f89,0x1f95,0x1fa1,0x1fad,0x1fb9,0x1fc5,0x1fd1,0x1fdd,0x1fe9,0x1ff5,0x2001,0x200d,0x2019,0x2025,0x2031,0x203d,0x2049,0x2055,0x2061,0x206d,0x2079,0x2085,0x2091,0x209d,0x20a9,0x20b5,0x20c1,0x20cd,0x20d9,0x20e5,0x20f1,0x20fd,0x2109,0x2115,0x2121,0x212d,0x2139,0x2145,0x2151,0x215d,0x2169,0x2175,0x2181,0x22a5

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
	func_8869(var_41_object);
	return 0;
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool)
{
	var_41_bool = 0; var_42_object = Obj();
	var_40_bool = var_42_object;
	func_7048(var_41_bool, var_42_object);
	WaitForAnimEnd();
	return 0;
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_7143();
		var_45_bool = var_40_string == (int)484;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_7723();
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_object;
			func_7296();
			var_54_string = "";
			func_180(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)416);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)417, (int)487, (int)485);
			@@@var_0_object:AddReply((int)418, (int)9271, (int)486);
			return 0;
		}
		var_77_bool = var_40_string == (int)487;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_180(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)419);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)420, (int)9271, (int)488);
			@@@var_0_object:AddReply((int)421, (int)9271, (int)489);
			@@@var_0_object:AddReply((int)422, (int)9271, (int)490);
			return 0;
		}
		var_90_bool = var_40_string == (int)9271;
		if(var_90_bool != 0) {
			var_91_string = "";
			func_180(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8445);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8446, (int)-1, (int)9275);
			@@@var_0_object:AddReply((int)8447, (int)-1, (int)9276);
			return 0;
		}
		var_3_string = true;
		var_99_bool = 0;
		func_7232(var_99_bool);
		if(var_99_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc5";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_7143();
		var_45_bool = var_41_bool == (int)6555;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_7830();
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_object;
			func_7252();
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_7348(var_104_object);
		}
		var_130_bool = var_41_bool == (int)6567;
		if(var_130_bool != 0) {
			var_131_object = Obj(); var_132_object = Obj();
			var_131_object = var_1_object;
			var_132_object = var_0_object;
			func_7830();
		}
		var_134_bool = var_41_bool == (int)6552;
		if(var_134_bool != 0) {
			var_135_object = Obj(); var_136_object = Obj();
			var_135_object = var_1_object;
			var_136_object = var_0_object;
			func_7830();
		}
		var_138_bool = var_41_bool == (int)6553;
		if(var_138_bool != 0) {
			var_139_object = Obj(); var_140_object = Obj();
			var_139_object = var_1_object;
			var_140_object = var_0_object;
			func_7830();
		}
		var_142_bool = var_41_bool == (int)6523;
		if(var_142_bool != 0) {
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_object;
			func_7824();
		}
		var_148_bool = var_41_bool == (int)6710;
		if(var_148_bool != 0) {
			var_149_object = Obj(); var_150_object = Obj();
			var_149_object = var_1_object;
			var_150_object = var_0_object;
			func_7246();
			var_153_object = Obj(); var_154_object = Obj();
			var_153_object = var_1_object;
			var_154_object = var_0_object;
			func_7279(var_154_object);
			var_162_object = Obj(); var_163_object = Obj();
			var_162_object = var_1_object;
			var_163_object = var_0_object;
			func_7290();
		}
		var_167_bool = var_41_bool == (int)6711;
		if(var_167_bool != 0) {
			var_168_object = Obj(); var_169_object = Obj();
			var_168_object = var_1_object;
			var_169_object = var_0_object;
			func_7246();
			var_170_object = Obj(); var_171_object = Obj();
			var_170_object = var_1_object;
			var_171_object = var_0_object;
			func_7290();
			var_172_object = Obj(); var_173_object = Obj();
			var_172_object = var_1_object;
			var_173_object = var_0_object;
			func_7279(var_173_object);
		}
		var_175_bool = var_41_bool == (int)6712;
		if(var_175_bool != 0) {
			var_176_object = Obj(); var_177_object = Obj();
			var_176_object = var_1_object;
			var_177_object = var_0_object;
			func_7246();
		}
		var_179_bool = var_41_bool == (int)16488;
		if(var_179_bool != 0) {
			var_180_object = Obj(); var_181_object = Obj();
			var_180_object = var_1_object;
			var_181_object = var_0_object;
			func_7252();
			var_182_object = Obj(); var_183_object = Obj();
			var_182_object = var_1_object;
			var_183_object = var_0_object;
			func_7348(var_183_object);
		}
		var_185_bool = var_41_bool == (int)9043;
		if(var_185_bool != 0) {
			var_186_object = Obj(); var_187_object = Obj();
			var_186_object = var_1_object;
			var_187_object = var_0_object;
			func_7234();
		}
		var_191_bool = var_41_bool == (int)9046;
		if(var_191_bool != 0) {
			var_192_object = Obj(); var_193_object = Obj();
			var_192_object = var_1_object;
			var_193_object = var_0_object;
			func_7836();
		}
		var_197_bool = var_41_bool == (int)9049;
		if(var_197_bool != 0) {
			var_198_object = Obj(); var_199_object = Obj();
			var_198_object = var_1_object;
			var_199_object = var_0_object;
			func_7729();
		}
		var_203_bool = var_41_bool == (int)9052;
		if(var_203_bool != 0) {
			var_204_object = Obj(); var_205_object = Obj();
			var_204_object = var_1_object;
			var_205_object = var_0_object;
			func_7735();
		}
		var_209_bool = var_41_bool == (int)9054;
		if(var_209_bool != 0) {
			var_210_object = Obj(); var_211_object = Obj();
			var_210_object = var_1_object;
			var_211_object = var_0_object;
			func_7741();
		}
		var_215_bool = var_41_bool == (int)9057;
		if(var_215_bool != 0) {
			var_216_object = Obj(); var_217_object = Obj();
			var_216_object = var_1_object;
			var_217_object = var_0_object;
			func_7747();
		}
		var_221_bool = var_41_bool == (int)9058;
		if(var_221_bool != 0) {
			var_222_object = Obj(); var_223_object = Obj();
			var_222_object = var_1_object;
			var_223_object = var_0_object;
			func_7753();
		}
		var_227_bool = var_41_bool == (int)9061;
		if(var_227_bool != 0) {
			var_228_object = Obj(); var_229_object = Obj();
			var_228_object = var_1_object;
			var_229_object = var_0_object;
			func_7759();
		}
		var_233_bool = var_41_bool == (int)9064;
		if(var_233_bool != 0) {
			var_234_object = Obj(); var_235_object = Obj();
			var_234_object = var_1_object;
			var_235_object = var_0_object;
			func_7765();
		}
		var_239_bool = var_40_string == (int)6276;
		if(var_239_bool != 0) {
			var_240_bool = 0;
			var_240_bool = 0;
			var_241_bool = 0; var_242_object = Obj();
			var_242_object = var_1_object;
			func_8541(var_242_object);
			if(var_241_bool != 0) {
				var_249_bool = 0; var_250_object = Obj();
				var_250_object = var_1_object;
				func_7866(var_250_object);
				if(var_249_bool != 0) {
					var_240_bool = 1;
				}
			}
			if(var_240_bool != 0) {
				var_255_string = "";
				func_693(var_41_bool, "Neutral");
				@@@var_0_object:SetMessage((int)5694);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)5695, (int)6518, (int)6277);
				@@@var_0_object:AddReply((int)5698, (int)-1, (int)6280);
				@@@var_0_object:AddReply((int)5930, (int)6526, (int)6525);
				return 0;
			}
			var_280_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5699);
			@@@var_0_object:ClearReplies();
			var_282_bool = 0;
			var_282_bool = 0;
			var_283_bool = 0;
			var_283_bool = 0;
			var_284_bool = 0; var_285_object = Obj();
			var_285_object = var_1_object;
			func_7842(var_285_object);
			if(var_284_bool != 0) {
				var_290_bool = 0; var_291_object = Obj();
				var_291_object = var_1_object;
				func_7878(var_291_object);
				if(var_290_bool != 0) {
					var_283_bool = 1;
				}
			}
			if(var_283_bool != 0) {
				var_296_bool = 0; var_297_object = Obj();
				var_297_object = var_1_object;
				func_7890(var_297_object);
				var_302_bool = var_296_bool == 0; //@nz
				if(var_302_bool != 0) {
					var_282_bool = 1;
				}
			}
			if(var_282_bool != 0) {
				@@@var_0_object:AddReply((int)5697, (int)6705, (int)6279);
			}
			var_306_bool = 0;
			var_306_bool = 0;
			var_307_bool = 0; var_308_object = Obj();
			var_308_object = var_1_object;
			func_7866(var_308_object);
			if(var_307_bool != 0) {
				var_309_bool = 0; var_310_object = Obj();
				var_310_object = var_1_object;
				func_8541(var_310_object);
				var_311_bool = var_309_bool == 0; //@nz
				if(var_311_bool != 0) {
					var_306_bool = 1;
				}
			}
			if(var_306_bool != 0) {
				@@@var_0_object:AddReply((int)5700, (int)16487, (int)6282);
			}
			var_315_bool = 0;
			var_315_bool = 0;
			var_316_bool = 0; var_317_object = Obj();
			var_317_object = var_1_object;
			func_8565(var_317_object);
			if(var_316_bool != 0) {
				var_322_bool = 0; var_323_object = Obj();
				var_323_object = var_1_object;
				func_7854(var_323_object);
				if(var_322_bool != 0) {
					var_315_bool = 1;
				}
			}
			if(var_315_bool != 0) {
				@@@var_0_object:AddReply((int)8220, (int)6283, (int)9043);
			}
			var_331_bool = 0;
			var_331_bool = 0;
			var_332_bool = 0; var_333_object = Obj();
			var_333_object = var_1_object;
			func_8505(var_333_object);
			if(var_332_bool != 0) {
				var_338_bool = 0; var_339_object = Obj();
				var_339_object = var_1_object;
				func_8553(var_339_object);
				if(var_338_bool != 0) {
					var_331_bool = 1;
				}
			}
			if(var_331_bool != 0) {
				@@@var_0_object:AddReply((int)8223, (int)6294, (int)9046);
			}
			var_347_bool = 0;
			var_347_bool = 0;
			var_348_bool = 0; var_349_object = Obj();
			var_349_object = var_1_object;
			func_8361(var_349_object);
			if(var_348_bool != 0) {
				var_354_bool = 0; var_355_object = Obj();
				var_355_object = var_1_object;
				func_8373(var_355_object);
				if(var_354_bool != 0) {
					var_347_bool = 1;
				}
			}
			if(var_347_bool != 0) {
				@@@var_0_object:AddReply((int)8226, (int)9070, (int)9049);
			}
			var_363_bool = 0;
			var_363_bool = 0;
			var_364_bool = 0; var_365_object = Obj();
			var_365_object = var_1_object;
			func_8481(var_365_object);
			if(var_364_bool != 0) {
				var_370_bool = 0; var_371_object = Obj();
				var_371_object = var_1_object;
				func_8385(var_371_object);
				if(var_370_bool != 0) {
					var_363_bool = 1;
				}
			}
			if(var_363_bool != 0) {
				@@@var_0_object:AddReply((int)8229, (int)9071, (int)9052);
			}
			var_379_bool = 0;
			var_379_bool = 0;
			var_380_bool = 0; var_381_object = Obj();
			var_381_object = var_1_object;
			func_8349(var_381_object);
			if(var_380_bool != 0) {
				var_386_bool = 0; var_387_object = Obj();
				var_387_object = var_1_object;
				func_8397(var_387_object);
				if(var_386_bool != 0) {
					var_379_bool = 1;
				}
			}
			if(var_379_bool != 0) {
				@@@var_0_object:AddReply((int)8231, (int)9072, (int)9054);
			}
			var_395_bool = 0;
			var_395_bool = 0;
			var_396_bool = 0; var_397_object = Obj();
			var_397_object = var_1_object;
			func_8325(var_397_object);
			if(var_396_bool != 0) {
				var_402_bool = 0; var_403_object = Obj();
				var_403_object = var_1_object;
				func_8409(var_403_object);
				if(var_402_bool != 0) {
					var_395_bool = 1;
				}
			}
			if(var_395_bool != 0) {
				@@@var_0_object:AddReply((int)8234, (int)9073, (int)9057);
			}
			var_411_bool = 0;
			var_411_bool = 0;
			var_412_bool = 0; var_413_object = Obj();
			var_413_object = var_1_object;
			func_7984(var_413_object);
			if(var_412_bool != 0) {
				var_418_bool = 0; var_419_object = Obj();
				var_419_object = var_1_object;
				func_8421(var_419_object);
				if(var_418_bool != 0) {
					var_411_bool = 1;
				}
			}
			if(var_411_bool != 0) {
				@@@var_0_object:AddReply((int)8235, (int)9074, (int)9058);
			}
			var_427_bool = 0;
			var_427_bool = 0;
			var_428_bool = 0; var_429_object = Obj();
			var_429_object = var_1_object;
			func_8337(var_429_object);
			if(var_428_bool != 0) {
				var_434_bool = 0; var_435_object = Obj();
				var_435_object = var_1_object;
				func_8433(var_435_object);
				if(var_434_bool != 0) {
					var_427_bool = 1;
				}
			}
			if(var_427_bool != 0) {
				@@@var_0_object:AddReply((int)8238, (int)9075, (int)9061);
			}
			var_443_bool = 0;
			var_443_bool = 0;
			var_444_bool = 0; var_445_object = Obj();
			var_445_object = var_1_object;
			func_8493(var_445_object);
			if(var_444_bool != 0) {
				var_450_bool = 0; var_451_object = Obj();
				var_451_object = var_1_object;
				func_8445(var_451_object);
				if(var_450_bool != 0) {
					var_443_bool = 1;
				}
			}
			if(var_443_bool != 0) {
				@@@var_0_object:AddReply((int)8241, (int)9076, (int)9064);
			}
			var_459_bool = 0;
			var_459_bool = 0;
			var_460_bool = 0; var_461_object = Obj();
			var_461_object = var_1_object;
			func_8469(var_461_object);
			if(var_460_bool != 0) {
				var_466_bool = 0; var_467_object = Obj();
				var_467_object = var_1_object;
				func_8457(var_467_object);
				if(var_466_bool != 0) {
					var_459_bool = 1;
				}
			}
			if(var_459_bool != 0) {
				@@@var_0_object:AddReply((int)8246, (int)9077, (int)9069);
			}
			@@@var_0_object:AddReply((int)6265, (int)-1, (int)6932);
			return 0;
		}
		var_479_bool = var_40_string == (int)9077;
		if(var_479_bool != 0) {
			var_480_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8254);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15212, (int)-1, (int)16489);
			return 0;
		}
		var_486_bool = var_40_string == (int)9076;
		if(var_486_bool != 0) {
			var_487_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8253);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15213, (int)-1, (int)16490);
			return 0;
		}
		var_493_bool = var_40_string == (int)9075;
		if(var_493_bool != 0) {
			var_494_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8252);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15214, (int)-1, (int)16491);
			return 0;
		}
		var_500_bool = var_40_string == (int)9074;
		if(var_500_bool != 0) {
			var_501_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8251);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15215, (int)-1, (int)16492);
			return 0;
		}
		var_507_bool = var_40_string == (int)9073;
		if(var_507_bool != 0) {
			var_508_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8250);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15216, (int)-1, (int)16493);
			return 0;
		}
		var_514_bool = var_40_string == (int)9072;
		if(var_514_bool != 0) {
			var_515_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8249);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15217, (int)-1, (int)16494);
			return 0;
		}
		var_521_bool = var_40_string == (int)9071;
		if(var_521_bool != 0) {
			var_522_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8248);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15218, (int)-1, (int)16495);
			return 0;
		}
		var_528_bool = var_40_string == (int)9070;
		if(var_528_bool != 0) {
			var_529_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8247);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15219, (int)-1, (int)16496);
			return 0;
		}
		var_535_bool = var_40_string == (int)6294;
		if(var_535_bool != 0) {
			var_536_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5711);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5712, (int)6296, (int)6295);
			@@@var_0_object:AddReply((int)5717, (int)6296, (int)6300);
			@@@var_0_object:AddReply((int)5718, (int)-1, (int)6302);
			return 0;
		}
		var_548_bool = var_40_string == (int)6296;
		if(var_548_bool != 0) {
			var_549_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5713);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5714, (int)6298, (int)6297);
			@@@var_0_object:AddReply((int)5716, (int)-1, (int)6299);
			return 0;
		}
		var_558_bool = var_40_string == (int)6298;
		if(var_558_bool != 0) {
			var_559_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5715);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5719, (int)-1, (int)6303);
			return 0;
		}
		var_565_bool = var_40_string == (int)6283;
		if(var_565_bool != 0) {
			var_566_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5701);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5702, (int)6285, (int)6284);
			return 0;
		}
		var_572_bool = var_40_string == (int)6285;
		if(var_572_bool != 0) {
			var_573_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5703);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5704, (int)6287, (int)6286);
			@@@var_0_object:AddReply((int)5710, (int)6287, (int)6292);
			return 0;
		}
		var_582_bool = var_40_string == (int)6287;
		if(var_582_bool != 0) {
			var_583_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5705);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5706, (int)6289, (int)6288);
			return 0;
		}
		var_589_bool = var_40_string == (int)6289;
		if(var_589_bool != 0) {
			var_590_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5707);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5708, (int)-1, (int)6290);
			@@@var_0_object:AddReply((int)5709, (int)-1, (int)6291);
			return 0;
		}
		var_599_bool = var_40_string == (int)16487;
		if(var_599_bool != 0) {
			var_600_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)15210);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15211, (int)-1, (int)16488);
			return 0;
		}
		var_606_bool = var_40_string == (int)6705;
		if(var_606_bool != 0) {
			var_607_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6076);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6077, (int)6708, (int)6706);
			@@@var_0_object:AddReply((int)6078, (int)6708, (int)6707);
			return 0;
		}
		var_616_bool = var_40_string == (int)6708;
		if(var_616_bool != 0) {
			var_617_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6079);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6080, (int)-1, (int)6710);
			@@@var_0_object:AddReply((int)6081, (int)-1, (int)6711);
			@@@var_0_object:AddReply((int)6082, (int)-1, (int)6712);
			return 0;
		}
		var_629_bool = var_40_string == (int)6526;
		if(var_629_bool != 0) {
			var_630_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5931);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5932, (int)6518, (int)6527);
			@@@var_0_object:AddReply((int)5933, (int)-1, (int)6528);
			return 0;
		}
		var_639_bool = var_40_string == (int)6518;
		if(var_639_bool != 0) {
			var_640_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5923);
			@@@var_0_object:ClearReplies();
			var_642_bool = 0; var_643_object = Obj();
			var_643_object = var_1_object;
			func_8517(var_643_object);
			if(var_642_bool != 0) {
				@@@var_0_object:AddReply((int)5924, (int)6530, (int)6519);
			}
			@@@var_0_object:AddReply((int)5925, (int)6522, (int)6520);
			@@@var_0_object:AddReply((int)5926, (int)6522, (int)6521);
			return 0;
		}
		var_658_bool = var_40_string == (int)6522;
		if(var_658_bool != 0) {
			var_659_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5927);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5929, (int)6530, (int)6524);
			var_664_bool = 0; var_665_object = Obj();
			var_665_object = var_1_object;
			func_8529(var_665_object);
			var_670_bool = var_664_bool == 0; //@nz
			if(var_670_bool != 0) {
				@@@var_0_object:AddReply((int)5928, (int)6934, (int)6523);
			}
			return 0;
		}
		var_675_bool = var_40_string == (int)6934;
		if(var_675_bool != 0) {
			var_676_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6266);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6267, (int)6530, (int)6935);
			return 0;
		}
		var_682_bool = var_40_string == (int)6530;
		if(var_682_bool != 0) {
			var_683_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5934);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5937, (int)6535, (int)6534);
			@@@var_0_object:AddReply((int)5935, (int)6533, (int)6532);
			return 0;
		}
		var_692_bool = var_40_string == (int)6533;
		if(var_692_bool != 0) {
			var_693_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5936);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5939, (int)6535, (int)6536);
			return 0;
		}
		var_699_bool = var_40_string == (int)6535;
		if(var_699_bool != 0) {
			var_700_object = Obj(); var_701_object = Obj();
			var_700_object = var_1_object;
			var_701_object = var_0_object;
			func_7240();
			var_704_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5938);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5940, (int)6539, (int)6538);
			@@@var_0_object:AddReply((int)5965, (int)6569, (int)6568);
			return 0;
		}
		var_713_bool = var_40_string == (int)6569;
		if(var_713_bool != 0) {
			var_714_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5966);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5967, (int)6539, (int)6570);
			return 0;
		}
		var_720_bool = var_40_string == (int)6539;
		if(var_720_bool != 0) {
			var_721_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5941);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5945, (int)6544, (int)6543);
			@@@var_0_object:AddReply((int)5942, (int)6541, (int)6540);
			return 0;
		}
		var_730_bool = var_40_string == (int)6541;
		if(var_730_bool != 0) {
			var_731_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5943);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5944, (int)6544, (int)6542);
			@@@var_0_object:AddReply((int)5957, (int)6557, (int)6556);
			return 0;
		}
		var_740_bool = var_40_string == (int)6557;
		if(var_740_bool != 0) {
			var_741_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5958);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5959, (int)6544, (int)6558);
			@@@var_0_object:AddReply((int)5960, (int)6544, (int)6559);
			return 0;
		}
		var_750_bool = var_40_string == (int)6544;
		if(var_750_bool != 0) {
			var_751_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5946);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5947, (int)6546, (int)6545);
			@@@var_0_object:AddReply((int)5949, (int)6562, (int)6548);
			return 0;
		}
		var_760_bool = var_40_string == (int)6562;
		if(var_760_bool != 0) {
			var_761_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5961);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5962, (int)6546, (int)6563);
			@@@var_0_object:AddReply((int)5963, (int)6554, (int)6564);
			return 0;
		}
		var_770_bool = var_40_string == (int)6546;
		if(var_770_bool != 0) {
			var_771_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5948);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5950, (int)6554, (int)6549);
			@@@var_0_object:AddReply((int)5951, (int)6551, (int)6550);
			return 0;
		}
		var_780_bool = var_40_string == (int)6551;
		if(var_780_bool != 0) {
			var_781_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5952);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5969, (int)6554, (int)6573);
			@@@var_0_object:AddReply((int)5953, (int)-1, (int)6552);
			@@@var_0_object:AddReply((int)5954, (int)-1, (int)6553);
			return 0;
		}
		var_793_bool = var_40_string == (int)6554;
		if(var_793_bool != 0) {
			var_794_string = "";
			func_693(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5955);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5956, (int)-1, (int)6555);
			@@@var_0_object:AddReply((int)5964, (int)-1, (int)6567);
			return 0;
		}
		var_3_string = true;
		var_802_bool = 0;
		func_7232(var_802_bool);
		if(var_802_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x2c6";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_7143();
		var_45_bool = var_41_bool == (int)8567;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_7302();
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_object;
			func_7326();
		}
		var_55_bool = var_41_bool == (int)8569;
		if(var_55_bool != 0) {
			var_56_object = Obj(); var_57_object = Obj();
			var_56_object = var_1_object;
			var_57_object = var_0_object;
			func_7302();
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_object;
			func_7326();
		}
		var_61_bool = var_41_bool == (int)8566;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_7302();
		}
		var_65_bool = var_41_bool == (int)8574;
		if(var_65_bool != 0) {
			var_66_object = Obj(); var_67_object = Obj();
			var_66_object = var_1_object;
			var_67_object = var_0_object;
			func_7302();
			var_68_object = Obj(); var_69_object = Obj();
			var_68_object = var_1_object;
			var_69_object = var_0_object;
			func_7326();
		}
		var_71_bool = var_41_bool == (int)8576;
		if(var_71_bool != 0) {
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_7326();
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_object;
			func_7302();
		}
		var_77_bool = var_41_bool == (int)8572;
		if(var_77_bool != 0) {
			var_78_object = Obj(); var_79_object = Obj();
			var_78_object = var_1_object;
			var_79_object = var_0_object;
			func_7326();
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_object;
			func_7302();
		}
		var_83_bool = var_41_bool == (int)8297;
		if(var_83_bool != 0) {
			var_84_object = Obj(); var_85_object = Obj();
			var_84_object = var_1_object;
			var_85_object = var_0_object;
			func_7308();
			var_88_object = Obj(); var_89_object = Obj();
			var_88_object = var_1_object;
			var_89_object = var_0_object;
			func_7279(var_89_object);
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_7290();
		}
		var_102_bool = var_41_bool == (int)8298;
		if(var_102_bool != 0) {
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_7308();
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_7279(var_106_object);
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_7290();
		}
		var_110_bool = var_41_bool == (int)8553;
		if(var_110_bool != 0) {
			var_111_object = Obj(); var_112_object = Obj();
			var_111_object = var_1_object;
			var_112_object = var_0_object;
			func_7308();
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_7279(var_114_object);
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_object;
			func_7290();
		}
		var_118_bool = var_41_bool == (int)8549;
		if(var_118_bool != 0) {
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_object;
			func_7314();
		}
		var_124_bool = var_41_bool == (int)8552;
		if(var_124_bool != 0) {
			var_125_object = Obj(); var_126_object = Obj();
			var_125_object = var_1_object;
			var_126_object = var_0_object;
			func_7314();
		}
		var_128_bool = var_41_bool == (int)8560;
		if(var_128_bool != 0) {
			var_129_object = Obj(); var_130_object = Obj();
			var_129_object = var_1_object;
			var_130_object = var_0_object;
			func_7320();
		}
		var_134_bool = var_40_string == (int)7641;
		if(var_134_bool != 0) {
			var_135_bool = 0;
			var_135_bool = 0;
			var_136_bool = 0; var_137_object = Obj();
			var_137_object = var_1_object;
			func_7924(var_137_object);
			if(var_136_bool != 0) {
				var_144_bool = 0; var_145_object = Obj();
				var_145_object = var_1_object;
				func_7912(var_145_object);
				var_150_bool = var_144_bool == 0; //@nz
				if(var_150_bool != 0) {
					var_135_bool = 1;
				}
			}
			if(var_135_bool != 0) {
				var_151_string = "";
				func_2166(var_41_bool, "Neutral");
				@@@var_0_object:SetMessage((int)6935);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)7509, (int)8291, (int)8290);
				@@@var_0_object:AddReply((int)7518, (int)8300, (int)8299);
				return 0;
			}
			var_173_string = "";
			func_2166(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6929);
			@@@var_0_object:ClearReplies();
			var_175_bool = 0;
			var_175_bool = 0;
			var_176_bool = 0; var_177_object = Obj();
			var_177_object = var_1_object;
			func_7936(var_177_object);
			if(var_176_bool != 0) {
				var_182_bool = 0; var_183_object = Obj();
				var_183_object = var_1_object;
				func_7912(var_183_object);
				if(var_182_bool != 0) {
					var_175_bool = 1;
				}
			}
			if(var_175_bool != 0) {
				@@@var_0_object:AddReply((int)6930, (int)7637, (int)7636);
			}
			var_187_bool = 0; var_188_object = Obj();
			var_188_object = var_1_object;
			func_7948(var_188_object);
			if(var_187_bool != 0) {
				@@@var_0_object:AddReply((int)6938, (int)7645, (int)7644);
			}
			var_196_bool = 0; var_197_object = Obj();
			var_197_object = var_1_object;
			func_7960(var_197_object);
			if(var_196_bool != 0) {
				@@@var_0_object:AddReply((int)6940, (int)7647, (int)7646);
			}
			var_205_bool = 0; var_206_object = Obj();
			var_206_object = var_1_object;
			func_7972(var_206_object);
			if(var_205_bool != 0) {
				@@@var_0_object:AddReply((int)7776, (int)8568, (int)8577);
			}
			@@@var_0_object:AddReply((int)7746, (int)-1, (int)8547);
			return 0;
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=0";
		EMIT "Call 0x876";
		EMIT "Pop(1)";
		EMIT "Push((int) 9500)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
		EMIT "Pop(0)";
		EMIT "Push((int) 9501)";
		EMIT "Push((int) 10445)";
		EMIT "Push((int) 10444)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Push((int) 9514)";
		EMIT "Push((int) 10458)";
		EMIT "Push((int) 10457)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Return(); Pop(0)";
		}
		var_218_bool = var_40_string == (int)10458;
		if(var_218_bool != 0) {
			var_219_string = "";
			func_2166(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9515);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9516, (int)-1, (int)10459);
			return 0;
		}
		var_225_bool = var_40_string == (int)10445;
		if(var_225_bool != 0) {
			var_226_string = "";
			func_2166(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9502);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9503, (int)10447, (int)10446);
			@@@var_0_object:AddReply((int)9510, (int)-1, (int)10453);
			@@@var_0_object:AddReply((int)9511, (int)10455, (int)10454);
			return 0;
		}
		var_238_bool = var_40_string == (int)10455;
		if(var_238_bool != 0) {
			var_239_string = "";
			func_2166(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9512);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9513, (int)-1, (int)10456);
			return 0;
		}
		var_245_bool = var_40_string == (int)10447;
		if(var_245_bool != 0) {
			var_246_string = "";
			func_2166(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9504);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9505, (int)10449, (int)10448);
			@@@var_0_object:AddReply((int)9509, (int)-1, (int)10452);
			return 0;
		}
		var_255_bool = var_40_string == (int)10449;
		if(var_255_bool != 0) {
			var_256_string = "";
			func_2166(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9506);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9507, (int)-1, (int)10450);
			@@@var_0_object:AddReply((int)9508, (int)-1, (int)10451);
			return 0;
		}
		var_265_bool = var_40_string == (int)7647;
		if(var_265_bool != 0) {
			var_266_string = "";
			func_2166(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6941);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7755, (int)8557, (int)8556);
			return 0;
		}
		var_272_bool = var_40_string == (int)8557;
		if(var_272_bool != 0) {
			var_273_string = "";
			func_2166(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7756);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7757, (int)8559, (int)8558);
			return 0;
		}
		var_279_bool = var_40_string == (int)8559;
		if(var_279_bool != 0) {
			var_280_string = "";
			func_2166(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7758);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7759, (int)-1, (int)8560);
			return 0;
		}
		var_286_bool = var_40_string == (int)7645;
		if(var_286_bool != 0) {
			var_287_string = "";
			func_2166(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6939);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7748, (int)-1, (int)8549);
			@@@var_0_object:AddReply((int)7749, (int)8551, (int)8550);
			return 0;
		}
		var_296_bool = var_40_string == (int)8551;
		if(var_296_bool != 0) {
			var_297_string = "";
			func_2166(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7750);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7751, (int)-1, (int)8552);
			return 0;
		}
		var_303_bool = var_40_string == (int)7637;
		if(var_303_bool != 0) {
			var_304_string = "";
			func_2166(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6931);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6932, (int)7639, (int)7638);
			@@@var_0_object:AddReply((int)7752, (int)-1, (int)8553);
			return 0;
		}
		var_313_bool = var_40_string == (int)7639;
		if(var_313_bool != 0) {
			var_314_string = "";
			func_2166(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6933);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7753, (int)8555, (int)8554);
			return 0;
		}
		var_320_bool = var_40_string == (int)8555;
		if(var_320_bool != 0) {
			var_321_string = "";
			func_2166(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7754);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6934, (int)8296, (int)7640);
			return 0;
		}
		var_327_bool = var_40_string == (int)8296;
		if(var_327_bool != 0) {
			var_328_string = "";
			func_2166(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7515);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7516, (int)-1, (int)8297);
			@@@var_0_object:AddReply((int)7517, (int)-1, (int)8298);
			return 0;
		}
		var_337_bool = var_40_string == (int)8300;
		if(var_337_bool != 0) {
			var_338_string = "";
			func_2166(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7519);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7520, (int)8295, (int)8301);
			return 0;
		}
		var_344_bool = var_40_string == (int)8291;
		if(var_344_bool != 0) {
			var_345_string = "";
			func_2166(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7510);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7511, (int)8293, (int)8292);
			return 0;
		}
		var_351_bool = var_40_string == (int)8293;
		if(var_351_bool != 0) {
			var_352_string = "";
			func_2166(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7512);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7513, (int)8295, (int)8294);
			return 0;
		}
		var_358_bool = var_40_string == (int)8295;
		if(var_358_bool != 0) {
			var_359_string = "";
			func_2166(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7514);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7760, (int)8562, (int)8561);
			return 0;
		}
		var_365_bool = var_40_string == (int)8562;
		if(var_365_bool != 0) {
			var_366_string = "";
			func_2166(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7761);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7762, (int)8565, (int)8563);
			@@@var_0_object:AddReply((int)7763, (int)8568, (int)8564);
			return 0;
		}
		var_375_bool = var_40_string == (int)8568;
		if(var_375_bool != 0) {
			var_376_string = "";
			func_2166(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7767);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7769, (int)8571, (int)8570);
			@@@var_0_object:AddReply((int)7772, (int)8575, (int)8573);
			var_384_bool = 0; var_385_object = Obj();
			var_385_object = var_1_object;
			func_7924(var_385_object);
			if(var_384_bool != 0) {
				@@@var_0_object:AddReply((int)7771, (int)-1, (int)8572);
			}
			return 0;
		}
		var_390_bool = var_40_string == (int)8575;
		if(var_390_bool != 0) {
			var_391_string = "";
			func_2166(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7774);
			@@@var_0_object:ClearReplies();
			var_393_bool = 0; var_394_object = Obj();
			var_394_object = var_1_object;
			func_7924(var_394_object);
			if(var_393_bool != 0) {
				@@@var_0_object:AddReply((int)7775, (int)-1, (int)8576);
			}
			return 0;
		}
		var_399_bool = var_40_string == (int)8571;
		if(var_399_bool != 0) {
			var_400_string = "";
			func_2166(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7770);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7773, (int)-1, (int)8574);
			return 0;
		}
		var_406_bool = var_40_string == (int)8565;
		if(var_406_bool != 0) {
			var_407_string = "";
			func_2166(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7764);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7766, (int)-1, (int)8567);
			@@@var_0_object:AddReply((int)7768, (int)-1, (int)8569);
			@@@var_0_object:AddReply((int)7765, (int)-1, (int)8566);
			return 0;
		}
		var_3_string = true;
		var_418_bool = 0;
		func_7232(var_418_bool);
		if(var_418_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x887";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_7143();
		var_45_bool = var_41_bool == (int)11379;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_7380();
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_7382();
			var_93_object = Obj(); var_94_object = Obj();
			var_93_object = var_1_object;
			var_94_object = var_0_object;
			func_7364(var_94_object);
		}
		var_120_bool = var_41_bool == (int)11380;
		if(var_120_bool != 0) {
			var_121_object = Obj(); var_122_object = Obj();
			var_121_object = var_1_object;
			var_122_object = var_0_object;
			func_7380();
			var_123_object = Obj(); var_124_object = Obj();
			var_123_object = var_1_object;
			var_124_object = var_0_object;
			func_7382();
			var_125_object = Obj(); var_126_object = Obj();
			var_125_object = var_1_object;
			var_126_object = var_0_object;
			func_7364(var_126_object);
		}
		var_128_bool = var_41_bool == (int)11383;
		if(var_128_bool != 0) {
			var_129_object = Obj(); var_130_object = Obj();
			var_129_object = var_1_object;
			var_130_object = var_0_object;
			func_7382();
			var_131_object = Obj(); var_132_object = Obj();
			var_131_object = var_1_object;
			var_132_object = var_0_object;
			func_7364(var_132_object);
			var_133_object = Obj(); var_134_object = Obj();
			var_133_object = var_1_object;
			var_134_object = var_0_object;
			func_7380();
		}
		var_136_bool = var_40_string == (int)11258;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_3098(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10212);
			@@@var_0_object:ClearReplies();
			var_153_bool = 0;
			var_153_bool = 0;
			var_154_bool = 0; var_155_object = Obj();
			var_155_object = var_1_object;
			func_7996(var_155_object);
			if(var_154_bool != 0) {
				var_162_bool = 0; var_163_object = Obj();
				var_163_object = var_1_object;
				func_8008(var_163_object);
				if(var_162_bool != 0) {
					var_153_bool = 1;
				}
			}
			if(var_153_bool != 0) {
				@@@var_0_object:AddReply((int)10213, (int)11260, (int)11259);
			}
			@@@var_0_object:AddReply((int)10302, (int)11359, (int)11358);
			@@@var_0_object:AddReply((int)10334, (int)11395, (int)11394);
			return 0;
		}
		var_174_bool = var_40_string == (int)11395;
		if(var_174_bool != 0) {
			var_175_string = "";
			func_3098(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10335);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10336, (int)11399, (int)11396);
			@@@var_0_object:AddReply((int)10337, (int)11398, (int)11397);
			return 0;
		}
		var_184_bool = var_40_string == (int)11398;
		if(var_184_bool != 0) {
			var_185_string = "";
			func_3098(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10338);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10341, (int)11402, (int)11401);
			return 0;
		}
		var_191_bool = var_40_string == (int)11399;
		if(var_191_bool != 0) {
			var_192_string = "";
			func_3098(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10339);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10340, (int)11402, (int)11400);
			return 0;
		}
		var_198_bool = var_40_string == (int)11402;
		if(var_198_bool != 0) {
			var_199_string = "";
			func_3098(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10342);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10343, (int)-1, (int)11404);
			@@@var_0_object:AddReply((int)10344, (int)11406, (int)11405);
			return 0;
		}
		var_208_bool = var_40_string == (int)11406;
		if(var_208_bool != 0) {
			var_209_string = "";
			func_3098(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10345);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10346, (int)-1, (int)11407);
			return 0;
		}
		var_215_bool = var_40_string == (int)11359;
		if(var_215_bool != 0) {
			var_216_string = "";
			func_3098(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10303);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10304, (int)11039, (int)11360);
			return 0;
		}
		var_222_bool = var_40_string == (int)11039;
		if(var_222_bool != 0) {
			var_223_string = "";
			func_3098(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10017);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10018, (int)11041, (int)11040);
			@@@var_0_object:AddReply((int)10028, (int)-1, (int)11050);
			return 0;
		}
		var_232_bool = var_40_string == (int)11041;
		if(var_232_bool != 0) {
			var_233_string = "";
			func_3098(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10019);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10020, (int)11043, (int)11042);
			@@@var_0_object:AddReply((int)10027, (int)-1, (int)11049);
			return 0;
		}
		var_242_bool = var_40_string == (int)11043;
		if(var_242_bool != 0) {
			var_243_string = "";
			func_3098(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10021);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10022, (int)11045, (int)11044);
			@@@var_0_object:AddReply((int)10026, (int)-1, (int)11048);
			return 0;
		}
		var_252_bool = var_40_string == (int)11045;
		if(var_252_bool != 0) {
			var_253_string = "";
			func_3098(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10023);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10024, (int)-1, (int)11046);
			@@@var_0_object:AddReply((int)10025, (int)-1, (int)11047);
			return 0;
		}
		var_262_bool = var_40_string == (int)11260;
		if(var_262_bool != 0) {
			var_263_string = "";
			func_3098(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10214);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10305, (int)11364, (int)11361);
			@@@var_0_object:AddReply((int)10306, (int)11363, (int)11362);
			return 0;
		}
		var_272_bool = var_40_string == (int)11363;
		if(var_272_bool != 0) {
			var_273_string = "";
			func_3098(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10307);
			@@@var_0_object:ClearReplies();
			return 0;
		}
		var_276_bool = var_40_string == (int)11364;
		if(var_276_bool != 0) {
			var_277_string = "";
			func_3098(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10308);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10309, (int)11370, (int)11365);
			@@@var_0_object:AddReply((int)10311, (int)11366, (int)11367);
			return 0;
		}
		var_286_bool = var_40_string == (int)11366;
		if(var_286_bool != 0) {
			var_287_string = "";
			func_3098(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10310);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10312, (int)11371, (int)11369);
			return 0;
		}
		var_293_bool = var_40_string == (int)11370;
		if(var_293_bool != 0) {
			var_294_string = "";
			func_3098(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10313);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10315, (int)11371, (int)11372);
			@@@var_0_object:AddReply((int)10316, (int)-1, (int)11373);
			return 0;
		}
		var_303_bool = var_40_string == (int)11371;
		if(var_303_bool != 0) {
			var_304_string = "";
			func_3098(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10314);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10317, (int)11376, (int)11375);
			@@@var_0_object:AddReply((int)10323, (int)11376, (int)11381);
			return 0;
		}
		var_313_bool = var_40_string == (int)11376;
		if(var_313_bool != 0) {
			var_314_string = "";
			func_3098(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10318);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10319, (int)11378, (int)11377);
			@@@var_0_object:AddReply((int)10324, (int)-1, (int)11383);
			return 0;
		}
		var_323_bool = var_40_string == (int)11378;
		if(var_323_bool != 0) {
			var_324_string = "";
			func_3098(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10320);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10321, (int)-1, (int)11379);
			@@@var_0_object:AddReply((int)10322, (int)-1, (int)11380);
			return 0;
		}
		var_3_string = true;
		var_332_bool = 0;
		func_7232(var_332_bool);
		if(var_332_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc2b";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_7143();
		var_45_bool = var_41_bool == (int)12610;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_7463();
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_object;
			func_7469();
			var_125_object = Obj(); var_126_object = Obj();
			var_125_object = var_1_object;
			var_126_object = var_0_object;
			func_7332(var_126_object);
		}
		var_152_bool = var_41_bool == (int)12613;
		if(var_152_bool != 0) {
			var_153_object = Obj(); var_154_object = Obj();
			var_153_object = var_1_object;
			var_154_object = var_0_object;
			func_7463();
			var_155_object = Obj(); var_156_object = Obj();
			var_155_object = var_1_object;
			var_156_object = var_0_object;
			func_7469();
			var_157_object = Obj(); var_158_object = Obj();
			var_157_object = var_1_object;
			var_158_object = var_0_object;
			func_7332(var_158_object);
		}
		var_160_bool = var_41_bool == (int)12243;
		if(var_160_bool != 0) {
			var_161_object = Obj(); var_162_object = Obj();
			var_161_object = var_1_object;
			var_162_object = var_0_object;
			func_7405();
			var_165_object = Obj(); var_166_object = Obj();
			var_165_object = var_1_object;
			var_166_object = var_0_object;
			func_7411();
			var_191_object = Obj(); var_192_object = Obj();
			var_191_object = var_1_object;
			var_192_object = var_0_object;
			func_7443();
			var_203_object = Obj(); var_204_object = Obj();
			var_203_object = var_1_object;
			var_204_object = var_0_object;
			func_7364(var_204_object);
		}
		var_211_bool = var_41_bool == (int)12244;
		if(var_211_bool != 0) {
			var_212_object = Obj(); var_213_object = Obj();
			var_212_object = var_1_object;
			var_213_object = var_0_object;
			func_7405();
			var_214_object = Obj(); var_215_object = Obj();
			var_214_object = var_1_object;
			var_215_object = var_0_object;
			func_7411();
			var_216_object = Obj(); var_217_object = Obj();
			var_216_object = var_1_object;
			var_217_object = var_0_object;
			func_7443();
			var_218_object = Obj(); var_219_object = Obj();
			var_218_object = var_1_object;
			var_219_object = var_0_object;
			func_7364(var_219_object);
		}
		var_221_bool = var_41_bool == (int)13077;
		if(var_221_bool != 0) {
			var_222_object = Obj(); var_223_object = Obj();
			var_222_object = var_1_object;
			var_223_object = var_0_object;
			func_7522();
		}
		var_227_bool = var_40_string == (int)12592;
		if(var_227_bool != 0) {
			var_228_bool = 0;
			var_228_bool = 0;
			var_229_bool = 0; var_230_object = Obj();
			var_230_object = var_1_object;
			func_8037(var_230_object);
			if(var_229_bool != 0) {
				var_237_bool = 0; var_238_object = Obj();
				var_238_object = var_1_object;
				func_8013(var_238_object);
				var_243_bool = var_237_bool == 0; //@nz
				if(var_243_bool != 0) {
					var_228_bool = 1;
				}
			}
			if(var_228_bool != 0) {
				var_244_string = "";
				func_3802(var_41_bool, "Neutral");
				@@@var_0_object:SetMessage((int)11395);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)11396, (int)12594, (int)12593);
				return 0;
			}
			var_263_string = "";
			func_3802(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10814);
			@@@var_0_object:ClearReplies();
			var_265_bool = 0;
			var_265_bool = 0;
			var_266_bool = 0; var_267_object = Obj();
			var_267_object = var_1_object;
			func_8025(var_267_object);
			if(var_266_bool != 0) {
				var_272_bool = 0; var_273_object = Obj();
				var_273_object = var_1_object;
				func_8013(var_273_object);
				if(var_272_bool != 0) {
					var_265_bool = 1;
				}
			}
			if(var_265_bool != 0) {
				@@@var_0_object:AddReply((int)10815, (int)11956, (int)11955);
			}
			var_277_bool = 0; var_278_object = Obj();
			var_278_object = var_1_object;
			func_7902(var_277_bool, var_278_object);
			if(var_277_bool != 0) {
				@@@var_0_object:AddReply((int)11403, (int)12601, (int)12600);
			}
			var_284_bool = 0;
			var_284_bool = 0;
			var_285_bool = 0; var_286_object = Obj();
			var_286_object = var_1_object;
			func_8061(var_286_object);
			if(var_285_bool != 0) {
				var_291_bool = 0; var_292_object = Obj();
				var_292_object = var_1_object;
				func_8049(var_292_object);
				if(var_291_bool != 0) {
					var_284_bool = 1;
				}
			}
			if(var_284_bool != 0) {
				@@@var_0_object:AddReply((int)11862, (int)13076, (int)13075);
			}
			@@@var_0_object:AddReply((int)11408, (int)-1, (int)12605);
			return 0;
		}
		var_304_bool = var_40_string == (int)13076;
		if(var_304_bool != 0) {
			var_305_string = "";
			func_3802(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11863);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11864, (int)-1, (int)13077);
			return 0;
		}
		var_311_bool = var_40_string == (int)12601;
		if(var_311_bool != 0) {
			var_312_string = "";
			func_3802(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11404);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11405, (int)12603, (int)12602);
			return 0;
		}
		var_318_bool = var_40_string == (int)12603;
		if(var_318_bool != 0) {
			var_319_string = "";
			func_3802(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11406);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11407, (int)-1, (int)12604);
			return 0;
		}
		var_325_bool = var_40_string == (int)11956;
		if(var_325_bool != 0) {
			var_326_string = "";
			func_3802(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10816);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10817, (int)11958, (int)11957);
			@@@var_0_object:AddReply((int)11019, (int)12191, (int)12190);
			return 0;
		}
		var_335_bool = var_40_string == (int)12191;
		if(var_335_bool != 0) {
			var_336_string = "";
			func_3802(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11020);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11021, (int)12193, (int)12192);
			return 0;
		}
		var_342_bool = var_40_string == (int)12193;
		if(var_342_bool != 0) {
			var_343_string = "";
			func_3802(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11022);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11023, (int)12202, (int)12194);
			@@@var_0_object:AddReply((int)11024, (int)12196, (int)12195);
			return 0;
		}
		var_352_bool = var_40_string == (int)12196;
		if(var_352_bool != 0) {
			var_353_string = "";
			func_3802(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11025);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11026, (int)12198, (int)12197);
			@@@var_0_object:AddReply((int)11028, (int)12198, (int)12199);
			return 0;
		}
		var_362_bool = var_40_string == (int)12198;
		if(var_362_bool != 0) {
			var_363_string = "";
			func_3802(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11027);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11029, (int)12202, (int)12201);
			return 0;
		}
		var_369_bool = var_40_string == (int)12202;
		if(var_369_bool != 0) {
			var_370_string = "";
			func_3802(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11030);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11031, (int)12205, (int)12203);
			@@@var_0_object:AddReply((int)11032, (int)12205, (int)12204);
			return 0;
		}
		var_379_bool = var_40_string == (int)12205;
		if(var_379_bool != 0) {
			var_380_string = "";
			func_3802(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11033);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11034, (int)12208, (int)12207);
			@@@var_0_object:AddReply((int)11037, (int)12211, (int)12210);
			return 0;
		}
		var_389_bool = var_40_string == (int)12211;
		if(var_389_bool != 0) {
			var_390_string = "";
			func_3802(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11038);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11039, (int)12213, (int)12212);
			@@@var_0_object:AddReply((int)11054, (int)12222, (int)12231);
			return 0;
		}
		var_399_bool = var_40_string == (int)12213;
		if(var_399_bool != 0) {
			var_400_string = "";
			func_3802(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11040);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11041, (int)12215, (int)12214);
			return 0;
		}
		var_406_bool = var_40_string == (int)12215;
		if(var_406_bool != 0) {
			var_407_string = "";
			func_3802(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11042);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11043, (int)12222, (int)12216);
			return 0;
		}
		var_413_bool = var_40_string == (int)12208;
		if(var_413_bool != 0) {
			var_414_string = "";
			func_3802(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11035);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11036, (int)12217, (int)12209);
			return 0;
		}
		var_420_bool = var_40_string == (int)12217;
		if(var_420_bool != 0) {
			var_421_string = "";
			func_3802(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11044);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11045, (int)12222, (int)12218);
			@@@var_0_object:AddReply((int)11046, (int)12220, (int)12219);
			return 0;
		}
		var_430_bool = var_40_string == (int)12220;
		if(var_430_bool != 0) {
			var_431_string = "";
			func_3802(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11047);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11048, (int)12222, (int)12221);
			return 0;
		}
		var_437_bool = var_40_string == (int)11958;
		if(var_437_bool != 0) {
			var_438_string = "";
			func_3802(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10818);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10819, (int)12222, (int)11959);
			@@@var_0_object:AddReply((int)10830, (int)11971, (int)11970);
			return 0;
		}
		var_447_bool = var_40_string == (int)11971;
		if(var_447_bool != 0) {
			var_448_string = "";
			func_3802(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10831);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10832, (int)12222, (int)11972);
			@@@var_0_object:AddReply((int)10833, (int)12227, (int)11974);
			return 0;
		}
		var_457_bool = var_40_string == (int)12227;
		if(var_457_bool != 0) {
			var_458_string = "";
			func_3802(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11052);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11053, (int)12198, (int)12228);
			return 0;
		}
		var_464_bool = var_40_string == (int)12222;
		if(var_464_bool != 0) {
			var_465_string = "";
			func_3802(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11049);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11050, (int)12233, (int)12223);
			@@@var_0_object:AddReply((int)11051, (int)12233, (int)12224);
			@@@var_0_object:AddReply((int)11059, (int)12240, (int)12239);
			return 0;
		}
		var_477_bool = var_40_string == (int)12240;
		if(var_477_bool != 0) {
			var_478_string = "";
			func_3802(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11060);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11061, (int)12233, (int)12241);
			return 0;
		}
		var_484_bool = var_40_string == (int)12233;
		if(var_484_bool != 0) {
			var_485_string = "";
			func_3802(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11055);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11056, (int)12237, (int)12235);
			@@@var_0_object:AddReply((int)11057, (int)12237, (int)12236);
			return 0;
		}
		var_494_bool = var_40_string == (int)12237;
		if(var_494_bool != 0) {
			var_495_string = "";
			func_3802(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11058);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11062, (int)-1, (int)12243);
			@@@var_0_object:AddReply((int)11063, (int)-1, (int)12244);
			return 0;
		}
		var_504_bool = var_40_string == (int)12594;
		if(var_504_bool != 0) {
			var_505_string = "";
			func_3802(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11397);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11398, (int)12596, (int)12595);
			return 0;
		}
		var_511_bool = var_40_string == (int)12596;
		if(var_511_bool != 0) {
			var_512_string = "";
			func_3802(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11399);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11400, (int)12598, (int)12597);
			return 0;
		}
		var_518_bool = var_40_string == (int)12598;
		if(var_518_bool != 0) {
			var_519_string = "";
			func_3802(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11401);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11409, (int)12607, (int)12606);
			return 0;
		}
		var_525_bool = var_40_string == (int)12607;
		if(var_525_bool != 0) {
			var_526_string = "";
			func_3802(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11410);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11411, (int)12609, (int)12608);
			return 0;
		}
		var_532_bool = var_40_string == (int)12609;
		if(var_532_bool != 0) {
			var_533_string = "";
			func_3802(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11412);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11413, (int)-1, (int)12610);
			@@@var_0_object:AddReply((int)11414, (int)12612, (int)12611);
			return 0;
		}
		var_542_bool = var_40_string == (int)12612;
		if(var_542_bool != 0) {
			var_543_string = "";
			func_3802(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11415);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11416, (int)-1, (int)12613);
			return 0;
		}
		var_3_string = true;
		var_548_bool = 0;
		func_7232(var_548_bool);
		if(var_548_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xeeb";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_7143();
		var_45_bool = var_41_bool == (int)12969;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_7640();
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_object;
			func_7771();
		}
		var_121_bool = var_41_bool == (int)12970;
		if(var_121_bool != 0) {
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_7640();
			var_124_object = Obj(); var_125_object = Obj();
			var_124_object = var_1_object;
			var_125_object = var_0_object;
			func_7771();
		}
		var_127_bool = var_41_bool == (int)13745;
		if(var_127_bool != 0) {
			var_128_object = Obj(); var_129_object = Obj();
			var_128_object = var_1_object;
			var_129_object = var_0_object;
			func_7626();
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_7613(var_133_object);
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_object;
			func_7290();
		}
		var_146_bool = var_41_bool == (int)13748;
		if(var_146_bool != 0) {
			var_147_object = Obj(); var_148_object = Obj();
			var_147_object = var_1_object;
			var_148_object = var_0_object;
			func_7632();
			var_151_object = Obj(); var_152_object = Obj();
			var_151_object = var_1_object;
			var_152_object = var_0_object;
			func_7624();
			var_153_object = Obj(); var_154_object = Obj();
			var_153_object = var_1_object;
			var_154_object = var_0_object;
			func_7638();
		}
		var_156_bool = var_40_string == (int)12947;
		if(var_156_bool != 0) {
			var_157_bool = 0;
			var_157_bool = 0;
			var_158_bool = 0;
			var_158_bool = 0;
			var_159_bool = 0; var_160_object = Obj();
			var_160_object = var_1_object;
			func_8193(var_160_object);
			if(var_159_bool != 0) {
				var_165_bool = 0; var_166_object = Obj();
				var_166_object = var_1_object;
				func_8133(var_166_object);
				var_171_bool = var_165_bool == 0; //@nz
				if(var_171_bool != 0) {
					var_158_bool = 1;
				}
			}
			if(var_158_bool != 0) {
				var_172_bool = 0; var_173_object = Obj();
				var_173_object = var_1_object;
				func_8145(var_173_object);
				var_178_bool = var_172_bool == 0; //@nz
				if(var_178_bool != 0) {
					var_157_bool = 1;
				}
			}
			if(var_157_bool != 0) {
				var_179_string = "";
				func_4825(var_41_bool, "Neutral");
				@@@var_0_object:SetMessage((int)11741);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)11743, (int)12951, (int)12949);
				@@@var_0_object:AddReply((int)11742, (int)12950, (int)12948);
				var_201_bool = 0; var_202_object = Obj();
				var_202_object = var_1_object;
				func_8073(var_202_object);
				var_207_bool = var_201_bool == 0; //@nz
				if(var_207_bool != 0) {
					@@@var_0_object:AddReply((int)12586, (int)13766, (int)13753);
				}
				return 0;
			}
			var_211_string = "";
			func_4825(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12573);
			@@@var_0_object:ClearReplies();
			var_213_bool = 0;
			var_213_bool = 0;
			var_214_bool = 0; var_215_object = Obj();
			var_215_object = var_1_object;
			func_8157(var_215_object);
			if(var_214_bool != 0) {
				var_220_bool = 0; var_221_object = Obj();
				var_221_object = var_1_object;
				func_8169(var_221_object);
				if(var_220_bool != 0) {
					var_213_bool = 1;
				}
			}
			if(var_213_bool != 0) {
				@@@var_0_object:AddReply((int)12574, (int)13744, (int)13743);
			}
			var_229_bool = 0;
			var_229_bool = 0;
			var_230_bool = 0; var_231_object = Obj();
			var_231_object = var_1_object;
			func_8133(var_231_object);
			if(var_230_bool != 0) {
				var_232_bool = 0; var_233_object = Obj();
				var_233_object = var_1_object;
				func_8181(var_233_object);
				if(var_232_bool != 0) {
					var_229_bool = 1;
				}
			}
			if(var_229_bool != 0) {
				@@@var_0_object:AddReply((int)12577, (int)13747, (int)13746);
			}
			@@@var_0_object:AddReply((int)12580, (int)-1, (int)13749);
			return 0;
		}
		var_245_bool = var_40_string == (int)13747;
		if(var_245_bool != 0) {
			var_246_string = "";
			func_4825(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12578);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12598, (int)13770, (int)13769);
			@@@var_0_object:AddReply((int)12603, (int)13772, (int)13775);
			return 0;
		}
		var_255_bool = var_40_string == (int)13770;
		if(var_255_bool != 0) {
			var_256_string = "";
			func_4825(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12599);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12600, (int)13772, (int)13771);
			@@@var_0_object:AddReply((int)12602, (int)13772, (int)13773);
			return 0;
		}
		var_265_bool = var_40_string == (int)13772;
		if(var_265_bool != 0) {
			var_266_string = "";
			func_4825(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12601);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12579, (int)-1, (int)13748);
			return 0;
		}
		var_272_bool = var_40_string == (int)13744;
		if(var_272_bool != 0) {
			var_273_string = "";
			func_4825(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12575);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12576, (int)-1, (int)13745);
			return 0;
		}
		var_279_bool = var_40_string == (int)13766;
		if(var_279_bool != 0) {
			var_280_string = "";
			func_4825(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12596);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12597, (int)12960, (int)13767);
			return 0;
		}
		var_286_bool = var_40_string == (int)12950;
		if(var_286_bool != 0) {
			var_287_string = "";
			func_4825(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11744);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11746, (int)12954, (int)12952);
			return 0;
		}
		var_293_bool = var_40_string == (int)12954;
		if(var_293_bool != 0) {
			var_294_string = "";
			func_4825(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11748);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11749, (int)12951, (int)12955);
			return 0;
		}
		var_300_bool = var_40_string == (int)12951;
		if(var_300_bool != 0) {
			var_301_string = "";
			func_4825(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11745);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11747, (int)12957, (int)12953);
			return 0;
		}
		var_307_bool = var_40_string == (int)12957;
		if(var_307_bool != 0) {
			var_308_string = "";
			func_4825(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11750);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11751, (int)12960, (int)12958);
			@@@var_0_object:AddReply((int)11752, (int)12960, (int)12959);
			return 0;
		}
		var_317_bool = var_40_string == (int)12960;
		if(var_317_bool != 0) {
			var_318_string = "";
			func_4825(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11753);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11754, (int)12964, (int)12962);
			return 0;
		}
		var_324_bool = var_40_string == (int)12964;
		if(var_324_bool != 0) {
			var_325_string = "";
			func_4825(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11756);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11761, (int)-1, (int)12969);
			@@@var_0_object:AddReply((int)11762, (int)-1, (int)12970);
			return 0;
		}
		var_3_string = true;
		var_333_bool = 0;
		func_7232(var_333_bool);
		if(var_333_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x12ea";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_7143();
		var_45_bool = var_41_bool == (int)13670;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_7579();
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_object;
			func_7539();
			var_121_object = Obj(); var_122_object = Obj();
			var_121_object = var_1_object;
			var_122_object = var_0_object;
			func_7591();
		}
		var_126_bool = var_41_bool == (int)13671;
		if(var_126_bool != 0) {
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_object;
			var_128_object = var_0_object;
			func_7579();
			var_129_object = Obj(); var_130_object = Obj();
			var_129_object = var_1_object;
			var_130_object = var_0_object;
			func_7591();
		}
		var_132_bool = var_41_bool == (int)13692;
		if(var_132_bool != 0) {
			var_133_object = Obj(); var_134_object = Obj();
			var_133_object = var_1_object;
			var_134_object = var_0_object;
			func_7539();
		}
		var_136_bool = var_41_bool == (int)13689;
		if(var_136_bool != 0) {
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_object;
			func_7528(var_138_object);
			var_146_object = Obj(); var_147_object = Obj();
			var_146_object = var_1_object;
			var_147_object = var_0_object;
			func_7290();
			var_150_object = Obj(); var_151_object = Obj();
			var_150_object = var_1_object;
			var_151_object = var_0_object;
			func_7585();
			var_154_object = Obj(); var_155_object = Obj();
			var_154_object = var_1_object;
			var_155_object = var_0_object;
			func_7646();
		}
		var_179_bool = var_41_bool == (int)13698;
		if(var_179_bool != 0) {
			var_180_object = Obj(); var_181_object = Obj();
			var_180_object = var_1_object;
			var_181_object = var_0_object;
			func_7597();
			var_184_object = Obj(); var_185_object = Obj();
			var_184_object = var_1_object;
			var_185_object = var_0_object;
			func_7603();
		}
		var_199_bool = var_40_string == (int)13330;
		if(var_199_bool != 0) {
			var_200_bool = 0; var_201_object = Obj();
			var_201_object = var_1_object;
			func_8097(var_201_object);
			if(var_200_bool != 0) {
				var_208_string = "";
				func_5451(var_41_bool, "Neutral");
				@@@var_0_object:SetMessage((int)12104);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)12105, (int)13334, (int)13331);
				@@@var_0_object:AddReply((int)12106, (int)13333, (int)13332);
				return 0;
			}
			var_230_string = "";
			func_5451(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12515);
			@@@var_0_object:ClearReplies();
			var_232_bool = 0; var_233_object = Obj();
			var_233_object = var_1_object;
			func_8085(var_233_object);
			if(var_232_bool != 0) {
				@@@var_0_object:AddReply((int)12520, (int)13691, (int)13690);
			}
			var_241_bool = 0;
			var_241_bool = 0;
			var_242_bool = 0; var_243_object = Obj();
			var_243_object = var_1_object;
			func_8109(var_243_object);
			if(var_242_bool != 0) {
				var_248_bool = 0; var_249_object = Obj();
				var_249_object = var_1_object;
				func_8205(var_249_object);
				if(var_248_bool != 0) {
					var_241_bool = 1;
				}
			}
			if(var_241_bool != 0) {
				@@@var_0_object:AddReply((int)12516, (int)13688, (int)13686);
			}
			var_257_bool = 0;
			var_257_bool = 0;
			var_258_bool = 0;
			var_258_bool = 0;
			var_259_bool = 0; var_260_object = Obj();
			var_260_object = var_1_object;
			func_8121(var_260_object);
			if(var_259_bool != 0) {
				var_265_bool = 0; var_266_object = Obj();
				var_266_object = var_1_object;
				func_8217(var_266_object);
				if(var_265_bool != 0) {
					var_258_bool = 1;
				}
			}
			if(var_258_bool != 0) {
				var_271_bool = 0; var_272_object = Obj();
				var_272_object = var_1_object;
				func_8205(var_272_object);
				var_273_bool = var_271_bool == 0; //@nz
				if(var_273_bool != 0) {
					var_257_bool = 1;
				}
			}
			if(var_257_bool != 0) {
				@@@var_0_object:AddReply((int)12526, (int)13697, (int)13696);
			}
			@@@var_0_object:AddReply((int)12517, (int)-1, (int)13687);
			return 0;
		}
		var_281_bool = var_40_string == (int)13697;
		if(var_281_bool != 0) {
			var_282_string = "";
			func_5451(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12527);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12528, (int)-1, (int)13698);
			return 0;
		}
		var_288_bool = var_40_string == (int)13688;
		if(var_288_bool != 0) {
			var_289_string = "";
			func_5451(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12518);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12519, (int)-1, (int)13689);
			return 0;
		}
		var_295_bool = var_40_string == (int)13691;
		if(var_295_bool != 0) {
			var_296_string = "";
			func_5451(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12521);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12522, (int)-1, (int)13692);
			return 0;
		}
		var_302_bool = var_40_string == (int)13333;
		if(var_302_bool != 0) {
			var_303_string = "";
			func_5451(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12107);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12493, (int)13334, (int)13662);
			return 0;
		}
		var_309_bool = var_40_string == (int)13334;
		if(var_309_bool != 0) {
			var_310_string = "";
			func_5451(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12108);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12109, (int)13336, (int)13335);
			return 0;
		}
		var_316_bool = var_40_string == (int)13336;
		if(var_316_bool != 0) {
			var_317_string = "";
			func_5451(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12110);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12111, (int)13338, (int)13337);
			return 0;
		}
		var_323_bool = var_40_string == (int)13338;
		if(var_323_bool != 0) {
			var_324_string = "";
			func_5451(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12112);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12494, (int)13665, (int)13664);
			return 0;
		}
		var_330_bool = var_40_string == (int)13665;
		if(var_330_bool != 0) {
			var_331_string = "";
			func_5451(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12495);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12496, (int)13667, (int)13666);
			return 0;
		}
		var_337_bool = var_40_string == (int)13667;
		if(var_337_bool != 0) {
			var_338_string = "";
			func_5451(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12497);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12498, (int)13669, (int)13668);
			return 0;
		}
		var_344_bool = var_40_string == (int)13669;
		if(var_344_bool != 0) {
			var_345_string = "";
			func_5451(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12499);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12500, (int)-1, (int)13670);
			@@@var_0_object:AddReply((int)12501, (int)-1, (int)13671);
			return 0;
		}
		var_3_string = true;
		var_353_bool = 0;
		func_7232(var_353_bool);
		if(var_353_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x155c";
	
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int)
{
	if((int)1 != 0) {
		func_7143();
		var_45_bool = var_41_int == (int)14856;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_7685();
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_object;
			func_7819();
		}
		var_78_bool = var_41_int == (int)14857;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_7685();
			var_81_object = Obj(); var_82_object = Obj();
			var_81_object = var_1_object;
			var_82_object = var_0_object;
			func_7819();
		}
		var_84_bool = var_41_int == (int)14858;
		if(var_84_bool != 0) {
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_7685();
			var_87_object = Obj(); var_88_object = Obj();
			var_87_object = var_1_object;
			var_88_object = var_0_object;
			func_7819();
		}
		var_90_bool = var_41_int == (int)14839;
		if(var_90_bool != 0) {
			var_91_object = Obj(); var_92_object = Obj();
			var_91_object = var_1_object;
			var_92_object = var_0_object;
			func_7691();
		}
		var_96_bool = var_41_int == (int)14860;
		if(var_96_bool != 0) {
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_7697();
		}
		var_100_bool = var_41_int == (int)14862;
		if(var_100_bool != 0) {
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_7699();
		}
		var_106_bool = var_41_int == (int)14894;
		if(var_106_bool != 0) {
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_7705();
		}
		var_112_bool = var_41_int == (int)14873;
		if(var_112_bool != 0) {
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_7717();
		}
		var_118_bool = var_41_int == (int)14867;
		if(var_118_bool != 0) {
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_object;
			func_7711();
		}
		var_124_bool = var_40_int == (int)13574;
		if(var_124_bool != 0) {
			var_125_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)12410);
			@@@var_0_object:ClearReplies();
			var_141_bool = 0;
			var_141_bool = 0;
			var_142_bool = 0;
			var_142_bool = 0;
			var_143_bool = 0; var_144_object = Obj();
			var_144_object = var_1_object;
			func_8229(var_144_object);
			if(var_143_bool != 0) {
				var_151_bool = 0; var_152_object = Obj();
				var_152_object = var_1_object;
				func_8253(var_152_object);
				if(var_151_bool != 0) {
					var_142_bool = 1;
				}
			}
			if(var_142_bool != 0) {
				var_157_bool = 0; var_158_object = Obj();
				var_158_object = var_1_object;
				func_8241(var_158_object);
				var_163_bool = var_157_bool == 0; //@nz
				if(var_163_bool != 0) {
					var_141_bool = 1;
				}
			}
			if(var_141_bool != 0) {
				@@@var_0_object:AddReply((int)12412, (int)13577, (int)13576);
			}
			var_167_bool = 0;
			var_167_bool = 0;
			var_168_bool = 0; var_169_object = Obj();
			var_169_object = var_1_object;
			func_8241(var_169_object);
			if(var_168_bool != 0) {
				var_170_bool = 0; var_171_object = Obj();
				var_171_object = var_1_object;
				func_8265(var_171_object);
				if(var_170_bool != 0) {
					var_167_bool = 1;
				}
			}
			if(var_167_bool != 0) {
				@@@var_0_object:AddReply((int)13588, (int)14840, (int)14839);
			}
			var_179_bool = 0;
			var_179_bool = 0;
			var_180_bool = 0;
			var_180_bool = 0;
			var_181_bool = 0; var_182_object = Obj();
			var_182_object = var_1_object;
			func_8277(var_182_object);
			if(var_181_bool != 0) {
				var_187_bool = 0; var_188_object = Obj();
				var_188_object = var_1_object;
				func_8241(var_188_object);
				if(var_187_bool != 0) {
					var_180_bool = 1;
				}
			}
			if(var_180_bool != 0) {
				var_189_bool = 0; var_190_object = Obj();
				var_190_object = var_1_object;
				func_8289(var_190_object);
				if(var_189_bool != 0) {
					var_179_bool = 1;
				}
			}
			if(var_179_bool != 0) {
				@@@var_0_object:AddReply((int)13607, (int)14868, (int)14862);
			}
			var_198_bool = 0;
			var_198_bool = 0;
			var_199_bool = 0; var_200_object = Obj();
			var_200_object = var_1_object;
			func_8277(var_200_object);
			if(var_199_bool != 0) {
				var_201_bool = 0; var_202_object = Obj();
				var_202_object = var_1_object;
				func_8313(var_202_object);
				if(var_201_bool != 0) {
					var_198_bool = 1;
				}
			}
			if(var_198_bool != 0) {
				@@@var_0_object:AddReply((int)13618, (int)14874, (int)14873);
			}
			var_210_bool = 0;
			var_210_bool = 0;
			var_211_bool = 0;
			var_211_bool = 0;
			var_212_bool = 0; var_213_object = Obj();
			var_213_object = var_1_object;
			func_8241(var_213_object);
			var_214_bool = var_212_bool == 0; //@nz
			if(var_214_bool != 0) {
				var_215_bool = 0; var_216_object = Obj();
				var_216_object = var_1_object;
				func_8229(var_216_object);
				if(var_215_bool != 0) {
					var_211_bool = 1;
				}
			}
			if(var_211_bool != 0) {
				var_217_bool = 0; var_218_object = Obj();
				var_218_object = var_1_object;
				func_8301(var_218_object);
				if(var_217_bool != 0) {
					var_210_bool = 1;
				}
			}
			if(var_210_bool != 0) {
				@@@var_0_object:AddReply((int)13612, (int)14863, (int)14867);
			}
			@@@var_0_object:AddReply((int)12411, (int)-1, (int)13575);
			return 0;
		}
		var_230_bool = var_40_int == (int)14863;
		if(var_230_bool != 0) {
			var_231_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13608);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13609, (int)14865, (int)14864);
			return 0;
		}
		var_237_bool = var_40_int == (int)14865;
		if(var_237_bool != 0) {
			var_238_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13610);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13611, (int)14869, (int)14866);
			return 0;
		}
		var_244_bool = var_40_int == (int)14869;
		if(var_244_bool != 0) {
			var_245_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13614);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13615, (int)14871, (int)14870);
			return 0;
		}
		var_251_bool = var_40_int == (int)14871;
		if(var_251_bool != 0) {
			var_252_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13616);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13617, (int)-1, (int)14872);
			return 0;
		}
		var_258_bool = var_40_int == (int)14874;
		if(var_258_bool != 0) {
			var_259_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13619);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13620, (int)14876, (int)14875);
			return 0;
		}
		var_265_bool = var_40_int == (int)14876;
		if(var_265_bool != 0) {
			var_266_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13621);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13623, (int)14879, (int)14878);
			@@@var_0_object:AddReply((int)13622, (int)-1, (int)14877);
			return 0;
		}
		var_275_bool = var_40_int == (int)14879;
		if(var_275_bool != 0) {
			var_276_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13624);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13626, (int)14882, (int)14881);
			@@@var_0_object:AddReply((int)13625, (int)-1, (int)14880);
			return 0;
		}
		var_285_bool = var_40_int == (int)14882;
		if(var_285_bool != 0) {
			var_286_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13627);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13628, (int)-1, (int)14883);
			return 0;
		}
		var_292_bool = var_40_int == (int)14868;
		if(var_292_bool != 0) {
			var_293_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13613);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13629, (int)14885, (int)14884);
			return 0;
		}
		var_299_bool = var_40_int == (int)14885;
		if(var_299_bool != 0) {
			var_300_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13630);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13631, (int)14889, (int)14886);
			@@@var_0_object:AddReply((int)13632, (int)14888, (int)14887);
			return 0;
		}
		var_309_bool = var_40_int == (int)14888;
		if(var_309_bool != 0) {
			var_310_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13633);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13636, (int)14889, (int)14891);
			return 0;
		}
		var_316_bool = var_40_int == (int)14889;
		if(var_316_bool != 0) {
			var_317_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13634);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13635, (int)14893, (int)14890);
			return 0;
		}
		var_323_bool = var_40_int == (int)14893;
		if(var_323_bool != 0) {
			var_324_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13637);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13638, (int)-1, (int)14894);
			return 0;
		}
		var_330_bool = var_40_int == (int)14840;
		if(var_330_bool != 0) {
			var_331_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13589);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13591, (int)14843, (int)14842);
			@@@var_0_object:AddReply((int)13590, (int)14845, (int)14841);
			return 0;
		}
		var_340_bool = var_40_int == (int)14845;
		if(var_340_bool != 0) {
			var_341_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13594);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13595, (int)14847, (int)14846);
			return 0;
		}
		var_347_bool = var_40_int == (int)14847;
		if(var_347_bool != 0) {
			var_348_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13596);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13597, (int)14843, (int)14848);
			return 0;
		}
		var_354_bool = var_40_int == (int)14843;
		if(var_354_bool != 0) {
			var_355_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13592);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13598, (int)14824, (int)14850);
			@@@var_0_object:AddReply((int)13593, (int)13583, (int)14844);
			return 0;
		}
		var_364_bool = var_40_int == (int)13583;
		if(var_364_bool != 0) {
			var_365_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)12419);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12423, (int)13588, (int)13587);
			return 0;
		}
		var_371_bool = var_40_int == (int)13588;
		if(var_371_bool != 0) {
			var_372_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)12424);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12425, (int)13594, (int)13590);
			@@@var_0_object:AddReply((int)12426, (int)13592, (int)13591);
			return 0;
		}
		var_381_bool = var_40_int == (int)13592;
		if(var_381_bool != 0) {
			var_382_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)12427);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12430, (int)13594, (int)13596);
			return 0;
		}
		var_388_bool = var_40_int == (int)13594;
		if(var_388_bool != 0) {
			var_389_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)12428);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12429, (int)13599, (int)13595);
			return 0;
		}
		var_395_bool = var_40_int == (int)13599;
		if(var_395_bool != 0) {
			var_396_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)12432);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12433, (int)13601, (int)13600);
			return 0;
		}
		var_402_bool = var_40_int == (int)13601;
		if(var_402_bool != 0) {
			var_403_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)12434);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13581, (int)14826, (int)14830);
			@@@var_0_object:AddReply((int)12435, (int)14833, (int)13602);
			return 0;
		}
		var_412_bool = var_40_int == (int)14824;
		if(var_412_bool != 0) {
			var_413_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13575);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13576, (int)14826, (int)14825);
			return 0;
		}
		var_419_bool = var_40_int == (int)14826;
		if(var_419_bool != 0) {
			var_420_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13577);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13578, (int)14828, (int)14827);
			return 0;
		}
		var_426_bool = var_40_int == (int)14828;
		if(var_426_bool != 0) {
			var_427_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13579);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13580, (int)14833, (int)14829);
			return 0;
		}
		var_433_bool = var_40_int == (int)14833;
		if(var_433_bool != 0) {
			var_434_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13582);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13583, (int)14835, (int)14834);
			return 0;
		}
		var_440_bool = var_40_int == (int)14835;
		if(var_440_bool != 0) {
			var_441_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13584);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13585, (int)14837, (int)14836);
			return 0;
		}
		var_447_bool = var_40_int == (int)14837;
		if(var_447_bool != 0) {
			var_448_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13586);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13587, (int)-1, (int)14838);
			@@@var_0_object:AddReply((int)13606, (int)-1, (int)14860);
			return 0;
		}
		var_457_bool = var_40_int == (int)13577;
		if(var_457_bool != 0) {
			var_458_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)12413);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12420, (int)13585, (int)13584);
			@@@var_0_object:AddReply((int)12414, (int)13579, (int)13578);
			return 0;
		}
		var_467_bool = var_40_int == (int)13579;
		if(var_467_bool != 0) {
			var_468_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)12415);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12416, (int)13581, (int)13580);
			return 0;
		}
		var_474_bool = var_40_int == (int)13581;
		if(var_474_bool != 0) {
			var_475_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)12417);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12418, (int)14853, (int)13582);
			return 0;
		}
		var_481_bool = var_40_int == (int)13585;
		if(var_481_bool != 0) {
			var_482_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)12421);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13574, (int)14851, (int)14823);
			@@@var_0_object:AddReply((int)13602, (int)14853, (int)14854);
			return 0;
		}
		var_491_bool = var_40_int == (int)14851;
		if(var_491_bool != 0) {
			var_492_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13599);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13600, (int)14853, (int)14852);
			return 0;
		}
		var_498_bool = var_40_int == (int)14853;
		if(var_498_bool != 0) {
			var_499_string = "";
			func_6087(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)13601);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13603, (int)-1, (int)14856);
			@@@var_0_object:AddReply((int)13604, (int)-1, (int)14857);
			@@@var_0_object:AddReply((int)13605, (int)-1, (int)14858);
			return 0;
		}
		var_3_string = true;
		var_510_bool = 0;
		func_7232(var_510_bool);
		if(var_510_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x17d8";
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool)
{
	func_8865();
	var_41_bool = 0;
	func_7060(var_41_bool);
	var_44_bool = var_41_bool == 0; //@nz
	if(var_44_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
Label_19:
	var_45_string = "";
	func_7125("Neutral");
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


func_8193(var_159_bool)
{
	var_161_int = 0; var_162_string = "";
	func_7160(var_161_int, "ood5MladVlad3");
	var_164_bool = var_161_int == (int)0;
	if(var_164_bool != 0) {
		var_159_bool = 1;
		return 0;
	}
	var_159_bool = 0;
	return 0;
}


func_8705()
{
	var_68_object = Obj(); var_69_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_69_object, (int)78, (int)2, (int)12160);
	var_74_bool = 0; var_75_object = Obj(); var_76_int = 0;
	var_69_object = var_75_object;
	func_8593(var_74_bool, var_75_object, (int)26);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7685()
{
	SetVariable("ood8MladVlad1", (int)1);
	return 0;
}


func_4615(var_0_object, var_696_int, var_697_object)
{
	var_699_object = Obj(); var_700_bool = 0; var_701_int = 0; var_702_bool = 0; var_703_object = Obj(); var_704_bool = 0; var_705_int = 0; var_706_bool = 0;
	var_0_object = var_697_object;
	var_707_bool = 0; var_708_object = Obj();
	var_697_object = var_708_object;
	func_7065(var_707_bool, var_708_object);
	var_709_bool = var_707_bool == 0; //@nz
	if(var_709_bool != 0) {
		var_696_int = -2;
		return 8;
	}
	CreateDialog(var_703_object);
	var_710_int = 0;
	func_7228(var_710_int);
	@@var_703_object:SetNPCName(var_710_int);
	var_711_string = "";
	func_7230(var_711_string);
	@@var_703_object:SetPhoto(var_711_string);
	var_712_int = 0;
	func_8672(var_712_int);
	@@var_703_object:SetPlayerName(var_712_int);
	IsOverrideActive(var_704_bool);
	var_713_bool = var_704_bool;
	if(var_713_bool != 0) {
		var_696_int = -2;
		return 8;
	}
	DoDialog(var_703_object);
	var_714_object = Obj(); var_715_object = Obj();
	var_697_object = var_714_object;
	var_703_object = var_715_object;
	TaskCall(13);
	func_4678(var_716_object, var_717_object, var_718_string, var_719_bool, var_714_object, var_715_object);
	TaskReturn();
	@@var_703_object:IsDialogEnd(var_706_bool);
	
Label_4660:
	var_806_bool = var_706_bool == 0; //@nz
	if(var_806_bool != 0) {
		sync();
		@@var_703_object:IsDialogEnd(var_706_bool);
		goto Label_4660;
	}
	var_697_object = Obj();
	func_7121();
	StopDialog(var_703_object);
	@@var_703_object:GetReturnValue((int)-1);
	var_705_int = var_696_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7176(var_117_object, var_118_string)
{
	var_119_object = Obj(); var_120_object = Obj(); var_121_object = Obj(); var_122_object = Obj();
	GetMainOutdoorScene(var_121_object);
	var_124_int = var_118_string + ".xml";
	AddBlankActorFromXml(var_122_object, var_121_object, var_118_string, var_124_int);
	var_122_object = var_117_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_7691()
{
	SetVariable("ood8MladVlad2", (int)1);
	return 0;
}


func_8205(var_248_bool)
{
	var_250_int = 0; var_251_string = "";
	func_7160(var_250_int, "d6q02GorbunDeath");
	var_253_bool = var_250_int != (int)0;
	if(var_253_bool != 0) {
		var_248_bool = 1;
		return 0;
	}
	var_248_bool = 0;
	return 0;
}


func_7697()
{
	return 0;
}


func_8721()
{
	var_182_object = Obj(); var_183_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_183_object, (int)137, (int)1, (int)15323);
	var_188_bool = 0; var_189_object = Obj(); var_190_int = 0;
	var_183_object = var_189_object;
	func_8593(var_188_bool, var_189_object, (int)20);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7699()
{
	SetVariable("ood8MladVlad3", (int)1);
	return 0;
}


func_7187(var_115_bool, var_116_string, var_117_string)
{
	var_118_object = Obj(); var_119_object = Obj();
	FindActor(var_119_object, var_116_string);
	var_120_bool = var_119_object == 0; //@ne
	if(var_120_bool != 0) {
		var_115_bool = 0;
		return 2;
	}
	Trigger(var_119_object, var_117_string);
	var_115_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3608(var_0_object, var_596_int, var_597_object)
{
	var_599_object = Obj(); var_600_bool = 0; var_601_int = 0; var_602_bool = 0; var_603_object = Obj(); var_604_bool = 0; var_605_int = 0; var_606_bool = 0;
	var_0_object = var_597_object;
	var_607_bool = 0; var_608_object = Obj();
	var_597_object = var_608_object;
	func_7065(var_607_bool, var_608_object);
	var_609_bool = var_607_bool == 0; //@nz
	if(var_609_bool != 0) {
		var_596_int = -2;
		return 8;
	}
	CreateDialog(var_603_object);
	var_610_int = 0;
	func_7228(var_610_int);
	@@var_603_object:SetNPCName(var_610_int);
	var_611_string = "";
	func_7230(var_611_string);
	@@var_603_object:SetPhoto(var_611_string);
	var_612_int = 0;
	func_8672(var_612_int);
	@@var_603_object:SetPlayerName(var_612_int);
	IsOverrideActive(var_604_bool);
	var_613_bool = var_604_bool;
	if(var_613_bool != 0) {
		var_596_int = -2;
		return 8;
	}
	DoDialog(var_603_object);
	var_614_object = Obj(); var_615_object = Obj();
	var_597_object = var_614_object;
	var_603_object = var_615_object;
	TaskCall(11);
	func_3671(var_616_object, var_617_object, var_618_string, var_619_bool, var_614_object, var_615_object);
	TaskReturn();
	@@var_603_object:IsDialogEnd(var_606_bool);
	
Label_3653:
	var_692_bool = var_606_bool == 0; //@nz
	if(var_692_bool != 0) {
		sync();
		@@var_603_object:IsDialogEnd(var_606_bool);
		goto Label_3653;
	}
	var_597_object = Obj();
	func_7121();
	StopDialog(var_603_object);
	@@var_603_object:GetReturnValue((int)-1);
	var_605_int = var_596_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7705()
{
	SetVariable("d8q01MladVladIsVictim", (int)1);
	return 0;
}


func_8217(var_265_bool)
{
	var_267_int = 0; var_268_string = "";
	func_7160(var_267_int, "d6q02Trigger");
	var_270_bool = var_267_int != (int)0;
	if(var_270_bool != 0) {
		var_265_bool = 1;
		return 0;
	}
	var_265_bool = 0;
	return 0;
}


func_3098(var_2_object, var_137_string)
{
	var_138_bool = 0;
	func_7232(var_138_bool);
	var_139_bool = var_138_bool == 0; //@nz
	if(var_139_bool != 0) {
		return 0;
	}
	var_140_bool = var_137_string == var_2_object;
	if(var_140_bool != 0) {
		return 0;
	}
	var_141_string = "";
	var_137_string = var_141_string;
	func_7125(var_141_string);
	var_2_object = var_137_string;
	return 0;
}


func_7199(var_65_float)
{
	var_66_float = 0; var_67_float = 0;
	GetGameTime(var_67_float);
	var_67_float = var_65_float;
	return 2;
}


func_7711()
{
	SetVariable("ood8MladVlad4", (int)1);
	return 0;
}


func_8737()
{
	var_83_object = Obj(); var_84_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_84_object, (int)21, (int)2, (int)3361);
	var_89_bool = 0; var_90_object = Obj(); var_91_int = 0;
	var_84_object = var_90_object;
	func_8593(var_89_bool, var_90_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7204(var_157_int)
{
	var_158_float = 0; var_159_float = 0;
	GetGameTime(var_159_float);
	var_161_int = 0;
	var_161_int = var_159_float / (int)24;
	var_157_int = (int)1 + var_161_int;
	return 2;
}


func_8229(var_143_bool)
{
	var_145_int = 0; var_146_string = "";
	func_7160(var_145_int, "d8q01");
	var_150_bool = var_145_int == (int)1;
	if(var_150_bool != 0) {
		var_143_bool = 1;
		return 0;
	}
	var_143_bool = 0;
	return 0;
}


func_7717()
{
	SetVariable("ood8MladVlad5", (int)1);
	return 0;
}


func_7723()
{
	SetVariable("KnowMladVlad", (int)1);
	return 0;
}


func_7213(var_155_bool, var_156_int)
{
	var_157_int = 0;
	func_7204(var_157_int);
	var_155_bool = var_157_int == var_156_int;
	return 0;
}


func_7729()
{
	SetVariable("ood1MladVlad5", (int)1);
	return 0;
}


func_8241(var_157_bool)
{
	var_159_int = 0; var_160_string = "";
	func_7160(var_159_int, "d8q01MladVladIsBad");
	var_162_bool = var_159_int == (int)1;
	if(var_162_bool != 0) {
		var_157_bool = 1;
		return 0;
	}
	var_157_bool = 0;
	return 0;
}


func_8753()
{
	var_108_object = Obj(); var_109_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_109_object, (int)92, (int)2, (int)12174);
	var_114_bool = 0; var_115_object = Obj(); var_116_int = 0;
	var_109_object = var_115_object;
	func_8593(var_114_bool, var_115_object, (int)21);
	return 2;
}
EMIT "Stack[-1] = 0";


func_49(var_0_object, var_44_int, var_45_object)
{
	var_47_object = Obj(); var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_object = Obj(); var_52_bool = 0; var_53_int = 0; var_54_bool = 0;
	var_0_object = var_45_object;
	var_55_bool = 0; var_56_object = Obj();
	var_45_object = var_56_object;
	func_7065(var_55_bool, var_56_object);
	var_95_bool = var_55_bool == 0; //@nz
	if(var_95_bool != 0) {
		var_44_int = -2;
		return 8;
	}
	CreateDialog(var_51_object);
	var_96_int = 0;
	func_7228(var_96_int);
	@@var_51_object:SetNPCName(var_96_int);
	var_97_string = "";
	func_7230(var_97_string);
	@@var_51_object:SetPhoto(var_97_string);
	var_98_int = 0;
	func_8672(var_98_int);
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
	var_152_bool = var_54_bool == 0; //@nz
	if(var_152_bool != 0) {
		sync();
		@@var_51_object:IsDialogEnd(var_54_bool);
		goto Label_94;
	}
	var_45_object = Obj();
	func_7121();
	StopDialog(var_51_object);
	@@var_51_object:GetReturnValue((int)-1);
	var_53_int = var_44_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7219(var_1042_bool)
{
	var_1043_bool = 0; var_1044_bool = 0;
	var_1045_string = "";
	func_7125("No");
	lshWaitForAnimEnd(var_1044_bool);
	var_1044_bool = var_1042_bool;
	return 2;
}


func_7735()
{
	SetVariable("ood1MladVlad6", (int)1);
	return 0;
}


func_7228(var_96_int)
{
	var_96_int = 2872;
	return 0;
}


func_7741()
{
	SetVariable("ood1MladVlad7", (int)1);
	return 0;
}


func_7230(var_97_string)
{
	var_97_string = "ui/NPC_MladVlad.png";
	return 0;
}


func_8253(var_151_bool)
{
	var_153_int = 0; var_154_string = "";
	func_7160(var_153_int, "ood8MladVlad1");
	var_156_bool = var_153_int == (int)0;
	if(var_156_bool != 0) {
		var_151_bool = 1;
		return 0;
	}
	var_151_bool = 0;
	return 0;
}


func_7232(var_43_bool)
{
	var_43_bool = 1;
	return 0;
}


func_8769()
{
	var_81_object = Obj(); var_82_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_82_object, (int)148, (int)2, (int)15354);
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0;
	var_82_object = var_88_object;
	func_8593(var_87_bool, var_88_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7234()
{
	SetVariable("ood1MladVlad3", (int)1);
	return 0;
}


func_7747()
{
	SetVariable("ood1MladVlad8", (int)1);
	return 0;
}


func_4678(var_0_object, var_1_object, var_2_object, var_3_object, var_714_object, var_715_object)
{
	var_0_object = var_715_object;
	var_1_object = var_714_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_721_bool = 0;
		var_721_bool = 0;
		var_722_bool = 0;
		var_722_bool = 0;
		var_723_bool = 0; var_724_object = Obj();
		var_724_object = var_1_object;
		func_8193(var_724_object);
		if(var_723_bool != 0) {
			var_729_bool = 0; var_730_object = Obj();
			var_730_object = var_1_object;
			func_8133(var_730_object);
			var_735_bool = var_729_bool == 0; //@nz
			if(var_735_bool != 0) {
				var_722_bool = 1;
			}
		}
		if(var_722_bool != 0) {
			var_736_bool = 0; var_737_object = Obj();
			var_737_object = var_1_object;
			func_8145(var_737_object);
			var_742_bool = var_736_bool == 0; //@nz
			if(var_742_bool != 0) {
				var_721_bool = 1;
			}
		}
		if(var_721_bool != 0) {
			var_743_string = "";
			func_4825(var_715_object, "Neutral");
			@@@var_0_object:SetMessage((int)11741);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11743, (int)12951, (int)12949);
			@@@var_0_object:AddReply((int)11742, (int)12950, (int)12948);
			var_755_bool = 0; var_756_object = Obj();
			var_756_object = var_1_object;
			func_8073(var_756_object);
			var_761_bool = var_755_bool == 0; //@nz
			if(var_761_bool != 0) {
				@@@var_0_object:AddReply((int)12586, (int)13766, (int)13753);
			}
		} else {
				var_773_string = "";
				func_4825(var_715_object, "Neutral");
				@@@var_0_object:SetMessage((int)12573);
				@@@var_0_object:ClearReplies();
				var_775_bool = 0;
				var_775_bool = 0;
				var_776_bool = 0; var_777_object = Obj();
				var_777_object = var_1_object;
				func_8157(var_777_object);
				if(var_776_bool != 0) {
					var_782_bool = 0; var_783_object = Obj();
					var_783_object = var_1_object;
					func_8169(var_783_object);
					if(var_782_bool != 0) {
						var_775_bool = 1;
					}
				}
				if(var_775_bool != 0) {
					@@@var_0_object:AddReply((int)12574, (int)13744, (int)13743);
				}
				var_791_bool = 0;
				var_791_bool = 0;
				var_792_bool = 0; var_793_object = Obj();
				var_793_object = var_1_object;
				func_8133(var_793_object);
				if(var_792_bool != 0) {
					var_794_bool = 0; var_795_object = Obj();
					var_795_object = var_1_object;
					func_8181(var_795_object);
					if(var_794_bool != 0) {
						var_791_bool = 1;
					}
				}
				if(var_791_bool != 0) {
					@@@var_0_object:AddReply((int)12577, (int)13747, (int)13746);
				}
				@@@var_0_object:AddReply((int)12580, (int)-1, (int)13749);
				goto Label_4795;
		}
	}
Label_4795:
	var_765_bool = 0;
	func_7232(var_765_bool);
	if(var_765_bool != 0) {

	Label_4799:
		lshWaitForAnimEnd();
		var_766_object = var_3_object;
		if(var_766_object != 0) {
		} else {
			var_767_string = "";
			var_767_string = var_2_object;
			func_7125(var_767_string);
			goto Label_4799;
	}
		PlayAnimation("all", "idle");

	Label_4814:
		WaitForAnimEnd();
		var_770_object = var_3_object;
		if(var_770_object != 0) {
			goto Label_4824;
		}
		PlayAnimation("all", "idle");
		goto Label_4814;

	}
	goto Label_4824;
	
Label_4824:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x124a";


func_7240()
{
	SetVariable("KnowUklad", (int)1);
	return 0;
}


func_7753()
{
	SetVariable("ood1MladVlad9", (int)1);
	return 0;
}


func_8265(var_170_bool)
{
	var_172_int = 0; var_173_string = "";
	func_7160(var_172_int, "ood8MladVlad2");
	var_175_bool = var_172_int == (int)0;
	if(var_175_bool != 0) {
		var_170_bool = 1;
		return 0;
	}
	var_170_bool = 0;
	return 0;
}


func_7246()
{
	SetVariable("ood1MladVlad4", (int)1);
	return 0;
}


func_7759()
{
	SetVariable("ood1MladVlad10", (int)1);
	return 0;
}


func_8785()
{
	var_73_object = Obj(); var_74_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_74_object, (int)102, (int)2, (int)13725);
	var_79_bool = 0; var_80_object = Obj(); var_81_int = 0;
	var_74_object = var_80_object;
	func_8593(var_79_bool, var_80_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7252()
{
	var_52_object = Obj(); var_53_object = Obj();
	SetVariable("d1q03IsKapella", (int)0);
	func_8622(Obj());
	var_56_object = var_53_object;
	var_67_float = 0;
	func_7199(var_67_float);
	@@var_53_object:AddMark("d1q03MladVladGotoOspina", "pt_map_ospina", (int)0, (int)8642, var_67_float);
	func_8689();
	var_95_object = Obj(); var_96_string = "";
	func_7165(var_95_object, "quest_d1_03");
	return 2;
}
EMIT "Stack[-1] = 0";


func_7765()
{
	SetVariable("ood1MladVlad11", (int)1);
	return 0;
}


func_8277(var_181_bool)
{
	var_183_int = 0; var_184_string = "";
	func_7160(var_183_int, "d8q01BringBadBoy");
	var_186_bool = var_183_int == (int)1;
	if(var_186_bool != 0) {
		var_181_bool = 1;
		return 0;
	}
	var_181_bool = 0;
	return 0;
}


func_3671(var_0_object, var_1_object, var_2_object, var_3_object, var_614_object, var_615_object)
{
	var_0_object = var_615_object;
	var_1_object = var_614_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_621_bool = 0;
		var_621_bool = 0;
		var_622_bool = 0; var_623_object = Obj();
		var_623_object = var_1_object;
		func_8037(var_623_object);
		if(var_622_bool != 0) {
			var_628_bool = 0; var_629_object = Obj();
			var_629_object = var_1_object;
			func_8013(var_629_object);
			var_634_bool = var_628_bool == 0; //@nz
			if(var_634_bool != 0) {
				var_621_bool = 1;
			}
		}
		if(var_621_bool != 0) {
			var_635_string = "";
			func_3802(var_615_object, "Neutral");
			@@@var_0_object:SetMessage((int)11395);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11396, (int)12594, (int)12593);
		} else {
				var_652_string = "";
				func_3802(var_615_object, "Neutral");
				@@@var_0_object:SetMessage((int)10814);
				@@@var_0_object:ClearReplies();
				var_654_bool = 0;
				var_654_bool = 0;
				var_655_bool = 0; var_656_object = Obj();
				var_656_object = var_1_object;
				func_8025(var_656_object);
				if(var_655_bool != 0) {
					var_661_bool = 0; var_662_object = Obj();
					var_662_object = var_1_object;
					func_8013(var_662_object);
					if(var_661_bool != 0) {
						var_654_bool = 1;
					}
				}
				if(var_654_bool != 0) {
					@@@var_0_object:AddReply((int)10815, (int)11956, (int)11955);
				}
				var_666_bool = 0; var_667_object = Obj();
				var_667_object = var_1_object;
				func_7902(var_666_bool, var_667_object);
				if(var_666_bool != 0) {
					@@@var_0_object:AddReply((int)11403, (int)12601, (int)12600);
				}
				var_673_bool = 0;
				var_673_bool = 0;
				var_674_bool = 0; var_675_object = Obj();
				var_675_object = var_1_object;
				func_8061(var_675_object);
				if(var_674_bool != 0) {
					var_680_bool = 0; var_681_object = Obj();
					var_681_object = var_1_object;
					func_8049(var_681_object);
					if(var_680_bool != 0) {
						var_673_bool = 1;
					}
				}
				if(var_673_bool != 0) {
					@@@var_0_object:AddReply((int)11862, (int)13076, (int)13075);
				}
				@@@var_0_object:AddReply((int)11408, (int)-1, (int)12605);
				goto Label_3772;
		}
	}
Label_3772:
	var_644_bool = 0;
	func_7232(var_644_bool);
	if(var_644_bool != 0) {

	Label_3776:
		lshWaitForAnimEnd();
		var_645_object = var_3_object;
		if(var_645_object != 0) {
		} else {
			var_646_string = "";
			var_646_string = var_2_object;
			func_7125(var_646_string);
			goto Label_3776;
	}
		PlayAnimation("all", "idle");

	Label_3791:
		WaitForAnimEnd();
		var_649_object = var_3_object;
		if(var_649_object != 0) {
			goto Label_3801;
		}
		PlayAnimation("all", "idle");
		goto Label_3791;

	}
	goto Label_3801;
	
Label_3801:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xe5b";


func_7771()
{
	var_52_object = Obj(); var_53_object = Obj();
	var_54_int = 0; var_55_string = "";
	func_7160(var_54_int, "d5q03");
	var_59_bool = var_54_int == (int)0;
	if(var_59_bool != 0) {
		SetVariable("d5q03", (int)1);
		func_8622(Obj());
		var_62_object = var_53_object;
		var_73_float = 0;
		func_7199(var_73_float);
		@@var_53_object:AddMark("d5q03MladVladSavePrisonersSelf", "pt_map_mladvlad", (int)0, (int)15369, var_73_float);
		var_80_float = 0;
		func_7199(var_80_float);
		@@var_53_object:AddMark("d5q03SavePrisoners", "pt_map_uprava_prison", (int)0, (int)15370, var_80_float);
		func_8769();
		var_106_object = Obj(); var_107_string = "";
		func_7165(var_106_object, "quest_d5_03");
		var_114_bool = 0; var_115_string = ""; var_116_string = "";
		func_7187(var_114_bool, "quest_d5_03", "place_prisoners");
		var_53_object = 0;
	}
	return 2;
}


func_8289(var_189_bool)
{
	var_191_int = 0; var_192_string = "";
	func_7160(var_191_int, "ood8MladVlad3");
	var_194_bool = var_191_int == (int)0;
	if(var_194_bool != 0) {
		var_189_bool = 1;
		return 0;
	}
	var_189_bool = 0;
	return 0;
}


func_8801()
{
	var_169_object = Obj(); var_170_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_170_object, (int)104, (int)2, (int)13727);
	var_175_bool = 0; var_176_object = Obj(); var_177_int = 0;
	var_170_object = var_176_object;
	func_8593(var_175_bool, var_176_object, (int)102);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8301(var_217_bool)
{
	var_219_int = 0; var_220_string = "";
	func_7160(var_219_int, "ood8MladVlad4");
	var_222_bool = var_219_int == (int)0;
	if(var_222_bool != 0) {
		var_217_bool = 1;
		return 0;
	}
	var_217_bool = 0;
	return 0;
}


func_7279(var_88_object)
{
	Trace("money500 is given");
	var_91_object = Obj(); var_92_string = ""; var_93_int = 0;
	var_88_object = var_91_object;
	func_7041(var_91_object, "money", (int)500);
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
		func_7723();
		var_118_object = Obj(); var_119_object = Obj();
		var_118_object = var_1_object;
		var_119_object = var_0_object;
		func_7296();
		var_122_string = "";
		func_180(var_108_object, "Neutral");
		@@@var_0_object:SetMessage((int)416);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)417, (int)487, (int)485);
		@@@var_0_object:AddReply((int)418, (int)9271, (int)486);
		goto Label_150;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_150:
	var_144_bool = 0;
	func_7232(var_144_bool);
	if(var_144_bool != 0) {

	Label_154:
		lshWaitForAnimEnd();
		var_145_object = var_3_object;
		if(var_145_object != 0) {
		} else {
			var_146_string = "";
			var_146_string = var_2_object;
			func_7125(var_146_string);
			goto Label_154;
	}
		PlayAnimation("all", "idle");

	Label_169:
		WaitForAnimEnd();
		var_149_object = var_3_object;
		if(var_149_object != 0) {
			goto Label_179;
		}
		PlayAnimation("all", "idle");
		goto Label_169;
	}
	goto Label_179;
	
Label_179:
	return 0;
	
}


func_8817()
{
	var_98_object = Obj(); var_99_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_99_object, (int)106, (int)2, (int)13729);
	var_104_bool = 0; var_105_object = Obj(); var_106_int = 0;
	var_99_object = var_105_object;
	func_8593(var_104_bool, var_105_object, (int)102);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2166(var_2_object, var_151_string)
{
	var_152_bool = 0;
	func_7232(var_152_bool);
	var_153_bool = var_152_bool == 0; //@nz
	if(var_153_bool != 0) {
		return 0;
	}
	var_154_bool = var_151_string == var_2_object;
	if(var_154_bool != 0) {
		return 0;
	}
	var_155_string = "";
	var_151_string = var_155_string;
	func_7125(var_155_string);
	var_2_object = var_151_string;
	return 0;
}


func_8313(var_201_bool)
{
	var_203_int = 0; var_204_string = "";
	func_7160(var_203_int, "ood8MladVlad5");
	var_206_bool = var_203_int == (int)0;
	if(var_206_bool != 0) {
		var_201_bool = 1;
		return 0;
	}
	var_201_bool = 0;
	return 0;
}


func_7290()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_7296()
{
	SetVariable("KnowPochka", (int)1);
	return 0;
}


func_8833()
{
	var_186_object = Obj(); var_187_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_187_object, (int)110, (int)2, (int)13733);
	var_192_bool = 0; var_193_object = Obj(); var_194_int = 0;
	var_187_object = var_193_object;
	func_8593(var_192_bool, var_193_object, (int)107);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5252(var_0_object, var_810_int, var_811_object)
{
	var_813_object = Obj(); var_814_bool = 0; var_815_int = 0; var_816_bool = 0; var_817_object = Obj(); var_818_bool = 0; var_819_int = 0; var_820_bool = 0;
	var_0_object = var_811_object;
	var_821_bool = 0; var_822_object = Obj();
	var_811_object = var_822_object;
	func_7065(var_821_bool, var_822_object);
	var_823_bool = var_821_bool == 0; //@nz
	if(var_823_bool != 0) {
		var_810_int = -2;
		return 8;
	}
	CreateDialog(var_817_object);
	var_824_int = 0;
	func_7228(var_824_int);
	@@var_817_object:SetNPCName(var_824_int);
	var_825_string = "";
	func_7230(var_825_string);
	@@var_817_object:SetPhoto(var_825_string);
	var_826_int = 0;
	func_8672(var_826_int);
	@@var_817_object:SetPlayerName(var_826_int);
	IsOverrideActive(var_818_bool);
	var_827_bool = var_818_bool;
	if(var_827_bool != 0) {
		var_810_int = -2;
		return 8;
	}
	DoDialog(var_817_object);
	var_828_object = Obj(); var_829_object = Obj();
	var_811_object = var_828_object;
	var_817_object = var_829_object;
	TaskCall(15);
	func_5315(var_830_object, var_831_object, var_832_string, var_833_bool, var_828_object, var_829_object);
	TaskReturn();
	@@var_817_object:IsDialogEnd(var_820_bool);
	
Label_5297:
	var_911_bool = var_820_bool == 0; //@nz
	if(var_911_bool != 0) {
		sync();
		@@var_817_object:IsDialogEnd(var_820_bool);
		goto Label_5297;
	}
	var_811_object = Obj();
	func_7121();
	StopDialog(var_817_object);
	@@var_817_object:GetReturnValue((int)-1);
	var_819_int = var_810_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8325(var_396_bool)
{
	var_398_int = 0; var_399_string = "";
	func_7160(var_398_int, "KnowBigVlad");
	var_401_bool = var_398_int == (int)1;
	if(var_401_bool != 0) {
		var_396_bool = 1;
		return 0;
	}
	var_396_bool = 0;
	return 0;
}


func_7302()
{
	SetVariable("ood2MladVlad1", (int)1);
	return 0;
}


func_7819()
{
	func_8849();
	return 0;
}


func_7308()
{
	SetVariable("ood2MladVlad2", (int)1);
	return 0;
}


func_7824()
{
	SetVariable("KnowTaurusProject", (int)1);
	return 0;
}


func_8337(var_428_bool)
{
	var_430_int = 0; var_431_string = "";
	func_7160(var_430_int, "KnowGrif");
	var_433_bool = var_430_int == (int)1;
	if(var_433_bool != 0) {
		var_428_bool = 1;
		return 0;
	}
	var_428_bool = 0;
	return 0;
}


func_7314()
{
	SetVariable("ood2MladVlad3", (int)1);
	return 0;
}


func_8849()
{
	var_52_object = Obj(); var_53_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_53_object, (int)177, (int)1, (int)15436);
	var_58_bool = 0; var_59_object = Obj(); var_60_int = 0;
	var_53_object = var_59_object;
	func_8593(var_58_bool, var_59_object, (int)175);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7830()
{
	SetVariable("ood1MladVlad1", (int)1);
	return 0;
}


func_7320()
{
	SetVariable("ood2MladVlad4", (int)1);
	return 0;
}


func_7836()
{
	SetVariable("ood1MladVlad2", (int)1);
	return 0;
}


func_8349(var_380_bool)
{
	var_382_int = 0; var_383_string = "";
	func_7160(var_382_int, "KnowKaterina");
	var_385_bool = var_382_int == (int)1;
	if(var_385_bool != 0) {
		var_380_bool = 1;
		return 0;
	}
	var_380_bool = 0;
	return 0;
}


func_7326()
{
	SetVariable("d2q04", (int)1);
	return 0;
}


func_8865()
{
	var_40_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	return 0;
}


func_7842(var_284_bool)
{
	var_286_int = 0; var_287_string = "";
	func_7160(var_286_int, "ood1MladVlad4");
	var_289_bool = var_286_int == (int)0;
	if(var_289_bool != 0) {
		var_284_bool = 1;
		return 0;
	}
	var_284_bool = 0;
	return 0;
}


func_7332(var_126_object)
{
	var_127_object = Obj(); var_128_string = ""; var_129_float = 0;
	func_8622(Obj());
	var_130_object = var_127_object;
	func_8639(var_127_object, "pt_map_anna", (float)2);
	var_150_object = Obj();
	func_8622(var_150_object);
	@@var_126_object:ShowMap(var_150_object);
	return 0;
}


func_8869(var_41_object)
{
	var_42_bool = GlobalVars[1];
	var_43_bool = var_42_bool == 0; //@nz
	if(var_43_bool != 0) {
		var_44_int = 0; var_45_object = Obj();
		var_41_object = var_45_object;
		TaskCall(2);
		func_49(var_46_object, var_44_int, var_45_object);
		TaskReturn();
		var_154_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_155_bool = 0; var_156_int = 0;
	func_7213(var_155_bool, (int)1);
	if(var_155_bool != 0) {
		var_163_int = 0; var_164_object = Obj();
		var_41_object = var_164_object;
		TaskCall(4);
		func_299(var_165_object, var_163_int, var_164_object);
		TaskReturn();
		return 0;
	}
	var_426_bool = 0; var_427_int = 0;
	func_7213(var_426_bool, (int)2);
	if(var_426_bool != 0) {
		var_428_int = 0; var_429_object = Obj();
		var_41_object = var_429_object;
		TaskCall(6);
		func_1946(var_430_object, var_428_int, var_429_object);
		TaskReturn();
		return 0;
	}
	var_533_bool = 0; var_534_int = 0;
	func_7213(var_533_bool, (int)3);
	if(var_533_bool != 0) {
		var_535_int = 0; var_536_object = Obj();
		var_41_object = var_536_object;
		TaskCall(8);
		func_2958(var_537_object, var_535_int, var_536_object);
		TaskReturn();
		return 0;
	}
	var_594_bool = 0; var_595_int = 0;
	func_7213(var_594_bool, (int)4);
	if(var_594_bool != 0) {
		var_596_int = 0; var_597_object = Obj();
		var_41_object = var_597_object;
		TaskCall(10);
		func_3608(var_598_object, var_596_int, var_597_object);
		TaskReturn();
		return 0;
	}
	var_694_bool = 0; var_695_int = 0;
	func_7213(var_694_bool, (int)5);
	if(var_694_bool != 0) {
		var_696_int = 0; var_697_object = Obj();
		var_41_object = var_697_object;
		TaskCall(12);
		func_4615(var_698_object, var_696_int, var_697_object);
		TaskReturn();
		return 0;
	}
	var_808_bool = 0; var_809_int = 0;
	func_7213(var_808_bool, (int)6);
	if(var_808_bool != 0) {
		var_810_int = 0; var_811_object = Obj();
		var_41_object = var_811_object;
		TaskCall(14);
		func_5252(var_812_object, var_810_int, var_811_object);
		TaskReturn();
		return 0;
	}
	var_913_bool = 0; var_914_int = 0;
	func_7213(var_913_bool, (int)8);
	if(var_913_bool != 0) {
		var_915_int = 0; var_916_object = Obj();
		var_41_object = var_916_object;
		TaskCall(16);
		func_5847(var_917_object, var_915_int, var_916_object);
		TaskReturn();
		return 0;
	}
	func_7219((bool)0);
	return 0;
}


func_8361(var_348_bool)
{
	var_350_int = 0; var_351_string = "";
	func_7160(var_350_int, "KnowLara");
	var_353_bool = var_350_int == (int)1;
	if(var_353_bool != 0) {
		var_348_bool = 1;
		return 0;
	}
	var_348_bool = 0;
	return 0;
}


func_7854(var_322_bool)
{
	var_324_int = 0; var_325_string = "";
	func_7160(var_324_int, "d1q01FirstGeorgVisit");
	var_327_bool = var_324_int == (int)1;
	if(var_327_bool != 0) {
		var_322_bool = 1;
		return 0;
	}
	var_322_bool = 0;
	return 0;
}


func_180(var_2_object, var_54_string)
{
	var_55_bool = 0;
	func_7232(var_55_bool);
	var_56_bool = var_55_bool == 0; //@nz
	if(var_56_bool != 0) {
		return 0;
	}
	var_57_bool = var_54_string == var_2_object;
	if(var_57_bool != 0) {
		return 0;
	}
	var_58_string = "";
	var_54_string = var_58_string;
	func_7125(var_58_string);
	var_2_object = var_54_string;
	return 0;
}


func_693(var_2_object, var_255_string)
{
	var_256_bool = 0;
	func_7232(var_256_bool);
	var_257_bool = var_256_bool == 0; //@nz
	if(var_257_bool != 0) {
		return 0;
	}
	var_258_bool = var_255_string == var_2_object;
	if(var_258_bool != 0) {
		return 0;
	}
	var_259_string = "";
	var_255_string = var_259_string;
	func_7125(var_259_string);
	var_2_object = var_255_string;
	return 0;
}


func_8373(var_354_bool)
{
	var_356_int = 0; var_357_string = "";
	func_7160(var_356_int, "ood1MladVlad5");
	var_359_bool = var_356_int == (int)0;
	if(var_359_bool != 0) {
		var_354_bool = 1;
		return 0;
	}
	var_354_bool = 0;
	return 0;
}


func_7348(var_104_object)
{
	var_105_object = Obj(); var_106_string = ""; var_107_float = 0;
	func_8622(Obj());
	var_108_object = var_105_object;
	func_8639(var_105_object, "pt_map_ospina", (float)2);
	var_128_object = Obj();
	func_8622(var_128_object);
	@@var_104_object:ShowMap(var_128_object);
	return 0;
}


func_7866(var_249_bool)
{
	var_251_int = 0; var_252_string = "";
	func_7160(var_251_int, "d1q03");
	var_254_bool = var_251_int == (int)0;
	if(var_254_bool != 0) {
		var_249_bool = 1;
		return 0;
	}
	var_249_bool = 0;
	return 0;
}


func_8385(var_370_bool)
{
	var_372_int = 0; var_373_string = "";
	func_7160(var_372_int, "ood1MladVlad6");
	var_375_bool = var_372_int == (int)0;
	if(var_375_bool != 0) {
		var_370_bool = 1;
		return 0;
	}
	var_370_bool = 0;
	return 0;
}


func_5315(var_0_object, var_1_object, var_2_object, var_3_object, var_828_object, var_829_object)
{
	var_0_object = var_829_object;
	var_1_object = var_828_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_835_bool = 0; var_836_object = Obj();
		var_836_object = var_1_object;
		func_8097(var_836_object);
		if(var_835_bool != 0) {
			var_841_string = "";
			func_5451(var_829_object, "Neutral");
			@@@var_0_object:SetMessage((int)12104);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12105, (int)13334, (int)13331);
			@@@var_0_object:AddReply((int)12106, (int)13333, (int)13332);
		} else {
				var_861_string = "";
				func_5451(var_829_object, "Neutral");
				@@@var_0_object:SetMessage((int)12515);
				@@@var_0_object:ClearReplies();
				var_863_bool = 0; var_864_object = Obj();
				var_864_object = var_1_object;
				func_8085(var_864_object);
				if(var_863_bool != 0) {
					@@@var_0_object:AddReply((int)12520, (int)13691, (int)13690);
				}
				var_872_bool = 0;
				var_872_bool = 0;
				var_873_bool = 0; var_874_object = Obj();
				var_874_object = var_1_object;
				func_8109(var_874_object);
				if(var_873_bool != 0) {
					var_879_bool = 0; var_880_object = Obj();
					var_880_object = var_1_object;
					func_8205(var_880_object);
					if(var_879_bool != 0) {
						var_872_bool = 1;
					}
				}
				if(var_872_bool != 0) {
					@@@var_0_object:AddReply((int)12516, (int)13688, (int)13686);
				}
				var_888_bool = 0;
				var_888_bool = 0;
				var_889_bool = 0;
				var_889_bool = 0;
				var_890_bool = 0; var_891_object = Obj();
				var_891_object = var_1_object;
				func_8121(var_891_object);
				if(var_890_bool != 0) {
					var_896_bool = 0; var_897_object = Obj();
					var_897_object = var_1_object;
					func_8217(var_897_object);
					if(var_896_bool != 0) {
						var_889_bool = 1;
					}
				}
				if(var_889_bool != 0) {
					var_902_bool = 0; var_903_object = Obj();
					var_903_object = var_1_object;
					func_8205(var_903_object);
					var_904_bool = var_902_bool == 0; //@nz
					if(var_904_bool != 0) {
						var_888_bool = 1;
					}
				}
				if(var_888_bool != 0) {
					@@@var_0_object:AddReply((int)12526, (int)13697, (int)13696);
				}
				@@@var_0_object:AddReply((int)12517, (int)-1, (int)13687);
				goto Label_5421;
		}
	}
Label_5421:
	var_853_bool = 0;
	func_7232(var_853_bool);
	if(var_853_bool != 0) {

	Label_5425:
		lshWaitForAnimEnd();
		var_854_object = var_3_object;
		if(var_854_object != 0) {
		} else {
			var_855_string = "";
			var_855_string = var_2_object;
			func_7125(var_855_string);
			goto Label_5425;
	}
		PlayAnimation("all", "idle");

	Label_5440:
		WaitForAnimEnd();
		var_858_object = var_3_object;
		if(var_858_object != 0) {
			goto Label_5450;
		}
		PlayAnimation("all", "idle");
		goto Label_5440;

	}
	goto Label_5450;
	
Label_5450:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x14c7";


func_7364(var_204_object)
{
	var_205_object = Obj(); var_206_string = ""; var_207_float = 0;
	func_8622(Obj());
	var_208_object = var_205_object;
	func_8639(var_205_object, "pt_map_bigvlad", (float)2);
	var_209_object = Obj();
	func_8622(var_209_object);
	@@var_204_object:ShowMap(var_209_object);
	return 0;
}


func_7878(var_290_bool)
{
	var_292_int = 0; var_293_string = "";
	func_7160(var_292_int, "d1q03");
	var_295_bool = var_292_int == (int)1000;
	if(var_295_bool != 0) {
		var_290_bool = 1;
		return 0;
	}
	var_290_bool = 0;
	return 0;
}


func_8397(var_386_bool)
{
	var_388_int = 0; var_389_string = "";
	func_7160(var_388_int, "ood1MladVlad7");
	var_391_bool = var_388_int == (int)0;
	if(var_391_bool != 0) {
		var_386_bool = 1;
		return 0;
	}
	var_386_bool = 0;
	return 0;
}


func_7890(var_296_bool)
{
	var_298_int = 0; var_299_string = "";
	func_7160(var_298_int, "d1q03IsKapella");
	var_301_bool = var_298_int == (int)1;
	if(var_301_bool != 0) {
		var_296_bool = 1;
		return 0;
	}
	var_296_bool = 0;
	return 0;
}


func_7380()
{
	return 0;
}


func_7382()
{
	var_50_object = Obj(); var_51_object = Obj();
	SetVariable("d3q02", (int)2);
	func_8622(Obj());
	var_54_object = var_51_object;
	var_65_float = 0;
	func_7199(var_65_float);
	@@var_51_object:AddMark("d3q02MladVladGotoBigVlad", "pt_map_bigvlad", (int)0, (int)11384, var_65_float);
	func_8705();
	return 2;
}
EMIT "Stack[-1] = 0";


func_5847(var_0_object, var_915_int, var_916_object)
{
	var_918_object = Obj(); var_919_bool = 0; var_920_int = 0; var_921_bool = 0; var_922_object = Obj(); var_923_bool = 0; var_924_int = 0; var_925_bool = 0;
	var_0_object = var_916_object;
	var_926_bool = 0; var_927_object = Obj();
	var_916_object = var_927_object;
	func_7065(var_926_bool, var_927_object);
	var_928_bool = var_926_bool == 0; //@nz
	if(var_928_bool != 0) {
		var_915_int = -2;
		return 8;
	}
	CreateDialog(var_922_object);
	var_929_int = 0;
	func_7228(var_929_int);
	@@var_922_object:SetNPCName(var_929_int);
	var_930_string = "";
	func_7230(var_930_string);
	@@var_922_object:SetPhoto(var_930_string);
	var_931_int = 0;
	func_8672(var_931_int);
	@@var_922_object:SetPlayerName(var_931_int);
	IsOverrideActive(var_923_bool);
	var_932_bool = var_923_bool;
	if(var_932_bool != 0) {
		var_915_int = -2;
		return 8;
	}
	DoDialog(var_922_object);
	var_933_object = Obj(); var_934_object = Obj();
	var_916_object = var_933_object;
	var_922_object = var_934_object;
	TaskCall(17);
	func_5910(var_935_object, var_936_object, var_937_string, var_938_bool, var_933_object, var_934_object);
	TaskReturn();
	@@var_922_object:IsDialogEnd(var_925_bool);
	
Label_5892:
	var_1040_bool = var_925_bool == 0; //@nz
	if(var_1040_bool != 0) {
		sync();
		@@var_922_object:IsDialogEnd(var_925_bool);
		goto Label_5892;
	}
	var_916_object = Obj();
	func_7121();
	StopDialog(var_922_object);
	@@var_922_object:GetReturnValue((int)-1);
	var_924_int = var_915_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8409(var_402_bool)
{
	var_404_int = 0; var_405_string = "";
	func_7160(var_404_int, "ood1MladVlad8");
	var_407_bool = var_404_int == (int)0;
	if(var_407_bool != 0) {
		var_402_bool = 1;
		return 0;
	}
	var_402_bool = 0;
	return 0;
}


func_3802(var_2_object, var_244_string)
{
	var_245_bool = 0;
	func_7232(var_245_bool);
	var_246_bool = var_245_bool == 0; //@nz
	if(var_246_bool != 0) {
		return 0;
	}
	var_247_bool = var_244_string == var_2_object;
	if(var_247_bool != 0) {
		return 0;
	}
	var_248_string = "";
	var_244_string = var_248_string;
	func_7125(var_248_string);
	var_2_object = var_244_string;
	return 0;
}


func_4825(var_2_object, var_179_string)
{
	var_180_bool = 0;
	func_7232(var_180_bool);
	var_181_bool = var_180_bool == 0; //@nz
	if(var_181_bool != 0) {
		return 0;
	}
	var_182_bool = var_179_string == var_2_object;
	if(var_182_bool != 0) {
		return 0;
	}
	var_183_string = "";
	var_179_string = var_183_string;
	func_7125(var_183_string);
	var_2_object = var_179_string;
	return 0;
}


func_7902(var_277_bool, var_278_object)
{
	var_279_bool = 0; var_280_object = Obj();
	var_278_object = var_280_object;
	func_8577(var_280_object);
	if(var_279_bool != 0) {
		var_277_bool = 1;
		return 0;
	}
	var_277_bool = 0;
	return 0;
}


func_8421(var_418_bool)
{
	var_420_int = 0; var_421_string = "";
	func_7160(var_420_int, "ood1MladVlad9");
	var_423_bool = var_420_int == (int)0;
	if(var_423_bool != 0) {
		var_418_bool = 1;
		return 0;
	}
	var_418_bool = 0;
	return 0;
}


func_7912(var_144_bool)
{
	var_146_int = 0; var_147_string = "";
	func_7160(var_146_int, "d2q03");
	var_149_bool = var_146_int == (int)1;
	if(var_149_bool != 0) {
		var_144_bool = 1;
		return 0;
	}
	var_144_bool = 0;
	return 0;
}


func_7405()
{
	SetVariable("ood4MladVlad1", (int)1);
	return 0;
}


func_8433(var_434_bool)
{
	var_436_int = 0; var_437_string = "";
	func_7160(var_436_int, "ood1MladVlad10");
	var_439_bool = var_436_int == (int)0;
	if(var_439_bool != 0) {
		var_434_bool = 1;
		return 0;
	}
	var_434_bool = 0;
	return 0;
}


func_7411()
{
	var_167_object = Obj(); var_168_object = Obj();
	SetVariable("d4q01", (int)3);
	func_8622(Obj());
	var_171_object = var_168_object;
	var_176_float = 0;
	func_7199(var_176_float);
	@@var_168_object:AddMark("d4q01MladVladGotoBigVlad", "pt_map_bigvlad", (int)1, (int)11507, var_176_float);
	var_181_float = 0;
	func_7199(var_181_float);
	@@var_168_object:AddMark("d4q01MladVladGotoBigVladSelf", "pt_map_mladvlad", (int)1, (int)15322, var_181_float);
	func_8721();
	return 2;
}
EMIT "Stack[-1] = 0";


func_7924(var_136_bool)
{
	var_138_int = 0; var_139_string = "";
	func_7160(var_138_int, "ood2MladVlad1");
	var_143_bool = var_138_int == (int)0;
	if(var_143_bool != 0) {
		var_136_bool = 1;
		return 0;
	}
	var_136_bool = 0;
	return 0;
}


func_8445(var_450_bool)
{
	var_452_int = 0; var_453_string = "";
	func_7160(var_452_int, "ood1MladVlad11");
	var_455_bool = var_452_int == (int)0;
	if(var_455_bool != 0) {
		var_450_bool = 1;
		return 0;
	}
	var_450_bool = 0;
	return 0;
}


func_7936(var_176_bool)
{
	var_178_int = 0; var_179_string = "";
	func_7160(var_178_int, "ood2MladVlad2");
	var_181_bool = var_178_int == (int)0;
	if(var_181_bool != 0) {
		var_176_bool = 1;
		return 0;
	}
	var_176_bool = 0;
	return 0;
}


func_8457(var_466_bool)
{
	var_468_int = 0; var_469_string = "";
	func_7160(var_468_int, "ood1MladVlad12");
	var_471_bool = var_468_int == (int)0;
	if(var_471_bool != 0) {
		var_466_bool = 1;
		return 0;
	}
	var_466_bool = 0;
	return 0;
}


func_7948(var_187_bool)
{
	var_189_int = 0; var_190_string = "";
	func_7160(var_189_int, "ood2MladVlad3");
	var_192_bool = var_189_int == (int)0;
	if(var_192_bool != 0) {
		var_187_bool = 1;
		return 0;
	}
	var_187_bool = 0;
	return 0;
}


func_7443()
{
	var_193_object = Obj(); var_194_object = Obj();
	SetVariable("d4q01_subquest", (int)1);
	func_8622(Obj());
	var_197_object = var_194_object;
	var_202_float = 0;
	func_7199(var_202_float);
	@@var_194_object:AddMark("d4q01MladVladGotoOspina", "pt_map_ospina", (int)1, (int)11503, var_202_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8469(var_460_bool)
{
	var_462_int = 0; var_463_string = "";
	func_7160(var_462_int, "KnowMaria");
	var_465_bool = var_462_int == (int)1;
	if(var_465_bool != 0) {
		var_460_bool = 1;
		return 0;
	}
	var_460_bool = 0;
	return 0;
}


func_5910(var_0_object, var_1_object, var_2_object, var_3_object, var_933_object, var_934_object)
{
	var_0_object = var_934_object;
	var_1_object = var_933_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_940_string = "";
		func_6087(var_934_object, "Neutral");
		@@@var_0_object:SetMessage((int)12410);
		@@@var_0_object:ClearReplies();
		var_946_bool = 0;
		var_946_bool = 0;
		var_947_bool = 0;
		var_947_bool = 0;
		var_948_bool = 0; var_949_object = Obj();
		var_949_object = var_1_object;
		func_8229(var_949_object);
		if(var_948_bool != 0) {
			var_954_bool = 0; var_955_object = Obj();
			var_955_object = var_1_object;
			func_8253(var_955_object);
			if(var_954_bool != 0) {
				var_947_bool = 1;
			}
		}
		if(var_947_bool != 0) {
			var_960_bool = 0; var_961_object = Obj();
			var_961_object = var_1_object;
			func_8241(var_961_object);
			var_966_bool = var_960_bool == 0; //@nz
			if(var_966_bool != 0) {
				var_946_bool = 1;
			}
		}
		if(var_946_bool != 0) {
			@@@var_0_object:AddReply((int)12412, (int)13577, (int)13576);
		}
		var_970_bool = 0;
		var_970_bool = 0;
		var_971_bool = 0; var_972_object = Obj();
		var_972_object = var_1_object;
		func_8241(var_972_object);
		if(var_971_bool != 0) {
			var_973_bool = 0; var_974_object = Obj();
			var_974_object = var_1_object;
			func_8265(var_974_object);
			if(var_973_bool != 0) {
				var_970_bool = 1;
			}
		}
		if(var_970_bool != 0) {
			@@@var_0_object:AddReply((int)13588, (int)14840, (int)14839);
		}
		var_982_bool = 0;
		var_982_bool = 0;
		var_983_bool = 0;
		var_983_bool = 0;
		var_984_bool = 0; var_985_object = Obj();
		var_985_object = var_1_object;
		func_8277(var_985_object);
		if(var_984_bool != 0) {
			var_990_bool = 0; var_991_object = Obj();
			var_991_object = var_1_object;
			func_8241(var_991_object);
			if(var_990_bool != 0) {
				var_983_bool = 1;
			}
		}
		if(var_983_bool != 0) {
			var_992_bool = 0; var_993_object = Obj();
			var_993_object = var_1_object;
			func_8289(var_993_object);
			if(var_992_bool != 0) {
				var_982_bool = 1;
			}
		}
		if(var_982_bool != 0) {
			@@@var_0_object:AddReply((int)13607, (int)14868, (int)14862);
		}
		var_1001_bool = 0;
		var_1001_bool = 0;
		var_1002_bool = 0; var_1003_object = Obj();
		var_1003_object = var_1_object;
		func_8277(var_1003_object);
		if(var_1002_bool != 0) {
			var_1004_bool = 0; var_1005_object = Obj();
			var_1005_object = var_1_object;
			func_8313(var_1005_object);
			if(var_1004_bool != 0) {
				var_1001_bool = 1;
			}
		}
		if(var_1001_bool != 0) {
			@@@var_0_object:AddReply((int)13618, (int)14874, (int)14873);
		}
		var_1013_bool = 0;
		var_1013_bool = 0;
		var_1014_bool = 0;
		var_1014_bool = 0;
		var_1015_bool = 0; var_1016_object = Obj();
		var_1016_object = var_1_object;
		func_8241(var_1016_object);
		var_1017_bool = var_1015_bool == 0; //@nz
		if(var_1017_bool != 0) {
			var_1018_bool = 0; var_1019_object = Obj();
			var_1019_object = var_1_object;
			func_8229(var_1019_object);
			if(var_1018_bool != 0) {
				var_1014_bool = 1;
			}
		}
		if(var_1014_bool != 0) {
			var_1020_bool = 0; var_1021_object = Obj();
			var_1021_object = var_1_object;
			func_8301(var_1021_object);
			if(var_1020_bool != 0) {
				var_1013_bool = 1;
			}
		}
		if(var_1013_bool != 0) {
			@@@var_0_object:AddReply((int)13612, (int)14863, (int)14867);
		}
		@@@var_0_object:AddReply((int)12411, (int)-1, (int)13575);
		goto Label_6057;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x171a";
	}
Label_6057:
	var_1032_bool = 0;
	func_7232(var_1032_bool);
	if(var_1032_bool != 0) {

	Label_6061:
		lshWaitForAnimEnd();
		var_1033_object = var_3_object;
		if(var_1033_object != 0) {
		} else {
			var_1034_string = "";
			var_1034_string = var_2_object;
			func_7125(var_1034_string);
			goto Label_6061;
	}
		PlayAnimation("all", "idle");

	Label_6076:
		WaitForAnimEnd();
		var_1037_object = var_3_object;
		if(var_1037_object != 0) {
			goto Label_6086;
		}
		PlayAnimation("all", "idle");
		goto Label_6076;
	}
	goto Label_6086;
	
Label_6086:
	return 0;
	
}


func_7960(var_196_bool)
{
	var_198_int = 0; var_199_string = "";
	func_7160(var_198_int, "ood2MladVlad4");
	var_201_bool = var_198_int == (int)0;
	if(var_201_bool != 0) {
		var_196_bool = 1;
		return 0;
	}
	var_196_bool = 0;
	return 0;
}


func_8481(var_364_bool)
{
	var_366_int = 0; var_367_string = "";
	func_7160(var_366_int, "KnowOspina");
	var_369_bool = var_366_int == (int)1;
	if(var_369_bool != 0) {
		var_364_bool = 1;
		return 0;
	}
	var_364_bool = 0;
	return 0;
}


func_7972(var_205_bool)
{
	var_207_int = 0; var_208_string = "";
	func_7160(var_207_int, "d2q04");
	var_210_bool = var_207_int == (int)0;
	if(var_210_bool != 0) {
		var_205_bool = 1;
		return 0;
	}
	var_205_bool = 0;
	return 0;
}


func_7463()
{
	SetVariable("ood4MladVlad2", (int)1);
	return 0;
}


func_299(var_0_object, var_163_int, var_164_object)
{
	var_166_object = Obj(); var_167_bool = 0; var_168_int = 0; var_169_bool = 0; var_170_object = Obj(); var_171_bool = 0; var_172_int = 0; var_173_bool = 0;
	var_0_object = var_164_object;
	var_174_bool = 0; var_175_object = Obj();
	var_164_object = var_175_object;
	func_7065(var_174_bool, var_175_object);
	var_176_bool = var_174_bool == 0; //@nz
	if(var_176_bool != 0) {
		var_163_int = -2;
		return 8;
	}
	CreateDialog(var_170_object);
	var_177_int = 0;
	func_7228(var_177_int);
	@@var_170_object:SetNPCName(var_177_int);
	var_178_string = "";
	func_7230(var_178_string);
	@@var_170_object:SetPhoto(var_178_string);
	var_179_int = 0;
	func_8672(var_179_int);
	@@var_170_object:SetPlayerName(var_179_int);
	IsOverrideActive(var_171_bool);
	var_180_bool = var_171_bool;
	if(var_180_bool != 0) {
		var_163_int = -2;
		return 8;
	}
	DoDialog(var_170_object);
	var_181_object = Obj(); var_182_object = Obj();
	var_164_object = var_181_object;
	var_170_object = var_182_object;
	TaskCall(5);
	func_362(var_183_object, var_184_object, var_185_string, var_186_bool, var_181_object, var_182_object);
	TaskReturn();
	@@var_170_object:IsDialogEnd(var_173_bool);
	
Label_344:
	var_424_bool = var_173_bool == 0; //@nz
	if(var_424_bool != 0) {
		sync();
		@@var_170_object:IsDialogEnd(var_173_bool);
		goto Label_344;
	}
	var_164_object = Obj();
	func_7121();
	StopDialog(var_170_object);
	@@var_170_object:GetReturnValue((int)-1);
	var_172_int = var_163_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8493(var_444_bool)
{
	var_446_int = 0; var_447_string = "";
	func_7160(var_446_int, "KnowKapella");
	var_449_bool = var_446_int == (int)1;
	if(var_449_bool != 0) {
		var_444_bool = 1;
		return 0;
	}
	var_444_bool = 0;
	return 0;
}


func_7469()
{
	var_52_object = Obj(); var_53_object = Obj();
	func_8622(Obj());
	var_54_object = var_53_object;
	var_65_float = 0;
	func_7199(var_65_float);
	@@var_53_object:AddMark("d4q02MladVladGotoAnna", "pt_map_anna", (int)0, (int)11526, var_65_float);
	var_72_float = 0;
	func_7199(var_72_float);
	@@var_53_object:AddMark("d4q02MladVladGotoJulia", "pt_map_julia", (int)0, (int)11524, var_72_float);
	var_77_float = 0;
	func_7199(var_77_float);
	@@var_53_object:AddMark("d4q02MladVladGotoLara", "pt_map_lara", (int)0, (int)11525, var_77_float);
	var_82_float = 0;
	func_7199(var_82_float);
	@@var_53_object:AddMark("d4q02MladVladGotoAJLSelf", "pt_map_mladvlad", (int)0, (int)15328, var_82_float);
	func_8737();
	func_8753();
	var_117_object = Obj(); var_118_string = "";
	func_7176(var_117_object, "quest_d4_02");
	return 2;
}
EMIT "Stack[-1] = 0";


func_7984(var_412_bool)
{
	var_414_int = 0; var_415_string = "";
	func_7160(var_414_int, "KnowViktor");
	var_417_bool = var_414_int == (int)1;
	if(var_417_bool != 0) {
		var_412_bool = 1;
		return 0;
	}
	var_412_bool = 0;
	return 0;
}


func_8505(var_332_bool)
{
	var_334_int = 0; var_335_string = "";
	func_7160(var_334_int, "KnowMyth");
	var_337_bool = var_334_int == (int)1;
	if(var_337_bool != 0) {
		var_332_bool = 1;
		return 0;
	}
	var_332_bool = 0;
	return 0;
}


func_7996(var_154_bool)
{
	var_156_int = 0; var_157_string = "";
	func_7160(var_156_int, "d3q02");
	var_161_bool = var_156_int == (int)1;
	if(var_161_bool != 0) {
		var_154_bool = 1;
		return 0;
	}
	var_154_bool = 0;
	return 0;
}


func_8517(var_642_bool)
{
	var_644_int = 0; var_645_string = "";
	func_7160(var_644_int, "KnowTermitnik");
	var_647_bool = var_644_int == (int)1;
	if(var_647_bool != 0) {
		var_642_bool = 1;
		return 0;
	}
	var_642_bool = 0;
	return 0;
}


func_8008(var_162_bool)
{
	var_162_bool = 1;
	return 0;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


func_5451(var_2_object, var_208_string)
{
	var_209_bool = 0;
	func_7232(var_209_bool);
	var_210_bool = var_209_bool == 0; //@nz
	if(var_210_bool != 0) {
		return 0;
	}
	var_211_bool = var_208_string == var_2_object;
	if(var_211_bool != 0) {
		return 0;
	}
	var_212_string = "";
	var_208_string = var_212_string;
	func_7125(var_212_string);
	var_2_object = var_208_string;
	return 0;
}


func_8013(var_237_bool)
{
	var_239_int = 0; var_240_string = "";
	func_7160(var_239_int, "d4q01");
	var_242_bool = var_239_int == (int)2;
	if(var_242_bool != 0) {
		var_237_bool = 1;
		return 0;
	}
	var_237_bool = 0;
	return 0;
}


func_8529(var_664_bool)
{
	var_666_int = 0; var_667_string = "";
	func_7160(var_666_int, "KnowTaurusProject");
	var_669_bool = var_666_int == (int)1;
	if(var_669_bool != 0) {
		var_664_bool = 1;
		return 0;
	}
	var_664_bool = 0;
	return 0;
}


func_8025(var_266_bool)
{
	var_268_int = 0; var_269_string = "";
	func_7160(var_268_int, "ood4MladVlad1");
	var_271_bool = var_268_int == (int)0;
	if(var_271_bool != 0) {
		var_266_bool = 1;
		return 0;
	}
	var_266_bool = 0;
	return 0;
}


func_8541(var_241_bool)
{
	var_243_int = 0; var_244_string = "";
	func_7160(var_243_int, "ood1MladVlad1");
	var_248_bool = var_243_int == (int)0;
	if(var_248_bool != 0) {
		var_241_bool = 1;
		return 0;
	}
	var_241_bool = 0;
	return 0;
}


func_7522()
{
	SetVariable("ood4MladVlad3", (int)1);
	return 0;
}


func_8037(var_229_bool)
{
	var_231_int = 0; var_232_string = "";
	func_7160(var_231_int, "ood4MladVlad2");
	var_236_bool = var_231_int == (int)0;
	if(var_236_bool != 0) {
		var_229_bool = 1;
		return 0;
	}
	var_229_bool = 0;
	return 0;
}


func_7528(var_137_object)
{
	Trace("money 50000 is given");
	var_140_object = Obj(); var_141_string = ""; var_142_int = 0;
	var_137_object = var_140_object;
	func_7041(var_140_object, "money", (int)50000);
	return 0;
}


func_8553(var_338_bool)
{
	var_340_int = 0; var_341_string = "";
	func_7160(var_340_int, "ood1MladVlad2");
	var_343_bool = var_340_int == (int)0;
	if(var_343_bool != 0) {
		var_338_bool = 1;
		return 0;
	}
	var_338_bool = 0;
	return 0;
}


func_362(var_0_object, var_1_object, var_2_object, var_3_object, var_181_object, var_182_object)
{
	var_0_object = var_182_object;
	var_1_object = var_181_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_188_bool = 0;
		var_188_bool = 0;
		var_189_bool = 0; var_190_object = Obj();
		var_190_object = var_1_object;
		func_8541(var_190_object);
		if(var_189_bool != 0) {
			var_197_bool = 0; var_198_object = Obj();
			var_198_object = var_1_object;
			func_7866(var_198_object);
			if(var_197_bool != 0) {
				var_188_bool = 1;
			}
		}
		if(var_188_bool != 0) {
			var_203_string = "";
			func_693(var_182_object, "Neutral");
			@@@var_0_object:SetMessage((int)5694);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5695, (int)6518, (int)6277);
			@@@var_0_object:AddReply((int)5698, (int)-1, (int)6280);
			@@@var_0_object:AddReply((int)5930, (int)6526, (int)6525);
		} else {
				var_226_string = "";
				func_693(var_182_object, "Neutral");
				@@@var_0_object:SetMessage((int)5699);
				@@@var_0_object:ClearReplies();
				var_228_bool = 0;
				var_228_bool = 0;
				var_229_bool = 0;
				var_229_bool = 0;
				var_230_bool = 0; var_231_object = Obj();
				var_231_object = var_1_object;
				func_7842(var_231_object);
				if(var_230_bool != 0) {
					var_236_bool = 0; var_237_object = Obj();
					var_237_object = var_1_object;
					func_7878(var_237_object);
					if(var_236_bool != 0) {
						var_229_bool = 1;
					}
				}
				if(var_229_bool != 0) {
					var_242_bool = 0; var_243_object = Obj();
					var_243_object = var_1_object;
					func_7890(var_243_object);
					var_248_bool = var_242_bool == 0; //@nz
					if(var_248_bool != 0) {
						var_228_bool = 1;
					}
				}
				if(var_228_bool != 0) {
					@@@var_0_object:AddReply((int)5697, (int)6705, (int)6279);
				}
				var_252_bool = 0;
				var_252_bool = 0;
				var_253_bool = 0; var_254_object = Obj();
				var_254_object = var_1_object;
				func_7866(var_254_object);
				if(var_253_bool != 0) {
					var_255_bool = 0; var_256_object = Obj();
					var_256_object = var_1_object;
					func_8541(var_256_object);
					var_257_bool = var_255_bool == 0; //@nz
					if(var_257_bool != 0) {
						var_252_bool = 1;
					}
				}
				if(var_252_bool != 0) {
					@@@var_0_object:AddReply((int)5700, (int)16487, (int)6282);
				}
				var_261_bool = 0;
				var_261_bool = 0;
				var_262_bool = 0; var_263_object = Obj();
				var_263_object = var_1_object;
				func_8565(var_263_object);
				if(var_262_bool != 0) {
					var_268_bool = 0; var_269_object = Obj();
					var_269_object = var_1_object;
					func_7854(var_269_object);
					if(var_268_bool != 0) {
						var_261_bool = 1;
					}
				}
				if(var_261_bool != 0) {
					@@@var_0_object:AddReply((int)8220, (int)6283, (int)9043);
				}
				var_277_bool = 0;
				var_277_bool = 0;
				var_278_bool = 0; var_279_object = Obj();
				var_279_object = var_1_object;
				func_8505(var_279_object);
				if(var_278_bool != 0) {
					var_284_bool = 0; var_285_object = Obj();
					var_285_object = var_1_object;
					func_8553(var_285_object);
					if(var_284_bool != 0) {
						var_277_bool = 1;
					}
				}
				if(var_277_bool != 0) {
					@@@var_0_object:AddReply((int)8223, (int)6294, (int)9046);
				}
				var_293_bool = 0;
				var_293_bool = 0;
				var_294_bool = 0; var_295_object = Obj();
				var_295_object = var_1_object;
				func_8361(var_295_object);
				if(var_294_bool != 0) {
					var_300_bool = 0; var_301_object = Obj();
					var_301_object = var_1_object;
					func_8373(var_301_object);
					if(var_300_bool != 0) {
						var_293_bool = 1;
					}
				}
				if(var_293_bool != 0) {
					@@@var_0_object:AddReply((int)8226, (int)9070, (int)9049);
				}
				var_309_bool = 0;
				var_309_bool = 0;
				var_310_bool = 0; var_311_object = Obj();
				var_311_object = var_1_object;
				func_8481(var_311_object);
				if(var_310_bool != 0) {
					var_316_bool = 0; var_317_object = Obj();
					var_317_object = var_1_object;
					func_8385(var_317_object);
					if(var_316_bool != 0) {
						var_309_bool = 1;
					}
				}
				if(var_309_bool != 0) {
					@@@var_0_object:AddReply((int)8229, (int)9071, (int)9052);
				}
				var_325_bool = 0;
				var_325_bool = 0;
				var_326_bool = 0; var_327_object = Obj();
				var_327_object = var_1_object;
				func_8349(var_327_object);
				if(var_326_bool != 0) {
					var_332_bool = 0; var_333_object = Obj();
					var_333_object = var_1_object;
					func_8397(var_333_object);
					if(var_332_bool != 0) {
						var_325_bool = 1;
					}
				}
				if(var_325_bool != 0) {
					@@@var_0_object:AddReply((int)8231, (int)9072, (int)9054);
				}
				var_341_bool = 0;
				var_341_bool = 0;
				var_342_bool = 0; var_343_object = Obj();
				var_343_object = var_1_object;
				func_8325(var_343_object);
				if(var_342_bool != 0) {
					var_348_bool = 0; var_349_object = Obj();
					var_349_object = var_1_object;
					func_8409(var_349_object);
					if(var_348_bool != 0) {
						var_341_bool = 1;
					}
				}
				if(var_341_bool != 0) {
					@@@var_0_object:AddReply((int)8234, (int)9073, (int)9057);
				}
				var_357_bool = 0;
				var_357_bool = 0;
				var_358_bool = 0; var_359_object = Obj();
				var_359_object = var_1_object;
				func_7984(var_359_object);
				if(var_358_bool != 0) {
					var_364_bool = 0; var_365_object = Obj();
					var_365_object = var_1_object;
					func_8421(var_365_object);
					if(var_364_bool != 0) {
						var_357_bool = 1;
					}
				}
				if(var_357_bool != 0) {
					@@@var_0_object:AddReply((int)8235, (int)9074, (int)9058);
				}
				var_373_bool = 0;
				var_373_bool = 0;
				var_374_bool = 0; var_375_object = Obj();
				var_375_object = var_1_object;
				func_8337(var_375_object);
				if(var_374_bool != 0) {
					var_380_bool = 0; var_381_object = Obj();
					var_381_object = var_1_object;
					func_8433(var_381_object);
					if(var_380_bool != 0) {
						var_373_bool = 1;
					}
				}
				if(var_373_bool != 0) {
					@@@var_0_object:AddReply((int)8238, (int)9075, (int)9061);
				}
				var_389_bool = 0;
				var_389_bool = 0;
				var_390_bool = 0; var_391_object = Obj();
				var_391_object = var_1_object;
				func_8493(var_391_object);
				if(var_390_bool != 0) {
					var_396_bool = 0; var_397_object = Obj();
					var_397_object = var_1_object;
					func_8445(var_397_object);
					if(var_396_bool != 0) {
						var_389_bool = 1;
					}
				}
				if(var_389_bool != 0) {
					@@@var_0_object:AddReply((int)8241, (int)9076, (int)9064);
				}
				var_405_bool = 0;
				var_405_bool = 0;
				var_406_bool = 0; var_407_object = Obj();
				var_407_object = var_1_object;
				func_8469(var_407_object);
				if(var_406_bool != 0) {
					var_412_bool = 0; var_413_object = Obj();
					var_413_object = var_1_object;
					func_8457(var_413_object);
					if(var_412_bool != 0) {
						var_405_bool = 1;
					}
				}
				if(var_405_bool != 0) {
					@@@var_0_object:AddReply((int)8246, (int)9077, (int)9069);
				}
				@@@var_0_object:AddReply((int)6265, (int)-1, (int)6932);
				goto Label_663;
		}
	}
Label_663:
	var_218_bool = 0;
	func_7232(var_218_bool);
	if(var_218_bool != 0) {

	Label_667:
		lshWaitForAnimEnd();
		var_219_object = var_3_object;
		if(var_219_object != 0) {
		} else {
			var_220_string = "";
			var_220_string = var_2_object;
			func_7125(var_220_string);
			goto Label_667;
	}
		PlayAnimation("all", "idle");

	Label_682:
		WaitForAnimEnd();
		var_223_object = var_3_object;
		if(var_223_object != 0) {
			goto Label_692;
		}
		PlayAnimation("all", "idle");
		goto Label_682;

	}
	goto Label_692;
	
Label_692:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x16e";


func_8049(var_291_bool)
{
	var_293_int = 0; var_294_string = "";
	func_7160(var_293_int, "d4q02");
	var_296_bool = var_293_int == (int)1000;
	if(var_296_bool != 0) {
		var_291_bool = 1;
		return 0;
	}
	var_291_bool = 0;
	return 0;
}


func_7539()
{
	var_52_object = Obj(); var_53_object = Obj();
	func_8622(Obj());
	var_54_object = var_53_object;
	var_65_float = 0;
	func_7199(var_65_float);
	@@var_53_object:AddMark("d6q02MladVladGotoBigVlad", "pt_map_bigvlad", (int)0, (int)15378, var_65_float);
	var_72_float = 0;
	func_7199(var_72_float);
	@@var_53_object:AddMark("d6q02MladVladGotoBigVladSelf", "pt_map_mladvlad", (int)0, (int)15379, var_72_float);
	func_8785();
	func_8817();
	var_107_object = Obj(); var_108_string = "";
	func_7165(var_107_object, "quest_d6_02");
	var_115_bool = 0; var_116_string = ""; var_117_string = "";
	func_7187(var_115_bool, "quest_d6_02", "place_trigger");
	return 2;
}
EMIT "Stack[-1] = 0";


func_8565(var_316_bool)
{
	var_318_int = 0; var_319_string = "";
	func_7160(var_318_int, "ood1MladVlad3");
	var_321_bool = var_318_int == (int)0;
	if(var_321_bool != 0) {
		var_316_bool = 1;
		return 0;
	}
	var_316_bool = 0;
	return 0;
}


func_8061(var_285_bool)
{
	var_287_int = 0; var_288_string = "";
	func_7160(var_287_int, "ood4MladVlad3");
	var_290_bool = var_287_int == (int)0;
	if(var_290_bool != 0) {
		var_285_bool = 1;
		return 0;
	}
	var_285_bool = 0;
	return 0;
}


func_7041(var_140_object, var_141_string, var_142_int)
{
	var_143_int = 0; var_144_int = 0;
	@@var_140_object:GetProperty(var_141_string, var_144_int);
	var_145_int = var_144_int + var_142_int;
	@@var_140_object:SetProperty(var_141_string, var_145_int);
	return 2;
}


func_8577(var_279_bool)
{
	var_279_bool = 0;
	return 0;
}


func_8580(var_67_object)
{
	var_68_object = Obj(); var_69_object = Obj();
	GetDiaryRoot(var_69_object);
	var_70_bool = var_69_object == 0; //@nz
	if(var_70_bool != 0) {
		Trace("Can't retrieve diary root");
		var_67_object = 0;
		return 2;
	}
	var_69_object = var_67_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_7048(var_41_bool, var_42_object)
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


func_8073(var_201_bool)
{
	var_203_int = 0; var_204_string = "";
	func_7160(var_203_int, "d5q02");
	var_206_bool = var_203_int == (int)0;
	if(var_206_bool != 0) {
		var_201_bool = 1;
		return 0;
	}
	var_201_bool = 0;
	return 0;
}


func_2958(var_0_object, var_535_int, var_536_object)
{
	var_538_object = Obj(); var_539_bool = 0; var_540_int = 0; var_541_bool = 0; var_542_object = Obj(); var_543_bool = 0; var_544_int = 0; var_545_bool = 0;
	var_0_object = var_536_object;
	var_546_bool = 0; var_547_object = Obj();
	var_536_object = var_547_object;
	func_7065(var_546_bool, var_547_object);
	var_548_bool = var_546_bool == 0; //@nz
	if(var_548_bool != 0) {
		var_535_int = -2;
		return 8;
	}
	CreateDialog(var_542_object);
	var_549_int = 0;
	func_7228(var_549_int);
	@@var_542_object:SetNPCName(var_549_int);
	var_550_string = "";
	func_7230(var_550_string);
	@@var_542_object:SetPhoto(var_550_string);
	var_551_int = 0;
	func_8672(var_551_int);
	@@var_542_object:SetPlayerName(var_551_int);
	IsOverrideActive(var_543_bool);
	var_552_bool = var_543_bool;
	if(var_552_bool != 0) {
		var_535_int = -2;
		return 8;
	}
	DoDialog(var_542_object);
	var_553_object = Obj(); var_554_object = Obj();
	var_536_object = var_553_object;
	var_542_object = var_554_object;
	TaskCall(9);
	func_3021(var_555_object, var_556_object, var_557_string, var_558_bool, var_553_object, var_554_object);
	TaskReturn();
	@@var_542_object:IsDialogEnd(var_545_bool);
	
Label_3003:
	var_592_bool = var_545_bool == 0; //@nz
	if(var_592_bool != 0) {
		sync();
		@@var_542_object:IsDialogEnd(var_545_bool);
		goto Label_3003;
	}
	var_536_object = Obj();
	func_7121();
	StopDialog(var_542_object);
	@@var_542_object:GetReturnValue((int)-1);
	var_544_int = var_535_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8593(var_58_bool, var_59_object, var_60_int)
{
	var_61_object = Obj(); var_62_object = Obj(); var_63_int = 0; var_64_object = Obj(); var_65_object = Obj(); var_66_int = 0;
	func_8580(Obj());
	var_67_object = var_64_object;
	@@var_64_object:Find(var_60_int, var_65_object);
	var_72_bool = var_65_object == 0; //@nz
	if(var_72_bool != 0) {
		var_74_int = "Can't find diary parent with id: " + var_60_int;
		Trace(var_74_int);
		var_58_bool = 0;
		return 6;
	}
	@@var_65_object:AddChild(var_59_object);
	SetVariable("player_diary", (int)1);
	@@var_59_object:GetCategory(var_66_int);
	SetDiarySection(var_66_int);
	var_58_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_7060(var_41_bool)
{
	var_42_bool = 0; var_43_bool = 0;
	IsLoaded(var_43_bool);
	var_43_bool = var_41_bool;
	return 2;
}


func_8085(var_232_bool)
{
	var_234_int = 0; var_235_string = "";
	func_7160(var_234_int, "d6q02");
	var_237_bool = var_234_int == (int)0;
	if(var_237_bool != 0) {
		var_232_bool = 1;
		return 0;
	}
	var_232_bool = 0;
	return 0;
}


func_7065(var_55_bool, var_56_object)
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
	func_7150(var_80_cvector, var_81_cvector);
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


func_1946(var_0_object, var_428_int, var_429_object)
{
	var_431_object = Obj(); var_432_bool = 0; var_433_int = 0; var_434_bool = 0; var_435_object = Obj(); var_436_bool = 0; var_437_int = 0; var_438_bool = 0;
	var_0_object = var_429_object;
	var_439_bool = 0; var_440_object = Obj();
	var_429_object = var_440_object;
	func_7065(var_439_bool, var_440_object);
	var_441_bool = var_439_bool == 0; //@nz
	if(var_441_bool != 0) {
		var_428_int = -2;
		return 8;
	}
	CreateDialog(var_435_object);
	var_442_int = 0;
	func_7228(var_442_int);
	@@var_435_object:SetNPCName(var_442_int);
	var_443_string = "";
	func_7230(var_443_string);
	@@var_435_object:SetPhoto(var_443_string);
	var_444_int = 0;
	func_8672(var_444_int);
	@@var_435_object:SetPlayerName(var_444_int);
	IsOverrideActive(var_436_bool);
	var_445_bool = var_436_bool;
	if(var_445_bool != 0) {
		var_428_int = -2;
		return 8;
	}
	DoDialog(var_435_object);
	var_446_object = Obj(); var_447_object = Obj();
	var_429_object = var_446_object;
	var_435_object = var_447_object;
	TaskCall(7);
	func_2009(var_448_object, var_449_object, var_450_string, var_451_bool, var_446_object, var_447_object);
	TaskReturn();
	@@var_435_object:IsDialogEnd(var_438_bool);
	
Label_1991:
	var_531_bool = var_438_bool == 0; //@nz
	if(var_531_bool != 0) {
		sync();
		@@var_435_object:IsDialogEnd(var_438_bool);
		goto Label_1991;
	}
	var_429_object = Obj();
	func_7121();
	StopDialog(var_435_object);
	@@var_435_object:GetReturnValue((int)-1);
	var_437_int = var_428_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7579()
{
	SetVariable("ood6MladVlad1", (int)1);
	return 0;
}


func_8097(var_200_bool)
{
	var_202_int = 0; var_203_string = "";
	func_7160(var_202_int, "ood6MladVlad1");
	var_207_bool = var_202_int == (int)0;
	if(var_207_bool != 0) {
		var_200_bool = 1;
		return 0;
	}
	var_200_bool = 0;
	return 0;
}


func_7585()
{
	SetVariable("ood6MladVlad2", (int)1);
	return 0;
}


func_7591()
{
	SetVariable("d6q02KnowAboutAttack", (int)1);
	return 0;
}


func_8109(var_242_bool)
{
	var_244_int = 0; var_245_string = "";
	func_7160(var_244_int, "ood6MladVlad2");
	var_247_bool = var_244_int == (int)0;
	if(var_247_bool != 0) {
		var_242_bool = 1;
		return 0;
	}
	var_242_bool = 0;
	return 0;
}


func_7597()
{
	SetVariable("ood6MladVlad3", (int)1);
	return 0;
}


func_8622(var_54_object)
{
	var_55_object = Obj(); var_56_object = Obj(); var_57_object = Obj(); var_58_object = Obj();
	GetMainOutdoorScene(var_57_object);
	var_59_bool = var_57_object == 0; //@ne
	if(var_59_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_58_object = 0;
		var_58_object = var_54_object;
		return 4;
	}
	@@var_57_object:GetMap(var_58_object);
	var_58_object = var_54_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_7603()
{
	func_8833();
	var_195_bool = 0; var_196_string = ""; var_197_string = "";
	func_7187(var_195_bool, "quest_d6_03", "failed");
	return 0;
}


func_8121(var_259_bool)
{
	var_261_int = 0; var_262_string = "";
	func_7160(var_261_int, "ood6MladVlad3");
	var_264_bool = var_261_int == (int)0;
	if(var_264_bool != 0) {
		var_259_bool = 1;
		return 0;
	}
	var_259_bool = 0;
	return 0;
}


func_7613(var_132_object)
{
	Trace("money30000 is given");
	var_135_object = Obj(); var_136_string = ""; var_137_int = 0;
	var_132_object = var_135_object;
	func_7041(var_135_object, "money", (int)30000);
	return 0;
}


func_8639(var_127_object, var_128_string, var_129_float)
{
	var_131_cvector = CVector(0,0,0); var_132_cvector = CVector(0,0,0); var_133_object = Obj(); var_134_bool = 0; var_135_cvector = CVector(0,0,0); var_136_cvector = CVector(0,0,0); var_137_object = Obj(); var_138_bool = 0;
	GetMainOutdoorScene(var_137_object);
	var_139_bool = var_137_object == 0; //@ne
	if(var_139_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_137_object:GetLocator(var_128_string, var_138_bool, var_135_cvector, var_136_cvector);
	var_141_bool = var_138_bool == 0; //@nz
	if(var_141_bool != 0) {
		var_143_int = "Warning: outdoor scene locator " + var_128_string;
		var_145_int = var_143_int + " doesnt exist";
		Trace(var_145_int);
	}
	@@var_137_object:GetMap(var_127_object);
	var_146_bool = var_127_object == 0; //@ne
	if(var_146_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_148_float = GetByIndex(var_135_cvector, 0);
	var_149_float = GetByIndex(var_135_cvector, 2);
	@@var_127_object:SetMapParams(var_148_float, var_149_float, var_129_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_8133(var_165_bool)
{
	var_167_int = 0; var_168_string = "";
	func_7160(var_167_int, "d5q03");
	var_170_bool = var_167_int == (int)1000;
	if(var_170_bool != 0) {
		var_165_bool = 1;
		return 0;
	}
	var_165_bool = 0;
	return 0;
}


func_6087(var_2_object, var_125_string)
{
	var_126_bool = 0;
	func_7232(var_126_bool);
	var_127_bool = var_126_bool == 0; //@nz
	if(var_127_bool != 0) {
		return 0;
	}
	var_128_bool = var_125_string == var_2_object;
	if(var_128_bool != 0) {
		return 0;
	}
	var_129_string = "";
	var_125_string = var_129_string;
	func_7125(var_129_string);
	var_2_object = var_125_string;
	return 0;
}


func_7624()
{
	return 0;
}


func_7626()
{
	SetVariable("ood5MladVlad1", (int)1);
	return 0;
}


func_3021(var_0_object, var_1_object, var_2_object, var_3_object, var_553_object, var_554_object)
{
	var_0_object = var_554_object;
	var_1_object = var_553_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_560_string = "";
		func_3098(var_554_object, "Neutral");
		@@@var_0_object:SetMessage((int)10212);
		@@@var_0_object:ClearReplies();
		var_566_bool = 0;
		var_566_bool = 0;
		var_567_bool = 0; var_568_object = Obj();
		var_568_object = var_1_object;
		func_7996(var_568_object);
		if(var_567_bool != 0) {
			var_573_bool = 0; var_574_object = Obj();
			var_574_object = var_1_object;
			func_8008(var_574_object);
			if(var_573_bool != 0) {
				var_566_bool = 1;
			}
		}
		if(var_566_bool != 0) {
			@@@var_0_object:AddReply((int)10213, (int)11260, (int)11259);
		}
		@@@var_0_object:AddReply((int)10302, (int)11359, (int)11358);
		@@@var_0_object:AddReply((int)10334, (int)11395, (int)11394);
		goto Label_3068;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xbd1";
	}
Label_3068:
	var_584_bool = 0;
	func_7232(var_584_bool);
	if(var_584_bool != 0) {

	Label_3072:
		lshWaitForAnimEnd();
		var_585_object = var_3_object;
		if(var_585_object != 0) {
		} else {
			var_586_string = "";
			var_586_string = var_2_object;
			func_7125(var_586_string);
			goto Label_3072;
	}
		PlayAnimation("all", "idle");

	Label_3087:
		WaitForAnimEnd();
		var_589_object = var_3_object;
		if(var_589_object != 0) {
			goto Label_3097;
		}
		PlayAnimation("all", "idle");
		goto Label_3087;
	}
	goto Label_3097;
	
Label_3097:
	return 0;
	
}


func_7632()
{
	SetVariable("ood5MladVlad2", (int)1);
	return 0;
}


func_7121()
{
	CameraSwitchToNormal();
	return 0;
}


func_8145(var_172_bool)
{
	var_174_int = 0; var_175_string = "";
	func_7160(var_174_int, "d5q03");
	var_177_bool = var_174_int == (int)-1;
	if(var_177_bool != 0) {
		var_172_bool = 1;
		return 0;
	}
	var_172_bool = 0;
	return 0;
}


func_7125(var_45_string)
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


func_7638()
{
	return 0;
}


func_7640()
{
	SetVariable("ood5MladVlad3", (int)1);
	return 0;
}


func_2009(var_0_object, var_1_object, var_2_object, var_3_object, var_446_object, var_447_object)
{
	var_0_object = var_447_object;
	var_1_object = var_446_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_453_bool = 0;
		var_453_bool = 0;
		var_454_bool = 0; var_455_object = Obj();
		var_455_object = var_1_object;
		func_7924(var_455_object);
		if(var_454_bool != 0) {
			var_460_bool = 0; var_461_object = Obj();
			var_461_object = var_1_object;
			func_7912(var_461_object);
			var_466_bool = var_460_bool == 0; //@nz
			if(var_466_bool != 0) {
				var_453_bool = 1;
			}
		}
		if(var_453_bool != 0) {
			var_467_string = "";
			func_2166(var_447_object, "Neutral");
			@@@var_0_object:SetMessage((int)6935);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7509, (int)8291, (int)8290);
			@@@var_0_object:AddReply((int)7518, (int)8300, (int)8299);
		} else {
				var_487_string = "";
				func_2166(var_447_object, "Neutral");
				@@@var_0_object:SetMessage((int)6929);
				@@@var_0_object:ClearReplies();
				var_489_bool = 0;
				var_489_bool = 0;
				var_490_bool = 0; var_491_object = Obj();
				var_491_object = var_1_object;
				func_7936(var_491_object);
				if(var_490_bool != 0) {
					var_496_bool = 0; var_497_object = Obj();
					var_497_object = var_1_object;
					func_7912(var_497_object);
					if(var_496_bool != 0) {
						var_489_bool = 1;
					}
				}
				if(var_489_bool != 0) {
					@@@var_0_object:AddReply((int)6930, (int)7637, (int)7636);
				}
				var_501_bool = 0; var_502_object = Obj();
				var_502_object = var_1_object;
				func_7948(var_502_object);
				if(var_501_bool != 0) {
					@@@var_0_object:AddReply((int)6938, (int)7645, (int)7644);
				}
				var_510_bool = 0; var_511_object = Obj();
				var_511_object = var_1_object;
				func_7960(var_511_object);
				if(var_510_bool != 0) {
					@@@var_0_object:AddReply((int)6940, (int)7647, (int)7646);
				}
				var_519_bool = 0; var_520_object = Obj();
				var_520_object = var_1_object;
				func_7972(var_520_object);
				if(var_519_bool != 0) {
					@@@var_0_object:AddReply((int)7776, (int)8568, (int)8577);
				}
				@@@var_0_object:AddReply((int)7746, (int)-1, (int)8547);
				goto Label_2136;
		}
	}
Label_2136:
	var_479_bool = 0;
	func_7232(var_479_bool);
	if(var_479_bool != 0) {

	Label_2140:
		lshWaitForAnimEnd();
		var_480_object = var_3_object;
		if(var_480_object != 0) {
		} else {
			var_481_string = "";
			var_481_string = var_2_object;
			func_7125(var_481_string);
			goto Label_2140;
	}
		PlayAnimation("all", "idle");

	Label_2155:
		WaitForAnimEnd();
		var_484_object = var_3_object;
		if(var_484_object != 0) {
			goto Label_2165;
		}
		PlayAnimation("all", "idle");
		goto Label_2155;

	}
	goto Label_2165;
	
Label_2165:
	return 0;
	
}
EMIT "PushEmpty(string)";
EMIT "Stack[-1] = \"Neutral\" // @poff=0";
EMIT "Call 0x876";
EMIT "Pop(1)";
EMIT "Push((int) 9500)";
EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
EMIT "Pop(1)";
EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
EMIT "Pop(0)";
EMIT "Push((int) 9501)";
EMIT "Push((int) 10445)";
EMIT "Push((int) 10444)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
EMIT "Pop(3)";
EMIT "Push((int) 9514)";
EMIT "Push((int) 10458)";
EMIT "Push((int) 10457)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
EMIT "Pop(3)";
EMIT "GOTO 0x858";
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x7dd";


func_8157(var_214_bool)
{
	var_216_int = 0; var_217_string = "";
	func_7160(var_216_int, "d5q03");
	var_219_bool = var_216_int == (int)2;
	if(var_219_bool != 0) {
		var_214_bool = 1;
		return 0;
	}
	var_214_bool = 0;
	return 0;
}


func_7646()
{
	var_156_object = Obj(); var_157_object = Obj(); var_158_object = Obj(); var_159_object = Obj();
	func_8622(Obj());
	var_160_object = var_158_object;
	@@var_158_object:FindMark(var_159_object, "d6q02BigVlad");
	var_162_object = var_159_object;
	if(var_162_object != 0) {
		@@var_159_object:Remove();
	}
	@@var_158_object:FindMark(var_159_object, "d6q02KapellaGotoMladVlad");
	var_164_object = var_159_object;
	if(var_164_object != 0) {
		@@var_159_object:Remove();
	}
	@@var_158_object:FindMark(var_159_object, "d6q02MladVladGotoBigVlad");
	var_166_object = var_159_object;
	if(var_166_object != 0) {
		@@var_159_object:Remove();
	}
	@@var_158_object:FindMark(var_159_object, "d6q02MladVladGotoBigVladSelf");
	var_168_object = var_159_object;
	if(var_168_object != 0) {
		@@var_159_object:Remove();
	}
	func_8801();
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_8672(var_98_int)
{
	var_99_int = 0; var_100_int = 0;
	GetVariable("player", var_100_int);
	var_103_bool = var_100_int == (int)0;
	if(var_103_bool != 0) {
		var_98_int = 200001;
		return 2;
	EMIT "GOTO 0x21ef";
	}
	var_105_bool = var_100_int == (int)1;
	if(var_105_bool != 0) {
		var_98_int = 200002;
		return 2;
	}
	var_98_int = 200003;
	return 2;
}


func_7143()
{
	var_43_bool = 0;
	func_7232(var_43_bool);
	if(var_43_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_8169(var_220_bool)
{
	var_222_int = 0; var_223_string = "";
	func_7160(var_222_int, "ood5MladVlad1");
	var_225_bool = var_222_int == (int)0;
	if(var_225_bool != 0) {
		var_220_bool = 1;
		return 0;
	}
	var_220_bool = 0;
	return 0;
}


func_7150(var_80_cvector, var_81_cvector)
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


func_8689()
{
	var_70_object = Obj(); var_71_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_71_object, (int)37, (int)2, (int)12119);
	var_76_bool = 0; var_77_object = Obj(); var_78_int = 0;
	var_71_object = var_77_object;
	func_8593(var_76_bool, var_77_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8181(var_232_bool)
{
	var_234_int = 0; var_235_string = "";
	func_7160(var_234_int, "ood5MladVlad2");
	var_237_bool = var_234_int == (int)0;
	if(var_237_bool != 0) {
		var_232_bool = 1;
		return 0;
	}
	var_232_bool = 0;
	return 0;
}


func_7160(var_145_int, var_146_string)
{
	var_147_int = 0; var_148_int = 0;
	GetVariable(var_146_string, var_148_int);
	var_148_int = var_145_int;
	return 2;
}


func_7165(var_107_object, var_108_string)
{
	var_109_object = Obj(); var_110_object = Obj(); var_111_object = Obj(); var_112_object = Obj();
	GetMainOutdoorScene(var_111_object);
	var_114_int = var_108_string + ".bin";
	AddBlankActor(var_112_object, var_111_object, var_108_string, var_114_int);
	var_112_object = var_107_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


