// @IMPORTS: Hold/0,StopGroup0/0,sync/0,SetTimer/2,MovePoint/3,KillTimer/1,WaitForAnimEnd/1,Rotate/3,IsOverrideActive/1,IsPlayerActor/2,FindActor/2,Stop/0,Sleep/1,StopAnimation/0,HasProperty/2,GetProperty/2,irand/2,PlayAnimation/2,WaitForAnimEnd/0,HasAnimation/3,CreateDialog/1,DoDialog/1,StopDialog/1,lshWaitForAnimEnd/0,lshStopAnimation/0,SensePlayerOnly/1,GetScene/1,GetHeight/1,CanReachByPF/2,GetAnimationOffset/3,GetPosition/1,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,GetMainOutdoorScene/1,AddBlankActor/4,AddBlankActorFromXml/4,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,GetInvItemProperty/3,CreateInvItem/1,SendWorldWndMessage/1,CreateFloatVector/1,Trigger/2,GetGameTime/1,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1
// @STRINGS: W:player|W:ptidle|W:all|A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:Fear|W:Untrust|W:Sly|W:Rage|A:GetLocator|W:loc|W:walk_stopl|W:walk_stopr|A:GetPosition|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:m|W:Can't find lsh animation : |W:.bin|W:.xml|A:add|W:money|W:Money|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:reputation|W:pt_|W:ui/NPC_MladVlad.png|W:ui/NPC_MladVlad_b.png|W:money 4000 is given|W:money20000 is given|W:RMap|W:ood3MladVlad2|W:money2000 is given|W:d1q03IsKapella|W:d1q03MladVladGotoOspina|W:pt_map_ospina|A:AddMark|W:quest_d1_03|W:money10000 is given|W:playsound|W:givemoney|W:pt_map_mat|A:ShowMap|W:d1q01|W:quest_d1_01|W:place_rubin|W:ood1MladVlad1|W:ood1MladVlad2|W:ood1MladVlad3|W:d4MladVladVisit|W:ood8MladVlad6|W:d8q04|W:d8q04MladVladGotoMark|W:pt_map_theater|W:d8MladVladVisit|W:pt_gmap_r7_house2_01|W:quest_d11_05|W:place_enemy_after|W:completed|W:ood3MladVlad3|W:map_chertez_state|W:map_chertez_force|W:lens is given|W:lens|W:KnowPochka|W:ood2MladVlad1|W:ood2MladVlad2|W:pt_map_anna|W:mapmark|W:pt_map_bigvlad|W:money3000 is given|W:ood3MladVlad1|W:d3q02|W:d3q02MladVladGotoViktor|W:pt_map_viktor|W:d3q02MladVladGotoButcher|W:ood4MladVlad1|W:d4q01|W:d4q01MladVladGotoBigVlad|W:d4q01_subquest|W:d4q01MladVladGotoOspina|W:ood4MladVlad2|W:d4q02MladVladGotoAnna|W:d4q02MladVladGotoJulia|W:pt_map_julia|W:d4q02MladVladGotoLara|W:pt_map_lara|W:quest_d4_02|W:ood4MladVlad3|W:d6q02MladVladGotoBigVlad|W:d6q02MladVladGotoBigVladSelf|W:pt_map_mladvlad|W:quest_d6_02|W:place_trigger|W:ood6MladVlad1|W:ood6MladVlad2|W:d6q02KnowAboutAttack|W:ood6MladVlad3|W:quest_d6_03|W:failed|W:ood5MladVlad1|W:ood5MladVlad2|W:ood5MladVlad3|W:d6q02BigVlad|A:FindMark|A:Remove|W:d6q02KapellaGotoMladVlad|W:ood8MladVlad1|W:ood8MladVlad2|W:d8q01BringBadBoy|W:d8q01MatBringToy|W:d8q01MladVladGotoMat|W:ood8MladVlad3|W:d8q01MladVladIsVictim|W:ood8MladVlad4|W:ood8MladVlad5|W:quest_d8_04|W:KnowMladVlad|W:d5q03|W:d5q03SavePrisoners|W:pt_map_uprava_prison|W:quest_d5_03|W:place_prisoners|W:d8q01MladVladgotoOspina|W:d1q03|W:d11q05|W:d2q03|W:d3q01|W:d4q02|W:d6q02|W:d6q02GorbunDeath|W:d6q02Trigger|W:d8q01|W:d8q01MladVladIsBad|W:d8q01BigVladIsVictim|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:string:,1:object:,2:bool:
// @RUN_OP: 0x2606
// @RUN_TASK: 32
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
// @EVENT_11: op=0x1c0 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x2ed vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x537 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x937 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0xdec vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0x10d7 vars=int,int
// @TASK_16: vars=object params=2
// @TASK_17: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1440 vars=int,int
// @TASK_18: vars=object params=2
// @TASK_19: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1abc vars=int,int
// @TASK_20: vars=object params=2
// @TASK_21: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1bbc vars=int,int
// @TASK_22: vars=object params=2
// @TASK_23: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1cc1 vars=int,int
// @TASK_24: vars=object params=2
// @TASK_25: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1dd5 vars=int,int
// @TASK_26: vars=object params=2
// @TASK_27: vars=object,object,string,bool params=2
// @EVENT_11: op=0x2006 vars=int,int
// @TASK_28: vars=object params=2
// @TASK_29: vars=object,object,string,bool params=2
// @EVENT_11: op=0x249b vars=int,int
// @TASK_30: vars=object params=2
// @TASK_31: vars=object,object,string,bool params=2
// @EVENT_11: op=0x25dc vars=int,int
// @TASK_32: vars=float,float,int params=0
// @EVENT_6: op=0x2683 vars=
// @EVENT_0: op=0x268c vars=object
// @STANDALONE_EVENT_6: op=0x2904 vars=
// @PE: 0xa2,0xf7,0x100,0x16b,0x1aa,0x1c0,0x285,0x2d7,0x2ed,0x495,0x521,0x537,0x898,0x921,0x937,0xd33,0xdd6,0xdec,0x102e,0x10c1,0x10d7,0x132d,0x142a,0x1440,0x1a66,0x1aa6,0x1abc,0x1b66,0x1ba6,0x1bbc,0x1c6b,0x1cab,0x1cc1,0x1d70,0x1dbf,0x1dd5,0x1f3d,0x1ff0,0x2006,0x244b,0x2485,0x249b,0x258c,0x25c6,0x25dc,0x2683,0x281b,0x2823,0x282e,0x2892,0x28d9,0x28f7,0x290f,0x2919,0x292e,0x2935,0x293b,0x2963,0x296d,0x2973,0x2983,0x2991,0x2997,0x299d,0x29a3,0x29a9,0x29c6,0x29cc,0x29dc,0x29eb,0x29f1,0x2a02,0x2a0d,0x2a13,0x2a19,0x2a1f,0x2a2f,0x2a3f,0x2a45,0x2a55,0x2a65,0x2a6f,0x2a9f,0x2ad0,0x2b02,0x2b30,0x2b36,0x2b3c,0x2b42,0x2b48,0x2b52,0x2b59,0x2b5f,0x2b65,0x2b67,0x2b94,0x2b9a,0x2bc5,0x2bcb,0x2bd1,0x2bd7,0x2bdd,0x2bed,0x2c30,0x2c3c,0x2c48,0x2c54,0x2c60,0x2c6c,0x2c78,0x2c84,0x2c90,0x2c9c,0x2ca8,0x2cb4,0x2cc0,0x2ccc,0x2cd8,0x2ce4,0x2cf0,0x2cfc,0x2d08,0x2d14,0x2d20,0x2d2c,0x2d38,0x2d44,0x2d50,0x2d5c,0x2d68,0x2d74,0x2d80,0x2d8c,0x2d98,0x2da4,0x2db0,0x2dbc,0x2dc8,0x2dd4,0x2de0,0x2dec,0x2df8,0x2e04,0x2e10,0x2e1c,0x2e28,0x2e34,0x2e40,0x2e4c,0x2e58,0x2e64,0x2e70,0x2e92,0x2e9c,0x3029

task_0_event_5(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_object, var_67_object, var_68_object, var_69_string, var_70_bool, var_71_float, var_72_float, var_73_int)
{
	StopGroup0();
	sync();
	return 0;
}


task_1_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_object, var_67_object, var_68_object, var_69_string, var_70_bool, var_71_float, var_72_float, var_73_int)
{
	var_0_bool = true;
	func_145();
	func_10500();
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_1_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_float, var_73_float, var_74_int)
{
	var_75_bool = 0; var_76_bool = 0;
	IsOverrideActive(var_76_bool);
	var_77_bool = var_76_bool == 0; //@nz
	if(var_77_bool != 0) {
		func_145();
		EventDisable(0);
		var_78_bool = 0; var_79_object = Obj();
		var_74_int = var_79_object;
		func_9948(var_78_bool, var_79_object);
		EventEnable(0);
		var_92_object = Obj();
		var_74_int = var_92_object;
		func_12329(var_92_object);
		var_0_bool = false;
	}
	return 2;
}


	task_1_event_10(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_float, var_73_float, var_74_int, var_75_object, var_76_object, var_96_object)
	{
	var_97_bool = 0; var_98_bool = 0;
	IsPlayerActor(var_96_object, var_98_bool);
	var_99_bool = var_98_bool;
	if(var_99_bool != 0) {
		func_145();
		var_100_object = Obj();
		var_96_object = var_100_object;
		TaskCall(2);
		func_148(var_100_object);
		TaskReturn();
		var_0_bool = false;
		var_114_int = 20;
		var_115_float = 10.0;
		SetTimer(var_114_int, var_115_float);
	}
	return 2;
	}


task_1_event_7(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_float, var_73_float, var_74_int)
{
	var_75_object = Obj(); var_76_object = Obj();
	var_78_bool = var_74_int == (int)20;
	if(var_78_bool != 0) {
		var_0_bool = true;
		KillTimer((int)20);
	} else {
		var_81_bool = var_74_int == (int)21;
		if(var_81_bool == 0) goto Label_144;
		var_82_bool = var_0_bool;
		if(var_82_bool == 0) goto Label_144;
		FindActor(var_76_object, "player");
		var_84_bool = 0;
		var_84_bool = 0;
		var_85_object = var_76_object;
		if(var_85_object != 0) {
			var_86_float = 0; var_87_object = Obj();
			var_76_object = var_87_object;
			func_9889(var_86_float, var_87_object);
			var_95_bool = var_86_float <= (float)62500.0;
			if(var_95_bool != 0) {
				var_84_bool = 1;
			}
		}
		if(var_84_bool != 0) {
			var_76_object = Obj();
			func_89();
		}
		var_76_object = 0;
	}
Label_144:
	return 2;
	
}


task_2_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_object, var_67_object, var_68_object, var_69_string, var_70_bool, var_71_float, var_72_float, var_73_int)
{
	func_193();
	func_10500();
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_2_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_float, var_73_float, var_74_int)
{
	var_75_bool = 0; var_76_bool = 0;
	IsOverrideActive(var_76_bool);
	var_77_bool = var_76_bool == 0; //@nz
	if(var_77_bool != 0) {
		func_193();
		EventDisable(0);
		var_78_bool = 0; var_79_object = Obj();
		var_74_int = var_79_object;
		func_9948(var_78_bool, var_79_object);
		EventEnable(0);
		var_92_object = Obj();
		var_74_int = var_92_object;
		func_12329(var_92_object);
	}
	return 2;
}


task_3_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_object, var_67_object, var_68_object, var_69_string, var_70_bool, var_71_float, var_72_float, var_73_int)
{
	func_10500();
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_5_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	if((int)1 != 0) {
		func_10244();
		var_79_bool = var_74_float == (int)484;
		if(var_79_bool != 0) {
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_bool;
			func_11245();
			var_84_object = Obj(); var_85_object = Obj();
			var_84_object = var_1_object;
			var_85_object = var_0_bool;
			func_10765();
			var_88_string = "";
			func_426(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)500416);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)533500, (int)35031, (int)35030);
			return 0;
		}
		var_110_bool = var_74_float == (int)35031;
		if(var_110_bool != 0) {
			var_111_string = "";
			func_426(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)533501);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)500417, (int)487, (int)485);
			@@@var_0_bool:AddReply((int)500418, (int)9271, (int)486);
			return 0;
		}
		var_120_bool = var_74_float == (int)487;
		if(var_120_bool != 0) {
			var_121_string = "";
			func_426(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)500419);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)500420, (int)9271, (int)488);
			@@@var_0_bool:AddReply((int)500422, (int)9271, (int)490);
			return 0;
		}
		var_130_bool = var_74_float == (int)9271;
		if(var_130_bool != 0) {
			var_131_string = "";
			func_426(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)508445);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)508446, (int)-1, (int)9275);
			@@@var_0_bool:AddReply((int)508447, (int)-1, (int)9276);
			return 0;
		}
		var_3_object = true;
		var_139_bool = 0;
		func_10509(var_139_bool);
		if(var_139_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1c1";
	
}


task_7_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	if((int)1 != 0) {
		func_10244();
		var_79_bool = var_75_int == (int)8297;
		if(var_79_bool != 0) {
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_bool;
			func_10777();
			var_84_object = Obj(); var_85_object = Obj();
			var_84_object = var_1_object;
			var_85_object = var_0_bool;
			func_10605();
			var_88_object = Obj(); var_89_object = Obj();
			var_88_object = var_1_object;
			var_89_object = var_0_bool;
			func_10511(var_89_object);
		}
		var_110_bool = var_75_int == (int)8298;
		if(var_110_bool != 0) {
			var_111_object = Obj(); var_112_object = Obj();
			var_111_object = var_1_object;
			var_112_object = var_0_bool;
			func_10777();
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_bool;
			func_10605();
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_bool;
			func_10511(var_116_object);
		}
		var_118_bool = var_75_int == (int)8553;
		if(var_118_bool != 0) {
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_bool;
			func_10777();
			var_121_object = Obj(); var_122_object = Obj();
			var_121_object = var_1_object;
			var_122_object = var_0_bool;
			func_10605();
			var_123_object = Obj(); var_124_object = Obj();
			var_123_object = var_1_object;
			var_124_object = var_0_bool;
			func_10511(var_124_object);
		}
		var_126_bool = var_75_int == (int)35526;
		if(var_126_bool != 0) {
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_object;
			var_128_object = var_0_bool;
			func_10771();
		}
		var_132_bool = var_74_float == (int)7635;
		if(var_132_bool != 0) {
			var_133_string = "";
			func_727(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)506929);
			@@@var_0_bool:ClearReplies();
			var_151_bool = 0;
			var_151_bool = 0;
			var_152_bool = 0; var_153_object = Obj();
			var_153_object = var_1_object;
			func_11480(var_153_object);
			if(var_152_bool != 0) {
				var_160_bool = 0; var_161_object = Obj();
				var_161_object = var_1_object;
				func_11456(var_161_object);
				if(var_160_bool != 0) {
					var_151_bool = 1;
				}
			}
			if(var_151_bool != 0) {
				@@@var_0_bool:AddReply((int)506930, (int)7637, (int)7636);
			}
			var_169_bool = 0; var_170_object = Obj();
			var_170_object = var_1_object;
			func_11468(var_170_object);
			if(var_169_bool != 0) {
				@@@var_0_bool:AddReply((int)533959, (int)10443, (int)35526);
			}
			@@@var_0_bool:AddReply((int)507746, (int)-1, (int)8547);
			return 0;
		}
		var_182_bool = var_74_float == (int)10443;
		if(var_182_bool != 0) {
			var_183_string = "";
			func_727(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)509500);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509501, (int)10445, (int)10444);
			@@@var_0_bool:AddReply((int)509514, (int)10458, (int)10457);
			return 0;
		}
		var_192_bool = var_74_float == (int)10458;
		if(var_192_bool != 0) {
			var_193_string = "";
			func_727(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)509515);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509516, (int)10445, (int)10459);
			return 0;
		}
		var_199_bool = var_74_float == (int)10445;
		if(var_199_bool != 0) {
			var_200_string = "";
			func_727(var_75_int, "Fear");
			@@@var_0_bool:SetMessage((int)509502);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509503, (int)10447, (int)10446);
			@@@var_0_bool:AddReply((int)509510, (int)-1, (int)10453);
			@@@var_0_bool:AddReply((int)509511, (int)10455, (int)10454);
			return 0;
		}
		var_212_bool = var_74_float == (int)10455;
		if(var_212_bool != 0) {
			var_213_string = "";
			func_727(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)509512);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509513, (int)-1, (int)10456);
			return 0;
		}
		var_219_bool = var_74_float == (int)10447;
		if(var_219_bool != 0) {
			var_220_string = "";
			func_727(var_75_int, "Fear");
			@@@var_0_bool:SetMessage((int)509504);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509505, (int)10449, (int)10448);
			@@@var_0_bool:AddReply((int)509509, (int)-1, (int)10452);
			return 0;
		}
		var_229_bool = var_74_float == (int)10449;
		if(var_229_bool != 0) {
			var_230_string = "";
			func_727(var_75_int, "Fear");
			@@@var_0_bool:SetMessage((int)509506);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509507, (int)-1, (int)10450);
			@@@var_0_bool:AddReply((int)509508, (int)-1, (int)10451);
			return 0;
		}
		var_239_bool = var_74_float == (int)7637;
		if(var_239_bool != 0) {
			var_240_string = "";
			func_727(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)506931);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)506932, (int)7639, (int)7638);
			@@@var_0_bool:AddReply((int)507752, (int)-1, (int)8553);
			return 0;
		}
		var_249_bool = var_74_float == (int)7639;
		if(var_249_bool != 0) {
			var_250_string = "";
			func_727(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)506933);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)507753, (int)8555, (int)8554);
			return 0;
		}
		var_256_bool = var_74_float == (int)8555;
		if(var_256_bool != 0) {
			var_257_string = "";
			func_727(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)507754);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)506934, (int)8296, (int)7640);
			return 0;
		}
		var_263_bool = var_74_float == (int)8296;
		if(var_263_bool != 0) {
			var_264_string = "";
			func_727(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)507515);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)507516, (int)-1, (int)8297);
			@@@var_0_bool:AddReply((int)507517, (int)-1, (int)8298);
			return 0;
		}
		var_3_object = true;
		var_272_bool = 0;
		func_10509(var_272_bool);
		if(var_272_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x2ee";
	
}


task_9_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_int, var_17_int, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	if((int)1 != 0) {
		func_10244();
		var_79_bool = var_75_int == (int)11259;
		if(var_79_bool != 0) {
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_bool;
			func_10863();
		}
		var_85_bool = var_75_int == (int)35907;
		if(var_85_bool != 0) {
			var_86_object = Obj(); var_87_object = Obj();
			var_86_object = var_1_object;
			var_87_object = var_0_bool;
			func_10869();
		}
		var_130_bool = var_75_int == (int)35908;
		if(var_130_bool != 0) {
			var_131_object = Obj(); var_132_object = Obj();
			var_131_object = var_1_object;
			var_132_object = var_0_bool;
			func_10869();
		}
		var_134_bool = var_75_int == (int)11358;
		if(var_134_bool != 0) {
			var_135_object = Obj(); var_136_object = Obj();
			var_135_object = var_1_object;
			var_136_object = var_0_bool;
			func_10549();
		}
		var_140_bool = var_75_int == (int)11394;
		if(var_140_bool != 0) {
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_bool;
			func_10731();
		}
		var_146_bool = var_75_int == (int)11404;
		if(var_146_bool != 0) {
			var_147_object = Obj(); var_148_object = Obj();
			var_147_object = var_1_object;
			var_148_object = var_0_bool;
			func_10892();
			var_165_object = Obj(); var_166_object = Obj();
			var_165_object = var_1_object;
			var_166_object = var_0_bool;
			func_10700(var_166_object);
		}
		var_192_bool = var_75_int == (int)11407;
		if(var_192_bool != 0) {
			var_193_object = Obj(); var_194_object = Obj();
			var_193_object = var_1_object;
			var_194_object = var_0_bool;
			func_10892();
			var_195_object = Obj(); var_196_object = Obj();
			var_195_object = var_1_object;
			var_196_object = var_0_bool;
			func_10700(var_196_object);
		}
		var_198_bool = var_75_int == (int)22116;
		if(var_198_bool != 0) {
			var_199_object = Obj(); var_200_object = Obj();
			var_199_object = var_1_object;
			var_200_object = var_0_bool;
			func_10531();
			var_212_object = Obj(); var_213_object = Obj();
			var_212_object = var_1_object;
			var_213_object = var_0_bool;
			func_10815();
			var_216_object = Obj(); var_217_object = Obj();
			var_216_object = var_1_object;
			var_217_object = var_0_bool;
			func_10542(var_217_object);
		}
		var_237_bool = var_74_float == (int)11258;
		if(var_237_bool != 0) {
			var_238_string = "";
			func_1313(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)510212);
			@@@var_0_bool:ClearReplies();
			var_256_bool = 0;
			var_256_bool = 0;
			var_257_bool = 0; var_258_object = Obj();
			var_258_object = var_1_object;
			func_11504(var_258_object);
			if(var_257_bool != 0) {
				var_265_bool = 0; var_266_object = Obj();
				var_266_object = var_1_object;
				func_11516(var_266_object);
				if(var_265_bool != 0) {
					var_256_bool = 1;
				}
			}
			if(var_256_bool != 0) {
				@@@var_0_bool:AddReply((int)510213, (int)11260, (int)11259);
			}
			var_274_bool = 0;
			var_274_bool = 0;
			var_275_bool = 0; var_276_object = Obj();
			var_276_object = var_1_object;
			func_11312(var_276_object);
			if(var_275_bool != 0) {
				var_281_bool = 0; var_282_object = Obj();
				var_282_object = var_1_object;
				func_11492(var_282_object);
				var_287_bool = var_281_bool == 0; //@nz
				if(var_287_bool != 0) {
					var_274_bool = 1;
				}
			}
			if(var_274_bool != 0) {
				@@@var_0_bool:AddReply((int)510302, (int)11359, (int)11358);
			}
			var_291_bool = 0;
			var_291_bool = 1;
			var_292_bool = 0;
			var_292_bool = 0;
			var_293_bool = 0; var_294_object = Obj();
			var_294_object = var_1_object;
			func_11528(var_294_object);
			if(var_293_bool != 0) {
				var_299_bool = 0; var_300_object = Obj();
				var_300_object = var_1_object;
				func_11444(var_300_object);
				if(var_299_bool != 0) {
					var_292_bool = 1;
				}
			}
			if(var_292_bool != 1) {
				var_305_bool = 0;
				var_305_bool = 0;
				var_306_bool = 0; var_307_object = Obj();
				var_307_object = var_1_object;
				func_11540(var_307_object);
				if(var_306_bool != 0) {
					var_312_bool = 0; var_313_object = Obj();
					var_313_object = var_1_object;
					func_11444(var_313_object);
					if(var_312_bool != 0) {
						var_305_bool = 1;
					}
				}
				if(var_305_bool != 1) {
					var_291_bool = 0;
				}
			}
			if(var_291_bool != 0) {
				@@@var_0_bool:AddReply((int)510334, (int)11395, (int)11394);
			}
			var_317_bool = 0; var_318_object = Obj();
			var_318_object = var_1_object;
			func_11922(var_317_bool, var_318_object);
			var_329_bool = var_317_bool == 0; //@nz
			if(var_329_bool != 0) {
				@@@var_0_bool:AddReply((int)520897, (int)22115, (int)22114);
			}
			@@@var_0_bool:AddReply((int)520896, (int)-1, (int)22113);
			return 0;
		}
		var_337_bool = var_74_float == (int)22115;
		if(var_337_bool != 0) {
			var_338_string = "";
			func_1313(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520898);
			@@@var_0_bool:ClearReplies();
			var_340_bool = 0; var_341_object = Obj();
			var_341_object = var_1_object;
			func_11932(var_340_bool, var_341_object);
			if(var_340_bool != 0) {
				@@@var_0_bool:AddReply((int)520899, (int)-1, (int)22116);
			}
			@@@var_0_bool:AddReply((int)520900, (int)-1, (int)22117);
			return 0;
		}
		var_355_bool = var_74_float == (int)11395;
		if(var_355_bool != 0) {
			var_356_string = "";
			func_1313(var_75_int, "Fear");
			@@@var_0_bool:SetMessage((int)510335);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)510336, (int)11399, (int)11396);
			@@@var_0_bool:AddReply((int)510337, (int)11398, (int)11397);
			return 0;
		}
		var_365_bool = var_74_float == (int)11398;
		if(var_365_bool != 0) {
			var_366_string = "";
			func_1313(var_75_int, "Fear");
			@@@var_0_bool:SetMessage((int)510338);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)510341, (int)11402, (int)11401);
			return 0;
		}
		var_372_bool = var_74_float == (int)11399;
		if(var_372_bool != 0) {
			var_373_string = "";
			func_1313(var_75_int, "Fear");
			@@@var_0_bool:SetMessage((int)510339);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)510340, (int)11402, (int)11400);
			@@@var_0_bool:AddReply((int)534414, (int)36040, (int)36039);
			return 0;
		}
		var_382_bool = var_74_float == (int)36040;
		if(var_382_bool != 0) {
			var_383_string = "";
			func_1313(var_75_int, "Fear");
			@@@var_0_bool:SetMessage((int)534415);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)534416, (int)11402, (int)36041);
			return 0;
		}
		var_389_bool = var_74_float == (int)11402;
		if(var_389_bool != 0) {
			var_390_string = "";
			func_1313(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)510342);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)510343, (int)-1, (int)11404);
			@@@var_0_bool:AddReply((int)510344, (int)11406, (int)11405);
			return 0;
		}
		var_399_bool = var_74_float == (int)11406;
		if(var_399_bool != 0) {
			var_400_string = "";
			func_1313(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)510345);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)510346, (int)-1, (int)11407);
			return 0;
		}
		var_406_bool = var_74_float == (int)11359;
		if(var_406_bool != 0) {
			var_407_string = "";
			func_1313(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)510303);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)510304, (int)11039, (int)11360);
			return 0;
		}
		var_413_bool = var_74_float == (int)11039;
		if(var_413_bool != 0) {
			var_414_string = "";
			func_1313(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)510017);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)510018, (int)11041, (int)11040);
			@@@var_0_bool:AddReply((int)510028, (int)-1, (int)11050);
			return 0;
		}
		var_423_bool = var_74_float == (int)11041;
		if(var_423_bool != 0) {
			var_424_string = "";
			func_1313(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)510019);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)510020, (int)11043, (int)11042);
			@@@var_0_bool:AddReply((int)510027, (int)-1, (int)11049);
			return 0;
		}
		var_433_bool = var_74_float == (int)11043;
		if(var_433_bool != 0) {
			var_434_string = "";
			func_1313(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)510021);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)510022, (int)11045, (int)11044);
			@@@var_0_bool:AddReply((int)510026, (int)-1, (int)11048);
			return 0;
		}
		var_443_bool = var_74_float == (int)11045;
		if(var_443_bool != 0) {
			var_444_string = "";
			func_1313(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)510023);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)510024, (int)-1, (int)11046);
			@@@var_0_bool:AddReply((int)510025, (int)-1, (int)11047);
			return 0;
		}
		var_453_bool = var_74_float == (int)11260;
		if(var_453_bool != 0) {
			var_454_string = "";
			func_1313(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)510214);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)510305, (int)11364, (int)11361);
			@@@var_0_bool:AddReply((int)510306, (int)11363, (int)11362);
			return 0;
		}
		var_463_bool = var_74_float == (int)11363;
		if(var_463_bool != 0) {
			var_464_string = "";
			func_1313(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)510307);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)534368, (int)11364, (int)35974);
			@@@var_0_bool:AddReply((int)534369, (int)11366, (int)35975);
			return 0;
		}
		var_473_bool = var_74_float == (int)11364;
		if(var_473_bool != 0) {
			var_474_string = "";
			func_1313(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)510308);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)510309, (int)11370, (int)11365);
			@@@var_0_bool:AddReply((int)510311, (int)11366, (int)11367);
			return 0;
		}
		var_483_bool = var_74_float == (int)11366;
		if(var_483_bool != 0) {
			var_484_string = "";
			func_1313(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)510310);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)510312, (int)35894, (int)11369);
			@@@var_0_bool:AddReply((int)534370, (int)11371, (int)35978);
			return 0;
		}
		var_493_bool = var_74_float == (int)11370;
		if(var_493_bool != 0) {
			var_494_string = "";
			func_1313(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)510313);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)510315, (int)11371, (int)11372);
			return 0;
		}
		var_500_bool = var_74_float == (int)11371;
		if(var_500_bool != 0) {
			var_501_string = "";
			func_1313(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)510314);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)510317, (int)35894, (int)11375);
			@@@var_0_bool:AddReply((int)510323, (int)35894, (int)11381);
			return 0;
		}
		var_510_bool = var_74_float == (int)35894;
		if(var_510_bool != 0) {
			var_511_string = "";
			func_1313(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)534299);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)534300, (int)35896, (int)35895);
			@@@var_0_bool:AddReply((int)534317, (int)35914, (int)35913);
			return 0;
		}
		var_520_bool = var_74_float == (int)35914;
		if(var_520_bool != 0) {
			var_521_string = "";
			func_1313(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)534318);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)534319, (int)35902, (int)35915);
			return 0;
		}
		var_527_bool = var_74_float == (int)35896;
		if(var_527_bool != 0) {
			var_528_string = "";
			func_1313(var_75_int, "Rage");
			@@@var_0_bool:SetMessage((int)534301);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)534413, (int)35902, (int)36037);
			@@@var_0_bool:AddReply((int)534302, (int)35898, (int)35897);
			return 0;
		}
		var_537_bool = var_74_float == (int)35898;
		if(var_537_bool != 0) {
			var_538_string = "";
			func_1313(var_75_int, "Rage");
			@@@var_0_bool:SetMessage((int)534303);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)534304, (int)35900, (int)35899);
			return 0;
		}
		var_544_bool = var_74_float == (int)35900;
		if(var_544_bool != 0) {
			var_545_string = "";
			func_1313(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)534305);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)534306, (int)35902, (int)35901);
			return 0;
		}
		var_551_bool = var_74_float == (int)35902;
		if(var_551_bool != 0) {
			var_552_string = "";
			func_1313(var_75_int, "Rage");
			@@@var_0_bool:SetMessage((int)534307);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)534308, (int)35904, (int)35903);
			@@@var_0_bool:AddReply((int)534314, (int)35910, (int)35909);
			return 0;
		}
		var_561_bool = var_74_float == (int)35910;
		if(var_561_bool != 0) {
			var_562_string = "";
			func_1313(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)534315);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)534316, (int)35906, (int)35911);
			return 0;
		}
		var_568_bool = var_74_float == (int)35904;
		if(var_568_bool != 0) {
			var_569_string = "";
			func_1313(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)534309);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)534310, (int)35906, (int)35905);
			return 0;
		}
		var_575_bool = var_74_float == (int)35906;
		if(var_575_bool != 0) {
			var_576_string = "";
			func_1313(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)534311);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)534312, (int)-1, (int)35907);
			@@@var_0_bool:AddReply((int)534313, (int)-1, (int)35908);
			return 0;
		}
		var_3_object = true;
		var_584_bool = 0;
		func_10509(var_584_bool);
		if(var_584_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x538";
	
}


