// @IMPORTS: Hold/0,StopGroup0/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,GetMainOutdoorScene/1,AddBlankActor/4,FindActor/2,GetGameTime/1,lshWaitForAnimEnd/1,SetVariable/2,TriggerWorld/2,GetDiaryRoot/1,SetDiarySection/1,CreateDiaryEntry/4
// @STRINGS: W:Neutral|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:.bin|W:Door |W: not found|W:locked|A:SetProperty|W:No|W:ui/NPC_Eva.png|W:ood1Eva3|W:KnowKaterina|W:KnowKapella|W:KnowTheater|W:KnowSquareMost|W:ood1Eva5|W:ood1Eva6|W:pt_map_georg|A:ShowMap|W:KnowUzly|W:ood2Eva1|W:ood2Eva2|W:ood2Eva3|W:ood2Eva4|W:KnowRebro|W:d2q02|W:d2q02EvaGotoAndrei|W:pt_map_andrei|A:AddMark|W:d2q02EvaGotoAndreiSelf|W:pt_map_eva|W:quest_d2_02|W:icot_eva@door1|W:KnowDubilschikov|W:d1q01EvaGotoSimon|W:d1EvaGotoMaria|W:pt_map_maria|W:d1EvaInfo|W:KnowGorny|W:KnowSobor|W:pt_map_theater|W:d1q01EvaAboutMark|W:d1EvaAboutKapella|W:pt_map_kapella|W:d1EvaAboutKaterina|W:pt_map_katerina|W:KnowStation|W:playsound|W:mapmark|W:ood1EvaIntro1|W:KnowJulia|W:KnowNevod|W:KnowViktor|W:ood1Eva4|W:ood1EvaIntro2|W:ood1Eva1|W:ood1Eva2|W:KnowEva|W:KnowGeorg|W:ood6Eva1|W:KnowMaria|W:KnowMark|W:d2q02EvaGotoMaria|W:ood3Eva1|W:ood4Eva1|W:KnowStamatins|W:KnowMnogogrannik|W:d1q01FirstGeorgVisit|W:d6q01|W:d4q02|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:player|W:Adding diary entry|W:d1q01
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
// @EVENT_11: op=0xdc vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x27e vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x5cd vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xaf1 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xdd7 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0xf1d vars=int,int
// @PE: 0x23,0x29,0x70,0xcc,0xdc,0x1e4,0x26e,0x27e,0x531,0x5bd,0x5cd,0xa50,0xae1,0xaf1,0xd88,0xdc7,0xdd7,0xec5,0xf0d,0xf1d,0x1038,0x108d,0x10a2,0x10a8,0x10ae,0x10b4,0x10ba,0x10c0,0x10c6,0x10cc,0x10dc,0x10e2,0x10e8,0x10ee,0x10f4,0x10fa,0x1127,0x112e,0x1156,0x115c,0x1162,0x119b,0x11a1,0x11a7,0x11ad,0x11b3,0x11b9,0x11bf,0x11c5,0x11cb,0x11d1,0x11d7,0x11dd,0x11e3,0x11e9,0x11ef,0x11f5,0x1215,0x1225,0x122b,0x1231,0x1237,0x123d,0x1249,0x1255,0x1261,0x126d,0x1279,0x1285,0x1291,0x129d,0x12a9,0x12b5,0x12c1,0x12cd,0x12d9,0x12e5,0x12f1,0x12fd,0x1309,0x1315,0x1321,0x132d,0x1339,0x1345,0x1351,0x13eb

