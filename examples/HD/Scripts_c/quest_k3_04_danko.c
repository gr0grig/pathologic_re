// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,IsLoaded/1,RemoveActor/1,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,GetInvItemProperty/3,CreateInvItem/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Menace|W:Untrust|W:Smile|W:cleanup|W:restore|W:player|A:GetPosition|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|W:m|W:Can't find lsh animation : |A:add|W:money|W:Money|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:k3q04|W:quest_k3_04|W:completed|W:k3q04Promise|W:k3q04SendBurahMail|W:money2000 is given|W:playsound|W:givemoney|W:k3q04SawDanko|W:fail|W:neomicin is given|W:neomicin|W:k3q04LopuhTalk|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:ui/NPC_Bakalavr.png|W:ui/NPC_Bakalavr_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x28b
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xd3 vars=int,int
// @TASK_2: vars=cvector,bool params=0
// @EVENT_26: op=0x28f vars=string
// @EVENT_6: op=0x2a3 vars=
// @EVENT_5: op=0x2b0 vars=
// @EVENT_7: op=0x2f9 vars=int
// @EVENT_45: op=0x33b vars=bool
// @EVENT_0: op=0x347 vars=object
// @PE: 0x51,0xbd,0xd3,0x283,0x28b,0x2b0,0x2f9,0x31f,0x33b,0x56e,0x577,0x594,0x59e,0x5a4,0x5aa,0x5b4,0x5bf,0x5cb,0x5d7

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	if((int)1 != 0) {
		func_1254();
		var_12_bool = var_8_bool == (int)26986;
		if(var_12_bool != 0) {
			var_13_object = Obj(); var_14_object = Obj();
			var_13_object = var_1_object;
			var_14_object = var_0_object;
			func_1409();
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_object;
			func_1428(var_51_object);
			var_71_object = Obj(); var_72_object = Obj();
			var_71_object = var_1_object;
			var_72_object = var_0_object;
			func_1460(var_72_object);
			var_92_object = Obj(); var_93_object = Obj();
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_1438();
		}
		var_97_bool = var_8_bool == (int)41106;
		if(var_97_bool != 0) {
			var_98_object = Obj(); var_99_object = Obj();
			var_98_object = var_1_object;
			var_99_object = var_0_object;
			func_1409();
			var_100_object = Obj(); var_101_object = Obj();
			var_100_object = var_1_object;
			var_101_object = var_0_object;
			func_1428(var_101_object);
			var_102_object = Obj(); var_103_object = Obj();
			var_102_object = var_1_object;
			var_103_object = var_0_object;
			func_1438();
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_1460(var_105_object);
		}
		var_107_bool = var_8_bool == (int)26985;
		if(var_107_bool != 0) {
			var_108_object = Obj(); var_109_object = Obj();
			var_108_object = var_1_object;
			var_109_object = var_0_object;
			func_1399();
		}
		var_122_bool = var_8_bool == (int)41103;
		if(var_122_bool != 0) {
			var_123_object = Obj(); var_124_object = Obj();
			var_123_object = var_1_object;
			var_124_object = var_0_object;
			func_1399();
		}
		var_126_bool = var_8_bool == (int)41102;
		if(var_126_bool != 0) {
			var_127_object = Obj(); var_128_object = Obj();
			var_127_object = var_1_object;
			var_128_object = var_0_object;
			func_1399();
		}
		var_130_bool = var_8_bool == (int)41122;
		if(var_130_bool != 0) {
			var_131_object = Obj(); var_132_object = Obj();
			var_131_object = var_1_object;
			var_132_object = var_0_object;
			func_1390();
		}
		var_144_bool = var_8_bool == (int)43720;
		if(var_144_bool != 0) {
			var_145_object = Obj(); var_146_object = Obj();
			var_145_object = var_1_object;
			var_146_object = var_0_object;
			func_1390();
		}
		var_148_bool = var_8_bool == (int)26973;
		if(var_148_bool != 0) {
			var_149_object = Obj(); var_150_object = Obj();
			var_149_object = var_1_object;
			var_150_object = var_0_object;
			func_1390();
		}
		var_152_bool = var_8_bool == (int)41121;
		if(var_152_bool != 0) {
			var_153_object = Obj(); var_154_object = Obj();
			var_153_object = var_1_object;
			var_154_object = var_0_object;
			func_1390();
		}
		var_156_bool = var_8_bool == (int)41110;
		if(var_156_bool != 0) {
			var_157_object = Obj(); var_158_object = Obj();
			var_157_object = var_1_object;
			var_158_object = var_0_object;
			func_1450();
		}
		var_171_bool = var_7_cvector == (int)26984;
		if(var_171_bool != 0) {
			var_172_bool = 0; var_173_object = Obj();
			var_173_object = var_1_object;
			func_1483(var_173_object);
			if(var_172_bool != 0) {
				var_180_string = "";
				func_189(var_8_bool, "Neutral");
				@@@var_0_object:SetMessage((int)525642);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)525640, (int)26983, (int)26982);
				@@@var_0_object:AddReply((int)539159, (int)41099, (int)41098);
				return 0;
			}
			var_204_bool = 0; var_205_object = Obj();
			var_205_object = var_1_object;
			func_1471(var_205_object);
			if(var_204_bool != 0) {
				var_210_object = Obj(); var_211_object = Obj();
				var_210_object = var_1_object;
				var_211_object = var_0_object;
				func_1444();
				var_214_string = "";
				func_189(var_8_bool, "Neutral");
				@@@var_0_object:SetMessage((int)525624);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)525625, (int)41108, (int)26967);
				return 0;
			}
			var_219_string = "";
			func_189(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)525632);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525633, (int)-1, (int)26975);
			@@@var_0_object:AddReply((int)539168, (int)-1, (int)41107);
			return 0;
		}
		var_228_bool = var_7_cvector == (int)41108;
		if(var_228_bool != 0) {
			var_229_string = "";
			func_189(var_8_bool, "Menace");
			@@@var_0_object:SetMessage((int)539169);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539170, (int)41111, (int)41109);
			@@@var_0_object:AddReply((int)539171, (int)-1, (int)41110);
			return 0;
		}
		var_238_bool = var_7_cvector == (int)41111;
		if(var_238_bool != 0) {
			var_239_string = "";
			func_189(var_8_bool, "Untrust");
			@@@var_0_object:SetMessage((int)539172);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539173, (int)26968, (int)41112);
			var_244_bool = 0; var_245_object = Obj();
			var_245_object = var_1_object;
			func_1495(var_245_object);
			if(var_244_bool != 0) {
				@@@var_0_object:AddReply((int)539174, (int)26968, (int)41113);
			}
			return 0;
		}
		var_254_bool = var_7_cvector == (int)26968;
		if(var_254_bool != 0) {
			var_255_string = "";
			func_189(var_8_bool, "Untrust");
			@@@var_0_object:SetMessage((int)525626);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539175, (int)41116, (int)41115);
			@@@var_0_object:AddReply((int)539177, (int)41118, (int)41117);
			return 0;
		}
		var_264_bool = var_7_cvector == (int)41118;
		if(var_264_bool != 0) {
			var_265_string = "";
			func_189(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539178);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539179, (int)41116, (int)41119);
			@@@var_0_object:AddReply((int)539180, (int)-1, (int)41121);
			return 0;
		}
		var_274_bool = var_7_cvector == (int)41116;
		if(var_274_bool != 0) {
			var_275_string = "";
			func_189(var_8_bool, "Menace");
			@@@var_0_object:SetMessage((int)539176);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525627, (int)26970, (int)26969);
			@@@var_0_object:AddReply((int)525631, (int)-1, (int)26973);
			return 0;
		}
		var_284_bool = var_7_cvector == (int)26970;
		if(var_284_bool != 0) {
			var_285_string = "";
			func_189(var_8_bool, "Menace");
			@@@var_0_object:SetMessage((int)525628);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539181, (int)-1, (int)41122);
			@@@var_0_object:AddReply((int)541553, (int)-1, (int)43720);
			return 0;
		}
		var_294_bool = var_7_cvector == (int)41099;
		if(var_294_bool != 0) {
			var_295_string = "";
			func_189(var_8_bool, "Untrust");
			@@@var_0_object:SetMessage((int)539160);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539161, (int)41101, (int)41100);
			@@@var_0_object:AddReply((int)539163, (int)-1, (int)41102);
			return 0;
		}
		var_304_bool = var_7_cvector == (int)41101;
		if(var_304_bool != 0) {
			var_305_string = "";
			func_189(var_8_bool, "Menace");
			@@@var_0_object:SetMessage((int)539162);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525643, (int)-1, (int)26985);
			@@@var_0_object:AddReply((int)539164, (int)-1, (int)41103);
			return 0;
		}
		var_314_bool = var_7_cvector == (int)26983;
		if(var_314_bool != 0) {
			var_315_string = "";
			func_189(var_8_bool, "Smile");
			@@@var_0_object:SetMessage((int)525641);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525644, (int)-1, (int)26986);
			@@@var_0_object:AddReply((int)539165, (int)41105, (int)41104);
			return 0;
		}
		var_324_bool = var_7_cvector == (int)41105;
		if(var_324_bool != 0) {
			var_325_string = "";
			func_189(var_8_bool, "Smile");
			@@@var_0_object:SetMessage((int)539166);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539167, (int)-1, (int)41106);
			return 0;
		}
		var_3_string = true;
		var_330_bool = 0;
		func_1625(var_330_bool);
		if(var_330_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xd4";
	
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
			func_1261(var_13_object);
			RemoveActor(var_13_object);
		}
	} else {
		var_17_bool = var_7_string == "restore";
		if(var_17_bool == 0) goto Label_674;
		var_1_object = false;
	}
