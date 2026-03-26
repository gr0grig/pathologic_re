// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,GetInvItemProperty/3,CreateInvItem/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:What|W:Smile|W:Grin|W:Untrust|W:player|A:GetPosition|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|W:m|W:Can't find lsh animation : |A:add|W:money|W:Money|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:ui/NPC_Andrei.png|W:ui/NPC_Andrei_b.png|W:pt_map_aglaja|A:ShowMap|W:money1000 is given|W:playsound|W:givemoney|W:giveitem|W:ood3Andrei2|W:ood3Andrei3|W:ood3Andrei4|W:ood3Andrei5|W:ood3Andrei6|W:ood3Andrei7|W:ood2Andrei6|W:ood2Andrei7|W:ood2Andrei1|W:ood2Andrei2|W:ood2Andrei3|W:ood2Andrei4|W:ood2Andrei5|W:KnowAgo|W:map_chertez_state|W:map_chertez_force|W:d2q02|W:d2q02AndreiGotoPetr|W:pt_map_petr|A:AddMark|W:d2q02AndreiGotoGrif|W:pt_map_grif|W:quest_d2_02|W:put_patrol|W:tvirin is given|W:tvirin|W:KnowAndrei|W:ood6Andrei1|W:ood11Andrei1|W:d11q01|W:blueprint is given|W:d11q01_blueprint|W:ood11Andrei2|W:ood11Andrei3|W:ood3Andrei1|W:ood10Andrei1|W:d3q01|W:d2q01|W:d10q01SoldierTalk|W:d5q01|W:KnowGrif|W:d10q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:mt_andrei
// @GLOBALS: 0:object:
// @RUN_OP: 0x1560
// @RUN_TASK: 18
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xab vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x280 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x7a5 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0xbf7 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xdb2 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xfc1 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1351 vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1421 vars=int,int
// @TASK_16: vars=object params=2
// @TASK_17: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1536 vars=int,int
// @TASK_18: vars=cvector params=0
// @EVENT_7: op=0x15a9 vars=int
// @EVENT_6: op=0x15cf vars=
// @EVENT_5: op=0x15de vars=
// @EVENT_45: op=0x15eb vars=bool
// @EVENT_0: op=0x15f7 vars=object
// @PE: 0x51,0x95,0xab,0x1b0,0x26a,0x280,0x706,0x78f,0x7a5,0xb9d,0xbe1,0xbf7,0xd30,0xd9c,0xdb2,0xf29,0xfab,0xfc1,0x1301,0x133b,0x1351,0x13cc,0x140b,0x1421,0x14e6,0x1520,0x1536,0x1560,0x15a9,0x15cf,0x15eb,0x180b,0x1846,0x1856,0x1860,0x1866,0x186c,0x1872,0x1878,0x187e,0x1884,0x188a,0x1890,0x1896,0x189c,0x18a2,0x18a8,0x18ae,0x18b4,0x18ba,0x18c0,0x18ff,0x190d,0x191d,0x1928,0x192e,0x1934,0x193a,0x194c,0x1952,0x1958,0x1968,0x196e,0x1974,0x1980,0x198c,0x1998,0x19a4,0x19b0,0x19bc,0x19e1,0x1a03,0x1a0f,0x1a1b,0x1a27,0x1a33,0x1a3f,0x1a4b,0x1a57,0x1a63,0x1a6f,0x1a7b,0x1a87,0x1a93,0x1a9f,0x1aab,0x1ab7,0x1ac3,0x1acf,0x1adb,0x1ae7,0x1af3,0x1aff,0x1b0b,0x1b17,0x1b23

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_6038();
		var_51_bool = var_46_bool == (int)224;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_6440();
			var_56_string = "";
			func_149(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500187);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500190, (int)228, (int)227);
			@@@var_0_object:AddReply((int)533667, (int)35200, (int)35199);
			@@@var_0_object:AddReply((int)500188, (int)226, (int)225);
			return 0;
		}
		var_84_bool = var_46_bool == (int)226;
		if(var_84_bool != 0) {
			var_85_string = "";
			func_149(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)500189);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500192, (int)233, (int)229);
			@@@var_0_object:AddReply((int)500193, (int)-1, (int)230);
			return 0;
		}
		var_94_bool = var_46_bool == (int)233;
		if(var_94_bool != 0) {
			var_95_string = "";
			func_149(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)500196);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500203, (int)-1, (int)241);
			return 0;
		}
		var_101_bool = var_46_bool == (int)35200;
		if(var_101_bool != 0) {
			var_102_string = "";
			func_149(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)533668);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533669, (int)228, (int)35201);
			@@@var_0_object:AddReply((int)533670, (int)228, (int)35202);
			return 0;
		}
		var_111_bool = var_46_bool == (int)228;
		if(var_111_bool != 0) {
			var_112_string = "";
			func_149(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)500191);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500197, (int)236, (int)234);
			@@@var_0_object:AddReply((int)500198, (int)9260, (int)235);
			return 0;
		}
		var_121_bool = var_46_bool == (int)9260;
		if(var_121_bool != 0) {
			var_122_string = "";
			func_149(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)508437);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)508438, (int)-1, (int)9261);
			@@@var_0_object:AddReply((int)533671, (int)233, (int)35205);
			return 0;
		}
		var_131_bool = var_46_bool == (int)236;
		if(var_131_bool != 0) {
			var_132_string = "";
			func_149(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)500199);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500200, (int)233, (int)237);
			return 0;
		}
		var_3_string = true;
		var_137_bool = 0;
		func_6212(var_137_bool);
		if(var_137_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xac";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_6038();
		var_51_bool = var_47_cvector == (int)7899;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_6300();
			var_56_object = Obj(); var_57_object = Obj();
			var_56_object = var_1_object;
			var_57_object = var_0_object;
			func_6353();
			var_99_object = Obj(); var_100_object = Obj();
			var_99_object = var_1_object;
			var_100_object = var_0_object;
			func_6488(var_100_object);
		}
		var_126_bool = var_47_cvector == (int)7900;
		if(var_126_bool != 0) {
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_object;
			var_128_object = var_0_object;
			func_6300();
			var_129_object = Obj(); var_130_object = Obj();
			var_129_object = var_1_object;
			var_130_object = var_0_object;
			func_6353();
		}
		var_132_bool = var_47_cvector == (int)7913;
		if(var_132_bool != 0) {
			var_133_object = Obj(); var_134_object = Obj();
			var_133_object = var_1_object;
			var_134_object = var_0_object;
			func_6300();
		}
		var_136_bool = var_47_cvector == (int)7909;
		if(var_136_bool != 0) {
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_object;
			func_6300();
		}
		var_140_bool = var_47_cvector == (int)7918;
		if(var_140_bool != 0) {
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_object;
			func_6306();
		}
		var_146_bool = var_47_cvector == (int)7919;
		if(var_146_bool != 0) {
			var_147_object = Obj(); var_148_object = Obj();
			var_147_object = var_1_object;
			var_148_object = var_0_object;
			func_6306();
		}
		var_150_bool = var_47_cvector == (int)7942;
		if(var_150_bool != 0) {
			var_151_object = Obj(); var_152_object = Obj();
			var_151_object = var_1_object;
			var_152_object = var_0_object;
			func_6312();
			var_155_object = Obj(); var_156_object = Obj();
			var_155_object = var_1_object;
			var_156_object = var_0_object;
			func_6376();
			var_175_object = Obj(); var_176_object = Obj();
			var_175_object = var_1_object;
			var_176_object = var_0_object;
			func_6413(var_176_object);
			var_182_object = Obj(); var_183_object = Obj();
			var_182_object = var_1_object;
			var_183_object = var_0_object;
			func_6230(var_183_object);
			var_203_object = Obj(); var_204_object = Obj();
			var_203_object = var_1_object;
			var_204_object = var_0_object;
			func_6240();
		}
		var_208_bool = var_47_cvector == (int)7947;
		if(var_208_bool != 0) {
			var_209_object = Obj(); var_210_object = Obj();
			var_209_object = var_1_object;
			var_210_object = var_0_object;
			func_6312();
			var_211_object = Obj(); var_212_object = Obj();
			var_211_object = var_1_object;
			var_212_object = var_0_object;
			func_6376();
			var_213_object = Obj(); var_214_object = Obj();
			var_213_object = var_1_object;
			var_214_object = var_0_object;
			func_6413(var_214_object);
			var_215_object = Obj(); var_216_object = Obj();
			var_215_object = var_1_object;
			var_216_object = var_0_object;
			func_6230(var_216_object);
			var_217_object = Obj(); var_218_object = Obj();
			var_217_object = var_1_object;
			var_218_object = var_0_object;
			func_6240();
		}
		var_220_bool = var_47_cvector == (int)7948;
		if(var_220_bool != 0) {
			var_221_object = Obj(); var_222_object = Obj();
			var_221_object = var_1_object;
			var_222_object = var_0_object;
			func_6318();
			var_225_object = Obj(); var_226_object = Obj();
			var_225_object = var_1_object;
			var_226_object = var_0_object;
			func_6399();
		}
		var_244_bool = var_47_cvector == (int)7949;
		if(var_244_bool != 0) {
			var_245_object = Obj(); var_246_object = Obj();
			var_245_object = var_1_object;
			var_246_object = var_0_object;
			func_6318();
			var_247_object = Obj(); var_248_object = Obj();
			var_247_object = var_1_object;
			var_248_object = var_0_object;
			func_6399();
		}
		var_250_bool = var_47_cvector == (int)7950;
		if(var_250_bool != 0) {
			var_251_object = Obj(); var_252_object = Obj();
			var_251_object = var_1_object;
			var_252_object = var_0_object;
			func_6324();
		}
		var_256_bool = var_47_cvector == (int)35231;
		if(var_256_bool != 0) {
			var_257_object = Obj(); var_258_object = Obj();
			var_257_object = var_1_object;
			var_258_object = var_0_object;
			func_6288();
		}
		var_262_bool = var_47_cvector == (int)26388;
		if(var_262_bool != 0) {
			var_263_object = Obj(); var_264_object = Obj();
			var_263_object = var_1_object;
			var_264_object = var_0_object;
			func_6294();
		}
		var_268_bool = var_46_bool == (int)7570;
		if(var_268_bool != 0) {
			var_269_string = "";
			func_618(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506864);
			@@@var_0_object:ClearReplies();
			var_287_bool = 0;
			var_287_bool = 0;
			var_288_bool = 0; var_289_object = Obj();
			var_289_object = var_1_object;
			func_6695(var_289_object);
			if(var_288_bool != 0) {
				var_296_bool = 0; var_297_object = Obj();
				var_297_object = var_1_object;
				func_6767(var_297_object);
				if(var_296_bool != 0) {
					var_287_bool = 1;
				}
			}
			if(var_287_bool != 0) {
				@@@var_0_object:AddReply((int)506865, (int)7572, (int)7571);
			}
			var_305_bool = 0;
			var_305_bool = 0;
			var_306_bool = 0; var_307_object = Obj();
			var_307_object = var_1_object;
			func_6707(var_307_object);
			if(var_306_bool != 0) {
				var_312_bool = 0; var_313_object = Obj();
				var_313_object = var_1_object;
				func_6779(var_313_object);
				if(var_312_bool != 0) {
					var_305_bool = 1;
				}
			}
			if(var_305_bool != 0) {
				@@@var_0_object:AddReply((int)506868, (int)7575, (int)7574);
			}
			var_321_bool = 0;
			var_321_bool = 0;
			var_322_bool = 0; var_323_object = Obj();
			var_323_object = var_1_object;
			func_6719(var_323_object);
			if(var_322_bool != 0) {
				var_328_bool = 0; var_329_object = Obj();
				var_329_object = var_1_object;
				func_6791(var_329_object);
				if(var_328_bool != 0) {
					var_321_bool = 1;
				}
			}
			if(var_321_bool != 0) {
				@@@var_0_object:AddReply((int)506870, (int)7577, (int)7576);
			}
			var_337_bool = 0;
			var_337_bool = 0;
			var_338_bool = 0; var_339_object = Obj();
			var_339_object = var_1_object;
			func_6731(var_339_object);
			if(var_338_bool != 0) {
				var_344_bool = 0; var_345_object = Obj();
				var_345_object = var_1_object;
				func_6803(var_345_object);
				if(var_344_bool != 0) {
					var_337_bool = 1;
				}
			}
			if(var_337_bool != 0) {
				@@@var_0_object:AddReply((int)506874, (int)7581, (int)7580);
			}
			var_353_bool = 0;
			var_353_bool = 0;
			var_354_bool = 0; var_355_object = Obj();
			var_355_object = var_1_object;
			func_6743(var_355_object);
			if(var_354_bool != 0) {
				var_360_bool = 0; var_361_object = Obj();
				var_361_object = var_1_object;
				func_6755(var_361_object);
				if(var_360_bool != 0) {
					var_353_bool = 1;
				}
			}
			if(var_353_bool != 0) {
				@@@var_0_object:AddReply((int)506872, (int)7579, (int)7578);
			}
			var_369_bool = 0;
			var_369_bool = 0;
			var_370_bool = 0; var_371_object = Obj();
			var_371_object = var_1_object;
			func_6625(var_371_object);
			if(var_370_bool != 0) {
				var_386_bool = 0; var_387_object = Obj();
				var_387_object = var_1_object;
				func_6659(var_387_object);
				if(var_386_bool != 0) {
					var_369_bool = 1;
				}
			}
			if(var_369_bool != 0) {
				@@@var_0_object:AddReply((int)533692, (int)10095, (int)35231);
			}
			var_395_bool = 0;
			var_395_bool = 0;
			var_396_bool = 0; var_397_object = Obj();
			var_397_object = var_1_object;
			func_6625(var_397_object);
			if(var_396_bool != 0) {
				var_398_bool = 0; var_399_object = Obj();
				var_399_object = var_1_object;
				func_6671(var_399_object);
				if(var_398_bool != 0) {
					var_395_bool = 1;
				}
			}
			if(var_395_bool != 0) {
				@@@var_0_object:AddReply((int)525035, (int)26389, (int)26388);
			}
			@@@var_0_object:AddReply((int)507531, (int)-1, (int)8313);
			return 0;
		}
		var_411_bool = var_46_bool == (int)26389;
		if(var_411_bool != 0) {
			var_412_string = "";
			func_618(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)525036);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525037, (int)26391, (int)26390);
			@@@var_0_object:AddReply((int)525048, (int)26402, (int)26401);
			return 0;
		}
		var_421_bool = var_46_bool == (int)26402;
		if(var_421_bool != 0) {
			var_422_string = "";
			func_618(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)525049);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525050, (int)26391, (int)26403);
			return 0;
		}
		var_428_bool = var_46_bool == (int)26391;
		if(var_428_bool != 0) {
			var_429_string = "";
			func_618(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)525038);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525039, (int)26393, (int)26392);
			@@@var_0_object:AddReply((int)525042, (int)26396, (int)26395);
			return 0;
		}
		var_438_bool = var_46_bool == (int)26396;
		if(var_438_bool != 0) {
			var_439_string = "";
			func_618(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525043);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525044, (int)26398, (int)26397);
			@@@var_0_object:AddReply((int)525047, (int)-1, (int)26400);
			return 0;
		}
		var_448_bool = var_46_bool == (int)26398;
		if(var_448_bool != 0) {
			var_449_string = "";
			func_618(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525045);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525046, (int)-1, (int)26399);
			return 0;
		}
		var_455_bool = var_46_bool == (int)26393;
		if(var_455_bool != 0) {
			var_456_string = "";
			func_618(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)525040);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525041, (int)-1, (int)26394);
			return 0;
		}
		var_462_bool = var_46_bool == (int)10095;
		if(var_462_bool != 0) {
			var_463_string = "";
			func_618(var_47_cvector, "Grin");
			@@@var_0_object:SetMessage((int)509203);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509204, (int)10097, (int)10096);
			@@@var_0_object:AddReply((int)509216, (int)10111, (int)10110);
			return 0;
		}
		var_472_bool = var_46_bool == (int)10111;
		if(var_472_bool != 0) {
			var_473_string = "";
			func_618(var_47_cvector, "Grin");
			@@@var_0_object:SetMessage((int)509217);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509218, (int)10097, (int)10112);
			return 0;
		}
		var_479_bool = var_46_bool == (int)10097;
		if(var_479_bool != 0) {
			var_480_string = "";
			func_618(var_47_cvector, "Grin");
			@@@var_0_object:SetMessage((int)509205);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509206, (int)10099, (int)10098);
			@@@var_0_object:AddReply((int)509210, (int)10103, (int)10102);
			return 0;
		}
		var_489_bool = var_46_bool == (int)10103;
		if(var_489_bool != 0) {
			var_490_string = "";
			func_618(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)509211);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509212, (int)10105, (int)10104);
			@@@var_0_object:AddReply((int)509215, (int)10099, (int)10108);
			return 0;
		}
		var_499_bool = var_46_bool == (int)10105;
		if(var_499_bool != 0) {
			var_500_string = "";
			func_618(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509213);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509214, (int)10099, (int)10106);
			return 0;
		}
		var_506_bool = var_46_bool == (int)10099;
		if(var_506_bool != 0) {
			var_507_string = "";
			func_618(var_47_cvector, "Grin");
			@@@var_0_object:SetMessage((int)509207);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509208, (int)-1, (int)10100);
			@@@var_0_object:AddReply((int)509209, (int)-1, (int)10101);
			return 0;
		}
		var_516_bool = var_46_bool == (int)7579;
		if(var_516_bool != 0) {
			var_517_string = "";
			func_618(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506873);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507214, (int)-1, (int)7950);
			return 0;
		}
		var_523_bool = var_46_bool == (int)7581;
		if(var_523_bool != 0) {
			var_524_string = "";
			func_618(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506875);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507212, (int)-1, (int)7948);
			@@@var_0_object:AddReply((int)507213, (int)-1, (int)7949);
			return 0;
		}
		var_533_bool = var_46_bool == (int)7577;
		if(var_533_bool != 0) {
			var_534_string = "";
			func_618(var_47_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)506871);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507192, (int)7926, (int)7924);
			@@@var_0_object:AddReply((int)507193, (int)7926, (int)7925);
			@@@var_0_object:AddReply((int)507195, (int)7928, (int)7927);
			return 0;
		}
		var_546_bool = var_46_bool == (int)7928;
		if(var_546_bool != 0) {
			var_547_string = "";
			func_618(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507196);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507197, (int)7926, (int)7929);
			return 0;
		}
		var_553_bool = var_46_bool == (int)7926;
		if(var_553_bool != 0) {
			var_554_string = "";
			func_618(var_47_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)507194);
			@@@var_0_object:ClearReplies();
			var_556_bool = 0; var_557_object = Obj();
			var_557_object = var_1_object;
			func_6839(var_557_object);
			if(var_556_bool != 0) {
				@@@var_0_object:AddReply((int)507198, (int)7932, (int)7931);
			}
			var_565_bool = 0; var_566_object = Obj();
			var_566_object = var_1_object;
			func_6839(var_566_object);
			var_567_bool = var_565_bool == 0; //@nz
			if(var_567_bool != 0) {
				@@@var_0_object:AddReply((int)507200, (int)7935, (int)7934);
			}
			return 0;
		}
		var_572_bool = var_46_bool == (int)7935;
		if(var_572_bool != 0) {
			var_573_string = "";
			func_618(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507201);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507202, (int)7932, (int)7936);
			return 0;
		}
		var_579_bool = var_46_bool == (int)7932;
		if(var_579_bool != 0) {
			var_580_string = "";
			func_618(var_47_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)507199);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507203, (int)7939, (int)7938);
			@@@var_0_object:AddReply((int)507208, (int)7944, (int)7943);
			return 0;
		}
		var_589_bool = var_46_bool == (int)7944;
		if(var_589_bool != 0) {
			var_590_string = "";
			func_618(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507209);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507210, (int)7939, (int)7945);
			return 0;
		}
		var_596_bool = var_46_bool == (int)7939;
		if(var_596_bool != 0) {
			var_597_string = "";
			func_618(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507204);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507205, (int)7941, (int)7940);
			@@@var_0_object:AddReply((int)507211, (int)-1, (int)7947);
			return 0;
		}
		var_606_bool = var_46_bool == (int)7941;
		if(var_606_bool != 0) {
			var_607_string = "";
			func_618(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507206);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507207, (int)-1, (int)7942);
			return 0;
		}
		var_613_bool = var_46_bool == (int)7575;
		if(var_613_bool != 0) {
			var_614_object = Obj(); var_615_object = Obj();
			var_614_object = var_1_object;
			var_615_object = var_0_object;
			func_6330();
			var_618_string = "";
			func_618(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)506869);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507183, (int)7915, (int)7914);
			return 0;
		}
		var_624_bool = var_46_bool == (int)7915;
		if(var_624_bool != 0) {
			var_625_string = "";
			func_618(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)507184);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507185, (int)7917, (int)7916);
			@@@var_0_object:AddReply((int)507189, (int)7921, (int)7920);
			return 0;
		}
		var_634_bool = var_46_bool == (int)7921;
		if(var_634_bool != 0) {
			var_635_string = "";
			func_618(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507190);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507191, (int)7917, (int)7922);
			return 0;
		}
		var_641_bool = var_46_bool == (int)7917;
		if(var_641_bool != 0) {
			var_642_string = "";
			func_618(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507186);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507187, (int)-1, (int)7918);
			@@@var_0_object:AddReply((int)507188, (int)-1, (int)7919);
			return 0;
		}
		var_651_bool = var_46_bool == (int)7572;
		if(var_651_bool != 0) {
			var_652_string = "";
			func_618(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506866);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506867, (int)7894, (int)7573);
			@@@var_0_object:AddReply((int)507164, (int)7901, (int)7893);
			return 0;
		}
		var_661_bool = var_46_bool == (int)7901;
		if(var_661_bool != 0) {
			var_662_string = "";
			func_618(var_47_cvector, "Grin");
			@@@var_0_object:SetMessage((int)507172);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507173, (int)7903, (int)7902);
			return 0;
		}
		var_668_bool = var_46_bool == (int)7903;
		if(var_668_bool != 0) {
			var_669_string = "";
			func_618(var_47_cvector, "Grin");
			@@@var_0_object:SetMessage((int)507174);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507175, (int)7896, (int)7904);
			@@@var_0_object:AddReply((int)533672, (int)7896, (int)35207);
			return 0;
		}
		var_678_bool = var_46_bool == (int)7894;
		if(var_678_bool != 0) {
			var_679_object = Obj(); var_680_object = Obj();
			var_679_object = var_1_object;
			var_680_object = var_0_object;
			func_6330();
			var_681_string = "";
			func_618(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)507165);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507166, (int)7896, (int)7895);
			@@@var_0_object:AddReply((int)507176, (int)7907, (int)7906);
			return 0;
		}
		var_690_bool = var_46_bool == (int)7907;
		if(var_690_bool != 0) {
			var_691_string = "";
			func_618(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)507177);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507178, (int)7910, (int)7908);
			@@@var_0_object:AddReply((int)507179, (int)-1, (int)7909);
			return 0;
		}
		var_700_bool = var_46_bool == (int)7910;
		if(var_700_bool != 0) {
			var_701_string = "";
			func_618(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)507180);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507181, (int)7896, (int)7911);
			@@@var_0_object:AddReply((int)507182, (int)-1, (int)7913);
			return 0;
		}
		var_710_bool = var_46_bool == (int)7896;
		if(var_710_bool != 0) {
			var_711_string = "";
			func_618(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)507167);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507168, (int)7898, (int)7897);
			return 0;
		}
		var_717_bool = var_46_bool == (int)7898;
		if(var_717_bool != 0) {
			var_718_string = "";
			func_618(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507169);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507170, (int)-1, (int)7899);
			@@@var_0_object:AddReply((int)507171, (int)-1, (int)7900);
			return 0;
		}
		var_3_string = true;
		var_726_bool = 0;
		func_6212(var_726_bool);
		if(var_726_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x281";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_6038();
		var_51_bool = var_47_cvector == (int)10753;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_6504();
		}
		var_57_bool = var_47_cvector == (int)10740;
		if(var_57_bool != 0) {
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_object;
			func_6429(var_59_object);
			var_82_object = Obj(); var_83_object = Obj();
			var_82_object = var_1_object;
			var_83_object = var_0_object;
			func_6246();
		}
		var_87_bool = var_47_cvector == (int)10761;
		if(var_87_bool != 0) {
			var_88_object = Obj(); var_89_object = Obj();
			var_88_object = var_1_object;
			var_89_object = var_0_object;
			func_6252();
		}
		var_93_bool = var_47_cvector == (int)35248;
		if(var_93_bool != 0) {
			var_94_object = Obj(); var_95_object = Obj();
			var_94_object = var_1_object;
			var_95_object = var_0_object;
			func_6258();
		}
		var_99_bool = var_47_cvector == (int)35274;
		if(var_99_bool != 0) {
			var_100_object = Obj(); var_101_object = Obj();
			var_100_object = var_1_object;
			var_101_object = var_0_object;
			func_6264();
		}
		var_105_bool = var_47_cvector == (int)35290;
		if(var_105_bool != 0) {
			var_106_object = Obj(); var_107_object = Obj();
			var_106_object = var_1_object;
			var_107_object = var_0_object;
			func_6270();
		}
		var_111_bool = var_47_cvector == (int)35304;
		if(var_111_bool != 0) {
			var_112_object = Obj(); var_113_object = Obj();
			var_112_object = var_1_object;
			var_113_object = var_0_object;
			func_6276();
		}
		var_117_bool = var_47_cvector == (int)35313;
		if(var_117_bool != 0) {
			var_118_object = Obj(); var_119_object = Obj();
			var_118_object = var_1_object;
			var_119_object = var_0_object;
			func_6429(var_119_object);
		}
		var_121_bool = var_47_cvector == (int)35326;
		if(var_121_bool != 0) {
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_6282();
		}
		var_127_bool = var_46_bool == (int)10752;
		if(var_127_bool != 0) {
			var_128_string = "";
			func_1935(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509762);
			@@@var_0_object:ClearReplies();
			var_146_bool = 0;
			var_146_bool = 0;
			var_147_bool = 0; var_148_object = Obj();
			var_148_object = var_1_object;
			func_6911(var_148_object);
			if(var_147_bool != 0) {
				var_155_bool = 0; var_156_object = Obj();
				var_156_object = var_1_object;
				func_6588(var_156_object);
				if(var_155_bool != 0) {
					var_146_bool = 1;
				}
			}
			if(var_146_bool != 0) {
				@@@var_0_object:AddReply((int)509763, (int)10732, (int)10753);
			}
			var_177_bool = 0; var_178_object = Obj();
			var_178_object = var_1_object;
			func_6516(var_178_object);
			if(var_177_bool != 0) {
				@@@var_0_object:AddReply((int)509770, (int)10754, (int)10761);
			}
			var_186_bool = 0; var_187_object = Obj();
			var_187_object = var_1_object;
			func_6528(var_187_object);
			if(var_186_bool != 0) {
				@@@var_0_object:AddReply((int)533709, (int)35249, (int)35248);
			}
			var_195_bool = 0; var_196_object = Obj();
			var_196_object = var_1_object;
			func_6540(var_196_object);
			if(var_195_bool != 0) {
				@@@var_0_object:AddReply((int)533734, (int)35275, (int)35274);
			}
			var_204_bool = 0; var_205_object = Obj();
			var_205_object = var_1_object;
			func_6552(var_205_object);
			if(var_204_bool != 0) {
				@@@var_0_object:AddReply((int)533750, (int)35291, (int)35290);
			}
			var_213_bool = 0; var_214_object = Obj();
			var_214_object = var_1_object;
			func_6564(var_214_object);
			if(var_213_bool != 0) {
				@@@var_0_object:AddReply((int)533762, (int)35305, (int)35304);
			}
			var_222_bool = 0; var_223_object = Obj();
			var_223_object = var_1_object;
			func_6576(var_223_object);
			if(var_222_bool != 0) {
				@@@var_0_object:AddReply((int)533782, (int)35327, (int)35326);
			}
			@@@var_0_object:AddReply((int)533793, (int)-1, (int)35337);
			@@@var_0_object:AddReply((int)535105, (int)-1, (int)36761);
			return 0;
		}
		var_238_bool = var_46_bool == (int)35327;
		if(var_238_bool != 0) {
			var_239_string = "";
			func_1935(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)533783);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533784, (int)35329, (int)35328);
			return 0;
		}
		var_245_bool = var_46_bool == (int)35329;
		if(var_245_bool != 0) {
			var_246_string = "";
			func_1935(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)533785);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533786, (int)-1, (int)35330);
			@@@var_0_object:AddReply((int)533787, (int)35332, (int)35331);
			@@@var_0_object:AddReply((int)533790, (int)35335, (int)35334);
			return 0;
		}
		var_258_bool = var_46_bool == (int)35335;
		if(var_258_bool != 0) {
			var_259_string = "";
			func_1935(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533791);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533792, (int)-1, (int)35336);
			return 0;
		}
		var_265_bool = var_46_bool == (int)35332;
		if(var_265_bool != 0) {
			var_266_string = "";
			func_1935(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533788);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533789, (int)-1, (int)35333);
			return 0;
		}
		var_272_bool = var_46_bool == (int)35305;
		if(var_272_bool != 0) {
			var_273_string = "";
			func_1935(var_47_cvector, "Grin");
			@@@var_0_object:SetMessage((int)533763);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533764, (int)35307, (int)35306);
			@@@var_0_object:AddReply((int)533772, (int)35315, (int)35314);
			return 0;
		}
		var_282_bool = var_46_bool == (int)35315;
		if(var_282_bool != 0) {
			var_283_string = "";
			func_1935(var_47_cvector, "Grin");
			@@@var_0_object:SetMessage((int)533773);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533774, (int)35317, (int)35316);
			@@@var_0_object:AddReply((int)533778, (int)35323, (int)35322);
			return 0;
		}
		var_292_bool = var_46_bool == (int)35323;
		if(var_292_bool != 0) {
			var_293_string = "";
			func_1935(var_47_cvector, "Grin");
			@@@var_0_object:SetMessage((int)533779);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533780, (int)-1, (int)35324);
			@@@var_0_object:AddReply((int)533781, (int)-1, (int)35325);
			return 0;
		}
		var_302_bool = var_46_bool == (int)35317;
		if(var_302_bool != 0) {
			var_303_string = "";
			func_1935(var_47_cvector, "Grin");
			@@@var_0_object:SetMessage((int)533775);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533776, (int)35309, (int)35318);
			@@@var_0_object:AddReply((int)533777, (int)35309, (int)35320);
			return 0;
		}
		var_312_bool = var_46_bool == (int)35307;
		if(var_312_bool != 0) {
			var_313_string = "";
			func_1935(var_47_cvector, "Grin");
			@@@var_0_object:SetMessage((int)533765);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533766, (int)35309, (int)35308);
			return 0;
		}
		var_319_bool = var_46_bool == (int)35309;
		if(var_319_bool != 0) {
			var_320_string = "";
			func_1935(var_47_cvector, "Grin");
			@@@var_0_object:SetMessage((int)533767);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533768, (int)35311, (int)35310);
			return 0;
		}
		var_326_bool = var_46_bool == (int)35311;
		if(var_326_bool != 0) {
			var_327_string = "";
			func_1935(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533769);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533770, (int)-1, (int)35312);
			@@@var_0_object:AddReply((int)533771, (int)-1, (int)35313);
			return 0;
		}
		var_336_bool = var_46_bool == (int)35291;
		if(var_336_bool != 0) {
			var_337_string = "";
			func_1935(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)533751);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533752, (int)35293, (int)35292);
			@@@var_0_object:AddReply((int)533761, (int)35293, (int)35302);
			return 0;
		}
		var_346_bool = var_46_bool == (int)35293;
		if(var_346_bool != 0) {
			var_347_string = "";
			func_1935(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)533753);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533754, (int)35295, (int)35294);
			@@@var_0_object:AddReply((int)533760, (int)35297, (int)35300);
			return 0;
		}
		var_356_bool = var_46_bool == (int)35295;
		if(var_356_bool != 0) {
			var_357_string = "";
			func_1935(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)533755);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533756, (int)35297, (int)35296);
			return 0;
		}
		var_363_bool = var_46_bool == (int)35297;
		if(var_363_bool != 0) {
			var_364_string = "";
			func_1935(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)533757);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533758, (int)-1, (int)35298);
			@@@var_0_object:AddReply((int)533759, (int)-1, (int)35299);
			return 0;
		}
		var_373_bool = var_46_bool == (int)35275;
		if(var_373_bool != 0) {
			var_374_string = "";
			func_1935(var_47_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)533735);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533736, (int)35277, (int)35276);
			return 0;
		}
		var_380_bool = var_46_bool == (int)35277;
		if(var_380_bool != 0) {
			var_381_string = "";
			func_1935(var_47_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)533737);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533738, (int)35279, (int)35278);
			@@@var_0_object:AddReply((int)533747, (int)35288, (int)35287);
			return 0;
		}
		var_390_bool = var_46_bool == (int)35288;
		if(var_390_bool != 0) {
			var_391_string = "";
			func_1935(var_47_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)533748);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533749, (int)-1, (int)35289);
			return 0;
		}
		var_397_bool = var_46_bool == (int)35279;
		if(var_397_bool != 0) {
			var_398_string = "";
			func_1935(var_47_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)533739);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533740, (int)35281, (int)35280);
			@@@var_0_object:AddReply((int)533746, (int)-1, (int)35286);
			return 0;
		}
		var_407_bool = var_46_bool == (int)35281;
		if(var_407_bool != 0) {
			var_408_string = "";
			func_1935(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)533741);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533742, (int)35283, (int)35282);
			@@@var_0_object:AddReply((int)533745, (int)-1, (int)35285);
			return 0;
		}
		var_417_bool = var_46_bool == (int)35283;
		if(var_417_bool != 0) {
			var_418_string = "";
			func_1935(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)533743);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533744, (int)-1, (int)35284);
			@@@var_0_object:AddReply((int)535141, (int)-1, (int)36802);
			return 0;
		}
		var_427_bool = var_46_bool == (int)35249;
		if(var_427_bool != 0) {
			var_428_string = "";
			func_1935(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)533710);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533711, (int)35251, (int)35250);
			@@@var_0_object:AddReply((int)533717, (int)35257, (int)35256);
			return 0;
		}
		var_437_bool = var_46_bool == (int)35257;
		if(var_437_bool != 0) {
			var_438_string = "";
			func_1935(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)533718);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533719, (int)35259, (int)35258);
			return 0;
		}
		var_444_bool = var_46_bool == (int)35259;
		if(var_444_bool != 0) {
			var_445_string = "";
			func_1935(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)533720);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533721, (int)35261, (int)35260);
			@@@var_0_object:AddReply((int)535106, (int)-1, (int)36762);
			return 0;
		}
		var_454_bool = var_46_bool == (int)35261;
		if(var_454_bool != 0) {
			var_455_string = "";
			func_1935(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)533722);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533723, (int)-1, (int)35262);
			return 0;
		}
		var_461_bool = var_46_bool == (int)35251;
		if(var_461_bool != 0) {
			var_462_string = "";
			func_1935(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)533712);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533713, (int)-1, (int)35252);
			@@@var_0_object:AddReply((int)533714, (int)35254, (int)35253);
			return 0;
		}
		var_471_bool = var_46_bool == (int)35254;
		if(var_471_bool != 0) {
			var_472_string = "";
			func_1935(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)533715);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533716, (int)-1, (int)35255);
			return 0;
		}
		var_478_bool = var_46_bool == (int)10754;
		if(var_478_bool != 0) {
			var_479_string = "";
			func_1935(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509764);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509765, (int)10756, (int)10755);
			@@@var_0_object:AddReply((int)509769, (int)10756, (int)10759);
			return 0;
		}
		var_488_bool = var_46_bool == (int)10756;
		if(var_488_bool != 0) {
			var_489_string = "";
			func_1935(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509766);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509767, (int)-1, (int)10757);
			@@@var_0_object:AddReply((int)509768, (int)-1, (int)10758);
			return 0;
		}
		var_498_bool = var_46_bool == (int)10732;
		if(var_498_bool != 0) {
			var_499_string = "";
			func_1935(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)509746);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509747, (int)10734, (int)10733);
			@@@var_0_object:AddReply((int)509757, (int)10734, (int)10744);
			@@@var_0_object:AddReply((int)509758, (int)10747, (int)10746);
			return 0;
		}
		var_511_bool = var_46_bool == (int)10747;
		if(var_511_bool != 0) {
			var_512_string = "";
			func_1935(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)509759);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509760, (int)10734, (int)10748);
			@@@var_0_object:AddReply((int)509761, (int)10734, (int)10750);
			return 0;
		}
		var_521_bool = var_46_bool == (int)10734;
		if(var_521_bool != 0) {
			var_522_string = "";
			func_1935(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)509748);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509749, (int)10736, (int)10735);
			@@@var_0_object:AddReply((int)509756, (int)-1, (int)10743);
			return 0;
		}
		var_531_bool = var_46_bool == (int)10736;
		if(var_531_bool != 0) {
			var_532_string = "";
			func_1935(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)509750);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509751, (int)10738, (int)10737);
			@@@var_0_object:AddReply((int)509755, (int)10738, (int)10741);
			return 0;
		}
		var_541_bool = var_46_bool == (int)10738;
		if(var_541_bool != 0) {
			var_542_string = "";
			func_1935(var_47_cvector, "Grin");
			@@@var_0_object:SetMessage((int)509752);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509753, (int)-1, (int)10739);
			@@@var_0_object:AddReply((int)509754, (int)-1, (int)10740);
			return 0;
		}
		var_3_string = true;
		var_550_bool = 0;
		func_6212(var_550_bool);
		if(var_550_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x7a6";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_6038();
		var_51_bool = var_47_cvector == (int)14987;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_6446();
		}
		var_57_bool = var_46_bool == (int)14986;
		if(var_57_bool != 0) {
			var_58_string = "";
			func_3041(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513720);
			@@@var_0_object:ClearReplies();
			var_76_bool = 0; var_77_object = Obj();
			var_77_object = var_1_object;
			func_6827(var_77_object);
			if(var_76_bool != 0) {
				@@@var_0_object:AddReply((int)513721, (int)13787, (int)14987);
			}
			@@@var_0_object:AddReply((int)513722, (int)-1, (int)14988);
			@@@var_0_object:AddReply((int)536132, (int)-1, (int)37891);
			return 0;
		}
		var_94_bool = var_46_bool == (int)13787;
		if(var_94_bool != 0) {
			var_95_string = "";
			func_3041(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512613);
			@@@var_0_object:ClearReplies();
			var_97_bool = 0; var_98_object = Obj();
			var_98_object = var_1_object;
			func_6815(var_98_object);
			if(var_97_bool != 0) {
				@@@var_0_object:AddReply((int)512614, (int)13789, (int)13788);
			}
			@@@var_0_object:AddReply((int)512632, (int)13812, (int)13811);
			var_109_bool = 0; var_110_object = Obj();
			var_110_object = var_1_object;
			func_6815(var_110_object);
			var_111_bool = var_109_bool == 0; //@nz
			if(var_111_bool != 0) {
				@@@var_0_object:AddReply((int)512631, (int)13789, (int)13809);
			}
			return 0;
		}
		var_116_bool = var_46_bool == (int)13812;
		if(var_116_bool != 0) {
			var_117_string = "";
			func_3041(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512633);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512634, (int)13791, (int)13813);
			return 0;
		}
		var_123_bool = var_46_bool == (int)13789;
		if(var_123_bool != 0) {
			var_124_string = "";
			func_3041(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512615);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512616, (int)13791, (int)13790);
			@@@var_0_object:AddReply((int)512623, (int)13800, (int)13799);
			return 0;
		}
		var_133_bool = var_46_bool == (int)13800;
		if(var_133_bool != 0) {
			var_134_string = "";
			func_3041(var_47_cvector, "Grin");
			@@@var_0_object:SetMessage((int)512624);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512625, (int)13802, (int)13801);
			@@@var_0_object:AddReply((int)512629, (int)13802, (int)13805);
			return 0;
		}
		var_143_bool = var_46_bool == (int)13802;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_3041(var_47_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)512626);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512627, (int)-1, (int)13803);
			@@@var_0_object:AddReply((int)512628, (int)-1, (int)13804);
			return 0;
		}
		var_153_bool = var_46_bool == (int)13791;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_3041(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)512617);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512618, (int)13793, (int)13792);
			@@@var_0_object:AddReply((int)512622, (int)13802, (int)13797);
			return 0;
		}
		var_163_bool = var_46_bool == (int)13793;
		if(var_163_bool != 0) {
			var_164_string = "";
			func_3041(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)512619);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512621, (int)13802, (int)13795);
			@@@var_0_object:AddReply((int)512620, (int)-1, (int)13794);
			return 0;
		}
		var_3_string = true;
		var_172_bool = 0;
		func_6212(var_172_bool);
		if(var_172_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xbf8";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_6038();
		var_51_bool = var_46_bool == (int)14165;
		if(var_51_bool != 0) {
			var_52_bool = 0;
			var_52_bool = 0;
			var_53_bool = 0;
			var_53_bool = 0;
			var_54_bool = 0; var_55_object = Obj();
			var_55_object = var_1_object;
			func_6923(var_55_object);
			var_62_bool = var_54_bool == 0; //@nz
			if(var_62_bool != 0) {
				var_63_bool = 0; var_64_object = Obj();
				var_64_object = var_1_object;
				func_6935(var_64_object);
				var_69_bool = var_63_bool == 0; //@nz
				if(var_69_bool != 0) {
					var_53_bool = 1;
				}
			}
			if(var_53_bool != 0) {
				var_70_bool = 0; var_71_object = Obj();
				var_71_object = var_1_object;
				func_6947(var_71_object);
				if(var_70_bool != 0) {
					var_52_bool = 1;
				}
			}
			if(var_52_bool != 0) {
				var_76_object = Obj(); var_77_object = Obj();
				var_76_object = var_1_object;
				var_77_object = var_0_object;
				func_6510();
				var_80_string = "";
				func_3484(var_47_cvector, "Smile");
				@@@var_0_object:SetMessage((int)512960);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)512961, (int)41443, (int)14166);
				@@@var_0_object:AddReply((int)539510, (int)41440, (int)41439);
				return 0;
			}
			var_104_string = "";
			func_3484(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512966);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512967, (int)-1, (int)14172);
			@@@var_0_object:AddReply((int)539509, (int)-1, (int)41438);
			return 0;
		}
		var_113_bool = var_46_bool == (int)41440;
		if(var_113_bool != 0) {
			var_114_string = "";
			func_3484(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539511);
			@@@var_0_object:ClearReplies();
			var_116_bool = 0; var_117_object = Obj();
			var_117_object = var_1_object;
			func_6683(var_117_object);
			if(var_116_bool != 0) {
				@@@var_0_object:AddReply((int)539512, (int)41828, (int)41441);
			}
			@@@var_0_object:AddReply((int)539513, (int)14169, (int)41442);
			return 0;
		}
		var_129_bool = var_46_bool == (int)41828;
		if(var_129_bool != 0) {
			var_130_string = "";
			func_3484(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539874);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539875, (int)41446, (int)41829);
			return 0;
		}
		var_136_bool = var_46_bool == (int)41443;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_3484(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)539514);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512963, (int)14169, (int)14168);
			@@@var_0_object:AddReply((int)539527, (int)41444, (int)41458);
			return 0;
		}
		var_146_bool = var_46_bool == (int)14169;
		if(var_146_bool != 0) {
			var_147_string = "";
			func_3484(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)512964);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512965, (int)41444, (int)14170);
			return 0;
		}
		var_153_bool = var_46_bool == (int)41444;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_3484(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)539515);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539516, (int)41446, (int)41445);
			@@@var_0_object:AddReply((int)539876, (int)-1, (int)41830);
			@@@var_0_object:AddReply((int)539877, (int)-1, (int)41831);
			return 0;
		}
		var_166_bool = var_46_bool == (int)41446;
		if(var_166_bool != 0) {
			var_167_string = "";
			func_3484(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)539517);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539518, (int)41449, (int)41447);
			@@@var_0_object:AddReply((int)539519, (int)41452, (int)41448);
			return 0;
		}
		var_176_bool = var_46_bool == (int)41449;
		if(var_176_bool != 0) {
			var_177_string = "";
			func_3484(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)539520);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539521, (int)41452, (int)41450);
			@@@var_0_object:AddReply((int)539522, (int)41452, (int)41451);
			return 0;
		}
		var_186_bool = var_46_bool == (int)41452;
		if(var_186_bool != 0) {
			var_187_string = "";
			func_3484(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)539523);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539524, (int)-1, (int)41454);
			@@@var_0_object:AddReply((int)539872, (int)41827, (int)41826);
			return 0;
		}
		var_196_bool = var_46_bool == (int)41827;
		if(var_196_bool != 0) {
			var_197_string = "";
			func_3484(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539873);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539525, (int)-1, (int)41455);
			return 0;
		}
		var_3_string = true;
		var_202_bool = 0;
		func_6212(var_202_bool);
		if(var_202_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xdb3";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_6038();
		var_51_bool = var_47_cvector == (int)15743;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_6458(var_53_object);
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_6336();
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_6246();
			var_117_object = Obj(); var_118_object = Obj();
			var_117_object = var_1_object;
			var_118_object = var_0_object;
			func_6214(var_118_object);
		}
		var_150_bool = var_47_cvector == (int)41888;
		if(var_150_bool != 0) {
			var_151_object = Obj(); var_152_object = Obj();
			var_151_object = var_1_object;
			var_152_object = var_0_object;
			func_6458(var_152_object);
			var_153_object = Obj(); var_154_object = Obj();
			var_153_object = var_1_object;
			var_154_object = var_0_object;
			func_6336();
			var_155_object = Obj(); var_156_object = Obj();
			var_155_object = var_1_object;
			var_156_object = var_0_object;
			func_6246();
			var_157_object = Obj(); var_158_object = Obj();
			var_157_object = var_1_object;
			var_158_object = var_0_object;
			func_6214(var_158_object);
		}
		var_160_bool = var_47_cvector == (int)41885;
		if(var_160_bool != 0) {
			var_161_object = Obj(); var_162_object = Obj();
			var_161_object = var_1_object;
			var_162_object = var_0_object;
			func_6458(var_162_object);
		}
		var_164_bool = var_47_cvector == (int)15478;
		if(var_164_bool != 0) {
			var_165_object = Obj(); var_166_object = Obj();
			var_165_object = var_1_object;
			var_166_object = var_0_object;
			func_6476();
		}
		var_170_bool = var_47_cvector == (int)41582;
		if(var_170_bool != 0) {
			var_171_object = Obj(); var_172_object = Obj();
			var_171_object = var_1_object;
			var_172_object = var_0_object;
			func_6482();
		}
		var_176_bool = var_46_bool == (int)15459;
		if(var_176_bool != 0) {
			var_177_bool = 0;
			var_177_bool = 0;
			var_178_bool = 0; var_179_object = Obj();
			var_179_object = var_1_object;
			func_6851(var_179_object);
			if(var_178_bool != 0) {
				var_184_bool = 0; var_185_object = Obj();
				var_185_object = var_1_object;
				func_6863(var_185_object);
				if(var_184_bool != 0) {
					var_177_bool = 1;
				}
			}
			if(var_177_bool != 0) {
				var_190_object = Obj(); var_191_object = Obj();
				var_190_object = var_1_object;
				var_191_object = var_0_object;
				func_6452();
				var_194_string = "";
				func_4011(var_47_cvector, "What");
				@@@var_0_object:SetMessage((int)514241);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)539735, (int)41875, (int)41699);
				@@@var_0_object:AddReply((int)514242, (int)15461, (int)15460);
				return 0;
			}
			var_218_string = "";
			func_4011(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514258);
			@@@var_0_object:ClearReplies();
			var_220_bool = 0;
			var_220_bool = 0;
			var_221_bool = 0; var_222_object = Obj();
			var_222_object = var_1_object;
			func_6875(var_222_object);
			if(var_221_bool != 0) {
				var_227_bool = 0; var_228_object = Obj();
				var_228_object = var_1_object;
				func_6887(var_228_object);
				if(var_227_bool != 0) {
					var_220_bool = 1;
				}
			}
			if(var_220_bool != 0) {
				@@@var_0_object:AddReply((int)514259, (int)15479, (int)15478);
			}
			var_236_bool = 0;
			var_236_bool = 0;
			var_237_bool = 0; var_238_object = Obj();
			var_238_object = var_1_object;
			func_6899(var_238_object);
			if(var_237_bool != 0) {
				var_243_bool = 0; var_244_object = Obj();
				var_244_object = var_1_object;
				func_6875(var_244_object);
				if(var_243_bool != 0) {
					var_236_bool = 1;
				}
			}
			if(var_236_bool != 0) {
				@@@var_0_object:AddReply((int)539636, (int)41583, (int)41582);
			}
			@@@var_0_object:AddReply((int)514278, (int)-1, (int)15498);
			return 0;
		}
		var_252_bool = var_46_bool == (int)41583;
		if(var_252_bool != 0) {
			var_253_string = "";
			func_4011(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)539637);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539638, (int)41585, (int)41584);
			@@@var_0_object:AddReply((int)541851, (int)41589, (int)44072);
			return 0;
		}
		var_262_bool = var_46_bool == (int)41585;
		if(var_262_bool != 0) {
			var_263_string = "";
			func_4011(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)539639);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539640, (int)41587, (int)41586);
			@@@var_0_object:AddReply((int)541852, (int)41589, (int)44074);
			return 0;
		}
		var_272_bool = var_46_bool == (int)41587;
		if(var_272_bool != 0) {
			var_273_string = "";
			func_4011(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)539641);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539642, (int)41589, (int)41588);
			@@@var_0_object:AddReply((int)541853, (int)41593, (int)44076);
			return 0;
		}
		var_282_bool = var_46_bool == (int)41589;
		if(var_282_bool != 0) {
			var_283_string = "";
			func_4011(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)539643);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539644, (int)41591, (int)41590);
			return 0;
		}
		var_289_bool = var_46_bool == (int)41591;
		if(var_289_bool != 0) {
			var_290_string = "";
			func_4011(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539645);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539646, (int)41593, (int)41592);
			@@@var_0_object:AddReply((int)542037, (int)44316, (int)44315);
			return 0;
		}
		var_299_bool = var_46_bool == (int)44316;
		if(var_299_bool != 0) {
			var_300_string = "";
			func_4011(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542038);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542039, (int)41593, (int)44317);
			return 0;
		}
		var_306_bool = var_46_bool == (int)41593;
		if(var_306_bool != 0) {
			var_307_string = "";
			func_4011(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)539647);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539648, (int)41595, (int)41594);
			return 0;
		}
		var_313_bool = var_46_bool == (int)41595;
		if(var_313_bool != 0) {
			var_314_string = "";
			func_4011(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)539649);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539650, (int)41597, (int)41596);
			return 0;
		}
		var_320_bool = var_46_bool == (int)41597;
		if(var_320_bool != 0) {
			var_321_string = "";
			func_4011(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)539651);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539652, (int)-1, (int)41598);
			@@@var_0_object:AddReply((int)539653, (int)-1, (int)41599);
			@@@var_0_object:AddReply((int)539654, (int)-1, (int)41600);
			return 0;
		}
		var_333_bool = var_46_bool == (int)15479;
		if(var_333_bool != 0) {
			var_334_string = "";
			func_4011(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)514260);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514261, (int)15481, (int)15480);
			return 0;
		}
		var_340_bool = var_46_bool == (int)15481;
		if(var_340_bool != 0) {
			var_341_string = "";
			func_4011(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)514262);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514263, (int)15483, (int)15482);
			@@@var_0_object:AddReply((int)514268, (int)15488, (int)15487);
			return 0;
		}
		var_350_bool = var_46_bool == (int)15488;
		if(var_350_bool != 0) {
			var_351_string = "";
			func_4011(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)514269);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514270, (int)-1, (int)15489);
			return 0;
		}
		var_357_bool = var_46_bool == (int)15483;
		if(var_357_bool != 0) {
			var_358_string = "";
			func_4011(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)514264);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514265, (int)15485, (int)15484);
			return 0;
		}
		var_364_bool = var_46_bool == (int)15485;
		if(var_364_bool != 0) {
			var_365_string = "";
			func_4011(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)514266);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514267, (int)-1, (int)15486);
			@@@var_0_object:AddReply((int)543001, (int)-1, (int)45450);
			return 0;
		}
		var_374_bool = var_46_bool == (int)41875;
		if(var_374_bool != 0) {
			var_375_string = "";
			func_4011(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)539914);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539915, (int)15467, (int)41876);
			@@@var_0_object:AddReply((int)539916, (int)15461, (int)41877);
			return 0;
		}
		var_384_bool = var_46_bool == (int)15461;
		if(var_384_bool != 0) {
			var_385_string = "";
			func_4011(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)514243);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539908, (int)41870, (int)41869);
			return 0;
		}
		var_391_bool = var_46_bool == (int)41870;
		if(var_391_bool != 0) {
			var_392_string = "";
			func_4011(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539909);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539910, (int)41872, (int)41871);
			return 0;
		}
		var_398_bool = var_46_bool == (int)41872;
		if(var_398_bool != 0) {
			var_399_string = "";
			func_4011(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539911);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539912, (int)41874, (int)41873);
			return 0;
		}
		var_405_bool = var_46_bool == (int)41874;
		if(var_405_bool != 0) {
			var_406_string = "";
			func_4011(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539913);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539917, (int)41880, (int)41879);
			return 0;
		}
		var_412_bool = var_46_bool == (int)41880;
		if(var_412_bool != 0) {
			var_413_string = "";
			func_4011(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)539918);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539919, (int)41882, (int)41881);
			return 0;
		}
		var_419_bool = var_46_bool == (int)41882;
		if(var_419_bool != 0) {
			var_420_string = "";
			func_4011(var_47_cvector, "Smile");
			@@@var_0_object:SetMessage((int)539920);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539921, (int)41884, (int)41883);
			return 0;
		}
		var_426_bool = var_46_bool == (int)41884;
		if(var_426_bool != 0) {
			var_427_string = "";
			func_4011(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)539922);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539923, (int)-1, (int)41885);
			return 0;
		}
		var_433_bool = var_46_bool == (int)15467;
		if(var_433_bool != 0) {
			var_434_string = "";
			func_4011(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)514249);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514250, (int)15469, (int)15468);
			@@@var_0_object:AddReply((int)514508, (int)15742, (int)15746);
			return 0;
		}
		var_443_bool = var_46_bool == (int)15469;
		if(var_443_bool != 0) {
			var_444_string = "";
			func_4011(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)514251);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514252, (int)15471, (int)15470);
			@@@var_0_object:AddReply((int)514506, (int)15748, (int)15744);
			return 0;
		}
		var_453_bool = var_46_bool == (int)15748;
		if(var_453_bool != 0) {
			var_454_string = "";
			func_4011(var_47_cvector, "Grin");
			@@@var_0_object:SetMessage((int)514509);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514511, (int)15751, (int)15750);
			@@@var_0_object:AddReply((int)514510, (int)-1, (int)15749);
			return 0;
		}
		var_463_bool = var_46_bool == (int)15751;
		if(var_463_bool != 0) {
			var_464_string = "";
			func_4011(var_47_cvector, "Grin");
			@@@var_0_object:SetMessage((int)514512);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514513, (int)-1, (int)15752);
			@@@var_0_object:AddReply((int)539924, (int)15742, (int)41886);
			return 0;
		}
		var_473_bool = var_46_bool == (int)15471;
		if(var_473_bool != 0) {
			var_474_string = "";
			func_4011(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)514253);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514254, (int)15742, (int)15472);
			return 0;
		}
		var_480_bool = var_46_bool == (int)15742;
		if(var_480_bool != 0) {
			var_481_string = "";
			func_4011(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)514504);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514505, (int)-1, (int)15743);
			@@@var_0_object:AddReply((int)539925, (int)-1, (int)41888);
			return 0;
		}
		var_3_string = true;
		var_489_bool = 0;
		func_6212(var_489_bool);
		if(var_489_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xfc2";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_6038();
		var_51_bool = var_46_bool == (int)34233;
		if(var_51_bool != 0) {
			var_52_string = "";
			func_4923(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532762);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532763, (int)-1, (int)34234);
			@@@var_0_object:AddReply((int)533665, (int)-1, (int)35197);
			return 0;
		}
		var_3_string = true;
		var_76_bool = 0;
		func_6212(var_76_bool);
		if(var_76_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1352";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_6038();
		var_51_bool = var_46_bool == (int)37354;
		if(var_51_bool != 0) {
			var_52_string = "";
			func_5131(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)535668);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535669, (int)42112, (int)37355);
			@@@var_0_object:AddReply((int)540002, (int)-1, (int)41973);
			@@@var_0_object:AddReply((int)540201, (int)-1, (int)42179);
			return 0;
		}
		var_80_bool = var_46_bool == (int)42112;
		if(var_80_bool != 0) {
			var_81_string = "";
			func_5131(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)540140);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540203, (int)42182, (int)42181);
			@@@var_0_object:AddReply((int)540211, (int)42191, (int)42189);
			return 0;
		}
		var_90_bool = var_46_bool == (int)42182;
		if(var_90_bool != 0) {
			var_91_string = "";
			func_5131(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)540204);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540210, (int)42191, (int)42188);
			@@@var_0_object:AddReply((int)540212, (int)42191, (int)42190);
			return 0;
		}
		var_100_bool = var_46_bool == (int)42191;
		if(var_100_bool != 0) {
			var_101_string = "";
			func_5131(var_47_cvector, "What");
			@@@var_0_object:SetMessage((int)540213);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540214, (int)-1, (int)42194);
			@@@var_0_object:AddReply((int)540215, (int)-1, (int)42195);
			return 0;
		}
		var_3_string = true;
		var_109_bool = 0;
		func_6212(var_109_bool);
		if(var_109_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1422";
	
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_cvector)
{
	if((int)1 != 0) {
		func_6038();
		var_51_bool = var_46_int == (int)42551;
		if(var_51_bool != 0) {
			var_52_string = "";
			func_5408(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540542);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540543, (int)-1, (int)42552);
			@@@var_0_object:AddReply((int)540796, (int)-1, (int)42845);
			return 0;
		}
		var_3_string = true;
		var_76_bool = 0;
		func_6212(var_76_bool);
		if(var_76_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1537";
	
}


task_18_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_int)
{
	var_48_bool = var_46_int == (int)10;
	if(var_48_bool != 0) {
		func_5541();
		var_50_bool = 0;
		var_50_bool = 0;
		var_51_bool = 0;
		func_5762(var_51_bool);
		if(var_51_bool != 0) {
			var_54_bool = 0;
			func_5510(var_54_bool);
			if(var_54_bool != 0) {
				var_50_bool = 1;
			}
		}
		if(var_50_bool != 0) {
			var_71_bool = 0;
			func_5490(var_71_bool);
			if(var_71_bool != 0) {
				var_90_bool = 0; var_91_object = Obj();
				func_6045(Obj());
				var_92_object = var_91_object;
				func_5912(var_90_bool, var_91_object);
			}
		} else {
			func_5505(var_46_int);
			func_5532();
		}
	}
	return 0;
	
}


