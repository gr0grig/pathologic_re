// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,irand/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,FindActor/2,Trigger/3,GetGameTime/1,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:pt_map_aglaja|A:ShowMap|W:volonteers_danko|W:disease|W:petr|W:map_chertez_state|W:map_chertez_force|W:tvirin|A:RemoveItemByType|W:ood10Petr1|W:d10q01|W:blueprint is given|W:d10q01_blueprint|W:ood10Petr3|W:d10q01MariaSavePetr|A:GetItemCountOfType|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:ui/NPC_Petr.png|W:ui/NPC_Petr_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x42a
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xda vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x422 vars=object
// @EVENT_26: op=0x42e vars=string
// @EVENT_6: op=0x44a vars=
// @PE: 0x51,0xc4,0xda,0x422,0x5c8,0x5d8,0x5e0,0x5f7,0x5fd,0x606,0x618,0x61e,0x62a,0x636,0x642,0x64e,0x658,0x664

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_1387();
		var_11_bool = var_7_bool == (int)14055;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_1527();
		}
		var_17_bool = var_7_bool == (int)14078;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_1533();
		}
		var_46_bool = var_7_bool == (int)40843;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_1533();
		}
		var_50_bool = var_7_bool == (int)40845;
		if(var_50_bool != 0) {
			var_51_object = Obj(); var_52_object = Obj();
			var_51_object = var_1_object;
			var_52_object = var_0_object;
			func_1542(var_52_object);
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_1504();
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_1521(var_98_object);
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_1480(var_104_object);
		}
		var_136_bool = var_7_bool == (int)41504;
		if(var_136_bool != 0) {
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_object;
			func_1542(var_138_object);
			var_139_object = Obj(); var_140_object = Obj();
			var_139_object = var_1_object;
			var_140_object = var_0_object;
			func_1496();
			var_148_object = Obj(); var_149_object = Obj();
			var_148_object = var_1_object;
			var_149_object = var_0_object;
			func_1504();
			var_150_object = Obj(); var_151_object = Obj();
			var_150_object = var_1_object;
			var_151_object = var_0_object;
			func_1521(var_151_object);
			var_152_object = Obj(); var_153_object = Obj();
			var_152_object = var_1_object;
			var_153_object = var_0_object;
			func_1480(var_153_object);
		}
		var_155_bool = var_7_bool == (int)16589;
		if(var_155_bool != 0) {
			var_156_object = Obj(); var_157_object = Obj();
			var_156_object = var_1_object;
			var_157_object = var_0_object;
			func_1542(var_157_object);
			var_158_object = Obj(); var_159_object = Obj();
			var_158_object = var_1_object;
			var_159_object = var_0_object;
			func_1504();
			var_160_object = Obj(); var_161_object = Obj();
			var_160_object = var_1_object;
			var_161_object = var_0_object;
			func_1521(var_161_object);
			var_162_object = Obj(); var_163_object = Obj();
			var_162_object = var_1_object;
			var_163_object = var_0_object;
			func_1480(var_163_object);
		}
		var_165_bool = var_7_bool == (int)40844;
		if(var_165_bool != 0) {
			var_166_object = Obj(); var_167_object = Obj();
			var_166_object = var_1_object;
			var_167_object = var_0_object;
			func_1542(var_167_object);
			var_168_object = Obj(); var_169_object = Obj();
			var_168_object = var_1_object;
			var_169_object = var_0_object;
			func_1504();
			var_170_object = Obj(); var_171_object = Obj();
			var_170_object = var_1_object;
			var_171_object = var_0_object;
			func_1521(var_171_object);
			var_172_object = Obj(); var_173_object = Obj();
			var_172_object = var_1_object;
			var_173_object = var_0_object;
			func_1480(var_173_object);
		}
		var_175_bool = var_7_bool == (int)14081;
		if(var_175_bool != 0) {
			var_176_object = Obj(); var_177_object = Obj();
			var_176_object = var_1_object;
			var_177_object = var_0_object;
			func_1560();
		}
		var_181_bool = var_6_int == (int)14073;
		if(var_181_bool != 0) {
			var_182_string = "";
			func_196(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512871);
			@@@var_0_object:ClearReplies();
			var_200_bool = 0;
			var_200_bool = 0;
			var_201_bool = 0; var_202_object = Obj();
			var_202_object = var_1_object;
			func_1566(var_202_object);
			if(var_201_bool != 0) {
				var_207_bool = 0; var_208_object = Obj();
				var_208_object = var_1_object;
				func_1590(var_208_object);
				if(var_207_bool != 0) {
					var_200_bool = 1;
				}
			}
			if(var_200_bool != 0) {
				@@@var_0_object:AddReply((int)512854, (int)14056, (int)14055);
			}
			var_216_bool = 0;
			var_216_bool = 0;
			var_217_bool = 0; var_218_object = Obj();
			var_218_object = var_1_object;
			func_1602(var_218_object);
			if(var_217_bool != 0) {
				var_223_bool = 0; var_224_object = Obj();
				var_224_object = var_1_object;
				func_1614(var_223_bool, var_224_object);
				if(var_223_bool != 0) {
					var_216_bool = 1;
				}
			}
			if(var_216_bool != 0) {
				@@@var_0_object:AddReply((int)515468, (int)16586, (int)16585);
			}
			var_235_bool = 0;
			var_235_bool = 0;
			var_236_bool = 0; var_237_object = Obj();
			var_237_object = var_1_object;
			func_1624(var_237_object);
			if(var_236_bool != 0) {
				var_242_bool = 0; var_243_object = Obj();
				var_243_object = var_1_object;
				func_1636(var_243_object);
				if(var_242_bool != 0) {
					var_235_bool = 1;
				}
			}
			if(var_235_bool != 0) {
				@@@var_0_object:AddReply((int)512879, (int)41846, (int)14081);
			}
			@@@var_0_object:AddReply((int)512890, (int)-1, (int)14092);
			@@@var_0_object:AddReply((int)538887, (int)-1, (int)40831);
			return 0;
		}
		var_258_bool = var_6_int == (int)41846;
		if(var_258_bool != 0) {
			var_259_string = "";
			func_196(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539888);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539889, (int)41848, (int)41847);
			@@@var_0_object:AddReply((int)539892, (int)41848, (int)41850);
			return 0;
		}
		var_268_bool = var_6_int == (int)41848;
		if(var_268_bool != 0) {
			var_269_string = "";
			func_196(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539890);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539894, (int)41854, (int)41853);
			@@@var_0_object:AddReply((int)539893, (int)41856, (int)41852);
			return 0;
		}
		var_278_bool = var_6_int == (int)41856;
		if(var_278_bool != 0) {
			var_279_string = "";
			func_196(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539897);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539898, (int)41854, (int)41857);
			return 0;
		}
		var_285_bool = var_6_int == (int)41854;
		if(var_285_bool != 0) {
			var_286_string = "";
			func_196(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539895);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539891, (int)14082, (int)41849);
			@@@var_0_object:AddReply((int)539896, (int)-1, (int)41855);
			return 0;
		}
		var_295_bool = var_6_int == (int)14082;
		if(var_295_bool != 0) {
			var_296_string = "";
			func_196(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512880);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512881, (int)14084, (int)14083);
			@@@var_0_object:AddReply((int)539568, (int)14086, (int)41507);
			return 0;
		}
		var_305_bool = var_6_int == (int)14084;
		if(var_305_bool != 0) {
			var_306_string = "";
			func_196(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512882);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512883, (int)14086, (int)14085);
			return 0;
		}
		var_312_bool = var_6_int == (int)14086;
		if(var_312_bool != 0) {
			var_313_string = "";
			func_196(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512884);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512885, (int)14088, (int)14087);
			@@@var_0_object:AddReply((int)539569, (int)14090, (int)41509);
			return 0;
		}
		var_322_bool = var_6_int == (int)14088;
		if(var_322_bool != 0) {
			var_323_string = "";
			func_196(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512886);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512887, (int)14090, (int)14089);
			return 0;
		}
		var_329_bool = var_6_int == (int)14090;
		if(var_329_bool != 0) {
			var_330_string = "";
			func_196(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512888);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512889, (int)-1, (int)14091);
			@@@var_0_object:AddReply((int)539570, (int)-1, (int)41511);
			return 0;
		}
		var_339_bool = var_6_int == (int)16586;
		if(var_339_bool != 0) {
			var_340_string = "";
			func_196(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515469);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512858, (int)14061, (int)14059);
			@@@var_0_object:AddReply((int)538897, (int)-1, (int)40844);
			return 0;
		}
		var_349_bool = var_6_int == (int)14061;
		if(var_349_bool != 0) {
			var_350_string = "";
			func_196(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512860);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512861, (int)14063, (int)14062);
			var_355_bool = 0; var_356_object = Obj();
			var_356_object = var_1_object;
			func_1578(var_356_object);
			if(var_355_bool != 0) {
				@@@var_0_object:AddReply((int)539559, (int)41502, (int)41498);
			}
			return 0;
		}
		var_365_bool = var_6_int == (int)41502;
		if(var_365_bool != 0) {
			var_366_string = "";
			func_196(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539563);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539564, (int)14070, (int)41503);
			return 0;
		}
		var_372_bool = var_6_int == (int)14070;
		if(var_372_bool != 0) {
			var_373_string = "";
			func_196(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512869);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515472, (int)-1, (int)16589);
			return 0;
		}
		var_379_bool = var_6_int == (int)14063;
		if(var_379_bool != 0) {
			var_380_string = "";
			func_196(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512862);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512865, (int)14067, (int)14066);
			return 0;
		}
		var_386_bool = var_6_int == (int)14067;
		if(var_386_bool != 0) {
			var_387_string = "";
			func_196(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512866);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538898, (int)-1, (int)40845);
			@@@var_0_object:AddReply((int)539565, (int)-1, (int)41504);
			return 0;
		}
		var_396_bool = var_6_int == (int)14056;
		if(var_396_bool != 0) {
			var_397_string = "";
			func_196(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512855);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539530, (int)41463, (int)41462);
			@@@var_0_object:AddReply((int)539546, (int)41463, (int)41478);
			return 0;
		}
		var_406_bool = var_6_int == (int)41463;
		if(var_406_bool != 0) {
			var_407_string = "";
			func_196(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539531);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539532, (int)41465, (int)41464);
			@@@var_0_object:AddReply((int)539547, (int)41465, (int)41480);
			return 0;
		}
		var_416_bool = var_6_int == (int)41465;
		if(var_416_bool != 0) {
			var_417_string = "";
			func_196(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539533);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539534, (int)41467, (int)41466);
			@@@var_0_object:AddReply((int)539548, (int)41483, (int)41482);
			return 0;
		}
		var_426_bool = var_6_int == (int)41483;
		if(var_426_bool != 0) {
			var_427_string = "";
			func_196(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539549);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539550, (int)41467, (int)41484);
			@@@var_0_object:AddReply((int)539551, (int)41467, (int)41485);
			return 0;
		}
		var_436_bool = var_6_int == (int)41467;
		if(var_436_bool != 0) {
			var_437_string = "";
			func_196(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539535);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539536, (int)41469, (int)41468);
			return 0;
		}
		var_443_bool = var_6_int == (int)41469;
		if(var_443_bool != 0) {
			var_444_string = "";
			func_196(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539537);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539538, (int)41471, (int)41470);
			@@@var_0_object:AddReply((int)539552, (int)41471, (int)41488);
			return 0;
		}
		var_453_bool = var_6_int == (int)41471;
		if(var_453_bool != 0) {
			var_454_string = "";
			func_196(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539539);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539540, (int)41473, (int)41472);
			return 0;
		}
		var_460_bool = var_6_int == (int)41473;
		if(var_460_bool != 0) {
			var_461_string = "";
			func_196(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539541);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539585, (int)41531, (int)41530);
			return 0;
		}
		var_467_bool = var_6_int == (int)41531;
		if(var_467_bool != 0) {
			var_468_string = "";
			func_196(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539586);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512856, (int)14058, (int)14057);
			@@@var_0_object:AddReply((int)539553, (int)41491, (int)41490);
			return 0;
		}
		var_477_bool = var_6_int == (int)41491;
		if(var_477_bool != 0) {
			var_478_string = "";
			func_196(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539554);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539555, (int)41493, (int)41492);
			@@@var_0_object:AddReply((int)539557, (int)41493, (int)41494);
			return 0;
		}
		var_487_bool = var_6_int == (int)41493;
		if(var_487_bool != 0) {
			var_488_string = "";
			func_196(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539556);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539558, (int)14058, (int)41496);
			return 0;
		}
		var_494_bool = var_6_int == (int)14058;
		if(var_494_bool != 0) {
			var_495_string = "";
			func_196(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512857);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512859, (int)14077, (int)14060);
			return 0;
		}
		var_501_bool = var_6_int == (int)14077;
		if(var_501_bool != 0) {
			var_502_string = "";
			func_196(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512875);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512876, (int)-1, (int)14078);
			@@@var_0_object:AddReply((int)538893, (int)40839, (int)40838);
			return 0;
		}
		var_511_bool = var_6_int == (int)40839;
		if(var_511_bool != 0) {
			var_512_string = "";
			func_196(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538894);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538896, (int)-1, (int)40843);
			return 0;
		}
		var_3_string = true;
		var_517_bool = 0;
		func_1801(var_517_bool);
		if(var_517_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xdb";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj();
	var_6_object = var_8_object;
	TaskCall(0);
	func_0(var_9_object, var_7_int, var_8_object);
	TaskReturn();
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0;
	var_10_bool = var_6_string == "cleanup";
	if(var_10_bool != 0) {
		var_0_object = true;
		IsLoaded(var_8_bool);
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = var_8_bool == 0; //@nz
		if(var_12_bool != 0) {
			var_13_bool = 0;
			func_1114(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_1394(var_14_object);
			RemoveActor(var_14_object);
		}
	} else {
		var_18_bool = var_6_string == "restore";
		if(var_18_bool == 0) goto Label_1097;
		var_0_object = false;
	}
Label_1097:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_1114(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_1394(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_1066:
	Hold();
	goto Label_1066;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0;
	var_8_object = var_19_object;
	func_1116(var_18_bool, var_19_object, (float)130.0);
	var_65_bool = var_18_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_66_int = 0;
	func_1795(var_66_int);
	@@var_14_object:SetNPCName(var_66_int);
	var_67_int = 0;
	func_1793(var_67_int);
	@@var_14_object:SetNPCDescription(var_67_int);
	var_68_string = "";
	func_1797(var_68_string);
	@@var_14_object:SetPhoto(var_68_string);
	var_69_string = "";
	func_1799(var_69_string);
	@@var_14_object:SetPhoto2(var_69_string);
	var_70_int = 0;
	func_1776(var_70_int);
	@@var_14_object:SetPlayerName(var_70_int);
	IsOverrideActive(var_15_bool);
	var_78_bool = var_15_bool;
	if(var_78_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	DoDialog(var_14_object);
	var_79_bool = 0; var_80_object = Obj();
	func_1394(Obj());
	var_81_object = var_80_object;
	func_1203(var_79_bool, var_80_object);
	var_174_object = Obj(); var_175_object = Obj();
	var_8_object = var_174_object;
	var_14_object = var_175_object;
	TaskCall(1);
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object);
	TaskReturn();
	@@var_14_object:IsDialogEnd(var_17_bool);
	
Label_63:
	var_276_bool = var_17_bool == 0; //@nz
	if(var_276_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_63;
	}
	var_8_object = Obj();
	func_1185();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1793(var_67_int)
{
	var_67_int = 539028;
	return 0;
}


func_1410(var_202_int, var_203_string)
{
	var_204_int = 0; var_205_int = 0;
	GetVariable(var_203_string, var_205_int);
	var_205_int = var_202_int;
	return 2;
}


func_1795(var_66_int)
{
	var_66_int = 539027;
	return 0;
}


func_1797(var_68_string)
{
	var_68_string = "ui/NPC_Petr.png";
	return 0;
}


func_1542(var_51_object)
{
	SetVariable("d10q01", (int)3);
	func_1672();
	Trace("blueprint is given");
	var_64_object = Obj(); var_65_string = ""; var_66_int = 0;
	var_51_object = var_64_object;
	func_1446(var_64_object, "d10q01_blueprint", (int)1);
	return 0;
}


func_1799(var_69_string)
{
	var_69_string = "ui/NPC_Petr_b.png";
	return 0;
}


func_1415(var_80_int, var_81_int)
{
	var_82_object = Obj(); var_83_object = Obj();
	CreateIntVector(var_83_object);
	@@var_83_object:add(var_80_int);
	@@var_83_object:add(var_81_int);
	SendWorldWndMessage((int)3, var_83_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1801(var_61_bool)
{
	var_61_bool = 0;
	return 0;
}


func_1672()
{
	var_55_object = Obj(); var_56_object = Obj();
	CreateDiaryEntry(var_56_object, (int)190, (int)1, (int)515475);
	var_60_bool = 0; var_61_object = Obj(); var_62_int = 0;
	var_56_object = var_61_object;
	func_1698(var_60_bool, var_61_object, (int)186);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1298(var_121_bool, var_122_object)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = "";
	var_134_int = 0;
	func_1471(var_134_int);
	var_140_int = "d" + var_134_int;
	var_128_string = var_140_int + "m";
	var_129_int = 0;
	
Label_1307:
	if((int)1 != 0) {
		var_144_int = var_129_int + (int)1;
		var_145_int = var_128_string + var_144_int;
		@@var_122_object:HasProperty(var_145_int, var_130_bool);
		var_146_bool = var_130_bool == 0; //@nz
		if(var_146_bool != 0) {
		} else {
			var_129_int = var_129_int + (int)1;
			goto Label_1307;
		}
	}
	var_147_bool = var_129_int == 0; //@nz
	if(var_147_bool != 0) {
		var_121_bool = 0;
		return 10;
	}
	var_131_int = 0;
	var_149_bool = var_129_int > (int)1;
	if(var_149_bool != 0) {
		irand(var_131_int, var_129_int);
	}
	var_151_int = var_131_int + (int)1;
	var_152_int = var_128_string + var_151_int;
	@@var_122_object:GetProperty(var_152_int, var_132_string);
	var_153_bool = 0; var_154_string = "";
	var_132_string = var_154_string;
	func_1372(var_153_bool, var_154_string);
	var_153_bool = var_121_bool;
	return 10;
	
}


func_1427(var_69_object, var_70_object, var_71_int)
{
	var_72_int = 0; var_73_int = 0; var_74_bool = 0; var_75_int = 0; var_76_int = 0; var_77_bool = 0;
	@@var_70_object:GetItemID(var_75_int);
	GetInvItemProperty(var_76_int, var_75_int, "Category");
	@@var_69_object:AddItem(var_77_bool, var_70_object, var_76_int, var_71_int);
	var_79_bool = var_77_bool == 0; //@nz
	if(var_79_bool != 0) {
		@@var_69_object:DropItems(var_70_object, var_71_int);
	} else {
		var_80_int = 0; var_81_int = 0;
		var_75_int = var_80_int;
		var_71_int = var_81_int;
		func_1415(var_80_int, var_81_int);
	}
	return 6;
	
}


func_1685(var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj();
	GetDiaryRoot(var_38_object);
	var_39_bool = var_38_object == 0; //@nz
	if(var_39_bool != 0) {
		Trace("Can't retrieve diary root");
		var_36_object = 0;
		return 2;
	}
	var_38_object = var_36_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1560()
{
	SetVariable("ood10Petr3", (int)1);
	return 0;
}


func_1566(var_200_bool)
{
	var_202_int = 0; var_203_string = "";
	func_1410(var_202_int, "ood10Petr1");
	var_207_bool = var_202_int == (int)0;
	if(var_207_bool != 0) {
		var_200_bool = 1;
		return 0;
	}
	var_200_bool = 0;
	return 0;
}


func_1185()
{
	var_278_bool = 0; var_279_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_281_bool = 0;
	func_1801(var_281_bool);
	if(var_281_bool != 0) {
	} else {
		HasAnimationTrack(var_279_bool, "head");
		var_283_bool = var_279_bool;
		if(var_283_bool == 0) goto Label_1202;
		UnlookAsync("head");
	}
Label_1202:
	return 2;
	
}


func_1698(var_27_bool, var_28_object, var_29_int)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_object = Obj(); var_34_object = Obj(); var_35_int = 0;
	func_1685(Obj());
	var_36_object = var_33_object;
	@@var_33_object:Find(var_29_int, var_34_object);
	var_41_bool = var_34_object == 0; //@nz
	if(var_41_bool != 0) {
		var_43_int = "Can't find diary parent with id: " + var_29_int;
		Trace(var_43_int);
		var_27_bool = 0;
		return 6;
	}
	@@var_34_object:AddChild(var_28_object);
	SendWorldWndMessage((int)7);
	@@var_28_object:GetCategory(var_35_int);
	SetDiarySection(var_35_int);
	var_27_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1446(var_64_object, var_65_string, var_66_int)
{
	var_67_object = Obj(); var_68_object = Obj();
	CreateInvItem(var_68_object);
	@@var_68_object:SetItemName(var_65_string);
	var_69_object = Obj(); var_70_object = Obj(); var_71_int = 0;
	var_64_object = var_69_object;
	var_68_object = var_70_object;
	var_66_int = var_71_int;
	func_1427(var_69_object, var_70_object, var_71_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1578(var_355_bool)
{
	var_357_int = 0; var_358_string = "";
	func_1410(var_357_int, "d10q01MariaSavePetr");
	var_360_bool = var_357_int == (int)1;
	if(var_360_bool != 0) {
		var_355_bool = 1;
		return 0;
	}
	var_355_bool = 0;
	return 0;
}


func_1203(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0;
	GetVariable("voice_common", var_86_int);
	var_89_int = var_86_int;
	if(var_89_int != 0) {
		var_90_bool = 0; var_91_object = Obj();
		var_80_object = var_91_object;
		func_1261(var_90_bool, var_91_object);
		var_120_bool = var_90_bool == 0; //@nz
		if(var_120_bool != 0) {
			var_121_bool = 0; var_122_object = Obj();
			var_80_object = var_122_object;
			func_1298(var_121_bool, var_122_object);
			var_156_bool = var_121_bool == 0; //@nz
			if(var_156_bool != 0) {
				var_79_bool = 0;
				return 4;
			}
		}
		irand(var_87_int, (int)2);
		var_158_int = var_87_int;
		if(var_158_int != 0) {
			var_161_int = var_86_int + (int)1;
			var_163_int = var_161_int % (int)3;
			SetVariable("voice_common", var_163_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_166_bool = 0; var_167_object = Obj();
		var_80_object = var_167_object;
		func_1298(var_166_bool, var_167_object);
		var_168_bool = var_166_bool == 0; //@nz
		if(var_168_bool != 0) {
			var_169_bool = 0; var_170_object = Obj();
			var_80_object = var_170_object;
			func_1261(var_169_bool, var_170_object);
			var_171_bool = var_169_bool == 0; //@nz
			if(var_171_bool != 0) {
				var_79_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1259;
	
Label_1259:
	var_79_bool = 1;
	return 4;
	
}


func_1459(var_141_bool, var_142_string, var_143_string, var_144_string)
{
	var_145_object = Obj(); var_146_object = Obj();
	FindActor(var_146_object, var_142_string);
	var_147_bool = var_146_object == 0; //@ne
	if(var_147_bool != 0) {
		var_141_bool = 0;
		return 2;
	}
	Trigger(var_146_object, var_143_string, var_144_string);
	var_141_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1590(var_208_bool)
{
	var_210_int = 0; var_211_string = "";
	func_1410(var_210_int, "d10q01");
	var_213_bool = var_210_int == (int)1;
	if(var_213_bool != 0) {
		var_208_bool = 1;
		return 0;
	}
	var_208_bool = 0;
	return 0;
}


func_1341(var_260_string)
{
	var_261_bool = 0; var_262_float = 0; var_263_float = 0; var_264_bool = 0; var_265_float = 0; var_266_float = 0;
	lshHasAnimation(var_264_bool, var_260_string);
	var_267_bool = var_264_bool;
	if(var_267_bool != 0) {
		lshGetAnimTimes(var_260_string, var_265_float, var_266_float);
		lshPlayAnimation(var_265_float, var_266_float, (bool)0);
	} else {
		var_270_int = "Can't find lsh animation : " + var_260_string;
		Trace(var_270_int);
	}
	return 6;
	
}


func_1726(var_108_object)
{
	var_109_object = Obj(); var_110_object = Obj(); var_111_object = Obj(); var_112_object = Obj();
	GetMainOutdoorScene(var_111_object);
	var_113_bool = var_111_object == 0; //@ne
	if(var_113_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_112_object = 0;
		var_112_object = var_108_object;
		return 4;
	}
	@@var_111_object:GetMap(var_112_object);
	var_112_object = var_108_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1471(var_134_int)
{
	var_135_float = 0; var_136_float = 0;
	GetGameTime(var_136_float);
	var_138_int = 0;
	var_138_int = var_136_float / (int)24;
	var_134_int = (int)1 + var_138_int;
	return 2;
}


func_1602(var_218_bool)
{
	var_220_int = 0; var_221_string = "";
	func_1410(var_220_int, "d10q01");
	var_223_bool = var_220_int == (int)2;
	if(var_223_bool != 0) {
		var_218_bool = 1;
		return 0;
	}
	var_218_bool = 0;
	return 0;
}


func_196(var_2_object, var_181_string)
{
	var_182_bool = 0;
	func_1801(var_182_bool);
	var_183_bool = var_182_bool == 0; //@nz
	if(var_183_bool != 0) {
		return 0;
	}
	var_184_bool = var_181_string == var_2_object;
	if(var_184_bool != 0) {
		return 0;
	}
	var_185_string = ""; var_186_bool = 0;
	var_181_string = var_185_string;
	var_188_bool = var_181_string == "";
	if(var_188_bool != 0) {
		var_186_bool = 0;
	} else {
		var_186_bool = 1;
	}
	func_1357(var_185_string, var_186_bool);
	var_2_object = var_181_string;
	return 0;
	
}


func_1480(var_104_object)
{
	var_105_object = Obj(); var_106_string = ""; var_107_float = 0;
	func_1726(Obj());
	var_108_object = var_105_object;
	func_1743(var_105_object, "pt_map_aglaja", (float)2);
	var_134_object = Obj();
	func_1726(var_134_object);
	@@var_104_object:ShowMap(var_134_object);
	return 0;
}


func_1357(var_185_string, var_186_bool)
{
	var_189_bool = 0; var_190_float = 0; var_191_float = 0; var_192_bool = 0; var_193_float = 0; var_194_float = 0;
	lshHasAnimation(var_192_bool, var_185_string);
	var_195_bool = var_192_bool;
	if(var_195_bool != 0) {
		lshGetAnimTimes(var_185_string, var_193_float, var_194_float);
		lshPlayAnimation(var_193_float, var_194_float, var_186_bool);
	} else {
		var_197_int = "Can't find lsh animation : " + var_185_string;
		Trace(var_197_int);
	}
	return 6;
	
}


func_1614(var_224_bool, var_225_object)
{
	var_226_bool = 0; var_227_object = Obj();
	var_225_object = var_227_object;
	func_1648(var_226_bool, var_227_object);
	if(var_226_bool != 0) {
		var_224_bool = 1;
		return 0;
	}
	var_224_bool = 0;
	return 0;
}


func_1743(var_105_object, var_106_string, var_107_float)
{
	var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); var_117_object = Obj(); var_118_bool = 0; var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_object = Obj(); var_122_bool = 0;
	GetMainOutdoorScene(var_121_object);
	var_123_bool = var_121_object == 0; //@ne
	if(var_123_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_121_object:GetLocator(var_106_string, var_122_bool, var_119_cvector, var_120_cvector);
	var_125_bool = var_122_bool == 0; //@nz
	if(var_125_bool != 0) {
		var_127_int = "Warning: outdoor scene locator " + var_106_string;
		var_129_int = var_127_int + " doesnt exist";
		Trace(var_129_int);
	}
	@@var_121_object:GetMap(var_105_object);
	var_130_bool = var_105_object == 0; //@ne
	if(var_130_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_132_float = GetByIndex(var_119_cvector, 0);
	var_133_float = GetByIndex(var_119_cvector, 2);
	@@var_105_object:SetMapParams(var_132_float, var_133_float, var_107_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object;
	var_1_object = var_174_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_181_string = "";
		func_196(var_175_object, "Neutral");
		@@@var_0_object:SetMessage((int)512871);
		@@@var_0_object:ClearReplies();
		var_199_bool = 0;
		var_199_bool = 0;
		var_200_bool = 0; var_201_object = Obj();
		var_201_object = var_1_object;
		func_1566(var_201_object);
		if(var_200_bool != 0) {
			var_208_bool = 0; var_209_object = Obj();
			var_209_object = var_1_object;
			func_1590(var_209_object);
			if(var_208_bool != 0) {
				var_199_bool = 1;
			}
		}
		if(var_199_bool != 0) {
			@@@var_0_object:AddReply((int)512854, (int)14056, (int)14055);
		}
		var_217_bool = 0;
		var_217_bool = 0;
		var_218_bool = 0; var_219_object = Obj();
		var_219_object = var_1_object;
		func_1602(var_219_object);
		if(var_218_bool != 0) {
			var_224_bool = 0; var_225_object = Obj();
			var_225_object = var_1_object;
			func_1614(var_224_bool, var_225_object);
			if(var_224_bool != 0) {
				var_217_bool = 1;
			}
		}
		if(var_217_bool != 0) {
			@@@var_0_object:AddReply((int)515468, (int)16586, (int)16585);
		}
		var_236_bool = 0;
		var_236_bool = 0;
		var_237_bool = 0; var_238_object = Obj();
		var_238_object = var_1_object;
		func_1624(var_238_object);
		if(var_237_bool != 0) {
			var_243_bool = 0; var_244_object = Obj();
			var_244_object = var_1_object;
			func_1636(var_244_object);
			if(var_243_bool != 0) {
				var_236_bool = 1;
			}
		}
		if(var_236_bool != 0) {
			@@@var_0_object:AddReply((int)512879, (int)41846, (int)14081);
		}
		@@@var_0_object:AddReply((int)512890, (int)-1, (int)14092);
		@@@var_0_object:AddReply((int)538887, (int)-1, (int)40831);
		goto Label_166;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_166:
	var_258_bool = 0;
	func_1801(var_258_bool);
	if(var_258_bool != 0) {

	Label_170:
		lshWaitForAnimEnd();
		var_259_string = var_3_string;
		if(var_259_string != 0) {
		} else {
			var_260_string = "";
			var_260_string = var_2_object;
			func_1341(var_260_string);
			goto Label_170;
	}
		PlayAnimation("all", "idle");

	Label_185:
		WaitForAnimEnd();
		var_273_string = var_3_string;
		if(var_273_string != 0) {
			goto Label_195;
		}
		PlayAnimation("all", "idle");
		goto Label_185;
	}
	goto Label_195;
	
Label_195:
	return 0;
	
}


func_1624(var_237_bool)
{
	var_239_int = 0; var_240_string = "";
	func_1410(var_239_int, "d10q01");
	var_242_bool = var_239_int == (int)3;
	if(var_242_bool != 0) {
		var_237_bool = 1;
		return 0;
	}
	var_237_bool = 0;
	return 0;
}


func_1496()
{
	var_141_bool = 0; var_142_string = ""; var_143_string = ""; var_144_string = "";
	func_1459(var_141_bool, "volonteers_danko", "disease", "petr");
	return 0;
}


func_1114(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_1116(var_18_bool, var_19_object, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0;
	@@var_19_object:GetPosition(var_31_cvector);
	@@var_19_object:GetEyesHeight(var_30_float);
	var_39_float = GetByIndex(var_31_cvector, 1);
	var_39_float = var_39_float + var_30_float;
	SetByIndex(var_31_cvector, 1) = var_39_float;
	GetPosition(var_32_cvector);
	GetEyesHeight(var_30_float);
	var_40_float = GetByIndex(var_32_cvector, 1);
	var_40_float = var_40_float + var_30_float;
	SetByIndex(var_32_cvector, 1) = var_40_float;
	var_33_cvector = var_31_cvector - var_32_cvector;
	var_41_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (float)0;
	var_42_int = var_33_cvector | var_33_cvector;
	var_43_float = sqrt(var_42_int);
	var_33_cvector = var_33_cvector / var_43_float;
	var_34_cvector = -var_33_cvector;
	var_44_float = var_33_cvector * var_20_float;
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0);
	var_46_cvector = var_34_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1400(var_45_cvector, var_46_cvector);
	var_54_float = var_45_cvector * (int)25;
	var_55_int = var_44_float + var_54_float;
	var_35_cvector = var_55_int - CVector(0.0, 10.0, 0.0);
	var_36_cvector = var_32_cvector + var_35_cvector;
	IsOverrideActive(var_37_bool);
	var_57_bool = var_37_bool;
	if(var_57_bool != 0) {
		var_18_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_36_cvector, var_34_cvector, (bool)1);
	var_59_float = GetByIndex(var_35_cvector, 0);
	var_60_float = GetByIndex(var_35_cvector, 2);
	Rotate(var_59_float, var_60_float);
	var_61_bool = 0;
	func_1801(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		HasAnimationTrack(var_38_bool, "head");
		var_63_bool = var_38_bool;
		if(var_63_bool == 0) goto Label_1179;
		LookAsyncCamera("head");
	}
Label_1179:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 18;
	
}


func_1372(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0;
	var_117_bool = 0;
	func_1801(var_117_bool);
	if(var_117_bool != 0) {
		lshHasSpeech(var_116_bool, var_114_string);
		var_118_bool = var_116_bool;
		if(var_118_bool != 0) {
			lshPlaySpeech(var_114_string);
			var_113_bool = 1;
			return 2;
		}
	}
	var_113_bool = 0;
	return 2;
}


func_1504()
{
	var_87_int = 0; var_88_string = "";
	func_1410(var_87_int, "map_chertez_state");
	var_92_bool = var_87_int <= (int)4;
	if(var_92_bool != 0) {
		SetVariable("map_chertez_state", (int)4);
		SetVariable("map_chertez_force", (int)1);
	}
	return 0;
}


func_1636(var_243_bool)
{
	var_245_int = 0; var_246_string = "";
	func_1410(var_245_int, "ood10Petr3");
	var_248_bool = var_245_int == (int)0;
	if(var_248_bool != 0) {
		var_243_bool = 1;
		return 0;
	}
	var_243_bool = 0;
	return 0;
}


func_1387()
{
	var_9_bool = 0;
	func_1801(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1261(var_90_bool, var_91_object)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = "";
	var_97_string = "c";
	var_98_int = 0;
	
Label_1264:
	if((int)1 != 0) {
		var_104_int = var_98_int + (int)1;
		var_105_int = var_97_string + var_104_int;
		@@var_91_object:HasProperty(var_105_int, var_99_bool);
		var_106_bool = var_99_bool == 0; //@nz
		if(var_106_bool != 0) {
		} else {
			var_98_int = var_98_int + (int)1;
			goto Label_1264;
		}
	}
	var_107_bool = var_98_int == 0; //@nz
	if(var_107_bool != 0) {
		var_90_bool = 0;
		return 10;
	}
	var_100_int = 0;
	var_109_bool = var_98_int > (int)1;
	if(var_109_bool != 0) {
		irand(var_100_int, var_98_int);
	}
	var_111_int = var_100_int + (int)1;
	var_112_int = var_97_string + var_111_int;
	@@var_91_object:GetProperty(var_112_int, var_101_string);
	var_113_bool = 0; var_114_string = "";
	var_101_string = var_114_string;
	func_1372(var_113_bool, var_114_string);
	var_113_bool = var_90_bool;
	return 10;
	
}


func_1776(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("branch", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x6ff";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
	return 2;
}


func_1521(var_97_object)
{
	var_99_int = 0; var_100_int = 0;
	@@var_97_object:RemoveItemByType(var_100_int, "tvirin", (int)5);
	return 2;
}


func_1394(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1648(var_226_bool, var_227_object)
{
	var_228_int = 0; var_229_int = 0;
	@@var_227_object:GetItemCountOfType(var_229_int, "tvirin");
	var_232_bool = var_229_int >= (int)5;
	if(var_232_bool != 0) {
		var_226_bool = 1;
		return 2;
	}
	var_226_bool = 0;
	return 2;
}


func_1527()
{
	SetVariable("ood10Petr1", (int)1);
	return 0;
}


func_1400(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0;
	var_50_int = var_46_cvector | var_46_cvector;
	var_49_float = sqrt(var_50_int);
	var_51_float = 9.999999974752427e-07;
	var_52_bool = var_49_float < var_51_float;
	if(var_52_bool != 0) {
		var_45_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_45_cvector = var_46_cvector / var_49_float;
	return 2;
}


func_1659()
{
	var_22_object = Obj(); var_23_object = Obj();
	CreateDiaryEntry(var_23_object, (int)189, (int)1, (int)515474);
	var_27_bool = 0; var_28_object = Obj(); var_29_int = 0;
	var_23_object = var_28_object;
	func_1698(var_27_bool, var_28_object, (int)186);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1533()
{
	SetVariable("d10q01", (int)2);
	func_1659();
	return 0;
}


