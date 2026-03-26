// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,StopGroup0/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,irand/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,FindActor/2,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,Trigger/2,Trigger/3,GetGameTime/1,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Distrust|A:SetMessage|A:ClearReplies|A:AddReply|W:Neutral|W:all|W:idle|W:Repentance|W:Patronage|W:Anger|A:GetProperty|A:SetProperty|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|W:m|W:Can't find lsh animation : |W:Door |W: not found|W:locked|A:add|W:money|W:Money|W:ui/NPC_BigVlad.png|W:ui/NPC_BigVlad_b.png|W:b3q01|W:b3q01BigVladGotoOspina|W:pt_map_ospina|A:AddMark|W:oob3BigVlad1|W:quest_b3_01|W:completed|W:oob1BigVlad1|W:oob1BigVlad2|W:oob1BigVlad3|W:oob1BigVlad4|W:b1q01|W:b1q01BigVladGotoKapella|W:pt_map_kapella|W:b1q01BigVladGotoMladVlad|W:pt_map_mladvlad|W:cot_alexandr@door1|W:cot_katerina@door1|W:b2q01|W:b2q01BigVladGotoAlexandr|W:pt_map_alexandr|W:b2q01BigVladGotoKaterina|W:pt_map_katerina|W:b2q01BigVladGotoMladVlad|W:b2q01BigVladGotoDanko|W:pt_map_eva|W:b11q01KnowWhoKilled|W:oob11BigVlad1|W:volonteers_burah|W:kill|W:bigvlad|W:oob11BigVlad2|W:oob11BigVlad3|W:oob11BigVlad4|W:oob11BigVlad5|W:b3BigVladVisit|A:ShowMap|W:b11q01|W:b11KnowBigVladKill|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0xf98
// @RUN_TASK: 16
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb0 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x2b2 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x5e8 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x8fc vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa6c vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xdd8 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0xea3 vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0xf6e vars=int,int
// @TASK_16: vars= params=0
// @EVENT_6: op=0xfb0 vars=
// @EVENT_5: op=0xfb3 vars=
// @EVENT_0: op=0xfb6 vars=object
// @PE: 0x51,0x9a,0xb0,0x230,0x29c,0x2b2,0x561,0x5d2,0x5e8,0x8ac,0x8e6,0x8fc,0x9b2,0xa56,0xa6c,0xd88,0xdc2,0xdd8,0xe53,0xe8d,0xea3,0xf1e,0xf58,0xf6e,0x1166,0x11a3,0x11a9,0x11b3,0x11bd,0x11c3,0x11c9,0x11cf,0x11f8,0x11ff,0x123b,0x1244,0x124a,0x1252,0x1258,0x125e,0x1264,0x126a,0x127b,0x128b,0x129b,0x12ab,0x12bb,0x12c7,0x12d3,0x12df,0x12eb,0x12f7,0x1303,0x130f,0x131b,0x1327,0x1333,0x133f,0x134b,0x1357,0x1363,0x1450

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_4340();
		var_45_bool = var_41_bool == (int)20759;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_4614();
			var_112_object = Obj(); var_113_object = Obj();
			var_112_object = var_1_object;
			var_113_object = var_0_object;
			func_4747(var_113_object);
			var_138_object = Obj(); var_139_object = Obj();
			var_138_object = var_1_object;
			var_139_object = var_0_object;
			func_4600();
			var_150_object = Obj(); var_151_object = Obj();
			var_150_object = var_1_object;
			var_151_object = var_0_object;
			func_4607();
		}
		var_155_bool = var_41_bool == (int)20765;
		if(var_155_bool != 0) {
			var_156_object = Obj(); var_157_object = Obj();
			var_156_object = var_1_object;
			var_157_object = var_0_object;
			func_4614();
			var_158_object = Obj(); var_159_object = Obj();
			var_158_object = var_1_object;
			var_159_object = var_0_object;
			func_4747(var_159_object);
			var_160_object = Obj(); var_161_object = Obj();
			var_160_object = var_1_object;
			var_161_object = var_0_object;
			func_4600();
			var_162_object = Obj(); var_163_object = Obj();
			var_162_object = var_1_object;
			var_163_object = var_0_object;
			func_4607();
		}
		var_165_bool = var_40_string == (int)19343;
		if(var_165_bool != 0) {
			var_166_bool = 0; var_167_object = Obj();
			var_167_object = var_1_object;
			func_4963(var_167_object);
			if(var_166_bool != 0) {
				var_174_string = "";
				func_154(var_41_bool, "Distrust");
				@@@var_0_object:SetMessage((int)518234);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)518235, (int)20742, (int)19344);
				return 0;
			}
			var_195_string = "";
			func_154(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)518236);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518237, (int)-1, (int)19346);
			return 0;
		}
		var_201_bool = var_40_string == (int)20742;
		if(var_201_bool != 0) {
			var_202_string = "";
			func_154(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519566);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519567, (int)20744, (int)20743);
			@@@var_0_object:AddReply((int)519584, (int)20746, (int)20760);
			return 0;
		}
		var_211_bool = var_40_string == (int)20744;
		if(var_211_bool != 0) {
			var_212_string = "";
			func_154(var_41_bool, "Repentance");
			@@@var_0_object:SetMessage((int)519568);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519569, (int)20746, (int)20745);
			return 0;
		}
		var_218_bool = var_40_string == (int)20746;
		if(var_218_bool != 0) {
			var_219_string = "";
			func_154(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519570);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519571, (int)20748, (int)20747);
			return 0;
		}
		var_225_bool = var_40_string == (int)20748;
		if(var_225_bool != 0) {
			var_226_string = "";
			func_154(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519572);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519574, (int)20752, (int)20750);
			@@@var_0_object:AddReply((int)519575, (int)20752, (int)20751);
			return 0;
		}
		var_235_bool = var_40_string == (int)20752;
		if(var_235_bool != 0) {
			var_236_string = "";
			func_154(var_41_bool, "Patronage");
			@@@var_0_object:SetMessage((int)519576);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519577, (int)20754, (int)20753);
			return 0;
		}
		var_242_bool = var_40_string == (int)20754;
		if(var_242_bool != 0) {
			var_243_string = "";
			func_154(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519578);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519579, (int)20756, (int)20755);
			return 0;
		}
		var_249_bool = var_40_string == (int)20756;
		if(var_249_bool != 0) {
			var_250_string = "";
			func_154(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519580);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527722, (int)29071, (int)29070);
			@@@var_0_object:AddReply((int)519587, (int)20758, (int)20766);
			return 0;
		}
		var_259_bool = var_40_string == (int)29071;
		if(var_259_bool != 0) {
			var_260_string = "";
			func_154(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)527723);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530603, (int)31907, (int)31906);
			return 0;
		}
		var_266_bool = var_40_string == (int)31907;
		if(var_266_bool != 0) {
			var_267_string = "";
			func_154(var_41_bool, "Anger");
			@@@var_0_object:SetMessage((int)530604);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519581, (int)20758, (int)20757);
			return 0;
		}
		var_273_bool = var_40_string == (int)20758;
		if(var_273_bool != 0) {
			var_274_string = "";
			func_154(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519582);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519583, (int)-1, (int)20759);
			@@@var_0_object:AddReply((int)519586, (int)-1, (int)20765);
			return 0;
		}
		var_3_string = true;
		var_282_bool = 0;
		func_4487(var_282_bool);
		if(var_282_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb1";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_4340();
		var_45_bool = var_41_bool == (int)20378;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_4489();
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_4731(var_98_object);
		}
		var_124_bool = var_41_bool == (int)20814;
		if(var_124_bool != 0) {
			var_125_object = Obj(); var_126_object = Obj();
			var_125_object = var_1_object;
			var_126_object = var_0_object;
			func_4489();
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_object;
			var_128_object = var_0_object;
			func_4731(var_128_object);
		}
		var_130_bool = var_41_bool == (int)20422;
		if(var_130_bool != 0) {
			var_131_object = Obj(); var_132_object = Obj();
			var_131_object = var_1_object;
			var_132_object = var_0_object;
			func_4521();
		}
		var_148_bool = var_41_bool == (int)20423;
		if(var_148_bool != 0) {
			var_149_object = Obj(); var_150_object = Obj();
			var_149_object = var_1_object;
			var_150_object = var_0_object;
			func_4521();
		}
		var_152_bool = var_41_bool == (int)20420;
		if(var_152_bool != 0) {
			var_153_object = Obj(); var_154_object = Obj();
			var_153_object = var_1_object;
			var_154_object = var_0_object;
			func_4521();
		}
		var_156_bool = var_41_bool == (int)20409;
		if(var_156_bool != 0) {
			var_157_object = Obj(); var_158_object = Obj();
			var_157_object = var_1_object;
			var_158_object = var_0_object;
			func_4531();
		}
		var_171_bool = var_40_string == (int)20357;
		if(var_171_bool != 0) {
			var_172_bool = 0; var_173_object = Obj();
			var_173_object = var_1_object;
			func_4879(var_173_object);
			if(var_172_bool != 0) {
				var_180_object = Obj(); var_181_object = Obj();
				var_180_object = var_1_object;
				var_181_object = var_0_object;
				func_4515();
				var_184_object = Obj(); var_185_object = Obj();
				var_184_object = var_1_object;
				var_185_object = var_0_object;
				func_4714();
				var_188_string = "";
				func_668(var_41_bool, "Neutral");
				@@@var_0_object:SetMessage((int)519215);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)519216, (int)29206, (int)20358);
				@@@var_0_object:AddReply((int)519240, (int)20385, (int)20384);
				return 0;
			}
			var_212_string = "";
			func_668(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519247);
			@@@var_0_object:ClearReplies();
			var_214_bool = 0; var_215_object = Obj();
			var_215_object = var_1_object;
			func_4891(var_215_object);
			if(var_214_bool != 0) {
				@@@var_0_object:AddReply((int)519628, (int)20811, (int)20810);
			}
			var_223_bool = 0; var_224_object = Obj();
			var_224_object = var_1_object;
			func_4903(var_224_object);
			if(var_223_bool != 0) {
				@@@var_0_object:AddReply((int)519248, (int)20399, (int)20397);
			}
			@@@var_0_object:AddReply((int)519249, (int)-1, (int)20398);
			return 0;
		}
		var_236_bool = var_40_string == (int)20399;
		if(var_236_bool != 0) {
			var_237_string = "";
			func_668(var_41_bool, "Anger");
			@@@var_0_object:SetMessage((int)519250);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519251, (int)20402, (int)20400);
			@@@var_0_object:AddReply((int)519252, (int)20402, (int)20401);
			return 0;
		}
		var_246_bool = var_40_string == (int)20402;
		if(var_246_bool != 0) {
			var_247_string = "";
			func_668(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519253);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519254, (int)20405, (int)20404);
			@@@var_0_object:AddReply((int)519256, (int)20407, (int)20406);
			return 0;
		}
		var_256_bool = var_40_string == (int)20407;
		if(var_256_bool != 0) {
			var_257_string = "";
			func_668(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519257);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519258, (int)20413, (int)20408);
			@@@var_0_object:AddReply((int)519259, (int)-1, (int)20409);
			return 0;
		}
		var_266_bool = var_40_string == (int)20405;
		if(var_266_bool != 0) {
			var_267_string = "";
			func_668(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519255);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519260, (int)20413, (int)20410);
			@@@var_0_object:AddReply((int)519261, (int)20412, (int)20411);
			return 0;
		}
		var_276_bool = var_40_string == (int)20412;
		if(var_276_bool != 0) {
			var_277_string = "";
			func_668(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519262);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519264, (int)20413, (int)20415);
			return 0;
		}
		var_283_bool = var_40_string == (int)20413;
		if(var_283_bool != 0) {
			var_284_string = "";
			func_668(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519263);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519265, (int)20418, (int)20417);
			return 0;
		}
		var_290_bool = var_40_string == (int)20418;
		if(var_290_bool != 0) {
			var_291_string = "";
			func_668(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519266);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519267, (int)20421, (int)20419);
			@@@var_0_object:AddReply((int)519268, (int)-1, (int)20420);
			return 0;
		}
		var_300_bool = var_40_string == (int)20421;
		if(var_300_bool != 0) {
			var_301_string = "";
			func_668(var_41_bool, "Repentance");
			@@@var_0_object:SetMessage((int)519269);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519270, (int)-1, (int)20422);
			@@@var_0_object:AddReply((int)519271, (int)-1, (int)20423);
			return 0;
		}
		var_310_bool = var_40_string == (int)20811;
		if(var_310_bool != 0) {
			var_311_string = "";
			func_668(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519629);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519630, (int)20813, (int)20812);
			return 0;
		}
		var_317_bool = var_40_string == (int)20813;
		if(var_317_bool != 0) {
			var_318_string = "";
			func_668(var_41_bool, "Anger");
			@@@var_0_object:SetMessage((int)519631);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519632, (int)-1, (int)20814);
			return 0;
		}
		var_324_bool = var_40_string == (int)20385;
		if(var_324_bool != 0) {
			var_325_string = "";
			func_668(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519241);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519242, (int)20359, (int)20386);
			return 0;
		}
		var_331_bool = var_40_string == (int)29206;
		if(var_331_bool != 0) {
			var_332_string = "";
			func_668(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)527862);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527863, (int)20359, (int)29207);
			return 0;
		}
		var_338_bool = var_40_string == (int)20359;
		if(var_338_bool != 0) {
			var_339_string = "";
			func_668(var_41_bool, "Patronage");
			@@@var_0_object:SetMessage((int)519217);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519218, (int)20361, (int)20360);
			@@@var_0_object:AddReply((int)519244, (int)20363, (int)20389);
			return 0;
		}
		var_348_bool = var_40_string == (int)20361;
		if(var_348_bool != 0) {
			var_349_string = "";
			func_668(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519219);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519220, (int)20363, (int)20362);
			return 0;
		}
		var_355_bool = var_40_string == (int)20363;
		if(var_355_bool != 0) {
			var_356_string = "";
			func_668(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519221);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519222, (int)20365, (int)20364);
			@@@var_0_object:AddReply((int)519245, (int)20365, (int)20391);
			return 0;
		}
		var_365_bool = var_40_string == (int)20365;
		if(var_365_bool != 0) {
			var_366_string = "";
			func_668(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519223);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519224, (int)20367, (int)20366);
			@@@var_0_object:AddReply((int)519246, (int)20369, (int)20394);
			return 0;
		}
		var_375_bool = var_40_string == (int)20367;
		if(var_375_bool != 0) {
			var_376_string = "";
			func_668(var_41_bool, "Anger");
			@@@var_0_object:SetMessage((int)519225);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519226, (int)20369, (int)20368);
			return 0;
		}
		var_382_bool = var_40_string == (int)20369;
		if(var_382_bool != 0) {
			var_383_string = "";
			func_668(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519227);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519228, (int)20375, (int)20370);
			@@@var_0_object:AddReply((int)519229, (int)20372, (int)20371);
			return 0;
		}
		var_392_bool = var_40_string == (int)20372;
		if(var_392_bool != 0) {
			var_393_string = "";
			func_668(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519230);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519231, (int)20375, (int)20373);
			@@@var_0_object:AddReply((int)519232, (int)-1, (int)20374);
			return 0;
		}
		var_402_bool = var_40_string == (int)20375;
		if(var_402_bool != 0) {
			var_403_string = "";
			func_668(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519233);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519234, (int)20377, (int)20376);
			@@@var_0_object:AddReply((int)519237, (int)20381, (int)20380);
			return 0;
		}
		var_412_bool = var_40_string == (int)20381;
		if(var_412_bool != 0) {
			var_413_string = "";
			func_668(var_41_bool, "Repentance");
			@@@var_0_object:SetMessage((int)519238);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519239, (int)20377, (int)20382);
			return 0;
		}
		var_419_bool = var_40_string == (int)20377;
		if(var_419_bool != 0) {
			var_420_string = "";
			func_668(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519235);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519236, (int)-1, (int)20378);
			return 0;
		}
		var_3_string = true;
		var_425_bool = 0;
		func_4487(var_425_bool);
		if(var_425_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x2b3";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_4340();
		var_45_bool = var_41_bool == (int)20926;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_4565();
			var_102_object = Obj(); var_103_object = Obj();
			var_102_object = var_1_object;
			var_103_object = var_0_object;
			func_4779(var_103_object);
		}
		var_129_bool = var_41_bool == (int)28438;
		if(var_129_bool != 0) {
			var_130_object = Obj(); var_131_object = Obj();
			var_130_object = var_1_object;
			var_131_object = var_0_object;
			func_4565();
			var_132_object = Obj(); var_133_object = Obj();
			var_132_object = var_1_object;
			var_133_object = var_0_object;
			func_4779(var_133_object);
		}
		var_135_bool = var_41_bool == (int)20953;
		if(var_135_bool != 0) {
			var_136_object = Obj(); var_137_object = Obj();
			var_136_object = var_1_object;
			var_137_object = var_0_object;
			func_4547();
		}
		var_141_bool = var_41_bool == (int)20957;
		if(var_141_bool != 0) {
			var_142_object = Obj(); var_143_object = Obj();
			var_142_object = var_1_object;
			var_143_object = var_0_object;
			func_4763(var_143_object);
		}
		var_150_bool = var_41_bool == (int)20958;
		if(var_150_bool != 0) {
			var_151_object = Obj(); var_152_object = Obj();
			var_151_object = var_1_object;
			var_152_object = var_0_object;
			func_4553();
		}
		var_156_bool = var_41_bool == (int)20967;
		if(var_156_bool != 0) {
			var_157_object = Obj(); var_158_object = Obj();
			var_157_object = var_1_object;
			var_158_object = var_0_object;
			func_4559();
		}
		var_162_bool = var_41_bool == (int)20969;
		if(var_162_bool != 0) {
			var_163_object = Obj(); var_164_object = Obj();
			var_163_object = var_1_object;
			var_164_object = var_0_object;
			func_4720(var_164_object);
		}
		var_188_bool = var_40_string == (int)20906;
		if(var_188_bool != 0) {
			var_189_bool = 0; var_190_object = Obj();
			var_190_object = var_1_object;
			func_4915(var_190_object);
			if(var_189_bool != 0) {
				var_197_object = Obj(); var_198_object = Obj();
				var_197_object = var_1_object;
				var_198_object = var_0_object;
				func_4541();
				var_201_string = "";
				func_1490(var_41_bool, "Neutral");
				@@@var_0_object:SetMessage((int)519752);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)519753, (int)20908, (int)20907);
				@@@var_0_object:AddReply((int)519791, (int)20910, (int)20951);
				return 0;
			}
			var_225_string = "";
			func_1490(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519792);
			@@@var_0_object:ClearReplies();
			var_227_bool = 0; var_228_object = Obj();
			var_228_object = var_1_object;
			func_4927(var_228_object);
			if(var_227_bool != 0) {
				@@@var_0_object:AddReply((int)519793, (int)20954, (int)20953);
			}
			var_236_bool = 0; var_237_object = Obj();
			var_237_object = var_1_object;
			func_4939(var_237_object);
			if(var_236_bool != 0) {
				@@@var_0_object:AddReply((int)519798, (int)28439, (int)20958);
			}
			var_245_bool = 0; var_246_object = Obj();
			var_246_object = var_1_object;
			func_4951(var_246_object);
			if(var_245_bool != 0) {
				@@@var_0_object:AddReply((int)519807, (int)20968, (int)20967);
			}
			@@@var_0_object:AddReply((int)519810, (int)-1, (int)20970);
			return 0;
		}
		var_258_bool = var_40_string == (int)20968;
		if(var_258_bool != 0) {
			var_259_string = "";
			func_1490(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519808);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519809, (int)-1, (int)20969);
			return 0;
		}
		var_265_bool = var_40_string == (int)28439;
		if(var_265_bool != 0) {
			var_266_string = "";
			func_1490(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)527140);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527141, (int)28441, (int)28440);
			return 0;
		}
		var_272_bool = var_40_string == (int)28441;
		if(var_272_bool != 0) {
			var_273_string = "";
			func_1490(var_41_bool, "Patronage");
			@@@var_0_object:SetMessage((int)527142);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519802, (int)20963, (int)20962);
			@@@var_0_object:AddReply((int)519806, (int)-1, (int)20966);
			return 0;
		}
		var_282_bool = var_40_string == (int)20963;
		if(var_282_bool != 0) {
			var_283_string = "";
			func_1490(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519803);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519804, (int)-1, (int)20964);
			@@@var_0_object:AddReply((int)519805, (int)-1, (int)20965);
			return 0;
		}
		var_292_bool = var_40_string == (int)20954;
		if(var_292_bool != 0) {
			var_293_string = "";
			func_1490(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519794);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519795, (int)20956, (int)20955);
			return 0;
		}
		var_299_bool = var_40_string == (int)20956;
		if(var_299_bool != 0) {
			var_300_string = "";
			func_1490(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519796);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519797, (int)-1, (int)20957);
			return 0;
		}
		var_306_bool = var_40_string == (int)20908;
		if(var_306_bool != 0) {
			var_307_string = "";
			func_1490(var_41_bool, "Patronage");
			@@@var_0_object:SetMessage((int)519754);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519755, (int)20910, (int)20909);
			@@@var_0_object:AddReply((int)519788, (int)20948, (int)20947);
			return 0;
		}
		var_316_bool = var_40_string == (int)20948;
		if(var_316_bool != 0) {
			var_317_string = "";
			func_1490(var_41_bool, "Anger");
			@@@var_0_object:SetMessage((int)519789);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519790, (int)20910, (int)20949);
			return 0;
		}
		var_323_bool = var_40_string == (int)20910;
		if(var_323_bool != 0) {
			var_324_string = "";
			func_1490(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519756);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519757, (int)20912, (int)20911);
			@@@var_0_object:AddReply((int)519783, (int)20942, (int)20941);
			return 0;
		}
		var_333_bool = var_40_string == (int)20942;
		if(var_333_bool != 0) {
			var_334_string = "";
			func_1490(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519784);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519785, (int)20944, (int)20943);
			return 0;
		}
		var_340_bool = var_40_string == (int)20944;
		if(var_340_bool != 0) {
			var_341_string = "";
			func_1490(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519786);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519787, (int)20912, (int)20945);
			return 0;
		}
		var_347_bool = var_40_string == (int)20912;
		if(var_347_bool != 0) {
			var_348_string = "";
			func_1490(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519758);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519759, (int)20914, (int)20913);
			@@@var_0_object:AddReply((int)519782, (int)20920, (int)20939);
			return 0;
		}
		var_357_bool = var_40_string == (int)20914;
		if(var_357_bool != 0) {
			var_358_string = "";
			func_1490(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519760);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519761, (int)20916, (int)20915);
			@@@var_0_object:AddReply((int)519777, (int)20934, (int)20933);
			return 0;
		}
		var_367_bool = var_40_string == (int)20934;
		if(var_367_bool != 0) {
			var_368_string = "";
			func_1490(var_41_bool, "Patronage");
			@@@var_0_object:SetMessage((int)519778);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519779, (int)20936, (int)20935);
			return 0;
		}
		var_374_bool = var_40_string == (int)20936;
		if(var_374_bool != 0) {
			var_375_string = "";
			func_1490(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519780);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519781, (int)20916, (int)20937);
			return 0;
		}
		var_381_bool = var_40_string == (int)20916;
		if(var_381_bool != 0) {
			var_382_string = "";
			func_1490(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519762);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519763, (int)20918, (int)20917);
			@@@var_0_object:AddReply((int)519773, (int)20928, (int)20927);
			return 0;
		}
		var_391_bool = var_40_string == (int)20928;
		if(var_391_bool != 0) {
			var_392_string = "";
			func_1490(var_41_bool, "Patronage");
			@@@var_0_object:SetMessage((int)519774);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519775, (int)20920, (int)20929);
			@@@var_0_object:AddReply((int)519776, (int)20920, (int)20931);
			return 0;
		}
		var_401_bool = var_40_string == (int)20918;
		if(var_401_bool != 0) {
			var_402_string = "";
			func_1490(var_41_bool, "Repentance");
			@@@var_0_object:SetMessage((int)519764);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519765, (int)20920, (int)20919);
			@@@var_0_object:AddReply((int)527079, (int)28377, (int)28376);
			return 0;
		}
		var_411_bool = var_40_string == (int)28377;
		if(var_411_bool != 0) {
			var_412_string = "";
			func_1490(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)527080);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527081, (int)20920, (int)28378);
			return 0;
		}
		var_418_bool = var_40_string == (int)20920;
		if(var_418_bool != 0) {
			var_419_string = "";
			func_1490(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519766);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519767, (int)20922, (int)20921);
			return 0;
		}
		var_425_bool = var_40_string == (int)20922;
		if(var_425_bool != 0) {
			var_426_string = "";
			func_1490(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)519768);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519769, (int)20924, (int)20923);
			return 0;
		}
		var_432_bool = var_40_string == (int)20924;
		if(var_432_bool != 0) {
			var_433_string = "";
			func_1490(var_41_bool, "Anger");
			@@@var_0_object:SetMessage((int)519770);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527082, (int)28381, (int)28380);
			return 0;
		}
		var_439_bool = var_40_string == (int)28381;
		if(var_439_bool != 0) {
			var_440_string = "";
			func_1490(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)527083);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519772, (int)-1, (int)20926);
			@@@var_0_object:AddReply((int)527139, (int)-1, (int)28438);
			return 0;
		}
		var_3_string = true;
		var_448_bool = 0;
		func_4487(var_448_bool);
		if(var_448_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x5e9";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_4340();
		var_45_bool = var_40_string == (int)21908;
		if(var_45_bool != 0) {
			var_46_string = "";
			func_2278(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520698);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520699, (int)21910, (int)21909);
			@@@var_0_object:AddReply((int)520705, (int)21916, (int)21915);
			return 0;
		}
		var_71_bool = var_40_string == (int)21916;
		if(var_71_bool != 0) {
			var_72_string = "";
			func_2278(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520706);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520707, (int)21912, (int)21917);
			return 0;
		}
		var_78_bool = var_40_string == (int)21910;
		if(var_78_bool != 0) {
			var_79_string = "";
			func_2278(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520700);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520701, (int)21912, (int)21911);
			return 0;
		}
		var_85_bool = var_40_string == (int)21912;
		if(var_85_bool != 0) {
			var_86_string = "";
			func_2278(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520702);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520703, (int)-1, (int)21913);
			@@@var_0_object:AddReply((int)520704, (int)-1, (int)21914);
			return 0;
		}
		var_3_string = true;
		var_94_bool = 0;
		func_4487(var_94_bool);
		if(var_94_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x8fd";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_4340();
		var_45_bool = var_41_bool == (int)23252;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_4667();
		}
		var_74_bool = var_41_bool == (int)24761;
		if(var_74_bool != 0) {
			var_75_object = Obj(); var_76_object = Obj();
			var_75_object = var_1_object;
			var_76_object = var_0_object;
			func_4667();
		}
		var_78_bool = var_41_bool == (int)24693;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_4690();
		}
		var_84_bool = var_41_bool == (int)24694;
		if(var_84_bool != 0) {
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_4696();
		}
		var_90_bool = var_41_bool == (int)24705;
		if(var_90_bool != 0) {
			var_91_object = Obj(); var_92_object = Obj();
			var_91_object = var_1_object;
			var_92_object = var_0_object;
			func_4702();
		}
		var_96_bool = var_41_bool == (int)24714;
		if(var_96_bool != 0) {
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_4682();
		}
		var_107_bool = var_41_bool == (int)24715;
		if(var_107_bool != 0) {
			var_108_object = Obj(); var_109_object = Obj();
			var_108_object = var_1_object;
			var_109_object = var_0_object;
			func_4682();
		}
		var_111_bool = var_41_bool == (int)24738;
		if(var_111_bool != 0) {
			var_112_object = Obj(); var_113_object = Obj();
			var_112_object = var_1_object;
			var_113_object = var_0_object;
			func_4708();
		}
		var_117_bool = var_40_string == (int)23251;
		if(var_117_bool != 0) {
			var_118_bool = 0; var_119_object = Obj();
			var_119_object = var_1_object;
			func_4807(var_119_object);
			if(var_118_bool != 0) {
				var_126_object = Obj(); var_127_object = Obj();
				var_126_object = var_1_object;
				var_127_object = var_0_object;
				func_4676();
				var_130_string = "";
				func_2646(var_41_bool, "Neutral");
				@@@var_0_object:SetMessage((int)522082);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)523463, (int)24690, (int)24689);
				@@@var_0_object:AddReply((int)523518, (int)24749, (int)24748);
				@@@var_0_object:AddReply((int)523517, (int)24750, (int)24747);
				return 0;
			}
			var_157_string = "";
			func_2646(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)522085);
			@@@var_0_object:ClearReplies();
			var_159_bool = 0;
			var_159_bool = 0;
			var_160_bool = 0; var_161_object = Obj();
			var_161_object = var_1_object;
			func_4819(var_161_object);
			if(var_160_bool != 0) {
				var_166_bool = 0; var_167_object = Obj();
				var_167_object = var_1_object;
				func_4831(var_167_object);
				if(var_166_bool != 0) {
					var_159_bool = 1;
				}
			}
			if(var_159_bool != 0) {
				@@@var_0_object:AddReply((int)523467, (int)24695, (int)24693);
			}
			var_175_bool = 0;
			var_175_bool = 0;
			var_176_bool = 0; var_177_object = Obj();
			var_177_object = var_1_object;
			func_4819(var_177_object);
			if(var_176_bool != 0) {
				var_178_bool = 0; var_179_object = Obj();
				var_179_object = var_1_object;
				func_4843(var_179_object);
				if(var_178_bool != 0) {
					var_175_bool = 1;
				}
			}
			if(var_175_bool != 0) {
				@@@var_0_object:AddReply((int)523468, (int)24699, (int)24694);
			}
			var_187_bool = 0;
			var_187_bool = 0;
			var_188_bool = 0; var_189_object = Obj();
			var_189_object = var_1_object;
			func_4819(var_189_object);
			if(var_188_bool != 0) {
				var_190_bool = 0; var_191_object = Obj();
				var_191_object = var_1_object;
				func_4855(var_191_object);
				if(var_190_bool != 0) {
					var_187_bool = 1;
				}
			}
			if(var_187_bool != 0) {
				@@@var_0_object:AddReply((int)523479, (int)24706, (int)24705);
			}
			var_199_bool = 0;
			var_199_bool = 0;
			var_200_bool = 0; var_201_object = Obj();
			var_201_object = var_1_object;
			func_4819(var_201_object);
			if(var_200_bool != 0) {
				var_202_bool = 0; var_203_object = Obj();
				var_203_object = var_1_object;
				func_4867(var_203_object);
				if(var_202_bool != 0) {
					var_199_bool = 1;
				}
			}
			if(var_199_bool != 0) {
				@@@var_0_object:AddReply((int)523508, (int)24739, (int)24738);
			}
			@@@var_0_object:AddReply((int)522086, (int)-1, (int)23255);
			return 0;
		}
		var_215_bool = var_40_string == (int)24739;
		if(var_215_bool != 0) {
			var_216_string = "";
			func_2646(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523509);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523510, (int)24742, (int)24740);
			@@@var_0_object:AddReply((int)523511, (int)-1, (int)24741);
			return 0;
		}
		var_225_bool = var_40_string == (int)24742;
		if(var_225_bool != 0) {
			var_226_string = "";
			func_2646(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523512);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523513, (int)-1, (int)24743);
			@@@var_0_object:AddReply((int)523514, (int)24745, (int)24744);
			return 0;
		}
		var_235_bool = var_40_string == (int)24745;
		if(var_235_bool != 0) {
			var_236_string = "";
			func_2646(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523515);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523516, (int)-1, (int)24746);
			return 0;
		}
		var_242_bool = var_40_string == (int)24706;
		if(var_242_bool != 0) {
			var_243_string = "";
			func_2646(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523480);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523481, (int)24709, (int)24707);
			@@@var_0_object:AddReply((int)523482, (int)24709, (int)24708);
			return 0;
		}
		var_252_bool = var_40_string == (int)24709;
		if(var_252_bool != 0) {
			var_253_string = "";
			func_2646(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523483);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523484, (int)24713, (int)24710);
			@@@var_0_object:AddReply((int)523485, (int)24713, (int)24711);
			return 0;
		}
		var_262_bool = var_40_string == (int)24713;
		if(var_262_bool != 0) {
			var_263_string = "";
			func_2646(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523487);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523488, (int)-1, (int)24714);
			@@@var_0_object:AddReply((int)523489, (int)-1, (int)24715);
			return 0;
		}
		var_272_bool = var_40_string == (int)24699;
		if(var_272_bool != 0) {
			var_273_string = "";
			func_2646(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523473);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523474, (int)24701, (int)24700);
			return 0;
		}
		var_279_bool = var_40_string == (int)24701;
		if(var_279_bool != 0) {
			var_280_string = "";
			func_2646(var_41_bool, "Patronage");
			@@@var_0_object:SetMessage((int)523475);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523476, (int)24703, (int)24702);
			return 0;
		}
		var_286_bool = var_40_string == (int)24703;
		if(var_286_bool != 0) {
			var_287_string = "";
			func_2646(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523477);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523490, (int)24720, (int)24718);
			@@@var_0_object:AddReply((int)523491, (int)-1, (int)24719);
			return 0;
		}
		var_296_bool = var_40_string == (int)24720;
		if(var_296_bool != 0) {
			var_297_string = "";
			func_2646(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523492);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523493, (int)-1, (int)24721);
			return 0;
		}
		var_303_bool = var_40_string == (int)24695;
		if(var_303_bool != 0) {
			var_304_string = "";
			func_2646(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523469);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523470, (int)24697, (int)24696);
			return 0;
		}
		var_310_bool = var_40_string == (int)24697;
		if(var_310_bool != 0) {
			var_311_string = "";
			func_2646(var_41_bool, "Repentance");
			@@@var_0_object:SetMessage((int)523471);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523472, (int)24704, (int)24698);
			return 0;
		}
		var_317_bool = var_40_string == (int)24704;
		if(var_317_bool != 0) {
			var_318_string = "";
			func_2646(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523478);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523494, (int)24723, (int)24722);
			@@@var_0_object:AddReply((int)523501, (int)24730, (int)24729);
			return 0;
		}
		var_327_bool = var_40_string == (int)24730;
		if(var_327_bool != 0) {
			var_328_string = "";
			func_2646(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523502);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523503, (int)24723, (int)24731);
			return 0;
		}
		var_334_bool = var_40_string == (int)24723;
		if(var_334_bool != 0) {
			var_335_string = "";
			func_2646(var_41_bool, "Anger");
			@@@var_0_object:SetMessage((int)523495);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523499, (int)24728, (int)24727);
			@@@var_0_object:AddReply((int)523496, (int)24725, (int)24724);
			return 0;
		}
		var_344_bool = var_40_string == (int)24725;
		if(var_344_bool != 0) {
			var_345_string = "";
			func_2646(var_41_bool, "Repentance");
			@@@var_0_object:SetMessage((int)523497);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523498, (int)24728, (int)24726);
			return 0;
		}
		var_351_bool = var_40_string == (int)24728;
		if(var_351_bool != 0) {
			var_352_string = "";
			func_2646(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523500);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523504, (int)24735, (int)24734);
			return 0;
		}
		var_358_bool = var_40_string == (int)24735;
		if(var_358_bool != 0) {
			var_359_string = "";
			func_2646(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523505);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523506, (int)-1, (int)24736);
			@@@var_0_object:AddReply((int)523507, (int)-1, (int)24737);
			return 0;
		}
		var_368_bool = var_40_string == (int)24750;
		if(var_368_bool != 0) {
			var_369_string = "";
			func_2646(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523520);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523521, (int)24752, (int)24751);
			@@@var_0_object:AddReply((int)523527, (int)24690, (int)24759);
			return 0;
		}
		var_378_bool = var_40_string == (int)24752;
		if(var_378_bool != 0) {
			var_379_string = "";
			func_2646(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523522);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523523, (int)24754, (int)24753);
			return 0;
		}
		var_385_bool = var_40_string == (int)24754;
		if(var_385_bool != 0) {
			var_386_string = "";
			func_2646(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523524);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523525, (int)24690, (int)24755);
			return 0;
		}
		var_392_bool = var_40_string == (int)24749;
		if(var_392_bool != 0) {
			var_393_string = "";
			func_2646(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523519);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523526, (int)24750, (int)24757);
			return 0;
		}
		var_399_bool = var_40_string == (int)24690;
		if(var_399_bool != 0) {
			var_400_string = "";
			func_2646(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)523464);
			@@@var_0_object:ClearReplies();
			var_402_bool = 0; var_403_object = Obj();
			var_403_object = var_1_object;
			func_4795(var_403_object);
			var_408_bool = var_402_bool == 0; //@nz
			if(var_408_bool != 0) {
				@@@var_0_object:AddReply((int)523465, (int)24692, (int)24691);
			}
			var_412_bool = 0; var_413_object = Obj();
			var_413_object = var_1_object;
			func_4795(var_413_object);
			if(var_412_bool != 0) {
				@@@var_0_object:AddReply((int)522084, (int)-1, (int)23253);
			}
			return 0;
		}
		var_418_bool = var_40_string == (int)24692;
		if(var_418_bool != 0) {
			var_419_string = "";
			func_2646(var_41_bool, "Repentance");
			@@@var_0_object:SetMessage((int)523466);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)522083, (int)-1, (int)23252);
			@@@var_0_object:AddReply((int)523528, (int)-1, (int)24761);
			return 0;
		}
		var_3_string = true;
		var_427_bool = 0;
		func_4487(var_427_bool);
		if(var_427_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa6d";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_4340();
		var_45_bool = var_40_string == (int)31281;
		if(var_45_bool != 0) {
			var_46_string = "";
			func_3522(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)529898);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529899, (int)-1, (int)31282);
			@@@var_0_object:AddReply((int)529900, (int)-1, (int)31283);
			return 0;
		}
		var_3_string = true;
		var_70_bool = 0;
		func_4487(var_70_bool);
		if(var_70_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xdd9";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	if((int)1 != 0) {
		func_4340();
		var_45_bool = var_40_string == (int)31285;
		if(var_45_bool != 0) {
			var_46_string = "";
			func_3725(var_41_bool, "Neutral");
			@@@var_0_object:SetMessage((int)529902);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529903, (int)-1, (int)31286);
			@@@var_0_object:AddReply((int)529904, (int)-1, (int)31287);
			return 0;
		}
		var_3_string = true;
		var_70_bool = 0;
		func_4487(var_70_bool);
		if(var_70_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xea4";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int)
{
	if((int)1 != 0) {
		func_4340();
		var_45_bool = var_40_int == (int)42563;
		if(var_45_bool != 0) {
			var_46_string = "";
			func_3928(var_41_int, "Neutral");
			@@@var_0_object:SetMessage((int)540554);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540555, (int)-1, (int)42564);
			@@@var_0_object:AddReply((int)540794, (int)-1, (int)42843);
			return 0;
		}
		var_3_string = true;
		var_70_bool = 0;
		func_4487(var_70_bool);
		if(var_70_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xf6f";
	
}


task_16_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool)
{
	Hold();
	return 0;
}


task_16_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool)
{
	StopGroup0();
	return 0;
}


