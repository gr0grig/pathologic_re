// @IMPORTS: Hold/0,StopGroup0/0,DoTrade/0,lshWaitForAnimEnd/0,lshStopAnimation/0,StopTrade/0,WaitForAnimEnd/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,PlayAnimation/2,StopAnimation/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,FindActor/2,GetInvItemProperty/3,CreateInvItem/1,GetGameTime/1,lshWaitForAnimEnd/1,SetVariable/2,TriggerWorld/2,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1,ClearSubContainer/1,AddItem/4,irand/2,GetInvItemByName/2,CreateDiaryEntry/4
// @STRINGS: W:Neutral|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Suspense|A:GetProperty|A:SetProperty|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:Door |W: not found|W:locked|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:No|W:ui/NPC_Grif.png|W:ood1Grif1|W:ood1Grif2|W:ood1Grif3|W:KnowEpidemic|W:ood1GrifMQ1|W:warehouse_rubin@door1|W:money10000 is given|W:money|W:playsound|W:givemoney|W:giveitem|W:ood2Grif1|W:ood2Grif2|W:ood2Grif3|W:ood2Grif4|W:d2q02|W:Revolver is given|W:Revolver|W:durability|W:revolver ammo2 is given|W:revolver_ammo|W:KnowBurahDead|W:ood1Grif4|W:ood1Grif5|W:ood1Grif6|W:ood1Grif7|W:ood1Grif8|W:ood1Grif9|W:ood1Grif10|W:d1q01GrifAboutRubin|W:pt_map_rubin|A:AddMark|A:ShowMap|W:ood4Grif1|W:d4q03|W:d4q03GrifGotoAlexandr|W:pt_map_alexandr|W:d4q03GrifGotoAlexandrSelf|W:pt_map_grif|W:ood4Grif2|W:ood5Grif1|W:d5q01ThiefsWillHelp|W:d5q01PlayCutscene|W:d5q01GrifWillHelp|A:SetReturnValue|W:KnowGrif|W:ood2Grif5|W:ood12Grif1|W:d5q01GrifWantsMoney|W:money 40000 removed|W:d1q01|W:d1q01FirstGeorgVisit|W:KnowRubin|W:d4q03_alldead|W:d5q01|W:KnowBigVlad|W:KnowNotkin|W:KnowSpi4ka|W:KnowStamatins|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:Rifle|W:lockpick|W:Scalpel|W:Knife|W:rifle_ammo|W:tvirin|W:kerosene|W:halfboot_repel|W:boot_army|W:balahon|W:glove_army|W:player|W:Adding diary entry
// @GLOBALS: 0:object:,1:bool:,2:int:
// @RUN_OP: 0x1c
// @RUN_TASK: 2
// @TASK_0: vars= params=0
// @EVENT_5: op=0x3 vars=
// @TASK_1: vars=bool params=1
// @EVENT_11: op=0x15 vars=int
// @TASK_2: vars= params=0
// @EVENT_6: op=0x33 vars=
// @EVENT_0: op=0x39 vars=object
// @EVENT_10: op=0x3f vars=object
// @TASK_3: vars=object params=2
// @TASK_4: vars=object,object,string,bool params=2
// @EVENT_11: op=0xda vars=int,int
// @TASK_5: vars=object params=2
// @TASK_6: vars=object,object,string,bool params=2
// @EVENT_11: op=0x2cf vars=int,int
// @TASK_7: vars=object params=2
// @TASK_8: vars=object,object,string,bool params=2
// @EVENT_11: op=0x7a3 vars=int,int
// @TASK_9: vars=object params=2
// @TASK_10: vars=object,object,string,bool params=2
// @EVENT_11: op=0x99a vars=int,int
// @TASK_11: vars=object params=2
// @TASK_12: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc87 vars=int,int
// @TASK_13: vars=object params=2
// @TASK_14: vars=object,object,string,bool params=2
// @EVENT_11: op=0xf88 vars=int,int
// @TASK_15: vars=object params=2
// @TASK_16: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1125 vars=int,int
// @TASK_17: vars=object params=2
// @TASK_18: vars=object,object,string,bool params=2
// @EVENT_11: op=0x135b vars=int,int
// @TASK_19: vars=object params=2
// @TASK_20: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1416 vars=int,int
// @TASK_21: vars=object params=2
// @TASK_22: vars=object,object,string,bool params=2
// @EVENT_11: op=0x14d1 vars=int,int
// @TASK_23: vars=object params=2
// @TASK_24: vars=object,object,string,bool params=2
// @EVENT_11: op=0x158c vars=int,int
// @TASK_25: vars=object params=2
// @TASK_26: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1647 vars=int,int
// @TASK_27: vars=object params=2
// @TASK_28: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1702 vars=int,int
// @TASK_29: vars=object params=2
// @TASK_30: vars=object,object,string,bool params=2
// @EVENT_11: op=0x17c2 vars=int,int
// @PE: 0x6,0x15,0x39,0x3f,0x86,0xca,0xda,0x1a9,0x2bf,0x2cf,0x72a,0x793,0x7a3,0x906,0x98a,0x99a,0xbea,0xc77,0xc87,0xf2a,0xf78,0xf88,0x1097,0x1115,0x1125,0x1311,0x134b,0x135b,0x13cc,0x1406,0x1416,0x1487,0x14c1,0x14d1,0x1542,0x157c,0x158c,0x15fd,0x1637,0x1647,0x16b8,0x16f2,0x1702,0x1773,0x17b2,0x17c2,0x18b2,0x18e6,0x1952,0x1967,0x196d,0x1973,0x1979,0x197f,0x1985,0x198c,0x1997,0x199d,0x19a3,0x19a9,0x19af,0x19b5,0x19bb,0x19d9,0x19e4,0x19ea,0x19f0,0x19f6,0x19fc,0x1a02,0x1a08,0x1a0e,0x1a24,0x1a34,0x1a5a,0x1a60,0x1a81,0x1a86,0x1a8c,0x1a92,0x1ab9,0x1ac5,0x1ad1,0x1add,0x1ae9,0x1af5,0x1b01,0x1b0d,0x1b19,0x1b25,0x1b31,0x1b3d,0x1b49,0x1b55,0x1b5f,0x1b6b,0x1b77,0x1b83,0x1b8f,0x1b9b,0x1ba7,0x1bb3,0x1bbf,0x1bcb,0x1bd5,0x1be1,0x1bed,0x1bf9,0x1c05,0x1c0f,0x1c1b,0x1c27,0x1c31,0x1c3d,0x1c49,0x1c55,0x1c61,0x1c6d,0x1c79,0x1c85,0x1c88,0x1c93,0x1df7,0x1e0a

task_0_event_5(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_object, var_67_object, var_68_object, var_69_string, var_70_bool)
{
	StopGroup0();
	return 0;
}


task_1_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool)
{
	lshStopAnimation();
	StopTrade();
	var_0_bool = true;
	return 0;
}


task_2_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_object, var_67_object, var_68_object, var_69_string, var_70_bool)
{
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_2_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool)
{
	var_72_object = Obj();
	var_71_bool = var_72_object;
	func_7690(var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_object);
	return 0;
}


task_2_event_10(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool)
{
	var_72_bool = 0; var_73_object = Obj();
	var_71_bool = var_73_object;
	func_6249(var_72_bool, var_73_object);
	WaitForAnimEnd();
	return 0;
}


task_4_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool)
{
	if((int)1 != 0) {
		func_6396();
		var_76_bool = var_71_string == (int)444;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_bool;
			func_6790();
			var_81_string = "";
			func_202(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)383);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)384, (int)448, (int)445);
			@@@var_0_bool:AddReply((int)385, (int)449, (int)446);
			@@@var_0_bool:AddReply((int)386, (int)450, (int)447);
			return 0;
		}
		var_107_bool = var_71_string == (int)450;
		if(var_107_bool != 0) {
			var_108_string = "";
			func_202(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)389);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)395, (int)454, (int)459);
			@@@var_0_bool:AddReply((int)396, (int)454, (int)460);
			return 0;
		}
		var_117_bool = var_71_string == (int)449;
		if(var_117_bool != 0) {
			var_118_string = "";
			func_202(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)388);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)394, (int)454, (int)456);
			@@@var_0_bool:AddReply((int)392, (int)454, (int)453);
			return 0;
		}
		var_127_bool = var_71_string == (int)448;
		if(var_127_bool != 0) {
			var_128_string = "";
			func_202(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)387);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)390, (int)454, (int)451);
			@@@var_0_bool:AddReply((int)391, (int)454, (int)452);
			return 0;
		}
		var_137_bool = var_71_string == (int)454;
		if(var_137_bool != 0) {
			var_138_string = "";
			func_202(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)393);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)397, (int)-1, (int)463);
			@@@var_0_bool:AddReply((int)398, (int)-1, (int)464);
			return 0;
		}
		var_3_object = true;
		var_146_bool = 0;
		func_6501(var_146_bool);
		if(var_146_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xdb";
	
}


task_6_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool)
{
	if((int)1 != 0) {
		func_6396();
		var_76_bool = var_72_bool == (int)5837;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_bool;
			func_6503();
		}
		var_82_bool = var_72_bool == (int)5838;
		if(var_82_bool != 0) {
			var_83_object = Obj(); var_84_object = Obj();
			var_83_object = var_1_object;
			var_84_object = var_0_bool;
			func_6503();
		}
		var_86_bool = var_72_bool == (int)5839;
		if(var_86_bool != 0) {
			var_87_object = Obj(); var_88_object = Obj();
			var_87_object = var_1_object;
			var_88_object = var_0_bool;
			func_6503();
		}
		var_90_bool = var_72_bool == (int)5840;
		if(var_90_bool != 0) {
			var_91_object = Obj(); var_92_object = Obj();
			var_91_object = var_1_object;
			var_92_object = var_0_bool;
			func_6503();
		}
		var_94_bool = var_72_bool == (int)5843;
		if(var_94_bool != 0) {
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_object;
			var_96_object = var_0_bool;
			func_6503();
		}
		var_98_bool = var_72_bool == (int)5812;
		if(var_98_bool != 0) {
			var_99_object = Obj(); var_100_object = Obj();
			var_99_object = var_1_object;
			var_100_object = var_0_bool;
			func_6509();
		}
		var_104_bool = var_72_bool == (int)5813;
		if(var_104_bool != 0) {
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_bool;
			func_6509();
		}
		var_108_bool = var_72_bool == (int)8508;
		if(var_108_bool != 0) {
			var_109_object = Obj(); var_110_object = Obj();
			var_109_object = var_1_object;
			var_110_object = var_0_bool;
			func_6515();
		}
		var_114_bool = var_72_bool == (int)8507;
		if(var_114_bool != 0) {
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_bool;
			func_6515();
		}
		var_118_bool = var_72_bool == (int)8516;
		if(var_118_bool != 0) {
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_bool;
			func_6634();
		}
		var_124_bool = var_72_bool == (int)8526;
		if(var_124_bool != 0) {
			var_125_object = Obj(); var_126_object = Obj();
			var_125_object = var_1_object;
			var_126_object = var_0_bool;
			func_6640();
		}
		var_130_bool = var_72_bool == (int)8525;
		if(var_130_bool != 0) {
			var_131_object = Obj(); var_132_object = Obj();
			var_131_object = var_1_object;
			var_132_object = var_0_bool;
			func_6640();
		}
		var_134_bool = var_72_bool == (int)8530;
		if(var_134_bool != 0) {
			var_135_object = Obj(); var_136_object = Obj();
			var_135_object = var_1_object;
			var_136_object = var_0_bool;
			func_6646();
		}
		var_140_bool = var_72_bool == (int)8531;
		if(var_140_bool != 0) {
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_bool;
			func_6646();
		}
		var_144_bool = var_72_bool == (int)8534;
		if(var_144_bool != 0) {
			var_145_object = Obj(); var_146_object = Obj();
			var_145_object = var_1_object;
			var_146_object = var_0_bool;
			func_6652();
		}
		var_150_bool = var_72_bool == (int)8535;
		if(var_150_bool != 0) {
			var_151_object = Obj(); var_152_object = Obj();
			var_151_object = var_1_object;
			var_152_object = var_0_bool;
			func_6652();
		}
		var_154_bool = var_72_bool == (int)8543;
		if(var_154_bool != 0) {
			var_155_object = Obj(); var_156_object = Obj();
			var_155_object = var_1_object;
			var_156_object = var_0_bool;
			func_6664();
		}
		var_160_bool = var_72_bool == (int)8542;
		if(var_160_bool != 0) {
			var_161_object = Obj(); var_162_object = Obj();
			var_161_object = var_1_object;
			var_162_object = var_0_bool;
			func_6664();
		}
		var_164_bool = var_72_bool == (int)5823;
		if(var_164_bool != 0) {
			var_165_object = Obj(); var_166_object = Obj();
			var_165_object = var_1_object;
			var_166_object = var_0_bool;
			func_6658();
			var_169_object = Obj(); var_170_object = Obj();
			var_169_object = var_1_object;
			var_170_object = var_0_bool;
			func_6670();
		}
		var_174_bool = var_72_bool == (int)15328;
		if(var_174_bool != 0) {
			var_175_object = Obj(); var_176_object = Obj();
			var_175_object = var_1_object;
			var_176_object = var_0_bool;
			func_6785(var_176_object);
		}
		var_179_bool = var_71_string == (int)5830;
		if(var_179_bool != 0) {
			var_180_bool = 0; var_181_object = Obj();
			var_181_object = var_1_object;
			func_6841(var_181_object);
			if(var_180_bool != 0) {
				var_188_string = "";
				func_703(var_72_bool, "Neutral");
				@@@var_0_bool:SetMessage((int)5289);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)5290, (int)5832, (int)5831);
				@@@var_0_bool:AddReply((int)5300, (int)5836, (int)5841);
				@@@var_0_bool:AddReply((int)5301, (int)-1, (int)5843);
				return 0;
			}
			var_213_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7666);
			@@@var_0_bool:ClearReplies();
			var_215_bool = 0;
			var_215_bool = 0;
			var_216_bool = 0; var_217_object = Obj();
			var_217_object = var_1_object;
			func_6853(var_217_object);
			if(var_216_bool != 0) {
				var_222_bool = 0; var_223_object = Obj();
				var_223_object = var_1_object;
				func_6925(var_223_object);
				if(var_222_bool != 0) {
					var_215_bool = 1;
				}
			}
			if(var_215_bool != 0) {
				@@@var_0_bool:AddReply((int)7667, (int)8496, (int)8462);
			}
			var_231_bool = 0;
			var_231_bool = 1;
			var_232_bool = 0;
			var_232_bool = 0;
			var_233_bool = 0; var_234_object = Obj();
			var_234_object = var_1_object;
			func_7115(var_233_bool, var_234_object);
			if(var_233_bool != 0) {
				var_244_bool = 0; var_245_object = Obj();
				var_245_object = var_1_object;
				func_6865(var_245_object);
				if(var_244_bool != 0) {
					var_232_bool = 1;
				}
			}
			if(var_232_bool != 1) {
				var_250_bool = 0;
				var_250_bool = 0;
				var_251_bool = 0; var_252_object = Obj();
				var_252_object = var_1_object;
				func_7173(var_251_bool, var_252_object);
				if(var_251_bool != 0) {
					var_262_bool = 0; var_263_object = Obj();
					var_263_object = var_1_object;
					func_6865(var_263_object);
					if(var_262_bool != 0) {
						var_250_bool = 1;
					}
				}
				if(var_250_bool != 1) {
					var_231_bool = 0;
				}
			}
			if(var_231_bool != 0) {
				@@@var_0_bool:AddReply((int)7668, (int)8504, (int)8463);
			}
			var_267_bool = 0;
			var_267_bool = 0;
			var_268_bool = 0; var_269_object = Obj();
			var_269_object = var_1_object;
			func_7229(var_269_object);
			if(var_268_bool != 0) {
				var_274_bool = 0; var_275_object = Obj();
				var_275_object = var_1_object;
				func_7019(var_275_object);
				if(var_274_bool != 0) {
					var_267_bool = 1;
				}
			}
			if(var_267_bool != 0) {
				@@@var_0_bool:AddReply((int)7681, (int)8498, (int)8476);
			}
			var_283_bool = 0;
			var_283_bool = 0;
			var_284_bool = 0; var_285_object = Obj();
			var_285_object = var_1_object;
			func_7289(var_285_object);
			if(var_284_bool != 0) {
				var_290_bool = 0; var_291_object = Obj();
				var_291_object = var_1_object;
				func_7031(var_291_object);
				if(var_290_bool != 0) {
					var_283_bool = 1;
				}
			}
			if(var_283_bool != 0) {
				@@@var_0_bool:AddReply((int)7686, (int)8499, (int)8481);
			}
			var_299_bool = 0;
			var_299_bool = 0;
			var_300_bool = 0; var_301_object = Obj();
			var_301_object = var_1_object;
			func_7103(var_301_object);
			if(var_300_bool != 0) {
				var_306_bool = 0; var_307_object = Obj();
				var_307_object = var_1_object;
				func_7043(var_307_object);
				if(var_306_bool != 0) {
					var_299_bool = 1;
				}
			}
			if(var_299_bool != 0) {
				@@@var_0_bool:AddReply((int)7687, (int)8500, (int)8482);
			}
			var_315_bool = 0;
			var_315_bool = 0;
			var_316_bool = 0; var_317_object = Obj();
			var_317_object = var_1_object;
			func_7277(var_317_object);
			if(var_316_bool != 0) {
				var_322_bool = 0; var_323_object = Obj();
				var_323_object = var_1_object;
				func_7055(var_323_object);
				if(var_322_bool != 0) {
					var_315_bool = 1;
				}
			}
			if(var_315_bool != 0) {
				@@@var_0_bool:AddReply((int)7691, (int)8501, (int)8486);
			}
			var_331_bool = 0;
			var_331_bool = 0;
			var_332_bool = 0; var_333_object = Obj();
			var_333_object = var_1_object;
			func_7253(var_333_object);
			if(var_332_bool != 0) {
				var_338_bool = 0; var_339_object = Obj();
				var_339_object = var_1_object;
				func_7079(var_339_object);
				if(var_338_bool != 0) {
					var_331_bool = 1;
				}
			}
			if(var_331_bool != 0) {
				@@@var_0_bool:AddReply((int)7692, (int)8502, (int)8487);
			}
			var_347_bool = 0;
			var_347_bool = 0;
			var_348_bool = 0; var_349_object = Obj();
			var_349_object = var_1_object;
			func_7007(var_349_object);
			var_354_bool = var_348_bool == 0; //@nz
			if(var_354_bool != 0) {
				var_355_bool = 0; var_356_object = Obj();
				var_356_object = var_1_object;
				func_7067(var_356_object);
				if(var_355_bool != 0) {
					var_347_bool = 1;
				}
			}
			if(var_347_bool != 0) {
				@@@var_0_bool:AddReply((int)7693, (int)5818, (int)8488);
			}
			var_364_bool = 0;
			var_364_bool = 0;
			var_365_bool = 0; var_366_object = Obj();
			var_366_object = var_1_object;
			func_7007(var_366_object);
			if(var_365_bool != 0) {
				var_367_bool = 0; var_368_object = Obj();
				var_368_object = var_1_object;
				func_7091(var_368_object);
				if(var_367_bool != 0) {
					var_364_bool = 1;
				}
			}
			if(var_364_bool != 0) {
				@@@var_0_bool:AddReply((int)7694, (int)8491, (int)8489);
			}
			@@@var_0_bool:AddReply((int)14114, (int)-1, (int)15328);
			@@@var_0_bool:AddReply((int)8702, (int)-1, (int)9539);
			return 0;
		}
		var_383_bool = var_71_string == (int)8491;
		if(var_383_bool != 0) {
			var_384_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7695);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7696, (int)8493, (int)8492);
			return 0;
		}
		var_390_bool = var_71_string == (int)8493;
		if(var_390_bool != 0) {
			var_391_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7697);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)5280, (int)5820, (int)5819);
			return 0;
		}
		var_397_bool = var_71_string == (int)5820;
		if(var_397_bool != 0) {
			var_398_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)5281);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)5282, (int)5822, (int)5821);
			@@@var_0_bool:AddReply((int)5285, (int)5822, (int)5824);
			return 0;
		}
		var_407_bool = var_71_string == (int)5822;
		if(var_407_bool != 0) {
			var_408_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)5283);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)5284, (int)-1, (int)5823);
			return 0;
		}
		var_414_bool = var_71_string == (int)5818;
		if(var_414_bool != 0) {
			var_415_object = Obj(); var_416_object = Obj();
			var_415_object = var_1_object;
			var_416_object = var_0_bool;
			func_6628();
			var_419_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)5279);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)5286, (int)5827, (int)5826);
			@@@var_0_bool:AddReply((int)7698, (int)8491, (int)8494);
			return 0;
		}
		var_428_bool = var_71_string == (int)5827;
		if(var_428_bool != 0) {
			var_429_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)5287);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)5288, (int)5820, (int)5828);
			return 0;
		}
		var_435_bool = var_71_string == (int)8502;
		if(var_435_bool != 0) {
			var_436_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7705);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7736, (int)8537, (int)8536);
			return 0;
		}
		var_442_bool = var_71_string == (int)8537;
		if(var_442_bool != 0) {
			var_443_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7737);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7738, (int)8539, (int)8538);
			return 0;
		}
		var_449_bool = var_71_string == (int)8539;
		if(var_449_bool != 0) {
			var_450_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7739);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7740, (int)8541, (int)8540);
			return 0;
		}
		var_456_bool = var_71_string == (int)8541;
		if(var_456_bool != 0) {
			var_457_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7741);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7743, (int)-1, (int)8543);
			@@@var_0_bool:AddReply((int)7742, (int)-1, (int)8542);
			return 0;
		}
		var_466_bool = var_71_string == (int)8501;
		if(var_466_bool != 0) {
			var_467_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7704);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7732, (int)8533, (int)8532);
			return 0;
		}
		var_473_bool = var_71_string == (int)8533;
		if(var_473_bool != 0) {
			var_474_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7733);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7734, (int)-1, (int)8534);
			@@@var_0_bool:AddReply((int)7735, (int)-1, (int)8535);
			return 0;
		}
		var_483_bool = var_71_string == (int)8500;
		if(var_483_bool != 0) {
			var_484_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7703);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7706, (int)8529, (int)8503);
			return 0;
		}
		var_490_bool = var_71_string == (int)8529;
		if(var_490_bool != 0) {
			var_491_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7729);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7730, (int)-1, (int)8530);
			@@@var_0_bool:AddReply((int)7731, (int)-1, (int)8531);
			return 0;
		}
		var_500_bool = var_71_string == (int)8499;
		if(var_500_bool != 0) {
			var_501_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7702);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7720, (int)8520, (int)8519);
			return 0;
		}
		var_507_bool = var_71_string == (int)8520;
		if(var_507_bool != 0) {
			var_508_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7721);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7722, (int)8524, (int)8521);
			@@@var_0_bool:AddReply((int)7723, (int)8523, (int)8522);
			return 0;
		}
		var_517_bool = var_71_string == (int)8523;
		if(var_517_bool != 0) {
			var_518_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7724);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7728, (int)8524, (int)8527);
			return 0;
		}
		var_524_bool = var_71_string == (int)8524;
		if(var_524_bool != 0) {
			var_525_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7725);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7727, (int)-1, (int)8526);
			@@@var_0_bool:AddReply((int)7726, (int)-1, (int)8525);
			return 0;
		}
		var_534_bool = var_71_string == (int)8498;
		if(var_534_bool != 0) {
			var_535_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7701);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7714, (int)8513, (int)8512);
			return 0;
		}
		var_541_bool = var_71_string == (int)8513;
		if(var_541_bool != 0) {
			var_542_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7715);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7716, (int)8515, (int)8514);
			@@@var_0_bool:AddReply((int)7719, (int)8515, (int)8517);
			return 0;
		}
		var_551_bool = var_71_string == (int)8515;
		if(var_551_bool != 0) {
			var_552_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7717);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7718, (int)-1, (int)8516);
			return 0;
		}
		var_558_bool = var_71_string == (int)8504;
		if(var_558_bool != 0) {
			var_559_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7707);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7708, (int)8506, (int)8505);
			return 0;
		}
		var_565_bool = var_71_string == (int)8506;
		if(var_565_bool != 0) {
			var_566_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7709);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7711, (int)-1, (int)8508);
			@@@var_0_bool:AddReply((int)7710, (int)-1, (int)8507);
			return 0;
		}
		var_575_bool = var_71_string == (int)8496;
		if(var_575_bool != 0) {
			var_576_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7699);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7700, (int)5807, (int)8497);
			@@@var_0_bool:AddReply((int)7712, (int)5809, (int)8509);
			return 0;
		}
		var_585_bool = var_71_string == (int)5807;
		if(var_585_bool != 0) {
			var_586_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)5270);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)5271, (int)5809, (int)5808);
			@@@var_0_bool:AddReply((int)5278, (int)5809, (int)5816);
			return 0;
		}
		var_595_bool = var_71_string == (int)5809;
		if(var_595_bool != 0) {
			var_596_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)5272);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)5273, (int)5811, (int)5810);
			@@@var_0_bool:AddReply((int)5277, (int)5811, (int)5814);
			return 0;
		}
		var_605_bool = var_71_string == (int)5811;
		if(var_605_bool != 0) {
			var_606_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)5274);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)5275, (int)-1, (int)5812);
			@@@var_0_bool:AddReply((int)5276, (int)-1, (int)5813);
			return 0;
		}
		var_615_bool = var_71_string == (int)5832;
		if(var_615_bool != 0) {
			var_616_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)5291);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)5292, (int)5834, (int)5833);
			@@@var_0_bool:AddReply((int)5299, (int)-1, (int)5840);
			return 0;
		}
		var_625_bool = var_71_string == (int)5834;
		if(var_625_bool != 0) {
			var_626_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)5293);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)5294, (int)5836, (int)5835);
			@@@var_0_bool:AddReply((int)5298, (int)-1, (int)5839);
			return 0;
		}
		var_635_bool = var_71_string == (int)5836;
		if(var_635_bool != 0) {
			var_636_string = "";
			func_703(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)5295);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)5296, (int)-1, (int)5837);
			@@@var_0_bool:AddReply((int)5297, (int)-1, (int)5838);
			return 0;
		}
		var_3_object = true;
		var_644_bool = 0;
		func_6501(var_644_bool);
		if(var_644_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x2d0";
	
}


