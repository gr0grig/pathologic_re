// @IMPORTS: Hold/0,StopGroup0/0,sync/0,SetTimer/2,MovePoint/3,KillTimer/1,WaitForAnimEnd/1,Rotate/3,IsOverrideActive/1,IsPlayerActor/2,FindActor/2,Stop/0,Sleep/1,StopAnimation/0,HasProperty/2,GetProperty/2,irand/2,PlayAnimation/2,WaitForAnimEnd/0,HasAnimation/3,CreateDialog/1,DoDialog/1,StopDialog/1,lshWaitForAnimEnd/0,lshStopAnimation/0,SensePlayerOnly/1,GetScene/1,GetHeight/1,CanReachByPF/2,GetAnimationOffset/3,GetPosition/1,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,GetMainOutdoorScene/1,AddBlankActor/4,AddBlankActorFromXml/4,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,GetInvItemProperty/3,CreateInvItem/1,Trigger/2,GetSceneByName/2,Teleport/4,GetGameTime/1,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: W:player|W:ptidle|W:all|A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Untrust|A:SetMessage|A:ClearReplies|A:AddReply|W:Neutral|W:Sly|W:Rage|W:Fear|A:GetLocator|W:loc|W:walk_stopl|W:walk_stopr|A:GetPosition|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|A:HasProperty|W:m|W:Can't find lsh animation : |W:.bin|W:.xml|W:Door |W: not found|W:locked|A:add|W:money|W:Money|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|A:HasItem|W:Teleport location '|W:' not found in scene '|W:pt_|W:ui/NPC_MladVlad.png|W:ui/NPC_MladVlad_b.png|W:pt_map_burah_home|A:ShowMap|W:oob1MladVlad1|W:b1MladVladGotoGrif|W:pt_map_grif|A:AddMark|W:oob1MladVlad2|W:b2MladVladBurahHomeTalk|W:b2BurahHome|W:burah_home@door1|W:oob2MladVlad1|W:b2TravnikMark|W:b2Travnik1|W:pt_map_gatherer1|W:b2Travnik2|W:pt_map_gatherer2|W:b2Travnik3|W:pt_map_gatherer3|W:oob5MladVlad1|W:b5q02|W:quest_b5_02|W:place_prophet|W:maze_start|W:completed|W:money 4000 is given|W:kerosene50 is given|W:kerosene|W:house_vlad|W:pt_maze_start|W:b8q02|W:quest_b8_02|W:b8q02_book|A:RemoveItemByType|W:oob8MladVlad1|W:b11q01KnowWhoKilled|W:oob11MladVlad1|W:quest_b2_01|W:place_mladvlad|W:money10000 is given|W:playsound|W:givemoney|W:giveitem|W:b5MladVladVisit|W:money 7000 is given|W:recipe2 is given|W:recipe2|W:recipe3 is given|W:recipe3|W:mapmark|W:b11q01|W:KnowGrif|W:b1q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:string:,1:object:,2:bool:,3:bool:
// @RUN_OP: 0x1176
// @RUN_TASK: 22
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
// @EVENT_11: op=0x1f7 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x496 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x732 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9c1 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0xab0 vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0xbe8 vars=int,int
// @TASK_16: vars=object params=2
// @TASK_17: vars=object,object,string,bool params=2
// @EVENT_11: op=0xe6b vars=int,int
// @TASK_18: vars=object params=2
// @TASK_19: vars=object,object,string,bool params=2
// @EVENT_11: op=0x104e vars=int,int
// @TASK_20: vars=object params=2
// @TASK_21: vars=object,object,string,bool params=2
// @EVENT_11: op=0x114c vars=int,int
// @TASK_22: vars=float,float,int params=0
// @EVENT_6: op=0x11f3 vars=
// @EVENT_0: op=0x11fc vars=object
// @STANDALONE_EVENT_6: op=0x1451 vars=
// @PE: 0xa2,0xf7,0x100,0x16b,0x1e1,0x1f7,0x419,0x480,0x496,0x6b5,0x71c,0x732,0x971,0x9ab,0x9c1,0xa60,0xa9a,0xab0,0xb5c,0xbd2,0xbe8,0xe11,0xe55,0xe6b,0xff9,0x1038,0x104e,0x10fc,0x1136,0x114c,0x11f3,0x1370,0x1378,0x1426,0x1444,0x145c,0x146c,0x1482,0x149c,0x14a3,0x14d6,0x14dc,0x14f6,0x1500,0x150a,0x1515,0x1520,0x153e,0x1544,0x154d,0x1553,0x155a,0x1564,0x156a,0x1570,0x1576,0x1580,0x158b,0x1596,0x159c,0x15a2,0x15ae,0x15ba,0x15c5,0x15d1,0x15dd,0x15e9,0x15f5,0x1601,0x160d,0x1619,0x1625,0x1631,0x163d,0x1710

task_0_event_5(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_float, var_47_float, var_48_int)
{
	StopGroup0();
	sync();
	return 0;
}


task_1_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_float, var_47_float, var_48_int)
{
	var_0_bool = true;
	func_145();
	func_5201();
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_1_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_float, var_48_float, var_49_int)
{
	var_50_bool = 0; var_51_bool = 0;
	IsOverrideActive(var_51_bool);
	var_52_bool = var_51_bool == 0; //@nz
	if(var_52_bool != 0) {
		func_145();
		EventDisable(0);
		var_53_bool = 0; var_54_object = Obj();
		var_49_int = var_54_object;
		func_4657(var_53_bool, var_54_object);
		EventEnable(0);
		var_67_object = Obj();
		var_49_int = var_67_object;
		func_5904(var_67_object);
		var_0_bool = false;
	}
	return 2;
}


	task_1_event_10(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_float, var_48_float, var_49_int, var_50_object, var_51_object, var_71_object)
	{
	var_72_bool = 0; var_73_bool = 0;
	IsPlayerActor(var_71_object, var_73_bool);
	var_74_bool = var_73_bool;
	if(var_74_bool != 0) {
		func_145();
		var_75_object = Obj();
		var_71_object = var_75_object;
		TaskCall(2);
		func_148(var_75_object);
		TaskReturn();
		var_0_bool = false;
		var_89_int = 20;
		var_90_float = 10.0;
		SetTimer(var_89_int, var_90_float);
	}
	return 2;
	}


task_1_event_7(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_float, var_48_float, var_49_int)
{
	var_50_object = Obj(); var_51_object = Obj();
	var_53_bool = var_49_int == (int)20;
	if(var_53_bool != 0) {
		var_0_bool = true;
		KillTimer((int)20);
	} else {
		var_56_bool = var_49_int == (int)21;
		if(var_56_bool == 0) goto Label_144;
		var_57_bool = var_0_bool;
		if(var_57_bool == 0) goto Label_144;
		FindActor(var_51_object, "player");
		var_59_bool = 0;
		var_59_bool = 0;
		var_60_object = var_51_object;
		if(var_60_object != 0) {
			var_61_float = 0; var_62_object = Obj();
			var_51_object = var_62_object;
			func_4625(var_61_float, var_62_object);
			var_70_bool = var_61_float <= (float)62500.0;
			if(var_70_bool != 0) {
				var_59_bool = 1;
			}
		}
		if(var_59_bool != 0) {
			var_51_object = Obj();
			func_89();
		}
		var_51_object = 0;
	}
Label_144:
	return 2;
	
}


task_2_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_float, var_47_float, var_48_int)
{
	func_193();
	func_5201();
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_2_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_float, var_48_float, var_49_int)
{
	var_50_bool = 0; var_51_bool = 0;
	IsOverrideActive(var_51_bool);
	var_52_bool = var_51_bool == 0; //@nz
	if(var_52_bool != 0) {
		func_193();
		EventDisable(0);
		var_53_bool = 0; var_54_object = Obj();
		var_49_int = var_54_object;
		func_4657(var_53_bool, var_54_object);
		EventEnable(0);
		var_67_object = Obj();
		var_49_int = var_67_object;
		func_5904(var_67_object);
	}
	return 2;
}


task_3_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_float, var_47_float, var_48_int)
{
	func_5201();
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_5_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_float, var_49_float, var_50_int)
{
	if((int)1 != 0) {
		func_4953();
		var_54_bool = var_50_int == (int)21076;
		if(var_54_bool != 0) {
			var_55_object = Obj(); var_56_object = Obj();
			var_55_object = var_1_object;
			var_56_object = var_0_bool;
			func_5250();
		}
		var_60_bool = var_50_int == (int)21082;
		if(var_60_bool != 0) {
			var_61_object = Obj(); var_62_object = Obj();
			var_61_object = var_1_object;
			var_62_object = var_0_bool;
			func_5234();
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_bool;
			func_5532();
		}
		var_84_bool = var_50_int == (int)21085;
		if(var_84_bool != 0) {
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_bool;
			func_5234();
			var_87_object = Obj(); var_88_object = Obj();
			var_87_object = var_1_object;
			var_88_object = var_0_bool;
			func_5532();
		}
		var_90_bool = var_49_float == (int)21224;
		if(var_90_bool != 0) {
			var_91_bool = 0; var_92_object = Obj();
			var_92_object = var_1_object;
			func_5609(var_92_object);
			if(var_91_bool != 0) {
				var_99_string = "";
				func_481(var_50_int, "Untrust");
				@@@var_0_bool:SetMessage((int)520042);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)520043, (int)21227, (int)21225);
				@@@var_0_bool:AddReply((int)520044, (int)-1, (int)21226);
				return 0;
			}
			var_123_bool = 0; var_124_object = Obj();
			var_124_object = var_1_object;
			func_5621(var_124_object);
			if(var_123_bool != 0) {
				var_129_object = Obj(); var_130_object = Obj();
				var_129_object = var_1_object;
				var_130_object = var_0_bool;
				func_5228();
				var_133_string = "";
				func_481(var_50_int, "Neutral");
				@@@var_0_bool:SetMessage((int)519876);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)519877, (int)21042, (int)21041);
				@@@var_0_bool:AddReply((int)519905, (int)21042, (int)21073);
				return 0;
			}
			var_141_string = "";
			func_481(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)519906);
			@@@var_0_bool:ClearReplies();
			var_143_bool = 0; var_144_object = Obj();
			var_144_object = var_1_object;
			func_5633(var_144_object);
			if(var_143_bool != 0) {
				@@@var_0_bool:AddReply((int)519907, (int)21077, (int)21076);
			}
			@@@var_0_bool:AddReply((int)519917, (int)-1, (int)21086);
			return 0;
		}
		var_156_bool = var_49_float == (int)21077;
		if(var_156_bool != 0) {
			var_157_string = "";
			func_481(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)519908);
			@@@var_0_bool:ClearReplies();
			var_159_bool = 0; var_160_object = Obj();
			var_160_object = var_1_object;
			func_5597(var_160_object);
			var_165_bool = var_159_bool == 0; //@nz
			if(var_165_bool != 0) {
				@@@var_0_bool:AddReply((int)519909, (int)21079, (int)21078);
			}
			var_169_bool = 0; var_170_object = Obj();
			var_170_object = var_1_object;
			func_5597(var_170_object);
			if(var_169_bool != 0) {
				@@@var_0_bool:AddReply((int)519914, (int)21084, (int)21083);
			}
			return 0;
		}
		var_175_bool = var_49_float == (int)21084;
		if(var_175_bool != 0) {
			var_176_string = "";
			func_481(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)519915);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519916, (int)-1, (int)21085);
			return 0;
		}
		var_182_bool = var_49_float == (int)21079;
		if(var_182_bool != 0) {
			var_183_string = "";
			func_481(var_50_int, "Untrust");
			@@@var_0_bool:SetMessage((int)519910);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519911, (int)21081, (int)21080);
			return 0;
		}
		var_189_bool = var_49_float == (int)21081;
		if(var_189_bool != 0) {
			var_190_string = "";
			func_481(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)519912);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519913, (int)-1, (int)21082);
			return 0;
		}
		var_196_bool = var_49_float == (int)21042;
		if(var_196_bool != 0) {
			var_197_string = "";
			func_481(var_50_int, "Untrust");
			@@@var_0_bool:SetMessage((int)519878);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519879, (int)21044, (int)21043);
			@@@var_0_bool:AddReply((int)519902, (int)21070, (int)21069);
			return 0;
		}
		var_206_bool = var_49_float == (int)21070;
		if(var_206_bool != 0) {
			var_207_string = "";
			func_481(var_50_int, "Untrust");
			@@@var_0_bool:SetMessage((int)519903);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519904, (int)21044, (int)21071);
			return 0;
		}
		var_213_bool = var_49_float == (int)21044;
		if(var_213_bool != 0) {
			var_214_string = "";
			func_481(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)519880);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519881, (int)21046, (int)21045);
			@@@var_0_bool:AddReply((int)519897, (int)21064, (int)21063);
			return 0;
		}
		var_223_bool = var_49_float == (int)21064;
		if(var_223_bool != 0) {
			var_224_string = "";
			func_481(var_50_int, "Sly");
			@@@var_0_bool:SetMessage((int)519898);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519899, (int)21066, (int)21065);
			return 0;
		}
		var_230_bool = var_49_float == (int)21066;
		if(var_230_bool != 0) {
			var_231_string = "";
			func_481(var_50_int, "Sly");
			@@@var_0_bool:SetMessage((int)519900);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519901, (int)21046, (int)21067);
			return 0;
		}
		var_237_bool = var_49_float == (int)21046;
		if(var_237_bool != 0) {
			var_238_string = "";
			func_481(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)519882);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519883, (int)21048, (int)21047);
			@@@var_0_bool:AddReply((int)519896, (int)21048, (int)21061);
			return 0;
		}
		var_247_bool = var_49_float == (int)21048;
		if(var_247_bool != 0) {
			var_248_string = "";
			func_481(var_50_int, "Untrust");
			@@@var_0_bool:SetMessage((int)519884);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519885, (int)21050, (int)21049);
			@@@var_0_bool:AddReply((int)519893, (int)21058, (int)21057);
			return 0;
		}
		var_257_bool = var_49_float == (int)21058;
		if(var_257_bool != 0) {
			var_258_string = "";
			func_481(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)519894);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519895, (int)21052, (int)21059);
			return 0;
		}
		var_264_bool = var_49_float == (int)21050;
		if(var_264_bool != 0) {
			var_265_string = "";
			func_481(var_50_int, "Sly");
			@@@var_0_bool:SetMessage((int)519886);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519887, (int)21052, (int)21051);
			return 0;
		}
		var_271_bool = var_49_float == (int)21052;
		if(var_271_bool != 0) {
			var_272_string = "";
			func_481(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)519888);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519889, (int)21054, (int)21053);
			return 0;
		}
		var_278_bool = var_49_float == (int)21054;
		if(var_278_bool != 0) {
			var_279_string = "";
			func_481(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)519890);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)519891, (int)-1, (int)21055);
			@@@var_0_bool:AddReply((int)519892, (int)-1, (int)21056);
			return 0;
		}
		var_288_bool = var_49_float == (int)21227;
		if(var_288_bool != 0) {
			var_289_string = "";
			func_481(var_50_int, "Untrust");
			@@@var_0_bool:SetMessage((int)520045);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520046, (int)-1, (int)21228);
			return 0;
		}
		var_3_object = true;
		var_294_bool = 0;
		func_5210(var_294_bool);
		if(var_294_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1f8";
	
}