task_11_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_int, var_22_int, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	if((int)1 != 0) {
		func_10244();
		var_79_bool = var_75_int == (int)12610;
		if(var_79_bool != 0) {
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_bool;
			func_10960();
			var_84_object = Obj(); var_85_object = Obj();
			var_84_object = var_1_object;
			var_85_object = var_0_bool;
			func_10966();
			var_151_object = Obj(); var_152_object = Obj();
			var_151_object = var_1_object;
			var_152_object = var_0_bool;
			func_10799(var_152_object);
		}
		var_178_bool = var_75_int == (int)12613;
		if(var_178_bool != 0) {
			var_179_object = Obj(); var_180_object = Obj();
			var_179_object = var_1_object;
			var_180_object = var_0_bool;
			func_10960();
			var_181_object = Obj(); var_182_object = Obj();
			var_181_object = var_1_object;
			var_182_object = var_0_bool;
			func_10966();
			var_183_object = Obj(); var_184_object = Obj();
			var_183_object = var_1_object;
			var_184_object = var_0_bool;
			func_10799(var_184_object);
		}
		var_186_bool = var_75_int == (int)11955;
		if(var_186_bool != 0) {
			var_187_object = Obj(); var_188_object = Obj();
			var_187_object = var_1_object;
			var_188_object = var_0_bool;
			func_10911();
		}
		var_192_bool = var_75_int == (int)12243;
		if(var_192_bool != 0) {
			var_193_object = Obj(); var_194_object = Obj();
			var_193_object = var_1_object;
			var_194_object = var_0_bool;
			func_10917();
			var_213_object = Obj(); var_214_object = Obj();
			var_213_object = var_1_object;
			var_214_object = var_0_bool;
			func_10940();
			var_225_object = Obj(); var_226_object = Obj();
			var_225_object = var_1_object;
			var_226_object = var_0_bool;
			func_10837(var_226_object);
		}
		var_233_bool = var_75_int == (int)12244;
		if(var_233_bool != 0) {
			var_234_object = Obj(); var_235_object = Obj();
			var_234_object = var_1_object;
			var_235_object = var_0_bool;
			func_10917();
			var_236_object = Obj(); var_237_object = Obj();
			var_236_object = var_1_object;
			var_237_object = var_0_bool;
			func_10940();
			var_238_object = Obj(); var_239_object = Obj();
			var_238_object = var_1_object;
			var_239_object = var_0_bool;
			func_10837(var_239_object);
		}
		var_241_bool = var_75_int == (int)13075;
		if(var_241_bool != 0) {
			var_242_object = Obj(); var_243_object = Obj();
			var_242_object = var_1_object;
			var_243_object = var_0_bool;
			func_11010();
		}
		var_247_bool = var_75_int == (int)37888;
		if(var_247_bool != 0) {
			var_248_object = Obj(); var_249_object = Obj();
			var_248_object = var_1_object;
			var_249_object = var_0_bool;
			func_10853(var_249_object);
			var_269_object = Obj(); var_270_object = Obj();
			var_269_object = var_1_object;
			var_270_object = var_0_bool;
			func_10605();
			var_273_object = Obj(); var_274_object = Obj();
			var_273_object = var_1_object;
			var_274_object = var_0_bool;
			func_10754(var_274_object);
		}
		var_295_bool = var_75_int == (int)13077;
		if(var_295_bool != 0) {
			var_296_object = Obj(); var_297_object = Obj();
			var_296_object = var_1_object;
			var_297_object = var_0_bool;
			func_10853(var_297_object);
			var_298_object = Obj(); var_299_object = Obj();
			var_298_object = var_1_object;
			var_299_object = var_0_bool;
			func_10605();
			var_300_object = Obj(); var_301_object = Obj();
			var_300_object = var_1_object;
			var_301_object = var_0_bool;
			func_10754(var_301_object);
		}
		var_303_bool = var_75_int == (int)22120;
		if(var_303_bool != 0) {
			var_304_object = Obj(); var_305_object = Obj();
			var_304_object = var_1_object;
			var_305_object = var_0_bool;
			func_10815();
			var_308_object = Obj(); var_309_object = Obj();
			var_308_object = var_1_object;
			var_309_object = var_0_bool;
			func_10531();
			var_321_object = Obj(); var_322_object = Obj();
			var_321_object = var_1_object;
			var_322_object = var_0_bool;
			func_10542(var_322_object);
		}
		var_326_bool = var_74_float == (int)12592;
		if(var_326_bool != 0) {
			var_327_bool = 0;
			var_327_bool = 0;
			var_328_bool = 0; var_329_object = Obj();
			var_329_object = var_1_object;
			func_11576(var_329_object);
			if(var_328_bool != 0) {
				var_336_bool = 0; var_337_object = Obj();
				var_337_object = var_1_object;
				func_11552(var_337_object);
				var_342_bool = var_336_bool == 0; //@nz
				if(var_342_bool != 0) {
					var_327_bool = 1;
				}
			}
			if(var_327_bool != 0) {
				var_343_object = Obj(); var_344_object = Obj();
				var_343_object = var_1_object;
				var_344_object = var_0_bool;
				func_10659();
				var_347_string = "";
				func_2337(var_75_int, "Neutral");
				@@@var_0_bool:SetMessage((int)511395);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)511396, (int)12594, (int)12593);
				return 0;
			}
			var_368_string = "";
			func_2337(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)510814);
			@@@var_0_bool:ClearReplies();
			var_370_bool = 0;
			var_370_bool = 0;
			var_371_bool = 0; var_372_object = Obj();
			var_372_object = var_1_object;
			func_11564(var_372_object);
			if(var_371_bool != 0) {
				var_377_bool = 0; var_378_object = Obj();
				var_378_object = var_1_object;
				func_11552(var_378_object);
				if(var_377_bool != 0) {
					var_370_bool = 1;
				}
			}
			if(var_370_bool != 0) {
				@@@var_0_bool:AddReply((int)510815, (int)11956, (int)11955);
			}
			var_382_bool = 0;
			var_382_bool = 0;
			var_383_bool = 0; var_384_object = Obj();
			var_384_object = var_1_object;
			func_11600(var_384_object);
			if(var_383_bool != 0) {
				var_389_bool = 0; var_390_object = Obj();
				var_390_object = var_1_object;
				func_11588(var_390_object);
				if(var_389_bool != 0) {
					var_382_bool = 1;
				}
			}
			if(var_382_bool != 0) {
				@@@var_0_bool:AddReply((int)511862, (int)37886, (int)13075);
			}
			var_398_bool = 0; var_399_object = Obj();
			var_399_object = var_1_object;
			func_11922(var_398_bool, var_399_object);
			var_410_bool = var_398_bool == 0; //@nz
			if(var_410_bool != 0) {
				@@@var_0_bool:AddReply((int)520901, (int)22119, (int)22118);
			}
			@@@var_0_bool:AddReply((int)511408, (int)-1, (int)12605);
			return 0;
		}
		var_418_bool = var_74_float == (int)22119;
		if(var_418_bool != 0) {
			var_419_string = "";
			func_2337(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520902);
			@@@var_0_bool:ClearReplies();
			var_421_bool = 0; var_422_object = Obj();
			var_422_object = var_1_object;
			func_11932(var_421_bool, var_422_object);
			if(var_421_bool != 0) {
				@@@var_0_bool:AddReply((int)520903, (int)-1, (int)22120);
			}
			@@@var_0_bool:AddReply((int)520904, (int)-1, (int)22121);
			return 0;
		}
		var_436_bool = var_74_float == (int)37886;
		if(var_436_bool != 0) {
			var_437_string = "";
			func_2337(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)536127);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536128, (int)13076, (int)37887);
			@@@var_0_bool:AddReply((int)511864, (int)-1, (int)13077);
			return 0;
		}
		var_446_bool = var_74_float == (int)13076;
		if(var_446_bool != 0) {
			var_447_string = "";
			func_2337(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)511863);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536129, (int)-1, (int)37888);
			return 0;
		}
		var_453_bool = var_74_float == (int)11956;
		if(var_453_bool != 0) {
			var_454_string = "";
			func_2337(var_75_int, "Rage");
			@@@var_0_bool:SetMessage((int)510816);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)510817, (int)11958, (int)11957);
			@@@var_0_bool:AddReply((int)511019, (int)12191, (int)12190);
			return 0;
		}
		var_463_bool = var_74_float == (int)12191;
		if(var_463_bool != 0) {
			var_464_string = "";
			func_2337(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)511020);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511021, (int)12193, (int)12192);
			return 0;
		}
		var_470_bool = var_74_float == (int)12193;
		if(var_470_bool != 0) {
			var_471_string = "";
			func_2337(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)511022);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511023, (int)12202, (int)12194);
			@@@var_0_bool:AddReply((int)511024, (int)12196, (int)12195);
			return 0;
		}
		var_480_bool = var_74_float == (int)12196;
		if(var_480_bool != 0) {
			var_481_string = "";
			func_2337(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)511025);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511026, (int)12198, (int)12197);
			return 0;
		}
		var_487_bool = var_74_float == (int)12198;
		if(var_487_bool != 0) {
			var_488_string = "";
			func_2337(var_75_int, "Fear");
			@@@var_0_bool:SetMessage((int)511027);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511029, (int)12202, (int)12201);
			return 0;
		}
		var_494_bool = var_74_float == (int)12202;
		if(var_494_bool != 0) {
			var_495_string = "";
			func_2337(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)511030);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511031, (int)12205, (int)12203);
			@@@var_0_bool:AddReply((int)511032, (int)12205, (int)12204);
			return 0;
		}
		var_504_bool = var_74_float == (int)12205;
		if(var_504_bool != 0) {
			var_505_string = "";
			func_2337(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)511033);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511034, (int)12208, (int)12207);
			@@@var_0_bool:AddReply((int)511037, (int)12211, (int)12210);
			return 0;
		}
		var_514_bool = var_74_float == (int)12211;
		if(var_514_bool != 0) {
			var_515_string = "";
			func_2337(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)511038);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511039, (int)12213, (int)12212);
			@@@var_0_bool:AddReply((int)511054, (int)12222, (int)12231);
			return 0;
		}
		var_524_bool = var_74_float == (int)12213;
		if(var_524_bool != 0) {
			var_525_string = "";
			func_2337(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)511040);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511041, (int)12215, (int)12214);
			return 0;
		}
		var_531_bool = var_74_float == (int)12215;
		if(var_531_bool != 0) {
			var_532_string = "";
			func_2337(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)511042);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511043, (int)12222, (int)12216);
			return 0;
		}
		var_538_bool = var_74_float == (int)12208;
		if(var_538_bool != 0) {
			var_539_string = "";
			func_2337(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)511035);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511036, (int)12217, (int)12209);
			return 0;
		}
		var_545_bool = var_74_float == (int)12217;
		if(var_545_bool != 0) {
			var_546_string = "";
			func_2337(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)511044);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511045, (int)12222, (int)12218);
			@@@var_0_bool:AddReply((int)511046, (int)12220, (int)12219);
			return 0;
		}
		var_555_bool = var_74_float == (int)12220;
		if(var_555_bool != 0) {
			var_556_string = "";
			func_2337(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)511047);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511048, (int)12222, (int)12221);
			return 0;
		}
		var_562_bool = var_74_float == (int)11958;
		if(var_562_bool != 0) {
			var_563_string = "";
			func_2337(var_75_int, "Rage");
			@@@var_0_bool:SetMessage((int)510818);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)510819, (int)12222, (int)11959);
			@@@var_0_bool:AddReply((int)510830, (int)11971, (int)11970);
			return 0;
		}
		var_572_bool = var_74_float == (int)11971;
		if(var_572_bool != 0) {
			var_573_string = "";
			func_2337(var_75_int, "Rage");
			@@@var_0_bool:SetMessage((int)510831);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)510832, (int)12222, (int)11972);
			@@@var_0_bool:AddReply((int)510833, (int)12227, (int)11974);
			return 0;
		}
		var_582_bool = var_74_float == (int)12227;
		if(var_582_bool != 0) {
			var_583_string = "";
			func_2337(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)511052);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511053, (int)12198, (int)12228);
			return 0;
		}
		var_589_bool = var_74_float == (int)12222;
		if(var_589_bool != 0) {
			var_590_string = "";
			func_2337(var_75_int, "Rage");
			@@@var_0_bool:SetMessage((int)511049);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511050, (int)12233, (int)12223);
			@@@var_0_bool:AddReply((int)511051, (int)12233, (int)12224);
			@@@var_0_bool:AddReply((int)511059, (int)12240, (int)12239);
			return 0;
		}
		var_602_bool = var_74_float == (int)12240;
		if(var_602_bool != 0) {
			var_603_string = "";
			func_2337(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)511060);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511061, (int)12233, (int)12241);
			return 0;
		}
		var_609_bool = var_74_float == (int)12233;
		if(var_609_bool != 0) {
			var_610_string = "";
			func_2337(var_75_int, "Rage");
			@@@var_0_bool:SetMessage((int)511055);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511056, (int)12237, (int)12235);
			@@@var_0_bool:AddReply((int)511057, (int)12237, (int)12236);
			return 0;
		}
		var_619_bool = var_74_float == (int)12237;
		if(var_619_bool != 0) {
			var_620_string = "";
			func_2337(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)511058);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511062, (int)-1, (int)12243);
			@@@var_0_bool:AddReply((int)511063, (int)-1, (int)12244);
			return 0;
		}
		var_629_bool = var_74_float == (int)12594;
		if(var_629_bool != 0) {
			var_630_string = "";
			func_2337(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)511397);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511398, (int)12596, (int)12595);
			return 0;
		}
		var_636_bool = var_74_float == (int)12596;
		if(var_636_bool != 0) {
			var_637_string = "";
			func_2337(var_75_int, "Fear");
			@@@var_0_bool:SetMessage((int)511399);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511400, (int)12598, (int)12597);
			@@@var_0_bool:AddReply((int)536121, (int)37879, (int)37878);
			return 0;
		}
		var_646_bool = var_74_float == (int)37879;
		if(var_646_bool != 0) {
			var_647_string = "";
			func_2337(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)536122);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538494, (int)40382, (int)40381);
			@@@var_0_bool:AddReply((int)538496, (int)12607, (int)40383);
			return 0;
		}
		var_656_bool = var_74_float == (int)40382;
		if(var_656_bool != 0) {
			var_657_string = "";
			func_2337(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)538495);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536123, (int)12607, (int)37880);
			return 0;
		}
		var_663_bool = var_74_float == (int)12598;
		if(var_663_bool != 0) {
			var_664_string = "";
			func_2337(var_75_int, "Fear");
			@@@var_0_bool:SetMessage((int)511401);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511409, (int)12607, (int)12606);
			@@@var_0_bool:AddReply((int)538497, (int)12607, (int)40384);
			return 0;
		}
		var_673_bool = var_74_float == (int)12607;
		if(var_673_bool != 0) {
			var_674_string = "";
			func_2337(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)511410);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511411, (int)12609, (int)12608);
			@@@var_0_bool:AddReply((int)536124, (int)37884, (int)37882);
			return 0;
		}
		var_683_bool = var_74_float == (int)12609;
		if(var_683_bool != 0) {
			var_684_string = "";
			func_2337(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)511412);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536125, (int)37884, (int)37883);
			return 0;
		}
		var_690_bool = var_74_float == (int)37884;
		if(var_690_bool != 0) {
			var_691_string = "";
			func_2337(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)536126);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511413, (int)-1, (int)12610);
			@@@var_0_bool:AddReply((int)511414, (int)12612, (int)12611);
			return 0;
		}
		var_700_bool = var_74_float == (int)12612;
		if(var_700_bool != 0) {
			var_701_string = "";
			func_2337(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)511415);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511416, (int)-1, (int)12613);
			return 0;
		}
		var_3_object = true;
		var_706_bool = 0;
		func_10509(var_706_bool);
		if(var_706_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x938";
	
}


task_13_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_int, var_27_int, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	if((int)1 != 0) {
		func_10244();
		var_79_bool = var_75_int == (int)12969;
		if(var_79_bool != 0) {
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_bool;
			func_11251();
		}
		var_152_bool = var_75_int == (int)12970;
		if(var_152_bool != 0) {
			var_153_object = Obj(); var_154_object = Obj();
			var_153_object = var_1_object;
			var_154_object = var_0_bool;
			func_11251();
		}
		var_156_bool = var_75_int == (int)13743;
		if(var_156_bool != 0) {
			var_157_object = Obj(); var_158_object = Obj();
			var_157_object = var_1_object;
			var_158_object = var_0_bool;
			func_11097();
		}
		var_162_bool = var_75_int == (int)13745;
		if(var_162_bool != 0) {
			var_163_object = Obj(); var_164_object = Obj();
			var_163_object = var_1_object;
			var_164_object = var_0_bool;
			func_10605();
			var_167_object = Obj(); var_168_object = Obj();
			var_167_object = var_1_object;
			var_168_object = var_0_bool;
			func_10521(var_168_object);
		}
		var_189_bool = var_75_int == (int)13746;
		if(var_189_bool != 0) {
			var_190_object = Obj(); var_191_object = Obj();
			var_190_object = var_1_object;
			var_191_object = var_0_bool;
			func_11103();
		}
		var_195_bool = var_75_int == (int)13748;
		if(var_195_bool != 0) {
			var_196_object = Obj(); var_197_object = Obj();
			var_196_object = var_1_object;
			var_197_object = var_0_bool;
			func_11090(var_197_object);
			var_236_object = Obj(); var_237_object = Obj();
			var_236_object = var_1_object;
			var_237_object = var_0_bool;
			func_11109();
		}
		var_239_bool = var_75_int == (int)22124;
		if(var_239_bool != 0) {
			var_240_object = Obj(); var_241_object = Obj();
			var_240_object = var_1_object;
			var_241_object = var_0_bool;
			func_10531();
			var_253_object = Obj(); var_254_object = Obj();
			var_253_object = var_1_object;
			var_254_object = var_0_bool;
			func_10542(var_254_object);
			var_257_object = Obj(); var_258_object = Obj();
			var_257_object = var_1_object;
			var_258_object = var_0_bool;
			func_10815();
		}
		var_262_bool = var_74_float == (int)12947;
		if(var_262_bool != 0) {
			var_263_bool = 0;
			var_263_bool = 0;
			var_264_bool = 0;
			var_264_bool = 0;
			var_265_bool = 0; var_266_object = Obj();
			var_266_object = var_1_object;
			func_11732(var_266_object);
			if(var_265_bool != 0) {
				var_271_bool = 0; var_272_object = Obj();
				var_272_object = var_1_object;
				func_11672(var_272_object);
				var_277_bool = var_271_bool == 0; //@nz
				if(var_277_bool != 0) {
					var_264_bool = 1;
				}
			}
			if(var_264_bool != 0) {
				var_278_bool = 0; var_279_object = Obj();
				var_279_object = var_1_object;
				func_11684(var_279_object);
				var_284_bool = var_278_bool == 0; //@nz
				if(var_284_bool != 0) {
					var_263_bool = 1;
				}
			}
			if(var_263_bool != 0) {
				var_285_object = Obj(); var_286_object = Obj();
				var_285_object = var_1_object;
				var_286_object = var_0_bool;
				func_11111();
				var_289_string = "";
				func_3542(var_75_int, "Rage");
				@@@var_0_bool:SetMessage((int)511741);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)511743, (int)12951, (int)12949);
				@@@var_0_bool:AddReply((int)511742, (int)12950, (int)12948);
				var_313_bool = 0; var_314_object = Obj();
				var_314_object = var_1_object;
				func_11660(var_314_object);
				var_319_bool = var_313_bool == 0; //@nz
				if(var_319_bool != 0) {
					@@@var_0_bool:AddReply((int)512586, (int)13766, (int)13753);
				}
				return 0;
			}
			var_323_string = "";
			func_3542(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)512573);
			@@@var_0_bool:ClearReplies();
			var_325_bool = 0;
			var_325_bool = 0;
			var_326_bool = 0; var_327_object = Obj();
			var_327_object = var_1_object;
			func_11696(var_327_object);
			if(var_326_bool != 0) {
				var_332_bool = 0; var_333_object = Obj();
				var_333_object = var_1_object;
				func_11708(var_333_object);
				if(var_332_bool != 0) {
					var_325_bool = 1;
				}
			}
			if(var_325_bool != 0) {
				@@@var_0_bool:AddReply((int)512574, (int)13744, (int)13743);
			}
			var_341_bool = 0;
			var_341_bool = 0;
			var_342_bool = 0; var_343_object = Obj();
			var_343_object = var_1_object;
			func_11672(var_343_object);
			if(var_342_bool != 0) {
				var_344_bool = 0; var_345_object = Obj();
				var_345_object = var_1_object;
				func_11720(var_345_object);
				if(var_344_bool != 0) {
					var_341_bool = 1;
				}
			}
			if(var_341_bool != 0) {
				@@@var_0_bool:AddReply((int)512577, (int)13747, (int)13746);
			}
			var_353_bool = 0; var_354_object = Obj();
			var_354_object = var_1_object;
			func_11922(var_353_bool, var_354_object);
			var_365_bool = var_353_bool == 0; //@nz
			if(var_365_bool != 0) {
				@@@var_0_bool:AddReply((int)520905, (int)22123, (int)22122);
			}
			@@@var_0_bool:AddReply((int)512580, (int)-1, (int)13749);
			return 0;
		}
		var_373_bool = var_74_float == (int)22123;
		if(var_373_bool != 0) {
			var_374_string = "";
			func_3542(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520906);
			@@@var_0_bool:ClearReplies();
			var_376_bool = 0; var_377_object = Obj();
			var_377_object = var_1_object;
			func_11932(var_376_bool, var_377_object);
			if(var_376_bool != 0) {
				@@@var_0_bool:AddReply((int)520907, (int)-1, (int)22124);
			}
			@@@var_0_bool:AddReply((int)520908, (int)-1, (int)22125);
			return 0;
		}
		var_391_bool = var_74_float == (int)13747;
		if(var_391_bool != 0) {
			var_392_string = "";
			func_3542(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)512578);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)512598, (int)13770, (int)13769);
			@@@var_0_bool:AddReply((int)512603, (int)13772, (int)13775);
			return 0;
		}
		var_401_bool = var_74_float == (int)13770;
		if(var_401_bool != 0) {
			var_402_string = "";
			func_3542(var_75_int, "Rage");
			@@@var_0_bool:SetMessage((int)512599);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)512600, (int)13772, (int)13771);
			@@@var_0_bool:AddReply((int)512602, (int)13772, (int)13773);
			return 0;
		}
		var_411_bool = var_74_float == (int)13772;
		if(var_411_bool != 0) {
			var_412_string = "";
			func_3542(var_75_int, "Rage");
			@@@var_0_bool:SetMessage((int)512601);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)512579, (int)-1, (int)13748);
			return 0;
		}
		var_418_bool = var_74_float == (int)13744;
		if(var_418_bool != 0) {
			var_419_string = "";
			func_3542(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)512575);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)512576, (int)-1, (int)13745);
			@@@var_0_bool:AddReply((int)515778, (int)16850, (int)16849);
			return 0;
		}
		var_428_bool = var_74_float == (int)16850;
		if(var_428_bool != 0) {
			var_429_string = "";
			func_3542(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)515779);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)515780, (int)-1, (int)16851);
			return 0;
		}
		var_435_bool = var_74_float == (int)13766;
		if(var_435_bool != 0) {
			var_436_string = "";
			func_3542(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)512596);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)512597, (int)12960, (int)13767);
			return 0;
		}
		var_442_bool = var_74_float == (int)12950;
		if(var_442_bool != 0) {
			var_443_string = "";
			func_3542(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)511744);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511746, (int)12954, (int)12952);
			return 0;
		}
		var_449_bool = var_74_float == (int)12954;
		if(var_449_bool != 0) {
			var_450_string = "";
			func_3542(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)511748);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511749, (int)12951, (int)12955);
			return 0;
		}
		var_456_bool = var_74_float == (int)12951;
		if(var_456_bool != 0) {
			var_457_string = "";
			func_3542(var_75_int, "Rage");
			@@@var_0_bool:SetMessage((int)511745);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511747, (int)12957, (int)12953);
			return 0;
		}
		var_463_bool = var_74_float == (int)12957;
		if(var_463_bool != 0) {
			var_464_string = "";
			func_3542(var_75_int, "Rage");
			@@@var_0_bool:SetMessage((int)511750);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511751, (int)12960, (int)12958);
			@@@var_0_bool:AddReply((int)511752, (int)-1, (int)12959);
			return 0;
		}
		var_473_bool = var_74_float == (int)12960;
		if(var_473_bool != 0) {
			var_474_string = "";
			func_3542(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)511753);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511754, (int)12964, (int)12962);
			@@@var_0_bool:AddReply((int)515777, (int)-1, (int)16848);
			return 0;
		}
		var_483_bool = var_74_float == (int)12964;
		if(var_483_bool != 0) {
			var_484_string = "";
			func_3542(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)511756);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511761, (int)-1, (int)12969);
			@@@var_0_bool:AddReply((int)511762, (int)-1, (int)12970);
			return 0;
		}
		var_3_object = true;
		var_492_bool = 0;
		func_10509(var_492_bool);
		if(var_492_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xded";
	
}


task_15_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_int, var_32_int, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	if((int)1 != 0) {
		func_10244();
		var_79_bool = var_75_int == (int)13670;
		if(var_79_bool != 0) {
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_bool;
			func_11056();
			var_84_object = Obj(); var_85_object = Obj();
			var_84_object = var_1_object;
			var_85_object = var_0_bool;
			func_11016();
			var_152_object = Obj(); var_153_object = Obj();
			var_152_object = var_1_object;
			var_153_object = var_0_bool;
			func_11068();
		}
		var_157_bool = var_75_int == (int)13671;
		if(var_157_bool != 0) {
			var_158_object = Obj(); var_159_object = Obj();
			var_158_object = var_1_object;
			var_159_object = var_0_bool;
			func_11056();
			var_160_object = Obj(); var_161_object = Obj();
			var_160_object = var_1_object;
			var_161_object = var_0_bool;
			func_11068();
		}
		var_163_bool = var_75_int == (int)13692;
		if(var_163_bool != 0) {
			var_164_object = Obj(); var_165_object = Obj();
			var_164_object = var_1_object;
			var_165_object = var_0_bool;
			func_11016();
		}
		var_167_bool = var_75_int == (int)13686;
		if(var_167_bool != 0) {
			var_168_object = Obj(); var_169_object = Obj();
			var_168_object = var_1_object;
			var_169_object = var_0_bool;
			func_11062();
		}
		var_173_bool = var_75_int == (int)13689;
		if(var_173_bool != 0) {
			var_174_object = Obj(); var_175_object = Obj();
			var_174_object = var_1_object;
			var_175_object = var_0_bool;
			func_10605();
			var_178_object = Obj(); var_179_object = Obj();
			var_178_object = var_1_object;
			var_179_object = var_0_bool;
			func_11117();
			var_201_object = Obj(); var_202_object = Obj();
			var_201_object = var_1_object;
			var_202_object = var_0_bool;
			func_10595(var_202_object);
		}
		var_223_bool = var_75_int == (int)37901;
		if(var_223_bool != 0) {
			var_224_object = Obj(); var_225_object = Obj();
			var_224_object = var_1_object;
			var_225_object = var_0_bool;
			func_11117();
			var_226_object = Obj(); var_227_object = Obj();
			var_226_object = var_1_object;
			var_227_object = var_0_bool;
			func_10595(var_227_object);
			var_228_object = Obj(); var_229_object = Obj();
			var_228_object = var_1_object;
			var_229_object = var_0_bool;
			func_10605();
		}
		var_231_bool = var_75_int == (int)13696;
		if(var_231_bool != 0) {
			var_232_object = Obj(); var_233_object = Obj();
			var_232_object = var_1_object;
			var_233_object = var_0_bool;
			func_11074();
		}
		var_237_bool = var_75_int == (int)13698;
		if(var_237_bool != 0) {
			var_238_object = Obj(); var_239_object = Obj();
			var_238_object = var_1_object;
			var_239_object = var_0_bool;
			func_11080();
		}
		var_252_bool = var_75_int == (int)37902;
		if(var_252_bool != 0) {
			var_253_object = Obj(); var_254_object = Obj();
			var_253_object = var_1_object;
			var_254_object = var_0_bool;
			func_11080();
		}
		var_256_bool = var_75_int == (int)22128;
		if(var_256_bool != 0) {
			var_257_object = Obj(); var_258_object = Obj();
			var_257_object = var_1_object;
			var_258_object = var_0_bool;
			func_10815();
			var_261_object = Obj(); var_262_object = Obj();
			var_261_object = var_1_object;
			var_262_object = var_0_bool;
			func_10542(var_262_object);
			var_265_object = Obj(); var_266_object = Obj();
			var_265_object = var_1_object;
			var_266_object = var_0_bool;
			func_10531();
		}
		var_279_bool = var_74_float == (int)13330;
		if(var_279_bool != 0) {
			var_280_bool = 0; var_281_object = Obj();
			var_281_object = var_1_object;
			func_11624(var_281_object);
			if(var_280_bool != 0) {
				var_288_string = "";
				func_4289(var_75_int, "Fear");
				@@@var_0_bool:SetMessage((int)512104);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)512105, (int)13334, (int)13331);
				@@@var_0_bool:AddReply((int)512106, (int)13333, (int)13332);
				return 0;
			}
			var_312_string = "";
			func_4289(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)512515);
			@@@var_0_bool:ClearReplies();
			var_314_bool = 0; var_315_object = Obj();
			var_315_object = var_1_object;
			func_11612(var_315_object);
			if(var_314_bool != 0) {
				@@@var_0_bool:AddReply((int)512520, (int)13691, (int)13690);
			}
			var_323_bool = 0;
			var_323_bool = 0;
			var_324_bool = 0; var_325_object = Obj();
			var_325_object = var_1_object;
			func_11636(var_325_object);
			if(var_324_bool != 0) {
				var_330_bool = 0; var_331_object = Obj();
				var_331_object = var_1_object;
				func_11744(var_331_object);
				if(var_330_bool != 0) {
					var_323_bool = 1;
				}
			}
			if(var_323_bool != 0) {
				@@@var_0_bool:AddReply((int)512516, (int)13688, (int)13686);
			}
			var_339_bool = 0;
			var_339_bool = 0;
			var_340_bool = 0;
			var_340_bool = 0;
			var_341_bool = 0; var_342_object = Obj();
			var_342_object = var_1_object;
			func_11648(var_342_object);
			if(var_341_bool != 0) {
				var_347_bool = 0; var_348_object = Obj();
				var_348_object = var_1_object;
				func_11756(var_348_object);
				if(var_347_bool != 0) {
					var_340_bool = 1;
				}
			}
			if(var_340_bool != 0) {
				var_353_bool = 0; var_354_object = Obj();
				var_354_object = var_1_object;
				func_11744(var_354_object);
				var_355_bool = var_353_bool == 0; //@nz
				if(var_355_bool != 0) {
					var_339_bool = 1;
				}
			}
			if(var_339_bool != 0) {
				@@@var_0_bool:AddReply((int)512526, (int)13697, (int)13696);
			}
			var_359_bool = 0; var_360_object = Obj();
			var_360_object = var_1_object;
			func_11922(var_359_bool, var_360_object);
			var_371_bool = var_359_bool == 0; //@nz
			if(var_371_bool != 0) {
				@@@var_0_bool:AddReply((int)520909, (int)22127, (int)22126);
			}
			@@@var_0_bool:AddReply((int)512517, (int)-1, (int)13687);
			return 0;
		}
		var_379_bool = var_74_float == (int)22127;
		if(var_379_bool != 0) {
			var_380_string = "";
			func_4289(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520910);
			@@@var_0_bool:ClearReplies();
			var_382_bool = 0; var_383_object = Obj();
			var_383_object = var_1_object;
			func_11932(var_382_bool, var_383_object);
			if(var_382_bool != 0) {
				@@@var_0_bool:AddReply((int)520911, (int)-1, (int)22128);
			}
			@@@var_0_bool:AddReply((int)520912, (int)-1, (int)22129);
			return 0;
		}
		var_397_bool = var_74_float == (int)13697;
		if(var_397_bool != 0) {
			var_398_string = "";
			func_4289(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)512527);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)512528, (int)-1, (int)13698);
			@@@var_0_bool:AddReply((int)536143, (int)-1, (int)37902);
			return 0;
		}
		var_407_bool = var_74_float == (int)13688;
		if(var_407_bool != 0) {
			var_408_string = "";
			func_4289(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)512518);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)512519, (int)-1, (int)13689);
			@@@var_0_bool:AddReply((int)536142, (int)-1, (int)37901);
			return 0;
		}
		var_417_bool = var_74_float == (int)13691;
		if(var_417_bool != 0) {
			var_418_string = "";
			func_4289(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)512521);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)512522, (int)-1, (int)13692);
			return 0;
		}
		var_424_bool = var_74_float == (int)13333;
		if(var_424_bool != 0) {
			var_425_string = "";
			func_4289(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)512107);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)512493, (int)13334, (int)13662);
			return 0;
		}
		var_431_bool = var_74_float == (int)13334;
		if(var_431_bool != 0) {
			var_432_string = "";
			func_4289(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)512108);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)512109, (int)13336, (int)13335);
			@@@var_0_bool:AddReply((int)541861, (int)13667, (int)44088);
			return 0;
		}
		var_441_bool = var_74_float == (int)13336;
		if(var_441_bool != 0) {
			var_442_string = "";
			func_4289(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)512110);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)512111, (int)13338, (int)13337);
			@@@var_0_bool:AddReply((int)541862, (int)13667, (int)44090);
			return 0;
		}
		var_451_bool = var_74_float == (int)13338;
		if(var_451_bool != 0) {
			var_452_string = "";
			func_4289(var_75_int, "Fear");
			@@@var_0_bool:SetMessage((int)512112);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)512494, (int)13665, (int)13664);
			@@@var_0_bool:AddReply((int)541863, (int)44093, (int)44092);
			return 0;
		}
		var_461_bool = var_74_float == (int)44093;
		if(var_461_bool != 0) {
			var_462_string = "";
			func_4289(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)541864);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)541865, (int)13667, (int)44094);
			return 0;
		}
		var_468_bool = var_74_float == (int)13665;
		if(var_468_bool != 0) {
			var_469_string = "";
			func_4289(var_75_int, "Fear");
			@@@var_0_bool:SetMessage((int)512495);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)512496, (int)13667, (int)13666);
			@@@var_0_bool:AddReply((int)541866, (int)13667, (int)44096);
			return 0;
		}
		var_478_bool = var_74_float == (int)13667;
		if(var_478_bool != 0) {
			var_479_string = "";
			func_4289(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)512497);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)512498, (int)13669, (int)13668);
			return 0;
		}
		var_485_bool = var_74_float == (int)13669;
		if(var_485_bool != 0) {
			var_486_string = "";
			func_4289(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)512499);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)512500, (int)-1, (int)13670);
			@@@var_0_bool:AddReply((int)512501, (int)-1, (int)13671);
			return 0;
		}
		var_3_object = true;
		var_494_bool = 0;
		func_10509(var_494_bool);
		if(var_494_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x10d8";
	
}


