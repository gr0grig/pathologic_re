// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,IsLoaded/1,RemoveActor/1,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Patronage|A:SetMessage|A:ClearReplies|A:AddReply|W:Neutral|W:all|W:idle|W:Rage|W:Discontent|W:Untrust|W:cleanup|W:restore|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:oob6Mat1|W:b6q01|W:b6q01MatGotoByk|W:pt_b6q01_bull|A:AddMark|W:alpha_pills|A:RemoveItemByType|W:quest_b6_01|W:init_altar|W:clean_termitnik|W:playsound|W:giveitem|W:oob6Mat2|W:pt_map_kurgan|A:ShowMap|W:recipe1 is given|W:recipe1|A:GetItemCountOfType|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:ui/NPC_Mat.png|W:ui/NPC_Mat_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x3dc
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xf4 vars=int,int
// @TASK_2: vars=cvector,bool params=0
// @EVENT_26: op=0x3e0 vars=string
// @EVENT_6: op=0x3f4 vars=
// @EVENT_5: op=0x401 vars=
// @EVENT_7: op=0x44a vars=int
// @EVENT_45: op=0x48c vars=bool
// @EVENT_0: op=0x498 vars=object
// @PE: 0x51,0xde,0xf4,0x3d4,0x3dc,0x401,0x44a,0x470,0x48c,0x6aa,0x6b0,0x6de,0x6e4,0x6ea,0x6fa,0x705,0x711,0x71d,0x729,0x733,0x73f

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	if((int)1 != 0) {
		func_1584();
		var_12_bool = var_8_bool == (int)21809;
		if(var_12_bool != 0) {
			var_13_object = Obj(); var_14_object = Obj();
			var_13_object = var_1_object;
			var_14_object = var_0_object;
			func_1712();
		}
		var_41_bool = var_8_bool == (int)21822;
		if(var_41_bool != 0) {
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_1712();
		}
		var_45_bool = var_8_bool == (int)21834;
		if(var_45_bool != 0) {
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_1712();
		}
		var_49_bool = var_8_bool == (int)21895;
		if(var_49_bool != 0) {
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_object;
			func_1721(var_51_object);
			var_91_object = Obj(); var_92_object = Obj();
			var_91_object = var_1_object;
			var_92_object = var_0_object;
			func_1770(var_92_object);
			var_117_object = Obj(); var_118_object = Obj();
			var_117_object = var_1_object;
			var_118_object = var_0_object;
			func_1758();
			var_121_object = Obj(); var_122_object = Obj();
			var_121_object = var_1_object;
			var_122_object = var_0_object;
			func_1786(var_122_object);
		}
		var_146_bool = var_8_bool == (int)21890;
		if(var_146_bool != 0) {
			var_147_object = Obj(); var_148_object = Obj();
			var_147_object = var_1_object;
			var_148_object = var_0_object;
			func_1721(var_148_object);
			var_149_object = Obj(); var_150_object = Obj();
			var_149_object = var_1_object;
			var_150_object = var_0_object;
			func_1770(var_150_object);
			var_151_object = Obj(); var_152_object = Obj();
			var_151_object = var_1_object;
			var_152_object = var_0_object;
			func_1786(var_152_object);
			var_153_object = Obj(); var_154_object = Obj();
			var_153_object = var_1_object;
			var_154_object = var_0_object;
			func_1758();
		}
		var_156_bool = var_8_bool == (int)29926;
		if(var_156_bool != 0) {
			var_157_object = Obj(); var_158_object = Obj();
			var_157_object = var_1_object;
			var_158_object = var_0_object;
			func_1764();
		}
		var_162_bool = var_7_cvector == (int)21800;
		if(var_162_bool != 0) {
			var_163_bool = 0; var_164_object = Obj();
			var_164_object = var_1_object;
			func_1809(var_164_object);
			if(var_163_bool != 0) {
				var_171_object = Obj(); var_172_object = Obj();
				var_171_object = var_1_object;
				var_172_object = var_0_object;
				func_1706();
				var_175_string = "";
				func_222(var_8_bool, "Patronage");
				@@@var_0_object:SetMessage((int)520595);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)520596, (int)21802, (int)21801);
				@@@var_0_object:AddReply((int)520621, (int)29795, (int)21829);
				return 0;
			}
			var_199_string = "";
			func_222(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520622);
			@@@var_0_object:ClearReplies();
			var_201_bool = 0; var_202_object = Obj();
			var_202_object = var_1_object;
			func_1821(var_202_object);
			if(var_201_bool != 0) {
				@@@var_0_object:AddReply((int)520623, (int)21833, (int)21832);
			}
			var_210_bool = 0;
			var_210_bool = 0;
			var_211_bool = 0; var_212_object = Obj();
			var_212_object = var_1_object;
			func_1833(var_211_bool, var_212_object);
			if(var_211_bool != 0) {
				var_219_bool = 0; var_220_object = Obj();
				var_220_object = var_1_object;
				func_1843(var_220_object);
				if(var_219_bool != 0) {
					var_210_bool = 1;
				}
			}
			if(var_210_bool != 0) {
				@@@var_0_object:AddReply((int)520626, (int)21836, (int)21835);
			}
			var_228_bool = 0;
			var_228_bool = 0;
			var_229_bool = 0; var_230_object = Obj();
			var_230_object = var_1_object;
			func_1843(var_230_object);
			if(var_229_bool != 0) {
				var_231_bool = 0; var_232_object = Obj();
				var_232_object = var_1_object;
				func_1855(var_231_bool, var_232_object);
				if(var_231_bool != 0) {
					var_228_bool = 1;
				}
			}
			if(var_228_bool != 0) {
				@@@var_0_object:AddReply((int)520686, (int)21897, (int)21896);
			}
			var_245_bool = 0; var_246_object = Obj();
			var_246_object = var_1_object;
			func_1797(var_246_object);
			if(var_245_bool != 0) {
				@@@var_0_object:AddReply((int)528534, (int)29927, (int)29926);
			}
			@@@var_0_object:AddReply((int)520629, (int)-1, (int)21838);
			return 0;
		}
		var_258_bool = var_7_cvector == (int)29927;
		if(var_258_bool != 0) {
			var_259_string = "";
			func_222(var_8_bool, "Patronage");
			@@@var_0_object:SetMessage((int)528535);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528536, (int)29929, (int)29928);
			return 0;
		}
		var_265_bool = var_7_cvector == (int)29929;
		if(var_265_bool != 0) {
			var_266_string = "";
			func_222(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528537);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528538, (int)29931, (int)29930);
			return 0;
		}
		var_272_bool = var_7_cvector == (int)29931;
		if(var_272_bool != 0) {
			var_273_string = "";
			func_222(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528539);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528540, (int)29933, (int)29932);
			return 0;
		}
		var_279_bool = var_7_cvector == (int)29933;
		if(var_279_bool != 0) {
			var_280_string = "";
			func_222(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528541);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528542, (int)29935, (int)29934);
			return 0;
		}
		var_286_bool = var_7_cvector == (int)29935;
		if(var_286_bool != 0) {
			var_287_string = "";
			func_222(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528543);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528544, (int)29937, (int)29936);
			return 0;
		}
		var_293_bool = var_7_cvector == (int)29937;
		if(var_293_bool != 0) {
			var_294_string = "";
			func_222(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528545);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528546, (int)-1, (int)29938);
			return 0;
		}
		var_300_bool = var_7_cvector == (int)21897;
		if(var_300_bool != 0) {
			var_301_string = "";
			func_222(var_8_bool, "Rage");
			@@@var_0_object:SetMessage((int)520687);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520689, (int)21900, (int)21899);
			@@@var_0_object:AddReply((int)520688, (int)-1, (int)21898);
			return 0;
		}
		var_310_bool = var_7_cvector == (int)21900;
		if(var_310_bool != 0) {
			var_311_string = "";
			func_222(var_8_bool, "Rage");
			@@@var_0_object:SetMessage((int)520690);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520691, (int)-1, (int)21901);
			@@@var_0_object:AddReply((int)520692, (int)-1, (int)21902);
			return 0;
		}
		var_320_bool = var_7_cvector == (int)21836;
		if(var_320_bool != 0) {
			var_321_string = "";
			func_222(var_8_bool, "Patronage");
			@@@var_0_object:SetMessage((int)520627);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520628, (int)21885, (int)21837);
			@@@var_0_object:AddReply((int)520677, (int)21887, (int)21886);
			return 0;
		}
		var_330_bool = var_7_cvector == (int)21887;
		if(var_330_bool != 0) {
			var_331_string = "";
			func_222(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520678);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520679, (int)21885, (int)21888);
			return 0;
		}
		var_337_bool = var_7_cvector == (int)21885;
		if(var_337_bool != 0) {
			var_338_string = "";
			func_222(var_8_bool, "Patronage");
			@@@var_0_object:SetMessage((int)520676);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520681, (int)21892, (int)21891);
			@@@var_0_object:AddReply((int)520680, (int)-1, (int)21890);
			return 0;
		}
		var_347_bool = var_7_cvector == (int)21892;
		if(var_347_bool != 0) {
			var_348_string = "";
			func_222(var_8_bool, "Patronage");
			@@@var_0_object:SetMessage((int)520682);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520683, (int)21894, (int)21893);
			@@@var_0_object:AddReply((int)528420, (int)29803, (int)29802);
			return 0;
		}
		var_357_bool = var_7_cvector == (int)29803;
		if(var_357_bool != 0) {
			var_358_string = "";
			func_222(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)528421);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528422, (int)21894, (int)29804);
			return 0;
		}
		var_364_bool = var_7_cvector == (int)21894;
		if(var_364_bool != 0) {
			var_365_string = "";
			func_222(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520684);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520685, (int)-1, (int)21895);
			return 0;
		}
		var_371_bool = var_7_cvector == (int)21833;
		if(var_371_bool != 0) {
			var_372_string = "";
			func_222(var_8_bool, "Rage");
			@@@var_0_object:SetMessage((int)520624);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520625, (int)-1, (int)21834);
			return 0;
		}
		var_378_bool = var_7_cvector == (int)21802;
		if(var_378_bool != 0) {
			var_379_string = "";
			func_222(var_8_bool, "Patronage");
			@@@var_0_object:SetMessage((int)520597);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528414, (int)29795, (int)29794);
			return 0;
		}
		var_385_bool = var_7_cvector == (int)29795;
		if(var_385_bool != 0) {
			var_386_string = "";
			func_222(var_8_bool, "Rage");
			@@@var_0_object:SetMessage((int)528415);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)528416, (int)29798, (int)29797);
			@@@var_0_object:AddReply((int)528418, (int)21806, (int)29799);
			return 0;
		}
		var_395_bool = var_7_cvector == (int)29798;
		if(var_395_bool != 0) {
			var_396_string = "";
			func_222(var_8_bool, "Discontent");
			@@@var_0_object:SetMessage((int)528417);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520598, (int)21804, (int)21803);
			@@@var_0_object:AddReply((int)520620, (int)21808, (int)21827);
			return 0;
		}
		var_405_bool = var_7_cvector == (int)21804;
		if(var_405_bool != 0) {
			var_406_string = "";
			func_222(var_8_bool, "Patronage");
			@@@var_0_object:SetMessage((int)520599);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520600, (int)21806, (int)21805);
			return 0;
		}
		var_412_bool = var_7_cvector == (int)21806;
		if(var_412_bool != 0) {
			var_413_string = "";
			func_222(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)520601);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520602, (int)21808, (int)21807);
			@@@var_0_object:AddReply((int)520605, (int)21811, (int)21810);
			return 0;
		}
		var_422_bool = var_7_cvector == (int)21811;
		if(var_422_bool != 0) {
			var_423_string = "";
			func_222(var_8_bool, "Untrust");
			@@@var_0_object:SetMessage((int)520606);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520607, (int)21813, (int)21812);
			@@@var_0_object:AddReply((int)520617, (int)21824, (int)21823);
			return 0;
		}
		var_432_bool = var_7_cvector == (int)21824;
		if(var_432_bool != 0) {
			var_433_string = "";
			func_222(var_8_bool, "Untrust");
			@@@var_0_object:SetMessage((int)520618);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520619, (int)21815, (int)21825);
			return 0;
		}
		var_439_bool = var_7_cvector == (int)21813;
		if(var_439_bool != 0) {
			var_440_string = "";
			func_222(var_8_bool, "Untrust");
			@@@var_0_object:SetMessage((int)520608);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520609, (int)21815, (int)21814);
			@@@var_0_object:AddReply((int)520616, (int)-1, (int)21822);
			return 0;
		}
		var_449_bool = var_7_cvector == (int)21815;
		if(var_449_bool != 0) {
			var_450_string = "";
			func_222(var_8_bool, "Untrust");
			@@@var_0_object:SetMessage((int)520610);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520611, (int)21817, (int)21816);
			@@@var_0_object:AddReply((int)520615, (int)21817, (int)21821);
			return 0;
		}
		var_459_bool = var_7_cvector == (int)21817;
		if(var_459_bool != 0) {
			var_460_string = "";
			func_222(var_8_bool, "Rage");
			@@@var_0_object:SetMessage((int)520612);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520613, (int)21808, (int)21818);
			@@@var_0_object:AddReply((int)520614, (int)-1, (int)21820);
			return 0;
		}
		var_469_bool = var_7_cvector == (int)21808;
		if(var_469_bool != 0) {
			var_470_string = "";
			func_222(var_8_bool, "Rage");
			@@@var_0_object:SetMessage((int)520603);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520604, (int)-1, (int)21809);
			@@@var_0_object:AddReply((int)528419, (int)-1, (int)29801);
			return 0;
		}
		var_3_string = true;
		var_478_bool = 0;
		func_2027(var_478_bool);
		if(var_478_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xf5";
	
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0;
	var_11_bool = var_7_string == "cleanup";
	if(var_11_bool != 0) {
		var_1_object = true;
		IsLoaded(var_9_bool);
		var_12_bool = var_9_bool == 0; //@nz
		if(var_12_bool != 0) {
			var_13_object = Obj();
			func_1591(var_13_object);
			RemoveActor(var_13_object);
		}
	} else {
		var_17_bool = var_7_string == "restore";
		if(var_17_bool == 0) goto Label_1011;
		var_1_object = false;
	}
Label_1011:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object;
	if(var_7_object != 0) {
		var_8_object = Obj();
		func_1591(var_8_object);
		RemoveActor(var_8_object);
		Hold();
	}
	func_1136();
	return 0;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_1151();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_9_bool = var_7_int == (int)10;
	if(var_9_bool != 0) {
		func_1094();
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = 0;
		func_1308(var_12_bool);
		if(var_12_bool != 0) {
			var_15_bool = 0;
			func_1063(var_15_bool);
			if(var_15_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_32_bool = 0;
			func_1043(var_32_bool);
			if(var_32_bool != 0) {
				var_51_bool = 0; var_52_object = Obj();
				func_1591(Obj());
				var_53_object = var_52_object;
				func_1458(var_51_bool, var_52_object);
			}
		} else {
			func_1058(var_7_int);
			func_1085();
		}
	}
	return 0;
	
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool;
	if(var_8_bool != 0) {
		func_1085();
	} else {
		var_14_string = "";
		func_1538("Neutral");
	}
	return 0;
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0;
	IsOverrideActive(var_9_bool);
	var_10_bool = var_9_bool == 0; //@nz
	if(var_10_bool != 0) {
		EventDisable(0);
		func_1276();
		var_11_bool = 0; var_12_object = Obj();
		var_7_object = var_12_object;
		func_1299(var_11_bool, var_12_object);
		EventEnable(0);
		var_25_object = Obj();
		var_7_object = var_25_object;
		func_980(var_25_object);
		var_321_string = "";
		func_1538("Neutral");
		func_1094();
		func_1085();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_1029(var_6_bool);
	return 0;
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0;
	var_0_object = var_27_object;
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0;
	var_27_object = var_38_object;
	func_1313(var_37_bool, var_38_object, (float)70.0);
	var_84_bool = var_37_bool == 0; //@nz
	if(var_84_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	CreateDialog(var_33_object);
	var_85_int = 0;
	func_2021(var_85_int);
	@@var_33_object:SetNPCName(var_85_int);
	var_86_int = 0;
	func_2019(var_86_int);
	@@var_33_object:SetNPCDescription(var_86_int);
	var_87_string = "";
	func_2023(var_87_string);
	@@var_33_object:SetPhoto(var_87_string);
	var_88_string = "";
	func_2025(var_88_string);
	@@var_33_object:SetPhoto2(var_88_string);
	var_89_int = 0;
	func_2002(var_89_int);
	@@var_33_object:SetPlayerName(var_89_int);
	IsOverrideActive(var_34_bool);
	var_97_bool = var_34_bool;
	if(var_97_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	DoDialog(var_33_object);
	var_98_bool = 0; var_99_object = Obj();
	func_1591(Obj());
	var_100_object = var_99_object;
	func_1400(var_98_bool, var_99_object);
	var_193_object = Obj(); var_194_object = Obj();
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	@@var_33_object:IsDialogEnd(var_36_bool);
	
Label_63:
	var_312_bool = var_36_bool == 0; //@nz
	if(var_312_bool != 0) {
		sync();
		@@var_33_object:IsDialogEnd(var_36_bool);
		goto Label_63;
	}
	var_27_object = Obj();
	func_1382();
	StopDialog(var_33_object);
	@@var_33_object:GetReturnValue((int)-1);
	var_35_int = var_26_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1281(var_22_float, var_23_object)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0);
	GetPosition(var_27_cvector);
	@@var_23_object:GetPosition(var_28_cvector);
	var_29_cvector = var_28_cvector - var_27_cvector;
	var_22_float = var_29_cvector | var_29_cvector;
	return 6;
}


func_1538(var_238_string)
{
	var_239_bool = 0; var_240_float = 0; var_241_float = 0; var_242_bool = 0; var_243_float = 0; var_244_float = 0;
	lshHasAnimation(var_242_bool, var_238_string);
	var_245_bool = var_242_bool;
	if(var_245_bool != 0) {
		lshGetAnimTimes(var_238_string, var_243_float, var_244_float);
		lshPlayAnimation(var_243_float, var_244_float, (bool)0);
	} else {
		var_248_int = "Can't find lsh animation : " + var_238_string;
		Trace(var_248_int);
	}
	return 6;
	
}


func_1797(var_300_bool)
{
	var_302_int = 0; var_303_string = "";
	func_1607(var_302_int, "oob6Mat2");
	var_305_bool = var_302_int == (int)0;
	if(var_305_bool != 0) {
		var_300_bool = 1;
		return 0;
	}
	var_300_bool = 0;
	return 0;
}


func_1029(var_0_object)
{
	var_7_bool = 0;
	func_1308(var_7_bool);
	var_10_bool = var_7_bool == 0; //@nz
	if(var_10_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_1038:
	func_1205();
	goto Label_1038;
}
EMIT "Return(); Pop(0)";


func_1289(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0;
	GetPosition(var_20_cvector);
	var_21_cvector = var_16_cvector - var_20_cvector;
	var_23_float = GetByIndex(var_21_cvector, 0);
	var_24_float = GetByIndex(var_21_cvector, 2);
	Rotate(var_23_float, var_24_float, var_22_bool);
	var_22_bool = var_15_bool;
	return 6;
}


func_1274(var_45_bool)
{
	var_45_bool = 1;
	return 0;
}


func_1809(var_200_bool)
{
	var_202_int = 0; var_203_string = "";
	func_1607(var_202_int, "oob6Mat1");
	var_207_bool = var_202_int == (int)0;
	if(var_207_bool != 0) {
		var_200_bool = 1;
		return 0;
	}
	var_200_bool = 0;
	return 0;
}


func_1554(var_216_string, var_217_bool)
{
	var_220_bool = 0; var_221_float = 0; var_222_float = 0; var_223_bool = 0; var_224_float = 0; var_225_float = 0;
	lshHasAnimation(var_223_bool, var_216_string);
	var_226_bool = var_223_bool;
	if(var_226_bool != 0) {
		lshGetAnimTimes(var_216_string, var_224_float, var_225_float);
		lshPlayAnimation(var_224_float, var_225_float, var_217_bool);
	} else {
		var_228_int = "Can't find lsh animation : " + var_216_string;
		Trace(var_228_int);
	}
	return 6;
	
}


func_1299(var_11_bool, var_12_object)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0);
	@@var_12_object:GetPosition(var_14_cvector);
	var_15_bool = 0; var_16_cvector = CVector(0,0,0);
	var_14_cvector = var_16_cvector;
	func_1289(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
	return 2;
}


func_1043(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj();
	FindActor(var_34_object, "player");
	var_36_bool = var_34_object == 0; //@nz
	if(var_36_bool != 0) {
		var_32_bool = 0;
		return 2;
	}
	var_37_bool = 0; var_38_object = Obj();
	var_34_object = var_38_object;
	func_1299(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1308(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0;
	IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
	return 2;
}


func_1821(var_256_bool)
{
	var_258_int = 0; var_259_string = "";
	func_1607(var_258_int, "b6q01");
	var_261_bool = var_258_int == (int)2;
	if(var_261_bool != 0) {
		var_256_bool = 1;
		return 0;
	}
	var_256_bool = 0;
	return 0;
}


func_1313(var_37_bool, var_38_object, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0;
	@@var_38_object:GetPosition(var_50_cvector);
	@@var_38_object:GetEyesHeight(var_49_float);
	var_58_float = GetByIndex(var_50_cvector, 1);
	var_58_float = var_58_float + var_49_float;
	SetByIndex(var_50_cvector, 1) = var_58_float;
	GetPosition(var_51_cvector);
	GetEyesHeight(var_49_float);
	var_59_float = GetByIndex(var_51_cvector, 1);
	var_59_float = var_59_float + var_49_float;
	SetByIndex(var_51_cvector, 1) = var_59_float;
	var_52_cvector = var_50_cvector - var_51_cvector;
	var_60_float = GetByIndex(var_52_cvector, 1);
	SetByIndex(var_52_cvector, 1) = (float)0;
	var_61_int = var_52_cvector | var_52_cvector;
	var_62_float = sqrt(var_61_int);
	var_52_cvector = var_52_cvector / var_62_float;
	var_53_cvector = -var_52_cvector;
	var_63_float = var_52_cvector * var_39_float;
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0);
	var_65_cvector = var_53_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1597(var_64_cvector, var_65_cvector);
	var_73_float = var_64_cvector * (int)25;
	var_74_int = var_63_float + var_73_float;
	var_54_cvector = var_74_int - CVector(0.0, 10.0, 0.0);
	var_55_cvector = var_51_cvector + var_54_cvector;
	IsOverrideActive(var_56_bool);
	var_76_bool = var_56_bool;
	if(var_76_bool != 0) {
		var_37_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_55_cvector, var_53_cvector, (bool)1);
	var_78_float = GetByIndex(var_54_cvector, 0);
	var_79_float = GetByIndex(var_54_cvector, 2);
	Rotate(var_78_float, var_79_float);
	var_80_bool = 0;
	func_2027(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		HasAnimationTrack(var_57_bool, "head");
		var_82_bool = var_57_bool;
		if(var_82_bool == 0) goto Label_1376;
		LookAsyncCamera("head");
	}
Label_1376:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_37_bool = 1;
	return 18;
	
}


func_1058(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_84_float, var_85_float);
	return 0;
}


func_1569(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0;
	var_136_bool = 0;
	func_2027(var_136_bool);
	if(var_136_bool != 0) {
		lshHasSpeech(var_135_bool, var_133_string);
		var_137_bool = var_135_bool;
		if(var_137_bool != 0) {
			lshPlaySpeech(var_133_string);
			var_132_bool = 1;
			return 2;
		}
	}
	var_132_bool = 0;
	return 2;
}


func_1063(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0;
	FindActor(var_18_object, "player");
	var_21_bool = var_18_object == 0; //@nz
	if(var_21_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	var_22_float = 0; var_23_object = Obj();
	var_18_object = var_23_object;
	func_1281(var_22_float, var_23_object);
	var_31_bool = var_22_float > (float)90000.0;
	if(var_31_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	CanSee(var_19_bool, var_18_object);
	var_19_bool = var_15_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_1833(var_266_bool, var_267_object)
{
	var_268_bool = 0; var_269_object = Obj();
	var_267_object = var_269_object;
	func_1865(var_268_bool, var_269_object);
	if(var_268_bool != 0) {
		var_266_bool = 1;
		return 0;
	}
	var_266_bool = 0;
	return 0;
}


func_1584()
{
	var_10_bool = 0;
	func_2027(var_10_bool);
	if(var_10_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1843(var_274_bool)
{
	var_276_int = 0; var_277_string = "";
	func_1607(var_276_int, "b6q01");
	var_279_bool = var_276_int == (int)3;
	if(var_279_bool != 0) {
		var_274_bool = 1;
		return 0;
	}
	var_274_bool = 0;
	return 0;
}


func_1591(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj();
	self(var_102_object);
	var_102_object = var_100_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1085()
{
	var_323_float = 0; var_324_float = 0;
	rand(var_324_float, (int)8, (int)16);
	SetTimer((int)10, var_324_float);
	return 2;
}


func_1597(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0;
	var_69_int = var_65_cvector | var_65_cvector;
	var_68_float = sqrt(var_69_int);
	var_70_float = 9.999999974752427e-07;
	var_71_bool = var_68_float < var_70_float;
	if(var_71_bool != 0) {
		var_64_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_64_cvector = var_65_cvector / var_68_float;
	return 2;
}


func_1855(var_286_bool, var_287_object)
{
	var_288_bool = 0; var_289_object = Obj();
	var_287_object = var_289_object;
	func_1872(var_288_bool, var_289_object);
	if(var_288_bool != 0) {
		var_286_bool = 1;
		return 0;
	}
	var_286_bool = 0;
	return 0;
}


func_1094()
{
	KillTimer((int)10);
	return 0;
}


func_1607(var_202_int, var_203_string)
{
	var_204_int = 0; var_205_int = 0;
	GetVariable(var_203_string, var_205_int);
	var_205_int = var_202_int;
	return 2;
}


func_1865(var_268_bool, var_269_object)
{
	var_270_int = 0; var_271_int = 0;
	@@var_269_object:GetItemCountOfType(var_271_int, "alpha_pills");
	var_268_bool = var_271_int >= (int)50;
	return 2;
}


func_1612(var_140_int, var_141_int)
{
	var_142_object = Obj(); var_143_object = Obj();
	CreateIntVector(var_143_object);
	@@var_143_object:add(var_140_int);
	@@var_143_object:add(var_141_int);
	SendWorldWndMessage((int)3, var_143_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1872(var_288_bool, var_289_object)
{
	var_290_int = 0; var_291_int = 0;
	@@var_289_object:GetItemCountOfType(var_291_int, "alpha_pills");
	var_288_bool = 0;
	var_294_bool = var_291_int > (int)0;
	if(var_294_bool != 0) {
		var_296_bool = var_291_int < (int)50;
		if(var_296_bool != 0) {
			var_288_bool = 1;
		}
	}
	return 2;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_200_bool = 0; var_201_object = Obj();
		var_201_object = var_1_object;
		func_1809(var_201_object);
		if(var_200_bool != 0) {
			var_208_object = Obj(); var_209_object = Obj();
			var_208_object = var_1_object;
			var_209_object = var_0_object;
			func_1706();
			var_212_string = "";
			func_222(var_194_object, "Patronage");
			@@@var_0_object:SetMessage((int)520595);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520596, (int)21802, (int)21801);
			@@@var_0_object:AddReply((int)520621, (int)29795, (int)21829);
		} else {
				var_254_string = "";
				func_222(var_194_object, "Neutral");
				@@@var_0_object:SetMessage((int)520622);
				@@@var_0_object:ClearReplies();
				var_256_bool = 0; var_257_object = Obj();
				var_257_object = var_1_object;
				func_1821(var_257_object);
				if(var_256_bool != 0) {
					@@@var_0_object:AddReply((int)520623, (int)21833, (int)21832);
				}
				var_265_bool = 0;
				var_265_bool = 0;
				var_266_bool = 0; var_267_object = Obj();
				var_267_object = var_1_object;
				func_1833(var_266_bool, var_267_object);
				if(var_266_bool != 0) {
					var_274_bool = 0; var_275_object = Obj();
					var_275_object = var_1_object;
					func_1843(var_275_object);
					if(var_274_bool != 0) {
						var_265_bool = 1;
					}
				}
				if(var_265_bool != 0) {
					@@@var_0_object:AddReply((int)520626, (int)21836, (int)21835);
				}
				var_283_bool = 0;
				var_283_bool = 0;
				var_284_bool = 0; var_285_object = Obj();
				var_285_object = var_1_object;
				func_1843(var_285_object);
				if(var_284_bool != 0) {
					var_286_bool = 0; var_287_object = Obj();
					var_287_object = var_1_object;
					func_1855(var_286_bool, var_287_object);
					if(var_286_bool != 0) {
						var_283_bool = 1;
					}
				}
				if(var_283_bool != 0) {
					@@@var_0_object:AddReply((int)520686, (int)21897, (int)21896);
				}
				var_300_bool = 0; var_301_object = Obj();
				var_301_object = var_1_object;
				func_1797(var_301_object);
				if(var_300_bool != 0) {
					@@@var_0_object:AddReply((int)528534, (int)29927, (int)29926);
				}
				@@@var_0_object:AddReply((int)520629, (int)-1, (int)21838);
				goto Label_192;
		}
	}
Label_192:
	var_236_bool = 0;
	func_2027(var_236_bool);
	if(var_236_bool != 0) {

	Label_196:
		lshWaitForAnimEnd();
		var_237_string = var_3_string;
		if(var_237_string != 0) {
		} else {
			var_238_string = "";
			var_238_string = var_2_object;
			func_1538(var_238_string);
			goto Label_196;
	}
		PlayAnimation("all", "idle");

	Label_211:
		WaitForAnimEnd();
		var_251_string = var_3_string;
		if(var_251_string != 0) {
			goto Label_221;
		}
		PlayAnimation("all", "idle");
		goto Label_211;

	}
	goto Label_221;
	
Label_221:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_1624(var_129_object, var_130_object, var_131_int)
{
	var_132_int = 0; var_133_int = 0; var_134_bool = 0; var_135_int = 0; var_136_int = 0; var_137_bool = 0;
	@@var_130_object:GetItemID(var_135_int);
	GetInvItemProperty(var_136_int, var_135_int, "Category");
	@@var_129_object:AddItem(var_137_bool, var_130_object, var_136_int, var_131_int);
	var_139_bool = var_137_bool == 0; //@nz
	if(var_139_bool != 0) {
		@@var_129_object:DropItems(var_130_object, var_131_int);
	} else {
		var_140_int = 0; var_141_int = 0;
		var_135_int = var_140_int;
		var_131_int = var_141_int;
		func_1612(var_140_int, var_141_int);
	}
	return 6;
	
}


func_1885()
{
	var_17_object = Obj(); var_18_object = Obj();
	CreateDiaryEntry(var_18_object, (int)363, (int)1, (int)525663);
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0;
	var_18_object = var_23_object;
	func_1924(var_22_bool, var_23_object, (int)265);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1382()
{
	var_314_bool = 0; var_315_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_317_bool = 0;
	func_2027(var_317_bool);
	if(var_317_bool != 0) {
	} else {
		HasAnimationTrack(var_315_bool, "head");
		var_319_bool = var_315_bool;
		if(var_319_bool == 0) goto Label_1399;
		UnlookAsync("head");
	}
Label_1399:
	return 2;
	
}


func_1898()
{
	var_72_object = Obj(); var_73_object = Obj();
	CreateDiaryEntry(var_73_object, (int)364, (int)1, (int)525664);
	var_77_bool = 0; var_78_object = Obj(); var_79_int = 0;
	var_73_object = var_78_object;
	func_1924(var_77_bool, var_78_object, (int)265);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1643(var_124_object, var_125_string, var_126_int)
{
	var_127_object = Obj(); var_128_object = Obj();
	CreateInvItem(var_128_object);
	@@var_128_object:SetItemName(var_125_string);
	var_129_object = Obj(); var_130_object = Obj(); var_131_int = 0;
	var_124_object = var_129_object;
	var_128_object = var_130_object;
	var_126_int = var_131_int;
	func_1624(var_129_object, var_130_object, var_131_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1136()
{
	func_1276();
	func_1094();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


func_1911(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj();
	GetDiaryRoot(var_33_object);
	var_34_bool = var_33_object == 0; //@nz
	if(var_34_bool != 0) {
		Trace("Can't retrieve diary root");
		var_31_object = 0;
		return 2;
	}
	var_33_object = var_31_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1400(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0;
	GetVariable("voice_common", var_105_int);
	var_108_int = var_105_int;
	if(var_108_int != 0) {
		var_109_bool = 0; var_110_object = Obj();
		var_99_object = var_110_object;
		func_1458(var_109_bool, var_110_object);
		var_139_bool = var_109_bool == 0; //@nz
		if(var_139_bool != 0) {
			var_140_bool = 0; var_141_object = Obj();
			var_99_object = var_141_object;
			func_1495(var_140_bool, var_141_object);
			var_175_bool = var_140_bool == 0; //@nz
			if(var_175_bool != 0) {
				var_98_bool = 0;
				return 4;
			}
		}
		irand(var_106_int, (int)2);
		var_177_int = var_106_int;
		if(var_177_int != 0) {
			var_180_int = var_105_int + (int)1;
			var_182_int = var_180_int % (int)3;
			SetVariable("voice_common", var_182_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_185_bool = 0; var_186_object = Obj();
		var_99_object = var_186_object;
		func_1495(var_185_bool, var_186_object);
		var_187_bool = var_185_bool == 0; //@nz
		if(var_187_bool != 0) {
			var_188_bool = 0; var_189_object = Obj();
			var_99_object = var_189_object;
			func_1458(var_188_bool, var_189_object);
			var_190_bool = var_188_bool == 0; //@nz
			if(var_190_bool != 0) {
				var_98_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1456;
	
Label_1456:
	var_98_bool = 1;
	return 4;
	
}


func_1656(var_82_bool, var_83_string, var_84_string)
{
	var_85_object = Obj(); var_86_object = Obj();
	FindActor(var_86_object, var_83_string);
	var_87_bool = var_86_object == 0; //@ne
	if(var_87_bool != 0) {
		var_82_bool = 0;
		return 2;
	}
	Trigger(var_86_object, var_84_string);
	var_82_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1151()
{
	StopGroup0();
	func_1094();
	var_8_string = "";
	func_1538("Neutral");
	func_1085();
	return 0;
}


func_1668(var_69_float)
{
	var_70_float = 0; var_71_float = 0;
	GetGameTime(var_71_float);
	var_71_float = var_69_float;
	return 2;
}


func_1924(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0;
	func_1911(Obj());
	var_31_object = var_28_object;
	@@var_28_object:Find(var_24_int, var_29_object);
	var_36_bool = var_29_object == 0; //@nz
	if(var_36_bool != 0) {
		var_38_int = "Can't find diary parent with id: " + var_24_int;
		Trace(var_38_int);
		var_22_bool = 0;
		return 6;
	}
	@@var_29_object:AddChild(var_23_object);
	SendWorldWndMessage((int)7);
	@@var_23_object:GetCategory(var_30_int);
	SetDiarySection(var_30_int);
	var_22_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1673(var_153_int)
{
	var_154_float = 0; var_155_float = 0;
	GetGameTime(var_155_float);
	var_157_int = 0;
	var_157_int = var_155_float / (int)24;
	var_153_int = (int)1 + var_157_int;
	return 2;
}


func_1682(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = "";
	var_35_int = var_32_int;
	if(var_35_int != 0) {
		"idle" = "idle" + var_32_int;
	}
	var_34_string = var_31_string;
	return 2;
}


func_1689(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0;
	var_28_int = 0;
	
Label_1691:
	var_31_string = ""; var_32_int = 0;
	var_28_int = var_32_int;
	func_1682(var_31_string, var_32_int);
	HasAnimation(var_29_bool, "all", var_31_string);
	var_36_bool = var_29_bool == 0; //@nz
	if(var_36_bool != 0) {
	} else {
		var_28_int = var_28_int + (int)1;
		goto Label_1691;
	}
	var_28_int = var_25_int;
	return 4;
	
}


func_1952(var_58_object)
{
	var_59_object = Obj(); var_60_object = Obj(); var_61_object = Obj(); var_62_object = Obj();
	GetMainOutdoorScene(var_61_object);
	var_63_bool = var_61_object == 0; //@ne
	if(var_63_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_62_object = 0;
		var_62_object = var_58_object;
		return 4;
	}
	@@var_61_object:GetMap(var_62_object);
	var_62_object = var_58_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1706()
{
	SetVariable("oob6Mat1", (int)1);
	return 0;
}


func_1712()
{
	SetVariable("b6q01", (int)3);
	func_1885();
	return 0;
}


func_1969(var_93_object, var_94_string, var_95_float)
{
	var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_object = Obj(); var_100_bool = 0; var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_object = Obj(); var_104_bool = 0;
	GetMainOutdoorScene(var_103_object);
	var_105_bool = var_103_object == 0; //@ne
	if(var_105_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_103_object:GetLocator(var_94_string, var_104_bool, var_101_cvector, var_102_cvector);
	var_107_bool = var_104_bool == 0; //@nz
	if(var_107_bool != 0) {
		var_109_int = "Warning: outdoor scene locator " + var_94_string;
		var_111_int = var_109_int + " doesnt exist";
		Trace(var_111_int);
	}
	@@var_103_object:GetMap(var_93_object);
	var_112_bool = var_93_object == 0; //@ne
	if(var_112_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_114_float = GetByIndex(var_101_cvector, 0);
	var_115_float = GetByIndex(var_101_cvector, 2);
	@@var_93_object:SetMapParams(var_114_float, var_115_float, var_95_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_1458(var_109_bool, var_110_object)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = "";
	var_116_string = "c";
	var_117_int = 0;
	
Label_1461:
	if((int)1 != 0) {
		var_123_int = var_117_int + (int)1;
		var_124_int = var_116_string + var_123_int;
		@@var_110_object:HasProperty(var_124_int, var_118_bool);
		var_125_bool = var_118_bool == 0; //@nz
		if(var_125_bool != 0) {
		} else {
			var_117_int = var_117_int + (int)1;
			goto Label_1461;
		}
	}
	var_126_bool = var_117_int == 0; //@nz
	if(var_126_bool != 0) {
		var_109_bool = 0;
		return 10;
	}
	var_119_int = 0;
	var_128_bool = var_117_int > (int)1;
	if(var_128_bool != 0) {
		irand(var_119_int, var_117_int);
	}
	var_130_int = var_119_int + (int)1;
	var_131_int = var_116_string + var_130_int;
	@@var_110_object:GetProperty(var_131_int, var_120_string);
	var_132_bool = 0; var_133_string = "";
	var_120_string = var_133_string;
	func_1569(var_132_bool, var_133_string);
	var_132_bool = var_109_bool;
	return 10;
	
}


func_1205()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0;
	WaitForAnimEnd();
	var_23_bool = 0;
	func_1308(var_23_bool);
	var_24_bool = var_23_bool == 0; //@nz
	if(var_24_bool != 0) {
		return 12;
	}
	func_1689((int)0);
	var_25_int = var_17_int;
	var_18_int = 0;
	
Label_1219:
	var_38_bool = 0;
	var_38_bool = 0;
	var_40_bool = var_18_int < (int)5;
	if(var_40_bool != 0) {
		var_41_bool = 0;
		func_1308(var_41_bool);
		if(var_41_bool != 0) {
			var_38_bool = 1;
		}
	}
	if(var_38_bool != 0) {
		var_42_bool = var_17_int == 0; //@nz
		if(var_42_bool != 0) {
			Sleep((int)3, var_19_bool);
			var_44_bool = var_19_bool == 0; //@nz
			if(var_44_bool != 0) {
			} else {
		} else {
				irand(var_20_int, var_17_int);
				irand(var_21_int, (int)5);
				var_50_bool = var_21_int != (int)0;
				if(var_50_bool != 0) {
					var_20_int = 0;
				}
				var_52_string = ""; var_53_int = 0;
				var_20_int = var_53_int;
				func_1682(var_52_string, var_53_int);
				PlayAnimation("all", var_52_string);
				WaitForAnimEnd(var_22_bool);
				var_54_bool = var_22_bool == 0; //@nz
				if(var_54_bool == 0) goto Label_1260;
				goto Label_1271;
		}
		Label_1260:
			var_45_bool = 0;
			func_1274(var_45_bool);
			var_46_bool = var_45_bool == 0; //@nz
			if(var_46_bool != 0) {
				goto Label_1271;
			}
			ResetAAS();
			var_18_int = var_18_int + (int)1;
			goto Label_1219;

		}
	}
Label_1271:
	ResetAAS();
	return 12;
	
}


func_1721(var_50_object)
{
	var_52_object = Obj(); var_53_int = 0; var_54_object = Obj(); var_55_int = 0;
	SetVariable("b6q01", (int)4);
	func_1952(Obj());
	var_58_object = var_54_object;
	var_69_float = 0;
	func_1668(var_69_float);
	@@var_54_object:AddMark("b6q01MatGotoByk", "pt_b6q01_bull", (int)1, (int)530992, var_69_float);
	func_1898();
	@@var_50_object:RemoveItemByType(var_55_int, "alpha_pills", (int)50);
	var_82_bool = 0; var_83_string = ""; var_84_string = "";
	func_1656(var_82_bool, "quest_b6_01", "init_altar");
	var_88_bool = 0; var_89_string = ""; var_90_string = "";
	func_1656(var_88_bool, "quest_b6_01", "clean_termitnik");
	return 4;
}
EMIT "Stack[-2] = 0";


func_2002(var_89_int)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable("branch", var_91_int);
	var_94_bool = var_91_int == (int)0;
	if(var_94_bool != 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x7e1";
	}
	var_96_bool = var_91_int == (int)1;
	if(var_96_bool != 0) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
	return 2;
}


func_980(var_25_object)
{
	var_26_int = 0; var_27_object = Obj();
	var_25_object = var_27_object;
	TaskCall(0);
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
	return 0;
}


func_1495(var_140_bool, var_141_object)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = "";
	var_153_int = 0;
	func_1673(var_153_int);
	var_159_int = "d" + var_153_int;
	var_147_string = var_159_int + "m";
	var_148_int = 0;
	
Label_1504:
	if((int)1 != 0) {
		var_163_int = var_148_int + (int)1;
		var_164_int = var_147_string + var_163_int;
		@@var_141_object:HasProperty(var_164_int, var_149_bool);
		var_165_bool = var_149_bool == 0; //@nz
		if(var_165_bool != 0) {
		} else {
			var_148_int = var_148_int + (int)1;
			goto Label_1504;
		}
	}
	var_166_bool = var_148_int == 0; //@nz
	if(var_166_bool != 0) {
		var_140_bool = 0;
		return 10;
	}
	var_150_int = 0;
	var_168_bool = var_148_int > (int)1;
	if(var_168_bool != 0) {
		irand(var_150_int, var_148_int);
	}
	var_170_int = var_150_int + (int)1;
	var_171_int = var_147_string + var_170_int;
	@@var_141_object:GetProperty(var_171_int, var_151_string);
	var_172_bool = 0; var_173_string = "";
	var_151_string = var_173_string;
	func_1569(var_172_bool, var_173_string);
	var_172_bool = var_140_bool;
	return 10;
	
}


func_222(var_2_object, var_212_string)
{
	var_213_bool = 0;
	func_2027(var_213_bool);
	var_214_bool = var_213_bool == 0; //@nz
	if(var_214_bool != 0) {
		return 0;
	}
	var_215_bool = var_212_string == var_2_object;
	if(var_215_bool != 0) {
		return 0;
	}
	var_216_string = ""; var_217_bool = 0;
	var_212_string = var_216_string;
	var_219_bool = var_212_string == "";
	if(var_219_bool != 0) {
		var_217_bool = 0;
	} else {
		var_217_bool = 1;
	}
	func_1554(var_216_string, var_217_bool);
	var_2_object = var_212_string;
	return 0;
	
}


func_1758()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_2019(var_86_int)
{
	var_86_int = 515545;
	return 0;
}


func_1764()
{
	SetVariable("oob6Mat2", (int)1);
	return 0;
}


func_2021(var_85_int)
{
	var_85_int = 502870;
	return 0;
}


func_2023(var_87_string)
{
	var_87_string = "ui/NPC_Mat.png";
	return 0;
}


func_2025(var_88_string)
{
	var_88_string = "ui/NPC_Mat_b.png";
	return 0;
}


func_1770(var_92_object)
{
	var_93_object = Obj(); var_94_string = ""; var_95_float = 0;
	func_1952(Obj());
	var_96_object = var_93_object;
	func_1969(var_93_object, "pt_map_kurgan", (float)2);
	var_116_object = Obj();
	func_1952(var_116_object);
	@@var_92_object:ShowMap(var_116_object);
	return 0;
}


func_2027(var_80_bool)
{
	var_80_bool = 1;
	return 0;
}


func_1786(var_121_object)
{
	Trace("recipe1 is given");
	var_124_object = Obj(); var_125_string = ""; var_126_int = 0;
	var_121_object = var_124_object;
	func_1643(var_124_object, "recipe1", (int)1);
	return 0;
}


func_1276()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


