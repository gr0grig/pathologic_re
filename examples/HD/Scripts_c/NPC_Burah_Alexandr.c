// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,GetGameTime/1,HasAnimation/3,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Strict|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:ui/NPC_Alexandr.png|W:ui/NPC_Alexandr_b.png|W:b2q01|W:b2q01AlexandrGotoOspina|W:pt_map_ospina|A:AddMark|W:oob2Alexandr1|W:oob2Alexandr2|W:key is given|W:b2q01_key|A:ShowMap|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:,1:bool:,2:bool:
// @RUN_OP: 0x507
// @RUN_TASK: 8
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc9 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x30f vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x3df vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x4dd vars=int,int
// @TASK_8: vars=cvector params=0
// @EVENT_7: op=0x553 vars=int
// @EVENT_6: op=0x579 vars=
// @EVENT_5: op=0x588 vars=
// @EVENT_45: op=0x595 vars=bool
// @EVENT_0: op=0x5a1 vars=object
// @PE: 0x51,0xb3,0xc9,0x2bf,0x2f9,0x30f,0x38a,0x3c9,0x3df,0x48d,0x4c7,0x4dd,0x553,0x579,0x595,0x78f,0x7ce,0x7d4,0x7da,0x7e5,0x7f5,0x801,0x80d,0x892

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	if((int)1 != 0) {
		func_1849();
		var_26_bool = var_22_cvector == (int)20555;
		if(var_26_bool != 0) {
			var_27_object = Obj(); var_28_object = Obj();
			var_27_object = var_1_object;
			var_28_object = var_0_object;
			func_1975();
			var_70_object = Obj(); var_71_object = Obj();
			var_70_object = var_1_object;
			var_71_object = var_0_object;
			func_2021(var_71_object);
			var_96_object = Obj(); var_97_object = Obj();
			var_96_object = var_1_object;
			var_97_object = var_0_object;
			func_2010(var_97_object);
		}
		var_121_bool = var_22_cvector == (int)20574;
		if(var_121_bool != 0) {
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_1975();
			var_124_object = Obj(); var_125_object = Obj();
			var_124_object = var_1_object;
			var_125_object = var_0_object;
			func_2021(var_125_object);
			var_126_object = Obj(); var_127_object = Obj();
			var_126_object = var_1_object;
			var_127_object = var_0_object;
			func_2010(var_127_object);
		}
		var_129_bool = var_22_cvector == (int)20537;
		if(var_129_bool != 0) {
			var_130_object = Obj(); var_131_object = Obj();
			var_130_object = var_1_object;
			var_131_object = var_0_object;
			func_1998();
		}
		var_135_bool = var_22_cvector == (int)20543;
		if(var_135_bool != 0) {
			var_136_object = Obj(); var_137_object = Obj();
			var_136_object = var_1_object;
			var_137_object = var_0_object;
			func_2004();
		}
		var_141_bool = var_21_bool == (int)19348;
		if(var_141_bool != 0) {
			var_142_bool = 0; var_143_object = Obj();
			var_143_object = var_1_object;
			func_2037(var_143_object);
			if(var_142_bool != 0) {
				var_150_string = "";
				func_179(var_22_cvector, "Neutral");
				@@@var_0_object:SetMessage((int)518239);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)518240, (int)20533, (int)19349);
				@@@var_0_object:AddReply((int)519398, (int)20561, (int)20560);
				return 0;
			}
			var_174_string = "";
			func_179(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)518241);
			@@@var_0_object:ClearReplies();
			var_176_bool = 0; var_177_object = Obj();
			var_177_object = var_1_object;
			func_2049(var_177_object);
			if(var_176_bool != 0) {
				@@@var_0_object:AddReply((int)519376, (int)20538, (int)20537);
			}
			var_185_bool = 0; var_186_object = Obj();
			var_186_object = var_1_object;
			func_2061(var_186_object);
			if(var_185_bool != 0) {
				@@@var_0_object:AddReply((int)519382, (int)20544, (int)20543);
			}
			@@@var_0_object:AddReply((int)518242, (int)-1, (int)19351);
			return 0;
		}
		var_198_bool = var_21_bool == (int)20544;
		if(var_198_bool != 0) {
			var_199_string = "";
			func_179(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519383);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519384, (int)20546, (int)20545);
			return 0;
		}
		var_205_bool = var_21_bool == (int)20546;
		if(var_205_bool != 0) {
			var_206_string = "";
			func_179(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519385);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519387, (int)20549, (int)20548);
			@@@var_0_object:AddReply((int)519386, (int)-1, (int)20547);
			return 0;
		}
		var_215_bool = var_21_bool == (int)20549;
		if(var_215_bool != 0) {
			var_216_string = "";
			func_179(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519388);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519389, (int)-1, (int)20550);
			@@@var_0_object:AddReply((int)519390, (int)-1, (int)20551);
			return 0;
		}
		var_225_bool = var_21_bool == (int)20538;
		if(var_225_bool != 0) {
			var_226_string = "";
			func_179(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519377);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519378, (int)20540, (int)20539);
			return 0;
		}
		var_232_bool = var_21_bool == (int)20540;
		if(var_232_bool != 0) {
			var_233_string = "";
			func_179(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519379);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519380, (int)-1, (int)20541);
			@@@var_0_object:AddReply((int)519381, (int)-1, (int)20542);
			return 0;
		}
		var_242_bool = var_21_bool == (int)20561;
		if(var_242_bool != 0) {
			var_243_string = "";
			func_179(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519399);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519400, (int)20563, (int)20562);
			return 0;
		}
		var_249_bool = var_21_bool == (int)20563;
		if(var_249_bool != 0) {
			var_250_string = "";
			func_179(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519401);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519402, (int)20565, (int)20564);
			return 0;
		}
		var_256_bool = var_21_bool == (int)20565;
		if(var_256_bool != 0) {
			var_257_string = "";
			func_179(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519403);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519404, (int)20533, (int)20566);
			return 0;
		}
		var_263_bool = var_21_bool == (int)20533;
		if(var_263_bool != 0) {
			var_264_string = "";
			func_179(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519372);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519373, (int)20535, (int)20534);
			@@@var_0_object:AddReply((int)519395, (int)20557, (int)20556);
			return 0;
		}
		var_273_bool = var_21_bool == (int)20557;
		if(var_273_bool != 0) {
			var_274_string = "";
			func_179(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519396);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519397, (int)20552, (int)20558);
			return 0;
		}
		var_280_bool = var_21_bool == (int)20535;
		if(var_280_bool != 0) {
			var_281_string = "";
			func_179(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519374);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519375, (int)20552, (int)20536);
			@@@var_0_object:AddReply((int)519406, (int)20571, (int)20570);
			return 0;
		}
		var_290_bool = var_21_bool == (int)20571;
		if(var_290_bool != 0) {
			var_291_string = "";
			func_179(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519407);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519408, (int)20557, (int)20572);
			return 0;
		}
		var_297_bool = var_21_bool == (int)20552;
		if(var_297_bool != 0) {
			var_298_string = "";
			func_179(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)519391);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519392, (int)20554, (int)20553);
			@@@var_0_object:AddReply((int)519405, (int)20554, (int)20568);
			return 0;
		}
		var_307_bool = var_21_bool == (int)20554;
		if(var_307_bool != 0) {
			var_308_string = "";
			func_179(var_22_cvector, "Strict");
			@@@var_0_object:SetMessage((int)519393);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519394, (int)-1, (int)20555);
			@@@var_0_object:AddReply((int)519409, (int)-1, (int)20574);
			return 0;
		}
		var_3_string = true;
		var_316_bool = 0;
		func_1973(var_316_bool);
		if(var_316_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xca";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	if((int)1 != 0) {
		func_1849();
		var_26_bool = var_21_bool == (int)21877;
		if(var_26_bool != 0) {
			var_27_string = "";
			func_761(var_22_cvector, "Strict");
			@@@var_0_object:SetMessage((int)520670);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)520671, (int)-1, (int)21878);
			@@@var_0_object:AddReply((int)527796, (int)-1, (int)29129);
			return 0;
		}
		var_3_string = true;
		var_51_bool = 0;
		func_1973(var_51_bool);
		if(var_51_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x310";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	if((int)1 != 0) {
		func_1849();
		var_26_bool = var_21_bool == (int)36971;
		if(var_26_bool != 0) {
			var_27_string = "";
			func_969(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535294);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535295, (int)36973, (int)36972);
			@@@var_0_object:AddReply((int)535302, (int)-1, (int)36980);
			@@@var_0_object:AddReply((int)535303, (int)-1, (int)36981);
			return 0;
		}
		var_55_bool = var_21_bool == (int)36973;
		if(var_55_bool != 0) {
			var_56_string = "";
			func_969(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535296);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535297, (int)36975, (int)36974);
			@@@var_0_object:AddReply((int)535301, (int)36975, (int)36978);
			return 0;
		}
		var_65_bool = var_21_bool == (int)36975;
		if(var_65_bool != 0) {
			var_66_string = "";
			func_969(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)535298);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535299, (int)-1, (int)36976);
			@@@var_0_object:AddReply((int)535300, (int)-1, (int)36977);
			return 0;
		}
		var_3_string = true;
		var_74_bool = 0;
		func_1973(var_74_bool);
		if(var_74_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x3e0";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_cvector)
{
	if((int)1 != 0) {
		func_1849();
		var_26_bool = var_21_int == (int)42563;
		if(var_26_bool != 0) {
			var_27_string = "";
			func_1223(var_22_cvector, "Neutral");
			@@@var_0_object:SetMessage((int)540554);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540555, (int)-1, (int)42564);
			@@@var_0_object:AddReply((int)540794, (int)-1, (int)42843);
			return 0;
		}
		var_3_string = true;
		var_51_bool = 0;
		func_1973(var_51_bool);
		if(var_51_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x4de";
	
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_int)
{
	var_23_bool = var_21_int == (int)10;
	if(var_23_bool != 0) {
		func_1359();
		var_25_bool = 0;
		var_25_bool = 0;
		var_26_bool = 0;
		func_1573(var_26_bool);
		if(var_26_bool != 0) {
			var_29_bool = 0;
			func_1328(var_29_bool);
			if(var_29_bool != 0) {
				var_25_bool = 1;
			}
		}
		if(var_25_bool != 0) {
			var_46_bool = 0;
			func_1308(var_46_bool);
			if(var_46_bool != 0) {
				var_65_bool = 0; var_66_object = Obj();
				func_1856(Obj());
				var_67_object = var_66_object;
				func_1723(var_65_bool, var_66_object);
			}
		} else {
			func_1323(var_21_int);
			func_1350();
		}
	}
	return 0;
	
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	func_1541();
	func_1359();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


task_8_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	StopGroup0();
	func_1359();
	var_22_string = "";
	func_1803("Neutral");
	func_1350();
	return 0;
}


task_8_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_bool)
{
	var_22_bool = var_21_bool;
	if(var_22_bool != 0) {
		func_1350();
	} else {
		var_28_string = "";
		func_1803("Neutral");
	}
	return 0;
	
}


task_8_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0;
	IsOverrideActive(var_23_bool);
	var_24_bool = var_23_bool == 0; //@nz
	if(var_24_bool != 0) {
		EventDisable(0);
		func_1541();
		var_25_bool = 0; var_26_object = Obj();
		var_21_object = var_26_object;
		func_1564(var_25_bool, var_26_object);
		EventEnable(0);
		var_39_object = Obj();
		var_21_object = var_39_object;
		func_2194(var_39_object);
		var_479_string = "";
		func_1803("Neutral");
		func_1359();
		func_1350();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	var_21_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	func_1294(var_20_cvector);
	return 0;
}


func_0(var_0_object, var_271_int, var_272_object)
{
	var_274_object = Obj(); var_275_bool = 0; var_276_int = 0; var_277_bool = 0; var_278_object = Obj(); var_279_bool = 0; var_280_int = 0; var_281_bool = 0;
	var_0_object = var_272_object;
	var_282_bool = 0; var_283_object = Obj(); var_284_float = 0;
	var_272_object = var_283_object;
	func_1578(var_282_bool, var_283_object, (float)70.0);
	var_285_bool = var_282_bool == 0; //@nz
	if(var_285_bool != 0) {
		var_271_int = -2;
		return 8;
	}
	CreateDialog(var_278_object);
	var_286_int = 0;
	func_1967(var_286_int);
	@@var_278_object:SetNPCName(var_286_int);
	var_287_int = 0;
	func_1965(var_287_int);
	@@var_278_object:SetNPCDescription(var_287_int);
	var_288_string = "";
	func_1969(var_288_string);
	@@var_278_object:SetPhoto(var_288_string);
	var_289_string = "";
	func_1971(var_289_string);
	@@var_278_object:SetPhoto2(var_289_string);
	var_290_int = 0;
	func_2177(var_290_int);
	@@var_278_object:SetPlayerName(var_290_int);
	IsOverrideActive(var_279_bool);
	var_291_bool = var_279_bool;
	if(var_291_bool != 0) {
		var_271_int = -2;
		return 8;
	}
	DoDialog(var_278_object);
	var_292_bool = 0; var_293_object = Obj();
	func_1856(Obj());
	var_294_object = var_293_object;
	func_1665(var_292_bool, var_293_object);
	var_295_object = Obj(); var_296_object = Obj();
	var_272_object = var_295_object;
	var_278_object = var_296_object;
	TaskCall(1);
	func_81(var_297_object, var_298_object, var_299_string, var_300_bool, var_295_object, var_296_object);
	TaskReturn();
	@@var_278_object:IsDialogEnd(var_281_bool);
	
Label_63:
	var_356_bool = var_281_bool == 0; //@nz
	if(var_356_bool != 0) {
		sync();
		@@var_278_object:IsDialogEnd(var_281_bool);
		goto Label_63;
	}
	var_272_object = Obj();
	func_1647();
	StopDialog(var_278_object);
	@@var_278_object:GetReturnValue((int)-1);
	var_280_int = var_271_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_2049(var_335_bool)
{
	var_337_int = 0; var_338_string = "";
	func_1872(var_337_int, "oob2Alexandr1");
	var_340_bool = var_337_int == (int)0;
	if(var_340_bool != 0) {
		var_335_bool = 1;
		return 0;
	}
	var_335_bool = 0;
	return 0;
}


func_1539(var_60_bool)
{
	var_60_bool = 1;
	return 0;
}


func_1541()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1546(var_36_float, var_37_object)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	GetPosition(var_41_cvector);
	@@var_37_object:GetPosition(var_42_cvector);
	var_43_cvector = var_42_cvector - var_41_cvector;
	var_36_float = var_43_cvector | var_43_cvector;
	return 6;
}


func_1803(var_242_string)
{
	var_243_bool = 0; var_244_float = 0; var_245_float = 0; var_246_bool = 0; var_247_float = 0; var_248_float = 0;
	lshHasAnimation(var_246_bool, var_242_string);
	var_249_bool = var_246_bool;
	if(var_249_bool != 0) {
		lshGetAnimTimes(var_242_string, var_247_float, var_248_float);
		lshPlayAnimation(var_247_float, var_248_float, (bool)0);
	} else {
		var_252_int = "Can't find lsh animation : " + var_242_string;
		Trace(var_252_int);
	}
	return 6;
	
}


func_2061(var_344_bool)
{
	var_346_int = 0; var_347_string = "";
	func_1872(var_346_int, "oob2Alexandr2");
	var_349_bool = var_346_int == (int)0;
	if(var_349_bool != 0) {
		var_344_bool = 1;
		return 0;
	}
	var_344_bool = 0;
	return 0;
}


func_1294(var_0_object)
{
	var_22_bool = 0;
	func_1573(var_22_bool);
	var_25_bool = var_22_bool == 0; //@nz
	if(var_25_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_1303:
	func_1470();
	goto Label_1303;
}
EMIT "Return(); Pop(0)";


func_1554(var_29_bool, var_30_cvector)
{
	var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0;
	GetPosition(var_34_cvector);
	var_35_cvector = var_30_cvector - var_34_cvector;
	var_37_float = GetByIndex(var_35_cvector, 0);
	var_38_float = GetByIndex(var_35_cvector, 2);
	Rotate(var_37_float, var_38_float, var_36_bool);
	var_36_bool = var_29_bool;
	return 6;
}


func_2073()
{
	var_47_object = Obj(); var_48_object = Obj();
	CreateDiaryEntry(var_48_object, (int)247, (int)1, (int)520468);
	var_52_bool = 0; var_53_object = Obj(); var_54_int = 0;
	var_48_object = var_53_object;
	func_2099(var_52_bool, var_53_object, (int)245);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1819(var_220_string, var_221_bool)
{
	var_224_bool = 0; var_225_float = 0; var_226_float = 0; var_227_bool = 0; var_228_float = 0; var_229_float = 0;
	lshHasAnimation(var_227_bool, var_220_string);
	var_230_bool = var_227_bool;
	if(var_230_bool != 0) {
		lshGetAnimTimes(var_220_string, var_228_float, var_229_float);
		lshPlayAnimation(var_228_float, var_229_float, var_221_bool);
	} else {
		var_232_int = "Can't find lsh animation : " + var_220_string;
		Trace(var_232_int);
	}
	return 6;
	
}


func_1564(var_25_bool, var_26_object)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0);
	@@var_26_object:GetPosition(var_28_cvector);
	var_29_bool = 0; var_30_cvector = CVector(0,0,0);
	var_28_cvector = var_30_cvector;
	func_1554(var_29_bool, var_30_cvector);
	var_29_bool = var_25_bool;
	return 2;
}


func_1308(var_46_bool)
{
	var_47_object = Obj(); var_48_object = Obj();
	FindActor(var_48_object, "player");
	var_50_bool = var_48_object == 0; //@nz
	if(var_50_bool != 0) {
		var_46_bool = 0;
		return 2;
	}
	var_51_bool = 0; var_52_object = Obj();
	var_48_object = var_52_object;
	func_1564(var_51_bool, var_52_object);
	var_51_bool = var_46_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1573(var_22_bool)
{
	var_23_bool = 0; var_24_bool = 0;
	IsLoaded(var_24_bool);
	var_24_bool = var_22_bool;
	return 2;
}


func_2086(var_61_object)
{
	var_62_object = Obj(); var_63_object = Obj();
	GetDiaryRoot(var_63_object);
	var_64_bool = var_63_object == 0; //@nz
	if(var_64_bool != 0) {
		Trace("Can't retrieve diary root");
		var_61_object = 0;
		return 2;
	}
	var_63_object = var_61_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1578(var_53_bool, var_54_object, var_55_float)
{
	var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_bool = 0;
	@@var_54_object:GetPosition(var_66_cvector);
	@@var_54_object:GetEyesHeight(var_65_float);
	var_74_float = GetByIndex(var_66_cvector, 1);
	var_74_float = var_74_float + var_65_float;
	SetByIndex(var_66_cvector, 1) = var_74_float;
	GetPosition(var_67_cvector);
	GetEyesHeight(var_65_float);
	var_75_float = GetByIndex(var_67_cvector, 1);
	var_75_float = var_75_float + var_65_float;
	SetByIndex(var_67_cvector, 1) = var_75_float;
	var_68_cvector = var_66_cvector - var_67_cvector;
	var_76_float = GetByIndex(var_68_cvector, 1);
	SetByIndex(var_68_cvector, 1) = (float)0;
	var_77_int = var_68_cvector | var_68_cvector;
	var_78_float = sqrt(var_77_int);
	var_68_cvector = var_68_cvector / var_78_float;
	var_69_cvector = -var_68_cvector;
	var_79_float = var_68_cvector * var_55_float;
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0);
	var_81_cvector = var_69_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1862(var_80_cvector, var_81_cvector);
	var_89_float = var_80_cvector * (int)25;
	var_90_int = var_79_float + var_89_float;
	var_70_cvector = var_90_int - CVector(0.0, 10.0, 0.0);
	var_71_cvector = var_67_cvector + var_70_cvector;
	IsOverrideActive(var_72_bool);
	var_92_bool = var_72_bool;
	if(var_92_bool != 0) {
		var_53_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_71_cvector, var_69_cvector, (bool)1);
	var_94_float = GetByIndex(var_70_cvector, 0);
	var_95_float = GetByIndex(var_70_cvector, 2);
	Rotate(var_94_float, var_95_float);
	var_96_bool = 0;
	func_1973(var_96_bool);
	if(var_96_bool != 0) {
	} else {
		HasAnimationTrack(var_73_bool, "head");
		var_98_bool = var_73_bool;
		if(var_98_bool == 0) goto Label_1641;
		LookAsyncCamera("head");
	}
Label_1641:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_53_bool = 1;
	return 18;
	
}


func_1323(var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0);
	var_99_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_98_float, var_99_float);
	return 0;
}


