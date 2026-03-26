// @IMPORTS: Hold/0,StopGroup0/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,GetInvItemProperty/3,CreateInvItem/1,GetGameTime/1,lshWaitForAnimEnd/1,TriggerWorld/2,SetVariable/2
// @STRINGS: W:Neutral|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:No|W:ui/NPC_Burah.png|W:playsound|W:giveitem|W:d9TalkToPolkovodec|W:ood9Block1|W:Rifle is given|W:Rifle|W:durability|A:SetProperty|W:ood11Block1|W:ood11Block2|W:ood11Block3|W:rifle ammo10 is given|W:rifle_ammo|W:ood9Block2|W:d9q01|W:d11q02|W:d11q01|W:player
// @GLOBALS: 0:object:
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
// @EVENT_11: op=0xe1 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x421 vars=int,int
// @PE: 0x23,0x29,0x70,0xd1,0xe1,0x3a3,0x411,0x421,0x638,0x687,0x69c,0x6a2,0x6a8,0x6c3,0x6c9,0x6cf,0x6d5,0x6e0,0x6e6,0x6f0,0x6fc,0x708,0x714,0x720,0x72c,0x738,0x744,0x750,0x75c,0x771

task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool)
{
	StopGroup0();
	return 0;
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool)
{
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool)
{
	var_11_object = Obj();
	var_10_bool = var_11_object;
	func_1905(var_11_object);
	return 0;
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool)
{
	var_11_bool = 0; var_12_object = Obj();
	var_10_bool = var_12_object;
	func_1519(var_11_bool, var_12_object);
	WaitForAnimEnd();
	return 0;
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool)
{
	if((int)1 != 0) {
		func_1614();
		var_15_bool = var_11_bool == (int)15137;
		if(var_15_bool != 0) {
			var_16_object = Obj(); var_17_object = Obj();
			var_16_object = var_1_object;
			var_17_object = var_0_object;
			func_1704();
		}
		var_21_bool = var_11_bool == (int)15149;
		if(var_21_bool != 0) {
			var_22_object = Obj(); var_23_object = Obj();
			var_22_object = var_1_object;
			var_23_object = var_0_object;
			func_1710(var_23_object);
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_1692();
			var_45_object = Obj(); var_46_object = Obj();
			var_45_object = var_1_object;
			var_46_object = var_0_object;
			func_1749(var_46_object);
		}
		var_57_bool = var_11_bool == (int)15150;
		if(var_57_bool != 0) {
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_object;
			func_1710(var_59_object);
			var_60_object = Obj(); var_61_object = Obj();
			var_60_object = var_1_object;
			var_61_object = var_0_object;
			func_1692();
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_1749(var_63_object);
		}
		var_65_bool = var_11_bool == (int)15155;
		if(var_65_bool != 0) {
			var_66_object = Obj(); var_67_object = Obj();
			var_66_object = var_1_object;
			var_67_object = var_0_object;
			func_1760();
		}
		var_71_bool = var_10_string == (int)15109;
		if(var_71_bool != 0) {
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_1698();
			var_76_string = "";
			func_209(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13882);
			@@@var_0_object:ClearReplies();
			var_92_bool = 0; var_93_object = Obj();
			var_93_object = var_1_object;
			func_1766(var_92_bool, var_93_object);
			if(var_92_bool != 0) {
				@@@var_0_object:AddReply((int)13883, (int)15111, (int)15110);
			}
			var_99_bool = 0;
			var_99_bool = 0;
			var_100_bool = 0; var_101_object = Obj();
			var_101_object = var_1_object;
			func_1776(var_101_object);
			if(var_100_bool != 0) {
				var_108_bool = 0; var_109_object = Obj();
				var_109_object = var_1_object;
				func_1788(var_109_object);
				if(var_108_bool != 0) {
					var_99_bool = 1;
				}
			}
			if(var_99_bool != 0) {
				@@@var_0_object:AddReply((int)13906, (int)15138, (int)15137);
			}
			var_117_bool = 0; var_118_object = Obj();
			var_118_object = var_1_object;
			func_1872(var_118_object);
			if(var_117_bool != 0) {
				@@@var_0_object:AddReply((int)13924, (int)15156, (int)15155);
			}
			@@@var_0_object:AddReply((int)13947, (int)-1, (int)15182);
			return 0;
		}
		var_130_bool = var_10_string == (int)15156;
		if(var_130_bool != 0) {
			var_131_string = "";
			func_209(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13925);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13926, (int)15158, (int)15157);
			@@@var_0_object:AddReply((int)13946, (int)15158, (int)15180);
			return 0;
		}
		var_140_bool = var_10_string == (int)15158;
		if(var_140_bool != 0) {
			var_141_string = "";
			func_209(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13927);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13928, (int)15160, (int)15159);
			@@@var_0_object:AddReply((int)13945, (int)15160, (int)15178);
			return 0;
		}
		var_150_bool = var_10_string == (int)15160;
		if(var_150_bool != 0) {
			var_151_string = "";
			func_209(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13929);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13930, (int)15162, (int)15161);
			@@@var_0_object:AddReply((int)13944, (int)15162, (int)15176);
			return 0;
		}
		var_160_bool = var_10_string == (int)15162;
		if(var_160_bool != 0) {
			var_161_string = "";
			func_209(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13931);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13932, (int)15164, (int)15163);
			@@@var_0_object:AddReply((int)13941, (int)15173, (int)15172);
			return 0;
		}
		var_170_bool = var_10_string == (int)15173;
		if(var_170_bool != 0) {
			var_171_string = "";
			func_209(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13942);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13943, (int)15166, (int)15174);
			return 0;
		}
		var_177_bool = var_10_string == (int)15164;
		if(var_177_bool != 0) {
			var_178_string = "";
			func_209(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13933);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13934, (int)15166, (int)15165);
			return 0;
		}
		var_184_bool = var_10_string == (int)15166;
		if(var_184_bool != 0) {
			var_185_string = "";
			func_209(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13935);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13936, (int)15168, (int)15167);
			return 0;
		}
		var_191_bool = var_10_string == (int)15168;
		if(var_191_bool != 0) {
			var_192_string = "";
			func_209(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13937);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13938, (int)15170, (int)15169);
			return 0;
		}
		var_198_bool = var_10_string == (int)15170;
		if(var_198_bool != 0) {
			var_199_string = "";
			func_209(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13939);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13940, (int)-1, (int)15171);
			return 0;
		}
		var_205_bool = var_10_string == (int)15138;
		if(var_205_bool != 0) {
			var_206_string = "";
			func_209(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13907);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13908, (int)15140, (int)15139);
			return 0;
		}
		var_212_bool = var_10_string == (int)15140;
		if(var_212_bool != 0) {
			var_213_string = "";
			func_209(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13909);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13910, (int)15142, (int)15141);
			return 0;
		}
		var_219_bool = var_10_string == (int)15142;
		if(var_219_bool != 0) {
			var_220_string = "";
			func_209(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13911);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13912, (int)15144, (int)15143);
			@@@var_0_object:AddReply((int)13920, (int)15152, (int)15151);
			return 0;
		}
		var_229_bool = var_10_string == (int)15152;
		if(var_229_bool != 0) {
			var_230_string = "";
			func_209(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13921);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13922, (int)15154, (int)15153);
			return 0;
		}
		var_236_bool = var_10_string == (int)15154;
		if(var_236_bool != 0) {
			var_237_string = "";
			func_209(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13923);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14067, (int)-1, (int)15304);
			return 0;
		}
		var_243_bool = var_10_string == (int)15144;
		if(var_243_bool != 0) {
			var_244_string = "";
			func_209(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13913);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13914, (int)15146, (int)15145);
			@@@var_0_object:AddReply((int)13919, (int)-1, (int)15150);
			return 0;
		}
		var_253_bool = var_10_string == (int)15146;
		if(var_253_bool != 0) {
			var_254_string = "";
			func_209(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13915);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13916, (int)15148, (int)15147);
			return 0;
		}
		var_260_bool = var_10_string == (int)15148;
		if(var_260_bool != 0) {
			var_261_string = "";
			func_209(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13917);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13918, (int)-1, (int)15149);
			return 0;
		}
		var_267_bool = var_10_string == (int)15111;
		if(var_267_bool != 0) {
			var_268_string = "";
			func_209(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13884);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13885, (int)15113, (int)15112);
			@@@var_0_object:AddReply((int)13905, (int)15113, (int)15135);
			return 0;
		}
		var_277_bool = var_10_string == (int)15113;
		if(var_277_bool != 0) {
			var_278_string = "";
			func_209(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13886);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13887, (int)15115, (int)15114);
			@@@var_0_object:AddReply((int)13899, (int)15128, (int)15127);
			return 0;
		}
		var_287_bool = var_10_string == (int)15128;
		if(var_287_bool != 0) {
			var_288_string = "";
			func_209(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13900);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13901, (int)15130, (int)15129);
			@@@var_0_object:AddReply((int)13904, (int)15115, (int)15133);
			return 0;
		}
		var_297_bool = var_10_string == (int)15130;
		if(var_297_bool != 0) {
			var_298_string = "";
			func_209(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13902);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13903, (int)15121, (int)15131);
			return 0;
		}
		var_304_bool = var_10_string == (int)15115;
		if(var_304_bool != 0) {
			var_305_string = "";
			func_209(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13888);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13889, (int)15117, (int)15116);
			@@@var_0_object:AddReply((int)13898, (int)15117, (int)15125);
			return 0;
		}
		var_314_bool = var_10_string == (int)15117;
		if(var_314_bool != 0) {
			var_315_string = "";
			func_209(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13890);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13891, (int)15119, (int)15118);
			@@@var_0_object:AddReply((int)13897, (int)-1, (int)15124);
			return 0;
		}
		var_324_bool = var_10_string == (int)15119;
		if(var_324_bool != 0) {
			var_325_string = "";
			func_209(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13892);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13893, (int)15121, (int)15120);
			return 0;
		}
		var_331_bool = var_10_string == (int)15121;
		if(var_331_bool != 0) {
			var_332_string = "";
			func_209(var_11_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13894);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13895, (int)-1, (int)15122);
			@@@var_0_object:AddReply((int)13896, (int)-1, (int)15123);
			return 0;
		}
		var_3_string = true;
		var_340_bool = 0;
		func_1690(var_340_bool);
		if(var_340_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xe2";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int)
{
	if((int)1 != 0) {
		func_1614();
		var_15_bool = var_11_int == (int)15501;
		if(var_15_bool != 0) {
			var_16_object = Obj(); var_17_object = Obj();
			var_16_object = var_1_object;
			var_17_object = var_0_object;
			func_1731();
		}
		var_21_bool = var_11_int == (int)15528;
		if(var_21_bool != 0) {
			var_22_object = Obj(); var_23_object = Obj();
			var_22_object = var_1_object;
			var_23_object = var_0_object;
			func_1737();
		}
		var_27_bool = var_11_int == (int)15539;
		if(var_27_bool != 0) {
			var_28_object = Obj(); var_29_object = Obj();
			var_28_object = var_1_object;
			var_29_object = var_0_object;
			func_1743();
		}
		var_33_bool = var_10_int == (int)15500;
		if(var_33_bool != 0) {
			var_34_string = "";
			func_1041(var_11_int, "Neutral");
			@@@var_0_object:SetMessage((int)14280);
			@@@var_0_object:ClearReplies();
			var_50_bool = 0;
			var_50_bool = 0;
			var_51_bool = 0; var_52_object = Obj();
			var_52_object = var_1_object;
			func_1812(var_52_object);
			if(var_51_bool != 0) {
				var_59_bool = 0; var_60_object = Obj();
				var_60_object = var_1_object;
				func_1824(var_60_object);
				if(var_59_bool != 0) {
					var_50_bool = 1;
				}
			}
			if(var_50_bool != 0) {
				@@@var_0_object:AddReply((int)14281, (int)15502, (int)15501);
			}
			var_68_bool = 0;
			var_68_bool = 0;
			var_69_bool = 0; var_70_object = Obj();
			var_70_object = var_1_object;
			func_1836(var_70_object);
			if(var_69_bool != 0) {
				var_75_bool = 0; var_76_object = Obj();
				var_76_object = var_1_object;
				func_1848(var_76_object);
				if(var_75_bool != 0) {
					var_68_bool = 1;
				}
			}
			if(var_68_bool != 0) {
				@@@var_0_object:AddReply((int)14306, (int)15529, (int)15528);
			}
			var_84_bool = 0;
			var_84_bool = 0;
			var_85_bool = 0; var_86_object = Obj();
			var_86_object = var_1_object;
			func_1800(var_86_object);
			if(var_85_bool != 0) {
				var_91_bool = 0; var_92_object = Obj();
				var_92_object = var_1_object;
				func_1860(var_92_object);
				if(var_91_bool != 0) {
					var_84_bool = 1;
				}
			}
			if(var_84_bool != 0) {
				@@@var_0_object:AddReply((int)14317, (int)15540, (int)15539);
			}
			@@@var_0_object:AddReply((int)14324, (int)-1, (int)15546);
			return 0;
		}
		var_104_bool = var_10_int == (int)15540;
		if(var_104_bool != 0) {
			var_105_string = "";
			func_1041(var_11_int, "Neutral");
			@@@var_0_object:SetMessage((int)14318);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14319, (int)15542, (int)15541);
			return 0;
		}
		var_111_bool = var_10_int == (int)15542;
		if(var_111_bool != 0) {
			var_112_string = "";
			func_1041(var_11_int, "Neutral");
			@@@var_0_object:SetMessage((int)14320);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14321, (int)15544, (int)15543);
			return 0;
		}
		var_118_bool = var_10_int == (int)15544;
		if(var_118_bool != 0) {
			var_119_string = "";
			func_1041(var_11_int, "Neutral");
			@@@var_0_object:SetMessage((int)14322);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14323, (int)-1, (int)15545);
			return 0;
		}
		var_125_bool = var_10_int == (int)15529;
		if(var_125_bool != 0) {
			var_126_string = "";
			func_1041(var_11_int, "Neutral");
			@@@var_0_object:SetMessage((int)14307);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14308, (int)15531, (int)15530);
			return 0;
		}
		var_132_bool = var_10_int == (int)15531;
		if(var_132_bool != 0) {
			var_133_string = "";
			func_1041(var_11_int, "Neutral");
			@@@var_0_object:SetMessage((int)14309);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14310, (int)15533, (int)15532);
			return 0;
		}
		var_139_bool = var_10_int == (int)15533;
		if(var_139_bool != 0) {
			var_140_string = "";
			func_1041(var_11_int, "Neutral");
			@@@var_0_object:SetMessage((int)14311);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14312, (int)15535, (int)15534);
			return 0;
		}
		var_146_bool = var_10_int == (int)15535;
		if(var_146_bool != 0) {
			var_147_string = "";
			func_1041(var_11_int, "Neutral");
			@@@var_0_object:SetMessage((int)14313);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14314, (int)15537, (int)15536);
			return 0;
		}
		var_153_bool = var_10_int == (int)15537;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_1041(var_11_int, "Neutral");
			@@@var_0_object:SetMessage((int)14315);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14316, (int)-1, (int)15538);
			return 0;
		}
		var_160_bool = var_10_int == (int)15502;
		if(var_160_bool != 0) {
			var_161_string = "";
			func_1041(var_11_int, "Neutral");
			@@@var_0_object:SetMessage((int)14282);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14283, (int)15504, (int)15503);
			return 0;
		}
		var_167_bool = var_10_int == (int)15504;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_1041(var_11_int, "Neutral");
			@@@var_0_object:SetMessage((int)14284);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14285, (int)15506, (int)15505);
			@@@var_0_object:AddReply((int)14290, (int)15511, (int)15510);
			return 0;
		}
		var_177_bool = var_10_int == (int)15511;
		if(var_177_bool != 0) {
			var_178_string = "";
			func_1041(var_11_int, "Neutral");
			@@@var_0_object:SetMessage((int)14291);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14292, (int)15513, (int)15512);
			@@@var_0_object:AddReply((int)14299, (int)15520, (int)15519);
			return 0;
		}
		var_187_bool = var_10_int == (int)15520;
		if(var_187_bool != 0) {
			var_188_string = "";
			func_1041(var_11_int, "Neutral");
			@@@var_0_object:SetMessage((int)14300);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14301, (int)15513, (int)15521);
			@@@var_0_object:AddReply((int)14302, (int)15524, (int)15523);
			return 0;
		}
		var_197_bool = var_10_int == (int)15524;
		if(var_197_bool != 0) {
			var_198_string = "";
			func_1041(var_11_int, "Neutral");
			@@@var_0_object:SetMessage((int)14303);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14304, (int)15513, (int)15525);
			@@@var_0_object:AddReply((int)14305, (int)-1, (int)15527);
			return 0;
		}
		var_207_bool = var_10_int == (int)15513;
		if(var_207_bool != 0) {
			var_208_string = "";
			func_1041(var_11_int, "Neutral");
			@@@var_0_object:SetMessage((int)14293);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14294, (int)15515, (int)15514);
			return 0;
		}
		var_214_bool = var_10_int == (int)15515;
		if(var_214_bool != 0) {
			var_215_string = "";
			func_1041(var_11_int, "Neutral");
			@@@var_0_object:SetMessage((int)14295);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14296, (int)15517, (int)15516);
			return 0;
		}
		var_221_bool = var_10_int == (int)15517;
		if(var_221_bool != 0) {
			var_222_string = "";
			func_1041(var_11_int, "Neutral");
			@@@var_0_object:SetMessage((int)14297);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14298, (int)-1, (int)15518);
			return 0;
		}
		var_228_bool = var_10_int == (int)15506;
		if(var_228_bool != 0) {
			var_229_string = "";
			func_1041(var_11_int, "Neutral");
			@@@var_0_object:SetMessage((int)14286);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14287, (int)15508, (int)15507);
			return 0;
		}
		var_235_bool = var_10_int == (int)15508;
		if(var_235_bool != 0) {
			var_236_string = "";
			func_1041(var_11_int, "Neutral");
			@@@var_0_object:SetMessage((int)14288);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14289, (int)-1, (int)15509);
			return 0;
		}
		var_3_string = true;
		var_241_bool = 0;
		func_1690(var_241_bool);
		if(var_241_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x422";
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool)
{
	func_1904();
	var_10_bool = 0;
	func_1531(var_10_bool);
	var_13_bool = var_10_bool == 0; //@nz
	if(var_13_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
Label_19:
	var_14_string = "";
	func_1596("Neutral");
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


func_1536(var_31_bool, var_32_object)
{
	var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0;
	@@var_32_object:GetPosition(var_42_cvector);
	@@var_32_object:GetEyesHeight(var_41_float);
	var_49_float = GetByIndex(var_42_cvector, 1);
	var_49_float = var_49_float + var_41_float;
	SetByIndex(var_42_cvector, 1) = var_49_float;
	GetPosition(var_43_cvector);
	GetEyesHeight(var_41_float);
	var_50_float = GetByIndex(var_43_cvector, 1);
	var_50_float = var_50_float + var_41_float;
	SetByIndex(var_43_cvector, 1) = var_50_float;
	var_44_cvector = var_42_cvector - var_43_cvector;
	var_51_float = GetByIndex(var_44_cvector, 1);
	SetByIndex(var_44_cvector, 1) = (float)0;
	var_52_int = var_44_cvector | var_44_cvector;
	var_53_float = sqrt(var_52_int);
	var_44_cvector = var_44_cvector / var_53_float;
	var_45_cvector = -var_44_cvector;
	var_55_float = var_44_cvector * (int)70;
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0);
	var_57_cvector = var_45_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1621(var_56_cvector, var_57_cvector);
	var_65_float = var_56_cvector * (int)25;
	var_66_int = var_55_float + var_65_float;
	var_46_cvector = var_66_int - CVector(0.0, 10.0, 0.0);
	var_47_cvector = var_43_cvector + var_46_cvector;
	IsOverrideActive(var_48_bool);
	var_68_bool = var_48_bool;
	if(var_68_bool != 0) {
		var_31_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_47_cvector, var_45_cvector);
	var_69_float = GetByIndex(var_46_cvector, 0);
	var_70_float = GetByIndex(var_46_cvector, 2);
	Rotate(var_69_float, var_70_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_31_bool = 1;
	return 16;
}


func_1671(var_12_bool, var_13_int)
{
	var_14_int = 0;
	func_1662(var_14_int);
	var_12_bool = var_14_int == var_13_int;
	return 0;
}


func_1800(var_85_bool)
{
	var_87_int = 0; var_88_string = "";
	func_1631(var_87_int, "d11q02");
	var_90_bool = var_87_int == (int)1;
	if(var_90_bool != 0) {
		var_85_bool = 1;
		return 0;
	}
	var_85_bool = 0;
	return 0;
}


func_1677(var_251_bool)
{
	var_252_bool = 0; var_253_bool = 0;
	var_254_string = "";
	func_1596("No");
	lshWaitForAnimEnd(var_253_bool);
	var_253_bool = var_251_bool;
	return 2;
}


func_1041(var_2_object, var_34_string)
{
	var_35_bool = 0;
	func_1690(var_35_bool);
	var_36_bool = var_35_bool == 0; //@nz
	if(var_36_bool != 0) {
		return 0;
	}
	var_37_bool = var_34_string == var_2_object;
	if(var_37_bool != 0) {
		return 0;
	}
	var_38_string = "";
	var_34_string = var_38_string;
	func_1596(var_38_string);
	var_2_object = var_34_string;
	return 0;
}


func_1812(var_51_bool)
{
	var_53_int = 0; var_54_string = "";
	func_1631(var_53_int, "d11q01");
	var_58_bool = var_53_int == (int)2;
	if(var_58_bool != 0) {
		var_51_bool = 1;
		return 0;
	}
	var_51_bool = 0;
	return 0;
}


func_1686(var_72_int)
{
	var_72_int = 11961;
	return 0;
}


func_1688(var_73_string)
{
	var_73_string = "ui/NPC_Burah.png";
	return 0;
}


func_1690(var_13_bool)
{
	var_13_bool = 1;
	return 0;
}


func_1692()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_1824(var_59_bool)
{
	var_61_int = 0; var_62_string = "";
	func_1631(var_61_int, "ood11Block1");
	var_64_bool = var_61_int == (int)0;
	if(var_64_bool != 0) {
		var_59_bool = 1;
		return 0;
	}
	var_59_bool = 0;
	return 0;
}


func_1698()
{
	SetVariable("d9TalkToPolkovodec", (int)1);
	return 0;
}


func_931(var_0_object, var_1_object, var_2_object, var_3_object, var_177_object, var_178_object)
{
	var_0_object = var_178_object;
	var_1_object = var_177_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_184_string = "";
		func_1041(var_178_object, "Neutral");
		@@@var_0_object:SetMessage((int)14280);
		@@@var_0_object:ClearReplies();
		var_190_bool = 0;
		var_190_bool = 0;
		var_191_bool = 0; var_192_object = Obj();
		var_192_object = var_1_object;
		func_1812(var_192_object);
		if(var_191_bool != 0) {
			var_197_bool = 0; var_198_object = Obj();
			var_198_object = var_1_object;
			func_1824(var_198_object);
			if(var_197_bool != 0) {
				var_190_bool = 1;
			}
		}
		if(var_190_bool != 0) {
			@@@var_0_object:AddReply((int)14281, (int)15502, (int)15501);
		}
		var_206_bool = 0;
		var_206_bool = 0;
		var_207_bool = 0; var_208_object = Obj();
		var_208_object = var_1_object;
		func_1836(var_208_object);
		if(var_207_bool != 0) {
			var_213_bool = 0; var_214_object = Obj();
			var_214_object = var_1_object;
			func_1848(var_214_object);
			if(var_213_bool != 0) {
				var_206_bool = 1;
			}
		}
		if(var_206_bool != 0) {
			@@@var_0_object:AddReply((int)14306, (int)15529, (int)15528);
		}
		var_222_bool = 0;
		var_222_bool = 0;
		var_223_bool = 0; var_224_object = Obj();
		var_224_object = var_1_object;
		func_1800(var_224_object);
		if(var_223_bool != 0) {
			var_229_bool = 0; var_230_object = Obj();
			var_230_object = var_1_object;
			func_1860(var_230_object);
			if(var_229_bool != 0) {
				var_222_bool = 1;
			}
		}
		if(var_222_bool != 0) {
			@@@var_0_object:AddReply((int)14317, (int)15540, (int)15539);
		}
		@@@var_0_object:AddReply((int)14324, (int)-1, (int)15546);
		goto Label_1011;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x3a7";
	}
Label_1011:
	var_241_bool = 0;
	func_1690(var_241_bool);
	if(var_241_bool != 0) {

	Label_1015:
		lshWaitForAnimEnd();
		var_242_object = var_3_object;
		if(var_242_object != 0) {
		} else {
			var_243_string = "";
			var_243_string = var_2_object;
			func_1596(var_243_string);
			goto Label_1015;
	}
		PlayAnimation("all", "idle");

	Label_1030:
		WaitForAnimEnd();
		var_246_object = var_3_object;
		if(var_246_object != 0) {
			goto Label_1040;
		}
		PlayAnimation("all", "idle");
		goto Label_1030;
	}
	goto Label_1040;
	
Label_1040:
	return 0;
	
}


func_1704()
{
	SetVariable("ood9Block1", (int)1);
	return 0;
}


func_1836(var_69_bool)
{
	var_71_int = 0; var_72_string = "";
	func_1631(var_71_int, "d11q01");
	var_74_bool = var_71_int >= (int)3;
	if(var_74_bool != 0) {
		var_69_bool = 1;
		return 0;
	}
	var_69_bool = 0;
	return 0;
}


func_1710(var_22_object)
{
	var_24_object = Obj(); var_25_object = Obj();
	Trace("Rifle is given");
	CreateInvItem(var_25_object);
	@@var_25_object:SetItemName("Rifle");
	@@var_25_object:SetProperty("durability", (int)100);
	var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0;
	var_22_object = var_30_object;
	var_25_object = var_31_object;
	func_1636(var_30_object, var_31_object, (int)1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_49(var_0_object, var_20_int, var_21_object)
{
	var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0;
	var_0_object = var_21_object;
	var_31_bool = 0; var_32_object = Obj();
	var_21_object = var_32_object;
	func_1536(var_31_bool, var_32_object);
	var_71_bool = var_31_bool == 0; //@nz
	if(var_71_bool != 0) {
		var_20_int = -2;
		return 8;
	}
	CreateDialog(var_27_object);
	var_72_int = 0;
	func_1686(var_72_int);
	@@var_27_object:SetNPCName(var_72_int);
	var_73_string = "";
	func_1688(var_73_string);
	@@var_27_object:SetPhoto(var_73_string);
	var_74_int = 0;
	func_1887(var_74_int);
	@@var_27_object:SetPlayerName(var_74_int);
	IsOverrideActive(var_28_bool);
	var_82_bool = var_28_bool;
	if(var_82_bool != 0) {
		var_20_int = -2;
		return 8;
	}
	DoDialog(var_27_object);
	var_83_object = Obj(); var_84_object = Obj();
	var_21_object = var_83_object;
	var_27_object = var_84_object;
	TaskCall(3);
	func_112(var_85_object, var_86_object, var_87_string, var_88_bool, var_83_object, var_84_object);
	TaskReturn();
	@@var_27_object:IsDialogEnd(var_30_bool);
	
Label_94:
	var_155_bool = var_30_bool == 0; //@nz
	if(var_155_bool != 0) {
		sync();
		@@var_27_object:IsDialogEnd(var_30_bool);
		goto Label_94;
	}
	var_21_object = Obj();
	func_1592();
	StopDialog(var_27_object);
	@@var_27_object:GetReturnValue((int)-1);
	var_29_int = var_20_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1592()
{
	CameraSwitchToNormal();
	return 0;
}


func_1848(var_75_bool)
{
	var_77_int = 0; var_78_string = "";
	func_1631(var_77_int, "ood11Block2");
	var_80_bool = var_77_int == (int)0;
	if(var_80_bool != 0) {
		var_75_bool = 1;
		return 0;
	}
	var_75_bool = 0;
	return 0;
}


func_1596(var_14_string)
{
	var_15_float = 0; var_16_float = 0; var_17_float = 0; var_18_float = 0;
	var_20_int = "playing " + var_14_string;
	Trace(var_20_int);
	lshGetAnimTimes(var_14_string, var_17_float, var_18_float);
	lshPlayAnimation(var_17_float, var_18_float);
	var_22_int = "start: " + var_17_float;
	Trace(var_22_int);
	var_24_int = "end: " + var_18_float;
	Trace(var_24_int);
	return 4;
}


func_1731()
{
	SetVariable("ood11Block1", (int)1);
	return 0;
}


func_1860(var_91_bool)
{
	var_93_int = 0; var_94_string = "";
	func_1631(var_93_int, "ood11Block3");
	var_96_bool = var_93_int == (int)0;
	if(var_96_bool != 0) {
		var_91_bool = 1;
		return 0;
	}
	var_91_bool = 0;
	return 0;
}


func_1737()
{
	SetVariable("ood11Block2", (int)1);
	return 0;
}


func_1614()
{
	var_13_bool = 0;
	func_1690(var_13_bool);
	if(var_13_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1743()
{
	SetVariable("ood11Block3", (int)1);
	return 0;
}


func_1872(var_117_bool)
{
	var_119_int = 0; var_120_string = "";
	func_1631(var_119_int, "ood9Block2");
	var_122_bool = var_119_int == (int)0;
	if(var_122_bool != 0) {
		var_117_bool = 1;
		return 0;
	}
	var_117_bool = 0;
	return 0;
}


func_209(var_2_object, var_76_string)
{
	var_77_bool = 0;
	func_1690(var_77_bool);
	var_78_bool = var_77_bool == 0; //@nz
	if(var_78_bool != 0) {
		return 0;
	}
	var_79_bool = var_76_string == var_2_object;
	if(var_79_bool != 0) {
		return 0;
	}
	var_80_string = "";
	var_76_string = var_80_string;
	func_1596(var_80_string);
	var_2_object = var_76_string;
	return 0;
}


func_1749(var_45_object)
{
	Trace("rifle ammo10 is given");
	var_48_object = Obj(); var_49_string = ""; var_50_int = 0;
	var_45_object = var_48_object;
	func_1649(var_48_object, "rifle_ammo", (int)10);
	return 0;
}


func_1621(var_56_cvector, var_57_cvector)
{
	var_59_float = 0; var_60_float = 0;
	var_61_int = var_57_cvector | var_57_cvector;
	var_60_float = sqrt(var_61_int);
	var_62_float = 9.999999974752427e-07;
	var_63_bool = var_60_float < var_62_float;
	if(var_63_bool != 0) {
		var_56_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_56_cvector = var_57_cvector / var_60_float;
	return 2;
}


func_1884(var_94_bool)
{
	var_94_bool = 0;
	return 0;
}


func_1887(var_74_int)
{
	var_75_int = 0; var_76_int = 0;
	GetVariable("player", var_76_int);
	var_79_bool = var_76_int == (int)0;
	if(var_79_bool != 0) {
		var_74_int = 200001;
		return 2;
	EMIT "GOTO 0x76e";
	}
	var_81_bool = var_76_int == (int)1;
	if(var_81_bool != 0) {
		var_74_int = 200002;
		return 2;
	}
	var_74_int = 200003;
	return 2;
}


func_1760()
{
	SetVariable("ood9Block2", (int)1);
	return 0;
}


func_1631(var_53_int, var_54_string)
{
	var_55_int = 0; var_56_int = 0;
	GetVariable(var_54_string, var_56_int);
	var_56_int = var_53_int;
	return 2;
}


func_1636(var_30_object, var_31_object, var_32_int)
{
	var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0;
	@@var_31_object:GetItemID(var_36_int);
	GetInvItemProperty(var_37_int, var_36_int, "Category");
	@@var_30_object:AddItem(var_38_bool, var_31_object, var_37_int, var_32_int);
	var_40_bool = var_38_bool == 0; //@nz
	if(var_40_bool != 0) {
		@@var_30_object:DropItems(var_31_object, var_32_int);
	}
	return 6;
}


func_868(var_0_object, var_159_int, var_160_object)
{
	var_162_object = Obj(); var_163_bool = 0; var_164_int = 0; var_165_bool = 0; var_166_object = Obj(); var_167_bool = 0; var_168_int = 0; var_169_bool = 0;
	var_0_object = var_160_object;
	var_170_bool = 0; var_171_object = Obj();
	var_160_object = var_171_object;
	func_1536(var_170_bool, var_171_object);
	var_172_bool = var_170_bool == 0; //@nz
	if(var_172_bool != 0) {
		var_159_int = -2;
		return 8;
	}
	CreateDialog(var_166_object);
	var_173_int = 0;
	func_1686(var_173_int);
	@@var_166_object:SetNPCName(var_173_int);
	var_174_string = "";
	func_1688(var_174_string);
	@@var_166_object:SetPhoto(var_174_string);
	var_175_int = 0;
	func_1887(var_175_int);
	@@var_166_object:SetPlayerName(var_175_int);
	IsOverrideActive(var_167_bool);
	var_176_bool = var_167_bool;
	if(var_176_bool != 0) {
		var_159_int = -2;
		return 8;
	}
	DoDialog(var_166_object);
	var_177_object = Obj(); var_178_object = Obj();
	var_160_object = var_177_object;
	var_166_object = var_178_object;
	TaskCall(5);
	func_931(var_179_object, var_180_object, var_181_string, var_182_bool, var_177_object, var_178_object);
	TaskReturn();
	@@var_166_object:IsDialogEnd(var_169_bool);
	
Label_913:
	var_249_bool = var_169_bool == 0; //@nz
	if(var_249_bool != 0) {
		sync();
		@@var_166_object:IsDialogEnd(var_169_bool);
		goto Label_913;
	}
	var_160_object = Obj();
	func_1592();
	StopDialog(var_166_object);
	@@var_166_object:GetReturnValue((int)-1);
	var_168_int = var_159_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1766(var_92_bool, var_93_object)
{
	var_94_bool = 0; var_95_object = Obj();
	var_93_object = var_95_object;
	func_1884(var_95_object);
	if(var_94_bool != 0) {
		var_92_bool = 1;
		return 0;
	}
	var_92_bool = 0;
	return 0;
}


func_1519(var_11_bool, var_12_object)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_bool = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_bool = 0;
	@@var_12_object:GetPosition(var_17_cvector);
	GetPosition(var_18_cvector);
	var_19_cvector = var_17_cvector - var_18_cvector;
	var_21_float = GetByIndex(var_19_cvector, 0);
	var_22_float = GetByIndex(var_19_cvector, 2);
	Rotate(var_21_float, var_22_float, var_20_bool);
	var_20_bool = var_11_bool;
	return 8;
}


func_1904()
{
	return 0;
}


func_1905(var_11_object)
{
	var_12_bool = 0; var_13_int = 0;
	func_1671(var_12_bool, (int)9);
	if(var_12_bool != 0) {
		var_20_int = 0; var_21_object = Obj();
		var_11_object = var_21_object;
		TaskCall(2);
		func_49(var_22_object, var_20_int, var_21_object);
		TaskReturn();
		return 0;
	}
	var_157_bool = 0; var_158_int = 0;
	func_1671(var_157_bool, (int)11);
	if(var_157_bool != 0) {
		var_159_int = 0; var_160_object = Obj();
		var_11_object = var_160_object;
		TaskCall(4);
		func_868(var_161_object, var_159_int, var_160_object);
		TaskReturn();
		return 0;
	}
	func_1677((bool)0);
	return 0;
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_83_object, var_84_object)
{
	var_0_object = var_84_object;
	var_1_object = var_83_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_90_object = Obj(); var_91_object = Obj();
		var_90_object = var_1_object;
		var_91_object = var_0_object;
		func_1698();
		var_94_string = "";
		func_209(var_84_object, "Neutral");
		@@@var_0_object:SetMessage((int)13882);
		@@@var_0_object:ClearReplies();
		var_110_bool = 0; var_111_object = Obj();
		var_111_object = var_1_object;
		func_1766(var_110_bool, var_111_object);
		if(var_110_bool != 0) {
			@@@var_0_object:AddReply((int)13883, (int)15111, (int)15110);
		}
		var_117_bool = 0;
		var_117_bool = 0;
		var_118_bool = 0; var_119_object = Obj();
		var_119_object = var_1_object;
		func_1776(var_119_object);
		if(var_118_bool != 0) {
			var_126_bool = 0; var_127_object = Obj();
			var_127_object = var_1_object;
			func_1788(var_127_object);
			if(var_126_bool != 0) {
				var_117_bool = 1;
			}
		}
		if(var_117_bool != 0) {
			@@@var_0_object:AddReply((int)13906, (int)15138, (int)15137);
		}
		var_135_bool = 0; var_136_object = Obj();
		var_136_object = var_1_object;
		func_1872(var_136_object);
		if(var_135_bool != 0) {
			@@@var_0_object:AddReply((int)13924, (int)15156, (int)15155);
		}
		@@@var_0_object:AddReply((int)13947, (int)-1, (int)15182);
		goto Label_179;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_179:
	var_147_bool = 0;
	func_1690(var_147_bool);
	if(var_147_bool != 0) {

	Label_183:
		lshWaitForAnimEnd();
		var_148_object = var_3_object;
		if(var_148_object != 0) {
		} else {
			var_149_string = "";
			var_149_string = var_2_object;
			func_1596(var_149_string);
			goto Label_183;
	}
		PlayAnimation("all", "idle");

	Label_198:
		WaitForAnimEnd();
		var_152_object = var_3_object;
		if(var_152_object != 0) {
			goto Label_208;
		}
		PlayAnimation("all", "idle");
		goto Label_198;
	}
	goto Label_208;
	
Label_208:
	return 0;
	
}


func_1776(var_100_bool)
{
	var_102_int = 0; var_103_string = "";
	func_1631(var_102_int, "d9q01");
	var_107_bool = var_102_int == (int)2;
	if(var_107_bool != 0) {
		var_100_bool = 1;
		return 0;
	}
	var_100_bool = 0;
	return 0;
}


func_1649(var_48_object, var_49_string, var_50_int)
{
	var_51_object = Obj(); var_52_object = Obj();
	CreateInvItem(var_52_object);
	@@var_52_object:SetItemName(var_49_string);
	var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0;
	var_48_object = var_53_object;
	var_52_object = var_54_object;
	var_50_int = var_55_int;
	func_1636(var_53_object, var_54_object, var_55_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1531(var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0;
	IsLoaded(var_12_bool);
	var_12_bool = var_10_bool;
	return 2;
}


func_1788(var_108_bool)
{
	var_110_int = 0; var_111_string = "";
	func_1631(var_110_int, "ood9Block1");
	var_113_bool = var_110_int == (int)0;
	if(var_113_bool != 0) {
		var_108_bool = 1;
		return 0;
	}
	var_108_bool = 0;
	return 0;
}


func_1662(var_14_int)
{
	var_15_float = 0; var_16_float = 0;
	GetGameTime(var_16_float);
	var_18_int = 0;
	var_18_int = var_16_float / (int)24;
	var_14_int = (int)1 + var_18_int;
	return 2;
}


