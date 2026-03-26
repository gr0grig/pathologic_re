// @IMPORTS: Hold/0,StopGroup0/0,sync/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,GetPosition/1,GetDirection/1,SetPosition/1,SetDirection/1,LockAnimation/3,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,irand/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,GetMainOutdoorScene/1,AddBlankActor/4,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,SendWorldWndMessage/1,CreateFloatVector/1,FindActor/2,Trigger/2,GetGameTime/1,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Surprise|W:Fear|W:Confusion|W:Anger|W:icot_viktor_NPC_Trigger|W:stand|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|W:m|W:Can't find lsh animation : |W:.bin|A:add|W:money|W:Money|A:HasItem|W:reputation|W:ui/NPC_Viktor.png|W:ui/NPC_Viktor_b.png|W:quest_d1_02|W:fail|W:ood1Viktor1|W:ood1Viktor2|W:ood1Viktor3|W:playsound|W:givemoney|W:pt_b1q05_patrol_house|A:ShowMap|W:money 7000 is given|W:d7q03|W:d10q02|W:quest_d10_02|W:unlock_georg|W:ood11Viktor4|W:d11q06|W:quest_d11_06|W:ood3Viktor3|W:ood4Viktor1|W:d4q04|W:d4ViktorVisit|W:d11ViktorVisit|W:money25000 is given|W:d9ViktorVisit|W:ood2Viktor2|W:ood2Viktor1|W:KnowRavell|W:money 5000 is given|W:KnowViktor|W:d3q02ViktorGotoMladVlad|W:pt_map_mladvlad|A:AddMark|W:ood3Viktor1|W:d3q02|W:d3q02ViktorGotoHan|W:pt_map_han|W:ood3Viktor2|W:d1q01|W:d1q01ViktorGotoIsidor|W:pt_map_burah_father|W:quest_d1_01|W:place_patrol|W:d5q03|W:d5q03SavePrisoners|W:pt_map_uprava_prison|W:quest_d5_03|W:place_prisoners|W:ood5Viktor1|W:ood5Viktor2|W:ood5Viktor3|W:ood6Viktor1|W:d6q01|W:d6q01ViktorGotoAlexandr|W:pt_map_alexandr|W:d6q01ViktorGotoBigVlad|W:pt_map_bigvlad|W:d6q01ViktorGotoAlxBigSelf|W:pt_map_viktor|W:ood8Viktor1|W:ood9Viktor1|W:d9q01|W:quest_d9_01|W:place_rifles|W:ood9Viktor2|W:ood11Viktor1|W:ood11Viktor2|W:KnowMyth|W:d6ViktorVisit|W:ood9Viktor3|W:d1q02|W:d1q01TeloNedostupno|W:d1q01FirstGeorgVisit|W:hunter_mark|W:d2q03|W:d2q03MariaGotoViktor|W:d8KainIsReason|W:d9TalkToPolkovodec|W:d11q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x2083
// @RUN_TASK: 29
// @TASK_0: vars= params=0
// @EVENT_5: op=0x8 vars=
// @TASK_1: vars=object params=2
// @TASK_2: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb3 vars=int,int
// @TASK_3: vars=object params=2
// @TASK_4: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1cf vars=int,int
// @TASK_5: vars=object params=2
// @TASK_6: vars=object,object,string,bool params=2
// @EVENT_11: op=0x3e0 vars=int,int
// @TASK_7: vars=object params=2
// @TASK_8: vars=object,object,string,bool params=2
// @EVENT_11: op=0x8b8 vars=int,int
// @TASK_9: vars=object params=2
// @TASK_10: vars=object,object,string,bool params=2
// @EVENT_11: op=0xaf3 vars=int,int
// @TASK_11: vars=object params=2
// @TASK_12: vars=object,object,string,bool params=2
// @EVENT_11: op=0xe8f vars=int,int
// @TASK_13: vars=object params=2
// @TASK_14: vars=object,object,string,bool params=2
// @EVENT_11: op=0x10b2 vars=int,int
// @TASK_15: vars=object params=2
// @TASK_16: vars=object,object,string,bool params=2
// @EVENT_11: op=0x133c vars=int,int
// @TASK_17: vars=object params=2
// @TASK_18: vars=object,object,string,bool params=2
// @EVENT_11: op=0x14c6 vars=int,int
// @TASK_19: vars=object params=2
// @TASK_20: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1685 vars=int,int
// @TASK_21: vars=object params=2
// @TASK_22: vars=object,object,string,bool params=2
// @EVENT_11: op=0x19e7 vars=int,int
// @TASK_23: vars=object params=2
// @TASK_24: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1d18 vars=int,int
// @TASK_25: vars=object params=2
// @TASK_26: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1f20 vars=int,int
// @TASK_27: vars=object params=2
// @TASK_28: vars=object,object,string,bool params=2
// @EVENT_11: op=0x2059 vars=int,int
// @TASK_29: vars=bool,cvector,cvector params=0
// @EVENT_26: op=0x208a vars=string
// @EVENT_6: op=0x20c3 vars=
// @EVENT_0: op=0x20cc vars=object
// @PE: 0x5e,0x9d,0xb3,0x166,0x1b9,0x1cf,0x333,0x3ca,0x3e0,0x842,0x8a2,0x8b8,0xa78,0xadd,0xaf3,0xe04,0xe79,0xe8f,0x1009,0x109c,0x10b2,0x12e7,0x1326,0x133c,0x144f,0x14b0,0x14c6,0x15fa,0x166f,0x1685,0x1944,0x19d1,0x19e7,0x1cbe,0x1d02,0x1d18,0x1ed0,0x1f0a,0x1f20,0x2009,0x2043,0x2059,0x208a,0x2245,0x2286,0x22cd,0x22dd,0x22e7,0x22ed,0x22f3,0x22f9,0x22ff,0x230f,0x2319,0x2322,0x232b,0x2332,0x2334,0x233a,0x234a,0x2350,0x2356,0x235f,0x2365,0x236b,0x2375,0x237b,0x2381,0x2387,0x238d,0x2397,0x23a3,0x23bc,0x23c2,0x23e9,0x2435,0x243b,0x2441,0x2448,0x244e,0x2483,0x2489,0x248f,0x24a0,0x24a6,0x24ac,0x24b2,0x24b8,0x24be,0x24c4,0x24d0,0x24dc,0x24e8,0x24f4,0x2500,0x250c,0x2518,0x2524,0x2530,0x253c,0x2548,0x2554,0x2560,0x256c,0x2577,0x2583,0x258f,0x259b,0x25a7,0x25b3,0x25bf,0x25cb,0x25d7,0x25e3,0x25ef,0x25fb,0x2607,0x2613,0x261f,0x262b,0x2637,0x2643,0x264f,0x265b,0x2667,0x2673,0x267f,0x268b,0x2697,0x26a3,0x26af,0x26bb,0x26c7,0x26d3,0x26df,0x2857

task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_object, var_66_object, var_67_object, var_68_string, var_69_bool, var_70_bool, var_71_cvector, var_72_cvector)
{
	StopGroup0();
	sync();
	return 0;
}


task_2_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_bool, var_73_cvector, var_74_cvector)
{
	if((int)1 != 0) {
		func_8750();
		var_78_bool = var_73_cvector == (int)1779;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_9123();
			var_83_string = "";
			func_157(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)501575);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)501576, (int)1782, (int)1780);
			@@@var_0_object:AddReply((int)501577, (int)1782, (int)1781);
			return 0;
		}
		var_108_bool = var_73_cvector == (int)1782;
		if(var_108_bool != 0) {
			var_109_object = Obj(); var_110_object = Obj();
			var_109_object = var_1_object;
			var_110_object = var_0_object;
			func_9394();
			var_113_string = "";
			func_157(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)501578);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)501580, (int)1785, (int)1784);
			@@@var_0_object:AddReply((int)501579, (int)-1, (int)1783);
			return 0;
		}
		var_122_bool = var_73_cvector == (int)1785;
		if(var_122_bool != 0) {
			var_123_string = "";
			func_157(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)501581);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)501582, (int)-1, (int)1786);
			@@@var_0_object:AddReply((int)501583, (int)-1, (int)1787);
			return 0;
		}
		var_3_string = true;
		var_131_bool = 0;
		func_8923(var_131_bool);
		if(var_131_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb4";
	
}


task_4_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_bool, var_73_cvector, var_74_cvector)
{
	if((int)1 != 0) {
		func_8750();
		var_78_bool = var_74_cvector == (int)13819;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_9300();
			var_148_object = Obj(); var_149_object = Obj();
			var_148_object = var_1_object;
			var_149_object = var_0_object;
			func_9294();
		}
		var_153_bool = var_74_cvector == (int)13848;
		if(var_153_bool != 0) {
			var_154_object = Obj(); var_155_object = Obj();
			var_154_object = var_1_object;
			var_155_object = var_0_object;
			func_9300();
			var_156_object = Obj(); var_157_object = Obj();
			var_156_object = var_1_object;
			var_157_object = var_0_object;
			func_9294();
		}
		var_159_bool = var_73_cvector == (int)13254;
		if(var_159_bool != 0) {
			var_160_bool = 0; var_161_object = Obj();
			var_161_object = var_1_object;
			func_9795(var_161_object);
			if(var_160_bool != 0) {
				var_168_object = Obj(); var_169_object = Obj();
				var_168_object = var_1_object;
				var_169_object = var_0_object;
				func_9400();
				var_172_string = "";
				func_441(var_74_cvector, "Surprise");
				@@@var_0_object:SetMessage((int)512036);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)540874, (int)42939, (int)42937);
				@@@var_0_object:AddReply((int)540878, (int)42939, (int)42941);
				return 0;
			}
			var_196_string = "";
			func_441(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513016);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513017, (int)-1, (int)14223);
			return 0;
		}
		var_202_bool = var_73_cvector == (int)42939;
		if(var_202_bool != 0) {
			var_203_string = "";
			func_441(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)540876);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540877, (int)42938, (int)42940);
			@@@var_0_object:AddReply((int)540879, (int)42938, (int)42943);
			return 0;
		}
		var_212_bool = var_73_cvector == (int)42938;
		if(var_212_bool != 0) {
			var_213_string = "";
			func_441(var_74_cvector, "Fear");
			@@@var_0_object:SetMessage((int)540875);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540870, (int)42934, (int)42933);
			@@@var_0_object:AddReply((int)512640, (int)13821, (int)13820);
			return 0;
		}
		var_222_bool = var_73_cvector == (int)13821;
		if(var_222_bool != 0) {
			var_223_string = "";
			func_441(var_74_cvector, "Fear");
			@@@var_0_object:SetMessage((int)512641);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512644, (int)13825, (int)13824);
			return 0;
		}
		var_229_bool = var_73_cvector == (int)13825;
		if(var_229_bool != 0) {
			var_230_string = "";
			func_441(var_74_cvector, "Fear");
			@@@var_0_object:SetMessage((int)512645);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540881, (int)42947, (int)42946);
			return 0;
		}
		var_236_bool = var_73_cvector == (int)42947;
		if(var_236_bool != 0) {
			var_237_string = "";
			func_441(var_74_cvector, "Fear");
			@@@var_0_object:SetMessage((int)540882);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540883, (int)13818, (int)42949);
			@@@var_0_object:AddReply((int)512666, (int)-1, (int)13848);
			return 0;
		}
		var_246_bool = var_73_cvector == (int)42934;
		if(var_246_bool != 0) {
			var_247_string = "";
			func_441(var_74_cvector, "Fear");
			@@@var_0_object:SetMessage((int)540871);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512037, (int)13256, (int)13255);
			return 0;
		}
		var_253_bool = var_73_cvector == (int)13256;
		if(var_253_bool != 0) {
			var_254_string = "";
			func_441(var_74_cvector, "Fear");
			@@@var_0_object:SetMessage((int)512038);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540872, (int)13818, (int)42935);
			@@@var_0_object:AddReply((int)512635, (int)13816, (int)13815);
			return 0;
		}
		var_263_bool = var_73_cvector == (int)13816;
		if(var_263_bool != 0) {
			var_264_string = "";
			func_441(var_74_cvector, "Fear");
			@@@var_0_object:SetMessage((int)512636);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512637, (int)13818, (int)13817);
			return 0;
		}
		var_270_bool = var_73_cvector == (int)13818;
		if(var_270_bool != 0) {
			var_271_string = "";
			func_441(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512638);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512639, (int)-1, (int)13819);
			return 0;
		}
		var_3_string = true;
		var_276_bool = 0;
		func_8923(var_276_bool);
		if(var_276_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1d0";
	
}


task_6_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_bool, var_73_cvector, var_74_cvector)
{
	if((int)1 != 0) {
		func_8750();
		var_78_bool = var_74_cvector == (int)5625;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_8935();
		}
		var_84_bool = var_74_cvector == (int)5632;
		if(var_84_bool != 0) {
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_8935();
		}
		var_88_bool = var_74_cvector == (int)9281;
		if(var_88_bool != 0) {
			var_89_object = Obj(); var_90_object = Obj();
			var_89_object = var_1_object;
			var_90_object = var_0_object;
			func_8941();
		}
		var_94_bool = var_74_cvector == (int)33610;
		if(var_94_bool != 0) {
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_object;
			var_96_object = var_0_object;
			func_9199();
			var_144_object = Obj(); var_145_object = Obj();
			var_144_object = var_1_object;
			var_145_object = var_0_object;
			func_8959(var_145_object);
		}
		var_171_bool = var_74_cvector == (int)33611;
		if(var_171_bool != 0) {
			var_172_object = Obj(); var_173_object = Obj();
			var_172_object = var_1_object;
			var_173_object = var_0_object;
			func_9199();
			var_174_object = Obj(); var_175_object = Obj();
			var_174_object = var_1_object;
			var_175_object = var_0_object;
			func_8959(var_175_object);
		}
		var_177_bool = var_74_cvector == (int)34255;
		if(var_177_bool != 0) {
			var_178_object = Obj(); var_179_object = Obj();
			var_178_object = var_1_object;
			var_179_object = var_0_object;
			func_9199();
		}
		var_181_bool = var_74_cvector == (int)5661;
		if(var_181_bool != 0) {
			var_182_object = Obj(); var_183_object = Obj();
			var_182_object = var_1_object;
			var_183_object = var_0_object;
			func_8947();
		}
		var_187_bool = var_74_cvector == (int)22425;
		if(var_187_bool != 0) {
			var_188_object = Obj(); var_189_object = Obj();
			var_188_object = var_1_object;
			var_189_object = var_0_object;
			func_8925();
		}
		var_202_bool = var_74_cvector == (int)22426;
		if(var_202_bool != 0) {
			var_203_object = Obj(); var_204_object = Obj();
			var_203_object = var_1_object;
			var_204_object = var_0_object;
			func_8925();
		}
		var_206_bool = var_74_cvector == (int)22423;
		if(var_206_bool != 0) {
			var_207_object = Obj(); var_208_object = Obj();
			var_207_object = var_1_object;
			var_208_object = var_0_object;
			func_8925();
		}
		var_210_bool = var_73_cvector == (int)5624;
		if(var_210_bool != 0) {
			var_211_bool = 0; var_212_object = Obj();
			var_212_object = var_1_object;
			func_9484(var_212_object);
			var_219_bool = var_211_bool == 0; //@nz
			if(var_219_bool != 0) {
				var_220_string = "";
				func_970(var_74_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)505111);
				@@@var_0_object:ClearReplies();
				var_238_bool = 0; var_239_object = Obj();
				var_239_object = var_1_object;
				func_9424(var_239_object);
				if(var_238_bool != 0) {
					@@@var_0_object:AddReply((int)505112, (int)5626, (int)5625);
				}
				var_247_bool = 0; var_248_object = Obj();
				var_248_object = var_1_object;
				func_9424(var_248_object);
				if(var_247_bool != 0) {
					@@@var_0_object:AddReply((int)505119, (int)5626, (int)5632);
				}
				@@@var_0_object:AddReply((int)505120, (int)-1, (int)5634);
				return 0;
			}
			var_255_string = "";
			func_970(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)505106);
			@@@var_0_object:ClearReplies();
			var_257_bool = 0;
			var_257_bool = 0;
			var_258_bool = 0; var_259_object = Obj();
			var_259_object = var_1_object;
			func_9484(var_259_object);
			if(var_258_bool != 0) {
				var_260_bool = 0; var_261_object = Obj();
				var_261_object = var_1_object;
				func_9436(var_261_object);
				if(var_260_bool != 0) {
					var_257_bool = 1;
				}
			}
			if(var_257_bool != 0) {
				@@@var_0_object:AddReply((int)505107, (int)9234, (int)5620);
			}
			var_269_bool = 0;
			var_269_bool = 0;
			var_270_bool = 0;
			var_270_bool = 0;
			var_271_bool = 0; var_272_object = Obj();
			var_272_object = var_1_object;
			func_9472(var_272_object);
			if(var_271_bool != 0) {
				var_277_bool = 0; var_278_object = Obj();
				var_278_object = var_1_object;
				func_9951(var_278_object);
				if(var_277_bool != 0) {
					var_270_bool = 1;
				}
			}
			if(var_270_bool != 0) {
				var_293_bool = 0; var_294_object = Obj();
				var_294_object = var_1_object;
				func_9448(var_294_object);
				if(var_293_bool != 0) {
					var_269_bool = 1;
				}
			}
			if(var_269_bool != 0) {
				@@@var_0_object:AddReply((int)505142, (int)5662, (int)5661);
			}
			var_302_bool = 0; var_303_object = Obj();
			var_303_object = var_1_object;
			func_9412(var_303_object);
			if(var_302_bool != 0) {
				@@@var_0_object:AddReply((int)521229, (int)34260, (int)22420);
			}
			@@@var_0_object:AddReply((int)505110, (int)-1, (int)5623);
			return 0;
		}
		var_315_bool = var_73_cvector == (int)34260;
		if(var_315_bool != 0) {
			var_316_string = "";
			func_970(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)532789);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532790, (int)34264, (int)34261);
			@@@var_0_object:AddReply((int)532791, (int)34264, (int)34262);
			@@@var_0_object:AddReply((int)532792, (int)22421, (int)34263);
			return 0;
		}
		var_328_bool = var_73_cvector == (int)34264;
		if(var_328_bool != 0) {
			var_329_string = "";
			func_970(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)532793);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532794, (int)22421, (int)34266);
			@@@var_0_object:AddReply((int)532795, (int)34268, (int)34267);
			@@@var_0_object:AddReply((int)532798, (int)34273, (int)34272);
			return 0;
		}
		var_341_bool = var_73_cvector == (int)34273;
		if(var_341_bool != 0) {
			var_342_string = "";
			func_970(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)532799);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532800, (int)22421, (int)34274);
			@@@var_0_object:AddReply((int)532801, (int)22424, (int)34276);
			return 0;
		}
		var_351_bool = var_73_cvector == (int)34268;
		if(var_351_bool != 0) {
			var_352_string = "";
			func_970(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)532796);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532797, (int)22421, (int)34270);
			return 0;
		}
		var_358_bool = var_73_cvector == (int)22421;
		if(var_358_bool != 0) {
			var_359_string = "";
			func_970(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)521230);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521231, (int)22424, (int)22422);
			@@@var_0_object:AddReply((int)521232, (int)-1, (int)22423);
			return 0;
		}
		var_368_bool = var_73_cvector == (int)22424;
		if(var_368_bool != 0) {
			var_369_string = "";
			func_970(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)521233);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521234, (int)-1, (int)22425);
			@@@var_0_object:AddReply((int)521235, (int)-1, (int)22426);
			return 0;
		}
		var_378_bool = var_73_cvector == (int)5662;
		if(var_378_bool != 0) {
			var_379_string = "";
			func_970(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)505143);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)505144, (int)5664, (int)5663);
			@@@var_0_object:AddReply((int)505154, (int)5664, (int)5674);
			return 0;
		}
		var_388_bool = var_73_cvector == (int)5664;
		if(var_388_bool != 0) {
			var_389_string = "";
			func_970(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)505145);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)505146, (int)5666, (int)5665);
			@@@var_0_object:AddReply((int)505153, (int)5666, (int)5672);
			return 0;
		}
		var_398_bool = var_73_cvector == (int)5666;
		if(var_398_bool != 0) {
			var_399_string = "";
			func_970(var_74_cvector, "Anger");
			@@@var_0_object:SetMessage((int)505147);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)505148, (int)34256, (int)5667);
			@@@var_0_object:AddReply((int)505149, (int)-1, (int)5668);
			return 0;
		}
		var_408_bool = var_73_cvector == (int)34256;
		if(var_408_bool != 0) {
			var_409_string = "";
			func_970(var_74_cvector, "Anger");
			@@@var_0_object:SetMessage((int)532785);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532786, (int)-1, (int)34257);
			return 0;
		}
		var_415_bool = var_73_cvector == (int)9234;
		if(var_415_bool != 0) {
			var_416_string = "";
			func_970(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)508411);
			@@@var_0_object:ClearReplies();
			var_418_bool = 0; var_419_object = Obj();
			var_419_object = var_1_object;
			func_9651(var_419_object);
			if(var_418_bool != 0) {
				@@@var_0_object:AddReply((int)508448, (int)9282, (int)9281);
			}
			var_427_bool = 0; var_428_object = Obj();
			var_428_object = var_1_object;
			func_9460(var_428_object);
			if(var_427_bool != 0) {
				@@@var_0_object:AddReply((int)508463, (int)9300, (int)9299);
			}
			return 0;
		}
		var_437_bool = var_73_cvector == (int)9300;
		if(var_437_bool != 0) {
			var_438_string = "";
			func_970(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508464);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508465, (int)-1, (int)9301);
			return 0;
		}
		var_444_bool = var_73_cvector == (int)9282;
		if(var_444_bool != 0) {
			var_445_string = "";
			func_970(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)508449);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508451, (int)9287, (int)9284);
			@@@var_0_object:AddReply((int)508452, (int)9287, (int)9285);
			@@@var_0_object:AddReply((int)508453, (int)9287, (int)9286);
			return 0;
		}
		var_457_bool = var_73_cvector == (int)9287;
		if(var_457_bool != 0) {
			var_458_string = "";
			func_970(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508454);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524819, (int)26132, (int)26131);
			return 0;
		}
		var_464_bool = var_73_cvector == (int)26132;
		if(var_464_bool != 0) {
			var_465_string = "";
			func_970(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)524820);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524821, (int)26134, (int)26133);
			@@@var_0_object:AddReply((int)508412, (int)9236, (int)9235);
			@@@var_0_object:AddReply((int)524920, (int)26250, (int)26249);
			return 0;
		}
		var_477_bool = var_73_cvector == (int)26250;
		if(var_477_bool != 0) {
			var_478_string = "";
			func_970(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)524921);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524922, (int)9240, (int)26251);
			@@@var_0_object:AddReply((int)524924, (int)9251, (int)26254);
			return 0;
		}
		var_487_bool = var_73_cvector == (int)9236;
		if(var_487_bool != 0) {
			var_488_string = "";
			func_970(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508413);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508414, (int)9238, (int)9237);
			return 0;
		}
		var_494_bool = var_73_cvector == (int)9238;
		if(var_494_bool != 0) {
			var_495_string = "";
			func_970(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)508415);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508416, (int)9240, (int)9239);
			@@@var_0_object:AddReply((int)508418, (int)9242, (int)9241);
			return 0;
		}
		var_504_bool = var_73_cvector == (int)9242;
		if(var_504_bool != 0) {
			var_505_string = "";
			func_970(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)508419);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508456, (int)9292, (int)9291);
			return 0;
		}
		var_511_bool = var_73_cvector == (int)9292;
		if(var_511_bool != 0) {
			var_512_string = "";
			func_970(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)508457);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524827, (int)26134, (int)26140);
			return 0;
		}
		var_518_bool = var_73_cvector == (int)9240;
		if(var_518_bool != 0) {
			var_519_string = "";
			func_970(var_74_cvector, "Fear");
			@@@var_0_object:SetMessage((int)508417);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524826, (int)26134, (int)26138);
			return 0;
		}
		var_525_bool = var_73_cvector == (int)26134;
		if(var_525_bool != 0) {
			var_526_string = "";
			func_970(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)524822);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524823, (int)33604, (int)26135);
			@@@var_0_object:AddReply((int)508422, (int)9251, (int)9245);
			return 0;
		}
		var_535_bool = var_73_cvector == (int)9251;
		if(var_535_bool != 0) {
			var_536_string = "";
			func_970(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)508428);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508429, (int)9296, (int)9252);
			return 0;
		}
		var_542_bool = var_73_cvector == (int)9296;
		if(var_542_bool != 0) {
			var_543_string = "";
			func_970(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)508460);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524836, (int)9254, (int)26151);
			return 0;
		}
		var_549_bool = var_73_cvector == (int)33604;
		if(var_549_bool != 0) {
			var_550_string = "";
			func_970(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)532187);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508420, (int)9244, (int)9243);
			@@@var_0_object:AddReply((int)532775, (int)34244, (int)34243);
			return 0;
		}
		var_559_bool = var_73_cvector == (int)34244;
		if(var_559_bool != 0) {
			var_560_string = "";
			func_970(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)532776);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532777, (int)9254, (int)34245);
			return 0;
		}
		var_566_bool = var_73_cvector == (int)9244;
		if(var_566_bool != 0) {
			var_567_string = "";
			func_970(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)508421);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508430, (int)9254, (int)9253);
			@@@var_0_object:AddReply((int)524845, (int)9251, (int)26165);
			return 0;
		}
		var_576_bool = var_73_cvector == (int)9254;
		if(var_576_bool != 0) {
			var_577_string = "";
			func_970(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)508431);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524846, (int)33605, (int)26167);
			@@@var_0_object:AddReply((int)508432, (int)9256, (int)9255);
			return 0;
		}
		var_586_bool = var_73_cvector == (int)9256;
		if(var_586_bool != 0) {
			var_587_string = "";
			func_970(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508433);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508434, (int)9258, (int)9257);
			return 0;
		}
		var_593_bool = var_73_cvector == (int)9258;
		if(var_593_bool != 0) {
			var_594_string = "";
			func_970(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)508435);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508436, (int)33605, (int)9259);
			@@@var_0_object:AddReply((int)524828, (int)26143, (int)26142);
			return 0;
		}
		var_603_bool = var_73_cvector == (int)26143;
		if(var_603_bool != 0) {
			var_604_string = "";
			func_970(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)524829);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)524830, (int)33605, (int)26144);
			return 0;
		}
		var_610_bool = var_73_cvector == (int)33605;
		if(var_610_bool != 0) {
			var_611_string = "";
			func_970(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532188);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532189, (int)33607, (int)33606);
			@@@var_0_object:AddReply((int)532778, (int)34248, (int)34247);
			return 0;
		}
		var_620_bool = var_73_cvector == (int)34248;
		if(var_620_bool != 0) {
			var_621_string = "";
			func_970(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532779);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532780, (int)34251, (int)34249);
			@@@var_0_object:AddReply((int)532781, (int)34251, (int)34250);
			return 0;
		}
		var_630_bool = var_73_cvector == (int)34251;
		if(var_630_bool != 0) {
			var_631_string = "";
			func_970(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532782);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532783, (int)33607, (int)34253);
			@@@var_0_object:AddReply((int)532784, (int)-1, (int)34255);
			return 0;
		}
		var_640_bool = var_73_cvector == (int)33607;
		if(var_640_bool != 0) {
			var_641_string = "";
			func_970(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532190);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532191, (int)-1, (int)33610);
			@@@var_0_object:AddReply((int)532192, (int)-1, (int)33611);
			return 0;
		}
		var_650_bool = var_73_cvector == (int)5626;
		if(var_650_bool != 0) {
			var_651_string = "";
			func_970(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)505113);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)505114, (int)5628, (int)5627);
			@@@var_0_object:AddReply((int)505118, (int)-1, (int)5631);
			return 0;
		}
		var_660_bool = var_73_cvector == (int)5628;
		if(var_660_bool != 0) {
			var_661_string = "";
			func_970(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)505115);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)505116, (int)-1, (int)5629);
			@@@var_0_object:AddReply((int)505117, (int)-1, (int)5630);
			return 0;
		}
		var_3_string = true;
		var_669_bool = 0;
		func_8923(var_669_bool);
		if(var_669_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x3e1";
	
}


