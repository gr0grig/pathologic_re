// @IMPORTS: Hold/0,StopGroup0/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,FindActor/2,GetGameTime/1,lshWaitForAnimEnd/1,TriggerWorld/2,SetVariable/2,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1,CreateDiaryEntry/4
// @STRINGS: W:Neutral|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:Door |W: not found|W:locked|A:SetProperty|W:No|W:ui/NPC_Han.png|W:playsound|W:giveitem|W:d3q02|W:d3q02HanGotoViktor|W:pt_map_viktor|A:AddMark|A:ShowMap|W:ood8Han1|W:ood9Xan1|W:d9q01|W:Rifle|A:RemoveItemByType|W:mnogogrannik@door1|A:GetItemCountOfType|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:player|W:Adding diary entry
// @GLOBALS: 0:object:,1:bool:
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
// @EVENT_11: op=0xc3 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x284 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x409 vars=int,int
// @PE: 0x23,0x29,0x70,0xb3,0xc3,0x221,0x274,0x284,0x38e,0x3f9,0x409,0x59c,0x5e6,0x5fb,0x601,0x617,0x627,0x62d,0x633,0x64f,0x656,0x65b,0x667,0x673,0x67f,0x68b,0x695,0x74d

task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool)
{
	StopGroup0();
	return 0;
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool)
{
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	var_16_object = Obj();
	var_15_bool = var_16_object;
	func_1869(var_16_object);
	return 0;
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool)
{
	var_16_bool = 0; var_17_object = Obj();
	var_15_bool = var_17_object;
	func_1363(var_16_bool, var_17_object);
	WaitForAnimEnd();
	return 0;
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	if((int)1 != 0) {
		func_1458();
		var_20_bool = var_16_bool == (int)11509;
		if(var_20_bool != 0) {
			var_21_object = Obj(); var_22_object = Obj();
			var_21_object = var_1_object;
			var_22_object = var_0_object;
			func_1539();
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_1537();
			var_43_object = Obj(); var_44_object = Obj();
			var_43_object = var_1_object;
			var_44_object = var_0_object;
			func_1559(var_44_object);
		}
		var_70_bool = var_16_bool == (int)11510;
		if(var_70_bool != 0) {
			var_71_object = Obj(); var_72_object = Obj();
			var_71_object = var_1_object;
			var_72_object = var_0_object;
			func_1539();
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_object;
			func_1537();
			var_75_object = Obj(); var_76_object = Obj();
			var_75_object = var_1_object;
			var_76_object = var_0_object;
			func_1559(var_76_object);
		}
		var_78_bool = var_16_bool == (int)11505;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_1537();
			var_81_object = Obj(); var_82_object = Obj();
			var_81_object = var_1_object;
			var_82_object = var_0_object;
			func_1539();
			var_83_object = Obj(); var_84_object = Obj();
			var_83_object = var_1_object;
			var_84_object = var_0_object;
			func_1559(var_84_object);
		}
		var_86_bool = var_16_bool == (int)11498;
		if(var_86_bool != 0) {
			var_87_object = Obj(); var_88_object = Obj();
			var_87_object = var_1_object;
			var_88_object = var_0_object;
			func_1537();
			var_89_object = Obj(); var_90_object = Obj();
			var_89_object = var_1_object;
			var_90_object = var_0_object;
			func_1539();
			var_91_object = Obj(); var_92_object = Obj();
			var_91_object = var_1_object;
			var_92_object = var_0_object;
			func_1559(var_92_object);
		}
		var_94_bool = var_15_string == (int)11488;
		if(var_94_bool != 0) {
			var_95_bool = 0;
			var_95_bool = 0;
			var_96_bool = 0; var_97_object = Obj();
			var_97_object = var_1_object;
			func_1627(var_97_object);
			if(var_96_bool != 0) {
				var_104_bool = 0; var_105_object = Obj();
				var_105_object = var_1_object;
				func_1622(var_105_object);
				if(var_104_bool != 0) {
					var_95_bool = 1;
				}
			}
			if(var_95_bool != 0) {
				var_106_string = "";
				func_179(var_16_bool, "Neutral");
				@@@var_0_object:SetMessage((int)10420);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)10421, (int)11490, (int)11489);
				return 0;
			}
		}
		var_126_bool = var_15_string == (int)11490;
		if(var_126_bool != 0) {
			var_127_string = "";
			func_179(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10422);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10423, (int)11492, (int)11491);
			return 0;
		}
		var_133_bool = var_15_string == (int)11492;
		if(var_133_bool != 0) {
			var_134_string = "";
			func_179(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10424);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10425, (int)11494, (int)11493);
			return 0;
		}
		var_140_bool = var_15_string == (int)11494;
		if(var_140_bool != 0) {
			var_141_string = "";
			func_179(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10426);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10427, (int)11496, (int)11495);
			return 0;
		}
		var_147_bool = var_15_string == (int)11496;
		if(var_147_bool != 0) {
			var_148_string = "";
			func_179(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10428);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10429, (int)11499, (int)11497);
			@@@var_0_object:AddReply((int)10430, (int)-1, (int)11498);
			return 0;
		}
		var_157_bool = var_15_string == (int)11499;
		if(var_157_bool != 0) {
			var_158_string = "";
			func_179(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10431);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10432, (int)11502, (int)11500);
			@@@var_0_object:AddReply((int)10433, (int)11502, (int)11501);
			return 0;
		}
		var_167_bool = var_15_string == (int)11502;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_179(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10434);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10435, (int)11504, (int)11503);
			@@@var_0_object:AddReply((int)10437, (int)-1, (int)11505);
			return 0;
		}
		var_177_bool = var_15_string == (int)11504;
		if(var_177_bool != 0) {
			var_178_string = "";
			func_179(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10436);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10438, (int)11508, (int)11507);
			return 0;
		}
		var_184_bool = var_15_string == (int)11508;
		if(var_184_bool != 0) {
			var_185_string = "";
			func_179(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10439);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10440, (int)-1, (int)11509);
			@@@var_0_object:AddReply((int)10441, (int)-1, (int)11510);
			return 0;
		}
		var_3_string = true;
		var_193_bool = 0;
		func_1529(var_193_bool);
		if(var_193_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc4";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool)
{
	if((int)1 != 0) {
		func_1458();
		var_20_bool = var_15_string == (int)13489;
		if(var_20_bool != 0) {
			var_21_bool = 0; var_22_object = Obj();
			var_22_object = var_1_object;
			func_1639(var_22_object);
			if(var_21_bool != 0) {
				var_29_object = Obj(); var_30_object = Obj();
				var_29_object = var_1_object;
				var_30_object = var_0_object;
				func_1575();
				var_33_string = "";
				func_628(var_16_bool, "Neutral");
				@@@var_0_object:SetMessage((int)12330);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)12331, (int)13491, (int)13490);
				@@@var_0_object:AddReply((int)12336, (int)-1, (int)13495);
				return 0;
			}
			var_55_string = "";
			func_628(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13781);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13782, (int)-1, (int)15018);
			return 0;
		}
		var_61_bool = var_15_string == (int)13491;
		if(var_61_bool != 0) {
			var_62_string = "";
			func_628(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12332);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12333, (int)13493, (int)13492);
			@@@var_0_object:AddReply((int)12337, (int)13497, (int)13496);
			return 0;
		}
		var_71_bool = var_15_string == (int)13497;
		if(var_71_bool != 0) {
			var_72_string = "";
			func_628(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12338);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12339, (int)13499, (int)13498);
			return 0;
		}
		var_78_bool = var_15_string == (int)13499;
		if(var_78_bool != 0) {
			var_79_string = "";
			func_628(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12340);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12341, (int)-1, (int)13500);
			@@@var_0_object:AddReply((int)12342, (int)13502, (int)13501);
			return 0;
		}
		var_88_bool = var_15_string == (int)13502;
		if(var_88_bool != 0) {
			var_89_string = "";
			func_628(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12343);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12344, (int)-1, (int)13503);
			return 0;
		}
		var_95_bool = var_15_string == (int)13493;
		if(var_95_bool != 0) {
			var_96_string = "";
			func_628(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12334);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12335, (int)13504, (int)13494);
			return 0;
		}
		var_102_bool = var_15_string == (int)13504;
		if(var_102_bool != 0) {
			var_103_string = "";
			func_628(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12345);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12346, (int)13506, (int)13505);
			return 0;
		}
		var_109_bool = var_15_string == (int)13506;
		if(var_109_bool != 0) {
			var_110_string = "";
			func_628(var_16_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12347);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12348, (int)-1, (int)13507);
			return 0;
		}
		var_3_string = true;
		var_115_bool = 0;
		func_1529(var_115_bool);
		if(var_115_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x285";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int)
{
	if((int)1 != 0) {
		func_1458();
		var_20_bool = var_16_int == (int)15289;
		if(var_20_bool != 0) {
			var_21_object = Obj(); var_22_object = Obj();
			var_21_object = var_1_object;
			var_22_object = var_0_object;
			func_1587();
		}
		var_51_bool = var_16_int == (int)15310;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_1602(var_53_object);
			var_69_object = Obj(); var_70_object = Obj();
			var_69_object = var_1_object;
			var_70_object = var_0_object;
			func_1615();
			var_81_object = Obj(); var_82_object = Obj();
			var_81_object = var_1_object;
			var_82_object = var_0_object;
			func_1531();
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_1596(var_86_object);
		}
		var_92_bool = var_15_int == (int)15276;
		if(var_92_bool != 0) {
			var_93_bool = 0;
			var_93_bool = 0;
			var_94_bool = 0; var_95_object = Obj();
			var_95_object = var_1_object;
			func_1651(var_95_object);
			if(var_94_bool != 0) {
				var_102_bool = 0; var_103_object = Obj();
				var_103_object = var_1_object;
				func_1663(var_103_object);
				if(var_102_bool != 0) {
					var_93_bool = 1;
				}
			}
			if(var_93_bool != 0) {
				var_108_object = Obj(); var_109_object = Obj();
				var_108_object = var_1_object;
				var_109_object = var_0_object;
				func_1581();
				var_112_string = "";
				func_1017(var_16_int, "Neutral");
				@@@var_0_object:SetMessage((int)14041);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)14042, (int)15278, (int)15277);
				return 0;
			}
			var_131_string = "";
			func_1017(var_16_int, "Neutral");
			@@@var_0_object:SetMessage((int)14063);
			@@@var_0_object:ClearReplies();
			var_133_bool = 0; var_134_object = Obj();
			var_134_object = var_1_object;
			func_1675(var_133_bool, var_134_object);
			if(var_133_bool != 0) {
				@@@var_0_object:AddReply((int)14068, (int)15309, (int)15305);
			}
			var_145_bool = 0; var_146_object = Obj();
			var_146_object = var_1_object;
			func_1685(var_145_bool, var_146_object);
			if(var_145_bool != 0) {
				@@@var_0_object:AddReply((int)14069, (int)15307, (int)15306);
			}
			@@@var_0_object:AddReply((int)14064, (int)-1, (int)15300);
			return 0;
		}
		var_164_bool = var_15_int == (int)15307;
		if(var_164_bool != 0) {
			var_165_string = "";
			func_1017(var_16_int, "Neutral");
			@@@var_0_object:SetMessage((int)14070);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14071, (int)-1, (int)15308);
			return 0;
		}
		var_171_bool = var_15_int == (int)15309;
		if(var_171_bool != 0) {
			var_172_string = "";
			func_1017(var_16_int, "Neutral");
			@@@var_0_object:SetMessage((int)14072);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14073, (int)-1, (int)15310);
			return 0;
		}
		var_178_bool = var_15_int == (int)15278;
		if(var_178_bool != 0) {
			var_179_string = "";
			func_1017(var_16_int, "Neutral");
			@@@var_0_object:SetMessage((int)14043);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14044, (int)15280, (int)15279);
			return 0;
		}
		var_185_bool = var_15_int == (int)15280;
		if(var_185_bool != 0) {
			var_186_string = "";
			func_1017(var_16_int, "Neutral");
			@@@var_0_object:SetMessage((int)14045);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14046, (int)15282, (int)15281);
			return 0;
		}
		var_192_bool = var_15_int == (int)15282;
		if(var_192_bool != 0) {
			var_193_string = "";
			func_1017(var_16_int, "Neutral");
			@@@var_0_object:SetMessage((int)14047);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14048, (int)15284, (int)15283);
			@@@var_0_object:AddReply((int)14060, (int)15297, (int)15296);
			return 0;
		}
		var_202_bool = var_15_int == (int)15297;
		if(var_202_bool != 0) {
			var_203_string = "";
			func_1017(var_16_int, "Neutral");
			@@@var_0_object:SetMessage((int)14061);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14062, (int)15286, (int)15298);
			return 0;
		}
		var_209_bool = var_15_int == (int)15284;
		if(var_209_bool != 0) {
			var_210_string = "";
			func_1017(var_16_int, "Neutral");
			@@@var_0_object:SetMessage((int)14049);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14050, (int)15286, (int)15285);
			@@@var_0_object:AddReply((int)14055, (int)15291, (int)15290);
			return 0;
		}
		var_219_bool = var_15_int == (int)15291;
		if(var_219_bool != 0) {
			var_220_string = "";
			func_1017(var_16_int, "Neutral");
			@@@var_0_object:SetMessage((int)14056);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14057, (int)15293, (int)15292);
			return 0;
		}
		var_226_bool = var_15_int == (int)15293;
		if(var_226_bool != 0) {
			var_227_string = "";
			func_1017(var_16_int, "Neutral");
			@@@var_0_object:SetMessage((int)14058);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14059, (int)15286, (int)15294);
			return 0;
		}
		var_233_bool = var_15_int == (int)15286;
		if(var_233_bool != 0) {
			var_234_string = "";
			func_1017(var_16_int, "Neutral");
			@@@var_0_object:SetMessage((int)14051);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14052, (int)15288, (int)15287);
			return 0;
		}
		var_240_bool = var_15_int == (int)15288;
		if(var_240_bool != 0) {
			var_241_string = "";
			func_1017(var_16_int, "Neutral");
			@@@var_0_object:SetMessage((int)14053);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14054, (int)-1, (int)15289);
			return 0;
		}
		var_3_string = true;
		var_246_bool = 0;
		func_1529(var_246_bool);
		if(var_246_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x40a";
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool)
{
	func_1865();
	var_16_bool = 0;
	func_1375(var_16_bool);
	var_19_bool = var_16_bool == 0; //@nz
	if(var_19_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
Label_19:
	var_20_string = "";
	func_1440("Neutral");
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


func_1537()
{
	return 0;
}


func_1539()
{
	var_23_object = Obj(); var_24_object = Obj();
	SetVariable("d3q02", (int)4);
	func_1766(Obj());
	var_27_object = var_24_object;
	var_38_float = 0;
	func_1496(var_38_float);
	@@var_24_object:AddMark("d3q02HanGotoViktor", "pt_map_viktor", (int)0, (int)11386, var_38_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1527(var_83_string)
{
	var_83_string = "ui/NPC_Han.png";
	return 0;
}


func_1675(var_133_bool, var_134_object)
{
	var_135_bool = 0; var_136_object = Obj();
	var_134_object = var_136_object;
	func_1695(var_135_bool, var_136_object);
	if(var_135_bool != 0) {
		var_133_bool = 1;
		return 0;
	}
	var_133_bool = 0;
	return 0;
}


func_910(var_0_object, var_1_object, var_2_object, var_3_object, var_224_object, var_225_object)
{
	var_0_object = var_225_object;
	var_1_object = var_224_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_231_bool = 0;
		var_231_bool = 0;
		var_232_bool = 0; var_233_object = Obj();
		var_233_object = var_1_object;
		func_1651(var_233_object);
		if(var_232_bool != 0) {
			var_238_bool = 0; var_239_object = Obj();
			var_239_object = var_1_object;
			func_1663(var_239_object);
			if(var_238_bool != 0) {
				var_231_bool = 1;
			}
		}
		if(var_231_bool != 0) {
			var_244_object = Obj(); var_245_object = Obj();
			var_244_object = var_1_object;
			var_245_object = var_0_object;
			func_1581();
			var_248_string = "";
			func_1017(var_225_object, "Neutral");
			@@@var_0_object:SetMessage((int)14041);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14042, (int)15278, (int)15277);
		} else {
				var_265_string = "";
				func_1017(var_225_object, "Neutral");
				@@@var_0_object:SetMessage((int)14063);
				@@@var_0_object:ClearReplies();
				var_267_bool = 0; var_268_object = Obj();
				var_268_object = var_1_object;
				func_1675(var_267_bool, var_268_object);
				if(var_267_bool != 0) {
					@@@var_0_object:AddReply((int)14068, (int)15309, (int)15305);
				}
				var_279_bool = 0; var_280_object = Obj();
				var_280_object = var_1_object;
				func_1685(var_279_bool, var_280_object);
				if(var_279_bool != 0) {
					@@@var_0_object:AddReply((int)14069, (int)15307, (int)15306);
				}
				@@@var_0_object:AddReply((int)14064, (int)-1, (int)15300);
				goto Label_987;
		}
	}
Label_987:
	var_257_bool = 0;
	func_1529(var_257_bool);
	if(var_257_bool != 0) {

	Label_991:
		lshWaitForAnimEnd();
		var_258_object = var_3_object;
		if(var_258_object != 0) {
		} else {
			var_259_string = "";
			var_259_string = var_2_object;
			func_1440(var_259_string);
			goto Label_991;
	}
		PlayAnimation("all", "idle");

	Label_1006:
		WaitForAnimEnd();
		var_262_object = var_3_object;
		if(var_262_object != 0) {
			goto Label_1016;
		}
		PlayAnimation("all", "idle");
		goto Label_1006;

	}
	goto Label_1016;
	
Label_1016:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x392";


func_1685(var_145_bool, var_146_object)
{
	var_147_bool = 0; var_148_object = Obj();
	var_146_object = var_148_object;
	func_1706(var_147_bool, var_148_object);
	if(var_147_bool != 0) {
		var_145_bool = 1;
		return 0;
	}
	var_145_bool = 0;
	return 0;
}


func_1559(var_44_object)
{
	var_45_object = Obj(); var_46_string = ""; var_47_float = 0;
	func_1766(Obj());
	var_48_object = var_45_object;
	func_1783(var_45_object, "pt_map_viktor", (float)2);
	var_68_object = Obj();
	func_1766(var_68_object);
	@@var_44_object:ShowMap(var_68_object);
	return 0;
}


func_1816(var_84_int)
{
	var_85_int = 0; var_86_int = 0;
	GetVariable("player", var_86_int);
	var_89_bool = var_86_int == (int)0;
	if(var_89_bool != 0) {
		var_84_int = 200001;
		return 2;
	EMIT "GOTO 0x727";
	}
	var_91_bool = var_86_int == (int)1;
	if(var_91_bool != 0) {
		var_84_int = 200002;
		return 2;
	}
	var_84_int = 200003;
	return 2;
}


func_1436()
{
	CameraSwitchToNormal();
	return 0;
}


func_1695(var_135_bool, var_136_object)
{
	var_137_int = 0; var_138_int = 0;
	@@var_136_object:GetItemCountOfType(var_138_int, "Rifle");
	var_141_bool = var_138_int >= (int)5;
	if(var_141_bool != 0) {
		var_135_bool = 1;
		return 2;
	}
	var_135_bool = 0;
	return 2;
}


func_1440(var_20_string)
{
	var_21_float = 0; var_22_float = 0; var_23_float = 0; var_24_float = 0;
	var_26_int = "playing " + var_20_string;
	Trace(var_26_int);
	lshGetAnimTimes(var_20_string, var_23_float, var_24_float);
	lshPlayAnimation(var_23_float, var_24_float);
	var_28_int = "start: " + var_23_float;
	Trace(var_28_int);
	var_30_int = "end: " + var_24_float;
	Trace(var_30_int);
	return 4;
}


func_545(var_0_object, var_1_object, var_2_object, var_3_object, var_160_object, var_161_object)
{
	var_0_object = var_161_object;
	var_1_object = var_160_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_167_bool = 0; var_168_object = Obj();
		var_168_object = var_1_object;
		func_1639(var_168_object);
		if(var_167_bool != 0) {
			var_173_object = Obj(); var_174_object = Obj();
			var_173_object = var_1_object;
			var_174_object = var_0_object;
			func_1575();
			var_177_string = "";
			func_628(var_161_object, "Neutral");
			@@@var_0_object:SetMessage((int)12330);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12331, (int)13491, (int)13490);
			@@@var_0_object:AddReply((int)12336, (int)-1, (int)13495);
		} else {
				var_197_string = "";
				func_628(var_161_object, "Neutral");
				@@@var_0_object:SetMessage((int)13781);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)13782, (int)-1, (int)15018);
				goto Label_598;
		}
	}
