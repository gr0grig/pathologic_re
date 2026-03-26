// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetMainOutdoorScene/1,AddBlankActor/4,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Distrust|W:Anger|W:Jeer|W:Grin|W:player|A:GetPosition|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|W:m|W:Can't find lsh animation : |W:.bin|A:add|W:money|W:Money|W:ui/NPC_Georg.png|W:ui/NPC_Georg_b.png|W:money 4000 is given|W:pt_map_aglaja|A:ShowMap|W:d1q01|W:d1GeorgInfo|W:pt_map_georg|A:AddMark|W:d1q01GeorgGotoViktor|W:pt_map_viktor|W:quest_d1_01|W:completed|W:d1q01TeloNedostupno|W:d1q01FirstGeorgVisit|W:remove_cutscene|W:unlock_doors|W:d2q01BigVladVisit|W:d2q01GeorgVisit|W:playsound|W:givemoney|W:ood1Georg5|W:d10q02|W:d10q02GeorgGotoAglaja|W:ood2Georg1|W:ood2Georg2|W:ood1Georg4|W:money 5000 is given|W:d3q02|W:quest_d3_02|W:ood3Georg1|W:ood3Georg2|W:d3q02GeorgGotoViktor|W:ood3Georg3|W:ood1Georg1|W:ood1Georg2|W:ood1Georg3|W:KnowRubin|W:KnowSaburivClan|W:KnowOlgimskiClan|W:KnowKainClan|W:ood5Georg1|W:KnowAlexandr|W:KnowBigVlad|W:ood6Georg1|W:ood6Georg2|W:ood6Georg3|W:ood8Georg1|W:d3GeorgVisit|W:d3q01HelpBurah|W:d2q01|W:KnowBurahDead|W:d3RubinToldWhereIsSimon|W:d3q02SeeCorpse|W:d5q03|W:d6q01|W:d6RubinGoesToGeorg|W:d8KainIsReason|W:ood5Georg2|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x1865
// @RUN_TASK: 18
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xe1 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x377 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0xade vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0xda2 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1165 vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1373 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1544 vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0x16fd vars=int,int
// @TASK_16: vars=object params=2
// @TASK_17: vars=object,object,string,bool params=2
// @EVENT_11: op=0x183b vars=int,int
// @TASK_18: vars=cvector params=0
// @EVENT_7: op=0x18b1 vars=int
// @EVENT_6: op=0x18d7 vars=
// @EVENT_5: op=0x18e6 vars=
// @EVENT_45: op=0x18f3 vars=bool
// @EVENT_0: op=0x18ff vars=object
// @PE: 0x51,0xcb,0xe1,0x274,0x361,0x377,0xa4f,0xac8,0xade,0xce8,0xd8c,0xda2,0x10fd,0x114f,0x1165,0x12fc,0x135d,0x1373,0x14ef,0x152e,0x1544,0x16a8,0x16e7,0x16fd,0x17eb,0x1825,0x183b,0x18b1,0x18d7,0x18f3,0x1afe,0x1b26,0x1b30,0x1b63,0x1b6d,0x1b73,0x1b83,0x1b9a,0x1ba0,0x1bbd,0x1bc3,0x1bc9,0x1bd2,0x1bd8,0x1bf6,0x1bfc,0x1c20,0x1c2a,0x1c3a,0x1c40,0x1c46,0x1c4c,0x1c52,0x1c58,0x1c5e,0x1c64,0x1c6a,0x1c70,0x1c76,0x1c7c,0x1c82,0x1c88,0x1c8e,0x1c94,0x1c9a,0x1ca6,0x1cb2,0x1cbe,0x1cca,0x1cd6,0x1ce2,0x1d07,0x1d13,0x1d1f,0x1d2b,0x1d37,0x1d43,0x1d4f,0x1d5b,0x1d67,0x1d73,0x1d7f,0x1d8b,0x1d97,0x1da3,0x1daf,0x1dbb,0x1dc7,0x1dd3,0x1ddf,0x1deb,0x1df7,0x1e03,0x1e0f,0x1e1b,0x1e27,0x1e33,0x1e3f,0x1e4b,0x1f45

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_6814();
		var_51_bool = var_47_cvector == (int)13228;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_7304();
		}
		var_57_bool = var_47_cvector == (int)13232;
		if(var_57_bool != 0) {
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_object;
			func_7292();
		}
		var_63_bool = var_47_cvector == (int)13236;
		if(var_63_bool != 0) {
			var_64_object = Obj(); var_65_object = Obj();
			var_64_object = var_1_object;
			var_65_object = var_0_object;
			func_7298();
		}
		var_69_bool = var_46_bool == (int)13227;
		if(var_69_bool != 0) {
			var_70_string = "";
			func_203(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512009);
			@@@var_0_object:ClearReplies();
			var_88_bool = 0;
			var_88_bool = 0;
			var_89_bool = 0; var_90_object = Obj();
			var_90_object = var_1_object;
			func_7707(var_90_object);
			if(var_89_bool != 0) {
				var_97_bool = 0; var_98_object = Obj();
				var_98_object = var_1_object;
				func_7719(var_98_object);
				if(var_97_bool != 0) {
					var_88_bool = 1;
				}
			}
			if(var_88_bool != 0) {
				@@@var_0_object:AddReply((int)512010, (int)13230, (int)13228);
			}
			var_106_bool = 0;
			var_106_bool = 0;
			var_107_bool = 0;
			var_107_bool = 0;
			var_108_bool = 0;
			var_108_bool = 0;
			var_109_bool = 0; var_110_object = Obj();
			var_110_object = var_1_object;
			func_7647(var_110_object);
			var_115_bool = var_109_bool == 0; //@nz
			if(var_115_bool != 0) {
				var_116_bool = 0; var_117_object = Obj();
				var_117_object = var_1_object;
				func_7659(var_117_object);
				var_122_bool = var_116_bool == 0; //@nz
				if(var_122_bool != 0) {
					var_108_bool = 1;
				}
			}
			if(var_108_bool != 0) {
				var_123_bool = 0; var_124_object = Obj();
				var_124_object = var_1_object;
				func_7671(var_124_object);
				var_129_bool = var_123_bool == 0; //@nz
				if(var_129_bool != 0) {
					var_107_bool = 1;
				}
			}
			if(var_107_bool != 0) {
				var_130_bool = 0; var_131_object = Obj();
				var_131_object = var_1_object;
				func_7683(var_131_object);
				if(var_130_bool != 0) {
					var_106_bool = 1;
				}
			}
			if(var_106_bool != 0) {
				@@@var_0_object:AddReply((int)512014, (int)13233, (int)13232);
			}
			var_139_bool = 0; var_140_object = Obj();
			var_140_object = var_1_object;
			func_7695(var_140_object);
			if(var_139_bool != 0) {
				@@@var_0_object:AddReply((int)512018, (int)3560, (int)13236);
			}
			@@@var_0_object:AddReply((int)512011, (int)-1, (int)13229);
			return 0;
		}
		var_152_bool = var_46_bool == (int)3560;
		if(var_152_bool != 0) {
			var_153_string = "";
			func_203(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)503289);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503290, (int)3562, (int)3561);
			@@@var_0_object:AddReply((int)503298, (int)3572, (int)3571);
			return 0;
		}
		var_162_bool = var_46_bool == (int)3572;
		if(var_162_bool != 0) {
			var_163_string = "";
			func_203(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)503299);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503300, (int)3562, (int)3573);
			@@@var_0_object:AddReply((int)503301, (int)3564, (int)3575);
			return 0;
		}
		var_172_bool = var_46_bool == (int)3562;
		if(var_172_bool != 0) {
			var_173_string = "";
			func_203(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)503291);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503292, (int)3564, (int)3563);
			@@@var_0_object:AddReply((int)503295, (int)3564, (int)3566);
			return 0;
		}
		var_182_bool = var_46_bool == (int)3564;
		if(var_182_bool != 0) {
			var_183_string = "";
			func_203(var_47_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)503293);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503294, (int)3568, (int)3565);
			@@@var_0_object:AddReply((int)503297, (int)3568, (int)3569);
			return 0;
		}
		var_192_bool = var_46_bool == (int)3568;
		if(var_192_bool != 0) {
			var_193_string = "";
			func_203(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)503296);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503302, (int)3578, (int)3577);
			@@@var_0_object:AddReply((int)503305, (int)3578, (int)3580);
			return 0;
		}
		var_202_bool = var_46_bool == (int)3578;
		if(var_202_bool != 0) {
			var_203_string = "";
			func_203(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)503303);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503304, (int)-1, (int)3579);
			return 0;
		}
		var_209_bool = var_46_bool == (int)13233;
		if(var_209_bool != 0) {
			var_210_string = "";
			func_203(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512015);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512016, (int)13235, (int)13234);
			return 0;
		}
		var_216_bool = var_46_bool == (int)13235;
		if(var_216_bool != 0) {
			var_217_string = "";
			func_203(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512017);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536134, (int)-1, (int)37893);
			@@@var_0_object:AddReply((int)536135, (int)-1, (int)37894);
			return 0;
		}
		var_226_bool = var_46_bool == (int)13230;
		if(var_226_bool != 0) {
			var_227_string = "";
			func_203(var_47_cvector, "Anger");
			@@@var_0_object:SetMessage((int)512012);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512013, (int)-1, (int)13231);
			return 0;
		}
		var_3_string = true;
		var_232_bool = 0;
		func_6948(var_232_bool);
		if(var_232_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xe2";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_6814();
		var_51_bool = var_47_cvector == (int)32944;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_6976();
			var_108_object = Obj(); var_109_object = Obj();
			var_108_object = var_1_object;
			var_109_object = var_0_object;
			func_7210(var_109_object);
		}
		var_135_bool = var_47_cvector == (int)32945;
		if(var_135_bool != 0) {
			var_136_object = Obj(); var_137_object = Obj();
			var_136_object = var_1_object;
			var_137_object = var_0_object;
			func_6976();
			var_138_object = Obj(); var_139_object = Obj();
			var_138_object = var_1_object;
			var_139_object = var_0_object;
			func_7210(var_139_object);
		}
		var_141_bool = var_47_cvector == (int)34603;
		if(var_141_bool != 0) {
			var_142_object = Obj(); var_143_object = Obj();
			var_142_object = var_1_object;
			var_143_object = var_0_object;
			func_6976();
			var_144_object = Obj(); var_145_object = Obj();
			var_144_object = var_1_object;
			var_145_object = var_0_object;
			func_7210(var_145_object);
		}
		var_147_bool = var_47_cvector == (int)23067;
		if(var_147_bool != 0) {
			var_148_object = Obj(); var_149_object = Obj();
			var_148_object = var_1_object;
			var_149_object = var_0_object;
			func_7011();
		}
		var_165_bool = var_47_cvector == (int)23065;
		if(var_165_bool != 0) {
			var_166_object = Obj(); var_167_object = Obj();
			var_166_object = var_1_object;
			var_167_object = var_0_object;
			func_7011();
		}
		var_169_bool = var_47_cvector == (int)5360;
		if(var_169_bool != 0) {
			var_170_object = Obj(); var_171_object = Obj();
			var_170_object = var_1_object;
			var_171_object = var_0_object;
			func_7021();
			var_174_object = Obj(); var_175_object = Obj();
			var_174_object = var_1_object;
			var_175_object = var_0_object;
			func_7011();
		}
		var_177_bool = var_47_cvector == (int)5359;
		if(var_177_bool != 0) {
			var_178_object = Obj(); var_179_object = Obj();
			var_178_object = var_1_object;
			var_179_object = var_0_object;
			func_7021();
			var_180_object = Obj(); var_181_object = Obj();
			var_180_object = var_1_object;
			var_181_object = var_0_object;
			func_7011();
		}
		var_183_bool = var_47_cvector == (int)32991;
		if(var_183_bool != 0) {
			var_184_object = Obj(); var_185_object = Obj();
			var_184_object = var_1_object;
			var_185_object = var_0_object;
			func_6976();
			var_186_object = Obj(); var_187_object = Obj();
			var_186_object = var_1_object;
			var_187_object = var_0_object;
			func_7210(var_187_object);
		}
		var_189_bool = var_47_cvector == (int)8418;
		if(var_189_bool != 0) {
			var_190_object = Obj(); var_191_object = Obj();
			var_190_object = var_1_object;
			var_191_object = var_0_object;
			func_7238();
		}
		var_195_bool = var_47_cvector == (int)5341;
		if(var_195_bool != 0) {
			var_196_object = Obj(); var_197_object = Obj();
			var_196_object = var_1_object;
			var_197_object = var_0_object;
			func_7244();
		}
		var_201_bool = var_47_cvector == (int)5342;
		if(var_201_bool != 0) {
			var_202_object = Obj(); var_203_object = Obj();
			var_202_object = var_1_object;
			var_203_object = var_0_object;
			func_7244();
		}
		var_205_bool = var_47_cvector == (int)5347;
		if(var_205_bool != 0) {
			var_206_object = Obj(); var_207_object = Obj();
			var_206_object = var_1_object;
			var_207_object = var_0_object;
			func_7244();
		}
		var_209_bool = var_47_cvector == (int)8440;
		if(var_209_bool != 0) {
			var_210_object = Obj(); var_211_object = Obj();
			var_210_object = var_1_object;
			var_211_object = var_0_object;
			func_7244();
		}
		var_213_bool = var_47_cvector == (int)32992;
		if(var_213_bool != 0) {
			var_214_object = Obj(); var_215_object = Obj();
			var_214_object = var_1_object;
			var_215_object = var_0_object;
			func_7122();
		}
		var_219_bool = var_47_cvector == (int)32994;
		if(var_219_bool != 0) {
			var_220_object = Obj(); var_221_object = Obj();
			var_220_object = var_1_object;
			var_221_object = var_0_object;
			func_7072();
		}
		var_225_bool = var_46_bool == (int)32925;
		if(var_225_bool != 0) {
			var_226_bool = 0; var_227_object = Obj();
			var_227_object = var_1_object;
			func_7515(var_227_object);
			if(var_226_bool != 0) {
				var_234_object = Obj(); var_235_object = Obj();
				var_234_object = var_1_object;
				var_235_object = var_0_object;
				func_7232();
				var_238_object = Obj(); var_239_object = Obj();
				var_238_object = var_1_object;
				var_239_object = var_0_object;
				func_7027();
				var_248_string = "";
				func_865(var_47_cvector, "Anger");
				@@@var_0_object:SetMessage((int)531566);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)531567, (int)32927, (int)32926);
				@@@var_0_object:AddReply((int)531608, (int)32978, (int)32977);
				@@@var_0_object:AddReply((int)531614, (int)32986, (int)32985);
				return 0;
			}
			var_275_bool = 0; var_276_object = Obj();
			var_276_object = var_1_object;
			func_7346(var_276_object);
			if(var_275_bool != 0) {
				var_281_string = "";
				func_865(var_47_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)504850);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)504879, (int)5370, (int)5353);
				@@@var_0_object:AddReply((int)504890, (int)5354, (int)5367);
				return 0;
			}
			var_289_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507627);
			@@@var_0_object:ClearReplies();
			var_291_bool = 0; var_292_object = Obj();
			var_292_object = var_1_object;
			func_7334(var_292_object);
			if(var_291_bool != 0) {
				@@@var_0_object:AddReply((int)531617, (int)32990, (int)32989);
			}
			var_300_bool = 0;
			var_300_bool = 0;
			var_301_bool = 0;
			var_301_bool = 0;
			var_302_bool = 0; var_303_object = Obj();
			var_303_object = var_1_object;
			func_7527(var_303_object);
			if(var_302_bool != 0) {
				var_308_bool = 0; var_309_object = Obj();
				var_309_object = var_1_object;
				func_7322(var_309_object);
				var_314_bool = var_308_bool == 0; //@nz
				if(var_314_bool != 0) {
					var_301_bool = 1;
				}
			}
			if(var_301_bool != 0) {
				var_315_bool = 0; var_316_object = Obj();
				var_316_object = var_1_object;
				func_7334(var_316_object);
				var_317_bool = var_315_bool == 0; //@nz
				if(var_317_bool != 0) {
					var_300_bool = 1;
				}
			}
			if(var_300_bool != 0) {
				@@@var_0_object:AddReply((int)507629, (int)5329, (int)8418);
			}
			var_321_bool = 0;
			var_321_bool = 0;
			var_322_bool = 0;
			var_322_bool = 0;
			var_323_bool = 0; var_324_object = Obj();
			var_324_object = var_1_object;
			func_7539(var_324_object);
			if(var_323_bool != 0) {
				var_329_bool = 0; var_330_object = Obj();
				var_330_object = var_1_object;
				func_7322(var_330_object);
				var_331_bool = var_329_bool == 0; //@nz
				if(var_331_bool != 0) {
					var_322_bool = 1;
				}
			}
			if(var_322_bool != 0) {
				var_332_bool = 0; var_333_object = Obj();
				var_333_object = var_1_object;
				func_7334(var_333_object);
				var_334_bool = var_332_bool == 0; //@nz
				if(var_334_bool != 0) {
					var_321_bool = 1;
				}
			}
			if(var_321_bool != 0) {
				@@@var_0_object:AddReply((int)507632, (int)5334, (int)8421);
			}
			var_338_bool = 0;
			var_338_bool = 0;
			var_339_bool = 0;
			var_339_bool = 0;
			var_340_bool = 0; var_341_object = Obj();
			var_341_object = var_1_object;
			func_7491(var_341_object);
			if(var_340_bool != 0) {
				var_346_bool = 0; var_347_object = Obj();
				var_347_object = var_1_object;
				func_7334(var_347_object);
				var_348_bool = var_346_bool == 0; //@nz
				if(var_348_bool != 0) {
					var_339_bool = 1;
				}
			}
			if(var_339_bool != 0) {
				var_349_bool = 0; var_350_object = Obj();
				var_350_object = var_1_object;
				func_7322(var_350_object);
				var_351_bool = var_349_bool == 0; //@nz
				if(var_351_bool != 0) {
					var_338_bool = 1;
				}
			}
			if(var_338_bool != 0) {
				@@@var_0_object:AddReply((int)531620, (int)32993, (int)32992);
			}
			var_355_bool = 0;
			var_355_bool = 0;
			var_356_bool = 0; var_357_object = Obj();
			var_357_object = var_1_object;
			func_7358(var_357_object);
			if(var_356_bool != 0) {
				var_362_bool = 0; var_363_object = Obj();
				var_363_object = var_1_object;
				func_7503(var_363_object);
				if(var_362_bool != 0) {
					var_355_bool = 1;
				}
			}
			if(var_355_bool != 0) {
				@@@var_0_object:AddReply((int)531622, (int)32995, (int)32994);
			}
			@@@var_0_object:AddReply((int)507658, (int)-1, (int)8451);
			return 0;
		}
		var_375_bool = var_46_bool == (int)32995;
		if(var_375_bool != 0) {
			var_376_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531623);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531624, (int)34337, (int)32996);
			return 0;
		}
		var_382_bool = var_46_bool == (int)34337;
		if(var_382_bool != 0) {
			var_383_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532852);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532853, (int)-1, (int)34338);
			return 0;
		}
		var_389_bool = var_46_bool == (int)32993;
		if(var_389_bool != 0) {
			var_390_string = "";
			func_865(var_47_cvector, "Jeer");
			@@@var_0_object:SetMessage((int)531621);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507630, (int)8420, (int)8419);
			@@@var_0_object:AddReply((int)532849, (int)34334, (int)34333);
			return 0;
		}
		var_399_bool = var_46_bool == (int)8420;
		if(var_399_bool != 0) {
			var_400_string = "";
			func_865(var_47_cvector, "Jeer");
			@@@var_0_object:SetMessage((int)507631);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507633, (int)34334, (int)8422);
			return 0;
		}
		var_406_bool = var_46_bool == (int)34334;
		if(var_406_bool != 0) {
			var_407_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532850);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532851, (int)-1, (int)34336);
			return 0;
		}
		var_413_bool = var_46_bool == (int)5334;
		if(var_413_bool != 0) {
			var_414_object = Obj(); var_415_object = Obj();
			var_414_object = var_1_object;
			var_415_object = var_0_object;
			func_7250();
			var_418_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)504862);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504863, (int)5336, (int)5335);
			@@@var_0_object:AddReply((int)504875, (int)5414, (int)5348);
			var_426_bool = 0; var_427_object = Obj();
			var_427_object = var_1_object;
			func_7479(var_427_object);
			var_432_bool = var_426_bool == 0; //@nz
			if(var_432_bool != 0) {
				@@@var_0_object:AddReply((int)507643, (int)8435, (int)8434);
			}
			return 0;
		}
		var_437_bool = var_46_bool == (int)8435;
		if(var_437_bool != 0) {
			var_438_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507644);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507645, (int)8437, (int)8436);
			return 0;
		}
		var_444_bool = var_46_bool == (int)8437;
		if(var_444_bool != 0) {
			var_445_string = "";
			func_865(var_47_cvector, "Jeer");
			@@@var_0_object:SetMessage((int)507646);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507647, (int)5336, (int)8438);
			return 0;
		}
		var_451_bool = var_46_bool == (int)5414;
		if(var_451_bool != 0) {
			var_452_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)504926);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504927, (int)8441, (int)5415);
			@@@var_0_object:AddReply((int)507648, (int)-1, (int)8440);
			return 0;
		}
		var_461_bool = var_46_bool == (int)8441;
		if(var_461_bool != 0) {
			var_462_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507649);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507650, (int)5338, (int)8442);
			return 0;
		}
		var_468_bool = var_46_bool == (int)5336;
		if(var_468_bool != 0) {
			var_469_string = "";
			func_865(var_47_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)504864);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504865, (int)5338, (int)5337);
			@@@var_0_object:AddReply((int)504871, (int)5344, (int)5343);
			return 0;
		}
		var_478_bool = var_46_bool == (int)5344;
		if(var_478_bool != 0) {
			var_479_string = "";
			func_865(var_47_cvector, "Anger");
			@@@var_0_object:SetMessage((int)504872);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504873, (int)5338, (int)5345);
			@@@var_0_object:AddReply((int)504874, (int)-1, (int)5347);
			return 0;
		}
		var_488_bool = var_46_bool == (int)5338;
		if(var_488_bool != 0) {
			var_489_string = "";
			func_865(var_47_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)504866);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504867, (int)5340, (int)5339);
			return 0;
		}
		var_495_bool = var_46_bool == (int)5340;
		if(var_495_bool != 0) {
			var_496_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)504868);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504869, (int)-1, (int)5341);
			@@@var_0_object:AddReply((int)504870, (int)-1, (int)5342);
			return 0;
		}
		var_505_bool = var_46_bool == (int)5329;
		if(var_505_bool != 0) {
			var_506_string = "";
			func_865(var_47_cvector, "Jeer");
			@@@var_0_object:SetMessage((int)504857);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504858, (int)5374, (int)5330);
			return 0;
		}
		var_512_bool = var_46_bool == (int)5374;
		if(var_512_bool != 0) {
			var_513_string = "";
			func_865(var_47_cvector, "Jeer");
			@@@var_0_object:SetMessage((int)504895);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504896, (int)5377, (int)5375);
			@@@var_0_object:AddReply((int)504897, (int)5377, (int)5376);
			return 0;
		}
		var_522_bool = var_46_bool == (int)5377;
		if(var_522_bool != 0) {
			var_523_string = "";
			func_865(var_47_cvector, "Jeer");
			@@@var_0_object:SetMessage((int)504898);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504899, (int)5380, (int)5378);
			@@@var_0_object:AddReply((int)504913, (int)5396, (int)5395);
			return 0;
		}
		var_532_bool = var_46_bool == (int)5396;
		if(var_532_bool != 0) {
			var_533_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)504914);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504915, (int)5380, (int)5397);
			@@@var_0_object:AddReply((int)532846, (int)-1, (int)34330);
			return 0;
		}
		var_542_bool = var_46_bool == (int)5380;
		if(var_542_bool != 0) {
			var_543_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)504900);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504901, (int)5382, (int)5381);
			@@@var_0_object:AddReply((int)504916, (int)5382, (int)5399);
			@@@var_0_object:AddReply((int)504917, (int)5402, (int)5401);
			return 0;
		}
		var_555_bool = var_46_bool == (int)5402;
		if(var_555_bool != 0) {
			var_556_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)504918);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504919, (int)5382, (int)5403);
			@@@var_0_object:AddReply((int)532847, (int)-1, (int)34331);
			return 0;
		}
		var_565_bool = var_46_bool == (int)5382;
		if(var_565_bool != 0) {
			var_566_object = Obj(); var_567_object = Obj();
			var_566_object = var_1_object;
			var_567_object = var_0_object;
			func_7268();
			var_570_object = Obj(); var_571_object = Obj();
			var_570_object = var_1_object;
			var_571_object = var_0_object;
			func_7262();
			var_574_object = Obj(); var_575_object = Obj();
			var_574_object = var_1_object;
			var_575_object = var_0_object;
			func_7256();
			var_578_object = Obj(); var_579_object = Obj();
			var_578_object = var_1_object;
			var_579_object = var_0_object;
			func_7280();
			var_582_object = Obj(); var_583_object = Obj();
			var_582_object = var_1_object;
			var_583_object = var_0_object;
			func_7286();
			var_586_string = "";
			func_865(var_47_cvector, "Anger");
			@@@var_0_object:SetMessage((int)504902);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504903, (int)5385, (int)5383);
			@@@var_0_object:AddReply((int)504925, (int)5409, (int)5412);
			@@@var_0_object:AddReply((int)504920, (int)5385, (int)5405);
			return 0;
		}
		var_598_bool = var_46_bool == (int)5385;
		if(var_598_bool != 0) {
			var_599_string = "";
			func_865(var_47_cvector, "Anger");
			@@@var_0_object:SetMessage((int)504905);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504906, (int)5388, (int)5386);
			@@@var_0_object:AddReply((int)504907, (int)5388, (int)5387);
			@@@var_0_object:AddReply((int)504922, (int)5409, (int)5408);
			return 0;
		}
		var_611_bool = var_46_bool == (int)5409;
		if(var_611_bool != 0) {
			var_612_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)504923);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504924, (int)5388, (int)5410);
			return 0;
		}
		var_618_bool = var_46_bool == (int)5388;
		if(var_618_bool != 0) {
			var_619_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)504908);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504909, (int)5392, (int)5390);
			@@@var_0_object:AddReply((int)504910, (int)5392, (int)5391);
			return 0;
		}
		var_628_bool = var_46_bool == (int)5392;
		if(var_628_bool != 0) {
			var_629_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)504911);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504912, (int)-1, (int)5394);
			@@@var_0_object:AddReply((int)504921, (int)-1, (int)5407);
			return 0;
		}
		var_638_bool = var_46_bool == (int)32990;
		if(var_638_bool != 0) {
			var_639_string = "";
			func_865(var_47_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)531618);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532837, (int)34319, (int)34318);
			@@@var_0_object:AddReply((int)532833, (int)34315, (int)34314);
			return 0;
		}
		var_648_bool = var_46_bool == (int)34315;
		if(var_648_bool != 0) {
			var_649_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532834);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532843, (int)34327, (int)34326);
			@@@var_0_object:AddReply((int)532839, (int)34321, (int)34320);
			return 0;
		}
		var_658_bool = var_46_bool == (int)34327;
		if(var_658_bool != 0) {
			var_659_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532844);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532845, (int)34319, (int)34328);
			return 0;
		}
		var_665_bool = var_46_bool == (int)34319;
		if(var_665_bool != 0) {
			var_666_string = "";
			func_865(var_47_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)532838);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)532835, (int)34321, (int)34316);
			return 0;
		}
		var_672_bool = var_46_bool == (int)34321;
		if(var_672_bool != 0) {
			var_673_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)532840);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531619, (int)-1, (int)32991);
			@@@var_0_object:AddReply((int)532842, (int)-1, (int)34325);
			return 0;
		}
		var_682_bool = var_46_bool == (int)5354;
		if(var_682_bool != 0) {
			var_683_string = "";
			func_865(var_47_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)504880);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504881, (int)5356, (int)5355);
			@@@var_0_object:AddReply((int)504889, (int)5356, (int)5365);
			return 0;
		}
		var_692_bool = var_46_bool == (int)5356;
		if(var_692_bool != 0) {
			var_693_string = "";
			func_865(var_47_cvector, "Anger");
			@@@var_0_object:SetMessage((int)504882);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504883, (int)5358, (int)5357);
			@@@var_0_object:AddReply((int)504887, (int)5358, (int)5361);
			return 0;
		}
		var_702_bool = var_46_bool == (int)5358;
		if(var_702_bool != 0) {
			var_703_string = "";
			func_865(var_47_cvector, "Anger");
			@@@var_0_object:SetMessage((int)504884);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521895, (int)23069, (int)23068);
			return 0;
		}
		var_709_bool = var_46_bool == (int)23069;
		if(var_709_bool != 0) {
			var_710_string = "";
			func_865(var_47_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)521896);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504886, (int)-1, (int)5360);
			@@@var_0_object:AddReply((int)504885, (int)-1, (int)5359);
			return 0;
		}
		var_719_bool = var_46_bool == (int)5370;
		if(var_719_bool != 0) {
			var_720_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)504892);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504928, (int)5421, (int)5416);
			@@@var_0_object:AddReply((int)504929, (int)5418, (int)5417);
			return 0;
		}
		var_729_bool = var_46_bool == (int)5418;
		if(var_729_bool != 0) {
			var_730_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)504930);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504931, (int)5358, (int)5419);
			return 0;
		}
		var_736_bool = var_46_bool == (int)5421;
		if(var_736_bool != 0) {
			var_737_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)504932);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521889, (int)23062, (int)23061);
			@@@var_0_object:AddReply((int)521891, (int)23062, (int)23063);
			return 0;
		}
		var_746_bool = var_46_bool == (int)23062;
		if(var_746_bool != 0) {
			var_747_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521890);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504893, (int)5354, (int)5371);
			@@@var_0_object:AddReply((int)504933, (int)5423, (int)5422);
			return 0;
		}
		var_756_bool = var_46_bool == (int)5423;
		if(var_756_bool != 0) {
			var_757_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)504934);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)504935, (int)23066, (int)5424);
			@@@var_0_object:AddReply((int)521892, (int)-1, (int)23065);
			return 0;
		}
		var_766_bool = var_46_bool == (int)23066;
		if(var_766_bool != 0) {
			var_767_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)521893);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)521894, (int)-1, (int)23067);
			@@@var_0_object:AddReply((int)542997, (int)-1, (int)45445);
			return 0;
		}
		var_776_bool = var_46_bool == (int)32986;
		if(var_776_bool != 0) {
			var_777_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531615);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531616, (int)32927, (int)32987);
			return 0;
		}
		var_783_bool = var_46_bool == (int)32978;
		if(var_783_bool != 0) {
			var_784_string = "";
			func_865(var_47_cvector, "Anger");
			@@@var_0_object:SetMessage((int)531609);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531610, (int)32980, (int)32979);
			return 0;
		}
		var_790_bool = var_46_bool == (int)32980;
		if(var_790_bool != 0) {
			var_791_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531611);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531612, (int)32927, (int)32981);
			@@@var_0_object:AddReply((int)531613, (int)32931, (int)32983);
			return 0;
		}
		var_800_bool = var_46_bool == (int)32927;
		if(var_800_bool != 0) {
			var_801_string = "";
			func_865(var_47_cvector, "Anger");
			@@@var_0_object:SetMessage((int)531568);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531569, (int)32929, (int)32928);
			@@@var_0_object:AddReply((int)531595, (int)32960, (int)32959);
			return 0;
		}
		var_810_bool = var_46_bool == (int)32960;
		if(var_810_bool != 0) {
			var_811_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531596);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531597, (int)32962, (int)32961);
			@@@var_0_object:AddReply((int)531607, (int)32962, (int)32975);
			return 0;
		}
		var_820_bool = var_46_bool == (int)32962;
		if(var_820_bool != 0) {
			var_821_string = "";
			func_865(var_47_cvector, "Anger");
			@@@var_0_object:SetMessage((int)531598);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531599, (int)32964, (int)32963);
			@@@var_0_object:AddReply((int)531606, (int)32933, (int)32973);
			return 0;
		}
		var_830_bool = var_46_bool == (int)32964;
		if(var_830_bool != 0) {
			var_831_string = "";
			func_865(var_47_cvector, "Anger");
			@@@var_0_object:SetMessage((int)531600);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531601, (int)32966, (int)32965);
			@@@var_0_object:AddReply((int)531605, (int)32966, (int)32971);
			return 0;
		}
		var_840_bool = var_46_bool == (int)32966;
		if(var_840_bool != 0) {
			var_841_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531602);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531603, (int)32931, (int)32967);
			@@@var_0_object:AddReply((int)531604, (int)32931, (int)32969);
			return 0;
		}
		var_850_bool = var_46_bool == (int)32929;
		if(var_850_bool != 0) {
			var_851_string = "";
			func_865(var_47_cvector, "Anger");
			@@@var_0_object:SetMessage((int)531570);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531571, (int)32931, (int)32930);
			@@@var_0_object:AddReply((int)531594, (int)32931, (int)32957);
			return 0;
		}
		var_860_bool = var_46_bool == (int)32931;
		if(var_860_bool != 0) {
			var_861_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531572);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531573, (int)32933, (int)32932);
			@@@var_0_object:AddReply((int)531593, (int)32933, (int)32955);
			return 0;
		}
		var_870_bool = var_46_bool == (int)32933;
		if(var_870_bool != 0) {
			var_871_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531574);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531575, (int)32935, (int)32934);
			@@@var_0_object:AddReply((int)531590, (int)32952, (int)32951);
			return 0;
		}
		var_880_bool = var_46_bool == (int)32952;
		if(var_880_bool != 0) {
			var_881_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531591);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531592, (int)32935, (int)32953);
			return 0;
		}
		var_887_bool = var_46_bool == (int)32935;
		if(var_887_bool != 0) {
			var_888_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531576);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531577, (int)32937, (int)32936);
			@@@var_0_object:AddReply((int)531589, (int)32941, (int)32949);
			return 0;
		}
		var_897_bool = var_46_bool == (int)32937;
		if(var_897_bool != 0) {
			var_898_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531578);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531579, (int)32939, (int)32938);
			@@@var_0_object:AddReply((int)531588, (int)32941, (int)32947);
			return 0;
		}
		var_907_bool = var_46_bool == (int)32939;
		if(var_907_bool != 0) {
			var_908_string = "";
			func_865(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531580);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531581, (int)32941, (int)32940);
			return 0;
		}
		var_914_bool = var_46_bool == (int)32941;
		if(var_914_bool != 0) {
			var_915_string = "";
			func_865(var_47_cvector, "Anger");
			@@@var_0_object:SetMessage((int)531582);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531583, (int)34601, (int)32942);
			@@@var_0_object:AddReply((int)531587, (int)-1, (int)32946);
			return 0;
		}
		var_924_bool = var_46_bool == (int)34601;
		if(var_924_bool != 0) {
			var_925_string = "";
			func_865(var_47_cvector, "Jeer");
			@@@var_0_object:SetMessage((int)533090);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533091, (int)32943, (int)34602);
			@@@var_0_object:AddReply((int)533092, (int)-1, (int)34603);
			return 0;
		}
		var_934_bool = var_46_bool == (int)32943;
		if(var_934_bool != 0) {
			var_935_string = "";
			func_865(var_47_cvector, "Jeer");
			@@@var_0_object:SetMessage((int)531584);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531585, (int)-1, (int)32944);
			@@@var_0_object:AddReply((int)531586, (int)-1, (int)32945);
			return 0;
		}
		var_3_string = true;
		var_943_bool = 0;
		func_6948(var_943_bool);
		if(var_943_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x378";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_6814();
		var_51_bool = var_47_cvector == (int)7538;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_7101();
			var_56_object = Obj(); var_57_object = Obj();
			var_56_object = var_1_object;
			var_57_object = var_0_object;
			func_7113();
			var_83_object = Obj(); var_84_object = Obj();
			var_83_object = var_1_object;
			var_84_object = var_0_object;
			func_7043();
		}
		var_105_bool = var_47_cvector == (int)7539;
		if(var_105_bool != 0) {
			var_106_object = Obj(); var_107_object = Obj();
			var_106_object = var_1_object;
			var_107_object = var_0_object;
			func_7101();
			var_108_object = Obj(); var_109_object = Obj();
			var_108_object = var_1_object;
			var_109_object = var_0_object;
			func_7113();
			var_110_object = Obj(); var_111_object = Obj();
			var_110_object = var_1_object;
			var_111_object = var_0_object;
			func_7043();
		}
		var_113_bool = var_47_cvector == (int)7542;
		if(var_113_bool != 0) {
			var_114_object = Obj(); var_115_object = Obj();
			var_114_object = var_1_object;
			var_115_object = var_0_object;
			func_7101();
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_7113();
			var_118_object = Obj(); var_119_object = Obj();
			var_118_object = var_1_object;
			var_119_object = var_0_object;
			func_7043();
		}
		var_121_bool = var_47_cvector == (int)7543;
		if(var_121_bool != 0) {
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_7101();
			var_124_object = Obj(); var_125_object = Obj();
			var_124_object = var_1_object;
			var_125_object = var_0_object;
			func_7113();
			var_126_object = Obj(); var_127_object = Obj();
			var_126_object = var_1_object;
			var_127_object = var_0_object;
			func_7043();
		}
		var_129_bool = var_47_cvector == (int)7557;
		if(var_129_bool != 0) {
			var_130_object = Obj(); var_131_object = Obj();
			var_130_object = var_1_object;
			var_131_object = var_0_object;
			func_7107();
		}
		var_135_bool = var_47_cvector == (int)7839;
		if(var_135_bool != 0) {
			var_136_object = Obj(); var_137_object = Obj();
			var_136_object = var_1_object;
			var_137_object = var_0_object;
			func_7107();
			var_138_object = Obj(); var_139_object = Obj();
			var_138_object = var_1_object;
			var_139_object = var_0_object;
			func_7113();
		}
		var_141_bool = var_47_cvector == (int)7843;
		if(var_141_bool != 0) {
			var_142_object = Obj(); var_143_object = Obj();
			var_142_object = var_1_object;
			var_143_object = var_0_object;
			func_7107();
			var_144_object = Obj(); var_145_object = Obj();
			var_144_object = var_1_object;
			var_145_object = var_0_object;
			func_7113();
		}
		var_147_bool = var_46_bool == (int)7529;
		if(var_147_bool != 0) {
			var_148_bool = 0;
			var_148_bool = 0;
			var_149_bool = 0; var_150_object = Obj();
			var_150_object = var_1_object;
			func_7431(var_150_object);
			if(var_149_bool != 0) {
				var_155_bool = 0; var_156_object = Obj();
				var_156_object = var_1_object;
				func_7467(var_156_object);
				if(var_155_bool != 0) {
					var_148_bool = 1;
				}
			}
			if(var_148_bool != 0) {
				var_161_string = "";
				func_2760(var_47_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)506829);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)506830, (int)7531, (int)7530);
				@@@var_0_object:AddReply((int)506844, (int)7547, (int)7546);
				@@@var_0_object:AddReply((int)506849, (int)7535, (int)7554);
				@@@var_0_object:AddReply((int)506848, (int)7547, (int)7552);
				return 0;
			}
			var_191_string = "";
			func_2760(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506850);
			@@@var_0_object:ClearReplies();
			var_193_bool = 0;
			var_193_bool = 0;
			var_194_bool = 0; var_195_object = Obj();
			var_195_object = var_1_object;
			func_7443(var_195_object);
			if(var_194_bool != 0) {
				var_200_bool = 0; var_201_object = Obj();
				var_201_object = var_1_object;
				func_7455(var_201_object);
				if(var_200_bool != 0) {
					var_193_bool = 1;
				}
			}
			if(var_193_bool != 0) {
				@@@var_0_object:AddReply((int)506851, (int)7835, (int)7557);
			}
			@@@var_0_object:AddReply((int)507536, (int)-1, (int)8318);
			@@@var_0_object:AddReply((int)533836, (int)-1, (int)35386);
			return 0;
		}
		var_216_bool = var_46_bool == (int)7835;
		if(var_216_bool != 0) {
			var_217_string = "";
			func_2760(var_47_cvector, "Anger");
			@@@var_0_object:SetMessage((int)507116);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507117, (int)7840, (int)7836);
			@@@var_0_object:AddReply((int)507118, (int)7838, (int)7837);
			return 0;
		}
		var_226_bool = var_46_bool == (int)7838;
		if(var_226_bool != 0) {
			var_227_string = "";
			func_2760(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507119);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507120, (int)-1, (int)7839);
			@@@var_0_object:AddReply((int)507124, (int)-1, (int)7843);
			return 0;
		}
		var_236_bool = var_46_bool == (int)7840;
		if(var_236_bool != 0) {
			var_237_string = "";
			func_2760(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507121);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507125, (int)7845, (int)7844);
			@@@var_0_object:AddReply((int)507127, (int)7847, (int)7846);
			return 0;
		}
		var_246_bool = var_46_bool == (int)7847;
		if(var_246_bool != 0) {
			var_247_string = "";
			func_2760(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507128);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507129, (int)7845, (int)7848);
			return 0;
		}
		var_253_bool = var_46_bool == (int)7845;
		if(var_253_bool != 0) {
			var_254_string = "";
			func_2760(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507126);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507122, (int)-1, (int)7841);
			@@@var_0_object:AddReply((int)507123, (int)-1, (int)7842);
			return 0;
		}
		var_263_bool = var_46_bool == (int)7547;
		if(var_263_bool != 0) {
			var_264_string = "";
			func_2760(var_47_cvector, "Anger");
			@@@var_0_object:SetMessage((int)506845);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506846, (int)7533, (int)7548);
			@@@var_0_object:AddReply((int)506847, (int)7533, (int)7550);
			return 0;
		}
		var_273_bool = var_46_bool == (int)7531;
		if(var_273_bool != 0) {
			var_274_string = "";
			func_2760(var_47_cvector, "Anger");
			@@@var_0_object:SetMessage((int)506831);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506832, (int)7533, (int)7532);
			return 0;
		}
		var_280_bool = var_46_bool == (int)7533;
		if(var_280_bool != 0) {
			var_281_string = "";
			func_2760(var_47_cvector, "Anger");
			@@@var_0_object:SetMessage((int)506833);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506834, (int)7535, (int)7534);
			@@@var_0_object:AddReply((int)506843, (int)7535, (int)7544);
			@@@var_0_object:AddReply((int)506842, (int)-1, (int)7543);
			return 0;
		}
		var_293_bool = var_46_bool == (int)7535;
		if(var_293_bool != 0) {
			var_294_string = "";
			func_2760(var_47_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)506835);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506836, (int)7537, (int)7536);
			@@@var_0_object:AddReply((int)506840, (int)7537, (int)7540);
			@@@var_0_object:AddReply((int)506841, (int)-1, (int)7542);
			return 0;
		}
		var_306_bool = var_46_bool == (int)7537;
		if(var_306_bool != 0) {
			var_307_string = "";
			func_2760(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506837);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506838, (int)-1, (int)7538);
			@@@var_0_object:AddReply((int)506839, (int)-1, (int)7539);
			return 0;
		}
		var_3_string = true;
		var_315_bool = 0;
		func_6948(var_315_bool);
		if(var_315_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xadf";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_6814();
		var_51_bool = var_47_cvector == (int)11255;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_7170();
		}
		var_112_bool = var_47_cvector == (int)9939;
		if(var_112_bool != 0) {
			var_113_object = Obj(); var_114_object = Obj();
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_7170();
		}
		var_116_bool = var_47_cvector == (int)35971;
		if(var_116_bool != 0) {
			var_117_object = Obj(); var_118_object = Obj();
			var_117_object = var_1_object;
			var_118_object = var_0_object;
			func_7128(var_118_object);
			var_138_object = Obj(); var_139_object = Obj();
			var_138_object = var_1_object;
			var_139_object = var_0_object;
			func_7066();
			var_142_object = Obj(); var_143_object = Obj();
			var_142_object = var_1_object;
			var_143_object = var_0_object;
			func_7138();
		}
		var_165_bool = var_47_cvector == (int)35972;
		if(var_165_bool != 0) {
			var_166_object = Obj(); var_167_object = Obj();
			var_166_object = var_1_object;
			var_167_object = var_0_object;
			func_7138();
		}
		var_169_bool = var_47_cvector == (int)11275;
		if(var_169_bool != 0) {
			var_170_object = Obj(); var_171_object = Obj();
			var_170_object = var_1_object;
			var_171_object = var_0_object;
			func_7138();
		}
		var_173_bool = var_47_cvector == (int)9905;
		if(var_173_bool != 0) {
			var_174_object = Obj(); var_175_object = Obj();
			var_174_object = var_1_object;
			var_175_object = var_0_object;
			func_7170();
		}
		var_177_bool = var_47_cvector == (int)12577;
		if(var_177_bool != 0) {
			var_178_object = Obj(); var_179_object = Obj();
			var_178_object = var_1_object;
			var_179_object = var_0_object;
			func_7170();
		}
		var_181_bool = var_47_cvector == (int)9918;
		if(var_181_bool != 0) {
			var_182_object = Obj(); var_183_object = Obj();
			var_182_object = var_1_object;
			var_183_object = var_0_object;
			func_7158();
		}
		var_187_bool = var_47_cvector == (int)11511;
		if(var_187_bool != 0) {
			var_188_object = Obj(); var_189_object = Obj();
			var_188_object = var_1_object;
			var_189_object = var_0_object;
			func_7226();
		}
		var_193_bool = var_47_cvector == (int)11515;
		if(var_193_bool != 0) {
			var_194_object = Obj(); var_195_object = Obj();
			var_194_object = var_1_object;
			var_195_object = var_0_object;
			func_7066();
			var_196_object = Obj(); var_197_object = Obj();
			var_196_object = var_1_object;
			var_197_object = var_0_object;
			func_7200();
			var_209_object = Obj(); var_210_object = Obj();
			var_209_object = var_1_object;
			var_210_object = var_0_object;
			func_6950(var_210_object);
		}
		var_215_bool = var_47_cvector == (int)35973;
		if(var_215_bool != 0) {
			var_216_object = Obj(); var_217_object = Obj();
			var_216_object = var_1_object;
			var_217_object = var_0_object;
			func_6950(var_217_object);
			var_218_object = Obj(); var_219_object = Obj();
			var_218_object = var_1_object;
			var_219_object = var_0_object;
			func_7066();
			var_220_object = Obj(); var_221_object = Obj();
			var_220_object = var_1_object;
			var_221_object = var_0_object;
			func_7200();
		}
		var_223_bool = var_47_cvector == (int)9915;
		if(var_223_bool != 0) {
			var_224_object = Obj(); var_225_object = Obj();
			var_224_object = var_1_object;
			var_225_object = var_0_object;
			func_7066();
			var_226_object = Obj(); var_227_object = Obj();
			var_226_object = var_1_object;
			var_227_object = var_0_object;
			func_7128(var_227_object);
			var_228_object = Obj(); var_229_object = Obj();
			var_228_object = var_1_object;
			var_229_object = var_0_object;
			func_7138();
		}
		var_231_bool = var_47_cvector == (int)9916;
		if(var_231_bool != 0) {
			var_232_object = Obj(); var_233_object = Obj();
			var_232_object = var_1_object;
			var_233_object = var_0_object;
			func_7138();
		}
		var_235_bool = var_46_bool == (int)9919;
		if(var_235_bool != 0) {
			var_236_bool = 0; var_237_object = Obj();
			var_237_object = var_1_object;
			func_7563(var_237_object);
			if(var_236_bool != 0) {
				var_244_object = Obj(); var_245_object = Obj();
				var_244_object = var_1_object;
				var_245_object = var_0_object;
				func_7316();
				var_248_object = Obj(); var_249_object = Obj();
				var_248_object = var_1_object;
				var_249_object = var_0_object;
				func_7164();
				var_252_string = "";
				func_3468(var_47_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)509043);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)509044, (int)9921, (int)9920);
				return 0;
			}
			var_273_object = Obj(); var_274_object = Obj();
			var_273_object = var_1_object;
			var_274_object = var_0_object;
			func_7316();
			var_275_string = "";
			func_3468(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509024);
			@@@var_0_object:ClearReplies();
			var_277_bool = 0; var_278_object = Obj();
			var_278_object = var_1_object;
			func_7587(var_278_object);
			if(var_277_bool != 0) {
				@@@var_0_object:AddReply((int)511376, (int)9899, (int)12575);
			}
			var_286_bool = 0;
			var_286_bool = 0;
			var_287_bool = 0; var_288_object = Obj();
			var_288_object = var_1_object;
			func_7551(var_288_object);
			if(var_287_bool != 0) {
				var_293_bool = 0; var_294_object = Obj();
				var_294_object = var_1_object;
				func_7382(var_294_object);
				if(var_293_bool != 0) {
					var_286_bool = 1;
				}
			}
			if(var_286_bool != 0) {
				@@@var_0_object:AddReply((int)509042, (int)9941, (int)9918);
			}
			var_302_bool = 0;
			var_302_bool = 0;
			var_303_bool = 0;
			var_303_bool = 0;
			var_304_bool = 0; var_305_object = Obj();
			var_305_object = var_1_object;
			func_7599(var_305_object);
			if(var_304_bool != 0) {
				var_310_bool = 0; var_311_object = Obj();
				var_311_object = var_1_object;
				func_7611(var_311_object);
				if(var_310_bool != 0) {
					var_303_bool = 1;
				}
			}
			if(var_303_bool != 0) {
				var_316_bool = 0; var_317_object = Obj();
				var_317_object = var_1_object;
				func_7394(var_317_object);
				if(var_316_bool != 0) {
					var_302_bool = 1;
				}
			}
			if(var_302_bool != 0) {
				@@@var_0_object:AddReply((int)510442, (int)11512, (int)11511);
			}
			var_338_bool = 0;
			var_338_bool = 0;
			var_339_bool = 0; var_340_object = Obj();
			var_340_object = var_1_object;
			func_7575(var_340_object);
			if(var_339_bool != 0) {
				var_345_bool = 0; var_346_object = Obj();
				var_346_object = var_1_object;
				func_7394(var_346_object);
				if(var_345_bool != 0) {
					var_338_bool = 1;
				}
			}
			if(var_338_bool != 0) {
				@@@var_0_object:AddReply((int)509034, (int)9910, (int)9909);
			}
			@@@var_0_object:AddReply((int)511147, (int)-1, (int)12337);
			return 0;
		}
		var_354_bool = var_46_bool == (int)9910;
		if(var_354_bool != 0) {
			var_355_string = "";
			func_3468(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509035);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509036, (int)9914, (int)9911);
			@@@var_0_object:AddReply((int)509037, (int)9914, (int)9913);
			return 0;
		}
		var_364_bool = var_46_bool == (int)9914;
		if(var_364_bool != 0) {
			var_365_string = "";
			func_3468(var_47_cvector, "Anger");
			@@@var_0_object:SetMessage((int)509038);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509039, (int)-1, (int)9915);
			@@@var_0_object:AddReply((int)509040, (int)-1, (int)9916);
			return 0;
		}
		var_374_bool = var_46_bool == (int)11512;
		if(var_374_bool != 0) {
			var_375_string = "";
			func_3468(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510443);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510444, (int)11514, (int)11513);
			return 0;
		}
		var_381_bool = var_46_bool == (int)11514;
		if(var_381_bool != 0) {
			var_382_string = "";
			func_3468(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510445);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510446, (int)-1, (int)11515);
			@@@var_0_object:AddReply((int)534367, (int)-1, (int)35973);
			return 0;
		}
		var_391_bool = var_46_bool == (int)9941;
		if(var_391_bool != 0) {
			var_392_string = "";
			func_3468(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509064);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509065, (int)9943, (int)9942);
			return 0;
		}
		var_398_bool = var_46_bool == (int)9943;
		if(var_398_bool != 0) {
			var_399_string = "";
			func_3468(var_47_cvector, "Anger");
			@@@var_0_object:SetMessage((int)509066);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509067, (int)9946, (int)9944);
			@@@var_0_object:AddReply((int)509068, (int)9949, (int)9945);
			return 0;
		}
		var_408_bool = var_46_bool == (int)9949;
		if(var_408_bool != 0) {
			var_409_string = "";
			func_3468(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509072);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509073, (int)9948, (int)9950);
			return 0;
		}
		var_415_bool = var_46_bool == (int)9946;
		if(var_415_bool != 0) {
			var_416_string = "";
			func_3468(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509069);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509074, (int)9953, (int)9952);
			@@@var_0_object:AddReply((int)509070, (int)9948, (int)9947);
			return 0;
		}
		var_425_bool = var_46_bool == (int)9948;
		if(var_425_bool != 0) {
			var_426_string = "";
			func_3468(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509071);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511149, (int)-1, (int)12338);
			return 0;
		}
		var_432_bool = var_46_bool == (int)9953;
		if(var_432_bool != 0) {
			var_433_string = "";
			func_3468(var_47_cvector, "Anger");
			@@@var_0_object:SetMessage((int)509075);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509076, (int)-1, (int)9954);
			@@@var_0_object:AddReply((int)509077, (int)-1, (int)9955);
			return 0;
		}
		var_442_bool = var_46_bool == (int)9899;
		if(var_442_bool != 0) {
			var_443_string = "";
			func_3468(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509025);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509026, (int)9901, (int)9900);
			@@@var_0_object:AddReply((int)509033, (int)9901, (int)9908);
			return 0;
		}
		var_452_bool = var_46_bool == (int)9901;
		if(var_452_bool != 0) {
			var_453_string = "";
			func_3468(var_47_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)509027);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509028, (int)9903, (int)9902);
			@@@var_0_object:AddReply((int)509032, (int)9903, (int)9906);
			return 0;
		}
		var_462_bool = var_46_bool == (int)9903;
		if(var_462_bool != 0) {
			var_463_string = "";
			func_3468(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509029);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509031, (int)-1, (int)9905);
			@@@var_0_object:AddReply((int)511378, (int)-1, (int)12577);
			return 0;
		}
		var_472_bool = var_46_bool == (int)9921;
		if(var_472_bool != 0) {
			var_473_string = "";
			func_3468(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509045);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510222, (int)11270, (int)11269);
			return 0;
		}
		var_479_bool = var_46_bool == (int)11270;
		if(var_479_bool != 0) {
			var_480_string = "";
			func_3468(var_47_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)510223);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509046, (int)11280, (int)9922);
			@@@var_0_object:AddReply((int)510224, (int)9929, (int)11271);
			var_488_bool = 0; var_489_object = Obj();
			var_489_object = var_1_object;
			func_7575(var_489_object);
			if(var_488_bool != 0) {
				@@@var_0_object:AddReply((int)509047, (int)9924, (int)9923);
			}
			return 0;
		}
		var_494_bool = var_46_bool == (int)9924;
		if(var_494_bool != 0) {
			var_495_string = "";
			func_3468(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509048);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509049, (int)9929, (int)9925);
			@@@var_0_object:AddReply((int)510225, (int)11273, (int)11272);
			return 0;
		}
		var_504_bool = var_46_bool == (int)11273;
		if(var_504_bool != 0) {
			var_505_string = "";
			func_3468(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510226);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510227, (int)35970, (int)11274);
			@@@var_0_object:AddReply((int)510228, (int)-1, (int)11275);
			return 0;
		}
		var_514_bool = var_46_bool == (int)35970;
		if(var_514_bool != 0) {
			var_515_string = "";
			func_3468(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534364);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534365, (int)-1, (int)35971);
			@@@var_0_object:AddReply((int)534366, (int)-1, (int)35972);
			return 0;
		}
		var_524_bool = var_46_bool == (int)9929;
		if(var_524_bool != 0) {
			var_525_string = "";
			func_3468(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509053);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509060, (int)9938, (int)9937);
			return 0;
		}
		var_531_bool = var_46_bool == (int)9938;
		if(var_531_bool != 0) {
			var_532_string = "";
			func_3468(var_47_cvector, "Anger");
			@@@var_0_object:SetMessage((int)509061);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509063, (int)11254, (int)9940);
			@@@var_0_object:AddReply((int)509062, (int)-1, (int)9939);
			return 0;
		}
		var_541_bool = var_46_bool == (int)11254;
		if(var_541_bool != 0) {
			var_542_string = "";
			func_3468(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510208);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510209, (int)-1, (int)11255);
			@@@var_0_object:AddReply((int)510231, (int)-1, (int)11278);
			return 0;
		}
		var_551_bool = var_46_bool == (int)11280;
		if(var_551_bool != 0) {
			var_552_string = "";
			func_3468(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510232);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510233, (int)9938, (int)11281);
			@@@var_0_object:AddReply((int)510234, (int)9938, (int)11282);
			return 0;
		}
		var_3_string = true;
		var_560_bool = 0;
		func_6948(var_560_bool);
		if(var_560_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xda3";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_6814();
		var_51_bool = var_47_cvector == (int)13011;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_7274();
		}
		var_57_bool = var_47_cvector == (int)16781;
		if(var_57_bool != 0) {
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_object;
			func_7274();
		}
		var_61_bool = var_47_cvector == (int)16782;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_7274();
		}
		var_65_bool = var_47_cvector == (int)16772;
		if(var_65_bool != 0) {
			var_66_object = Obj(); var_67_object = Obj();
			var_66_object = var_1_object;
			var_67_object = var_0_object;
			func_7274();
		}
		var_69_bool = var_46_bool == (int)13001;
		if(var_69_bool != 0) {
			var_70_string = "";
			func_4431(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511791);
			@@@var_0_object:ClearReplies();
			var_88_bool = 0;
			var_88_bool = 0;
			var_89_bool = 0; var_90_object = Obj();
			var_90_object = var_1_object;
			func_7635(var_90_object);
			if(var_89_bool != 0) {
				var_97_bool = 0; var_98_object = Obj();
				var_98_object = var_1_object;
				func_7623(var_98_object);
				if(var_97_bool != 0) {
					var_88_bool = 1;
				}
			}
			if(var_88_bool != 0) {
				@@@var_0_object:AddReply((int)511792, (int)13003, (int)13002);
			}
			var_106_bool = 0; var_107_object = Obj();
			var_107_object = var_1_object;
			func_7755(var_107_object);
			if(var_106_bool != 0) {
				@@@var_0_object:AddReply((int)515713, (int)16770, (int)16769);
			}
			@@@var_0_object:AddReply((int)511794, (int)-1, (int)13004);
			return 0;
		}
		var_119_bool = var_46_bool == (int)16770;
		if(var_119_bool != 0) {
			var_120_string = "";
			func_4431(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)515714);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515717, (int)16774, (int)16773);
			@@@var_0_object:AddReply((int)515719, (int)16774, (int)16775);
			return 0;
		}
		var_129_bool = var_46_bool == (int)16774;
		if(var_129_bool != 0) {
			var_130_string = "";
			func_4431(var_47_cvector, "Jeer");
			@@@var_0_object:SetMessage((int)515718);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515726, (int)16784, (int)16783);
			return 0;
		}
		var_136_bool = var_46_bool == (int)16784;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_4431(var_47_cvector, "Jeer");
			@@@var_0_object:SetMessage((int)515727);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515728, (int)16787, (int)16786);
			return 0;
		}
		var_143_bool = var_46_bool == (int)16787;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_4431(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)515729);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515730, (int)-1, (int)16788);
			@@@var_0_object:AddReply((int)515731, (int)-1, (int)16789);
			return 0;
		}
		var_153_bool = var_46_bool == (int)13003;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_4431(var_47_cvector, "Jeer");
			@@@var_0_object:SetMessage((int)511793);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511795, (int)13006, (int)13005);
			@@@var_0_object:AddReply((int)515711, (int)16768, (int)16767);
			return 0;
		}
		var_163_bool = var_46_bool == (int)16768;
		if(var_163_bool != 0) {
			var_164_string = "";
			func_4431(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)515712);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515715, (int)13006, (int)16771);
			@@@var_0_object:AddReply((int)515716, (int)-1, (int)16772);
			return 0;
		}
		var_173_bool = var_46_bool == (int)13006;
		if(var_173_bool != 0) {
			var_174_string = "";
			func_4431(var_47_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)511796);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511797, (int)13008, (int)13007);
			return 0;
		}
		var_180_bool = var_46_bool == (int)13008;
		if(var_180_bool != 0) {
			var_181_string = "";
			func_4431(var_47_cvector, "Distrust");
			@@@var_0_object:SetMessage((int)511798);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511799, (int)13010, (int)13009);
			@@@var_0_object:AddReply((int)515720, (int)16778, (int)16777);
			return 0;
		}
		var_190_bool = var_46_bool == (int)16778;
		if(var_190_bool != 0) {
			var_191_string = "";
			func_4431(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)515721);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515722, (int)16780, (int)16779);
			return 0;
		}
		var_197_bool = var_46_bool == (int)16780;
		if(var_197_bool != 0) {
			var_198_string = "";
			func_4431(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)515723);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515724, (int)-1, (int)16781);
			@@@var_0_object:AddReply((int)515725, (int)-1, (int)16782);
			return 0;
		}
		var_207_bool = var_46_bool == (int)13010;
		if(var_207_bool != 0) {
			var_208_string = "";
			func_4431(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511800);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511801, (int)-1, (int)13011);
			return 0;
		}
		var_3_string = true;
		var_213_bool = 0;
		func_6948(var_213_bool);
		if(var_213_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1166";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_6814();
		var_51_bool = var_46_bool == (int)13415;
		if(var_51_bool != 0) {
			var_52_bool = 0;
			var_52_bool = 0;
			var_53_bool = 0; var_54_object = Obj();
			var_54_object = var_1_object;
			func_7731(var_54_object);
			if(var_53_bool != 0) {
				var_61_bool = 0; var_62_object = Obj();
				var_62_object = var_1_object;
				func_7743(var_62_object);
				if(var_61_bool != 0) {
					var_52_bool = 1;
				}
			}
			if(var_52_bool != 0) {
				var_67_object = Obj(); var_68_object = Obj();
				var_67_object = var_1_object;
				var_68_object = var_0_object;
				func_7310();
				var_71_string = "";
				func_4957(var_47_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)512258);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)512259, (int)13417, (int)13416);
				@@@var_0_object:AddReply((int)541804, (int)-1, (int)44016);
				return 0;
			}
			var_95_string = "";
			func_4957(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)513775);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513776, (int)-1, (int)15012);
			@@@var_0_object:AddReply((int)541596, (int)-1, (int)43760);
			return 0;
		}
		var_104_bool = var_46_bool == (int)13417;
		if(var_104_bool != 0) {
			var_105_string = "";
			func_4957(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512260);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512261, (int)13419, (int)13418);
			@@@var_0_object:AddReply((int)541805, (int)44029, (int)44017);
			return 0;
		}
		var_114_bool = var_46_bool == (int)44029;
		if(var_114_bool != 0) {
			var_115_string = "";
			func_4957(var_47_cvector, "Anger");
			@@@var_0_object:SetMessage((int)541817);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541818, (int)13421, (int)44030);
			return 0;
		}
		var_121_bool = var_46_bool == (int)13419;
		if(var_121_bool != 0) {
			var_122_string = "";
			func_4957(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512262);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512263, (int)13421, (int)13420);
			return 0;
		}
		var_128_bool = var_46_bool == (int)13421;
		if(var_128_bool != 0) {
			var_129_string = "";
			func_4957(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512264);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512265, (int)13423, (int)13422);
			return 0;
		}
		var_135_bool = var_46_bool == (int)13423;
		if(var_135_bool != 0) {
			var_136_string = "";
			func_4957(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512266);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512267, (int)13425, (int)13424);
			@@@var_0_object:AddReply((int)541819, (int)44033, (int)44032);
			return 0;
		}
		var_145_bool = var_46_bool == (int)44033;
		if(var_145_bool != 0) {
			var_146_string = "";
			func_4957(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541820);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541821, (int)44035, (int)44034);
			return 0;
		}
		var_152_bool = var_46_bool == (int)44035;
		if(var_152_bool != 0) {
			var_153_string = "";
			func_4957(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541822);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541823, (int)44037, (int)44036);
			@@@var_0_object:AddReply((int)541826, (int)13425, (int)44039);
			return 0;
		}
		var_162_bool = var_46_bool == (int)44037;
		if(var_162_bool != 0) {
			var_163_string = "";
			func_4957(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)541824);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541825, (int)13425, (int)44038);
			return 0;
		}
		var_169_bool = var_46_bool == (int)13425;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_4957(var_47_cvector, "Anger");
			@@@var_0_object:SetMessage((int)512268);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512269, (int)13427, (int)13426);
			return 0;
		}
		var_176_bool = var_46_bool == (int)13427;
		if(var_176_bool != 0) {
			var_177_string = "";
			func_4957(var_47_cvector, "Anger");
			@@@var_0_object:SetMessage((int)512270);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512271, (int)13429, (int)13428);
			return 0;
		}
		var_183_bool = var_46_bool == (int)13429;
		if(var_183_bool != 0) {
			var_184_string = "";
			func_4957(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)512272);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512273, (int)-1, (int)13430);
			@@@var_0_object:AddReply((int)541827, (int)-1, (int)44042);
			return 0;
		}
		var_3_string = true;
		var_192_bool = 0;
		func_6948(var_192_bool);
		if(var_192_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1374";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_6814();
		var_51_bool = var_47_cvector == (int)35708;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_7078();
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_object;
			var_96_object = var_0_object;
			func_6960(var_96_object);
		}
		var_122_bool = var_47_cvector == (int)35709;
		if(var_122_bool != 0) {
			var_123_object = Obj(); var_124_object = Obj();
			var_123_object = var_1_object;
			var_124_object = var_0_object;
			func_7078();
			var_125_object = Obj(); var_126_object = Obj();
			var_125_object = var_1_object;
			var_126_object = var_0_object;
			func_6960(var_126_object);
		}
		var_128_bool = var_46_bool == (int)35702;
		if(var_128_bool != 0) {
			var_129_string = "";
			func_5422(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)534109);
			@@@var_0_object:ClearReplies();
			var_147_bool = 0; var_148_object = Obj();
			var_148_object = var_1_object;
			func_7370(var_148_object);
			if(var_147_bool != 0) {
				@@@var_0_object:AddReply((int)534110, (int)38263, (int)35703);
			}
			@@@var_0_object:AddReply((int)534111, (int)-1, (int)35704);
			return 0;
		}
		var_162_bool = var_46_bool == (int)38263;
		if(var_162_bool != 0) {
			var_163_string = "";
			func_5422(var_47_cvector, "Grin");
			@@@var_0_object:SetMessage((int)536470);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536471, (int)38265, (int)38264);
			@@@var_0_object:AddReply((int)536477, (int)38271, (int)38270);
			return 0;
		}
		var_172_bool = var_46_bool == (int)38271;
		if(var_172_bool != 0) {
			var_173_string = "";
			func_5422(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536478);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536481, (int)38267, (int)38274);
			@@@var_0_object:AddReply((int)536480, (int)35705, (int)38273);
			return 0;
		}
		var_182_bool = var_46_bool == (int)38265;
		if(var_182_bool != 0) {
			var_183_string = "";
			func_5422(var_47_cvector, "Jeer");
			@@@var_0_object:SetMessage((int)536472);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536473, (int)38267, (int)38266);
			@@@var_0_object:AddReply((int)536479, (int)35705, (int)38272);
			return 0;
		}
		var_192_bool = var_46_bool == (int)38267;
		if(var_192_bool != 0) {
			var_193_string = "";
			func_5422(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536474);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536475, (int)35705, (int)38268);
			@@@var_0_object:AddReply((int)536482, (int)38279, (int)38278);
			return 0;
		}
		var_202_bool = var_46_bool == (int)38279;
		if(var_202_bool != 0) {
			var_203_string = "";
			func_5422(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536483);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536484, (int)35705, (int)38280);
			@@@var_0_object:AddReply((int)536485, (int)35705, (int)38281);
			return 0;
		}
		var_212_bool = var_46_bool == (int)35705;
		if(var_212_bool != 0) {
			var_213_string = "";
			func_5422(var_47_cvector, "Grin");
			@@@var_0_object:SetMessage((int)534112);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534445, (int)38305, (int)36078);
			@@@var_0_object:AddReply((int)536486, (int)36079, (int)38284);
			return 0;
		}
		var_222_bool = var_46_bool == (int)38305;
		if(var_222_bool != 0) {
			var_223_string = "";
			func_5422(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536505);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536506, (int)36079, (int)38306);
			@@@var_0_object:AddReply((int)536507, (int)36079, (int)38307);
			return 0;
		}
		var_232_bool = var_46_bool == (int)36079;
		if(var_232_bool != 0) {
			var_233_string = "";
			func_5422(var_47_cvector, "Grin");
			@@@var_0_object:SetMessage((int)534446);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534113, (int)35707, (int)35706);
			return 0;
		}
		var_239_bool = var_46_bool == (int)35707;
		if(var_239_bool != 0) {
			var_240_string = "";
			func_5422(var_47_cvector, "Grin");
			@@@var_0_object:SetMessage((int)534114);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534115, (int)-1, (int)35708);
			@@@var_0_object:AddReply((int)534116, (int)-1, (int)35709);
			return 0;
		}
		var_3_string = true;
		var_248_bool = 0;
		func_6948(var_248_bool);
		if(var_248_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1545";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_6814();
		var_51_bool = var_46_bool == (int)37348;
		if(var_51_bool != 0) {
			var_52_string = "";
			func_5863(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535662);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535663, (int)42111, (int)37349);
			@@@var_0_object:AddReply((int)540003, (int)-1, (int)41974);
			@@@var_0_object:AddReply((int)540138, (int)-1, (int)42110);
			return 0;
		}
		var_80_bool = var_46_bool == (int)42111;
		if(var_80_bool != 0) {
			var_81_string = "";
			func_5863(var_47_cvector, "Grin");
			@@@var_0_object:SetMessage((int)540139);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540219, (int)42200, (int)42199);
			@@@var_0_object:AddReply((int)540221, (int)42202, (int)42201);
			return 0;
		}
		var_90_bool = var_46_bool == (int)42202;
		if(var_90_bool != 0) {
			var_91_string = "";
			func_5863(var_47_cvector, "Grin");
			@@@var_0_object:SetMessage((int)540222);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540223, (int)42200, (int)42203);
			return 0;
		}
		var_97_bool = var_46_bool == (int)42200;
		if(var_97_bool != 0) {
			var_98_string = "";
			func_5863(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540220);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540224, (int)42209, (int)42205);
			@@@var_0_object:AddReply((int)540225, (int)42207, (int)42206);
			return 0;
		}
		var_107_bool = var_46_bool == (int)42207;
		if(var_107_bool != 0) {
			var_108_string = "";
			func_5863(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540226);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540227, (int)-1, (int)42208);
			@@@var_0_object:AddReply((int)540231, (int)-1, (int)42212);
			return 0;
		}
		var_117_bool = var_46_bool == (int)42209;
		if(var_117_bool != 0) {
			var_118_string = "";
			func_5863(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540228);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540229, (int)-1, (int)42210);
			@@@var_0_object:AddReply((int)540230, (int)-1, (int)42211);
			return 0;
		}
		var_3_string = true;
		var_126_bool = 0;
		func_6948(var_126_bool);
		if(var_126_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x16fe";
	
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_cvector)
{
	if((int)1 != 0) {
		func_6814();
		var_51_bool = var_46_int == (int)42551;
		if(var_51_bool != 0) {
			var_52_string = "";
			func_6181(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540542);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540543, (int)-1, (int)42552);
			@@@var_0_object:AddReply((int)540796, (int)-1, (int)42845);
			return 0;
		}
		var_3_string = true;
		var_76_bool = 0;
		func_6948(var_76_bool);
		if(var_76_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x183c";
	
}


task_18_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_int)
{
	var_48_bool = var_46_int == (int)10;
	if(var_48_bool != 0) {
		func_6317();
		var_50_bool = 0;
		var_50_bool = 0;
		var_51_bool = 0;
		func_6538(var_51_bool);
		if(var_51_bool != 0) {
			var_54_bool = 0;
			func_6286(var_54_bool);
			if(var_54_bool != 0) {
				var_50_bool = 1;
			}
		}
		if(var_50_bool != 0) {
			var_71_bool = 0;
			func_6266(var_71_bool);
			if(var_71_bool != 0) {
				var_90_bool = 0; var_91_object = Obj();
				func_6821(Obj());
				var_92_object = var_91_object;
				func_6688(var_90_bool, var_91_object);
			}
		} else {
			func_6281(var_46_int);
			func_6308();
		}
	}
	return 0;
	
}