task_8_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_bool, var_73_cvector, var_74_cvector)
{
	if((int)1 != 0) {
		func_8750();
		var_78_bool = var_74_cvector == (int)8194;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_9089();
			var_83_object = Obj(); var_84_object = Obj();
			var_83_object = var_1_object;
			var_84_object = var_0_object;
			func_9101(var_84_object);
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_8953();
		}
		var_109_bool = var_74_cvector == (int)8192;
		if(var_109_bool != 0) {
			var_110_object = Obj(); var_111_object = Obj();
			var_110_object = var_1_object;
			var_111_object = var_0_object;
			func_9089();
		}
		var_113_bool = var_74_cvector == (int)34238;
		if(var_113_bool != 0) {
			var_114_object = Obj(); var_115_object = Obj();
			var_114_object = var_1_object;
			var_115_object = var_0_object;
			func_9083();
		}
		var_119_bool = var_73_cvector == (int)7630;
		if(var_119_bool != 0) {
			var_120_string = "";
			func_2210(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506924);
			@@@var_0_object:ClearReplies();
			var_138_bool = 0;
			var_138_bool = 0;
			var_139_bool = 0;
			var_139_bool = 0;
			var_140_bool = 0; var_141_object = Obj();
			var_141_object = var_1_object;
			func_9603(var_141_object);
			if(var_140_bool != 0) {
				var_148_bool = 0; var_149_object = Obj();
				var_149_object = var_1_object;
				func_9639(var_149_object);
				if(var_148_bool != 0) {
					var_139_bool = 1;
				}
			}
			if(var_139_bool != 0) {
				var_154_bool = 0; var_155_object = Obj();
				var_155_object = var_1_object;
				func_9627(var_155_object);
				if(var_154_bool != 0) {
					var_138_bool = 1;
				}
			}
			if(var_138_bool != 0) {
				@@@var_0_object:AddReply((int)506925, (int)7632, (int)7631);
			}
			var_163_bool = 0; var_164_object = Obj();
			var_164_object = var_1_object;
			func_9591(var_164_object);
			if(var_163_bool != 0) {
				@@@var_0_object:AddReply((int)532771, (int)10476, (int)34238);
			}
			@@@var_0_object:AddReply((int)507777, (int)-1, (int)8579);
			@@@var_0_object:AddReply((int)532772, (int)-1, (int)34239);
			return 0;
		}
		var_179_bool = var_73_cvector == (int)10476;
		if(var_179_bool != 0) {
			var_180_string = "";
			func_2210(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)509531);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509532, (int)10478, (int)10477);
			@@@var_0_object:AddReply((int)509539, (int)10478, (int)10484);
			return 0;
		}
		var_189_bool = var_73_cvector == (int)10478;
		if(var_189_bool != 0) {
			var_190_string = "";
			func_2210(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)509533);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509534, (int)-1, (int)10479);
			@@@var_0_object:AddReply((int)509535, (int)10481, (int)10480);
			return 0;
		}
		var_199_bool = var_73_cvector == (int)10481;
		if(var_199_bool != 0) {
			var_200_string = "";
			func_2210(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)509536);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509537, (int)-1, (int)10482);
			@@@var_0_object:AddReply((int)509538, (int)-1, (int)10483);
			return 0;
		}
		var_209_bool = var_73_cvector == (int)7632;
		if(var_209_bool != 0) {
			var_210_string = "";
			func_2210(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)506926);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506927, (int)8188, (int)7633);
			var_215_bool = 0; var_216_object = Obj();
			var_216_object = var_1_object;
			func_9615(var_216_object);
			if(var_215_bool != 0) {
				@@@var_0_object:AddReply((int)507420, (int)8190, (int)8189);
			}
			return 0;
		}
		var_225_bool = var_73_cvector == (int)8190;
		if(var_225_bool != 0) {
			var_226_string = "";
			func_2210(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507421);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507426, (int)8197, (int)8195);
			@@@var_0_object:AddReply((int)534040, (int)35619, (int)35618);
			return 0;
		}
		var_235_bool = var_73_cvector == (int)35619;
		if(var_235_bool != 0) {
			var_236_string = "";
			func_2210(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534041);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534042, (int)35621, (int)35620);
			@@@var_0_object:AddReply((int)534046, (int)8188, (int)35624);
			return 0;
		}
		var_245_bool = var_73_cvector == (int)35621;
		if(var_245_bool != 0) {
			var_246_string = "";
			func_2210(var_74_cvector, "Anger");
			@@@var_0_object:SetMessage((int)534043);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534047, (int)35628, (int)35626);
			@@@var_0_object:AddReply((int)534048, (int)35628, (int)35627);
			return 0;
		}
		var_255_bool = var_73_cvector == (int)35628;
		if(var_255_bool != 0) {
			var_256_string = "";
			func_2210(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534049);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534050, (int)8188, (int)35629);
			return 0;
		}
		var_262_bool = var_73_cvector == (int)8197;
		if(var_262_bool != 0) {
			var_263_string = "";
			func_2210(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507427);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507428, (int)8188, (int)8198);
			@@@var_0_object:AddReply((int)532773, (int)-1, (int)34240);
			return 0;
		}
		var_272_bool = var_73_cvector == (int)8188;
		if(var_272_bool != 0) {
			var_273_object = Obj(); var_274_object = Obj();
			var_273_object = var_1_object;
			var_274_object = var_0_object;
			func_9095();
			var_277_string = "";
			func_2210(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)507419);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507422, (int)8193, (int)8191);
			@@@var_0_object:AddReply((int)507423, (int)-1, (int)8192);
			return 0;
		}
		var_286_bool = var_73_cvector == (int)8193;
		if(var_286_bool != 0) {
			var_287_string = "";
			func_2210(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)507424);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507425, (int)-1, (int)8194);
			return 0;
		}
		var_3_string = true;
		var_292_bool = 0;
		func_8923(var_292_bool);
		if(var_292_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x8b9";
	
}


task_10_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_bool, var_73_cvector, var_74_cvector)
{
	if((int)1 != 0) {
		func_8750();
		var_78_bool = var_74_cvector == (int)11286;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_9148();
		}
		var_84_bool = var_74_cvector == (int)11314;
		if(var_84_bool != 0) {
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_9129();
			var_126_object = Obj(); var_127_object = Obj();
			var_126_object = var_1_object;
			var_127_object = var_0_object;
			func_9154(var_127_object);
		}
		var_153_bool = var_74_cvector == (int)11315;
		if(var_153_bool != 0) {
			var_154_object = Obj(); var_155_object = Obj();
			var_154_object = var_1_object;
			var_155_object = var_0_object;
			func_9129();
			var_156_object = Obj(); var_157_object = Obj();
			var_156_object = var_1_object;
			var_157_object = var_0_object;
			func_9154(var_157_object);
		}
		var_159_bool = var_74_cvector == (int)11318;
		if(var_159_bool != 0) {
			var_160_object = Obj(); var_161_object = Obj();
			var_160_object = var_1_object;
			var_161_object = var_0_object;
			func_9129();
			var_162_object = Obj(); var_163_object = Obj();
			var_162_object = var_1_object;
			var_163_object = var_0_object;
			func_9154(var_163_object);
		}
		var_165_bool = var_74_cvector == (int)11320;
		if(var_165_bool != 0) {
			var_166_object = Obj(); var_167_object = Obj();
			var_166_object = var_1_object;
			var_167_object = var_0_object;
			func_9193();
		}
		var_171_bool = var_74_cvector == (int)35992;
		if(var_171_bool != 0) {
			var_172_object = Obj(); var_173_object = Obj();
			var_172_object = var_1_object;
			var_173_object = var_0_object;
			func_9170();
		}
		var_193_bool = var_74_cvector == (int)35993;
		if(var_193_bool != 0) {
			var_194_object = Obj(); var_195_object = Obj();
			var_194_object = var_1_object;
			var_195_object = var_0_object;
			func_9170();
		}
		var_197_bool = var_74_cvector == (int)11287;
		if(var_197_bool != 0) {
			var_198_object = Obj(); var_199_object = Obj();
			var_198_object = var_1_object;
			var_199_object = var_0_object;
			func_9034();
		}
		var_203_bool = var_73_cvector == (int)11285;
		if(var_203_bool != 0) {
			var_204_string = "";
			func_2781(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510235);
			@@@var_0_object:ClearReplies();
			var_222_bool = 0;
			var_222_bool = 0;
			var_223_bool = 0; var_224_object = Obj();
			var_224_object = var_1_object;
			func_9663(var_224_object);
			if(var_223_bool != 0) {
				var_231_bool = 0; var_232_object = Obj();
				var_232_object = var_1_object;
				func_9675(var_232_object);
				if(var_231_bool != 0) {
					var_222_bool = 1;
				}
			}
			if(var_222_bool != 0) {
				@@@var_0_object:AddReply((int)510236, (int)11288, (int)11286);
			}
			var_240_bool = 0;
			var_240_bool = 0;
			var_241_bool = 0; var_242_object = Obj();
			var_242_object = var_1_object;
			func_9699(var_242_object);
			if(var_241_bool != 0) {
				var_247_bool = 0; var_248_object = Obj();
				var_248_object = var_1_object;
				func_9687(var_248_object);
				if(var_247_bool != 0) {
					var_240_bool = 1;
				}
			}
			if(var_240_bool != 0) {
				@@@var_0_object:AddReply((int)510266, (int)35986, (int)11320);
			}
			var_256_bool = 0; var_257_object = Obj();
			var_257_object = var_1_object;
			func_9532(var_257_object);
			if(var_256_bool != 0) {
				@@@var_0_object:AddReply((int)510237, (int)11089, (int)11287);
			}
			@@@var_0_object:AddReply((int)511382, (int)-1, (int)12578);
			return 0;
		}
		var_269_bool = var_73_cvector == (int)11089;
		if(var_269_bool != 0) {
			var_270_string = "";
			func_2781(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510063);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510064, (int)11091, (int)11090);
			return 0;
		}
		var_276_bool = var_73_cvector == (int)11091;
		if(var_276_bool != 0) {
			var_277_string = "";
			func_2781(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510065);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510066, (int)11093, (int)11092);
			@@@var_0_object:AddReply((int)510070, (int)11097, (int)11096);
			return 0;
		}
		var_286_bool = var_73_cvector == (int)11097;
		if(var_286_bool != 0) {
			var_287_string = "";
			func_2781(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)510071);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510072, (int)11099, (int)11098);
			@@@var_0_object:AddReply((int)510080, (int)11110, (int)11109);
			@@@var_0_object:AddReply((int)510242, (int)11293, (int)11292);
			return 0;
		}
		var_299_bool = var_73_cvector == (int)11293;
		if(var_299_bool != 0) {
			var_300_string = "";
			func_2781(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)510243);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510244, (int)11110, (int)11294);
			@@@var_0_object:AddReply((int)510245, (int)11290, (int)11295);
			return 0;
		}
		var_309_bool = var_73_cvector == (int)11110;
		if(var_309_bool != 0) {
			var_310_string = "";
			func_2781(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510081);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510239, (int)11290, (int)11289);
			@@@var_0_object:AddReply((int)510083, (int)-1, (int)11112);
			return 0;
		}
		var_319_bool = var_73_cvector == (int)11290;
		if(var_319_bool != 0) {
			var_320_string = "";
			func_2781(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)510240);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510082, (int)-1, (int)11111);
			return 0;
		}
		var_326_bool = var_73_cvector == (int)11099;
		if(var_326_bool != 0) {
			var_327_string = "";
			func_2781(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)510073);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510074, (int)11101, (int)11100);
			@@@var_0_object:AddReply((int)510079, (int)11101, (int)11107);
			return 0;
		}
		var_336_bool = var_73_cvector == (int)11101;
		if(var_336_bool != 0) {
			var_337_string = "";
			func_2781(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510075);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510076, (int)11093, (int)11102);
			@@@var_0_object:AddReply((int)510078, (int)-1, (int)11106);
			return 0;
		}
		var_346_bool = var_73_cvector == (int)11093;
		if(var_346_bool != 0) {
			var_347_string = "";
			func_2781(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510067);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510068, (int)-1, (int)11094);
			@@@var_0_object:AddReply((int)510069, (int)-1, (int)11095);
			return 0;
		}
		var_356_bool = var_73_cvector == (int)35986;
		if(var_356_bool != 0) {
			var_357_string = "";
			func_2781(var_74_cvector, "Anger");
			@@@var_0_object:SetMessage((int)534376);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534377, (int)35988, (int)35987);
			return 0;
		}
		var_363_bool = var_73_cvector == (int)35988;
		if(var_363_bool != 0) {
			var_364_string = "";
			func_2781(var_74_cvector, "Anger");
			@@@var_0_object:SetMessage((int)534378);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534379, (int)11321, (int)35989);
			@@@var_0_object:AddReply((int)534383, (int)11321, (int)35996);
			return 0;
		}
		var_373_bool = var_73_cvector == (int)11321;
		if(var_373_bool != 0) {
			var_374_string = "";
			func_2781(var_74_cvector, "Anger");
			@@@var_0_object:SetMessage((int)510267);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510268, (int)11323, (int)11322);
			@@@var_0_object:AddReply((int)510270, (int)11325, (int)11324);
			return 0;
		}
		var_383_bool = var_73_cvector == (int)11325;
		if(var_383_bool != 0) {
			var_384_string = "";
			func_2781(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510271);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510272, (int)35991, (int)11326);
			return 0;
		}
		var_390_bool = var_73_cvector == (int)11323;
		if(var_390_bool != 0) {
			var_391_string = "";
			func_2781(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510269);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510275, (int)11330, (int)11329);
			@@@var_0_object:AddReply((int)510273, (int)11328, (int)11327);
			return 0;
		}
		var_400_bool = var_73_cvector == (int)11328;
		if(var_400_bool != 0) {
			var_401_string = "";
			func_2781(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510274);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510281, (int)11330, (int)11336);
			return 0;
		}
		var_407_bool = var_73_cvector == (int)11330;
		if(var_407_bool != 0) {
			var_408_string = "";
			func_2781(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510276);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510277, (int)11332, (int)11331);
			return 0;
		}
		var_414_bool = var_73_cvector == (int)11332;
		if(var_414_bool != 0) {
			var_415_string = "";
			func_2781(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510278);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510279, (int)35991, (int)11333);
			@@@var_0_object:AddReply((int)510280, (int)35991, (int)11335);
			return 0;
		}
		var_424_bool = var_73_cvector == (int)35991;
		if(var_424_bool != 0) {
			var_425_string = "";
			func_2781(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534380);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534381, (int)-1, (int)35992);
			@@@var_0_object:AddReply((int)534382, (int)-1, (int)35993);
			return 0;
		}
		var_434_bool = var_73_cvector == (int)11288;
		if(var_434_bool != 0) {
			var_435_string = "";
			func_2781(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510238);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510246, (int)11298, (int)11297);
			@@@var_0_object:AddReply((int)510253, (int)11308, (int)11304);
			return 0;
		}
		var_444_bool = var_73_cvector == (int)11298;
		if(var_444_bool != 0) {
			var_445_string = "";
			func_2781(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510247);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510248, (int)11300, (int)11299);
			@@@var_0_object:AddReply((int)510258, (int)11308, (int)11309);
			return 0;
		}
		var_454_bool = var_73_cvector == (int)11300;
		if(var_454_bool != 0) {
			var_455_string = "";
			func_2781(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510249);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510250, (int)11302, (int)11301);
			@@@var_0_object:AddReply((int)510256, (int)11302, (int)11307);
			return 0;
		}
		var_464_bool = var_73_cvector == (int)11302;
		if(var_464_bool != 0) {
			var_465_string = "";
			func_2781(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510251);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510259, (int)11313, (int)11312);
			return 0;
		}
		var_471_bool = var_73_cvector == (int)11313;
		if(var_471_bool != 0) {
			var_472_string = "";
			func_2781(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)510260);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510261, (int)-1, (int)11314);
			@@@var_0_object:AddReply((int)510252, (int)11308, (int)11303);
			return 0;
		}
		var_481_bool = var_73_cvector == (int)11308;
		if(var_481_bool != 0) {
			var_482_string = "";
			func_2781(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)510257);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510262, (int)-1, (int)11315);
			@@@var_0_object:AddReply((int)510263, (int)11317, (int)11316);
			return 0;
		}
		var_491_bool = var_73_cvector == (int)11317;
		if(var_491_bool != 0) {
			var_492_string = "";
			func_2781(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510264);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510265, (int)-1, (int)11318);
			return 0;
		}
		var_3_string = true;
		var_497_bool = 0;
		func_8923(var_497_bool);
		if(var_497_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xaf4";
	
}


task_12_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_bool, var_73_cvector, var_74_cvector)
{
	if((int)1 != 0) {
		func_8750();
		var_78_bool = var_74_cvector == (int)12296;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_9111();
		}
		var_115_bool = var_74_cvector == (int)12301;
		if(var_115_bool != 0) {
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_9111();
		}
		var_119_bool = var_74_cvector == (int)12309;
		if(var_119_bool != 0) {
			var_120_object = Obj(); var_121_object = Obj();
			var_120_object = var_1_object;
			var_121_object = var_0_object;
			func_9046();
		}
		var_133_bool = var_74_cvector == (int)38101;
		if(var_133_bool != 0) {
			var_134_object = Obj(); var_135_object = Obj();
			var_134_object = var_1_object;
			var_135_object = var_0_object;
			func_9046();
		}
		var_137_bool = var_73_cvector == (int)38099;
		if(var_137_bool != 0) {
			var_138_bool = 0; var_139_object = Obj();
			var_139_object = var_1_object;
			func_9544(var_139_object);
			if(var_138_bool != 0) {
				var_146_object = Obj(); var_147_object = Obj();
				var_146_object = var_1_object;
				var_147_object = var_0_object;
				func_9040();
				var_150_object = Obj(); var_151_object = Obj();
				var_150_object = var_1_object;
				var_151_object = var_0_object;
				func_9055();
				var_154_string = "";
				func_3705(var_74_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)536314);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)511097, (int)12285, (int)12284);
				@@@var_0_object:AddReply((int)536312, (int)12285, (int)38097);
				return 0;
			}
			var_178_string = "";
			func_3705(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511109);
			@@@var_0_object:ClearReplies();
			var_180_bool = 0; var_181_object = Obj();
			var_181_object = var_1_object;
			func_9556(var_181_object);
			if(var_180_bool != 0) {
				@@@var_0_object:AddReply((int)511110, (int)12300, (int)12299);
			}
			var_189_bool = 0;
			var_189_bool = 0;
			var_190_bool = 0; var_191_object = Obj();
			var_191_object = var_1_object;
			func_9568(var_191_object);
			if(var_190_bool != 0) {
				var_196_bool = 0; var_197_object = Obj();
				var_197_object = var_1_object;
				func_9580(var_196_bool, var_197_object);
				if(var_196_bool != 0) {
					var_189_bool = 1;
				}
			}
			if(var_189_bool != 0) {
				@@@var_0_object:AddReply((int)511113, (int)12303, (int)12302);
			}
			@@@var_0_object:AddReply((int)536311, (int)-1, (int)38096);
			return 0;
		}
		var_212_bool = var_73_cvector == (int)12303;
		if(var_212_bool != 0) {
			var_213_string = "";
			func_3705(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511114);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511115, (int)12305, (int)12304);
			return 0;
		}
		var_219_bool = var_73_cvector == (int)12305;
		if(var_219_bool != 0) {
			var_220_string = "";
			func_3705(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)511116);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511118, (int)12308, (int)12307);
			return 0;
		}
		var_226_bool = var_73_cvector == (int)12308;
		if(var_226_bool != 0) {
			var_227_string = "";
			func_3705(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)511119);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511120, (int)-1, (int)12309);
			@@@var_0_object:AddReply((int)536315, (int)-1, (int)38101);
			return 0;
		}
		var_236_bool = var_73_cvector == (int)12300;
		if(var_236_bool != 0) {
			var_237_string = "";
			func_3705(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511111);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511112, (int)-1, (int)12301);
			return 0;
		}
		var_243_bool = var_73_cvector == (int)12285;
		if(var_243_bool != 0) {
			var_244_string = "";
			func_3705(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)511098);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511099, (int)12287, (int)12286);
			@@@var_0_object:AddReply((int)511104, (int)12289, (int)12291);
			return 0;
		}
		var_253_bool = var_73_cvector == (int)12287;
		if(var_253_bool != 0) {
			var_254_string = "";
			func_3705(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)511100);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511101, (int)12289, (int)12288);
			@@@var_0_object:AddReply((int)511103, (int)12289, (int)12290);
			return 0;
		}
		var_263_bool = var_73_cvector == (int)12289;
		if(var_263_bool != 0) {
			var_264_string = "";
			func_3705(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511102);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511105, (int)12295, (int)12294);
			return 0;
		}
		var_270_bool = var_73_cvector == (int)12295;
		if(var_270_bool != 0) {
			var_271_string = "";
			func_3705(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511106);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511107, (int)-1, (int)12296);
			@@@var_0_object:AddReply((int)511108, (int)-1, (int)12297);
			return 0;
		}
		var_3_string = true;
		var_279_bool = 0;
		func_8923(var_279_bool);
		if(var_279_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xe90";
	
}


task_14_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_bool, var_73_cvector, var_74_cvector)
{
	if((int)1 != 0) {
		func_8750();
		var_78_bool = var_74_cvector == (int)12998;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_9227();
		}
		var_151_bool = var_74_cvector == (int)12999;
		if(var_151_bool != 0) {
			var_152_object = Obj(); var_153_object = Obj();
			var_152_object = var_1_object;
			var_153_object = var_0_object;
			func_9227();
		}
		var_155_bool = var_74_cvector == (int)12975;
		if(var_155_bool != 0) {
			var_156_object = Obj(); var_157_object = Obj();
			var_156_object = var_1_object;
			var_157_object = var_0_object;
			func_9269();
		}
		var_161_bool = var_74_cvector == (int)12989;
		if(var_161_bool != 0) {
			var_162_object = Obj(); var_163_object = Obj();
			var_162_object = var_1_object;
			var_163_object = var_0_object;
			func_8953();
			var_166_object = Obj(); var_167_object = Obj();
			var_166_object = var_1_object;
			var_167_object = var_0_object;
			func_9067(var_167_object);
		}
		var_188_bool = var_74_cvector == (int)12990;
		if(var_188_bool != 0) {
			var_189_object = Obj(); var_190_object = Obj();
			var_189_object = var_1_object;
			var_190_object = var_0_object;
			func_8953();
			var_191_object = Obj(); var_192_object = Obj();
			var_191_object = var_1_object;
			var_192_object = var_0_object;
			func_9067(var_192_object);
		}
		var_194_bool = var_74_cvector == (int)13739;
		if(var_194_bool != 0) {
			var_195_object = Obj(); var_196_object = Obj();
			var_195_object = var_1_object;
			var_196_object = var_0_object;
			func_9275();
		}
		var_200_bool = var_74_cvector == (int)13741;
		if(var_200_bool != 0) {
			var_201_object = Obj(); var_202_object = Obj();
			var_201_object = var_1_object;
			var_202_object = var_0_object;
			func_9010();
			var_203_object = Obj(); var_204_object = Obj();
			var_203_object = var_1_object;
			var_204_object = var_0_object;
			func_9281(var_204_object);
		}
		var_244_bool = var_74_cvector == (int)16862;
		if(var_244_bool != 0) {
			var_245_object = Obj(); var_246_object = Obj();
			var_245_object = var_1_object;
			var_246_object = var_0_object;
			func_9281(var_246_object);
		}
		var_248_bool = var_73_cvector == (int)13751;
		if(var_248_bool != 0) {
			var_249_bool = 0;
			var_249_bool = 0;
			var_250_bool = 0;
			var_250_bool = 0;
			var_251_bool = 0; var_252_object = Obj();
			var_252_object = var_1_object;
			func_9783(var_252_object);
			if(var_251_bool != 0) {
				var_257_bool = 0; var_258_object = Obj();
				var_258_object = var_1_object;
				func_9723(var_258_object);
				var_263_bool = var_257_bool == 0; //@nz
				if(var_263_bool != 0) {
					var_250_bool = 1;
				}
			}
			if(var_250_bool != 0) {
				var_264_bool = 0; var_265_object = Obj();
				var_265_object = var_1_object;
				func_9735(var_265_object);
				var_270_bool = var_264_bool == 0; //@nz
				if(var_270_bool != 0) {
					var_249_bool = 1;
				}
			}
			if(var_249_bool != 0) {
				var_271_object = Obj(); var_272_object = Obj();
				var_271_object = var_1_object;
				var_272_object = var_0_object;
				func_9288();
				var_275_string = "";
				func_4252(var_74_cvector, "Anger");
				@@@var_0_object:SetMessage((int)512584);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)511771, (int)12991, (int)12979);
				var_296_bool = 0; var_297_object = Obj();
				var_297_object = var_1_object;
				func_9711(var_297_object);
				var_302_bool = var_296_bool == 0; //@nz
				if(var_302_bool != 0) {
					@@@var_0_object:AddReply((int)512585, (int)13755, (int)13752);
				}
				return 0;
			}
			var_306_string = "";
			func_4252(var_74_cvector, "Fear");
			@@@var_0_object:SetMessage((int)511765);
			@@@var_0_object:ClearReplies();
			var_308_bool = 0;
			var_308_bool = 0;
			var_309_bool = 0; var_310_object = Obj();
			var_310_object = var_1_object;
			func_9747(var_310_object);
			if(var_309_bool != 0) {
				var_315_bool = 0; var_316_object = Obj();
				var_316_object = var_1_object;
				func_9759(var_316_object);
				if(var_315_bool != 0) {
					var_308_bool = 1;
				}
			}
			if(var_308_bool != 0) {
				@@@var_0_object:AddReply((int)511767, (int)12977, (int)12975);
			}
			var_324_bool = 0;
			var_324_bool = 0;
			var_325_bool = 0; var_326_object = Obj();
			var_326_object = var_1_object;
			func_9723(var_326_object);
			if(var_325_bool != 0) {
				var_327_bool = 0; var_328_object = Obj();
				var_328_object = var_1_object;
				func_9771(var_328_object);
				if(var_327_bool != 0) {
					var_324_bool = 1;
				}
			}
			if(var_324_bool != 0) {
				@@@var_0_object:AddReply((int)512570, (int)13740, (int)13739);
			}
			@@@var_0_object:AddReply((int)511766, (int)-1, (int)12974);
			return 0;
		}
		var_340_bool = var_73_cvector == (int)13740;
		if(var_340_bool != 0) {
			var_341_string = "";
			func_4252(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512571);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512592, (int)13763, (int)13762);
			return 0;
		}
		var_347_bool = var_73_cvector == (int)13763;
		if(var_347_bool != 0) {
			var_348_string = "";
			func_4252(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512593);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512594, (int)13765, (int)13764);
			return 0;
		}
		var_354_bool = var_73_cvector == (int)13765;
		if(var_354_bool != 0) {
			var_355_string = "";
			func_4252(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512595);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512572, (int)-1, (int)13741);
			@@@var_0_object:AddReply((int)515790, (int)-1, (int)16862);
			return 0;
		}
		var_364_bool = var_73_cvector == (int)12977;
		if(var_364_bool != 0) {
			var_365_string = "";
			func_4252(var_74_cvector, "Fear");
			@@@var_0_object:SetMessage((int)511769);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511770, (int)12981, (int)12978);
			@@@var_0_object:AddReply((int)511772, (int)12981, (int)12980);
			return 0;
		}
		var_374_bool = var_73_cvector == (int)12981;
		if(var_374_bool != 0) {
			var_375_string = "";
			func_4252(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511773);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511774, (int)12984, (int)12983);
			return 0;
		}
		var_381_bool = var_73_cvector == (int)12984;
		if(var_381_bool != 0) {
			var_382_string = "";
			func_4252(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511775);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511776, (int)12987, (int)12985);
			@@@var_0_object:AddReply((int)511777, (int)12987, (int)12986);
			@@@var_0_object:AddReply((int)515789, (int)-1, (int)16861);
			return 0;
		}
		var_394_bool = var_73_cvector == (int)12987;
		if(var_394_bool != 0) {
			var_395_string = "";
			func_4252(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511778);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511779, (int)-1, (int)12989);
			@@@var_0_object:AddReply((int)511780, (int)-1, (int)12990);
			return 0;
		}
		var_404_bool = var_73_cvector == (int)13755;
		if(var_404_bool != 0) {
			var_405_string = "";
			func_4252(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512587);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512588, (int)12993, (int)13756);
			return 0;
		}
		var_411_bool = var_73_cvector == (int)12991;
		if(var_411_bool != 0) {
			var_412_string = "";
			func_4252(var_74_cvector, "Anger");
			@@@var_0_object:SetMessage((int)511781);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511782, (int)12993, (int)12992);
			return 0;
		}
		var_418_bool = var_73_cvector == (int)12993;
		if(var_418_bool != 0) {
			var_419_string = "";
			func_4252(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511783);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512589, (int)12995, (int)13758);
			@@@var_0_object:AddReply((int)511784, (int)13760, (int)12994);
			return 0;
		}
		var_428_bool = var_73_cvector == (int)12995;
		if(var_428_bool != 0) {
			var_429_string = "";
			func_4252(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)511785);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512590, (int)13760, (int)13759);
			return 0;
		}
		var_435_bool = var_73_cvector == (int)13760;
		if(var_435_bool != 0) {
			var_436_string = "";
			func_4252(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512591);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511786, (int)12997, (int)12996);
			@@@var_0_object:AddReply((int)515791, (int)12997, (int)16863);
			return 0;
		}
		var_445_bool = var_73_cvector == (int)12997;
		if(var_445_bool != 0) {
			var_446_string = "";
			func_4252(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511787);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511788, (int)-1, (int)12998);
			@@@var_0_object:AddReply((int)511789, (int)-1, (int)12999);
			return 0;
		}
		var_3_string = true;
		var_454_bool = 0;
		func_8923(var_454_bool);
		if(var_454_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x10b3";
	
}


