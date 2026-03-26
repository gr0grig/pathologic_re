// @IMPORTS: Hold/0,StopGroup0/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,GetInvItemByName/2,FindActor/2,Trigger/2,GetGameTime/1,lshWaitForAnimEnd/1,TriggerWorld/2,SetVariable/2,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1,CreateDiaryEntry/4
// @STRINGS: W:Neutral|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |A:HasItem|W:No|W:ui/NPC_Mat.png|W:playsound|W:giveitem|W:ood8Mat1|W:d8q01BringBadBoy|W:d8q01MatBringToy|W:d8q01MatGotoToyHouse|W:pt_map_d8q01_toyhouse|A:AddMark|W:ood8Mat2|W:quest_d8_01|W:unlock_boiny|W:ood8Mat3|W:ood8Mat4|W:ood8Mat5|W:ood8Mat6|W:ood8Mat7|W:d8TalkToMat|W:d8q02|W:feromicin|A:RemoveItemByType|A:ShowMap|W:d8q01|W:toy_horse|W:d8q01BigVladIsVictim|W:d8q01MladVladIsVictim|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:player|W:Adding diary entry
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
// @EVENT_11: op=0x16d vars=int,int
// @PE: 0x23,0x29,0x70,0x15d,0x16d,0x659,0x6a6,0x6bb,0x6c1,0x6c3,0x6c9,0x6e9,0x6ef,0x6f9,0x6ff,0x705,0x70b,0x711,0x717,0x71d,0x726,0x735,0x745,0x751,0x75d,0x769,0x774,0x780,0x78c,0x798,0x7a4,0x7b0,0x7bc,0x7c8,0x7d4,0x7e0,0x8ac

