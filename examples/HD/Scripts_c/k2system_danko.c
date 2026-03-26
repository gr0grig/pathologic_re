// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,IsLoaded/1,RemoveActor/1,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,SendWorldWndMessage/1,CreateFloatVector/1,Trigger/2,GetGameTime/1,HasAnimation/3,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SetDiarySection/1,GetProperty/2
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:restore|W:player|A:GetPosition|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:voice_common|W:c|W:m|W:Can't find lsh animation : |A:add|W:money|W:Money|W:reputation|W:ui/NPC_Bakalavr.png|W:ui/NPC_Bakalavr_b.png|W:playsound|W:givemoney|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:klara2_npc_positioner|W:remove_danko|W:remove_burah|W:k2system_klara_day|W:k2system_burah_day|W:k2system_danko_day|W:k2system_burah_state|W:k2system_danko_state|W:k2system_klara_state
// @GLOBALS: 0:object:
// @RUN_OP: 0x2ee
// @RUN_TASK: 4
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa1 vars=int,int
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0x194 vars=int,int
// @TASK_4: vars=cvector,bool params=0
// @EVENT_26: op=0x2f6 vars=string
// @EVENT_6: op=0x30a vars=
// @EVENT_5: op=0x317 vars=
// @EVENT_7: op=0x360 vars=int
// @EVENT_45: op=0x3a2 vars=bool
// @EVENT_0: op=0x3ae vars=object
// @PE: 0x51,0x8b,0xa1,0x11c,0x17e,0x194,0x2ee,0x2f2,0x317,0x360,0x386,0x3a2,0x586,0x5b0,0x614,0x61b,0x622,0x628,0x62d,0x632,0x637,0x63c,0x641,0x65c,0x663,0x66d,0x677,0x681,0x687,0x68d,0x751,0x759,0x767

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_bool)
{
	if((int)1 != 0) {
		func_1391();
		var_17_bool = var_12_cvector == (int)41014;
		if(var_17_bool != 0) {
			var_18_string = "";
			func_139(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539066);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539067, (int)-1, (int)41015);
			@@@var_0_object:AddReply((int)541074, (int)-1, (int)43179);
			return 0;
		}
		var_3_string = true;
		var_42_bool = 0;
		func_1554(var_42_bool);
		if(var_42_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa2";
	
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_cvector, var_13_bool)
{
	if((int)1 != 0) {
		func_1391();
		var_17_bool = var_13_bool == (int)41715;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_1576();
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_1601();
			var_60_object = Obj(); var_61_object = Obj();
			var_60_object = var_1_object;
			var_61_object = var_0_object;
			func_1556(var_61_object);
		}
		var_101_bool = var_13_bool == (int)41718;
		if(var_101_bool != 0) {
			var_102_object = Obj(); var_103_object = Obj();
			var_102_object = var_1_object;
			var_103_object = var_0_object;
			func_1581();
		}
		var_114_bool = var_13_bool == (int)41721;
		if(var_114_bool != 0) {
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_object;
			func_1586();
			var_134_object = Obj(); var_135_object = Obj();
			var_134_object = var_1_object;
			var_135_object = var_0_object;
			func_1596();
			var_139_object = Obj(); var_140_object = Obj();
			var_139_object = var_1_object;
			var_140_object = var_0_object;
			func_1601();
			var_141_object = Obj(); var_142_object = Obj();
			var_141_object = var_1_object;
			var_142_object = var_0_object;
			func_1563(var_142_object);
			var_146_object = Obj(); var_147_object = Obj();
			var_146_object = var_1_object;
			var_147_object = var_0_object;
			func_1606(var_147_object);
			var_170_object = Obj(); var_171_object = Obj();
			var_170_object = var_1_object;
			var_171_object = var_0_object;
			func_1570();
		}
		var_175_bool = var_13_bool == (int)41724;
		if(var_175_bool != 0) {
			var_176_object = Obj(); var_177_object = Obj();
			var_176_object = var_1_object;
			var_177_object = var_0_object;
			func_1591();
			var_187_object = Obj(); var_188_object = Obj();
			var_187_object = var_1_object;
			var_188_object = var_0_object;
			func_1617(var_188_object);
			var_195_object = Obj(); var_196_object = Obj();
			var_195_object = var_1_object;
			var_196_object = var_0_object;
			func_1570();
			var_197_object = Obj(); var_198_object = Obj();
			var_197_object = var_1_object;
			var_198_object = var_0_object;
			func_1628(var_198_object);
		}
		var_203_bool = var_12_cvector == (int)41712;
		if(var_203_bool != 0) {
			var_204_string = "";
			func_382(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539760);
			@@@var_0_object:ClearReplies();
			var_222_bool = 0; var_223_object = Obj();
			var_223_object = var_1_object;
			func_1645(var_222_bool, var_223_object);
			if(var_222_bool != 0) {
				@@@var_0_object:AddReply((int)539761, (int)41714, (int)41713);
			}
			var_239_bool = 0; var_240_object = Obj();
			var_240_object = var_1_object;
			func_1645(var_239_bool, var_240_object);
			if(var_239_bool != 0) {
				@@@var_0_object:AddReply((int)539764, (int)41717, (int)41716);
			}
			var_244_bool = 0; var_245_object = Obj();
			var_245_object = var_1_object;
			func_1635(var_244_bool, var_245_object);
			if(var_244_bool != 0) {
				@@@var_0_object:AddReply((int)539767, (int)41720, (int)41719);
			}
			var_261_bool = 0; var_262_object = Obj();
			var_262_object = var_1_object;
			func_1655(var_261_bool, var_262_object);
			if(var_261_bool != 0) {
				@@@var_0_object:AddReply((int)539770, (int)41723, (int)41722);
			}
			@@@var_0_object:AddReply((int)539773, (int)-1, (int)41725);
			@@@var_0_object:AddReply((int)541091, (int)-1, (int)43200);
			return 0;
		}
		var_285_bool = var_12_cvector == (int)41723;
		if(var_285_bool != 0) {
			var_286_string = "";
			func_382(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539771);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541092, (int)43203, (int)43201);
			@@@var_0_object:AddReply((int)541093, (int)43203, (int)43202);
			return 0;
		}
		var_295_bool = var_12_cvector == (int)43203;
		if(var_295_bool != 0) {
			var_296_string = "";
			func_382(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541094);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539772, (int)-1, (int)41724);
			return 0;
		}
		var_302_bool = var_12_cvector == (int)41720;
		if(var_302_bool != 0) {
			var_303_string = "";
			func_382(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539768);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541095, (int)43207, (int)43205);
			@@@var_0_object:AddReply((int)541096, (int)43207, (int)43206);
			return 0;
		}
		var_312_bool = var_12_cvector == (int)43207;
		if(var_312_bool != 0) {
			var_313_string = "";
			func_382(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541097);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541098, (int)43211, (int)43209);
			@@@var_0_object:AddReply((int)541099, (int)43211, (int)43210);
			return 0;
		}
		var_322_bool = var_12_cvector == (int)43211;
		if(var_322_bool != 0) {
			var_323_string = "";
			func_382(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541100);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539769, (int)-1, (int)41721);
			return 0;
		}
		var_329_bool = var_12_cvector == (int)41717;
		if(var_329_bool != 0) {
			var_330_string = "";
			func_382(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539765);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541101, (int)43215, (int)43213);
			@@@var_0_object:AddReply((int)541102, (int)43216, (int)43214);
			return 0;
		}
		var_339_bool = var_12_cvector == (int)43216;
		if(var_339_bool != 0) {
			var_340_string = "";
			func_382(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541104);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541105, (int)43215, (int)43217);
			return 0;
		}
		var_346_bool = var_12_cvector == (int)43215;
		if(var_346_bool != 0) {
			var_347_string = "";
			func_382(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)541103);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539766, (int)-1, (int)41718);
			return 0;
		}
		var_353_bool = var_12_cvector == (int)41714;
		if(var_353_bool != 0) {
			var_354_string = "";
			func_382(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)539762);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)539763, (int)-1, (int)41715);
			return 0;
		}
		var_3_string = true;
		var_359_bool = 0;
		func_1554(var_359_bool);
		if(var_359_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x195";
	
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_bool, var_12_string)
{
	var_13_bool = 0; var_14_bool = 0;
	var_16_bool = var_12_string == "cleanup";
	if(var_16_bool != 0) {
		var_1_object = true;
		IsLoaded(var_14_bool);
		var_17_bool = var_14_bool == 0; //@nz
		if(var_17_bool != 0) {
			var_18_object = Obj();
			func_1398(var_18_object);
			RemoveActor(var_18_object);
		}
	} else {
		var_22_bool = var_12_string == "restore";
		if(var_22_bool == 0) goto Label_777;
		var_1_object = false;
	}
Label_777:
	return 2;
	
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_bool)
{
	var_12_object = var_1_object;
	if(var_12_object != 0) {
		var_13_object = Obj();
		func_1398(var_13_object);
		RemoveActor(var_13_object);
		Hold();
	}
	func_902();
	return 0;
}