task_17_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_int, var_37_int, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	if((int)1 != 0) {
		func_10244();
		var_79_bool = var_75_int == (int)34829;
		if(var_79_bool != 0) {
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_bool;
			func_11229();
		}
		var_124_bool = var_75_int == (int)37748;
		if(var_124_bool != 0) {
			var_125_object = Obj(); var_126_object = Obj();
			var_125_object = var_1_object;
			var_126_object = var_0_bool;
			func_11229();
		}
		var_128_bool = var_75_int == (int)14856;
		if(var_128_bool != 0) {
			var_129_object = Obj(); var_130_object = Obj();
			var_129_object = var_1_object;
			var_130_object = var_0_bool;
			func_11156();
			var_133_object = Obj(); var_134_object = Obj();
			var_133_object = var_1_object;
			var_134_object = var_0_bool;
			func_11293();
			var_159_object = Obj(); var_160_object = Obj();
			var_159_object = var_1_object;
			var_160_object = var_0_bool;
			func_10821(var_160_object);
		}
		var_186_bool = var_75_int == (int)14857;
		if(var_186_bool != 0) {
			var_187_object = Obj(); var_188_object = Obj();
			var_187_object = var_1_object;
			var_188_object = var_0_bool;
			func_11156();
			var_189_object = Obj(); var_190_object = Obj();
			var_189_object = var_1_object;
			var_190_object = var_0_bool;
			func_11293();
			var_191_object = Obj(); var_192_object = Obj();
			var_191_object = var_1_object;
			var_192_object = var_0_bool;
			func_10821(var_192_object);
		}
		var_194_bool = var_75_int == (int)14858;
		if(var_194_bool != 0) {
			var_195_object = Obj(); var_196_object = Obj();
			var_195_object = var_1_object;
			var_196_object = var_0_bool;
			func_11156();
			var_197_object = Obj(); var_198_object = Obj();
			var_197_object = var_1_object;
			var_198_object = var_0_bool;
			func_11293();
			var_199_object = Obj(); var_200_object = Obj();
			var_199_object = var_1_object;
			var_200_object = var_0_bool;
			func_10821(var_200_object);
		}
		var_202_bool = var_75_int == (int)14839;
		if(var_202_bool != 0) {
			var_203_object = Obj(); var_204_object = Obj();
			var_203_object = var_1_object;
			var_204_object = var_0_bool;
			func_11162();
		}
		var_208_bool = var_75_int == (int)40671;
		if(var_208_bool != 0) {
			var_209_object = Obj(); var_210_object = Obj();
			var_209_object = var_1_object;
			var_210_object = var_0_bool;
			func_11168();
			var_238_object = Obj(); var_239_object = Obj();
			var_238_object = var_1_object;
			var_239_object = var_0_bool;
			func_10737();
			var_248_object = Obj(); var_249_object = Obj();
			var_248_object = var_1_object;
			var_249_object = var_0_bool;
			func_10611(var_249_object);
		}
		var_256_bool = var_75_int == (int)40672;
		if(var_256_bool != 0) {
			var_257_object = Obj(); var_258_object = Obj();
			var_257_object = var_1_object;
			var_258_object = var_0_bool;
			func_11168();
			var_259_object = Obj(); var_260_object = Obj();
			var_259_object = var_1_object;
			var_260_object = var_0_bool;
			func_10737();
			var_261_object = Obj(); var_262_object = Obj();
			var_261_object = var_1_object;
			var_262_object = var_0_bool;
			func_10611(var_262_object);
		}
		var_264_bool = var_75_int == (int)40667;
		if(var_264_bool != 0) {
			var_265_object = Obj(); var_266_object = Obj();
			var_265_object = var_1_object;
			var_266_object = var_0_bool;
			func_11168();
			var_267_object = Obj(); var_268_object = Obj();
			var_267_object = var_1_object;
			var_268_object = var_0_bool;
			func_10737();
			var_269_object = Obj(); var_270_object = Obj();
			var_269_object = var_1_object;
			var_270_object = var_0_bool;
			func_10611(var_270_object);
		}
		var_272_bool = var_75_int == (int)14862;
		if(var_272_bool != 0) {
			var_273_object = Obj(); var_274_object = Obj();
			var_273_object = var_1_object;
			var_274_object = var_0_bool;
			func_11205();
		}
		var_278_bool = var_75_int == (int)14894;
		if(var_278_bool != 0) {
			var_279_object = Obj(); var_280_object = Obj();
			var_279_object = var_1_object;
			var_280_object = var_0_bool;
			func_11211();
		}
		var_284_bool = var_75_int == (int)14873;
		if(var_284_bool != 0) {
			var_285_object = Obj(); var_286_object = Obj();
			var_285_object = var_1_object;
			var_286_object = var_0_bool;
			func_11223();
		}
		var_290_bool = var_75_int == (int)14867;
		if(var_290_bool != 0) {
			var_291_object = Obj(); var_292_object = Obj();
			var_291_object = var_1_object;
			var_292_object = var_0_bool;
			func_11217();
		}
		var_296_bool = var_75_int == (int)22141;
		if(var_296_bool != 0) {
			var_297_object = Obj(); var_298_object = Obj();
			var_297_object = var_1_object;
			var_298_object = var_0_bool;
			func_10531();
			var_310_object = Obj(); var_311_object = Obj();
			var_310_object = var_1_object;
			var_311_object = var_0_bool;
			func_10542(var_311_object);
			var_330_object = Obj(); var_331_object = Obj();
			var_330_object = var_1_object;
			var_331_object = var_0_bool;
			func_10815();
		}
		var_335_bool = var_75_int == (int)34843;
		if(var_335_bool != 0) {
			var_336_object = Obj(); var_337_object = Obj();
			var_336_object = var_1_object;
			var_337_object = var_0_bool;
			func_10671();
			var_356_object = Obj(); var_357_object = Obj();
			var_356_object = var_1_object;
			var_357_object = var_0_bool;
			func_10783(var_357_object);
		}
		var_364_bool = var_75_int == (int)37765;
		if(var_364_bool != 0) {
			var_365_object = Obj(); var_366_object = Obj();
			var_365_object = var_1_object;
			var_366_object = var_0_bool;
			func_10671();
			var_367_object = Obj(); var_368_object = Obj();
			var_367_object = var_1_object;
			var_368_object = var_0_bool;
			func_10783(var_368_object);
		}
		var_370_bool = var_74_float == (int)34828;
		if(var_370_bool != 0) {
			var_371_bool = 0; var_372_object = Obj();
			var_372_object = var_1_object;
			func_11408(var_372_object);
			if(var_371_bool != 0) {
				var_377_object = Obj(); var_378_object = Obj();
				var_377_object = var_1_object;
				var_378_object = var_0_bool;
				func_10665();
				var_381_object = Obj(); var_382_object = Obj();
				var_381_object = var_1_object;
				var_382_object = var_0_bool;
				func_10694();
				var_385_string = "";
				func_5162(var_75_int, "Sly");
				@@@var_0_bool:SetMessage((int)533324);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)535993, (int)37724, (int)37723);
				@@@var_0_bool:AddReply((int)536001, (int)37724, (int)37731);
				return 0;
			}
			var_409_string = "";
			func_5162(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)512410);
			@@@var_0_bool:ClearReplies();
			var_411_bool = 0;
			var_411_bool = 0;
			var_412_bool = 0;
			var_412_bool = 0;
			var_413_bool = 0; var_414_object = Obj();
			var_414_object = var_1_object;
			func_11768(var_414_object);
			if(var_413_bool != 0) {
				var_419_bool = 0; var_420_object = Obj();
				var_420_object = var_1_object;
				func_11792(var_420_object);
				if(var_419_bool != 0) {
					var_412_bool = 1;
				}
			}
			if(var_412_bool != 0) {
				var_425_bool = 0; var_426_object = Obj();
				var_426_object = var_1_object;
				func_11780(var_426_object);
				var_431_bool = var_425_bool == 0; //@nz
				if(var_431_bool != 0) {
					var_411_bool = 1;
				}
			}
			if(var_411_bool != 0) {
				@@@var_0_bool:AddReply((int)512412, (int)13577, (int)13576);
			}
			var_435_bool = 0;
			var_435_bool = 0;
			var_436_bool = 0; var_437_object = Obj();
			var_437_object = var_1_object;
			func_11780(var_437_object);
			if(var_436_bool != 0) {
				var_438_bool = 0; var_439_object = Obj();
				var_439_object = var_1_object;
				func_11804(var_439_object);
				if(var_438_bool != 0) {
					var_435_bool = 1;
				}
			}
			if(var_435_bool != 0) {
				@@@var_0_bool:AddReply((int)513588, (int)14840, (int)14839);
			}
			var_447_bool = 0;
			var_447_bool = 0;
			var_448_bool = 0;
			var_448_bool = 0;
			var_449_bool = 0;
			var_449_bool = 0;
			var_450_bool = 0; var_451_object = Obj();
			var_451_object = var_1_object;
			func_11816(var_451_object);
			if(var_450_bool != 0) {
				var_456_bool = 0; var_457_object = Obj();
				var_457_object = var_1_object;
				func_11780(var_457_object);
				if(var_456_bool != 0) {
					var_449_bool = 1;
				}
			}
			if(var_449_bool != 0) {
				var_458_bool = 0; var_459_object = Obj();
				var_459_object = var_1_object;
				func_11828(var_459_object);
				if(var_458_bool != 0) {
					var_448_bool = 1;
				}
			}
			if(var_448_bool != 0) {
				var_464_bool = 0; var_465_object = Obj();
				var_465_object = var_1_object;
				func_11864(var_465_object);
				var_470_bool = var_464_bool == 0; //@nz
				if(var_470_bool != 0) {
					var_447_bool = 1;
				}
			}
			if(var_447_bool != 0) {
				@@@var_0_bool:AddReply((int)513607, (int)14868, (int)14862);
			}
			var_474_bool = 0;
			var_474_bool = 0;
			var_475_bool = 0;
			var_475_bool = 0;
			var_476_bool = 0; var_477_object = Obj();
			var_477_object = var_1_object;
			func_11816(var_477_object);
			if(var_476_bool != 0) {
				var_478_bool = 0; var_479_object = Obj();
				var_479_object = var_1_object;
				func_11852(var_479_object);
				if(var_478_bool != 0) {
					var_475_bool = 1;
				}
			}
			if(var_475_bool != 0) {
				var_484_bool = 0; var_485_object = Obj();
				var_485_object = var_1_object;
				func_11876(var_485_object);
				var_490_bool = var_484_bool == 0; //@nz
				if(var_490_bool != 0) {
					var_474_bool = 1;
				}
			}
			if(var_474_bool != 0) {
				@@@var_0_bool:AddReply((int)513618, (int)14874, (int)14873);
			}
			var_494_bool = 0;
			var_494_bool = 0;
			var_495_bool = 0;
			var_495_bool = 0;
			var_496_bool = 0; var_497_object = Obj();
			var_497_object = var_1_object;
			func_11780(var_497_object);
			var_498_bool = var_496_bool == 0; //@nz
			if(var_498_bool != 0) {
				var_499_bool = 0; var_500_object = Obj();
				var_500_object = var_1_object;
				func_11768(var_500_object);
				if(var_499_bool != 0) {
					var_495_bool = 1;
				}
			}
			if(var_495_bool != 0) {
				var_501_bool = 0; var_502_object = Obj();
				var_502_object = var_1_object;
				func_11840(var_502_object);
				if(var_501_bool != 0) {
					var_494_bool = 1;
				}
			}
			if(var_494_bool != 0) {
				@@@var_0_bool:AddReply((int)513612, (int)14863, (int)14867);
			}
			var_510_bool = 0; var_511_object = Obj();
			var_511_object = var_1_object;
			func_11922(var_510_bool, var_511_object);
			var_522_bool = var_510_bool == 0; //@nz
			if(var_522_bool != 0) {
				@@@var_0_bool:AddReply((int)520922, (int)22140, (int)22139);
			}
			var_526_bool = 0; var_527_object = Obj();
			var_527_object = var_1_object;
			func_11420(var_527_object);
			if(var_526_bool != 0) {
				@@@var_0_bool:AddReply((int)533337, (int)37749, (int)34841);
			}
			@@@var_0_bool:AddReply((int)512411, (int)-1, (int)13575);
			return 0;
		}
		var_539_bool = var_74_float == (int)37749;
		if(var_539_bool != 0) {
			var_540_string = "";
			func_5162(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)536015);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536016, (int)37751, (int)37750);
			@@@var_0_bool:AddReply((int)536021, (int)37751, (int)37755);
			return 0;
		}
		var_549_bool = var_74_float == (int)37751;
		if(var_549_bool != 0) {
			var_550_string = "";
			func_5162(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)536017);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536018, (int)37753, (int)37752);
			return 0;
		}
		var_556_bool = var_74_float == (int)37753;
		if(var_556_bool != 0) {
			var_557_string = "";
			func_5162(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)536019);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536020, (int)34842, (int)37754);
			@@@var_0_bool:AddReply((int)536024, (int)37760, (int)37759);
			return 0;
		}
		var_566_bool = var_74_float == (int)37760;
		if(var_566_bool != 0) {
			var_567_string = "";
			func_5162(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)536025);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536026, (int)37758, (int)37761);
			@@@var_0_bool:AddReply((int)536027, (int)34842, (int)37763);
			return 0;
		}
		var_576_bool = var_74_float == (int)34842;
		if(var_576_bool != 0) {
			var_577_string = "";
			func_5162(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)533338);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536022, (int)37758, (int)37757);
			@@@var_0_bool:AddReply((int)536028, (int)-1, (int)37765);
			return 0;
		}
		var_586_bool = var_74_float == (int)37758;
		if(var_586_bool != 0) {
			var_587_string = "";
			func_5162(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)536023);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)533339, (int)-1, (int)34843);
			return 0;
		}
		var_593_bool = var_74_float == (int)22140;
		if(var_593_bool != 0) {
			var_594_string = "";
			func_5162(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520923);
			@@@var_0_bool:ClearReplies();
			var_596_bool = 0; var_597_object = Obj();
			var_597_object = var_1_object;
			func_11932(var_596_bool, var_597_object);
			if(var_596_bool != 0) {
				@@@var_0_bool:AddReply((int)520924, (int)-1, (int)22141);
			}
			@@@var_0_bool:AddReply((int)520925, (int)-1, (int)22142);
			return 0;
		}
		var_611_bool = var_74_float == (int)14863;
		if(var_611_bool != 0) {
			var_612_string = "";
			func_5162(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)513608);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)513609, (int)14865, (int)14864);
			return 0;
		}
		var_618_bool = var_74_float == (int)14865;
		if(var_618_bool != 0) {
			var_619_string = "";
			func_5162(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)513610);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)513611, (int)14869, (int)14866);
			return 0;
		}
		var_625_bool = var_74_float == (int)14869;
		if(var_625_bool != 0) {
			var_626_string = "";
			func_5162(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)513614);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)513615, (int)14871, (int)14870);
			return 0;
		}
		var_632_bool = var_74_float == (int)14871;
		if(var_632_bool != 0) {
			var_633_string = "";
			func_5162(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)513616);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)513617, (int)-1, (int)14872);
			return 0;
		}
		var_639_bool = var_74_float == (int)14874;
		if(var_639_bool != 0) {
			var_640_string = "";
			func_5162(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)513619);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)513620, (int)14876, (int)14875);
			return 0;
		}
		var_646_bool = var_74_float == (int)14876;
		if(var_646_bool != 0) {
			var_647_string = "";
			func_5162(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)513621);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)513623, (int)14879, (int)14878);
			@@@var_0_bool:AddReply((int)513622, (int)-1, (int)14877);
			return 0;
		}
		var_656_bool = var_74_float == (int)14879;
		if(var_656_bool != 0) {
			var_657_string = "";
			func_5162(var_75_int, "Rage");
			@@@var_0_bool:SetMessage((int)513624);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)513626, (int)14882, (int)14881);
			@@@var_0_bool:AddReply((int)513625, (int)-1, (int)14880);
			return 0;
		}
		var_666_bool = var_74_float == (int)14882;
		if(var_666_bool != 0) {
			var_667_string = "";
			func_5162(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)513627);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)513628, (int)-1, (int)14883);
			return 0;
		}
		var_673_bool = var_74_float == (int)14868;
		if(var_673_bool != 0) {
			var_674_string = "";
			func_5162(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)513613);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)513629, (int)14885, (int)14884);
			return 0;
		}
		var_680_bool = var_74_float == (int)14885;
		if(var_680_bool != 0) {
			var_681_string = "";
			func_5162(var_75_int, "Rage");
			@@@var_0_bool:SetMessage((int)513630);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)513631, (int)14889, (int)14886);
			@@@var_0_bool:AddReply((int)513632, (int)14888, (int)14887);
			return 0;
		}
		var_690_bool = var_74_float == (int)14888;
		if(var_690_bool != 0) {
			var_691_string = "";
			func_5162(var_75_int, "Fear");
			@@@var_0_bool:SetMessage((int)513633);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)513636, (int)14889, (int)14891);
			return 0;
		}
		var_697_bool = var_74_float == (int)14889;
		if(var_697_bool != 0) {
			var_698_string = "";
			func_5162(var_75_int, "Rage");
			@@@var_0_bool:SetMessage((int)513634);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)513635, (int)14893, (int)14890);
			return 0;
		}
		var_704_bool = var_74_float == (int)14893;
		if(var_704_bool != 0) {
			var_705_string = "";
			func_5162(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)513637);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)513638, (int)-1, (int)14894);
			return 0;
		}
		var_711_bool = var_74_float == (int)14840;
		if(var_711_bool != 0) {
			var_712_string = "";
			func_5162(var_75_int, "Rage");
			@@@var_0_bool:SetMessage((int)513589);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)513591, (int)14843, (int)14842);
			@@@var_0_bool:AddReply((int)513590, (int)14845, (int)14841);
			return 0;
		}
		var_721_bool = var_74_float == (int)14845;
		if(var_721_bool != 0) {
			var_722_string = "";
			func_5162(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)513594);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)513595, (int)14847, (int)14846);
			return 0;
		}
		var_728_bool = var_74_float == (int)14847;
		if(var_728_bool != 0) {
			var_729_string = "";
			func_5162(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)513596);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)513597, (int)14843, (int)14848);
			return 0;
		}
		var_735_bool = var_74_float == (int)14843;
		if(var_735_bool != 0) {
			var_736_string = "";
			func_5162(var_75_int, "Rage");
			@@@var_0_bool:SetMessage((int)513592);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)513598, (int)14824, (int)14850);
			@@@var_0_bool:AddReply((int)513593, (int)13583, (int)14844);
			return 0;
		}
		var_745_bool = var_74_float == (int)13583;
		if(var_745_bool != 0) {
			var_746_string = "";
			func_5162(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)512419);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)512423, (int)13588, (int)13587);
			return 0;
		}
		var_752_bool = var_74_float == (int)13588;
		if(var_752_bool != 0) {
			var_753_string = "";
			func_5162(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)512424);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)512425, (int)13594, (int)13590);
			@@@var_0_bool:AddReply((int)512426, (int)13592, (int)13591);
			return 0;
		}
		var_762_bool = var_74_float == (int)13592;
		if(var_762_bool != 0) {
			var_763_string = "";
			func_5162(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)512427);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)512430, (int)13594, (int)13596);
			return 0;
		}
		var_769_bool = var_74_float == (int)13594;
		if(var_769_bool != 0) {
			var_770_string = "";
			func_5162(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)512428);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)512429, (int)13599, (int)13595);
			return 0;
		}
		var_776_bool = var_74_float == (int)13599;
		if(var_776_bool != 0) {
			var_777_string = "";
			func_5162(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)512432);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)512433, (int)13601, (int)13600);
			return 0;
		}
		var_783_bool = var_74_float == (int)13601;
		if(var_783_bool != 0) {
			var_784_string = "";
			func_5162(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)512434);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)513581, (int)14826, (int)14830);
			@@@var_0_bool:AddReply((int)512435, (int)14833, (int)13602);
			return 0;
		}
		var_793_bool = var_74_float == (int)14824;
		if(var_793_bool != 0) {
			var_794_string = "";
			func_5162(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)513575);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)513576, (int)14826, (int)14825);
			return 0;
		}
		var_800_bool = var_74_float == (int)14826;
		if(var_800_bool != 0) {
			var_801_string = "";
			func_5162(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)513577);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)513578, (int)14828, (int)14827);
			return 0;
		}
		var_807_bool = var_74_float == (int)14828;
		if(var_807_bool != 0) {
			var_808_string = "";
			func_5162(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)513579);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)513580, (int)14833, (int)14829);
			@@@var_0_bool:AddReply((int)535991, (int)14837, (int)37720);
			@@@var_0_bool:AddReply((int)535992, (int)14837, (int)37721);
			return 0;
		}
		var_820_bool = var_74_float == (int)14833;
		if(var_820_bool != 0) {
			var_821_string = "";
			func_5162(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)513582);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)513583, (int)14835, (int)14834);
			return 0;
		}
		var_827_bool = var_74_float == (int)14835;
		if(var_827_bool != 0) {
			var_828_string = "";
			func_5162(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)513584);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)513585, (int)14837, (int)14836);
			return 0;
		}
		var_834_bool = var_74_float == (int)14837;
		if(var_834_bool != 0) {
			var_835_string = "";
			func_5162(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)513586);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)513587, (int)40669, (int)14838);
			@@@var_0_bool:AddReply((int)538755, (int)-1, (int)40667);
			return 0;
		}
		var_844_bool = var_74_float == (int)40669;
		if(var_844_bool != 0) {
			var_845_string = "";
			func_5162(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)538756);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538757, (int)-1, (int)40671);
			@@@var_0_bool:AddReply((int)538758, (int)-1, (int)40672);
			return 0;
		}
		var_854_bool = var_74_float == (int)13577;
		if(var_854_bool != 0) {
			var_855_string = "";
			func_5162(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)512413);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)512420, (int)13585, (int)13584);
			@@@var_0_bool:AddReply((int)512414, (int)13579, (int)13578);
			return 0;
		}
		var_864_bool = var_74_float == (int)13579;
		if(var_864_bool != 0) {
			var_865_string = "";
			func_5162(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)512415);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)512416, (int)13581, (int)13580);
			return 0;
		}
		var_871_bool = var_74_float == (int)13581;
		if(var_871_bool != 0) {
			var_872_string = "";
			func_5162(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)512417);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)512418, (int)14853, (int)13582);
			return 0;
		}
		var_878_bool = var_74_float == (int)13585;
		if(var_878_bool != 0) {
			var_879_string = "";
			func_5162(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)512421);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)513574, (int)14851, (int)14823);
			@@@var_0_bool:AddReply((int)513602, (int)14853, (int)14854);
			return 0;
		}
		var_888_bool = var_74_float == (int)14851;
		if(var_888_bool != 0) {
			var_889_string = "";
			func_5162(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)513599);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)513600, (int)14853, (int)14852);
			return 0;
		}
		var_895_bool = var_74_float == (int)14853;
		if(var_895_bool != 0) {
			var_896_string = "";
			func_5162(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)513601);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)513603, (int)-1, (int)14856);
			@@@var_0_bool:AddReply((int)513604, (int)-1, (int)14857);
			@@@var_0_bool:AddReply((int)513605, (int)-1, (int)14858);
			return 0;
		}
		var_908_bool = var_74_float == (int)37724;
		if(var_908_bool != 0) {
			var_909_string = "";
			func_5162(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)535994);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)535995, (int)37735, (int)37725);
			@@@var_0_bool:AddReply((int)536002, (int)37726, (int)37733);
			return 0;
		}
		var_918_bool = var_74_float == (int)37735;
		if(var_918_bool != 0) {
			var_919_string = "";
			func_5162(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)536003);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536005, (int)37738, (int)37737);
			@@@var_0_bool:AddReply((int)536007, (int)37740, (int)37739);
			return 0;
		}
		var_928_bool = var_74_float == (int)37740;
		if(var_928_bool != 0) {
			var_929_string = "";
			func_5162(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)536008);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536009, (int)37726, (int)37741);
			return 0;
		}
		var_935_bool = var_74_float == (int)37738;
		if(var_935_bool != 0) {
			var_936_string = "";
			func_5162(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)536006);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536004, (int)37726, (int)37736);
			@@@var_0_bool:AddReply((int)536011, (int)37745, (int)37744);
			return 0;
		}
		var_945_bool = var_74_float == (int)37745;
		if(var_945_bool != 0) {
			var_946_string = "";
			func_5162(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)536012);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536013, (int)37726, (int)37746);
			return 0;
		}
		var_952_bool = var_74_float == (int)37726;
		if(var_952_bool != 0) {
			var_953_string = "";
			func_5162(var_75_int, "Rage");
			@@@var_0_bool:SetMessage((int)535996);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)535997, (int)37728, (int)37727);
			@@@var_0_bool:AddReply((int)536010, (int)37728, (int)37742);
			return 0;
		}
		var_962_bool = var_74_float == (int)37728;
		if(var_962_bool != 0) {
			var_963_string = "";
			func_5162(var_75_int, "Rage");
			@@@var_0_bool:SetMessage((int)535998);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)535999, (int)37730, (int)37729);
			return 0;
		}
		var_969_bool = var_74_float == (int)37730;
		if(var_969_bool != 0) {
			var_970_string = "";
			func_5162(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)536000);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)533325, (int)-1, (int)34829);
			@@@var_0_bool:AddReply((int)536014, (int)-1, (int)37748);
			return 0;
		}
		var_3_object = true;
		var_978_bool = 0;
		func_10509(var_978_bool);
		if(var_978_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1441";
	
}


task_19_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_int, var_42_int, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	if((int)1 != 0) {
		func_10244();
		var_79_bool = var_75_int == (int)22136;
		if(var_79_bool != 0) {
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_bool;
			func_10531();
			var_93_object = Obj(); var_94_object = Obj();
			var_93_object = var_1_object;
			var_94_object = var_0_bool;
			func_10542(var_94_object);
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_bool;
			func_10815();
		}
		var_118_bool = var_74_float == (int)22131;
		if(var_118_bool != 0) {
			var_119_string = "";
			func_6822(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520914);
			@@@var_0_bool:ClearReplies();
			var_137_bool = 0; var_138_object = Obj();
			var_138_object = var_1_object;
			func_11922(var_137_bool, var_138_object);
			var_149_bool = var_137_bool == 0; //@nz
			if(var_149_bool != 0) {
				@@@var_0_bool:AddReply((int)520917, (int)22135, (int)22134);
			}
			@@@var_0_bool:AddReply((int)520915, (int)-1, (int)22132);
			return 0;
		}
		var_157_bool = var_74_float == (int)22135;
		if(var_157_bool != 0) {
			var_158_string = "";
			func_6822(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520918);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)520919, (int)-1, (int)22136);
			@@@var_0_bool:AddReply((int)520920, (int)-1, (int)22137);
			return 0;
		}
		var_3_object = true;
		var_166_bool = 0;
		func_10509(var_166_bool);
		if(var_166_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1abd";
	
}


task_21_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_int, var_47_int, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	if((int)1 != 0) {
		func_10244();
		var_79_bool = var_75_int == (int)22147;
		if(var_79_bool != 0) {
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_bool;
			func_10815();
			var_84_object = Obj(); var_85_object = Obj();
			var_84_object = var_1_object;
			var_85_object = var_0_bool;
			func_10531();
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_bool;
			func_10542(var_98_object);
		}
		var_118_bool = var_74_float == (int)22144;
		if(var_118_bool != 0) {
			var_119_string = "";
			func_7078(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520927);
			@@@var_0_bool:ClearReplies();
			var_137_bool = 0; var_138_object = Obj();
			var_138_object = var_1_object;
			func_11922(var_137_bool, var_138_object);
			var_149_bool = var_137_bool == 0; //@nz
			if(var_149_bool != 0) {
				@@@var_0_bool:AddReply((int)520928, (int)22146, (int)22145);
			}
			@@@var_0_bool:AddReply((int)520932, (int)-1, (int)22149);
			return 0;
		}
		var_157_bool = var_74_float == (int)22146;
		if(var_157_bool != 0) {
			var_158_string = "";
			func_7078(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520929);
			@@@var_0_bool:ClearReplies();
			var_160_bool = 0; var_161_object = Obj();
			var_161_object = var_1_object;
			func_11932(var_160_bool, var_161_object);
			if(var_160_bool != 0) {
				@@@var_0_bool:AddReply((int)520930, (int)-1, (int)22147);
			}
			@@@var_0_bool:AddReply((int)520931, (int)-1, (int)22148);
			return 0;
		}
		var_3_object = true;
		var_174_bool = 0;
		func_10509(var_174_bool);
		if(var_174_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1bbd";
	
}


task_23_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_int, var_52_int, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	if((int)1 != 0) {
		func_10244();
		var_79_bool = var_75_int == (int)22154;
		if(var_79_bool != 0) {
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_bool;
			func_10531();
			var_93_object = Obj(); var_94_object = Obj();
			var_93_object = var_1_object;
			var_94_object = var_0_bool;
			func_10542(var_94_object);
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_bool;
			func_10815();
		}
		var_118_bool = var_74_float == (int)22151;
		if(var_118_bool != 0) {
			var_119_string = "";
			func_7339(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520934);
			@@@var_0_bool:ClearReplies();
			var_137_bool = 0; var_138_object = Obj();
			var_138_object = var_1_object;
			func_11922(var_137_bool, var_138_object);
			var_149_bool = var_137_bool == 0; //@nz
			if(var_149_bool != 0) {
				@@@var_0_bool:AddReply((int)520935, (int)22153, (int)22152);
			}
			@@@var_0_bool:AddReply((int)520939, (int)-1, (int)22156);
			return 0;
		}
		var_157_bool = var_74_float == (int)22153;
		if(var_157_bool != 0) {
			var_158_string = "";
			func_7339(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520936);
			@@@var_0_bool:ClearReplies();
			var_160_bool = 0; var_161_object = Obj();
			var_161_object = var_1_object;
			func_11932(var_160_bool, var_161_object);
			if(var_160_bool != 0) {
				@@@var_0_bool:AddReply((int)520937, (int)-1, (int)22154);
			}
			@@@var_0_bool:AddReply((int)520938, (int)-1, (int)22155);
			return 0;
		}
		var_3_object = true;
		var_174_bool = 0;
		func_10509(var_174_bool);
		if(var_174_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1cc2";
	
}


task_25_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_int, var_57_int, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	if((int)1 != 0) {
		func_10244();
		var_79_bool = var_75_int == (int)36141;
		if(var_79_bool != 0) {
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_bool;
			func_10716();
		}
		var_115_bool = var_75_int == (int)38456;
		if(var_115_bool != 0) {
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_bool;
			func_10716();
		}
		var_119_bool = var_75_int == (int)22161;
		if(var_119_bool != 0) {
			var_120_object = Obj(); var_121_object = Obj();
			var_120_object = var_1_object;
			var_121_object = var_0_bool;
			func_10815();
			var_124_object = Obj(); var_125_object = Obj();
			var_124_object = var_1_object;
			var_125_object = var_0_bool;
			func_10531();
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_bool;
			func_10542(var_138_object);
		}
		var_158_bool = var_74_float == (int)22158;
		if(var_158_bool != 0) {
			var_159_string = "";
			func_7615(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520941);
			@@@var_0_bool:ClearReplies();
			var_177_bool = 0; var_178_object = Obj();
			var_178_object = var_1_object;
			func_11432(var_178_object);
			if(var_177_bool != 0) {
				@@@var_0_bool:AddReply((int)534490, (int)38444, (int)36135);
			}
			var_188_bool = 0; var_189_object = Obj();
			var_189_object = var_1_object;
			func_11922(var_188_bool, var_189_object);
			var_200_bool = var_188_bool == 0; //@nz
			if(var_200_bool != 0) {
				@@@var_0_bool:AddReply((int)520942, (int)22160, (int)22159);
			}
			@@@var_0_bool:AddReply((int)520946, (int)-1, (int)22163);
			@@@var_0_bool:AddReply((int)536616, (int)-1, (int)38443);
			return 0;
		}
		var_211_bool = var_74_float == (int)22160;
		if(var_211_bool != 0) {
			var_212_string = "";
			func_7615(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)520943);
			@@@var_0_bool:ClearReplies();
			var_214_bool = 0; var_215_object = Obj();
			var_215_object = var_1_object;
			func_11932(var_214_bool, var_215_object);
			if(var_214_bool != 0) {
				@@@var_0_bool:AddReply((int)520944, (int)-1, (int)22161);
			}
			@@@var_0_bool:AddReply((int)520945, (int)-1, (int)22162);
			return 0;
		}
		var_229_bool = var_74_float == (int)38444;
		if(var_229_bool != 0) {
			var_230_string = "";
			func_7615(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)536617);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536618, (int)38446, (int)38445);
			return 0;
		}
		var_236_bool = var_74_float == (int)38446;
		if(var_236_bool != 0) {
			var_237_string = "";
			func_7615(var_75_int, "Fear");
			@@@var_0_bool:SetMessage((int)536619);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536620, (int)36136, (int)38447);
			return 0;
		}
		var_243_bool = var_74_float == (int)36136;
		if(var_243_bool != 0) {
			var_244_string = "";
			func_7615(var_75_int, "Fear");
			@@@var_0_bool:SetMessage((int)534491);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)534492, (int)36138, (int)36137);
			@@@var_0_bool:AddReply((int)536621, (int)38449, (int)38448);
			return 0;
		}
		var_253_bool = var_74_float == (int)38449;
		if(var_253_bool != 0) {
			var_254_string = "";
			func_7615(var_75_int, "Fear");
			@@@var_0_bool:SetMessage((int)536622);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536625, (int)36140, (int)38452);
			return 0;
		}
		var_260_bool = var_74_float == (int)36138;
		if(var_260_bool != 0) {
			var_261_string = "";
			func_7615(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)534493);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)534494, (int)36140, (int)36139);
			@@@var_0_bool:AddReply((int)536623, (int)38451, (int)38450);
			return 0;
		}
		var_270_bool = var_74_float == (int)38451;
		if(var_270_bool != 0) {
			var_271_string = "";
			func_7615(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)536624);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536626, (int)38455, (int)38454);
			return 0;
		}
		var_277_bool = var_74_float == (int)38455;
		if(var_277_bool != 0) {
			var_278_string = "";
			func_7615(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)536627);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)536628, (int)-1, (int)38456);
			return 0;
		}
		var_284_bool = var_74_float == (int)36140;
		if(var_284_bool != 0) {
			var_285_string = "";
			func_7615(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)534495);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)534496, (int)-1, (int)36141);
			return 0;
		}
		var_3_object = true;
		var_290_bool = 0;
		func_10509(var_290_bool);
		if(var_290_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1dd6";
	
}


