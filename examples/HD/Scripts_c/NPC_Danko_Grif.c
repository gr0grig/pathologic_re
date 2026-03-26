// @IMPORTS: DoTrade/0,lshWaitForAnimEnd/0,lshStopAnimation/0,StopTrade/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,PlayAnimation/2,WaitForAnimEnd/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,AddItem/3,AddItem/4,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,GetInvItemProperty/3,CreateInvItem/1,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1,ClearSubContainer/1
// @STRINGS: W:Neutral|A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Anger|W:Smile|W:Sly|W:Fear|W:player|A:GetPosition|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|W:m|W:Can't find lsh animation : |A:add|W:money|W:Money|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:ui/NPC_Grif.png|W:ui/NPC_Grif_b.png|W:money10000 is given|W:playsound|W:givemoney|W:giveitem|W:revolver ammo15 is given|W:revolver_ammo|W:money 10000 removed|W:ood1Grif1|W:ood1Grif2|W:ood3Grif1|W:ood4Grif3|W:ood4Grif4|W:ood2Grif2|W:ood2Grif3|W:ood2Grif4|W:d2q02|W:Revolver is given|W:Revolver|W:durability|W:ood4Grif1|W:d4q03|W:d4q03GrifGotoAlexandr|W:pt_map_alexandr|A:AddMark|W:d4q03GrifGotoAlexandrSelf|W:pt_map_grif|W:ood4Grif2|W:ood5Grif1|W:d5q01ThiefsWillHelp|W:d5q01PlayCutscene|A:SetReturnValue|W:KnowGrif|W:d5q01GrifWantsMoney|W:d2KnowBigVladIsBad|W:ood5Grif2|W:d3q01|W:d4q03_alldead|W:d5q01|W:d5q02|W:d1q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:Rifle|W:Knife|W:tvirin|W:lockpick|W:Scalpel|W:rifle_ammo|W:kerosene|W:halfboot_repel|W:boot_army|W:balahon|W:glove_army|W:Gun_danko|W:Gun|W:branch
// @GLOBALS: 0:object:,1:bool:,2:int:
// @RUN_OP: 0x1348
// @RUN_TASK: 27
// @TASK_0: vars=bool params=1
// @EVENT_11: op=0xf vars=int
// @TASK_1: vars=object params=2
// @TASK_2: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc1 vars=int,int
// @TASK_3: vars=object params=2
// @TASK_4: vars=object,object,string,bool params=2
// @EVENT_11: op=0x21e vars=int,int
// @TASK_5: vars=object params=2
// @TASK_6: vars=object,object,string,bool params=2
// @EVENT_11: op=0x4b1 vars=int,int
// @TASK_7: vars=object params=2
// @TASK_8: vars=object,object,string,bool params=2
// @EVENT_11: op=0x7b0 vars=int,int
// @TASK_9: vars=object params=2
// @TASK_10: vars=object,object,string,bool params=2
// @EVENT_11: op=0x940 vars=int,int
// @TASK_11: vars=object params=2
// @TASK_12: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc05 vars=int,int
// @TASK_13: vars=object params=2
// @TASK_14: vars=object,object,string,bool params=2
// @EVENT_11: op=0xcd8 vars=int,int
// @TASK_15: vars=object params=2
// @TASK_16: vars=object,object,string,bool params=2
// @EVENT_11: op=0xdab vars=int,int
// @TASK_17: vars=object params=2
// @TASK_18: vars=object,object,string,bool params=2
// @EVENT_11: op=0xe7e vars=int,int
// @TASK_19: vars=object params=2
// @TASK_20: vars=object,object,string,bool params=2
// @EVENT_11: op=0xf51 vars=int,int
// @TASK_21: vars=object params=2
// @TASK_22: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1029 vars=int,int
// @TASK_23: vars=object params=2
// @TASK_24: vars=object,object,string,bool params=2
// @EVENT_11: op=0x111e vars=int,int
// @TASK_25: vars=object params=2
// @TASK_26: vars=object,object,string,bool params=2
// @EVENT_11: op=0x12eb vars=int,int
// @TASK_27: vars=cvector params=0
// @EVENT_7: op=0x1397 vars=int
// @EVENT_6: op=0x13bd vars=
// @EVENT_5: op=0x13cc vars=
// @EVENT_45: op=0x13d9 vars=bool
// @EVENT_0: op=0x13e5 vars=object
// @PE: 0x0,0xf,0x67,0xab,0xc1,0x1a2,0x208,0x21e,0x40f,0x49b,0x4b1,0x74c,0x79a,0x7b0,0x88f,0x92a,0x940,0xbb5,0xbef,0xc05,0xc88,0xcc2,0xcd8,0xd5b,0xd95,0xdab,0xe2e,0xe68,0xe7e,0xf01,0xf3b,0xf51,0xfd4,0x1013,0x1029,0x10b1,0x1108,0x111e,0x1296,0x12d5,0x12eb,0x1397,0x13bd,0x13d9,0x1556,0x158e,0x164b,0x1673,0x167d,0x1683,0x1689,0x1694,0x169e,0x16a4,0x16aa,0x16b0,0x16b6,0x16bc,0x16c2,0x16c8,0x16ce,0x16ec,0x1712,0x1718,0x171e,0x172b,0x1730,0x1746,0x174c,0x1752,0x175e,0x176a,0x1776,0x1782,0x178e,0x179a,0x17a6,0x17b2,0x17be,0x17ca,0x17d6,0x17e2,0x17ee,0x17fa,0x1806,0x1812,0x181c,0x1828,0x1834,0x1840,0x184c,0x199f,0x19b2

task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_cvector)
{
	lshStopAnimation();
	StopTrade();
	var_0_bool = true;
	return 0;
}


task_2_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_5569();
		var_72_bool = var_67_bool == (int)444;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_5936();
			var_77_string = "";
			func_171(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)500383);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)500384, (int)448, (int)445);
			@@@var_0_bool:AddReply((int)500385, (int)449, (int)446);
			@@@var_0_bool:AddReply((int)500386, (int)450, (int)447);
			return 0;
		}
		var_105_bool = var_67_bool == (int)450;
		if(var_105_bool != 0) {
			var_106_string = "";
			func_171(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)500389);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)500395, (int)454, (int)459);
			@@@var_0_bool:AddReply((int)500396, (int)454, (int)460);
			return 0;
		}
		var_115_bool = var_67_bool == (int)449;
		if(var_115_bool != 0) {
			var_116_string = "";
			func_171(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)500388);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)500394, (int)454, (int)456);
			@@@var_0_bool:AddReply((int)500392, (int)454, (int)453);
			return 0;
		}
		var_125_bool = var_67_bool == (int)448;
		if(var_125_bool != 0) {
			var_126_string = "";
			func_171(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)500387);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)500390, (int)454, (int)451);
			@@@var_0_bool:AddReply((int)500391, (int)454, (int)452);
			return 0;
		}
		var_135_bool = var_67_bool == (int)454;
		if(var_135_bool != 0) {
			var_136_string = "";
			func_171(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)500393);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)500397, (int)-1, (int)463);
			@@@var_0_bool:AddReply((int)500398, (int)-1, (int)464);
			return 0;
		}
		var_3_object = true;
		var_144_bool = 0;
		func_5745(var_144_bool);
		if(var_144_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc2";
	
}


task_4_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_5569();
		var_72_bool = var_68_cvector == (int)7671;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_5820();
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_bool;
			func_5838();
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_bool;
			func_5763();
			var_108_object = Obj(); var_109_object = Obj();
			var_108_object = var_1_object;
			var_109_object = var_0_bool;
			func_5769(var_109_object);
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_bool;
			func_5847(var_133_object);
		}
		var_144_bool = var_68_cvector == (int)8069;
		if(var_144_bool != 0) {
			var_145_object = Obj(); var_146_object = Obj();
			var_145_object = var_1_object;
			var_146_object = var_0_bool;
			func_5826();
		}
		var_150_bool = var_68_cvector == (int)8087;
		if(var_150_bool != 0) {
			var_151_object = Obj(); var_152_object = Obj();
			var_151_object = var_1_object;
			var_152_object = var_0_bool;
			func_5958();
		}
		var_156_bool = var_68_cvector == (int)8054;
		if(var_156_bool != 0) {
			var_157_object = Obj(); var_158_object = Obj();
			var_157_object = var_1_object;
			var_158_object = var_0_bool;
			func_5832();
		}
		var_162_bool = var_68_cvector == (int)8055;
		if(var_162_bool != 0) {
			var_163_object = Obj(); var_164_object = Obj();
			var_163_object = var_1_object;
			var_164_object = var_0_bool;
			func_5832();
		}
		var_166_bool = var_68_cvector == (int)8060;
		if(var_166_bool != 0) {
			var_167_object = Obj(); var_168_object = Obj();
			var_167_object = var_1_object;
			var_168_object = var_0_bool;
			func_5832();
		}
		var_170_bool = var_68_cvector == (int)8061;
		if(var_170_bool != 0) {
			var_171_object = Obj(); var_172_object = Obj();
			var_171_object = var_1_object;
			var_172_object = var_0_bool;
			func_5832();
		}
		var_174_bool = var_68_cvector == (int)37903;
		if(var_174_bool != 0) {
			var_175_object = Obj(); var_176_object = Obj();
			var_175_object = var_1_object;
			var_176_object = var_0_bool;
			func_5931(var_176_object);
		}
		var_179_bool = var_67_bool == (int)7666;
		if(var_179_bool != 0) {
			var_180_string = "";
			func_520(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)506959);
			@@@var_0_bool:ClearReplies();
			var_198_bool = 0;
			var_198_bool = 0;
			var_199_bool = 0; var_200_object = Obj();
			var_200_object = var_1_object;
			func_6030(var_200_object);
			if(var_199_bool != 0) {
				var_207_bool = 0; var_208_object = Obj();
				var_208_object = var_1_object;
				func_6066(var_208_object);
				if(var_207_bool != 0) {
					var_198_bool = 1;
				}
			}
			if(var_198_bool != 0) {
				@@@var_0_bool:AddReply((int)507328, (int)8080, (int)8079);
			}
			var_216_bool = 0; var_217_object = Obj();
			var_217_object = var_1_object;
			func_6042(var_217_object);
			if(var_216_bool != 0) {
				@@@var_0_bool:AddReply((int)507319, (int)8070, (int)8069);
			}
			var_225_bool = 0; var_226_object = Obj();
			var_226_object = var_1_object;
			func_6054(var_226_object);
			if(var_225_bool != 0) {
				@@@var_0_bool:AddReply((int)507335, (int)8049, (int)8087);
			}
			@@@var_0_bool:AddReply((int)536144, (int)-1, (int)37903);
			@@@var_0_bool:AddReply((int)507530, (int)-1, (int)8312);
			@@@var_0_bool:AddReply((int)533848, (int)-1, (int)35398);
			return 0;
		}
		var_244_bool = var_67_bool == (int)8049;
		if(var_244_bool != 0) {
			var_245_string = "";
			func_520(var_68_cvector, "Anger");
			@@@var_0_bool:SetMessage((int)507300);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)507301, (int)8051, (int)8050);
			@@@var_0_bool:AddReply((int)507313, (int)8053, (int)8062);
			return 0;
		}
		var_254_bool = var_67_bool == (int)8051;
		if(var_254_bool != 0) {
			var_255_string = "";
			func_520(var_68_cvector, "Smile");
			@@@var_0_bool:SetMessage((int)507302);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)507303, (int)8053, (int)8052);
			@@@var_0_bool:AddReply((int)507307, (int)8057, (int)8056);
			return 0;
		}
		var_264_bool = var_67_bool == (int)8057;
		if(var_264_bool != 0) {
			var_265_string = "";
			func_520(var_68_cvector, "Smile");
			@@@var_0_bool:SetMessage((int)507308);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)507309, (int)8059, (int)8058);
			return 0;
		}
		var_271_bool = var_67_bool == (int)8059;
		if(var_271_bool != 0) {
			var_272_string = "";
			func_520(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)507310);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)507311, (int)-1, (int)8060);
			@@@var_0_bool:AddReply((int)507312, (int)-1, (int)8061);
			return 0;
		}
		var_281_bool = var_67_bool == (int)8053;
		if(var_281_bool != 0) {
			var_282_string = "";
			func_520(var_68_cvector, "Anger");
			@@@var_0_bool:SetMessage((int)507304);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)507305, (int)-1, (int)8054);
			@@@var_0_bool:AddReply((int)507306, (int)-1, (int)8055);
			return 0;
		}
		var_291_bool = var_67_bool == (int)8070;
		if(var_291_bool != 0) {
			var_292_string = "";
			func_520(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)507320);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)506965, (int)7673, (int)7672);
			return 0;
		}
		var_298_bool = var_67_bool == (int)7673;
		if(var_298_bool != 0) {
			var_299_string = "";
			func_520(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)506966);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)506967, (int)8088, (int)7674);
			@@@var_0_bool:AddReply((int)507343, (int)8088, (int)8095);
			return 0;
		}
		var_308_bool = var_67_bool == (int)8088;
		if(var_308_bool != 0) {
			var_309_string = "";
			func_520(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)507336);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)507337, (int)8090, (int)8089);
			return 0;
		}
		var_315_bool = var_67_bool == (int)8090;
		if(var_315_bool != 0) {
			var_316_string = "";
			func_520(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)507338);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)507342, (int)-1, (int)8094);
			@@@var_0_bool:AddReply((int)507341, (int)-1, (int)8093);
			return 0;
		}
		var_325_bool = var_67_bool == (int)8080;
		if(var_325_bool != 0) {
			var_326_string = "";
			func_520(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)507329);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)507330, (int)8082, (int)8081);
			return 0;
		}
		var_332_bool = var_67_bool == (int)8082;
		if(var_332_bool != 0) {
			var_333_string = "";
			func_520(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)507331);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)507332, (int)7670, (int)8083);
			return 0;
		}
		var_339_bool = var_67_bool == (int)7670;
		if(var_339_bool != 0) {
			var_340_string = "";
			func_520(var_68_cvector, "Smile");
			@@@var_0_bool:SetMessage((int)506963);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)506964, (int)-1, (int)7671);
			return 0;
		}
		var_3_object = true;
		var_345_bool = 0;
		func_5745(var_345_bool);
		if(var_345_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x21f";
	
}


task_6_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_int, var_17_int, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_5569();
		var_72_bool = var_68_cvector == (int)12126;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_5868();
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_bool;
			func_5874();
		}
		var_126_bool = var_68_cvector == (int)12127;
		if(var_126_bool != 0) {
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_object;
			var_128_object = var_0_bool;
			func_5868();
			var_129_object = Obj(); var_130_object = Obj();
			var_129_object = var_1_object;
			var_130_object = var_0_bool;
			func_5874();
		}
		var_132_bool = var_68_cvector == (int)12118;
		if(var_132_bool != 0) {
			var_133_object = Obj(); var_134_object = Obj();
			var_133_object = var_1_object;
			var_134_object = var_0_bool;
			func_5868();
			var_135_object = Obj(); var_136_object = Obj();
			var_135_object = var_1_object;
			var_136_object = var_0_bool;
			func_5874();
		}
		var_138_bool = var_68_cvector == (int)12137;
		if(var_138_bool != 0) {
			var_139_object = Obj(); var_140_object = Obj();
			var_139_object = var_1_object;
			var_140_object = var_0_bool;
			func_5906();
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_bool;
			func_5747(var_144_object);
			var_164_object = Obj(); var_165_object = Obj();
			var_164_object = var_1_object;
			var_165_object = var_0_bool;
			func_5757();
		}
		var_169_bool = var_68_cvector == (int)12138;
		if(var_169_bool != 0) {
			var_170_object = Obj(); var_171_object = Obj();
			var_170_object = var_1_object;
			var_171_object = var_0_bool;
			func_5906();
			var_172_object = Obj(); var_173_object = Obj();
			var_172_object = var_1_object;
			var_173_object = var_0_bool;
			func_5747(var_173_object);
			var_174_object = Obj(); var_175_object = Obj();
			var_174_object = var_1_object;
			var_175_object = var_0_bool;
			func_5757();
		}
		var_177_bool = var_68_cvector == (int)12107;
		if(var_177_bool != 0) {
			var_178_object = Obj(); var_179_object = Obj();
			var_178_object = var_1_object;
			var_179_object = var_0_bool;
			func_5808();
		}
		var_183_bool = var_68_cvector == (int)10608;
		if(var_183_bool != 0) {
			var_184_object = Obj(); var_185_object = Obj();
			var_184_object = var_1_object;
			var_185_object = var_0_bool;
			func_5814();
		}
		var_189_bool = var_68_cvector == (int)15333;
		if(var_189_bool != 0) {
			var_190_object = Obj(); var_191_object = Obj();
			var_190_object = var_1_object;
			var_191_object = var_0_bool;
			func_5931(var_191_object);
		}
		var_194_bool = var_67_bool == (int)12111;
		if(var_194_bool != 0) {
			var_195_bool = 0;
			var_195_bool = 0;
			var_196_bool = 0; var_197_object = Obj();
			var_197_object = var_1_object;
			func_6090(var_197_object);
			if(var_196_bool != 0) {
				var_204_bool = 0; var_205_object = Obj();
				var_205_object = var_1_object;
				func_6102(var_205_object);
				if(var_204_bool != 0) {
					var_195_bool = 1;
				}
			}
			if(var_195_bool != 0) {
				var_210_string = "";
				func_1179(var_68_cvector, "Smile");
				@@@var_0_bool:SetMessage((int)510952);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)510953, (int)12113, (int)12112);
				@@@var_0_bool:AddReply((int)510960, (int)12113, (int)12119);
				return 0;
			}
			var_234_string = "";
			func_1179(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)509615);
			@@@var_0_bool:ClearReplies();
			var_236_bool = 0;
			var_236_bool = 0;
			var_237_bool = 0; var_238_object = Obj();
			var_238_object = var_1_object;
			func_6114(var_238_object);
			if(var_237_bool != 0) {
				var_243_bool = 0; var_244_object = Obj();
				var_244_object = var_1_object;
				func_6126(var_244_object);
				if(var_243_bool != 0) {
					var_236_bool = 1;
				}
			}
			if(var_236_bool != 0) {
				@@@var_0_bool:AddReply((int)510970, (int)12133, (int)12132);
			}
			var_252_bool = 0;
			var_252_bool = 0;
			var_253_bool = 0; var_254_object = Obj();
			var_254_object = var_1_object;
			func_6196(var_254_object);
			if(var_253_bool != 0) {
				var_259_bool = 0; var_260_object = Obj();
				var_260_object = var_1_object;
				func_6006(var_260_object);
				if(var_259_bool != 0) {
					var_252_bool = 1;
				}
			}
			if(var_252_bool != 0) {
				@@@var_0_bool:AddReply((int)510948, (int)12108, (int)12107);
			}
			var_268_bool = 0; var_269_object = Obj();
			var_269_object = var_1_object;
			func_6018(var_269_object);
			if(var_268_bool != 0) {
				@@@var_0_bool:AddReply((int)509640, (int)10581, (int)10608);
			}
			@@@var_0_bool:AddReply((int)514119, (int)-1, (int)15333);
			@@@var_0_bool:AddReply((int)509616, (int)-1, (int)10580);
			return 0;
		}
		var_284_bool = var_67_bool == (int)10581;
		if(var_284_bool != 0) {
			var_285_string = "";
			func_1179(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)509617);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509636, (int)10604, (int)10603);
			return 0;
		}
		var_291_bool = var_67_bool == (int)10604;
		if(var_291_bool != 0) {
			var_292_string = "";
			func_1179(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)509637);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509638, (int)-1, (int)10605);
			return 0;
		}
		var_298_bool = var_67_bool == (int)12108;
		if(var_298_bool != 0) {
			var_299_string = "";
			func_1179(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)510949);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)510950, (int)12110, (int)12109);
			@@@var_0_bool:AddReply((int)510969, (int)10583, (int)12130);
			return 0;
		}
		var_308_bool = var_67_bool == (int)12110;
		if(var_308_bool != 0) {
			var_309_string = "";
			func_1179(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)510951);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509618, (int)10583, (int)10582);
			@@@var_0_bool:AddReply((int)510967, (int)-1, (int)12128);
			@@@var_0_bool:AddReply((int)510972, (int)-1, (int)12134);
			return 0;
		}
		var_321_bool = var_67_bool == (int)10583;
		if(var_321_bool != 0) {
			var_322_string = "";
			func_1179(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)509619);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509620, (int)10585, (int)10584);
			@@@var_0_bool:AddReply((int)509635, (int)10585, (int)10601);
			return 0;
		}
		var_331_bool = var_67_bool == (int)10585;
		if(var_331_bool != 0) {
			var_332_string = "";
			func_1179(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)509621);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509623, (int)10588, (int)10587);
			@@@var_0_bool:AddReply((int)509634, (int)10595, (int)10599);
			@@@var_0_bool:AddReply((int)509622, (int)-1, (int)10586);
			return 0;
		}
		var_344_bool = var_67_bool == (int)10588;
		if(var_344_bool != 0) {
			var_345_string = "";
			func_1179(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)509624);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509625, (int)-1, (int)10589);
			@@@var_0_bool:AddReply((int)509626, (int)10591, (int)10590);
			@@@var_0_bool:AddReply((int)509630, (int)10595, (int)10594);
			return 0;
		}
		var_357_bool = var_67_bool == (int)10595;
		if(var_357_bool != 0) {
			var_358_string = "";
			func_1179(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)509631);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509632, (int)-1, (int)10596);
			@@@var_0_bool:AddReply((int)509633, (int)10591, (int)10597);
			return 0;
		}
		var_367_bool = var_67_bool == (int)10591;
		if(var_367_bool != 0) {
			var_368_string = "";
			func_1179(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)509627);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509628, (int)-1, (int)10592);
			@@@var_0_bool:AddReply((int)509629, (int)-1, (int)10593);
			return 0;
		}
		var_377_bool = var_67_bool == (int)12133;
		if(var_377_bool != 0) {
			var_378_string = "";
			func_1179(var_68_cvector, "Smile");
			@@@var_0_bool:SetMessage((int)510971);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)510973, (int)12136, (int)12135);
			@@@var_0_bool:AddReply((int)533046, (int)12136, (int)34556);
			return 0;
		}
		var_387_bool = var_67_bool == (int)12136;
		if(var_387_bool != 0) {
			var_388_string = "";
			func_1179(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)510974);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)510975, (int)-1, (int)12137);
			@@@var_0_bool:AddReply((int)510976, (int)-1, (int)12138);
			return 0;
		}
		var_397_bool = var_67_bool == (int)12113;
		if(var_397_bool != 0) {
			var_398_string = "";
			func_1179(var_68_cvector, "Smile");
			@@@var_0_bool:SetMessage((int)510954);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)510955, (int)12115, (int)12114);
			@@@var_0_bool:AddReply((int)510961, (int)34554, (int)12121);
			return 0;
		}
		var_407_bool = var_67_bool == (int)34554;
		if(var_407_bool != 0) {
			var_408_string = "";
			func_1179(var_68_cvector, "Anger");
			@@@var_0_bool:SetMessage((int)533044);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)533045, (int)12117, (int)34555);
			return 0;
		}
		var_414_bool = var_67_bool == (int)12115;
		if(var_414_bool != 0) {
			var_415_string = "";
			func_1179(var_68_cvector, "Anger");
			@@@var_0_bool:SetMessage((int)510956);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)510957, (int)12117, (int)12116);
			return 0;
		}
		var_421_bool = var_67_bool == (int)12117;
		if(var_421_bool != 0) {
			var_422_string = "";
			func_1179(var_68_cvector, "Smile");
			@@@var_0_bool:SetMessage((int)510958);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)510963, (int)12125, (int)12124);
			@@@var_0_bool:AddReply((int)510959, (int)-1, (int)12118);
			return 0;
		}
		var_431_bool = var_67_bool == (int)12125;
		if(var_431_bool != 0) {
			var_432_string = "";
			func_1179(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)510964);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)510965, (int)-1, (int)12126);
			@@@var_0_bool:AddReply((int)510966, (int)-1, (int)12127);
			return 0;
		}
		var_3_object = true;
		var_440_bool = 0;
		func_5745(var_440_bool);
		if(var_440_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x4b2";
	
}