Label_598:
	var_189_bool = 0;
	func_1529(var_189_bool);
	if(var_189_bool != 0) {

	Label_602:
		lshWaitForAnimEnd();
		var_190_object = var_3_object;
		if(var_190_object != 0) {
		} else {
			var_191_string = "";
			var_191_string = var_2_object;
			func_1440(var_191_string);
			goto Label_602;
	}
		PlayAnimation("all", "idle");

	Label_617:
		WaitForAnimEnd();
		var_194_object = var_3_object;
		if(var_194_object != 0) {
			goto Label_627;
		}
		PlayAnimation("all", "idle");
		goto Label_617;

	}
	goto Label_627;
	
Label_627:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x225";


func_1575()
{
	SetVariable("ood8Han1", (int)1);
	return 0;
}


func_1833()
{
	var_58_object = Obj(); var_59_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_59_object, (int)185, (int)1, (int)15448);
	var_64_bool = 0; var_65_object = Obj(); var_66_int = 0;
	var_59_object = var_65_object;
	func_1737(var_64_bool, var_65_object, (int)182);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1706(var_147_bool, var_148_object)
{
	var_149_int = 0; var_150_int = 0;
	@@var_148_object:GetItemCountOfType(var_150_int, "Rifle");
	var_152_bool = 0;
	var_152_bool = 0;
	var_154_bool = var_150_int > (int)0;
	if(var_154_bool != 0) {
		var_156_bool = var_150_int < (int)5;
		if(var_156_bool != 0) {
			var_152_bool = 1;
		}
	}
	if(var_152_bool != 0) {
		var_147_bool = 1;
		return 2;
	}
	var_147_bool = 0;
	return 2;
}


