// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Distrust|W:Smile|W:Think|W:Triumph|W:Pride|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:k1q03|W:k4q01|W:k10q01KnowAboutRubin|W:k10q01NotkinGotoRubin|W:pt_map_rubin|A:AddMark|W:playsound|W:giveitem|W:Gun is given|W:Gun|A:ShowMap|W:k1q01DobermanDead|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:ui/NPC_Notkin.png|W:ui/NPC_Notkin_b.png
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x7b9
// @RUN_TASK: 12
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xab vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x298 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x36d vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x50d vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x691 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x78f vars=int,int
// @TASK_12: vars=cvector params=0
// @EVENT_7: op=0x805 vars=int
// @EVENT_6: op=0x82b vars=
// @EVENT_5: op=0x83a vars=
// @EVENT_45: op=0x847 vars=bool
// @EVENT_0: op=0x853 vars=object
// @PE: 0x51,0x95,0xab,0x248,0x282,0x298,0x313,0x357,0x36d,0x49e,0x4f7,0x50d,0x63c,0x67b,0x691,0x73f,0x779,0x78f,0x805,0x82b,0x847,0xa41,0xa5f,0xa68,0xa71,0xa87,0xa8d,0xa98,0xaa8,0xab4,0xac0,0xacc,0xb68

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2539();
		var_36_bool = var_32_cvector == (int)26110;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_2655();
		}
		var_65_bool = var_32_cvector == (int)28176;
		if(var_65_bool != 0) {
			var_66_object = Obj(); var_67_object = Obj();
			var_66_object = var_1_object;
			var_67_object = var_0_object;
			func_2655();
			var_68_object = Obj(); var_69_object = Obj();
			var_68_object = var_1_object;
			var_69_object = var_0_object;
			func_2701(var_69_object);
			var_92_object = Obj(); var_93_object = Obj();
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_2695();
		}
		var_97_bool = var_32_cvector == (int)40900;
		if(var_97_bool != 0) {
			var_98_object = Obj(); var_99_object = Obj();
			var_98_object = var_1_object;
			var_99_object = var_0_object;
			func_2655();
		}
		var_101_bool = var_32_cvector == (int)40901;
		if(var_101_bool != 0) {
			var_102_object = Obj(); var_103_object = Obj();
			var_102_object = var_1_object;
			var_103_object = var_0_object;
			func_2655();
		}
		var_105_bool = var_32_cvector == (int)40902;
		if(var_105_bool != 0) {
			var_106_object = Obj(); var_107_object = Obj();
			var_106_object = var_1_object;
			var_107_object = var_0_object;
			func_2655();
		}
		var_109_bool = var_31_bool == (int)26106;
		if(var_109_bool != 0) {
			var_110_string = "";
			func_149(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)524791);
			@@@var_0_object:ClearReplies();
			var_128_bool = 0; var_129_object = Obj();
			var_129_object = var_1_object;
			func_2740(var_129_object);
			if(var_128_bool != 0) {
				@@@var_0_object:AddReply((int)524792, (int)28167, (int)26107);
			}
			@@@var_0_object:AddReply((int)524793, (int)-1, (int)26108);
			@@@var_0_object:AddReply((int)542093, (int)-1, (int)44393);
			return 0;
		}
		var_146_bool = var_31_bool == (int)28167;
		if(var_146_bool != 0) {
			var_147_string = "";
			func_149(var_32_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)526880);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526881, (int)28169, (int)28168);
			@@@var_0_object:AddReply((int)542094, (int)28169, (int)44394);
			return 0;
		}
		var_156_bool = var_31_bool == (int)28169;
		if(var_156_bool != 0) {
			var_157_string = "";
			func_149(var_32_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)526882);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538926, (int)40882, (int)40881);
			@@@var_0_object:AddReply((int)538934, (int)40882, (int)40891);
			return 0;
		}
		var_166_bool = var_31_bool == (int)40882;
		if(var_166_bool != 0) {
			var_167_string = "";
			func_149(var_32_cvector, "Smile");
			@@@var_0_object:SetMessage((int)538927);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526883, (int)26109, (int)28170);
			var_172_bool = 0; var_173_object = Obj();
			var_173_object = var_1_object;
			func_2728(var_173_object);
			if(var_172_bool != 0) {
				@@@var_0_object:AddReply((int)538928, (int)40884, (int)40883);
			}
			return 0;
		}
		var_182_bool = var_31_bool == (int)40884;
		if(var_182_bool != 0) {
			var_183_string = "";
			func_149(var_32_cvector, "Think");
			@@@var_0_object:SetMessage((int)538929);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538930, (int)40886, (int)40885);
			@@@var_0_object:AddReply((int)538932, (int)40886, (int)40887);
			return 0;
		}
		var_192_bool = var_31_bool == (int)40886;
		if(var_192_bool != 0) {
			var_193_string = "";
			func_149(var_32_cvector, "Think");
			@@@var_0_object:SetMessage((int)538931);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538935, (int)40897, (int)40893);
			@@@var_0_object:AddReply((int)538937, (int)40897, (int)40895);
			return 0;
		}
		var_202_bool = var_31_bool == (int)40897;
		if(var_202_bool != 0) {
			var_203_string = "";
			func_149(var_32_cvector, "Triumph");
			@@@var_0_object:SetMessage((int)538939);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538940, (int)-1, (int)40900);
			@@@var_0_object:AddReply((int)538941, (int)-1, (int)40901);
			@@@var_0_object:AddReply((int)538942, (int)-1, (int)40902);
			return 0;
		}
		var_215_bool = var_31_bool == (int)26109;
		if(var_215_bool != 0) {
			var_216_string = "";
			func_149(var_32_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)524794);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526890, (int)28178, (int)28177);
			@@@var_0_object:AddReply((int)526885, (int)28173, (int)28172);
			return 0;
		}
		var_225_bool = var_31_bool == (int)28173;
		if(var_225_bool != 0) {
			var_226_string = "";
			func_149(var_32_cvector, "Smile");
			@@@var_0_object:SetMessage((int)526886);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524795, (int)-1, (int)26110);
			@@@var_0_object:AddReply((int)526887, (int)28175, (int)28174);
			return 0;
		}
		var_235_bool = var_31_bool == (int)28175;
		if(var_235_bool != 0) {
			var_236_string = "";
			func_149(var_32_cvector, "Smile");
			@@@var_0_object:SetMessage((int)526888);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526889, (int)-1, (int)28176);
			return 0;
		}
		var_242_bool = var_31_bool == (int)28178;
		if(var_242_bool != 0) {
			var_243_string = "";
			func_149(var_32_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)526891);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538936, (int)40886, (int)40894);
			return 0;
		}
		var_3_string = true;
		var_248_bool = 0;
		func_2918(var_248_bool);
		if(var_248_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xac";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2539();
		var_36_bool = var_31_bool == (int)26872;
		if(var_36_bool != 0) {
			var_37_string = "";
			func_642(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525516);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525517, (int)-1, (int)26873);
			@@@var_0_object:AddReply((int)526273, (int)-1, (int)27549);
			return 0;
		}
		var_3_string = true;
		var_61_bool = 0;
		func_2918(var_61_bool);
		if(var_61_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x299";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2539();
		var_36_bool = var_32_cvector == (int)27017;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_2664();
		}
		var_65_bool = var_31_bool == (int)27014;
		if(var_65_bool != 0) {
			var_66_string = "";
			func_855(var_32_cvector, "Smile");
			@@@var_0_object:SetMessage((int)525691);
			@@@var_0_object:ClearReplies();
			var_84_bool = 0; var_85_object = Obj();
			var_85_object = var_1_object;
			func_2752(var_85_object);
			if(var_84_bool != 0) {
				@@@var_0_object:AddReply((int)525692, (int)30673, (int)27015);
			}
			@@@var_0_object:AddReply((int)525695, (int)-1, (int)27018);
			@@@var_0_object:AddReply((int)542396, (int)-1, (int)44768);
			return 0;
		}
		var_102_bool = var_31_bool == (int)30673;
		if(var_102_bool != 0) {
			var_103_string = "";
			func_855(var_32_cvector, "Pride");
			@@@var_0_object:SetMessage((int)529221);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529222, (int)44776, (int)30674);
			@@@var_0_object:AddReply((int)529223, (int)44778, (int)30675);
			return 0;
		}
		var_112_bool = var_31_bool == (int)44778;
		if(var_112_bool != 0) {
			var_113_string = "";
			func_855(var_32_cvector, "Think");
			@@@var_0_object:SetMessage((int)542404);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542405, (int)44781, (int)44779);
			return 0;
		}
		var_119_bool = var_31_bool == (int)44781;
		if(var_119_bool != 0) {
			var_120_string = "";
			func_855(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542407);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542408, (int)27016, (int)44782);
			return 0;
		}
		var_126_bool = var_31_bool == (int)44776;
		if(var_126_bool != 0) {
			var_127_string = "";
			func_855(var_32_cvector, "Pride");
			@@@var_0_object:SetMessage((int)542402);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542403, (int)27016, (int)44777);
			@@@var_0_object:AddReply((int)542406, (int)27016, (int)44780);
			return 0;
		}
		var_136_bool = var_31_bool == (int)27016;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_855(var_32_cvector, "Think");
			@@@var_0_object:SetMessage((int)525693);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542409, (int)44786, (int)44785);
			@@@var_0_object:AddReply((int)542414, (int)30672, (int)44790);
			return 0;
		}
		var_146_bool = var_31_bool == (int)44786;
		if(var_146_bool != 0) {
			var_147_string = "";
			func_855(var_32_cvector, "Smile");
			@@@var_0_object:SetMessage((int)542410);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529219, (int)30672, (int)30671);
			@@@var_0_object:AddReply((int)542411, (int)44788, (int)44787);
			return 0;
		}
		var_156_bool = var_31_bool == (int)44788;
		if(var_156_bool != 0) {
			var_157_string = "";
			func_855(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542412);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542413, (int)30672, (int)44789);
			return 0;
		}
		var_163_bool = var_31_bool == (int)30672;
		if(var_163_bool != 0) {
			var_164_string = "";
			func_855(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529220);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525694, (int)-1, (int)27017);
			return 0;
		}
		var_3_string = true;
		var_169_bool = 0;
		func_2918(var_169_bool);
		if(var_169_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x36e";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2539();
		var_36_bool = var_32_cvector == (int)29286;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_2679();
			var_55_object = Obj(); var_56_object = Obj();
			var_55_object = var_1_object;
			var_56_object = var_0_object;
			func_2712(var_56_object);
		}
		var_82_bool = var_32_cvector == (int)29287;
		if(var_82_bool != 0) {
			var_83_object = Obj(); var_84_object = Obj();
			var_83_object = var_1_object;
			var_84_object = var_0_object;
			func_2679();
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_2712(var_86_object);
		}
		var_88_bool = var_31_bool == (int)29066;
		if(var_88_bool != 0) {
			var_89_bool = 0; var_90_object = Obj();
			var_90_object = var_1_object;
			func_2764(var_90_object);
			var_97_bool = var_89_bool == 0; //@nz
			if(var_97_bool != 0) {
				var_98_object = Obj(); var_99_object = Obj();
				var_98_object = var_1_object;
				var_99_object = var_0_object;
				func_2673();
				var_102_string = "";
				func_1271(var_32_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)527714);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)527715, (int)29269, (int)29067);
				@@@var_0_object:AddReply((int)527928, (int)29269, (int)29279);
				return 0;
			}
			var_126_string = "";
			func_1271(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527716);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527717, (int)-1, (int)29069);
			@@@var_0_object:AddReply((int)527918, (int)-1, (int)29268);
			return 0;
		}
		var_135_bool = var_31_bool == (int)29269;
		if(var_135_bool != 0) {
			var_136_string = "";
			func_1271(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527919);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527920, (int)29271, (int)29270);
			@@@var_0_object:AddReply((int)527923, (int)29274, (int)29273);
			return 0;
		}
		var_145_bool = var_31_bool == (int)29274;
		if(var_145_bool != 0) {
			var_146_string = "";
			func_1271(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527924);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527925, (int)29276, (int)29275);
			return 0;
		}
		var_152_bool = var_31_bool == (int)29276;
		if(var_152_bool != 0) {
			var_153_string = "";
			func_1271(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527926);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527927, (int)29271, (int)29277);
			return 0;
		}
		var_159_bool = var_31_bool == (int)29271;
		if(var_159_bool != 0) {
			var_160_string = "";
			func_1271(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527921);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527922, (int)29282, (int)29272);
			@@@var_0_object:AddReply((int)527929, (int)29284, (int)29281);
			return 0;
		}
		var_169_bool = var_31_bool == (int)29282;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_1271(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527930);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527931, (int)29284, (int)29283);
			return 0;
		}
		var_176_bool = var_31_bool == (int)29284;
		if(var_176_bool != 0) {
			var_177_string = "";
			func_1271(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527932);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527933, (int)-1, (int)29286);
			@@@var_0_object:AddReply((int)527934, (int)-1, (int)29287);
			return 0;
		}
		var_3_string = true;
		var_185_bool = 0;
		func_2918(var_185_bool);
		if(var_185_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x50e";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	if((int)1 != 0) {
		func_2539();
		var_36_bool = var_31_bool == (int)36960;
		if(var_36_bool != 0) {
			var_37_string = "";
			func_1659(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535284);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535285, (int)36962, (int)36961);
			@@@var_0_object:AddReply((int)535292, (int)-1, (int)36968);
			@@@var_0_object:AddReply((int)535293, (int)-1, (int)36969);
			return 0;
		}
		var_65_bool = var_31_bool == (int)36962;
		if(var_65_bool != 0) {
			var_66_string = "";
			func_1659(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535286);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535287, (int)36964, (int)36963);
			@@@var_0_object:AddReply((int)535291, (int)-1, (int)36967);
			return 0;
		}
		var_75_bool = var_31_bool == (int)36964;
		if(var_75_bool != 0) {
			var_76_string = "";
			func_1659(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535288);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535289, (int)-1, (int)36965);
			@@@var_0_object:AddReply((int)535290, (int)-1, (int)36966);
			return 0;
		}
		var_3_string = true;
		var_84_bool = 0;
		func_2918(var_84_bool);
		if(var_84_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x692";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_cvector)
{
	if((int)1 != 0) {
		func_2539();
		var_36_bool = var_31_int == (int)42554;
		if(var_36_bool != 0) {
			var_37_string = "";
			func_1913(var_32_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540545);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540546, (int)-1, (int)42555);
			@@@var_0_object:AddReply((int)540798, (int)-1, (int)42847);
			return 0;
		}
		var_3_string = true;
		var_61_bool = 0;
		func_2918(var_61_bool);
		if(var_61_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x790";
	
}


task_12_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_int)
{
	var_33_bool = var_31_int == (int)10;
	if(var_33_bool != 0) {
		func_2049();
		var_35_bool = 0;
		var_35_bool = 0;
		var_36_bool = 0;
		func_2263(var_36_bool);
		if(var_36_bool != 0) {
			var_39_bool = 0;
			func_2018(var_39_bool);
			if(var_39_bool != 0) {
				var_35_bool = 1;
			}
		}
		if(var_35_bool != 0) {
			var_56_bool = 0;
			func_1998(var_56_bool);
			if(var_56_bool != 0) {
				var_75_bool = 0; var_76_object = Obj();
				func_2546(Obj());
				var_77_object = var_76_object;
				func_2413(var_75_bool, var_76_object);
			}
		} else {
			func_2013(var_31_int);
			func_2040();
		}
	}
	return 0;
	
}


task_12_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_2231();
	func_2049();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_12_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	StopGroup0();
	func_2049();
	var_32_string = "";
	func_2493("Neutral");
	func_2040();
	return 0;
}