task_16_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_bool, var_73_cvector, var_74_cvector)
{
	if((int)1 != 0) {
		func_8750();
		var_78_bool = var_74_cvector == (int)34767;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_8985();
		}
		var_107_bool = var_74_cvector == (int)42862;
		if(var_107_bool != 0) {
			var_108_object = Obj(); var_109_object = Obj();
			var_108_object = var_1_object;
			var_109_object = var_0_object;
			func_8985();
		}
		var_111_bool = var_74_cvector == (int)42863;
		if(var_111_bool != 0) {
			var_112_object = Obj(); var_113_object = Obj();
			var_112_object = var_1_object;
			var_113_object = var_0_object;
			func_8985();
		}
		var_115_bool = var_73_cvector == (int)34759;
		if(var_115_bool != 0) {
			var_116_string = "";
			func_4902(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533245);
			@@@var_0_object:ClearReplies();
			var_134_bool = 0; var_135_object = Obj();
			var_135_object = var_1_object;
			func_9496(var_135_object);
			if(var_134_bool != 0) {
				@@@var_0_object:AddReply((int)533246, (int)42854, (int)34760);
			}
			@@@var_0_object:AddReply((int)540800, (int)-1, (int)42851);
			return 0;
		}
		var_149_bool = var_73_cvector == (int)42854;
		if(var_149_bool != 0) {
			var_150_string = "";
			func_4902(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540803);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540804, (int)34761, (int)42855);
			@@@var_0_object:AddReply((int)540805, (int)42857, (int)42856);
			return 0;
		}
		var_159_bool = var_73_cvector == (int)42857;
		if(var_159_bool != 0) {
			var_160_string = "";
			func_4902(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540806);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540807, (int)34764, (int)42858);
			return 0;
		}
		var_166_bool = var_73_cvector == (int)34761;
		if(var_166_bool != 0) {
			var_167_string = "";
			func_4902(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533247);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533249, (int)34764, (int)34763);
			return 0;
		}
		var_173_bool = var_73_cvector == (int)34764;
		if(var_173_bool != 0) {
			var_174_string = "";
			func_4902(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533250);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540808, (int)42861, (int)42860);
			@@@var_0_object:AddReply((int)540811, (int)-1, (int)42863);
			return 0;
		}
		var_183_bool = var_73_cvector == (int)42861;
		if(var_183_bool != 0) {
			var_184_string = "";
			func_4902(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540809);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533251, (int)34766, (int)34765);
			@@@var_0_object:AddReply((int)540810, (int)-1, (int)42862);
			return 0;
		}
		var_193_bool = var_73_cvector == (int)34766;
		if(var_193_bool != 0) {
			var_194_string = "";
			func_4902(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533252);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533253, (int)-1, (int)34767);
			return 0;
		}
		var_3_string = true;
		var_199_bool = 0;
		func_8923(var_199_bool);
		if(var_199_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x133d";
	
}


task_18_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_bool, var_73_cvector, var_74_cvector)
{
	if((int)1 != 0) {
		func_8750();
		var_78_bool = var_73_cvector == (int)13432;
		if(var_78_bool != 0) {
			var_79_bool = 0;
			var_79_bool = 0;
			var_80_bool = 0; var_81_object = Obj();
			var_81_object = var_1_object;
			func_9819(var_81_object);
			if(var_80_bool != 0) {
				var_88_bool = 0; var_89_object = Obj();
				var_89_object = var_1_object;
				func_9807(var_89_object);
				if(var_88_bool != 0) {
					var_79_bool = 1;
				}
			}
			if(var_79_bool != 0) {
				var_94_object = Obj(); var_95_object = Obj();
				var_94_object = var_1_object;
				var_95_object = var_0_object;
				func_9347();
				var_98_string = "";
				func_5296(var_74_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)512275);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)512276, (int)13435, (int)13433);
				@@@var_0_object:AddReply((int)512277, (int)13435, (int)13434);
				return 0;
			}
			var_122_string = "";
			func_5296(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513779);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513780, (int)-1, (int)15016);
			@@@var_0_object:AddReply((int)541598, (int)-1, (int)43762);
			return 0;
		}
		var_131_bool = var_73_cvector == (int)13435;
		if(var_131_bool != 0) {
			var_132_string = "";
			func_5296(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512278);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512279, (int)13439, (int)13437);
			@@@var_0_object:AddReply((int)512280, (int)13439, (int)13438);
			return 0;
		}
		var_141_bool = var_73_cvector == (int)13439;
		if(var_141_bool != 0) {
			var_142_string = "";
			func_5296(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)512281);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512282, (int)13442, (int)13441);
			@@@var_0_object:AddReply((int)541834, (int)13442, (int)44049);
			return 0;
		}
		var_151_bool = var_73_cvector == (int)13442;
		if(var_151_bool != 0) {
			var_152_string = "";
			func_5296(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)512283);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512284, (int)13444, (int)13443);
			return 0;
		}
		var_158_bool = var_73_cvector == (int)13444;
		if(var_158_bool != 0) {
			var_159_string = "";
			func_5296(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512285);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512286, (int)13446, (int)13445);
			return 0;
		}
		var_165_bool = var_73_cvector == (int)13446;
		if(var_165_bool != 0) {
			var_166_string = "";
			func_5296(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512287);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512288, (int)13448, (int)13447);
			@@@var_0_object:AddReply((int)541836, (int)13448, (int)44052);
			return 0;
		}
		var_175_bool = var_73_cvector == (int)13448;
		if(var_175_bool != 0) {
			var_176_string = "";
			func_5296(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512289);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512290, (int)13450, (int)13449);
			return 0;
		}
		var_182_bool = var_73_cvector == (int)13450;
		if(var_182_bool != 0) {
			var_183_string = "";
			func_5296(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)512291);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512292, (int)-1, (int)13451);
			@@@var_0_object:AddReply((int)541837, (int)-1, (int)44054);
			return 0;
		}
		var_3_string = true;
		var_191_bool = 0;
		func_8923(var_191_bool);
		if(var_191_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x14c7";
	
}


task_20_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_int, var_51_int, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_bool, var_73_cvector, var_74_cvector)
{
	if((int)1 != 0) {
		func_8750();
		var_78_bool = var_74_cvector == (int)15244;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_9359();
		}
		var_121_bool = var_74_cvector == (int)15245;
		if(var_121_bool != 0) {
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_9359();
		}
		var_125_bool = var_74_cvector == (int)15247;
		if(var_125_bool != 0) {
			var_126_object = Obj(); var_127_object = Obj();
			var_126_object = var_1_object;
			var_127_object = var_0_object;
			func_9406();
		}
		var_131_bool = var_74_cvector == (int)15264;
		if(var_131_bool != 0) {
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_9376();
		}
		var_137_bool = var_73_cvector == (int)15229;
		if(var_137_bool != 0) {
			var_138_bool = 0; var_139_object = Obj();
			var_139_object = var_1_object;
			func_9831(var_139_object);
			if(var_138_bool != 0) {
				var_146_object = Obj(); var_147_object = Obj();
				var_146_object = var_1_object;
				var_147_object = var_0_object;
				func_9353();
				var_150_object = Obj(); var_151_object = Obj();
				var_150_object = var_1_object;
				var_151_object = var_0_object;
				func_9077();
				var_154_string = "";
				func_5743(var_74_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)513994);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)538808, (int)40728, (int)40727);
				@@@var_0_object:AddReply((int)538813, (int)40730, (int)40732);
				return 0;
			}
			var_178_string = "";
			func_5743(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514011);
			@@@var_0_object:ClearReplies();
			var_180_bool = 0; var_181_object = Obj();
			var_181_object = var_1_object;
			func_9939(var_181_object);
			if(var_180_bool != 0) {
				@@@var_0_object:AddReply((int)514012, (int)15248, (int)15247);
			}
			var_189_bool = 0;
			var_189_bool = 0;
			var_190_bool = 0; var_191_object = Obj();
			var_191_object = var_1_object;
			func_9843(var_191_object);
			if(var_190_bool != 0) {
				var_196_bool = 0; var_197_object = Obj();
				var_197_object = var_1_object;
				func_9855(var_197_object);
				if(var_196_bool != 0) {
					var_189_bool = 1;
				}
			}
			if(var_189_bool != 0) {
				@@@var_0_object:AddReply((int)514029, (int)15265, (int)15264);
			}
			@@@var_0_object:AddReply((int)514039, (int)-1, (int)15274);
			return 0;
		}
		var_209_bool = var_73_cvector == (int)15265;
		if(var_209_bool != 0) {
			var_210_string = "";
			func_5743(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514030);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514031, (int)15267, (int)15266);
			return 0;
		}
		var_216_bool = var_73_cvector == (int)15267;
		if(var_216_bool != 0) {
			var_217_string = "";
			func_5743(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514032);
			@@@var_0_object:ClearReplies();
			var_219_bool = 0; var_220_object = Obj();
			var_220_object = var_1_object;
			func_9867(var_220_object);
			if(var_219_bool != 0) {
				@@@var_0_object:AddReply((int)514033, (int)15269, (int)15268);
			}
			@@@var_0_object:AddReply((int)514038, (int)-1, (int)15273);
			return 0;
		}
		var_232_bool = var_73_cvector == (int)15269;
		if(var_232_bool != 0) {
			var_233_string = "";
			func_5743(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514034);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514035, (int)-1, (int)15270);
			@@@var_0_object:AddReply((int)514036, (int)-1, (int)15271);
			@@@var_0_object:AddReply((int)514037, (int)-1, (int)15272);
			return 0;
		}
		var_245_bool = var_73_cvector == (int)15248;
		if(var_245_bool != 0) {
			var_246_string = "";
			func_5743(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)514013);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514014, (int)15250, (int)15249);
			@@@var_0_object:AddReply((int)514024, (int)15260, (int)15259);
			return 0;
		}
		var_255_bool = var_73_cvector == (int)15260;
		if(var_255_bool != 0) {
			var_256_string = "";
			func_5743(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514025);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514026, (int)15262, (int)15261);
			@@@var_0_object:AddReply((int)538812, (int)40751, (int)40731);
			return 0;
		}
		var_265_bool = var_73_cvector == (int)40751;
		if(var_265_bool != 0) {
			var_266_string = "";
			func_5743(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538826);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538827, (int)15262, (int)40752);
			return 0;
		}
		var_272_bool = var_73_cvector == (int)15262;
		if(var_272_bool != 0) {
			var_273_string = "";
			func_5743(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514027);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514028, (int)-1, (int)15263);
			@@@var_0_object:AddReply((int)538828, (int)15250, (int)40754);
			return 0;
		}
		var_282_bool = var_73_cvector == (int)15250;
		if(var_282_bool != 0) {
			var_283_string = "";
			func_5743(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)514015);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514016, (int)15252, (int)15251);
			return 0;
		}
		var_289_bool = var_73_cvector == (int)15252;
		if(var_289_bool != 0) {
			var_290_string = "";
			func_5743(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514017);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514018, (int)-1, (int)15253);
			@@@var_0_object:AddReply((int)514019, (int)15255, (int)15254);
			return 0;
		}
		var_299_bool = var_73_cvector == (int)15255;
		if(var_299_bool != 0) {
			var_300_string = "";
			func_5743(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514020);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514021, (int)15257, (int)15256);
			return 0;
		}
		var_306_bool = var_73_cvector == (int)15257;
		if(var_306_bool != 0) {
			var_307_string = "";
			func_5743(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514022);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514023, (int)-1, (int)15258);
			@@@var_0_object:AddReply((int)541838, (int)-1, (int)44055);
			return 0;
		}
		var_316_bool = var_73_cvector == (int)40728;
		if(var_316_bool != 0) {
			var_317_string = "";
			func_5743(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)538809);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538810, (int)40730, (int)40729);
			@@@var_0_object:AddReply((int)538814, (int)40735, (int)40734);
			return 0;
		}
		var_326_bool = var_73_cvector == (int)40735;
		if(var_326_bool != 0) {
			var_327_string = "";
			func_5743(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538815);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538816, (int)40737, (int)40736);
			return 0;
		}
		var_333_bool = var_73_cvector == (int)40737;
		if(var_333_bool != 0) {
			var_334_string = "";
			func_5743(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538817);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538818, (int)40740, (int)40738);
			@@@var_0_object:AddReply((int)538819, (int)-1, (int)40739);
			return 0;
		}
		var_343_bool = var_73_cvector == (int)40740;
		if(var_343_bool != 0) {
			var_344_string = "";
			func_5743(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538820);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538821, (int)40730, (int)40741);
			return 0;
		}
		var_350_bool = var_73_cvector == (int)40730;
		if(var_350_bool != 0) {
			var_351_string = "";
			func_5743(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)538811);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513995, (int)15231, (int)15230);
			@@@var_0_object:AddReply((int)538822, (int)15233, (int)40743);
			return 0;
		}
		var_360_bool = var_73_cvector == (int)15231;
		if(var_360_bool != 0) {
			var_361_string = "";
			func_5743(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)513996);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513997, (int)15233, (int)15232);
			@@@var_0_object:AddReply((int)538823, (int)15237, (int)40745);
			return 0;
		}
		var_370_bool = var_73_cvector == (int)15233;
		if(var_370_bool != 0) {
			var_371_string = "";
			func_5743(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513998);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513999, (int)15235, (int)15234);
			return 0;
		}
		var_377_bool = var_73_cvector == (int)15235;
		if(var_377_bool != 0) {
			var_378_string = "";
			func_5743(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514000);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514001, (int)15237, (int)15236);
			return 0;
		}
		var_384_bool = var_73_cvector == (int)15237;
		if(var_384_bool != 0) {
			var_385_string = "";
			func_5743(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514002);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514003, (int)15239, (int)15238);
			@@@var_0_object:AddReply((int)538825, (int)15241, (int)40749);
			return 0;
		}
		var_394_bool = var_73_cvector == (int)15239;
		if(var_394_bool != 0) {
			var_395_string = "";
			func_5743(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514004);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514005, (int)15241, (int)15240);
			return 0;
		}
		var_401_bool = var_73_cvector == (int)15241;
		if(var_401_bool != 0) {
			var_402_string = "";
			func_5743(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514006);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514007, (int)15243, (int)15242);
			@@@var_0_object:AddReply((int)514010, (int)-1, (int)15245);
			return 0;
		}
		var_411_bool = var_73_cvector == (int)15243;
		if(var_411_bool != 0) {
			var_412_string = "";
			func_5743(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514008);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514009, (int)-1, (int)15244);
			return 0;
		}
		var_3_string = true;
		var_417_bool = 0;
		func_8923(var_417_bool);
		if(var_417_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1686";
	
}


task_22_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_int, var_56_int, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_bool, var_73_cvector, var_74_cvector)
{
	if((int)1 != 0) {
		func_8750();
		var_78_bool = var_74_cvector == (int)36145;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_9018();
		}
		var_123_bool = var_74_cvector == (int)40329;
		if(var_123_bool != 0) {
			var_124_object = Obj(); var_125_object = Obj();
			var_124_object = var_1_object;
			var_125_object = var_0_object;
			func_9018();
		}
		var_127_bool = var_74_cvector == (int)40333;
		if(var_127_bool != 0) {
			var_128_object = Obj(); var_129_object = Obj();
			var_128_object = var_1_object;
			var_129_object = var_0_object;
			func_9382();
		}
		var_133_bool = var_74_cvector == (int)15601;
		if(var_133_bool != 0) {
			var_134_object = Obj(); var_135_object = Obj();
			var_134_object = var_1_object;
			var_135_object = var_0_object;
			func_9388();
		}
		var_139_bool = var_73_cvector == (int)36142;
		if(var_139_bool != 0) {
			var_140_bool = 0; var_141_object = Obj();
			var_141_object = var_1_object;
			func_9520(var_141_object);
			if(var_140_bool != 0) {
				var_148_object = Obj(); var_149_object = Obj();
				var_148_object = var_1_object;
				var_149_object = var_0_object;
				func_9012();
				var_152_object = Obj(); var_153_object = Obj();
				var_152_object = var_1_object;
				var_153_object = var_0_object;
				func_9061();
				var_156_string = "";
				func_6609(var_74_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)534501);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)538426, (int)40303, (int)40302);
				@@@var_0_object:AddReply((int)538432, (int)40311, (int)40308);
				return 0;
			}
			var_180_string = "";
			func_6609(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514377);
			@@@var_0_object:ClearReplies();
			var_182_bool = 0;
			var_182_bool = 0;
			var_183_bool = 0; var_184_object = Obj();
			var_184_object = var_1_object;
			func_9891(var_184_object);
			if(var_183_bool != 0) {
				var_189_bool = 0; var_190_object = Obj();
				var_190_object = var_1_object;
				func_9879(var_190_object);
				if(var_189_bool != 0) {
					var_182_bool = 1;
				}
			}
			if(var_182_bool != 0) {
				@@@var_0_object:AddReply((int)538451, (int)15592, (int)40333);
			}
			var_198_bool = 0;
			var_198_bool = 0;
			var_199_bool = 0;
			var_199_bool = 0;
			var_200_bool = 0; var_201_object = Obj();
			var_201_object = var_1_object;
			func_9891(var_201_object);
			var_202_bool = var_200_bool == 0; //@nz
			if(var_202_bool != 0) {
				var_203_bool = 0; var_204_object = Obj();
				var_204_object = var_1_object;
				func_9903(var_204_object);
				if(var_203_bool != 0) {
					var_199_bool = 1;
				}
			}
			if(var_199_bool != 0) {
				var_209_bool = 0; var_210_object = Obj();
				var_210_object = var_1_object;
				func_9915(var_210_object);
				if(var_209_bool != 0) {
					var_198_bool = 1;
				}
			}
			if(var_198_bool != 0) {
				@@@var_0_object:AddReply((int)514378, (int)15602, (int)15601);
			}
			@@@var_0_object:AddReply((int)538442, (int)-1, (int)40321);
			@@@var_0_object:AddReply((int)514419, (int)-1, (int)15644);
			return 0;
		}
		var_225_bool = var_73_cvector == (int)15602;
		if(var_225_bool != 0) {
			var_226_string = "";
			func_6609(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514379);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514380, (int)15604, (int)15603);
			@@@var_0_object:AddReply((int)514399, (int)15604, (int)15623);
			return 0;
		}
		var_235_bool = var_73_cvector == (int)15604;
		if(var_235_bool != 0) {
			var_236_string = "";
			func_6609(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)514381);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514382, (int)15606, (int)15605);
			return 0;
		}
		var_242_bool = var_73_cvector == (int)15606;
		if(var_242_bool != 0) {
			var_243_string = "";
			func_6609(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)514383);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514384, (int)15608, (int)15607);
			return 0;
		}
		var_249_bool = var_73_cvector == (int)15608;
		if(var_249_bool != 0) {
			var_250_string = "";
			func_6609(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514385);
			@@@var_0_object:ClearReplies();
			var_252_bool = 0; var_253_object = Obj();
			var_253_object = var_1_object;
			func_9927(var_253_object);
			if(var_252_bool != 0) {
				@@@var_0_object:AddReply((int)514386, (int)15610, (int)15609);
			}
			@@@var_0_object:AddReply((int)514398, (int)-1, (int)15622);
			return 0;
		}
		var_265_bool = var_73_cvector == (int)15610;
		if(var_265_bool != 0) {
			var_266_string = "";
			func_6609(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514387);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514388, (int)15612, (int)15611);
			return 0;
		}
		var_272_bool = var_73_cvector == (int)15612;
		if(var_272_bool != 0) {
			var_273_string = "";
			func_6609(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514389);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514390, (int)15614, (int)15613);
			return 0;
		}
		var_279_bool = var_73_cvector == (int)15614;
		if(var_279_bool != 0) {
			var_280_string = "";
			func_6609(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514391);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514392, (int)15616, (int)15615);
			@@@var_0_object:AddReply((int)514397, (int)15616, (int)15620);
			return 0;
		}
		var_289_bool = var_73_cvector == (int)15616;
		if(var_289_bool != 0) {
			var_290_string = "";
			func_6609(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)514393);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514394, (int)15618, (int)15617);
			return 0;
		}
		var_296_bool = var_73_cvector == (int)15618;
		if(var_296_bool != 0) {
			var_297_string = "";
			func_6609(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)514395);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514396, (int)-1, (int)15619);
			@@@var_0_object:AddReply((int)539600, (int)-1, (int)41546);
			return 0;
		}
		var_306_bool = var_73_cvector == (int)15592;
		if(var_306_bool != 0) {
			var_307_string = "";
			func_6609(var_74_cvector, "Fear");
			@@@var_0_object:SetMessage((int)514369);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538448, (int)40331, (int)40330);
			@@@var_0_object:AddReply((int)514376, (int)-1, (int)15599);
			return 0;
		}
		var_316_bool = var_73_cvector == (int)40331;
		if(var_316_bool != 0) {
			var_317_string = "";
			func_6609(var_74_cvector, "Fear");
			@@@var_0_object:SetMessage((int)538449);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514370, (int)15594, (int)15593);
			@@@var_0_object:AddReply((int)538450, (int)-1, (int)40332);
			return 0;
		}
		var_326_bool = var_73_cvector == (int)15594;
		if(var_326_bool != 0) {
			var_327_string = "";
			func_6609(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514371);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514372, (int)15596, (int)15595);
			return 0;
		}
		var_333_bool = var_73_cvector == (int)15596;
		if(var_333_bool != 0) {
			var_334_string = "";
			func_6609(var_74_cvector, "Fear");
			@@@var_0_object:SetMessage((int)514373);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514374, (int)-1, (int)15597);
			@@@var_0_object:AddReply((int)514375, (int)-1, (int)15598);
			return 0;
		}
		var_343_bool = var_73_cvector == (int)40311;
		if(var_343_bool != 0) {
			var_344_string = "";
			func_6609(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538435);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538436, (int)40313, (int)40312);
			@@@var_0_object:AddReply((int)538438, (int)40303, (int)40314);
			return 0;
		}
		var_353_bool = var_73_cvector == (int)40313;
		if(var_353_bool != 0) {
			var_354_string = "";
			func_6609(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538437);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538439, (int)40303, (int)40316);
			return 0;
		}
		var_360_bool = var_73_cvector == (int)40303;
		if(var_360_bool != 0) {
			var_361_string = "";
			func_6609(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)538427);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538428, (int)40305, (int)40304);
			@@@var_0_object:AddReply((int)538433, (int)40310, (int)40309);
			return 0;
		}
		var_370_bool = var_73_cvector == (int)40310;
		if(var_370_bool != 0) {
			var_371_string = "";
			func_6609(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)538434);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538440, (int)40305, (int)40318);
			return 0;
		}
		var_377_bool = var_73_cvector == (int)40305;
		if(var_377_bool != 0) {
			var_378_string = "";
			func_6609(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)538429);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538430, (int)38458, (int)40306);
			@@@var_0_object:AddReply((int)538441, (int)38458, (int)40320);
			return 0;
		}
		var_387_bool = var_73_cvector == (int)38458;
		if(var_387_bool != 0) {
			var_388_string = "";
			func_6609(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536630);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538443, (int)40307, (int)40322);
			@@@var_0_object:AddReply((int)536631, (int)38460, (int)38459);
			return 0;
		}
		var_397_bool = var_73_cvector == (int)40307;
		if(var_397_bool != 0) {
			var_398_string = "";
			func_6609(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538431);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536629, (int)38460, (int)38457);
			@@@var_0_object:AddReply((int)538444, (int)40325, (int)40324);
			return 0;
		}
		var_407_bool = var_73_cvector == (int)40325;
		if(var_407_bool != 0) {
			var_408_string = "";
			func_6609(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)538445);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538446, (int)38460, (int)40326);
			return 0;
		}
		var_414_bool = var_73_cvector == (int)38460;
		if(var_414_bool != 0) {
			var_415_string = "";
			func_6609(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536632);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536633, (int)38462, (int)38461);
			@@@var_0_object:AddReply((int)538447, (int)-1, (int)40329);
			return 0;
		}
		var_424_bool = var_73_cvector == (int)38462;
		if(var_424_bool != 0) {
			var_425_string = "";
			func_6609(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536634);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534504, (int)-1, (int)36145);
			@@@var_0_object:AddReply((int)534505, (int)-1, (int)36146);
			return 0;
		}
		var_3_string = true;
		var_433_bool = 0;
		func_8923(var_433_bool);
		if(var_433_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x19e8";
	
}


