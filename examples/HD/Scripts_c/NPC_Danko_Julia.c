// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,GetMainOutdoorScene/1,AddBlankActor/4,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,GetInvItemProperty/3,CreateInvItem/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Hope|W:Fear|W:Independence|W:Untrust|W:player|A:GetPosition|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|W:m|W:Can't find lsh animation : |W:.bin|A:add|W:money|W:Money|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:ui/NPC_Julia.png|W:ui/NPC_Julia_b.png|W:d1q02JuliaGotoAnna|W:pt_map_anna|A:AddMark|W:quest_d1_02|W:playsound|W:givemoney|W:giveitem|W:d1q01|W:d1q01JuliaGotoBigVlad|W:pt_map_bigvlad|W:ood1Julia1|W:ood1Julia2|W:ood8Julia1|W:ood9Julia1|W:d9q02|W:quest_d9_02|W:completed|W:burah_serum is given|W:burah_serum|W:ood1Julia3|W:ood1Julia4|W:d1JuliaMapMarkEva|W:pt_map_eva|W:d1JuliaMapMarkLara|W:pt_map_lara|W:ood2Julia2|W:raincoat_repel is given|W:raincoat_repel|W:d9JuliaVisit|W:ood2Julia1|A:ShowMap|W:mapmark|W:KnowJulia|W:money3000 is given|W:ood4Julia1|W:d4q02JuliaGivesMedcine|W:d4q02AnnaGivesMedcine|W:d4q02LaraGivesMedcine|W:d4q02|W:d4q02BirdmaskNearHome|W:pt_d4q02_birdmask|W:quest_d4_02|W:ood4Julia2|W:ood6Julia1|W:ood6Julia2|W:julia blood is given|W:d6q01_julia_blood|W:d6q01JuliaVolonteer|W:quest_d6_01|W:ood6Julia3|W:feromicin is given|W:feromicin|W:neomicin is given|W:neomicin|W:monomicin is given|W:monomicin|W:d8q04|W:d2q01|W:d2q03|W:d6q01|W:d5q01|W:microscope_d6q01_julia_blood|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x15e0
// @RUN_TASK: 18
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xab vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x264 vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x608 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x876 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb0c vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1092 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0x120e vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0x14b8 vars=int,int
// @TASK_16: vars=object params=2
// @TASK_17: vars=object,object,string,bool params=2
// @EVENT_11: op=0x15b6 vars=int,int
// @TASK_18: vars=cvector params=0
// @EVENT_7: op=0x162c vars=int
// @EVENT_6: op=0x1652 vars=
// @EVENT_5: op=0x1661 vars=
// @EVENT_45: op=0x166e vars=bool
// @EVENT_0: op=0x167a vars=object
// @PE: 0x51,0x95,0xab,0x1cc,0x24e,0x264,0x592,0x5f2,0x608,0x7f1,0x860,0x876,0xa6e,0xaf6,0xb0c,0x102f,0x107c,0x1092,0x1196,0x11f8,0x120e,0x1463,0x14a2,0x14b8,0x1566,0x15a0,0x15b6,0x162c,0x1652,0x166e,0x1899,0x18db,0x18e1,0x18fe,0x1904,0x190a,0x1910,0x1916,0x1926,0x1930,0x193b,0x1941,0x1960,0x1966,0x1971,0x1977,0x197c,0x1982,0x1992,0x1998,0x199e,0x19ae,0x19b8,0x19be,0x1a08,0x1a0e,0x1a14,0x1a1a,0x1a28,0x1a2e,0x1a3c,0x1a42,0x1a4d,0x1a58,0x1a63,0x1a6f,0x1a7b,0x1a87,0x1a93,0x1a9f,0x1aab,0x1ab7,0x1ac3,0x1acf,0x1af1,0x1afd,0x1b09,0x1b15,0x1b21,0x1b2d,0x1b39,0x1b45,0x1b51,0x1b5d,0x1b69,0x1b75,0x1b81,0x1b8d,0x1b99,0x1ba5,0x1bb1,0x1cb4

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_6169();
		var_51_bool = var_46_bool == (int)379;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_6552();
			var_56_string = "";
			func_149(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500325);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500326, (int)383, (int)380);
			@@@var_0_object:AddReply((int)500327, (int)383, (int)381);
			@@@var_0_object:AddReply((int)500328, (int)393, (int)382);
			return 0;
		}
		var_84_bool = var_46_bool == (int)393;
		if(var_84_bool != 0) {
			var_85_string = "";
			func_149(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500338);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500339, (int)396, (int)394);
			@@@var_0_object:AddReply((int)533155, (int)34674, (int)34673);
			return 0;
		}
		var_94_bool = var_46_bool == (int)34674;
		if(var_94_bool != 0) {
			var_95_string = "";
			func_149(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533156);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533161, (int)34677, (int)34679);
			@@@var_0_object:AddReply((int)533157, (int)-1, (int)34675);
			return 0;
		}
		var_104_bool = var_46_bool == (int)396;
		if(var_104_bool != 0) {
			var_105_string = "";
			func_149(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500341);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533158, (int)34677, (int)34676);
			@@@var_0_object:AddReply((int)533160, (int)-1, (int)34678);
			return 0;
		}
		var_114_bool = var_46_bool == (int)34677;
		if(var_114_bool != 0) {
			var_115_string = "";
			func_149(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533159);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500343, (int)-1, (int)398);
			@@@var_0_object:AddReply((int)500344, (int)-1, (int)399);
			return 0;
		}
		var_124_bool = var_46_bool == (int)383;
		if(var_124_bool != 0) {
			var_125_string = "";
			func_149(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500329);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500334, (int)390, (int)389);
			@@@var_0_object:AddReply((int)500330, (int)386, (int)385);
			return 0;
		}
		var_134_bool = var_46_bool == (int)386;
		if(var_134_bool != 0) {
			var_135_string = "";
			func_149(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500331);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500333, (int)-1, (int)388);
			return 0;
		}
		var_141_bool = var_46_bool == (int)390;
		if(var_141_bool != 0) {
			var_142_string = "";
			func_149(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)500335);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)500336, (int)-1, (int)391);
			@@@var_0_object:AddReply((int)500337, (int)-1, (int)392);
			return 0;
		}
		var_3_string = true;
		var_150_bool = 0;
		func_6335(var_150_bool);
		if(var_150_bool != 0) {
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
		func_6169();
		var_51_bool = var_47_cvector == (int)3943;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_6670();
		}
		var_57_bool = var_47_cvector == (int)13927;
		if(var_57_bool != 0) {
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_object;
			func_6676();
		}
		var_63_bool = var_47_cvector == (int)11812;
		if(var_63_bool != 0) {
			var_64_object = Obj(); var_65_object = Obj();
			var_64_object = var_1_object;
			var_65_object = var_0_object;
			func_6682(var_65_object);
			var_111_object = Obj(); var_112_object = Obj();
			var_111_object = var_1_object;
			var_112_object = var_0_object;
			func_6696();
		}
		var_116_bool = var_47_cvector == (int)11813;
		if(var_116_bool != 0) {
			var_117_object = Obj(); var_118_object = Obj();
			var_117_object = var_1_object;
			var_118_object = var_0_object;
			func_6682(var_118_object);
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_object;
			func_6696();
		}
		var_122_bool = var_47_cvector == (int)11839;
		if(var_122_bool != 0) {
			var_123_object = Obj(); var_124_object = Obj();
			var_123_object = var_1_object;
			var_124_object = var_0_object;
			func_6676();
			var_125_object = Obj(); var_126_object = Obj();
			var_125_object = var_1_object;
			var_126_object = var_0_object;
			func_6682(var_126_object);
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_object;
			var_128_object = var_0_object;
			func_6696();
		}
		var_130_bool = var_47_cvector == (int)13928;
		if(var_130_bool != 0) {
			var_131_object = Obj(); var_132_object = Obj();
			var_131_object = var_1_object;
			var_132_object = var_0_object;
			func_6716();
		}
		var_136_bool = var_47_cvector == (int)11847;
		if(var_136_bool != 0) {
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_object;
			func_6519();
		}
		var_148_bool = var_47_cvector == (int)11848;
		if(var_148_bool != 0) {
			var_149_object = Obj(); var_150_object = Obj();
			var_149_object = var_1_object;
			var_150_object = var_0_object;
			func_6702();
		}
		var_168_bool = var_47_cvector == (int)11853;
		if(var_168_bool != 0) {
			var_169_object = Obj(); var_170_object = Obj();
			var_169_object = var_1_object;
			var_170_object = var_0_object;
			func_6702();
		}
		var_172_bool = var_47_cvector == (int)11854;
		if(var_172_bool != 0) {
			var_173_object = Obj(); var_174_object = Obj();
			var_173_object = var_1_object;
			var_174_object = var_0_object;
			func_6702();
		}
		var_176_bool = var_46_bool == (int)3942;
		if(var_176_bool != 0) {
			var_177_string = "";
			func_590(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)503640);
			@@@var_0_object:ClearReplies();
			var_195_bool = 0;
			var_195_bool = 0;
			var_196_bool = 0; var_197_object = Obj();
			var_197_object = var_1_object;
			func_7005(var_197_object);
			if(var_196_bool != 0) {
				var_204_bool = 0; var_205_object = Obj();
				var_205_object = var_1_object;
				func_7017(var_205_object);
				if(var_204_bool != 0) {
					var_195_bool = 1;
				}
			}
			if(var_195_bool != 0) {
				@@@var_0_object:AddReply((int)503641, (int)3945, (int)3943);
			}
			var_213_bool = 0;
			var_213_bool = 0;
			var_214_bool = 0; var_215_object = Obj();
			var_215_object = var_1_object;
			func_6993(var_215_object);
			if(var_214_bool != 0) {
				var_220_bool = 0; var_221_object = Obj();
				var_221_object = var_1_object;
				func_7029(var_221_object);
				if(var_220_bool != 0) {
					var_213_bool = 1;
				}
			}
			if(var_213_bool != 0) {
				@@@var_0_object:AddReply((int)512733, (int)11803, (int)13927);
			}
			var_229_bool = 0;
			var_229_bool = 0;
			var_230_bool = 0;
			var_230_bool = 0;
			var_231_bool = 0;
			var_231_bool = 0;
			var_232_bool = 0; var_233_object = Obj();
			var_233_object = var_1_object;
			func_7041(var_233_object);
			if(var_232_bool != 0) {
				var_238_bool = 0; var_239_object = Obj();
				var_239_object = var_1_object;
				func_7053(var_239_object);
				if(var_238_bool != 0) {
					var_231_bool = 1;
				}
			}
			if(var_231_bool != 0) {
				var_244_bool = 0; var_245_object = Obj();
				var_245_object = var_1_object;
				func_7065(var_245_object);
				var_250_bool = var_244_bool == 0; //@nz
				if(var_250_bool != 0) {
					var_230_bool = 1;
				}
			}
			if(var_230_bool != 0) {
				var_251_bool = 0; var_252_object = Obj();
				var_252_object = var_1_object;
				func_7077(var_252_object);
				var_257_bool = var_251_bool == 0; //@nz
				if(var_257_bool != 0) {
					var_229_bool = 1;
				}
			}
			if(var_229_bool != 0) {
				@@@var_0_object:AddReply((int)512734, (int)11840, (int)13928);
			}
			@@@var_0_object:AddReply((int)503642, (int)-1, (int)3944);
			return 0;
		}
		var_265_bool = var_46_bool == (int)11840;
		if(var_265_bool != 0) {
			var_266_string = "";
			func_590(var_47_cvector, "Hope");
			@@@var_0_object:SetMessage((int)510719);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510720, (int)11842, (int)11841);
			return 0;
		}
		var_272_bool = var_46_bool == (int)11842;
		if(var_272_bool != 0) {
			var_273_string = "";
			func_590(var_47_cvector, "Hope");
			@@@var_0_object:SetMessage((int)510721);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510722, (int)11844, (int)11843);
			@@@var_0_object:AddReply((int)510733, (int)11844, (int)11855);
			@@@var_0_object:AddReply((int)510734, (int)11858, (int)11857);
			return 0;
		}
		var_285_bool = var_46_bool == (int)11858;
		if(var_285_bool != 0) {
			var_286_string = "";
			func_590(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510735);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510736, (int)11844, (int)11859);
			@@@var_0_object:AddReply((int)510737, (int)11844, (int)11861);
			return 0;
		}
		var_295_bool = var_46_bool == (int)11844;
		if(var_295_bool != 0) {
			var_296_string = "";
			func_590(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)510723);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510724, (int)11846, (int)11845);
			@@@var_0_object:AddReply((int)510728, (int)11846, (int)11849);
			@@@var_0_object:AddReply((int)510729, (int)11852, (int)11851);
			return 0;
		}
		var_308_bool = var_46_bool == (int)11852;
		if(var_308_bool != 0) {
			var_309_string = "";
			func_590(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510730);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510731, (int)-1, (int)11853);
			@@@var_0_object:AddReply((int)510732, (int)-1, (int)11854);
			return 0;
		}
		var_318_bool = var_46_bool == (int)11846;
		if(var_318_bool != 0) {
			var_319_string = "";
			func_590(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)510725);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510726, (int)-1, (int)11847);
			@@@var_0_object:AddReply((int)510727, (int)-1, (int)11848);
			return 0;
		}
		var_328_bool = var_46_bool == (int)11803;
		if(var_328_bool != 0) {
			var_329_string = "";
			func_590(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)510689);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510690, (int)11805, (int)11804);
			@@@var_0_object:AddReply((int)510715, (int)11807, (int)11835);
			@@@var_0_object:AddReply((int)510716, (int)11838, (int)11837);
			return 0;
		}
		var_341_bool = var_46_bool == (int)11838;
		if(var_341_bool != 0) {
			var_342_string = "";
			func_590(var_47_cvector, "Independence");
			@@@var_0_object:SetMessage((int)510717);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510718, (int)-1, (int)11839);
			return 0;
		}
		var_348_bool = var_46_bool == (int)11805;
		if(var_348_bool != 0) {
			var_349_string = "";
			func_590(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)510691);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510692, (int)11807, (int)11806);
			@@@var_0_object:AddReply((int)510711, (int)11830, (int)11829);
			return 0;
		}
		var_358_bool = var_46_bool == (int)11830;
		if(var_358_bool != 0) {
			var_359_string = "";
			func_590(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)510712);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510713, (int)11807, (int)11831);
			@@@var_0_object:AddReply((int)510714, (int)11807, (int)11833);
			return 0;
		}
		var_368_bool = var_46_bool == (int)11807;
		if(var_368_bool != 0) {
			var_369_string = "";
			func_590(var_47_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)510693);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510694, (int)11809, (int)11808);
			@@@var_0_object:AddReply((int)510701, (int)11809, (int)11816);
			@@@var_0_object:AddReply((int)510702, (int)11818, (int)11817);
			return 0;
		}
		var_381_bool = var_46_bool == (int)11818;
		if(var_381_bool != 0) {
			var_382_string = "";
			func_590(var_47_cvector, "Independence");
			@@@var_0_object:SetMessage((int)510703);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510704, (int)11820, (int)11819);
			@@@var_0_object:AddReply((int)510710, (int)11820, (int)11827);
			return 0;
		}
		var_391_bool = var_46_bool == (int)11820;
		if(var_391_bool != 0) {
			var_392_string = "";
			func_590(var_47_cvector, "Independence");
			@@@var_0_object:SetMessage((int)510705);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510706, (int)11822, (int)11821);
			@@@var_0_object:AddReply((int)510709, (int)11809, (int)11825);
			return 0;
		}
		var_401_bool = var_46_bool == (int)11822;
		if(var_401_bool != 0) {
			var_402_string = "";
			func_590(var_47_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)510707);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510708, (int)11809, (int)11823);
			return 0;
		}
		var_408_bool = var_46_bool == (int)11809;
		if(var_408_bool != 0) {
			var_409_string = "";
			func_590(var_47_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)510695);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510696, (int)11811, (int)11810);
			@@@var_0_object:AddReply((int)510700, (int)11811, (int)11814);
			return 0;
		}
		var_418_bool = var_46_bool == (int)11811;
		if(var_418_bool != 0) {
			var_419_string = "";
			func_590(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)510697);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)510698, (int)-1, (int)11812);
			@@@var_0_object:AddReply((int)510699, (int)-1, (int)11813);
			return 0;
		}
		var_428_bool = var_46_bool == (int)3945;
		if(var_428_bool != 0) {
			var_429_string = "";
			func_590(var_47_cvector, "Independence");
			@@@var_0_object:SetMessage((int)503643);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503644, (int)3948, (int)3946);
			@@@var_0_object:AddReply((int)503645, (int)3951, (int)3947);
			return 0;
		}
		var_438_bool = var_46_bool == (int)3951;
		if(var_438_bool != 0) {
			var_439_string = "";
			func_590(var_47_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)503648);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503649, (int)3954, (int)3952);
			@@@var_0_object:AddReply((int)503650, (int)-1, (int)3953);
			return 0;
		}
		var_448_bool = var_46_bool == (int)3954;
		if(var_448_bool != 0) {
			var_449_string = "";
			func_590(var_47_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)503651);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503654, (int)3958, (int)3957);
			return 0;
		}
		var_455_bool = var_46_bool == (int)3958;
		if(var_455_bool != 0) {
			var_456_string = "";
			func_590(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)503655);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503656, (int)3948, (int)3959);
			return 0;
		}
		var_462_bool = var_46_bool == (int)3948;
		if(var_462_bool != 0) {
			var_463_string = "";
			func_590(var_47_cvector, "Independence");
			@@@var_0_object:SetMessage((int)503646);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503647, (int)3955, (int)3950);
			@@@var_0_object:AddReply((int)503657, (int)3955, (int)3961);
			return 0;
		}
		var_472_bool = var_46_bool == (int)3955;
		if(var_472_bool != 0) {
			var_473_string = "";
			func_590(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)503652);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503653, (int)3963, (int)3956);
			return 0;
		}
		var_479_bool = var_46_bool == (int)3963;
		if(var_479_bool != 0) {
			var_480_string = "";
			func_590(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)503658);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)503659, (int)-1, (int)3964);
			@@@var_0_object:AddReply((int)503660, (int)-1, (int)3965);
			return 0;
		}
		var_3_string = true;
		var_488_bool = 0;
		func_6335(var_488_bool);
		if(var_488_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x265";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_6169();
		var_51_bool = var_47_cvector == (int)8122;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_6524();
			var_56_object = Obj(); var_57_object = Obj();
			var_56_object = var_1_object;
			var_57_object = var_0_object;
			func_6363();
			var_60_object = Obj(); var_61_object = Obj();
			var_60_object = var_1_object;
			var_61_object = var_0_object;
			func_6574(var_61_object);
		}
		var_82_bool = var_47_cvector == (int)8131;
		if(var_82_bool != 0) {
			var_83_object = Obj(); var_84_object = Obj();
			var_83_object = var_1_object;
			var_84_object = var_0_object;
			func_6524();
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_6363();
			var_87_object = Obj(); var_88_object = Obj();
			var_87_object = var_1_object;
			var_88_object = var_0_object;
			func_6574(var_88_object);
		}
		var_90_bool = var_47_cvector == (int)35399;
		if(var_90_bool != 0) {
			var_91_object = Obj(); var_92_object = Obj();
			var_91_object = var_1_object;
			var_92_object = var_0_object;
			func_6496();
		}
		var_96_bool = var_46_bool == (int)7620;
		if(var_96_bool != 0) {
			var_97_string = "";
			func_1522(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)506914);
			@@@var_0_object:ClearReplies();
			var_115_bool = 0;
			var_115_bool = 0;
			var_116_bool = 0; var_117_object = Obj();
			var_117_object = var_1_object;
			func_6909(var_117_object);
			if(var_116_bool != 0) {
				var_124_bool = 0; var_125_object = Obj();
				var_125_object = var_1_object;
				func_6921(var_125_object);
				if(var_124_bool != 0) {
					var_115_bool = 1;
				}
			}
			if(var_115_bool != 0) {
				@@@var_0_object:AddReply((int)506915, (int)7622, (int)7621);
			}
			var_133_bool = 0;
			var_133_bool = 0;
			var_134_bool = 0; var_135_object = Obj();
			var_135_object = var_1_object;
			func_6863(var_135_object);
			if(var_134_bool != 0) {
				var_150_bool = 0; var_151_object = Obj();
				var_151_object = var_1_object;
				func_6897(var_151_object);
				if(var_150_bool != 0) {
					var_133_bool = 1;
				}
			}
			if(var_133_bool != 0) {
				@@@var_0_object:AddReply((int)533849, (int)10203, (int)35399);
			}
			@@@var_0_object:AddReply((int)507747, (int)-1, (int)8548);
			@@@var_0_object:AddReply((int)533869, (int)-1, (int)35422);
			return 0;
		}
		var_166_bool = var_46_bool == (int)10203;
		if(var_166_bool != 0) {
			var_167_string = "";
			func_1522(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509294);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509295, (int)10205, (int)10204);
			@@@var_0_object:AddReply((int)509306, (int)10205, (int)10216);
			return 0;
		}
		var_176_bool = var_46_bool == (int)10205;
		if(var_176_bool != 0) {
			var_177_string = "";
			func_1522(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509296);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509297, (int)10207, (int)10206);
			@@@var_0_object:AddReply((int)509305, (int)10207, (int)10214);
			return 0;
		}
		var_186_bool = var_46_bool == (int)10207;
		if(var_186_bool != 0) {
			var_187_string = "";
			func_1522(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)509298);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509299, (int)10209, (int)10208);
			@@@var_0_object:AddReply((int)509303, (int)10213, (int)10212);
			return 0;
		}
		var_196_bool = var_46_bool == (int)10213;
		if(var_196_bool != 0) {
			var_197_string = "";
			func_1522(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)509304);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535340, (int)10209, (int)37022);
			return 0;
		}
		var_203_bool = var_46_bool == (int)10209;
		if(var_203_bool != 0) {
			var_204_string = "";
			func_1522(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)509300);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)509301, (int)-1, (int)10210);
			@@@var_0_object:AddReply((int)509302, (int)-1, (int)10211);
			return 0;
		}
		var_213_bool = var_46_bool == (int)7622;
		if(var_213_bool != 0) {
			var_214_string = "";
			func_1522(var_47_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)506916);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506917, (int)8117, (int)7623);
			@@@var_0_object:AddReply((int)507365, (int)8124, (int)8123);
			return 0;
		}
		var_223_bool = var_46_bool == (int)8124;
		if(var_223_bool != 0) {
			var_224_string = "";
			func_1522(var_47_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)507366);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507367, (int)8121, (int)8125);
			@@@var_0_object:AddReply((int)507368, (int)8127, (int)8126);
			return 0;
		}
		var_233_bool = var_46_bool == (int)8127;
		if(var_233_bool != 0) {
			var_234_string = "";
			func_1522(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507369);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507370, (int)8121, (int)8128);
			return 0;
		}
		var_240_bool = var_46_bool == (int)8117;
		if(var_240_bool != 0) {
			var_241_string = "";
			func_1522(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)507359);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507360, (int)35425, (int)8118);
			@@@var_0_object:AddReply((int)507372, (int)8121, (int)8132);
			return 0;
		}
		var_250_bool = var_46_bool == (int)35425;
		if(var_250_bool != 0) {
			var_251_string = "";
			func_1522(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)533872);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533873, (int)8119, (int)35426);
			@@@var_0_object:AddReply((int)533874, (int)8121, (int)35427);
			return 0;
		}
		var_260_bool = var_46_bool == (int)8119;
		if(var_260_bool != 0) {
			var_261_string = "";
			func_1522(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)507361);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507362, (int)8121, (int)8120);
			@@@var_0_object:AddReply((int)533870, (int)35424, (int)35423);
			return 0;
		}
		var_270_bool = var_46_bool == (int)35424;
		if(var_270_bool != 0) {
			var_271_string = "";
			func_1522(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533871);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533875, (int)8121, (int)35429);
			return 0;
		}
		var_277_bool = var_46_bool == (int)8121;
		if(var_277_bool != 0) {
			var_278_string = "";
			func_1522(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)507363);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507364, (int)-1, (int)8122);
			@@@var_0_object:AddReply((int)507371, (int)-1, (int)8131);
			return 0;
		}
		var_3_string = true;
		var_286_bool = 0;
		func_6335(var_286_bool);
		if(var_286_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x609";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_6169();
		var_51_bool = var_47_cvector == (int)12515;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_6584();
		}
		var_57_bool = var_47_cvector == (int)12527;
		if(var_57_bool != 0) {
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_object;
			func_6590();
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_6596(var_63_object);
			var_128_object = Obj(); var_129_object = Obj();
			var_128_object = var_1_object;
			var_129_object = var_0_object;
			func_6722(var_129_object);
			var_152_object = Obj(); var_153_object = Obj();
			var_152_object = var_1_object;
			var_153_object = var_0_object;
			func_6733(var_153_object);
			var_158_object = Obj(); var_159_object = Obj();
			var_158_object = var_1_object;
			var_159_object = var_0_object;
			func_6744(var_159_object);
			var_164_object = Obj(); var_165_object = Obj();
			var_164_object = var_1_object;
			var_165_object = var_0_object;
			func_6369();
		}
		var_169_bool = var_47_cvector == (int)12677;
		if(var_169_bool != 0) {
			var_170_object = Obj(); var_171_object = Obj();
			var_170_object = var_1_object;
			var_171_object = var_0_object;
			func_6590();
			var_172_object = Obj(); var_173_object = Obj();
			var_172_object = var_1_object;
			var_173_object = var_0_object;
			func_6596(var_173_object);
			var_174_object = Obj(); var_175_object = Obj();
			var_174_object = var_1_object;
			var_175_object = var_0_object;
			func_6369();
			var_176_object = Obj(); var_177_object = Obj();
			var_176_object = var_1_object;
			var_177_object = var_0_object;
			func_6722(var_177_object);
			var_178_object = Obj(); var_179_object = Obj();
			var_178_object = var_1_object;
			var_179_object = var_0_object;
			func_6744(var_179_object);
			var_180_object = Obj(); var_181_object = Obj();
			var_180_object = var_1_object;
			var_181_object = var_0_object;
			func_6733(var_181_object);
		}
		var_183_bool = var_47_cvector == (int)13071;
		if(var_183_bool != 0) {
			var_184_object = Obj(); var_185_object = Obj();
			var_184_object = var_1_object;
			var_185_object = var_0_object;
			func_6664();
			var_188_object = Obj(); var_189_object = Obj();
			var_188_object = var_1_object;
			var_189_object = var_0_object;
			func_6502(var_189_object);
			var_194_object = Obj(); var_195_object = Obj();
			var_194_object = var_1_object;
			var_195_object = var_0_object;
			func_6369();
		}
		var_197_bool = var_46_bool == (int)12514;
		if(var_197_bool != 0) {
			var_198_string = "";
			func_2144(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)511320);
			@@@var_0_object:ClearReplies();
			var_216_bool = 0;
			var_216_bool = 0;
			var_217_bool = 0; var_218_object = Obj();
			var_218_object = var_1_object;
			func_6945(var_218_object);
			if(var_217_bool != 0) {
				var_223_bool = 0; var_224_object = Obj();
				var_224_object = var_1_object;
				func_6933(var_224_object);
				if(var_223_bool != 0) {
					var_216_bool = 1;
				}
			}
			if(var_216_bool != 0) {
				@@@var_0_object:AddReply((int)511321, (int)12516, (int)12515);
			}
			var_232_bool = 0;
			var_232_bool = 0;
			var_233_bool = 0; var_234_object = Obj();
			var_234_object = var_1_object;
			func_6957(var_234_object);
			var_239_bool = var_233_bool == 0; //@nz
			if(var_239_bool != 0) {
				var_240_bool = 0; var_241_object = Obj();
				var_241_object = var_1_object;
				func_6933(var_241_object);
				if(var_240_bool != 0) {
					var_232_bool = 1;
				}
			}
			if(var_232_bool != 0) {
				@@@var_0_object:AddReply((int)511469, (int)12676, (int)12675);
			}
			var_245_bool = 0;
			var_245_bool = 0;
			var_246_bool = 0; var_247_object = Obj();
			var_247_object = var_1_object;
			func_6981(var_247_object);
			if(var_246_bool != 0) {
				var_252_bool = 0; var_253_object = Obj();
				var_253_object = var_1_object;
				func_6969(var_253_object);
				if(var_252_bool != 0) {
					var_245_bool = 1;
				}
			}
			if(var_245_bool != 0) {
				@@@var_0_object:AddReply((int)511856, (int)13070, (int)13069);
			}
			@@@var_0_object:AddReply((int)511472, (int)-1, (int)12678);
			return 0;
		}
		var_265_bool = var_46_bool == (int)13070;
		if(var_265_bool != 0) {
			var_266_string = "";
			func_2144(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511857);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536100, (int)37854, (int)37852);
			@@@var_0_object:AddReply((int)536101, (int)37854, (int)37853);
			return 0;
		}
		var_275_bool = var_46_bool == (int)37854;
		if(var_275_bool != 0) {
			var_276_string = "";
			func_2144(var_47_cvector, "Hope");
			@@@var_0_object:SetMessage((int)536102);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511858, (int)-1, (int)13071);
			return 0;
		}
		var_282_bool = var_46_bool == (int)12676;
		if(var_282_bool != 0) {
			var_283_string = "";
			func_2144(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511470);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511471, (int)-1, (int)12677);
			return 0;
		}
		var_289_bool = var_46_bool == (int)12516;
		if(var_289_bool != 0) {
			var_290_string = "";
			func_2144(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)511322);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538498, (int)40388, (int)40387);
			@@@var_0_object:AddReply((int)511323, (int)12518, (int)12517);
			return 0;
		}
		var_299_bool = var_46_bool == (int)12518;
		if(var_299_bool != 0) {
			var_300_string = "";
			func_2144(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)511324);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511455, (int)12522, (int)12659);
			return 0;
		}
		var_306_bool = var_46_bool == (int)40388;
		if(var_306_bool != 0) {
			var_307_string = "";
			func_2144(var_47_cvector, "Hope");
			@@@var_0_object:SetMessage((int)538499);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511429, (int)12522, (int)12629);
			return 0;
		}
		var_313_bool = var_46_bool == (int)12522;
		if(var_313_bool != 0) {
			var_314_string = "";
			func_2144(var_47_cvector, "Hope");
			@@@var_0_object:SetMessage((int)511328);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538500, (int)40391, (int)40390);
			@@@var_0_object:AddReply((int)511456, (int)12661, (int)12660);
			return 0;
		}
		var_323_bool = var_46_bool == (int)12661;
		if(var_323_bool != 0) {
			var_324_string = "";
			func_2144(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511457);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511458, (int)12524, (int)12662);
			return 0;
		}
		var_330_bool = var_46_bool == (int)40391;
		if(var_330_bool != 0) {
			var_331_string = "";
			func_2144(var_47_cvector, "Hope");
			@@@var_0_object:SetMessage((int)538501);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511329, (int)12524, (int)12523);
			return 0;
		}
		var_337_bool = var_46_bool == (int)12524;
		if(var_337_bool != 0) {
			var_338_string = "";
			func_2144(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511330);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511331, (int)12526, (int)12525);
			return 0;
		}
		var_344_bool = var_46_bool == (int)12526;
		if(var_344_bool != 0) {
			var_345_string = "";
			func_2144(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511332);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511333, (int)-1, (int)12527);
			@@@var_0_object:AddReply((int)511464, (int)12673, (int)12668);
			return 0;
		}
		var_354_bool = var_46_bool == (int)12673;
		if(var_354_bool != 0) {
			var_355_string = "";
			func_2144(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)511467);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511468, (int)-1, (int)12674);
			return 0;
		}
		var_3_string = true;
		var_360_bool = 0;
		func_6335(var_360_bool);
		if(var_360_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x877";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_6169();
		var_51_bool = var_47_cvector == (int)33079;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_6375();
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_object;
			var_96_object = var_0_object;
			func_6558(var_96_object);
		}
		var_122_bool = var_47_cvector == (int)34682;
		if(var_122_bool != 0) {
			var_123_object = Obj(); var_124_object = Obj();
			var_123_object = var_1_object;
			var_124_object = var_0_object;
			func_6465();
		}
		var_128_bool = var_47_cvector == (int)34711;
		if(var_128_bool != 0) {
			var_129_object = Obj(); var_130_object = Obj();
			var_129_object = var_1_object;
			var_130_object = var_0_object;
			func_6471();
			var_144_object = Obj(); var_145_object = Obj();
			var_144_object = var_1_object;
			var_145_object = var_0_object;
			func_6546();
		}
		var_149_bool = var_47_cvector == (int)34710;
		if(var_149_bool != 0) {
			var_150_object = Obj(); var_151_object = Obj();
			var_150_object = var_1_object;
			var_151_object = var_0_object;
			func_6471();
			var_152_object = Obj(); var_153_object = Obj();
			var_152_object = var_1_object;
			var_153_object = var_0_object;
			func_6546();
		}
		var_155_bool = var_47_cvector == (int)34969;
		if(var_155_bool != 0) {
			var_156_object = Obj(); var_157_object = Obj();
			var_156_object = var_1_object;
			var_157_object = var_0_object;
			func_6471();
			var_158_object = Obj(); var_159_object = Obj();
			var_158_object = var_1_object;
			var_159_object = var_0_object;
			func_6546();
		}
		var_161_bool = var_47_cvector == (int)33076;
		if(var_161_bool != 0) {
			var_162_object = Obj(); var_163_object = Obj();
			var_162_object = var_1_object;
			var_163_object = var_0_object;
			func_6398();
		}
		var_167_bool = var_47_cvector == (int)33007;
		if(var_167_bool != 0) {
			var_168_object = Obj(); var_169_object = Obj();
			var_168_object = var_1_object;
			var_169_object = var_0_object;
			func_6337();
			var_202_object = Obj(); var_203_object = Obj();
			var_202_object = var_1_object;
			var_203_object = var_0_object;
			func_6530(var_203_object);
		}
		var_210_bool = var_47_cvector == (int)34700;
		if(var_210_bool != 0) {
			var_211_object = Obj(); var_212_object = Obj();
			var_211_object = var_1_object;
			var_212_object = var_0_object;
			func_6404();
		}
		var_216_bool = var_47_cvector == (int)34877;
		if(var_216_bool != 0) {
			var_217_object = Obj(); var_218_object = Obj();
			var_217_object = var_1_object;
			var_218_object = var_0_object;
			func_6459();
		}
		var_222_bool = var_46_bool == (int)33036;
		if(var_222_bool != 0) {
			var_223_string = "";
			func_2806(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531655);
			@@@var_0_object:ClearReplies();
			var_241_bool = 0; var_242_object = Obj();
			var_242_object = var_1_object;
			func_6755(var_242_object);
			if(var_241_bool != 0) {
				@@@var_0_object:AddReply((int)531693, (int)34875, (int)33077);
			}
			var_252_bool = 0;
			var_252_bool = 0;
			var_253_bool = 0; var_254_object = Obj();
			var_254_object = var_1_object;
			func_6851(var_254_object);
			if(var_253_bool != 0) {
				var_259_bool = 0; var_260_object = Obj();
				var_260_object = var_1_object;
				func_7089(var_260_object);
				if(var_259_bool != 0) {
					var_252_bool = 1;
				}
			}
			if(var_252_bool != 0) {
				@@@var_0_object:AddReply((int)533163, (int)34683, (int)34682);
			}
			var_278_bool = 0;
			var_278_bool = 0;
			var_279_bool = 0; var_280_object = Obj();
			var_280_object = var_1_object;
			func_6767(var_280_object);
			if(var_279_bool != 0) {
				var_285_bool = 0; var_286_object = Obj();
				var_286_object = var_1_object;
				func_7089(var_286_object);
				if(var_285_bool != 0) {
					var_278_bool = 1;
				}
			}
			if(var_278_bool != 0) {
				@@@var_0_object:AddReply((int)531692, (int)32998, (int)33076);
			}
			var_290_bool = 0;
			var_290_bool = 0;
			var_291_bool = 0; var_292_object = Obj();
			var_292_object = var_1_object;
			func_6779(var_292_object);
			if(var_291_bool != 0) {
				var_297_bool = 0; var_298_object = Obj();
				var_298_object = var_1_object;
				func_6851(var_298_object);
				var_299_bool = var_297_bool == 0; //@nz
				if(var_299_bool != 0) {
					var_290_bool = 1;
				}
			}
			if(var_290_bool != 0) {
				@@@var_0_object:AddReply((int)533180, (int)34704, (int)34700);
			}
			var_303_bool = 0; var_304_object = Obj();
			var_304_object = var_1_object;
			func_6839(var_304_object);
			if(var_303_bool != 0) {
				@@@var_0_object:AddReply((int)533375, (int)34878, (int)34877);
			}
			@@@var_0_object:AddReply((int)531656, (int)-1, (int)33037);
			@@@var_0_object:AddReply((int)533162, (int)-1, (int)34681);
			return 0;
		}
		var_319_bool = var_46_bool == (int)34878;
		if(var_319_bool != 0) {
			var_320_string = "";
			func_2806(var_47_cvector, "Hope");
			@@@var_0_object:SetMessage((int)533376);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533377, (int)34880, (int)34879);
			@@@var_0_object:AddReply((int)533453, (int)-1, (int)34963);
			return 0;
		}
		var_329_bool = var_46_bool == (int)34880;
		if(var_329_bool != 0) {
			var_330_string = "";
			func_2806(var_47_cvector, "Hope");
			@@@var_0_object:SetMessage((int)533378);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533379, (int)34882, (int)34881);
			return 0;
		}
		var_336_bool = var_46_bool == (int)34882;
		if(var_336_bool != 0) {
			var_337_string = "";
			func_2806(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533380);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533381, (int)-1, (int)34883);
			return 0;
		}
		var_343_bool = var_46_bool == (int)34704;
		if(var_343_bool != 0) {
			var_344_string = "";
			func_2806(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533184);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533382, (int)34885, (int)34884);
			@@@var_0_object:AddReply((int)533452, (int)-1, (int)34961);
			return 0;
		}
		var_353_bool = var_46_bool == (int)34885;
		if(var_353_bool != 0) {
			var_354_string = "";
			func_2806(var_47_cvector, "Independence");
			@@@var_0_object:SetMessage((int)533383);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533384, (int)34887, (int)34886);
			return 0;
		}
		var_360_bool = var_46_bool == (int)34887;
		if(var_360_bool != 0) {
			var_361_string = "";
			func_2806(var_47_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)533385);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533386, (int)34889, (int)34888);
			@@@var_0_object:AddReply((int)533391, (int)34894, (int)34893);
			return 0;
		}
		var_370_bool = var_46_bool == (int)34894;
		if(var_370_bool != 0) {
			var_371_string = "";
			func_2806(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533392);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533393, (int)34889, (int)34895);
			return 0;
		}
		var_377_bool = var_46_bool == (int)34889;
		if(var_377_bool != 0) {
			var_378_string = "";
			func_2806(var_47_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)533387);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533388, (int)-1, (int)34890);
			return 0;
		}
		var_384_bool = var_46_bool == (int)32998;
		if(var_384_bool != 0) {
			var_385_string = "";
			func_2806(var_47_cvector, "Hope");
			@@@var_0_object:SetMessage((int)531626);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531627, (int)33002, (int)32999);
			@@@var_0_object:AddReply((int)531653, (int)33002, (int)33032);
			@@@var_0_object:AddReply((int)531654, (int)33002, (int)33034);
			return 0;
		}
		var_397_bool = var_46_bool == (int)33002;
		if(var_397_bool != 0) {
			var_398_string = "";
			func_2806(var_47_cvector, "Hope");
			@@@var_0_object:SetMessage((int)531630);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531631, (int)33004, (int)33003);
			@@@var_0_object:AddReply((int)531647, (int)34896, (int)33022);
			return 0;
		}
		var_407_bool = var_46_bool == (int)34896;
		if(var_407_bool != 0) {
			var_408_string = "";
			func_2806(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533394);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533395, (int)34898, (int)34897);
			@@@var_0_object:AddReply((int)533457, (int)33006, (int)34970);
			return 0;
		}
		var_417_bool = var_46_bool == (int)34898;
		if(var_417_bool != 0) {
			var_418_string = "";
			func_2806(var_47_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)533396);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533397, (int)33006, (int)34899);
			@@@var_0_object:AddReply((int)533399, (int)34902, (int)34901);
			return 0;
		}
		var_427_bool = var_46_bool == (int)34902;
		if(var_427_bool != 0) {
			var_428_string = "";
			func_2806(var_47_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)533400);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533401, (int)33006, (int)34903);
			return 0;
		}
		var_434_bool = var_46_bool == (int)33004;
		if(var_434_bool != 0) {
			var_435_string = "";
			func_2806(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)531632);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531633, (int)33006, (int)33005);
			return 0;
		}
		var_441_bool = var_46_bool == (int)33006;
		if(var_441_bool != 0) {
			var_442_string = "";
			func_2806(var_47_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)531634);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533458, (int)34975, (int)34974);
			return 0;
		}
		var_448_bool = var_46_bool == (int)34975;
		if(var_448_bool != 0) {
			var_449_string = "";
			func_2806(var_47_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)533459);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531635, (int)-1, (int)33007);
			@@@var_0_object:AddReply((int)531639, (int)-1, (int)33011);
			return 0;
		}
		var_458_bool = var_46_bool == (int)34683;
		if(var_458_bool != 0) {
			var_459_string = "";
			func_2806(var_47_cvector, "Hope");
			@@@var_0_object:SetMessage((int)533164);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533169, (int)34687, (int)34688);
			@@@var_0_object:AddReply((int)533165, (int)34685, (int)34684);
			return 0;
		}
		var_468_bool = var_46_bool == (int)34685;
		if(var_468_bool != 0) {
			var_469_string = "";
			func_2806(var_47_cvector, "Hope");
			@@@var_0_object:SetMessage((int)533166);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533422, (int)34927, (int)34926);
			@@@var_0_object:AddReply((int)533167, (int)34687, (int)34686);
			return 0;
		}
		var_478_bool = var_46_bool == (int)34927;
		if(var_478_bool != 0) {
			var_479_string = "";
			func_2806(var_47_cvector, "Independence");
			@@@var_0_object:SetMessage((int)533423);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533424, (int)34929, (int)34928);
			@@@var_0_object:AddReply((int)533435, (int)34929, (int)34940);
			return 0;
		}
		var_488_bool = var_46_bool == (int)34929;
		if(var_488_bool != 0) {
			var_489_string = "";
			func_2806(var_47_cvector, "Independence");
			@@@var_0_object:SetMessage((int)533425);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533426, (int)34931, (int)34930);
			@@@var_0_object:AddReply((int)533432, (int)34937, (int)34936);
			return 0;
		}
		var_498_bool = var_46_bool == (int)34937;
		if(var_498_bool != 0) {
			var_499_string = "";
			func_2806(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533433);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533434, (int)34931, (int)34938);
			return 0;
		}
		var_505_bool = var_46_bool == (int)34931;
		if(var_505_bool != 0) {
			var_506_string = "";
			func_2806(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533427);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533428, (int)34933, (int)34932);
			@@@var_0_object:AddReply((int)533454, (int)34687, (int)34964);
			return 0;
		}
		var_515_bool = var_46_bool == (int)34933;
		if(var_515_bool != 0) {
			var_516_string = "";
			func_2806(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533429);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533431, (int)34687, (int)34935);
			@@@var_0_object:AddReply((int)533430, (int)-1, (int)34934);
			return 0;
		}
		var_525_bool = var_46_bool == (int)34687;
		if(var_525_bool != 0) {
			var_526_string = "";
			func_2806(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533168);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533170, (int)34691, (int)34690);
			return 0;
		}
		var_532_bool = var_46_bool == (int)34691;
		if(var_532_bool != 0) {
			var_533_string = "";
			func_2806(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533171);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533174, (int)34695, (int)34694);
			@@@var_0_object:AddReply((int)533172, (int)34693, (int)34692);
			return 0;
		}
		var_542_bool = var_46_bool == (int)34693;
		if(var_542_bool != 0) {
			var_543_string = "";
			func_2806(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533173);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533455, (int)34697, (int)34967);
			return 0;
		}
		var_549_bool = var_46_bool == (int)34695;
		if(var_549_bool != 0) {
			var_550_string = "";
			func_2806(var_47_cvector, "Hope");
			@@@var_0_object:SetMessage((int)533175);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533176, (int)34697, (int)34696);
			return 0;
		}
		var_556_bool = var_46_bool == (int)34697;
		if(var_556_bool != 0) {
			var_557_string = "";
			func_2806(var_47_cvector, "Hope");
			@@@var_0_object:SetMessage((int)533177);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533186, (int)34707, (int)34706);
			@@@var_0_object:AddReply((int)533456, (int)-1, (int)34969);
			return 0;
		}
		var_566_bool = var_46_bool == (int)34707;
		if(var_566_bool != 0) {
			var_567_string = "";
			func_2806(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533187);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533188, (int)34709, (int)34708);
			return 0;
		}
		var_573_bool = var_46_bool == (int)34709;
		if(var_573_bool != 0) {
			var_574_string = "";
			func_2806(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533189);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533191, (int)-1, (int)34711);
			@@@var_0_object:AddReply((int)533190, (int)-1, (int)34710);
			return 0;
		}
		var_583_bool = var_46_bool == (int)34875;
		if(var_583_bool != 0) {
			var_584_string = "";
			func_2806(var_47_cvector, "Hope");
			@@@var_0_object:SetMessage((int)533373);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533374, (int)34714, (int)34876);
			@@@var_0_object:AddReply((int)533408, (int)34911, (int)34910);
			return 0;
		}
		var_593_bool = var_46_bool == (int)34911;
		if(var_593_bool != 0) {
			var_594_string = "";
			func_2806(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)533409);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533410, (int)34913, (int)34912);
			return 0;
		}
		var_600_bool = var_46_bool == (int)34913;
		if(var_600_bool != 0) {
			var_601_string = "";
			func_2806(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)533411);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533412, (int)34915, (int)34914);
			return 0;
		}
		var_607_bool = var_46_bool == (int)34915;
		if(var_607_bool != 0) {
			var_608_string = "";
			func_2806(var_47_cvector, "Hope");
			@@@var_0_object:SetMessage((int)533413);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533414, (int)34917, (int)34916);
			@@@var_0_object:AddReply((int)533419, (int)34917, (int)34922);
			return 0;
		}
		var_617_bool = var_46_bool == (int)34917;
		if(var_617_bool != 0) {
			var_618_string = "";
			func_2806(var_47_cvector, "Hope");
			@@@var_0_object:SetMessage((int)533415);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533416, (int)34919, (int)34918);
			@@@var_0_object:AddReply((int)533460, (int)34919, (int)34976);
			return 0;
		}
		var_627_bool = var_46_bool == (int)34919;
		if(var_627_bool != 0) {
			var_628_string = "";
			func_2806(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533417);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533418, (int)34714, (int)34920);
			@@@var_0_object:AddReply((int)533461, (int)34945, (int)34978);
			return 0;
		}
		var_637_bool = var_46_bool == (int)34714;
		if(var_637_bool != 0) {
			var_638_string = "";
			func_2806(var_47_cvector, "Hope");
			@@@var_0_object:SetMessage((int)533194);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533405, (int)34908, (int)34907);
			@@@var_0_object:AddReply((int)533439, (int)34947, (int)34946);
			return 0;
		}
		var_647_bool = var_46_bool == (int)34947;
		if(var_647_bool != 0) {
			var_648_string = "";
			func_2806(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533440);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533441, (int)34908, (int)34948);
			return 0;
		}
		var_654_bool = var_46_bool == (int)34908;
		if(var_654_bool != 0) {
			var_655_string = "";
			func_2806(var_47_cvector, "Independence");
			@@@var_0_object:SetMessage((int)533406);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533442, (int)34951, (int)34950);
			return 0;
		}
		var_661_bool = var_46_bool == (int)34951;
		if(var_661_bool != 0) {
			var_662_string = "";
			func_2806(var_47_cvector, "Independence");
			@@@var_0_object:SetMessage((int)533443);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533444, (int)34953, (int)34952);
			return 0;
		}
		var_668_bool = var_46_bool == (int)34953;
		if(var_668_bool != 0) {
			var_669_string = "";
			func_2806(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533445);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533437, (int)34981, (int)34944);
			@@@var_0_object:AddReply((int)533446, (int)34955, (int)34954);
			return 0;
		}
		var_678_bool = var_46_bool == (int)34955;
		if(var_678_bool != 0) {
			var_679_string = "";
			func_2806(var_47_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)533447);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533448, (int)34957, (int)34956);
			return 0;
		}
		var_685_bool = var_46_bool == (int)34957;
		if(var_685_bool != 0) {
			var_686_string = "";
			func_2806(var_47_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)533449);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533450, (int)34945, (int)34958);
			@@@var_0_object:AddReply((int)533466, (int)34986, (int)34985);
			return 0;
		}
		var_695_bool = var_46_bool == (int)34986;
		if(var_695_bool != 0) {
			var_696_string = "";
			func_2806(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533467);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533468, (int)34981, (int)34987);
			return 0;
		}
		var_702_bool = var_46_bool == (int)34981;
		if(var_702_bool != 0) {
			var_703_string = "";
			func_2806(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533462);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533463, (int)34983, (int)34982);
			@@@var_0_object:AddReply((int)533469, (int)34990, (int)34989);
			return 0;
		}
		var_712_bool = var_46_bool == (int)34990;
		if(var_712_bool != 0) {
			var_713_string = "";
			func_2806(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533470);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533471, (int)34983, (int)34991);
			return 0;
		}
		var_719_bool = var_46_bool == (int)34983;
		if(var_719_bool != 0) {
			var_720_string = "";
			func_2806(var_47_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)533464);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533465, (int)34945, (int)34984);
			@@@var_0_object:AddReply((int)533472, (int)34945, (int)34994);
			return 0;
		}
		var_729_bool = var_46_bool == (int)34945;
		if(var_729_bool != 0) {
			var_730_string = "";
			func_2806(var_47_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)533438);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533473, (int)34997, (int)34996);
			return 0;
		}
		var_736_bool = var_46_bool == (int)34997;
		if(var_736_bool != 0) {
			var_737_string = "";
			func_2806(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533474);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)531695, (int)-1, (int)33079);
			return 0;
		}
		var_3_string = true;
		var_742_bool = 0;
		func_6335(var_742_bool);
		if(var_742_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb0d";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_6169();
		var_51_bool = var_47_cvector == (int)34860;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_6410();
		}
		var_57_bool = var_46_bool == (int)34859;
		if(var_57_bool != 0) {
			var_58_string = "";
			func_4220(var_47_cvector, "Hope");
			@@@var_0_object:SetMessage((int)533355);
			@@@var_0_object:ClearReplies();
			var_76_bool = 0;
			var_76_bool = 0;
			var_77_bool = 0; var_78_object = Obj();
			var_78_object = var_1_object;
			func_6803(var_78_object);
			if(var_77_bool != 0) {
				var_85_bool = 0; var_86_object = Obj();
				var_86_object = var_1_object;
				func_6791(var_86_object);
				if(var_85_bool != 0) {
					var_76_bool = 1;
				}
			}
			if(var_76_bool != 0) {
				@@@var_0_object:AddReply((int)533356, (int)34861, (int)34860);
			}
			@@@var_0_object:AddReply((int)533361, (int)-1, (int)34865);
			@@@var_0_object:AddReply((int)536071, (int)-1, (int)37816);
			return 0;
		}
		var_101_bool = var_46_bool == (int)34861;
		if(var_101_bool != 0) {
			var_102_string = "";
			func_4220(var_47_cvector, "Independence");
			@@@var_0_object:SetMessage((int)533357);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533358, (int)34863, (int)34862);
			@@@var_0_object:AddReply((int)536072, (int)37818, (int)37817);
			return 0;
		}
		var_111_bool = var_46_bool == (int)37818;
		if(var_111_bool != 0) {
			var_112_string = "";
			func_4220(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536073);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536074, (int)34863, (int)37819);
			return 0;
		}
		var_118_bool = var_46_bool == (int)34863;
		if(var_118_bool != 0) {
			var_119_string = "";
			func_4220(var_47_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)533359);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533360, (int)37822, (int)34864);
			@@@var_0_object:AddReply((int)536075, (int)37822, (int)37821);
			@@@var_0_object:AddReply((int)536077, (int)37824, (int)37823);
			return 0;
		}
		var_131_bool = var_46_bool == (int)37824;
		if(var_131_bool != 0) {
			var_132_string = "";
			func_4220(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536078);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536079, (int)37822, (int)37825);
			return 0;
		}
		var_138_bool = var_46_bool == (int)37822;
		if(var_138_bool != 0) {
			var_139_string = "";
			func_4220(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)536076);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536080, (int)-1, (int)37828);
			@@@var_0_object:AddReply((int)536081, (int)-1, (int)37829);
			return 0;
		}
		var_3_string = true;
		var_147_bool = 0;
		func_6335(var_147_bool);
		if(var_147_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1093";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_6169();
		var_51_bool = var_47_cvector == (int)35061;
		if(var_51_bool != 0) {
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_6422();
		}
		var_96_bool = var_47_cvector == (int)35062;
		if(var_96_bool != 0) {
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_6422();
		}
		var_100_bool = var_47_cvector == (int)35063;
		if(var_100_bool != 0) {
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_6422();
		}
		var_104_bool = var_47_cvector == (int)37964;
		if(var_104_bool != 0) {
			var_105_object = Obj(); var_106_object = Obj();
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_6438();
		}
		var_122_bool = var_47_cvector == (int)35067;
		if(var_122_bool != 0) {
			var_123_object = Obj(); var_124_object = Obj();
			var_123_object = var_1_object;
			var_124_object = var_0_object;
			func_6448(var_124_object);
			var_147_object = Obj(); var_148_object = Obj();
			var_147_object = var_1_object;
			var_148_object = var_0_object;
			func_6369();
			var_151_object = Obj(); var_152_object = Obj();
			var_151_object = var_1_object;
			var_152_object = var_0_object;
			func_6438();
		}
		var_154_bool = var_46_bool == (int)35056;
		if(var_154_bool != 0) {
			var_155_bool = 0; var_156_object = Obj();
			var_156_object = var_1_object;
			func_6815(var_156_object);
			if(var_155_bool != 0) {
				var_163_object = Obj(); var_164_object = Obj();
				var_163_object = var_1_object;
				var_164_object = var_0_object;
				func_6416();
				var_167_object = Obj(); var_168_object = Obj();
				var_167_object = var_1_object;
				var_168_object = var_0_object;
				func_6513();
				var_171_string = "";
				func_4600(var_47_cvector, "Fear");
				@@@var_0_object:SetMessage((int)533524);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)536154, (int)37921, (int)37920);
				return 0;
			}
			var_192_string = "";
			func_4600(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533532);
			@@@var_0_object:ClearReplies();
			var_194_bool = 0; var_195_object = Obj();
			var_195_object = var_1_object;
			func_6827(var_195_object);
			if(var_194_bool != 0) {
				@@@var_0_object:AddReply((int)533533, (int)35066, (int)35065);
			}
			@@@var_0_object:AddReply((int)533536, (int)-1, (int)35068);
			@@@var_0_object:AddReply((int)536193, (int)-1, (int)37965);
			return 0;
		}
		var_210_bool = var_46_bool == (int)35066;
		if(var_210_bool != 0) {
			var_211_string = "";
			func_4600(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533534);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536187, (int)37959, (int)37958);
			@@@var_0_object:AddReply((int)536194, (int)37962, (int)37966);
			return 0;
		}
		var_220_bool = var_46_bool == (int)37959;
		if(var_220_bool != 0) {
			var_221_string = "";
			func_4600(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)536188);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536189, (int)37962, (int)37960);
			@@@var_0_object:AddReply((int)536190, (int)37962, (int)37961);
			return 0;
		}
		var_230_bool = var_46_bool == (int)37962;
		if(var_230_bool != 0) {
			var_231_string = "";
			func_4600(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)536191);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536192, (int)-1, (int)37964);
			@@@var_0_object:AddReply((int)533535, (int)-1, (int)35067);
			return 0;
		}
		var_240_bool = var_46_bool == (int)37921;
		if(var_240_bool != 0) {
			var_241_string = "";
			func_4600(var_47_cvector, "Fear");
			@@@var_0_object:SetMessage((int)536155);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536156, (int)37923, (int)37922);
			@@@var_0_object:AddReply((int)536169, (int)-1, (int)37937);
			return 0;
		}
		var_250_bool = var_46_bool == (int)37923;
		if(var_250_bool != 0) {
			var_251_string = "";
			func_4600(var_47_cvector, "Independence");
			@@@var_0_object:SetMessage((int)536157);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536158, (int)37925, (int)37924);
			@@@var_0_object:AddReply((int)536160, (int)37928, (int)37926);
			return 0;
		}
		var_260_bool = var_46_bool == (int)37928;
		if(var_260_bool != 0) {
			var_261_string = "";
			func_4600(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536162);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536163, (int)37932, (int)37929);
			@@@var_0_object:AddReply((int)536164, (int)37931, (int)37930);
			return 0;
		}
		var_270_bool = var_46_bool == (int)37931;
		if(var_270_bool != 0) {
			var_271_string = "";
			func_4600(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536165);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536168, (int)37925, (int)37934);
			return 0;
		}
		var_277_bool = var_46_bool == (int)37932;
		if(var_277_bool != 0) {
			var_278_string = "";
			func_4600(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536166);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536167, (int)37925, (int)37933);
			return 0;
		}
		var_284_bool = var_46_bool == (int)37925;
		if(var_284_bool != 0) {
			var_285_string = "";
			func_4600(var_47_cvector, "Independence");
			@@@var_0_object:SetMessage((int)536159);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533525, (int)37938, (int)35057);
			@@@var_0_object:AddReply((int)536161, (int)37942, (int)37927);
			return 0;
		}
		var_294_bool = var_46_bool == (int)37942;
		if(var_294_bool != 0) {
			var_295_string = "";
			func_4600(var_47_cvector, "Independence");
			@@@var_0_object:SetMessage((int)536174);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536175, (int)37938, (int)37943);
			return 0;
		}
		var_301_bool = var_46_bool == (int)37938;
		if(var_301_bool != 0) {
			var_302_string = "";
			func_4600(var_47_cvector, "Hope");
			@@@var_0_object:SetMessage((int)536170);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536171, (int)37940, (int)37939);
			return 0;
		}
		var_308_bool = var_46_bool == (int)37940;
		if(var_308_bool != 0) {
			var_309_string = "";
			func_4600(var_47_cvector, "Hope");
			@@@var_0_object:SetMessage((int)536172);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536173, (int)35058, (int)37941);
			@@@var_0_object:AddReply((int)536176, (int)37946, (int)37945);
			return 0;
		}
		var_318_bool = var_46_bool == (int)37946;
		if(var_318_bool != 0) {
			var_319_string = "";
			func_4600(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536177);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536179, (int)35058, (int)37948);
			@@@var_0_object:AddReply((int)536178, (int)-1, (int)37947);
			return 0;
		}
		var_328_bool = var_46_bool == (int)35058;
		if(var_328_bool != 0) {
			var_329_string = "";
			func_4600(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533526);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533527, (int)35060, (int)35059);
			@@@var_0_object:AddReply((int)536180, (int)37951, (int)37950);
			return 0;
		}
		var_338_bool = var_46_bool == (int)37951;
		if(var_338_bool != 0) {
			var_339_string = "";
			func_4600(var_47_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)536181);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536182, (int)37953, (int)37952);
			return 0;
		}
		var_345_bool = var_46_bool == (int)37953;
		if(var_345_bool != 0) {
			var_346_string = "";
			func_4600(var_47_cvector, "Untrust");
			@@@var_0_object:SetMessage((int)536183);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536184, (int)37956, (int)37954);
			return 0;
		}
		var_352_bool = var_46_bool == (int)35060;
		if(var_352_bool != 0) {
			var_353_string = "";
			func_4600(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)533528);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536185, (int)37956, (int)37955);
			return 0;
		}
		var_359_bool = var_46_bool == (int)37956;
		if(var_359_bool != 0) {
			var_360_string = "";
			func_4600(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)536186);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533529, (int)-1, (int)35061);
			@@@var_0_object:AddReply((int)533530, (int)-1, (int)35062);
			@@@var_0_object:AddReply((int)533531, (int)-1, (int)35063);
			return 0;
		}
		var_3_string = true;
		var_371_bool = 0;
		func_6335(var_371_bool);
		if(var_371_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x120f";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	if((int)1 != 0) {
		func_6169();
		var_51_bool = var_46_bool == (int)36971;
		if(var_51_bool != 0) {
			var_52_string = "";
			func_5282(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535294);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535295, (int)36973, (int)36972);
			@@@var_0_object:AddReply((int)535302, (int)-1, (int)36980);
			@@@var_0_object:AddReply((int)535303, (int)-1, (int)36981);
			return 0;
		}
		var_80_bool = var_46_bool == (int)36973;
		if(var_80_bool != 0) {
			var_81_string = "";
			func_5282(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535296);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535297, (int)36975, (int)36974);
			@@@var_0_object:AddReply((int)535301, (int)36975, (int)36978);
			return 0;
		}
		var_90_bool = var_46_bool == (int)36975;
		if(var_90_bool != 0) {
			var_91_string = "";
			func_5282(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535298);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535299, (int)-1, (int)36976);
			@@@var_0_object:AddReply((int)535300, (int)-1, (int)36977);
			return 0;
		}
		var_3_string = true;
		var_99_bool = 0;
		func_6335(var_99_bool);
		if(var_99_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x14b9";
	
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_cvector)
{
	if((int)1 != 0) {
		func_6169();
		var_51_bool = var_46_int == (int)42557;
		if(var_51_bool != 0) {
			var_52_string = "";
			func_5536(var_47_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540548);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540549, (int)-1, (int)42558);
			@@@var_0_object:AddReply((int)540797, (int)-1, (int)42846);
			return 0;
		}
		var_3_string = true;
		var_76_bool = 0;
		func_6335(var_76_bool);
		if(var_76_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x15b7";
	
}


task_18_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_int)
{
	var_48_bool = var_46_int == (int)10;
	if(var_48_bool != 0) {
		func_5672();
		var_50_bool = 0;
		var_50_bool = 0;
		var_51_bool = 0;
		func_5893(var_51_bool);
		if(var_51_bool != 0) {
			var_54_bool = 0;
			func_5641(var_54_bool);
			if(var_54_bool != 0) {
				var_50_bool = 1;
			}
		}
		if(var_50_bool != 0) {
			var_71_bool = 0;
			func_5621(var_71_bool);
			if(var_71_bool != 0) {
				var_90_bool = 0; var_91_object = Obj();
				func_6176(Obj());
				var_92_object = var_91_object;
				func_6043(var_90_bool, var_91_object);
			}
		} else {
			func_5636(var_46_int);
			func_5663();
		}
	}
	return 0;
	
}


