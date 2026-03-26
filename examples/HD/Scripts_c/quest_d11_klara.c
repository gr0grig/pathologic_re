// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,IsLoaded/1,RemoveActor/1,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,GetGameTime/1,HasAnimation/3,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:Saveyouall|W:idle|W:Smile|W:Fear|W:Grin|W:Sly|W:cleanup|W:restore|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:d11q06KlaraRing|W:d11q06KlaraRing is given|W:d11q06KapellaRing|W:d11q06|W:ood11Klara2|W:ood11Klara3|W:ood11Klara1|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:ui/NPC_Klara.png|W:ui/NPC_Klara_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x35c
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xdc vars=int,int
// @TASK_2: vars=cvector,bool params=0
// @EVENT_26: op=0x360 vars=string
// @EVENT_6: op=0x374 vars=
// @EVENT_5: op=0x381 vars=
// @EVENT_7: op=0x3ca vars=int
// @EVENT_45: op=0x40c vars=bool
// @EVENT_0: op=0x418 vars=object
// @PE: 0x51,0xc6,0xdc,0x354,0x35c,0x381,0x3ca,0x3f0,0x40c,0x619,0x62b,0x646,0x64c,0x652,0x658,0x664,0x670,0x67c

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	if((int)1 != 0) {
		func_1456();
		var_12_bool = var_8_bool == (int)36147;
		if(var_12_bool != 0) {
			var_13_object = Obj(); var_14_object = Obj();
			var_13_object = var_1_object;
			var_14_object = var_0_object;
			func_1606();
		}
		var_18_bool = var_8_bool == (int)36151;
		if(var_18_bool != 0) {
			var_19_object = Obj(); var_20_object = Obj();
			var_19_object = var_1_object;
			var_20_object = var_0_object;
			func_1561(var_20_object);
			var_68_object = Obj(); var_69_object = Obj();
			var_68_object = var_1_object;
			var_69_object = var_0_object;
			func_1579();
		}
		var_92_bool = var_8_bool == (int)40618;
		if(var_92_bool != 0) {
			var_93_object = Obj(); var_94_object = Obj();
			var_93_object = var_1_object;
			var_94_object = var_0_object;
			func_1612();
		}
		var_98_bool = var_7_cvector == (int)15573;
		if(var_98_bool != 0) {
			var_99_bool = 0; var_100_object = Obj();
			var_100_object = var_1_object;
			func_1660(var_100_object);
			if(var_99_bool != 0) {
				var_105_object = Obj(); var_106_object = Obj();
				var_105_object = var_1_object;
				var_106_object = var_0_object;
				func_1618();
				var_109_string = "";
				func_198(var_8_bool, "Neutral");
				@@@var_0_object:SetMessage((int)514350);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)514351, (int)15575, (int)15574);
				@@@var_0_object:AddReply((int)538680, (int)15575, (int)40578);
				return 0;
			}
			var_133_string = "";
			func_198(var_8_bool, "Saveyouall");
			@@@var_0_object:SetMessage((int)514514);
			@@@var_0_object:ClearReplies();
			var_135_bool = 0;
			var_135_bool = 0;
			var_136_bool = 0; var_137_object = Obj();
			var_137_object = var_1_object;
			func_1624(var_137_object);
			if(var_136_bool != 0) {
				var_142_bool = 0; var_143_object = Obj();
				var_143_object = var_1_object;
				func_1636(var_143_object);
				if(var_142_bool != 0) {
					var_135_bool = 1;
				}
			}
			if(var_135_bool != 0) {
				@@@var_0_object:AddReply((int)534506, (int)40595, (int)36147);
			}
			var_151_bool = 0; var_152_object = Obj();
			var_152_object = var_1_object;
			func_1648(var_152_object);
			if(var_151_bool != 0) {
				@@@var_0_object:AddReply((int)538711, (int)40619, (int)40618);
			}
			@@@var_0_object:AddReply((int)514515, (int)-1, (int)15754);
			@@@var_0_object:AddReply((int)538691, (int)-1, (int)40594);
			return 0;
		}
		var_167_bool = var_7_cvector == (int)40619;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_198(var_8_bool, "Smile");
			@@@var_0_object:SetMessage((int)538712);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538714, (int)40622, (int)40621);
			@@@var_0_object:AddReply((int)538713, (int)-1, (int)40620);
			return 0;
		}
		var_177_bool = var_7_cvector == (int)40622;
		if(var_177_bool != 0) {
			var_178_string = "";
			func_198(var_8_bool, "Smile");
			@@@var_0_object:SetMessage((int)538715);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538716, (int)40624, (int)40623);
			return 0;
		}
		var_184_bool = var_7_cvector == (int)40624;
		if(var_184_bool != 0) {
			var_185_string = "";
			func_198(var_8_bool, "Smile");
			@@@var_0_object:SetMessage((int)538717);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538718, (int)-1, (int)40625);
			@@@var_0_object:AddReply((int)538719, (int)-1, (int)40626);
			return 0;
		}
		var_194_bool = var_7_cvector == (int)40595;
		if(var_194_bool != 0) {
			var_195_string = "";
			func_198(var_8_bool, "Saveyouall");
			@@@var_0_object:SetMessage((int)538692);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538693, (int)40616, (int)40596);
			@@@var_0_object:AddReply((int)538699, (int)40604, (int)40603);
			return 0;
		}
		var_204_bool = var_7_cvector == (int)40604;
		if(var_204_bool != 0) {
			var_205_string = "";
			func_198(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)538700);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538701, (int)40607, (int)40605);
			@@@var_0_object:AddReply((int)538702, (int)40609, (int)40606);
			return 0;
		}
		var_214_bool = var_7_cvector == (int)40609;
		if(var_214_bool != 0) {
			var_215_string = "";
			func_198(var_8_bool, "Fear");
			@@@var_0_object:SetMessage((int)538705);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538707, (int)40600, (int)40612);
			@@@var_0_object:AddReply((int)538708, (int)40600, (int)40613);
			return 0;
		}
		var_224_bool = var_7_cvector == (int)40607;
		if(var_224_bool != 0) {
			var_225_string = "";
			func_198(var_8_bool, "Grin");
			@@@var_0_object:SetMessage((int)538703);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538704, (int)-1, (int)40608);
			@@@var_0_object:AddReply((int)538706, (int)40600, (int)40610);
			return 0;
		}
		var_234_bool = var_7_cvector == (int)40616;
		if(var_234_bool != 0) {
			var_235_string = "";
			func_198(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538709);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538710, (int)40597, (int)40617);
			return 0;
		}
		var_241_bool = var_7_cvector == (int)40597;
		if(var_241_bool != 0) {
			var_242_string = "";
			func_198(var_8_bool, "Saveyouall");
			@@@var_0_object:SetMessage((int)538694);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538695, (int)40600, (int)40598);
			@@@var_0_object:AddReply((int)538696, (int)40600, (int)40599);
			return 0;
		}
		var_251_bool = var_7_cvector == (int)40600;
		if(var_251_bool != 0) {
			var_252_string = "";
			func_198(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538697);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538698, (int)36148, (int)40602);
			return 0;
		}
		var_258_bool = var_7_cvector == (int)36148;
		if(var_258_bool != 0) {
			var_259_string = "";
			func_198(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)534507);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534508, (int)36150, (int)36149);
			return 0;
		}
		var_265_bool = var_7_cvector == (int)36150;
		if(var_265_bool != 0) {
			var_266_string = "";
			func_198(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)534509);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534510, (int)-1, (int)36151);
			return 0;
		}
		var_272_bool = var_7_cvector == (int)15575;
		if(var_272_bool != 0) {
			var_273_string = "";
			func_198(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)514352);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514353, (int)15577, (int)15576);
			@@@var_0_object:AddReply((int)538679, (int)15579, (int)40577);
			return 0;
		}
		var_282_bool = var_7_cvector == (int)15577;
		if(var_282_bool != 0) {
			var_283_string = "";
			func_198(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)514354);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514355, (int)15579, (int)15578);
			@@@var_0_object:AddReply((int)538681, (int)15581, (int)40581);
			return 0;
		}
		var_292_bool = var_7_cvector == (int)15579;
		if(var_292_bool != 0) {
			var_293_string = "";
			func_198(var_8_bool, "Grin");
			@@@var_0_object:SetMessage((int)514356);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514357, (int)15581, (int)15580);
			return 0;
		}
		var_299_bool = var_7_cvector == (int)15581;
		if(var_299_bool != 0) {
			var_300_string = "";
			func_198(var_8_bool, "Grin");
			@@@var_0_object:SetMessage((int)514358);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514359, (int)15583, (int)15582);
			@@@var_0_object:AddReply((int)538682, (int)15587, (int)40583);
			return 0;
		}
		var_309_bool = var_7_cvector == (int)15583;
		if(var_309_bool != 0) {
			var_310_string = "";
			func_198(var_8_bool, "Sly");
			@@@var_0_object:SetMessage((int)514360);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514361, (int)15585, (int)15584);
			return 0;
		}
		var_316_bool = var_7_cvector == (int)15585;
		if(var_316_bool != 0) {
			var_317_string = "";
			func_198(var_8_bool, "Sly");
			@@@var_0_object:SetMessage((int)514362);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514363, (int)15587, (int)15586);
			return 0;
		}
		var_323_bool = var_7_cvector == (int)15587;
		if(var_323_bool != 0) {
			var_324_string = "";
			func_198(var_8_bool, "Sly");
			@@@var_0_object:SetMessage((int)514364);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514365, (int)15589, (int)15588);
			@@@var_0_object:AddReply((int)538683, (int)40586, (int)40585);
			@@@var_0_object:AddReply((int)539687, (int)41639, (int)41638);
			return 0;
		}
		var_336_bool = var_7_cvector == (int)41639;
		if(var_336_bool != 0) {
			var_337_string = "";
			func_198(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539688);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539689, (int)15589, (int)41640);
			return 0;
		}
		var_343_bool = var_7_cvector == (int)40586;
		if(var_343_bool != 0) {
			var_344_string = "";
			func_198(var_8_bool, "Sly");
			@@@var_0_object:SetMessage((int)538684);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538686, (int)40589, (int)40588);
			return 0;
		}
		var_350_bool = var_7_cvector == (int)40589;
		if(var_350_bool != 0) {
			var_351_string = "";
			func_198(var_8_bool, "Sly");
			@@@var_0_object:SetMessage((int)538687);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538688, (int)40591, (int)40590);
			return 0;
		}
		var_357_bool = var_7_cvector == (int)40591;
		if(var_357_bool != 0) {
			var_358_string = "";
			func_198(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)538689);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)538690, (int)15589, (int)40592);
			@@@var_0_object:AddReply((int)539690, (int)-1, (int)41642);
			return 0;
		}
		var_367_bool = var_7_cvector == (int)15589;
		if(var_367_bool != 0) {
			var_368_string = "";
			func_198(var_8_bool, "Saveyouall");
			@@@var_0_object:SetMessage((int)514366);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514367, (int)-1, (int)15590);
			@@@var_0_object:AddReply((int)538685, (int)-1, (int)40587);
			return 0;
		}
		var_3_string = true;
		var_376_bool = 0;
		func_1764(var_376_bool);
		if(var_376_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xdd";
	
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
			func_1463(var_13_object);
			RemoveActor(var_13_object);
		}
	} else {
		var_17_bool = var_7_string == "restore";
		if(var_17_bool == 0) goto Label_883;
		var_1_object = false;
	}