task_18_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	func_5723();
	func_5541();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_18_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	StopGroup0();
	func_5541();
	var_47_string = "";
	func_5992("Neutral");
	func_5532();
	return 0;
}


task_18_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_bool)
{
	var_47_bool = var_46_bool;
	if(var_47_bool != 0) {
		func_5532();
	} else {
		var_53_string = "";
		func_5992("Neutral");
	}
	return 0;
	
}


task_18_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_object)
{
	var_47_bool = 0; var_48_bool = 0;
	IsOverrideActive(var_48_bool);
	var_49_bool = var_48_bool == 0; //@nz
	if(var_49_bool != 0) {
		EventDisable(0);
		func_5723();
		var_50_bool = 0; var_51_object = Obj();
		var_46_object = var_51_object;
		func_5753(var_50_bool, var_51_object);
		EventEnable(0);
		var_64_object = Obj();
		var_46_object = var_64_object;
		func_7119(var_64_object);
		var_1072_string = "";
		func_5992("Neutral");
		func_5541();
		func_5532();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	func_5476(var_45_cvector);
	return 0;
}


func_0(var_0_object, var_69_int, var_70_object)
{
	var_72_object = Obj(); var_73_bool = 0; var_74_int = 0; var_75_bool = 0; var_76_object = Obj(); var_77_bool = 0; var_78_int = 0; var_79_bool = 0;
	var_0_object = var_70_object;
	var_80_bool = 0; var_81_object = Obj(); var_82_float = 0;
	var_70_object = var_81_object;
	func_5767(var_80_bool, var_81_object, (float)70.0);
	var_127_bool = var_80_bool == 0; //@nz
	if(var_127_bool != 0) {
		var_69_int = -2;
		return 8;
	}
	CreateDialog(var_76_object);
	var_128_int = 0;
	func_6206(var_128_int);
	@@var_76_object:SetNPCName(var_128_int);
	var_129_int = 0;
	func_6204(var_129_int);
	@@var_76_object:SetNPCDescription(var_129_int);
	var_130_string = "";
	func_6208(var_130_string);
	@@var_76_object:SetPhoto(var_130_string);
	var_131_string = "";
	func_6210(var_131_string);
	@@var_76_object:SetPhoto2(var_131_string);
	var_132_int = 0;
	func_7102(var_132_int);
	@@var_76_object:SetPlayerName(var_132_int);
	IsOverrideActive(var_77_bool);
	var_140_bool = var_77_bool;
	if(var_140_bool != 0) {
		var_69_int = -2;
		return 8;
	}
	DoDialog(var_76_object);
	var_141_bool = 0; var_142_object = Obj();
	func_6045(Obj());
	var_143_object = var_142_object;
	func_5854(var_141_bool, var_142_object);
	var_236_object = Obj(); var_237_object = Obj();
	var_70_object = var_236_object;
	var_76_object = var_237_object;
	TaskCall(1);
	func_81(var_238_object, var_239_object, var_240_string, var_241_bool, var_236_object, var_237_object);
	TaskReturn();
	@@var_76_object:IsDialogEnd(var_79_bool);
	
Label_63:
	var_292_bool = var_79_bool == 0; //@nz
	if(var_292_bool != 0) {
		sync();
		@@var_76_object:IsDialogEnd(var_79_bool);
		goto Label_63;
	}
	var_70_object = Obj();
	func_5836();
	StopDialog(var_76_object);
	@@var_76_object:GetReturnValue((int)-1);
	var_78_int = var_69_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6146(var_196_int)
{
	var_197_float = 0; var_198_float = 0;
	GetGameTime(var_198_float);
	var_200_int = 0;
	var_200_int = var_198_float / (int)24;
	var_196_int = (int)1 + var_200_int;
	return 2;
}


func_6659(var_513_bool)
{
	var_515_int = 0; var_516_string = "";
	func_6061(var_515_int, "ood2Andrei6");
	var_518_bool = var_515_int == (int)0;
	if(var_518_bool != 0) {
		var_513_bool = 1;
		return 0;
	}
	var_513_bool = 0;
	return 0;
}


func_5131(var_2_object, var_988_string)
{
	var_989_bool = 0;
	func_6212(var_989_bool);
	var_990_bool = var_989_bool == 0; //@nz
	if(var_990_bool != 0) {
		return 0;
	}
	var_991_bool = var_988_string == var_2_object;
	if(var_991_bool != 0) {
		return 0;
	}
	var_992_string = ""; var_993_bool = 0;
	var_988_string = var_992_string;
	var_995_bool = var_988_string == "";
	if(var_995_bool != 0) {
		var_993_bool = 0;
	} else {
		var_993_bool = 1;
	}
	func_6008(var_992_string, var_993_bool);
	var_2_object = var_988_string;
	return 0;
	
}


func_6155(var_371_bool, var_372_int)
{
	var_373_int = 0;
	func_6146(var_373_int);
	var_371_bool = var_373_int == var_372_int;
	return 0;
}


func_6671(var_525_bool)
{
	var_527_int = 0; var_528_string = "";
	func_6061(var_527_int, "ood2Andrei7");
	var_530_bool = var_527_int == (int)0;
	if(var_530_bool != 0) {
		var_525_bool = 1;
		return 0;
	}
	var_525_bool = 0;
	return 0;
}


func_6161(var_303_bool, var_304_int)
{
	var_305_float = 0; var_306_int = 0; var_307_int = 0; var_308_float = 0; var_309_int = 0; var_310_int = 0;
	GetGameTime(var_308_float);
	var_312_int = 0;
	var_312_int = var_308_float / (int)24;
	var_309_int = (int)1 + var_312_int;
	var_314_bool = var_309_int != var_304_int;
	if(var_314_bool != 0) {
		var_303_bool = 0;
		return 6;
	}
	var_315_int = 0;
	var_308_float = var_315_int;
	var_310_int = var_315_int % (int)24;
	var_303_bool = var_310_int < (int)7;
	return 6;
}


func_5652()
{
	var_50_int = 0; var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_int = 0; var_55_bool = 0; var_56_int = 0; var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_int = 0; var_61_bool = 0;
	WaitForAnimEnd();
	var_62_bool = 0;
	func_5762(var_62_bool);
	var_63_bool = var_62_bool == 0; //@nz
	if(var_63_bool != 0) {
		return 12;
	}
	func_6187((int)0);
	var_64_int = var_56_int;
	var_57_int = 0;
	
Label_5666:
	var_77_bool = 0;
	var_77_bool = 0;
	var_79_bool = var_57_int < (int)5;
	if(var_79_bool != 0) {
		var_80_bool = 0;
		func_5762(var_80_bool);
		if(var_80_bool != 0) {
			var_77_bool = 1;
		}
	}
	if(var_77_bool != 0) {
		var_81_bool = var_56_int == 0; //@nz
		if(var_81_bool != 0) {
			Sleep((int)3, var_58_bool);
			var_83_bool = var_58_bool == 0; //@nz
			if(var_83_bool != 0) {
			} else {
		} else {
				irand(var_59_int, var_56_int);
				irand(var_60_int, (int)5);
				var_89_bool = var_60_int != (int)0;
				if(var_89_bool != 0) {
					var_59_int = 0;
				}
				var_91_string = ""; var_92_int = 0;
				var_59_int = var_92_int;
				func_6180(var_91_string, var_92_int);
				PlayAnimation("all", var_91_string);
				WaitForAnimEnd(var_61_bool);
				var_93_bool = var_61_bool == 0; //@nz
				if(var_93_bool == 0) goto Label_5707;
				goto Label_5718;
		}
		Label_5707:
			var_84_bool = 0;
			func_5721(var_84_bool);
			var_85_bool = var_84_bool == 0; //@nz
			if(var_85_bool != 0) {
				goto Label_5718;
			}
			ResetAAS();
			var_57_int = var_57_int + (int)1;
			goto Label_5666;

		}
	}
Label_5718:
	ResetAAS();
	return 12;
	
}


func_6683(var_116_bool)
{
	var_118_int = 0; var_119_string = "";
	func_6061(var_118_int, "d10q01SoldierTalk");
	var_121_bool = var_118_int != (int)0;
	if(var_121_bool != 0) {
		var_116_bool = 1;
		return 0;
	}
	var_116_bool = 0;
	return 0;
}


func_6180(var_70_string, var_71_int)
{
	var_72_string = ""; var_73_string = "";
	var_74_int = var_71_int;
	if(var_74_int != 0) {
		"idle" = "idle" + var_71_int;
	}
	var_73_string = var_70_string;
	return 2;
}


func_6695(var_415_bool)
{
	var_417_int = 0; var_418_string = "";
	func_6061(var_417_int, "ood2Andrei1");
	var_422_bool = var_417_int == (int)0;
	if(var_422_bool != 0) {
		var_415_bool = 1;
		return 0;
	}
	var_415_bool = 0;
	return 0;
}


func_6187(var_64_int)
{
	var_65_int = 0; var_66_bool = 0; var_67_int = 0; var_68_bool = 0;
	var_67_int = 0;
	
Label_6189:
	var_70_string = ""; var_71_int = 0;
	var_67_int = var_71_int;
	func_6180(var_70_string, var_71_int);
	HasAnimation(var_68_bool, "all", var_70_string);
	var_75_bool = var_68_bool == 0; //@nz
	if(var_75_bool != 0) {
	} else {
		var_67_int = var_67_int + (int)1;
		goto Label_6189;
	}
	var_67_int = var_64_int;
	return 4;
	
}


func_6707(var_433_bool)
{
	var_435_int = 0; var_436_string = "";
	func_6061(var_435_int, "ood2Andrei2");
	var_438_bool = var_435_int == (int)0;
	if(var_438_bool != 0) {
		var_433_bool = 1;
		return 0;
	}
	var_433_bool = 0;
	return 0;
}


func_6204(var_129_int)
{
	var_129_int = 515529;
	return 0;
}


func_6206(var_128_int)
{
	var_128_int = 502855;
	return 0;
}


func_6719(var_449_bool)
{
	var_451_int = 0; var_452_string = "";
	func_6061(var_451_int, "ood2Andrei3");
	var_454_bool = var_451_int == (int)0;
	if(var_454_bool != 0) {
		var_449_bool = 1;
		return 0;
	}
	var_449_bool = 0;
	return 0;
}


func_6208(var_130_string)
{
	var_130_string = "ui/NPC_Andrei.png";
	return 0;
}


func_6210(var_131_string)
{
	var_131_string = "ui/NPC_Andrei_b.png";
	return 0;
}


func_6212(var_123_bool)
{
	var_123_bool = 1;
	return 0;
}


func_6214(var_118_object)
{
	var_119_object = Obj(); var_120_string = ""; var_121_float = 0;
	func_7052(Obj());
	var_122_object = var_119_object;
	func_7069(var_119_object, "pt_map_aglaja", (float)2);
	var_148_object = Obj();
	func_7052(var_148_object);
	@@var_118_object:ShowMap(var_148_object);
	return 0;
}


func_6731(var_465_bool)
{
	var_467_int = 0; var_468_string = "";
	func_6061(var_467_int, "ood2Andrei4");
	var_470_bool = var_467_int == (int)0;
	if(var_470_bool != 0) {
		var_465_bool = 1;
		return 0;
	}
	var_465_bool = 0;
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_236_object, var_237_object)
{
	var_0_object = var_237_object;
	var_1_object = var_236_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_243_object = Obj(); var_244_object = Obj();
		var_243_object = var_1_object;
		var_244_object = var_0_object;
		func_6440();
		var_247_string = "";
		func_149(var_237_object, "Neutral");
		@@@var_0_object:SetMessage((int)500187);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)500190, (int)228, (int)227);
		@@@var_0_object:AddReply((int)533667, (int)35200, (int)35199);
		@@@var_0_object:AddReply((int)500188, (int)226, (int)225);
		goto Label_119;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_119:
	var_274_bool = 0;
	func_6212(var_274_bool);
	if(var_274_bool != 0) {

	Label_123:
		lshWaitForAnimEnd();
		var_275_string = var_3_string;
		if(var_275_string != 0) {
		} else {
			var_276_string = "";
			var_276_string = var_2_object;
			func_5992(var_276_string);
			goto Label_123;
	}
		PlayAnimation("all", "idle");

	Label_138:
		WaitForAnimEnd();
		var_289_string = var_3_string;
		if(var_289_string != 0) {
			goto Label_148;
		}
		PlayAnimation("all", "idle");
		goto Label_138;
	}
	goto Label_148;
	
Label_148:
	return 0;
	
}