func_1834(var_148_bool, var_149_string)
{
	var_150_bool = 0; var_151_bool = 0;
	var_152_bool = 0;
	func_1973(var_152_bool);
	if(var_152_bool != 0) {
		lshHasSpeech(var_151_bool, var_149_string);
		var_153_bool = var_151_bool;
		if(var_153_bool != 0) {
			lshPlaySpeech(var_149_string);
			var_148_bool = 1;
			return 2;
		}
	}
	var_148_bool = 0;
	return 2;
}


func_1328(var_29_bool)
{
	var_30_object = Obj(); var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0;
	FindActor(var_32_object, "player");
	var_35_bool = var_32_object == 0; //@nz
	if(var_35_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	var_36_float = 0; var_37_object = Obj();
	var_32_object = var_37_object;
	func_1546(var_36_float, var_37_object);
	var_45_bool = var_36_float > (float)90000.0;
	if(var_45_bool != 0) {
		var_29_bool = 0;
		return 4;
	}
	CanSee(var_33_bool, var_32_object);
	var_33_bool = var_29_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_2099(var_52_bool, var_53_object, var_54_int)
{
	var_55_object = Obj(); var_56_object = Obj(); var_57_int = 0; var_58_object = Obj(); var_59_object = Obj(); var_60_int = 0;
	func_2086(Obj());
	var_61_object = var_58_object;
	@@var_58_object:Find(var_54_int, var_59_object);
	var_66_bool = var_59_object == 0; //@nz
	if(var_66_bool != 0) {
		var_68_int = "Can't find diary parent with id: " + var_54_int;
		Trace(var_68_int);
		var_52_bool = 0;
		return 6;
	}
	@@var_59_object:AddChild(var_53_object);
	SendWorldWndMessage((int)7);
	@@var_53_object:GetCategory(var_60_int);
	SetDiarySection(var_60_int);
	var_52_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1849()
{
	var_24_bool = 0;
	func_1973(var_24_bool);
	if(var_24_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_825(var_0_object, var_363_int, var_364_object)
{
	var_366_object = Obj(); var_367_bool = 0; var_368_int = 0; var_369_bool = 0; var_370_object = Obj(); var_371_bool = 0; var_372_int = 0; var_373_bool = 0;
	var_0_object = var_364_object;
	var_374_bool = 0; var_375_object = Obj(); var_376_float = 0;
	var_364_object = var_375_object;
	func_1578(var_374_bool, var_375_object, (float)70.0);
	var_377_bool = var_374_bool == 0; //@nz
	if(var_377_bool != 0) {
		var_363_int = -2;
		return 8;
	}
	CreateDialog(var_370_object);
	var_378_int = 0;
	func_1967(var_378_int);
	@@var_370_object:SetNPCName(var_378_int);
	var_379_int = 0;
	func_1965(var_379_int);
	@@var_370_object:SetNPCDescription(var_379_int);
	var_380_string = "";
	func_1969(var_380_string);
	@@var_370_object:SetPhoto(var_380_string);
	var_381_string = "";
	func_1971(var_381_string);
	@@var_370_object:SetPhoto2(var_381_string);
	var_382_int = 0;
	func_2177(var_382_int);
	@@var_370_object:SetPlayerName(var_382_int);
	IsOverrideActive(var_371_bool);
	var_383_bool = var_371_bool;
	if(var_383_bool != 0) {
		var_363_int = -2;
		return 8;
	}
	DoDialog(var_370_object);
	var_384_bool = 0; var_385_object = Obj();
	func_1856(Obj());
	var_386_object = var_385_object;
	func_1665(var_384_bool, var_385_object);
	var_387_object = Obj(); var_388_object = Obj();
	var_364_object = var_387_object;
	var_370_object = var_388_object;
	TaskCall(5);
	func_906(var_389_object, var_390_object, var_391_string, var_392_bool, var_387_object, var_388_object);
	TaskReturn();
	@@var_370_object:IsDialogEnd(var_373_bool);
	
Label_888:
	var_420_bool = var_373_bool == 0; //@nz
	if(var_420_bool != 0) {
		sync();
		@@var_370_object:IsDialogEnd(var_373_bool);
		goto Label_888;
	}
	var_364_object = Obj();
	func_1647();
	StopDialog(var_370_object);
	@@var_370_object:GetReturnValue((int)-1);
	var_372_int = var_363_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1084(var_0_object, var_423_int, var_424_object)
{
	var_426_object = Obj(); var_427_bool = 0; var_428_int = 0; var_429_bool = 0; var_430_object = Obj(); var_431_bool = 0; var_432_int = 0; var_433_bool = 0;
	var_0_object = var_424_object;
	var_434_bool = 0; var_435_object = Obj(); var_436_float = 0;
	var_424_object = var_435_object;
	func_1578(var_434_bool, var_435_object, (float)70.0);
	var_437_bool = var_434_bool == 0; //@nz
	if(var_437_bool != 0) {
		var_423_int = -2;
		return 8;
	}
	CreateDialog(var_430_object);
	var_438_int = 0;
	func_1967(var_438_int);
	@@var_430_object:SetNPCName(var_438_int);
	var_439_int = 0;
	func_1965(var_439_int);
	@@var_430_object:SetNPCDescription(var_439_int);
	var_440_string = "";
	func_1969(var_440_string);
	@@var_430_object:SetPhoto(var_440_string);
	var_441_string = "";
	func_1971(var_441_string);
	@@var_430_object:SetPhoto2(var_441_string);
	var_442_int = 0;
	func_2177(var_442_int);
	@@var_430_object:SetPlayerName(var_442_int);
	IsOverrideActive(var_431_bool);
	var_443_bool = var_431_bool;
	if(var_443_bool != 0) {
		var_423_int = -2;
		return 8;
	}
	DoDialog(var_430_object);
	var_444_bool = 0; var_445_object = Obj();
	func_1856(Obj());
	var_446_object = var_445_object;
	func_1665(var_444_bool, var_445_object);
	var_447_object = Obj(); var_448_object = Obj();
	var_424_object = var_447_object;
	var_430_object = var_448_object;
	TaskCall(7);
	func_1165(var_449_object, var_450_object, var_451_string, var_452_bool, var_447_object, var_448_object);
	TaskReturn();
	@@var_430_object:IsDialogEnd(var_433_bool);
	
Label_1147:
	var_477_bool = var_433_bool == 0; //@nz
	if(var_477_bool != 0) {
		sync();
		@@var_430_object:IsDialogEnd(var_433_bool);
		goto Label_1147;
	}
	var_424_object = Obj();
	func_1647();
	StopDialog(var_430_object);
	@@var_430_object:GetReturnValue((int)-1);
	var_432_int = var_423_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1856(var_116_object)
{
	var_117_object = Obj(); var_118_object = Obj();
	self(var_118_object);
	var_118_object = var_116_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1350()
{
	var_481_float = 0; var_482_float = 0;
	rand(var_482_float, (int)8, (int)16);
	SetTimer((int)10, var_482_float);
	return 2;
}


func_1862(var_80_cvector, var_81_cvector)
{
	var_83_float = 0; var_84_float = 0;
	var_85_int = var_81_cvector | var_81_cvector;
	var_84_float = sqrt(var_85_int);
	var_86_float = 9.999999974752427e-07;
	var_87_bool = var_84_float < var_86_float;
	if(var_87_bool != 0) {
		var_80_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_80_cvector = var_81_cvector / var_84_float;
	return 2;
}


func_1359()
{
	KillTimer((int)10);
	return 0;
}


func_2127(var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj();
	GetMainOutdoorScene(var_36_object);
	var_38_bool = var_36_object == 0; //@ne
	if(var_38_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_37_object = 0;
		var_37_object = var_33_object;
		return 4;
	}
	@@var_36_object:GetMap(var_37_object);
	var_37_object = var_33_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_295_object, var_296_object)
{
	var_0_object = var_296_object;
	var_1_object = var_295_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_302_bool = 0; var_303_object = Obj();
		var_303_object = var_1_object;
		func_2037(var_303_object);
		if(var_302_bool != 0) {
			var_310_string = "";
			func_179(var_296_object, "Neutral");
			@@@var_0_object:SetMessage((int)518239);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)518240, (int)20533, (int)19349);
			@@@var_0_object:AddReply((int)519398, (int)20561, (int)20560);
		} else {
				var_333_string = "";
				func_179(var_296_object, "Neutral");
				@@@var_0_object:SetMessage((int)518241);
				@@@var_0_object:ClearReplies();
				var_335_bool = 0; var_336_object = Obj();
				var_336_object = var_1_object;
				func_2049(var_336_object);
				if(var_335_bool != 0) {
					@@@var_0_object:AddReply((int)519376, (int)20538, (int)20537);
				}
				var_344_bool = 0; var_345_object = Obj();
				var_345_object = var_1_object;
				func_2061(var_345_object);
				if(var_344_bool != 0) {
					@@@var_0_object:AddReply((int)519382, (int)20544, (int)20543);
				}
				@@@var_0_object:AddReply((int)518242, (int)-1, (int)19351);
				goto Label_149;
		}
	}
Label_149:
	var_325_bool = 0;
	func_1973(var_325_bool);
	if(var_325_bool != 0) {

	Label_153:
		lshWaitForAnimEnd();
		var_326_string = var_3_string;
		if(var_326_string != 0) {
		} else {
			var_327_string = "";
			var_327_string = var_2_object;
			func_1803(var_327_string);
			goto Label_153;
	}
		PlayAnimation("all", "idle");

	Label_168:
		WaitForAnimEnd();
		var_330_string = var_3_string;
		if(var_330_string != 0) {
			goto Label_178;
		}
		PlayAnimation("all", "idle");
		goto Label_168;

	}
	goto Label_178;
	
Label_178:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_1872(var_304_int, var_305_string)
{
	var_306_int = 0; var_307_int = 0;
	GetVariable(var_305_string, var_307_int);
	var_307_int = var_304_int;
	return 2;
}


func_1877(var_115_int, var_116_int)
{
	var_117_object = Obj(); var_118_object = Obj();
	CreateIntVector(var_118_object);
	@@var_118_object:add(var_115_int);
	@@var_118_object:add(var_116_int);
	SendWorldWndMessage((int)3, var_118_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2144(var_72_object, var_73_string, var_74_float)
{
	var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_object = Obj(); var_79_bool = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_object = Obj(); var_83_bool = 0;
	GetMainOutdoorScene(var_82_object);
	var_84_bool = var_82_object == 0; //@ne
	if(var_84_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_82_object:GetLocator(var_73_string, var_83_bool, var_80_cvector, var_81_cvector);
	var_86_bool = var_83_bool == 0; //@nz
	if(var_86_bool != 0) {
		var_88_int = "Warning: outdoor scene locator " + var_73_string;
		var_90_int = var_88_int + " doesnt exist";
		Trace(var_90_int);
	}
	@@var_82_object:GetMap(var_72_object);
	var_91_bool = var_72_object == 0; //@ne
	if(var_91_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_93_float = GetByIndex(var_80_cvector, 0);
	var_94_float = GetByIndex(var_80_cvector, 2);
	@@var_72_object:SetMapParams(var_93_float, var_94_float, var_74_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_1889(var_104_object, var_105_object, var_106_int)
{
	var_107_int = 0; var_108_int = 0; var_109_bool = 0; var_110_int = 0; var_111_int = 0; var_112_bool = 0;
	@@var_105_object:GetItemID(var_110_int);
	GetInvItemProperty(var_111_int, var_110_int, "Category");
	@@var_104_object:AddItem(var_112_bool, var_105_object, var_111_int, var_106_int);
	var_114_bool = var_112_bool == 0; //@nz
	if(var_114_bool != 0) {
		@@var_104_object:DropItems(var_105_object, var_106_int);
	} else {
		var_115_int = 0; var_116_int = 0;
		var_110_int = var_115_int;
		var_106_int = var_116_int;
		func_1877(var_115_int, var_116_int);
	}
	return 6;
	
}


func_622(var_0_object, var_42_int, var_43_object)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0;
	var_0_object = var_43_object;
	var_53_bool = 0; var_54_object = Obj(); var_55_float = 0;
	var_43_object = var_54_object;
	func_1578(var_53_bool, var_54_object, (float)70.0);
	var_100_bool = var_53_bool == 0; //@nz
	if(var_100_bool != 0) {
		var_42_int = -2;
		return 8;
	}
	CreateDialog(var_49_object);
	var_101_int = 0;
	func_1967(var_101_int);
	@@var_49_object:SetNPCName(var_101_int);
	var_102_int = 0;
	func_1965(var_102_int);
	@@var_49_object:SetNPCDescription(var_102_int);
	var_103_string = "";
	func_1969(var_103_string);
	@@var_49_object:SetPhoto(var_103_string);
	var_104_string = "";
	func_1971(var_104_string);
	@@var_49_object:SetPhoto2(var_104_string);
	var_105_int = 0;
	func_2177(var_105_int);
	@@var_49_object:SetPlayerName(var_105_int);
	IsOverrideActive(var_50_bool);
	var_113_bool = var_50_bool;
	if(var_113_bool != 0) {
		var_42_int = -2;
		return 8;
	}
	DoDialog(var_49_object);
	var_114_bool = 0; var_115_object = Obj();
	func_1856(Obj());
	var_116_object = var_115_object;
	func_1665(var_114_bool, var_115_object);
	var_209_object = Obj(); var_210_object = Obj();
	var_43_object = var_209_object;
	var_49_object = var_210_object;
	TaskCall(3);
	func_703(var_211_object, var_212_object, var_213_string, var_214_bool, var_209_object, var_210_object);
	TaskReturn();
	@@var_49_object:IsDialogEnd(var_52_bool);
	
Label_685:
	var_258_bool = var_52_bool == 0; //@nz
	if(var_258_bool != 0) {
		sync();
		@@var_49_object:IsDialogEnd(var_52_bool);
		goto Label_685;
	}
	var_43_object = Obj();
	func_1647();
	StopDialog(var_49_object);
	@@var_49_object:GetReturnValue((int)-1);
	var_51_int = var_42_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1647()
{
	var_260_bool = 0; var_261_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_263_bool = 0;
	func_1973(var_263_bool);
	if(var_263_bool != 0) {
	} else {
		HasAnimationTrack(var_261_bool, "head");
		var_265_bool = var_261_bool;
		if(var_265_bool == 0) goto Label_1664;
		UnlookAsync("head");
	}
Label_1664:
	return 2;
	
}


func_1908(var_99_object, var_100_string, var_101_int)
{
	var_102_object = Obj(); var_103_object = Obj();
	CreateInvItem(var_103_object);
	@@var_103_object:SetItemName(var_100_string);
	var_104_object = Obj(); var_105_object = Obj(); var_106_int = 0;
	var_99_object = var_104_object;
	var_103_object = var_105_object;
	var_101_int = var_106_int;
	func_1889(var_104_object, var_105_object, var_106_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2177(var_105_int)
{
	var_106_int = 0; var_107_int = 0;
	GetVariable("branch", var_107_int);
	var_110_bool = var_107_int == (int)0;
	if(var_110_bool != 0) {
		var_105_int = 1;
		return 2;
	EMIT "GOTO 0x890";
	}
	var_112_bool = var_107_int == (int)1;
	if(var_112_bool != 0) {
		var_105_int = 2;
		return 2;
	}
	var_105_int = 3;
	return 2;
}


func_1665(var_114_bool, var_115_object)
{
	var_119_int = 0; var_120_int = 0; var_121_int = 0; var_122_int = 0;
	GetVariable("voice_common", var_121_int);
	var_124_int = var_121_int;
	if(var_124_int != 0) {
		var_125_bool = 0; var_126_object = Obj();
		var_115_object = var_126_object;
		func_1723(var_125_bool, var_126_object);
		var_155_bool = var_125_bool == 0; //@nz
		if(var_155_bool != 0) {
			var_156_bool = 0; var_157_object = Obj();
			var_115_object = var_157_object;
			func_1760(var_156_bool, var_157_object);
			var_191_bool = var_156_bool == 0; //@nz
			if(var_191_bool != 0) {
				var_114_bool = 0;
				return 4;
			}
		}
		irand(var_122_int, (int)2);
		var_193_int = var_122_int;
		if(var_193_int != 0) {
			var_196_int = var_121_int + (int)1;
			var_198_int = var_196_int % (int)3;
			SetVariable("voice_common", var_198_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_201_bool = 0; var_202_object = Obj();
		var_115_object = var_202_object;
		func_1760(var_201_bool, var_202_object);
		var_203_bool = var_201_bool == 0; //@nz
		if(var_203_bool != 0) {
			var_204_bool = 0; var_205_object = Obj();
			var_115_object = var_205_object;
			func_1723(var_204_bool, var_205_object);
			var_206_bool = var_204_bool == 0; //@nz
			if(var_206_bool != 0) {
				var_114_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1721;
	
Label_1721:
	var_114_bool = 1;
	return 4;
	
}


func_1921(var_44_float)
{
	var_45_float = 0; var_46_float = 0;
	GetGameTime(var_46_float);
	var_46_float = var_44_float;
	return 2;
}


func_1926(var_169_int)
{
	var_170_float = 0; var_171_float = 0;
	GetGameTime(var_171_float);
	var_173_int = 0;
	var_173_int = var_171_float / (int)24;
	var_169_int = (int)1 + var_173_int;
	return 2;
}


func_906(var_0_object, var_1_object, var_2_object, var_3_string, var_387_object, var_388_object)
{
	var_0_object = var_388_object;
	var_1_object = var_387_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_394_string = "";
		func_969(var_388_object, "Neutral");
		@@@var_0_object:SetMessage((int)535294);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)535295, (int)36973, (int)36972);
		@@@var_0_object:AddReply((int)535302, (int)-1, (int)36980);
		@@@var_0_object:AddReply((int)535303, (int)-1, (int)36981);
		goto Label_939;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x38e";
	}
Label_939:
	var_412_bool = 0;
	func_1973(var_412_bool);
	if(var_412_bool != 0) {

	Label_943:
		lshWaitForAnimEnd();
		var_413_string = var_3_string;
		if(var_413_string != 0) {
		} else {
			var_414_string = "";
			var_414_string = var_2_object;
			func_1803(var_414_string);
			goto Label_943;
	}
		PlayAnimation("all", "idle");

	Label_958:
		WaitForAnimEnd();
		var_417_string = var_3_string;
		if(var_417_string != 0) {
			goto Label_968;
		}
		PlayAnimation("all", "idle");
		goto Label_958;
	}
	goto Label_968;
	
Label_968:
	return 0;
	
}


func_1165(var_0_object, var_1_object, var_2_object, var_3_string, var_447_object, var_448_object)
{
	var_0_object = var_448_object;
	var_1_object = var_447_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_454_string = "";
		func_1223(var_448_object, "Neutral");
		@@@var_0_object:SetMessage((int)540554);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)540555, (int)-1, (int)42564);
		@@@var_0_object:AddReply((int)540794, (int)-1, (int)42843);
		goto Label_1193;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x491";
	}
Label_1193:
	var_469_bool = 0;
	func_1973(var_469_bool);
	if(var_469_bool != 0) {

	Label_1197:
		lshWaitForAnimEnd();
		var_470_string = var_3_string;
		if(var_470_string != 0) {
		} else {
			var_471_string = "";
			var_471_string = var_2_object;
			func_1803(var_471_string);
			goto Label_1197;
	}
		PlayAnimation("all", "idle");

	Label_1212:
		WaitForAnimEnd();
		var_474_string = var_3_string;
		if(var_474_string != 0) {
			goto Label_1222;
		}
		PlayAnimation("all", "idle");
		goto Label_1212;
	}
	goto Label_1222;
	
Label_1222:
	return 0;
	
}


func_1935(var_268_bool, var_269_int)
{
	var_270_int = 0;
	func_1926(var_270_int);
	var_268_bool = var_270_int == var_269_int;
	return 0;
}


func_2194(var_39_object)
{
	var_40_bool = GlobalVars[1];
	var_41_bool = var_40_bool == 0; //@nz
	if(var_41_bool != 0) {
		var_42_int = 0; var_43_object = Obj();
		var_39_object = var_43_object;
		TaskCall(2);
		func_622(var_44_object, var_42_int, var_43_object);
		TaskReturn();
		var_267_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_268_bool = 0; var_269_int = 0;
	func_1935(var_268_bool, (int)2);
	if(var_268_bool != 0) {
		var_271_int = 0; var_272_object = Obj();
		var_39_object = var_272_object;
		TaskCall(0);
		func_0(var_273_object, var_271_int, var_272_object);
		TaskReturn();
		return 0;
	}
	var_358_bool = 0;
	var_358_bool = 0;
	var_359_bool = 0; var_360_int = 0;
	func_1935(var_359_bool, (int)12);
	if(var_359_bool != 0) {
		var_361_bool = GlobalVars[2];
		var_362_bool = var_361_bool == 0; //@nz
		if(var_362_bool != 0) {
			var_358_bool = 1;
		}
	}
	if(var_358_bool != 0) {
		var_363_int = 0; var_364_object = Obj();
		var_39_object = var_364_object;
		TaskCall(4);
		func_825(var_365_object, var_363_int, var_364_object);
		TaskReturn();
		var_422_bool = GlobalVars[2];
		GlobalVars[2] = (bool)1;
		return 0;
	}
	var_423_int = 0; var_424_object = Obj();
	var_39_object = var_424_object;
	TaskCall(6);
	func_1084(var_425_object, var_423_int, var_424_object);
	TaskReturn();
	return 0;
}


func_1941(var_46_string, var_47_int)
{
	var_48_string = ""; var_49_string = "";
	var_50_int = var_47_int;
	if(var_50_int != 0) {
		"idle" = "idle" + var_47_int;
	}
	var_49_string = var_46_string;
	return 2;
}


func_1948(var_40_int)
{
	var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0;
	var_43_int = 0;
	
Label_1950:
	var_46_string = ""; var_47_int = 0;
	var_43_int = var_47_int;
	func_1941(var_46_string, var_47_int);
	HasAnimation(var_44_bool, "all", var_46_string);
	var_51_bool = var_44_bool == 0; //@nz
	if(var_51_bool != 0) {
	} else {
		var_43_int = var_43_int + (int)1;
		goto Label_1950;
	}
	var_43_int = var_40_int;
	return 4;
	
}


func_1965(var_102_int)
{
	var_102_int = 515528;
	return 0;
}


func_1967(var_101_int)
{
	var_101_int = 502854;
	return 0;
}


func_1969(var_103_string)
{
	var_103_string = "ui/NPC_Alexandr.png";
	return 0;
}


func_1971(var_104_string)
{
	var_104_string = "ui/NPC_Alexandr_b.png";
	return 0;
}


func_179(var_2_object, var_310_string)
{
	var_311_bool = 0;
	func_1973(var_311_bool);
	var_312_bool = var_311_bool == 0; //@nz
	if(var_312_bool != 0) {
		return 0;
	}
	var_313_bool = var_310_string == var_2_object;
	if(var_313_bool != 0) {
		return 0;
	}
	var_314_string = ""; var_315_bool = 0;
	var_310_string = var_314_string;
	var_317_bool = var_310_string == "";
	if(var_317_bool != 0) {
		var_315_bool = 0;
	} else {
		var_315_bool = 1;
	}
	func_1819(var_314_string, var_315_bool);
	var_2_object = var_310_string;
	return 0;
	
}


func_1973(var_96_bool)
{
	var_96_bool = 1;
	return 0;
}


func_1975()
{
	var_29_object = Obj(); var_30_object = Obj();
	SetVariable("b2q01", (int)2);
	func_2127(Obj());
	var_33_object = var_30_object;
	var_44_float = 0;
	func_1921(var_44_float);
	@@var_30_object:AddMark("b2q01AlexandrGotoOspina", "pt_map_ospina", (int)1, (int)520459, var_44_float);
	func_2073();
	return 2;
}
EMIT "Stack[-1] = 0";


func_1723(var_125_bool, var_126_object)
{
	var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; var_132_string = ""; var_133_int = 0; var_134_bool = 0; var_135_int = 0; var_136_string = "";
	var_132_string = "c";
	var_133_int = 0;
	
Label_1726:
	if((int)1 != 0) {
		var_139_int = var_133_int + (int)1;
		var_140_int = var_132_string + var_139_int;
		@@var_126_object:HasProperty(var_140_int, var_134_bool);
		var_141_bool = var_134_bool == 0; //@nz
		if(var_141_bool != 0) {
		} else {
			var_133_int = var_133_int + (int)1;
			goto Label_1726;
		}
	}
	var_142_bool = var_133_int == 0; //@nz
	if(var_142_bool != 0) {
		var_125_bool = 0;
		return 10;
	}
	var_135_int = 0;
	var_144_bool = var_133_int > (int)1;
	if(var_144_bool != 0) {
		irand(var_135_int, var_133_int);
	}
	var_146_int = var_135_int + (int)1;
	var_147_int = var_132_string + var_146_int;
	@@var_126_object:GetProperty(var_147_int, var_136_string);
	var_148_bool = 0; var_149_string = "";
	var_136_string = var_149_string;
	func_1834(var_148_bool, var_149_string);
	var_148_bool = var_125_bool;
	return 10;
	
}


func_1470()
{
	var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_int = 0; var_37_bool = 0;
	WaitForAnimEnd();
	var_38_bool = 0;
	func_1573(var_38_bool);
	var_39_bool = var_38_bool == 0; //@nz
	if(var_39_bool != 0) {
		return 12;
	}
	func_1948((int)0);
	var_40_int = var_32_int;
	var_33_int = 0;
	
Label_1484:
	var_53_bool = 0;
	var_53_bool = 0;
	var_55_bool = var_33_int < (int)5;
	if(var_55_bool != 0) {
		var_56_bool = 0;
		func_1573(var_56_bool);
		if(var_56_bool != 0) {
			var_53_bool = 1;
		}
	}
	if(var_53_bool != 0) {
		var_57_bool = var_32_int == 0; //@nz
		if(var_57_bool != 0) {
			Sleep((int)3, var_34_bool);
			var_59_bool = var_34_bool == 0; //@nz
			if(var_59_bool != 0) {
			} else {
		} else {
				irand(var_35_int, var_32_int);
				irand(var_36_int, (int)5);
				var_65_bool = var_36_int != (int)0;
				if(var_65_bool != 0) {
					var_35_int = 0;
				}
				var_67_string = ""; var_68_int = 0;
				var_35_int = var_68_int;
				func_1941(var_67_string, var_68_int);
				PlayAnimation("all", var_67_string);
				WaitForAnimEnd(var_37_bool);
				var_69_bool = var_37_bool == 0; //@nz
				if(var_69_bool == 0) goto Label_1525;
				goto Label_1536;
		}
		Label_1525:
			var_60_bool = 0;
			func_1539(var_60_bool);
			var_61_bool = var_60_bool == 0; //@nz
			if(var_61_bool != 0) {
				goto Label_1536;
			}
			ResetAAS();
			var_33_int = var_33_int + (int)1;
			goto Label_1484;

		}
	}
Label_1536:
	ResetAAS();
	return 12;
	
}


func_703(var_0_object, var_1_object, var_2_object, var_3_string, var_209_object, var_210_object)
{
	var_0_object = var_210_object;
	var_1_object = var_209_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_216_string = "";
		func_761(var_210_object, "Strict");
		@@@var_0_object:SetMessage((int)520670);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)520671, (int)-1, (int)21878);
		@@@var_0_object:AddReply((int)527796, (int)-1, (int)29129);
		goto Label_731;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2c3";
	}
Label_731:
	var_240_bool = 0;
	func_1973(var_240_bool);
	if(var_240_bool != 0) {

	Label_735:
		lshWaitForAnimEnd();
		var_241_string = var_3_string;
		if(var_241_string != 0) {
		} else {
			var_242_string = "";
			var_242_string = var_2_object;
			func_1803(var_242_string);
			goto Label_735;
	}
		PlayAnimation("all", "idle");

	Label_750:
		WaitForAnimEnd();
		var_255_string = var_3_string;
		if(var_255_string != 0) {
			goto Label_760;
		}
		PlayAnimation("all", "idle");
		goto Label_750;
	}
	goto Label_760;
	
Label_760:
	return 0;
	
}


func_1223(var_2_object, var_454_string)
{
	var_455_bool = 0;
	func_1973(var_455_bool);
	var_456_bool = var_455_bool == 0; //@nz
	if(var_456_bool != 0) {
		return 0;
	}
	var_457_bool = var_454_string == var_2_object;
	if(var_457_bool != 0) {
		return 0;
	}
	var_458_string = ""; var_459_bool = 0;
	var_454_string = var_458_string;
	var_461_bool = var_454_string == "";
	if(var_461_bool != 0) {
		var_459_bool = 0;
	} else {
		var_459_bool = 1;
	}
	func_1819(var_458_string, var_459_bool);
	var_2_object = var_454_string;
	return 0;
	
}


func_969(var_2_object, var_394_string)
{
	var_395_bool = 0;
	func_1973(var_395_bool);
	var_396_bool = var_395_bool == 0; //@nz
	if(var_396_bool != 0) {
		return 0;
	}
	var_397_bool = var_394_string == var_2_object;
	if(var_397_bool != 0) {
		return 0;
	}
	var_398_string = ""; var_399_bool = 0;
	var_394_string = var_398_string;
	var_401_bool = var_394_string == "";
	if(var_401_bool != 0) {
		var_399_bool = 0;
	} else {
		var_399_bool = 1;
	}
	func_1819(var_398_string, var_399_bool);
	var_2_object = var_394_string;
	return 0;
	
}


func_1998()
{
	SetVariable("oob2Alexandr1", (int)1);
	return 0;
}


func_2004()
{
	SetVariable("oob2Alexandr2", (int)1);
	return 0;
}


func_2010(var_96_object)
{
	Trace("key is given");
	var_99_object = Obj(); var_100_string = ""; var_101_int = 0;
	var_96_object = var_99_object;
	func_1908(var_99_object, "b2q01_key", (int)1);
	return 0;
}


func_1760(var_156_bool, var_157_object)
{
	var_158_string = ""; var_159_int = 0; var_160_bool = 0; var_161_int = 0; var_162_string = ""; var_163_string = ""; var_164_int = 0; var_165_bool = 0; var_166_int = 0; var_167_string = "";
	var_169_int = 0;
	func_1926(var_169_int);
	var_175_int = "d" + var_169_int;
	var_163_string = var_175_int + "m";
	var_164_int = 0;
	
Label_1769:
	if((int)1 != 0) {
		var_179_int = var_164_int + (int)1;
		var_180_int = var_163_string + var_179_int;
		@@var_157_object:HasProperty(var_180_int, var_165_bool);
		var_181_bool = var_165_bool == 0; //@nz
		if(var_181_bool != 0) {
		} else {
			var_164_int = var_164_int + (int)1;
			goto Label_1769;
		}
	}
	var_182_bool = var_164_int == 0; //@nz
	if(var_182_bool != 0) {
		var_156_bool = 0;
		return 10;
	}
	var_166_int = 0;
	var_184_bool = var_164_int > (int)1;
	if(var_184_bool != 0) {
		irand(var_166_int, var_164_int);
	}
	var_186_int = var_166_int + (int)1;
	var_187_int = var_163_string + var_186_int;
	@@var_157_object:GetProperty(var_187_int, var_167_string);
	var_188_bool = 0; var_189_string = "";
	var_167_string = var_189_string;
	func_1834(var_188_bool, var_189_string);
	var_188_bool = var_156_bool;
	return 10;
	
}


func_2021(var_71_object)
{
	var_72_object = Obj(); var_73_string = ""; var_74_float = 0;
	func_2127(Obj());
	var_75_object = var_72_object;
	func_2144(var_72_object, "pt_map_ospina", (float)2);
	var_95_object = Obj();
	func_2127(var_95_object);
	@@var_71_object:ShowMap(var_95_object);
	return 0;
}


func_2037(var_302_bool)
{
	var_304_int = 0; var_305_string = "";
	func_1872(var_304_int, "b2q01");
	var_309_bool = var_304_int == (int)1;
	if(var_309_bool != 0) {
		var_302_bool = 1;
		return 0;
	}
	var_302_bool = 0;
	return 0;
}


func_761(var_2_object, var_216_string)
{
	var_217_bool = 0;
	func_1973(var_217_bool);
	var_218_bool = var_217_bool == 0; //@nz
	if(var_218_bool != 0) {
		return 0;
	}
	var_219_bool = var_216_string == var_2_object;
	if(var_219_bool != 0) {
		return 0;
	}
	var_220_string = ""; var_221_bool = 0;
	var_216_string = var_220_string;
	var_223_bool = var_216_string == "";
	if(var_223_bool != 0) {
		var_221_bool = 0;
	} else {
		var_221_bool = 1;
	}
	func_1819(var_220_string, var_221_bool);
	var_2_object = var_216_string;
	return 0;
	
}