task_7_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_float, var_49_float, var_50_int)
{
	if((int)1 != 0) {
		func_4953();
		var_54_bool = var_50_int == (int)21192;
		if(var_54_bool != 0) {
			var_55_object = Obj(); var_56_object = Obj();
			var_55_object = var_1_object;
			var_56_object = var_0_bool;
			func_5256();
			var_75_object = Obj(); var_76_object = Obj();
			var_75_object = var_1_object;
			var_76_object = var_0_bool;
			func_5212(var_76_object);
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_object;
			var_102_object = var_0_bool;
			func_5276();
		}
		var_114_bool = var_50_int == (int)21193;
		if(var_114_bool != 0) {
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_bool;
			func_5256();
			var_117_object = Obj(); var_118_object = Obj();
			var_117_object = var_1_object;
			var_118_object = var_0_bool;
			func_5212(var_118_object);
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_bool;
			func_5276();
		}
		var_122_bool = var_50_int == (int)21194;
		if(var_122_bool != 0) {
			var_123_object = Obj(); var_124_object = Obj();
			var_123_object = var_1_object;
			var_124_object = var_0_bool;
			func_5256();
			var_125_object = Obj(); var_126_object = Obj();
			var_125_object = var_1_object;
			var_126_object = var_0_bool;
			func_5212(var_126_object);
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_object;
			var_128_object = var_0_bool;
			func_5276();
		}
		var_130_bool = var_50_int == (int)21204;
		if(var_130_bool != 0) {
			var_131_object = Obj(); var_132_object = Obj();
			var_131_object = var_1_object;
			var_132_object = var_0_bool;
			func_5283();
		}
		var_136_bool = var_50_int == (int)21212;
		if(var_136_bool != 0) {
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_bool;
			func_5289();
			var_165_object = Obj(); var_166_object = Obj();
			var_165_object = var_1_object;
			var_166_object = var_0_bool;
			func_5532();
		}
		var_170_bool = var_50_int == (int)21213;
		if(var_170_bool != 0) {
			var_171_object = Obj(); var_172_object = Obj();
			var_171_object = var_1_object;
			var_172_object = var_0_bool;
			func_5289();
			var_173_object = Obj(); var_174_object = Obj();
			var_173_object = var_1_object;
			var_174_object = var_0_bool;
			func_5532();
		}
		var_176_bool = var_49_float == (int)21181;
		if(var_176_bool != 0) {
			var_177_bool = 0; var_178_object = Obj();
			var_178_object = var_1_object;
			func_5645(var_178_object);
			var_183_bool = var_177_bool == 0; //@nz
			if(var_183_bool != 0) {
				var_184_object = Obj(); var_185_object = Obj();
				var_184_object = var_1_object;
				var_185_object = var_0_bool;
				func_5459();
				var_192_string = "";
				func_1152(var_50_int, "Neutral");
				@@@var_0_bool:SetMessage((int)520000);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)520001, (int)21183, (int)21182);
				@@@var_0_bool:AddReply((int)520017, (int)21183, (int)21199);
				return 0;
			}
			var_216_string = "";
			func_1152(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520019);
			@@@var_0_bool:ClearReplies();
			var_218_bool = 0;
			var_218_bool = 0;
			var_219_bool = 0; var_220_object = Obj();
			var_220_object = var_1_object;
			func_5657(var_220_object);
			if(var_219_bool != 0) {
				var_225_bool = 0; var_226_object = Obj();
				var_226_object = var_1_object;
				func_5645(var_226_object);
				if(var_225_bool != 0) {
					var_218_bool = 1;
				}
			}
			if(var_218_bool != 0) {
				@@@var_0_bool:AddReply((int)520020, (int)21205, (int)21204);
			}
			@@@var_0_bool:AddReply((int)520030, (int)-1, (int)21214);
			return 0;
		}
		var_234_bool = var_49_float == (int)21205;
		if(var_234_bool != 0) {
			var_235_string = "";
			func_1152(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520021);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520022, (int)21207, (int)21206);
			@@@var_0_bool:AddReply((int)527733, (int)29085, (int)29084);
			return 0;
		}
		var_244_bool = var_49_float == (int)29085;
		if(var_244_bool != 0) {
			var_245_string = "";
			func_1152(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)527734);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520029, (int)-1, (int)21213);
			return 0;
		}
		var_251_bool = var_49_float == (int)21207;
		if(var_251_bool != 0) {
			var_252_string = "";
			func_1152(var_50_int, "Untrust");
			@@@var_0_bool:SetMessage((int)520023);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520024, (int)21209, (int)21208);
			return 0;
		}
		var_258_bool = var_49_float == (int)21209;
		if(var_258_bool != 0) {
			var_259_string = "";
			func_1152(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520025);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520026, (int)21211, (int)21210);
			@@@var_0_bool:AddReply((int)527735, (int)29087, (int)29086);
			return 0;
		}
		var_268_bool = var_49_float == (int)29087;
		if(var_268_bool != 0) {
			var_269_string = "";
			func_1152(var_50_int, "Untrust");
			@@@var_0_bool:SetMessage((int)527736);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)527737, (int)21211, (int)29088);
			return 0;
		}
		var_275_bool = var_49_float == (int)21211;
		if(var_275_bool != 0) {
			var_276_string = "";
			func_1152(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520027);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520028, (int)-1, (int)21212);
			return 0;
		}
		var_282_bool = var_49_float == (int)21183;
		if(var_282_bool != 0) {
			var_283_string = "";
			func_1152(var_50_int, "Untrust");
			@@@var_0_bool:SetMessage((int)520002);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520003, (int)21185, (int)21184);
			@@@var_0_bool:AddReply((int)527725, (int)29074, (int)29073);
			return 0;
		}
		var_292_bool = var_49_float == (int)29074;
		if(var_292_bool != 0) {
			var_293_string = "";
			func_1152(var_50_int, "Rage");
			@@@var_0_bool:SetMessage((int)527726);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)527727, (int)21185, (int)29075);
			return 0;
		}
		var_299_bool = var_49_float == (int)21185;
		if(var_299_bool != 0) {
			var_300_string = "";
			func_1152(var_50_int, "Sly");
			@@@var_0_bool:SetMessage((int)520004);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520005, (int)21187, (int)21186);
			@@@var_0_bool:AddReply((int)520015, (int)21187, (int)21196);
			return 0;
		}
		var_309_bool = var_49_float == (int)21187;
		if(var_309_bool != 0) {
			var_310_string = "";
			func_1152(var_50_int, "Untrust");
			@@@var_0_bool:SetMessage((int)520006);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520007, (int)21189, (int)21188);
			@@@var_0_bool:AddReply((int)527728, (int)29079, (int)29078);
			return 0;
		}
		var_319_bool = var_49_float == (int)29079;
		if(var_319_bool != 0) {
			var_320_string = "";
			func_1152(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)527729);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)527730, (int)29081, (int)29080);
			return 0;
		}
		var_326_bool = var_49_float == (int)29081;
		if(var_326_bool != 0) {
			var_327_string = "";
			func_1152(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)527731);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)527732, (int)21189, (int)29082);
			return 0;
		}
		var_333_bool = var_49_float == (int)21189;
		if(var_333_bool != 0) {
			var_334_string = "";
			func_1152(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520008);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520009, (int)21191, (int)21190);
			@@@var_0_bool:AddReply((int)520013, (int)-1, (int)21194);
			return 0;
		}
		var_343_bool = var_49_float == (int)21191;
		if(var_343_bool != 0) {
			var_344_string = "";
			func_1152(var_50_int, "Sly");
			@@@var_0_bool:SetMessage((int)520010);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520011, (int)-1, (int)21192);
			@@@var_0_bool:AddReply((int)520012, (int)-1, (int)21193);
			return 0;
		}
		var_3_object = true;
		var_352_bool = 0;
		func_5210(var_352_bool);
		if(var_352_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x497";
	
}


task_9_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_int, var_17_int, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_float, var_49_float, var_50_int)
{
	if((int)1 != 0) {
		func_4953();
		var_54_bool = var_50_int == (int)21333;
		if(var_54_bool != 0) {
			var_55_object = Obj(); var_56_object = Obj();
			var_55_object = var_1_object;
			var_56_object = var_0_bool;
			func_5386(var_56_object);
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_bool;
			func_5482();
			var_83_object = Obj(); var_84_object = Obj();
			var_83_object = var_1_object;
			var_84_object = var_0_bool;
			func_5340();
		}
		var_136_bool = var_50_int == (int)21335;
		if(var_136_bool != 0) {
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_bool;
			func_5386(var_138_object);
			var_139_object = Obj(); var_140_object = Obj();
			var_139_object = var_1_object;
			var_140_object = var_0_bool;
			func_5482();
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_bool;
			func_5340();
		}
		var_144_bool = var_50_int == (int)21349;
		if(var_144_bool != 0) {
			var_145_object = Obj(); var_146_object = Obj();
			var_145_object = var_1_object;
			var_146_object = var_0_bool;
			func_5376(var_146_object);
			var_163_object = Obj(); var_164_object = Obj();
			var_163_object = var_1_object;
			var_164_object = var_0_bool;
			func_5476();
			var_167_object = Obj(); var_168_object = Obj();
			var_167_object = var_1_object;
			var_168_object = var_0_bool;
			func_5386(var_168_object);
			var_169_object = Obj(); var_170_object = Obj();
			var_169_object = var_1_object;
			var_170_object = var_0_bool;
			func_5340();
			var_171_object = Obj(); var_172_object = Obj();
			var_171_object = var_1_object;
			var_172_object = var_0_bool;
			func_5466(var_172_object);
		}
		var_177_bool = var_50_int == (int)21350;
		if(var_177_bool != 0) {
			var_178_object = Obj(); var_179_object = Obj();
			var_178_object = var_1_object;
			var_179_object = var_0_bool;
			func_5386(var_179_object);
			var_180_object = Obj(); var_181_object = Obj();
			var_180_object = var_1_object;
			var_181_object = var_0_bool;
			func_5482();
			var_182_object = Obj(); var_183_object = Obj();
			var_182_object = var_1_object;
			var_183_object = var_0_bool;
			func_5340();
		}
		var_185_bool = var_50_int == (int)21361;
		if(var_185_bool != 0) {
			var_186_object = Obj(); var_187_object = Obj();
			var_186_object = var_1_object;
			var_187_object = var_0_bool;
			func_5366();
			var_199_object = Obj(); var_200_object = Obj();
			var_199_object = var_1_object;
			var_200_object = var_0_bool;
			func_5494(var_200_object);
			var_204_object = Obj(); var_205_object = Obj();
			var_204_object = var_1_object;
			var_205_object = var_0_bool;
			func_5504(var_205_object);
			var_210_object = Obj(); var_211_object = Obj();
			var_210_object = var_1_object;
			var_211_object = var_0_bool;
			func_5515(var_211_object);
			var_216_object = Obj(); var_217_object = Obj();
			var_216_object = var_1_object;
			var_217_object = var_0_bool;
			func_5482();
		}
		var_219_bool = var_49_float == (int)21322;
		if(var_219_bool != 0) {
			var_220_bool = 0; var_221_object = Obj();
			var_221_object = var_1_object;
			func_5669(var_221_object);
			if(var_220_bool != 0) {
				var_228_object = Obj(); var_229_object = Obj();
				var_228_object = var_1_object;
				var_229_object = var_0_bool;
				func_5334();
				var_232_object = Obj(); var_233_object = Obj();
				var_232_object = var_1_object;
				var_233_object = var_0_bool;
				func_5488();
				var_236_string = "";
				func_1820(var_50_int, "Rage");
				@@@var_0_bool:SetMessage((int)520138);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)520139, (int)21324, (int)21323);
				return 0;
			}
			var_257_string = "";
			func_1820(var_50_int, "Rage");
			@@@var_0_bool:SetMessage((int)520157);
			@@@var_0_bool:ClearReplies();
			var_259_bool = 0; var_260_object = Obj();
			var_260_object = var_1_object;
			func_5681(var_260_object);
			if(var_259_bool != 0) {
				@@@var_0_bool:AddReply((int)520158, (int)21346, (int)21345);
			}
			var_268_bool = 0; var_269_object = Obj();
			var_269_object = var_1_object;
			func_5693(var_269_object);
			if(var_268_bool != 0) {
				@@@var_0_bool:AddReply((int)520164, (int)21352, (int)21351);
			}
			@@@var_0_bool:AddReply((int)520180, (int)-1, (int)21370);
			return 0;
		}
		var_281_bool = var_49_float == (int)21352;
		if(var_281_bool != 0) {
			var_282_string = "";
			func_1820(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520165);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520166, (int)21354, (int)21353);
			@@@var_0_bool:AddReply((int)520179, (int)21354, (int)21368);
			return 0;
		}
		var_291_bool = var_49_float == (int)21354;
		if(var_291_bool != 0) {
			var_292_string = "";
			func_1820(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520167);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520168, (int)21356, (int)21355);
			@@@var_0_bool:AddReply((int)520178, (int)21360, (int)21366);
			return 0;
		}
		var_301_bool = var_49_float == (int)21356;
		if(var_301_bool != 0) {
			var_302_string = "";
			func_1820(var_50_int, "Fear");
			@@@var_0_bool:SetMessage((int)520169);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520170, (int)21358, (int)21357);
			return 0;
		}
		var_308_bool = var_49_float == (int)21358;
		if(var_308_bool != 0) {
			var_309_string = "";
			func_1820(var_50_int, "Fear");
			@@@var_0_bool:SetMessage((int)520171);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520172, (int)21360, (int)21359);
			@@@var_0_bool:AddReply((int)520175, (int)21363, (int)21362);
			return 0;
		}
		var_318_bool = var_49_float == (int)21363;
		if(var_318_bool != 0) {
			var_319_string = "";
			func_1820(var_50_int, "Sly");
			@@@var_0_bool:SetMessage((int)520176);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520177, (int)21360, (int)21364);
			return 0;
		}
		var_325_bool = var_49_float == (int)21360;
		if(var_325_bool != 0) {
			var_326_string = "";
			func_1820(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520173);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520174, (int)-1, (int)21361);
			return 0;
		}
		var_332_bool = var_49_float == (int)21346;
		if(var_332_bool != 0) {
			var_333_string = "";
			func_1820(var_50_int, "Sly");
			@@@var_0_bool:SetMessage((int)520159);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520160, (int)21348, (int)21347);
			@@@var_0_bool:AddReply((int)520163, (int)-1, (int)21350);
			return 0;
		}
		var_342_bool = var_49_float == (int)21348;
		if(var_342_bool != 0) {
			var_343_string = "";
			func_1820(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520161);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520162, (int)-1, (int)21349);
			return 0;
		}
		var_349_bool = var_49_float == (int)21324;
		if(var_349_bool != 0) {
			var_350_string = "";
			func_1820(var_50_int, "Rage");
			@@@var_0_bool:SetMessage((int)520140);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520141, (int)21326, (int)21325);
			@@@var_0_bool:AddReply((int)520154, (int)21341, (int)21340);
			return 0;
		}
		var_359_bool = var_49_float == (int)21341;
		if(var_359_bool != 0) {
			var_360_string = "";
			func_1820(var_50_int, "Sly");
			@@@var_0_bool:SetMessage((int)520155);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520156, (int)21326, (int)21342);
			return 0;
		}
		var_366_bool = var_49_float == (int)21326;
		if(var_366_bool != 0) {
			var_367_string = "";
			func_1820(var_50_int, "Rage");
			@@@var_0_bool:SetMessage((int)520142);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520143, (int)21328, (int)21327);
			@@@var_0_bool:AddReply((int)520153, (int)21330, (int)21338);
			return 0;
		}
		var_376_bool = var_49_float == (int)21328;
		if(var_376_bool != 0) {
			var_377_string = "";
			func_1820(var_50_int, "Sly");
			@@@var_0_bool:SetMessage((int)520144);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520145, (int)21330, (int)21329);
			@@@var_0_bool:AddReply((int)520152, (int)21330, (int)21336);
			return 0;
		}
		var_386_bool = var_49_float == (int)21330;
		if(var_386_bool != 0) {
			var_387_string = "";
			func_1820(var_50_int, "Sly");
			@@@var_0_bool:SetMessage((int)520146);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520147, (int)21332, (int)21331);
			@@@var_0_bool:AddReply((int)520151, (int)-1, (int)21335);
			return 0;
		}
		var_396_bool = var_49_float == (int)21332;
		if(var_396_bool != 0) {
			var_397_string = "";
			func_1820(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520148);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520149, (int)-1, (int)21333);
			@@@var_0_bool:AddReply((int)520150, (int)-1, (int)21334);
			return 0;
		}
		var_3_object = true;
		var_405_bool = 0;
		func_5210(var_405_bool);
		if(var_405_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x733";
	
}


task_11_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_int, var_22_int, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_float, var_49_float, var_50_int)
{
	if((int)1 != 0) {
		func_4953();
		var_54_bool = var_49_float == (int)21982;
		if(var_54_bool != 0) {
			var_55_string = "";
			func_2475(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520768);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520769, (int)21984, (int)21983);
			@@@var_0_bool:AddReply((int)520772, (int)21987, (int)21986);
			return 0;
		}
		var_80_bool = var_49_float == (int)21987;
		if(var_80_bool != 0) {
			var_81_string = "";
			func_2475(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520773);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520774, (int)-1, (int)21988);
			return 0;
		}
		var_87_bool = var_49_float == (int)21984;
		if(var_87_bool != 0) {
			var_88_string = "";
			func_2475(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520770);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520771, (int)-1, (int)21985);
			return 0;
		}
		var_3_object = true;
		var_93_bool = 0;
		func_5210(var_93_bool);
		if(var_93_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x9c2";
	
}


task_13_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_int, var_27_int, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_float, var_49_float, var_50_int)
{
	if((int)1 != 0) {
		func_4953();
		var_54_bool = var_50_int == (int)22403;
		if(var_54_bool != 0) {
			var_55_object = Obj(); var_56_object = Obj();
			var_55_object = var_1_object;
			var_56_object = var_0_bool;
			func_5397();
		}
		var_82_bool = var_49_float == (int)22399;
		if(var_82_bool != 0) {
			var_83_string = "";
			func_2714(var_50_int, "Untrust");
			@@@var_0_bool:SetMessage((int)521202);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)521203, (int)22402, (int)22400);
			@@@var_0_bool:AddReply((int)521204, (int)-1, (int)22401);
			return 0;
		}
		var_108_bool = var_49_float == (int)22402;
		if(var_108_bool != 0) {
			var_109_string = "";
			func_2714(var_50_int, "Untrust");
			@@@var_0_bool:SetMessage((int)521205);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)528423, (int)29808, (int)29806);
			@@@var_0_bool:AddReply((int)528424, (int)29808, (int)29807);
			return 0;
		}
		var_118_bool = var_49_float == (int)29808;
		if(var_118_bool != 0) {
			var_119_string = "";
			func_2714(var_50_int, "Sly");
			@@@var_0_bool:SetMessage((int)528425);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)521206, (int)-1, (int)22403);
			return 0;
		}
		var_3_object = true;
		var_124_bool = 0;
		func_5210(var_124_bool);
		if(var_124_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xab1";
	
}


