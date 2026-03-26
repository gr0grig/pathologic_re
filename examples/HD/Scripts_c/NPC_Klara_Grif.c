// @IMPORTS: DoTrade/0,lshWaitForAnimEnd/0,lshStopAnimation/0,StopTrade/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,PlayAnimation/2,WaitForAnimEnd/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,AddItem/3,AddItem/4,self/1,Trigger/2,GetGameTime/1,HasAnimation/3,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1,ClearSubContainer/1,GetInvItemByName/2
// @STRINGS: W:Neutral|A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Fear|W:Sly|W:Anger|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:ui/NPC_Grif.png|W:ui/NPC_Grif_b.png|W:pt_map_notkin|A:ShowMap|W:k4q01|W:k4q01GrifGotoNotkin|A:AddMark|W:k4q01GrifGotoBraga|W:pt_map_warehouse_gangster|W:quest_k4_01|W:init_volnica|W:k11q01SoulCount|W:ook11Grif1|A:SetReturnValue|W:k11q01|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:Rifle|W:Revolver|W:Knife|W:tvirin|W:lockpick|W:Scalpel|W:revolver_ammo|W:rifle_ammo|W:kerosene|W:halfboot_repel|W:boot_army|W:balahon|W:glove_army|W:Gun_danko|W:Gun|W:branch
// @GLOBALS: 0:object:,1:bool:,2:int:
// @RUN_OP: 0xfad
// @RUN_TASK: 27
// @TASK_0: vars=bool params=1
// @EVENT_11: op=0xf vars=int
// @TASK_1: vars=object params=2
// @TASK_2: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb7 vars=int,int
// @TASK_3: vars=object params=2
// @TASK_4: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1bc vars=int,int
// @TASK_5: vars=object params=2
// @TASK_6: vars=object,object,string,bool params=2
// @EVENT_11: op=0x5e5 vars=int,int
// @TASK_7: vars=object params=2
// @TASK_8: vars=object,object,string,bool params=2
// @EVENT_11: op=0x6c2 vars=int,int
// @TASK_9: vars=object params=2
// @TASK_10: vars=object,object,string,bool params=2
// @EVENT_11: op=0x79f vars=int,int
// @TASK_11: vars=object params=2
// @TASK_12: vars=object,object,string,bool params=2
// @EVENT_11: op=0x87c vars=int,int
// @TASK_13: vars=object params=2
// @TASK_14: vars=object,object,string,bool params=2
// @EVENT_11: op=0x959 vars=int,int
// @TASK_15: vars=object params=2
// @TASK_16: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa31 vars=int,int
// @TASK_17: vars=object params=2
// @TASK_18: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb09 vars=int,int
// @TASK_19: vars=object params=2
// @TASK_20: vars=object,object,string,bool params=2
// @EVENT_11: op=0xbe6 vars=int,int
// @TASK_21: vars=object params=2
// @TASK_22: vars=object,object,string,bool params=2
// @EVENT_11: op=0xcbe vars=int,int
// @TASK_23: vars=object params=2
// @TASK_24: vars=object,object,string,bool params=2
// @EVENT_11: op=0xda4 vars=int,int
// @TASK_25: vars=object params=2
// @TASK_26: vars=object,object,string,bool params=2
// @EVENT_11: op=0xf22 vars=int,int
// @TASK_27: vars=cvector params=0
// @EVENT_7: op=0xffc vars=int
// @EVENT_6: op=0x1022 vars=
// @EVENT_5: op=0x1031 vars=
// @EVENT_45: op=0x103e vars=bool
// @EVENT_0: op=0x104a vars=object
// @PE: 0x0,0xf,0x67,0xa1,0xb7,0x149,0x1a6,0x1bc,0x590,0x5cf,0x5e5,0x66d,0x6ac,0x6c2,0x74a,0x789,0x79f,0x827,0x866,0x87c,0x904,0x943,0x959,0x9e1,0xa1b,0xa31,0xab4,0xaf3,0xb09,0xb91,0xbd0,0xbe6,0xc6e,0xca8,0xcbe,0xd41,0xd8e,0xda4,0xecd,0xf0c,0xf22,0xffc,0x1022,0x103e,0x11b4,0x11ec,0x1276,0x129e,0x12e1,0x131d,0x1323,0x132c,0x133c,0x1341,0x134d,0x1359,0x1365,0x1371,0x151f,0x1532

task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_cvector)
{
	lshStopAnimation();
	StopTrade();
	var_0_bool = true;
	return 0;
}


task_2_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_4639();
		var_72_bool = var_67_bool == (int)26839;
		if(var_72_bool != 0) {
			var_73_string = "";
			func_161(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)525483);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)525484, (int)30758, (int)26840);
			@@@var_0_bool:AddReply((int)529303, (int)-1, (int)30757);
			return 0;
		}
		var_98_bool = var_67_bool == (int)30758;
		if(var_98_bool != 0) {
			var_99_string = "";
			func_161(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)529304);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)529305, (int)-1, (int)30759);
			@@@var_0_bool:AddReply((int)542281, (int)-1, (int)44626);
			return 0;
		}
		var_3_object = true;
		var_107_bool = 0;
		func_4764(var_107_bool);
		if(var_107_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb8";
	
}


task_4_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_4639();
		var_72_bool = var_68_cvector == (int)27011;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_4782();
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_bool;
			func_4766(var_117_object);
		}
		var_143_bool = var_68_cvector == (int)44725;
		if(var_143_bool != 0) {
			var_144_object = Obj(); var_145_object = Obj();
			var_144_object = var_1_object;
			var_145_object = var_0_bool;
			func_4782();
		}
		var_147_bool = var_68_cvector == (int)27021;
		if(var_147_bool != 0) {
			var_148_object = Obj(); var_149_object = Obj();
			var_148_object = var_1_object;
			var_149_object = var_0_bool;
			func_4805();
			var_174_object = Obj(); var_175_object = Obj();
			var_174_object = var_1_object;
			var_175_object = var_0_bool;
			func_4908(var_175_object);
		}
		var_182_bool = var_68_cvector == (int)44742;
		if(var_182_bool != 0) {
			var_183_object = Obj(); var_184_object = Obj();
			var_183_object = var_1_object;
			var_184_object = var_0_bool;
			func_4805();
		}
		var_186_bool = var_68_cvector == (int)27037;
		if(var_186_bool != 0) {
			var_187_object = Obj(); var_188_object = Obj();
			var_187_object = var_1_object;
			var_188_object = var_0_bool;
			func_4833();
		}
		var_200_bool = var_68_cvector == (int)27038;
		if(var_200_bool != 0) {
			var_201_object = Obj(); var_202_object = Obj();
			var_201_object = var_1_object;
			var_202_object = var_0_bool;
			func_4833();
		}
		var_204_bool = var_68_cvector == (int)44753;
		if(var_204_bool != 0) {
			var_205_object = Obj(); var_206_object = Obj();
			var_205_object = var_1_object;
			var_206_object = var_0_bool;
			func_4899();
		}
		var_218_bool = var_68_cvector == (int)44754;
		if(var_218_bool != 0) {
			var_219_object = Obj(); var_220_object = Obj();
			var_219_object = var_1_object;
			var_220_object = var_0_bool;
			func_4899();
		}
		var_222_bool = var_68_cvector == (int)27943;
		if(var_222_bool != 0) {
			var_223_object = Obj(); var_224_object = Obj();
			var_223_object = var_1_object;
			var_224_object = var_0_bool;
			func_4924(var_224_object);
		}
		var_227_bool = var_67_bool == (int)27004;
		if(var_227_bool != 0) {
			var_228_string = "";
			func_422(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)525681);
			@@@var_0_bool:ClearReplies();
			var_246_bool = 0; var_247_object = Obj();
			var_247_object = var_1_object;
			func_4929(var_247_object);
			if(var_246_bool != 0) {
				@@@var_0_bool:AddReply((int)525682, (int)44708, (int)27005);
			}
			var_257_bool = 0; var_258_object = Obj();
			var_258_object = var_1_object;
			func_4941(var_258_object);
			if(var_257_bool != 0) {
				@@@var_0_bool:AddReply((int)525696, (int)30190, (int)27019);
			}
			var_266_bool = 0; var_267_object = Obj();
			var_267_object = var_1_object;
			func_4953(var_267_object);
			if(var_266_bool != 0) {
				@@@var_0_bool:AddReply((int)525709, (int)27032, (int)27031);
			}
			@@@var_0_bool:AddReply((int)526667, (int)-1, (int)27943);
			@@@var_0_bool:AddReply((int)525689, (int)-1, (int)27012);
			@@@var_0_bool:AddReply((int)528783, (int)-1, (int)30195);
			return 0;
		}
		var_285_bool = var_67_bool == (int)27032;
		if(var_285_bool != 0) {
			var_286_string = "";
			func_422(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)525710);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)525711, (int)27034, (int)27033);
			return 0;
		}
		var_292_bool = var_67_bool == (int)27034;
		if(var_292_bool != 0) {
			var_293_string = "";
			func_422(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)525712);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)525713, (int)44727, (int)27035);
			@@@var_0_bool:AddReply((int)542369, (int)44727, (int)44735);
			return 0;
		}
		var_302_bool = var_67_bool == (int)44727;
		if(var_302_bool != 0) {
			var_303_string = "";
			func_422(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)542361);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542362, (int)44729, (int)44728);
			@@@var_0_bool:AddReply((int)542374, (int)44743, (int)44741);
			return 0;
		}
		var_312_bool = var_67_bool == (int)44743;
		if(var_312_bool != 0) {
			var_313_string = "";
			func_422(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)542376);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542377, (int)44746, (int)44744);
			@@@var_0_bool:AddReply((int)542378, (int)44751, (int)44745);
			return 0;
		}
		var_322_bool = var_67_bool == (int)44746;
		if(var_322_bool != 0) {
			var_323_string = "";
			func_422(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)542379);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542380, (int)44748, (int)44747);
			return 0;
		}
		var_329_bool = var_67_bool == (int)44748;
		if(var_329_bool != 0) {
			var_330_string = "";
			func_422(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)542381);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542382, (int)44755, (int)44749);
			@@@var_0_bool:AddReply((int)542383, (int)44751, (int)44750);
			return 0;
		}
		var_339_bool = var_67_bool == (int)44751;
		if(var_339_bool != 0) {
			var_340_string = "";
			func_422(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)542384);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542385, (int)-1, (int)44753);
			@@@var_0_bool:AddReply((int)542386, (int)-1, (int)44754);
			return 0;
		}
		var_349_bool = var_67_bool == (int)44755;
		if(var_349_bool != 0) {
			var_350_string = "";
			func_422(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)542387);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542388, (int)44751, (int)44756);
			return 0;
		}
		var_356_bool = var_67_bool == (int)44729;
		if(var_356_bool != 0) {
			var_357_string = "";
			func_422(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)542363);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542364, (int)44731, (int)44730);
			return 0;
		}
		var_363_bool = var_67_bool == (int)44731;
		if(var_363_bool != 0) {
			var_364_string = "";
			func_422(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)542365);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542370, (int)44738, (int)44737);
			@@@var_0_bool:AddReply((int)542389, (int)44759, (int)44758);
			return 0;
		}
		var_373_bool = var_67_bool == (int)44759;
		if(var_373_bool != 0) {
			var_374_string = "";
			func_422(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)542390);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542391, (int)44738, (int)44760);
			return 0;
		}
		var_380_bool = var_67_bool == (int)44738;
		if(var_380_bool != 0) {
			var_381_string = "";
			func_422(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)542371);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542372, (int)44740, (int)44739);
			@@@var_0_bool:AddReply((int)542392, (int)44763, (int)44762);
			return 0;
		}
		var_390_bool = var_67_bool == (int)44763;
		if(var_390_bool != 0) {
			var_391_string = "";
			func_422(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)542393);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542399, (int)44773, (int)44772);
			@@@var_0_bool:AddReply((int)542397, (int)44740, (int)44769);
			return 0;
		}
		var_400_bool = var_67_bool == (int)44773;
		if(var_400_bool != 0) {
			var_401_string = "";
			func_422(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)542400);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542394, (int)27036, (int)44764);
			return 0;
		}
		var_407_bool = var_67_bool == (int)44740;
		if(var_407_bool != 0) {
			var_408_string = "";
			func_422(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)542373);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542366, (int)44733, (int)44732);
			@@@var_0_bool:AddReply((int)542398, (int)44773, (int)44771);
			return 0;
		}
		var_417_bool = var_67_bool == (int)44733;
		if(var_417_bool != 0) {
			var_418_string = "";
			func_422(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)542367);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542368, (int)27036, (int)44734);
			@@@var_0_bool:AddReply((int)542395, (int)27036, (int)44765);
			return 0;
		}
		var_427_bool = var_67_bool == (int)27036;
		if(var_427_bool != 0) {
			var_428_string = "";
			func_422(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)525714);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)525715, (int)-1, (int)27037);
			@@@var_0_bool:AddReply((int)525716, (int)-1, (int)27038);
			return 0;
		}
		var_437_bool = var_67_bool == (int)30190;
		if(var_437_bool != 0) {
			var_438_string = "";
			func_422(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)528778);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)541118, (int)43236, (int)43235);
			@@@var_0_bool:AddReply((int)528779, (int)30192, (int)30191);
			return 0;
		}
		var_447_bool = var_67_bool == (int)30192;
		if(var_447_bool != 0) {
			var_448_string = "";
			func_422(var_68_cvector, "Anger");
			@@@var_0_bool:SetMessage((int)528780);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)528781, (int)43241, (int)30193);
			@@@var_0_bool:AddReply((int)528782, (int)27020, (int)30194);
			return 0;
		}
		var_457_bool = var_67_bool == (int)43241;
		if(var_457_bool != 0) {
			var_458_string = "";
			func_422(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)541122);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)541123, (int)43243, (int)43242);
			return 0;
		}
		var_464_bool = var_67_bool == (int)43243;
		if(var_464_bool != 0) {
			var_465_string = "";
			func_422(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)541124);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)541125, (int)27020, (int)43244);
			return 0;
		}
		var_471_bool = var_67_bool == (int)43236;
		if(var_471_bool != 0) {
			var_472_string = "";
			func_422(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)541119);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)541120, (int)27020, (int)43237);
			return 0;
		}
		var_478_bool = var_67_bool == (int)27020;
		if(var_478_bool != 0) {
			var_479_string = "";
			func_422(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)525697);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)528773, (int)43245, (int)30184);
			@@@var_0_bool:AddReply((int)541121, (int)43245, (int)43239);
			return 0;
		}
		var_488_bool = var_67_bool == (int)43245;
		if(var_488_bool != 0) {
			var_489_string = "";
			func_422(var_68_cvector, "Anger");
			@@@var_0_bool:SetMessage((int)541126);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)541127, (int)30185, (int)43246);
			@@@var_0_bool:AddReply((int)541128, (int)43249, (int)43248);
			return 0;
		}
		var_498_bool = var_67_bool == (int)43249;
		if(var_498_bool != 0) {
			var_499_string = "";
			func_422(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)541129);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)541130, (int)30185, (int)43250);
			return 0;
		}
		var_505_bool = var_67_bool == (int)30185;
		if(var_505_bool != 0) {
			var_506_string = "";
			func_422(var_68_cvector, "Anger");
			@@@var_0_bool:SetMessage((int)528774);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)528775, (int)30187, (int)30186);
			@@@var_0_bool:AddReply((int)528777, (int)30187, (int)30188);
			return 0;
		}
		var_515_bool = var_67_bool == (int)30187;
		if(var_515_bool != 0) {
			var_516_string = "";
			func_422(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)528776);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)525698, (int)-1, (int)27021);
			@@@var_0_bool:AddReply((int)542375, (int)-1, (int)44742);
			return 0;
		}
		var_525_bool = var_67_bool == (int)44708;
		if(var_525_bool != 0) {
			var_526_string = "";
			func_422(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)542345);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542346, (int)44710, (int)44709);
			@@@var_0_bool:AddReply((int)542349, (int)44713, (int)44712);
			return 0;
		}
		var_535_bool = var_67_bool == (int)44713;
		if(var_535_bool != 0) {
			var_536_string = "";
			func_422(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)542350);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542351, (int)27010, (int)44714);
			return 0;
		}
		var_542_bool = var_67_bool == (int)44710;
		if(var_542_bool != 0) {
			var_543_string = "";
			func_422(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)542347);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542348, (int)27006, (int)44711);
			return 0;
		}
		var_549_bool = var_67_bool == (int)27006;
		if(var_549_bool != 0) {
			var_550_string = "";
			func_422(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)525683);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)525684, (int)27008, (int)27007);
			@@@var_0_bool:AddReply((int)541117, (int)27008, (int)43233);
			return 0;
		}
		var_559_bool = var_67_bool == (int)27008;
		if(var_559_bool != 0) {
			var_560_string = "";
			func_422(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)525685);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)525686, (int)27010, (int)27009);
			@@@var_0_bool:AddReply((int)542352, (int)44716, (int)44715);
			return 0;
		}
		var_569_bool = var_67_bool == (int)44716;
		if(var_569_bool != 0) {
			var_570_string = "";
			func_422(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)542353);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542354, (int)44718, (int)44717);
			return 0;
		}
		var_576_bool = var_67_bool == (int)44718;
		if(var_576_bool != 0) {
			var_577_string = "";
			func_422(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)542355);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542356, (int)27010, (int)44719);
			@@@var_0_bool:AddReply((int)542357, (int)27010, (int)44720);
			return 0;
		}
		var_586_bool = var_67_bool == (int)27010;
		if(var_586_bool != 0) {
			var_587_string = "";
			func_422(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)525687);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)525688, (int)-1, (int)27011);
			@@@var_0_bool:AddReply((int)542360, (int)-1, (int)44725);
			return 0;
		}
		var_3_object = true;
		var_595_bool = 0;
		func_4764(var_595_bool);
		if(var_595_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1bd";
	
}