task_4_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_bool)
{
	func_917();
	return 0;
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_bool, var_12_int)
{
	var_14_bool = var_12_int == (int)10;
	if(var_14_bool != 0) {
		func_860();
		var_16_bool = 0;
		var_16_bool = 0;
		var_17_bool = 0;
		func_1115(var_17_bool);
		if(var_17_bool != 0) {
			var_20_bool = 0;
			func_829(var_20_bool);
			if(var_20_bool != 0) {
				var_16_bool = 1;
			}
		}
		if(var_16_bool != 0) {
			var_37_bool = 0;
			func_809(var_37_bool);
			if(var_37_bool != 0) {
				var_56_bool = 0; var_57_object = Obj();
				func_1398(Obj());
				var_58_object = var_57_object;
				func_1265(var_56_bool, var_57_object);
			}
		} else {
			func_824(var_12_int);
			func_851();
		}
	}
	return 0;
	
}


task_4_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_bool, var_12_bool)
{
	var_13_bool = var_12_bool;
	if(var_13_bool != 0) {
		func_851();
	} else {
		var_19_string = "";
		func_1345("Neutral");
	}
	return 0;
	
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_bool = 0;
	IsOverrideActive(var_14_bool);
	var_15_bool = var_14_bool == 0; //@nz
	if(var_15_bool != 0) {
		EventDisable(0);
		func_1042();
		var_16_bool = 0; var_17_object = Obj();
		var_12_object = var_17_object;
		func_1106(var_16_bool, var_17_object);
		EventEnable(0);
		var_30_object = Obj();
		var_12_object = var_30_object;
		func_1920(var_30_object);
		var_382_string = "";
		func_1345("Neutral");
		func_860();
		func_851();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_bool)
{
	func_754();
	return 0;
}


func_0(var_0_object, var_326_int, var_327_object)
{
	var_329_object = Obj(); var_330_bool = 0; var_331_int = 0; var_332_bool = 0; var_333_object = Obj(); var_334_bool = 0; var_335_int = 0; var_336_bool = 0;
	var_0_object = var_327_object;
	var_337_bool = 0; var_338_object = Obj(); var_339_float = 0;
	var_327_object = var_338_object;
	func_1120(var_337_bool, var_338_object, (float)70.0);
	var_340_bool = var_337_bool == 0; //@nz
	if(var_340_bool != 0) {
		var_326_int = -2;
		return 8;
	}
	CreateDialog(var_333_object);
	var_341_int = 0;
	func_1548(var_341_int);
	@@var_333_object:SetNPCName(var_341_int);
	var_342_int = 0;
	func_1546(var_342_int);
	@@var_333_object:SetNPCDescription(var_342_int);
	var_343_string = "";
	func_1550(var_343_string);
	@@var_333_object:SetPhoto(var_343_string);
	var_344_string = "";
	func_1552(var_344_string);
	@@var_333_object:SetPhoto2(var_344_string);
	var_345_int = 0;
	func_1763(var_345_int);
	@@var_333_object:SetPlayerName(var_345_int);
	IsOverrideActive(var_334_bool);
	var_346_bool = var_334_bool;
	if(var_346_bool != 0) {
		var_326_int = -2;
		return 8;
	}
	DoDialog(var_333_object);
	var_347_bool = 0; var_348_object = Obj();
	func_1398(Obj());
	var_349_object = var_348_object;
	func_1207(var_347_bool, var_348_object);
	var_350_object = Obj(); var_351_object = Obj();
	var_327_object = var_350_object;
	var_333_object = var_351_object;
	TaskCall(1);
	func_81(var_352_object, var_353_object, var_354_string, var_355_bool, var_350_object, var_351_object);
	TaskReturn();
	@@var_333_object:IsDialogEnd(var_336_bool);
	
Label_63:
	var_380_bool = var_336_bool == 0; //@nz
	if(var_380_bool != 0) {
		sync();
		@@var_333_object:IsDialogEnd(var_336_bool);
		goto Label_63;
	}
	var_327_object = Obj();
	func_1189();
	StopDialog(var_333_object);
	@@var_333_object:GetReturnValue((int)-1);
	var_335_int = var_326_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1792(var_283_int)
{
	var_284_int = 0; var_285_int = 0;
	GetVariable("k2system_klara_day", var_285_int);
	var_285_int = var_283_int;
	return 2;
}


func_1798(var_263_int)
{
	var_264_int = 0; var_265_int = 0;
	GetVariable("k2system_burah_day", var_265_int);
	var_265_int = var_263_int;
	return 2;
}


func_1546(var_101_int)
{
	var_101_int = 515573;
	return 0;
}


func_1548(var_100_int)
{
	var_100_int = 504032;
	return 0;
}


func_1804(var_238_int)
{
	var_239_int = 0; var_240_int = 0;
	GetVariable("k2system_danko_day", var_240_int);
	var_240_int = var_238_int;
	return 2;
}


func_1550(var_102_string)
{
	var_102_string = "ui/NPC_Bakalavr.png";
	return 0;
}


func_1552(var_103_string)
{
	var_103_string = "ui/NPC_Bakalavr_b.png";
	return 0;
}


func_1040(var_50_bool)
{
	var_50_bool = 1;
	return 0;
}


func_1554(var_95_bool)
{
	var_95_bool = 1;
	return 0;
}


func_1042()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1556(var_60_object)
{
	var_62_bool = 0; var_63_object = Obj(); var_64_float = 0;
	var_60_object = var_63_object;
	func_1456(var_62_bool, var_63_object, (float)0.05000000074505806);
	return 0;
}


func_1810(var_258_int)
{
	var_259_int = 0; var_260_int = 0; var_261_int = 0; var_262_int = 0;
	func_1798((int)0);
	var_263_int = var_261_int;
	var_268_int = "k2system_burah_state" + var_261_int;
	GetVariable(var_268_int, var_262_int);
	var_262_int = var_258_int;
	return 4;
}


func_1302(var_155_bool, var_156_object)
{
	var_157_string = ""; var_158_int = 0; var_159_bool = 0; var_160_int = 0; var_161_string = ""; var_162_string = ""; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_string = "";
	var_168_int = 0;
	func_1513(var_168_int);
	var_169_int = "d" + var_168_int;
	var_162_string = var_169_int + "m";
	var_163_int = 0;
	
Label_1311:
	if((int)1 != 0) {
		var_173_int = var_163_int + (int)1;
		var_174_int = var_162_string + var_173_int;
		@@var_156_object:HasProperty(var_174_int, var_164_bool);
		var_175_bool = var_164_bool == 0; //@nz
		if(var_175_bool != 0) {
		} else {
			var_163_int = var_163_int + (int)1;
			goto Label_1311;
		}
	}
	var_176_bool = var_163_int == 0; //@nz
	if(var_176_bool != 0) {
		var_155_bool = 0;
		return 10;
	}
	var_165_int = 0;
	var_178_bool = var_163_int > (int)1;
	if(var_178_bool != 0) {
		irand(var_165_int, var_163_int);
	}
	var_180_int = var_165_int + (int)1;
	var_181_int = var_162_string + var_180_int;
	@@var_156_object:GetProperty(var_181_int, var_166_string);
	var_182_bool = 0; var_183_string = "";
	var_166_string = var_183_string;
	func_1376(var_182_bool, var_183_string);
	var_182_bool = var_155_bool;
	return 10;
	
}


func_1047(var_27_float, var_28_object)
{
	var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0);
	GetPosition(var_32_cvector);
	@@var_28_object:GetPosition(var_33_cvector);
	var_34_cvector = var_33_cvector - var_32_cvector;
	var_27_float = var_34_cvector | var_34_cvector;
	return 6;
}


func_1563(var_141_object)
{
	var_143_bool = 0; var_144_object = Obj(); var_145_float = 0;
	var_141_object = var_144_object;
	func_1456(var_143_bool, var_144_object, (float)-0.05000000074505806);
	return 0;
}


func_795(var_0_object)
{
	var_12_bool = 0;
	func_1115(var_12_bool);
	var_15_bool = var_12_bool == 0; //@nz
	if(var_15_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_804:
	func_971();
	goto Label_804;
}
EMIT "Return(); Pop(0)";


func_284(var_0_object, var_1_object, var_2_object, var_3_string, var_203_object, var_204_object)
{
	var_0_object = var_204_object;
	var_1_object = var_203_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_210_string = "";
		func_382(var_204_object, "Neutral");
		@@@var_0_object:SetMessage((int)539760);
		@@@var_0_object:ClearReplies();
		var_228_bool = 0; var_229_object = Obj();
		var_229_object = var_1_object;
		func_1645(var_228_bool, var_229_object);
		if(var_228_bool != 0) {
			@@@var_0_object:AddReply((int)539761, (int)41714, (int)41713);
		}
		var_248_bool = 0; var_249_object = Obj();
		var_249_object = var_1_object;
		func_1645(var_248_bool, var_249_object);
		if(var_248_bool != 0) {
			@@@var_0_object:AddReply((int)539764, (int)41717, (int)41716);
		}
		var_253_bool = 0; var_254_object = Obj();
		var_254_object = var_1_object;
		func_1635(var_253_bool, var_254_object);
		if(var_253_bool != 0) {
			@@@var_0_object:AddReply((int)539767, (int)41720, (int)41719);
		}
		var_273_bool = 0; var_274_object = Obj();
		var_274_object = var_1_object;
		func_1655(var_273_bool, var_274_object);
		if(var_273_bool != 0) {
			@@@var_0_object:AddReply((int)539770, (int)41723, (int)41722);
		}
		@@@var_0_object:AddReply((int)539773, (int)-1, (int)41725);
		@@@var_0_object:AddReply((int)541091, (int)-1, (int)43200);
		goto Label_352;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x120";
	}
Label_352:
	var_299_bool = 0;
	func_1554(var_299_bool);
	if(var_299_bool != 0) {

	Label_356:
		lshWaitForAnimEnd();
		var_300_string = var_3_string;
		if(var_300_string != 0) {
		} else {
			var_301_string = "";
			var_301_string = var_2_object;
			func_1345(var_301_string);
			goto Label_356;
	}
		PlayAnimation("all", "idle");

	Label_371:
		WaitForAnimEnd();
		var_314_string = var_3_string;
		if(var_314_string != 0) {
			goto Label_381;
		}
		PlayAnimation("all", "idle");
		goto Label_371;
	}
	goto Label_381;
	
Label_381:
	return 0;
	
}


func_1821(var_125_int)
{
	var_126_int = 0; var_127_int = 0;
	func_1798((int)0);
	var_128_int = var_127_int;
	var_133_int = "k2system_burah_state" + var_127_int;
	SetVariable(var_133_int, var_125_int);
	return 2;
}


func_1055(var_81_bool, var_82_object, var_83_string)
{
	var_84_bool = 0; var_85_bool = 0;
	var_88_bool = IsFuncExist(var_82_object, "HasProperty", (int)2);
	var_89_bool = var_88_bool == 0; //@nz
	if(var_89_bool != 0) {
		var_81_bool = 0;
		return 2;
	}
	@@var_82_object:HasProperty(var_83_string, var_85_bool);
	var_85_bool = var_81_bool;
	return 2;
}


func_1570()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_1831(var_233_int)
{
	var_234_int = 0; var_235_int = 0; var_236_int = 0; var_237_int = 0;
	func_1804((int)0);
	var_238_int = var_236_int;
	var_243_int = "k2system_danko_state" + var_236_int;
	GetVariable(var_243_int, var_237_int);
	var_237_int = var_233_int;
	return 4;
}


func_1576()
{
	func_1873();
	return 0;
}


func_809(var_37_bool)
{
	var_38_object = Obj(); var_39_object = Obj();
	FindActor(var_39_object, "player");
	var_41_bool = var_39_object == 0; //@nz
	if(var_41_bool != 0) {
		var_37_bool = 0;
		return 2;
	}
	var_42_bool = 0; var_43_object = Obj();
	var_39_object = var_43_object;
	func_1106(var_42_bool, var_43_object);
	var_42_bool = var_37_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1067(var_73_bool, var_74_object, var_75_string, var_76_float, var_77_float, var_78_float)
{
	var_79_float = 0; var_80_float = 0;
	var_81_bool = 0; var_82_object = Obj(); var_83_string = "";
	var_74_object = var_82_object;
	var_75_string = var_83_string;
	func_1055(var_81_bool, var_82_object, var_83_string);
	var_90_bool = var_81_bool == 0; //@nz
	if(var_90_bool != 0) {
		var_73_bool = 0;
		return 2;
	}
	@@var_74_object:GetProperty(var_75_string, var_80_float);
	var_91_float = 0; var_92_float = 0; var_93_float = 0; var_94_float = 0;
	var_92_float = var_80_float + var_76_float;
	var_77_float = var_93_float;
	var_78_float = var_94_float;
	func_1414(var_91_float, var_92_float, var_93_float, var_94_float);
	@@var_74_object:SetProperty(var_75_string, var_91_float);
	var_73_bool = 1;
	return 2;
}


func_1581()
{
	func_1881();
	return 0;
}


func_1586()
{
	func_1895();
	return 0;
}


func_1842(var_43_int)
{
	var_44_int = 0; var_45_int = 0;
	func_1804((int)0);
	var_46_int = var_45_int;
	var_51_int = "k2system_danko_state" + var_45_int;
	SetVariable(var_51_int, var_43_int);
	return 2;
}


func_1591()
{
	func_1915();
	return 0;
}


func_824(var_0_object)
{
	var_89_float = GetByIndex(var_0_object, 0);
	var_90_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_89_float, var_90_float);
	return 0;
}


func_1596()
{
	func_1786();
	return 0;
}


func_1852(var_278_int)
{
	var_279_int = 0; var_280_int = 0; var_281_int = 0; var_282_int = 0;
	func_1792((int)0);
	var_283_int = var_281_int;
	var_288_int = "k2system_klara_state" + var_281_int;
	GetVariable(var_288_int, var_282_int);
	var_282_int = var_278_int;
	return 4;
}


func_829(var_20_bool)
{
	var_21_object = Obj(); var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0;
	FindActor(var_23_object, "player");
	var_26_bool = var_23_object == 0; //@nz
	if(var_26_bool != 0) {
		var_20_bool = 0;
		return 4;
	}
	var_27_float = 0; var_28_object = Obj();
	var_23_object = var_28_object;
	func_1047(var_27_float, var_28_object);
	var_36_bool = var_27_float > (float)90000.0;
	if(var_36_bool != 0) {
		var_20_bool = 0;
		return 4;
	}
	CanSee(var_24_bool, var_23_object);
	var_24_bool = var_20_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_1601()
{
	func_1780();
	return 0;
}


func_1089(var_156_object, var_157_string, var_158_int)
{
	var_159_int = 0; var_160_int = 0;
	@@var_156_object:GetProperty(var_157_string, var_160_int);
	var_161_int = var_160_int + var_158_int;
	@@var_156_object:SetProperty(var_157_string, var_161_int);
	return 2;
}


func_1345(var_301_string)
{
	var_302_bool = 0; var_303_float = 0; var_304_float = 0; var_305_bool = 0; var_306_float = 0; var_307_float = 0;
	lshHasAnimation(var_305_bool, var_301_string);
	var_308_bool = var_305_bool;
	if(var_308_bool != 0) {
		lshGetAnimTimes(var_301_string, var_306_float, var_307_float);
		lshPlayAnimation(var_306_float, var_307_float, (bool)0);
	} else {
		var_311_int = "Can't find lsh animation : " + var_301_string;
		Trace(var_311_int);
	}
	return 6;
	
}


func_1606(var_146_object)
{
	var_148_int = 0; var_149_int = 0;
	irand(var_149_int, (int)1000);
	var_151_object = Obj(); var_152_int = 0;
	var_146_object = var_151_object;
	var_152_int = var_149_int + (int)3000;
	func_1437(var_151_object, var_152_int);
	return 2;
}


func_1863(var_178_int)
{
	var_179_int = 0; var_180_int = 0;
	func_1792((int)0);
	var_181_int = var_180_int;
	var_186_int = "k2system_klara_state" + var_180_int;
	SetVariable(var_186_int, var_178_int);
	return 2;
}


func_1096(var_20_bool, var_21_cvector)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0;
	GetPosition(var_25_cvector);
	var_26_cvector = var_21_cvector - var_25_cvector;
	var_28_float = GetByIndex(var_26_cvector, 0);
	var_29_float = GetByIndex(var_26_cvector, 2);
	Rotate(var_28_float, var_29_float, var_27_bool);
	var_27_bool = var_20_bool;
	return 6;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_350_object, var_351_object)
{
	var_0_object = var_351_object;
	var_1_object = var_350_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_357_string = "";
		func_139(var_351_object, "Neutral");
		@@@var_0_object:SetMessage((int)539066);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)539067, (int)-1, (int)41015);
		@@@var_0_object:AddReply((int)541074, (int)-1, (int)43179);
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	var_372_bool = 0;
	func_1554(var_372_bool);
	if(var_372_bool != 0) {

	Label_113:
		lshWaitForAnimEnd();
		var_373_string = var_3_string;
		if(var_373_string != 0) {
		} else {
			var_374_string = "";
			var_374_string = var_2_object;
			func_1345(var_374_string);
			goto Label_113;
	}
		PlayAnimation("all", "idle");

	Label_128:
		WaitForAnimEnd();
		var_377_string = var_3_string;
		if(var_377_string != 0) {
			goto Label_138;
		}
		PlayAnimation("all", "idle");
		goto Label_128;
	}
	goto Label_138;
	