task_8_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_int, var_17_int, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool)
{
	if((int)1 != 0) {
		func_6396();
		var_76_bool = var_72_bool == (int)6850;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_bool;
			func_6527();
			var_81_object = Obj(); var_82_object = Obj();
			var_81_object = var_1_object;
			var_82_object = var_0_bool;
			func_6533();
			var_93_object = Obj(); var_94_object = Obj();
			var_93_object = var_1_object;
			var_94_object = var_0_bool;
			func_6676();
			var_111_object = Obj(); var_112_object = Obj();
			var_111_object = var_1_object;
			var_112_object = var_0_bool;
			func_6692(var_112_object);
		}
		var_138_bool = var_72_bool == (int)6845;
		if(var_138_bool != 0) {
			var_139_object = Obj(); var_140_object = Obj();
			var_139_object = var_1_object;
			var_140_object = var_0_bool;
			func_6527();
		}
		var_142_bool = var_72_bool == (int)6848;
		if(var_142_bool != 0) {
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_bool;
			func_6527();
		}
		var_146_bool = var_71_string == (int)6822;
		if(var_146_bool != 0) {
			var_147_bool = 0;
			var_147_bool = 0;
			var_148_bool = 0;
			var_148_bool = 0;
			var_149_bool = 0; var_150_object = Obj();
			var_150_object = var_1_object;
			func_6889(var_150_object);
			if(var_149_bool != 0) {
				var_157_bool = 0; var_158_object = Obj();
				var_158_object = var_1_object;
				func_6913(var_158_object);
				var_163_bool = var_157_bool == 0; //@nz
				if(var_163_bool != 0) {
					var_148_bool = 1;
				}
			}
			if(var_148_bool != 0) {
				var_164_bool = 0; var_165_object = Obj();
				var_165_object = var_1_object;
				func_6901(var_165_object);
				var_170_bool = var_164_bool == 0; //@nz
				if(var_170_bool != 0) {
					var_147_bool = 1;
				}
			}
			if(var_147_bool != 0) {
				var_171_string = "";
				func_1939(var_72_bool, "Neutral");
				@@@var_0_bool:SetMessage((int)6175);
				@@@var_0_bool:ClearReplies();
				var_187_bool = 0; var_188_object = Obj();
				var_188_object = var_1_object;
				func_6877(var_188_object);
				var_193_bool = var_187_bool == 0; //@nz
				if(var_193_bool != 0) {
					@@@var_0_bool:AddReply((int)6176, (int)6824, (int)6823);
				}
				var_197_bool = 0; var_198_object = Obj();
				var_198_object = var_1_object;
				func_6877(var_198_object);
				var_199_bool = var_197_bool == 0; //@nz
				if(var_199_bool != 0) {
					@@@var_0_bool:AddReply((int)6179, (int)6831, (int)6829);
				}
				var_203_bool = 0; var_204_object = Obj();
				var_204_object = var_1_object;
				func_6877(var_204_object);
				if(var_203_bool != 0) {
					@@@var_0_bool:AddReply((int)6180, (int)6836, (int)6830);
				}
				return 0;
			}
		}
		var_209_bool = var_71_string == (int)6831;
		if(var_209_bool != 0) {
			var_210_string = "";
			func_1939(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)6181);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)6184, (int)6832, (int)6834);
			return 0;
		}
		var_216_bool = var_71_string == (int)6824;
		if(var_216_bool != 0) {
			var_217_string = "";
			func_1939(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)6177);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)6178, (int)6832, (int)6825);
			return 0;
		}
		var_223_bool = var_71_string == (int)6832;
		if(var_223_bool != 0) {
			var_224_object = Obj(); var_225_object = Obj();
			var_224_object = var_1_object;
			var_225_object = var_0_bool;
			func_6521();
			var_228_string = "";
			func_1939(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)6182);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)6183, (int)6836, (int)6833);
			return 0;
		}
		var_234_bool = var_71_string == (int)6836;
		if(var_234_bool != 0) {
			var_235_string = "";
			func_1939(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)6185);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)6186, (int)6840, (int)6837);
			@@@var_0_bool:AddReply((int)6187, (int)6839, (int)6838);
			return 0;
		}
		var_244_bool = var_71_string == (int)6839;
		if(var_244_bool != 0) {
			var_245_string = "";
			func_1939(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)6188);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)6190, (int)6840, (int)6842);
			@@@var_0_bool:AddReply((int)6191, (int)6844, (int)6843);
			return 0;
		}
		var_254_bool = var_71_string == (int)6844;
		if(var_254_bool != 0) {
			var_255_string = "";
			func_1939(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)6192);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)6193, (int)-1, (int)6845);
			@@@var_0_bool:AddReply((int)6194, (int)6847, (int)6846);
			return 0;
		}
		var_264_bool = var_71_string == (int)6847;
		if(var_264_bool != 0) {
			var_265_string = "";
			func_1939(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)6195);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)6196, (int)-1, (int)6848);
			return 0;
		}
		var_271_bool = var_71_string == (int)6840;
		if(var_271_bool != 0) {
			var_272_string = "";
			func_1939(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)6189);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)6197, (int)-1, (int)6850);
			return 0;
		}
		var_3_object = true;
		var_277_bool = 0;
		func_6501(var_277_bool);
		if(var_277_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x7a4";
	
}


task_10_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_int, var_22_int, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool)
{
	if((int)1 != 0) {
		func_6396();
		var_76_bool = var_72_bool == (int)7671;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_bool;
			func_6569();
			var_81_object = Obj(); var_82_object = Obj();
			var_81_object = var_1_object;
			var_82_object = var_0_bool;
			func_6587();
			var_110_object = Obj(); var_111_object = Obj();
			var_110_object = var_1_object;
			var_111_object = var_0_bool;
			func_6596(var_111_object);
			var_129_object = Obj(); var_130_object = Obj();
			var_129_object = var_1_object;
			var_130_object = var_0_bool;
			func_6617(var_130_object);
			var_140_object = Obj(); var_141_object = Obj();
			var_140_object = var_1_object;
			var_141_object = var_0_bool;
			func_6557();
		}
		var_145_bool = var_72_bool == (int)8093;
		if(var_145_bool != 0) {
			var_146_object = Obj(); var_147_object = Obj();
			var_146_object = var_1_object;
			var_147_object = var_0_bool;
			func_6575();
		}
		var_151_bool = var_72_bool == (int)8094;
		if(var_151_bool != 0) {
			var_152_object = Obj(); var_153_object = Obj();
			var_152_object = var_1_object;
			var_153_object = var_0_bool;
			func_6575();
		}
		var_155_bool = var_72_bool == (int)8054;
		if(var_155_bool != 0) {
			var_156_object = Obj(); var_157_object = Obj();
			var_156_object = var_1_object;
			var_157_object = var_0_bool;
			func_6581();
		}
		var_161_bool = var_72_bool == (int)8055;
		if(var_161_bool != 0) {
			var_162_object = Obj(); var_163_object = Obj();
			var_162_object = var_1_object;
			var_163_object = var_0_bool;
			func_6581();
		}
		var_165_bool = var_72_bool == (int)8060;
		if(var_165_bool != 0) {
			var_166_object = Obj(); var_167_object = Obj();
			var_166_object = var_1_object;
			var_167_object = var_0_bool;
			func_6581();
		}
		var_169_bool = var_72_bool == (int)8061;
		if(var_169_bool != 0) {
			var_170_object = Obj(); var_171_object = Obj();
			var_170_object = var_1_object;
			var_171_object = var_0_bool;
			func_6581();
		}
		var_173_bool = var_72_bool == (int)8065;
		if(var_173_bool != 0) {
			var_174_object = Obj(); var_175_object = Obj();
			var_174_object = var_1_object;
			var_175_object = var_0_bool;
			func_6796();
		}
		var_179_bool = var_72_bool == (int)8067;
		if(var_179_bool != 0) {
			var_180_object = Obj(); var_181_object = Obj();
			var_180_object = var_1_object;
			var_181_object = var_0_bool;
			func_6563();
		}
		var_185_bool = var_72_bool == (int)8068;
		if(var_185_bool != 0) {
			var_186_object = Obj(); var_187_object = Obj();
			var_186_object = var_1_object;
			var_187_object = var_0_bool;
			func_6563();
		}
		var_189_bool = var_72_bool == (int)15329;
		if(var_189_bool != 0) {
			var_190_object = Obj(); var_191_object = Obj();
			var_190_object = var_1_object;
			var_191_object = var_0_bool;
			func_6785(var_191_object);
		}
		var_194_bool = var_71_string == (int)7666;
		if(var_194_bool != 0) {
			var_195_string = "";
			func_2442(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)6959);
			@@@var_0_bool:ClearReplies();
			var_211_bool = 0;
			var_211_bool = 0;
			var_212_bool = 0; var_213_object = Obj();
			var_213_object = var_1_object;
			func_6949(var_213_object);
			if(var_212_bool != 0) {
				var_220_bool = 0; var_221_object = Obj();
				var_221_object = var_1_object;
				func_6985(var_221_object);
				if(var_220_bool != 0) {
					var_211_bool = 1;
				}
			}
			if(var_211_bool != 0) {
				@@@var_0_bool:AddReply((int)7328, (int)8080, (int)8079);
			}
			var_229_bool = 0; var_230_object = Obj();
			var_230_object = var_1_object;
			func_6961(var_230_object);
			if(var_229_bool != 0) {
				@@@var_0_bool:AddReply((int)7319, (int)8070, (int)8069);
			}
			@@@var_0_bool:AddReply((int)6970, (int)7678, (int)7677);
			var_241_bool = 0; var_242_object = Obj();
			var_242_object = var_1_object;
			func_6973(var_242_object);
			if(var_241_bool != 0) {
				@@@var_0_bool:AddReply((int)7335, (int)8049, (int)8087);
			}
			@@@var_0_bool:AddReply((int)7530, (int)-1, (int)8312);
			return 0;
		EMIT "PushEmpty(bool, object)";
		EMIT "Stack[-1] = Stack[1 + Tasks[-1].StackPointer]";
		EMIT "Call 0x1b19";
		EMIT "Pop(1)";
		EMIT "IF (Stack[-1] == 0) GOTO 0xa6d; Pop(1)";
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=0";
		EMIT "Call 0x98a";
		EMIT "Pop(1)";
		EMIT "Push((int) 7314)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
		EMIT "Pop(0)";
		EMIT "PushEmpty(bool, object)";
		EMIT "Stack[-1] = Stack[1 + Tasks[-1].StackPointer]";
		EMIT "Call 0x1c49";
		EMIT "Pop(1)";
		EMIT "IF (Stack[-1] == 0) GOTO 0xa62; Pop(1)";
		EMIT "Push((int) 7315)";
		EMIT "Push((int) 8066)";
		EMIT "Push((int) 8065)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		}
		var_254_bool = var_71_string == (int)8066;
		if(var_254_bool != 0) {
			var_255_string = "";
			func_2442(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7316);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7317, (int)-1, (int)8067);
			@@@var_0_bool:AddReply((int)7318, (int)-1, (int)8068);
			return 0;
		}
		var_264_bool = var_71_string == (int)8049;
		if(var_264_bool != 0) {
			var_265_string = "";
			func_2442(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7300);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7301, (int)8051, (int)8050);
			@@@var_0_bool:AddReply((int)7313, (int)8053, (int)8062);
			return 0;
		}
		var_274_bool = var_71_string == (int)8051;
		if(var_274_bool != 0) {
			var_275_string = "";
			func_2442(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7302);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7303, (int)8053, (int)8052);
			@@@var_0_bool:AddReply((int)7307, (int)8057, (int)8056);
			return 0;
		}
		var_284_bool = var_71_string == (int)8057;
		if(var_284_bool != 0) {
			var_285_string = "";
			func_2442(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7308);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7309, (int)8059, (int)8058);
			return 0;
		}
		var_291_bool = var_71_string == (int)8059;
		if(var_291_bool != 0) {
			var_292_string = "";
			func_2442(var_72_bool, "Suspense");
			@@@var_0_bool:SetMessage((int)7310);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7311, (int)-1, (int)8060);
			@@@var_0_bool:AddReply((int)7312, (int)-1, (int)8061);
			return 0;
		}
		var_301_bool = var_71_string == (int)8053;
		if(var_301_bool != 0) {
			var_302_string = "";
			func_2442(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7304);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7305, (int)-1, (int)8054);
			@@@var_0_bool:AddReply((int)7306, (int)-1, (int)8055);
			return 0;
		}
		var_311_bool = var_71_string == (int)7678;
		if(var_311_bool != 0) {
			var_312_string = "";
			func_2442(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)6971);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7344, (int)-1, (int)8097);
			return 0;
		}
		var_318_bool = var_71_string == (int)8070;
		if(var_318_bool != 0) {
			var_319_string = "";
			func_2442(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7320);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)6965, (int)7673, (int)7672);
			return 0;
		}
		var_325_bool = var_71_string == (int)7673;
		if(var_325_bool != 0) {
			var_326_string = "";
			func_2442(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)6966);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)6967, (int)8088, (int)7674);
			@@@var_0_bool:AddReply((int)7343, (int)8088, (int)8095);
			return 0;
		}
		var_335_bool = var_71_string == (int)8088;
		if(var_335_bool != 0) {
			var_336_string = "";
			func_2442(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7336);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7337, (int)8090, (int)8089);
			return 0;
		}
		var_342_bool = var_71_string == (int)8090;
		if(var_342_bool != 0) {
			var_343_string = "";
			func_2442(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7338);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7339, (int)8092, (int)8091);
			@@@var_0_bool:AddReply((int)7342, (int)-1, (int)8094);
			return 0;
		}
		var_352_bool = var_71_string == (int)8092;
		if(var_352_bool != 0) {
			var_353_string = "";
			func_2442(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7340);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7341, (int)-1, (int)8093);
			return 0;
		}
		var_359_bool = var_71_string == (int)8080;
		if(var_359_bool != 0) {
			var_360_string = "";
			func_2442(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7329);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7330, (int)8082, (int)8081);
			return 0;
		}
		var_366_bool = var_71_string == (int)8082;
		if(var_366_bool != 0) {
			var_367_string = "";
			func_2442(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)7331);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)7332, (int)7670, (int)8083);
			return 0;
		}
		var_373_bool = var_71_string == (int)7670;
		if(var_373_bool != 0) {
			var_374_string = "";
			func_2442(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)6963);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)6964, (int)-1, (int)7671);
			return 0;
		}
		var_3_object = true;
		var_379_bool = 0;
		func_6501(var_379_bool);
		if(var_379_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x99b";
	
}


