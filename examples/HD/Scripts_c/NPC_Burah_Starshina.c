// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,GetInvItemByName/2,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Oracle|A:SetMessage|A:ClearReplies|A:AddReply|W:Neutral|W:all|W:idle|W:Smile|W:Refusal|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:Door |W: not found|A:Close|W:locked|A:SetProperty|A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|A:HasItem|W:ui/NPC_Starshina.png|W:ui/NPC_Starshina_b.png|W:icot_eva_door|W:b7q01|W:avroks blood is given|W:avroks_blood|W:b8q01|W:b8q01KnowSgustki|W:b9q01|W:quest_b9_01_effect.bin|A:ApplyEffect|W:quest_b9_01|W:remove_danko|W:completed|W:b9q01_stop|W:oob9Starshina1|W:oob9Starshina2|W:oob10Starshina1|W:b10q01|W:b10q01StarshinaGotoKurgan|W:pt_map_kurgan|A:AddMark|W:quest_b10_01|W:usable_stone|W:quest_b10_01_effect.bin|W:oob11Starshina1|W:b11q01|W:quest_b11_01|W:open_shaft|W:starshina_fight|W:playsound|W:giveitem|W:B_Mission3|W:B_Mission4|A:ShowMap|W:map_chertez_state|W:map_chertez_force|W:pt_map_aglaja|W:b10q01Butchers|W:b11q01KnowWhoKilled|W:b8q01_bone|W:b10q03|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|A:Remove|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x1075
// @RUN_TASK: 18
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xba vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x2c3 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x53a vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x7f7 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb08 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xdea vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0xeb5 vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0xf80 vars=int,int
// @TASK_16: vars=object params=2
// @TASK_17: vars=object,object,string,bool params=2
// @EVENT_11: op=0x104b vars=int,int
// @TASK_18: vars=cvector params=0
// @EVENT_7: op=0x10ba vars=int
// @EVENT_6: op=0x10e0 vars=
// @EVENT_5: op=0x10ef vars=
// @EVENT_45: op=0x10fc vars=bool
// @EVENT_0: op=0x1108 vars=object
// @PE: 0x51,0xa4,0xba,0x251,0x2ad,0x2c3,0x4b8,0x524,0x53a,0x759,0x7e1,0x7f7,0xa68,0xaf2,0xb08,0xd9a,0xdd4,0xdea,0xe65,0xe9f,0xeb5,0xf30,0xf6a,0xf80,0xffb,0x1035,0x104b,0x10ba,0x10e0,0x10fc,0x131e,0x1359,0x1360,0x1369,0x1374,0x137d,0x138a,0x139e,0x13ab,0x13b1,0x13b7,0x13dc,0x13e5,0x13eb,0x13fc,0x1403,0x1409,0x1421,0x143d,0x144d,0x145e,0x146f,0x147f,0x148b,0x1497,0x14a3,0x14af,0x14bb,0x14c7,0x14d3,0x14df,0x14f6,0x1502,0x150e,0x151a,0x1526,0x1532,0x153e,0x1549,0x1555,0x167a

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_4768();
		var_51_bool = var_47_cvector == (int)22231;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_4960();
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_5123();
			var_83_object = Obj(); var_84_object = Obj();
			var_83_object = var_1_object;
			var_84_object = var_0_object;
			func_4969(var_84_object);
		}
		var_108_bool = var_46_bool == (int)22230;
		if(var_108_bool != 0) {
			var_109_bool = 0; var_110_object = Obj();
			var_110_object = var_1_object;
			func_5461(var_110_object);
			if(var_109_bool != 0) {
				var_117_string = "";
				func_164(var_47_cvector, "Oracle");
				@@@var_0_object:SetMessage((int)521017);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)528565, (int)29962, (int)29961);
				@@@var_0_object:AddReply((int)528573, (int)29966, (int)29969);
				return 0;
			}
			var_141_string = "";
			func_164(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521041);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528593, (int)29994, (int)29993);
			@@@var_0_object:AddReply((int)521042, (int)-1, (int)22238);
			return 0;
		}
		var_150_bool = var_46_bool == (int)29994;
		if(var_150_bool != 0) {
			var_151_string = "";
			func_164(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528594);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528595, (int)-1, (int)29995);
			return 0;
		}
		var_157_bool = var_46_bool == (int)29962;
		if(var_157_bool != 0) {
			var_158_string = "";
			func_164(var_47_cvector, "Oracle");
			@@@var_0_object:SetMessage((int)528566);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528567, (int)29964, (int)29963);
			@@@var_0_object:AddReply((int)528574, (int)29964, (int)29970);
			return 0;
		}
		var_167_bool = var_46_bool == (int)29964;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_164(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)528568);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528569, (int)29987, (int)29965);
			@@@var_0_object:AddReply((int)528575, (int)29973, (int)29972);
			return 0;
		}
		var_177_bool = var_46_bool == (int)29973;
		if(var_177_bool != 0) {
			var_178_string = "";
			func_164(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528576);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528577, (int)-1, (int)29974);
			return 0;
		}
		var_184_bool = var_46_bool == (int)29987;
		if(var_184_bool != 0) {
			var_185_string = "";
			func_164(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528588);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528589, (int)29966, (int)29988);
			@@@var_0_object:AddReply((int)528590, (int)29966, (int)29989);
			return 0;
		}
		var_194_bool = var_46_bool == (int)29966;
		if(var_194_bool != 0) {
			var_195_string = "";
			func_164(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528570);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528571, (int)29968, (int)29967);
			return 0;
		}
		var_201_bool = var_46_bool == (int)29968;
		if(var_201_bool != 0) {
			var_202_string = "";
			func_164(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528572);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528578, (int)29976, (int)29975);
			@@@var_0_object:AddReply((int)528584, (int)29976, (int)29981);
			return 0;
		}
		var_211_bool = var_46_bool == (int)29976;
		if(var_211_bool != 0) {
			var_212_string = "";
			func_164(var_47_cvector, "Oracle");
			@@@var_0_object:SetMessage((int)528579);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528585, (int)29984, (int)29983);
			@@@var_0_object:AddReply((int)528587, (int)29984, (int)29985);
			return 0;
		}
		var_221_bool = var_46_bool == (int)29984;
		if(var_221_bool != 0) {
			var_222_string = "";
			func_164(var_47_cvector, "Refusal");
			@@@var_0_object:SetMessage((int)528586);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528580, (int)29978, (int)29977);
			return 0;
		}
		var_228_bool = var_46_bool == (int)29978;
		if(var_228_bool != 0) {
			var_229_string = "";
			func_164(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528581);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528582, (int)29980, (int)29979);
			return 0;
		}
		var_235_bool = var_46_bool == (int)29980;
		if(var_235_bool != 0) {
			var_236_string = "";
			func_164(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528583);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528591, (int)29992, (int)29991);
			return 0;
		}
		var_242_bool = var_46_bool == (int)29992;
		if(var_242_bool != 0) {
			var_243_string = "";
			func_164(var_47_cvector, "Refusal");
			@@@var_0_object:SetMessage((int)528592);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521018, (int)-1, (int)22231);
			return 0;
		}
		var_3_string = true;
		var_248_bool = 0;
		func_4951(var_248_bool);
		if(var_248_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xbb";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_4768();
		var_51_bool = var_47_cvector == (int)22599;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_4980();
		}
		var_80_bool = var_47_cvector == (int)22607;
		if(var_80_bool != 0) {
			var_81_object = Obj(); var_82_object = Obj();
			var_81_object = var_1_object;
			var_82_object = var_0_object;
			func_4989();
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_object;
			var_96_object = var_0_object;
			func_5129();
			var_123_object = Obj(); var_124_object = Obj();
			var_123_object = var_1_object;
			var_124_object = var_0_object;
			func_5197();
			var_133_object = Obj(); var_134_object = Obj();
			var_133_object = var_1_object;
			var_134_object = var_0_object;
			func_5231(var_134_object);
		}
		var_166_bool = var_46_bool == (int)22596;
		if(var_166_bool != 0) {
			var_167_bool = 0; var_168_object = Obj();
			var_168_object = var_1_object;
			func_5259(var_168_object);
			if(var_167_bool != 0) {
				var_173_string = "";
				func_685(var_47_cvector, "Refusal");
				@@@var_0_object:SetMessage((int)521418);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)521419, (int)24983, (int)22597);
				return 0;
			}
			var_194_string = "";
			func_685(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521423);
			@@@var_0_object:ClearReplies();
			var_196_bool = 0;
			var_196_bool = 0;
			var_197_bool = 0; var_198_object = Obj();
			var_198_object = var_1_object;
			func_5247(var_198_object);
			if(var_197_bool != 0) {
				var_203_bool = 0; var_204_object = Obj();
				var_204_object = var_1_object;
				func_5438(var_203_bool, var_204_object);
				if(var_203_bool != 0) {
					var_196_bool = 1;
				}
			}
			if(var_196_bool != 0) {
				@@@var_0_object:AddReply((int)521425, (int)22604, (int)22603);
			}
			@@@var_0_object:AddReply((int)521424, (int)-1, (int)22602);
			return 0;
		}
		var_219_bool = var_46_bool == (int)22604;
		if(var_219_bool != 0) {
			var_220_string = "";
			func_685(var_47_cvector, "Oracle");
			@@@var_0_object:SetMessage((int)521426);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521427, (int)22606, (int)22605);
			return 0;
		}
		var_226_bool = var_46_bool == (int)22606;
		if(var_226_bool != 0) {
			var_227_string = "";
			func_685(var_47_cvector, "Oracle");
			@@@var_0_object:SetMessage((int)521428);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523745, (int)25009, (int)25008);
			return 0;
		}
		var_233_bool = var_46_bool == (int)25009;
		if(var_233_bool != 0) {
			var_234_string = "";
			func_685(var_47_cvector, "Oracle");
			@@@var_0_object:SetMessage((int)523746);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523747, (int)25011, (int)25010);
			return 0;
		}
		var_240_bool = var_46_bool == (int)25011;
		if(var_240_bool != 0) {
			var_241_string = "";
			func_685(var_47_cvector, "Oracle");
			@@@var_0_object:SetMessage((int)523748);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523749, (int)25013, (int)25012);
			return 0;
		}
		var_247_bool = var_46_bool == (int)25013;
		if(var_247_bool != 0) {
			var_248_string = "";
			func_685(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523750);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523751, (int)25015, (int)25014);
			return 0;
		}
		var_254_bool = var_46_bool == (int)25015;
		if(var_254_bool != 0) {
			var_255_string = "";
			func_685(var_47_cvector, "Refusal");
			@@@var_0_object:SetMessage((int)523752);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523753, (int)25017, (int)25016);
			return 0;
		}
		var_261_bool = var_46_bool == (int)25017;
		if(var_261_bool != 0) {
			var_262_string = "";
			func_685(var_47_cvector, "Refusal");
			@@@var_0_object:SetMessage((int)523754);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523755, (int)25019, (int)25018);
			return 0;
		}
		var_268_bool = var_46_bool == (int)25019;
		if(var_268_bool != 0) {
			var_269_string = "";
			func_685(var_47_cvector, "Refusal");
			@@@var_0_object:SetMessage((int)523756);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521429, (int)-1, (int)22607);
			return 0;
		}
		var_275_bool = var_46_bool == (int)24983;
		if(var_275_bool != 0) {
			var_276_string = "";
			func_685(var_47_cvector, "Refusal");
			@@@var_0_object:SetMessage((int)523725);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523726, (int)24985, (int)24984);
			return 0;
		}
		var_282_bool = var_46_bool == (int)24985;
		if(var_282_bool != 0) {
			var_283_string = "";
			func_685(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523727);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523728, (int)24987, (int)24986);
			@@@var_0_object:AddReply((int)523740, (int)24994, (int)25000);
			return 0;
		}
		var_292_bool = var_46_bool == (int)24987;
		if(var_292_bool != 0) {
			var_293_string = "";
			func_685(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523729);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523730, (int)24989, (int)24988);
			@@@var_0_object:AddReply((int)523737, (int)24994, (int)24995);
			return 0;
		}
		var_302_bool = var_46_bool == (int)24989;
		if(var_302_bool != 0) {
			var_303_string = "";
			func_685(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523731);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523732, (int)24991, (int)24990);
			@@@var_0_object:AddReply((int)523739, (int)24994, (int)24998);
			return 0;
		}
		var_312_bool = var_46_bool == (int)24991;
		if(var_312_bool != 0) {
			var_313_string = "";
			func_685(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523733);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523734, (int)25002, (int)24992);
			@@@var_0_object:AddReply((int)523735, (int)24994, (int)24993);
			return 0;
		}
		var_322_bool = var_46_bool == (int)24994;
		if(var_322_bool != 0) {
			var_323_string = "";
			func_685(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523736);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523738, (int)25005, (int)24996);
			return 0;
		}
		var_329_bool = var_46_bool == (int)25002;
		if(var_329_bool != 0) {
			var_330_string = "";
			func_685(var_47_cvector, "Oracle");
			@@@var_0_object:SetMessage((int)523741);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523742, (int)25005, (int)25003);
			@@@var_0_object:AddReply((int)523743, (int)25005, (int)25004);
			return 0;
		}
		var_339_bool = var_46_bool == (int)25005;
		if(var_339_bool != 0) {
			var_340_string = "";
			func_685(var_47_cvector, "Oracle");
			@@@var_0_object:SetMessage((int)523744);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521421, (int)-1, (int)22599);
			return 0;
		}
		var_3_string = true;
		var_345_bool = 0;
		func_4951(var_345_bool);
		if(var_345_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x2c4";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_4768();
		var_51_bool = var_47_cvector == (int)22709;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_5002(var_53_object);
			var_94_object = Obj(); var_95_object = Obj();
			var_94_object = var_1_object;
			var_95_object = var_0_object;
			func_4953();
		}
		var_108_bool = var_47_cvector == (int)22711;
		if(var_108_bool != 0) {
			var_109_object = Obj(); var_110_object = Obj();
			var_109_object = var_1_object;
			var_110_object = var_0_object;
			func_5002(var_110_object);
		}
		var_112_bool = var_47_cvector == (int)22772;
		if(var_112_bool != 0) {
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_5022(var_114_object);
		}
		var_128_bool = var_47_cvector == (int)23578;
		if(var_128_bool != 0) {
			var_129_object = Obj(); var_130_object = Obj();
			var_129_object = var_1_object;
			var_130_object = var_0_object;
			func_5041();
		}
		var_134_bool = var_46_bool == (int)22700;
		if(var_134_bool != 0) {
			var_135_bool = 0; var_136_object = Obj();
			var_136_object = var_1_object;
			func_5283(var_136_object);
			if(var_135_bool != 0) {
				var_143_object = Obj(); var_144_object = Obj();
				var_143_object = var_1_object;
				var_144_object = var_0_object;
				func_5035();
				var_147_string = "";
				func_1316(var_47_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)521539);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)522390, (int)23556, (int)23555);
				return 0;
			}
			var_168_string = "";
			func_1316(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521544);
			@@@var_0_object:ClearReplies();
			var_170_bool = 0; var_171_object = Obj();
			var_171_object = var_1_object;
			func_5271(var_171_object);
			if(var_170_bool != 0) {
				@@@var_0_object:AddReply((int)521545, (int)22710, (int)22706);
			}
			var_179_bool = 0; var_180_object = Obj();
			var_180_object = var_1_object;
			func_5295(var_180_object);
			if(var_179_bool != 0) {
				@@@var_0_object:AddReply((int)521587, (int)22749, (int)22748);
			}
			var_188_bool = 0; var_189_object = Obj();
			var_189_object = var_1_object;
			func_5307(var_189_object);
			if(var_188_bool != 0) {
				@@@var_0_object:AddReply((int)522411, (int)23579, (int)23578);
			}
			@@@var_0_object:AddReply((int)521546, (int)-1, (int)22707);
			return 0;
		}
		var_201_bool = var_46_bool == (int)23579;
		if(var_201_bool != 0) {
			var_202_string = "";
			func_1316(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522412);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522414, (int)23582, (int)23581);
			@@@var_0_object:AddReply((int)522413, (int)-1, (int)23580);
			return 0;
		}
		var_211_bool = var_46_bool == (int)23582;
		if(var_211_bool != 0) {
			var_212_string = "";
			func_1316(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522415);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522416, (int)-1, (int)23583);
			return 0;
		}
		var_218_bool = var_46_bool == (int)22749;
		if(var_218_bool != 0) {
			var_219_string = "";
			func_1316(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521588);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521589, (int)22751, (int)22750);
			return 0;
		}
		var_225_bool = var_46_bool == (int)22751;
		if(var_225_bool != 0) {
			var_226_string = "";
			func_1316(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521590);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521592, (int)22768, (int)22755);
			return 0;
		}
		var_232_bool = var_46_bool == (int)22768;
		if(var_232_bool != 0) {
			var_233_string = "";
			func_1316(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521603);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522468, (int)23642, (int)23641);
			return 0;
		}
		var_239_bool = var_46_bool == (int)23642;
		if(var_239_bool != 0) {
			var_240_string = "";
			func_1316(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522469);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521593, (int)22771, (int)22756);
			return 0;
		}
		var_246_bool = var_46_bool == (int)22771;
		if(var_246_bool != 0) {
			var_247_string = "";
			func_1316(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521605);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521606, (int)-1, (int)22772);
			return 0;
		}
		var_253_bool = var_46_bool == (int)22710;
		if(var_253_bool != 0) {
			var_254_string = "";
			func_1316(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521549);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521550, (int)-1, (int)22711);
			return 0;
		}
		var_260_bool = var_46_bool == (int)23556;
		if(var_260_bool != 0) {
			var_261_string = "";
			func_1316(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522391);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522393, (int)23559, (int)23558);
			@@@var_0_object:AddReply((int)522392, (int)-1, (int)23557);
			return 0;
		}
		var_270_bool = var_46_bool == (int)23559;
		if(var_270_bool != 0) {
			var_271_string = "";
			func_1316(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522394);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521540, (int)22702, (int)22701);
			@@@var_0_object:AddReply((int)522396, (int)23562, (int)23561);
			@@@var_0_object:AddReply((int)522395, (int)23570, (int)23560);
			return 0;
		}
		var_283_bool = var_46_bool == (int)23570;
		if(var_283_bool != 0) {
			var_284_string = "";
			func_1316(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)522404);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522405, (int)23572, (int)23571);
			return 0;
		}
		var_290_bool = var_46_bool == (int)23572;
		if(var_290_bool != 0) {
			var_291_string = "";
			func_1316(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)522406);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522407, (int)23564, (int)23573);
			@@@var_0_object:AddReply((int)522408, (int)-1, (int)23574);
			return 0;
		}
		var_300_bool = var_46_bool == (int)23562;
		if(var_300_bool != 0) {
			var_301_string = "";
			func_1316(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522397);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522398, (int)23564, (int)23563);
			@@@var_0_object:AddReply((int)522401, (int)23564, (int)23566);
			@@@var_0_object:AddReply((int)522403, (int)-1, (int)23569);
			return 0;
		}
		var_313_bool = var_46_bool == (int)23564;
		if(var_313_bool != 0) {
			var_314_string = "";
			func_1316(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522399);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522400, (int)-1, (int)23565);
			@@@var_0_object:AddReply((int)522402, (int)-1, (int)23567);
			return 0;
		}
		var_323_bool = var_46_bool == (int)22702;
		if(var_323_bool != 0) {
			var_324_string = "";
			func_1316(var_47_cvector, "Refusal");
			@@@var_0_object:SetMessage((int)521541);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521542, (int)22708, (int)22703);
			@@@var_0_object:AddReply((int)521543, (int)-1, (int)22704);
			return 0;
		}
		var_333_bool = var_46_bool == (int)22708;
		if(var_333_bool != 0) {
			var_334_string = "";
			func_1316(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521547);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521548, (int)-1, (int)22709);
			return 0;
		}
		var_3_string = true;
		var_339_bool = 0;
		func_4951(var_339_bool);
		if(var_339_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x53b";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_4768();
		var_51_bool = var_47_cvector == (int)23048;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_5053(var_53_object);
			var_102_object = Obj(); var_103_object = Obj();
			var_102_object = var_1_object;
			var_103_object = var_0_object;
			func_5181(var_103_object);
		}
		var_129_bool = var_47_cvector == (int)23050;
		if(var_129_bool != 0) {
			var_130_object = Obj(); var_131_object = Obj();
			var_130_object = var_1_object;
			var_131_object = var_0_object;
			func_5053(var_131_object);
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_5181(var_133_object);
		}
		var_135_bool = var_47_cvector == (int)23057;
		if(var_135_bool != 0) {
			var_136_object = Obj(); var_137_object = Obj();
			var_136_object = var_1_object;
			var_137_object = var_0_object;
			func_5084();
		}
		var_149_bool = var_47_cvector == (int)23752;
		if(var_149_bool != 0) {
			var_150_object = Obj(); var_151_object = Obj();
			var_150_object = var_1_object;
			var_151_object = var_0_object;
			func_5084();
		}
		var_153_bool = var_46_bool == (int)23042;
		if(var_153_bool != 0) {
			var_154_bool = 0;
			var_154_bool = 0;
			var_155_bool = 0; var_156_object = Obj();
			var_156_object = var_1_object;
			func_5319(var_156_object);
			if(var_155_bool != 0) {
				var_163_bool = 0; var_164_object = Obj();
				var_164_object = var_1_object;
				func_5366(var_164_object);
				if(var_163_bool != 0) {
					var_154_bool = 1;
				}
			}
			if(var_154_bool != 0) {
				var_169_object = Obj(); var_170_object = Obj();
				var_169_object = var_1_object;
				var_170_object = var_0_object;
				func_5047();
				var_173_string = "";
				func_2017(var_47_cvector, "Smile");
				@@@var_0_object:SetMessage((int)521870);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)522575, (int)23755, (int)23754);
				@@@var_0_object:AddReply((int)522581, (int)23755, (int)23760);
				@@@var_0_object:AddReply((int)522586, (int)23047, (int)23767);
				return 0;
			}
			var_200_string = "";
			func_2017(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521873);
			@@@var_0_object:ClearReplies();
			var_202_bool = 0; var_203_object = Obj();
			var_203_object = var_1_object;
			func_5366(var_203_object);
			if(var_202_bool != 0) {
				@@@var_0_object:AddReply((int)521874, (int)23049, (int)23046);
			}
			var_207_bool = 0; var_208_object = Obj();
			var_208_object = var_1_object;
			func_5343(var_208_object);
			if(var_207_bool != 0) {
				@@@var_0_object:AddReply((int)521886, (int)23059, (int)23058);
			}
			var_221_bool = 0;
			var_221_bool = 0;
			var_222_bool = 0; var_223_object = Obj();
			var_223_object = var_1_object;
			func_5331(var_223_object);
			if(var_222_bool != 0) {
				var_228_bool = 0; var_229_object = Obj();
				var_229_object = var_1_object;
				func_5426(var_229_object);
				if(var_228_bool != 0) {
					var_221_bool = 1;
				}
			}
			if(var_221_bool != 0) {
				@@@var_0_object:AddReply((int)521883, (int)23744, (int)23055);
			}
			@@@var_0_object:AddReply((int)521879, (int)-1, (int)23051);
			return 0;
		}
		var_241_bool = var_46_bool == (int)23744;
		if(var_241_bool != 0) {
			var_242_string = "";
			func_2017(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522565);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522566, (int)23635, (int)23745);
			return 0;
		}
		var_248_bool = var_46_bool == (int)23635;
		if(var_248_bool != 0) {
			var_249_string = "";
			func_2017(var_47_cvector, "Oracle");
			@@@var_0_object:SetMessage((int)522462);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522463, (int)23637, (int)23636);
			return 0;
		}
		var_255_bool = var_46_bool == (int)23637;
		if(var_255_bool != 0) {
			var_256_string = "";
			func_2017(var_47_cvector, "Oracle");
			@@@var_0_object:SetMessage((int)522464);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522567, (int)23747, (int)23746);
			return 0;
		}
		var_262_bool = var_46_bool == (int)23747;
		if(var_262_bool != 0) {
			var_263_string = "";
			func_2017(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)522568);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522465, (int)23639, (int)23638);
			@@@var_0_object:AddReply((int)522569, (int)23749, (int)23748);
			return 0;
		}
		var_272_bool = var_46_bool == (int)23749;
		if(var_272_bool != 0) {
			var_273_string = "";
			func_2017(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)522570);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522571, (int)23751, (int)23750);
			return 0;
		}
		var_279_bool = var_46_bool == (int)23751;
		if(var_279_bool != 0) {
			var_280_string = "";
			func_2017(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522572);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522573, (int)-1, (int)23752);
			return 0;
		}
		var_286_bool = var_46_bool == (int)23639;
		if(var_286_bool != 0) {
			var_287_string = "";
			func_2017(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)522466);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521885, (int)-1, (int)23057);
			return 0;
		}
		var_293_bool = var_46_bool == (int)23059;
		if(var_293_bool != 0) {
			var_294_string = "";
			func_2017(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)521887);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521888, (int)-1, (int)23060);
			@@@var_0_object:AddReply((int)522560, (int)23740, (int)23739);
			return 0;
		}
		var_303_bool = var_46_bool == (int)23740;
		if(var_303_bool != 0) {
			var_304_string = "";
			func_2017(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)522561);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522562, (int)23742, (int)23741);
			return 0;
		}
		var_310_bool = var_46_bool == (int)23742;
		if(var_310_bool != 0) {
			var_311_string = "";
			func_2017(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)522563);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522564, (int)-1, (int)23743);
			return 0;
		}
		var_317_bool = var_46_bool == (int)23049;
		if(var_317_bool != 0) {
			var_318_string = "";
			func_2017(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521877);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521878, (int)-1, (int)23050);
			return 0;
		}
		var_324_bool = var_46_bool == (int)23755;
		if(var_324_bool != 0) {
			var_325_string = "";
			func_2017(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)522576);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522577, (int)23757, (int)23756);
			return 0;
		}
		var_331_bool = var_46_bool == (int)23757;
		if(var_331_bool != 0) {
			var_332_string = "";
			func_2017(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)522578);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521871, (int)23047, (int)23043);
			@@@var_0_object:AddReply((int)522584, (int)23047, (int)23765);
			return 0;
		}
		var_341_bool = var_46_bool == (int)23047;
		if(var_341_bool != 0) {
			var_342_string = "";
			func_2017(var_47_cvector, "Refusal");
			@@@var_0_object:SetMessage((int)521875);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522579, (int)23759, (int)23758);
			@@@var_0_object:AddReply((int)521872, (int)23771, (int)23044);
			@@@var_0_object:AddReply((int)522591, (int)23777, (int)23776);
			return 0;
		}
		var_354_bool = var_46_bool == (int)23777;
		if(var_354_bool != 0) {
			var_355_string = "";
			func_2017(var_47_cvector, "Refusal");
			@@@var_0_object:SetMessage((int)522592);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522593, (int)23759, (int)23778);
			return 0;
		}
		var_361_bool = var_46_bool == (int)23771;
		if(var_361_bool != 0) {
			var_362_string = "";
			func_2017(var_47_cvector, "Refusal");
			@@@var_0_object:SetMessage((int)522587);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522588, (int)23773, (int)23772);
			@@@var_0_object:AddReply((int)522590, (int)23759, (int)23774);
			return 0;
		}
		var_371_bool = var_46_bool == (int)23773;
		if(var_371_bool != 0) {
			var_372_string = "";
			func_2017(var_47_cvector, "Refusal");
			@@@var_0_object:SetMessage((int)522589);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532185, (int)23759, (int)33601);
			return 0;
		}
		var_378_bool = var_46_bool == (int)23759;
		if(var_378_bool != 0) {
			var_379_string = "";
			func_2017(var_47_cvector, "Refusal");
			@@@var_0_object:SetMessage((int)522580);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522594, (int)23781, (int)23780);
			@@@var_0_object:AddReply((int)522582, (int)-1, (int)23763);
			return 0;
		}
		var_388_bool = var_46_bool == (int)23781;
		if(var_388_bool != 0) {
			var_389_string = "";
			func_2017(var_47_cvector, "Refusal");
			@@@var_0_object:SetMessage((int)522595);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521876, (int)-1, (int)23048);
			@@@var_0_object:AddReply((int)522596, (int)-1, (int)23782);
			return 0;
		}
		var_3_string = true;
		var_397_bool = 0;
		func_4951(var_397_bool);
		if(var_397_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x7f8";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_4768();
		var_51_bool = var_47_cvector == (int)23169;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_5099();
			var_93_object = Obj(); var_94_object = Obj();
			var_93_object = var_1_object;
			var_94_object = var_0_object;
			func_5214();
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_5231(var_106_object);
		}
		var_138_bool = var_47_cvector == (int)24875;
		if(var_138_bool != 0) {
			var_139_object = Obj(); var_140_object = Obj();
			var_139_object = var_1_object;
			var_140_object = var_0_object;
			func_5099();
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_object;
			func_5214();
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_object;
			func_5231(var_144_object);
		}
		var_146_bool = var_47_cvector == (int)23225;
		if(var_146_bool != 0) {
			var_147_object = Obj(); var_148_object = Obj();
			var_147_object = var_1_object;
			var_148_object = var_0_object;
			func_5116();
		}
		var_153_bool = var_47_cvector == (int)24857;
		if(var_153_bool != 0) {
			var_154_object = Obj(); var_155_object = Obj();
			var_154_object = var_1_object;
			var_155_object = var_0_object;
			func_5116();
		}
		var_157_bool = var_47_cvector == (int)24858;
		if(var_157_bool != 0) {
			var_158_object = Obj(); var_159_object = Obj();
			var_158_object = var_1_object;
			var_159_object = var_0_object;
			func_5116();
		}
		var_161_bool = var_47_cvector == (int)24882;
		if(var_161_bool != 0) {
			var_162_object = Obj(); var_163_object = Obj();
			var_162_object = var_1_object;
			var_163_object = var_0_object;
			func_5099();
		}
		var_165_bool = var_47_cvector == (int)24885;
		if(var_165_bool != 0) {
			var_166_object = Obj(); var_167_object = Obj();
			var_166_object = var_1_object;
			var_167_object = var_0_object;
			func_5099();
		}
		var_169_bool = var_47_cvector == (int)23227;
		if(var_169_bool != 0) {
			var_170_object = Obj(); var_171_object = Obj();
			var_170_object = var_1_object;
			var_171_object = var_0_object;
			func_5116();
			var_172_object = Obj(); var_173_object = Obj();
			var_172_object = var_1_object;
			var_173_object = var_0_object;
			func_5153();
		}
		var_201_bool = var_47_cvector == (int)24844;
		if(var_201_bool != 0) {
			var_202_object = Obj(); var_203_object = Obj();
			var_202_object = var_1_object;
			var_203_object = var_0_object;
			func_5116();
			var_204_object = Obj(); var_205_object = Obj();
			var_204_object = var_1_object;
			var_205_object = var_0_object;
			func_5153();
		}
		var_207_bool = var_47_cvector == (int)24846;
		if(var_207_bool != 0) {
			var_208_object = Obj(); var_209_object = Obj();
			var_208_object = var_1_object;
			var_209_object = var_0_object;
			func_5116();
			var_210_object = Obj(); var_211_object = Obj();
			var_210_object = var_1_object;
			var_211_object = var_0_object;
			func_5153();
		}
		var_213_bool = var_46_bool == (int)23163;
		if(var_213_bool != 0) {
			var_214_bool = 0; var_215_object = Obj();
			var_215_object = var_1_object;
			func_5378(var_215_object);
			if(var_214_bool != 0) {
				var_220_object = Obj(); var_221_object = Obj();
				var_220_object = var_1_object;
				var_221_object = var_0_object;
				func_5093();
				var_224_string = "";
				func_2802(var_47_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)521993);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)521994, (int)23168, (int)23164);
				var_245_bool = 0; var_246_object = Obj();
				var_246_object = var_1_object;
				func_5449(var_246_object);
				if(var_245_bool != 0) {
					@@@var_0_object:AddReply((int)521996, (int)23168, (int)23166);
				}
				return 0;
			}
			var_254_bool = 0; var_255_object = Obj();
			var_255_object = var_1_object;
			func_5414(var_255_object);
			if(var_254_bool != 0) {
				var_260_string = "";
				func_2802(var_47_cvector, "Smile");
				@@@var_0_object:SetMessage((int)522051);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)523621, (int)24861, (int)24860);
				@@@var_0_object:AddReply((int)523612, (int)24851, (int)24849);
				@@@var_0_object:AddReply((int)523613, (int)24851, (int)24850);
				return 0;
			}
			var_271_string = "";
			func_2802(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521997);
			@@@var_0_object:ClearReplies();
			var_273_bool = 0; var_274_object = Obj();
			var_274_object = var_1_object;
			func_5390(var_274_object);
			if(var_273_bool != 0) {
				@@@var_0_object:AddReply((int)522000, (int)24859, (int)23170);
			}
			var_282_bool = 0; var_283_object = Obj();
			var_283_object = var_1_object;
			func_5402(var_283_object);
			if(var_282_bool != 0) {
				@@@var_0_object:AddReply((int)522003, (int)23226, (int)23173);
			}
			@@@var_0_object:AddReply((int)522004, (int)-1, (int)23174);
			return 0;
		}
		var_295_bool = var_46_bool == (int)23226;
		if(var_295_bool != 0) {
			var_296_string = "";
			func_2802(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)522053);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522054, (int)-1, (int)23227);
			@@@var_0_object:AddReply((int)523600, (int)24837, (int)24835);
			@@@var_0_object:AddReply((int)523603, (int)24839, (int)24838);
			return 0;
		}
		var_308_bool = var_46_bool == (int)24839;
		if(var_308_bool != 0) {
			var_309_string = "";
			func_2802(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)523604);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523605, (int)24837, (int)24840);
			@@@var_0_object:AddReply((int)523606, (int)24842, (int)24841);
			return 0;
		}
		var_318_bool = var_46_bool == (int)24842;
		if(var_318_bool != 0) {
			var_319_string = "";
			func_2802(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)523607);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523610, (int)-1, (int)24846);
			@@@var_0_object:AddReply((int)523611, (int)24837, (int)24847);
			return 0;
		}
		var_328_bool = var_46_bool == (int)24837;
		if(var_328_bool != 0) {
			var_329_string = "";
			func_2802(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)523602);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523608, (int)-1, (int)24844);
			@@@var_0_object:AddReply((int)523609, (int)-1, (int)24845);
			return 0;
		}
		var_338_bool = var_46_bool == (int)24859;
		if(var_338_bool != 0) {
			var_339_string = "";
			func_2802(var_47_cvector, "Oracle");
			@@@var_0_object:SetMessage((int)523620);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523637, (int)24881, (int)24880);
			return 0;
		}
		var_345_bool = var_46_bool == (int)24881;
		if(var_345_bool != 0) {
			var_346_string = "";
			func_2802(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523638);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523639, (int)-1, (int)24882);
			@@@var_0_object:AddReply((int)523640, (int)24884, (int)24883);
			return 0;
		}
		var_355_bool = var_46_bool == (int)24884;
		if(var_355_bool != 0) {
			var_356_string = "";
			func_2802(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523641);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523642, (int)-1, (int)24885);
			return 0;
		}
		var_362_bool = var_46_bool == (int)24851;
		if(var_362_bool != 0) {
			var_363_string = "";
			func_2802(var_47_cvector, "Refusal");
			@@@var_0_object:SetMessage((int)523614);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523615, (int)24855, (int)24853);
			@@@var_0_object:AddReply((int)523616, (int)24855, (int)24854);
			return 0;
		}
		var_372_bool = var_46_bool == (int)24855;
		if(var_372_bool != 0) {
			var_373_string = "";
			func_2802(var_47_cvector, "Refusal");
			@@@var_0_object:SetMessage((int)523617);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522052, (int)-1, (int)23225);
			@@@var_0_object:AddReply((int)523618, (int)-1, (int)24857);
			@@@var_0_object:AddReply((int)523619, (int)-1, (int)24858);
			return 0;
		}
		var_385_bool = var_46_bool == (int)24861;
		if(var_385_bool != 0) {
			var_386_string = "";
			func_2802(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)523622);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523623, (int)24851, (int)24862);
			@@@var_0_object:AddReply((int)523624, (int)24851, (int)24864);
			return 0;
		}
		var_395_bool = var_46_bool == (int)23168;
		if(var_395_bool != 0) {
			var_396_string = "";
			func_2802(var_47_cvector, "Oracle");
			@@@var_0_object:SetMessage((int)521998);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523625, (int)24867, (int)24866);
			@@@var_0_object:AddReply((int)523627, (int)24869, (int)24868);
			return 0;
		}
		var_405_bool = var_46_bool == (int)24867;
		if(var_405_bool != 0) {
			var_406_string = "";
			func_2802(var_47_cvector, "Oracle");
			@@@var_0_object:SetMessage((int)523626);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523629, (int)24869, (int)24870);
			@@@var_0_object:AddReply((int)523634, (int)24877, (int)24876);
			return 0;
		}
		var_415_bool = var_46_bool == (int)24877;
		if(var_415_bool != 0) {
			var_416_string = "";
			func_2802(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523635);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523636, (int)24869, (int)24878);
			return 0;
		}
		var_422_bool = var_46_bool == (int)24869;
		if(var_422_bool != 0) {
			var_423_string = "";
			func_2802(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523628);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521999, (int)-1, (int)23169);
			@@@var_0_object:AddReply((int)523631, (int)24874, (int)24873);
			return 0;
		}
		var_432_bool = var_46_bool == (int)24874;
		if(var_432_bool != 0) {
			var_433_string = "";
			func_2802(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)523632);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523633, (int)-1, (int)24875);
			@@@var_0_object:AddReply((int)523630, (int)-1, (int)24871);
			return 0;
		}
		var_3_string = true;
		var_441_bool = 0;
		func_4951(var_441_bool);
		if(var_441_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb09";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_4768();
		var_51_bool = var_46_bool == (int)31309;
		if(var_51_bool != 0) {
			var_52_string = "";
			func_3540(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529926);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529927, (int)-1, (int)31310);
			@@@var_0_object:AddReply((int)529928, (int)-1, (int)31311);
			return 0;
		}
		var_3_string = true;
		var_76_bool = 0;
		func_4951(var_76_bool);
		if(var_76_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xdeb";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_4768();
		var_51_bool = var_46_bool == (int)31317;
		if(var_51_bool != 0) {
			var_52_string = "";
			func_3743(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529934);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529935, (int)-1, (int)31318);
			@@@var_0_object:AddReply((int)529936, (int)-1, (int)31319);
			return 0;
		}
		var_3_string = true;
		var_76_bool = 0;
		func_4951(var_76_bool);
		if(var_76_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xeb6";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_4768();
		var_51_bool = var_46_bool == (int)31321;
		if(var_51_bool != 0) {
			var_52_string = "";
			func_3946(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529938);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529939, (int)-1, (int)31322);
			@@@var_0_object:AddReply((int)529940, (int)-1, (int)31323);
			return 0;
		}
		var_3_string = true;
		var_76_bool = 0;
		func_4951(var_76_bool);
		if(var_76_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xf81";
	
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_cvector)
{
	if((int)1 != 0) {
		func_4768();
		var_51_bool = var_46_int == (int)42563;
		if(var_51_bool != 0) {
			var_52_string = "";
			func_4149(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540554);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540555, (int)-1, (int)42564);
			@@@var_0_object:AddReply((int)540794, (int)-1, (int)42843);
			return 0;
		}
		var_3_string = true;
		var_76_bool = 0;
		func_4951(var_76_bool);
		if(var_76_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x104c";
	
}


task_18_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_int)
{
	var_48_bool = var_46_int == (int)10;
	if(var_48_bool != 0) {
		func_4278();
		var_50_bool = 0;
		var_50_bool = 0;
		var_51_bool = 0;
		func_4492(var_51_bool);
		if(var_51_bool != 0) {
			var_54_bool = 0;
			func_4247(var_54_bool);
			if(var_54_bool != 0) {
				var_50_bool = 1;
			}
		}
		if(var_50_bool != 0) {
			var_71_bool = 0;
			func_4227(var_71_bool);
			if(var_71_bool != 0) {
				var_90_bool = 0; var_91_object = Obj();
				func_4775(Obj());
				var_92_object = var_91_object;
				func_4642(var_90_bool, var_91_object);
			}
		} else {
			func_4242(var_46_int);
			func_4269();
		}
	}
	return 0;
	
}