Label_138:
	return 0;
	
}


func_1617(var_187_object)
{
	var_189_int = 0; var_190_int = 0;
	irand(var_190_int, (int)1000);
	var_192_object = Obj(); var_193_int = 0;
	var_187_object = var_192_object;
	var_193_int = var_190_int + (int)4000;
	func_1437(var_192_object, var_193_int);
	return 2;
}


func_1106(var_16_bool, var_17_object)
{
	var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0);
	@@var_17_object:GetPosition(var_19_cvector);
	var_20_bool = 0; var_21_cvector = CVector(0,0,0);
	var_19_cvector = var_21_cvector;
	func_1096(var_20_bool, var_21_cvector);
	var_20_bool = var_16_bool;
	return 2;
}


func_1361(var_214_string, var_215_bool)
{
	var_218_bool = 0; var_219_float = 0; var_220_float = 0; var_221_bool = 0; var_222_float = 0; var_223_float = 0;
	lshHasAnimation(var_221_bool, var_214_string);
	var_224_bool = var_221_bool;
	if(var_224_bool != 0) {
		lshGetAnimTimes(var_214_string, var_222_float, var_223_float);
		lshPlayAnimation(var_222_float, var_223_float, var_215_bool);
	} else {
		var_226_int = "Can't find lsh animation : " + var_214_string;
		Trace(var_226_int);
	}
	return 6;
	
}