task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	StopGroup0();
	return 0;
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool)
{
	var_6_object = Obj();
	var_5_bool = var_6_object;
	func_2220(var_6_object);
	return 0;
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool)
{
	var_6_bool = 0; var_7_object = Obj();
	var_5_bool = var_7_object;
	func_1552(var_6_bool, var_7_object);
	WaitForAnimEnd();
	return 0;
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	if((int)1 != 0) {
		func_1647();
		var_10_bool = var_6_int == (int)14805;
		if(var_10_bool != 0) {
			var_11_object = Obj(); var_12_object = Obj();
			var_11_object = var_1_object;
			var_12_object = var_0_object;
			func_1737();
		}
		var_41_bool = var_6_int == (int)14811;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_1746();
			var_71_object = Obj(); var_72_object = Obj();
			var_71_object = var_1_object;
			var_72_object = var_0_object;
			func_1845(var_72_object);
		}
		var_98_bool = var_6_int == (int)14812;
		if(var_98_bool != 0) {
			var_99_object = Obj(); var_100_object = Obj();
			var_99_object = var_1_object;
			var_100_object = var_0_object;
			func_1769();
		}
		var_104_bool = var_6_int == (int)14816;
		if(var_104_bool != 0) {
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_1775();
		}
		var_123_bool = var_6_int == (int)13511;
		if(var_123_bool != 0) {
			var_124_object = Obj(); var_125_object = Obj();
			var_124_object = var_1_object;
			var_125_object = var_0_object;
			func_1785();
		}
		var_129_bool = var_6_int == (int)13526;
		if(var_129_bool != 0) {
			var_130_object = Obj(); var_131_object = Obj();
			var_130_object = var_1_object;
			var_131_object = var_0_object;
			func_1791();
		}
		var_135_bool = var_6_int == (int)13517;
		if(var_135_bool != 0) {
			var_136_object = Obj(); var_137_object = Obj();
			var_136_object = var_1_object;
			var_137_object = var_0_object;
			func_1797();
		}
		var_141_bool = var_6_int == (int)14996;
		if(var_141_bool != 0) {
			var_142_object = Obj(); var_143_object = Obj();
			var_142_object = var_1_object;
			var_143_object = var_0_object;
			func_1803();
		}
		var_147_bool = var_6_int == (int)15004;
		if(var_147_bool != 0) {
			var_148_object = Obj(); var_149_object = Obj();
			var_148_object = var_1_object;
			var_149_object = var_0_object;
			func_1775();
		}
		var_151_bool = var_6_int == (int)14817;
		if(var_151_bool != 0) {
			var_152_object = Obj(); var_153_object = Obj();
			var_152_object = var_1_object;
			var_153_object = var_0_object;
			func_1809();
		}
		var_157_bool = var_6_int == (int)15002;
		if(var_157_bool != 0) {
			var_158_object = Obj(); var_159_object = Obj();
			var_158_object = var_1_object;
			var_159_object = var_0_object;
			func_1775();
		}
		var_161_bool = var_6_int == (int)15007;
		if(var_161_bool != 0) {
			var_162_object = Obj(); var_163_object = Obj();
			var_162_object = var_1_object;
			var_163_object = var_0_object;
			func_1839(var_163_object);
			var_168_object = Obj(); var_169_object = Obj();
			var_168_object = var_1_object;
			var_169_object = var_0_object;
			func_1723();
			var_172_object = Obj(); var_173_object = Obj();
			var_172_object = var_1_object;
			var_173_object = var_0_object;
			func_1821();
			var_185_object = Obj(); var_186_object = Obj();
			var_185_object = var_1_object;
			var_186_object = var_0_object;
			func_1729();
		}
		var_188_bool = var_6_int == (int)15010;
		if(var_188_bool != 0) {
			var_189_object = Obj(); var_190_object = Obj();
			var_189_object = var_1_object;
			var_190_object = var_0_object;
			func_1830();
		}
		var_203_bool = var_5_int == (int)14737;
		if(var_203_bool != 0) {
			var_204_bool = 0;
			var_204_bool = 0;
			var_205_bool = 0; var_206_object = Obj();
			var_206_object = var_1_object;
			func_1861(var_206_object);
			if(var_205_bool != 0) {
				var_213_bool = 0; var_214_object = Obj();
				var_214_object = var_1_object;
				func_1873(var_214_object);
				if(var_213_bool != 0) {
					var_204_bool = 1;
				}
			}
			if(var_204_bool != 0) {
				var_219_object = Obj(); var_220_object = Obj();
				var_219_object = var_1_object;
				var_220_object = var_0_object;
				func_1731();
				var_223_object = Obj(); var_224_object = Obj();
				var_223_object = var_1_object;
				var_224_object = var_0_object;
				func_1815();
				var_227_string = "";
				func_349(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)13496);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)13504, (int)14773, (int)14746);
				@@@var_0_object:AddReply((int)13505, (int)14748, (int)14747);
				return 0;
			}
			var_249_object = Obj(); var_250_object = Obj();
			var_249_object = var_1_object;
			var_250_object = var_0_object;
			func_1815();
			var_251_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)12350);
			@@@var_0_object:ClearReplies();
			var_253_bool = 0;
			var_253_bool = 0;
			var_254_bool = 0;
			var_254_bool = 0;
			var_255_bool = 0; var_256_object = Obj();
			var_256_object = var_1_object;
			func_1885(var_256_object);
			if(var_255_bool != 0) {
				var_261_bool = 0; var_262_object = Obj();
				var_262_object = var_1_object;
				func_1897(var_261_bool, var_262_object);
				if(var_261_bool != 0) {
					var_254_bool = 1;
				}
			}
			if(var_254_bool != 0) {
				var_270_bool = 0; var_271_object = Obj();
				var_271_object = var_1_object;
				func_1908(var_271_object);
				if(var_270_bool != 0) {
					var_253_bool = 1;
				}
			}
			if(var_253_bool != 0) {
				@@@var_0_object:AddReply((int)13563, (int)14813, (int)14812);
			}
			var_279_bool = 0; var_280_object = Obj();
			var_280_object = var_1_object;
			func_1920(var_280_object);
			if(var_279_bool != 0) {
				@@@var_0_object:AddReply((int)12352, (int)13512, (int)13511);
			}
			var_288_bool = 0; var_289_object = Obj();
			var_289_object = var_1_object;
			func_1932(var_289_object);
			if(var_288_bool != 0) {
				@@@var_0_object:AddReply((int)12366, (int)13527, (int)13526);
			}
			var_297_bool = 0; var_298_object = Obj();
			var_298_object = var_1_object;
			func_1944(var_298_object);
			if(var_297_bool != 0) {
				@@@var_0_object:AddReply((int)12357, (int)13518, (int)13517);
			}
			var_306_bool = 0;
			var_306_bool = 0;
			var_307_bool = 0; var_308_object = Obj();
			var_308_object = var_1_object;
			func_1956(var_308_object);
			if(var_307_bool != 0) {
				var_313_bool = 0; var_314_object = Obj();
				var_314_object = var_1_object;
				func_1980(var_314_object);
				if(var_313_bool != 0) {
					var_306_bool = 1;
				}
			}
			if(var_306_bool != 0) {
				@@@var_0_object:AddReply((int)13752, (int)14997, (int)14996);
			}
			var_322_bool = 0;
			var_322_bool = 0;
			var_323_bool = 0; var_324_object = Obj();
			var_324_object = var_1_object;
			func_1968(var_324_object);
			if(var_323_bool != 0) {
				var_329_bool = 0; var_330_object = Obj();
				var_330_object = var_1_object;
				func_1992(var_330_object);
				if(var_329_bool != 0) {
					var_322_bool = 1;
				}
			}
			if(var_322_bool != 0) {
				@@@var_0_object:AddReply((int)13568, (int)14818, (int)14817);
			}
			var_338_bool = 0;
			var_338_bool = 0;
			var_339_bool = 0; var_340_object = Obj();
			var_340_object = var_1_object;
			func_2004(var_340_object);
			if(var_339_bool != 0) {
				var_345_bool = 0; var_346_object = Obj();
				var_346_object = var_1_object;
				func_2016(var_345_bool, var_346_object);
				if(var_345_bool != 0) {
					var_338_bool = 1;
				}
			}
			if(var_338_bool != 0) {
				@@@var_0_object:AddReply((int)13766, (int)15006, (int)15005);
			}
			var_353_bool = 0;
			var_353_bool = 0;
			var_354_bool = 0; var_355_object = Obj();
			var_355_object = var_1_object;
			func_2004(var_355_object);
			if(var_354_bool != 0) {
				var_356_bool = 0; var_357_object = Obj();
				var_357_object = var_1_object;
				func_2016(var_356_bool, var_357_object);
				var_358_bool = var_356_bool == 0; //@nz
				if(var_358_bool != 0) {
					var_353_bool = 1;
				}
			}
			if(var_353_bool != 0) {
				@@@var_0_object:AddReply((int)13769, (int)15009, (int)15008);
			}
			@@@var_0_object:AddReply((int)12351, (int)-1, (int)13510);
			return 0;
		}
		var_366_bool = var_5_int == (int)15009;
		if(var_366_bool != 0) {
			var_367_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13770);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13771, (int)-1, (int)15010);
			return 0;
		}
		var_373_bool = var_5_int == (int)15006;
		if(var_373_bool != 0) {
			var_374_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13767);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13768, (int)-1, (int)15007);
			return 0;
		}
		var_380_bool = var_5_int == (int)14818;
		if(var_380_bool != 0) {
			var_381_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13569);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13570, (int)14820, (int)14819);
			return 0;
		}
		var_387_bool = var_5_int == (int)14820;
		if(var_387_bool != 0) {
			var_388_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13571);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13572, (int)15001, (int)14821);
			return 0;
		}
		var_394_bool = var_5_int == (int)15001;
		if(var_394_bool != 0) {
			var_395_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13757);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13758, (int)-1, (int)15002);
			return 0;
		}
		var_401_bool = var_5_int == (int)14997;
		if(var_401_bool != 0) {
			var_402_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13753);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13754, (int)14999, (int)14998);
			return 0;
		}
		var_408_bool = var_5_int == (int)14999;
		if(var_408_bool != 0) {
			var_409_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13755);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13756, (int)15003, (int)15000);
			return 0;
		}
		var_415_bool = var_5_int == (int)15003;
		if(var_415_bool != 0) {
			var_416_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13759);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13760, (int)-1, (int)15004);
			return 0;
		}
		var_422_bool = var_5_int == (int)13518;
		if(var_422_bool != 0) {
			var_423_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)12358);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12359, (int)13520, (int)13519);
			@@@var_0_object:AddReply((int)13497, (int)14739, (int)14738);
			return 0;
		}
		var_432_bool = var_5_int == (int)14739;
		if(var_432_bool != 0) {
			var_433_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13498);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13499, (int)14741, (int)14740);
			return 0;
		}
		var_439_bool = var_5_int == (int)14741;
		if(var_439_bool != 0) {
			var_440_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13500);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13501, (int)14743, (int)14742);
			return 0;
		}
		var_446_bool = var_5_int == (int)14743;
		if(var_446_bool != 0) {
			var_447_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13502);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13503, (int)13524, (int)14744);
			return 0;
		}
		var_453_bool = var_5_int == (int)13520;
		if(var_453_bool != 0) {
			var_454_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)12360);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12361, (int)13522, (int)13521);
			return 0;
		}
		var_460_bool = var_5_int == (int)13522;
		if(var_460_bool != 0) {
			var_461_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)12362);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12363, (int)13524, (int)13523);
			return 0;
		}
		var_467_bool = var_5_int == (int)13524;
		if(var_467_bool != 0) {
			var_468_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)12364);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12365, (int)-1, (int)13525);
			return 0;
		}
		var_474_bool = var_5_int == (int)13527;
		if(var_474_bool != 0) {
			var_475_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)12367);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12368, (int)13529, (int)13528);
			return 0;
		}
		var_481_bool = var_5_int == (int)13529;
		if(var_481_bool != 0) {
			var_482_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)12369);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12370, (int)13531, (int)13530);
			return 0;
		}
		var_488_bool = var_5_int == (int)13531;
		if(var_488_bool != 0) {
			var_489_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)12371);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12372, (int)-1, (int)13532);
			return 0;
		}
		var_495_bool = var_5_int == (int)13512;
		if(var_495_bool != 0) {
			var_496_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)12353);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13529, (int)14775, (int)14774);
			return 0;
		}
		var_502_bool = var_5_int == (int)14775;
		if(var_502_bool != 0) {
			var_503_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13530);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13531, (int)14777, (int)14776);
			return 0;
		}
		var_509_bool = var_5_int == (int)14777;
		if(var_509_bool != 0) {
			var_510_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13532);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13533, (int)14779, (int)14778);
			@@@var_0_object:AddReply((int)13536, (int)14782, (int)14781);
			return 0;
		}
		var_519_bool = var_5_int == (int)14782;
		if(var_519_bool != 0) {
			var_520_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13537);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13538, (int)14784, (int)14783);
			return 0;
		}
		var_526_bool = var_5_int == (int)14784;
		if(var_526_bool != 0) {
			var_527_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13539);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13540, (int)14786, (int)14785);
			return 0;
		}
		var_533_bool = var_5_int == (int)14786;
		if(var_533_bool != 0) {
			var_534_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13541);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13542, (int)-1, (int)14787);
			return 0;
		}
		var_540_bool = var_5_int == (int)14779;
		if(var_540_bool != 0) {
			var_541_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13534);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13535, (int)14788, (int)14780);
			return 0;
		}
		var_547_bool = var_5_int == (int)14788;
		if(var_547_bool != 0) {
			var_548_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13543);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13544, (int)14790, (int)14789);
			return 0;
		}
		var_554_bool = var_5_int == (int)14790;
		if(var_554_bool != 0) {
			var_555_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13545);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13546, (int)-1, (int)14791);
			return 0;
		}
		var_561_bool = var_5_int == (int)14813;
		if(var_561_bool != 0) {
			var_562_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13564);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13565, (int)14815, (int)14814);
			return 0;
		}
		var_568_bool = var_5_int == (int)14815;
		if(var_568_bool != 0) {
			var_569_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13566);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13567, (int)-1, (int)14816);
			return 0;
		}
		var_575_bool = var_5_int == (int)14748;
		if(var_575_bool != 0) {
			var_576_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13506);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13507, (int)14750, (int)14749);
			@@@var_0_object:AddReply((int)13513, (int)14756, (int)14755);
			return 0;
		}
		var_585_bool = var_5_int == (int)14756;
		if(var_585_bool != 0) {
			var_586_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13514);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13515, (int)14758, (int)14757);
			@@@var_0_object:AddReply((int)13517, (int)14760, (int)14759);
			return 0;
		}
		var_595_bool = var_5_int == (int)14760;
		if(var_595_bool != 0) {
			var_596_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13518);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13520, (int)14750, (int)14763);
			return 0;
		}
		var_602_bool = var_5_int == (int)14758;
		if(var_602_bool != 0) {
			var_603_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13516);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13519, (int)14750, (int)14761);
			return 0;
		}
		var_609_bool = var_5_int == (int)14750;
		if(var_609_bool != 0) {
			var_610_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13508);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13521, (int)14766, (int)14765);
			@@@var_0_object:AddReply((int)13509, (int)14752, (int)14751);
			return 0;
		}
		var_619_bool = var_5_int == (int)14752;
		if(var_619_bool != 0) {
			var_620_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13510);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13511, (int)14754, (int)14753);
			return 0;
		}
		var_626_bool = var_5_int == (int)14754;
		if(var_626_bool != 0) {
			var_627_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13512);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13547, (int)14773, (int)14792);
			return 0;
		}
		var_633_bool = var_5_int == (int)14766;
		if(var_633_bool != 0) {
			var_634_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13522);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13523, (int)14769, (int)14767);
			@@@var_0_object:AddReply((int)13524, (int)14769, (int)14768);
			return 0;
		}
		var_643_bool = var_5_int == (int)14769;
		if(var_643_bool != 0) {
			var_644_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13525);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13526, (int)14773, (int)14770);
			@@@var_0_object:AddReply((int)13527, (int)-1, (int)14772);
			return 0;
		}
		var_653_bool = var_5_int == (int)14773;
		if(var_653_bool != 0) {
			var_654_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13528);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13548, (int)14796, (int)14795);
			return 0;
		}
		var_660_bool = var_5_int == (int)14796;
		if(var_660_bool != 0) {
			var_661_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13549);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13550, (int)14800, (int)14797);
			@@@var_0_object:AddReply((int)13551, (int)14799, (int)14798);
			return 0;
		}
		var_670_bool = var_5_int == (int)14799;
		if(var_670_bool != 0) {
			var_671_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13552);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13554, (int)14800, (int)14801);
			return 0;
		}
		var_677_bool = var_5_int == (int)14800;
		if(var_677_bool != 0) {
			var_678_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13553);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13556, (int)-1, (int)14805);
			@@@var_0_object:AddReply((int)13557, (int)14807, (int)14806);
			return 0;
		}
		var_687_bool = var_5_int == (int)14807;
		if(var_687_bool != 0) {
			var_688_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13558);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13559, (int)14810, (int)14808);
			@@@var_0_object:AddReply((int)13560, (int)-1, (int)14809);
			return 0;
		}
		var_697_bool = var_5_int == (int)14810;
		if(var_697_bool != 0) {
			var_698_string = "";
			func_349(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13561);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13562, (int)-1, (int)14811);
			return 0;
		}
		var_3_string = true;
		var_703_bool = 0;
		func_1721(var_703_bool);
		if(var_703_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x16e";
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	func_2216();
	var_6_bool = 0;
	func_1564(var_6_bool);
	var_9_bool = var_6_bool == 0; //@nz
	if(var_9_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
Label_19:
	var_10_string = "";
	func_1629("Neutral");
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


func_1797()
{
	SetVariable("ood8Mat5", (int)1);
	return 0;
}


func_1803()
{
	SetVariable("ood8Mat6", (int)1);
	return 0;
}


func_1552(var_6_bool, var_7_object)
{
	var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_cvector = CVector(0,0,0); var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_bool = 0;
	@@var_7_object:GetPosition(var_12_cvector);
	GetPosition(var_13_cvector);
	var_14_cvector = var_12_cvector - var_13_cvector;
	var_16_float = GetByIndex(var_14_cvector, 0);
	var_17_float = GetByIndex(var_14_cvector, 2);
	Rotate(var_16_float, var_17_float, var_15_bool);
	var_15_bool = var_6_bool;
	return 8;
}


func_1809()
{
	SetVariable("ood8Mat7", (int)1);
	return 0;
}


func_2069(var_48_object)
{
	var_49_object = Obj(); var_50_object = Obj(); var_51_object = Obj(); var_52_object = Obj();
	GetMainOutdoorScene(var_51_object);
	var_53_bool = var_51_object == 0; //@ne
	if(var_53_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_52_object = 0;
		var_52_object = var_48_object;
		return 4;
	}
	@@var_51_object:GetMap(var_52_object);
	var_52_object = var_48_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1815()
{
	SetVariable("d8TalkToMat", (int)1);
	return 0;
}


func_1564(var_6_bool)
{
	var_7_bool = 0; var_8_bool = 0;
	IsLoaded(var_8_bool);
	var_8_bool = var_6_bool;
	return 2;
}


func_1821()
{
	SetVariable("d8q02", (int)1000);
	func_2184();
	return 0;
}


func_1569(var_26_bool, var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0;
	@@var_27_object:GetPosition(var_37_cvector);
	@@var_27_object:GetEyesHeight(var_36_float);
	var_44_float = GetByIndex(var_37_cvector, 1);
	var_44_float = var_44_float + var_36_float;
	SetByIndex(var_37_cvector, 1) = var_44_float;
	GetPosition(var_38_cvector);
	GetEyesHeight(var_36_float);
	var_45_float = GetByIndex(var_38_cvector, 1);
	var_45_float = var_45_float + var_36_float;
	SetByIndex(var_38_cvector, 1) = var_45_float;
	var_39_cvector = var_37_cvector - var_38_cvector;
	var_46_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (float)0;
	var_47_int = var_39_cvector | var_39_cvector;
	var_48_float = sqrt(var_47_int);
	var_39_cvector = var_39_cvector / var_48_float;
	var_40_cvector = -var_39_cvector;
	var_50_float = var_39_cvector * (int)70;
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
	var_52_cvector = var_40_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1654(var_51_cvector, var_52_cvector);
	var_60_float = var_51_cvector * (int)25;
	var_61_int = var_50_float + var_60_float;
	var_41_cvector = var_61_int - CVector(0.0, 10.0, 0.0);
	var_42_cvector = var_38_cvector + var_41_cvector;
	IsOverrideActive(var_43_bool);
	var_63_bool = var_43_bool;
	if(var_63_bool != 0) {
		var_26_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_42_cvector, var_40_cvector);
	var_64_float = GetByIndex(var_41_cvector, 0);
	var_65_float = GetByIndex(var_41_cvector, 2);
	Rotate(var_64_float, var_65_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_26_bool = 1;
	return 16;
}


func_1830()
{
	SetVariable("d8q02", (int)-1);
	func_2200();
	return 0;
}


func_2086(var_73_object, var_74_string, var_75_float)
{
	var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_object = Obj(); var_80_bool = 0; var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_object = Obj(); var_84_bool = 0;
	GetMainOutdoorScene(var_83_object);
	var_85_bool = var_83_object == 0; //@ne
	if(var_85_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_83_object:GetLocator(var_74_string, var_84_bool, var_81_cvector, var_82_cvector);
	var_87_bool = var_84_bool == 0; //@nz
	if(var_87_bool != 0) {
		var_89_int = "Warning: outdoor scene locator " + var_74_string;
		var_91_int = var_89_int + " doesnt exist";
		Trace(var_91_int);
	}
	@@var_83_object:GetMap(var_73_object);
	var_92_bool = var_73_object == 0; //@ne
	if(var_92_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_94_float = GetByIndex(var_81_cvector, 0);
	var_95_float = GetByIndex(var_81_cvector, 2);
	@@var_73_object:SetMapParams(var_94_float, var_95_float, var_75_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_1839(var_162_object)
{
	var_164_int = 0; var_165_int = 0;
	@@var_162_object:RemoveItemByType(var_165_int, "feromicin", (int)1);
	return 2;
}


func_49(var_0_object, var_15_int, var_16_object)
{
	var_18_object = Obj(); var_19_bool = 0; var_20_int = 0; var_21_bool = 0; var_22_object = Obj(); var_23_bool = 0; var_24_int = 0; var_25_bool = 0;
	var_0_object = var_16_object;
	var_26_bool = 0; var_27_object = Obj();
	var_16_object = var_27_object;
	func_1569(var_26_bool, var_27_object);
	var_66_bool = var_26_bool == 0; //@nz
	if(var_66_bool != 0) {
		var_15_int = -2;
		return 8;
	}
	CreateDialog(var_22_object);
	var_67_int = 0;
	func_1717(var_67_int);
	@@var_22_object:SetNPCName(var_67_int);
	var_68_string = "";
	func_1719(var_68_string);
	@@var_22_object:SetPhoto(var_68_string);
	var_69_int = 0;
	func_2119(var_69_int);
	@@var_22_object:SetPlayerName(var_69_int);
	IsOverrideActive(var_23_bool);
	var_77_bool = var_23_bool;
	if(var_77_bool != 0) {
		var_15_int = -2;
		return 8;
	}
	DoDialog(var_22_object);
	var_78_object = Obj(); var_79_object = Obj();
	var_16_object = var_78_object;
	var_22_object = var_79_object;
	TaskCall(3);
	func_112(var_80_object, var_81_object, var_82_string, var_83_bool, var_78_object, var_79_object);
	TaskReturn();
	@@var_22_object:IsDialogEnd(var_25_bool);
	
Label_94:
	var_254_bool = var_25_bool == 0; //@nz
	if(var_254_bool != 0) {
		sync();
		@@var_22_object:IsDialogEnd(var_25_bool);
		goto Label_94;
	}
	var_16_object = Obj();
	func_1625();
	StopDialog(var_22_object);
	@@var_22_object:GetReturnValue((int)-1);
	var_24_int = var_15_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1845(var_72_object)
{
	var_73_object = Obj(); var_74_string = ""; var_75_float = 0;
	func_2069(Obj());
	var_76_object = var_73_object;
	func_2086(var_73_object, "pt_map_d8q01_toyhouse", (float)2);
	var_96_object = Obj();
	func_2069(var_96_object);
	@@var_72_object:ShowMap(var_96_object);
	return 0;
}


func_1861(var_205_bool)
{
	var_207_int = 0; var_208_string = "";
	func_1664(var_207_int, "d8q01");
	var_212_bool = var_207_int == (int)1;
	if(var_212_bool != 0) {
		var_205_bool = 1;
		return 0;
	}
	var_205_bool = 0;
	return 0;
}


func_2119(var_69_int)
{
	var_70_int = 0; var_71_int = 0;
	GetVariable("player", var_71_int);
	var_74_bool = var_71_int == (int)0;
	if(var_74_bool != 0) {
		var_69_int = 200001;
		return 2;
	EMIT "GOTO 0x856";
	}
	var_76_bool = var_71_int == (int)1;
	if(var_76_bool != 0) {
		var_69_int = 200002;
		return 2;
	}
	var_69_int = 200003;
	return 2;
}


func_1873(var_213_bool)
{
	var_215_int = 0; var_216_string = "";
	func_1664(var_215_int, "ood8Mat1");
	var_218_bool = var_215_int == (int)0;
	if(var_218_bool != 0) {
		var_213_bool = 1;
		return 0;
	}
	var_213_bool = 0;
	return 0;
}


func_2136()
{
	var_15_object = Obj(); var_16_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_16_object, (int)179, (int)1, (int)15441);
	var_21_bool = 0; var_22_object = Obj(); var_23_int = 0;
	var_16_object = var_22_object;
	func_2040(var_21_bool, var_22_object, (int)175);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1625()
{
	CameraSwitchToNormal();
	return 0;
}


func_349(var_2_object, var_227_string)
{
	var_228_bool = 0;
	func_1721(var_228_bool);
	var_229_bool = var_228_bool == 0; //@nz
	if(var_229_bool != 0) {
		return 0;
	}
	var_230_bool = var_227_string == var_2_object;
	if(var_230_bool != 0) {
		return 0;
	}
	var_231_string = "";
	var_227_string = var_231_string;
	func_1629(var_231_string);
	var_2_object = var_227_string;
	return 0;
}


func_1885(var_255_bool)
{
	var_257_int = 0; var_258_string = "";
	func_1664(var_257_int, "d8q01MatBringToy");
	var_260_bool = var_257_int == (int)1;
	if(var_260_bool != 0) {
		var_255_bool = 1;
		return 0;
	}
	var_255_bool = 0;
	return 0;
}


func_1629(var_10_string)
{
	var_11_float = 0; var_12_float = 0; var_13_float = 0; var_14_float = 0;
	var_16_int = "playing " + var_10_string;
	Trace(var_16_int);
	lshGetAnimTimes(var_10_string, var_13_float, var_14_float);
	lshPlayAnimation(var_13_float, var_14_float);
	var_18_int = "start: " + var_13_float;
	Trace(var_18_int);
	var_20_int = "end: " + var_14_float;
	Trace(var_20_int);
	return 4;
}


func_2152()
{
	var_62_object = Obj(); var_63_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_63_object, (int)180, (int)1, (int)15442);
	var_68_bool = 0; var_69_object = Obj(); var_70_int = 0;
	var_63_object = var_69_object;
	func_2040(var_68_bool, var_69_object, (int)175);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1897(var_261_bool, var_262_object)
{
	var_263_bool = 0; var_264_object = Obj(); var_265_string = "";
	var_262_object = var_264_object;
	func_1669(var_263_bool, var_264_object, "toy_horse");
	if(var_263_bool != 0) {
		var_261_bool = 1;
		return 0;
	}
	var_261_bool = 0;
	return 0;
}


func_1647()
{
	var_8_bool = 0;
	func_1721(var_8_bool);
	if(var_8_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_78_object, var_79_object)
{
	var_0_object = var_79_object;
	var_1_object = var_78_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_85_bool = 0;
		var_85_bool = 0;
		var_86_bool = 0; var_87_object = Obj();
		var_87_object = var_1_object;
		func_1861(var_87_object);
		if(var_86_bool != 0) {
			var_94_bool = 0; var_95_object = Obj();
			var_95_object = var_1_object;
			func_1873(var_95_object);
			if(var_94_bool != 0) {
				var_85_bool = 1;
			}
		}
		if(var_85_bool != 0) {
			var_100_object = Obj(); var_101_object = Obj();
			var_100_object = var_1_object;
			var_101_object = var_0_object;
			func_1731();
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_1815();
			var_108_string = "";
			func_349(var_79_object, "Neutral");
			@@@var_0_object:SetMessage((int)13496);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13504, (int)14773, (int)14746);
			@@@var_0_object:AddReply((int)13505, (int)14748, (int)14747);
		} else {
				var_138_object = Obj(); var_139_object = Obj();
				var_138_object = var_1_object;
				var_139_object = var_0_object;
				func_1815();
				var_140_string = "";
				func_349(var_79_object, "Neutral");
				@@@var_0_object:SetMessage((int)12350);
				@@@var_0_object:ClearReplies();
				var_142_bool = 0;
				var_142_bool = 0;
				var_143_bool = 0;
				var_143_bool = 0;
				var_144_bool = 0; var_145_object = Obj();
				var_145_object = var_1_object;
				func_1885(var_145_object);
				if(var_144_bool != 0) {
					var_150_bool = 0; var_151_object = Obj();
					var_151_object = var_1_object;
					func_1897(var_150_bool, var_151_object);
					if(var_150_bool != 0) {
						var_143_bool = 1;
					}
				}
				if(var_143_bool != 0) {
					var_159_bool = 0; var_160_object = Obj();
					var_160_object = var_1_object;
					func_1908(var_160_object);
					if(var_159_bool != 0) {
						var_142_bool = 1;
					}
				}
				if(var_142_bool != 0) {
					@@@var_0_object:AddReply((int)13563, (int)14813, (int)14812);
				}
				var_168_bool = 0; var_169_object = Obj();
				var_169_object = var_1_object;
				func_1920(var_169_object);
				if(var_168_bool != 0) {
					@@@var_0_object:AddReply((int)12352, (int)13512, (int)13511);
				}
				var_177_bool = 0; var_178_object = Obj();
				var_178_object = var_1_object;
				func_1932(var_178_object);
				if(var_177_bool != 0) {
					@@@var_0_object:AddReply((int)12366, (int)13527, (int)13526);
				}
				var_186_bool = 0; var_187_object = Obj();
				var_187_object = var_1_object;
				func_1944(var_187_object);
				if(var_186_bool != 0) {
					@@@var_0_object:AddReply((int)12357, (int)13518, (int)13517);
				}
				var_195_bool = 0;
				var_195_bool = 0;
				var_196_bool = 0; var_197_object = Obj();
				var_197_object = var_1_object;
				func_1956(var_197_object);
				if(var_196_bool != 0) {
					var_202_bool = 0; var_203_object = Obj();
					var_203_object = var_1_object;
					func_1980(var_203_object);
					if(var_202_bool != 0) {
						var_195_bool = 1;
					}
				}
				if(var_195_bool != 0) {
					@@@var_0_object:AddReply((int)13752, (int)14997, (int)14996);
				}
				var_211_bool = 0;
				var_211_bool = 0;
				var_212_bool = 0; var_213_object = Obj();
				var_213_object = var_1_object;
				func_1968(var_213_object);
				if(var_212_bool != 0) {
					var_218_bool = 0; var_219_object = Obj();
					var_219_object = var_1_object;
					func_1992(var_219_object);
					if(var_218_bool != 0) {
						var_211_bool = 1;
					}
				}
				if(var_211_bool != 0) {
					@@@var_0_object:AddReply((int)13568, (int)14818, (int)14817);
				}
				var_227_bool = 0;
				var_227_bool = 0;
				var_228_bool = 0; var_229_object = Obj();
				var_229_object = var_1_object;
				func_2004(var_229_object);
				if(var_228_bool != 0) {
					var_234_bool = 0; var_235_object = Obj();
					var_235_object = var_1_object;
					func_2016(var_234_bool, var_235_object);
					if(var_234_bool != 0) {
						var_227_bool = 1;
					}
				}
				if(var_227_bool != 0) {
					@@@var_0_object:AddReply((int)13766, (int)15006, (int)15005);
				}
				var_242_bool = 0;
				var_242_bool = 0;
				var_243_bool = 0; var_244_object = Obj();
				var_244_object = var_1_object;
				func_2004(var_244_object);
				if(var_243_bool != 0) {
					var_245_bool = 0; var_246_object = Obj();
					var_246_object = var_1_object;
					func_2016(var_245_bool, var_246_object);
					var_247_bool = var_245_bool == 0; //@nz
					if(var_247_bool != 0) {
						var_242_bool = 1;
					}
				}
				if(var_242_bool != 0) {
					@@@var_0_object:AddReply((int)13769, (int)15009, (int)15008);
				}
				@@@var_0_object:AddReply((int)12351, (int)-1, (int)13510);
				goto Label_319;
		}
	}
Label_319:
	var_130_bool = 0;
	func_1721(var_130_bool);
	if(var_130_bool != 0) {

	Label_323:
		lshWaitForAnimEnd();
		var_131_object = var_3_object;
		if(var_131_object != 0) {
		} else {
			var_132_string = "";
			var_132_string = var_2_object;
			func_1629(var_132_string);
			goto Label_323;
	}
		PlayAnimation("all", "idle");

	Label_338:
		WaitForAnimEnd();
		var_135_object = var_3_object;
		if(var_135_object != 0) {
			goto Label_348;
		}
		PlayAnimation("all", "idle");
		goto Label_338;

	}
	goto Label_348;
	
Label_348:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x74";


func_1908(var_270_bool)
{
	var_272_int = 0; var_273_string = "";
	func_1664(var_272_int, "ood8Mat2");
	var_275_bool = var_272_int == (int)0;
	if(var_275_bool != 0) {
		var_270_bool = 1;
		return 0;
	}
	var_270_bool = 0;
	return 0;
}


func_1654(var_51_cvector, var_52_cvector)
{
	var_54_float = 0; var_55_float = 0;
	var_56_int = var_52_cvector | var_52_cvector;
	var_55_float = sqrt(var_56_int);
	var_57_float = 9.999999974752427e-07;
	var_58_bool = var_55_float < var_57_float;
	if(var_58_bool != 0) {
		var_51_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_51_cvector = var_52_cvector / var_55_float;
	return 2;
}


func_2168()
{
	var_107_object = Obj(); var_108_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_108_object, (int)181, (int)1, (int)15443);
	var_113_bool = 0; var_114_object = Obj(); var_115_int = 0;
	var_108_object = var_114_object;
	func_2040(var_113_bool, var_114_object, (int)175);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1664(var_207_int, var_208_string)
{
	var_209_int = 0; var_210_int = 0;
	GetVariable(var_208_string, var_210_int);
	var_210_int = var_207_int;
	return 2;
}


func_1920(var_279_bool)
{
	var_281_int = 0; var_282_string = "";
	func_1664(var_281_int, "ood8Mat3");
	var_284_bool = var_281_int == (int)0;
	if(var_284_bool != 0) {
		var_279_bool = 1;
		return 0;
	}
	var_279_bool = 0;
	return 0;
}


func_1669(var_263_bool, var_264_object, var_265_string)
{
	var_266_int = 0; var_267_bool = 0; var_268_int = 0; var_269_bool = 0;
	GetInvItemByName(var_268_int, var_265_string);
	@@var_264_object:HasItem(var_268_int, var_269_bool);
	var_269_bool = var_263_bool;
	return 4;
}


func_2184()
{
	var_176_object = Obj(); var_177_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_177_object, (int)128, (int)2, (int)13773);
	var_182_bool = 0; var_183_object = Obj(); var_184_int = 0;
	var_177_object = var_183_object;
	func_2040(var_182_bool, var_183_object, (int)127);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1932(var_288_bool)
{
	var_290_int = 0; var_291_string = "";
	func_1664(var_290_int, "ood8Mat4");
	var_293_bool = var_290_int == (int)0;
	if(var_293_bool != 0) {
		var_288_bool = 1;
		return 0;
	}
	var_288_bool = 0;
	return 0;
}


func_1676(var_116_bool, var_117_string, var_118_string)
{
	var_119_object = Obj(); var_120_object = Obj();
	FindActor(var_120_object, var_117_string);
	var_121_bool = var_120_object == 0; //@ne
	if(var_121_bool != 0) {
		var_116_bool = 0;
		return 2;
	}
	Trigger(var_120_object, var_118_string);
	var_116_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1688(var_59_float)
{
	var_60_float = 0; var_61_float = 0;
	GetGameTime(var_61_float);
	var_61_float = var_59_float;
	return 2;
}


func_1944(var_297_bool)
{
	var_299_int = 0; var_300_string = "";
	func_1664(var_299_int, "ood8Mat5");
	var_302_bool = var_299_int == (int)0;
	if(var_302_bool != 0) {
		var_297_bool = 1;
		return 0;
	}
	var_297_bool = 0;
	return 0;
}


func_2200()
{
	var_193_object = Obj(); var_194_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_194_object, (int)129, (int)2, (int)13774);
	var_199_bool = 0; var_200_object = Obj(); var_201_int = 0;
	var_194_object = var_200_object;
	func_2040(var_199_bool, var_200_object, (int)127);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1693(var_9_int)
{
	var_10_float = 0; var_11_float = 0;
	GetGameTime(var_11_float);
	var_13_int = 0;
	var_13_int = var_11_float / (int)24;
	var_9_int = (int)1 + var_13_int;
	return 2;
}


func_1956(var_307_bool)
{
	var_309_int = 0; var_310_string = "";
	func_1664(var_309_int, "d8q01BigVladIsVictim");
	var_312_bool = var_309_int == (int)1;
	if(var_312_bool != 0) {
		var_307_bool = 1;
		return 0;
	}
	var_307_bool = 0;
	return 0;
}


func_1702(var_7_bool, var_8_int)
{
	var_9_int = 0;
	func_1693(var_9_int);
	var_7_bool = var_9_int == var_8_int;
	return 0;
}


func_2216()
{
	var_5_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	return 0;
}


func_2220(var_6_object)
{
	var_7_bool = 0; var_8_int = 0;
	func_1702(var_7_bool, (int)8);
	if(var_7_bool != 0) {
		var_15_int = 0; var_16_object = Obj();
		var_6_object = var_16_object;
		TaskCall(2);
		func_49(var_17_object, var_15_int, var_16_object);
		TaskReturn();
		return 0;
	}
	func_1708((bool)0);
	return 0;
}


func_1708(var_256_bool)
{
	var_257_bool = 0; var_258_bool = 0;
	var_259_string = "";
	func_1629("No");
	lshWaitForAnimEnd(var_258_bool);
	var_258_bool = var_256_bool;
	return 2;
}


func_1968(var_323_bool)
{
	var_325_int = 0; var_326_string = "";
	func_1664(var_325_int, "d8q01MladVladIsVictim");
	var_328_bool = var_325_int == (int)1;
	if(var_328_bool != 0) {
		var_323_bool = 1;
		return 0;
	}
	var_323_bool = 0;
	return 0;
}


func_1717(var_67_int)
{
	var_67_int = 2870;
	return 0;
}


func_1719(var_68_string)
{
	var_68_string = "ui/NPC_Mat.png";
	return 0;
}


func_1721(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_1723()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_1980(var_313_bool)
{
	var_315_int = 0; var_316_string = "";
	func_1664(var_315_int, "ood8Mat6");
	var_318_bool = var_315_int == (int)0;
	if(var_318_bool != 0) {
		var_313_bool = 1;
		return 0;
	}
	var_313_bool = 0;
	return 0;
}


func_1729()
{
	return 0;
}


func_1731()
{
	SetVariable("ood8Mat1", (int)1);
	return 0;
}


func_1992(var_329_bool)
{
	var_331_int = 0; var_332_string = "";
	func_1664(var_331_int, "ood8Mat7");
	var_334_bool = var_331_int == (int)0;
	if(var_334_bool != 0) {
		var_329_bool = 1;
		return 0;
	}
	var_329_bool = 0;
	return 0;
}


func_1737()
{
	SetVariable("d8q01BringBadBoy", (int)1);
	func_2136();
	return 0;
}


func_1746()
{
	var_44_object = Obj(); var_45_object = Obj();
	SetVariable("d8q01MatBringToy", (int)1);
	func_2069(Obj());
	var_48_object = var_45_object;
	var_59_float = 0;
	func_1688(var_59_float);
	@@var_45_object:AddMark("d8q01MatGotoToyHouse", "pt_map_d8q01_toyhouse", (int)1, (int)15444, var_59_float);
	func_2152();
	return 2;
}
EMIT "Stack[-1] = 0";


func_2004(var_339_bool)
{
	var_341_int = 0; var_342_string = "";
	func_1664(var_341_int, "d8q02");
	var_344_bool = var_341_int == (int)1;
	if(var_344_bool != 0) {
		var_339_bool = 1;
		return 0;
	}
	var_339_bool = 0;
	return 0;
}


func_2016(var_345_bool, var_346_object)
{
	var_347_bool = 0; var_348_object = Obj(); var_349_string = "";
	var_346_object = var_348_object;
	func_1669(var_347_bool, var_348_object, "feromicin");
	if(var_347_bool != 0) {
		var_345_bool = 1;
		return 0;
	}
	var_345_bool = 0;
	return 0;
}


func_1769()
{
	SetVariable("ood8Mat2", (int)1);
	return 0;
}


func_2027(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj();
	GetDiaryRoot(var_32_object);
	var_33_bool = var_32_object == 0; //@nz
	if(var_33_bool != 0) {
		Trace("Can't retrieve diary root");
		var_30_object = 0;
		return 2;
	}
	var_32_object = var_30_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1775()
{
	func_2168();
	var_116_bool = 0; var_117_string = ""; var_118_string = "";
	func_1676(var_116_bool, "quest_d8_01", "unlock_boiny");
	return 0;
}


func_2040(var_21_bool, var_22_object, var_23_int)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_int = 0; var_27_object = Obj(); var_28_object = Obj(); var_29_int = 0;
	func_2027(Obj());
	var_30_object = var_27_object;
	@@var_27_object:Find(var_23_int, var_28_object);
	var_35_bool = var_28_object == 0; //@nz
	if(var_35_bool != 0) {
		var_37_int = "Can't find diary parent with id: " + var_23_int;
		Trace(var_37_int);
		var_21_bool = 0;
		return 6;
	}
	@@var_28_object:AddChild(var_22_object);
	SetVariable("player_diary", (int)1);
	@@var_22_object:GetCategory(var_29_int);
	SetDiarySection(var_29_int);
	var_21_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1785()
{
	SetVariable("ood8Mat3", (int)1);
	return 0;
}


func_1791()
{
	SetVariable("ood8Mat4", (int)1);
	return 0;
}