task_27_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_int, var_62_int, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	if((int)1 != 0) {
		func_10244();
		var_79_bool = var_75_int == (int)34118;
		if(var_79_bool != 0) {
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_bool;
			func_10565();
			var_139_object = Obj(); var_140_object = Obj();
			var_139_object = var_1_object;
			var_140_object = var_0_bool;
			func_10821(var_140_object);
		}
		var_166_bool = var_75_int == (int)34177;
		if(var_166_bool != 0) {
			var_167_object = Obj(); var_168_object = Obj();
			var_167_object = var_1_object;
			var_168_object = var_0_bool;
			func_10647();
		}
		var_172_bool = var_75_int == (int)33363;
		if(var_172_bool != 0) {
			var_173_object = Obj(); var_174_object = Obj();
			var_173_object = var_1_object;
			var_174_object = var_0_bool;
			func_10627();
		}
		var_192_bool = var_75_int == (int)33362;
		if(var_192_bool != 0) {
			var_193_object = Obj(); var_194_object = Obj();
			var_193_object = var_1_object;
			var_194_object = var_0_bool;
			func_10627();
		}
		var_196_bool = var_75_int == (int)35191;
		if(var_196_bool != 0) {
			var_197_object = Obj(); var_198_object = Obj();
			var_197_object = var_1_object;
			var_198_object = var_0_bool;
			func_10627();
		}
		var_200_bool = var_75_int == (int)34176;
		if(var_200_bool != 0) {
			var_201_object = Obj(); var_202_object = Obj();
			var_201_object = var_1_object;
			var_202_object = var_0_bool;
			func_10565();
			var_203_object = Obj(); var_204_object = Obj();
			var_203_object = var_1_object;
			var_204_object = var_0_bool;
			func_10821(var_204_object);
		}
		var_206_bool = var_75_int == (int)34165;
		if(var_206_bool != 0) {
			var_207_object = Obj(); var_208_object = Obj();
			var_207_object = var_1_object;
			var_208_object = var_0_bool;
			func_10653();
		}
		var_212_bool = var_75_int == (int)34169;
		if(var_212_bool != 0) {
			var_213_object = Obj(); var_214_object = Obj();
			var_213_object = var_1_object;
			var_214_object = var_0_bool;
			func_10605();
			var_217_object = Obj(); var_218_object = Obj();
			var_217_object = var_1_object;
			var_218_object = var_0_bool;
			func_10555(var_218_object);
		}
		var_239_bool = var_75_int == (int)34170;
		if(var_239_bool != 0) {
			var_240_object = Obj(); var_241_object = Obj();
			var_240_object = var_1_object;
			var_241_object = var_0_bool;
			func_10605();
			var_242_object = Obj(); var_243_object = Obj();
			var_242_object = var_1_object;
			var_243_object = var_0_bool;
			func_10853(var_243_object);
		}
		var_248_bool = var_74_float == (int)34103;
		if(var_248_bool != 0) {
			var_249_bool = 0;
			var_249_bool = 0;
			var_250_bool = 0;
			var_250_bool = 0;
			var_251_bool = 0; var_252_object = Obj();
			var_252_object = var_1_object;
			func_11372(var_252_object);
			if(var_251_bool != 0) {
				var_259_bool = 0; var_260_object = Obj();
				var_260_object = var_1_object;
				func_11324(var_260_object);
				if(var_259_bool != 0) {
					var_250_bool = 1;
				}
			}
			if(var_250_bool != 0) {
				var_265_bool = 0; var_266_object = Obj();
				var_266_object = var_1_object;
				func_11888(var_266_object);
				if(var_265_bool != 0) {
					var_249_bool = 1;
				}
			}
			if(var_249_bool != 0) {
				var_281_object = Obj(); var_282_object = Obj();
				var_281_object = var_1_object;
				var_282_object = var_0_bool;
				func_10641();
				var_285_string = "";
				func_8176(var_75_int, "Untrust");
				@@@var_0_bool:SetMessage((int)532641);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)532642, (int)34105, (int)34104);
				@@@var_0_bool:AddReply((int)532687, (int)34161, (int)34160);
				return 0;
			}
			var_309_string = "";
			func_8176(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)531953);
			@@@var_0_bool:ClearReplies();
			var_311_bool = 0;
			var_311_bool = 0;
			var_312_bool = 0; var_313_object = Obj();
			var_313_object = var_1_object;
			func_11384(var_313_object);
			if(var_312_bool != 0) {
				var_318_bool = 0; var_319_object = Obj();
				var_319_object = var_1_object;
				func_11888(var_319_object);
				if(var_318_bool != 0) {
					var_311_bool = 1;
				}
			}
			if(var_311_bool != 0) {
				@@@var_0_bool:AddReply((int)532702, (int)34178, (int)34177);
			}
			var_323_bool = 0; var_324_object = Obj();
			var_324_object = var_1_object;
			func_11360(var_324_object);
			if(var_323_bool != 0) {
				@@@var_0_bool:AddReply((int)531954, (int)33359, (int)33358);
			}
			var_332_bool = 0;
			var_332_bool = 0;
			var_333_bool = 0; var_334_object = Obj();
			var_334_object = var_1_object;
			func_11324(var_334_object);
			if(var_333_bool != 0) {
				var_335_bool = 0; var_336_object = Obj();
				var_336_object = var_1_object;
				func_11372(var_336_object);
				var_337_bool = var_335_bool == 0; //@nz
				if(var_337_bool != 0) {
					var_332_bool = 1;
				}
			}
			if(var_332_bool != 0) {
				@@@var_0_bool:AddReply((int)532699, (int)34175, (int)34174);
			}
			var_341_bool = 0;
			var_341_bool = 0;
			var_342_bool = 0;
			var_342_bool = 0;
			var_343_bool = 0; var_344_object = Obj();
			var_344_object = var_1_object;
			func_11348(var_344_object);
			var_349_bool = var_343_bool == 0; //@nz
			if(var_349_bool != 0) {
				var_350_bool = 0; var_351_object = Obj();
				var_351_object = var_1_object;
				func_11396(var_351_object);
				if(var_350_bool != 0) {
					var_342_bool = 1;
				}
			}
			if(var_342_bool != 0) {
				var_356_bool = 0; var_357_object = Obj();
				var_357_object = var_1_object;
				func_11336(var_357_object);
				if(var_356_bool != 0) {
					var_341_bool = 1;
				}
			}
			if(var_341_bool != 0) {
				@@@var_0_bool:AddReply((int)532691, (int)34166, (int)34165);
			}
			@@@var_0_bool:AddReply((int)531960, (int)-1, (int)33364);
			return 0;
		}
		var_369_bool = var_74_float == (int)34166;
		if(var_369_bool != 0) {
			var_370_string = "";
			func_8176(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)532692);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)532693, (int)34168, (int)34167);
			@@@var_0_bool:AddReply((int)532698, (int)34168, (int)34172);
			return 0;
		}
		var_379_bool = var_74_float == (int)34168;
		if(var_379_bool != 0) {
			var_380_string = "";
			func_8176(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)532694);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)532695, (int)-1, (int)34169);
			@@@var_0_bool:AddReply((int)532696, (int)-1, (int)34170);
			@@@var_0_bool:AddReply((int)532697, (int)-1, (int)34171);
			return 0;
		}
		var_392_bool = var_74_float == (int)34175;
		if(var_392_bool != 0) {
			var_393_string = "";
			func_8176(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)532700);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)532701, (int)-1, (int)34176);
			return 0;
		}
		var_399_bool = var_74_float == (int)33359;
		if(var_399_bool != 0) {
			var_400_string = "";
			func_8176(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)531955);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)533638, (int)35163, (int)35162);
			@@@var_0_bool:AddReply((int)533643, (int)35168, (int)35167);
			return 0;
		}
		var_409_bool = var_74_float == (int)35168;
		if(var_409_bool != 0) {
			var_410_string = "";
			func_8176(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)533644);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)533645, (int)35170, (int)35169);
			@@@var_0_bool:AddReply((int)533647, (int)35170, (int)35171);
			return 0;
		}
		var_419_bool = var_74_float == (int)35170;
		if(var_419_bool != 0) {
			var_420_string = "";
			func_8176(var_75_int, "Fear");
			@@@var_0_bool:SetMessage((int)533646);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)533648, (int)35165, (int)35173);
			@@@var_0_bool:AddReply((int)533649, (int)35165, (int)35174);
			return 0;
		}
		var_429_bool = var_74_float == (int)35163;
		if(var_429_bool != 0) {
			var_430_string = "";
			func_8176(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)533639);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)533640, (int)35165, (int)35164);
			return 0;
		}
		var_436_bool = var_74_float == (int)35165;
		if(var_436_bool != 0) {
			var_437_string = "";
			func_8176(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)533641);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)533642, (int)35175, (int)35166);
			@@@var_0_bool:AddReply((int)533655, (int)35183, (int)35182);
			return 0;
		}
		var_446_bool = var_74_float == (int)35183;
		if(var_446_bool != 0) {
			var_447_string = "";
			func_8176(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)533656);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)533657, (int)35188, (int)35184);
			@@@var_0_bool:AddReply((int)533658, (int)35177, (int)35185);
			return 0;
		}
		var_456_bool = var_74_float == (int)35188;
		if(var_456_bool != 0) {
			var_457_string = "";
			func_8176(var_75_int, "Rage");
			@@@var_0_bool:SetMessage((int)533659);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)533660, (int)35177, (int)35189);
			return 0;
		}
		var_463_bool = var_74_float == (int)35175;
		if(var_463_bool != 0) {
			var_464_string = "";
			func_8176(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)533650);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)533651, (int)35177, (int)35176);
			@@@var_0_bool:AddReply((int)533654, (int)35177, (int)35179);
			return 0;
		}
		var_473_bool = var_74_float == (int)35177;
		if(var_473_bool != 0) {
			var_474_string = "";
			func_8176(var_75_int, "Fear");
			@@@var_0_bool:SetMessage((int)533652);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)533653, (int)33361, (int)35178);
			return 0;
		}
		var_480_bool = var_74_float == (int)33361;
		if(var_480_bool != 0) {
			var_481_string = "";
			func_8176(var_75_int, "Fear");
			@@@var_0_bool:SetMessage((int)531957);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)531959, (int)-1, (int)33363);
			@@@var_0_bool:AddReply((int)531958, (int)-1, (int)33362);
			@@@var_0_bool:AddReply((int)533661, (int)-1, (int)35191);
			return 0;
		}
		var_493_bool = var_74_float == (int)34178;
		if(var_493_bool != 0) {
			var_494_string = "";
			func_8176(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)532703);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)532704, (int)34180, (int)34179);
			@@@var_0_bool:AddReply((int)533589, (int)35104, (int)35107);
			return 0;
		}
		var_503_bool = var_74_float == (int)34180;
		if(var_503_bool != 0) {
			var_504_string = "";
			func_8176(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)532705);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)532706, (int)34182, (int)34181);
			@@@var_0_bool:AddReply((int)532712, (int)34182, (int)34187);
			@@@var_0_bool:AddReply((int)533586, (int)35104, (int)35103);
			return 0;
		}
		var_516_bool = var_74_float == (int)35104;
		if(var_516_bool != 0) {
			var_517_string = "";
			func_8176(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)533587);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)533588, (int)34182, (int)35105);
			return 0;
		}
		var_523_bool = var_74_float == (int)34182;
		if(var_523_bool != 0) {
			var_524_string = "";
			func_8176(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)532707);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)532708, (int)34184, (int)34183);
			return 0;
		}
		var_530_bool = var_74_float == (int)34184;
		if(var_530_bool != 0) {
			var_531_string = "";
			func_8176(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)532709);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)532710, (int)-1, (int)34185);
			@@@var_0_bool:AddReply((int)532711, (int)-1, (int)34186);
			return 0;
		}
		var_540_bool = var_74_float == (int)34161;
		if(var_540_bool != 0) {
			var_541_string = "";
			func_8176(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)532688);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)532689, (int)34105, (int)34162);
			@@@var_0_bool:AddReply((int)532690, (int)-1, (int)34164);
			return 0;
		}
		var_550_bool = var_74_float == (int)34105;
		if(var_550_bool != 0) {
			var_551_string = "";
			func_8176(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)532643);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)532644, (int)34107, (int)34106);
			@@@var_0_bool:AddReply((int)532680, (int)34151, (int)34150);
			@@@var_0_bool:AddReply((int)532686, (int)34151, (int)34158);
			return 0;
		}
		var_563_bool = var_74_float == (int)34151;
		if(var_563_bool != 0) {
			var_564_string = "";
			func_8176(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)532681);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)532682, (int)34107, (int)34152);
			@@@var_0_bool:AddReply((int)532683, (int)34155, (int)34154);
			return 0;
		}
		var_573_bool = var_74_float == (int)34155;
		if(var_573_bool != 0) {
			var_574_string = "";
			func_8176(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)532684);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)532685, (int)34107, (int)34156);
			return 0;
		}
		var_580_bool = var_74_float == (int)34107;
		if(var_580_bool != 0) {
			var_581_string = "";
			func_8176(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)532645);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)532646, (int)34109, (int)34108);
			@@@var_0_bool:AddReply((int)532677, (int)34147, (int)34146);
			return 0;
		}
		var_590_bool = var_74_float == (int)34147;
		if(var_590_bool != 0) {
			var_591_string = "";
			func_8176(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)532678);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)532679, (int)34109, (int)34148);
			return 0;
		}
		var_597_bool = var_74_float == (int)34109;
		if(var_597_bool != 0) {
			var_598_string = "";
			func_8176(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)532647);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)532648, (int)34111, (int)34110);
			@@@var_0_bool:AddReply((int)532674, (int)34143, (int)34142);
			return 0;
		}
		var_607_bool = var_74_float == (int)34143;
		if(var_607_bool != 0) {
			var_608_string = "";
			func_8176(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)532675);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)532676, (int)34111, (int)34144);
			return 0;
		}
		var_614_bool = var_74_float == (int)34111;
		if(var_614_bool != 0) {
			var_615_string = "";
			func_8176(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)532649);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)532650, (int)34113, (int)34112);
			@@@var_0_bool:AddReply((int)532667, (int)34133, (int)34132);
			return 0;
		}
		var_624_bool = var_74_float == (int)34133;
		if(var_624_bool != 0) {
			var_625_string = "";
			func_8176(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)532668);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)532669, (int)34113, (int)34134);
			@@@var_0_bool:AddReply((int)532670, (int)34137, (int)34136);
			return 0;
		}
		var_634_bool = var_74_float == (int)34137;
		if(var_634_bool != 0) {
			var_635_string = "";
			func_8176(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)532671);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)532672, (int)34113, (int)34138);
			@@@var_0_bool:AddReply((int)532673, (int)34113, (int)34140);
			return 0;
		}
		var_644_bool = var_74_float == (int)34113;
		if(var_644_bool != 0) {
			var_645_string = "";
			func_8176(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)532651);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)532652, (int)34115, (int)34114);
			@@@var_0_bool:AddReply((int)532663, (int)34127, (int)34126);
			return 0;
		}
		var_654_bool = var_74_float == (int)34127;
		if(var_654_bool != 0) {
			var_655_string = "";
			func_8176(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)532664);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)532665, (int)34115, (int)34128);
			@@@var_0_bool:AddReply((int)532666, (int)34117, (int)34130);
			return 0;
		}
		var_664_bool = var_74_float == (int)34115;
		if(var_664_bool != 0) {
			var_665_string = "";
			func_8176(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)532653);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)532654, (int)34117, (int)34116);
			@@@var_0_bool:AddReply((int)532658, (int)34121, (int)34120);
			return 0;
		}
		var_674_bool = var_74_float == (int)34121;
		if(var_674_bool != 0) {
			var_675_string = "";
			func_8176(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)532659);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)532660, (int)34117, (int)34122);
			@@@var_0_bool:AddReply((int)532662, (int)-1, (int)34125);
			return 0;
		}
		var_684_bool = var_74_float == (int)34117;
		if(var_684_bool != 0) {
			var_685_string = "";
			func_8176(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)532655);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)532656, (int)-1, (int)34118);
			@@@var_0_bool:AddReply((int)532657, (int)-1, (int)34119);
			return 0;
		}
		var_3_object = true;
		var_693_bool = 0;
		func_10509(var_693_bool);
		if(var_693_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x2007";
	
}


task_29_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_int, var_67_int, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool, var_73_float, var_74_float, var_75_int)
{
	if((int)1 != 0) {
		func_10244();
		var_79_bool = var_74_float == (int)37363;
		if(var_79_bool != 0) {
			var_80_string = "";
			func_9349(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)535677);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)535678, (int)42150, (int)37364);
			@@@var_0_bool:AddReply((int)540005, (int)-1, (int)41976);
			return 0;
		}
		var_105_bool = var_74_float == (int)42150;
		if(var_105_bool != 0) {
			var_106_string = "";
			func_9349(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)540173);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)540174, (int)42153, (int)42151);
			@@@var_0_bool:AddReply((int)540175, (int)42154, (int)42152);
			return 0;
		}
		var_115_bool = var_74_float == (int)42154;
		if(var_115_bool != 0) {
			var_116_string = "";
			func_9349(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)540177);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)540181, (int)42159, (int)42158);
			return 0;
		}
		var_122_bool = var_74_float == (int)42159;
		if(var_122_bool != 0) {
			var_123_string = "";
			func_9349(var_75_int, "Sly");
			@@@var_0_bool:SetMessage((int)540182);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)540183, (int)42161, (int)42160);
			return 0;
		}
		var_129_bool = var_74_float == (int)42153;
		if(var_129_bool != 0) {
			var_130_string = "";
			func_9349(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)540176);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)540178, (int)42156, (int)42155);
			return 0;
		}
		var_136_bool = var_74_float == (int)42156;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_9349(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)540179);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)540180, (int)42161, (int)42157);
			return 0;
		}
		var_143_bool = var_74_float == (int)42161;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_9349(var_75_int, "Untrust");
			@@@var_0_bool:SetMessage((int)540184);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)540185, (int)-1, (int)42163);
			@@@var_0_bool:AddReply((int)540186, (int)-1, (int)42164);
			return 0;
		}
		var_3_object = true;
		var_152_bool = 0;
		func_10509(var_152_bool);
		if(var_152_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x249c";
	
}


task_31_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_object, var_67_object, var_68_object, var_69_string, var_70_bool, var_71_int, var_72_int, var_73_float, var_74_float, var_75_int)
{
	if((int)1 != 0) {
		func_10244();
		var_79_bool = var_74_float == (int)42551;
		if(var_79_bool != 0) {
			var_80_string = "";
			func_9670(var_75_int, "Neutral");
			@@@var_0_bool:SetMessage((int)540542);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)540543, (int)-1, (int)42552);
			@@@var_0_bool:AddReply((int)540796, (int)-1, (int)42845);
			return 0;
		}
		var_3_object = true;
		var_104_bool = 0;
		func_10509(var_104_bool);
		if(var_104_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x25dd";
	
}


task_32_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_object, var_67_object, var_68_object, var_69_string, var_70_bool, var_71_float, var_72_float, var_73_int)
{
	func_10500();
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_32_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_object, var_67_object, var_68_object, var_69_string, var_70_bool, var_71_float, var_72_float, var_73_int, var_74_object)
{
	var_75_bool = 0; var_76_bool = 0;
	IsOverrideActive(var_76_bool);
	var_77_bool = var_76_bool == 0; //@nz
	if(var_77_bool != 0) {
		EventDisable(0);
		var_78_bool = 0; var_79_object = Obj();
		var_74_object = var_79_object;
		func_9948(var_78_bool, var_79_object);
		EventEnable(0);
		var_92_object = Obj();
		var_74_object = var_92_object;
		func_12329(var_92_object);
	}
	return 2;
}


event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_object, var_67_object, var_68_object, var_69_string, var_70_bool, var_71_float, var_72_float, var_73_int)
{
	return 0;
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_object, var_67_object, var_68_object, var_69_string, var_70_bool, var_71_float, var_72_float, var_73_int)
{
	var_74_bool = GlobalVars[2];
	GlobalVars[2] = (bool)0;
	func_9741(var_71_float, var_72_float, var_73_int);
	return 0;
}


func_0()
{
	
Label_0:
	Hold();
	var_116_bool = 0;
	func_9968(var_116_bool);
	var_117_bool = var_116_bool == 0; //@nz
	if(var_117_bool == 1) goto Label_0;
	return 0;
}


func_10754(var_273_object)
{
	Trace("lens is given");
	var_276_object = Obj(); var_277_string = ""; var_278_int = 0;
	var_273_object = var_276_object;
	func_10373(var_276_object, "lens", (int)1);
	return 0;
}