task_8_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_int, var_22_int, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_5569();
		var_72_bool = var_68_cvector == (int)10847;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_5802();
		}
		var_78_bool = var_68_cvector == (int)15331;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_bool;
			func_5931(var_80_object);
		}
		var_83_bool = var_67_bool == (int)10842;
		if(var_83_bool != 0) {
			var_84_string = "";
			func_1946(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)509843);
			@@@var_0_bool:ClearReplies();
			var_102_bool = 0;
			var_102_bool = 0;
			var_103_bool = 0; var_104_object = Obj();
			var_104_object = var_1_object;
			func_5994(var_104_object);
			if(var_103_bool != 0) {
				var_111_bool = 0; var_112_object = Obj();
				var_112_object = var_1_object;
				func_6078(var_112_object);
				var_117_bool = var_111_bool == 0; //@nz
				if(var_117_bool != 0) {
					var_102_bool = 1;
				}
			}
			if(var_102_bool != 0) {
				@@@var_0_bool:AddReply((int)509848, (int)10848, (int)10847);
			}
			@@@var_0_bool:AddReply((int)514117, (int)-1, (int)15331);
			@@@var_0_bool:AddReply((int)514118, (int)-1, (int)15332);
			return 0;
		}
		var_128_bool = var_67_bool == (int)10848;
		if(var_128_bool != 0) {
			var_129_string = "";
			func_1946(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)509849);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509850, (int)10850, (int)10849);
			@@@var_0_bool:AddReply((int)509856, (int)10852, (int)10855);
			return 0;
		}
		var_138_bool = var_67_bool == (int)10850;
		if(var_138_bool != 0) {
			var_139_string = "";
			func_1946(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)509851);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509852, (int)10852, (int)10851);
			return 0;
		}
		var_145_bool = var_67_bool == (int)10852;
		if(var_145_bool != 0) {
			var_146_string = "";
			func_1946(var_68_cvector, "Smile");
			@@@var_0_bool:SetMessage((int)509853);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)509854, (int)-1, (int)10853);
			@@@var_0_bool:AddReply((int)509855, (int)-1, (int)10854);
			return 0;
		}
		var_3_object = true;
		var_154_bool = 0;
		func_5745(var_154_bool);
		if(var_154_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x7b1";
	
}


task_10_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_int, var_27_int, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_5569();
		var_72_bool = var_68_cvector == (int)12909;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_5912();
		}
		var_78_bool = var_68_cvector == (int)12936;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_bool;
			func_5942();
		}
		var_98_bool = var_68_cvector == (int)12939;
		if(var_98_bool != 0) {
			var_99_object = Obj(); var_100_object = Obj();
			var_99_object = var_1_object;
			var_100_object = var_0_bool;
			func_5942();
		}
		var_102_bool = var_68_cvector == (int)16829;
		if(var_102_bool != 0) {
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_bool;
			func_5942();
		}
		var_106_bool = var_68_cvector == (int)12925;
		if(var_106_bool != 0) {
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_bool;
			func_5942();
		}
		var_110_bool = var_68_cvector == (int)12944;
		if(var_110_bool != 0) {
			var_111_object = Obj(); var_112_object = Obj();
			var_111_object = var_1_object;
			var_112_object = var_0_bool;
			func_5918();
			var_140_object = Obj(); var_141_object = Obj();
			var_140_object = var_1_object;
			var_141_object = var_0_bool;
			func_5780(var_141_object);
		}
		var_162_bool = var_68_cvector == (int)15334;
		if(var_162_bool != 0) {
			var_163_object = Obj(); var_164_object = Obj();
			var_163_object = var_1_object;
			var_164_object = var_0_bool;
			func_5931(var_164_object);
		}
		var_167_bool = var_67_bool == (int)12926;
		if(var_167_bool != 0) {
			var_168_bool = 0;
			var_168_bool = 0;
			var_169_bool = 0; var_170_object = Obj();
			var_170_object = var_1_object;
			func_6184(var_170_object);
			if(var_169_bool != 0) {
				var_177_bool = 0; var_178_object = Obj();
				var_178_object = var_1_object;
				func_6208(var_178_object);
				if(var_177_bool != 0) {
					var_168_bool = 1;
				}
			}
			if(var_168_bool != 0) {
				var_183_object = Obj(); var_184_object = Obj();
				var_183_object = var_1_object;
				var_184_object = var_0_bool;
				func_5964();
				var_187_string = "";
				func_2346(var_68_cvector, "Sly");
				@@@var_0_bool:SetMessage((int)511720);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)511721, (int)12928, (int)12927);
				@@@var_0_bool:AddReply((int)515755, (int)12928, (int)16821);
				return 0;
			}
			var_211_string = "";
			func_2346(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)511704);
			@@@var_0_bool:ClearReplies();
			var_213_bool = 0;
			var_213_bool = 0;
			var_214_bool = 0; var_215_object = Obj();
			var_215_object = var_1_object;
			func_6138(var_215_object);
			if(var_214_bool != 0) {
				var_220_bool = 0; var_221_object = Obj();
				var_221_object = var_1_object;
				func_6150(var_221_object);
				if(var_220_bool != 0) {
					var_213_bool = 1;
				}
			}
			if(var_213_bool != 0) {
				@@@var_0_bool:AddReply((int)511705, (int)12910, (int)12909);
			}
			var_229_bool = 0;
			var_229_bool = 0;
			var_230_bool = 0;
			var_230_bool = 0;
			var_231_bool = 0;
			var_231_bool = 0;
			var_232_bool = 0; var_233_object = Obj();
			var_233_object = var_1_object;
			func_6138(var_233_object);
			if(var_232_bool != 0) {
				var_234_bool = 0; var_235_object = Obj();
				var_235_object = var_1_object;
				func_6172(var_235_object);
				var_240_bool = var_234_bool == 0; //@nz
				if(var_240_bool != 0) {
					var_231_bool = 1;
				}
			}
			if(var_231_bool != 0) {
				var_241_bool = 0; var_242_object = Obj();
				var_242_object = var_1_object;
				func_6150(var_242_object);
				var_243_bool = var_241_bool == 0; //@nz
				if(var_243_bool != 0) {
					var_230_bool = 1;
				}
			}
			if(var_230_bool != 0) {
				var_244_bool = 0; var_245_object = Obj();
				var_245_object = var_1_object;
				func_6162(var_244_bool, var_245_object);
				if(var_244_bool != 0) {
					var_229_bool = 1;
				}
			}
			if(var_229_bool != 0) {
				@@@var_0_bool:AddReply((int)511734, (int)16834, (int)12940);
			}
			@@@var_0_bool:AddReply((int)514120, (int)-1, (int)15334);
			@@@var_0_bool:AddReply((int)511739, (int)-1, (int)12945);
			return 0;
		}
		var_263_bool = var_67_bool == (int)16834;
		if(var_263_bool != 0) {
			var_264_string = "";
			func_2346(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)515765);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)515766, (int)16836, (int)16835);
			return 0;
		}
		var_270_bool = var_67_bool == (int)16836;
		if(var_270_bool != 0) {
			var_271_string = "";
			func_2346(var_68_cvector, "Anger");
			@@@var_0_bool:SetMessage((int)515767);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)515768, (int)12941, (int)16837);
			return 0;
		}
		var_277_bool = var_67_bool == (int)12941;
		if(var_277_bool != 0) {
			var_278_string = "";
			func_2346(var_68_cvector, "Anger");
			@@@var_0_bool:SetMessage((int)511735);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511736, (int)12943, (int)12942);
			return 0;
		}
		var_284_bool = var_67_bool == (int)12943;
		if(var_284_bool != 0) {
			var_285_string = "";
			func_2346(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)511737);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511738, (int)-1, (int)12944);
			return 0;
		}
		var_291_bool = var_67_bool == (int)12910;
		if(var_291_bool != 0) {
			var_292_string = "";
			func_2346(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)511706);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511707, (int)12913, (int)12911);
			@@@var_0_bool:AddReply((int)511708, (int)12913, (int)12912);
			return 0;
		}
		var_301_bool = var_67_bool == (int)12913;
		if(var_301_bool != 0) {
			var_302_string = "";
			func_2346(var_68_cvector, "Smile");
			@@@var_0_bool:SetMessage((int)511709);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511710, (int)12916, (int)12915);
			@@@var_0_bool:AddReply((int)511713, (int)12919, (int)12918);
			return 0;
		}
		var_311_bool = var_67_bool == (int)12919;
		if(var_311_bool != 0) {
			var_312_string = "";
			func_2346(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)511714);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511715, (int)12916, (int)12920);
			return 0;
		}
		var_318_bool = var_67_bool == (int)12916;
		if(var_318_bool != 0) {
			var_319_string = "";
			func_2346(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)511711);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511712, (int)12935, (int)12917);
			@@@var_0_bool:AddReply((int)511728, (int)12922, (int)12934);
			return 0;
		}
		var_328_bool = var_67_bool == (int)12922;
		if(var_328_bool != 0) {
			var_329_string = "";
			func_2346(var_68_cvector, "Anger");
			@@@var_0_bool:SetMessage((int)511716);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511717, (int)12924, (int)12923);
			return 0;
		}
		var_335_bool = var_67_bool == (int)12924;
		if(var_335_bool != 0) {
			var_336_string = "";
			func_2346(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)511718);
			@@@var_0_bool:ClearReplies();
			var_338_bool = 0; var_339_object = Obj();
			var_339_object = var_1_object;
			func_6162(var_338_bool, var_339_object);
			if(var_338_bool != 0) {
				@@@var_0_bool:AddReply((int)515760, (int)16834, (int)16829);
			}
			@@@var_0_bool:AddReply((int)511719, (int)-1, (int)12925);
			return 0;
		}
		var_347_bool = var_67_bool == (int)12935;
		if(var_347_bool != 0) {
			var_348_string = "";
			func_2346(var_68_cvector, "Anger");
			@@@var_0_bool:SetMessage((int)511729);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511730, (int)-1, (int)12936);
			@@@var_0_bool:AddReply((int)511731, (int)12938, (int)12937);
			var_356_bool = 0; var_357_object = Obj();
			var_357_object = var_1_object;
			func_6162(var_356_bool, var_357_object);
			if(var_356_bool != 0) {
				@@@var_0_bool:AddReply((int)512485, (int)16834, (int)13653);
			}
			return 0;
		}
		var_362_bool = var_67_bool == (int)12938;
		if(var_362_bool != 0) {
			var_363_string = "";
			func_2346(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)511732);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511733, (int)-1, (int)12939);
			return 0;
		}
		var_369_bool = var_67_bool == (int)12928;
		if(var_369_bool != 0) {
			var_370_string = "";
			func_2346(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)511722);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511723, (int)12930, (int)12929);
			@@@var_0_bool:AddReply((int)515761, (int)-1, (int)16830);
			return 0;
		}
		var_379_bool = var_67_bool == (int)12930;
		if(var_379_bool != 0) {
			var_380_string = "";
			func_2346(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)511724);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511726, (int)12933, (int)12932);
			@@@var_0_bool:AddReply((int)511725, (int)-1, (int)12931);
			return 0;
		}
		var_389_bool = var_67_bool == (int)12933;
		if(var_389_bool != 0) {
			var_390_string = "";
			func_2346(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)511727);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)515757, (int)16826, (int)16825);
			@@@var_0_bool:AddReply((int)515763, (int)-1, (int)16832);
			return 0;
		}
		var_399_bool = var_67_bool == (int)16826;
		if(var_399_bool != 0) {
			var_400_string = "";
			func_2346(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)515758);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)515764, (int)-1, (int)16833);
			@@@var_0_bool:AddReply((int)515762, (int)-1, (int)16831);
			return 0;
		}
		var_3_object = true;
		var_408_bool = 0;
		func_5745(var_408_bool);
		if(var_408_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x941";
	
}


task_12_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_int, var_32_int, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_5569();
		var_72_bool = var_68_cvector == (int)15337;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_5931(var_74_object);
		}
		var_77_bool = var_67_bool == (int)15336;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_3055(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)514122);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)514123, (int)-1, (int)15337);
			@@@var_0_bool:AddReply((int)514124, (int)-1, (int)15338);
			return 0;
		}
		var_3_object = true;
		var_102_bool = 0;
		func_5745(var_102_bool);
		if(var_102_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc06";
	
}


task_14_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_int, var_37_int, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_5569();
		var_72_bool = var_68_cvector == (int)15341;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_5931(var_74_object);
		}
		var_77_bool = var_67_bool == (int)15340;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_3266(var_68_cvector, "Smile");
			@@@var_0_bool:SetMessage((int)514126);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)514127, (int)-1, (int)15341);
			@@@var_0_bool:AddReply((int)514128, (int)-1, (int)15342);
			return 0;
		}
		var_3_object = true;
		var_102_bool = 0;
		func_5745(var_102_bool);
		if(var_102_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xcd9";
	
}


task_16_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_int, var_42_int, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_5569();
		var_72_bool = var_68_cvector == (int)40647;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_5931(var_74_object);
		}
		var_77_bool = var_67_bool == (int)40646;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_3477(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)538735);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)538736, (int)-1, (int)40647);
			@@@var_0_bool:AddReply((int)538754, (int)-1, (int)40666);
			return 0;
		}
		var_3_object = true;
		var_102_bool = 0;
		func_5745(var_102_bool);
		if(var_102_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xdac";
	
}


task_18_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_int, var_47_int, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_5569();
		var_72_bool = var_68_cvector == (int)15349;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_5931(var_74_object);
		}
		var_77_bool = var_67_bool == (int)15348;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_3688(var_68_cvector, "Anger");
			@@@var_0_bool:SetMessage((int)514134);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)514135, (int)-1, (int)15349);
			@@@var_0_bool:AddReply((int)514136, (int)-1, (int)15350);
			return 0;
		}
		var_3_object = true;
		var_102_bool = 0;
		func_5745(var_102_bool);
		if(var_102_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xe7f";
	
}


task_20_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_int, var_52_int, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_5569();
		var_72_bool = var_68_cvector == (int)15353;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_5931(var_74_object);
		}
		var_77_bool = var_67_bool == (int)44045;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_3899(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)541830);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)514139, (int)-1, (int)15353);
			@@@var_0_bool:AddReply((int)541833, (int)-1, (int)44048);
			return 0;
		}
		var_3_object = true;
		var_102_bool = 0;
		func_5745(var_102_bool);
		if(var_102_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xf52";
	
}


task_22_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_int, var_57_int, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_5569();
		var_72_bool = var_68_cvector == (int)15401;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_5931(var_74_object);
		}
		var_77_bool = var_67_bool == (int)15400;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_4115(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)514186);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)514187, (int)-1, (int)15401);
			@@@var_0_bool:AddReply((int)514188, (int)-1, (int)15402);
			@@@var_0_bool:AddReply((int)539631, (int)-1, (int)41577);
			return 0;
		}
		var_3_object = true;
		var_105_bool = 0;
		func_5745(var_105_bool);
		if(var_105_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x102a";
	
}