task_12_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_int, var_27_int, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool)
{
	if((int)1 != 0) {
		func_6396();
		var_76_bool = var_72_bool == (int)12126;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_bool;
			func_6708();
			var_81_object = Obj(); var_82_object = Obj();
			var_81_object = var_1_object;
			var_82_object = var_0_bool;
			func_6714();
		}
		var_132_bool = var_72_bool == (int)12127;
		if(var_132_bool != 0) {
			var_133_object = Obj(); var_134_object = Obj();
			var_133_object = var_1_object;
			var_134_object = var_0_bool;
			func_6708();
			var_135_object = Obj(); var_136_object = Obj();
			var_135_object = var_1_object;
			var_136_object = var_0_bool;
			func_6714();
		}
		var_138_bool = var_72_bool == (int)12118;
		if(var_138_bool != 0) {
			var_139_object = Obj(); var_140_object = Obj();
			var_139_object = var_1_object;
			var_140_object = var_0_bool;
			func_6708();
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_bool;
			func_6714();
		}
		var_144_bool = var_72_bool == (int)12137;
		if(var_144_bool != 0) {
			var_145_object = Obj(); var_146_object = Obj();
			var_145_object = var_1_object;
			var_146_object = var_0_bool;
			func_6746();
			var_149_object = Obj(); var_150_object = Obj();
			var_149_object = var_1_object;
			var_150_object = var_0_bool;
			func_6540(var_150_object);
			var_158_object = Obj(); var_159_object = Obj();
			var_158_object = var_1_object;
			var_159_object = var_0_bool;
			func_6551();
		}
		var_163_bool = var_72_bool == (int)12138;
		if(var_163_bool != 0) {
			var_164_object = Obj(); var_165_object = Obj();
			var_164_object = var_1_object;
			var_165_object = var_0_bool;
			func_6746();
			var_166_object = Obj(); var_167_object = Obj();
			var_166_object = var_1_object;
			var_167_object = var_0_bool;
			func_6540(var_167_object);
			var_168_object = Obj(); var_169_object = Obj();
			var_168_object = var_1_object;
			var_169_object = var_0_bool;
			func_6551();
		}
		var_171_bool = var_72_bool == (int)15333;
		if(var_171_bool != 0) {
			var_172_object = Obj(); var_173_object = Obj();
			var_172_object = var_1_object;
			var_173_object = var_0_bool;
			func_6785(var_173_object);
		}
		var_176_bool = var_71_string == (int)12111;
		if(var_176_bool != 0) {
			var_177_bool = 0;
			var_177_bool = 0;
			var_178_bool = 0; var_179_object = Obj();
			var_179_object = var_1_object;
			func_7125(var_179_object);
			if(var_178_bool != 0) {
				var_186_bool = 0; var_187_object = Obj();
				var_187_object = var_1_object;
				func_7137(var_187_object);
				if(var_186_bool != 0) {
					var_177_bool = 1;
				}
			}
			if(var_177_bool != 0) {
				var_192_string = "";
				func_3191(var_72_bool, "Neutral");
				@@@var_0_bool:SetMessage((int)10952);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)10953, (int)12113, (int)12112);
				@@@var_0_bool:AddReply((int)10960, (int)12113, (int)12119);
				return 0;
			}
			var_214_string = "";
			func_3191(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)9615);
			@@@var_0_bool:ClearReplies();
			var_216_bool = 0;
			var_216_bool = 0;
			var_217_bool = 0; var_218_object = Obj();
			var_218_object = var_1_object;
			func_7149(var_218_object);
			if(var_217_bool != 0) {
				var_223_bool = 0; var_224_object = Obj();
				var_224_object = var_1_object;
				func_7161(var_224_object);
				if(var_223_bool != 0) {
					var_216_bool = 1;
				}
			}
			if(var_216_bool != 0) {
				@@@var_0_bool:AddReply((int)10970, (int)12133, (int)12132);
			}
			var_232_bool = 0; var_233_object = Obj();
			var_233_object = var_1_object;
			func_6997(var_232_bool, var_233_object);
			if(var_232_bool != 0) {
				@@@var_0_bool:AddReply((int)10948, (int)12108, (int)12107);
			}
			var_239_bool = 0; var_240_object = Obj();
			var_240_object = var_1_object;
			func_6997(var_239_bool, var_240_object);
			if(var_239_bool != 0) {
				@@@var_0_bool:AddReply((int)9640, (int)10581, (int)10608);
			}
			var_244_bool = 0; var_245_object = Obj();
			var_245_object = var_1_object;
			func_6997(var_244_bool, var_245_object);
			if(var_244_bool != 0) {
				@@@var_0_bool:AddReply((int)10947, (int)10612, (int)12106);
			}
			@@@var_0_bool:AddReply((int)14119, (int)-1, (int)15333);
			@@@var_0_bool:AddReply((int)9616, (int)-1, (int)10580);
			return 0;
		}
		var_256_bool = var_71_string == (int)10612;
		if(var_256_bool != 0) {
			var_257_string = "";
			func_3191(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)9643);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9644, (int)10614, (int)10613);
			@@@var_0_bool:AddReply((int)9648, (int)10610, (int)10617);
			return 0;
		}
		var_266_bool = var_71_string == (int)10610;
		if(var_266_bool != 0) {
			var_267_string = "";
			func_3191(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)9641);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9642, (int)-1, (int)10611);
			return 0;
		}
		var_273_bool = var_71_string == (int)10614;
		if(var_273_bool != 0) {
			var_274_string = "";
			func_3191(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)9645);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9646, (int)-1, (int)10615);
			@@@var_0_bool:AddReply((int)9647, (int)-1, (int)10616);
			return 0;
		}
		var_283_bool = var_71_string == (int)10581;
		if(var_283_bool != 0) {
			var_284_string = "";
			func_3191(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)9617);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9636, (int)10604, (int)10603);
			return 0;
		}
		var_290_bool = var_71_string == (int)10604;
		if(var_290_bool != 0) {
			var_291_string = "";
			func_3191(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)9637);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9638, (int)-1, (int)10605);
			return 0;
		}
		var_297_bool = var_71_string == (int)12108;
		if(var_297_bool != 0) {
			var_298_string = "";
			func_3191(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)10949);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)10950, (int)12110, (int)12109);
			@@@var_0_bool:AddReply((int)10969, (int)10583, (int)12130);
			return 0;
		}
		var_307_bool = var_71_string == (int)12110;
		if(var_307_bool != 0) {
			var_308_string = "";
			func_3191(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)10951);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9618, (int)10583, (int)10582);
			@@@var_0_bool:AddReply((int)10967, (int)-1, (int)12128);
			@@@var_0_bool:AddReply((int)10972, (int)-1, (int)12134);
			return 0;
		}
		var_320_bool = var_71_string == (int)10583;
		if(var_320_bool != 0) {
			var_321_string = "";
			func_3191(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)9619);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9620, (int)10585, (int)10584);
			@@@var_0_bool:AddReply((int)9635, (int)10585, (int)10601);
			return 0;
		}
		var_330_bool = var_71_string == (int)10585;
		if(var_330_bool != 0) {
			var_331_string = "";
			func_3191(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)9621);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9623, (int)10588, (int)10587);
			@@@var_0_bool:AddReply((int)9634, (int)10595, (int)10599);
			@@@var_0_bool:AddReply((int)9622, (int)-1, (int)10586);
			return 0;
		}
		var_343_bool = var_71_string == (int)10588;
		if(var_343_bool != 0) {
			var_344_string = "";
			func_3191(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)9624);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9625, (int)-1, (int)10589);
			@@@var_0_bool:AddReply((int)9626, (int)10591, (int)10590);
			@@@var_0_bool:AddReply((int)9630, (int)10595, (int)10594);
			return 0;
		}
		var_356_bool = var_71_string == (int)10595;
		if(var_356_bool != 0) {
			var_357_string = "";
			func_3191(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)9631);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9632, (int)-1, (int)10596);
			@@@var_0_bool:AddReply((int)9633, (int)10591, (int)10597);
			return 0;
		}
		var_366_bool = var_71_string == (int)10591;
		if(var_366_bool != 0) {
			var_367_string = "";
			func_3191(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)9627);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9628, (int)-1, (int)10592);
			@@@var_0_bool:AddReply((int)9629, (int)-1, (int)10593);
			return 0;
		}
		var_376_bool = var_71_string == (int)12133;
		if(var_376_bool != 0) {
			var_377_string = "";
			func_3191(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)10971);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)10973, (int)12136, (int)12135);
			return 0;
		}
		var_383_bool = var_71_string == (int)12136;
		if(var_383_bool != 0) {
			var_384_string = "";
			func_3191(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)10974);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)10975, (int)-1, (int)12137);
			@@@var_0_bool:AddReply((int)10976, (int)-1, (int)12138);
			return 0;
		}
		var_393_bool = var_71_string == (int)12113;
		if(var_393_bool != 0) {
			var_394_string = "";
			func_3191(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)10954);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)10955, (int)12115, (int)12114);
			@@@var_0_bool:AddReply((int)10961, (int)12117, (int)12121);
			return 0;
		}
		var_403_bool = var_71_string == (int)12115;
		if(var_403_bool != 0) {
			var_404_string = "";
			func_3191(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)10956);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)10957, (int)12117, (int)12116);
			return 0;
		}
		var_410_bool = var_71_string == (int)12117;
		if(var_410_bool != 0) {
			var_411_string = "";
			func_3191(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)10958);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)10963, (int)12125, (int)12124);
			@@@var_0_bool:AddReply((int)10959, (int)-1, (int)12118);
			return 0;
		}
		var_420_bool = var_71_string == (int)12125;
		if(var_420_bool != 0) {
			var_421_string = "";
			func_3191(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)10964);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)10965, (int)-1, (int)12126);
			@@@var_0_bool:AddReply((int)10966, (int)-1, (int)12127);
			return 0;
		}
		var_3_object = true;
		var_429_bool = 0;
		func_6501(var_429_bool);
		if(var_429_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc88";
	
}


task_14_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_int, var_32_int, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool)
{
	if((int)1 != 0) {
		func_6396();
		var_76_bool = var_72_bool == (int)15331;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_bool;
			func_6785(var_78_object);
		}
		var_81_bool = var_71_string == (int)10842;
		if(var_81_bool != 0) {
			var_82_string = "";
			func_3960(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)9843);
			@@@var_0_bool:ClearReplies();
			var_98_bool = 0; var_99_object = Obj();
			var_99_object = var_1_object;
			func_6997(var_98_bool, var_99_object);
			if(var_98_bool != 0) {
				@@@var_0_bool:AddReply((int)9844, (int)10844, (int)10843);
			}
			var_105_bool = 0; var_106_object = Obj();
			var_106_object = var_1_object;
			func_6997(var_105_bool, var_106_object);
			if(var_105_bool != 0) {
				@@@var_0_bool:AddReply((int)9848, (int)10848, (int)10847);
			}
			@@@var_0_bool:AddReply((int)14117, (int)-1, (int)15331);
			@@@var_0_bool:AddReply((int)14118, (int)-1, (int)15332);
			return 0;
		}
		var_117_bool = var_71_string == (int)10848;
		if(var_117_bool != 0) {
			var_118_string = "";
			func_3960(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)9849);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9850, (int)10850, (int)10849);
			@@@var_0_bool:AddReply((int)9857, (int)10858, (int)10857);
			return 0;
		}
		var_127_bool = var_71_string == (int)10858;
		if(var_127_bool != 0) {
			var_128_string = "";
			func_3960(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)9858);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9859, (int)10860, (int)10859);
			@@@var_0_bool:AddReply((int)9863, (int)-1, (int)10863);
			return 0;
		}
		var_137_bool = var_71_string == (int)10860;
		if(var_137_bool != 0) {
			var_138_string = "";
			func_3960(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)9860);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9861, (int)-1, (int)10861);
			@@@var_0_bool:AddReply((int)9862, (int)-1, (int)10862);
			return 0;
		}
		var_147_bool = var_71_string == (int)10850;
		if(var_147_bool != 0) {
			var_148_string = "";
			func_3960(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)9851);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9852, (int)10852, (int)10851);
			@@@var_0_bool:AddReply((int)9856, (int)10852, (int)10855);
			return 0;
		}
		var_157_bool = var_71_string == (int)10852;
		if(var_157_bool != 0) {
			var_158_string = "";
			func_3960(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)9853);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9854, (int)-1, (int)10853);
			@@@var_0_bool:AddReply((int)9855, (int)-1, (int)10854);
			return 0;
		}
		var_167_bool = var_71_string == (int)10844;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_3960(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)9845);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)9846, (int)-1, (int)10845);
			@@@var_0_bool:AddReply((int)9847, (int)-1, (int)10846);
			return 0;
		}
		var_3_object = true;
		var_176_bool = 0;
		func_6501(var_176_bool);
		if(var_176_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xf89";
	
}


task_16_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_int, var_37_int, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool)
{
	if((int)1 != 0) {
		func_6396();
		var_76_bool = var_72_bool == (int)12936;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_bool;
			func_6752();
			var_81_object = Obj(); var_82_object = Obj();
			var_81_object = var_1_object;
			var_82_object = var_0_bool;
			func_6808();
		}
		var_100_bool = var_72_bool == (int)12939;
		if(var_100_bool != 0) {
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_object;
			var_102_object = var_0_bool;
			func_6752();
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_bool;
			func_6808();
		}
		var_106_bool = var_72_bool == (int)13653;
		if(var_106_bool != 0) {
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_bool;
			func_6752();
		}
		var_110_bool = var_72_bool == (int)12944;
		if(var_110_bool != 0) {
			var_111_object = Obj(); var_112_object = Obj();
			var_111_object = var_1_object;
			var_112_object = var_0_bool;
			func_6758();
			var_150_object = Obj(); var_151_object = Obj();
			var_150_object = var_1_object;
			var_151_object = var_0_bool;
			func_6824(var_151_object);
		}
		var_161_bool = var_72_bool == (int)15334;
		if(var_161_bool != 0) {
			var_162_object = Obj(); var_163_object = Obj();
			var_162_object = var_1_object;
			var_163_object = var_0_bool;
			func_6785(var_163_object);
		}
		var_166_bool = var_71_string == (int)12926;
		if(var_166_bool != 0) {
			var_167_bool = 0; var_168_object = Obj();
			var_168_object = var_1_object;
			func_6997(var_167_bool, var_168_object);
			if(var_167_bool != 0) {
				var_171_string = "";
				func_4373(var_72_bool, "Neutral");
				@@@var_0_bool:SetMessage((int)11720);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)11721, (int)12928, (int)12927);
				return 0;
			}
			var_190_string = "";
			func_4373(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)11704);
			@@@var_0_bool:ClearReplies();
			var_192_bool = 0;
			var_192_bool = 0;
			var_193_bool = 0; var_194_object = Obj();
			var_194_object = var_1_object;
			func_7183(var_194_object);
			if(var_193_bool != 0) {
				var_201_bool = 0; var_202_object = Obj();
				var_202_object = var_1_object;
				func_7195(var_202_object);
				if(var_201_bool != 0) {
					var_192_bool = 1;
				}
			}
			if(var_192_bool != 0) {
				@@@var_0_bool:AddReply((int)11705, (int)12910, (int)12909);
			}
			var_210_bool = 0;
			var_210_bool = 0;
			var_211_bool = 0;
			var_211_bool = 0;
			var_212_bool = 0; var_213_object = Obj();
			var_213_object = var_1_object;
			func_7183(var_213_object);
			if(var_212_bool != 0) {
				var_214_bool = 0; var_215_object = Obj();
				var_215_object = var_1_object;
				func_7217(var_215_object);
				var_220_bool = var_214_bool == 0; //@nz
				if(var_220_bool != 0) {
					var_211_bool = 1;
				}
			}
			if(var_211_bool != 0) {
				var_221_bool = 0; var_222_object = Obj();
				var_222_object = var_1_object;
				func_7207(var_221_bool, var_222_object);
				if(var_221_bool != 0) {
					var_210_bool = 1;
				}
			}
			if(var_210_bool != 0) {
				@@@var_0_bool:AddReply((int)11734, (int)12941, (int)12940);
			}
			@@@var_0_bool:AddReply((int)14120, (int)-1, (int)15334);
			@@@var_0_bool:AddReply((int)11739, (int)-1, (int)12945);
			return 0;
		}
		var_240_bool = var_71_string == (int)12941;
		if(var_240_bool != 0) {
			var_241_string = "";
			func_4373(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)11735);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)11736, (int)12943, (int)12942);
			return 0;
		}
		var_247_bool = var_71_string == (int)12943;
		if(var_247_bool != 0) {
			var_248_string = "";
			func_4373(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)11737);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)11738, (int)-1, (int)12944);
			return 0;
		}
		var_254_bool = var_71_string == (int)12910;
		if(var_254_bool != 0) {
			var_255_string = "";
			func_4373(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)11706);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)11707, (int)12913, (int)12911);
			@@@var_0_bool:AddReply((int)11708, (int)12913, (int)12912);
			return 0;
		}
		var_264_bool = var_71_string == (int)12913;
		if(var_264_bool != 0) {
			var_265_string = "";
			func_4373(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)11709);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)11710, (int)12916, (int)12915);
			@@@var_0_bool:AddReply((int)11713, (int)12919, (int)12918);
			return 0;
		}
		var_274_bool = var_71_string == (int)12919;
		if(var_274_bool != 0) {
			var_275_string = "";
			func_4373(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)11714);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)11715, (int)12916, (int)12920);
			return 0;
		}
		var_281_bool = var_71_string == (int)12916;
		if(var_281_bool != 0) {
			var_282_string = "";
			func_4373(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)11711);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)11712, (int)12935, (int)12917);
			return 0;
		}
		var_288_bool = var_71_string == (int)12935;
		if(var_288_bool != 0) {
			var_289_string = "";
			func_4373(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)11729);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)11730, (int)-1, (int)12936);
			@@@var_0_bool:AddReply((int)11731, (int)12938, (int)12937);
			var_297_bool = 0; var_298_object = Obj();
			var_298_object = var_1_object;
			func_7207(var_297_bool, var_298_object);
			if(var_297_bool != 0) {
				@@@var_0_bool:AddReply((int)12485, (int)12941, (int)13653);
			}
			return 0;
		}
		var_303_bool = var_71_string == (int)12938;
		if(var_303_bool != 0) {
			var_304_string = "";
			func_4373(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)11732);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)11733, (int)-1, (int)12939);
			return 0;
		}
		var_310_bool = var_71_string == (int)12928;
		if(var_310_bool != 0) {
			var_311_string = "";
			func_4373(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)11722);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)11723, (int)12930, (int)12929);
			return 0;
		}
		var_317_bool = var_71_string == (int)12930;
		if(var_317_bool != 0) {
			var_318_string = "";
			func_4373(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)11724);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)11725, (int)-1, (int)12931);
			@@@var_0_bool:AddReply((int)11726, (int)12933, (int)12932);
			return 0;
		}
		var_327_bool = var_71_string == (int)12933;
		if(var_327_bool != 0) {
			var_328_string = "";
			func_4373(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)11727);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)11728, (int)12922, (int)12934);
			return 0;
		}
		var_334_bool = var_71_string == (int)12922;
		if(var_334_bool != 0) {
			var_335_string = "";
			func_4373(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)11716);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)11717, (int)12924, (int)12923);
			return 0;
		}
		var_341_bool = var_71_string == (int)12924;
		if(var_341_bool != 0) {
			var_342_string = "";
			func_4373(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)11718);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)11719, (int)-1, (int)12925);
			return 0;
		}
		var_3_object = true;
		var_347_bool = 0;
		func_6501(var_347_bool);
		if(var_347_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1126";
	
}


task_18_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_int, var_42_int, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool)
{
	if((int)1 != 0) {
		func_6396();
		var_76_bool = var_72_bool == (int)15337;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_bool;
			func_6785(var_78_object);
		}
		var_81_bool = var_71_string == (int)15336;
		if(var_81_bool != 0) {
			var_82_string = "";
			func_4939(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)14122);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)14123, (int)-1, (int)15337);
			@@@var_0_bool:AddReply((int)14124, (int)-1, (int)15338);
			return 0;
		}
		var_3_object = true;
		var_104_bool = 0;
		func_6501(var_104_bool);
		if(var_104_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x135c";
	
}


task_20_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_int, var_47_int, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool)
{
	if((int)1 != 0) {
		func_6396();
		var_76_bool = var_72_bool == (int)15341;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_bool;
			func_6785(var_78_object);
		}
		var_81_bool = var_71_string == (int)15340;
		if(var_81_bool != 0) {
			var_82_string = "";
			func_5126(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)14126);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)14127, (int)-1, (int)15341);
			@@@var_0_bool:AddReply((int)14128, (int)-1, (int)15342);
			return 0;
		}
		var_3_object = true;
		var_104_bool = 0;
		func_6501(var_104_bool);
		if(var_104_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1417";
	
}


task_22_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_int, var_52_int, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool)
{
	if((int)1 != 0) {
		func_6396();
		var_76_bool = var_72_bool == (int)15345;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_bool;
			func_6785(var_78_object);
		}
		var_81_bool = var_71_string == (int)15344;
		if(var_81_bool != 0) {
			var_82_string = "";
			func_5313(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)14130);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)14131, (int)-1, (int)15345);
			@@@var_0_bool:AddReply((int)14132, (int)-1, (int)15346);
			return 0;
		}
		var_3_object = true;
		var_104_bool = 0;
		func_6501(var_104_bool);
		if(var_104_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x14d2";
	
}


task_24_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_int, var_57_int, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool)
{
	if((int)1 != 0) {
		func_6396();
		var_76_bool = var_72_bool == (int)15349;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_bool;
			func_6785(var_78_object);
		}
		var_81_bool = var_71_string == (int)15348;
		if(var_81_bool != 0) {
			var_82_string = "";
			func_5500(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)14134);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)14135, (int)-1, (int)15349);
			@@@var_0_bool:AddReply((int)14136, (int)-1, (int)15350);
			return 0;
		}
		var_3_object = true;
		var_104_bool = 0;
		func_6501(var_104_bool);
		if(var_104_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x158d";
	
}


task_26_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_int, var_62_int, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool)
{
	if((int)1 != 0) {
		func_6396();
		var_76_bool = var_72_bool == (int)15353;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_bool;
			func_6785(var_78_object);
		}
		var_81_bool = var_71_string == (int)15352;
		if(var_81_bool != 0) {
			var_82_string = "";
			func_5687(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)14138);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)14139, (int)-1, (int)15353);
			@@@var_0_bool:AddReply((int)14140, (int)-1, (int)15354);
			return 0;
		}
		var_3_object = true;
		var_104_bool = 0;
		func_6501(var_104_bool);
		if(var_104_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1648";
	
}


task_28_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_int, var_67_int, var_68_object, var_69_object, var_70_object, var_71_string, var_72_bool)
{
	if((int)1 != 0) {
		func_6396();
		var_76_bool = var_72_bool == (int)15401;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_bool;
			func_6785(var_78_object);
		}
		var_81_bool = var_71_string == (int)15400;
		if(var_81_bool != 0) {
			var_82_string = "";
			func_5874(var_72_bool, "Neutral");
			@@@var_0_bool:SetMessage((int)14186);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)14187, (int)-1, (int)15401);
			@@@var_0_bool:AddReply((int)14188, (int)-1, (int)15402);
			return 0;
		}
		var_3_object = true;
		var_104_bool = 0;
		func_6501(var_104_bool);
		if(var_104_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1703";
	
}