func_6230(var_182_object)
{
	Trace("money1000 is given");
	var_185_object = Obj(); var_186_int = 0;
	var_182_object = var_185_object;
	func_6078(var_185_object, (int)1000);
	return 0;
}


func_6743(var_481_bool)
{
	var_483_int = 0; var_484_string = "";
	func_6061(var_483_int, "ood2Andrei5");
	var_486_bool = var_483_int == (int)0;
	if(var_486_bool != 0) {
		var_481_bool = 1;
		return 0;
	}
	var_481_bool = 0;
	return 0;
}


func_5721(var_84_bool)
{
	var_84_bool = 1;
	return 0;
}


func_5723()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_6240()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_5728(var_61_float, var_62_object)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0);
	GetPosition(var_66_cvector);
	@@var_62_object:GetPosition(var_67_cvector);
	var_68_cvector = var_67_cvector - var_66_cvector;
	var_61_float = var_68_cvector | var_68_cvector;
	return 6;
}


func_6755(var_487_bool)
{
	var_489_int = 0; var_490_string = "";
	func_6061(var_489_int, "d2q02");
	var_492_bool = var_489_int == (int)1000;
	if(var_492_bool != 0) {
		var_487_bool = 1;
		return 0;
	}
	var_487_bool = 0;
	return 0;
}


