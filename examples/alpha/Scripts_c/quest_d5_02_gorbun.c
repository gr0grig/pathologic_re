// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,self/1,GetVariable/2,GetGameTime/1,TriggerWorld/2,SetVariable/2,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1,CreateDiaryEntry/4
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:restore|A:GetProperty|A:SetProperty|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:money10000 is given|W:money|W:playsound|W:givemoney|W:d5q02|W:d5q02GorbunFindTheDaughter|W:pt_map_gorbun|A:AddMark|W:ood5Gorbun1|W:d5q02AnnaGotoGorbun|A:FindMark|A:Remove|W:d5q02AnnaGotoGorbunSelf|W:d5q02AnnaGotoKabak|W:d5q02NudeMeeting|W:ood5Gorbun2|W:ood5Gorbun3|W:money 50000 is given|W:d5q02KnowNudeIsDead|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:player|W:Adding diary entry|W:ui/NPC_Black.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x2eb
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xdb vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x2e3 vars=object
// @EVENT_26: op=0x2ef vars=string
// @EVENT_6: op=0x30b vars=
// @PE: 0x3f,0xcb,0xdb,0x2e3,0x35c,0x393,0x39e,0x3bb,0x3f3,0x3f9,0x3ff,0x40a,0x416,0x422,0x42e,0x43a,0x446

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_882();
		var_11_bool = var_7_bool == (int)13144;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_932();
			var_57_object = Obj(); var_58_object = Obj();
			var_57_object = var_1_object;
			var_58_object = var_0_object;
			func_955();
			var_61_object = Obj(); var_62_object = Obj();
			var_61_object = var_1_object;
			var_62_object = var_0_object;
			func_915(var_62_object);
			var_70_object = Obj(); var_71_object = Obj();
			var_70_object = var_1_object;
			var_71_object = var_0_object;
			func_926();
		}
		var_75_bool = var_7_bool == (int)13151;
		if(var_75_bool != 0) {
			var_76_object = Obj(); var_77_object = Obj();
			var_76_object = var_1_object;
			var_77_object = var_0_object;
			func_955();
		}
		var_79_bool = var_7_bool == (int)13661;
		if(var_79_bool != 0) {
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_object;
			func_932();
			var_82_object = Obj(); var_83_object = Obj();
			var_82_object = var_1_object;
			var_83_object = var_0_object;
			func_915(var_83_object);
			var_84_object = Obj(); var_85_object = Obj();
			var_84_object = var_1_object;
			var_85_object = var_0_object;
			func_926();
		}
		var_87_bool = var_7_bool == (int)13170;
		if(var_87_bool != 0) {
			var_88_object = Obj(); var_89_object = Obj();
			var_88_object = var_1_object;
			var_89_object = var_0_object;
			func_1017();
			var_92_object = Obj(); var_93_object = Obj();
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_1023(var_93_object);
			var_98_object = Obj(); var_99_object = Obj();
			var_98_object = var_1_object;
			var_99_object = var_0_object;
			func_926();
		}
		var_101_bool = var_7_bool == (int)13172;
		if(var_101_bool != 0) {
			var_102_object = Obj(); var_103_object = Obj();
			var_102_object = var_1_object;
			var_103_object = var_0_object;
			func_961();
			var_130_object = Obj(); var_131_object = Obj();
			var_130_object = var_1_object;
			var_131_object = var_0_object;
			func_1011();
		}
		var_135_bool = var_6_int == (int)13133;
		if(var_135_bool != 0) {
			var_136_bool = 0;
			var_136_bool = 0;
			var_137_bool = 0; var_138_object = Obj();
			var_138_object = var_1_object;
			func_1034(var_138_object);
			if(var_137_bool != 0) {
				var_145_bool = 0; var_146_object = Obj();
				var_146_object = var_1_object;
				func_1046(var_146_object);
				if(var_145_bool != 0) {
					var_136_bool = 1;
				}
			}
			if(var_136_bool != 0) {
				var_151_string = "";
				func_203(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)11917);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)11918, (int)13135, (int)13134);
				return 0;
			}
			var_170_string = "";
			func_203(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11935);
			@@@var_0_object:ClearReplies();
			var_172_bool = 0; var_173_object = Obj();
			var_173_object = var_1_object;
			func_1034(var_173_object);
			if(var_172_bool != 0) {
				@@@var_0_object:AddReply((int)12489, (int)13660, (int)13658);
			}
			var_177_bool = 0;
			var_177_bool = 0;
			var_178_bool = 0;
			var_178_bool = 0;
			var_179_bool = 0; var_180_object = Obj();
			var_180_object = var_1_object;
			func_1058(var_180_object);
			if(var_179_bool != 0) {
				var_185_bool = 0; var_186_object = Obj();
				var_186_object = var_1_object;
				func_1070(var_186_object);
				var_191_bool = var_185_bool == 0; //@nz
				if(var_191_bool != 0) {
					var_178_bool = 1;
				}
			}
			if(var_178_bool != 0) {
				var_192_bool = 0; var_193_object = Obj();
				var_193_object = var_1_object;
				func_1094(var_193_object);
				if(var_192_bool != 0) {
					var_177_bool = 1;
				}
			}
			if(var_177_bool != 0) {
				@@@var_0_object:AddReply((int)11936, (int)13155, (int)13153);
			}
			var_201_bool = 0;
			var_201_bool = 0;
			var_202_bool = 0; var_203_object = Obj();
			var_203_object = var_1_object;
			func_1070(var_203_object);
			if(var_202_bool != 0) {
				var_204_bool = 0; var_205_object = Obj();
				var_205_object = var_1_object;
				func_1082(var_205_object);
				if(var_204_bool != 0) {
					var_201_bool = 1;
				}
			}
			if(var_201_bool != 0) {
				@@@var_0_object:AddReply((int)11937, (int)13156, (int)13154);
			}
			@@@var_0_object:AddReply((int)12490, (int)-1, (int)13659);
			return 0;
		}
		var_217_bool = var_6_int == (int)13156;
		if(var_217_bool != 0) {
			var_218_string = "";
			func_203(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11939);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11947, (int)13165, (int)13164);
			return 0;
		}
		var_224_bool = var_6_int == (int)13165;
		if(var_224_bool != 0) {
			var_225_string = "";
			func_203(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11948);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11949, (int)13167, (int)13166);
			return 0;
		}
		var_231_bool = var_6_int == (int)13167;
		if(var_231_bool != 0) {
			var_232_string = "";
			func_203(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11950);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11951, (int)13171, (int)13168);
			return 0;
		}
		var_238_bool = var_6_int == (int)13171;
		if(var_238_bool != 0) {
			var_239_string = "";
			func_203(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11954);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11955, (int)-1, (int)13172);
			return 0;
		}
		var_245_bool = var_6_int == (int)13155;
		if(var_245_bool != 0) {
			var_246_string = "";
			func_203(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11938);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11940, (int)13158, (int)13157);
			return 0;
		}
		var_252_bool = var_6_int == (int)13158;
		if(var_252_bool != 0) {
			var_253_string = "";
			func_203(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11941);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11942, (int)13160, (int)13159);
			return 0;
		}
		var_259_bool = var_6_int == (int)13160;
		if(var_259_bool != 0) {
			var_260_string = "";
			func_203(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11943);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11944, (int)13162, (int)13161);
			return 0;
		}
		var_266_bool = var_6_int == (int)13162;
		if(var_266_bool != 0) {
			var_267_string = "";
			func_203(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11945);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11946, (int)13169, (int)13163);
			return 0;
		}
		var_273_bool = var_6_int == (int)13169;
		if(var_273_bool != 0) {
			var_274_string = "";
			func_203(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11952);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11953, (int)-1, (int)13170);
			return 0;
		}
		var_280_bool = var_6_int == (int)13660;
		if(var_280_bool != 0) {
			var_281_string = "";
			func_203(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12491);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12492, (int)-1, (int)13661);
			return 0;
		}
		var_287_bool = var_6_int == (int)13135;
		if(var_287_bool != 0) {
			var_288_string = "";
			func_203(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11919);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11920, (int)13137, (int)13136);
			return 0;
		}
		var_294_bool = var_6_int == (int)13137;
		if(var_294_bool != 0) {
			var_295_string = "";
			func_203(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11921);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11924, (int)13141, (int)13140);
			@@@var_0_object:AddReply((int)11922, (int)13139, (int)13138);
			return 0;
		}
		var_304_bool = var_6_int == (int)13139;
		if(var_304_bool != 0) {
			var_305_string = "";
			func_203(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11923);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11929, (int)13141, (int)13145);
			return 0;
		}
		var_311_bool = var_6_int == (int)13141;
		if(var_311_bool != 0) {
			var_312_string = "";
			func_203(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11925);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11926, (int)13143, (int)13142);
			@@@var_0_object:AddReply((int)11930, (int)13148, (int)13147);
			return 0;
		}
		var_321_bool = var_6_int == (int)13148;
		if(var_321_bool != 0) {
			var_322_string = "";
			func_203(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11931);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11932, (int)13150, (int)13149);
			return 0;
		}
		var_328_bool = var_6_int == (int)13150;
		if(var_328_bool != 0) {
			var_329_string = "";
			func_203(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11933);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11934, (int)-1, (int)13151);
			return 0;
		}
		var_335_bool = var_6_int == (int)13143;
		if(var_335_bool != 0) {
			var_336_string = "";
			func_203(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11927);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11928, (int)-1, (int)13144);
			return 0;
		}
		var_3_string = true;
		var_341_bool = 0;
		func_1218(var_341_bool);
		if(var_341_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xdc";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj();
	var_6_object = var_8_object;
	TaskCall(0);
	func_0(var_9_object, var_7_int, var_8_object);
	TaskReturn();
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0;
	var_10_bool = var_6_string == "cleanup";
	if(var_10_bool != 0) {
		var_0_object = true;
		IsLoaded(var_8_bool);
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = var_8_bool == 0; //@nz
		if(var_12_bool != 0) {
			var_13_bool = 0;
			func_795(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_889(var_14_object);
			RemoveActor(var_14_object);
		}
	} else {
		var_18_bool = var_6_string == "restore";
		if(var_18_bool == 0) goto Label_778;
		var_0_object = false;
	}
Label_778:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_795(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_889(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_747:
	Hold();
	goto Label_747;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj();
	var_8_object = var_19_object;
	func_804(var_18_bool, var_19_object);
	var_58_bool = var_18_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_59_int = 0;
	func_1214(var_59_int);
	@@var_14_object:SetNPCName(var_59_int);
	var_60_string = "";
	func_1216(var_60_string);
	@@var_14_object:SetPhoto(var_60_string);
	var_61_int = 0;
	func_1165(var_61_int);
	@@var_14_object:SetPlayerName(var_61_int);
	IsOverrideActive(var_15_bool);
	var_69_bool = var_15_bool;
	if(var_69_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	DoDialog(var_14_object);
	var_70_object = Obj(); var_71_object = Obj();
	var_8_object = var_70_object;
	var_14_object = var_71_object;
	TaskCall(1);
	func_63(var_72_object, var_73_object, var_74_string, var_75_bool, var_70_object, var_71_object);
	TaskReturn();
	@@var_14_object:IsDialogEnd(var_17_bool);
	
Label_45:
	var_165_bool = var_17_bool == 0; //@nz
	if(var_165_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_45;
	}
	var_8_object = Obj();
	func_860();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_905(var_80_int, var_81_string)
{
	var_82_int = 0; var_83_int = 0;
	GetVariable(var_81_string, var_83_int);
	var_83_int = var_80_int;
	return 2;
}


func_1034(var_78_bool)
{
	var_80_int = 0; var_81_string = "";
	func_905(var_80_int, "d5q02");
	var_85_bool = var_80_int == (int)1;
	if(var_85_bool != 0) {
		var_78_bool = 1;
		return 0;
	}
	var_78_bool = 0;
	return 0;
}


func_1165(var_61_int)
{
	var_62_int = 0; var_63_int = 0;
	GetVariable("player", var_63_int);
	var_66_bool = var_63_int == (int)0;
	if(var_66_bool != 0) {
		var_61_int = 200001;
		return 2;
	EMIT "GOTO 0x49c";
	}
	var_68_bool = var_63_int == (int)1;
	if(var_68_bool != 0) {
		var_61_int = 200002;
		return 2;
	}
	var_61_int = 200003;
	return 2;
}


func_910(var_29_float)
{
	var_30_float = 0; var_31_float = 0;
	GetGameTime(var_31_float);
	var_31_float = var_29_float;
	return 2;
}


func_915(var_61_object)
{
	Trace("money10000 is given");
	var_64_object = Obj(); var_65_string = ""; var_66_int = 0;
	var_61_object = var_64_object;
	func_797(var_64_object, "money", (int)10000);
	return 0;
}


func_1046(var_86_bool)
{
	var_88_int = 0; var_89_string = "";
	func_905(var_88_int, "ood5Gorbun1");
	var_91_bool = var_88_int == (int)0;
	if(var_91_bool != 0) {
		var_86_bool = 1;
		return 0;
	}
	var_86_bool = 0;
	return 0;
}


func_795(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_1023(var_92_object)
{
	Trace("money 50000 is given");
	var_95_object = Obj(); var_96_string = ""; var_97_int = 0;
	var_92_object = var_95_object;
	func_797(var_95_object, "money", (int)50000);
	return 0;
}


func_797(var_64_object, var_65_string, var_66_int)
{
	var_67_int = 0; var_68_int = 0;
	@@var_64_object:GetProperty(var_65_string, var_68_int);
	var_69_int = var_68_int + var_66_int;
	@@var_64_object:SetProperty(var_65_string, var_69_int);
	return 2;
}


func_1182()
{
	var_32_object = Obj(); var_33_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_33_object, (int)150, (int)2, (int)15356);
	var_38_bool = 0; var_39_object = Obj(); var_40_int = 0;
	var_33_object = var_39_object;
	func_1119(var_38_bool, var_39_object, (int)148);
	return 2;
}
EMIT "Stack[-1] = 0";


func_926()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_1058(var_128_bool)
{
	var_130_int = 0; var_131_string = "";
	func_905(var_130_int, "d5q02");
	var_133_bool = var_130_int == (int)4;
	if(var_133_bool != 0) {
		var_128_bool = 1;
		return 0;
	}
	var_128_bool = 0;
	return 0;
}


func_804(var_18_bool, var_19_object)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0;
	@@var_19_object:GetPosition(var_29_cvector);
	@@var_19_object:GetEyesHeight(var_28_float);
	var_36_float = GetByIndex(var_29_cvector, 1);
	var_36_float = var_36_float + var_28_float;
	SetByIndex(var_29_cvector, 1) = var_36_float;
	GetPosition(var_30_cvector);
	GetEyesHeight(var_28_float);
	var_37_float = GetByIndex(var_30_cvector, 1);
	var_37_float = var_37_float + var_28_float;
	SetByIndex(var_30_cvector, 1) = var_37_float;
	var_31_cvector = var_29_cvector - var_30_cvector;
	var_38_float = GetByIndex(var_31_cvector, 1);
	SetByIndex(var_31_cvector, 1) = (float)0;
	var_39_int = var_31_cvector | var_31_cvector;
	var_40_float = sqrt(var_39_int);
	var_31_cvector = var_31_cvector / var_40_float;
	var_32_cvector = -var_31_cvector;
	var_42_float = var_31_cvector * (int)70;
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0);
	var_44_cvector = var_32_cvector ^ CVector(0.0, 1.0, 0.0);
	func_895(var_43_cvector, var_44_cvector);
	var_52_float = var_43_cvector * (int)25;
	var_53_int = var_42_float + var_52_float;
	var_33_cvector = var_53_int - CVector(0.0, 10.0, 0.0);
	var_34_cvector = var_30_cvector + var_33_cvector;
	IsOverrideActive(var_35_bool);
	var_55_bool = var_35_bool;
	if(var_55_bool != 0) {
		var_18_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_34_cvector, var_32_cvector);
	var_56_float = GetByIndex(var_33_cvector, 0);
	var_57_float = GetByIndex(var_33_cvector, 2);
	Rotate(var_56_float, var_57_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 16;
}


func_932()
{
	var_14_object = Obj(); var_15_object = Obj();
	SetVariable("d5q02", (int)2);
	func_1148(Obj());
	var_18_object = var_15_object;
	var_29_float = 0;
	func_910(var_29_float);
	@@var_15_object:AddMark("d5q02GorbunFindTheDaughter", "pt_map_gorbun", (int)0, (int)15362, var_29_float);
	func_1182();
	return 2;
}
EMIT "Stack[-1] = 0";


func_1070(var_134_bool)
{
	var_136_int = 0; var_137_string = "";
	func_905(var_136_int, "d5q02KnowNudeIsDead");
	var_139_bool = var_136_int == (int)1;
	if(var_139_bool != 0) {
		var_134_bool = 1;
		return 0;
	}
	var_134_bool = 0;
	return 0;
}


func_1198()
{
	var_121_object = Obj(); var_122_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_122_object, (int)153, (int)2, (int)15359);
	var_127_bool = 0; var_128_object = Obj(); var_129_int = 0;
	var_122_object = var_128_object;
	func_1119(var_127_bool, var_128_object, (int)148);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1082(var_153_bool)
{
	var_155_int = 0; var_156_string = "";
	func_905(var_155_int, "ood5Gorbun2");
	var_158_bool = var_155_int == (int)0;
	if(var_158_bool != 0) {
		var_153_bool = 1;
		return 0;
	}
	var_153_bool = 0;
	return 0;
}


func_955()
{
	SetVariable("ood5Gorbun1", (int)1);
	return 0;
}


func_1214(var_59_int)
{
	var_59_int = 12583;
	return 0;
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_70_object, var_71_object)
{
	var_0_object = var_71_object;
	var_1_object = var_70_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_77_bool = 0;
		var_77_bool = 0;
		var_78_bool = 0; var_79_object = Obj();
		var_79_object = var_1_object;
		func_1034(var_79_object);
		if(var_78_bool != 0) {
			var_86_bool = 0; var_87_object = Obj();
			var_87_object = var_1_object;
			func_1046(var_87_object);
			if(var_86_bool != 0) {
				var_77_bool = 1;
			}
		}
		if(var_77_bool != 0) {
			var_92_string = "";
			func_203(var_71_object, "Neutral");
			@@@var_0_object:SetMessage((int)11917);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11918, (int)13135, (int)13134);
		} else {
				var_119_string = "";
				func_203(var_71_object, "Neutral");
				@@@var_0_object:SetMessage((int)11935);
				@@@var_0_object:ClearReplies();
				var_121_bool = 0; var_122_object = Obj();
				var_122_object = var_1_object;
				func_1034(var_122_object);
				if(var_121_bool != 0) {
					@@@var_0_object:AddReply((int)12489, (int)13660, (int)13658);
				}
				var_126_bool = 0;
				var_126_bool = 0;
				var_127_bool = 0;
				var_127_bool = 0;
				var_128_bool = 0; var_129_object = Obj();
				var_129_object = var_1_object;
				func_1058(var_129_object);
				if(var_128_bool != 0) {
					var_134_bool = 0; var_135_object = Obj();
					var_135_object = var_1_object;
					func_1070(var_135_object);
					var_140_bool = var_134_bool == 0; //@nz
					if(var_140_bool != 0) {
						var_127_bool = 1;
					}
				}
				if(var_127_bool != 0) {
					var_141_bool = 0; var_142_object = Obj();
					var_142_object = var_1_object;
					func_1094(var_142_object);
					if(var_141_bool != 0) {
						var_126_bool = 1;
					}
				}
				if(var_126_bool != 0) {
					@@@var_0_object:AddReply((int)11936, (int)13155, (int)13153);
				}
				var_150_bool = 0;
				var_150_bool = 0;
				var_151_bool = 0; var_152_object = Obj();
				var_152_object = var_1_object;
				func_1070(var_152_object);
				if(var_151_bool != 0) {
					var_153_bool = 0; var_154_object = Obj();
					var_154_object = var_1_object;
					func_1082(var_154_object);
					if(var_153_bool != 0) {
						var_150_bool = 1;
					}
				}
				if(var_150_bool != 0) {
					@@@var_0_object:AddReply((int)11937, (int)13156, (int)13154);
				}
				@@@var_0_object:AddReply((int)12490, (int)-1, (int)13659);
				goto Label_173;
		}
	}
Label_173:
	var_111_bool = 0;
	func_1218(var_111_bool);
	if(var_111_bool != 0) {

	Label_177:
		lshWaitForAnimEnd();
		var_112_string = var_3_string;
		if(var_112_string != 0) {
		} else {
			var_113_string = "";
			var_113_string = var_2_object;
			func_864(var_113_string);
			goto Label_177;
	}
		PlayAnimation("all", "idle");

	Label_192:
		WaitForAnimEnd();
		var_116_string = var_3_string;
		if(var_116_string != 0) {
			goto Label_202;
		}
		PlayAnimation("all", "idle");
		goto Label_192;

	}
	goto Label_202;
	
Label_202:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x43";


func_1216(var_60_string)
{
	var_60_string = "ui/NPC_Black.png";
	return 0;
}


func_961()
{
	var_104_object = Obj(); var_105_object = Obj(); var_106_object = Obj(); var_107_object = Obj();
	SetVariable("d5q02", (int)1000);
	func_1148(Obj());
	var_110_object = var_106_object;
	@@var_106_object:FindMark(var_107_object, "d5q02AnnaGotoGorbun");
	var_112_object = var_107_object;
	if(var_112_object != 0) {
		@@var_107_object:Remove();
	}
	@@var_106_object:FindMark(var_107_object, "d5q02AnnaGotoGorbunSelf");
	var_114_object = var_107_object;
	if(var_114_object != 0) {
		@@var_107_object:Remove();
	}
	@@var_106_object:FindMark(var_107_object, "d5q02AnnaGotoKabak");
	var_116_object = var_107_object;
	if(var_116_object != 0) {
		@@var_107_object:Remove();
	}
	@@var_106_object:FindMark(var_107_object, "d5q02GorbunFindTheDaughter");
	var_118_object = var_107_object;
	if(var_118_object != 0) {
		@@var_107_object:Remove();
	}
	@@var_106_object:FindMark(var_107_object, "d5q02NudeMeeting");
	var_120_object = var_107_object;
	if(var_120_object != 0) {
		@@var_107_object:Remove();
	}
	func_1198();
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1218(var_93_bool)
{
	var_93_bool = 0;
	return 0;
}


func_1094(var_141_bool)
{
	var_143_int = 0; var_144_string = "";
	func_905(var_143_int, "ood5Gorbun3");
	var_146_bool = var_143_int == (int)0;
	if(var_146_bool != 0) {
		var_141_bool = 1;
		return 0;
	}
	var_141_bool = 0;
	return 0;
}


func_203(var_2_object, var_92_string)
{
	var_93_bool = 0;
	func_1218(var_93_bool);
	var_94_bool = var_93_bool == 0; //@nz
	if(var_94_bool != 0) {
		return 0;
	}
	var_95_bool = var_92_string == var_2_object;
	if(var_95_bool != 0) {
		return 0;
	}
	var_96_string = "";
	var_92_string = var_96_string;
	func_864(var_96_string);
	var_2_object = var_92_string;
	return 0;
}


func_1106(var_47_object)
{
	var_48_object = Obj(); var_49_object = Obj();
	GetDiaryRoot(var_49_object);
	var_50_bool = var_49_object == 0; //@nz
	if(var_50_bool != 0) {
		Trace("Can't retrieve diary root");
		var_47_object = 0;
		return 2;
	}
	var_49_object = var_47_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_860()
{
	CameraSwitchToNormal();
	return 0;
}


func_1119(var_38_bool, var_39_object, var_40_int)
{
	var_41_object = Obj(); var_42_object = Obj(); var_43_int = 0; var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0;
	func_1106(Obj());
	var_47_object = var_44_object;
	@@var_44_object:Find(var_40_int, var_45_object);
	var_52_bool = var_45_object == 0; //@nz
	if(var_52_bool != 0) {
		var_54_int = "Can't find diary parent with id: " + var_40_int;
		Trace(var_54_int);
		var_38_bool = 0;
		return 6;
	}
	@@var_45_object:AddChild(var_39_object);
	SetVariable("player_diary", (int)1);
	@@var_39_object:GetCategory(var_46_int);
	SetDiarySection(var_46_int);
	var_38_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_864(var_96_string)
{
	var_97_float = 0; var_98_float = 0; var_99_float = 0; var_100_float = 0;
	var_102_int = "playing " + var_96_string;
	Trace(var_102_int);
	lshGetAnimTimes(var_96_string, var_99_float, var_100_float);
	lshPlayAnimation(var_99_float, var_100_float);
	var_104_int = "start: " + var_99_float;
	Trace(var_104_int);
	var_106_int = "end: " + var_100_float;
	Trace(var_106_int);
	return 4;
}


func_882()
{
	var_9_bool = 0;
	func_1218(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1011()
{
	SetVariable("ood5Gorbun2", (int)1);
	return 0;
}


func_889(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1148(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj();
	GetMainOutdoorScene(var_21_object);
	var_23_bool = var_21_object == 0; //@ne
	if(var_23_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_22_object = 0;
		var_22_object = var_18_object;
		return 4;
	}
	@@var_21_object:GetMap(var_22_object);
	var_22_object = var_18_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1017()
{
	SetVariable("ood5Gorbun3", (int)1);
	return 0;
}


func_895(var_43_cvector, var_44_cvector)
{
	var_46_float = 0; var_47_float = 0;
	var_48_int = var_44_cvector | var_44_cvector;
	var_47_float = sqrt(var_48_int);
	var_49_float = 9.999999974752427e-07;
	var_50_bool = var_47_float < var_49_float;
	if(var_50_bool != 0) {
		var_43_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_43_cvector = var_44_cvector / var_47_float;
	return 2;
}