task_6_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_int, var_17_int, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_4639();
		var_72_bool = var_68_cvector == (int)27933;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_4924(var_74_object);
		}
		var_77_bool = var_67_bool == (int)27932;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_1487(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)526656);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)526657, (int)-1, (int)27933);
			@@@var_0_bool:AddReply((int)526658, (int)-1, (int)27934);
			@@@var_0_bool:AddReply((int)542279, (int)-1, (int)44624);
			return 0;
		}
		var_3_object = true;
		var_105_bool = 0;
		func_4764(var_105_bool);
		if(var_105_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x5e6";
	
}


task_8_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_int, var_22_int, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_4639();
		var_72_bool = var_68_cvector == (int)27937;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_4924(var_74_object);
		}
		var_77_bool = var_67_bool == (int)27936;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_1708(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)526660);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)526661, (int)-1, (int)27937);
			@@@var_0_bool:AddReply((int)526662, (int)-1, (int)27938);
			@@@var_0_bool:AddReply((int)528771, (int)-1, (int)30182);
			return 0;
		}
		var_3_object = true;
		var_105_bool = 0;
		func_4764(var_105_bool);
		if(var_105_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x6c3";
	
}


task_10_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_int, var_27_int, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_4639();
		var_72_bool = var_68_cvector == (int)27941;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_4924(var_74_object);
		}
		var_77_bool = var_67_bool == (int)27940;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_1929(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)526664);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)526665, (int)-1, (int)27941);
			@@@var_0_bool:AddReply((int)526666, (int)-1, (int)27942);
			@@@var_0_bool:AddReply((int)528772, (int)-1, (int)30183);
			return 0;
		}
		var_3_object = true;
		var_105_bool = 0;
		func_4764(var_105_bool);
		if(var_105_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x7a0";
	
}


task_12_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_int, var_32_int, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_4639();
		var_72_bool = var_68_cvector == (int)27946;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_4924(var_74_object);
		}
		var_77_bool = var_67_bool == (int)27945;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_2150(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)526669);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)526670, (int)-1, (int)27946);
			@@@var_0_bool:AddReply((int)526671, (int)-1, (int)27947);
			@@@var_0_bool:AddReply((int)528784, (int)-1, (int)30196);
			return 0;
		}
		var_3_object = true;
		var_105_bool = 0;
		func_4764(var_105_bool);
		if(var_105_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x87d";
	
}


task_14_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_int, var_37_int, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_4639();
		var_72_bool = var_68_cvector == (int)27950;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_4924(var_74_object);
		}
		var_77_bool = var_67_bool == (int)27949;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_2371(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)526673);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)526674, (int)-1, (int)27950);
			@@@var_0_bool:AddReply((int)526675, (int)-1, (int)27951);
			@@@var_0_bool:AddReply((int)528785, (int)-1, (int)30197);
			return 0;
		}
		var_3_object = true;
		var_105_bool = 0;
		func_4764(var_105_bool);
		if(var_105_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x95a";
	
}


task_16_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_int, var_42_int, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_4639();
		var_72_bool = var_68_cvector == (int)27954;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_4924(var_74_object);
		}
		var_77_bool = var_67_bool == (int)27953;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_2587(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)526677);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)526678, (int)-1, (int)27954);
			@@@var_0_bool:AddReply((int)526679, (int)-1, (int)27955);
			return 0;
		}
		var_3_object = true;
		var_102_bool = 0;
		func_4764(var_102_bool);
		if(var_102_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa32";
	
}


task_18_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_int, var_47_int, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_4639();
		var_72_bool = var_68_cvector == (int)27958;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_4924(var_74_object);
		}
		var_77_bool = var_67_bool == (int)27957;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_2803(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)526681);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)526682, (int)-1, (int)27958);
			@@@var_0_bool:AddReply((int)526683, (int)-1, (int)27959);
			@@@var_0_bool:AddReply((int)528752, (int)-1, (int)30178);
			return 0;
		}
		var_3_object = true;
		var_105_bool = 0;
		func_4764(var_105_bool);
		if(var_105_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb0a";
	
}


task_20_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_int, var_52_int, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_4639();
		var_72_bool = var_68_cvector == (int)27962;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_4924(var_74_object);
		}
		var_77_bool = var_67_bool == (int)27961;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_3024(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)526685);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)526686, (int)-1, (int)27962);
			@@@var_0_bool:AddReply((int)526687, (int)-1, (int)27963);
			@@@var_0_bool:AddReply((int)529000, (int)-1, (int)30437);
			return 0;
		}
		var_3_object = true;
		var_105_bool = 0;
		func_4764(var_105_bool);
		if(var_105_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xbe7";
	
}


task_22_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_int, var_57_int, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_4639();
		var_72_bool = var_68_cvector == (int)27966;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_4924(var_74_object);
		}
		var_77_bool = var_67_bool == (int)27965;
		if(var_77_bool != 0) {
			var_78_string = "";
			func_3240(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)526689);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)526690, (int)-1, (int)27966);
			@@@var_0_bool:AddReply((int)526691, (int)-1, (int)27967);
			return 0;
		}
		var_3_object = true;
		var_102_bool = 0;
		func_4764(var_102_bool);
		if(var_102_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xcbf";
	
}


task_24_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_int, var_62_int, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	if((int)1 != 0) {
		func_4639();
		var_72_bool = var_68_cvector == (int)28640;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_bool;
			func_4893();
		}
		var_78_bool = var_68_cvector == (int)28655;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_bool;
			func_4842();
		}
		var_162_bool = var_68_cvector == (int)27970;
		if(var_162_bool != 0) {
			var_163_object = Obj(); var_164_object = Obj();
			var_163_object = var_1_object;
			var_164_object = var_0_bool;
			func_4924(var_164_object);
		}
		var_167_bool = var_67_bool == (int)27969;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_3470(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)526693);
			@@@var_0_bool:ClearReplies();
			var_186_bool = 0;
			var_186_bool = 0;
			var_187_bool = 0; var_188_object = Obj();
			var_188_object = var_1_object;
			func_4965(var_188_object);
			if(var_187_bool != 0) {
				var_195_bool = 0; var_196_object = Obj();
				var_196_object = var_1_object;
				func_4977(var_196_object);
				if(var_195_bool != 0) {
					var_186_bool = 1;
				}
			}
			if(var_186_bool != 0) {
				@@@var_0_bool:AddReply((int)527323, (int)28641, (int)28640);
			}
			@@@var_0_bool:AddReply((int)526694, (int)-1, (int)27970);
			@@@var_0_bool:AddReply((int)526695, (int)-1, (int)27971);
			return 0;
		}
		var_211_bool = var_67_bool == (int)28641;
		if(var_211_bool != 0) {
			var_212_string = "";
			func_3470(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)527324);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)527325, (int)28644, (int)28642);
			@@@var_0_bool:AddReply((int)527326, (int)28645, (int)28643);
			return 0;
		}
		var_221_bool = var_67_bool == (int)28645;
		if(var_221_bool != 0) {
			var_222_string = "";
			func_3470(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)527328);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)527330, (int)28648, (int)28647);
			return 0;
		}
		var_228_bool = var_67_bool == (int)28644;
		if(var_228_bool != 0) {
			var_229_string = "";
			func_3470(var_68_cvector, "Sly");
			@@@var_0_bool:SetMessage((int)527327);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)527329, (int)28648, (int)28646);
			return 0;
		}
		var_235_bool = var_67_bool == (int)28648;
		if(var_235_bool != 0) {
			var_236_string = "";
			func_3470(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)527331);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)527332, (int)28650, (int)28649);
			return 0;
		}
		var_242_bool = var_67_bool == (int)28650;
		if(var_242_bool != 0) {
			var_243_string = "";
			func_3470(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)527333);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)527334, (int)28652, (int)28651);
			return 0;
		}
		var_249_bool = var_67_bool == (int)28652;
		if(var_249_bool != 0) {
			var_250_string = "";
			func_3470(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)527335);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)527336, (int)28654, (int)28653);
			return 0;
		}
		var_256_bool = var_67_bool == (int)28654;
		if(var_256_bool != 0) {
			var_257_string = "";
			func_3470(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)527337);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)527338, (int)-1, (int)28655);
			return 0;
		}
		var_3_object = true;
		var_262_bool = 0;
		func_4764(var_262_bool);
		if(var_262_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xda5";
	
}


task_26_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_int, var_67_int, var_68_cvector)
{
	if((int)1 != 0) {
		func_4639();
		var_72_bool = var_67_int == (int)41234;
		if(var_72_bool != 0) {
			var_73_string = "";
			func_3852(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)539291);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542571, (int)44971, (int)44970);
			@@@var_0_bool:AddReply((int)539292, (int)-1, (int)41235);
			@@@var_0_bool:AddReply((int)542570, (int)-1, (int)44969);
			return 0;
		}
		var_101_bool = var_67_int == (int)44971;
		if(var_101_bool != 0) {
			var_102_string = "";
			func_3852(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)542572);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542573, (int)44974, (int)44972);
			@@@var_0_bool:AddReply((int)542574, (int)44974, (int)44973);
			return 0;
		}
		var_111_bool = var_67_int == (int)44974;
		if(var_111_bool != 0) {
			var_112_string = "";
			func_3852(var_68_cvector, "Fear");
			@@@var_0_bool:SetMessage((int)542575);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542576, (int)44978, (int)44976);
			@@@var_0_bool:AddReply((int)542577, (int)-1, (int)44977);
			return 0;
		}
		var_121_bool = var_67_int == (int)44978;
		if(var_121_bool != 0) {
			var_122_string = "";
			func_3852(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)542578);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542579, (int)44980, (int)44979);
			@@@var_0_bool:AddReply((int)542583, (int)-1, (int)44983);
			return 0;
		}
		var_131_bool = var_67_int == (int)44980;
		if(var_131_bool != 0) {
			var_132_string = "";
			func_3852(var_68_cvector, "Neutral");
			@@@var_0_bool:SetMessage((int)542580);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)542581, (int)-1, (int)44981);
			@@@var_0_bool:AddReply((int)542582, (int)-1, (int)44982);
			return 0;
		}
		var_3_object = true;
		var_140_bool = 0;
		func_4764(var_140_bool);
		if(var_140_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xf23";
	
}


task_27_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_int)
{
	var_69_bool = var_67_int == (int)10;
	if(var_69_bool != 0) {
		func_4088();
		var_71_bool = 0;
		var_71_bool = 0;
		var_72_bool = 0;
		func_4302(var_72_bool);
		if(var_72_bool != 0) {
			var_75_bool = 0;
			func_4057(var_75_bool);
			if(var_75_bool != 0) {
				var_71_bool = 1;
			}
		}
		if(var_71_bool != 0) {
			var_92_bool = 0;
			func_4037(var_92_bool);
			if(var_92_bool != 0) {
				var_111_bool = 0; var_112_object = Obj();
				func_4674(Obj());
				var_113_object = var_112_object;
				func_4452(var_111_bool, var_112_object);
			}
		} else {
			func_4052(var_67_int);
			func_4079();
		}
	}
	return 0;
	
}


task_27_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector)
{
	func_4270();
	func_4088();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_27_event_5(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector)
{
	StopGroup0();
	func_4088();
	var_68_string = "";
	func_4593("Neutral");
	func_4079();
	return 0;
}


task_27_event_45(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_bool)
{
	var_68_bool = var_67_bool;
	if(var_68_bool != 0) {
		func_4079();
	} else {
		var_74_string = "";
		func_4593("Neutral");
	}
	return 0;
	
}


task_27_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_object)
{
	var_68_bool = 0; var_69_bool = 0;
	IsOverrideActive(var_69_bool);
	var_70_bool = var_69_bool == 0; //@nz
	if(var_70_bool != 0) {
		EventDisable(0);
		func_4270();
		var_71_bool = 0; var_72_object = Obj();
		var_67_object = var_72_object;
		func_4293(var_71_bool, var_72_object);
		EventEnable(0);
		var_85_object = Obj();
		var_67_object = var_85_object;
		func_5426(var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_object, var_68_bool, var_69_bool, var_85_object);
		var_1277_string = "";
		func_4593("Neutral");
		func_4088();
		func_4079();
	}
	return 2;
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector)
{
	var_67_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	var_68_int = GlobalVars[2];
	GlobalVars[2] = (int)-1;
	func_4023(var_66_cvector);
	return 0;
}


func_0(var_0_bool)
{
	DoTrade();
	var_0_bool = false;
	
Label_4:
	var_536_string = "";
	func_4593("Neutral");
	lshWaitForAnimEnd();
	var_537_bool = var_0_bool;
	if(var_537_bool != 0) {
		goto Label_4;
	}
	return 0;
}
EMIT "Return(); Pop(0)";


func_4609(var_388_string, var_389_bool)
{
	var_392_bool = 0; var_393_float = 0; var_394_float = 0; var_395_bool = 0; var_396_float = 0; var_397_float = 0;
	lshHasAnimation(var_395_bool, var_388_string);
	var_398_bool = var_395_bool;
	if(var_398_bool != 0) {
		lshGetAnimTimes(var_388_string, var_396_float, var_397_float);
		lshPlayAnimation(var_396_float, var_397_float, var_389_bool);
	} else {
		var_400_int = "Can't find lsh animation : " + var_388_string;
		Trace(var_400_int);
	}
	return 6;
	
}


func_5379(var_104_int, var_105_string)
{
	var_106_int = 0; var_107_int = 0;
	GetInvItemByName(var_107_int, var_105_string);
	var_107_int = var_104_int;
	return 2;
}


func_2308(var_0_bool, var_1_object, var_2_object, var_3_object, var_852_object, var_853_object)
{
	var_0_bool = var_853_object;
	var_1_object = var_852_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_859_string = "";
		func_2371(var_853_object, "Sly");
		@@@var_0_bool:SetMessage((int)526673);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)526674, (int)-1, (int)27950);
		@@@var_0_bool:AddReply((int)526675, (int)-1, (int)27951);
		@@@var_0_bool:AddReply((int)528785, (int)-1, (int)30197);
		goto Label_2341;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x908";
	}
Label_2341:
	var_877_bool = 0;
	func_4764(var_877_bool);
	if(var_877_bool != 0) {

	Label_2345:
		lshWaitForAnimEnd();
		var_878_object = var_3_object;
		if(var_878_object != 0) {
		} else {
			var_879_string = "";
			var_879_string = var_2_object;
			func_4593(var_879_string);
			goto Label_2345;
	}
		PlayAnimation("all", "idle");

	Label_2360:
		WaitForAnimEnd();
		var_882_object = var_3_object;
		if(var_882_object != 0) {
			goto Label_2370;
		}
		PlayAnimation("all", "idle");
		goto Label_2360;
	}
	goto Label_2370;
	
Label_2370:
	return 0;
	
}


func_5384(var_278_int)
{
	var_279_int = 0; var_280_int = 0;
	GetVariable("branch", var_280_int);
	var_283_bool = var_280_int == (int)0;
	if(var_283_bool != 0) {
		var_278_int = 1;
		return 2;
	EMIT "GOTO 0x1517";
	}
	var_285_bool = var_280_int == (int)1;
	if(var_285_bool != 0) {
		var_278_int = 2;
		return 2;
	}
	var_278_int = 3;
	return 2;
}