task_24_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_int, var_62_int, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_5569();
		var_72_bool = var_68_cvector == (int)35389;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_5790();
		}
		var_78_bool = var_68_cvector == (int)35396;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_bool;
			func_5931(var_80_object);
		}
		var_83_bool = var_68_cvector == (int)35397;
		if(var_83_bool != 0) {
			var_84_object = Obj(); var_85_object = Obj();
			var_84_object = var_1_object;
			var_85_object = var_0_bool;
			func_5931(var_85_object);
		}
		var_87_bool = var_68_cvector == (int)35528;
		if(var_87_bool != 0) {
			var_88_object = Obj(); var_89_object = Obj();
			var_88_object = var_1_object;
			var_89_object = var_0_bool;
			func_5796();
		}
		var_93_bool = var_68_cvector == (int)35393;
		if(var_93_bool != 0) {
			var_94_object = Obj(); var_95_object = Obj();
			var_94_object = var_1_object;
			var_95_object = var_0_bool;
			func_5931(var_95_object);
		}
		var_97_bool = var_67_bool == (int)35388;
		if(var_97_bool != 0) {
			var_98_string = "";
			func_4360(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)533838);
			@@@var_0_bool:ClearReplies();
			var_116_bool = 0; var_117_object = Obj();
			var_117_object = var_1_object;
			func_5970(var_117_object);
			if(var_116_bool != 0) {
				@@@var_0_bool:AddReply((int)533839, (int)35390, (int)35389);
			}
			var_127_bool = 0;
			var_127_bool = 0;
			var_128_bool = 0; var_129_object = Obj();
			var_129_object = var_1_object;
			func_6220(var_129_object);
			if(var_128_bool != 0) {
				var_144_bool = 0; var_145_object = Obj();
				var_145_object = var_1_object;
				func_5982(var_145_object);
				if(var_144_bool != 0) {
					var_127_bool = 1;
				}
			}
			if(var_127_bool != 0) {
				@@@var_0_bool:AddReply((int)533960, (int)35529, (int)35528);
			}
			@@@var_0_bool:AddReply((int)533843, (int)-1, (int)35393);
			@@@var_0_bool:AddReply((int)533844, (int)-1, (int)35394);
			return 0;
		}
		var_160_bool = var_67_bool == (int)35529;
		if(var_160_bool != 0) {
			var_161_string = "";
			func_4360(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)533961);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)533962, (int)35531, (int)35530);
			@@@var_0_bool:AddReply((int)533972, (int)35533, (int)35542);
			return 0;
		}
		var_170_bool = var_67_bool == (int)35531;
		if(var_170_bool != 0) {
			var_171_string = "";
			func_4360(var_68_cvector, "Smile");
			@@@var_0_bool:SetMessage((int)533963);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)533964, (int)35533, (int)35532);
			@@@var_0_bool:AddReply((int)533971, (int)35533, (int)35540);
			return 0;
		}
		var_180_bool = var_67_bool == (int)35533;
		if(var_180_bool != 0) {
			var_181_string = "";
			func_4360(var_68_cvector, "Smile");
			@@@var_0_bool:SetMessage((int)533965);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)533966, (int)35535, (int)35534);
			@@@var_0_bool:AddReply((int)533970, (int)35535, (int)35538);
			@@@var_0_bool:AddReply((int)533973, (int)35545, (int)35544);
			return 0;
		}
		var_193_bool = var_67_bool == (int)35545;
		if(var_193_bool != 0) {
			var_194_string = "";
			func_4360(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)533974);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)533975, (int)35547, (int)35546);
			return 0;
		}
		var_200_bool = var_67_bool == (int)35547;
		if(var_200_bool != 0) {
			var_201_string = "";
			func_4360(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)533976);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)533977, (int)-1, (int)35548);
			@@@var_0_bool:AddReply((int)533978, (int)-1, (int)35549);
			return 0;
		}
		var_210_bool = var_67_bool == (int)35535;
		if(var_210_bool != 0) {
			var_211_string = "";
			func_4360(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)533967);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)533968, (int)-1, (int)35536);
			@@@var_0_bool:AddReply((int)533969, (int)-1, (int)35537);
			return 0;
		}
		var_220_bool = var_67_bool == (int)35390;
		if(var_220_bool != 0) {
			var_221_string = "";
			func_4360(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)533840);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)533842, (int)35395, (int)35392);
			@@@var_0_bool:AddReply((int)533841, (int)-1, (int)35391);
			return 0;
		}
		var_230_bool = var_67_bool == (int)35395;
		if(var_230_bool != 0) {
			var_231_string = "";
			func_4360(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)533845);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)533846, (int)-1, (int)35396);
			@@@var_0_bool:AddReply((int)533847, (int)-1, (int)35397);
			return 0;
		}
		var_3_object = true;
		var_239_bool = 0;
		func_5745(var_239_bool);
		if(var_239_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x111f";
	
}


task_26_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_int, var_67_int, var_68_cvector)
{
	if((int)1 != 0) {
		func_5569();
		var_72_bool = var_67_int == (int)36971;
		if(var_72_bool != 0) {
			var_73_string = "";
			func_4821(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)535294);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)535295, (int)36973, (int)36972);
			@@@var_0_bool:AddReply((int)535302, (int)-1, (int)36980);
			@@@var_0_bool:AddReply((int)535303, (int)-1, (int)36981);
			return 0;
		}
		var_101_bool = var_67_int == (int)36973;
		if(var_101_bool != 0) {
			var_102_string = "";
			func_4821(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)535296);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)535297, (int)36975, (int)36974);
			@@@var_0_bool:AddReply((int)535301, (int)36975, (int)36978);
			return 0;
		}
		var_111_bool = var_67_int == (int)36975;
		if(var_111_bool != 0) {
			var_112_string = "";
			func_4821(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)535298);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)535299, (int)-1, (int)36976);
			@@@var_0_bool:AddReply((int)535300, (int)-1, (int)36977);
			return 0;
		}
		var_3_object = true;
		var_120_bool = 0;
		func_5745(var_120_bool);
		if(var_120_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x12ec";
	
}


task_27_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_int)
{
	var_69_bool = var_67_int == (int)10;
	if(var_69_bool != 0) {
		func_5011();
		var_71_bool = 0;
		var_71_bool = 0;
		var_72_bool = 0;
		func_5232(var_72_bool);
		if(var_72_bool != 0) {
			var_75_bool = 0;
			func_4980(var_75_bool);
			if(var_75_bool != 0) {
				var_71_bool = 1;
			}
		}
		if(var_71_bool != 0) {
			var_92_bool = 0;
			func_4960(var_92_bool);
			if(var_92_bool != 0) {
				var_111_bool = 0; var_112_object = Obj();
				func_5604(Obj());
				var_113_object = var_112_object;
				func_5382(var_111_bool, var_112_object);
			}
		} else {
			func_4975(var_67_int);
			func_5002();
		}
	}
	return 0;
	
}


task_27_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector)
{
	func_5193();
	func_5011();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_27_event_5(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector)
{
	StopGroup0();
	func_5011();
	var_68_string = "";
	func_5523("Neutral");
	func_5002();
	return 0;
}


task_27_event_45(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_bool)
{
	var_68_bool = var_67_bool;
	if(var_68_bool != 0) {
		func_5002();
	} else {
		var_74_string = "";
		func_5523("Neutral");
	}
	return 0;
	
}


task_27_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_object)
{
	var_68_bool = 0; var_69_bool = 0;
	IsOverrideActive(var_69_bool);
	var_70_bool = var_69_bool == 0; //@nz
	if(var_70_bool != 0) {
		EventDisable(0);
		func_5193();
		var_71_bool = 0; var_72_object = Obj();
		var_67_object = var_72_object;
		func_5223(var_71_bool, var_72_object);
		EventEnable(0);
		var_85_object = Obj();
		var_67_object = var_85_object;
		func_6578(var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_object, var_68_bool, var_69_bool, var_85_object);
		var_1439_string = "";
		func_5523("Neutral");
		func_5011();
		func_5002();
	}
	return 2;
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector)
{
	var_67_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	var_68_int = GlobalVars[2];
	GlobalVars[2] = (int)-1;
	func_4946(var_66_cvector);
	return 0;
}


func_0(var_0_bool)
{
	DoTrade();
	var_0_bool = false;
	
Label_4:
	var_577_string = "";
	func_5523("Neutral");
	lshWaitForAnimEnd();
	var_578_bool = var_0_bool;
	if(var_578_bool != 0) {
		goto Label_4;
	}
	return 0;
}
EMIT "Return(); Pop(0)";


func_5122()
{
	var_73_int = 0; var_74_int = 0; var_75_bool = 0; var_76_int = 0; var_77_int = 0; var_78_bool = 0; var_79_int = 0; var_80_int = 0; var_81_bool = 0; var_82_int = 0; var_83_int = 0; var_84_bool = 0;
	WaitForAnimEnd();
	var_85_bool = 0;
	func_5232(var_85_bool);
	var_86_bool = var_85_bool == 0; //@nz
	if(var_86_bool != 0) {
		return 12;
	}
	func_5720((int)0);
	var_87_int = var_79_int;
	var_80_int = 0;
	
Label_5136:
	var_100_bool = 0;
	var_100_bool = 0;
	var_102_bool = var_80_int < (int)5;
	if(var_102_bool != 0) {
		var_103_bool = 0;
		func_5232(var_103_bool);
		if(var_103_bool != 0) {
			var_100_bool = 1;
		}
	}
	if(var_100_bool != 0) {
		var_104_bool = var_79_int == 0; //@nz
		if(var_104_bool != 0) {
			Sleep((int)3, var_81_bool);
			var_106_bool = var_81_bool == 0; //@nz
			if(var_106_bool != 0) {
			} else {
		} else {
				irand(var_82_int, var_79_int);
				irand(var_83_int, (int)5);
				var_112_bool = var_83_int != (int)0;
				if(var_112_bool != 0) {
					var_82_int = 0;
				}
				var_114_string = ""; var_115_int = 0;
				var_82_int = var_115_int;
				func_5713(var_114_string, var_115_int);
				PlayAnimation("all", var_114_string);
				WaitForAnimEnd(var_84_bool);
				var_116_bool = var_84_bool == 0; //@nz
				if(var_116_bool == 0) goto Label_5177;
				goto Label_5188;
		}
		Label_5177:
			var_107_bool = 0;
			func_5191(var_107_bool);
			var_108_bool = var_107_bool == 0; //@nz
			if(var_108_bool != 0) {
				goto Label_5188;
			}
			ResetAAS();
			var_80_int = var_80_int + (int)1;
			goto Label_5136;

		}
	}
Label_5188:
	ResetAAS();
	return 12;
	
}


func_6150(var_963_bool)
{
	var_965_int = 0; var_966_string = "";
	func_5625(var_965_int, "ood5Grif1");
	var_968_bool = var_965_int == (int)0;
	if(var_968_bool != 0) {
		var_963_bool = 1;
		return 0;
	}
	var_963_bool = 0;
	return 0;
}


func_520(var_2_object, var_615_string)
{
	var_616_bool = 0;
	func_5745(var_616_bool);
	var_617_bool = var_616_bool == 0; //@nz
	if(var_617_bool != 0) {
		return 0;
	}
	var_618_bool = var_615_string == var_2_object;
	if(var_618_bool != 0) {
		return 0;
	}
	var_619_string = ""; var_620_bool = 0;
	var_615_string = var_619_string;
	var_622_bool = var_615_string == "";
	if(var_622_bool != 0) {
		var_620_bool = 0;
	} else {
		var_620_bool = 1;
	}
	func_5539(var_619_string, var_620_bool);
	var_2_object = var_615_string;
	return 0;
	
}


func_5642(var_143_object, var_144_int)
{
	var_145_int = 0; var_146_int = 0;
	var_147_object = Obj(); var_148_string = ""; var_149_int = 0;
	var_143_object = var_147_object;
	var_144_int = var_149_int;
	func_5206(var_147_object, "money", var_149_int);
	var_154_bool = var_144_int > (int)0;
	if(var_154_bool != 0) {
		GetInvItemByName(var_146_int, "Money");
		var_156_int = 0; var_157_int = 0;
		var_146_int = var_156_int;
		var_144_int = var_157_int;
		func_5630(var_156_int, var_157_int);
	}
	return 2;
}


func_1039(var_0_bool, var_1_object, var_2_object, var_3_object, var_784_object, var_785_object)
{
	var_0_bool = var_785_object;
	var_1_object = var_784_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_791_bool = 0;
		var_791_bool = 0;
		var_792_bool = 0; var_793_object = Obj();
		var_793_object = var_1_object;
		func_6090(var_793_object);
		if(var_792_bool != 0) {
			var_798_bool = 0; var_799_object = Obj();
			var_799_object = var_1_object;
			func_6102(var_799_object);
			if(var_798_bool != 0) {
				var_791_bool = 1;
			}
		}
		if(var_791_bool != 0) {
			var_804_string = "";
			func_1179(var_785_object, "Smile");
			@@@var_0_bool:SetMessage((int)510952);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)510953, (int)12113, (int)12112);
			@@@var_0_bool:AddReply((int)510960, (int)12113, (int)12119);
		} else {
				var_827_string = "";
				func_1179(var_785_object, "Neutral");
				@@@var_0_bool:SetMessage((int)509615);
				@@@var_0_bool:ClearReplies();
				var_829_bool = 0;
				var_829_bool = 0;
				var_830_bool = 0; var_831_object = Obj();
				var_831_object = var_1_object;
				func_6114(var_831_object);
				if(var_830_bool != 0) {
					var_836_bool = 0; var_837_object = Obj();
					var_837_object = var_1_object;
					func_6126(var_837_object);
					if(var_836_bool != 0) {
						var_829_bool = 1;
					}
				}
				if(var_829_bool != 0) {
					@@@var_0_bool:AddReply((int)510970, (int)12133, (int)12132);
				}
				var_845_bool = 0;
				var_845_bool = 0;
				var_846_bool = 0; var_847_object = Obj();
				var_847_object = var_1_object;
				func_6196(var_847_object);
				if(var_846_bool != 0) {
					var_852_bool = 0; var_853_object = Obj();
					var_853_object = var_1_object;
					func_6006(var_853_object);
					if(var_852_bool != 0) {
						var_845_bool = 1;
					}
				}
				if(var_845_bool != 0) {
					@@@var_0_bool:AddReply((int)510948, (int)12108, (int)12107);
				}
				var_861_bool = 0; var_862_object = Obj();
				var_862_object = var_1_object;
				func_6018(var_862_object);
				if(var_861_bool != 0) {
					@@@var_0_bool:AddReply((int)509640, (int)10581, (int)10608);
				}
				@@@var_0_bool:AddReply((int)514119, (int)-1, (int)15333);
				@@@var_0_bool:AddReply((int)509616, (int)-1, (int)10580);
				goto Label_1149;
		}
	}
Label_1149:
	var_819_bool = 0;
	func_5745(var_819_bool);
	if(var_819_bool != 0) {

	Label_1153:
		lshWaitForAnimEnd();
		var_820_object = var_3_object;
		if(var_820_object != 0) {
		} else {
			var_821_string = "";
			var_821_string = var_2_object;
			func_5523(var_821_string);
			goto Label_1153;
	}
		PlayAnimation("all", "idle");

	Label_1168:
		WaitForAnimEnd();
		var_824_object = var_3_object;
		if(var_824_object != 0) {
			goto Label_1178;
		}
		PlayAnimation("all", "idle");
		goto Label_1168;

	}
	goto Label_1178;
	
Label_1178:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x413";


func_6162(var_987_bool, var_988_object)
{
	var_989_bool = 0; var_990_object = Obj();
	var_988_object = var_990_object;
	func_6254(var_989_bool, var_990_object);
	if(var_989_bool != 0) {
		var_987_bool = 1;
		return 0;
	}
	var_987_bool = 0;
	return 0;
}


func_4115(var_2_object, var_1348_string)
{
	var_1349_bool = 0;
	func_5745(var_1349_bool);
	var_1350_bool = var_1349_bool == 0; //@nz
	if(var_1350_bool != 0) {
		return 0;
	}
	var_1351_bool = var_1348_string == var_2_object;
	if(var_1351_bool != 0) {
		return 0;
	}
	var_1352_string = ""; var_1353_bool = 0;
	var_1348_string = var_1352_string;
	var_1355_bool = var_1348_string == "";
	if(var_1355_bool != 0) {
		var_1353_bool = 0;
	} else {
		var_1353_bool = 1;
	}
	func_5539(var_1352_string, var_1353_bool);
	var_2_object = var_1348_string;
	return 0;
	
}


func_22(var_0_bool, var_215_int, var_216_object)
{
	var_218_object = Obj(); var_219_bool = 0; var_220_int = 0; var_221_bool = 0; var_222_object = Obj(); var_223_bool = 0; var_224_int = 0; var_225_bool = 0;
	var_0_bool = var_216_object;
	var_226_bool = 0; var_227_object = Obj(); var_228_float = 0;
	var_216_object = var_227_object;
	func_5237(var_226_bool, var_227_object, (float)70.0);
	var_273_bool = var_226_bool == 0; //@nz
	if(var_273_bool != 0) {
		var_215_int = -2;
		return 8;
	}
	CreateDialog(var_222_object);
	var_274_int = 0;
	func_5739(var_274_int);
	@@var_222_object:SetNPCName(var_274_int);
	var_275_int = 0;
	func_5737(var_275_int);
	@@var_222_object:SetNPCDescription(var_275_int);
	var_276_string = "";
	func_5741(var_276_string);
	@@var_222_object:SetPhoto(var_276_string);
	var_277_string = "";
	func_5743(var_277_string);
	@@var_222_object:SetPhoto2(var_277_string);
	var_278_int = 0;
	func_6536(var_278_int);
	@@var_222_object:SetPlayerName(var_278_int);
	IsOverrideActive(var_223_bool);
	var_286_bool = var_223_bool;
	if(var_286_bool != 0) {
		var_215_int = -2;
		return 8;
	}
	DoDialog(var_222_object);
	var_287_bool = 0; var_288_object = Obj();
	func_5604(Obj());
	var_289_object = var_288_object;
	func_5324(var_287_bool, var_288_object);
	var_377_object = Obj(); var_378_object = Obj();
	var_216_object = var_377_object;
	var_222_object = var_378_object;
	TaskCall(2);
	func_103(var_379_object, var_380_object, var_381_string, var_382_bool, var_377_object, var_378_object);
	TaskReturn();
	@@var_222_object:IsDialogEnd(var_225_bool);
	
Label_85:
	var_433_bool = var_225_bool == 0; //@nz
	if(var_433_bool != 0) {
		sync();
		@@var_222_object:IsDialogEnd(var_225_bool);
		goto Label_85;
	}
	var_216_object = Obj();
	func_5306();
	StopDialog(var_222_object);
	@@var_222_object:GetReturnValue((int)-1);
	var_224_int = var_215_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6172(var_977_bool)
{
	var_979_int = 0; var_980_string = "";
	func_5625(var_979_int, "d5q01ThiefsWillHelp");
	var_982_bool = var_979_int == (int)1;
	if(var_982_bool != 0) {
		var_977_bool = 1;
		return 0;
	}
	var_977_bool = 0;
	return 0;
}


func_5661(var_116_object, var_117_object, var_118_int)
{
	var_119_int = 0; var_120_int = 0; var_121_bool = 0; var_122_int = 0; var_123_int = 0; var_124_bool = 0;
	@@var_117_object:GetItemID(var_122_int);
	GetInvItemProperty(var_123_int, var_122_int, "Category");
	@@var_116_object:AddItem(var_124_bool, var_117_object, var_123_int, var_118_int);
	var_126_bool = var_124_bool == 0; //@nz
	if(var_126_bool != 0) {
		@@var_116_object:DropItems(var_117_object, var_118_int);
	} else {
		var_127_int = 0; var_128_int = 0;
		var_122_int = var_127_int;
		var_118_int = var_128_int;
		func_5630(var_127_int, var_128_int);
	}
	return 6;
	
}


func_6184(var_915_bool)
{
	var_917_int = 0; var_918_string = "";
	func_5625(var_917_int, "d5q02");
	var_920_bool = var_917_int == (int)0;
	if(var_920_bool != 0) {
		var_915_bool = 1;
		return 0;
	}
	var_915_bool = 0;
	return 0;
}


func_3630(var_0_bool, var_1_object, var_2_object, var_3_object, var_1280_object, var_1281_object)
{
	var_0_bool = var_1281_object;
	var_1_object = var_1280_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1287_string = "";
		func_3688(var_1281_object, "Anger");
		@@@var_0_bool:SetMessage((int)514134);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)514135, (int)-1, (int)15349);
		@@@var_0_bool:AddReply((int)514136, (int)-1, (int)15350);
		goto Label_3658;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xe32";
	}
Label_3658:
	var_1302_bool = 0;
	func_5745(var_1302_bool);
	if(var_1302_bool != 0) {

	Label_3662:
		lshWaitForAnimEnd();
		var_1303_object = var_3_object;
		if(var_1303_object != 0) {
		} else {
			var_1304_string = "";
			var_1304_string = var_2_object;
			func_5523(var_1304_string);
			goto Label_3662;
	}
		PlayAnimation("all", "idle");

	Label_3677:
		WaitForAnimEnd();
		var_1307_object = var_3_object;
		if(var_1307_object != 0) {
			goto Label_3687;
		}
		PlayAnimation("all", "idle");
		goto Label_3677;
	}
	goto Label_3687;
	
Label_3687:
	return 0;
	
}


