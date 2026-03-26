// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,GetVariable/2,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,FindActor/2,Trigger/2,TriggerWorld/2,SetVariable/2,GetInvItemByName/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetPosition|A:GetEyesHeight|W:head|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:playsound|W:giveitem|W:d7q01|W:mreport is given|W:d7q01_mreport|W:ood7MBirdmask1|W:quest_d7_01|W:sobor_teleport|A:GetItemCount|W:bird_mask|W:bird_balahon|A:GetItem|A:IsItemSelected|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:ui/NPC_bmask.png|W:ui/NPC_bmask_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x2c2
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xe4 vars=int,int
// @TASK_2: vars= params=0
// @EVENT_0: op=0x2c6 vars=object
// @PE: 0x4a,0xce,0xe4,0x2c6,0x392,0x398,0x3a1,0x3ac,0x3b2,0x3b9,0x3c5,0x3cf

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	if((int)1 != 0) {
		func_836();
		var_10_bool = var_6_int == (int)43785;
		if(var_10_bool != 0) {
			var_11_object = Obj(); var_12_object = Obj();
			var_11_object = var_1_object;
			var_12_object = var_0_object;
			func_929(var_12_object);
			var_35_object = Obj(); var_36_object = Obj();
			var_35_object = var_1_object;
			var_36_object = var_0_object;
			func_914();
		}
		var_40_bool = var_6_int == (int)14438;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_929(var_42_object);
			var_43_object = Obj(); var_44_object = Obj();
			var_43_object = var_1_object;
			var_44_object = var_0_object;
			func_914();
		}
		var_46_bool = var_6_int == (int)14485;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_920();
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_object;
			func_946();
		}
		var_83_bool = var_6_int == (int)14446;
		if(var_83_bool != 0) {
			var_84_object = Obj(); var_85_object = Obj();
			var_84_object = var_1_object;
			var_85_object = var_0_object;
			func_920();
			var_86_object = Obj(); var_87_object = Obj();
			var_86_object = var_1_object;
			var_87_object = var_0_object;
			func_946();
		}
		var_89_bool = var_6_int == (int)16565;
		if(var_89_bool != 0) {
			var_90_object = Obj(); var_91_object = Obj();
			var_90_object = var_1_object;
			var_91_object = var_0_object;
			func_920();
			var_92_object = Obj(); var_93_object = Obj();
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_946();
		}
		var_95_bool = var_6_int == (int)16566;
		if(var_95_bool != 0) {
			var_96_object = Obj(); var_97_object = Obj();
			var_96_object = var_1_object;
			var_97_object = var_0_object;
			func_920();
			var_98_object = Obj(); var_99_object = Obj();
			var_98_object = var_1_object;
			var_99_object = var_0_object;
			func_946();
		}
		var_101_bool = var_5_int == (int)14435;
		if(var_101_bool != 0) {
			var_102_bool = 0; var_103_object = Obj();
			var_103_object = var_1_object;
			func_975(var_103_object);
			if(var_102_bool != 0) {
				var_110_object = Obj(); var_111_object = Obj();
				var_110_object = var_1_object;
				var_111_object = var_0_object;
				func_940();
				var_114_string = "";
				func_206(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)513212);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)513213, (int)14437, (int)14436);
				return 0;
			}
			var_135_bool = 0;
			var_135_bool = 0;
			var_136_bool = 0; var_137_object = Obj();
			var_137_object = var_1_object;
			func_953(var_137_object);
			if(var_136_bool != 0) {
				var_142_bool = 0; var_143_object = Obj();
				var_143_object = var_1_object;
				func_965(var_142_bool, var_143_object);
				if(var_142_bool != 0) {
					var_135_bool = 1;
				}
			}
			if(var_135_bool != 0) {
				var_180_string = "";
				func_206(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)513216);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)513217, (int)14441, (int)14440);
				@@@var_0_object:AddReply((int)513220, (int)14444, (int)14443);
				@@@var_0_object:AddReply((int)513224, (int)14441, (int)14447);
				return 0;
			}
			var_191_bool = 0; var_192_object = Obj();
			var_192_object = var_1_object;
			func_953(var_192_object);
			if(var_191_bool != 0) {
				var_193_string = "";
				func_206(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)513231);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)513232, (int)14456, (int)14455);
				@@@var_0_object:AddReply((int)513248, (int)16562, (int)14473);
				@@@var_0_object:AddReply((int)513249, (int)-1, (int)14475);
				return 0;
			}
		}
		var_205_bool = var_5_int == (int)14456;
		if(var_205_bool != 0) {
			var_206_string = "";
			func_206(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513233);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513234, (int)14458, (int)14457);
			@@@var_0_object:AddReply((int)513240, (int)14469, (int)14463);
			@@@var_0_object:AddReply((int)513244, (int)14464, (int)14468);
			return 0;
		}
		var_218_bool = var_5_int == (int)14464;
		if(var_218_bool != 0) {
			var_219_string = "";
			func_206(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513241);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513242, (int)-1, (int)14465);
			@@@var_0_object:AddReply((int)513243, (int)16562, (int)14466);
			return 0;
		}
		var_228_bool = var_5_int == (int)14469;
		if(var_228_bool != 0) {
			var_229_string = "";
			func_206(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513245);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513246, (int)-1, (int)14470);
			@@@var_0_object:AddReply((int)513247, (int)16562, (int)14471);
			return 0;
		}
		var_238_bool = var_5_int == (int)14458;
		if(var_238_bool != 0) {
			var_239_string = "";
			func_206(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513235);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513236, (int)16562, (int)14459);
			@@@var_0_object:AddReply((int)513239, (int)-1, (int)14462);
			return 0;
		}
		var_248_bool = var_5_int == (int)16562;
		if(var_248_bool != 0) {
			var_249_string = "";
			func_206(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)515419);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)515420, (int)-1, (int)16565);
			@@@var_0_object:AddReply((int)515421, (int)-1, (int)16566);
			return 0;
		}
		var_258_bool = var_5_int == (int)14444;
		if(var_258_bool != 0) {
			var_259_string = "";
			func_206(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513221);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513222, (int)-1, (int)14445);
			@@@var_0_object:AddReply((int)513223, (int)-1, (int)14446);
			return 0;
		}
		var_268_bool = var_5_int == (int)14441;
		if(var_268_bool != 0) {
			var_269_string = "";
			func_206(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513218);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513219, (int)-1, (int)14442);
			@@@var_0_object:AddReply((int)513259, (int)-1, (int)14485);
			return 0;
		}
		var_278_bool = var_5_int == (int)14437;
		if(var_278_bool != 0) {
			var_279_string = "";
			func_206(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513214);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513250, (int)14478, (int)14476);
			@@@var_0_object:AddReply((int)513251, (int)14482, (int)14477);
			return 0;
		}
		var_288_bool = var_5_int == (int)14482;
		if(var_288_bool != 0) {
			var_289_string = "";
			func_206(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513256);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513257, (int)14484, (int)14483);
			return 0;
		}
		var_295_bool = var_5_int == (int)14484;
		if(var_295_bool != 0) {
			var_296_string = "";
			func_206(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513258);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513215, (int)-1, (int)14438);
			return 0;
		}
		var_302_bool = var_5_int == (int)14478;
		if(var_302_bool != 0) {
			var_303_string = "";
			func_206(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513252);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513253, (int)14480, (int)14479);
			return 0;
		}
		var_309_bool = var_5_int == (int)14480;
		if(var_309_bool != 0) {
			var_310_string = "";
			func_206(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)513254);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513255, (int)43784, (int)14481);
			@@@var_0_object:AddReply((int)541612, (int)14482, (int)43783);
			return 0;
		}
		var_319_bool = var_5_int == (int)43784;
		if(var_319_bool != 0) {
			var_320_string = "";
			func_206(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)541613);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)541614, (int)-1, (int)43785);
			return 0;
		}
		var_3_string = true;
		var_325_bool = 0;
		func_1114(var_325_bool);
		if(var_325_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xe5";
	
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
	
Label_706:
	Hold();
	goto Label_706;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_6_int, var_7_object)
{
	var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_bool = 0;
	var_0_object = var_7_object;
	var_17_bool = 0; var_18_object = Obj(); var_19_float = 0;
	var_7_object = var_18_object;
	func_718(var_17_bool, var_18_object, (float)130.0);
	var_64_bool = var_17_bool == 0; //@nz
	if(var_64_bool != 0) {
		var_6_int = -2;
		return 8;
	}
	CreateDialog(var_13_object);
	var_65_int = 0;
	func_1108(var_65_int);
	@@var_13_object:SetNPCName(var_65_int);
	var_66_int = 0;
	func_1106(var_66_int);
	@@var_13_object:SetNPCDescription(var_66_int);
	var_67_string = "";
	func_1110(var_67_string);
	@@var_13_object:SetPhoto(var_67_string);
	var_68_string = "";
	func_1112(var_68_string);
	@@var_13_object:SetPhoto2(var_68_string);
	var_69_int = 0;
	func_1089(var_69_int);
	@@var_13_object:SetPlayerName(var_69_int);
	IsOverrideActive(var_14_bool);
	var_77_bool = var_14_bool;
	if(var_77_bool != 0) {
		var_6_int = -2;
		return 8;
	}
	DoDialog(var_13_object);
	var_78_object = Obj(); var_79_object = Obj();
	var_7_object = var_78_object;
	var_13_object = var_79_object;
	TaskCall(1);
	func_74(var_80_object, var_81_object, var_82_string, var_83_bool, var_78_object, var_79_object);
	TaskReturn();
	@@var_13_object:IsDialogEnd(var_16_bool);
	
Label_56:
	var_205_bool = var_16_bool == 0; //@nz
	if(var_205_bool != 0) {
		sync();
		@@var_13_object:IsDialogEnd(var_16_bool);
		goto Label_56;
	}
	var_7_object = Obj();
	func_787();
	StopDialog(var_13_object);
	@@var_13_object:GetReturnValue((int)-1);
	var_15_int = var_6_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_902(var_76_bool, var_77_string, var_78_string)
{
	var_79_object = Obj(); var_80_object = Obj();
	FindActor(var_80_object, var_77_string);
	var_81_bool = var_80_object == 0; //@ne
	if(var_81_bool != 0) {
		var_76_bool = 0;
		return 2;
	}
	Trigger(var_80_object, var_78_string);
	var_76_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1035()
{
	var_51_object = Obj(); var_52_object = Obj();
	CreateDiaryEntry(var_52_object, (int)169, (int)1, (int)515418);
	var_56_bool = 0; var_57_object = Obj(); var_58_int = 0;
	var_52_object = var_57_object;
	func_1061(var_56_bool, var_57_object, (int)165);
	return 2;
}
EMIT "Stack[-1] = 0";


func_914()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_787()
{
	var_207_bool = 0; var_208_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_210_bool = 0;
	func_1114(var_210_bool);
	if(var_210_bool != 0) {
	} else {
		HasAnimationTrack(var_208_bool, "head");
		var_212_bool = var_208_bool;
		if(var_212_bool == 0) goto Label_804;
		UnlookAsync("head");
	}
Label_804:
	return 2;
	
}


func_920()
{
	SetVariable("d7q01", (int)3);
	func_1035();
	return 0;
}


func_1048(var_65_object)
{
	var_66_object = Obj(); var_67_object = Obj();
	GetDiaryRoot(var_67_object);
	var_68_bool = var_67_object == 0; //@nz
	if(var_68_bool != 0) {
		Trace("Can't retrieve diary root");
		var_65_object = 0;
		return 2;
	}
	var_67_object = var_65_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_929(var_11_object)
{
	Trace("mreport is given");
	var_14_object = Obj(); var_15_string = ""; var_16_int = 0;
	var_11_object = var_14_object;
	func_889(var_14_object, "d7q01_mreport", (int)1);
	return 0;
}


func_805(var_120_string)
{
	var_121_bool = 0; var_122_float = 0; var_123_float = 0; var_124_bool = 0; var_125_float = 0; var_126_float = 0;
	lshHasAnimation(var_124_bool, var_120_string);
	var_127_bool = var_124_bool;
	if(var_127_bool != 0) {
		lshGetAnimTimes(var_120_string, var_125_float, var_126_float);
		lshPlayAnimation(var_125_float, var_126_float, (bool)0);
	} else {
		var_130_int = "Can't find lsh animation : " + var_120_string;
		Trace(var_130_int);
	}
	return 6;
	
}


func_1061(var_56_bool, var_57_object, var_58_int)
{
	var_59_object = Obj(); var_60_object = Obj(); var_61_int = 0; var_62_object = Obj(); var_63_object = Obj(); var_64_int = 0;
	func_1048(Obj());
	var_65_object = var_62_object;
	@@var_62_object:Find(var_58_int, var_63_object);
	var_70_bool = var_63_object == 0; //@nz
	if(var_70_bool != 0) {
		var_72_int = "Can't find diary parent with id: " + var_58_int;
		Trace(var_72_int);
		var_56_bool = 0;
		return 6;
	}
	@@var_63_object:AddChild(var_57_object);
	SendWorldWndMessage((int)7);
	@@var_57_object:GetCategory(var_64_int);
	SetDiarySection(var_64_int);
	var_56_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_940()
{
	SetVariable("ood7MBirdmask1", (int)1);
	return 0;
}


func_946()
{
	var_76_bool = 0; var_77_string = ""; var_78_string = "";
	func_902(var_76_bool, "quest_d7_01", "sobor_teleport");
	return 0;
}


func_821(var_101_string, var_102_bool)
{
	var_105_bool = 0; var_106_float = 0; var_107_float = 0; var_108_bool = 0; var_109_float = 0; var_110_float = 0;
	lshHasAnimation(var_108_bool, var_101_string);
	var_111_bool = var_108_bool;
	if(var_111_bool != 0) {
		lshGetAnimTimes(var_101_string, var_109_float, var_110_float);
		lshPlayAnimation(var_109_float, var_110_float, var_102_bool);
	} else {
		var_113_int = "Can't find lsh animation : " + var_101_string;
		Trace(var_113_int);
	}
	return 6;
	
}


func_953(var_137_bool)
{
	var_139_int = 0; var_140_string = "";
	func_853(var_139_int, "d7q01");
	var_142_bool = var_139_int == (int)2;
	if(var_142_bool != 0) {
		var_137_bool = 1;
		return 0;
	}
	var_137_bool = 0;
	return 0;
}


func_1089(var_69_int)
{
	var_70_int = 0; var_71_int = 0;
	GetVariable("branch", var_71_int);
	var_74_bool = var_71_int == (int)0;
	if(var_74_bool != 0) {
		var_69_int = 1;
		return 2;
	EMIT "GOTO 0x450";
	}
	var_76_bool = var_71_int == (int)1;
	if(var_76_bool != 0) {
		var_69_int = 2;
		return 2;
	}
	var_69_int = 3;
	return 2;
}


func_836()
{
	var_8_bool = 0;
	func_1114(var_8_bool);
	if(var_8_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_965(var_143_bool, var_144_object)
{
	var_145_bool = 0; var_146_object = Obj();
	var_144_object = var_146_object;
	func_987(var_145_bool, var_146_object);
	if(var_145_bool != 0) {
		var_143_bool = 1;
		return 0;
	}
	var_143_bool = 0;
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_78_object, var_79_object)
{
	var_0_object = var_79_object;
	var_1_object = var_78_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_85_bool = 0; var_86_object = Obj();
		var_86_object = var_1_object;
		func_975(var_86_object);
		if(var_85_bool != 0) {
			var_93_object = Obj(); var_94_object = Obj();
			var_93_object = var_1_object;
			var_94_object = var_0_object;
			func_940();
			var_97_string = "";
			func_206(var_79_object, "Neutral");
			@@@var_0_object:SetMessage((int)513212);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)513213, (int)14437, (int)14436);
		} else {
				var_136_bool = 0;
				var_136_bool = 0;
				var_137_bool = 0; var_138_object = Obj();
				var_138_object = var_1_object;
				func_953(var_138_object);
				if(var_137_bool != 0) {
					var_143_bool = 0; var_144_object = Obj();
					var_144_object = var_1_object;
					func_965(var_143_bool, var_144_object);
					if(var_143_bool != 0) {
						var_136_bool = 1;
					}
				}
				if(var_136_bool != 0) {
					var_181_string = "";
					func_206(var_79_object, "Neutral");
					@@@var_0_object:SetMessage((int)513216);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)513217, (int)14441, (int)14440);
					@@@var_0_object:AddReply((int)513220, (int)14444, (int)14443);
					@@@var_0_object:AddReply((int)513224, (int)14441, (int)14447);
					goto Label_176;
				}
				var_192_bool = 0; var_193_object = Obj();
				var_193_object = var_1_object;
				func_953(var_193_object);
				if(var_192_bool != 0) {
					var_194_string = "";
					func_206(var_79_object, "Neutral");
					@@@var_0_object:SetMessage((int)513231);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)513232, (int)14456, (int)14455);
					@@@var_0_object:AddReply((int)513248, (int)16562, (int)14473);
					@@@var_0_object:AddReply((int)513249, (int)-1, (int)14475);
					goto Label_176;
				}
				return 0;
		}
	}