task_18_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	func_4460();
	func_4278();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_18_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	StopGroup0();
	func_4278();
	var_47_string = "";
	func_4722("Neutral");
	func_4269();
	return 0;
}


task_18_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_bool)
{
	var_47_bool = var_46_bool;
	if(var_47_bool != 0) {
		func_4269();
	} else {
		var_53_string = "";
		func_4722("Neutral");
	}
	return 0;
	
}


task_18_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_object)
{
	var_47_bool = 0; var_48_bool = 0;
	IsOverrideActive(var_48_bool);
	var_49_bool = var_48_bool == 0; //@nz
	if(var_49_bool != 0) {
		EventDisable(0);
		func_4460();
		var_50_bool = 0; var_51_object = Obj();
		var_46_object = var_51_object;
		func_4483(var_50_bool, var_51_object);
		EventEnable(0);
		var_64_object = Obj();
		var_46_object = var_64_object;
		func_5754(var_64_object);
		var_966_string = "";
		func_4722("Neutral");
		func_4278();
		func_4269();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	var_46_bool = 0;
	func_4492(var_46_bool);
	var_49_bool = var_46_bool == 0; //@nz
	if(var_49_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_4222:
	func_4389();
	goto Label_4222;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_424_int, var_425_object)
{
	var_427_object = Obj(); var_428_bool = 0; var_429_int = 0; var_430_bool = 0; var_431_object = Obj(); var_432_bool = 0; var_433_int = 0; var_434_bool = 0;
	var_0_object = var_425_object;
	var_435_bool = 0; var_436_object = Obj(); var_437_float = 0;
	var_425_object = var_436_object;
	func_4497(var_435_bool, var_436_object, (float)130.0);
	var_438_bool = var_435_bool == 0; //@nz
	if(var_438_bool != 0) {
		var_424_int = -2;
		return 8;
	}
	CreateDialog(var_431_object);
	var_439_int = 0;
	func_4945(var_439_int);
	@@var_431_object:SetNPCName(var_439_int);
	var_440_int = 0;
	func_4943(var_440_int);
	@@var_431_object:SetNPCDescription(var_440_int);
	var_441_string = "";
	func_4947(var_441_string);
	@@var_431_object:SetPhoto(var_441_string);
	var_442_string = "";
	func_4949(var_442_string);
	@@var_431_object:SetPhoto2(var_442_string);
	var_443_int = 0;
	func_5737(var_443_int);
	@@var_431_object:SetPlayerName(var_443_int);
	IsOverrideActive(var_432_bool);
	var_444_bool = var_432_bool;
	if(var_444_bool != 0) {
		var_424_int = -2;
		return 8;
	}
	DoDialog(var_431_object);
	var_445_bool = 0; var_446_object = Obj();
	func_4775(Obj());
	var_447_object = var_446_object;
	func_4584(var_445_bool, var_446_object);
	var_448_object = Obj(); var_449_object = Obj();
	var_425_object = var_448_object;
	var_431_object = var_449_object;
	TaskCall(1);
	func_81(var_450_object, var_451_object, var_452_string, var_453_bool, var_448_object, var_449_object);
	TaskReturn();
	@@var_431_object:IsDialogEnd(var_434_bool);
	
Label_63:
	var_494_bool = var_434_bool == 0; //@nz
	if(var_494_bool != 0) {
		sync();
		@@var_431_object:IsDialogEnd(var_434_bool);
		goto Label_63;
	}
	var_425_object = Obj();
	func_4566();
	StopDialog(var_431_object);
	@@var_431_object:GetReturnValue((int)-1);
	var_433_int = var_424_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_512(var_0_object, var_498_int, var_499_object)
{
	var_501_object = Obj(); var_502_bool = 0; var_503_int = 0; var_504_bool = 0; var_505_object = Obj(); var_506_bool = 0; var_507_int = 0; var_508_bool = 0;
	var_0_object = var_499_object;
	var_509_bool = 0; var_510_object = Obj(); var_511_float = 0;
	var_499_object = var_510_object;
	func_4497(var_509_bool, var_510_object, (float)130.0);
	var_512_bool = var_509_bool == 0; //@nz
	if(var_512_bool != 0) {
		var_498_int = -2;
		return 8;
	}
	CreateDialog(var_505_object);
	var_513_int = 0;
	func_4945(var_513_int);
	@@var_505_object:SetNPCName(var_513_int);
	var_514_int = 0;
	func_4943(var_514_int);
	@@var_505_object:SetNPCDescription(var_514_int);
	var_515_string = "";
	func_4947(var_515_string);
	@@var_505_object:SetPhoto(var_515_string);
	var_516_string = "";
	func_4949(var_516_string);
	@@var_505_object:SetPhoto2(var_516_string);
	var_517_int = 0;
	func_5737(var_517_int);
	@@var_505_object:SetPlayerName(var_517_int);
	IsOverrideActive(var_506_bool);
	var_518_bool = var_506_bool;
	if(var_518_bool != 0) {
		var_498_int = -2;
		return 8;
	}
	DoDialog(var_505_object);
	var_519_bool = 0; var_520_object = Obj();
	func_4775(Obj());
	var_521_object = var_520_object;
	func_4584(var_519_bool, var_520_object);
	var_522_object = Obj(); var_523_object = Obj();
	var_499_object = var_522_object;
	var_505_object = var_523_object;
	TaskCall(3);
	func_593(var_524_object, var_525_object, var_526_string, var_527_bool, var_522_object, var_523_object);
	TaskReturn();
	@@var_505_object:IsDialogEnd(var_508_bool);
	
Label_575:
	var_579_bool = var_508_bool == 0; //@nz
	if(var_579_bool != 0) {
		sync();
		@@var_505_object:IsDialogEnd(var_508_bool);
		goto Label_575;
	}
	var_499_object = Obj();
	func_4566();
	StopDialog(var_505_object);
	@@var_505_object:GetReturnValue((int)-1);
	var_507_int = var_498_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5378(var_829_bool)
{
	var_831_int = 0; var_832_string = "";
	func_4791(var_831_int, "oob11Starshina1");
	var_834_bool = var_831_int == (int)0;
	if(var_834_bool != 0) {
		var_829_bool = 1;
		return 0;
	}
	var_829_bool = 0;
	return 0;
}


func_5123()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_4868(var_87_bool, var_88_string, var_89_string)
{
	var_90_object = Obj(); var_91_object = Obj();
	FindActor(var_91_object, var_88_string);
	var_92_bool = var_91_object == 0; //@ne
	if(var_92_bool != 0) {
		var_87_bool = 0;
		return 2;
	}
	Trigger(var_91_object, var_89_string);
	var_87_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1800(var_0_object, var_680_int, var_681_object)
{
	var_683_object = Obj(); var_684_bool = 0; var_685_int = 0; var_686_bool = 0; var_687_object = Obj(); var_688_bool = 0; var_689_int = 0; var_690_bool = 0;
	var_0_object = var_681_object;
	var_691_bool = 0; var_692_object = Obj(); var_693_float = 0;
	var_681_object = var_692_object;
	func_4497(var_691_bool, var_692_object, (float)130.0);
	var_694_bool = var_691_bool == 0; //@nz
	if(var_694_bool != 0) {
		var_680_int = -2;
		return 8;
	}
	CreateDialog(var_687_object);
	var_695_int = 0;
	func_4945(var_695_int);
	@@var_687_object:SetNPCName(var_695_int);
	var_696_int = 0;
	func_4943(var_696_int);
	@@var_687_object:SetNPCDescription(var_696_int);
	var_697_string = "";
	func_4947(var_697_string);
	@@var_687_object:SetPhoto(var_697_string);
	var_698_string = "";
	func_4949(var_698_string);
	@@var_687_object:SetPhoto2(var_698_string);
	var_699_int = 0;
	func_5737(var_699_int);
	@@var_687_object:SetPlayerName(var_699_int);
	IsOverrideActive(var_688_bool);
	var_700_bool = var_688_bool;
	if(var_700_bool != 0) {
		var_680_int = -2;
		return 8;
	}
	DoDialog(var_687_object);
	var_701_bool = 0; var_702_object = Obj();
	func_4775(Obj());
	var_703_object = var_702_object;
	func_4584(var_701_bool, var_702_object);
	var_704_object = Obj(); var_705_object = Obj();
	var_681_object = var_704_object;
	var_687_object = var_705_object;
	TaskCall(7);
	func_1881(var_706_object, var_707_object, var_708_string, var_709_bool, var_704_object, var_705_object);
	TaskReturn();
	@@var_687_object:IsDialogEnd(var_690_bool);
	
Label_1863:
	var_794_bool = var_690_bool == 0; //@nz
	if(var_794_bool != 0) {
		sync();
		@@var_687_object:IsDialogEnd(var_690_bool);
		goto Label_1863;
	}
	var_681_object = Obj();
	func_4566();
	StopDialog(var_687_object);
	@@var_687_object:GetReturnValue((int)-1);
	var_689_int = var_680_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5129()
{
	var_97_int = 0; var_98_string = "";
	func_4791(var_97_int, "B_Mission3");
	var_102_bool = var_97_int == (int)0;
	if(var_102_bool != 0) {
		SetVariable("B_Mission3", (int)1);
		func_5473();
		var_113_bool = 0; var_114_int = 0;
		func_5670(var_113_bool, (int)562);
		var_121_bool = 0; var_122_int = 0;
		func_5670(var_121_bool, (int)563);
	}
	return 0;
}


func_5642(var_61_bool, var_62_object, var_63_int)
{
	var_64_object = Obj(); var_65_object = Obj(); var_66_int = 0; var_67_object = Obj(); var_68_object = Obj(); var_69_int = 0;
	func_5629(Obj());
	var_70_object = var_67_object;
	@@var_67_object:Find(var_63_int, var_68_object);
	var_75_bool = var_68_object == 0; //@nz
	if(var_75_bool != 0) {
		var_77_int = "Can't find diary parent with id: " + var_63_int;
		Trace(var_77_int);
		var_61_bool = 0;
		return 6;
	}
	@@var_68_object:AddChild(var_62_object);
	SendWorldWndMessage((int)7);
	@@var_62_object:GetCategory(var_69_int);
	SetDiarySection(var_69_int);
	var_61_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_5390(var_887_bool)
{
	var_889_int = 0; var_890_string = "";
	func_4791(var_889_int, "b11q01");
	var_892_bool = var_889_int == (int)0;
	if(var_892_bool != 0) {
		var_887_bool = 1;
		return 0;
	}
	var_887_bool = 0;
	return 0;
}


func_4880(var_69_float)
{
	var_70_float = 0; var_71_float = 0;
	GetGameTime(var_71_float);
	var_71_float = var_69_float;
	return 2;
}


func_3604(var_0_object, var_307_int, var_308_object)
{
	var_310_object = Obj(); var_311_bool = 0; var_312_int = 0; var_313_bool = 0; var_314_object = Obj(); var_315_bool = 0; var_316_int = 0; var_317_bool = 0;
	var_0_object = var_308_object;
	var_318_bool = 0; var_319_object = Obj(); var_320_float = 0;
	var_308_object = var_319_object;
	func_4497(var_318_bool, var_319_object, (float)130.0);
	var_321_bool = var_318_bool == 0; //@nz
	if(var_321_bool != 0) {
		var_307_int = -2;
		return 8;
	}
	CreateDialog(var_314_object);
	var_322_int = 0;
	func_4945(var_322_int);
	@@var_314_object:SetNPCName(var_322_int);
	var_323_int = 0;
	func_4943(var_323_int);
	@@var_314_object:SetNPCDescription(var_323_int);
	var_324_string = "";
	func_4947(var_324_string);
	@@var_314_object:SetPhoto(var_324_string);
	var_325_string = "";
	func_4949(var_325_string);
	@@var_314_object:SetPhoto2(var_325_string);
	var_326_int = 0;
	func_5737(var_326_int);
	@@var_314_object:SetPlayerName(var_326_int);
	IsOverrideActive(var_315_bool);
	var_327_bool = var_315_bool;
	if(var_327_bool != 0) {
		var_307_int = -2;
		return 8;
	}
	DoDialog(var_314_object);
	var_328_bool = 0; var_329_object = Obj();
	func_4775(Obj());
	var_330_object = var_329_object;
	func_4584(var_328_bool, var_329_object);
	var_331_object = Obj(); var_332_object = Obj();
	var_308_object = var_331_object;
	var_314_object = var_332_object;
	TaskCall(13);
	func_3685(var_333_object, var_334_object, var_335_string, var_336_bool, var_331_object, var_332_object);
	TaskReturn();
	@@var_314_object:IsDialogEnd(var_317_bool);
	
Label_3667:
	var_361_bool = var_317_bool == 0; //@nz
	if(var_361_bool != 0) {
		sync();
		@@var_314_object:IsDialogEnd(var_317_bool);
		goto Label_3667;
	}
	var_308_object = Obj();
	func_4566();
	StopDialog(var_314_object);
	@@var_314_object:GetReturnValue((int)-1);
	var_316_int = var_307_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4885(var_207_int)
{
	var_208_float = 0; var_209_float = 0;
	GetGameTime(var_209_float);
	var_211_int = 0;
	var_211_int = var_209_float / (int)24;
	var_207_int = (int)1 + var_211_int;
	return 2;
}


func_2583(var_0_object, var_798_int, var_799_object)
{
	var_801_object = Obj(); var_802_bool = 0; var_803_int = 0; var_804_bool = 0; var_805_object = Obj(); var_806_bool = 0; var_807_int = 0; var_808_bool = 0;
	var_0_object = var_799_object;
	var_809_bool = 0; var_810_object = Obj(); var_811_float = 0;
	var_799_object = var_810_object;
	func_4497(var_809_bool, var_810_object, (float)130.0);
	var_812_bool = var_809_bool == 0; //@nz
	if(var_812_bool != 0) {
		var_798_int = -2;
		return 8;
	}
	CreateDialog(var_805_object);
	var_813_int = 0;
	func_4945(var_813_int);
	@@var_805_object:SetNPCName(var_813_int);
	var_814_int = 0;
	func_4943(var_814_int);
	@@var_805_object:SetNPCDescription(var_814_int);
	var_815_string = "";
	func_4947(var_815_string);
	@@var_805_object:SetPhoto(var_815_string);
	var_816_string = "";
	func_4949(var_816_string);
	@@var_805_object:SetPhoto2(var_816_string);
	var_817_int = 0;
	func_5737(var_817_int);
	@@var_805_object:SetPlayerName(var_817_int);
	IsOverrideActive(var_806_bool);
	var_818_bool = var_806_bool;
	if(var_818_bool != 0) {
		var_798_int = -2;
		return 8;
	}
	DoDialog(var_805_object);
	var_819_bool = 0; var_820_object = Obj();
	func_4775(Obj());
	var_821_object = var_820_object;
	func_4584(var_819_bool, var_820_object);
	var_822_object = Obj(); var_823_object = Obj();
	var_799_object = var_822_object;
	var_805_object = var_823_object;
	TaskCall(9);
	func_2664(var_824_object, var_825_object, var_826_string, var_827_bool, var_822_object, var_823_object);
	TaskReturn();
	@@var_805_object:IsDialogEnd(var_808_bool);
	
Label_2646:
	var_908_bool = var_808_bool == 0; //@nz
	if(var_908_bool != 0) {
		sync();
		@@var_805_object:IsDialogEnd(var_808_bool);
		goto Label_2646;
	}
	var_799_object = Obj();
	func_4566();
	StopDialog(var_805_object);
	@@var_805_object:GetReturnValue((int)-1);
	var_807_int = var_798_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5402(var_896_bool)
{
	var_898_int = 0; var_899_string = "";
	func_4791(var_898_int, "b11q01KnowWhoKilled");
	var_901_bool = var_898_int == (int)1;
	if(var_901_bool != 0) {
		var_896_bool = 1;
		return 0;
	}
	var_896_bool = 0;
	return 0;
}


func_4894(var_421_bool, var_422_int)
{
	var_423_int = 0;
	func_4885(var_423_int);
	var_421_bool = var_423_int == var_422_int;
	return 0;
}


func_5153()
{
	var_174_int = 0; var_175_string = "";
	func_4791(var_174_int, "B_Mission4");
	var_177_bool = var_174_int == (int)0;
	if(var_177_bool != 0) {
		SetVariable("B_Mission4", (int)1);
		func_5486();
		var_188_bool = 0; var_189_int = 0;
		func_5670(var_188_bool, (int)562);
		var_196_bool = 0; var_197_int = 0;
		func_5670(var_196_bool, (int)563);
		var_198_bool = 0; var_199_int = 0;
		func_5670(var_198_bool, (int)564);
	}
	return 0;
}


func_4642(var_163_bool, var_164_object)
{
	var_165_string = ""; var_166_int = 0; var_167_bool = 0; var_168_int = 0; var_169_string = ""; var_170_string = ""; var_171_int = 0; var_172_bool = 0; var_173_int = 0; var_174_string = "";
	var_170_string = "c";
	var_171_int = 0;
	
Label_4645:
	if((int)1 != 0) {
		var_177_int = var_171_int + (int)1;
		var_178_int = var_170_string + var_177_int;
		@@var_164_object:HasProperty(var_178_int, var_172_bool);
		var_179_bool = var_172_bool == 0; //@nz
		if(var_179_bool != 0) {
		} else {
			var_171_int = var_171_int + (int)1;
			goto Label_4645;
		}
	}
	var_180_bool = var_171_int == 0; //@nz
	if(var_180_bool != 0) {
		var_163_bool = 0;
		return 10;
	}
	var_173_int = 0;
	var_182_bool = var_171_int > (int)1;
	if(var_182_bool != 0) {
		irand(var_173_int, var_171_int);
	}
	var_184_int = var_173_int + (int)1;
	var_185_int = var_170_string + var_184_int;
	@@var_164_object:GetProperty(var_185_int, var_174_string);
	var_186_bool = 0; var_187_string = "";
	var_174_string = var_187_string;
	func_4753(var_186_bool, var_187_string);
	var_186_bool = var_163_bool;
	return 10;
	
}


func_1316(var_2_object, var_624_string)
{
	var_625_bool = 0;
	func_4951(var_625_bool);
	var_626_bool = var_625_bool == 0; //@nz
	if(var_626_bool != 0) {
		return 0;
	}
	var_627_bool = var_624_string == var_2_object;
	if(var_627_bool != 0) {
		return 0;
	}
	var_628_string = ""; var_629_bool = 0;
	var_624_string = var_628_string;
	var_631_bool = var_624_string == "";
	if(var_631_bool != 0) {
		var_629_bool = 0;
	} else {
		var_629_bool = 1;
	}
	func_4738(var_628_string, var_629_bool);
	var_2_object = var_624_string;
	return 0;
	
}


func_4389()
{
	var_50_int = 0; var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_int = 0; var_55_bool = 0; var_56_int = 0; var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_int = 0; var_61_bool = 0;
	WaitForAnimEnd();
	var_62_bool = 0;
	func_4492(var_62_bool);
	var_63_bool = var_62_bool == 0; //@nz
	if(var_63_bool != 0) {
		return 12;
	}
	func_4926((int)0);
	var_64_int = var_56_int;
	var_57_int = 0;
	
Label_4403:
	var_77_bool = 0;
	var_77_bool = 0;
	var_79_bool = var_57_int < (int)5;
	if(var_79_bool != 0) {
		var_80_bool = 0;
		func_4492(var_80_bool);
		if(var_80_bool != 0) {
			var_77_bool = 1;
		}
	}
	if(var_77_bool != 0) {
		var_81_bool = var_56_int == 0; //@nz
		if(var_81_bool != 0) {
			Sleep((int)3, var_58_bool);
			var_83_bool = var_58_bool == 0; //@nz
			if(var_83_bool != 0) {
			} else {
		} else {
				irand(var_59_int, var_56_int);
				irand(var_60_int, (int)5);
				var_89_bool = var_60_int != (int)0;
				if(var_89_bool != 0) {
					var_59_int = 0;
				}
				var_91_string = ""; var_92_int = 0;
				var_59_int = var_92_int;
				func_4919(var_91_string, var_92_int);
				PlayAnimation("all", var_91_string);
				WaitForAnimEnd(var_61_bool);
				var_93_bool = var_61_bool == 0; //@nz
				if(var_93_bool == 0) goto Label_4444;
				goto Label_4455;
		}
		Label_4444:
			var_84_bool = 0;
			func_4458(var_84_bool);
			var_85_bool = var_84_bool == 0; //@nz
			if(var_85_bool != 0) {
				goto Label_4455;
			}
			ResetAAS();
			var_57_int = var_57_int + (int)1;
			goto Label_4403;

		}
	}
Label_4455:
	ResetAAS();
	return 12;
	
}


func_5670(var_188_bool, var_189_int)
{
	var_190_object = Obj(); var_191_object = Obj(); var_192_object = Obj(); var_193_object = Obj();
	func_5629(Obj());
	var_194_object = var_192_object;
	@@var_192_object:Find(var_189_int, var_193_object);
	var_195_bool = var_193_object == 0; //@nz
	if(var_195_bool != 0) {
		var_188_bool = 0;
		return 4;
	}
	@@var_193_object:Remove();
	var_188_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5414(var_868_bool)
{
	var_870_int = 0; var_871_string = "";
	func_4791(var_870_int, "b11q01");
	var_873_bool = var_870_int == (int)2;
	if(var_873_bool != 0) {
		var_868_bool = 1;
		return 0;
	}
	var_868_bool = 0;
	return 0;
}


func_4900(var_65_bool, var_66_int)
{
	var_67_float = 0; var_68_int = 0; var_69_int = 0; var_70_float = 0; var_71_int = 0; var_72_int = 0;
	GetGameTime(var_70_float);
	var_74_int = 0;
	var_74_int = var_70_float / (int)24;
	var_71_int = (int)1 + var_74_int;
	var_76_bool = var_71_int != var_66_int;
	if(var_76_bool != 0) {
		var_65_bool = 0;
		return 6;
	}
	var_77_int = 0;
	var_70_float = var_77_int;
	var_72_int = var_77_int % (int)24;
	var_65_bool = var_72_int < (int)7;
	return 6;
}


func_3888(var_0_object, var_1_object, var_2_object, var_3_string, var_389_object, var_390_object)
{
	var_0_object = var_390_object;
	var_1_object = var_389_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_396_string = "";
		func_3946(var_390_object, "Neutral");
		@@@var_0_object:SetMessage((int)529938);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)529939, (int)-1, (int)31322);
		@@@var_0_object:AddReply((int)529940, (int)-1, (int)31323);
		goto Label_3916;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xf34";
	}
Label_3916:
	var_411_bool = 0;
	func_4951(var_411_bool);
	if(var_411_bool != 0) {

	Label_3920:
		lshWaitForAnimEnd();
		var_412_string = var_3_string;
		if(var_412_string != 0) {
		} else {
			var_413_string = "";
			var_413_string = var_2_object;
			func_4722(var_413_string);
			goto Label_3920;
	}
		PlayAnimation("all", "idle");

	Label_3935:
		WaitForAnimEnd();
		var_416_string = var_3_string;
		if(var_416_string != 0) {
			goto Label_3945;
		}
		PlayAnimation("all", "idle");
		goto Label_3935;
	}
	goto Label_3945;
	
Label_3945:
	return 0;
	
}


func_5426(var_782_bool)
{
	var_784_int = 0; var_785_string = "";
	func_4791(var_784_int, "b10q01");
	var_787_bool = var_784_int == (int)2;
	if(var_787_bool != 0) {
		var_782_bool = 1;
		return 0;
	}
	var_782_bool = 0;
	return 0;
}


func_4149(var_2_object, var_941_string)
{
	var_942_bool = 0;
	func_4951(var_942_bool);
	var_943_bool = var_942_bool == 0; //@nz
	if(var_943_bool != 0) {
		return 0;
	}
	var_944_bool = var_941_string == var_2_object;
	if(var_944_bool != 0) {
		return 0;
	}
	var_945_string = ""; var_946_bool = 0;
	var_941_string = var_945_string;
	var_948_bool = var_941_string == "";
	if(var_948_bool != 0) {
		var_946_bool = 0;
	} else {
		var_946_bool = 1;
	}
	func_4738(var_945_string, var_946_bool);
	var_2_object = var_941_string;
	return 0;
	
}


func_5687(var_110_object)
{
	var_111_object = Obj(); var_112_object = Obj(); var_113_object = Obj(); var_114_object = Obj();
	GetMainOutdoorScene(var_113_object);
	var_115_bool = var_113_object == 0; //@ne
	if(var_115_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_114_object = 0;
		var_114_object = var_110_object;
		return 4;
	}
	@@var_113_object:GetMap(var_114_object);
	var_114_object = var_110_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4919(var_70_string, var_71_int)
{
	var_72_string = ""; var_73_string = "";
	var_74_int = var_71_int;
	if(var_74_int != 0) {
		"idle" = "idle" + var_71_int;
	}
	var_73_string = var_70_string;
	return 2;
}


func_5181(var_103_object)
{
	var_104_object = Obj(); var_105_string = ""; var_106_float = 0;
	func_5687(Obj());
	var_107_object = var_104_object;
	func_5704(var_104_object, "pt_map_kurgan", (float)2);
	var_127_object = Obj();
	func_5687(var_127_object);
	@@var_103_object:ShowMap(var_127_object);
	return 0;
}


func_5438(var_564_bool, var_565_object)
{
	var_566_bool = 0; var_567_object = Obj(); var_568_string = "";
	var_565_object = var_567_object;
	func_4861(var_566_bool, var_567_object, "b8q01_bone");
	if(var_566_bool != 0) {
		var_564_bool = 1;
		return 0;
	}
	var_564_bool = 0;
	return 0;
}


func_4926(var_64_int)
{
	var_65_int = 0; var_66_bool = 0; var_67_int = 0; var_68_bool = 0;
	var_67_int = 0;
	
Label_4928:
	var_70_string = ""; var_71_int = 0;
	var_67_int = var_71_int;
	func_4919(var_70_string, var_71_int);
	HasAnimation(var_68_bool, "all", var_70_string);
	var_75_bool = var_68_bool == 0; //@nz
	if(var_75_bool != 0) {
	} else {
		var_67_int = var_67_int + (int)1;
		goto Label_4928;
	}
	var_67_int = var_64_int;
	return 4;
	
}


func_4679(var_194_bool, var_195_object)
{
	var_196_string = ""; var_197_int = 0; var_198_bool = 0; var_199_int = 0; var_200_string = ""; var_201_string = ""; var_202_int = 0; var_203_bool = 0; var_204_int = 0; var_205_string = "";
	var_207_int = 0;
	func_4885(var_207_int);
	var_213_int = "d" + var_207_int;
	var_201_string = var_213_int + "m";
	var_202_int = 0;
	
Label_4688:
	if((int)1 != 0) {
		var_217_int = var_202_int + (int)1;
		var_218_int = var_201_string + var_217_int;
		@@var_195_object:HasProperty(var_218_int, var_203_bool);
		var_219_bool = var_203_bool == 0; //@nz
		if(var_219_bool != 0) {
		} else {
			var_202_int = var_202_int + (int)1;
			goto Label_4688;
		}
	}
	var_220_bool = var_202_int == 0; //@nz
	if(var_220_bool != 0) {
		var_194_bool = 0;
		return 10;
	}
	var_204_int = 0;
	var_222_bool = var_202_int > (int)1;
	if(var_222_bool != 0) {
		irand(var_204_int, var_202_int);
	}
	var_224_int = var_204_int + (int)1;
	var_225_int = var_201_string + var_224_int;
	@@var_195_object:GetProperty(var_225_int, var_205_string);
	var_226_bool = 0; var_227_string = "";
	var_205_string = var_227_string;
	func_4753(var_226_bool, var_227_string);
	var_226_bool = var_194_bool;
	return 10;
	
}


func_5704(var_107_object, var_108_string, var_109_float)
{
	var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0); var_119_object = Obj(); var_120_bool = 0; var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0); var_123_object = Obj(); var_124_bool = 0;
	GetMainOutdoorScene(var_123_object);
	var_125_bool = var_123_object == 0; //@ne
	if(var_125_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_123_object:GetLocator(var_108_string, var_124_bool, var_121_cvector, var_122_cvector);
	var_127_bool = var_124_bool == 0; //@nz
	if(var_127_bool != 0) {
		var_129_int = "Warning: outdoor scene locator " + var_108_string;
		var_131_int = var_129_int + " doesnt exist";
		Trace(var_131_int);
	}
	@@var_123_object:GetMap(var_107_object);
	var_132_bool = var_107_object == 0; //@ne
	if(var_132_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_134_float = GetByIndex(var_121_cvector, 0);
	var_135_float = GetByIndex(var_121_cvector, 2);
	@@var_107_object:SetMapParams(var_134_float, var_135_float, var_109_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_5449(var_851_bool)
{
	var_853_int = 0; var_854_string = "";
	func_4791(var_853_int, "b10q03");
	var_856_bool = var_853_int == (int)1000;
	if(var_856_bool != 0) {
		var_851_bool = 1;
		return 0;
	}
	var_851_bool = 0;
	return 0;
}


func_3401(var_0_object, var_80_int, var_81_object)
{
	var_83_object = Obj(); var_84_bool = 0; var_85_int = 0; var_86_bool = 0; var_87_object = Obj(); var_88_bool = 0; var_89_int = 0; var_90_bool = 0;
	var_0_object = var_81_object;
	var_91_bool = 0; var_92_object = Obj(); var_93_float = 0;
	var_81_object = var_92_object;
	func_4497(var_91_bool, var_92_object, (float)130.0);
	var_138_bool = var_91_bool == 0; //@nz
	if(var_138_bool != 0) {
		var_80_int = -2;
		return 8;
	}
	CreateDialog(var_87_object);
	var_139_int = 0;
	func_4945(var_139_int);
	@@var_87_object:SetNPCName(var_139_int);
	var_140_int = 0;
	func_4943(var_140_int);
	@@var_87_object:SetNPCDescription(var_140_int);
	var_141_string = "";
	func_4947(var_141_string);
	@@var_87_object:SetPhoto(var_141_string);
	var_142_string = "";
	func_4949(var_142_string);
	@@var_87_object:SetPhoto2(var_142_string);
	var_143_int = 0;
	func_5737(var_143_int);
	@@var_87_object:SetPlayerName(var_143_int);
	IsOverrideActive(var_88_bool);
	var_151_bool = var_88_bool;
	if(var_151_bool != 0) {
		var_80_int = -2;
		return 8;
	}
	DoDialog(var_87_object);
	var_152_bool = 0; var_153_object = Obj();
	func_4775(Obj());
	var_154_object = var_153_object;
	func_4584(var_152_bool, var_153_object);
	var_247_object = Obj(); var_248_object = Obj();
	var_81_object = var_247_object;
	var_87_object = var_248_object;
	TaskCall(11);
	func_3482(var_249_object, var_250_object, var_251_string, var_252_bool, var_247_object, var_248_object);
	TaskReturn();
	@@var_87_object:IsDialogEnd(var_90_bool);
	
Label_3464:
	var_296_bool = var_90_bool == 0; //@nz
	if(var_296_bool != 0) {
		sync();
		@@var_87_object:IsDialogEnd(var_90_bool);
		goto Label_3464;
	}
	var_81_object = Obj();
	func_4566();
	StopDialog(var_87_object);
	@@var_87_object:GetReturnValue((int)-1);
	var_89_int = var_80_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5197()
{
	var_125_int = 0; var_126_string = "";
	func_4791(var_125_int, "map_chertez_state");
	var_128_bool = var_125_int <= (int)3;
	if(var_128_bool != 0) {
		SetVariable("map_chertez_state", (int)3);
		SetVariable("map_chertez_force", (int)1);
	}
	return 0;
}


func_4943(var_140_int)
{
	var_140_int = 515553;
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_448_object, var_449_object)
{
	var_0_object = var_449_object;
	var_1_object = var_448_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_455_bool = 0; var_456_object = Obj();
		var_456_object = var_1_object;
		func_5461(var_456_object);
		if(var_455_bool != 0) {
			var_463_string = "";
			func_164(var_449_object, "Oracle");
			@@@var_0_object:SetMessage((int)521017);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528565, (int)29962, (int)29961);
			@@@var_0_object:AddReply((int)528573, (int)29966, (int)29969);
		} else {
				var_486_string = "";
				func_164(var_449_object, "Neutral");
				@@@var_0_object:SetMessage((int)521041);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)528593, (int)29994, (int)29993);
				@@@var_0_object:AddReply((int)521042, (int)-1, (int)22238);
				goto Label_134;
		}
	}
Label_134:
	var_478_bool = 0;
	func_4951(var_478_bool);
	if(var_478_bool != 0) {

	Label_138:
		lshWaitForAnimEnd();
		var_479_string = var_3_string;
		if(var_479_string != 0) {
		} else {
			var_480_string = "";
			var_480_string = var_2_object;
			func_4722(var_480_string);
			goto Label_138;
	}
		PlayAnimation("all", "idle");

	Label_153:
		WaitForAnimEnd();
		var_483_string = var_3_string;
		if(var_483_string != 0) {
			goto Label_163;
		}
		PlayAnimation("all", "idle");
		goto Label_153;

	}
	goto Label_163;
	
Label_163:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_593(var_0_object, var_1_object, var_2_object, var_3_string, var_522_object, var_523_object)
{
	var_0_object = var_523_object;
	var_1_object = var_522_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_529_bool = 0; var_530_object = Obj();
		var_530_object = var_1_object;
		func_5259(var_530_object);
		if(var_529_bool != 0) {
			var_535_string = "";
			func_685(var_523_object, "Refusal");
			@@@var_0_object:SetMessage((int)521418);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521419, (int)24983, (int)22597);
		} else {
				var_555_string = "";
				func_685(var_523_object, "Neutral");
				@@@var_0_object:SetMessage((int)521423);
				@@@var_0_object:ClearReplies();
				var_557_bool = 0;
				var_557_bool = 0;
				var_558_bool = 0; var_559_object = Obj();
				var_559_object = var_1_object;
				func_5247(var_559_object);
				if(var_558_bool != 0) {
					var_564_bool = 0; var_565_object = Obj();
					var_565_object = var_1_object;
					func_5438(var_564_bool, var_565_object);
					if(var_564_bool != 0) {
						var_557_bool = 1;
					}
				}
				if(var_557_bool != 0) {
					@@@var_0_object:AddReply((int)521425, (int)22604, (int)22603);
				}
				@@@var_0_object:AddReply((int)521424, (int)-1, (int)22602);
				goto Label_655;
		}
	}
Label_655:
	var_547_bool = 0;
	func_4951(var_547_bool);
	if(var_547_bool != 0) {

	Label_659:
		lshWaitForAnimEnd();
		var_548_string = var_3_string;
		if(var_548_string != 0) {
		} else {
			var_549_string = "";
			var_549_string = var_2_object;
			func_4722(var_549_string);
			goto Label_659;
	}
		PlayAnimation("all", "idle");

	Label_674:
		WaitForAnimEnd();
		var_552_string = var_3_string;
		if(var_552_string != 0) {
			goto Label_684;
		}
		PlayAnimation("all", "idle");
		goto Label_674;

	}
	goto Label_684;
	
Label_684:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x255";


func_4945(var_139_int)
{
	var_139_int = 502878;
	return 0;
}


func_4947(var_141_string)
{
	var_141_string = "ui/NPC_Starshina.png";
	return 0;
}


func_4949(var_142_string)
{
	var_142_string = "ui/NPC_Starshina_b.png";
	return 0;
}


func_5461(var_455_bool)
{
	var_457_int = 0; var_458_string = "";
	func_4791(var_457_int, "b7q01");
	var_462_bool = var_457_int == (int)7;
	if(var_462_bool != 0) {
		var_455_bool = 1;
		return 0;
	}
	var_455_bool = 0;
	return 0;
}


func_4951(var_134_bool)
{
	var_134_bool = 1;
	return 0;
}


func_4953()
{
	var_96_string = ""; var_97_bool = 0;
	func_4796("icot_eva_door", (bool)1);
	return 0;
}


func_1881(var_0_object, var_1_object, var_2_object, var_3_string, var_704_object, var_705_object)
{
	var_0_object = var_705_object;
	var_1_object = var_704_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_711_bool = 0;
		var_711_bool = 0;
		var_712_bool = 0; var_713_object = Obj();
		var_713_object = var_1_object;
		func_5319(var_713_object);
		if(var_712_bool != 0) {
			var_718_bool = 0; var_719_object = Obj();
			var_719_object = var_1_object;
			func_5366(var_719_object);
			if(var_718_bool != 0) {
				var_711_bool = 1;
			}
		}
		if(var_711_bool != 0) {
			var_724_object = Obj(); var_725_object = Obj();
			var_724_object = var_1_object;
			var_725_object = var_0_object;
			func_5047();
			var_728_string = "";
			func_2017(var_705_object, "Smile");
			@@@var_0_object:SetMessage((int)521870);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522575, (int)23755, (int)23754);
			@@@var_0_object:AddReply((int)522581, (int)23755, (int)23760);
			@@@var_0_object:AddReply((int)522586, (int)23047, (int)23767);
		} else {
				var_754_string = "";
				func_2017(var_705_object, "Neutral");
				@@@var_0_object:SetMessage((int)521873);
				@@@var_0_object:ClearReplies();
				var_756_bool = 0; var_757_object = Obj();
				var_757_object = var_1_object;
				func_5366(var_757_object);
				if(var_756_bool != 0) {
					@@@var_0_object:AddReply((int)521874, (int)23049, (int)23046);
				}
				var_761_bool = 0; var_762_object = Obj();
				var_762_object = var_1_object;
				func_5343(var_762_object);
				if(var_761_bool != 0) {
					@@@var_0_object:AddReply((int)521886, (int)23059, (int)23058);
				}
				var_775_bool = 0;
				var_775_bool = 0;
				var_776_bool = 0; var_777_object = Obj();
				var_777_object = var_1_object;
				func_5331(var_777_object);
				if(var_776_bool != 0) {
					var_782_bool = 0; var_783_object = Obj();
					var_783_object = var_1_object;
					func_5426(var_783_object);
					if(var_782_bool != 0) {
						var_775_bool = 1;
					}
				}
				if(var_775_bool != 0) {
					@@@var_0_object:AddReply((int)521883, (int)23744, (int)23055);
				}
				@@@var_0_object:AddReply((int)521879, (int)-1, (int)23051);
				goto Label_1987;
		}
	}
Label_1987:
	var_746_bool = 0;
	func_4951(var_746_bool);
	if(var_746_bool != 0) {

	Label_1991:
		lshWaitForAnimEnd();
		var_747_string = var_3_string;
		if(var_747_string != 0) {
		} else {
			var_748_string = "";
			var_748_string = var_2_object;
			func_4722(var_748_string);
			goto Label_1991;
	}
		PlayAnimation("all", "idle");

	Label_2006:
		WaitForAnimEnd();
		var_751_string = var_3_string;
		if(var_751_string != 0) {
			goto Label_2016;
		}
		PlayAnimation("all", "idle");
		goto Label_2006;

	}
	goto Label_2016;
	
Label_2016:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x75d";


func_5214()
{
	var_95_int = 0; var_96_string = "";
	func_4791(var_95_int, "map_chertez_state");
	var_100_bool = var_95_int <= (int)6;
	if(var_100_bool != 0) {
		SetVariable("map_chertez_state", (int)6);
		SetVariable("map_chertez_force", (int)1);
	}
	return 0;
}


func_4960()
{
	SetVariable("b7q01", (int)8);
	func_5551();
	return 0;
}


func_5473()
{
	var_105_object = Obj(); var_106_object = Obj();
	CreateDiaryEntry(var_106_object, (int)564, (int)0, (int)530578);
	var_110_bool = 0; var_111_object = Obj(); var_112_int = 0;
	var_106_object = var_111_object;
	func_5642(var_110_bool, var_111_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3685(var_0_object, var_1_object, var_2_object, var_3_string, var_331_object, var_332_object)
{
	var_0_object = var_332_object;
	var_1_object = var_331_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_338_string = "";
		func_3743(var_332_object, "Neutral");
		@@@var_0_object:SetMessage((int)529934);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)529935, (int)-1, (int)31318);
		@@@var_0_object:AddReply((int)529936, (int)-1, (int)31319);
		goto Label_3713;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xe69";
	}
Label_3713:
	var_353_bool = 0;
	func_4951(var_353_bool);
	if(var_353_bool != 0) {

	Label_3717:
		lshWaitForAnimEnd();
		var_354_string = var_3_string;
		if(var_354_string != 0) {
		} else {
			var_355_string = "";
			var_355_string = var_2_object;
			func_4722(var_355_string);
			goto Label_3717;
	}
		PlayAnimation("all", "idle");

	Label_3732:
		WaitForAnimEnd();
		var_358_string = var_3_string;
		if(var_358_string != 0) {
			goto Label_3742;
		}
		PlayAnimation("all", "idle");
		goto Label_3732;
	}
	goto Label_3742;
	
Label_3742:
	return 0;
	
}


func_1127(var_0_object, var_583_int, var_584_object)
{
	var_586_object = Obj(); var_587_bool = 0; var_588_int = 0; var_589_bool = 0; var_590_object = Obj(); var_591_bool = 0; var_592_int = 0; var_593_bool = 0;
	var_0_object = var_584_object;
	var_594_bool = 0; var_595_object = Obj(); var_596_float = 0;
	var_584_object = var_595_object;
	func_4497(var_594_bool, var_595_object, (float)130.0);
	var_597_bool = var_594_bool == 0; //@nz
	if(var_597_bool != 0) {
		var_583_int = -2;
		return 8;
	}
	CreateDialog(var_590_object);
	var_598_int = 0;
	func_4945(var_598_int);
	@@var_590_object:SetNPCName(var_598_int);
	var_599_int = 0;
	func_4943(var_599_int);
	@@var_590_object:SetNPCDescription(var_599_int);
	var_600_string = "";
	func_4947(var_600_string);
	@@var_590_object:SetPhoto(var_600_string);
	var_601_string = "";
	func_4949(var_601_string);
	@@var_590_object:SetPhoto2(var_601_string);
	var_602_int = 0;
	func_5737(var_602_int);
	@@var_590_object:SetPlayerName(var_602_int);
	IsOverrideActive(var_591_bool);
	var_603_bool = var_591_bool;
	if(var_603_bool != 0) {
		var_583_int = -2;
		return 8;
	}
	DoDialog(var_590_object);
	var_604_bool = 0; var_605_object = Obj();
	func_4775(Obj());
	var_606_object = var_605_object;
	func_4584(var_604_bool, var_605_object);
	var_607_object = Obj(); var_608_object = Obj();
	var_584_object = var_607_object;
	var_590_object = var_608_object;
	TaskCall(5);
	func_1208(var_609_object, var_610_object, var_611_string, var_612_bool, var_607_object, var_608_object);
	TaskReturn();
	@@var_590_object:IsDialogEnd(var_593_bool);
	
Label_1190:
	var_676_bool = var_593_bool == 0; //@nz
	if(var_676_bool != 0) {
		sync();
		@@var_590_object:IsDialogEnd(var_593_bool);
		goto Label_1190;
	}
	var_584_object = Obj();
	func_4566();
	StopDialog(var_590_object);
	@@var_590_object:GetReturnValue((int)-1);
	var_592_int = var_583_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2664(var_0_object, var_1_object, var_2_object, var_3_string, var_822_object, var_823_object)
{
	var_0_object = var_823_object;
	var_1_object = var_822_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_829_bool = 0; var_830_object = Obj();
		var_830_object = var_1_object;
		func_5378(var_830_object);
		if(var_829_bool != 0) {
			var_835_object = Obj(); var_836_object = Obj();
			var_835_object = var_1_object;
			var_836_object = var_0_object;
			func_5093();
			var_839_string = "";
			func_2802(var_823_object, "Neutral");
			@@@var_0_object:SetMessage((int)521993);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521994, (int)23168, (int)23164);
			var_851_bool = 0; var_852_object = Obj();
			var_852_object = var_1_object;
			func_5449(var_852_object);
			if(var_851_bool != 0) {
				@@@var_0_object:AddReply((int)521996, (int)23168, (int)23166);
			}
		} else {
				var_868_bool = 0; var_869_object = Obj();
				var_869_object = var_1_object;
				func_5414(var_869_object);
				if(var_868_bool != 0) {
					var_874_string = "";
					func_2802(var_823_object, "Smile");
					@@@var_0_object:SetMessage((int)522051);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)523621, (int)24861, (int)24860);
					@@@var_0_object:AddReply((int)523612, (int)24851, (int)24849);
					@@@var_0_object:AddReply((int)523613, (int)24851, (int)24850);
					goto Label_2772;
				}
				var_885_string = "";
				func_2802(var_823_object, "Neutral");
				@@@var_0_object:SetMessage((int)521997);
				@@@var_0_object:ClearReplies();
				var_887_bool = 0; var_888_object = Obj();
				var_888_object = var_1_object;
				func_5390(var_888_object);
				if(var_887_bool != 0) {
					@@@var_0_object:AddReply((int)522000, (int)24859, (int)23170);
				}
				var_896_bool = 0; var_897_object = Obj();
				var_897_object = var_1_object;
				func_5402(var_897_object);
				if(var_896_bool != 0) {
					@@@var_0_object:AddReply((int)522003, (int)23226, (int)23173);
				}
				@@@var_0_object:AddReply((int)522004, (int)-1, (int)23174);
				goto Label_2772;
		}
	}
Label_2772:
	var_860_bool = 0;
	func_4951(var_860_bool);
	if(var_860_bool != 0) {

	Label_2776:
		lshWaitForAnimEnd();
		var_861_string = var_3_string;
		if(var_861_string != 0) {
		} else {
			var_862_string = "";
			var_862_string = var_2_object;
			func_4722(var_862_string);
			goto Label_2776;
	}
		PlayAnimation("all", "idle");

	Label_2791:
		WaitForAnimEnd();
		var_865_string = var_3_string;
		if(var_865_string != 0) {
			goto Label_2801;
		}
		PlayAnimation("all", "idle");
		goto Label_2791;

	}
	goto Label_2801;
	
Label_2801:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xa6c";


func_5737(var_143_int)
{
	var_144_int = 0; var_145_int = 0;
	GetVariable("branch", var_145_int);
	var_148_bool = var_145_int == (int)0;
	if(var_148_bool != 0) {
		var_143_int = 1;
		return 2;
	EMIT "GOTO 0x1678";
	}
	var_150_bool = var_145_int == (int)1;
	if(var_150_bool != 0) {
		var_143_int = 2;
		return 2;
	}
	var_143_int = 3;
	return 2;
}


func_4969(var_83_object)
{
	Trace("avroks blood is given");
	var_86_object = Obj(); var_87_string = ""; var_88_int = 0;
	var_83_object = var_86_object;
	func_4848(var_86_object, "avroks_blood", (int)1);
	return 0;
}


func_3946(var_2_object, var_396_string)
{
	var_397_bool = 0;
	func_4951(var_397_bool);
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
	func_4738(var_400_string, var_401_bool);
	var_2_object = var_396_string;
	return 0;
	
}


func_4458(var_84_bool)
{
	var_84_bool = 1;
	return 0;
}


func_4460()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_5486()
{
	var_180_object = Obj(); var_181_object = Obj();
	CreateDiaryEntry(var_181_object, (int)565, (int)0, (int)530579);
	var_185_bool = 0; var_186_object = Obj(); var_187_int = 0;
	var_181_object = var_186_object;
	func_5642(var_185_bool, var_186_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5231(var_106_object)
{
	var_107_object = Obj(); var_108_string = ""; var_109_float = 0;
	func_5687(Obj());
	var_110_object = var_107_object;
	func_5704(var_107_object, "pt_map_aglaja", (float)-1);
	var_136_object = Obj();
	func_5687(var_136_object);
	@@var_106_object:ShowMap(var_136_object);
	return 0;
}


func_4465(var_61_float, var_62_object)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0);
	GetPosition(var_66_cvector);
	@@var_62_object:GetPosition(var_67_cvector);
	var_68_cvector = var_67_cvector - var_66_cvector;
	var_61_float = var_68_cvector | var_68_cvector;
	return 6;
}


func_4722(var_280_string)
{
	var_281_bool = 0; var_282_float = 0; var_283_float = 0; var_284_bool = 0; var_285_float = 0; var_286_float = 0;
	lshHasAnimation(var_284_bool, var_280_string);
	var_287_bool = var_284_bool;
	if(var_287_bool != 0) {
		lshGetAnimTimes(var_280_string, var_285_float, var_286_float);
		lshPlayAnimation(var_285_float, var_286_float, (bool)0);
	} else {
		var_290_int = "Can't find lsh animation : " + var_280_string;
		Trace(var_290_int);
	}
	return 6;
	
}


func_4980()
{
	SetVariable("b8q01", (int)5);
	func_5577();
	return 0;
}


func_4473(var_54_bool, var_55_cvector)
{
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_bool = 0;
	GetPosition(var_59_cvector);
	var_60_cvector = var_55_cvector - var_59_cvector;
	var_62_float = GetByIndex(var_60_cvector, 0);
	var_63_float = GetByIndex(var_60_cvector, 2);
	Rotate(var_62_float, var_63_float, var_61_bool);
	var_61_bool = var_54_bool;
	return 6;
}


func_5754(var_64_object)
{
	var_65_bool = 0; var_66_int = 0;
	func_4900(var_65_bool, (int)9);
	if(var_65_bool != 0) {
		var_80_int = 0; var_81_object = Obj();
		var_64_object = var_81_object;
		TaskCall(10);
		func_3401(var_82_object, var_80_int, var_81_object);
		TaskReturn();
		return 0;
	}
	var_305_bool = 0; var_306_int = 0;
	func_4900(var_305_bool, (int)10);
	if(var_305_bool != 0) {
		var_307_int = 0; var_308_object = Obj();
		var_64_object = var_308_object;
		TaskCall(12);
		func_3604(var_309_object, var_307_int, var_308_object);
		TaskReturn();
		return 0;
	}
	var_363_bool = 0; var_364_int = 0;
	func_4900(var_363_bool, (int)11);
	if(var_363_bool != 0) {
		var_365_int = 0; var_366_object = Obj();
		var_64_object = var_366_object;
		TaskCall(14);
		func_3807(var_367_object, var_365_int, var_366_object);
		TaskReturn();
		return 0;
	}
	var_421_bool = 0; var_422_int = 0;
	func_4894(var_421_bool, (int)7);
	if(var_421_bool != 0) {
		var_424_int = 0; var_425_object = Obj();
		var_64_object = var_425_object;
		TaskCall(0);
		func_0(var_426_object, var_424_int, var_425_object);
		TaskReturn();
		return 0;
	}
	var_496_bool = 0; var_497_int = 0;
	func_4894(var_496_bool, (int)8);
	if(var_496_bool != 0) {
		var_498_int = 0; var_499_object = Obj();
		var_64_object = var_499_object;
		TaskCall(2);
		func_512(var_500_object, var_498_int, var_499_object);
		TaskReturn();
		return 0;
	}
	var_581_bool = 0; var_582_int = 0;
	func_4894(var_581_bool, (int)9);
	if(var_581_bool != 0) {
		var_583_int = 0; var_584_object = Obj();
		var_64_object = var_584_object;
		TaskCall(4);
		func_1127(var_585_object, var_583_int, var_584_object);
		TaskReturn();
		return 0;
	}
	var_678_bool = 0; var_679_int = 0;
	func_4894(var_678_bool, (int)10);
	if(var_678_bool != 0) {
		var_680_int = 0; var_681_object = Obj();
		var_64_object = var_681_object;
		TaskCall(6);
		func_1800(var_682_object, var_680_int, var_681_object);
		TaskReturn();
		return 0;
	}
	var_796_bool = 0; var_797_int = 0;
	func_4894(var_796_bool, (int)11);
	if(var_796_bool != 0) {
		var_798_int = 0; var_799_object = Obj();
		var_64_object = var_799_object;
		TaskCall(8);
		func_2583(var_800_object, var_798_int, var_799_object);
		TaskReturn();
		return 0;
	}
	var_910_int = 0; var_911_object = Obj();
	var_64_object = var_911_object;
	TaskCall(16);
	func_4010(var_912_object, var_910_int, var_911_object);
	TaskReturn();
	return 0;
}


func_5499()
{
	var_140_object = Obj(); var_141_object = Obj();
	CreateDiaryEntry(var_141_object, (int)309, (int)1, (int)521960);
	var_145_bool = 0; var_146_object = Obj(); var_147_int = 0;
	var_141_object = var_146_object;
	func_5642(var_145_bool, var_146_object, (int)305);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4989()
{
	SetVariable("b8q01", (int)7);
	SetVariable("b8q01KnowSgustki", (int)1);
	func_5564();
	return 0;
}


func_5247(var_558_bool)
{
	var_560_int = 0; var_561_string = "";
	func_4791(var_560_int, "b8q01");
	var_563_bool = var_560_int == (int)6;
	if(var_563_bool != 0) {
		var_558_bool = 1;
		return 0;
	}
	var_558_bool = 0;
	return 0;
}


func_4738(var_258_string, var_259_bool)
{
	var_262_bool = 0; var_263_float = 0; var_264_float = 0; var_265_bool = 0; var_266_float = 0; var_267_float = 0;
	lshHasAnimation(var_265_bool, var_258_string);
	var_268_bool = var_265_bool;
	if(var_268_bool != 0) {
		lshGetAnimTimes(var_258_string, var_266_float, var_267_float);
		lshPlayAnimation(var_266_float, var_267_float, var_259_bool);
	} else {
		var_270_int = "Can't find lsh animation : " + var_258_string;
		Trace(var_270_int);
	}
	return 6;
	
}


func_4227(var_71_bool)
{
	var_72_object = Obj(); var_73_object = Obj();
	FindActor(var_73_object, "player");
	var_75_bool = var_73_object == 0; //@nz
	if(var_75_bool != 0) {
		var_71_bool = 0;
		return 2;
	}
	var_76_bool = 0; var_77_object = Obj();
	var_73_object = var_77_object;
	func_4483(var_76_bool, var_77_object);
	var_76_bool = var_71_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4483(var_50_bool, var_51_object)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	@@var_51_object:GetPosition(var_53_cvector);
	var_54_bool = 0; var_55_cvector = CVector(0,0,0);
	var_53_cvector = var_55_cvector;
	func_4473(var_54_bool, var_55_cvector);
	var_54_bool = var_50_bool;
	return 2;
}


func_5512()
{
	var_72_object = Obj(); var_73_object = Obj();
	CreateDiaryEntry(var_73_object, (int)307, (int)1, (int)521958);
	var_77_bool = 0; var_78_object = Obj(); var_79_int = 0;
	var_73_object = var_78_object;
	func_5642(var_77_bool, var_78_object, (int)305);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5002(var_52_object)
{
	SetVariable("b9q01", (int)1);
	func_5590();
	func_5616();
	@@var_52_object:ApplyEffect("quest_b9_01_effect.bin");
	var_88_bool = 0; var_89_string = ""; var_90_string = "";
	func_4868(var_88_bool, "quest_b9_01", "remove_danko");
	return 0;
}


func_5259(var_529_bool)
{
	var_531_int = 0; var_532_string = "";
	func_4791(var_531_int, "b8q01");
	var_534_bool = var_531_int == (int)4;
	if(var_534_bool != 0) {
		var_529_bool = 1;
		return 0;
	}
	var_529_bool = 0;
	return 0;
}


func_4492(var_46_bool)
{
	var_47_bool = 0; var_48_bool = 0;
	IsLoaded(var_48_bool);
	var_48_bool = var_46_bool;
	return 2;
}


func_4753(var_186_bool, var_187_string)
{
	var_188_bool = 0; var_189_bool = 0;
	var_190_bool = 0;
	func_4951(var_190_bool);
	if(var_190_bool != 0) {
		lshHasSpeech(var_189_bool, var_187_string);
		var_191_bool = var_189_bool;
		if(var_191_bool != 0) {
			lshPlaySpeech(var_187_string);
			var_186_bool = 1;
			return 2;
		}
	}
	var_186_bool = 0;
	return 2;
}


func_4242(var_0_object)
{
	var_123_float = GetByIndex(var_0_object, 0);
	var_124_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_123_float, var_124_float);
	return 0;
}


func_4497(var_91_bool, var_92_object, var_93_float)
{
	var_94_float = 0; var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_bool = 0; var_102_bool = 0; var_103_float = 0; var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_bool = 0; var_111_bool = 0;
	@@var_92_object:GetPosition(var_104_cvector);
	@@var_92_object:GetEyesHeight(var_103_float);
	var_112_float = GetByIndex(var_104_cvector, 1);
	var_112_float = var_112_float + var_103_float;
	SetByIndex(var_104_cvector, 1) = var_112_float;
	GetPosition(var_105_cvector);
	GetEyesHeight(var_103_float);
	var_113_float = GetByIndex(var_105_cvector, 1);
	var_113_float = var_113_float + var_103_float;
	SetByIndex(var_105_cvector, 1) = var_113_float;
	var_106_cvector = var_104_cvector - var_105_cvector;
	var_114_float = GetByIndex(var_106_cvector, 1);
	SetByIndex(var_106_cvector, 1) = (float)0;
	var_115_int = var_106_cvector | var_106_cvector;
	var_116_float = sqrt(var_115_int);
	var_106_cvector = var_106_cvector / var_116_float;
	var_107_cvector = -var_106_cvector;
	var_117_float = var_106_cvector * var_93_float;
	var_118_cvector = CVector(0,0,0); var_119_cvector = CVector(0,0,0);
	var_119_cvector = var_107_cvector ^ CVector(0.0, 1.0, 0.0);
	func_4781(var_118_cvector, var_119_cvector);
	var_127_float = var_118_cvector * (int)25;
	var_128_int = var_117_float + var_127_float;
	var_108_cvector = var_128_int - CVector(0.0, 10.0, 0.0);
	var_109_cvector = var_105_cvector + var_108_cvector;
	IsOverrideActive(var_110_bool);
	var_130_bool = var_110_bool;
	if(var_130_bool != 0) {
		var_91_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_109_cvector, var_107_cvector, (bool)1);
	var_132_float = GetByIndex(var_108_cvector, 0);
	var_133_float = GetByIndex(var_108_cvector, 2);
	Rotate(var_132_float, var_133_float);
	var_134_bool = 0;
	func_4951(var_134_bool);
	if(var_134_bool != 0) {
	} else {
		HasAnimationTrack(var_111_bool, "head");
		var_136_bool = var_111_bool;
		if(var_136_bool == 0) goto Label_4560;
		LookAsyncCamera("head");
	}
Label_4560:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_91_bool = 1;
	return 18;
	
}


func_5525()
{
	var_56_object = Obj(); var_57_object = Obj();
	CreateDiaryEntry(var_57_object, (int)313, (int)1, (int)522055);
	var_61_bool = 0; var_62_object = Obj(); var_63_int = 0;
	var_57_object = var_62_object;
	func_5642(var_61_bool, var_62_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5271(var_646_bool)
{
	var_648_int = 0; var_649_string = "";
	func_4791(var_648_int, "b9q01");
	var_651_bool = var_648_int == (int)0;
	if(var_651_bool != 0) {
		var_646_bool = 1;
		return 0;
	}
	var_646_bool = 0;
	return 0;
}


func_4247(var_54_bool)
{
	var_55_object = Obj(); var_56_bool = 0; var_57_object = Obj(); var_58_bool = 0;
	FindActor(var_57_object, "player");
	var_60_bool = var_57_object == 0; //@nz
	if(var_60_bool != 0) {
		var_54_bool = 0;
		return 4;
	}
	var_61_float = 0; var_62_object = Obj();
	var_57_object = var_62_object;
	func_4465(var_61_float, var_62_object);
	var_70_bool = var_61_float > (float)90000.0;
	if(var_70_bool != 0) {
		var_54_bool = 0;
		return 4;
	}
	CanSee(var_58_bool, var_57_object);
	var_58_bool = var_54_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_3482(var_0_object, var_1_object, var_2_object, var_3_string, var_247_object, var_248_object)
{
	var_0_object = var_248_object;
	var_1_object = var_247_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_254_string = "";
		func_3540(var_248_object, "Neutral");
		@@@var_0_object:SetMessage((int)529926);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)529927, (int)-1, (int)31310);
		@@@var_0_object:AddReply((int)529928, (int)-1, (int)31311);
		goto Label_3510;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xd9e";
	}
Label_3510:
	var_278_bool = 0;
	func_4951(var_278_bool);
	if(var_278_bool != 0) {

	Label_3514:
		lshWaitForAnimEnd();
		var_279_string = var_3_string;
		if(var_279_string != 0) {
		} else {
			var_280_string = "";
			var_280_string = var_2_object;
			func_4722(var_280_string);
			goto Label_3514;
	}
		PlayAnimation("all", "idle");

	Label_3529:
		WaitForAnimEnd();
		var_293_string = var_3_string;
		if(var_293_string != 0) {
			goto Label_3539;
		}
		PlayAnimation("all", "idle");
		goto Label_3529;
	}
	goto Label_3539;
	
Label_3539:
	return 0;
	
}


func_5022(var_113_object)
{
	func_5603();
	var_123_bool = 0; var_124_string = ""; var_125_string = "";
	func_4868(var_123_bool, "quest_b9_01", "completed");
	Trigger(var_113_object, "b9q01_stop");
	return 0;
}


func_3743(var_2_object, var_338_string)
{
	var_339_bool = 0;
	func_4951(var_339_bool);
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
	func_4738(var_342_string, var_343_bool);
	var_2_object = var_338_string;
	return 0;
	
}


func_4768()
{
	var_49_bool = 0;
	func_4951(var_49_bool);
	if(var_49_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_5629(var_70_object)
{
	var_71_object = Obj(); var_72_object = Obj();
	GetDiaryRoot(var_72_object);
	var_73_bool = var_72_object == 0; //@nz
	if(var_73_bool != 0) {
		Trace("Can't retrieve diary root");
		var_70_object = 0;
		return 2;
	}
	var_72_object = var_70_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5538()
{
	var_79_object = Obj(); var_80_object = Obj();
	CreateDiaryEntry(var_80_object, (int)314, (int)1, (int)522056);
	var_84_bool = 0; var_85_object = Obj(); var_86_int = 0;
	var_80_object = var_85_object;
	func_5642(var_84_bool, var_85_object, (int)313);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5283(var_614_bool)
{
	var_616_int = 0; var_617_string = "";
	func_4791(var_616_int, "oob9Starshina1");
	var_619_bool = var_616_int == (int)0;
	if(var_619_bool != 0) {
		var_614_bool = 1;
		return 0;
	}
	var_614_bool = 0;
	return 0;
}


func_164(var_2_object, var_463_string)
{
	var_464_bool = 0;
	func_4951(var_464_bool);
	var_465_bool = var_464_bool == 0; //@nz
	if(var_465_bool != 0) {
		return 0;
	}
	var_466_bool = var_463_string == var_2_object;
	if(var_466_bool != 0) {
		return 0;
	}
	var_467_string = ""; var_468_bool = 0;
	var_463_string = var_467_string;
	var_470_bool = var_463_string == "";
	if(var_470_bool != 0) {
		var_468_bool = 0;
	} else {
		var_468_bool = 1;
	}
	func_4738(var_467_string, var_468_bool);
	var_2_object = var_463_string;
	return 0;
	
}


func_4775(var_154_object)
{
	var_155_object = Obj(); var_156_object = Obj();
	self(var_156_object);
	var_156_object = var_154_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4010(var_0_object, var_910_int, var_911_object)
{
	var_913_object = Obj(); var_914_bool = 0; var_915_int = 0; var_916_bool = 0; var_917_object = Obj(); var_918_bool = 0; var_919_int = 0; var_920_bool = 0;
	var_0_object = var_911_object;
	var_921_bool = 0; var_922_object = Obj(); var_923_float = 0;
	var_911_object = var_922_object;
	func_4497(var_921_bool, var_922_object, (float)130.0);
	var_924_bool = var_921_bool == 0; //@nz
	if(var_924_bool != 0) {
		var_910_int = -2;
		return 8;
	}
	CreateDialog(var_917_object);
	var_925_int = 0;
	func_4945(var_925_int);
	@@var_917_object:SetNPCName(var_925_int);
	var_926_int = 0;
	func_4943(var_926_int);
	@@var_917_object:SetNPCDescription(var_926_int);
	var_927_string = "";
	func_4947(var_927_string);
	@@var_917_object:SetPhoto(var_927_string);
	var_928_string = "";
	func_4949(var_928_string);
	@@var_917_object:SetPhoto2(var_928_string);
	var_929_int = 0;
	func_5737(var_929_int);
	@@var_917_object:SetPlayerName(var_929_int);
	IsOverrideActive(var_918_bool);
	var_930_bool = var_918_bool;
	if(var_930_bool != 0) {
		var_910_int = -2;
		return 8;
	}
	DoDialog(var_917_object);
	var_931_bool = 0; var_932_object = Obj();
	func_4775(Obj());
	var_933_object = var_932_object;
	func_4584(var_931_bool, var_932_object);
	var_934_object = Obj(); var_935_object = Obj();
	var_911_object = var_934_object;
	var_917_object = var_935_object;
	TaskCall(17);
	func_4091(var_936_object, var_937_object, var_938_string, var_939_bool, var_934_object, var_935_object);
	TaskReturn();
	@@var_917_object:IsDialogEnd(var_920_bool);
	
Label_4073:
	var_964_bool = var_920_bool == 0; //@nz
	if(var_964_bool != 0) {
		sync();
		@@var_917_object:IsDialogEnd(var_920_bool);
		goto Label_4073;
	}
	var_911_object = Obj();
	func_4566();
	StopDialog(var_917_object);
	@@var_917_object:GetReturnValue((int)-1);
	var_919_int = var_910_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5035()
{
	SetVariable("oob9Starshina1", (int)1);
	return 0;
}


func_685(var_2_object, var_535_string)
{
	var_536_bool = 0;
	func_4951(var_536_bool);
	var_537_bool = var_536_bool == 0; //@nz
	if(var_537_bool != 0) {
		return 0;
	}
	var_538_bool = var_535_string == var_2_object;
	if(var_538_bool != 0) {
		return 0;
	}
	var_539_string = ""; var_540_bool = 0;
	var_535_string = var_539_string;
	var_542_bool = var_535_string == "";
	if(var_542_bool != 0) {
		var_540_bool = 0;
	} else {
		var_540_bool = 1;
	}
	func_4738(var_539_string, var_540_bool);
	var_2_object = var_535_string;
	return 0;
	
}


func_4269()
{
	var_968_float = 0; var_969_float = 0;
	rand(var_969_float, (int)8, (int)16);
	SetTimer((int)10, var_969_float);
	return 2;
}


func_5295(var_655_bool)
{
	var_657_int = 0; var_658_string = "";
	func_4791(var_657_int, "b9q01");
	var_660_bool = var_657_int == (int)3;
	if(var_660_bool != 0) {
		var_655_bool = 1;
		return 0;
	}
	var_655_bool = 0;
	return 0;
}


func_4781(var_118_cvector, var_119_cvector)
{
	var_121_float = 0; var_122_float = 0;
	var_123_int = var_119_cvector | var_119_cvector;
	var_122_float = sqrt(var_123_int);
	var_124_float = 9.999999974752427e-07;
	var_125_bool = var_122_float < var_124_float;
	if(var_125_bool != 0) {
		var_118_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_118_cvector = var_119_cvector / var_122_float;
	return 2;
}


func_5551()
{
	var_56_object = Obj(); var_57_object = Obj();
	CreateDiaryEntry(var_57_object, (int)260, (int)1, (int)521032);
	var_61_bool = 0; var_62_object = Obj(); var_63_int = 0;
	var_57_object = var_62_object;
	func_5642(var_61_bool, var_62_object, (int)253);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5041()
{
	SetVariable("oob9Starshina2", (int)1);
	return 0;
}


func_4278()
{
	KillTimer((int)10);
	return 0;
}


func_4791(var_457_int, var_458_string)
{
	var_459_int = 0; var_460_int = 0;
	GetVariable(var_458_string, var_460_int);
	var_460_int = var_457_int;
	return 2;
}


func_1208(var_0_object, var_1_object, var_2_object, var_3_string, var_607_object, var_608_object)
{
	var_0_object = var_608_object;
	var_1_object = var_607_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_614_bool = 0; var_615_object = Obj();
		var_615_object = var_1_object;
		func_5283(var_615_object);
		if(var_614_bool != 0) {
			var_620_object = Obj(); var_621_object = Obj();
			var_620_object = var_1_object;
			var_621_object = var_0_object;
			func_5035();
			var_624_string = "";
			func_1316(var_608_object, "Neutral");
			@@@var_0_object:SetMessage((int)521539);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522390, (int)23556, (int)23555);
		} else {
				var_644_string = "";
				func_1316(var_608_object, "Neutral");
				@@@var_0_object:SetMessage((int)521544);
				@@@var_0_object:ClearReplies();
				var_646_bool = 0; var_647_object = Obj();
				var_647_object = var_1_object;
				func_5271(var_647_object);
				if(var_646_bool != 0) {
					@@@var_0_object:AddReply((int)521545, (int)22710, (int)22706);
				}
				var_655_bool = 0; var_656_object = Obj();
				var_656_object = var_1_object;
				func_5295(var_656_object);
				if(var_655_bool != 0) {
					@@@var_0_object:AddReply((int)521587, (int)22749, (int)22748);
				}
				var_664_bool = 0; var_665_object = Obj();
				var_665_object = var_1_object;
				func_5307(var_665_object);
				if(var_664_bool != 0) {
					@@@var_0_object:AddReply((int)522411, (int)23579, (int)23578);
				}
				@@@var_0_object:AddReply((int)521546, (int)-1, (int)22707);
				goto Label_1286;
		}
	}
Label_1286:
	var_636_bool = 0;
	func_4951(var_636_bool);
	if(var_636_bool != 0) {

	Label_1290:
		lshWaitForAnimEnd();
		var_637_string = var_3_string;
		if(var_637_string != 0) {
		} else {
			var_638_string = "";
			var_638_string = var_2_object;
			func_4722(var_638_string);
			goto Label_1290;
	}
		PlayAnimation("all", "idle");

	Label_1305:
		WaitForAnimEnd();
		var_641_string = var_3_string;
		if(var_641_string != 0) {
			goto Label_1315;
		}
		PlayAnimation("all", "idle");
		goto Label_1305;

	}
	goto Label_1315;
	
Label_1315:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4bc";


func_5047()
{
	SetVariable("oob10Starshina1", (int)1);
	return 0;
}


func_5307(var_664_bool)
{
	var_666_int = 0; var_667_string = "";
	func_4791(var_666_int, "oob9Starshina2");
	var_669_bool = var_666_int == (int)0;
	if(var_669_bool != 0) {
		var_664_bool = 1;
		return 0;
	}
	var_664_bool = 0;
	return 0;
}


func_4796(var_96_string, var_97_bool)
{
	var_98_object = Obj(); var_99_object = Obj();
	FindActor(var_99_object, var_96_string);
	var_100_bool = var_99_object == 0; //@nz
	if(var_100_bool != 0) {
		var_102_int = "Door " + var_96_string;
		var_104_int = var_102_int + " not found";
		Trace(var_104_int);
	} else {
		var_105_bool = var_97_bool;
		if(var_105_bool != 0) {
			@@var_99_object:Close();
		}
		@@var_99_object:SetProperty("locked", var_97_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_5564()
{
	var_87_object = Obj(); var_88_object = Obj();
	CreateDiaryEntry(var_88_object, (int)291, (int)1, (int)521462);
	var_92_bool = 0; var_93_object = Obj(); var_94_int = 0;
	var_88_object = var_93_object;
	func_5642(var_92_bool, var_93_object, (int)284);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5053(var_52_object)
{
	var_54_object = Obj(); var_55_object = Obj();
	SetVariable("b10q01", (int)2);
	func_5687(Obj());
	var_58_object = var_55_object;
	var_69_float = 0;
	func_4880(var_69_float);
	@@var_55_object:AddMark("b10q01StarshinaGotoKurgan", "pt_map_kurgan", (int)1, (int)531553, var_69_float);
	func_5512();
	var_95_bool = 0; var_96_string = ""; var_97_string = "";
	func_4868(var_95_bool, "quest_b10_01", "usable_stone");
	@@var_52_object:ApplyEffect("quest_b10_01_effect.bin");
	return 2;
}
EMIT "Stack[-1] = 0";


func_5319(var_712_bool)
{
	var_714_int = 0; var_715_string = "";
	func_4791(var_714_int, "oob10Starshina1");
	var_717_bool = var_714_int == (int)0;
	if(var_717_bool != 0) {
		var_712_bool = 1;
		return 0;
	}
	var_712_bool = 0;
	return 0;
}


func_5577()
{
	var_56_object = Obj(); var_57_object = Obj();
	CreateDiaryEntry(var_57_object, (int)289, (int)1, (int)521460);
	var_61_bool = 0; var_62_object = Obj(); var_63_int = 0;
	var_57_object = var_62_object;
	func_5642(var_61_bool, var_62_object, (int)284);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4817(var_102_int, var_103_int)
{
	var_104_object = Obj(); var_105_object = Obj();
	CreateIntVector(var_105_object);
	@@var_105_object:add(var_102_int);
	@@var_105_object:add(var_103_int);
	SendWorldWndMessage((int)3, var_105_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5331(var_776_bool)
{
	var_778_int = 0; var_779_string = "";
	func_4791(var_778_int, "b10q01Butchers");
	var_781_bool = var_778_int == (int)3;
	if(var_781_bool != 0) {
		var_776_bool = 1;
		return 0;
	}
	var_776_bool = 0;
	return 0;
}


func_3540(var_2_object, var_254_string)
{
	var_255_bool = 0;
	func_4951(var_255_bool);
	var_256_bool = var_255_bool == 0; //@nz
	if(var_256_bool != 0) {
		return 0;
	}
	var_257_bool = var_254_string == var_2_object;
	if(var_257_bool != 0) {
		return 0;
	}
	var_258_string = ""; var_259_bool = 0;
	var_254_string = var_258_string;
	var_261_bool = var_254_string == "";
	if(var_261_bool != 0) {
		var_259_bool = 0;
	} else {
		var_259_bool = 1;
	}
	func_4738(var_258_string, var_259_bool);
	var_2_object = var_254_string;
	return 0;
	
}


func_4566()
{
	var_298_bool = 0; var_299_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_301_bool = 0;
	func_4951(var_301_bool);
	if(var_301_bool != 0) {
	} else {
		HasAnimationTrack(var_299_bool, "head");
		var_303_bool = var_299_bool;
		if(var_303_bool == 0) goto Label_4583;
		UnlookAsync("head");
	}
Label_4583:
	return 2;
	
}


func_5590()
{
	var_56_object = Obj(); var_57_object = Obj();
	CreateDiaryEntry(var_57_object, (int)297, (int)1, (int)521612);
	var_61_bool = 0; var_62_object = Obj(); var_63_int = 0;
	var_57_object = var_62_object;
	func_5642(var_61_bool, var_62_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5084()
{
	SetVariable("b10q01", (int)3);
	func_5499();
	return 0;
}


func_4829(var_91_object, var_92_object, var_93_int)
{
	var_94_int = 0; var_95_int = 0; var_96_bool = 0; var_97_int = 0; var_98_int = 0; var_99_bool = 0;
	@@var_92_object:GetItemID(var_97_int);
	GetInvItemProperty(var_98_int, var_97_int, "Category");
	@@var_91_object:AddItem(var_99_bool, var_92_object, var_98_int, var_93_int);
	var_101_bool = var_99_bool == 0; //@nz
	if(var_101_bool != 0) {
		@@var_91_object:DropItems(var_92_object, var_93_int);
	} else {
		var_102_int = 0; var_103_int = 0;
		var_97_int = var_102_int;
		var_93_int = var_103_int;
		func_4817(var_102_int, var_103_int);
	}
	return 6;
	
}


func_5343(var_761_bool)
{
	var_763_bool = 0;
	var_763_bool = 1;
	var_764_int = 0; var_765_string = "";
	func_4791(var_764_int, "b10q01Butchers");
	var_767_bool = var_764_int == (int)1;
	if(var_767_bool != 1) {
		var_768_int = 0; var_769_string = "";
		func_4791(var_768_int, "b10q01Butchers");
		var_771_bool = var_768_int == (int)2;
		if(var_771_bool != 1) {
			var_763_bool = 0;
		}
	}
	if(var_763_bool != 0) {
		var_761_bool = 1;
		return 0;
	}
	var_761_bool = 0;
	return 0;
}


func_3807(var_0_object, var_365_int, var_366_object)
{
	var_368_object = Obj(); var_369_bool = 0; var_370_int = 0; var_371_bool = 0; var_372_object = Obj(); var_373_bool = 0; var_374_int = 0; var_375_bool = 0;
	var_0_object = var_366_object;
	var_376_bool = 0; var_377_object = Obj(); var_378_float = 0;
	var_366_object = var_377_object;
	func_4497(var_376_bool, var_377_object, (float)130.0);
	var_379_bool = var_376_bool == 0; //@nz
	if(var_379_bool != 0) {
		var_365_int = -2;
		return 8;
	}
	CreateDialog(var_372_object);
	var_380_int = 0;
	func_4945(var_380_int);
	@@var_372_object:SetNPCName(var_380_int);
	var_381_int = 0;
	func_4943(var_381_int);
	@@var_372_object:SetNPCDescription(var_381_int);
	var_382_string = "";
	func_4947(var_382_string);
	@@var_372_object:SetPhoto(var_382_string);
	var_383_string = "";
	func_4949(var_383_string);
	@@var_372_object:SetPhoto2(var_383_string);
	var_384_int = 0;
	func_5737(var_384_int);
	@@var_372_object:SetPlayerName(var_384_int);
	IsOverrideActive(var_373_bool);
	var_385_bool = var_373_bool;
	if(var_385_bool != 0) {
		var_365_int = -2;
		return 8;
	}
	DoDialog(var_372_object);
	var_386_bool = 0; var_387_object = Obj();
	func_4775(Obj());
	var_388_object = var_387_object;
	func_4584(var_386_bool, var_387_object);
	var_389_object = Obj(); var_390_object = Obj();
	var_366_object = var_389_object;
	var_372_object = var_390_object;
	TaskCall(15);
	func_3888(var_391_object, var_392_object, var_393_string, var_394_bool, var_389_object, var_390_object);
	TaskReturn();
	@@var_372_object:IsDialogEnd(var_375_bool);
	
Label_3870:
	var_419_bool = var_375_bool == 0; //@nz
	if(var_419_bool != 0) {
		sync();
		@@var_372_object:IsDialogEnd(var_375_bool);
		goto Label_3870;
	}
	var_366_object = Obj();
	func_4566();
	StopDialog(var_372_object);
	@@var_372_object:GetReturnValue((int)-1);
	var_374_int = var_365_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2017(var_2_object, var_728_string)
{
	var_729_bool = 0;
	func_4951(var_729_bool);
	var_730_bool = var_729_bool == 0; //@nz
	if(var_730_bool != 0) {
		return 0;
	}
	var_731_bool = var_728_string == var_2_object;
	if(var_731_bool != 0) {
		return 0;
	}
	var_732_string = ""; var_733_bool = 0;
	var_728_string = var_732_string;
	var_735_bool = var_728_string == "";
	if(var_735_bool != 0) {
		var_733_bool = 0;
	} else {
		var_733_bool = 1;
	}
	func_4738(var_732_string, var_733_bool);
	var_2_object = var_728_string;
	return 0;
	
}


func_5603()
{
	var_115_object = Obj(); var_116_object = Obj();
	CreateDiaryEntry(var_116_object, (int)304, (int)1, (int)521619);
	var_120_bool = 0; var_121_object = Obj(); var_122_int = 0;
	var_116_object = var_121_object;
	func_5642(var_120_bool, var_121_object, (int)297);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5093()
{
	SetVariable("oob11Starshina1", (int)1);
	return 0;
}


func_4584(var_152_bool, var_153_object)
{
	var_157_int = 0; var_158_int = 0; var_159_int = 0; var_160_int = 0;
	GetVariable("voice_common", var_159_int);
	var_162_int = var_159_int;
	if(var_162_int != 0) {
		var_163_bool = 0; var_164_object = Obj();
		var_153_object = var_164_object;
		func_4642(var_163_bool, var_164_object);
		var_193_bool = var_163_bool == 0; //@nz
		if(var_193_bool != 0) {
			var_194_bool = 0; var_195_object = Obj();
			var_153_object = var_195_object;
			func_4679(var_194_bool, var_195_object);
			var_229_bool = var_194_bool == 0; //@nz
			if(var_229_bool != 0) {
				var_152_bool = 0;
				return 4;
			}
		}
		irand(var_160_int, (int)2);
		var_231_int = var_160_int;
		if(var_231_int != 0) {
			var_234_int = var_159_int + (int)1;
			var_236_int = var_234_int % (int)3;
			SetVariable("voice_common", var_236_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_239_bool = 0; var_240_object = Obj();
		var_153_object = var_240_object;
		func_4679(var_239_bool, var_240_object);
		var_241_bool = var_239_bool == 0; //@nz
		if(var_241_bool != 0) {
			var_242_bool = 0; var_243_object = Obj();
			var_153_object = var_243_object;
			func_4642(var_242_bool, var_243_object);
			var_244_bool = var_242_bool == 0; //@nz
			if(var_244_bool != 0) {
				var_152_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_4640;
	
Label_4640:
	var_152_bool = 1;
	return 4;
	
}


func_5099()
{
	SetVariable("b11q01", (int)1);
	func_5525();
	func_5538();
	var_87_bool = 0; var_88_string = ""; var_89_string = "";
	func_4868(var_87_bool, "quest_b11_01", "open_shaft");
	return 0;
}


func_4848(var_86_object, var_87_string, var_88_int)
{
	var_89_object = Obj(); var_90_object = Obj();
	CreateInvItem(var_90_object);
	@@var_90_object:SetItemName(var_87_string);
	var_91_object = Obj(); var_92_object = Obj(); var_93_int = 0;
	var_86_object = var_91_object;
	var_90_object = var_92_object;
	var_88_int = var_93_int;
	func_4829(var_91_object, var_92_object, var_93_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5616()
{
	var_79_object = Obj(); var_80_object = Obj();
	CreateDiaryEntry(var_80_object, (int)298, (int)1, (int)521613);
	var_84_bool = 0; var_85_object = Obj(); var_86_int = 0;
	var_80_object = var_85_object;
	func_5642(var_84_bool, var_85_object, (int)297);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2802(var_2_object, var_839_string)
{
	var_840_bool = 0;
	func_4951(var_840_bool);
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
	func_4738(var_843_string, var_844_bool);
	var_2_object = var_839_string;
	return 0;
	
}


func_5366(var_718_bool)
{
	var_720_int = 0; var_721_string = "";
	func_4791(var_720_int, "b10q01");
	var_723_bool = var_720_int == (int)1;
	if(var_723_bool != 0) {
		var_718_bool = 1;
		return 0;
	}
	var_718_bool = 0;
	return 0;
}


func_4091(var_0_object, var_1_object, var_2_object, var_3_string, var_934_object, var_935_object)
{
	var_0_object = var_935_object;
	var_1_object = var_934_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_941_string = "";
		func_4149(var_935_object, "Neutral");
		@@@var_0_object:SetMessage((int)540554);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540555, (int)-1, (int)42564);
		@@@var_0_object:AddReply((int)540794, (int)-1, (int)42843);
		goto Label_4119;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xfff";
	}
Label_4119:
	var_956_bool = 0;
	func_4951(var_956_bool);
	if(var_956_bool != 0) {

	Label_4123:
		lshWaitForAnimEnd();
		var_957_string = var_3_string;
		if(var_957_string != 0) {
		} else {
			var_958_string = "";
			var_958_string = var_2_object;
			func_4722(var_958_string);
			goto Label_4123;
	}
		PlayAnimation("all", "idle");

	Label_4138:
		WaitForAnimEnd();
		var_961_string = var_3_string;
		if(var_961_string != 0) {
			goto Label_4148;
		}
		PlayAnimation("all", "idle");
		goto Label_4138;
	}
	goto Label_4148;
	
Label_4148:
	return 0;
	
}


func_5116()
{
	var_149_bool = 0; var_150_string = ""; var_151_string = "";
	func_4868(var_149_bool, "quest_b11_01", "starshina_fight");
	return 0;
}


func_4861(var_566_bool, var_567_object, var_568_string)
{
	var_569_int = 0; var_570_bool = 0; var_571_int = 0; var_572_bool = 0;
	GetInvItemByName(var_571_int, var_568_string);
	@@var_567_object:HasItem(var_571_int, var_572_bool);
	var_572_bool = var_566_bool;
	return 4;
}


