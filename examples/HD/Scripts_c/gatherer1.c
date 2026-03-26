// @IMPORTS: DoTrade/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,StopTrade/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,self/1,GetVariable/2,GetInvItemByName/2,GetGameTime/1,HasAnimation/3,SetVariable/2,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1,ClearSubContainer/1,AddItem/4
// @STRINGS: W:Neutral|W:all|W:idle|A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:cleanup|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |A:HasItem|W:Gatherer1_|W:blood|A:RemoveItemByType|W:ookGatherer1|W:k2q04MorlokGotoAndrei|W:pt_map_andrei|A:AddMark|W:oobSysGatherer1_1|W:playsound|W:giveitem|A:SetReturnValue|W:k2q04|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:grass_black_tvir|W:grass_blood_tvir|W:grass_brown_tvir|W:branch|W:ui/NPC_Morlok.png|W:ui/NPC_Morlok_b.png
// @RUN_OP: 0x3d4
// @RUN_TASK: 5
// @TASK_0: vars=bool params=1
// @EVENT_11: op=0x1a vars=int
// @TASK_1: vars=object params=2
// @TASK_2: vars=object,object,string,bool params=2
// @EVENT_11: op=0x10e vars=int,int
// @TASK_3: vars=object params=2
// @TASK_4: vars=object,object,string,bool params=2
// @EVENT_11: op=0x2d8 vars=int,int
// @TASK_5: vars=int,int,bool,bool,object,bool,bool,int params=0
// @EVENT_0: op=0x3e1 vars=object
// @EVENT_5: op=0x418 vars=
// @EVENT_26: op=0x44b vars=string
// @EVENT_6: op=0x453 vars=
// @EVENT_7: op=0x494 vars=int
// @PE: 0x0,0x1a,0x72,0xf8,0x10e,0x275,0x2c2,0x2d8,0x44b,0x46a,0x494,0x4ab,0x5a3,0x62a,0x643,0x649,0x64f,0x654,0x660,0x66c,0x678,0x683

task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_int, var_13_int, var_14_bool, var_15_bool, var_16_object, var_17_bool, var_18_bool, var_19_int)
{
	var_20_bool = 0;
	func_1837(var_20_bool);
	if(var_20_bool != 0) {
		lshStopAnimation();
	} else {
		StopAnimation();
	}
	StopTrade();
	var_0_bool = true;
	return 0;
	
}


task_2_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_int, var_14_int, var_15_bool, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_int)
{
	if((int)1 != 0) {
		func_1490();
		var_24_bool = var_20_int == (int)19266;
		if(var_24_bool != 0) {
			var_25_object = Obj(); var_26_object = Obj();
			var_25_object = var_1_object;
			var_26_object = var_0_bool;
			func_1563(var_26_object);
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_bool;
			func_1609();
		}
		var_47_bool = var_20_int == (int)19269;
		if(var_47_bool != 0) {
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_bool;
			func_1615(var_49_object);
		}
		var_52_bool = var_20_int == (int)19312;
		if(var_52_bool != 0) {
			var_53_object = Obj(); var_54_object = Obj();
			var_53_object = var_1_object;
			var_54_object = var_0_bool;
			func_1603();
		}
		var_58_bool = var_19_bool == (int)19258;
		if(var_58_bool != 0) {
			var_59_bool = 0;
			var_59_bool = 0;
			var_60_bool = 0; var_61_object = Obj();
			var_61_object = var_1_object;
			func_1667(var_60_bool, var_61_object);
			var_72_bool = var_60_bool == 0; //@nz
			if(var_72_bool != 0) {
				var_73_bool = 0; var_74_object = Obj();
				var_74_object = var_1_object;
				func_1656(var_73_bool, var_74_object);
				var_82_bool = var_73_bool == 0; //@nz
				if(var_82_bool != 0) {
					var_59_bool = 1;
				}
			}
			if(var_59_bool != 0) {
				var_83_string = "";
				func_248(var_20_int, "Neutral");
				@@@var_0_bool:SetMessage((int)518145);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)518146, (int)19260, (int)19259);
				@@@var_0_bool:AddReply((int)529952, (int)-1, (int)31336);
				return 0;
			}
			var_107_bool = 0;
			var_107_bool = 0;
			var_108_bool = 0; var_109_object = Obj();
			var_109_object = var_1_object;
			func_1656(var_108_bool, var_109_object);
			if(var_108_bool != 0) {
				var_110_bool = 0; var_111_object = Obj();
				var_111_object = var_1_object;
				func_1667(var_110_bool, var_111_object);
				var_112_bool = var_110_bool == 0; //@nz
				if(var_112_bool != 0) {
					var_107_bool = 1;
				}
			}
			if(var_107_bool != 0) {
				var_113_string = "";
				func_248(var_20_int, "Neutral");
				@@@var_0_bool:SetMessage((int)518150);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)518151, (int)19265, (int)19264);
				return 0;
			}
			var_118_string = "";
			func_248(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)518155);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)518156, (int)-1, (int)19269);
			var_123_bool = 0; var_124_object = Obj();
			var_124_object = var_1_object;
			func_1644(var_124_object);
			if(var_123_bool != 0) {
				@@@var_0_bool:AddReply((int)518199, (int)19313, (int)19312);
			}
			@@@var_0_bool:AddReply((int)518157, (int)-1, (int)19270);
			return 0;
		}
		var_138_bool = var_19_bool == (int)19313;
		if(var_138_bool != 0) {
			var_139_string = "";
			func_248(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)518200);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)534598, (int)36237, (int)36236);
			@@@var_0_bool:AddReply((int)518201, (int)-1, (int)19314);
			return 0;
		}
		var_148_bool = var_19_bool == (int)36237;
		if(var_148_bool != 0) {
			var_149_string = "";
			func_248(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)534599);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)534600, (int)-1, (int)36238);
			@@@var_0_bool:AddReply((int)534601, (int)36240, (int)36239);
			return 0;
		}
		var_158_bool = var_19_bool == (int)36240;
		if(var_158_bool != 0) {
			var_159_string = "";
			func_248(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)534602);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)534603, (int)-1, (int)36241);
			@@@var_0_bool:AddReply((int)534604, (int)-1, (int)36242);
			return 0;
		}
		var_168_bool = var_19_bool == (int)19265;
		if(var_168_bool != 0) {
			var_169_string = "";
			func_248(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)518152);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)518153, (int)-1, (int)19266);
			@@@var_0_bool:AddReply((int)518154, (int)-1, (int)19267);
			return 0;
		}
		var_178_bool = var_19_bool == (int)19260;
		if(var_178_bool != 0) {
			var_179_string = "";
			func_248(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)518147);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)529953, (int)31339, (int)31337);
			@@@var_0_bool:AddReply((int)529954, (int)-1, (int)31338);
			return 0;
		}
		var_188_bool = var_19_bool == (int)31339;
		if(var_188_bool != 0) {
			var_189_string = "";
			func_248(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)529955);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)518148, (int)-1, (int)19261);
			@@@var_0_bool:AddReply((int)518162, (int)-1, (int)19275);
			return 0;
		}
		var_3_object = true;
		var_197_bool = 0;
		func_1837(var_197_bool);
		if(var_197_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x10f";
	
}