Label_176:
	var_118_bool = 0;
	func_1114(var_118_bool);
	if(var_118_bool != 0) {

	Label_180:
		lshWaitForAnimEnd();
		var_119_string = var_3_string;
		if(var_119_string != 0) {
		} else {
			var_120_string = "";
			var_120_string = var_2_object;
			func_805(var_120_string);
			goto Label_180;
	}
		PlayAnimation("all", "idle");

	Label_195:
		WaitForAnimEnd();
		var_133_string = var_3_string;
		if(var_133_string != 0) {
			goto Label_205;
		}
		PlayAnimation("all", "idle");
		goto Label_195;

	}
	goto Label_205;
	
Label_205:
	return 0;
	
}
EMIT "GOTO 0x4e";


func_843(var_44_cvector, var_45_cvector)
{
	var_47_float = 0; var_48_float = 0;
	var_49_int = var_45_cvector | var_45_cvector;
	var_48_float = sqrt(var_49_int);
	var_50_float = 9.999999974752427e-07;
	var_51_bool = var_48_float < var_50_float;
	if(var_51_bool != 0) {
		var_44_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_44_cvector = var_45_cvector / var_48_float;
	return 2;
}


func_718(var_17_bool, var_18_object, var_19_float)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_bool = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_bool = 0;
	@@var_18_object:GetPosition(var_30_cvector);
	@@var_18_object:GetEyesHeight(var_29_float);
	var_38_float = GetByIndex(var_30_cvector, 1);
	var_38_float = var_38_float + var_29_float;
	SetByIndex(var_30_cvector, 1) = var_38_float;
	GetPosition(var_31_cvector);
	GetEyesHeight(var_29_float);
	var_39_float = GetByIndex(var_31_cvector, 1);
	var_39_float = var_39_float + var_29_float;
	SetByIndex(var_31_cvector, 1) = var_39_float;
	var_32_cvector = var_30_cvector - var_31_cvector;
	var_40_float = GetByIndex(var_32_cvector, 1);
	SetByIndex(var_32_cvector, 1) = (float)0;
	var_41_int = var_32_cvector | var_32_cvector;
	var_42_float = sqrt(var_41_int);
	var_32_cvector = var_32_cvector / var_42_float;
	var_33_cvector = -var_32_cvector;
	var_43_float = var_32_cvector * var_19_float;
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0);
	var_45_cvector = var_33_cvector ^ CVector(0.0, 1.0, 0.0);
	func_843(var_44_cvector, var_45_cvector);
	var_53_float = var_44_cvector * (int)25;
	var_54_int = var_43_float + var_53_float;
	var_34_cvector = var_54_int - CVector(0.0, 10.0, 0.0);
	var_35_cvector = var_31_cvector + var_34_cvector;
	IsOverrideActive(var_36_bool);
	var_56_bool = var_36_bool;
	if(var_56_bool != 0) {
		var_17_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_35_cvector, var_33_cvector, (bool)1);
	var_58_float = GetByIndex(var_34_cvector, 0);
	var_59_float = GetByIndex(var_34_cvector, 2);
	Rotate(var_58_float, var_59_float);
	var_60_bool = 0;
	func_1114(var_60_bool);
	if(var_60_bool != 0) {
	} else {
		HasAnimationTrack(var_37_bool, "head");
		var_62_bool = var_37_bool;
		if(var_62_bool == 0) goto Label_781;
		LookAsyncCamera("head");
	}