task_24_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_int, var_61_int, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_bool, var_73_cvector, var_74_cvector)
{
	if((int)1 != 0) {
		func_8750();
		var_78_bool = var_74_cvector == (int)35700;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_8994();
			var_106_object = Obj(); var_107_object = Obj();
			var_106_object = var_1_object;
			var_107_object = var_0_object;
			func_9101(var_107_object);
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_object;
			var_128_object = var_0_object;
			func_8953();
			var_131_object = Obj(); var_132_object = Obj();
			var_131_object = var_1_object;
			var_132_object = var_0_object;
			func_9003();
		}
		var_140_bool = var_74_cvector == (int)38262;
		if(var_140_bool != 0) {
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_object;
			func_8994();
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_object;
			func_9003();
			var_145_object = Obj(); var_146_object = Obj();
			var_145_object = var_1_object;
			var_146_object = var_0_object;
			func_8975(var_146_object);
			var_150_object = Obj(); var_151_object = Obj();
			var_150_object = var_1_object;
			var_151_object = var_0_object;
			func_8953();
		}
		var_153_bool = var_73_cvector == (int)35694;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_7426(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534101);
			@@@var_0_object:ClearReplies();
			var_172_bool = 0; var_173_object = Obj();
			var_173_object = var_1_object;
			func_9508(var_173_object);
			if(var_172_bool != 0) {
				@@@var_0_object:AddReply((int)534102, (int)35697, (int)35695);
			}
			@@@var_0_object:AddReply((int)534103, (int)-1, (int)35696);
			@@@var_0_object:AddReply((int)536433, (int)-1, (int)38218);
			return 0;
		}
		var_190_bool = var_73_cvector == (int)35697;
		if(var_190_bool != 0) {
			var_191_string = "";
			func_7426(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534104);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536434, (int)38220, (int)38219);
			@@@var_0_object:AddReply((int)536440, (int)38226, (int)38225);
			return 0;
		}
		var_200_bool = var_73_cvector == (int)38226;
		if(var_200_bool != 0) {
			var_201_string = "";
			func_7426(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536441);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536442, (int)38220, (int)38227);
			@@@var_0_object:AddReply((int)536443, (int)38230, (int)38229);
			return 0;
		}
		var_210_bool = var_73_cvector == (int)38220;
		if(var_210_bool != 0) {
			var_211_string = "";
			func_7426(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536435);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536436, (int)38222, (int)38221);
			@@@var_0_object:AddReply((int)536451, (int)38230, (int)38238);
			return 0;
		}
		var_220_bool = var_73_cvector == (int)38222;
		if(var_220_bool != 0) {
			var_221_string = "";
			func_7426(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536437);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536438, (int)38230, (int)38223);
			@@@var_0_object:AddReply((int)536446, (int)38230, (int)38232);
			return 0;
		}
		var_230_bool = var_73_cvector == (int)38230;
		if(var_230_bool != 0) {
			var_231_string = "";
			func_7426(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536444);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536445, (int)38234, (int)38231);
			@@@var_0_object:AddReply((int)536452, (int)38241, (int)38240);
			return 0;
		}
		var_240_bool = var_73_cvector == (int)38241;
		if(var_240_bool != 0) {
			var_241_string = "";
			func_7426(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)536453);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536454, (int)38234, (int)38242);
			return 0;
		}
		var_247_bool = var_73_cvector == (int)38234;
		if(var_247_bool != 0) {
			var_248_string = "";
			func_7426(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536447);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536448, (int)38236, (int)38235);
			@@@var_0_object:AddReply((int)536461, (int)38253, (int)38251);
			return 0;
		}
		var_257_bool = var_73_cvector == (int)38236;
		if(var_257_bool != 0) {
			var_258_string = "";
			func_7426(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)536449);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536459, (int)38224, (int)38248);
			@@@var_0_object:AddReply((int)536462, (int)38253, (int)38252);
			return 0;
		}
		var_267_bool = var_73_cvector == (int)38253;
		if(var_267_bool != 0) {
			var_268_string = "";
			func_7426(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)536463);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536464, (int)38224, (int)38255);
			return 0;
		}
		var_274_bool = var_73_cvector == (int)38224;
		if(var_274_bool != 0) {
			var_275_string = "";
			func_7426(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)536439);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536466, (int)38258, (int)38257);
			return 0;
		}
		var_281_bool = var_73_cvector == (int)38258;
		if(var_281_bool != 0) {
			var_282_string = "";
			func_7426(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536467);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534105, (int)35699, (int)35698);
			@@@var_0_object:AddReply((int)536468, (int)35699, (int)38260);
			return 0;
		}
		var_291_bool = var_73_cvector == (int)35699;
		if(var_291_bool != 0) {
			var_292_string = "";
			func_7426(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534106);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534107, (int)-1, (int)35700);
			@@@var_0_object:AddReply((int)536469, (int)-1, (int)38262);
			return 0;
		}
		var_3_string = true;
		var_300_bool = 0;
		func_8923(var_300_bool);
		if(var_300_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1d19";
	
}


task_26_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_int, var_66_int, var_67_object, var_68_object, var_69_object, var_70_string, var_71_bool, var_72_bool, var_73_cvector, var_74_cvector)
{
	if((int)1 != 0) {
		func_8750();
		var_78_bool = var_73_cvector == (int)37351;
		if(var_78_bool != 0) {
			var_79_string = "";
			func_7946(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535665);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535666, (int)42176, (int)37352);
			@@@var_0_object:AddReply((int)540007, (int)-1, (int)41978);
			return 0;
		}
		var_104_bool = var_73_cvector == (int)42176;
		if(var_104_bool != 0) {
			var_105_string = "";
			func_7946(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)540197);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540198, (int)42216, (int)42177);
			@@@var_0_object:AddReply((int)540232, (int)42214, (int)42213);
			return 0;
		}
		var_114_bool = var_73_cvector == (int)42216;
		if(var_114_bool != 0) {
			var_115_string = "";
			func_7946(var_74_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)540234);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540235, (int)42214, (int)42217);
			@@@var_0_object:AddReply((int)540236, (int)-1, (int)42218);
			return 0;
		}
		var_124_bool = var_73_cvector == (int)42214;
		if(var_124_bool != 0) {
			var_125_string = "";
			func_7946(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540233);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540237, (int)42221, (int)42219);
			@@@var_0_object:AddReply((int)540238, (int)-1, (int)42220);
			return 0;
		}
		var_134_bool = var_73_cvector == (int)42221;
		if(var_134_bool != 0) {
			var_135_string = "";
			func_7946(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)540239);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540240, (int)42224, (int)42222);
			return 0;
		}
		var_141_bool = var_73_cvector == (int)42224;
		if(var_141_bool != 0) {
			var_142_string = "";
			func_7946(var_74_cvector, "Surprise");
			@@@var_0_object:SetMessage((int)540242);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540243, (int)-1, (int)42225);
			@@@var_0_object:AddReply((int)540241, (int)-1, (int)42223);
			return 0;
		}
		var_3_string = true;
		var_150_bool = 0;
		func_8923(var_150_bool);
		if(var_150_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1f21";
	
}


task_28_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_object, var_66_object, var_67_object, var_68_string, var_69_bool, var_70_int, var_71_int, var_72_bool, var_73_cvector, var_74_cvector)
{
	if((int)1 != 0) {
		func_8750();
		var_78_bool = var_73_cvector == (int)42551;
		if(var_78_bool != 0) {
			var_79_string = "";
			func_8259(var_74_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540542);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540543, (int)-1, (int)42552);
			@@@var_0_object:AddReply((int)540796, (int)-1, (int)42845);
			return 0;
		}
		var_3_string = true;
		var_103_bool = 0;
		func_8923(var_103_bool);
		if(var_103_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x205a";
	
}


task_29_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_object, var_66_object, var_67_object, var_68_string, var_69_bool, var_70_bool, var_71_cvector, var_72_cvector, var_73_string)
{
	var_75_bool = var_73_string == "icot_viktor_NPC_Trigger";
	if(var_75_bool != 0) {
		func_8377(var_73_string);
	}
	return 0;
}


task_29_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_object, var_66_object, var_67_object, var_68_string, var_69_bool, var_70_bool, var_71_cvector, var_72_cvector)
{
	TaskCall(0);
	func_0();
	TaskReturn();
	func_8366(var_70_bool, var_71_cvector, var_72_cvector);
	return 0;
}


task_29_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_object, var_66_object, var_67_object, var_68_string, var_69_bool, var_70_bool, var_71_cvector, var_72_cvector, var_73_object)
{
	var_74_bool = 0; var_75_bool = 0;
	var_76_object = var_0_object;
	if(var_76_object != 0) {
		IsOverrideActive(var_75_bool);
		var_77_bool = var_75_bool == 0; //@nz
		if(var_77_bool != 0) {
			EventDisable(0);
			var_78_bool = 0; var_79_object = Obj();
			var_73_object = var_79_object;
			func_8465(var_78_bool, var_79_object);
			EventEnable(0);
			var_92_object = Obj();
			var_73_object = var_92_object;
			func_10327(var_92_object);
		}
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_object, var_56_object, var_57_object, var_58_string, var_59_bool, var_60_object, var_61_object, var_62_object, var_63_string, var_64_bool, var_65_object, var_66_object, var_67_object, var_68_string, var_69_bool, var_70_bool, var_71_cvector, var_72_cvector)
{
	var_73_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_8338(var_70_bool, var_71_cvector, var_72_cvector);
	return 0;
}


func_8704(var_83_string)
{
	var_84_bool = 0; var_85_float = 0; var_86_float = 0; var_87_bool = 0; var_88_float = 0; var_89_float = 0;
	lshHasAnimation(var_87_bool, var_83_string);
	var_90_bool = var_87_bool;
	if(var_90_bool != 0) {
		lshGetAnimTimes(var_83_string, var_88_float, var_89_float);
		lshPlayAnimation(var_88_float, var_89_float, (bool)0);
	} else {
		var_93_int = "Can't find lsh animation : " + var_83_string;
		Trace(var_93_int);
	}
	return 6;
	
}


func_0()
{
	
Label_0:
	Hold();
	var_78_bool = 0;
	func_8474(var_78_bool);
	var_79_bool = var_78_bool == 0; //@nz
	if(var_79_bool == 1) goto Label_0;
	return 0;
}


func_3588(var_0_object, var_1_object, var_2_object, var_3_string, var_675_object, var_676_object)
{
	var_0_object = var_676_object;
	var_1_object = var_675_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_682_bool = 0; var_683_object = Obj();
		var_683_object = var_1_object;
		func_9544(var_683_object);
		if(var_682_bool != 0) {
			var_688_object = Obj(); var_689_object = Obj();
			var_688_object = var_1_object;
			var_689_object = var_0_object;
			func_9040();
			var_692_object = Obj(); var_693_object = Obj();
			var_692_object = var_1_object;
			var_693_object = var_0_object;
			func_9055();
			var_696_string = "";
			func_3705(var_676_object, "Neutral");
			@@@var_0_object:SetMessage((int)536314);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511097, (int)12285, (int)12284);
			@@@var_0_object:AddReply((int)536312, (int)12285, (int)38097);
		} else {
				var_719_string = "";
				func_3705(var_676_object, "Neutral");
				@@@var_0_object:SetMessage((int)511109);
				@@@var_0_object:ClearReplies();
				var_721_bool = 0; var_722_object = Obj();
				var_722_object = var_1_object;
				func_9556(var_722_object);
				if(var_721_bool != 0) {
					@@@var_0_object:AddReply((int)511110, (int)12300, (int)12299);
				}
				var_730_bool = 0;
				var_730_bool = 0;
				var_731_bool = 0; var_732_object = Obj();
				var_732_object = var_1_object;
				func_9568(var_732_object);
				if(var_731_bool != 0) {
					var_737_bool = 0; var_738_object = Obj();
					var_738_object = var_1_object;
					func_9580(var_737_bool, var_738_object);
					if(var_737_bool != 0) {
						var_730_bool = 1;
					}
				}
				if(var_730_bool != 0) {
					@@@var_0_object:AddReply((int)511113, (int)12303, (int)12302);
				}
				@@@var_0_object:AddReply((int)536311, (int)-1, (int)38096);
				goto Label_3675;
		}
	}
Label_3675:
	var_711_bool = 0;
	func_8923(var_711_bool);
	if(var_711_bool != 0) {

	Label_3679:
		lshWaitForAnimEnd();
		var_712_string = var_3_string;
		if(var_712_string != 0) {
		} else {
			var_713_string = "";
			var_713_string = var_2_object;
			func_8704(var_713_string);
			goto Label_3679;
	}
		PlayAnimation("all", "idle");

	Label_3694:
		WaitForAnimEnd();
		var_716_string = var_3_string;
		if(var_716_string != 0) {
			goto Label_3704;
		}
		PlayAnimation("all", "idle");
		goto Label_3694;

	}
	goto Label_3704;
	
Label_3704:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xe08";


func_9735(var_802_bool)
{
	var_804_int = 0; var_805_string = "";
	func_8784(var_804_int, "d5q03");
	var_807_bool = var_804_int == (int)-1;
	if(var_807_bool != 0) {
		var_802_bool = 1;
		return 0;
	}
	var_802_bool = 0;
	return 0;
}


func_4105(var_0_object, var_1_object, var_2_object, var_3_string, var_780_object, var_781_object)
{
	var_0_object = var_781_object;
	var_1_object = var_780_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_787_bool = 0;
		var_787_bool = 0;
		var_788_bool = 0;
		var_788_bool = 0;
		var_789_bool = 0; var_790_object = Obj();
		var_790_object = var_1_object;
		func_9783(var_790_object);
		if(var_789_bool != 0) {
			var_795_bool = 0; var_796_object = Obj();
			var_796_object = var_1_object;
			func_9723(var_796_object);
			var_801_bool = var_795_bool == 0; //@nz
			if(var_801_bool != 0) {
				var_788_bool = 1;
			}
		}
		if(var_788_bool != 0) {
			var_802_bool = 0; var_803_object = Obj();
			var_803_object = var_1_object;
			func_9735(var_803_object);
			var_808_bool = var_802_bool == 0; //@nz
			if(var_808_bool != 0) {
				var_787_bool = 1;
			}
		}
		if(var_787_bool != 0) {
			var_809_object = Obj(); var_810_object = Obj();
			var_809_object = var_1_object;
			var_810_object = var_0_object;
			func_9288();
			var_813_string = "";
			func_4252(var_781_object, "Anger");
			@@@var_0_object:SetMessage((int)512584);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511771, (int)12991, (int)12979);
			var_825_bool = 0; var_826_object = Obj();
			var_826_object = var_1_object;
			func_9711(var_826_object);
			var_831_bool = var_825_bool == 0; //@nz
			if(var_831_bool != 0) {
				@@@var_0_object:AddReply((int)512585, (int)13755, (int)13752);
			}
		} else {
				var_843_string = "";
				func_4252(var_781_object, "Fear");
				@@@var_0_object:SetMessage((int)511765);
				@@@var_0_object:ClearReplies();
				var_845_bool = 0;
				var_845_bool = 0;
				var_846_bool = 0; var_847_object = Obj();
				var_847_object = var_1_object;
				func_9747(var_847_object);
				if(var_846_bool != 0) {
					var_852_bool = 0; var_853_object = Obj();
					var_853_object = var_1_object;
					func_9759(var_853_object);
					if(var_852_bool != 0) {
						var_845_bool = 1;
					}
				}
				if(var_845_bool != 0) {
					@@@var_0_object:AddReply((int)511767, (int)12977, (int)12975);
				}
				var_861_bool = 0;
				var_861_bool = 0;
				var_862_bool = 0; var_863_object = Obj();
				var_863_object = var_1_object;
				func_9723(var_863_object);
				if(var_862_bool != 0) {
					var_864_bool = 0; var_865_object = Obj();
					var_865_object = var_1_object;
					func_9771(var_865_object);
					if(var_864_bool != 0) {
						var_861_bool = 1;
					}
				}
				if(var_861_bool != 0) {
					@@@var_0_object:AddReply((int)512570, (int)13740, (int)13739);
				}
				@@@var_0_object:AddReply((int)511766, (int)-1, (int)12974);
				goto Label_4222;
		}
	}
Label_4222:
	var_835_bool = 0;
	func_8923(var_835_bool);
	if(var_835_bool != 0) {

	Label_4226:
		lshWaitForAnimEnd();
		var_836_string = var_3_string;
		if(var_836_string != 0) {
		} else {
			var_837_string = "";
			var_837_string = var_2_object;
			func_8704(var_837_string);
			goto Label_4226;
	}
		PlayAnimation("all", "idle");

	Label_4241:
		WaitForAnimEnd();
		var_840_string = var_3_string;
		if(var_840_string != 0) {
			goto Label_4251;
		}
		PlayAnimation("all", "idle");
		goto Label_4241;

	}
	goto Label_4251;
	
Label_4251:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x100d";


func_8201(var_0_object, var_1_object, var_2_object, var_3_string, var_1465_object, var_1466_object)
{
	var_0_object = var_1466_object;
	var_1_object = var_1465_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1472_string = "";
		func_8259(var_1466_object, "Neutral");
		@@@var_0_object:SetMessage((int)540542);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540543, (int)-1, (int)42552);
		@@@var_0_object:AddReply((int)540796, (int)-1, (int)42845);
		goto Label_8229;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x200d";
	}
Label_8229:
	var_1487_bool = 0;
	func_8923(var_1487_bool);
	if(var_1487_bool != 0) {

	Label_8233:
		lshWaitForAnimEnd();
		var_1488_string = var_3_string;
		if(var_1488_string != 0) {
		} else {
			var_1489_string = "";
			var_1489_string = var_2_object;
			func_8704(var_1489_string);
			goto Label_8233;
	}
		PlayAnimation("all", "idle");

	Label_8248:
		WaitForAnimEnd();
		var_1492_string = var_3_string;
		if(var_1492_string != 0) {
			goto Label_8258;
		}
		PlayAnimation("all", "idle");
		goto Label_8248;
	}
	goto Label_8258;
	
Label_8258:
	return 0;
	
}


func_9227()
{
	var_81_object = Obj(); var_82_object = Obj();
	var_83_int = 0; var_84_string = "";
	func_8784(var_83_int, "d5q03");
	var_88_bool = var_83_int == (int)0;
	if(var_88_bool != 0) {
		SetVariable("d5q03", (int)1);
		func_10260(Obj());
		var_91_object = var_82_object;
		var_102_float = 0;
		func_8895(var_102_float);
		@@var_82_object:AddMark("d5q03SavePrisoners", "pt_map_uprava_prison", (int)0, (int)515370, var_102_float);
		func_10115();
		func_10128();
		var_136_object = Obj(); var_137_string = "";
		func_8789(var_136_object, "quest_d5_03");
		var_144_bool = 0; var_145_string = ""; var_146_string = "";
		func_8883(var_144_bool, "quest_d5_03", "place_prisoners");
		var_82_object = 0;
	}
	return 2;
}