task_4_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_int, var_14_int, var_15_bool, var_16_bool, var_17_object, var_18_bool, var_19_bool, var_20_int)
{
	if((int)1 != 0) {
		func_1490();
		var_24_bool = var_20_int == (int)26755;
		if(var_24_bool != 0) {
			var_25_object = Obj(); var_26_object = Obj();
			var_25_object = var_1_object;
			var_26_object = var_0_bool;
			func_1578();
		}
		var_30_bool = var_20_int == (int)40957;
		if(var_30_bool != 0) {
			var_31_object = Obj(); var_32_object = Obj();
			var_31_object = var_1_object;
			var_32_object = var_0_bool;
			func_1584();
		}
		var_73_bool = var_20_int == (int)40958;
		if(var_73_bool != 0) {
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_bool;
			func_1584();
		}
		var_77_bool = var_20_int == (int)40959;
		if(var_77_bool != 0) {
			var_78_object = Obj(); var_79_object = Obj();
			var_78_object = var_1_object;
			var_79_object = var_0_bool;
			func_1584();
		}
		var_81_bool = var_20_int == (int)26757;
		if(var_81_bool != 0) {
			var_82_object = Obj(); var_83_object = Obj();
			var_82_object = var_1_object;
			var_83_object = var_0_bool;
			func_1584();
		}
		var_85_bool = var_19_bool == (int)26753;
		if(var_85_bool != 0) {
			var_86_string = "";
			func_706(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)525385);
			@@@var_0_bool:ClearReplies();
			var_104_bool = 0;
			var_104_bool = 0;
			var_105_bool = 0; var_106_object = Obj();
			var_106_object = var_1_object;
			func_1620(var_106_object);
			if(var_105_bool != 0) {
				var_113_bool = 0; var_114_object = Obj();
				var_114_object = var_1_object;
				func_1632(var_114_object);
				if(var_113_bool != 0) {
					var_104_bool = 1;
				}
			}
			if(var_104_bool != 0) {
				@@@var_0_bool:AddReply((int)525387, (int)40946, (int)26755);
			}
			@@@var_0_bool:AddReply((int)539023, (int)-1, (int)40966);
			@@@var_0_bool:AddReply((int)539024, (int)-1, (int)40967);
			return 0;
		}
		var_129_bool = var_19_bool == (int)40946;
		if(var_129_bool != 0) {
			var_130_string = "";
			func_706(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)539004);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)539005, (int)40948, (int)40947);
			@@@var_0_bool:AddReply((int)539022, (int)40948, (int)40964);
			return 0;
		}
		var_139_bool = var_19_bool == (int)40948;
		if(var_139_bool != 0) {
			var_140_string = "";
			func_706(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)539006);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)539007, (int)40950, (int)40949);
			return 0;
		}
		var_146_bool = var_19_bool == (int)40950;
		if(var_146_bool != 0) {
			var_147_string = "";
			func_706(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)539008);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)539009, (int)40952, (int)40951);
			@@@var_0_bool:AddReply((int)539021, (int)-1, (int)40963);
			return 0;
		}
		var_156_bool = var_19_bool == (int)40952;
		if(var_156_bool != 0) {
			var_157_string = "";
			func_706(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)539010);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)539011, (int)40954, (int)40953);
			@@@var_0_bool:AddReply((int)539018, (int)40961, (int)40960);
			return 0;
		}
		var_166_bool = var_19_bool == (int)40961;
		if(var_166_bool != 0) {
			var_167_string = "";
			func_706(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)539019);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)525389, (int)-1, (int)26757);
			return 0;
		}
		var_173_bool = var_19_bool == (int)40954;
		if(var_173_bool != 0) {
			var_174_string = "";
			func_706(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)539012);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)539013, (int)40956, (int)40955);
			@@@var_0_bool:AddReply((int)539017, (int)-1, (int)40959);
			return 0;
		}
		var_183_bool = var_19_bool == (int)40956;
		if(var_183_bool != 0) {
			var_184_string = "";
			func_706(var_20_int, "Neutral");
			@@@var_0_bool:SetMessage((int)539014);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)539015, (int)-1, (int)40957);
			@@@var_0_bool:AddReply((int)539016, (int)-1, (int)40958);
			return 0;
		}
		var_3_object = true;
		var_192_bool = 0;
		func_1837(var_192_bool);
		if(var_192_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x2d9";
	
}