Label_781:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_17_bool = 1;
	return 18;
	
}


func_975(var_85_bool)
{
	var_87_int = 0; var_88_string = "";
	func_853(var_87_int, "ood7MBirdmask1");
	var_92_bool = var_87_int == (int)0;
	if(var_92_bool != 0) {
		var_85_bool = 1;
		return 0;
	}
	var_85_bool = 0;
	return 0;
}


func_206(var_2_object, var_97_string)
{
	var_98_bool = 0;
	func_1114(var_98_bool);
	var_99_bool = var_98_bool == 0; //@nz
	if(var_99_bool != 0) {
		return 0;
	}
	var_100_bool = var_97_string == var_2_object;
	if(var_100_bool != 0) {
		return 0;
	}
	var_101_string = ""; var_102_bool = 0;
	var_97_string = var_101_string;
	var_104_bool = var_97_string == "";
	if(var_104_bool != 0) {
		var_102_bool = 0;
	} else {
		var_102_bool = 1;
	}
	func_821(var_101_string, var_102_bool);
	var_2_object = var_97_string;
	return 0;
	
}


func_1106(var_66_int)
{
	var_66_int = 515571;
	return 0;
}


func_1108(var_65_int)
{
	var_65_int = 504029;
	return 0;
}


func_853(var_87_int, var_88_string)
{
	var_89_int = 0; var_90_int = 0;
	GetVariable(var_88_string, var_90_int);
	var_90_int = var_87_int;
	return 2;
}


