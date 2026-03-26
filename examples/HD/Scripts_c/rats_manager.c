// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,CreateIntVector/1,GetInvItemByName/2,ChooseItem/2,Trace/1,GetVariable/2,SetVariable/2,UnlockAchievement/1,GetScene/1,StopGroup0/0,irand/2,FindActor/2,IsLoaded/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,lshStopSpeech/0,rand/1,CreateObjectVector/1,AddActor/6,SendWorldWndMessage/2,TriggerWorld/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetItemCount|W:rat|W:rat_big|A:GetItem|A:GetItemID|A:add|A:size|A:get|A:RemoveItem|W:quality|A:GetProperty|W:pers_rat_big|W:pers_rat|W:You've won a rat race|W:Looser!|W:race_begin|W:ACHIEVEMENT_HELLO_1|W:winner|W:looser|W:pt_rat1|W:rat_race.xml|W:Index|A:SetScriptProperty|W:Race|W:pt_rat2|W:pt_rat3|W:race_over1|W:race_over2|W:race_over3|W:rats_track_door|A:Open|A:Close|A:SetProperty|A:GetPosition|A:GetEyesHeight|W:head|W:Can't find lsh animation : |A:GetLocator|W:Locator |W: doesn't exist|W:money|W:Money|A:HasItem|A:SetReturnValue|W:ooRatsManager1|W:money500 is given|W:playsound|W:givemoney|W:branch|W:ui/NPC_Citizen2.png|W:ui/NPC_Citizen2_b.png
// @RUN_OP: 0x488
// @RUN_TASK: 8
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9a vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x182 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x250 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x35a vars=int,int
// @TASK_8: vars=int params=0
// @EVENT_0: op=0x48d vars=object
// @EVENT_26: op=0x523 vars=string
// @EVENT_6: op=0x52d vars=
// @TASK_9: vars=bool,int,int params=3
// @EVENT_0: op=0x5fa vars=object
// @EVENT_26: op=0x602 vars=string
// @EVENT_6: op=0x6a8 vars=
// @PE: 0x4a,0x84,0x9a,0x128,0x16c,0x182,0x200,0x23a,0x250,0x2c4,0x344,0x35a,0x505,0x523,0x5fa,0x602,0x736,0x745,0x75e,0x7ae,0x7b3,0x7b9,0x7c3,0x7c9,0x7d5,0x7e1,0x7ed,0x802

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_int, var_23_bool, var_24_int, var_25_int)
{
	if((int)1 != 0) {
		func_1839();
		var_29_bool = var_25_int == (int)21241;
		if(var_29_bool != 0) {
			var_30_object = Obj(); var_31_object = Obj();
			var_30_object = var_1_object;
			var_31_object = var_0_object;
			func_1977(var_31_object);
			var_51_object = Obj(); var_52_object = Obj();
			var_51_object = var_1_object;
			var_52_object = var_0_object;
			func_1987();
		}
		var_56_bool = var_25_int == (int)21242;
		if(var_56_bool != 0) {
			var_57_object = Obj(); var_58_object = Obj();
			var_57_object = var_1_object;
			var_58_object = var_0_object;
			func_1977(var_58_object);
			var_59_object = Obj(); var_60_object = Obj();
			var_59_object = var_1_object;
			var_60_object = var_0_object;
			func_1987();
		}
		var_62_bool = var_24_int == (int)21240;
		if(var_62_bool != 0) {
			var_63_string = "";
			func_132(var_25_int, "Neutral");
			@@@var_0_object:SetMessage((int)520060);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520061, (int)-1, (int)21241);
			@@@var_0_object:AddReply((int)520062, (int)-1, (int)21242);
			return 0;
		}
		var_3_string = true;
		var_87_bool = 0;
		func_2093(var_87_bool);
		if(var_87_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x9b";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_int, var_23_bool, var_24_int, var_25_int)
{
	if((int)1 != 0) {
		func_1839();
		var_29_bool = var_24_int == (int)21244;
		if(var_29_bool != 0) {
			var_30_string = "";
			func_364(var_25_int, "Neutral");
			@@@var_0_object:SetMessage((int)520064);
			@@@var_0_object:ClearReplies();
			var_48_bool = 0; var_49_object = Obj();
			var_49_object = var_1_object;
			func_2005(var_49_object);
			if(var_48_bool != 0) {
				@@@var_0_object:AddReply((int)520065, (int)-1, (int)21245);
			}
			@@@var_0_object:AddReply((int)520066, (int)-1, (int)21246);
			@@@var_0_object:AddReply((int)520067, (int)-1, (int)21247);
			return 0;
		}
		var_3_string = true;
		var_65_bool = 0;
		func_2093(var_65_bool);
		if(var_65_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x183";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_int, var_23_bool, var_24_int, var_25_int)
{
	if((int)1 != 0) {
		func_1839();
		var_29_bool = var_24_int == (int)21249;
		if(var_29_bool != 0) {
			var_30_string = "";
			func_570(var_25_int, "Neutral");
			@@@var_0_object:SetMessage((int)520069);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520070, (int)-1, (int)21250);
			@@@var_0_object:AddReply((int)520071, (int)-1, (int)21251);
			return 0;
		}
		var_3_string = true;
		var_54_bool = 0;
		func_2093(var_54_bool);
		if(var_54_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x251";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_int, var_23_bool, var_24_int, var_25_int)
{
	if((int)1 != 0) {
		func_1839();
		var_29_bool = var_25_int == (int)21270;
		if(var_29_bool != 0) {
			var_30_object = Obj(); var_31_object = Obj();
			var_30_object = var_1_object;
			var_31_object = var_0_object;
			func_1966(var_31_object);
		}
		var_34_bool = var_24_int == (int)21253;
		if(var_34_bool != 0) {
			var_35_bool = 0; var_36_object = Obj();
			var_36_object = var_1_object;
			func_2050(var_36_object);
			if(var_35_bool != 0) {
				var_43_object = Obj(); var_44_object = Obj();
				var_43_object = var_1_object;
				var_44_object = var_0_object;
				func_1971();
				var_47_string = "";
				func_836(var_25_int, "Neutral");
				@@@var_0_object:SetMessage((int)520073);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)520074, (int)21255, (int)21254);
				var_68_bool = 0; var_69_object = Obj();
				var_69_object = var_1_object;
				func_2005(var_69_object);
				if(var_68_bool != 0) {
					@@@var_0_object:AddReply((int)520085, (int)21266, (int)21265);
				}
				var_77_bool = 0; var_78_object = Obj();
				var_78_object = var_1_object;
				func_2017(var_78_object);
				if(var_77_bool != 0) {
					@@@var_0_object:AddReply((int)541546, (int)43710, (int)43709);
				}
				var_86_bool = 0; var_87_object = Obj();
				var_87_object = var_1_object;
				func_1993(var_87_object);
				if(var_86_bool != 0) {
					@@@var_0_object:AddReply((int)541549, (int)21255, (int)43713);
				}
				return 0;
			}
			var_95_string = "";
			func_836(var_25_int, "Neutral");
			@@@var_0_object:SetMessage((int)520088);
			@@@var_0_object:ClearReplies();
			var_97_bool = 0; var_98_object = Obj();
			var_98_object = var_1_object;
			func_2029(var_97_bool, var_98_object);
			if(var_97_bool != 0) {
				@@@var_0_object:AddReply((int)520089, (int)-1, (int)21270);
			}
			@@@var_0_object:AddReply((int)520090, (int)21272, (int)21271);
			@@@var_0_object:AddReply((int)520092, (int)21274, (int)21273);
			@@@var_0_object:AddReply((int)520095, (int)-1, (int)21277);
			return 0;
		}
		var_123_bool = var_24_int == (int)21274;
		if(var_123_bool != 0) {
			var_124_string = "";
			func_836(var_25_int, "Neutral");
			@@@var_0_object:SetMessage((int)520093);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520094, (int)21272, (int)21275);
			return 0;
		}
		var_130_bool = var_24_int == (int)21272;
		if(var_130_bool != 0) {
			var_131_string = "";
			func_836(var_25_int, "Neutral");
			@@@var_0_object:SetMessage((int)520091);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520096, (int)-1, (int)21278);
			return 0;
		}
		var_137_bool = var_24_int == (int)43710;
		if(var_137_bool != 0) {
			var_138_string = "";
			func_836(var_25_int, "Neutral");
			@@@var_0_object:SetMessage((int)541547);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541548, (int)21255, (int)43711);
			return 0;
		}
		var_144_bool = var_24_int == (int)21266;
		if(var_144_bool != 0) {
			var_145_string = "";
			func_836(var_25_int, "Neutral");
			@@@var_0_object:SetMessage((int)520086);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520087, (int)21255, (int)21267);
			return 0;
		}
		var_151_bool = var_24_int == (int)21255;
		if(var_151_bool != 0) {
			var_152_string = "";
			func_836(var_25_int, "Neutral");
			@@@var_0_object:SetMessage((int)520075);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520076, (int)21257, (int)21256);
			return 0;
		}
		var_158_bool = var_24_int == (int)21257;
		if(var_158_bool != 0) {
			var_159_string = "";
			func_836(var_25_int, "Neutral");
			@@@var_0_object:SetMessage((int)520077);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520078, (int)21259, (int)21258);
			@@@var_0_object:AddReply((int)520082, (int)21263, (int)21262);
			var_167_bool = 0; var_168_object = Obj();
			var_168_object = var_1_object;
			func_2005(var_168_object);
			if(var_167_bool != 0) {
				@@@var_0_object:AddReply((int)520097, (int)21280, (int)21279);
			}
			return 0;
		}
		var_173_bool = var_24_int == (int)21280;
		if(var_173_bool != 0) {
			var_174_string = "";
			func_836(var_25_int, "Neutral");
			@@@var_0_object:SetMessage((int)520098);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520099, (int)-1, (int)21281);
			return 0;
		}
		var_180_bool = var_24_int == (int)21263;
		if(var_180_bool != 0) {
			var_181_string = "";
			func_836(var_25_int, "Neutral");
			@@@var_0_object:SetMessage((int)520083);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520084, (int)-1, (int)21264);
			return 0;
		}
		var_187_bool = var_24_int == (int)21259;
		if(var_187_bool != 0) {
			var_188_string = "";
			func_836(var_25_int, "Neutral");
			@@@var_0_object:SetMessage((int)520079);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520080, (int)-1, (int)21260);
			@@@var_0_object:AddReply((int)520081, (int)-1, (int)21261);
			return 0;
		}
		var_3_string = true;
		var_196_bool = 0;
		func_2093(var_196_bool);
		if(var_196_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x35b";
	
}