func_6246()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_5736(var_189_object, var_190_string, var_191_int)
{
	var_192_int = 0; var_193_int = 0;
	@@var_189_object:GetProperty(var_190_string, var_193_int);
	var_194_int = var_193_int + var_191_int;
	@@var_189_object:SetProperty(var_190_string, var_194_int);
	return 2;
}


func_618(var_2_object, var_405_string)
{
	var_406_bool = 0;
	func_6212(var_406_bool);
	var_407_bool = var_406_bool == 0; //@nz
	if(var_407_bool != 0) {
		return 0;
	}
	var_408_bool = var_405_string == var_2_object;
	if(var_408_bool != 0) {
		return 0;
	}
	var_409_string = ""; var_410_bool = 0;
	var_405_string = var_409_string;
	var_412_bool = var_405_string == "";
	if(var_412_bool != 0) {
		var_410_bool = 0;
	} else {
		var_410_bool = 1;
	}
	func_6008(var_409_string, var_410_bool);
	var_2_object = var_405_string;
	return 0;
	
}


func_6252()
{
	SetVariable("ood3Andrei2", (int)1);
	return 0;
}


func_6767(var_423_bool)
{
	var_425_int = 0; var_426_string = "";
	func_6061(var_425_int, "d2q02");
	var_428_bool = var_425_int == (int)1;
	if(var_428_bool != 0) {
		var_423_bool = 1;
		return 0;
	}
	var_423_bool = 0;
	return 0;
}


func_5743(var_54_bool, var_55_cvector)
{
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_bool = 0;
	GetPosition(var_59_cvector);
	var_60_cvector = var_55_cvector - var_59_cvector;
	var_62_float = GetByIndex(var_60_cvector, 0);
	var_63_float = GetByIndex(var_60_cvector, 2);
	Rotate(var_62_float, var_63_float, var_61_bool);
	var_61_bool = var_54_bool;
	return 6;
}


func_6258()
{
	SetVariable("ood3Andrei3", (int)1);
	return 0;
}


func_6264()
{
	SetVariable("ood3Andrei4", (int)1);
	return 0;
}


func_5753(var_50_bool, var_51_object)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	@@var_51_object:GetPosition(var_53_cvector);
	var_54_bool = 0; var_55_cvector = CVector(0,0,0);
	var_53_cvector = var_55_cvector;
	func_5743(var_54_bool, var_55_cvector);
	var_54_bool = var_50_bool;
	return 2;
}


func_6779(var_439_bool)
{
	var_441_int = 0; var_442_string = "";
	func_6061(var_441_int, "d2q02");
	var_444_bool = var_441_int == (int)3;
	if(var_444_bool != 0) {
		var_439_bool = 1;
		return 0;
	}
	var_439_bool = 0;
	return 0;
}


func_6270()
{
	SetVariable("ood3Andrei5", (int)1);
	return 0;
}


func_5762(var_46_bool)
{
	var_47_bool = 0; var_48_bool = 0;
	IsLoaded(var_48_bool);
	var_48_bool = var_46_bool;
	return 2;
}


func_6276()
{
	SetVariable("ood3Andrei6", (int)1);
	return 0;
}