task_15_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_int, var_32_int, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_float, var_49_float, var_50_int)
{
	if((int)1 != 0) {
		func_4953();
		var_54_bool = var_50_int == (int)22637;
		if(var_54_bool != 0) {
			var_55_object = Obj(); var_56_object = Obj();
			var_55_object = var_1_object;
			var_56_object = var_0_bool;
			func_5408();
		}
		var_99_bool = var_50_int == (int)22643;
		if(var_99_bool != 0) {
			var_100_object = Obj(); var_101_object = Obj();
			var_100_object = var_1_object;
			var_101_object = var_0_bool;
			func_5408();
		}
		var_103_bool = var_50_int == (int)22646;
		if(var_103_bool != 0) {
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_bool;
			func_5424(var_105_object);
			var_124_object = Obj(); var_125_object = Obj();
			var_124_object = var_1_object;
			var_125_object = var_0_bool;
			func_5526();
			var_128_object = Obj(); var_129_object = Obj();
			var_128_object = var_1_object;
			var_129_object = var_0_bool;
			func_5376(var_129_object);
			var_149_object = Obj(); var_150_object = Obj();
			var_149_object = var_1_object;
			var_150_object = var_0_bool;
			func_5476();
		}
		var_154_bool = var_50_int == (int)25069;
		if(var_154_bool != 0) {
			var_155_object = Obj(); var_156_object = Obj();
			var_155_object = var_1_object;
			var_156_object = var_0_bool;
			func_5424(var_156_object);
		}
		var_158_bool = var_49_float == (int)22634;
		if(var_158_bool != 0) {
			var_159_bool = 0; var_160_object = Obj();
			var_160_object = var_1_object;
			func_5538(var_160_object);
			if(var_159_bool != 0) {
				var_167_object = Obj(); var_168_object = Obj();
				var_167_object = var_1_object;
				var_168_object = var_0_bool;
				func_5438();
				var_171_string = "";
				func_3026(var_50_int, "Rage");
				@@@var_0_bool:SetMessage((int)521469);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)523789, (int)25055, (int)25054);
				@@@var_0_bool:AddReply((int)523804, (int)25055, (int)25070);
				return 0;
			}
			var_195_string = "";
			func_3026(var_50_int, "Rage");
			@@@var_0_bool:SetMessage((int)521474);
			@@@var_0_bool:ClearReplies();
			var_197_bool = 0; var_198_object = Obj();
			var_198_object = var_1_object;
			func_5550(var_198_object);
			if(var_197_bool != 0) {
				@@@var_0_bool:AddReply((int)521475, (int)22642, (int)22640);
			}
			var_206_bool = 0;
			var_206_bool = 0;
			var_207_bool = 0; var_208_object = Obj();
			var_208_object = var_1_object;
			func_5550(var_208_object);
			var_209_bool = var_207_bool == 0; //@nz
			if(var_209_bool != 0) {
				var_210_bool = 0; var_211_object = Obj();
				var_211_object = var_1_object;
				func_5562(var_210_bool, var_211_object);
				if(var_210_bool != 0) {
					var_206_bool = 1;
				}
			}
			if(var_206_bool != 0) {
				@@@var_0_bool:AddReply((int)521479, (int)22645, (int)22644);
			}
			@@@var_0_bool:AddReply((int)523837, (int)25111, (int)25110);
			@@@var_0_bool:AddReply((int)521476, (int)-1, (int)22641);
			return 0;
		}
		var_229_bool = var_49_float == (int)25111;
		if(var_229_bool != 0) {
			var_230_string = "";
			func_3026(var_50_int, "Untrust");
			@@@var_0_bool:SetMessage((int)523838);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)523839, (int)25113, (int)25112);
			return 0;
		}
		var_236_bool = var_49_float == (int)25113;
		if(var_236_bool != 0) {
			var_237_string = "";
			func_3026(var_50_int, "Fear");
			@@@var_0_bool:SetMessage((int)523840);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)523841, (int)25115, (int)25114);
			return 0;
		}
		var_243_bool = var_49_float == (int)25115;
		if(var_243_bool != 0) {
			var_244_string = "";
			func_3026(var_50_int, "Untrust");
			@@@var_0_bool:SetMessage((int)523842);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)523843, (int)25117, (int)25116);
			return 0;
		}
		var_250_bool = var_49_float == (int)25117;
		if(var_250_bool != 0) {
			var_251_string = "";
			func_3026(var_50_int, "Untrust");
			@@@var_0_bool:SetMessage((int)523844);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)523845, (int)-1, (int)25118);
			return 0;
		}
		var_257_bool = var_49_float == (int)22645;
		if(var_257_bool != 0) {
			var_258_string = "";
			func_3026(var_50_int, "Sly");
			@@@var_0_bool:SetMessage((int)521480);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)523798, (int)25065, (int)25063);
			@@@var_0_bool:AddReply((int)523799, (int)25066, (int)25064);
			return 0;
		}
		var_267_bool = var_49_float == (int)25066;
		if(var_267_bool != 0) {
			var_268_string = "";
			func_3026(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)523801);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)523802, (int)25065, (int)25067);
			return 0;
		}
		var_274_bool = var_49_float == (int)25065;
		if(var_274_bool != 0) {
			var_275_string = "";
			func_3026(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)523800);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)521481, (int)-1, (int)22646);
			@@@var_0_bool:AddReply((int)523803, (int)-1, (int)25069);
			return 0;
		}
		var_284_bool = var_49_float == (int)22642;
		if(var_284_bool != 0) {
			var_285_string = "";
			func_3026(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)521477);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)521478, (int)-1, (int)22643);
			return 0;
		}
		var_291_bool = var_49_float == (int)25055;
		if(var_291_bool != 0) {
			var_292_string = "";
			func_3026(var_50_int, "Rage");
			@@@var_0_bool:SetMessage((int)523790);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)523791, (int)25057, (int)25056);
			@@@var_0_bool:AddReply((int)523805, (int)25057, (int)25072);
			return 0;
		}
		var_301_bool = var_49_float == (int)25057;
		if(var_301_bool != 0) {
			var_302_string = "";
			func_3026(var_50_int, "Rage");
			@@@var_0_bool:SetMessage((int)523792);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)523793, (int)25059, (int)25058);
			@@@var_0_bool:AddReply((int)523797, (int)25059, (int)25062);
			return 0;
		}
		var_311_bool = var_49_float == (int)25059;
		if(var_311_bool != 0) {
			var_312_string = "";
			func_3026(var_50_int, "Rage");
			@@@var_0_bool:SetMessage((int)523794);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)523795, (int)25075, (int)25060);
			@@@var_0_bool:AddReply((int)523810, (int)25080, (int)25079);
			return 0;
		}
		var_321_bool = var_49_float == (int)25080;
		if(var_321_bool != 0) {
			var_322_string = "";
			func_3026(var_50_int, "Rage");
			@@@var_0_bool:SetMessage((int)523811);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)523812, (int)25075, (int)25081);
			return 0;
		}
		var_328_bool = var_49_float == (int)25075;
		if(var_328_bool != 0) {
			var_329_string = "";
			func_3026(var_50_int, "Rage");
			@@@var_0_bool:SetMessage((int)523806);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)523807, (int)25077, (int)25076);
			return 0;
		}
		var_335_bool = var_49_float == (int)25077;
		if(var_335_bool != 0) {
			var_336_string = "";
			func_3026(var_50_int, "Sly");
			@@@var_0_bool:SetMessage((int)523808);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)523809, (int)22636, (int)25078);
			return 0;
		}
		var_342_bool = var_49_float == (int)22636;
		if(var_342_bool != 0) {
			var_343_string = "";
			func_3026(var_50_int, "Rage");
			@@@var_0_bool:SetMessage((int)521471);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)523813, (int)25084, (int)25083);
			@@@var_0_bool:AddReply((int)523815, (int)25084, (int)25085);
			return 0;
		}
		var_352_bool = var_49_float == (int)25084;
		if(var_352_bool != 0) {
			var_353_string = "";
			func_3026(var_50_int, "Fear");
			@@@var_0_bool:SetMessage((int)523814);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)521472, (int)-1, (int)22637);
			@@@var_0_bool:AddReply((int)521473, (int)-1, (int)22638);
			return 0;
		}
		var_3_object = true;
		var_361_bool = 0;
		func_5210(var_361_bool);
		if(var_361_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xbe9";
	
}


task_17_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_int, var_37_int, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_float, var_49_float, var_50_int)
{
	if((int)1 != 0) {
		func_4953();
		var_54_bool = var_50_int == (int)24800;
		if(var_54_bool != 0) {
			var_55_object = Obj(); var_56_object = Obj();
			var_55_object = var_1_object;
			var_56_object = var_0_bool;
			func_5453();
		}
		var_60_bool = var_50_int == (int)23247;
		if(var_60_bool != 0) {
			var_61_object = Obj(); var_62_object = Obj();
			var_61_object = var_1_object;
			var_62_object = var_0_bool;
			func_5444();
		}
		var_89_bool = var_49_float == (int)23248;
		if(var_89_bool != 0) {
			var_90_string = "";
			func_3669(var_50_int, "Fear");
			@@@var_0_bool:SetMessage((int)522079);
			@@@var_0_bool:ClearReplies();
			var_108_bool = 0; var_109_object = Obj();
			var_109_object = var_1_object;
			func_5585(var_109_object);
			if(var_108_bool != 0) {
				@@@var_0_bool:AddReply((int)523566, (int)24801, (int)24800);
			}
			@@@var_0_bool:AddReply((int)523569, (int)24804, (int)24803);
			@@@var_0_bool:AddReply((int)522080, (int)-1, (int)23249);
			return 0;
		}
		var_126_bool = var_49_float == (int)24804;
		if(var_126_bool != 0) {
			var_127_string = "";
			func_3669(var_50_int, "Sly");
			@@@var_0_bool:SetMessage((int)523570);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)523571, (int)24807, (int)24805);
			@@@var_0_bool:AddReply((int)523572, (int)-1, (int)24806);
			return 0;
		}
		var_136_bool = var_49_float == (int)24807;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_3669(var_50_int, "Fear");
			@@@var_0_bool:SetMessage((int)523573);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)523574, (int)24809, (int)24808);
			@@@var_0_bool:AddReply((int)523576, (int)24811, (int)24810);
			return 0;
		}
		var_146_bool = var_49_float == (int)24811;
		if(var_146_bool != 0) {
			var_147_string = "";
			func_3669(var_50_int, "Rage");
			@@@var_0_bool:SetMessage((int)523577);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)523578, (int)24809, (int)24812);
			return 0;
		}
		var_153_bool = var_49_float == (int)24809;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_3669(var_50_int, "Sly");
			@@@var_0_bool:SetMessage((int)523575);
			@@@var_0_bool:ClearReplies();
			var_156_bool = 0; var_157_object = Obj();
			var_157_object = var_1_object;
			func_5573(var_157_object);
			var_162_bool = var_156_bool == 0; //@nz
			if(var_162_bool != 0) {
				@@@var_0_bool:AddReply((int)522078, (int)-1, (int)23247);
			}
			var_166_bool = 0; var_167_object = Obj();
			var_167_object = var_1_object;
			func_5573(var_167_object);
			if(var_166_bool != 0) {
				@@@var_0_bool:AddReply((int)522087, (int)24814, (int)23256);
			}
			return 0;
		}
		var_172_bool = var_49_float == (int)24814;
		if(var_172_bool != 0) {
			var_173_string = "";
			func_3669(var_50_int, "Sly");
			@@@var_0_bool:SetMessage((int)523580);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)523582, (int)24819, (int)24817);
			@@@var_0_bool:AddReply((int)523583, (int)-1, (int)24818);
			return 0;
		}
		var_182_bool = var_49_float == (int)24819;
		if(var_182_bool != 0) {
			var_183_string = "";
			func_3669(var_50_int, "Sly");
			@@@var_0_bool:SetMessage((int)523584);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)523585, (int)-1, (int)24820);
			@@@var_0_bool:AddReply((int)523586, (int)-1, (int)24821);
			return 0;
		}
		var_192_bool = var_49_float == (int)24801;
		if(var_192_bool != 0) {
			var_193_string = "";
			func_3669(var_50_int, "Sly");
			@@@var_0_bool:SetMessage((int)523567);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)523568, (int)24822, (int)24802);
			return 0;
		}
		var_199_bool = var_49_float == (int)24822;
		if(var_199_bool != 0) {
			var_200_string = "";
			func_3669(var_50_int, "Sly");
			@@@var_0_bool:SetMessage((int)523587);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)523588, (int)24824, (int)24823);
			@@@var_0_bool:AddReply((int)523595, (int)-1, (int)24830);
			return 0;
		}
		var_209_bool = var_49_float == (int)24824;
		if(var_209_bool != 0) {
			var_210_string = "";
			func_3669(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)523589);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)523590, (int)24826, (int)24825);
			return 0;
		}
		var_216_bool = var_49_float == (int)24826;
		if(var_216_bool != 0) {
			var_217_string = "";
			func_3669(var_50_int, "Untrust");
			@@@var_0_bool:SetMessage((int)523591);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)523592, (int)24828, (int)24827);
			@@@var_0_bool:AddReply((int)523594, (int)-1, (int)24829);
			return 0;
		}
		var_226_bool = var_49_float == (int)24828;
		if(var_226_bool != 0) {
			var_227_string = "";
			func_3669(var_50_int, "Sly");
			@@@var_0_bool:SetMessage((int)523593);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)523596, (int)-1, (int)24831);
			@@@var_0_bool:AddReply((int)523597, (int)-1, (int)24832);
			return 0;
		}
		var_3_object = true;
		var_235_bool = 0;
		func_5210(var_235_bool);
		if(var_235_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xe6c";
	
}


task_19_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_int, var_42_int, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_float, var_49_float, var_50_int)
{
	if((int)1 != 0) {
		func_4953();
		var_54_bool = var_49_float == (int)36906;
		if(var_54_bool != 0) {
			var_55_string = "";
			func_4152(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)535231);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)535232, (int)36953, (int)36907);
			@@@var_0_bool:AddReply((int)535233, (int)-1, (int)36908);
			@@@var_0_bool:AddReply((int)535280, (int)-1, (int)36956);
			return 0;
		}
		var_83_bool = var_49_float == (int)36953;
		if(var_83_bool != 0) {
			var_84_string = "";
			func_4152(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)535277);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)535278, (int)36957, (int)36954);
			@@@var_0_bool:AddReply((int)535279, (int)36957, (int)36955);
			return 0;
		}
		var_93_bool = var_49_float == (int)36957;
		if(var_93_bool != 0) {
			var_94_string = "";
			func_4152(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)535281);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)535282, (int)-1, (int)36958);
			@@@var_0_bool:AddReply((int)535283, (int)-1, (int)36959);
			return 0;
		}
		var_3_object = true;
		var_102_bool = 0;
		func_5210(var_102_bool);
		if(var_102_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x104f";
	
}


task_21_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_int, var_47_int, var_48_float, var_49_float, var_50_int)
{
	if((int)1 != 0) {
		func_4953();
		var_54_bool = var_49_float == (int)42563;
		if(var_54_bool != 0) {
			var_55_string = "";
			func_4406(var_50_int, "Neutral");
			@@@var_0_bool:SetMessage((int)540554);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)540555, (int)-1, (int)42564);
			@@@var_0_bool:AddReply((int)540794, (int)-1, (int)42843);
			return 0;
		}
		var_3_object = true;
		var_79_bool = 0;
		func_5210(var_79_bool);
		if(var_79_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x114d";
	
}


task_22_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_float, var_47_float, var_48_int)
{
	func_5201();
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_22_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_float, var_47_float, var_48_int, var_49_object)
{
	var_50_bool = 0; var_51_bool = 0;
	IsOverrideActive(var_51_bool);
	var_52_bool = var_51_bool == 0; //@nz
	if(var_52_bool != 0) {
		EventDisable(0);
		var_53_bool = 0; var_54_object = Obj();
		var_49_object = var_54_object;
		func_4657(var_53_bool, var_54_object);
		EventEnable(0);
		var_67_object = Obj();
		var_49_object = var_67_object;
		func_5904(var_67_object);
	}
	return 2;
}


event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_float, var_47_float, var_48_int)
{
	return 0;
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_float, var_47_float, var_48_int)
{
	var_49_bool = GlobalVars[2];
	GlobalVars[2] = (bool)0;
	func_4477(var_46_float, var_47_float, var_48_int);
	return 0;
}


func_0()
{
	
Label_0:
	Hold();
	var_91_bool = 0;
	func_4677(var_91_bool);
	var_92_bool = var_91_bool == 0; //@nz
	if(var_92_bool == 1) goto Label_0;
	return 0;
}


func_5633(var_381_bool)
{
	var_383_int = 0; var_384_string = "";
	func_4994(var_383_int, "oob1MladVlad2");
	var_386_bool = var_383_int == (int)0;
	if(var_386_bool != 0) {
		var_381_bool = 1;
		return 0;
	}
	var_381_bool = 0;
	return 0;
}


func_5120(var_57_object, var_58_string, var_59_string)
{
	var_64_object = Obj(); var_65_bool = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_object = Obj(); var_69_bool = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0);
	var_72_bool = var_57_object == 0; //@nz
	if(var_72_bool != 0) {
		return 8;
	}
	GetSceneByName(var_68_object, var_58_string);
	@@var_68_object:GetLocator(var_59_string, var_69_bool, var_70_cvector, var_71_cvector);
	var_73_bool = var_69_bool == 0; //@nz
	if(var_73_bool != 0) {
		var_75_int = "Teleport location '" + var_59_string;
		var_77_int = var_75_int + "' not found in scene '";
		var_78_int = var_77_int + var_58_string;
		var_80_int = var_78_int + "'";
		Trace(var_80_int);
	} else {
		Teleport(var_57_object, var_68_object, var_70_cvector, var_71_cvector);
	}
	return 8;
	
}
EMIT "Stack[-4] = 0";


func_4620(var_113_cvector)
{
	var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0);
	GetPosition(var_115_cvector);
	var_115_cvector = var_113_cvector;
	return 2;
}


func_5645(var_428_bool)
{
	var_430_int = 0; var_431_string = "";
	func_4994(var_430_int, "b2MladVladBurahHomeTalk");
	var_433_bool = var_430_int == (int)1;
	if(var_433_bool != 0) {
		var_428_bool = 1;
		return 0;
	}
	var_428_bool = 0;
	return 0;
}