task_8_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_object, var_22_bool, var_23_int, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_object = Obj(); var_32_int = 0; var_33_int = 0; var_34_object = Obj(); var_35_object = Obj(); var_36_int = 0; var_37_float = 0; var_38_int = 0; var_39_object = Obj(); var_40_object = Obj(); var_41_int = 0; var_42_int = 0; var_43_int = 0; var_44_int = 0; var_45_object = Obj(); var_46_int = 0; var_47_int = 0; var_48_object = Obj(); var_49_object = Obj(); var_50_int = 0; var_51_float = 0; var_52_int = 0;
	var_54_bool = var_0_object == (int)0;
	if(var_54_bool != 0) {
		var_55_int = 0; var_56_object = Obj();
		var_24_int = var_56_object;
		TaskCall(2);
		func_222(var_57_object, var_55_int, var_56_object);
		TaskReturn();
	} else {
		var_197_bool = -1 == (int)1;
		if(var_197_bool != 0) {
			var_198_int = 0; var_199_object = Obj();
			var_24_int = var_199_object;
			TaskCall(0);
			func_0(var_200_object, var_198_int, var_199_object);
			TaskReturn();
			var_0_object = -1;
			goto Label_1284;
		}
		var_251_int = 0; var_252_object = Obj();
		var_24_int = var_252_object;
		TaskCall(6);
		func_634(var_253_object, var_251_int, var_252_object);
		TaskReturn();
		var_362_bool = var_253_object == (int)1;
		if(var_362_bool == 0) goto Label_1284;
		func_1899(Obj());
		var_363_object = var_39_object;
		CreateIntVector(var_40_object);
		@@var_24_int:GetItemCount(var_41_int, (int)4);
		GetInvItemByName(var_42_int, "rat");
		GetInvItemByName(var_43_int, "rat_big");
		var_44_int = 0;

	Label_1213:
		var_369_bool = var_44_int < var_41_int;
		if(var_369_bool != 0) {
			@@var_24_int:GetItem(var_45_object, var_44_int, (int)4);
			@@var_45_object:GetItemID(var_46_int);
			var_371_bool = 0;
			var_371_bool = 1;
			var_372_bool = var_46_int == var_42_int;
			if(var_372_bool != 1) {
				var_373_bool = var_46_int == var_43_int;
				if(var_373_bool != 1) {
					var_371_bool = 0;
				}
			}
			if(var_371_bool != 0) {
				@@var_39_object:add(var_45_object);
				@@var_40_object:add(var_44_int);
			}
			var_45_object = 0;
			var_44_int = var_44_int + (int)1;
			goto Label_1213;
		}
		@@var_39_object:size(var_41_int);
		var_375_int = var_41_int;
		if(var_375_int != 0) {
			var_377_bool = var_41_int == (int)1;
			if(var_377_bool != 0) {
				var_47_int = 0;
			} else {
					CreateIntVector(var_48_object);
					ChooseItem(var_39_object, var_48_object);
					@@var_48_object:size(var_41_int);
					var_584_int = var_41_int;
					if(var_584_int != 0) {
						@@var_48_object:get(var_47_int, (int)0);
					} else {
						return 28;
					}
					var_48_object = 0;
			}
			@@var_39_object:get(var_49_object, var_47_int);
			@@var_40_object:get(var_50_int, var_47_int);
			@@var_24_int:RemoveItem(var_50_int, (int)1, (int)4);
			@@var_49_object:GetProperty(var_51_float, "quality");
			@@var_49_object:GetItemID(var_52_int);
			var_381_string = ""; var_382_float = 0;
			var_383_bool = var_52_int == var_43_int;
			if(var_383_bool != 0) {
				var_381_string = "pers_rat_big";
			} else {
				var_381_string = "pers_rat";

			}
			var_51_float = var_382_float;
			func_1285(var_51_float, var_52_int, var_381_string, var_382_float);
			var_49_object = 0;
		}
		var_40_object = 0;
		var_39_object = 0;
	}
Label_1284:
	return 28;
	
}