task_5_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_bool, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_int, var_19_object)
{
	var_20_int = 0; var_21_int = 0;
	func_1195(var_20_int, var_21_int);
	var_25_int = 0;
	func_1823(var_25_int);
	var_30_bool = var_25_int == (int)1;
	if(var_30_bool != 0) {
		var_31_int = 0; var_32_object = Obj();
		var_19_object = var_32_object;
		TaskCall(1);
		func_40(var_33_object, var_31_int, var_32_object);
		TaskReturn();
		var_33_object = var_21_int;
	} else {
		var_262_int = 0;
		func_1823(var_262_int);
		var_264_bool = var_262_int == (int)2;
		if(var_264_bool != 0) {
			var_265_int = 0; var_266_object = Obj();
			var_19_object = var_266_object;
			TaskCall(3);
			func_555(var_267_object, var_265_int, var_266_object);
			TaskReturn();
			var_267_object = var_21_int;
			goto Label_1026;
		}
		return 2;
	}
Label_1026:
	var_221_bool = (int)1000 == var_21_int;
	if(var_221_bool != 0) {
		var_222_bool = 0; var_223_object = Obj(); var_224_float = 0;
		var_19_object = var_223_object;
		func_1395(var_222_bool, var_223_object, (float)110.0);
		var_252_bool = var_222_bool == 0; //@nz
		if(var_252_bool != 0) {
			return 2;
		}
		var_253_object = Obj();
		var_19_object = var_253_object;
		TaskCall(0);
		func_0(var_253_object);
		TaskReturn();
		var_19_object = Obj();
		func_1443();
	}
	return 2;
	
}


task_5_event_5(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_bool, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_int)
{
	var_19_int = 0;
	func_1530(var_19_int);
	var_25_bool = var_7_object != var_19_int;
	if(var_25_bool != 0) {
		func_1760();
		var_48_int = 0;
		func_1530(var_48_int);
		var_7_object = var_48_int;
	}
	return 0;
}


task_5_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_bool, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_int, var_19_string)
{
	var_21_bool = var_19_string == "cleanup";
	if(var_21_bool != 0) {
		func_1079(var_19_string);
	}
	return 0;
}


task_5_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_bool, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_int)
{
	var_19_object = var_6_object;
	if(var_19_object != 0) {
		func_1195(var_17_bool, var_18_int);
	}
	var_23_bool = 0;
	var_23_bool = 0;
	var_24_bool = var_5_bool;
	if(var_24_bool != 0) {
		var_25_bool = 0;
		func_1128(var_25_bool);
		if(var_25_bool != 0) {
			var_23_bool = 1;
		}
	}
	if(var_23_bool != 0) {
		var_26_object = Obj();
		func_1497(var_26_object);
		RemoveActor(var_26_object);
	}
	return 0;
}