func_13(var_0_object, var_95_int, var_96_object)
{
	var_98_object = Obj(); var_99_bool = 0; var_100_int = 0; var_101_bool = 0; var_102_object = Obj(); var_103_bool = 0; var_104_int = 0; var_105_bool = 0;
	var_0_object = var_96_object;
	var_106_bool = 0; var_107_object = Obj(); var_108_float = 0;
	var_96_object = var_107_object;
	func_8479(var_106_bool, var_107_object, (float)70.0);
	var_153_bool = var_106_bool == 0; //@nz
	if(var_153_bool != 0) {
		var_95_int = -2;
		return 8;
	}
	CreateDialog(var_102_object);
	var_154_int = 0;
	func_8917(var_154_int);
	@@var_102_object:SetNPCName(var_154_int);
	var_155_int = 0;
	func_8915(var_155_int);
	@@var_102_object:SetNPCDescription(var_155_int);
	var_156_string = "";
	func_8919(var_156_string);
	@@var_102_object:SetPhoto(var_156_string);
	var_157_string = "";
	func_8921(var_157_string);
	@@var_102_object:SetPhoto2(var_157_string);
	var_158_int = 0;
	func_10310(var_158_int);
	@@var_102_object:SetPlayerName(var_158_int);
	IsOverrideActive(var_103_bool);
	var_166_bool = var_103_bool;
	if(var_166_bool != 0) {
		var_95_int = -2;
		return 8;
	}
	DoDialog(var_102_object);
	var_167_bool = 0; var_168_object = Obj();
	func_8757(Obj());
	var_169_object = var_168_object;
	func_8566(var_167_bool, var_168_object);
	var_262_object = Obj(); var_263_object = Obj();
	var_96_object = var_262_object;
	var_102_object = var_263_object;
	TaskCall(2);
	func_94(var_264_object, var_265_object, var_266_string, var_267_bool, var_262_object, var_263_object);
	TaskReturn();
	@@var_102_object:IsDialogEnd(var_105_bool);
	
Label_76:
	var_315_bool = var_105_bool == 0; //@nz
	if(var_315_bool != 0) {
		sync();
		@@var_102_object:IsDialogEnd(var_105_bool);
		goto Label_76;
	}
	var_96_object = Obj();
	func_8548();
	StopDialog(var_102_object);
	@@var_102_object:GetReturnValue((int)-1);
	var_104_int = var_95_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8720(var_277_string, var_278_bool)
{
	var_281_bool = 0; var_282_float = 0; var_283_float = 0; var_284_bool = 0; var_285_float = 0; var_286_float = 0;
	lshHasAnimation(var_284_bool, var_277_string);
	var_287_bool = var_284_bool;
	if(var_287_bool != 0) {
		lshGetAnimTimes(var_277_string, var_285_float, var_286_float);
		lshPlayAnimation(var_285_float, var_286_float, var_278_bool);
	} else {
		var_289_int = "Can't find lsh animation : " + var_277_string;
		Trace(var_289_int);
	}
	return 6;
	
}


func_9747(var_846_bool)
{
	var_848_int = 0; var_849_string = "";
	func_8784(var_848_int, "d5q03");
	var_851_bool = var_848_int == (int)2;
	if(var_851_bool != 0) {
		var_846_bool = 1;
		return 0;
	}
	var_846_bool = 0;
	return 0;
}


func_10260(var_91_object)
{
	var_92_object = Obj(); var_93_object = Obj(); var_94_object = Obj(); var_95_object = Obj();
	GetMainOutdoorScene(var_94_object);
	var_96_bool = var_94_object == 0; //@ne
	if(var_96_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_95_object = 0;
		var_95_object = var_91_object;
		return 4;
	}
	@@var_94_object:GetMap(var_95_object);
	var_95_object = var_91_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_8735(var_201_bool, var_202_string)
{
	var_203_bool = 0; var_204_bool = 0;
	var_205_bool = 0;
	func_8923(var_205_bool);
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


func_9759(var_852_bool)
{
	var_854_int = 0; var_855_string = "";
	func_8784(var_854_int, "ood5Viktor1");
	var_857_bool = var_854_int == (int)0;
	if(var_857_bool != 0) {
		var_852_bool = 1;
		return 0;
	}
	var_852_bool = 0;
	return 0;
}


func_10277(var_128_object, var_129_string, var_130_float)
{
	var_132_cvector = CVector(0,0,0); var_133_cvector = CVector(0,0,0); var_134_object = Obj(); var_135_bool = 0; var_136_cvector = CVector(0,0,0); var_137_cvector = CVector(0,0,0); var_138_object = Obj(); var_139_bool = 0;
	GetMainOutdoorScene(var_138_object);
	var_140_bool = var_138_object == 0; //@ne
	if(var_140_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_138_object:GetLocator(var_129_string, var_139_bool, var_136_cvector, var_137_cvector);
	var_142_bool = var_139_bool == 0; //@nz
	if(var_142_bool != 0) {
		var_144_int = "Warning: outdoor scene locator " + var_129_string;
		var_146_int = var_144_int + " doesnt exist";
		Trace(var_146_int);
	}
	@@var_138_object:GetMap(var_128_object);
	var_147_bool = var_128_object == 0; //@ne
	if(var_147_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_149_float = GetByIndex(var_136_cvector, 0);
	var_150_float = GetByIndex(var_136_cvector, 2);
	@@var_128_object:SetMapParams(var_149_float, var_150_float, var_130_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_2599(var_0_object, var_555_int, var_556_object)
{
	var_558_object = Obj(); var_559_bool = 0; var_560_int = 0; var_561_bool = 0; var_562_object = Obj(); var_563_bool = 0; var_564_int = 0; var_565_bool = 0;
	var_0_object = var_556_object;
	var_566_bool = 0; var_567_object = Obj(); var_568_float = 0;
	var_556_object = var_567_object;
	func_8479(var_566_bool, var_567_object, (float)70.0);
	var_569_bool = var_566_bool == 0; //@nz
	if(var_569_bool != 0) {
		var_555_int = -2;
		return 8;
	}
	CreateDialog(var_562_object);
	var_570_int = 0;
	func_8917(var_570_int);
	@@var_562_object:SetNPCName(var_570_int);
	var_571_int = 0;
	func_8915(var_571_int);
	@@var_562_object:SetNPCDescription(var_571_int);
	var_572_string = "";
	func_8919(var_572_string);
	@@var_562_object:SetPhoto(var_572_string);
	var_573_string = "";
	func_8921(var_573_string);
	@@var_562_object:SetPhoto2(var_573_string);
	var_574_int = 0;
	func_10310(var_574_int);
	@@var_562_object:SetPlayerName(var_574_int);
	IsOverrideActive(var_563_bool);
	var_575_bool = var_563_bool;
	if(var_575_bool != 0) {
		var_555_int = -2;
		return 8;
	}
	DoDialog(var_562_object);
	var_576_bool = 0; var_577_object = Obj();
	func_8757(Obj());
	var_578_object = var_577_object;
	func_8566(var_576_bool, var_577_object);
	var_579_object = Obj(); var_580_object = Obj();
	var_556_object = var_579_object;
	var_562_object = var_580_object;
	TaskCall(10);
	func_2680(var_581_object, var_582_object, var_583_string, var_584_bool, var_579_object, var_580_object);
	TaskReturn();
	@@var_562_object:IsDialogEnd(var_565_bool);
	
Label_2662:
	var_647_bool = var_565_bool == 0; //@nz
	if(var_647_bool != 0) {
		sync();
		@@var_562_object:IsDialogEnd(var_565_bool);
		goto Label_2662;
	}
	var_556_object = Obj();
	func_8548();
	StopDialog(var_562_object);
	@@var_562_object:GetReturnValue((int)-1);
	var_564_int = var_555_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_9771(var_864_bool)
{
	var_866_int = 0; var_867_string = "";
	func_8784(var_866_int, "ood5Viktor2");
	var_869_bool = var_866_int == (int)0;
	if(var_869_bool != 0) {
		var_864_bool = 1;
		return 0;
	}
	var_864_bool = 0;
	return 0;
}


func_8750()
{
	var_76_bool = 0;
	func_8923(var_76_bool);
	if(var_76_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_8757(var_169_object)
{
	var_170_object = Obj(); var_171_object = Obj();
	self(var_171_object);
	var_171_object = var_169_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_9269()
{
	SetVariable("ood5Viktor1", (int)1);
	return 0;
}


func_9783(var_789_bool)
{
	var_791_int = 0; var_792_string = "";
	func_8784(var_791_int, "ood5Viktor3");
	var_794_bool = var_791_int == (int)0;
	if(var_794_bool != 0) {
		var_789_bool = 1;
		return 0;
	}
	var_789_bool = 0;
	return 0;
}


func_9275()
{
	SetVariable("ood5Viktor2", (int)1);
	return 0;
}


func_8763(var_133_cvector, var_134_cvector)
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


func_9281(var_203_object)
{
	var_205_bool = 0; var_206_object = Obj(); var_207_float = 0;
	var_203_object = var_206_object;
	func_8838(var_205_bool, var_206_object, (float)0.30000001192092896);
	return 0;
}


func_2114(var_0_object, var_1_object, var_2_object, var_3_string, var_489_object, var_490_object)
{
	var_0_object = var_490_object;
	var_1_object = var_489_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_496_string = "";
		func_2210(var_490_object, "Neutral");
		@@@var_0_object:SetMessage((int)506924);
		@@@var_0_object:ClearReplies();
		var_505_bool = 0;
		var_505_bool = 0;
		var_506_bool = 0;
		var_506_bool = 0;
		var_507_bool = 0; var_508_object = Obj();
		var_508_object = var_1_object;
		func_9603(var_508_object);
		if(var_507_bool != 0) {
			var_513_bool = 0; var_514_object = Obj();
			var_514_object = var_1_object;
			func_9639(var_514_object);
			if(var_513_bool != 0) {
				var_506_bool = 1;
			}
		}
		if(var_506_bool != 0) {
			var_519_bool = 0; var_520_object = Obj();
			var_520_object = var_1_object;
			func_9627(var_520_object);
			if(var_519_bool != 0) {
				var_505_bool = 1;
			}
		}
		if(var_505_bool != 0) {
			@@@var_0_object:AddReply((int)506925, (int)7632, (int)7631);
		}
		var_528_bool = 0; var_529_object = Obj();
		var_529_object = var_1_object;
		func_9591(var_529_object);
		if(var_528_bool != 0) {
			@@@var_0_object:AddReply((int)532771, (int)10476, (int)34238);
		}
		@@@var_0_object:AddReply((int)507777, (int)-1, (int)8579);
		@@@var_0_object:AddReply((int)532772, (int)-1, (int)34239);
		goto Label_2180;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x846";
	}
Label_2180:
	var_543_bool = 0;
	func_8923(var_543_bool);
	if(var_543_bool != 0) {

	Label_2184:
		lshWaitForAnimEnd();
		var_544_string = var_3_string;
		if(var_544_string != 0) {
		} else {
			var_545_string = "";
			var_545_string = var_2_object;
			func_8704(var_545_string);
			goto Label_2184;
	}
		PlayAnimation("all", "idle");

	Label_2199:
		WaitForAnimEnd();
		var_548_string = var_3_string;
		if(var_548_string != 0) {
			goto Label_2209;
		}
		PlayAnimation("all", "idle");
		goto Label_2199;
	}
	goto Label_2209;
	
Label_2209:
	return 0;
	
}


func_9795(var_911_bool)
{
	var_913_int = 0; var_914_string = "";
	func_8784(var_913_int, "ood6Viktor1");
	var_916_bool = var_913_int == (int)0;
	if(var_916_bool != 0) {
		var_911_bool = 1;
		return 0;
	}
	var_911_bool = 0;
	return 0;
}


func_8259(var_2_object, var_1472_string)
{
	var_1473_bool = 0;
	func_8923(var_1473_bool);
	var_1474_bool = var_1473_bool == 0; //@nz
	if(var_1474_bool != 0) {
		return 0;
	}
	var_1475_bool = var_1472_string == var_2_object;
	if(var_1475_bool != 0) {
		return 0;
	}
	var_1476_string = ""; var_1477_bool = 0;
	var_1472_string = var_1476_string;
	var_1479_bool = var_1472_string == "";
	if(var_1479_bool != 0) {
		var_1477_bool = 0;
	} else {
		var_1477_bool = 1;
	}
	func_8720(var_1476_string, var_1477_bool);
	var_2_object = var_1472_string;
	return 0;
	
}


func_8773(var_234_float, var_235_float, var_236_float, var_237_float)
{
	var_238_bool = var_235_float < var_236_float;
	if(var_238_bool != 0) {
		var_236_float = var_234_float;
		return 0;
	}
	var_239_bool = var_235_float > var_237_float;
	if(var_239_bool != 0) {
		var_237_float = var_234_float;
		return 0;
	}
	var_235_float = var_234_float;
	return 0;
}


func_10310(var_158_int)
{
	var_159_int = 0; var_160_int = 0;
	GetVariable("branch", var_160_int);
	var_163_bool = var_160_int == (int)0;
	if(var_163_bool != 0) {
		var_158_int = 1;
		return 2;
	EMIT "GOTO 0x2855";
	}
	var_165_bool = var_160_int == (int)1;
	if(var_165_bool != 0) {
		var_158_int = 2;
		return 2;
	}
	var_158_int = 3;
	return 2;
}


func_9288()
{
	SetVariable("ood5Viktor3", (int)1);
	return 0;
}


func_9294()
{
	SetVariable("ood6Viktor1", (int)1);
	return 0;
}


func_5199(var_0_object, var_1_object, var_2_object, var_3_string, var_1041_object, var_1042_object)
{
	var_0_object = var_1042_object;
	var_1_object = var_1041_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1048_bool = 0;
		var_1048_bool = 0;
		var_1049_bool = 0; var_1050_object = Obj();
		var_1050_object = var_1_object;
		func_9819(var_1050_object);
		if(var_1049_bool != 0) {
			var_1055_bool = 0; var_1056_object = Obj();
			var_1056_object = var_1_object;
			func_9807(var_1056_object);
			if(var_1055_bool != 0) {
				var_1048_bool = 1;
			}
		}
		if(var_1048_bool != 0) {
			var_1061_object = Obj(); var_1062_object = Obj();
			var_1061_object = var_1_object;
			var_1062_object = var_0_object;
			func_9347();
			var_1065_string = "";
			func_5296(var_1042_object, "Neutral");
			@@@var_0_object:SetMessage((int)512275);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512276, (int)13435, (int)13433);
			@@@var_0_object:AddReply((int)512277, (int)13435, (int)13434);
		} else {
				var_1088_string = "";
				func_5296(var_1042_object, "Neutral");
				@@@var_0_object:SetMessage((int)513779);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)513780, (int)-1, (int)15016);
				@@@var_0_object:AddReply((int)541598, (int)-1, (int)43762);
				goto Label_5266;
		}
	}
Label_5266:
	var_1080_bool = 0;
	func_8923(var_1080_bool);
	if(var_1080_bool != 0) {

	Label_5270:
		lshWaitForAnimEnd();
		var_1081_string = var_3_string;
		if(var_1081_string != 0) {
		} else {
			var_1082_string = "";
			var_1082_string = var_2_object;
			func_8704(var_1082_string);
			goto Label_5270;
	}
		PlayAnimation("all", "idle");

	Label_5285:
		WaitForAnimEnd();
		var_1085_string = var_3_string;
		if(var_1085_string != 0) {
			goto Label_5295;
		}
		PlayAnimation("all", "idle");
		goto Label_5285;

	}
	goto Label_5295;
	
Label_5295:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1453";


func_9807(var_1055_bool)
{
	var_1057_int = 0; var_1058_string = "";
	func_8784(var_1057_int, "ood8Viktor1");
	var_1060_bool = var_1057_int == (int)0;
	if(var_1060_bool != 0) {
		var_1055_bool = 1;
		return 0;
	}
	var_1055_bool = 0;
	return 0;
}


func_8784(var_361_int, var_362_string)
{
	var_363_int = 0; var_364_int = 0;
	GetVariable(var_362_string, var_364_int);
	var_364_int = var_361_int;
	return 2;
}


func_9300()
{
	var_81_object = Obj(); var_82_object = Obj();
	SetVariable("d6q01", (int)1);
	func_10260(Obj());
	var_85_object = var_82_object;
	var_96_float = 0;
	func_8895(var_96_float);
	@@var_82_object:AddMark("d6q01ViktorGotoAlexandr", "pt_map_alexandr", (int)1, (int)515383, var_96_float);
	var_103_float = 0;
	func_8895(var_103_float);
	@@var_82_object:AddMark("d6q01ViktorGotoBigVlad", "pt_map_bigvlad", (int)1, (int)515384, var_103_float);
	var_108_float = 0;
	func_8895(var_108_float);
	@@var_82_object:AddMark("d6q01ViktorGotoAlxBigSelf", "pt_map_viktor", (int)1, (int)515385, var_108_float);
	func_10141();
	func_10167();
	func_10154();
	return 2;
}
EMIT "Stack[-1] = 0";


func_8789(var_114_object, var_115_string)
{
	var_116_object = Obj(); var_117_object = Obj(); var_118_object = Obj(); var_119_object = Obj();
	GetMainOutdoorScene(var_118_object);
	var_121_int = var_115_string + ".bin";
	AddBlankActor(var_119_object, var_118_object, var_115_string, var_121_int);
	var_119_object = var_114_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_10327(var_92_object)
{
	var_93_bool = GlobalVars[1];
	var_94_bool = var_93_bool == 0; //@nz
	if(var_94_bool != 0) {
		var_95_int = 0; var_96_object = Obj();
		var_92_object = var_96_object;
		TaskCall(1);
		func_13(var_97_object, var_95_int, var_96_object);
		TaskReturn();
		var_324_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_325_bool = 0; var_326_int = 0;
	func_8909(var_325_bool, (int)1);
	if(var_325_bool != 0) {
		var_328_int = 0; var_329_object = Obj();
		var_92_object = var_329_object;
		TaskCall(5);
		func_738(var_330_object, var_328_int, var_329_object);
		TaskReturn();
		return 0;
	}
	var_463_bool = 0; var_464_int = 0;
	func_8909(var_463_bool, (int)2);
	if(var_463_bool != 0) {
		var_465_int = 0; var_466_object = Obj();
		var_92_object = var_466_object;
		TaskCall(7);
		func_2033(var_467_object, var_465_int, var_466_object);
		TaskReturn();
		return 0;
	}
	var_553_bool = 0; var_554_int = 0;
	func_8909(var_553_bool, (int)3);
	if(var_553_bool != 0) {
		var_555_int = 0; var_556_object = Obj();
		var_92_object = var_556_object;
		TaskCall(9);
		func_2599(var_557_object, var_555_int, var_556_object);
		TaskReturn();
		return 0;
	}
	var_649_bool = 0; var_650_int = 0;
	func_8909(var_649_bool, (int)4);
	if(var_649_bool != 0) {
		var_651_int = 0; var_652_object = Obj();
		var_92_object = var_652_object;
		TaskCall(11);
		func_3507(var_653_object, var_651_int, var_652_object);
		TaskReturn();
		return 0;
	}
	var_754_bool = 0; var_755_int = 0;
	func_8909(var_754_bool, (int)5);
	if(var_754_bool != 0) {
		var_756_int = 0; var_757_object = Obj();
		var_92_object = var_757_object;
		TaskCall(13);
		func_4024(var_758_object, var_756_int, var_757_object);
		TaskReturn();
		return 0;
	}
	var_878_bool = 0; var_879_int = 0;
	func_8909(var_878_bool, (int)6);
	if(var_878_bool != 0) {
		var_880_int = 0; var_881_object = Obj();
		var_92_object = var_881_object;
		TaskCall(3);
		func_277(var_882_object, var_880_int, var_881_object);
		TaskReturn();
		return 0;
	}
	var_951_bool = 0; var_952_int = 0;
	func_8909(var_951_bool, (int)7);
	if(var_951_bool != 0) {
		var_953_int = 0; var_954_object = Obj();
		var_92_object = var_954_object;
		TaskCall(15);
		func_4758(var_955_object, var_953_int, var_954_object);
		TaskReturn();
		return 0;
	}
	var_1015_bool = 0; var_1016_int = 0;
	func_8909(var_1015_bool, (int)8);
	if(var_1015_bool != 0) {
		var_1017_int = 0; var_1018_object = Obj();
		var_92_object = var_1018_object;
		TaskCall(17);
		func_5118(var_1019_object, var_1017_int, var_1018_object);
		TaskReturn();
		return 0;
	}
	var_1098_bool = 0; var_1099_int = 0;
	func_8909(var_1098_bool, (int)9);
	if(var_1098_bool != 0) {
		var_1100_int = 0; var_1101_object = Obj();
		var_92_object = var_1101_object;
		TaskCall(19);
		func_5545(var_1102_object, var_1100_int, var_1101_object);
		TaskReturn();
		return 0;
	}
	var_1200_bool = 0; var_1201_int = 0;
	func_8909(var_1200_bool, (int)10);
	if(var_1200_bool != 0) {
		var_1202_int = 0; var_1203_object = Obj();
		var_92_object = var_1203_object;
		TaskCall(23);
		func_7277(var_1204_object, var_1202_int, var_1203_object);
		TaskReturn();
		return 0;
	}
	var_1267_bool = 0; var_1268_int = 0;
	func_8909(var_1267_bool, (int)11);
	if(var_1267_bool != 0) {
		var_1269_int = 0; var_1270_object = Obj();
		var_92_object = var_1270_object;
		TaskCall(21);
		func_6387(var_1271_object, var_1269_int, var_1270_object);
		TaskReturn();
		return 0;
	}
	var_1383_bool = 0; var_1384_int = 0;
	func_8909(var_1383_bool, (int)12);
	if(var_1383_bool != 0) {
		var_1385_int = 0; var_1386_object = Obj();
		var_92_object = var_1386_object;
		TaskCall(25);
		func_7807(var_1387_object, var_1385_int, var_1386_object);
		TaskReturn();
		return 0;
	}
	var_1441_int = 0; var_1442_object = Obj();
	var_92_object = var_1442_object;
	TaskCall(27);
	func_8120(var_1443_object, var_1441_int, var_1442_object);
	TaskReturn();
	return 0;
}


func_9819(var_1049_bool)
{
	var_1051_int = 0; var_1052_string = "";
	func_8784(var_1051_int, "d8KainIsReason");
	var_1054_bool = var_1051_int == (int)1;
	if(var_1054_bool != 0) {
		var_1049_bool = 1;
		return 0;
	}
	var_1049_bool = 0;
	return 0;
}


func_94(var_0_object, var_1_object, var_2_object, var_3_string, var_262_object, var_263_object)
{
	var_0_object = var_263_object;
	var_1_object = var_262_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_269_object = Obj(); var_270_object = Obj();
		var_269_object = var_1_object;
		var_270_object = var_0_object;
		func_9123();
		var_273_string = "";
		func_157(var_263_object, "Neutral");
		@@@var_0_object:SetMessage((int)501575);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)501576, (int)1782, (int)1780);
		@@@var_0_object:AddReply((int)501577, (int)1782, (int)1781);
		goto Label_127;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_127:
	var_297_bool = 0;
	func_8923(var_297_bool);
	if(var_297_bool != 0) {

	Label_131:
		lshWaitForAnimEnd();
		var_298_string = var_3_string;
		if(var_298_string != 0) {
		} else {
			var_299_string = "";
			var_299_string = var_2_object;
			func_8704(var_299_string);
			goto Label_131;
	}
		PlayAnimation("all", "idle");

	Label_146:
		WaitForAnimEnd();
		var_312_string = var_3_string;
		if(var_312_string != 0) {
			goto Label_156;
		}
		PlayAnimation("all", "idle");
		goto Label_146;
	}
	goto Label_156;
	
Label_156:
	return 0;
	
}


func_8800(var_122_int, var_123_int)
{
	var_124_object = Obj(); var_125_object = Obj();
	CreateIntVector(var_125_object);
	@@var_125_object:add(var_122_int);
	@@var_125_object:add(var_123_int);
	SendWorldWndMessage((int)3, var_125_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9831(var_1131_bool)
{
	var_1133_int = 0; var_1134_string = "";
	func_8784(var_1133_int, "ood9Viktor1");
	var_1136_bool = var_1133_int == (int)0;
	if(var_1136_bool != 0) {
		var_1131_bool = 1;
		return 0;
	}
	var_1131_bool = 0;
	return 0;
}


func_8812(var_109_object, var_110_int)
{
	var_111_int = 0; var_112_int = 0;
	var_113_object = Obj(); var_114_string = ""; var_115_int = 0;
	var_109_object = var_113_object;
	var_110_int = var_115_int;
	func_8448(var_113_object, "money", var_115_int);
	var_120_bool = var_110_int > (int)0;
	if(var_120_bool != 0) {
		GetInvItemByName(var_112_int, "Money");
		var_122_int = 0; var_123_int = 0;
		var_112_int = var_122_int;
		var_110_int = var_123_int;
		func_8800(var_122_int, var_123_int);
	}
	return 2;
}


func_7277(var_0_object, var_1202_int, var_1203_object)
{
	var_1205_object = Obj(); var_1206_bool = 0; var_1207_int = 0; var_1208_bool = 0; var_1209_object = Obj(); var_1210_bool = 0; var_1211_int = 0; var_1212_bool = 0;
	var_0_object = var_1203_object;
	var_1213_bool = 0; var_1214_object = Obj(); var_1215_float = 0;
	var_1203_object = var_1214_object;
	func_8479(var_1213_bool, var_1214_object, (float)70.0);
	var_1216_bool = var_1213_bool == 0; //@nz
	if(var_1216_bool != 0) {
		var_1202_int = -2;
		return 8;
	}
	CreateDialog(var_1209_object);
	var_1217_int = 0;
	func_8917(var_1217_int);
	@@var_1209_object:SetNPCName(var_1217_int);
	var_1218_int = 0;
	func_8915(var_1218_int);
	@@var_1209_object:SetNPCDescription(var_1218_int);
	var_1219_string = "";
	func_8919(var_1219_string);
	@@var_1209_object:SetPhoto(var_1219_string);
	var_1220_string = "";
	func_8921(var_1220_string);
	@@var_1209_object:SetPhoto2(var_1220_string);
	var_1221_int = 0;
	func_10310(var_1221_int);
	@@var_1209_object:SetPlayerName(var_1221_int);
	IsOverrideActive(var_1210_bool);
	var_1222_bool = var_1210_bool;
	if(var_1222_bool != 0) {
		var_1202_int = -2;
		return 8;
	}
	DoDialog(var_1209_object);
	var_1223_bool = 0; var_1224_object = Obj();
	func_8757(Obj());
	var_1225_object = var_1224_object;
	func_8566(var_1223_bool, var_1224_object);
	var_1226_object = Obj(); var_1227_object = Obj();
	var_1203_object = var_1226_object;
	var_1209_object = var_1227_object;
	TaskCall(24);
	func_7358(var_1228_object, var_1229_object, var_1230_string, var_1231_bool, var_1226_object, var_1227_object);
	TaskReturn();
	@@var_1209_object:IsDialogEnd(var_1212_bool);
	
Label_7340:
	var_1265_bool = var_1212_bool == 0; //@nz
	if(var_1265_bool != 0) {
		sync();
		@@var_1209_object:IsDialogEnd(var_1212_bool);
		goto Label_7340;
	}
	var_1203_object = Obj();
	func_8548();
	StopDialog(var_1209_object);
	@@var_1209_object:GetReturnValue((int)-1);
	var_1211_int = var_1202_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5743(var_2_object, var_1145_string)
{
	var_1146_bool = 0;
	func_8923(var_1146_bool);
	var_1147_bool = var_1146_bool == 0; //@nz
	if(var_1147_bool != 0) {
		return 0;
	}
	var_1148_bool = var_1145_string == var_2_object;
	if(var_1148_bool != 0) {
		return 0;
	}
	var_1149_string = ""; var_1150_bool = 0;
	var_1145_string = var_1149_string;
	var_1152_bool = var_1145_string == "";
	if(var_1152_bool != 0) {
		var_1150_bool = 0;
	} else {
		var_1150_bool = 1;
	}
	func_8720(var_1149_string, var_1150_bool);
	var_2_object = var_1145_string;
	return 0;
	
}


func_9843(var_1180_bool)
{
	var_1182_int = 0; var_1183_string = "";
	func_8784(var_1182_int, "d9q01");
	var_1185_bool = var_1182_int == (int)2;
	if(var_1185_bool != 0) {
		var_1180_bool = 1;
		return 0;
	}
	var_1180_bool = 0;
	return 0;
}


func_2680(var_0_object, var_1_object, var_2_object, var_3_string, var_579_object, var_580_object)
{
	var_0_object = var_580_object;
	var_1_object = var_579_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_586_string = "";
		func_2781(var_580_object, "Neutral");
		@@@var_0_object:SetMessage((int)510235);
		@@@var_0_object:ClearReplies();
		var_595_bool = 0;
		var_595_bool = 0;
		var_596_bool = 0; var_597_object = Obj();
		var_597_object = var_1_object;
		func_9663(var_597_object);
		if(var_596_bool != 0) {
			var_602_bool = 0; var_603_object = Obj();
			var_603_object = var_1_object;
			func_9675(var_603_object);
			if(var_602_bool != 0) {
				var_595_bool = 1;
			}
		}
		if(var_595_bool != 0) {
			@@@var_0_object:AddReply((int)510236, (int)11288, (int)11286);
		}
		var_611_bool = 0;
		var_611_bool = 0;
		var_612_bool = 0; var_613_object = Obj();
		var_613_object = var_1_object;
		func_9699(var_613_object);
		if(var_612_bool != 0) {
			var_618_bool = 0; var_619_object = Obj();
			var_619_object = var_1_object;
			func_9687(var_619_object);
			if(var_618_bool != 0) {
				var_611_bool = 1;
			}
		}
		if(var_611_bool != 0) {
			@@@var_0_object:AddReply((int)510266, (int)35986, (int)11320);
		}
		var_627_bool = 0; var_628_object = Obj();
		var_628_object = var_1_object;
		func_9532(var_628_object);
		if(var_627_bool != 0) {
			@@@var_0_object:AddReply((int)510237, (int)11089, (int)11287);
		}
		@@@var_0_object:AddReply((int)511382, (int)-1, (int)12578);
		goto Label_2751;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xa7c";
	}
Label_2751:
	var_639_bool = 0;
	func_8923(var_639_bool);
	if(var_639_bool != 0) {

	Label_2755:
		lshWaitForAnimEnd();
		var_640_string = var_3_string;
		if(var_640_string != 0) {
		} else {
			var_641_string = "";
			var_641_string = var_2_object;
			func_8704(var_641_string);
			goto Label_2755;
	}
		PlayAnimation("all", "idle");

	Label_2770:
		WaitForAnimEnd();
		var_644_string = var_3_string;
		if(var_644_string != 0) {
			goto Label_2780;
		}
		PlayAnimation("all", "idle");
		goto Label_2770;
	}
	goto Label_2780;
	
Label_2780:
	return 0;
	
}


func_3705(var_2_object, var_696_string)
{
	var_697_bool = 0;
	func_8923(var_697_bool);
	var_698_bool = var_697_bool == 0; //@nz
	if(var_698_bool != 0) {
		return 0;
	}
	var_699_bool = var_696_string == var_2_object;
	if(var_699_bool != 0) {
		return 0;
	}
	var_700_string = ""; var_701_bool = 0;
	var_696_string = var_700_string;
	var_703_bool = var_696_string == "";
	if(var_703_bool != 0) {
		var_701_bool = 0;
	} else {
		var_701_bool = 1;
	}
	func_8720(var_700_string, var_701_bool);
	var_2_object = var_696_string;
	return 0;
	
}


func_8831(var_739_bool, var_740_object, var_741_string)
{
	var_742_int = 0; var_743_bool = 0; var_744_int = 0; var_745_bool = 0;
	GetInvItemByName(var_744_int, var_741_string);
	@@var_740_object:HasItem(var_744_int, var_745_bool);
	var_745_bool = var_739_bool;
	return 4;
}


func_7807(var_0_object, var_1385_int, var_1386_object)
{
	var_1388_object = Obj(); var_1389_bool = 0; var_1390_int = 0; var_1391_bool = 0; var_1392_object = Obj(); var_1393_bool = 0; var_1394_int = 0; var_1395_bool = 0;
	var_0_object = var_1386_object;
	var_1396_bool = 0; var_1397_object = Obj(); var_1398_float = 0;
	var_1386_object = var_1397_object;
	func_8479(var_1396_bool, var_1397_object, (float)70.0);
	var_1399_bool = var_1396_bool == 0; //@nz
	if(var_1399_bool != 0) {
		var_1385_int = -2;
		return 8;
	}
	CreateDialog(var_1392_object);
	var_1400_int = 0;
	func_8917(var_1400_int);
	@@var_1392_object:SetNPCName(var_1400_int);
	var_1401_int = 0;
	func_8915(var_1401_int);
	@@var_1392_object:SetNPCDescription(var_1401_int);
	var_1402_string = "";
	func_8919(var_1402_string);
	@@var_1392_object:SetPhoto(var_1402_string);
	var_1403_string = "";
	func_8921(var_1403_string);
	@@var_1392_object:SetPhoto2(var_1403_string);
	var_1404_int = 0;
	func_10310(var_1404_int);
	@@var_1392_object:SetPlayerName(var_1404_int);
	IsOverrideActive(var_1393_bool);
	var_1405_bool = var_1393_bool;
	if(var_1405_bool != 0) {
		var_1385_int = -2;
		return 8;
	}
	DoDialog(var_1392_object);
	var_1406_bool = 0; var_1407_object = Obj();
	func_8757(Obj());
	var_1408_object = var_1407_object;
	func_8566(var_1406_bool, var_1407_object);
	var_1409_object = Obj(); var_1410_object = Obj();
	var_1386_object = var_1409_object;
	var_1392_object = var_1410_object;
	TaskCall(26);
	func_7888(var_1411_object, var_1412_object, var_1413_string, var_1414_bool, var_1409_object, var_1410_object);
	TaskReturn();
	@@var_1392_object:IsDialogEnd(var_1395_bool);
	
Label_7870:
	var_1439_bool = var_1395_bool == 0; //@nz
	if(var_1439_bool != 0) {
		sync();
		@@var_1392_object:IsDialogEnd(var_1395_bool);
		goto Label_7870;
	}
	var_1386_object = Obj();
	func_8548();
	StopDialog(var_1392_object);
	@@var_1392_object:GetReturnValue((int)-1);
	var_1394_int = var_1385_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_9855(var_1186_bool)
{
	var_1188_int = 0; var_1189_string = "";
	func_8784(var_1188_int, "ood9Viktor2");
	var_1191_bool = var_1188_int == (int)0;
	if(var_1191_bool != 0) {
		var_1186_bool = 1;
		return 0;
	}
	var_1186_bool = 0;
	return 0;
}


func_9347()
{
	SetVariable("ood8Viktor1", (int)1);
	return 0;
}


func_8838(var_205_bool, var_206_object, var_207_float)
{
	var_208_bool = var_206_object == 0; //@nz
	if(var_208_bool != 0) {
		var_205_bool = 0;
		return 0;
	}
	var_210_bool = var_207_float > (int)0;
	if(var_210_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_241_bool = var_207_float < (int)0;
		if(var_241_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_8859;
		}
		var_205_bool = 0;
		return 0;
	}
Label_8859:
	var_212_float = 0;
	var_207_float = var_212_float;
	func_8873(var_212_float);
	var_216_bool = 0; var_217_object = Obj(); var_218_string = ""; var_219_float = 0; var_220_float = 0; var_221_float = 0;
	var_206_object = var_217_object;
	var_207_float = var_219_float;
	func_8426(var_216_bool, var_217_object, "reputation", var_219_float, (float)0, (float)1);
	var_205_bool = 1;
	return 0;
	
}


func_9353()
{
	SetVariable("ood9Viktor1", (int)1);
	return 0;
}


func_9867(var_219_bool)
{
	var_221_int = 0; var_222_string = "";
	func_8784(var_221_int, "d9TalkToPolkovodec");
	var_224_bool = var_221_int != (int)0;
	if(var_224_bool != 0) {
		var_219_bool = 1;
		return 0;
	}
	var_219_bool = 0;
	return 0;
}


func_9359()
{
	SetVariable("d9q01", (int)1);
	func_10193();
	func_10206();
	var_114_bool = 0; var_115_string = ""; var_116_string = "";
	func_8883(var_114_bool, "quest_d9_01", "place_rifles");
	return 0;
}


func_8338(var_0_object, var_1_object, var_2_object)
{
	GetPosition(var_1_object);
	GetDirection(var_2_object);
	var_0_object = false;
	var_74_bool = 0;
	func_8474(var_74_bool);
	var_77_bool = var_74_bool == 0; //@nz
	if(var_77_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
		func_8366(var_70_bool, var_71_cvector, var_72_cvector);
	}
Label_8356:
	var_83_string = "";
	func_8704("Neutral");
	lshWaitForAnimEnd();
	goto Label_8356;
}
EMIT "@ Hold()";
EMIT "Pop(0)";
EMIT "Return(); Pop(0)";


func_4758(var_0_object, var_953_int, var_954_object)
{
	var_956_object = Obj(); var_957_bool = 0; var_958_int = 0; var_959_bool = 0; var_960_object = Obj(); var_961_bool = 0; var_962_int = 0; var_963_bool = 0;
	var_0_object = var_954_object;
	var_964_bool = 0; var_965_object = Obj(); var_966_float = 0;
	var_954_object = var_965_object;
	func_8479(var_964_bool, var_965_object, (float)70.0);
	var_967_bool = var_964_bool == 0; //@nz
	if(var_967_bool != 0) {
		var_953_int = -2;
		return 8;
	}
	CreateDialog(var_960_object);
	var_968_int = 0;
	func_8917(var_968_int);
	@@var_960_object:SetNPCName(var_968_int);
	var_969_int = 0;
	func_8915(var_969_int);
	@@var_960_object:SetNPCDescription(var_969_int);
	var_970_string = "";
	func_8919(var_970_string);
	@@var_960_object:SetPhoto(var_970_string);
	var_971_string = "";
	func_8921(var_971_string);
	@@var_960_object:SetPhoto2(var_971_string);
	var_972_int = 0;
	func_10310(var_972_int);
	@@var_960_object:SetPlayerName(var_972_int);
	IsOverrideActive(var_961_bool);
	var_973_bool = var_961_bool;
	if(var_973_bool != 0) {
		var_953_int = -2;
		return 8;
	}
	DoDialog(var_960_object);
	var_974_bool = 0; var_975_object = Obj();
	func_8757(Obj());
	var_976_object = var_975_object;
	func_8566(var_974_bool, var_975_object);
	var_977_object = Obj(); var_978_object = Obj();
	var_954_object = var_977_object;
	var_960_object = var_978_object;
	TaskCall(16);
	func_4839(var_979_object, var_980_object, var_981_string, var_982_bool, var_977_object, var_978_object);
	TaskReturn();
	@@var_960_object:IsDialogEnd(var_963_bool);
	
Label_4821:
	var_1013_bool = var_963_bool == 0; //@nz
	if(var_1013_bool != 0) {
		sync();
		@@var_960_object:IsDialogEnd(var_963_bool);
		goto Label_4821;
	}
	var_954_object = Obj();
	func_8548();
	StopDialog(var_960_object);
	@@var_960_object:GetReturnValue((int)-1);
	var_962_int = var_953_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_9879(var_1346_bool)
{
	var_1348_int = 0; var_1349_string = "";
	func_8784(var_1348_int, "d11q01");
	var_1351_bool = var_1348_int == (int)1;
	if(var_1351_bool != 0) {
		var_1346_bool = 1;
		return 0;
	}
	var_1346_bool = 0;
	return 0;
}


func_4252(var_2_object, var_813_string)
{
	var_814_bool = 0;
	func_8923(var_814_bool);
	var_815_bool = var_814_bool == 0; //@nz
	if(var_815_bool != 0) {
		return 0;
	}
	var_816_bool = var_813_string == var_2_object;
	if(var_816_bool != 0) {
		return 0;
	}
	var_817_string = ""; var_818_bool = 0;
	var_813_string = var_817_string;
	var_820_bool = var_813_string == "";
	if(var_820_bool != 0) {
		var_818_bool = 0;
	} else {
		var_818_bool = 1;
	}
	func_8720(var_817_string, var_818_bool);
	var_2_object = var_813_string;
	return 0;
	
}


func_157(var_2_object, var_273_string)
{
	var_274_bool = 0;
	func_8923(var_274_bool);
	var_275_bool = var_274_bool == 0; //@nz
	if(var_275_bool != 0) {
		return 0;
	}
	var_276_bool = var_273_string == var_2_object;
	if(var_276_bool != 0) {
		return 0;
	}
	var_277_string = ""; var_278_bool = 0;
	var_273_string = var_277_string;
	var_280_bool = var_273_string == "";
	if(var_280_bool != 0) {
		var_278_bool = 0;
	} else {
		var_278_bool = 1;
	}
	func_8720(var_277_string, var_278_bool);
	var_2_object = var_273_string;
	return 0;
	
}


func_9376()
{
	SetVariable("ood9Viktor2", (int)1);
	return 0;
}


func_2210(var_2_object, var_496_string)
{
	var_497_bool = 0;
	func_8923(var_497_bool);
	var_498_bool = var_497_bool == 0; //@nz
	if(var_498_bool != 0) {
		return 0;
	}
	var_499_bool = var_496_string == var_2_object;
	if(var_499_bool != 0) {
		return 0;
	}
	var_500_string = ""; var_501_bool = 0;
	var_496_string = var_500_string;
	var_503_bool = var_496_string == "";
	if(var_503_bool != 0) {
		var_501_bool = 0;
	} else {
		var_501_bool = 1;
	}
	func_8720(var_500_string, var_501_bool);
	var_2_object = var_496_string;
	return 0;
	
}


func_9891(var_1340_bool)
{
	var_1342_int = 0; var_1343_string = "";
	func_8784(var_1342_int, "ood11Viktor1");
	var_1345_bool = var_1342_int == (int)0;
	if(var_1345_bool != 0) {
		var_1340_bool = 1;
		return 0;
	}
	var_1340_bool = 0;
	return 0;
}


func_9382()
{
	SetVariable("ood11Viktor1", (int)1);
	return 0;
}


func_8873(var_212_float)
{
	var_213_object = Obj(); var_214_object = Obj();
	CreateFloatVector(var_214_object);
	@@var_214_object:add(var_212_float);
	SendWorldWndMessage((int)16, var_214_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9388()
{
	SetVariable("ood11Viktor2", (int)1);
	return 0;
}


func_8366(var_0_object, var_1_object, var_2_object)
{
	SetPosition(var_1_object);
	SetDirection(var_2_object);
	var_0_object = false;
	LockAnimation("all", "stand", (int)0);
	return 0;
}


func_9903(var_1360_bool)
{
	var_1362_int = 0; var_1363_string = "";
	func_8784(var_1362_int, "ood11Viktor2");
	var_1365_bool = var_1362_int == (int)0;
	if(var_1365_bool != 0) {
		var_1360_bool = 1;
		return 0;
	}
	var_1360_bool = 0;
	return 0;
}


func_5296(var_2_object, var_1065_string)
{
	var_1066_bool = 0;
	func_8923(var_1066_bool);
	var_1067_bool = var_1066_bool == 0; //@nz
	if(var_1067_bool != 0) {
		return 0;
	}
	var_1068_bool = var_1065_string == var_2_object;
	if(var_1068_bool != 0) {
		return 0;
	}
	var_1069_string = ""; var_1070_bool = 0;
	var_1065_string = var_1069_string;
	var_1072_bool = var_1065_string == "";
	if(var_1072_bool != 0) {
		var_1070_bool = 0;
	} else {
		var_1070_bool = 1;
	}
	func_8720(var_1069_string, var_1070_bool);
	var_2_object = var_1065_string;
	return 0;
	
}


func_9394()
{
	SetVariable("KnowMyth", (int)1);
	return 0;
}


func_8883(var_133_bool, var_134_string, var_135_string)
{
	var_136_object = Obj(); var_137_object = Obj();
	FindActor(var_137_object, var_134_string);
	var_138_bool = var_137_object == 0; //@ne
	if(var_138_bool != 0) {
		var_133_bool = 0;
		return 2;
	}
	Trigger(var_137_object, var_135_string);
	var_133_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_9400()
{
	SetVariable("d6ViktorVisit", (int)1);
	return 0;
}


func_8377(var_0_object)
{
	var_76_bool = var_0_object == 0; //@nz
	if(var_76_bool != 0) {
		var_0_object = true;
		PlayAnimation("all", "stand");
		WaitForAnimEnd();
	}
	return 0;
}


func_9915(var_1366_bool)
{
	var_1368_int = 0; var_1369_string = "";
	func_8784(var_1368_int, "d11q01");
	var_1371_bool = var_1368_int >= (int)4;
	if(var_1371_bool != 0) {
		var_1366_bool = 1;
		return 0;
	}
	var_1366_bool = 0;
	return 0;
}


func_9406()
{
	SetVariable("ood9Viktor3", (int)1);
	return 0;
}


func_7358(var_0_object, var_1_object, var_2_object, var_3_string, var_1226_object, var_1227_object)
{
	var_0_object = var_1227_object;
	var_1_object = var_1226_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1233_string = "";
		func_7426(var_1227_object, "Neutral");
		@@@var_0_object:SetMessage((int)534101);
		@@@var_0_object:ClearReplies();
		var_1242_bool = 0; var_1243_object = Obj();
		var_1243_object = var_1_object;
		func_9508(var_1243_object);
		if(var_1242_bool != 0) {
			@@@var_0_object:AddReply((int)534102, (int)35697, (int)35695);
		}
		@@@var_0_object:AddReply((int)534103, (int)-1, (int)35696);
		@@@var_0_object:AddReply((int)536433, (int)-1, (int)38218);
		goto Label_7396;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1cc2";
	}
Label_7396:
	var_1257_bool = 0;
	func_8923(var_1257_bool);
	if(var_1257_bool != 0) {

	Label_7400:
		lshWaitForAnimEnd();
		var_1258_string = var_3_string;
		if(var_1258_string != 0) {
		} else {
			var_1259_string = "";
			var_1259_string = var_2_object;
			func_8704(var_1259_string);
			goto Label_7400;
	}
		PlayAnimation("all", "idle");

	Label_7415:
		WaitForAnimEnd();
		var_1262_string = var_3_string;
		if(var_1262_string != 0) {
			goto Label_7425;
		}
		PlayAnimation("all", "idle");
		goto Label_7415;
	}
	goto Label_7425;
	
Label_7425:
	return 0;
	
}


func_8895(var_102_float)
{
	var_103_float = 0; var_104_float = 0;
	GetGameTime(var_104_float);
	var_104_float = var_102_float;
	return 2;
}


func_9412(var_449_bool)
{
	var_451_int = 0; var_452_string = "";
	func_8784(var_451_int, "d1q02");
	var_454_bool = var_451_int == (int)3;
	if(var_454_bool != 0) {
		var_449_bool = 1;
		return 0;
	}
	var_449_bool = 0;
	return 0;
}


func_8900(var_222_int)
{
	var_223_float = 0; var_224_float = 0;
	GetGameTime(var_224_float);
	var_226_int = 0;
	var_226_int = var_224_float / (int)24;
	var_222_int = (int)1 + var_226_int;
	return 2;
}


func_9927(var_252_bool)
{
	var_254_int = 0; var_255_string = "";
	func_8784(var_254_int, "d11q01");
	var_257_bool = var_254_int == (int)1000;
	if(var_257_bool != 0) {
		var_252_bool = 1;
		return 0;
	}
	var_252_bool = 0;
	return 0;
}


func_8909(var_325_bool, var_326_int)
{
	var_327_int = 0;
	func_8900(var_327_int);
	var_325_bool = var_327_int == var_326_int;
	return 0;
}


func_9424(var_377_bool)
{
	var_379_int = 0; var_380_string = "";
	func_8784(var_379_int, "ood1Viktor1");
	var_382_bool = var_379_int == (int)0;
	if(var_382_bool != 0) {
		var_377_bool = 1;
		return 0;
	}
	var_377_bool = 0;
	return 0;
}


func_7888(var_0_object, var_1_object, var_2_object, var_3_string, var_1409_object, var_1410_object)
{
	var_0_object = var_1410_object;
	var_1_object = var_1409_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1416_string = "";
		func_7946(var_1410_object, "Neutral");
		@@@var_0_object:SetMessage((int)535665);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535666, (int)42176, (int)37352);
		@@@var_0_object:AddReply((int)540007, (int)-1, (int)41978);
		goto Label_7916;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1ed4";
	}
Label_7916:
	var_1431_bool = 0;
	func_8923(var_1431_bool);
	if(var_1431_bool != 0) {

	Label_7920:
		lshWaitForAnimEnd();
		var_1432_string = var_3_string;
		if(var_1432_string != 0) {
		} else {
			var_1433_string = "";
			var_1433_string = var_2_object;
			func_8704(var_1433_string);
			goto Label_7920;
	}
		PlayAnimation("all", "idle");

	Label_7935:
		WaitForAnimEnd();
		var_1436_string = var_3_string;
		if(var_1436_string != 0) {
			goto Label_7945;
		}
		PlayAnimation("all", "idle");
		goto Label_7935;
	}
	goto Label_7945;
	
Label_7945:
	return 0;
	
}


func_8915(var_155_int)
{
	var_155_int = 515554;
	return 0;
}


func_9939(var_1170_bool)
{
	var_1172_int = 0; var_1173_string = "";
	func_8784(var_1172_int, "ood9Viktor3");
	var_1175_bool = var_1172_int == (int)0;
	if(var_1175_bool != 0) {
		var_1170_bool = 1;
		return 0;
	}
	var_1170_bool = 0;
	return 0;
}


func_8917(var_154_int)
{
	var_154_int = 502879;
	return 0;
}


func_8919(var_156_string)
{
	var_156_string = "ui/NPC_Viktor.png";
	return 0;
}


func_8921(var_157_string)
{
	var_157_string = "ui/NPC_Viktor_b.png";
	return 0;
}


func_8923(var_149_bool)
{
	var_149_bool = 1;
	return 0;
}


func_9436(var_407_bool)
{
	var_409_int = 0; var_410_string = "";
	func_8784(var_409_int, "ood1Viktor2");
	var_412_bool = var_409_int == (int)0;
	if(var_412_bool != 0) {
		var_407_bool = 1;
		return 0;
	}
	var_407_bool = 0;
	return 0;
}


func_8925()
{
	func_10037();
	var_198_bool = 0; var_199_string = ""; var_200_string = "";
	func_8883(var_198_bool, "quest_d1_02", "fail");
	return 0;
}


func_2781(var_2_object, var_586_string)
{
	var_587_bool = 0;
	func_8923(var_587_bool);
	var_588_bool = var_587_bool == 0; //@nz
	if(var_588_bool != 0) {
		return 0;
	}
	var_589_bool = var_586_string == var_2_object;
	if(var_589_bool != 0) {
		return 0;
	}
	var_590_string = ""; var_591_bool = 0;
	var_586_string = var_590_string;
	var_593_bool = var_586_string == "";
	if(var_593_bool != 0) {
		var_591_bool = 0;
	} else {
		var_591_bool = 1;
	}
	func_8720(var_590_string, var_591_bool);
	var_2_object = var_586_string;
	return 0;
	
}


func_9951(var_424_bool)
{
	var_426_bool = 0;
	var_426_bool = 0;
	var_427_bool = 0;
	var_427_bool = 0;
	var_428_int = 0; var_429_string = "";
	func_8784(var_428_int, "d1q01");
	var_431_bool = var_428_int != (int)0;
	if(var_431_bool != 0) {
		var_432_int = 0; var_433_string = "";
		func_8784(var_432_int, "d1q01");
		var_435_bool = var_432_int != (int)1000;
		if(var_435_bool != 0) {
			var_427_bool = 1;
		}
	}
	if(var_427_bool != 0) {
		var_436_int = 0; var_437_string = "";
		func_8784(var_436_int, "d1q01");
		var_439_bool = var_436_int != (int)-1;
		if(var_439_bool != 0) {
			var_426_bool = 1;
		}
	}
	if(var_426_bool != 0) {
		var_424_bool = 1;
		return 0;
	}
	var_424_bool = 0;
	return 0;
}


func_8414(var_224_bool, var_225_object, var_226_string)
{
	var_227_bool = 0; var_228_bool = 0;
	var_231_bool = IsFuncExist(var_225_object, "HasProperty", (int)2);
	var_232_bool = var_231_bool == 0; //@nz
	if(var_232_bool != 0) {
		var_224_bool = 0;
		return 2;
	}
	@@var_225_object:HasProperty(var_226_string, var_228_bool);
	var_228_bool = var_224_bool;
	return 2;
}


func_738(var_0_object, var_328_int, var_329_object)
{
	var_331_object = Obj(); var_332_bool = 0; var_333_int = 0; var_334_bool = 0; var_335_object = Obj(); var_336_bool = 0; var_337_int = 0; var_338_bool = 0;
	var_0_object = var_329_object;
	var_339_bool = 0; var_340_object = Obj(); var_341_float = 0;
	var_329_object = var_340_object;
	func_8479(var_339_bool, var_340_object, (float)70.0);
	var_342_bool = var_339_bool == 0; //@nz
	if(var_342_bool != 0) {
		var_328_int = -2;
		return 8;
	}
	CreateDialog(var_335_object);
	var_343_int = 0;
	func_8917(var_343_int);
	@@var_335_object:SetNPCName(var_343_int);
	var_344_int = 0;
	func_8915(var_344_int);
	@@var_335_object:SetNPCDescription(var_344_int);
	var_345_string = "";
	func_8919(var_345_string);
	@@var_335_object:SetPhoto(var_345_string);
	var_346_string = "";
	func_8921(var_346_string);
	@@var_335_object:SetPhoto2(var_346_string);
	var_347_int = 0;
	func_10310(var_347_int);
	@@var_335_object:SetPlayerName(var_347_int);
	IsOverrideActive(var_336_bool);
	var_348_bool = var_336_bool;
	if(var_348_bool != 0) {
		var_328_int = -2;
		return 8;
	}
	DoDialog(var_335_object);
	var_349_bool = 0; var_350_object = Obj();
	func_8757(Obj());
	var_351_object = var_350_object;
	func_8566(var_349_bool, var_350_object);
	var_352_object = Obj(); var_353_object = Obj();
	var_329_object = var_352_object;
	var_335_object = var_353_object;
	TaskCall(6);
	func_819(var_354_object, var_355_object, var_356_string, var_357_bool, var_352_object, var_353_object);
	TaskReturn();
	@@var_335_object:IsDialogEnd(var_338_bool);
	
Label_801:
	var_461_bool = var_338_bool == 0; //@nz
	if(var_461_bool != 0) {
		sync();
		@@var_335_object:IsDialogEnd(var_338_bool);
		goto Label_801;
	}
	var_329_object = Obj();
	func_8548();
	StopDialog(var_335_object);
	@@var_335_object:GetReturnValue((int)-1);
	var_337_int = var_328_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8935()
{
	SetVariable("ood1Viktor1", (int)1);
	return 0;
}


func_9448(var_440_bool)
{
	var_442_int = 0; var_443_string = "";
	func_8784(var_442_int, "ood1Viktor3");
	var_445_bool = var_442_int == (int)0;
	if(var_445_bool != 0) {
		var_440_bool = 1;
		return 0;
	}
	var_440_bool = 0;
	return 0;
}


func_4839(var_0_object, var_1_object, var_2_object, var_3_string, var_977_object, var_978_object)
{
	var_0_object = var_978_object;
	var_1_object = var_977_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_984_string = "";
		func_4902(var_978_object, "Neutral");
		@@@var_0_object:SetMessage((int)533245);
		@@@var_0_object:ClearReplies();
		var_993_bool = 0; var_994_object = Obj();
		var_994_object = var_1_object;
		func_9496(var_994_object);
		if(var_993_bool != 0) {
			@@@var_0_object:AddReply((int)533246, (int)42854, (int)34760);
		}
		@@@var_0_object:AddReply((int)540800, (int)-1, (int)42851);
		goto Label_4872;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x12eb";
	}
Label_4872:
	var_1005_bool = 0;
	func_8923(var_1005_bool);
	if(var_1005_bool != 0) {

	Label_4876:
		lshWaitForAnimEnd();
		var_1006_string = var_3_string;
		if(var_1006_string != 0) {
		} else {
			var_1007_string = "";
			var_1007_string = var_2_object;
			func_8704(var_1007_string);
			goto Label_4876;
	}
		PlayAnimation("all", "idle");

	Label_4891:
		WaitForAnimEnd();
		var_1010_string = var_3_string;
		if(var_1010_string != 0) {
			goto Label_4901;
		}
		PlayAnimation("all", "idle");
		goto Label_4891;
	}
	goto Label_4901;
	
Label_4901:
	return 0;
	
}


func_8426(var_216_bool, var_217_object, var_218_string, var_219_float, var_220_float, var_221_float)
{
	var_222_float = 0; var_223_float = 0;
	var_224_bool = 0; var_225_object = Obj(); var_226_string = "";
	var_217_object = var_225_object;
	var_218_string = var_226_string;
	func_8414(var_224_bool, var_225_object, var_226_string);
	var_233_bool = var_224_bool == 0; //@nz
	if(var_233_bool != 0) {
		var_216_bool = 0;
		return 2;
	}
	@@var_217_object:GetProperty(var_218_string, var_223_float);
	var_234_float = 0; var_235_float = 0; var_236_float = 0; var_237_float = 0;
	var_235_float = var_223_float + var_219_float;
	var_220_float = var_236_float;
	var_221_float = var_237_float;
	func_8773(var_234_float, var_235_float, var_236_float, var_237_float);
	@@var_217_object:SetProperty(var_218_string, var_234_float);
	var_216_bool = 1;
	return 2;
}


func_8941()
{
	SetVariable("ood1Viktor2", (int)1);
	return 0;
}


func_8947()
{
	SetVariable("ood1Viktor3", (int)1);
	return 0;
}


func_9460(var_427_bool)
{
	var_429_int = 0; var_430_string = "";
	func_8784(var_429_int, "d1q01");
	var_432_bool = var_429_int == (int)0;
	if(var_432_bool != 0) {
		var_427_bool = 1;
		return 0;
	}
	var_427_bool = 0;
	return 0;
}


func_6387(var_0_object, var_1269_int, var_1270_object)
{
	var_1272_object = Obj(); var_1273_bool = 0; var_1274_int = 0; var_1275_bool = 0; var_1276_object = Obj(); var_1277_bool = 0; var_1278_int = 0; var_1279_bool = 0;
	var_0_object = var_1270_object;
	var_1280_bool = 0; var_1281_object = Obj(); var_1282_float = 0;
	var_1270_object = var_1281_object;
	func_8479(var_1280_bool, var_1281_object, (float)70.0);
	var_1283_bool = var_1280_bool == 0; //@nz
	if(var_1283_bool != 0) {
		var_1269_int = -2;
		return 8;
	}
	CreateDialog(var_1276_object);
	var_1284_int = 0;
	func_8917(var_1284_int);
	@@var_1276_object:SetNPCName(var_1284_int);
	var_1285_int = 0;
	func_8915(var_1285_int);
	@@var_1276_object:SetNPCDescription(var_1285_int);
	var_1286_string = "";
	func_8919(var_1286_string);
	@@var_1276_object:SetPhoto(var_1286_string);
	var_1287_string = "";
	func_8921(var_1287_string);
	@@var_1276_object:SetPhoto2(var_1287_string);
	var_1288_int = 0;
	func_10310(var_1288_int);
	@@var_1276_object:SetPlayerName(var_1288_int);
	IsOverrideActive(var_1277_bool);
	var_1289_bool = var_1277_bool;
	if(var_1289_bool != 0) {
		var_1269_int = -2;
		return 8;
	}
	DoDialog(var_1276_object);
	var_1290_bool = 0; var_1291_object = Obj();
	func_8757(Obj());
	var_1292_object = var_1291_object;
	func_8566(var_1290_bool, var_1291_object);
	var_1293_object = Obj(); var_1294_object = Obj();
	var_1270_object = var_1293_object;
	var_1276_object = var_1294_object;
	TaskCall(22);
	func_6468(var_1295_object, var_1296_object, var_1297_string, var_1298_bool, var_1293_object, var_1294_object);
	TaskReturn();
	@@var_1276_object:IsDialogEnd(var_1279_bool);
	
Label_6450:
	var_1381_bool = var_1279_bool == 0; //@nz
	if(var_1381_bool != 0) {
		sync();
		@@var_1276_object:IsDialogEnd(var_1279_bool);
		goto Label_6450;
	}
	var_1270_object = Obj();
	func_8548();
	StopDialog(var_1276_object);
	@@var_1276_object:GetReturnValue((int)-1);
	var_1278_int = var_1269_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8953()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_8959(var_145_object)
{
	var_146_object = Obj(); var_147_string = ""; var_148_float = 0;
	func_10260(Obj());
	var_149_object = var_146_object;
	func_10277(var_146_object, "pt_b1q05_patrol_house", (float)2);
	var_169_object = Obj();
	func_10260(var_169_object);
	@@var_145_object:ShowMap(var_169_object);
	return 0;
}


func_9472(var_418_bool)
{
	var_420_int = 0; var_421_string = "";
	func_8784(var_420_int, "d1q01TeloNedostupno");
	var_423_bool = var_420_int == (int)1;
	if(var_423_bool != 0) {
		var_418_bool = 1;
		return 0;
	}
	var_418_bool = 0;
	return 0;
}


func_8448(var_113_object, var_114_string, var_115_int)
{
	var_116_int = 0; var_117_int = 0;
	@@var_113_object:GetProperty(var_114_string, var_117_int);
	var_118_int = var_117_int + var_115_int;
	@@var_113_object:SetProperty(var_114_string, var_118_int);
	return 2;
}


func_7426(var_2_object, var_1233_string)
{
	var_1234_bool = 0;
	func_8923(var_1234_bool);
	var_1235_bool = var_1234_bool == 0; //@nz
	if(var_1235_bool != 0) {
		return 0;
	}
	var_1236_bool = var_1233_string == var_2_object;
	if(var_1236_bool != 0) {
		return 0;
	}
	var_1237_string = ""; var_1238_bool = 0;
	var_1233_string = var_1237_string;
	var_1240_bool = var_1233_string == "";
	if(var_1240_bool != 0) {
		var_1238_bool = 0;
	} else {
		var_1238_bool = 1;
	}
	func_8720(var_1237_string, var_1238_bool);
	var_2_object = var_1233_string;
	return 0;
	
}


func_9985()
{
	var_83_object = Obj(); var_84_object = Obj();
	CreateDiaryEntry(var_84_object, (int)669, (int)2, (int)534123);
	var_88_bool = 0; var_89_object = Obj(); var_90_int = 0;
	var_84_object = var_89_object;
	func_10232(var_88_bool, var_89_object, (int)666);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8455(var_82_bool, var_83_cvector)
{
	var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_bool = 0; var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_bool = 0;
	GetPosition(var_87_cvector);
	var_88_cvector = var_83_cvector - var_87_cvector;
	var_90_float = GetByIndex(var_88_cvector, 0);
	var_91_float = GetByIndex(var_88_cvector, 2);
	Rotate(var_90_float, var_91_float, var_89_bool);
	var_89_bool = var_82_bool;
	return 6;
}


func_7946(var_2_object, var_1416_string)
{
	var_1417_bool = 0;
	func_8923(var_1417_bool);
	var_1418_bool = var_1417_bool == 0; //@nz
	if(var_1418_bool != 0) {
		return 0;
	}
	var_1419_bool = var_1416_string == var_2_object;
	if(var_1419_bool != 0) {
		return 0;
	}
	var_1420_string = ""; var_1421_bool = 0;
	var_1416_string = var_1420_string;
	var_1423_bool = var_1416_string == "";
	if(var_1423_bool != 0) {
		var_1421_bool = 0;
	} else {
		var_1421_bool = 1;
	}
	func_8720(var_1420_string, var_1421_bool);
	var_2_object = var_1416_string;
	return 0;
	
}


func_9484(var_359_bool)
{
	var_361_int = 0; var_362_string = "";
	func_8784(var_361_int, "d1q01FirstGeorgVisit");
	var_366_bool = var_361_int == (int)1;
	if(var_366_bool != 0) {
		var_359_bool = 1;
		return 0;
	}
	var_359_bool = 0;
	return 0;
}


func_9998()
{
	var_83_object = Obj(); var_84_object = Obj();
	CreateDiaryEntry(var_84_object, (int)686, (int)2, (int)534534);
	var_88_bool = 0; var_89_object = Obj(); var_90_int = 0;
	var_84_object = var_89_object;
	func_10232(var_88_bool, var_89_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8975(var_145_object)
{
	Trace("money 7000 is given");
	var_148_object = Obj(); var_149_int = 0;
	var_145_object = var_148_object;
	func_8812(var_148_object, (int)7000);
	return 0;
}


func_8465(var_78_bool, var_79_object)
{
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0);
	@@var_79_object:GetPosition(var_81_cvector);
	var_82_bool = 0; var_83_cvector = CVector(0,0,0);
	var_81_cvector = var_83_cvector;
	func_8455(var_82_bool, var_83_cvector);
	var_82_bool = var_78_bool;
	return 2;
}


func_277(var_0_object, var_880_int, var_881_object)
{
	var_883_object = Obj(); var_884_bool = 0; var_885_int = 0; var_886_bool = 0; var_887_object = Obj(); var_888_bool = 0; var_889_int = 0; var_890_bool = 0;
	var_0_object = var_881_object;
	var_891_bool = 0; var_892_object = Obj(); var_893_float = 0;
	var_881_object = var_892_object;
	func_8479(var_891_bool, var_892_object, (float)70.0);
	var_894_bool = var_891_bool == 0; //@nz
	if(var_894_bool != 0) {
		var_880_int = -2;
		return 8;
	}
	CreateDialog(var_887_object);
	var_895_int = 0;
	func_8917(var_895_int);
	@@var_887_object:SetNPCName(var_895_int);
	var_896_int = 0;
	func_8915(var_896_int);
	@@var_887_object:SetNPCDescription(var_896_int);
	var_897_string = "";
	func_8919(var_897_string);
	@@var_887_object:SetPhoto(var_897_string);
	var_898_string = "";
	func_8921(var_898_string);
	@@var_887_object:SetPhoto2(var_898_string);
	var_899_int = 0;
	func_10310(var_899_int);
	@@var_887_object:SetPlayerName(var_899_int);
	IsOverrideActive(var_888_bool);
	var_900_bool = var_888_bool;
	if(var_900_bool != 0) {
		var_880_int = -2;
		return 8;
	}
	DoDialog(var_887_object);
	var_901_bool = 0; var_902_object = Obj();
	func_8757(Obj());
	var_903_object = var_902_object;
	func_8566(var_901_bool, var_902_object);
	var_904_object = Obj(); var_905_object = Obj();
	var_881_object = var_904_object;
	var_887_object = var_905_object;
	TaskCall(4);
	func_358(var_906_object, var_907_object, var_908_string, var_909_bool, var_904_object, var_905_object);
	TaskReturn();
	@@var_887_object:IsDialogEnd(var_890_bool);
	
Label_340:
	var_949_bool = var_890_bool == 0; //@nz
	if(var_949_bool != 0) {
		sync();
		@@var_887_object:IsDialogEnd(var_890_bool);
		goto Label_340;
	}
	var_881_object = Obj();
	func_8548();
	StopDialog(var_887_object);
	@@var_887_object:GetReturnValue((int)-1);
	var_889_int = var_880_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_9496(var_993_bool)
{
	var_995_int = 0; var_996_string = "";
	func_8784(var_995_int, "d7q03");
	var_998_bool = var_995_int == (int)2;
	if(var_998_bool != 0) {
		var_993_bool = 1;
		return 0;
	}
	var_993_bool = 0;
	return 0;
}


func_8985()
{
	SetVariable("d7q03", (int)3);
	func_10180();
	return 0;
}


func_8474(var_74_bool)
{
	var_75_bool = 0; var_76_bool = 0;
	IsLoaded(var_76_bool);
	var_76_bool = var_74_bool;
	return 2;
}


func_10011()
{
	var_106_object = Obj(); var_107_object = Obj();
	CreateDiaryEntry(var_107_object, (int)687, (int)2, (int)534535);
	var_111_bool = 0; var_112_object = Obj(); var_113_int = 0;
	var_107_object = var_112_object;
	func_10232(var_111_bool, var_112_object, (int)686);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8479(var_106_bool, var_107_object, var_108_float)
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
	func_8763(var_133_cvector, var_134_cvector);
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
	func_8923(var_149_bool);
	if(var_149_bool != 0) {
	} else {
		HasAnimationTrack(var_126_bool, "head");
		var_151_bool = var_126_bool;
		if(var_151_bool == 0) goto Label_8542;
		LookAsyncCamera("head");
	}
Label_8542:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_106_bool = 1;
	return 18;
	
}


func_8994()
{
	SetVariable("d10q02", (int)3);
	func_9985();
	return 0;
}


func_9508(var_1242_bool)
{
	var_1244_int = 0; var_1245_string = "";
	func_8784(var_1244_int, "d10q02");
	var_1247_bool = var_1244_int == (int)2;
	if(var_1247_bool != 0) {
		var_1242_bool = 1;
		return 0;
	}
	var_1242_bool = 0;
	return 0;
}


func_4902(var_2_object, var_984_string)
{
	var_985_bool = 0;
	func_8923(var_985_bool);
	var_986_bool = var_985_bool == 0; //@nz
	if(var_986_bool != 0) {
		return 0;
	}
	var_987_bool = var_984_string == var_2_object;
	if(var_987_bool != 0) {
		return 0;
	}
	var_988_string = ""; var_989_bool = 0;
	var_984_string = var_988_string;
	var_991_bool = var_984_string == "";
	if(var_991_bool != 0) {
		var_989_bool = 0;
	} else {
		var_989_bool = 1;
	}
	func_8720(var_988_string, var_989_bool);
	var_2_object = var_984_string;
	return 0;
	
}


func_10024()
{
	var_115_object = Obj(); var_116_object = Obj();
	CreateDiaryEntry(var_116_object, (int)32, (int)1, (int)512114);
	var_120_bool = 0; var_121_object = Obj(); var_122_int = 0;
	var_116_object = var_121_object;
	func_10232(var_120_bool, var_121_object, (int)2);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9003()
{
	var_133_bool = 0; var_134_string = ""; var_135_string = "";
	func_8883(var_133_bool, "quest_d10_02", "unlock_georg");
	return 0;
}


func_9520(var_1300_bool)
{
	var_1302_int = 0; var_1303_string = "";
	func_8784(var_1302_int, "ood11Viktor4");
	var_1305_bool = var_1302_int == (int)0;
	if(var_1305_bool != 0) {
		var_1300_bool = 1;
		return 0;
	}
	var_1300_bool = 0;
	return 0;
}


func_9010()
{
	return 0;
}


func_819(var_0_object, var_1_object, var_2_object, var_3_string, var_352_object, var_353_object)
{
	var_0_object = var_353_object;
	var_1_object = var_352_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_359_bool = 0; var_360_object = Obj();
		var_360_object = var_1_object;
		func_9484(var_360_object);
		var_367_bool = var_359_bool == 0; //@nz
		if(var_367_bool != 0) {
			var_368_string = "";
			func_970(var_353_object, "Neutral");
			@@@var_0_object:SetMessage((int)505111);
			@@@var_0_object:ClearReplies();
			var_377_bool = 0; var_378_object = Obj();
			var_378_object = var_1_object;
			func_9424(var_378_object);
			if(var_377_bool != 0) {
				@@@var_0_object:AddReply((int)505112, (int)5626, (int)5625);
			}
			var_386_bool = 0; var_387_object = Obj();
			var_387_object = var_1_object;
			func_9424(var_387_object);
			if(var_386_bool != 0) {
				@@@var_0_object:AddReply((int)505119, (int)5626, (int)5632);
			}
			@@@var_0_object:AddReply((int)505120, (int)-1, (int)5634);
		} else {
				var_402_string = "";
				func_970(var_353_object, "Neutral");
				@@@var_0_object:SetMessage((int)505106);
				@@@var_0_object:ClearReplies();
				var_404_bool = 0;
				var_404_bool = 0;
				var_405_bool = 0; var_406_object = Obj();
				var_406_object = var_1_object;
				func_9484(var_406_object);
				if(var_405_bool != 0) {
					var_407_bool = 0; var_408_object = Obj();
					var_408_object = var_1_object;
					func_9436(var_408_object);
					if(var_407_bool != 0) {
						var_404_bool = 1;
					}
				}
				if(var_404_bool != 0) {
					@@@var_0_object:AddReply((int)505107, (int)9234, (int)5620);
				}
				var_416_bool = 0;
				var_416_bool = 0;
				var_417_bool = 0;
				var_417_bool = 0;
				var_418_bool = 0; var_419_object = Obj();
				var_419_object = var_1_object;
				func_9472(var_419_object);
				if(var_418_bool != 0) {
					var_424_bool = 0; var_425_object = Obj();
					var_425_object = var_1_object;
					func_9951(var_425_object);
					if(var_424_bool != 0) {
						var_417_bool = 1;
					}
				}
				if(var_417_bool != 0) {
					var_440_bool = 0; var_441_object = Obj();
					var_441_object = var_1_object;
					func_9448(var_441_object);
					if(var_440_bool != 0) {
						var_416_bool = 1;
					}
				}
				if(var_416_bool != 0) {
					@@@var_0_object:AddReply((int)505142, (int)5662, (int)5661);
				}
				var_449_bool = 0; var_450_object = Obj();
				var_450_object = var_1_object;
				func_9412(var_450_object);
				if(var_449_bool != 0) {
					@@@var_0_object:AddReply((int)521229, (int)34260, (int)22420);
				}
				@@@var_0_object:AddReply((int)505110, (int)-1, (int)5623);
				goto Label_940;
		}
	}
Label_940:
	var_394_bool = 0;
	func_8923(var_394_bool);
	if(var_394_bool != 0) {

	Label_944:
		lshWaitForAnimEnd();
		var_395_string = var_3_string;
		if(var_395_string != 0) {
		} else {
			var_396_string = "";
			var_396_string = var_2_object;
			func_8704(var_396_string);
			goto Label_944;
	}
		PlayAnimation("all", "idle");

	Label_959:
		WaitForAnimEnd();
		var_399_string = var_3_string;
		if(var_399_string != 0) {
			goto Label_969;
		}
		PlayAnimation("all", "idle");
		goto Label_959;

	}
	goto Label_969;
	
Label_969:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x337";


func_9012()
{
	SetVariable("ood11Viktor4", (int)1);
	return 0;
}


func_10037()
{
	var_190_object = Obj(); var_191_object = Obj();
	CreateDiaryEntry(var_191_object, (int)275, (int)2, (int)521237);
	var_195_bool = 0; var_196_object = Obj(); var_197_int = 0;
	var_191_object = var_196_object;
	func_10232(var_195_bool, var_196_object, (int)7);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9018()
{
	SetVariable("d11q06", (int)1);
	func_9998();
	func_10011();
	var_114_object = Obj(); var_115_string = "";
	func_8789(var_114_object, "quest_d11_06");
	return 0;
}


func_9532(var_627_bool)
{
	var_629_int = 0; var_630_string = "";
	func_8784(var_629_int, "ood3Viktor3");
	var_632_bool = var_629_int == (int)0;
	if(var_632_bool != 0) {
		var_627_bool = 1;
		return 0;
	}
	var_627_bool = 0;
	return 0;
}


func_10050()
{
	var_184_object = Obj(); var_185_object = Obj();
	CreateDiaryEntry(var_185_object, (int)136, (int)2, (int)515306);
	var_189_bool = 0; var_190_object = Obj(); var_191_int = 0;
	var_185_object = var_190_object;
	func_10232(var_189_bool, var_190_object, (int)26);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6468(var_0_object, var_1_object, var_2_object, var_3_string, var_1293_object, var_1294_object)
{
	var_0_object = var_1294_object;
	var_1_object = var_1293_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1300_bool = 0; var_1301_object = Obj();
		var_1301_object = var_1_object;
		func_9520(var_1301_object);
		if(var_1300_bool != 0) {
			var_1306_object = Obj(); var_1307_object = Obj();
			var_1306_object = var_1_object;
			var_1307_object = var_0_object;
			func_9012();
			var_1310_object = Obj(); var_1311_object = Obj();
			var_1310_object = var_1_object;
			var_1311_object = var_0_object;
			func_9061();
			var_1314_string = "";
			func_6609(var_1294_object, "Neutral");
			@@@var_0_object:SetMessage((int)534501);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538426, (int)40303, (int)40302);
			@@@var_0_object:AddReply((int)538432, (int)40311, (int)40308);
		} else {
				var_1337_string = "";
				func_6609(var_1294_object, "Neutral");
				@@@var_0_object:SetMessage((int)514377);
				@@@var_0_object:ClearReplies();
				var_1339_bool = 0;
				var_1339_bool = 0;
				var_1340_bool = 0; var_1341_object = Obj();
				var_1341_object = var_1_object;
				func_9891(var_1341_object);
				if(var_1340_bool != 0) {
					var_1346_bool = 0; var_1347_object = Obj();
					var_1347_object = var_1_object;
					func_9879(var_1347_object);
					if(var_1346_bool != 0) {
						var_1339_bool = 1;
					}
				}
				if(var_1339_bool != 0) {
					@@@var_0_object:AddReply((int)538451, (int)15592, (int)40333);
				}
				var_1355_bool = 0;
				var_1355_bool = 0;
				var_1356_bool = 0;
				var_1356_bool = 0;
				var_1357_bool = 0; var_1358_object = Obj();
				var_1358_object = var_1_object;
				func_9891(var_1358_object);
				var_1359_bool = var_1357_bool == 0; //@nz
				if(var_1359_bool != 0) {
					var_1360_bool = 0; var_1361_object = Obj();
					var_1361_object = var_1_object;
					func_9903(var_1361_object);
					if(var_1360_bool != 0) {
						var_1356_bool = 1;
					}
				}
				if(var_1356_bool != 0) {
					var_1366_bool = 0; var_1367_object = Obj();
					var_1367_object = var_1_object;
					func_9915(var_1367_object);
					if(var_1366_bool != 0) {
						var_1355_bool = 1;
					}
				}
				if(var_1355_bool != 0) {
					@@@var_0_object:AddReply((int)514378, (int)15602, (int)15601);
				}
				@@@var_0_object:AddReply((int)538442, (int)-1, (int)40321);
				@@@var_0_object:AddReply((int)514419, (int)-1, (int)15644);
				goto Label_6579;
		}
	}
Label_6579:
	var_1329_bool = 0;
	func_8923(var_1329_bool);
	if(var_1329_bool != 0) {

	Label_6583:
		lshWaitForAnimEnd();
		var_1330_string = var_3_string;
		if(var_1330_string != 0) {
		} else {
			var_1331_string = "";
			var_1331_string = var_2_object;
			func_8704(var_1331_string);
			goto Label_6583;
	}
		PlayAnimation("all", "idle");

	Label_6598:
		WaitForAnimEnd();
		var_1334_string = var_3_string;
		if(var_1334_string != 0) {
			goto Label_6608;
		}
		PlayAnimation("all", "idle");
		goto Label_6598;

	}
	goto Label_6608;
	
Label_6608:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1948";


func_9544(var_682_bool)
{
	var_684_int = 0; var_685_string = "";
	func_8784(var_684_int, "ood4Viktor1");
	var_687_bool = var_684_int == (int)0;
	if(var_687_bool != 0) {
		var_682_bool = 1;
		return 0;
	}
	var_682_bool = 0;
	return 0;
}


func_9034()
{
	SetVariable("ood3Viktor3", (int)1);
	return 0;
}


func_10063()
{
	var_103_object = Obj(); var_104_object = Obj();
	CreateDiaryEntry(var_104_object, (int)77, (int)2, (int)512159);
	var_108_bool = 0; var_109_object = Obj(); var_110_int = 0;
	var_104_object = var_109_object;
	func_10232(var_108_bool, var_109_object, (int)26);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9040()
{
	SetVariable("ood4Viktor1", (int)1);
	return 0;
}


func_9556(var_721_bool)
{
	var_723_int = 0; var_724_string = "";
	func_8784(var_723_int, "d4q04");
	var_726_bool = var_723_int == (int)0;
	if(var_726_bool != 0) {
		var_721_bool = 1;
		return 0;
	}
	var_721_bool = 0;
	return 0;
}


func_9046()
{
	SetVariable("d4q04", (int)1000);
	func_10089();
	return 0;
}


func_10076()
{
	var_83_object = Obj(); var_84_object = Obj();
	CreateDiaryEntry(var_84_object, (int)710, (int)2, (int)536316);
	var_88_bool = 0; var_89_object = Obj(); var_90_int = 0;
	var_84_object = var_89_object;
	func_10232(var_88_bool, var_89_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9055()
{
	SetVariable("d4ViktorVisit", (int)1);
	return 0;
}


func_9568(var_731_bool)
{
	var_733_int = 0; var_734_string = "";
	func_8784(var_733_int, "d4q04");
	var_736_bool = var_733_int == (int)1;
	if(var_736_bool != 0) {
		var_731_bool = 1;
		return 0;
	}
	var_731_bool = 0;
	return 0;
}


func_8548()
{
	var_317_bool = 0; var_318_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_320_bool = 0;
	func_8923(var_320_bool);
	if(var_320_bool != 0) {
	} else {
		HasAnimationTrack(var_318_bool, "head");
		var_322_bool = var_318_bool;
		if(var_322_bool == 0) goto Label_8565;
		UnlookAsync("head");
	}
Label_8565:
	return 2;
	
}


func_9061()
{
	SetVariable("d11ViktorVisit", (int)1);
	return 0;
}


func_358(var_0_object, var_1_object, var_2_object, var_3_string, var_904_object, var_905_object)
{
	var_0_object = var_905_object;
	var_1_object = var_904_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_911_bool = 0; var_912_object = Obj();
		var_912_object = var_1_object;
		func_9795(var_912_object);
		if(var_911_bool != 0) {
			var_917_object = Obj(); var_918_object = Obj();
			var_917_object = var_1_object;
			var_918_object = var_0_object;
			func_9400();
			var_921_string = "";
			func_441(var_905_object, "Surprise");
			@@@var_0_object:SetMessage((int)512036);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540874, (int)42939, (int)42937);
			@@@var_0_object:AddReply((int)540878, (int)42939, (int)42941);
		} else {
				var_944_string = "";
				func_441(var_905_object, "Neutral");
				@@@var_0_object:SetMessage((int)513016);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)513017, (int)-1, (int)14223);
				goto Label_411;
		}
	}
Label_411:
	var_936_bool = 0;
	func_8923(var_936_bool);
	if(var_936_bool != 0) {

	Label_415:
		lshWaitForAnimEnd();
		var_937_string = var_3_string;
		if(var_937_string != 0) {
		} else {
			var_938_string = "";
			var_938_string = var_2_object;
			func_8704(var_938_string);
			goto Label_415;
	}
		PlayAnimation("all", "idle");

	Label_430:
		WaitForAnimEnd();
		var_941_string = var_3_string;
		if(var_941_string != 0) {
			goto Label_440;
		}
		PlayAnimation("all", "idle");
		goto Label_430;

	}
	goto Label_440;
	
Label_440:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x16a";


func_10089()
{
	var_124_object = Obj(); var_125_object = Obj();
	CreateDiaryEntry(var_125_object, (int)712, (int)2, (int)536318);
	var_129_bool = 0; var_130_object = Obj(); var_131_int = 0;
	var_125_object = var_130_object;
	func_10232(var_129_bool, var_130_object, (int)710);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9067(var_166_object)
{
	Trace("money25000 is given");
	var_169_object = Obj(); var_170_int = 0;
	var_166_object = var_169_object;
	func_8812(var_169_object, (int)25000);
	return 0;
}


func_9580(var_737_bool, var_738_object)
{
	var_739_bool = 0; var_740_object = Obj(); var_741_string = "";
	var_738_object = var_740_object;
	func_8831(var_739_bool, var_740_object, "hunter_mark");
	if(var_739_bool != 0) {
		var_737_bool = 1;
		return 0;
	}
	var_737_bool = 0;
	return 0;
}


func_9077()
{
	SetVariable("d9ViktorVisit", (int)1);
	return 0;
}


func_8566(var_167_bool, var_168_object)
{
	var_172_int = 0; var_173_int = 0; var_174_int = 0; var_175_int = 0;
	GetVariable("voice_common", var_174_int);
	var_177_int = var_174_int;
	if(var_177_int != 0) {
		var_178_bool = 0; var_179_object = Obj();
		var_168_object = var_179_object;
		func_8624(var_178_bool, var_179_object);
		var_208_bool = var_178_bool == 0; //@nz
		if(var_208_bool != 0) {
			var_209_bool = 0; var_210_object = Obj();
			var_168_object = var_210_object;
			func_8661(var_209_bool, var_210_object);
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
		func_8661(var_254_bool, var_255_object);
		var_256_bool = var_254_bool == 0; //@nz
		if(var_256_bool != 0) {
			var_257_bool = 0; var_258_object = Obj();
			var_168_object = var_258_object;
			func_8624(var_257_bool, var_258_object);
			var_259_bool = var_257_bool == 0; //@nz
			if(var_259_bool != 0) {
				var_167_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_8622;
	
Label_8622:
	var_167_bool = 1;
	return 4;
	
}


func_9591(var_528_bool)
{
	var_530_int = 0; var_531_string = "";
	func_8784(var_530_int, "ood2Viktor2");
	var_533_bool = var_530_int == (int)0;
	if(var_533_bool != 0) {
		var_528_bool = 1;
		return 0;
	}
	var_528_bool = 0;
	return 0;
}


func_10102()
{
	var_106_object = Obj(); var_107_object = Obj();
	CreateDiaryEntry(var_107_object, (int)711, (int)2, (int)536317);
	var_111_bool = 0; var_112_object = Obj(); var_113_int = 0;
	var_107_object = var_112_object;
	func_10232(var_111_bool, var_112_object, (int)710);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9083()
{
	SetVariable("ood2Viktor2", (int)1);
	return 0;
}


func_9089()
{
	SetVariable("ood2Viktor1", (int)1);
	return 0;
}


func_9603(var_507_bool)
{
	var_509_int = 0; var_510_string = "";
	func_8784(var_509_int, "ood2Viktor1");
	var_512_bool = var_509_int == (int)0;
	if(var_512_bool != 0) {
		var_507_bool = 1;
		return 0;
	}
	var_507_bool = 0;
	return 0;
}


func_10115()
{
	var_105_object = Obj(); var_106_object = Obj();
	CreateDiaryEntry(var_106_object, (int)154, (int)2, (int)515365);
	var_110_bool = 0; var_111_object = Obj(); var_112_int = 0;
	var_106_object = var_111_object;
	func_10232(var_110_bool, var_111_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9095()
{
	SetVariable("KnowRavell", (int)1);
	return 0;
}


func_9101(var_106_object)
{
	Trace("money 5000 is given");
	var_109_object = Obj(); var_110_int = 0;
	var_106_object = var_109_object;
	func_8812(var_109_object, (int)5000);
	return 0;
}


func_9615(var_215_bool)
{
	var_217_int = 0; var_218_string = "";
	func_8784(var_217_int, "KnowRavell");
	var_220_bool = var_217_int == (int)1;
	if(var_220_bool != 0) {
		var_215_bool = 1;
		return 0;
	}
	var_215_bool = 0;
	return 0;
}


func_10128()
{
	var_128_object = Obj(); var_129_object = Obj();
	CreateDiaryEntry(var_129_object, (int)155, (int)2, (int)515366);
	var_133_bool = 0; var_134_object = Obj(); var_135_int = 0;
	var_129_object = var_134_object;
	func_10232(var_133_bool, var_134_object, (int)154);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9111()
{
	SetVariable("d4q04", (int)1);
	func_10076();
	func_10102();
	return 0;
}


func_9627(var_519_bool)
{
	var_521_int = 0; var_522_string = "";
	func_8784(var_521_int, "d2q03");
	var_524_bool = var_521_int == (int)1;
	if(var_524_bool != 0) {
		var_519_bool = 1;
		return 0;
	}
	var_519_bool = 0;
	return 0;
}


func_10141()
{
	var_109_object = Obj(); var_110_object = Obj();
	CreateDiaryEntry(var_110_object, (int)111, (int)1, (int)513734);
	var_114_bool = 0; var_115_object = Obj(); var_116_int = 0;
	var_110_object = var_115_object;
	func_10232(var_114_bool, var_115_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9123()
{
	SetVariable("KnowViktor", (int)1);
	return 0;
}


func_9639(var_513_bool)
{
	var_515_int = 0; var_516_string = "";
	func_8784(var_515_int, "d2q03MariaGotoViktor");
	var_518_bool = var_515_int == (int)1;
	if(var_518_bool != 0) {
		var_513_bool = 1;
		return 0;
	}
	var_513_bool = 0;
	return 0;
}


func_9129()
{
	var_87_object = Obj(); var_88_object = Obj();
	func_10260(Obj());
	var_89_object = var_88_object;
	var_100_float = 0;
	func_8895(var_100_float);
	@@var_88_object:AddMark("d3q02ViktorGotoMladVlad", "pt_map_mladvlad", (int)0, (int)511380, var_100_float);
	func_10063();
	return 2;
}
EMIT "Stack[-1] = 0";


func_10154()
{
	var_140_object = Obj(); var_141_object = Obj();
	CreateDiaryEntry(var_141_object, (int)113, (int)1, (int)513736);
	var_145_bool = 0; var_146_object = Obj(); var_147_int = 0;
	var_141_object = var_146_object;
	func_10232(var_145_bool, var_146_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5545(var_0_object, var_1100_int, var_1101_object)
{
	var_1103_object = Obj(); var_1104_bool = 0; var_1105_int = 0; var_1106_bool = 0; var_1107_object = Obj(); var_1108_bool = 0; var_1109_int = 0; var_1110_bool = 0;
	var_0_object = var_1101_object;
	var_1111_bool = 0; var_1112_object = Obj(); var_1113_float = 0;
	var_1101_object = var_1112_object;
	func_8479(var_1111_bool, var_1112_object, (float)70.0);
	var_1114_bool = var_1111_bool == 0; //@nz
	if(var_1114_bool != 0) {
		var_1100_int = -2;
		return 8;
	}
	CreateDialog(var_1107_object);
	var_1115_int = 0;
	func_8917(var_1115_int);
	@@var_1107_object:SetNPCName(var_1115_int);
	var_1116_int = 0;
	func_8915(var_1116_int);
	@@var_1107_object:SetNPCDescription(var_1116_int);
	var_1117_string = "";
	func_8919(var_1117_string);
	@@var_1107_object:SetPhoto(var_1117_string);
	var_1118_string = "";
	func_8921(var_1118_string);
	@@var_1107_object:SetPhoto2(var_1118_string);
	var_1119_int = 0;
	func_10310(var_1119_int);
	@@var_1107_object:SetPlayerName(var_1119_int);
	IsOverrideActive(var_1108_bool);
	var_1120_bool = var_1108_bool;
	if(var_1120_bool != 0) {
		var_1100_int = -2;
		return 8;
	}
	DoDialog(var_1107_object);
	var_1121_bool = 0; var_1122_object = Obj();
	func_8757(Obj());
	var_1123_object = var_1122_object;
	func_8566(var_1121_bool, var_1122_object);
	var_1124_object = Obj(); var_1125_object = Obj();
	var_1101_object = var_1124_object;
	var_1107_object = var_1125_object;
	TaskCall(20);
	func_5626(var_1126_object, var_1127_object, var_1128_string, var_1129_bool, var_1124_object, var_1125_object);
	TaskReturn();
	@@var_1107_object:IsDialogEnd(var_1110_bool);
	
Label_5608:
	var_1198_bool = var_1110_bool == 0; //@nz
	if(var_1198_bool != 0) {
		sync();
		@@var_1107_object:IsDialogEnd(var_1110_bool);
		goto Label_5608;
	}
	var_1101_object = Obj();
	func_8548();
	StopDialog(var_1107_object);
	@@var_1107_object:GetReturnValue((int)-1);
	var_1109_int = var_1100_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_8624(var_178_bool, var_179_object)
{
	var_180_string = ""; var_181_int = 0; var_182_bool = 0; var_183_int = 0; var_184_string = ""; var_185_string = ""; var_186_int = 0; var_187_bool = 0; var_188_int = 0; var_189_string = "";
	var_185_string = "c";
	var_186_int = 0;
	
Label_8627:
	if((int)1 != 0) {
		var_192_int = var_186_int + (int)1;
		var_193_int = var_185_string + var_192_int;
		@@var_179_object:HasProperty(var_193_int, var_187_bool);
		var_194_bool = var_187_bool == 0; //@nz
		if(var_194_bool != 0) {
		} else {
			var_186_int = var_186_int + (int)1;
			goto Label_8627;
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
	func_8735(var_201_bool, var_202_string);
	var_201_bool = var_178_bool;
	return 10;
	
}


func_9651(var_418_bool)
{
	var_420_int = 0; var_421_string = "";
	func_8784(var_420_int, "d1q01");
	var_423_bool = var_420_int == (int)1;
	if(var_423_bool != 0) {
		var_418_bool = 1;
		return 0;
	}
	var_418_bool = 0;
	return 0;
}


func_3507(var_0_object, var_651_int, var_652_object)
{
	var_654_object = Obj(); var_655_bool = 0; var_656_int = 0; var_657_bool = 0; var_658_object = Obj(); var_659_bool = 0; var_660_int = 0; var_661_bool = 0;
	var_0_object = var_652_object;
	var_662_bool = 0; var_663_object = Obj(); var_664_float = 0;
	var_652_object = var_663_object;
	func_8479(var_662_bool, var_663_object, (float)70.0);
	var_665_bool = var_662_bool == 0; //@nz
	if(var_665_bool != 0) {
		var_651_int = -2;
		return 8;
	}
	CreateDialog(var_658_object);
	var_666_int = 0;
	func_8917(var_666_int);
	@@var_658_object:SetNPCName(var_666_int);
	var_667_int = 0;
	func_8915(var_667_int);
	@@var_658_object:SetNPCDescription(var_667_int);
	var_668_string = "";
	func_8919(var_668_string);
	@@var_658_object:SetPhoto(var_668_string);
	var_669_string = "";
	func_8921(var_669_string);
	@@var_658_object:SetPhoto2(var_669_string);
	var_670_int = 0;
	func_10310(var_670_int);
	@@var_658_object:SetPlayerName(var_670_int);
	IsOverrideActive(var_659_bool);
	var_671_bool = var_659_bool;
	if(var_671_bool != 0) {
		var_651_int = -2;
		return 8;
	}
	DoDialog(var_658_object);
	var_672_bool = 0; var_673_object = Obj();
	func_8757(Obj());
	var_674_object = var_673_object;
	func_8566(var_672_bool, var_673_object);
	var_675_object = Obj(); var_676_object = Obj();
	var_652_object = var_675_object;
	var_658_object = var_676_object;
	TaskCall(12);
	func_3588(var_677_object, var_678_object, var_679_string, var_680_bool, var_675_object, var_676_object);
	TaskReturn();
	@@var_658_object:IsDialogEnd(var_661_bool);
	
Label_3570:
	var_752_bool = var_661_bool == 0; //@nz
	if(var_752_bool != 0) {
		sync();
		@@var_658_object:IsDialogEnd(var_661_bool);
		goto Label_3570;
	}
	var_652_object = Obj();
	func_8548();
	StopDialog(var_658_object);
	@@var_658_object:GetReturnValue((int)-1);
	var_660_int = var_651_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_10167()
{
	var_132_object = Obj(); var_133_object = Obj();
	CreateDiaryEntry(var_133_object, (int)112, (int)1, (int)513735);
	var_137_bool = 0; var_138_object = Obj(); var_139_int = 0;
	var_133_object = var_138_object;
	func_10232(var_137_bool, var_138_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4024(var_0_object, var_756_int, var_757_object)
{
	var_759_object = Obj(); var_760_bool = 0; var_761_int = 0; var_762_bool = 0; var_763_object = Obj(); var_764_bool = 0; var_765_int = 0; var_766_bool = 0;
	var_0_object = var_757_object;
	var_767_bool = 0; var_768_object = Obj(); var_769_float = 0;
	var_757_object = var_768_object;
	func_8479(var_767_bool, var_768_object, (float)70.0);
	var_770_bool = var_767_bool == 0; //@nz
	if(var_770_bool != 0) {
		var_756_int = -2;
		return 8;
	}
	CreateDialog(var_763_object);
	var_771_int = 0;
	func_8917(var_771_int);
	@@var_763_object:SetNPCName(var_771_int);
	var_772_int = 0;
	func_8915(var_772_int);
	@@var_763_object:SetNPCDescription(var_772_int);
	var_773_string = "";
	func_8919(var_773_string);
	@@var_763_object:SetPhoto(var_773_string);
	var_774_string = "";
	func_8921(var_774_string);
	@@var_763_object:SetPhoto2(var_774_string);
	var_775_int = 0;
	func_10310(var_775_int);
	@@var_763_object:SetPlayerName(var_775_int);
	IsOverrideActive(var_764_bool);
	var_776_bool = var_764_bool;
	if(var_776_bool != 0) {
		var_756_int = -2;
		return 8;
	}
	DoDialog(var_763_object);
	var_777_bool = 0; var_778_object = Obj();
	func_8757(Obj());
	var_779_object = var_778_object;
	func_8566(var_777_bool, var_778_object);
	var_780_object = Obj(); var_781_object = Obj();
	var_757_object = var_780_object;
	var_763_object = var_781_object;
	TaskCall(14);
	func_4105(var_782_object, var_783_object, var_784_string, var_785_bool, var_780_object, var_781_object);
	TaskReturn();
	@@var_763_object:IsDialogEnd(var_766_bool);
	
Label_4087:
	var_876_bool = var_766_bool == 0; //@nz
	if(var_876_bool != 0) {
		sync();
		@@var_763_object:IsDialogEnd(var_766_bool);
		goto Label_4087;
	}
	var_757_object = Obj();
	func_8548();
	StopDialog(var_763_object);
	@@var_763_object:GetReturnValue((int)-1);
	var_765_int = var_756_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_441(var_2_object, var_921_string)
{
	var_922_bool = 0;
	func_8923(var_922_bool);
	var_923_bool = var_922_bool == 0; //@nz
	if(var_923_bool != 0) {
		return 0;
	}
	var_924_bool = var_921_string == var_2_object;
	if(var_924_bool != 0) {
		return 0;
	}
	var_925_string = ""; var_926_bool = 0;
	var_921_string = var_925_string;
	var_928_bool = var_921_string == "";
	if(var_928_bool != 0) {
		var_926_bool = 0;
	} else {
		var_926_bool = 1;
	}
	func_8720(var_925_string, var_926_bool);
	var_2_object = var_921_string;
	return 0;
	
}


func_8120(var_0_object, var_1441_int, var_1442_object)
{
	var_1444_object = Obj(); var_1445_bool = 0; var_1446_int = 0; var_1447_bool = 0; var_1448_object = Obj(); var_1449_bool = 0; var_1450_int = 0; var_1451_bool = 0;
	var_0_object = var_1442_object;
	var_1452_bool = 0; var_1453_object = Obj(); var_1454_float = 0;
	var_1442_object = var_1453_object;
	func_8479(var_1452_bool, var_1453_object, (float)70.0);
	var_1455_bool = var_1452_bool == 0; //@nz
	if(var_1455_bool != 0) {
		var_1441_int = -2;
		return 8;
	}
	CreateDialog(var_1448_object);
	var_1456_int = 0;
	func_8917(var_1456_int);
	@@var_1448_object:SetNPCName(var_1456_int);
	var_1457_int = 0;
	func_8915(var_1457_int);
	@@var_1448_object:SetNPCDescription(var_1457_int);
	var_1458_string = "";
	func_8919(var_1458_string);
	@@var_1448_object:SetPhoto(var_1458_string);
	var_1459_string = "";
	func_8921(var_1459_string);
	@@var_1448_object:SetPhoto2(var_1459_string);
	var_1460_int = 0;
	func_10310(var_1460_int);
	@@var_1448_object:SetPlayerName(var_1460_int);
	IsOverrideActive(var_1449_bool);
	var_1461_bool = var_1449_bool;
	if(var_1461_bool != 0) {
		var_1441_int = -2;
		return 8;
	}
	DoDialog(var_1448_object);
	var_1462_bool = 0; var_1463_object = Obj();
	func_8757(Obj());
	var_1464_object = var_1463_object;
	func_8566(var_1462_bool, var_1463_object);
	var_1465_object = Obj(); var_1466_object = Obj();
	var_1442_object = var_1465_object;
	var_1448_object = var_1466_object;
	TaskCall(28);
	func_8201(var_1467_object, var_1468_object, var_1469_string, var_1470_bool, var_1465_object, var_1466_object);
	TaskReturn();
	@@var_1448_object:IsDialogEnd(var_1451_bool);
	
Label_8183:
	var_1495_bool = var_1451_bool == 0; //@nz
	if(var_1495_bool != 0) {
		sync();
		@@var_1448_object:IsDialogEnd(var_1451_bool);
		goto Label_8183;
	}
	var_1442_object = Obj();
	func_8548();
	StopDialog(var_1448_object);
	@@var_1448_object:GetReturnValue((int)-1);
	var_1450_int = var_1441_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_9148()
{
	SetVariable("ood3Viktor1", (int)1);
	return 0;
}


func_9663(var_596_bool)
{
	var_598_int = 0; var_599_string = "";
	func_8784(var_598_int, "d3q02");
	var_601_bool = var_598_int == (int)1;
	if(var_601_bool != 0) {
		var_596_bool = 1;
		return 0;
	}
	var_596_bool = 0;
	return 0;
}


func_9154(var_127_object)
{
	var_128_object = Obj(); var_129_string = ""; var_130_float = 0;
	func_10260(Obj());
	var_131_object = var_128_object;
	func_10277(var_128_object, "pt_map_mladvlad", (float)2);
	var_151_object = Obj();
	func_10260(var_151_object);
	@@var_127_object:ShowMap(var_151_object);
	return 0;
}


func_10180()
{
	var_83_object = Obj(); var_84_object = Obj();
	CreateDiaryEntry(var_84_object, (int)644, (int)2, (int)533278);
	var_88_bool = 0; var_89_object = Obj(); var_90_int = 0;
	var_84_object = var_89_object;
	func_10232(var_88_bool, var_89_object, (int)641);
	return 2;
}
EMIT "Stack[-1] = 0";


func_970(var_2_object, var_368_string)
{
	var_369_bool = 0;
	func_8923(var_369_bool);
	var_370_bool = var_369_bool == 0; //@nz
	if(var_370_bool != 0) {
		return 0;
	}
	var_371_bool = var_368_string == var_2_object;
	if(var_371_bool != 0) {
		return 0;
	}
	var_372_string = ""; var_373_bool = 0;
	var_368_string = var_372_string;
	var_375_bool = var_368_string == "";
	if(var_375_bool != 0) {
		var_373_bool = 0;
	} else {
		var_373_bool = 1;
	}
	func_8720(var_372_string, var_373_bool);
	var_2_object = var_368_string;
	return 0;
	
}


func_9675(var_602_bool)
{
	var_604_int = 0; var_605_string = "";
	func_8784(var_604_int, "ood3Viktor1");
	var_607_bool = var_604_int == (int)0;
	if(var_607_bool != 0) {
		var_602_bool = 1;
		return 0;
	}
	var_602_bool = 0;
	return 0;
}


func_6609(var_2_object, var_1314_string)
{
	var_1315_bool = 0;
	func_8923(var_1315_bool);
	var_1316_bool = var_1315_bool == 0; //@nz
	if(var_1316_bool != 0) {
		return 0;
	}
	var_1317_bool = var_1314_string == var_2_object;
	if(var_1317_bool != 0) {
		return 0;
	}
	var_1318_string = ""; var_1319_bool = 0;
	var_1314_string = var_1318_string;
	var_1321_bool = var_1314_string == "";
	if(var_1321_bool != 0) {
		var_1319_bool = 0;
	} else {
		var_1319_bool = 1;
	}
	func_8720(var_1318_string, var_1319_bool);
	var_2_object = var_1314_string;
	return 0;
	
}


func_9170()
{
	var_174_object = Obj(); var_175_object = Obj();
	SetVariable("d3q02", (int)3);
	func_10260(Obj());
	var_178_object = var_175_object;
	var_183_float = 0;
	func_8895(var_183_float);
	@@var_175_object:AddMark("d3q02ViktorGotoHan", "pt_map_han", (int)0, (int)511385, var_183_float);
	func_10050();
	return 2;
}
EMIT "Stack[-1] = 0";


func_10193()
{
	var_83_object = Obj(); var_84_object = Obj();
	CreateDiaryEntry(var_84_object, (int)182, (int)1, (int)515445);
	var_88_bool = 0; var_89_object = Obj(); var_90_int = 0;
	var_84_object = var_89_object;
	func_10232(var_88_bool, var_89_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_8661(var_209_bool, var_210_object)
{
	var_211_string = ""; var_212_int = 0; var_213_bool = 0; var_214_int = 0; var_215_string = ""; var_216_string = ""; var_217_int = 0; var_218_bool = 0; var_219_int = 0; var_220_string = "";
	var_222_int = 0;
	func_8900(var_222_int);
	var_228_int = "d" + var_222_int;
	var_216_string = var_228_int + "m";
	var_217_int = 0;
	
Label_8670:
	if((int)1 != 0) {
		var_232_int = var_217_int + (int)1;
		var_233_int = var_216_string + var_232_int;
		@@var_210_object:HasProperty(var_233_int, var_218_bool);
		var_234_bool = var_218_bool == 0; //@nz
		if(var_234_bool != 0) {
		} else {
			var_217_int = var_217_int + (int)1;
			goto Label_8670;
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
	func_8735(var_241_bool, var_242_string);
	var_241_bool = var_209_bool;
	return 10;
	
}


func_9687(var_618_bool)
{
	var_620_int = 0; var_621_string = "";
	func_8784(var_620_int, "d3q02");
	var_623_bool = var_620_int == (int)2;
	if(var_623_bool != 0) {
		var_618_bool = 1;
		return 0;
	}
	var_618_bool = 0;
	return 0;
}


func_10206()
{
	var_106_object = Obj(); var_107_object = Obj();
	CreateDiaryEntry(var_107_object, (int)183, (int)1, (int)515446);
	var_111_bool = 0; var_112_object = Obj(); var_113_int = 0;
	var_107_object = var_112_object;
	func_10232(var_111_bool, var_112_object, (int)182);
	return 2;
}
EMIT "Stack[-1] = 0";


func_9699(var_612_bool)
{
	var_614_int = 0; var_615_string = "";
	func_8784(var_614_int, "ood3Viktor2");
	var_617_bool = var_614_int == (int)0;
	if(var_617_bool != 0) {
		var_612_bool = 1;
		return 0;
	}
	var_612_bool = 0;
	return 0;
}


func_9193()
{
	SetVariable("ood3Viktor2", (int)1);
	return 0;
}


func_10219(var_97_object)
{
	var_98_object = Obj(); var_99_object = Obj();
	GetDiaryRoot(var_99_object);
	var_100_bool = var_99_object == 0; //@nz
	if(var_100_bool != 0) {
		Trace("Can't retrieve diary root");
		var_97_object = 0;
		return 2;
	}
	var_99_object = var_97_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_9199()
{
	var_97_object = Obj(); var_98_object = Obj();
	SetVariable("d1q01", (int)2);
	func_10260(Obj());
	var_101_object = var_98_object;
	var_112_float = 0;
	func_8895(var_112_float);
	@@var_98_object:AddMark("d1q01ViktorGotoIsidor", "pt_map_burah_father", (int)1, (int)508637, var_112_float);
	func_10024();
	var_138_bool = 0; var_139_string = ""; var_140_string = "";
	func_8883(var_138_bool, "quest_d1_01", "place_patrol");
	return 2;
}
EMIT "Stack[-1] = 0";


func_9711(var_825_bool)
{
	var_827_int = 0; var_828_string = "";
	func_8784(var_827_int, "d5q03");
	var_830_bool = var_827_int == (int)0;
	if(var_830_bool != 0) {
		var_825_bool = 1;
		return 0;
	}
	var_825_bool = 0;
	return 0;
}


func_2033(var_0_object, var_465_int, var_466_object)
{
	var_468_object = Obj(); var_469_bool = 0; var_470_int = 0; var_471_bool = 0; var_472_object = Obj(); var_473_bool = 0; var_474_int = 0; var_475_bool = 0;
	var_0_object = var_466_object;
	var_476_bool = 0; var_477_object = Obj(); var_478_float = 0;
	var_466_object = var_477_object;
	func_8479(var_476_bool, var_477_object, (float)70.0);
	var_479_bool = var_476_bool == 0; //@nz
	if(var_479_bool != 0) {
		var_465_int = -2;
		return 8;
	}
	CreateDialog(var_472_object);
	var_480_int = 0;
	func_8917(var_480_int);
	@@var_472_object:SetNPCName(var_480_int);
	var_481_int = 0;
	func_8915(var_481_int);
	@@var_472_object:SetNPCDescription(var_481_int);
	var_482_string = "";
	func_8919(var_482_string);
	@@var_472_object:SetPhoto(var_482_string);
	var_483_string = "";
	func_8921(var_483_string);
	@@var_472_object:SetPhoto2(var_483_string);
	var_484_int = 0;
	func_10310(var_484_int);
	@@var_472_object:SetPlayerName(var_484_int);
	IsOverrideActive(var_473_bool);
	var_485_bool = var_473_bool;
	if(var_485_bool != 0) {
		var_465_int = -2;
		return 8;
	}
	DoDialog(var_472_object);
	var_486_bool = 0; var_487_object = Obj();
	func_8757(Obj());
	var_488_object = var_487_object;
	func_8566(var_486_bool, var_487_object);
	var_489_object = Obj(); var_490_object = Obj();
	var_466_object = var_489_object;
	var_472_object = var_490_object;
	TaskCall(8);
	func_2114(var_491_object, var_492_object, var_493_string, var_494_bool, var_489_object, var_490_object);
	TaskReturn();
	@@var_472_object:IsDialogEnd(var_475_bool);
	
Label_2096:
	var_551_bool = var_475_bool == 0; //@nz
	if(var_551_bool != 0) {
		sync();
		@@var_472_object:IsDialogEnd(var_475_bool);
		goto Label_2096;
	}
	var_466_object = Obj();
	func_8548();
	StopDialog(var_472_object);
	@@var_472_object:GetReturnValue((int)-1);
	var_474_int = var_465_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_10232(var_88_bool, var_89_object, var_90_int)
{
	var_91_object = Obj(); var_92_object = Obj(); var_93_int = 0; var_94_object = Obj(); var_95_object = Obj(); var_96_int = 0;
	func_10219(Obj());
	var_97_object = var_94_object;
	@@var_94_object:Find(var_90_int, var_95_object);
	var_102_bool = var_95_object == 0; //@nz
	if(var_102_bool != 0) {
		var_104_int = "Can't find diary parent with id: " + var_90_int;
		Trace(var_104_int);
		var_88_bool = 0;
		return 6;
	}
	@@var_95_object:AddChild(var_89_object);
	SendWorldWndMessage((int)7);
	@@var_89_object:GetCategory(var_96_int);
	SetDiarySection(var_96_int);
	var_88_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_5626(var_0_object, var_1_object, var_2_object, var_3_string, var_1124_object, var_1125_object)
{
	var_0_object = var_1125_object;
	var_1_object = var_1124_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1131_bool = 0; var_1132_object = Obj();
		var_1132_object = var_1_object;
		func_9831(var_1132_object);
		if(var_1131_bool != 0) {
			var_1137_object = Obj(); var_1138_object = Obj();
			var_1137_object = var_1_object;
			var_1138_object = var_0_object;
			func_9353();
			var_1141_object = Obj(); var_1142_object = Obj();
			var_1141_object = var_1_object;
			var_1142_object = var_0_object;
			func_9077();
			var_1145_string = "";
			func_5743(var_1125_object, "Neutral");
			@@@var_0_object:SetMessage((int)513994);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538808, (int)40728, (int)40727);
			@@@var_0_object:AddReply((int)538813, (int)40730, (int)40732);
		} else {
				var_1168_string = "";
				func_5743(var_1125_object, "Neutral");
				@@@var_0_object:SetMessage((int)514011);
				@@@var_0_object:ClearReplies();
				var_1170_bool = 0; var_1171_object = Obj();
				var_1171_object = var_1_object;
				func_9939(var_1171_object);
				if(var_1170_bool != 0) {
					@@@var_0_object:AddReply((int)514012, (int)15248, (int)15247);
				}
				var_1179_bool = 0;
				var_1179_bool = 0;
				var_1180_bool = 0; var_1181_object = Obj();
				var_1181_object = var_1_object;
				func_9843(var_1181_object);
				if(var_1180_bool != 0) {
					var_1186_bool = 0; var_1187_object = Obj();
					var_1187_object = var_1_object;
					func_9855(var_1187_object);
					if(var_1186_bool != 0) {
						var_1179_bool = 1;
					}
				}
				if(var_1179_bool != 0) {
					@@@var_0_object:AddReply((int)514029, (int)15265, (int)15264);
				}
				@@@var_0_object:AddReply((int)514039, (int)-1, (int)15274);
				goto Label_5713;
		}
	}
Label_5713:
	var_1160_bool = 0;
	func_8923(var_1160_bool);
	if(var_1160_bool != 0) {

	Label_5717:
		lshWaitForAnimEnd();
		var_1161_string = var_3_string;
		if(var_1161_string != 0) {
		} else {
			var_1162_string = "";
			var_1162_string = var_2_object;
			func_8704(var_1162_string);
			goto Label_5717;
	}
		PlayAnimation("all", "idle");

	Label_5732:
		WaitForAnimEnd();
		var_1165_string = var_3_string;
		if(var_1165_string != 0) {
			goto Label_5742;
		}
		PlayAnimation("all", "idle");
		goto Label_5732;

	}
	goto Label_5742;
	
Label_5742:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x15fe";


func_9723(var_795_bool)
{
	var_797_int = 0; var_798_string = "";
	func_8784(var_797_int, "d5q03");
	var_800_bool = var_797_int == (int)1000;
	if(var_800_bool != 0) {
		var_795_bool = 1;
		return 0;
	}
	var_795_bool = 0;
	return 0;
}


func_5118(var_0_object, var_1017_int, var_1018_object)
{
	var_1020_object = Obj(); var_1021_bool = 0; var_1022_int = 0; var_1023_bool = 0; var_1024_object = Obj(); var_1025_bool = 0; var_1026_int = 0; var_1027_bool = 0;
	var_0_object = var_1018_object;
	var_1028_bool = 0; var_1029_object = Obj(); var_1030_float = 0;
	var_1018_object = var_1029_object;
	func_8479(var_1028_bool, var_1029_object, (float)70.0);
	var_1031_bool = var_1028_bool == 0; //@nz
	if(var_1031_bool != 0) {
		var_1017_int = -2;
		return 8;
	}
	CreateDialog(var_1024_object);
	var_1032_int = 0;
	func_8917(var_1032_int);
	@@var_1024_object:SetNPCName(var_1032_int);
	var_1033_int = 0;
	func_8915(var_1033_int);
	@@var_1024_object:SetNPCDescription(var_1033_int);
	var_1034_string = "";
	func_8919(var_1034_string);
	@@var_1024_object:SetPhoto(var_1034_string);
	var_1035_string = "";
	func_8921(var_1035_string);
	@@var_1024_object:SetPhoto2(var_1035_string);
	var_1036_int = 0;
	func_10310(var_1036_int);
	@@var_1024_object:SetPlayerName(var_1036_int);
	IsOverrideActive(var_1025_bool);
	var_1037_bool = var_1025_bool;
	if(var_1037_bool != 0) {
		var_1017_int = -2;
		return 8;
	}
	DoDialog(var_1024_object);
	var_1038_bool = 0; var_1039_object = Obj();
	func_8757(Obj());
	var_1040_object = var_1039_object;
	func_8566(var_1038_bool, var_1039_object);
	var_1041_object = Obj(); var_1042_object = Obj();
	var_1018_object = var_1041_object;
	var_1024_object = var_1042_object;
	TaskCall(18);
	func_5199(var_1043_object, var_1044_object, var_1045_string, var_1046_bool, var_1041_object, var_1042_object);
	TaskReturn();
	@@var_1024_object:IsDialogEnd(var_1027_bool);
	
Label_5181:
	var_1096_bool = var_1027_bool == 0; //@nz
	if(var_1096_bool != 0) {
		sync();
		@@var_1024_object:IsDialogEnd(var_1027_bool);
		goto Label_5181;
	}
	var_1018_object = Obj();
	func_8548();
	StopDialog(var_1024_object);
	@@var_1024_object:GetReturnValue((int)-1);
	var_1026_int = var_1017_int;
	return 8;
}
EMIT "Stack[-4] = 0";