task_8_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_string, var_22_bool, var_23_int, var_24_int)
{
	var_26_bool = var_24_int == "race_begin";
	if(var_26_bool != 0) {
		var_27_string = ""; var_28_float = 0;
		func_1285(var_23_int, var_24_int, "pers_rat_big", (float)1.0);
	}
	return 0;
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_bool, var_22_int, var_23_int)
{
	var_0_object = -1;
	return 0;
}


task_9_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_bool, var_22_int, var_23_int, var_24_object)
{
	var_25_int = 0; var_26_object = Obj();
	var_24_object = var_26_object;
	TaskCall(4);
	func_438(var_27_object, var_25_int, var_26_object);
	TaskReturn();
	return 0;
}


task_9_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_bool, var_22_int, var_23_int, var_24_string)
{
	var_26_bool = var_24_string == "race_over1";
	if(var_26_bool != 0) {
		var_27_int = 0; var_28_bool = 0;
		func_1687((int)3, (bool)0);
		var_1_object = var_1_object + (int)1;
		var_39_bool = var_1_object == (int)1;
		if(var_39_bool != 0) {
			var_2_object = 1;
		} else {
			var_41_bool = var_1_object == (int)3;
			if(var_41_bool == 0) goto Label_1560;
			var_0_object = true;
			StopGroup0();
	}
		var_43_bool = var_24_string == "race_over2";
		if(var_43_bool != 0) {
			var_44_int = 0; var_45_bool = 0;
			func_1687((int)4, (bool)0);
			var_1_object = var_1_object + (int)1;
			var_48_bool = var_1_object == (int)1;
			if(var_48_bool != 0) {
				var_2_object = 0;
			} else {
				var_50_bool = var_1_object == (int)3;
				if(var_50_bool == 0) goto Label_1582;
				var_0_object = true;
				StopGroup0();
		}
			var_52_bool = var_24_string == "race_over3";
			if(var_52_bool == 0) goto Label_1604;
			var_53_int = 0; var_54_bool = 0;
			func_1687((int)5, (bool)0);
			var_1_object = var_1_object + (int)1;
			var_57_bool = var_1_object == (int)1;
			if(var_57_bool != 0) {
				var_2_object = 0;
				goto Label_1604;
			}
			var_59_bool = var_1_object == (int)3;
			if(var_59_bool == 0) goto Label_1604;
			var_0_object = true;
			StopGroup0();
		}
	Label_1582:
		goto Label_1604;
	}
Label_1560:
	goto Label_1604;
	
Label_1604:
	return 0;
	
}


task_9_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_bool, var_22_int, var_23_int)
{
	var_2_object = -1;
	var_0_object = true;
	StopGroup0();
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_bool, var_22_int, var_23_int)
{
	var_0_object = -1;
	
Label_1161:
	Hold();
	goto Label_1161;
}
EMIT "Return(); Pop(0)";


func_512(var_0_object, var_1_object, var_2_object, var_3_string, var_97_object, var_98_object)
{
	var_0_object = var_98_object;
	var_1_object = var_97_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_104_string = "";
		func_570(var_98_object, "Neutral");
		@@@var_0_object:SetMessage((int)520069);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)520070, (int)-1, (int)21250);
		@@@var_0_object:AddReply((int)520071, (int)-1, (int)21251);
		goto Label_540;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x204";
	}
Label_540:
	var_128_bool = 0;
	func_2093(var_128_bool);
	if(var_128_bool != 0) {

	Label_544:
		lshWaitForAnimEnd();
		var_129_string = var_3_string;
		if(var_129_string != 0) {
		} else {
			var_130_string = "";
			var_130_string = var_2_object;
			func_1808(var_130_string);
			goto Label_544;
	}
		PlayAnimation("all", "idle");

	Label_559:
		WaitForAnimEnd();
		var_143_string = var_3_string;
		if(var_143_string != 0) {
			goto Label_569;
		}
		PlayAnimation("all", "idle");
		goto Label_559;
	}
	goto Label_569;
	
Label_569:
	return 0;
	
}