func_1581()
{
	SetVariable("ood9Xan1", (int)1);
	return 0;
}


func_49(var_0_object, var_30_int, var_31_object)
{
	var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; var_37_object = Obj(); var_38_bool = 0; var_39_int = 0; var_40_bool = 0;
	var_0_object = var_31_object;
	var_41_bool = 0; var_42_object = Obj();
	var_31_object = var_42_object;
	func_1380(var_41_bool, var_42_object);
	var_81_bool = var_41_bool == 0; //@nz
	if(var_81_bool != 0) {
		var_30_int = -2;
		return 8;
	}
	CreateDialog(var_37_object);
	var_82_int = 0;
	func_1525(var_82_int);
	@@var_37_object:SetNPCName(var_82_int);
	var_83_string = "";
	func_1527(var_83_string);
	@@var_37_object:SetPhoto(var_83_string);
	var_84_int = 0;
	func_1816(var_84_int);
	@@var_37_object:SetPlayerName(var_84_int);
	IsOverrideActive(var_38_bool);
	var_92_bool = var_38_bool;
	if(var_92_bool != 0) {
		var_30_int = -2;
		return 8;
	}
	DoDialog(var_37_object);
	var_93_object = Obj(); var_94_object = Obj();
	var_31_object = var_93_object;
	var_37_object = var_94_object;
	TaskCall(3);
	func_112(var_95_object, var_96_object, var_97_string, var_98_bool, var_93_object, var_94_object);
	TaskReturn();
	@@var_37_object:IsDialogEnd(var_40_bool);
	
Label_94:
	var_138_bool = var_40_bool == 0; //@nz
	if(var_138_bool != 0) {
		sync();
		@@var_37_object:IsDialogEnd(var_40_bool);
		goto Label_94;
	}
	var_31_object = Obj();
	func_1436();
	StopDialog(var_37_object);
	@@var_37_object:GetReturnValue((int)-1);
	var_39_int = var_30_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1458()
{
	var_18_bool = 0;
	func_1529(var_18_bool);
	if(var_18_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_179(var_2_object, var_106_string)
{
	var_107_bool = 0;
	func_1529(var_107_bool);
	var_108_bool = var_107_bool == 0; //@nz
	if(var_108_bool != 0) {
		return 0;
	}
	var_109_bool = var_106_string == var_2_object;
	if(var_109_bool != 0) {
		return 0;
	}
	var_110_string = "";
	var_106_string = var_110_string;
	func_1440(var_110_string);
	var_2_object = var_106_string;
	return 0;
}


func_1587()
{
	SetVariable("d9q01", (int)2);
	func_1849();
	return 0;
}


func_1465(var_66_cvector, var_67_cvector)
{
	var_69_float = 0; var_70_float = 0;
	var_71_int = var_67_cvector | var_67_cvector;
	var_70_float = sqrt(var_71_int);
	var_72_float = 9.999999974752427e-07;
	var_73_bool = var_70_float < var_72_float;
	if(var_73_bool != 0) {
		var_66_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_66_cvector = var_67_cvector / var_70_float;
	return 2;
}


func_1849()
{
	var_25_object = Obj(); var_26_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_26_object, (int)184, (int)1, (int)15447);
	var_31_bool = 0; var_32_object = Obj(); var_33_int = 0;
	var_26_object = var_32_object;
	func_1737(var_31_bool, var_32_object, (int)182);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1596(var_85_object)
{
	var_87_int = 0; var_88_int = 0;
	@@var_85_object:RemoveItemByType(var_88_int, "Rifle", (int)5);
	return 2;
}


func_1724(var_40_object)
{
	var_41_object = Obj(); var_42_object = Obj();
	GetDiaryRoot(var_42_object);
	var_43_bool = var_42_object == 0; //@nz
	if(var_43_bool != 0) {
		Trace("Can't retrieve diary root");
		var_40_object = 0;
		return 2;
	}
	var_42_object = var_40_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1602(var_52_object)
{
	var_54_int = 0; var_55_int = 0;
	SetVariable("d9q01", (int)1000);
	func_1833();
	@@var_52_object:RemoveItemByType(var_55_int, "Rifle", (int)5);
	return 2;
}


func_1475(var_96_int, var_97_string)
{
	var_98_int = 0; var_99_int = 0;
	GetVariable(var_97_string, var_99_int);
	var_99_int = var_96_int;
	return 2;
}


func_1480(var_71_string, var_72_bool)
{
	var_73_object = Obj(); var_74_object = Obj();
	FindActor(var_74_object, var_71_string);
	var_75_bool = var_74_object == 0; //@nz
	if(var_75_bool != 0) {
		var_77_int = "Door " + var_71_string;
		var_79_int = var_77_int + " not found";
		Trace(var_79_int);
	}
	@@var_74_object:SetProperty("locked", var_72_bool);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1865()
{
	var_15_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	return 0;
}


func_1737(var_31_bool, var_32_object, var_33_int)
{
	var_34_object = Obj(); var_35_object = Obj(); var_36_int = 0; var_37_object = Obj(); var_38_object = Obj(); var_39_int = 0;
	func_1724(Obj());
	var_40_object = var_37_object;
	@@var_37_object:Find(var_33_int, var_38_object);
	var_45_bool = var_38_object == 0; //@nz
	if(var_45_bool != 0) {
		var_47_int = "Can't find diary parent with id: " + var_33_int;
		Trace(var_47_int);
		var_31_bool = 0;
		return 6;
	}
	@@var_38_object:AddChild(var_32_object);
	SetVariable("player_diary", (int)1);
	@@var_32_object:GetCategory(var_39_int);
	SetDiarySection(var_39_int);
	var_31_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1869(var_16_object)
{
	var_17_bool = GlobalVars[1];
	var_18_bool = var_17_bool == 0; //@nz
	if(var_18_bool != 0) {
		var_19_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
		return 0;
	}
	var_20_bool = 0; var_21_int = 0;
	func_1510(var_20_bool, (int)1);
	if(var_20_bool != 0) {
		return 0;
	}
	var_28_bool = 0; var_29_int = 0;
	func_1510(var_28_bool, (int)3);
	if(var_28_bool != 0) {
		var_30_int = 0; var_31_object = Obj();
		var_16_object = var_31_object;
		TaskCall(2);
		func_49(var_32_object, var_30_int, var_31_object);
		TaskReturn();
		return 0;
	}
	var_140_bool = 0; var_141_int = 0;
	func_1510(var_140_bool, (int)8);
	if(var_140_bool != 0) {
		var_142_int = 0; var_143_object = Obj();
		var_16_object = var_143_object;
		TaskCall(4);
		func_482(var_144_object, var_142_int, var_143_object);
		TaskReturn();
		return 0;
	}
	var_204_bool = 0; var_205_int = 0;
	func_1510(var_204_bool, (int)9);
	if(var_204_bool != 0) {
		var_206_int = 0; var_207_object = Obj();
		var_16_object = var_207_object;
		TaskCall(6);
		func_847(var_208_object, var_206_int, var_207_object);
		TaskReturn();
		return 0;
	}
	func_1516((bool)0);
	return 0;
}


func_1615()
{
	var_71_string = ""; var_72_bool = 0;
	func_1480("mnogogrannik@door1", (bool)0);
	return 0;
}


func_847(var_0_object, var_206_int, var_207_object)
{
	var_209_object = Obj(); var_210_bool = 0; var_211_int = 0; var_212_bool = 0; var_213_object = Obj(); var_214_bool = 0; var_215_int = 0; var_216_bool = 0;
	var_0_object = var_207_object;
	var_217_bool = 0; var_218_object = Obj();
	var_207_object = var_218_object;
	func_1380(var_217_bool, var_218_object);
	var_219_bool = var_217_bool == 0; //@nz
	if(var_219_bool != 0) {
		var_206_int = -2;
		return 8;
	}
	CreateDialog(var_213_object);
	var_220_int = 0;
	func_1525(var_220_int);
	@@var_213_object:SetNPCName(var_220_int);
	var_221_string = "";
	func_1527(var_221_string);
	@@var_213_object:SetPhoto(var_221_string);
	var_222_int = 0;
	func_1816(var_222_int);
	@@var_213_object:SetPlayerName(var_222_int);
	IsOverrideActive(var_214_bool);
	var_223_bool = var_214_bool;
	if(var_223_bool != 0) {
		var_206_int = -2;
		return 8;
	}
	DoDialog(var_213_object);
	var_224_object = Obj(); var_225_object = Obj();
	var_207_object = var_224_object;
	var_213_object = var_225_object;
	TaskCall(7);
	func_910(var_226_object, var_227_object, var_228_string, var_229_bool, var_224_object, var_225_object);
	TaskReturn();
	@@var_213_object:IsDialogEnd(var_216_bool);
	
Label_892:
	var_297_bool = var_216_bool == 0; //@nz
	if(var_297_bool != 0) {
		sync();
		@@var_213_object:IsDialogEnd(var_216_bool);
		goto Label_892;
	}
	var_207_object = Obj();
	func_1436();
	StopDialog(var_213_object);
	@@var_213_object:GetReturnValue((int)-1);
	var_215_int = var_206_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1363(var_16_bool, var_17_object)
{
	var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_bool = 0;
	@@var_17_object:GetPosition(var_22_cvector);
	GetPosition(var_23_cvector);
	var_24_cvector = var_22_cvector - var_23_cvector;
	var_26_float = GetByIndex(var_24_cvector, 0);
	var_27_float = GetByIndex(var_24_cvector, 2);
	Rotate(var_26_float, var_27_float, var_25_bool);
	var_25_bool = var_16_bool;
	return 8;
}


func_1622(var_104_bool)
{
	var_104_bool = 1;
	return 0;
}
EMIT "Stack[-2] = (bool) 0";
EMIT "Return(); Pop(0)";


func_1496(var_38_float)
{
	var_39_float = 0; var_40_float = 0;
	GetGameTime(var_40_float);
	var_40_float = var_38_float;
	return 2;
}


func_1627(var_96_bool)
{
	var_98_int = 0; var_99_string = "";
	func_1475(var_98_int, "d3q02");
	var_103_bool = var_98_int == (int)3;
	if(var_103_bool != 0) {
		var_96_bool = 1;
		return 0;
	}
	var_96_bool = 0;
	return 0;
}


func_1501(var_22_int)
{
	var_23_float = 0; var_24_float = 0;
	GetGameTime(var_24_float);
	var_26_int = 0;
	var_26_int = var_24_float / (int)24;
	var_22_int = (int)1 + var_26_int;
	return 2;
}


func_1375(var_16_bool)
{
	var_17_bool = 0; var_18_bool = 0;
	IsLoaded(var_18_bool);
	var_18_bool = var_16_bool;
	return 2;
}


func_482(var_0_object, var_142_int, var_143_object)
{
	var_145_object = Obj(); var_146_bool = 0; var_147_int = 0; var_148_bool = 0; var_149_object = Obj(); var_150_bool = 0; var_151_int = 0; var_152_bool = 0;
	var_0_object = var_143_object;
	var_153_bool = 0; var_154_object = Obj();
	var_143_object = var_154_object;
	func_1380(var_153_bool, var_154_object);
	var_155_bool = var_153_bool == 0; //@nz
	if(var_155_bool != 0) {
		var_142_int = -2;
		return 8;
	}
	CreateDialog(var_149_object);
	var_156_int = 0;
	func_1525(var_156_int);
	@@var_149_object:SetNPCName(var_156_int);
	var_157_string = "";
	func_1527(var_157_string);
	@@var_149_object:SetPhoto(var_157_string);
	var_158_int = 0;
	func_1816(var_158_int);
	@@var_149_object:SetPlayerName(var_158_int);
	IsOverrideActive(var_150_bool);
	var_159_bool = var_150_bool;
	if(var_159_bool != 0) {
		var_142_int = -2;
		return 8;
	}
	DoDialog(var_149_object);
	var_160_object = Obj(); var_161_object = Obj();
	var_143_object = var_160_object;
	var_149_object = var_161_object;
	TaskCall(5);
	func_545(var_162_object, var_163_object, var_164_string, var_165_bool, var_160_object, var_161_object);
	TaskReturn();
	@@var_149_object:IsDialogEnd(var_152_bool);
	
Label_527:
	var_202_bool = var_152_bool == 0; //@nz
	if(var_202_bool != 0) {
		sync();
		@@var_149_object:IsDialogEnd(var_152_bool);
		goto Label_527;
	}
	var_143_object = Obj();
	func_1436();
	StopDialog(var_149_object);
	@@var_149_object:GetReturnValue((int)-1);
	var_151_int = var_142_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1380(var_41_bool, var_42_object)
{
	var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_bool = 0;
	@@var_42_object:GetPosition(var_52_cvector);
	@@var_42_object:GetEyesHeight(var_51_float);
	var_59_float = GetByIndex(var_52_cvector, 1);
	var_59_float = var_59_float + var_51_float;
	SetByIndex(var_52_cvector, 1) = var_59_float;
	GetPosition(var_53_cvector);
	GetEyesHeight(var_51_float);
	var_60_float = GetByIndex(var_53_cvector, 1);
	var_60_float = var_60_float + var_51_float;
	SetByIndex(var_53_cvector, 1) = var_60_float;
	var_54_cvector = var_52_cvector - var_53_cvector;
	var_61_float = GetByIndex(var_54_cvector, 1);
	SetByIndex(var_54_cvector, 1) = (float)0;
	var_62_int = var_54_cvector | var_54_cvector;
	var_63_float = sqrt(var_62_int);
	var_54_cvector = var_54_cvector / var_63_float;
	var_55_cvector = -var_54_cvector;
	var_65_float = var_54_cvector * (int)70;
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0);
	var_67_cvector = var_55_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1465(var_66_cvector, var_67_cvector);
	var_75_float = var_66_cvector * (int)25;
	var_76_int = var_65_float + var_75_float;
	var_56_cvector = var_76_int - CVector(0.0, 10.0, 0.0);
	var_57_cvector = var_53_cvector + var_56_cvector;
	IsOverrideActive(var_58_bool);
	var_78_bool = var_58_bool;
	if(var_78_bool != 0) {
		var_41_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_57_cvector, var_55_cvector);
	var_79_float = GetByIndex(var_56_cvector, 0);
	var_80_float = GetByIndex(var_56_cvector, 2);
	Rotate(var_79_float, var_80_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_41_bool = 1;
	return 16;
}


func_1766(var_27_object)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj();
	GetMainOutdoorScene(var_30_object);
	var_32_bool = var_30_object == 0; //@ne
	if(var_32_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_31_object = 0;
		var_31_object = var_27_object;
		return 4;
	}
	@@var_30_object:GetMap(var_31_object);
	var_31_object = var_27_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1639(var_21_bool)
{
	var_23_int = 0; var_24_string = "";
	func_1475(var_23_int, "ood8Han1");
	var_28_bool = var_23_int == (int)0;
	if(var_28_bool != 0) {
		var_21_bool = 1;
		return 0;
	}
	var_21_bool = 0;
	return 0;
}


func_1510(var_20_bool, var_21_int)
{
	var_22_int = 0;
	func_1501(var_22_int);
	var_20_bool = var_22_int == var_21_int;
	return 0;
}


func_1516(var_299_bool)
{
	var_300_bool = 0; var_301_bool = 0;
	var_302_string = "";
	func_1440("No");
	lshWaitForAnimEnd(var_301_bool);
	var_301_bool = var_299_bool;
	return 2;
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_93_object, var_94_object)
{
	var_0_object = var_94_object;
	var_1_object = var_93_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_100_bool = 0;
		var_100_bool = 0;
		var_101_bool = 0; var_102_object = Obj();
		var_102_object = var_1_object;
		func_1627(var_102_object);
		if(var_101_bool != 0) {
			var_109_bool = 0; var_110_object = Obj();
			var_110_object = var_1_object;
			func_1622(var_110_object);
			if(var_109_bool != 0) {
				var_100_bool = 1;
			}
		}
		if(var_100_bool != 0) {
			var_111_string = "";
			func_179(var_94_object, "Neutral");
			@@@var_0_object:SetMessage((int)10420);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10421, (int)11490, (int)11489);
		} else {
				return 0;
		}
	}
	var_130_bool = 0;
	func_1529(var_130_bool);
	if(var_130_bool != 0) {

	Label_153:
		lshWaitForAnimEnd();
		var_131_object = var_3_object;
		if(var_131_object != 0) {
		} else {
			var_132_string = "";
			var_132_string = var_2_object;
			func_1440(var_132_string);
			goto Label_153;
	}
		PlayAnimation("all", "idle");

	Label_168:
		WaitForAnimEnd();
		var_135_object = var_3_object;
		if(var_135_object != 0) {
			goto Label_178;
		}
		PlayAnimation("all", "idle");
		goto Label_168;

	}
	goto Label_178;
	
Label_178:
	return 0;
	
}
EMIT "GOTO 0x74";


func_1651(var_94_bool)
{
	var_96_int = 0; var_97_string = "";
	func_1475(var_96_int, "d9q01");
	var_101_bool = var_96_int == (int)1;
	if(var_101_bool != 0) {
		var_94_bool = 1;
		return 0;
	}
	var_94_bool = 0;
	return 0;
}


func_628(var_2_object, var_33_string)
{
	var_34_bool = 0;
	func_1529(var_34_bool);
	var_35_bool = var_34_bool == 0; //@nz
	if(var_35_bool != 0) {
		return 0;
	}
	var_36_bool = var_33_string == var_2_object;
	if(var_36_bool != 0) {
		return 0;
	}
	var_37_string = "";
	var_33_string = var_37_string;
	func_1440(var_37_string);
	var_2_object = var_33_string;
	return 0;
}


func_1525(var_82_int)
{
	var_82_int = 2861;
	return 0;
}


func_1783(var_45_object, var_46_string, var_47_float)
{
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_object = Obj(); var_52_bool = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_object = Obj(); var_56_bool = 0;
	GetMainOutdoorScene(var_55_object);
	var_57_bool = var_55_object == 0; //@ne
	if(var_57_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_55_object:GetLocator(var_46_string, var_56_bool, var_53_cvector, var_54_cvector);
	var_59_bool = var_56_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_61_int = "Warning: outdoor scene locator " + var_46_string;
		var_63_int = var_61_int + " doesnt exist";
		Trace(var_63_int);
	}
	@@var_55_object:GetMap(var_45_object);
	var_64_bool = var_45_object == 0; //@ne
	if(var_64_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_66_float = GetByIndex(var_53_cvector, 0);
	var_67_float = GetByIndex(var_53_cvector, 2);
	@@var_45_object:SetMapParams(var_66_float, var_67_float, var_47_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_1529(var_18_bool)
{
	var_18_bool = 1;
	return 0;
}


func_1531()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_1017(var_2_object, var_112_string)
{
	var_113_bool = 0;
	func_1529(var_113_bool);
	var_114_bool = var_113_bool == 0; //@nz
	if(var_114_bool != 0) {
		return 0;
	}
	var_115_bool = var_112_string == var_2_object;
	if(var_115_bool != 0) {
		return 0;
	}
	var_116_string = "";
	var_112_string = var_116_string;
	func_1440(var_116_string);
	var_2_object = var_112_string;
	return 0;
}


func_1663(var_102_bool)
{
	var_104_int = 0; var_105_string = "";
	func_1475(var_104_int, "ood9Xan1");
	var_107_bool = var_104_int == (int)0;
	if(var_107_bool != 0) {
		var_102_bool = 1;
		return 0;
	}
	var_102_bool = 0;
	return 0;
}


