// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetMainOutdoorScene/1,AddBlankActor/4,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,GetInvItemProperty/3,CreateInvItem/1,SendWorldWndMessage/1,CreateFloatVector/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Sympathy|W:Fear|W:Confusion|W:Tiredness|W:player|A:GetPosition|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|W:m|W:Can't find lsh animation : |W:.bin|A:add|W:money|W:Money|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:reputation|W:ui/NPC_Lara.png|W:ui/NPC_Lara_b.png|W:k2q02|W:ook2Lara1|W:k2q03|W:k2q03Arfist|W:pt_map_k2q03_arfist|A:AddMark|W:quest_k2_03|W:place_arfist|W:completed|W:k4q03|W:k4q03LaraGotoAlexandr|W:pt_map_alexandr|W:quest_k4_03|W:ook4Lara1|W:ook4Lara2|W:smoked_meat2 is given|W:smoked_meat|W:ook6Lara1|W:money2000 is given|W:k11q01SoulCount|W:ook11Lara1|A:ShowMap|W:playsound|W:givemoney|W:giveitem|W:k2LaraVisit|W:k4LaraVisit|W:etorfin is given|W:etorfin|W:k6q01|W:k6q01DankoPos|W:k11q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0xb80
// @RUN_TASK: 14
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xf6 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x431 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x54e vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x731 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x888 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9f9 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb56 vars=int,int
// @TASK_14: vars=cvector params=0
// @EVENT_7: op=0xbcc vars=int
// @EVENT_6: op=0xbf2 vars=
// @EVENT_5: op=0xc01 vars=
// @EVENT_45: op=0xc0e vars=bool
// @EVENT_0: op=0xc1a vars=object
// @PE: 0x51,0xe0,0xf6,0x3e1,0x41b,0x431,0x4ac,0x538,0x54e,0x6c5,0x71b,0x731,0x82a,0x872,0x888,0x9a4,0x9e3,0x9f9,0xb06,0xb40,0xb56,0xbcc,0xbf2,0xc0e,0xdf2,0xe4c,0xe93,0xebb,0xec2,0xecb,0xef4,0xf1c,0xf22,0xf28,0xf32,0xf3d,0xf43,0xf48,0xf85,0xf8b,0xf9b,0xfa1,0xfa7,0xfad,0xfb3,0xfc3,0xfce,0xfda,0xfe6,0xff2,0xffe,0x100a,0x1016,0x1022,0x102e,0x103a,0x1046,0x1052,0x105e,0x106a,0x1076,0x11a4

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3547();
		var_41_bool = var_37_cvector == (int)26691;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_3793();
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_3979(var_108_object);
		}
		var_134_bool = var_37_cvector == (int)41323;
		if(var_134_bool != 0) {
			var_135_object = Obj(); var_136_object = Obj();
			var_135_object = var_1_object;
			var_136_object = var_0_object;
			func_3793();
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_object;
			func_3979(var_138_object);
		}
		var_140_bool = var_37_cvector == (int)41324;
		if(var_140_bool != 0) {
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_object;
			func_3793();
			var_143_object = Obj(); var_144_object = Obj();
			var_143_object = var_1_object;
			var_144_object = var_0_object;
			func_3979(var_144_object);
		}
		var_146_bool = var_37_cvector == (int)26662;
		if(var_146_bool != 0) {
			var_147_object = Obj(); var_148_object = Obj();
			var_147_object = var_1_object;
			var_148_object = var_0_object;
			func_3778();
		}
		var_160_bool = var_37_cvector == (int)26695;
		if(var_160_bool != 0) {
			var_161_object = Obj(); var_162_object = Obj();
			var_161_object = var_1_object;
			var_162_object = var_0_object;
			func_3793();
			var_163_object = Obj(); var_164_object = Obj();
			var_163_object = var_1_object;
			var_164_object = var_0_object;
			func_3979(var_164_object);
		}
		var_166_bool = var_37_cvector == (int)41327;
		if(var_166_bool != 0) {
			var_167_object = Obj(); var_168_object = Obj();
			var_167_object = var_1_object;
			var_168_object = var_0_object;
			func_3793();
			var_169_object = Obj(); var_170_object = Obj();
			var_169_object = var_1_object;
			var_170_object = var_0_object;
			func_3979(var_170_object);
		}
		var_172_bool = var_37_cvector == (int)26704;
		if(var_172_bool != 0) {
			var_173_object = Obj(); var_174_object = Obj();
			var_173_object = var_1_object;
			var_174_object = var_0_object;
			func_3828();
			var_186_object = Obj(); var_187_object = Obj();
			var_186_object = var_1_object;
			var_187_object = var_0_object;
			func_3995();
			var_190_object = Obj(); var_191_object = Obj();
			var_190_object = var_1_object;
			var_191_object = var_0_object;
			func_3912(var_191_object);
		}
		var_212_bool = var_37_cvector == (int)41332;
		if(var_212_bool != 0) {
			var_213_object = Obj(); var_214_object = Obj();
			var_213_object = var_1_object;
			var_214_object = var_0_object;
			func_3828();
			var_215_object = Obj(); var_216_object = Obj();
			var_215_object = var_1_object;
			var_216_object = var_0_object;
			func_3771(var_216_object);
		}
		var_256_bool = var_36_bool == (int)26684;
		if(var_256_bool != 0) {
			var_257_bool = 0;
			var_257_bool = 0;
			var_258_bool = 0; var_259_object = Obj();
			var_259_object = var_1_object;
			func_4058(var_259_object);
			if(var_258_bool != 0) {
				var_266_bool = 0; var_267_object = Obj();
				var_267_object = var_1_object;
				func_4046(var_267_object);
				var_272_bool = var_266_bool == 0; //@nz
				if(var_272_bool != 0) {
					var_257_bool = 1;
				}
			}
			if(var_257_bool != 0) {
				var_273_object = Obj(); var_274_object = Obj();
				var_273_object = var_1_object;
				var_274_object = var_0_object;
				func_3787();
				var_277_object = Obj(); var_278_object = Obj();
				var_277_object = var_1_object;
				var_278_object = var_0_object;
				func_4007();
				var_281_string = "";
				func_224(var_37_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)525316);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)525317, (int)41305, (int)26685);
				@@@var_0_object:AddReply((int)539381, (int)-1, (int)41304);
				return 0;
			}
			var_305_string = "";
			func_224(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525286);
			@@@var_0_object:ClearReplies();
			var_307_bool = 0; var_308_object = Obj();
			var_308_object = var_1_object;
			func_4046(var_308_object);
			if(var_307_bool != 0) {
				@@@var_0_object:AddReply((int)525292, (int)44884, (int)26660);
			}
			var_312_bool = 0;
			var_312_bool = 0;
			var_313_bool = 0; var_314_object = Obj();
			var_314_object = var_1_object;
			func_4070(var_314_object);
			if(var_313_bool != 0) {
				var_319_bool = 0; var_320_object = Obj();
				var_320_object = var_1_object;
				func_4058(var_320_object);
				var_321_bool = var_319_bool == 0; //@nz
				if(var_321_bool != 0) {
					var_312_bool = 1;
				}
			}
			if(var_312_bool != 0) {
				@@@var_0_object:AddReply((int)525325, (int)42565, (int)26693);
			}
			var_325_bool = 0; var_326_object = Obj();
			var_326_object = var_1_object;
			func_4082(var_326_object);
			if(var_325_bool != 0) {
				@@@var_0_object:AddReply((int)525334, (int)26703, (int)26702);
			}
			@@@var_0_object:AddReply((int)525295, (int)-1, (int)26663);
			@@@var_0_object:AddReply((int)529185, (int)-1, (int)30635);
			return 0;
		}
		var_341_bool = var_36_bool == (int)26703;
		if(var_341_bool != 0) {
			var_342_string = "";
			func_224(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525335);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539400, (int)41330, (int)41328);
			@@@var_0_object:AddReply((int)539401, (int)41330, (int)41329);
			return 0;
		}
		var_351_bool = var_36_bool == (int)41330;
		if(var_351_bool != 0) {
			var_352_string = "";
			func_224(var_37_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)539402);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525336, (int)-1, (int)26704);
			@@@var_0_object:AddReply((int)539403, (int)-1, (int)41332);
			return 0;
		}
		var_361_bool = var_36_bool == (int)42565;
		if(var_361_bool != 0) {
			var_362_string = "";
			func_224(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540556);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540557, (int)26694, (int)42566);
			return 0;
		}
		var_368_bool = var_36_bool == (int)26694;
		if(var_368_bool != 0) {
			var_369_string = "";
			func_224(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525326);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539397, (int)41326, (int)41325);
			@@@var_0_object:AddReply((int)539399, (int)-1, (int)41327);
			return 0;
		}
		var_378_bool = var_36_bool == (int)41326;
		if(var_378_bool != 0) {
			var_379_string = "";
			func_224(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539398);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525327, (int)-1, (int)26695);
			return 0;
		}
		var_385_bool = var_36_bool == (int)44884;
		if(var_385_bool != 0) {
			var_386_string = "";
			func_224(var_37_cvector, "Fear");
			@@@var_0_object:SetMessage((int)542495);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542496, (int)44887, (int)44885);
			@@@var_0_object:AddReply((int)542497, (int)44888, (int)44886);
			return 0;
		}
		var_395_bool = var_36_bool == (int)44888;
		if(var_395_bool != 0) {
			var_396_string = "";
			func_224(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)542499);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542502, (int)44890, (int)44891);
			@@@var_0_object:AddReply((int)542505, (int)44890, (int)44895);
			return 0;
		}
		var_405_bool = var_36_bool == (int)44887;
		if(var_405_bool != 0) {
			var_406_string = "";
			func_224(var_37_cvector, "Fear");
			@@@var_0_object:SetMessage((int)542498);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542500, (int)44890, (int)44889);
			return 0;
		}
		var_412_bool = var_36_bool == (int)44890;
		if(var_412_bool != 0) {
			var_413_string = "";
			func_224(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)542501);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542503, (int)26661, (int)44893);
			@@@var_0_object:AddReply((int)542504, (int)26661, (int)44894);
			return 0;
		}
		var_422_bool = var_36_bool == (int)26661;
		if(var_422_bool != 0) {
			var_423_string = "";
			func_224(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525293);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529186, (int)30637, (int)30636);
			return 0;
		}
		var_429_bool = var_36_bool == (int)30637;
		if(var_429_bool != 0) {
			var_430_string = "";
			func_224(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)529187);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525294, (int)-1, (int)26662);
			return 0;
		}
		var_436_bool = var_36_bool == (int)41305;
		if(var_436_bool != 0) {
			var_437_string = "";
			func_224(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539382);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539383, (int)41307, (int)41306);
			@@@var_0_object:AddReply((int)539387, (int)41312, (int)41310);
			@@@var_0_object:AddReply((int)539386, (int)26686, (int)41309);
			return 0;
		}
		var_449_bool = var_36_bool == (int)41307;
		if(var_449_bool != 0) {
			var_450_string = "";
			func_224(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539384);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539388, (int)41312, (int)41311);
			@@@var_0_object:AddReply((int)539385, (int)26686, (int)41308);
			return 0;
		}
		var_459_bool = var_36_bool == (int)41312;
		if(var_459_bool != 0) {
			var_460_string = "";
			func_224(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539389);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539390, (int)26686, (int)41313);
			@@@var_0_object:AddReply((int)539391, (int)26686, (int)41316);
			return 0;
		}
		var_469_bool = var_36_bool == (int)26686;
		if(var_469_bool != 0) {
			var_470_string = "";
			func_224(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525318);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525319, (int)26688, (int)26687);
			@@@var_0_object:AddReply((int)539392, (int)41321, (int)41319);
			return 0;
		}
		var_479_bool = var_36_bool == (int)41321;
		if(var_479_bool != 0) {
			var_480_string = "";
			func_224(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)539394);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539395, (int)-1, (int)41323);
			@@@var_0_object:AddReply((int)539396, (int)-1, (int)41324);
			return 0;
		}
		var_489_bool = var_36_bool == (int)26688;
		if(var_489_bool != 0) {
			var_490_string = "";
			func_224(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525320);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525321, (int)26690, (int)26689);
			@@@var_0_object:AddReply((int)541566, (int)43739, (int)43738);
			@@@var_0_object:AddReply((int)539393, (int)41321, (int)41320);
			return 0;
		}
		var_502_bool = var_36_bool == (int)43739;
		if(var_502_bool != 0) {
			var_503_string = "";
			func_224(var_37_cvector, "Fear");
			@@@var_0_object:SetMessage((int)541567);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541568, (int)43741, (int)43740);
			return 0;
		}
		var_509_bool = var_36_bool == (int)43741;
		if(var_509_bool != 0) {
			var_510_string = "";
			func_224(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541569);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541570, (int)26690, (int)43742);
			return 0;
		}
		var_516_bool = var_36_bool == (int)26690;
		if(var_516_bool != 0) {
			var_517_string = "";
			func_224(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)525322);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525323, (int)-1, (int)26691);
			@@@var_0_object:AddReply((int)525324, (int)-1, (int)26692);
			return 0;
		}
		var_3_string = true;
		var_525_bool = 0;
		func_3769(var_525_bool);
		if(var_525_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xf7";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3547();
		var_41_bool = var_36_bool == (int)26851;
		if(var_41_bool != 0) {
			var_42_string = "";
			func_1051(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525495);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525496, (int)-1, (int)26852);
			@@@var_0_object:AddReply((int)529314, (int)-1, (int)30768);
			return 0;
		}
		var_3_string = true;
		var_66_bool = 0;
		func_3769(var_66_bool);
		if(var_66_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x432";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3547();
		var_41_bool = var_37_cvector == (int)27101;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_3838();
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_4019(var_102_object);
		}
		var_128_bool = var_37_cvector == (int)27106;
		if(var_128_bool != 0) {
			var_129_object = Obj(); var_130_object = Obj();
			var_129_object = var_1_object;
			var_130_object = var_0_object;
			func_3838();
			var_131_object = Obj(); var_132_object = Obj();
			var_131_object = var_1_object;
			var_132_object = var_0_object;
			func_4019(var_132_object);
		}
		var_134_bool = var_37_cvector == (int)27121;
		if(var_134_bool != 0) {
			var_135_object = Obj(); var_136_object = Obj();
			var_135_object = var_1_object;
			var_136_object = var_0_object;
			func_3880();
			var_151_object = Obj(); var_152_object = Obj();
			var_151_object = var_1_object;
			var_152_object = var_0_object;
			func_4035(var_152_object);
			var_175_object = Obj(); var_176_object = Obj();
			var_175_object = var_1_object;
			var_176_object = var_0_object;
			func_3890(var_176_object);
			var_181_object = Obj(); var_182_object = Obj();
			var_181_object = var_1_object;
			var_182_object = var_0_object;
			func_4001();
		}
		var_186_bool = var_37_cvector == (int)27125;
		if(var_186_bool != 0) {
			var_187_object = Obj(); var_188_object = Obj();
			var_187_object = var_1_object;
			var_188_object = var_0_object;
			func_3874();
		}
		var_192_bool = var_36_bool == (int)27097;
		if(var_192_bool != 0) {
			var_193_bool = 0; var_194_object = Obj();
			var_194_object = var_1_object;
			func_4106(var_194_object);
			if(var_193_bool != 0) {
				var_201_object = Obj(); var_202_object = Obj();
				var_201_object = var_1_object;
				var_202_object = var_0_object;
				func_3868();
				var_205_object = Obj(); var_206_object = Obj();
				var_205_object = var_1_object;
				var_206_object = var_0_object;
				func_4013();
				var_209_string = "";
				func_1336(var_37_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)525791);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)529235, (int)30690, (int)30689);
				return 0;
			}
			var_230_string = "";
			func_1336(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)525796);
			@@@var_0_object:ClearReplies();
			var_232_bool = 0; var_233_object = Obj();
			var_233_object = var_1_object;
			func_4094(var_233_object);
			if(var_232_bool != 0) {
				@@@var_0_object:AddReply((int)525797, (int)27105, (int)27103);
			}
			var_241_bool = 0; var_242_object = Obj();
			var_242_object = var_1_object;
			func_4118(var_242_object);
			if(var_241_bool != 0) {
				@@@var_0_object:AddReply((int)525813, (int)27120, (int)27119);
			}
			var_250_bool = 0;
			var_250_bool = 1;
			var_251_bool = 0;
			var_251_bool = 0;
			var_252_bool = 0; var_253_object = Obj();
			var_253_object = var_1_object;
			func_4130(var_253_object);
			if(var_252_bool != 0) {
				var_258_bool = 0; var_259_object = Obj();
				var_259_object = var_1_object;
				func_4142(var_259_object);
				if(var_258_bool != 0) {
					var_251_bool = 1;
				}
			}
			if(var_251_bool != 1) {
				var_264_bool = 0;
				var_264_bool = 0;
				var_265_bool = 0; var_266_object = Obj();
				var_266_object = var_1_object;
				func_4154(var_266_object);
				if(var_265_bool != 0) {
					var_271_bool = 0; var_272_object = Obj();
					var_272_object = var_1_object;
					func_4142(var_272_object);
					if(var_271_bool != 0) {
						var_264_bool = 1;
					}
				}
				if(var_264_bool != 1) {
					var_250_bool = 0;
				}
			}
			if(var_250_bool != 0) {
				@@@var_0_object:AddReply((int)525819, (int)27126, (int)27125);
			}
			@@@var_0_object:AddReply((int)525798, (int)-1, (int)27104);
			return 0;
		}
		var_280_bool = var_36_bool == (int)27126;
		if(var_280_bool != 0) {
			var_281_string = "";
			func_1336(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)525820);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525821, (int)-1, (int)27127);
			return 0;
		}
		var_287_bool = var_36_bool == (int)27120;
		if(var_287_bool != 0) {
			var_288_string = "";
			func_1336(var_37_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)525814);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525815, (int)-1, (int)27121);
			return 0;
		}
		var_294_bool = var_36_bool == (int)27105;
		if(var_294_bool != 0) {
			var_295_string = "";
			func_1336(var_37_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)525799);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525800, (int)-1, (int)27106);
			return 0;
		}
		var_301_bool = var_36_bool == (int)30690;
		if(var_301_bool != 0) {
			var_302_string = "";
			func_1336(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)529236);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529237, (int)30692, (int)30691);
			return 0;
		}
		var_308_bool = var_36_bool == (int)30692;
		if(var_308_bool != 0) {
			var_309_string = "";
			func_1336(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)529238);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525792, (int)27100, (int)27098);
			@@@var_0_object:AddReply((int)525793, (int)-1, (int)27099);
			return 0;
		}
		var_318_bool = var_36_bool == (int)27100;
		if(var_318_bool != 0) {
			var_319_string = "";
			func_1336(var_37_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)525794);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525795, (int)-1, (int)27101);
			return 0;
		}
		var_3_string = true;
		var_324_bool = 0;
		func_3769(var_324_bool);
		if(var_324_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x54f";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3547();
		var_41_bool = var_37_cvector == (int)27366;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_3901();
		}
		var_47_bool = var_37_cvector == (int)27368;
		if(var_47_bool != 0) {
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_3907();
		}
		var_74_bool = var_36_bool == (int)27365;
		if(var_74_bool != 0) {
			var_75_string = "";
			func_1819(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)526079);
			@@@var_0_object:ClearReplies();
			var_93_bool = 0;
			var_93_bool = 0;
			var_94_bool = 0;
			var_94_bool = 0;
			var_95_bool = 0; var_96_object = Obj();
			var_96_object = var_1_object;
			func_4166(var_96_object);
			if(var_95_bool != 0) {
				var_103_bool = 0; var_104_object = Obj();
				var_104_object = var_1_object;
				func_4178(var_104_object);
				if(var_103_bool != 0) {
					var_94_bool = 1;
				}
			}
			if(var_94_bool != 0) {
				var_109_bool = 0; var_110_object = Obj();
				var_110_object = var_1_object;
				func_4190(var_110_object);
				if(var_109_bool != 0) {
					var_93_bool = 1;
				}
			}
			if(var_93_bool != 0) {
				@@@var_0_object:AddReply((int)526080, (int)27367, (int)27366);
			}
			@@@var_0_object:AddReply((int)526083, (int)-1, (int)27369);
			@@@var_0_object:AddReply((int)528852, (int)-1, (int)30272);
			return 0;
		}
		var_125_bool = var_36_bool == (int)27367;
		if(var_125_bool != 0) {
			var_126_string = "";
			func_1819(var_37_cvector, "Fear");
			@@@var_0_object:SetMessage((int)526081);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528853, (int)30274, (int)30273);
			@@@var_0_object:AddReply((int)528858, (int)30280, (int)30279);
			return 0;
		}
		var_135_bool = var_36_bool == (int)30280;
		if(var_135_bool != 0) {
			var_136_string = "";
			func_1819(var_37_cvector, "Fear");
			@@@var_0_object:SetMessage((int)528859);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528860, (int)30277, (int)30281);
			return 0;
		}
		var_142_bool = var_36_bool == (int)30274;
		if(var_142_bool != 0) {
			var_143_string = "";
			func_1819(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528854);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528855, (int)30277, (int)30275);
			@@@var_0_object:AddReply((int)528856, (int)30277, (int)30276);
			return 0;
		}
		var_152_bool = var_36_bool == (int)30277;
		if(var_152_bool != 0) {
			var_153_string = "";
			func_1819(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)528857);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)526082, (int)-1, (int)27368);
			return 0;
		}
		var_3_string = true;
		var_158_bool = 0;
		func_3769(var_158_bool);
		if(var_158_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x732";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3547();
		var_41_bool = var_37_cvector == (int)28935;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_3973();
		}
		var_47_bool = var_37_cvector == (int)28947;
		if(var_47_bool != 0) {
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_3922();
		}
		var_131_bool = var_36_bool == (int)28931;
		if(var_131_bool != 0) {
			var_132_string = "";
			func_2162(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527588);
			@@@var_0_object:ClearReplies();
			var_150_bool = 0;
			var_150_bool = 0;
			var_151_bool = 0; var_152_object = Obj();
			var_152_object = var_1_object;
			func_4214(var_152_object);
			if(var_151_bool != 0) {
				var_159_bool = 0; var_160_object = Obj();
				var_160_object = var_1_object;
				func_4202(var_160_object);
				if(var_159_bool != 0) {
					var_150_bool = 1;
				}
			}
			if(var_150_bool != 0) {
				@@@var_0_object:AddReply((int)527592, (int)28936, (int)28935);
			}
			@@@var_0_object:AddReply((int)527589, (int)-1, (int)28932);
			return 0;
		}
		var_172_bool = var_36_bool == (int)28936;
		if(var_172_bool != 0) {
			var_173_string = "";
			func_2162(var_37_cvector, "Fear");
			@@@var_0_object:SetMessage((int)527593);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527594, (int)28938, (int)28937);
			@@@var_0_object:AddReply((int)527609, (int)28954, (int)28953);
			return 0;
		}
		var_182_bool = var_36_bool == (int)28954;
		if(var_182_bool != 0) {
			var_183_string = "";
			func_2162(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527610);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527611, (int)28940, (int)28955);
			return 0;
		}
		var_189_bool = var_36_bool == (int)28938;
		if(var_189_bool != 0) {
			var_190_string = "";
			func_2162(var_37_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)527595);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527596, (int)28940, (int)28939);
			return 0;
		}
		var_196_bool = var_36_bool == (int)28940;
		if(var_196_bool != 0) {
			var_197_string = "";
			func_2162(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527597);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527598, (int)28942, (int)28941);
			return 0;
		}
		var_203_bool = var_36_bool == (int)28942;
		if(var_203_bool != 0) {
			var_204_string = "";
			func_2162(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)527599);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527600, (int)28944, (int)28943);
			return 0;
		}
		var_210_bool = var_36_bool == (int)28944;
		if(var_210_bool != 0) {
			var_211_string = "";
			func_2162(var_37_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)527601);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527602, (int)28946, (int)28945);
			return 0;
		}
		var_217_bool = var_36_bool == (int)28946;
		if(var_217_bool != 0) {
			var_218_string = "";
			func_2162(var_37_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)527603);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527604, (int)-1, (int)28947);
			return 0;
		}
		var_3_string = true;
		var_223_bool = 0;
		func_3769(var_223_bool);
		if(var_223_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x889";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	if((int)1 != 0) {
		func_3547();
		var_41_bool = var_36_bool == (int)41255;
		if(var_41_bool != 0) {
			var_42_string = "";
			func_2531(var_37_cvector, "Tiredness");
			@@@var_0_object:SetMessage((int)539312);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542603, (int)45006, (int)45004);
			@@@var_0_object:AddReply((int)539313, (int)-1, (int)41256);
			@@@var_0_object:AddReply((int)542604, (int)-1, (int)45005);
			return 0;
		}
		var_70_bool = var_36_bool == (int)45006;
		if(var_70_bool != 0) {
			var_71_string = "";
			func_2531(var_37_cvector, "Confusion");
			@@@var_0_object:SetMessage((int)542605);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542606, (int)45011, (int)45007);
			@@@var_0_object:AddReply((int)542607, (int)45009, (int)45008);
			return 0;
		}
		var_80_bool = var_36_bool == (int)45009;
		if(var_80_bool != 0) {
			var_81_string = "";
			func_2531(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542608);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542609, (int)-1, (int)45010);
			return 0;
		}
		var_87_bool = var_36_bool == (int)45011;
		if(var_87_bool != 0) {
			var_88_string = "";
			func_2531(var_37_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)542610);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542611, (int)45014, (int)45012);
			@@@var_0_object:AddReply((int)542612, (int)45020, (int)45013);
			return 0;
		}
		var_97_bool = var_36_bool == (int)45014;
		if(var_97_bool != 0) {
			var_98_string = "";
			func_2531(var_37_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)542613);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542614, (int)45016, (int)45015);
			return 0;
		}
		var_104_bool = var_36_bool == (int)45016;
		if(var_104_bool != 0) {
			var_105_string = "";
			func_2531(var_37_cvector, "Sympathy");
			@@@var_0_object:SetMessage((int)542615);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542616, (int)45018, (int)45017);
			return 0;
		}
		var_111_bool = var_36_bool == (int)45018;
		if(var_111_bool != 0) {
			var_112_string = "";
			func_2531(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542617);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542618, (int)45020, (int)45019);
			return 0;
		}
		var_118_bool = var_36_bool == (int)45020;
		if(var_118_bool != 0) {
			var_119_string = "";
			func_2531(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)542619);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)542620, (int)-1, (int)45022);
			@@@var_0_object:AddReply((int)542621, (int)-1, (int)45023);
			return 0;
		}
		var_3_string = true;
		var_127_bool = 0;
		func_3769(var_127_bool);
		if(var_127_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x9fa";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_cvector)
{
	if((int)1 != 0) {
		func_3547();
		var_41_bool = var_36_int == (int)42548;
		if(var_41_bool != 0) {
			var_42_string = "";
			func_2880(var_37_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540539);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540540, (int)-1, (int)42549);
			@@@var_0_object:AddReply((int)540799, (int)-1, (int)42848);
			return 0;
		}
		var_3_string = true;
		var_66_bool = 0;
		func_3769(var_66_bool);
		if(var_66_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb57";
	
}


task_14_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_int)
{
	var_38_bool = var_36_int == (int)10;
	if(var_38_bool != 0) {
		func_3016();
		var_40_bool = 0;
		var_40_bool = 0;
		var_41_bool = 0;
		func_3271(var_41_bool);
		if(var_41_bool != 0) {
			var_44_bool = 0;
			func_2985(var_44_bool);
			if(var_44_bool != 0) {
				var_40_bool = 1;
			}
		}
		if(var_40_bool != 0) {
			var_61_bool = 0;
			func_2965(var_61_bool);
			if(var_61_bool != 0) {
				var_80_bool = 0; var_81_object = Obj();
				func_3554(Obj());
				var_82_object = var_81_object;
				func_3421(var_80_bool, var_81_object);
			}
		} else {
			func_2980(var_36_int);
			func_3007();
		}
	}
	return 0;
	
}


task_14_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_3198();
	func_3016();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_14_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	StopGroup0();
	func_3016();
	var_37_string = "";
	func_3501("Neutral");
	func_3007();
	return 0;
}