func_1873()
{
	func_1696();
	var_43_int = 0;
	func_1842((int)2);
	return 0;
}


func_851()
{
	var_384_float = 0; var_385_float = 0;
	rand(var_385_float, (int)8, (int)16);
	SetTimer((int)10, var_385_float);
	return 2;
}


func_1881()
{
	func_1709();
	var_112_int = 0;
	func_1842((int)1);
	return 0;
}


func_1115(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0;
	IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
	return 2;
}


func_1628(var_197_object)
{
	var_199_bool = 0; var_200_object = Obj(); var_201_float = 0;
	var_197_object = var_200_object;
	func_1456(var_199_bool, var_200_object, (float)-0.30000001192092896);
	return 0;
}


func_860()
{
	KillTimer((int)10);
	return 0;
}


func_1120(var_52_bool, var_53_object, var_54_float)
{
	var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_bool = 0; var_63_bool = 0; var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_bool = 0; var_72_bool = 0;
	@@var_53_object:GetPosition(var_65_cvector);
	@@var_53_object:GetEyesHeight(var_64_float);
	var_73_float = GetByIndex(var_65_cvector, 1);
	var_73_float = var_73_float + var_64_float;
	SetByIndex(var_65_cvector, 1) = var_73_float;
	GetPosition(var_66_cvector);
	GetEyesHeight(var_64_float);
	var_74_float = GetByIndex(var_66_cvector, 1);
	var_74_float = var_74_float + var_64_float;
	SetByIndex(var_66_cvector, 1) = var_74_float;
	var_67_cvector = var_65_cvector - var_66_cvector;
	var_75_float = GetByIndex(var_67_cvector, 1);
	SetByIndex(var_67_cvector, 1) = (float)0;
	var_76_int = var_67_cvector | var_67_cvector;
	var_77_float = sqrt(var_76_int);
	var_67_cvector = var_67_cvector / var_77_float;
	var_68_cvector = -var_67_cvector;
	var_78_float = var_67_cvector * var_54_float;
	var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0);
	var_80_cvector = var_68_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1404(var_79_cvector, var_80_cvector);
	var_88_float = var_79_cvector * (int)25;
	var_89_int = var_78_float + var_88_float;
	var_69_cvector = var_89_int - CVector(0.0, 10.0, 0.0);
	var_70_cvector = var_66_cvector + var_69_cvector;
	IsOverrideActive(var_71_bool);
	var_91_bool = var_71_bool;
	if(var_91_bool != 0) {
		var_52_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_70_cvector, var_68_cvector, (bool)1);
	var_93_float = GetByIndex(var_69_cvector, 0);
	var_94_float = GetByIndex(var_69_cvector, 2);
	Rotate(var_93_float, var_94_float);
	var_95_bool = 0;
	func_1554(var_95_bool);
	if(var_95_bool != 0) {
	} else {
		HasAnimationTrack(var_72_bool, "head");
		var_97_bool = var_72_bool;
		if(var_97_bool == 0) goto Label_1183;
		LookAsyncCamera("head");
	}