task_30_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_object, var_67_object, var_68_object, var_69_string, var_70_bool, var_71_int, var_72_int)
{
	if((int)1 != 0) {
		func_6396();
		var_76_bool = var_72_int == (int)16529;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_bool;
			func_6802();
		}
		var_82_bool = var_71_int == (int)16528;
		if(var_82_bool != 0) {
			var_83_string = "";
			func_6066(var_72_int, "Neutral");
			@@@var_0_bool:SetMessage((int)15251);
			@@@var_0_bool:ClearReplies();
			var_99_bool = 0; var_100_object = Obj();
			var_100_object = var_1_object;
			func_7265(var_100_object);
			if(var_99_bool != 0) {
				@@@var_0_bool:AddReply((int)15252, (int)16531, (int)16529);
			}
			@@@var_0_bool:AddReply((int)15338, (int)-1, (int)16561);
			return 0;
		}
		var_114_bool = var_71_int == (int)16531;
		if(var_114_bool != 0) {
			var_115_string = "";
			func_6066(var_72_int, "Neutral");
			@@@var_0_bool:SetMessage((int)15254);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)15255, (int)16533, (int)16532);
			return 0;
		}
		var_121_bool = var_71_int == (int)16533;
		if(var_121_bool != 0) {
			var_122_string = "";
			func_6066(var_72_int, "Neutral");
			@@@var_0_bool:SetMessage((int)15256);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)15257, (int)16536, (int)16534);
			@@@var_0_bool:AddReply((int)15258, (int)16536, (int)16535);
			return 0;
		}
		var_131_bool = var_71_int == (int)16536;
		if(var_131_bool != 0) {
			var_132_string = "";
			func_6066(var_72_int, "Neutral");
			@@@var_0_bool:SetMessage((int)15259);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)15261, (int)16540, (int)16539);
			@@@var_0_bool:AddReply((int)15260, (int)16540, (int)16538);
			return 0;
		}
		var_141_bool = var_71_int == (int)16540;
		if(var_141_bool != 0) {
			var_142_string = "";
			func_6066(var_72_int, "Neutral");
			@@@var_0_bool:SetMessage((int)15262);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)15263, (int)16542, (int)16541);
			return 0;
		}
		var_148_bool = var_71_int == (int)16542;
		if(var_148_bool != 0) {
			var_149_string = "";
			func_6066(var_72_int, "Neutral");
			@@@var_0_bool:SetMessage((int)15264);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)15266, (int)-1, (int)16545);
			@@@var_0_bool:AddReply((int)15265, (int)-1, (int)16544);
			return 0;
		}
		var_3_object = true;
		var_157_bool = 0;
		func_6501(var_157_bool);
		if(var_157_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x17c3";
	
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_object, var_67_object, var_68_object, var_69_string, var_70_bool)
{
	func_7664();
	var_73_bool = 0;
	func_6261(var_73_bool);
	var_76_bool = var_73_bool == 0; //@nz
	if(var_76_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
Label_41:
	var_77_string = "";
	func_6378("Neutral");
	lshWaitForAnimEnd();
	goto Label_41;
}
EMIT "@ Hold()";
EMIT "Pop(0)";
EMIT "Return(); Pop(0)";


func_0()
{
	Hold();
	return 0;
}


func_6658()
{
	SetVariable("ood1Grif8", (int)1);
	return 0;
}


func_7173(var_251_bool, var_252_object)
{
	var_253_bool = 0; var_254_object = Obj();
	var_252_object = var_254_object;
	func_7315(var_254_object);
	if(var_253_bool != 0) {
		var_251_bool = 1;
		return 0;
	}
	var_251_bool = 0;
	return 0;
}


func_5126(var_2_object, var_82_string)
{
	var_83_bool = 0;
	func_6501(var_83_bool);
	var_84_bool = var_83_bool == 0; //@nz
	if(var_84_bool != 0) {
		return 0;
	}
	var_85_bool = var_82_string == var_2_object;
	if(var_85_bool != 0) {
		return 0;
	}
	var_86_string = "";
	var_82_string = var_86_string;
	func_6378(var_86_string);
	var_2_object = var_82_string;
	return 0;
}


func_6(var_0_bool)
{
	DoTrade();
	var_0_bool = false;
	
Label_10:
	var_628_string = "";
	func_6378("Neutral");
	lshWaitForAnimEnd();
	var_629_bool = var_0_bool;
	if(var_629_bool != 0) {
		goto Label_10;
	}
	return 0;
}
EMIT "Return(); Pop(0)";


func_6664()
{
	SetVariable("ood1Grif9", (int)1);
	return 0;
}


func_7690(var_72_object, var_371_object, var_636_object, var_722_object, var_786_object, var_890_object, var_988_object, var_1040_object, var_1092_object, var_1144_object, var_1196_object, var_1248_object, var_1300_object)
{
	var_73_int = GlobalVars[2];
	var_74_int = 0;
	func_6465(var_74_int);
	var_80_bool = var_73_int != var_74_int;
	if(var_80_bool != 0) {
		func_7439();
		var_161_int = GlobalVars[2];
		func_6465((int)0);
		var_162_int = var_161_int;
		GlobalVars[2] = var_161_int;
	}
	var_163_bool = GlobalVars[1];
	var_164_bool = var_163_bool == 0; //@nz
	if(var_164_bool != 0) {
		var_165_int = 0; var_166_object = Obj();
		var_72_object = var_166_object;
		TaskCall(3);
		func_71(var_167_object, var_165_int, var_166_object);
		TaskReturn();
		var_274_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_275_bool = 0; var_276_int = 0;
	func_6482(var_275_bool, (int)1);
	if(var_275_bool != 0) {
		var_278_int = 0; var_279_string = "";
		func_6413(var_278_int, "d1q01");
		var_283_bool = var_278_int == (int)1;
		if(var_283_bool != 0) {
			var_284_int = 0; var_285_object = Obj();
			var_72_object = var_285_object;
			TaskCall(7);
			func_1771(var_286_object, var_284_int, var_285_object);
			TaskReturn();
			return 0;
		}
		var_369_int = 0; var_370_object = Obj();
		var_72_object = var_370_object;
		TaskCall(5);
		func_362(var_371_object, var_369_int, var_370_object);
		TaskReturn();
		var_594_bool = (int)1000 == var_371_object;
		if(var_594_bool != 0) {
			var_595_object = Obj();
			var_72_object = var_595_object;
			func_7671(var_595_object);
		}
		return 0;
	}
	var_631_bool = 0; var_632_int = 0;
	func_6482(var_631_bool, (int)2);
	if(var_631_bool != 0) {
		var_634_int = 0; var_635_object = Obj();
		var_72_object = var_635_object;
		TaskCall(9);
		func_2247(var_636_object, var_634_int, var_635_object);
		TaskReturn();
		var_715_bool = (int)1000 == var_636_object;
		if(var_715_bool != 0) {
			var_716_object = Obj();
			var_72_object = var_716_object;
			func_7671(var_716_object);
		}
		return 0;
	}
	var_717_bool = 0; var_718_int = 0;
	func_6482(var_717_bool, (int)3);
	if(var_717_bool != 0) {
		var_720_int = 0; var_721_object = Obj();
		var_72_object = var_721_object;
		TaskCall(13);
		func_3819(var_722_object, var_720_int, var_721_object);
		TaskReturn();
		var_779_bool = (int)1000 == var_722_object;
		if(var_779_bool != 0) {
			var_780_object = Obj();
			var_72_object = var_780_object;
			func_7671(var_780_object);
		}
		return 0;
	}
	var_781_bool = 0; var_782_int = 0;
	func_6482(var_781_bool, (int)4);
	if(var_781_bool != 0) {
		var_784_int = 0; var_785_object = Obj();
		var_72_object = var_785_object;
		TaskCall(11);
		func_2987(var_786_object, var_784_int, var_785_object);
		TaskReturn();
		var_883_bool = (int)1000 == var_786_object;
		if(var_883_bool != 0) {
			var_884_object = Obj();
			var_72_object = var_884_object;
			func_7671(var_884_object);
		}
		return 0;
	}
	var_885_bool = 0; var_886_int = 0;
	func_6482(var_885_bool, (int)5);
	if(var_885_bool != 0) {
		var_888_int = 0; var_889_object = Obj();
		var_72_object = var_889_object;
		TaskCall(15);
		func_4184(var_890_object, var_888_int, var_889_object);
		TaskReturn();
		var_981_bool = (int)1000 == var_890_object;
		if(var_981_bool != 0) {
			var_982_object = Obj();
			var_72_object = var_982_object;
			func_7671(var_982_object);
		}
		return 0;
	}
	var_983_bool = 0; var_984_int = 0;
	func_6482(var_983_bool, (int)6);
	if(var_983_bool != 0) {
		var_986_int = 0; var_987_object = Obj();
		var_72_object = var_987_object;
		TaskCall(17);
		func_4818(var_988_object, var_986_int, var_987_object);
		TaskReturn();
		var_1033_bool = (int)1000 == var_988_object;
		if(var_1033_bool != 0) {
			var_1034_object = Obj();
			var_72_object = var_1034_object;
			func_7671(var_1034_object);
		}
		return 0;
	}
	var_1035_bool = 0; var_1036_int = 0;
	func_6482(var_1035_bool, (int)7);
	if(var_1035_bool != 0) {
		var_1038_int = 0; var_1039_object = Obj();
		var_72_object = var_1039_object;
		TaskCall(19);
		func_5005(var_1040_object, var_1038_int, var_1039_object);
		TaskReturn();
		var_1085_bool = (int)1000 == var_1040_object;
		if(var_1085_bool != 0) {
			var_1086_object = Obj();
			var_72_object = var_1086_object;
			func_7671(var_1086_object);
		}
		return 0;
	}
	var_1087_bool = 0; var_1088_int = 0;
	func_6482(var_1087_bool, (int)8);
	if(var_1087_bool != 0) {
		var_1090_int = 0; var_1091_object = Obj();
		var_72_object = var_1091_object;
		TaskCall(21);
		func_5192(var_1092_object, var_1090_int, var_1091_object);
		TaskReturn();
		var_1137_bool = (int)1000 == var_1092_object;
		if(var_1137_bool != 0) {
			var_1138_object = Obj();
			var_72_object = var_1138_object;
			func_7671(var_1138_object);
		}
		return 0;
	}
	var_1139_bool = 0; var_1140_int = 0;
	func_6482(var_1139_bool, (int)9);
	if(var_1139_bool != 0) {
		var_1142_int = 0; var_1143_object = Obj();
		var_72_object = var_1143_object;
		TaskCall(25);
		func_5566(var_1144_object, var_1142_int, var_1143_object);
		TaskReturn();
		var_1189_bool = (int)1000 == var_1144_object;
		if(var_1189_bool != 0) {
			var_1190_object = Obj();
			var_72_object = var_1190_object;
			func_7671(var_1190_object);
		}
		return 0;
	}
	var_1191_bool = 0; var_1192_int = 0;
	func_6482(var_1191_bool, (int)10);
	if(var_1191_bool != 0) {
		var_1194_int = 0; var_1195_object = Obj();
		var_72_object = var_1195_object;
		TaskCall(23);
		func_5379(var_1196_object, var_1194_int, var_1195_object);
		TaskReturn();
		var_1241_bool = (int)1000 == var_1196_object;
		if(var_1241_bool != 0) {
			var_1242_object = Obj();
			var_72_object = var_1242_object;
			func_7671(var_1242_object);
		}
		return 0;
	}
	var_1243_bool = 0; var_1244_int = 0;
	func_6482(var_1243_bool, (int)11);
	if(var_1243_bool != 0) {
		var_1246_int = 0; var_1247_object = Obj();
		var_72_object = var_1247_object;
		TaskCall(27);
		func_5753(var_1248_object, var_1246_int, var_1247_object);
		TaskReturn();
		var_1293_bool = (int)1000 == var_1248_object;
		if(var_1293_bool != 0) {
			var_1294_object = Obj();
			var_72_object = var_1294_object;
			func_7671(var_1294_object);
		}
		return 0;
	}
	var_1295_bool = 0; var_1296_int = 0;
	func_6482(var_1295_bool, (int)12);
	if(var_1295_bool != 0) {
		var_1298_int = 0; var_1299_object = Obj();
		var_72_object = var_1299_object;
		TaskCall(29);
		func_5940(var_1300_object, var_1298_int, var_1299_object);
		TaskReturn();
		var_1351_bool = (int)1000 == var_1300_object;
		if(var_1351_bool != 0) {
			var_1352_object = Obj();
			var_72_object = var_1352_object;
			func_7671(var_1352_object);
		}
		return 0;
	}
	func_6488((bool)0);
	return 0;
}


func_6670()
{
	SetVariable("ood1Grif10", (int)1);
	return 0;
}


func_7183(var_193_bool)
{
	var_195_int = 0; var_196_string = "";
	func_6413(var_195_int, "d5q01");
	var_200_bool = var_195_int == (int)6;
	if(var_200_bool != 0) {
		var_193_bool = 1;
		return 0;
	}
	var_193_bool = 0;
	return 0;
}


func_6676()
{
	var_95_object = Obj(); var_96_object = Obj();
	func_7389(Obj());
	var_97_object = var_96_object;
	var_108_float = 0;
	func_6460(var_108_float);
	@@var_96_object:AddMark("d1q01GrifAboutRubin", "pt_map_rubin", (int)1, (int)8649, var_108_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7195(var_201_bool)
{
	var_203_int = 0; var_204_string = "";
	func_6413(var_203_int, "ood5Grif1");
	var_206_bool = var_203_int == (int)0;
	if(var_206_bool != 0) {
		var_201_bool = 1;
		return 0;
	}
	var_201_bool = 0;
	return 0;
}


func_6692(var_112_object)
{
	var_113_object = Obj(); var_114_string = ""; var_115_float = 0;
	func_7389(Obj());
	var_116_object = var_113_object;
	func_7406(var_113_object, "pt_map_rubin", (float)2);
	var_136_object = Obj();
	func_7389(var_136_object);
	@@var_112_object:ShowMap(var_136_object);
	return 0;
}


func_7207(var_221_bool, var_222_object)
{
	var_223_bool = 0; var_224_object = Obj();
	var_222_object = var_224_object;
	func_7336(var_223_bool, var_224_object);
	if(var_223_bool != 0) {
		var_221_bool = 1;
		return 0;
	}
	var_221_bool = 0;
	return 0;
}


func_7217(var_214_bool)
{
	var_216_int = 0; var_217_string = "";
	func_6413(var_216_int, "d5q01ThiefsWillHelp");
	var_219_bool = var_216_int == (int)1;
	if(var_219_bool != 0) {
		var_214_bool = 1;
		return 0;
	}
	var_214_bool = 0;
	return 0;
}


func_6708()
{
	SetVariable("ood4Grif1", (int)1);
	return 0;
}


func_5687(var_2_object, var_82_string)
{
	var_83_bool = 0;
	func_6501(var_83_bool);
	var_84_bool = var_83_bool == 0; //@nz
	if(var_84_bool != 0) {
		return 0;
	}
	var_85_bool = var_82_string == var_2_object;
	if(var_85_bool != 0) {
		return 0;
	}
	var_86_string = "";
	var_82_string = var_86_string;
	func_6378(var_86_string);
	var_2_object = var_82_string;
	return 0;
}


func_6714()
{
	var_83_object = Obj(); var_84_object = Obj();
	SetVariable("d4q03", (int)2);
	func_7389(Obj());
	var_87_object = var_84_object;
	var_98_float = 0;
	func_6460(var_98_float);
	@@var_84_object:AddMark("d4q03GrifGotoAlexandr", "pt_map_alexandr", (int)0, (int)15331, var_98_float);
	var_105_float = 0;
	func_6460(var_105_float);
	@@var_84_object:AddMark("d4q03GrifGotoAlexandrSelf", "pt_map_grif", (int)0, (int)15332, var_105_float);
	func_7632();
	return 2;
}
EMIT "Stack[-1] = 0";


func_7229(var_268_bool)
{
	var_270_int = 0; var_271_string = "";
	func_6413(var_270_int, "KnowBigVlad");
	var_273_bool = var_270_int == (int)1;
	if(var_273_bool != 0) {
		var_268_bool = 1;
		return 0;
	}
	var_268_bool = 0;
	return 0;
}


func_71(var_0_bool, var_165_int, var_166_object)
{
	var_168_object = Obj(); var_169_bool = 0; var_170_int = 0; var_171_bool = 0; var_172_object = Obj(); var_173_bool = 0; var_174_int = 0; var_175_bool = 0;
	var_0_bool = var_166_object;
	var_176_bool = 0; var_177_object = Obj();
	var_166_object = var_177_object;
	func_6266(var_176_bool, var_177_object);
	var_216_bool = var_176_bool == 0; //@nz
	if(var_216_bool != 0) {
		var_165_int = -2;
		return 8;
	}
	CreateDialog(var_172_object);
	var_217_int = 0;
	func_6497(var_217_int);
	@@var_172_object:SetNPCName(var_217_int);
	var_218_string = "";
	func_6499(var_218_string);
	@@var_172_object:SetPhoto(var_218_string);
	var_219_int = 0;
	func_7599(var_219_int);
	@@var_172_object:SetPlayerName(var_219_int);
	IsOverrideActive(var_173_bool);
	var_227_bool = var_173_bool;
	if(var_227_bool != 0) {
		var_165_int = -2;
		return 8;
	}
	DoDialog(var_172_object);
	var_228_object = Obj(); var_229_object = Obj();
	var_166_object = var_228_object;
	var_172_object = var_229_object;
	TaskCall(4);
	func_134(var_230_object, var_231_object, var_232_string, var_233_bool, var_228_object, var_229_object);
	TaskReturn();
	@@var_172_object:IsDialogEnd(var_175_bool);
	
Label_116:
	var_272_bool = var_175_bool == 0; //@nz
	if(var_272_bool != 0) {
		sync();
		@@var_172_object:IsDialogEnd(var_175_bool);
		goto Label_116;
	}
	var_166_object = Obj();
	func_6322();
	StopDialog(var_172_object);
	@@var_172_object:GetReturnValue((int)-1);
	var_174_int = var_165_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5192(var_0_bool, var_1090_int, var_1091_object)
{
	var_1093_object = Obj(); var_1094_bool = 0; var_1095_int = 0; var_1096_bool = 0; var_1097_object = Obj(); var_1098_bool = 0; var_1099_int = 0; var_1100_bool = 0;
	var_0_bool = var_1091_object;
	var_1101_bool = 0; var_1102_object = Obj();
	var_1091_object = var_1102_object;
	func_6266(var_1101_bool, var_1102_object);
	var_1103_bool = var_1101_bool == 0; //@nz
	if(var_1103_bool != 0) {
		var_1090_int = -2;
		return 8;
	}
	CreateDialog(var_1097_object);
	var_1104_int = 0;
	func_6497(var_1104_int);
	@@var_1097_object:SetNPCName(var_1104_int);
	var_1105_string = "";
	func_6499(var_1105_string);
	@@var_1097_object:SetPhoto(var_1105_string);
	var_1106_int = 0;
	func_7599(var_1106_int);
	@@var_1097_object:SetPlayerName(var_1106_int);
	IsOverrideActive(var_1098_bool);
	var_1107_bool = var_1098_bool;
	if(var_1107_bool != 0) {
		var_1090_int = -2;
		return 8;
	}
	DoDialog(var_1097_object);
	var_1108_object = Obj(); var_1109_object = Obj();
	var_1091_object = var_1108_object;
	var_1097_object = var_1109_object;
	TaskCall(22);
	func_5255(var_1110_object, var_1111_object, var_1112_string, var_1113_bool, var_1108_object, var_1109_object);
	TaskReturn();
	@@var_1097_object:IsDialogEnd(var_1100_bool);
	
Label_5237:
	var_1135_bool = var_1100_bool == 0; //@nz
	if(var_1135_bool != 0) {
		sync();
		@@var_1097_object:IsDialogEnd(var_1100_bool);
		goto Label_5237;
	}
	var_1091_object = Obj();
	func_6322();
	StopDialog(var_1097_object);
	@@var_1097_object:GetReturnValue((int)-1);
	var_1099_int = var_1090_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7241()
{
0x1c49: PushEmpty()
0x1c4a: PushEmpty(int, string)
0x1c4b: Stack[-1] = "ood2Grif5" // @poff=1515
0x1c4c: Call 0x190d
}


func_7253(var_332_bool)
{
	var_334_int = 0; var_335_string = "";
	func_6413(var_334_int, "KnowNotkin");
	var_337_bool = var_334_int == (int)1;
	if(var_337_bool != 0) {
		var_332_bool = 1;
		return 0;
	}
	var_332_bool = 0;
	return 0;
}


func_4184(var_0_bool, var_888_int, var_889_object)
{
	var_891_object = Obj(); var_892_bool = 0; var_893_int = 0; var_894_bool = 0; var_895_object = Obj(); var_896_bool = 0; var_897_int = 0; var_898_bool = 0;
	var_0_bool = var_889_object;
	var_899_bool = 0; var_900_object = Obj();
	var_889_object = var_900_object;
	func_6266(var_899_bool, var_900_object);
	var_901_bool = var_899_bool == 0; //@nz
	if(var_901_bool != 0) {
		var_888_int = -2;
		return 8;
	}
	CreateDialog(var_895_object);
	var_902_int = 0;
	func_6497(var_902_int);
	@@var_895_object:SetNPCName(var_902_int);
	var_903_string = "";
	func_6499(var_903_string);
	@@var_895_object:SetPhoto(var_903_string);
	var_904_int = 0;
	func_7599(var_904_int);
	@@var_895_object:SetPlayerName(var_904_int);
	IsOverrideActive(var_896_bool);
	var_905_bool = var_896_bool;
	if(var_905_bool != 0) {
		var_888_int = -2;
		return 8;
	}
	DoDialog(var_895_object);
	var_906_object = Obj(); var_907_object = Obj();
	var_889_object = var_906_object;
	var_895_object = var_907_object;
	TaskCall(16);
	func_4247(var_908_object, var_909_object, var_910_string, var_911_bool, var_906_object, var_907_object);
	TaskReturn();
	@@var_895_object:IsDialogEnd(var_898_bool);
	
Label_4229:
	var_979_bool = var_898_bool == 0; //@nz
	if(var_979_bool != 0) {
		sync();
		@@var_895_object:IsDialogEnd(var_898_bool);
		goto Label_4229;
	}
	var_889_object = Obj();
	func_6322();
	StopDialog(var_895_object);
	@@var_895_object:GetReturnValue((int)-1);
	var_897_int = var_888_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6746()
{
	SetVariable("ood4Grif2", (int)1);
	return 0;
}


func_6752()
{
	SetVariable("ood5Grif1", (int)1);
	return 0;
}


func_7265(var_99_bool)
{
	var_101_int = 0; var_102_string = "";
	func_6413(var_101_int, "ood12Grif1");
	var_106_bool = var_101_int == (int)0;
	if(var_106_bool != 0) {
		var_99_bool = 1;
		return 0;
	}
	var_99_bool = 0;
	return 0;
}


func_6242(var_152_object, var_153_string, var_154_int)
{
	var_155_int = 0; var_156_int = 0;
	@@var_152_object:GetProperty(var_153_string, var_156_int);
	var_157_int = var_156_int + var_154_int;
	@@var_152_object:SetProperty(var_153_string, var_157_int);
	return 2;
}


func_6758()
{
	var_113_object = Obj(); var_114_object = Obj();
	SetVariable("d5q01ThiefsWillHelp", (int)1);
	SetVariable("d5q01PlayCutscene", (int)1);
	func_7389(Obj());
	var_119_object = var_114_object;
	var_124_float = 0;
	func_6460(var_124_float);
	@@var_114_object:AddMark("d5q01GrifWillHelp", "pt_map_grif", (int)1, (int)15353, var_124_float);
	func_7648();
	return 2;
}
EMIT "Stack[-1] = 0";


func_6249(var_72_bool, var_73_object)
{
	var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_bool = 0; var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_bool = 0;
	@@var_73_object:GetPosition(var_78_cvector);
	GetPosition(var_79_cvector);
	var_80_cvector = var_78_cvector - var_79_cvector;
	var_82_float = GetByIndex(var_80_cvector, 0);
	var_83_float = GetByIndex(var_80_cvector, 2);
	Rotate(var_82_float, var_83_float, var_81_bool);
	var_81_bool = var_72_bool;
	return 8;
}


func_7277(var_316_bool)
{
	var_318_int = 0; var_319_string = "";
	func_6413(var_318_int, "KnowSpi4ka");
	var_321_bool = var_318_int == (int)1;
	if(var_321_bool != 0) {
		var_316_bool = 1;
		return 0;
	}
	var_316_bool = 0;
	return 0;
}


func_6261(var_73_bool)
{
	var_74_bool = 0; var_75_bool = 0;
	IsLoaded(var_75_bool);
	var_75_bool = var_73_bool;
	return 2;
}


func_3191(var_2_object, var_192_string)
{
	var_193_bool = 0;
	func_6501(var_193_bool);
	var_194_bool = var_193_bool == 0; //@nz
	if(var_194_bool != 0) {
		return 0;
	}
	var_195_bool = var_192_string == var_2_object;
	if(var_195_bool != 0) {
		return 0;
	}
	var_196_string = "";
	var_192_string = var_196_string;
	func_6378(var_196_string);
	var_2_object = var_192_string;
	return 0;
}


func_5753(var_0_bool, var_1246_int, var_1247_object)
{
	var_1249_object = Obj(); var_1250_bool = 0; var_1251_int = 0; var_1252_bool = 0; var_1253_object = Obj(); var_1254_bool = 0; var_1255_int = 0; var_1256_bool = 0;
	var_0_bool = var_1247_object;
	var_1257_bool = 0; var_1258_object = Obj();
	var_1247_object = var_1258_object;
	func_6266(var_1257_bool, var_1258_object);
	var_1259_bool = var_1257_bool == 0; //@nz
	if(var_1259_bool != 0) {
		var_1246_int = -2;
		return 8;
	}
	CreateDialog(var_1253_object);
	var_1260_int = 0;
	func_6497(var_1260_int);
	@@var_1253_object:SetNPCName(var_1260_int);
	var_1261_string = "";
	func_6499(var_1261_string);
	@@var_1253_object:SetPhoto(var_1261_string);
	var_1262_int = 0;
	func_7599(var_1262_int);
	@@var_1253_object:SetPlayerName(var_1262_int);
	IsOverrideActive(var_1254_bool);
	var_1263_bool = var_1254_bool;
	if(var_1263_bool != 0) {
		var_1246_int = -2;
		return 8;
	}
	DoDialog(var_1253_object);
	var_1264_object = Obj(); var_1265_object = Obj();
	var_1247_object = var_1264_object;
	var_1253_object = var_1265_object;
	TaskCall(28);
	func_5816(var_1266_object, var_1267_object, var_1268_string, var_1269_bool, var_1264_object, var_1265_object);
	TaskReturn();
	@@var_1253_object:IsDialogEnd(var_1256_bool);
	
Label_5798:
	var_1291_bool = var_1256_bool == 0; //@nz
	if(var_1291_bool != 0) {
		sync();
		@@var_1253_object:IsDialogEnd(var_1256_bool);
		goto Label_5798;
	}
	var_1247_object = Obj();
	func_6322();
	StopDialog(var_1253_object);
	@@var_1253_object:GetReturnValue((int)-1);
	var_1255_int = var_1246_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7289(var_284_bool)
{
	var_286_int = 0; var_287_string = "";
	func_6413(var_286_int, "KnowStamatins");
	var_289_bool = var_286_int == (int)1;
	if(var_289_bool != 0) {
		var_284_bool = 1;
		return 0;
	}
	var_284_bool = 0;
	return 0;
}


func_6266(var_176_bool, var_177_object)
{
	var_178_float = 0; var_179_cvector = CVector(0,0,0); var_180_cvector = CVector(0,0,0); var_181_cvector = CVector(0,0,0); var_182_cvector = CVector(0,0,0); var_183_cvector = CVector(0,0,0); var_184_cvector = CVector(0,0,0); var_185_bool = 0; var_186_float = 0; var_187_cvector = CVector(0,0,0); var_188_cvector = CVector(0,0,0); var_189_cvector = CVector(0,0,0); var_190_cvector = CVector(0,0,0); var_191_cvector = CVector(0,0,0); var_192_cvector = CVector(0,0,0); var_193_bool = 0;
	@@var_177_object:GetPosition(var_187_cvector);
	@@var_177_object:GetEyesHeight(var_186_float);
	var_194_float = GetByIndex(var_187_cvector, 1);
	var_194_float = var_194_float + var_186_float;
	SetByIndex(var_187_cvector, 1) = var_194_float;
	GetPosition(var_188_cvector);
	GetEyesHeight(var_186_float);
	var_195_float = GetByIndex(var_188_cvector, 1);
	var_195_float = var_195_float + var_186_float;
	SetByIndex(var_188_cvector, 1) = var_195_float;
	var_189_cvector = var_187_cvector - var_188_cvector;
	var_196_float = GetByIndex(var_189_cvector, 1);
	SetByIndex(var_189_cvector, 1) = (float)0;
	var_197_int = var_189_cvector | var_189_cvector;
	var_198_float = sqrt(var_197_int);
	var_189_cvector = var_189_cvector / var_198_float;
	var_190_cvector = -var_189_cvector;
	var_200_float = var_189_cvector * (int)70;
	var_201_cvector = CVector(0,0,0); var_202_cvector = CVector(0,0,0);
	var_202_cvector = var_190_cvector ^ CVector(0.0, 1.0, 0.0);
	func_6403(var_201_cvector, var_202_cvector);
	var_210_float = var_201_cvector * (int)25;
	var_211_int = var_200_float + var_210_float;
	var_191_cvector = var_211_int - CVector(0.0, 10.0, 0.0);
	var_192_cvector = var_188_cvector + var_191_cvector;
	IsOverrideActive(var_193_bool);
	var_213_bool = var_193_bool;
	if(var_213_bool != 0) {
		var_176_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_192_cvector, var_190_cvector);
	var_214_float = GetByIndex(var_191_cvector, 0);
	var_215_float = GetByIndex(var_191_cvector, 2);
	Rotate(var_214_float, var_215_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_176_bool = 1;
	return 16;
}


func_6785(var_78_object)
{
	@@var_78_object:SetReturnValue((int)1000);
	return 0;
}


func_7301(var_169_bool)
{
	var_169_bool = 0;
	return 0;
}


func_134(var_0_bool, var_1_object, var_2_object, var_3_object, var_228_object, var_229_object)
{
	var_0_bool = var_229_object;
	var_1_object = var_228_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_235_object = Obj(); var_236_object = Obj();
		var_235_object = var_1_object;
		var_236_object = var_0_bool;
		func_6790();
		var_239_string = "";
		func_202(var_229_object, "Neutral");
		@@@var_0_bool:SetMessage((int)383);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)384, (int)448, (int)445);
		@@@var_0_bool:AddReply((int)385, (int)449, (int)446);
		@@@var_0_bool:AddReply((int)386, (int)450, (int)447);
		goto Label_172;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x8a";
	}
Label_172:
	var_264_bool = 0;
	func_6501(var_264_bool);
	if(var_264_bool != 0) {

	Label_176:
		lshWaitForAnimEnd();
		var_265_object = var_3_object;
		if(var_265_object != 0) {
		} else {
			var_266_string = "";
			var_266_string = var_2_object;
			func_6378(var_266_string);
			goto Label_176;
	}
		PlayAnimation("all", "idle");

	Label_191:
		WaitForAnimEnd();
		var_269_object = var_3_object;
		if(var_269_object != 0) {
			goto Label_201;
		}
		PlayAnimation("all", "idle");
		goto Label_191;
	}
	goto Label_201;
	
Label_201:
	return 0;
	
}


func_6790()
{
	SetVariable("KnowGrif", (int)1);
	return 0;
}


func_5255(var_0_bool, var_1_object, var_2_object, var_3_object, var_1108_object, var_1109_object)
{
	var_0_bool = var_1109_object;
	var_1_object = var_1108_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1115_string = "";
		func_5313(var_1109_object, "Neutral");
		@@@var_0_bool:SetMessage((int)14130);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)14131, (int)-1, (int)15345);
		@@@var_0_bool:AddReply((int)14132, (int)-1, (int)15346);
		goto Label_5283;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x148b";
	}
Label_5283:
	var_1127_bool = 0;
	func_6501(var_1127_bool);
	if(var_1127_bool != 0) {

	Label_5287:
		lshWaitForAnimEnd();
		var_1128_object = var_3_object;
		if(var_1128_object != 0) {
		} else {
			var_1129_string = "";
			var_1129_string = var_2_object;
			func_6378(var_1129_string);
			goto Label_5287;
	}
		PlayAnimation("all", "idle");

	Label_5302:
		WaitForAnimEnd();
		var_1132_object = var_3_object;
		if(var_1132_object != 0) {
			goto Label_5312;
		}
		PlayAnimation("all", "idle");
		goto Label_5302;
	}
	goto Label_5312;
	
Label_5312:
	return 0;
	
}


func_7304(var_235_bool)
{
	var_237_int = 0;
	func_6474(var_237_int);
	var_243_bool = var_237_int >= (int)18;
	if(var_243_bool != 0) {
		var_235_bool = 1;
		return 0;
	}
	var_235_bool = 0;
	return 0;
}


func_6796()
{
	SetVariable("ood2Grif5", (int)1);
	return 0;
}


func_6802()
{
	SetVariable("ood12Grif1", (int)1);
	return 0;
}


func_7315(var_253_bool)
{
	var_255_bool = 0;
	var_255_bool = 0;
	var_256_int = 0;
	func_6474(var_256_int);
	var_258_bool = var_256_int >= (int)12;
	if(var_258_bool != 0) {
		var_259_int = 0;
		func_6474(var_259_int);
		var_261_bool = var_259_int < (int)18;
		if(var_261_bool != 0) {
			var_255_bool = 1;
		}
	}
	if(var_255_bool != 0) {
		var_253_bool = 1;
		return 0;
	}
	var_253_bool = 0;
	return 0;
}


func_4247(var_0_bool, var_1_object, var_2_object, var_3_object, var_906_object, var_907_object)
{
	var_0_bool = var_907_object;
	var_1_object = var_906_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_913_bool = 0; var_914_object = Obj();
		var_914_object = var_1_object;
		func_6997(var_913_bool, var_914_object);
		if(var_913_bool != 0) {
			var_915_string = "";
			func_4373(var_907_object, "Neutral");
			@@@var_0_bool:SetMessage((int)11720);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)11721, (int)12928, (int)12927);
		} else {
				var_932_string = "";
				func_4373(var_907_object, "Neutral");
				@@@var_0_bool:SetMessage((int)11704);
				@@@var_0_bool:ClearReplies();
				var_934_bool = 0;
				var_934_bool = 0;
				var_935_bool = 0; var_936_object = Obj();
				var_936_object = var_1_object;
				func_7183(var_936_object);
				if(var_935_bool != 0) {
					var_941_bool = 0; var_942_object = Obj();
					var_942_object = var_1_object;
					func_7195(var_942_object);
					if(var_941_bool != 0) {
						var_934_bool = 1;
					}
				}
				if(var_934_bool != 0) {
					@@@var_0_bool:AddReply((int)11705, (int)12910, (int)12909);
				}
				var_950_bool = 0;
				var_950_bool = 0;
				var_951_bool = 0;
				var_951_bool = 0;
				var_952_bool = 0; var_953_object = Obj();
				var_953_object = var_1_object;
				func_7183(var_953_object);
				if(var_952_bool != 0) {
					var_954_bool = 0; var_955_object = Obj();
					var_955_object = var_1_object;
					func_7217(var_955_object);
					var_960_bool = var_954_bool == 0; //@nz
					if(var_960_bool != 0) {
						var_951_bool = 1;
					}
				}
				if(var_951_bool != 0) {
					var_961_bool = 0; var_962_object = Obj();
					var_962_object = var_1_object;
					func_7207(var_961_bool, var_962_object);
					if(var_961_bool != 0) {
						var_950_bool = 1;
					}
				}
				if(var_950_bool != 0) {
					@@@var_0_bool:AddReply((int)11734, (int)12941, (int)12940);
				}
				@@@var_0_bool:AddReply((int)14120, (int)-1, (int)15334);
				@@@var_0_bool:AddReply((int)11739, (int)-1, (int)12945);
				goto Label_4343;
		}
	}
Label_4343:
	var_924_bool = 0;
	func_6501(var_924_bool);
	if(var_924_bool != 0) {

	Label_4347:
		lshWaitForAnimEnd();
		var_925_object = var_3_object;
		if(var_925_object != 0) {
		} else {
			var_926_string = "";
			var_926_string = var_2_object;
			func_6378(var_926_string);
			goto Label_4347;
	}
		PlayAnimation("all", "idle");

	Label_4362:
		WaitForAnimEnd();
		var_929_object = var_3_object;
		if(var_929_object != 0) {
			goto Label_4372;
		}
		PlayAnimation("all", "idle");
		goto Label_4362;

	}
	goto Label_4372;
	
Label_4372:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x109b";


func_6808()
{
	var_83_object = Obj(); var_84_object = Obj();
	func_7389(Obj());
	var_85_object = var_84_object;
	var_96_float = 0;
	func_6460(var_96_float);
	@@var_84_object:AddMark("d5q01GrifWantsMoney", "pt_map_grif", (int)1, (int)15350, var_96_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6824(var_150_object)
{
	var_152_float = 0; var_153_float = 0;
	@@var_150_object:GetProperty("money", var_153_float);
	var_153_float = var_153_float - (int)40000;
	var_157_bool = var_153_float < (int)0;
	if(var_157_bool != 0) {
		var_153_float = 0;
	}
	@@var_150_object:SetProperty("money", var_153_float);
	Trace("money 40000 removed");
	return 2;
}


func_7336(var_223_bool, var_224_object)
{
	var_225_float = 0; var_226_float = 0;
	@@var_224_object:GetProperty("money", var_226_float);
	var_229_bool = var_226_float >= (int)40000;
	if(var_229_bool != 0) {
		var_223_bool = 1;
		return 2;
	}
	var_223_bool = 0;
	return 2;
}


func_6322()
{
	CameraSwitchToNormal();
	return 0;
}


func_7347(var_140_object)
{
	var_141_object = Obj(); var_142_object = Obj();
	GetDiaryRoot(var_142_object);
	var_143_bool = var_142_object == 0; //@nz
	if(var_143_bool != 0) {
		Trace("Can't retrieve diary root");
		var_140_object = 0;
		return 2;
	}
	var_142_object = var_140_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_6326(var_596_bool, var_597_object)
{
	var_598_float = 0; var_599_cvector = CVector(0,0,0); var_600_cvector = CVector(0,0,0); var_601_cvector = CVector(0,0,0); var_602_cvector = CVector(0,0,0); var_603_cvector = CVector(0,0,0); var_604_cvector = CVector(0,0,0); var_605_bool = 0; var_606_float = 0; var_607_cvector = CVector(0,0,0); var_608_cvector = CVector(0,0,0); var_609_cvector = CVector(0,0,0); var_610_cvector = CVector(0,0,0); var_611_cvector = CVector(0,0,0); var_612_cvector = CVector(0,0,0); var_613_bool = 0;
	@@var_597_object:GetPosition(var_607_cvector);
	@@var_597_object:GetEyesHeight(var_606_float);
	var_614_float = GetByIndex(var_607_cvector, 1);
	var_614_float = var_614_float + var_606_float;
	SetByIndex(var_607_cvector, 1) = var_614_float;
	GetPosition(var_608_cvector);
	GetEyesHeight(var_606_float);
	var_615_float = GetByIndex(var_608_cvector, 1);
	var_615_float = var_615_float + var_606_float;
	SetByIndex(var_608_cvector, 1) = var_615_float;
	var_609_cvector = var_607_cvector - var_608_cvector;
	var_616_float = GetByIndex(var_609_cvector, 1);
	SetByIndex(var_609_cvector, 1) = (float)0;
	var_617_int = var_609_cvector | var_609_cvector;
	var_618_float = sqrt(var_617_int);
	var_609_cvector = var_609_cvector / var_618_float;
	var_610_cvector = -var_609_cvector;
	var_620_float = var_609_cvector * (int)70;
	var_611_cvector = var_620_float - CVector(0.0, 10.0, 0.0);
	var_612_cvector = var_608_cvector + var_611_cvector;
	IsOverrideActive(var_613_bool);
	var_622_bool = var_613_bool;
	if(var_622_bool != 0) {
		var_596_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_612_cvector, var_610_cvector);
	var_623_float = GetByIndex(var_611_cvector, 0);
	var_624_float = GetByIndex(var_611_cvector, 2);
	Rotate(var_623_float, var_624_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_596_bool = 1;
	return 16;
}


func_5816(var_0_bool, var_1_object, var_2_object, var_3_object, var_1264_object, var_1265_object)
{
	var_0_bool = var_1265_object;
	var_1_object = var_1264_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1271_string = "";
		func_5874(var_1265_object, "Neutral");
		@@@var_0_bool:SetMessage((int)14186);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)14187, (int)-1, (int)15401);
		@@@var_0_bool:AddReply((int)14188, (int)-1, (int)15402);
		goto Label_5844;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x16bc";
	}
Label_5844:
	var_1283_bool = 0;
	func_6501(var_1283_bool);
	if(var_1283_bool != 0) {

	Label_5848:
		lshWaitForAnimEnd();
		var_1284_object = var_3_object;
		if(var_1284_object != 0) {
		} else {
			var_1285_string = "";
			var_1285_string = var_2_object;
			func_6378(var_1285_string);
			goto Label_5848;
	}
		PlayAnimation("all", "idle");

	Label_5863:
		WaitForAnimEnd();
		var_1288_object = var_3_object;
		if(var_1288_object != 0) {
			goto Label_5873;
		}
		PlayAnimation("all", "idle");
		goto Label_5863;
	}
	goto Label_5873;
	
Label_5873:
	return 0;
	
}


func_6841(var_180_bool)
{
	var_182_int = 0; var_183_string = "";
	func_6413(var_182_int, "ood1Grif1");
	var_187_bool = var_182_int == (int)0;
	if(var_187_bool != 0) {
		var_180_bool = 1;
		return 0;
	}
	var_180_bool = 0;
	return 0;
}


func_703(var_2_object, var_188_string)
{
	var_189_bool = 0;
	func_6501(var_189_bool);
	var_190_bool = var_189_bool == 0; //@nz
	if(var_190_bool != 0) {
		return 0;
	}
	var_191_bool = var_188_string == var_2_object;
	if(var_191_bool != 0) {
		return 0;
	}
	var_192_string = "";
	var_188_string = var_192_string;
	func_6378(var_192_string);
	var_2_object = var_188_string;
	return 0;
}


func_7360(var_131_bool, var_132_object, var_133_int)
{
	var_134_object = Obj(); var_135_object = Obj(); var_136_int = 0; var_137_object = Obj(); var_138_object = Obj(); var_139_int = 0;
	func_7347(Obj());
	var_140_object = var_137_object;
	@@var_137_object:Find(var_133_int, var_138_object);
	var_145_bool = var_138_object == 0; //@nz
	if(var_145_bool != 0) {
		var_147_int = "Can't find diary parent with id: " + var_133_int;
		Trace(var_147_int);
		var_131_bool = 0;
		return 6;
	}
	@@var_138_object:AddChild(var_132_object);
	SetVariable("player_diary", (int)1);
	@@var_132_object:GetCategory(var_139_int);
	SetDiarySection(var_139_int);
	var_131_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_5313(var_2_object, var_82_string)
{
	var_83_bool = 0;
	func_6501(var_83_bool);
	var_84_bool = var_83_bool == 0; //@nz
	if(var_84_bool != 0) {
		return 0;
	}
	var_85_bool = var_82_string == var_2_object;
	if(var_85_bool != 0) {
		return 0;
	}
	var_86_string = "";
	var_82_string = var_86_string;
	func_6378(var_86_string);
	var_2_object = var_82_string;
	return 0;
}


func_6853(var_216_bool)
{
	var_218_int = 0; var_219_string = "";
	func_6413(var_218_int, "ood1Grif2");
	var_221_bool = var_218_int == (int)0;
	if(var_221_bool != 0) {
		var_216_bool = 1;
		return 0;
	}
	var_216_bool = 0;
	return 0;
}


func_2247(var_0_bool, var_634_int, var_635_object)
{
	var_637_object = Obj(); var_638_bool = 0; var_639_int = 0; var_640_bool = 0; var_641_object = Obj(); var_642_bool = 0; var_643_int = 0; var_644_bool = 0;
	var_0_bool = var_635_object;
	var_645_bool = 0; var_646_object = Obj();
	var_635_object = var_646_object;
	func_6266(var_645_bool, var_646_object);
	var_647_bool = var_645_bool == 0; //@nz
	if(var_647_bool != 0) {
		var_634_int = -2;
		return 8;
	}
	CreateDialog(var_641_object);
	var_648_int = 0;
	func_6497(var_648_int);
	@@var_641_object:SetNPCName(var_648_int);
	var_649_string = "";
	func_6499(var_649_string);
	@@var_641_object:SetPhoto(var_649_string);
	var_650_int = 0;
	func_7599(var_650_int);
	@@var_641_object:SetPlayerName(var_650_int);
	IsOverrideActive(var_642_bool);
	var_651_bool = var_642_bool;
	if(var_651_bool != 0) {
		var_634_int = -2;
		return 8;
	}
	DoDialog(var_641_object);
	var_652_object = Obj(); var_653_object = Obj();
	var_635_object = var_652_object;
	var_641_object = var_653_object;
	TaskCall(10);
	func_2310(var_654_object, var_655_object, var_656_string, var_657_bool, var_652_object, var_653_object);
	TaskReturn();
	@@var_641_object:IsDialogEnd(var_644_bool);
	
Label_2292:
	var_713_bool = var_644_bool == 0; //@nz
	if(var_713_bool != 0) {
		sync();
		@@var_641_object:IsDialogEnd(var_644_bool);
		goto Label_2292;
	}
	var_635_object = Obj();
	func_6322();
	StopDialog(var_641_object);
	@@var_641_object:GetReturnValue((int)-1);
	var_643_int = var_634_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_202(var_2_object, var_81_string)
{
	var_82_bool = 0;
	func_6501(var_82_bool);
	var_83_bool = var_82_bool == 0; //@nz
	if(var_83_bool != 0) {
		return 0;
	}
	var_84_bool = var_81_string == var_2_object;
	if(var_84_bool != 0) {
		return 0;
	}
	var_85_string = "";
	var_81_string = var_85_string;
	func_6378(var_85_string);
	var_2_object = var_81_string;
	return 0;
}


func_6865(var_244_bool)
{
	var_246_int = 0; var_247_string = "";
	func_6413(var_246_int, "ood1Grif3");
	var_249_bool = var_246_int == (int)0;
	if(var_249_bool != 0) {
		var_244_bool = 1;
		return 0;
	}
	var_244_bool = 0;
	return 0;
}


func_4818(var_0_bool, var_986_int, var_987_object)
{
	var_989_object = Obj(); var_990_bool = 0; var_991_int = 0; var_992_bool = 0; var_993_object = Obj(); var_994_bool = 0; var_995_int = 0; var_996_bool = 0;
	var_0_bool = var_987_object;
	var_997_bool = 0; var_998_object = Obj();
	var_987_object = var_998_object;
	func_6266(var_997_bool, var_998_object);
	var_999_bool = var_997_bool == 0; //@nz
	if(var_999_bool != 0) {
		var_986_int = -2;
		return 8;
	}
	CreateDialog(var_993_object);
	var_1000_int = 0;
	func_6497(var_1000_int);
	@@var_993_object:SetNPCName(var_1000_int);
	var_1001_string = "";
	func_6499(var_1001_string);
	@@var_993_object:SetPhoto(var_1001_string);
	var_1002_int = 0;
	func_7599(var_1002_int);
	@@var_993_object:SetPlayerName(var_1002_int);
	IsOverrideActive(var_994_bool);
	var_1003_bool = var_994_bool;
	if(var_1003_bool != 0) {
		var_986_int = -2;
		return 8;
	}
	DoDialog(var_993_object);
	var_1004_object = Obj(); var_1005_object = Obj();
	var_987_object = var_1004_object;
	var_993_object = var_1005_object;
	TaskCall(18);
	func_4881(var_1006_object, var_1007_object, var_1008_string, var_1009_bool, var_1004_object, var_1005_object);
	TaskReturn();
	@@var_993_object:IsDialogEnd(var_996_bool);
	
Label_4863:
	var_1031_bool = var_996_bool == 0; //@nz
	if(var_1031_bool != 0) {
		sync();
		@@var_993_object:IsDialogEnd(var_996_bool);
		goto Label_4863;
	}
	var_987_object = Obj();
	func_6322();
	StopDialog(var_993_object);
	@@var_993_object:GetReturnValue((int)-1);
	var_995_int = var_986_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6877(var_187_bool)
{
	var_189_int = 0; var_190_string = "";
	func_6413(var_189_int, "KnowEpidemic");
	var_192_bool = var_189_int == (int)1;
	if(var_192_bool != 0) {
		var_187_bool = 1;
		return 0;
	}
	var_187_bool = 0;
	return 0;
}


func_7389(var_85_object)
{
	var_86_object = Obj(); var_87_object = Obj(); var_88_object = Obj(); var_89_object = Obj();
	GetMainOutdoorScene(var_88_object);
	var_90_bool = var_88_object == 0; //@ne
	if(var_90_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_89_object = 0;
		var_89_object = var_85_object;
		return 4;
	}
	@@var_88_object:GetMap(var_89_object);
	var_89_object = var_85_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_6374()
{
	CameraSwitchToNormal();
	return 0;
}


func_6889(var_149_bool)
{
	var_151_int = 0; var_152_string = "";
	func_6413(var_151_int, "ood1GrifMQ1");
	var_156_bool = var_151_int == (int)0;
	if(var_156_bool != 0) {
		var_149_bool = 1;
		return 0;
	}
	var_149_bool = 0;
	return 0;
}


func_6378(var_77_string)
{
	var_78_float = 0; var_79_float = 0; var_80_float = 0; var_81_float = 0;
	var_83_int = "playing " + var_77_string;
	Trace(var_83_int);
	lshGetAnimTimes(var_77_string, var_80_float, var_81_float);
	lshPlayAnimation(var_80_float, var_81_float);
	var_85_int = "start: " + var_80_float;
	Trace(var_85_int);
	var_87_int = "end: " + var_81_float;
	Trace(var_87_int);
	return 4;
}


func_1771(var_0_bool, var_284_int, var_285_object)
{
	var_287_object = Obj(); var_288_bool = 0; var_289_int = 0; var_290_bool = 0; var_291_object = Obj(); var_292_bool = 0; var_293_int = 0; var_294_bool = 0;
	var_0_bool = var_285_object;
	var_295_bool = 0; var_296_object = Obj();
	var_285_object = var_296_object;
	func_6266(var_295_bool, var_296_object);
	var_297_bool = var_295_bool == 0; //@nz
	if(var_297_bool != 0) {
		var_284_int = -2;
		return 8;
	}
	CreateDialog(var_291_object);
	var_298_int = 0;
	func_6497(var_298_int);
	@@var_291_object:SetNPCName(var_298_int);
	var_299_string = "";
	func_6499(var_299_string);
	@@var_291_object:SetPhoto(var_299_string);
	var_300_int = 0;
	func_7599(var_300_int);
	@@var_291_object:SetPlayerName(var_300_int);
	IsOverrideActive(var_292_bool);
	var_301_bool = var_292_bool;
	if(var_301_bool != 0) {
		var_284_int = -2;
		return 8;
	}
	DoDialog(var_291_object);
	var_302_object = Obj(); var_303_object = Obj();
	var_285_object = var_302_object;
	var_291_object = var_303_object;
	TaskCall(8);
	func_1834(var_304_object, var_305_object, var_306_string, var_307_bool, var_302_object, var_303_object);
	TaskReturn();
	@@var_291_object:IsDialogEnd(var_294_bool);
	
Label_1816:
	var_366_bool = var_294_bool == 0; //@nz
	if(var_366_bool != 0) {
		sync();
		@@var_291_object:IsDialogEnd(var_294_bool);
		goto Label_1816;
	}
	var_285_object = Obj();
	func_6322();
	StopDialog(var_291_object);
	@@var_291_object:GetReturnValue((int)-1);
	var_293_int = var_284_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3819(var_0_bool, var_720_int, var_721_object)
{
	var_723_object = Obj(); var_724_bool = 0; var_725_int = 0; var_726_bool = 0; var_727_object = Obj(); var_728_bool = 0; var_729_int = 0; var_730_bool = 0;
	var_0_bool = var_721_object;
	var_731_bool = 0; var_732_object = Obj();
	var_721_object = var_732_object;
	func_6266(var_731_bool, var_732_object);
	var_733_bool = var_731_bool == 0; //@nz
	if(var_733_bool != 0) {
		var_720_int = -2;
		return 8;
	}
	CreateDialog(var_727_object);
	var_734_int = 0;
	func_6497(var_734_int);
	@@var_727_object:SetNPCName(var_734_int);
	var_735_string = "";
	func_6499(var_735_string);
	@@var_727_object:SetPhoto(var_735_string);
	var_736_int = 0;
	func_7599(var_736_int);
	@@var_727_object:SetPlayerName(var_736_int);
	IsOverrideActive(var_728_bool);
	var_737_bool = var_728_bool;
	if(var_737_bool != 0) {
		var_720_int = -2;
		return 8;
	}
	DoDialog(var_727_object);
	var_738_object = Obj(); var_739_object = Obj();
	var_721_object = var_738_object;
	var_727_object = var_739_object;
	TaskCall(14);
	func_3882(var_740_object, var_741_object, var_742_string, var_743_bool, var_738_object, var_739_object);
	TaskReturn();
	@@var_727_object:IsDialogEnd(var_730_bool);
	
Label_3864:
	var_777_bool = var_730_bool == 0; //@nz
	if(var_777_bool != 0) {
		sync();
		@@var_727_object:IsDialogEnd(var_730_bool);
		goto Label_3864;
	}
	var_721_object = Obj();
	func_6322();
	StopDialog(var_727_object);
	@@var_727_object:GetReturnValue((int)-1);
	var_729_int = var_720_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7406(var_113_object, var_114_string, var_115_float)
{
	var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0); var_119_object = Obj(); var_120_bool = 0; var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0); var_123_object = Obj(); var_124_bool = 0;
	GetMainOutdoorScene(var_123_object);
	var_125_bool = var_123_object == 0; //@ne
	if(var_125_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_123_object:GetLocator(var_114_string, var_124_bool, var_121_cvector, var_122_cvector);
	var_127_bool = var_124_bool == 0; //@nz
	if(var_127_bool != 0) {
		var_129_int = "Warning: outdoor scene locator " + var_114_string;
		var_131_int = var_129_int + " doesnt exist";
		Trace(var_131_int);
	}
	@@var_123_object:GetMap(var_113_object);
	var_132_bool = var_113_object == 0; //@ne
	if(var_132_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_134_float = GetByIndex(var_121_cvector, 0);
	var_135_float = GetByIndex(var_121_cvector, 2);
	@@var_113_object:SetMapParams(var_134_float, var_135_float, var_115_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_5874(var_2_object, var_82_string)
{
	var_83_bool = 0;
	func_6501(var_83_bool);
	var_84_bool = var_83_bool == 0; //@nz
	if(var_84_bool != 0) {
		return 0;
	}
	var_85_bool = var_82_string == var_2_object;
	if(var_85_bool != 0) {
		return 0;
	}
	var_86_string = "";
	var_82_string = var_86_string;
	func_6378(var_86_string);
	var_2_object = var_82_string;
	return 0;
}


func_6901(var_164_bool)
{
	var_166_int = 0; var_167_string = "";
	func_6413(var_166_int, "d1q01");
	var_169_bool = var_166_int == (int)1000;
	if(var_169_bool != 0) {
		var_164_bool = 1;
		return 0;
	}
	var_164_bool = 0;
	return 0;
}


func_6396()
{
	var_74_bool = 0;
	func_6501(var_74_bool);
	if(var_74_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_6913(var_157_bool)
{
	var_159_int = 0; var_160_string = "";
	func_6413(var_159_int, "d1q01");
	var_162_bool = var_159_int == (int)0;
	if(var_162_bool != 0) {
		var_157_bool = 1;
		return 0;
	}
	var_157_bool = 0;
	return 0;
}


func_6403(var_201_cvector, var_202_cvector)
{
	var_204_float = 0; var_205_float = 0;
	var_206_int = var_202_cvector | var_202_cvector;
	var_205_float = sqrt(var_206_int);
	var_207_float = 9.999999974752427e-07;
	var_208_bool = var_205_float < var_207_float;
	if(var_208_bool != 0) {
		var_201_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_201_cvector = var_202_cvector / var_205_float;
	return 2;
}


func_5379(var_0_bool, var_1194_int, var_1195_object)
{
	var_1197_object = Obj(); var_1198_bool = 0; var_1199_int = 0; var_1200_bool = 0; var_1201_object = Obj(); var_1202_bool = 0; var_1203_int = 0; var_1204_bool = 0;
	var_0_bool = var_1195_object;
	var_1205_bool = 0; var_1206_object = Obj();
	var_1195_object = var_1206_object;
	func_6266(var_1205_bool, var_1206_object);
	var_1207_bool = var_1205_bool == 0; //@nz
	if(var_1207_bool != 0) {
		var_1194_int = -2;
		return 8;
	}
	CreateDialog(var_1201_object);
	var_1208_int = 0;
	func_6497(var_1208_int);
	@@var_1201_object:SetNPCName(var_1208_int);
	var_1209_string = "";
	func_6499(var_1209_string);
	@@var_1201_object:SetPhoto(var_1209_string);
	var_1210_int = 0;
	func_7599(var_1210_int);
	@@var_1201_object:SetPlayerName(var_1210_int);
	IsOverrideActive(var_1202_bool);
	var_1211_bool = var_1202_bool;
	if(var_1211_bool != 0) {
		var_1194_int = -2;
		return 8;
	}
	DoDialog(var_1201_object);
	var_1212_object = Obj(); var_1213_object = Obj();
	var_1195_object = var_1212_object;
	var_1201_object = var_1213_object;
	TaskCall(24);
	func_5442(var_1214_object, var_1215_object, var_1216_string, var_1217_bool, var_1212_object, var_1213_object);
	TaskReturn();
	@@var_1201_object:IsDialogEnd(var_1204_bool);
	
Label_5424:
	var_1239_bool = var_1204_bool == 0; //@nz
	if(var_1239_bool != 0) {
		sync();
		@@var_1201_object:IsDialogEnd(var_1204_bool);
		goto Label_5424;
	}
	var_1195_object = Obj();
	func_6322();
	StopDialog(var_1201_object);
	@@var_1201_object:GetReturnValue((int)-1);
	var_1203_int = var_1194_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2310(var_0_bool, var_1_object, var_2_object, var_3_object, var_652_object, var_653_object)
{
	var_0_bool = var_653_object;
	var_1_object = var_652_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_659_string = "";
		func_2442(var_653_object, "Neutral");
		@@@var_0_bool:SetMessage((int)6959);
		@@@var_0_bool:ClearReplies();
		var_665_bool = 0;
		var_665_bool = 0;
		var_666_bool = 0; var_667_object = Obj();
		var_667_object = var_1_object;
		func_6949(var_667_object);
		if(var_666_bool != 0) {
			var_672_bool = 0; var_673_object = Obj();
			var_673_object = var_1_object;
			func_6985(var_673_object);
			if(var_672_bool != 0) {
				var_665_bool = 1;
			}
		}
		if(var_665_bool != 0) {
			@@@var_0_bool:AddReply((int)7328, (int)8080, (int)8079);
		}
		var_681_bool = 0; var_682_object = Obj();
		var_682_object = var_1_object;
		func_6961(var_682_object);
		if(var_681_bool != 0) {
			@@@var_0_bool:AddReply((int)7319, (int)8070, (int)8069);
		}
		@@@var_0_bool:AddReply((int)6970, (int)7678, (int)7677);
		var_693_bool = 0; var_694_object = Obj();
		var_694_object = var_1_object;
		func_6973(var_694_object);
		if(var_693_bool != 0) {
			@@@var_0_bool:AddReply((int)7335, (int)8049, (int)8087);
		}
		@@@var_0_bool:AddReply((int)7530, (int)-1, (int)8312);
		goto Label_2412;
	EMIT "PushEmpty(bool, object)";
	EMIT "Stack[-1] = Stack[1 + Tasks[-1].StackPointer]";
	EMIT "Call 0x1b19";
	EMIT "Pop(1)";
	EMIT "IF (Stack[-1] == 0) GOTO 0x96a; Pop(1)";
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=0";
	EMIT "Call 0x98a";
	EMIT "Pop(1)";
	EMIT "Push((int) 7314)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
	EMIT "Pop(0)";
	EMIT "PushEmpty(bool, object)";
	EMIT "Stack[-1] = Stack[1 + Tasks[-1].StackPointer]";
	EMIT "Call 0x1c49";
	EMIT "Pop(1)";
	EMIT "IF (Stack[-1] == 0) GOTO 0x95f; Pop(1)";
	EMIT "Push((int) 7315)";
	EMIT "Push((int) 8066)";
	EMIT "Push((int) 8065)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	}
Label_2412:
	var_705_bool = 0;
	func_6501(var_705_bool);
	if(var_705_bool != 0) {

	Label_2416:
		lshWaitForAnimEnd();
		var_706_object = var_3_object;
		if(var_706_object != 0) {
		} else {
			var_707_string = "";
			var_707_string = var_2_object;
			func_6378(var_707_string);
			goto Label_2416;
	}
		PlayAnimation("all", "idle");

	Label_2431:
		WaitForAnimEnd();
		var_710_object = var_3_object;
		if(var_710_object != 0) {
			goto Label_2441;
		}
		PlayAnimation("all", "idle");
		goto Label_2431;
	}
	goto Label_2441;
	
Label_2441:
	return 0;
	
}


func_6925(var_222_bool)
{
	var_224_int = 0; var_225_string = "";
	func_6413(var_224_int, "d1q01FirstGeorgVisit");
	var_227_bool = var_224_int == (int)1;
	if(var_227_bool != 0) {
		var_222_bool = 1;
		return 0;
	}
	var_222_bool = 0;
	return 0;
}


func_6413(var_101_int, var_102_string)
{
	var_103_int = 0; var_104_int = 0;
	GetVariable(var_102_string, var_104_int);
	var_104_int = var_101_int;
	return 2;
}


func_7439()
{
	var_81_bool = 0; var_82_int = 0; var_83_int = 0; var_84_bool = 0; var_85_int = 0; var_86_int = 0;
	ClearSubContainer((int)0);
	func_6465((int)0);
	var_88_int = var_86_int;
	var_89_int = 0; var_90_string = "";
	func_7594(var_89_int, "Rifle");
	AddItem(var_84_bool, var_89_int, (int)0, (int)1);
	var_95_int = 0; var_96_string = "";
	func_7594(var_95_int, "Revolver");
	AddItem(var_84_bool, var_95_int, (int)0, (int)1);
	var_99_int = 0; var_100_string = "";
	func_7594(var_99_int, "lockpick");
	AddItem(var_84_bool, var_99_int, (int)0, (int)1);
	irand(var_85_int, (int)3);
	var_85_int = var_85_int + (int)1;
	var_105_int = 0; var_106_string = "";
	func_7594(var_105_int, "Scalpel");
	AddItem(var_84_bool, var_105_int, (int)0, var_85_int);
	irand(var_85_int, (int)3);
	var_85_int = var_85_int + (int)1;
	var_110_int = 0; var_111_string = "";
	func_7594(var_110_int, "Knife");
	AddItem(var_84_bool, var_110_int, (int)0, var_85_int);
	irand(var_85_int, (int)10);
	var_115_bool = var_85_int != (int)0;
	if(var_115_bool != 0) {
		var_116_int = 0; var_117_string = "";
		func_7594(var_116_int, "revolver_ammo");
		AddItem(var_84_bool, var_116_int, (int)0, var_85_int);
	}
	irand(var_85_int, (int)10);
	var_121_bool = var_85_int != (int)0;
	if(var_121_bool != 0) {
		var_122_int = 0; var_123_string = "";
		func_7594(var_122_int, "rifle_ammo");
		AddItem(var_84_bool, var_122_int, (int)0, var_85_int);
	}
	irand(var_85_int, (int)10);
	var_127_bool = var_85_int != (int)0;
	if(var_127_bool != 0) {
		var_128_int = 0; var_129_string = "";
		func_7594(var_128_int, "tvirin");
		AddItem(var_84_bool, var_128_int, (int)0, var_85_int);
	}
	irand(var_85_int, (int)100);
	var_133_bool = var_85_int != (int)0;
	if(var_133_bool != 0) {
		var_134_int = 0; var_135_string = "";
		func_7594(var_134_int, "kerosene");
		AddItem(var_84_bool, var_134_int, (int)0, var_85_int);
	}
	var_138_bool = var_86_int >= (int)3;
	if(var_138_bool != 0) {
		var_139_int = 0; var_140_string = "";
		func_7594(var_139_int, "halfboot_repel");
		AddItem(var_84_bool, var_139_int, (int)0, (int)1);
		var_143_int = 0; var_144_string = "";
		func_7594(var_143_int, "boot_repel");
		AddItem(var_84_bool, var_143_int, (int)0, (int)1);
	}
	var_148_bool = var_86_int >= (int)9;
	if(var_148_bool != 0) {
		var_149_int = 0; var_150_string = "";
		func_7594(var_149_int, "boot_army");
		AddItem(var_84_bool, var_149_int, (int)0, (int)1);
		var_153_int = 0; var_154_string = "";
		func_7594(var_153_int, "balahon");
		AddItem(var_84_bool, var_153_int, (int)0, (int)1);
		var_157_int = 0; var_158_string = "";
		func_7594(var_157_int, "glove_army");
		AddItem(var_84_bool, var_157_int, (int)0, (int)1);
	}
	return 6;
}


func_4881(var_0_bool, var_1_object, var_2_object, var_3_object, var_1004_object, var_1005_object)
{
	var_0_bool = var_1005_object;
	var_1_object = var_1004_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1011_string = "";
		func_4939(var_1005_object, "Neutral");
		@@@var_0_bool:SetMessage((int)14122);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)14123, (int)-1, (int)15337);
		@@@var_0_bool:AddReply((int)14124, (int)-1, (int)15338);
		goto Label_4909;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1315";
	}
Label_4909:
	var_1023_bool = 0;
	func_6501(var_1023_bool);
	if(var_1023_bool != 0) {

	Label_4913:
		lshWaitForAnimEnd();
		var_1024_object = var_3_object;
		if(var_1024_object != 0) {
		} else {
			var_1025_string = "";
			var_1025_string = var_2_object;
			func_6378(var_1025_string);
			goto Label_4913;
	}
		PlayAnimation("all", "idle");

	Label_4928:
		WaitForAnimEnd();
		var_1028_object = var_3_object;
		if(var_1028_object != 0) {
			goto Label_4938;
		}
		PlayAnimation("all", "idle");
		goto Label_4928;
	}
	goto Label_4938;
	
Label_4938:
	return 0;
	
}


func_6418(var_83_string, var_84_bool)
{
	var_85_object = Obj(); var_86_object = Obj();
	FindActor(var_86_object, var_83_string);
	var_87_bool = var_86_object == 0; //@nz
	if(var_87_bool != 0) {
		var_89_int = "Door " + var_83_string;
		var_91_int = var_89_int + " not found";
		Trace(var_91_int);
	}
	@@var_86_object:SetProperty("locked", var_84_bool);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4373(var_2_object, var_171_string)
{
	var_172_bool = 0;
	func_6501(var_172_bool);
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
	func_6378(var_175_string);
	var_2_object = var_171_string;
	return 0;
}


func_6937()
{
0x1b19: PushEmpty()
0x1b1a: PushEmpty(int, string)
0x1b1b: Stack[-1] = "ood2Grif1" // @poff=650
0x1b1c: Call 0x190d
}


func_6434(var_118_object, var_119_object, var_120_int)
{
	var_121_int = 0; var_122_int = 0; var_123_bool = 0; var_124_int = 0; var_125_int = 0; var_126_bool = 0;
	@@var_119_object:GetItemID(var_124_int);
	GetInvItemProperty(var_125_int, var_124_int, "Category");
	@@var_118_object:AddItem(var_126_bool, var_119_object, var_125_int, var_120_int);
	var_128_bool = var_126_bool == 0; //@nz
	if(var_128_bool != 0) {
		@@var_118_object:DropItems(var_119_object, var_120_int);
	}
	return 6;
}


func_6949(var_212_bool)
{
	var_214_int = 0; var_215_string = "";
	func_6413(var_214_int, "ood2Grif2");
	var_219_bool = var_214_int == (int)0;
	if(var_219_bool != 0) {
		var_212_bool = 1;
		return 0;
	}
	var_212_bool = 0;
	return 0;
}


func_1834(var_0_bool, var_1_object, var_2_object, var_3_object, var_302_object, var_303_object)
{
	var_0_bool = var_303_object;
	var_1_object = var_302_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_309_bool = 0;
		var_309_bool = 0;
		var_310_bool = 0;
		var_310_bool = 0;
		var_311_bool = 0; var_312_object = Obj();
		var_312_object = var_1_object;
		func_6889(var_312_object);
		if(var_311_bool != 0) {
			var_317_bool = 0; var_318_object = Obj();
			var_318_object = var_1_object;
			func_6913(var_318_object);
			var_323_bool = var_317_bool == 0; //@nz
			if(var_323_bool != 0) {
				var_310_bool = 1;
			}
		}
		if(var_310_bool != 0) {
			var_324_bool = 0; var_325_object = Obj();
			var_325_object = var_1_object;
			func_6901(var_325_object);
			var_330_bool = var_324_bool == 0; //@nz
			if(var_330_bool != 0) {
				var_309_bool = 1;
			}
		}
		if(var_309_bool != 0) {
			var_331_string = "";
			func_1939(var_303_object, "Neutral");
			@@@var_0_bool:SetMessage((int)6175);
			@@@var_0_bool:ClearReplies();
			var_337_bool = 0; var_338_object = Obj();
			var_338_object = var_1_object;
			func_6877(var_338_object);
			var_343_bool = var_337_bool == 0; //@nz
			if(var_343_bool != 0) {
				@@@var_0_bool:AddReply((int)6176, (int)6824, (int)6823);
			}
			var_347_bool = 0; var_348_object = Obj();
			var_348_object = var_1_object;
			func_6877(var_348_object);
			var_349_bool = var_347_bool == 0; //@nz
			if(var_349_bool != 0) {
				@@@var_0_bool:AddReply((int)6179, (int)6831, (int)6829);
			}
			var_353_bool = 0; var_354_object = Obj();
			var_354_object = var_1_object;
			func_6877(var_354_object);
			if(var_353_bool != 0) {
				@@@var_0_bool:AddReply((int)6180, (int)6836, (int)6830);
			}
		} else {
				return 0;
		}
	}
	var_358_bool = 0;
	func_6501(var_358_bool);
	if(var_358_bool != 0) {

	Label_1913:
		lshWaitForAnimEnd();
		var_359_object = var_3_object;
		if(var_359_object != 0) {
		} else {
			var_360_string = "";
			var_360_string = var_2_object;
			func_6378(var_360_string);
			goto Label_1913;
	}
		PlayAnimation("all", "idle");

	Label_1928:
		WaitForAnimEnd();
		var_363_object = var_3_object;
		if(var_363_object != 0) {
			goto Label_1938;
		}
		PlayAnimation("all", "idle");
		goto Label_1928;

	}
	goto Label_1938;
	
Label_1938:
	return 0;
	
}
EMIT "GOTO 0x72e";


func_3882(var_0_bool, var_1_object, var_2_object, var_3_object, var_738_object, var_739_object)
{
	var_0_bool = var_739_object;
	var_1_object = var_738_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_745_string = "";
		func_3960(var_739_object, "Neutral");
		@@@var_0_bool:SetMessage((int)9843);
		@@@var_0_bool:ClearReplies();
		var_751_bool = 0; var_752_object = Obj();
		var_752_object = var_1_object;
		func_6997(var_751_bool, var_752_object);
		if(var_751_bool != 0) {
			@@@var_0_bool:AddReply((int)9844, (int)10844, (int)10843);
		}
		var_758_bool = 0; var_759_object = Obj();
		var_759_object = var_1_object;
		func_6997(var_758_bool, var_759_object);
		if(var_758_bool != 0) {
			@@@var_0_bool:AddReply((int)9848, (int)10848, (int)10847);
		}
		@@@var_0_bool:AddReply((int)14117, (int)-1, (int)15331);
		@@@var_0_bool:AddReply((int)14118, (int)-1, (int)15332);
		goto Label_3930;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xf2e";
	}
Label_3930:
	var_769_bool = 0;
	func_6501(var_769_bool);
	if(var_769_bool != 0) {

	Label_3934:
		lshWaitForAnimEnd();
		var_770_object = var_3_object;
		if(var_770_object != 0) {
		} else {
			var_771_string = "";
			var_771_string = var_2_object;
			func_6378(var_771_string);
			goto Label_3934;
	}
		PlayAnimation("all", "idle");

	Label_3949:
		WaitForAnimEnd();
		var_774_object = var_3_object;
		if(var_774_object != 0) {
			goto Label_3959;
		}
		PlayAnimation("all", "idle");
		goto Label_3949;
	}
	goto Label_3959;
	
Label_3959:
	return 0;
	
}


func_6447(var_132_object, var_133_string, var_134_int)
{
	var_135_object = Obj(); var_136_object = Obj();
	CreateInvItem(var_136_object);
	@@var_136_object:SetItemName(var_133_string);
	var_137_object = Obj(); var_138_object = Obj(); var_139_int = 0;
	var_132_object = var_137_object;
	var_136_object = var_138_object;
	var_134_int = var_139_int;
	func_6434(var_137_object, var_138_object, var_139_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6961(var_229_bool)
{
	var_231_int = 0; var_232_string = "";
	func_6413(var_231_int, "ood2Grif3");
	var_234_bool = var_231_int == (int)0;
	if(var_234_bool != 0) {
		var_229_bool = 1;
		return 0;
	}
	var_229_bool = 0;
	return 0;
}


func_5940(var_0_bool, var_1298_int, var_1299_object)
{
	var_1301_object = Obj(); var_1302_bool = 0; var_1303_int = 0; var_1304_bool = 0; var_1305_object = Obj(); var_1306_bool = 0; var_1307_int = 0; var_1308_bool = 0;
	var_0_bool = var_1299_object;
	var_1309_bool = 0; var_1310_object = Obj();
	var_1299_object = var_1310_object;
	func_6266(var_1309_bool, var_1310_object);
	var_1311_bool = var_1309_bool == 0; //@nz
	if(var_1311_bool != 0) {
		var_1298_int = -2;
		return 8;
	}
	CreateDialog(var_1305_object);
	var_1312_int = 0;
	func_6497(var_1312_int);
	@@var_1305_object:SetNPCName(var_1312_int);
	var_1313_string = "";
	func_6499(var_1313_string);
	@@var_1305_object:SetPhoto(var_1313_string);
	var_1314_int = 0;
	func_7599(var_1314_int);
	@@var_1305_object:SetPlayerName(var_1314_int);
	IsOverrideActive(var_1306_bool);
	var_1315_bool = var_1306_bool;
	if(var_1315_bool != 0) {
		var_1298_int = -2;
		return 8;
	}
	DoDialog(var_1305_object);
	var_1316_object = Obj(); var_1317_object = Obj();
	var_1299_object = var_1316_object;
	var_1305_object = var_1317_object;
	TaskCall(30);
	func_6003(var_1318_object, var_1319_object, var_1320_string, var_1321_bool, var_1316_object, var_1317_object);
	TaskReturn();
	@@var_1305_object:IsDialogEnd(var_1308_bool);
	
Label_5985:
	var_1349_bool = var_1308_bool == 0; //@nz
	if(var_1349_bool != 0) {
		sync();
		@@var_1305_object:IsDialogEnd(var_1308_bool);
		goto Label_5985;
	}
	var_1299_object = Obj();
	func_6322();
	StopDialog(var_1305_object);
	@@var_1305_object:GetReturnValue((int)-1);
	var_1307_int = var_1298_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6460(var_96_float)
{
	var_97_float = 0; var_98_float = 0;
	GetGameTime(var_98_float);
	var_98_float = var_96_float;
	return 2;
}


func_6973(var_241_bool)
{
	var_243_int = 0; var_244_string = "";
	func_6413(var_243_int, "ood2Grif4");
	var_246_bool = var_243_int == (int)0;
	if(var_246_bool != 0) {
		var_241_bool = 1;
		return 0;
	}
	var_241_bool = 0;
	return 0;
}


func_6465(var_74_int)
{
	var_75_float = 0; var_76_float = 0;
	GetGameTime(var_76_float);
	var_78_int = 0;
	var_78_int = var_76_float / (int)24;
	var_74_int = (int)1 + var_78_int;
	return 2;
}


func_5442(var_0_bool, var_1_object, var_2_object, var_3_object, var_1212_object, var_1213_object)
{
	var_0_bool = var_1213_object;
	var_1_object = var_1212_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1219_string = "";
		func_5500(var_1213_object, "Neutral");
		@@@var_0_bool:SetMessage((int)14134);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)14135, (int)-1, (int)15349);
		@@@var_0_bool:AddReply((int)14136, (int)-1, (int)15350);
		goto Label_5470;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1546";
	}
Label_5470:
	var_1231_bool = 0;
	func_6501(var_1231_bool);
	if(var_1231_bool != 0) {

	Label_5474:
		lshWaitForAnimEnd();
		var_1232_object = var_3_object;
		if(var_1232_object != 0) {
		} else {
			var_1233_string = "";
			var_1233_string = var_2_object;
			func_6378(var_1233_string);
			goto Label_5474;
	}
		PlayAnimation("all", "idle");

	Label_5489:
		WaitForAnimEnd();
		var_1236_object = var_3_object;
		if(var_1236_object != 0) {
			goto Label_5499;
		}
		PlayAnimation("all", "idle");
		goto Label_5489;
	}
	goto Label_5499;
	
Label_5499:
	return 0;
	
}


func_6985(var_220_bool)
{
	var_222_int = 0; var_223_string = "";
	func_6413(var_222_int, "d2q02");
	var_225_bool = var_222_int == (int)6;
	if(var_225_bool != 0) {
		var_220_bool = 1;
		return 0;
	}
	var_220_bool = 0;
	return 0;
}


func_6474(var_237_int)
{
	var_238_float = 0; var_239_float = 0;
	GetGameTime(var_239_float);
	var_240_int = 0;
	var_239_float = var_240_int;
	var_237_int = var_240_int % (int)24;
	return 2;
}


func_4939(var_2_object, var_82_string)
{
	var_83_bool = 0;
	func_6501(var_83_bool);
	var_84_bool = var_83_bool == 0; //@nz
	if(var_84_bool != 0) {
		return 0;
	}
	var_85_bool = var_82_string == var_2_object;
	if(var_85_bool != 0) {
		return 0;
	}
	var_86_string = "";
	var_82_string = var_86_string;
	func_6378(var_86_string);
	var_2_object = var_82_string;
	return 0;
}


func_6482(var_275_bool, var_276_int)
{
	var_277_int = 0;
	func_6465(var_277_int);
	var_275_bool = var_277_int == var_276_int;
	return 0;
}


func_6997(var_167_bool, var_168_object)
{
	var_169_bool = 0; var_170_object = Obj();
	var_168_object = var_170_object;
	func_7301(var_170_object);
	if(var_169_bool != 0) {
		var_167_bool = 1;
		return 0;
	}
	var_167_bool = 0;
	return 0;
}


func_6488(var_1353_bool)
{
	var_1354_bool = 0; var_1355_bool = 0;
	var_1356_string = "";
	func_6378("No");
	lshWaitForAnimEnd(var_1355_bool);
	var_1355_bool = var_1353_bool;
	return 2;
}


func_7007(var_348_bool)
{
	var_350_int = 0; var_351_string = "";
	func_6413(var_350_int, "KnowBurahDead");
	var_353_bool = var_350_int == (int)1;
	if(var_353_bool != 0) {
		var_348_bool = 1;
		return 0;
	}
	var_348_bool = 0;
	return 0;
}


func_6497(var_217_int)
{
	var_217_int = 2860;
	return 0;
}


func_6499(var_218_string)
{
	var_218_string = "ui/NPC_Grif.png";
	return 0;
}


func_6501(var_74_bool)
{
	var_74_bool = 1;
	return 0;
}


func_6503()
{
	SetVariable("ood1Grif1", (int)1);
	return 0;
}


func_362(var_0_bool, var_369_int, var_370_object)
{
	var_372_object = Obj(); var_373_bool = 0; var_374_int = 0; var_375_bool = 0; var_376_object = Obj(); var_377_bool = 0; var_378_int = 0; var_379_bool = 0;
	var_0_bool = var_370_object;
	var_380_bool = 0; var_381_object = Obj();
	var_370_object = var_381_object;
	func_6266(var_380_bool, var_381_object);
	var_382_bool = var_380_bool == 0; //@nz
	if(var_382_bool != 0) {
		var_369_int = -2;
		return 8;
	}
	CreateDialog(var_376_object);
	var_383_int = 0;
	func_6497(var_383_int);
	@@var_376_object:SetNPCName(var_383_int);
	var_384_string = "";
	func_6499(var_384_string);
	@@var_376_object:SetPhoto(var_384_string);
	var_385_int = 0;
	func_7599(var_385_int);
	@@var_376_object:SetPlayerName(var_385_int);
	IsOverrideActive(var_377_bool);
	var_386_bool = var_377_bool;
	if(var_386_bool != 0) {
		var_369_int = -2;
		return 8;
	}
	DoDialog(var_376_object);
	var_387_object = Obj(); var_388_object = Obj();
	var_370_object = var_387_object;
	var_376_object = var_388_object;
	TaskCall(6);
	func_425(var_389_object, var_390_object, var_391_string, var_392_bool, var_387_object, var_388_object);
	TaskReturn();
	@@var_376_object:IsDialogEnd(var_379_bool);
	
Label_407:
	var_592_bool = var_379_bool == 0; //@nz
	if(var_592_bool != 0) {
		sync();
		@@var_376_object:IsDialogEnd(var_379_bool);
		goto Label_407;
	}
	var_370_object = Obj();
	func_6322();
	StopDialog(var_376_object);
	@@var_376_object:GetReturnValue((int)-1);
	var_378_int = var_369_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7019(var_274_bool)
{
	var_276_int = 0; var_277_string = "";
	func_6413(var_276_int, "ood1Grif4");
	var_279_bool = var_276_int == (int)0;
	if(var_279_bool != 0) {
		var_274_bool = 1;
		return 0;
	}
	var_274_bool = 0;
	return 0;
}


func_6509()
{
	SetVariable("ood1Grif2", (int)1);
	return 0;
}


func_6515()
{
	SetVariable("ood1Grif3", (int)1);
	return 0;
}


func_6003(var_0_bool, var_1_object, var_2_object, var_3_object, var_1316_object, var_1317_object)
{
	var_0_bool = var_1317_object;
	var_1_object = var_1316_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1323_string = "";
		func_6066(var_1317_object, "Neutral");
		@@@var_0_bool:SetMessage((int)15251);
		@@@var_0_bool:ClearReplies();
		var_1329_bool = 0; var_1330_object = Obj();
		var_1330_object = var_1_object;
		func_7265(var_1330_object);
		if(var_1329_bool != 0) {
			@@@var_0_bool:AddReply((int)15252, (int)16531, (int)16529);
		}
		@@@var_0_bool:AddReply((int)15338, (int)-1, (int)16561);
		goto Label_6036;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1777";
	}
Label_6036:
	var_1341_bool = 0;
	func_6501(var_1341_bool);
	if(var_1341_bool != 0) {

	Label_6040:
		lshWaitForAnimEnd();
		var_1342_object = var_3_object;
		if(var_1342_object != 0) {
		} else {
			var_1343_string = "";
			var_1343_string = var_2_object;
			func_6378(var_1343_string);
			goto Label_6040;
	}
		PlayAnimation("all", "idle");

	Label_6055:
		WaitForAnimEnd();
		var_1346_object = var_3_object;
		if(var_1346_object != 0) {
			goto Label_6065;
		}
		PlayAnimation("all", "idle");
		goto Label_6055;
	}
	goto Label_6065;
	
Label_6065:
	return 0;
	
}


func_7031(var_290_bool)
{
	var_292_int = 0; var_293_string = "";
	func_6413(var_292_int, "ood1Grif5");
	var_295_bool = var_292_int == (int)0;
	if(var_295_bool != 0) {
		var_290_bool = 1;
		return 0;
	}
	var_290_bool = 0;
	return 0;
}


func_3960(var_2_object, var_82_string)
{
	var_83_bool = 0;
	func_6501(var_83_bool);
	var_84_bool = var_83_bool == 0; //@nz
	if(var_84_bool != 0) {
		return 0;
	}
	var_85_bool = var_82_string == var_2_object;
	if(var_85_bool != 0) {
		return 0;
	}
	var_86_string = "";
	var_82_string = var_86_string;
	func_6378(var_86_string);
	var_2_object = var_82_string;
	return 0;
}


func_6521()
{
	SetVariable("KnowEpidemic", (int)1);
	return 0;
}


func_5500(var_2_object, var_82_string)
{
	var_83_bool = 0;
	func_6501(var_83_bool);
	var_84_bool = var_83_bool == 0; //@nz
	if(var_84_bool != 0) {
		return 0;
	}
	var_85_bool = var_82_string == var_2_object;
	if(var_85_bool != 0) {
		return 0;
	}
	var_86_string = "";
	var_82_string = var_86_string;
	func_6378(var_86_string);
	var_2_object = var_82_string;
	return 0;
}


func_6527()
{
	SetVariable("ood1GrifMQ1", (int)1);
	return 0;
}


func_7043(var_306_bool)
{
	var_308_int = 0; var_309_string = "";
	func_6413(var_308_int, "ood1Grif6");
	var_311_bool = var_308_int == (int)0;
	if(var_311_bool != 0) {
		var_306_bool = 1;
		return 0;
	}
	var_306_bool = 0;
	return 0;
}


func_6533()
{
	var_83_string = ""; var_84_bool = 0;
	func_6418("warehouse_rubin@door1", (bool)0);
	return 0;
}


func_2442(var_2_object, var_195_string)
{
	var_196_bool = 0;
	func_6501(var_196_bool);
	var_197_bool = var_196_bool == 0; //@nz
	if(var_197_bool != 0) {
		return 0;
	}
	var_198_bool = var_195_string == var_2_object;
	if(var_198_bool != 0) {
		return 0;
	}
	var_199_string = "";
	var_195_string = var_199_string;
	func_6378(var_199_string);
	var_2_object = var_195_string;
	return 0;
}


func_6540(var_149_object)
{
	Trace("money10000 is given");
	var_152_object = Obj(); var_153_string = ""; var_154_int = 0;
	var_149_object = var_152_object;
	func_6242(var_152_object, "money", (int)10000);
	return 0;
}


func_5005(var_0_bool, var_1038_int, var_1039_object)
{
	var_1041_object = Obj(); var_1042_bool = 0; var_1043_int = 0; var_1044_bool = 0; var_1045_object = Obj(); var_1046_bool = 0; var_1047_int = 0; var_1048_bool = 0;
	var_0_bool = var_1039_object;
	var_1049_bool = 0; var_1050_object = Obj();
	var_1039_object = var_1050_object;
	func_6266(var_1049_bool, var_1050_object);
	var_1051_bool = var_1049_bool == 0; //@nz
	if(var_1051_bool != 0) {
		var_1038_int = -2;
		return 8;
	}
	CreateDialog(var_1045_object);
	var_1052_int = 0;
	func_6497(var_1052_int);
	@@var_1045_object:SetNPCName(var_1052_int);
	var_1053_string = "";
	func_6499(var_1053_string);
	@@var_1045_object:SetPhoto(var_1053_string);
	var_1054_int = 0;
	func_7599(var_1054_int);
	@@var_1045_object:SetPlayerName(var_1054_int);
	IsOverrideActive(var_1046_bool);
	var_1055_bool = var_1046_bool;
	if(var_1055_bool != 0) {
		var_1038_int = -2;
		return 8;
	}
	DoDialog(var_1045_object);
	var_1056_object = Obj(); var_1057_object = Obj();
	var_1039_object = var_1056_object;
	var_1045_object = var_1057_object;
	TaskCall(20);
	func_5068(var_1058_object, var_1059_object, var_1060_string, var_1061_bool, var_1056_object, var_1057_object);
	TaskReturn();
	@@var_1045_object:IsDialogEnd(var_1048_bool);
	
Label_5050:
	var_1083_bool = var_1048_bool == 0; //@nz
	if(var_1083_bool != 0) {
		sync();
		@@var_1045_object:IsDialogEnd(var_1048_bool);
		goto Label_5050;
	}
	var_1039_object = Obj();
	func_6322();
	StopDialog(var_1045_object);
	@@var_1045_object:GetReturnValue((int)-1);
	var_1047_int = var_1038_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7055(var_322_bool)
{
	var_324_int = 0; var_325_string = "";
	func_6413(var_324_int, "ood1Grif7");
	var_327_bool = var_324_int == (int)0;
	if(var_327_bool != 0) {
		var_322_bool = 1;
		return 0;
	}
	var_322_bool = 0;
	return 0;
}


func_1939(var_2_object, var_171_string)
{
	var_172_bool = 0;
	func_6501(var_172_bool);
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
	func_6378(var_175_string);
	var_2_object = var_171_string;
	return 0;
}


func_6551()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_7067(var_355_bool)
{
	var_357_int = 0; var_358_string = "";
	func_6413(var_357_int, "ood1Grif8");
	var_360_bool = var_357_int == (int)0;
	if(var_360_bool != 0) {
		var_355_bool = 1;
		return 0;
	}
	var_355_bool = 0;
	return 0;
}


func_6557()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_6563()
{
	SetVariable("ood2Grif1", (int)1);
	return 0;
}


func_7079(var_338_bool)
{
	var_340_int = 0; var_341_string = "";
	func_6413(var_340_int, "ood1Grif9");
	var_343_bool = var_340_int == (int)0;
	if(var_343_bool != 0) {
		var_338_bool = 1;
		return 0;
	}
	var_338_bool = 0;
	return 0;
}


func_425(var_0_bool, var_1_object, var_2_object, var_3_object, var_387_object, var_388_object)
{
	var_0_bool = var_388_object;
	var_1_object = var_387_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_394_bool = 0; var_395_object = Obj();
		var_395_object = var_1_object;
		func_6841(var_395_object);
		if(var_394_bool != 0) {
			var_400_string = "";
			func_703(var_388_object, "Neutral");
			@@@var_0_bool:SetMessage((int)5289);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)5290, (int)5832, (int)5831);
			@@@var_0_bool:AddReply((int)5300, (int)5836, (int)5841);
			@@@var_0_bool:AddReply((int)5301, (int)-1, (int)5843);
		} else {
				var_423_string = "";
				func_703(var_388_object, "Neutral");
				@@@var_0_bool:SetMessage((int)7666);
				@@@var_0_bool:ClearReplies();
				var_425_bool = 0;
				var_425_bool = 0;
				var_426_bool = 0; var_427_object = Obj();
				var_427_object = var_1_object;
				func_6853(var_427_object);
				if(var_426_bool != 0) {
					var_432_bool = 0; var_433_object = Obj();
					var_433_object = var_1_object;
					func_6925(var_433_object);
					if(var_432_bool != 0) {
						var_425_bool = 1;
					}
				}
				if(var_425_bool != 0) {
					@@@var_0_bool:AddReply((int)7667, (int)8496, (int)8462);
				}
				var_441_bool = 0;
				var_441_bool = 1;
				var_442_bool = 0;
				var_442_bool = 0;
				var_443_bool = 0; var_444_object = Obj();
				var_444_object = var_1_object;
				func_7115(var_443_bool, var_444_object);
				if(var_443_bool != 0) {
					var_454_bool = 0; var_455_object = Obj();
					var_455_object = var_1_object;
					func_6865(var_455_object);
					if(var_454_bool != 0) {
						var_442_bool = 1;
					}
				}
				if(var_442_bool != 1) {
					var_460_bool = 0;
					var_460_bool = 0;
					var_461_bool = 0; var_462_object = Obj();
					var_462_object = var_1_object;
					func_7173(var_461_bool, var_462_object);
					if(var_461_bool != 0) {
						var_472_bool = 0; var_473_object = Obj();
						var_473_object = var_1_object;
						func_6865(var_473_object);
						if(var_472_bool != 0) {
							var_460_bool = 1;
						}
					}
					if(var_460_bool != 1) {
						var_441_bool = 0;
					}
				}
				if(var_441_bool != 0) {
					@@@var_0_bool:AddReply((int)7668, (int)8504, (int)8463);
				}
				var_477_bool = 0;
				var_477_bool = 0;
				var_478_bool = 0; var_479_object = Obj();
				var_479_object = var_1_object;
				func_7229(var_479_object);
				if(var_478_bool != 0) {
					var_484_bool = 0; var_485_object = Obj();
					var_485_object = var_1_object;
					func_7019(var_485_object);
					if(var_484_bool != 0) {
						var_477_bool = 1;
					}
				}
				if(var_477_bool != 0) {
					@@@var_0_bool:AddReply((int)7681, (int)8498, (int)8476);
				}
				var_493_bool = 0;
				var_493_bool = 0;
				var_494_bool = 0; var_495_object = Obj();
				var_495_object = var_1_object;
				func_7289(var_495_object);
				if(var_494_bool != 0) {
					var_500_bool = 0; var_501_object = Obj();
					var_501_object = var_1_object;
					func_7031(var_501_object);
					if(var_500_bool != 0) {
						var_493_bool = 1;
					}
				}
				if(var_493_bool != 0) {
					@@@var_0_bool:AddReply((int)7686, (int)8499, (int)8481);
				}
				var_509_bool = 0;
				var_509_bool = 0;
				var_510_bool = 0; var_511_object = Obj();
				var_511_object = var_1_object;
				func_7103(var_511_object);
				if(var_510_bool != 0) {
					var_516_bool = 0; var_517_object = Obj();
					var_517_object = var_1_object;
					func_7043(var_517_object);
					if(var_516_bool != 0) {
						var_509_bool = 1;
					}
				}
				if(var_509_bool != 0) {
					@@@var_0_bool:AddReply((int)7687, (int)8500, (int)8482);
				}
				var_525_bool = 0;
				var_525_bool = 0;
				var_526_bool = 0; var_527_object = Obj();
				var_527_object = var_1_object;
				func_7277(var_527_object);
				if(var_526_bool != 0) {
					var_532_bool = 0; var_533_object = Obj();
					var_533_object = var_1_object;
					func_7055(var_533_object);
					if(var_532_bool != 0) {
						var_525_bool = 1;
					}
				}
				if(var_525_bool != 0) {
					@@@var_0_bool:AddReply((int)7691, (int)8501, (int)8486);
				}
				var_541_bool = 0;
				var_541_bool = 0;
				var_542_bool = 0; var_543_object = Obj();
				var_543_object = var_1_object;
				func_7253(var_543_object);
				if(var_542_bool != 0) {
					var_548_bool = 0; var_549_object = Obj();
					var_549_object = var_1_object;
					func_7079(var_549_object);
					if(var_548_bool != 0) {
						var_541_bool = 1;
					}
				}
				if(var_541_bool != 0) {
					@@@var_0_bool:AddReply((int)7692, (int)8502, (int)8487);
				}
				var_557_bool = 0;
				var_557_bool = 0;
				var_558_bool = 0; var_559_object = Obj();
				var_559_object = var_1_object;
				func_7007(var_559_object);
				var_564_bool = var_558_bool == 0; //@nz
				if(var_564_bool != 0) {
					var_565_bool = 0; var_566_object = Obj();
					var_566_object = var_1_object;
					func_7067(var_566_object);
					if(var_565_bool != 0) {
						var_557_bool = 1;
					}
				}
				if(var_557_bool != 0) {
					@@@var_0_bool:AddReply((int)7693, (int)5818, (int)8488);
				}
				var_574_bool = 0;
				var_574_bool = 0;
				var_575_bool = 0; var_576_object = Obj();
				var_576_object = var_1_object;
				func_7007(var_576_object);
				if(var_575_bool != 0) {
					var_577_bool = 0; var_578_object = Obj();
					var_578_object = var_1_object;
					func_7091(var_578_object);
					if(var_577_bool != 0) {
						var_574_bool = 1;
					}
				}
				if(var_574_bool != 0) {
					@@@var_0_bool:AddReply((int)7694, (int)8491, (int)8489);
				}
				@@@var_0_bool:AddReply((int)14114, (int)-1, (int)15328);
				@@@var_0_bool:AddReply((int)8702, (int)-1, (int)9539);
				goto Label_673;
		}
	}
Label_673:
	var_415_bool = 0;
	func_6501(var_415_bool);
	if(var_415_bool != 0) {

	Label_677:
		lshWaitForAnimEnd();
		var_416_object = var_3_object;
		if(var_416_object != 0) {
		} else {
			var_417_string = "";
			var_417_string = var_2_object;
			func_6378(var_417_string);
			goto Label_677;
	}
		PlayAnimation("all", "idle");

	Label_692:
		WaitForAnimEnd();
		var_420_object = var_3_object;
		if(var_420_object != 0) {
			goto Label_702;
		}
		PlayAnimation("all", "idle");
		goto Label_692;

	}
	goto Label_702;
	
Label_702:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1ad";


func_6569()
{
	SetVariable("ood2Grif2", (int)1);
	return 0;
}


func_7594(var_89_int, var_90_string)
{
	var_91_int = 0; var_92_int = 0;
	GetInvItemByName(var_92_int, var_90_string);
	var_92_int = var_89_int;
	return 2;
}


func_2987(var_0_bool, var_784_int, var_785_object)
{
	var_787_object = Obj(); var_788_bool = 0; var_789_int = 0; var_790_bool = 0; var_791_object = Obj(); var_792_bool = 0; var_793_int = 0; var_794_bool = 0;
	var_0_bool = var_785_object;
	var_795_bool = 0; var_796_object = Obj();
	var_785_object = var_796_object;
	func_6266(var_795_bool, var_796_object);
	var_797_bool = var_795_bool == 0; //@nz
	if(var_797_bool != 0) {
		var_784_int = -2;
		return 8;
	}
	CreateDialog(var_791_object);
	var_798_int = 0;
	func_6497(var_798_int);
	@@var_791_object:SetNPCName(var_798_int);
	var_799_string = "";
	func_6499(var_799_string);
	@@var_791_object:SetPhoto(var_799_string);
	var_800_int = 0;
	func_7599(var_800_int);
	@@var_791_object:SetPlayerName(var_800_int);
	IsOverrideActive(var_792_bool);
	var_801_bool = var_792_bool;
	if(var_801_bool != 0) {
		var_784_int = -2;
		return 8;
	}
	DoDialog(var_791_object);
	var_802_object = Obj(); var_803_object = Obj();
	var_785_object = var_802_object;
	var_791_object = var_803_object;
	TaskCall(12);
	func_3050(var_804_object, var_805_object, var_806_string, var_807_bool, var_802_object, var_803_object);
	TaskReturn();
	@@var_791_object:IsDialogEnd(var_794_bool);
	
Label_3032:
	var_881_bool = var_794_bool == 0; //@nz
	if(var_881_bool != 0) {
		sync();
		@@var_791_object:IsDialogEnd(var_794_bool);
		goto Label_3032;
	}
	var_785_object = Obj();
	func_6322();
	StopDialog(var_791_object);
	@@var_791_object:GetReturnValue((int)-1);
	var_793_int = var_784_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7599(var_219_int)
{
	var_220_int = 0; var_221_int = 0;
	GetVariable("player", var_221_int);
	var_224_bool = var_221_int == (int)0;
	if(var_224_bool != 0) {
		var_219_int = 200001;
		return 2;
	EMIT "GOTO 0x1dbe";
	}
	var_226_bool = var_221_int == (int)1;
	if(var_226_bool != 0) {
		var_219_int = 200002;
		return 2;
	}
	var_219_int = 200003;
	return 2;
}


func_6575()
{
	SetVariable("ood2Grif3", (int)1);
	return 0;
}


func_6066(var_2_object, var_83_string)
{
	var_84_bool = 0;
	func_6501(var_84_bool);
	var_85_bool = var_84_bool == 0; //@nz
	if(var_85_bool != 0) {
		return 0;
	}
	var_86_bool = var_83_string == var_2_object;
	if(var_86_bool != 0) {
		return 0;
	}
	var_87_string = "";
	var_83_string = var_87_string;
	func_6378(var_87_string);
	var_2_object = var_83_string;
	return 0;
}


func_7091(var_367_bool)
{
	var_369_int = 0; var_370_string = "";
	func_6413(var_369_int, "ood1Grif10");
	var_372_bool = var_369_int == (int)0;
	if(var_372_bool != 0) {
		var_367_bool = 1;
		return 0;
	}
	var_367_bool = 0;
	return 0;
}


func_6581()
{
	SetVariable("ood2Grif4", (int)1);
	return 0;
}


func_6587()
{
	SetVariable("d2q02", (int)7);
	func_7616();
	return 0;
}


func_5566(var_0_bool, var_1142_int, var_1143_object)
{
	var_1145_object = Obj(); var_1146_bool = 0; var_1147_int = 0; var_1148_bool = 0; var_1149_object = Obj(); var_1150_bool = 0; var_1151_int = 0; var_1152_bool = 0;
	var_0_bool = var_1143_object;
	var_1153_bool = 0; var_1154_object = Obj();
	var_1143_object = var_1154_object;
	func_6266(var_1153_bool, var_1154_object);
	var_1155_bool = var_1153_bool == 0; //@nz
	if(var_1155_bool != 0) {
		var_1142_int = -2;
		return 8;
	}
	CreateDialog(var_1149_object);
	var_1156_int = 0;
	func_6497(var_1156_int);
	@@var_1149_object:SetNPCName(var_1156_int);
	var_1157_string = "";
	func_6499(var_1157_string);
	@@var_1149_object:SetPhoto(var_1157_string);
	var_1158_int = 0;
	func_7599(var_1158_int);
	@@var_1149_object:SetPlayerName(var_1158_int);
	IsOverrideActive(var_1150_bool);
	var_1159_bool = var_1150_bool;
	if(var_1159_bool != 0) {
		var_1142_int = -2;
		return 8;
	}
	DoDialog(var_1149_object);
	var_1160_object = Obj(); var_1161_object = Obj();
	var_1143_object = var_1160_object;
	var_1149_object = var_1161_object;
	TaskCall(26);
	func_5629(var_1162_object, var_1163_object, var_1164_string, var_1165_bool, var_1160_object, var_1161_object);
	TaskReturn();
	@@var_1149_object:IsDialogEnd(var_1152_bool);
	
Label_5611:
	var_1187_bool = var_1152_bool == 0; //@nz
	if(var_1187_bool != 0) {
		sync();
		@@var_1149_object:IsDialogEnd(var_1152_bool);
		goto Label_5611;
	}
	var_1143_object = Obj();
	func_6322();
	StopDialog(var_1149_object);
	@@var_1149_object:GetReturnValue((int)-1);
	var_1151_int = var_1142_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7103(var_300_bool)
{
	var_302_int = 0; var_303_string = "";
	func_6413(var_302_int, "KnowRubin");
	var_305_bool = var_302_int == (int)1;
	if(var_305_bool != 0) {
		var_300_bool = 1;
		return 0;
	}
	var_300_bool = 0;
	return 0;
}


func_7616()
{
	var_85_object = Obj(); var_86_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_86_object, (int)132, (int)2, (int)15269);
	var_91_bool = 0; var_92_object = Obj(); var_93_int = 0;
	var_86_object = var_92_object;
	func_7360(var_91_bool, var_92_object, (int)11);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6596(var_110_object)
{
	var_112_object = Obj(); var_113_object = Obj();
	Trace("Revolver is given");
	CreateInvItem(var_113_object);
	@@var_113_object:SetItemName("Revolver");
	@@var_113_object:SetProperty("durability", (int)30);
	var_118_object = Obj(); var_119_object = Obj(); var_120_int = 0;
	var_110_object = var_118_object;
	var_113_object = var_119_object;
	func_6434(var_118_object, var_119_object, (int)1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7115(var_233_bool, var_234_object)
{
	var_235_bool = 0; var_236_object = Obj();
	var_234_object = var_236_object;
	func_7304(var_236_object);
	if(var_235_bool != 0) {
		var_233_bool = 1;
		return 0;
	}
	var_233_bool = 0;
	return 0;
}


func_5068(var_0_bool, var_1_object, var_2_object, var_3_object, var_1056_object, var_1057_object)
{
	var_0_bool = var_1057_object;
	var_1_object = var_1056_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1063_string = "";
		func_5126(var_1057_object, "Neutral");
		@@@var_0_bool:SetMessage((int)14126);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)14127, (int)-1, (int)15341);
		@@@var_0_bool:AddReply((int)14128, (int)-1, (int)15342);
		goto Label_5096;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x13d0";
	}
Label_5096:
	var_1075_bool = 0;
	func_6501(var_1075_bool);
	if(var_1075_bool != 0) {

	Label_5100:
		lshWaitForAnimEnd();
		var_1076_object = var_3_object;
		if(var_1076_object != 0) {
		} else {
			var_1077_string = "";
			var_1077_string = var_2_object;
			func_6378(var_1077_string);
			goto Label_5100;
	}
		PlayAnimation("all", "idle");

	Label_5115:
		WaitForAnimEnd();
		var_1080_object = var_3_object;
		if(var_1080_object != 0) {
			goto Label_5125;
		}
		PlayAnimation("all", "idle");
		goto Label_5115;
	}
	goto Label_5125;
	
Label_5125:
	return 0;
	
}


func_7632()
{
	var_106_object = Obj(); var_107_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_107_object, (int)97, (int)2, (int)12179);
	var_112_bool = 0; var_113_object = Obj(); var_114_int = 0;
	var_107_object = var_113_object;
	func_7360(var_112_bool, var_113_object, (int)22);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7125(var_178_bool)
{
	var_180_int = 0; var_181_string = "";
	func_6413(var_180_int, "d4q03");
	var_185_bool = var_180_int == (int)1;
	if(var_185_bool != 0) {
		var_178_bool = 1;
		return 0;
	}
	var_178_bool = 0;
	return 0;
}


func_6617(var_129_object)
{
	Trace("revolver ammo2 is given");
	var_132_object = Obj(); var_133_string = ""; var_134_int = 0;
	var_129_object = var_132_object;
	func_6447(var_132_object, "revolver_ammo", (int)2);
	return 0;
}


func_7648()
{
	var_125_object = Obj(); var_126_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_126_object, (int)145, (int)1, (int)15345);
	var_131_bool = 0; var_132_object = Obj(); var_133_int = 0;
	var_126_object = var_132_object;
	func_7360(var_131_bool, var_132_object, (int)139);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7137(var_186_bool)
{
	var_188_int = 0; var_189_string = "";
	func_6413(var_188_int, "ood4Grif1");
	var_191_bool = var_188_int == (int)0;
	if(var_191_bool != 0) {
		var_186_bool = 1;
		return 0;
	}
	var_186_bool = 0;
	return 0;
}


func_6628()
{
	SetVariable("KnowBurahDead", (int)1);
	return 0;
}


func_6634()
{
	SetVariable("ood1Grif4", (int)1);
	return 0;
}


func_3050(var_0_bool, var_1_object, var_2_object, var_3_object, var_802_object, var_803_object)
{
	var_0_bool = var_803_object;
	var_1_object = var_802_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_809_bool = 0;
		var_809_bool = 0;
		var_810_bool = 0; var_811_object = Obj();
		var_811_object = var_1_object;
		func_7125(var_811_object);
		if(var_810_bool != 0) {
			var_816_bool = 0; var_817_object = Obj();
			var_817_object = var_1_object;
			func_7137(var_817_object);
			if(var_816_bool != 0) {
				var_809_bool = 1;
			}
		}
		if(var_809_bool != 0) {
			var_822_string = "";
			func_3191(var_803_object, "Neutral");
			@@@var_0_bool:SetMessage((int)10952);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)10953, (int)12113, (int)12112);
			@@@var_0_bool:AddReply((int)10960, (int)12113, (int)12119);
		} else {
				var_842_string = "";
				func_3191(var_803_object, "Neutral");
				@@@var_0_bool:SetMessage((int)9615);
				@@@var_0_bool:ClearReplies();
				var_844_bool = 0;
				var_844_bool = 0;
				var_845_bool = 0; var_846_object = Obj();
				var_846_object = var_1_object;
				func_7149(var_846_object);
				if(var_845_bool != 0) {
					var_851_bool = 0; var_852_object = Obj();
					var_852_object = var_1_object;
					func_7161(var_852_object);
					if(var_851_bool != 0) {
						var_844_bool = 1;
					}
				}
				if(var_844_bool != 0) {
					@@@var_0_bool:AddReply((int)10970, (int)12133, (int)12132);
				}
				var_860_bool = 0; var_861_object = Obj();
				var_861_object = var_1_object;
				func_6997(var_860_bool, var_861_object);
				if(var_860_bool != 0) {
					@@@var_0_bool:AddReply((int)10948, (int)12108, (int)12107);
				}
				var_865_bool = 0; var_866_object = Obj();
				var_866_object = var_1_object;
				func_6997(var_865_bool, var_866_object);
				if(var_865_bool != 0) {
					@@@var_0_bool:AddReply((int)9640, (int)10581, (int)10608);
				}
				var_870_bool = 0; var_871_object = Obj();
				var_871_object = var_1_object;
				func_6997(var_870_bool, var_871_object);
				if(var_870_bool != 0) {
					@@@var_0_bool:AddReply((int)10947, (int)10612, (int)12106);
				}
				@@@var_0_bool:AddReply((int)14119, (int)-1, (int)15333);
				@@@var_0_bool:AddReply((int)9616, (int)-1, (int)10580);
				goto Label_3161;
		}
	}
Label_3161:
	var_834_bool = 0;
	func_6501(var_834_bool);
	if(var_834_bool != 0) {

	Label_3165:
		lshWaitForAnimEnd();
		var_835_object = var_3_object;
		if(var_835_object != 0) {
		} else {
			var_836_string = "";
			var_836_string = var_2_object;
			func_6378(var_836_string);
			goto Label_3165;
	}
		PlayAnimation("all", "idle");

	Label_3180:
		WaitForAnimEnd();
		var_839_object = var_3_object;
		if(var_839_object != 0) {
			goto Label_3190;
		}
		PlayAnimation("all", "idle");
		goto Label_3180;

	}
	goto Label_3190;
	
Label_3190:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xbee";


func_7149(var_217_bool)
{
	var_219_int = 0; var_220_string = "";
	func_6413(var_219_int, "ood4Grif2");
	var_222_bool = var_219_int == (int)0;
	if(var_222_bool != 0) {
		var_217_bool = 1;
		return 0;
	}
	var_217_bool = 0;
	return 0;
}


func_7664()
{
	var_71_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	var_72_int = GlobalVars[2];
	GlobalVars[2] = (int)-1;
	return 0;
}


func_6640()
{
	SetVariable("ood1Grif5", (int)1);
	return 0;
}


func_6646()
{
	SetVariable("ood1Grif6", (int)1);
	return 0;
}


func_7671(var_595_object)
{
	var_596_bool = 0; var_597_object = Obj();
	var_595_object = var_597_object;
	func_6326(var_596_bool, var_597_object);
	var_625_bool = var_596_bool == 0; //@nz
	if(var_625_bool != 0) {
		return 0;
	}
	var_626_object = Obj();
	var_595_object = var_626_object;
	TaskCall(1);
	func_6(var_626_object);
	TaskReturn();
	var_595_object = Obj();
	func_6374();
	return 0;
}


func_7161(var_223_bool)
{
	var_225_int = 0; var_226_string = "";
	func_6413(var_225_int, "d4q03_alldead");
	var_228_bool = var_225_int == (int)1;
	if(var_228_bool != 0) {
		var_223_bool = 1;
		return 0;
	}
	var_223_bool = 0;
	return 0;
}


func_6652()
{
	SetVariable("ood1Grif7", (int)1);
	return 0;
}


func_5629(var_0_bool, var_1_object, var_2_object, var_3_object, var_1160_object, var_1161_object)
{
	var_0_bool = var_1161_object;
	var_1_object = var_1160_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1167_string = "";
		func_5687(var_1161_object, "Neutral");
		@@@var_0_bool:SetMessage((int)14138);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)14139, (int)-1, (int)15353);
		@@@var_0_bool:AddReply((int)14140, (int)-1, (int)15354);
		goto Label_5657;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1601";
	}
Label_5657:
	var_1179_bool = 0;
	func_6501(var_1179_bool);
	if(var_1179_bool != 0) {

	Label_5661:
		lshWaitForAnimEnd();
		var_1180_object = var_3_object;
		if(var_1180_object != 0) {
		} else {
			var_1181_string = "";
			var_1181_string = var_2_object;
			func_6378(var_1181_string);
			goto Label_5661;
	}
		PlayAnimation("all", "idle");

	Label_5676:
		WaitForAnimEnd();
		var_1184_object = var_3_object;
		if(var_1184_object != 0) {
			goto Label_5686;
		}
		PlayAnimation("all", "idle");
		goto Label_5676;
	}
	goto Label_5686;
	
Label_5686:
	return 0;
	
}