task_12_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_bool)
{
	var_32_bool = var_31_bool;
	if(var_32_bool != 0) {
		func_2040();
	} else {
		var_38_string = "";
		func_2493("Neutral");
	}
	return 0;
	
}


task_12_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_object)
{
	var_32_bool = 0; var_33_bool = 0;
	IsOverrideActive(var_33_bool);
	var_34_bool = var_33_bool == 0; //@nz
	if(var_34_bool != 0) {
		EventDisable(0);
		func_2231();
		var_35_bool = 0; var_36_object = Obj();
		var_31_object = var_36_object;
		func_2254(var_35_bool, var_36_object);
		EventEnable(0);
		var_49_object = Obj();
		var_31_object = var_49_object;
		func_2920(var_49_object);
		var_609_string = "";
		func_2493("Neutral");
		func_2049();
		func_2040();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	var_31_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_1984(var_30_cvector);
	return 0;
}


func_0(var_0_object, var_281_int, var_282_object)
{
	var_284_object = Obj(); var_285_bool = 0; var_286_int = 0; var_287_bool = 0; var_288_object = Obj(); var_289_bool = 0; var_290_int = 0; var_291_bool = 0;
	var_0_object = var_282_object;
	var_292_bool = 0; var_293_object = Obj(); var_294_float = 0;
	var_282_object = var_293_object;
	func_2268(var_292_bool, var_293_object, (float)70.0);
	var_295_bool = var_292_bool == 0; //@nz
	if(var_295_bool != 0) {
		var_281_int = -2;
		return 8;
	}
	CreateDialog(var_288_object);
	var_296_int = 0;
	func_2912(var_296_int);
	@@var_288_object:SetNPCName(var_296_int);
	var_297_int = 0;
	func_2910(var_297_int);
	@@var_288_object:SetNPCDescription(var_297_int);
	var_298_string = "";
	func_2914(var_298_string);
	@@var_288_object:SetPhoto(var_298_string);
	var_299_string = "";
	func_2916(var_299_string);
	@@var_288_object:SetPhoto2(var_299_string);
	var_300_int = 0;
	func_2893(var_300_int);
	@@var_288_object:SetPlayerName(var_300_int);
	IsOverrideActive(var_289_bool);
	var_301_bool = var_289_bool;
	if(var_301_bool != 0) {
		var_281_int = -2;
		return 8;
	}
	DoDialog(var_288_object);
	var_302_bool = 0; var_303_object = Obj();
	func_2546(Obj());
	var_304_object = var_303_object;
	func_2355(var_302_bool, var_303_object);
	var_305_object = Obj(); var_306_object = Obj();
	var_282_object = var_305_object;
	var_288_object = var_306_object;
	TaskCall(1);
	func_81(var_307_object, var_308_object, var_309_string, var_310_bool, var_305_object, var_306_object);
	TaskReturn();
	@@var_288_object:IsDialogEnd(var_291_bool);
	
Label_63:
	var_346_bool = var_291_bool == 0; //@nz
	if(var_346_bool != 0) {
		sync();
		@@var_288_object:IsDialogEnd(var_291_bool);
		goto Label_63;
	}
	var_282_object = Obj();
	func_2337();
	StopDialog(var_288_object);
	@@var_288_object:GetReturnValue((int)-1);
	var_290_int = var_281_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2049()
{
	KillTimer((int)10);
	return 0;
}


func_2562(var_323_int, var_324_string)
{
	var_325_int = 0; var_326_int = 0;
	GetVariable(var_324_string, var_326_int);
	var_326_int = var_323_int;
	return 2;
}


func_2567(var_87_int, var_88_int)
{
	var_89_object = Obj(); var_90_object = Obj();
	CreateIntVector(var_90_object);
	@@var_90_object:add(var_87_int);
	@@var_90_object:add(var_88_int);
	SendWorldWndMessage((int)3, var_90_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_787(var_0_object, var_1_object, var_2_object, var_3_string, var_374_object, var_375_object)
{
	var_0_object = var_375_object;
	var_1_object = var_374_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_381_string = "";
		func_855(var_375_object, "Smile");
		@@@var_0_object:SetMessage((int)525691);
		@@@var_0_object:ClearReplies();
		var_390_bool = 0; var_391_object = Obj();
		var_391_object = var_1_object;
		func_2752(var_391_object);
		if(var_390_bool != 0) {
			@@@var_0_object:AddReply((int)525692, (int)30673, (int)27015);
		}
		@@@var_0_object:AddReply((int)525695, (int)-1, (int)27018);
		@@@var_0_object:AddReply((int)542396, (int)-1, (int)44768);
		goto Label_825;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x317";
	}
Label_825:
	var_405_bool = 0;
	func_2918(var_405_bool);
	if(var_405_bool != 0) {

	Label_829:
		lshWaitForAnimEnd();
		var_406_string = var_3_string;
		if(var_406_string != 0) {
		} else {
			var_407_string = "";
			var_407_string = var_2_object;
			func_2493(var_407_string);
			goto Label_829;
	}
		PlayAnimation("all", "idle");

	Label_844:
		WaitForAnimEnd();
		var_410_string = var_3_string;
		if(var_410_string != 0) {
			goto Label_854;
		}
		PlayAnimation("all", "idle");
		goto Label_844;
	}
	goto Label_854;
	
Label_854:
	return 0;
	
}


func_2579(var_76_object, var_77_object, var_78_int)
{
	var_79_int = 0; var_80_int = 0; var_81_bool = 0; var_82_int = 0; var_83_int = 0; var_84_bool = 0;
	@@var_77_object:GetItemID(var_82_int);
	GetInvItemProperty(var_83_int, var_82_int, "Category");
	@@var_76_object:AddItem(var_84_bool, var_77_object, var_83_int, var_78_int);
	var_86_bool = var_84_bool == 0; //@nz
	if(var_86_bool != 0) {
		@@var_76_object:DropItems(var_77_object, var_78_int);
	} else {
		var_87_int = 0; var_88_int = 0;
		var_82_int = var_87_int;
		var_78_int = var_88_int;
		func_2567(var_87_int, var_88_int);
	}
	return 6;
	
}


func_2843(var_41_object)
{
	var_42_object = Obj(); var_43_object = Obj(); var_44_object = Obj(); var_45_object = Obj();
	GetMainOutdoorScene(var_44_object);
	var_46_bool = var_44_object == 0; //@ne
	if(var_46_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_45_object = 0;
		var_45_object = var_41_object;
		return 4;
	}
	@@var_44_object:GetMap(var_45_object);
	var_45_object = var_41_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2337()
{
	var_270_bool = 0; var_271_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_273_bool = 0;
	func_2918(var_273_bool);
	if(var_273_bool != 0) {
	} else {
		HasAnimationTrack(var_271_bool, "head");
		var_275_bool = var_271_bool;
		if(var_275_bool == 0) goto Label_2354;
		UnlookAsync("head");
	}
Label_2354:
	return 2;
	
}


func_2598(var_71_object, var_72_string, var_73_int)
{
	var_74_object = Obj(); var_75_object = Obj();
	CreateInvItem(var_75_object);
	@@var_75_object:SetItemName(var_72_string);
	var_76_object = Obj(); var_77_object = Obj(); var_78_int = 0;
	var_71_object = var_76_object;
	var_75_object = var_77_object;
	var_73_int = var_78_int;
	func_2579(var_76_object, var_77_object, var_78_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2552(var_90_cvector, var_91_cvector)
{
	var_93_float = 0; var_94_float = 0;
	var_95_int = var_91_cvector | var_91_cvector;
	var_94_float = sqrt(var_95_int);
	var_96_float = 9.999999974752427e-07;
	var_97_bool = var_94_float < var_96_float;
	if(var_97_bool != 0) {
		var_90_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_90_cvector = var_91_cvector / var_94_float;
	return 2;
}


func_2860(var_57_object, var_58_string, var_59_float)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_object = Obj(); var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_object = Obj(); var_68_bool = 0;
	GetMainOutdoorScene(var_67_object);
	var_69_bool = var_67_object == 0; //@ne
	if(var_69_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_67_object:GetLocator(var_58_string, var_68_bool, var_65_cvector, var_66_cvector);
	var_71_bool = var_68_bool == 0; //@nz
	if(var_71_bool != 0) {
		var_73_int = "Warning: outdoor scene locator " + var_58_string;
		var_75_int = var_73_int + " doesnt exist";
		Trace(var_75_int);
	}
	@@var_67_object:GetMap(var_57_object);
	var_76_bool = var_57_object == 0; //@ne
	if(var_76_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_78_float = GetByIndex(var_65_cvector, 0);
	var_79_float = GetByIndex(var_65_cvector, 2);
	@@var_57_object:SetMapParams(var_78_float, var_79_float, var_59_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_2355(var_124_bool, var_125_object)
{
	var_129_int = 0; var_130_int = 0; var_131_int = 0; var_132_int = 0;
	GetVariable("voice_common", var_131_int);
	var_134_int = var_131_int;
	if(var_134_int != 0) {
		var_135_bool = 0; var_136_object = Obj();
		var_125_object = var_136_object;
		func_2413(var_135_bool, var_136_object);
		var_165_bool = var_135_bool == 0; //@nz
		if(var_165_bool != 0) {
			var_166_bool = 0; var_167_object = Obj();
			var_125_object = var_167_object;
			func_2450(var_166_bool, var_167_object);
			var_201_bool = var_166_bool == 0; //@nz
			if(var_201_bool != 0) {
				var_124_bool = 0;
				return 4;
			}
		}
		irand(var_132_int, (int)2);
		var_203_int = var_132_int;
		if(var_203_int != 0) {
			var_206_int = var_131_int + (int)1;
			var_208_int = var_206_int % (int)3;
			SetVariable("voice_common", var_208_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_211_bool = 0; var_212_object = Obj();
		var_125_object = var_212_object;
		func_2450(var_211_bool, var_212_object);
		var_213_bool = var_211_bool == 0; //@nz
		if(var_213_bool != 0) {
			var_214_bool = 0; var_215_object = Obj();
			var_125_object = var_215_object;
			func_2413(var_214_bool, var_215_object);
			var_216_bool = var_214_bool == 0; //@nz
			if(var_216_bool != 0) {
				var_124_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_2411;
	
Label_2411:
	var_124_bool = 1;
	return 4;
	
}


func_2611(var_52_float)
{
	var_53_float = 0; var_54_float = 0;
	GetGameTime(var_54_float);
	var_54_float = var_52_float;
	return 2;
}


func_2616(var_179_int)
{
	var_180_float = 0; var_181_float = 0;
	GetGameTime(var_181_float);
	var_183_int = 0;
	var_183_int = var_181_float / (int)24;
	var_179_int = (int)1 + var_183_int;
	return 2;
}


func_1596(var_0_object, var_1_object, var_2_object, var_3_string, var_518_object, var_519_object)
{
	var_0_object = var_519_object;
	var_1_object = var_518_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_525_string = "";
		func_1659(var_519_object, "Neutral");
		@@@var_0_object:SetMessage((int)535284);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535285, (int)36962, (int)36961);
		@@@var_0_object:AddReply((int)535292, (int)-1, (int)36968);
		@@@var_0_object:AddReply((int)535293, (int)-1, (int)36969);
		goto Label_1629;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x640";
	}
Label_1629:
	var_543_bool = 0;
	func_2918(var_543_bool);
	if(var_543_bool != 0) {

	Label_1633:
		lshWaitForAnimEnd();
		var_544_string = var_3_string;
		if(var_544_string != 0) {
		} else {
			var_545_string = "";
			var_545_string = var_2_object;
			func_2493(var_545_string);
			goto Label_1633;
	}
		PlayAnimation("all", "idle");

	Label_1648:
		WaitForAnimEnd();
		var_548_string = var_3_string;
		if(var_548_string != 0) {
			goto Label_1658;
		}
		PlayAnimation("all", "idle");
		goto Label_1648;
	}
	goto Label_1658;
	
Label_1658:
	return 0;
	
}


func_1855(var_0_object, var_1_object, var_2_object, var_3_string, var_577_object, var_578_object)
{
	var_0_object = var_578_object;
	var_1_object = var_577_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_584_string = "";
		func_1913(var_578_object, "Neutral");
		@@@var_0_object:SetMessage((int)540545);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540546, (int)-1, (int)42555);
		@@@var_0_object:AddReply((int)540798, (int)-1, (int)42847);
		goto Label_1883;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x743";
	}
Label_1883:
	var_599_bool = 0;
	func_2918(var_599_bool);
	if(var_599_bool != 0) {

	Label_1887:
		lshWaitForAnimEnd();
		var_600_string = var_3_string;
		if(var_600_string != 0) {
		} else {
			var_601_string = "";
			var_601_string = var_2_object;
			func_2493(var_601_string);
			goto Label_1887;
	}
		PlayAnimation("all", "idle");

	Label_1902:
		WaitForAnimEnd();
		var_604_string = var_3_string;
		if(var_604_string != 0) {
			goto Label_1912;
		}
		PlayAnimation("all", "idle");
		goto Label_1902;
	}
	goto Label_1912;
	
Label_1912:
	return 0;
	
}


func_2625(var_278_bool, var_279_int)
{
	var_280_int = 0;
	func_2616(var_280_int);
	var_278_bool = var_280_int == var_279_int;
	return 0;
}


func_2631(var_56_string, var_57_int)
{
	var_58_string = ""; var_59_string = "";
	var_60_int = var_57_int;
	if(var_60_int != 0) {
		"idle" = "idle" + var_57_int;
	}
	var_59_string = var_56_string;
	return 2;
}


func_584(var_0_object, var_1_object, var_2_object, var_3_string, var_219_object, var_220_object)
{
	var_0_object = var_220_object;
	var_1_object = var_219_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_226_string = "";
		func_642(var_220_object, "Neutral");
		@@@var_0_object:SetMessage((int)525516);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)525517, (int)-1, (int)26873);
		@@@var_0_object:AddReply((int)526273, (int)-1, (int)27549);
		goto Label_612;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x24c";
	}
Label_612:
	var_250_bool = 0;
	func_2918(var_250_bool);
	if(var_250_bool != 0) {

	Label_616:
		lshWaitForAnimEnd();
		var_251_string = var_3_string;
		if(var_251_string != 0) {
		} else {
			var_252_string = "";
			var_252_string = var_2_object;
			func_2493(var_252_string);
			goto Label_616;
	}
		PlayAnimation("all", "idle");

	Label_631:
		WaitForAnimEnd();
		var_265_string = var_3_string;
		if(var_265_string != 0) {
			goto Label_641;
		}
		PlayAnimation("all", "idle");
		goto Label_631;
	}
	goto Label_641;
	
Label_641:
	return 0;
	
}


func_2893(var_115_int)
{
	var_116_int = 0; var_117_int = 0;
	GetVariable("branch", var_117_int);
	var_120_bool = var_117_int == (int)0;
	if(var_120_bool != 0) {
		var_115_int = 1;
		return 2;
	EMIT "GOTO 0xb5c";
	}
	var_122_bool = var_117_int == (int)1;
	if(var_122_bool != 0) {
		var_115_int = 2;
		return 2;
	}
	var_115_int = 3;
	return 2;
}


func_2638(var_50_int)
{
	var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0;
	var_53_int = 0;
	
Label_2640:
	var_56_string = ""; var_57_int = 0;
	var_53_int = var_57_int;
	func_2631(var_56_string, var_57_int);
	HasAnimation(var_54_bool, "all", var_56_string);
	var_61_bool = var_54_bool == 0; //@nz
	if(var_61_bool != 0) {
	} else {
		var_53_int = var_53_int + (int)1;
		goto Label_2640;
	}
	var_53_int = var_50_int;
	return 4;
	
}


func_1101(var_0_object, var_417_int, var_418_object)
{
	var_420_object = Obj(); var_421_bool = 0; var_422_int = 0; var_423_bool = 0; var_424_object = Obj(); var_425_bool = 0; var_426_int = 0; var_427_bool = 0;
	var_0_object = var_418_object;
	var_428_bool = 0; var_429_object = Obj(); var_430_float = 0;
	var_418_object = var_429_object;
	func_2268(var_428_bool, var_429_object, (float)70.0);
	var_431_bool = var_428_bool == 0; //@nz
	if(var_431_bool != 0) {
		var_417_int = -2;
		return 8;
	}
	CreateDialog(var_424_object);
	var_432_int = 0;
	func_2912(var_432_int);
	@@var_424_object:SetNPCName(var_432_int);
	var_433_int = 0;
	func_2910(var_433_int);
	@@var_424_object:SetNPCDescription(var_433_int);
	var_434_string = "";
	func_2914(var_434_string);
	@@var_424_object:SetPhoto(var_434_string);
	var_435_string = "";
	func_2916(var_435_string);
	@@var_424_object:SetPhoto2(var_435_string);
	var_436_int = 0;
	func_2893(var_436_int);
	@@var_424_object:SetPlayerName(var_436_int);
	IsOverrideActive(var_425_bool);
	var_437_bool = var_425_bool;
	if(var_437_bool != 0) {
		var_417_int = -2;
		return 8;
	}
	DoDialog(var_424_object);
	var_438_bool = 0; var_439_object = Obj();
	func_2546(Obj());
	var_440_object = var_439_object;
	func_2355(var_438_bool, var_439_object);
	var_441_object = Obj(); var_442_object = Obj();
	var_418_object = var_441_object;
	var_424_object = var_442_object;
	TaskCall(7);
	func_1182(var_443_object, var_444_object, var_445_string, var_446_bool, var_441_object, var_442_object);
	TaskReturn();
	@@var_424_object:IsDialogEnd(var_427_bool);
	
Label_1164:
	var_490_bool = var_427_bool == 0; //@nz
	if(var_490_bool != 0) {
		sync();
		@@var_424_object:IsDialogEnd(var_427_bool);
		goto Label_1164;
	}
	var_418_object = Obj();
	func_2337();
	StopDialog(var_424_object);
	@@var_424_object:GetReturnValue((int)-1);
	var_426_int = var_417_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_305_object, var_306_object)
{
	var_0_object = var_306_object;
	var_1_object = var_305_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_312_string = "";
		func_149(var_306_object, "Neutral");
		@@@var_0_object:SetMessage((int)524791);
		@@@var_0_object:ClearReplies();
		var_321_bool = 0; var_322_object = Obj();
		var_322_object = var_1_object;
		func_2740(var_322_object);
		if(var_321_bool != 0) {
			@@@var_0_object:AddReply((int)524792, (int)28167, (int)26107);
		}
		@@@var_0_object:AddReply((int)524793, (int)-1, (int)26108);
		@@@var_0_object:AddReply((int)542093, (int)-1, (int)44393);
		goto Label_119;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_119:
	var_338_bool = 0;
	func_2918(var_338_bool);
	if(var_338_bool != 0) {

	Label_123:
		lshWaitForAnimEnd();
		var_339_string = var_3_string;
		if(var_339_string != 0) {
		} else {
			var_340_string = "";
			var_340_string = var_2_object;
			func_2493(var_340_string);
			goto Label_123;
	}
		PlayAnimation("all", "idle");

	Label_138:
		WaitForAnimEnd();
		var_343_string = var_3_string;
		if(var_343_string != 0) {
			goto Label_148;
		}
		PlayAnimation("all", "idle");
		goto Label_138;
	}
	goto Label_148;
	
Label_148:
	return 0;
	
}


func_855(var_2_object, var_381_string)
{
	var_382_bool = 0;
	func_2918(var_382_bool);
	var_383_bool = var_382_bool == 0; //@nz
	if(var_383_bool != 0) {
		return 0;
	}
	var_384_bool = var_381_string == var_2_object;
	if(var_384_bool != 0) {
		return 0;
	}
	var_385_string = ""; var_386_bool = 0;
	var_381_string = var_385_string;
	var_388_bool = var_381_string == "";
	if(var_388_bool != 0) {
		var_386_bool = 0;
	} else {
		var_386_bool = 1;
	}
	func_2509(var_385_string, var_386_bool);
	var_2_object = var_381_string;
	return 0;
	
}


func_2910(var_112_int)
{
	var_112_int = 515548;
	return 0;
}


func_2655()
{
	SetVariable("k1q03", (int)2);
	func_2776();
	return 0;
}


func_2912(var_111_int)
{
	var_111_int = 502873;
	return 0;
}


func_2914(var_113_string)
{
	var_113_string = "ui/NPC_Notkin.png";
	return 0;
}


func_2916(var_114_string)
{
	var_114_string = "ui/NPC_Notkin_b.png";
	return 0;
}


func_2918(var_106_bool)
{
	var_106_bool = 1;
	return 0;
}


func_2664()
{
	SetVariable("k4q01", (int)3);
	func_2789();
	return 0;
}


func_2920(var_49_object)
{
	var_50_bool = GlobalVars[1];
	var_51_bool = var_50_bool == 0; //@nz
	if(var_51_bool != 0) {
		var_52_int = 0; var_53_object = Obj();
		var_49_object = var_53_object;
		TaskCall(2);
		func_503(var_54_object, var_52_int, var_53_object);
		TaskReturn();
		var_277_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_278_bool = 0; var_279_int = 0;
	func_2625(var_278_bool, (int)1);
	if(var_278_bool != 0) {
		var_281_int = 0; var_282_object = Obj();
		var_49_object = var_282_object;
		TaskCall(0);
		func_0(var_283_object, var_281_int, var_282_object);
		TaskReturn();
		return 0;
	}
	var_348_bool = 0; var_349_int = 0;
	func_2625(var_348_bool, (int)4);
	if(var_348_bool != 0) {
		var_350_int = 0; var_351_object = Obj();
		var_49_object = var_351_object;
		TaskCall(4);
		func_706(var_352_object, var_350_int, var_351_object);
		TaskReturn();
		return 0;
	}
	var_415_bool = 0; var_416_int = 0;
	func_2625(var_415_bool, (int)10);
	if(var_415_bool != 0) {
		var_417_int = 0; var_418_object = Obj();
		var_49_object = var_418_object;
		TaskCall(6);
		func_1101(var_419_object, var_417_int, var_418_object);
		TaskReturn();
		return 0;
	}
	var_492_bool = 0; var_493_int = 0;
	func_2625(var_492_bool, (int)12);
	if(var_492_bool != 0) {
		var_494_int = 0; var_495_object = Obj();
		var_49_object = var_495_object;
		TaskCall(8);
		func_1515(var_496_object, var_494_int, var_495_object);
		TaskReturn();
		return 0;
	}
	var_553_int = 0; var_554_object = Obj();
	var_49_object = var_554_object;
	TaskCall(10);
	func_1774(var_555_object, var_553_int, var_554_object);
	TaskReturn();
	return 0;
}


func_2413(var_135_bool, var_136_object)
{
	var_137_string = ""; var_138_int = 0; var_139_bool = 0; var_140_int = 0; var_141_string = ""; var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = "";
	var_142_string = "c";
	var_143_int = 0;
	
Label_2416:
	if((int)1 != 0) {
		var_149_int = var_143_int + (int)1;
		var_150_int = var_142_string + var_149_int;
		@@var_136_object:HasProperty(var_150_int, var_144_bool);
		var_151_bool = var_144_bool == 0; //@nz
		if(var_151_bool != 0) {
		} else {
			var_143_int = var_143_int + (int)1;
			goto Label_2416;
		}
	}
	var_152_bool = var_143_int == 0; //@nz
	if(var_152_bool != 0) {
		var_135_bool = 0;
		return 10;
	}
	var_145_int = 0;
	var_154_bool = var_143_int > (int)1;
	if(var_154_bool != 0) {
		irand(var_145_int, var_143_int);
	}
	var_156_int = var_145_int + (int)1;
	var_157_int = var_142_string + var_156_int;
	@@var_136_object:GetProperty(var_157_int, var_146_string);
	var_158_bool = 0; var_159_string = "";
	var_146_string = var_159_string;
	func_2524(var_158_bool, var_159_string);
	var_158_bool = var_135_bool;
	return 10;
	
}


func_2160()
{
	var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_int = 0; var_47_bool = 0;
	WaitForAnimEnd();
	var_48_bool = 0;
	func_2263(var_48_bool);
	var_49_bool = var_48_bool == 0; //@nz
	if(var_49_bool != 0) {
		return 12;
	}
	func_2638((int)0);
	var_50_int = var_42_int;
	var_43_int = 0;
	
Label_2174:
	var_63_bool = 0;
	var_63_bool = 0;
	var_65_bool = var_43_int < (int)5;
	if(var_65_bool != 0) {
		var_66_bool = 0;
		func_2263(var_66_bool);
		if(var_66_bool != 0) {
			var_63_bool = 1;
		}
	}
	if(var_63_bool != 0) {
		var_67_bool = var_42_int == 0; //@nz
		if(var_67_bool != 0) {
			Sleep((int)3, var_44_bool);
			var_69_bool = var_44_bool == 0; //@nz
			if(var_69_bool != 0) {
			} else {
		} else {
				irand(var_45_int, var_42_int);
				irand(var_46_int, (int)5);
				var_75_bool = var_46_int != (int)0;
				if(var_75_bool != 0) {
					var_45_int = 0;
				}
				var_77_string = ""; var_78_int = 0;
				var_45_int = var_78_int;
				func_2631(var_77_string, var_78_int);
				PlayAnimation("all", var_77_string);
				WaitForAnimEnd(var_47_bool);
				var_79_bool = var_47_bool == 0; //@nz
				if(var_79_bool == 0) goto Label_2215;
				goto Label_2226;
		}
		Label_2215:
			var_70_bool = 0;
			func_2229(var_70_bool);
			var_71_bool = var_70_bool == 0; //@nz
			if(var_71_bool != 0) {
				goto Label_2226;
			}
			ResetAAS();
			var_43_int = var_43_int + (int)1;
			goto Label_2174;

		}
	}
Label_2226:
	ResetAAS();
	return 12;
	
}


func_2673()
{
	SetVariable("k10q01KnowAboutRubin", (int)1);
	return 0;
}


func_2679()
{
	var_39_object = Obj(); var_40_object = Obj();
	func_2843(Obj());
	var_41_object = var_40_object;
	var_52_float = 0;
	func_2611(var_52_float);
	@@var_40_object:AddMark("k10q01NotkinGotoRubin", "pt_map_rubin", (int)3, (int)530195, var_52_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1913(var_2_object, var_584_string)
{
	var_585_bool = 0;
	func_2918(var_585_bool);
	var_586_bool = var_585_bool == 0; //@nz
	if(var_586_bool != 0) {
		return 0;
	}
	var_587_bool = var_584_string == var_2_object;
	if(var_587_bool != 0) {
		return 0;
	}
	var_588_string = ""; var_589_bool = 0;
	var_584_string = var_588_string;
	var_591_bool = var_584_string == "";
	if(var_591_bool != 0) {
		var_589_bool = 0;
	} else {
		var_589_bool = 1;
	}
	func_2509(var_588_string, var_589_bool);
	var_2_object = var_584_string;
	return 0;
	
}


func_1659(var_2_object, var_525_string)
{
	var_526_bool = 0;
	func_2918(var_526_bool);
	var_527_bool = var_526_bool == 0; //@nz
	if(var_527_bool != 0) {
		return 0;
	}
	var_528_bool = var_525_string == var_2_object;
	if(var_528_bool != 0) {
		return 0;
	}
	var_529_string = ""; var_530_bool = 0;
	var_525_string = var_529_string;
	var_532_bool = var_525_string == "";
	if(var_532_bool != 0) {
		var_530_bool = 0;
	} else {
		var_530_bool = 1;
	}
	func_2509(var_529_string, var_530_bool);
	var_2_object = var_525_string;
	return 0;
	
}


func_642(var_2_object, var_226_string)
{
	var_227_bool = 0;
	func_2918(var_227_bool);
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
	func_2509(var_230_string, var_231_bool);
	var_2_object = var_226_string;
	return 0;
	
}


func_2695()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_2701(var_68_object)
{
	Trace("Gun is given");
	var_71_object = Obj(); var_72_string = ""; var_73_int = 0;
	var_68_object = var_71_object;
	func_2598(var_71_object, "Gun", (int)1);
	return 0;
}


func_2450(var_166_bool, var_167_object)
{
	var_168_string = ""; var_169_int = 0; var_170_bool = 0; var_171_int = 0; var_172_string = ""; var_173_string = ""; var_174_int = 0; var_175_bool = 0; var_176_int = 0; var_177_string = "";
	var_179_int = 0;
	func_2616(var_179_int);
	var_185_int = "d" + var_179_int;
	var_173_string = var_185_int + "m";
	var_174_int = 0;
	
Label_2459:
	if((int)1 != 0) {
		var_189_int = var_174_int + (int)1;
		var_190_int = var_173_string + var_189_int;
		@@var_167_object:HasProperty(var_190_int, var_175_bool);
		var_191_bool = var_175_bool == 0; //@nz
		if(var_191_bool != 0) {
		} else {
			var_174_int = var_174_int + (int)1;
			goto Label_2459;
		}
	}
	var_192_bool = var_174_int == 0; //@nz
	if(var_192_bool != 0) {
		var_166_bool = 0;
		return 10;
	}
	var_176_int = 0;
	var_194_bool = var_174_int > (int)1;
	if(var_194_bool != 0) {
		irand(var_176_int, var_174_int);
	}
	var_196_int = var_176_int + (int)1;
	var_197_int = var_173_string + var_196_int;
	@@var_167_object:GetProperty(var_197_int, var_177_string);
	var_198_bool = 0; var_199_string = "";
	var_177_string = var_199_string;
	func_2524(var_198_bool, var_199_string);
	var_198_bool = var_166_bool;
	return 10;
	
}


func_149(var_2_object, var_312_string)
{
	var_313_bool = 0;
	func_2918(var_313_bool);
	var_314_bool = var_313_bool == 0; //@nz
	if(var_314_bool != 0) {
		return 0;
	}
	var_315_bool = var_312_string == var_2_object;
	if(var_315_bool != 0) {
		return 0;
	}
	var_316_string = ""; var_317_bool = 0;
	var_312_string = var_316_string;
	var_319_bool = var_312_string == "";
	if(var_319_bool != 0) {
		var_317_bool = 0;
	} else {
		var_317_bool = 1;
	}
	func_2509(var_316_string, var_317_bool);
	var_2_object = var_312_string;
	return 0;
	
}


func_2712(var_56_object)
{
	var_57_object = Obj(); var_58_string = ""; var_59_float = 0;
	func_2843(Obj());
	var_60_object = var_57_object;
	func_2860(var_57_object, "pt_map_rubin", (float)2);
	var_80_object = Obj();
	func_2843(var_80_object);
	@@var_56_object:ShowMap(var_80_object);
	return 0;
}


func_1182(var_0_object, var_1_object, var_2_object, var_3_string, var_441_object, var_442_object)
{
	var_0_object = var_442_object;
	var_1_object = var_441_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_448_bool = 0; var_449_object = Obj();
		var_449_object = var_1_object;
		func_2764(var_449_object);
		var_454_bool = var_448_bool == 0; //@nz
		if(var_454_bool != 0) {
			var_455_object = Obj(); var_456_object = Obj();
			var_455_object = var_1_object;
			var_456_object = var_0_object;
			func_2673();
			var_459_string = "";
			func_1271(var_442_object, "Neutral");
			@@@var_0_object:SetMessage((int)527714);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527715, (int)29269, (int)29067);
			@@@var_0_object:AddReply((int)527928, (int)29269, (int)29279);
		} else {
				var_482_string = "";
				func_1271(var_442_object, "Neutral");
				@@@var_0_object:SetMessage((int)527716);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)527717, (int)-1, (int)29069);
				@@@var_0_object:AddReply((int)527918, (int)-1, (int)29268);
				goto Label_1241;
		}
	}
Label_1241:
	var_474_bool = 0;
	func_2918(var_474_bool);
	if(var_474_bool != 0) {

	Label_1245:
		lshWaitForAnimEnd();
		var_475_string = var_3_string;
		if(var_475_string != 0) {
		} else {
			var_476_string = "";
			var_476_string = var_2_object;
			func_2493(var_476_string);
			goto Label_1245;
	}
		PlayAnimation("all", "idle");

	Label_1260:
		WaitForAnimEnd();
		var_479_string = var_3_string;
		if(var_479_string != 0) {
			goto Label_1270;
		}
		PlayAnimation("all", "idle");
		goto Label_1260;

	}
	goto Label_1270;
	
Label_1270:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4a2";


func_2728(var_172_bool)
{
	var_174_int = 0; var_175_string = "";
	func_2562(var_174_int, "k1q01DobermanDead");
	var_177_bool = var_174_int != (int)0;
	if(var_177_bool != 0) {
		var_172_bool = 1;
		return 0;
	}
	var_172_bool = 0;
	return 0;
}


func_2740(var_321_bool)
{
	var_323_int = 0; var_324_string = "";
	func_2562(var_323_int, "k1q03");
	var_328_bool = var_323_int == (int)1;
	if(var_328_bool != 0) {
		var_321_bool = 1;
		return 0;
	}
	var_321_bool = 0;
	return 0;
}


func_2229(var_70_bool)
{
	var_70_bool = 1;
	return 0;
}


func_2231()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_2236(var_46_float, var_47_object)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	GetPosition(var_51_cvector);
	@@var_47_object:GetPosition(var_52_cvector);
	var_53_cvector = var_52_cvector - var_51_cvector;
	var_46_float = var_53_cvector | var_53_cvector;
	return 6;
}


func_2493(var_252_string)
{
	var_253_bool = 0; var_254_float = 0; var_255_float = 0; var_256_bool = 0; var_257_float = 0; var_258_float = 0;
	lshHasAnimation(var_256_bool, var_252_string);
	var_259_bool = var_256_bool;
	if(var_259_bool != 0) {
		lshGetAnimTimes(var_252_string, var_257_float, var_258_float);
		lshPlayAnimation(var_257_float, var_258_float, (bool)0);
	} else {
		var_262_int = "Can't find lsh animation : " + var_252_string;
		Trace(var_262_int);
	}
	return 6;
	
}


func_2752(var_390_bool)
{
	var_392_int = 0; var_393_string = "";
	func_2562(var_392_int, "k4q01");
	var_395_bool = var_392_int == (int)2;
	if(var_395_bool != 0) {
		var_390_bool = 1;
		return 0;
	}
	var_390_bool = 0;
	return 0;
}


func_1984(var_0_object)
{
	var_32_bool = 0;
	func_2263(var_32_bool);
	var_35_bool = var_32_bool == 0; //@nz
	if(var_35_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_1993:
	func_2160();
	goto Label_1993;
}
EMIT "Return(); Pop(0)";


func_706(var_0_object, var_350_int, var_351_object)
{
	var_353_object = Obj(); var_354_bool = 0; var_355_int = 0; var_356_bool = 0; var_357_object = Obj(); var_358_bool = 0; var_359_int = 0; var_360_bool = 0;
	var_0_object = var_351_object;
	var_361_bool = 0; var_362_object = Obj(); var_363_float = 0;
	var_351_object = var_362_object;
	func_2268(var_361_bool, var_362_object, (float)70.0);
	var_364_bool = var_361_bool == 0; //@nz
	if(var_364_bool != 0) {
		var_350_int = -2;
		return 8;
	}
	CreateDialog(var_357_object);
	var_365_int = 0;
	func_2912(var_365_int);
	@@var_357_object:SetNPCName(var_365_int);
	var_366_int = 0;
	func_2910(var_366_int);
	@@var_357_object:SetNPCDescription(var_366_int);
	var_367_string = "";
	func_2914(var_367_string);
	@@var_357_object:SetPhoto(var_367_string);
	var_368_string = "";
	func_2916(var_368_string);
	@@var_357_object:SetPhoto2(var_368_string);
	var_369_int = 0;
	func_2893(var_369_int);
	@@var_357_object:SetPlayerName(var_369_int);
	IsOverrideActive(var_358_bool);
	var_370_bool = var_358_bool;
	if(var_370_bool != 0) {
		var_350_int = -2;
		return 8;
	}
	DoDialog(var_357_object);
	var_371_bool = 0; var_372_object = Obj();
	func_2546(Obj());
	var_373_object = var_372_object;
	func_2355(var_371_bool, var_372_object);
	var_374_object = Obj(); var_375_object = Obj();
	var_351_object = var_374_object;
	var_357_object = var_375_object;
	TaskCall(5);
	func_787(var_376_object, var_377_object, var_378_string, var_379_bool, var_374_object, var_375_object);
	TaskReturn();
	@@var_357_object:IsDialogEnd(var_360_bool);
	
Label_769:
	var_413_bool = var_360_bool == 0; //@nz
	if(var_413_bool != 0) {
		sync();
		@@var_357_object:IsDialogEnd(var_360_bool);
		goto Label_769;
	}
	var_351_object = Obj();
	func_2337();
	StopDialog(var_357_object);
	@@var_357_object:GetReturnValue((int)-1);
	var_359_int = var_350_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2244(var_39_bool, var_40_cvector)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0;
	GetPosition(var_44_cvector);
	var_45_cvector = var_40_cvector - var_44_cvector;
	var_47_float = GetByIndex(var_45_cvector, 0);
	var_48_float = GetByIndex(var_45_cvector, 2);
	Rotate(var_47_float, var_48_float, var_46_bool);
	var_46_bool = var_39_bool;
	return 6;
}


func_2764(var_448_bool)
{
	var_450_int = 0; var_451_string = "";
	func_2562(var_450_int, "k10q01KnowAboutRubin");
	var_453_bool = var_450_int != (int)0;
	if(var_453_bool != 0) {
		var_448_bool = 1;
		return 0;
	}
	var_448_bool = 0;
	return 0;
}


func_2509(var_230_string, var_231_bool)
{
	var_234_bool = 0; var_235_float = 0; var_236_float = 0; var_237_bool = 0; var_238_float = 0; var_239_float = 0;
	lshHasAnimation(var_237_bool, var_230_string);
	var_240_bool = var_237_bool;
	if(var_240_bool != 0) {
		lshGetAnimTimes(var_230_string, var_238_float, var_239_float);
		lshPlayAnimation(var_238_float, var_239_float, var_231_bool);
	} else {
		var_242_int = "Can't find lsh animation : " + var_230_string;
		Trace(var_242_int);
	}
	return 6;
	
}


func_2254(var_35_bool, var_36_object)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0);
	@@var_36_object:GetPosition(var_38_cvector);
	var_39_bool = 0; var_40_cvector = CVector(0,0,0);
	var_38_cvector = var_40_cvector;
	func_2244(var_39_bool, var_40_cvector);
	var_39_bool = var_35_bool;
	return 2;
}


func_1998(var_56_bool)
{
	var_57_object = Obj(); var_58_object = Obj();
	FindActor(var_58_object, "player");
	var_60_bool = var_58_object == 0; //@nz
	if(var_60_bool != 0) {
		var_56_bool = 0;
		return 2;
	}
	var_61_bool = 0; var_62_object = Obj();
	var_58_object = var_62_object;
	func_2254(var_61_bool, var_62_object);
	var_61_bool = var_56_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2263(var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0;
	IsLoaded(var_34_bool);
	var_34_bool = var_32_bool;
	return 2;
}


func_2776()
{
	var_41_object = Obj(); var_42_object = Obj();
	CreateDiaryEntry(var_42_object, (int)335, (int)2, (int)524802);
	var_46_bool = 0; var_47_object = Obj(); var_48_int = 0;
	var_42_object = var_47_object;
	func_2815(var_46_bool, var_47_object, (int)333);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2268(var_63_bool, var_64_object, var_65_float)
{
	var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_bool = 0; var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_bool = 0; var_83_bool = 0;
	@@var_64_object:GetPosition(var_76_cvector);
	@@var_64_object:GetEyesHeight(var_75_float);
	var_84_float = GetByIndex(var_76_cvector, 1);
	var_84_float = var_84_float + var_75_float;
	SetByIndex(var_76_cvector, 1) = var_84_float;
	GetPosition(var_77_cvector);
	GetEyesHeight(var_75_float);
	var_85_float = GetByIndex(var_77_cvector, 1);
	var_85_float = var_85_float + var_75_float;
	SetByIndex(var_77_cvector, 1) = var_85_float;
	var_78_cvector = var_76_cvector - var_77_cvector;
	var_86_float = GetByIndex(var_78_cvector, 1);
	SetByIndex(var_78_cvector, 1) = (float)0;
	var_87_int = var_78_cvector | var_78_cvector;
	var_88_float = sqrt(var_87_int);
	var_78_cvector = var_78_cvector / var_88_float;
	var_79_cvector = -var_78_cvector;
	var_89_float = var_78_cvector * var_65_float;
	var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0);
	var_91_cvector = var_79_cvector ^ CVector(0.0, 1.0, 0.0);
	func_2552(var_90_cvector, var_91_cvector);
	var_99_float = var_90_cvector * (int)25;
	var_100_int = var_89_float + var_99_float;
	var_80_cvector = var_100_int - CVector(0.0, 10.0, 0.0);
	var_81_cvector = var_77_cvector + var_80_cvector;
	IsOverrideActive(var_82_bool);
	var_102_bool = var_82_bool;
	if(var_102_bool != 0) {
		var_63_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_81_cvector, var_79_cvector, (bool)1);
	var_104_float = GetByIndex(var_80_cvector, 0);
	var_105_float = GetByIndex(var_80_cvector, 2);
	Rotate(var_104_float, var_105_float);
	var_106_bool = 0;
	func_2918(var_106_bool);
	if(var_106_bool != 0) {
	} else {
		HasAnimationTrack(var_83_bool, "head");
		var_108_bool = var_83_bool;
		if(var_108_bool == 0) goto Label_2331;
		LookAsyncCamera("head");
	}
Label_2331:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_63_bool = 1;
	return 18;
	
}


func_2013(var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0);
	var_109_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_108_float, var_109_float);
	return 0;
}


func_2524(var_158_bool, var_159_string)
{
	var_160_bool = 0; var_161_bool = 0;
	var_162_bool = 0;
	func_2918(var_162_bool);
	if(var_162_bool != 0) {
		lshHasSpeech(var_161_bool, var_159_string);
		var_163_bool = var_161_bool;
		if(var_163_bool != 0) {
			lshPlaySpeech(var_159_string);
			var_158_bool = 1;
			return 2;
		}
	}
	var_158_bool = 0;
	return 2;
}


func_2018(var_39_bool)
{
	var_40_object = Obj(); var_41_bool = 0; var_42_object = Obj(); var_43_bool = 0;
	FindActor(var_42_object, "player");
	var_45_bool = var_42_object == 0; //@nz
	if(var_45_bool != 0) {
		var_39_bool = 0;
		return 4;
	}
	var_46_float = 0; var_47_object = Obj();
	var_42_object = var_47_object;
	func_2236(var_46_float, var_47_object);
	var_55_bool = var_46_float > (float)90000.0;
	if(var_55_bool != 0) {
		var_39_bool = 0;
		return 4;
	}
	CanSee(var_43_bool, var_42_object);
	var_43_bool = var_39_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_2789()
{
	var_41_object = Obj(); var_42_object = Obj();
	CreateDiaryEntry(var_42_object, (int)371, (int)1, (int)525728);
	var_46_bool = 0; var_47_object = Obj(); var_48_int = 0;
	var_42_object = var_47_object;
	func_2815(var_46_bool, var_47_object, (int)368);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2539()
{
	var_34_bool = 0;
	func_2918(var_34_bool);
	if(var_34_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1515(var_0_object, var_494_int, var_495_object)
{
	var_497_object = Obj(); var_498_bool = 0; var_499_int = 0; var_500_bool = 0; var_501_object = Obj(); var_502_bool = 0; var_503_int = 0; var_504_bool = 0;
	var_0_object = var_495_object;
	var_505_bool = 0; var_506_object = Obj(); var_507_float = 0;
	var_495_object = var_506_object;
	func_2268(var_505_bool, var_506_object, (float)70.0);
	var_508_bool = var_505_bool == 0; //@nz
	if(var_508_bool != 0) {
		var_494_int = -2;
		return 8;
	}
	CreateDialog(var_501_object);
	var_509_int = 0;
	func_2912(var_509_int);
	@@var_501_object:SetNPCName(var_509_int);
	var_510_int = 0;
	func_2910(var_510_int);
	@@var_501_object:SetNPCDescription(var_510_int);
	var_511_string = "";
	func_2914(var_511_string);
	@@var_501_object:SetPhoto(var_511_string);
	var_512_string = "";
	func_2916(var_512_string);
	@@var_501_object:SetPhoto2(var_512_string);
	var_513_int = 0;
	func_2893(var_513_int);
	@@var_501_object:SetPlayerName(var_513_int);
	IsOverrideActive(var_502_bool);
	var_514_bool = var_502_bool;
	if(var_514_bool != 0) {
		var_494_int = -2;
		return 8;
	}
	DoDialog(var_501_object);
	var_515_bool = 0; var_516_object = Obj();
	func_2546(Obj());
	var_517_object = var_516_object;
	func_2355(var_515_bool, var_516_object);
	var_518_object = Obj(); var_519_object = Obj();
	var_495_object = var_518_object;
	var_501_object = var_519_object;
	TaskCall(9);
	func_1596(var_520_object, var_521_object, var_522_string, var_523_bool, var_518_object, var_519_object);
	TaskReturn();
	@@var_501_object:IsDialogEnd(var_504_bool);
	
Label_1578:
	var_551_bool = var_504_bool == 0; //@nz
	if(var_551_bool != 0) {
		sync();
		@@var_501_object:IsDialogEnd(var_504_bool);
		goto Label_1578;
	}
	var_495_object = Obj();
	func_2337();
	StopDialog(var_501_object);
	@@var_501_object:GetReturnValue((int)-1);
	var_503_int = var_494_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1774(var_0_object, var_553_int, var_554_object)
{
	var_556_object = Obj(); var_557_bool = 0; var_558_int = 0; var_559_bool = 0; var_560_object = Obj(); var_561_bool = 0; var_562_int = 0; var_563_bool = 0;
	var_0_object = var_554_object;
	var_564_bool = 0; var_565_object = Obj(); var_566_float = 0;
	var_554_object = var_565_object;
	func_2268(var_564_bool, var_565_object, (float)70.0);
	var_567_bool = var_564_bool == 0; //@nz
	if(var_567_bool != 0) {
		var_553_int = -2;
		return 8;
	}
	CreateDialog(var_560_object);
	var_568_int = 0;
	func_2912(var_568_int);
	@@var_560_object:SetNPCName(var_568_int);
	var_569_int = 0;
	func_2910(var_569_int);
	@@var_560_object:SetNPCDescription(var_569_int);
	var_570_string = "";
	func_2914(var_570_string);
	@@var_560_object:SetPhoto(var_570_string);
	var_571_string = "";
	func_2916(var_571_string);
	@@var_560_object:SetPhoto2(var_571_string);
	var_572_int = 0;
	func_2893(var_572_int);
	@@var_560_object:SetPlayerName(var_572_int);
	IsOverrideActive(var_561_bool);
	var_573_bool = var_561_bool;
	if(var_573_bool != 0) {
		var_553_int = -2;
		return 8;
	}
	DoDialog(var_560_object);
	var_574_bool = 0; var_575_object = Obj();
	func_2546(Obj());
	var_576_object = var_575_object;
	func_2355(var_574_bool, var_575_object);
	var_577_object = Obj(); var_578_object = Obj();
	var_554_object = var_577_object;
	var_560_object = var_578_object;
	TaskCall(11);
	func_1855(var_579_object, var_580_object, var_581_string, var_582_bool, var_577_object, var_578_object);
	TaskReturn();
	@@var_560_object:IsDialogEnd(var_563_bool);
	
Label_1837:
	var_607_bool = var_563_bool == 0; //@nz
	if(var_607_bool != 0) {
		sync();
		@@var_560_object:IsDialogEnd(var_563_bool);
		goto Label_1837;
	}
	var_554_object = Obj();
	func_2337();
	StopDialog(var_560_object);
	@@var_560_object:GetReturnValue((int)-1);
	var_562_int = var_553_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2546(var_126_object)
{
	var_127_object = Obj(); var_128_object = Obj();
	self(var_128_object);
	var_128_object = var_126_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2802(var_55_object)
{
	var_56_object = Obj(); var_57_object = Obj();
	GetDiaryRoot(var_57_object);
	var_58_bool = var_57_object == 0; //@nz
	if(var_58_bool != 0) {
		Trace("Can't retrieve diary root");
		var_55_object = 0;
		return 2;
	}
	var_57_object = var_55_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_503(var_0_object, var_52_int, var_53_object)
{
	var_55_object = Obj(); var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_object = Obj(); var_60_bool = 0; var_61_int = 0; var_62_bool = 0;
	var_0_object = var_53_object;
	var_63_bool = 0; var_64_object = Obj(); var_65_float = 0;
	var_53_object = var_64_object;
	func_2268(var_63_bool, var_64_object, (float)70.0);
	var_110_bool = var_63_bool == 0; //@nz
	if(var_110_bool != 0) {
		var_52_int = -2;
		return 8;
	}
	CreateDialog(var_59_object);
	var_111_int = 0;
	func_2912(var_111_int);
	@@var_59_object:SetNPCName(var_111_int);
	var_112_int = 0;
	func_2910(var_112_int);
	@@var_59_object:SetNPCDescription(var_112_int);
	var_113_string = "";
	func_2914(var_113_string);
	@@var_59_object:SetPhoto(var_113_string);
	var_114_string = "";
	func_2916(var_114_string);
	@@var_59_object:SetPhoto2(var_114_string);
	var_115_int = 0;
	func_2893(var_115_int);
	@@var_59_object:SetPlayerName(var_115_int);
	IsOverrideActive(var_60_bool);
	var_123_bool = var_60_bool;
	if(var_123_bool != 0) {
		var_52_int = -2;
		return 8;
	}
	DoDialog(var_59_object);
	var_124_bool = 0; var_125_object = Obj();
	func_2546(Obj());
	var_126_object = var_125_object;
	func_2355(var_124_bool, var_125_object);
	var_219_object = Obj(); var_220_object = Obj();
	var_53_object = var_219_object;
	var_59_object = var_220_object;
	TaskCall(3);
	func_584(var_221_object, var_222_object, var_223_string, var_224_bool, var_219_object, var_220_object);
	TaskReturn();
	@@var_59_object:IsDialogEnd(var_62_bool);
	
Label_566:
	var_268_bool = var_62_bool == 0; //@nz
	if(var_268_bool != 0) {
		sync();
		@@var_59_object:IsDialogEnd(var_62_bool);
		goto Label_566;
	}
	var_53_object = Obj();
	func_2337();
	StopDialog(var_59_object);
	@@var_59_object:GetReturnValue((int)-1);
	var_61_int = var_52_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2040()
{
	var_611_float = 0; var_612_float = 0;
	rand(var_612_float, (int)8, (int)16);
	SetTimer((int)10, var_612_float);
	return 2;
}


func_1271(var_2_object, var_459_string)
{
	var_460_bool = 0;
	func_2918(var_460_bool);
	var_461_bool = var_460_bool == 0; //@nz
	if(var_461_bool != 0) {
		return 0;
	}
	var_462_bool = var_459_string == var_2_object;
	if(var_462_bool != 0) {
		return 0;
	}
	var_463_string = ""; var_464_bool = 0;
	var_459_string = var_463_string;
	var_466_bool = var_459_string == "";
	if(var_466_bool != 0) {
		var_464_bool = 0;
	} else {
		var_464_bool = 1;
	}
	func_2509(var_463_string, var_464_bool);
	var_2_object = var_459_string;
	return 0;
	
}


func_2815(var_46_bool, var_47_object, var_48_int)
{
	var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0; var_52_object = Obj(); var_53_object = Obj(); var_54_int = 0;
	func_2802(Obj());
	var_55_object = var_52_object;
	@@var_52_object:Find(var_48_int, var_53_object);
	var_60_bool = var_53_object == 0; //@nz
	if(var_60_bool != 0) {
		var_62_int = "Can't find diary parent with id: " + var_48_int;
		Trace(var_62_int);
		var_46_bool = 0;
		return 6;
	}
	@@var_53_object:AddChild(var_47_object);
	SendWorldWndMessage((int)7);
	@@var_47_object:GetCategory(var_54_int);
	SetDiarySection(var_54_int);
	var_46_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