Label_1183:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_52_bool = 1;
	return 18;
	
}


func_1376(var_147_bool, var_148_string)
{
	var_149_bool = 0; var_150_bool = 0;
	var_151_bool = 0;
	func_1554(var_151_bool);
	if(var_151_bool != 0) {
		lshHasSpeech(var_150_bool, var_148_string);
		var_152_bool = var_150_bool;
		if(var_152_bool != 0) {
			lshPlaySpeech(var_148_string);
			var_147_bool = 1;
			return 2;
		}
	}
	var_147_bool = 0;
	return 2;
}


func_1889(var_232_bool)
{
	var_233_int = 0;
	func_1831(var_233_int);
	var_232_bool = var_233_int == (int)0;
	return 0;
}


func_1635(var_253_bool, var_254_object)
{
	var_255_bool = 0; var_256_object = Obj();
	var_254_object = var_256_object;
	func_1665(var_256_object);
	if(var_255_bool != 0) {
		var_253_bool = 1;
		return 0;
	}
	var_253_bool = 0;
	return 0;
}


func_1895()
{
	func_1683();
	var_125_int = 0;
	func_1821((int)3);
	return 0;
}


func_1645(var_228_bool, var_229_object)
{
	var_230_bool = 0; var_231_object = Obj();
	var_229_object = var_231_object;
	func_1671(var_231_object);
	if(var_230_bool != 0) {
		var_228_bool = 1;
		return 0;
	}
	var_228_bool = 0;
	return 0;
}


