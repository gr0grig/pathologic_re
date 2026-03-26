// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,GetVariable/2,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,Trigger/2,HasAnimation/3,SetVariable/2,TriggerWorld/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:ui/NPC_Citizen3.png|W:ui/NPC_Citizen3_b.png|W:oob2TravnikWife1|W:quest_b2_02|W:fail|W:b2q02|W:move_bride|W:white plet 3 is given|W:grass_white_plet|W:savyur 3 is given|W:grass_savyur|W:playsound|W:giveitem|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x1e2
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc6 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0x1eb vars=object
// @EVENT_7: op=0x220 vars=int
// @PE: 0x4a,0xb0,0xc6,0x1eb,0x1f6,0x220,0x237,0x399,0x39f,0x3a9,0x3b7,0x3c2,0x3cd,0x3d3,0x3df,0x3eb,0x3f7,0x403

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	if((int)1 != 0) {
		func_809();
		var_15_bool = var_11_object == (int)19375;
		if(var_15_bool != 0) {
			var_16_object = Obj(); var_17_object = Obj();
			var_16_object = var_1_object;
			var_17_object = var_0_object;
			func_921();
		}
		var_21_bool = var_11_object == (int)29121;
		if(var_21_bool != 0) {
			var_22_object = Obj(); var_23_object = Obj();
			var_22_object = var_1_object;
			var_23_object = var_0_object;
			func_962(var_23_object);
			var_46_object = Obj(); var_47_object = Obj();
			var_46_object = var_1_object;
			var_47_object = var_0_object;
			func_951(var_47_object);
			var_52_object = Obj(); var_53_object = Obj();
			var_52_object = var_1_object;
			var_53_object = var_0_object;
			func_973();
			var_56_object = Obj(); var_57_object = Obj();
			var_56_object = var_1_object;
			var_57_object = var_0_object;
			func_927();
		}
		var_88_bool = var_11_object == (int)29122;
		if(var_88_bool != 0) {
			var_89_object = Obj(); var_90_object = Obj();
			var_89_object = var_1_object;
			var_90_object = var_0_object;
			func_937();
		}
		var_105_bool = var_10_bool == (int)19374;
		if(var_105_bool != 0) {
			var_106_string = "";
			func_176(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)518265);
			@@@var_0_object:ClearReplies();
			var_124_bool = 0;
			var_124_bool = 0;
			var_125_bool = 0;
			var_125_bool = 0;
			var_126_bool = 0;
			var_126_bool = 0;
			var_127_bool = 0; var_128_object = Obj();
			var_128_object = var_1_object;
			func_1027(var_128_object);
			if(var_127_bool != 0) {
				var_135_bool = 0; var_136_object = Obj();
				var_136_object = var_1_object;
				func_1003(var_136_object);
				var_141_bool = var_135_bool == 0; //@nz
				if(var_141_bool != 0) {
					var_126_bool = 1;
				}
			}
			if(var_126_bool != 0) {
				var_142_bool = 0; var_143_object = Obj();
				var_143_object = var_1_object;
				func_991(var_143_object);
				var_148_bool = var_142_bool == 0; //@nz
				if(var_148_bool != 0) {
					var_125_bool = 1;
				}
			}
			if(var_125_bool != 0) {
				var_149_bool = 0; var_150_object = Obj();
				var_150_object = var_1_object;
				func_1015(var_150_object);
				if(var_149_bool != 0) {
					var_124_bool = 1;
				}
			}
			if(var_124_bool != 0) {
				@@@var_0_object:AddReply((int)518266, (int)20687, (int)19375);
			}
			var_158_bool = 0; var_159_object = Obj();
			var_159_object = var_1_object;
			func_979(var_159_object);
			if(var_158_bool != 0) {
				@@@var_0_object:AddReply((int)527751, (int)29118, (int)29108);
			}
			@@@var_0_object:AddReply((int)518267, (int)-1, (int)19376);
			return 0;
		}
		var_171_bool = var_10_bool == (int)29118;
		if(var_171_bool != 0) {
			var_172_string = "";
			func_176(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)527761);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527762, (int)29120, (int)29119);
			return 0;
		}
		var_178_bool = var_10_bool == (int)29120;
		if(var_178_bool != 0) {
			var_179_string = "";
			func_176(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)527763);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527764, (int)-1, (int)29121);
			@@@var_0_object:AddReply((int)527861, (int)29203, (int)29205);
			return 0;
		}
		var_188_bool = var_10_bool == (int)29203;
		if(var_188_bool != 0) {
			var_189_string = "";
			func_176(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)527859);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)527765, (int)-1, (int)29122);
			return 0;
		}
		var_195_bool = var_10_bool == (int)20687;
		if(var_195_bool != 0) {
			var_196_string = "";
			func_176(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)519514);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519515, (int)20689, (int)20688);
			return 0;
		}
		var_202_bool = var_10_bool == (int)20689;
		if(var_202_bool != 0) {
			var_203_string = "";
			func_176(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)519516);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519517, (int)20691, (int)20690);
			return 0;
		}
		var_209_bool = var_10_bool == (int)20691;
		if(var_209_bool != 0) {
			var_210_string = "";
			func_176(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)519518);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519519, (int)20693, (int)20692);
			@@@var_0_object:AddReply((int)527857, (int)20693, (int)29200);
			return 0;
		}
		var_219_bool = var_10_bool == (int)20693;
		if(var_219_bool != 0) {
			var_220_string = "";
			func_176(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)519520);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519521, (int)20695, (int)20694);
			return 0;
		}
		var_226_bool = var_10_bool == (int)20695;
		if(var_226_bool != 0) {
			var_227_string = "";
			func_176(var_11_object, "Neutral");
			@@@var_0_object:SetMessage((int)519522);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)519523, (int)-1, (int)20696);
			@@@var_0_object:AddReply((int)527858, (int)-1, (int)29202);
			return 0;
		}
		var_3_string = true;
		var_235_bool = 0;
		func_919(var_235_bool);
		if(var_235_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc7";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_567(var_9_object, var_10_object);
	var_14_int = 0; var_15_object = Obj();
	var_10_object = var_15_object;
	TaskCall(0);
	func_0(var_16_object, var_14_int, var_15_object);
	TaskReturn();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_12_bool = var_10_int == (int)10;
	if(var_12_bool != 0) {
		var_13_bool = 0;
		func_529(var_8_bool, var_9_object, var_10_int, var_13_bool);
		if(var_13_bool != 0) {
			var_26_bool = var_2_object == 0; //@nz
			if(var_26_bool != 0) {
				var_27_object = Obj();
				var_27_object = var_4_bool;
				func_798(var_27_object);
				var_2_object = true;
			}
		} else {
			var_34_object = var_2_object;
			if(var_34_object == 0) goto Label_566;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_566:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_482:
	if((bool)1 != 0) {
		var_11_float = 0; var_12_float = 0;
		func_502(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
		goto Label_482;
	}
	return 0;
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0;
	var_0_object = var_15_object;
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0;
	var_15_object = var_26_object;
	func_680(var_25_bool, var_26_object, (float)70.0);
	var_72_bool = var_25_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	CreateDialog(var_21_object);
	var_73_int = 0;
	func_913(var_73_int);
	@@var_21_object:SetNPCName(var_73_int);
	var_74_int = 0;
	func_911(var_74_int);
	@@var_21_object:SetNPCDescription(var_74_int);
	var_75_string = "";
	func_915(var_75_string);
	@@var_21_object:SetPhoto(var_75_string);
	var_76_string = "";
	func_917(var_76_string);
	@@var_21_object:SetPhoto2(var_76_string);
	var_77_int = 0;
	func_1106(var_77_int);
	@@var_21_object:SetPlayerName(var_77_int);
	IsOverrideActive(var_22_bool);
	var_85_bool = var_22_bool;
	if(var_85_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	DoDialog(var_21_object);
	var_86_object = Obj(); var_87_object = Obj();
	var_15_object = var_86_object;
	var_21_object = var_87_object;
	TaskCall(1);
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object);
	TaskReturn();
	@@var_21_object:IsDialogEnd(var_24_bool);
	
Label_56:
	var_175_bool = var_24_bool == 0; //@nz
	if(var_175_bool != 0) {
		sync();
		@@var_21_object:IsDialogEnd(var_24_bool);
		goto Label_56;
	}
	var_15_object = Obj();
	func_749();
	StopDialog(var_21_object);
	@@var_21_object:GetReturnValue((int)-1);
	var_23_int = var_14_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1027(var_114_bool)
{
	var_116_int = 0; var_117_string = "";
	func_826(var_116_int, "oob2TravnikWife1");
	var_121_bool = var_116_int == (int)0;
	if(var_121_bool != 0) {
		var_114_bool = 1;
		return 0;
	}
	var_114_bool = 0;
	return 0;
}


func_911(var_74_int)
{
	var_74_int = 515596;
	return 0;
}


func_783(var_97_string, var_98_bool)
{
	var_101_bool = 0; var_102_float = 0; var_103_float = 0; var_104_bool = 0; var_105_float = 0; var_106_float = 0;
	lshHasAnimation(var_104_bool, var_97_string);
	var_107_bool = var_104_bool;
	if(var_107_bool != 0) {
		lshGetAnimTimes(var_97_string, var_105_float, var_106_float);
		lshPlayAnimation(var_105_float, var_106_float, var_98_bool);
	} else {
		var_109_int = "Can't find lsh animation : " + var_97_string;
		Trace(var_109_int);
	}
	return 6;
	
}


func_913(var_73_int)
{
	var_73_int = 514839;
	return 0;
}


func_529(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0;
	var_16_bool = var_4_bool == 0; //@ne
	if(var_16_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_17_float = 0; var_18_object = Obj();
	var_18_object = var_4_bool;
	func_667(var_17_float, var_18_object);
	var_15_float = sqrt(var_17_float);
	var_25_object = var_2_object;
	if(var_25_object != 0) {
		var_15_float = var_15_float - var_1_object;
	}
	var_13_bool = var_15_float < var_0_object;
	return 2;
}


func_915(var_75_string)
{
	var_75_string = "ui/NPC_Citizen3.png";
	return 0;
}


func_660(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_917(var_76_string)
{
	var_76_string = "ui/NPC_Citizen3_b.png";
	return 0;
}


func_662()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_919(var_68_bool)
{
	var_68_bool = 0;
	return 0;
}


func_1039()
{
	var_93_object = Obj(); var_94_object = Obj();
	CreateDiaryEntry(var_94_object, (int)458, (int)2, (int)527774);
	var_98_bool = 0; var_99_object = Obj(); var_100_int = 0;
	var_94_object = var_99_object;
	func_1078(var_98_bool, var_99_object, (int)456);
	return 2;
}
EMIT "Stack[-1] = 0";


func_921()
{
	SetVariable("oob2TravnikWife1", (int)1);
	return 0;
}


func_667(var_17_float, var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
	GetPosition(var_22_cvector);
	@@var_18_object:GetPosition(var_23_cvector);
	var_24_cvector = var_23_cvector - var_22_cvector;
	var_17_float = var_24_cvector | var_24_cvector;
	return 6;
}


func_1052()
{
	var_58_object = Obj(); var_59_object = Obj();
	CreateDiaryEntry(var_59_object, (int)460, (int)2, (int)527776);
	var_63_bool = 0; var_64_object = Obj(); var_65_int = 0;
	var_59_object = var_64_object;
	func_1078(var_63_bool, var_64_object, (int)456);
	return 2;
}
EMIT "Stack[-1] = 0";


func_798(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0);
	@@var_27_object:GetEyesHeight(var_30_float);
	var_31_cvector = CVector(0.0, 0.0, 0.0);
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	LookAsync(var_27_object, "head", var_31_cvector);
	return 4;
}


func_927()
{
	func_1052();
	var_81_bool = 0; var_82_string = ""; var_83_string = "";
	func_875(var_81_bool, "quest_b2_02", "fail");
	return 0;
}


func_675(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0;
	IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
	return 2;
}


func_680(var_25_bool, var_26_object, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0;
	@@var_26_object:GetPosition(var_38_cvector);
	@@var_26_object:GetEyesHeight(var_37_float);
	var_46_float = GetByIndex(var_38_cvector, 1);
	var_46_float = var_46_float + var_37_float;
	SetByIndex(var_38_cvector, 1) = var_46_float;
	GetPosition(var_39_cvector);
	GetEyesHeight(var_37_float);
	var_47_float = GetByIndex(var_39_cvector, 1);
	var_47_float = var_47_float + var_37_float;
	SetByIndex(var_39_cvector, 1) = var_47_float;
	var_40_cvector = var_38_cvector - var_39_cvector;
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (float)0;
	var_49_int = var_40_cvector | var_40_cvector;
	var_50_float = sqrt(var_49_int);
	var_40_cvector = var_40_cvector / var_50_float;
	var_41_cvector = -var_40_cvector;
	var_51_float = var_40_cvector * var_27_float;
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	var_53_cvector = var_41_cvector ^ CVector(0.0, 1.0, 0.0);
	func_816(var_52_cvector, var_53_cvector);
	var_61_float = var_52_cvector * (int)25;
	var_62_int = var_51_float + var_61_float;
	var_42_cvector = var_62_int - CVector(0.0, 10.0, 0.0);
	var_43_cvector = var_39_cvector + var_42_cvector;
	IsOverrideActive(var_44_bool);
	var_64_bool = var_44_bool;
	if(var_64_bool != 0) {
		var_25_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_43_cvector, var_41_cvector, (bool)1);
	var_66_float = GetByIndex(var_42_cvector, 0);
	var_67_float = GetByIndex(var_42_cvector, 2);
	Rotate(var_66_float, var_67_float);
	var_68_bool = 0;
	func_919(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		HasAnimationTrack(var_45_bool, "head");
		var_70_bool = var_45_bool;
		if(var_70_bool == 0) goto Label_743;
		LookAsyncCamera("head");
	}
Label_743:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_25_bool = 1;
	return 18;
	
}


func_809()
{
	var_13_bool = 0;
	func_919(var_13_bool);
	if(var_13_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_937()
{
	SetVariable("b2q02", (int)2);
	func_1039();
	var_101_bool = 0; var_102_string = ""; var_103_string = "";
	func_875(var_101_bool, "quest_b2_02", "move_bride");
	return 0;
}


func_1065(var_72_object)
{
	var_73_object = Obj(); var_74_object = Obj();
	GetDiaryRoot(var_74_object);
	var_75_bool = var_74_object == 0; //@nz
	if(var_75_bool != 0) {
		Trace("Can't retrieve diary root");
		var_72_object = 0;
		return 2;
	}
	var_74_object = var_72_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_176(var_2_object, var_93_string)
{
	var_94_bool = 0;
	func_919(var_94_bool);
	var_95_bool = var_94_bool == 0; //@nz
	if(var_95_bool != 0) {
		return 0;
	}
	var_96_bool = var_93_string == var_2_object;
	if(var_96_bool != 0) {
		return 0;
	}
	var_97_string = ""; var_98_bool = 0;
	var_93_string = var_97_string;
	var_100_bool = var_93_string == "";
	if(var_100_bool != 0) {
		var_98_bool = 0;
	} else {
		var_98_bool = 1;
	}
	func_783(var_97_string, var_98_bool);
	var_2_object = var_93_string;
	return 0;
	
}


func_816(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0;
	var_57_int = var_53_cvector | var_53_cvector;
	var_56_float = sqrt(var_57_int);
	var_58_float = 9.999999974752427e-07;
	var_59_bool = var_56_float < var_58_float;
	if(var_59_bool != 0) {
		var_52_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_52_cvector = var_53_cvector / var_56_float;
	return 2;
}


func_1078(var_63_bool, var_64_object, var_65_int)
{
	var_66_object = Obj(); var_67_object = Obj(); var_68_int = 0; var_69_object = Obj(); var_70_object = Obj(); var_71_int = 0;
	func_1065(Obj());
	var_72_object = var_69_object;
	@@var_69_object:Find(var_65_int, var_70_object);
	var_77_bool = var_70_object == 0; //@nz
	if(var_77_bool != 0) {
		var_79_int = "Can't find diary parent with id: " + var_65_int;
		Trace(var_79_int);
		var_63_bool = 0;
		return 6;
	}
	@@var_70_object:AddChild(var_64_object);
	SendWorldWndMessage((int)7);
	@@var_64_object:GetCategory(var_71_int);
	SetDiarySection(var_71_int);
	var_63_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_951(var_46_object)
{
	Trace("white plet 3 is given");
	var_49_object = Obj(); var_50_string = ""; var_51_int = 0;
	var_46_object = var_49_object;
	func_862(var_49_object, "grass_white_plet", (int)3);
	return 0;
}


func_567(var_2_object, var_3_string)
{
	func_662();
	KillTimer((int)10);
	var_12_object = var_2_object;
	if(var_12_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_826(var_116_int, var_117_string)
{
	var_118_int = 0; var_119_int = 0;
	GetVariable(var_117_string, var_119_int);
	var_119_int = var_116_int;
	return 2;
}


func_831(var_41_int, var_42_int)
{
	var_43_object = Obj(); var_44_object = Obj();
	CreateIntVector(var_44_object);
	@@var_44_object:add(var_41_int);
	@@var_44_object:add(var_42_int);
	SendWorldWndMessage((int)3, var_44_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_962(var_22_object)
{
	Trace("savyur 3 is given");
	var_25_object = Obj(); var_26_string = ""; var_27_int = 0;
	var_22_object = var_25_object;
	func_862(var_25_object, "grass_savyur", (int)3);
	return 0;
}


func_581()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0;
	WaitForAnimEnd();
	var_34_bool = 0;
	func_675(var_34_bool);
	var_35_bool = var_34_bool == 0; //@nz
	if(var_35_bool != 0) {
		return 14;
	}
	func_894((int)0);
	var_36_int = var_27_int;
	var_28_int = 0;
	
Label_595:
	var_49_bool = 0;
	var_49_bool = 0;
	var_51_bool = var_28_int < (int)5;
	if(var_51_bool != 0) {
		var_52_bool = 0;
		func_675(var_52_bool);
		if(var_52_bool != 0) {
			var_49_bool = 1;
		}
	}
	if(var_49_bool != 0) {
		irand(var_29_int, (int)3);
		var_55_bool = var_29_int == (int)0;
		if(var_55_bool != 0) {
			var_56_int = var_27_int;
			if(var_56_int == 0) goto Label_628;
			irand(var_30_int, var_27_int);
			var_58_string = ""; var_59_int = 0;
			var_30_int = var_59_int;
			func_887(var_58_string, var_59_int);
			PlayAnimation("all", var_58_string);
			WaitForAnimEnd(var_31_bool);
			var_60_bool = var_31_bool == 0; //@nz
			if(var_60_bool != 0) {
			} else {
		} else {
				var_65_bool = var_29_int == (int)1;
				if(var_65_bool != 0) {
					rand(var_32_float, (int)4);
					var_68_int = var_32_float + (int)1;
					Sleep(var_68_int, var_33_bool);
					var_69_bool = var_33_bool == 0; //@nz
					if(var_69_bool != 0) {
						goto Label_657;
					}
					goto Label_646;
				}
				var_70_int = var_28_int;
				if(var_70_int == 0) goto Label_646;
				goto Label_657;
		}
		Label_646:
			var_61_bool = 0;
			func_660(var_61_bool);
			var_62_bool = var_61_bool == 0; //@nz
			if(var_62_bool != 0) {
				goto Label_657;
			}
			ResetAAS();
			var_28_int = var_28_int + (int)1;
			goto Label_595;

		}
	}
Label_657:
	ResetAAS();
	return 14;
	
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_93_string = "";
		func_176(var_87_object, "Neutral");
		@@@var_0_object:SetMessage((int)518265);
		@@@var_0_object:ClearReplies();
		var_111_bool = 0;
		var_111_bool = 0;
		var_112_bool = 0;
		var_112_bool = 0;
		var_113_bool = 0;
		var_113_bool = 0;
		var_114_bool = 0; var_115_object = Obj();
		var_115_object = var_1_object;
		func_1027(var_115_object);
		if(var_114_bool != 0) {
			var_122_bool = 0; var_123_object = Obj();
			var_123_object = var_1_object;
			func_1003(var_123_object);
			var_128_bool = var_122_bool == 0; //@nz
			if(var_128_bool != 0) {
				var_113_bool = 1;
			}
		}
		if(var_113_bool != 0) {
			var_129_bool = 0; var_130_object = Obj();
			var_130_object = var_1_object;
			func_991(var_130_object);
			var_135_bool = var_129_bool == 0; //@nz
			if(var_135_bool != 0) {
				var_112_bool = 1;
			}
		}
		if(var_112_bool != 0) {
			var_136_bool = 0; var_137_object = Obj();
			var_137_object = var_1_object;
			func_1015(var_137_object);
			if(var_136_bool != 0) {
				var_111_bool = 1;
			}
		}
		if(var_111_bool != 0) {
			@@@var_0_object:AddReply((int)518266, (int)20687, (int)19375);
		}
		var_145_bool = 0; var_146_object = Obj();
		var_146_object = var_1_object;
		func_979(var_146_object);
		if(var_145_bool != 0) {
			@@@var_0_object:AddReply((int)527751, (int)29118, (int)29108);
		}
		@@@var_0_object:AddReply((int)518267, (int)-1, (int)19376);
		goto Label_146;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_146:
	var_157_bool = 0;
	func_919(var_157_bool);
	if(var_157_bool != 0) {

	Label_150:
		lshWaitForAnimEnd();
		var_158_string = var_3_string;
		if(var_158_string != 0) {
		} else {
			var_159_string = "";
			var_159_string = var_2_object;
			func_767(var_159_string);
			goto Label_150;
	}
		PlayAnimation("all", "idle");

	Label_165:
		WaitForAnimEnd();
		var_172_string = var_3_string;
		if(var_172_string != 0) {
			goto Label_175;
		}
		PlayAnimation("all", "idle");
		goto Label_165;
	}
	goto Label_175;
	
Label_175:
	return 0;
	
}


func_843(var_30_object, var_31_object, var_32_int)
{
	var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0;
	@@var_31_object:GetItemID(var_36_int);
	GetInvItemProperty(var_37_int, var_36_int, "Category");
	@@var_30_object:AddItem(var_38_bool, var_31_object, var_37_int, var_32_int);
	var_40_bool = var_38_bool == 0; //@nz
	if(var_40_bool != 0) {
		@@var_30_object:DropItems(var_31_object, var_32_int);
	} else {
		var_41_int = 0; var_42_int = 0;
		var_36_int = var_41_int;
		var_32_int = var_42_int;
		func_831(var_41_int, var_42_int);
	}
	return 6;
	
}


func_973()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_1106(var_77_int)
{
	var_78_int = 0; var_79_int = 0;
	GetVariable("branch", var_79_int);
	var_82_bool = var_79_int == (int)0;
	if(var_82_bool != 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x461";
	}
	var_84_bool = var_79_int == (int)1;
	if(var_84_bool != 0) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
	return 2;
}


func_979(var_145_bool)
{
	var_147_int = 0; var_148_string = "";
	func_826(var_147_int, "b2q02");
	var_150_bool = var_147_int == (int)1;
	if(var_150_bool != 0) {
		var_145_bool = 1;
		return 0;
	}
	var_145_bool = 0;
	return 0;
}


func_862(var_25_object, var_26_string, var_27_int)
{
	var_28_object = Obj(); var_29_object = Obj();
	CreateInvItem(var_29_object);
	@@var_29_object:SetItemName(var_26_string);
	var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0;
	var_25_object = var_30_object;
	var_29_object = var_31_object;
	var_27_int = var_32_int;
	func_843(var_30_object, var_31_object, var_32_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_991(var_129_bool)
{
	var_131_int = 0; var_132_string = "";
	func_826(var_131_int, "b2q02");
	var_134_bool = var_131_int == (int)2;
	if(var_134_bool != 0) {
		var_129_bool = 1;
		return 0;
	}
	var_129_bool = 0;
	return 0;
}


func_1003(var_122_bool)
{
	var_124_int = 0; var_125_string = "";
	func_826(var_124_int, "b2q02");
	var_127_bool = var_124_int == (int)-1;
	if(var_127_bool != 0) {
		var_122_bool = 1;
		return 0;
	}
	var_122_bool = 0;
	return 0;
}


func_875(var_81_bool, var_82_string, var_83_string)
{
	var_84_object = Obj(); var_85_object = Obj();
	FindActor(var_85_object, var_82_string);
	var_86_bool = var_85_object == 0; //@ne
	if(var_86_bool != 0) {
		var_81_bool = 0;
		return 2;
	}
	Trigger(var_85_object, var_83_string);
	var_81_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_749()
{
	var_177_bool = 0; var_178_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_180_bool = 0;
	func_919(var_180_bool);
	if(var_180_bool != 0) {
	} else {
		HasAnimationTrack(var_178_bool, "head");
		var_182_bool = var_178_bool;
		if(var_182_bool == 0) goto Label_766;
		UnlookAsync("head");
	}
Label_766:
	return 2;
	
}


func_1015(var_136_bool)
{
	var_138_int = 0; var_139_string = "";
	func_826(var_138_int, "b2q02");
	var_141_bool = var_138_int == (int)1000;
	if(var_141_bool != 0) {
		var_136_bool = 1;
		return 0;
	}
	var_136_bool = 0;
	return 0;
}


func_502(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_11_float, var_12_float)
{
	var_13_bool = 0;
	func_675(var_13_bool);
	var_16_bool = var_13_bool == 0; //@nz
	if(var_16_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_11_float;
	var_1_object = var_12_float;
	SetTimer((int)10, (float)1.0);
	func_581();
	var_71_bool = var_3_string == 0; //@nz
	if(var_71_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_887(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = "";
	var_46_int = var_43_int;
	if(var_46_int != 0) {
		"idle" = "idle" + var_43_int;
	}
	var_45_string = var_42_string;
	return 2;
}


func_894(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0;
	var_39_int = 0;
	
Label_896:
	var_42_string = ""; var_43_int = 0;
	var_39_int = var_43_int;
	func_887(var_42_string, var_43_int);
	HasAnimation(var_40_bool, "all", var_42_string);
	var_47_bool = var_40_bool == 0; //@nz
	if(var_47_bool != 0) {
	} else {
		var_39_int = var_39_int + (int)1;
		goto Label_896;
	}
	var_39_int = var_36_int;
	return 4;
	
}


func_767(var_159_string)
{
	var_160_bool = 0; var_161_float = 0; var_162_float = 0; var_163_bool = 0; var_164_float = 0; var_165_float = 0;
	lshHasAnimation(var_163_bool, var_159_string);
	var_166_bool = var_163_bool;
	if(var_166_bool != 0) {
		lshGetAnimTimes(var_159_string, var_164_float, var_165_float);
		lshPlayAnimation(var_164_float, var_165_float, (bool)0);
	} else {
		var_169_int = "Can't find lsh animation : " + var_159_string;
		Trace(var_169_int);
	}
	return 6;
	
}