func_5767(var_80_bool, var_81_object, var_82_float)
{
	var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_bool = 0; var_91_bool = 0; var_92_float = 0; var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_bool = 0; var_100_bool = 0;
	@@var_81_object:GetPosition(var_93_cvector);
	@@var_81_object:GetEyesHeight(var_92_float);
	var_101_float = GetByIndex(var_93_cvector, 1);
	var_101_float = var_101_float + var_92_float;
	SetByIndex(var_93_cvector, 1) = var_101_float;
	GetPosition(var_94_cvector);
	GetEyesHeight(var_92_float);
	var_102_float = GetByIndex(var_94_cvector, 1);
	var_102_float = var_102_float + var_92_float;
	SetByIndex(var_94_cvector, 1) = var_102_float;
	var_95_cvector = var_93_cvector - var_94_cvector;
	var_103_float = GetByIndex(var_95_cvector, 1);
	SetByIndex(var_95_cvector, 1) = (float)0;
	var_104_int = var_95_cvector | var_95_cvector;
	var_105_float = sqrt(var_104_int);
	var_95_cvector = var_95_cvector / var_105_float;
	var_96_cvector = -var_95_cvector;
	var_106_float = var_95_cvector * var_82_float;
	var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0);
	var_108_cvector = var_96_cvector ^ CVector(0.0, 1.0, 0.0);
	func_6051(var_107_cvector, var_108_cvector);
	var_116_float = var_107_cvector * (int)25;
	var_117_int = var_106_float + var_116_float;
	var_97_cvector = var_117_int - CVector(0.0, 10.0, 0.0);
	var_98_cvector = var_94_cvector + var_97_cvector;
	IsOverrideActive(var_99_bool);
	var_119_bool = var_99_bool;
	if(var_119_bool != 0) {
		var_80_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_98_cvector, var_96_cvector, (bool)1);
	var_121_float = GetByIndex(var_97_cvector, 0);
	var_122_float = GetByIndex(var_97_cvector, 2);
	Rotate(var_121_float, var_122_float);
	var_123_bool = 0;
	func_6212(var_123_bool);
	if(var_123_bool != 0) {
	} else {
		HasAnimationTrack(var_100_bool, "head");
		var_125_bool = var_100_bool;
		if(var_125_bool == 0) goto Label_5830;
		LookAsyncCamera("head");
	}
Label_5830:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_80_bool = 1;
	return 18;
	
}


func_6791(var_455_bool)
{
	var_457_int = 0; var_458_string = "";
	func_6061(var_457_int, "d2q02");
	var_460_bool = var_457_int == (int)5;
	if(var_460_bool != 0) {
		var_455_bool = 1;
		return 0;
	}
	var_455_bool = 0;
	return 0;
}


func_6282()
{
	SetVariable("ood3Andrei7", (int)1);
	return 0;
}


func_6288()
{
	SetVariable("ood2Andrei6", (int)1);
	return 0;
}


func_6803(var_471_bool)
{
	var_473_int = 0; var_474_string = "";
	func_6061(var_473_int, "d2q02");
	var_476_bool = var_473_int == (int)7;
	if(var_476_bool != 0) {
		var_471_bool = 1;
		return 0;
	}
	var_471_bool = 0;
	return 0;
}


func_149(var_2_object, var_247_string)
{
	var_248_bool = 0;
	func_6212(var_248_bool);
	var_249_bool = var_248_bool == 0; //@nz
	if(var_249_bool != 0) {
		return 0;
	}
	var_250_bool = var_247_string == var_2_object;
	if(var_250_bool != 0) {
		return 0;
	}
	var_251_string = ""; var_252_bool = 0;
	var_247_string = var_251_string;
	var_254_bool = var_247_string == "";
	if(var_254_bool != 0) {
		var_252_bool = 0;
	} else {
		var_252_bool = 1;
	}
	func_6008(var_251_string, var_252_bool);
	var_2_object = var_247_string;
	return 0;
	
}


func_6294()
{
	SetVariable("ood2Andrei7", (int)1);
	return 0;
}