func_0(var_0_object, var_198_int, var_199_object)
{
	var_201_object = Obj(); var_202_bool = 0; var_203_int = 0; var_204_bool = 0; var_205_object = Obj(); var_206_bool = 0; var_207_int = 0; var_208_bool = 0;
	var_0_object = var_199_object;
	var_209_bool = 0; var_210_object = Obj(); var_211_float = 0;
	var_199_object = var_210_object;
	func_1721(var_209_bool, var_210_object, (float)70.0);
	var_212_bool = var_209_bool == 0; //@nz
	if(var_212_bool != 0) {
		var_198_int = -2;
		return 8;
	}
	CreateDialog(var_205_object);
	var_213_int = 0;
	func_2087(var_213_int);
	@@var_205_object:SetNPCName(var_213_int);
	var_214_int = 0;
	func_2085(var_214_int);
	@@var_205_object:SetNPCDescription(var_214_int);
	var_215_string = "";
	func_2089(var_215_string);
	@@var_205_object:SetPhoto(var_215_string);
	var_216_string = "";
	func_2091(var_216_string);
	@@var_205_object:SetPhoto2(var_216_string);
	var_217_int = 0;
	func_2062(var_217_int);
	@@var_205_object:SetPlayerName(var_217_int);
	IsOverrideActive(var_206_bool);
	var_218_bool = var_206_bool;
	if(var_218_bool != 0) {
		var_198_int = -2;
		return 8;
	}
	DoDialog(var_205_object);
	var_219_object = Obj(); var_220_object = Obj();
	var_199_object = var_219_object;
	var_205_object = var_220_object;
	TaskCall(1);
	func_74(var_221_object, var_222_object, var_223_string, var_224_bool, var_219_object, var_220_object);
	TaskReturn();
	@@var_205_object:IsDialogEnd(var_208_bool);
	
Label_56:
	var_249_bool = var_208_bool == 0; //@nz
	if(var_249_bool != 0) {
		sync();
		@@var_205_object:IsDialogEnd(var_208_bool);
		goto Label_56;
	}
	var_199_object = Obj();
	func_1790();
	StopDialog(var_205_object);
	@@var_205_object:GetReturnValue((int)-1);
	var_207_int = var_198_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2050(var_279_bool)
{
	var_281_int = 0; var_282_string = "";
	func_1905(var_281_int, "ooRatsManager1");
	var_284_bool = var_281_int == (int)0;
	if(var_284_bool != 0) {
		var_279_bool = 1;
		return 0;
	}
	var_279_bool = 0;
	return 0;
}


func_132(var_2_object, var_226_string)
{
	var_227_bool = 0;
	func_2093(var_227_bool);
	var_228_bool = var_227_bool == 0; //@nz
	if(var_228_bool != 0) {
		return 0;
	}
	var_229_bool = var_226_string == var_2_object;
	if(var_229_bool != 0) {
		return 0;
	}
	var_230_string = ""; var_231_bool = 0;
	var_226_string = var_230_string;
	var_233_bool = var_226_string == "";
	if(var_233_bool != 0) {
		var_231_bool = 0;
	} else {
		var_231_bool = 1;
	}
	func_1824(var_230_string, var_231_bool);
	var_2_object = var_226_string;
	return 0;
	
}


func_1285(var_0_object, var_27_string, var_28_float, var_32_bool)
{
	var_29_int = 0; var_30_string = ""; var_31_float = 0;
	var_27_string = var_30_string;
	var_28_float = var_31_float;
	TaskCall(9);
	func_1327(var_32_bool, var_33_int, var_34_int, var_29_int, var_30_string, var_31_float);
	TaskReturn();
	var_0_object = var_32_bool;
	var_219_bool = 0;
	func_1716(var_219_bool);
	var_222_bool = var_219_bool == 0; //@nz
	if(var_222_bool != 0) {
		var_0_object = -1;
	} else {
		var_224_bool = var_0_object == (int)1;
		if(var_224_bool != 0) {
			Trace("You've won a rat race");
			goto Label_1314;
		}
		var_227_bool = var_0_object == (int)0;
		if(var_227_bool == 0) goto Label_1314;
		Trace("Looser!");
	}
Label_1314:
	return 0;
	
}


func_1928(var_46_int, var_47_int)
{
	var_48_object = Obj(); var_49_object = Obj();
	CreateIntVector(var_49_object);
	@@var_49_object:add(var_46_int);
	@@var_49_object:add(var_47_int);
	SendWorldWndMessage((int)3, var_49_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2062(var_88_int)
{
	var_89_int = 0; var_90_int = 0;
	GetVariable("branch", var_90_int);
	var_93_bool = var_90_int == (int)0;
	if(var_93_bool != 0) {
		var_88_int = 1;
		return 2;
	EMIT "GOTO 0x81d";
	}
	var_95_bool = var_90_int == (int)1;
	if(var_95_bool != 0) {
		var_88_int = 2;
		return 2;
	}
	var_88_int = 3;
	return 2;
}


func_1808(var_130_string)
{
	var_131_bool = 0; var_132_float = 0; var_133_float = 0; var_134_bool = 0; var_135_float = 0; var_136_float = 0;
	lshHasAnimation(var_134_bool, var_130_string);
	var_137_bool = var_134_bool;
	if(var_137_bool != 0) {
		lshGetAnimTimes(var_130_string, var_135_float, var_136_float);
		lshPlayAnimation(var_135_float, var_136_float, (bool)0);
	} else {
		var_140_int = "Can't find lsh animation : " + var_130_string;
		Trace(var_140_int);
	}
	return 6;
	
}


func_1940(var_33_object, var_34_int)
{
	var_35_int = 0; var_36_int = 0;
	var_37_object = Obj(); var_38_string = ""; var_39_int = 0;
	var_33_object = var_37_object;
	var_34_int = var_39_int;
	func_1709(var_37_object, "money", var_39_int);
	var_44_bool = var_34_int > (int)0;
	if(var_44_bool != 0) {
		GetInvItemByName(var_36_int, "Money");
		var_46_int = 0; var_47_int = 0;
		var_36_int = var_46_int;
		var_34_int = var_47_int;
		func_1928(var_46_int, var_47_int);
	}
	return 2;
}


func_1687(var_27_int, var_28_bool)
{
	var_29_object = Obj(); var_30_object = Obj();
	var_33_int = var_27_int + (int)1;
	var_34_int = "rats_track_door" + var_33_int;
	FindActor(var_30_object, var_34_int);
	var_35_bool = var_28_bool;
	if(var_35_bool != 0) {
		@@var_30_object:Open((bool)0);
	} else {
		@@var_30_object:Close();
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_2079(var_39_int)
{
	var_40_int = 0; var_41_int = 0;
	GetVariable("branch", var_41_int);
	var_41_int = var_39_int;
	return 2;
}


func_1824(var_108_string, var_109_bool)
{
	var_112_bool = 0; var_113_float = 0; var_114_float = 0; var_115_bool = 0; var_116_float = 0; var_117_float = 0;
	lshHasAnimation(var_115_bool, var_108_string);
	var_118_bool = var_115_bool;
	if(var_118_bool != 0) {
		lshGetAnimTimes(var_108_string, var_116_float, var_117_float);
		lshPlayAnimation(var_116_float, var_117_float, var_109_bool);
	} else {
		var_120_int = "Can't find lsh animation : " + var_108_string;
		Trace(var_120_int);
	}
	return 6;
	
}


func_2085(var_85_int)
{
	var_85_int = 518097;
	return 0;
}


func_2087(var_84_int)
{
	var_84_int = 518096;
	return 0;
}


func_296(var_0_object, var_1_object, var_2_object, var_3_string, var_127_object, var_128_object)
{
	var_0_object = var_128_object;
	var_1_object = var_127_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_134_string = "";
		func_364(var_128_object, "Neutral");
		@@@var_0_object:SetMessage((int)520064);
		@@@var_0_object:ClearReplies();
		var_152_bool = 0; var_153_object = Obj();
		var_153_object = var_1_object;
		func_2005(var_153_object);
		if(var_152_bool != 0) {
			@@@var_0_object:AddReply((int)520065, (int)-1, (int)21245);
		}
		@@@var_0_object:AddReply((int)520066, (int)-1, (int)21246);
		@@@var_0_object:AddReply((int)520067, (int)-1, (int)21247);
		goto Label_334;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x12c";
	}
Label_334:
	var_169_bool = 0;
	func_2093(var_169_bool);
	if(var_169_bool != 0) {

	Label_338:
		lshWaitForAnimEnd();
		var_170_string = var_3_string;
		if(var_170_string != 0) {
		} else {
			var_171_string = "";
			var_171_string = var_2_object;
			func_1808(var_171_string);
			goto Label_338;
	}
		PlayAnimation("all", "idle");

	Label_353:
		WaitForAnimEnd();
		var_184_string = var_3_string;
		if(var_184_string != 0) {
			goto Label_363;
		}
		PlayAnimation("all", "idle");
		goto Label_353;
	}
	goto Label_363;
	
Label_363:
	return 0;
	
}


func_2089(var_86_string)
{
	var_86_string = "ui/NPC_Citizen2.png";
	return 0;
}


func_1959(var_337_bool, var_338_object, var_339_string)
{
	var_340_int = 0; var_341_bool = 0; var_342_int = 0; var_343_bool = 0;
	GetInvItemByName(var_342_int, var_339_string);
	@@var_338_object:HasItem(var_342_int, var_343_bool);
	var_343_bool = var_337_bool;
	return 4;
}


func_2091(var_87_string)
{
	var_87_string = "ui/NPC_Citizen2_b.png";
	return 0;
}


func_2093(var_79_bool)
{
	var_79_bool = 0;
	return 0;
}


func_1966(var_31_object)
{
	@@var_31_object:SetReturnValue((int)1);
	return 0;
}


func_1839()
{
	var_27_bool = 0;
	func_2093(var_27_bool);
	if(var_27_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1327(var_0_object, var_1_object, var_2_object, var_29_int, var_30_string, var_31_float)
{
	var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0;
	var_39_int = 0;
	func_2079(var_39_int);
	var_44_bool = var_39_int == (int)1;
	if(var_44_bool != 0) {
		GetVariable("ACHIEVEMENT_HELLO_1", var_37_int);
		var_47_bool = var_37_int == (int)0;
		if(var_47_bool != 0) {
			SetVariable("ACHIEVEMENT_HELLO_1", (int)1);
			UnlockAchievement("ACHIEVEMENT_HELLO_1");
		}
	}
	var_1_object = 0;
	var_51_string = ""; var_52_float = 0;
	var_30_string = var_51_string;
	var_31_float = var_52_float;
	func_1371(var_51_string, var_52_float);
	
Label_1353:
	Hold();
	var_213_bool = var_0_object == 0; //@nz
	if(var_213_bool == 1) goto Label_1353;
	
Label_1358:
	var_215_bool = (int)0 < (int)6;
	if(var_215_bool != 0) {
		var_216_int = 0; var_217_bool = 0;
		var_38_int = var_216_int;
		func_1687(var_216_int, (bool)0);
		var_38_int = var_38_int + (int)1;
		goto Label_1358;
	}
	var_29_int = var_2_object;
	return 4;
}


func_1709(var_37_object, var_38_string, var_39_int)
{
	var_40_int = 0; var_41_int = 0;
	@@var_37_object:GetProperty(var_38_string, var_41_int);
	var_42_int = var_41_int + var_39_int;
	@@var_37_object:SetProperty(var_38_string, var_42_int);
	return 2;
}


func_1971()
{
	SetVariable("ooRatsManager1", (int)1);
	return 0;
}


func_1716(var_219_bool)
{
	var_220_bool = 0; var_221_bool = 0;
	IsLoaded(var_221_bool);
	var_221_bool = var_219_bool;
	return 2;
}


func_1846(var_143_int, var_144_int, var_145_int, var_146_int)
{
	var_147_bool = var_144_int < var_145_int;
	if(var_147_bool != 0) {
		var_148_bool = var_144_int < var_146_int;
		if(var_148_bool != 0) {
			var_143_int = 0;
		} else {
			var_143_int = 2;
	}
		var_149_bool = var_145_int < var_146_int;
		if(var_149_bool != 0) {
			var_143_int = 1;
		} else {
			var_143_int = 2;
		}
		return 0;
	}
	return 0;
	
}


func_438(var_0_object, var_25_int, var_26_object)
{
	var_28_object = Obj(); var_29_bool = 0; var_30_int = 0; var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0; var_34_int = 0; var_35_bool = 0;
	var_0_object = var_26_object;
	var_36_bool = 0; var_37_object = Obj(); var_38_float = 0;
	var_26_object = var_37_object;
	func_1721(var_36_bool, var_37_object, (float)70.0);
	var_83_bool = var_36_bool == 0; //@nz
	if(var_83_bool != 0) {
		var_25_int = -2;
		return 8;
	}
	CreateDialog(var_32_object);
	var_84_int = 0;
	func_2087(var_84_int);
	@@var_32_object:SetNPCName(var_84_int);
	var_85_int = 0;
	func_2085(var_85_int);
	@@var_32_object:SetNPCDescription(var_85_int);
	var_86_string = "";
	func_2089(var_86_string);
	@@var_32_object:SetPhoto(var_86_string);
	var_87_string = "";
	func_2091(var_87_string);
	@@var_32_object:SetPhoto2(var_87_string);
	var_88_int = 0;
	func_2062(var_88_int);
	@@var_32_object:SetPlayerName(var_88_int);
	IsOverrideActive(var_33_bool);
	var_96_bool = var_33_bool;
	if(var_96_bool != 0) {
		var_25_int = -2;
		return 8;
	}
	DoDialog(var_32_object);
	var_97_object = Obj(); var_98_object = Obj();
	var_26_object = var_97_object;
	var_32_object = var_98_object;
	TaskCall(5);
	func_512(var_99_object, var_100_object, var_101_string, var_102_bool, var_97_object, var_98_object);
	TaskReturn();
	@@var_32_object:IsDialogEnd(var_35_bool);
	
Label_494:
	var_146_bool = var_35_bool == 0; //@nz
	if(var_146_bool != 0) {
		sync();
		@@var_32_object:IsDialogEnd(var_35_bool);
		goto Label_494;
	}
	var_26_object = Obj();
	func_1790();
	StopDialog(var_32_object);
	@@var_32_object:GetReturnValue((int)-1);
	var_34_int = var_25_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1721(var_36_bool, var_37_object, var_38_float)
{
	var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_bool = 0; var_56_bool = 0;
	@@var_37_object:GetPosition(var_49_cvector);
	@@var_37_object:GetEyesHeight(var_48_float);
	var_57_float = GetByIndex(var_49_cvector, 1);
	var_57_float = var_57_float + var_48_float;
	SetByIndex(var_49_cvector, 1) = var_57_float;
	GetPosition(var_50_cvector);
	GetEyesHeight(var_48_float);
	var_58_float = GetByIndex(var_50_cvector, 1);
	var_58_float = var_58_float + var_48_float;
	SetByIndex(var_50_cvector, 1) = var_58_float;
	var_51_cvector = var_49_cvector - var_50_cvector;
	var_59_float = GetByIndex(var_51_cvector, 1);
	SetByIndex(var_51_cvector, 1) = (float)0;
	var_60_int = var_51_cvector | var_51_cvector;
	var_61_float = sqrt(var_60_int);
	var_51_cvector = var_51_cvector / var_61_float;
	var_52_cvector = -var_51_cvector;
	var_62_float = var_51_cvector * var_38_float;
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0);
	var_64_cvector = var_52_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1876(var_63_cvector, var_64_cvector);
	var_72_float = var_63_cvector * (int)25;
	var_73_int = var_62_float + var_72_float;
	var_53_cvector = var_73_int - CVector(0.0, 10.0, 0.0);
	var_54_cvector = var_50_cvector + var_53_cvector;
	IsOverrideActive(var_55_bool);
	var_75_bool = var_55_bool;
	if(var_75_bool != 0) {
		var_36_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_54_cvector, var_52_cvector, (bool)1);
	var_77_float = GetByIndex(var_53_cvector, 0);
	var_78_float = GetByIndex(var_53_cvector, 2);
	Rotate(var_77_float, var_78_float);
	var_79_bool = 0;
	func_2093(var_79_bool);
	if(var_79_bool != 0) {
	} else {
		HasAnimationTrack(var_56_bool, "head");
		var_81_bool = var_56_bool;
		if(var_81_bool == 0) goto Label_1784;
		LookAsyncCamera("head");
	}
Label_1784:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_36_bool = 1;
	return 18;
	
}


func_1977(var_30_object)
{
	Trace("money500 is given");
	var_33_object = Obj(); var_34_int = 0;
	var_30_object = var_33_object;
	func_1940(var_33_object, (int)500);
	return 0;
}


func_570(var_2_object, var_104_string)
{
	var_105_bool = 0;
	func_2093(var_105_bool);
	var_106_bool = var_105_bool == 0; //@nz
	if(var_106_bool != 0) {
		return 0;
	}
	var_107_bool = var_104_string == var_2_object;
	if(var_107_bool != 0) {
		return 0;
	}
	var_108_string = ""; var_109_bool = 0;
	var_104_string = var_108_string;
	var_111_bool = var_104_string == "";
	if(var_111_bool != 0) {
		var_109_bool = 0;
	} else {
		var_109_bool = 1;
	}
	func_1824(var_108_string, var_109_bool);
	var_2_object = var_104_string;
	return 0;
	
}


func_1987()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_708(var_0_object, var_1_object, var_2_object, var_3_string, var_272_object, var_273_object)
{
	var_0_object = var_273_object;
	var_1_object = var_272_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_279_bool = 0; var_280_object = Obj();
		var_280_object = var_1_object;
		func_2050(var_280_object);
		if(var_279_bool != 0) {
			var_285_object = Obj(); var_286_object = Obj();
			var_285_object = var_1_object;
			var_286_object = var_0_object;
			func_1971();
			var_289_string = "";
			func_836(var_273_object, "Neutral");
			@@@var_0_object:SetMessage((int)520073);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520074, (int)21255, (int)21254);
			var_301_bool = 0; var_302_object = Obj();
			var_302_object = var_1_object;
			func_2005(var_302_object);
			if(var_301_bool != 0) {
				@@@var_0_object:AddReply((int)520085, (int)21266, (int)21265);
			}
			var_306_bool = 0; var_307_object = Obj();
			var_307_object = var_1_object;
			func_2017(var_307_object);
			if(var_306_bool != 0) {
				@@@var_0_object:AddReply((int)541546, (int)43710, (int)43709);
			}
			var_315_bool = 0; var_316_object = Obj();
			var_316_object = var_1_object;
			func_1993(var_316_object);
			if(var_315_bool != 0) {
				@@@var_0_object:AddReply((int)541549, (int)21255, (int)43713);
			}
		} else {
				var_332_string = "";
				func_836(var_273_object, "Neutral");
				@@@var_0_object:SetMessage((int)520088);
				@@@var_0_object:ClearReplies();
				var_334_bool = 0; var_335_object = Obj();
				var_335_object = var_1_object;
				func_2029(var_334_bool, var_335_object);
				if(var_334_bool != 0) {
					@@@var_0_object:AddReply((int)520089, (int)-1, (int)21270);
				}
				@@@var_0_object:AddReply((int)520090, (int)21272, (int)21271);
				@@@var_0_object:AddReply((int)520092, (int)21274, (int)21273);
				@@@var_0_object:AddReply((int)520095, (int)-1, (int)21277);
				goto Label_806;
		}
	}
Label_806:
	var_324_bool = 0;
	func_2093(var_324_bool);
	if(var_324_bool != 0) {

	Label_810:
		lshWaitForAnimEnd();
		var_325_string = var_3_string;
		if(var_325_string != 0) {
		} else {
			var_326_string = "";
			var_326_string = var_2_object;
			func_1808(var_326_string);
			goto Label_810;
	}
		PlayAnimation("all", "idle");

	Label_825:
		WaitForAnimEnd();
		var_329_string = var_3_string;
		if(var_329_string != 0) {
			goto Label_835;
		}
		PlayAnimation("all", "idle");
		goto Label_825;

	}
	goto Label_835;
	
Label_835:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x2c8";


func_836(var_2_object, var_289_string)
{
	var_290_bool = 0;
	func_2093(var_290_bool);
	var_291_bool = var_290_bool == 0; //@nz
	if(var_291_bool != 0) {
		return 0;
	}
	var_292_bool = var_289_string == var_2_object;
	if(var_292_bool != 0) {
		return 0;
	}
	var_293_string = ""; var_294_bool = 0;
	var_289_string = var_293_string;
	var_296_bool = var_289_string == "";
	if(var_296_bool != 0) {
		var_294_bool = 0;
	} else {
		var_294_bool = 1;
	}
	func_1824(var_293_string, var_294_bool);
	var_2_object = var_289_string;
	return 0;
	
}


func_1605(var_77_int, var_78_object)
{
	var_79_int = 0; var_80_int = 0; var_81_bool = 0; var_82_bool = 0; var_83_int = 0; var_84_int = 0; var_85_int = 0; var_86_bool = 0; var_87_bool = 0; var_88_int = 0;
	var_84_int = 0;
	
Label_1610:
	var_89_bool = 0;
	var_89_bool = 1;
	var_90_bool = (bool)1;
	if(var_90_bool != 1) {
		var_91_bool = var_84_int == 0; //@nz
		if(var_91_bool != 1) {
			var_89_bool = 0;
		}
	}
	if(var_89_bool != 0) {
		irand(var_88_int, (int)3);
		var_88_int = var_88_int + (int)1;
	} else {
			var_107_bool = 0; var_108_float = 0;
			func_1894(var_107_bool, (float)0.6666666865348816);
			if(var_107_bool != 0) {
				irand(var_88_int, (int)3);
				var_88_int = var_88_int + (int)1;
				goto Label_1659;
			}
			var_113_bool = 0;
			var_113_bool = 0;
			var_114_bool = (bool)0 == 0; //@nz
			if(var_114_bool != 0) {
				var_115_bool = 0; var_116_float = 0;
				func_1894(var_115_bool, (float)0.5);
				if(var_115_bool != 0) {
					var_113_bool = 1;
				}
			}
			if(var_113_bool != 0) {
				var_88_int = 0;
				goto Label_1659;
			}
			irand(var_88_int, (int)2);
			var_119_int = var_88_int + (int)1;
			var_88_int = -var_119_int;
			var_120_int = var_84_int + var_88_int;
			var_122_bool = var_120_int < (int)0;
			if(var_122_bool == 0) goto Label_1659;
			goto Label_1684;
	}
Label_1659:
	var_84_int = var_84_int + var_88_int;
	var_95_bool = var_84_int >= (int)12;
	if(var_95_bool != 0) {
		var_97_int = var_84_int - (int)12;
		var_98_int = var_88_int - var_97_int;
		(int)0 = (int)0 + var_98_int;
		goto Label_1685;
	EMIT "GOTO 0x694";

	Label_1685:
		var_85_int = var_77_int;
		return 10;
	}
	var_99_int = var_88_int;
	if(var_99_int != 0) {
		var_100_int = 0; var_101_int = 0;
		var_88_int = var_101_int;
		func_1886(var_100_int, var_101_int);
	} else {
		var_106_int = 1;

	}
	var_85_int = var_85_int + var_100_int;
	@@var_78_object:add(var_84_int);
	var_87_bool = var_88_int == (int)0;
	var_86_bool = var_88_int < (int)0;
	
Label_1684:
	goto Label_1610;
	
}


func_1861(var_205_int, var_206_int, var_207_int, var_208_int)
{
	var_209_bool = var_206_int > var_207_int;
	if(var_209_bool != 0) {
		var_210_bool = var_206_int > var_208_int;
		if(var_210_bool != 0) {
			var_205_int = 0;
		} else {
			var_205_int = 2;
	}
		var_211_bool = var_207_int > var_208_int;
		if(var_211_bool != 0) {
			var_205_int = 1;
		} else {
			var_205_int = 2;
		}
		return 0;
	}
	return 0;
	
}


func_1993(var_315_bool)
{
	var_317_int = 0; var_318_string = "";
	func_1905(var_317_int, "branch");
	var_320_bool = var_317_int == (int)0;
	if(var_320_bool != 0) {
		var_315_bool = 1;
		return 0;
	}
	var_315_bool = 0;
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_219_object, var_220_object)
{
	var_0_object = var_220_object;
	var_1_object = var_219_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_226_string = "";
		func_132(var_220_object, "Neutral");
		@@@var_0_object:SetMessage((int)520060);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)520061, (int)-1, (int)21241);
		@@@var_0_object:AddReply((int)520062, (int)-1, (int)21242);
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	var_241_bool = 0;
	func_2093(var_241_bool);
	if(var_241_bool != 0) {

	Label_106:
		lshWaitForAnimEnd();
		var_242_string = var_3_string;
		if(var_242_string != 0) {
		} else {
			var_243_string = "";
			var_243_string = var_2_object;
			func_1808(var_243_string);
			goto Label_106;
	}
		PlayAnimation("all", "idle");

	Label_121:
		WaitForAnimEnd();
		var_246_string = var_3_string;
		if(var_246_string != 0) {
			goto Label_131;
		}
		PlayAnimation("all", "idle");
		goto Label_121;
	}
	goto Label_131;
	
Label_131:
	return 0;
	
}


func_1876(var_63_cvector, var_64_cvector)
{
	var_66_float = 0; var_67_float = 0;
	var_68_int = var_64_cvector | var_64_cvector;
	var_67_float = sqrt(var_68_int);
	var_69_float = 9.999999974752427e-07;
	var_70_bool = var_67_float < var_69_float;
	if(var_70_bool != 0) {
		var_63_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_63_cvector = var_64_cvector / var_67_float;
	return 2;
}


func_2005(var_152_bool)
{
	var_154_int = 0; var_155_string = "";
	func_1905(var_154_int, "branch");
	var_159_bool = var_154_int == (int)1;
	if(var_159_bool != 0) {
		var_152_bool = 1;
		return 0;
	}
	var_152_bool = 0;
	return 0;
}


func_1371(var_51_string, var_52_float)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_object = Obj(); var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_object = Obj(); var_61_object = Obj(); var_62_object = Obj(); var_63_object = Obj(); var_64_int = 0; var_65_object = Obj(); var_66_object = Obj(); var_67_object = Obj(); var_68_int = 0; var_69_int = 0; var_70_int = 0; var_71_int = 0; var_72_object = Obj(); var_73_object = Obj(); var_74_object = Obj(); var_75_object = Obj(); var_76_int = 0;
	CreateIntVector(var_65_object);
	CreateIntVector(var_66_object);
	CreateIntVector(var_67_object);
	
Label_1378:
	var_77_int = 0; var_78_object = Obj();
	var_65_object = var_78_object;
	func_1605(var_77_int, var_78_object);
	var_77_int = var_68_int;
	var_124_bool = var_68_int > (int)72;
	if(var_124_bool != 0) {
	} else {
		var_125_int = 0; var_126_object = Obj();
		var_66_object = var_126_object;
		func_1605(var_125_int, var_126_object);
		var_125_int = var_69_int;
		var_128_bool = var_69_int > (int)72;
		if(var_128_bool != 0) {
			goto Label_1420;
		}
		var_129_int = 0; var_130_object = Obj();
		var_67_object = var_130_object;
		func_1605(var_129_int, var_130_object);
		var_129_int = var_70_int;
		var_132_bool = var_70_int > (int)72;
		if(var_132_bool != 0) {
			goto Label_1420;
		}
		var_133_bool = 0;
		var_133_bool = 0;
		var_134_bool = 0;
		var_134_bool = 0;
		var_135_bool = var_68_int != var_69_int;
		if(var_135_bool != 0) {
			var_136_bool = var_68_int != var_70_int;
			if(var_136_bool != 0) {
				var_134_bool = 1;
			}
		}
		if(var_134_bool != 0) {
			var_137_bool = var_69_int != var_70_int;
			if(var_137_bool != 0) {
				var_133_bool = 1;
			}
		}
		if(var_133_bool != 0) {
		} else {
		goto Label_1378;
		}
		var_138_bool = 0; var_139_float = 0;
		var_142_float = var_52_float * (float)0.4000000059604645;
		var_139_float = (float)0.10000000149011612 + var_142_float;
		func_1894(var_138_bool, var_139_float);
		if(var_138_bool != 0) {
			var_143_int = 0; var_144_int = 0; var_145_int = 0; var_146_int = 0;
			var_68_int = var_144_int;
			var_69_int = var_145_int;
			var_70_int = var_146_int;
			func_1846(var_143_int, var_144_int, var_145_int, var_146_int);
			var_143_int = var_71_int;
			Trace("winner");
		} else {
				var_205_int = 0; var_206_int = 0; var_207_int = 0; var_208_int = 0;
				var_68_int = var_206_int;
				var_69_int = var_207_int;
				var_70_int = var_208_int;
				func_1861(var_205_int, var_206_int, var_207_int, var_208_int);
				var_205_int = var_71_int;
				Trace("looser");
		}
		var_152_bool = var_71_int == (int)1;
		if(var_152_bool != 0) {
			var_65_object = var_72_object;
			var_66_object = var_65_object;
			var_72_object = var_66_object;
			var_72_object = 0;
		} else {
			var_204_bool = var_71_int == (int)2;
			if(var_204_bool == 0) goto Label_1465;
			var_65_object = var_73_object;
			var_67_object = var_65_object;
			var_73_object = var_67_object;
			var_73_object = 0;

		}
	Label_1465:
		GetScene(var_74_object);
		var_153_object = Obj(); var_154_object = Obj(); var_155_string = ""; var_156_string = ""; var_157_string = "";
		var_74_object = var_154_object;
		var_51_string = var_156_string;
		func_1910(var_153_object, var_154_object, "pt_rat1", var_156_string, "rat_race.xml");
		var_153_object = var_75_object;
		@@var_75_object:SetScriptProperty("Index", (int)1);
		@@var_75_object:SetScriptProperty("Race", var_65_object);
		var_174_object = Obj(); var_175_object = Obj(); var_176_string = ""; var_177_string = ""; var_178_string = "";
		var_74_object = var_175_object;
		func_1910(var_174_object, var_175_object, "pt_rat2", "pers_rat", "rat_race.xml");
		var_174_object = var_75_object;
		@@var_75_object:SetScriptProperty("Index", (int)2);
		@@var_75_object:SetScriptProperty("Race", var_66_object);
		var_182_object = Obj(); var_183_object = Obj(); var_184_string = ""; var_185_string = ""; var_186_string = "";
		var_74_object = var_183_object;
		func_1910(var_182_object, var_183_object, "pt_rat3", "pers_rat", "rat_race.xml");
		var_182_object = var_75_object;
		@@var_75_object:SetScriptProperty("Index", (int)3);
		@@var_75_object:SetScriptProperty("Race", var_67_object);

	Label_1513:
		var_191_bool = (int)0 < (int)6;
		if(var_191_bool != 0) {
			var_192_int = 0; var_193_bool = 0;
			var_76_int = var_192_int;
			func_1687(var_192_int, (bool)1);
			var_76_int = var_76_int + (int)1;
			goto Label_1513;
		}
		return 24;
	}
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-10] = 0";
EMIT "Stack[-11] = 0";
EMIT "Stack[-12] = 0";


func_222(var_0_object, var_55_int, var_56_object)
{
	var_58_object = Obj(); var_59_bool = 0; var_60_int = 0; var_61_bool = 0; var_62_object = Obj(); var_63_bool = 0; var_64_int = 0; var_65_bool = 0;
	var_0_object = var_56_object;
	var_66_bool = 0; var_67_object = Obj(); var_68_float = 0;
	var_56_object = var_67_object;
	func_1721(var_66_bool, var_67_object, (float)70.0);
	var_113_bool = var_66_bool == 0; //@nz
	if(var_113_bool != 0) {
		var_55_int = -2;
		return 8;
	}
	CreateDialog(var_62_object);
	var_114_int = 0;
	func_2087(var_114_int);
	@@var_62_object:SetNPCName(var_114_int);
	var_115_int = 0;
	func_2085(var_115_int);
	@@var_62_object:SetNPCDescription(var_115_int);
	var_116_string = "";
	func_2089(var_116_string);
	@@var_62_object:SetPhoto(var_116_string);
	var_117_string = "";
	func_2091(var_117_string);
	@@var_62_object:SetPhoto2(var_117_string);
	var_118_int = 0;
	func_2062(var_118_int);
	@@var_62_object:SetPlayerName(var_118_int);
	IsOverrideActive(var_63_bool);
	var_126_bool = var_63_bool;
	if(var_126_bool != 0) {
		var_55_int = -2;
		return 8;
	}
	DoDialog(var_62_object);
	var_127_object = Obj(); var_128_object = Obj();
	var_56_object = var_127_object;
	var_62_object = var_128_object;
	TaskCall(3);
	func_296(var_129_object, var_130_object, var_131_string, var_132_bool, var_127_object, var_128_object);
	TaskReturn();
	@@var_62_object:IsDialogEnd(var_65_bool);
	
Label_278:
	var_187_bool = var_65_bool == 0; //@nz
	if(var_187_bool != 0) {
		sync();
		@@var_62_object:IsDialogEnd(var_65_bool);
		goto Label_278;
	}
	var_56_object = Obj();
	func_1790();
	StopDialog(var_62_object);
	@@var_62_object:GetReturnValue((int)-1);
	var_64_int = var_55_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1886(var_100_int, var_101_int)
{
	var_103_bool = var_101_int < (int)0;
	if(var_103_bool != 0) {
		var_100_int = -var_101_int;
	} else {
		var_101_int = var_100_int;
	}
	return 0;
	
}


func_2017(var_306_bool)
{
	var_308_int = 0; var_309_string = "";
	func_1905(var_308_int, "branch");
	var_311_bool = var_308_int == (int)2;
	if(var_311_bool != 0) {
		var_306_bool = 1;
		return 0;
	}
	var_306_bool = 0;
	return 0;
}


func_1894(var_107_bool, var_108_float)
{
	var_109_float = 0; var_110_float = 0;
	rand(var_110_float);
	var_107_bool = var_110_float < var_108_float;
	return 2;
}


func_1899(var_363_object)
{
	var_364_object = Obj(); var_365_object = Obj();
	CreateObjectVector(var_365_object);
	var_365_object = var_363_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_364(var_2_object, var_134_string)
{
	var_135_bool = 0;
	func_2093(var_135_bool);
	var_136_bool = var_135_bool == 0; //@nz
	if(var_136_bool != 0) {
		return 0;
	}
	var_137_bool = var_134_string == var_2_object;
	if(var_137_bool != 0) {
		return 0;
	}
	var_138_string = ""; var_139_bool = 0;
	var_134_string = var_138_string;
	var_141_bool = var_134_string == "";
	if(var_141_bool != 0) {
		var_139_bool = 0;
	} else {
		var_139_bool = 1;
	}
	func_1824(var_138_string, var_139_bool);
	var_2_object = var_134_string;
	return 0;
	
}


func_2029(var_334_bool, var_335_object)
{
	var_336_bool = 0;
	var_336_bool = 1;
	var_337_bool = 0; var_338_object = Obj(); var_339_string = "";
	var_335_object = var_338_object;
	func_1959(var_337_bool, var_338_object, "rat");
	if(var_337_bool != 1) {
		var_344_bool = 0; var_345_object = Obj(); var_346_string = "";
		var_335_object = var_345_object;
		func_1959(var_344_bool, var_345_object, "rat_big");
		if(var_344_bool != 1) {
			var_336_bool = 0;
		}
	}
	if(var_336_bool != 0) {
		var_334_bool = 1;
		return 0;
	}
	var_334_bool = 0;
	return 0;
}


func_1905(var_154_int, var_155_string)
{
	var_156_int = 0; var_157_int = 0;
	GetVariable(var_155_string, var_157_int);
	var_157_int = var_154_int;
	return 2;
}


func_1910(var_153_object, var_154_object, var_155_string, var_156_string, var_157_string)
{
	var_158_bool = 0; var_159_cvector = CVector(0,0,0); var_160_cvector = CVector(0,0,0); var_161_object = Obj(); var_162_bool = 0; var_163_cvector = CVector(0,0,0); var_164_cvector = CVector(0,0,0); var_165_object = Obj();
	@@var_154_object:GetLocator(var_155_string, var_162_bool, var_163_cvector, var_164_cvector);
	var_166_bool = var_162_bool == 0; //@nz
	if(var_166_bool != 0) {
		var_168_int = "Locator " + var_155_string;
		var_170_int = var_168_int + " doesn't exist";
		Trace(var_170_int);
	} else {
		AddActor(Obj(), var_156_string, var_154_object, var_163_cvector, var_164_cvector, var_157_string);
	}
	var_165_object = var_153_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_634(var_0_object, var_251_int, var_252_object)
{
	var_254_object = Obj(); var_255_bool = 0; var_256_int = 0; var_257_bool = 0; var_258_object = Obj(); var_259_bool = 0; var_260_int = 0; var_261_bool = 0;
	var_0_object = var_252_object;
	var_262_bool = 0; var_263_object = Obj(); var_264_float = 0;
	var_252_object = var_263_object;
	func_1721(var_262_bool, var_263_object, (float)70.0);
	var_265_bool = var_262_bool == 0; //@nz
	if(var_265_bool != 0) {
		var_251_int = -2;
		return 8;
	}
	CreateDialog(var_258_object);
	var_266_int = 0;
	func_2087(var_266_int);
	@@var_258_object:SetNPCName(var_266_int);
	var_267_int = 0;
	func_2085(var_267_int);
	@@var_258_object:SetNPCDescription(var_267_int);
	var_268_string = "";
	func_2089(var_268_string);
	@@var_258_object:SetPhoto(var_268_string);
	var_269_string = "";
	func_2091(var_269_string);
	@@var_258_object:SetPhoto2(var_269_string);
	var_270_int = 0;
	func_2062(var_270_int);
	@@var_258_object:SetPlayerName(var_270_int);
	IsOverrideActive(var_259_bool);
	var_271_bool = var_259_bool;
	if(var_271_bool != 0) {
		var_251_int = -2;
		return 8;
	}
	DoDialog(var_258_object);
	var_272_object = Obj(); var_273_object = Obj();
	var_252_object = var_272_object;
	var_258_object = var_273_object;
	TaskCall(7);
	func_708(var_274_object, var_275_object, var_276_string, var_277_bool, var_272_object, var_273_object);
	TaskReturn();
	@@var_258_object:IsDialogEnd(var_261_bool);
	
Label_690:
	var_359_bool = var_261_bool == 0; //@nz
	if(var_359_bool != 0) {
		sync();
		@@var_258_object:IsDialogEnd(var_261_bool);
		goto Label_690;
	}
	var_252_object = Obj();
	func_1790();
	StopDialog(var_258_object);
	@@var_258_object:GetReturnValue((int)-1);
	var_260_int = var_251_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1790()
{
	var_148_bool = 0; var_149_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_151_bool = 0;
	func_2093(var_151_bool);
	if(var_151_bool != 0) {
	} else {
		HasAnimationTrack(var_149_bool, "head");
		var_153_bool = var_149_bool;
		if(var_153_bool == 0) goto Label_1807;
		UnlookAsync("head");
	}
Label_1807:
	return 2;
	
}