task_16_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object)
{
	var_41_bool = 0; var_42_bool = 0;
	IsOverrideActive(var_42_bool);
	var_43_bool = var_42_bool == 0; //@nz
	if(var_43_bool != 0) {
		EventDisable(0);
		var_44_bool = 0; var_45_object = Obj();
		var_40_object = var_45_object;
		func_4055(var_44_bool, var_45_object);
		EventEnable(0);
		var_58_object = Obj();
		var_40_object = var_58_object;
		func_5200(var_58_object);
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool)
{
	var_40_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_3999();
	return 0;
}


func_0(var_0_object, var_521_int, var_522_object)
{
	var_524_object = Obj(); var_525_bool = 0; var_526_int = 0; var_527_bool = 0; var_528_object = Obj(); var_529_bool = 0; var_530_int = 0; var_531_bool = 0;
	var_0_object = var_522_object;
	var_532_bool = 0; var_533_object = Obj(); var_534_float = 0;
	var_522_object = var_533_object;
	func_4069(var_532_bool, var_533_object, (float)70.0);
	var_535_bool = var_532_bool == 0; //@nz
	if(var_535_bool != 0) {
		var_521_int = -2;
		return 8;
	}
	CreateDialog(var_528_object);
	var_536_int = 0;
	func_4481(var_536_int);
	@@var_528_object:SetNPCName(var_536_int);
	var_537_int = 0;
	func_4479(var_537_int);
	@@var_528_object:SetNPCDescription(var_537_int);
	var_538_string = "";
	func_4483(var_538_string);
	@@var_528_object:SetPhoto(var_538_string);
	var_539_string = "";
	func_4485(var_539_string);
	@@var_528_object:SetPhoto2(var_539_string);
	var_540_int = 0;
	func_5183(var_540_int);
	@@var_528_object:SetPlayerName(var_540_int);
	IsOverrideActive(var_529_bool);
	var_541_bool = var_529_bool;
	if(var_541_bool != 0) {
		var_521_int = -2;
		return 8;
	}
	DoDialog(var_528_object);
	var_542_bool = 0; var_543_object = Obj();
	func_4347(Obj());
	var_544_object = var_543_object;
	func_4156(var_542_bool, var_543_object);
	var_545_object = Obj(); var_546_object = Obj();
	var_522_object = var_545_object;
	var_528_object = var_546_object;
	TaskCall(1);
	func_81(var_547_object, var_548_object, var_549_string, var_550_bool, var_545_object, var_546_object);
	TaskReturn();
	@@var_528_object:IsDialogEnd(var_531_bool);
	
Label_63:
	var_583_bool = var_531_bool == 0; //@nz
	if(var_583_bool != 0) {
		sync();
		@@var_528_object:IsDialogEnd(var_531_bool);
		goto Label_63;
	}
	var_522_object = Obj();
	func_4138();
	StopDialog(var_528_object);
	@@var_528_object:GetReturnValue((int)-1);
	var_530_int = var_521_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4353(var_99_cvector, var_100_cvector)
{
	var_102_float = 0; var_103_float = 0;
	var_104_int = var_100_cvector | var_100_cvector;
	var_103_float = sqrt(var_104_int);
	var_105_float = 9.999999974752427e-07;
	var_106_bool = var_103_float < var_105_float;
	if(var_106_bool != 0) {
		var_99_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_99_cvector = var_100_cvector / var_103_float;
	return 2;
}


func_3586(var_0_object, var_360_int, var_361_object)
{
	var_363_object = Obj(); var_364_bool = 0; var_365_int = 0; var_366_bool = 0; var_367_object = Obj(); var_368_bool = 0; var_369_int = 0; var_370_bool = 0;
	var_0_object = var_361_object;
	var_371_bool = 0; var_372_object = Obj(); var_373_float = 0;
	var_361_object = var_372_object;
	func_4069(var_371_bool, var_372_object, (float)70.0);
	var_374_bool = var_371_bool == 0; //@nz
	if(var_374_bool != 0) {
		var_360_int = -2;
		return 8;
	}
	CreateDialog(var_367_object);
	var_375_int = 0;
	func_4481(var_375_int);
	@@var_367_object:SetNPCName(var_375_int);
	var_376_int = 0;
	func_4479(var_376_int);
	@@var_367_object:SetNPCDescription(var_376_int);
	var_377_string = "";
	func_4483(var_377_string);
	@@var_367_object:SetPhoto(var_377_string);
	var_378_string = "";
	func_4485(var_378_string);
	@@var_367_object:SetPhoto2(var_378_string);
	var_379_int = 0;
	func_5183(var_379_int);
	@@var_367_object:SetPlayerName(var_379_int);
	IsOverrideActive(var_368_bool);
	var_380_bool = var_368_bool;
	if(var_380_bool != 0) {
		var_360_int = -2;
		return 8;
	}
	DoDialog(var_367_object);
	var_381_bool = 0; var_382_object = Obj();
	func_4347(Obj());
	var_383_object = var_382_object;
	func_4156(var_381_bool, var_382_object);
	var_384_object = Obj(); var_385_object = Obj();
	var_361_object = var_384_object;
	var_367_object = var_385_object;
	TaskCall(13);
	func_3667(var_386_object, var_387_object, var_388_string, var_389_bool, var_384_object, var_385_object);
	TaskReturn();
	@@var_367_object:IsDialogEnd(var_370_bool);
	
Label_3649:
	var_414_bool = var_370_bool == 0; //@nz
	if(var_414_bool != 0) {
		sync();
		@@var_367_object:IsDialogEnd(var_370_bool);
		goto Label_3649;
	}
	var_361_object = Obj();
	func_4138();
	StopDialog(var_367_object);
	@@var_367_object:GetReturnValue((int)-1);
	var_369_int = var_360_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4867(var_794_bool)
{
	var_796_int = 0; var_797_string = "";
	func_4363(var_796_int, "oob11BigVlad5");
	var_799_bool = var_796_int == (int)0;
	if(var_799_bool != 0) {
		var_794_bool = 1;
		return 0;
	}
	var_794_bool = 0;
	return 0;
}


func_4614()
{
	var_48_object = Obj(); var_49_object = Obj();
	SetVariable("b2q01", (int)1);
	func_5133(Obj());
	var_52_object = var_49_object;
	var_63_float = 0;
	func_4440(var_63_float);
	@@var_49_object:AddMark("b2q01BigVladGotoAlexandr", "pt_map_alexandr", (int)1, (int)519625, var_63_float);
	var_70_float = 0;
	func_4440(var_70_float);
	@@var_49_object:AddMark("b2q01BigVladGotoKaterina", "pt_map_katerina", (int)1, (int)519626, var_70_float);
	var_75_float = 0;
	func_4440(var_75_float);
	@@var_49_object:AddMark("b2q01BigVladGotoMladVlad", "pt_map_mladvlad", (int)3, (int)519624, var_75_float);
	var_80_float = 0;
	func_4440(var_80_float);
	@@var_49_object:AddMark("b2q01BigVladGotoDanko", "pt_map_eva", (int)3, (int)530806, var_80_float);
	func_5014();
	func_5027();
	return 2;
}
EMIT "Stack[-1] = 0";


func_4363(var_452_int, var_453_string)
{
	var_454_int = 0; var_455_int = 0;
	GetVariable(var_453_string, var_455_int);
	var_455_int = var_452_int;
	return 2;
}


func_5133(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_object = Obj(); var_56_object = Obj();
	GetMainOutdoorScene(var_55_object);
	var_57_bool = var_55_object == 0; //@ne
	if(var_57_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_56_object = 0;
		var_56_object = var_52_object;
		return 4;
	}
	@@var_55_object:GetMap(var_56_object);
	var_56_object = var_52_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4879(var_618_bool)
{
	var_620_int = 0; var_621_string = "";
	func_4363(var_620_int, "oob3BigVlad1");
	var_623_bool = var_620_int == (int)0;
	if(var_623_bool != 0) {
		var_618_bool = 1;
		return 0;
	}
	var_618_bool = 0;
	return 0;
}


func_4368(var_140_string, var_141_bool)
{
	var_142_object = Obj(); var_143_object = Obj();
	FindActor(var_143_object, var_140_string);
	var_144_bool = var_143_object == 0; //@nz
	if(var_144_bool != 0) {
		var_146_int = "Door " + var_140_string;
		var_148_int = var_146_int + " not found";
		Trace(var_148_int);
	} else {
		@@var_143_object:SetProperty("locked", var_141_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_1296(var_0_object, var_419_int, var_420_object)
{
	var_422_object = Obj(); var_423_bool = 0; var_424_int = 0; var_425_bool = 0; var_426_object = Obj(); var_427_bool = 0; var_428_int = 0; var_429_bool = 0;
	var_0_object = var_420_object;
	var_430_bool = 0; var_431_object = Obj(); var_432_float = 0;
	var_420_object = var_431_object;
	func_4069(var_430_bool, var_431_object, (float)70.0);
	var_433_bool = var_430_bool == 0; //@nz
	if(var_433_bool != 0) {
		var_419_int = -2;
		return 8;
	}
	CreateDialog(var_426_object);
	var_434_int = 0;
	func_4481(var_434_int);
	@@var_426_object:SetNPCName(var_434_int);
	var_435_int = 0;
	func_4479(var_435_int);
	@@var_426_object:SetNPCDescription(var_435_int);
	var_436_string = "";
	func_4483(var_436_string);
	@@var_426_object:SetPhoto(var_436_string);
	var_437_string = "";
	func_4485(var_437_string);
	@@var_426_object:SetPhoto2(var_437_string);
	var_438_int = 0;
	func_5183(var_438_int);
	@@var_426_object:SetPlayerName(var_438_int);
	IsOverrideActive(var_427_bool);
	var_439_bool = var_427_bool;
	if(var_439_bool != 0) {
		var_419_int = -2;
		return 8;
	}
	DoDialog(var_426_object);
	var_440_bool = 0; var_441_object = Obj();
	func_4347(Obj());
	var_442_object = var_441_object;
	func_4156(var_440_bool, var_441_object);
	var_443_object = Obj(); var_444_object = Obj();
	var_420_object = var_443_object;
	var_426_object = var_444_object;
	TaskCall(5);
	func_1377(var_445_object, var_446_object, var_447_string, var_448_bool, var_443_object, var_444_object);
	TaskReturn();
	@@var_426_object:IsDialogEnd(var_429_bool);
	
Label_1359:
	var_517_bool = var_429_bool == 0; //@nz
	if(var_517_bool != 0) {
		sync();
		@@var_426_object:IsDialogEnd(var_429_bool);
		goto Label_1359;
	}
	var_420_object = Obj();
	func_4138();
	StopDialog(var_426_object);
	@@var_426_object:GetReturnValue((int)-1);
	var_428_int = var_419_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4891(var_657_bool)
{
	var_659_int = 0; var_660_string = "";
	func_4363(var_659_int, "b3q01");
	var_662_bool = var_659_int == (int)0;
	if(var_662_bool != 0) {
		var_657_bool = 1;
		return 0;
	}
	var_657_bool = 0;
	return 0;
}


func_5150(var_104_object, var_105_string, var_106_float)
{
	var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_object = Obj(); var_111_bool = 0; var_112_cvector = CVector(0,0,0); var_113_cvector = CVector(0,0,0); var_114_object = Obj(); var_115_bool = 0;
	GetMainOutdoorScene(var_114_object);
	var_116_bool = var_114_object == 0; //@ne
	if(var_116_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_114_object:GetLocator(var_105_string, var_115_bool, var_112_cvector, var_113_cvector);
	var_118_bool = var_115_bool == 0; //@nz
	if(var_118_bool != 0) {
		var_120_int = "Warning: outdoor scene locator " + var_105_string;
		var_122_int = var_120_int + " doesnt exist";
		Trace(var_122_int);
	}
	@@var_114_object:GetMap(var_104_object);
	var_123_bool = var_104_object == 0; //@ne
	if(var_123_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_125_float = GetByIndex(var_112_cvector, 0);
	var_126_float = GetByIndex(var_112_cvector, 2);
	@@var_104_object:SetMapParams(var_125_float, var_126_float, var_106_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_3870(var_0_object, var_1_object, var_2_object, var_3_string, var_832_object, var_833_object)
{
	var_0_object = var_833_object;
	var_1_object = var_832_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_839_string = "";
		func_3928(var_833_object, "Neutral");
		@@@var_0_object:SetMessage((int)540554);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540555, (int)-1, (int)42564);
		@@@var_0_object:AddReply((int)540794, (int)-1, (int)42843);
		goto Label_3898;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xf22";
	}
Label_3898:
	var_854_bool = 0;
	func_4487(var_854_bool);
	if(var_854_bool != 0) {

	Label_3902:
		lshWaitForAnimEnd();
		var_855_string = var_3_string;
		if(var_855_string != 0) {
		} else {
			var_856_string = "";
			var_856_string = var_2_object;
			func_4294(var_856_string);
			goto Label_3902;
	}
		PlayAnimation("all", "idle");

	Label_3917:
		WaitForAnimEnd();
		var_859_string = var_3_string;
		if(var_859_string != 0) {
			goto Label_3927;
		}
		PlayAnimation("all", "idle");
		goto Label_3917;
	}
	goto Label_3927;
	
Label_3927:
	return 0;
	
}


func_4385(var_182_int, var_183_int)
{
	var_184_object = Obj(); var_185_object = Obj();
	CreateIntVector(var_185_object);
	@@var_185_object:add(var_182_int);
	@@var_185_object:add(var_183_int);
	SendWorldWndMessage((int)3, var_185_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4903(var_666_bool)
{
	var_668_int = 0; var_669_string = "";
	func_4363(var_668_int, "b3q01");
	var_671_bool = var_668_int == (int)3;
	if(var_671_bool != 0) {
		var_666_bool = 1;
		return 0;
	}
	var_666_bool = 0;
	return 0;
}


func_4138()
{
	var_279_bool = 0; var_280_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_282_bool = 0;
	func_4487(var_282_bool);
	if(var_282_bool != 0) {
	} else {
		HasAnimationTrack(var_280_bool, "head");
		var_284_bool = var_280_bool;
		if(var_284_bool == 0) goto Label_4155;
		UnlookAsync("head");
	}
Label_4155:
	return 2;
	
}


func_4397(var_168_object, var_169_int)
{
	var_171_int = 0; var_172_int = 0;
	var_173_object = Obj(); var_174_string = ""; var_175_int = 0;
	var_168_object = var_173_object;
	var_169_int = var_175_int;
	func_4038(var_173_object, "money", var_175_int);
	var_180_bool = var_169_int > (int)0;
	if(var_180_bool != 0) {
		GetInvItemByName(var_172_int, "Money");
		var_182_int = 0; var_183_int = 0;
		var_172_int = var_182_int;
		var_169_int = var_183_int;
		func_4385(var_182_int, var_183_int);
	}
	return 2;
}


func_560(var_0_object, var_1_object, var_2_object, var_3_string, var_611_object, var_612_object)
{
	var_0_object = var_612_object;
	var_1_object = var_611_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_618_bool = 0; var_619_object = Obj();
		var_619_object = var_1_object;
		func_4879(var_619_object);
		if(var_618_bool != 0) {
			var_624_object = Obj(); var_625_object = Obj();
			var_624_object = var_1_object;
			var_625_object = var_0_object;
			func_4515();
			var_628_object = Obj(); var_629_object = Obj();
			var_628_object = var_1_object;
			var_629_object = var_0_object;
			func_4714();
			var_632_string = "";
			func_668(var_612_object, "Neutral");
			@@@var_0_object:SetMessage((int)519215);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519216, (int)29206, (int)20358);
			@@@var_0_object:AddReply((int)519240, (int)20385, (int)20384);
		} else {
				var_655_string = "";
				func_668(var_612_object, "Neutral");
				@@@var_0_object:SetMessage((int)519247);
				@@@var_0_object:ClearReplies();
				var_657_bool = 0; var_658_object = Obj();
				var_658_object = var_1_object;
				func_4891(var_658_object);
				if(var_657_bool != 0) {
					@@@var_0_object:AddReply((int)519628, (int)20811, (int)20810);
				}
				var_666_bool = 0; var_667_object = Obj();
				var_667_object = var_1_object;
				func_4903(var_667_object);
				if(var_666_bool != 0) {
					@@@var_0_object:AddReply((int)519248, (int)20399, (int)20397);
				}
				@@@var_0_object:AddReply((int)519249, (int)-1, (int)20398);
				goto Label_638;
		}
	}
Label_638:
	var_647_bool = 0;
	func_4487(var_647_bool);
	if(var_647_bool != 0) {

	Label_642:
		lshWaitForAnimEnd();
		var_648_string = var_3_string;
		if(var_648_string != 0) {
		} else {
			var_649_string = "";
			var_649_string = var_2_object;
			func_4294(var_649_string);
			goto Label_642;
	}
		PlayAnimation("all", "idle");

	Label_657:
		WaitForAnimEnd();
		var_652_string = var_3_string;
		if(var_652_string != 0) {
			goto Label_667;
		}
		PlayAnimation("all", "idle");
		goto Label_657;

	}
	goto Label_667;
	
Label_667:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x234";


func_4915(var_450_bool)
{
	var_452_int = 0; var_453_string = "";
	func_4363(var_452_int, "oob1BigVlad1");
	var_457_bool = var_452_int == (int)0;
	if(var_457_bool != 0) {
		var_450_bool = 1;
		return 0;
	}
	var_450_bool = 0;
	return 0;
}


func_3383(var_0_object, var_302_int, var_303_object)
{
	var_305_object = Obj(); var_306_bool = 0; var_307_int = 0; var_308_bool = 0; var_309_object = Obj(); var_310_bool = 0; var_311_int = 0; var_312_bool = 0;
	var_0_object = var_303_object;
	var_313_bool = 0; var_314_object = Obj(); var_315_float = 0;
	var_303_object = var_314_object;
	func_4069(var_313_bool, var_314_object, (float)70.0);
	var_316_bool = var_313_bool == 0; //@nz
	if(var_316_bool != 0) {
		var_302_int = -2;
		return 8;
	}
	CreateDialog(var_309_object);
	var_317_int = 0;
	func_4481(var_317_int);
	@@var_309_object:SetNPCName(var_317_int);
	var_318_int = 0;
	func_4479(var_318_int);
	@@var_309_object:SetNPCDescription(var_318_int);
	var_319_string = "";
	func_4483(var_319_string);
	@@var_309_object:SetPhoto(var_319_string);
	var_320_string = "";
	func_4485(var_320_string);
	@@var_309_object:SetPhoto2(var_320_string);
	var_321_int = 0;
	func_5183(var_321_int);
	@@var_309_object:SetPlayerName(var_321_int);
	IsOverrideActive(var_310_bool);
	var_322_bool = var_310_bool;
	if(var_322_bool != 0) {
		var_302_int = -2;
		return 8;
	}
	DoDialog(var_309_object);
	var_323_bool = 0; var_324_object = Obj();
	func_4347(Obj());
	var_325_object = var_324_object;
	func_4156(var_323_bool, var_324_object);
	var_326_object = Obj(); var_327_object = Obj();
	var_303_object = var_326_object;
	var_309_object = var_327_object;
	TaskCall(11);
	func_3464(var_328_object, var_329_object, var_330_string, var_331_bool, var_326_object, var_327_object);
	TaskReturn();
	@@var_309_object:IsDialogEnd(var_312_bool);
	
Label_3446:
	var_356_bool = var_312_bool == 0; //@nz
	if(var_356_bool != 0) {
		sync();
		@@var_309_object:IsDialogEnd(var_312_bool);
		goto Label_3446;
	}
	var_303_object = Obj();
	func_4138();
	StopDialog(var_309_object);
	@@var_309_object:GetReturnValue((int)-1);
	var_311_int = var_302_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4667()
{
	SetVariable("b11q01KnowWhoKilled", (int)1);
	func_4975();
	return 0;
}


func_4156(var_133_bool, var_134_object)
{
	var_138_int = 0; var_139_int = 0; var_140_int = 0; var_141_int = 0;
	GetVariable("voice_common", var_140_int);
	var_143_int = var_140_int;
	if(var_143_int != 0) {
		var_144_bool = 0; var_145_object = Obj();
		var_134_object = var_145_object;
		func_4214(var_144_bool, var_145_object);
		var_174_bool = var_144_bool == 0; //@nz
		if(var_174_bool != 0) {
			var_175_bool = 0; var_176_object = Obj();
			var_134_object = var_176_object;
			func_4251(var_175_bool, var_176_object);
			var_210_bool = var_175_bool == 0; //@nz
			if(var_210_bool != 0) {
				var_133_bool = 0;
				return 4;
			}
		}
		irand(var_141_int, (int)2);
		var_212_int = var_141_int;
		if(var_212_int != 0) {
			var_215_int = var_140_int + (int)1;
			var_217_int = var_215_int % (int)3;
			SetVariable("voice_common", var_217_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_220_bool = 0; var_221_object = Obj();
		var_134_object = var_221_object;
		func_4251(var_220_bool, var_221_object);
		var_222_bool = var_220_bool == 0; //@nz
		if(var_222_bool != 0) {
			var_223_bool = 0; var_224_object = Obj();
			var_134_object = var_224_object;
			func_4214(var_223_bool, var_224_object);
			var_225_bool = var_223_bool == 0; //@nz
			if(var_225_bool != 0) {
				var_133_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_4212;
	
Label_4212:
	var_133_bool = 1;
	return 4;
	
}


func_5183(var_124_int)
{
	var_125_int = 0; var_126_int = 0;
	GetVariable("branch", var_126_int);
	var_129_bool = var_126_int == (int)0;
	if(var_129_bool != 0) {
		var_124_int = 1;
		return 2;
	EMIT "GOTO 0x144e";
	}
	var_131_bool = var_126_int == (int)1;
	if(var_131_bool != 0) {
		var_124_int = 2;
		return 2;
	}
	var_124_int = 3;
	return 2;
}


func_4927(var_487_bool)
{
	var_489_int = 0; var_490_string = "";
	func_4363(var_489_int, "oob1BigVlad2");
	var_492_bool = var_489_int == (int)0;
	if(var_492_bool != 0) {
		var_487_bool = 1;
		return 0;
	}
	var_487_bool = 0;
	return 0;
}


func_4416(var_141_bool, var_142_string, var_143_string)
{
	var_144_object = Obj(); var_145_object = Obj();
	FindActor(var_145_object, var_142_string);
	var_146_bool = var_145_object == 0; //@ne
	if(var_146_bool != 0) {
		var_141_bool = 0;
		return 2;
	}
	Trigger(var_145_object, var_143_string);
	var_141_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4676()
{
	SetVariable("oob11BigVlad1", (int)1);
	return 0;
}


func_4682()
{
	var_99_bool = 0; var_100_string = ""; var_101_string = ""; var_102_string = "";
	func_4428(var_99_bool, "volonteers_burah", "kill", "bigvlad");
	return 0;
}


func_4939(var_496_bool)
{
	var_498_int = 0; var_499_string = "";
	func_4363(var_498_int, "oob1BigVlad3");
	var_501_bool = var_498_int == (int)0;
	if(var_501_bool != 0) {
		var_496_bool = 1;
		return 0;
	}
	var_496_bool = 0;
	return 0;
}


func_4428(var_99_bool, var_100_string, var_101_string, var_102_string)
{
	var_103_object = Obj(); var_104_object = Obj();
	FindActor(var_104_object, var_100_string);
	var_105_bool = var_104_object == 0; //@ne
	if(var_105_bool != 0) {
		var_99_bool = 0;
		return 2;
	}
	Trigger(var_104_object, var_101_string, var_102_string);
	var_99_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5200(var_58_object)
{
	var_59_bool = GlobalVars[1];
	var_60_bool = var_59_bool == 0; //@nz
	if(var_60_bool != 0) {
		var_61_int = 0; var_62_object = Obj();
		var_58_object = var_62_object;
		TaskCall(6);
		func_2139(var_63_object, var_61_int, var_62_object);
		TaskReturn();
		var_286_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_287_bool = 0; var_288_int = 0;
	func_4460(var_287_bool, (int)2);
	if(var_287_bool != 0) {
		var_302_int = 0; var_303_object = Obj();
		var_58_object = var_303_object;
		TaskCall(10);
		func_3383(var_304_object, var_302_int, var_303_object);
		TaskReturn();
		return 0;
	}
	var_358_bool = 0; var_359_int = 0;
	func_4460(var_358_bool, (int)3);
	if(var_358_bool != 0) {
		var_360_int = 0; var_361_object = Obj();
		var_58_object = var_361_object;
		TaskCall(12);
		func_3586(var_362_object, var_360_int, var_361_object);
		TaskReturn();
		return 0;
	}
	var_416_bool = 0; var_417_int = 0;
	func_4454(var_416_bool, (int)1);
	if(var_416_bool != 0) {
		var_419_int = 0; var_420_object = Obj();
		var_58_object = var_420_object;
		TaskCall(4);
		func_1296(var_421_object, var_419_int, var_420_object);
		TaskReturn();
		return 0;
	}
	var_519_bool = 0; var_520_int = 0;
	func_4454(var_519_bool, (int)2);
	if(var_519_bool != 0) {
		var_521_int = 0; var_522_object = Obj();
		var_58_object = var_522_object;
		TaskCall(0);
		func_0(var_523_object, var_521_int, var_522_object);
		TaskReturn();
		return 0;
	}
	var_585_bool = 0; var_586_int = 0;
	func_4454(var_585_bool, (int)3);
	if(var_585_bool != 0) {
		var_587_int = 0; var_588_object = Obj();
		var_58_object = var_588_object;
		TaskCall(2);
		func_479(var_589_object, var_587_int, var_588_object);
		TaskReturn();
		return 0;
	}
	var_680_bool = 0; var_681_int = 0;
	func_4454(var_680_bool, (int)11);
	if(var_680_bool != 0) {
		var_682_int = 0; var_683_object = Obj();
		var_58_object = var_683_object;
		TaskCall(8);
		func_2401(var_684_object, var_682_int, var_683_object);
		TaskReturn();
		return 0;
	}
	var_808_int = 0; var_809_object = Obj();
	var_58_object = var_809_object;
	TaskCall(14);
	func_3789(var_810_object, var_808_int, var_809_object);
	TaskReturn();
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_545_object, var_546_object)
{
	var_0_object = var_546_object;
	var_1_object = var_545_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_552_bool = 0; var_553_object = Obj();
		var_553_object = var_1_object;
		func_4963(var_553_object);
		if(var_552_bool != 0) {
			var_558_string = "";
			func_154(var_546_object, "Distrust");
			@@@var_0_object:SetMessage((int)518234);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518235, (int)20742, (int)19344);
		} else {
				var_578_string = "";
				func_154(var_546_object, "Neutral");
				@@@var_0_object:SetMessage((int)518236);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)518237, (int)-1, (int)19346);
				goto Label_124;
		}
	}
Label_124:
	var_570_bool = 0;
	func_4487(var_570_bool);
	if(var_570_bool != 0) {

	Label_128:
		lshWaitForAnimEnd();
		var_571_string = var_3_string;
		if(var_571_string != 0) {
		} else {
			var_572_string = "";
			var_572_string = var_2_object;
			func_4294(var_572_string);
			goto Label_128;
	}
		PlayAnimation("all", "idle");

	Label_143:
		WaitForAnimEnd();
		var_575_string = var_3_string;
		if(var_575_string != 0) {
			goto Label_153;
		}
		PlayAnimation("all", "idle");
		goto Label_143;

	}
	goto Label_153;
	
Label_153:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_4690()
{
	SetVariable("oob11BigVlad2", (int)1);
	return 0;
}


func_3667(var_0_object, var_1_object, var_2_object, var_3_string, var_384_object, var_385_object)
{
	var_0_object = var_385_object;
	var_1_object = var_384_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_391_string = "";
		func_3725(var_385_object, "Neutral");
		@@@var_0_object:SetMessage((int)529902);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)529903, (int)-1, (int)31286);
		@@@var_0_object:AddReply((int)529904, (int)-1, (int)31287);
		goto Label_3695;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xe57";
	}
Label_3695:
	var_406_bool = 0;
	func_4487(var_406_bool);
	if(var_406_bool != 0) {

	Label_3699:
		lshWaitForAnimEnd();
		var_407_string = var_3_string;
		if(var_407_string != 0) {
		} else {
			var_408_string = "";
			var_408_string = var_2_object;
			func_4294(var_408_string);
			goto Label_3699;
	}
		PlayAnimation("all", "idle");

	Label_3714:
		WaitForAnimEnd();
		var_411_string = var_3_string;
		if(var_411_string != 0) {
			goto Label_3724;
		}
		PlayAnimation("all", "idle");
		goto Label_3714;
	}
	goto Label_3724;
	
Label_3724:
	return 0;
	
}


func_2646(var_2_object, var_723_string)
{
	var_724_bool = 0;
	func_4487(var_724_bool);
	var_725_bool = var_724_bool == 0; //@nz
	if(var_725_bool != 0) {
		return 0;
	}
	var_726_bool = var_723_string == var_2_object;
	if(var_726_bool != 0) {
		return 0;
	}
	var_727_string = ""; var_728_bool = 0;
	var_723_string = var_727_string;
	var_730_bool = var_723_string == "";
	if(var_730_bool != 0) {
		var_728_bool = 0;
	} else {
		var_728_bool = 1;
	}
	func_4310(var_727_string, var_728_bool);
	var_2_object = var_723_string;
	return 0;
	
}


func_4951(var_505_bool)
{
	var_507_int = 0; var_508_string = "";
	func_4363(var_507_int, "oob1BigVlad4");
	var_510_bool = var_507_int == (int)0;
	if(var_510_bool != 0) {
		var_505_bool = 1;
		return 0;
	}
	var_505_bool = 0;
	return 0;
}


func_4696()
{
	SetVariable("oob11BigVlad3", (int)1);
	return 0;
}


func_3928(var_2_object, var_839_string)
{
	var_840_bool = 0;
	func_4487(var_840_bool);
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
	func_4310(var_843_string, var_844_bool);
	var_2_object = var_839_string;
	return 0;
	
}


func_4440(var_63_float)
{
	var_64_float = 0; var_65_float = 0;
	GetGameTime(var_65_float);
	var_65_float = var_63_float;
	return 2;
}


func_2139(var_0_object, var_61_int, var_62_object)
{
	var_64_object = Obj(); var_65_bool = 0; var_66_int = 0; var_67_bool = 0; var_68_object = Obj(); var_69_bool = 0; var_70_int = 0; var_71_bool = 0;
	var_0_object = var_62_object;
	var_72_bool = 0; var_73_object = Obj(); var_74_float = 0;
	var_62_object = var_73_object;
	func_4069(var_72_bool, var_73_object, (float)70.0);
	var_119_bool = var_72_bool == 0; //@nz
	if(var_119_bool != 0) {
		var_61_int = -2;
		return 8;
	}
	CreateDialog(var_68_object);
	var_120_int = 0;
	func_4481(var_120_int);
	@@var_68_object:SetNPCName(var_120_int);
	var_121_int = 0;
	func_4479(var_121_int);
	@@var_68_object:SetNPCDescription(var_121_int);
	var_122_string = "";
	func_4483(var_122_string);
	@@var_68_object:SetPhoto(var_122_string);
	var_123_string = "";
	func_4485(var_123_string);
	@@var_68_object:SetPhoto2(var_123_string);
	var_124_int = 0;
	func_5183(var_124_int);
	@@var_68_object:SetPlayerName(var_124_int);
	IsOverrideActive(var_69_bool);
	var_132_bool = var_69_bool;
	if(var_132_bool != 0) {
		var_61_int = -2;
		return 8;
	}
	DoDialog(var_68_object);
	var_133_bool = 0; var_134_object = Obj();
	func_4347(Obj());
	var_135_object = var_134_object;
	func_4156(var_133_bool, var_134_object);
	var_228_object = Obj(); var_229_object = Obj();
	var_62_object = var_228_object;
	var_68_object = var_229_object;
	TaskCall(7);
	func_2220(var_230_object, var_231_object, var_232_string, var_233_bool, var_228_object, var_229_object);
	TaskReturn();
	@@var_68_object:IsDialogEnd(var_71_bool);
	
Label_2202:
	var_277_bool = var_71_bool == 0; //@nz
	if(var_277_bool != 0) {
		sync();
		@@var_68_object:IsDialogEnd(var_71_bool);
		goto Label_2202;
	}
	var_62_object = Obj();
	func_4138();
	StopDialog(var_68_object);
	@@var_68_object:GetReturnValue((int)-1);
	var_70_int = var_61_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4445(var_188_int)
{
	var_189_float = 0; var_190_float = 0;
	GetGameTime(var_190_float);
	var_192_int = 0;
	var_192_int = var_190_float / (int)24;
	var_188_int = (int)1 + var_192_int;
	return 2;
}


func_4702()
{
	SetVariable("oob11BigVlad4", (int)1);
	return 0;
}


func_1377(var_0_object, var_1_object, var_2_object, var_3_string, var_443_object, var_444_object)
{
	var_0_object = var_444_object;
	var_1_object = var_443_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_450_bool = 0; var_451_object = Obj();
		var_451_object = var_1_object;
		func_4915(var_451_object);
		if(var_450_bool != 0) {
			var_458_object = Obj(); var_459_object = Obj();
			var_458_object = var_1_object;
			var_459_object = var_0_object;
			func_4541();
			var_462_string = "";
			func_1490(var_444_object, "Neutral");
			@@@var_0_object:SetMessage((int)519752);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519753, (int)20908, (int)20907);
			@@@var_0_object:AddReply((int)519791, (int)20910, (int)20951);
		} else {
				var_485_string = "";
				func_1490(var_444_object, "Neutral");
				@@@var_0_object:SetMessage((int)519792);
				@@@var_0_object:ClearReplies();
				var_487_bool = 0; var_488_object = Obj();
				var_488_object = var_1_object;
				func_4927(var_488_object);
				if(var_487_bool != 0) {
					@@@var_0_object:AddReply((int)519793, (int)20954, (int)20953);
				}
				var_496_bool = 0; var_497_object = Obj();
				var_497_object = var_1_object;
				func_4939(var_497_object);
				if(var_496_bool != 0) {
					@@@var_0_object:AddReply((int)519798, (int)28439, (int)20958);
				}
				var_505_bool = 0; var_506_object = Obj();
				var_506_object = var_1_object;
				func_4951(var_506_object);
				if(var_505_bool != 0) {
					@@@var_0_object:AddReply((int)519807, (int)20968, (int)20967);
				}
				@@@var_0_object:AddReply((int)519810, (int)-1, (int)20970);
				goto Label_1460;
		}
	}
Label_1460:
	var_477_bool = 0;
	func_4487(var_477_bool);
	if(var_477_bool != 0) {

	Label_1464:
		lshWaitForAnimEnd();
		var_478_string = var_3_string;
		if(var_478_string != 0) {
		} else {
			var_479_string = "";
			var_479_string = var_2_object;
			func_4294(var_479_string);
			goto Label_1464;
	}
		PlayAnimation("all", "idle");

	Label_1479:
		WaitForAnimEnd();
		var_482_string = var_3_string;
		if(var_482_string != 0) {
			goto Label_1489;
		}
		PlayAnimation("all", "idle");
		goto Label_1479;

	}
	goto Label_1489;
	
Label_1489:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x565";


func_2401(var_0_object, var_682_int, var_683_object)
{
	var_685_object = Obj(); var_686_bool = 0; var_687_int = 0; var_688_bool = 0; var_689_object = Obj(); var_690_bool = 0; var_691_int = 0; var_692_bool = 0;
	var_0_object = var_683_object;
	var_693_bool = 0; var_694_object = Obj(); var_695_float = 0;
	var_683_object = var_694_object;
	func_4069(var_693_bool, var_694_object, (float)70.0);
	var_696_bool = var_693_bool == 0; //@nz
	if(var_696_bool != 0) {
		var_682_int = -2;
		return 8;
	}
	CreateDialog(var_689_object);
	var_697_int = 0;
	func_4481(var_697_int);
	@@var_689_object:SetNPCName(var_697_int);
	var_698_int = 0;
	func_4479(var_698_int);
	@@var_689_object:SetNPCDescription(var_698_int);
	var_699_string = "";
	func_4483(var_699_string);
	@@var_689_object:SetPhoto(var_699_string);
	var_700_string = "";
	func_4485(var_700_string);
	@@var_689_object:SetPhoto2(var_700_string);
	var_701_int = 0;
	func_5183(var_701_int);
	@@var_689_object:SetPlayerName(var_701_int);
	IsOverrideActive(var_690_bool);
	var_702_bool = var_690_bool;
	if(var_702_bool != 0) {
		var_682_int = -2;
		return 8;
	}
	DoDialog(var_689_object);
	var_703_bool = 0; var_704_object = Obj();
	func_4347(Obj());
	var_705_object = var_704_object;
	func_4156(var_703_bool, var_704_object);
	var_706_object = Obj(); var_707_object = Obj();
	var_683_object = var_706_object;
	var_689_object = var_707_object;
	TaskCall(9);
	func_2482(var_708_object, var_709_object, var_710_string, var_711_bool, var_706_object, var_707_object);
	TaskReturn();
	@@var_689_object:IsDialogEnd(var_692_bool);
	
Label_2464:
	var_806_bool = var_692_bool == 0; //@nz
	if(var_806_bool != 0) {
		sync();
		@@var_689_object:IsDialogEnd(var_692_bool);
		goto Label_2464;
	}
	var_683_object = Obj();
	func_4138();
	StopDialog(var_689_object);
	@@var_689_object:GetReturnValue((int)-1);
	var_691_int = var_682_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4963(var_552_bool)
{
	var_554_int = 0; var_555_string = "";
	func_4363(var_554_int, "b2q01");
	var_557_bool = var_554_int == (int)0;
	if(var_557_bool != 0) {
		var_552_bool = 1;
		return 0;
	}
	var_552_bool = 0;
	return 0;
}


func_4708()
{
	SetVariable("oob11BigVlad5", (int)1);
	return 0;
}


func_4454(var_416_bool, var_417_int)
{
	var_418_int = 0;
	func_4445(var_418_int);
	var_416_bool = var_418_int == var_417_int;
	return 0;
}


func_4714()
{
	SetVariable("b3BigVladVisit", (int)1);
	return 0;
}


func_4460(var_287_bool, var_288_int)
{
	var_289_float = 0; var_290_int = 0; var_291_int = 0; var_292_float = 0; var_293_int = 0; var_294_int = 0;
	GetGameTime(var_292_float);
	var_296_int = 0;
	var_296_int = var_292_float / (int)24;
	var_293_int = (int)1 + var_296_int;
	var_298_bool = var_293_int != var_288_int;
	if(var_298_bool != 0) {
		var_287_bool = 0;
		return 6;
	}
	var_299_int = 0;
	var_292_float = var_299_int;
	var_294_int = var_299_int % (int)24;
	var_287_bool = var_294_int < (int)7;
	return 6;
}


func_4975()
{
	var_50_object = Obj(); var_51_object = Obj();
	CreateDiaryEntry(var_51_object, (int)315, (int)1, (int)522057);
	var_55_bool = 0; var_56_object = Obj(); var_57_int = 0;
	var_51_object = var_56_object;
	func_5105(var_55_bool, var_56_object, (int)313);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4720(var_163_object)
{
	var_165_int = 0; var_166_int = 0;
	irand(var_166_int, (int)30);
	var_168_object = Obj(); var_169_int = 0;
	var_163_object = var_168_object;
	var_169_int = var_166_int + (int)20;
	func_4397(var_168_object, var_169_int);
	return 2;
}


func_4214(var_144_bool, var_145_object)
{
	var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; var_151_string = ""; var_152_int = 0; var_153_bool = 0; var_154_int = 0; var_155_string = "";
	var_151_string = "c";
	var_152_int = 0;
	
Label_4217:
	if((int)1 != 0) {
		var_158_int = var_152_int + (int)1;
		var_159_int = var_151_string + var_158_int;
		@@var_145_object:HasProperty(var_159_int, var_153_bool);
		var_160_bool = var_153_bool == 0; //@nz
		if(var_160_bool != 0) {
		} else {
			var_152_int = var_152_int + (int)1;
			goto Label_4217;
		}
	}
	var_161_bool = var_152_int == 0; //@nz
	if(var_161_bool != 0) {
		var_144_bool = 0;
		return 10;
	}
	var_154_int = 0;
	var_163_bool = var_152_int > (int)1;
	if(var_163_bool != 0) {
		irand(var_154_int, var_152_int);
	}
	var_165_int = var_154_int + (int)1;
	var_166_int = var_151_string + var_165_int;
	@@var_145_object:GetProperty(var_166_int, var_155_string);
	var_167_bool = 0; var_168_string = "";
	var_155_string = var_168_string;
	func_4325(var_167_bool, var_168_string);
	var_167_bool = var_144_bool;
	return 10;
	
}


func_4731(var_98_object)
{
	var_99_object = Obj(); var_100_string = ""; var_101_float = 0;
	func_5133(Obj());
	var_102_object = var_99_object;
	func_5150(var_99_object, "pt_map_ospina", (float)2);
	var_122_object = Obj();
	func_5133(var_122_object);
	@@var_98_object:ShowMap(var_122_object);
	return 0;
}


func_4988()
{
	var_71_object = Obj(); var_72_object = Obj();
	CreateDiaryEntry(var_72_object, (int)242, (int)1, (int)520039);
	var_76_bool = 0; var_77_object = Obj(); var_78_int = 0;
	var_72_object = var_77_object;
	func_5105(var_76_bool, var_77_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4479(var_121_int)
{
	var_121_int = 515531;
	return 0;
}


func_4481(var_120_int)
{
	var_120_int = 502857;
	return 0;
}


func_4483(var_122_string)
{
	var_122_string = "ui/NPC_BigVlad.png";
	return 0;
}


func_4485(var_123_string)
{
	var_123_string = "ui/NPC_BigVlad_b.png";
	return 0;
}


func_4487(var_115_bool)
{
	var_115_bool = 1;
	return 0;
}


func_3464(var_0_object, var_1_object, var_2_object, var_3_string, var_326_object, var_327_object)
{
	var_0_object = var_327_object;
	var_1_object = var_326_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_333_string = "";
		func_3522(var_327_object, "Neutral");
		@@@var_0_object:SetMessage((int)529898);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)529899, (int)-1, (int)31282);
		@@@var_0_object:AddReply((int)529900, (int)-1, (int)31283);
		goto Label_3492;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xd8c";
	}
Label_3492:
	var_348_bool = 0;
	func_4487(var_348_bool);
	if(var_348_bool != 0) {

	Label_3496:
		lshWaitForAnimEnd();
		var_349_string = var_3_string;
		if(var_349_string != 0) {
		} else {
			var_350_string = "";
			var_350_string = var_2_object;
			func_4294(var_350_string);
			goto Label_3496;
	}
		PlayAnimation("all", "idle");

	Label_3511:
		WaitForAnimEnd();
		var_353_string = var_3_string;
		if(var_353_string != 0) {
			goto Label_3521;
		}
		PlayAnimation("all", "idle");
		goto Label_3511;
	}
	goto Label_3521;
	
Label_3521:
	return 0;
	
}


func_4489()
{
	var_48_object = Obj(); var_49_object = Obj();
	SetVariable("b3q01", (int)1);
	func_5133(Obj());
	var_52_object = var_49_object;
	var_63_float = 0;
	func_4440(var_63_float);
	@@var_49_object:AddMark("b3q01BigVladGotoOspina", "pt_map_ospina", (int)1, (int)519627, var_63_float);
	func_5040();
	func_5053();
	return 2;
}
EMIT "Stack[-1] = 0";


func_5001()
{
	var_94_object = Obj(); var_95_object = Obj();
	CreateDiaryEntry(var_95_object, (int)243, (int)1, (int)520040);
	var_99_bool = 0; var_100_object = Obj(); var_101_int = 0;
	var_95_object = var_100_object;
	func_5105(var_99_bool, var_100_object, (int)242);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4747(var_113_object)
{
	var_114_object = Obj(); var_115_string = ""; var_116_float = 0;
	func_5133(Obj());
	var_117_object = var_114_object;
	func_5150(var_114_object, "pt_map_alexandr", (float)2);
	var_137_object = Obj();
	func_5133(var_137_object);
	@@var_113_object:ShowMap(var_137_object);
	return 0;
}


func_3725(var_2_object, var_391_string)
{
	var_392_bool = 0;
	func_4487(var_392_bool);
	var_393_bool = var_392_bool == 0; //@nz
	if(var_393_bool != 0) {
		return 0;
	}
	var_394_bool = var_391_string == var_2_object;
	if(var_394_bool != 0) {
		return 0;
	}
	var_395_string = ""; var_396_bool = 0;
	var_391_string = var_395_string;
	var_398_bool = var_391_string == "";
	if(var_398_bool != 0) {
		var_396_bool = 0;
	} else {
		var_396_bool = 1;
	}
	func_4310(var_395_string, var_396_bool);
	var_2_object = var_391_string;
	return 0;
	
}


func_5014()
{
	var_81_object = Obj(); var_82_object = Obj();
	CreateDiaryEntry(var_82_object, (int)245, (int)1, (int)520466);
	var_86_bool = 0; var_87_object = Obj(); var_88_int = 0;
	var_82_object = var_87_object;
	func_5105(var_86_bool, var_87_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_154(var_2_object, var_558_string)
{
	var_559_bool = 0;
	func_4487(var_559_bool);
	var_560_bool = var_559_bool == 0; //@nz
	if(var_560_bool != 0) {
		return 0;
	}
	var_561_bool = var_558_string == var_2_object;
	if(var_561_bool != 0) {
		return 0;
	}
	var_562_string = ""; var_563_bool = 0;
	var_558_string = var_562_string;
	var_565_bool = var_558_string == "";
	if(var_565_bool != 0) {
		var_563_bool = 0;
	} else {
		var_563_bool = 1;
	}
	func_4310(var_562_string, var_563_bool);
	var_2_object = var_558_string;
	return 0;
	
}


func_4763(var_143_object)
{
	var_144_object = Obj(); var_145_string = ""; var_146_float = 0;
	func_5133(Obj());
	var_147_object = var_144_object;
	func_5150(var_144_object, "pt_map_mladvlad", (float)2);
	var_148_object = Obj();
	func_5133(var_148_object);
	@@var_143_object:ShowMap(var_148_object);
	return 0;
}


func_668(var_2_object, var_632_string)
{
	var_633_bool = 0;
	func_4487(var_633_bool);
	var_634_bool = var_633_bool == 0; //@nz
	if(var_634_bool != 0) {
		return 0;
	}
	var_635_bool = var_632_string == var_2_object;
	if(var_635_bool != 0) {
		return 0;
	}
	var_636_string = ""; var_637_bool = 0;
	var_632_string = var_636_string;
	var_639_bool = var_632_string == "";
	if(var_639_bool != 0) {
		var_637_bool = 0;
	} else {
		var_637_bool = 1;
	}
	func_4310(var_636_string, var_637_bool);
	var_2_object = var_632_string;
	return 0;
	
}


func_4251(var_175_bool, var_176_object)
{
	var_177_string = ""; var_178_int = 0; var_179_bool = 0; var_180_int = 0; var_181_string = ""; var_182_string = ""; var_183_int = 0; var_184_bool = 0; var_185_int = 0; var_186_string = "";
	var_188_int = 0;
	func_4445(var_188_int);
	var_194_int = "d" + var_188_int;
	var_182_string = var_194_int + "m";
	var_183_int = 0;
	
Label_4260:
	if((int)1 != 0) {
		var_198_int = var_183_int + (int)1;
		var_199_int = var_182_string + var_198_int;
		@@var_176_object:HasProperty(var_199_int, var_184_bool);
		var_200_bool = var_184_bool == 0; //@nz
		if(var_200_bool != 0) {
		} else {
			var_183_int = var_183_int + (int)1;
			goto Label_4260;
		}
	}
	var_201_bool = var_183_int == 0; //@nz
	if(var_201_bool != 0) {
		var_175_bool = 0;
		return 10;
	}
	var_185_int = 0;
	var_203_bool = var_183_int > (int)1;
	if(var_203_bool != 0) {
		irand(var_185_int, var_183_int);
	}
	var_205_int = var_185_int + (int)1;
	var_206_int = var_182_string + var_205_int;
	@@var_176_object:GetProperty(var_206_int, var_186_string);
	var_207_bool = 0; var_208_string = "";
	var_186_string = var_208_string;
	func_4325(var_207_bool, var_208_string);
	var_207_bool = var_175_bool;
	return 10;
	
}


func_3999()
{
	var_41_bool = 0;
	func_4064(var_41_bool);
	var_44_bool = var_41_bool == 0; //@nz
	if(var_44_bool != 0) {
		Hold();
	}
Label_4006:
	var_45_string = "";
	func_4294("Neutral");
	lshWaitForAnimEnd();
	goto Label_4006;
}
EMIT "@ Hold()";
EMIT "Pop(0)";
EMIT "Return(); Pop(0)";


func_4515()
{
	SetVariable("oob3BigVlad1", (int)1);
	return 0;
}


func_5027()
{
	var_104_object = Obj(); var_105_object = Obj();
	CreateDiaryEntry(var_105_object, (int)246, (int)1, (int)520467);
	var_109_bool = 0; var_110_object = Obj(); var_111_int = 0;
	var_105_object = var_110_object;
	func_5105(var_109_bool, var_110_object, (int)245);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4521()
{
	func_5066();
	var_141_bool = 0; var_142_string = ""; var_143_string = "";
	func_4416(var_141_bool, "quest_b3_01", "completed");
	return 0;
}


func_4779(var_103_object)
{
	var_104_object = Obj(); var_105_string = ""; var_106_float = 0;
	func_5133(Obj());
	var_107_object = var_104_object;
	func_5150(var_104_object, "pt_map_kapella", (float)2);
	var_127_object = Obj();
	func_5133(var_127_object);
	@@var_103_object:ShowMap(var_127_object);
	return 0;
}


func_2220(var_0_object, var_1_object, var_2_object, var_3_string, var_228_object, var_229_object)
{
	var_0_object = var_229_object;
	var_1_object = var_228_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_235_string = "";
		func_2278(var_229_object, "Neutral");
		@@@var_0_object:SetMessage((int)520698);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)520699, (int)21910, (int)21909);
		@@@var_0_object:AddReply((int)520705, (int)21916, (int)21915);
		goto Label_2248;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x8b0";
	}
Label_2248:
	var_259_bool = 0;
	func_4487(var_259_bool);
	if(var_259_bool != 0) {

	Label_2252:
		lshWaitForAnimEnd();
		var_260_string = var_3_string;
		if(var_260_string != 0) {
		} else {
			var_261_string = "";
			var_261_string = var_2_object;
			func_4294(var_261_string);
			goto Label_2252;
	}
		PlayAnimation("all", "idle");

	Label_2267:
		WaitForAnimEnd();
		var_274_string = var_3_string;
		if(var_274_string != 0) {
			goto Label_2277;
		}
		PlayAnimation("all", "idle");
		goto Label_2267;
	}
	goto Label_2277;
	
Label_2277:
	return 0;
	
}


func_5040()
{
	var_66_object = Obj(); var_67_object = Obj();
	CreateDiaryEntry(var_67_object, (int)221, (int)1, (int)519633);
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0;
	var_67_object = var_72_object;
	func_5105(var_71_bool, var_72_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2482(var_0_object, var_1_object, var_2_object, var_3_string, var_706_object, var_707_object)
{
	var_0_object = var_707_object;
	var_1_object = var_706_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_713_bool = 0; var_714_object = Obj();
		var_714_object = var_1_object;
		func_4807(var_714_object);
		if(var_713_bool != 0) {
			var_719_object = Obj(); var_720_object = Obj();
			var_719_object = var_1_object;
			var_720_object = var_0_object;
			func_4676();
			var_723_string = "";
			func_2646(var_707_object, "Neutral");
			@@@var_0_object:SetMessage((int)522082);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)523463, (int)24690, (int)24689);
			@@@var_0_object:AddReply((int)523518, (int)24749, (int)24748);
			@@@var_0_object:AddReply((int)523517, (int)24750, (int)24747);
		} else {
				var_749_string = "";
				func_2646(var_707_object, "Neutral");
				@@@var_0_object:SetMessage((int)522085);
				@@@var_0_object:ClearReplies();
				var_751_bool = 0;
				var_751_bool = 0;
				var_752_bool = 0; var_753_object = Obj();
				var_753_object = var_1_object;
				func_4819(var_753_object);
				if(var_752_bool != 0) {
					var_758_bool = 0; var_759_object = Obj();
					var_759_object = var_1_object;
					func_4831(var_759_object);
					if(var_758_bool != 0) {
						var_751_bool = 1;
					}
				}
				if(var_751_bool != 0) {
					@@@var_0_object:AddReply((int)523467, (int)24695, (int)24693);
				}
				var_767_bool = 0;
				var_767_bool = 0;
				var_768_bool = 0; var_769_object = Obj();
				var_769_object = var_1_object;
				func_4819(var_769_object);
				if(var_768_bool != 0) {
					var_770_bool = 0; var_771_object = Obj();
					var_771_object = var_1_object;
					func_4843(var_771_object);
					if(var_770_bool != 0) {
						var_767_bool = 1;
					}
				}
				if(var_767_bool != 0) {
					@@@var_0_object:AddReply((int)523468, (int)24699, (int)24694);
				}
				var_779_bool = 0;
				var_779_bool = 0;
				var_780_bool = 0; var_781_object = Obj();
				var_781_object = var_1_object;
				func_4819(var_781_object);
				if(var_780_bool != 0) {
					var_782_bool = 0; var_783_object = Obj();
					var_783_object = var_1_object;
					func_4855(var_783_object);
					if(var_782_bool != 0) {
						var_779_bool = 1;
					}
				}
				if(var_779_bool != 0) {
					@@@var_0_object:AddReply((int)523479, (int)24706, (int)24705);
				}
				var_791_bool = 0;
				var_791_bool = 0;
				var_792_bool = 0; var_793_object = Obj();
				var_793_object = var_1_object;
				func_4819(var_793_object);
				if(var_792_bool != 0) {
					var_794_bool = 0; var_795_object = Obj();
					var_795_object = var_1_object;
					func_4867(var_795_object);
					if(var_794_bool != 0) {
						var_791_bool = 1;
					}
				}
				if(var_791_bool != 0) {
					@@@var_0_object:AddReply((int)523508, (int)24739, (int)24738);
				}
				@@@var_0_object:AddReply((int)522086, (int)-1, (int)23255);
				goto Label_2616;
		}
	}
Label_2616:
	var_741_bool = 0;
	func_4487(var_741_bool);
	if(var_741_bool != 0) {

	Label_2620:
		lshWaitForAnimEnd();
		var_742_string = var_3_string;
		if(var_742_string != 0) {
		} else {
			var_743_string = "";
			var_743_string = var_2_object;
			func_4294(var_743_string);
			goto Label_2620;
	}
		PlayAnimation("all", "idle");

	Label_2635:
		WaitForAnimEnd();
		var_746_string = var_3_string;
		if(var_746_string != 0) {
			goto Label_2645;
		}
		PlayAnimation("all", "idle");
		goto Label_2635;

	}
	goto Label_2645;
	
Label_2645:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x9b6";


func_4531()
{
	func_5079();
	var_167_bool = 0; var_168_string = ""; var_169_string = "";
	func_4416(var_167_bool, "quest_b3_01", "completed");
	return 0;
}


func_4795(var_402_bool)
{
	var_404_int = 0; var_405_string = "";
	func_4363(var_404_int, "b11q01");
	var_407_bool = var_404_int == (int)1000;
	if(var_407_bool != 0) {
		var_402_bool = 1;
		return 0;
	}
	var_402_bool = 0;
	return 0;
}


func_4541()
{
	SetVariable("oob1BigVlad1", (int)1);
	return 0;
}


func_5053()
{
	var_89_object = Obj(); var_90_object = Obj();
	CreateDiaryEntry(var_90_object, (int)222, (int)1, (int)519634);
	var_94_bool = 0; var_95_object = Obj(); var_96_int = 0;
	var_90_object = var_95_object;
	func_5105(var_94_bool, var_95_object, (int)221);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3522(var_2_object, var_333_string)
{
	var_334_bool = 0;
	func_4487(var_334_bool);
	var_335_bool = var_334_bool == 0; //@nz
	if(var_335_bool != 0) {
		return 0;
	}
	var_336_bool = var_333_string == var_2_object;
	if(var_336_bool != 0) {
		return 0;
	}
	var_337_string = ""; var_338_bool = 0;
	var_333_string = var_337_string;
	var_340_bool = var_333_string == "";
	if(var_340_bool != 0) {
		var_338_bool = 0;
	} else {
		var_338_bool = 1;
	}
	func_4310(var_337_string, var_338_bool);
	var_2_object = var_333_string;
	return 0;
	
}


func_4547()
{
	SetVariable("oob1BigVlad2", (int)1);
	return 0;
}


func_4294(var_45_string)
{
	var_46_bool = 0; var_47_float = 0; var_48_float = 0; var_49_bool = 0; var_50_float = 0; var_51_float = 0;
	lshHasAnimation(var_49_bool, var_45_string);
	var_52_bool = var_49_bool;
	if(var_52_bool != 0) {
		lshGetAnimTimes(var_45_string, var_50_float, var_51_float);
		lshPlayAnimation(var_50_float, var_51_float, (bool)0);
	} else {
		var_55_int = "Can't find lsh animation : " + var_45_string;
		Trace(var_55_int);
	}
	return 6;
	
}


func_4807(var_713_bool)
{
	var_715_int = 0; var_716_string = "";
	func_4363(var_715_int, "oob11BigVlad1");
	var_718_bool = var_715_int == (int)0;
	if(var_718_bool != 0) {
		var_713_bool = 1;
		return 0;
	}
	var_713_bool = 0;
	return 0;
}


func_4038(var_173_object, var_174_string, var_175_int)
{
	var_176_int = 0; var_177_int = 0;
	@@var_173_object:GetProperty(var_174_string, var_177_int);
	var_178_int = var_177_int + var_175_int;
	@@var_173_object:SetProperty(var_174_string, var_178_int);
	return 2;
}


func_4553()
{
	SetVariable("oob1BigVlad3", (int)1);
	return 0;
}


func_5066()
{
	var_133_object = Obj(); var_134_object = Obj();
	CreateDiaryEntry(var_134_object, (int)225, (int)1, (int)519650);
	var_138_bool = 0; var_139_object = Obj(); var_140_int = 0;
	var_134_object = var_139_object;
	func_5105(var_138_bool, var_139_object, (int)221);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3789(var_0_object, var_808_int, var_809_object)
{
	var_811_object = Obj(); var_812_bool = 0; var_813_int = 0; var_814_bool = 0; var_815_object = Obj(); var_816_bool = 0; var_817_int = 0; var_818_bool = 0;
	var_0_object = var_809_object;
	var_819_bool = 0; var_820_object = Obj(); var_821_float = 0;
	var_809_object = var_820_object;
	func_4069(var_819_bool, var_820_object, (float)70.0);
	var_822_bool = var_819_bool == 0; //@nz
	if(var_822_bool != 0) {
		var_808_int = -2;
		return 8;
	}
	CreateDialog(var_815_object);
	var_823_int = 0;
	func_4481(var_823_int);
	@@var_815_object:SetNPCName(var_823_int);
	var_824_int = 0;
	func_4479(var_824_int);
	@@var_815_object:SetNPCDescription(var_824_int);
	var_825_string = "";
	func_4483(var_825_string);
	@@var_815_object:SetPhoto(var_825_string);
	var_826_string = "";
	func_4485(var_826_string);
	@@var_815_object:SetPhoto2(var_826_string);
	var_827_int = 0;
	func_5183(var_827_int);
	@@var_815_object:SetPlayerName(var_827_int);
	IsOverrideActive(var_816_bool);
	var_828_bool = var_816_bool;
	if(var_828_bool != 0) {
		var_808_int = -2;
		return 8;
	}
	DoDialog(var_815_object);
	var_829_bool = 0; var_830_object = Obj();
	func_4347(Obj());
	var_831_object = var_830_object;
	func_4156(var_829_bool, var_830_object);
	var_832_object = Obj(); var_833_object = Obj();
	var_809_object = var_832_object;
	var_815_object = var_833_object;
	TaskCall(15);
	func_3870(var_834_object, var_835_object, var_836_string, var_837_bool, var_832_object, var_833_object);
	TaskReturn();
	@@var_815_object:IsDialogEnd(var_818_bool);
	
Label_3852:
	var_862_bool = var_818_bool == 0; //@nz
	if(var_862_bool != 0) {
		sync();
		@@var_815_object:IsDialogEnd(var_818_bool);
		goto Label_3852;
	}
	var_809_object = Obj();
	func_4138();
	StopDialog(var_815_object);
	@@var_815_object:GetReturnValue((int)-1);
	var_817_int = var_808_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4045(var_48_bool, var_49_cvector)
{
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_bool = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_bool = 0;
	GetPosition(var_53_cvector);
	var_54_cvector = var_49_cvector - var_53_cvector;
	var_56_float = GetByIndex(var_54_cvector, 0);
	var_57_float = GetByIndex(var_54_cvector, 2);
	Rotate(var_56_float, var_57_float, var_55_bool);
	var_55_bool = var_48_bool;
	return 6;
}


func_4559()
{
	SetVariable("oob1BigVlad4", (int)1);
	return 0;
}


func_1490(var_2_object, var_462_string)
{
	var_463_bool = 0;
	func_4487(var_463_bool);
	var_464_bool = var_463_bool == 0; //@nz
	if(var_464_bool != 0) {
		return 0;
	}
	var_465_bool = var_462_string == var_2_object;
	if(var_465_bool != 0) {
		return 0;
	}
	var_466_string = ""; var_467_bool = 0;
	var_462_string = var_466_string;
	var_469_bool = var_462_string == "";
	if(var_469_bool != 0) {
		var_467_bool = 0;
	} else {
		var_467_bool = 1;
	}
	func_4310(var_466_string, var_467_bool);
	var_2_object = var_462_string;
	return 0;
	
}


func_4819(var_752_bool)
{
	var_754_int = 0; var_755_string = "";
	func_4363(var_754_int, "b11KnowBigVladKill");
	var_757_bool = var_754_int != (int)0;
	if(var_757_bool != 0) {
		var_752_bool = 1;
		return 0;
	}
	var_752_bool = 0;
	return 0;
}


func_4565()
{
	var_48_object = Obj(); var_49_object = Obj();
	SetVariable("b1q01", (int)1);
	func_5133(Obj());
	var_52_object = var_49_object;
	var_63_float = 0;
	func_4440(var_63_float);
	@@var_49_object:AddMark("b1q01BigVladGotoKapella", "pt_map_kapella", (int)3, (int)518128, var_63_float);
	var_70_float = 0;
	func_4440(var_70_float);
	@@var_49_object:AddMark("b1q01BigVladGotoMladVlad", "pt_map_mladvlad", (int)3, (int)520041, var_70_float);
	func_4988();
	func_5001();
	return 2;
}
EMIT "Stack[-1] = 0";


func_4310(var_239_string, var_240_bool)
{
	var_243_bool = 0; var_244_float = 0; var_245_float = 0; var_246_bool = 0; var_247_float = 0; var_248_float = 0;
	lshHasAnimation(var_246_bool, var_239_string);
	var_249_bool = var_246_bool;
	if(var_249_bool != 0) {
		lshGetAnimTimes(var_239_string, var_247_float, var_248_float);
		lshPlayAnimation(var_247_float, var_248_float, var_240_bool);
	} else {
		var_251_int = "Can't find lsh animation : " + var_239_string;
		Trace(var_251_int);
	}
	return 6;
	
}


func_4055(var_44_bool, var_45_object)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0);
	@@var_45_object:GetPosition(var_47_cvector);
	var_48_bool = 0; var_49_cvector = CVector(0,0,0);
	var_47_cvector = var_49_cvector;
	func_4045(var_48_bool, var_49_cvector);
	var_48_bool = var_44_bool;
	return 2;
}


func_5079()
{
	var_159_object = Obj(); var_160_object = Obj();
	CreateDiaryEntry(var_160_object, (int)226, (int)1, (int)519651);
	var_164_bool = 0; var_165_object = Obj(); var_166_int = 0;
	var_160_object = var_165_object;
	func_5105(var_164_bool, var_165_object, (int)221);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4831(var_758_bool)
{
	var_760_int = 0; var_761_string = "";
	func_4363(var_760_int, "oob11BigVlad2");
	var_763_bool = var_760_int == (int)0;
	if(var_763_bool != 0) {
		var_758_bool = 1;
		return 0;
	}
	var_758_bool = 0;
	return 0;
}


func_479(var_0_object, var_587_int, var_588_object)
{
	var_590_object = Obj(); var_591_bool = 0; var_592_int = 0; var_593_bool = 0; var_594_object = Obj(); var_595_bool = 0; var_596_int = 0; var_597_bool = 0;
	var_0_object = var_588_object;
	var_598_bool = 0; var_599_object = Obj(); var_600_float = 0;
	var_588_object = var_599_object;
	func_4069(var_598_bool, var_599_object, (float)70.0);
	var_601_bool = var_598_bool == 0; //@nz
	if(var_601_bool != 0) {
		var_587_int = -2;
		return 8;
	}
	CreateDialog(var_594_object);
	var_602_int = 0;
	func_4481(var_602_int);
	@@var_594_object:SetNPCName(var_602_int);
	var_603_int = 0;
	func_4479(var_603_int);
	@@var_594_object:SetNPCDescription(var_603_int);
	var_604_string = "";
	func_4483(var_604_string);
	@@var_594_object:SetPhoto(var_604_string);
	var_605_string = "";
	func_4485(var_605_string);
	@@var_594_object:SetPhoto2(var_605_string);
	var_606_int = 0;
	func_5183(var_606_int);
	@@var_594_object:SetPlayerName(var_606_int);
	IsOverrideActive(var_595_bool);
	var_607_bool = var_595_bool;
	if(var_607_bool != 0) {
		var_587_int = -2;
		return 8;
	}
	DoDialog(var_594_object);
	var_608_bool = 0; var_609_object = Obj();
	func_4347(Obj());
	var_610_object = var_609_object;
	func_4156(var_608_bool, var_609_object);
	var_611_object = Obj(); var_612_object = Obj();
	var_588_object = var_611_object;
	var_594_object = var_612_object;
	TaskCall(3);
	func_560(var_613_object, var_614_object, var_615_string, var_616_bool, var_611_object, var_612_object);
	TaskReturn();
	@@var_594_object:IsDialogEnd(var_597_bool);
	
Label_542:
	var_678_bool = var_597_bool == 0; //@nz
	if(var_678_bool != 0) {
		sync();
		@@var_594_object:IsDialogEnd(var_597_bool);
		goto Label_542;
	}
	var_588_object = Obj();
	func_4138();
	StopDialog(var_594_object);
	@@var_594_object:GetReturnValue((int)-1);
	var_596_int = var_587_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4064(var_41_bool)
{
	var_42_bool = 0; var_43_bool = 0;
	IsLoaded(var_43_bool);
	var_43_bool = var_41_bool;
	return 2;
}


func_5092(var_64_object)
{
	var_65_object = Obj(); var_66_object = Obj();
	GetDiaryRoot(var_66_object);
	var_67_bool = var_66_object == 0; //@nz
	if(var_67_bool != 0) {
		Trace("Can't retrieve diary root");
		var_64_object = 0;
		return 2;
	}
	var_66_object = var_64_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4325(var_167_bool, var_168_string)
{
	var_169_bool = 0; var_170_bool = 0;
	var_171_bool = 0;
	func_4487(var_171_bool);
	if(var_171_bool != 0) {
		lshHasSpeech(var_170_bool, var_168_string);
		var_172_bool = var_170_bool;
		if(var_172_bool != 0) {
			lshPlaySpeech(var_168_string);
			var_167_bool = 1;
			return 2;
		}
	}
	var_167_bool = 0;
	return 2;
}


func_2278(var_2_object, var_235_string)
{
	var_236_bool = 0;
	func_4487(var_236_bool);
	var_237_bool = var_236_bool == 0; //@nz
	if(var_237_bool != 0) {
		return 0;
	}
	var_238_bool = var_235_string == var_2_object;
	if(var_238_bool != 0) {
		return 0;
	}
	var_239_string = ""; var_240_bool = 0;
	var_235_string = var_239_string;
	var_242_bool = var_235_string == "";
	if(var_242_bool != 0) {
		var_240_bool = 0;
	} else {
		var_240_bool = 1;
	}
	func_4310(var_239_string, var_240_bool);
	var_2_object = var_235_string;
	return 0;
	
}


func_4069(var_72_bool, var_73_object, var_74_float)
{
	var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_bool = 0; var_83_bool = 0; var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_bool = 0; var_92_bool = 0;
	@@var_73_object:GetPosition(var_85_cvector);
	@@var_73_object:GetEyesHeight(var_84_float);
	var_93_float = GetByIndex(var_85_cvector, 1);
	var_93_float = var_93_float + var_84_float;
	SetByIndex(var_85_cvector, 1) = var_93_float;
	GetPosition(var_86_cvector);
	GetEyesHeight(var_84_float);
	var_94_float = GetByIndex(var_86_cvector, 1);
	var_94_float = var_94_float + var_84_float;
	SetByIndex(var_86_cvector, 1) = var_94_float;
	var_87_cvector = var_85_cvector - var_86_cvector;
	var_95_float = GetByIndex(var_87_cvector, 1);
	SetByIndex(var_87_cvector, 1) = (float)0;
	var_96_int = var_87_cvector | var_87_cvector;
	var_97_float = sqrt(var_96_int);
	var_87_cvector = var_87_cvector / var_97_float;
	var_88_cvector = -var_87_cvector;
	var_98_float = var_87_cvector * var_74_float;
	var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0);
	var_100_cvector = var_88_cvector ^ CVector(0.0, 1.0, 0.0);
	func_4353(var_99_cvector, var_100_cvector);
	var_108_float = var_99_cvector * (int)25;
	var_109_int = var_98_float + var_108_float;
	var_89_cvector = var_109_int - CVector(0.0, 10.0, 0.0);
	var_90_cvector = var_86_cvector + var_89_cvector;
	IsOverrideActive(var_91_bool);
	var_111_bool = var_91_bool;
	if(var_111_bool != 0) {
		var_72_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_90_cvector, var_88_cvector, (bool)1);
	var_113_float = GetByIndex(var_89_cvector, 0);
	var_114_float = GetByIndex(var_89_cvector, 2);
	Rotate(var_113_float, var_114_float);
	var_115_bool = 0;
	func_4487(var_115_bool);
	if(var_115_bool != 0) {
	} else {
		HasAnimationTrack(var_92_bool, "head");
		var_117_bool = var_92_bool;
		if(var_117_bool == 0) goto Label_4132;
		LookAsyncCamera("head");
	}
Label_4132:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_72_bool = 1;
	return 18;
	
}


func_4843(var_770_bool)
{
	var_772_int = 0; var_773_string = "";
	func_4363(var_772_int, "oob11BigVlad3");
	var_775_bool = var_772_int == (int)0;
	if(var_775_bool != 0) {
		var_770_bool = 1;
		return 0;
	}
	var_770_bool = 0;
	return 0;
}


func_5105(var_55_bool, var_56_object, var_57_int)
{
	var_58_object = Obj(); var_59_object = Obj(); var_60_int = 0; var_61_object = Obj(); var_62_object = Obj(); var_63_int = 0;
	func_5092(Obj());
	var_64_object = var_61_object;
	@@var_61_object:Find(var_57_int, var_62_object);
	var_69_bool = var_62_object == 0; //@nz
	if(var_69_bool != 0) {
		var_71_int = "Can't find diary parent with id: " + var_57_int;
		Trace(var_71_int);
		var_55_bool = 0;
		return 6;
	}
	@@var_62_object:AddChild(var_56_object);
	SendWorldWndMessage((int)7);
	@@var_56_object:GetCategory(var_63_int);
	SetDiarySection(var_63_int);
	var_55_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_4340()
{
	var_43_bool = 0;
	func_4487(var_43_bool);
	if(var_43_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_4855(var_782_bool)
{
	var_784_int = 0; var_785_string = "";
	func_4363(var_784_int, "oob11BigVlad4");
	var_787_bool = var_784_int == (int)0;
	if(var_787_bool != 0) {
		var_782_bool = 1;
		return 0;
	}
	var_782_bool = 0;
	return 0;
}


func_4600()
{
	var_140_string = ""; var_141_bool = 0;
	func_4368("cot_alexandr@door1", (bool)0);
	return 0;
}


func_4347(var_135_object)
{
	var_136_object = Obj(); var_137_object = Obj();
	self(var_137_object);
	var_137_object = var_135_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4607()
{
	var_152_string = ""; var_153_bool = 0;
	func_4368("cot_katerina@door1", (bool)0);
	return 0;
}