func_10244()
{
	var_77_bool = 0;
	func_10509(var_77_bool);
	if(var_77_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_11780(var_1202_bool)
{
	var_1204_int = 0; var_1205_string = "";
	func_10296(var_1204_int, "d8q01MladVladIsBad");
	var_1207_bool = var_1204_int == (int)1;
	if(var_1207_bool != 0) {
		var_1202_bool = 1;
		return 0;
	}
	var_1202_bool = 0;
	return 0;
}


func_10251(var_169_object)
{
	var_170_object = Obj(); var_171_object = Obj();
	self(var_171_object);
	var_171_object = var_169_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_10765()
{
	SetVariable("KnowPochka", (int)1);
	return 0;
}


func_9741(var_0_bool, var_1_object, var_2_object)
{
	var_75_object = Obj(); var_76_bool = 0; var_77_int = 0; var_78_bool = 0; var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_bool = 0; var_85_cvector = CVector(0,0,0); var_86_object = Obj(); var_87_bool = 0; var_88_int = 0; var_89_bool = 0; var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_float = 0; var_94_cvector = CVector(0,0,0); var_95_bool = 0; var_96_cvector = CVector(0,0,0);
	SensePlayerOnly((bool)1);
	func_9829();
	GetScene(var_86_object);
	var_2_object = 0;
	
Label_9751:
	var_102_string = ""; var_103_int = 0;
	var_103_int = var_2_object;
	func_10487(var_102_string, var_103_int);
	@@var_86_object:GetLocator(var_102_string, var_87_bool);
	var_111_bool = var_87_bool == 0; //@nz
	if(var_111_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_9751;
	}
	var_112_bool = 0;
	func_9968(var_112_bool);
	var_115_bool = var_112_bool == 0; //@nz
	if(var_115_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_9837(var_95_bool, var_96_cvector);
	
Label_9776:
	irand(var_88_int, var_2_object);
	var_136_string = ""; var_137_int = 0;
	var_88_int = var_137_int;
	func_10487(var_136_string, var_137_int);
	@@var_86_object:GetLocator(var_136_string, var_89_bool, var_90_cvector, var_91_cvector);
	var_138_cvector = CVector(0,0,0);
	func_9884(var_138_cvector);
	var_92_cvector = var_90_cvector - var_138_cvector;
	var_141_float = 0; var_142_cvector = CVector(0,0,0);
	var_92_cvector = var_142_cvector;
	func_10286(var_141_float, var_142_cvector);
	var_150_bool = var_141_float > var_1_object;
	if(var_150_bool != 0) {
		GetHeight(var_93_float);
		var_90_cvector = var_94_cvector;
		var_151_float = GetByIndex(var_94_cvector, 1);
		var_151_float = var_151_float + var_93_float;
		SetByIndex(var_94_cvector, 1) = var_151_float;
		CanReachByPF(var_95_bool, var_94_cvector);
		var_152_bool = var_95_bool;
		if(var_152_bool != 0) {
			var_153_int = var_92_cvector | var_92_cvector;
			var_154_float = sqrt(var_153_int);
			var_155_float = var_0_bool / var_154_float;
			var_156_float = var_92_cvector * var_155_float;
			var_96_cvector = var_90_cvector - var_156_float;
			var_157_bool = 0; var_158_cvector = CVector(0,0,0); var_159_cvector = CVector(0,0,0);
			var_96_cvector = var_158_cvector;
			var_91_cvector = var_159_cvector;
			TaskCall(1);
			func_13(var_160_bool, var_157_bool, var_158_cvector, var_159_cvector);
			TaskReturn();
			if(var_160_bool != 0) {
				var_184_int = 0;
				var_88_int = var_184_int;
				TaskCall(3);
				func_198(var_184_int);
				TaskReturn();
			}
		}
	}
	Sleep((int)1);
	goto Label_9776;
	
}
EMIT "Return(); Pop(22)";
EMIT "Stack[-11] = 0";


func_13(var_0_bool, var_157_bool, var_158_cvector, var_159_cvector)
{
	var_161_bool = 0; var_162_bool = 0;
	var_0_bool = true;
	SetTimer((int)21, (float)0.5);
	
Label_19:
	var_165_bool = 0; var_166_cvector = CVector(0,0,0);
	var_158_cvector = var_166_cvector;
	func_9938(var_165_bool, var_166_cvector);
	var_175_bool = var_165_bool == 0; //@nz
	if(var_175_bool != 0) {
		goto Label_19;
	}
	MovePoint(var_158_cvector, (bool)0, var_162_bool);
	var_177_bool = var_162_bool;
	if(var_177_bool != 0) {
	} else {
		goto Label_19;
	}
	KillTimer((int)20);
	KillTimer((int)21);
	var_0_bool = false;
	WaitForAnimEnd(var_162_bool);
	var_180_bool = var_162_bool == 0; //@nz
	if(var_180_bool != 0) {
		var_157_bool = 0;
		return 2;
	}
	var_181_float = GetByIndex(var_159_cvector, 0);
	var_182_float = GetByIndex(var_159_cvector, 2);
	Rotate(var_181_float, var_182_float, var_162_bool);
	var_183_bool = var_162_bool == 0; //@nz
	if(var_183_bool != 0) {
		var_157_bool = 0;
		return 2;
	}
	var_157_bool = 1;
	return 2;
	
}


func_11792(var_1196_bool)
{
	var_1198_int = 0; var_1199_string = "";
	func_10296(var_1198_int, "ood8MladVlad1");
	var_1201_bool = var_1198_int == (int)0;
	if(var_1201_bool != 0) {
		var_1196_bool = 1;
		return 0;
	}
	var_1196_bool = 0;
	return 0;
}


func_10257(var_133_cvector, var_134_cvector)
{
	var_136_float = 0; var_137_float = 0;
	var_138_int = var_134_cvector | var_134_cvector;
	var_137_float = sqrt(var_138_int);
	var_139_float = 9.999999974752427e-07;
	var_140_bool = var_137_float < var_139_float;
	if(var_140_bool != 0) {
		var_133_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_133_cvector = var_134_cvector / var_137_float;
	return 2;
}


func_10771()
{
	SetVariable("ood2MladVlad1", (int)1);
	return 0;
}


func_6677(var_0_bool, var_1057_int, var_1058_object)
{
	var_1060_object = Obj(); var_1061_bool = 0; var_1062_int = 0; var_1063_bool = 0; var_1064_object = Obj(); var_1065_bool = 0; var_1066_int = 0; var_1067_bool = 0;
	var_0_bool = var_1058_object;
	var_1068_bool = 0; var_1069_object = Obj(); var_1070_float = 0;
	var_1058_object = var_1069_object;
	func_9973(var_1068_bool, var_1069_object, (float)70.0);
	var_1071_bool = var_1068_bool == 0; //@nz
	if(var_1071_bool != 0) {
		var_1057_int = -2;
		return 8;
	}
	CreateDialog(var_1064_object);
	var_1072_int = 0;
	func_10503(var_1072_int);
	@@var_1064_object:SetNPCName(var_1072_int);
	var_1073_int = 0;
	func_10501(var_1073_int);
	@@var_1064_object:SetNPCDescription(var_1073_int);
	var_1074_string = "";
	func_10505(var_1074_string);
	@@var_1064_object:SetPhoto(var_1074_string);
	var_1075_string = "";
	func_10507(var_1075_string);
	@@var_1064_object:SetPhoto2(var_1075_string);
	var_1076_int = 0;
	func_12312(var_1076_int);
	@@var_1064_object:SetPlayerName(var_1076_int);
	IsOverrideActive(var_1065_bool);
	var_1077_bool = var_1065_bool;
	if(var_1077_bool != 0) {
		var_1057_int = -2;
		return 8;
	}
	DoDialog(var_1064_object);
	var_1078_bool = 0; var_1079_object = Obj();
	func_10251(Obj());
	var_1080_object = var_1079_object;
	func_10060(var_1078_bool, var_1079_object);
	var_1081_object = Obj(); var_1082_object = Obj();
	var_1058_object = var_1081_object;
	var_1064_object = var_1082_object;
	TaskCall(19);
	func_6758(var_1083_object, var_1084_object, var_1085_string, var_1086_bool, var_1081_object, var_1082_object);
	TaskReturn();
	@@var_1064_object:IsDialogEnd(var_1067_bool);
	
Label_6740:
	var_1114_bool = var_1067_bool == 0; //@nz
	if(var_1114_bool != 0) {
		sync();
		@@var_1064_object:IsDialogEnd(var_1067_bool);
		goto Label_6740;
	}
	var_1058_object = Obj();
	func_10042();
	StopDialog(var_1064_object);
	@@var_1064_object:GetReturnValue((int)-1);
	var_1066_int = var_1057_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_12312(var_158_int)
{
	var_159_int = 0; var_160_int = 0;
	GetVariable("branch", var_160_int);
	var_163_bool = var_160_int == (int)0;
	if(var_163_bool != 0) {
		var_158_int = 1;
		return 2;
	EMIT "GOTO 0x3027";
	}
	var_165_bool = var_160_int == (int)1;
	if(var_165_bool != 0) {
		var_158_int = 2;
		return 2;
	}
	var_158_int = 3;
	return 2;
}


func_10777()
{
	SetVariable("ood2MladVlad2", (int)1);
	return 0;
}


func_7194(var_0_bool, var_1370_int, var_1371_object)
{
	var_1373_object = Obj(); var_1374_bool = 0; var_1375_int = 0; var_1376_bool = 0; var_1377_object = Obj(); var_1378_bool = 0; var_1379_int = 0; var_1380_bool = 0;
	var_0_bool = var_1371_object;
	var_1381_bool = 0; var_1382_object = Obj(); var_1383_float = 0;
	var_1371_object = var_1382_object;
	func_9973(var_1381_bool, var_1382_object, (float)70.0);
	var_1384_bool = var_1381_bool == 0; //@nz
	if(var_1384_bool != 0) {
		var_1370_int = -2;
		return 8;
	}
	CreateDialog(var_1377_object);
	var_1385_int = 0;
	func_10503(var_1385_int);
	@@var_1377_object:SetNPCName(var_1385_int);
	var_1386_int = 0;
	func_10501(var_1386_int);
	@@var_1377_object:SetNPCDescription(var_1386_int);
	var_1387_string = "";
	func_10505(var_1387_string);
	@@var_1377_object:SetPhoto(var_1387_string);
	var_1388_string = "";
	func_10507(var_1388_string);
	@@var_1377_object:SetPhoto2(var_1388_string);
	var_1389_int = 0;
	func_12312(var_1389_int);
	@@var_1377_object:SetPlayerName(var_1389_int);
	IsOverrideActive(var_1378_bool);
	var_1390_bool = var_1378_bool;
	if(var_1390_bool != 0) {
		var_1370_int = -2;
		return 8;
	}
	DoDialog(var_1377_object);
	var_1391_bool = 0; var_1392_object = Obj();
	func_10251(Obj());
	var_1393_object = var_1392_object;
	func_10060(var_1391_bool, var_1392_object);
	var_1394_object = Obj(); var_1395_object = Obj();
	var_1371_object = var_1394_object;
	var_1377_object = var_1395_object;
	TaskCall(23);
	func_7275(var_1396_object, var_1397_object, var_1398_string, var_1399_bool, var_1394_object, var_1395_object);
	TaskReturn();
	@@var_1377_object:IsDialogEnd(var_1380_bool);
	
Label_7257:
	var_1427_bool = var_1380_bool == 0; //@nz
	if(var_1427_bool != 0) {
		sync();
		@@var_1377_object:IsDialogEnd(var_1380_bool);
		goto Label_7257;
	}
	var_1371_object = Obj();
	func_10042();
	StopDialog(var_1377_object);
	@@var_1377_object:GetReturnValue((int)-1);
	var_1379_int = var_1370_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_10267(var_130_float, var_131_float)
{
	var_134_bool = var_131_float < (int)0;
	if(var_134_bool != 0) {
		var_130_float = -var_131_float;
	} else {
		var_131_float = var_130_float;
	}
	return 0;
	
}


func_11804(var_1215_bool)
{
	var_1217_int = 0; var_1218_string = "";
	func_10296(var_1217_int, "ood8MladVlad2");
	var_1220_bool = var_1217_int == (int)0;
	if(var_1220_bool != 0) {
		var_1215_bool = 1;
		return 0;
	}
	var_1215_bool = 0;
	return 0;
}


func_11293()
{
	var_135_object = Obj(); var_136_object = Obj();
	func_12262(Obj());
	var_137_object = var_136_object;
	var_148_float = 0;
	func_10443(var_148_float);
	@@var_136_object:AddMark("d8q01MladVladgotoOspina", "pt_map_ospina", (int)1, (int)515320, var_148_float);
	func_12169();
	return 2;
}
EMIT "Stack[-1] = 0";


func_10783(var_357_object)
{
	var_358_object = Obj(); var_359_string = ""; var_360_float = 0;
	func_12262(Obj());
	var_361_object = var_358_object;
	func_12279(var_358_object, "pt_map_theater", (float)2);
	var_362_object = Obj();
	func_12262(var_362_object);
	@@var_357_object:ShowMap(var_362_object);
	return 0;
}


func_10275(var_227_float, var_228_float, var_229_float, var_230_float)
{
	var_231_bool = var_228_float < var_229_float;
	if(var_231_bool != 0) {
		var_229_float = var_227_float;
		return 0;
	}
	var_232_bool = var_228_float > var_230_float;
	if(var_232_bool != 0) {
		var_230_float = var_227_float;
		return 0;
	}
	var_228_float = var_227_float;
	return 0;
}


func_11816(var_1227_bool)
{
	var_1229_int = 0; var_1230_string = "";
	func_10296(var_1229_int, "d8q01BringBadBoy");
	var_1232_bool = var_1229_int == (int)1;
	if(var_1232_bool != 0) {
		var_1227_bool = 1;
		return 0;
	}
	var_1227_bool = 0;
	return 0;
}


func_12329(var_92_object)
{
	var_93_bool = GlobalVars[2];
	var_94_bool = var_93_bool == 0; //@nz
	if(var_94_bool != 0) {
		var_95_int = 0; var_96_object = Obj();
		var_92_object = var_96_object;
		TaskCall(4);
		func_282(var_97_object, var_95_int, var_96_object);
		TaskReturn();
		var_325_bool = GlobalVars[2];
		GlobalVars[2] = (bool)1;
	}
	var_326_bool = 0; var_327_int = 0;
	func_10457(var_326_bool, (int)1);
	if(var_326_bool != 0) {
		var_329_int = 0; var_330_object = Obj();
		var_92_object = var_330_object;
		TaskCall(26);
		func_7916(var_331_object, var_329_int, var_330_object);
		TaskReturn();
		return 0;
	}
	var_480_bool = 0; var_481_int = 0;
	func_10457(var_480_bool, (int)2);
	if(var_480_bool != 0) {
		var_482_int = 0; var_483_object = Obj();
		var_92_object = var_483_object;
		TaskCall(6);
		func_564(var_484_object, var_482_int, var_483_object);
		TaskReturn();
		return 0;
	}
	var_560_bool = 0; var_561_int = 0;
	func_10457(var_560_bool, (int)3);
	if(var_560_bool != 0) {
		var_562_int = 0; var_563_object = Obj();
		var_92_object = var_563_object;
		TaskCall(8);
		func_1092(var_564_object, var_562_int, var_563_object);
		TaskReturn();
		return 0;
	}
	var_690_bool = 0; var_691_int = 0;
	func_10457(var_690_bool, (int)4);
	if(var_690_bool != 0) {
		var_692_int = 0; var_693_object = Obj();
		var_92_object = var_693_object;
		TaskCall(10);
		func_2119(var_694_object, var_692_int, var_693_object);
		TaskReturn();
		return 0;
	}
	var_802_bool = 0; var_803_int = 0;
	func_10457(var_802_bool, (int)5);
	if(var_802_bool != 0) {
		var_804_int = 0; var_805_object = Obj();
		var_92_object = var_805_object;
		TaskCall(12);
		func_3298(var_806_object, var_804_int, var_805_object);
		TaskReturn();
		return 0;
	}
	var_935_bool = 0; var_936_int = 0;
	func_10457(var_935_bool, (int)6);
	if(var_935_bool != 0) {
		var_937_int = 0; var_938_object = Obj();
		var_92_object = var_938_object;
		TaskCall(14);
		func_4061(var_939_object, var_937_int, var_938_object);
		TaskReturn();
		return 0;
	}
	var_1055_bool = 0; var_1056_int = 0;
	func_10457(var_1055_bool, (int)7);
	if(var_1055_bool != 0) {
		var_1057_int = 0; var_1058_object = Obj();
		var_92_object = var_1058_object;
		TaskCall(18);
		func_6677(var_1059_object, var_1057_int, var_1058_object);
		TaskReturn();
		return 0;
	}
	var_1116_bool = 0; var_1117_int = 0;
	func_10457(var_1116_bool, (int)8);
	if(var_1116_bool != 0) {
		var_1118_int = 0; var_1119_object = Obj();
		var_92_object = var_1119_object;
		TaskCall(16);
		func_4828(var_1120_object, var_1118_int, var_1119_object);
		TaskReturn();
		return 0;
	}
	var_1307_bool = 0; var_1308_int = 0;
	func_10457(var_1307_bool, (int)9);
	if(var_1307_bool != 0) {
		var_1309_int = 0; var_1310_object = Obj();
		var_92_object = var_1310_object;
		TaskCall(20);
		func_6933(var_1311_object, var_1309_int, var_1310_object);
		TaskReturn();
		return 0;
	}
	var_1368_bool = 0; var_1369_int = 0;
	func_10457(var_1368_bool, (int)10);
	if(var_1368_bool != 0) {
		var_1370_int = 0; var_1371_object = Obj();
		var_92_object = var_1371_object;
		TaskCall(22);
		func_7194(var_1372_object, var_1370_int, var_1371_object);
		TaskReturn();
		return 0;
	}
	var_1429_bool = 0; var_1430_int = 0;
	func_10457(var_1429_bool, (int)11);
	if(var_1429_bool != 0) {
		var_1431_int = 0; var_1432_object = Obj();
		var_92_object = var_1432_object;
		TaskCall(24);
		func_7455(var_1433_object, var_1431_int, var_1432_object);
		TaskReturn();
		return 0;
	}
	var_1502_bool = 0; var_1503_int = 0;
	func_10457(var_1502_bool, (int)12);
	if(var_1502_bool != 0) {
		var_1504_int = 0; var_1505_object = Obj();
		var_92_object = var_1505_object;
		TaskCall(28);
		func_9210(var_1506_object, var_1504_int, var_1505_object);
		TaskReturn();
		return 0;
	}
	var_1560_int = 0; var_1561_object = Obj();
	var_92_object = var_1561_object;
	TaskCall(30);
	func_9531(var_1562_object, var_1560_int, var_1561_object);
	TaskReturn();
	return 0;
}


func_5162(var_2_object, var_1163_string)
{
	var_1164_bool = 0;
	func_10509(var_1164_bool);
	var_1165_bool = var_1164_bool == 0; //@nz
	if(var_1165_bool != 0) {
		return 0;
	}
	var_1166_bool = var_1163_string == var_2_object;
	if(var_1166_bool != 0) {
		return 0;
	}
	var_1167_string = ""; var_1168_bool = 0;
	var_1163_string = var_1167_string;
	var_1170_bool = var_1163_string == "";
	if(var_1170_bool != 0) {
		var_1168_bool = 0;
	} else {
		var_1168_bool = 1;
	}
	func_10214(var_1167_string, var_1168_bool);
	var_2_object = var_1163_string;
	return 0;
	
}


func_4142(var_0_bool, var_1_object, var_2_object, var_3_object, var_961_object, var_962_object)
{
	var_0_bool = var_962_object;
	var_1_object = var_961_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_968_bool = 0; var_969_object = Obj();
		var_969_object = var_1_object;
		func_11624(var_969_object);
		if(var_968_bool != 0) {
			var_974_string = "";
			func_4289(var_962_object, "Fear");
			@@@var_0_bool:SetMessage((int)512104);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)512105, (int)13334, (int)13331);
			@@@var_0_bool:AddReply((int)512106, (int)13333, (int)13332);
		} else {
				var_997_string = "";
				func_4289(var_962_object, "Neutral");
				@@@var_0_bool:SetMessage((int)512515);
				@@@var_0_bool:ClearReplies();
				var_999_bool = 0; var_1000_object = Obj();
				var_1000_object = var_1_object;
				func_11612(var_1000_object);
				if(var_999_bool != 0) {
					@@@var_0_bool:AddReply((int)512520, (int)13691, (int)13690);
				}
				var_1008_bool = 0;
				var_1008_bool = 0;
				var_1009_bool = 0; var_1010_object = Obj();
				var_1010_object = var_1_object;
				func_11636(var_1010_object);
				if(var_1009_bool != 0) {
					var_1015_bool = 0; var_1016_object = Obj();
					var_1016_object = var_1_object;
					func_11744(var_1016_object);
					if(var_1015_bool != 0) {
						var_1008_bool = 1;
					}
				}
				if(var_1008_bool != 0) {
					@@@var_0_bool:AddReply((int)512516, (int)13688, (int)13686);
				}
				var_1024_bool = 0;
				var_1024_bool = 0;
				var_1025_bool = 0;
				var_1025_bool = 0;
				var_1026_bool = 0; var_1027_object = Obj();
				var_1027_object = var_1_object;
				func_11648(var_1027_object);
				if(var_1026_bool != 0) {
					var_1032_bool = 0; var_1033_object = Obj();
					var_1033_object = var_1_object;
					func_11756(var_1033_object);
					if(var_1032_bool != 0) {
						var_1025_bool = 1;
					}
				}
				if(var_1025_bool != 0) {
					var_1038_bool = 0; var_1039_object = Obj();
					var_1039_object = var_1_object;
					func_11744(var_1039_object);
					var_1040_bool = var_1038_bool == 0; //@nz
					if(var_1040_bool != 0) {
						var_1024_bool = 1;
					}
				}
				if(var_1024_bool != 0) {
					@@@var_0_bool:AddReply((int)512526, (int)13697, (int)13696);
				}
				var_1044_bool = 0; var_1045_object = Obj();
				var_1045_object = var_1_object;
				func_11922(var_1044_bool, var_1045_object);
				var_1046_bool = var_1044_bool == 0; //@nz
				if(var_1046_bool != 0) {
					@@@var_0_bool:AddReply((int)520909, (int)22127, (int)22126);
				}
				@@@var_0_bool:AddReply((int)512517, (int)-1, (int)13687);
				goto Label_4259;
		}
	}
Label_4259:
	var_989_bool = 0;
	func_10509(var_989_bool);
	if(var_989_bool != 0) {

	Label_4263:
		lshWaitForAnimEnd();
		var_990_object = var_3_object;
		if(var_990_object != 0) {
		} else {
			var_991_string = "";
			var_991_string = var_2_object;
			func_10198(var_991_string);
			goto Label_4263;
	}
		PlayAnimation("all", "idle");

	Label_4278:
		WaitForAnimEnd();
		var_994_object = var_3_object;
		if(var_994_object != 0) {
			goto Label_4288;
		}
		PlayAnimation("all", "idle");
		goto Label_4278;

	}
	goto Label_4288;
	
Label_4288:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1032";


func_10799(var_152_object)
{
	var_153_object = Obj(); var_154_string = ""; var_155_float = 0;
	func_12262(Obj());
	var_156_object = var_153_object;
	func_12279(var_153_object, "pt_map_anna", (float)2);
	var_176_object = Obj();
	func_12262(var_176_object);
	@@var_152_object:ShowMap(var_176_object);
	return 0;
}


func_11312(var_619_bool)
{
	var_621_int = 0; var_622_string = "";
	func_10296(var_621_int, "ood3MladVlad2");
	var_624_bool = var_621_int == (int)0;
	if(var_624_bool != 0) {
		var_619_bool = 1;
		return 0;
	}
	var_619_bool = 0;
	return 0;
}


func_10286(var_141_float, var_142_cvector)
{
	var_143_float = GetByIndex(var_142_cvector, 0);
	var_144_float = GetByIndex(var_142_cvector, 0);
	var_145_float = var_143_float * var_144_float;
	var_146_float = GetByIndex(var_142_cvector, 2);
	var_147_float = GetByIndex(var_142_cvector, 2);
	var_148_float = var_146_float * var_147_float;
	var_149_int = var_145_float + var_148_float;
	var_141_float = sqrt(var_149_int);
	return 0;
}


func_11828(var_1235_bool)
{
	var_1237_int = 0; var_1238_string = "";
	func_10296(var_1237_int, "ood8MladVlad3");
	var_1240_bool = var_1237_int == (int)0;
	if(var_1240_bool != 0) {
		var_1235_bool = 1;
		return 0;
	}
	var_1235_bool = 0;
	return 0;
}


func_564(var_0_bool, var_482_int, var_483_object)
{
	var_485_object = Obj(); var_486_bool = 0; var_487_int = 0; var_488_bool = 0; var_489_object = Obj(); var_490_bool = 0; var_491_int = 0; var_492_bool = 0;
	var_0_bool = var_483_object;
	var_493_bool = 0; var_494_object = Obj(); var_495_float = 0;
	var_483_object = var_494_object;
	func_9973(var_493_bool, var_494_object, (float)70.0);
	var_496_bool = var_493_bool == 0; //@nz
	if(var_496_bool != 0) {
		var_482_int = -2;
		return 8;
	}
	CreateDialog(var_489_object);
	var_497_int = 0;
	func_10503(var_497_int);
	@@var_489_object:SetNPCName(var_497_int);
	var_498_int = 0;
	func_10501(var_498_int);
	@@var_489_object:SetNPCDescription(var_498_int);
	var_499_string = "";
	func_10505(var_499_string);
	@@var_489_object:SetPhoto(var_499_string);
	var_500_string = "";
	func_10507(var_500_string);
	@@var_489_object:SetPhoto2(var_500_string);
	var_501_int = 0;
	func_12312(var_501_int);
	@@var_489_object:SetPlayerName(var_501_int);
	IsOverrideActive(var_490_bool);
	var_502_bool = var_490_bool;
	if(var_502_bool != 0) {
		var_482_int = -2;
		return 8;
	}
	DoDialog(var_489_object);
	var_503_bool = 0; var_504_object = Obj();
	func_10251(Obj());
	var_505_object = var_504_object;
	func_10060(var_503_bool, var_504_object);
	var_506_object = Obj(); var_507_object = Obj();
	var_483_object = var_506_object;
	var_489_object = var_507_object;
	TaskCall(7);
	func_645(var_508_object, var_509_object, var_510_string, var_511_bool, var_506_object, var_507_object);
	TaskReturn();
	@@var_489_object:IsDialogEnd(var_492_bool);
	
Label_627:
	var_558_bool = var_492_bool == 0; //@nz
	if(var_558_bool != 0) {
		sync();
		@@var_489_object:IsDialogEnd(var_492_bool);
		goto Label_627;
	}
	var_483_object = Obj();
	func_10042();
	StopDialog(var_489_object);
	@@var_489_object:GetReturnValue((int)-1);
	var_491_int = var_482_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_10296(var_364_int, var_365_string)
{
	var_366_int = 0; var_367_int = 0;
	GetVariable(var_365_string, var_367_int);
	var_367_int = var_364_int;
	return 2;
}


func_11324(var_370_bool)
{
	var_372_int = 0; var_373_string = "";
	func_10296(var_372_int, "d1q03");
	var_375_bool = var_372_int == (int)0;
	if(var_375_bool != 0) {
		var_370_bool = 1;
		return 0;
	}
	var_370_bool = 0;
	return 0;
}


func_10301(var_131_object, var_132_string)
{
	var_133_object = Obj(); var_134_object = Obj(); var_135_object = Obj(); var_136_object = Obj();
	GetMainOutdoorScene(var_135_object);
	var_138_int = var_132_string + ".bin";
	AddBlankActor(var_136_object, var_135_object, var_132_string, var_138_int);
	var_136_object = var_131_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_10815()
{
	TriggerWorld("playsound", "mapmark");
	return 0;
}


func_11840(var_1278_bool)
{
	var_1280_int = 0; var_1281_string = "";
	func_10296(var_1280_int, "ood8MladVlad4");
	var_1283_bool = var_1280_int == (int)0;
	if(var_1283_bool != 0) {
		var_1278_bool = 1;
		return 0;
	}
	var_1278_bool = 0;
	return 0;
}


func_1092(var_0_bool, var_562_int, var_563_object)
{
	var_565_object = Obj(); var_566_bool = 0; var_567_int = 0; var_568_bool = 0; var_569_object = Obj(); var_570_bool = 0; var_571_int = 0; var_572_bool = 0;
	var_0_bool = var_563_object;
	var_573_bool = 0; var_574_object = Obj(); var_575_float = 0;
	var_563_object = var_574_object;
	func_9973(var_573_bool, var_574_object, (float)70.0);
	var_576_bool = var_573_bool == 0; //@nz
	if(var_576_bool != 0) {
		var_562_int = -2;
		return 8;
	}
	CreateDialog(var_569_object);
	var_577_int = 0;
	func_10503(var_577_int);
	@@var_569_object:SetNPCName(var_577_int);
	var_578_int = 0;
	func_10501(var_578_int);
	@@var_569_object:SetNPCDescription(var_578_int);
	var_579_string = "";
	func_10505(var_579_string);
	@@var_569_object:SetPhoto(var_579_string);
	var_580_string = "";
	func_10507(var_580_string);
	@@var_569_object:SetPhoto2(var_580_string);
	var_581_int = 0;
	func_12312(var_581_int);
	@@var_569_object:SetPlayerName(var_581_int);
	IsOverrideActive(var_570_bool);
	var_582_bool = var_570_bool;
	if(var_582_bool != 0) {
		var_562_int = -2;
		return 8;
	}
	DoDialog(var_569_object);
	var_583_bool = 0; var_584_object = Obj();
	func_10251(Obj());
	var_585_object = var_584_object;
	func_10060(var_583_bool, var_584_object);
	var_586_object = Obj(); var_587_object = Obj();
	var_563_object = var_586_object;
	var_569_object = var_587_object;
	TaskCall(9);
	func_1173(var_588_object, var_589_object, var_590_string, var_591_bool, var_586_object, var_587_object);
	TaskReturn();
	@@var_569_object:IsDialogEnd(var_572_bool);
	
Label_1155:
	var_688_bool = var_572_bool == 0; //@nz
	if(var_688_bool != 0) {
		sync();
		@@var_569_object:IsDialogEnd(var_572_bool);
		goto Label_1155;
	}
	var_563_object = Obj();
	func_10042();
	StopDialog(var_569_object);
	@@var_569_object:GetReturnValue((int)-1);
	var_571_int = var_562_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_10821(var_140_object)
{
	var_141_object = Obj(); var_142_string = ""; var_143_float = 0;
	func_12262(Obj());
	var_144_object = var_141_object;
	func_12279(var_141_object, "pt_map_ospina", (float)2);
	var_164_object = Obj();
	func_12262(var_164_object);
	@@var_140_object:ShowMap(var_164_object);
	return 0;
}


func_2119(var_0_bool, var_692_int, var_693_object)
{
	var_695_object = Obj(); var_696_bool = 0; var_697_int = 0; var_698_bool = 0; var_699_object = Obj(); var_700_bool = 0; var_701_int = 0; var_702_bool = 0;
	var_0_bool = var_693_object;
	var_703_bool = 0; var_704_object = Obj(); var_705_float = 0;
	var_693_object = var_704_object;
	func_9973(var_703_bool, var_704_object, (float)70.0);
	var_706_bool = var_703_bool == 0; //@nz
	if(var_706_bool != 0) {
		var_692_int = -2;
		return 8;
	}
	CreateDialog(var_699_object);
	var_707_int = 0;
	func_10503(var_707_int);
	@@var_699_object:SetNPCName(var_707_int);
	var_708_int = 0;
	func_10501(var_708_int);
	@@var_699_object:SetNPCDescription(var_708_int);
	var_709_string = "";
	func_10505(var_709_string);
	@@var_699_object:SetPhoto(var_709_string);
	var_710_string = "";
	func_10507(var_710_string);
	@@var_699_object:SetPhoto2(var_710_string);
	var_711_int = 0;
	func_12312(var_711_int);
	@@var_699_object:SetPlayerName(var_711_int);
	IsOverrideActive(var_700_bool);
	var_712_bool = var_700_bool;
	if(var_712_bool != 0) {
		var_692_int = -2;
		return 8;
	}
	DoDialog(var_699_object);
	var_713_bool = 0; var_714_object = Obj();
	func_10251(Obj());
	var_715_object = var_714_object;
	func_10060(var_713_bool, var_714_object);
	var_716_object = Obj(); var_717_object = Obj();
	var_693_object = var_716_object;
	var_699_object = var_717_object;
	TaskCall(11);
	func_2200(var_718_object, var_719_object, var_720_string, var_721_bool, var_716_object, var_717_object);
	TaskReturn();
	@@var_699_object:IsDialogEnd(var_702_bool);
	
Label_2182:
	var_800_bool = var_702_bool == 0; //@nz
	if(var_800_bool != 0) {
		sync();
		@@var_699_object:IsDialogEnd(var_702_bool);
		goto Label_2182;
	}
	var_693_object = Obj();
	func_10042();
	StopDialog(var_699_object);
	@@var_699_object:GetReturnValue((int)-1);
	var_701_int = var_692_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_11336(var_466_bool)
{
	var_468_int = 0; var_469_string = "";
	func_10296(var_468_int, "d1q03");
	var_471_bool = var_468_int == (int)1000;
	if(var_471_bool != 0) {
		var_466_bool = 1;
		return 0;
	}
	var_466_bool = 0;
	return 0;
}


func_10312(var_143_object, var_144_string)
{
	var_145_object = Obj(); var_146_object = Obj(); var_147_object = Obj(); var_148_object = Obj();
	GetMainOutdoorScene(var_147_object);
	var_150_int = var_144_string + ".xml";
	AddBlankActorFromXml(var_148_object, var_147_object, var_144_string, var_150_int);
	var_148_object = var_143_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_9291(var_0_bool, var_1_object, var_2_object, var_3_object, var_1528_object, var_1529_object)
{
	var_0_bool = var_1529_object;
	var_1_object = var_1528_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1535_string = "";
		func_9349(var_1529_object, "Neutral");
		@@@var_0_bool:SetMessage((int)535677);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)535678, (int)42150, (int)37364);
		@@@var_0_bool:AddReply((int)540005, (int)-1, (int)41976);
		goto Label_9319;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x244f";
	}
Label_9319:
	var_1550_bool = 0;
	func_10509(var_1550_bool);
	if(var_1550_bool != 0) {

	Label_9323:
		lshWaitForAnimEnd();
		var_1551_object = var_3_object;
		if(var_1551_object != 0) {
		} else {
			var_1552_string = "";
			var_1552_string = var_2_object;
			func_10198(var_1552_string);
			goto Label_9323;
	}
		PlayAnimation("all", "idle");

	Label_9338:
		WaitForAnimEnd();
		var_1555_object = var_3_object;
		if(var_1555_object != 0) {
			goto Label_9348;
		}
		PlayAnimation("all", "idle");
		goto Label_9338;
	}
	goto Label_9348;
	
Label_9348:
	return 0;
	
}


func_11852(var_1255_bool)
{
	var_1257_int = 0; var_1258_string = "";
	func_10296(var_1257_int, "ood8MladVlad5");
	var_1260_bool = var_1257_int == (int)0;
	if(var_1260_bool != 0) {
		var_1255_bool = 1;
		return 0;
	}
	var_1255_bool = 0;
	return 0;
}


func_10323(var_233_int, var_234_int)
{
	var_235_object = Obj(); var_236_object = Obj();
	CreateIntVector(var_236_object);
	@@var_236_object:add(var_233_int);
	@@var_236_object:add(var_234_int);
	SendWorldWndMessage((int)3, var_236_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_11348(var_453_bool)
{
	var_455_int = 0; var_456_string = "";
	func_10296(var_455_int, "d1q03IsKapella");
	var_458_bool = var_455_int == (int)1;
	if(var_458_bool != 0) {
		var_453_bool = 1;
		return 0;
	}
	var_453_bool = 0;
	return 0;
}


func_10837(var_226_object)
{
	var_227_object = Obj(); var_228_string = ""; var_229_float = 0;
	func_12262(Obj());
	var_230_object = var_227_object;
	func_12279(var_227_object, "pt_map_bigvlad", (float)2);
	var_231_object = Obj();
	func_12262(var_231_object);
	@@var_226_object:ShowMap(var_231_object);
	return 0;
}


func_11864(var_1241_bool)
{
	var_1243_int = 0; var_1244_string = "";
	func_10296(var_1243_int, "d8q01BigVladIsVictim");
	var_1246_bool = var_1243_int == (int)1;
	if(var_1246_bool != 0) {
		var_1241_bool = 1;
		return 0;
	}
	var_1241_bool = 0;
	return 0;
}


func_10335(var_220_object, var_221_int)
{
	var_222_int = 0; var_223_int = 0;
	var_224_object = Obj(); var_225_string = ""; var_226_int = 0;
	var_220_object = var_224_object;
	var_221_int = var_226_int;
	func_9931(var_224_object, "money", var_226_int);
	var_231_bool = var_221_int > (int)0;
	if(var_231_bool != 0) {
		GetInvItemByName(var_223_int, "Money");
		var_233_int = 0; var_234_int = 0;
		var_223_int = var_233_int;
		var_221_int = var_234_int;
		func_10323(var_233_int, var_234_int);
	}
	return 2;
}


func_11360(var_433_bool)
{
	var_435_int = 0; var_436_string = "";
	func_10296(var_435_int, "d1q01");
	var_438_bool = var_435_int == (int)6;
	if(var_438_bool != 0) {
		var_433_bool = 1;
		return 0;
	}
	var_433_bool = 0;
	return 0;
}


func_11876(var_1261_bool)
{
	var_1263_int = 0; var_1264_string = "";
	func_10296(var_1263_int, "d8q01MladVladIsVictim");
	var_1266_bool = var_1263_int == (int)1;
	if(var_1266_bool != 0) {
		var_1261_bool = 1;
		return 0;
	}
	var_1261_bool = 0;
	return 0;
}


func_10853(var_242_object)
{
	Trace("money3000 is given");
	var_245_object = Obj(); var_246_int = 0;
	var_242_object = var_245_object;
	func_10335(var_245_object, (int)3000);
	return 0;
}


func_6758(var_0_bool, var_1_object, var_2_object, var_3_object, var_1081_object, var_1082_object)
{
	var_0_bool = var_1082_object;
	var_1_object = var_1081_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1088_string = "";
		func_6822(var_1082_object, "Neutral");
		@@@var_0_bool:SetMessage((int)520914);
		@@@var_0_bool:ClearReplies();
		var_1097_bool = 0; var_1098_object = Obj();
		var_1098_object = var_1_object;
		func_11922(var_1097_bool, var_1098_object);
		var_1099_bool = var_1097_bool == 0; //@nz
		if(var_1099_bool != 0) {
			@@@var_0_bool:AddReply((int)520917, (int)22135, (int)22134);
		}
		@@@var_0_bool:AddReply((int)520915, (int)-1, (int)22132);
		goto Label_6792;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1a6a";
	}
Label_6792:
	var_1106_bool = 0;
	func_10509(var_1106_bool);
	if(var_1106_bool != 0) {

	Label_6796:
		lshWaitForAnimEnd();
		var_1107_object = var_3_object;
		if(var_1107_object != 0) {
		} else {
			var_1108_string = "";
			var_1108_string = var_2_object;
			func_10198(var_1108_string);
			goto Label_6796;
	}
		PlayAnimation("all", "idle");

	Label_6811:
		WaitForAnimEnd();
		var_1111_object = var_3_object;
		if(var_1111_object != 0) {
			goto Label_6821;
		}
		PlayAnimation("all", "idle");
		goto Label_6811;
	}
	goto Label_6821;
	
Label_6821:
	return 0;
	
}


func_9829()
{
	var_98_string = ""; var_99_string = "";
	GetProperty("loc", var_99_string);
	var_101_string = GlobalVars[0];
	var_99_string = var_101_string;
	GlobalVars[0] = var_101_string;
	return 2;
}


func_7275(var_0_bool, var_1_object, var_2_object, var_3_object, var_1394_object, var_1395_object)
{
	var_0_bool = var_1395_object;
	var_1_object = var_1394_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1401_string = "";
		func_7339(var_1395_object, "Neutral");
		@@@var_0_bool:SetMessage((int)520934);
		@@@var_0_bool:ClearReplies();
		var_1410_bool = 0; var_1411_object = Obj();
		var_1411_object = var_1_object;
		func_11922(var_1410_bool, var_1411_object);
		var_1412_bool = var_1410_bool == 0; //@nz
		if(var_1412_bool != 0) {
			@@@var_0_bool:AddReply((int)520935, (int)22153, (int)22152);
		}
		@@@var_0_bool:AddReply((int)520939, (int)-1, (int)22156);
		goto Label_7309;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1c6f";
	}
Label_7309:
	var_1419_bool = 0;
	func_10509(var_1419_bool);
	if(var_1419_bool != 0) {

	Label_7313:
		lshWaitForAnimEnd();
		var_1420_object = var_3_object;
		if(var_1420_object != 0) {
		} else {
			var_1421_string = "";
			var_1421_string = var_2_object;
			func_10198(var_1421_string);
			goto Label_7313;
	}
		PlayAnimation("all", "idle");

	Label_7328:
		WaitForAnimEnd();
		var_1424_object = var_3_object;
		if(var_1424_object != 0) {
			goto Label_7338;
		}
		PlayAnimation("all", "idle");
		goto Label_7328;
	}
	goto Label_7338;
	
Label_7338:
	return 0;
	
}


func_11372(var_362_bool)
{
	var_364_int = 0; var_365_string = "";
	func_10296(var_364_int, "ood1MladVlad1");
	var_369_bool = var_364_int == (int)0;
	if(var_369_bool != 0) {
		var_362_bool = 1;
		return 0;
	}
	var_362_bool = 0;
	return 0;
}


func_9837(var_0_bool, var_1_object)
{
	var_118_cvector = CVector(0,0,0); var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0);
	GetAnimationOffset(var_120_cvector, "all", "walk_stopl");
	GetAnimationOffset(var_121_cvector, "all", "walk_stopr");
	var_126_float = GetByIndex(var_120_cvector, 2);
	var_127_float = GetByIndex(var_121_cvector, 2);
	var_128_int = var_126_float + var_127_float;
	var_0_bool = var_128_int / (float)2.0;
	var_130_float = 0; var_131_float = 0;
	var_132_float = GetByIndex(var_120_cvector, 2);
	var_131_float = var_132_float - var_0_bool;
	func_10267(var_130_float, var_131_float);
	var_1_object = var_130_float + (int)40;
	return 4;
}


func_10863()
{
	SetVariable("ood3MladVlad1", (int)1);
	return 0;
}


func_11888(var_376_bool)
{
	var_378_bool = 0;
	var_378_bool = 0;
	var_379_bool = 0;
	var_379_bool = 0;
	var_380_int = 0; var_381_string = "";
	func_10296(var_380_int, "d1q01");
	var_383_bool = var_380_int != (int)0;
	if(var_383_bool != 0) {
		var_384_int = 0; var_385_string = "";
		func_10296(var_384_int, "d1q01");
		var_387_bool = var_384_int != (int)1000;
		if(var_387_bool != 0) {
			var_379_bool = 1;
		}
	}
	if(var_379_bool != 0) {
		var_388_int = 0; var_389_string = "";
		func_10296(var_388_int, "d1q01");
		var_391_bool = var_388_int != (int)-1;
		if(var_391_bool != 0) {
			var_378_bool = 1;
		}
	}
	if(var_378_bool != 0) {
		var_376_bool = 1;
		return 0;
	}
	var_376_bool = 0;
	return 0;
}


func_10354(var_281_object, var_282_object, var_283_int)
{
	var_284_int = 0; var_285_int = 0; var_286_bool = 0; var_287_int = 0; var_288_int = 0; var_289_bool = 0;
	@@var_282_object:GetItemID(var_287_int);
	GetInvItemProperty(var_288_int, var_287_int, "Category");
	@@var_281_object:AddItem(var_289_bool, var_282_object, var_288_int, var_283_int);
	var_291_bool = var_289_bool == 0; //@nz
	if(var_291_bool != 0) {
		@@var_281_object:DropItems(var_282_object, var_283_int);
	} else {
		var_292_int = 0; var_293_int = 0;
		var_287_int = var_292_int;
		var_283_int = var_293_int;
		func_10323(var_292_int, var_293_int);
	}
	return 6;
	
}


func_10869()
{
	var_88_object = Obj(); var_89_object = Obj();
	SetVariable("d3q02", (int)2);
	func_12262(Obj());
	var_92_object = var_89_object;
	var_103_float = 0;
	func_10443(var_103_float);
	@@var_89_object:AddMark("d3q02MladVladGotoViktor", "pt_map_viktor", (int)0, (int)511384, var_103_float);
	func_12013();
	return 2;
}
EMIT "Stack[-1] = 0";


func_11384(var_422_bool)
{
	var_424_int = 0; var_425_string = "";
	func_10296(var_424_int, "ood1MladVlad2");
	var_427_bool = var_424_int == (int)0;
	if(var_427_bool != 0) {
		var_422_bool = 1;
		return 0;
	}
	var_422_bool = 0;
	return 0;
}


func_11396(var_460_bool)
{
	var_462_int = 0; var_463_string = "";
	func_10296(var_462_int, "ood1MladVlad3");
	var_465_bool = var_462_int == (int)0;
	if(var_465_bool != 0) {
		var_460_bool = 1;
		return 0;
	}
	var_460_bool = 0;
	return 0;
}


func_645(var_0_bool, var_1_object, var_2_object, var_3_object, var_506_object, var_507_object)
{
	var_0_bool = var_507_object;
	var_1_object = var_506_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_513_string = "";
		func_727(var_507_object, "Neutral");
		@@@var_0_bool:SetMessage((int)506929);
		@@@var_0_bool:ClearReplies();
		var_522_bool = 0;
		var_522_bool = 0;
		var_523_bool = 0; var_524_object = Obj();
		var_524_object = var_1_object;
		func_11480(var_524_object);
		if(var_523_bool != 0) {
			var_529_bool = 0; var_530_object = Obj();
			var_530_object = var_1_object;
			func_11456(var_530_object);
			if(var_529_bool != 0) {
				var_522_bool = 1;
			}
		}
		if(var_522_bool != 0) {
			@@@var_0_bool:AddReply((int)506930, (int)7637, (int)7636);
		}
		var_538_bool = 0; var_539_object = Obj();
		var_539_object = var_1_object;
		func_11468(var_539_object);
		if(var_538_bool != 0) {
			@@@var_0_bool:AddReply((int)533959, (int)10443, (int)35526);
		}
		@@@var_0_bool:AddReply((int)507746, (int)-1, (int)8547);
		goto Label_697;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x289";
	}
Label_697:
	var_550_bool = 0;
	func_10509(var_550_bool);
	if(var_550_bool != 0) {

	Label_701:
		lshWaitForAnimEnd();
		var_551_object = var_3_object;
		if(var_551_object != 0) {
		} else {
			var_552_string = "";
			var_552_string = var_2_object;
			func_10198(var_552_string);
			goto Label_701;
	}
		PlayAnimation("all", "idle");

	Label_716:
		WaitForAnimEnd();
		var_555_object = var_3_object;
		if(var_555_object != 0) {
			goto Label_726;
		}
		PlayAnimation("all", "idle");
		goto Label_716;
	}
	goto Label_726;
	
Label_726:
	return 0;
	
}


func_9349(var_2_object, var_1535_string)
{
	var_1536_bool = 0;
	func_10509(var_1536_bool);
	var_1537_bool = var_1536_bool == 0; //@nz
	if(var_1537_bool != 0) {
		return 0;
	}
	var_1538_bool = var_1535_string == var_2_object;
	if(var_1538_bool != 0) {
		return 0;
	}
	var_1539_string = ""; var_1540_bool = 0;
	var_1535_string = var_1539_string;
	var_1542_bool = var_1535_string == "";
	if(var_1542_bool != 0) {
		var_1540_bool = 0;
	} else {
		var_1540_bool = 1;
	}
	func_10214(var_1539_string, var_1540_bool);
	var_2_object = var_1535_string;
	return 0;
	
}


func_10373(var_276_object, var_277_string, var_278_int)
{
	var_279_object = Obj(); var_280_object = Obj();
	CreateInvItem(var_280_object);
	@@var_280_object:SetItemName(var_277_string);
	var_281_object = Obj(); var_282_object = Obj(); var_283_int = 0;
	var_276_object = var_281_object;
	var_280_object = var_282_object;
	var_278_int = var_283_int;
	func_10354(var_281_object, var_282_object, var_283_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_10892()
{
	var_149_object = Obj(); var_150_object = Obj();
	func_12262(Obj());
	var_151_object = var_150_object;
	var_156_float = 0;
	func_10443(var_156_float);
	@@var_150_object:AddMark("d3q02MladVladGotoButcher", "pt_gmap_r7_house2_01", (int)0, (int)524631, var_156_float);
	func_12026();
	return 2;
}
EMIT "Stack[-1] = 0";


func_11408(var_1149_bool)
{
	var_1151_int = 0; var_1152_string = "";
	func_10296(var_1151_int, "ood8MladVlad6");
	var_1154_bool = var_1151_int == (int)0;
	if(var_1154_bool != 0) {
		var_1149_bool = 1;
		return 0;
	}
	var_1149_bool = 0;
	return 0;
}


func_145()
{
	Stop();
	return 0;
}


func_11922(var_661_bool, var_662_object)
{
	var_663_bool = 0; var_664_object = Obj();
	var_662_object = var_664_object;
	func_11942(var_664_object);
	if(var_663_bool != 0) {
		var_661_bool = 1;
		return 0;
	}
	var_661_bool = 0;
	return 0;
}


func_10386(var_198_bool, var_199_object, var_200_float)
{
	var_201_bool = var_199_object == 0; //@nz
	if(var_201_bool != 0) {
		var_198_bool = 0;
		return 0;
	}
	var_203_bool = var_200_float > (int)0;
	if(var_203_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_234_bool = var_200_float < (int)0;
		if(var_234_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_10407;
		}
		var_198_bool = 0;
		return 0;
	}
Label_10407:
	var_205_float = 0;
	var_200_float = var_205_float;
	func_10421(var_205_float);
	var_209_bool = 0; var_210_object = Obj(); var_211_string = ""; var_212_float = 0; var_213_float = 0; var_214_float = 0;
	var_199_object = var_210_object;
	var_200_float = var_212_float;
	func_9909(var_209_bool, var_210_object, "reputation", var_212_float, (float)0, (float)1);
	var_198_bool = 1;
	return 0;
	
}


func_148(var_100_object)
{
	var_101_bool = 0; var_102_bool = 0;
	WaitForAnimEnd(var_102_bool);
	var_103_bool = var_102_bool == 0; //@nz
	if(var_103_bool != 0) {
		return 2;
	}
	var_104_object = Obj();
	var_100_object = var_104_object;
	func_9957(var_104_object);
	Sleep((int)6);
	return 2;
}


func_1173(var_0_bool, var_1_object, var_2_object, var_3_object, var_586_object, var_587_object)
{
	var_0_bool = var_587_object;
	var_1_object = var_586_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_593_string = "";
		func_1313(var_587_object, "Neutral");
		@@@var_0_bool:SetMessage((int)510212);
		@@@var_0_bool:ClearReplies();
		var_602_bool = 0;
		var_602_bool = 0;
		var_603_bool = 0; var_604_object = Obj();
		var_604_object = var_1_object;
		func_11504(var_604_object);
		if(var_603_bool != 0) {
			var_609_bool = 0; var_610_object = Obj();
			var_610_object = var_1_object;
			func_11516(var_610_object);
			if(var_609_bool != 0) {
				var_602_bool = 1;
			}
		}
		if(var_602_bool != 0) {
			@@@var_0_bool:AddReply((int)510213, (int)11260, (int)11259);
		}
		var_618_bool = 0;
		var_618_bool = 0;
		var_619_bool = 0; var_620_object = Obj();
		var_620_object = var_1_object;
		func_11312(var_620_object);
		if(var_619_bool != 0) {
			var_625_bool = 0; var_626_object = Obj();
			var_626_object = var_1_object;
			func_11492(var_626_object);
			var_631_bool = var_625_bool == 0; //@nz
			if(var_631_bool != 0) {
				var_618_bool = 1;
			}
		}
		if(var_618_bool != 0) {
			@@@var_0_bool:AddReply((int)510302, (int)11359, (int)11358);
		}
		var_635_bool = 0;
		var_635_bool = 1;
		var_636_bool = 0;
		var_636_bool = 0;
		var_637_bool = 0; var_638_object = Obj();
		var_638_object = var_1_object;
		func_11528(var_638_object);
		if(var_637_bool != 0) {
			var_643_bool = 0; var_644_object = Obj();
			var_644_object = var_1_object;
			func_11444(var_644_object);
			if(var_643_bool != 0) {
				var_636_bool = 1;
			}
		}
		if(var_636_bool != 1) {
			var_649_bool = 0;
			var_649_bool = 0;
			var_650_bool = 0; var_651_object = Obj();
			var_651_object = var_1_object;
			func_11540(var_651_object);
			if(var_650_bool != 0) {
				var_656_bool = 0; var_657_object = Obj();
				var_657_object = var_1_object;
				func_11444(var_657_object);
				if(var_656_bool != 0) {
					var_649_bool = 1;
				}
			}
			if(var_649_bool != 1) {
				var_635_bool = 0;
			}
		}
		if(var_635_bool != 0) {
			@@@var_0_bool:AddReply((int)510334, (int)11395, (int)11394);
		}
		var_661_bool = 0; var_662_object = Obj();
		var_662_object = var_1_object;
		func_11922(var_661_bool, var_662_object);
		var_673_bool = var_661_bool == 0; //@nz
		if(var_673_bool != 0) {
			@@@var_0_bool:AddReply((int)520897, (int)22115, (int)22114);
		}
		@@@var_0_bool:AddReply((int)520896, (int)-1, (int)22113);
		goto Label_1283;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x499";
	}
Label_1283:
	var_680_bool = 0;
	func_10509(var_680_bool);
	if(var_680_bool != 0) {

	Label_1287:
		lshWaitForAnimEnd();
		var_681_object = var_3_object;
		if(var_681_object != 0) {
		} else {
			var_682_string = "";
			var_682_string = var_2_object;
			func_10198(var_682_string);
			goto Label_1287;
	}
		PlayAnimation("all", "idle");

	Label_1302:
		WaitForAnimEnd();
		var_685_object = var_3_object;
		if(var_685_object != 0) {
			goto Label_1312;
		}
		PlayAnimation("all", "idle");
		goto Label_1302;
	}
	goto Label_1312;
	
Label_1312:
	return 0;
	
}


func_2200(var_0_bool, var_1_object, var_2_object, var_3_object, var_716_object, var_717_object)
{
	var_0_bool = var_717_object;
	var_1_object = var_716_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_723_bool = 0;
		var_723_bool = 0;
		var_724_bool = 0; var_725_object = Obj();
		var_725_object = var_1_object;
		func_11576(var_725_object);
		if(var_724_bool != 0) {
			var_730_bool = 0; var_731_object = Obj();
			var_731_object = var_1_object;
			func_11552(var_731_object);
			var_736_bool = var_730_bool == 0; //@nz
			if(var_736_bool != 0) {
				var_723_bool = 1;
			}
		}
		if(var_723_bool != 0) {
			var_737_object = Obj(); var_738_object = Obj();
			var_737_object = var_1_object;
			var_738_object = var_0_bool;
			func_10659();
			var_741_string = "";
			func_2337(var_717_object, "Neutral");
			@@@var_0_bool:SetMessage((int)511395);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511396, (int)12594, (int)12593);
		} else {
				var_761_string = "";
				func_2337(var_717_object, "Neutral");
				@@@var_0_bool:SetMessage((int)510814);
				@@@var_0_bool:ClearReplies();
				var_763_bool = 0;
				var_763_bool = 0;
				var_764_bool = 0; var_765_object = Obj();
				var_765_object = var_1_object;
				func_11564(var_765_object);
				if(var_764_bool != 0) {
					var_770_bool = 0; var_771_object = Obj();
					var_771_object = var_1_object;
					func_11552(var_771_object);
					if(var_770_bool != 0) {
						var_763_bool = 1;
					}
				}
				if(var_763_bool != 0) {
					@@@var_0_bool:AddReply((int)510815, (int)11956, (int)11955);
				}
				var_775_bool = 0;
				var_775_bool = 0;
				var_776_bool = 0; var_777_object = Obj();
				var_777_object = var_1_object;
				func_11600(var_777_object);
				if(var_776_bool != 0) {
					var_782_bool = 0; var_783_object = Obj();
					var_783_object = var_1_object;
					func_11588(var_783_object);
					if(var_782_bool != 0) {
						var_775_bool = 1;
					}
				}
				if(var_775_bool != 0) {
					@@@var_0_bool:AddReply((int)511862, (int)37886, (int)13075);
				}
				var_791_bool = 0; var_792_object = Obj();
				var_792_object = var_1_object;
				func_11922(var_791_bool, var_792_object);
				var_793_bool = var_791_bool == 0; //@nz
				if(var_793_bool != 0) {
					@@@var_0_bool:AddReply((int)520901, (int)22119, (int)22118);
				}
				@@@var_0_bool:AddReply((int)511408, (int)-1, (int)12605);
				goto Label_2307;
		}
	}
Label_2307:
	var_753_bool = 0;
	func_10509(var_753_bool);
	if(var_753_bool != 0) {

	Label_2311:
		lshWaitForAnimEnd();
		var_754_object = var_3_object;
		if(var_754_object != 0) {
		} else {
			var_755_string = "";
			var_755_string = var_2_object;
			func_10198(var_755_string);
			goto Label_2311;
	}
		PlayAnimation("all", "idle");

	Label_2326:
		WaitForAnimEnd();
		var_758_object = var_3_object;
		if(var_758_object != 0) {
			goto Label_2336;
		}
		PlayAnimation("all", "idle");
		goto Label_2326;

	}
	goto Label_2336;
	
Label_2336:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x89c";


func_11932(var_214_bool, var_215_object)
{
	var_216_bool = 0; var_217_object = Obj();
	var_215_object = var_217_object;
	func_11954(var_216_bool, var_217_object);
	if(var_216_bool != 0) {
		var_214_bool = 1;
		return 0;
	}
	var_214_bool = 0;
	return 0;
}


func_11420(var_1293_bool)
{
	var_1295_int = 0; var_1296_string = "";
	func_10296(var_1295_int, "d8q04");
	var_1298_bool = var_1295_int == (int)2;
	if(var_1298_bool != 0) {
		var_1293_bool = 1;
		return 0;
	}
	var_1293_bool = 0;
	return 0;
}


func_9884(var_138_cvector)
{
	var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0);
	GetPosition(var_140_cvector);
	var_140_cvector = var_138_cvector;
	return 2;
}


func_10911()
{
	SetVariable("ood4MladVlad1", (int)1);
	return 0;
}


func_9889(var_86_float, var_87_object)
{
	var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0);
	GetPosition(var_91_cvector);
	@@var_87_object:GetPosition(var_92_cvector);
	var_93_cvector = var_92_cvector - var_91_cvector;
	var_86_float = var_93_cvector | var_93_cvector;
	return 6;
}


func_10917()
{
	var_195_object = Obj(); var_196_object = Obj();
	SetVariable("d4q01", (int)3);
	func_12262(Obj());
	var_199_object = var_196_object;
	var_204_float = 0;
	func_10443(var_204_float);
	@@var_196_object:AddMark("d4q01MladVladGotoBigVlad", "pt_map_bigvlad", (int)1, (int)511507, var_204_float);
	func_12039();
	return 2;
}
EMIT "Stack[-1] = 0";


func_6822(var_2_object, var_1088_string)
{
	var_1089_bool = 0;
	func_10509(var_1089_bool);
	var_1090_bool = var_1089_bool == 0; //@nz
	if(var_1090_bool != 0) {
		return 0;
	}
	var_1091_bool = var_1088_string == var_2_object;
	if(var_1091_bool != 0) {
		return 0;
	}
	var_1092_string = ""; var_1093_bool = 0;
	var_1088_string = var_1092_string;
	var_1095_bool = var_1088_string == "";
	if(var_1095_bool != 0) {
		var_1093_bool = 0;
	} else {
		var_1093_bool = 1;
	}
	func_10214(var_1092_string, var_1093_bool);
	var_2_object = var_1088_string;
	return 0;
	
}


func_11942(var_663_bool)
{
	var_665_int = 0; var_666_int = 0; var_667_int = 0; var_668_int = 0;
	func_10448((int)0);
	var_669_int = var_667_int;
	var_671_int = "RMap" + var_667_int;
	GetVariable(var_671_int, var_668_int);
	var_663_bool = var_668_int != (int)0;
	return 4;
}


func_11432(var_1471_bool)
{
	var_1473_int = 0; var_1474_string = "";
	func_10296(var_1473_int, "d11q05");
	var_1476_bool = var_1473_int == (int)2;
	if(var_1476_bool != 0) {
		var_1471_bool = 1;
		return 0;
	}
	var_1471_bool = 0;
	return 0;
}


func_9897(var_217_bool, var_218_object, var_219_string)
{
	var_220_bool = 0; var_221_bool = 0;
	var_224_bool = IsFuncExist(var_218_object, "HasProperty", (int)2);
	var_225_bool = var_224_bool == 0; //@nz
	if(var_225_bool != 0) {
		var_217_bool = 0;
		return 2;
	}
	@@var_218_object:HasProperty(var_219_string, var_221_bool);
	var_221_bool = var_217_bool;
	return 2;
}


func_7339(var_2_object, var_1401_string)
{
	var_1402_bool = 0;
	func_10509(var_1402_bool);
	var_1403_bool = var_1402_bool == 0; //@nz
	if(var_1403_bool != 0) {
		return 0;
	}
	var_1404_bool = var_1401_string == var_2_object;
	if(var_1404_bool != 0) {
		return 0;
	}
	var_1405_string = ""; var_1406_bool = 0;
	var_1401_string = var_1405_string;
	var_1408_bool = var_1401_string == "";
	if(var_1408_bool != 0) {
		var_1406_bool = 0;
	} else {
		var_1406_bool = 1;
	}
	func_10214(var_1405_string, var_1406_bool);
	var_2_object = var_1401_string;
	return 0;
	
}


func_11954(var_216_bool, var_217_object)
{
	var_218_int = 0; var_219_int = 0;
	@@var_217_object:GetProperty("money", var_219_int);
	var_216_bool = var_219_int >= (int)1000;
	return 2;
}


func_11444(var_643_bool)
{
	var_645_int = 0; var_646_string = "";
	func_10296(var_645_int, "ood3MladVlad3");
	var_648_bool = var_645_int == (int)0;
	if(var_648_bool != 0) {
		var_643_bool = 1;
		return 0;
	}
	var_643_bool = 0;
	return 0;
}


func_10421(var_205_float)
{
	var_206_object = Obj(); var_207_object = Obj();
	CreateFloatVector(var_207_object);
	@@var_207_object:add(var_205_float);
	SendWorldWndMessage((int)16, var_207_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9909(var_209_bool, var_210_object, var_211_string, var_212_float, var_213_float, var_214_float)
{
	var_215_float = 0; var_216_float = 0;
	var_217_bool = 0; var_218_object = Obj(); var_219_string = "";
	var_210_object = var_218_object;
	var_211_string = var_219_string;
	func_9897(var_217_bool, var_218_object, var_219_string);
	var_226_bool = var_217_bool == 0; //@nz
	if(var_226_bool != 0) {
		var_209_bool = 0;
		return 2;
	}
	@@var_210_object:GetProperty(var_211_string, var_216_float);
	var_227_float = 0; var_228_float = 0; var_229_float = 0; var_230_float = 0;
	var_228_float = var_216_float + var_212_float;
	var_213_float = var_229_float;
	var_214_float = var_230_float;
	func_10275(var_227_float, var_228_float, var_229_float, var_230_float);
	@@var_210_object:SetProperty(var_211_string, var_227_float);
	var_209_bool = 1;
	return 2;
}


func_11961()
{
	var_82_object = Obj(); var_83_object = Obj();
	CreateDiaryEntry(var_83_object, (int)685, (int)2, (int)534500);
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0;
	var_83_object = var_88_object;
	func_12234(var_87_bool, var_88_object, (int)682);
	return 2;
}
EMIT "Stack[-1] = 0";


func_10940()
{
	var_215_object = Obj(); var_216_object = Obj();
	SetVariable("d4q01_subquest", (int)1);
	func_12262(Obj());
	var_219_object = var_216_object;
	var_224_float = 0;
	func_10443(var_224_float);
	@@var_216_object:AddMark("d4q01MladVladGotoOspina", "pt_map_ospina", (int)1, (int)511503, var_224_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_10431(var_185_bool, var_186_string, var_187_string)
{
	var_188_object = Obj(); var_189_object = Obj();
	FindActor(var_189_object, var_186_string);
	var_190_bool = var_189_object == 0; //@ne
	if(var_190_bool != 0) {
		var_185_bool = 0;
		return 2;
	}
	Trigger(var_189_object, var_187_string);
	var_185_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_11456(var_529_bool)
{
	var_531_int = 0; var_532_string = "";
	func_10296(var_531_int, "d2q03");
	var_534_bool = var_531_int == (int)1;
	if(var_534_bool != 0) {
		var_529_bool = 1;
		return 0;
	}
	var_529_bool = 0;
	return 0;
}


func_193()
{
	StopGroup0();
	StopAnimation();
	return 0;
}


func_4289(var_2_object, var_974_string)
{
	var_975_bool = 0;
	func_10509(var_975_bool);
	var_976_bool = var_975_bool == 0; //@nz
	if(var_976_bool != 0) {
		return 0;
	}
	var_977_bool = var_974_string == var_2_object;
	if(var_977_bool != 0) {
		return 0;
	}
	var_978_string = ""; var_979_bool = 0;
	var_974_string = var_978_string;
	var_981_bool = var_974_string == "";
	if(var_981_bool != 0) {
		var_979_bool = 0;
	} else {
		var_979_bool = 1;
	}
	func_10214(var_978_string, var_979_bool);
	var_2_object = var_974_string;
	return 0;
	
}


func_198(var_184_int)
{
	var_185_string = ""; var_186_bool = 0; var_187_string = ""; var_188_int = 0; var_189_int = 0; var_190_int = 0; var_191_int = 0; var_192_string = ""; var_193_bool = 0; var_194_string = ""; var_195_int = 0; var_196_int = 0; var_197_int = 0; var_198_int = 0;
	var_199_int = var_184_int;
	if(var_199_int != 0) {
		var_192_string = "ptidle" + var_184_int;
	} else {
			var_192_string = "ptidle";
	}
	HasProperty(var_192_string, var_193_bool);
	var_201_bool = var_193_bool;
	if(var_201_bool != 0) {
		GetProperty(var_192_string, var_194_string);
		var_202_int = 0; var_203_string = "";
		var_194_string = var_203_string;
		func_264(var_202_int, var_203_string);
		var_202_int = var_195_int;
		irand(var_196_int, var_195_int);
		var_217_string = ""; var_218_string = ""; var_219_int = 0;
		var_194_string = var_218_string;
		var_196_int = var_219_int;
		func_256(var_217_string, var_218_string, var_219_int);
		PlayAnimation("all", var_217_string);
		WaitForAnimEnd();
	} else {
		func_10470((int)0);
		var_220_int = var_197_int;
		var_233_int = var_197_int;
		if(var_233_int == 0) goto Label_246;
		irand(var_198_int, var_197_int);
		var_235_string = ""; var_236_int = 0;
		var_198_int = var_236_int;
		func_10463(var_235_string, var_236_int);
		PlayAnimation("all", var_235_string);
		WaitForAnimEnd();

	}
Label_246:
	return 14;
	
}


func_11974()
{
	var_177_object = Obj(); var_178_object = Obj();
	CreateDiaryEntry(var_178_object, (int)620, (int)1, (int)532194);
	var_182_bool = 0; var_183_object = Obj(); var_184_int = 0;
	var_178_object = var_183_object;
	func_12234(var_182_bool, var_183_object, (int)2);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9931(var_224_object, var_225_string, var_226_int)
{
	var_227_int = 0; var_228_int = 0;
	@@var_224_object:GetProperty(var_225_string, var_228_int);
	var_229_int = var_228_int + var_226_int;
	@@var_224_object:SetProperty(var_225_string, var_229_int);
	return 2;
}


func_11468(var_538_bool)
{
	var_540_int = 0; var_541_string = "";
	func_10296(var_540_int, "ood2MladVlad1");
	var_543_bool = var_540_int == (int)0;
	if(var_543_bool != 0) {
		var_538_bool = 1;
		return 0;
	}
	var_538_bool = 0;
	return 0;
}


func_10443(var_97_float)
{
	var_98_float = 0; var_99_float = 0;
	GetGameTime(var_99_float);
	var_99_float = var_97_float;
	return 2;
}


func_10960()
{
	SetVariable("ood4MladVlad2", (int)1);
	return 0;
}


func_10448(var_222_int)
{
	var_223_float = 0; var_224_float = 0;
	GetGameTime(var_224_float);
	var_226_int = 0;
	var_226_int = var_224_float / (int)24;
	var_222_int = (int)1 + var_226_int;
	return 2;
}


func_9938(var_165_bool, var_166_cvector)
{
	var_167_cvector = CVector(0,0,0); var_168_cvector = CVector(0,0,0); var_169_bool = 0; var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0); var_172_bool = 0;
	GetPosition(var_170_cvector);
	var_171_cvector = var_166_cvector - var_170_cvector;
	var_173_float = GetByIndex(var_171_cvector, 0);
	var_174_float = GetByIndex(var_171_cvector, 2);
	Rotate(var_173_float, var_174_float, var_172_bool);
	var_172_bool = var_165_bool;
	return 6;
}


func_11987()
{
	var_100_object = Obj(); var_101_object = Obj();
	CreateDiaryEntry(var_101_object, (int)37, (int)2, (int)512119);
	var_105_bool = 0; var_106_object = Obj(); var_107_int = 0;
	var_101_object = var_106_object;
	func_12234(var_105_bool, var_106_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_10966()
{
	var_86_object = Obj(); var_87_object = Obj();
	func_12262(Obj());
	var_88_object = var_87_object;
	var_99_float = 0;
	func_10443(var_99_float);
	@@var_87_object:AddMark("d4q02MladVladGotoAnna", "pt_map_anna", (int)0, (int)511526, var_99_float);
	var_106_float = 0;
	func_10443(var_106_float);
	@@var_87_object:AddMark("d4q02MladVladGotoJulia", "pt_map_julia", (int)0, (int)511524, var_106_float);
	var_111_float = 0;
	func_10443(var_111_float);
	@@var_87_object:AddMark("d4q02MladVladGotoLara", "pt_map_lara", (int)0, (int)511525, var_111_float);
	func_12052();
	func_12065();
	var_143_object = Obj(); var_144_string = "";
	func_10312(var_143_object, "quest_d4_02");
	return 2;
}
EMIT "Stack[-1] = 0";


func_727(var_2_object, var_513_string)
{
	var_514_bool = 0;
	func_10509(var_514_bool);
	var_515_bool = var_514_bool == 0; //@nz
	if(var_515_bool != 0) {
		return 0;
	}
	var_516_bool = var_513_string == var_2_object;
	if(var_516_bool != 0) {
		return 0;
	}
	var_517_string = ""; var_518_bool = 0;
	var_513_string = var_517_string;
	var_520_bool = var_513_string == "";
	if(var_520_bool != 0) {
		var_518_bool = 0;
	} else {
		var_518_bool = 1;
	}
	func_10214(var_517_string, var_518_bool);
	var_2_object = var_513_string;
	return 0;
	
}


func_11480(var_523_bool)
{
	var_525_int = 0; var_526_string = "";
	func_10296(var_525_int, "ood2MladVlad2");
	var_528_bool = var_525_int == (int)0;
	if(var_528_bool != 0) {
		var_523_bool = 1;
		return 0;
	}
	var_523_bool = 0;
	return 0;
}


func_10457(var_326_bool, var_327_int)
{
	var_328_int = 0;
	func_10448(var_328_int);
	var_326_bool = var_328_int == var_327_int;
	return 0;
}


func_9948(var_78_bool, var_79_object)
{
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0);
	@@var_79_object:GetPosition(var_81_cvector);
	var_82_bool = 0; var_83_cvector = CVector(0,0,0);
	var_81_cvector = var_83_cvector;
	func_9938(var_82_bool, var_83_cvector);
	var_82_bool = var_78_bool;
	return 2;
}


func_4828(var_0_bool, var_1118_int, var_1119_object)
{
	var_1121_object = Obj(); var_1122_bool = 0; var_1123_int = 0; var_1124_bool = 0; var_1125_object = Obj(); var_1126_bool = 0; var_1127_int = 0; var_1128_bool = 0;
	var_0_bool = var_1119_object;
	var_1129_bool = 0; var_1130_object = Obj(); var_1131_float = 0;
	var_1119_object = var_1130_object;
	func_9973(var_1129_bool, var_1130_object, (float)70.0);
	var_1132_bool = var_1129_bool == 0; //@nz
	if(var_1132_bool != 0) {
		var_1118_int = -2;
		return 8;
	}
	CreateDialog(var_1125_object);
	var_1133_int = 0;
	func_10503(var_1133_int);
	@@var_1125_object:SetNPCName(var_1133_int);
	var_1134_int = 0;
	func_10501(var_1134_int);
	@@var_1125_object:SetNPCDescription(var_1134_int);
	var_1135_string = "";
	func_10505(var_1135_string);
	@@var_1125_object:SetPhoto(var_1135_string);
	var_1136_string = "";
	func_10507(var_1136_string);
	@@var_1125_object:SetPhoto2(var_1136_string);
	var_1137_int = 0;
	func_12312(var_1137_int);
	@@var_1125_object:SetPlayerName(var_1137_int);
	IsOverrideActive(var_1126_bool);
	var_1138_bool = var_1126_bool;
	if(var_1138_bool != 0) {
		var_1118_int = -2;
		return 8;
	}
	DoDialog(var_1125_object);
	var_1139_bool = 0; var_1140_object = Obj();
	func_10251(Obj());
	var_1141_object = var_1140_object;
	func_10060(var_1139_bool, var_1140_object);
	var_1142_object = Obj(); var_1143_object = Obj();
	var_1119_object = var_1142_object;
	var_1125_object = var_1143_object;
	TaskCall(17);
	func_4909(var_1144_object, var_1145_object, var_1146_string, var_1147_bool, var_1142_object, var_1143_object);
	TaskReturn();
	@@var_1125_object:IsDialogEnd(var_1128_bool);
	
Label_4891:
	var_1305_bool = var_1128_bool == 0; //@nz
	if(var_1305_bool != 0) {
		sync();
		@@var_1125_object:IsDialogEnd(var_1128_bool);
		goto Label_4891;
	}
	var_1119_object = Obj();
	func_10042();
	StopDialog(var_1125_object);
	@@var_1125_object:GetReturnValue((int)-1);
	var_1127_int = var_1118_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_10463(var_226_string, var_227_int)
{
	var_228_string = ""; var_229_string = "";
	var_230_int = var_227_int;
	if(var_230_int != 0) {
		"idle" = "idle" + var_227_int;
	}
	var_229_string = var_226_string;
	return 2;
}


func_12000()
{
	var_123_object = Obj(); var_124_object = Obj();
	CreateDiaryEntry(var_124_object, (int)681, (int)2, (int)534423);
	var_128_bool = 0; var_129_object = Obj(); var_130_int = 0;
	var_124_object = var_129_object;
	func_12234(var_128_bool, var_129_object, (int)37);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3298(var_0_bool, var_804_int, var_805_object)
{
	var_807_object = Obj(); var_808_bool = 0; var_809_int = 0; var_810_bool = 0; var_811_object = Obj(); var_812_bool = 0; var_813_int = 0; var_814_bool = 0;
	var_0_bool = var_805_object;
	var_815_bool = 0; var_816_object = Obj(); var_817_float = 0;
	var_805_object = var_816_object;
	func_9973(var_815_bool, var_816_object, (float)70.0);
	var_818_bool = var_815_bool == 0; //@nz
	if(var_818_bool != 0) {
		var_804_int = -2;
		return 8;
	}
	CreateDialog(var_811_object);
	var_819_int = 0;
	func_10503(var_819_int);
	@@var_811_object:SetNPCName(var_819_int);
	var_820_int = 0;
	func_10501(var_820_int);
	@@var_811_object:SetNPCDescription(var_820_int);
	var_821_string = "";
	func_10505(var_821_string);
	@@var_811_object:SetPhoto(var_821_string);
	var_822_string = "";
	func_10507(var_822_string);
	@@var_811_object:SetPhoto2(var_822_string);
	var_823_int = 0;
	func_12312(var_823_int);
	@@var_811_object:SetPlayerName(var_823_int);
	IsOverrideActive(var_812_bool);
	var_824_bool = var_812_bool;
	if(var_824_bool != 0) {
		var_804_int = -2;
		return 8;
	}
	DoDialog(var_811_object);
	var_825_bool = 0; var_826_object = Obj();
	func_10251(Obj());
	var_827_object = var_826_object;
	func_10060(var_825_bool, var_826_object);
	var_828_object = Obj(); var_829_object = Obj();
	var_805_object = var_828_object;
	var_811_object = var_829_object;
	TaskCall(13);
	func_3379(var_830_object, var_831_object, var_832_string, var_833_bool, var_828_object, var_829_object);
	TaskReturn();
	@@var_811_object:IsDialogEnd(var_814_bool);
	
Label_3361:
	var_933_bool = var_814_bool == 0; //@nz
	if(var_933_bool != 0) {
		sync();
		@@var_811_object:IsDialogEnd(var_814_bool);
		goto Label_3361;
	}
	var_805_object = Obj();
	func_10042();
	StopDialog(var_811_object);
	@@var_811_object:GetReturnValue((int)-1);
	var_813_int = var_804_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_11492(var_625_bool)
{
	var_627_int = 0; var_628_string = "";
	func_10296(var_627_int, "d3q01");
	var_630_bool = var_627_int == (int)0;
	if(var_630_bool != 0) {
		var_625_bool = 1;
		return 0;
	}
	var_625_bool = 0;
	return 0;
}


func_9957(var_104_object)
{
	var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_cvector = CVector(0,0,0);
	@@var_104_object:GetPosition(var_108_cvector);
	GetPosition(var_109_cvector);
	var_110_cvector = var_108_cvector - var_109_cvector;
	var_111_float = GetByIndex(var_110_cvector, 0);
	var_112_float = GetByIndex(var_110_cvector, 2);
	RotateAsync(var_111_float, var_112_float);
	return 6;
}


func_10470(var_220_int)
{
	var_221_int = 0; var_222_bool = 0; var_223_int = 0; var_224_bool = 0;
	var_223_int = 0;
	
Label_10472:
	var_226_string = ""; var_227_int = 0;
	var_223_int = var_227_int;
	func_10463(var_226_string, var_227_int);
	HasAnimation(var_224_bool, "all", var_226_string);
	var_231_bool = var_224_bool == 0; //@nz
	if(var_231_bool != 0) {
	} else {
		var_223_int = var_223_int + (int)1;
		goto Label_10472;
	}
	var_223_int = var_220_int;
	return 4;
	
}


func_7916(var_0_bool, var_329_int, var_330_object)
{
	var_332_object = Obj(); var_333_bool = 0; var_334_int = 0; var_335_bool = 0; var_336_object = Obj(); var_337_bool = 0; var_338_int = 0; var_339_bool = 0;
	var_0_bool = var_330_object;
	var_340_bool = 0; var_341_object = Obj(); var_342_float = 0;
	var_330_object = var_341_object;
	func_9973(var_340_bool, var_341_object, (float)70.0);
	var_343_bool = var_340_bool == 0; //@nz
	if(var_343_bool != 0) {
		var_329_int = -2;
		return 8;
	}
	CreateDialog(var_336_object);
	var_344_int = 0;
	func_10503(var_344_int);
	@@var_336_object:SetNPCName(var_344_int);
	var_345_int = 0;
	func_10501(var_345_int);
	@@var_336_object:SetNPCDescription(var_345_int);
	var_346_string = "";
	func_10505(var_346_string);
	@@var_336_object:SetPhoto(var_346_string);
	var_347_string = "";
	func_10507(var_347_string);
	@@var_336_object:SetPhoto2(var_347_string);
	var_348_int = 0;
	func_12312(var_348_int);
	@@var_336_object:SetPlayerName(var_348_int);
	IsOverrideActive(var_337_bool);
	var_349_bool = var_337_bool;
	if(var_349_bool != 0) {
		var_329_int = -2;
		return 8;
	}
	DoDialog(var_336_object);
	var_350_bool = 0; var_351_object = Obj();
	func_10251(Obj());
	var_352_object = var_351_object;
	func_10060(var_350_bool, var_351_object);
	var_353_object = Obj(); var_354_object = Obj();
	var_330_object = var_353_object;
	var_336_object = var_354_object;
	TaskCall(27);
	func_7997(var_355_object, var_356_object, var_357_string, var_358_bool, var_353_object, var_354_object);
	TaskReturn();
	@@var_336_object:IsDialogEnd(var_339_bool);
	
Label_7979:
	var_478_bool = var_339_bool == 0; //@nz
	if(var_478_bool != 0) {
		sync();
		@@var_336_object:IsDialogEnd(var_339_bool);
		goto Label_7979;
	}
	var_330_object = Obj();
	func_10042();
	StopDialog(var_336_object);
	@@var_336_object:GetReturnValue((int)-1);
	var_338_int = var_329_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_12013()
{
	var_106_object = Obj(); var_107_object = Obj();
	CreateDiaryEntry(var_107_object, (int)78, (int)2, (int)512160);
	var_111_bool = 0; var_112_object = Obj(); var_113_int = 0;
	var_107_object = var_112_object;
	func_12234(var_111_bool, var_112_object, (int)26);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9968(var_112_bool)
{
	var_113_bool = 0; var_114_bool = 0;
	IsLoaded(var_114_bool);
	var_114_bool = var_112_bool;
	return 2;
}


func_11504(var_603_bool)
{
	var_605_int = 0; var_606_string = "";
	func_10296(var_605_int, "d3q02");
	var_608_bool = var_605_int == (int)1;
	if(var_608_bool != 0) {
		var_603_bool = 1;
		return 0;
	}
	var_603_bool = 0;
	return 0;
}


func_9973(var_106_bool, var_107_object, var_108_float)
{
	var_109_float = 0; var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); var_116_bool = 0; var_117_bool = 0; var_118_float = 0; var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_bool = 0; var_126_bool = 0;
	@@var_107_object:GetPosition(var_119_cvector);
	@@var_107_object:GetEyesHeight(var_118_float);
	var_127_float = GetByIndex(var_119_cvector, 1);
	var_127_float = var_127_float + var_118_float;
	SetByIndex(var_119_cvector, 1) = var_127_float;
	GetPosition(var_120_cvector);
	GetEyesHeight(var_118_float);
	var_128_float = GetByIndex(var_120_cvector, 1);
	var_128_float = var_128_float + var_118_float;
	SetByIndex(var_120_cvector, 1) = var_128_float;
	var_121_cvector = var_119_cvector - var_120_cvector;
	var_129_float = GetByIndex(var_121_cvector, 1);
	SetByIndex(var_121_cvector, 1) = (float)0;
	var_130_int = var_121_cvector | var_121_cvector;
	var_131_float = sqrt(var_130_int);
	var_121_cvector = var_121_cvector / var_131_float;
	var_122_cvector = -var_121_cvector;
	var_132_float = var_121_cvector * var_108_float;
	var_133_cvector = CVector(0,0,0); var_134_cvector = CVector(0,0,0);
	var_134_cvector = var_122_cvector ^ CVector(0.0, 1.0, 0.0);
	func_10257(var_133_cvector, var_134_cvector);
	var_142_float = var_133_cvector * (int)25;
	var_143_int = var_132_float + var_142_float;
	var_123_cvector = var_143_int - CVector(0.0, 10.0, 0.0);
	var_124_cvector = var_120_cvector + var_123_cvector;
	IsOverrideActive(var_125_bool);
	var_145_bool = var_125_bool;
	if(var_145_bool != 0) {
		var_106_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_124_cvector, var_122_cvector, (bool)1);
	var_147_float = GetByIndex(var_123_cvector, 0);
	var_148_float = GetByIndex(var_123_cvector, 2);
	Rotate(var_147_float, var_148_float);
	var_149_bool = 0;
	func_10509(var_149_bool);
	if(var_149_bool != 0) {
	} else {
		HasAnimationTrack(var_126_bool, "head");
		var_151_bool = var_126_bool;
		if(var_151_bool == 0) goto Label_10036;
		LookAsyncCamera("head");
	}
Label_10036:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_106_bool = 1;
	return 18;
	
}


func_10487(var_102_string, var_103_int)
{
	var_105_bool = var_103_int == (int)0;
	if(var_105_bool != 0) {
		var_107_string = GlobalVars[0];
		var_102_string = "pt_" + var_107_string;
	} else {
		var_109_string = GlobalVars[0];
		var_110_int = "pt_" + var_109_string;
		var_102_string = var_110_int + var_103_int;
	}
	return 0;
	
}


func_12026()
{
	var_157_object = Obj(); var_158_object = Obj();
	CreateDiaryEntry(var_158_object, (int)79, (int)2, (int)512161);
	var_162_bool = 0; var_163_object = Obj(); var_164_int = 0;
	var_158_object = var_163_object;
	func_12234(var_162_bool, var_163_object, (int)26);
	return 2;
}
EMIT "Stack[-1] = 0";


func_11516(var_609_bool)
{
	var_611_int = 0; var_612_string = "";
	func_10296(var_611_int, "ood3MladVlad1");
	var_614_bool = var_611_int == (int)0;
	if(var_614_bool != 0) {
		var_609_bool = 1;
		return 0;
	}
	var_609_bool = 0;
	return 0;
}


func_256(var_209_string, var_210_string, var_211_int)
{
	var_213_bool = var_211_int == (int)0;
	if(var_213_bool != 0) {
		var_210_string = var_209_string;
	} else {
		var_209_string = var_210_string + var_211_int;
	}
	return 0;
	
}


func_11010()
{
	SetVariable("ood4MladVlad3", (int)1);
	return 0;
}


func_10501(var_155_int)
{
	var_155_int = 515547;
	return 0;
}


func_10503(var_154_int)
{
	var_154_int = 502872;
	return 0;
}


func_264(var_202_int, var_203_string)
{
	var_204_int = 0; var_205_bool = 0; var_206_int = 0; var_207_bool = 0;
	var_206_int = 0;
	
Label_266:
	var_209_string = ""; var_210_string = ""; var_211_int = 0;
	var_203_string = var_210_string;
	var_206_int = var_211_int;
	func_256(var_209_string, var_210_string, var_211_int);
	HasAnimation(var_207_bool, "all", var_209_string);
	var_214_bool = var_207_bool == 0; //@nz
	if(var_214_bool != 0) {
	} else {
		var_206_int = var_206_int + (int)1;
		goto Label_266;
	}
	var_206_int = var_202_int;
	return 4;
	
}


func_10505(var_156_string)
{
	var_156_string = "ui/NPC_MladVlad.png";
	return 0;
}


func_11528(var_637_bool)
{
	var_639_int = 0; var_640_string = "";
	func_10296(var_639_int, "d3q02");
	var_642_bool = var_639_int == (int)3;
	if(var_642_bool != 0) {
		var_637_bool = 1;
		return 0;
	}
	var_637_bool = 0;
	return 0;
}


func_10507(var_157_string)
{
	var_157_string = "ui/NPC_MladVlad_b.png";
	return 0;
}


func_11016()
{
	var_86_object = Obj(); var_87_object = Obj();
	func_12262(Obj());
	var_88_object = var_87_object;
	var_99_float = 0;
	func_10443(var_99_float);
	@@var_87_object:AddMark("d6q02MladVladGotoBigVlad", "pt_map_bigvlad", (int)0, (int)515378, var_99_float);
	var_106_float = 0;
	func_10443(var_106_float);
	@@var_87_object:AddMark("d6q02MladVladGotoBigVladSelf", "pt_map_mladvlad", (int)0, (int)515379, var_106_float);
	func_12104();
	func_12130();
	var_138_object = Obj(); var_139_string = "";
	func_10301(var_138_object, "quest_d6_02");
	var_146_bool = 0; var_147_string = ""; var_148_string = "";
	func_10431(var_146_bool, "quest_d6_02", "place_trigger");
	return 2;
}
EMIT "Stack[-1] = 0";


func_10509(var_149_bool)
{
	var_149_bool = 1;
	return 0;
}


func_12039()
{
	var_205_object = Obj(); var_206_object = Obj();
	CreateDiaryEntry(var_206_object, (int)137, (int)1, (int)515323);
	var_210_bool = 0; var_211_object = Obj(); var_212_int = 0;
	var_206_object = var_211_object;
	func_12234(var_210_bool, var_211_object, (int)20);
	return 2;
}
EMIT "Stack[-1] = 0";


func_10511(var_88_object)
{
	Trace("money 4000 is given");
	var_91_object = Obj(); var_92_int = 0;
	var_88_object = var_91_object;
	func_10335(var_91_object, (int)4000);
	return 0;
}


func_11540(var_650_bool)
{
	var_652_int = 0; var_653_string = "";
	func_10296(var_652_int, "d3q02");
	var_655_bool = var_652_int == (int)4;
	if(var_655_bool != 0) {
		var_650_bool = 1;
		return 0;
	}
	var_650_bool = 0;
	return 0;
}


func_12052()
{
	var_112_object = Obj(); var_113_object = Obj();
	CreateDiaryEntry(var_113_object, (int)21, (int)2, (int)503361);
	var_117_bool = 0; var_118_object = Obj(); var_119_int = 0;
	var_113_object = var_118_object;
	func_12234(var_117_bool, var_118_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6933(var_0_bool, var_1309_int, var_1310_object)
{
	var_1312_object = Obj(); var_1313_bool = 0; var_1314_int = 0; var_1315_bool = 0; var_1316_object = Obj(); var_1317_bool = 0; var_1318_int = 0; var_1319_bool = 0;
	var_0_bool = var_1310_object;
	var_1320_bool = 0; var_1321_object = Obj(); var_1322_float = 0;
	var_1310_object = var_1321_object;
	func_9973(var_1320_bool, var_1321_object, (float)70.0);
	var_1323_bool = var_1320_bool == 0; //@nz
	if(var_1323_bool != 0) {
		var_1309_int = -2;
		return 8;
	}
	CreateDialog(var_1316_object);
	var_1324_int = 0;
	func_10503(var_1324_int);
	@@var_1316_object:SetNPCName(var_1324_int);
	var_1325_int = 0;
	func_10501(var_1325_int);
	@@var_1316_object:SetNPCDescription(var_1325_int);
	var_1326_string = "";
	func_10505(var_1326_string);
	@@var_1316_object:SetPhoto(var_1326_string);
	var_1327_string = "";
	func_10507(var_1327_string);
	@@var_1316_object:SetPhoto2(var_1327_string);
	var_1328_int = 0;
	func_12312(var_1328_int);
	@@var_1316_object:SetPlayerName(var_1328_int);
	IsOverrideActive(var_1317_bool);
	var_1329_bool = var_1317_bool;
	if(var_1329_bool != 0) {
		var_1309_int = -2;
		return 8;
	}
	DoDialog(var_1316_object);
	var_1330_bool = 0; var_1331_object = Obj();
	func_10251(Obj());
	var_1332_object = var_1331_object;
	func_10060(var_1330_bool, var_1331_object);
	var_1333_object = Obj(); var_1334_object = Obj();
	var_1310_object = var_1333_object;
	var_1316_object = var_1334_object;
	TaskCall(21);
	func_7014(var_1335_object, var_1336_object, var_1337_string, var_1338_bool, var_1333_object, var_1334_object);
	TaskReturn();
	@@var_1316_object:IsDialogEnd(var_1319_bool);
	
Label_6996:
	var_1366_bool = var_1319_bool == 0; //@nz
	if(var_1366_bool != 0) {
		sync();
		@@var_1316_object:IsDialogEnd(var_1319_bool);
		goto Label_6996;
	}
	var_1310_object = Obj();
	func_10042();
	StopDialog(var_1316_object);
	@@var_1316_object:GetReturnValue((int)-1);
	var_1318_int = var_1309_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_10521(var_167_object)
{
	Trace("money20000 is given");
	var_170_object = Obj(); var_171_int = 0;
	var_167_object = var_170_object;
	func_10335(var_170_object, (int)20000);
	return 0;
}


func_282(var_0_bool, var_95_int, var_96_object)
{
	var_98_object = Obj(); var_99_bool = 0; var_100_int = 0; var_101_bool = 0; var_102_object = Obj(); var_103_bool = 0; var_104_int = 0; var_105_bool = 0;
	var_0_bool = var_96_object;
	var_106_bool = 0; var_107_object = Obj(); var_108_float = 0;
	var_96_object = var_107_object;
	func_9973(var_106_bool, var_107_object, (float)70.0);
	var_153_bool = var_106_bool == 0; //@nz
	if(var_153_bool != 0) {
		var_95_int = -2;
		return 8;
	}
	CreateDialog(var_102_object);
	var_154_int = 0;
	func_10503(var_154_int);
	@@var_102_object:SetNPCName(var_154_int);
	var_155_int = 0;
	func_10501(var_155_int);
	@@var_102_object:SetNPCDescription(var_155_int);
	var_156_string = "";
	func_10505(var_156_string);
	@@var_102_object:SetPhoto(var_156_string);
	var_157_string = "";
	func_10507(var_157_string);
	@@var_102_object:SetPhoto2(var_157_string);
	var_158_int = 0;
	func_12312(var_158_int);
	@@var_102_object:SetPlayerName(var_158_int);
	IsOverrideActive(var_103_bool);
	var_166_bool = var_103_bool;
	if(var_166_bool != 0) {
		var_95_int = -2;
		return 8;
	}
	DoDialog(var_102_object);
	var_167_bool = 0; var_168_object = Obj();
	func_10251(Obj());
	var_169_object = var_168_object;
	func_10060(var_167_bool, var_168_object);
	var_262_object = Obj(); var_263_object = Obj();
	var_96_object = var_262_object;
	var_102_object = var_263_object;
	TaskCall(5);
	func_363(var_264_object, var_265_object, var_266_string, var_267_bool, var_262_object, var_263_object);
	TaskReturn();
	@@var_102_object:IsDialogEnd(var_105_bool);
	
Label_345:
	var_316_bool = var_105_bool == 0; //@nz
	if(var_316_bool != 0) {
		sync();
		@@var_102_object:IsDialogEnd(var_105_bool);
		goto Label_345;
	}
	var_96_object = Obj();
	func_10042();
	StopDialog(var_102_object);
	@@var_102_object:GetReturnValue((int)-1);
	var_104_int = var_95_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7455(var_0_bool, var_1431_int, var_1432_object)
{
	var_1434_object = Obj(); var_1435_bool = 0; var_1436_int = 0; var_1437_bool = 0; var_1438_object = Obj(); var_1439_bool = 0; var_1440_int = 0; var_1441_bool = 0;
	var_0_bool = var_1432_object;
	var_1442_bool = 0; var_1443_object = Obj(); var_1444_float = 0;
	var_1432_object = var_1443_object;
	func_9973(var_1442_bool, var_1443_object, (float)70.0);
	var_1445_bool = var_1442_bool == 0; //@nz
	if(var_1445_bool != 0) {
		var_1431_int = -2;
		return 8;
	}
	CreateDialog(var_1438_object);
	var_1446_int = 0;
	func_10503(var_1446_int);
	@@var_1438_object:SetNPCName(var_1446_int);
	var_1447_int = 0;
	func_10501(var_1447_int);
	@@var_1438_object:SetNPCDescription(var_1447_int);
	var_1448_string = "";
	func_10505(var_1448_string);
	@@var_1438_object:SetPhoto(var_1448_string);
	var_1449_string = "";
	func_10507(var_1449_string);
	@@var_1438_object:SetPhoto2(var_1449_string);
	var_1450_int = 0;
	func_12312(var_1450_int);
	@@var_1438_object:SetPlayerName(var_1450_int);
	IsOverrideActive(var_1439_bool);
	var_1451_bool = var_1439_bool;
	if(var_1451_bool != 0) {
		var_1431_int = -2;
		return 8;
	}
	DoDialog(var_1438_object);
	var_1452_bool = 0; var_1453_object = Obj();
	func_10251(Obj());
	var_1454_object = var_1453_object;
	func_10060(var_1452_bool, var_1453_object);
	var_1455_object = Obj(); var_1456_object = Obj();
	var_1432_object = var_1455_object;
	var_1438_object = var_1456_object;
	TaskCall(25);
	func_7536(var_1457_object, var_1458_object, var_1459_string, var_1460_bool, var_1455_object, var_1456_object);
	TaskReturn();
	@@var_1438_object:IsDialogEnd(var_1441_bool);
	
Label_7518:
	var_1500_bool = var_1441_bool == 0; //@nz
	if(var_1500_bool != 0) {
		sync();
		@@var_1438_object:IsDialogEnd(var_1441_bool);
		goto Label_7518;
	}
	var_1432_object = Obj();
	func_10042();
	StopDialog(var_1438_object);
	@@var_1438_object:GetReturnValue((int)-1);
	var_1440_int = var_1431_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_11552(var_730_bool)
{
	var_732_int = 0; var_733_string = "";
	func_10296(var_732_int, "d4q01");
	var_735_bool = var_732_int == (int)2;
	if(var_735_bool != 0) {
		var_730_bool = 1;
		return 0;
	}
	var_730_bool = 0;
	return 0;
}


func_1313(var_2_object, var_593_string)
{
	var_594_bool = 0;
	func_10509(var_594_bool);
	var_595_bool = var_594_bool == 0; //@nz
	if(var_595_bool != 0) {
		return 0;
	}
	var_596_bool = var_593_string == var_2_object;
	if(var_596_bool != 0) {
		return 0;
	}
	var_597_string = ""; var_598_bool = 0;
	var_593_string = var_597_string;
	var_600_bool = var_593_string == "";
	if(var_600_bool != 0) {
		var_598_bool = 0;
	} else {
		var_598_bool = 1;
	}
	func_10214(var_597_string, var_598_bool);
	var_2_object = var_593_string;
	return 0;
	
}


func_2337(var_2_object, var_741_string)
{
	var_742_bool = 0;
	func_10509(var_742_bool);
	var_743_bool = var_742_bool == 0; //@nz
	if(var_743_bool != 0) {
		return 0;
	}
	var_744_bool = var_741_string == var_2_object;
	if(var_744_bool != 0) {
		return 0;
	}
	var_745_string = ""; var_746_bool = 0;
	var_741_string = var_745_string;
	var_748_bool = var_741_string == "";
	if(var_748_bool != 0) {
		var_746_bool = 0;
	} else {
		var_746_bool = 1;
	}
	func_10214(var_745_string, var_746_bool);
	var_2_object = var_741_string;
	return 0;
	
}


func_10531()
{
	var_126_int = 0; var_127_int = 0;
	func_10448((int)0);
	var_128_int = var_127_int;
	var_135_int = "RMap" + var_127_int;
	SetVariable(var_135_int, (int)1);
	return 2;
}


func_12065()
{
	var_135_object = Obj(); var_136_object = Obj();
	CreateDiaryEntry(var_136_object, (int)92, (int)2, (int)512174);
	var_140_bool = 0; var_141_object = Obj(); var_142_int = 0;
	var_136_object = var_141_object;
	func_12234(var_140_bool, var_141_object, (int)21);
	return 2;
}
EMIT "Stack[-1] = 0";


func_11564(var_764_bool)
{
	var_766_int = 0; var_767_string = "";
	func_10296(var_766_int, "ood4MladVlad1");
	var_769_bool = var_766_int == (int)0;
	if(var_769_bool != 0) {
		var_764_bool = 1;
		return 0;
	}
	var_764_bool = 0;
	return 0;
}


func_4909(var_0_bool, var_1_object, var_2_object, var_3_object, var_1142_object, var_1143_object)
{
	var_0_bool = var_1143_object;
	var_1_object = var_1142_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1149_bool = 0; var_1150_object = Obj();
		var_1150_object = var_1_object;
		func_11408(var_1150_object);
		if(var_1149_bool != 0) {
			var_1155_object = Obj(); var_1156_object = Obj();
			var_1155_object = var_1_object;
			var_1156_object = var_0_bool;
			func_10665();
			var_1159_object = Obj(); var_1160_object = Obj();
			var_1159_object = var_1_object;
			var_1160_object = var_0_bool;
			func_10694();
			var_1163_string = "";
			func_5162(var_1143_object, "Sly");
			@@@var_0_bool:SetMessage((int)533324);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)535993, (int)37724, (int)37723);
			@@@var_0_bool:AddReply((int)536001, (int)37724, (int)37731);
		} else {
				var_1186_string = "";
				func_5162(var_1143_object, "Neutral");
				@@@var_0_bool:SetMessage((int)512410);
				@@@var_0_bool:ClearReplies();
				var_1188_bool = 0;
				var_1188_bool = 0;
				var_1189_bool = 0;
				var_1189_bool = 0;
				var_1190_bool = 0; var_1191_object = Obj();
				var_1191_object = var_1_object;
				func_11768(var_1191_object);
				if(var_1190_bool != 0) {
					var_1196_bool = 0; var_1197_object = Obj();
					var_1197_object = var_1_object;
					func_11792(var_1197_object);
					if(var_1196_bool != 0) {
						var_1189_bool = 1;
					}
				}
				if(var_1189_bool != 0) {
					var_1202_bool = 0; var_1203_object = Obj();
					var_1203_object = var_1_object;
					func_11780(var_1203_object);
					var_1208_bool = var_1202_bool == 0; //@nz
					if(var_1208_bool != 0) {
						var_1188_bool = 1;
					}
				}
				if(var_1188_bool != 0) {
					@@@var_0_bool:AddReply((int)512412, (int)13577, (int)13576);
				}
				var_1212_bool = 0;
				var_1212_bool = 0;
				var_1213_bool = 0; var_1214_object = Obj();
				var_1214_object = var_1_object;
				func_11780(var_1214_object);
				if(var_1213_bool != 0) {
					var_1215_bool = 0; var_1216_object = Obj();
					var_1216_object = var_1_object;
					func_11804(var_1216_object);
					if(var_1215_bool != 0) {
						var_1212_bool = 1;
					}
				}
				if(var_1212_bool != 0) {
					@@@var_0_bool:AddReply((int)513588, (int)14840, (int)14839);
				}
				var_1224_bool = 0;
				var_1224_bool = 0;
				var_1225_bool = 0;
				var_1225_bool = 0;
				var_1226_bool = 0;
				var_1226_bool = 0;
				var_1227_bool = 0; var_1228_object = Obj();
				var_1228_object = var_1_object;
				func_11816(var_1228_object);
				if(var_1227_bool != 0) {
					var_1233_bool = 0; var_1234_object = Obj();
					var_1234_object = var_1_object;
					func_11780(var_1234_object);
					if(var_1233_bool != 0) {
						var_1226_bool = 1;
					}
				}
				if(var_1226_bool != 0) {
					var_1235_bool = 0; var_1236_object = Obj();
					var_1236_object = var_1_object;
					func_11828(var_1236_object);
					if(var_1235_bool != 0) {
						var_1225_bool = 1;
					}
				}
				if(var_1225_bool != 0) {
					var_1241_bool = 0; var_1242_object = Obj();
					var_1242_object = var_1_object;
					func_11864(var_1242_object);
					var_1247_bool = var_1241_bool == 0; //@nz
					if(var_1247_bool != 0) {
						var_1224_bool = 1;
					}
				}
				if(var_1224_bool != 0) {
					@@@var_0_bool:AddReply((int)513607, (int)14868, (int)14862);
				}
				var_1251_bool = 0;
				var_1251_bool = 0;
				var_1252_bool = 0;
				var_1252_bool = 0;
				var_1253_bool = 0; var_1254_object = Obj();
				var_1254_object = var_1_object;
				func_11816(var_1254_object);
				if(var_1253_bool != 0) {
					var_1255_bool = 0; var_1256_object = Obj();
					var_1256_object = var_1_object;
					func_11852(var_1256_object);
					if(var_1255_bool != 0) {
						var_1252_bool = 1;
					}
				}
				if(var_1252_bool != 0) {
					var_1261_bool = 0; var_1262_object = Obj();
					var_1262_object = var_1_object;
					func_11876(var_1262_object);
					var_1267_bool = var_1261_bool == 0; //@nz
					if(var_1267_bool != 0) {
						var_1251_bool = 1;
					}
				}
				if(var_1251_bool != 0) {
					@@@var_0_bool:AddReply((int)513618, (int)14874, (int)14873);
				}
				var_1271_bool = 0;
				var_1271_bool = 0;
				var_1272_bool = 0;
				var_1272_bool = 0;
				var_1273_bool = 0; var_1274_object = Obj();
				var_1274_object = var_1_object;
				func_11780(var_1274_object);
				var_1275_bool = var_1273_bool == 0; //@nz
				if(var_1275_bool != 0) {
					var_1276_bool = 0; var_1277_object = Obj();
					var_1277_object = var_1_object;
					func_11768(var_1277_object);
					if(var_1276_bool != 0) {
						var_1272_bool = 1;
					}
				}
				if(var_1272_bool != 0) {
					var_1278_bool = 0; var_1279_object = Obj();
					var_1279_object = var_1_object;
					func_11840(var_1279_object);
					if(var_1278_bool != 0) {
						var_1271_bool = 1;
					}
				}
				if(var_1271_bool != 0) {
					@@@var_0_bool:AddReply((int)513612, (int)14863, (int)14867);
				}
				var_1287_bool = 0; var_1288_object = Obj();
				var_1288_object = var_1_object;
				func_11922(var_1287_bool, var_1288_object);
				var_1289_bool = var_1287_bool == 0; //@nz
				if(var_1289_bool != 0) {
					@@@var_0_bool:AddReply((int)520922, (int)22140, (int)22139);
				}
				var_1293_bool = 0; var_1294_object = Obj();
				var_1294_object = var_1_object;
				func_11420(var_1294_object);
				if(var_1293_bool != 0) {
					@@@var_0_bool:AddReply((int)533337, (int)37749, (int)34841);
				}
				@@@var_0_bool:AddReply((int)512411, (int)-1, (int)13575);
				goto Label_5132;
		}
	}
Label_5132:
	var_1178_bool = 0;
	func_10509(var_1178_bool);
	if(var_1178_bool != 0) {

	Label_5136:
		lshWaitForAnimEnd();
		var_1179_object = var_3_object;
		if(var_1179_object != 0) {
		} else {
			var_1180_string = "";
			var_1180_string = var_2_object;
			func_10198(var_1180_string);
			goto Label_5136;
	}
		PlayAnimation("all", "idle");

	Label_5151:
		WaitForAnimEnd();
		var_1183_object = var_3_object;
		if(var_1183_object != 0) {
			goto Label_5161;
		}
		PlayAnimation("all", "idle");
		goto Label_5151;

	}
	goto Label_5161;
	
Label_5161:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1331";


func_10542(var_137_object)
{
	var_139_object = Obj(); var_140_int = 0;
	var_137_object = var_139_object;
	func_10335(var_139_object, (int)-1000);
	return 0;
}


func_12078()
{
	var_106_object = Obj(); var_107_object = Obj();
	CreateDiaryEntry(var_107_object, (int)154, (int)2, (int)515365);
	var_111_bool = 0; var_112_object = Obj(); var_113_int = 0;
	var_107_object = var_112_object;
	func_12234(var_111_bool, var_112_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_11056()
{
	SetVariable("ood6MladVlad1", (int)1);
	return 0;
}


func_3379(var_0_bool, var_1_object, var_2_object, var_3_object, var_828_object, var_829_object)
{
	var_0_bool = var_829_object;
	var_1_object = var_828_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_835_bool = 0;
		var_835_bool = 0;
		var_836_bool = 0;
		var_836_bool = 0;
		var_837_bool = 0; var_838_object = Obj();
		var_838_object = var_1_object;
		func_11732(var_838_object);
		if(var_837_bool != 0) {
			var_843_bool = 0; var_844_object = Obj();
			var_844_object = var_1_object;
			func_11672(var_844_object);
			var_849_bool = var_843_bool == 0; //@nz
			if(var_849_bool != 0) {
				var_836_bool = 1;
			}
		}
		if(var_836_bool != 0) {
			var_850_bool = 0; var_851_object = Obj();
			var_851_object = var_1_object;
			func_11684(var_851_object);
			var_856_bool = var_850_bool == 0; //@nz
			if(var_856_bool != 0) {
				var_835_bool = 1;
			}
		}
		if(var_835_bool != 0) {
			var_857_object = Obj(); var_858_object = Obj();
			var_857_object = var_1_object;
			var_858_object = var_0_bool;
			func_11111();
			var_861_string = "";
			func_3542(var_829_object, "Rage");
			@@@var_0_bool:SetMessage((int)511741);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511743, (int)12951, (int)12949);
			@@@var_0_bool:AddReply((int)511742, (int)12950, (int)12948);
			var_876_bool = 0; var_877_object = Obj();
			var_877_object = var_1_object;
			func_11660(var_877_object);
			var_882_bool = var_876_bool == 0; //@nz
			if(var_882_bool != 0) {
				@@@var_0_bool:AddReply((int)512586, (int)13766, (int)13753);
			}
		} else {
				var_894_string = "";
				func_3542(var_829_object, "Neutral");
				@@@var_0_bool:SetMessage((int)512573);
				@@@var_0_bool:ClearReplies();
				var_896_bool = 0;
				var_896_bool = 0;
				var_897_bool = 0; var_898_object = Obj();
				var_898_object = var_1_object;
				func_11696(var_898_object);
				if(var_897_bool != 0) {
					var_903_bool = 0; var_904_object = Obj();
					var_904_object = var_1_object;
					func_11708(var_904_object);
					if(var_903_bool != 0) {
						var_896_bool = 1;
					}
				}
				if(var_896_bool != 0) {
					@@@var_0_bool:AddReply((int)512574, (int)13744, (int)13743);
				}
				var_912_bool = 0;
				var_912_bool = 0;
				var_913_bool = 0; var_914_object = Obj();
				var_914_object = var_1_object;
				func_11672(var_914_object);
				if(var_913_bool != 0) {
					var_915_bool = 0; var_916_object = Obj();
					var_916_object = var_1_object;
					func_11720(var_916_object);
					if(var_915_bool != 0) {
						var_912_bool = 1;
					}
				}
				if(var_912_bool != 0) {
					@@@var_0_bool:AddReply((int)512577, (int)13747, (int)13746);
				}
				var_924_bool = 0; var_925_object = Obj();
				var_925_object = var_1_object;
				func_11922(var_924_bool, var_925_object);
				var_926_bool = var_924_bool == 0; //@nz
				if(var_926_bool != 0) {
					@@@var_0_bool:AddReply((int)520905, (int)22123, (int)22122);
				}
				@@@var_0_bool:AddReply((int)512580, (int)-1, (int)13749);
				goto Label_3512;
		}
	}
Label_3512:
	var_886_bool = 0;
	func_10509(var_886_bool);
	if(var_886_bool != 0) {

	Label_3516:
		lshWaitForAnimEnd();
		var_887_object = var_3_object;
		if(var_887_object != 0) {
		} else {
			var_888_string = "";
			var_888_string = var_2_object;
			func_10198(var_888_string);
			goto Label_3516;
	}
		PlayAnimation("all", "idle");

	Label_3531:
		WaitForAnimEnd();
		var_891_object = var_3_object;
		if(var_891_object != 0) {
			goto Label_3541;
		}
		PlayAnimation("all", "idle");
		goto Label_3531;

	}
	goto Label_3541;
	
Label_3541:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xd37";


func_10549()
{
	SetVariable("ood3MladVlad2", (int)1);
	return 0;
}


func_11062()
{
	SetVariable("ood6MladVlad2", (int)1);
	return 0;
}


func_11576(var_724_bool)
{
	var_726_int = 0; var_727_string = "";
	func_10296(var_726_int, "ood4MladVlad2");
	var_729_bool = var_726_int == (int)0;
	if(var_729_bool != 0) {
		var_724_bool = 1;
		return 0;
	}
	var_724_bool = 0;
	return 0;
}


func_10042()
{
	var_318_bool = 0; var_319_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_321_bool = 0;
	func_10509(var_321_bool);
	if(var_321_bool != 0) {
	} else {
		HasAnimationTrack(var_319_bool, "head");
		var_323_bool = var_319_bool;
		if(var_323_bool == 0) goto Label_10059;
		UnlookAsync("head");
	}
Label_10059:
	return 2;
	
}


func_10555(var_217_object)
{
	Trace("money2000 is given");
	var_220_object = Obj(); var_221_int = 0;
	var_217_object = var_220_object;
	func_10335(var_220_object, (int)2000);
	return 0;
}


func_11068()
{
	SetVariable("d6q02KnowAboutAttack", (int)1);
	return 0;
}


func_7997(var_0_bool, var_1_object, var_2_object, var_3_object, var_353_object, var_354_object)
{
	var_0_bool = var_354_object;
	var_1_object = var_353_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_360_bool = 0;
		var_360_bool = 0;
		var_361_bool = 0;
		var_361_bool = 0;
		var_362_bool = 0; var_363_object = Obj();
		var_363_object = var_1_object;
		func_11372(var_363_object);
		if(var_362_bool != 0) {
			var_370_bool = 0; var_371_object = Obj();
			var_371_object = var_1_object;
			func_11324(var_371_object);
			if(var_370_bool != 0) {
				var_361_bool = 1;
			}
		}
		if(var_361_bool != 0) {
			var_376_bool = 0; var_377_object = Obj();
			var_377_object = var_1_object;
			func_11888(var_377_object);
			if(var_376_bool != 0) {
				var_360_bool = 1;
			}
		}
		if(var_360_bool != 0) {
			var_392_object = Obj(); var_393_object = Obj();
			var_392_object = var_1_object;
			var_393_object = var_0_bool;
			func_10641();
			var_396_string = "";
			func_8176(var_354_object, "Untrust");
			@@@var_0_bool:SetMessage((int)532641);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)532642, (int)34105, (int)34104);
			@@@var_0_bool:AddReply((int)532687, (int)34161, (int)34160);
		} else {
				var_419_string = "";
				func_8176(var_354_object, "Neutral");
				@@@var_0_bool:SetMessage((int)531953);
				@@@var_0_bool:ClearReplies();
				var_421_bool = 0;
				var_421_bool = 0;
				var_422_bool = 0; var_423_object = Obj();
				var_423_object = var_1_object;
				func_11384(var_423_object);
				if(var_422_bool != 0) {
					var_428_bool = 0; var_429_object = Obj();
					var_429_object = var_1_object;
					func_11888(var_429_object);
					if(var_428_bool != 0) {
						var_421_bool = 1;
					}
				}
				if(var_421_bool != 0) {
					@@@var_0_bool:AddReply((int)532702, (int)34178, (int)34177);
				}
				var_433_bool = 0; var_434_object = Obj();
				var_434_object = var_1_object;
				func_11360(var_434_object);
				if(var_433_bool != 0) {
					@@@var_0_bool:AddReply((int)531954, (int)33359, (int)33358);
				}
				var_442_bool = 0;
				var_442_bool = 0;
				var_443_bool = 0; var_444_object = Obj();
				var_444_object = var_1_object;
				func_11324(var_444_object);
				if(var_443_bool != 0) {
					var_445_bool = 0; var_446_object = Obj();
					var_446_object = var_1_object;
					func_11372(var_446_object);
					var_447_bool = var_445_bool == 0; //@nz
					if(var_447_bool != 0) {
						var_442_bool = 1;
					}
				}
				if(var_442_bool != 0) {
					@@@var_0_bool:AddReply((int)532699, (int)34175, (int)34174);
				}
				var_451_bool = 0;
				var_451_bool = 0;
				var_452_bool = 0;
				var_452_bool = 0;
				var_453_bool = 0; var_454_object = Obj();
				var_454_object = var_1_object;
				func_11348(var_454_object);
				var_459_bool = var_453_bool == 0; //@nz
				if(var_459_bool != 0) {
					var_460_bool = 0; var_461_object = Obj();
					var_461_object = var_1_object;
					func_11396(var_461_object);
					if(var_460_bool != 0) {
						var_452_bool = 1;
					}
				}
				if(var_452_bool != 0) {
					var_466_bool = 0; var_467_object = Obj();
					var_467_object = var_1_object;
					func_11336(var_467_object);
					if(var_466_bool != 0) {
						var_451_bool = 1;
					}
				}
				if(var_451_bool != 0) {
					@@@var_0_bool:AddReply((int)532691, (int)34166, (int)34165);
				}
				@@@var_0_bool:AddReply((int)531960, (int)-1, (int)33364);
				goto Label_8146;
		}
	}
Label_8146:
	var_411_bool = 0;
	func_10509(var_411_bool);
	if(var_411_bool != 0) {

	Label_8150:
		lshWaitForAnimEnd();
		var_412_object = var_3_object;
		if(var_412_object != 0) {
		} else {
			var_413_string = "";
			var_413_string = var_2_object;
			func_10198(var_413_string);
			goto Label_8150;
	}
		PlayAnimation("all", "idle");

	Label_8165:
		WaitForAnimEnd();
		var_416_object = var_3_object;
		if(var_416_object != 0) {
			goto Label_8175;
		}
		PlayAnimation("all", "idle");
		goto Label_8165;

	}
	goto Label_8175;
	
Label_8175:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1f41";


func_12091()
{
	var_129_object = Obj(); var_130_object = Obj();
	CreateDiaryEntry(var_130_object, (int)155, (int)2, (int)515366);
	var_134_bool = 0; var_135_object = Obj(); var_136_int = 0;
	var_130_object = var_135_object;
	func_12234(var_134_bool, var_135_object, (int)154);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9531(var_0_bool, var_1560_int, var_1561_object)
{
	var_1563_object = Obj(); var_1564_bool = 0; var_1565_int = 0; var_1566_bool = 0; var_1567_object = Obj(); var_1568_bool = 0; var_1569_int = 0; var_1570_bool = 0;
	var_0_bool = var_1561_object;
	var_1571_bool = 0; var_1572_object = Obj(); var_1573_float = 0;
	var_1561_object = var_1572_object;
	func_9973(var_1571_bool, var_1572_object, (float)70.0);
	var_1574_bool = var_1571_bool == 0; //@nz
	if(var_1574_bool != 0) {
		var_1560_int = -2;
		return 8;
	}
	CreateDialog(var_1567_object);
	var_1575_int = 0;
	func_10503(var_1575_int);
	@@var_1567_object:SetNPCName(var_1575_int);
	var_1576_int = 0;
	func_10501(var_1576_int);
	@@var_1567_object:SetNPCDescription(var_1576_int);
	var_1577_string = "";
	func_10505(var_1577_string);
	@@var_1567_object:SetPhoto(var_1577_string);
	var_1578_string = "";
	func_10507(var_1578_string);
	@@var_1567_object:SetPhoto2(var_1578_string);
	var_1579_int = 0;
	func_12312(var_1579_int);
	@@var_1567_object:SetPlayerName(var_1579_int);
	IsOverrideActive(var_1568_bool);
	var_1580_bool = var_1568_bool;
	if(var_1580_bool != 0) {
		var_1560_int = -2;
		return 8;
	}
	DoDialog(var_1567_object);
	var_1581_bool = 0; var_1582_object = Obj();
	func_10251(Obj());
	var_1583_object = var_1582_object;
	func_10060(var_1581_bool, var_1582_object);
	var_1584_object = Obj(); var_1585_object = Obj();
	var_1561_object = var_1584_object;
	var_1567_object = var_1585_object;
	TaskCall(31);
	func_9612(var_1586_object, var_1587_object, var_1588_string, var_1589_bool, var_1584_object, var_1585_object);
	TaskReturn();
	@@var_1567_object:IsDialogEnd(var_1570_bool);
	
Label_9594:
	var_1614_bool = var_1570_bool == 0; //@nz
	if(var_1614_bool != 0) {
		sync();
		@@var_1567_object:IsDialogEnd(var_1570_bool);
		goto Label_9594;
	}
	var_1561_object = Obj();
	func_10042();
	StopDialog(var_1567_object);
	@@var_1567_object:GetReturnValue((int)-1);
	var_1569_int = var_1560_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_11074()
{
	SetVariable("ood6MladVlad3", (int)1);
	return 0;
}


func_11588(var_782_bool)
{
	var_784_int = 0; var_785_string = "";
	func_10296(var_784_int, "d4q02");
	var_787_bool = var_784_int == (int)1000;
	if(var_787_bool != 0) {
		var_782_bool = 1;
		return 0;
	}
	var_782_bool = 0;
	return 0;
}


func_10565()
{
	var_82_object = Obj(); var_83_object = Obj();
	SetVariable("d1q03IsKapella", (int)0);
	func_12262(Obj());
	var_86_object = var_83_object;
	var_97_float = 0;
	func_10443(var_97_float);
	@@var_83_object:AddMark("d1q03MladVladGotoOspina", "pt_map_ospina", (int)0, (int)508642, var_97_float);
	func_11987();
	func_12000();
	var_131_object = Obj(); var_132_string = "";
	func_10301(var_131_object, "quest_d1_03");
	return 2;
}
EMIT "Stack[-1] = 0";


func_11080()
{
	func_12143();
	var_248_bool = 0; var_249_string = ""; var_250_string = "";
	func_10431(var_248_bool, "quest_d6_03", "failed");
	return 0;
}


func_12104()
{
	var_107_object = Obj(); var_108_object = Obj();
	CreateDiaryEntry(var_108_object, (int)102, (int)2, (int)513725);
	var_112_bool = 0; var_113_object = Obj(); var_114_int = 0;
	var_108_object = var_113_object;
	func_12234(var_112_bool, var_113_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_10060(var_167_bool, var_168_object)
{
	var_172_int = 0; var_173_int = 0; var_174_int = 0; var_175_int = 0;
	GetVariable("voice_common", var_174_int);
	var_177_int = var_174_int;
	if(var_177_int != 0) {
		var_178_bool = 0; var_179_object = Obj();
		var_168_object = var_179_object;
		func_10118(var_178_bool, var_179_object);
		var_208_bool = var_178_bool == 0; //@nz
		if(var_208_bool != 0) {
			var_209_bool = 0; var_210_object = Obj();
			var_168_object = var_210_object;
			func_10155(var_209_bool, var_210_object);
			var_244_bool = var_209_bool == 0; //@nz
			if(var_244_bool != 0) {
				var_167_bool = 0;
				return 4;
			}
		}
		irand(var_175_int, (int)2);
		var_246_int = var_175_int;
		if(var_246_int != 0) {
			var_249_int = var_174_int + (int)1;
			var_251_int = var_249_int % (int)3;
			SetVariable("voice_common", var_251_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_254_bool = 0; var_255_object = Obj();
		var_168_object = var_255_object;
		func_10155(var_254_bool, var_255_object);
		var_256_bool = var_254_bool == 0; //@nz
		if(var_256_bool != 0) {
			var_257_bool = 0; var_258_object = Obj();
			var_168_object = var_258_object;
			func_10118(var_257_bool, var_258_object);
			var_259_bool = var_257_bool == 0; //@nz
			if(var_259_bool != 0) {
				var_167_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_10116;
	
Label_10116:
	var_167_bool = 1;
	return 4;
	
}


func_11600(var_776_bool)
{
	var_778_int = 0; var_779_string = "";
	func_10296(var_778_int, "ood4MladVlad3");
	var_781_bool = var_778_int == (int)0;
	if(var_781_bool != 0) {
		var_776_bool = 1;
		return 0;
	}
	var_776_bool = 0;
	return 0;
}


func_11090(var_196_object)
{
	var_198_bool = 0; var_199_object = Obj(); var_200_float = 0;
	var_196_object = var_199_object;
	func_10386(var_198_bool, var_199_object, (float)0.30000001192092896);
	return 0;
}


func_12117()
{
	var_193_object = Obj(); var_194_object = Obj();
	CreateDiaryEntry(var_194_object, (int)104, (int)2, (int)513727);
	var_198_bool = 0; var_199_object = Obj(); var_200_int = 0;
	var_194_object = var_199_object;
	func_12234(var_198_bool, var_199_object, (int)102);
	return 2;
}
EMIT "Stack[-1] = 0";


func_11097()
{
	SetVariable("ood5MladVlad1", (int)1);
	return 0;
}


func_11612(var_999_bool)
{
	var_1001_int = 0; var_1002_string = "";
	func_10296(var_1001_int, "d6q02");
	var_1004_bool = var_1001_int == (int)0;
	if(var_1004_bool != 0) {
		var_999_bool = 1;
		return 0;
	}
	var_999_bool = 0;
	return 0;
}


func_11103()
{
	SetVariable("ood5MladVlad2", (int)1);
	return 0;
}


func_12130()
{
	var_130_object = Obj(); var_131_object = Obj();
	CreateDiaryEntry(var_131_object, (int)106, (int)2, (int)513729);
	var_135_bool = 0; var_136_object = Obj(); var_137_int = 0;
	var_131_object = var_136_object;
	func_12234(var_135_bool, var_136_object, (int)102);
	return 2;
}
EMIT "Stack[-1] = 0";


func_10595(var_201_object)
{
	Trace("money10000 is given");
	var_204_object = Obj(); var_205_int = 0;
	var_201_object = var_204_object;
	func_10335(var_204_object, (int)10000);
	return 0;
}


func_11109()
{
	return 0;
}


func_7014(var_0_bool, var_1_object, var_2_object, var_3_object, var_1333_object, var_1334_object)
{
	var_0_bool = var_1334_object;
	var_1_object = var_1333_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1340_string = "";
		func_7078(var_1334_object, "Neutral");
		@@@var_0_bool:SetMessage((int)520927);
		@@@var_0_bool:ClearReplies();
		var_1349_bool = 0; var_1350_object = Obj();
		var_1350_object = var_1_object;
		func_11922(var_1349_bool, var_1350_object);
		var_1351_bool = var_1349_bool == 0; //@nz
		if(var_1351_bool != 0) {
			@@@var_0_bool:AddReply((int)520928, (int)22146, (int)22145);
		}
		@@@var_0_bool:AddReply((int)520932, (int)-1, (int)22149);
		goto Label_7048;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1b6a";
	}
Label_7048:
	var_1358_bool = 0;
	func_10509(var_1358_bool);
	if(var_1358_bool != 0) {

	Label_7052:
		lshWaitForAnimEnd();
		var_1359_object = var_3_object;
		if(var_1359_object != 0) {
		} else {
			var_1360_string = "";
			var_1360_string = var_2_object;
			func_10198(var_1360_string);
			goto Label_7052;
	}
		PlayAnimation("all", "idle");

	Label_7067:
		WaitForAnimEnd();
		var_1363_object = var_3_object;
		if(var_1363_object != 0) {
			goto Label_7077;
		}
		PlayAnimation("all", "idle");
		goto Label_7067;
	}
	goto Label_7077;
	
Label_7077:
	return 0;
	
}


func_11111()
{
	SetVariable("ood5MladVlad3", (int)1);
	return 0;
}


func_11624(var_968_bool)
{
	var_970_int = 0; var_971_string = "";
	func_10296(var_970_int, "ood6MladVlad1");
	var_973_bool = var_970_int == (int)0;
	if(var_973_bool != 0) {
		var_968_bool = 1;
		return 0;
	}
	var_968_bool = 0;
	return 0;
}


func_363(var_0_bool, var_1_object, var_2_object, var_3_object, var_262_object, var_263_object)
{
	var_0_bool = var_263_object;
	var_1_object = var_262_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_269_object = Obj(); var_270_object = Obj();
		var_269_object = var_1_object;
		var_270_object = var_0_bool;
		func_11245();
		var_273_object = Obj(); var_274_object = Obj();
		var_273_object = var_1_object;
		var_274_object = var_0_bool;
		func_10765();
		var_277_string = "";
		func_426(var_263_object, "Neutral");
		@@@var_0_bool:SetMessage((int)500416);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)533500, (int)35031, (int)35030);
		goto Label_396;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x16f";
	}
Label_396:
	var_298_bool = 0;
	func_10509(var_298_bool);
	if(var_298_bool != 0) {

	Label_400:
		lshWaitForAnimEnd();
		var_299_object = var_3_object;
		if(var_299_object != 0) {
		} else {
			var_300_string = "";
			var_300_string = var_2_object;
			func_10198(var_300_string);
			goto Label_400;
	}
		PlayAnimation("all", "idle");

	Label_415:
		WaitForAnimEnd();
		var_313_object = var_3_object;
		if(var_313_object != 0) {
			goto Label_425;
		}
		PlayAnimation("all", "idle");
		goto Label_415;
	}
	goto Label_425;
	
Label_425:
	return 0;
	
}


func_10605()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_11117()
{
	var_180_object = Obj(); var_181_object = Obj(); var_182_object = Obj(); var_183_object = Obj();
	func_12262(Obj());
	var_184_object = var_182_object;
	@@var_182_object:FindMark(var_183_object, "d6q02BigVlad");
	var_186_object = var_183_object;
	if(var_186_object != 0) {
		@@var_183_object:Remove();
	}
	@@var_182_object:FindMark(var_183_object, "d6q02KapellaGotoMladVlad");
	var_188_object = var_183_object;
	if(var_188_object != 0) {
		@@var_183_object:Remove();
	}
	@@var_182_object:FindMark(var_183_object, "d6q02MladVladGotoBigVlad");
	var_190_object = var_183_object;
	if(var_190_object != 0) {
		@@var_183_object:Remove();
	}
	@@var_182_object:FindMark(var_183_object, "d6q02MladVladGotoBigVladSelf");
	var_192_object = var_183_object;
	if(var_192_object != 0) {
		@@var_183_object:Remove();
	}
	func_12117();
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_12143()
{
	var_240_object = Obj(); var_241_object = Obj();
	CreateDiaryEntry(var_241_object, (int)110, (int)2, (int)513733);
	var_245_bool = 0; var_246_object = Obj(); var_247_int = 0;
	var_241_object = var_246_object;
	func_12234(var_245_bool, var_246_object, (int)107);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7536(var_0_bool, var_1_object, var_2_object, var_3_object, var_1455_object, var_1456_object)
{
	var_0_bool = var_1456_object;
	var_1_object = var_1455_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1462_string = "";
		func_7615(var_1456_object, "Neutral");
		@@@var_0_bool:SetMessage((int)520941);
		@@@var_0_bool:ClearReplies();
		var_1471_bool = 0; var_1472_object = Obj();
		var_1472_object = var_1_object;
		func_11432(var_1472_object);
		if(var_1471_bool != 0) {
			@@@var_0_bool:AddReply((int)534490, (int)38444, (int)36135);
		}
		var_1480_bool = 0; var_1481_object = Obj();
		var_1481_object = var_1_object;
		func_11922(var_1480_bool, var_1481_object);
		var_1482_bool = var_1480_bool == 0; //@nz
		if(var_1482_bool != 0) {
			@@@var_0_bool:AddReply((int)520942, (int)22160, (int)22159);
		}
		@@@var_0_bool:AddReply((int)520946, (int)-1, (int)22163);
		@@@var_0_bool:AddReply((int)536616, (int)-1, (int)38443);
		goto Label_7585;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1d74";
	}
Label_7585:
	var_1492_bool = 0;
	func_10509(var_1492_bool);
	if(var_1492_bool != 0) {

	Label_7589:
		lshWaitForAnimEnd();
		var_1493_object = var_3_object;
		if(var_1493_object != 0) {
		} else {
			var_1494_string = "";
			var_1494_string = var_2_object;
			func_10198(var_1494_string);
			goto Label_7589;
	}
		PlayAnimation("all", "idle");

	Label_7604:
		WaitForAnimEnd();
		var_1497_object = var_3_object;
		if(var_1497_object != 0) {
			goto Label_7614;
		}
		PlayAnimation("all", "idle");
		goto Label_7604;
	}
	goto Label_7614;
	
Label_7614:
	return 0;
	
}


func_10611(var_249_object)
{
	var_250_object = Obj(); var_251_string = ""; var_252_float = 0;
	func_12262(Obj());
	var_253_object = var_250_object;
	func_12279(var_250_object, "pt_map_mat", (float)2);
	var_254_object = Obj();
	func_12262(var_254_object);
	@@var_249_object:ShowMap(var_254_object);
	return 0;
}


func_11636(var_1009_bool)
{
	var_1011_int = 0; var_1012_string = "";
	func_10296(var_1011_int, "ood6MladVlad2");
	var_1014_bool = var_1011_int == (int)0;
	if(var_1014_bool != 0) {
		var_1009_bool = 1;
		return 0;
	}
	var_1009_bool = 0;
	return 0;
}


func_12156()
{
	var_230_object = Obj(); var_231_object = Obj();
	CreateDiaryEntry(var_231_object, (int)718, (int)1, (int)538759);
	var_235_bool = 0; var_236_object = Obj(); var_237_int = 0;
	var_231_object = var_236_object;
	func_12234(var_235_bool, var_236_object, (int)175);
	return 2;
}
EMIT "Stack[-1] = 0";


func_11648(var_1026_bool)
{
	var_1028_int = 0; var_1029_string = "";
	func_10296(var_1028_int, "ood6MladVlad3");
	var_1031_bool = var_1028_int == (int)0;
	if(var_1031_bool != 0) {
		var_1026_bool = 1;
		return 0;
	}
	var_1026_bool = 0;
	return 0;
}


func_10627()
{
	SetVariable("d1q01", (int)7);
	func_11974();
	var_185_bool = 0; var_186_string = ""; var_187_string = "";
	func_10431(var_185_bool, "quest_d1_01", "place_rubin");
	return 0;
}


func_10118(var_178_bool, var_179_object)
{
	var_180_string = ""; var_181_int = 0; var_182_bool = 0; var_183_int = 0; var_184_string = ""; var_185_string = ""; var_186_int = 0; var_187_bool = 0; var_188_int = 0; var_189_string = "";
	var_185_string = "c";
	var_186_int = 0;
	
Label_10121:
	if((int)1 != 0) {
		var_192_int = var_186_int + (int)1;
		var_193_int = var_185_string + var_192_int;
		@@var_179_object:HasProperty(var_193_int, var_187_bool);
		var_194_bool = var_187_bool == 0; //@nz
		if(var_194_bool != 0) {
		} else {
			var_186_int = var_186_int + (int)1;
			goto Label_10121;
		}
	}
	var_195_bool = var_186_int == 0; //@nz
	if(var_195_bool != 0) {
		var_178_bool = 0;
		return 10;
	}
	var_188_int = 0;
	var_197_bool = var_186_int > (int)1;
	if(var_197_bool != 0) {
		irand(var_188_int, var_186_int);
	}
	var_199_int = var_188_int + (int)1;
	var_200_int = var_185_string + var_199_int;
	@@var_179_object:GetProperty(var_200_int, var_189_string);
	var_201_bool = 0; var_202_string = "";
	var_189_string = var_202_string;
	func_10229(var_201_bool, var_202_string);
	var_201_bool = var_178_bool;
	return 10;
	
}


func_12169()
{
	var_151_object = Obj(); var_152_object = Obj();
	CreateDiaryEntry(var_152_object, (int)177, (int)1, (int)515436);
	var_156_bool = 0; var_157_object = Obj(); var_158_int = 0;
	var_152_object = var_157_object;
	func_12234(var_156_bool, var_157_object, (int)175);
	return 2;
}
EMIT "Stack[-1] = 0";


func_11660(var_876_bool)
{
	var_878_int = 0; var_879_string = "";
	func_10296(var_878_int, "d5q03");
	var_881_bool = var_878_int == (int)0;
	if(var_881_bool != 0) {
		var_876_bool = 1;
		return 0;
	}
	var_876_bool = 0;
	return 0;
}


func_9612(var_0_bool, var_1_object, var_2_object, var_3_object, var_1584_object, var_1585_object)
{
	var_0_bool = var_1585_object;
	var_1_object = var_1584_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1591_string = "";
		func_9670(var_1585_object, "Neutral");
		@@@var_0_bool:SetMessage((int)540542);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)540543, (int)-1, (int)42552);
		@@@var_0_bool:AddReply((int)540796, (int)-1, (int)42845);
		goto Label_9640;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2590";
	}
Label_9640:
	var_1606_bool = 0;
	func_10509(var_1606_bool);
	if(var_1606_bool != 0) {

	Label_9644:
		lshWaitForAnimEnd();
		var_1607_object = var_3_object;
		if(var_1607_object != 0) {
		} else {
			var_1608_string = "";
			var_1608_string = var_2_object;
			func_10198(var_1608_string);
			goto Label_9644;
	}
		PlayAnimation("all", "idle");

	Label_9659:
		WaitForAnimEnd();
		var_1611_object = var_3_object;
		if(var_1611_object != 0) {
			goto Label_9669;
		}
		PlayAnimation("all", "idle");
		goto Label_9659;
	}
	goto Label_9669;
	
Label_9669:
	return 0;
	
}


func_10641()
{
	SetVariable("ood1MladVlad1", (int)1);
	return 0;
}


func_11156()
{
	SetVariable("ood8MladVlad1", (int)1);
	return 0;
}


func_12182()
{
	var_84_object = Obj(); var_85_object = Obj();
	CreateDiaryEntry(var_85_object, (int)649, (int)2, (int)533362);
	var_89_bool = 0; var_90_object = Obj(); var_91_int = 0;
	var_85_object = var_90_object;
	func_12234(var_89_bool, var_90_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_10647()
{
	SetVariable("ood1MladVlad2", (int)1);
	return 0;
}


func_11672(var_843_bool)
{
	var_845_int = 0; var_846_string = "";
	func_10296(var_845_int, "d5q03");
	var_848_bool = var_845_int == (int)1000;
	if(var_848_bool != 0) {
		var_843_bool = 1;
		return 0;
	}
	var_843_bool = 0;
	return 0;
}


func_11162()
{
	SetVariable("ood8MladVlad2", (int)1);
	return 0;
}


func_10653()
{
	SetVariable("ood1MladVlad3", (int)1);
	return 0;
}


func_11168()
{
	var_211_object = Obj(); var_212_object = Obj();
	var_213_bool = 0;
	var_213_bool = 0;
	var_214_int = 0; var_215_string = "";
	func_10296(var_214_int, "d8q01BringBadBoy");
	var_219_bool = var_214_int != (int)1;
	if(var_219_bool != 0) {
		var_220_int = 0; var_221_string = "";
		func_10296(var_220_int, "d8q01MatBringToy");
		var_223_bool = var_220_int != (int)1;
		if(var_223_bool != 0) {
			var_213_bool = 1;
		}
	}
	if(var_213_bool != 0) {
		func_12262(Obj());
		var_224_object = var_212_object;
		var_229_float = 0;
		func_10443(var_229_float);
		@@var_212_object:AddMark("d8q01MladVladGotoMat", "pt_map_mat", (int)1, (int)515327, var_229_float);
		func_12156();
		var_212_object = 0;
	}
	return 2;
}


func_10659()
{
	SetVariable("d4MladVladVisit", (int)1);
	return 0;
}


func_11684(var_850_bool)
{
	var_852_int = 0; var_853_string = "";
	func_10296(var_852_int, "d5q03");
	var_855_bool = var_852_int == (int)-1;
	if(var_855_bool != 0) {
		var_850_bool = 1;
		return 0;
	}
	var_850_bool = 0;
	return 0;
}


func_12195()
{
	var_348_object = Obj(); var_349_object = Obj();
	CreateDiaryEntry(var_349_object, (int)652, (int)2, (int)533365);
	var_353_bool = 0; var_354_object = Obj(); var_355_int = 0;
	var_349_object = var_354_object;
	func_12234(var_353_bool, var_354_object, (int)649);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7078(var_2_object, var_1340_string)
{
	var_1341_bool = 0;
	func_10509(var_1341_bool);
	var_1342_bool = var_1341_bool == 0; //@nz
	if(var_1342_bool != 0) {
		return 0;
	}
	var_1343_bool = var_1340_string == var_2_object;
	if(var_1343_bool != 0) {
		return 0;
	}
	var_1344_string = ""; var_1345_bool = 0;
	var_1340_string = var_1344_string;
	var_1347_bool = var_1340_string == "";
	if(var_1347_bool != 0) {
		var_1345_bool = 0;
	} else {
		var_1345_bool = 1;
	}
	func_10214(var_1344_string, var_1345_bool);
	var_2_object = var_1340_string;
	return 0;
	
}


func_10665()
{
	SetVariable("ood8MladVlad6", (int)1);
	return 0;
}


func_426(var_2_object, var_277_string)
{
	var_278_bool = 0;
	func_10509(var_278_bool);
	var_279_bool = var_278_bool == 0; //@nz
	if(var_279_bool != 0) {
		return 0;
	}
	var_280_bool = var_277_string == var_2_object;
	if(var_280_bool != 0) {
		return 0;
	}
	var_281_string = ""; var_282_bool = 0;
	var_277_string = var_281_string;
	var_284_bool = var_277_string == "";
	if(var_284_bool != 0) {
		var_282_bool = 0;
	} else {
		var_282_bool = 1;
	}
	func_10214(var_281_string, var_282_bool);
	var_2_object = var_277_string;
	return 0;
	
}


func_10155(var_209_bool, var_210_object)
{
	var_211_string = ""; var_212_int = 0; var_213_bool = 0; var_214_int = 0; var_215_string = ""; var_216_string = ""; var_217_int = 0; var_218_bool = 0; var_219_int = 0; var_220_string = "";
	var_222_int = 0;
	func_10448(var_222_int);
	var_228_int = "d" + var_222_int;
	var_216_string = var_228_int + "m";
	var_217_int = 0;
	
Label_10164:
	if((int)1 != 0) {
		var_232_int = var_217_int + (int)1;
		var_233_int = var_216_string + var_232_int;
		@@var_210_object:HasProperty(var_233_int, var_218_bool);
		var_234_bool = var_218_bool == 0; //@nz
		if(var_234_bool != 0) {
		} else {
			var_217_int = var_217_int + (int)1;
			goto Label_10164;
		}
	}
	var_235_bool = var_217_int == 0; //@nz
	if(var_235_bool != 0) {
		var_209_bool = 0;
		return 10;
	}
	var_219_int = 0;
	var_237_bool = var_217_int > (int)1;
	if(var_237_bool != 0) {
		irand(var_219_int, var_217_int);
	}
	var_239_int = var_219_int + (int)1;
	var_240_int = var_216_string + var_239_int;
	@@var_210_object:GetProperty(var_240_int, var_220_string);
	var_241_bool = 0; var_242_string = "";
	var_220_string = var_242_string;
	func_10229(var_241_bool, var_242_string);
	var_241_bool = var_209_bool;
	return 10;
	
}


func_10671()
{
	var_338_object = Obj(); var_339_object = Obj();
	SetVariable("d8q04", (int)3);
	func_12262(Obj());
	var_342_object = var_339_object;
	var_347_float = 0;
	func_10443(var_347_float);
	@@var_339_object:AddMark("d8q04MladVladGotoMark", "pt_map_theater", (int)0, (int)515322, var_347_float);
	func_12195();
	return 2;
}
EMIT "Stack[-1] = 0";


func_11696(var_897_bool)
{
	var_899_int = 0; var_900_string = "";
	func_10296(var_899_int, "d5q03");
	var_902_bool = var_899_int == (int)2;
	if(var_902_bool != 0) {
		var_897_bool = 1;
		return 0;
	}
	var_897_bool = 0;
	return 0;
}


func_12208()
{
	var_107_object = Obj(); var_108_object = Obj();
	CreateDiaryEntry(var_108_object, (int)650, (int)2, (int)533363);
	var_112_bool = 0; var_113_object = Obj(); var_114_int = 0;
	var_108_object = var_113_object;
	func_12234(var_112_bool, var_113_object, (int)649);
	return 2;
}
EMIT "Stack[-1] = 0";


func_11708(var_903_bool)
{
	var_905_int = 0; var_906_string = "";
	func_10296(var_905_int, "ood5MladVlad1");
	var_908_bool = var_905_int == (int)0;
	if(var_908_bool != 0) {
		var_903_bool = 1;
		return 0;
	}
	var_903_bool = 0;
	return 0;
}


func_12221(var_114_object)
{
	var_115_object = Obj(); var_116_object = Obj();
	GetDiaryRoot(var_116_object);
	var_117_bool = var_116_object == 0; //@nz
	if(var_117_bool != 0) {
		Trace("Can't retrieve diary root");
		var_114_object = 0;
		return 2;
	}
	var_116_object = var_114_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_7615(var_2_object, var_1462_string)
{
	var_1463_bool = 0;
	func_10509(var_1463_bool);
	var_1464_bool = var_1463_bool == 0; //@nz
	if(var_1464_bool != 0) {
		return 0;
	}
	var_1465_bool = var_1462_string == var_2_object;
	if(var_1465_bool != 0) {
		return 0;
	}
	var_1466_string = ""; var_1467_bool = 0;
	var_1462_string = var_1466_string;
	var_1469_bool = var_1462_string == "";
	if(var_1469_bool != 0) {
		var_1467_bool = 0;
	} else {
		var_1467_bool = 1;
	}
	func_10214(var_1466_string, var_1467_bool);
	var_2_object = var_1462_string;
	return 0;
	
}


func_11205()
{
	SetVariable("ood8MladVlad3", (int)1);
	return 0;
}


func_10694()
{
	SetVariable("d8MladVladVisit", (int)1);
	return 0;
}


func_9670(var_2_object, var_1591_string)
{
	var_1592_bool = 0;
	func_10509(var_1592_bool);
	var_1593_bool = var_1592_bool == 0; //@nz
	if(var_1593_bool != 0) {
		return 0;
	}
	var_1594_bool = var_1591_string == var_2_object;
	if(var_1594_bool != 0) {
		return 0;
	}
	var_1595_string = ""; var_1596_bool = 0;
	var_1591_string = var_1595_string;
	var_1598_bool = var_1591_string == "";
	if(var_1598_bool != 0) {
		var_1596_bool = 0;
	} else {
		var_1596_bool = 1;
	}
	func_10214(var_1595_string, var_1596_bool);
	var_2_object = var_1591_string;
	return 0;
	
}


func_11720(var_915_bool)
{
	var_917_int = 0; var_918_string = "";
	func_10296(var_917_int, "ood5MladVlad2");
	var_920_bool = var_917_int == (int)0;
	if(var_920_bool != 0) {
		var_915_bool = 1;
		return 0;
	}
	var_915_bool = 0;
	return 0;
}


func_12234(var_105_bool, var_106_object, var_107_int)
{
	var_108_object = Obj(); var_109_object = Obj(); var_110_int = 0; var_111_object = Obj(); var_112_object = Obj(); var_113_int = 0;
	func_12221(Obj());
	var_114_object = var_111_object;
	@@var_111_object:Find(var_107_int, var_112_object);
	var_119_bool = var_112_object == 0; //@nz
	if(var_119_bool != 0) {
		var_121_int = "Can't find diary parent with id: " + var_107_int;
		Trace(var_121_int);
		var_105_bool = 0;
		return 6;
	}
	@@var_112_object:AddChild(var_106_object);
	SendWorldWndMessage((int)7);
	@@var_106_object:GetCategory(var_113_int);
	SetDiarySection(var_113_int);
	var_105_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_11211()
{
	SetVariable("d8q01MladVladIsVictim", (int)1);
	return 0;
}


func_10700(var_166_object)
{
	var_167_object = Obj(); var_168_string = ""; var_169_float = 0;
	func_12262(Obj());
	var_170_object = var_167_object;
	func_12279(var_167_object, "pt_gmap_r7_house2_01", (float)2);
	var_190_object = Obj();
	func_12262(var_190_object);
	@@var_166_object:ShowMap(var_190_object);
	return 0;
}


func_11217()
{
	SetVariable("ood8MladVlad4", (int)1);
	return 0;
}


func_11732(var_837_bool)
{
	var_839_int = 0; var_840_string = "";
	func_10296(var_839_int, "ood5MladVlad3");
	var_842_bool = var_839_int == (int)0;
	if(var_842_bool != 0) {
		var_837_bool = 1;
		return 0;
	}
	var_837_bool = 0;
	return 0;
}


func_10198(var_300_string)
{
	var_301_bool = 0; var_302_float = 0; var_303_float = 0; var_304_bool = 0; var_305_float = 0; var_306_float = 0;
	lshHasAnimation(var_304_bool, var_300_string);
	var_307_bool = var_304_bool;
	if(var_307_bool != 0) {
		lshGetAnimTimes(var_300_string, var_305_float, var_306_float);
		lshPlayAnimation(var_305_float, var_306_float, (bool)0);
	} else {
		var_310_int = "Can't find lsh animation : " + var_300_string;
		Trace(var_310_int);
	}
	return 6;
	
}


func_3542(var_2_object, var_861_string)
{
	var_862_bool = 0;
	func_10509(var_862_bool);
	var_863_bool = var_862_bool == 0; //@nz
	if(var_863_bool != 0) {
		return 0;
	}
	var_864_bool = var_861_string == var_2_object;
	if(var_864_bool != 0) {
		return 0;
	}
	var_865_string = ""; var_866_bool = 0;
	var_861_string = var_865_string;
	var_868_bool = var_861_string == "";
	if(var_868_bool != 0) {
		var_866_bool = 0;
	} else {
		var_866_bool = 1;
	}
	func_10214(var_865_string, var_866_bool);
	var_2_object = var_861_string;
	return 0;
	
}


func_11223()
{
	SetVariable("ood8MladVlad5", (int)1);
	return 0;
}


func_10716()
{
	func_11961();
	var_105_bool = 0; var_106_string = ""; var_107_string = "";
	func_10431(var_105_bool, "quest_d11_05", "place_enemy_after");
	var_111_bool = 0; var_112_string = ""; var_113_string = "";
	func_10431(var_111_bool, "quest_d11_05", "completed");
	return 0;
}


func_11229()
{
	SetVariable("d8q04", (int)1);
	func_12182();
	func_12208();
	var_115_object = Obj(); var_116_string = "";
	func_10301(var_115_object, "quest_d8_04");
	return 0;
}


func_4061(var_0_bool, var_937_int, var_938_object)
{
	var_940_object = Obj(); var_941_bool = 0; var_942_int = 0; var_943_bool = 0; var_944_object = Obj(); var_945_bool = 0; var_946_int = 0; var_947_bool = 0;
	var_0_bool = var_938_object;
	var_948_bool = 0; var_949_object = Obj(); var_950_float = 0;
	var_938_object = var_949_object;
	func_9973(var_948_bool, var_949_object, (float)70.0);
	var_951_bool = var_948_bool == 0; //@nz
	if(var_951_bool != 0) {
		var_937_int = -2;
		return 8;
	}
	CreateDialog(var_944_object);
	var_952_int = 0;
	func_10503(var_952_int);
	@@var_944_object:SetNPCName(var_952_int);
	var_953_int = 0;
	func_10501(var_953_int);
	@@var_944_object:SetNPCDescription(var_953_int);
	var_954_string = "";
	func_10505(var_954_string);
	@@var_944_object:SetPhoto(var_954_string);
	var_955_string = "";
	func_10507(var_955_string);
	@@var_944_object:SetPhoto2(var_955_string);
	var_956_int = 0;
	func_12312(var_956_int);
	@@var_944_object:SetPlayerName(var_956_int);
	IsOverrideActive(var_945_bool);
	var_957_bool = var_945_bool;
	if(var_957_bool != 0) {
		var_937_int = -2;
		return 8;
	}
	DoDialog(var_944_object);
	var_958_bool = 0; var_959_object = Obj();
	func_10251(Obj());
	var_960_object = var_959_object;
	func_10060(var_958_bool, var_959_object);
	var_961_object = Obj(); var_962_object = Obj();
	var_938_object = var_961_object;
	var_944_object = var_962_object;
	TaskCall(15);
	func_4142(var_963_object, var_964_object, var_965_string, var_966_bool, var_961_object, var_962_object);
	TaskReturn();
	@@var_944_object:IsDialogEnd(var_947_bool);
	
Label_4124:
	var_1053_bool = var_947_bool == 0; //@nz
	if(var_1053_bool != 0) {
		sync();
		@@var_944_object:IsDialogEnd(var_947_bool);
		goto Label_4124;
	}
	var_938_object = Obj();
	func_10042();
	StopDialog(var_944_object);
	@@var_944_object:GetReturnValue((int)-1);
	var_946_int = var_937_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_11744(var_1015_bool)
{
	var_1017_int = 0; var_1018_string = "";
	func_10296(var_1017_int, "d6q02GorbunDeath");
	var_1020_bool = var_1017_int != (int)0;
	if(var_1020_bool != 0) {
		var_1015_bool = 1;
		return 0;
	}
	var_1015_bool = 0;
	return 0;
}


func_10214(var_281_string, var_282_bool)
{
	var_285_bool = 0; var_286_float = 0; var_287_float = 0; var_288_bool = 0; var_289_float = 0; var_290_float = 0;
	lshHasAnimation(var_288_bool, var_281_string);
	var_291_bool = var_288_bool;
	if(var_291_bool != 0) {
		lshGetAnimTimes(var_281_string, var_289_float, var_290_float);
		lshPlayAnimation(var_289_float, var_290_float, var_282_bool);
	} else {
		var_293_int = "Can't find lsh animation : " + var_281_string;
		Trace(var_293_int);
	}
	return 6;
	
}


func_12262(var_86_object)
{
	var_87_object = Obj(); var_88_object = Obj(); var_89_object = Obj(); var_90_object = Obj();
	GetMainOutdoorScene(var_89_object);
	var_91_bool = var_89_object == 0; //@ne
	if(var_91_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_90_object = 0;
		var_90_object = var_86_object;
		return 4;
	}
	@@var_89_object:GetMap(var_90_object);
	var_90_object = var_86_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_10731()
{
	SetVariable("ood3MladVlad3", (int)1);
	return 0;
}


func_11756(var_1032_bool)
{
	var_1034_int = 0; var_1035_string = "";
	func_10296(var_1034_int, "d6q02Trigger");
	var_1037_bool = var_1034_int != (int)0;
	if(var_1037_bool != 0) {
		var_1032_bool = 1;
		return 0;
	}
	var_1032_bool = 0;
	return 0;
}


func_11245()
{
	SetVariable("KnowMladVlad", (int)1);
	return 0;
}


func_8176(var_2_object, var_396_string)
{
	var_397_bool = 0;
	func_10509(var_397_bool);
	var_398_bool = var_397_bool == 0; //@nz
	if(var_398_bool != 0) {
		return 0;
	}
	var_399_bool = var_396_string == var_2_object;
	if(var_399_bool != 0) {
		return 0;
	}
	var_400_string = ""; var_401_bool = 0;
	var_396_string = var_400_string;
	var_403_bool = var_396_string == "";
	if(var_403_bool != 0) {
		var_401_bool = 0;
	} else {
		var_401_bool = 1;
	}
	func_10214(var_400_string, var_401_bool);
	var_2_object = var_396_string;
	return 0;
	
}


func_10737()
{
	var_240_int = 0; var_241_string = "";
	func_10296(var_240_int, "map_chertez_state");
	var_243_bool = var_240_int <= (int)2;
	if(var_243_bool != 0) {
		SetVariable("map_chertez_state", (int)2);
		SetVariable("map_chertez_force", (int)1);
	}
	return 0;
}


func_11251()
{
	var_82_object = Obj(); var_83_object = Obj();
	var_84_int = 0; var_85_string = "";
	func_10296(var_84_int, "d5q03");
	var_89_bool = var_84_int == (int)0;
	if(var_89_bool != 0) {
		SetVariable("d5q03", (int)1);
		func_12262(Obj());
		var_92_object = var_83_object;
		var_103_float = 0;
		func_10443(var_103_float);
		@@var_83_object:AddMark("d5q03SavePrisoners", "pt_map_uprava_prison", (int)0, (int)515370, var_103_float);
		func_12078();
		func_12091();
		var_137_object = Obj(); var_138_string = "";
		func_10301(var_137_object, "quest_d5_03");
		var_145_bool = 0; var_146_string = ""; var_147_string = "";
		func_10431(var_145_bool, "quest_d5_03", "place_prisoners");
		var_83_object = 0;
	}
	return 2;
}


func_10229(var_201_bool, var_202_string)
{
	var_203_bool = 0; var_204_bool = 0;
	var_205_bool = 0;
	func_10509(var_205_bool);
	if(var_205_bool != 0) {
		lshHasSpeech(var_204_bool, var_202_string);
		var_206_bool = var_204_bool;
		if(var_206_bool != 0) {
			lshPlaySpeech(var_202_string);
			var_201_bool = 1;
			return 2;
		}
	}
	var_201_bool = 0;
	return 2;
}


func_12279(var_141_object, var_142_string, var_143_float)
{
	var_145_cvector = CVector(0,0,0); var_146_cvector = CVector(0,0,0); var_147_object = Obj(); var_148_bool = 0; var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_object = Obj(); var_152_bool = 0;
	GetMainOutdoorScene(var_151_object);
	var_153_bool = var_151_object == 0; //@ne
	if(var_153_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_151_object:GetLocator(var_142_string, var_152_bool, var_149_cvector, var_150_cvector);
	var_155_bool = var_152_bool == 0; //@nz
	if(var_155_bool != 0) {
		var_157_int = "Warning: outdoor scene locator " + var_142_string;
		var_159_int = var_157_int + " doesnt exist";
		Trace(var_159_int);
	}
	@@var_151_object:GetMap(var_141_object);
	var_160_bool = var_141_object == 0; //@ne
	if(var_160_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_162_float = GetByIndex(var_149_cvector, 0);
	var_163_float = GetByIndex(var_149_cvector, 2);
	@@var_141_object:SetMapParams(var_162_float, var_163_float, var_143_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_11768(var_1190_bool)
{
	var_1192_int = 0; var_1193_string = "";
	func_10296(var_1192_int, "d8q01");
	var_1195_bool = var_1192_int == (int)1;
	if(var_1195_bool != 0) {
		var_1190_bool = 1;
		return 0;
	}
	var_1190_bool = 0;
	return 0;
}


func_9210(var_0_bool, var_1504_int, var_1505_object)
{
	var_1507_object = Obj(); var_1508_bool = 0; var_1509_int = 0; var_1510_bool = 0; var_1511_object = Obj(); var_1512_bool = 0; var_1513_int = 0; var_1514_bool = 0;
	var_0_bool = var_1505_object;
	var_1515_bool = 0; var_1516_object = Obj(); var_1517_float = 0;
	var_1505_object = var_1516_object;
	func_9973(var_1515_bool, var_1516_object, (float)70.0);
	var_1518_bool = var_1515_bool == 0; //@nz
	if(var_1518_bool != 0) {
		var_1504_int = -2;
		return 8;
	}
	CreateDialog(var_1511_object);
	var_1519_int = 0;
	func_10503(var_1519_int);
	@@var_1511_object:SetNPCName(var_1519_int);
	var_1520_int = 0;
	func_10501(var_1520_int);
	@@var_1511_object:SetNPCDescription(var_1520_int);
	var_1521_string = "";
	func_10505(var_1521_string);
	@@var_1511_object:SetPhoto(var_1521_string);
	var_1522_string = "";
	func_10507(var_1522_string);
	@@var_1511_object:SetPhoto2(var_1522_string);
	var_1523_int = 0;
	func_12312(var_1523_int);
	@@var_1511_object:SetPlayerName(var_1523_int);
	IsOverrideActive(var_1512_bool);
	var_1524_bool = var_1512_bool;
	if(var_1524_bool != 0) {
		var_1504_int = -2;
		return 8;
	}
	DoDialog(var_1511_object);
	var_1525_bool = 0; var_1526_object = Obj();
	func_10251(Obj());
	var_1527_object = var_1526_object;
	func_10060(var_1525_bool, var_1526_object);
	var_1528_object = Obj(); var_1529_object = Obj();
	var_1505_object = var_1528_object;
	var_1511_object = var_1529_object;
	TaskCall(29);
	func_9291(var_1530_object, var_1531_object, var_1532_string, var_1533_bool, var_1528_object, var_1529_object);
	TaskReturn();
	@@var_1511_object:IsDialogEnd(var_1514_bool);
	
Label_9273:
	var_1558_bool = var_1514_bool == 0; //@nz
	if(var_1558_bool != 0) {
		sync();
		@@var_1511_object:IsDialogEnd(var_1514_bool);
		goto Label_9273;
	}
	var_1505_object = Obj();
	func_10042();
	StopDialog(var_1511_object);
	@@var_1511_object:GetReturnValue((int)-1);
	var_1513_int = var_1504_int;
	return 8;
}
EMIT "Stack[-4] = 0";


