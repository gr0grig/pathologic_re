// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,GetInvItemProperty/3,CreateInvItem/1,FindActor/2,Trigger/2,TriggerWorld/2,SetVariable/2,GetInvItemByName/2,GetDiaryRoot/1,SetDiarySection/1,CreateDiaryEntry/4
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:playsound|W:giveitem|W:d7q01|W:mreport is given|W:d7q01_mreport|W:ood7MBirdmask1|W:quest_d7_01|W:sobor_teleport|A:GetItemCount|W:bird_mask|W:bird_balahon|A:GetItem|A:IsItemSelected|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:player|W:Adding diary entry|W:ui/NPC_Black.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x288
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xce vars=int,int
// @TASK_2: vars= params=0
// @EVENT_0: op=0x28c vars=object
// @PE: 0x3f,0xbe,0xce,0x28c,0x2cc,0x31e,0x324,0x32d,0x338,0x33e,0x345,0x351,0x35b

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	if((int)1 != 0) {
		func_738();
		var_10_bool = var_6_int == (int)14438;
		if(var_10_bool != 0) {
			var_11_object = Obj(); var_12_object = Obj();
			var_11_object = var_1_object;
			var_12_object = var_0_object;
			func_824();
			var_15_object = Obj(); var_16_object = Obj();
			var_15_object = var_1_object;
			var_16_object = var_0_object;
			func_813(var_16_object);
			var_34_object = Obj(); var_35_object = Obj();
			var_34_object = var_1_object;
			var_35_object = var_0_object;
			func_798();
		}
		var_39_bool = var_6_int == (int)14485;
		if(var_39_bool != 0) {
			var_40_object = Obj(); var_41_object = Obj();
			var_40_object = var_1_object;
			var_41_object = var_0_object;
			func_804();
			var_69_object = Obj(); var_70_object = Obj();
			var_69_object = var_1_object;
			var_70_object = var_0_object;
			func_830();
		}
		var_78_bool = var_6_int == (int)14446;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_804();
			var_81_object = Obj(); var_82_object = Obj();
			var_81_object = var_1_object;
			var_82_object = var_0_object;
			func_830();
		}
		var_84_bool = var_6_int == (int)16565;
		if(var_84_bool != 0) {
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_804();
			var_87_object = Obj(); var_88_object = Obj();
			var_87_object = var_1_object;
			var_88_object = var_0_object;
			func_830();
		}
		var_90_bool = var_6_int == (int)16566;
		if(var_90_bool != 0) {
			var_91_object = Obj(); var_92_object = Obj();
			var_91_object = var_1_object;
			var_92_object = var_0_object;
			func_804();
			var_93_object = Obj(); var_94_object = Obj();
			var_93_object = var_1_object;
			var_94_object = var_0_object;
			func_830();
		}
		var_96_bool = var_5_int == (int)14435;
		if(var_96_bool != 0) {
			var_97_bool = 0; var_98_object = Obj();
			var_98_object = var_1_object;
			func_859(var_98_object);
			if(var_97_bool != 0) {
				var_105_string = "";
				func_190(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)13212);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)13213, (int)14437, (int)14436);
				return 0;
			}
			var_124_bool = 0;
			var_124_bool = 0;
			var_125_bool = 0; var_126_object = Obj();
			var_126_object = var_1_object;
			func_837(var_126_object);
			if(var_125_bool != 0) {
				var_131_bool = 0; var_132_object = Obj();
				var_132_object = var_1_object;
				func_849(var_131_bool, var_132_object);
				if(var_131_bool != 0) {
					var_124_bool = 1;
				}
			}
			if(var_124_bool != 0) {
				var_169_string = "";
				func_190(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)13216);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)13217, (int)14441, (int)14440);
				@@@var_0_object:AddReply((int)13220, (int)14444, (int)14443);
				@@@var_0_object:AddReply((int)13224, (int)14441, (int)14447);
				return 0;
			}
			var_180_bool = 0; var_181_object = Obj();
			var_181_object = var_1_object;
			func_837(var_181_object);
			if(var_180_bool != 0) {
				var_182_string = "";
				func_190(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)13231);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)13232, (int)14456, (int)14455);
				@@@var_0_object:AddReply((int)13248, (int)16562, (int)14473);
				@@@var_0_object:AddReply((int)13249, (int)-1, (int)14475);
				return 0;
			}
		}
		var_194_bool = var_5_int == (int)14456;
		if(var_194_bool != 0) {
			var_195_string = "";
			func_190(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13233);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13234, (int)14458, (int)14457);
			@@@var_0_object:AddReply((int)13240, (int)14469, (int)14463);
			@@@var_0_object:AddReply((int)13244, (int)14464, (int)14468);
			return 0;
		}
		var_207_bool = var_5_int == (int)14464;
		if(var_207_bool != 0) {
			var_208_string = "";
			func_190(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13241);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13242, (int)-1, (int)14465);
			@@@var_0_object:AddReply((int)13243, (int)16562, (int)14466);
			return 0;
		}
		var_217_bool = var_5_int == (int)14469;
		if(var_217_bool != 0) {
			var_218_string = "";
			func_190(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13245);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13246, (int)-1, (int)14470);
			@@@var_0_object:AddReply((int)13247, (int)16562, (int)14471);
			return 0;
		}
		var_227_bool = var_5_int == (int)14458;
		if(var_227_bool != 0) {
			var_228_string = "";
			func_190(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13235);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13236, (int)16562, (int)14459);
			@@@var_0_object:AddReply((int)13239, (int)-1, (int)14462);
			return 0;
		}
		var_237_bool = var_5_int == (int)16562;
		if(var_237_bool != 0) {
			var_238_string = "";
			func_190(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)15419);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15420, (int)-1, (int)16565);
			@@@var_0_object:AddReply((int)15421, (int)-1, (int)16566);
			return 0;
		}
		var_247_bool = var_5_int == (int)14444;
		if(var_247_bool != 0) {
			var_248_string = "";
			func_190(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13221);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13222, (int)-1, (int)14445);
			@@@var_0_object:AddReply((int)13223, (int)-1, (int)14446);
			return 0;
		}
		var_257_bool = var_5_int == (int)14441;
		if(var_257_bool != 0) {
			var_258_string = "";
			func_190(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13218);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13219, (int)-1, (int)14442);
			@@@var_0_object:AddReply((int)13259, (int)-1, (int)14485);
			return 0;
		}
		var_267_bool = var_5_int == (int)14437;
		if(var_267_bool != 0) {
			var_268_string = "";
			func_190(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13214);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13250, (int)14478, (int)14476);
			@@@var_0_object:AddReply((int)13251, (int)14482, (int)14477);
			return 0;
		}
		var_277_bool = var_5_int == (int)14482;
		if(var_277_bool != 0) {
			var_278_string = "";
			func_190(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13256);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13257, (int)14484, (int)14483);
			return 0;
		}
		var_284_bool = var_5_int == (int)14484;
		if(var_284_bool != 0) {
			var_285_string = "";
			func_190(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13258);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13215, (int)-1, (int)14438);
			return 0;
		}
		var_291_bool = var_5_int == (int)14478;
		if(var_291_bool != 0) {
			var_292_string = "";
			func_190(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13252);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13253, (int)14480, (int)14479);
			return 0;
		}
		var_298_bool = var_5_int == (int)14480;
		if(var_298_bool != 0) {
			var_299_string = "";
			func_190(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13254);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13255, (int)-1, (int)14481);
			return 0;
		}
		var_3_string = true;
		var_304_bool = 0;
		func_998(var_304_bool);
		if(var_304_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xcf";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_object = Obj();
	var_5_object = var_7_object;
	TaskCall(0);
	func_0(var_8_object, var_6_int, var_7_object);
	TaskReturn();
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	
Label_648:
	Hold();
	goto Label_648;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_6_int, var_7_object)
{
	var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_bool = 0;
	var_0_object = var_7_object;
	var_17_bool = 0; var_18_object = Obj();
	var_7_object = var_18_object;
	func_660(var_17_bool, var_18_object);
	var_57_bool = var_17_bool == 0; //@nz
	if(var_57_bool != 0) {
		var_6_int = -2;
		return 8;
	}
	CreateDialog(var_13_object);
	var_58_int = 0;
	func_994(var_58_int);
	@@var_13_object:SetNPCName(var_58_int);
	var_59_string = "";
	func_996(var_59_string);
	@@var_13_object:SetPhoto(var_59_string);
	var_60_int = 0;
	func_961(var_60_int);
	@@var_13_object:SetPlayerName(var_60_int);
	IsOverrideActive(var_14_bool);
	var_68_bool = var_14_bool;
	if(var_68_bool != 0) {
		var_6_int = -2;
		return 8;
	}
	DoDialog(var_13_object);
	var_69_object = Obj(); var_70_object = Obj();
	var_7_object = var_69_object;
	var_13_object = var_70_object;
	TaskCall(1);
	func_63(var_71_object, var_72_object, var_73_string, var_74_bool, var_69_object, var_70_object);
	TaskReturn();
	@@var_13_object:IsDialogEnd(var_16_bool);
	
Label_45:
	var_180_bool = var_16_bool == 0; //@nz
	if(var_180_bool != 0) {
		sync();
		@@var_13_object:IsDialogEnd(var_16_bool);
		goto Label_45;
	}
	var_7_object = Obj();
	func_716();
	StopDialog(var_13_object);
	@@var_13_object:GetReturnValue((int)-1);
	var_15_int = var_6_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_961(var_60_int)
{
	var_61_int = 0; var_62_int = 0;
	GetVariable("player", var_62_int);
	var_65_bool = var_62_int == (int)0;
	if(var_65_bool != 0) {
		var_60_int = 200001;
		return 2;
	EMIT "GOTO 0x3d0";
	}
	var_67_bool = var_62_int == (int)1;
	if(var_67_bool != 0) {
		var_60_int = 200002;
		return 2;
	}
	var_60_int = 200003;
	return 2;
}


func_773(var_18_object, var_19_string, var_20_int)
{
	var_21_object = Obj(); var_22_object = Obj();
	CreateInvItem(var_22_object);
	@@var_22_object:SetItemName(var_19_string);
	var_23_object = Obj(); var_24_object = Obj(); var_25_int = 0;
	var_18_object = var_23_object;
	var_22_object = var_24_object;
	var_20_int = var_25_int;
	func_760(var_23_object, var_24_object, var_25_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_837(var_112_bool)
{
	var_114_int = 0; var_115_string = "";
	func_755(var_114_int, "d7q01");
	var_117_bool = var_114_int == (int)2;
	if(var_117_bool != 0) {
		var_112_bool = 1;
		return 0;
	}
	var_112_bool = 0;
	return 0;
}


func_716()
{
	CameraSwitchToNormal();
	return 0;
}


func_720(var_88_string)
{
	var_89_float = 0; var_90_float = 0; var_91_float = 0; var_92_float = 0;
	var_94_int = "playing " + var_88_string;
	Trace(var_94_int);
	lshGetAnimTimes(var_88_string, var_91_float, var_92_float);
	lshPlayAnimation(var_91_float, var_92_float);
	var_96_int = "start: " + var_91_float;
	Trace(var_96_int);
	var_98_int = "end: " + var_92_float;
	Trace(var_98_int);
	return 4;
}


func_849(var_118_bool, var_119_object)
{
	var_120_bool = 0; var_121_object = Obj();
	var_119_object = var_121_object;
	func_871(var_120_bool, var_121_object);
	if(var_120_bool != 0) {
		var_118_bool = 1;
		return 0;
	}
	var_118_bool = 0;
	return 0;
}


func_786(var_71_bool, var_72_string, var_73_string)
{
	var_74_object = Obj(); var_75_object = Obj();
	FindActor(var_75_object, var_72_string);
	var_76_bool = var_75_object == 0; //@ne
	if(var_76_bool != 0) {
		var_71_bool = 0;
		return 2;
	}
	Trigger(var_75_object, var_73_string);
	var_71_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_978()
{
	var_44_object = Obj(); var_45_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_45_object, (int)169, (int)1, (int)15418);
	var_50_bool = 0; var_51_object = Obj(); var_52_int = 0;
	var_45_object = var_51_object;
	func_932(var_50_bool, var_51_object, (int)165);
	return 2;
}
EMIT "Stack[-1] = 0";


func_660(var_17_bool, var_18_object)
{
	var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0;
	@@var_18_object:GetPosition(var_28_cvector);
	@@var_18_object:GetEyesHeight(var_27_float);
	var_35_float = GetByIndex(var_28_cvector, 1);
	var_35_float = var_35_float + var_27_float;
	SetByIndex(var_28_cvector, 1) = var_35_float;
	GetPosition(var_29_cvector);
	GetEyesHeight(var_27_float);
	var_36_float = GetByIndex(var_29_cvector, 1);
	var_36_float = var_36_float + var_27_float;
	SetByIndex(var_29_cvector, 1) = var_36_float;
	var_30_cvector = var_28_cvector - var_29_cvector;
	var_37_float = GetByIndex(var_30_cvector, 1);
	SetByIndex(var_30_cvector, 1) = (float)0;
	var_38_int = var_30_cvector | var_30_cvector;
	var_39_float = sqrt(var_38_int);
	var_30_cvector = var_30_cvector / var_39_float;
	var_31_cvector = -var_30_cvector;
	var_41_float = var_30_cvector * (int)70;
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	var_43_cvector = var_31_cvector ^ CVector(0.0, 1.0, 0.0);
	func_745(var_42_cvector, var_43_cvector);
	var_51_float = var_42_cvector * (int)25;
	var_52_int = var_41_float + var_51_float;
	var_32_cvector = var_52_int - CVector(0.0, 10.0, 0.0);
	var_33_cvector = var_29_cvector + var_32_cvector;
	IsOverrideActive(var_34_bool);
	var_54_bool = var_34_bool;
	if(var_54_bool != 0) {
		var_17_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_33_cvector, var_31_cvector);
	var_55_float = GetByIndex(var_32_cvector, 0);
	var_56_float = GetByIndex(var_32_cvector, 2);
	Rotate(var_55_float, var_56_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_17_bool = 1;
	return 16;
}


func_919(var_59_object)
{
	var_60_object = Obj(); var_61_object = Obj();
	GetDiaryRoot(var_61_object);
	var_62_bool = var_61_object == 0; //@nz
	if(var_62_bool != 0) {
		Trace("Can't retrieve diary root");
		var_59_object = 0;
		return 2;
	}
	var_61_object = var_59_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_859(var_76_bool)
{
	var_78_int = 0; var_79_string = "";
	func_755(var_78_int, "ood7MBirdmask1");
	var_83_bool = var_78_int == (int)0;
	if(var_83_bool != 0) {
		var_76_bool = 1;
		return 0;
	}
	var_76_bool = 0;
	return 0;
}


func_798()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_994(var_58_int)
{
	var_58_int = 4029;
	return 0;
}


func_738()
{
	var_8_bool = 0;
	func_998(var_8_bool);
	if(var_8_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_804()
{
	SetVariable("d7q01", (int)3);
	func_978();
	return 0;
}


func_932(var_50_bool, var_51_object, var_52_int)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0; var_56_object = Obj(); var_57_object = Obj(); var_58_int = 0;
	func_919(Obj());
	var_59_object = var_56_object;
	@@var_56_object:Find(var_52_int, var_57_object);
	var_64_bool = var_57_object == 0; //@nz
	if(var_64_bool != 0) {
		var_66_int = "Can't find diary parent with id: " + var_52_int;
		Trace(var_66_int);
		var_50_bool = 0;
		return 6;
	}
	@@var_57_object:AddChild(var_51_object);
	SetVariable("player_diary", (int)1);
	@@var_51_object:GetCategory(var_58_int);
	SetDiarySection(var_58_int);
	var_50_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_996(var_59_string)
{
	var_59_string = "ui/NPC_Black.png";
	return 0;
}


func_998(var_85_bool)
{
	var_85_bool = 0;
	return 0;
}


func_871(var_120_bool, var_121_object)
{
	var_122_int = 0; var_123_int = 0; var_124_int = 0; var_125_bool = 0; var_126_bool = 0; var_127_int = 0; var_128_object = Obj(); var_129_int = 0; var_130_bool = 0; var_131_bool = 0; var_132_int = 0; var_133_int = 0; var_134_int = 0; var_135_bool = 0; var_136_bool = 0; var_137_int = 0; var_138_object = Obj(); var_139_int = 0; var_140_bool = 0; var_141_bool = 0;
	@@var_121_object:GetItemCount(var_132_int, (int)1);
	GetInvItemByName(var_133_int, "bird_mask");
	GetInvItemByName(var_134_int, "bird_balahon");
	var_135_bool = 0;
	var_136_bool = 0;
	var_137_int = 0;
	
Label_884:
	var_145_bool = var_137_int < var_132_int;
	if(var_145_bool != 0) {
		@@var_121_object:GetItem(var_138_object, var_137_int, (int)1);
		@@var_138_object:GetItemID(var_139_int);
		var_147_bool = var_139_int == var_133_int;
		if(var_147_bool != 0) {
			@@var_121_object:IsItemSelected(var_140_bool, var_137_int, (int)1);
			var_149_bool = var_140_bool;
			if(var_149_bool != 0) {
				var_135_bool = 1;
			}
		} else {
			var_151_bool = var_139_int == var_134_int;
			if(var_151_bool == 0) goto Label_908;
			@@var_121_object:IsItemSelected(var_141_bool, var_137_int, (int)1);
			var_153_bool = var_141_bool;
			if(var_153_bool == 0) goto Label_908;
	}
		var_120_bool = 0;
		var_154_bool = var_135_bool;
		if(var_154_bool != 0) {
			var_155_bool = (bool)1;
			if(var_155_bool != 0) {
				var_120_bool = 1;
			}
		}
		var_138_object = 0;
		var_137_int = var_137_int + (int)1;
		goto Label_884;
	}
	return 20;
	
}


func_745(var_42_cvector, var_43_cvector)
{
	var_45_float = 0; var_46_float = 0;
	var_47_int = var_43_cvector | var_43_cvector;
	var_46_float = sqrt(var_47_int);
	var_48_float = 9.999999974752427e-07;
	var_49_bool = var_46_float < var_48_float;
	if(var_49_bool != 0) {
		var_42_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_42_cvector = var_43_cvector / var_46_float;
	return 2;
}


func_813(var_15_object)
{
	Trace("mreport is given");
	var_18_object = Obj(); var_19_string = ""; var_20_int = 0;
	var_15_object = var_18_object;
	func_773(var_18_object, "d7q01_mreport", (int)1);
	return 0;
}


func_760(var_23_object, var_24_object, var_25_int)
{
	var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0;
	@@var_24_object:GetItemID(var_29_int);
	GetInvItemProperty(var_30_int, var_29_int, "Category");
	@@var_23_object:AddItem(var_31_bool, var_24_object, var_30_int, var_25_int);
	var_33_bool = var_31_bool == 0; //@nz
	if(var_33_bool != 0) {
		@@var_23_object:DropItems(var_24_object, var_25_int);
	}
	return 6;
}


func_755(var_78_int, var_79_string)
{
	var_80_int = 0; var_81_int = 0;
	GetVariable(var_79_string, var_81_int);
	var_81_int = var_78_int;
	return 2;
}


func_824()
{
	SetVariable("ood7MBirdmask1", (int)1);
	return 0;
}


func_190(var_2_object, var_84_string)
{
	var_85_bool = 0;
	func_998(var_85_bool);
	var_86_bool = var_85_bool == 0; //@nz
	if(var_86_bool != 0) {
		return 0;
	}
	var_87_bool = var_84_string == var_2_object;
	if(var_87_bool != 0) {
		return 0;
	}
	var_88_string = "";
	var_84_string = var_88_string;
	func_720(var_88_string);
	var_2_object = var_84_string;
	return 0;
}


func_830()
{
	var_71_bool = 0; var_72_string = ""; var_73_string = "";
	func_786(var_71_bool, "quest_d7_01", "sobor_teleport");
	return 0;
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_69_object, var_70_object)
{
	var_0_object = var_70_object;
	var_1_object = var_69_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_76_bool = 0; var_77_object = Obj();
		var_77_object = var_1_object;
		func_859(var_77_object);
		if(var_76_bool != 0) {
			var_84_string = "";
			func_190(var_70_object, "Neutral");
			@@@var_0_object:SetMessage((int)13212);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13213, (int)14437, (int)14436);
		} else {
				var_111_bool = 0;
				var_111_bool = 0;
				var_112_bool = 0; var_113_object = Obj();
				var_113_object = var_1_object;
				func_837(var_113_object);
				if(var_112_bool != 0) {
					var_118_bool = 0; var_119_object = Obj();
					var_119_object = var_1_object;
					func_849(var_118_bool, var_119_object);
					if(var_118_bool != 0) {
						var_111_bool = 1;
					}
				}
				if(var_111_bool != 0) {
					var_156_string = "";
					func_190(var_70_object, "Neutral");
					@@@var_0_object:SetMessage((int)13216);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)13217, (int)14441, (int)14440);
					@@@var_0_object:AddReply((int)13220, (int)14444, (int)14443);
					@@@var_0_object:AddReply((int)13224, (int)14441, (int)14447);
					goto Label_160;
				}
				var_167_bool = 0; var_168_object = Obj();
				var_168_object = var_1_object;
				func_837(var_168_object);
				if(var_167_bool != 0) {
					var_169_string = "";
					func_190(var_70_object, "Neutral");
					@@@var_0_object:SetMessage((int)13231);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)13232, (int)14456, (int)14455);
					@@@var_0_object:AddReply((int)13248, (int)16562, (int)14473);
					@@@var_0_object:AddReply((int)13249, (int)-1, (int)14475);
					goto Label_160;
				}
				return 0;
		}
	}
Label_160:
	var_103_bool = 0;
	func_998(var_103_bool);
	if(var_103_bool != 0) {

	Label_164:
		lshWaitForAnimEnd();
		var_104_string = var_3_string;
		if(var_104_string != 0) {
		} else {
			var_105_string = "";
			var_105_string = var_2_object;
			func_720(var_105_string);
			goto Label_164;
	}
		PlayAnimation("all", "idle");

	Label_179:
		WaitForAnimEnd();
		var_108_string = var_3_string;
		if(var_108_string != 0) {
			goto Label_189;
		}
		PlayAnimation("all", "idle");
		goto Label_179;

	}
	goto Label_189;
	
Label_189:
	return 0;
	
}
EMIT "GOTO 0x43";