func_1110(var_67_string)
{
	var_67_string = "ui/NPC_bmask.png";
	return 0;
}


func_1112(var_68_string)
{
	var_68_string = "ui/NPC_bmask_b.png";
	return 0;
}


func_1114(var_60_bool)
{
	var_60_bool = 0;
	return 0;
}


func_858(var_30_int, var_31_int)
{
	var_32_object = Obj(); var_33_object = Obj();
	CreateIntVector(var_33_object);
	@@var_33_object:add(var_30_int);
	@@var_33_object:add(var_31_int);
	SendWorldWndMessage((int)3, var_33_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_987(var_145_bool, var_146_object)
{
	var_147_int = 0; var_148_int = 0; var_149_int = 0; var_150_bool = 0; var_151_bool = 0; var_152_int = 0; var_153_object = Obj(); var_154_int = 0; var_155_bool = 0; var_156_bool = 0; var_157_int = 0; var_158_int = 0; var_159_int = 0; var_160_bool = 0; var_161_bool = 0; var_162_int = 0; var_163_object = Obj(); var_164_int = 0; var_165_bool = 0; var_166_bool = 0;
	@@var_146_object:GetItemCount(var_157_int, (int)1);
	GetInvItemByName(var_158_int, "bird_mask");
	GetInvItemByName(var_159_int, "bird_balahon");
	var_160_bool = 0;
	var_161_bool = 0;
	var_162_int = 0;
	
Label_1000:
	var_170_bool = var_162_int < var_157_int;
	if(var_170_bool != 0) {
		@@var_146_object:GetItem(var_163_object, var_162_int, (int)1);
		@@var_163_object:GetItemID(var_164_int);
		var_172_bool = var_164_int == var_158_int;
		if(var_172_bool != 0) {
			@@var_146_object:IsItemSelected(var_165_bool, var_162_int, (int)1);
			var_174_bool = var_165_bool;
			if(var_174_bool != 0) {
				var_160_bool = 1;
			}
		} else {
			var_176_bool = var_164_int == var_159_int;
			if(var_176_bool == 0) goto Label_1024;
			@@var_146_object:IsItemSelected(var_166_bool, var_162_int, (int)1);
			var_178_bool = var_166_bool;
			if(var_178_bool == 0) goto Label_1024;
	}
		var_145_bool = 0;
		var_179_bool = var_160_bool;
		if(var_179_bool != 0) {
			var_180_bool = (bool)1;
			if(var_180_bool != 0) {
				var_145_bool = 1;
			}
		}
		var_163_object = 0;
		var_162_int = var_162_int + (int)1;
		goto Label_1000;
	}
	return 20;
	
}


func_870(var_19_object, var_20_object, var_21_int)
{
	var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_int = 0; var_26_int = 0; var_27_bool = 0;
	@@var_20_object:GetItemID(var_25_int);
	GetInvItemProperty(var_26_int, var_25_int, "Category");
	@@var_19_object:AddItem(var_27_bool, var_20_object, var_26_int, var_21_int);
	var_29_bool = var_27_bool == 0; //@nz
	if(var_29_bool != 0) {
		@@var_19_object:DropItems(var_20_object, var_21_int);
	} else {
		var_30_int = 0; var_31_int = 0;
		var_25_int = var_30_int;
		var_21_int = var_31_int;
		func_858(var_30_int, var_31_int);
	}
	return 6;
	
}


func_889(var_14_object, var_15_string, var_16_int)
{
	var_17_object = Obj(); var_18_object = Obj();
	CreateInvItem(var_18_object);
	@@var_18_object:SetItemName(var_15_string);
	var_19_object = Obj(); var_20_object = Obj(); var_21_int = 0;
	var_14_object = var_19_object;
	var_18_object = var_20_object;
	var_16_int = var_21_int;
	func_870(var_19_object, var_20_object, var_21_int);
	return 2;
}
EMIT "Stack[-1] = 0";