func_5680(var_111_object, var_112_string, var_113_int)
{
	var_114_object = Obj(); var_115_object = Obj();
	CreateInvItem(var_115_object);
	@@var_115_object:SetItemName(var_112_string);
	var_116_object = Obj(); var_117_object = Obj(); var_118_int = 0;
	var_111_object = var_116_object;
	var_115_object = var_117_object;
	var_113_int = var_118_int;
	func_5661(var_116_object, var_117_object, var_118_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6196(var_846_bool)
{
	var_848_int = 0; var_849_string = "";
	func_5625(var_848_int, "d4q03");
	var_851_bool = var_848_int == (int)3;
	if(var_851_bool != 0) {
		var_846_bool = 1;
		return 0;
	}
	var_846_bool = 0;
	return 0;
}


func_3127(var_0_bool, var_1073_int, var_1074_object)
{
	var_1076_object = Obj(); var_1077_bool = 0; var_1078_int = 0; var_1079_bool = 0; var_1080_object = Obj(); var_1081_bool = 0; var_1082_int = 0; var_1083_bool = 0;
	var_0_bool = var_1074_object;
	var_1084_bool = 0; var_1085_object = Obj(); var_1086_float = 0;
	var_1074_object = var_1085_object;
	func_5237(var_1084_bool, var_1085_object, (float)70.0);
	var_1087_bool = var_1084_bool == 0; //@nz
	if(var_1087_bool != 0) {
		var_1073_int = -2;
		return 8;
	}
	CreateDialog(var_1080_object);
	var_1088_int = 0;
	func_5739(var_1088_int);
	@@var_1080_object:SetNPCName(var_1088_int);
	var_1089_int = 0;
	func_5737(var_1089_int);
	@@var_1080_object:SetNPCDescription(var_1089_int);
	var_1090_string = "";
	func_5741(var_1090_string);
	@@var_1080_object:SetPhoto(var_1090_string);
	var_1091_string = "";
	func_5743(var_1091_string);
	@@var_1080_object:SetPhoto2(var_1091_string);
	var_1092_int = 0;
	func_6536(var_1092_int);
	@@var_1080_object:SetPlayerName(var_1092_int);
	IsOverrideActive(var_1081_bool);
	var_1093_bool = var_1081_bool;
	if(var_1093_bool != 0) {
		var_1073_int = -2;
		return 8;
	}
	DoDialog(var_1080_object);
	var_1094_bool = 0; var_1095_object = Obj();
	func_5604(Obj());
	var_1096_object = var_1095_object;
	func_5324(var_1094_bool, var_1095_object);
	var_1097_object = Obj(); var_1098_object = Obj();
	var_1074_object = var_1097_object;
	var_1080_object = var_1098_object;
	TaskCall(14);
	func_3208(var_1099_object, var_1100_object, var_1101_string, var_1102_bool, var_1097_object, var_1098_object);
	TaskReturn();
	@@var_1080_object:IsDialogEnd(var_1083_bool);
	
Label_3190:
	var_1127_bool = var_1083_bool == 0; //@nz
	if(var_1127_bool != 0) {
		sync();
		@@var_1080_object:IsDialogEnd(var_1083_bool);
		goto Label_3190;
	}
	var_1074_object = Obj();
	func_5306();
	StopDialog(var_1080_object);
	@@var_1080_object:GetReturnValue((int)-1);
	var_1082_int = var_1073_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5693(var_94_float)
{
	var_95_float = 0; var_96_float = 0;
	GetGameTime(var_96_float);
	var_96_float = var_94_float;
	return 2;
}


func_2110(var_0_bool, var_883_int, var_884_object)
{
	var_886_object = Obj(); var_887_bool = 0; var_888_int = 0; var_889_bool = 0; var_890_object = Obj(); var_891_bool = 0; var_892_int = 0; var_893_bool = 0;
	var_0_bool = var_884_object;
	var_894_bool = 0; var_895_object = Obj(); var_896_float = 0;
	var_884_object = var_895_object;
	func_5237(var_894_bool, var_895_object, (float)70.0);
	var_897_bool = var_894_bool == 0; //@nz
	if(var_897_bool != 0) {
		var_883_int = -2;
		return 8;
	}
	CreateDialog(var_890_object);
	var_898_int = 0;
	func_5739(var_898_int);
	@@var_890_object:SetNPCName(var_898_int);
	var_899_int = 0;
	func_5737(var_899_int);
	@@var_890_object:SetNPCDescription(var_899_int);
	var_900_string = "";
	func_5741(var_900_string);
	@@var_890_object:SetPhoto(var_900_string);
	var_901_string = "";
	func_5743(var_901_string);
	@@var_890_object:SetPhoto2(var_901_string);
	var_902_int = 0;
	func_6536(var_902_int);
	@@var_890_object:SetPlayerName(var_902_int);
	IsOverrideActive(var_891_bool);
	var_903_bool = var_891_bool;
	if(var_903_bool != 0) {
		var_883_int = -2;
		return 8;
	}
	DoDialog(var_890_object);
	var_904_bool = 0; var_905_object = Obj();
	func_5604(Obj());
	var_906_object = var_905_object;
	func_5324(var_904_bool, var_905_object);
	var_907_object = Obj(); var_908_object = Obj();
	var_884_object = var_907_object;
	var_890_object = var_908_object;
	TaskCall(10);
	func_2191(var_909_object, var_910_object, var_911_string, var_912_bool, var_907_object, var_908_object);
	TaskReturn();
	@@var_890_object:IsDialogEnd(var_893_bool);
	
Label_2173:
	var_1005_bool = var_893_bool == 0; //@nz
	if(var_1005_bool != 0) {
		sync();
		@@var_890_object:IsDialogEnd(var_893_bool);
		goto Label_2173;
	}
	var_884_object = Obj();
	func_5306();
	StopDialog(var_890_object);
	@@var_890_object:GetReturnValue((int)-1);
	var_892_int = var_883_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6208(var_921_bool)
{
	var_923_int = 0; var_924_string = "";
	func_5625(var_923_int, "ood5Grif2");
	var_926_bool = var_923_int == (int)0;
	if(var_926_bool != 0) {
		var_921_bool = 1;
		return 0;
	}
	var_921_bool = 0;
	return 0;
}


func_5698(var_87_int)
{
	var_88_float = 0; var_89_float = 0;
	GetGameTime(var_89_float);
	var_91_int = 0;
	var_91_int = var_89_float / (int)24;
	var_87_int = (int)1 + var_91_int;
	return 2;
}


func_4677(var_0_bool, var_1380_int, var_1381_object)
{
	var_1383_object = Obj(); var_1384_bool = 0; var_1385_int = 0; var_1386_bool = 0; var_1387_object = Obj(); var_1388_bool = 0; var_1389_int = 0; var_1390_bool = 0;
	var_0_bool = var_1381_object;
	var_1391_bool = 0; var_1392_object = Obj(); var_1393_float = 0;
	var_1381_object = var_1392_object;
	func_5237(var_1391_bool, var_1392_object, (float)70.0);
	var_1394_bool = var_1391_bool == 0; //@nz
	if(var_1394_bool != 0) {
		var_1380_int = -2;
		return 8;
	}
	CreateDialog(var_1387_object);
	var_1395_int = 0;
	func_5739(var_1395_int);
	@@var_1387_object:SetNPCName(var_1395_int);
	var_1396_int = 0;
	func_5737(var_1396_int);
	@@var_1387_object:SetNPCDescription(var_1396_int);
	var_1397_string = "";
	func_5741(var_1397_string);
	@@var_1387_object:SetPhoto(var_1397_string);
	var_1398_string = "";
	func_5743(var_1398_string);
	@@var_1387_object:SetPhoto2(var_1398_string);
	var_1399_int = 0;
	func_6536(var_1399_int);
	@@var_1387_object:SetPlayerName(var_1399_int);
	IsOverrideActive(var_1388_bool);
	var_1400_bool = var_1388_bool;
	if(var_1400_bool != 0) {
		var_1380_int = -2;
		return 8;
	}
	DoDialog(var_1387_object);
	var_1401_bool = 0; var_1402_object = Obj();
	func_5604(Obj());
	var_1403_object = var_1402_object;
	func_5324(var_1401_bool, var_1402_object);
	var_1404_object = Obj(); var_1405_object = Obj();
	var_1381_object = var_1404_object;
	var_1387_object = var_1405_object;
	TaskCall(26);
	func_4758(var_1406_object, var_1407_object, var_1408_string, var_1409_bool, var_1404_object, var_1405_object);
	TaskReturn();
	@@var_1387_object:IsDialogEnd(var_1390_bool);
	
Label_4740:
	var_1437_bool = var_1390_bool == 0; //@nz
	if(var_1437_bool != 0) {
		sync();
		@@var_1387_object:IsDialogEnd(var_1390_bool);
		goto Label_4740;
	}
	var_1381_object = Obj();
	func_5306();
	StopDialog(var_1387_object);
	@@var_1387_object:GetReturnValue((int)-1);
	var_1389_int = var_1380_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5191(var_107_bool)
{
	var_107_bool = 1;
	return 0;
}


func_5193()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_5707(var_443_bool, var_444_int)
{
	var_445_int = 0;
	func_5698(var_445_int);
	var_443_bool = var_445_int == var_444_int;
	return 0;
}


func_6220(var_499_bool)
{
	var_501_bool = 0;
	var_501_bool = 0;
	var_502_bool = 0;
	var_502_bool = 0;
	var_503_int = 0; var_504_string = "";
	func_5625(var_503_int, "d1q01");
	var_506_bool = var_503_int != (int)0;
	if(var_506_bool != 0) {
		var_507_int = 0; var_508_string = "";
		func_5625(var_507_int, "d1q01");
		var_510_bool = var_507_int != (int)1000;
		if(var_510_bool != 0) {
			var_502_bool = 1;
		}
	}
	if(var_502_bool != 0) {
		var_511_int = 0; var_512_string = "";
		func_5625(var_511_int, "d1q01");
		var_514_bool = var_511_int != (int)-1;
		if(var_514_bool != 0) {
			var_501_bool = 1;
		}
	}
	if(var_501_bool != 0) {
		var_499_bool = 1;
		return 0;
	}
	var_499_bool = 0;
	return 0;
}


func_5198(var_82_float, var_83_object)
{
	var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0);
	GetPosition(var_87_cvector);
	@@var_83_object:GetPosition(var_88_cvector);
	var_89_cvector = var_88_cvector - var_87_cvector;
	var_82_float = var_89_cvector | var_89_cvector;
	return 6;
}


func_5713(var_93_string, var_94_int)
{
	var_95_string = ""; var_96_string = "";
	var_97_int = var_94_int;
	if(var_97_int != 0) {
		"idle" = "idle" + var_94_int;
	}
	var_96_string = var_93_string;
	return 2;
}


func_5206(var_147_object, var_148_string, var_149_int)
{
	var_150_int = 0; var_151_int = 0;
	@@var_147_object:GetProperty(var_148_string, var_151_int);
	var_152_int = var_151_int + var_149_int;
	@@var_147_object:SetProperty(var_148_string, var_152_int);
	return 2;
}


func_5720(var_87_int)
{
	var_88_int = 0; var_89_bool = 0; var_90_int = 0; var_91_bool = 0;
	var_90_int = 0;
	
Label_5722:
	var_93_string = ""; var_94_int = 0;
	var_90_int = var_94_int;
	func_5713(var_93_string, var_94_int);
	HasAnimation(var_91_bool, "all", var_93_string);
	var_98_bool = var_91_bool == 0; //@nz
	if(var_98_bool != 0) {
	} else {
		var_90_int = var_90_int + (int)1;
		goto Label_5722;
	}
	var_90_int = var_87_int;
	return 4;
	
}


func_5213(var_75_bool, var_76_cvector)
{
	var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_bool = 0;
	GetPosition(var_80_cvector);
	var_81_cvector = var_76_cvector - var_80_cvector;
	var_83_float = GetByIndex(var_81_cvector, 0);
	var_84_float = GetByIndex(var_81_cvector, 2);
	Rotate(var_83_float, var_84_float, var_82_bool);
	var_82_bool = var_75_bool;
	return 6;
}


func_4192(var_0_bool, var_447_int, var_448_object)
{
	var_450_object = Obj(); var_451_bool = 0; var_452_int = 0; var_453_bool = 0; var_454_object = Obj(); var_455_bool = 0; var_456_int = 0; var_457_bool = 0;
	var_0_bool = var_448_object;
	var_458_bool = 0; var_459_object = Obj(); var_460_float = 0;
	var_448_object = var_459_object;
	func_5237(var_458_bool, var_459_object, (float)70.0);
	var_461_bool = var_458_bool == 0; //@nz
	if(var_461_bool != 0) {
		var_447_int = -2;
		return 8;
	}
	CreateDialog(var_454_object);
	var_462_int = 0;
	func_5739(var_462_int);
	@@var_454_object:SetNPCName(var_462_int);
	var_463_int = 0;
	func_5737(var_463_int);
	@@var_454_object:SetNPCDescription(var_463_int);
	var_464_string = "";
	func_5741(var_464_string);
	@@var_454_object:SetPhoto(var_464_string);
	var_465_string = "";
	func_5743(var_465_string);
	@@var_454_object:SetPhoto2(var_465_string);
	var_466_int = 0;
	func_6536(var_466_int);
	@@var_454_object:SetPlayerName(var_466_int);
	IsOverrideActive(var_455_bool);
	var_467_bool = var_455_bool;
	if(var_467_bool != 0) {
		var_447_int = -2;
		return 8;
	}
	DoDialog(var_454_object);
	var_468_bool = 0; var_469_object = Obj();
	func_5604(Obj());
	var_470_object = var_469_object;
	func_5324(var_468_bool, var_469_object);
	var_471_object = Obj(); var_472_object = Obj();
	var_448_object = var_471_object;
	var_454_object = var_472_object;
	TaskCall(24);
	func_4273(var_473_object, var_474_object, var_475_string, var_476_bool, var_471_object, var_472_object);
	TaskReturn();
	@@var_454_object:IsDialogEnd(var_457_bool);
	
Label_4255:
	var_538_bool = var_457_bool == 0; //@nz
	if(var_538_bool != 0) {
		sync();
		@@var_454_object:IsDialogEnd(var_457_bool);
		goto Label_4255;
	}
	var_448_object = Obj();
	func_5306();
	StopDialog(var_454_object);
	@@var_454_object:GetReturnValue((int)-1);
	var_456_int = var_447_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_103(var_0_bool, var_1_object, var_2_object, var_3_object, var_377_object, var_378_object)
{
	var_0_bool = var_378_object;
	var_1_object = var_377_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_384_object = Obj(); var_385_object = Obj();
		var_384_object = var_1_object;
		var_385_object = var_0_bool;
		func_5936();
		var_388_string = "";
		func_171(var_378_object, "Neutral");
		@@@var_0_bool:SetMessage((int)500383);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)500384, (int)448, (int)445);
		@@@var_0_bool:AddReply((int)500385, (int)449, (int)446);
		@@@var_0_bool:AddReply((int)500386, (int)450, (int)447);
		goto Label_141;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x6b";
	}
Label_141:
	var_415_bool = 0;
	func_5745(var_415_bool);
	if(var_415_bool != 0) {

	Label_145:
		lshWaitForAnimEnd();
		var_416_object = var_3_object;
		if(var_416_object != 0) {
		} else {
			var_417_string = "";
			var_417_string = var_2_object;
			func_5523(var_417_string);
			goto Label_145;
	}
		PlayAnimation("all", "idle");

	Label_160:
		WaitForAnimEnd();
		var_430_object = var_3_object;
		if(var_430_object != 0) {
			goto Label_170;
		}
		PlayAnimation("all", "idle");
		goto Label_160;
	}
	goto Label_170;
	
Label_170:
	return 0;
	
}


func_3688(var_2_object, var_1287_string)
{
	var_1288_bool = 0;
	func_5745(var_1288_bool);
	var_1289_bool = var_1288_bool == 0; //@nz
	if(var_1289_bool != 0) {
		return 0;
	}
	var_1290_bool = var_1287_string == var_2_object;
	if(var_1290_bool != 0) {
		return 0;
	}
	var_1291_string = ""; var_1292_bool = 0;
	var_1287_string = var_1291_string;
	var_1294_bool = var_1287_string == "";
	if(var_1294_bool != 0) {
		var_1292_bool = 0;
	} else {
		var_1292_bool = 1;
	}
	func_5539(var_1291_string, var_1292_bool);
	var_2_object = var_1287_string;
	return 0;
	
}


func_5737(var_275_int)
{
	var_275_int = 515535;
	return 0;
}


func_5223(var_71_bool, var_72_object)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0);
	@@var_72_object:GetPosition(var_74_cvector);
	var_75_bool = 0; var_76_cvector = CVector(0,0,0);
	var_74_cvector = var_76_cvector;
	func_5213(var_75_bool, var_76_cvector);
	var_75_bool = var_71_bool;
	return 2;
}


func_5739(var_274_int)
{
	var_274_int = 502860;
	return 0;
}


func_5741(var_276_string)
{
	var_276_string = "ui/NPC_Grif.png";
	return 0;
}


func_6254(var_989_bool, var_990_object)
{
	var_991_float = 0; var_992_float = 0;
	@@var_990_object:GetProperty("money", var_992_float);
	var_995_bool = var_992_float >= (int)10000;
	if(var_995_bool != 0) {
		var_989_bool = 1;
		return 2;
	}
	var_989_bool = 0;
	return 2;
}


func_5743(var_277_string)
{
	var_277_string = "ui/NPC_Grif_b.png";
	return 0;
}


func_5232(var_69_bool)
{
	var_70_bool = 0; var_71_bool = 0;
	IsLoaded(var_71_bool);
	var_71_bool = var_69_bool;
	return 2;
}


func_5745(var_269_bool)
{
	var_269_bool = 1;
	return 0;
}


func_5747(var_143_object)
{
	Trace("money10000 is given");
	var_146_object = Obj(); var_147_int = 0;
	var_143_object = var_146_object;
	func_5642(var_146_object, (int)10000);
	return 0;
}


func_5237(var_226_bool, var_227_object, var_228_float)
{
	var_229_float = 0; var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_bool = 0; var_237_bool = 0; var_238_float = 0; var_239_cvector = CVector(0,0,0); var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0); var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_bool = 0; var_246_bool = 0;
	@@var_227_object:GetPosition(var_239_cvector);
	@@var_227_object:GetEyesHeight(var_238_float);
	var_247_float = GetByIndex(var_239_cvector, 1);
	var_247_float = var_247_float + var_238_float;
	SetByIndex(var_239_cvector, 1) = var_247_float;
	GetPosition(var_240_cvector);
	GetEyesHeight(var_238_float);
	var_248_float = GetByIndex(var_240_cvector, 1);
	var_248_float = var_248_float + var_238_float;
	SetByIndex(var_240_cvector, 1) = var_248_float;
	var_241_cvector = var_239_cvector - var_240_cvector;
	var_249_float = GetByIndex(var_241_cvector, 1);
	SetByIndex(var_241_cvector, 1) = (float)0;
	var_250_int = var_241_cvector | var_241_cvector;
	var_251_float = sqrt(var_250_int);
	var_241_cvector = var_241_cvector / var_251_float;
	var_242_cvector = -var_241_cvector;
	var_252_float = var_241_cvector * var_228_float;
	var_253_cvector = CVector(0,0,0); var_254_cvector = CVector(0,0,0);
	var_254_cvector = var_242_cvector ^ CVector(0.0, 1.0, 0.0);
	func_5610(var_253_cvector, var_254_cvector);
	var_262_float = var_253_cvector * (int)25;
	var_263_int = var_252_float + var_262_float;
	var_243_cvector = var_263_int - CVector(0.0, 10.0, 0.0);
	var_244_cvector = var_240_cvector + var_243_cvector;
	IsOverrideActive(var_245_bool);
	var_265_bool = var_245_bool;
	if(var_265_bool != 0) {
		var_226_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_244_cvector, var_242_cvector, (bool)1);
	var_267_float = GetByIndex(var_243_cvector, 0);
	var_268_float = GetByIndex(var_243_cvector, 2);
	Rotate(var_267_float, var_268_float);
	var_269_bool = 0;
	func_5745(var_269_bool);
	if(var_269_bool != 0) {
	} else {
		HasAnimationTrack(var_246_bool, "head");
		var_271_bool = var_246_bool;
		if(var_271_bool == 0) goto Label_5300;
		LookAsyncCamera("head");
	}
Label_5300:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_226_bool = 1;
	return 18;
	
}