func_1391()
{
	var_15_bool = 0;
	func_1554(var_15_bool);
	if(var_15_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1903(var_257_bool)
{
	var_258_int = 0;
	func_1810(var_258_int);
	var_257_bool = var_258_int == (int)1;
	return 0;
}


func_1909(var_277_bool)
{
	var_278_int = 0;
	func_1852(var_278_int);
	var_277_bool = var_278_int == (int)1;
	return 0;
}


func_1398(var_115_object)
{
	var_116_object = Obj(); var_117_object = Obj();
	self(var_117_object);
	var_117_object = var_115_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1655(var_273_bool, var_274_object)
{
	var_275_bool = 0; var_276_object = Obj();
	var_274_object = var_276_object;
	func_1677(var_276_object);
	if(var_275_bool != 0) {
		var_273_bool = 1;
		return 0;
	}
	var_273_bool = 0;
	return 0;
}


func_1915()
{
	var_178_int = 0;
	func_1863((int)3);
	return 0;
}


func_1404(var_79_cvector, var_80_cvector)
{
	var_82_float = 0; var_83_float = 0;
	var_84_int = var_80_cvector | var_80_cvector;
	var_83_float = sqrt(var_84_int);
	var_85_float = 9.999999974752427e-07;
	var_86_bool = var_83_float < var_85_float;
	if(var_86_bool != 0) {
		var_79_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_79_cvector = var_80_cvector / var_83_float;
	return 2;
}


func_382(var_2_object, var_210_string)
{
	var_211_bool = 0;
	func_1554(var_211_bool);
	var_212_bool = var_211_bool == 0; //@nz
	if(var_212_bool != 0) {
		return 0;
	}
	var_213_bool = var_210_string == var_2_object;
	if(var_213_bool != 0) {
		return 0;
	}
	var_214_string = ""; var_215_bool = 0;
	var_210_string = var_214_string;
	var_217_bool = var_210_string == "";
	if(var_217_bool != 0) {
		var_215_bool = 0;
	} else {
		var_215_bool = 1;
	}
	func_1361(var_214_string, var_215_bool);
	var_2_object = var_210_string;
	return 0;
	
}


func_1920(var_30_object)
{
	var_31_int = 0; var_32_int = 0;
	GetProperty("day", var_32_int);
	var_34_int = 0;
	func_1513(var_34_int);
	var_40_bool = var_32_int == var_34_int;
	if(var_40_bool != 0) {
		var_41_int = 0; var_42_object = Obj();
		var_30_object = var_42_object;
		TaskCall(2);
		func_203(var_43_object, var_41_int, var_42_object);
		TaskReturn();
	} else {
		var_326_int = 0; var_327_object = Obj();
		var_30_object = var_327_object;
		TaskCall(0);
		func_0(var_328_object, var_326_int, var_327_object);
		TaskReturn();
	}
	return 2;
	
}


func_1665(var_255_bool)
{
	func_1903((bool)0);
	var_257_bool = var_255_bool;
	return 0;
}


func_902()
{
	func_1042();
	func_860();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


func_1671(var_230_bool)
{
	func_1889((bool)0);
	var_232_bool = var_230_bool;
	return 0;
}


func_1414(var_91_float, var_92_float, var_93_float, var_94_float)
{
	var_95_bool = var_92_float < var_93_float;
	if(var_95_bool != 0) {
		var_93_float = var_91_float;
		return 0;
	}
	var_96_bool = var_92_float > var_94_float;
	if(var_96_bool != 0) {
		var_94_float = var_91_float;
		return 0;
	}
	var_92_float = var_91_float;
	return 0;
}


func_139(var_2_object, var_357_string)
{
	var_358_bool = 0;
	func_1554(var_358_bool);
	var_359_bool = var_358_bool == 0; //@nz
	if(var_359_bool != 0) {
		return 0;
	}
	var_360_bool = var_357_string == var_2_object;
	if(var_360_bool != 0) {
		return 0;
	}
	var_361_string = ""; var_362_bool = 0;
	var_357_string = var_361_string;
	var_364_bool = var_357_string == "";
	if(var_364_bool != 0) {
		var_362_bool = 0;
	} else {
		var_362_bool = 1;
	}
	func_1361(var_361_string, var_362_bool);
	var_2_object = var_357_string;
	return 0;
	
}


func_1677(var_275_bool)
{
	func_1909((bool)0);
	var_277_bool = var_275_bool;
	return 0;
}


func_1425(var_165_int, var_166_int)
{
	var_167_object = Obj(); var_168_object = Obj();
	CreateIntVector(var_168_object);
	@@var_168_object:add(var_165_int);
	@@var_168_object:add(var_166_int);
	SendWorldWndMessage((int)3, var_168_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1683()
{
	var_117_object = Obj(); var_118_object = Obj();
	CreateDiaryEntry(var_118_object, (int)755, (int)2, (int)539740);
	var_122_bool = 0; var_123_object = Obj(); var_124_int = 0;
	var_118_object = var_123_object;
	func_1735(var_122_bool, var_123_object, (int)751);
	return 2;
}
EMIT "Stack[-1] = 0";


func_917()
{
	StopGroup0();
	func_860();
	var_13_string = "";
	func_1345("Neutral");
	func_851();
	return 0;
}


func_1437(var_151_object, var_152_int)
{
	var_154_int = 0; var_155_int = 0;
	var_156_object = Obj(); var_157_string = ""; var_158_int = 0;
	var_151_object = var_156_object;
	var_152_int = var_158_int;
	func_1089(var_156_object, "money", var_158_int);
	var_163_bool = var_152_int > (int)0;
	if(var_163_bool != 0) {
		GetInvItemByName(var_155_int, "Money");
		var_165_int = 0; var_166_int = 0;
		var_155_int = var_165_int;
		var_152_int = var_166_int;
		func_1425(var_165_int, var_166_int);
	}
	return 2;
}


func_1696()
{
	var_20_object = Obj(); var_21_object = Obj();
	CreateDiaryEntry(var_21_object, (int)759, (int)2, (int)539744);
	var_25_bool = 0; var_26_object = Obj(); var_27_int = 0;
	var_21_object = var_26_object;
	func_1735(var_25_bool, var_26_object, (int)757);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1189()
{
	var_319_bool = 0; var_320_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_322_bool = 0;
	func_1554(var_322_bool);
	if(var_322_bool != 0) {
	} else {
		HasAnimationTrack(var_320_bool, "head");
		var_324_bool = var_320_bool;
		if(var_324_bool == 0) goto Label_1206;
		UnlookAsync("head");
	}
Label_1206:
	return 2;
	
}


func_1709()
{
	var_104_object = Obj(); var_105_object = Obj();
	CreateDiaryEntry(var_105_object, (int)760, (int)2, (int)539745);
	var_109_bool = 0; var_110_object = Obj(); var_111_int = 0;
	var_105_object = var_110_object;
	func_1735(var_109_bool, var_110_object, (int)757);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1456(var_62_bool, var_63_object, var_64_float)
{
	var_65_bool = var_63_object == 0; //@nz
	if(var_65_bool != 0) {
		var_62_bool = 0;
		return 0;
	}
	var_67_bool = var_64_float > (int)0;
	if(var_67_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_98_bool = var_64_float < (int)0;
		if(var_98_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_1477;
		}
		var_62_bool = 0;
		return 0;
	}
Label_1477:
	var_69_float = 0;
	var_64_float = var_69_float;
	func_1491(var_69_float);
	var_73_bool = 0; var_74_object = Obj(); var_75_string = ""; var_76_float = 0; var_77_float = 0; var_78_float = 0;
	var_63_object = var_74_object;
	var_64_float = var_76_float;
	func_1067(var_73_bool, var_74_object, "reputation", var_76_float, (float)0, (float)1);
	var_62_bool = 1;
	return 0;
	
}


func_1207(var_113_bool, var_114_object)
{
	var_118_int = 0; var_119_int = 0; var_120_int = 0; var_121_int = 0;
	GetVariable("voice_common", var_120_int);
	var_123_int = var_120_int;
	if(var_123_int != 0) {
		var_124_bool = 0; var_125_object = Obj();
		var_114_object = var_125_object;
		func_1265(var_124_bool, var_125_object);
		var_154_bool = var_124_bool == 0; //@nz
		if(var_154_bool != 0) {
			var_155_bool = 0; var_156_object = Obj();
			var_114_object = var_156_object;
			func_1302(var_155_bool, var_156_object);
			var_185_bool = var_155_bool == 0; //@nz
			if(var_185_bool != 0) {
				var_113_bool = 0;
				return 4;
			}
		}
		irand(var_121_int, (int)2);
		var_187_int = var_121_int;
		if(var_187_int != 0) {
			var_190_int = var_120_int + (int)1;
			var_192_int = var_190_int % (int)3;
			SetVariable("voice_common", var_192_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_195_bool = 0; var_196_object = Obj();
		var_114_object = var_196_object;
		func_1302(var_195_bool, var_196_object);
		var_197_bool = var_195_bool == 0; //@nz
		if(var_197_bool != 0) {
			var_198_bool = 0; var_199_object = Obj();
			var_114_object = var_199_object;
			func_1265(var_198_bool, var_199_object);
			var_200_bool = var_198_bool == 0; //@nz
			if(var_200_bool != 0) {
				var_113_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1263;
	
Label_1263:
	var_113_bool = 1;
	return 4;
	
}


func_1722(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj();
	GetDiaryRoot(var_36_object);
	var_37_bool = var_36_object == 0; //@nz
	if(var_37_bool != 0) {
		Trace("Can't retrieve diary root");
		var_34_object = 0;
		return 2;
	}
	var_36_object = var_34_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1735(var_25_bool, var_26_object, var_27_int)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0;
	func_1722(Obj());
	var_34_object = var_31_object;
	@@var_31_object:Find(var_27_int, var_32_object);
	var_39_bool = var_32_object == 0; //@nz
	if(var_39_bool != 0) {
		var_41_int = "Can't find diary parent with id: " + var_27_int;
		Trace(var_41_int);
		var_25_bool = 0;
		return 6;
	}
	@@var_32_object:AddChild(var_26_object);
	SendWorldWndMessage((int)7);
	@@var_26_object:GetCategory(var_33_int);
	SetDiarySection(var_33_int);
	var_25_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_203(var_0_object, var_41_int, var_42_object)
{
	var_44_object = Obj(); var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_object = Obj(); var_49_bool = 0; var_50_int = 0; var_51_bool = 0;
	var_0_object = var_42_object;
	var_52_bool = 0; var_53_object = Obj(); var_54_float = 0;
	var_42_object = var_53_object;
	func_1120(var_52_bool, var_53_object, (float)70.0);
	var_99_bool = var_52_bool == 0; //@nz
	if(var_99_bool != 0) {
		var_41_int = -2;
		return 8;
	}
	CreateDialog(var_48_object);
	var_100_int = 0;
	func_1548(var_100_int);
	@@var_48_object:SetNPCName(var_100_int);
	var_101_int = 0;
	func_1546(var_101_int);
	@@var_48_object:SetNPCDescription(var_101_int);
	var_102_string = "";
	func_1550(var_102_string);
	@@var_48_object:SetPhoto(var_102_string);
	var_103_string = "";
	func_1552(var_103_string);
	@@var_48_object:SetPhoto2(var_103_string);
	var_104_int = 0;
	func_1763(var_104_int);
	@@var_48_object:SetPlayerName(var_104_int);
	IsOverrideActive(var_49_bool);
	var_112_bool = var_49_bool;
	if(var_112_bool != 0) {
		var_41_int = -2;
		return 8;
	}
	DoDialog(var_48_object);
	var_113_bool = 0; var_114_object = Obj();
	func_1398(Obj());
	var_115_object = var_114_object;
	func_1207(var_113_bool, var_114_object);
	var_203_object = Obj(); var_204_object = Obj();
	var_42_object = var_203_object;
	var_48_object = var_204_object;
	TaskCall(3);
	func_284(var_205_object, var_206_object, var_207_string, var_208_bool, var_203_object, var_204_object);
	TaskReturn();
	@@var_48_object:IsDialogEnd(var_51_bool);
	
Label_266:
	var_317_bool = var_51_bool == 0; //@nz
	if(var_317_bool != 0) {
		sync();
		@@var_48_object:IsDialogEnd(var_51_bool);
		goto Label_266;
	}
	var_42_object = Obj();
	func_1189();
	StopDialog(var_48_object);
	@@var_48_object:GetReturnValue((int)-1);
	var_50_int = var_41_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_971()
{
	var_16_int = 0; var_17_int = 0; var_18_bool = 0; var_19_int = 0; var_20_int = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_int = 0; var_26_int = 0; var_27_bool = 0;
	WaitForAnimEnd();
	var_28_bool = 0;
	func_1115(var_28_bool);
	var_29_bool = var_28_bool == 0; //@nz
	if(var_29_bool != 0) {
		return 12;
	}
	func_1529((int)0);
	var_30_int = var_22_int;
	var_23_int = 0;
	
Label_985:
	var_43_bool = 0;
	var_43_bool = 0;
	var_45_bool = var_23_int < (int)5;
	if(var_45_bool != 0) {
		var_46_bool = 0;
		func_1115(var_46_bool);
		if(var_46_bool != 0) {
			var_43_bool = 1;
		}
	}
	if(var_43_bool != 0) {
		var_47_bool = var_22_int == 0; //@nz
		if(var_47_bool != 0) {
			Sleep((int)3, var_24_bool);
			var_49_bool = var_24_bool == 0; //@nz
			if(var_49_bool != 0) {
			} else {
		} else {
				irand(var_25_int, var_22_int);
				irand(var_26_int, (int)5);
				var_55_bool = var_26_int != (int)0;
				if(var_55_bool != 0) {
					var_25_int = 0;
				}
				var_57_string = ""; var_58_int = 0;
				var_25_int = var_58_int;
				func_1522(var_57_string, var_58_int);
				PlayAnimation("all", var_57_string);
				WaitForAnimEnd(var_27_bool);
				var_59_bool = var_27_bool == 0; //@nz
				if(var_59_bool == 0) goto Label_1026;
				goto Label_1037;
		}
		Label_1026:
			var_50_bool = 0;
			func_1040(var_50_bool);
			var_51_bool = var_50_bool == 0; //@nz
			if(var_51_bool != 0) {
				goto Label_1037;
			}
			ResetAAS();
			var_23_int = var_23_int + (int)1;
			goto Label_985;

		}
	}
Label_1037:
	ResetAAS();
	return 12;
	
}


func_1491(var_69_float)
{
	var_70_object = Obj(); var_71_object = Obj();
	CreateFloatVector(var_71_object);
	@@var_71_object:add(var_69_float);
	SendWorldWndMessage((int)16, var_71_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1501(var_54_bool, var_55_string, var_56_string)
{
	var_57_object = Obj(); var_58_object = Obj();
	FindActor(var_58_object, var_55_string);
	var_59_bool = var_58_object == 0; //@ne
	if(var_59_bool != 0) {
		var_54_bool = 0;
		return 2;
	}
	Trigger(var_58_object, var_56_string);
	var_54_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1763(var_104_int)
{
	var_105_int = 0; var_106_int = 0;
	GetVariable("branch", var_106_int);
	var_109_bool = var_106_int == (int)0;
	if(var_109_bool != 0) {
		var_104_int = 1;
		return 2;
	EMIT "GOTO 0x6f2";
	}
	var_111_bool = var_106_int == (int)1;
	if(var_111_bool != 0) {
		var_104_int = 2;
		return 2;
	}
	var_104_int = 3;
	return 2;
}


func_1513(var_34_int)
{
	var_35_float = 0; var_36_float = 0;
	GetGameTime(var_36_float);
	var_38_int = 0;
	var_38_int = var_36_float / (int)24;
	var_34_int = (int)1 + var_38_int;
	return 2;
}


func_1265(var_124_bool, var_125_object)
{
	var_126_string = ""; var_127_int = 0; var_128_bool = 0; var_129_int = 0; var_130_string = ""; var_131_string = ""; var_132_int = 0; var_133_bool = 0; var_134_int = 0; var_135_string = "";
	var_131_string = "c";
	var_132_int = 0;
	
Label_1268:
	if((int)1 != 0) {
		var_138_int = var_132_int + (int)1;
		var_139_int = var_131_string + var_138_int;
		@@var_125_object:HasProperty(var_139_int, var_133_bool);
		var_140_bool = var_133_bool == 0; //@nz
		if(var_140_bool != 0) {
		} else {
			var_132_int = var_132_int + (int)1;
			goto Label_1268;
		}
	}
	var_141_bool = var_132_int == 0; //@nz
	if(var_141_bool != 0) {
		var_124_bool = 0;
		return 10;
	}
	var_134_int = 0;
	var_143_bool = var_132_int > (int)1;
	if(var_143_bool != 0) {
		irand(var_134_int, var_132_int);
	}
	var_145_int = var_134_int + (int)1;
	var_146_int = var_131_string + var_145_int;
	@@var_125_object:GetProperty(var_146_int, var_135_string);
	var_147_bool = 0; var_148_string = "";
	var_135_string = var_148_string;
	func_1376(var_147_bool, var_148_string);
	var_147_bool = var_124_bool;
	return 10;
	
}


func_754()
{
	func_795(var_11_bool);
	return 0;
}


func_1522(var_36_string, var_37_int)
{
	var_38_string = ""; var_39_string = "";
	var_40_int = var_37_int;
	if(var_40_int != 0) {
		"idle" = "idle" + var_37_int;
	}
	var_39_string = var_36_string;
	return 2;
}


func_1780()
{
	var_54_bool = 0; var_55_string = ""; var_56_string = "";
	func_1501(var_54_bool, "klara2_npc_positioner", "remove_danko");
	return 0;
}


func_1529(var_30_int)
{
	var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_bool = 0;
	var_33_int = 0;
	
Label_1531:
	var_36_string = ""; var_37_int = 0;
	var_33_int = var_37_int;
	func_1522(var_36_string, var_37_int);
	HasAnimation(var_34_bool, "all", var_36_string);
	var_41_bool = var_34_bool == 0; //@nz
	if(var_41_bool != 0) {
	} else {
		var_33_int = var_33_int + (int)1;
		goto Label_1531;
	}
	var_33_int = var_30_int;
	return 4;
	
}


func_1786()
{
	var_136_bool = 0; var_137_string = ""; var_138_string = "";
	func_1501(var_136_bool, "klara2_npc_positioner", "remove_burah");
	return 0;
}