Label_883:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object;
	if(var_7_object != 0) {
		var_8_object = Obj();
		func_1463(var_8_object);
		RemoveActor(var_8_object);
		Hold();
	}
	func_1008();
	return 0;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_1023();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_9_bool = var_7_int == (int)10;
	if(var_9_bool != 0) {
		func_966();
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = 0;
		func_1180(var_12_bool);
		if(var_12_bool != 0) {
			var_15_bool = 0;
			func_935(var_15_bool);
			if(var_15_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_32_bool = 0;
			func_915(var_32_bool);
			if(var_32_bool != 0) {
				var_51_bool = 0; var_52_object = Obj();
				func_1463(Obj());
				var_53_object = var_52_object;
				func_1330(var_51_bool, var_52_object);
			}
		} else {
			func_930(var_7_int);
			func_957();
		}
	}
	return 0;
	
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool;
	if(var_8_bool != 0) {
		func_957();
	} else {
		var_14_string = "";
		func_1410("Neutral");
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
		func_1148();
		var_11_bool = 0; var_12_object = Obj();
		var_7_object = var_12_object;
		func_1171(var_11_bool, var_12_object);
		EventEnable(0);
		var_25_object = Obj();
		var_7_object = var_25_object;
		func_852(var_25_object);
		var_296_string = "";
		func_1410("Neutral");
		func_966();
		func_957();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_901(var_6_bool);
	return 0;
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0;
	var_0_object = var_27_object;
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0;
	var_27_object = var_38_object;
	func_1185(var_37_bool, var_38_object, (float)70.0);
	var_84_bool = var_37_bool == 0; //@nz
	if(var_84_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	CreateDialog(var_33_object);
	var_85_int = 0;
	func_1758(var_85_int);
	@@var_33_object:SetNPCName(var_85_int);
	var_86_int = 0;
	func_1756(var_86_int);
	@@var_33_object:SetNPCDescription(var_86_int);
	var_87_string = "";
	func_1760(var_87_string);
	@@var_33_object:SetPhoto(var_87_string);
	var_88_string = "";
	func_1762(var_88_string);
	@@var_33_object:SetPhoto2(var_88_string);
	var_89_int = 0;
	func_1739(var_89_int);
	@@var_33_object:SetPlayerName(var_89_int);
	IsOverrideActive(var_34_bool);
	var_97_bool = var_34_bool;
	if(var_97_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	DoDialog(var_33_object);
	var_98_bool = 0; var_99_object = Obj();
	func_1463(Obj());
	var_100_object = var_99_object;
	func_1272(var_98_bool, var_99_object);
	var_193_object = Obj(); var_194_object = Obj();
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	@@var_33_object:IsDialogEnd(var_36_bool);
	
Label_63:
	var_287_bool = var_36_bool == 0; //@nz
	if(var_287_bool != 0) {
		sync();
		@@var_33_object:IsDialogEnd(var_36_bool);
		goto Label_63;
	}
	var_27_object = Obj();
	func_1254();
	StopDialog(var_33_object);
	@@var_33_object:GetReturnValue((int)-1);
	var_35_int = var_26_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1153(var_22_float, var_23_object)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0);
	GetPosition(var_27_cvector);
	@@var_23_object:GetPosition(var_28_cvector);
	var_29_cvector = var_28_cvector - var_27_cvector;
	var_22_float = var_29_cvector | var_29_cvector;
	return 6;
}


func_1410(var_238_string)
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


func_1537(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = "";
	var_35_int = var_32_int;
	if(var_35_int != 0) {
		"idle" = "idle" + var_32_int;
	}
	var_34_string = var_31_string;
	return 2;
}


func_1272(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0;
	GetVariable("voice_common", var_105_int);
	var_108_int = var_105_int;
	if(var_108_int != 0) {
		var_109_bool = 0; var_110_object = Obj();
		var_99_object = var_110_object;
		func_1330(var_109_bool, var_110_object);
		var_139_bool = var_109_bool == 0; //@nz
		if(var_139_bool != 0) {
			var_140_bool = 0; var_141_object = Obj();
			var_99_object = var_141_object;
			func_1367(var_140_bool, var_141_object);
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
		func_1367(var_185_bool, var_186_object);
		var_187_bool = var_185_bool == 0; //@nz
		if(var_187_bool != 0) {
			var_188_bool = 0; var_189_object = Obj();
			var_99_object = var_189_object;
			func_1330(var_188_bool, var_189_object);
			var_190_bool = var_188_bool == 0; //@nz
			if(var_190_bool != 0) {
				var_98_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1328;
	
Label_1328:
	var_98_bool = 1;
	return 4;
	
}


func_901(var_0_object)
{
	var_7_bool = 0;
	func_1180(var_7_bool);
	var_10_bool = var_7_bool == 0; //@nz
	if(var_10_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_910:
	func_1077();
	goto Label_910;
}
EMIT "Return(); Pop(0)";


func_1544(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0;
	var_28_int = 0;
	
Label_1546:
	var_31_string = ""; var_32_int = 0;
	var_28_int = var_32_int;
	func_1537(var_31_string, var_32_int);
	HasAnimation(var_29_bool, "all", var_31_string);
	var_36_bool = var_29_bool == 0; //@nz
	if(var_36_bool != 0) {
	} else {
		var_28_int = var_28_int + (int)1;
		goto Label_1546;
	}
	var_28_int = var_25_int;
	return 4;
	
}


func_1161(var_15_bool, var_16_cvector)
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


func_1672()
{
	var_83_object = Obj(); var_84_object = Obj();
	CreateDiaryEntry(var_84_object, (int)690, (int)2, (int)534538);
	var_88_bool = 0; var_89_object = Obj(); var_90_int = 0;
	var_84_object = var_89_object;
	func_1711(var_88_bool, var_89_object, (int)686);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1426(var_216_string, var_217_bool)
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


func_1171(var_11_bool, var_12_object)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0);
	@@var_12_object:GetPosition(var_14_cvector);
	var_15_bool = 0; var_16_cvector = CVector(0,0,0);
	var_14_cvector = var_16_cvector;
	func_1161(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
	return 2;
}


func_915(var_32_bool)
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
	func_1171(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1685()
{
	var_23_object = Obj(); var_24_object = Obj();
	CreateDiaryEntry(var_24_object, (int)689, (int)2, (int)534537);
	var_28_bool = 0; var_29_object = Obj(); var_30_int = 0;
	var_24_object = var_29_object;
	func_1711(var_28_bool, var_29_object, (int)686);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1561(var_19_object)
{
	SetVariable("d11q06KlaraRing", (int)1);
	func_1685();
	Trace("d11q06KlaraRing is given");
	var_47_object = Obj(); var_48_string = ""; var_49_int = 0;
	var_19_object = var_47_object;
	func_1515(var_47_object, "d11q06KlaraRing", (int)1);
	return 0;
}


func_1180(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0;
	IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
	return 2;
}


func_1660(var_200_bool)
{
	var_202_int = 0; var_203_string = "";
	func_1479(var_202_int, "ood11Klara1");
	var_207_bool = var_202_int == (int)0;
	if(var_207_bool != 0) {
		var_200_bool = 1;
		return 0;
	}
	var_200_bool = 0;
	return 0;
}


func_1185(var_37_bool, var_38_object, var_39_float)
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
	func_1469(var_64_cvector, var_65_cvector);
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
	func_1764(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		HasAnimationTrack(var_57_bool, "head");
		var_82_bool = var_57_bool;
		if(var_82_bool == 0) goto Label_1248;
		LookAsyncCamera("head");
	}
Label_1248:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_37_bool = 1;
	return 18;
	
}


func_930(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_84_float, var_85_float);
	return 0;
}


func_1441(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0;
	var_136_bool = 0;
	func_1764(var_136_bool);
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


func_1698(var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj();
	GetDiaryRoot(var_39_object);
	var_40_bool = var_39_object == 0; //@nz
	if(var_40_bool != 0) {
		Trace("Can't retrieve diary root");
		var_37_object = 0;
		return 2;
	}
	var_39_object = var_37_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_935(var_15_bool)
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
	func_1153(var_22_float, var_23_object);
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


func_1579()
{
	var_70_bool = 0;
	var_70_bool = 0;
	var_71_int = 0; var_72_string = "";
	func_1479(var_71_int, "d11q06KapellaRing");
	var_76_bool = var_71_int != (int)0;
	if(var_76_bool != 0) {
		var_77_int = 0; var_78_string = "";
		func_1479(var_77_int, "d11q06KlaraRing");
		var_80_bool = var_77_int != (int)0;
		if(var_80_bool != 0) {
			var_70_bool = 1;
		}
	}
	if(var_70_bool != 0) {
		SetVariable("d11q06", (int)2);
		func_1672();
	}
	return 0;
}


func_1711(var_28_bool, var_29_object, var_30_int)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; var_34_object = Obj(); var_35_object = Obj(); var_36_int = 0;
	func_1698(Obj());
	var_37_object = var_34_object;
	@@var_34_object:Find(var_30_int, var_35_object);
	var_42_bool = var_35_object == 0; //@nz
	if(var_42_bool != 0) {
		var_44_int = "Can't find diary parent with id: " + var_30_int;
		Trace(var_44_int);
		var_28_bool = 0;
		return 6;
	}
	@@var_35_object:AddChild(var_29_object);
	SendWorldWndMessage((int)7);
	@@var_29_object:GetCategory(var_36_int);
	SetDiarySection(var_36_int);
	var_28_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1456()
{
	var_10_bool = 0;
	func_1764(var_10_bool);
	if(var_10_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1330(var_109_bool, var_110_object)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = "";
	var_116_string = "c";
	var_117_int = 0;
	
Label_1333:
	if((int)1 != 0) {
		var_123_int = var_117_int + (int)1;
		var_124_int = var_116_string + var_123_int;
		@@var_110_object:HasProperty(var_124_int, var_118_bool);
		var_125_bool = var_118_bool == 0; //@nz
		if(var_125_bool != 0) {
		} else {
			var_117_int = var_117_int + (int)1;
			goto Label_1333;
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
	func_1441(var_132_bool, var_133_string);
	var_132_bool = var_109_bool;
	return 10;
	
}


func_1077()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0;
	WaitForAnimEnd();
	var_23_bool = 0;
	func_1180(var_23_bool);
	var_24_bool = var_23_bool == 0; //@nz
	if(var_24_bool != 0) {
		return 12;
	}
	func_1544((int)0);
	var_25_int = var_17_int;
	var_18_int = 0;
	
Label_1091:
	var_38_bool = 0;
	var_38_bool = 0;
	var_40_bool = var_18_int < (int)5;
	if(var_40_bool != 0) {
		var_41_bool = 0;
		func_1180(var_41_bool);
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
				func_1537(var_52_string, var_53_int);
				PlayAnimation("all", var_52_string);
				WaitForAnimEnd(var_22_bool);
				var_54_bool = var_22_bool == 0; //@nz
				if(var_54_bool == 0) goto Label_1132;
				goto Label_1143;
		}
		Label_1132:
			var_45_bool = 0;
			func_1146(var_45_bool);
			var_46_bool = var_45_bool == 0; //@nz
			if(var_46_bool != 0) {
				goto Label_1143;
			}
			ResetAAS();
			var_18_int = var_18_int + (int)1;
			goto Label_1091;

		}
	}
Label_1143:
	ResetAAS();
	return 12;
	
}


func_1463(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj();
	self(var_102_object);
	var_102_object = var_100_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_957()
{
	var_298_float = 0; var_299_float = 0;
	rand(var_299_float, (int)8, (int)16);
	SetTimer((int)10, var_299_float);
	return 2;
}


func_1469(var_64_cvector, var_65_cvector)
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


func_198(var_2_object, var_212_string)
{
	var_213_bool = 0;
	func_1764(var_213_bool);
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
	func_1426(var_216_string, var_217_bool);
	var_2_object = var_212_string;
	return 0;
	
}


func_1606()
{
	SetVariable("ood11Klara2", (int)1);
	return 0;
}


func_966()
{
	KillTimer((int)10);
	return 0;
}


func_1479(var_202_int, var_203_string)
{
	var_204_int = 0; var_205_int = 0;
	GetVariable(var_203_string, var_205_int);
	var_205_int = var_202_int;
	return 2;
}


func_1739(var_89_int)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable("branch", var_91_int);
	var_94_bool = var_91_int == (int)0;
	if(var_94_bool != 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x6da";
	}
	var_96_bool = var_91_int == (int)1;
	if(var_96_bool != 0) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
	return 2;
}


func_1612()
{
	SetVariable("ood11Klara3", (int)1);
	return 0;
}


func_1484(var_63_int, var_64_int)
{
	var_65_object = Obj(); var_66_object = Obj();
	CreateIntVector(var_66_object);
	@@var_66_object:add(var_63_int);
	@@var_66_object:add(var_64_int);
	SendWorldWndMessage((int)3, var_66_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_200_bool = 0; var_201_object = Obj();
		var_201_object = var_1_object;
		func_1660(var_201_object);
		if(var_200_bool != 0) {
			var_208_object = Obj(); var_209_object = Obj();
			var_208_object = var_1_object;
			var_209_object = var_0_object;
			func_1618();
			var_212_string = "";
			func_198(var_194_object, "Neutral");
			@@@var_0_object:SetMessage((int)514350);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)514351, (int)15575, (int)15574);
			@@@var_0_object:AddReply((int)538680, (int)15575, (int)40578);
		} else {
				var_254_string = "";
				func_198(var_194_object, "Saveyouall");
				@@@var_0_object:SetMessage((int)514514);
				@@@var_0_object:ClearReplies();
				var_256_bool = 0;
				var_256_bool = 0;
				var_257_bool = 0; var_258_object = Obj();
				var_258_object = var_1_object;
				func_1624(var_258_object);
				if(var_257_bool != 0) {
					var_263_bool = 0; var_264_object = Obj();
					var_264_object = var_1_object;
					func_1636(var_264_object);
					if(var_263_bool != 0) {
						var_256_bool = 1;
					}
				}
				if(var_256_bool != 0) {
					@@@var_0_object:AddReply((int)534506, (int)40595, (int)36147);
				}
				var_272_bool = 0; var_273_object = Obj();
				var_273_object = var_1_object;
				func_1648(var_273_object);
				if(var_272_bool != 0) {
					@@@var_0_object:AddReply((int)538711, (int)40619, (int)40618);
				}
				@@@var_0_object:AddReply((int)514515, (int)-1, (int)15754);
				@@@var_0_object:AddReply((int)538691, (int)-1, (int)40594);
				goto Label_168;
		}
	}
Label_168:
	var_236_bool = 0;
	func_1764(var_236_bool);
	if(var_236_bool != 0) {

	Label_172:
		lshWaitForAnimEnd();
		var_237_string = var_3_string;
		if(var_237_string != 0) {
		} else {
			var_238_string = "";
			var_238_string = var_2_object;
			func_1410(var_238_string);
			goto Label_172;
	}
		PlayAnimation("all", "idle");

	Label_187:
		WaitForAnimEnd();
		var_251_string = var_3_string;
		if(var_251_string != 0) {
			goto Label_197;
		}
		PlayAnimation("all", "idle");
		goto Label_187;

	}
	goto Label_197;
	
Label_197:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_1618()
{
	SetVariable("ood11Klara1", (int)1);
	return 0;
}


func_852(var_25_object)
{
	var_26_int = 0; var_27_object = Obj();
	var_25_object = var_27_object;
	TaskCall(0);
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
	return 0;
}


func_1367(var_140_bool, var_141_object)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = "";
	var_153_int = 0;
	func_1528(var_153_int);
	var_159_int = "d" + var_153_int;
	var_147_string = var_159_int + "m";
	var_148_int = 0;
	
Label_1376:
	if((int)1 != 0) {
		var_163_int = var_148_int + (int)1;
		var_164_int = var_147_string + var_163_int;
		@@var_141_object:HasProperty(var_164_int, var_149_bool);
		var_165_bool = var_149_bool == 0; //@nz
		if(var_165_bool != 0) {
		} else {
			var_148_int = var_148_int + (int)1;
			goto Label_1376;
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
	func_1441(var_172_bool, var_173_string);
	var_172_bool = var_140_bool;
	return 10;
	
}


func_1624(var_257_bool)
{
	var_259_int = 0; var_260_string = "";
	func_1479(var_259_int, "d11q06");
	var_262_bool = var_259_int == (int)1;
	if(var_262_bool != 0) {
		var_257_bool = 1;
		return 0;
	}
	var_257_bool = 0;
	return 0;
}


func_1496(var_52_object, var_53_object, var_54_int)
{
	var_55_int = 0; var_56_int = 0; var_57_bool = 0; var_58_int = 0; var_59_int = 0; var_60_bool = 0;
	@@var_53_object:GetItemID(var_58_int);
	GetInvItemProperty(var_59_int, var_58_int, "Category");
	@@var_52_object:AddItem(var_60_bool, var_53_object, var_59_int, var_54_int);
	var_62_bool = var_60_bool == 0; //@nz
	if(var_62_bool != 0) {
		@@var_52_object:DropItems(var_53_object, var_54_int);
	} else {
		var_63_int = 0; var_64_int = 0;
		var_58_int = var_63_int;
		var_54_int = var_64_int;
		func_1484(var_63_int, var_64_int);
	}
	return 6;
	
}


func_1756(var_86_int)
{
	var_86_int = 515540;
	return 0;
}


func_1758(var_85_int)
{
	var_85_int = 502865;
	return 0;
}


func_1760(var_87_string)
{
	var_87_string = "ui/NPC_Klara.png";
	return 0;
}


func_1762(var_88_string)
{
	var_88_string = "ui/NPC_Klara_b.png";
	return 0;
}


func_1636(var_263_bool)
{
	var_265_int = 0; var_266_string = "";
	func_1479(var_265_int, "ood11Klara2");
	var_268_bool = var_265_int == (int)0;
	if(var_268_bool != 0) {
		var_263_bool = 1;
		return 0;
	}
	var_263_bool = 0;
	return 0;
}


func_1764(var_80_bool)
{
	var_80_bool = 1;
	return 0;
}


func_1254()
{
	var_289_bool = 0; var_290_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_292_bool = 0;
	func_1764(var_292_bool);
	if(var_292_bool != 0) {
	} else {
		HasAnimationTrack(var_290_bool, "head");
		var_294_bool = var_290_bool;
		if(var_294_bool == 0) goto Label_1271;
		UnlookAsync("head");
	}
Label_1271:
	return 2;
	
}


func_1515(var_47_object, var_48_string, var_49_int)
{
	var_50_object = Obj(); var_51_object = Obj();
	CreateInvItem(var_51_object);
	@@var_51_object:SetItemName(var_48_string);
	var_52_object = Obj(); var_53_object = Obj(); var_54_int = 0;
	var_47_object = var_52_object;
	var_51_object = var_53_object;
	var_49_int = var_54_int;
	func_1496(var_52_object, var_53_object, var_54_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1648(var_272_bool)
{
	var_274_int = 0; var_275_string = "";
	func_1479(var_274_int, "ood11Klara3");
	var_277_bool = var_274_int == (int)0;
	if(var_277_bool != 0) {
		var_272_bool = 1;
		return 0;
	}
	var_272_bool = 0;
	return 0;
}


func_1008()
{
	func_1148();
	func_966();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


func_1528(var_153_int)
{
	var_154_float = 0; var_155_float = 0;
	GetGameTime(var_155_float);
	var_157_int = 0;
	var_157_int = var_155_float / (int)24;
	var_153_int = (int)1 + var_157_int;
	return 2;
}


func_1146(var_45_bool)
{
	var_45_bool = 1;
	return 0;
}


func_1148()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1023()
{
	StopGroup0();
	func_966();
	var_8_string = "";
	func_1410("Neutral");
	func_957();
	return 0;
}