func_13(var_0_bool, var_132_bool, var_133_cvector, var_134_cvector)
{
	var_136_bool = 0; var_137_bool = 0;
	var_0_bool = true;
	SetTimer((int)21, (float)0.5);
	
Label_19:
	var_140_bool = 0; var_141_cvector = CVector(0,0,0);
	var_133_cvector = var_141_cvector;
	func_4647(var_140_bool, var_141_cvector);
	var_150_bool = var_140_bool == 0; //@nz
	if(var_150_bool != 0) {
		goto Label_19;
	}
	MovePoint(var_133_cvector, (bool)0, var_137_bool);
	var_152_bool = var_137_bool;
	if(var_152_bool != 0) {
	} else {
		goto Label_19;
	}
	KillTimer((int)20);
	KillTimer((int)21);
	var_0_bool = false;
	WaitForAnimEnd(var_137_bool);
	var_155_bool = var_137_bool == 0; //@nz
	if(var_155_bool != 0) {
		var_132_bool = 0;
		return 2;
	}
	var_156_float = GetByIndex(var_134_cvector, 0);
	var_157_float = GetByIndex(var_134_cvector, 2);
	Rotate(var_156_float, var_157_float, var_137_bool);
	var_158_bool = var_137_bool == 0; //@nz
	if(var_158_bool != 0) {
		var_132_bool = 0;
		return 2;
	}
	var_132_bool = 1;
	return 2;
	
}


func_2575(var_0_bool, var_579_int, var_580_object)
{
	var_582_object = Obj(); var_583_bool = 0; var_584_int = 0; var_585_bool = 0; var_586_object = Obj(); var_587_bool = 0; var_588_int = 0; var_589_bool = 0;
	var_0_bool = var_580_object;
	var_590_bool = 0; var_591_object = Obj(); var_592_float = 0;
	var_580_object = var_591_object;
	func_4682(var_590_bool, var_591_object, (float)70.0);
	var_593_bool = var_590_bool == 0; //@nz
	if(var_593_bool != 0) {
		var_579_int = -2;
		return 8;
	}
	CreateDialog(var_586_object);
	var_594_int = 0;
	func_5204(var_594_int);
	@@var_586_object:SetNPCName(var_594_int);
	var_595_int = 0;
	func_5202(var_595_int);
	@@var_586_object:SetNPCDescription(var_595_int);
	var_596_string = "";
	func_5206(var_596_string);
	@@var_586_object:SetPhoto(var_596_string);
	var_597_string = "";
	func_5208(var_597_string);
	@@var_586_object:SetPhoto2(var_597_string);
	var_598_int = 0;
	func_5887(var_598_int);
	@@var_586_object:SetPlayerName(var_598_int);
	IsOverrideActive(var_587_bool);
	var_599_bool = var_587_bool;
	if(var_599_bool != 0) {
		var_579_int = -2;
		return 8;
	}
	DoDialog(var_586_object);
	var_600_bool = 0; var_601_object = Obj();
	func_4960(Obj());
	var_602_object = var_601_object;
	func_4769(var_600_bool, var_601_object);
	var_603_object = Obj(); var_604_object = Obj();
	var_580_object = var_603_object;
	var_586_object = var_604_object;
	TaskCall(13);
	func_2656(var_605_object, var_606_object, var_607_string, var_608_bool, var_603_object, var_604_object);
	TaskReturn();
	@@var_586_object:IsDialogEnd(var_589_bool);
	
Label_2638:
	var_633_bool = var_589_bool == 0; //@nz
	if(var_633_bool != 0) {
		sync();
		@@var_586_object:IsDialogEnd(var_589_bool);
		goto Label_2638;
	}
	var_580_object = Obj();
	func_4751();
	StopDialog(var_586_object);
	@@var_586_object:GetReturnValue((int)-1);
	var_588_int = var_579_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4625(var_61_float, var_62_object)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0);
	GetPosition(var_66_cvector);
	@@var_62_object:GetPosition(var_67_cvector);
	var_68_cvector = var_67_cvector - var_66_cvector;
	var_61_float = var_68_cvector | var_68_cvector;
	return 6;
}


func_3601(var_0_bool, var_1_object, var_2_object, var_3_object, var_762_object, var_763_object)
{
	var_0_bool = var_763_object;
	var_1_object = var_762_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_769_string = "";
		func_3669(var_763_object, "Fear");
		@@@var_0_bool:SetMessage((int)522079);
		@@@var_0_bool:ClearReplies();
		var_778_bool = 0; var_779_object = Obj();
		var_779_object = var_1_object;
		func_5585(var_779_object);
		if(var_778_bool != 0) {
			@@@var_0_bool:AddReply((int)523566, (int)24801, (int)24800);
		}
		@@@var_0_bool:AddReply((int)523569, (int)24804, (int)24803);
		@@@var_0_bool:AddReply((int)522080, (int)-1, (int)23249);
		goto Label_3639;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xe15";
	}
Label_3639:
	var_793_bool = 0;
	func_5210(var_793_bool);
	if(var_793_bool != 0) {

	Label_3643:
		lshWaitForAnimEnd();
		var_794_object = var_3_object;
		if(var_794_object != 0) {
		} else {
			var_795_string = "";
			var_795_string = var_2_object;
			func_4907(var_795_string);
			goto Label_3643;
	}
		PlayAnimation("all", "idle");

	Label_3658:
		WaitForAnimEnd();
		var_798_object = var_3_object;
		if(var_798_object != 0) {
			goto Label_3668;
		}
		PlayAnimation("all", "idle");
		goto Label_3658;
	}
	goto Label_3668;
	
Label_3668:
	return 0;
	
}


func_5144(var_72_float)
{
	var_73_float = 0; var_74_float = 0;
	GetGameTime(var_74_float);
	var_74_float = var_72_float;
	return 2;
}


func_5657(var_469_bool)
{
	var_471_int = 0; var_472_string = "";
	func_4994(var_471_int, "oob2MladVlad1");
	var_474_bool = var_471_int == (int)0;
	if(var_474_bool != 0) {
		var_469_bool = 1;
		return 0;
	}
	var_469_bool = 0;
	return 0;
}


func_4633(var_60_object)
{
	var_61_object = Obj(); var_62_object = Obj();
	FindActor(var_62_object, "player");
	var_62_object = var_60_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1049(var_0_bool, var_1_object, var_2_object, var_3_object, var_421_object, var_422_object)
{
	var_0_bool = var_422_object;
	var_1_object = var_421_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_428_bool = 0; var_429_object = Obj();
		var_429_object = var_1_object;
		func_5645(var_429_object);
		var_434_bool = var_428_bool == 0; //@nz
		if(var_434_bool != 0) {
			var_435_object = Obj(); var_436_object = Obj();
			var_435_object = var_1_object;
			var_436_object = var_0_bool;
			func_5459();
			var_443_string = "";
			func_1152(var_422_object, "Neutral");
			@@@var_0_bool:SetMessage((int)520000);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520001, (int)21183, (int)21182);
			@@@var_0_bool:AddReply((int)520017, (int)21183, (int)21199);
		} else {
				var_466_string = "";
				func_1152(var_422_object, "Neutral");
				@@@var_0_bool:SetMessage((int)520019);
				@@@var_0_bool:ClearReplies();
				var_468_bool = 0;
				var_468_bool = 0;
				var_469_bool = 0; var_470_object = Obj();
				var_470_object = var_1_object;
				func_5657(var_470_object);
				if(var_469_bool != 0) {
					var_475_bool = 0; var_476_object = Obj();
					var_476_object = var_1_object;
					func_5645(var_476_object);
					if(var_475_bool != 0) {
						var_468_bool = 1;
					}
				}
				if(var_468_bool != 0) {
					@@@var_0_bool:AddReply((int)520020, (int)21205, (int)21204);
				}
				@@@var_0_bool:AddReply((int)520030, (int)-1, (int)21214);
				goto Label_1122;
		}
	}
Label_1122:
	var_458_bool = 0;
	func_5210(var_458_bool);
	if(var_458_bool != 0) {

	Label_1126:
		lshWaitForAnimEnd();
		var_459_object = var_3_object;
		if(var_459_object != 0) {
		} else {
			var_460_string = "";
			var_460_string = var_2_object;
			func_4907(var_460_string);
			goto Label_1126;
	}
		PlayAnimation("all", "idle");

	Label_1141:
		WaitForAnimEnd();
		var_463_object = var_3_object;
		if(var_463_object != 0) {
			goto Label_1151;
		}
		PlayAnimation("all", "idle");
		goto Label_1141;

	}
	goto Label_1151;
	
Label_1151:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x41d";


func_5149(var_197_int)
{
	var_198_float = 0; var_199_float = 0;
	GetGameTime(var_199_float);
	var_201_int = 0;
	var_201_int = var_199_float / (int)24;
	var_197_int = (int)1 + var_201_int;
	return 2;
}


func_4640(var_135_object, var_136_string, var_137_int)
{
	var_138_int = 0; var_139_int = 0;
	@@var_135_object:GetProperty(var_136_string, var_139_int);
	var_140_int = var_139_int + var_137_int;
	@@var_135_object:SetProperty(var_136_string, var_140_int);
	return 2;
}


func_5669(var_518_bool)
{
	var_520_int = 0; var_521_string = "";
	func_4994(var_520_int, "oob5MladVlad1");
	var_523_bool = var_520_int == (int)0;
	if(var_523_bool != 0) {
		var_518_bool = 1;
		return 0;
	}
	var_518_bool = 0;
	return 0;
}


func_5158(var_296_bool, var_297_int)
{
	var_298_int = 0;
	func_5149(var_298_int);
	var_296_bool = var_298_int == var_297_int;
	return 0;
}


func_4647(var_140_bool, var_141_cvector)
{
	var_142_cvector = CVector(0,0,0); var_143_cvector = CVector(0,0,0); var_144_bool = 0; var_145_cvector = CVector(0,0,0); var_146_cvector = CVector(0,0,0); var_147_bool = 0;
	GetPosition(var_145_cvector);
	var_146_cvector = var_141_cvector - var_145_cvector;
	var_148_float = GetByIndex(var_146_cvector, 0);
	var_149_float = GetByIndex(var_146_cvector, 2);
	Rotate(var_148_float, var_149_float, var_147_bool);
	var_147_bool = var_140_bool;
	return 6;
}


func_5164(var_201_string, var_202_int)
{
	var_203_string = ""; var_204_string = "";
	var_205_int = var_202_int;
	if(var_205_int != 0) {
		"idle" = "idle" + var_202_int;
	}
	var_204_string = var_201_string;
	return 2;
}


func_4657(var_53_bool, var_54_object)
{
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0);
	@@var_54_object:GetPosition(var_56_cvector);
	var_57_bool = 0; var_58_cvector = CVector(0,0,0);
	var_56_cvector = var_58_cvector;
	func_4647(var_57_bool, var_58_cvector);
	var_57_bool = var_53_bool;
	return 2;
}


func_5681(var_554_bool)
{
	var_556_int = 0; var_557_string = "";
	func_4994(var_556_int, "b5q02");
	var_559_bool = var_556_int == (int)0;
	if(var_559_bool != 0) {
		var_554_bool = 1;
		return 0;
	}
	var_554_bool = 0;
	return 0;
}


func_5171(var_195_int)
{
	var_196_int = 0; var_197_bool = 0; var_198_int = 0; var_199_bool = 0;
	var_198_int = 0;
	
Label_5173:
	var_201_string = ""; var_202_int = 0;
	var_198_int = var_202_int;
	func_5164(var_201_string, var_202_int);
	HasAnimation(var_199_bool, "all", var_201_string);
	var_206_bool = var_199_bool == 0; //@nz
	if(var_206_bool != 0) {
	} else {
		var_198_int = var_198_int + (int)1;
		goto Label_5173;
	}
	var_198_int = var_195_int;
	return 4;
	
}


func_4152(var_2_object, var_839_string)
{
	var_840_bool = 0;
	func_5210(var_840_bool);
	var_841_bool = var_840_bool == 0; //@nz
	if(var_841_bool != 0) {
		return 0;
	}
	var_842_bool = var_839_string == var_2_object;
	if(var_842_bool != 0) {
		return 0;
	}
	var_843_string = ""; var_844_bool = 0;
	var_839_string = var_843_string;
	var_846_bool = var_839_string == "";
	if(var_846_bool != 0) {
		var_844_bool = 0;
	} else {
		var_844_bool = 1;
	}
	func_4923(var_843_string, var_844_bool);
	var_2_object = var_839_string;
	return 0;
	
}


func_4666(var_79_object)
{
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0);
	@@var_79_object:GetPosition(var_83_cvector);
	GetPosition(var_84_cvector);
	var_85_cvector = var_83_cvector - var_84_cvector;
	var_86_float = GetByIndex(var_85_cvector, 0);
	var_87_float = GetByIndex(var_85_cvector, 2);
	RotateAsync(var_86_float, var_87_float);
	return 6;
}


func_5693(var_563_bool)
{
	var_565_int = 0; var_566_string = "";
	func_4994(var_565_int, "b5q02");
	var_568_bool = var_565_int == (int)2;
	if(var_568_bool != 0) {
		var_563_bool = 1;
		return 0;
	}
	var_563_bool = 0;
	return 0;
}


func_5188(var_77_string, var_78_int)
{
	var_80_bool = var_78_int == (int)0;
	if(var_80_bool != 0) {
		var_82_string = GlobalVars[0];
		var_77_string = "pt_" + var_82_string;
	} else {
		var_84_string = GlobalVars[0];
		var_85_int = "pt_" + var_84_string;
		var_77_string = var_85_int + var_78_int;
	}
	return 0;
	
}


func_4677(var_87_bool)
{
	var_88_bool = 0; var_89_bool = 0;
	IsLoaded(var_89_bool);
	var_89_bool = var_87_bool;
	return 2;
}


func_5705()
{
	var_65_object = Obj(); var_66_object = Obj();
	CreateDiaryEntry(var_66_object, (int)315, (int)1, (int)522057);
	var_70_bool = 0; var_71_object = Obj(); var_72_int = 0;
	var_66_object = var_71_object;
	func_5809(var_70_bool, var_71_object, (int)313);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4682(var_81_bool, var_82_object, var_83_float)
{
	var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_bool = 0; var_92_bool = 0; var_93_float = 0; var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_bool = 0; var_101_bool = 0;
	@@var_82_object:GetPosition(var_94_cvector);
	@@var_82_object:GetEyesHeight(var_93_float);
	var_102_float = GetByIndex(var_94_cvector, 1);
	var_102_float = var_102_float + var_93_float;
	SetByIndex(var_94_cvector, 1) = var_102_float;
	GetPosition(var_95_cvector);
	GetEyesHeight(var_93_float);
	var_103_float = GetByIndex(var_95_cvector, 1);
	var_103_float = var_103_float + var_93_float;
	SetByIndex(var_95_cvector, 1) = var_103_float;
	var_96_cvector = var_94_cvector - var_95_cvector;
	var_104_float = GetByIndex(var_96_cvector, 1);
	SetByIndex(var_96_cvector, 1) = (float)0;
	var_105_int = var_96_cvector | var_96_cvector;
	var_106_float = sqrt(var_105_int);
	var_96_cvector = var_96_cvector / var_106_float;
	var_97_cvector = -var_96_cvector;
	var_107_float = var_96_cvector * var_83_float;
	var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0);
	var_109_cvector = var_97_cvector ^ CVector(0.0, 1.0, 0.0);
	func_4966(var_108_cvector, var_109_cvector);
	var_117_float = var_108_cvector * (int)25;
	var_118_int = var_107_float + var_117_float;
	var_98_cvector = var_118_int - CVector(0.0, 10.0, 0.0);
	var_99_cvector = var_95_cvector + var_98_cvector;
	IsOverrideActive(var_100_bool);
	var_120_bool = var_100_bool;
	if(var_120_bool != 0) {
		var_81_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_99_cvector, var_97_cvector, (bool)1);
	var_122_float = GetByIndex(var_98_cvector, 0);
	var_123_float = GetByIndex(var_98_cvector, 2);
	Rotate(var_122_float, var_123_float);
	var_124_bool = 0;
	func_5210(var_124_bool);
	if(var_124_bool != 0) {
	} else {
		HasAnimationTrack(var_101_bool, "head");
		var_126_bool = var_101_bool;
		if(var_126_bool == 0) goto Label_4745;
		LookAsyncCamera("head");
	}
Label_4745:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_81_bool = 1;
	return 18;
	
}


func_5202(var_130_int)
{
	var_130_int = 515547;
	return 0;
}


func_5204(var_129_int)
{
	var_129_int = 502872;
	return 0;
}


func_3669(var_2_object, var_769_string)
{
	var_770_bool = 0;
	func_5210(var_770_bool);
	var_771_bool = var_770_bool == 0; //@nz
	if(var_771_bool != 0) {
		return 0;
	}
	var_772_bool = var_769_string == var_2_object;
	if(var_772_bool != 0) {
		return 0;
	}
	var_773_string = ""; var_774_bool = 0;
	var_769_string = var_773_string;
	var_776_bool = var_769_string == "";
	if(var_776_bool != 0) {
		var_774_bool = 0;
	} else {
		var_774_bool = 1;
	}
	func_4923(var_773_string, var_774_bool);
	var_2_object = var_769_string;
	return 0;
	
}


func_5206(var_131_string)
{
	var_131_string = "ui/NPC_MladVlad.png";
	return 0;
}


func_5718()
{
	var_87_object = Obj(); var_88_object = Obj();
	CreateDiaryEntry(var_88_object, (int)249, (int)2, (int)520665);
	var_92_bool = 0; var_93_object = Obj(); var_94_int = 0;
	var_88_object = var_93_object;
	func_5809(var_92_bool, var_93_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5208(var_132_string)
{
	var_132_string = "ui/NPC_MladVlad_b.png";
	return 0;
}


func_5210(var_124_bool)
{
	var_124_bool = 1;
	return 0;
}


func_5212(var_76_object)
{
	var_77_object = Obj(); var_78_string = ""; var_79_float = 0;
	func_5837(Obj());
	var_80_object = var_77_object;
	func_5854(var_77_object, "pt_map_burah_home", (float)2);
	var_100_object = Obj();
	func_5837(var_100_object);
	@@var_76_object:ShowMap(var_100_object);
	return 0;
}


func_2656(var_0_bool, var_1_object, var_2_object, var_3_object, var_603_object, var_604_object)
{
	var_0_bool = var_604_object;
	var_1_object = var_603_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_610_string = "";
		func_2714(var_604_object, "Untrust");
		@@@var_0_bool:SetMessage((int)521202);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)521203, (int)22402, (int)22400);
		@@@var_0_bool:AddReply((int)521204, (int)-1, (int)22401);
		goto Label_2684;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xa64";
	}