task_14_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_bool)
{
	var_37_bool = var_36_bool;
	if(var_37_bool != 0) {
		func_3007();
	} else {
		var_43_string = "";
		func_3501("Neutral");
	}
	return 0;
	
}


task_14_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_object)
{
	var_37_bool = 0; var_38_bool = 0;
	IsOverrideActive(var_38_bool);
	var_39_bool = var_38_bool == 0; //@nz
	if(var_39_bool != 0) {
		EventDisable(0);
		func_3198();
		var_40_bool = 0; var_41_object = Obj();
		var_36_object = var_41_object;
		func_3262(var_40_bool, var_41_object);
		EventEnable(0);
		var_54_object = Obj();
		var_36_object = var_54_object;
		func_4516(var_54_object);
		var_788_string = "";
		func_3501("Neutral");
		func_3016();
		func_3007();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	var_36_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_2951(var_35_cvector);
	return 0;
}


func_0(var_0_object, var_286_int, var_287_object)
{
	var_289_object = Obj(); var_290_bool = 0; var_291_int = 0; var_292_bool = 0; var_293_object = Obj(); var_294_bool = 0; var_295_int = 0; var_296_bool = 0;
	var_0_object = var_287_object;
	var_297_bool = 0; var_298_object = Obj(); var_299_float = 0;
	var_287_object = var_298_object;
	func_3276(var_297_bool, var_298_object, (float)70.0);
	var_300_bool = var_297_bool == 0; //@nz
	if(var_300_bool != 0) {
		var_286_int = -2;
		return 8;
	}
	CreateDialog(var_293_object);
	var_301_int = 0;
	func_3763(var_301_int);
	@@var_293_object:SetNPCName(var_301_int);
	var_302_int = 0;
	func_3761(var_302_int);
	@@var_293_object:SetNPCDescription(var_302_int);
	var_303_string = "";
	func_3765(var_303_string);
	@@var_293_object:SetPhoto(var_303_string);
	var_304_string = "";
	func_3767(var_304_string);
	@@var_293_object:SetPhoto2(var_304_string);
	var_305_int = 0;
	func_4499(var_305_int);
	@@var_293_object:SetPlayerName(var_305_int);
	IsOverrideActive(var_294_bool);
	var_306_bool = var_294_bool;
	if(var_306_bool != 0) {
		var_286_int = -2;
		return 8;
	}
	DoDialog(var_293_object);
	var_307_bool = 0; var_308_object = Obj();
	func_3554(Obj());
	var_309_object = var_308_object;
	func_3363(var_307_bool, var_308_object);
	var_310_object = Obj(); var_311_object = Obj();
	var_287_object = var_310_object;
	var_293_object = var_311_object;
	TaskCall(1);
	func_81(var_312_object, var_313_object, var_314_string, var_315_bool, var_310_object, var_311_object);
	TaskReturn();
	@@var_293_object:IsDialogEnd(var_296_bool);
	
Label_63:
	var_399_bool = var_296_bool == 0; //@nz
	if(var_399_bool != 0) {
		sync();
		@@var_293_object:IsDialogEnd(var_296_bool);
		goto Label_63;
	}
	var_287_object = Obj();
	func_3345();
	StopDialog(var_293_object);
	@@var_293_object:GetReturnValue((int)-1);
	var_295_int = var_286_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3586(var_93_object, var_94_string)
{
	var_95_object = Obj(); var_96_object = Obj(); var_97_object = Obj(); var_98_object = Obj();
	GetMainOutdoorScene(var_97_object);
	var_100_int = var_94_string + ".bin";
	AddBlankActor(var_98_object, var_97_object, var_94_string, var_100_int);
	var_98_object = var_93_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4356()
{
	var_62_object = Obj(); var_63_object = Obj();
	CreateDiaryEntry(var_63_object, (int)384, (int)2, (int)525822);
	var_67_bool = 0; var_68_object = Obj(); var_69_int = 0;
	var_63_object = var_68_object;
	func_4421(var_67_bool, var_68_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2822(var_0_object, var_1_object, var_2_object, var_3_string, var_756_object, var_757_object)
{
	var_0_object = var_757_object;
	var_1_object = var_756_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_763_string = "";
		func_2880(var_757_object, "Neutral");
		@@@var_0_object:SetMessage((int)540539);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540540, (int)-1, (int)42549);
		@@@var_0_object:AddReply((int)540799, (int)-1, (int)42848);
		goto Label_2850;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xb0a";
	}
Label_2850:
	var_778_bool = 0;
	func_3769(var_778_bool);
	if(var_778_bool != 0) {

	Label_2854:
		lshWaitForAnimEnd();
		var_779_string = var_3_string;
		if(var_779_string != 0) {
		} else {
			var_780_string = "";
			var_780_string = var_2_object;
			func_3501(var_780_string);
			goto Label_2854;
	}
		PlayAnimation("all", "idle");

	Label_2869:
		WaitForAnimEnd();
		var_783_string = var_3_string;
		if(var_783_string != 0) {
			goto Label_2879;
		}
		PlayAnimation("all", "idle");
		goto Label_2869;
	}
	goto Label_2879;
	
Label_2879:
	return 0;
	
}


func_4106(var_434_bool)
{
	var_436_int = 0; var_437_string = "";
	func_3581(var_436_int, "ook4Lara1");
	var_439_bool = var_436_int == (int)0;
	if(var_439_bool != 0) {
		var_434_bool = 1;
		return 0;
	}
	var_434_bool = 0;
	return 0;
}


func_3597(var_170_int, var_171_int)
{
	var_172_object = Obj(); var_173_object = Obj();
	CreateIntVector(var_173_object);
	@@var_173_object:add(var_170_int);
	@@var_173_object:add(var_171_int);
	SendWorldWndMessage((int)3, var_173_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3345()
{
	var_275_bool = 0; var_276_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_278_bool = 0;
	func_3769(var_278_bool);
	if(var_278_bool != 0) {
	} else {
		HasAnimationTrack(var_276_bool, "head");
		var_280_bool = var_276_bool;
		if(var_280_bool == 0) goto Label_3362;
		UnlookAsync("head");
	}
Label_3362:
	return 2;
	
}


func_4369()
{
	var_137_object = Obj(); var_138_object = Obj();
	CreateDiaryEntry(var_138_object, (int)387, (int)2, (int)525825);
	var_142_bool = 0; var_143_object = Obj(); var_144_int = 0;
	var_138_object = var_143_object;
	func_4421(var_142_bool, var_143_object, (int)384);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4118(var_479_bool)
{
	var_481_int = 0; var_482_string = "";
	func_3581(var_481_int, "k4q03");
	var_484_bool = var_481_int == (int)3;
	if(var_484_bool != 0) {
		var_479_bool = 1;
		return 0;
	}
	var_479_bool = 0;
	return 0;
}


func_3609(var_193_object, var_194_int)
{
	var_195_int = 0; var_196_int = 0;
	var_197_object = Obj(); var_198_string = ""; var_199_int = 0;
	var_193_object = var_197_object;
	var_194_int = var_199_int;
	func_3245(var_197_object, "money", var_199_int);
	var_204_bool = var_194_int > (int)0;
	if(var_204_bool != 0) {
		GetInvItemByName(var_196_int, "Money");
		var_206_int = 0; var_207_int = 0;
		var_196_int = var_206_int;
		var_194_int = var_207_int;
		func_3597(var_206_int, var_207_int);
	}
	return 2;
}


func_1051(var_2_object, var_231_string)
{
	var_232_bool = 0;
	func_3769(var_232_bool);
	var_233_bool = var_232_bool == 0; //@nz
	if(var_233_bool != 0) {
		return 0;
	}
	var_234_bool = var_231_string == var_2_object;
	if(var_234_bool != 0) {
		return 0;
	}
	var_235_string = ""; var_236_bool = 0;
	var_231_string = var_235_string;
	var_238_bool = var_231_string == "";
	if(var_238_bool != 0) {
		var_236_bool = 0;
	} else {
		var_236_bool = 1;
	}
	func_3517(var_235_string, var_236_bool);
	var_2_object = var_231_string;
	return 0;
	
}


func_1819(var_2_object, var_552_string)
{
	var_553_bool = 0;
	func_3769(var_553_bool);
	var_554_bool = var_553_bool == 0; //@nz
	if(var_554_bool != 0) {
		return 0;
	}
	var_555_bool = var_552_string == var_2_object;
	if(var_555_bool != 0) {
		return 0;
	}
	var_556_string = ""; var_557_bool = 0;
	var_552_string = var_556_string;
	var_559_bool = var_552_string == "";
	if(var_559_bool != 0) {
		var_557_bool = 0;
	} else {
		var_557_bool = 1;
	}
	func_3517(var_556_string, var_557_bool);
	var_2_object = var_552_string;
	return 0;
	
}


func_3868()
{
	SetVariable("ook4Lara1", (int)1);
	return 0;
}


func_4382()
{
	var_85_object = Obj(); var_86_object = Obj();
	CreateDiaryEntry(var_86_object, (int)385, (int)2, (int)525823);
	var_90_bool = 0; var_91_object = Obj(); var_92_int = 0;
	var_86_object = var_91_object;
	func_4421(var_90_bool, var_91_object, (int)384);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4130(var_490_bool)
{
	var_492_int = 0; var_493_string = "";
	func_3581(var_492_int, "k4q03");
	var_495_bool = var_492_int == (int)4;
	if(var_495_bool != 0) {
		var_490_bool = 1;
		return 0;
	}
	var_490_bool = 0;
	return 0;
}


func_3874()
{
	SetVariable("ook4Lara2", (int)1);
	return 0;
}


func_3363(var_129_bool, var_130_object)
{
	var_134_int = 0; var_135_int = 0; var_136_int = 0; var_137_int = 0;
	GetVariable("voice_common", var_136_int);
	var_139_int = var_136_int;
	if(var_139_int != 0) {
		var_140_bool = 0; var_141_object = Obj();
		var_130_object = var_141_object;
		func_3421(var_140_bool, var_141_object);
		var_170_bool = var_140_bool == 0; //@nz
		if(var_170_bool != 0) {
			var_171_bool = 0; var_172_object = Obj();
			var_130_object = var_172_object;
			func_3458(var_171_bool, var_172_object);
			var_206_bool = var_171_bool == 0; //@nz
			if(var_206_bool != 0) {
				var_129_bool = 0;
				return 4;
			}
		}
		irand(var_137_int, (int)2);
		var_208_int = var_137_int;
		if(var_208_int != 0) {
			var_211_int = var_136_int + (int)1;
			var_213_int = var_211_int % (int)3;
			SetVariable("voice_common", var_213_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_216_bool = 0; var_217_object = Obj();
		var_130_object = var_217_object;
		func_3458(var_216_bool, var_217_object);
		var_218_bool = var_216_bool == 0; //@nz
		if(var_218_bool != 0) {
			var_219_bool = 0; var_220_object = Obj();
			var_130_object = var_220_object;
			func_3421(var_219_bool, var_220_object);
			var_221_bool = var_219_bool == 0; //@nz
			if(var_221_bool != 0) {
				var_129_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_3419;
	
Label_3419:
	var_129_bool = 1;
	return 4;
	
}


func_3880()
{
	func_4369();
	var_145_bool = 0; var_146_string = ""; var_147_string = "";
	func_3705(var_145_bool, "quest_k4_03", "completed");
	return 0;
}


func_2090(var_0_object, var_1_object, var_2_object, var_3_string, var_626_object, var_627_object)
{
	var_0_object = var_627_object;
	var_1_object = var_626_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_633_string = "";
		func_2162(var_627_object, "Neutral");
		@@@var_0_object:SetMessage((int)527588);
		@@@var_0_object:ClearReplies();
		var_642_bool = 0;
		var_642_bool = 0;
		var_643_bool = 0; var_644_object = Obj();
		var_644_object = var_1_object;
		func_4214(var_644_object);
		if(var_643_bool != 0) {
			var_649_bool = 0; var_650_object = Obj();
			var_650_object = var_1_object;
			func_4202(var_650_object);
			if(var_649_bool != 0) {
				var_642_bool = 1;
			}
		}
		if(var_642_bool != 0) {
			@@@var_0_object:AddReply((int)527592, (int)28936, (int)28935);
		}
		@@@var_0_object:AddReply((int)527589, (int)-1, (int)28932);
		goto Label_2132;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x82e";
	}
Label_2132:
	var_661_bool = 0;
	func_3769(var_661_bool);
	if(var_661_bool != 0) {

	Label_2136:
		lshWaitForAnimEnd();
		var_662_string = var_3_string;
		if(var_662_string != 0) {
		} else {
			var_663_string = "";
			var_663_string = var_2_object;
			func_3501(var_663_string);
			goto Label_2136;
	}
		PlayAnimation("all", "idle");

	Label_2151:
		WaitForAnimEnd();
		var_666_string = var_3_string;
		if(var_666_string != 0) {
			goto Label_2161;
		}
		PlayAnimation("all", "idle");
		goto Label_2151;
	}
	goto Label_2161;
	
Label_2161:
	return 0;
	
}


func_4395()
{
	var_50_object = Obj(); var_51_object = Obj();
	CreateDiaryEntry(var_51_object, (int)413, (int)1, (int)526114);
	var_55_bool = 0; var_56_object = Obj(); var_57_int = 0;
	var_51_object = var_56_object;
	func_4421(var_55_bool, var_56_object, (int)408);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3628(var_159_object, var_160_object, var_161_int)
{
	var_162_int = 0; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_int = 0; var_167_bool = 0;
	@@var_160_object:GetItemID(var_165_int);
	GetInvItemProperty(var_166_int, var_165_int, "Category");
	@@var_159_object:AddItem(var_167_bool, var_160_object, var_166_int, var_161_int);
	var_169_bool = var_167_bool == 0; //@nz
	if(var_169_bool != 0) {
		@@var_159_object:DropItems(var_160_object, var_161_int);
	} else {
		var_170_int = 0; var_171_int = 0;
		var_165_int = var_170_int;
		var_161_int = var_171_int;
		func_3597(var_170_int, var_171_int);
	}
	return 6;
	
}


func_4142(var_496_bool)
{
	var_498_int = 0; var_499_string = "";
	func_3581(var_498_int, "ook4Lara2");
	var_501_bool = var_498_int == (int)0;
	if(var_501_bool != 0) {
		var_496_bool = 1;
		return 0;
	}
	var_496_bool = 0;
	return 0;
}


func_3890(var_175_object)
{
	Trace("smoked_meat2 is given");
	var_178_object = Obj(); var_179_string = ""; var_180_int = 0;
	var_175_object = var_178_object;
	func_3647(var_178_object, "smoked_meat", (int)2);
	return 0;
}


func_3127()
{
	var_41_int = 0; var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_int = 0; var_52_bool = 0;
	WaitForAnimEnd();
	var_53_bool = 0;
	func_3271(var_53_bool);
	var_54_bool = var_53_bool == 0; //@nz
	if(var_54_bool != 0) {
		return 12;
	}
	func_3744((int)0);
	var_55_int = var_47_int;
	var_48_int = 0;
	
Label_3141:
	var_68_bool = 0;
	var_68_bool = 0;
	var_70_bool = var_48_int < (int)5;
	if(var_70_bool != 0) {
		var_71_bool = 0;
		func_3271(var_71_bool);
		if(var_71_bool != 0) {
			var_68_bool = 1;
		}
	}
	if(var_68_bool != 0) {
		var_72_bool = var_47_int == 0; //@nz
		if(var_72_bool != 0) {
			Sleep((int)3, var_49_bool);
			var_74_bool = var_49_bool == 0; //@nz
			if(var_74_bool != 0) {
			} else {
		} else {
				irand(var_50_int, var_47_int);
				irand(var_51_int, (int)5);
				var_80_bool = var_51_int != (int)0;
				if(var_80_bool != 0) {
					var_50_int = 0;
				}
				var_82_string = ""; var_83_int = 0;
				var_50_int = var_83_int;
				func_3737(var_82_string, var_83_int);
				PlayAnimation("all", var_82_string);
				WaitForAnimEnd(var_52_bool);
				var_84_bool = var_52_bool == 0; //@nz
				if(var_84_bool == 0) goto Label_3182;
				goto Label_3193;
		}
		Label_3182:
			var_75_bool = 0;
			func_3196(var_75_bool);
			var_76_bool = var_75_bool == 0; //@nz
			if(var_76_bool != 0) {
				goto Label_3193;
			}
			ResetAAS();
			var_48_int = var_48_int + (int)1;
			goto Label_3141;

		}
	}
Label_3193:
	ResetAAS();
	return 12;
	
}


func_1336(var_2_object, var_448_string)
{
	var_449_bool = 0;
	func_3769(var_449_bool);
	var_450_bool = var_449_bool == 0; //@nz
	if(var_450_bool != 0) {
		return 0;
	}
	var_451_bool = var_448_string == var_2_object;
	if(var_451_bool != 0) {
		return 0;
	}
	var_452_string = ""; var_453_bool = 0;
	var_448_string = var_452_string;
	var_455_bool = var_448_string == "";
	if(var_455_bool != 0) {
		var_453_bool = 0;
	} else {
		var_453_bool = 1;
	}
	func_3517(var_452_string, var_453_bool);
	var_2_object = var_448_string;
	return 0;
	
}


func_4408(var_71_object)
{
	var_72_object = Obj(); var_73_object = Obj();
	GetDiaryRoot(var_73_object);
	var_74_bool = var_73_object == 0; //@nz
	if(var_74_bool != 0) {
		Trace("Can't retrieve diary root");
		var_71_object = 0;
		return 2;
	}
	var_73_object = var_71_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4154(var_503_bool)
{
	var_505_int = 0; var_506_string = "";
	func_3581(var_505_int, "k4q03");
	var_508_bool = var_505_int == (int)-1;
	if(var_508_bool != 0) {
		var_503_bool = 1;
		return 0;
	}
	var_503_bool = 0;
	return 0;
}


func_3901()
{
	SetVariable("ook6Lara1", (int)1);
	return 0;
}


func_3647(var_154_object, var_155_string, var_156_int)
{
	var_157_object = Obj(); var_158_object = Obj();
	CreateInvItem(var_158_object);
	@@var_158_object:SetItemName(var_155_string);
	var_159_object = Obj(); var_160_object = Obj(); var_161_int = 0;
	var_154_object = var_159_object;
	var_158_object = var_160_object;
	var_156_int = var_161_int;
	func_3628(var_159_object, var_160_object, var_161_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2880(var_2_object, var_763_string)
{
	var_764_bool = 0;
	func_3769(var_764_bool);
	var_765_bool = var_764_bool == 0; //@nz
	if(var_765_bool != 0) {
		return 0;
	}
	var_766_bool = var_763_string == var_2_object;
	if(var_766_bool != 0) {
		return 0;
	}
	var_767_string = ""; var_768_bool = 0;
	var_763_string = var_767_string;
	var_770_bool = var_763_string == "";
	if(var_770_bool != 0) {
		var_768_bool = 0;
	} else {
		var_768_bool = 1;
	}
	func_3517(var_767_string, var_768_bool);
	var_2_object = var_763_string;
	return 0;
	
}


func_3907()
{
	func_4395();
	return 0;
}


func_4421(var_62_bool, var_63_object, var_64_int)
{
	var_65_object = Obj(); var_66_object = Obj(); var_67_int = 0; var_68_object = Obj(); var_69_object = Obj(); var_70_int = 0;
	func_4408(Obj());
	var_71_object = var_68_object;
	@@var_68_object:Find(var_64_int, var_69_object);
	var_76_bool = var_69_object == 0; //@nz
	if(var_76_bool != 0) {
		var_78_int = "Can't find diary parent with id: " + var_64_int;
		Trace(var_78_int);
		var_62_bool = 0;
		return 6;
	}
	@@var_69_object:AddChild(var_63_object);
	SendWorldWndMessage((int)7);
	@@var_63_object:GetCategory(var_70_int);
	SetDiarySection(var_70_int);
	var_62_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_4166(var_563_bool)
{
	var_565_int = 0; var_566_string = "";
	func_3581(var_565_int, "k6q01");
	var_568_bool = var_565_int == (int)2;
	if(var_568_bool != 0) {
		var_563_bool = 1;
		return 0;
	}
	var_563_bool = 0;
	return 0;
}


func_3912(var_190_object)
{
	Trace("money2000 is given");
	var_193_object = Obj(); var_194_int = 0;
	var_190_object = var_193_object;
	func_3609(var_193_object, (int)2000);
	return 0;
}


func_3660(var_217_bool, var_218_object, var_219_float)
{
	var_220_bool = var_218_object == 0; //@nz
	if(var_220_bool != 0) {
		var_217_bool = 0;
		return 0;
	}
	var_222_bool = var_219_float > (int)0;
	if(var_222_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_253_bool = var_219_float < (int)0;
		if(var_253_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_3681;
		}
		var_217_bool = 0;
		return 0;
	}
Label_3681:
	var_224_float = 0;
	var_219_float = var_224_float;
	func_3695(var_224_float);
	var_228_bool = 0; var_229_object = Obj(); var_230_string = ""; var_231_float = 0; var_232_float = 0; var_233_float = 0;
	var_218_object = var_229_object;
	var_219_float = var_231_float;
	func_3223(var_228_bool, var_229_object, "reputation", var_231_float, (float)0, (float)1);
	var_217_bool = 1;
	return 0;
	
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_310_object, var_311_object)
{
	var_0_object = var_311_object;
	var_1_object = var_310_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_317_bool = 0;
		var_317_bool = 0;
		var_318_bool = 0; var_319_object = Obj();
		var_319_object = var_1_object;
		func_4058(var_319_object);
		if(var_318_bool != 0) {
			var_326_bool = 0; var_327_object = Obj();
			var_327_object = var_1_object;
			func_4046(var_327_object);
			var_332_bool = var_326_bool == 0; //@nz
			if(var_332_bool != 0) {
				var_317_bool = 1;
			}
		}
		if(var_317_bool != 0) {
			var_333_object = Obj(); var_334_object = Obj();
			var_333_object = var_1_object;
			var_334_object = var_0_object;
			func_3787();
			var_337_object = Obj(); var_338_object = Obj();
			var_337_object = var_1_object;
			var_338_object = var_0_object;
			func_4007();
			var_341_string = "";
			func_224(var_311_object, "Neutral");
			@@@var_0_object:SetMessage((int)525316);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525317, (int)41305, (int)26685);
			@@@var_0_object:AddReply((int)539381, (int)-1, (int)41304);
		} else {
				var_364_string = "";
				func_224(var_311_object, "Neutral");
				@@@var_0_object:SetMessage((int)525286);
				@@@var_0_object:ClearReplies();
				var_366_bool = 0; var_367_object = Obj();
				var_367_object = var_1_object;
				func_4046(var_367_object);
				if(var_366_bool != 0) {
					@@@var_0_object:AddReply((int)525292, (int)44884, (int)26660);
				}
				var_371_bool = 0;
				var_371_bool = 0;
				var_372_bool = 0; var_373_object = Obj();
				var_373_object = var_1_object;
				func_4070(var_373_object);
				if(var_372_bool != 0) {
					var_378_bool = 0; var_379_object = Obj();
					var_379_object = var_1_object;
					func_4058(var_379_object);
					var_380_bool = var_378_bool == 0; //@nz
					if(var_380_bool != 0) {
						var_371_bool = 1;
					}
				}
				if(var_371_bool != 0) {
					@@@var_0_object:AddReply((int)525325, (int)42565, (int)26693);
				}
				var_384_bool = 0; var_385_object = Obj();
				var_385_object = var_1_object;
				func_4082(var_385_object);
				if(var_384_bool != 0) {
					@@@var_0_object:AddReply((int)525334, (int)26703, (int)26702);
				}
				@@@var_0_object:AddReply((int)525295, (int)-1, (int)26663);
				@@@var_0_object:AddReply((int)529185, (int)-1, (int)30635);
				goto Label_194;
		}
	}
Label_194:
	var_356_bool = 0;
	func_3769(var_356_bool);
	if(var_356_bool != 0) {

	Label_198:
		lshWaitForAnimEnd();
		var_357_string = var_3_string;
		if(var_357_string != 0) {
		} else {
			var_358_string = "";
			var_358_string = var_2_object;
			func_3501(var_358_string);
			goto Label_198;
	}
		PlayAnimation("all", "idle");

	Label_213:
		WaitForAnimEnd();
		var_361_string = var_3_string;
		if(var_361_string != 0) {
			goto Label_223;
		}
		PlayAnimation("all", "idle");
		goto Label_213;

	}
	goto Label_223;
	
Label_223:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_4178(var_569_bool)
{
	var_571_int = 0; var_572_string = "";
	func_3581(var_571_int, "k6q01DankoPos");
	var_574_bool = var_571_int > (int)2;
	if(var_574_bool != 0) {
		var_569_bool = 1;
		return 0;
	}
	var_569_bool = 0;
	return 0;
}


func_3922()
{
	var_50_int = 0; var_51_int = 0;
	GetVariable("k11q01SoulCount", var_51_int);
	var_51_int = var_51_int + (int)1;
	SetVariable("k11q01SoulCount", var_51_int);
	var_56_bool = var_51_int == (int)2;
	if(var_56_bool != 0) {
		func_4291();
	} else {
		var_81_bool = var_51_int == (int)3;
		if(var_81_bool != 0) {
			func_4278();
			goto Label_3972;
		}
		var_91_bool = var_51_int == (int)4;
		if(var_91_bool != 0) {
			func_4265();
			goto Label_3972;
		}
		var_101_bool = var_51_int == (int)5;
		if(var_101_bool != 0) {
			func_4252();
			goto Label_3972;
		}
		var_111_bool = var_51_int == (int)6;
		if(var_111_bool != 0) {
			func_4239();
			goto Label_3972;
		}
		var_121_bool = var_51_int == (int)7;
		if(var_121_bool == 0) goto Label_3972;
		func_4226();
	}
Label_3972:
	return 2;
	
}


func_2387(var_0_object, var_673_int, var_674_object)
{
	var_676_object = Obj(); var_677_bool = 0; var_678_int = 0; var_679_bool = 0; var_680_object = Obj(); var_681_bool = 0; var_682_int = 0; var_683_bool = 0;
	var_0_object = var_674_object;
	var_684_bool = 0; var_685_object = Obj(); var_686_float = 0;
	var_674_object = var_685_object;
	func_3276(var_684_bool, var_685_object, (float)70.0);
	var_687_bool = var_684_bool == 0; //@nz
	if(var_687_bool != 0) {
		var_673_int = -2;
		return 8;
	}
	CreateDialog(var_680_object);
	var_688_int = 0;
	func_3763(var_688_int);
	@@var_680_object:SetNPCName(var_688_int);
	var_689_int = 0;
	func_3761(var_689_int);
	@@var_680_object:SetNPCDescription(var_689_int);
	var_690_string = "";
	func_3765(var_690_string);
	@@var_680_object:SetPhoto(var_690_string);
	var_691_string = "";
	func_3767(var_691_string);
	@@var_680_object:SetPhoto2(var_691_string);
	var_692_int = 0;
	func_4499(var_692_int);
	@@var_680_object:SetPlayerName(var_692_int);
	IsOverrideActive(var_681_bool);
	var_693_bool = var_681_bool;
	if(var_693_bool != 0) {
		var_673_int = -2;
		return 8;
	}
	DoDialog(var_680_object);
	var_694_bool = 0; var_695_object = Obj();
	func_3554(Obj());
	var_696_object = var_695_object;
	func_3363(var_694_bool, var_695_object);
	var_697_object = Obj(); var_698_object = Obj();
	var_674_object = var_697_object;
	var_680_object = var_698_object;
	TaskCall(11);
	func_2468(var_699_object, var_700_object, var_701_string, var_702_bool, var_697_object, var_698_object);
	TaskReturn();
	@@var_680_object:IsDialogEnd(var_683_bool);
	
Label_2450:
	var_730_bool = var_683_bool == 0; //@nz
	if(var_730_bool != 0) {
		sync();
		@@var_680_object:IsDialogEnd(var_683_bool);
		goto Label_2450;
	}
	var_674_object = Obj();
	func_3345();
	StopDialog(var_680_object);
	@@var_680_object:GetReturnValue((int)-1);
	var_682_int = var_673_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1115(var_0_object, var_403_int, var_404_object)
{
	var_406_object = Obj(); var_407_bool = 0; var_408_int = 0; var_409_bool = 0; var_410_object = Obj(); var_411_bool = 0; var_412_int = 0; var_413_bool = 0;
	var_0_object = var_404_object;
	var_414_bool = 0; var_415_object = Obj(); var_416_float = 0;
	var_404_object = var_415_object;
	func_3276(var_414_bool, var_415_object, (float)70.0);
	var_417_bool = var_414_bool == 0; //@nz
	if(var_417_bool != 0) {
		var_403_int = -2;
		return 8;
	}
	CreateDialog(var_410_object);
	var_418_int = 0;
	func_3763(var_418_int);
	@@var_410_object:SetNPCName(var_418_int);
	var_419_int = 0;
	func_3761(var_419_int);
	@@var_410_object:SetNPCDescription(var_419_int);
	var_420_string = "";
	func_3765(var_420_string);
	@@var_410_object:SetPhoto(var_420_string);
	var_421_string = "";
	func_3767(var_421_string);
	@@var_410_object:SetPhoto2(var_421_string);
	var_422_int = 0;
	func_4499(var_422_int);
	@@var_410_object:SetPlayerName(var_422_int);
	IsOverrideActive(var_411_bool);
	var_423_bool = var_411_bool;
	if(var_423_bool != 0) {
		var_403_int = -2;
		return 8;
	}
	DoDialog(var_410_object);
	var_424_bool = 0; var_425_object = Obj();
	func_3554(Obj());
	var_426_object = var_425_object;
	func_3363(var_424_bool, var_425_object);
	var_427_object = Obj(); var_428_object = Obj();
	var_404_object = var_427_object;
	var_410_object = var_428_object;
	TaskCall(5);
	func_1196(var_429_object, var_430_object, var_431_string, var_432_bool, var_427_object, var_428_object);
	TaskReturn();
	@@var_410_object:IsDialogEnd(var_413_bool);
	
Label_1178:
	var_517_bool = var_413_bool == 0; //@nz
	if(var_517_bool != 0) {
		sync();
		@@var_410_object:IsDialogEnd(var_413_bool);
		goto Label_1178;
	}
	var_404_object = Obj();
	func_3345();
	StopDialog(var_410_object);
	@@var_410_object:GetReturnValue((int)-1);
	var_412_int = var_403_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3421(var_140_bool, var_141_object)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = "";
	var_147_string = "c";
	var_148_int = 0;
	
Label_3424:
	if((int)1 != 0) {
		var_154_int = var_148_int + (int)1;
		var_155_int = var_147_string + var_154_int;
		@@var_141_object:HasProperty(var_155_int, var_149_bool);
		var_156_bool = var_149_bool == 0; //@nz
		if(var_156_bool != 0) {
		} else {
			var_148_int = var_148_int + (int)1;
			goto Label_3424;
		}
	}
	var_157_bool = var_148_int == 0; //@nz
	if(var_157_bool != 0) {
		var_140_bool = 0;
		return 10;
	}
	var_150_int = 0;
	var_159_bool = var_148_int > (int)1;
	if(var_159_bool != 0) {
		irand(var_150_int, var_148_int);
	}
	var_161_int = var_150_int + (int)1;
	var_162_int = var_147_string + var_161_int;
	@@var_141_object:GetProperty(var_162_int, var_151_string);
	var_163_bool = 0; var_164_string = "";
	var_151_string = var_164_string;
	func_3532(var_163_bool, var_164_string);
	var_163_bool = var_140_bool;
	return 10;
	
}


func_4190(var_575_bool)
{
	var_577_int = 0; var_578_string = "";
	func_3581(var_577_int, "ook6Lara1");
	var_580_bool = var_577_int == (int)0;
	if(var_580_bool != 0) {
		var_575_bool = 1;
		return 0;
	}
	var_575_bool = 0;
	return 0;
}


func_4449(var_48_object)
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


func_4202(var_649_bool)
{
	var_651_int = 0; var_652_string = "";
	func_3581(var_651_int, "k11q01");
	var_654_bool = var_651_int == (int)9;
	if(var_654_bool != 0) {
		var_649_bool = 1;
		return 0;
	}
	var_649_bool = 0;
	return 0;
}


func_3695(var_224_float)
{
	var_225_object = Obj(); var_226_object = Obj();
	CreateFloatVector(var_226_object);
	@@var_226_object:add(var_224_float);
	SendWorldWndMessage((int)16, var_226_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2162(var_2_object, var_633_string)
{
	var_634_bool = 0;
	func_3769(var_634_bool);
	var_635_bool = var_634_bool == 0; //@nz
	if(var_635_bool != 0) {
		return 0;
	}
	var_636_bool = var_633_string == var_2_object;
	if(var_636_bool != 0) {
		return 0;
	}
	var_637_string = ""; var_638_bool = 0;
	var_633_string = var_637_string;
	var_640_bool = var_633_string == "";
	if(var_640_bool != 0) {
		var_638_bool = 0;
	} else {
		var_638_bool = 1;
	}
	func_3517(var_637_string, var_638_bool);
	var_2_object = var_633_string;
	return 0;
	
}


func_4466(var_103_object, var_104_string, var_105_float)
{
	var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_object = Obj(); var_110_bool = 0; var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_object = Obj(); var_114_bool = 0;
	GetMainOutdoorScene(var_113_object);
	var_115_bool = var_113_object == 0; //@ne
	if(var_115_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_113_object:GetLocator(var_104_string, var_114_bool, var_111_cvector, var_112_cvector);
	var_117_bool = var_114_bool == 0; //@nz
	if(var_117_bool != 0) {
		var_119_int = "Warning: outdoor scene locator " + var_104_string;
		var_121_int = var_119_int + " doesnt exist";
		Trace(var_121_int);
	}
	@@var_113_object:GetMap(var_103_object);
	var_122_bool = var_103_object == 0; //@ne
	if(var_122_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_124_float = GetByIndex(var_111_cvector, 0);
	var_125_float = GetByIndex(var_111_cvector, 2);
	@@var_103_object:SetMapParams(var_124_float, var_125_float, var_105_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_1652(var_0_object, var_521_int, var_522_object)
{
	var_524_object = Obj(); var_525_bool = 0; var_526_int = 0; var_527_bool = 0; var_528_object = Obj(); var_529_bool = 0; var_530_int = 0; var_531_bool = 0;
	var_0_object = var_522_object;
	var_532_bool = 0; var_533_object = Obj(); var_534_float = 0;
	var_522_object = var_533_object;
	func_3276(var_532_bool, var_533_object, (float)70.0);
	var_535_bool = var_532_bool == 0; //@nz
	if(var_535_bool != 0) {
		var_521_int = -2;
		return 8;
	}
	CreateDialog(var_528_object);
	var_536_int = 0;
	func_3763(var_536_int);
	@@var_528_object:SetNPCName(var_536_int);
	var_537_int = 0;
	func_3761(var_537_int);
	@@var_528_object:SetNPCDescription(var_537_int);
	var_538_string = "";
	func_3765(var_538_string);
	@@var_528_object:SetPhoto(var_538_string);
	var_539_string = "";
	func_3767(var_539_string);
	@@var_528_object:SetPhoto2(var_539_string);
	var_540_int = 0;
	func_4499(var_540_int);
	@@var_528_object:SetPlayerName(var_540_int);
	IsOverrideActive(var_529_bool);
	var_541_bool = var_529_bool;
	if(var_541_bool != 0) {
		var_521_int = -2;
		return 8;
	}
	DoDialog(var_528_object);
	var_542_bool = 0; var_543_object = Obj();
	func_3554(Obj());
	var_544_object = var_543_object;
	func_3363(var_542_bool, var_543_object);
	var_545_object = Obj(); var_546_object = Obj();
	var_522_object = var_545_object;
	var_528_object = var_546_object;
	TaskCall(7);
	func_1733(var_547_object, var_548_object, var_549_string, var_550_bool, var_545_object, var_546_object);
	TaskReturn();
	@@var_528_object:IsDialogEnd(var_531_bool);
	
Label_1715:
	var_598_bool = var_531_bool == 0; //@nz
	if(var_598_bool != 0) {
		sync();
		@@var_528_object:IsDialogEnd(var_531_bool);
		goto Label_1715;
	}
	var_522_object = Obj();
	func_3345();
	StopDialog(var_528_object);
	@@var_528_object:GetReturnValue((int)-1);
	var_530_int = var_521_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4214(var_643_bool)
{
	var_645_int = 0; var_646_string = "";
	func_3581(var_645_int, "ook11Lara1");
	var_648_bool = var_645_int == (int)0;
	if(var_648_bool != 0) {
		var_643_bool = 1;
		return 0;
	}
	var_643_bool = 0;
	return 0;
}


func_4094(var_470_bool)
{
	var_472_int = 0; var_473_string = "";
	func_3581(var_472_int, "k4q03");
	var_475_bool = var_472_int == (int)0;
	if(var_475_bool != 0) {
		var_470_bool = 1;
		return 0;
	}
	var_470_bool = 0;
	return 0;
}


func_3705(var_145_bool, var_146_string, var_147_string)
{
	var_148_object = Obj(); var_149_object = Obj();
	FindActor(var_149_object, var_146_string);
	var_150_bool = var_149_object == 0; //@ne
	if(var_150_bool != 0) {
		var_145_bool = 0;
		return 2;
	}
	Trigger(var_149_object, var_147_string);
	var_145_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3196(var_75_bool)
{
	var_75_bool = 1;
	return 0;
}


func_3198()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_4226()
{
	var_122_object = Obj(); var_123_object = Obj();
	CreateDiaryEntry(var_123_object, (int)498, (int)1, (int)528065);
	var_127_bool = 0; var_128_object = Obj(); var_129_int = 0;
	var_123_object = var_128_object;
	func_4421(var_127_bool, var_128_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3203(var_51_float, var_52_object)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0);
	GetPosition(var_56_cvector);
	@@var_52_object:GetPosition(var_57_cvector);
	var_58_cvector = var_57_cvector - var_56_cvector;
	var_51_float = var_58_cvector | var_58_cvector;
	return 6;
}


func_3458(var_171_bool, var_172_object)
{
	var_173_string = ""; var_174_int = 0; var_175_bool = 0; var_176_int = 0; var_177_string = ""; var_178_string = ""; var_179_int = 0; var_180_bool = 0; var_181_int = 0; var_182_string = "";
	var_184_int = 0;
	func_3722(var_184_int);
	var_190_int = "d" + var_184_int;
	var_178_string = var_190_int + "m";
	var_179_int = 0;
	
Label_3467:
	if((int)1 != 0) {
		var_194_int = var_179_int + (int)1;
		var_195_int = var_178_string + var_194_int;
		@@var_172_object:HasProperty(var_195_int, var_180_bool);
		var_196_bool = var_180_bool == 0; //@nz
		if(var_196_bool != 0) {
		} else {
			var_179_int = var_179_int + (int)1;
			goto Label_3467;
		}
	}
	var_197_bool = var_179_int == 0; //@nz
	if(var_197_bool != 0) {
		var_171_bool = 0;
		return 10;
	}
	var_181_int = 0;
	var_199_bool = var_179_int > (int)1;
	if(var_199_bool != 0) {
		irand(var_181_int, var_179_int);
	}
	var_201_int = var_181_int + (int)1;
	var_202_int = var_178_string + var_201_int;
	@@var_172_object:GetProperty(var_202_int, var_182_string);
	var_203_bool = 0; var_204_string = "";
	var_182_string = var_204_string;
	func_3532(var_203_bool, var_204_string);
	var_203_bool = var_171_bool;
	return 10;
	
}


func_3717(var_59_float)
{
	var_60_float = 0; var_61_float = 0;
	GetGameTime(var_61_float);
	var_61_float = var_59_float;
	return 2;
}


func_3973()
{
	SetVariable("ook11Lara1", (int)1);
	return 0;
}


func_2951(var_0_object)
{
	var_37_bool = 0;
	func_3271(var_37_bool);
	var_40_bool = var_37_bool == 0; //@nz
	if(var_40_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_2960:
	func_3127();
	goto Label_2960;
}
EMIT "Return(); Pop(0)";


func_3722(var_184_int)
{
	var_185_float = 0; var_186_float = 0;
	GetGameTime(var_186_float);
	var_188_int = 0;
	var_188_int = var_186_float / (int)24;
	var_184_int = (int)1 + var_188_int;
	return 2;
}


func_3211(var_236_bool, var_237_object, var_238_string)
{
	var_239_bool = 0; var_240_bool = 0;
	var_243_bool = IsFuncExist(var_237_object, "HasProperty", (int)2);
	var_244_bool = var_243_bool == 0; //@nz
	if(var_244_bool != 0) {
		var_236_bool = 0;
		return 2;
	}
	@@var_237_object:HasProperty(var_238_string, var_240_bool);
	var_240_bool = var_236_bool;
	return 2;
}


func_3979(var_108_object)
{
	var_109_object = Obj(); var_110_string = ""; var_111_float = 0;
	func_4449(Obj());
	var_112_object = var_109_object;
	func_4466(var_109_object, "pt_map_k2q03_arfist", (float)2);
	var_132_object = Obj();
	func_4449(var_132_object);
	@@var_108_object:ShowMap(var_132_object);
	return 0;
}


func_4239()
{
	var_112_object = Obj(); var_113_object = Obj();
	CreateDiaryEntry(var_113_object, (int)497, (int)1, (int)528064);
	var_117_bool = 0; var_118_object = Obj(); var_119_int = 0;
	var_113_object = var_118_object;
	func_4421(var_117_bool, var_118_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_912(var_0_object, var_57_int, var_58_object)
{
	var_60_object = Obj(); var_61_bool = 0; var_62_int = 0; var_63_bool = 0; var_64_object = Obj(); var_65_bool = 0; var_66_int = 0; var_67_bool = 0;
	var_0_object = var_58_object;
	var_68_bool = 0; var_69_object = Obj(); var_70_float = 0;
	var_58_object = var_69_object;
	func_3276(var_68_bool, var_69_object, (float)70.0);
	var_115_bool = var_68_bool == 0; //@nz
	if(var_115_bool != 0) {
		var_57_int = -2;
		return 8;
	}
	CreateDialog(var_64_object);
	var_116_int = 0;
	func_3763(var_116_int);
	@@var_64_object:SetNPCName(var_116_int);
	var_117_int = 0;
	func_3761(var_117_int);
	@@var_64_object:SetNPCDescription(var_117_int);
	var_118_string = "";
	func_3765(var_118_string);
	@@var_64_object:SetPhoto(var_118_string);
	var_119_string = "";
	func_3767(var_119_string);
	@@var_64_object:SetPhoto2(var_119_string);
	var_120_int = 0;
	func_4499(var_120_int);
	@@var_64_object:SetPlayerName(var_120_int);
	IsOverrideActive(var_65_bool);
	var_128_bool = var_65_bool;
	if(var_128_bool != 0) {
		var_57_int = -2;
		return 8;
	}
	DoDialog(var_64_object);
	var_129_bool = 0; var_130_object = Obj();
	func_3554(Obj());
	var_131_object = var_130_object;
	func_3363(var_129_bool, var_130_object);
	var_224_object = Obj(); var_225_object = Obj();
	var_58_object = var_224_object;
	var_64_object = var_225_object;
	TaskCall(3);
	func_993(var_226_object, var_227_object, var_228_string, var_229_bool, var_224_object, var_225_object);
	TaskReturn();
	@@var_64_object:IsDialogEnd(var_67_bool);
	
Label_975:
	var_273_bool = var_67_bool == 0; //@nz
	if(var_273_bool != 0) {
		sync();
		@@var_64_object:IsDialogEnd(var_67_bool);
		goto Label_975;
	}
	var_58_object = Obj();
	func_3345();
	StopDialog(var_64_object);
	@@var_64_object:GetReturnValue((int)-1);
	var_66_int = var_57_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3731(var_283_bool, var_284_int)
{
	var_285_int = 0;
	func_3722(var_285_int);
	var_283_bool = var_285_int == var_284_int;
	return 0;
}


func_4499(var_120_int)
{
	var_121_int = 0; var_122_int = 0;
	GetVariable("branch", var_122_int);
	var_125_bool = var_122_int == (int)0;
	if(var_125_bool != 0) {
		var_120_int = 1;
		return 2;
	EMIT "GOTO 0x11a2";
	}
	var_127_bool = var_122_int == (int)1;
	if(var_127_bool != 0) {
		var_120_int = 2;
		return 2;
	}
	var_120_int = 3;
	return 2;
}


func_2965(var_61_bool)
{
	var_62_object = Obj(); var_63_object = Obj();
	FindActor(var_63_object, "player");
	var_65_bool = var_63_object == 0; //@nz
	if(var_65_bool != 0) {
		var_61_bool = 0;
		return 2;
	}
	var_66_bool = 0; var_67_object = Obj();
	var_63_object = var_67_object;
	func_3262(var_66_bool, var_67_object);
	var_66_bool = var_61_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3223(var_228_bool, var_229_object, var_230_string, var_231_float, var_232_float, var_233_float)
{
	var_234_float = 0; var_235_float = 0;
	var_236_bool = 0; var_237_object = Obj(); var_238_string = "";
	var_229_object = var_237_object;
	var_230_string = var_238_string;
	func_3211(var_236_bool, var_237_object, var_238_string);
	var_245_bool = var_236_bool == 0; //@nz
	if(var_245_bool != 0) {
		var_228_bool = 0;
		return 2;
	}
	@@var_229_object:GetProperty(var_230_string, var_235_float);
	var_246_float = 0; var_247_float = 0; var_248_float = 0; var_249_float = 0;
	var_247_float = var_235_float + var_231_float;
	var_232_float = var_248_float;
	var_233_float = var_249_float;
	func_3570(var_246_float, var_247_float, var_248_float, var_249_float);
	@@var_229_object:SetProperty(var_230_string, var_246_float);
	var_228_bool = 1;
	return 2;
}


func_3737(var_61_string, var_62_int)
{
	var_63_string = ""; var_64_string = "";
	var_65_int = var_62_int;
	if(var_65_int != 0) {
		"idle" = "idle" + var_62_int;
	}
	var_64_string = var_61_string;
	return 2;
}


func_3995()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_4252()
{
	var_102_object = Obj(); var_103_object = Obj();
	CreateDiaryEntry(var_103_object, (int)496, (int)1, (int)528063);
	var_107_bool = 0; var_108_object = Obj(); var_109_int = 0;
	var_103_object = var_108_object;
	func_4421(var_107_bool, var_108_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3744(var_55_int)
{
	var_56_int = 0; var_57_bool = 0; var_58_int = 0; var_59_bool = 0;
	var_58_int = 0;
	
Label_3746:
	var_61_string = ""; var_62_int = 0;
	var_58_int = var_62_int;
	func_3737(var_61_string, var_62_int);
	HasAnimation(var_59_bool, "all", var_61_string);
	var_66_bool = var_59_bool == 0; //@nz
	if(var_66_bool != 0) {
	} else {
		var_58_int = var_58_int + (int)1;
		goto Label_3746;
	}
	var_58_int = var_55_int;
	return 4;
	
}


func_4001()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_2468(var_0_object, var_1_object, var_2_object, var_3_string, var_697_object, var_698_object)
{
	var_0_object = var_698_object;
	var_1_object = var_697_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_704_string = "";
		func_2531(var_698_object, "Tiredness");
		@@@var_0_object:SetMessage((int)539312);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)542603, (int)45006, (int)45004);
		@@@var_0_object:AddReply((int)539313, (int)-1, (int)41256);
		@@@var_0_object:AddReply((int)542604, (int)-1, (int)45005);
		goto Label_2501;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x9a8";
	}
Label_2501:
	var_722_bool = 0;
	func_3769(var_722_bool);
	if(var_722_bool != 0) {

	Label_2505:
		lshWaitForAnimEnd();
		var_723_string = var_3_string;
		if(var_723_string != 0) {
		} else {
			var_724_string = "";
			var_724_string = var_2_object;
			func_3501(var_724_string);
			goto Label_2505;
	}
		PlayAnimation("all", "idle");

	Label_2520:
		WaitForAnimEnd();
		var_727_string = var_3_string;
		if(var_727_string != 0) {
			goto Label_2530;
		}
		PlayAnimation("all", "idle");
		goto Label_2520;
	}
	goto Label_2530;
	
Label_2530:
	return 0;
	
}


func_2980(var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0);
	var_114_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_113_float, var_114_float);
	return 0;
}


func_4516(var_54_object)
{
	var_55_bool = GlobalVars[1];
	var_56_bool = var_55_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_57_int = 0; var_58_object = Obj();
		var_54_object = var_58_object;
		TaskCall(2);
		func_912(var_59_object, var_57_int, var_58_object);
		TaskReturn();
		var_282_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_283_bool = 0; var_284_int = 0;
	func_3731(var_283_bool, (int)2);
	if(var_283_bool != 0) {
		var_286_int = 0; var_287_object = Obj();
		var_54_object = var_287_object;
		TaskCall(0);
		func_0(var_288_object, var_286_int, var_287_object);
		TaskReturn();
		return 0;
	}
	var_401_bool = 0; var_402_int = 0;
	func_3731(var_401_bool, (int)4);
	if(var_401_bool != 0) {
		var_403_int = 0; var_404_object = Obj();
		var_54_object = var_404_object;
		TaskCall(4);
		func_1115(var_405_object, var_403_int, var_404_object);
		TaskReturn();
		return 0;
	}
	var_519_bool = 0; var_520_int = 0;
	func_3731(var_519_bool, (int)6);
	if(var_519_bool != 0) {
		var_521_int = 0; var_522_object = Obj();
		var_54_object = var_522_object;
		TaskCall(6);
		func_1652(var_523_object, var_521_int, var_522_object);
		TaskReturn();
		return 0;
	}
	var_600_bool = 0; var_601_int = 0;
	func_3731(var_600_bool, (int)11);
	if(var_600_bool != 0) {
		var_602_int = 0; var_603_object = Obj();
		var_54_object = var_603_object;
		TaskCall(8);
		func_2009(var_604_object, var_602_int, var_603_object);
		TaskReturn();
		return 0;
	}
	var_671_bool = 0; var_672_int = 0;
	func_3731(var_671_bool, (int)12);
	if(var_671_bool != 0) {
		var_673_int = 0; var_674_object = Obj();
		var_54_object = var_674_object;
		TaskCall(10);
		func_2387(var_675_object, var_673_int, var_674_object);
		TaskReturn();
		return 0;
	}
	var_732_int = 0; var_733_object = Obj();
	var_54_object = var_733_object;
	TaskCall(12);
	func_2741(var_734_object, var_732_int, var_733_object);
	TaskReturn();
	return 0;
}


func_4007()
{
	SetVariable("k2LaraVisit", (int)1);
	return 0;
}


func_4265()
{
	var_92_object = Obj(); var_93_object = Obj();
	CreateDiaryEntry(var_93_object, (int)495, (int)1, (int)528062);
	var_97_bool = 0; var_98_object = Obj(); var_99_int = 0;
	var_93_object = var_98_object;
	func_4421(var_97_bool, var_98_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2985(var_44_bool)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_object = Obj(); var_48_bool = 0;
	FindActor(var_47_object, "player");
	var_50_bool = var_47_object == 0; //@nz
	if(var_50_bool != 0) {
		var_44_bool = 0;
		return 4;
	}
	var_51_float = 0; var_52_object = Obj();
	var_47_object = var_52_object;
	func_3203(var_51_float, var_52_object);
	var_60_bool = var_51_float > (float)90000.0;
	if(var_60_bool != 0) {
		var_44_bool = 0;
		return 4;
	}
	CanSee(var_48_bool, var_47_object);
	var_48_bool = var_44_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_1196(var_0_object, var_1_object, var_2_object, var_3_string, var_427_object, var_428_object)
{
	var_0_object = var_428_object;
	var_1_object = var_427_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_434_bool = 0; var_435_object = Obj();
		var_435_object = var_1_object;
		func_4106(var_435_object);
		if(var_434_bool != 0) {
			var_440_object = Obj(); var_441_object = Obj();
			var_440_object = var_1_object;
			var_441_object = var_0_object;
			func_3868();
			var_444_object = Obj(); var_445_object = Obj();
			var_444_object = var_1_object;
			var_445_object = var_0_object;
			func_4013();
			var_448_string = "";
			func_1336(var_428_object, "Neutral");
			@@@var_0_object:SetMessage((int)525791);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)529235, (int)30690, (int)30689);
		} else {
				var_468_string = "";
				func_1336(var_428_object, "Neutral");
				@@@var_0_object:SetMessage((int)525796);
				@@@var_0_object:ClearReplies();
				var_470_bool = 0; var_471_object = Obj();
				var_471_object = var_1_object;
				func_4094(var_471_object);
				if(var_470_bool != 0) {
					@@@var_0_object:AddReply((int)525797, (int)27105, (int)27103);
				}
				var_479_bool = 0; var_480_object = Obj();
				var_480_object = var_1_object;
				func_4118(var_480_object);
				if(var_479_bool != 0) {
					@@@var_0_object:AddReply((int)525813, (int)27120, (int)27119);
				}
				var_488_bool = 0;
				var_488_bool = 1;
				var_489_bool = 0;
				var_489_bool = 0;
				var_490_bool = 0; var_491_object = Obj();
				var_491_object = var_1_object;
				func_4130(var_491_object);
				if(var_490_bool != 0) {
					var_496_bool = 0; var_497_object = Obj();
					var_497_object = var_1_object;
					func_4142(var_497_object);
					if(var_496_bool != 0) {
						var_489_bool = 1;
					}
				}
				if(var_489_bool != 1) {
					var_502_bool = 0;
					var_502_bool = 0;
					var_503_bool = 0; var_504_object = Obj();
					var_504_object = var_1_object;
					func_4154(var_504_object);
					if(var_503_bool != 0) {
						var_509_bool = 0; var_510_object = Obj();
						var_510_object = var_1_object;
						func_4142(var_510_object);
						if(var_509_bool != 0) {
							var_502_bool = 1;
						}
					}
					if(var_502_bool != 1) {
						var_488_bool = 0;
					}
				}
				if(var_488_bool != 0) {
					@@@var_0_object:AddReply((int)525819, (int)27126, (int)27125);
				}
				@@@var_0_object:AddReply((int)525798, (int)-1, (int)27104);
				goto Label_1306;
		}
	}
Label_1306:
	var_460_bool = 0;
	func_3769(var_460_bool);
	if(var_460_bool != 0) {

	Label_1310:
		lshWaitForAnimEnd();
		var_461_string = var_3_string;
		if(var_461_string != 0) {
		} else {
			var_462_string = "";
			var_462_string = var_2_object;
			func_3501(var_462_string);
			goto Label_1310;
	}
		PlayAnimation("all", "idle");

	Label_1325:
		WaitForAnimEnd();
		var_465_string = var_3_string;
		if(var_465_string != 0) {
			goto Label_1335;
		}
		PlayAnimation("all", "idle");
		goto Label_1325;

	}
	goto Label_1335;
	
Label_1335:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4b0";


func_3245(var_197_object, var_198_string, var_199_int)
{
	var_200_int = 0; var_201_int = 0;
	@@var_197_object:GetProperty(var_198_string, var_201_int);
	var_202_int = var_201_int + var_199_int;
	@@var_197_object:SetProperty(var_198_string, var_202_int);
	return 2;
}


func_3501(var_257_string)
{
	var_258_bool = 0; var_259_float = 0; var_260_float = 0; var_261_bool = 0; var_262_float = 0; var_263_float = 0;
	lshHasAnimation(var_261_bool, var_257_string);
	var_264_bool = var_261_bool;
	if(var_264_bool != 0) {
		lshGetAnimTimes(var_257_string, var_262_float, var_263_float);
		lshPlayAnimation(var_262_float, var_263_float, (bool)0);
	} else {
		var_267_int = "Can't find lsh animation : " + var_257_string;
		Trace(var_267_int);
	}
	return 6;
	
}


func_4013()
{
	SetVariable("k4LaraVisit", (int)1);
	return 0;
}


func_3761(var_117_int)
{
	var_117_int = 515541;
	return 0;
}


func_3763(var_116_int)
{
	var_116_int = 502866;
	return 0;
}


func_3252(var_44_bool, var_45_cvector)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_bool = 0;
	GetPosition(var_49_cvector);
	var_50_cvector = var_45_cvector - var_49_cvector;
	var_52_float = GetByIndex(var_50_cvector, 0);
	var_53_float = GetByIndex(var_50_cvector, 2);
	Rotate(var_52_float, var_53_float, var_51_bool);
	var_51_bool = var_44_bool;
	return 6;
}


func_3765(var_118_string)
{
	var_118_string = "ui/NPC_Lara.png";
	return 0;
}


func_4278()
{
	var_82_object = Obj(); var_83_object = Obj();
	CreateDiaryEntry(var_83_object, (int)494, (int)1, (int)528061);
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0;
	var_83_object = var_88_object;
	func_4421(var_87_bool, var_88_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3767(var_119_string)
{
	var_119_string = "ui/NPC_Lara_b.png";
	return 0;
}


func_2741(var_0_object, var_732_int, var_733_object)
{
	var_735_object = Obj(); var_736_bool = 0; var_737_int = 0; var_738_bool = 0; var_739_object = Obj(); var_740_bool = 0; var_741_int = 0; var_742_bool = 0;
	var_0_object = var_733_object;
	var_743_bool = 0; var_744_object = Obj(); var_745_float = 0;
	var_733_object = var_744_object;
	func_3276(var_743_bool, var_744_object, (float)70.0);
	var_746_bool = var_743_bool == 0; //@nz
	if(var_746_bool != 0) {
		var_732_int = -2;
		return 8;
	}
	CreateDialog(var_739_object);
	var_747_int = 0;
	func_3763(var_747_int);
	@@var_739_object:SetNPCName(var_747_int);
	var_748_int = 0;
	func_3761(var_748_int);
	@@var_739_object:SetNPCDescription(var_748_int);
	var_749_string = "";
	func_3765(var_749_string);
	@@var_739_object:SetPhoto(var_749_string);
	var_750_string = "";
	func_3767(var_750_string);
	@@var_739_object:SetPhoto2(var_750_string);
	var_751_int = 0;
	func_4499(var_751_int);
	@@var_739_object:SetPlayerName(var_751_int);
	IsOverrideActive(var_740_bool);
	var_752_bool = var_740_bool;
	if(var_752_bool != 0) {
		var_732_int = -2;
		return 8;
	}
	DoDialog(var_739_object);
	var_753_bool = 0; var_754_object = Obj();
	func_3554(Obj());
	var_755_object = var_754_object;
	func_3363(var_753_bool, var_754_object);
	var_756_object = Obj(); var_757_object = Obj();
	var_733_object = var_756_object;
	var_739_object = var_757_object;
	TaskCall(13);
	func_2822(var_758_object, var_759_object, var_760_string, var_761_bool, var_756_object, var_757_object);
	TaskReturn();
	@@var_739_object:IsDialogEnd(var_742_bool);
	
Label_2804:
	var_786_bool = var_742_bool == 0; //@nz
	if(var_786_bool != 0) {
		sync();
		@@var_739_object:IsDialogEnd(var_742_bool);
		goto Label_2804;
	}
	var_733_object = Obj();
	func_3345();
	StopDialog(var_739_object);
	@@var_739_object:GetReturnValue((int)-1);
	var_741_int = var_732_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3769(var_111_bool)
{
	var_111_bool = 1;
	return 0;
}


func_4019(var_102_object)
{
	var_103_object = Obj(); var_104_string = ""; var_105_float = 0;
	func_4449(Obj());
	var_106_object = var_103_object;
	func_4466(var_103_object, "pt_map_alexandr", (float)2);
	var_126_object = Obj();
	func_4449(var_126_object);
	@@var_102_object:ShowMap(var_126_object);
	return 0;
}


func_3771(var_215_object)
{
	var_217_bool = 0; var_218_object = Obj(); var_219_float = 0;
	var_215_object = var_218_object;
	func_3660(var_217_bool, var_218_object, (float)0.05000000074505806);
	return 0;
}


func_3517(var_235_string, var_236_bool)
{
	var_239_bool = 0; var_240_float = 0; var_241_float = 0; var_242_bool = 0; var_243_float = 0; var_244_float = 0;
	lshHasAnimation(var_242_bool, var_235_string);
	var_245_bool = var_242_bool;
	if(var_245_bool != 0) {
		lshGetAnimTimes(var_235_string, var_243_float, var_244_float);
		lshPlayAnimation(var_243_float, var_244_float, var_236_bool);
	} else {
		var_247_int = "Can't find lsh animation : " + var_235_string;
		Trace(var_247_int);
	}
	return 6;
	
}


func_3262(var_40_bool, var_41_object)
{
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	@@var_41_object:GetPosition(var_43_cvector);
	var_44_bool = 0; var_45_cvector = CVector(0,0,0);
	var_43_cvector = var_45_cvector;
	func_3252(var_44_bool, var_45_cvector);
	var_44_bool = var_40_bool;
	return 2;
}


func_3007()
{
	var_790_float = 0; var_791_float = 0;
	rand(var_791_float, (int)8, (int)16);
	SetTimer((int)10, var_791_float);
	return 2;
}


func_3778()
{
	SetVariable("k2q02", (int)2);
	func_4304();
	return 0;
}


func_4291()
{
	var_57_object = Obj(); var_58_object = Obj();
	CreateDiaryEntry(var_58_object, (int)493, (int)1, (int)528060);
	var_62_bool = 0; var_63_object = Obj(); var_64_int = 0;
	var_58_object = var_63_object;
	func_4421(var_62_bool, var_63_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4035(var_151_object)
{
	Trace("etorfin is given");
	var_154_object = Obj(); var_155_string = ""; var_156_int = 0;
	var_151_object = var_154_object;
	func_3647(var_154_object, "etorfin", (int)1);
	return 0;
}


func_1733(var_0_object, var_1_object, var_2_object, var_3_string, var_545_object, var_546_object)
{
	var_0_object = var_546_object;
	var_1_object = var_545_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_552_string = "";
		func_1819(var_546_object, "Neutral");
		@@@var_0_object:SetMessage((int)526079);
		@@@var_0_object:ClearReplies();
		var_561_bool = 0;
		var_561_bool = 0;
		var_562_bool = 0;
		var_562_bool = 0;
		var_563_bool = 0; var_564_object = Obj();
		var_564_object = var_1_object;
		func_4166(var_564_object);
		if(var_563_bool != 0) {
			var_569_bool = 0; var_570_object = Obj();
			var_570_object = var_1_object;
			func_4178(var_570_object);
			if(var_569_bool != 0) {
				var_562_bool = 1;
			}
		}
		if(var_562_bool != 0) {
			var_575_bool = 0; var_576_object = Obj();
			var_576_object = var_1_object;
			func_4190(var_576_object);
			if(var_575_bool != 0) {
				var_561_bool = 1;
			}
		}
		if(var_561_bool != 0) {
			@@@var_0_object:AddReply((int)526080, (int)27367, (int)27366);
		}
		@@@var_0_object:AddReply((int)526083, (int)-1, (int)27369);
		@@@var_0_object:AddReply((int)528852, (int)-1, (int)30272);
		goto Label_1789;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x6c9";
	}
Label_1789:
	var_590_bool = 0;
	func_3769(var_590_bool);
	if(var_590_bool != 0) {

	Label_1793:
		lshWaitForAnimEnd();
		var_591_string = var_3_string;
		if(var_591_string != 0) {
		} else {
			var_592_string = "";
			var_592_string = var_2_object;
			func_3501(var_592_string);
			goto Label_1793;
	}
		PlayAnimation("all", "idle");

	Label_1808:
		WaitForAnimEnd();
		var_595_string = var_3_string;
		if(var_595_string != 0) {
			goto Label_1818;
		}
		PlayAnimation("all", "idle");
		goto Label_1808;
	}
	goto Label_1818;
	
Label_1818:
	return 0;
	
}


func_3271(var_37_bool)
{
	var_38_bool = 0; var_39_bool = 0;
	IsLoaded(var_39_bool);
	var_39_bool = var_37_bool;
	return 2;
}


func_3016()
{
	KillTimer((int)10);
	return 0;
}


func_3787()
{
	SetVariable("ook2Lara1", (int)1);
	return 0;
}


func_3276(var_68_bool, var_69_object, var_70_float)
{
	var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_bool = 0; var_79_bool = 0; var_80_float = 0; var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_bool = 0; var_88_bool = 0;
	@@var_69_object:GetPosition(var_81_cvector);
	@@var_69_object:GetEyesHeight(var_80_float);
	var_89_float = GetByIndex(var_81_cvector, 1);
	var_89_float = var_89_float + var_80_float;
	SetByIndex(var_81_cvector, 1) = var_89_float;
	GetPosition(var_82_cvector);
	GetEyesHeight(var_80_float);
	var_90_float = GetByIndex(var_82_cvector, 1);
	var_90_float = var_90_float + var_80_float;
	SetByIndex(var_82_cvector, 1) = var_90_float;
	var_83_cvector = var_81_cvector - var_82_cvector;
	var_91_float = GetByIndex(var_83_cvector, 1);
	SetByIndex(var_83_cvector, 1) = (float)0;
	var_92_int = var_83_cvector | var_83_cvector;
	var_93_float = sqrt(var_92_int);
	var_83_cvector = var_83_cvector / var_93_float;
	var_84_cvector = -var_83_cvector;
	var_94_float = var_83_cvector * var_70_float;
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0);
	var_96_cvector = var_84_cvector ^ CVector(0.0, 1.0, 0.0);
	func_3560(var_95_cvector, var_96_cvector);
	var_104_float = var_95_cvector * (int)25;
	var_105_int = var_94_float + var_104_float;
	var_85_cvector = var_105_int - CVector(0.0, 10.0, 0.0);
	var_86_cvector = var_82_cvector + var_85_cvector;
	IsOverrideActive(var_87_bool);
	var_107_bool = var_87_bool;
	if(var_107_bool != 0) {
		var_68_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_86_cvector, var_84_cvector, (bool)1);
	var_109_float = GetByIndex(var_85_cvector, 0);
	var_110_float = GetByIndex(var_85_cvector, 2);
	Rotate(var_109_float, var_110_float);
	var_111_bool = 0;
	func_3769(var_111_bool);
	if(var_111_bool != 0) {
	} else {
		HasAnimationTrack(var_88_bool, "head");
		var_113_bool = var_88_bool;
		if(var_113_bool == 0) goto Label_3339;
		LookAsyncCamera("head");
	}
Label_3339:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_68_bool = 1;
	return 18;
	
}


func_3532(var_163_bool, var_164_string)
{
	var_165_bool = 0; var_166_bool = 0;
	var_167_bool = 0;
	func_3769(var_167_bool);
	if(var_167_bool != 0) {
		lshHasSpeech(var_166_bool, var_164_string);
		var_168_bool = var_166_bool;
		if(var_168_bool != 0) {
			lshPlaySpeech(var_164_string);
			var_163_bool = 1;
			return 2;
		}
	}
	var_163_bool = 0;
	return 2;
}


func_4046(var_326_bool)
{
	var_328_int = 0; var_329_string = "";
	func_3581(var_328_int, "k2q02");
	var_331_bool = var_328_int == (int)1;
	if(var_331_bool != 0) {
		var_326_bool = 1;
		return 0;
	}
	var_326_bool = 0;
	return 0;
}


func_4304()
{
	var_151_object = Obj(); var_152_object = Obj();
	CreateDiaryEntry(var_152_object, (int)472, (int)2, (int)527788);
	var_156_bool = 0; var_157_object = Obj(); var_158_int = 0;
	var_152_object = var_157_object;
	func_4421(var_156_bool, var_157_object, (int)470);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3793()
{
	var_44_object = Obj(); var_45_object = Obj();
	SetVariable("k2q03", (int)1);
	func_4449(Obj());
	var_48_object = var_45_object;
	var_59_float = 0;
	func_3717(var_59_float);
	@@var_45_object:AddMark("k2q03Arfist", "pt_map_k2q03_arfist", (int)0, (int)529268, var_59_float);
	func_4317();
	func_4343();
	var_93_object = Obj(); var_94_string = "";
	func_3586(var_93_object, "quest_k2_03");
	var_101_bool = 0; var_102_string = ""; var_103_string = "";
	func_3705(var_101_bool, "quest_k2_03", "place_arfist");
	return 2;
}
EMIT "Stack[-1] = 0";


func_2009(var_0_object, var_602_int, var_603_object)
{
	var_605_object = Obj(); var_606_bool = 0; var_607_int = 0; var_608_bool = 0; var_609_object = Obj(); var_610_bool = 0; var_611_int = 0; var_612_bool = 0;
	var_0_object = var_603_object;
	var_613_bool = 0; var_614_object = Obj(); var_615_float = 0;
	var_603_object = var_614_object;
	func_3276(var_613_bool, var_614_object, (float)70.0);
	var_616_bool = var_613_bool == 0; //@nz
	if(var_616_bool != 0) {
		var_602_int = -2;
		return 8;
	}
	CreateDialog(var_609_object);
	var_617_int = 0;
	func_3763(var_617_int);
	@@var_609_object:SetNPCName(var_617_int);
	var_618_int = 0;
	func_3761(var_618_int);
	@@var_609_object:SetNPCDescription(var_618_int);
	var_619_string = "";
	func_3765(var_619_string);
	@@var_609_object:SetPhoto(var_619_string);
	var_620_string = "";
	func_3767(var_620_string);
	@@var_609_object:SetPhoto2(var_620_string);
	var_621_int = 0;
	func_4499(var_621_int);
	@@var_609_object:SetPlayerName(var_621_int);
	IsOverrideActive(var_610_bool);
	var_622_bool = var_610_bool;
	if(var_622_bool != 0) {
		var_602_int = -2;
		return 8;
	}
	DoDialog(var_609_object);
	var_623_bool = 0; var_624_object = Obj();
	func_3554(Obj());
	var_625_object = var_624_object;
	func_3363(var_623_bool, var_624_object);
	var_626_object = Obj(); var_627_object = Obj();
	var_603_object = var_626_object;
	var_609_object = var_627_object;
	TaskCall(9);
	func_2090(var_628_object, var_629_object, var_630_string, var_631_bool, var_626_object, var_627_object);
	TaskReturn();
	@@var_609_object:IsDialogEnd(var_612_bool);
	
Label_2072:
	var_669_bool = var_612_bool == 0; //@nz
	if(var_669_bool != 0) {
		sync();
		@@var_609_object:IsDialogEnd(var_612_bool);
		goto Label_2072;
	}
	var_603_object = Obj();
	func_3345();
	StopDialog(var_609_object);
	@@var_609_object:GetReturnValue((int)-1);
	var_611_int = var_602_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4058(var_318_bool)
{
	var_320_int = 0; var_321_string = "";
	func_3581(var_320_int, "ook2Lara1");
	var_325_bool = var_320_int == (int)0;
	if(var_325_bool != 0) {
		var_318_bool = 1;
		return 0;
	}
	var_318_bool = 0;
	return 0;
}


func_3547()
{
	var_39_bool = 0;
	func_3769(var_39_bool);
	if(var_39_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_4317()
{
	var_62_object = Obj(); var_63_object = Obj();
	CreateDiaryEntry(var_63_object, (int)476, (int)2, (int)527792);
	var_67_bool = 0; var_68_object = Obj(); var_69_int = 0;
	var_63_object = var_68_object;
	func_4421(var_67_bool, var_68_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_224(var_2_object, var_341_string)
{
	var_342_bool = 0;
	func_3769(var_342_bool);
	var_343_bool = var_342_bool == 0; //@nz
	if(var_343_bool != 0) {
		return 0;
	}
	var_344_bool = var_341_string == var_2_object;
	if(var_344_bool != 0) {
		return 0;
	}
	var_345_string = ""; var_346_bool = 0;
	var_341_string = var_345_string;
	var_348_bool = var_341_string == "";
	if(var_348_bool != 0) {
		var_346_bool = 0;
	} else {
		var_346_bool = 1;
	}
	func_3517(var_345_string, var_346_bool);
	var_2_object = var_341_string;
	return 0;
	
}


func_993(var_0_object, var_1_object, var_2_object, var_3_string, var_224_object, var_225_object)
{
	var_0_object = var_225_object;
	var_1_object = var_224_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_231_string = "";
		func_1051(var_225_object, "Neutral");
		@@@var_0_object:SetMessage((int)525495);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)525496, (int)-1, (int)26852);
		@@@var_0_object:AddReply((int)529314, (int)-1, (int)30768);
		goto Label_1021;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x3e5";
	}
Label_1021:
	var_255_bool = 0;
	func_3769(var_255_bool);
	if(var_255_bool != 0) {

	Label_1025:
		lshWaitForAnimEnd();
		var_256_string = var_3_string;
		if(var_256_string != 0) {
		} else {
			var_257_string = "";
			var_257_string = var_2_object;
			func_3501(var_257_string);
			goto Label_1025;
	}
		PlayAnimation("all", "idle");

	Label_1040:
		WaitForAnimEnd();
		var_270_string = var_3_string;
		if(var_270_string != 0) {
			goto Label_1050;
		}
		PlayAnimation("all", "idle");
		goto Label_1040;
	}
	goto Label_1050;
	
Label_1050:
	return 0;
	
}


func_3554(var_131_object)
{
	var_132_object = Obj(); var_133_object = Obj();
	self(var_133_object);
	var_133_object = var_131_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2531(var_2_object, var_704_string)
{
	var_705_bool = 0;
	func_3769(var_705_bool);
	var_706_bool = var_705_bool == 0; //@nz
	if(var_706_bool != 0) {
		return 0;
	}
	var_707_bool = var_704_string == var_2_object;
	if(var_707_bool != 0) {
		return 0;
	}
	var_708_string = ""; var_709_bool = 0;
	var_704_string = var_708_string;
	var_711_bool = var_704_string == "";
	if(var_711_bool != 0) {
		var_709_bool = 0;
	} else {
		var_709_bool = 1;
	}
	func_3517(var_708_string, var_709_bool);
	var_2_object = var_704_string;
	return 0;
	
}


func_4070(var_372_bool)
{
	var_374_int = 0; var_375_string = "";
	func_3581(var_374_int, "k2q03");
	var_377_bool = var_374_int == (int)0;
	if(var_377_bool != 0) {
		var_372_bool = 1;
		return 0;
	}
	var_372_bool = 0;
	return 0;
}


func_3560(var_95_cvector, var_96_cvector)
{
	var_98_float = 0; var_99_float = 0;
	var_100_int = var_96_cvector | var_96_cvector;
	var_99_float = sqrt(var_100_int);
	var_101_float = 9.999999974752427e-07;
	var_102_bool = var_99_float < var_101_float;
	if(var_102_bool != 0) {
		var_95_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_95_cvector = var_96_cvector / var_99_float;
	return 2;
}


func_4330()
{
	var_175_object = Obj(); var_176_object = Obj();
	CreateDiaryEntry(var_176_object, (int)479, (int)2, (int)527795);
	var_180_bool = 0; var_181_object = Obj(); var_182_int = 0;
	var_176_object = var_181_object;
	func_4421(var_180_bool, var_181_object, (int)476);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4082(var_384_bool)
{
	var_386_int = 0; var_387_string = "";
	func_3581(var_386_int, "k2q03");
	var_389_bool = var_386_int == (int)2;
	if(var_389_bool != 0) {
		var_384_bool = 1;
		return 0;
	}
	var_384_bool = 0;
	return 0;
}


func_3570(var_246_float, var_247_float, var_248_float, var_249_float)
{
	var_250_bool = var_247_float < var_248_float;
	if(var_250_bool != 0) {
		var_248_float = var_246_float;
		return 0;
	}
	var_251_bool = var_247_float > var_249_float;
	if(var_251_bool != 0) {
		var_249_float = var_246_float;
		return 0;
	}
	var_247_float = var_246_float;
	return 0;
}


func_3828()
{
	func_4330();
	var_183_bool = 0; var_184_string = ""; var_185_string = "";
	func_3705(var_183_bool, "quest_k2_03", "completed");
	return 0;
}


func_4343()
{
	var_85_object = Obj(); var_86_object = Obj();
	CreateDiaryEntry(var_86_object, (int)477, (int)2, (int)527793);
	var_90_bool = 0; var_91_object = Obj(); var_92_int = 0;
	var_86_object = var_91_object;
	func_4421(var_90_bool, var_91_object, (int)476);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3581(var_320_int, var_321_string)
{
	var_322_int = 0; var_323_int = 0;
	GetVariable(var_321_string, var_323_int);
	var_323_int = var_320_int;
	return 2;
}


func_3838()
{
	var_44_object = Obj(); var_45_object = Obj();
	SetVariable("k4q03", (int)1);
	func_4449(Obj());
	var_48_object = var_45_object;
	var_59_float = 0;
	func_3717(var_59_float);
	@@var_45_object:AddMark("k4q03LaraGotoAlexandr", "pt_map_alexandr", (int)0, (int)515280, var_59_float);
	func_4356();
	func_4382();
	var_93_object = Obj(); var_94_string = "";
	func_3586(var_93_object, "quest_k4_03");
	return 2;
}
EMIT "Stack[-1] = 0";