task_5_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_bool, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_int, var_19_int)
{
	var_21_bool = var_19_int == (int)10;
	if(var_21_bool != 0) {
		var_22_bool = 0;
		func_1157(var_17_bool, var_18_int, var_19_int, var_22_bool);
		if(var_22_bool != 0) {
			var_35_bool = var_2_object == 0; //@nz
			if(var_35_bool != 0) {
				var_36_object = Obj();
				var_36_object = var_4_string;
				func_1479(var_36_object);
				var_2_object = true;
			}
		} else {
			var_43_object = var_2_object;
			if(var_43_object == 0) goto Label_1194;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_1194:
	return 0;
	
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_bool, var_14_bool, var_15_object, var_16_bool, var_17_bool, var_18_int)
{
	var_19_int = 0;
	func_1530(var_19_int);
	var_7_object = var_19_int;
	func_1760();
	var_47_float = 0; var_48_float = 0;
	func_1061(var_18_int, (float)300, (float)100);
	return 0;
}


func_0(var_0_bool)
{
	DoTrade();
	var_0_bool = false;
	
Label_4:
	var_255_bool = 0;
	func_1837(var_255_bool);
	if(var_255_bool != 0) {
		var_256_string = "";
		func_1448("Neutral");
		lshWaitForAnimEnd();
	} else {
		WaitForAnimEnd();
		PlayAnimation("all", "idle");
	}
	var_257_bool = var_0_bool;
	if(var_257_bool != 0) {
		goto Label_4;
	}
	return 0;
	
}
EMIT "Return(); Pop(0)";


func_1539(var_87_string, var_88_int)
{
	var_89_string = ""; var_90_string = "";
	var_91_int = var_88_int;
	if(var_91_int != 0) {
		"idle" = "idle" + var_88_int;
	}
	var_90_string = var_87_string;
	return 2;
}


func_1667(var_111_bool, var_112_object)
{
	var_113_bool = 0; var_114_object = Obj();
	var_112_object = var_114_object;
	func_1677(var_114_object);
	if(var_113_bool != 0) {
		var_111_bool = 1;
		return 0;
	}
	var_111_bool = 0;
	return 0;
}


func_1157(var_0_bool, var_1_object, var_4_string, var_22_bool)
{
	var_23_float = 0; var_24_float = 0;
	var_25_bool = var_4_string == 0; //@ne
	if(var_25_bool != 0) {
		var_22_bool = 0;
		return 2;
	}
	var_26_float = 0; var_27_object = Obj();
	var_27_object = var_4_string;
	func_1295(var_26_float, var_27_object);
	var_24_float = sqrt(var_26_float);
	var_34_object = var_2_object;
	if(var_34_object != 0) {
		var_24_float = var_24_float - var_1_object;
	}
	var_22_bool = var_24_float < var_0_bool;
	return 2;
}


func_1288(var_106_bool)
{
	var_106_bool = 1;
	return 0;
}


func_1801(var_32_int, var_33_string)
{
	var_34_int = 0; var_35_int = 0;
	GetInvItemByName(var_35_int, var_33_string);
	var_35_int = var_32_int;
	return 2;
}


func_1290()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1546(var_81_int)
{
	var_82_int = 0; var_83_bool = 0; var_84_int = 0; var_85_bool = 0;
	var_84_int = 0;
	
Label_1548:
	var_87_string = ""; var_88_int = 0;
	var_84_int = var_88_int;
	func_1539(var_87_string, var_88_int);
	HasAnimation(var_85_bool, "all", var_87_string);
	var_92_bool = var_85_bool == 0; //@nz
	if(var_92_bool != 0) {
	} else {
		var_84_int = var_84_int + (int)1;
		goto Label_1548;
	}
	var_84_int = var_81_int;
	return 4;
	
}


func_1677(var_113_bool)
{
	var_115_int = 0; var_116_int = 0; var_117_int = 0; var_118_int = 0;
	func_1530((int)0);
	var_119_int = var_117_int;
	var_126_int = "Gatherer1_" + var_117_int;
	GetVariable(var_126_int, var_118_int);
	var_113_bool = var_118_int != (int)0;
	return 4;
}


func_1806(var_94_int)
{
	var_95_int = 0; var_96_int = 0;
	GetVariable("branch", var_96_int);
	var_99_bool = var_96_int == (int)0;
	if(var_99_bool != 0) {
		var_94_int = 1;
		return 2;
	EMIT "GOTO 0x71d";
	}
	var_101_bool = var_96_int == (int)1;
	if(var_101_bool != 0) {
		var_94_int = 2;
		return 2;
	}
	var_94_int = 3;
	return 2;
}


func_1295(var_26_float, var_27_object)
{
	var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0);
	GetPosition(var_31_cvector);
	@@var_27_object:GetPosition(var_32_cvector);
	var_33_cvector = var_32_cvector - var_31_cvector;
	var_26_float = var_33_cvector | var_33_cvector;
	return 6;
}


func_1303(var_58_bool)
{
	var_59_bool = 0; var_60_bool = 0;
	IsLoaded(var_60_bool);
	var_60_bool = var_58_bool;
	return 2;
}


func_1689()
{
	var_49_object = Obj(); var_50_object = Obj();
	CreateDiaryEntry(var_50_object, (int)511, (int)2, (int)529710);
	var_54_bool = 0; var_55_object = Obj(); var_56_int = 0;
	var_50_object = var_55_object;
	func_1715(var_54_bool, var_55_object, (int)507);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1563(var_25_object)
{
	var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0;
	func_1530((int)0);
	var_31_int = var_29_int;
	var_38_int = "Gatherer1_" + var_29_int;
	SetVariable(var_38_int, (int)1);
	@@var_25_object:RemoveItemByType(var_30_int, "blood", (int)1);
	return 4;
}


func_1308(var_42_bool, var_43_object, var_44_float)
{
	var_45_float = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_bool = 0; var_53_bool = 0; var_54_float = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_bool = 0; var_62_bool = 0;
	@@var_43_object:GetPosition(var_55_cvector);
	@@var_43_object:GetEyesHeight(var_54_float);
	var_63_float = GetByIndex(var_55_cvector, 1);
	var_63_float = var_63_float + var_54_float;
	SetByIndex(var_55_cvector, 1) = var_63_float;
	GetPosition(var_56_cvector);
	GetEyesHeight(var_54_float);
	var_64_float = GetByIndex(var_56_cvector, 1);
	var_64_float = var_64_float + var_54_float;
	SetByIndex(var_56_cvector, 1) = var_64_float;
	var_57_cvector = var_55_cvector - var_56_cvector;
	var_65_float = GetByIndex(var_57_cvector, 1);
	SetByIndex(var_57_cvector, 1) = (float)0;
	var_66_int = var_57_cvector | var_57_cvector;
	var_67_float = sqrt(var_66_int);
	var_57_cvector = var_57_cvector / var_67_float;
	var_58_cvector = -var_57_cvector;
	var_68_float = var_57_cvector * var_44_float;
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0);
	var_70_cvector = var_58_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1503(var_69_cvector, var_70_cvector);
	var_78_float = var_69_cvector * (int)25;
	var_79_int = var_68_float + var_78_float;
	var_59_cvector = var_79_int - CVector(0.0, 10.0, 0.0);
	var_60_cvector = var_56_cvector + var_59_cvector;
	IsOverrideActive(var_61_bool);
	var_81_bool = var_61_bool;
	if(var_81_bool != 0) {
		var_42_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_60_cvector, var_58_cvector, (bool)1);
	var_83_float = GetByIndex(var_59_cvector, 0);
	var_84_float = GetByIndex(var_59_cvector, 2);
	Rotate(var_83_float, var_84_float);
	var_85_bool = 0;
	func_1837(var_85_bool);
	if(var_85_bool != 0) {
	} else {
		HasAnimationTrack(var_62_bool, "head");
		var_87_bool = var_62_bool;
		if(var_87_bool == 0) goto Label_1371;
		LookAsyncCamera("head");
	}
Label_1371:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_42_bool = 1;
	return 18;
	
}


func_1823(var_25_int)
{
	var_26_int = 0; var_27_int = 0;
	GetVariable("branch", var_27_int);
	var_27_int = var_25_int;
	return 2;
}


func_1443()
{
	CameraSwitchToNormal((bool)1);
	return 0;
}


func_1829(var_91_int)
{
	var_91_int = 521048;
	return 0;
}


func_1061(var_6_object, var_47_float, var_48_float)
{
	var_49_float = 0; var_50_bool = 0; var_51_float = 0; var_52_bool = 0;
	var_6_object = false;
	
Label_1063:
	rand(var_51_float, (int)3);
	var_55_int = var_51_float + (int)3;
	Sleep(var_55_int, var_52_bool);
	var_6_object = true;
	var_56_float = 0; var_57_float = 0;
	var_47_float = var_56_float;
	var_48_float = var_57_float;
	func_1130(var_48_float, var_49_float, var_50_bool, var_51_float, var_52_bool, var_56_float, var_57_float);
	var_6_object = false;
	goto Label_1063;
}
EMIT "Return(); Pop(4)";


func_1831(var_90_int)
{
	var_90_int = 521047;
	return 0;
}


func_1448(var_165_string)
{
	var_166_bool = 0; var_167_float = 0; var_168_float = 0; var_169_bool = 0; var_170_float = 0; var_171_float = 0;
	lshHasAnimation(var_169_bool, var_165_string);
	var_172_bool = var_169_bool;
	if(var_172_bool != 0) {
		lshGetAnimTimes(var_165_string, var_170_float, var_171_float);
		lshPlayAnimation(var_170_float, var_171_float, (bool)0);
	} else {
		var_175_int = "Can't find lsh animation : " + var_165_string;
		Trace(var_175_int);
	}
	return 6;
	
}


func_1833(var_92_string)
{
	var_92_string = "ui/NPC_Morlok.png";
	return 0;
}


func_1578()
{
	SetVariable("ookGatherer1", (int)1);
	return 0;
}


func_1835(var_93_string)
{
	var_93_string = "ui/NPC_Morlok_b.png";
	return 0;
}


func_1195(var_2_object, var_3_object)
{
	func_1290();
	KillTimer((int)10);
	var_21_object = var_2_object;
	if(var_21_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_object = true;
	return 0;
}


func_1837(var_85_bool)
{
	var_85_bool = 0;
	return 0;
}


func_40(var_0_bool, var_31_int, var_32_object)
{
	var_34_object = Obj(); var_35_bool = 0; var_36_int = 0; var_37_bool = 0; var_38_object = Obj(); var_39_bool = 0; var_40_int = 0; var_41_bool = 0;
	var_0_bool = var_32_object;
	var_42_bool = 0; var_43_object = Obj(); var_44_float = 0;
	var_32_object = var_43_object;
	func_1308(var_42_bool, var_43_object, (float)110.0);
	var_89_bool = var_42_bool == 0; //@nz
	if(var_89_bool != 0) {
		var_31_int = -2;
		return 8;
	}
	CreateDialog(var_38_object);
	var_90_int = 0;
	func_1831(var_90_int);
	@@var_38_object:SetNPCName(var_90_int);
	var_91_int = 0;
	func_1829(var_91_int);
	@@var_38_object:SetNPCDescription(var_91_int);
	var_92_string = "";
	func_1833(var_92_string);
	@@var_38_object:SetPhoto(var_92_string);
	var_93_string = "";
	func_1835(var_93_string);
	@@var_38_object:SetPhoto2(var_93_string);
	var_94_int = 0;
	func_1806(var_94_int);
	@@var_38_object:SetPlayerName(var_94_int);
	IsOverrideActive(var_39_bool);
	var_102_bool = var_39_bool;
	if(var_102_bool != 0) {
		var_31_int = -2;
		return 8;
	}
	DoDialog(var_38_object);
	var_103_object = Obj(); var_104_object = Obj();
	var_32_object = var_103_object;
	var_38_object = var_104_object;
	TaskCall(2);
	func_114(var_105_object, var_106_object, var_107_string, var_108_bool, var_103_object, var_104_object);
	TaskReturn();
	@@var_38_object:IsDialogEnd(var_41_bool);
	
Label_96:
	var_211_bool = var_41_bool == 0; //@nz
	if(var_211_bool != 0) {
		sync();
		@@var_38_object:IsDialogEnd(var_41_bool);
		goto Label_96;
	}
	var_32_object = Obj();
	func_1377();
	StopDialog(var_38_object);
	@@var_38_object:GetReturnValue((int)-1);
	var_40_int = var_31_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_555(var_0_bool, var_265_int, var_266_object)
{
	var_268_object = Obj(); var_269_bool = 0; var_270_int = 0; var_271_bool = 0; var_272_object = Obj(); var_273_bool = 0; var_274_int = 0; var_275_bool = 0;
	var_0_bool = var_266_object;
	var_276_bool = 0; var_277_object = Obj(); var_278_float = 0;
	var_266_object = var_277_object;
	func_1308(var_276_bool, var_277_object, (float)110.0);
	var_279_bool = var_276_bool == 0; //@nz
	if(var_279_bool != 0) {
		var_265_int = -2;
		return 8;
	}
	CreateDialog(var_272_object);
	var_280_int = 0;
	func_1831(var_280_int);
	@@var_272_object:SetNPCName(var_280_int);
	var_281_int = 0;
	func_1829(var_281_int);
	@@var_272_object:SetNPCDescription(var_281_int);
	var_282_string = "";
	func_1833(var_282_string);
	@@var_272_object:SetPhoto(var_282_string);
	var_283_string = "";
	func_1835(var_283_string);
	@@var_272_object:SetPhoto2(var_283_string);
	var_284_int = 0;
	func_1806(var_284_int);
	@@var_272_object:SetPlayerName(var_284_int);
	IsOverrideActive(var_273_bool);
	var_285_bool = var_273_bool;
	if(var_285_bool != 0) {
		var_265_int = -2;
		return 8;
	}
	DoDialog(var_272_object);
	var_286_object = Obj(); var_287_object = Obj();
	var_266_object = var_286_object;
	var_272_object = var_287_object;
	TaskCall(4);
	func_629(var_288_object, var_289_object, var_290_string, var_291_bool, var_286_object, var_287_object);
	TaskReturn();
	@@var_272_object:IsDialogEnd(var_275_bool);
	
Label_611:
	var_332_bool = var_275_bool == 0; //@nz
	if(var_332_bool != 0) {
		sync();
		@@var_272_object:IsDialogEnd(var_275_bool);
		goto Label_611;
	}
	var_266_object = Obj();
	func_1377();
	StopDialog(var_272_object);
	@@var_272_object:GetReturnValue((int)-1);
	var_274_int = var_265_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1584()
{
	var_33_object = Obj(); var_34_object = Obj();
	func_1743(Obj());
	var_35_object = var_34_object;
	var_46_float = 0;
	func_1525(var_46_float);
	@@var_34_object:AddMark("k2q04MorlokGotoAndrei", "pt_map_andrei", (int)0, (int)539378, var_46_float);
	func_1689();
	return 2;
}
EMIT "Stack[-1] = 0";


func_1715(var_54_bool, var_55_object, var_56_int)
{
	var_57_object = Obj(); var_58_object = Obj(); var_59_int = 0; var_60_object = Obj(); var_61_object = Obj(); var_62_int = 0;
	func_1702(Obj());
	var_63_object = var_60_object;
	@@var_60_object:Find(var_56_int, var_61_object);
	var_68_bool = var_61_object == 0; //@nz
	if(var_68_bool != 0) {
		var_70_int = "Can't find diary parent with id: " + var_56_int;
		Trace(var_70_int);
		var_54_bool = 0;
		return 6;
	}
	@@var_61_object:AddChild(var_55_object);
	SendWorldWndMessage((int)7);
	@@var_55_object:GetCategory(var_62_int);
	SetDiarySection(var_62_int);
	var_54_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1079(var_5_bool)
{
	var_5_bool = true;
	var_22_bool = 0;
	var_22_bool = 0;
	var_23_bool = 0;
	func_1303(var_23_bool);
	var_26_bool = var_23_bool == 0; //@nz
	if(var_26_bool != 0) {
		var_27_bool = 0;
		func_1128(var_27_bool);
		if(var_27_bool != 0) {
			var_22_bool = 1;
		}
	}
	if(var_22_bool != 0) {
		var_28_object = Obj();
		func_1497(var_28_object);
		RemoveActor(var_28_object);
	}
	return 0;
}


func_1464(var_143_string, var_144_bool)
{
	var_147_bool = 0; var_148_float = 0; var_149_float = 0; var_150_bool = 0; var_151_float = 0; var_152_float = 0;
	lshHasAnimation(var_150_bool, var_143_string);
	var_153_bool = var_150_bool;
	if(var_153_bool != 0) {
		lshGetAnimTimes(var_143_string, var_151_float, var_152_float);
		lshPlayAnimation(var_151_float, var_152_float, var_144_bool);
	} else {
		var_155_int = "Can't find lsh animation : " + var_143_string;
		Trace(var_155_int);
	}
	return 6;
	
}


func_1209()
{
	var_65_int = 0; var_66_int = 0; var_67_int = 0; var_68_int = 0; var_69_bool = 0; var_70_float = 0; var_71_bool = 0; var_72_int = 0; var_73_int = 0; var_74_int = 0; var_75_int = 0; var_76_bool = 0; var_77_float = 0; var_78_bool = 0;
	WaitForAnimEnd();
	var_79_bool = 0;
	func_1303(var_79_bool);
	var_80_bool = var_79_bool == 0; //@nz
	if(var_80_bool != 0) {
		return 14;
	}
	func_1546((int)0);
	var_81_int = var_72_int;
	var_73_int = 0;
	
Label_1223:
	var_94_bool = 0;
	var_94_bool = 0;
	var_96_bool = var_73_int < (int)5;
	if(var_96_bool != 0) {
		var_97_bool = 0;
		func_1303(var_97_bool);
		if(var_97_bool != 0) {
			var_94_bool = 1;
		}
	}
	if(var_94_bool != 0) {
		irand(var_74_int, (int)3);
		var_100_bool = var_74_int == (int)0;
		if(var_100_bool != 0) {
			var_101_int = var_72_int;
			if(var_101_int == 0) goto Label_1256;
			irand(var_75_int, var_72_int);
			var_103_string = ""; var_104_int = 0;
			var_75_int = var_104_int;
			func_1539(var_103_string, var_104_int);
			PlayAnimation("all", var_103_string);
			WaitForAnimEnd(var_76_bool);
			var_105_bool = var_76_bool == 0; //@nz
			if(var_105_bool != 0) {
			} else {
		} else {
				var_110_bool = var_74_int == (int)1;
				if(var_110_bool != 0) {
					rand(var_77_float, (int)4);
					var_113_int = var_77_float + (int)1;
					Sleep(var_113_int, var_78_bool);
					var_114_bool = var_78_bool == 0; //@nz
					if(var_114_bool != 0) {
						goto Label_1285;
					}
					goto Label_1274;
				}
				var_115_int = var_73_int;
				if(var_115_int == 0) goto Label_1274;
				goto Label_1285;
		}
		Label_1274:
			var_106_bool = 0;
			func_1288(var_106_bool);
			var_107_bool = var_106_bool == 0; //@nz
			if(var_107_bool != 0) {
				goto Label_1285;
			}
			ResetAAS();
			var_73_int = var_73_int + (int)1;
			goto Label_1223;

		}
	}
Label_1285:
	ResetAAS();
	return 14;
	
}


func_706(var_2_object, var_293_string)
{
	var_294_bool = 0;
	func_1837(var_294_bool);
	var_295_bool = var_294_bool == 0; //@nz
	if(var_295_bool != 0) {
		return 0;
	}
	var_296_bool = var_293_string == var_2_object;
	if(var_296_bool != 0) {
		return 0;
	}
	var_297_string = ""; var_298_bool = 0;
	var_293_string = var_297_string;
	var_300_bool = var_293_string == "";
	if(var_300_bool != 0) {
		var_298_bool = 0;
	} else {
		var_298_bool = 1;
	}
	func_1464(var_297_string, var_298_bool);
	var_2_object = var_293_string;
	return 0;
	
}


func_1603()
{
	SetVariable("oobSysGatherer1_1", (int)1);
	return 0;
}


func_1479(var_36_object)
{
	var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_float = 0; var_40_cvector = CVector(0,0,0);
	@@var_36_object:GetEyesHeight(var_39_float);
	var_40_cvector = CVector(0.0, 0.0, 0.0);
	var_41_float = GetByIndex(var_40_cvector, 1);
	var_39_float = var_41_float;
	SetByIndex(var_40_cvector, 1) = var_41_float;
	LookAsync(var_36_object, "head", var_40_cvector);
	return 4;
}


func_1609()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_1615(var_49_object)
{
	@@var_49_object:SetReturnValue((int)1000);
	return 0;
}


func_1743(var_35_object)
{
	var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj();
	GetMainOutdoorScene(var_38_object);
	var_40_bool = var_38_object == 0; //@ne
	if(var_40_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_39_object = 0;
		var_39_object = var_35_object;
		return 4;
	}
	@@var_38_object:GetMap(var_39_object);
	var_39_object = var_35_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1490()
{
	var_22_bool = 0;
	func_1837(var_22_bool);
	if(var_22_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1620(var_303_bool)
{
	var_305_int = 0; var_306_string = "";
	func_1513(var_305_int, "k2q04");
	var_308_bool = var_305_int == (int)2;
	if(var_308_bool != 0) {
		var_303_bool = 1;
		return 0;
	}
	var_303_bool = 0;
	return 0;
}


func_1497(var_26_object)
{
	var_27_object = Obj(); var_28_object = Obj();
	self(var_28_object);
	var_28_object = var_26_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1503(var_69_cvector, var_70_cvector)
{
	var_72_float = 0; var_73_float = 0;
	var_74_int = var_70_cvector | var_70_cvector;
	var_73_float = sqrt(var_74_int);
	var_75_float = 9.999999974752427e-07;
	var_76_bool = var_73_float < var_75_float;
	if(var_76_bool != 0) {
		var_69_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_69_cvector = var_70_cvector / var_73_float;
	return 2;
}


func_1632(var_309_bool)
{
	var_311_int = 0; var_312_string = "";
	func_1513(var_311_int, "ookGatherer1");
	var_314_bool = var_311_int == (int)0;
	if(var_314_bool != 0) {
		var_309_bool = 1;
		return 0;
	}
	var_309_bool = 0;
	return 0;
}


func_1377()
{
	var_213_bool = 0; var_214_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_216_bool = 0;
	func_1837(var_216_bool);
	if(var_216_bool != 0) {
	} else {
		HasAnimationTrack(var_214_bool, "head");
		var_218_bool = var_214_bool;
		if(var_218_bool == 0) goto Label_1394;
		UnlookAsync("head");
	}
Label_1394:
	return 2;
	
}


func_1760()
{
	var_25_bool = 0; var_26_int = 0; var_27_bool = 0; var_28_int = 0;
	ClearSubContainer((int)0);
	irand(var_28_int, (int)15);
	var_28_int = var_28_int + (int)5;
	var_32_int = 0; var_33_string = "";
	func_1801(var_32_int, "grass_black_tvir");
	AddItem(var_27_bool, var_32_int, (int)0, var_28_int);
	irand(var_28_int, (int)15);
	var_28_int = var_28_int + (int)5;
	var_39_int = 0; var_40_string = "";
	func_1801(var_39_int, "grass_blood_tvir");
	AddItem(var_27_bool, var_39_int, (int)0, var_28_int);
	irand(var_28_int, (int)15);
	var_28_int = var_28_int + (int)5;
	var_44_int = 0; var_45_string = "";
	func_1801(var_44_int, "grass_brown_tvir");
	AddItem(var_27_bool, var_44_int, (int)0, var_28_int);
	return 4;
}


func_248(var_2_object, var_139_string)
{
	var_140_bool = 0;
	func_1837(var_140_bool);
	var_141_bool = var_140_bool == 0; //@nz
	if(var_141_bool != 0) {
		return 0;
	}
	var_142_bool = var_139_string == var_2_object;
	if(var_142_bool != 0) {
		return 0;
	}
	var_143_string = ""; var_144_bool = 0;
	var_139_string = var_143_string;
	var_146_bool = var_139_string == "";
	if(var_146_bool != 0) {
		var_144_bool = 0;
	} else {
		var_144_bool = 1;
	}
	func_1464(var_143_string, var_144_bool);
	var_2_object = var_139_string;
	return 0;
	
}


func_1128(var_25_bool)
{
	var_25_bool = 1;
	return 0;
}


func_1513(var_199_int, var_200_string)
{
	var_201_int = 0; var_202_int = 0;
	GetVariable(var_200_string, var_202_int);
	var_202_int = var_199_int;
	return 2;
}


func_1130(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_56_float, var_57_float)
{
	var_58_bool = 0;
	func_1303(var_58_bool);
	var_61_bool = var_58_bool == 0; //@nz
	if(var_61_bool != 0) {
		return 0;
	}
	FindActor(var_4_string, "player");
	var_2_object = false;
	var_3_object = false;
	var_0_bool = var_56_float;
	var_1_object = var_57_float;
	SetTimer((int)10, (float)1.0);
	func_1209();
	var_116_bool = var_3_object == 0; //@nz
	if(var_116_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_1644(var_197_bool)
{
	var_199_int = 0; var_200_string = "";
	func_1513(var_199_int, "oobSysGatherer1_1");
	var_204_bool = var_199_int == (int)0;
	if(var_204_bool != 0) {
		var_197_bool = 1;
		return 0;
	}
	var_197_bool = 0;
	return 0;
}


func_1518(var_131_bool, var_132_object, var_133_string)
{
	var_134_int = 0; var_135_bool = 0; var_136_int = 0; var_137_bool = 0;
	GetInvItemByName(var_136_int, var_133_string);
	@@var_132_object:HasItem(var_136_int, var_137_bool);
	var_137_bool = var_131_bool;
	return 4;
}


func_114(var_0_bool, var_1_object, var_2_object, var_3_object, var_103_object, var_104_object)
{
	var_0_bool = var_104_object;
	var_1_object = var_103_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_110_bool = 0;
		var_110_bool = 0;
		var_111_bool = 0; var_112_object = Obj();
		var_112_object = var_1_object;
		func_1667(var_111_bool, var_112_object);
		var_128_bool = var_111_bool == 0; //@nz
		if(var_128_bool != 0) {
			var_129_bool = 0; var_130_object = Obj();
			var_130_object = var_1_object;
			func_1656(var_129_bool, var_130_object);
			var_138_bool = var_129_bool == 0; //@nz
			if(var_138_bool != 0) {
				var_110_bool = 1;
			}
		}
		if(var_110_bool != 0) {
			var_139_string = "";
			func_248(var_104_object, "Neutral");
			@@@var_0_bool:SetMessage((int)518145);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)518146, (int)19260, (int)19259);
			@@@var_0_bool:AddReply((int)529952, (int)-1, (int)31336);
		} else {
				var_181_bool = 0;
				var_181_bool = 0;
				var_182_bool = 0; var_183_object = Obj();
				var_183_object = var_1_object;
				func_1656(var_182_bool, var_183_object);
				if(var_182_bool != 0) {
					var_184_bool = 0; var_185_object = Obj();
					var_185_object = var_1_object;
					func_1667(var_184_bool, var_185_object);
					var_186_bool = var_184_bool == 0; //@nz
					if(var_186_bool != 0) {
						var_181_bool = 1;
					}
				}
				if(var_181_bool != 0) {
					var_187_string = "";
					func_248(var_104_object, "Neutral");
					@@@var_0_bool:SetMessage((int)518150);
					@@@var_0_bool:ClearReplies();
					@@@var_0_bool:AddReply((int)518151, (int)19265, (int)19264);
					goto Label_218;
				}
				var_192_string = "";
				func_248(var_104_object, "Neutral");
				@@@var_0_bool:SetMessage((int)518155);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)518156, (int)-1, (int)19269);
				var_197_bool = 0; var_198_object = Obj();
				var_198_object = var_1_object;
				func_1644(var_198_object);
				if(var_197_bool != 0) {
					@@@var_0_bool:AddReply((int)518199, (int)19313, (int)19312);
				}
				@@@var_0_bool:AddReply((int)518157, (int)-1, (int)19270);
				goto Label_218;
		}
	}
Label_218:
	var_163_bool = 0;
	func_1837(var_163_bool);
	if(var_163_bool != 0) {

	Label_222:
		lshWaitForAnimEnd();
		var_164_object = var_3_object;
		if(var_164_object != 0) {
		} else {
			var_165_string = "";
			var_165_string = var_2_object;
			func_1448(var_165_string);
			goto Label_222;
	}
		PlayAnimation("all", "idle");

	Label_237:
		WaitForAnimEnd();
		var_178_object = var_3_object;
		if(var_178_object != 0) {
			goto Label_247;
		}
		PlayAnimation("all", "idle");
		goto Label_237;

	}
	goto Label_247;
	
Label_247:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x76";


func_1395(var_222_bool, var_223_object, var_224_float)
{
	var_225_float = 0; var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_cvector = CVector(0,0,0); var_229_cvector = CVector(0,0,0); var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_bool = 0; var_233_float = 0; var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); var_238_cvector = CVector(0,0,0); var_239_cvector = CVector(0,0,0); var_240_bool = 0;
	@@var_223_object:GetPosition(var_234_cvector);
	@@var_223_object:GetEyesHeight(var_233_float);
	var_241_float = GetByIndex(var_234_cvector, 1);
	var_241_float = var_241_float + var_233_float;
	SetByIndex(var_234_cvector, 1) = var_241_float;
	GetPosition(var_235_cvector);
	GetEyesHeight(var_233_float);
	var_242_float = GetByIndex(var_235_cvector, 1);
	var_242_float = var_242_float + var_233_float;
	SetByIndex(var_235_cvector, 1) = var_242_float;
	var_236_cvector = var_234_cvector - var_235_cvector;
	var_243_float = GetByIndex(var_236_cvector, 1);
	SetByIndex(var_236_cvector, 1) = (float)0;
	var_244_int = var_236_cvector | var_236_cvector;
	var_245_float = sqrt(var_244_int);
	var_236_cvector = var_236_cvector / var_245_float;
	var_237_cvector = -var_236_cvector;
	var_246_float = var_236_cvector * var_224_float;
	var_238_cvector = var_246_float - CVector(0.0, 10.0, 0.0);
	var_239_cvector = var_235_cvector + var_238_cvector;
	IsOverrideActive(var_240_bool);
	var_248_bool = var_240_bool;
	if(var_248_bool != 0) {
		var_222_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_239_cvector, var_237_cvector, (bool)1);
	var_250_float = GetByIndex(var_238_cvector, 0);
	var_251_float = GetByIndex(var_238_cvector, 2);
	Rotate(var_250_float, var_251_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_222_bool = 1;
	return 16;
}


func_1702(var_63_object)
{
	var_64_object = Obj(); var_65_object = Obj();
	GetDiaryRoot(var_65_object);
	var_66_bool = var_65_object == 0; //@nz
	if(var_66_bool != 0) {
		Trace("Can't retrieve diary root");
		var_63_object = 0;
		return 2;
	}
	var_65_object = var_63_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_629(var_0_bool, var_1_object, var_2_object, var_3_object, var_286_object, var_287_object)
{
	var_0_bool = var_287_object;
	var_1_object = var_286_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_293_string = "";
		func_706(var_287_object, "Neutral");
		@@@var_0_bool:SetMessage((int)525385);
		@@@var_0_bool:ClearReplies();
		var_302_bool = 0;
		var_302_bool = 0;
		var_303_bool = 0; var_304_object = Obj();
		var_304_object = var_1_object;
		func_1620(var_304_object);
		if(var_303_bool != 0) {
			var_309_bool = 0; var_310_object = Obj();
			var_310_object = var_1_object;
			func_1632(var_310_object);
			if(var_309_bool != 0) {
				var_302_bool = 1;
			}
		}
		if(var_302_bool != 0) {
			@@@var_0_bool:AddReply((int)525387, (int)40946, (int)26755);
		}
		@@@var_0_bool:AddReply((int)539023, (int)-1, (int)40966);
		@@@var_0_bool:AddReply((int)539024, (int)-1, (int)40967);
		goto Label_676;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x279";
	}
Label_676:
	var_324_bool = 0;
	func_1837(var_324_bool);
	if(var_324_bool != 0) {

	Label_680:
		lshWaitForAnimEnd();
		var_325_object = var_3_object;
		if(var_325_object != 0) {
		} else {
			var_326_string = "";
			var_326_string = var_2_object;
			func_1448(var_326_string);
			goto Label_680;
	}
		PlayAnimation("all", "idle");

	Label_695:
		WaitForAnimEnd();
		var_329_object = var_3_object;
		if(var_329_object != 0) {
			goto Label_705;
		}
		PlayAnimation("all", "idle");
		goto Label_695;
	}
	goto Label_705;
	
Label_705:
	return 0;
	
}


func_1525(var_46_float)
{
	var_47_float = 0; var_48_float = 0;
	GetGameTime(var_48_float);
	var_48_float = var_46_float;
	return 2;
}


func_1656(var_129_bool, var_130_object)
{
	var_131_bool = 0; var_132_object = Obj(); var_133_string = "";
	var_130_object = var_132_object;
	func_1518(var_131_bool, var_132_object, "blood");
	if(var_131_bool != 0) {
		var_129_bool = 1;
		return 0;
	}
	var_129_bool = 0;
	return 0;
}


func_1530(var_19_int)
{
	var_20_float = 0; var_21_float = 0;
	GetGameTime(var_21_float);
	var_23_int = 0;
	var_23_int = var_21_float / (int)24;
	var_19_int = (int)1 + var_23_int;
	return 2;
}