Label_2684:
	var_625_bool = 0;
	func_5210(var_625_bool);
	if(var_625_bool != 0) {

	Label_2688:
		lshWaitForAnimEnd();
		var_626_object = var_3_object;
		if(var_626_object != 0) {
		} else {
			var_627_string = "";
			var_627_string = var_2_object;
			func_4907(var_627_string);
			goto Label_2688;
	}
		PlayAnimation("all", "idle");

	Label_2703:
		WaitForAnimEnd();
		var_630_object = var_3_object;
		if(var_630_object != 0) {
			goto Label_2713;
		}
		PlayAnimation("all", "idle");
		goto Label_2703;
	}
	goto Label_2713;
	
Label_2713:
	return 0;
	
}


func_5731()
{
	var_188_object = Obj(); var_189_object = Obj();
	CreateDiaryEntry(var_189_object, (int)252, (int)2, (int)520668);
	var_193_bool = 0; var_194_object = Obj(); var_195_int = 0;
	var_189_object = var_194_object;
	func_5809(var_193_bool, var_194_object, (int)249);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1636(var_0_bool, var_487_int, var_488_object)
{
	var_490_object = Obj(); var_491_bool = 0; var_492_int = 0; var_493_bool = 0; var_494_object = Obj(); var_495_bool = 0; var_496_int = 0; var_497_bool = 0;
	var_0_bool = var_488_object;
	var_498_bool = 0; var_499_object = Obj(); var_500_float = 0;
	var_488_object = var_499_object;
	func_4682(var_498_bool, var_499_object, (float)70.0);
	var_501_bool = var_498_bool == 0; //@nz
	if(var_501_bool != 0) {
		var_487_int = -2;
		return 8;
	}
	CreateDialog(var_494_object);
	var_502_int = 0;
	func_5204(var_502_int);
	@@var_494_object:SetNPCName(var_502_int);
	var_503_int = 0;
	func_5202(var_503_int);
	@@var_494_object:SetNPCDescription(var_503_int);
	var_504_string = "";
	func_5206(var_504_string);
	@@var_494_object:SetPhoto(var_504_string);
	var_505_string = "";
	func_5208(var_505_string);
	@@var_494_object:SetPhoto2(var_505_string);
	var_506_int = 0;
	func_5887(var_506_int);
	@@var_494_object:SetPlayerName(var_506_int);
	IsOverrideActive(var_495_bool);
	var_507_bool = var_495_bool;
	if(var_507_bool != 0) {
		var_487_int = -2;
		return 8;
	}
	DoDialog(var_494_object);
	var_508_bool = 0; var_509_object = Obj();
	func_4960(Obj());
	var_510_object = var_509_object;
	func_4769(var_508_bool, var_509_object);
	var_511_object = Obj(); var_512_object = Obj();
	var_488_object = var_511_object;
	var_494_object = var_512_object;
	TaskCall(9);
	func_1717(var_513_object, var_514_object, var_515_string, var_516_bool, var_511_object, var_512_object);
	TaskReturn();
	@@var_494_object:IsDialogEnd(var_497_bool);
	
Label_1699:
	var_575_bool = var_497_bool == 0; //@nz
	if(var_575_bool != 0) {
		sync();
		@@var_494_object:IsDialogEnd(var_497_bool);
		goto Label_1699;
	}
	var_488_object = Obj();
	func_4751();
	StopDialog(var_494_object);
	@@var_494_object:GetReturnValue((int)-1);
	var_496_int = var_487_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5228()
{
	SetVariable("oob1MladVlad1", (int)1);
	return 0;
}


func_5744()
{
	var_110_object = Obj(); var_111_object = Obj();
	CreateDiaryEntry(var_111_object, (int)250, (int)2, (int)520666);
	var_115_bool = 0; var_116_object = Obj(); var_117_int = 0;
	var_111_object = var_116_object;
	func_5809(var_115_bool, var_116_object, (int)249);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5234()
{
	var_63_object = Obj(); var_64_object = Obj();
	func_5837(Obj());
	var_65_object = var_64_object;
	var_76_float = 0;
	func_5144(var_76_float);
	@@var_64_object:AddMark("b1MladVladGotoGrif", "pt_map_grif", (int)3, (int)520047, var_76_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5757()
{
	var_59_object = Obj(); var_60_object = Obj();
	CreateDiaryEntry(var_60_object, (int)293, (int)2, (int)521491);
	var_64_bool = 0; var_65_object = Obj(); var_66_int = 0;
	var_60_object = var_65_object;
	func_5809(var_64_bool, var_65_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1152(var_2_object, var_443_string)
{
	var_444_bool = 0;
	func_5210(var_444_bool);
	var_445_bool = var_444_bool == 0; //@nz
	if(var_445_bool != 0) {
		return 0;
	}
	var_446_bool = var_443_string == var_2_object;
	if(var_446_bool != 0) {
		return 0;
	}
	var_447_string = ""; var_448_bool = 0;
	var_443_string = var_447_string;
	var_450_bool = var_443_string == "";
	if(var_450_bool != 0) {
		var_448_bool = 0;
	} else {
		var_448_bool = 1;
	}
	func_4923(var_447_string, var_448_bool);
	var_2_object = var_443_string;
	return 0;
	
}


func_5250()
{
	SetVariable("oob1MladVlad2", (int)1);
	return 0;
}


func_5256()
{
	var_57_object = Obj(); var_58_object = Obj();
	SetVariable("b2MladVladBurahHomeTalk", (int)1);
	func_5837(Obj());
	var_61_object = var_58_object;
	var_72_float = 0;
	func_5144(var_72_float);
	@@var_58_object:AddMark("b2BurahHome", "pt_map_burah_home", (int)3, (int)520460, var_72_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5770()
{
	var_108_object = Obj(); var_109_object = Obj();
	CreateDiaryEntry(var_109_object, (int)296, (int)2, (int)521494);
	var_113_bool = 0; var_114_object = Obj(); var_115_int = 0;
	var_109_object = var_114_object;
	func_5809(var_113_bool, var_114_object, (int)293);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4751()
{
	var_288_bool = 0; var_289_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_291_bool = 0;
	func_5210(var_291_bool);
	if(var_291_bool != 0) {
	} else {
		HasAnimationTrack(var_289_bool, "head");
		var_293_bool = var_289_bool;
		if(var_293_bool == 0) goto Label_4768;
		UnlookAsync("head");
	}
Label_4768:
	return 2;
	
}


func_145()
{
	Stop();
	return 0;
}


func_148(var_75_object)
{
	var_76_bool = 0; var_77_bool = 0;
	WaitForAnimEnd(var_77_bool);
	var_78_bool = var_77_bool == 0; //@nz
	if(var_78_bool != 0) {
		return 2;
	}
	var_79_object = Obj();
	var_75_object = var_79_object;
	func_4666(var_79_object);
	Sleep((int)6);
	return 2;
}


func_5783()
{
	var_82_object = Obj(); var_83_object = Obj();
	CreateDiaryEntry(var_83_object, (int)294, (int)2, (int)521492);
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0;
	var_83_object = var_88_object;
	func_5809(var_87_bool, var_88_object, (int)293);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2714(var_2_object, var_610_string)
{
	var_611_bool = 0;
	func_5210(var_611_bool);
	var_612_bool = var_611_bool == 0; //@nz
	if(var_612_bool != 0) {
		return 0;
	}
	var_613_bool = var_610_string == var_2_object;
	if(var_613_bool != 0) {
		return 0;
	}
	var_614_string = ""; var_615_bool = 0;
	var_610_string = var_614_string;
	var_617_bool = var_610_string == "";
	if(var_617_bool != 0) {
		var_615_bool = 0;
	} else {
		var_615_bool = 1;
	}
	func_4923(var_614_string, var_615_bool);
	var_2_object = var_610_string;
	return 0;
	
}


func_5276()
{
	var_103_string = ""; var_104_bool = 0;
	func_5021("burah_home@door1", (bool)0);
	return 0;
}


func_4769(var_142_bool, var_143_object)
{
	var_147_int = 0; var_148_int = 0; var_149_int = 0; var_150_int = 0;
	GetVariable("voice_common", var_149_int);
	var_152_int = var_149_int;
	if(var_152_int != 0) {
		var_153_bool = 0; var_154_object = Obj();
		var_143_object = var_154_object;
		func_4827(var_153_bool, var_154_object);
		var_183_bool = var_153_bool == 0; //@nz
		if(var_183_bool != 0) {
			var_184_bool = 0; var_185_object = Obj();
			var_143_object = var_185_object;
			func_4864(var_184_bool, var_185_object);
			var_219_bool = var_184_bool == 0; //@nz
			if(var_219_bool != 0) {
				var_142_bool = 0;
				return 4;
			}
		}
		irand(var_150_int, (int)2);
		var_221_int = var_150_int;
		if(var_221_int != 0) {
			var_224_int = var_149_int + (int)1;
			var_226_int = var_224_int % (int)3;
			SetVariable("voice_common", var_226_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_229_bool = 0; var_230_object = Obj();
		var_143_object = var_230_object;
		func_4864(var_229_bool, var_230_object);
		var_231_bool = var_229_bool == 0; //@nz
		if(var_231_bool != 0) {
			var_232_bool = 0; var_233_object = Obj();
			var_143_object = var_233_object;
			func_4827(var_232_bool, var_233_object);
			var_234_bool = var_232_bool == 0; //@nz
			if(var_234_bool != 0) {
				var_142_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_4825;
	
Label_4825:
	var_142_bool = 1;
	return 4;
	
}


func_5283()
{
	SetVariable("oob2MladVlad1", (int)1);
	return 0;
}


func_5796(var_79_object)
{
	var_80_object = Obj(); var_81_object = Obj();
	GetDiaryRoot(var_81_object);
	var_82_bool = var_81_object == 0; //@nz
	if(var_82_bool != 0) {
		Trace("Can't retrieve diary root");
		var_79_object = 0;
		return 2;
	}
	var_81_object = var_79_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5289()
{
	var_139_object = Obj(); var_140_object = Obj();
	var_141_int = 0; var_142_string = "";
	func_4994(var_141_int, "b2TravnikMark");
	var_146_bool = var_141_int == (int)0;
	if(var_146_bool != 0) {
		SetVariable("b2TravnikMark", (int)1);
		func_5837(Obj());
		var_149_object = var_140_object;
		var_154_float = 0;
		func_5144(var_154_float);
		@@var_140_object:AddMark("b2Travnik1", "pt_map_gatherer1", (int)3, (int)520463, var_154_float);
		var_159_float = 0;
		func_5144(var_159_float);
		@@var_140_object:AddMark("b2Travnik2", "pt_map_gatherer2", (int)3, (int)520464, var_159_float);
		var_164_float = 0;
		func_5144(var_164_float);
		@@var_140_object:AddMark("b2Travnik3", "pt_map_gatherer3", (int)3, (int)520465, var_164_float);
		var_140_object = 0;
	}
	return 2;
}


func_4267(var_0_bool, var_868_int, var_869_object)
{
	var_871_object = Obj(); var_872_bool = 0; var_873_int = 0; var_874_bool = 0; var_875_object = Obj(); var_876_bool = 0; var_877_int = 0; var_878_bool = 0;
	var_0_bool = var_869_object;
	var_879_bool = 0; var_880_object = Obj(); var_881_float = 0;
	var_869_object = var_880_object;
	func_4682(var_879_bool, var_880_object, (float)70.0);
	var_882_bool = var_879_bool == 0; //@nz
	if(var_882_bool != 0) {
		var_868_int = -2;
		return 8;
	}
	CreateDialog(var_875_object);
	var_883_int = 0;
	func_5204(var_883_int);
	@@var_875_object:SetNPCName(var_883_int);
	var_884_int = 0;
	func_5202(var_884_int);
	@@var_875_object:SetNPCDescription(var_884_int);
	var_885_string = "";
	func_5206(var_885_string);
	@@var_875_object:SetPhoto(var_885_string);
	var_886_string = "";
	func_5208(var_886_string);
	@@var_875_object:SetPhoto2(var_886_string);
	var_887_int = 0;
	func_5887(var_887_int);
	@@var_875_object:SetPlayerName(var_887_int);
	IsOverrideActive(var_876_bool);
	var_888_bool = var_876_bool;
	if(var_888_bool != 0) {
		var_868_int = -2;
		return 8;
	}
	DoDialog(var_875_object);
	var_889_bool = 0; var_890_object = Obj();
	func_4960(Obj());
	var_891_object = var_890_object;
	func_4769(var_889_bool, var_890_object);
	var_892_object = Obj(); var_893_object = Obj();
	var_869_object = var_892_object;
	var_875_object = var_893_object;
	TaskCall(21);
	func_4348(var_894_object, var_895_object, var_896_string, var_897_bool, var_892_object, var_893_object);
	TaskReturn();
	@@var_875_object:IsDialogEnd(var_878_bool);
	
Label_4330:
	var_922_bool = var_878_bool == 0; //@nz
	if(var_922_bool != 0) {
		sync();
		@@var_875_object:IsDialogEnd(var_878_bool);
		goto Label_4330;
	}
	var_869_object = Obj();
	func_4751();
	StopDialog(var_875_object);
	@@var_875_object:GetReturnValue((int)-1);
	var_877_int = var_868_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5809(var_70_bool, var_71_object, var_72_int)
{
	var_73_object = Obj(); var_74_object = Obj(); var_75_int = 0; var_76_object = Obj(); var_77_object = Obj(); var_78_int = 0;
	func_5796(Obj());
	var_79_object = var_76_object;
	@@var_76_object:Find(var_72_int, var_77_object);
	var_84_bool = var_77_object == 0; //@nz
	if(var_84_bool != 0) {
		var_86_int = "Can't find diary parent with id: " + var_72_int;
		Trace(var_86_int);
		var_70_bool = 0;
		return 6;
	}
	@@var_77_object:AddChild(var_71_object);
	SendWorldWndMessage((int)7);
	@@var_71_object:GetCategory(var_78_int);
	SetDiarySection(var_78_int);
	var_70_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1717(var_0_bool, var_1_object, var_2_object, var_3_object, var_511_object, var_512_object)
{
	var_0_bool = var_512_object;
	var_1_object = var_511_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_518_bool = 0; var_519_object = Obj();
		var_519_object = var_1_object;
		func_5669(var_519_object);
		if(var_518_bool != 0) {
			var_524_object = Obj(); var_525_object = Obj();
			var_524_object = var_1_object;
			var_525_object = var_0_bool;
			func_5334();
			var_528_object = Obj(); var_529_object = Obj();
			var_528_object = var_1_object;
			var_529_object = var_0_bool;
			func_5488();
			var_532_string = "";
			func_1820(var_512_object, "Rage");
			@@@var_0_bool:SetMessage((int)520138);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520139, (int)21324, (int)21323);
		} else {
				var_552_string = "";
				func_1820(var_512_object, "Rage");
				@@@var_0_bool:SetMessage((int)520157);
				@@@var_0_bool:ClearReplies();
				var_554_bool = 0; var_555_object = Obj();
				var_555_object = var_1_object;
				func_5681(var_555_object);
				if(var_554_bool != 0) {
					@@@var_0_bool:AddReply((int)520158, (int)21346, (int)21345);
				}
				var_563_bool = 0; var_564_object = Obj();
				var_564_object = var_1_object;
				func_5693(var_564_object);
				if(var_563_bool != 0) {
					@@@var_0_bool:AddReply((int)520164, (int)21352, (int)21351);
				}
				@@@var_0_bool:AddReply((int)520180, (int)-1, (int)21370);
				goto Label_1790;
		}
	}
Label_1790:
	var_544_bool = 0;
	func_5210(var_544_bool);
	if(var_544_bool != 0) {

	Label_1794:
		lshWaitForAnimEnd();
		var_545_object = var_3_object;
		if(var_545_object != 0) {
		} else {
			var_546_string = "";
			var_546_string = var_2_object;
			func_4907(var_546_string);
			goto Label_1794;
	}
		PlayAnimation("all", "idle");

	Label_1809:
		WaitForAnimEnd();
		var_549_object = var_3_object;
		if(var_549_object != 0) {
			goto Label_1819;
		}
		PlayAnimation("all", "idle");
		goto Label_1809;

	}
	goto Label_1819;
	
Label_1819:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x6b9";


func_193()
{
	StopGroup0();
	StopAnimation();
	return 0;
}


func_198(var_159_int)
{
	var_160_string = ""; var_161_bool = 0; var_162_string = ""; var_163_int = 0; var_164_int = 0; var_165_int = 0; var_166_int = 0; var_167_string = ""; var_168_bool = 0; var_169_string = ""; var_170_int = 0; var_171_int = 0; var_172_int = 0; var_173_int = 0;
	var_174_int = var_159_int;
	if(var_174_int != 0) {
		var_167_string = "ptidle" + var_159_int;
	} else {
			var_167_string = "ptidle";
	}
	HasProperty(var_167_string, var_168_bool);
	var_176_bool = var_168_bool;
	if(var_176_bool != 0) {
		GetProperty(var_167_string, var_169_string);
		var_177_int = 0; var_178_string = "";
		var_169_string = var_178_string;
		func_264(var_177_int, var_178_string);
		var_177_int = var_170_int;
		irand(var_171_int, var_170_int);
		var_192_string = ""; var_193_string = ""; var_194_int = 0;
		var_169_string = var_193_string;
		var_171_int = var_194_int;
		func_256(var_192_string, var_193_string, var_194_int);
		PlayAnimation("all", var_192_string);
		WaitForAnimEnd();
	} else {
		func_5171((int)0);
		var_195_int = var_172_int;
		var_208_int = var_172_int;
		if(var_208_int == 0) goto Label_246;
		irand(var_173_int, var_172_int);
		var_210_string = ""; var_211_int = 0;
		var_173_int = var_211_int;
		func_5164(var_210_string, var_211_int);
		PlayAnimation("all", var_210_string);
		WaitForAnimEnd();

	}
Label_246:
	return 14;
	
}


func_5837(var_61_object)
{
	var_62_object = Obj(); var_63_object = Obj(); var_64_object = Obj(); var_65_object = Obj();
	GetMainOutdoorScene(var_64_object);
	var_66_bool = var_64_object == 0; //@ne
	if(var_66_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_65_object = 0;
		var_65_object = var_61_object;
		return 4;
	}
	@@var_64_object:GetMap(var_65_object);
	var_65_object = var_61_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5334()
{
	SetVariable("oob5MladVlad1", (int)1);
	return 0;
}


func_4827(var_153_bool, var_154_object)
{
	var_155_string = ""; var_156_int = 0; var_157_bool = 0; var_158_int = 0; var_159_string = ""; var_160_string = ""; var_161_int = 0; var_162_bool = 0; var_163_int = 0; var_164_string = "";
	var_160_string = "c";
	var_161_int = 0;
	
Label_4830:
	if((int)1 != 0) {
		var_167_int = var_161_int + (int)1;
		var_168_int = var_160_string + var_167_int;
		@@var_154_object:HasProperty(var_168_int, var_162_bool);
		var_169_bool = var_162_bool == 0; //@nz
		if(var_169_bool != 0) {
		} else {
			var_161_int = var_161_int + (int)1;
			goto Label_4830;
		}
	}
	var_170_bool = var_161_int == 0; //@nz
	if(var_170_bool != 0) {
		var_153_bool = 0;
		return 10;
	}
	var_163_int = 0;
	var_172_bool = var_161_int > (int)1;
	if(var_172_bool != 0) {
		irand(var_163_int, var_161_int);
	}
	var_174_int = var_163_int + (int)1;
	var_175_int = var_160_string + var_174_int;
	@@var_154_object:GetProperty(var_175_int, var_164_string);
	var_176_bool = 0; var_177_string = "";
	var_164_string = var_177_string;
	func_4938(var_176_bool, var_177_string);
	var_176_bool = var_153_bool;
	return 10;
	
}


func_5340()
{
	SetVariable("b5q02", (int)1);
	func_5718();
	func_5744();
	var_118_object = Obj(); var_119_string = "";
	func_4999(var_118_object, "quest_b5_02");
	var_126_bool = 0; var_127_string = ""; var_128_string = "";
	func_5108(var_126_bool, "quest_b5_02", "place_prophet");
	var_132_bool = 0; var_133_string = ""; var_134_string = "";
	func_5108(var_132_bool, "quest_b5_02", "maze_start");
	return 0;
}


func_5854(var_77_object, var_78_string, var_79_float)
{
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_object = Obj(); var_84_bool = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_object = Obj(); var_88_bool = 0;
	GetMainOutdoorScene(var_87_object);
	var_89_bool = var_87_object == 0; //@ne
	if(var_89_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_87_object:GetLocator(var_78_string, var_88_bool, var_85_cvector, var_86_cvector);
	var_91_bool = var_88_bool == 0; //@nz
	if(var_91_bool != 0) {
		var_93_int = "Warning: outdoor scene locator " + var_78_string;
		var_95_int = var_93_int + " doesnt exist";
		Trace(var_95_int);
	}
	@@var_87_object:GetMap(var_77_object);
	var_96_bool = var_77_object == 0; //@ne
	if(var_96_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_98_float = GetByIndex(var_85_cvector, 0);
	var_99_float = GetByIndex(var_85_cvector, 2);
	@@var_77_object:SetMapParams(var_98_float, var_99_float, var_79_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_5366()
{
	func_5731();
	var_196_bool = 0; var_197_string = ""; var_198_string = "";
	func_5108(var_196_bool, "quest_b5_02", "completed");
	return 0;
}


func_4348(var_0_bool, var_1_object, var_2_object, var_3_object, var_892_object, var_893_object)
{
	var_0_bool = var_893_object;
	var_1_object = var_892_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_899_string = "";
		func_4406(var_893_object, "Neutral");
		@@@var_0_bool:SetMessage((int)540554);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)540555, (int)-1, (int)42564);
		@@@var_0_bool:AddReply((int)540794, (int)-1, (int)42843);
		goto Label_4376;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1100";
	}
Label_4376:
	var_914_bool = 0;
	func_5210(var_914_bool);
	if(var_914_bool != 0) {

	Label_4380:
		lshWaitForAnimEnd();
		var_915_object = var_3_object;
		if(var_915_object != 0) {
		} else {
			var_916_string = "";
			var_916_string = var_2_object;
			func_4907(var_916_string);
			goto Label_4380;
	}
		PlayAnimation("all", "idle");

	Label_4395:
		WaitForAnimEnd();
		var_919_object = var_3_object;
		if(var_919_object != 0) {
			goto Label_4405;
		}
		PlayAnimation("all", "idle");
		goto Label_4395;
	}
	goto Label_4405;
	
Label_4405:
	return 0;
	
}


func_5887(var_133_int)
{
	var_134_int = 0; var_135_int = 0;
	GetVariable("branch", var_135_int);
	var_138_bool = var_135_int == (int)0;
	if(var_138_bool != 0) {
		var_133_int = 1;
		return 2;
	EMIT "GOTO 0x170e";
	}
	var_140_bool = var_135_int == (int)1;
	if(var_140_bool != 0) {
		var_133_int = 2;
		return 2;
	}
	var_133_int = 3;
	return 2;
}


func_256(var_184_string, var_185_string, var_186_int)
{
	var_188_bool = var_186_int == (int)0;
	if(var_188_bool != 0) {
		var_185_string = var_184_string;
	} else {
		var_184_string = var_185_string + var_186_int;
	}
	return 0;
	
}


func_5376(var_128_object)
{
	Trace("money 4000 is given");
	var_131_object = Obj(); var_132_int = 0;
	var_128_object = var_131_object;
	func_5050(var_131_object, (int)4000);
	return 0;
}


func_4864(var_184_bool, var_185_object)
{
	var_186_string = ""; var_187_int = 0; var_188_bool = 0; var_189_int = 0; var_190_string = ""; var_191_string = ""; var_192_int = 0; var_193_bool = 0; var_194_int = 0; var_195_string = "";
	var_197_int = 0;
	func_5149(var_197_int);
	var_203_int = "d" + var_197_int;
	var_191_string = var_203_int + "m";
	var_192_int = 0;
	
Label_4873:
	if((int)1 != 0) {
		var_207_int = var_192_int + (int)1;
		var_208_int = var_191_string + var_207_int;
		@@var_185_object:HasProperty(var_208_int, var_193_bool);
		var_209_bool = var_193_bool == 0; //@nz
		if(var_209_bool != 0) {
		} else {
			var_192_int = var_192_int + (int)1;
			goto Label_4873;
		}
	}
	var_210_bool = var_192_int == 0; //@nz
	if(var_210_bool != 0) {
		var_184_bool = 0;
		return 10;
	}
	var_194_int = 0;
	var_212_bool = var_192_int > (int)1;
	if(var_212_bool != 0) {
		irand(var_194_int, var_192_int);
	}
	var_214_int = var_194_int + (int)1;
	var_215_int = var_191_string + var_214_int;
	@@var_185_object:GetProperty(var_215_int, var_195_string);
	var_216_bool = 0; var_217_string = "";
	var_195_string = var_217_string;
	func_4938(var_216_bool, var_217_string);
	var_216_bool = var_184_bool;
	return 10;
	
}


func_264(var_177_int, var_178_string)
{
	var_179_int = 0; var_180_bool = 0; var_181_int = 0; var_182_bool = 0;
	var_181_int = 0;
	
Label_266:
	var_184_string = ""; var_185_string = ""; var_186_int = 0;
	var_178_string = var_185_string;
	var_181_int = var_186_int;
	func_256(var_184_string, var_185_string, var_186_int);
	HasAnimation(var_182_bool, "all", var_184_string);
	var_189_bool = var_182_bool == 0; //@nz
	if(var_189_bool != 0) {
	} else {
		var_181_int = var_181_int + (int)1;
		goto Label_266;
	}
	var_181_int = var_177_int;
	return 4;
	
}


func_5386(var_55_object)
{
	Trace("kerosene50 is given");
	var_58_object = Obj(); var_59_string = ""; var_60_int = 0;
	var_55_object = var_58_object;
	func_5088(var_58_object, "kerosene", (int)50);
	return 0;
}


func_2827(var_0_bool, var_637_int, var_638_object)
{
	var_640_object = Obj(); var_641_bool = 0; var_642_int = 0; var_643_bool = 0; var_644_object = Obj(); var_645_bool = 0; var_646_int = 0; var_647_bool = 0;
	var_0_bool = var_638_object;
	var_648_bool = 0; var_649_object = Obj(); var_650_float = 0;
	var_638_object = var_649_object;
	func_4682(var_648_bool, var_649_object, (float)70.0);
	var_651_bool = var_648_bool == 0; //@nz
	if(var_651_bool != 0) {
		var_637_int = -2;
		return 8;
	}
	CreateDialog(var_644_object);
	var_652_int = 0;
	func_5204(var_652_int);
	@@var_644_object:SetNPCName(var_652_int);
	var_653_int = 0;
	func_5202(var_653_int);
	@@var_644_object:SetNPCDescription(var_653_int);
	var_654_string = "";
	func_5206(var_654_string);
	@@var_644_object:SetPhoto(var_654_string);
	var_655_string = "";
	func_5208(var_655_string);
	@@var_644_object:SetPhoto2(var_655_string);
	var_656_int = 0;
	func_5887(var_656_int);
	@@var_644_object:SetPlayerName(var_656_int);
	IsOverrideActive(var_645_bool);
	var_657_bool = var_645_bool;
	if(var_657_bool != 0) {
		var_637_int = -2;
		return 8;
	}
	DoDialog(var_644_object);
	var_658_bool = 0; var_659_object = Obj();
	func_4960(Obj());
	var_660_object = var_659_object;
	func_4769(var_658_bool, var_659_object);
	var_661_object = Obj(); var_662_object = Obj();
	var_638_object = var_661_object;
	var_644_object = var_662_object;
	TaskCall(15);
	func_2908(var_663_object, var_664_object, var_665_string, var_666_bool, var_661_object, var_662_object);
	TaskReturn();
	@@var_644_object:IsDialogEnd(var_647_bool);
	
Label_2890:
	var_734_bool = var_647_bool == 0; //@nz
	if(var_734_bool != 0) {
		sync();
		@@var_644_object:IsDialogEnd(var_647_bool);
		goto Label_2890;
	}
	var_638_object = Obj();
	func_4751();
	StopDialog(var_644_object);
	@@var_644_object:GetReturnValue((int)-1);
	var_646_int = var_637_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5904(var_67_object)
{
	var_68_bool = GlobalVars[2];
	var_69_bool = var_68_bool == 0; //@nz
	if(var_69_bool != 0) {
		var_70_int = 0; var_71_object = Obj();
		var_67_object = var_71_object;
		TaskCall(10);
		func_2336(var_72_object, var_70_int, var_71_object);
		TaskReturn();
		var_295_bool = GlobalVars[2];
		GlobalVars[2] = (bool)1;
	}
	var_296_bool = 0; var_297_int = 0;
	func_5158(var_296_bool, (int)1);
	if(var_296_bool != 0) {
		var_299_int = 0; var_300_object = Obj();
		var_67_object = var_300_object;
		TaskCall(4);
		func_282(var_301_object, var_299_int, var_300_object);
		TaskReturn();
		return 0;
	}
	var_395_bool = 0; var_396_int = 0;
	func_5158(var_395_bool, (int)2);
	if(var_395_bool != 0) {
		var_397_int = 0; var_398_object = Obj();
		var_67_object = var_398_object;
		TaskCall(6);
		func_968(var_399_object, var_397_int, var_398_object);
		TaskReturn();
		return 0;
	}
	var_485_bool = 0; var_486_int = 0;
	func_5158(var_485_bool, (int)5);
	if(var_485_bool != 0) {
		var_487_int = 0; var_488_object = Obj();
		var_67_object = var_488_object;
		TaskCall(8);
		func_1636(var_489_object, var_487_int, var_488_object);
		TaskReturn();
		return 0;
	}
	var_577_bool = 0; var_578_int = 0;
	func_5158(var_577_bool, (int)6);
	if(var_577_bool != 0) {
		var_579_int = 0; var_580_object = Obj();
		var_67_object = var_580_object;
		TaskCall(12);
		func_2575(var_581_object, var_579_int, var_580_object);
		TaskReturn();
		return 0;
	}
	var_635_bool = 0; var_636_int = 0;
	func_5158(var_635_bool, (int)8);
	if(var_635_bool != 0) {
		var_637_int = 0; var_638_object = Obj();
		var_67_object = var_638_object;
		TaskCall(14);
		func_2827(var_639_object, var_637_int, var_638_object);
		TaskReturn();
		return 0;
	}
	var_736_bool = 0; var_737_int = 0;
	func_5158(var_736_bool, (int)11);
	if(var_736_bool != 0) {
		var_738_int = 0; var_739_object = Obj();
		var_67_object = var_739_object;
		TaskCall(16);
		func_3520(var_740_object, var_738_int, var_739_object);
		TaskReturn();
		return 0;
	}
	var_803_bool = 0;
	var_803_bool = 0;
	var_804_bool = 0; var_805_int = 0;
	func_5158(var_804_bool, (int)12);
	if(var_804_bool != 0) {
		var_806_bool = GlobalVars[3];
		var_807_bool = var_806_bool == 0; //@nz
		if(var_807_bool != 0) {
			var_803_bool = 1;
		}
	}
	if(var_803_bool != 0) {
		var_808_int = 0; var_809_object = Obj();
		var_67_object = var_809_object;
		TaskCall(18);
		func_4008(var_810_object, var_808_int, var_809_object);
		TaskReturn();
		var_867_bool = GlobalVars[3];
		GlobalVars[3] = (bool)1;
		return 0;
	}
	var_868_int = 0; var_869_object = Obj();
	var_67_object = var_869_object;
	TaskCall(20);
	func_4267(var_870_object, var_868_int, var_869_object);
	TaskReturn();
	return 0;
}


func_5397()
{
	var_57_object = Obj(); var_58_string = ""; var_59_string = "";
	func_4633(Obj());
	var_60_object = var_57_object;
	func_5120(var_57_object, "house_vlad", "pt_maze_start");
	return 0;
}


func_282(var_0_bool, var_299_int, var_300_object)
{
	var_302_object = Obj(); var_303_bool = 0; var_304_int = 0; var_305_bool = 0; var_306_object = Obj(); var_307_bool = 0; var_308_int = 0; var_309_bool = 0;
	var_0_bool = var_300_object;
	var_310_bool = 0; var_311_object = Obj(); var_312_float = 0;
	var_300_object = var_311_object;
	func_4682(var_310_bool, var_311_object, (float)70.0);
	var_313_bool = var_310_bool == 0; //@nz
	if(var_313_bool != 0) {
		var_299_int = -2;
		return 8;
	}
	CreateDialog(var_306_object);
	var_314_int = 0;
	func_5204(var_314_int);
	@@var_306_object:SetNPCName(var_314_int);
	var_315_int = 0;
	func_5202(var_315_int);
	@@var_306_object:SetNPCDescription(var_315_int);
	var_316_string = "";
	func_5206(var_316_string);
	@@var_306_object:SetPhoto(var_316_string);
	var_317_string = "";
	func_5208(var_317_string);
	@@var_306_object:SetPhoto2(var_317_string);
	var_318_int = 0;
	func_5887(var_318_int);
	@@var_306_object:SetPlayerName(var_318_int);
	IsOverrideActive(var_307_bool);
	var_319_bool = var_307_bool;
	if(var_319_bool != 0) {
		var_299_int = -2;
		return 8;
	}
	DoDialog(var_306_object);
	var_320_bool = 0; var_321_object = Obj();
	func_4960(Obj());
	var_322_object = var_321_object;
	func_4769(var_320_bool, var_321_object);
	var_323_object = Obj(); var_324_object = Obj();
	var_300_object = var_323_object;
	var_306_object = var_324_object;
	TaskCall(5);
	func_363(var_325_object, var_326_object, var_327_string, var_328_bool, var_323_object, var_324_object);
	TaskReturn();
	@@var_306_object:IsDialogEnd(var_309_bool);
	
Label_345:
	var_393_bool = var_309_bool == 0; //@nz
	if(var_393_bool != 0) {
		sync();
		@@var_306_object:IsDialogEnd(var_309_bool);
		goto Label_345;
	}
	var_300_object = Obj();
	func_4751();
	StopDialog(var_306_object);
	@@var_306_object:GetReturnValue((int)-1);
	var_308_int = var_299_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1820(var_2_object, var_532_string)
{
	var_533_bool = 0;
	func_5210(var_533_bool);
	var_534_bool = var_533_bool == 0; //@nz
	if(var_534_bool != 0) {
		return 0;
	}
	var_535_bool = var_532_string == var_2_object;
	if(var_535_bool != 0) {
		return 0;
	}
	var_536_string = ""; var_537_bool = 0;
	var_532_string = var_536_string;
	var_539_bool = var_532_string == "";
	if(var_539_bool != 0) {
		var_537_bool = 0;
	} else {
		var_537_bool = 1;
	}
	func_4923(var_536_string, var_537_bool);
	var_2_object = var_532_string;
	return 0;
	
}


func_5408()
{
	SetVariable("b8q02", (int)1);
	func_5757();
	func_5783();
	var_90_object = Obj(); var_91_string = "";
	func_5010(var_90_object, "quest_b8_02");
	return 0;
}


func_2336(var_0_bool, var_70_int, var_71_object)
{
	var_73_object = Obj(); var_74_bool = 0; var_75_int = 0; var_76_bool = 0; var_77_object = Obj(); var_78_bool = 0; var_79_int = 0; var_80_bool = 0;
	var_0_bool = var_71_object;
	var_81_bool = 0; var_82_object = Obj(); var_83_float = 0;
	var_71_object = var_82_object;
	func_4682(var_81_bool, var_82_object, (float)70.0);
	var_128_bool = var_81_bool == 0; //@nz
	if(var_128_bool != 0) {
		var_70_int = -2;
		return 8;
	}
	CreateDialog(var_77_object);
	var_129_int = 0;
	func_5204(var_129_int);
	@@var_77_object:SetNPCName(var_129_int);
	var_130_int = 0;
	func_5202(var_130_int);
	@@var_77_object:SetNPCDescription(var_130_int);
	var_131_string = "";
	func_5206(var_131_string);
	@@var_77_object:SetPhoto(var_131_string);
	var_132_string = "";
	func_5208(var_132_string);
	@@var_77_object:SetPhoto2(var_132_string);
	var_133_int = 0;
	func_5887(var_133_int);
	@@var_77_object:SetPlayerName(var_133_int);
	IsOverrideActive(var_78_bool);
	var_141_bool = var_78_bool;
	if(var_141_bool != 0) {
		var_70_int = -2;
		return 8;
	}
	DoDialog(var_77_object);
	var_142_bool = 0; var_143_object = Obj();
	func_4960(Obj());
	var_144_object = var_143_object;
	func_4769(var_142_bool, var_143_object);
	var_237_object = Obj(); var_238_object = Obj();
	var_71_object = var_237_object;
	var_77_object = var_238_object;
	TaskCall(11);
	func_2417(var_239_object, var_240_object, var_241_string, var_242_bool, var_237_object, var_238_object);
	TaskReturn();
	@@var_77_object:IsDialogEnd(var_80_bool);
	
Label_2399:
	var_286_bool = var_80_bool == 0; //@nz
	if(var_286_bool != 0) {
		sync();
		@@var_77_object:IsDialogEnd(var_80_bool);
		goto Label_2399;
	}
	var_71_object = Obj();
	func_4751();
	StopDialog(var_77_object);
	@@var_77_object:GetReturnValue((int)-1);
	var_79_int = var_70_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4907(var_270_string)
{
	var_271_bool = 0; var_272_float = 0; var_273_float = 0; var_274_bool = 0; var_275_float = 0; var_276_float = 0;
	lshHasAnimation(var_274_bool, var_270_string);
	var_277_bool = var_274_bool;
	if(var_277_bool != 0) {
		lshGetAnimTimes(var_270_string, var_275_float, var_276_float);
		lshPlayAnimation(var_275_float, var_276_float, (bool)0);
	} else {
		var_280_int = "Can't find lsh animation : " + var_270_string;
		Trace(var_280_int);
	}
	return 6;
	
}


func_5424(var_104_object)
{
	var_106_int = 0; var_107_int = 0;
	func_5770();
	var_116_bool = 0; var_117_string = ""; var_118_string = "";
	func_5108(var_116_bool, "quest_b8_02", "completed");
	@@var_104_object:RemoveItemByType(var_107_int, "b8q02_book", (int)1);
	return 2;
}


func_4406(var_2_object, var_899_string)
{
	var_900_bool = 0;
	func_5210(var_900_bool);
	var_901_bool = var_900_bool == 0; //@nz
	if(var_901_bool != 0) {
		return 0;
	}
	var_902_bool = var_899_string == var_2_object;
	if(var_902_bool != 0) {
		return 0;
	}
	var_903_string = ""; var_904_bool = 0;
	var_899_string = var_903_string;
	var_906_bool = var_899_string == "";
	if(var_906_bool != 0) {
		var_904_bool = 0;
	} else {
		var_904_bool = 1;
	}
	func_4923(var_903_string, var_904_bool);
	var_2_object = var_899_string;
	return 0;
	
}


func_4923(var_248_string, var_249_bool)
{
	var_252_bool = 0; var_253_float = 0; var_254_float = 0; var_255_bool = 0; var_256_float = 0; var_257_float = 0;
	lshHasAnimation(var_255_bool, var_248_string);
	var_258_bool = var_255_bool;
	if(var_258_bool != 0) {
		lshGetAnimTimes(var_248_string, var_256_float, var_257_float);
		lshPlayAnimation(var_256_float, var_257_float, var_249_bool);
	} else {
		var_260_int = "Can't find lsh animation : " + var_248_string;
		Trace(var_260_int);
	}
	return 6;
	
}


func_5438()
{
	SetVariable("oob8MladVlad1", (int)1);
	return 0;
}


func_5444()
{
	SetVariable("b11q01KnowWhoKilled", (int)1);
	func_5705();
	return 0;
}


func_4938(var_176_bool, var_177_string)
{
	var_178_bool = 0; var_179_bool = 0;
	var_180_bool = 0;
	func_5210(var_180_bool);
	if(var_180_bool != 0) {
		lshHasSpeech(var_179_bool, var_177_string);
		var_181_bool = var_179_bool;
		if(var_181_bool != 0) {
			lshPlaySpeech(var_177_string);
			var_176_bool = 1;
			return 2;
		}
	}
	var_176_bool = 0;
	return 2;
}


func_5453()
{
	SetVariable("oob11MladVlad1", (int)1);
	return 0;
}


func_5459()
{
	var_437_bool = 0; var_438_string = ""; var_439_string = "";
	func_5108(var_437_bool, "quest_b2_01", "place_mladvlad");
	return 0;
}


func_4953()
{
	var_52_bool = 0;
	func_5210(var_52_bool);
	if(var_52_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_5466(var_171_object)
{
	Trace("money10000 is given");
	var_174_object = Obj(); var_175_int = 0;
	var_171_object = var_174_object;
	func_5050(var_174_object, (int)10000);
	return 0;
}


func_2908(var_0_bool, var_1_object, var_2_object, var_3_object, var_661_object, var_662_object)
{
	var_0_bool = var_662_object;
	var_1_object = var_661_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_668_bool = 0; var_669_object = Obj();
		var_669_object = var_1_object;
		func_5538(var_669_object);
		if(var_668_bool != 0) {
			var_674_object = Obj(); var_675_object = Obj();
			var_674_object = var_1_object;
			var_675_object = var_0_bool;
			func_5438();
			var_678_string = "";
			func_3026(var_662_object, "Rage");
			@@@var_0_bool:SetMessage((int)521469);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)523789, (int)25055, (int)25054);
			@@@var_0_bool:AddReply((int)523804, (int)25055, (int)25070);
		} else {
				var_701_string = "";
				func_3026(var_662_object, "Rage");
				@@@var_0_bool:SetMessage((int)521474);
				@@@var_0_bool:ClearReplies();
				var_703_bool = 0; var_704_object = Obj();
				var_704_object = var_1_object;
				func_5550(var_704_object);
				if(var_703_bool != 0) {
					@@@var_0_bool:AddReply((int)521475, (int)22642, (int)22640);
				}
				var_712_bool = 0;
				var_712_bool = 0;
				var_713_bool = 0; var_714_object = Obj();
				var_714_object = var_1_object;
				func_5550(var_714_object);
				var_715_bool = var_713_bool == 0; //@nz
				if(var_715_bool != 0) {
					var_716_bool = 0; var_717_object = Obj();
					var_717_object = var_1_object;
					func_5562(var_716_bool, var_717_object);
					if(var_716_bool != 0) {
						var_712_bool = 1;
					}
				}
				if(var_712_bool != 0) {
					@@@var_0_bool:AddReply((int)521479, (int)22645, (int)22644);
				}
				@@@var_0_bool:AddReply((int)523837, (int)25111, (int)25110);
				@@@var_0_bool:AddReply((int)521476, (int)-1, (int)22641);
				goto Label_2996;
		}
	}
Label_2996:
	var_693_bool = 0;
	func_5210(var_693_bool);
	if(var_693_bool != 0) {

	Label_3000:
		lshWaitForAnimEnd();
		var_694_object = var_3_object;
		if(var_694_object != 0) {
		} else {
			var_695_string = "";
			var_695_string = var_2_object;
			func_4907(var_695_string);
			goto Label_3000;
	}
		PlayAnimation("all", "idle");

	Label_3015:
		WaitForAnimEnd();
		var_698_object = var_3_object;
		if(var_698_object != 0) {
			goto Label_3025;
		}
		PlayAnimation("all", "idle");
		goto Label_3015;

	}
	goto Label_3025;
	
Label_3025:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xb60";


func_4960(var_144_object)
{
	var_145_object = Obj(); var_146_object = Obj();
	self(var_146_object);
	var_146_object = var_144_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5476()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_4966(var_108_cvector, var_109_cvector)
{
	var_111_float = 0; var_112_float = 0;
	var_113_int = var_109_cvector | var_109_cvector;
	var_112_float = sqrt(var_113_int);
	var_114_float = 9.999999974752427e-07;
	var_115_bool = var_112_float < var_114_float;
	if(var_115_bool != 0) {
		var_108_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_108_cvector = var_109_cvector / var_112_float;
	return 2;
}


func_5482()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_363(var_0_bool, var_1_object, var_2_object, var_3_object, var_323_object, var_324_object)
{
	var_0_bool = var_324_object;
	var_1_object = var_323_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_330_bool = 0; var_331_object = Obj();
		var_331_object = var_1_object;
		func_5609(var_331_object);
		if(var_330_bool != 0) {
			var_338_string = "";
			func_481(var_324_object, "Untrust");
			@@@var_0_bool:SetMessage((int)520042);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520043, (int)21227, (int)21225);
			@@@var_0_bool:AddReply((int)520044, (int)-1, (int)21226);
		} else {
				var_361_bool = 0; var_362_object = Obj();
				var_362_object = var_1_object;
				func_5621(var_362_object);
				if(var_361_bool != 0) {
					var_367_object = Obj(); var_368_object = Obj();
					var_367_object = var_1_object;
					var_368_object = var_0_bool;
					func_5228();
					var_371_string = "";
					func_481(var_324_object, "Neutral");
					@@@var_0_bool:SetMessage((int)519876);
					@@@var_0_bool:ClearReplies();
					@@@var_0_bool:AddReply((int)519877, (int)21042, (int)21041);
					@@@var_0_bool:AddReply((int)519905, (int)21042, (int)21073);
					goto Label_451;
				}
				var_379_string = "";
				func_481(var_324_object, "Neutral");
				@@@var_0_bool:SetMessage((int)519906);
				@@@var_0_bool:ClearReplies();
				var_381_bool = 0; var_382_object = Obj();
				var_382_object = var_1_object;
				func_5633(var_382_object);
				if(var_381_bool != 0) {
					@@@var_0_bool:AddReply((int)519907, (int)21077, (int)21076);
				}
				@@@var_0_bool:AddReply((int)519917, (int)-1, (int)21086);
				goto Label_451;
		}
	}
Label_451:
	var_353_bool = 0;
	func_5210(var_353_bool);
	if(var_353_bool != 0) {

	Label_455:
		lshWaitForAnimEnd();
		var_354_object = var_3_object;
		if(var_354_object != 0) {
		} else {
			var_355_string = "";
			var_355_string = var_2_object;
			func_4907(var_355_string);
			goto Label_455;
	}
		PlayAnimation("all", "idle");

	Label_470:
		WaitForAnimEnd();
		var_358_object = var_3_object;
		if(var_358_object != 0) {
			goto Label_480;
		}
		PlayAnimation("all", "idle");
		goto Label_470;

	}
	goto Label_480;
	
Label_480:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x16f";


func_5488()
{
	SetVariable("b5MladVladVisit", (int)1);
	return 0;
}


func_2417(var_0_bool, var_1_object, var_2_object, var_3_object, var_237_object, var_238_object)
{
	var_0_bool = var_238_object;
	var_1_object = var_237_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_244_string = "";
		func_2475(var_238_object, "Neutral");
		@@@var_0_bool:SetMessage((int)520768);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)520769, (int)21984, (int)21983);
		@@@var_0_bool:AddReply((int)520772, (int)21987, (int)21986);
		goto Label_2445;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x975";
	}
Label_2445:
	var_268_bool = 0;
	func_5210(var_268_bool);
	if(var_268_bool != 0) {

	Label_2449:
		lshWaitForAnimEnd();
		var_269_object = var_3_object;
		if(var_269_object != 0) {
		} else {
			var_270_string = "";
			var_270_string = var_2_object;
			func_4907(var_270_string);
			goto Label_2449;
	}
		PlayAnimation("all", "idle");

	Label_2464:
		WaitForAnimEnd();
		var_283_object = var_3_object;
		if(var_283_object != 0) {
			goto Label_2474;
		}
		PlayAnimation("all", "idle");
		goto Label_2464;
	}
	goto Label_2474;
	
Label_2474:
	return 0;
	
}


func_4976(var_105_float, var_106_float)
{
	var_109_bool = var_106_float < (int)0;
	if(var_109_bool != 0) {
		var_105_float = -var_106_float;
	} else {
		var_106_float = var_105_float;
	}
	return 0;
	
}


func_5494(var_199_object)
{
	Trace("money 7000 is given");
	var_202_object = Obj(); var_203_int = 0;
	var_199_object = var_202_object;
	func_5050(var_202_object, (int)7000);
	return 0;
}


func_4984(var_116_float, var_117_cvector)
{
	var_118_float = GetByIndex(var_117_cvector, 0);
	var_119_float = GetByIndex(var_117_cvector, 0);
	var_120_float = var_118_float * var_119_float;
	var_121_float = GetByIndex(var_117_cvector, 2);
	var_122_float = GetByIndex(var_117_cvector, 2);
	var_123_float = var_121_float * var_122_float;
	var_124_int = var_120_float + var_123_float;
	var_116_float = sqrt(var_124_int);
	return 0;
}


func_4477(var_0_bool, var_1_object, var_2_object)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_object = Obj(); var_62_bool = 0; var_63_int = 0; var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_bool = 0; var_71_cvector = CVector(0,0,0);
	SensePlayerOnly((bool)1);
	func_4565();
	GetScene(var_61_object);
	var_2_object = 0;
	
Label_4487:
	var_77_string = ""; var_78_int = 0;
	var_78_int = var_2_object;
	func_5188(var_77_string, var_78_int);
	@@var_61_object:GetLocator(var_77_string, var_62_bool);
	var_86_bool = var_62_bool == 0; //@nz
	if(var_86_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_4487;
	}
	var_87_bool = 0;
	func_4677(var_87_bool);
	var_90_bool = var_87_bool == 0; //@nz
	if(var_90_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_4573(var_70_bool, var_71_cvector);
	
Label_4512:
	irand(var_63_int, var_2_object);
	var_111_string = ""; var_112_int = 0;
	var_63_int = var_112_int;
	func_5188(var_111_string, var_112_int);
	@@var_61_object:GetLocator(var_111_string, var_64_bool, var_65_cvector, var_66_cvector);
	var_113_cvector = CVector(0,0,0);
	func_4620(var_113_cvector);
	var_67_cvector = var_65_cvector - var_113_cvector;
	var_116_float = 0; var_117_cvector = CVector(0,0,0);
	var_67_cvector = var_117_cvector;
	func_4984(var_116_float, var_117_cvector);
	var_125_bool = var_116_float > var_1_object;
	if(var_125_bool != 0) {
		GetHeight(var_68_float);
		var_65_cvector = var_69_cvector;
		var_126_float = GetByIndex(var_69_cvector, 1);
		var_126_float = var_126_float + var_68_float;
		SetByIndex(var_69_cvector, 1) = var_126_float;
		CanReachByPF(var_70_bool, var_69_cvector);
		var_127_bool = var_70_bool;
		if(var_127_bool != 0) {
			var_128_int = var_67_cvector | var_67_cvector;
			var_129_float = sqrt(var_128_int);
			var_130_float = var_0_bool / var_129_float;
			var_131_float = var_67_cvector * var_130_float;
			var_71_cvector = var_65_cvector - var_131_float;
			var_132_bool = 0; var_133_cvector = CVector(0,0,0); var_134_cvector = CVector(0,0,0);
			var_71_cvector = var_133_cvector;
			var_66_cvector = var_134_cvector;
			TaskCall(1);
			func_13(var_135_bool, var_132_bool, var_133_cvector, var_134_cvector);
			TaskReturn();
			if(var_135_bool != 0) {
				var_159_int = 0;
				var_63_int = var_159_int;
				TaskCall(3);
				func_198(var_159_int);
				TaskReturn();
			}
		}
	}
	Sleep((int)1);
	goto Label_4512;
	
}
EMIT "Return(); Pop(22)";
EMIT "Stack[-11] = 0";


func_5504(var_204_object)
{
	Trace("recipe2 is given");
	var_207_object = Obj(); var_208_string = ""; var_209_int = 0;
	var_204_object = var_207_object;
	func_5088(var_207_object, "recipe2", (int)1);
	return 0;
}


func_4994(var_332_int, var_333_string)
{
	var_334_int = 0; var_335_int = 0;
	GetVariable(var_333_string, var_335_int);
	var_335_int = var_332_int;
	return 2;
}


func_4999(var_118_object, var_119_string)
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


func_5515(var_210_object)
{
	Trace("recipe3 is given");
	var_213_object = Obj(); var_214_string = ""; var_215_int = 0;
	var_210_object = var_213_object;
	func_5088(var_213_object, "recipe3", (int)1);
	return 0;
}


func_5010(var_90_object, var_91_string)
{
	var_92_object = Obj(); var_93_object = Obj(); var_94_object = Obj(); var_95_object = Obj();
	GetMainOutdoorScene(var_94_object);
	var_97_int = var_91_string + ".xml";
	AddBlankActorFromXml(var_95_object, var_94_object, var_91_string, var_97_int);
	var_95_object = var_90_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5526()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_5532()
{
	TriggerWorld("playsound", "mapmark");
	return 0;
}


func_5021(var_103_string, var_104_bool)
{
	var_105_object = Obj(); var_106_object = Obj();
	FindActor(var_106_object, var_103_string);
	var_107_bool = var_106_object == 0; //@nz
	if(var_107_bool != 0) {
		var_109_int = "Door " + var_103_string;
		var_111_int = var_109_int + " not found";
		Trace(var_111_int);
	} else {
		@@var_106_object:SetProperty("locked", var_104_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_5538(var_668_bool)
{
	var_670_int = 0; var_671_string = "";
	func_4994(var_670_int, "oob8MladVlad1");
	var_673_bool = var_670_int == (int)0;
	if(var_673_bool != 0) {
		var_668_bool = 1;
		return 0;
	}
	var_668_bool = 0;
	return 0;
}


func_4008(var_0_bool, var_808_int, var_809_object)
{
	var_811_object = Obj(); var_812_bool = 0; var_813_int = 0; var_814_bool = 0; var_815_object = Obj(); var_816_bool = 0; var_817_int = 0; var_818_bool = 0;
	var_0_bool = var_809_object;
	var_819_bool = 0; var_820_object = Obj(); var_821_float = 0;
	var_809_object = var_820_object;
	func_4682(var_819_bool, var_820_object, (float)70.0);
	var_822_bool = var_819_bool == 0; //@nz
	if(var_822_bool != 0) {
		var_808_int = -2;
		return 8;
	}
	CreateDialog(var_815_object);
	var_823_int = 0;
	func_5204(var_823_int);
	@@var_815_object:SetNPCName(var_823_int);
	var_824_int = 0;
	func_5202(var_824_int);
	@@var_815_object:SetNPCDescription(var_824_int);
	var_825_string = "";
	func_5206(var_825_string);
	@@var_815_object:SetPhoto(var_825_string);
	var_826_string = "";
	func_5208(var_826_string);
	@@var_815_object:SetPhoto2(var_826_string);
	var_827_int = 0;
	func_5887(var_827_int);
	@@var_815_object:SetPlayerName(var_827_int);
	IsOverrideActive(var_816_bool);
	var_828_bool = var_816_bool;
	if(var_828_bool != 0) {
		var_808_int = -2;
		return 8;
	}
	DoDialog(var_815_object);
	var_829_bool = 0; var_830_object = Obj();
	func_4960(Obj());
	var_831_object = var_830_object;
	func_4769(var_829_bool, var_830_object);
	var_832_object = Obj(); var_833_object = Obj();
	var_809_object = var_832_object;
	var_815_object = var_833_object;
	TaskCall(19);
	func_4089(var_834_object, var_835_object, var_836_string, var_837_bool, var_832_object, var_833_object);
	TaskReturn();
	@@var_815_object:IsDialogEnd(var_818_bool);
	
Label_4071:
	var_865_bool = var_818_bool == 0; //@nz
	if(var_865_bool != 0) {
		sync();
		@@var_815_object:IsDialogEnd(var_818_bool);
		goto Label_4071;
	}
	var_809_object = Obj();
	func_4751();
	StopDialog(var_815_object);
	@@var_815_object:GetReturnValue((int)-1);
	var_817_int = var_808_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2475(var_2_object, var_244_string)
{
	var_245_bool = 0;
	func_5210(var_245_bool);
	var_246_bool = var_245_bool == 0; //@nz
	if(var_246_bool != 0) {
		return 0;
	}
	var_247_bool = var_244_string == var_2_object;
	if(var_247_bool != 0) {
		return 0;
	}
	var_248_string = ""; var_249_bool = 0;
	var_244_string = var_248_string;
	var_251_bool = var_244_string == "";
	if(var_251_bool != 0) {
		var_249_bool = 0;
	} else {
		var_249_bool = 1;
	}
	func_4923(var_248_string, var_249_bool);
	var_2_object = var_244_string;
	return 0;
	
}


func_5550(var_703_bool)
{
	var_705_int = 0; var_706_string = "";
	func_4994(var_705_int, "b8q02");
	var_708_bool = var_705_int == (int)0;
	if(var_708_bool != 0) {
		var_703_bool = 1;
		return 0;
	}
	var_703_bool = 0;
	return 0;
}


func_5038(var_144_int, var_145_int)
{
	var_146_object = Obj(); var_147_object = Obj();
	CreateIntVector(var_147_object);
	@@var_147_object:add(var_144_int);
	@@var_147_object:add(var_145_int);
	SendWorldWndMessage((int)3, var_147_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5562(var_716_bool, var_717_object)
{
	var_718_bool = 0; var_719_object = Obj(); var_720_string = "";
	var_717_object = var_719_object;
	func_5101(var_718_bool, var_719_object, "b8q02_book");
	if(var_718_bool != 0) {
		var_716_bool = 1;
		return 0;
	}
	var_716_bool = 0;
	return 0;
}


func_5050(var_131_object, var_132_int)
{
	var_133_int = 0; var_134_int = 0;
	var_135_object = Obj(); var_136_string = ""; var_137_int = 0;
	var_131_object = var_135_object;
	var_132_int = var_137_int;
	func_4640(var_135_object, "money", var_137_int);
	var_142_bool = var_132_int > (int)0;
	if(var_142_bool != 0) {
		GetInvItemByName(var_134_int, "Money");
		var_144_int = 0; var_145_int = 0;
		var_134_int = var_144_int;
		var_132_int = var_145_int;
		func_5038(var_144_int, var_145_int);
	}
	return 2;
}


func_3520(var_0_bool, var_738_int, var_739_object)
{
	var_741_object = Obj(); var_742_bool = 0; var_743_int = 0; var_744_bool = 0; var_745_object = Obj(); var_746_bool = 0; var_747_int = 0; var_748_bool = 0;
	var_0_bool = var_739_object;
	var_749_bool = 0; var_750_object = Obj(); var_751_float = 0;
	var_739_object = var_750_object;
	func_4682(var_749_bool, var_750_object, (float)70.0);
	var_752_bool = var_749_bool == 0; //@nz
	if(var_752_bool != 0) {
		var_738_int = -2;
		return 8;
	}
	CreateDialog(var_745_object);
	var_753_int = 0;
	func_5204(var_753_int);
	@@var_745_object:SetNPCName(var_753_int);
	var_754_int = 0;
	func_5202(var_754_int);
	@@var_745_object:SetNPCDescription(var_754_int);
	var_755_string = "";
	func_5206(var_755_string);
	@@var_745_object:SetPhoto(var_755_string);
	var_756_string = "";
	func_5208(var_756_string);
	@@var_745_object:SetPhoto2(var_756_string);
	var_757_int = 0;
	func_5887(var_757_int);
	@@var_745_object:SetPlayerName(var_757_int);
	IsOverrideActive(var_746_bool);
	var_758_bool = var_746_bool;
	if(var_758_bool != 0) {
		var_738_int = -2;
		return 8;
	}
	DoDialog(var_745_object);
	var_759_bool = 0; var_760_object = Obj();
	func_4960(Obj());
	var_761_object = var_760_object;
	func_4769(var_759_bool, var_760_object);
	var_762_object = Obj(); var_763_object = Obj();
	var_739_object = var_762_object;
	var_745_object = var_763_object;
	TaskCall(17);
	func_3601(var_764_object, var_765_object, var_766_string, var_767_bool, var_762_object, var_763_object);
	TaskReturn();
	@@var_745_object:IsDialogEnd(var_748_bool);
	
Label_3583:
	var_801_bool = var_748_bool == 0; //@nz
	if(var_801_bool != 0) {
		sync();
		@@var_745_object:IsDialogEnd(var_748_bool);
		goto Label_3583;
	}
	var_739_object = Obj();
	func_4751();
	StopDialog(var_745_object);
	@@var_745_object:GetReturnValue((int)-1);
	var_747_int = var_738_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5573(var_156_bool)
{
	var_158_int = 0; var_159_string = "";
	func_4994(var_158_int, "b11q01");
	var_161_bool = var_158_int == (int)1000;
	if(var_161_bool != 0) {
		var_156_bool = 1;
		return 0;
	}
	var_156_bool = 0;
	return 0;
}


func_968(var_0_bool, var_397_int, var_398_object)
{
	var_400_object = Obj(); var_401_bool = 0; var_402_int = 0; var_403_bool = 0; var_404_object = Obj(); var_405_bool = 0; var_406_int = 0; var_407_bool = 0;
	var_0_bool = var_398_object;
	var_408_bool = 0; var_409_object = Obj(); var_410_float = 0;
	var_398_object = var_409_object;
	func_4682(var_408_bool, var_409_object, (float)70.0);
	var_411_bool = var_408_bool == 0; //@nz
	if(var_411_bool != 0) {
		var_397_int = -2;
		return 8;
	}
	CreateDialog(var_404_object);
	var_412_int = 0;
	func_5204(var_412_int);
	@@var_404_object:SetNPCName(var_412_int);
	var_413_int = 0;
	func_5202(var_413_int);
	@@var_404_object:SetNPCDescription(var_413_int);
	var_414_string = "";
	func_5206(var_414_string);
	@@var_404_object:SetPhoto(var_414_string);
	var_415_string = "";
	func_5208(var_415_string);
	@@var_404_object:SetPhoto2(var_415_string);
	var_416_int = 0;
	func_5887(var_416_int);
	@@var_404_object:SetPlayerName(var_416_int);
	IsOverrideActive(var_405_bool);
	var_417_bool = var_405_bool;
	if(var_417_bool != 0) {
		var_397_int = -2;
		return 8;
	}
	DoDialog(var_404_object);
	var_418_bool = 0; var_419_object = Obj();
	func_4960(Obj());
	var_420_object = var_419_object;
	func_4769(var_418_bool, var_419_object);
	var_421_object = Obj(); var_422_object = Obj();
	var_398_object = var_421_object;
	var_404_object = var_422_object;
	TaskCall(7);
	func_1049(var_423_object, var_424_object, var_425_string, var_426_bool, var_421_object, var_422_object);
	TaskReturn();
	@@var_404_object:IsDialogEnd(var_407_bool);
	
Label_1031:
	var_483_bool = var_407_bool == 0; //@nz
	if(var_483_bool != 0) {
		sync();
		@@var_404_object:IsDialogEnd(var_407_bool);
		goto Label_1031;
	}
	var_398_object = Obj();
	func_4751();
	StopDialog(var_404_object);
	@@var_404_object:GetReturnValue((int)-1);
	var_406_int = var_397_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5069(var_63_object, var_64_object, var_65_int)
{
	var_66_int = 0; var_67_int = 0; var_68_bool = 0; var_69_int = 0; var_70_int = 0; var_71_bool = 0;
	@@var_64_object:GetItemID(var_69_int);
	GetInvItemProperty(var_70_int, var_69_int, "Category");
	@@var_63_object:AddItem(var_71_bool, var_64_object, var_70_int, var_65_int);
	var_73_bool = var_71_bool == 0; //@nz
	if(var_73_bool != 0) {
		@@var_63_object:DropItems(var_64_object, var_65_int);
	} else {
		var_74_int = 0; var_75_int = 0;
		var_69_int = var_74_int;
		var_65_int = var_75_int;
		func_5038(var_74_int, var_75_int);
	}
	return 6;
	
}


func_5585(var_778_bool)
{
	var_780_int = 0; var_781_string = "";
	func_4994(var_780_int, "oob11MladVlad1");
	var_783_bool = var_780_int == (int)0;
	if(var_783_bool != 0) {
		var_778_bool = 1;
		return 0;
	}
	var_778_bool = 0;
	return 0;
}


func_3026(var_2_object, var_678_string)
{
	var_679_bool = 0;
	func_5210(var_679_bool);
	var_680_bool = var_679_bool == 0; //@nz
	if(var_680_bool != 0) {
		return 0;
	}
	var_681_bool = var_678_string == var_2_object;
	if(var_681_bool != 0) {
		return 0;
	}
	var_682_string = ""; var_683_bool = 0;
	var_678_string = var_682_string;
	var_685_bool = var_678_string == "";
	if(var_685_bool != 0) {
		var_683_bool = 0;
	} else {
		var_683_bool = 1;
	}
	func_4923(var_682_string, var_683_bool);
	var_2_object = var_678_string;
	return 0;
	
}


func_4565()
{
	var_73_string = ""; var_74_string = "";
	GetProperty("loc", var_74_string);
	var_76_string = GlobalVars[0];
	var_74_string = var_76_string;
	GlobalVars[0] = var_76_string;
	return 2;
}


func_5597(var_159_bool)
{
	var_161_int = 0; var_162_string = "";
	func_4994(var_161_int, "KnowGrif");
	var_164_bool = var_161_int == (int)1;
	if(var_164_bool != 0) {
		var_159_bool = 1;
		return 0;
	}
	var_159_bool = 0;
	return 0;
}


func_4573(var_0_bool, var_1_object)
{
	var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0);
	GetAnimationOffset(var_95_cvector, "all", "walk_stopl");
	GetAnimationOffset(var_96_cvector, "all", "walk_stopr");
	var_101_float = GetByIndex(var_95_cvector, 2);
	var_102_float = GetByIndex(var_96_cvector, 2);
	var_103_int = var_101_float + var_102_float;
	var_0_bool = var_103_int / (float)2.0;
	var_105_float = 0; var_106_float = 0;
	var_107_float = GetByIndex(var_95_cvector, 2);
	var_106_float = var_107_float - var_0_bool;
	func_4976(var_105_float, var_106_float);
	var_1_object = var_105_float + (int)40;
	return 4;
}


func_5088(var_58_object, var_59_string, var_60_int)
{
	var_61_object = Obj(); var_62_object = Obj();
	CreateInvItem(var_62_object);
	@@var_62_object:SetItemName(var_59_string);
	var_63_object = Obj(); var_64_object = Obj(); var_65_int = 0;
	var_58_object = var_63_object;
	var_62_object = var_64_object;
	var_60_int = var_65_int;
	func_5069(var_63_object, var_64_object, var_65_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_481(var_2_object, var_338_string)
{
	var_339_bool = 0;
	func_5210(var_339_bool);
	var_340_bool = var_339_bool == 0; //@nz
	if(var_340_bool != 0) {
		return 0;
	}
	var_341_bool = var_338_string == var_2_object;
	if(var_341_bool != 0) {
		return 0;
	}
	var_342_string = ""; var_343_bool = 0;
	var_338_string = var_342_string;
	var_345_bool = var_338_string == "";
	if(var_345_bool != 0) {
		var_343_bool = 0;
	} else {
		var_343_bool = 1;
	}
	func_4923(var_342_string, var_343_bool);
	var_2_object = var_338_string;
	return 0;
	
}


func_5609(var_330_bool)
{
	var_332_int = 0; var_333_string = "";
	func_4994(var_332_int, "b1q01");
	var_337_bool = var_332_int == (int)0;
	if(var_337_bool != 0) {
		var_330_bool = 1;
		return 0;
	}
	var_330_bool = 0;
	return 0;
}


func_5101(var_718_bool, var_719_object, var_720_string)
{
	var_721_int = 0; var_722_bool = 0; var_723_int = 0; var_724_bool = 0;
	GetInvItemByName(var_723_int, var_720_string);
	@@var_719_object:HasItem(var_723_int, var_724_bool);
	var_724_bool = var_718_bool;
	return 4;
}


func_5108(var_437_bool, var_438_string, var_439_string)
{
	var_440_object = Obj(); var_441_object = Obj();
	FindActor(var_441_object, var_438_string);
	var_442_bool = var_441_object == 0; //@ne
	if(var_442_bool != 0) {
		var_437_bool = 0;
		return 2;
	}
	Trigger(var_441_object, var_439_string);
	var_437_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5621(var_361_bool)
{
	var_363_int = 0; var_364_string = "";
	func_4994(var_363_int, "oob1MladVlad1");
	var_366_bool = var_363_int == (int)0;
	if(var_366_bool != 0) {
		var_361_bool = 1;
		return 0;
	}
	var_361_bool = 0;
	return 0;
}


func_4089(var_0_bool, var_1_object, var_2_object, var_3_object, var_832_object, var_833_object)
{
	var_0_bool = var_833_object;
	var_1_object = var_832_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_839_string = "";
		func_4152(var_833_object, "Neutral");
		@@@var_0_bool:SetMessage((int)535231);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)535232, (int)36953, (int)36907);
		@@@var_0_bool:AddReply((int)535233, (int)-1, (int)36908);
		@@@var_0_bool:AddReply((int)535280, (int)-1, (int)36956);
		goto Label_4122;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xffd";
	}
Label_4122:
	var_857_bool = 0;
	func_5210(var_857_bool);
	if(var_857_bool != 0) {

	Label_4126:
		lshWaitForAnimEnd();
		var_858_object = var_3_object;
		if(var_858_object != 0) {
		} else {
			var_859_string = "";
			var_859_string = var_2_object;
			func_4907(var_859_string);
			goto Label_4126;
	}
		PlayAnimation("all", "idle");

	Label_4141:
		WaitForAnimEnd();
		var_862_object = var_3_object;
		if(var_862_object != 0) {
			goto Label_4151;
		}
		PlayAnimation("all", "idle");
		goto Label_4141;
	}
	goto Label_4151;
	
Label_4151:
	return 0;
	
}