task_18_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	func_6499();
	func_6317();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_18_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	StopGroup0();
	func_6317();
	var_47_string = "";
	func_6768("Neutral");
	func_6308();
	return 0;
}


task_18_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_bool)
{
	var_47_bool = var_46_bool;
	if(var_47_bool != 0) {
		func_6308();
	} else {
		var_53_string = "";
		func_6768("Neutral");
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
		func_6499();
		var_50_bool = 0; var_51_object = Obj();
		var_46_object = var_51_object;
		func_6529(var_50_bool, var_51_object);
		EventEnable(0);
		var_64_object = Obj();
		var_46_object = var_64_object;
		func_8005(var_64_object);
		var_1127_string = "";
		func_6768("Neutral");
		func_6317();
		func_6308();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	var_46_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_6252(var_45_cvector);
	return 0;
}


func_0(var_0_object, var_752_int, var_753_object)
{
	var_755_object = Obj(); var_756_bool = 0; var_757_int = 0; var_758_bool = 0; var_759_object = Obj(); var_760_bool = 0; var_761_int = 0; var_762_bool = 0;
	var_0_object = var_753_object;
	var_763_bool = 0; var_764_object = Obj(); var_765_float = 0;
	var_753_object = var_764_object;
	func_6543(var_763_bool, var_764_object, (float)70.0);
	var_766_bool = var_763_bool == 0; //@nz
	if(var_766_bool != 0) {
		var_752_int = -2;
		return 8;
	}
	CreateDialog(var_759_object);
	var_767_int = 0;
	func_6942(var_767_int);
	@@var_759_object:SetNPCName(var_767_int);
	var_768_int = 0;
	func_6940(var_768_int);
	@@var_759_object:SetNPCDescription(var_768_int);
	var_769_string = "";
	func_6944(var_769_string);
	@@var_759_object:SetPhoto(var_769_string);
	var_770_string = "";
	func_6946(var_770_string);
	@@var_759_object:SetPhoto2(var_770_string);
	var_771_int = 0;
	func_7988(var_771_int);
	@@var_759_object:SetPlayerName(var_771_int);
	IsOverrideActive(var_760_bool);
	var_772_bool = var_760_bool;
	if(var_772_bool != 0) {
		var_752_int = -2;
		return 8;
	}
	DoDialog(var_759_object);
	var_773_bool = 0; var_774_object = Obj();
	func_6821(Obj());
	var_775_object = var_774_object;
	func_6630(var_773_bool, var_774_object);
	var_776_object = Obj(); var_777_object = Obj();
	var_753_object = var_776_object;
	var_759_object = var_777_object;
	TaskCall(1);
	func_81(var_778_object, var_779_object, var_780_string, var_781_bool, var_776_object, var_777_object);
	TaskReturn();
	@@var_759_object:IsDialogEnd(var_762_bool);
	
Label_63:
	var_861_bool = var_762_bool == 0; //@nz
	if(var_861_bool != 0) {
		sync();
		@@var_759_object:IsDialogEnd(var_762_bool);
		goto Label_63;
	}
	var_753_object = Obj();
	func_6612();
	StopDialog(var_759_object);
	@@var_759_object:GetReturnValue((int)-1);
	var_761_int = var_752_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7170()
{
	var_54_object = Obj(); var_55_object = Obj();
	SetVariable("d3q02", (int)1);
	func_7938(Obj());
	var_58_object = var_55_object;
	var_69_float = 0;
	func_6896(var_69_float);
	@@var_55_object:AddMark("d3q02GeorgGotoViktor", "pt_map_viktor", (int)0, (int)511379, var_69_float);
	func_7845();
	func_7871();
	var_103_object = Obj(); var_104_string = "";
	func_6842(var_103_object, "quest_d3_02");
	return 2;
}
EMIT "Stack[-1] = 0";


func_7683(var_832_bool)
{
	var_834_int = 0; var_835_string = "";
	func_6837(var_834_int, "ood6Georg1");
	var_837_bool = var_834_int == (int)0;
	if(var_837_bool != 0) {
		var_832_bool = 1;
		return 0;
	}
	var_832_bool = 0;
	return 0;
}


func_7695(var_841_bool)
{
	var_843_int = 0; var_844_string = "";
	func_6837(var_843_int, "ood6Georg2");
	var_846_bool = var_843_int == (int)0;
	if(var_846_bool != 0) {
		var_841_bool = 1;
		return 0;
	}
	var_841_bool = 0;
	return 0;
}


func_7707(var_793_bool)
{
	var_795_int = 0; var_796_string = "";
	func_6837(var_795_int, "d6RubinGoesToGeorg");
	var_798_bool = var_795_int != (int)0;
	if(var_798_bool != 0) {
		var_793_bool = 1;
		return 0;
	}
	var_793_bool = 0;
	return 0;
}


func_7200()
{
	func_7884();
	var_206_bool = 0; var_207_string = ""; var_208_string = "";
	func_6884(var_206_bool, "quest_d3_02", "completed");
	return 0;
}


func_6688(var_156_bool, var_157_object)
{
	var_158_string = ""; var_159_int = 0; var_160_bool = 0; var_161_int = 0; var_162_string = ""; var_163_string = ""; var_164_int = 0; var_165_bool = 0; var_166_int = 0; var_167_string = "";
	var_163_string = "c";
	var_164_int = 0;
	
Label_6691:
	if((int)1 != 0) {
		var_170_int = var_164_int + (int)1;
		var_171_int = var_163_string + var_170_int;
		@@var_157_object:HasProperty(var_171_int, var_165_bool);
		var_172_bool = var_165_bool == 0; //@nz
		if(var_172_bool != 0) {
		} else {
			var_164_int = var_164_int + (int)1;
			goto Label_6691;
		}
	}
	var_173_bool = var_164_int == 0; //@nz
	if(var_173_bool != 0) {
		var_156_bool = 0;
		return 10;
	}
	var_166_int = 0;
	var_175_bool = var_164_int > (int)1;
	if(var_175_bool != 0) {
		irand(var_166_int, var_164_int);
	}
	var_177_int = var_166_int + (int)1;
	var_178_int = var_163_string + var_177_int;
	@@var_157_object:GetProperty(var_178_int, var_167_string);
	var_179_bool = 0; var_180_string = "";
	var_167_string = var_180_string;
	func_6799(var_179_bool, var_180_string);
	var_179_bool = var_156_bool;
	return 10;
	
}


func_547(var_0_object, var_73_int, var_74_object)
{
	var_76_object = Obj(); var_77_bool = 0; var_78_int = 0; var_79_bool = 0; var_80_object = Obj(); var_81_bool = 0; var_82_int = 0; var_83_bool = 0;
	var_0_object = var_74_object;
	var_84_bool = 0; var_85_object = Obj(); var_86_float = 0;
	var_74_object = var_85_object;
	func_6543(var_84_bool, var_85_object, (float)70.0);
	var_131_bool = var_84_bool == 0; //@nz
	if(var_131_bool != 0) {
		var_73_int = -2;
		return 8;
	}
	CreateDialog(var_80_object);
	var_132_int = 0;
	func_6942(var_132_int);
	@@var_80_object:SetNPCName(var_132_int);
	var_133_int = 0;
	func_6940(var_133_int);
	@@var_80_object:SetNPCDescription(var_133_int);
	var_134_string = "";
	func_6944(var_134_string);
	@@var_80_object:SetPhoto(var_134_string);
	var_135_string = "";
	func_6946(var_135_string);
	@@var_80_object:SetPhoto2(var_135_string);
	var_136_int = 0;
	func_7988(var_136_int);
	@@var_80_object:SetPlayerName(var_136_int);
	IsOverrideActive(var_81_bool);
	var_144_bool = var_81_bool;
	if(var_144_bool != 0) {
		var_73_int = -2;
		return 8;
	}
	DoDialog(var_80_object);
	var_145_bool = 0; var_146_object = Obj();
	func_6821(Obj());
	var_147_object = var_146_object;
	func_6630(var_145_bool, var_146_object);
	var_235_object = Obj(); var_236_object = Obj();
	var_74_object = var_235_object;
	var_80_object = var_236_object;
	TaskCall(3);
	func_628(var_237_object, var_238_object, var_239_string, var_240_bool, var_235_object, var_236_object);
	TaskReturn();
	@@var_80_object:IsDialogEnd(var_83_bool);
	
Label_610:
	var_411_bool = var_83_bool == 0; //@nz
	if(var_411_bool != 0) {
		sync();
		@@var_80_object:IsDialogEnd(var_83_bool);
		goto Label_610;
	}
	var_74_object = Obj();
	func_6612();
	StopDialog(var_80_object);
	@@var_80_object:GetReturnValue((int)-1);
	var_82_int = var_73_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6181(var_2_object, var_1102_string)
{
	var_1103_bool = 0;
	func_6948(var_1103_bool);
	var_1104_bool = var_1103_bool == 0; //@nz
	if(var_1104_bool != 0) {
		return 0;
	}
	var_1105_bool = var_1102_string == var_2_object;
	if(var_1105_bool != 0) {
		return 0;
	}
	var_1106_string = ""; var_1107_bool = 0;
	var_1102_string = var_1106_string;
	var_1109_bool = var_1102_string == "";
	if(var_1109_bool != 0) {
		var_1107_bool = 0;
	} else {
		var_1107_bool = 1;
	}
	func_6784(var_1106_string, var_1107_bool);
	var_2_object = var_1102_string;
	return 0;
	
}


func_7719(var_799_bool)
{
	var_801_int = 0; var_802_string = "";
	func_6837(var_801_int, "ood6Georg3");
	var_804_bool = var_801_int == (int)0;
	if(var_804_bool != 0) {
		var_799_bool = 1;
		return 0;
	}
	var_799_bool = 0;
	return 0;
}


func_7210(var_109_object)
{
	var_110_object = Obj(); var_111_string = ""; var_112_float = 0;
	func_7938(Obj());
	var_113_object = var_110_object;
	func_7955(var_110_object, "pt_map_viktor", (float)2);
	var_133_object = Obj();
	func_7938(var_133_object);
	@@var_109_object:ShowMap(var_133_object);
	return 0;
}


func_7731(var_897_bool)
{
	var_899_int = 0; var_900_string = "";
	func_6837(var_899_int, "d8KainIsReason");
	var_902_bool = var_899_int == (int)1;
	if(var_902_bool != 0) {
		var_897_bool = 1;
		return 0;
	}
	var_897_bool = 0;
	return 0;
}


func_7226()
{
	SetVariable("ood3Georg3", (int)1);
	return 0;
}


func_7743(var_903_bool)
{
	var_905_int = 0; var_906_string = "";
	func_6837(var_905_int, "ood8Georg1");
	var_908_bool = var_905_int == (int)0;
	if(var_908_bool != 0) {
		var_903_bool = 1;
		return 0;
	}
	var_903_bool = 0;
	return 0;
}


func_7232()
{
	SetVariable("ood1Georg1", (int)1);
	return 0;
}


func_6725(var_187_bool, var_188_object)
{
	var_189_string = ""; var_190_int = 0; var_191_bool = 0; var_192_int = 0; var_193_string = ""; var_194_string = ""; var_195_int = 0; var_196_bool = 0; var_197_int = 0; var_198_string = "";
	var_200_int = 0;
	func_6901(var_200_int);
	var_201_int = "d" + var_200_int;
	var_194_string = var_201_int + "m";
	var_195_int = 0;
	
Label_6734:
	if((int)1 != 0) {
		var_205_int = var_195_int + (int)1;
		var_206_int = var_194_string + var_205_int;
		@@var_188_object:HasProperty(var_206_int, var_196_bool);
		var_207_bool = var_196_bool == 0; //@nz
		if(var_207_bool != 0) {
		} else {
			var_195_int = var_195_int + (int)1;
			goto Label_6734;
		}
	}
	var_208_bool = var_195_int == 0; //@nz
	if(var_208_bool != 0) {
		var_187_bool = 0;
		return 10;
	}
	var_197_int = 0;
	var_210_bool = var_195_int > (int)1;
	if(var_210_bool != 0) {
		irand(var_197_int, var_195_int);
	}
	var_212_int = var_197_int + (int)1;
	var_213_int = var_194_string + var_212_int;
	@@var_188_object:GetProperty(var_213_int, var_198_string);
	var_214_bool = 0; var_215_string = "";
	var_198_string = var_215_string;
	func_6799(var_214_bool, var_215_string);
	var_214_bool = var_187_bool;
	return 10;
	
}


func_7238()
{
	SetVariable("ood1Georg2", (int)1);
	return 0;
}


func_7755(var_728_bool)
{
	var_730_int = 0; var_731_string = "";
	func_6837(var_730_int, "ood5Georg2");
	var_733_bool = var_730_int == (int)0;
	if(var_733_bool != 0) {
		var_728_bool = 1;
		return 0;
	}
	var_728_bool = 0;
	return 0;
}


func_7244()
{
	SetVariable("ood1Georg3", (int)1);
	return 0;
}


func_2639(var_0_object, var_1_object, var_2_object, var_3_string, var_446_object, var_447_object)
{
	var_0_object = var_447_object;
	var_1_object = var_446_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_453_bool = 0;
		var_453_bool = 0;
		var_454_bool = 0; var_455_object = Obj();
		var_455_object = var_1_object;
		func_7431(var_455_object);
		if(var_454_bool != 0) {
			var_460_bool = 0; var_461_object = Obj();
			var_461_object = var_1_object;
			func_7467(var_461_object);
			if(var_460_bool != 0) {
				var_453_bool = 1;
			}
		}
		if(var_453_bool != 0) {
			var_466_string = "";
			func_2760(var_447_object, "Neutral");
			@@@var_0_object:SetMessage((int)506829);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506830, (int)7531, (int)7530);
			@@@var_0_object:AddReply((int)506844, (int)7547, (int)7546);
			@@@var_0_object:AddReply((int)506849, (int)7535, (int)7554);
			@@@var_0_object:AddReply((int)506848, (int)7547, (int)7552);
		} else {
				var_495_string = "";
				func_2760(var_447_object, "Neutral");
				@@@var_0_object:SetMessage((int)506850);
				@@@var_0_object:ClearReplies();
				var_497_bool = 0;
				var_497_bool = 0;
				var_498_bool = 0; var_499_object = Obj();
				var_499_object = var_1_object;
				func_7443(var_499_object);
				if(var_498_bool != 0) {
					var_504_bool = 0; var_505_object = Obj();
					var_505_object = var_1_object;
					func_7455(var_505_object);
					if(var_504_bool != 0) {
						var_497_bool = 1;
					}
				}
				if(var_497_bool != 0) {
					@@@var_0_object:AddReply((int)506851, (int)7835, (int)7557);
				}
				@@@var_0_object:AddReply((int)507536, (int)-1, (int)8318);
				@@@var_0_object:AddReply((int)533836, (int)-1, (int)35386);
				goto Label_2730;
		}
	}
Label_2730:
	var_487_bool = 0;
	func_6948(var_487_bool);
	if(var_487_bool != 0) {

	Label_2734:
		lshWaitForAnimEnd();
		var_488_string = var_3_string;
		if(var_488_string != 0) {
		} else {
			var_489_string = "";
			var_489_string = var_2_object;
			func_6768(var_489_string);
			goto Label_2734;
	}
		PlayAnimation("all", "idle");

	Label_2749:
		WaitForAnimEnd();
		var_492_string = var_3_string;
		if(var_492_string != 0) {
			goto Label_2759;
		}
		PlayAnimation("all", "idle");
		goto Label_2749;

	}
	goto Label_2759;
	
Label_2759:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xa53";


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_776_object, var_777_object)
{
	var_0_object = var_777_object;
	var_1_object = var_776_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_783_string = "";
		func_203(var_777_object, "Neutral");
		@@@var_0_object:SetMessage((int)512009);
		@@@var_0_object:ClearReplies();
		var_792_bool = 0;
		var_792_bool = 0;
		var_793_bool = 0; var_794_object = Obj();
		var_794_object = var_1_object;
		func_7707(var_794_object);
		if(var_793_bool != 0) {
			var_799_bool = 0; var_800_object = Obj();
			var_800_object = var_1_object;
			func_7719(var_800_object);
			if(var_799_bool != 0) {
				var_792_bool = 1;
			}
		}
		if(var_792_bool != 0) {
			@@@var_0_object:AddReply((int)512010, (int)13230, (int)13228);
		}
		var_808_bool = 0;
		var_808_bool = 0;
		var_809_bool = 0;
		var_809_bool = 0;
		var_810_bool = 0;
		var_810_bool = 0;
		var_811_bool = 0; var_812_object = Obj();
		var_812_object = var_1_object;
		func_7647(var_812_object);
		var_817_bool = var_811_bool == 0; //@nz
		if(var_817_bool != 0) {
			var_818_bool = 0; var_819_object = Obj();
			var_819_object = var_1_object;
			func_7659(var_819_object);
			var_824_bool = var_818_bool == 0; //@nz
			if(var_824_bool != 0) {
				var_810_bool = 1;
			}
		}
		if(var_810_bool != 0) {
			var_825_bool = 0; var_826_object = Obj();
			var_826_object = var_1_object;
			func_7671(var_826_object);
			var_831_bool = var_825_bool == 0; //@nz
			if(var_831_bool != 0) {
				var_809_bool = 1;
			}
		}
		if(var_809_bool != 0) {
			var_832_bool = 0; var_833_object = Obj();
			var_833_object = var_1_object;
			func_7683(var_833_object);
			if(var_832_bool != 0) {
				var_808_bool = 1;
			}
		}
		if(var_808_bool != 0) {
			@@@var_0_object:AddReply((int)512014, (int)13233, (int)13232);
		}
		var_841_bool = 0; var_842_object = Obj();
		var_842_object = var_1_object;
		func_7695(var_842_object);
		if(var_841_bool != 0) {
			@@@var_0_object:AddReply((int)512018, (int)3560, (int)13236);
		}
		@@@var_0_object:AddReply((int)512011, (int)-1, (int)13229);
		goto Label_173;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_173:
	var_853_bool = 0;
	func_6948(var_853_bool);
	if(var_853_bool != 0) {

	Label_177:
		lshWaitForAnimEnd();
		var_854_string = var_3_string;
		if(var_854_string != 0) {
		} else {
			var_855_string = "";
			var_855_string = var_2_object;
			func_6768(var_855_string);
			goto Label_177;
	}
		PlayAnimation("all", "idle");

	Label_192:
		WaitForAnimEnd();
		var_858_string = var_3_string;
		if(var_858_string != 0) {
			goto Label_202;
		}
		PlayAnimation("all", "idle");
		goto Label_192;
	}
	goto Label_202;
	
Label_202:
	return 0;
	
}


func_7250()
{
	SetVariable("KnowRubin", (int)1);
	return 0;
}


func_7767()
{
	var_72_object = Obj(); var_73_object = Obj();
	CreateDiaryEntry(var_73_object, (int)670, (int)2, (int)534124);
	var_77_bool = 0; var_78_object = Obj(); var_79_int = 0;
	var_73_object = var_78_object;
	func_7910(var_77_bool, var_78_object, (int)666);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7256()
{
	SetVariable("KnowSaburivClan", (int)1);
	return 0;
}


func_5719(var_0_object, var_1012_int, var_1013_object)
{
	var_1015_object = Obj(); var_1016_bool = 0; var_1017_int = 0; var_1018_bool = 0; var_1019_object = Obj(); var_1020_bool = 0; var_1021_int = 0; var_1022_bool = 0;
	var_0_object = var_1013_object;
	var_1023_bool = 0; var_1024_object = Obj(); var_1025_float = 0;
	var_1013_object = var_1024_object;
	func_6543(var_1023_bool, var_1024_object, (float)70.0);
	var_1026_bool = var_1023_bool == 0; //@nz
	if(var_1026_bool != 0) {
		var_1012_int = -2;
		return 8;
	}
	CreateDialog(var_1019_object);
	var_1027_int = 0;
	func_6942(var_1027_int);
	@@var_1019_object:SetNPCName(var_1027_int);
	var_1028_int = 0;
	func_6940(var_1028_int);
	@@var_1019_object:SetNPCDescription(var_1028_int);
	var_1029_string = "";
	func_6944(var_1029_string);
	@@var_1019_object:SetPhoto(var_1029_string);
	var_1030_string = "";
	func_6946(var_1030_string);
	@@var_1019_object:SetPhoto2(var_1030_string);
	var_1031_int = 0;
	func_7988(var_1031_int);
	@@var_1019_object:SetPlayerName(var_1031_int);
	IsOverrideActive(var_1020_bool);
	var_1032_bool = var_1020_bool;
	if(var_1032_bool != 0) {
		var_1012_int = -2;
		return 8;
	}
	DoDialog(var_1019_object);
	var_1033_bool = 0; var_1034_object = Obj();
	func_6821(Obj());
	var_1035_object = var_1034_object;
	func_6630(var_1033_bool, var_1034_object);
	var_1036_object = Obj(); var_1037_object = Obj();
	var_1013_object = var_1036_object;
	var_1019_object = var_1037_object;
	TaskCall(15);
	func_5800(var_1038_object, var_1039_object, var_1040_string, var_1041_bool, var_1036_object, var_1037_object);
	TaskReturn();
	@@var_1019_object:IsDialogEnd(var_1022_bool);
	
Label_5782:
	var_1069_bool = var_1022_bool == 0; //@nz
	if(var_1069_bool != 0) {
		sync();
		@@var_1019_object:IsDialogEnd(var_1022_bool);
		goto Label_5782;
	}
	var_1013_object = Obj();
	func_6612();
	StopDialog(var_1019_object);
	@@var_1019_object:GetReturnValue((int)-1);
	var_1021_int = var_1012_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7262()
{
	SetVariable("KnowOlgimskiClan", (int)1);
	return 0;
}


func_7268()
{
	SetVariable("KnowKainClan", (int)1);
	return 0;
}


func_7780()
{
	var_77_object = Obj(); var_78_object = Obj();
	CreateDiaryEntry(var_78_object, (int)2, (int)1, (int)503073);
	var_82_bool = 0; var_83_object = Obj(); var_84_int = 0;
	var_78_object = var_83_object;
	func_7910(var_82_bool, var_83_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7274()
{
	SetVariable("ood5Georg1", (int)1);
	return 0;
}


func_6252(var_0_object)
{
	var_47_bool = 0;
	func_6538(var_47_bool);
	var_50_bool = var_47_bool == 0; //@nz
	if(var_50_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_6261:
	func_6428();
	goto Label_6261;
}
EMIT "Return(); Pop(0)";


func_6768(var_296_string)
{
	var_297_bool = 0; var_298_float = 0; var_299_float = 0; var_300_bool = 0; var_301_float = 0; var_302_float = 0;
	lshHasAnimation(var_300_bool, var_296_string);
	var_303_bool = var_300_bool;
	if(var_303_bool != 0) {
		lshGetAnimTimes(var_296_string, var_301_float, var_302_float);
		lshPlayAnimation(var_301_float, var_302_float, (bool)0);
	} else {
		var_306_int = "Can't find lsh animation : " + var_296_string;
		Trace(var_306_int);
	}
	return 6;
	
}


func_7280()
{
	SetVariable("KnowAlexandr", (int)1);
	return 0;
}


func_7793()
{
	var_150_object = Obj(); var_151_object = Obj();
	CreateDiaryEntry(var_151_object, (int)622, (int)1, (int)532196);
	var_155_bool = 0; var_156_object = Obj(); var_157_int = 0;
	var_151_object = var_156_object;
	func_7910(var_155_bool, var_156_object, (int)2);
	return 2;
}
EMIT "Stack[-1] = 0";


func_628(var_0_object, var_1_object, var_2_object, var_3_string, var_235_object, var_236_object)
{
	var_0_object = var_236_object;
	var_1_object = var_235_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_242_bool = 0; var_243_object = Obj();
		var_243_object = var_1_object;
		func_7515(var_243_object);
		if(var_242_bool != 0) {
			var_250_object = Obj(); var_251_object = Obj();
			var_250_object = var_1_object;
			var_251_object = var_0_object;
			func_7232();
			var_254_object = Obj(); var_255_object = Obj();
			var_254_object = var_1_object;
			var_255_object = var_0_object;
			func_7027();
			var_267_string = "";
			func_865(var_236_object, "Anger");
			@@@var_0_object:SetMessage((int)531566);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531567, (int)32927, (int)32926);
			@@@var_0_object:AddReply((int)531608, (int)32978, (int)32977);
			@@@var_0_object:AddReply((int)531614, (int)32986, (int)32985);
		} else {
				var_312_bool = 0; var_313_object = Obj();
				var_313_object = var_1_object;
				func_7346(var_313_object);
				if(var_312_bool != 0) {
					var_318_string = "";
					func_865(var_236_object, "Neutral");
					@@@var_0_object:SetMessage((int)504850);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)504879, (int)5370, (int)5353);
					@@@var_0_object:AddReply((int)504890, (int)5354, (int)5367);
					goto Label_835;
				}
				var_326_string = "";
				func_865(var_236_object, "Neutral");
				@@@var_0_object:SetMessage((int)507627);
				@@@var_0_object:ClearReplies();
				var_328_bool = 0; var_329_object = Obj();
				var_329_object = var_1_object;
				func_7334(var_329_object);
				if(var_328_bool != 0) {
					@@@var_0_object:AddReply((int)531617, (int)32990, (int)32989);
				}
				var_337_bool = 0;
				var_337_bool = 0;
				var_338_bool = 0;
				var_338_bool = 0;
				var_339_bool = 0; var_340_object = Obj();
				var_340_object = var_1_object;
				func_7527(var_340_object);
				if(var_339_bool != 0) {
					var_345_bool = 0; var_346_object = Obj();
					var_346_object = var_1_object;
					func_7322(var_346_object);
					var_351_bool = var_345_bool == 0; //@nz
					if(var_351_bool != 0) {
						var_338_bool = 1;
					}
				}
				if(var_338_bool != 0) {
					var_352_bool = 0; var_353_object = Obj();
					var_353_object = var_1_object;
					func_7334(var_353_object);
					var_354_bool = var_352_bool == 0; //@nz
					if(var_354_bool != 0) {
						var_337_bool = 1;
					}
				}
				if(var_337_bool != 0) {
					@@@var_0_object:AddReply((int)507629, (int)5329, (int)8418);
				}
				var_358_bool = 0;
				var_358_bool = 0;
				var_359_bool = 0;
				var_359_bool = 0;
				var_360_bool = 0; var_361_object = Obj();
				var_361_object = var_1_object;
				func_7539(var_361_object);
				if(var_360_bool != 0) {
					var_366_bool = 0; var_367_object = Obj();
					var_367_object = var_1_object;
					func_7322(var_367_object);
					var_368_bool = var_366_bool == 0; //@nz
					if(var_368_bool != 0) {
						var_359_bool = 1;
					}
				}
				if(var_359_bool != 0) {
					var_369_bool = 0; var_370_object = Obj();
					var_370_object = var_1_object;
					func_7334(var_370_object);
					var_371_bool = var_369_bool == 0; //@nz
					if(var_371_bool != 0) {
						var_358_bool = 1;
					}
				}
				if(var_358_bool != 0) {
					@@@var_0_object:AddReply((int)507632, (int)5334, (int)8421);
				}
				var_375_bool = 0;
				var_375_bool = 0;
				var_376_bool = 0;
				var_376_bool = 0;
				var_377_bool = 0; var_378_object = Obj();
				var_378_object = var_1_object;
				func_7491(var_378_object);
				if(var_377_bool != 0) {
					var_383_bool = 0; var_384_object = Obj();
					var_384_object = var_1_object;
					func_7334(var_384_object);
					var_385_bool = var_383_bool == 0; //@nz
					if(var_385_bool != 0) {
						var_376_bool = 1;
					}
				}
				if(var_376_bool != 0) {
					var_386_bool = 0; var_387_object = Obj();
					var_387_object = var_1_object;
					func_7322(var_387_object);
					var_388_bool = var_386_bool == 0; //@nz
					if(var_388_bool != 0) {
						var_375_bool = 1;
					}
				}
				if(var_375_bool != 0) {
					@@@var_0_object:AddReply((int)531620, (int)32993, (int)32992);
				}
				var_392_bool = 0;
				var_392_bool = 0;
				var_393_bool = 0; var_394_object = Obj();
				var_394_object = var_1_object;
				func_7358(var_394_object);
				if(var_393_bool != 0) {
					var_399_bool = 0; var_400_object = Obj();
					var_400_object = var_1_object;
					func_7503(var_400_object);
					if(var_399_bool != 0) {
						var_392_bool = 1;
					}
				}
				if(var_392_bool != 0) {
					@@@var_0_object:AddReply((int)531622, (int)32995, (int)32994);
				}
				@@@var_0_object:AddReply((int)507658, (int)-1, (int)8451);
				goto Label_835;
		}
	}
Label_835:
	var_294_bool = 0;
	func_6948(var_294_bool);
	if(var_294_bool != 0) {

	Label_839:
		lshWaitForAnimEnd();
		var_295_string = var_3_string;
		if(var_295_string != 0) {
		} else {
			var_296_string = "";
			var_296_string = var_2_object;
			func_6768(var_296_string);
			goto Label_839;
	}
		PlayAnimation("all", "idle");

	Label_854:
		WaitForAnimEnd();
		var_309_string = var_3_string;
		if(var_309_string != 0) {
			goto Label_864;
		}
		PlayAnimation("all", "idle");
		goto Label_854;

	}
	goto Label_864;
	
Label_864:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x278";


func_7286()
{
	SetVariable("KnowBigVlad", (int)1);
	return 0;
}


func_6266(var_71_bool)
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
	func_6529(var_76_bool, var_77_object);
	var_76_bool = var_71_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_7292()
{
	SetVariable("ood6Georg1", (int)1);
	return 0;
}


func_7806()
{
	var_100_object = Obj(); var_101_object = Obj();
	CreateDiaryEntry(var_101_object, (int)31, (int)1, (int)512113);
	var_105_bool = 0; var_106_object = Obj(); var_107_int = 0;
	var_101_object = var_106_object;
	func_7910(var_105_bool, var_106_object, (int)2);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6784(var_271_string, var_272_bool)
{
	var_275_bool = 0; var_276_float = 0; var_277_float = 0; var_278_bool = 0; var_279_float = 0; var_280_float = 0;
	lshHasAnimation(var_278_bool, var_271_string);
	var_281_bool = var_278_bool;
	if(var_281_bool != 0) {
		lshGetAnimTimes(var_271_string, var_279_float, var_280_float);
		lshPlayAnimation(var_279_float, var_280_float, var_272_bool);
	} else {
		var_283_int = "Can't find lsh animation : " + var_271_string;
		Trace(var_283_int);
	}
	return 6;
	
}


func_7298()
{
	SetVariable("ood6Georg2", (int)1);
	return 0;
}


func_7304()
{
	SetVariable("ood6Georg3", (int)1);
	return 0;
}


func_6281(var_0_object)
{
	var_123_float = GetByIndex(var_0_object, 0);
	var_124_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_123_float, var_124_float);
	return 0;
}


func_7819()
{
	var_96_object = Obj(); var_97_object = Obj();
	CreateDiaryEntry(var_97_object, (int)628, (int)1, (int)532757);
	var_101_bool = 0; var_102_object = Obj(); var_103_int = 0;
	var_97_object = var_102_object;
	func_7910(var_101_bool, var_102_object, (int)10);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7310()
{
	SetVariable("ood8Georg1", (int)1);
	return 0;
}


func_6286(var_54_bool)
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
	func_6504(var_61_float, var_62_object);
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


func_6799(var_179_bool, var_180_string)
{
	var_181_bool = 0; var_182_bool = 0;
	var_183_bool = 0;
	func_6948(var_183_bool);
	if(var_183_bool != 0) {
		lshHasSpeech(var_182_bool, var_180_string);
		var_184_bool = var_182_bool;
		if(var_184_bool != 0) {
			lshPlaySpeech(var_180_string);
			var_179_bool = 1;
			return 2;
		}
	}
	var_179_bool = 0;
	return 2;
}


func_7316()
{
	SetVariable("d3GeorgVisit", (int)1);
	return 0;
}


func_3223(var_0_object, var_523_int, var_524_object)
{
	var_526_object = Obj(); var_527_bool = 0; var_528_int = 0; var_529_bool = 0; var_530_object = Obj(); var_531_bool = 0; var_532_int = 0; var_533_bool = 0;
	var_0_object = var_524_object;
	var_534_bool = 0; var_535_object = Obj(); var_536_float = 0;
	var_524_object = var_535_object;
	func_6543(var_534_bool, var_535_object, (float)70.0);
	var_537_bool = var_534_bool == 0; //@nz
	if(var_537_bool != 0) {
		var_523_int = -2;
		return 8;
	}
	CreateDialog(var_530_object);
	var_538_int = 0;
	func_6942(var_538_int);
	@@var_530_object:SetNPCName(var_538_int);
	var_539_int = 0;
	func_6940(var_539_int);
	@@var_530_object:SetNPCDescription(var_539_int);
	var_540_string = "";
	func_6944(var_540_string);
	@@var_530_object:SetPhoto(var_540_string);
	var_541_string = "";
	func_6946(var_541_string);
	@@var_530_object:SetPhoto2(var_541_string);
	var_542_int = 0;
	func_7988(var_542_int);
	@@var_530_object:SetPlayerName(var_542_int);
	IsOverrideActive(var_531_bool);
	var_543_bool = var_531_bool;
	if(var_543_bool != 0) {
		var_523_int = -2;
		return 8;
	}
	DoDialog(var_530_object);
	var_544_bool = 0; var_545_object = Obj();
	func_6821(Obj());
	var_546_object = var_545_object;
	func_6630(var_544_bool, var_545_object);
	var_547_object = Obj(); var_548_object = Obj();
	var_524_object = var_547_object;
	var_530_object = var_548_object;
	TaskCall(7);
	func_3304(var_549_object, var_550_object, var_551_string, var_552_bool, var_547_object, var_548_object);
	TaskReturn();
	@@var_530_object:IsDialogEnd(var_533_bool);
	
Label_3286:
	var_668_bool = var_533_bool == 0; //@nz
	if(var_668_bool != 0) {
		sync();
		@@var_530_object:IsDialogEnd(var_533_bool);
		goto Label_3286;
	}
	var_524_object = Obj();
	func_6612();
	StopDialog(var_530_object);
	@@var_530_object:GetReturnValue((int)-1);
	var_532_int = var_523_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7832()
{
	var_60_object = Obj(); var_61_object = Obj();
	CreateDiaryEntry(var_61_object, (int)626, (int)1, (int)532755);
	var_65_bool = 0; var_66_object = Obj(); var_67_int = 0;
	var_61_object = var_66_object;
	func_7910(var_65_bool, var_66_object, (int)10);
	return 2;
}
EMIT "Stack[-1] = 0";


func_7322(var_345_bool)
{
	var_347_int = 0; var_348_string = "";
	func_6837(var_347_int, "d1q01");
	var_350_bool = var_347_int == (int)1000;
	if(var_350_bool != 0) {
		var_345_bool = 1;
		return 0;
	}
	var_345_bool = 0;
	return 0;
}


func_6814()
{
	var_49_bool = 0;
	func_6948(var_49_bool);
	if(var_49_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_5278(var_0_object, var_948_int, var_949_object)
{
	var_951_object = Obj(); var_952_bool = 0; var_953_int = 0; var_954_bool = 0; var_955_object = Obj(); var_956_bool = 0; var_957_int = 0; var_958_bool = 0;
	var_0_object = var_949_object;
	var_959_bool = 0; var_960_object = Obj(); var_961_float = 0;
	var_949_object = var_960_object;
	func_6543(var_959_bool, var_960_object, (float)70.0);
	var_962_bool = var_959_bool == 0; //@nz
	if(var_962_bool != 0) {
		var_948_int = -2;
		return 8;
	}
	CreateDialog(var_955_object);
	var_963_int = 0;
	func_6942(var_963_int);
	@@var_955_object:SetNPCName(var_963_int);
	var_964_int = 0;
	func_6940(var_964_int);
	@@var_955_object:SetNPCDescription(var_964_int);
	var_965_string = "";
	func_6944(var_965_string);
	@@var_955_object:SetPhoto(var_965_string);
	var_966_string = "";
	func_6946(var_966_string);
	@@var_955_object:SetPhoto2(var_966_string);
	var_967_int = 0;
	func_7988(var_967_int);
	@@var_955_object:SetPlayerName(var_967_int);
	IsOverrideActive(var_956_bool);
	var_968_bool = var_956_bool;
	if(var_968_bool != 0) {
		var_948_int = -2;
		return 8;
	}
	DoDialog(var_955_object);
	var_969_bool = 0; var_970_object = Obj();
	func_6821(Obj());
	var_971_object = var_970_object;
	func_6630(var_969_bool, var_970_object);
	var_972_object = Obj(); var_973_object = Obj();
	var_949_object = var_972_object;
	var_955_object = var_973_object;
	TaskCall(13);
	func_5359(var_974_object, var_975_object, var_976_string, var_977_bool, var_972_object, var_973_object);
	TaskReturn();
	@@var_955_object:IsDialogEnd(var_958_bool);
	
Label_5341:
	var_1008_bool = var_958_bool == 0; //@nz
	if(var_1008_bool != 0) {
		sync();
		@@var_955_object:IsDialogEnd(var_958_bool);
		goto Label_5341;
	}
	var_949_object = Obj();
	func_6612();
	StopDialog(var_955_object);
	@@var_955_object:GetReturnValue((int)-1);
	var_957_int = var_948_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6308()
{
	var_1129_float = 0; var_1130_float = 0;
	rand(var_1130_float, (int)8, (int)16);
	SetTimer((int)10, var_1130_float);
	return 2;
}


func_6821(var_147_object)
{
	var_148_object = Obj(); var_149_object = Obj();
	self(var_149_object);
	var_149_object = var_147_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_7334(var_328_bool)
{
	var_330_int = 0; var_331_string = "";
	func_6837(var_330_int, "d1q01");
	var_333_bool = var_330_int == (int)0;
	if(var_333_bool != 0) {
		var_328_bool = 1;
		return 0;
	}
	var_328_bool = 0;
	return 0;
}


func_7845()
{
	var_72_object = Obj(); var_73_object = Obj();
	CreateDiaryEntry(var_73_object, (int)26, (int)2, (int)503366);
	var_77_bool = 0; var_78_object = Obj(); var_79_int = 0;
	var_73_object = var_78_object;
	func_7910(var_77_bool, var_78_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5800(var_0_object, var_1_object, var_2_object, var_3_string, var_1036_object, var_1037_object)
{
	var_0_object = var_1037_object;
	var_1_object = var_1036_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1043_string = "";
		func_5863(var_1037_object, "Neutral");
		@@@var_0_object:SetMessage((int)535662);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535663, (int)42111, (int)37349);
		@@@var_0_object:AddReply((int)540003, (int)-1, (int)41974);
		@@@var_0_object:AddReply((int)540138, (int)-1, (int)42110);
		goto Label_5833;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x16ac";
	}
Label_5833:
	var_1061_bool = 0;
	func_6948(var_1061_bool);
	if(var_1061_bool != 0) {

	Label_5837:
		lshWaitForAnimEnd();
		var_1062_string = var_3_string;
		if(var_1062_string != 0) {
		} else {
			var_1063_string = "";
			var_1063_string = var_2_object;
			func_6768(var_1063_string);
			goto Label_5837;
	}
		PlayAnimation("all", "idle");

	Label_5852:
		WaitForAnimEnd();
		var_1066_string = var_3_string;
		if(var_1066_string != 0) {
			goto Label_5862;
		}
		PlayAnimation("all", "idle");
		goto Label_5852;
	}
	goto Label_5862;
	
Label_5862:
	return 0;
	
}


func_6827(var_111_cvector, var_112_cvector)
{
	var_114_float = 0; var_115_float = 0;
	var_116_int = var_112_cvector | var_112_cvector;
	var_115_float = sqrt(var_116_int);
	var_117_float = 9.999999974752427e-07;
	var_118_bool = var_115_float < var_117_float;
	if(var_118_bool != 0) {
		var_111_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_111_cvector = var_112_cvector / var_115_float;
	return 2;
}


func_4268(var_0_object, var_672_int, var_673_object)
{
	var_675_object = Obj(); var_676_bool = 0; var_677_int = 0; var_678_bool = 0; var_679_object = Obj(); var_680_bool = 0; var_681_int = 0; var_682_bool = 0;
	var_0_object = var_673_object;
	var_683_bool = 0; var_684_object = Obj(); var_685_float = 0;
	var_673_object = var_684_object;
	func_6543(var_683_bool, var_684_object, (float)70.0);
	var_686_bool = var_683_bool == 0; //@nz
	if(var_686_bool != 0) {
		var_672_int = -2;
		return 8;
	}
	CreateDialog(var_679_object);
	var_687_int = 0;
	func_6942(var_687_int);
	@@var_679_object:SetNPCName(var_687_int);
	var_688_int = 0;
	func_6940(var_688_int);
	@@var_679_object:SetNPCDescription(var_688_int);
	var_689_string = "";
	func_6944(var_689_string);
	@@var_679_object:SetPhoto(var_689_string);
	var_690_string = "";
	func_6946(var_690_string);
	@@var_679_object:SetPhoto2(var_690_string);
	var_691_int = 0;
	func_7988(var_691_int);
	@@var_679_object:SetPlayerName(var_691_int);
	IsOverrideActive(var_680_bool);
	var_692_bool = var_680_bool;
	if(var_692_bool != 0) {
		var_672_int = -2;
		return 8;
	}
	DoDialog(var_679_object);
	var_693_bool = 0; var_694_object = Obj();
	func_6821(Obj());
	var_695_object = var_694_object;
	func_6630(var_693_bool, var_694_object);
	var_696_object = Obj(); var_697_object = Obj();
	var_673_object = var_696_object;
	var_679_object = var_697_object;
	TaskCall(9);
	func_4349(var_698_object, var_699_object, var_700_string, var_701_bool, var_696_object, var_697_object);
	TaskReturn();
	@@var_679_object:IsDialogEnd(var_682_bool);
	
Label_4331:
	var_748_bool = var_682_bool == 0; //@nz
	if(var_748_bool != 0) {
		sync();
		@@var_679_object:IsDialogEnd(var_682_bool);
		goto Label_4331;
	}
	var_673_object = Obj();
	func_6612();
	StopDialog(var_679_object);
	@@var_679_object:GetReturnValue((int)-1);
	var_681_int = var_672_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6317()
{
	KillTimer((int)10);
	return 0;
}


func_4779(var_0_object, var_865_int, var_866_object)
{
	var_868_object = Obj(); var_869_bool = 0; var_870_int = 0; var_871_bool = 0; var_872_object = Obj(); var_873_bool = 0; var_874_int = 0; var_875_bool = 0;
	var_0_object = var_866_object;
	var_876_bool = 0; var_877_object = Obj(); var_878_float = 0;
	var_866_object = var_877_object;
	func_6543(var_876_bool, var_877_object, (float)70.0);
	var_879_bool = var_876_bool == 0; //@nz
	if(var_879_bool != 0) {
		var_865_int = -2;
		return 8;
	}
	CreateDialog(var_872_object);
	var_880_int = 0;
	func_6942(var_880_int);
	@@var_872_object:SetNPCName(var_880_int);
	var_881_int = 0;
	func_6940(var_881_int);
	@@var_872_object:SetNPCDescription(var_881_int);
	var_882_string = "";
	func_6944(var_882_string);
	@@var_872_object:SetPhoto(var_882_string);
	var_883_string = "";
	func_6946(var_883_string);
	@@var_872_object:SetPhoto2(var_883_string);
	var_884_int = 0;
	func_7988(var_884_int);
	@@var_872_object:SetPlayerName(var_884_int);
	IsOverrideActive(var_873_bool);
	var_885_bool = var_873_bool;
	if(var_885_bool != 0) {
		var_865_int = -2;
		return 8;
	}
	DoDialog(var_872_object);
	var_886_bool = 0; var_887_object = Obj();
	func_6821(Obj());
	var_888_object = var_887_object;
	func_6630(var_886_bool, var_887_object);
	var_889_object = Obj(); var_890_object = Obj();
	var_866_object = var_889_object;
	var_872_object = var_890_object;
	TaskCall(11);
	func_4860(var_891_object, var_892_object, var_893_string, var_894_bool, var_889_object, var_890_object);
	TaskReturn();
	@@var_872_object:IsDialogEnd(var_875_bool);
	
Label_4842:
	var_944_bool = var_875_bool == 0; //@nz
	if(var_944_bool != 0) {
		sync();
		@@var_872_object:IsDialogEnd(var_875_bool);
		goto Label_4842;
	}
	var_866_object = Obj();
	func_6612();
	StopDialog(var_872_object);
	@@var_872_object:GetReturnValue((int)-1);
	var_874_int = var_865_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7346(var_312_bool)
{
	var_314_int = 0; var_315_string = "";
	func_6837(var_314_int, "d1q01");
	var_317_bool = var_314_int == (int)8;
	if(var_317_bool != 0) {
		var_312_bool = 1;
		return 0;
	}
	var_312_bool = 0;
	return 0;
}


func_7858()
{
	var_146_object = Obj(); var_147_object = Obj();
	CreateDiaryEntry(var_147_object, (int)678, (int)2, (int)534417);
	var_151_bool = 0; var_152_object = Obj(); var_153_int = 0;
	var_147_object = var_152_object;
	func_7910(var_151_bool, var_152_object, (int)26);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6837(var_244_int, var_245_string)
{
	var_246_int = 0; var_247_int = 0;
	GetVariable(var_245_string, var_247_int);
	var_247_int = var_244_int;
	return 2;
}


func_6842(var_103_object, var_104_string)
{
	var_105_object = Obj(); var_106_object = Obj(); var_107_object = Obj(); var_108_object = Obj();
	GetMainOutdoorScene(var_107_object);
	var_110_int = var_104_string + ".bin";
	AddBlankActor(var_108_object, var_107_object, var_104_string, var_110_int);
	var_108_object = var_103_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_7358(var_393_bool)
{
	var_395_int = 0; var_396_string = "";
	func_6837(var_395_int, "ood1Georg5");
	var_398_bool = var_395_int == (int)0;
	if(var_398_bool != 0) {
		var_393_bool = 1;
		return 0;
	}
	var_393_bool = 0;
	return 0;
}


func_7871()
{
	var_95_object = Obj(); var_96_object = Obj();
	CreateDiaryEntry(var_96_object, (int)76, (int)2, (int)512158);
	var_100_bool = 0; var_101_object = Obj(); var_102_int = 0;
	var_96_object = var_101_object;
	func_7910(var_100_bool, var_101_object, (int)26);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6853(var_133_int, var_134_int)
{
	var_135_object = Obj(); var_136_object = Obj();
	CreateIntVector(var_136_object);
	@@var_136_object:add(var_133_int);
	@@var_136_object:add(var_134_int);
	SendWorldWndMessage((int)3, var_136_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2760(var_2_object, var_466_string)
{
	var_467_bool = 0;
	func_6948(var_467_bool);
	var_468_bool = var_467_bool == 0; //@nz
	if(var_468_bool != 0) {
		return 0;
	}
	var_469_bool = var_466_string == var_2_object;
	if(var_469_bool != 0) {
		return 0;
	}
	var_470_string = ""; var_471_bool = 0;
	var_466_string = var_470_string;
	var_473_bool = var_466_string == "";
	if(var_473_bool != 0) {
		var_471_bool = 0;
	} else {
		var_471_bool = 1;
	}
	func_6784(var_470_string, var_471_bool);
	var_2_object = var_466_string;
	return 0;
	
}


func_7370(var_988_bool)
{
	var_990_int = 0; var_991_string = "";
	func_6837(var_990_int, "d10q02");
	var_993_bool = var_990_int == (int)3;
	if(var_993_bool != 0) {
		var_988_bool = 1;
		return 0;
	}
	var_988_bool = 0;
	return 0;
}


func_203(var_2_object, var_783_string)
{
	var_784_bool = 0;
	func_6948(var_784_bool);
	var_785_bool = var_784_bool == 0; //@nz
	if(var_785_bool != 0) {
		return 0;
	}
	var_786_bool = var_783_string == var_2_object;
	if(var_786_bool != 0) {
		return 0;
	}
	var_787_string = ""; var_788_bool = 0;
	var_783_string = var_787_string;
	var_790_bool = var_783_string == "";
	if(var_790_bool != 0) {
		var_788_bool = 0;
	} else {
		var_788_bool = 1;
	}
	func_6784(var_787_string, var_788_bool);
	var_2_object = var_783_string;
	return 0;
	
}


func_7884()
{
	var_198_object = Obj(); var_199_object = Obj();
	CreateDiaryEntry(var_199_object, (int)81, (int)2, (int)512163);
	var_203_bool = 0; var_204_object = Obj(); var_205_int = 0;
	var_199_object = var_204_object;
	func_7910(var_203_bool, var_204_object, (int)26);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6865(var_120_object, var_121_int)
{
	var_122_int = 0; var_123_int = 0;
	var_124_object = Obj(); var_125_string = ""; var_126_int = 0;
	var_120_object = var_124_object;
	var_121_int = var_126_int;
	func_6512(var_124_object, "money", var_126_int);
	var_131_bool = var_121_int > (int)0;
	if(var_131_bool != 0) {
		GetInvItemByName(var_123_int, "Money");
		var_133_int = 0; var_134_int = 0;
		var_123_int = var_133_int;
		var_121_int = var_134_int;
		func_6853(var_133_int, var_134_int);
	}
	return 2;
}


func_7382(var_608_bool)
{
	var_610_int = 0; var_611_string = "";
	func_6837(var_610_int, "d3q01HelpBurah");
	var_613_bool = var_610_int != (int)0;
	if(var_613_bool != 0) {
		var_608_bool = 1;
		return 0;
	}
	var_608_bool = 0;
	return 0;
}


func_7897(var_86_object)
{
	var_87_object = Obj(); var_88_object = Obj();
	GetDiaryRoot(var_88_object);
	var_89_bool = var_88_object == 0; //@nz
	if(var_89_bool != 0) {
		Trace("Can't retrieve diary root");
		var_86_object = 0;
		return 2;
	}
	var_88_object = var_86_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_7394(var_631_bool)
{
	var_633_bool = 0;
	var_633_bool = 0;
	var_634_bool = 0;
	var_634_bool = 0;
	var_635_int = 0; var_636_string = "";
	func_6837(var_635_int, "d3q02");
	var_638_bool = var_635_int == (int)1000;
	var_639_bool = var_638_bool == 0; //@nz
	if(var_639_bool != 0) {
		var_640_int = 0; var_641_string = "";
		func_6837(var_640_int, "d3q02");
		var_643_bool = var_640_int == (int)0;
		var_644_bool = var_643_bool == 0; //@nz
		if(var_644_bool != 0) {
			var_634_bool = 1;
		}
	}
	if(var_634_bool != 0) {
		var_645_int = 0; var_646_string = "";
		func_6837(var_645_int, "d3q02");
		var_648_bool = var_645_int == (int)-1;
		var_649_bool = var_648_bool == 0; //@nz
		if(var_649_bool != 0) {
			var_633_bool = 1;
		}
	}
	if(var_633_bool != 0) {
		var_631_bool = 1;
		return 0;
	}
	var_631_bool = 0;
	return 0;
}


func_6884(var_258_bool, var_259_string, var_260_string)
{
	var_261_object = Obj(); var_262_object = Obj();
	FindActor(var_262_object, var_259_string);
	var_263_bool = var_262_object == 0; //@ne
	if(var_263_bool != 0) {
		var_258_bool = 0;
		return 2;
	}
	Trigger(var_262_object, var_260_string);
	var_258_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_7910(var_77_bool, var_78_object, var_79_int)
{
	var_80_object = Obj(); var_81_object = Obj(); var_82_int = 0; var_83_object = Obj(); var_84_object = Obj(); var_85_int = 0;
	func_7897(Obj());
	var_86_object = var_83_object;
	@@var_83_object:Find(var_79_int, var_84_object);
	var_91_bool = var_84_object == 0; //@nz
	if(var_91_bool != 0) {
		var_93_int = "Can't find diary parent with id: " + var_79_int;
		Trace(var_93_int);
		var_77_bool = 0;
		return 6;
	}
	@@var_84_object:AddChild(var_78_object);
	SendWorldWndMessage((int)7);
	@@var_78_object:GetCategory(var_85_int);
	SetDiarySection(var_85_int);
	var_77_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_5863(var_2_object, var_1043_string)
{
	var_1044_bool = 0;
	func_6948(var_1044_bool);
	var_1045_bool = var_1044_bool == 0; //@nz
	if(var_1045_bool != 0) {
		return 0;
	}
	var_1046_bool = var_1043_string == var_2_object;
	if(var_1046_bool != 0) {
		return 0;
	}
	var_1047_string = ""; var_1048_bool = 0;
	var_1043_string = var_1047_string;
	var_1050_bool = var_1043_string == "";
	if(var_1050_bool != 0) {
		var_1048_bool = 0;
	} else {
		var_1048_bool = 1;
	}
	func_6784(var_1047_string, var_1048_bool);
	var_2_object = var_1043_string;
	return 0;
	
}


func_3304(var_0_object, var_1_object, var_2_object, var_3_string, var_547_object, var_548_object)
{
	var_0_object = var_548_object;
	var_1_object = var_547_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_554_bool = 0; var_555_object = Obj();
		var_555_object = var_1_object;
		func_7563(var_555_object);
		if(var_554_bool != 0) {
			var_560_object = Obj(); var_561_object = Obj();
			var_560_object = var_1_object;
			var_561_object = var_0_object;
			func_7316();
			var_564_object = Obj(); var_565_object = Obj();
			var_564_object = var_1_object;
			var_565_object = var_0_object;
			func_7164();
			var_568_string = "";
			func_3468(var_548_object, "Neutral");
			@@@var_0_object:SetMessage((int)509043);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509044, (int)9921, (int)9920);
		} else {
				var_588_object = Obj(); var_589_object = Obj();
				var_588_object = var_1_object;
				var_589_object = var_0_object;
				func_7316();
				var_590_string = "";
				func_3468(var_548_object, "Neutral");
				@@@var_0_object:SetMessage((int)509024);
				@@@var_0_object:ClearReplies();
				var_592_bool = 0; var_593_object = Obj();
				var_593_object = var_1_object;
				func_7587(var_593_object);
				if(var_592_bool != 0) {
					@@@var_0_object:AddReply((int)511376, (int)9899, (int)12575);
				}
				var_601_bool = 0;
				var_601_bool = 0;
				var_602_bool = 0; var_603_object = Obj();
				var_603_object = var_1_object;
				func_7551(var_603_object);
				if(var_602_bool != 0) {
					var_608_bool = 0; var_609_object = Obj();
					var_609_object = var_1_object;
					func_7382(var_609_object);
					if(var_608_bool != 0) {
						var_601_bool = 1;
					}
				}
				if(var_601_bool != 0) {
					@@@var_0_object:AddReply((int)509042, (int)9941, (int)9918);
				}
				var_617_bool = 0;
				var_617_bool = 0;
				var_618_bool = 0;
				var_618_bool = 0;
				var_619_bool = 0; var_620_object = Obj();
				var_620_object = var_1_object;
				func_7599(var_620_object);
				if(var_619_bool != 0) {
					var_625_bool = 0; var_626_object = Obj();
					var_626_object = var_1_object;
					func_7611(var_626_object);
					if(var_625_bool != 0) {
						var_618_bool = 1;
					}
				}
				if(var_618_bool != 0) {
					var_631_bool = 0; var_632_object = Obj();
					var_632_object = var_1_object;
					func_7394(var_632_object);
					if(var_631_bool != 0) {
						var_617_bool = 1;
					}
				}
				if(var_617_bool != 0) {
					@@@var_0_object:AddReply((int)510442, (int)11512, (int)11511);
				}
				var_653_bool = 0;
				var_653_bool = 0;
				var_654_bool = 0; var_655_object = Obj();
				var_655_object = var_1_object;
				func_7575(var_655_object);
				if(var_654_bool != 0) {
					var_660_bool = 0; var_661_object = Obj();
					var_661_object = var_1_object;
					func_7394(var_661_object);
					if(var_660_bool != 0) {
						var_653_bool = 1;
					}
				}
				if(var_653_bool != 0) {
					@@@var_0_object:AddReply((int)509034, (int)9910, (int)9909);
				}
				@@@var_0_object:AddReply((int)511147, (int)-1, (int)12337);
				goto Label_3438;
		}
	}
Label_3438:
	var_580_bool = 0;
	func_6948(var_580_bool);
	if(var_580_bool != 0) {

	Label_3442:
		lshWaitForAnimEnd();
		var_581_string = var_3_string;
		if(var_581_string != 0) {
		} else {
			var_582_string = "";
			var_582_string = var_2_object;
			func_6768(var_582_string);
			goto Label_3442;
	}
		PlayAnimation("all", "idle");

	Label_3457:
		WaitForAnimEnd();
		var_585_string = var_3_string;
		if(var_585_string != 0) {
			goto Label_3467;
		}
		PlayAnimation("all", "idle");
		goto Label_3457;

	}
	goto Label_3467;
	
Label_3467:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xcec";


func_5359(var_0_object, var_1_object, var_2_object, var_3_string, var_972_object, var_973_object)
{
	var_0_object = var_973_object;
	var_1_object = var_972_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_979_string = "";
		func_5422(var_973_object, "Neutral");
		@@@var_0_object:SetMessage((int)534109);
		@@@var_0_object:ClearReplies();
		var_988_bool = 0; var_989_object = Obj();
		var_989_object = var_1_object;
		func_7370(var_989_object);
		if(var_988_bool != 0) {
			@@@var_0_object:AddReply((int)534110, (int)38263, (int)35703);
		}
		@@@var_0_object:AddReply((int)534111, (int)-1, (int)35704);
		goto Label_5392;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x14f3";
	}
Label_5392:
	var_1000_bool = 0;
	func_6948(var_1000_bool);
	if(var_1000_bool != 0) {

	Label_5396:
		lshWaitForAnimEnd();
		var_1001_string = var_3_string;
		if(var_1001_string != 0) {
		} else {
			var_1002_string = "";
			var_1002_string = var_2_object;
			func_6768(var_1002_string);
			goto Label_5396;
	}
		PlayAnimation("all", "idle");

	Label_5411:
		WaitForAnimEnd();
		var_1005_string = var_3_string;
		if(var_1005_string != 0) {
			goto Label_5421;
		}
		PlayAnimation("all", "idle");
		goto Label_5411;
	}
	goto Label_5421;
	
Label_5421:
	return 0;
	
}


func_6896(var_69_float)
{
	var_70_float = 0; var_71_float = 0;
	GetGameTime(var_71_float);
	var_71_float = var_69_float;
	return 2;
}


func_6901(var_67_int)
{
	var_68_float = 0; var_69_float = 0;
	GetGameTime(var_69_float);
	var_71_int = 0;
	var_71_int = var_69_float / (int)24;
	var_67_int = (int)1 + var_71_int;
	return 2;
}


func_4860(var_0_object, var_1_object, var_2_object, var_3_string, var_889_object, var_890_object)
{
	var_0_object = var_890_object;
	var_1_object = var_889_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_896_bool = 0;
		var_896_bool = 0;
		var_897_bool = 0; var_898_object = Obj();
		var_898_object = var_1_object;
		func_7731(var_898_object);
		if(var_897_bool != 0) {
			var_903_bool = 0; var_904_object = Obj();
			var_904_object = var_1_object;
			func_7743(var_904_object);
			if(var_903_bool != 0) {
				var_896_bool = 1;
			}
		}
		if(var_896_bool != 0) {
			var_909_object = Obj(); var_910_object = Obj();
			var_909_object = var_1_object;
			var_910_object = var_0_object;
			func_7310();
			var_913_string = "";
			func_4957(var_890_object, "Neutral");
			@@@var_0_object:SetMessage((int)512258);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512259, (int)13417, (int)13416);
			@@@var_0_object:AddReply((int)541804, (int)-1, (int)44016);
		} else {
				var_936_string = "";
				func_4957(var_890_object, "Neutral");
				@@@var_0_object:SetMessage((int)513775);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)513776, (int)-1, (int)15012);
				@@@var_0_object:AddReply((int)541596, (int)-1, (int)43760);
				goto Label_4927;
		}
	}
Label_4927:
	var_928_bool = 0;
	func_6948(var_928_bool);
	if(var_928_bool != 0) {

	Label_4931:
		lshWaitForAnimEnd();
		var_929_string = var_3_string;
		if(var_929_string != 0) {
		} else {
			var_930_string = "";
			var_930_string = var_2_object;
			func_6768(var_930_string);
			goto Label_4931;
	}
		PlayAnimation("all", "idle");

	Label_4946:
		WaitForAnimEnd();
		var_933_string = var_3_string;
		if(var_933_string != 0) {
			goto Label_4956;
		}
		PlayAnimation("all", "idle");
		goto Label_4946;

	}
	goto Label_4956;
	
Label_4956:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x1300";


func_4349(var_0_object, var_1_object, var_2_object, var_3_string, var_696_object, var_697_object)
{
	var_0_object = var_697_object;
	var_1_object = var_696_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_703_string = "";
		func_4431(var_697_object, "Neutral");
		@@@var_0_object:SetMessage((int)511791);
		@@@var_0_object:ClearReplies();
		var_712_bool = 0;
		var_712_bool = 0;
		var_713_bool = 0; var_714_object = Obj();
		var_714_object = var_1_object;
		func_7635(var_714_object);
		if(var_713_bool != 0) {
			var_719_bool = 0; var_720_object = Obj();
			var_720_object = var_1_object;
			func_7623(var_720_object);
			if(var_719_bool != 0) {
				var_712_bool = 1;
			}
		}
		if(var_712_bool != 0) {
			@@@var_0_object:AddReply((int)511792, (int)13003, (int)13002);
		}
		var_728_bool = 0; var_729_object = Obj();
		var_729_object = var_1_object;
		func_7755(var_729_object);
		if(var_728_bool != 0) {
			@@@var_0_object:AddReply((int)515713, (int)16770, (int)16769);
		}
		@@@var_0_object:AddReply((int)511794, (int)-1, (int)13004);
		goto Label_4401;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1101";
	}
Label_4401:
	var_740_bool = 0;
	func_6948(var_740_bool);
	if(var_740_bool != 0) {

	Label_4405:
		lshWaitForAnimEnd();
		var_741_string = var_3_string;
		if(var_741_string != 0) {
		} else {
			var_742_string = "";
			var_742_string = var_2_object;
			func_6768(var_742_string);
			goto Label_4405;
	}
		PlayAnimation("all", "idle");

	Label_4420:
		WaitForAnimEnd();
		var_745_string = var_3_string;
		if(var_745_string != 0) {
			goto Label_4430;
		}
		PlayAnimation("all", "idle");
		goto Label_4420;
	}
	goto Label_4430;
	
Label_4430:
	return 0;
	
}


func_6910(var_65_bool, var_66_int)
{
	var_67_int = 0;
	func_6901(var_67_int);
	var_65_bool = var_67_int == var_66_int;
	return 0;
}


func_7938(var_58_object)
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


func_6916(var_71_string, var_72_int)
{
	var_73_string = ""; var_74_string = "";
	var_75_int = var_72_int;
	if(var_75_int != 0) {
		"idle" = "idle" + var_72_int;
	}
	var_74_string = var_71_string;
	return 2;
}


func_7431(var_454_bool)
{
	var_456_int = 0; var_457_string = "";
	func_6837(var_456_int, "ood2Georg1");
	var_459_bool = var_456_int == (int)0;
	if(var_459_bool != 0) {
		var_454_bool = 1;
		return 0;
	}
	var_454_bool = 0;
	return 0;
}


func_6923(var_65_int)
{
	var_66_int = 0; var_67_bool = 0; var_68_int = 0; var_69_bool = 0;
	var_68_int = 0;
	
Label_6925:
	var_71_string = ""; var_72_int = 0;
	var_68_int = var_72_int;
	func_6916(var_71_string, var_72_int);
	HasAnimation(var_69_bool, "all", var_71_string);
	var_76_bool = var_69_bool == 0; //@nz
	if(var_76_bool != 0) {
	} else {
		var_68_int = var_68_int + (int)1;
		goto Label_6925;
	}
	var_68_int = var_65_int;
	return 4;
	
}


func_7443(var_498_bool)
{
	var_500_int = 0; var_501_string = "";
	func_6837(var_500_int, "ood2Georg2");
	var_503_bool = var_500_int == (int)0;
	if(var_503_bool != 0) {
		var_498_bool = 1;
		return 0;
	}
	var_498_bool = 0;
	return 0;
}


func_7955(var_97_object, var_98_string, var_99_float)
{
	var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_object = Obj(); var_104_bool = 0; var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_object = Obj(); var_108_bool = 0;
	GetMainOutdoorScene(var_107_object);
	var_109_bool = var_107_object == 0; //@ne
	if(var_109_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_107_object:GetLocator(var_98_string, var_108_bool, var_105_cvector, var_106_cvector);
	var_111_bool = var_108_bool == 0; //@nz
	if(var_111_bool != 0) {
		var_113_int = "Warning: outdoor scene locator " + var_98_string;
		var_115_int = var_113_int + " doesnt exist";
		Trace(var_115_int);
	}
	@@var_107_object:GetMap(var_97_object);
	var_116_bool = var_97_object == 0; //@ne
	if(var_116_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_118_float = GetByIndex(var_105_cvector, 0);
	var_119_float = GetByIndex(var_105_cvector, 2);
	@@var_97_object:SetMapParams(var_118_float, var_119_float, var_99_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_6940(var_133_int)
{
	var_133_int = 515534;
	return 0;
}


func_6428()
{
	var_51_int = 0; var_52_int = 0; var_53_bool = 0; var_54_int = 0; var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_int = 0; var_59_bool = 0; var_60_int = 0; var_61_int = 0; var_62_bool = 0;
	WaitForAnimEnd();
	var_63_bool = 0;
	func_6538(var_63_bool);
	var_64_bool = var_63_bool == 0; //@nz
	if(var_64_bool != 0) {
		return 12;
	}
	func_6923((int)0);
	var_65_int = var_57_int;
	var_58_int = 0;
	
Label_6442:
	var_78_bool = 0;
	var_78_bool = 0;
	var_80_bool = var_58_int < (int)5;
	if(var_80_bool != 0) {
		var_81_bool = 0;
		func_6538(var_81_bool);
		if(var_81_bool != 0) {
			var_78_bool = 1;
		}
	}
	if(var_78_bool != 0) {
		var_82_bool = var_57_int == 0; //@nz
		if(var_82_bool != 0) {
			Sleep((int)3, var_59_bool);
			var_84_bool = var_59_bool == 0; //@nz
			if(var_84_bool != 0) {
			} else {
		} else {
				irand(var_60_int, var_57_int);
				irand(var_61_int, (int)5);
				var_90_bool = var_61_int != (int)0;
				if(var_90_bool != 0) {
					var_60_int = 0;
				}
				var_92_string = ""; var_93_int = 0;
				var_60_int = var_93_int;
				func_6916(var_92_string, var_93_int);
				PlayAnimation("all", var_92_string);
				WaitForAnimEnd(var_62_bool);
				var_94_bool = var_62_bool == 0; //@nz
				if(var_94_bool == 0) goto Label_6483;
				goto Label_6494;
		}
		Label_6483:
			var_85_bool = 0;
			func_6497(var_85_bool);
			var_86_bool = var_85_bool == 0; //@nz
			if(var_86_bool != 0) {
				goto Label_6494;
			}
			ResetAAS();
			var_58_int = var_58_int + (int)1;
			goto Label_6442;

		}
	}
Label_6494:
	ResetAAS();
	return 12;
	
}


func_6942(var_132_int)
{
	var_132_int = 502859;
	return 0;
}


func_7455(var_504_bool)
{
	var_506_int = 0; var_507_string = "";
	func_6837(var_506_int, "d2q01");
	var_509_bool = var_506_int == (int)0;
	if(var_509_bool != 0) {
		var_504_bool = 1;
		return 0;
	}
	var_504_bool = 0;
	return 0;
}


func_6944(var_134_string)
{
	var_134_string = "ui/NPC_Georg.png";
	return 0;
}


func_6946(var_135_string)
{
	var_135_string = "ui/NPC_Georg_b.png";
	return 0;
}


func_6948(var_127_bool)
{
	var_127_bool = 1;
	return 0;
}


func_6950(var_209_object)
{
	Trace("money 4000 is given");
	var_212_object = Obj(); var_213_int = 0;
	var_209_object = var_212_object;
	func_6865(var_212_object, (int)4000);
	return 0;
}


func_7467(var_460_bool)
{
	var_462_int = 0; var_463_string = "";
	func_6837(var_462_int, "d2q01");
	var_465_bool = var_462_int == (int)6;
	if(var_465_bool != 0) {
		var_460_bool = 1;
		return 0;
	}
	var_460_bool = 0;
	return 0;
}


func_5422(var_2_object, var_979_string)
{
	var_980_bool = 0;
	func_6948(var_980_bool);
	var_981_bool = var_980_bool == 0; //@nz
	if(var_981_bool != 0) {
		return 0;
	}
	var_982_bool = var_979_string == var_2_object;
	if(var_982_bool != 0) {
		return 0;
	}
	var_983_string = ""; var_984_bool = 0;
	var_979_string = var_983_string;
	var_986_bool = var_979_string == "";
	if(var_986_bool != 0) {
		var_984_bool = 0;
	} else {
		var_984_bool = 1;
	}
	func_6784(var_983_string, var_984_bool);
	var_2_object = var_979_string;
	return 0;
	
}


func_6960(var_96_object)
{
	var_97_object = Obj(); var_98_string = ""; var_99_float = 0;
	func_7938(Obj());
	var_100_object = var_97_object;
	func_7955(var_97_object, "pt_map_aglaja", (float)2);
	var_120_object = Obj();
	func_7938(var_120_object);
	@@var_96_object:ShowMap(var_120_object);
	return 0;
}


func_7988(var_136_int)
{
	var_137_int = 0; var_138_int = 0;
	GetVariable("branch", var_138_int);
	var_141_bool = var_138_int == (int)0;
	if(var_141_bool != 0) {
		var_136_int = 1;
		return 2;
	EMIT "GOTO 0x1f43";
	}
	var_143_bool = var_138_int == (int)1;
	if(var_143_bool != 0) {
		var_136_int = 2;
		return 2;
	}
	var_136_int = 3;
	return 2;
}


func_7479(var_426_bool)
{
	var_428_int = 0; var_429_string = "";
	func_6837(var_428_int, "KnowBurahDead");
	var_431_bool = var_428_int == (int)1;
	if(var_431_bool != 0) {
		var_426_bool = 1;
		return 0;
	}
	var_426_bool = 0;
	return 0;
}


func_6976()
{
	var_54_object = Obj(); var_55_object = Obj();
	SetVariable("d1q01", (int)1);
	func_7938(Obj());
	var_58_object = var_55_object;
	var_69_float = 0;
	func_6896(var_69_float);
	@@var_55_object:AddMark("d1GeorgInfo", "pt_map_georg", (int)3, (int)508631, var_69_float);
	var_76_float = 0;
	func_6896(var_76_float);
	@@var_55_object:AddMark("d1q01GeorgGotoViktor", "pt_map_viktor", (int)1, (int)508629, var_76_float);
	func_7780();
	func_7806();
	return 2;
}
EMIT "Stack[-1] = 0";


func_7491(var_377_bool)
{
	var_379_int = 0; var_380_string = "";
	func_6837(var_379_int, "ood1Georg4");
	var_382_bool = var_379_int == (int)0;
	if(var_382_bool != 0) {
		var_377_bool = 1;
		return 0;
	}
	var_377_bool = 0;
	return 0;
}


func_8005(var_64_object)
{
	var_65_bool = 0; var_66_int = 0;
	func_6910(var_65_bool, (int)1);
	if(var_65_bool != 0) {
		var_73_int = 0; var_74_object = Obj();
		var_64_object = var_74_object;
		TaskCall(2);
		func_547(var_75_object, var_73_int, var_74_object);
		TaskReturn();
		return 0;
	}
	var_420_bool = 0; var_421_int = 0;
	func_6910(var_420_bool, (int)2);
	if(var_420_bool != 0) {
		var_422_int = 0; var_423_object = Obj();
		var_64_object = var_423_object;
		TaskCall(4);
		func_2558(var_424_object, var_422_int, var_423_object);
		TaskReturn();
		return 0;
	}
	var_521_bool = 0; var_522_int = 0;
	func_6910(var_521_bool, (int)3);
	if(var_521_bool != 0) {
		var_523_int = 0; var_524_object = Obj();
		var_64_object = var_524_object;
		TaskCall(6);
		func_3223(var_525_object, var_523_int, var_524_object);
		TaskReturn();
		return 0;
	}
	var_670_bool = 0; var_671_int = 0;
	func_6910(var_670_bool, (int)5);
	if(var_670_bool != 0) {
		var_672_int = 0; var_673_object = Obj();
		var_64_object = var_673_object;
		TaskCall(8);
		func_4268(var_674_object, var_672_int, var_673_object);
		TaskReturn();
		return 0;
	}
	var_750_bool = 0; var_751_int = 0;
	func_6910(var_750_bool, (int)6);
	if(var_750_bool != 0) {
		var_752_int = 0; var_753_object = Obj();
		var_64_object = var_753_object;
		TaskCall(0);
		func_0(var_754_object, var_752_int, var_753_object);
		TaskReturn();
		return 0;
	}
	var_863_bool = 0; var_864_int = 0;
	func_6910(var_863_bool, (int)8);
	if(var_863_bool != 0) {
		var_865_int = 0; var_866_object = Obj();
		var_64_object = var_866_object;
		TaskCall(10);
		func_4779(var_867_object, var_865_int, var_866_object);
		TaskReturn();
		return 0;
	}
	var_946_bool = 0; var_947_int = 0;
	func_6910(var_946_bool, (int)10);
	if(var_946_bool != 0) {
		var_948_int = 0; var_949_object = Obj();
		var_64_object = var_949_object;
		TaskCall(12);
		func_5278(var_950_object, var_948_int, var_949_object);
		TaskReturn();
		return 0;
	}
	var_1010_bool = 0; var_1011_int = 0;
	func_6910(var_1010_bool, (int)12);
	if(var_1010_bool != 0) {
		var_1012_int = 0; var_1013_object = Obj();
		var_64_object = var_1013_object;
		TaskCall(14);
		func_5719(var_1014_object, var_1012_int, var_1013_object);
		TaskReturn();
		return 0;
	}
	var_1071_int = 0; var_1072_object = Obj();
	var_64_object = var_1072_object;
	TaskCall(16);
	func_6042(var_1073_object, var_1071_int, var_1072_object);
	TaskReturn();
	return 0;
}


func_7503(var_399_bool)
{
	var_401_int = 0; var_402_string = "";
	func_6837(var_401_int, "d1q01");
	var_404_bool = var_401_int == (int)1;
	if(var_404_bool != 0) {
		var_399_bool = 1;
		return 0;
	}
	var_399_bool = 0;
	return 0;
}


func_4431(var_2_object, var_703_string)
{
	var_704_bool = 0;
	func_6948(var_704_bool);
	var_705_bool = var_704_bool == 0; //@nz
	if(var_705_bool != 0) {
		return 0;
	}
	var_706_bool = var_703_string == var_2_object;
	if(var_706_bool != 0) {
		return 0;
	}
	var_707_string = ""; var_708_bool = 0;
	var_703_string = var_707_string;
	var_710_bool = var_703_string == "";
	if(var_710_bool != 0) {
		var_708_bool = 0;
	} else {
		var_708_bool = 1;
	}
	func_6784(var_707_string, var_708_bool);
	var_2_object = var_703_string;
	return 0;
	
}


func_7515(var_242_bool)
{
	var_244_int = 0; var_245_string = "";
	func_6837(var_244_int, "ood1Georg1");
	var_249_bool = var_244_int == (int)0;
	if(var_249_bool != 0) {
		var_242_bool = 1;
		return 0;
	}
	var_242_bool = 0;
	return 0;
}


func_4957(var_2_object, var_913_string)
{
	var_914_bool = 0;
	func_6948(var_914_bool);
	var_915_bool = var_914_bool == 0; //@nz
	if(var_915_bool != 0) {
		return 0;
	}
	var_916_bool = var_913_string == var_2_object;
	if(var_916_bool != 0) {
		return 0;
	}
	var_917_string = ""; var_918_bool = 0;
	var_913_string = var_917_string;
	var_920_bool = var_913_string == "";
	if(var_920_bool != 0) {
		var_918_bool = 0;
	} else {
		var_918_bool = 1;
	}
	func_6784(var_917_string, var_918_bool);
	var_2_object = var_913_string;
	return 0;
	
}


func_865(var_2_object, var_267_string)
{
	var_268_bool = 0;
	func_6948(var_268_bool);
	var_269_bool = var_268_bool == 0; //@nz
	if(var_269_bool != 0) {
		return 0;
	}
	var_270_bool = var_267_string == var_2_object;
	if(var_270_bool != 0) {
		return 0;
	}
	var_271_string = ""; var_272_bool = 0;
	var_267_string = var_271_string;
	var_274_bool = var_267_string == "";
	if(var_274_bool != 0) {
		var_272_bool = 0;
	} else {
		var_272_bool = 1;
	}
	func_6784(var_271_string, var_272_bool);
	var_2_object = var_267_string;
	return 0;
	
}


func_6497(var_85_bool)
{
	var_85_bool = 1;
	return 0;
}


func_7011()
{
	func_7793();
	var_158_bool = 0; var_159_string = ""; var_160_string = "";
	func_6884(var_158_bool, "quest_d1_01", "completed");
	return 0;
}


func_6499()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_7527(var_339_bool)
{
	var_341_int = 0; var_342_string = "";
	func_6837(var_341_int, "ood1Georg2");
	var_344_bool = var_341_int == (int)0;
	if(var_344_bool != 0) {
		var_339_bool = 1;
		return 0;
	}
	var_339_bool = 0;
	return 0;
}


func_6504(var_61_float, var_62_object)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0);
	GetPosition(var_66_cvector);
	@@var_62_object:GetPosition(var_67_cvector);
	var_68_cvector = var_67_cvector - var_66_cvector;
	var_61_float = var_68_cvector | var_68_cvector;
	return 6;
}


func_7021()
{
	SetVariable("d1q01TeloNedostupno", (int)1);
	return 0;
}


func_6512(var_124_object, var_125_string, var_126_int)
{
	var_127_int = 0; var_128_int = 0;
	@@var_124_object:GetProperty(var_125_string, var_128_int);
	var_129_int = var_128_int + var_126_int;
	@@var_124_object:SetProperty(var_125_string, var_129_int);
	return 2;
}


func_7027()
{
	SetVariable("d1q01FirstGeorgVisit", (int)1);
	var_258_bool = 0; var_259_string = ""; var_260_string = "";
	func_6884(var_258_bool, "quest_d1_01", "remove_cutscene");
	var_264_bool = 0; var_265_string = ""; var_266_string = "";
	func_6884(var_264_bool, "quest_d1_01", "unlock_doors");
	return 0;
}


func_7539(var_360_bool)
{
	var_362_int = 0; var_363_string = "";
	func_6837(var_362_int, "ood1Georg3");
	var_365_bool = var_362_int == (int)0;
	if(var_365_bool != 0) {
		var_360_bool = 1;
		return 0;
	}
	var_360_bool = 0;
	return 0;
}


func_6519(var_54_bool, var_55_cvector)
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


func_7551(var_602_bool)
{
	var_604_int = 0; var_605_string = "";
	func_6837(var_604_int, "ood3Georg1");
	var_607_bool = var_604_int == (int)0;
	if(var_607_bool != 0) {
		var_602_bool = 1;
		return 0;
	}
	var_602_bool = 0;
	return 0;
}


func_6529(var_50_bool, var_51_object)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	@@var_51_object:GetPosition(var_53_cvector);
	var_54_bool = 0; var_55_cvector = CVector(0,0,0);
	var_53_cvector = var_55_cvector;
	func_6519(var_54_bool, var_55_cvector);
	var_54_bool = var_50_bool;
	return 2;
}


func_7043()
{
	var_85_bool = 0;
	var_85_bool = 0;
	var_86_int = 0; var_87_string = "";
	func_6837(var_86_int, "d2q01BigVladVisit");
	var_91_bool = var_86_int != (int)0;
	if(var_91_bool != 0) {
		var_92_int = 0; var_93_string = "";
		func_6837(var_92_int, "d2q01GeorgVisit");
		var_95_bool = var_92_int != (int)0;
		if(var_95_bool != 0) {
			var_85_bool = 1;
		}
	}
	if(var_85_bool != 0) {
		func_7819();
	}
	return 0;
}


func_6538(var_47_bool)
{
	var_48_bool = 0; var_49_bool = 0;
	IsLoaded(var_49_bool);
	var_49_bool = var_47_bool;
	return 2;
}


func_7563(var_554_bool)
{
	var_556_int = 0; var_557_string = "";
	func_6837(var_556_int, "ood3Georg2");
	var_559_bool = var_556_int == (int)0;
	if(var_559_bool != 0) {
		var_554_bool = 1;
		return 0;
	}
	var_554_bool = 0;
	return 0;
}


func_3468(var_2_object, var_568_string)
{
	var_569_bool = 0;
	func_6948(var_569_bool);
	var_570_bool = var_569_bool == 0; //@nz
	if(var_570_bool != 0) {
		return 0;
	}
	var_571_bool = var_568_string == var_2_object;
	if(var_571_bool != 0) {
		return 0;
	}
	var_572_string = ""; var_573_bool = 0;
	var_568_string = var_572_string;
	var_575_bool = var_568_string == "";
	if(var_575_bool != 0) {
		var_573_bool = 0;
	} else {
		var_573_bool = 1;
	}
	func_6784(var_572_string, var_573_bool);
	var_2_object = var_568_string;
	return 0;
	
}


func_6543(var_84_bool, var_85_object, var_86_float)
{
	var_87_float = 0; var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_bool = 0; var_95_bool = 0; var_96_float = 0; var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_bool = 0; var_104_bool = 0;
	@@var_85_object:GetPosition(var_97_cvector);
	@@var_85_object:GetEyesHeight(var_96_float);
	var_105_float = GetByIndex(var_97_cvector, 1);
	var_105_float = var_105_float + var_96_float;
	SetByIndex(var_97_cvector, 1) = var_105_float;
	GetPosition(var_98_cvector);
	GetEyesHeight(var_96_float);
	var_106_float = GetByIndex(var_98_cvector, 1);
	var_106_float = var_106_float + var_96_float;
	SetByIndex(var_98_cvector, 1) = var_106_float;
	var_99_cvector = var_97_cvector - var_98_cvector;
	var_107_float = GetByIndex(var_99_cvector, 1);
	SetByIndex(var_99_cvector, 1) = (float)0;
	var_108_int = var_99_cvector | var_99_cvector;
	var_109_float = sqrt(var_108_int);
	var_99_cvector = var_99_cvector / var_109_float;
	var_100_cvector = -var_99_cvector;
	var_110_float = var_99_cvector * var_86_float;
	var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0);
	var_112_cvector = var_100_cvector ^ CVector(0.0, 1.0, 0.0);
	func_6827(var_111_cvector, var_112_cvector);
	var_120_float = var_111_cvector * (int)25;
	var_121_int = var_110_float + var_120_float;
	var_101_cvector = var_121_int - CVector(0.0, 10.0, 0.0);
	var_102_cvector = var_98_cvector + var_101_cvector;
	IsOverrideActive(var_103_bool);
	var_123_bool = var_103_bool;
	if(var_123_bool != 0) {
		var_84_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_102_cvector, var_100_cvector, (bool)1);
	var_125_float = GetByIndex(var_101_cvector, 0);
	var_126_float = GetByIndex(var_101_cvector, 2);
	Rotate(var_125_float, var_126_float);
	var_127_bool = 0;
	func_6948(var_127_bool);
	if(var_127_bool != 0) {
	} else {
		HasAnimationTrack(var_104_bool, "head");
		var_129_bool = var_104_bool;
		if(var_129_bool == 0) goto Label_6606;
		LookAsyncCamera("head");
	}
Label_6606:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_84_bool = 1;
	return 18;
	
}


func_7575(var_654_bool)
{
	var_656_int = 0; var_657_string = "";
	func_6837(var_656_int, "d3RubinToldWhereIsSimon");
	var_659_bool = var_656_int == (int)1;
	if(var_659_bool != 0) {
		var_654_bool = 1;
		return 0;
	}
	var_654_bool = 0;
	return 0;
}


func_7066()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_6042(var_0_object, var_1071_int, var_1072_object)
{
	var_1074_object = Obj(); var_1075_bool = 0; var_1076_int = 0; var_1077_bool = 0; var_1078_object = Obj(); var_1079_bool = 0; var_1080_int = 0; var_1081_bool = 0;
	var_0_object = var_1072_object;
	var_1082_bool = 0; var_1083_object = Obj(); var_1084_float = 0;
	var_1072_object = var_1083_object;
	func_6543(var_1082_bool, var_1083_object, (float)70.0);
	var_1085_bool = var_1082_bool == 0; //@nz
	if(var_1085_bool != 0) {
		var_1071_int = -2;
		return 8;
	}
	CreateDialog(var_1078_object);
	var_1086_int = 0;
	func_6942(var_1086_int);
	@@var_1078_object:SetNPCName(var_1086_int);
	var_1087_int = 0;
	func_6940(var_1087_int);
	@@var_1078_object:SetNPCDescription(var_1087_int);
	var_1088_string = "";
	func_6944(var_1088_string);
	@@var_1078_object:SetPhoto(var_1088_string);
	var_1089_string = "";
	func_6946(var_1089_string);
	@@var_1078_object:SetPhoto2(var_1089_string);
	var_1090_int = 0;
	func_7988(var_1090_int);
	@@var_1078_object:SetPlayerName(var_1090_int);
	IsOverrideActive(var_1079_bool);
	var_1091_bool = var_1079_bool;
	if(var_1091_bool != 0) {
		var_1071_int = -2;
		return 8;
	}
	DoDialog(var_1078_object);
	var_1092_bool = 0; var_1093_object = Obj();
	func_6821(Obj());
	var_1094_object = var_1093_object;
	func_6630(var_1092_bool, var_1093_object);
	var_1095_object = Obj(); var_1096_object = Obj();
	var_1072_object = var_1095_object;
	var_1078_object = var_1096_object;
	TaskCall(17);
	func_6123(var_1097_object, var_1098_object, var_1099_string, var_1100_bool, var_1095_object, var_1096_object);
	TaskReturn();
	@@var_1078_object:IsDialogEnd(var_1081_bool);
	
Label_6105:
	var_1125_bool = var_1081_bool == 0; //@nz
	if(var_1125_bool != 0) {
		sync();
		@@var_1078_object:IsDialogEnd(var_1081_bool);
		goto Label_6105;
	}
	var_1072_object = Obj();
	func_6612();
	StopDialog(var_1078_object);
	@@var_1078_object:GetReturnValue((int)-1);
	var_1080_int = var_1071_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7072()
{
	SetVariable("ood1Georg5", (int)1);
	return 0;
}


func_7587(var_592_bool)
{
	var_594_int = 0; var_595_string = "";
	func_6837(var_594_int, "d3q02");
	var_597_bool = var_594_int == (int)0;
	if(var_597_bool != 0) {
		var_592_bool = 1;
		return 0;
	}
	var_592_bool = 0;
	return 0;
}


func_7078()
{
	var_54_object = Obj(); var_55_object = Obj();
	SetVariable("d10q02", (int)4);
	func_7938(Obj());
	var_58_object = var_55_object;
	var_69_float = 0;
	func_6896(var_69_float);
	@@var_55_object:AddMark("d10q02GeorgGotoAglaja", "pt_map_aglaja", (int)0, (int)515299, var_69_float);
	func_7767();
	return 2;
}
EMIT "Stack[-1] = 0";


func_7599(var_619_bool)
{
	var_621_int = 0; var_622_string = "";
	func_6837(var_621_int, "ood3Georg3");
	var_624_bool = var_621_int == (int)0;
	if(var_624_bool != 0) {
		var_619_bool = 1;
		return 0;
	}
	var_619_bool = 0;
	return 0;
}


func_7611(var_625_bool)
{
	var_627_int = 0; var_628_string = "";
	func_6837(var_627_int, "d3q02SeeCorpse");
	var_630_bool = var_627_int == (int)1;
	if(var_630_bool != 0) {
		var_625_bool = 1;
		return 0;
	}
	var_625_bool = 0;
	return 0;
}


func_7101()
{
	SetVariable("ood2Georg1", (int)1);
	return 0;
}


func_7107()
{
	SetVariable("ood2Georg2", (int)1);
	return 0;
}


func_7623(var_719_bool)
{
	var_721_int = 0; var_722_string = "";
	func_6837(var_721_int, "d5q03");
	var_724_bool = var_721_int == (int)1000;
	if(var_724_bool != 0) {
		var_719_bool = 1;
		return 0;
	}
	var_719_bool = 0;
	return 0;
}


func_7113()
{
	SetVariable("d2q01GeorgVisit", (int)1);
	func_7832();
	return 0;
}


func_7122()
{
	SetVariable("ood1Georg4", (int)1);
	return 0;
}


func_7635(var_713_bool)
{
	var_715_int = 0; var_716_string = "";
	func_6837(var_715_int, "ood5Georg1");
	var_718_bool = var_715_int == (int)0;
	if(var_718_bool != 0) {
		var_713_bool = 1;
		return 0;
	}
	var_713_bool = 0;
	return 0;
}


func_6612()
{
	var_413_bool = 0; var_414_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_416_bool = 0;
	func_6948(var_416_bool);
	if(var_416_bool != 0) {
	} else {
		HasAnimationTrack(var_414_bool, "head");
		var_418_bool = var_414_bool;
		if(var_418_bool == 0) goto Label_6629;
		UnlookAsync("head");
	}
Label_6629:
	return 2;
	
}


func_7128(var_117_object)
{
	Trace("money 5000 is given");
	var_120_object = Obj(); var_121_int = 0;
	var_117_object = var_120_object;
	func_6865(var_120_object, (int)5000);
	return 0;
}


func_7647(var_811_bool)
{
	var_813_int = 0; var_814_string = "";
	func_6837(var_813_int, "d6q01");
	var_816_bool = var_813_int == (int)0;
	if(var_816_bool != 0) {
		var_811_bool = 1;
		return 0;
	}
	var_811_bool = 0;
	return 0;
}


func_7138()
{
	var_144_int = 0; var_145_int = 0;
	func_7858();
	GetVariable("d3q02", var_145_int);
	var_155_int = var_145_int;
	if(var_155_int != 0) {
		var_156_bool = 0; var_157_string = ""; var_158_string = "";
		func_6884(var_156_bool, "quest_d3_02", "completed");
	} else {
		SetVariable("d3q02", (int)1000);
	}
	return 2;
	
}


func_6630(var_145_bool, var_146_object)
{
	var_150_int = 0; var_151_int = 0; var_152_int = 0; var_153_int = 0;
	GetVariable("voice_common", var_152_int);
	var_155_int = var_152_int;
	if(var_155_int != 0) {
		var_156_bool = 0; var_157_object = Obj();
		var_146_object = var_157_object;
		func_6688(var_156_bool, var_157_object);
		var_186_bool = var_156_bool == 0; //@nz
		if(var_186_bool != 0) {
			var_187_bool = 0; var_188_object = Obj();
			var_146_object = var_188_object;
			func_6725(var_187_bool, var_188_object);
			var_217_bool = var_187_bool == 0; //@nz
			if(var_217_bool != 0) {
				var_145_bool = 0;
				return 4;
			}
		}
		irand(var_153_int, (int)2);
		var_219_int = var_153_int;
		if(var_219_int != 0) {
			var_222_int = var_152_int + (int)1;
			var_224_int = var_222_int % (int)3;
			SetVariable("voice_common", var_224_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_227_bool = 0; var_228_object = Obj();
		var_146_object = var_228_object;
		func_6725(var_227_bool, var_228_object);
		var_229_bool = var_227_bool == 0; //@nz
		if(var_229_bool != 0) {
			var_230_bool = 0; var_231_object = Obj();
			var_146_object = var_231_object;
			func_6688(var_230_bool, var_231_object);
			var_232_bool = var_230_bool == 0; //@nz
			if(var_232_bool != 0) {
				var_145_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_6686;
	
Label_6686:
	var_145_bool = 1;
	return 4;
	
}


func_7659(var_818_bool)
{
	var_820_int = 0; var_821_string = "";
	func_6837(var_820_int, "d6q01");
	var_823_bool = var_820_int == (int)1000;
	if(var_823_bool != 0) {
		var_818_bool = 1;
		return 0;
	}
	var_818_bool = 0;
	return 0;
}


func_6123(var_0_object, var_1_object, var_2_object, var_3_string, var_1095_object, var_1096_object)
{
	var_0_object = var_1096_object;
	var_1_object = var_1095_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1102_string = "";
		func_6181(var_1096_object, "Neutral");
		@@@var_0_object:SetMessage((int)540542);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540543, (int)-1, (int)42552);
		@@@var_0_object:AddReply((int)540796, (int)-1, (int)42845);
		goto Label_6151;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x17ef";
	}
Label_6151:
	var_1117_bool = 0;
	func_6948(var_1117_bool);
	if(var_1117_bool != 0) {

	Label_6155:
		lshWaitForAnimEnd();
		var_1118_string = var_3_string;
		if(var_1118_string != 0) {
		} else {
			var_1119_string = "";
			var_1119_string = var_2_object;
			func_6768(var_1119_string);
			goto Label_6155;
	}
		PlayAnimation("all", "idle");

	Label_6170:
		WaitForAnimEnd();
		var_1122_string = var_3_string;
		if(var_1122_string != 0) {
			goto Label_6180;
		}
		PlayAnimation("all", "idle");
		goto Label_6170;
	}
	goto Label_6180;
	
Label_6180:
	return 0;
	
}


func_7158()
{
	SetVariable("ood3Georg1", (int)1);
	return 0;
}


func_7671(var_825_bool)
{
	var_827_int = 0; var_828_string = "";
	func_6837(var_827_int, "d6q01");
	var_830_bool = var_827_int == (int)-1;
	if(var_830_bool != 0) {
		var_825_bool = 1;
		return 0;
	}
	var_825_bool = 0;
	return 0;
}


func_7164()
{
	SetVariable("ood3Georg2", (int)1);
	return 0;
}


func_2558(var_0_object, var_422_int, var_423_object)
{
	var_425_object = Obj(); var_426_bool = 0; var_427_int = 0; var_428_bool = 0; var_429_object = Obj(); var_430_bool = 0; var_431_int = 0; var_432_bool = 0;
	var_0_object = var_423_object;
	var_433_bool = 0; var_434_object = Obj(); var_435_float = 0;
	var_423_object = var_434_object;
	func_6543(var_433_bool, var_434_object, (float)70.0);
	var_436_bool = var_433_bool == 0; //@nz
	if(var_436_bool != 0) {
		var_422_int = -2;
		return 8;
	}
	CreateDialog(var_429_object);
	var_437_int = 0;
	func_6942(var_437_int);
	@@var_429_object:SetNPCName(var_437_int);
	var_438_int = 0;
	func_6940(var_438_int);
	@@var_429_object:SetNPCDescription(var_438_int);
	var_439_string = "";
	func_6944(var_439_string);
	@@var_429_object:SetPhoto(var_439_string);
	var_440_string = "";
	func_6946(var_440_string);
	@@var_429_object:SetPhoto2(var_440_string);
	var_441_int = 0;
	func_7988(var_441_int);
	@@var_429_object:SetPlayerName(var_441_int);
	IsOverrideActive(var_430_bool);
	var_442_bool = var_430_bool;
	if(var_442_bool != 0) {
		var_422_int = -2;
		return 8;
	}
	DoDialog(var_429_object);
	var_443_bool = 0; var_444_object = Obj();
	func_6821(Obj());
	var_445_object = var_444_object;
	func_6630(var_443_bool, var_444_object);
	var_446_object = Obj(); var_447_object = Obj();
	var_423_object = var_446_object;
	var_429_object = var_447_object;
	TaskCall(5);
	func_2639(var_448_object, var_449_object, var_450_string, var_451_bool, var_446_object, var_447_object);
	TaskReturn();
	@@var_429_object:IsDialogEnd(var_432_bool);
	
Label_2621:
	var_519_bool = var_432_bool == 0; //@nz
	if(var_519_bool != 0) {
		sync();
		@@var_429_object:IsDialogEnd(var_432_bool);
		goto Label_2621;
	}
	var_423_object = Obj();
	func_6612();
	StopDialog(var_429_object);
	@@var_429_object:GetReturnValue((int)-1);
	var_431_int = var_422_int;
	return 8;
}
EMIT "Stack[-4] = 0";