task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool)
{
	StopGroup0();
	return 0;
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool)
{
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool)
{
	var_31_object = Obj();
	var_30_bool = var_31_object;
	func_5099(var_31_object);
	return 0;
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool)
{
	var_31_bool = 0; var_32_object = Obj();
	var_30_bool = var_32_object;
	func_4079(var_31_bool, var_32_object);
	WaitForAnimEnd();
	return 0;
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	if((int)1 != 0) {
		func_4174();
		var_35_bool = var_30_string == (int)4274;
		if(var_35_bool != 0) {
			var_36_bool = 0;
			var_36_bool = 0;
			var_37_bool = 0; var_38_object = Obj();
			var_38_object = var_1_object;
			func_4861(var_38_object);
			if(var_37_bool != 0) {
				var_45_bool = 0; var_46_object = Obj();
				var_46_object = var_1_object;
				func_4885(var_46_object);
				if(var_45_bool != 0) {
					var_36_bool = 1;
				}
			}
			if(var_36_bool != 0) {
				var_51_object = Obj(); var_52_object = Obj();
				var_51_object = var_1_object;
				var_52_object = var_0_object;
				func_4579();
				var_55_string = "";
				func_204(var_31_bool, "Neutral");
				@@@var_0_object:SetMessage((int)3926);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)3927, (int)4276, (int)4275);
				@@@var_0_object:AddReply((int)3929, (int)4278, (int)4277);
				return 0;
			}
			var_77_string = "";
			func_204(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13718);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13719, (int)-1, (int)14985);
			return 0;
		}
		var_83_bool = var_30_string == (int)4278;
		if(var_83_bool != 0) {
			var_84_string = "";
			func_204(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3930);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3931, (int)4276, (int)4279);
			@@@var_0_object:AddReply((int)3932, (int)4288, (int)4280);
			@@@var_0_object:AddReply((int)3933, (int)-1, (int)4281);
			return 0;
		}
		var_96_bool = var_30_string == (int)4276;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_204(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3928);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3937, (int)4288, (int)4286);
			@@@var_0_object:AddReply((int)3938, (int)4288, (int)4287);
			return 0;
		}
		var_106_bool = var_30_string == (int)4288;
		if(var_106_bool != 0) {
			var_107_string = "";
			func_204(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3939);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3940, (int)4297, (int)4291);
			@@@var_0_object:AddReply((int)3941, (int)4294, (int)4292);
			@@@var_0_object:AddReply((int)3942, (int)-1, (int)4293);
			return 0;
		}
		var_119_bool = var_30_string == (int)4294;
		if(var_119_bool != 0) {
			var_120_string = "";
			func_204(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3943);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3944, (int)-1, (int)4295);
			@@@var_0_object:AddReply((int)3945, (int)-1, (int)4296);
			return 0;
		}
		var_129_bool = var_30_string == (int)4297;
		if(var_129_bool != 0) {
			var_130_string = "";
			func_204(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3946);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3947, (int)-1, (int)4298);
			@@@var_0_object:AddReply((int)3948, (int)-1, (int)4299);
			return 0;
		}
		var_3_string = true;
		var_138_bool = 0;
		func_4256(var_138_bool);
		if(var_138_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xdd";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	if((int)1 != 0) {
		func_4174();
		var_35_bool = var_31_bool == (int)4915;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_4391();
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_4519();
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_4404();
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_object;
			func_4300(var_81_object);
		}
		var_107_bool = var_31_bool == (int)4900;
		if(var_107_bool != 0) {
			var_108_object = Obj(); var_109_object = Obj();
			var_108_object = var_1_object;
			var_109_object = var_0_object;
			func_4391();
			var_110_object = Obj(); var_111_object = Obj();
			var_110_object = var_1_object;
			var_111_object = var_0_object;
			func_4519();
			var_112_object = Obj(); var_113_object = Obj();
			var_112_object = var_1_object;
			var_113_object = var_0_object;
			func_4404();
			var_114_object = Obj(); var_115_object = Obj();
			var_114_object = var_1_object;
			var_115_object = var_0_object;
			func_4300(var_115_object);
		}
		var_117_bool = var_31_bool == (int)5020;
		if(var_117_bool != 0) {
			var_118_object = Obj(); var_119_object = Obj();
			var_118_object = var_1_object;
			var_119_object = var_0_object;
			func_4549();
		}
		var_123_bool = var_31_bool == (int)5021;
		if(var_123_bool != 0) {
			var_124_object = Obj(); var_125_object = Obj();
			var_124_object = var_1_object;
			var_125_object = var_0_object;
			func_4549();
		}
		var_127_bool = var_30_string == (int)4899;
		if(var_127_bool != 0) {
			var_128_bool = 0; var_129_object = Obj();
			var_129_object = var_1_object;
			func_4669(var_129_object);
			if(var_128_bool != 0) {
				var_136_object = Obj(); var_137_object = Obj();
				var_136_object = var_1_object;
				var_137_object = var_0_object;
				func_4567();
				var_140_string = "";
				func_622(var_31_bool, "Neutral");
				@@@var_0_object:SetMessage((int)4496);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)4501, (int)4905, (int)4904);
				@@@var_0_object:AddReply((int)4517, (int)4923, (int)4922);
				@@@var_0_object:AddReply((int)4521, (int)4923, (int)4928);
				return 0;
			}
			var_165_bool = 0; var_166_object = Obj();
			var_166_object = var_1_object;
			func_4717(var_166_object);
			if(var_165_bool != 0) {
				var_171_object = Obj(); var_172_object = Obj();
				var_171_object = var_1_object;
				var_172_object = var_0_object;
				func_4567();
				var_173_string = "";
				func_622(var_31_bool, "Neutral");
				@@@var_0_object:SetMessage((int)4590);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)4591, (int)5013, (int)5012);
				@@@var_0_object:AddReply((int)4607, (int)5015, (int)5032);
				@@@var_0_object:AddReply((int)4608, (int)5015, (int)5034);
				return 0;
			}
			var_184_object = Obj(); var_185_object = Obj();
			var_184_object = var_1_object;
			var_185_object = var_0_object;
			func_4444();
			var_188_object = Obj(); var_189_object = Obj();
			var_188_object = var_1_object;
			var_189_object = var_0_object;
			func_4567();
			var_190_string = "";
			func_622(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4568);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4569, (int)4989, (int)4988);
			@@@var_0_object:AddReply((int)4586, (int)5007, (int)5006);
			return 0;
		}
		var_199_bool = var_30_string == (int)5007;
		if(var_199_bool != 0) {
			var_200_string = "";
			func_622(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4587);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4588, (int)4993, (int)5008);
			@@@var_0_object:AddReply((int)4589, (int)5001, (int)5009);
			return 0;
		}
		var_209_bool = var_30_string == (int)4989;
		if(var_209_bool != 0) {
			var_210_string = "";
			func_622(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4570);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4571, (int)4991, (int)4990);
			@@@var_0_object:AddReply((int)4580, (int)5001, (int)5000);
			return 0;
		}
		var_219_bool = var_30_string == (int)5001;
		if(var_219_bool != 0) {
			var_220_object = Obj(); var_221_object = Obj();
			var_220_object = var_1_object;
			var_221_object = var_0_object;
			func_4525();
			var_224_string = "";
			func_622(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4581);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4582, (int)5003, (int)5002);
			@@@var_0_object:AddReply((int)4585, (int)4993, (int)5005);
			return 0;
		}
		var_233_bool = var_30_string == (int)5003;
		if(var_233_bool != 0) {
			var_234_object = Obj(); var_235_object = Obj();
			var_234_object = var_1_object;
			var_235_object = var_0_object;
			func_4346();
			var_238_object = Obj(); var_239_object = Obj();
			var_238_object = var_1_object;
			var_239_object = var_0_object;
			func_4531();
			var_242_string = "";
			func_622(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4583);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4584, (int)4993, (int)5004);
			return 0;
		}
		var_248_bool = var_30_string == (int)4991;
		if(var_248_bool != 0) {
			var_249_string = "";
			func_622(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4572);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4573, (int)4993, (int)4992);
			@@@var_0_object:AddReply((int)4579, (int)4993, (int)4998);
			return 0;
		}
		var_258_bool = var_30_string == (int)4993;
		if(var_258_bool != 0) {
			var_259_string = "";
			func_622(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4574);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4575, (int)-1, (int)4994);
			@@@var_0_object:AddReply((int)4576, (int)4996, (int)4995);
			return 0;
		}
		var_268_bool = var_30_string == (int)4996;
		if(var_268_bool != 0) {
			var_269_string = "";
			func_622(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4577);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4578, (int)-1, (int)4997);
			return 0;
		}
		var_275_bool = var_30_string == (int)5013;
		if(var_275_bool != 0) {
			var_276_string = "";
			func_622(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4592);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4593, (int)5015, (int)5014);
			@@@var_0_object:AddReply((int)4603, (int)5027, (int)5026);
			return 0;
		}
		var_285_bool = var_30_string == (int)5027;
		if(var_285_bool != 0) {
			var_286_string = "";
			func_622(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4604);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4605, (int)5015, (int)5028);
			@@@var_0_object:AddReply((int)4606, (int)5015, (int)5030);
			return 0;
		}
		var_295_bool = var_30_string == (int)5015;
		if(var_295_bool != 0) {
			var_296_string = "";
			func_622(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4594);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4595, (int)5017, (int)5016);
			@@@var_0_object:AddReply((int)4602, (int)5019, (int)5024);
			return 0;
		}
		var_305_bool = var_30_string == (int)5017;
		if(var_305_bool != 0) {
			var_306_string = "";
			func_622(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4596);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4597, (int)5019, (int)5018);
			@@@var_0_object:AddReply((int)4601, (int)5019, (int)5022);
			return 0;
		}
		var_315_bool = var_30_string == (int)5019;
		if(var_315_bool != 0) {
			var_316_string = "";
			func_622(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4598);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4599, (int)-1, (int)5020);
			@@@var_0_object:AddReply((int)4600, (int)-1, (int)5021);
			return 0;
		}
		var_325_bool = var_30_string == (int)4923;
		if(var_325_bool != 0) {
			var_326_string = "";
			func_622(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4518);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4519, (int)4907, (int)4924);
			@@@var_0_object:AddReply((int)4520, (int)4907, (int)4926);
			return 0;
		}
		var_335_bool = var_30_string == (int)4905;
		if(var_335_bool != 0) {
			var_336_string = "";
			func_622(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4502);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4503, (int)4907, (int)4906);
			@@@var_0_object:AddReply((int)4515, (int)4923, (int)4918);
			@@@var_0_object:AddReply((int)4516, (int)4907, (int)4920);
			return 0;
		}
		var_348_bool = var_30_string == (int)4907;
		if(var_348_bool != 0) {
			var_349_string = "";
			func_622(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4504);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4505, (int)4909, (int)4908);
			return 0;
		}
		var_355_bool = var_30_string == (int)4909;
		if(var_355_bool != 0) {
			var_356_string = "";
			func_622(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4506);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4507, (int)4911, (int)4910);
			@@@var_0_object:AddReply((int)4514, (int)4911, (int)4917);
			return 0;
		}
		var_365_bool = var_30_string == (int)4911;
		if(var_365_bool != 0) {
			var_366_string = "";
			func_622(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4508);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4509, (int)4913, (int)4912);
			@@@var_0_object:AddReply((int)4513, (int)4913, (int)4916);
			return 0;
		}
		var_375_bool = var_30_string == (int)4913;
		if(var_375_bool != 0) {
			var_376_object = Obj(); var_377_object = Obj();
			var_376_object = var_1_object;
			var_377_object = var_0_object;
			func_4438();
			var_380_object = Obj(); var_381_object = Obj();
			var_380_object = var_1_object;
			var_381_object = var_0_object;
			func_4282();
			var_384_object = Obj(); var_385_object = Obj();
			var_384_object = var_1_object;
			var_385_object = var_0_object;
			func_4585();
			var_388_object = Obj(); var_389_object = Obj();
			var_388_object = var_1_object;
			var_389_object = var_0_object;
			func_4537();
			var_392_object = Obj(); var_393_object = Obj();
			var_392_object = var_1_object;
			var_393_object = var_0_object;
			func_4573();
			var_396_string = "";
			func_622(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4510);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4512, (int)-1, (int)4915);
			@@@var_0_object:AddReply((int)4497, (int)-1, (int)4900);
			return 0;
		}
		var_3_string = true;
		var_404_bool = 0;
		func_4256(var_404_bool);
		if(var_404_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x27f";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	if((int)1 != 0) {
		func_4174();
		var_35_bool = var_31_bool == (int)5094;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_4561();
			var_40_object = Obj(); var_41_object = Obj();
			var_40_object = var_1_object;
			var_41_object = var_0_object;
			func_4466();
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_object;
			func_4450(var_59_object);
		}
		var_85_bool = var_31_bool == (int)5095;
		if(var_85_bool != 0) {
			var_86_object = Obj(); var_87_object = Obj();
			var_86_object = var_1_object;
			var_87_object = var_0_object;
			func_4561();
			var_88_object = Obj(); var_89_object = Obj();
			var_88_object = var_1_object;
			var_89_object = var_0_object;
			func_4466();
			var_90_object = Obj(); var_91_object = Obj();
			var_90_object = var_1_object;
			var_91_object = var_0_object;
			func_4450(var_91_object);
		}
		var_93_bool = var_31_bool == (int)5096;
		if(var_93_bool != 0) {
			var_94_object = Obj(); var_95_object = Obj();
			var_94_object = var_1_object;
			var_95_object = var_0_object;
			func_4561();
			var_96_object = Obj(); var_97_object = Obj();
			var_96_object = var_1_object;
			var_97_object = var_0_object;
			func_4466();
			var_98_object = Obj(); var_99_object = Obj();
			var_98_object = var_1_object;
			var_99_object = var_0_object;
			func_4450(var_99_object);
		}
		var_101_bool = var_31_bool == (int)5051;
		if(var_101_bool != 0) {
			var_102_object = Obj(); var_103_object = Obj();
			var_102_object = var_1_object;
			var_103_object = var_0_object;
			func_4555();
		}
		var_107_bool = var_31_bool == (int)5082;
		if(var_107_bool != 0) {
			var_108_object = Obj(); var_109_object = Obj();
			var_108_object = var_1_object;
			var_109_object = var_0_object;
			func_4555();
		}
		var_111_bool = var_31_bool == (int)5079;
		if(var_111_bool != 0) {
			var_112_object = Obj(); var_113_object = Obj();
			var_112_object = var_1_object;
			var_113_object = var_0_object;
			func_4555();
		}
		var_115_bool = var_31_bool == (int)5078;
		if(var_115_bool != 0) {
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_4555();
		}
		var_119_bool = var_31_bool == (int)5074;
		if(var_119_bool != 0) {
			var_120_object = Obj(); var_121_object = Obj();
			var_120_object = var_1_object;
			var_121_object = var_0_object;
			func_4555();
		}
		var_123_bool = var_31_bool == (int)5075;
		if(var_123_bool != 0) {
			var_124_object = Obj(); var_125_object = Obj();
			var_124_object = var_1_object;
			var_125_object = var_0_object;
			func_4555();
		}
		var_127_bool = var_31_bool == (int)5111;
		if(var_127_bool != 0) {
			var_128_object = Obj(); var_129_object = Obj();
			var_128_object = var_1_object;
			var_129_object = var_0_object;
			func_4258();
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_4482();
			var_147_object = Obj(); var_148_object = Obj();
			var_147_object = var_1_object;
			var_148_object = var_0_object;
			func_4513();
		}
		var_152_bool = var_31_bool == (int)5116;
		if(var_152_bool != 0) {
			var_153_object = Obj(); var_154_object = Obj();
			var_153_object = var_1_object;
			var_154_object = var_0_object;
			func_4258();
			var_155_object = Obj(); var_156_object = Obj();
			var_155_object = var_1_object;
			var_156_object = var_0_object;
			func_4482();
			var_157_object = Obj(); var_158_object = Obj();
			var_157_object = var_1_object;
			var_158_object = var_0_object;
			func_4513();
		}
		var_160_bool = var_31_bool == (int)5113;
		if(var_160_bool != 0) {
			var_161_object = Obj(); var_162_object = Obj();
			var_161_object = var_1_object;
			var_162_object = var_0_object;
			func_4258();
			var_163_object = Obj(); var_164_object = Obj();
			var_163_object = var_1_object;
			var_164_object = var_0_object;
			func_4482();
			var_165_object = Obj(); var_166_object = Obj();
			var_165_object = var_1_object;
			var_166_object = var_0_object;
			func_4513();
		}
		var_168_bool = var_31_bool == (int)5320;
		if(var_168_bool != 0) {
			var_169_object = Obj(); var_170_object = Obj();
			var_169_object = var_1_object;
			var_170_object = var_0_object;
			func_4543();
		}
		var_174_bool = var_31_bool == (int)6967;
		if(var_174_bool != 0) {
			var_175_object = Obj(); var_176_object = Obj();
			var_175_object = var_1_object;
			var_176_object = var_0_object;
			func_4288();
		}
		var_180_bool = var_31_bool == (int)6968;
		if(var_180_bool != 0) {
			var_181_object = Obj(); var_182_object = Obj();
			var_181_object = var_1_object;
			var_182_object = var_0_object;
			func_4288();
		}
		var_184_bool = var_31_bool == (int)6977;
		if(var_184_bool != 0) {
			var_185_object = Obj(); var_186_object = Obj();
			var_185_object = var_1_object;
			var_186_object = var_0_object;
			func_4294();
		}
		var_190_bool = var_30_string == (int)5040;
		if(var_190_bool != 0) {
			var_191_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4610);
			@@@var_0_object:ClearReplies();
			var_207_bool = 0; var_208_object = Obj();
			var_208_object = var_1_object;
			func_4837(var_208_object);
			if(var_207_bool != 0) {
				@@@var_0_object:AddReply((int)4612, (int)5058, (int)5042);
			}
			var_218_bool = 0; var_219_object = Obj();
			var_219_object = var_1_object;
			func_4813(var_219_object);
			if(var_218_bool != 0) {
				@@@var_0_object:AddReply((int)4611, (int)5056, (int)5041);
			}
			var_227_bool = 0; var_228_object = Obj();
			var_228_object = var_1_object;
			func_4873(var_228_object);
			if(var_227_bool != 0) {
				@@@var_0_object:AddReply((int)4613, (int)5097, (int)5043);
			}
			var_236_bool = 0;
			var_236_bool = 0;
			var_237_bool = 0; var_238_object = Obj();
			var_238_object = var_1_object;
			func_4825(var_238_object);
			if(var_237_bool != 0) {
				var_243_bool = 0; var_244_object = Obj();
				var_244_object = var_1_object;
				func_4681(var_244_object);
				if(var_243_bool != 0) {
					var_236_bool = 1;
				}
			}
			if(var_236_bool != 0) {
				@@@var_0_object:AddReply((int)4846, (int)5319, (int)5318);
			}
			var_252_bool = 0;
			var_252_bool = 0;
			var_253_bool = 0; var_254_object = Obj();
			var_254_object = var_1_object;
			func_4897(var_254_object);
			if(var_253_bool != 0) {
				var_259_bool = 0; var_260_object = Obj();
				var_260_object = var_1_object;
				func_4693(var_260_object);
				if(var_259_bool != 0) {
					var_252_bool = 1;
				}
			}
			if(var_252_bool != 0) {
				@@@var_0_object:AddReply((int)6299, (int)6952, (int)6951);
			}
			var_268_bool = 0;
			var_268_bool = 0;
			var_269_bool = 0; var_270_object = Obj();
			var_270_object = var_1_object;
			func_4705(var_270_object);
			if(var_269_bool != 0) {
				var_275_bool = 0; var_276_object = Obj();
				var_276_object = var_1_object;
				func_4945(var_276_object);
				if(var_275_bool != 0) {
					var_268_bool = 1;
				}
			}
			if(var_268_bool != 0) {
				@@@var_0_object:AddReply((int)6314, (int)6970, (int)6969);
			}
			@@@var_0_object:AddReply((int)4614, (int)-1, (int)5044);
			return 0;
		}
		var_288_bool = var_30_string == (int)6970;
		if(var_288_bool != 0) {
			var_289_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6315);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6316, (int)6972, (int)6971);
			return 0;
		}
		var_295_bool = var_30_string == (int)6972;
		if(var_295_bool != 0) {
			var_296_object = Obj(); var_297_object = Obj();
			var_296_object = var_1_object;
			var_297_object = var_0_object;
			func_4663();
			var_300_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6317);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6318, (int)6974, (int)6973);
			return 0;
		}
		var_306_bool = var_30_string == (int)6974;
		if(var_306_bool != 0) {
			var_307_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6319);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6320, (int)6976, (int)6975);
			return 0;
		}
		var_313_bool = var_30_string == (int)6976;
		if(var_313_bool != 0) {
			var_314_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6321);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6322, (int)5040, (int)6977);
			return 0;
		}
		var_320_bool = var_30_string == (int)6952;
		if(var_320_bool != 0) {
			var_321_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6300);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6301, (int)6956, (int)6953);
			@@@var_0_object:AddReply((int)6302, (int)6956, (int)6954);
			@@@var_0_object:AddReply((int)6303, (int)6956, (int)6955);
			return 0;
		}
		var_333_bool = var_30_string == (int)6956;
		if(var_333_bool != 0) {
			var_334_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6304);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6305, (int)6963, (int)6959);
			@@@var_0_object:AddReply((int)6306, (int)6961, (int)6960);
			return 0;
		}
		var_343_bool = var_30_string == (int)6961;
		if(var_343_bool != 0) {
			var_344_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6307);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6308, (int)6963, (int)6962);
			return 0;
		}
		var_350_bool = var_30_string == (int)6963;
		if(var_350_bool != 0) {
			var_351_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6309);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6310, (int)6965, (int)6964);
			return 0;
		}
		var_357_bool = var_30_string == (int)6965;
		if(var_357_bool != 0) {
			var_358_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6311);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6312, (int)5040, (int)6967);
			@@@var_0_object:AddReply((int)6313, (int)5040, (int)6968);
			return 0;
		}
		var_367_bool = var_30_string == (int)5319;
		if(var_367_bool != 0) {
			var_368_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4847);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6295, (int)6948, (int)6947);
			return 0;
		}
		var_374_bool = var_30_string == (int)6948;
		if(var_374_bool != 0) {
			var_375_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6296);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6297, (int)6950, (int)6949);
			@@@var_0_object:AddReply((int)6323, (int)6950, (int)6978);
			return 0;
		}
		var_384_bool = var_30_string == (int)6950;
		if(var_384_bool != 0) {
			var_385_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6298);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4848, (int)5040, (int)5320);
			return 0;
		}
		var_391_bool = var_30_string == (int)5097;
		if(var_391_bool != 0) {
			var_392_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4661);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4662, (int)5100, (int)5098);
			@@@var_0_object:AddReply((int)4663, (int)5100, (int)5099);
			return 0;
		}
		var_401_bool = var_30_string == (int)5100;
		if(var_401_bool != 0) {
			var_402_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4664);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4665, (int)5103, (int)5102);
			@@@var_0_object:AddReply((int)4667, (int)5105, (int)5104);
			return 0;
		}
		var_411_bool = var_30_string == (int)5105;
		if(var_411_bool != 0) {
			var_412_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4668);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4669, (int)5103, (int)5106);
			return 0;
		}
		var_418_bool = var_30_string == (int)5103;
		if(var_418_bool != 0) {
			var_419_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4666);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4670, (int)5108, (int)5107);
			@@@var_0_object:AddReply((int)4675, (int)5040, (int)5113);
			return 0;
		}
		var_428_bool = var_30_string == (int)5108;
		if(var_428_bool != 0) {
			var_429_object = Obj(); var_430_object = Obj();
			var_429_object = var_1_object;
			var_430_object = var_0_object;
			func_4264();
			var_433_object = Obj(); var_434_object = Obj();
			var_433_object = var_1_object;
			var_434_object = var_0_object;
			func_4398();
			var_437_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4671);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4672, (int)5110, (int)5109);
			@@@var_0_object:AddReply((int)4676, (int)5110, (int)5114);
			return 0;
		}
		var_446_bool = var_30_string == (int)5110;
		if(var_446_bool != 0) {
			var_447_object = Obj(); var_448_object = Obj();
			var_447_object = var_1_object;
			var_448_object = var_0_object;
			func_4270();
			var_451_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4673);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4674, (int)5040, (int)5111);
			@@@var_0_object:AddReply((int)4677, (int)5040, (int)5116);
			return 0;
		}
		var_460_bool = var_30_string == (int)5056;
		if(var_460_bool != 0) {
			var_461_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4624);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7659, (int)8453, (int)8452);
			return 0;
		}
		var_467_bool = var_30_string == (int)8453;
		if(var_467_bool != 0) {
			var_468_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7660);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7661, (int)8458, (int)8454);
			@@@var_0_object:AddReply((int)7662, (int)8458, (int)8455);
			return 0;
		}
		var_477_bool = var_30_string == (int)8458;
		if(var_477_bool != 0) {
			var_478_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7664);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7665, (int)8456, (int)8459);
			return 0;
		}
		var_484_bool = var_30_string == (int)8456;
		if(var_484_bool != 0) {
			var_485_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7663);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4625, (int)5045, (int)5057);
			@@@var_0_object:AddReply((int)4635, (int)5069, (int)5068);
			return 0;
		}
		var_494_bool = var_30_string == (int)5069;
		if(var_494_bool != 0) {
			var_495_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4636);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4637, (int)5072, (int)5070);
			@@@var_0_object:AddReply((int)4638, (int)5072, (int)5071);
			return 0;
		}
		var_504_bool = var_30_string == (int)5072;
		if(var_504_bool != 0) {
			var_505_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4639);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4642, (int)5077, (int)5076);
			@@@var_0_object:AddReply((int)4640, (int)5040, (int)5074);
			@@@var_0_object:AddReply((int)4641, (int)5040, (int)5075);
			return 0;
		}
		var_517_bool = var_30_string == (int)5077;
		if(var_517_bool != 0) {
			var_518_object = Obj(); var_519_object = Obj();
			var_518_object = var_1_object;
			var_519_object = var_0_object;
			func_4657();
			var_522_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4643);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4646, (int)5081, (int)5080);
			@@@var_0_object:AddReply((int)4645, (int)5040, (int)5079);
			@@@var_0_object:AddReply((int)4644, (int)5040, (int)5078);
			return 0;
		}
		var_534_bool = var_30_string == (int)5081;
		if(var_534_bool != 0) {
			var_535_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4647);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4648, (int)5040, (int)5082);
			return 0;
		}
		var_541_bool = var_30_string == (int)5045;
		if(var_541_bool != 0) {
			var_542_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4615);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4616, (int)5047, (int)5046);
			@@@var_0_object:AddReply((int)4623, (int)5047, (int)5054);
			return 0;
		}
		var_551_bool = var_30_string == (int)5047;
		if(var_551_bool != 0) {
			var_552_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4617);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4618, (int)5049, (int)5048);
			@@@var_0_object:AddReply((int)4622, (int)5065, (int)5052);
			return 0;
		}
		var_561_bool = var_30_string == (int)5065;
		if(var_561_bool != 0) {
			var_562_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4633);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4634, (int)5049, (int)5066);
			return 0;
		}
		var_568_bool = var_30_string == (int)5049;
		if(var_568_bool != 0) {
			var_569_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4619);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4621, (int)5040, (int)5051);
			return 0;
		}
		var_575_bool = var_30_string == (int)5058;
		if(var_575_bool != 0) {
			var_576_object = Obj(); var_577_object = Obj();
			var_576_object = var_1_object;
			var_577_object = var_0_object;
			func_4591();
			var_580_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4626);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4627, (int)5086, (int)5059);
			@@@var_0_object:AddReply((int)4628, (int)5061, (int)5060);
			return 0;
		}
		var_589_bool = var_30_string == (int)5061;
		if(var_589_bool != 0) {
			var_590_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4629);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4630, (int)5086, (int)5062);
			return 0;
		}
		var_596_bool = var_30_string == (int)5086;
		if(var_596_bool != 0) {
			var_597_object = Obj(); var_598_object = Obj();
			var_597_object = var_1_object;
			var_598_object = var_0_object;
			func_4276();
			var_601_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4652);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4653, (int)5089, (int)5088);
			@@@var_0_object:AddReply((int)4655, (int)5089, (int)5090);
			return 0;
		}
		var_610_bool = var_30_string == (int)5089;
		if(var_610_bool != 0) {
			var_611_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4654);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4656, (int)5093, (int)5092);
			@@@var_0_object:AddReply((int)4660, (int)-1, (int)5096);
			return 0;
		}
		var_620_bool = var_30_string == (int)5093;
		if(var_620_bool != 0) {
			var_621_string = "";
			func_1469(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4657);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4658, (int)-1, (int)5094);
			@@@var_0_object:AddReply((int)4659, (int)-1, (int)5095);
			return 0;
		}
		var_3_string = true;
		var_629_bool = 0;
		func_4256(var_629_bool);
		if(var_629_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x5ce";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	if((int)1 != 0) {
		func_4174();
		var_35_bool = var_31_bool == (int)8026;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_4322();
			var_40_object = Obj(); var_41_object = Obj();
			var_40_object = var_1_object;
			var_41_object = var_0_object;
			func_4352();
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_4597(var_108_object);
		}
		var_134_bool = var_31_bool == (int)8027;
		if(var_134_bool != 0) {
			var_135_object = Obj(); var_136_object = Obj();
			var_135_object = var_1_object;
			var_136_object = var_0_object;
			func_4322();
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_object;
			func_4352();
		}
		var_140_bool = var_31_bool == (int)8028;
		if(var_140_bool != 0) {
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_object;
			func_4322();
		}
		var_144_bool = var_31_bool == (int)8018;
		if(var_144_bool != 0) {
			var_145_object = Obj(); var_146_object = Obj();
			var_145_object = var_1_object;
			var_146_object = var_0_object;
			func_4322();
		}
		var_148_bool = var_31_bool == (int)8009;
		if(var_148_bool != 0) {
			var_149_object = Obj(); var_150_object = Obj();
			var_149_object = var_1_object;
			var_150_object = var_0_object;
			func_4322();
		}
		var_152_bool = var_31_bool == (int)8037;
		if(var_152_bool != 0) {
			var_153_object = Obj(); var_154_object = Obj();
			var_153_object = var_1_object;
			var_154_object = var_0_object;
			func_4328();
			var_157_object = Obj(); var_158_object = Obj();
			var_157_object = var_1_object;
			var_158_object = var_0_object;
			func_4613();
			var_167_object = Obj(); var_168_object = Obj();
			var_167_object = var_1_object;
			var_168_object = var_0_object;
			func_4629(var_168_object);
		}
		var_175_bool = var_31_bool == (int)8033;
		if(var_175_bool != 0) {
			var_176_object = Obj(); var_177_object = Obj();
			var_176_object = var_1_object;
			var_177_object = var_0_object;
			func_4328();
		}
		var_179_bool = var_31_bool == (int)8042;
		if(var_179_bool != 0) {
			var_180_object = Obj(); var_181_object = Obj();
			var_180_object = var_1_object;
			var_181_object = var_0_object;
			func_4334();
		}
		var_185_bool = var_31_bool == (int)8045;
		if(var_185_bool != 0) {
			var_186_object = Obj(); var_187_object = Obj();
			var_186_object = var_1_object;
			var_187_object = var_0_object;
			func_4340();
		}
		var_191_bool = var_31_bool == (int)8046;
		if(var_191_bool != 0) {
			var_192_object = Obj(); var_193_object = Obj();
			var_192_object = var_1_object;
			var_193_object = var_0_object;
			func_4340();
		}
		var_195_bool = var_31_bool == (int)12591;
		if(var_195_bool != 0) {
			var_196_object = Obj(); var_197_object = Obj();
			var_196_object = var_1_object;
			var_197_object = var_0_object;
			func_4352();
			var_198_object = Obj(); var_199_object = Obj();
			var_198_object = var_1_object;
			var_199_object = var_0_object;
			func_4597(var_199_object);
		}
		var_201_bool = var_30_string == (int)7559;
		if(var_201_bool != 0) {
			var_202_bool = 0; var_203_object = Obj();
			var_203_object = var_1_object;
			func_4729(var_203_object);
			if(var_202_bool != 0) {
				var_210_string = "";
				func_2785(var_31_bool, "Neutral");
				@@@var_0_object:SetMessage((int)6853);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)6854, (int)7890, (int)7560);
				@@@var_0_object:AddReply((int)7262, (int)7890, (int)8004);
				return 0;
			}
			var_232_string = "";
			func_2785(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6855);
			@@@var_0_object:ClearReplies();
			var_234_bool = 0;
			var_234_bool = 0;
			var_235_bool = 0; var_236_object = Obj();
			var_236_object = var_1_object;
			func_4741(var_236_object);
			if(var_235_bool != 0) {
				var_241_bool = 0; var_242_object = Obj();
				var_242_object = var_1_object;
				func_4789(var_242_object);
				if(var_241_bool != 0) {
					var_234_bool = 1;
				}
			}
			if(var_234_bool != 0) {
				@@@var_0_object:AddReply((int)6856, (int)7563, (int)7562);
			}
			var_250_bool = 0;
			var_250_bool = 0;
			var_251_bool = 0; var_252_object = Obj();
			var_252_object = var_1_object;
			func_4753(var_252_object);
			if(var_251_bool != 0) {
				var_257_bool = 0; var_258_object = Obj();
				var_258_object = var_1_object;
				func_4801(var_258_object);
				if(var_257_bool != 0) {
					var_250_bool = 1;
				}
			}
			if(var_250_bool != 0) {
				@@@var_0_object:AddReply((int)6859, (int)7566, (int)7565);
			}
			var_266_bool = 0;
			var_266_bool = 0;
			var_267_bool = 0; var_268_object = Obj();
			var_268_object = var_1_object;
			func_4765(var_268_object);
			if(var_267_bool != 0) {
				var_273_bool = 0; var_274_object = Obj();
				var_274_object = var_1_object;
				func_4777(var_274_object);
				if(var_273_bool != 0) {
					var_266_bool = 1;
				}
			}
			if(var_266_bool != 0) {
				@@@var_0_object:AddReply((int)6861, (int)7568, (int)7567);
			}
			var_282_bool = 0; var_283_object = Obj();
			var_283_object = var_1_object;
			func_4849(var_283_object);
			if(var_282_bool != 0) {
				@@@var_0_object:AddReply((int)11392, (int)12590, (int)12589);
			}
			@@@var_0_object:AddReply((int)7528, (int)-1, (int)8310);
			return 0;
		}
		var_295_bool = var_30_string == (int)12590;
		if(var_295_bool != 0) {
			var_296_string = "";
			func_2785(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11393);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11394, (int)-1, (int)12591);
			return 0;
		}
		var_302_bool = var_30_string == (int)7568;
		if(var_302_bool != 0) {
			var_303_string = "";
			func_2785(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6862);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7296, (int)8044, (int)8043);
			return 0;
		}
		var_309_bool = var_30_string == (int)8044;
		if(var_309_bool != 0) {
			var_310_string = "";
			func_2785(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7297);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7298, (int)-1, (int)8045);
			@@@var_0_object:AddReply((int)7299, (int)-1, (int)8046);
			return 0;
		}
		var_319_bool = var_30_string == (int)7566;
		if(var_319_bool != 0) {
			var_320_object = Obj(); var_321_object = Obj();
			var_320_object = var_1_object;
			var_321_object = var_0_object;
			func_4316();
			var_324_string = "";
			func_2785(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6860);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7295, (int)-1, (int)8042);
			return 0;
		}
		var_330_bool = var_30_string == (int)7563;
		if(var_330_bool != 0) {
			var_331_string = "";
			func_2785(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6857);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6858, (int)8034, (int)7564);
			@@@var_0_object:AddReply((int)7287, (int)-1, (int)8033);
			return 0;
		}
		var_340_bool = var_30_string == (int)8034;
		if(var_340_bool != 0) {
			var_341_string = "";
			func_2785(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7288);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7289, (int)8036, (int)8035);
			@@@var_0_object:AddReply((int)7292, (int)8039, (int)8038);
			return 0;
		}
		var_350_bool = var_30_string == (int)8039;
		if(var_350_bool != 0) {
			var_351_string = "";
			func_2785(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7293);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7294, (int)8036, (int)8040);
			return 0;
		}
		var_357_bool = var_30_string == (int)8036;
		if(var_357_bool != 0) {
			var_358_string = "";
			func_2785(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7290);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7291, (int)-1, (int)8037);
			return 0;
		}
		var_364_bool = var_30_string == (int)7890;
		if(var_364_bool != 0) {
			var_365_string = "";
			func_2785(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7162);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7264, (int)8010, (int)8007);
			@@@var_0_object:AddReply((int)7265, (int)8010, (int)8008);
			@@@var_0_object:AddReply((int)7266, (int)-1, (int)8009);
			return 0;
		}
		var_377_bool = var_30_string == (int)8010;
		if(var_377_bool != 0) {
			var_378_string = "";
			func_2785(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7267);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7268, (int)8015, (int)8012);
			@@@var_0_object:AddReply((int)7269, (int)8014, (int)8013);
			return 0;
		}
		var_387_bool = var_30_string == (int)8014;
		if(var_387_bool != 0) {
			var_388_string = "";
			func_2785(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7270);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7272, (int)8019, (int)8016);
			@@@var_0_object:AddReply((int)7273, (int)8015, (int)8017);
			@@@var_0_object:AddReply((int)7274, (int)-1, (int)8018);
			return 0;
		}
		var_400_bool = var_30_string == (int)8019;
		if(var_400_bool != 0) {
			var_401_string = "";
			func_2785(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7275);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7276, (int)8015, (int)8020);
			return 0;
		}
		var_407_bool = var_30_string == (int)8015;
		if(var_407_bool != 0) {
			var_408_object = Obj(); var_409_object = Obj();
			var_408_object = var_1_object;
			var_409_object = var_0_object;
			func_4507();
			var_412_string = "";
			func_2785(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7271);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7277, (int)8023, (int)8022);
			@@@var_0_object:AddReply((int)7284, (int)8030, (int)8029);
			return 0;
		}
		var_421_bool = var_30_string == (int)8030;
		if(var_421_bool != 0) {
			var_422_string = "";
			func_2785(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7285);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7286, (int)8025, (int)8031);
			return 0;
		}
		var_428_bool = var_30_string == (int)8023;
		if(var_428_bool != 0) {
			var_429_string = "";
			func_2785(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7278);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7279, (int)8025, (int)8024);
			return 0;
		}
		var_435_bool = var_30_string == (int)8025;
		if(var_435_bool != 0) {
			var_436_string = "";
			func_2785(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7280);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7281, (int)-1, (int)8026);
			@@@var_0_object:AddReply((int)7282, (int)-1, (int)8027);
			@@@var_0_object:AddReply((int)7283, (int)-1, (int)8028);
			return 0;
		}
		var_3_string = true;
		var_447_bool = 0;
		func_4256(var_447_bool);
		if(var_447_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xaf2";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	if((int)1 != 0) {
		func_4174();
		var_35_bool = var_31_bool == (int)10840;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_4645();
		}
		var_41_bool = var_30_string == (int)10839;
		if(var_41_bool != 0) {
			var_42_string = "";
			func_3527(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9840);
			@@@var_0_object:ClearReplies();
			var_58_bool = 0; var_59_object = Obj();
			var_59_object = var_1_object;
			func_4909(var_59_object);
			if(var_58_bool != 0) {
				@@@var_0_object:AddReply((int)9841, (int)10821, (int)10840);
			}
			@@@var_0_object:AddReply((int)11259, (int)-1, (int)12449);
			return 0;
		}
		var_73_bool = var_30_string == (int)10821;
		if(var_73_bool != 0) {
			var_74_string = "";
			func_3527(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9824);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9825, (int)10823, (int)10822);
			@@@var_0_object:AddReply((int)9829, (int)10828, (int)10827);
			@@@var_0_object:AddReply((int)9836, (int)10835, (int)10834);
			return 0;
		}
		var_86_bool = var_30_string == (int)10835;
		if(var_86_bool != 0) {
			var_87_string = "";
			func_3527(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9837);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9839, (int)10828, (int)10837);
			@@@var_0_object:AddReply((int)9838, (int)-1, (int)10836);
			return 0;
		}
		var_96_bool = var_30_string == (int)10828;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_3527(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9830);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9831, (int)-1, (int)10829);
			@@@var_0_object:AddReply((int)9832, (int)10831, (int)10830);
			return 0;
		}
		var_106_bool = var_30_string == (int)10831;
		if(var_106_bool != 0) {
			var_107_string = "";
			func_3527(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9833);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9834, (int)-1, (int)10832);
			@@@var_0_object:AddReply((int)9835, (int)-1, (int)10833);
			return 0;
		}
		var_116_bool = var_30_string == (int)10823;
		if(var_116_bool != 0) {
			var_117_string = "";
			func_3527(var_31_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9826);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9827, (int)10828, (int)10824);
			@@@var_0_object:AddReply((int)9828, (int)-1, (int)10826);
			return 0;
		}
		var_3_string = true;
		var_125_bool = 0;
		func_4256(var_125_bool);
		if(var_125_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xdd8";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int)
{
	if((int)1 != 0) {
		func_4174();
		var_35_bool = var_31_int == (int)12447;
		if(var_35_bool != 0) {
			var_36_object = Obj(); var_37_object = Obj();
			var_36_object = var_1_object;
			var_37_object = var_0_object;
			func_4651();
		}
		var_41_bool = var_30_int == (int)12445;
		if(var_41_bool != 0) {
			var_42_string = "";
			func_3853(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11255);
			@@@var_0_object:ClearReplies();
			var_58_bool = 0;
			var_58_bool = 0;
			var_59_bool = 0; var_60_object = Obj();
			var_60_object = var_1_object;
			func_4933(var_60_object);
			if(var_59_bool != 0) {
				var_67_bool = 0; var_68_object = Obj();
				var_68_object = var_1_object;
				func_4921(var_68_object);
				if(var_67_bool != 0) {
					var_58_bool = 1;
				}
			}
			if(var_58_bool != 0) {
				@@@var_0_object:AddReply((int)11257, (int)12448, (int)12447);
			}
			@@@var_0_object:AddReply((int)11256, (int)-1, (int)12446);
			return 0;
		}
		var_80_bool = var_30_int == (int)12448;
		if(var_80_bool != 0) {
			var_81_string = "";
			func_3853(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11258);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11267, (int)12458, (int)12457);
			@@@var_0_object:AddReply((int)11260, (int)12451, (int)12450);
			return 0;
		}
		var_90_bool = var_30_int == (int)12451;
		if(var_90_bool != 0) {
			var_91_string = "";
			func_3853(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11261);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11262, (int)12453, (int)12452);
			return 0;
		}
		var_97_bool = var_30_int == (int)12453;
		if(var_97_bool != 0) {
			var_98_string = "";
			func_3853(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11263);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11264, (int)12455, (int)12454);
			return 0;
		}
		var_104_bool = var_30_int == (int)12455;
		if(var_104_bool != 0) {
			var_105_string = "";
			func_3853(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11265);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11266, (int)12458, (int)12456);
			return 0;
		}
		var_111_bool = var_30_int == (int)12458;
		if(var_111_bool != 0) {
			var_112_string = "";
			func_3853(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11268);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11269, (int)12463, (int)12459);
			@@@var_0_object:AddReply((int)11270, (int)12461, (int)12460);
			return 0;
		}
		var_121_bool = var_30_int == (int)12461;
		if(var_121_bool != 0) {
			var_122_string = "";
			func_3853(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11271);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11273, (int)12463, (int)12464);
			@@@var_0_object:AddReply((int)11274, (int)-1, (int)12465);
			return 0;
		}
		var_131_bool = var_30_int == (int)12463;
		if(var_131_bool != 0) {
			var_132_string = "";
			func_3853(var_31_int, "Neutral");
			@@@var_0_object:SetMessage((int)11272);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11275, (int)-1, (int)12467);
			@@@var_0_object:AddReply((int)11276, (int)-1, (int)12468);
			return 0;
		}
		var_3_string = true;
		var_140_bool = 0;
		func_4256(var_140_bool);
		if(var_140_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xf1e";
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool)
{
	func_5098();
	var_30_bool = 0;
	func_4091(var_30_bool);
	var_33_bool = var_30_bool == 0; //@nz
	if(var_33_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
Label_19:
	var_34_string = "";
	func_4156("Neutral");
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


func_4096(var_57_bool, var_58_object)
{
	var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_bool = 0; var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_bool = 0;
	@@var_58_object:GetPosition(var_68_cvector);
	@@var_58_object:GetEyesHeight(var_67_float);
	var_75_float = GetByIndex(var_68_cvector, 1);
	var_75_float = var_75_float + var_67_float;
	SetByIndex(var_68_cvector, 1) = var_75_float;
	GetPosition(var_69_cvector);
	GetEyesHeight(var_67_float);
	var_76_float = GetByIndex(var_69_cvector, 1);
	var_76_float = var_76_float + var_67_float;
	SetByIndex(var_69_cvector, 1) = var_76_float;
	var_70_cvector = var_68_cvector - var_69_cvector;
	var_77_float = GetByIndex(var_70_cvector, 1);
	SetByIndex(var_70_cvector, 1) = (float)0;
	var_78_int = var_70_cvector | var_70_cvector;
	var_79_float = sqrt(var_78_int);
	var_70_cvector = var_70_cvector / var_79_float;
	var_71_cvector = -var_70_cvector;
	var_81_float = var_70_cvector * (int)70;
	var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0);
	var_83_cvector = var_71_cvector ^ CVector(0.0, 1.0, 0.0);
	func_4181(var_82_cvector, var_83_cvector);
	var_91_float = var_82_cvector * (int)25;
	var_92_int = var_81_float + var_91_float;
	var_72_cvector = var_92_int - CVector(0.0, 10.0, 0.0);
	var_73_cvector = var_69_cvector + var_72_cvector;
	IsOverrideActive(var_74_bool);
	var_94_bool = var_74_bool;
	if(var_94_bool != 0) {
		var_57_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_73_cvector, var_71_cvector);
	var_95_float = GetByIndex(var_72_cvector, 0);
	var_96_float = GetByIndex(var_72_cvector, 2);
	Rotate(var_95_float, var_96_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_57_bool = 1;
	return 16;
}


func_4352()
{
	var_42_object = Obj(); var_43_object = Obj();
	SetVariable("d2q02", (int)1);
	func_4999(Obj());
	var_46_object = var_43_object;
	var_57_float = 0;
	func_4223(var_57_float);
	@@var_43_object:AddMark("d2q02EvaGotoAndrei", "pt_map_andrei", (int)0, (int)15272, var_57_float);
	var_64_float = 0;
	func_4223(var_64_float);
	@@var_43_object:AddMark("d2q02EvaGotoAndreiSelf", "pt_map_eva", (int)0, (int)15278, var_64_float);
	func_5066();
	func_5082();
	var_99_object = Obj(); var_100_string = "";
	func_4196(var_99_object, "quest_d2_02");
	return 2;
}
EMIT "Stack[-1] = 0";


func_4613()
{
	var_159_object = Obj(); var_160_object = Obj();
	func_4999(Obj());
	var_161_object = var_160_object;
	var_166_float = 0;
	func_4223(var_166_float);
	@@var_160_object:AddMark("d2q02EvaGotoMaria", "pt_map_maria", (int)0, (int)15274, var_166_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4873(var_227_bool)
{
	var_229_int = 0; var_230_string = "";
	func_4191(var_229_int, "ood1Eva3");
	var_232_bool = var_229_int == (int)0;
	if(var_232_bool != 0) {
		var_227_bool = 1;
		return 0;
	}
	var_227_bool = 0;
	return 0;
}


func_3853(var_2_object, var_42_string)
{
	var_43_bool = 0;
	func_4256(var_43_bool);
	var_44_bool = var_43_bool == 0; //@nz
	if(var_44_bool != 0) {
		return 0;
	}
	var_45_bool = var_42_string == var_2_object;
	if(var_45_bool != 0) {
		return 0;
	}
	var_46_string = "";
	var_42_string = var_46_string;
	func_4156(var_46_string);
	var_2_object = var_42_string;
	return 0;
}


func_2577(var_0_object, var_315_int, var_316_object)
{
	var_318_object = Obj(); var_319_bool = 0; var_320_int = 0; var_321_bool = 0; var_322_object = Obj(); var_323_bool = 0; var_324_int = 0; var_325_bool = 0;
	var_0_object = var_316_object;
	var_326_bool = 0; var_327_object = Obj();
	var_316_object = var_327_object;
	func_4096(var_326_bool, var_327_object);
	var_328_bool = var_326_bool == 0; //@nz
	if(var_328_bool != 0) {
		var_315_int = -2;
		return 8;
	}
	CreateDialog(var_322_object);
	var_329_int = 0;
	func_4252(var_329_int);
	@@var_322_object:SetNPCName(var_329_int);
	var_330_string = "";
	func_4254(var_330_string);
	@@var_322_object:SetPhoto(var_330_string);
	var_331_int = 0;
	func_5049(var_331_int);
	@@var_322_object:SetPlayerName(var_331_int);
	IsOverrideActive(var_323_bool);
	var_332_bool = var_323_bool;
	if(var_332_bool != 0) {
		var_315_int = -2;
		return 8;
	}
	DoDialog(var_322_object);
	var_333_object = Obj(); var_334_object = Obj();
	var_316_object = var_333_object;
	var_322_object = var_334_object;
	TaskCall(9);
	func_2640(var_335_object, var_336_object, var_337_string, var_338_bool, var_333_object, var_334_object);
	TaskReturn();
	@@var_322_object:IsDialogEnd(var_325_bool);
	
Label_2622:
	var_428_bool = var_325_bool == 0; //@nz
	if(var_428_bool != 0) {
		sync();
		@@var_322_object:IsDialogEnd(var_325_bool);
		goto Label_2622;
	}
	var_316_object = Obj();
	func_4152();
	StopDialog(var_322_object);
	@@var_322_object:GetReturnValue((int)-1);
	var_324_int = var_315_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4629(var_168_object)
{
	var_169_object = Obj(); var_170_string = ""; var_171_float = 0;
	func_4999(Obj());
	var_172_object = var_169_object;
	func_5016(var_169_object, "pt_map_maria", (float)2);
	var_173_object = Obj();
	func_4999(var_173_object);
	@@var_168_object:ShowMap(var_173_object);
	return 0;
}


func_4885(var_45_bool)
{
	var_47_int = 0; var_48_string = "";
	func_4191(var_47_int, "ood6Eva1");
	var_50_bool = var_47_int == (int)0;
	if(var_50_bool != 0) {
		var_45_bool = 1;
		return 0;
	}
	var_45_bool = 0;
	return 0;
}


func_4897(var_253_bool)
{
	var_255_int = 0; var_256_string = "";
	func_4191(var_255_int, "KnowJulia");
	var_258_bool = var_255_int == (int)1;
	if(var_258_bool != 0) {
		var_253_bool = 1;
		return 0;
	}
	var_253_bool = 0;
	return 0;
}


func_4645()
{
	SetVariable("ood3Eva1", (int)1);
	return 0;
}


func_4391()
{
	var_38_string = ""; var_39_bool = 0;
	func_4207("icot_eva@door1", (bool)0);
	return 0;
}


func_4651()
{
	SetVariable("ood4Eva1", (int)1);
	return 0;
}


func_4909(var_58_bool)
{
	var_60_int = 0; var_61_string = "";
	func_4191(var_60_int, "ood3Eva1");
	var_65_bool = var_60_int == (int)0;
	if(var_65_bool != 0) {
		var_58_bool = 1;
		return 0;
	}
	var_58_bool = 0;
	return 0;
}


func_4398()
{
	SetVariable("KnowDubilschikov", (int)1);
	return 0;
}


func_4657()
{
	SetVariable("KnowStamatins", (int)1);
	return 0;
}


func_49(var_0_object, var_549_int, var_550_object)
{
	var_552_object = Obj(); var_553_bool = 0; var_554_int = 0; var_555_bool = 0; var_556_object = Obj(); var_557_bool = 0; var_558_int = 0; var_559_bool = 0;
	var_0_object = var_550_object;
	var_560_bool = 0; var_561_object = Obj();
	var_550_object = var_561_object;
	func_4096(var_560_bool, var_561_object);
	var_562_bool = var_560_bool == 0; //@nz
	if(var_562_bool != 0) {
		var_549_int = -2;
		return 8;
	}
	CreateDialog(var_556_object);
	var_563_int = 0;
	func_4252(var_563_int);
	@@var_556_object:SetNPCName(var_563_int);
	var_564_string = "";
	func_4254(var_564_string);
	@@var_556_object:SetPhoto(var_564_string);
	var_565_int = 0;
	func_5049(var_565_int);
	@@var_556_object:SetPlayerName(var_565_int);
	IsOverrideActive(var_557_bool);
	var_566_bool = var_557_bool;
	if(var_566_bool != 0) {
		var_549_int = -2;
		return 8;
	}
	DoDialog(var_556_object);
	var_567_object = Obj(); var_568_object = Obj();
	var_550_object = var_567_object;
	var_556_object = var_568_object;
	TaskCall(3);
	func_112(var_569_object, var_570_object, var_571_string, var_572_bool, var_567_object, var_568_object);
	TaskReturn();
	@@var_556_object:IsDialogEnd(var_559_bool);
	
Label_94:
	var_616_bool = var_559_bool == 0; //@nz
	if(var_616_bool != 0) {
		sync();
		@@var_556_object:IsDialogEnd(var_559_bool);
		goto Label_94;
	}
	var_550_object = Obj();
	func_4152();
	StopDialog(var_556_object);
	@@var_556_object:GetReturnValue((int)-1);
	var_558_int = var_549_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1329(var_0_object, var_1_object, var_2_object, var_3_object, var_212_object, var_213_object)
{
	var_0_object = var_213_object;
	var_1_object = var_212_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_219_string = "";
		func_1469(var_213_object, "Neutral");
		@@@var_0_object:SetMessage((int)4610);
		@@@var_0_object:ClearReplies();
		var_225_bool = 0; var_226_object = Obj();
		var_226_object = var_1_object;
		func_4837(var_226_object);
		if(var_225_bool != 0) {
			@@@var_0_object:AddReply((int)4612, (int)5058, (int)5042);
		}
		var_234_bool = 0; var_235_object = Obj();
		var_235_object = var_1_object;
		func_4813(var_235_object);
		if(var_234_bool != 0) {
			@@@var_0_object:AddReply((int)4611, (int)5056, (int)5041);
		}
		var_243_bool = 0; var_244_object = Obj();
		var_244_object = var_1_object;
		func_4873(var_244_object);
		if(var_243_bool != 0) {
			@@@var_0_object:AddReply((int)4613, (int)5097, (int)5043);
		}
		var_252_bool = 0;
		var_252_bool = 0;
		var_253_bool = 0; var_254_object = Obj();
		var_254_object = var_1_object;
		func_4825(var_254_object);
		if(var_253_bool != 0) {
			var_259_bool = 0; var_260_object = Obj();
			var_260_object = var_1_object;
			func_4681(var_260_object);
			if(var_259_bool != 0) {
				var_252_bool = 1;
			}
		}
		if(var_252_bool != 0) {
			@@@var_0_object:AddReply((int)4846, (int)5319, (int)5318);
		}
		var_268_bool = 0;
		var_268_bool = 0;
		var_269_bool = 0; var_270_object = Obj();
		var_270_object = var_1_object;
		func_4897(var_270_object);
		if(var_269_bool != 0) {
			var_275_bool = 0; var_276_object = Obj();
			var_276_object = var_1_object;
			func_4693(var_276_object);
			if(var_275_bool != 0) {
				var_268_bool = 1;
			}
		}
		if(var_268_bool != 0) {
			@@@var_0_object:AddReply((int)6299, (int)6952, (int)6951);
		}
		var_284_bool = 0;
		var_284_bool = 0;
		var_285_bool = 0; var_286_object = Obj();
		var_286_object = var_1_object;
		func_4705(var_286_object);
		if(var_285_bool != 0) {
			var_291_bool = 0; var_292_object = Obj();
			var_292_object = var_1_object;
			func_4945(var_292_object);
			if(var_291_bool != 0) {
				var_284_bool = 1;
			}
		}
		if(var_284_bool != 0) {
			@@@var_0_object:AddReply((int)6314, (int)6970, (int)6969);
		}
		@@@var_0_object:AddReply((int)4614, (int)-1, (int)5044);
		goto Label_1439;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x535";
	}
Label_1439:
	var_303_bool = 0;
	func_4256(var_303_bool);
	if(var_303_bool != 0) {

	Label_1443:
		lshWaitForAnimEnd();
		var_304_object = var_3_object;
		if(var_304_object != 0) {
		} else {
			var_305_string = "";
			var_305_string = var_2_object;
			func_4156(var_305_string);
			goto Label_1443;
	}
		PlayAnimation("all", "idle");

	Label_1458:
		WaitForAnimEnd();
		var_308_object = var_3_object;
		if(var_308_object != 0) {
			goto Label_1468;
		}
		PlayAnimation("all", "idle");
		goto Label_1458;
	}
	goto Label_1468;
	
Label_1468:
	return 0;
	
}


func_4404()
{
	var_54_object = Obj(); var_55_object = Obj();
	func_4999(Obj());
	var_56_object = var_55_object;
	var_67_float = 0;
	func_4223(var_67_float);
	@@var_55_object:AddMark("d1q01EvaGotoSimon", "pt_map_georg", (int)1, (int)7778, var_67_float);
	var_74_float = 0;
	func_4223(var_74_float);
	@@var_55_object:AddMark("d1EvaGotoMaria", "pt_map_maria", (int)3, (int)8628, var_74_float);
	var_79_float = 0;
	func_4223(var_79_float);
	@@var_55_object:AddMark("d1EvaInfo", "pt_map_eva", (int)3, (int)8630, var_79_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4663()
{
	SetVariable("KnowMnogogrannik", (int)1);
	return 0;
}


func_4152()
{
	CameraSwitchToNormal();
	return 0;
}


func_4921(var_67_bool)
{
	var_69_int = 0; var_70_string = "";
	func_4191(var_69_int, "d4q02");
	var_72_bool = var_69_int == (int)0;
	if(var_72_bool != 0) {
		var_67_bool = 1;
		return 0;
	}
	var_67_bool = 0;
	return 0;
}


func_4156(var_34_string)
{
	var_35_float = 0; var_36_float = 0; var_37_float = 0; var_38_float = 0;
	var_40_int = "playing " + var_34_string;
	Trace(var_40_int);
	lshGetAnimTimes(var_34_string, var_37_float, var_38_float);
	lshPlayAnimation(var_37_float, var_38_float);
	var_42_int = "start: " + var_37_float;
	Trace(var_42_int);
	var_44_int = "end: " + var_38_float;
	Trace(var_44_int);
	return 4;
}


func_4669(var_128_bool)
{
	var_130_int = 0; var_131_string = "";
	func_4191(var_130_int, "ood1EvaIntro1");
	var_135_bool = var_130_int == (int)0;
	if(var_135_bool != 0) {
		var_128_bool = 1;
		return 0;
	}
	var_128_bool = 0;
	return 0;
}


func_4933(var_59_bool)
{
	var_61_int = 0; var_62_string = "";
	func_4191(var_61_int, "ood4Eva1");
	var_66_bool = var_61_int == (int)0;
	if(var_66_bool != 0) {
		var_59_bool = 1;
		return 0;
	}
	var_59_bool = 0;
	return 0;
}


func_4681(var_243_bool)
{
	var_245_int = 0; var_246_string = "";
	func_4191(var_245_int, "d1q01FirstGeorgVisit");
	var_248_bool = var_245_int == (int)1;
	if(var_248_bool != 0) {
		var_243_bool = 1;
		return 0;
	}
	var_243_bool = 0;
	return 0;
}


func_3401(var_0_object, var_432_int, var_433_object)
{
	var_435_object = Obj(); var_436_bool = 0; var_437_int = 0; var_438_bool = 0; var_439_object = Obj(); var_440_bool = 0; var_441_int = 0; var_442_bool = 0;
	var_0_object = var_433_object;
	var_443_bool = 0; var_444_object = Obj();
	var_433_object = var_444_object;
	func_4096(var_443_bool, var_444_object);
	var_445_bool = var_443_bool == 0; //@nz
	if(var_445_bool != 0) {
		var_432_int = -2;
		return 8;
	}
	CreateDialog(var_439_object);
	var_446_int = 0;
	func_4252(var_446_int);
	@@var_439_object:SetNPCName(var_446_int);
	var_447_string = "";
	func_4254(var_447_string);
	@@var_439_object:SetPhoto(var_447_string);
	var_448_int = 0;
	func_5049(var_448_int);
	@@var_439_object:SetPlayerName(var_448_int);
	IsOverrideActive(var_440_bool);
	var_449_bool = var_440_bool;
	if(var_449_bool != 0) {
		var_432_int = -2;
		return 8;
	}
	DoDialog(var_439_object);
	var_450_object = Obj(); var_451_object = Obj();
	var_433_object = var_450_object;
	var_439_object = var_451_object;
	TaskCall(11);
	func_3464(var_452_object, var_453_object, var_454_string, var_455_bool, var_450_object, var_451_object);
	TaskReturn();
	@@var_439_object:IsDialogEnd(var_442_bool);
	
Label_3446:
	var_483_bool = var_442_bool == 0; //@nz
	if(var_483_bool != 0) {
		sync();
		@@var_439_object:IsDialogEnd(var_442_bool);
		goto Label_3446;
	}
	var_433_object = Obj();
	func_4152();
	StopDialog(var_439_object);
	@@var_439_object:GetReturnValue((int)-1);
	var_441_int = var_432_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4174()
{
	var_33_bool = 0;
	func_4256(var_33_bool);
	if(var_33_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_2640(var_0_object, var_1_object, var_2_object, var_3_object, var_333_object, var_334_object)
{
	var_0_object = var_334_object;
	var_1_object = var_333_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_340_bool = 0; var_341_object = Obj();
		var_341_object = var_1_object;
		func_4729(var_341_object);
		if(var_340_bool != 0) {
			var_346_string = "";
			func_2785(var_334_object, "Neutral");
			@@@var_0_object:SetMessage((int)6853);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6854, (int)7890, (int)7560);
			@@@var_0_object:AddReply((int)7262, (int)7890, (int)8004);
		} else {
				var_366_string = "";
				func_2785(var_334_object, "Neutral");
				@@@var_0_object:SetMessage((int)6855);
				@@@var_0_object:ClearReplies();
				var_368_bool = 0;
				var_368_bool = 0;
				var_369_bool = 0; var_370_object = Obj();
				var_370_object = var_1_object;
				func_4741(var_370_object);
				if(var_369_bool != 0) {
					var_375_bool = 0; var_376_object = Obj();
					var_376_object = var_1_object;
					func_4789(var_376_object);
					if(var_375_bool != 0) {
						var_368_bool = 1;
					}
				}
				if(var_368_bool != 0) {
					@@@var_0_object:AddReply((int)6856, (int)7563, (int)7562);
				}
				var_384_bool = 0;
				var_384_bool = 0;
				var_385_bool = 0; var_386_object = Obj();
				var_386_object = var_1_object;
				func_4753(var_386_object);
				if(var_385_bool != 0) {
					var_391_bool = 0; var_392_object = Obj();
					var_392_object = var_1_object;
					func_4801(var_392_object);
					if(var_391_bool != 0) {
						var_384_bool = 1;
					}
				}
				if(var_384_bool != 0) {
					@@@var_0_object:AddReply((int)6859, (int)7566, (int)7565);
				}
				var_400_bool = 0;
				var_400_bool = 0;
				var_401_bool = 0; var_402_object = Obj();
				var_402_object = var_1_object;
				func_4765(var_402_object);
				if(var_401_bool != 0) {
					var_407_bool = 0; var_408_object = Obj();
					var_408_object = var_1_object;
					func_4777(var_408_object);
					if(var_407_bool != 0) {
						var_400_bool = 1;
					}
				}
				if(var_400_bool != 0) {
					@@@var_0_object:AddReply((int)6861, (int)7568, (int)7567);
				}
				var_416_bool = 0; var_417_object = Obj();
				var_417_object = var_1_object;
				func_4849(var_417_object);
				if(var_416_bool != 0) {
					@@@var_0_object:AddReply((int)11392, (int)12590, (int)12589);
				}
				@@@var_0_object:AddReply((int)7528, (int)-1, (int)8310);
				goto Label_2755;
		}
	}
Label_2755:
	var_358_bool = 0;
	func_4256(var_358_bool);
	if(var_358_bool != 0) {

	Label_2759:
		lshWaitForAnimEnd();
		var_359_object = var_3_object;
		if(var_359_object != 0) {
		} else {
			var_360_string = "";
			var_360_string = var_2_object;
			func_4156(var_360_string);
			goto Label_2759;
	}
		PlayAnimation("all", "idle");

	Label_2774:
		WaitForAnimEnd();
		var_363_object = var_3_object;
		if(var_363_object != 0) {
			goto Label_2784;
		}
		PlayAnimation("all", "idle");
		goto Label_2774;

	}
	goto Label_2784;
	
Label_2784:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xa54";


func_4945(var_275_bool)
{
	var_277_int = 0; var_278_string = "";
	func_4191(var_277_int, "KnowStamatins");
	var_280_bool = var_277_int == (int)1;
	if(var_280_bool != 0) {
		var_275_bool = 1;
		return 0;
	}
	var_275_bool = 0;
	return 0;
}


func_4693(var_259_bool)
{
	var_261_int = 0; var_262_string = "";
	func_4191(var_261_int, "ood1Eva5");
	var_264_bool = var_261_int == (int)0;
	if(var_264_bool != 0) {
		var_259_bool = 1;
		return 0;
	}
	var_259_bool = 0;
	return 0;
}


func_4181(var_82_cvector, var_83_cvector)
{
	var_85_float = 0; var_86_float = 0;
	var_87_int = var_83_cvector | var_83_cvector;
	var_86_float = sqrt(var_87_int);
	var_88_float = 9.999999974752427e-07;
	var_89_bool = var_86_float < var_88_float;
	if(var_89_bool != 0) {
		var_82_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_82_cvector = var_83_cvector / var_86_float;
	return 2;
}


func_4438()
{
	SetVariable("KnowGorny", (int)1);
	return 0;
}


func_4444()
{
	SetVariable("KnowSobor", (int)1);
	return 0;
}


func_4957(var_80_object)
{
	var_81_object = Obj(); var_82_object = Obj();
	GetDiaryRoot(var_82_object);
	var_83_bool = var_82_object == 0; //@nz
	if(var_83_bool != 0) {
		Trace("Can't retrieve diary root");
		var_80_object = 0;
		return 2;
	}
	var_82_object = var_80_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4191(var_61_int, var_62_string)
{
	var_63_int = 0; var_64_int = 0;
	GetVariable(var_62_string, var_64_int);
	var_64_int = var_61_int;
	return 2;
}


func_4705(var_269_bool)
{
	var_271_int = 0; var_272_string = "";
	func_4191(var_271_int, "ood1Eva6");
	var_274_bool = var_271_int == (int)0;
	if(var_274_bool != 0) {
		var_269_bool = 1;
		return 0;
	}
	var_269_bool = 0;
	return 0;
}


func_4450(var_59_object)
{
	var_60_object = Obj(); var_61_string = ""; var_62_float = 0;
	func_4999(Obj());
	var_63_object = var_60_object;
	func_5016(var_60_object, "pt_map_theater", (float)2);
	var_83_object = Obj();
	func_4999(var_83_object);
	@@var_59_object:ShowMap(var_83_object);
	return 0;
}


func_4196(var_99_object, var_100_string)
{
	var_101_object = Obj(); var_102_object = Obj(); var_103_object = Obj(); var_104_object = Obj();
	GetMainOutdoorScene(var_103_object);
	var_106_int = var_100_string + ".bin";
	AddBlankActor(var_104_object, var_103_object, var_100_string, var_106_int);
	var_104_object = var_99_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4970(var_71_bool, var_72_object, var_73_int)
{
	var_74_object = Obj(); var_75_object = Obj(); var_76_int = 0; var_77_object = Obj(); var_78_object = Obj(); var_79_int = 0;
	func_4957(Obj());
	var_80_object = var_77_object;
	@@var_77_object:Find(var_73_int, var_78_object);
	var_85_bool = var_78_object == 0; //@nz
	if(var_85_bool != 0) {
		var_87_int = "Can't find diary parent with id: " + var_73_int;
		Trace(var_87_int);
		var_71_bool = 0;
		return 6;
	}
	@@var_78_object:AddChild(var_72_object);
	SetVariable("player_diary", (int)1);
	@@var_72_object:GetCategory(var_79_int);
	SetDiarySection(var_79_int);
	var_71_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_4717(var_165_bool)
{
	var_167_int = 0; var_168_string = "";
	func_4191(var_167_int, "ood1EvaIntro2");
	var_170_bool = var_167_int == (int)0;
	if(var_170_bool != 0) {
		var_165_bool = 1;
		return 0;
	}
	var_165_bool = 0;
	return 0;
}


func_622(var_2_object, var_140_string)
{
	var_141_bool = 0;
	func_4256(var_141_bool);
	var_142_bool = var_141_bool == 0; //@nz
	if(var_142_bool != 0) {
		return 0;
	}
	var_143_bool = var_140_string == var_2_object;
	if(var_143_bool != 0) {
		return 0;
	}
	var_144_string = "";
	var_140_string = var_144_string;
	func_4156(var_144_string);
	var_2_object = var_140_string;
	return 0;
}


func_4207(var_38_string, var_39_bool)
{
	var_40_object = Obj(); var_41_object = Obj();
	FindActor(var_41_object, var_38_string);
	var_42_bool = var_41_object == 0; //@nz
	if(var_42_bool != 0) {
		var_44_int = "Door " + var_38_string;
		var_46_int = var_44_int + " not found";
		Trace(var_46_int);
	}
	@@var_41_object:SetProperty("locked", var_39_bool);
	return 2;
}
EMIT "Stack[-1] = 0";


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_567_object, var_568_object)
{
	var_0_object = var_568_object;
	var_1_object = var_567_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_574_bool = 0;
		var_574_bool = 0;
		var_575_bool = 0; var_576_object = Obj();
		var_576_object = var_1_object;
		func_4861(var_576_object);
		if(var_575_bool != 0) {
			var_581_bool = 0; var_582_object = Obj();
			var_582_object = var_1_object;
			func_4885(var_582_object);
			if(var_581_bool != 0) {
				var_574_bool = 1;
			}
		}
		if(var_574_bool != 0) {
			var_587_object = Obj(); var_588_object = Obj();
			var_587_object = var_1_object;
			var_588_object = var_0_object;
			func_4579();
			var_591_string = "";
			func_204(var_568_object, "Neutral");
			@@@var_0_object:SetMessage((int)3926);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3927, (int)4276, (int)4275);
			@@@var_0_object:AddReply((int)3929, (int)4278, (int)4277);
		} else {
				var_611_string = "";
				func_204(var_568_object, "Neutral");
				@@@var_0_object:SetMessage((int)13718);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)13719, (int)-1, (int)14985);
				goto Label_174;
		}
	}
Label_174:
	var_603_bool = 0;
	func_4256(var_603_bool);
	if(var_603_bool != 0) {

	Label_178:
		lshWaitForAnimEnd();
		var_604_object = var_3_object;
		if(var_604_object != 0) {
		} else {
			var_605_string = "";
			var_605_string = var_2_object;
			func_4156(var_605_string);
			goto Label_178;
	}
		PlayAnimation("all", "idle");

	Label_193:
		WaitForAnimEnd();
		var_608_object = var_3_object;
		if(var_608_object != 0) {
			goto Label_203;
		}
		PlayAnimation("all", "idle");
		goto Label_193;

	}
	goto Label_203;
	
Label_203:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x74";


func_4466()
{
	var_42_object = Obj(); var_43_object = Obj();
	func_4999(Obj());
	var_44_object = var_43_object;
	var_55_float = 0;
	func_4223(var_55_float);
	@@var_43_object:AddMark("d1q01EvaAboutMark", "pt_map_theater", (int)1, (int)8636, var_55_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4729(var_202_bool)
{
	var_204_int = 0; var_205_string = "";
	func_4191(var_204_int, "ood2Eva1");
	var_209_bool = var_204_int == (int)0;
	if(var_209_bool != 0) {
		var_202_bool = 1;
		return 0;
	}
	var_202_bool = 0;
	return 0;
}


func_4223(var_57_float)
{
	var_58_float = 0; var_59_float = 0;
	GetGameTime(var_59_float);
	var_59_float = var_57_float;
	return 2;
}


func_4482()
{
	var_134_object = Obj(); var_135_object = Obj();
	func_4999(Obj());
	var_136_object = var_135_object;
	var_141_float = 0;
	func_4223(var_141_float);
	@@var_135_object:AddMark("d1EvaAboutKapella", "pt_map_kapella", (int)3, (int)8637, var_141_float);
	var_146_float = 0;
	func_4223(var_146_float);
	@@var_135_object:AddMark("d1EvaAboutKaterina", "pt_map_katerina", (int)3, (int)8639, var_146_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4228(var_34_int)
{
	var_35_float = 0; var_36_float = 0;
	GetGameTime(var_36_float);
	var_38_int = 0;
	var_38_int = var_36_float / (int)24;
	var_34_int = (int)1 + var_38_int;
	return 2;
}


func_4741(var_235_bool)
{
	var_237_int = 0; var_238_string = "";
	func_4191(var_237_int, "ood2Eva2");
	var_240_bool = var_237_int == (int)0;
	if(var_240_bool != 0) {
		var_235_bool = 1;
		return 0;
	}
	var_235_bool = 0;
	return 0;
}


func_3718(var_0_object, var_487_int, var_488_object)
{
	var_490_object = Obj(); var_491_bool = 0; var_492_int = 0; var_493_bool = 0; var_494_object = Obj(); var_495_bool = 0; var_496_int = 0; var_497_bool = 0;
	var_0_object = var_488_object;
	var_498_bool = 0; var_499_object = Obj();
	var_488_object = var_499_object;
	func_4096(var_498_bool, var_499_object);
	var_500_bool = var_498_bool == 0; //@nz
	if(var_500_bool != 0) {
		var_487_int = -2;
		return 8;
	}
	CreateDialog(var_494_object);
	var_501_int = 0;
	func_4252(var_501_int);
	@@var_494_object:SetNPCName(var_501_int);
	var_502_string = "";
	func_4254(var_502_string);
	@@var_494_object:SetPhoto(var_502_string);
	var_503_int = 0;
	func_5049(var_503_int);
	@@var_494_object:SetPlayerName(var_503_int);
	IsOverrideActive(var_495_bool);
	var_504_bool = var_495_bool;
	if(var_504_bool != 0) {
		var_487_int = -2;
		return 8;
	}
	DoDialog(var_494_object);
	var_505_object = Obj(); var_506_object = Obj();
	var_488_object = var_505_object;
	var_494_object = var_506_object;
	TaskCall(13);
	func_3781(var_507_object, var_508_object, var_509_string, var_510_bool, var_505_object, var_506_object);
	TaskReturn();
	@@var_494_object:IsDialogEnd(var_497_bool);
	
Label_3763:
	var_545_bool = var_497_bool == 0; //@nz
	if(var_545_bool != 0) {
		sync();
		@@var_494_object:IsDialogEnd(var_497_bool);
		goto Label_3763;
	}
	var_488_object = Obj();
	func_4152();
	StopDialog(var_494_object);
	@@var_494_object:GetReturnValue((int)-1);
	var_496_int = var_487_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4999(var_46_object)
{
	var_47_object = Obj(); var_48_object = Obj(); var_49_object = Obj(); var_50_object = Obj();
	GetMainOutdoorScene(var_49_object);
	var_51_bool = var_49_object == 0; //@ne
	if(var_51_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_50_object = 0;
		var_50_object = var_46_object;
		return 4;
	}
	@@var_49_object:GetMap(var_50_object);
	var_50_object = var_46_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_3464(var_0_object, var_1_object, var_2_object, var_3_object, var_450_object, var_451_object)
{
	var_0_object = var_451_object;
	var_1_object = var_450_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_457_string = "";
		func_3527(var_451_object, "Neutral");
		@@@var_0_object:SetMessage((int)9840);
		@@@var_0_object:ClearReplies();
		var_463_bool = 0; var_464_object = Obj();
		var_464_object = var_1_object;
		func_4909(var_464_object);
		if(var_463_bool != 0) {
			@@@var_0_object:AddReply((int)9841, (int)10821, (int)10840);
		}
		@@@var_0_object:AddReply((int)11259, (int)-1, (int)12449);
		goto Label_3497;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xd8c";
	}
Label_3497:
	var_475_bool = 0;
	func_4256(var_475_bool);
	if(var_475_bool != 0) {

	Label_3501:
		lshWaitForAnimEnd();
		var_476_object = var_3_object;
		if(var_476_object != 0) {
		} else {
			var_477_string = "";
			var_477_string = var_2_object;
			func_4156(var_477_string);
			goto Label_3501;
	}
		PlayAnimation("all", "idle");

	Label_3516:
		WaitForAnimEnd();
		var_480_object = var_3_object;
		if(var_480_object != 0) {
			goto Label_3526;
		}
		PlayAnimation("all", "idle");
		goto Label_3516;
	}
	goto Label_3526;
	
Label_3526:
	return 0;
	
}


func_4237(var_32_bool, var_33_int)
{
	var_34_int = 0;
	func_4228(var_34_int);
	var_32_bool = var_34_int == var_33_int;
	return 0;
}


func_4753(var_251_bool)
{
	var_253_int = 0; var_254_string = "";
	func_4191(var_253_int, "ood2Eva3");
	var_256_bool = var_253_int == (int)0;
	if(var_256_bool != 0) {
		var_251_bool = 1;
		return 0;
	}
	var_251_bool = 0;
	return 0;
}


func_4243(var_618_bool)
{
	var_619_bool = 0; var_620_bool = 0;
	var_621_string = "";
	func_4156("No");
	lshWaitForAnimEnd(var_620_bool);
	var_620_bool = var_618_bool;
	return 2;
}


func_5016(var_109_object, var_110_string, var_111_float)
{
	var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_object = Obj(); var_116_bool = 0; var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0); var_119_object = Obj(); var_120_bool = 0;
	GetMainOutdoorScene(var_119_object);
	var_121_bool = var_119_object == 0; //@ne
	if(var_121_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_119_object:GetLocator(var_110_string, var_120_bool, var_117_cvector, var_118_cvector);
	var_123_bool = var_120_bool == 0; //@nz
	if(var_123_bool != 0) {
		var_125_int = "Warning: outdoor scene locator " + var_110_string;
		var_127_int = var_125_int + " doesnt exist";
		Trace(var_127_int);
	}
	@@var_119_object:GetMap(var_109_object);
	var_128_bool = var_109_object == 0; //@ne
	if(var_128_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_130_float = GetByIndex(var_117_cvector, 0);
	var_131_float = GetByIndex(var_117_cvector, 2);
	@@var_109_object:SetMapParams(var_130_float, var_131_float, var_111_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_4507()
{
	SetVariable("KnowStation", (int)1);
	return 0;
}


func_4252(var_98_int)
{
	var_98_int = 2858;
	return 0;
}


func_4765(var_267_bool)
{
	var_269_int = 0; var_270_string = "";
	func_4191(var_269_int, "ood2Eva4");
	var_272_bool = var_269_int == (int)0;
	if(var_272_bool != 0) {
		var_267_bool = 1;
		return 0;
	}
	var_267_bool = 0;
	return 0;
}


func_4254(var_99_string)
{
	var_99_string = "ui/NPC_Eva.png";
	return 0;
}


func_4256(var_33_bool)
{
	var_33_bool = 1;
	return 0;
}


func_4513()
{
	TriggerWorld("playsound", "mapmark");
	return 0;
}


func_4258()
{
	SetVariable("ood1Eva3", (int)1);
	return 0;
}


func_421(var_0_object, var_46_int, var_47_object)
{
	var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_object = Obj(); var_54_bool = 0; var_55_int = 0; var_56_bool = 0;
	var_0_object = var_47_object;
	var_57_bool = 0; var_58_object = Obj();
	var_47_object = var_58_object;
	func_4096(var_57_bool, var_58_object);
	var_97_bool = var_57_bool == 0; //@nz
	if(var_97_bool != 0) {
		var_46_int = -2;
		return 8;
	}
	CreateDialog(var_53_object);
	var_98_int = 0;
	func_4252(var_98_int);
	@@var_53_object:SetNPCName(var_98_int);
	var_99_string = "";
	func_4254(var_99_string);
	@@var_53_object:SetPhoto(var_99_string);
	var_100_int = 0;
	func_5049(var_100_int);
	@@var_53_object:SetPlayerName(var_100_int);
	IsOverrideActive(var_54_bool);
	var_108_bool = var_54_bool;
	if(var_108_bool != 0) {
		var_46_int = -2;
		return 8;
	}
	DoDialog(var_53_object);
	var_109_object = Obj(); var_110_object = Obj();
	var_47_object = var_109_object;
	var_53_object = var_110_object;
	TaskCall(5);
	func_484(var_111_object, var_112_object, var_113_string, var_114_bool, var_109_object, var_110_object);
	TaskReturn();
	@@var_53_object:IsDialogEnd(var_56_bool);
	
Label_466:
	var_192_bool = var_56_bool == 0; //@nz
	if(var_192_bool != 0) {
		sync();
		@@var_53_object:IsDialogEnd(var_56_bool);
		goto Label_466;
	}
	var_47_object = Obj();
	func_4152();
	StopDialog(var_53_object);
	@@var_53_object:GetReturnValue((int)-1);
	var_55_int = var_46_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4519()
{
	SetVariable("ood1EvaIntro1", (int)1);
	return 0;
}


func_4264()
{
	SetVariable("KnowKaterina", (int)1);
	return 0;
}


func_4777(var_273_bool)
{
	var_275_int = 0; var_276_string = "";
	func_4191(var_275_int, "d2q02");
	var_278_bool = var_275_int == (int)1000;
	if(var_278_bool != 0) {
		var_273_bool = 1;
		return 0;
	}
	var_273_bool = 0;
	return 0;
}


func_4525()
{
	SetVariable("KnowJulia", (int)1);
	return 0;
}


func_4270()
{
	SetVariable("KnowKapella", (int)1);
	return 0;
}


func_4531()
{
	SetVariable("KnowNevod", (int)1);
	return 0;
}


func_4276()
{
	SetVariable("KnowTheater", (int)1);
	return 0;
}


func_4789(var_241_bool)
{
	var_243_int = 0; var_244_string = "";
	func_4191(var_243_int, "d2q02");
	var_246_bool = var_243_int == (int)3;
	if(var_246_bool != 0) {
		var_241_bool = 1;
		return 0;
	}
	var_241_bool = 0;
	return 0;
}


func_5049(var_100_int)
{
	var_101_int = 0; var_102_int = 0;
	GetVariable("player", var_102_int);
	var_105_bool = var_102_int == (int)0;
	if(var_105_bool != 0) {
		var_100_int = 200001;
		return 2;
	EMIT "GOTO 0x13c8";
	}
	var_107_bool = var_102_int == (int)1;
	if(var_107_bool != 0) {
		var_100_int = 200002;
		return 2;
	}
	var_100_int = 200003;
	return 2;
}


func_4282()
{
	SetVariable("KnowSquareMost", (int)1);
	return 0;
}


func_4537()
{
	SetVariable("KnowViktor", (int)1);
	return 0;
}


func_1469(var_2_object, var_191_string)
{
	var_192_bool = 0;
	func_4256(var_192_bool);
	var_193_bool = var_192_bool == 0; //@nz
	if(var_193_bool != 0) {
		return 0;
	}
	var_194_bool = var_191_string == var_2_object;
	if(var_194_bool != 0) {
		return 0;
	}
	var_195_string = "";
	var_191_string = var_195_string;
	func_4156(var_195_string);
	var_2_object = var_191_string;
	return 0;
}


func_4543()
{
	SetVariable("ood1Eva4", (int)1);
	return 0;
}


func_4288()
{
	SetVariable("ood1Eva5", (int)1);
	return 0;
}


func_4801(var_257_bool)
{
	var_259_int = 0; var_260_string = "";
	func_4191(var_259_int, "d2q02");
	var_262_bool = var_259_int == (int)5;
	if(var_262_bool != 0) {
		var_257_bool = 1;
		return 0;
	}
	var_257_bool = 0;
	return 0;
}


func_3781(var_0_object, var_1_object, var_2_object, var_3_object, var_505_object, var_506_object)
{
	var_0_object = var_506_object;
	var_1_object = var_505_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_512_string = "";
		func_3853(var_506_object, "Neutral");
		@@@var_0_object:SetMessage((int)11255);
		@@@var_0_object:ClearReplies();
		var_518_bool = 0;
		var_518_bool = 0;
		var_519_bool = 0; var_520_object = Obj();
		var_520_object = var_1_object;
		func_4933(var_520_object);
		if(var_519_bool != 0) {
			var_525_bool = 0; var_526_object = Obj();
			var_526_object = var_1_object;
			func_4921(var_526_object);
			if(var_525_bool != 0) {
				var_518_bool = 1;
			}
		}
		if(var_518_bool != 0) {
			@@@var_0_object:AddReply((int)11257, (int)12448, (int)12447);
		}
		@@@var_0_object:AddReply((int)11256, (int)-1, (int)12446);
		goto Label_3823;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xec9";
	}
Label_3823:
	var_537_bool = 0;
	func_4256(var_537_bool);
	if(var_537_bool != 0) {

	Label_3827:
		lshWaitForAnimEnd();
		var_538_object = var_3_object;
		if(var_538_object != 0) {
		} else {
			var_539_string = "";
			var_539_string = var_2_object;
			func_4156(var_539_string);
			goto Label_3827;
	}
		PlayAnimation("all", "idle");

	Label_3842:
		WaitForAnimEnd();
		var_542_object = var_3_object;
		if(var_542_object != 0) {
			goto Label_3852;
		}
		PlayAnimation("all", "idle");
		goto Label_3842;
	}
	goto Label_3852;
	
Label_3852:
	return 0;
	
}


func_4294()
{
	SetVariable("ood1Eva6", (int)1);
	return 0;
}


func_4549()
{
	SetVariable("ood1EvaIntro2", (int)1);
	return 0;
}


func_3527(var_2_object, var_42_string)
{
	var_43_bool = 0;
	func_4256(var_43_bool);
	var_44_bool = var_43_bool == 0; //@nz
	if(var_44_bool != 0) {
		return 0;
	}
	var_45_bool = var_42_string == var_2_object;
	if(var_45_bool != 0) {
		return 0;
	}
	var_46_string = "";
	var_42_string = var_46_string;
	func_4156(var_46_string);
	var_2_object = var_42_string;
	return 0;
}


func_5066()
{
	var_65_object = Obj(); var_66_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_66_object, (int)11, (int)2, (int)3095);
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0;
	var_66_object = var_72_object;
	func_4970(var_71_bool, var_72_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4555()
{
	SetVariable("ood1Eva1", (int)1);
	return 0;
}


func_204(var_2_object, var_55_string)
{
	var_56_bool = 0;
	func_4256(var_56_bool);
	var_57_bool = var_56_bool == 0; //@nz
	if(var_57_bool != 0) {
		return 0;
	}
	var_58_bool = var_55_string == var_2_object;
	if(var_58_bool != 0) {
		return 0;
	}
	var_59_string = "";
	var_55_string = var_59_string;
	func_4156(var_59_string);
	var_2_object = var_55_string;
	return 0;
}


func_4300(var_81_object)
{
	var_82_object = Obj(); var_83_string = ""; var_84_float = 0;
	func_4999(Obj());
	var_85_object = var_82_object;
	func_5016(var_82_object, "pt_map_georg", (float)2);
	var_105_object = Obj();
	func_4999(var_105_object);
	@@var_81_object:ShowMap(var_105_object);
	return 0;
}


func_4813(var_218_bool)
{
	var_220_int = 0; var_221_string = "";
	func_4191(var_220_int, "ood1Eva1");
	var_223_bool = var_220_int == (int)0;
	if(var_223_bool != 0) {
		var_218_bool = 1;
		return 0;
	}
	var_218_bool = 0;
	return 0;
}


func_4561()
{
	SetVariable("ood1Eva2", (int)1);
	return 0;
}


func_4567()
{
	SetVariable("KnowEva", (int)1);
	return 0;
}


func_4825(var_237_bool)
{
	var_239_int = 0; var_240_string = "";
	func_4191(var_239_int, "ood1Eva4");
	var_242_bool = var_239_int == (int)0;
	if(var_242_bool != 0) {
		var_237_bool = 1;
		return 0;
	}
	var_237_bool = 0;
	return 0;
}


func_5082()
{
	var_90_object = Obj(); var_91_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_91_object, (int)57, (int)2, (int)12139);
	var_96_bool = 0; var_97_object = Obj(); var_98_int = 0;
	var_91_object = var_97_object;
	func_4970(var_96_bool, var_97_object, (int)11);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4316()
{
	SetVariable("KnowUzly", (int)1);
	return 0;
}


func_4573()
{
	SetVariable("KnowGeorg", (int)1);
	return 0;
}


func_2785(var_2_object, var_210_string)
{
	var_211_bool = 0;
	func_4256(var_211_bool);
	var_212_bool = var_211_bool == 0; //@nz
	if(var_212_bool != 0) {
		return 0;
	}
	var_213_bool = var_210_string == var_2_object;
	if(var_213_bool != 0) {
		return 0;
	}
	var_214_string = "";
	var_210_string = var_214_string;
	func_4156(var_214_string);
	var_2_object = var_210_string;
	return 0;
}


func_4322()
{
	SetVariable("ood2Eva1", (int)1);
	return 0;
}


func_4579()
{
	SetVariable("ood6Eva1", (int)1);
	return 0;
}


func_484(var_0_object, var_1_object, var_2_object, var_3_object, var_109_object, var_110_object)
{
	var_0_object = var_110_object;
	var_1_object = var_109_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_116_bool = 0; var_117_object = Obj();
		var_117_object = var_1_object;
		func_4669(var_117_object);
		if(var_116_bool != 0) {
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_4567();
			var_126_string = "";
			func_622(var_110_object, "Neutral");
			@@@var_0_object:SetMessage((int)4496);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4501, (int)4905, (int)4904);
			@@@var_0_object:AddReply((int)4517, (int)4923, (int)4922);
			@@@var_0_object:AddReply((int)4521, (int)4923, (int)4928);
		} else {
				var_159_bool = 0; var_160_object = Obj();
				var_160_object = var_1_object;
				func_4717(var_160_object);
				if(var_159_bool != 0) {
					var_165_object = Obj(); var_166_object = Obj();
					var_165_object = var_1_object;
					var_166_object = var_0_object;
					func_4567();
					var_167_string = "";
					func_622(var_110_object, "Neutral");
					@@@var_0_object:SetMessage((int)4590);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)4591, (int)5013, (int)5012);
					@@@var_0_object:AddReply((int)4607, (int)5015, (int)5032);
					@@@var_0_object:AddReply((int)4608, (int)5015, (int)5034);
					goto Label_592;
				}
				var_178_object = Obj(); var_179_object = Obj();
				var_178_object = var_1_object;
				var_179_object = var_0_object;
				func_4444();
				var_182_object = Obj(); var_183_object = Obj();
				var_182_object = var_1_object;
				var_183_object = var_0_object;
				func_4567();
				var_184_string = "";
				func_622(var_110_object, "Neutral");
				@@@var_0_object:SetMessage((int)4568);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)4569, (int)4989, (int)4988);
				@@@var_0_object:AddReply((int)4586, (int)5007, (int)5006);
				goto Label_592;
		}
	}
Label_592:
	var_151_bool = 0;
	func_4256(var_151_bool);
	if(var_151_bool != 0) {

	Label_596:
		lshWaitForAnimEnd();
		var_152_object = var_3_object;
		if(var_152_object != 0) {
		} else {
			var_153_string = "";
			var_153_string = var_2_object;
			func_4156(var_153_string);
			goto Label_596;
	}
		PlayAnimation("all", "idle");

	Label_611:
		WaitForAnimEnd();
		var_156_object = var_3_object;
		if(var_156_object != 0) {
			goto Label_621;
		}
		PlayAnimation("all", "idle");
		goto Label_611;

	}
	goto Label_621;
	
Label_621:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1e8";


func_4837(var_207_bool)
{
	var_209_int = 0; var_210_string = "";
	func_4191(var_209_int, "ood1Eva2");
	var_214_bool = var_209_int == (int)0;
	if(var_214_bool != 0) {
		var_207_bool = 1;
		return 0;
	}
	var_207_bool = 0;
	return 0;
}


func_4328()
{
	SetVariable("ood2Eva2", (int)1);
	return 0;
}


func_4585()
{
	SetVariable("KnowMaria", (int)1);
	return 0;
}


func_5098()
{
	return 0;
}


func_5099(var_31_object)
{
	var_32_bool = 0; var_33_int = 0;
	func_4237(var_32_bool, (int)1);
	if(var_32_bool != 0) {
		var_40_int = 0; var_41_string = "";
		func_4191(var_40_int, "d1q01");
		var_45_bool = var_40_int == (int)0;
		if(var_45_bool != 0) {
			var_46_int = 0; var_47_object = Obj();
			var_31_object = var_47_object;
			TaskCall(4);
			func_421(var_48_object, var_46_int, var_47_object);
			TaskReturn();
			return 0;
		}
		var_194_int = 0; var_195_object = Obj();
		var_31_object = var_195_object;
		TaskCall(6);
		func_1266(var_196_object, var_194_int, var_195_object);
		TaskReturn();
		return 0;
	}
	var_313_bool = 0; var_314_int = 0;
	func_4237(var_313_bool, (int)2);
	if(var_313_bool != 0) {
		var_315_int = 0; var_316_object = Obj();
		var_31_object = var_316_object;
		TaskCall(8);
		func_2577(var_317_object, var_315_int, var_316_object);
		TaskReturn();
		return 0;
	}
	var_430_bool = 0; var_431_int = 0;
	func_4237(var_430_bool, (int)3);
	if(var_430_bool != 0) {
		var_432_int = 0; var_433_object = Obj();
		var_31_object = var_433_object;
		TaskCall(10);
		func_3401(var_434_object, var_432_int, var_433_object);
		TaskReturn();
		return 0;
	}
	var_485_bool = 0; var_486_int = 0;
	func_4237(var_485_bool, (int)4);
	if(var_485_bool != 0) {
		var_487_int = 0; var_488_object = Obj();
		var_31_object = var_488_object;
		TaskCall(12);
		func_3718(var_489_object, var_487_int, var_488_object);
		TaskReturn();
		return 0;
	}
	var_547_bool = 0; var_548_int = 0;
	func_4237(var_547_bool, (int)6);
	if(var_547_bool != 0) {
		var_549_int = 0; var_550_object = Obj();
		var_31_object = var_550_object;
		TaskCall(2);
		func_49(var_551_object, var_549_int, var_550_object);
		TaskReturn();
		return 0;
	}
	func_4243((bool)0);
	return 0;
}


func_4334()
{
	SetVariable("ood2Eva3", (int)1);
	return 0;
}


func_4079(var_31_bool, var_32_object)
{
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0;
	@@var_32_object:GetPosition(var_37_cvector);
	GetPosition(var_38_cvector);
	var_39_cvector = var_37_cvector - var_38_cvector;
	var_41_float = GetByIndex(var_39_cvector, 0);
	var_42_float = GetByIndex(var_39_cvector, 2);
	Rotate(var_41_float, var_42_float, var_40_bool);
	var_40_bool = var_31_bool;
	return 8;
}


func_4591()
{
	SetVariable("KnowMark", (int)1);
	return 0;
}


func_4849(var_282_bool)
{
	var_284_int = 0; var_285_string = "";
	func_4191(var_284_int, "d2q02");
	var_287_bool = var_284_int == (int)0;
	if(var_287_bool != 0) {
		var_282_bool = 1;
		return 0;
	}
	var_282_bool = 0;
	return 0;
}


func_1266(var_0_object, var_194_int, var_195_object)
{
	var_197_object = Obj(); var_198_bool = 0; var_199_int = 0; var_200_bool = 0; var_201_object = Obj(); var_202_bool = 0; var_203_int = 0; var_204_bool = 0;
	var_0_object = var_195_object;
	var_205_bool = 0; var_206_object = Obj();
	var_195_object = var_206_object;
	func_4096(var_205_bool, var_206_object);
	var_207_bool = var_205_bool == 0; //@nz
	if(var_207_bool != 0) {
		var_194_int = -2;
		return 8;
	}
	CreateDialog(var_201_object);
	var_208_int = 0;
	func_4252(var_208_int);
	@@var_201_object:SetNPCName(var_208_int);
	var_209_string = "";
	func_4254(var_209_string);
	@@var_201_object:SetPhoto(var_209_string);
	var_210_int = 0;
	func_5049(var_210_int);
	@@var_201_object:SetPlayerName(var_210_int);
	IsOverrideActive(var_202_bool);
	var_211_bool = var_202_bool;
	if(var_211_bool != 0) {
		var_194_int = -2;
		return 8;
	}
	DoDialog(var_201_object);
	var_212_object = Obj(); var_213_object = Obj();
	var_195_object = var_212_object;
	var_201_object = var_213_object;
	TaskCall(7);
	func_1329(var_214_object, var_215_object, var_216_string, var_217_bool, var_212_object, var_213_object);
	TaskReturn();
	@@var_201_object:IsDialogEnd(var_204_bool);
	
Label_1311:
	var_311_bool = var_204_bool == 0; //@nz
	if(var_311_bool != 0) {
		sync();
		@@var_201_object:IsDialogEnd(var_204_bool);
		goto Label_1311;
	}
	var_195_object = Obj();
	func_4152();
	StopDialog(var_201_object);
	@@var_201_object:GetReturnValue((int)-1);
	var_203_int = var_194_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4340()
{
	SetVariable("ood2Eva4", (int)1);
	return 0;
}


func_4597(var_108_object)
{
	var_109_object = Obj(); var_110_string = ""; var_111_float = 0;
	func_4999(Obj());
	var_112_object = var_109_object;
	func_5016(var_109_object, "pt_map_andrei", (float)2);
	var_132_object = Obj();
	func_4999(var_132_object);
	@@var_108_object:ShowMap(var_132_object);
	return 0;
}


func_4346()
{
	SetVariable("KnowRebro", (int)1);
	return 0;
}


func_4091(var_30_bool)
{
	var_31_bool = 0; var_32_bool = 0;
	IsLoaded(var_32_bool);
	var_32_bool = var_30_bool;
	return 2;
}


func_4861(var_37_bool)
{
	var_39_int = 0; var_40_string = "";
	func_4191(var_39_int, "d6q01");
	var_44_bool = var_39_int == (int)1;
	if(var_44_bool != 0) {
		var_37_bool = 1;
		return 0;
	}
	var_37_bool = 0;
	return 0;
}