func_6265()
{
	var_81_object = Obj(); var_82_object = Obj();
	CreateDiaryEntry(var_82_object, (int)132, (int)2, (int)515269);
	var_86_bool = 0; var_87_object = Obj(); var_88_int = 0;
	var_82_object = var_87_object;
	func_6317(var_86_bool, var_87_object, (int)11);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5757()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_5763()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_6278()
{
	var_102_object = Obj(); var_103_object = Obj();
	CreateDiaryEntry(var_103_object, (int)97, (int)2, (int)512179);
	var_107_bool = 0; var_108_object = Obj(); var_109_int = 0;
	var_103_object = var_108_object;
	func_6317(var_107_bool, var_108_object, (int)22);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3208(var_0_bool, var_1_object, var_2_object, var_3_object, var_1097_object, var_1098_object)
{
	var_0_bool = var_1098_object;
	var_1_object = var_1097_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1104_string = "";
		func_3266(var_1098_object, "Smile");
		@@@var_0_bool:SetMessage((int)514126);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)514127, (int)-1, (int)15341);
		@@@var_0_bool:AddReply((int)514128, (int)-1, (int)15342);
		goto Label_3236;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xc8c";
	}
Label_3236:
	var_1119_bool = 0;
	func_5745(var_1119_bool);
	if(var_1119_bool != 0) {

	Label_3240:
		lshWaitForAnimEnd();
		var_1120_object = var_3_object;
		if(var_1120_object != 0) {
		} else {
			var_1121_string = "";
			var_1121_string = var_2_object;
			func_5523(var_1121_string);
			goto Label_3240;
	}
		PlayAnimation("all", "idle");

	Label_3255:
		WaitForAnimEnd();
		var_1124_object = var_3_object;
		if(var_1124_object != 0) {
			goto Label_3265;
		}
		PlayAnimation("all", "idle");
		goto Label_3255;
	}
	goto Label_3265;
	
Label_3265:
	return 0;
	
}


func_5769(var_108_object)
{
	Trace("revolver ammo15 is given");
	var_111_object = Obj(); var_112_string = ""; var_113_int = 0;
	var_108_object = var_111_object;
	func_5680(var_111_object, "revolver_ammo", (int)15);
	return 0;
}


func_2191(var_0_bool, var_1_object, var_2_object, var_3_object, var_907_object, var_908_object)
{
	var_0_bool = var_908_object;
	var_1_object = var_907_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_914_bool = 0;
		var_914_bool = 0;
		var_915_bool = 0; var_916_object = Obj();
		var_916_object = var_1_object;
		func_6184(var_916_object);
		if(var_915_bool != 0) {
			var_921_bool = 0; var_922_object = Obj();
			var_922_object = var_1_object;
			func_6208(var_922_object);
			if(var_921_bool != 0) {
				var_914_bool = 1;
			}
		}
		if(var_914_bool != 0) {
			var_927_object = Obj(); var_928_object = Obj();
			var_927_object = var_1_object;
			var_928_object = var_0_bool;
			func_5964();
			var_931_string = "";
			func_2346(var_908_object, "Sly");
			@@@var_0_bool:SetMessage((int)511720);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511721, (int)12928, (int)12927);
			@@@var_0_bool:AddReply((int)515755, (int)12928, (int)16821);
		} else {
				var_954_string = "";
				func_2346(var_908_object, "Neutral");
				@@@var_0_bool:SetMessage((int)511704);
				@@@var_0_bool:ClearReplies();
				var_956_bool = 0;
				var_956_bool = 0;
				var_957_bool = 0; var_958_object = Obj();
				var_958_object = var_1_object;
				func_6138(var_958_object);
				if(var_957_bool != 0) {
					var_963_bool = 0; var_964_object = Obj();
					var_964_object = var_1_object;
					func_6150(var_964_object);
					if(var_963_bool != 0) {
						var_956_bool = 1;
					}
				}
				if(var_956_bool != 0) {
					@@@var_0_bool:AddReply((int)511705, (int)12910, (int)12909);
				}
				var_972_bool = 0;
				var_972_bool = 0;
				var_973_bool = 0;
				var_973_bool = 0;
				var_974_bool = 0;
				var_974_bool = 0;
				var_975_bool = 0; var_976_object = Obj();
				var_976_object = var_1_object;
				func_6138(var_976_object);
				if(var_975_bool != 0) {
					var_977_bool = 0; var_978_object = Obj();
					var_978_object = var_1_object;
					func_6172(var_978_object);
					var_983_bool = var_977_bool == 0; //@nz
					if(var_983_bool != 0) {
						var_974_bool = 1;
					}
				}
				if(var_974_bool != 0) {
					var_984_bool = 0; var_985_object = Obj();
					var_985_object = var_1_object;
					func_6150(var_985_object);
					var_986_bool = var_984_bool == 0; //@nz
					if(var_986_bool != 0) {
						var_973_bool = 1;
					}
				}
				if(var_973_bool != 0) {
					var_987_bool = 0; var_988_object = Obj();
					var_988_object = var_1_object;
					func_6162(var_987_bool, var_988_object);
					if(var_987_bool != 0) {
						var_972_bool = 1;
					}
				}
				if(var_972_bool != 0) {
					@@@var_0_bool:AddReply((int)511734, (int)16834, (int)12940);
				}
				@@@var_0_bool:AddReply((int)514120, (int)-1, (int)15334);
				@@@var_0_bool:AddReply((int)511739, (int)-1, (int)12945);
				goto Label_2316;
		}
	}
Label_2316:
	var_946_bool = 0;
	func_5745(var_946_bool);
	if(var_946_bool != 0) {

	Label_2320:
		lshWaitForAnimEnd();
		var_947_object = var_3_object;
		if(var_947_object != 0) {
		} else {
			var_948_string = "";
			var_948_string = var_2_object;
			func_5523(var_948_string);
			goto Label_2320;
	}
		PlayAnimation("all", "idle");

	Label_2335:
		WaitForAnimEnd();
		var_951_object = var_3_object;
		if(var_951_object != 0) {
			goto Label_2345;
		}
		PlayAnimation("all", "idle");
		goto Label_2335;

	}
	goto Label_2345;
	
Label_2345:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x893";


func_6291()
{
	var_117_object = Obj(); var_118_object = Obj();
	CreateDiaryEntry(var_118_object, (int)145, (int)1, (int)515345);
	var_122_bool = 0; var_123_object = Obj(); var_124_int = 0;
	var_118_object = var_123_object;
	func_6317(var_122_bool, var_123_object, (int)139);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5780(var_140_object)
{
	Trace("money 10000 removed");
	var_143_object = Obj(); var_144_int = 0;
	var_140_object = var_143_object;
	func_5642(var_143_object, (int)-10000);
	return 0;
}


func_4758(var_0_bool, var_1_object, var_2_object, var_3_object, var_1404_object, var_1405_object)
{
	var_0_bool = var_1405_object;
	var_1_object = var_1404_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1411_string = "";
		func_4821(var_1405_object, "Neutral");
		@@@var_0_bool:SetMessage((int)535294);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)535295, (int)36973, (int)36972);
		@@@var_0_bool:AddReply((int)535302, (int)-1, (int)36980);
		@@@var_0_bool:AddReply((int)535303, (int)-1, (int)36981);
		goto Label_4791;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x129a";
	}
Label_4791:
	var_1429_bool = 0;
	func_5745(var_1429_bool);
	if(var_1429_bool != 0) {

	Label_4795:
		lshWaitForAnimEnd();
		var_1430_object = var_3_object;
		if(var_1430_object != 0) {
		} else {
			var_1431_string = "";
			var_1431_string = var_2_object;
			func_5523(var_1431_string);
			goto Label_4795;
	}
		PlayAnimation("all", "idle");

	Label_4810:
		WaitForAnimEnd();
		var_1434_object = var_3_object;
		if(var_1434_object != 0) {
			goto Label_4820;
		}
		PlayAnimation("all", "idle");
		goto Label_4810;
	}
	goto Label_4820;
	
Label_4820:
	return 0;
	
}


func_1179(var_2_object, var_804_string)
{
	var_805_bool = 0;
	func_5745(var_805_bool);
	var_806_bool = var_805_bool == 0; //@nz
	if(var_806_bool != 0) {
		return 0;
	}
	var_807_bool = var_804_string == var_2_object;
	if(var_807_bool != 0) {
		return 0;
	}
	var_808_string = ""; var_809_bool = 0;
	var_804_string = var_808_string;
	var_811_bool = var_804_string == "";
	if(var_811_bool != 0) {
		var_809_bool = 0;
	} else {
		var_809_bool = 1;
	}
	func_5539(var_808_string, var_809_bool);
	var_2_object = var_804_string;
	return 0;
	
}


func_5790()
{
	SetVariable("ood1Grif1", (int)1);
	return 0;
}