func_5132(var_93_bool, var_94_object, var_95_int)
{
	var_96_object = Obj(); var_97_object = Obj(); var_98_int = 0; var_99_object = Obj(); var_100_object = Obj(); var_101_int = 0;
	func_5119(Obj());
	var_102_object = var_99_object;
	@@var_99_object:Find(var_95_int, var_100_object);
	var_107_bool = var_100_object == 0; //@nz
	if(var_107_bool != 0) {
		var_109_int = "Can't find diary parent with id: " + var_95_int;
		Trace(var_109_int);
		var_93_bool = 0;
		return 6;
	}
	@@var_100_object:AddChild(var_94_object);
	SendWorldWndMessage((int)7);
	@@var_94_object:GetCategory(var_101_int);
	SetDiarySection(var_101_int);
	var_93_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_3852(var_2_object, var_1249_string)
{
	var_1250_bool = 0;
	func_4764(var_1250_bool);
	var_1251_bool = var_1250_bool == 0; //@nz
	if(var_1251_bool != 0) {
		return 0;
	}
	var_1252_bool = var_1249_string == var_2_object;
	if(var_1252_bool != 0) {
		return 0;
	}
	var_1253_string = ""; var_1254_bool = 0;
	var_1249_string = var_1253_string;
	var_1256_bool = var_1249_string == "";
	if(var_1256_bool != 0) {
		var_1254_bool = 0;
	} else {
		var_1254_bool = 1;
	}
	func_4609(var_1253_string, var_1254_bool);
	var_2_object = var_1249_string;
	return 0;
	
}


func_4624(var_321_bool, var_322_string)
{
	var_323_bool = 0; var_324_bool = 0;
	var_325_bool = 0;
	func_4764(var_325_bool);
	if(var_325_bool != 0) {
		lshHasSpeech(var_324_bool, var_322_string);
		var_326_bool = var_324_bool;
		if(var_326_bool != 0) {
			lshPlaySpeech(var_322_string);
			var_321_bool = 1;
			return 2;
		}
	}
	var_321_bool = 0;
	return 2;
}


func_22(var_0_bool, var_215_int, var_216_object)
{
	var_218_object = Obj(); var_219_bool = 0; var_220_int = 0; var_221_bool = 0; var_222_object = Obj(); var_223_bool = 0; var_224_int = 0; var_225_bool = 0;
	var_0_bool = var_216_object;
	var_226_bool = 0; var_227_object = Obj(); var_228_float = 0;
	var_216_object = var_227_object;
	func_4307(var_226_bool, var_227_object, (float)70.0);
	var_273_bool = var_226_bool == 0; //@nz
	if(var_273_bool != 0) {
		var_215_int = -2;
		return 8;
	}
	CreateDialog(var_222_object);
	var_274_int = 0;
	func_4758(var_274_int);
	@@var_222_object:SetNPCName(var_274_int);
	var_275_int = 0;
	func_4756(var_275_int);
	@@var_222_object:SetNPCDescription(var_275_int);
	var_276_string = "";
	func_4760(var_276_string);
	@@var_222_object:SetPhoto(var_276_string);
	var_277_string = "";
	func_4762(var_277_string);
	@@var_222_object:SetPhoto2(var_277_string);
	var_278_int = 0;
	func_5384(var_278_int);
	@@var_222_object:SetPlayerName(var_278_int);
	IsOverrideActive(var_223_bool);
	var_286_bool = var_223_bool;
	if(var_286_bool != 0) {
		var_215_int = -2;
		return 8;
	}
	DoDialog(var_222_object);
	var_287_bool = 0; var_288_object = Obj();
	func_4674(Obj());
	var_289_object = var_288_object;
	func_4394(var_287_bool, var_288_object);
	var_377_object = Obj(); var_378_object = Obj();
	var_216_object = var_377_object;
	var_222_object = var_378_object;
	TaskCall(2);
	func_103(var_379_object, var_380_object, var_381_string, var_382_bool, var_377_object, var_378_object);
	TaskReturn();
	@@var_222_object:IsDialogEnd(var_225_bool);
	
Label_85:
	var_426_bool = var_225_bool == 0; //@nz
	if(var_426_bool != 0) {
		sync();
		@@var_222_object:IsDialogEnd(var_225_bool);
		goto Label_85;
	}
	var_216_object = Obj();
	func_4376();
	StopDialog(var_222_object);
	@@var_222_object:GetReturnValue((int)-1);
	var_224_int = var_215_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4376()
{
	var_428_bool = 0; var_429_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_431_bool = 0;
	func_4764(var_431_bool);
	if(var_431_bool != 0) {
	} else {
		HasAnimationTrack(var_429_bool, "head");
		var_433_bool = var_429_bool;
		if(var_433_bool == 0) goto Label_4393;
		UnlookAsync("head");
	}
Label_4393:
	return 2;
	
}


func_5401(var_191_int)
{
	var_192_int = 0; var_193_int = 0;
	GetVariable("branch", var_193_int);
	var_193_int = var_191_int;
	return 2;
}


func_2587(var_2_object, var_923_string)
{
	var_924_bool = 0;
	func_4764(var_924_bool);
	var_925_bool = var_924_bool == 0; //@nz
	if(var_925_bool != 0) {
		return 0;
	}
	var_926_bool = var_923_string == var_2_object;
	if(var_926_bool != 0) {
		return 0;
	}
	var_927_string = ""; var_928_bool = 0;
	var_923_string = var_927_string;
	var_930_bool = var_923_string == "";
	if(var_930_bool != 0) {
		var_928_bool = 0;
	} else {
		var_928_bool = 1;
	}
	func_4609(var_927_string, var_928_bool);
	var_2_object = var_923_string;
	return 0;
	
}


func_1564(var_0_bool, var_543_int, var_544_object)
{
	var_546_object = Obj(); var_547_bool = 0; var_548_int = 0; var_549_bool = 0; var_550_object = Obj(); var_551_bool = 0; var_552_int = 0; var_553_bool = 0;
	var_0_bool = var_544_object;
	var_554_bool = 0; var_555_object = Obj(); var_556_float = 0;
	var_544_object = var_555_object;
	func_4307(var_554_bool, var_555_object, (float)70.0);
	var_557_bool = var_554_bool == 0; //@nz
	if(var_557_bool != 0) {
		var_543_int = -2;
		return 8;
	}
	CreateDialog(var_550_object);
	var_558_int = 0;
	func_4758(var_558_int);
	@@var_550_object:SetNPCName(var_558_int);
	var_559_int = 0;
	func_4756(var_559_int);
	@@var_550_object:SetNPCDescription(var_559_int);
	var_560_string = "";
	func_4760(var_560_string);
	@@var_550_object:SetPhoto(var_560_string);
	var_561_string = "";
	func_4762(var_561_string);
	@@var_550_object:SetPhoto2(var_561_string);
	var_562_int = 0;
	func_5384(var_562_int);
	@@var_550_object:SetPlayerName(var_562_int);
	IsOverrideActive(var_551_bool);
	var_563_bool = var_551_bool;
	if(var_563_bool != 0) {
		var_543_int = -2;
		return 8;
	}
	DoDialog(var_550_object);
	var_564_bool = 0; var_565_object = Obj();
	func_4674(Obj());
	var_566_object = var_565_object;
	func_4394(var_564_bool, var_565_object);
	var_567_object = Obj(); var_568_object = Obj();
	var_544_object = var_567_object;
	var_550_object = var_568_object;
	TaskCall(8);
	func_1645(var_569_object, var_570_object, var_571_string, var_572_bool, var_567_object, var_568_object);
	TaskReturn();
	@@var_550_object:IsDialogEnd(var_553_bool);
	
Label_1627:
	var_600_bool = var_553_bool == 0; //@nz
	if(var_600_bool != 0) {
		sync();
		@@var_550_object:IsDialogEnd(var_553_bool);
		goto Label_1627;
	}
	var_544_object = Obj();
	func_4376();
	StopDialog(var_550_object);
	@@var_550_object:GetReturnValue((int)-1);
	var_552_int = var_543_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_3101(var_0_bool, var_1081_int, var_1082_object)
{
	var_1084_object = Obj(); var_1085_bool = 0; var_1086_int = 0; var_1087_bool = 0; var_1088_object = Obj(); var_1089_bool = 0; var_1090_int = 0; var_1091_bool = 0;
	var_0_bool = var_1082_object;
	var_1092_bool = 0; var_1093_object = Obj(); var_1094_float = 0;
	var_1082_object = var_1093_object;
	func_4307(var_1092_bool, var_1093_object, (float)70.0);
	var_1095_bool = var_1092_bool == 0; //@nz
	if(var_1095_bool != 0) {
		var_1081_int = -2;
		return 8;
	}
	CreateDialog(var_1088_object);
	var_1096_int = 0;
	func_4758(var_1096_int);
	@@var_1088_object:SetNPCName(var_1096_int);
	var_1097_int = 0;
	func_4756(var_1097_int);
	@@var_1088_object:SetNPCDescription(var_1097_int);
	var_1098_string = "";
	func_4760(var_1098_string);
	@@var_1088_object:SetPhoto(var_1098_string);
	var_1099_string = "";
	func_4762(var_1099_string);
	@@var_1088_object:SetPhoto2(var_1099_string);
	var_1100_int = 0;
	func_5384(var_1100_int);
	@@var_1088_object:SetPlayerName(var_1100_int);
	IsOverrideActive(var_1089_bool);
	var_1101_bool = var_1089_bool;
	if(var_1101_bool != 0) {
		var_1081_int = -2;
		return 8;
	}
	DoDialog(var_1088_object);
	var_1102_bool = 0; var_1103_object = Obj();
	func_4674(Obj());
	var_1104_object = var_1103_object;
	func_4394(var_1102_bool, var_1103_object);
	var_1105_object = Obj(); var_1106_object = Obj();
	var_1082_object = var_1105_object;
	var_1088_object = var_1106_object;
	TaskCall(22);
	func_3182(var_1107_object, var_1108_object, var_1109_string, var_1110_bool, var_1105_object, var_1106_object);
	TaskReturn();
	@@var_1088_object:IsDialogEnd(var_1091_bool);
	
Label_3164:
	var_1135_bool = var_1091_bool == 0; //@nz
	if(var_1135_bool != 0) {
		sync();
		@@var_1088_object:IsDialogEnd(var_1091_bool);
		goto Label_3164;
	}
	var_1082_object = Obj();
	func_4376();
	StopDialog(var_1088_object);
	@@var_1088_object:GetReturnValue((int)-1);
	var_1090_int = var_1081_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4893()
{
	SetVariable("ook11Grif1", (int)1);
	return 0;
}


func_4639()
{
	var_70_bool = 0;
	func_4764(var_70_bool);
	if(var_70_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_5407(var_500_object)
{
	var_501_bool = 0; var_502_object = Obj();
	var_500_object = var_502_object;
	func_4532(var_501_bool, var_502_object);
	var_533_bool = var_501_bool == 0; //@nz
	if(var_533_bool != 0) {
		return 0;
	}
	var_534_object = Obj();
	var_500_object = var_534_object;
	TaskCall(0);
	func_0(var_534_object);
	TaskReturn();
	var_500_object = Obj();
	func_4588();
	return 0;
}


func_4899()
{
	SetVariable("k4q01", (int)-1);
	func_5067();
	return 0;
}


func_4646(var_128_string, var_129_int, var_130_int)
{
	var_131_bool = 0; var_132_bool = 0;
	var_133_bool = 0; var_134_int = 0; var_135_int = 0;
	var_129_int = var_134_int;
	var_130_int = var_135_int;
	func_4690(var_133_bool, var_134_int, var_135_int);
	if(var_133_bool != 0) {
		AddItem(var_132_bool, var_128_string, (int)0);
	}
	return 2;
}


func_2087(var_0_bool, var_1_object, var_2_object, var_3_object, var_788_object, var_789_object)
{
	var_0_bool = var_789_object;
	var_1_object = var_788_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_795_string = "";
		func_2150(var_789_object, "Fear");
		@@@var_0_bool:SetMessage((int)526669);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)526670, (int)-1, (int)27946);
		@@@var_0_bool:AddReply((int)526671, (int)-1, (int)27947);
		@@@var_0_bool:AddReply((int)528784, (int)-1, (int)30196);
		goto Label_2120;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x82b";
	}
Label_2120:
	var_813_bool = 0;
	func_4764(var_813_bool);
	if(var_813_bool != 0) {

	Label_2124:
		lshWaitForAnimEnd();
		var_814_object = var_3_object;
		if(var_814_object != 0) {
		} else {
			var_815_string = "";
			var_815_string = var_2_object;
			func_4593(var_815_string);
			goto Label_2124;
	}
		PlayAnimation("all", "idle");

	Label_2139:
		WaitForAnimEnd();
		var_818_object = var_3_object;
		if(var_818_object != 0) {
			goto Label_2149;
		}
		PlayAnimation("all", "idle");
		goto Label_2139;
	}
	goto Label_2149;
	
Label_2149:
	return 0;
	
}


func_5160(var_79_object)
{
	var_80_object = Obj(); var_81_object = Obj(); var_82_object = Obj(); var_83_object = Obj();
	GetMainOutdoorScene(var_82_object);
	var_84_bool = var_82_object == 0; //@ne
	if(var_84_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_83_object = 0;
		var_83_object = var_79_object;
		return 4;
	}
	@@var_82_object:GetMap(var_83_object);
	var_83_object = var_79_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4394(var_287_bool, var_288_object)
{
	var_292_int = 0; var_293_int = 0; var_294_int = 0; var_295_int = 0;
	GetVariable("voice_common", var_294_int);
	var_297_int = var_294_int;
	if(var_297_int != 0) {
		var_298_bool = 0; var_299_object = Obj();
		var_288_object = var_299_object;
		func_4452(var_298_bool, var_299_object);
		var_328_bool = var_298_bool == 0; //@nz
		if(var_328_bool != 0) {
			var_329_bool = 0; var_330_object = Obj();
			var_288_object = var_330_object;
			func_4489(var_329_bool, var_330_object);
			var_359_bool = var_329_bool == 0; //@nz
			if(var_359_bool != 0) {
				var_287_bool = 0;
				return 4;
			}
		}
		irand(var_295_int, (int)2);
		var_361_int = var_295_int;
		if(var_361_int != 0) {
			var_364_int = var_294_int + (int)1;
			var_366_int = var_364_int % (int)3;
			SetVariable("voice_common", var_366_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_369_bool = 0; var_370_object = Obj();
		var_288_object = var_370_object;
		func_4489(var_369_bool, var_370_object);
		var_371_bool = var_369_bool == 0; //@nz
		if(var_371_bool != 0) {
			var_372_bool = 0; var_373_object = Obj();
			var_288_object = var_373_object;
			func_4452(var_372_bool, var_373_object);
			var_374_bool = var_372_bool == 0; //@nz
			if(var_374_bool != 0) {
				var_287_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_4450;
	
Label_4450:
	var_287_bool = 1;
	return 4;
	
}


func_4908(var_175_object)
{
	var_176_object = Obj(); var_177_string = ""; var_178_float = 0;
	func_5160(Obj());
	var_179_object = var_176_object;
	func_5177(var_176_object, "pt_map_warehouse_gangster", (float)2);
	var_180_object = Obj();
	func_5160(var_180_object);
	@@var_175_object:ShowMap(var_180_object);
	return 0;
}


func_4657(var_139_string, var_140_int, var_141_int, var_142_int, var_143_int)
{
	var_144_int = 0; var_145_bool = 0; var_146_int = 0; var_147_bool = 0;
	var_148_bool = 0; var_149_int = 0; var_150_int = 0;
	var_140_int = var_149_int;
	var_141_int = var_150_int;
	func_4690(var_148_bool, var_149_int, var_150_int);
	if(var_148_bool != 0) {
		var_151_int = var_143_int - var_142_int;
		var_153_int = var_151_int + (int)1;
		irand(var_146_int, var_153_int);
		var_155_int = var_146_int + var_142_int;
		AddItem(var_147_bool, var_139_string, (int)0, var_155_int);
	}
	return 4;
}


func_5426(var_85_object, var_442_object, var_545_object, var_609_object, var_673_object, var_766_object, var_830_object, var_894_object, var_955_object, var_1019_object, var_1083_object, var_1144_object)
{
	var_86_int = GlobalVars[2];
	var_87_int = 0;
	func_4717(var_87_int);
	var_93_bool = var_86_int != var_87_int;
	if(var_93_bool != 0) {
		func_5210();
		var_211_int = GlobalVars[2];
		func_4717((int)0);
		var_212_int = var_211_int;
		GlobalVars[2] = var_211_int;
	}
	var_213_bool = GlobalVars[1];
	var_214_bool = var_213_bool == 0; //@nz
	if(var_214_bool != 0) {
		var_215_int = 0; var_216_object = Obj();
		var_85_object = var_216_object;
		TaskCall(1);
		func_22(var_217_object, var_215_int, var_216_object);
		TaskReturn();
		var_435_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_436_bool = 0; var_437_int = 0;
	func_4726(var_436_bool, (int)1);
	if(var_436_bool != 0) {
		var_440_int = 0; var_441_object = Obj();
		var_85_object = var_441_object;
		TaskCall(5);
		func_1343(var_442_object, var_440_int, var_441_object);
		TaskReturn();
		var_499_bool = (int)1000 == var_442_object;
		if(var_499_bool != 0) {
			var_500_object = Obj();
			var_85_object = var_500_object;
			func_5407(var_500_object);
		}
		return 0;
	}
	var_540_bool = 0; var_541_int = 0;
	func_4726(var_540_bool, (int)2);
	if(var_540_bool != 0) {
		var_543_int = 0; var_544_object = Obj();
		var_85_object = var_544_object;
		TaskCall(7);
		func_1564(var_545_object, var_543_int, var_544_object);
		TaskReturn();
		var_602_bool = (int)1000 == var_545_object;
		if(var_602_bool != 0) {
			var_603_object = Obj();
			var_85_object = var_603_object;
			func_5407(var_603_object);
		}
		return 0;
	}
	var_604_bool = 0; var_605_int = 0;
	func_4726(var_604_bool, (int)3);
	if(var_604_bool != 0) {
		var_607_int = 0; var_608_object = Obj();
		var_85_object = var_608_object;
		TaskCall(9);
		func_1785(var_609_object, var_607_int, var_608_object);
		TaskReturn();
		var_666_bool = (int)1000 == var_609_object;
		if(var_666_bool != 0) {
			var_667_object = Obj();
			var_85_object = var_667_object;
			func_5407(var_667_object);
		}
		return 0;
	}
	var_668_bool = 0; var_669_int = 0;
	func_4726(var_668_bool, (int)4);
	if(var_668_bool != 0) {
		var_671_int = 0; var_672_object = Obj();
		var_85_object = var_672_object;
		TaskCall(3);
		func_248(var_673_object, var_671_int, var_672_object);
		TaskReturn();
		var_759_bool = (int)1000 == var_673_object;
		if(var_759_bool != 0) {
			var_760_object = Obj();
			var_85_object = var_760_object;
			func_5407(var_760_object);
		}
		return 0;
	}
	var_761_bool = 0; var_762_int = 0;
	func_4726(var_761_bool, (int)5);
	if(var_761_bool != 0) {
		var_764_int = 0; var_765_object = Obj();
		var_85_object = var_765_object;
		TaskCall(11);
		func_2006(var_766_object, var_764_int, var_765_object);
		TaskReturn();
		var_823_bool = (int)1000 == var_766_object;
		if(var_823_bool != 0) {
			var_824_object = Obj();
			var_85_object = var_824_object;
			func_5407(var_824_object);
		}
		return 0;
	}
	var_825_bool = 0; var_826_int = 0;
	func_4726(var_825_bool, (int)6);
	if(var_825_bool != 0) {
		var_828_int = 0; var_829_object = Obj();
		var_85_object = var_829_object;
		TaskCall(13);
		func_2227(var_830_object, var_828_int, var_829_object);
		TaskReturn();
		var_887_bool = (int)1000 == var_830_object;
		if(var_887_bool != 0) {
			var_888_object = Obj();
			var_85_object = var_888_object;
			func_5407(var_888_object);
		}
		return 0;
	}
	var_889_bool = 0; var_890_int = 0;
	func_4726(var_889_bool, (int)7);
	if(var_889_bool != 0) {
		var_892_int = 0; var_893_object = Obj();
		var_85_object = var_893_object;
		TaskCall(15);
		func_2448(var_894_object, var_892_int, var_893_object);
		TaskReturn();
		var_948_bool = (int)1000 == var_894_object;
		if(var_948_bool != 0) {
			var_949_object = Obj();
			var_85_object = var_949_object;
			func_5407(var_949_object);
		}
		return 0;
	}
	var_950_bool = 0; var_951_int = 0;
	func_4726(var_950_bool, (int)8);
	if(var_950_bool != 0) {
		var_953_int = 0; var_954_object = Obj();
		var_85_object = var_954_object;
		TaskCall(17);
		func_2659(var_955_object, var_953_int, var_954_object);
		TaskReturn();
		var_1012_bool = (int)1000 == var_955_object;
		if(var_1012_bool != 0) {
			var_1013_object = Obj();
			var_85_object = var_1013_object;
			func_5407(var_1013_object);
		}
		return 0;
	}
	var_1014_bool = 0; var_1015_int = 0;
	func_4726(var_1014_bool, (int)9);
	if(var_1014_bool != 0) {
		var_1017_int = 0; var_1018_object = Obj();
		var_85_object = var_1018_object;
		TaskCall(19);
		func_2880(var_1019_object, var_1017_int, var_1018_object);
		TaskReturn();
		var_1076_bool = (int)1000 == var_1019_object;
		if(var_1076_bool != 0) {
			var_1077_object = Obj();
			var_85_object = var_1077_object;
			func_5407(var_1077_object);
		}
		return 0;
	}
	var_1078_bool = 0; var_1079_int = 0;
	func_4726(var_1078_bool, (int)10);
	if(var_1078_bool != 0) {
		var_1081_int = 0; var_1082_object = Obj();
		var_85_object = var_1082_object;
		TaskCall(21);
		func_3101(var_1083_object, var_1081_int, var_1082_object);
		TaskReturn();
		var_1137_bool = (int)1000 == var_1083_object;
		if(var_1137_bool != 0) {
			var_1138_object = Obj();
			var_85_object = var_1138_object;
			func_5407(var_1138_object);
		}
		return 0;
	}
	var_1139_bool = 0; var_1140_int = 0;
	func_4726(var_1139_bool, (int)11);
	if(var_1139_bool != 0) {
		var_1142_int = 0; var_1143_object = Obj();
		var_85_object = var_1143_object;
		TaskCall(23);
		func_3312(var_1144_object, var_1142_int, var_1143_object);
		TaskReturn();
		var_1214_bool = (int)1000 == var_1144_object;
		if(var_1214_bool != 0) {
			var_1215_object = Obj();
			var_85_object = var_1215_object;
			func_5407(var_1215_object);
		}
		return 0;
	}
	var_1216_bool = 0; var_1217_int = 0;
	func_4726(var_1216_bool, (int)12);
	if(var_1216_bool != 0) {
		var_1218_int = 0; var_1219_object = Obj();
		var_85_object = var_1219_object;
		TaskCall(25);
		func_3708(var_1220_object, var_1218_int, var_1219_object);
		TaskReturn();
		return 0;
	}
	return 0;
}


func_5177(var_118_object, var_119_string, var_120_float)
{
	var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_object = Obj(); var_125_bool = 0; var_126_cvector = CVector(0,0,0); var_127_cvector = CVector(0,0,0); var_128_object = Obj(); var_129_bool = 0;
	GetMainOutdoorScene(var_128_object);
	var_130_bool = var_128_object == 0; //@ne
	if(var_130_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_128_object:GetLocator(var_119_string, var_129_bool, var_126_cvector, var_127_cvector);
	var_132_bool = var_129_bool == 0; //@nz
	if(var_132_bool != 0) {
		var_134_int = "Warning: outdoor scene locator " + var_119_string;
		var_136_int = var_134_int + " doesnt exist";
		Trace(var_136_int);
	}
	@@var_128_object:GetMap(var_118_object);
	var_137_bool = var_118_object == 0; //@ne
	if(var_137_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_139_float = GetByIndex(var_126_cvector, 0);
	var_140_float = GetByIndex(var_126_cvector, 2);
	@@var_118_object:SetMapParams(var_139_float, var_140_float, var_120_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_4924(var_164_object)
{
	@@var_164_object:SetReturnValue((int)1000);
	return 0;
}


func_1343(var_0_bool, var_440_int, var_441_object)
{
	var_443_object = Obj(); var_444_bool = 0; var_445_int = 0; var_446_bool = 0; var_447_object = Obj(); var_448_bool = 0; var_449_int = 0; var_450_bool = 0;
	var_0_bool = var_441_object;
	var_451_bool = 0; var_452_object = Obj(); var_453_float = 0;
	var_441_object = var_452_object;
	func_4307(var_451_bool, var_452_object, (float)70.0);
	var_454_bool = var_451_bool == 0; //@nz
	if(var_454_bool != 0) {
		var_440_int = -2;
		return 8;
	}
	CreateDialog(var_447_object);
	var_455_int = 0;
	func_4758(var_455_int);
	@@var_447_object:SetNPCName(var_455_int);
	var_456_int = 0;
	func_4756(var_456_int);
	@@var_447_object:SetNPCDescription(var_456_int);
	var_457_string = "";
	func_4760(var_457_string);
	@@var_447_object:SetPhoto(var_457_string);
	var_458_string = "";
	func_4762(var_458_string);
	@@var_447_object:SetPhoto2(var_458_string);
	var_459_int = 0;
	func_5384(var_459_int);
	@@var_447_object:SetPlayerName(var_459_int);
	IsOverrideActive(var_448_bool);
	var_460_bool = var_448_bool;
	if(var_460_bool != 0) {
		var_440_int = -2;
		return 8;
	}
	DoDialog(var_447_object);
	var_461_bool = 0; var_462_object = Obj();
	func_4674(Obj());
	var_463_object = var_462_object;
	func_4394(var_461_bool, var_462_object);
	var_464_object = Obj(); var_465_object = Obj();
	var_441_object = var_464_object;
	var_447_object = var_465_object;
	TaskCall(6);
	func_1424(var_466_object, var_467_object, var_468_string, var_469_bool, var_464_object, var_465_object);
	TaskReturn();
	@@var_447_object:IsDialogEnd(var_450_bool);
	
Label_1406:
	var_497_bool = var_450_bool == 0; //@nz
	if(var_497_bool != 0) {
		sync();
		@@var_447_object:IsDialogEnd(var_450_bool);
		goto Label_1406;
	}
	var_441_object = Obj();
	func_4376();
	StopDialog(var_447_object);
	@@var_447_object:GetReturnValue((int)-1);
	var_449_int = var_440_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2880(var_0_bool, var_1017_int, var_1018_object)
{
	var_1020_object = Obj(); var_1021_bool = 0; var_1022_int = 0; var_1023_bool = 0; var_1024_object = Obj(); var_1025_bool = 0; var_1026_int = 0; var_1027_bool = 0;
	var_0_bool = var_1018_object;
	var_1028_bool = 0; var_1029_object = Obj(); var_1030_float = 0;
	var_1018_object = var_1029_object;
	func_4307(var_1028_bool, var_1029_object, (float)70.0);
	var_1031_bool = var_1028_bool == 0; //@nz
	if(var_1031_bool != 0) {
		var_1017_int = -2;
		return 8;
	}
	CreateDialog(var_1024_object);
	var_1032_int = 0;
	func_4758(var_1032_int);
	@@var_1024_object:SetNPCName(var_1032_int);
	var_1033_int = 0;
	func_4756(var_1033_int);
	@@var_1024_object:SetNPCDescription(var_1033_int);
	var_1034_string = "";
	func_4760(var_1034_string);
	@@var_1024_object:SetPhoto(var_1034_string);
	var_1035_string = "";
	func_4762(var_1035_string);
	@@var_1024_object:SetPhoto2(var_1035_string);
	var_1036_int = 0;
	func_5384(var_1036_int);
	@@var_1024_object:SetPlayerName(var_1036_int);
	IsOverrideActive(var_1025_bool);
	var_1037_bool = var_1025_bool;
	if(var_1037_bool != 0) {
		var_1017_int = -2;
		return 8;
	}
	DoDialog(var_1024_object);
	var_1038_bool = 0; var_1039_object = Obj();
	func_4674(Obj());
	var_1040_object = var_1039_object;
	func_4394(var_1038_bool, var_1039_object);
	var_1041_object = Obj(); var_1042_object = Obj();
	var_1018_object = var_1041_object;
	var_1024_object = var_1042_object;
	TaskCall(20);
	func_2961(var_1043_object, var_1044_object, var_1045_string, var_1046_bool, var_1041_object, var_1042_object);
	TaskReturn();
	@@var_1024_object:IsDialogEnd(var_1027_bool);
	
Label_2943:
	var_1074_bool = var_1027_bool == 0; //@nz
	if(var_1074_bool != 0) {
		sync();
		@@var_1024_object:IsDialogEnd(var_1027_bool);
		goto Label_2943;
	}
	var_1018_object = Obj();
	func_4376();
	StopDialog(var_1024_object);
	@@var_1024_object:GetReturnValue((int)-1);
	var_1026_int = var_1017_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4929(var_711_bool)
{
	var_713_int = 0; var_714_string = "";
	func_4695(var_713_int, "k4q01");
	var_718_bool = var_713_int == (int)1;
	if(var_718_bool != 0) {
		var_711_bool = 1;
		return 0;
	}
	var_711_bool = 0;
	return 0;
}


func_4674(var_289_object)
{
	var_290_object = Obj(); var_291_object = Obj();
	self(var_291_object);
	var_291_object = var_289_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3393(var_0_bool, var_1_object, var_2_object, var_3_object, var_1166_object, var_1167_object)
{
	var_0_bool = var_1167_object;
	var_1_object = var_1166_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1173_string = "";
		func_3470(var_1167_object, "Sly");
		@@@var_0_bool:SetMessage((int)526693);
		@@@var_0_bool:ClearReplies();
		var_1182_bool = 0;
		var_1182_bool = 0;
		var_1183_bool = 0; var_1184_object = Obj();
		var_1184_object = var_1_object;
		func_4965(var_1184_object);
		if(var_1183_bool != 0) {
			var_1189_bool = 0; var_1190_object = Obj();
			var_1190_object = var_1_object;
			func_4977(var_1190_object);
			if(var_1189_bool != 0) {
				var_1182_bool = 1;
			}
		}
		if(var_1182_bool != 0) {
			@@@var_0_bool:AddReply((int)527323, (int)28641, (int)28640);
		}
		@@@var_0_bool:AddReply((int)526694, (int)-1, (int)27970);
		@@@var_0_bool:AddReply((int)526695, (int)-1, (int)27971);
		goto Label_3440;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xd45";
	}
Label_3440:
	var_1204_bool = 0;
	func_4764(var_1204_bool);
	if(var_1204_bool != 0) {

	Label_3444:
		lshWaitForAnimEnd();
		var_1205_object = var_3_object;
		if(var_1205_object != 0) {
		} else {
			var_1206_string = "";
			var_1206_string = var_2_object;
			func_4593(var_1206_string);
			goto Label_3444;
	}
		PlayAnimation("all", "idle");

	Label_3459:
		WaitForAnimEnd();
		var_1209_object = var_3_object;
		if(var_1209_object != 0) {
			goto Label_3469;
		}
		PlayAnimation("all", "idle");
		goto Label_3459;
	}
	goto Label_3469;
	
Label_3469:
	return 0;
	
}


func_2371(var_2_object, var_859_string)
{
	var_860_bool = 0;
	func_4764(var_860_bool);
	var_861_bool = var_860_bool == 0; //@nz
	if(var_861_bool != 0) {
		return 0;
	}
	var_862_bool = var_859_string == var_2_object;
	if(var_862_bool != 0) {
		return 0;
	}
	var_863_string = ""; var_864_bool = 0;
	var_859_string = var_863_string;
	var_866_bool = var_859_string == "";
	if(var_866_bool != 0) {
		var_864_bool = 0;
	} else {
		var_864_bool = 1;
	}
	func_4609(var_863_string, var_864_bool);
	var_2_object = var_859_string;
	return 0;
	
}


func_4680(var_253_cvector, var_254_cvector)
{
	var_256_float = 0; var_257_float = 0;
	var_258_int = var_254_cvector | var_254_cvector;
	var_257_float = sqrt(var_258_int);
	var_259_float = 9.999999974752427e-07;
	var_260_bool = var_257_float < var_259_float;
	if(var_260_bool != 0) {
		var_253_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_253_cvector = var_254_cvector / var_257_float;
	return 2;
}


func_329(var_0_bool, var_1_object, var_2_object, var_3_object, var_695_object, var_696_object)
{
	var_0_bool = var_696_object;
	var_1_object = var_695_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_702_string = "";
		func_422(var_696_object, "Neutral");
		@@@var_0_bool:SetMessage((int)525681);
		@@@var_0_bool:ClearReplies();
		var_711_bool = 0; var_712_object = Obj();
		var_712_object = var_1_object;
		func_4929(var_712_object);
		if(var_711_bool != 0) {
			@@@var_0_bool:AddReply((int)525682, (int)44708, (int)27005);
		}
		var_722_bool = 0; var_723_object = Obj();
		var_723_object = var_1_object;
		func_4941(var_723_object);
		if(var_722_bool != 0) {
			@@@var_0_bool:AddReply((int)525696, (int)30190, (int)27019);
		}
		var_731_bool = 0; var_732_object = Obj();
		var_732_object = var_1_object;
		func_4953(var_732_object);
		if(var_731_bool != 0) {
			@@@var_0_bool:AddReply((int)525709, (int)27032, (int)27031);
		}
		@@@var_0_bool:AddReply((int)526667, (int)-1, (int)27943);
		@@@var_0_bool:AddReply((int)525689, (int)-1, (int)27012);
		@@@var_0_bool:AddReply((int)528783, (int)-1, (int)30195);
		goto Label_392;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x14d";
	}
Label_392:
	var_749_bool = 0;
	func_4764(var_749_bool);
	if(var_749_bool != 0) {

	Label_396:
		lshWaitForAnimEnd();
		var_750_object = var_3_object;
		if(var_750_object != 0) {
		} else {
			var_751_string = "";
			var_751_string = var_2_object;
			func_4593(var_751_string);
			goto Label_396;
	}
		PlayAnimation("all", "idle");

	Label_411:
		WaitForAnimEnd();
		var_754_object = var_3_object;
		if(var_754_object != 0) {
			goto Label_421;
		}
		PlayAnimation("all", "idle");
		goto Label_411;
	}
	goto Label_421;
	
Label_421:
	return 0;
	
}


func_1866(var_0_bool, var_1_object, var_2_object, var_3_object, var_631_object, var_632_object)
{
	var_0_bool = var_632_object;
	var_1_object = var_631_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_638_string = "";
		func_1929(var_632_object, "Neutral");
		@@@var_0_bool:SetMessage((int)526664);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)526665, (int)-1, (int)27941);
		@@@var_0_bool:AddReply((int)526666, (int)-1, (int)27942);
		@@@var_0_bool:AddReply((int)528772, (int)-1, (int)30183);
		goto Label_1899;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74e";
	}
Label_1899:
	var_656_bool = 0;
	func_4764(var_656_bool);
	if(var_656_bool != 0) {

	Label_1903:
		lshWaitForAnimEnd();
		var_657_object = var_3_object;
		if(var_657_object != 0) {
		} else {
			var_658_string = "";
			var_658_string = var_2_object;
			func_4593(var_658_string);
			goto Label_1903;
	}
		PlayAnimation("all", "idle");

	Label_1918:
		WaitForAnimEnd();
		var_661_object = var_3_object;
		if(var_661_object != 0) {
			goto Label_1928;
		}
		PlayAnimation("all", "idle");
		goto Label_1918;
	}
	goto Label_1928;
	
Label_1928:
	return 0;
	
}


func_4941(var_722_bool)
{
	var_724_int = 0; var_725_string = "";
	func_4695(var_724_int, "k4q01");
	var_727_bool = var_724_int == (int)3;
	if(var_727_bool != 0) {
		var_722_bool = 1;
		return 0;
	}
	var_722_bool = 0;
	return 0;
}


func_4690(var_133_bool, var_134_int, var_135_int)
{
	var_136_int = 0; var_137_int = 0;
	irand(var_137_int, var_135_int);
	var_133_bool = var_137_int < var_134_int;
	return 2;
}


func_4695(var_713_int, var_714_string)
{
	var_715_int = 0; var_716_int = 0;
	GetVariable(var_714_string, var_716_int);
	var_716_int = var_713_int;
	return 2;
}


func_4088()
{
	KillTimer((int)10);
	return 0;
}


func_4953(var_731_bool)
{
	var_733_int = 0; var_734_string = "";
	func_4695(var_733_int, "k4q01");
	var_736_bool = var_733_int == (int)5;
	if(var_736_bool != 0) {
		var_731_bool = 1;
		return 0;
	}
	var_731_bool = 0;
	return 0;
}


func_5210()
{
	var_94_bool = 0; var_95_int = 0; var_96_int = 0; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_int = 0; var_101_int = 0;
	ClearSubContainer((int)0);
	func_4717((int)0);
	var_103_int = var_100_int;
	var_104_int = 0; var_105_string = "";
	func_5379(var_104_int, "Rifle");
	AddItem(var_98_bool, var_104_int, (int)0, (int)1);
	var_110_int = 0; var_111_string = "";
	func_5379(var_110_int, "Revolver");
	AddItem(var_98_bool, var_110_int, (int)0, (int)1);
	var_114_int = 0; var_115_string = "";
	func_5379(var_114_int, "Knife");
	AddItem(var_98_bool, var_114_int, (int)0, (int)1);
	var_119_bool = var_100_int != (int)10;
	if(var_119_bool != 0) {
		var_120_int = 0; var_121_string = "";
		func_5379(var_120_int, "tvirin");
		AddItem(var_98_bool, var_120_int, (int)0, (int)1);
	} else {
			var_207_int = 0; var_208_string = "";
			func_5379(var_207_int, "tvirin");
			AddItem(var_98_bool, var_207_int, (int)0, (int)4);
	}
	var_124_int = 0; var_125_string = "";
	func_5379(var_124_int, "lockpick");
	AddItem(var_98_bool, var_124_int, (int)0, (int)3);
	var_128_string = ""; var_129_int = 0; var_130_int = 0;
	func_4646("Scalpel", (int)1, (int)2);
	var_139_string = ""; var_140_int = 0; var_141_int = 0; var_142_int = 0; var_143_int = 0;
	func_4657("revolver_ammo", (int)1, (int)1, (int)5, (int)10);
	var_156_string = ""; var_157_int = 0; var_158_int = 0; var_159_int = 0; var_160_int = 0;
	func_4657("rifle_ammo", (int)1, (int)1, (int)5, (int)20);
	irand(var_99_int, (int)100);
	var_163_bool = var_99_int != (int)0;
	if(var_163_bool != 0) {
		var_164_int = 0; var_165_string = "";
		func_5379(var_164_int, "kerosene");
		AddItem(var_98_bool, var_164_int, (int)0, var_99_int);
	}
	var_168_bool = var_100_int >= (int)3;
	if(var_168_bool != 0) {
		var_169_int = 0; var_170_string = "";
		func_5379(var_169_int, "halfboot_repel");
		AddItem(var_98_bool, var_169_int, (int)0, (int)1);
		var_173_int = 0; var_174_string = "";
		func_5379(var_173_int, "boot_repel");
		AddItem(var_98_bool, var_173_int, (int)0, (int)1);
	}
	var_178_bool = var_100_int >= (int)9;
	if(var_178_bool != 0) {
		var_179_int = 0; var_180_string = "";
		func_5379(var_179_int, "boot_army");
		AddItem(var_98_bool, var_179_int, (int)0, (int)1);
		var_183_int = 0; var_184_string = "";
		func_5379(var_183_int, "balahon");
		AddItem(var_98_bool, var_183_int, (int)0, (int)1);
		var_187_int = 0; var_188_string = "";
		func_5379(var_187_int, "glove_army");
		AddItem(var_98_bool, var_187_int, (int)0, (int)1);
	}
	func_5401((int)0);
	var_191_int = var_101_int;
	var_196_bool = var_101_int == (int)0;
	if(var_196_bool != 0) {
		var_197_int = 0; var_198_string = "";
		func_5379(var_197_int, "Gun_danko");
		AddItem(var_98_bool, var_197_int, (int)0, (int)1);
	} else {
		var_202_bool = var_101_int == (int)2;
		if(var_202_bool == 0) goto Label_5378;
		var_203_int = 0; var_204_string = "";
		func_5379(var_203_int, "Gun");
		AddItem(var_98_bool, var_203_int, (int)0, (int)1);

	}
Label_5378:
	return 8;
	
}


func_4700(var_168_bool, var_169_string, var_170_string)
{
	var_171_object = Obj(); var_172_object = Obj();
	FindActor(var_172_object, var_169_string);
	var_173_bool = var_172_object == 0; //@ne
	if(var_173_bool != 0) {
		var_168_bool = 0;
		return 2;
	}
	Trigger(var_172_object, var_170_string);
	var_168_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2659(var_0_bool, var_953_int, var_954_object)
{
	var_956_object = Obj(); var_957_bool = 0; var_958_int = 0; var_959_bool = 0; var_960_object = Obj(); var_961_bool = 0; var_962_int = 0; var_963_bool = 0;
	var_0_bool = var_954_object;
	var_964_bool = 0; var_965_object = Obj(); var_966_float = 0;
	var_954_object = var_965_object;
	func_4307(var_964_bool, var_965_object, (float)70.0);
	var_967_bool = var_964_bool == 0; //@nz
	if(var_967_bool != 0) {
		var_953_int = -2;
		return 8;
	}
	CreateDialog(var_960_object);
	var_968_int = 0;
	func_4758(var_968_int);
	@@var_960_object:SetNPCName(var_968_int);
	var_969_int = 0;
	func_4756(var_969_int);
	@@var_960_object:SetNPCDescription(var_969_int);
	var_970_string = "";
	func_4760(var_970_string);
	@@var_960_object:SetPhoto(var_970_string);
	var_971_string = "";
	func_4762(var_971_string);
	@@var_960_object:SetPhoto2(var_971_string);
	var_972_int = 0;
	func_5384(var_972_int);
	@@var_960_object:SetPlayerName(var_972_int);
	IsOverrideActive(var_961_bool);
	var_973_bool = var_961_bool;
	if(var_973_bool != 0) {
		var_953_int = -2;
		return 8;
	}
	DoDialog(var_960_object);
	var_974_bool = 0; var_975_object = Obj();
	func_4674(Obj());
	var_976_object = var_975_object;
	func_4394(var_974_bool, var_975_object);
	var_977_object = Obj(); var_978_object = Obj();
	var_954_object = var_977_object;
	var_960_object = var_978_object;
	TaskCall(18);
	func_2740(var_979_object, var_980_object, var_981_string, var_982_bool, var_977_object, var_978_object);
	TaskReturn();
	@@var_960_object:IsDialogEnd(var_963_bool);
	
Label_2722:
	var_1010_bool = var_963_bool == 0; //@nz
	if(var_1010_bool != 0) {
		sync();
		@@var_960_object:IsDialogEnd(var_963_bool);
		goto Label_2722;
	}
	var_954_object = Obj();
	func_4376();
	StopDialog(var_960_object);
	@@var_960_object:GetReturnValue((int)-1);
	var_962_int = var_953_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4452(var_298_bool, var_299_object)
{
	var_300_string = ""; var_301_int = 0; var_302_bool = 0; var_303_int = 0; var_304_string = ""; var_305_string = ""; var_306_int = 0; var_307_bool = 0; var_308_int = 0; var_309_string = "";
	var_305_string = "c";
	var_306_int = 0;
	
Label_4455:
	if((int)1 != 0) {
		var_312_int = var_306_int + (int)1;
		var_313_int = var_305_string + var_312_int;
		@@var_299_object:HasProperty(var_313_int, var_307_bool);
		var_314_bool = var_307_bool == 0; //@nz
		if(var_314_bool != 0) {
		} else {
			var_306_int = var_306_int + (int)1;
			goto Label_4455;
		}
	}
	var_315_bool = var_306_int == 0; //@nz
	if(var_315_bool != 0) {
		var_298_bool = 0;
		return 10;
	}
	var_308_int = 0;
	var_317_bool = var_306_int > (int)1;
	if(var_317_bool != 0) {
		irand(var_308_int, var_306_int);
	}
	var_319_int = var_308_int + (int)1;
	var_320_int = var_305_string + var_319_int;
	@@var_299_object:GetProperty(var_320_int, var_309_string);
	var_321_bool = 0; var_322_string = "";
	var_309_string = var_322_string;
	func_4624(var_321_bool, var_322_string);
	var_321_bool = var_298_bool;
	return 10;
	
}


func_4965(var_1183_bool)
{
	var_1185_int = 0; var_1186_string = "";
	func_4695(var_1185_int, "k11q01");
	var_1188_bool = var_1185_int == (int)9;
	if(var_1188_bool != 0) {
		var_1183_bool = 1;
		return 0;
	}
	var_1183_bool = 0;
	return 0;
}


func_2150(var_2_object, var_795_string)
{
	var_796_bool = 0;
	func_4764(var_796_bool);
	var_797_bool = var_796_bool == 0; //@nz
	if(var_797_bool != 0) {
		return 0;
	}
	var_798_bool = var_795_string == var_2_object;
	if(var_798_bool != 0) {
		return 0;
	}
	var_799_string = ""; var_800_bool = 0;
	var_795_string = var_799_string;
	var_802_bool = var_795_string == "";
	if(var_802_bool != 0) {
		var_800_bool = 0;
	} else {
		var_800_bool = 1;
	}
	func_4609(var_799_string, var_800_bool);
	var_2_object = var_795_string;
	return 0;
	
}


func_103(var_0_bool, var_1_object, var_2_object, var_3_object, var_377_object, var_378_object)
{
	var_0_bool = var_378_object;
	var_1_object = var_377_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_384_string = "";
		func_161(var_378_object, "Neutral");
		@@@var_0_bool:SetMessage((int)525483);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)525484, (int)30758, (int)26840);
		@@@var_0_bool:AddReply((int)529303, (int)-1, (int)30757);
		goto Label_131;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x6b";
	}
Label_131:
	var_408_bool = 0;
	func_4764(var_408_bool);
	if(var_408_bool != 0) {

	Label_135:
		lshWaitForAnimEnd();
		var_409_object = var_3_object;
		if(var_409_object != 0) {
		} else {
			var_410_string = "";
			var_410_string = var_2_object;
			func_4593(var_410_string);
			goto Label_135;
	}
		PlayAnimation("all", "idle");

	Label_150:
		WaitForAnimEnd();
		var_423_object = var_3_object;
		if(var_423_object != 0) {
			goto Label_160;
		}
		PlayAnimation("all", "idle");
		goto Label_150;
	}
	goto Label_160;
	
Label_160:
	return 0;
	
}


func_4199()
{
	var_73_int = 0; var_74_int = 0; var_75_bool = 0; var_76_int = 0; var_77_int = 0; var_78_bool = 0; var_79_int = 0; var_80_int = 0; var_81_bool = 0; var_82_int = 0; var_83_int = 0; var_84_bool = 0;
	WaitForAnimEnd();
	var_85_bool = 0;
	func_4302(var_85_bool);
	var_86_bool = var_85_bool == 0; //@nz
	if(var_86_bool != 0) {
		return 12;
	}
	func_4739((int)0);
	var_87_int = var_79_int;
	var_80_int = 0;
	
Label_4213:
	var_100_bool = 0;
	var_100_bool = 0;
	var_102_bool = var_80_int < (int)5;
	if(var_102_bool != 0) {
		var_103_bool = 0;
		func_4302(var_103_bool);
		if(var_103_bool != 0) {
			var_100_bool = 1;
		}
	}
	if(var_100_bool != 0) {
		var_104_bool = var_79_int == 0; //@nz
		if(var_104_bool != 0) {
			Sleep((int)3, var_81_bool);
			var_106_bool = var_81_bool == 0; //@nz
			if(var_106_bool != 0) {
			} else {
		} else {
				irand(var_82_int, var_79_int);
				irand(var_83_int, (int)5);
				var_112_bool = var_83_int != (int)0;
				if(var_112_bool != 0) {
					var_82_int = 0;
				}
				var_114_string = ""; var_115_int = 0;
				var_82_int = var_115_int;
				func_4732(var_114_string, var_115_int);
				PlayAnimation("all", var_114_string);
				WaitForAnimEnd(var_84_bool);
				var_116_bool = var_84_bool == 0; //@nz
				if(var_116_bool == 0) goto Label_4254;
				goto Label_4265;
		}
		Label_4254:
			var_107_bool = 0;
			func_4268(var_107_bool);
			var_108_bool = var_107_bool == 0; //@nz
			if(var_108_bool != 0) {
				goto Label_4265;
			}
			ResetAAS();
			var_80_int = var_80_int + (int)1;
			goto Label_4213;

		}
	}
Label_4265:
	ResetAAS();
	return 12;
	
}


func_4712(var_90_float)
{
	var_91_float = 0; var_92_float = 0;
	GetGameTime(var_92_float);
	var_92_float = var_90_float;
	return 2;
}


func_1645(var_0_bool, var_1_object, var_2_object, var_3_object, var_567_object, var_568_object)
{
	var_0_bool = var_568_object;
	var_1_object = var_567_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_574_string = "";
		func_1708(var_568_object, "Fear");
		@@@var_0_bool:SetMessage((int)526660);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)526661, (int)-1, (int)27937);
		@@@var_0_bool:AddReply((int)526662, (int)-1, (int)27938);
		@@@var_0_bool:AddReply((int)528771, (int)-1, (int)30182);
		goto Label_1678;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x671";
	}
Label_1678:
	var_592_bool = 0;
	func_4764(var_592_bool);
	if(var_592_bool != 0) {

	Label_1682:
		lshWaitForAnimEnd();
		var_593_object = var_3_object;
		if(var_593_object != 0) {
		} else {
			var_594_string = "";
			var_594_string = var_2_object;
			func_4593(var_594_string);
			goto Label_1682;
	}
		PlayAnimation("all", "idle");

	Label_1697:
		WaitForAnimEnd();
		var_597_object = var_3_object;
		if(var_597_object != 0) {
			goto Label_1707;
		}
		PlayAnimation("all", "idle");
		goto Label_1697;
	}
	goto Label_1707;
	
Label_1707:
	return 0;
	
}


func_3182(var_0_bool, var_1_object, var_2_object, var_3_object, var_1105_object, var_1106_object)
{
	var_0_bool = var_1106_object;
	var_1_object = var_1105_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1112_string = "";
		func_3240(var_1106_object, "Neutral");
		@@@var_0_bool:SetMessage((int)526689);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)526690, (int)-1, (int)27966);
		@@@var_0_bool:AddReply((int)526691, (int)-1, (int)27967);
		goto Label_3210;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xc72";
	}
Label_3210:
	var_1127_bool = 0;
	func_4764(var_1127_bool);
	if(var_1127_bool != 0) {

	Label_3214:
		lshWaitForAnimEnd();
		var_1128_object = var_3_object;
		if(var_1128_object != 0) {
		} else {
			var_1129_string = "";
			var_1129_string = var_2_object;
			func_4593(var_1129_string);
			goto Label_3214;
	}
		PlayAnimation("all", "idle");

	Label_3229:
		WaitForAnimEnd();
		var_1132_object = var_3_object;
		if(var_1132_object != 0) {
			goto Label_3239;
		}
		PlayAnimation("all", "idle");
		goto Label_3229;
	}
	goto Label_3239;
	
Label_3239:
	return 0;
	
}


func_4717(var_87_int)
{
	var_88_float = 0; var_89_float = 0;
	GetGameTime(var_89_float);
	var_91_int = 0;
	var_91_int = var_89_float / (int)24;
	var_87_int = (int)1 + var_91_int;
	return 2;
}


func_4977(var_1189_bool)
{
	var_1191_int = 0; var_1192_string = "";
	func_4695(var_1191_int, "ook11Grif1");
	var_1194_bool = var_1191_int == (int)0;
	if(var_1194_bool != 0) {
		var_1189_bool = 1;
		return 0;
	}
	var_1189_bool = 0;
	return 0;
}


func_4726(var_436_bool, var_437_int)
{
	var_438_int = 0;
	func_4717(var_438_int);
	var_436_bool = var_438_int == var_437_int;
	return 0;
}


func_3708(var_0_bool, var_1218_int, var_1219_object)
{
	var_1221_object = Obj(); var_1222_bool = 0; var_1223_int = 0; var_1224_bool = 0; var_1225_object = Obj(); var_1226_bool = 0; var_1227_int = 0; var_1228_bool = 0;
	var_0_bool = var_1219_object;
	var_1229_bool = 0; var_1230_object = Obj(); var_1231_float = 0;
	var_1219_object = var_1230_object;
	func_4307(var_1229_bool, var_1230_object, (float)70.0);
	var_1232_bool = var_1229_bool == 0; //@nz
	if(var_1232_bool != 0) {
		var_1218_int = -2;
		return 8;
	}
	CreateDialog(var_1225_object);
	var_1233_int = 0;
	func_4758(var_1233_int);
	@@var_1225_object:SetNPCName(var_1233_int);
	var_1234_int = 0;
	func_4756(var_1234_int);
	@@var_1225_object:SetNPCDescription(var_1234_int);
	var_1235_string = "";
	func_4760(var_1235_string);
	@@var_1225_object:SetPhoto(var_1235_string);
	var_1236_string = "";
	func_4762(var_1236_string);
	@@var_1225_object:SetPhoto2(var_1236_string);
	var_1237_int = 0;
	func_5384(var_1237_int);
	@@var_1225_object:SetPlayerName(var_1237_int);
	IsOverrideActive(var_1226_bool);
	var_1238_bool = var_1226_bool;
	if(var_1238_bool != 0) {
		var_1218_int = -2;
		return 8;
	}
	DoDialog(var_1225_object);
	var_1239_bool = 0; var_1240_object = Obj();
	func_4674(Obj());
	var_1241_object = var_1240_object;
	func_4394(var_1239_bool, var_1240_object);
	var_1242_object = Obj(); var_1243_object = Obj();
	var_1219_object = var_1242_object;
	var_1225_object = var_1243_object;
	TaskCall(26);
	func_3789(var_1244_object, var_1245_object, var_1246_string, var_1247_bool, var_1242_object, var_1243_object);
	TaskReturn();
	@@var_1225_object:IsDialogEnd(var_1228_bool);
	
Label_3771:
	var_1275_bool = var_1228_bool == 0; //@nz
	if(var_1275_bool != 0) {
		sync();
		@@var_1225_object:IsDialogEnd(var_1228_bool);
		goto Label_3771;
	}
	var_1219_object = Obj();
	func_4376();
	StopDialog(var_1225_object);
	@@var_1225_object:GetReturnValue((int)-1);
	var_1227_int = var_1218_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4732(var_93_string, var_94_int)
{
	var_95_string = ""; var_96_string = "";
	var_97_int = var_94_int;
	if(var_97_int != 0) {
		"idle" = "idle" + var_94_int;
	}
	var_96_string = var_93_string;
	return 2;
}


func_4989()
{
	var_153_object = Obj(); var_154_object = Obj();
	CreateDiaryEntry(var_154_object, (int)498, (int)1, (int)528065);
	var_158_bool = 0; var_159_object = Obj(); var_160_int = 0;
	var_154_object = var_159_object;
	func_5132(var_158_bool, var_159_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4739(var_87_int)
{
	var_88_int = 0; var_89_bool = 0; var_90_int = 0; var_91_bool = 0;
	var_90_int = 0;
	
Label_4741:
	var_93_string = ""; var_94_int = 0;
	var_90_int = var_94_int;
	func_4732(var_93_string, var_94_int);
	HasAnimation(var_91_bool, "all", var_93_string);
	var_98_bool = var_91_bool == 0; //@nz
	if(var_98_bool != 0) {
	} else {
		var_90_int = var_90_int + (int)1;
		goto Label_4741;
	}
	var_90_int = var_87_int;
	return 4;
	
}


func_1929(var_2_object, var_638_string)
{
	var_639_bool = 0;
	func_4764(var_639_bool);
	var_640_bool = var_639_bool == 0; //@nz
	if(var_640_bool != 0) {
		return 0;
	}
	var_641_bool = var_638_string == var_2_object;
	if(var_641_bool != 0) {
		return 0;
	}
	var_642_string = ""; var_643_bool = 0;
	var_638_string = var_642_string;
	var_645_bool = var_638_string == "";
	if(var_645_bool != 0) {
		var_643_bool = 0;
	} else {
		var_643_bool = 1;
	}
	func_4609(var_642_string, var_643_bool);
	var_2_object = var_638_string;
	return 0;
	
}


func_4489(var_329_bool, var_330_object)
{
	var_331_string = ""; var_332_int = 0; var_333_bool = 0; var_334_int = 0; var_335_string = ""; var_336_string = ""; var_337_int = 0; var_338_bool = 0; var_339_int = 0; var_340_string = "";
	var_342_int = 0;
	func_4717(var_342_int);
	var_343_int = "d" + var_342_int;
	var_336_string = var_343_int + "m";
	var_337_int = 0;
	
Label_4498:
	if((int)1 != 0) {
		var_347_int = var_337_int + (int)1;
		var_348_int = var_336_string + var_347_int;
		@@var_330_object:HasProperty(var_348_int, var_338_bool);
		var_349_bool = var_338_bool == 0; //@nz
		if(var_349_bool != 0) {
		} else {
			var_337_int = var_337_int + (int)1;
			goto Label_4498;
		}
	}
	var_350_bool = var_337_int == 0; //@nz
	if(var_350_bool != 0) {
		var_329_bool = 0;
		return 10;
	}
	var_339_int = 0;
	var_352_bool = var_337_int > (int)1;
	if(var_352_bool != 0) {
		irand(var_339_int, var_337_int);
	}
	var_354_int = var_339_int + (int)1;
	var_355_int = var_336_string + var_354_int;
	@@var_330_object:GetProperty(var_355_int, var_340_string);
	var_356_bool = 0; var_357_string = "";
	var_340_string = var_357_string;
	func_4624(var_356_bool, var_357_string);
	var_356_bool = var_329_bool;
	return 10;
	
}


func_5002()
{
	var_143_object = Obj(); var_144_object = Obj();
	CreateDiaryEntry(var_144_object, (int)497, (int)1, (int)528064);
	var_148_bool = 0; var_149_object = Obj(); var_150_int = 0;
	var_144_object = var_149_object;
	func_5132(var_148_bool, var_149_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3470(var_2_object, var_1173_string)
{
	var_1174_bool = 0;
	func_4764(var_1174_bool);
	var_1175_bool = var_1174_bool == 0; //@nz
	if(var_1175_bool != 0) {
		return 0;
	}
	var_1176_bool = var_1173_string == var_2_object;
	if(var_1176_bool != 0) {
		return 0;
	}
	var_1177_string = ""; var_1178_bool = 0;
	var_1173_string = var_1177_string;
	var_1180_bool = var_1173_string == "";
	if(var_1180_bool != 0) {
		var_1178_bool = 0;
	} else {
		var_1178_bool = 1;
	}
	func_4609(var_1177_string, var_1178_bool);
	var_2_object = var_1173_string;
	return 0;
	
}


func_1424(var_0_bool, var_1_object, var_2_object, var_3_object, var_464_object, var_465_object)
{
	var_0_bool = var_465_object;
	var_1_object = var_464_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_471_string = "";
		func_1487(var_465_object, "Fear");
		@@@var_0_bool:SetMessage((int)526656);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)526657, (int)-1, (int)27933);
		@@@var_0_bool:AddReply((int)526658, (int)-1, (int)27934);
		@@@var_0_bool:AddReply((int)542279, (int)-1, (int)44624);
		goto Label_1457;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x594";
	}
Label_1457:
	var_489_bool = 0;
	func_4764(var_489_bool);
	if(var_489_bool != 0) {

	Label_1461:
		lshWaitForAnimEnd();
		var_490_object = var_3_object;
		if(var_490_object != 0) {
		} else {
			var_491_string = "";
			var_491_string = var_2_object;
			func_4593(var_491_string);
			goto Label_1461;
	}
		PlayAnimation("all", "idle");

	Label_1476:
		WaitForAnimEnd();
		var_494_object = var_3_object;
		if(var_494_object != 0) {
			goto Label_1486;
		}
		PlayAnimation("all", "idle");
		goto Label_1476;
	}
	goto Label_1486;
	
Label_1486:
	return 0;
	
}


func_2961(var_0_bool, var_1_object, var_2_object, var_3_object, var_1041_object, var_1042_object)
{
	var_0_bool = var_1042_object;
	var_1_object = var_1041_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1048_string = "";
		func_3024(var_1042_object, "Neutral");
		@@@var_0_bool:SetMessage((int)526685);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)526686, (int)-1, (int)27962);
		@@@var_0_bool:AddReply((int)526687, (int)-1, (int)27963);
		@@@var_0_bool:AddReply((int)529000, (int)-1, (int)30437);
		goto Label_2994;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xb95";
	}
Label_2994:
	var_1066_bool = 0;
	func_4764(var_1066_bool);
	if(var_1066_bool != 0) {

	Label_2998:
		lshWaitForAnimEnd();
		var_1067_object = var_3_object;
		if(var_1067_object != 0) {
		} else {
			var_1068_string = "";
			var_1068_string = var_2_object;
			func_4593(var_1068_string);
			goto Label_2998;
	}
		PlayAnimation("all", "idle");

	Label_3013:
		WaitForAnimEnd();
		var_1071_object = var_3_object;
		if(var_1071_object != 0) {
			goto Label_3023;
		}
		PlayAnimation("all", "idle");
		goto Label_3013;
	}
	goto Label_3023;
	
Label_3023:
	return 0;
	
}


func_2448(var_0_bool, var_892_int, var_893_object)
{
	var_895_object = Obj(); var_896_bool = 0; var_897_int = 0; var_898_bool = 0; var_899_object = Obj(); var_900_bool = 0; var_901_int = 0; var_902_bool = 0;
	var_0_bool = var_893_object;
	var_903_bool = 0; var_904_object = Obj(); var_905_float = 0;
	var_893_object = var_904_object;
	func_4307(var_903_bool, var_904_object, (float)70.0);
	var_906_bool = var_903_bool == 0; //@nz
	if(var_906_bool != 0) {
		var_892_int = -2;
		return 8;
	}
	CreateDialog(var_899_object);
	var_907_int = 0;
	func_4758(var_907_int);
	@@var_899_object:SetNPCName(var_907_int);
	var_908_int = 0;
	func_4756(var_908_int);
	@@var_899_object:SetNPCDescription(var_908_int);
	var_909_string = "";
	func_4760(var_909_string);
	@@var_899_object:SetPhoto(var_909_string);
	var_910_string = "";
	func_4762(var_910_string);
	@@var_899_object:SetPhoto2(var_910_string);
	var_911_int = 0;
	func_5384(var_911_int);
	@@var_899_object:SetPlayerName(var_911_int);
	IsOverrideActive(var_900_bool);
	var_912_bool = var_900_bool;
	if(var_912_bool != 0) {
		var_892_int = -2;
		return 8;
	}
	DoDialog(var_899_object);
	var_913_bool = 0; var_914_object = Obj();
	func_4674(Obj());
	var_915_object = var_914_object;
	func_4394(var_913_bool, var_914_object);
	var_916_object = Obj(); var_917_object = Obj();
	var_893_object = var_916_object;
	var_899_object = var_917_object;
	TaskCall(16);
	func_2529(var_918_object, var_919_object, var_920_string, var_921_bool, var_916_object, var_917_object);
	TaskReturn();
	@@var_899_object:IsDialogEnd(var_902_bool);
	
Label_2511:
	var_946_bool = var_902_bool == 0; //@nz
	if(var_946_bool != 0) {
		sync();
		@@var_899_object:IsDialogEnd(var_902_bool);
		goto Label_2511;
	}
	var_893_object = Obj();
	func_4376();
	StopDialog(var_899_object);
	@@var_899_object:GetReturnValue((int)-1);
	var_901_int = var_892_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4756(var_275_int)
{
	var_275_int = 515535;
	return 0;
}


func_4758(var_274_int)
{
	var_274_int = 502860;
	return 0;
}


func_5015()
{
	var_133_object = Obj(); var_134_object = Obj();
	CreateDiaryEntry(var_134_object, (int)496, (int)1, (int)528063);
	var_138_bool = 0; var_139_object = Obj(); var_140_int = 0;
	var_134_object = var_139_object;
	func_5132(var_138_bool, var_139_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4760(var_276_string)
{
	var_276_string = "ui/NPC_Grif.png";
	return 0;
}


func_4762(var_277_string)
{
	var_277_string = "ui/NPC_Grif_b.png";
	return 0;
}


func_4764(var_269_bool)
{
	var_269_bool = 1;
	return 0;
}


func_4766(var_117_object)
{
	var_118_object = Obj(); var_119_string = ""; var_120_float = 0;
	func_5160(Obj());
	var_121_object = var_118_object;
	func_5177(var_118_object, "pt_map_notkin", (float)2);
	var_141_object = Obj();
	func_5160(var_141_object);
	@@var_117_object:ShowMap(var_141_object);
	return 0;
}


func_161(var_2_object, var_384_string)
{
	var_385_bool = 0;
	func_4764(var_385_bool);
	var_386_bool = var_385_bool == 0; //@nz
	if(var_386_bool != 0) {
		return 0;
	}
	var_387_bool = var_384_string == var_2_object;
	if(var_387_bool != 0) {
		return 0;
	}
	var_388_string = ""; var_389_bool = 0;
	var_384_string = var_388_string;
	var_391_bool = var_384_string == "";
	if(var_391_bool != 0) {
		var_389_bool = 0;
	} else {
		var_389_bool = 1;
	}
	func_4609(var_388_string, var_389_bool);
	var_2_object = var_384_string;
	return 0;
	
}


func_5028()
{
	var_123_object = Obj(); var_124_object = Obj();
	CreateDiaryEntry(var_124_object, (int)495, (int)1, (int)528062);
	var_128_bool = 0; var_129_object = Obj(); var_130_int = 0;
	var_124_object = var_129_object;
	func_5132(var_128_bool, var_129_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_422(var_2_object, var_702_string)
{
	var_703_bool = 0;
	func_4764(var_703_bool);
	var_704_bool = var_703_bool == 0; //@nz
	if(var_704_bool != 0) {
		return 0;
	}
	var_705_bool = var_702_string == var_2_object;
	if(var_705_bool != 0) {
		return 0;
	}
	var_706_string = ""; var_707_bool = 0;
	var_702_string = var_706_string;
	var_709_bool = var_702_string == "";
	if(var_709_bool != 0) {
		var_707_bool = 0;
	} else {
		var_707_bool = 1;
	}
	func_4609(var_706_string, var_707_bool);
	var_2_object = var_702_string;
	return 0;
	
}


func_3240(var_2_object, var_1112_string)
{
	var_1113_bool = 0;
	func_4764(var_1113_bool);
	var_1114_bool = var_1113_bool == 0; //@nz
	if(var_1114_bool != 0) {
		return 0;
	}
	var_1115_bool = var_1112_string == var_2_object;
	if(var_1115_bool != 0) {
		return 0;
	}
	var_1116_string = ""; var_1117_bool = 0;
	var_1112_string = var_1116_string;
	var_1119_bool = var_1112_string == "";
	if(var_1119_bool != 0) {
		var_1117_bool = 0;
	} else {
		var_1117_bool = 1;
	}
	func_4609(var_1116_string, var_1117_bool);
	var_2_object = var_1112_string;
	return 0;
	
}


func_1708(var_2_object, var_574_string)
{
	var_575_bool = 0;
	func_4764(var_575_bool);
	var_576_bool = var_575_bool == 0; //@nz
	if(var_576_bool != 0) {
		return 0;
	}
	var_577_bool = var_574_string == var_2_object;
	if(var_577_bool != 0) {
		return 0;
	}
	var_578_string = ""; var_579_bool = 0;
	var_574_string = var_578_string;
	var_581_bool = var_574_string == "";
	if(var_581_bool != 0) {
		var_579_bool = 0;
	} else {
		var_579_bool = 1;
	}
	func_4609(var_578_string, var_579_bool);
	var_2_object = var_574_string;
	return 0;
	
}


func_4268(var_107_bool)
{
	var_107_bool = 1;
	return 0;
}


func_4782()
{
	var_75_object = Obj(); var_76_object = Obj();
	SetVariable("k4q01", (int)2);
	func_5160(Obj());
	var_79_object = var_76_object;
	var_90_float = 0;
	func_4712(var_90_float);
	@@var_76_object:AddMark("k4q01GrifGotoNotkin", "pt_map_notkin", (int)1, (int)515278, var_90_float);
	func_5106();
	return 2;
}
EMIT "Stack[-1] = 0";


func_4270()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_5041()
{
	var_113_object = Obj(); var_114_object = Obj();
	CreateDiaryEntry(var_114_object, (int)494, (int)1, (int)528061);
	var_118_bool = 0; var_119_object = Obj(); var_120_int = 0;
	var_114_object = var_119_object;
	func_5132(var_118_bool, var_119_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4275(var_82_float, var_83_object)
{
	var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0);
	GetPosition(var_87_cvector);
	@@var_83_object:GetPosition(var_88_cvector);
	var_89_cvector = var_88_cvector - var_87_cvector;
	var_82_float = var_89_cvector | var_89_cvector;
	return 6;
}


func_2740(var_0_bool, var_1_object, var_2_object, var_3_object, var_977_object, var_978_object)
{
	var_0_bool = var_978_object;
	var_1_object = var_977_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_984_string = "";
		func_2803(var_978_object, "Fear");
		@@@var_0_bool:SetMessage((int)526681);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)526682, (int)-1, (int)27958);
		@@@var_0_bool:AddReply((int)526683, (int)-1, (int)27959);
		@@@var_0_bool:AddReply((int)528752, (int)-1, (int)30178);
		goto Label_2773;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xab8";
	}
Label_2773:
	var_1002_bool = 0;
	func_4764(var_1002_bool);
	if(var_1002_bool != 0) {

	Label_2777:
		lshWaitForAnimEnd();
		var_1003_object = var_3_object;
		if(var_1003_object != 0) {
		} else {
			var_1004_string = "";
			var_1004_string = var_2_object;
			func_4593(var_1004_string);
			goto Label_2777;
	}
		PlayAnimation("all", "idle");

	Label_2792:
		WaitForAnimEnd();
		var_1007_object = var_3_object;
		if(var_1007_object != 0) {
			goto Label_2802;
		}
		PlayAnimation("all", "idle");
		goto Label_2792;
	}
	goto Label_2802;
	
Label_2802:
	return 0;
	
}


func_2227(var_0_bool, var_828_int, var_829_object)
{
	var_831_object = Obj(); var_832_bool = 0; var_833_int = 0; var_834_bool = 0; var_835_object = Obj(); var_836_bool = 0; var_837_int = 0; var_838_bool = 0;
	var_0_bool = var_829_object;
	var_839_bool = 0; var_840_object = Obj(); var_841_float = 0;
	var_829_object = var_840_object;
	func_4307(var_839_bool, var_840_object, (float)70.0);
	var_842_bool = var_839_bool == 0; //@nz
	if(var_842_bool != 0) {
		var_828_int = -2;
		return 8;
	}
	CreateDialog(var_835_object);
	var_843_int = 0;
	func_4758(var_843_int);
	@@var_835_object:SetNPCName(var_843_int);
	var_844_int = 0;
	func_4756(var_844_int);
	@@var_835_object:SetNPCDescription(var_844_int);
	var_845_string = "";
	func_4760(var_845_string);
	@@var_835_object:SetPhoto(var_845_string);
	var_846_string = "";
	func_4762(var_846_string);
	@@var_835_object:SetPhoto2(var_846_string);
	var_847_int = 0;
	func_5384(var_847_int);
	@@var_835_object:SetPlayerName(var_847_int);
	IsOverrideActive(var_836_bool);
	var_848_bool = var_836_bool;
	if(var_848_bool != 0) {
		var_828_int = -2;
		return 8;
	}
	DoDialog(var_835_object);
	var_849_bool = 0; var_850_object = Obj();
	func_4674(Obj());
	var_851_object = var_850_object;
	func_4394(var_849_bool, var_850_object);
	var_852_object = Obj(); var_853_object = Obj();
	var_829_object = var_852_object;
	var_835_object = var_853_object;
	TaskCall(14);
	func_2308(var_854_object, var_855_object, var_856_string, var_857_bool, var_852_object, var_853_object);
	TaskReturn();
	@@var_835_object:IsDialogEnd(var_838_bool);
	
Label_2290:
	var_885_bool = var_838_bool == 0; //@nz
	if(var_885_bool != 0) {
		sync();
		@@var_835_object:IsDialogEnd(var_838_bool);
		goto Label_2290;
	}
	var_829_object = Obj();
	func_4376();
	StopDialog(var_835_object);
	@@var_835_object:GetReturnValue((int)-1);
	var_837_int = var_828_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4532(var_501_bool, var_502_object)
{
	var_503_bool = 0; var_504_object = Obj(); var_505_float = 0;
	var_502_object = var_504_object;
	func_4540(var_503_bool, var_504_object, (float)70);
	var_503_bool = var_501_bool;
	return 0;
}


func_4023(var_0_bool)
{
	var_69_bool = 0;
	func_4302(var_69_bool);
	var_72_bool = var_69_bool == 0; //@nz
	if(var_72_bool != 0) {
		Hold();
	}
	GetDirection(var_0_bool);
	
Label_4032:
	func_4199();
	goto Label_4032;
}
EMIT "Return(); Pop(0)";


func_4283(var_75_bool, var_76_cvector)
{
	var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_bool = 0;
	GetPosition(var_80_cvector);
	var_81_cvector = var_76_cvector - var_80_cvector;
	var_83_float = GetByIndex(var_81_cvector, 0);
	var_84_float = GetByIndex(var_81_cvector, 2);
	Rotate(var_83_float, var_84_float, var_82_bool);
	var_82_bool = var_75_bool;
	return 6;
}


func_4540(var_503_bool, var_504_object, var_505_float)
{
	var_506_float = 0; var_507_cvector = CVector(0,0,0); var_508_cvector = CVector(0,0,0); var_509_cvector = CVector(0,0,0); var_510_cvector = CVector(0,0,0); var_511_cvector = CVector(0,0,0); var_512_cvector = CVector(0,0,0); var_513_bool = 0; var_514_float = 0; var_515_cvector = CVector(0,0,0); var_516_cvector = CVector(0,0,0); var_517_cvector = CVector(0,0,0); var_518_cvector = CVector(0,0,0); var_519_cvector = CVector(0,0,0); var_520_cvector = CVector(0,0,0); var_521_bool = 0;
	@@var_504_object:GetPosition(var_515_cvector);
	@@var_504_object:GetEyesHeight(var_514_float);
	var_522_float = GetByIndex(var_515_cvector, 1);
	var_522_float = var_522_float + var_514_float;
	SetByIndex(var_515_cvector, 1) = var_522_float;
	GetPosition(var_516_cvector);
	GetEyesHeight(var_514_float);
	var_523_float = GetByIndex(var_516_cvector, 1);
	var_523_float = var_523_float + var_514_float;
	SetByIndex(var_516_cvector, 1) = var_523_float;
	var_517_cvector = var_515_cvector - var_516_cvector;
	var_524_float = GetByIndex(var_517_cvector, 1);
	SetByIndex(var_517_cvector, 1) = (float)0;
	var_525_int = var_517_cvector | var_517_cvector;
	var_526_float = sqrt(var_525_int);
	var_517_cvector = var_517_cvector / var_526_float;
	var_518_cvector = -var_517_cvector;
	var_527_float = var_517_cvector * var_505_float;
	var_519_cvector = var_527_float - CVector(0.0, 10.0, 0.0);
	var_520_cvector = var_516_cvector + var_519_cvector;
	IsOverrideActive(var_521_bool);
	var_529_bool = var_521_bool;
	if(var_529_bool != 0) {
		var_503_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_520_cvector, var_518_cvector, (bool)1);
	var_531_float = GetByIndex(var_519_cvector, 0);
	var_532_float = GetByIndex(var_519_cvector, 2);
	Rotate(var_531_float, var_532_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_503_bool = 1;
	return 16;
}


func_5054()
{
	var_88_object = Obj(); var_89_object = Obj();
	CreateDiaryEntry(var_89_object, (int)493, (int)1, (int)528060);
	var_93_bool = 0; var_94_object = Obj(); var_95_int = 0;
	var_89_object = var_94_object;
	func_5132(var_93_bool, var_94_object, (int)480);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4805()
{
	var_150_object = Obj(); var_151_object = Obj();
	SetVariable("k4q01", (int)4);
	func_5160(Obj());
	var_154_object = var_151_object;
	var_159_float = 0;
	func_4712(var_159_float);
	@@var_151_object:AddMark("k4q01GrifGotoBraga", "pt_map_warehouse_gangster", (int)1, (int)530231, var_159_float);
	func_5093();
	var_168_bool = 0; var_169_string = ""; var_170_string = "";
	func_4700(var_168_bool, "quest_k4_01", "init_volnica");
	return 2;
}
EMIT "Stack[-1] = 0";


func_4293(var_71_bool, var_72_object)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0);
	@@var_72_object:GetPosition(var_74_cvector);
	var_75_bool = 0; var_76_cvector = CVector(0,0,0);
	var_74_cvector = var_76_cvector;
	func_4283(var_75_bool, var_76_cvector);
	var_75_bool = var_71_bool;
	return 2;
}


func_4037(var_92_bool)
{
	var_93_object = Obj(); var_94_object = Obj();
	FindActor(var_94_object, "player");
	var_96_bool = var_94_object == 0; //@nz
	if(var_96_bool != 0) {
		var_92_bool = 0;
		return 2;
	}
	var_97_bool = 0; var_98_object = Obj();
	var_94_object = var_98_object;
	func_4293(var_97_bool, var_98_object);
	var_97_bool = var_92_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5067()
{
	var_209_object = Obj(); var_210_object = Obj();
	CreateDiaryEntry(var_210_object, (int)786, (int)1, (int)542494);
	var_214_bool = 0; var_215_object = Obj(); var_216_int = 0;
	var_210_object = var_215_object;
	func_5132(var_214_bool, var_215_object, (int)368);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3789(var_0_bool, var_1_object, var_2_object, var_3_object, var_1242_object, var_1243_object)
{
	var_0_bool = var_1243_object;
	var_1_object = var_1242_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_1249_string = "";
		func_3852(var_1243_object, "Neutral");
		@@@var_0_bool:SetMessage((int)539291);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)542571, (int)44971, (int)44970);
		@@@var_0_bool:AddReply((int)539292, (int)-1, (int)41235);
		@@@var_0_bool:AddReply((int)542570, (int)-1, (int)44969);
		goto Label_3822;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xed1";
	}
Label_3822:
	var_1267_bool = 0;
	func_4764(var_1267_bool);
	if(var_1267_bool != 0) {

	Label_3826:
		lshWaitForAnimEnd();
		var_1268_object = var_3_object;
		if(var_1268_object != 0) {
		} else {
			var_1269_string = "";
			var_1269_string = var_2_object;
			func_4593(var_1269_string);
			goto Label_3826;
	}
		PlayAnimation("all", "idle");

	Label_3841:
		WaitForAnimEnd();
		var_1272_object = var_3_object;
		if(var_1272_object != 0) {
			goto Label_3851;
		}
		PlayAnimation("all", "idle");
		goto Label_3841;
	}
	goto Label_3851;
	
Label_3851:
	return 0;
	
}


func_4302(var_69_bool)
{
	var_70_bool = 0; var_71_bool = 0;
	IsLoaded(var_71_bool);
	var_71_bool = var_69_bool;
	return 2;
}


func_1487(var_2_object, var_471_string)
{
	var_472_bool = 0;
	func_4764(var_472_bool);
	var_473_bool = var_472_bool == 0; //@nz
	if(var_473_bool != 0) {
		return 0;
	}
	var_474_bool = var_471_string == var_2_object;
	if(var_474_bool != 0) {
		return 0;
	}
	var_475_string = ""; var_476_bool = 0;
	var_471_string = var_475_string;
	var_478_bool = var_471_string == "";
	if(var_478_bool != 0) {
		var_476_bool = 0;
	} else {
		var_476_bool = 1;
	}
	func_4609(var_475_string, var_476_bool);
	var_2_object = var_471_string;
	return 0;
	
}


func_3024(var_2_object, var_1048_string)
{
	var_1049_bool = 0;
	func_4764(var_1049_bool);
	var_1050_bool = var_1049_bool == 0; //@nz
	if(var_1050_bool != 0) {
		return 0;
	}
	var_1051_bool = var_1048_string == var_2_object;
	if(var_1051_bool != 0) {
		return 0;
	}
	var_1052_string = ""; var_1053_bool = 0;
	var_1048_string = var_1052_string;
	var_1055_bool = var_1048_string == "";
	if(var_1055_bool != 0) {
		var_1053_bool = 0;
	} else {
		var_1053_bool = 1;
	}
	func_4609(var_1052_string, var_1053_bool);
	var_2_object = var_1048_string;
	return 0;
	
}


func_4307(var_226_bool, var_227_object, var_228_float)
{
	var_229_float = 0; var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_bool = 0; var_237_bool = 0; var_238_float = 0; var_239_cvector = CVector(0,0,0); var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0); var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_bool = 0; var_246_bool = 0;
	@@var_227_object:GetPosition(var_239_cvector);
	@@var_227_object:GetEyesHeight(var_238_float);
	var_247_float = GetByIndex(var_239_cvector, 1);
	var_247_float = var_247_float + var_238_float;
	SetByIndex(var_239_cvector, 1) = var_247_float;
	GetPosition(var_240_cvector);
	GetEyesHeight(var_238_float);
	var_248_float = GetByIndex(var_240_cvector, 1);
	var_248_float = var_248_float + var_238_float;
	SetByIndex(var_240_cvector, 1) = var_248_float;
	var_241_cvector = var_239_cvector - var_240_cvector;
	var_249_float = GetByIndex(var_241_cvector, 1);
	SetByIndex(var_241_cvector, 1) = (float)0;
	var_250_int = var_241_cvector | var_241_cvector;
	var_251_float = sqrt(var_250_int);
	var_241_cvector = var_241_cvector / var_251_float;
	var_242_cvector = -var_241_cvector;
	var_252_float = var_241_cvector * var_228_float;
	var_253_cvector = CVector(0,0,0); var_254_cvector = CVector(0,0,0);
	var_254_cvector = var_242_cvector ^ CVector(0.0, 1.0, 0.0);
	func_4680(var_253_cvector, var_254_cvector);
	var_262_float = var_253_cvector * (int)25;
	var_263_int = var_252_float + var_262_float;
	var_243_cvector = var_263_int - CVector(0.0, 10.0, 0.0);
	var_244_cvector = var_240_cvector + var_243_cvector;
	IsOverrideActive(var_245_bool);
	var_265_bool = var_245_bool;
	if(var_265_bool != 0) {
		var_226_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_244_cvector, var_242_cvector, (bool)1);
	var_267_float = GetByIndex(var_243_cvector, 0);
	var_268_float = GetByIndex(var_243_cvector, 2);
	Rotate(var_267_float, var_268_float);
	var_269_bool = 0;
	func_4764(var_269_bool);
	if(var_269_bool != 0) {
	} else {
		HasAnimationTrack(var_246_bool, "head");
		var_271_bool = var_246_bool;
		if(var_271_bool == 0) goto Label_4370;
		LookAsyncCamera("head");
	}
Label_4370:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_226_bool = 1;
	return 18;
	
}


func_4052(var_0_bool)
{
	var_144_float = GetByIndex(var_0_bool, 0);
	var_145_float = GetByIndex(var_0_bool, 2);
	RotateAsync(var_144_float, var_145_float);
	return 0;
}


func_2006(var_0_bool, var_764_int, var_765_object)
{
	var_767_object = Obj(); var_768_bool = 0; var_769_int = 0; var_770_bool = 0; var_771_object = Obj(); var_772_bool = 0; var_773_int = 0; var_774_bool = 0;
	var_0_bool = var_765_object;
	var_775_bool = 0; var_776_object = Obj(); var_777_float = 0;
	var_765_object = var_776_object;
	func_4307(var_775_bool, var_776_object, (float)70.0);
	var_778_bool = var_775_bool == 0; //@nz
	if(var_778_bool != 0) {
		var_764_int = -2;
		return 8;
	}
	CreateDialog(var_771_object);
	var_779_int = 0;
	func_4758(var_779_int);
	@@var_771_object:SetNPCName(var_779_int);
	var_780_int = 0;
	func_4756(var_780_int);
	@@var_771_object:SetNPCDescription(var_780_int);
	var_781_string = "";
	func_4760(var_781_string);
	@@var_771_object:SetPhoto(var_781_string);
	var_782_string = "";
	func_4762(var_782_string);
	@@var_771_object:SetPhoto2(var_782_string);
	var_783_int = 0;
	func_5384(var_783_int);
	@@var_771_object:SetPlayerName(var_783_int);
	IsOverrideActive(var_772_bool);
	var_784_bool = var_772_bool;
	if(var_784_bool != 0) {
		var_764_int = -2;
		return 8;
	}
	DoDialog(var_771_object);
	var_785_bool = 0; var_786_object = Obj();
	func_4674(Obj());
	var_787_object = var_786_object;
	func_4394(var_785_bool, var_786_object);
	var_788_object = Obj(); var_789_object = Obj();
	var_765_object = var_788_object;
	var_771_object = var_789_object;
	TaskCall(12);
	func_2087(var_790_object, var_791_object, var_792_string, var_793_bool, var_788_object, var_789_object);
	TaskReturn();
	@@var_771_object:IsDialogEnd(var_774_bool);
	
Label_2069:
	var_821_bool = var_774_bool == 0; //@nz
	if(var_821_bool != 0) {
		sync();
		@@var_771_object:IsDialogEnd(var_774_bool);
		goto Label_2069;
	}
	var_765_object = Obj();
	func_4376();
	StopDialog(var_771_object);
	@@var_771_object:GetReturnValue((int)-1);
	var_773_int = var_764_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5080()
{
	var_191_object = Obj(); var_192_object = Obj();
	CreateDiaryEntry(var_192_object, (int)377, (int)1, (int)525734);
	var_196_bool = 0; var_197_object = Obj(); var_198_int = 0;
	var_192_object = var_197_object;
	func_5132(var_196_bool, var_197_object, (int)368);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4057(var_75_bool)
{
	var_76_object = Obj(); var_77_bool = 0; var_78_object = Obj(); var_79_bool = 0;
	FindActor(var_78_object, "player");
	var_81_bool = var_78_object == 0; //@nz
	if(var_81_bool != 0) {
		var_75_bool = 0;
		return 4;
	}
	var_82_float = 0; var_83_object = Obj();
	var_78_object = var_83_object;
	func_4275(var_82_float, var_83_object);
	var_91_bool = var_82_float > (float)90000.0;
	if(var_91_bool != 0) {
		var_75_bool = 0;
		return 4;
	}
	CanSee(var_79_bool, var_78_object);
	var_79_bool = var_75_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_4833()
{
	SetVariable("k4q01", (int)6);
	func_5080();
	return 0;
}


func_2529(var_0_bool, var_1_object, var_2_object, var_3_object, var_916_object, var_917_object)
{
	var_0_bool = var_917_object;
	var_1_object = var_916_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_923_string = "";
		func_2587(var_917_object, "Neutral");
		@@@var_0_bool:SetMessage((int)526677);
		@@@var_0_bool:ClearReplies();
		@@@var_0_bool:AddReply((int)526678, (int)-1, (int)27954);
		@@@var_0_bool:AddReply((int)526679, (int)-1, (int)27955);
		goto Label_2557;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x9e5";
	}
Label_2557:
	var_938_bool = 0;
	func_4764(var_938_bool);
	if(var_938_bool != 0) {

	Label_2561:
		lshWaitForAnimEnd();
		var_939_object = var_3_object;
		if(var_939_object != 0) {
		} else {
			var_940_string = "";
			var_940_string = var_2_object;
			func_4593(var_940_string);
			goto Label_2561;
	}
		PlayAnimation("all", "idle");

	Label_2576:
		WaitForAnimEnd();
		var_943_object = var_3_object;
		if(var_943_object != 0) {
			goto Label_2586;
		}
		PlayAnimation("all", "idle");
		goto Label_2576;
	}
	goto Label_2586;
	
Label_2586:
	return 0;
	
}


func_5093()
{
	var_160_object = Obj(); var_161_object = Obj();
	CreateDiaryEntry(var_161_object, (int)372, (int)1, (int)525729);
	var_165_bool = 0; var_166_object = Obj(); var_167_int = 0;
	var_161_object = var_166_object;
	func_5132(var_165_bool, var_166_object, (int)368);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4842()
{
	var_81_int = 0; var_82_int = 0;
	GetVariable("k11q01SoulCount", var_82_int);
	var_82_int = var_82_int + (int)1;
	SetVariable("k11q01SoulCount", var_82_int);
	var_87_bool = var_82_int == (int)2;
	if(var_87_bool != 0) {
		func_5054();
	} else {
		var_112_bool = var_82_int == (int)3;
		if(var_112_bool != 0) {
			func_5041();
			goto Label_4892;
		}
		var_122_bool = var_82_int == (int)4;
		if(var_122_bool != 0) {
			func_5028();
			goto Label_4892;
		}
		var_132_bool = var_82_int == (int)5;
		if(var_132_bool != 0) {
			func_5015();
			goto Label_4892;
		}
		var_142_bool = var_82_int == (int)6;
		if(var_142_bool != 0) {
			func_5002();
			goto Label_4892;
		}
		var_152_bool = var_82_int == (int)7;
		if(var_152_bool == 0) goto Label_4892;
		func_4989();
	}
Label_4892:
	return 2;
	
}


func_4588()
{
	CameraSwitchToNormal((bool)1);
	return 0;
}


func_4079()
{
	var_1279_float = 0; var_1280_float = 0;
	rand(var_1280_float, (int)8, (int)16);
	SetTimer((int)10, var_1280_float);
	return 2;
}


func_3312(var_0_bool, var_1142_int, var_1143_object)
{
	var_1145_object = Obj(); var_1146_bool = 0; var_1147_int = 0; var_1148_bool = 0; var_1149_object = Obj(); var_1150_bool = 0; var_1151_int = 0; var_1152_bool = 0;
	var_0_bool = var_1143_object;
	var_1153_bool = 0; var_1154_object = Obj(); var_1155_float = 0;
	var_1143_object = var_1154_object;
	func_4307(var_1153_bool, var_1154_object, (float)70.0);
	var_1156_bool = var_1153_bool == 0; //@nz
	if(var_1156_bool != 0) {
		var_1142_int = -2;
		return 8;
	}
	CreateDialog(var_1149_object);
	var_1157_int = 0;
	func_4758(var_1157_int);
	@@var_1149_object:SetNPCName(var_1157_int);
	var_1158_int = 0;
	func_4756(var_1158_int);
	@@var_1149_object:SetNPCDescription(var_1158_int);
	var_1159_string = "";
	func_4760(var_1159_string);
	@@var_1149_object:SetPhoto(var_1159_string);
	var_1160_string = "";
	func_4762(var_1160_string);
	@@var_1149_object:SetPhoto2(var_1160_string);
	var_1161_int = 0;
	func_5384(var_1161_int);
	@@var_1149_object:SetPlayerName(var_1161_int);
	IsOverrideActive(var_1150_bool);
	var_1162_bool = var_1150_bool;
	if(var_1162_bool != 0) {
		var_1142_int = -2;
		return 8;
	}
	DoDialog(var_1149_object);
	var_1163_bool = 0; var_1164_object = Obj();
	func_4674(Obj());
	var_1165_object = var_1164_object;
	func_4394(var_1163_bool, var_1164_object);
	var_1166_object = Obj(); var_1167_object = Obj();
	var_1143_object = var_1166_object;
	var_1149_object = var_1167_object;
	TaskCall(24);
	func_3393(var_1168_object, var_1169_object, var_1170_string, var_1171_bool, var_1166_object, var_1167_object);
	TaskReturn();
	@@var_1149_object:IsDialogEnd(var_1152_bool);
	
Label_3375:
	var_1212_bool = var_1152_bool == 0; //@nz
	if(var_1212_bool != 0) {
		sync();
		@@var_1149_object:IsDialogEnd(var_1152_bool);
		goto Label_3375;
	}
	var_1143_object = Obj();
	func_4376();
	StopDialog(var_1149_object);
	@@var_1149_object:GetReturnValue((int)-1);
	var_1151_int = var_1142_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4593(var_410_string)
{
	var_411_bool = 0; var_412_float = 0; var_413_float = 0; var_414_bool = 0; var_415_float = 0; var_416_float = 0;
	lshHasAnimation(var_414_bool, var_410_string);
	var_417_bool = var_414_bool;
	if(var_417_bool != 0) {
		lshGetAnimTimes(var_410_string, var_415_float, var_416_float);
		lshPlayAnimation(var_415_float, var_416_float, (bool)0);
	} else {
		var_420_int = "Can't find lsh animation : " + var_410_string;
		Trace(var_420_int);
	}
	return 6;
	
}


func_5106()
{
	var_93_object = Obj(); var_94_object = Obj();
	CreateDiaryEntry(var_94_object, (int)370, (int)1, (int)525727);
	var_98_bool = 0; var_99_object = Obj(); var_100_int = 0;
	var_94_object = var_99_object;
	func_5132(var_98_bool, var_99_object, (int)368);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2803(var_2_object, var_984_string)
{
	var_985_bool = 0;
	func_4764(var_985_bool);
	var_986_bool = var_985_bool == 0; //@nz
	if(var_986_bool != 0) {
		return 0;
	}
	var_987_bool = var_984_string == var_2_object;
	if(var_987_bool != 0) {
		return 0;
	}
	var_988_string = ""; var_989_bool = 0;
	var_984_string = var_988_string;
	var_991_bool = var_984_string == "";
	if(var_991_bool != 0) {
		var_989_bool = 0;
	} else {
		var_989_bool = 1;
	}
	func_4609(var_988_string, var_989_bool);
	var_2_object = var_984_string;
	return 0;
	
}


func_248(var_0_bool, var_671_int, var_672_object)
{
	var_674_object = Obj(); var_675_bool = 0; var_676_int = 0; var_677_bool = 0; var_678_object = Obj(); var_679_bool = 0; var_680_int = 0; var_681_bool = 0;
	var_0_bool = var_672_object;
	var_682_bool = 0; var_683_object = Obj(); var_684_float = 0;
	var_672_object = var_683_object;
	func_4307(var_682_bool, var_683_object, (float)70.0);
	var_685_bool = var_682_bool == 0; //@nz
	if(var_685_bool != 0) {
		var_671_int = -2;
		return 8;
	}
	CreateDialog(var_678_object);
	var_686_int = 0;
	func_4758(var_686_int);
	@@var_678_object:SetNPCName(var_686_int);
	var_687_int = 0;
	func_4756(var_687_int);
	@@var_678_object:SetNPCDescription(var_687_int);
	var_688_string = "";
	func_4760(var_688_string);
	@@var_678_object:SetPhoto(var_688_string);
	var_689_string = "";
	func_4762(var_689_string);
	@@var_678_object:SetPhoto2(var_689_string);
	var_690_int = 0;
	func_5384(var_690_int);
	@@var_678_object:SetPlayerName(var_690_int);
	IsOverrideActive(var_679_bool);
	var_691_bool = var_679_bool;
	if(var_691_bool != 0) {
		var_671_int = -2;
		return 8;
	}
	DoDialog(var_678_object);
	var_692_bool = 0; var_693_object = Obj();
	func_4674(Obj());
	var_694_object = var_693_object;
	func_4394(var_692_bool, var_693_object);
	var_695_object = Obj(); var_696_object = Obj();
	var_672_object = var_695_object;
	var_678_object = var_696_object;
	TaskCall(4);
	func_329(var_697_object, var_698_object, var_699_string, var_700_bool, var_695_object, var_696_object);
	TaskReturn();
	@@var_678_object:IsDialogEnd(var_681_bool);
	
Label_311:
	var_757_bool = var_681_bool == 0; //@nz
	if(var_757_bool != 0) {
		sync();
		@@var_678_object:IsDialogEnd(var_681_bool);
		goto Label_311;
	}
	var_672_object = Obj();
	func_4376();
	StopDialog(var_678_object);
	@@var_678_object:GetReturnValue((int)-1);
	var_680_int = var_671_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1785(var_0_bool, var_607_int, var_608_object)
{
	var_610_object = Obj(); var_611_bool = 0; var_612_int = 0; var_613_bool = 0; var_614_object = Obj(); var_615_bool = 0; var_616_int = 0; var_617_bool = 0;
	var_0_bool = var_608_object;
	var_618_bool = 0; var_619_object = Obj(); var_620_float = 0;
	var_608_object = var_619_object;
	func_4307(var_618_bool, var_619_object, (float)70.0);
	var_621_bool = var_618_bool == 0; //@nz
	if(var_621_bool != 0) {
		var_607_int = -2;
		return 8;
	}
	CreateDialog(var_614_object);
	var_622_int = 0;
	func_4758(var_622_int);
	@@var_614_object:SetNPCName(var_622_int);
	var_623_int = 0;
	func_4756(var_623_int);
	@@var_614_object:SetNPCDescription(var_623_int);
	var_624_string = "";
	func_4760(var_624_string);
	@@var_614_object:SetPhoto(var_624_string);
	var_625_string = "";
	func_4762(var_625_string);
	@@var_614_object:SetPhoto2(var_625_string);
	var_626_int = 0;
	func_5384(var_626_int);
	@@var_614_object:SetPlayerName(var_626_int);
	IsOverrideActive(var_615_bool);
	var_627_bool = var_615_bool;
	if(var_627_bool != 0) {
		var_607_int = -2;
		return 8;
	}
	DoDialog(var_614_object);
	var_628_bool = 0; var_629_object = Obj();
	func_4674(Obj());
	var_630_object = var_629_object;
	func_4394(var_628_bool, var_629_object);
	var_631_object = Obj(); var_632_object = Obj();
	var_608_object = var_631_object;
	var_614_object = var_632_object;
	TaskCall(10);
	func_1866(var_633_object, var_634_object, var_635_string, var_636_bool, var_631_object, var_632_object);
	TaskReturn();
	@@var_614_object:IsDialogEnd(var_617_bool);
	
Label_1848:
	var_664_bool = var_617_bool == 0; //@nz
	if(var_664_bool != 0) {
		sync();
		@@var_614_object:IsDialogEnd(var_617_bool);
		goto Label_1848;
	}
	var_608_object = Obj();
	func_4376();
	StopDialog(var_614_object);
	@@var_614_object:GetReturnValue((int)-1);
	var_616_int = var_607_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5119(var_102_object)
{
	var_103_object = Obj(); var_104_object = Obj();
	GetDiaryRoot(var_104_object);
	var_105_bool = var_104_object == 0; //@nz
	if(var_105_bool != 0) {
		Trace("Can't retrieve diary root");
		var_102_object = 0;
		return 2;
	}
	var_104_object = var_102_object;
	return 2;
}
EMIT "Stack[-1] = 0";