Label_674:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object;
	if(var_7_object != 0) {
		var_8_object = Obj();
		func_1261(var_8_object);
		RemoveActor(var_8_object);
		Hold();
	}
	func_799();
	return 0;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_814();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_9_bool = var_7_int == (int)10;
	if(var_9_bool != 0) {
		func_757();
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = 0;
		func_978(var_12_bool);
		if(var_12_bool != 0) {
			var_15_bool = 0;
			func_726(var_15_bool);
			if(var_15_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_32_bool = 0;
			func_706(var_32_bool);
			if(var_32_bool != 0) {
				var_51_bool = 0; var_52_object = Obj();
				func_1261(Obj());
				var_53_object = var_52_object;
				func_1128(var_51_bool, var_52_object);
			}
		} else {
			func_721(var_7_int);
			func_748();
		}
	}
	return 0;
	
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool;
	if(var_8_bool != 0) {
		func_748();
	} else {
		var_14_string = "";
		func_1208("Neutral");
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
		func_939();
		var_11_bool = 0; var_12_object = Obj();
		var_7_object = var_12_object;
		func_969(var_11_bool, var_12_object);
		EventEnable(0);
		var_25_object = Obj();
		var_7_object = var_25_object;
		func_643(var_25_object);
		var_282_string = "";
		func_1208("Neutral");
		func_757();
		func_748();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_692(var_6_bool);
	return 0;
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0;
	var_0_object = var_27_object;
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0;
	var_27_object = var_38_object;
	func_983(var_37_bool, var_38_object, (float)70.0);
	var_84_bool = var_37_bool == 0; //@nz
	if(var_84_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	CreateDialog(var_33_object);
	var_85_int = 0;
	func_1619(var_85_int);
	@@var_33_object:SetNPCName(var_85_int);
	var_86_int = 0;
	func_1617(var_86_int);
	@@var_33_object:SetNPCDescription(var_86_int);
	var_87_string = "";
	func_1621(var_87_string);
	@@var_33_object:SetPhoto(var_87_string);
	var_88_string = "";
	func_1623(var_88_string);
	@@var_33_object:SetPhoto2(var_88_string);
	var_89_int = 0;
	func_1600(var_89_int);
	@@var_33_object:SetPlayerName(var_89_int);
	IsOverrideActive(var_34_bool);
	var_97_bool = var_34_bool;
	if(var_97_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	DoDialog(var_33_object);
	var_98_bool = 0; var_99_object = Obj();
	func_1261(Obj());
	var_100_object = var_99_object;
	func_1070(var_98_bool, var_99_object);
	var_193_object = Obj(); var_194_object = Obj();
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	@@var_33_object:IsDialogEnd(var_36_bool);
	
Label_63:
	var_273_bool = var_36_bool == 0; //@nz
	if(var_273_bool != 0) {
		sync();
		@@var_33_object:IsDialogEnd(var_36_bool);
		goto Label_63;
	}
	var_27_object = Obj();
	func_1052();
	StopDialog(var_33_object);
	@@var_33_object:GetReturnValue((int)-1);
	var_35_int = var_26_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1409()
{
	var_15_int = 0; var_16_int = 0;
	func_1507();
	var_40_bool = 0; var_41_string = ""; var_42_string = "";
	func_1345(var_40_bool, "quest_k3_04", "completed");
	GetVariable("k3q04Promise", var_16_int);
	var_47_int = var_16_int;
	if(var_47_int != 0) {
		SetVariable("k3q04SendBurahMail", (int)1);
	}
	return 2;
}


func_1282(var_66_int, var_67_int)
{
	var_68_object = Obj(); var_69_object = Obj();
	CreateIntVector(var_69_object);
	@@var_69_object:add(var_66_int);
	@@var_69_object:add(var_67_int);
	SendWorldWndMessage((int)3, var_69_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_643(var_25_object)
{
	var_26_int = 0; var_27_object = Obj();
	var_25_object = var_27_object;
	TaskCall(0);
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
	return 0;
}


func_1546()
{
	var_135_object = Obj(); var_136_object = Obj();
	CreateDiaryEntry(var_136_object, (int)356, (int)2, (int)525656);
	var_140_bool = 0; var_141_object = Obj(); var_142_int = 0;
	var_136_object = var_141_object;
	func_1572(var_140_bool, var_141_object, (int)354);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1165(var_140_bool, var_141_object)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = "";
	var_153_int = 0;
	func_1357(var_153_int);
	var_159_int = "d" + var_153_int;
	var_147_string = var_159_int + "m";
	var_148_int = 0;
	
Label_1174:
	if((int)1 != 0) {
		var_163_int = var_148_int + (int)1;
		var_164_int = var_147_string + var_163_int;
		@@var_141_object:HasProperty(var_164_int, var_149_bool);
		var_165_bool = var_149_bool == 0; //@nz
		if(var_165_bool != 0) {
		} else {
			var_148_int = var_148_int + (int)1;
			goto Label_1174;
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
	func_1239(var_172_bool, var_173_string);
	var_172_bool = var_140_bool;
	return 10;
	
}


func_1294(var_53_object, var_54_int)
{
	var_55_int = 0; var_56_int = 0;
	var_57_object = Obj(); var_58_string = ""; var_59_int = 0;
	var_53_object = var_57_object;
	var_54_int = var_59_int;
	func_952(var_57_object, "money", var_59_int);
	var_64_bool = var_54_int > (int)0;
	if(var_64_bool != 0) {
		GetInvItemByName(var_56_int, "Money");
		var_66_int = 0; var_67_int = 0;
		var_56_int = var_66_int;
		var_54_int = var_67_int;
		func_1282(var_66_int, var_67_int);
	}
	return 2;
}


func_1428(var_50_object)
{
	Trace("money2000 is given");
	var_53_object = Obj(); var_54_int = 0;
	var_50_object = var_53_object;
	func_1294(var_53_object, (int)2000);
	return 0;
}


func_1559(var_31_object)
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


func_1052()
{
	var_275_bool = 0; var_276_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_278_bool = 0;
	func_1625(var_278_bool);
	if(var_278_bool != 0) {
	} else {
		HasAnimationTrack(var_276_bool, "head");
		var_280_bool = var_276_bool;
		if(var_280_bool == 0) goto Label_1069;
		UnlookAsync("head");
	}
Label_1069:
	return 2;
	
}


func_1438()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_799()
{
	func_939();
	func_757();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


func_1313(var_79_object, var_80_object, var_81_int)
{
	var_82_int = 0; var_83_int = 0; var_84_bool = 0; var_85_int = 0; var_86_int = 0; var_87_bool = 0;
	@@var_80_object:GetItemID(var_85_int);
	GetInvItemProperty(var_86_int, var_85_int, "Category");
	@@var_79_object:AddItem(var_87_bool, var_80_object, var_86_int, var_81_int);
	var_89_bool = var_87_bool == 0; //@nz
	if(var_89_bool != 0) {
		@@var_79_object:DropItems(var_80_object, var_81_int);
	} else {
		var_90_int = 0; var_91_int = 0;
		var_85_int = var_90_int;
		var_81_int = var_91_int;
		func_1282(var_90_int, var_91_int);
	}
	return 6;
	
}


func_1533()
{
	var_159_object = Obj(); var_160_object = Obj();
	CreateDiaryEntry(var_160_object, (int)784, (int)2, (int)542469);
	var_164_bool = 0; var_165_object = Obj(); var_166_int = 0;
	var_160_object = var_165_object;
	func_1572(var_164_bool, var_165_object, (int)354);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1444()
{
	SetVariable("k3q04SawDanko", (int)1);
	return 0;
}


func_1572(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0;
	func_1559(Obj());
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


func_937(var_45_bool)
{
	var_45_bool = 1;
	return 0;
}


func_1450()
{
	func_1533();
	var_167_bool = 0; var_168_string = ""; var_169_string = "";
	func_1345(var_167_bool, "quest_k3_04", "fail");
	return 0;
}


func_939()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1070(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0;
	GetVariable("voice_common", var_105_int);
	var_108_int = var_105_int;
	if(var_108_int != 0) {
		var_109_bool = 0; var_110_object = Obj();
		var_99_object = var_110_object;
		func_1128(var_109_bool, var_110_object);
		var_139_bool = var_109_bool == 0; //@nz
		if(var_139_bool != 0) {
			var_140_bool = 0; var_141_object = Obj();
			var_99_object = var_141_object;
			func_1165(var_140_bool, var_141_object);
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
		func_1165(var_185_bool, var_186_object);
		var_187_bool = var_185_bool == 0; //@nz
		if(var_187_bool != 0) {
			var_188_bool = 0; var_189_object = Obj();
			var_99_object = var_189_object;
			func_1128(var_188_bool, var_189_object);
			var_190_bool = var_188_bool == 0; //@nz
			if(var_190_bool != 0) {
				var_98_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1126;
	
Label_1126:
	var_98_bool = 1;
	return 4;
	
}


func_814()
{
	StopGroup0();
	func_757();
	var_8_string = "";
	func_1208("Neutral");
	func_748();
	return 0;
}


func_944(var_22_float, var_23_object)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0);
	GetPosition(var_27_cvector);
	@@var_23_object:GetPosition(var_28_cvector);
	var_29_cvector = var_28_cvector - var_27_cvector;
	var_22_float = var_29_cvector | var_29_cvector;
	return 6;
}


func_1460(var_71_object)
{
	Trace("neomicin is given");
	var_74_object = Obj(); var_75_string = ""; var_76_int = 0;
	var_71_object = var_74_object;
	func_1332(var_74_object, "neomicin", (int)1);
	return 0;
}


func_692(var_0_object)
{
	var_7_bool = 0;
	func_978(var_7_bool);
	var_10_bool = var_7_bool == 0; //@nz
	if(var_10_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_701:
	func_868();
	goto Label_701;
}
EMIT "Return(); Pop(0)";


func_1332(var_74_object, var_75_string, var_76_int)
{
	var_77_object = Obj(); var_78_object = Obj();
	CreateInvItem(var_78_object);
	@@var_78_object:SetItemName(var_75_string);
	var_79_object = Obj(); var_80_object = Obj(); var_81_int = 0;
	var_74_object = var_79_object;
	var_78_object = var_80_object;
	var_76_int = var_81_int;
	func_1313(var_79_object, var_80_object, var_81_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1208(var_234_string)
{
	var_235_bool = 0; var_236_float = 0; var_237_float = 0; var_238_bool = 0; var_239_float = 0; var_240_float = 0;
	lshHasAnimation(var_238_bool, var_234_string);
	var_241_bool = var_238_bool;
	if(var_241_bool != 0) {
		lshGetAnimTimes(var_234_string, var_239_float, var_240_float);
		lshPlayAnimation(var_239_float, var_240_float, (bool)0);
	} else {
		var_244_int = "Can't find lsh animation : " + var_234_string;
		Trace(var_244_int);
	}
	return 6;
	
}


func_952(var_57_object, var_58_string, var_59_int)
{
	var_60_int = 0; var_61_int = 0;
	@@var_57_object:GetProperty(var_58_string, var_61_int);
	var_62_int = var_61_int + var_59_int;
	@@var_57_object:SetProperty(var_58_string, var_62_int);
	return 2;
}


func_189(var_2_object, var_208_string)
{
	var_209_bool = 0;
	func_1625(var_209_bool);
	var_210_bool = var_209_bool == 0; //@nz
	if(var_210_bool != 0) {
		return 0;
	}
	var_211_bool = var_208_string == var_2_object;
	if(var_211_bool != 0) {
		return 0;
	}
	var_212_string = ""; var_213_bool = 0;
	var_208_string = var_212_string;
	var_215_bool = var_208_string == "";
	if(var_215_bool != 0) {
		var_213_bool = 0;
	} else {
		var_213_bool = 1;
	}
	func_1224(var_212_string, var_213_bool);
	var_2_object = var_208_string;
	return 0;
	
}


func_1471(var_250_bool)
{
	var_252_int = 0; var_253_string = "";
	func_1277(var_252_int, "k3q04");
	var_255_bool = var_252_int == (int)1;
	if(var_255_bool != 0) {
		var_250_bool = 1;
		return 0;
	}
	var_250_bool = 0;
	return 0;
}


func_1600(var_89_int)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable("branch", var_91_int);
	var_94_bool = var_91_int == (int)0;
	if(var_94_bool != 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x64f";
	}
	var_96_bool = var_91_int == (int)1;
	if(var_96_bool != 0) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
	return 2;
}


func_959(var_15_bool, var_16_cvector)
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


func_706(var_32_bool)
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
	func_969(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1345(var_40_bool, var_41_string, var_42_string)
{
	var_43_object = Obj(); var_44_object = Obj();
	FindActor(var_44_object, var_41_string);
	var_45_bool = var_44_object == 0; //@ne
	if(var_45_bool != 0) {
		var_40_bool = 0;
		return 2;
	}
	Trigger(var_44_object, var_42_string);
	var_40_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1224(var_212_string, var_213_bool)
{
	var_216_bool = 0; var_217_float = 0; var_218_float = 0; var_219_bool = 0; var_220_float = 0; var_221_float = 0;
	lshHasAnimation(var_219_bool, var_212_string);
	var_222_bool = var_219_bool;
	if(var_222_bool != 0) {
		lshGetAnimTimes(var_212_string, var_220_float, var_221_float);
		lshPlayAnimation(var_220_float, var_221_float, var_213_bool);
	} else {
		var_224_int = "Can't find lsh animation : " + var_212_string;
		Trace(var_224_int);
	}
	return 6;
	
}


func_969(var_11_bool, var_12_object)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0);
	@@var_12_object:GetPosition(var_14_cvector);
	var_15_bool = 0; var_16_cvector = CVector(0,0,0);
	var_14_cvector = var_16_cvector;
	func_959(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
	return 2;
}


func_1483(var_200_bool)
{
	var_202_int = 0; var_203_string = "";
	func_1277(var_202_int, "k3q04");
	var_207_bool = var_202_int == (int)3;
	if(var_207_bool != 0) {
		var_200_bool = 1;
		return 0;
	}
	var_200_bool = 0;
	return 0;
}


func_1357(var_153_int)
{
	var_154_float = 0; var_155_float = 0;
	GetGameTime(var_155_float);
	var_157_int = 0;
	var_157_int = var_155_float / (int)24;
	var_153_int = (int)1 + var_157_int;
	return 2;
}


func_721(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_84_float, var_85_float);
	return 0;
}


func_1617(var_86_int)
{
	var_86_int = 515573;
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_200_bool = 0; var_201_object = Obj();
		var_201_object = var_1_object;
		func_1483(var_201_object);
		if(var_200_bool != 0) {
			var_208_string = "";
			func_189(var_194_object, "Neutral");
			@@@var_0_object:SetMessage((int)525642);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)525640, (int)26983, (int)26982);
			@@@var_0_object:AddReply((int)539159, (int)41099, (int)41098);
		} else {
				var_250_bool = 0; var_251_object = Obj();
				var_251_object = var_1_object;
				func_1471(var_251_object);
				if(var_250_bool != 0) {
					var_256_object = Obj(); var_257_object = Obj();
					var_256_object = var_1_object;
					var_257_object = var_0_object;
					func_1444();
					var_260_string = "";
					func_189(var_194_object, "Neutral");
					@@@var_0_object:SetMessage((int)525624);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)525625, (int)41108, (int)26967);
					goto Label_159;
				}
				var_265_string = "";
				func_189(var_194_object, "Neutral");
				@@@var_0_object:SetMessage((int)525632);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)525633, (int)-1, (int)26975);
				@@@var_0_object:AddReply((int)539168, (int)-1, (int)41107);
				goto Label_159;
		}
	}
Label_159:
	var_232_bool = 0;
	func_1625(var_232_bool);
	if(var_232_bool != 0) {

	Label_163:
		lshWaitForAnimEnd();
		var_233_string = var_3_string;
		if(var_233_string != 0) {
		} else {
			var_234_string = "";
			var_234_string = var_2_object;
			func_1208(var_234_string);
			goto Label_163;
	}
		PlayAnimation("all", "idle");

	Label_178:
		WaitForAnimEnd();
		var_247_string = var_3_string;
		if(var_247_string != 0) {
			goto Label_188;
		}
		PlayAnimation("all", "idle");
		goto Label_178;

	}
	goto Label_188;
	
Label_188:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_1619(var_85_int)
{
	var_85_int = 504032;
	return 0;
}


func_978(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0;
	IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
	return 2;
}


func_1621(var_87_string)
{
	var_87_string = "ui/NPC_Bakalavr.png";
	return 0;
}


func_726(var_15_bool)
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
	func_944(var_22_float, var_23_object);
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


func_983(var_37_bool, var_38_object, var_39_float)
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
	func_1267(var_64_cvector, var_65_cvector);
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
	func_1625(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		HasAnimationTrack(var_57_bool, "head");
		var_82_bool = var_57_bool;
		if(var_82_bool == 0) goto Label_1046;
		LookAsyncCamera("head");
	}
Label_1046:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_37_bool = 1;
	return 18;
	
}


func_1623(var_88_string)
{
	var_88_string = "ui/NPC_Bakalavr_b.png";
	return 0;
}


func_1625(var_80_bool)
{
	var_80_bool = 1;
	return 0;
}


func_1495(var_244_bool)
{
	var_246_int = 0; var_247_string = "";
	func_1277(var_246_int, "k3q04LopuhTalk");
	var_249_bool = var_246_int != (int)0;
	if(var_249_bool != 0) {
		var_244_bool = 1;
		return 0;
	}
	var_244_bool = 0;
	return 0;
}


func_1366(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = "";
	var_35_int = var_32_int;
	if(var_35_int != 0) {
		"idle" = "idle" + var_32_int;
	}
	var_34_string = var_31_string;
	return 2;
}


func_1239(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0;
	var_136_bool = 0;
	func_1625(var_136_bool);
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


func_1373(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0;
	var_28_int = 0;
	
Label_1375:
	var_31_string = ""; var_32_int = 0;
	var_28_int = var_32_int;
	func_1366(var_31_string, var_32_int);
	HasAnimation(var_29_bool, "all", var_31_string);
	var_36_bool = var_29_bool == 0; //@nz
	if(var_36_bool != 0) {
	} else {
		var_28_int = var_28_int + (int)1;
		goto Label_1375;
	}
	var_28_int = var_25_int;
	return 4;
	
}


func_1507()
{
	var_17_object = Obj(); var_18_object = Obj();
	CreateDiaryEntry(var_18_object, (int)359, (int)2, (int)525659);
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0;
	var_18_object = var_23_object;
	func_1572(var_22_bool, var_23_object, (int)354);
	return 2;
}
EMIT "Stack[-1] = 0";


func_868()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0;
	WaitForAnimEnd();
	var_23_bool = 0;
	func_978(var_23_bool);
	var_24_bool = var_23_bool == 0; //@nz
	if(var_24_bool != 0) {
		return 12;
	}
	func_1373((int)0);
	var_25_int = var_17_int;
	var_18_int = 0;
	
Label_882:
	var_38_bool = 0;
	var_38_bool = 0;
	var_40_bool = var_18_int < (int)5;
	if(var_40_bool != 0) {
		var_41_bool = 0;
		func_978(var_41_bool);
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
				func_1366(var_52_string, var_53_int);
				PlayAnimation("all", var_52_string);
				WaitForAnimEnd(var_22_bool);
				var_54_bool = var_22_bool == 0; //@nz
				if(var_54_bool == 0) goto Label_923;
				goto Label_934;
		}
		Label_923:
			var_45_bool = 0;
			func_937(var_45_bool);
			var_46_bool = var_45_bool == 0; //@nz
			if(var_46_bool != 0) {
				goto Label_934;
			}
			ResetAAS();
			var_18_int = var_18_int + (int)1;
			goto Label_882;

		}
	}
Label_934:
	ResetAAS();
	return 12;
	
}


func_1254()
{
	var_10_bool = 0;
	func_1625(var_10_bool);
	if(var_10_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1128(var_109_bool, var_110_object)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = "";
	var_116_string = "c";
	var_117_int = 0;
	
Label_1131:
	if((int)1 != 0) {
		var_123_int = var_117_int + (int)1;
		var_124_int = var_116_string + var_123_int;
		@@var_110_object:HasProperty(var_124_int, var_118_bool);
		var_125_bool = var_118_bool == 0; //@nz
		if(var_125_bool != 0) {
		} else {
			var_117_int = var_117_int + (int)1;
			goto Label_1131;
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
	func_1239(var_132_bool, var_133_string);
	var_132_bool = var_109_bool;
	return 10;
	
}


func_748()
{
	var_284_float = 0; var_285_float = 0;
	rand(var_285_float, (int)8, (int)16);
	SetTimer((int)10, var_285_float);
	return 2;
}


func_1261(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj();
	self(var_102_object);
	var_102_object = var_100_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1390()
{
	SetVariable("k3q04", (int)2);
	func_1546();
	return 0;
}


func_1520()
{
	var_110_object = Obj(); var_111_object = Obj();
	CreateDiaryEntry(var_111_object, (int)358, (int)2, (int)525658);
	var_115_bool = 0; var_116_object = Obj(); var_117_int = 0;
	var_111_object = var_116_object;
	func_1572(var_115_bool, var_116_object, (int)354);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1267(var_64_cvector, var_65_cvector)
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


func_757()
{
	KillTimer((int)10);
	return 0;
}


func_1399()
{
	func_1520();
	var_118_bool = 0; var_119_string = ""; var_120_string = "";
	func_1345(var_118_bool, "quest_k3_04", "completed");
	return 0;
}


func_1277(var_202_int, var_203_string)
{
	var_204_int = 0; var_205_int = 0;
	GetVariable(var_203_string, var_205_int);
	var_205_int = var_202_int;
	return 2;
}