func_6304(var_131_object)
{
	var_132_object = Obj(); var_133_object = Obj();
	GetDiaryRoot(var_133_object);
	var_134_bool = var_133_object == 0; //@nz
	if(var_134_bool != 0) {
		Trace("Can't retrieve diary root");
		var_131_object = 0;
		return 2;
	}
	var_133_object = var_131_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5796()
{
	SetVariable("ood1Grif2", (int)1);
	return 0;
}


func_5802()
{
	SetVariable("ood3Grif1", (int)1);
	return 0;
}


func_171(var_2_object, var_388_string)
{
	var_389_bool = 0;
	func_5745(var_389_bool);
	var_390_bool = var_389_bool == 0; //@nz
	if(var_390_bool != 0) {
		return 0;
	}
	var_391_bool = var_388_string == var_2_object;
	if(var_391_bool != 0) {
		return 0;
	}
	var_392_string = ""; var_393_bool = 0;
	var_388_string = var_392_string;
	var_395_bool = var_388_string == "";
	if(var_395_bool != 0) {
		var_393_bool = 0;
	} else {
		var_393_bool = 1;
	}
	func_5539(var_392_string, var_393_bool);
	var_2_object = var_388_string;
	return 0;
	
}


func_6317(var_122_bool, var_123_object, var_124_int)
{
	var_125_object = Obj(); var_126_object = Obj(); var_127_int = 0; var_128_object = Obj(); var_129_object = Obj(); var_130_int = 0;
	func_6304(Obj());
	var_131_object = var_128_object;
	@@var_128_object:Find(var_124_int, var_129_object);
	var_136_bool = var_129_object == 0; //@nz
	if(var_136_bool != 0) {
		var_138_int = "Can't find diary parent with id: " + var_124_int;
		Trace(var_138_int);
		var_122_bool = 0;
		return 6;
	}
	@@var_129_object:AddChild(var_123_object);
	SendWorldWndMessage((int)7);
	@@var_123_object:GetCategory(var_130_int);
	SetDiarySection(var_130_int);
	var_122_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_5808()
{
	SetVariable("ood4Grif3", (int)1);
	return 0;
}


func_4273(var_0_bool, var_1_object, var_2_object, var_3_object, var_471_object, var_472_object)
{
	var_0_bool = var_472_object;
	var_1_object = var_471_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_478_string = "";
		func_4360(var_472_object, "Neutral");
		@@@var_0_bool:SetMessage((int)533838);
		@@@var_0_bool:ClearReplies();
		var_487_bool = 0; var_488_object = Obj();
		var_488_object = var_1_object;
		func_5970(var_488_object);
		if(var_487_bool != 0) {
			@@@var_0_bool:AddReply((int)533839, (int)35390, (int)35389);
		}
		var_498_bool = 0;
		var_498_bool = 0;
		var_499_bool = 0; var_500_object = Obj();
		var_500_object = var_1_object;
		func_6220(var_500_object);
		if(var_499_bool != 0) {
			var_515_bool = 0; var_516_object = Obj();
			var_516_object = var_1_object;
			func_5982(var_516_object);
			if(var_515_bool != 0) {
				var_498_bool = 1;
			}
		}
		if(var_498_bool != 0) {
			@@@var_0_bool:AddReply((int)533960, (int)35529, (int)35528);
		}
		@@@var_0_bool:AddReply((int)533843, (int)-1, (int)35393);
		@@@var_0_bool:AddReply((int)533844, (int)-1, (int)35394);
		goto Label_4330;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x10b5";
	}
Label_4330:
	var_530_bool = 0;
	func_5745(var_530_bool);
	if(var_530_bool != 0) {

	Label_4334:
		lshWaitForAnimEnd();
		var_531_object = var_3_object;
		if(var_531_object != 0) {
		} else {
			var_532_string = "";
			var_532_string = var_2_object;
			func_5523(var_532_string);
			goto Label_4334;
	}
		PlayAnimation("all", "idle");

	Label_4349:
		WaitForAnimEnd();
		var_535_object = var_3_object;
		if(var_535_object != 0) {
			goto Label_4359;
		}
		PlayAnimation("all", "idle");
		goto Label_4349;
	}
	goto Label_4359;
	
Label_4359:
	return 0;
	
}


func_3760(var_0_bool, var_1195_int, var_1196_object)
{
	var_1198_object = Obj(); var_1199_bool = 0; var_1200_int = 0; var_1201_bool = 0; var_1202_object = Obj(); var_1203_bool = 0; var_1204_int = 0; var_1205_bool = 0;
	var_0_bool = var_1196_object;
	var_1206_bool = 0; var_1207_object = Obj(); var_1208_float = 0;
	var_1196_object = var_1207_object;
	func_5237(var_1206_bool, var_1207_object, (float)70.0);
	var_1209_bool = var_1206_bool == 0; //@nz
	if(var_1209_bool != 0) {
		var_1195_int = -2;
		return 8;
	}
	CreateDialog(var_1202_object);
	var_1210_int = 0;
	func_5739(var_1210_int);
	@@var_1202_object:SetNPCName(var_1210_int);
	var_1211_int = 0;
	func_5737(var_1211_int);
	@@var_1202_object:SetNPCDescription(var_1211_int);
	var_1212_string = "";
	func_5741(var_1212_string);
	@@var_1202_object:SetPhoto(var_1212_string);
	var_1213_string = "";
	func_5743(var_1213_string);
	@@var_1202_object:SetPhoto2(var_1213_string);
	var_1214_int = 0;
	func_6536(var_1214_int);
	@@var_1202_object:SetPlayerName(var_1214_int);
	IsOverrideActive(var_1203_bool);
	var_1215_bool = var_1203_bool;
	if(var_1215_bool != 0) {
		var_1195_int = -2;
		return 8;
	}
	DoDialog(var_1202_object);
	var_1216_bool = 0; var_1217_object = Obj();
	func_5604(Obj());
	var_1218_object = var_1217_object;
	func_5324(var_1216_bool, var_1217_object);
	var_1219_object = Obj(); var_1220_object = Obj();
	var_1196_object = var_1219_object;
	var_1202_object = var_1220_object;
	TaskCall(20);
	func_3841(var_1221_object, var_1222_object, var_1223_string, var_1224_bool, var_1219_object, var_1220_object);
	TaskReturn();
	@@var_1202_object:IsDialogEnd(var_1205_bool);
	
Label_3823:
	var_1249_bool = var_1205_bool == 0; //@nz
	if(var_1249_bool != 0) {
		sync();
		@@var_1202_object:IsDialogEnd(var_1205_bool);
		goto Label_3823;
	}
	var_1196_object = Obj();
	func_5306();
	StopDialog(var_1202_object);
	@@var_1202_object:GetReturnValue((int)-1);
	var_1204_int = var_1195_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5814()
{
	SetVariable("ood4Grif4", (int)1);
	return 0;
}


func_5306()
{
	var_435_bool = 0; var_436_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_438_bool = 0;
	func_5745(var_438_bool);
	if(var_438_bool != 0) {
	} else {
		HasAnimationTrack(var_436_bool, "head");
		var_440_bool = var_436_bool;
		if(var_440_bool == 0) goto Label_5323;
		UnlookAsync("head");
	}
Label_5323:
	return 2;
	
}


func_5820()
{
	SetVariable("ood2Grif2", (int)1);
	return 0;
}


func_5826()
{
	SetVariable("ood2Grif3", (int)1);
	return 0;
}


func_3266(var_2_object, var_1104_string)
{
	var_1105_bool = 0;
	func_5745(var_1105_bool);
	var_1106_bool = var_1105_bool == 0; //@nz
	if(var_1106_bool != 0) {
		return 0;
	}
	var_1107_bool = var_1104_string == var_2_object;
	if(var_1107_bool != 0) {
		return 0;
	}
	var_1108_string = ""; var_1109_bool = 0;
	var_1104_string = var_1108_string;
	var_1111_bool = var_1104_string == "";
	if(var_1111_bool != 0) {
		var_1109_bool = 0;
	} else {
		var_1109_bool = 1;
	}
	func_5539(var_1108_string, var_1109_bool);
	var_2_object = var_1104_string;
	return 0;
	
}


func_5832()
{
	SetVariable("ood2Grif4", (int)1);
	return 0;
}


func_6345(var_83_object)
{
	var_84_object = Obj(); var_85_object = Obj(); var_86_object = Obj(); var_87_object = Obj();
	GetMainOutdoorScene(var_86_object);
	var_88_bool = var_86_object == 0; //@ne
	if(var_88_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_87_object = 0;
		var_87_object = var_83_object;
		return 4;
	}
	@@var_86_object:GetMap(var_87_object);
	var_87_object = var_83_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5324(var_287_bool, var_288_object)
{
	var_292_int = 0; var_293_int = 0; var_294_int = 0; var_295_int = 0;
	GetVariable("voice_common", var_294_int);
	var_297_int = var_294_int;
	if(var_297_int != 0) {
		var_298_bool = 0; var_299_object = Obj();
		var_288_object = var_299_object;
		func_5382(var_298_bool, var_299_object);
		var_328_bool = var_298_bool == 0; //@nz
		if(var_328_bool != 0) {
			var_329_bool = 0; var_330_object = Obj();
			var_288_object = var_330_object;
			func_5419(var_329_bool, var_330_object);
			var_359_bool = var_329_bool == 0; //@nz
			if(var_359_bool != 0) {
				var_287_bool = 0;
				return 4;
			}
		}
		irand(var_295_int, (int)2);
		var_361_int = var_295_int;
		if(var_361_int != 0) {
			var_364_int = var_294_int + (int)1;
			var_366_int = var_364_int % (int)3;
			SetVariable("voice_common", var_366_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_369_bool = 0; var_370_object = Obj();
		var_288_object = var_370_object;
		func_5419(var_369_bool, var_370_object);
		var_371_bool = var_369_bool == 0; //@nz
		if(var_371_bool != 0) {
			var_372_bool = 0; var_373_object = Obj();
			var_288_object = var_373_object;
			func_5382(var_372_bool, var_373_object);
			var_374_bool = var_372_bool == 0; //@nz
			if(var_374_bool != 0) {
				var_287_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_5380;
	
Label_5380:
	var_287_bool = 1;
	return 4;
	
}


func_5838()
{
	SetVariable("d2q02", (int)7);
	func_6265();
	return 0;
}


func_4821(var_2_object, var_1411_string)
{
	var_1412_bool = 0;
	func_5745(var_1412_bool);
	var_1413_bool = var_1412_bool == 0; //@nz
	if(var_1413_bool != 0) {
		return 0;
	}
	var_1414_bool = var_1411_string == var_2_object;
	if(var_1414_bool != 0) {
		return 0;
	}
	var_1415_string = ""; var_1416_bool = 0;
	var_1411_string = var_1415_string;
	var_1418_bool = var_1411_string == "";
	if(var_1418_bool != 0) {
		var_1416_bool = 0;
	} else {
		var_1416_bool = 1;
	}
	func_5539(var_1415_string, var_1416_bool);
	var_2_object = var_1411_string;
	return 0;
	
}


func_5847(var_132_object)
{
	var_134_object = Obj(); var_135_object = Obj();
	Trace("Revolver is given");
	CreateInvItem(var_135_object);
	@@var_135_object:SetItemName("Revolver");
	@@var_135_object:SetProperty("durability", (int)30);
	var_140_object = Obj(); var_141_object = Obj(); var_142_int = 0;
	var_132_object = var_140_object;
	var_135_object = var_141_object;
	func_5661(var_140_object, var_141_object, (int)1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6362()
{
	var_94_bool = 0; var_95_int = 0; var_96_int = 0; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_int = 0; var_101_int = 0;
	ClearSubContainer((int)0);
	func_5698((int)0);
	var_103_int = var_100_int;
	var_104_int = 0; var_105_string = "";
	func_6531(var_104_int, "Rifle");
	AddItem(var_98_bool, var_104_int, (int)0, (int)1);
	var_110_int = 0; var_111_string = "";
	func_6531(var_110_int, "Revolver");
	AddItem(var_98_bool, var_110_int, (int)0, (int)1);
	var_114_int = 0; var_115_string = "";
	func_6531(var_114_int, "Knife");
	AddItem(var_98_bool, var_114_int, (int)0, (int)1);
	var_119_bool = var_100_int != (int)10;
	if(var_119_bool != 0) {
		var_120_int = 0; var_121_string = "";
		func_6531(var_120_int, "tvirin");
		AddItem(var_98_bool, var_120_int, (int)0, (int)1);
	} else {
			var_207_int = 0; var_208_string = "";
			func_6531(var_207_int, "tvirin");
			AddItem(var_98_bool, var_207_int, (int)0, (int)4);
	}
	var_124_int = 0; var_125_string = "";
	func_6531(var_124_int, "lockpick");
	AddItem(var_98_bool, var_124_int, (int)0, (int)3);
	var_128_string = ""; var_129_int = 0; var_130_int = 0;
	func_5576("Scalpel", (int)1, (int)2);
	var_139_string = ""; var_140_int = 0; var_141_int = 0; var_142_int = 0; var_143_int = 0;
	func_5587("revolver_ammo", (int)1, (int)1, (int)5, (int)10);
	var_156_string = ""; var_157_int = 0; var_158_int = 0; var_159_int = 0; var_160_int = 0;
	func_5587("rifle_ammo", (int)1, (int)1, (int)5, (int)20);
	irand(var_99_int, (int)100);
	var_163_bool = var_99_int != (int)0;
	if(var_163_bool != 0) {
		var_164_int = 0; var_165_string = "";
		func_6531(var_164_int, "kerosene");
		AddItem(var_98_bool, var_164_int, (int)0, var_99_int);
	}
	var_168_bool = var_100_int >= (int)3;
	if(var_168_bool != 0) {
		var_169_int = 0; var_170_string = "";
		func_6531(var_169_int, "halfboot_repel");
		AddItem(var_98_bool, var_169_int, (int)0, (int)1);
		var_173_int = 0; var_174_string = "";
		func_6531(var_173_int, "boot_repel");
		AddItem(var_98_bool, var_173_int, (int)0, (int)1);
	}
	var_178_bool = var_100_int >= (int)9;
	if(var_178_bool != 0) {
		var_179_int = 0; var_180_string = "";
		func_6531(var_179_int, "boot_army");
		AddItem(var_98_bool, var_179_int, (int)0, (int)1);
		var_183_int = 0; var_184_string = "";
		func_6531(var_183_int, "balahon");
		AddItem(var_98_bool, var_183_int, (int)0, (int)1);
		var_187_int = 0; var_188_string = "";
		func_6531(var_187_int, "glove_army");
		AddItem(var_98_bool, var_187_int, (int)0, (int)1);
	}
	func_6553((int)0);
	var_191_int = var_101_int;
	var_196_bool = var_101_int == (int)0;
	if(var_196_bool != 0) {
		var_197_int = 0; var_198_string = "";
		func_6531(var_197_int, "Gun_danko");
		AddItem(var_98_bool, var_197_int, (int)0, (int)1);
	} else {
		var_202_bool = var_101_int == (int)2;
		if(var_202_bool == 0) goto Label_6530;
		var_203_int = 0; var_204_string = "";
		func_6531(var_203_int, "Gun");
		AddItem(var_98_bool, var_203_int, (int)0, (int)1);

	}
Label_6530:
	return 8;
	
}


func_5868()
{
	SetVariable("ood4Grif1", (int)1);
	return 0;
}


func_5874()
{
	var_79_object = Obj(); var_80_object = Obj();
	SetVariable("d4q03", (int)2);
	func_6345(Obj());
	var_83_object = var_80_object;
	var_94_float = 0;
	func_5693(var_94_float);
	@@var_80_object:AddMark("d4q03GrifGotoAlexandr", "pt_map_alexandr", (int)0, (int)515331, var_94_float);
	var_101_float = 0;
	func_5693(var_101_float);
	@@var_80_object:AddMark("d4q03GrifGotoAlexandrSelf", "pt_map_grif", (int)0, (int)515332, var_101_float);
	func_6278();
	return 2;
}
EMIT "Stack[-1] = 0";


func_1787(var_0_bool, var_682_int, var_683_object)
{
	var_685_object = Obj(); var_686_bool = 0; var_687_int = 0; var_688_bool = 0; var_689_object = Obj(); var_690_bool = 0; var_691_int = 0; var_692_bool = 0;
	var_0_bool = var_683_object;
	var_693_bool = 0; var_694_object = Obj(); var_695_float = 0;
	var_683_object = var_694_object;
	func_5237(var_693_bool, var_694_object, (float)70.0);
	var_696_bool = var_693_bool == 0; //@nz
	if(var_696_bool != 0) {
		var_682_int = -2;
		return 8;
	}
	CreateDialog(var_689_object);
	var_697_int = 0;
	func_5739(var_697_int);
	@@var_689_object:SetNPCName(var_697_int);
	var_698_int = 0;
	func_5737(var_698_int);
	@@var_689_object:SetNPCDescription(var_698_int);
	var_699_string = "";
	func_5741(var_699_string);
	@@var_689_object:SetPhoto(var_699_string);
	var_700_string = "";
	func_5743(var_700_string);
	@@var_689_object:SetPhoto2(var_700_string);
	var_701_int = 0;
	func_6536(var_701_int);
	@@var_689_object:SetPlayerName(var_701_int);
	IsOverrideActive(var_690_bool);
	var_702_bool = var_690_bool;
	if(var_702_bool != 0) {
		var_682_int = -2;
		return 8;
	}
	DoDialog(var_689_object);
	var_703_bool = 0; var_704_object = Obj();
	func_5604(Obj());
	var_705_object = var_704_object;
	func_5324(var_703_bool, var_704_object);
	var_706_object = Obj(); var_707_object = Obj();
	var_683_object = var_706_object;
	var_689_object = var_707_object;
	TaskCall(8);
	func_1868(var_708_object, var_709_object, var_710_string, var_711_bool, var_706_object, var_707_object);
	TaskReturn();
	@@var_689_object:IsDialogEnd(var_692_bool);
	
Label_1850:
	var_753_bool = var_692_bool == 0; //@nz
	if(var_753_bool != 0) {
		sync();
		@@var_689_object:IsDialogEnd(var_692_bool);
		goto Label_1850;
	}
	var_683_object = Obj();
	func_5306();
	StopDialog(var_689_object);
	@@var_689_object:GetReturnValue((int)-1);
	var_691_int = var_682_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3841(var_0_bool, var_1_object, var_2_object, var_3_object, var_1219_object, var_1220_object)
{
	var_0_bool = var_1220_object;
	var_1_object = var_1219_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1226_string = "";
		func_3899(var_1220_object, "Sly");
		@@@var_0_bool:SetMessage((int)541830);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)514139, (int)-1, (int)15353);
		@@@var_0_bool:AddReply((int)541833, (int)-1, (int)44048);
		goto Label_3869;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xf05";
	}
Label_3869:
	var_1241_bool = 0;
	func_5745(var_1241_bool);
	if(var_1241_bool != 0) {

	Label_3873:
		lshWaitForAnimEnd();
		var_1242_object = var_3_object;
		if(var_1242_object != 0) {
		} else {
			var_1243_string = "";
			var_1243_string = var_2_object;
			func_5523(var_1243_string);
			goto Label_3873;
	}
		PlayAnimation("all", "idle");

	Label_3888:
		WaitForAnimEnd();
		var_1246_object = var_3_object;
		if(var_1246_object != 0) {
			goto Label_3898;
		}
		PlayAnimation("all", "idle");
		goto Label_3888;
	}
	goto Label_3898;
	
Label_3898:
	return 0;
	
}


func_5382(var_298_bool, var_299_object)
{
	var_300_string = ""; var_301_int = 0; var_302_bool = 0; var_303_int = 0; var_304_string = ""; var_305_string = ""; var_306_int = 0; var_307_bool = 0; var_308_int = 0; var_309_string = "";
	var_305_string = "c";
	var_306_int = 0;
	
Label_5385:
	if((int)1 != 0) {
		var_312_int = var_306_int + (int)1;
		var_313_int = var_305_string + var_312_int;
		@@var_299_object:HasProperty(var_313_int, var_307_bool);
		var_314_bool = var_307_bool == 0; //@nz
		if(var_314_bool != 0) {
		} else {
			var_306_int = var_306_int + (int)1;
			goto Label_5385;
		}
	}
	var_315_bool = var_306_int == 0; //@nz
	if(var_315_bool != 0) {
		var_298_bool = 0;
		return 10;
	}
	var_308_int = 0;
	var_317_bool = var_306_int > (int)1;
	if(var_317_bool != 0) {
		irand(var_308_int, var_306_int);
	}
	var_319_int = var_308_int + (int)1;
	var_320_int = var_305_string + var_319_int;
	@@var_299_object:GetProperty(var_320_int, var_309_string);
	var_321_bool = 0; var_322_string = "";
	var_309_string = var_322_string;
	func_5554(var_321_bool, var_322_string);
	var_321_bool = var_298_bool;
	return 10;
	
}


func_4360(var_2_object, var_478_string)
{
	var_479_bool = 0;
	func_5745(var_479_bool);
	var_480_bool = var_479_bool == 0; //@nz
	if(var_480_bool != 0) {
		return 0;
	}
	var_481_bool = var_478_string == var_2_object;
	if(var_481_bool != 0) {
		return 0;
	}
	var_482_string = ""; var_483_bool = 0;
	var_478_string = var_482_string;
	var_485_bool = var_478_string == "";
	if(var_485_bool != 0) {
		var_483_bool = 0;
	} else {
		var_483_bool = 1;
	}
	func_5539(var_482_string, var_483_bool);
	var_2_object = var_478_string;
	return 0;
	
}


func_3338(var_0_bool, var_1134_int, var_1135_object)
{
	var_1137_object = Obj(); var_1138_bool = 0; var_1139_int = 0; var_1140_bool = 0; var_1141_object = Obj(); var_1142_bool = 0; var_1143_int = 0; var_1144_bool = 0;
	var_0_bool = var_1135_object;
	var_1145_bool = 0; var_1146_object = Obj(); var_1147_float = 0;
	var_1135_object = var_1146_object;
	func_5237(var_1145_bool, var_1146_object, (float)70.0);
	var_1148_bool = var_1145_bool == 0; //@nz
	if(var_1148_bool != 0) {
		var_1134_int = -2;
		return 8;
	}
	CreateDialog(var_1141_object);
	var_1149_int = 0;
	func_5739(var_1149_int);
	@@var_1141_object:SetNPCName(var_1149_int);
	var_1150_int = 0;
	func_5737(var_1150_int);
	@@var_1141_object:SetNPCDescription(var_1150_int);
	var_1151_string = "";
	func_5741(var_1151_string);
	@@var_1141_object:SetPhoto(var_1151_string);
	var_1152_string = "";
	func_5743(var_1152_string);
	@@var_1141_object:SetPhoto2(var_1152_string);
	var_1153_int = 0;
	func_6536(var_1153_int);
	@@var_1141_object:SetPlayerName(var_1153_int);
	IsOverrideActive(var_1142_bool);
	var_1154_bool = var_1142_bool;
	if(var_1154_bool != 0) {
		var_1134_int = -2;
		return 8;
	}
	DoDialog(var_1141_object);
	var_1155_bool = 0; var_1156_object = Obj();
	func_5604(Obj());
	var_1157_object = var_1156_object;
	func_5324(var_1155_bool, var_1156_object);
	var_1158_object = Obj(); var_1159_object = Obj();
	var_1135_object = var_1158_object;
	var_1141_object = var_1159_object;
	TaskCall(16);
	func_3419(var_1160_object, var_1161_object, var_1162_string, var_1163_bool, var_1158_object, var_1159_object);
	TaskReturn();
	@@var_1141_object:IsDialogEnd(var_1144_bool);
	
Label_3401:
	var_1188_bool = var_1144_bool == 0; //@nz
	if(var_1188_bool != 0) {
		sync();
		@@var_1141_object:IsDialogEnd(var_1144_bool);
		goto Label_3401;
	}
	var_1135_object = Obj();
	func_5306();
	StopDialog(var_1141_object);
	@@var_1141_object:GetReturnValue((int)-1);
	var_1143_int = var_1134_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5906()
{
	SetVariable("ood4Grif2", (int)1);
	return 0;
}


func_5912()
{
	SetVariable("ood5Grif1", (int)1);
	return 0;
}


func_5918()
{
	SetVariable("d5q01ThiefsWillHelp", (int)1);
	SetVariable("d5q01PlayCutscene", (int)1);
	func_6291();
	return 0;
}


func_2346(var_2_object, var_931_string)
{
	var_932_bool = 0;
	func_5745(var_932_bool);
	var_933_bool = var_932_bool == 0; //@nz
	if(var_933_bool != 0) {
		return 0;
	}
	var_934_bool = var_931_string == var_2_object;
	if(var_934_bool != 0) {
		return 0;
	}
	var_935_string = ""; var_936_bool = 0;
	var_931_string = var_935_string;
	var_938_bool = var_931_string == "";
	if(var_938_bool != 0) {
		var_936_bool = 0;
	} else {
		var_936_bool = 1;
	}
	func_5539(var_935_string, var_936_bool);
	var_2_object = var_931_string;
	return 0;
	
}


func_5931(var_80_object)
{
	@@var_80_object:SetReturnValue((int)1000);
	return 0;
}


func_5419(var_329_bool, var_330_object)
{
	var_331_string = ""; var_332_int = 0; var_333_bool = 0; var_334_int = 0; var_335_string = ""; var_336_string = ""; var_337_int = 0; var_338_bool = 0; var_339_int = 0; var_340_string = "";
	var_342_int = 0;
	func_5698(var_342_int);
	var_343_int = "d" + var_342_int;
	var_336_string = var_343_int + "m";
	var_337_int = 0;
	
Label_5428:
	if((int)1 != 0) {
		var_347_int = var_337_int + (int)1;
		var_348_int = var_336_string + var_347_int;
		@@var_330_object:HasProperty(var_348_int, var_338_bool);
		var_349_bool = var_338_bool == 0; //@nz
		if(var_349_bool != 0) {
		} else {
			var_337_int = var_337_int + (int)1;
			goto Label_5428;
		}
	}
	var_350_bool = var_337_int == 0; //@nz
	if(var_350_bool != 0) {
		var_329_bool = 0;
		return 10;
	}
	var_339_int = 0;
	var_352_bool = var_337_int > (int)1;
	if(var_352_bool != 0) {
		irand(var_339_int, var_337_int);
	}
	var_354_int = var_339_int + (int)1;
	var_355_int = var_336_string + var_354_int;
	@@var_330_object:GetProperty(var_355_int, var_340_string);
	var_356_bool = 0; var_357_string = "";
	var_340_string = var_357_string;
	func_5554(var_356_bool, var_357_string);
	var_356_bool = var_329_bool;
	return 10;
	
}


func_5936()
{
	SetVariable("KnowGrif", (int)1);
	return 0;
}


func_5942()
{
	var_81_object = Obj(); var_82_object = Obj();
	func_6345(Obj());
	var_83_object = var_82_object;
	var_94_float = 0;
	func_5693(var_94_float);
	@@var_82_object:AddMark("d5q01GrifWantsMoney", "pt_map_grif", (int)1, (int)515350, var_94_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3899(var_2_object, var_1226_string)
{
	var_1227_bool = 0;
	func_5745(var_1227_bool);
	var_1228_bool = var_1227_bool == 0; //@nz
	if(var_1228_bool != 0) {
		return 0;
	}
	var_1229_bool = var_1226_string == var_2_object;
	if(var_1229_bool != 0) {
		return 0;
	}
	var_1230_string = ""; var_1231_bool = 0;
	var_1226_string = var_1230_string;
	var_1233_bool = var_1226_string == "";
	if(var_1233_bool != 0) {
		var_1231_bool = 0;
	} else {
		var_1231_bool = 1;
	}
	func_5539(var_1230_string, var_1231_bool);
	var_2_object = var_1226_string;
	return 0;
	
}


func_5958()
{
	SetVariable("d2KnowBigVladIsBad", (int)1);
	return 0;
}


func_1868(var_0_bool, var_1_object, var_2_object, var_3_object, var_706_object, var_707_object)
{
	var_0_bool = var_707_object;
	var_1_object = var_706_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_713_string = "";
		func_1946(var_707_object, "Neutral");
		@@@var_0_bool:SetMessage((int)509843);
		@@@var_0_bool:ClearReplies();
		var_722_bool = 0;
		var_722_bool = 0;
		var_723_bool = 0; var_724_object = Obj();
		var_724_object = var_1_object;
		func_5994(var_724_object);
		if(var_723_bool != 0) {
			var_729_bool = 0; var_730_object = Obj();
			var_730_object = var_1_object;
			func_6078(var_730_object);
			var_735_bool = var_729_bool == 0; //@nz
			if(var_735_bool != 0) {
				var_722_bool = 1;
			}
		}
		if(var_722_bool != 0) {
			@@@var_0_bool:AddReply((int)509848, (int)10848, (int)10847);
		}
		@@@var_0_bool:AddReply((int)514117, (int)-1, (int)15331);
		@@@var_0_bool:AddReply((int)514118, (int)-1, (int)15332);
		goto Label_1916;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x750";
	}
Label_1916:
	var_745_bool = 0;
	func_5745(var_745_bool);
	if(var_745_bool != 0) {

	Label_1920:
		lshWaitForAnimEnd();
		var_746_object = var_3_object;
		if(var_746_object != 0) {
		} else {
			var_747_string = "";
			var_747_string = var_2_object;
			func_5523(var_747_string);
			goto Label_1920;
	}
		PlayAnimation("all", "idle");

	Label_1935:
		WaitForAnimEnd();
		var_750_object = var_3_object;
		if(var_750_object != 0) {
			goto Label_1945;
		}
		PlayAnimation("all", "idle");
		goto Label_1935;
	}
	goto Label_1945;
	
Label_1945:
	return 0;
	
}


func_5964()
{
	SetVariable("ood5Grif2", (int)1);
	return 0;
}


func_337(var_0_bool, var_584_int, var_585_object)
{
	var_587_object = Obj(); var_588_bool = 0; var_589_int = 0; var_590_bool = 0; var_591_object = Obj(); var_592_bool = 0; var_593_int = 0; var_594_bool = 0;
	var_0_bool = var_585_object;
	var_595_bool = 0; var_596_object = Obj(); var_597_float = 0;
	var_585_object = var_596_object;
	func_5237(var_595_bool, var_596_object, (float)70.0);
	var_598_bool = var_595_bool == 0; //@nz
	if(var_598_bool != 0) {
		var_584_int = -2;
		return 8;
	}
	CreateDialog(var_591_object);
	var_599_int = 0;
	func_5739(var_599_int);
	@@var_591_object:SetNPCName(var_599_int);
	var_600_int = 0;
	func_5737(var_600_int);
	@@var_591_object:SetNPCDescription(var_600_int);
	var_601_string = "";
	func_5741(var_601_string);
	@@var_591_object:SetPhoto(var_601_string);
	var_602_string = "";
	func_5743(var_602_string);
	@@var_591_object:SetPhoto2(var_602_string);
	var_603_int = 0;
	func_6536(var_603_int);
	@@var_591_object:SetPlayerName(var_603_int);
	IsOverrideActive(var_592_bool);
	var_604_bool = var_592_bool;
	if(var_604_bool != 0) {
		var_584_int = -2;
		return 8;
	}
	DoDialog(var_591_object);
	var_605_bool = 0; var_606_object = Obj();
	func_5604(Obj());
	var_607_object = var_606_object;
	func_5324(var_605_bool, var_606_object);
	var_608_object = Obj(); var_609_object = Obj();
	var_585_object = var_608_object;
	var_591_object = var_609_object;
	TaskCall(4);
	func_418(var_610_object, var_611_object, var_612_string, var_613_bool, var_608_object, var_609_object);
	TaskReturn();
	@@var_591_object:IsDialogEnd(var_594_bool);
	
Label_400:
	var_675_bool = var_594_bool == 0; //@nz
	if(var_675_bool != 0) {
		sync();
		@@var_591_object:IsDialogEnd(var_594_bool);
		goto Label_400;
	}
	var_585_object = Obj();
	func_5306();
	StopDialog(var_591_object);
	@@var_591_object:GetReturnValue((int)-1);
	var_593_int = var_584_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5970(var_487_bool)
{
	var_489_int = 0; var_490_string = "";
	func_5625(var_489_int, "ood1Grif1");
	var_494_bool = var_489_int == (int)0;
	if(var_494_bool != 0) {
		var_487_bool = 1;
		return 0;
	}
	var_487_bool = 0;
	return 0;
}


func_4946(var_0_bool)
{
	var_69_bool = 0;
	func_5232(var_69_bool);
	var_72_bool = var_69_bool == 0; //@nz
	if(var_72_bool != 0) {
		Hold();
	}
	GetDirection(var_0_bool);
	
Label_4955:
	func_5122();
	goto Label_4955;
}
EMIT "Return(); Pop(0)";


func_5462(var_542_bool, var_543_object)
{
	var_544_bool = 0; var_545_object = Obj(); var_546_float = 0;
	var_543_object = var_545_object;
	func_5470(var_544_bool, var_545_object, (float)70);
	var_544_bool = var_542_bool;
	return 0;
}


func_3419(var_0_bool, var_1_object, var_2_object, var_3_object, var_1158_object, var_1159_object)
{
	var_0_bool = var_1159_object;
	var_1_object = var_1158_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1165_string = "";
		func_3477(var_1159_object, "Sly");
		@@@var_0_bool:SetMessage((int)538735);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)538736, (int)-1, (int)40647);
		@@@var_0_bool:AddReply((int)538754, (int)-1, (int)40666);
		goto Label_3447;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xd5f";
	}
Label_3447:
	var_1180_bool = 0;
	func_5745(var_1180_bool);
	if(var_1180_bool != 0) {

	Label_3451:
		lshWaitForAnimEnd();
		var_1181_object = var_3_object;
		if(var_1181_object != 0) {
		} else {
			var_1182_string = "";
			var_1182_string = var_2_object;
			func_5523(var_1182_string);
			goto Label_3451;
	}
		PlayAnimation("all", "idle");

	Label_3466:
		WaitForAnimEnd();
		var_1185_object = var_3_object;
		if(var_1185_object != 0) {
			goto Label_3476;
		}
		PlayAnimation("all", "idle");
		goto Label_3466;
	}
	goto Label_3476;
	
Label_3476:
	return 0;
	
}


func_5982(var_515_bool)
{
	var_517_int = 0; var_518_string = "";
	func_5625(var_517_int, "ood1Grif2");
	var_520_bool = var_517_int == (int)0;
	if(var_520_bool != 0) {
		var_515_bool = 1;
		return 0;
	}
	var_515_bool = 0;
	return 0;
}


func_5470(var_544_bool, var_545_object, var_546_float)
{
	var_547_float = 0; var_548_cvector = CVector(0,0,0); var_549_cvector = CVector(0,0,0); var_550_cvector = CVector(0,0,0); var_551_cvector = CVector(0,0,0); var_552_cvector = CVector(0,0,0); var_553_cvector = CVector(0,0,0); var_554_bool = 0; var_555_float = 0; var_556_cvector = CVector(0,0,0); var_557_cvector = CVector(0,0,0); var_558_cvector = CVector(0,0,0); var_559_cvector = CVector(0,0,0); var_560_cvector = CVector(0,0,0); var_561_cvector = CVector(0,0,0); var_562_bool = 0;
	@@var_545_object:GetPosition(var_556_cvector);
	@@var_545_object:GetEyesHeight(var_555_float);
	var_563_float = GetByIndex(var_556_cvector, 1);
	var_563_float = var_563_float + var_555_float;
	SetByIndex(var_556_cvector, 1) = var_563_float;
	GetPosition(var_557_cvector);
	GetEyesHeight(var_555_float);
	var_564_float = GetByIndex(var_557_cvector, 1);
	var_564_float = var_564_float + var_555_float;
	SetByIndex(var_557_cvector, 1) = var_564_float;
	var_558_cvector = var_556_cvector - var_557_cvector;
	var_565_float = GetByIndex(var_558_cvector, 1);
	SetByIndex(var_558_cvector, 1) = (float)0;
	var_566_int = var_558_cvector | var_558_cvector;
	var_567_float = sqrt(var_566_int);
	var_558_cvector = var_558_cvector / var_567_float;
	var_559_cvector = -var_558_cvector;
	var_568_float = var_558_cvector * var_546_float;
	var_560_cvector = var_568_float - CVector(0.0, 10.0, 0.0);
	var_561_cvector = var_557_cvector + var_560_cvector;
	IsOverrideActive(var_562_bool);
	var_570_bool = var_562_bool;
	if(var_570_bool != 0) {
		var_544_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_561_cvector, var_559_cvector, (bool)1);
	var_572_float = GetByIndex(var_560_cvector, 0);
	var_573_float = GetByIndex(var_560_cvector, 2);
	Rotate(var_572_float, var_573_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_544_bool = 1;
	return 16;
}


func_4960(var_92_bool)
{
	var_93_object = Obj(); var_94_object = Obj();
	FindActor(var_94_object, "player");
	var_96_bool = var_94_object == 0; //@nz
	if(var_96_bool != 0) {
		var_92_bool = 0;
		return 2;
	}
	var_97_bool = 0; var_98_object = Obj();
	var_94_object = var_98_object;
	func_5223(var_97_bool, var_98_object);
	var_97_bool = var_92_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2916(var_0_bool, var_1012_int, var_1013_object)
{
	var_1015_object = Obj(); var_1016_bool = 0; var_1017_int = 0; var_1018_bool = 0; var_1019_object = Obj(); var_1020_bool = 0; var_1021_int = 0; var_1022_bool = 0;
	var_0_bool = var_1013_object;
	var_1023_bool = 0; var_1024_object = Obj(); var_1025_float = 0;
	var_1013_object = var_1024_object;
	func_5237(var_1023_bool, var_1024_object, (float)70.0);
	var_1026_bool = var_1023_bool == 0; //@nz
	if(var_1026_bool != 0) {
		var_1012_int = -2;
		return 8;
	}
	CreateDialog(var_1019_object);
	var_1027_int = 0;
	func_5739(var_1027_int);
	@@var_1019_object:SetNPCName(var_1027_int);
	var_1028_int = 0;
	func_5737(var_1028_int);
	@@var_1019_object:SetNPCDescription(var_1028_int);
	var_1029_string = "";
	func_5741(var_1029_string);
	@@var_1019_object:SetPhoto(var_1029_string);
	var_1030_string = "";
	func_5743(var_1030_string);
	@@var_1019_object:SetPhoto2(var_1030_string);
	var_1031_int = 0;
	func_6536(var_1031_int);
	@@var_1019_object:SetPlayerName(var_1031_int);
	IsOverrideActive(var_1020_bool);
	var_1032_bool = var_1020_bool;
	if(var_1032_bool != 0) {
		var_1012_int = -2;
		return 8;
	}
	DoDialog(var_1019_object);
	var_1033_bool = 0; var_1034_object = Obj();
	func_5604(Obj());
	var_1035_object = var_1034_object;
	func_5324(var_1033_bool, var_1034_object);
	var_1036_object = Obj(); var_1037_object = Obj();
	var_1013_object = var_1036_object;
	var_1019_object = var_1037_object;
	TaskCall(12);
	func_2997(var_1038_object, var_1039_object, var_1040_string, var_1041_bool, var_1036_object, var_1037_object);
	TaskReturn();
	@@var_1019_object:IsDialogEnd(var_1022_bool);
	
Label_2979:
	var_1066_bool = var_1022_bool == 0; //@nz
	if(var_1066_bool != 0) {
		sync();
		@@var_1019_object:IsDialogEnd(var_1022_bool);
		goto Label_2979;
	}
	var_1013_object = Obj();
	func_5306();
	StopDialog(var_1019_object);
	@@var_1019_object:GetReturnValue((int)-1);
	var_1021_int = var_1012_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5994(var_723_bool)
{
	var_725_int = 0; var_726_string = "";
	func_5625(var_725_int, "ood3Grif1");
	var_728_bool = var_725_int == (int)0;
	if(var_728_bool != 0) {
		var_723_bool = 1;
		return 0;
	}
	var_723_bool = 0;
	return 0;
}


func_4975(var_0_bool)
{
	var_144_float = GetByIndex(var_0_bool, 0);
	var_145_float = GetByIndex(var_0_bool, 2);
	RotateAsync(var_144_float, var_145_float);
	return 0;
}


func_4980(var_75_bool)
{
	var_76_object = Obj(); var_77_bool = 0; var_78_object = Obj(); var_79_bool = 0;
	FindActor(var_78_object, "player");
	var_81_bool = var_78_object == 0; //@nz
	if(var_81_bool != 0) {
		var_75_bool = 0;
		return 4;
	}
	var_82_float = 0; var_83_object = Obj();
	var_78_object = var_83_object;
	func_5198(var_82_float, var_83_object);
	var_91_bool = var_82_float > (float)90000.0;
	if(var_91_bool != 0) {
		var_75_bool = 0;
		return 4;
	}
	CanSee(var_79_bool, var_78_object);
	var_79_bool = var_75_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_6006(var_852_bool)
{
	var_854_int = 0; var_855_string = "";
	func_5625(var_854_int, "ood4Grif3");
	var_857_bool = var_854_int == (int)0;
	if(var_857_bool != 0) {
		var_852_bool = 1;
		return 0;
	}
	var_852_bool = 0;
	return 0;
}


func_6018(var_861_bool)
{
	var_863_int = 0; var_864_string = "";
	func_5625(var_863_int, "ood4Grif4");
	var_866_bool = var_863_int == (int)0;
	if(var_866_bool != 0) {
		var_861_bool = 1;
		return 0;
	}
	var_861_bool = 0;
	return 0;
}


func_6531(var_104_int, var_105_string)
{
	var_106_int = 0; var_107_int = 0;
	GetInvItemByName(var_107_int, var_105_string);
	var_107_int = var_104_int;
	return 2;
}


func_3971(var_0_bool, var_1317_int, var_1318_object)
{
	var_1320_object = Obj(); var_1321_bool = 0; var_1322_int = 0; var_1323_bool = 0; var_1324_object = Obj(); var_1325_bool = 0; var_1326_int = 0; var_1327_bool = 0;
	var_0_bool = var_1318_object;
	var_1328_bool = 0; var_1329_object = Obj(); var_1330_float = 0;
	var_1318_object = var_1329_object;
	func_5237(var_1328_bool, var_1329_object, (float)70.0);
	var_1331_bool = var_1328_bool == 0; //@nz
	if(var_1331_bool != 0) {
		var_1317_int = -2;
		return 8;
	}
	CreateDialog(var_1324_object);
	var_1332_int = 0;
	func_5739(var_1332_int);
	@@var_1324_object:SetNPCName(var_1332_int);
	var_1333_int = 0;
	func_5737(var_1333_int);
	@@var_1324_object:SetNPCDescription(var_1333_int);
	var_1334_string = "";
	func_5741(var_1334_string);
	@@var_1324_object:SetPhoto(var_1334_string);
	var_1335_string = "";
	func_5743(var_1335_string);
	@@var_1324_object:SetPhoto2(var_1335_string);
	var_1336_int = 0;
	func_6536(var_1336_int);
	@@var_1324_object:SetPlayerName(var_1336_int);
	IsOverrideActive(var_1325_bool);
	var_1337_bool = var_1325_bool;
	if(var_1337_bool != 0) {
		var_1317_int = -2;
		return 8;
	}
	DoDialog(var_1324_object);
	var_1338_bool = 0; var_1339_object = Obj();
	func_5604(Obj());
	var_1340_object = var_1339_object;
	func_5324(var_1338_bool, var_1339_object);
	var_1341_object = Obj(); var_1342_object = Obj();
	var_1318_object = var_1341_object;
	var_1324_object = var_1342_object;
	TaskCall(22);
	func_4052(var_1343_object, var_1344_object, var_1345_string, var_1346_bool, var_1341_object, var_1342_object);
	TaskReturn();
	@@var_1324_object:IsDialogEnd(var_1327_bool);
	
Label_4034:
	var_1374_bool = var_1327_bool == 0; //@nz
	if(var_1374_bool != 0) {
		sync();
		@@var_1324_object:IsDialogEnd(var_1327_bool);
		goto Label_4034;
	}
	var_1318_object = Obj();
	func_5306();
	StopDialog(var_1324_object);
	@@var_1324_object:GetReturnValue((int)-1);
	var_1326_int = var_1317_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6536(var_278_int)
{
	var_279_int = 0; var_280_int = 0;
	GetVariable("branch", var_280_int);
	var_283_bool = var_280_int == (int)0;
	if(var_283_bool != 0) {
		var_278_int = 1;
		return 2;
	EMIT "GOTO 0x1997";
	}
	var_285_bool = var_280_int == (int)1;
	if(var_285_bool != 0) {
		var_278_int = 2;
		return 2;
	}
	var_278_int = 3;
	return 2;
}


func_5002()
{
	var_1441_float = 0; var_1442_float = 0;
	rand(var_1442_float, (int)8, (int)16);
	SetTimer((int)10, var_1442_float);
	return 2;
}


func_6030(var_625_bool)
{
	var_627_int = 0; var_628_string = "";
	func_5625(var_627_int, "ood2Grif2");
	var_630_bool = var_627_int == (int)0;
	if(var_630_bool != 0) {
		var_625_bool = 1;
		return 0;
	}
	var_625_bool = 0;
	return 0;
}


func_5518()
{
	CameraSwitchToNormal((bool)1);
	return 0;
}


func_5523(var_417_string)
{
	var_418_bool = 0; var_419_float = 0; var_420_float = 0; var_421_bool = 0; var_422_float = 0; var_423_float = 0;
	lshHasAnimation(var_421_bool, var_417_string);
	var_424_bool = var_421_bool;
	if(var_424_bool != 0) {
		lshGetAnimTimes(var_417_string, var_422_float, var_423_float);
		lshPlayAnimation(var_422_float, var_423_float, (bool)0);
	} else {
		var_427_int = "Can't find lsh animation : " + var_417_string;
		Trace(var_427_int);
	}
	return 6;
	
}


func_5011()
{
	KillTimer((int)10);
	return 0;
}


func_3477(var_2_object, var_1165_string)
{
	var_1166_bool = 0;
	func_5745(var_1166_bool);
	var_1167_bool = var_1166_bool == 0; //@nz
	if(var_1167_bool != 0) {
		return 0;
	}
	var_1168_bool = var_1165_string == var_2_object;
	if(var_1168_bool != 0) {
		return 0;
	}
	var_1169_string = ""; var_1170_bool = 0;
	var_1165_string = var_1169_string;
	var_1172_bool = var_1165_string == "";
	if(var_1172_bool != 0) {
		var_1170_bool = 0;
	} else {
		var_1170_bool = 1;
	}
	func_5539(var_1169_string, var_1170_bool);
	var_2_object = var_1165_string;
	return 0;
	
}


func_6553(var_191_int)
{
	var_192_int = 0; var_193_int = 0;
	GetVariable("branch", var_193_int);
	var_193_int = var_191_int;
	return 2;
}


func_6042(var_640_bool)
{
	var_642_int = 0; var_643_string = "";
	func_5625(var_642_int, "ood2Grif3");
	var_645_bool = var_642_int == (int)0;
	if(var_645_bool != 0) {
		var_640_bool = 1;
		return 0;
	}
	var_640_bool = 0;
	return 0;
}


func_1946(var_2_object, var_713_string)
{
	var_714_bool = 0;
	func_5745(var_714_bool);
	var_715_bool = var_714_bool == 0; //@nz
	if(var_715_bool != 0) {
		return 0;
	}
	var_716_bool = var_713_string == var_2_object;
	if(var_716_bool != 0) {
		return 0;
	}
	var_717_string = ""; var_718_bool = 0;
	var_713_string = var_717_string;
	var_720_bool = var_713_string == "";
	if(var_720_bool != 0) {
		var_718_bool = 0;
	} else {
		var_718_bool = 1;
	}
	func_5539(var_717_string, var_718_bool);
	var_2_object = var_713_string;
	return 0;
	
}


func_6559(var_541_object)
{
	var_542_bool = 0; var_543_object = Obj();
	var_541_object = var_543_object;
	func_5462(var_542_bool, var_543_object);
	var_574_bool = var_542_bool == 0; //@nz
	if(var_574_bool != 0) {
		return 0;
	}
	var_575_object = Obj();
	var_541_object = var_575_object;
	TaskCall(0);
	func_0(var_575_object);
	TaskReturn();
	var_541_object = Obj();
	func_5518();
	return 0;
}


func_418(var_0_bool, var_1_object, var_2_object, var_3_object, var_608_object, var_609_object)
{
	var_0_bool = var_609_object;
	var_1_object = var_608_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_615_string = "";
		func_520(var_609_object, "Neutral");
		@@@var_0_bool:SetMessage((int)506959);
		@@@var_0_bool:ClearReplies();
		var_624_bool = 0;
		var_624_bool = 0;
		var_625_bool = 0; var_626_object = Obj();
		var_626_object = var_1_object;
		func_6030(var_626_object);
		if(var_625_bool != 0) {
			var_631_bool = 0; var_632_object = Obj();
			var_632_object = var_1_object;
			func_6066(var_632_object);
			if(var_631_bool != 0) {
				var_624_bool = 1;
			}
		}
		if(var_624_bool != 0) {
			@@@var_0_bool:AddReply((int)507328, (int)8080, (int)8079);
		}
		var_640_bool = 0; var_641_object = Obj();
		var_641_object = var_1_object;
		func_6042(var_641_object);
		if(var_640_bool != 0) {
			@@@var_0_bool:AddReply((int)507319, (int)8070, (int)8069);
		}
		var_649_bool = 0; var_650_object = Obj();
		var_650_object = var_1_object;
		func_6054(var_650_object);
		if(var_649_bool != 0) {
			@@@var_0_bool:AddReply((int)507335, (int)8049, (int)8087);
		}
		@@@var_0_bool:AddReply((int)536144, (int)-1, (int)37903);
		@@@var_0_bool:AddReply((int)507530, (int)-1, (int)8312);
		@@@var_0_bool:AddReply((int)533848, (int)-1, (int)35398);
		goto Label_490;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1a6";
	}
Label_490:
	var_667_bool = 0;
	func_5745(var_667_bool);
	if(var_667_bool != 0) {

	Label_494:
		lshWaitForAnimEnd();
		var_668_object = var_3_object;
		if(var_668_object != 0) {
		} else {
			var_669_string = "";
			var_669_string = var_2_object;
			func_5523(var_669_string);
			goto Label_494;
	}
		PlayAnimation("all", "idle");

	Label_509:
		WaitForAnimEnd();
		var_672_object = var_3_object;
		if(var_672_object != 0) {
			goto Label_519;
		}
		PlayAnimation("all", "idle");
		goto Label_509;
	}
	goto Label_519;
	
Label_519:
	return 0;
	
}


func_5539(var_392_string, var_393_bool)
{
	var_396_bool = 0; var_397_float = 0; var_398_float = 0; var_399_bool = 0; var_400_float = 0; var_401_float = 0;
	lshHasAnimation(var_399_bool, var_392_string);
	var_402_bool = var_399_bool;
	if(var_402_bool != 0) {
		lshGetAnimTimes(var_392_string, var_400_float, var_401_float);
		lshPlayAnimation(var_400_float, var_401_float, var_393_bool);
	} else {
		var_404_int = "Can't find lsh animation : " + var_392_string;
		Trace(var_404_int);
	}
	return 6;
	
}


func_6054(var_649_bool)
{
	var_651_int = 0; var_652_string = "";
	func_5625(var_651_int, "ood2Grif4");
	var_654_bool = var_651_int == (int)0;
	if(var_654_bool != 0) {
		var_649_bool = 1;
		return 0;
	}
	var_649_bool = 0;
	return 0;
}


func_6066(var_631_bool)
{
	var_633_int = 0; var_634_string = "";
	func_5625(var_633_int, "d2q02");
	var_636_bool = var_633_int == (int)6;
	if(var_636_bool != 0) {
		var_631_bool = 1;
		return 0;
	}
	var_631_bool = 0;
	return 0;
}


func_6578(var_85_object, var_449_object, var_586_object, var_684_object, var_762_object, var_885_object, var_1014_object, var_1075_object, var_1136_object, var_1197_object, var_1258_object, var_1319_object)
{
	var_86_int = GlobalVars[2];
	var_87_int = 0;
	func_5698(var_87_int);
	var_93_bool = var_86_int != var_87_int;
	if(var_93_bool != 0) {
		func_6362();
		var_211_int = GlobalVars[2];
		func_5698((int)0);
		var_212_int = var_211_int;
		GlobalVars[2] = var_211_int;
	}
	var_213_bool = GlobalVars[1];
	var_214_bool = var_213_bool == 0; //@nz
	if(var_214_bool != 0) {
		var_215_int = 0; var_216_object = Obj();
		var_85_object = var_216_object;
		TaskCall(1);
		func_22(var_217_object, var_215_int, var_216_object);
		TaskReturn();
		var_442_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_443_bool = 0; var_444_int = 0;
	func_5707(var_443_bool, (int)1);
	if(var_443_bool != 0) {
		var_447_int = 0; var_448_object = Obj();
		var_85_object = var_448_object;
		TaskCall(23);
		func_4192(var_449_object, var_447_int, var_448_object);
		TaskReturn();
		var_540_bool = (int)1000 == var_449_object;
		if(var_540_bool != 0) {
			var_541_object = Obj();
			var_85_object = var_541_object;
			func_6559(var_541_object);
		}
		return 0;
	}
	var_581_bool = 0; var_582_int = 0;
	func_5707(var_581_bool, (int)2);
	if(var_581_bool != 0) {
		var_584_int = 0; var_585_object = Obj();
		var_85_object = var_585_object;
		TaskCall(3);
		func_337(var_586_object, var_584_int, var_585_object);
		TaskReturn();
		var_677_bool = (int)1000 == var_586_object;
		if(var_677_bool != 0) {
			var_678_object = Obj();
			var_85_object = var_678_object;
			func_6559(var_678_object);
		}
		return 0;
	}
	var_679_bool = 0; var_680_int = 0;
	func_5707(var_679_bool, (int)3);
	if(var_679_bool != 0) {
		var_682_int = 0; var_683_object = Obj();
		var_85_object = var_683_object;
		TaskCall(7);
		func_1787(var_684_object, var_682_int, var_683_object);
		TaskReturn();
		var_755_bool = (int)1000 == var_684_object;
		if(var_755_bool != 0) {
			var_756_object = Obj();
			var_85_object = var_756_object;
			func_6559(var_756_object);
		}
		return 0;
	}
	var_757_bool = 0; var_758_int = 0;
	func_5707(var_757_bool, (int)4);
	if(var_757_bool != 0) {
		var_760_int = 0; var_761_object = Obj();
		var_85_object = var_761_object;
		TaskCall(5);
		func_958(var_762_object, var_760_int, var_761_object);
		TaskReturn();
		var_878_bool = (int)1000 == var_762_object;
		if(var_878_bool != 0) {
			var_879_object = Obj();
			var_85_object = var_879_object;
			func_6559(var_879_object);
		}
		return 0;
	}
	var_880_bool = 0; var_881_int = 0;
	func_5707(var_880_bool, (int)5);
	if(var_880_bool != 0) {
		var_883_int = 0; var_884_object = Obj();
		var_85_object = var_884_object;
		TaskCall(9);
		func_2110(var_885_object, var_883_int, var_884_object);
		TaskReturn();
		var_1007_bool = (int)1000 == var_885_object;
		if(var_1007_bool != 0) {
			var_1008_object = Obj();
			var_85_object = var_1008_object;
			func_6559(var_1008_object);
		}
		return 0;
	}
	var_1009_bool = 0; var_1010_int = 0;
	func_5707(var_1009_bool, (int)6);
	if(var_1009_bool != 0) {
		var_1012_int = 0; var_1013_object = Obj();
		var_85_object = var_1013_object;
		TaskCall(11);
		func_2916(var_1014_object, var_1012_int, var_1013_object);
		TaskReturn();
		var_1068_bool = (int)1000 == var_1014_object;
		if(var_1068_bool != 0) {
			var_1069_object = Obj();
			var_85_object = var_1069_object;
			func_6559(var_1069_object);
		}
		return 0;
	}
	var_1070_bool = 0; var_1071_int = 0;
	func_5707(var_1070_bool, (int)7);
	if(var_1070_bool != 0) {
		var_1073_int = 0; var_1074_object = Obj();
		var_85_object = var_1074_object;
		TaskCall(13);
		func_3127(var_1075_object, var_1073_int, var_1074_object);
		TaskReturn();
		var_1129_bool = (int)1000 == var_1075_object;
		if(var_1129_bool != 0) {
			var_1130_object = Obj();
			var_85_object = var_1130_object;
			func_6559(var_1130_object);
		}
		return 0;
	}
	var_1131_bool = 0; var_1132_int = 0;
	func_5707(var_1131_bool, (int)8);
	if(var_1131_bool != 0) {
		var_1134_int = 0; var_1135_object = Obj();
		var_85_object = var_1135_object;
		TaskCall(15);
		func_3338(var_1136_object, var_1134_int, var_1135_object);
		TaskReturn();
		var_1190_bool = (int)1000 == var_1136_object;
		if(var_1190_bool != 0) {
			var_1191_object = Obj();
			var_85_object = var_1191_object;
			func_6559(var_1191_object);
		}
		return 0;
	}
	var_1192_bool = 0; var_1193_int = 0;
	func_5707(var_1192_bool, (int)9);
	if(var_1192_bool != 0) {
		var_1195_int = 0; var_1196_object = Obj();
		var_85_object = var_1196_object;
		TaskCall(19);
		func_3760(var_1197_object, var_1195_int, var_1196_object);
		TaskReturn();
		var_1251_bool = (int)1000 == var_1197_object;
		if(var_1251_bool != 0) {
			var_1252_object = Obj();
			var_85_object = var_1252_object;
			func_6559(var_1252_object);
		}
		return 0;
	}
	var_1253_bool = 0; var_1254_int = 0;
	func_5707(var_1253_bool, (int)10);
	if(var_1253_bool != 0) {
		var_1256_int = 0; var_1257_object = Obj();
		var_85_object = var_1257_object;
		TaskCall(17);
		func_3549(var_1258_object, var_1256_int, var_1257_object);
		TaskReturn();
		var_1312_bool = (int)1000 == var_1258_object;
		if(var_1312_bool != 0) {
			var_1313_object = Obj();
			var_85_object = var_1313_object;
			func_6559(var_1313_object);
		}
		return 0;
	}
	var_1314_bool = 0; var_1315_int = 0;
	func_5707(var_1314_bool, (int)11);
	if(var_1314_bool != 0) {
		var_1317_int = 0; var_1318_object = Obj();
		var_85_object = var_1318_object;
		TaskCall(21);
		func_3971(var_1319_object, var_1317_int, var_1318_object);
		TaskReturn();
		var_1376_bool = (int)1000 == var_1319_object;
		if(var_1376_bool != 0) {
			var_1377_object = Obj();
			var_85_object = var_1377_object;
			func_6559(var_1377_object);
		}
		return 0;
	}
	var_1378_bool = 0; var_1379_int = 0;
	func_5707(var_1378_bool, (int)12);
	if(var_1378_bool != 0) {
		var_1380_int = 0; var_1381_object = Obj();
		var_85_object = var_1381_object;
		TaskCall(25);
		func_4677(var_1382_object, var_1380_int, var_1381_object);
		TaskReturn();
		return 0;
	}
	return 0;
}


func_5554(var_321_bool, var_322_string)
{
	var_323_bool = 0; var_324_bool = 0;
	var_325_bool = 0;
	func_5745(var_325_bool);
	if(var_325_bool != 0) {
		lshHasSpeech(var_324_bool, var_322_string);
		var_326_bool = var_324_bool;
		if(var_326_bool != 0) {
			lshPlaySpeech(var_322_string);
			var_321_bool = 1;
			return 2;
		}
	}
	var_321_bool = 0;
	return 2;
}


func_2997(var_0_bool, var_1_object, var_2_object, var_3_object, var_1036_object, var_1037_object)
{
	var_0_bool = var_1037_object;
	var_1_object = var_1036_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1043_string = "";
		func_3055(var_1037_object, "Fear");
		@@@var_0_bool:SetMessage((int)514122);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)514123, (int)-1, (int)15337);
		@@@var_0_bool:AddReply((int)514124, (int)-1, (int)15338);
		goto Label_3025;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xbb9";
	}
Label_3025:
	var_1058_bool = 0;
	func_5745(var_1058_bool);
	if(var_1058_bool != 0) {

	Label_3029:
		lshWaitForAnimEnd();
		var_1059_object = var_3_object;
		if(var_1059_object != 0) {
		} else {
			var_1060_string = "";
			var_1060_string = var_2_object;
			func_5523(var_1060_string);
			goto Label_3029;
	}
		PlayAnimation("all", "idle");

	Label_3044:
		WaitForAnimEnd();
		var_1063_object = var_3_object;
		if(var_1063_object != 0) {
			goto Label_3054;
		}
		PlayAnimation("all", "idle");
		goto Label_3044;
	}
	goto Label_3054;
	
Label_3054:
	return 0;
	
}


func_6078(var_729_bool)
{
	var_731_int = 0; var_732_string = "";
	func_5625(var_731_int, "d3q01");
	var_734_bool = var_731_int == (int)0;
	if(var_734_bool != 0) {
		var_729_bool = 1;
		return 0;
	}
	var_729_bool = 0;
	return 0;
}


func_958(var_0_bool, var_760_int, var_761_object)
{
	var_763_object = Obj(); var_764_bool = 0; var_765_int = 0; var_766_bool = 0; var_767_object = Obj(); var_768_bool = 0; var_769_int = 0; var_770_bool = 0;
	var_0_bool = var_761_object;
	var_771_bool = 0; var_772_object = Obj(); var_773_float = 0;
	var_761_object = var_772_object;
	func_5237(var_771_bool, var_772_object, (float)70.0);
	var_774_bool = var_771_bool == 0; //@nz
	if(var_774_bool != 0) {
		var_760_int = -2;
		return 8;
	}
	CreateDialog(var_767_object);
	var_775_int = 0;
	func_5739(var_775_int);
	@@var_767_object:SetNPCName(var_775_int);
	var_776_int = 0;
	func_5737(var_776_int);
	@@var_767_object:SetNPCDescription(var_776_int);
	var_777_string = "";
	func_5741(var_777_string);
	@@var_767_object:SetPhoto(var_777_string);
	var_778_string = "";
	func_5743(var_778_string);
	@@var_767_object:SetPhoto2(var_778_string);
	var_779_int = 0;
	func_6536(var_779_int);
	@@var_767_object:SetPlayerName(var_779_int);
	IsOverrideActive(var_768_bool);
	var_780_bool = var_768_bool;
	if(var_780_bool != 0) {
		var_760_int = -2;
		return 8;
	}
	DoDialog(var_767_object);
	var_781_bool = 0; var_782_object = Obj();
	func_5604(Obj());
	var_783_object = var_782_object;
	func_5324(var_781_bool, var_782_object);
	var_784_object = Obj(); var_785_object = Obj();
	var_761_object = var_784_object;
	var_767_object = var_785_object;
	TaskCall(6);
	func_1039(var_786_object, var_787_object, var_788_string, var_789_bool, var_784_object, var_785_object);
	TaskReturn();
	@@var_767_object:IsDialogEnd(var_770_bool);
	
Label_1021:
	var_876_bool = var_770_bool == 0; //@nz
	if(var_876_bool != 0) {
		sync();
		@@var_767_object:IsDialogEnd(var_770_bool);
		goto Label_1021;
	}
	var_761_object = Obj();
	func_5306();
	StopDialog(var_767_object);
	@@var_767_object:GetReturnValue((int)-1);
	var_769_int = var_760_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5569()
{
	var_70_bool = 0;
	func_5745(var_70_bool);
	if(var_70_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_5576(var_128_string, var_129_int, var_130_int)
{
	var_131_bool = 0; var_132_bool = 0;
	var_133_bool = 0; var_134_int = 0; var_135_int = 0;
	var_129_int = var_134_int;
	var_130_int = var_135_int;
	func_5620(var_133_bool, var_134_int, var_135_int);
	if(var_133_bool != 0) {
		AddItem(var_132_bool, var_128_string, (int)0);
	}
	return 2;
}


func_6090(var_792_bool)
{
	var_794_int = 0; var_795_string = "";
	func_5625(var_794_int, "d4q03");
	var_797_bool = var_794_int == (int)1;
	if(var_797_bool != 0) {
		var_792_bool = 1;
		return 0;
	}
	var_792_bool = 0;
	return 0;
}


func_5587(var_139_string, var_140_int, var_141_int, var_142_int, var_143_int)
{
	var_144_int = 0; var_145_bool = 0; var_146_int = 0; var_147_bool = 0;
	var_148_bool = 0; var_149_int = 0; var_150_int = 0;
	var_140_int = var_149_int;
	var_141_int = var_150_int;
	func_5620(var_148_bool, var_149_int, var_150_int);
	if(var_148_bool != 0) {
		var_151_int = var_143_int - var_142_int;
		var_153_int = var_151_int + (int)1;
		irand(var_146_int, var_153_int);
		var_155_int = var_146_int + var_142_int;
		AddItem(var_147_bool, var_139_string, (int)0, var_155_int);
	}
	return 4;
}


func_4052(var_0_bool, var_1_object, var_2_object, var_3_object, var_1341_object, var_1342_object)
{
	var_0_bool = var_1342_object;
	var_1_object = var_1341_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1348_string = "";
		func_4115(var_1342_object, "Fear");
		@@@var_0_bool:SetMessage((int)514186);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)514187, (int)-1, (int)15401);
		@@@var_0_bool:AddReply((int)514188, (int)-1, (int)15402);
		@@@var_0_bool:AddReply((int)539631, (int)-1, (int)41577);
		goto Label_4085;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xfd8";
	}
Label_4085:
	var_1366_bool = 0;
	func_5745(var_1366_bool);
	if(var_1366_bool != 0) {

	Label_4089:
		lshWaitForAnimEnd();
		var_1367_object = var_3_object;
		if(var_1367_object != 0) {
		} else {
			var_1368_string = "";
			var_1368_string = var_2_object;
			func_5523(var_1368_string);
			goto Label_4089;
	}
		PlayAnimation("all", "idle");

	Label_4104:
		WaitForAnimEnd();
		var_1371_object = var_3_object;
		if(var_1371_object != 0) {
			goto Label_4114;
		}
		PlayAnimation("all", "idle");
		goto Label_4104;
	}
	goto Label_4114;
	
Label_4114:
	return 0;
	
}


func_6102(var_798_bool)
{
	var_800_int = 0; var_801_string = "";
	func_5625(var_800_int, "ood4Grif1");
	var_803_bool = var_800_int == (int)0;
	if(var_803_bool != 0) {
		var_798_bool = 1;
		return 0;
	}
	var_798_bool = 0;
	return 0;
}


func_3549(var_0_bool, var_1256_int, var_1257_object)
{
	var_1259_object = Obj(); var_1260_bool = 0; var_1261_int = 0; var_1262_bool = 0; var_1263_object = Obj(); var_1264_bool = 0; var_1265_int = 0; var_1266_bool = 0;
	var_0_bool = var_1257_object;
	var_1267_bool = 0; var_1268_object = Obj(); var_1269_float = 0;
	var_1257_object = var_1268_object;
	func_5237(var_1267_bool, var_1268_object, (float)70.0);
	var_1270_bool = var_1267_bool == 0; //@nz
	if(var_1270_bool != 0) {
		var_1256_int = -2;
		return 8;
	}
	CreateDialog(var_1263_object);
	var_1271_int = 0;
	func_5739(var_1271_int);
	@@var_1263_object:SetNPCName(var_1271_int);
	var_1272_int = 0;
	func_5737(var_1272_int);
	@@var_1263_object:SetNPCDescription(var_1272_int);
	var_1273_string = "";
	func_5741(var_1273_string);
	@@var_1263_object:SetPhoto(var_1273_string);
	var_1274_string = "";
	func_5743(var_1274_string);
	@@var_1263_object:SetPhoto2(var_1274_string);
	var_1275_int = 0;
	func_6536(var_1275_int);
	@@var_1263_object:SetPlayerName(var_1275_int);
	IsOverrideActive(var_1264_bool);
	var_1276_bool = var_1264_bool;
	if(var_1276_bool != 0) {
		var_1256_int = -2;
		return 8;
	}
	DoDialog(var_1263_object);
	var_1277_bool = 0; var_1278_object = Obj();
	func_5604(Obj());
	var_1279_object = var_1278_object;
	func_5324(var_1277_bool, var_1278_object);
	var_1280_object = Obj(); var_1281_object = Obj();
	var_1257_object = var_1280_object;
	var_1263_object = var_1281_object;
	TaskCall(18);
	func_3630(var_1282_object, var_1283_object, var_1284_string, var_1285_bool, var_1280_object, var_1281_object);
	TaskReturn();
	@@var_1263_object:IsDialogEnd(var_1266_bool);
	
Label_3612:
	var_1310_bool = var_1266_bool == 0; //@nz
	if(var_1310_bool != 0) {
		sync();
		@@var_1263_object:IsDialogEnd(var_1266_bool);
		goto Label_3612;
	}
	var_1257_object = Obj();
	func_5306();
	StopDialog(var_1263_object);
	@@var_1263_object:GetReturnValue((int)-1);
	var_1265_int = var_1256_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6114(var_830_bool)
{
	var_832_int = 0; var_833_string = "";
	func_5625(var_832_int, "ood4Grif2");
	var_835_bool = var_832_int == (int)0;
	if(var_835_bool != 0) {
		var_830_bool = 1;
		return 0;
	}
	var_830_bool = 0;
	return 0;
}


func_5604(var_289_object)
{
	var_290_object = Obj(); var_291_object = Obj();
	self(var_291_object);
	var_291_object = var_289_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5610(var_253_cvector, var_254_cvector)
{
	var_256_float = 0; var_257_float = 0;
	var_258_int = var_254_cvector | var_254_cvector;
	var_257_float = sqrt(var_258_int);
	var_259_float = 9.999999974752427e-07;
	var_260_bool = var_257_float < var_259_float;
	if(var_260_bool != 0) {
		var_253_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_253_cvector = var_254_cvector / var_257_float;
	return 2;
}


func_6126(var_836_bool)
{
	var_838_int = 0; var_839_string = "";
	func_5625(var_838_int, "d4q03_alldead");
	var_841_bool = var_838_int == (int)1;
	if(var_841_bool != 0) {
		var_836_bool = 1;
		return 0;
	}
	var_836_bool = 0;
	return 0;
}


func_3055(var_2_object, var_1043_string)
{
	var_1044_bool = 0;
	func_5745(var_1044_bool);
	var_1045_bool = var_1044_bool == 0; //@nz
	if(var_1045_bool != 0) {
		return 0;
	}
	var_1046_bool = var_1043_string == var_2_object;
	if(var_1046_bool != 0) {
		return 0;
	}
	var_1047_string = ""; var_1048_bool = 0;
	var_1043_string = var_1047_string;
	var_1050_bool = var_1043_string == "";
	if(var_1050_bool != 0) {
		var_1048_bool = 0;
	} else {
		var_1048_bool = 1;
	}
	func_5539(var_1047_string, var_1048_bool);
	var_2_object = var_1043_string;
	return 0;
	
}


func_5620(var_133_bool, var_134_int, var_135_int)
{
	var_136_int = 0; var_137_int = 0;
	irand(var_137_int, var_135_int);
	var_133_bool = var_137_int < var_134_int;
	return 2;
}


func_5625(var_489_int, var_490_string)
{
	var_491_int = 0; var_492_int = 0;
	GetVariable(var_490_string, var_492_int);
	var_492_int = var_489_int;
	return 2;
}


func_6138(var_957_bool)
{
	var_959_int = 0; var_960_string = "";
	func_5625(var_959_int, "d5q01");
	var_962_bool = var_959_int == (int)6;
	if(var_962_bool != 0) {
		var_957_bool = 1;
		return 0;
	}
	var_957_bool = 0;
	return 0;
}


func_5630(var_156_int, var_157_int)
{
	var_158_object = Obj(); var_159_object = Obj();
	CreateIntVector(var_159_object);
	@@var_159_object:add(var_156_int);
	@@var_159_object:add(var_157_int);
	SendWorldWndMessage((int)3, var_159_object);
	return 2;
}
EMIT "Stack[-1] = 0";