func_5269(var_0_object, var_1016_int, var_1017_object)
{
	var_1019_object = Obj(); var_1020_bool = 0; var_1021_int = 0; var_1022_bool = 0; var_1023_object = Obj(); var_1024_bool = 0; var_1025_int = 0; var_1026_bool = 0;
	var_0_object = var_1017_object;
	var_1027_bool = 0; var_1028_object = Obj(); var_1029_float = 0;
	var_1017_object = var_1028_object;
	func_5767(var_1027_bool, var_1028_object, (float)70.0);
	var_1030_bool = var_1027_bool == 0; //@nz
	if(var_1030_bool != 0) {
		var_1016_int = -2;
		return 8;
	}
	CreateDialog(var_1023_object);
	var_1031_int = 0;
	func_6206(var_1031_int);
	@@var_1023_object:SetNPCName(var_1031_int);
	var_1032_int = 0;
	func_6204(var_1032_int);
	@@var_1023_object:SetNPCDescription(var_1032_int);
	var_1033_string = "";
	func_6208(var_1033_string);
	@@var_1023_object:SetPhoto(var_1033_string);
	var_1034_string = "";
	func_6210(var_1034_string);
	@@var_1023_object:SetPhoto2(var_1034_string);
	var_1035_int = 0;
	func_7102(var_1035_int);
	@@var_1023_object:SetPlayerName(var_1035_int);
	IsOverrideActive(var_1024_bool);
	var_1036_bool = var_1024_bool;
	if(var_1036_bool != 0) {
		var_1016_int = -2;
		return 8;
	}
	DoDialog(var_1023_object);
	var_1037_bool = 0; var_1038_object = Obj();
	func_6045(Obj());
	var_1039_object = var_1038_object;
	func_5854(var_1037_bool, var_1038_object);
	var_1040_object = Obj(); var_1041_object = Obj();
	var_1017_object = var_1040_object;
	var_1023_object = var_1041_object;
	TaskCall(17);
	func_5350(var_1042_object, var_1043_object, var_1044_string, var_1045_bool, var_1040_object, var_1041_object);
	TaskReturn();
	@@var_1023_object:IsDialogEnd(var_1026_bool);
	
Label_5332:
	var_1070_bool = var_1026_bool == 0; //@nz
	if(var_1070_bool != 0) {
		sync();
		@@var_1023_object:IsDialogEnd(var_1026_bool);
		goto Label_5332;
	}
	var_1017_object = Obj();
	func_5836();
	StopDialog(var_1023_object);
	@@var_1023_object:GetReturnValue((int)-1);
	var_1025_int = var_1016_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6300()
{
	SetVariable("ood2Andrei1", (int)1);
	return 0;
}


func_6815(var_97_bool)
{
	var_99_int = 0; var_100_string = "";
	func_6061(var_99_int, "d5q01");
	var_102_bool = var_99_int == (int)1000;
	if(var_102_bool != 0) {
		var_97_bool = 1;
		return 0;
	}
	var_97_bool = 0;
	return 0;
}


func_6306()
{
	SetVariable("ood2Andrei2", (int)1);
	return 0;
}


func_6312()
{
	SetVariable("ood2Andrei3", (int)1);
	return 0;
}


func_6827(var_730_bool)
{
	var_732_int = 0; var_733_string = "";
	func_6061(var_732_int, "ood6Andrei1");
	var_735_bool = var_732_int == (int)0;
	if(var_735_bool != 0) {
		var_730_bool = 1;
		return 0;
	}
	var_730_bool = 0;
	return 0;
}


func_6318()
{
	SetVariable("ood2Andrei4", (int)1);
	return 0;
}


func_6324()
{
	SetVariable("ood2Andrei5", (int)1);
	return 0;
}


func_1717(var_0_object, var_549_int, var_550_object)
{
	var_552_object = Obj(); var_553_bool = 0; var_554_int = 0; var_555_bool = 0; var_556_object = Obj(); var_557_bool = 0; var_558_int = 0; var_559_bool = 0;
	var_0_object = var_550_object;
	var_560_bool = 0; var_561_object = Obj(); var_562_float = 0;
	var_550_object = var_561_object;
	func_5767(var_560_bool, var_561_object, (float)70.0);
	var_563_bool = var_560_bool == 0; //@nz
	if(var_563_bool != 0) {
		var_549_int = -2;
		return 8;
	}
	CreateDialog(var_556_object);
	var_564_int = 0;
	func_6206(var_564_int);
	@@var_556_object:SetNPCName(var_564_int);
	var_565_int = 0;
	func_6204(var_565_int);
	@@var_556_object:SetNPCDescription(var_565_int);
	var_566_string = "";
	func_6208(var_566_string);
	@@var_556_object:SetPhoto(var_566_string);
	var_567_string = "";
	func_6210(var_567_string);
	@@var_556_object:SetPhoto2(var_567_string);
	var_568_int = 0;
	func_7102(var_568_int);
	@@var_556_object:SetPlayerName(var_568_int);
	IsOverrideActive(var_557_bool);
	var_569_bool = var_557_bool;
	if(var_569_bool != 0) {
		var_549_int = -2;
		return 8;
	}
	DoDialog(var_556_object);
	var_570_bool = 0; var_571_object = Obj();
	func_6045(Obj());
	var_572_object = var_571_object;
	func_5854(var_570_bool, var_571_object);
	var_573_object = Obj(); var_574_object = Obj();
	var_550_object = var_573_object;
	var_556_object = var_574_object;
	TaskCall(5);
	func_1798(var_575_object, var_576_object, var_577_string, var_578_bool, var_573_object, var_574_object);
	TaskReturn();
	@@var_556_object:IsDialogEnd(var_559_bool);
	
Label_1780:
	var_686_bool = var_559_bool == 0; //@nz
	if(var_686_bool != 0) {
		sync();
		@@var_556_object:IsDialogEnd(var_559_bool);
		goto Label_1780;
	}
	var_550_object = Obj();
	func_5836();
	StopDialog(var_556_object);
	@@var_556_object:GetReturnValue((int)-1);
	var_558_int = var_549_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6839(var_556_bool)
{
	var_558_int = 0; var_559_string = "";
	func_6061(var_558_int, "KnowGrif");
	var_561_bool = var_558_int == (int)1;
	if(var_561_bool != 0) {
		var_556_bool = 1;
		return 0;
	}
	var_556_bool = 0;
	return 0;
}


func_4791(var_0_object, var_318_int, var_319_object)
{
	var_321_object = Obj(); var_322_bool = 0; var_323_int = 0; var_324_bool = 0; var_325_object = Obj(); var_326_bool = 0; var_327_int = 0; var_328_bool = 0;
	var_0_object = var_319_object;
	var_329_bool = 0; var_330_object = Obj(); var_331_float = 0;
	var_319_object = var_330_object;
	func_5767(var_329_bool, var_330_object, (float)70.0);
	var_332_bool = var_329_bool == 0; //@nz
	if(var_332_bool != 0) {
		var_318_int = -2;
		return 8;
	}
	CreateDialog(var_325_object);
	var_333_int = 0;
	func_6206(var_333_int);
	@@var_325_object:SetNPCName(var_333_int);
	var_334_int = 0;
	func_6204(var_334_int);
	@@var_325_object:SetNPCDescription(var_334_int);
	var_335_string = "";
	func_6208(var_335_string);
	@@var_325_object:SetPhoto(var_335_string);
	var_336_string = "";
	func_6210(var_336_string);
	@@var_325_object:SetPhoto2(var_336_string);
	var_337_int = 0;
	func_7102(var_337_int);
	@@var_325_object:SetPlayerName(var_337_int);
	IsOverrideActive(var_326_bool);
	var_338_bool = var_326_bool;
	if(var_338_bool != 0) {
		var_318_int = -2;
		return 8;
	}
	DoDialog(var_325_object);
	var_339_object = Obj(); var_340_object = Obj();
	var_319_object = var_339_object;
	var_325_object = var_340_object;
	TaskCall(13);
	func_4865(var_341_object, var_342_object, var_343_string, var_344_bool, var_339_object, var_340_object);
	TaskReturn();
	@@var_325_object:IsDialogEnd(var_328_bool);
	
Label_4847:
	var_369_bool = var_328_bool == 0; //@nz
	if(var_369_bool != 0) {
		sync();
		@@var_325_object:IsDialogEnd(var_328_bool);
		goto Label_4847;
	}
	var_319_object = Obj();
	func_5836();
	StopDialog(var_325_object);
	@@var_325_object:GetReturnValue((int)-1);
	var_327_int = var_318_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6330()
{
	SetVariable("KnowAgo", (int)1);
	return 0;
}


func_6336()
{
	var_103_int = 0; var_104_string = "";
	func_6061(var_103_int, "map_chertez_state");
	var_108_bool = var_103_int <= (int)6;
	if(var_108_bool != 0) {
		SetVariable("map_chertez_state", (int)6);
		SetVariable("map_chertez_force", (int)1);
	}
	return 0;
}


func_6851(var_881_bool)
{
	var_883_int = 0; var_884_string = "";
	func_6061(var_883_int, "d11q01");
	var_886_bool = var_883_int == (int)3;
	if(var_886_bool != 0) {
		var_881_bool = 1;
		return 0;
	}
	var_881_bool = 0;
	return 0;
}


func_5836()
{
	var_294_bool = 0; var_295_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_297_bool = 0;
	func_6212(var_297_bool);
	if(var_297_bool != 0) {
	} else {
		HasAnimationTrack(var_295_bool, "head");
		var_299_bool = var_295_bool;
		if(var_299_bool == 0) goto Label_5853;
		UnlookAsync("head");
	}
Label_5853:
	return 2;
	
}


func_6863(var_887_bool)
{
	var_889_int = 0; var_890_string = "";
	func_6061(var_889_int, "ood11Andrei1");
	var_892_bool = var_889_int == (int)0;
	if(var_892_bool != 0) {
		var_887_bool = 1;
		return 0;
	}
	var_887_bool = 0;
	return 0;
}


func_6353()
{
	var_58_object = Obj(); var_59_object = Obj();
	SetVariable("d2q02", (int)2);
	func_7052(Obj());
	var_62_object = var_59_object;
	var_73_float = 0;
	func_6141(var_73_float);
	@@var_59_object:AddMark("d2q02AndreiGotoPetr", "pt_map_petr", (int)0, (int)515273, var_73_float);
	func_6985();
	return 2;
}
EMIT "Stack[-1] = 0";


func_3800(var_0_object, var_849_int, var_850_object)
{
	var_852_object = Obj(); var_853_bool = 0; var_854_int = 0; var_855_bool = 0; var_856_object = Obj(); var_857_bool = 0; var_858_int = 0; var_859_bool = 0;
	var_0_object = var_850_object;
	var_860_bool = 0; var_861_object = Obj(); var_862_float = 0;
	var_850_object = var_861_object;
	func_5767(var_860_bool, var_861_object, (float)70.0);
	var_863_bool = var_860_bool == 0; //@nz
	if(var_863_bool != 0) {
		var_849_int = -2;
		return 8;
	}
	CreateDialog(var_856_object);
	var_864_int = 0;
	func_6206(var_864_int);
	@@var_856_object:SetNPCName(var_864_int);
	var_865_int = 0;
	func_6204(var_865_int);
	@@var_856_object:SetNPCDescription(var_865_int);
	var_866_string = "";
	func_6208(var_866_string);
	@@var_856_object:SetPhoto(var_866_string);
	var_867_string = "";
	func_6210(var_867_string);
	@@var_856_object:SetPhoto2(var_867_string);
	var_868_int = 0;
	func_7102(var_868_int);
	@@var_856_object:SetPlayerName(var_868_int);
	IsOverrideActive(var_857_bool);
	var_869_bool = var_857_bool;
	if(var_869_bool != 0) {
		var_849_int = -2;
		return 8;
	}
	DoDialog(var_856_object);
	var_870_bool = 0; var_871_object = Obj();
	func_6045(Obj());
	var_872_object = var_871_object;
	func_5854(var_870_bool, var_871_object);
	var_873_object = Obj(); var_874_object = Obj();
	var_850_object = var_873_object;
	var_856_object = var_874_object;
	TaskCall(11);
	func_3881(var_875_object, var_876_object, var_877_string, var_878_bool, var_873_object, var_874_object);
	TaskReturn();
	@@var_856_object:IsDialogEnd(var_859_bool);
	
Label_3863:
	var_953_bool = var_859_bool == 0; //@nz
	if(var_953_bool != 0) {
		sync();
		@@var_856_object:IsDialogEnd(var_859_bool);
		goto Label_3863;
	}
	var_850_object = Obj();
	func_5836();
	StopDialog(var_856_object);
	@@var_856_object:GetReturnValue((int)-1);
	var_858_int = var_849_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6875(var_923_bool)
{
	var_925_int = 0; var_926_string = "";
	func_6061(var_925_int, "d11q01");
	var_928_bool = var_925_int == (int)4;
	if(var_928_bool != 0) {
		var_923_bool = 1;
		return 0;
	}
	var_923_bool = 0;
	return 0;
}


func_5854(var_141_bool, var_142_object)
{
	var_146_int = 0; var_147_int = 0; var_148_int = 0; var_149_int = 0;
	GetVariable("voice_common", var_148_int);
	var_151_int = var_148_int;
	if(var_151_int != 0) {
		var_152_bool = 0; var_153_object = Obj();
		var_142_object = var_153_object;
		func_5912(var_152_bool, var_153_object);
		var_182_bool = var_152_bool == 0; //@nz
		if(var_182_bool != 0) {
			var_183_bool = 0; var_184_object = Obj();
			var_142_object = var_184_object;
			func_5949(var_183_bool, var_184_object);
			var_218_bool = var_183_bool == 0; //@nz
			if(var_218_bool != 0) {
				var_141_bool = 0;
				return 4;
			}
		}
		irand(var_149_int, (int)2);
		var_220_int = var_149_int;
		if(var_220_int != 0) {
			var_223_int = var_148_int + (int)1;
			var_225_int = var_223_int % (int)3;
			SetVariable("voice_common", var_225_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_228_bool = 0; var_229_object = Obj();
		var_142_object = var_229_object;
		func_5949(var_228_bool, var_229_object);
		var_230_bool = var_228_bool == 0; //@nz
		if(var_230_bool != 0) {
			var_231_bool = 0; var_232_object = Obj();
			var_142_object = var_232_object;
			func_5912(var_231_bool, var_232_object);
			var_233_bool = var_231_bool == 0; //@nz
			if(var_233_bool != 0) {
				var_141_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_5910;
	
Label_5910:
	var_141_bool = 1;
	return 4;
	
}


func_3295(var_0_object, var_757_int, var_758_object)
{
	var_760_object = Obj(); var_761_bool = 0; var_762_int = 0; var_763_bool = 0; var_764_object = Obj(); var_765_bool = 0; var_766_int = 0; var_767_bool = 0;
	var_0_object = var_758_object;
	var_768_bool = 0; var_769_object = Obj(); var_770_float = 0;
	var_758_object = var_769_object;
	func_5767(var_768_bool, var_769_object, (float)70.0);
	var_771_bool = var_768_bool == 0; //@nz
	if(var_771_bool != 0) {
		var_757_int = -2;
		return 8;
	}
	CreateDialog(var_764_object);
	var_772_int = 0;
	func_6206(var_772_int);
	@@var_764_object:SetNPCName(var_772_int);
	var_773_int = 0;
	func_6204(var_773_int);
	@@var_764_object:SetNPCDescription(var_773_int);
	var_774_string = "";
	func_6208(var_774_string);
	@@var_764_object:SetPhoto(var_774_string);
	var_775_string = "";
	func_6210(var_775_string);
	@@var_764_object:SetPhoto2(var_775_string);
	var_776_int = 0;
	func_7102(var_776_int);
	@@var_764_object:SetPlayerName(var_776_int);
	IsOverrideActive(var_765_bool);
	var_777_bool = var_765_bool;
	if(var_777_bool != 0) {
		var_757_int = -2;
		return 8;
	}
	DoDialog(var_764_object);
	var_778_bool = 0; var_779_object = Obj();
	func_6045(Obj());
	var_780_object = var_779_object;
	func_5854(var_778_bool, var_779_object);
	var_781_object = Obj(); var_782_object = Obj();
	var_758_object = var_781_object;
	var_764_object = var_782_object;
	TaskCall(9);
	func_3376(var_783_object, var_784_object, var_785_string, var_786_bool, var_781_object, var_782_object);
	TaskReturn();
	@@var_764_object:IsDialogEnd(var_767_bool);
	
Label_3358:
	var_845_bool = var_767_bool == 0; //@nz
	if(var_845_bool != 0) {
		sync();
		@@var_764_object:IsDialogEnd(var_767_bool);
		goto Label_3358;
	}
	var_758_object = Obj();
	func_5836();
	StopDialog(var_764_object);
	@@var_764_object:GetReturnValue((int)-1);
	var_766_int = var_757_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5350(var_0_object, var_1_object, var_2_object, var_3_string, var_1040_object, var_1041_object)
{
	var_0_object = var_1041_object;
	var_1_object = var_1040_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1047_string = "";
		func_5408(var_1041_object, "Neutral");
		@@@var_0_object:SetMessage((int)540542);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540543, (int)-1, (int)42552);
		@@@var_0_object:AddReply((int)540796, (int)-1, (int)42845);
		goto Label_5378;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x14ea";
	}
Label_5378:
	var_1062_bool = 0;
	func_6212(var_1062_bool);
	if(var_1062_bool != 0) {

	Label_5382:
		lshWaitForAnimEnd();
		var_1063_string = var_3_string;
		if(var_1063_string != 0) {
		} else {
			var_1064_string = "";
			var_1064_string = var_2_object;
			func_5992(var_1064_string);
			goto Label_5382;
	}
		PlayAnimation("all", "idle");

	Label_5397:
		WaitForAnimEnd();
		var_1067_string = var_3_string;
		if(var_1067_string != 0) {
			goto Label_5407;
		}
		PlayAnimation("all", "idle");
		goto Label_5397;
	}
	goto Label_5407;
	
Label_5407:
	return 0;
	
}


func_6887(var_929_bool)
{
	var_931_int = 0; var_932_string = "";
	func_6061(var_931_int, "ood11Andrei2");
	var_934_bool = var_931_int == (int)0;
	if(var_934_bool != 0) {
		var_929_bool = 1;
		return 0;
	}
	var_929_bool = 0;
	return 0;
}


func_6376()
{
	var_157_object = Obj(); var_158_object = Obj();
	SetVariable("d2q02", (int)6);
	func_7052(Obj());
	var_161_object = var_158_object;
	var_166_float = 0;
	func_6141(var_166_float);
	@@var_158_object:AddMark("d2q02AndreiGotoGrif", "pt_map_grif", (int)0, (int)515277, var_166_float);
	func_6972();
	return 2;
}
EMIT "Stack[-1] = 0";


func_6899(var_939_bool)
{
	var_941_int = 0; var_942_string = "";
	func_6061(var_941_int, "ood11Andrei3");
	var_944_bool = var_941_int == (int)0;
	if(var_944_bool != 0) {
		var_939_bool = 1;
		return 0;
	}
	var_939_bool = 0;
	return 0;
}


func_6399()
{
	SetVariable("d2q02", (int)8);
	func_6998();
	var_237_bool = 0; var_238_string = ""; var_239_string = "";
	func_6129(var_237_bool, "quest_d2_02", "put_patrol");
	return 0;
}


func_6911(var_590_bool)
{
	var_592_int = 0; var_593_string = "";
	func_6061(var_592_int, "ood3Andrei1");
	var_595_bool = var_592_int == (int)0;
	if(var_595_bool != 0) {
		var_590_bool = 1;
		return 0;
	}
	var_590_bool = 0;
	return 0;
}


func_4865(var_0_object, var_1_object, var_2_object, var_3_string, var_339_object, var_340_object)
{
	var_0_object = var_340_object;
	var_1_object = var_339_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_346_string = "";
		func_4923(var_340_object, "Neutral");
		@@@var_0_object:SetMessage((int)532762);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)532763, (int)-1, (int)34234);
		@@@var_0_object:AddReply((int)533665, (int)-1, (int)35197);
		goto Label_4893;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1305";
	}
Label_4893:
	var_361_bool = 0;
	func_6212(var_361_bool);
	if(var_361_bool != 0) {

	Label_4897:
		lshWaitForAnimEnd();
		var_362_string = var_3_string;
		if(var_362_string != 0) {
		} else {
			var_363_string = "";
			var_363_string = var_2_object;
			func_5992(var_363_string);
			goto Label_4897;
	}
		PlayAnimation("all", "idle");

	Label_4912:
		WaitForAnimEnd();
		var_366_string = var_3_string;
		if(var_366_string != 0) {
			goto Label_4922;
		}
		PlayAnimation("all", "idle");
		goto Label_4912;
	}
	goto Label_4922;
	
Label_4922:
	return 0;
	
}


func_1798(var_0_object, var_1_object, var_2_object, var_3_string, var_573_object, var_574_object)
{
	var_0_object = var_574_object;
	var_1_object = var_573_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_580_string = "";
		func_1935(var_574_object, "Neutral");
		@@@var_0_object:SetMessage((int)509762);
		@@@var_0_object:ClearReplies();
		var_589_bool = 0;
		var_589_bool = 0;
		var_590_bool = 0; var_591_object = Obj();
		var_591_object = var_1_object;
		func_6911(var_591_object);
		if(var_590_bool != 0) {
			var_596_bool = 0; var_597_object = Obj();
			var_597_object = var_1_object;
			func_6588(var_597_object);
			if(var_596_bool != 0) {
				var_589_bool = 1;
			}
		}
		if(var_589_bool != 0) {
			@@@var_0_object:AddReply((int)509763, (int)10732, (int)10753);
		}
		var_618_bool = 0; var_619_object = Obj();
		var_619_object = var_1_object;
		func_6516(var_619_object);
		if(var_618_bool != 0) {
			@@@var_0_object:AddReply((int)509770, (int)10754, (int)10761);
		}
		var_627_bool = 0; var_628_object = Obj();
		var_628_object = var_1_object;
		func_6528(var_628_object);
		if(var_627_bool != 0) {
			@@@var_0_object:AddReply((int)533709, (int)35249, (int)35248);
		}
		var_636_bool = 0; var_637_object = Obj();
		var_637_object = var_1_object;
		func_6540(var_637_object);
		if(var_636_bool != 0) {
			@@@var_0_object:AddReply((int)533734, (int)35275, (int)35274);
		}
		var_645_bool = 0; var_646_object = Obj();
		var_646_object = var_1_object;
		func_6552(var_646_object);
		if(var_645_bool != 0) {
			@@@var_0_object:AddReply((int)533750, (int)35291, (int)35290);
		}
		var_654_bool = 0; var_655_object = Obj();
		var_655_object = var_1_object;
		func_6564(var_655_object);
		if(var_654_bool != 0) {
			@@@var_0_object:AddReply((int)533762, (int)35305, (int)35304);
		}
		var_663_bool = 0; var_664_object = Obj();
		var_664_object = var_1_object;
		func_6576(var_664_object);
		if(var_663_bool != 0) {
			@@@var_0_object:AddReply((int)533782, (int)35327, (int)35326);
		}
		@@@var_0_object:AddReply((int)533793, (int)-1, (int)35337);
		@@@var_0_object:AddReply((int)535105, (int)-1, (int)36761);
		goto Label_1905;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x70a";
	}
Label_1905:
	var_678_bool = 0;
	func_6212(var_678_bool);
	if(var_678_bool != 0) {

	Label_1909:
		lshWaitForAnimEnd();
		var_679_string = var_3_string;
		if(var_679_string != 0) {
		} else {
			var_680_string = "";
			var_680_string = var_2_object;
			func_5992(var_680_string);
			goto Label_1909;
	}
		PlayAnimation("all", "idle");

	Label_1924:
		WaitForAnimEnd();
		var_683_string = var_3_string;
		if(var_683_string != 0) {
			goto Label_1934;
		}
		PlayAnimation("all", "idle");
		goto Label_1924;
	}
	goto Label_1934;
	
Label_1934:
	return 0;
	
}


func_6923(var_790_bool)
{
	var_792_int = 0; var_793_string = "";
	func_6061(var_792_int, "d10q01");
	var_795_bool = var_792_int == (int)0;
	if(var_795_bool != 0) {
		var_790_bool = 1;
		return 0;
	}
	var_790_bool = 0;
	return 0;
}


func_6413(var_176_object)
{
	var_177_object = Obj(); var_178_string = ""; var_179_float = 0;
	func_7052(Obj());
	var_180_object = var_177_object;
	func_7069(var_177_object, "pt_map_grif", (float)2);
	var_181_object = Obj();
	func_7052(var_181_object);
	@@var_176_object:ShowMap(var_181_object);
	return 0;
}


func_6935(var_797_bool)
{
	var_799_int = 0; var_800_string = "";
	func_6061(var_799_int, "d10q01");
	var_802_bool = var_799_int == (int)1000;
	if(var_802_bool != 0) {
		var_797_bool = 1;
		return 0;
	}
	var_797_bool = 0;
	return 0;
}


func_5912(var_152_bool, var_153_object)
{
	var_154_string = ""; var_155_int = 0; var_156_bool = 0; var_157_int = 0; var_158_string = ""; var_159_string = ""; var_160_int = 0; var_161_bool = 0; var_162_int = 0; var_163_string = "";
	var_159_string = "c";
	var_160_int = 0;
	
Label_5915:
	if((int)1 != 0) {
		var_166_int = var_160_int + (int)1;
		var_167_int = var_159_string + var_166_int;
		@@var_153_object:HasProperty(var_167_int, var_161_bool);
		var_168_bool = var_161_bool == 0; //@nz
		if(var_168_bool != 0) {
		} else {
			var_160_int = var_160_int + (int)1;
			goto Label_5915;
		}
	}
	var_169_bool = var_160_int == 0; //@nz
	if(var_169_bool != 0) {
		var_152_bool = 0;
		return 10;
	}
	var_162_int = 0;
	var_171_bool = var_160_int > (int)1;
	if(var_171_bool != 0) {
		irand(var_162_int, var_160_int);
	}
	var_173_int = var_162_int + (int)1;
	var_174_int = var_159_string + var_173_int;
	@@var_153_object:GetProperty(var_174_int, var_163_string);
	var_175_bool = 0; var_176_string = "";
	var_163_string = var_176_string;
	func_6023(var_175_bool, var_176_string);
	var_175_bool = var_152_bool;
	return 10;
	
}


func_6429(var_58_object)
{
	Trace("tvirin is given");
	var_61_object = Obj(); var_62_string = ""; var_63_int = 0;
	var_58_object = var_61_object;
	func_6116(var_61_object, "tvirin", (int)1);
	return 0;
}


func_5408(var_2_object, var_1047_string)
{
	var_1048_bool = 0;
	func_6212(var_1048_bool);
	var_1049_bool = var_1048_bool == 0; //@nz
	if(var_1049_bool != 0) {
		return 0;
	}
	var_1050_bool = var_1047_string == var_2_object;
	if(var_1050_bool != 0) {
		return 0;
	}
	var_1051_string = ""; var_1052_bool = 0;
	var_1047_string = var_1051_string;
	var_1054_bool = var_1047_string == "";
	if(var_1054_bool != 0) {
		var_1052_bool = 0;
	} else {
		var_1052_bool = 1;
	}
	func_6008(var_1051_string, var_1052_bool);
	var_2_object = var_1047_string;
	return 0;
	
}


func_6947(var_804_bool)
{
	var_806_int = 0; var_807_string = "";
	func_6061(var_806_int, "ood10Andrei1");
	var_809_bool = var_806_int == (int)0;
	if(var_809_bool != 0) {
		var_804_bool = 1;
		return 0;
	}
	var_804_bool = 0;
	return 0;
}


func_6440()
{
	SetVariable("KnowAndrei", (int)1);
	return 0;
}


func_3881(var_0_object, var_1_object, var_2_object, var_3_string, var_873_object, var_874_object)
{
	var_0_object = var_874_object;
	var_1_object = var_873_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_880_bool = 0;
		var_880_bool = 0;
		var_881_bool = 0; var_882_object = Obj();
		var_882_object = var_1_object;
		func_6851(var_882_object);
		if(var_881_bool != 0) {
			var_887_bool = 0; var_888_object = Obj();
			var_888_object = var_1_object;
			func_6863(var_888_object);
			if(var_887_bool != 0) {
				var_880_bool = 1;
			}
		}
		if(var_880_bool != 0) {
			var_893_object = Obj(); var_894_object = Obj();
			var_893_object = var_1_object;
			var_894_object = var_0_object;
			func_6452();
			var_897_string = "";
			func_4011(var_874_object, "What");
			@@@var_0_object:SetMessage((int)514241);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539735, (int)41875, (int)41699);
			@@@var_0_object:AddReply((int)514242, (int)15461, (int)15460);
		} else {
				var_920_string = "";
				func_4011(var_874_object, "Neutral");
				@@@var_0_object:SetMessage((int)514258);
				@@@var_0_object:ClearReplies();
				var_922_bool = 0;
				var_922_bool = 0;
				var_923_bool = 0; var_924_object = Obj();
				var_924_object = var_1_object;
				func_6875(var_924_object);
				if(var_923_bool != 0) {
					var_929_bool = 0; var_930_object = Obj();
					var_930_object = var_1_object;
					func_6887(var_930_object);
					if(var_929_bool != 0) {
						var_922_bool = 1;
					}
				}
				if(var_922_bool != 0) {
					@@@var_0_object:AddReply((int)514259, (int)15479, (int)15478);
				}
				var_938_bool = 0;
				var_938_bool = 0;
				var_939_bool = 0; var_940_object = Obj();
				var_940_object = var_1_object;
				func_6899(var_940_object);
				if(var_939_bool != 0) {
					var_945_bool = 0; var_946_object = Obj();
					var_946_object = var_1_object;
					func_6875(var_946_object);
					if(var_945_bool != 0) {
						var_938_bool = 1;
					}
				}
				if(var_938_bool != 0) {
					@@@var_0_object:AddReply((int)539636, (int)41583, (int)41582);
				}
				@@@var_0_object:AddReply((int)514278, (int)-1, (int)15498);
				goto Label_3981;
		}
	}
Label_3981:
	var_912_bool = 0;
	func_6212(var_912_bool);
	if(var_912_bool != 0) {

	Label_3985:
		lshWaitForAnimEnd();
		var_913_string = var_3_string;
		if(var_913_string != 0) {
		} else {
			var_914_string = "";
			var_914_string = var_2_object;
			func_5992(var_914_string);
			goto Label_3985;
	}
		PlayAnimation("all", "idle");

	Label_4000:
		WaitForAnimEnd();
		var_917_string = var_3_string;
		if(var_917_string != 0) {
			goto Label_4010;
		}
		PlayAnimation("all", "idle");
		goto Label_4000;

	}
	goto Label_4010;
	
Label_4010:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xf2d";


func_6446()
{
	SetVariable("ood6Andrei1", (int)1);
	return 0;
}


func_6959()
{
	var_56_object = Obj(); var_57_object = Obj();
	CreateDiaryEntry(var_57_object, (int)195, (int)1, (int)515480);
	var_61_bool = 0; var_62_object = Obj(); var_63_int = 0;
	var_57_object = var_62_object;
	func_7024(var_61_bool, var_62_object, (int)192);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3376(var_0_object, var_1_object, var_2_object, var_3_string, var_781_object, var_782_object)
{
	var_0_object = var_782_object;
	var_1_object = var_781_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_788_bool = 0;
		var_788_bool = 0;
		var_789_bool = 0;
		var_789_bool = 0;
		var_790_bool = 0; var_791_object = Obj();
		var_791_object = var_1_object;
		func_6923(var_791_object);
		var_796_bool = var_790_bool == 0; //@nz
		if(var_796_bool != 0) {
			var_797_bool = 0; var_798_object = Obj();
			var_798_object = var_1_object;
			func_6935(var_798_object);
			var_803_bool = var_797_bool == 0; //@nz
			if(var_803_bool != 0) {
				var_789_bool = 1;
			}
		}
		if(var_789_bool != 0) {
			var_804_bool = 0; var_805_object = Obj();
			var_805_object = var_1_object;
			func_6947(var_805_object);
			if(var_804_bool != 0) {
				var_788_bool = 1;
			}
		}
		if(var_788_bool != 0) {
			var_810_object = Obj(); var_811_object = Obj();
			var_810_object = var_1_object;
			var_811_object = var_0_object;
			func_6510();
			var_814_string = "";
			func_3484(var_782_object, "Smile");
			@@@var_0_object:SetMessage((int)512960);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512961, (int)41443, (int)14166);
			@@@var_0_object:AddReply((int)539510, (int)41440, (int)41439);
		} else {
				var_837_string = "";
				func_3484(var_782_object, "Neutral");
				@@@var_0_object:SetMessage((int)512966);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)512967, (int)-1, (int)14172);
				@@@var_0_object:AddReply((int)539509, (int)-1, (int)41438);
				goto Label_3454;
		}
	}
Label_3454:
	var_829_bool = 0;
	func_6212(var_829_bool);
	if(var_829_bool != 0) {

	Label_3458:
		lshWaitForAnimEnd();
		var_830_string = var_3_string;
		if(var_830_string != 0) {
		} else {
			var_831_string = "";
			var_831_string = var_2_object;
			func_5992(var_831_string);
			goto Label_3458;
	}
		PlayAnimation("all", "idle");

	Label_3473:
		WaitForAnimEnd();
		var_834_string = var_3_string;
		if(var_834_string != 0) {
			goto Label_3483;
		}
		PlayAnimation("all", "idle");
		goto Label_3473;

	}
	goto Label_3483;
	
Label_3483:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xd34";


func_6452()
{
	SetVariable("ood11Andrei1", (int)1);
	return 0;
}


func_6458(var_52_object)
{
	SetVariable("d11q01", (int)4);
	func_6959();
	Trace("blueprint is given");
	var_80_object = Obj(); var_81_string = ""; var_82_int = 0;
	var_52_object = var_80_object;
	func_6116(var_80_object, "d11q01_blueprint", (int)1);
	return 0;
}


func_4923(var_2_object, var_346_string)
{
	var_347_bool = 0;
	func_6212(var_347_bool);
	var_348_bool = var_347_bool == 0; //@nz
	if(var_348_bool != 0) {
		return 0;
	}
	var_349_bool = var_346_string == var_2_object;
	if(var_349_bool != 0) {
		return 0;
	}
	var_350_string = ""; var_351_bool = 0;
	var_346_string = var_350_string;
	var_353_bool = var_346_string == "";
	if(var_353_bool != 0) {
		var_351_bool = 0;
	} else {
		var_351_bool = 1;
	}
	func_6008(var_350_string, var_351_bool);
	var_2_object = var_346_string;
	return 0;
	
}


func_6972()
{
	var_167_object = Obj(); var_168_object = Obj();
	CreateDiaryEntry(var_168_object, (int)59, (int)2, (int)512141);
	var_172_bool = 0; var_173_object = Obj(); var_174_int = 0;
	var_168_object = var_173_object;
	func_7024(var_172_bool, var_173_object, (int)11);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5949(var_183_bool, var_184_object)
{
	var_185_string = ""; var_186_int = 0; var_187_bool = 0; var_188_int = 0; var_189_string = ""; var_190_string = ""; var_191_int = 0; var_192_bool = 0; var_193_int = 0; var_194_string = "";
	var_196_int = 0;
	func_6146(var_196_int);
	var_202_int = "d" + var_196_int;
	var_190_string = var_202_int + "m";
	var_191_int = 0;
	
Label_5958:
	if((int)1 != 0) {
		var_206_int = var_191_int + (int)1;
		var_207_int = var_190_string + var_206_int;
		@@var_184_object:HasProperty(var_207_int, var_192_bool);
		var_208_bool = var_192_bool == 0; //@nz
		if(var_208_bool != 0) {
		} else {
			var_191_int = var_191_int + (int)1;
			goto Label_5958;
		}
	}
	var_209_bool = var_191_int == 0; //@nz
	if(var_209_bool != 0) {
		var_183_bool = 0;
		return 10;
	}
	var_193_int = 0;
	var_211_bool = var_191_int > (int)1;
	if(var_211_bool != 0) {
		irand(var_193_int, var_191_int);
	}
	var_213_int = var_193_int + (int)1;
	var_214_int = var_190_string + var_213_int;
	@@var_184_object:GetProperty(var_214_int, var_194_string);
	var_215_bool = 0; var_216_string = "";
	var_194_string = var_216_string;
	func_6023(var_215_bool, var_216_string);
	var_215_bool = var_183_bool;
	return 10;
	
}


func_6985()
{
	var_76_object = Obj(); var_77_object = Obj();
	CreateDiaryEntry(var_77_object, (int)58, (int)2, (int)512140);
	var_81_bool = 0; var_82_object = Obj(); var_83_int = 0;
	var_77_object = var_82_object;
	func_7024(var_81_bool, var_82_object, (int)11);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6476()
{
	SetVariable("ood11Andrei2", (int)1);
	return 0;
}


func_2892(var_0_object, var_690_int, var_691_object)
{
	var_693_object = Obj(); var_694_bool = 0; var_695_int = 0; var_696_bool = 0; var_697_object = Obj(); var_698_bool = 0; var_699_int = 0; var_700_bool = 0;
	var_0_object = var_691_object;
	var_701_bool = 0; var_702_object = Obj(); var_703_float = 0;
	var_691_object = var_702_object;
	func_5767(var_701_bool, var_702_object, (float)70.0);
	var_704_bool = var_701_bool == 0; //@nz
	if(var_704_bool != 0) {
		var_690_int = -2;
		return 8;
	}
	CreateDialog(var_697_object);
	var_705_int = 0;
	func_6206(var_705_int);
	@@var_697_object:SetNPCName(var_705_int);
	var_706_int = 0;
	func_6204(var_706_int);
	@@var_697_object:SetNPCDescription(var_706_int);
	var_707_string = "";
	func_6208(var_707_string);
	@@var_697_object:SetPhoto(var_707_string);
	var_708_string = "";
	func_6210(var_708_string);
	@@var_697_object:SetPhoto2(var_708_string);
	var_709_int = 0;
	func_7102(var_709_int);
	@@var_697_object:SetPlayerName(var_709_int);
	IsOverrideActive(var_698_bool);
	var_710_bool = var_698_bool;
	if(var_710_bool != 0) {
		var_690_int = -2;
		return 8;
	}
	DoDialog(var_697_object);
	var_711_bool = 0; var_712_object = Obj();
	func_6045(Obj());
	var_713_object = var_712_object;
	func_5854(var_711_bool, var_712_object);
	var_714_object = Obj(); var_715_object = Obj();
	var_691_object = var_714_object;
	var_697_object = var_715_object;
	TaskCall(7);
	func_2973(var_716_object, var_717_object, var_718_string, var_719_bool, var_714_object, var_715_object);
	TaskReturn();
	@@var_697_object:IsDialogEnd(var_700_bool);
	
Label_2955:
	var_753_bool = var_700_bool == 0; //@nz
	if(var_753_bool != 0) {
		sync();
		@@var_697_object:IsDialogEnd(var_700_bool);
		goto Label_2955;
	}
	var_691_object = Obj();
	func_5836();
	StopDialog(var_697_object);
	@@var_697_object:GetReturnValue((int)-1);
	var_699_int = var_690_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6482()
{
	SetVariable("ood11Andrei3", (int)1);
	return 0;
}


func_6998()
{
	var_229_object = Obj(); var_230_object = Obj();
	CreateDiaryEntry(var_230_object, (int)60, (int)2, (int)512142);
	var_234_bool = 0; var_235_object = Obj(); var_236_int = 0;
	var_230_object = var_235_object;
	func_7024(var_234_bool, var_235_object, (int)11);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6488(var_100_object)
{
	var_101_object = Obj(); var_102_string = ""; var_103_float = 0;
	func_7052(Obj());
	var_104_object = var_101_object;
	func_7069(var_101_object, "pt_map_petr", (float)2);
	var_124_object = Obj();
	func_7052(var_124_object);
	@@var_100_object:ShowMap(var_124_object);
	return 0;
}


func_351(var_0_object, var_374_int, var_375_object)
{
	var_377_object = Obj(); var_378_bool = 0; var_379_int = 0; var_380_bool = 0; var_381_object = Obj(); var_382_bool = 0; var_383_int = 0; var_384_bool = 0;
	var_0_object = var_375_object;
	var_385_bool = 0; var_386_object = Obj(); var_387_float = 0;
	var_375_object = var_386_object;
	func_5767(var_385_bool, var_386_object, (float)70.0);
	var_388_bool = var_385_bool == 0; //@nz
	if(var_388_bool != 0) {
		var_374_int = -2;
		return 8;
	}
	CreateDialog(var_381_object);
	var_389_int = 0;
	func_6206(var_389_int);
	@@var_381_object:SetNPCName(var_389_int);
	var_390_int = 0;
	func_6204(var_390_int);
	@@var_381_object:SetNPCDescription(var_390_int);
	var_391_string = "";
	func_6208(var_391_string);
	@@var_381_object:SetPhoto(var_391_string);
	var_392_string = "";
	func_6210(var_392_string);
	@@var_381_object:SetPhoto2(var_392_string);
	var_393_int = 0;
	func_7102(var_393_int);
	@@var_381_object:SetPlayerName(var_393_int);
	IsOverrideActive(var_382_bool);
	var_394_bool = var_382_bool;
	if(var_394_bool != 0) {
		var_374_int = -2;
		return 8;
	}
	DoDialog(var_381_object);
	var_395_bool = 0; var_396_object = Obj();
	func_6045(Obj());
	var_397_object = var_396_object;
	func_5854(var_395_bool, var_396_object);
	var_398_object = Obj(); var_399_object = Obj();
	var_375_object = var_398_object;
	var_381_object = var_399_object;
	TaskCall(3);
	func_432(var_400_object, var_401_object, var_402_string, var_403_bool, var_398_object, var_399_object);
	TaskReturn();
	@@var_381_object:IsDialogEnd(var_384_bool);
	
Label_414:
	var_545_bool = var_384_bool == 0; //@nz
	if(var_545_bool != 0) {
		sync();
		@@var_381_object:IsDialogEnd(var_384_bool);
		goto Label_414;
	}
	var_375_object = Obj();
	func_5836();
	StopDialog(var_381_object);
	@@var_381_object:GetReturnValue((int)-1);
	var_383_int = var_374_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7011(var_70_object)
{
	var_71_object = Obj(); var_72_object = Obj();
	GetDiaryRoot(var_72_object);
	var_73_bool = var_72_object == 0; //@nz
	if(var_73_bool != 0) {
		Trace("Can't retrieve diary root");
		var_70_object = 0;
		return 2;
	}
	var_72_object = var_70_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5476(var_0_object)
{
	var_46_bool = 0;
	func_5762(var_46_bool);
	var_49_bool = var_46_bool == 0; //@nz
	if(var_49_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_5485:
	func_5652();
	goto Label_5485;
}
EMIT "Return(); Pop(0)";


func_5992(var_276_string)
{
	var_277_bool = 0; var_278_float = 0; var_279_float = 0; var_280_bool = 0; var_281_float = 0; var_282_float = 0;
	lshHasAnimation(var_280_bool, var_276_string);
	var_283_bool = var_280_bool;
	if(var_283_bool != 0) {
		lshGetAnimTimes(var_276_string, var_281_float, var_282_float);
		lshPlayAnimation(var_281_float, var_282_float, (bool)0);
	} else {
		var_286_int = "Can't find lsh animation : " + var_276_string;
		Trace(var_286_int);
	}
	return 6;
	
}


func_6504()
{
	SetVariable("ood3Andrei1", (int)1);
	return 0;
}


func_6510()
{
	SetVariable("ood10Andrei1", (int)1);
	return 0;
}


func_7024(var_61_bool, var_62_object, var_63_int)
{
	var_64_object = Obj(); var_65_object = Obj(); var_66_int = 0; var_67_object = Obj(); var_68_object = Obj(); var_69_int = 0;
	func_7011(Obj());
	var_70_object = var_67_object;
	@@var_67_object:Find(var_63_int, var_68_object);
	var_75_bool = var_68_object == 0; //@nz
	if(var_75_bool != 0) {
		var_77_int = "Can't find diary parent with id: " + var_63_int;
		Trace(var_77_int);
		var_61_bool = 0;
		return 6;
	}
	@@var_68_object:AddChild(var_62_object);
	SendWorldWndMessage((int)7);
	@@var_62_object:GetCategory(var_69_int);
	SetDiarySection(var_69_int);
	var_61_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_5490(var_71_bool)
{
	var_72_object = Obj(); var_73_object = Obj();
	FindActor(var_73_object, "player");
	var_75_bool = var_73_object == 0; //@nz
	if(var_75_bool != 0) {
		var_71_bool = 0;
		return 2;
	}
	var_76_bool = 0; var_77_object = Obj();
	var_73_object = var_77_object;
	func_5753(var_76_bool, var_77_object);
	var_76_bool = var_71_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_6516(var_618_bool)
{
	var_620_int = 0; var_621_string = "";
	func_6061(var_620_int, "ood3Andrei2");
	var_623_bool = var_620_int == (int)0;
	if(var_623_bool != 0) {
		var_618_bool = 1;
		return 0;
	}
	var_618_bool = 0;
	return 0;
}


func_6008(var_251_string, var_252_bool)
{
	var_255_bool = 0; var_256_float = 0; var_257_float = 0; var_258_bool = 0; var_259_float = 0; var_260_float = 0;
	lshHasAnimation(var_258_bool, var_251_string);
	var_261_bool = var_258_bool;
	if(var_261_bool != 0) {
		lshGetAnimTimes(var_251_string, var_259_float, var_260_float);
		lshPlayAnimation(var_259_float, var_260_float, var_252_bool);
	} else {
		var_263_int = "Can't find lsh animation : " + var_251_string;
		Trace(var_263_int);
	}
	return 6;
	
}


func_4987(var_0_object, var_957_int, var_958_object)
{
	var_960_object = Obj(); var_961_bool = 0; var_962_int = 0; var_963_bool = 0; var_964_object = Obj(); var_965_bool = 0; var_966_int = 0; var_967_bool = 0;
	var_0_object = var_958_object;
	var_968_bool = 0; var_969_object = Obj(); var_970_float = 0;
	var_958_object = var_969_object;
	func_5767(var_968_bool, var_969_object, (float)70.0);
	var_971_bool = var_968_bool == 0; //@nz
	if(var_971_bool != 0) {
		var_957_int = -2;
		return 8;
	}
	CreateDialog(var_964_object);
	var_972_int = 0;
	func_6206(var_972_int);
	@@var_964_object:SetNPCName(var_972_int);
	var_973_int = 0;
	func_6204(var_973_int);
	@@var_964_object:SetNPCDescription(var_973_int);
	var_974_string = "";
	func_6208(var_974_string);
	@@var_964_object:SetPhoto(var_974_string);
	var_975_string = "";
	func_6210(var_975_string);
	@@var_964_object:SetPhoto2(var_975_string);
	var_976_int = 0;
	func_7102(var_976_int);
	@@var_964_object:SetPlayerName(var_976_int);
	IsOverrideActive(var_965_bool);
	var_977_bool = var_965_bool;
	if(var_977_bool != 0) {
		var_957_int = -2;
		return 8;
	}
	DoDialog(var_964_object);
	var_978_bool = 0; var_979_object = Obj();
	func_6045(Obj());
	var_980_object = var_979_object;
	func_5854(var_978_bool, var_979_object);
	var_981_object = Obj(); var_982_object = Obj();
	var_958_object = var_981_object;
	var_964_object = var_982_object;
	TaskCall(15);
	func_5068(var_983_object, var_984_object, var_985_string, var_986_bool, var_981_object, var_982_object);
	TaskReturn();
	@@var_964_object:IsDialogEnd(var_967_bool);
	
Label_5050:
	var_1014_bool = var_967_bool == 0; //@nz
	if(var_1014_bool != 0) {
		sync();
		@@var_964_object:IsDialogEnd(var_967_bool);
		goto Label_5050;
	}
	var_958_object = Obj();
	func_5836();
	StopDialog(var_964_object);
	@@var_964_object:GetReturnValue((int)-1);
	var_966_int = var_957_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6528(var_627_bool)
{
	var_629_int = 0; var_630_string = "";
	func_6061(var_629_int, "ood3Andrei3");
	var_632_bool = var_629_int == (int)0;
	if(var_632_bool != 0) {
		var_627_bool = 1;
		return 0;
	}
	var_627_bool = 0;
	return 0;
}


func_5505(var_0_object)
{
	var_123_float = GetByIndex(var_0_object, 0);
	var_124_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_123_float, var_124_float);
	return 0;
}


func_5510(var_54_bool)
{
	var_55_object = Obj(); var_56_bool = 0; var_57_object = Obj(); var_58_bool = 0;
	FindActor(var_57_object, "player");
	var_60_bool = var_57_object == 0; //@nz
	if(var_60_bool != 0) {
		var_54_bool = 0;
		return 4;
	}
	var_61_float = 0; var_62_object = Obj();
	var_57_object = var_62_object;
	func_5728(var_61_float, var_62_object);
	var_70_bool = var_61_float > (float)90000.0;
	if(var_70_bool != 0) {
		var_54_bool = 0;
		return 4;
	}
	CanSee(var_58_bool, var_57_object);
	var_58_bool = var_54_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_6023(var_175_bool, var_176_string)
{
	var_177_bool = 0; var_178_bool = 0;
	var_179_bool = 0;
	func_6212(var_179_bool);
	if(var_179_bool != 0) {
		lshHasSpeech(var_178_bool, var_176_string);
		var_180_bool = var_178_bool;
		if(var_180_bool != 0) {
			lshPlaySpeech(var_176_string);
			var_175_bool = 1;
			return 2;
		}
	}
	var_175_bool = 0;
	return 2;
}


func_6540(var_636_bool)
{
	var_638_int = 0; var_639_string = "";
	func_6061(var_638_int, "ood3Andrei4");
	var_641_bool = var_638_int == (int)0;
	if(var_641_bool != 0) {
		var_636_bool = 1;
		return 0;
	}
	var_636_bool = 0;
	return 0;
}


func_7052(var_122_object)
{
	var_123_object = Obj(); var_124_object = Obj(); var_125_object = Obj(); var_126_object = Obj();
	GetMainOutdoorScene(var_125_object);
	var_127_bool = var_125_object == 0; //@ne
	if(var_127_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_126_object = 0;
		var_126_object = var_122_object;
		return 4;
	}
	@@var_125_object:GetMap(var_126_object);
	var_126_object = var_122_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1935(var_2_object, var_580_string)
{
	var_581_bool = 0;
	func_6212(var_581_bool);
	var_582_bool = var_581_bool == 0; //@nz
	if(var_582_bool != 0) {
		return 0;
	}
	var_583_bool = var_580_string == var_2_object;
	if(var_583_bool != 0) {
		return 0;
	}
	var_584_string = ""; var_585_bool = 0;
	var_580_string = var_584_string;
	var_587_bool = var_580_string == "";
	if(var_587_bool != 0) {
		var_585_bool = 0;
	} else {
		var_585_bool = 1;
	}
	func_6008(var_584_string, var_585_bool);
	var_2_object = var_580_string;
	return 0;
	
}


func_6038()
{
	var_49_bool = 0;
	func_6212(var_49_bool);
	if(var_49_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_6552(var_645_bool)
{
	var_647_int = 0; var_648_string = "";
	func_6061(var_647_int, "ood3Andrei5");
	var_650_bool = var_647_int == (int)0;
	if(var_650_bool != 0) {
		var_645_bool = 1;
		return 0;
	}
	var_645_bool = 0;
	return 0;
}


func_3484(var_2_object, var_814_string)
{
	var_815_bool = 0;
	func_6212(var_815_bool);
	var_816_bool = var_815_bool == 0; //@nz
	if(var_816_bool != 0) {
		return 0;
	}
	var_817_bool = var_814_string == var_2_object;
	if(var_817_bool != 0) {
		return 0;
	}
	var_818_string = ""; var_819_bool = 0;
	var_814_string = var_818_string;
	var_821_bool = var_814_string == "";
	if(var_821_bool != 0) {
		var_819_bool = 0;
	} else {
		var_819_bool = 1;
	}
	func_6008(var_818_string, var_819_bool);
	var_2_object = var_814_string;
	return 0;
	
}


func_6045(var_143_object)
{
	var_144_object = Obj(); var_145_object = Obj();
	self(var_145_object);
	var_145_object = var_143_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2973(var_0_object, var_1_object, var_2_object, var_3_string, var_714_object, var_715_object)
{
	var_0_object = var_715_object;
	var_1_object = var_714_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_721_string = "";
		func_3041(var_715_object, "Neutral");
		@@@var_0_object:SetMessage((int)513720);
		@@@var_0_object:ClearReplies();
		var_730_bool = 0; var_731_object = Obj();
		var_731_object = var_1_object;
		func_6827(var_731_object);
		if(var_730_bool != 0) {
			@@@var_0_object:AddReply((int)513721, (int)13787, (int)14987);
		}
		@@@var_0_object:AddReply((int)513722, (int)-1, (int)14988);
		@@@var_0_object:AddReply((int)536132, (int)-1, (int)37891);
		goto Label_3011;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xba1";
	}
Label_3011:
	var_745_bool = 0;
	func_6212(var_745_bool);
	if(var_745_bool != 0) {

	Label_3015:
		lshWaitForAnimEnd();
		var_746_string = var_3_string;
		if(var_746_string != 0) {
		} else {
			var_747_string = "";
			var_747_string = var_2_object;
			func_5992(var_747_string);
			goto Label_3015;
	}
		PlayAnimation("all", "idle");

	Label_3030:
		WaitForAnimEnd();
		var_750_string = var_3_string;
		if(var_750_string != 0) {
			goto Label_3040;
		}
		PlayAnimation("all", "idle");
		goto Label_3030;
	}
	goto Label_3040;
	
Label_3040:
	return 0;
	
}


func_5532()
{
	var_1074_float = 0; var_1075_float = 0;
	rand(var_1075_float, (int)8, (int)16);
	SetTimer((int)10, var_1075_float);
	return 2;
}


func_7069(var_119_object, var_120_string, var_121_float)
{
	var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_object = Obj(); var_132_bool = 0; var_133_cvector = CVector(0,0,0); var_134_cvector = CVector(0,0,0); var_135_object = Obj(); var_136_bool = 0;
	GetMainOutdoorScene(var_135_object);
	var_137_bool = var_135_object == 0; //@ne
	if(var_137_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_135_object:GetLocator(var_120_string, var_136_bool, var_133_cvector, var_134_cvector);
	var_139_bool = var_136_bool == 0; //@nz
	if(var_139_bool != 0) {
		var_141_int = "Warning: outdoor scene locator " + var_120_string;
		var_143_int = var_141_int + " doesnt exist";
		Trace(var_143_int);
	}
	@@var_135_object:GetMap(var_119_object);
	var_144_bool = var_119_object == 0; //@ne
	if(var_144_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_146_float = GetByIndex(var_133_cvector, 0);
	var_147_float = GetByIndex(var_133_cvector, 2);
	@@var_119_object:SetMapParams(var_146_float, var_147_float, var_121_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_6051(var_107_cvector, var_108_cvector)
{
	var_110_float = 0; var_111_float = 0;
	var_112_int = var_108_cvector | var_108_cvector;
	var_111_float = sqrt(var_112_int);
	var_113_float = 9.999999974752427e-07;
	var_114_bool = var_111_float < var_113_float;
	if(var_114_bool != 0) {
		var_107_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_107_cvector = var_108_cvector / var_111_float;
	return 2;
}


func_6564(var_654_bool)
{
	var_656_int = 0; var_657_string = "";
	func_6061(var_656_int, "ood3Andrei6");
	var_659_bool = var_656_int == (int)0;
	if(var_659_bool != 0) {
		var_654_bool = 1;
		return 0;
	}
	var_654_bool = 0;
	return 0;
}


func_5541()
{
	KillTimer((int)10);
	return 0;
}


func_4011(var_2_object, var_897_string)
{
	var_898_bool = 0;
	func_6212(var_898_bool);
	var_899_bool = var_898_bool == 0; //@nz
	if(var_899_bool != 0) {
		return 0;
	}
	var_900_bool = var_897_string == var_2_object;
	if(var_900_bool != 0) {
		return 0;
	}
	var_901_string = ""; var_902_bool = 0;
	var_897_string = var_901_string;
	var_904_bool = var_897_string == "";
	if(var_904_bool != 0) {
		var_902_bool = 0;
	} else {
		var_902_bool = 1;
	}
	func_6008(var_901_string, var_902_bool);
	var_2_object = var_897_string;
	return 0;
	
}


func_6061(var_417_int, var_418_string)
{
	var_419_int = 0; var_420_int = 0;
	GetVariable(var_418_string, var_420_int);
	var_420_int = var_417_int;
	return 2;
}


func_432(var_0_object, var_1_object, var_2_object, var_3_string, var_398_object, var_399_object)
{
	var_0_object = var_399_object;
	var_1_object = var_398_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_405_string = "";
		func_618(var_399_object, "Neutral");
		@@@var_0_object:SetMessage((int)506864);
		@@@var_0_object:ClearReplies();
		var_414_bool = 0;
		var_414_bool = 0;
		var_415_bool = 0; var_416_object = Obj();
		var_416_object = var_1_object;
		func_6695(var_416_object);
		if(var_415_bool != 0) {
			var_423_bool = 0; var_424_object = Obj();
			var_424_object = var_1_object;
			func_6767(var_424_object);
			if(var_423_bool != 0) {
				var_414_bool = 1;
			}
		}
		if(var_414_bool != 0) {
			@@@var_0_object:AddReply((int)506865, (int)7572, (int)7571);
		}
		var_432_bool = 0;
		var_432_bool = 0;
		var_433_bool = 0; var_434_object = Obj();
		var_434_object = var_1_object;
		func_6707(var_434_object);
		if(var_433_bool != 0) {
			var_439_bool = 0; var_440_object = Obj();
			var_440_object = var_1_object;
			func_6779(var_440_object);
			if(var_439_bool != 0) {
				var_432_bool = 1;
			}
		}
		if(var_432_bool != 0) {
			@@@var_0_object:AddReply((int)506868, (int)7575, (int)7574);
		}
		var_448_bool = 0;
		var_448_bool = 0;
		var_449_bool = 0; var_450_object = Obj();
		var_450_object = var_1_object;
		func_6719(var_450_object);
		if(var_449_bool != 0) {
			var_455_bool = 0; var_456_object = Obj();
			var_456_object = var_1_object;
			func_6791(var_456_object);
			if(var_455_bool != 0) {
				var_448_bool = 1;
			}
		}
		if(var_448_bool != 0) {
			@@@var_0_object:AddReply((int)506870, (int)7577, (int)7576);
		}
		var_464_bool = 0;
		var_464_bool = 0;
		var_465_bool = 0; var_466_object = Obj();
		var_466_object = var_1_object;
		func_6731(var_466_object);
		if(var_465_bool != 0) {
			var_471_bool = 0; var_472_object = Obj();
			var_472_object = var_1_object;
			func_6803(var_472_object);
			if(var_471_bool != 0) {
				var_464_bool = 1;
			}
		}
		if(var_464_bool != 0) {
			@@@var_0_object:AddReply((int)506874, (int)7581, (int)7580);
		}
		var_480_bool = 0;
		var_480_bool = 0;
		var_481_bool = 0; var_482_object = Obj();
		var_482_object = var_1_object;
		func_6743(var_482_object);
		if(var_481_bool != 0) {
			var_487_bool = 0; var_488_object = Obj();
			var_488_object = var_1_object;
			func_6755(var_488_object);
			if(var_487_bool != 0) {
				var_480_bool = 1;
			}
		}
		if(var_480_bool != 0) {
			@@@var_0_object:AddReply((int)506872, (int)7579, (int)7578);
		}
		var_496_bool = 0;
		var_496_bool = 0;
		var_497_bool = 0; var_498_object = Obj();
		var_498_object = var_1_object;
		func_6625(var_498_object);
		if(var_497_bool != 0) {
			var_513_bool = 0; var_514_object = Obj();
			var_514_object = var_1_object;
			func_6659(var_514_object);
			if(var_513_bool != 0) {
				var_496_bool = 1;
			}
		}
		if(var_496_bool != 0) {
			@@@var_0_object:AddReply((int)533692, (int)10095, (int)35231);
		}
		var_522_bool = 0;
		var_522_bool = 0;
		var_523_bool = 0; var_524_object = Obj();
		var_524_object = var_1_object;
		func_6625(var_524_object);
		if(var_523_bool != 0) {
			var_525_bool = 0; var_526_object = Obj();
			var_526_object = var_1_object;
			func_6671(var_526_object);
			if(var_525_bool != 0) {
				var_522_bool = 1;
			}
		}
		if(var_522_bool != 0) {
			@@@var_0_object:AddReply((int)525035, (int)26389, (int)26388);
		}
		@@@var_0_object:AddReply((int)507531, (int)-1, (int)8313);
		goto Label_588;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1b4";
	}
Label_588:
	var_537_bool = 0;
	func_6212(var_537_bool);
	if(var_537_bool != 0) {

	Label_592:
		lshWaitForAnimEnd();
		var_538_string = var_3_string;
		if(var_538_string != 0) {
		} else {
			var_539_string = "";
			var_539_string = var_2_object;
			func_5992(var_539_string);
			goto Label_592;
	}
		PlayAnimation("all", "idle");

	Label_607:
		WaitForAnimEnd();
		var_542_string = var_3_string;
		if(var_542_string != 0) {
			goto Label_617;
		}
		PlayAnimation("all", "idle");
		goto Label_607;
	}
	goto Label_617;
	
Label_617:
	return 0;
	
}


func_6576(var_663_bool)
{
	var_665_int = 0; var_666_string = "";
	func_6061(var_665_int, "ood3Andrei7");
	var_668_bool = var_665_int == (int)0;
	if(var_668_bool != 0) {
		var_663_bool = 1;
		return 0;
	}
	var_663_bool = 0;
	return 0;
}


func_6066(var_96_int, var_97_int)
{
	var_98_object = Obj(); var_99_object = Obj();
	CreateIntVector(var_99_object);
	@@var_99_object:add(var_96_int);
	@@var_99_object:add(var_97_int);
	SendWorldWndMessage((int)3, var_99_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6588(var_596_bool)
{
	var_598_bool = 0;
	var_598_bool = 0;
	var_599_bool = 0;
	var_599_bool = 0;
	var_600_int = 0; var_601_string = "";
	func_6061(var_600_int, "d3q01");
	var_603_bool = var_600_int == (int)0;
	var_604_bool = var_603_bool == 0; //@nz
	if(var_604_bool != 0) {
		var_605_int = 0; var_606_string = "";
		func_6061(var_605_int, "d3q01");
		var_608_bool = var_605_int == (int)1000;
		var_609_bool = var_608_bool == 0; //@nz
		if(var_609_bool != 0) {
			var_599_bool = 1;
		}
	}
	if(var_599_bool != 0) {
		var_610_int = 0; var_611_string = "";
		func_6061(var_610_int, "d3q01");
		var_613_bool = var_610_int == (int)-1;
		var_614_bool = var_613_bool == 0; //@nz
		if(var_614_bool != 0) {
			var_598_bool = 1;
		}
	}
	if(var_598_bool != 0) {
		var_596_bool = 1;
		return 0;
	}
	var_596_bool = 0;
	return 0;
}


func_7102(var_132_int)
{
	var_133_int = 0; var_134_int = 0;
	GetVariable("branch", var_134_int);
	var_137_bool = var_134_int == (int)0;
	if(var_137_bool != 0) {
		var_132_int = 1;
		return 2;
	EMIT "GOTO 0x1bcd";
	}
	var_139_bool = var_134_int == (int)1;
	if(var_139_bool != 0) {
		var_132_int = 2;
		return 2;
	}
	var_132_int = 3;
	return 2;
}


func_6078(var_185_object, var_186_int)
{
	var_187_int = 0; var_188_int = 0;
	var_189_object = Obj(); var_190_string = ""; var_191_int = 0;
	var_185_object = var_189_object;
	var_186_int = var_191_int;
	func_5736(var_189_object, "money", var_191_int);
	var_196_bool = var_186_int > (int)0;
	if(var_196_bool != 0) {
		GetInvItemByName(var_188_int, "Money");
		var_198_int = 0; var_199_int = 0;
		var_188_int = var_198_int;
		var_186_int = var_199_int;
		func_6066(var_198_int, var_199_int);
	}
	return 2;
}


func_5068(var_0_object, var_1_object, var_2_object, var_3_string, var_981_object, var_982_object)
{
	var_0_object = var_982_object;
	var_1_object = var_981_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_988_string = "";
		func_5131(var_982_object, "What");
		@@@var_0_object:SetMessage((int)535668);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535669, (int)42112, (int)37355);
		@@@var_0_object:AddReply((int)540002, (int)-1, (int)41973);
		@@@var_0_object:AddReply((int)540201, (int)-1, (int)42179);
		goto Label_5101;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x13d0";
	}
Label_5101:
	var_1006_bool = 0;
	func_6212(var_1006_bool);
	if(var_1006_bool != 0) {

	Label_5105:
		lshWaitForAnimEnd();
		var_1007_string = var_3_string;
		if(var_1007_string != 0) {
		} else {
			var_1008_string = "";
			var_1008_string = var_2_object;
			func_5992(var_1008_string);
			goto Label_5105;
	}
		PlayAnimation("all", "idle");

	Label_5120:
		WaitForAnimEnd();
		var_1011_string = var_3_string;
		if(var_1011_string != 0) {
			goto Label_5130;
		}
		PlayAnimation("all", "idle");
		goto Label_5120;
	}
	goto Label_5130;
	
Label_5130:
	return 0;
	
}


func_7119(var_64_object)
{
	var_65_int = 0; var_66_int = 0;
	GetVariable("mt_andrei", var_66_int);
	var_68_bool = var_66_int == 0; //@nz
	if(var_68_bool != 0) {
		var_69_int = 0; var_70_object = Obj();
		var_64_object = var_70_object;
		TaskCall(0);
		func_0(var_71_object, var_69_int, var_70_object);
		TaskReturn();
		SetVariable("mt_andrei", (int)1);
	}
	var_303_bool = 0; var_304_int = 0;
	func_6161(var_303_bool, (int)2);
	if(var_303_bool != 0) {
		var_318_int = 0; var_319_object = Obj();
		var_64_object = var_319_object;
		TaskCall(12);
		func_4791(var_320_object, var_318_int, var_319_object);
		TaskReturn();
		return 2;
	}
	var_371_bool = 0; var_372_int = 0;
	func_6155(var_371_bool, (int)2);
	if(var_371_bool != 0) {
		var_374_int = 0; var_375_object = Obj();
		var_64_object = var_375_object;
		TaskCall(2);
		func_351(var_376_object, var_374_int, var_375_object);
		TaskReturn();
		return 2;
	}
	var_547_bool = 0; var_548_int = 0;
	func_6155(var_547_bool, (int)3);
	if(var_547_bool != 0) {
		var_549_int = 0; var_550_object = Obj();
		var_64_object = var_550_object;
		TaskCall(4);
		func_1717(var_551_object, var_549_int, var_550_object);
		TaskReturn();
		return 2;
	}
	var_688_bool = 0; var_689_int = 0;
	func_6155(var_688_bool, (int)6);
	if(var_688_bool != 0) {
		var_690_int = 0; var_691_object = Obj();
		var_64_object = var_691_object;
		TaskCall(6);
		func_2892(var_692_object, var_690_int, var_691_object);
		TaskReturn();
		return 2;
	}
	var_755_bool = 0; var_756_int = 0;
	func_6155(var_755_bool, (int)10);
	if(var_755_bool != 0) {
		var_757_int = 0; var_758_object = Obj();
		var_64_object = var_758_object;
		TaskCall(8);
		func_3295(var_759_object, var_757_int, var_758_object);
		TaskReturn();
		return 2;
	}
	var_847_bool = 0; var_848_int = 0;
	func_6155(var_847_bool, (int)11);
	if(var_847_bool != 0) {
		var_849_int = 0; var_850_object = Obj();
		var_64_object = var_850_object;
		TaskCall(10);
		func_3800(var_851_object, var_849_int, var_850_object);
		TaskReturn();
		return 2;
	}
	var_955_bool = 0; var_956_int = 0;
	func_6155(var_955_bool, (int)12);
	if(var_955_bool != 0) {
		var_957_int = 0; var_958_object = Obj();
		var_64_object = var_958_object;
		TaskCall(14);
		func_4987(var_959_object, var_957_int, var_958_object);
		TaskReturn();
		return 2;
	}
	var_1016_int = 0; var_1017_object = Obj();
	var_64_object = var_1017_object;
	TaskCall(16);
	func_5269(var_1018_object, var_1016_int, var_1017_object);
	TaskReturn();
	return 2;
}


func_6097(var_85_object, var_86_object, var_87_int)
{
	var_88_int = 0; var_89_int = 0; var_90_bool = 0; var_91_int = 0; var_92_int = 0; var_93_bool = 0;
	@@var_86_object:GetItemID(var_91_int);
	GetInvItemProperty(var_92_int, var_91_int, "Category");
	@@var_85_object:AddItem(var_93_bool, var_86_object, var_92_int, var_87_int);
	var_95_bool = var_93_bool == 0; //@nz
	if(var_95_bool != 0) {
		@@var_85_object:DropItems(var_86_object, var_87_int);
	} else {
		var_96_int = 0; var_97_int = 0;
		var_91_int = var_96_int;
		var_87_int = var_97_int;
		func_6066(var_96_int, var_97_int);
	}
	return 6;
	
}


func_6625(var_497_bool)
{
	var_499_bool = 0;
	var_499_bool = 0;
	var_500_bool = 0;
	var_500_bool = 0;
	var_501_int = 0; var_502_string = "";
	func_6061(var_501_int, "d2q01");
	var_504_bool = var_501_int != (int)0;
	if(var_504_bool != 0) {
		var_505_int = 0; var_506_string = "";
		func_6061(var_505_int, "d2q01");
		var_508_bool = var_505_int != (int)1000;
		if(var_508_bool != 0) {
			var_500_bool = 1;
		}
	}
	if(var_500_bool != 0) {
		var_509_int = 0; var_510_string = "";
		func_6061(var_509_int, "d2q01");
		var_512_bool = var_509_int != (int)-1;
		if(var_512_bool != 0) {
			var_499_bool = 1;
		}
	}
	if(var_499_bool != 0) {
		var_497_bool = 1;
		return 0;
	}
	var_497_bool = 0;
	return 0;
}


func_3041(var_2_object, var_721_string)
{
	var_722_bool = 0;
	func_6212(var_722_bool);
	var_723_bool = var_722_bool == 0; //@nz
	if(var_723_bool != 0) {
		return 0;
	}
	var_724_bool = var_721_string == var_2_object;
	if(var_724_bool != 0) {
		return 0;
	}
	var_725_string = ""; var_726_bool = 0;
	var_721_string = var_725_string;
	var_728_bool = var_721_string == "";
	if(var_728_bool != 0) {
		var_726_bool = 0;
	} else {
		var_726_bool = 1;
	}
	func_6008(var_725_string, var_726_bool);
	var_2_object = var_721_string;
	return 0;
	
}


func_6116(var_80_object, var_81_string, var_82_int)
{
	var_83_object = Obj(); var_84_object = Obj();
	CreateInvItem(var_84_object);
	@@var_84_object:SetItemName(var_81_string);
	var_85_object = Obj(); var_86_object = Obj(); var_87_int = 0;
	var_80_object = var_85_object;
	var_84_object = var_86_object;
	var_82_int = var_87_int;
	func_6097(var_85_object, var_86_object, var_87_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6129(var_237_bool, var_238_string, var_239_string)
{
	var_240_object = Obj(); var_241_object = Obj();
	FindActor(var_241_object, var_238_string);
	var_242_bool = var_241_object == 0; //@ne
	if(var_242_bool != 0) {
		var_237_bool = 0;
		return 2;
	}
	Trigger(var_241_object, var_239_string);
	var_237_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_6141(var_73_float)
{
	var_74_float = 0; var_75_float = 0;
	GetGameTime(var_75_float);
	var_75_float = var_73_float;
	return 2;
}