task_18_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	func_5854();
	func_5672();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_18_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	StopGroup0();
	func_5672();
	var_47_string = "";
	func_6123("Neutral");
	func_5663();
	return 0;
}


task_18_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_bool)
{
	var_47_bool = var_46_bool;
	if(var_47_bool != 0) {
		func_5663();
	} else {
		var_53_string = "";
		func_6123("Neutral");
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
		func_5854();
		var_50_bool = 0; var_51_object = Obj();
		var_46_object = var_51_object;
		func_5884(var_50_bool, var_51_object);
		EventEnable(0);
		var_64_object = Obj();
		var_46_object = var_64_object;
		func_7348(var_64_object);
		var_1026_string = "";
		func_6123("Neutral");
		func_5672();
		func_5663();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	var_46_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_5607(var_45_cvector);
	return 0;
}


func_0(var_0_object, var_67_int, var_68_object)
{
	var_70_object = Obj(); var_71_bool = 0; var_72_int = 0; var_73_bool = 0; var_74_object = Obj(); var_75_bool = 0; var_76_int = 0; var_77_bool = 0;
	var_0_object = var_68_object;
	var_78_bool = 0; var_79_object = Obj(); var_80_float = 0;
	var_68_object = var_79_object;
	func_5898(var_78_bool, var_79_object, (float)70.0);
	var_125_bool = var_78_bool == 0; //@nz
	if(var_125_bool != 0) {
		var_67_int = -2;
		return 8;
	}
	CreateDialog(var_74_object);
	var_126_int = 0;
	func_6329(var_126_int);
	@@var_74_object:SetNPCName(var_126_int);
	var_127_int = 0;
	func_6327(var_127_int);
	@@var_74_object:SetNPCDescription(var_127_int);
	var_128_string = "";
	func_6331(var_128_string);
	@@var_74_object:SetPhoto(var_128_string);
	var_129_string = "";
	func_6333(var_129_string);
	@@var_74_object:SetPhoto2(var_129_string);
	var_130_int = 0;
	func_7331(var_130_int);
	@@var_74_object:SetPlayerName(var_130_int);
	IsOverrideActive(var_75_bool);
	var_138_bool = var_75_bool;
	if(var_138_bool != 0) {
		var_67_int = -2;
		return 8;
	}
	DoDialog(var_74_object);
	var_139_bool = 0; var_140_object = Obj();
	func_6176(Obj());
	var_141_object = var_140_object;
	func_5985(var_139_bool, var_140_object);
	var_234_object = Obj(); var_235_object = Obj();
	var_68_object = var_234_object;
	var_74_object = var_235_object;
	TaskCall(1);
	func_81(var_236_object, var_237_object, var_238_string, var_239_bool, var_234_object, var_235_object);
	TaskReturn();
	@@var_74_object:IsDialogEnd(var_77_bool);
	
Label_63:
	var_290_bool = var_77_bool == 0; //@nz
	if(var_290_bool != 0) {
		sync();
		@@var_74_object:IsDialogEnd(var_77_bool);
		goto Label_63;
	}
	var_68_object = Obj();
	func_5967();
	StopDialog(var_74_object);
	@@var_74_object:GetReturnValue((int)-1);
	var_76_int = var_67_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5636(var_0_object)
{
	var_123_float = GetByIndex(var_0_object, 0);
	var_124_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_123_float, var_124_float);
	return 0;
}


func_7175()
{
	var_153_object = Obj(); var_154_object = Obj();
	CreateDiaryEntry(var_154_object, (int)120, (int)1, (int)513743);
	var_158_bool = 0; var_159_object = Obj(); var_160_int = 0;
	var_154_object = var_159_object;
	func_7253(var_158_bool, var_159_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6664()
{
	SetVariable("ood4Julia2", (int)1);
	return 0;
}


func_5641(var_54_bool)
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
	func_5859(var_61_float, var_62_object);
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


func_6154(var_173_bool, var_174_string)
{
	var_175_bool = 0; var_176_bool = 0;
	var_177_bool = 0;
	func_6335(var_177_bool);
	if(var_177_bool != 0) {
		lshHasSpeech(var_176_bool, var_174_string);
		var_178_bool = var_176_bool;
		if(var_178_bool != 0) {
			lshPlaySpeech(var_174_string);
			var_173_bool = 1;
			return 2;
		}
	}
	var_173_bool = 0;
	return 2;
}


func_6670()
{
	SetVariable("ood6Julia1", (int)1);
	return 0;
}


func_5138(var_0_object, var_911_int, var_912_object)
{
	var_914_object = Obj(); var_915_bool = 0; var_916_int = 0; var_917_bool = 0; var_918_object = Obj(); var_919_bool = 0; var_920_int = 0; var_921_bool = 0;
	var_0_object = var_912_object;
	var_922_bool = 0; var_923_object = Obj(); var_924_float = 0;
	var_912_object = var_923_object;
	func_5898(var_922_bool, var_923_object, (float)70.0);
	var_925_bool = var_922_bool == 0; //@nz
	if(var_925_bool != 0) {
		var_911_int = -2;
		return 8;
	}
	CreateDialog(var_918_object);
	var_926_int = 0;
	func_6329(var_926_int);
	@@var_918_object:SetNPCName(var_926_int);
	var_927_int = 0;
	func_6327(var_927_int);
	@@var_918_object:SetNPCDescription(var_927_int);
	var_928_string = "";
	func_6331(var_928_string);
	@@var_918_object:SetPhoto(var_928_string);
	var_929_string = "";
	func_6333(var_929_string);
	@@var_918_object:SetPhoto2(var_929_string);
	var_930_int = 0;
	func_7331(var_930_int);
	@@var_918_object:SetPlayerName(var_930_int);
	IsOverrideActive(var_919_bool);
	var_931_bool = var_919_bool;
	if(var_931_bool != 0) {
		var_911_int = -2;
		return 8;
	}
	DoDialog(var_918_object);
	var_932_bool = 0; var_933_object = Obj();
	func_6176(Obj());
	var_934_object = var_933_object;
	func_5985(var_932_bool, var_933_object);
	var_935_object = Obj(); var_936_object = Obj();
	var_912_object = var_935_object;
	var_918_object = var_936_object;
	TaskCall(15);
	func_5219(var_937_object, var_938_object, var_939_string, var_940_bool, var_935_object, var_936_object);
	TaskReturn();
	@@var_918_object:IsDialogEnd(var_921_bool);
	
Label_5201:
	var_968_bool = var_921_bool == 0; //@nz
	if(var_968_bool != 0) {
		sync();
		@@var_918_object:IsDialogEnd(var_921_bool);
		goto Label_5201;
	}
	var_912_object = Obj();
	func_5967();
	StopDialog(var_918_object);
	@@var_918_object:GetReturnValue((int)-1);
	var_920_int = var_911_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6676()
{
	SetVariable("ood6Julia2", (int)1);
	return 0;
}


func_7188()
{
	var_139_object = Obj(); var_140_object = Obj();
	CreateDiaryEntry(var_140_object, (int)720, (int)1, (int)538784);
	var_144_bool = 0; var_145_object = Obj(); var_146_int = 0;
	var_140_object = var_145_object;
	func_7253(var_144_bool, var_145_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6169()
{
	var_49_bool = 0;
	func_6335(var_49_bool);
	if(var_49_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_6682(var_64_object)
{
	func_7162();
	Trace("julia blood is given");
	var_90_object = Obj(); var_91_string = ""; var_92_int = 0;
	var_64_object = var_90_object;
	func_6258(var_90_object, "d6q01_julia_blood", (int)1);
	return 0;
}


func_2589(var_0_object, var_303_int, var_304_object)
{
	var_306_object = Obj(); var_307_bool = 0; var_308_int = 0; var_309_bool = 0; var_310_object = Obj(); var_311_bool = 0; var_312_int = 0; var_313_bool = 0;
	var_0_object = var_304_object;
	var_314_bool = 0; var_315_object = Obj(); var_316_float = 0;
	var_304_object = var_315_object;
	func_5898(var_314_bool, var_315_object, (float)70.0);
	var_317_bool = var_314_bool == 0; //@nz
	if(var_317_bool != 0) {
		var_303_int = -2;
		return 8;
	}
	CreateDialog(var_310_object);
	var_318_int = 0;
	func_6329(var_318_int);
	@@var_310_object:SetNPCName(var_318_int);
	var_319_int = 0;
	func_6327(var_319_int);
	@@var_310_object:SetNPCDescription(var_319_int);
	var_320_string = "";
	func_6331(var_320_string);
	@@var_310_object:SetPhoto(var_320_string);
	var_321_string = "";
	func_6333(var_321_string);
	@@var_310_object:SetPhoto2(var_321_string);
	var_322_int = 0;
	func_7331(var_322_int);
	@@var_310_object:SetPlayerName(var_322_int);
	IsOverrideActive(var_311_bool);
	var_323_bool = var_311_bool;
	if(var_323_bool != 0) {
		var_303_int = -2;
		return 8;
	}
	DoDialog(var_310_object);
	var_324_bool = 0; var_325_object = Obj();
	func_6176(Obj());
	var_326_object = var_325_object;
	func_5985(var_324_bool, var_325_object);
	var_327_object = Obj(); var_328_object = Obj();
	var_304_object = var_327_object;
	var_310_object = var_328_object;
	TaskCall(9);
	func_2670(var_329_object, var_330_object, var_331_string, var_332_bool, var_327_object, var_328_object);
	TaskReturn();
	@@var_310_object:IsDialogEnd(var_313_bool);
	
Label_2652:
	var_428_bool = var_313_bool == 0; //@nz
	if(var_428_bool != 0) {
		sync();
		@@var_310_object:IsDialogEnd(var_313_bool);
		goto Label_2652;
	}
	var_304_object = Obj();
	func_5967();
	StopDialog(var_310_object);
	@@var_310_object:GetReturnValue((int)-1);
	var_312_int = var_303_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5663()
{
	var_1028_float = 0; var_1029_float = 0;
	rand(var_1029_float, (int)8, (int)16);
	SetTimer((int)10, var_1029_float);
	return 2;
}


func_6176(var_141_object)
{
	var_142_object = Obj(); var_143_object = Obj();
	self(var_143_object);
	var_143_object = var_141_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_7201()
{
	var_56_object = Obj(); var_57_object = Obj();
	CreateDiaryEntry(var_57_object, (int)655, (int)2, (int)533573);
	var_61_bool = 0; var_62_object = Obj(); var_63_int = 0;
	var_57_object = var_62_object;
	func_7253(var_61_bool, var_62_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6182(var_105_cvector, var_106_cvector)
{
	var_108_float = 0; var_109_float = 0;
	var_110_int = var_106_cvector | var_106_cvector;
	var_109_float = sqrt(var_110_int);
	var_111_float = 9.999999974752427e-07;
	var_112_bool = var_109_float < var_111_float;
	if(var_112_bool != 0) {
		var_105_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_105_cvector = var_106_cvector / var_109_float;
	return 2;
}


func_6696()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_5672()
{
	KillTimer((int)10);
	return 0;
}


func_6702()
{
	SetVariable("d6q01JuliaVolonteer", (int)1);
	func_7175();
	var_161_bool = 0; var_162_string = ""; var_163_string = "";
	func_6271(var_161_bool, "quest_d6_01", "completed");
	return 0;
}


func_4143(var_0_object, var_1_object, var_2_object, var_3_string, var_775_object, var_776_object)
{
	var_0_object = var_776_object;
	var_1_object = var_775_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_782_string = "";
		func_4220(var_776_object, "Hope");
		@@@var_0_object:SetMessage((int)533355);
		@@@var_0_object:ClearReplies();
		var_791_bool = 0;
		var_791_bool = 0;
		var_792_bool = 0; var_793_object = Obj();
		var_793_object = var_1_object;
		func_6803(var_793_object);
		if(var_792_bool != 0) {
			var_798_bool = 0; var_799_object = Obj();
			var_799_object = var_1_object;
			func_6791(var_799_object);
			if(var_798_bool != 0) {
				var_791_bool = 1;
			}
		}
		if(var_791_bool != 0) {
			@@@var_0_object:AddReply((int)533356, (int)34861, (int)34860);
		}
		@@@var_0_object:AddReply((int)533361, (int)-1, (int)34865);
		@@@var_0_object:AddReply((int)536071, (int)-1, (int)37816);
		goto Label_4190;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1033";
	}
Label_4190:
	var_813_bool = 0;
	func_6335(var_813_bool);
	if(var_813_bool != 0) {

	Label_4194:
		lshWaitForAnimEnd();
		var_814_string = var_3_string;
		if(var_814_string != 0) {
		} else {
			var_815_string = "";
			var_815_string = var_2_object;
			func_6123(var_815_string);
			goto Label_4194;
	}
		PlayAnimation("all", "idle");

	Label_4209:
		WaitForAnimEnd();
		var_818_string = var_3_string;
		if(var_818_string != 0) {
			goto Label_4219;
		}
		PlayAnimation("all", "idle");
		goto Label_4209;
	}
	goto Label_4219;
	
Label_4219:
	return 0;
	
}


func_7214()
{
	var_107_object = Obj(); var_108_object = Obj();
	CreateDiaryEntry(var_108_object, (int)658, (int)2, (int)533576);
	var_112_bool = 0; var_113_object = Obj(); var_114_int = 0;
	var_108_object = var_113_object;
	func_7253(var_112_bool, var_113_object, (int)655);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6192(var_345_int, var_346_string)
{
	var_347_int = 0; var_348_int = 0;
	GetVariable(var_346_string, var_348_int);
	var_348_int = var_345_int;
	return 2;
}


func_6197(var_87_object, var_88_string)
{
	var_89_object = Obj(); var_90_object = Obj(); var_91_object = Obj(); var_92_object = Obj();
	GetMainOutdoorScene(var_91_object);
	var_94_int = var_88_string + ".bin";
	AddBlankActor(var_92_object, var_91_object, var_88_string, var_94_int);
	var_92_object = var_87_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_7227()
{
	var_79_object = Obj(); var_80_object = Obj();
	CreateDiaryEntry(var_80_object, (int)656, (int)2, (int)533574);
	var_84_bool = 0; var_85_object = Obj(); var_86_int = 0;
	var_80_object = var_85_object;
	func_7253(var_84_bool, var_85_object, (int)655);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6716()
{
	SetVariable("ood6Julia3", (int)1);
	return 0;
}


func_6208(var_142_int, var_143_int)
{
	var_144_object = Obj(); var_145_object = Obj();
	CreateIntVector(var_145_object);
	@@var_145_object:add(var_142_int);
	@@var_145_object:add(var_143_int);
	SendWorldWndMessage((int)3, var_145_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6722(var_128_object)
{
	Trace("feromicin is given");
	var_131_object = Obj(); var_132_string = ""; var_133_int = 0;
	var_128_object = var_131_object;
	func_6258(var_131_object, "feromicin", (int)1);
	return 0;
}


func_7240(var_70_object)
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


func_6220(var_63_object, var_64_int)
{
	var_65_int = 0; var_66_int = 0;
	var_67_object = Obj(); var_68_string = ""; var_69_int = 0;
	var_63_object = var_67_object;
	var_64_int = var_69_int;
	func_5867(var_67_object, "money", var_69_int);
	var_74_bool = var_64_int > (int)0;
	if(var_74_bool != 0) {
		GetInvItemByName(var_66_int, "Money");
		var_76_int = 0; var_77_int = 0;
		var_66_int = var_76_int;
		var_64_int = var_77_int;
		func_6208(var_76_int, var_77_int);
	}
	return 2;
}


func_6733(var_152_object)
{
	Trace("neomicin is given");
	var_155_object = Obj(); var_156_string = ""; var_157_int = 0;
	var_152_object = var_155_object;
	func_6258(var_155_object, "neomicin", (int)1);
	return 0;
}


func_590(var_2_object, var_663_string)
{
	var_664_bool = 0;
	func_6335(var_664_bool);
	var_665_bool = var_664_bool == 0; //@nz
	if(var_665_bool != 0) {
		return 0;
	}
	var_666_bool = var_663_string == var_2_object;
	if(var_666_bool != 0) {
		return 0;
	}
	var_667_string = ""; var_668_bool = 0;
	var_663_string = var_667_string;
	var_670_bool = var_663_string == "";
	if(var_670_bool != 0) {
		var_668_bool = 0;
	} else {
		var_668_bool = 1;
	}
	func_6139(var_667_string, var_668_bool);
	var_2_object = var_663_string;
	return 0;
	
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_234_object, var_235_object)
{
	var_0_object = var_235_object;
	var_1_object = var_234_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_241_object = Obj(); var_242_object = Obj();
		var_241_object = var_1_object;
		var_242_object = var_0_object;
		func_6552();
		var_245_string = "";
		func_149(var_235_object, "Neutral");
		@@@var_0_object:SetMessage((int)500325);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)500326, (int)383, (int)380);
		@@@var_0_object:AddReply((int)500327, (int)383, (int)381);
		@@@var_0_object:AddReply((int)500328, (int)393, (int)382);
		goto Label_119;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_119:
	var_272_bool = 0;
	func_6335(var_272_bool);
	if(var_272_bool != 0) {

	Label_123:
		lshWaitForAnimEnd();
		var_273_string = var_3_string;
		if(var_273_string != 0) {
		} else {
			var_274_string = "";
			var_274_string = var_2_object;
			func_6123(var_274_string);
			goto Label_123;
	}
		PlayAnimation("all", "idle");

	Label_138:
		WaitForAnimEnd();
		var_287_string = var_3_string;
		if(var_287_string != 0) {
			goto Label_148;
		}
		PlayAnimation("all", "idle");
		goto Label_138;
	}
	goto Label_148;
	
Label_148:
	return 0;
	
}


func_7253(var_61_bool, var_62_object, var_63_int)
{
	var_64_object = Obj(); var_65_object = Obj(); var_66_int = 0; var_67_object = Obj(); var_68_object = Obj(); var_69_int = 0;
	func_7240(Obj());
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


func_6744(var_158_object)
{
	Trace("monomicin is given");
	var_161_object = Obj(); var_162_string = ""; var_163_int = 0;
	var_158_object = var_161_object;
	func_6258(var_161_object, "monomicin", (int)1);
	return 0;
}


func_6239(var_131_object, var_132_object, var_133_int)
{
	var_134_int = 0; var_135_int = 0; var_136_bool = 0; var_137_int = 0; var_138_int = 0; var_139_bool = 0;
	@@var_132_object:GetItemID(var_137_int);
	GetInvItemProperty(var_138_int, var_137_int, "Category");
	@@var_131_object:AddItem(var_139_bool, var_132_object, var_138_int, var_133_int);
	var_141_bool = var_139_bool == 0; //@nz
	if(var_141_bool != 0) {
		@@var_131_object:DropItems(var_132_object, var_133_int);
	} else {
		var_142_int = 0; var_143_int = 0;
		var_137_int = var_142_int;
		var_133_int = var_143_int;
		func_6208(var_142_int, var_143_int);
	}
	return 6;
	
}


func_2144(var_2_object, var_563_string)
{
	var_564_bool = 0;
	func_6335(var_564_bool);
	var_565_bool = var_564_bool == 0; //@nz
	if(var_565_bool != 0) {
		return 0;
	}
	var_566_bool = var_563_string == var_2_object;
	if(var_566_bool != 0) {
		return 0;
	}
	var_567_string = ""; var_568_bool = 0;
	var_563_string = var_567_string;
	var_570_bool = var_563_string == "";
	if(var_570_bool != 0) {
		var_568_bool = 0;
	} else {
		var_568_bool = 1;
	}
	func_6139(var_567_string, var_568_bool);
	var_2_object = var_563_string;
	return 0;
	
}


func_6755(var_343_bool)
{
	var_345_int = 0; var_346_string = "";
	func_6192(var_345_int, "d1q01");
	var_350_bool = var_345_int == (int)4;
	if(var_350_bool != 0) {
		var_343_bool = 1;
		return 0;
	}
	var_343_bool = 0;
	return 0;
}


func_5219(var_0_object, var_1_object, var_2_object, var_3_string, var_935_object, var_936_object)
{
	var_0_object = var_936_object;
	var_1_object = var_935_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_942_string = "";
		func_5282(var_936_object, "Neutral");
		@@@var_0_object:SetMessage((int)535294);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535295, (int)36973, (int)36972);
		@@@var_0_object:AddReply((int)535302, (int)-1, (int)36980);
		@@@var_0_object:AddReply((int)535303, (int)-1, (int)36981);
		goto Label_5252;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1467";
	}
Label_5252:
	var_960_bool = 0;
	func_6335(var_960_bool);
	if(var_960_bool != 0) {

	Label_5256:
		lshWaitForAnimEnd();
		var_961_string = var_3_string;
		if(var_961_string != 0) {
		} else {
			var_962_string = "";
			var_962_string = var_2_object;
			func_6123(var_962_string);
			goto Label_5256;
	}
		PlayAnimation("all", "idle");

	Label_5271:
		WaitForAnimEnd();
		var_965_string = var_3_string;
		if(var_965_string != 0) {
			goto Label_5281;
		}
		PlayAnimation("all", "idle");
		goto Label_5271;
	}
	goto Label_5281;
	
Label_5281:
	return 0;
	
}


func_2670(var_0_object, var_1_object, var_2_object, var_3_string, var_327_object, var_328_object)
{
	var_0_object = var_328_object;
	var_1_object = var_327_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_334_string = "";
		func_2806(var_328_object, "Neutral");
		@@@var_0_object:SetMessage((int)531655);
		@@@var_0_object:ClearReplies();
		var_343_bool = 0; var_344_object = Obj();
		var_344_object = var_1_object;
		func_6755(var_344_object);
		if(var_343_bool != 0) {
			@@@var_0_object:AddReply((int)531693, (int)34875, (int)33077);
		}
		var_354_bool = 0;
		var_354_bool = 0;
		var_355_bool = 0; var_356_object = Obj();
		var_356_object = var_1_object;
		func_6851(var_356_object);
		if(var_355_bool != 0) {
			var_361_bool = 0; var_362_object = Obj();
			var_362_object = var_1_object;
			func_7089(var_362_object);
			if(var_361_bool != 0) {
				var_354_bool = 1;
			}
		}
		if(var_354_bool != 0) {
			@@@var_0_object:AddReply((int)533163, (int)34683, (int)34682);
		}
		var_380_bool = 0;
		var_380_bool = 0;
		var_381_bool = 0; var_382_object = Obj();
		var_382_object = var_1_object;
		func_6767(var_382_object);
		if(var_381_bool != 0) {
			var_387_bool = 0; var_388_object = Obj();
			var_388_object = var_1_object;
			func_7089(var_388_object);
			if(var_387_bool != 0) {
				var_380_bool = 1;
			}
		}
		if(var_380_bool != 0) {
			@@@var_0_object:AddReply((int)531692, (int)32998, (int)33076);
		}
		var_392_bool = 0;
		var_392_bool = 0;
		var_393_bool = 0; var_394_object = Obj();
		var_394_object = var_1_object;
		func_6779(var_394_object);
		if(var_393_bool != 0) {
			var_399_bool = 0; var_400_object = Obj();
			var_400_object = var_1_object;
			func_6851(var_400_object);
			var_401_bool = var_399_bool == 0; //@nz
			if(var_401_bool != 0) {
				var_392_bool = 1;
			}
		}
		if(var_392_bool != 0) {
			@@@var_0_object:AddReply((int)533180, (int)34704, (int)34700);
		}
		var_405_bool = 0; var_406_object = Obj();
		var_406_object = var_1_object;
		func_6839(var_406_object);
		if(var_405_bool != 0) {
			@@@var_0_object:AddReply((int)533375, (int)34878, (int)34877);
		}
		@@@var_0_object:AddReply((int)531656, (int)-1, (int)33037);
		@@@var_0_object:AddReply((int)533162, (int)-1, (int)34681);
		goto Label_2776;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xa72";
	}
Label_2776:
	var_420_bool = 0;
	func_6335(var_420_bool);
	if(var_420_bool != 0) {

	Label_2780:
		lshWaitForAnimEnd();
		var_421_string = var_3_string;
		if(var_421_string != 0) {
		} else {
			var_422_string = "";
			var_422_string = var_2_object;
			func_6123(var_422_string);
			goto Label_2780;
	}
		PlayAnimation("all", "idle");

	Label_2795:
		WaitForAnimEnd();
		var_425_string = var_3_string;
		if(var_425_string != 0) {
			goto Label_2805;
		}
		PlayAnimation("all", "idle");
		goto Label_2795;
	}
	goto Label_2805;
	
Label_2805:
	return 0;
	
}


func_6767(var_381_bool)
{
	var_383_int = 0; var_384_string = "";
	func_6192(var_383_int, "ood1Julia1");
	var_386_bool = var_383_int == (int)0;
	if(var_386_bool != 0) {
		var_381_bool = 1;
		return 0;
	}
	var_381_bool = 0;
	return 0;
}


func_7281(var_58_object)
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


func_6258(var_126_object, var_127_string, var_128_int)
{
	var_129_object = Obj(); var_130_object = Obj();
	CreateInvItem(var_130_object);
	@@var_130_object:SetItemName(var_127_string);
	var_131_object = Obj(); var_132_object = Obj(); var_133_int = 0;
	var_126_object = var_131_object;
	var_130_object = var_132_object;
	var_128_int = var_133_int;
	func_6239(var_131_object, var_132_object, var_133_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6779(var_393_bool)
{
	var_395_int = 0; var_396_string = "";
	func_6192(var_395_int, "ood1Julia2");
	var_398_bool = var_395_int == (int)0;
	if(var_398_bool != 0) {
		var_393_bool = 1;
		return 0;
	}
	var_393_bool = 0;
	return 0;
}


func_4220(var_2_object, var_782_string)
{
	var_783_bool = 0;
	func_6335(var_783_bool);
	var_784_bool = var_783_bool == 0; //@nz
	if(var_784_bool != 0) {
		return 0;
	}
	var_785_bool = var_782_string == var_2_object;
	if(var_785_bool != 0) {
		return 0;
	}
	var_786_string = ""; var_787_bool = 0;
	var_782_string = var_786_string;
	var_789_bool = var_782_string == "";
	if(var_789_bool != 0) {
		var_787_bool = 0;
	} else {
		var_787_bool = 1;
	}
	func_6139(var_786_string, var_787_bool);
	var_2_object = var_782_string;
	return 0;
	
}


func_6271(var_115_bool, var_116_string, var_117_string)
{
	var_118_object = Obj(); var_119_object = Obj();
	FindActor(var_119_object, var_116_string);
	var_120_bool = var_119_object == 0; //@ne
	if(var_120_bool != 0) {
		var_115_bool = 0;
		return 2;
	}
	Trigger(var_119_object, var_117_string);
	var_115_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_7298(var_97_object, var_98_string, var_99_float)
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


func_6791(var_798_bool)
{
	var_800_int = 0; var_801_string = "";
	func_6192(var_800_int, "d8q04");
	var_803_bool = var_800_int == (int)1000;
	if(var_803_bool != 0) {
		var_798_bool = 1;
		return 0;
	}
	var_798_bool = 0;
	return 0;
}


func_6283(var_69_float)
{
	var_70_float = 0; var_71_float = 0;
	GetGameTime(var_71_float);
	var_71_float = var_69_float;
	return 2;
}


func_6288(var_194_int)
{
	var_195_float = 0; var_196_float = 0;
	GetGameTime(var_196_float);
	var_198_int = 0;
	var_198_int = var_196_float / (int)24;
	var_194_int = (int)1 + var_198_int;
	return 2;
}


func_6803(var_792_bool)
{
	var_794_int = 0; var_795_string = "";
	func_6192(var_794_int, "ood8Julia1");
	var_797_bool = var_794_int == (int)0;
	if(var_797_bool != 0) {
		var_792_bool = 1;
		return 0;
	}
	var_792_bool = 0;
	return 0;
}


func_149(var_2_object, var_245_string)
{
	var_246_bool = 0;
	func_6335(var_246_bool);
	var_247_bool = var_246_bool == 0; //@nz
	if(var_247_bool != 0) {
		return 0;
	}
	var_248_bool = var_245_string == var_2_object;
	if(var_248_bool != 0) {
		return 0;
	}
	var_249_string = ""; var_250_bool = 0;
	var_245_string = var_249_string;
	var_252_bool = var_245_string == "";
	if(var_252_bool != 0) {
		var_250_bool = 0;
	} else {
		var_250_bool = 1;
	}
	func_6139(var_249_string, var_250_bool);
	var_2_object = var_245_string;
	return 0;
	
}


func_5783()
{
	var_51_int = 0; var_52_int = 0; var_53_bool = 0; var_54_int = 0; var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_int = 0; var_59_bool = 0; var_60_int = 0; var_61_int = 0; var_62_bool = 0;
	WaitForAnimEnd();
	var_63_bool = 0;
	func_5893(var_63_bool);
	var_64_bool = var_63_bool == 0; //@nz
	if(var_64_bool != 0) {
		return 12;
	}
	func_6310((int)0);
	var_65_int = var_57_int;
	var_58_int = 0;
	
Label_5797:
	var_78_bool = 0;
	var_78_bool = 0;
	var_80_bool = var_58_int < (int)5;
	if(var_80_bool != 0) {
		var_81_bool = 0;
		func_5893(var_81_bool);
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
				func_6303(var_92_string, var_93_int);
				PlayAnimation("all", var_92_string);
				WaitForAnimEnd(var_62_bool);
				var_94_bool = var_62_bool == 0; //@nz
				if(var_94_bool == 0) goto Label_5838;
				goto Label_5849;
		}
		Label_5838:
			var_85_bool = 0;
			func_5852(var_85_bool);
			var_86_bool = var_85_bool == 0; //@nz
			if(var_86_bool != 0) {
				goto Label_5849;
			}
			ResetAAS();
			var_58_int = var_58_int + (int)1;
			goto Label_5797;

		}
	}
Label_5849:
	ResetAAS();
	return 12;
	
}


func_6297(var_300_bool, var_301_int)
{
	var_302_int = 0;
	func_6288(var_302_int);
	var_300_bool = var_302_int == var_301_int;
	return 0;
}


func_6815(var_856_bool)
{
	var_858_int = 0; var_859_string = "";
	func_6192(var_858_int, "ood9Julia1");
	var_861_bool = var_858_int == (int)0;
	if(var_861_bool != 0) {
		var_856_bool = 1;
		return 0;
	}
	var_856_bool = 0;
	return 0;
}


func_6303(var_71_string, var_72_int)
{
	var_73_string = ""; var_74_string = "";
	var_75_int = var_72_int;
	if(var_75_int != 0) {
		"idle" = "idle" + var_72_int;
	}
	var_74_string = var_71_string;
	return 2;
}


func_5282(var_2_object, var_942_string)
{
	var_943_bool = 0;
	func_6335(var_943_bool);
	var_944_bool = var_943_bool == 0; //@nz
	if(var_944_bool != 0) {
		return 0;
	}
	var_945_bool = var_942_string == var_2_object;
	if(var_945_bool != 0) {
		return 0;
	}
	var_946_string = ""; var_947_bool = 0;
	var_942_string = var_946_string;
	var_949_bool = var_942_string == "";
	if(var_949_bool != 0) {
		var_947_bool = 0;
	} else {
		var_947_bool = 1;
	}
	func_6139(var_946_string, var_947_bool);
	var_2_object = var_942_string;
	return 0;
	
}


func_7331(var_130_int)
{
	var_131_int = 0; var_132_int = 0;
	GetVariable("branch", var_132_int);
	var_135_bool = var_132_int == (int)0;
	if(var_135_bool != 0) {
		var_130_int = 1;
		return 2;
	EMIT "GOTO 0x1cb2";
	}
	var_137_bool = var_132_int == (int)1;
	if(var_137_bool != 0) {
		var_130_int = 2;
		return 2;
	}
	var_130_int = 3;
	return 2;
}


func_6310(var_65_int)
{
	var_66_int = 0; var_67_bool = 0; var_68_int = 0; var_69_bool = 0;
	var_68_int = 0;
	
Label_6312:
	var_71_string = ""; var_72_int = 0;
	var_68_int = var_72_int;
	func_6303(var_71_string, var_72_int);
	HasAnimation(var_69_bool, "all", var_71_string);
	var_76_bool = var_69_bool == 0; //@nz
	if(var_76_bool != 0) {
	} else {
		var_68_int = var_68_int + (int)1;
		goto Label_6312;
	}
	var_68_int = var_65_int;
	return 4;
	
}


func_6827(var_892_bool)
{
	var_894_int = 0; var_895_string = "";
	func_6192(var_894_int, "d9q02");
	var_897_bool = var_894_int == (int)2;
	if(var_897_bool != 0) {
		var_892_bool = 1;
		return 0;
	}
	var_892_bool = 0;
	return 0;
}


func_7348(var_64_object)
{
	var_65_bool = GlobalVars[1];
	var_66_bool = var_65_bool == 0; //@nz
	if(var_66_bool != 0) {
		var_67_int = 0; var_68_object = Obj();
		var_64_object = var_68_object;
		TaskCall(0);
		func_0(var_69_object, var_67_int, var_68_object);
		TaskReturn();
		var_299_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_300_bool = 0; var_301_int = 0;
	func_6297(var_300_bool, (int)1);
	if(var_300_bool != 0) {
		var_303_int = 0; var_304_object = Obj();
		var_64_object = var_304_object;
		TaskCall(8);
		func_2589(var_305_object, var_303_int, var_304_object);
		TaskReturn();
		return 0;
	}
	var_430_bool = 0; var_431_int = 0;
	func_6297(var_430_bool, (int)2);
	if(var_430_bool != 0) {
		var_432_int = 0; var_433_object = Obj();
		var_64_object = var_433_object;
		TaskCall(4);
		func_1345(var_434_object, var_432_int, var_433_object);
		TaskReturn();
		return 0;
	}
	var_530_bool = 0; var_531_int = 0;
	func_6297(var_530_bool, (int)4);
	if(var_530_bool != 0) {
		var_532_int = 0; var_533_object = Obj();
		var_64_object = var_533_object;
		TaskCall(6);
		func_1952(var_534_object, var_532_int, var_533_object);
		TaskReturn();
		return 0;
	}
	var_630_bool = 0; var_631_int = 0;
	func_6297(var_630_bool, (int)6);
	if(var_630_bool != 0) {
		var_632_int = 0; var_633_object = Obj();
		var_64_object = var_633_object;
		TaskCall(2);
		func_379(var_634_object, var_632_int, var_633_object);
		TaskReturn();
		return 0;
	}
	var_749_bool = 0; var_750_int = 0;
	func_6297(var_749_bool, (int)8);
	if(var_749_bool != 0) {
		var_751_int = 0; var_752_object = Obj();
		var_64_object = var_752_object;
		TaskCall(10);
		func_4062(var_753_object, var_751_int, var_752_object);
		TaskReturn();
		return 0;
	}
	var_823_bool = 0; var_824_int = 0;
	func_6297(var_823_bool, (int)9);
	if(var_823_bool != 0) {
		var_825_int = 0; var_826_object = Obj();
		var_64_object = var_826_object;
		TaskCall(12);
		func_4421(var_827_object, var_825_int, var_826_object);
		TaskReturn();
		return 0;
	}
	var_909_bool = 0; var_910_int = 0;
	func_6297(var_909_bool, (int)12);
	if(var_909_bool != 0) {
		var_911_int = 0; var_912_object = Obj();
		var_64_object = var_912_object;
		TaskCall(14);
		func_5138(var_913_object, var_911_int, var_912_object);
		TaskReturn();
		return 0;
	}
	var_970_int = 0; var_971_object = Obj();
	var_64_object = var_971_object;
	TaskCall(16);
	func_5397(var_972_object, var_970_int, var_971_object);
	TaskReturn();
	return 0;
}


func_6327(var_127_int)
{
	var_127_int = 515537;
	return 0;
}


func_6839(var_405_bool)
{
	var_407_int = 0; var_408_string = "";
	func_6192(var_407_int, "ood1Julia3");
	var_410_bool = var_407_int == (int)0;
	if(var_410_bool != 0) {
		var_405_bool = 1;
		return 0;
	}
	var_405_bool = 0;
	return 0;
}


func_6329(var_126_int)
{
	var_126_int = 502862;
	return 0;
}


func_6331(var_128_string)
{
	var_128_string = "ui/NPC_Julia.png";
	return 0;
}


func_6333(var_129_string)
{
	var_129_string = "ui/NPC_Julia_b.png";
	return 0;
}


func_6335(var_121_bool)
{
	var_121_bool = 1;
	return 0;
}


func_6337()
{
	var_170_object = Obj(); var_171_object = Obj();
	func_7281(Obj());
	var_172_object = var_171_object;
	var_177_float = 0;
	func_6283(var_177_float);
	@@var_171_object:AddMark("d1q02JuliaGotoAnna", "pt_map_anna", (int)0, (int)508634, var_177_float);
	func_7136();
	func_7149();
	var_194_object = Obj(); var_195_string = "";
	func_6197(var_194_object, "quest_d1_02");
	return 2;
}
EMIT "Stack[-1] = 0";


func_6851(var_355_bool)
{
	var_357_int = 0; var_358_string = "";
	func_6192(var_357_int, "ood1Julia4");
	var_360_bool = var_357_int == (int)0;
	if(var_360_bool != 0) {
		var_355_bool = 1;
		return 0;
	}
	var_355_bool = 0;
	return 0;
}


func_6863(var_489_bool)
{
	var_491_bool = 0;
	var_491_bool = 0;
	var_492_bool = 0;
	var_492_bool = 0;
	var_493_int = 0; var_494_string = "";
	func_6192(var_493_int, "d2q01");
	var_496_bool = var_493_int != (int)0;
	if(var_496_bool != 0) {
		var_497_int = 0; var_498_string = "";
		func_6192(var_497_int, "d2q01");
		var_500_bool = var_497_int != (int)1000;
		if(var_500_bool != 0) {
			var_492_bool = 1;
		}
	}
	if(var_492_bool != 0) {
		var_501_int = 0; var_502_string = "";
		func_6192(var_501_int, "d2q01");
		var_504_bool = var_501_int != (int)-1;
		if(var_504_bool != 0) {
			var_491_bool = 1;
		}
	}
	if(var_491_bool != 0) {
		var_489_bool = 1;
		return 0;
	}
	var_489_bool = 0;
	return 0;
}


func_6363()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_5852(var_85_bool)
{
	var_85_bool = 1;
	return 0;
}


func_5854()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_6369()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_5859(var_61_float, var_62_object)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0);
	GetPosition(var_66_cvector);
	@@var_62_object:GetPosition(var_67_cvector);
	var_68_cvector = var_67_cvector - var_66_cvector;
	var_61_float = var_68_cvector | var_68_cvector;
	return 6;
}


func_6375()
{
	var_54_object = Obj(); var_55_object = Obj();
	SetVariable("d1q01", (int)5);
	func_7281(Obj());
	var_58_object = var_55_object;
	var_69_float = 0;
	func_6283(var_69_float);
	@@var_55_object:AddMark("d1q01JuliaGotoBigVlad", "pt_map_bigvlad", (int)3, (int)508633, var_69_float);
	func_7123();
	return 2;
}
EMIT "Stack[-1] = 0";


func_5867(var_67_object, var_68_string, var_69_int)
{
	var_70_int = 0; var_71_int = 0;
	@@var_67_object:GetProperty(var_68_string, var_71_int);
	var_72_int = var_71_int + var_69_int;
	@@var_67_object:SetProperty(var_68_string, var_72_int);
	return 2;
}


func_6897(var_505_bool)
{
	var_507_int = 0; var_508_string = "";
	func_6192(var_507_int, "ood2Julia2");
	var_510_bool = var_507_int == (int)0;
	if(var_510_bool != 0) {
		var_505_bool = 1;
		return 0;
	}
	var_505_bool = 0;
	return 0;
}


func_5874(var_54_bool, var_55_cvector)
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


func_2806(var_2_object, var_334_string)
{
	var_335_bool = 0;
	func_6335(var_335_bool);
	var_336_bool = var_335_bool == 0; //@nz
	if(var_336_bool != 0) {
		return 0;
	}
	var_337_bool = var_334_string == var_2_object;
	if(var_337_bool != 0) {
		return 0;
	}
	var_338_string = ""; var_339_bool = 0;
	var_334_string = var_338_string;
	var_341_bool = var_334_string == "";
	if(var_341_bool != 0) {
		var_339_bool = 0;
	} else {
		var_339_bool = 1;
	}
	func_6139(var_338_string, var_339_bool);
	var_2_object = var_334_string;
	return 0;
	
}


func_5884(var_50_bool, var_51_object)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	@@var_51_object:GetPosition(var_53_cvector);
	var_54_bool = 0; var_55_cvector = CVector(0,0,0);
	var_53_cvector = var_55_cvector;
	func_5874(var_54_bool, var_55_cvector);
	var_54_bool = var_50_bool;
	return 2;
}


func_6909(var_473_bool)
{
	var_475_int = 0; var_476_string = "";
	func_6192(var_475_int, "ood2Julia1");
	var_478_bool = var_475_int == (int)0;
	if(var_478_bool != 0) {
		var_473_bool = 1;
		return 0;
	}
	var_473_bool = 0;
	return 0;
}


func_6398()
{
	SetVariable("ood1Julia1", (int)1);
	return 0;
}


func_6404()
{
	SetVariable("ood1Julia2", (int)1);
	return 0;
}


func_5893(var_47_bool)
{
	var_48_bool = 0; var_49_bool = 0;
	IsLoaded(var_49_bool);
	var_49_bool = var_47_bool;
	return 2;
}


func_6921(var_479_bool)
{
	var_481_int = 0; var_482_string = "";
	func_6192(var_481_int, "d2q03");
	var_484_bool = var_481_int == (int)1;
	if(var_484_bool != 0) {
		var_479_bool = 1;
		return 0;
	}
	var_479_bool = 0;
	return 0;
}


func_5898(var_78_bool, var_79_object, var_80_float)
{
	var_81_float = 0; var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_bool = 0; var_89_bool = 0; var_90_float = 0; var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_bool = 0; var_98_bool = 0;
	@@var_79_object:GetPosition(var_91_cvector);
	@@var_79_object:GetEyesHeight(var_90_float);
	var_99_float = GetByIndex(var_91_cvector, 1);
	var_99_float = var_99_float + var_90_float;
	SetByIndex(var_91_cvector, 1) = var_99_float;
	GetPosition(var_92_cvector);
	GetEyesHeight(var_90_float);
	var_100_float = GetByIndex(var_92_cvector, 1);
	var_100_float = var_100_float + var_90_float;
	SetByIndex(var_92_cvector, 1) = var_100_float;
	var_93_cvector = var_91_cvector - var_92_cvector;
	var_101_float = GetByIndex(var_93_cvector, 1);
	SetByIndex(var_93_cvector, 1) = (float)0;
	var_102_int = var_93_cvector | var_93_cvector;
	var_103_float = sqrt(var_102_int);
	var_93_cvector = var_93_cvector / var_103_float;
	var_94_cvector = -var_93_cvector;
	var_104_float = var_93_cvector * var_80_float;
	var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0);
	var_106_cvector = var_94_cvector ^ CVector(0.0, 1.0, 0.0);
	func_6182(var_105_cvector, var_106_cvector);
	var_114_float = var_105_cvector * (int)25;
	var_115_int = var_104_float + var_114_float;
	var_95_cvector = var_115_int - CVector(0.0, 10.0, 0.0);
	var_96_cvector = var_92_cvector + var_95_cvector;
	IsOverrideActive(var_97_bool);
	var_117_bool = var_97_bool;
	if(var_117_bool != 0) {
		var_78_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_96_cvector, var_94_cvector, (bool)1);
	var_119_float = GetByIndex(var_95_cvector, 0);
	var_120_float = GetByIndex(var_95_cvector, 2);
	Rotate(var_119_float, var_120_float);
	var_121_bool = 0;
	func_6335(var_121_bool);
	if(var_121_bool != 0) {
	} else {
		HasAnimationTrack(var_98_bool, "head");
		var_123_bool = var_98_bool;
		if(var_123_bool == 0) goto Label_5961;
		LookAsyncCamera("head");
	}
Label_5961:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_78_bool = 1;
	return 18;
	
}


func_6410()
{
	SetVariable("ood8Julia1", (int)1);
	return 0;
}


func_6416()
{
	SetVariable("ood9Julia1", (int)1);
	return 0;
}


func_6933(var_579_bool)
{
	var_581_int = 0; var_582_string = "";
	func_6192(var_581_int, "d4q02");
	var_584_bool = var_581_int == (int)1;
	if(var_584_bool != 0) {
		var_579_bool = 1;
		return 0;
	}
	var_579_bool = 0;
	return 0;
}


func_6422()
{
	SetVariable("d9q02", (int)1);
	func_7201();
	func_7227();
	var_87_object = Obj(); var_88_string = "";
	func_6197(var_87_object, "quest_d9_02");
	return 0;
}


func_5397(var_0_object, var_970_int, var_971_object)
{
	var_973_object = Obj(); var_974_bool = 0; var_975_int = 0; var_976_bool = 0; var_977_object = Obj(); var_978_bool = 0; var_979_int = 0; var_980_bool = 0;
	var_0_object = var_971_object;
	var_981_bool = 0; var_982_object = Obj(); var_983_float = 0;
	var_971_object = var_982_object;
	func_5898(var_981_bool, var_982_object, (float)70.0);
	var_984_bool = var_981_bool == 0; //@nz
	if(var_984_bool != 0) {
		var_970_int = -2;
		return 8;
	}
	CreateDialog(var_977_object);
	var_985_int = 0;
	func_6329(var_985_int);
	@@var_977_object:SetNPCName(var_985_int);
	var_986_int = 0;
	func_6327(var_986_int);
	@@var_977_object:SetNPCDescription(var_986_int);
	var_987_string = "";
	func_6331(var_987_string);
	@@var_977_object:SetPhoto(var_987_string);
	var_988_string = "";
	func_6333(var_988_string);
	@@var_977_object:SetPhoto2(var_988_string);
	var_989_int = 0;
	func_7331(var_989_int);
	@@var_977_object:SetPlayerName(var_989_int);
	IsOverrideActive(var_978_bool);
	var_990_bool = var_978_bool;
	if(var_990_bool != 0) {
		var_970_int = -2;
		return 8;
	}
	DoDialog(var_977_object);
	var_991_bool = 0; var_992_object = Obj();
	func_6176(Obj());
	var_993_object = var_992_object;
	func_5985(var_991_bool, var_992_object);
	var_994_object = Obj(); var_995_object = Obj();
	var_971_object = var_994_object;
	var_977_object = var_995_object;
	TaskCall(17);
	func_5478(var_996_object, var_997_object, var_998_string, var_999_bool, var_994_object, var_995_object);
	TaskReturn();
	@@var_977_object:IsDialogEnd(var_980_bool);
	
Label_5460:
	var_1024_bool = var_980_bool == 0; //@nz
	if(var_1024_bool != 0) {
		sync();
		@@var_977_object:IsDialogEnd(var_980_bool);
		goto Label_5460;
	}
	var_971_object = Obj();
	func_5967();
	StopDialog(var_977_object);
	@@var_977_object:GetReturnValue((int)-1);
	var_979_int = var_970_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6945(var_573_bool)
{
	var_575_int = 0; var_576_string = "";
	func_6192(var_575_int, "ood4Julia1");
	var_578_bool = var_575_int == (int)0;
	if(var_578_bool != 0) {
		var_573_bool = 1;
		return 0;
	}
	var_573_bool = 0;
	return 0;
}


func_6438()
{
	func_7214();
	var_115_bool = 0; var_116_string = ""; var_117_string = "";
	func_6271(var_115_bool, "quest_d9_02", "completed");
	return 0;
}


func_6957(var_589_bool)
{
	var_591_int = 0; var_592_string = "";
	func_6192(var_591_int, "d4q02JuliaGivesMedcine");
	var_594_bool = var_591_int == (int)1;
	if(var_594_bool != 0) {
		var_589_bool = 1;
		return 0;
	}
	var_589_bool = 0;
	return 0;
}


func_6448(var_123_object)
{
	Trace("burah_serum is given");
	var_126_object = Obj(); var_127_string = ""; var_128_int = 0;
	var_123_object = var_126_object;
	func_6258(var_126_object, "burah_serum", (int)1);
	return 0;
}


func_6969(var_608_bool)
{
	var_610_int = 0; var_611_string = "";
	func_6192(var_610_int, "d4q02");
	var_613_bool = var_610_int == (int)1000;
	if(var_613_bool != 0) {
		var_608_bool = 1;
		return 0;
	}
	var_608_bool = 0;
	return 0;
}


func_6459()
{
	SetVariable("ood1Julia3", (int)1);
	return 0;
}


func_6465()
{
	SetVariable("ood1Julia4", (int)1);
	return 0;
}


func_1345(var_0_object, var_432_int, var_433_object)
{
	var_435_object = Obj(); var_436_bool = 0; var_437_int = 0; var_438_bool = 0; var_439_object = Obj(); var_440_bool = 0; var_441_int = 0; var_442_bool = 0;
	var_0_object = var_433_object;
	var_443_bool = 0; var_444_object = Obj(); var_445_float = 0;
	var_433_object = var_444_object;
	func_5898(var_443_bool, var_444_object, (float)70.0);
	var_446_bool = var_443_bool == 0; //@nz
	if(var_446_bool != 0) {
		var_432_int = -2;
		return 8;
	}
	CreateDialog(var_439_object);
	var_447_int = 0;
	func_6329(var_447_int);
	@@var_439_object:SetNPCName(var_447_int);
	var_448_int = 0;
	func_6327(var_448_int);
	@@var_439_object:SetNPCDescription(var_448_int);
	var_449_string = "";
	func_6331(var_449_string);
	@@var_439_object:SetPhoto(var_449_string);
	var_450_string = "";
	func_6333(var_450_string);
	@@var_439_object:SetPhoto2(var_450_string);
	var_451_int = 0;
	func_7331(var_451_int);
	@@var_439_object:SetPlayerName(var_451_int);
	IsOverrideActive(var_440_bool);
	var_452_bool = var_440_bool;
	if(var_452_bool != 0) {
		var_432_int = -2;
		return 8;
	}
	DoDialog(var_439_object);
	var_453_bool = 0; var_454_object = Obj();
	func_6176(Obj());
	var_455_object = var_454_object;
	func_5985(var_453_bool, var_454_object);
	var_456_object = Obj(); var_457_object = Obj();
	var_433_object = var_456_object;
	var_439_object = var_457_object;
	TaskCall(5);
	func_1426(var_458_object, var_459_object, var_460_string, var_461_bool, var_456_object, var_457_object);
	TaskReturn();
	@@var_439_object:IsDialogEnd(var_442_bool);
	
Label_1408:
	var_528_bool = var_442_bool == 0; //@nz
	if(var_528_bool != 0) {
		sync();
		@@var_439_object:IsDialogEnd(var_442_bool);
		goto Label_1408;
	}
	var_433_object = Obj();
	func_5967();
	StopDialog(var_439_object);
	@@var_439_object:GetReturnValue((int)-1);
	var_441_int = var_432_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6981(var_602_bool)
{
	var_604_int = 0; var_605_string = "";
	func_6192(var_604_int, "ood4Julia2");
	var_607_bool = var_604_int == (int)0;
	if(var_607_bool != 0) {
		var_602_bool = 1;
		return 0;
	}
	var_602_bool = 0;
	return 0;
}


func_4421(var_0_object, var_825_int, var_826_object)
{
	var_828_object = Obj(); var_829_bool = 0; var_830_int = 0; var_831_bool = 0; var_832_object = Obj(); var_833_bool = 0; var_834_int = 0; var_835_bool = 0;
	var_0_object = var_826_object;
	var_836_bool = 0; var_837_object = Obj(); var_838_float = 0;
	var_826_object = var_837_object;
	func_5898(var_836_bool, var_837_object, (float)70.0);
	var_839_bool = var_836_bool == 0; //@nz
	if(var_839_bool != 0) {
		var_825_int = -2;
		return 8;
	}
	CreateDialog(var_832_object);
	var_840_int = 0;
	func_6329(var_840_int);
	@@var_832_object:SetNPCName(var_840_int);
	var_841_int = 0;
	func_6327(var_841_int);
	@@var_832_object:SetNPCDescription(var_841_int);
	var_842_string = "";
	func_6331(var_842_string);
	@@var_832_object:SetPhoto(var_842_string);
	var_843_string = "";
	func_6333(var_843_string);
	@@var_832_object:SetPhoto2(var_843_string);
	var_844_int = 0;
	func_7331(var_844_int);
	@@var_832_object:SetPlayerName(var_844_int);
	IsOverrideActive(var_833_bool);
	var_845_bool = var_833_bool;
	if(var_845_bool != 0) {
		var_825_int = -2;
		return 8;
	}
	DoDialog(var_832_object);
	var_846_bool = 0; var_847_object = Obj();
	func_6176(Obj());
	var_848_object = var_847_object;
	func_5985(var_846_bool, var_847_object);
	var_849_object = Obj(); var_850_object = Obj();
	var_826_object = var_849_object;
	var_832_object = var_850_object;
	TaskCall(13);
	func_4502(var_851_object, var_852_object, var_853_string, var_854_bool, var_849_object, var_850_object);
	TaskReturn();
	@@var_832_object:IsDialogEnd(var_835_bool);
	
Label_4484:
	var_907_bool = var_835_bool == 0; //@nz
	if(var_907_bool != 0) {
		sync();
		@@var_832_object:IsDialogEnd(var_835_bool);
		goto Label_4484;
	}
	var_826_object = Obj();
	func_5967();
	StopDialog(var_832_object);
	@@var_832_object:GetReturnValue((int)-1);
	var_834_int = var_825_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6471()
{
	var_131_object = Obj(); var_132_object = Obj();
	func_7281(Obj());
	var_133_object = var_132_object;
	var_138_float = 0;
	func_6283(var_138_float);
	@@var_132_object:AddMark("d1JuliaMapMarkEva", "pt_map_eva", (int)3, (int)508639, var_138_float);
	var_143_float = 0;
	func_6283(var_143_float);
	@@var_132_object:AddMark("d1JuliaMapMarkLara", "pt_map_lara", (int)3, (int)508646, var_143_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5967()
{
	var_292_bool = 0; var_293_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_295_bool = 0;
	func_6335(var_295_bool);
	if(var_295_bool != 0) {
	} else {
		HasAnimationTrack(var_293_bool, "head");
		var_297_bool = var_293_bool;
		if(var_297_bool == 0) goto Label_5984;
		UnlookAsync("head");
	}
Label_5984:
	return 2;
	
}


func_6993(var_689_bool)
{
	var_691_int = 0; var_692_string = "";
	func_6192(var_691_int, "d6q01");
	var_694_bool = var_691_int == (int)1;
	if(var_694_bool != 0) {
		var_689_bool = 1;
		return 0;
	}
	var_689_bool = 0;
	return 0;
}


func_7005(var_673_bool)
{
	var_675_int = 0; var_676_string = "";
	func_6192(var_675_int, "d5q01");
	var_678_bool = var_675_int == (int)1000;
	if(var_678_bool != 0) {
		var_673_bool = 1;
		return 0;
	}
	var_673_bool = 0;
	return 0;
}


func_6496()
{
	SetVariable("ood2Julia2", (int)1);
	return 0;
}


func_5985(var_139_bool, var_140_object)
{
	var_144_int = 0; var_145_int = 0; var_146_int = 0; var_147_int = 0;
	GetVariable("voice_common", var_146_int);
	var_149_int = var_146_int;
	if(var_149_int != 0) {
		var_150_bool = 0; var_151_object = Obj();
		var_140_object = var_151_object;
		func_6043(var_150_bool, var_151_object);
		var_180_bool = var_150_bool == 0; //@nz
		if(var_180_bool != 0) {
			var_181_bool = 0; var_182_object = Obj();
			var_140_object = var_182_object;
			func_6080(var_181_bool, var_182_object);
			var_216_bool = var_181_bool == 0; //@nz
			if(var_216_bool != 0) {
				var_139_bool = 0;
				return 4;
			}
		}
		irand(var_147_int, (int)2);
		var_218_int = var_147_int;
		if(var_218_int != 0) {
			var_221_int = var_146_int + (int)1;
			var_223_int = var_221_int % (int)3;
			SetVariable("voice_common", var_223_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_226_bool = 0; var_227_object = Obj();
		var_140_object = var_227_object;
		func_6080(var_226_bool, var_227_object);
		var_228_bool = var_226_bool == 0; //@nz
		if(var_228_bool != 0) {
			var_229_bool = 0; var_230_object = Obj();
			var_140_object = var_230_object;
			func_6043(var_229_bool, var_230_object);
			var_231_bool = var_229_bool == 0; //@nz
			if(var_231_bool != 0) {
				var_139_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_6041;
	
Label_6041:
	var_139_bool = 1;
	return 4;
	
}


func_6502(var_188_object)
{
	Trace("raincoat_repel is given");
	var_191_object = Obj(); var_192_string = ""; var_193_int = 0;
	var_188_object = var_191_object;
	func_6258(var_191_object, "raincoat_repel", (int)1);
	return 0;
}


func_5478(var_0_object, var_1_object, var_2_object, var_3_string, var_994_object, var_995_object)
{
	var_0_object = var_995_object;
	var_1_object = var_994_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_1001_string = "";
		func_5536(var_995_object, "Neutral");
		@@@var_0_object:SetMessage((int)540548);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540549, (int)-1, (int)42558);
		@@@var_0_object:AddReply((int)540797, (int)-1, (int)42846);
		goto Label_5506;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x156a";
	}
Label_5506:
	var_1016_bool = 0;
	func_6335(var_1016_bool);
	if(var_1016_bool != 0) {

	Label_5510:
		lshWaitForAnimEnd();
		var_1017_string = var_3_string;
		if(var_1017_string != 0) {
		} else {
			var_1018_string = "";
			var_1018_string = var_2_object;
			func_6123(var_1018_string);
			goto Label_5510;
	}
		PlayAnimation("all", "idle");

	Label_5525:
		WaitForAnimEnd();
		var_1021_string = var_3_string;
		if(var_1021_string != 0) {
			goto Label_5535;
		}
		PlayAnimation("all", "idle");
		goto Label_5525;
	}
	goto Label_5535;
	
Label_5535:
	return 0;
	
}


func_7017(var_679_bool)
{
	var_681_int = 0; var_682_string = "";
	func_6192(var_681_int, "ood6Julia1");
	var_684_bool = var_681_int == (int)0;
	if(var_684_bool != 0) {
		var_679_bool = 1;
		return 0;
	}
	var_679_bool = 0;
	return 0;
}


func_6513()
{
	SetVariable("d9JuliaVisit", (int)1);
	return 0;
}


func_7029(var_695_bool)
{
	var_697_int = 0; var_698_string = "";
	func_6192(var_697_int, "ood6Julia2");
	var_700_bool = var_697_int == (int)0;
	if(var_700_bool != 0) {
		var_695_bool = 1;
		return 0;
	}
	var_695_bool = 0;
	return 0;
}


func_6519()
{
	func_7188();
	return 0;
}


func_379(var_0_object, var_632_int, var_633_object)
{
	var_635_object = Obj(); var_636_bool = 0; var_637_int = 0; var_638_bool = 0; var_639_object = Obj(); var_640_bool = 0; var_641_int = 0; var_642_bool = 0;
	var_0_object = var_633_object;
	var_643_bool = 0; var_644_object = Obj(); var_645_float = 0;
	var_633_object = var_644_object;
	func_5898(var_643_bool, var_644_object, (float)70.0);
	var_646_bool = var_643_bool == 0; //@nz
	if(var_646_bool != 0) {
		var_632_int = -2;
		return 8;
	}
	CreateDialog(var_639_object);
	var_647_int = 0;
	func_6329(var_647_int);
	@@var_639_object:SetNPCName(var_647_int);
	var_648_int = 0;
	func_6327(var_648_int);
	@@var_639_object:SetNPCDescription(var_648_int);
	var_649_string = "";
	func_6331(var_649_string);
	@@var_639_object:SetPhoto(var_649_string);
	var_650_string = "";
	func_6333(var_650_string);
	@@var_639_object:SetPhoto2(var_650_string);
	var_651_int = 0;
	func_7331(var_651_int);
	@@var_639_object:SetPlayerName(var_651_int);
	IsOverrideActive(var_640_bool);
	var_652_bool = var_640_bool;
	if(var_652_bool != 0) {
		var_632_int = -2;
		return 8;
	}
	DoDialog(var_639_object);
	var_653_bool = 0; var_654_object = Obj();
	func_6176(Obj());
	var_655_object = var_654_object;
	func_5985(var_653_bool, var_654_object);
	var_656_object = Obj(); var_657_object = Obj();
	var_633_object = var_656_object;
	var_639_object = var_657_object;
	TaskCall(3);
	func_460(var_658_object, var_659_object, var_660_string, var_661_bool, var_656_object, var_657_object);
	TaskReturn();
	@@var_639_object:IsDialogEnd(var_642_bool);
	
Label_442:
	var_747_bool = var_642_bool == 0; //@nz
	if(var_747_bool != 0) {
		sync();
		@@var_639_object:IsDialogEnd(var_642_bool);
		goto Label_442;
	}
	var_633_object = Obj();
	func_5967();
	StopDialog(var_639_object);
	@@var_639_object:GetReturnValue((int)-1);
	var_641_int = var_632_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6524()
{
	SetVariable("ood2Julia1", (int)1);
	return 0;
}


func_7041(var_707_bool)
{
	var_709_int = 0; var_710_string = "";
	func_6192(var_709_int, "microscope_d6q01_julia_blood");
	var_712_bool = var_709_int != (int)0;
	if(var_712_bool != 0) {
		var_707_bool = 1;
		return 0;
	}
	var_707_bool = 0;
	return 0;
}


func_6530(var_203_object)
{
	var_204_object = Obj(); var_205_string = ""; var_206_float = 0;
	func_7281(Obj());
	var_207_object = var_204_object;
	func_7298(var_204_object, "pt_map_anna", (float)2);
	var_208_object = Obj();
	func_7281(var_208_object);
	@@var_203_object:ShowMap(var_208_object);
	return 0;
}


func_7053(var_713_bool)
{
	var_715_int = 0; var_716_string = "";
	func_6192(var_715_int, "ood6Julia3");
	var_718_bool = var_715_int == (int)0;
	if(var_718_bool != 0) {
		var_713_bool = 1;
		return 0;
	}
	var_713_bool = 0;
	return 0;
}


func_1426(var_0_object, var_1_object, var_2_object, var_3_string, var_456_object, var_457_object)
{
	var_0_object = var_457_object;
	var_1_object = var_456_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_463_string = "";
		func_1522(var_457_object, "Neutral");
		@@@var_0_object:SetMessage((int)506914);
		@@@var_0_object:ClearReplies();
		var_472_bool = 0;
		var_472_bool = 0;
		var_473_bool = 0; var_474_object = Obj();
		var_474_object = var_1_object;
		func_6909(var_474_object);
		if(var_473_bool != 0) {
			var_479_bool = 0; var_480_object = Obj();
			var_480_object = var_1_object;
			func_6921(var_480_object);
			if(var_479_bool != 0) {
				var_472_bool = 1;
			}
		}
		if(var_472_bool != 0) {
			@@@var_0_object:AddReply((int)506915, (int)7622, (int)7621);
		}
		var_488_bool = 0;
		var_488_bool = 0;
		var_489_bool = 0; var_490_object = Obj();
		var_490_object = var_1_object;
		func_6863(var_490_object);
		if(var_489_bool != 0) {
			var_505_bool = 0; var_506_object = Obj();
			var_506_object = var_1_object;
			func_6897(var_506_object);
			if(var_505_bool != 0) {
				var_488_bool = 1;
			}
		}
		if(var_488_bool != 0) {
			@@@var_0_object:AddReply((int)533849, (int)10203, (int)35399);
		}
		@@@var_0_object:AddReply((int)507747, (int)-1, (int)8548);
		@@@var_0_object:AddReply((int)533869, (int)-1, (int)35422);
		goto Label_1492;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x596";
	}
Label_1492:
	var_520_bool = 0;
	func_6335(var_520_bool);
	if(var_520_bool != 0) {

	Label_1496:
		lshWaitForAnimEnd();
		var_521_string = var_3_string;
		if(var_521_string != 0) {
		} else {
			var_522_string = "";
			var_522_string = var_2_object;
			func_6123(var_522_string);
			goto Label_1496;
	}
		PlayAnimation("all", "idle");

	Label_1511:
		WaitForAnimEnd();
		var_525_string = var_3_string;
		if(var_525_string != 0) {
			goto Label_1521;
		}
		PlayAnimation("all", "idle");
		goto Label_1511;
	}
	goto Label_1521;
	
Label_1521:
	return 0;
	
}


func_6546()
{
	TriggerWorld("playsound", "mapmark");
	return 0;
}


func_4502(var_0_object, var_1_object, var_2_object, var_3_string, var_849_object, var_850_object)
{
	var_0_object = var_850_object;
	var_1_object = var_849_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_856_bool = 0; var_857_object = Obj();
		var_857_object = var_1_object;
		func_6815(var_857_object);
		if(var_856_bool != 0) {
			var_862_object = Obj(); var_863_object = Obj();
			var_862_object = var_1_object;
			var_863_object = var_0_object;
			func_6416();
			var_866_object = Obj(); var_867_object = Obj();
			var_866_object = var_1_object;
			var_867_object = var_0_object;
			func_6513();
			var_870_string = "";
			func_4600(var_850_object, "Fear");
			@@@var_0_object:SetMessage((int)533524);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)536154, (int)37921, (int)37920);
		} else {
				var_890_string = "";
				func_4600(var_850_object, "Neutral");
				@@@var_0_object:SetMessage((int)533532);
				@@@var_0_object:ClearReplies();
				var_892_bool = 0; var_893_object = Obj();
				var_893_object = var_1_object;
				func_6827(var_893_object);
				if(var_892_bool != 0) {
					@@@var_0_object:AddReply((int)533533, (int)35066, (int)35065);
				}
				@@@var_0_object:AddReply((int)533536, (int)-1, (int)35068);
				@@@var_0_object:AddReply((int)536193, (int)-1, (int)37965);
				goto Label_4570;
		}
	}
Label_4570:
	var_882_bool = 0;
	func_6335(var_882_bool);
	if(var_882_bool != 0) {

	Label_4574:
		lshWaitForAnimEnd();
		var_883_string = var_3_string;
		if(var_883_string != 0) {
		} else {
			var_884_string = "";
			var_884_string = var_2_object;
			func_6123(var_884_string);
			goto Label_4574;
	}
		PlayAnimation("all", "idle");

	Label_4589:
		WaitForAnimEnd();
		var_887_string = var_3_string;
		if(var_887_string != 0) {
			goto Label_4599;
		}
		PlayAnimation("all", "idle");
		goto Label_4589;

	}
	goto Label_4599;
	
Label_4599:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x119a";


func_6552()
{
	SetVariable("KnowJulia", (int)1);
	return 0;
}


func_7065(var_719_bool)
{
	var_721_int = 0; var_722_string = "";
	func_6192(var_721_int, "d6q01");
	var_724_bool = var_721_int == (int)1000;
	if(var_724_bool != 0) {
		var_719_bool = 1;
		return 0;
	}
	var_719_bool = 0;
	return 0;
}


func_6043(var_150_bool, var_151_object)
{
	var_152_string = ""; var_153_int = 0; var_154_bool = 0; var_155_int = 0; var_156_string = ""; var_157_string = ""; var_158_int = 0; var_159_bool = 0; var_160_int = 0; var_161_string = "";
	var_157_string = "c";
	var_158_int = 0;
	
Label_6046:
	if((int)1 != 0) {
		var_164_int = var_158_int + (int)1;
		var_165_int = var_157_string + var_164_int;
		@@var_151_object:HasProperty(var_165_int, var_159_bool);
		var_166_bool = var_159_bool == 0; //@nz
		if(var_166_bool != 0) {
		} else {
			var_158_int = var_158_int + (int)1;
			goto Label_6046;
		}
	}
	var_167_bool = var_158_int == 0; //@nz
	if(var_167_bool != 0) {
		var_150_bool = 0;
		return 10;
	}
	var_160_int = 0;
	var_169_bool = var_158_int > (int)1;
	if(var_169_bool != 0) {
		irand(var_160_int, var_158_int);
	}
	var_171_int = var_160_int + (int)1;
	var_172_int = var_157_string + var_171_int;
	@@var_151_object:GetProperty(var_172_int, var_161_string);
	var_173_bool = 0; var_174_string = "";
	var_161_string = var_174_string;
	func_6154(var_173_bool, var_174_string);
	var_173_bool = var_150_bool;
	return 10;
	
}


func_6558(var_96_object)
{
	var_97_object = Obj(); var_98_string = ""; var_99_float = 0;
	func_7281(Obj());
	var_100_object = var_97_object;
	func_7298(var_97_object, "pt_map_bigvlad", (float)2);
	var_120_object = Obj();
	func_7281(var_120_object);
	@@var_96_object:ShowMap(var_120_object);
	return 0;
}


func_5536(var_2_object, var_1001_string)
{
	var_1002_bool = 0;
	func_6335(var_1002_bool);
	var_1003_bool = var_1002_bool == 0; //@nz
	if(var_1003_bool != 0) {
		return 0;
	}
	var_1004_bool = var_1001_string == var_2_object;
	if(var_1004_bool != 0) {
		return 0;
	}
	var_1005_string = ""; var_1006_bool = 0;
	var_1001_string = var_1005_string;
	var_1008_bool = var_1001_string == "";
	if(var_1008_bool != 0) {
		var_1006_bool = 0;
	} else {
		var_1006_bool = 1;
	}
	func_6139(var_1005_string, var_1006_bool);
	var_2_object = var_1001_string;
	return 0;
	
}


func_1952(var_0_object, var_532_int, var_533_object)
{
	var_535_object = Obj(); var_536_bool = 0; var_537_int = 0; var_538_bool = 0; var_539_object = Obj(); var_540_bool = 0; var_541_int = 0; var_542_bool = 0;
	var_0_object = var_533_object;
	var_543_bool = 0; var_544_object = Obj(); var_545_float = 0;
	var_533_object = var_544_object;
	func_5898(var_543_bool, var_544_object, (float)70.0);
	var_546_bool = var_543_bool == 0; //@nz
	if(var_546_bool != 0) {
		var_532_int = -2;
		return 8;
	}
	CreateDialog(var_539_object);
	var_547_int = 0;
	func_6329(var_547_int);
	@@var_539_object:SetNPCName(var_547_int);
	var_548_int = 0;
	func_6327(var_548_int);
	@@var_539_object:SetNPCDescription(var_548_int);
	var_549_string = "";
	func_6331(var_549_string);
	@@var_539_object:SetPhoto(var_549_string);
	var_550_string = "";
	func_6333(var_550_string);
	@@var_539_object:SetPhoto2(var_550_string);
	var_551_int = 0;
	func_7331(var_551_int);
	@@var_539_object:SetPlayerName(var_551_int);
	IsOverrideActive(var_540_bool);
	var_552_bool = var_540_bool;
	if(var_552_bool != 0) {
		var_532_int = -2;
		return 8;
	}
	DoDialog(var_539_object);
	var_553_bool = 0; var_554_object = Obj();
	func_6176(Obj());
	var_555_object = var_554_object;
	func_5985(var_553_bool, var_554_object);
	var_556_object = Obj(); var_557_object = Obj();
	var_533_object = var_556_object;
	var_539_object = var_557_object;
	TaskCall(7);
	func_2033(var_558_object, var_559_object, var_560_string, var_561_bool, var_556_object, var_557_object);
	TaskReturn();
	@@var_539_object:IsDialogEnd(var_542_bool);
	
Label_2015:
	var_628_bool = var_542_bool == 0; //@nz
	if(var_628_bool != 0) {
		sync();
		@@var_539_object:IsDialogEnd(var_542_bool);
		goto Label_2015;
	}
	var_533_object = Obj();
	func_5967();
	StopDialog(var_539_object);
	@@var_539_object:GetReturnValue((int)-1);
	var_541_int = var_532_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7077(var_726_bool)
{
	var_728_int = 0; var_729_string = "";
	func_6192(var_728_int, "d6q01");
	var_731_bool = var_728_int == (int)-1;
	if(var_731_bool != 0) {
		var_726_bool = 1;
		return 0;
	}
	var_726_bool = 0;
	return 0;
}


func_6574(var_60_object)
{
	Trace("money3000 is given");
	var_63_object = Obj(); var_64_int = 0;
	var_60_object = var_63_object;
	func_6220(var_63_object, (int)3000);
	return 0;
}


func_7089(var_361_bool)
{
	var_363_bool = 0;
	var_363_bool = 0;
	var_364_bool = 0;
	var_364_bool = 0;
	var_365_int = 0; var_366_string = "";
	func_6192(var_365_int, "d1q01");
	var_368_bool = var_365_int != (int)0;
	if(var_368_bool != 0) {
		var_369_int = 0; var_370_string = "";
		func_6192(var_369_int, "d1q01");
		var_372_bool = var_369_int != (int)1000;
		if(var_372_bool != 0) {
			var_364_bool = 1;
		}
	}
	if(var_364_bool != 0) {
		var_373_int = 0; var_374_string = "";
		func_6192(var_373_int, "d1q01");
		var_376_bool = var_373_int != (int)-1;
		if(var_376_bool != 0) {
			var_363_bool = 1;
		}
	}
	if(var_363_bool != 0) {
		var_361_bool = 1;
		return 0;
	}
	var_361_bool = 0;
	return 0;
}


func_6584()
{
	SetVariable("ood4Julia1", (int)1);
	return 0;
}


func_6590()
{
	SetVariable("d4q02JuliaGivesMedcine", (int)1);
	return 0;
}


func_6080(var_181_bool, var_182_object)
{
	var_183_string = ""; var_184_int = 0; var_185_bool = 0; var_186_int = 0; var_187_string = ""; var_188_string = ""; var_189_int = 0; var_190_bool = 0; var_191_int = 0; var_192_string = "";
	var_194_int = 0;
	func_6288(var_194_int);
	var_200_int = "d" + var_194_int;
	var_188_string = var_200_int + "m";
	var_189_int = 0;
	
Label_6089:
	if((int)1 != 0) {
		var_204_int = var_189_int + (int)1;
		var_205_int = var_188_string + var_204_int;
		@@var_182_object:HasProperty(var_205_int, var_190_bool);
		var_206_bool = var_190_bool == 0; //@nz
		if(var_206_bool != 0) {
		} else {
			var_189_int = var_189_int + (int)1;
			goto Label_6089;
		}
	}
	var_207_bool = var_189_int == 0; //@nz
	if(var_207_bool != 0) {
		var_181_bool = 0;
		return 10;
	}
	var_191_int = 0;
	var_209_bool = var_189_int > (int)1;
	if(var_209_bool != 0) {
		irand(var_191_int, var_189_int);
	}
	var_211_int = var_191_int + (int)1;
	var_212_int = var_188_string + var_211_int;
	@@var_182_object:GetProperty(var_212_int, var_192_string);
	var_213_bool = 0; var_214_string = "";
	var_192_string = var_214_string;
	func_6154(var_213_bool, var_214_string);
	var_213_bool = var_181_bool;
	return 10;
	
}


func_6596(var_63_object)
{
	var_64_object = Obj(); var_65_object = Obj();
	var_66_bool = 0;
	var_66_bool = 0;
	var_67_bool = 0;
	var_67_bool = 0;
	var_68_int = 0; var_69_string = "";
	func_6192(var_68_int, "d4q02AnnaGivesMedcine");
	var_73_bool = var_68_int == (int)1;
	if(var_73_bool != 0) {
		var_74_int = 0; var_75_string = "";
		func_6192(var_74_int, "d4q02JuliaGivesMedcine");
		var_77_bool = var_74_int == (int)1;
		if(var_77_bool != 0) {
			var_67_bool = 1;
		}
	}
	if(var_67_bool != 0) {
		var_78_int = 0; var_79_string = "";
		func_6192(var_78_int, "d4q02LaraGivesMedcine");
		var_81_bool = var_78_int == (int)1;
		if(var_81_bool != 0) {
			var_66_bool = 1;
		}
	}
	if(var_66_bool != 0) {
		SetVariable("d4q02", (int)2);
		func_7281(Obj());
		var_84_object = var_65_object;
		var_95_float = 0;
		func_6283(var_95_float);
		@@var_65_object:AddMark("d4q02BirdmaskNearHome", "pt_d4q02_birdmask", (int)0, (int)511842, var_95_float);
		var_98_bool = 0; var_99_string = ""; var_100_string = "";
		func_6271(var_98_bool, "quest_d4_02", "birdmask");
		var_104_object = Obj(); var_105_string = ""; var_106_float = 0;
		func_7281(Obj());
		var_107_object = var_104_object;
		func_7298(var_104_object, "pt_d4q02_birdmask", (float)2);
		var_127_object = Obj();
		func_7281(var_127_object);
		@@var_63_object:ShowMap(var_127_object);
		var_65_object = 0;
	}
	return 2;
}


func_460(var_0_object, var_1_object, var_2_object, var_3_string, var_656_object, var_657_object)
{
	var_0_object = var_657_object;
	var_1_object = var_656_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_663_string = "";
		func_590(var_657_object, "Neutral");
		@@@var_0_object:SetMessage((int)503640);
		@@@var_0_object:ClearReplies();
		var_672_bool = 0;
		var_672_bool = 0;
		var_673_bool = 0; var_674_object = Obj();
		var_674_object = var_1_object;
		func_7005(var_674_object);
		if(var_673_bool != 0) {
			var_679_bool = 0; var_680_object = Obj();
			var_680_object = var_1_object;
			func_7017(var_680_object);
			if(var_679_bool != 0) {
				var_672_bool = 1;
			}
		}
		if(var_672_bool != 0) {
			@@@var_0_object:AddReply((int)503641, (int)3945, (int)3943);
		}
		var_688_bool = 0;
		var_688_bool = 0;
		var_689_bool = 0; var_690_object = Obj();
		var_690_object = var_1_object;
		func_6993(var_690_object);
		if(var_689_bool != 0) {
			var_695_bool = 0; var_696_object = Obj();
			var_696_object = var_1_object;
			func_7029(var_696_object);
			if(var_695_bool != 0) {
				var_688_bool = 1;
			}
		}
		if(var_688_bool != 0) {
			@@@var_0_object:AddReply((int)512733, (int)11803, (int)13927);
		}
		var_704_bool = 0;
		var_704_bool = 0;
		var_705_bool = 0;
		var_705_bool = 0;
		var_706_bool = 0;
		var_706_bool = 0;
		var_707_bool = 0; var_708_object = Obj();
		var_708_object = var_1_object;
		func_7041(var_708_object);
		if(var_707_bool != 0) {
			var_713_bool = 0; var_714_object = Obj();
			var_714_object = var_1_object;
			func_7053(var_714_object);
			if(var_713_bool != 0) {
				var_706_bool = 1;
			}
		}
		if(var_706_bool != 0) {
			var_719_bool = 0; var_720_object = Obj();
			var_720_object = var_1_object;
			func_7065(var_720_object);
			var_725_bool = var_719_bool == 0; //@nz
			if(var_725_bool != 0) {
				var_705_bool = 1;
			}
		}
		if(var_705_bool != 0) {
			var_726_bool = 0; var_727_object = Obj();
			var_727_object = var_1_object;
			func_7077(var_727_object);
			var_732_bool = var_726_bool == 0; //@nz
			if(var_732_bool != 0) {
				var_704_bool = 1;
			}
		}
		if(var_704_bool != 0) {
			@@@var_0_object:AddReply((int)512734, (int)11840, (int)13928);
		}
		@@@var_0_object:AddReply((int)503642, (int)-1, (int)3944);
		goto Label_560;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1d0";
	}
Label_560:
	var_739_bool = 0;
	func_6335(var_739_bool);
	if(var_739_bool != 0) {

	Label_564:
		lshWaitForAnimEnd();
		var_740_string = var_3_string;
		if(var_740_string != 0) {
		} else {
			var_741_string = "";
			var_741_string = var_2_object;
			func_6123(var_741_string);
			goto Label_564;
	}
		PlayAnimation("all", "idle");

	Label_579:
		WaitForAnimEnd();
		var_744_string = var_3_string;
		if(var_744_string != 0) {
			goto Label_589;
		}
		PlayAnimation("all", "idle");
		goto Label_579;
	}
	goto Label_589;
	
Label_589:
	return 0;
	
}


func_7123()
{
	var_72_object = Obj(); var_73_object = Obj();
	CreateDiaryEntry(var_73_object, (int)49, (int)1, (int)512131);
	var_77_bool = 0; var_78_object = Obj(); var_79_int = 0;
	var_73_object = var_78_object;
	func_7253(var_77_bool, var_78_object, (int)2);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4062(var_0_object, var_751_int, var_752_object)
{
	var_754_object = Obj(); var_755_bool = 0; var_756_int = 0; var_757_bool = 0; var_758_object = Obj(); var_759_bool = 0; var_760_int = 0; var_761_bool = 0;
	var_0_object = var_752_object;
	var_762_bool = 0; var_763_object = Obj(); var_764_float = 0;
	var_752_object = var_763_object;
	func_5898(var_762_bool, var_763_object, (float)70.0);
	var_765_bool = var_762_bool == 0; //@nz
	if(var_765_bool != 0) {
		var_751_int = -2;
		return 8;
	}
	CreateDialog(var_758_object);
	var_766_int = 0;
	func_6329(var_766_int);
	@@var_758_object:SetNPCName(var_766_int);
	var_767_int = 0;
	func_6327(var_767_int);
	@@var_758_object:SetNPCDescription(var_767_int);
	var_768_string = "";
	func_6331(var_768_string);
	@@var_758_object:SetPhoto(var_768_string);
	var_769_string = "";
	func_6333(var_769_string);
	@@var_758_object:SetPhoto2(var_769_string);
	var_770_int = 0;
	func_7331(var_770_int);
	@@var_758_object:SetPlayerName(var_770_int);
	IsOverrideActive(var_759_bool);
	var_771_bool = var_759_bool;
	if(var_771_bool != 0) {
		var_751_int = -2;
		return 8;
	}
	DoDialog(var_758_object);
	var_772_bool = 0; var_773_object = Obj();
	func_6176(Obj());
	var_774_object = var_773_object;
	func_5985(var_772_bool, var_773_object);
	var_775_object = Obj(); var_776_object = Obj();
	var_752_object = var_775_object;
	var_758_object = var_776_object;
	TaskCall(11);
	func_4143(var_777_object, var_778_object, var_779_string, var_780_bool, var_775_object, var_776_object);
	TaskReturn();
	@@var_758_object:IsDialogEnd(var_761_bool);
	
Label_4125:
	var_821_bool = var_761_bool == 0; //@nz
	if(var_821_bool != 0) {
		sync();
		@@var_758_object:IsDialogEnd(var_761_bool);
		goto Label_4125;
	}
	var_752_object = Obj();
	func_5967();
	StopDialog(var_758_object);
	@@var_758_object:GetReturnValue((int)-1);
	var_760_int = var_751_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_7136()
{
	var_178_object = Obj(); var_179_object = Obj();
	CreateDiaryEntry(var_179_object, (int)7, (int)2, (int)503078);
	var_183_bool = 0; var_184_object = Obj(); var_185_int = 0;
	var_179_object = var_184_object;
	func_7253(var_183_bool, var_184_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5607(var_0_object)
{
	var_47_bool = 0;
	func_5893(var_47_bool);
	var_50_bool = var_47_bool == 0; //@nz
	if(var_50_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_5616:
	func_5783();
	goto Label_5616;
}
EMIT "Return(); Pop(0)";


func_6123(var_274_string)
{
	var_275_bool = 0; var_276_float = 0; var_277_float = 0; var_278_bool = 0; var_279_float = 0; var_280_float = 0;
	lshHasAnimation(var_278_bool, var_274_string);
	var_281_bool = var_278_bool;
	if(var_281_bool != 0) {
		lshGetAnimTimes(var_274_string, var_279_float, var_280_float);
		lshPlayAnimation(var_279_float, var_280_float, (bool)0);
	} else {
		var_284_int = "Can't find lsh animation : " + var_274_string;
		Trace(var_284_int);
	}
	return 6;
	
}


func_7149()
{
	var_186_object = Obj(); var_187_object = Obj();
	CreateDiaryEntry(var_187_object, (int)624, (int)2, (int)532714);
	var_191_bool = 0; var_192_object = Obj(); var_193_int = 0;
	var_187_object = var_192_object;
	func_7253(var_191_bool, var_192_object, (int)7);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2033(var_0_object, var_1_object, var_2_object, var_3_string, var_556_object, var_557_object)
{
	var_0_object = var_557_object;
	var_1_object = var_556_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_563_string = "";
		func_2144(var_557_object, "Fear");
		@@@var_0_object:SetMessage((int)511320);
		@@@var_0_object:ClearReplies();
		var_572_bool = 0;
		var_572_bool = 0;
		var_573_bool = 0; var_574_object = Obj();
		var_574_object = var_1_object;
		func_6945(var_574_object);
		if(var_573_bool != 0) {
			var_579_bool = 0; var_580_object = Obj();
			var_580_object = var_1_object;
			func_6933(var_580_object);
			if(var_579_bool != 0) {
				var_572_bool = 1;
			}
		}
		if(var_572_bool != 0) {
			@@@var_0_object:AddReply((int)511321, (int)12516, (int)12515);
		}
		var_588_bool = 0;
		var_588_bool = 0;
		var_589_bool = 0; var_590_object = Obj();
		var_590_object = var_1_object;
		func_6957(var_590_object);
		var_595_bool = var_589_bool == 0; //@nz
		if(var_595_bool != 0) {
			var_596_bool = 0; var_597_object = Obj();
			var_597_object = var_1_object;
			func_6933(var_597_object);
			if(var_596_bool != 0) {
				var_588_bool = 1;
			}
		}
		if(var_588_bool != 0) {
			@@@var_0_object:AddReply((int)511469, (int)12676, (int)12675);
		}
		var_601_bool = 0;
		var_601_bool = 0;
		var_602_bool = 0; var_603_object = Obj();
		var_603_object = var_1_object;
		func_6981(var_603_object);
		if(var_602_bool != 0) {
			var_608_bool = 0; var_609_object = Obj();
			var_609_object = var_1_object;
			func_6969(var_609_object);
			if(var_608_bool != 0) {
				var_601_bool = 1;
			}
		}
		if(var_601_bool != 0) {
			@@@var_0_object:AddReply((int)511856, (int)13070, (int)13069);
		}
		@@@var_0_object:AddReply((int)511472, (int)-1, (int)12678);
		goto Label_2114;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x7f5";
	}
Label_2114:
	var_620_bool = 0;
	func_6335(var_620_bool);
	if(var_620_bool != 0) {

	Label_2118:
		lshWaitForAnimEnd();
		var_621_string = var_3_string;
		if(var_621_string != 0) {
		} else {
			var_622_string = "";
			var_622_string = var_2_object;
			func_6123(var_622_string);
			goto Label_2118;
	}
		PlayAnimation("all", "idle");

	Label_2133:
		WaitForAnimEnd();
		var_625_string = var_3_string;
		if(var_625_string != 0) {
			goto Label_2143;
		}
		PlayAnimation("all", "idle");
		goto Label_2133;
	}
	goto Label_2143;
	
Label_2143:
	return 0;
	
}


func_1522(var_2_object, var_463_string)
{
	var_464_bool = 0;
	func_6335(var_464_bool);
	var_465_bool = var_464_bool == 0; //@nz
	if(var_465_bool != 0) {
		return 0;
	}
	var_466_bool = var_463_string == var_2_object;
	if(var_466_bool != 0) {
		return 0;
	}
	var_467_string = ""; var_468_bool = 0;
	var_463_string = var_467_string;
	var_470_bool = var_463_string == "";
	if(var_470_bool != 0) {
		var_468_bool = 0;
	} else {
		var_468_bool = 1;
	}
	func_6139(var_467_string, var_468_bool);
	var_2_object = var_463_string;
	return 0;
	
}


func_5621(var_71_bool)
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
	func_5884(var_76_bool, var_77_object);
	var_76_bool = var_71_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4600(var_2_object, var_870_string)
{
	var_871_bool = 0;
	func_6335(var_871_bool);
	var_872_bool = var_871_bool == 0; //@nz
	if(var_872_bool != 0) {
		return 0;
	}
	var_873_bool = var_870_string == var_2_object;
	if(var_873_bool != 0) {
		return 0;
	}
	var_874_string = ""; var_875_bool = 0;
	var_870_string = var_874_string;
	var_877_bool = var_870_string == "";
	if(var_877_bool != 0) {
		var_875_bool = 0;
	} else {
		var_875_bool = 1;
	}
	func_6139(var_874_string, var_875_bool);
	var_2_object = var_870_string;
	return 0;
	
}


func_7162()
{
	var_66_object = Obj(); var_67_object = Obj();
	CreateDiaryEntry(var_67_object, (int)161, (int)1, (int)515394);
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0;
	var_67_object = var_72_object;
	func_7253(var_71_bool, var_72_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6139(var_249_string, var_250_bool)
{
	var_253_bool = 0; var_254_float = 0; var_255_float = 0; var_256_bool = 0; var_257_float = 0; var_258_float = 0;
	lshHasAnimation(var_256_bool, var_249_string);
	var_259_bool = var_256_bool;
	if(var_259_bool != 0) {
		lshGetAnimTimes(var_249_string, var_257_float, var_258_float);
		lshPlayAnimation(var_257_float, var_258_float, var_250_bool);
	} else {
		var_261_int = "Can't find lsh animation : " + var_249_string;
		Trace(var_261_int);
	}
	return 6;
	
}


