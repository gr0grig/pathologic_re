// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,self/1,GetVariable/2,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,FindActor/2,Trigger/2,GetGameTime/1,TriggerWorld/2,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:head|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:playsound|W:giveitem|W:ood2WomanD1|W:d2q01|W:d2q01WomanDGotoAlexandr|W:pt_map_alexandr|A:AddMark|W:key is given|W:d2q01_key|W:quest_d2_01|W:cursed_women|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:branch|W:ui/NPC_Citizen3.png|W:ui/NPC_Citizen3_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x18b
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb3 vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x183 vars=object
// @EVENT_26: op=0x18f vars=string
// @EVENT_6: op=0x1ab vars=
// @PE: 0x4a,0x9d,0xb3,0x183,0x28c,0x292,0x2bd

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_563();
		var_11_bool = var_7_bool == (int)8110;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_658();
			var_16_object = Obj(); var_17_object = Obj();
			var_16_object = var_1_object;
			var_17_object = var_0_object;
			func_664(var_17_object);
			var_87_object = Obj(); var_88_object = Obj();
			var_87_object = var_1_object;
			var_88_object = var_0_object;
			func_652();
		}
		var_92_bool = var_6_int == (int)7438;
		if(var_92_bool != 0) {
			var_93_bool = 0; var_94_object = Obj();
			var_94_object = var_1_object;
			func_701(var_94_object);
			if(var_93_bool != 0) {
				var_101_string = "";
				func_157(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)506748);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)506749, (int)7440, (int)7439);
				@@@var_0_object:AddReply((int)507345, (int)7440, (int)8098);
				@@@var_0_object:AddReply((int)507350, (int)7440, (int)8104);
				return 0;
			}
			var_128_string = "";
			func_157(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)506753);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506754, (int)8102, (int)7444);
			return 0;
		}
		var_134_bool = var_6_int == (int)8102;
		if(var_134_bool != 0) {
			var_135_string = "";
			func_157(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)507348);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507349, (int)-1, (int)8103);
			return 0;
		}
		var_141_bool = var_6_int == (int)7440;
		if(var_141_bool != 0) {
			var_142_string = "";
			func_157(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)506750);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506751, (int)8099, (int)7441);
			@@@var_0_object:AddReply((int)507356, (int)8106, (int)8111);
			return 0;
		}
		var_151_bool = var_6_int == (int)8099;
		if(var_151_bool != 0) {
			var_152_string = "";
			func_157(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)507346);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507347, (int)8106, (int)8100);
			return 0;
		}
		var_158_bool = var_6_int == (int)8106;
		if(var_158_bool != 0) {
			var_159_string = "";
			func_157(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)507351);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507352, (int)7442, (int)8107);
			@@@var_0_object:AddReply((int)507357, (int)7442, (int)8113);
			return 0;
		}
		var_168_bool = var_6_int == (int)7442;
		if(var_168_bool != 0) {
			var_169_string = "";
			func_157(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)506752);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507353, (int)8109, (int)8108);
			@@@var_0_object:AddReply((int)507358, (int)8109, (int)8115);
			return 0;
		}
		var_178_bool = var_6_int == (int)8109;
		if(var_178_bool != 0) {
			var_179_string = "";
			func_157(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)507354);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)507355, (int)-1, (int)8110);
			return 0;
		}
		var_3_string = true;
		var_184_bool = 0;
		func_809(var_184_bool);
		if(var_184_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb4";
	
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
			func_443(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_570(var_14_object);
			RemoveActor(var_14_object);
		}
	} else {
		var_18_bool = var_6_string == "restore";
		if(var_18_bool == 0) goto Label_426;
		var_0_object = false;
	}
Label_426:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_443(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_570(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_395:
	Hold();
	goto Label_395;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0;
	var_8_object = var_19_object;
	func_445(var_18_bool, var_19_object, (float)70.0);
	var_65_bool = var_18_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_66_int = 0;
	func_803(var_66_int);
	@@var_14_object:SetNPCName(var_66_int);
	var_67_int = 0;
	func_801(var_67_int);
	@@var_14_object:SetNPCDescription(var_67_int);
	var_68_string = "";
	func_805(var_68_string);
	@@var_14_object:SetPhoto(var_68_string);
	var_69_string = "";
	func_807(var_69_string);
	@@var_14_object:SetPhoto2(var_69_string);
	var_70_int = 0;
	func_784(var_70_int);
	@@var_14_object:SetPlayerName(var_70_int);
	IsOverrideActive(var_15_bool);
	var_78_bool = var_15_bool;
	if(var_78_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	DoDialog(var_14_object);
	var_79_object = Obj(); var_80_object = Obj();
	var_8_object = var_79_object;
	var_14_object = var_80_object;
	TaskCall(1);
	func_74(var_81_object, var_82_object, var_83_string, var_84_bool, var_79_object, var_80_object);
	TaskReturn();
	@@var_14_object:IsDialogEnd(var_17_bool);
	
Label_56:
	var_144_bool = var_17_bool == 0; //@nz
	if(var_144_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_56;
	}
	var_8_object = Obj();
	func_514();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_576(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0;
	var_50_int = var_46_cvector | var_46_cvector;
	var_49_float = sqrt(var_50_int);
	var_51_float = 9.999999974752427e-07;
	var_52_bool = var_49_float < var_51_float;
	if(var_52_bool != 0) {
		var_45_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_45_cvector = var_46_cvector / var_49_float;
	return 2;
}


func_514()
{
	var_146_bool = 0; var_147_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_149_bool = 0;
	func_809(var_149_bool);
	if(var_149_bool != 0) {
	} else {
		HasAnimationTrack(var_147_bool, "head");
		var_151_bool = var_147_bool;
		if(var_151_bool == 0) goto Label_531;
		UnlookAsync("head");
	}
Label_531:
	return 2;
	
}


func_647(var_33_float)
{
	var_34_float = 0; var_35_float = 0;
	GetGameTime(var_35_float);
	var_35_float = var_33_float;
	return 2;
}


func_713()
{
	var_36_object = Obj(); var_37_object = Obj();
	CreateDiaryEntry(var_37_object, (int)54, (int)1, (int)512136);
	var_41_bool = 0; var_42_object = Obj(); var_43_int = 0;
	var_37_object = var_42_object;
	func_739(var_41_bool, var_42_object, (int)10);
	return 2;
}
EMIT "Stack[-1] = 0";


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_79_object, var_80_object)
{
	var_0_object = var_80_object;
	var_1_object = var_79_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_86_bool = 0; var_87_object = Obj();
		var_87_object = var_1_object;
		func_701(var_87_object);
		if(var_86_bool != 0) {
			var_94_string = "";
			func_157(var_80_object, "Neutral");
			@@@var_0_object:SetMessage((int)506748);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)506749, (int)7440, (int)7439);
			@@@var_0_object:AddReply((int)507345, (int)7440, (int)8098);
			@@@var_0_object:AddReply((int)507350, (int)7440, (int)8104);
		} else {
				var_139_string = "";
				func_157(var_80_object, "Neutral");
				@@@var_0_object:SetMessage((int)506753);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)506754, (int)8102, (int)7444);
				goto Label_127;
		}
	}
Label_127:
	var_121_bool = 0;
	func_809(var_121_bool);
	if(var_121_bool != 0) {

	Label_131:
		lshWaitForAnimEnd();
		var_122_string = var_3_string;
		if(var_122_string != 0) {
		} else {
			var_123_string = "";
			var_123_string = var_2_object;
			func_532(var_123_string);
			goto Label_131;
	}
		PlayAnimation("all", "idle");

	Label_146:
		WaitForAnimEnd();
		var_136_string = var_3_string;
		if(var_136_string != 0) {
			goto Label_156;
		}
		PlayAnimation("all", "idle");
		goto Label_146;

	}
	goto Label_156;
	
Label_156:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


func_586(var_88_int, var_89_string)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable(var_89_string, var_91_int);
	var_91_int = var_88_int;
	return 2;
}


func_652()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_591(var_76_int, var_77_int)
{
	var_78_object = Obj(); var_79_object = Obj();
	CreateIntVector(var_79_object);
	@@var_79_object:add(var_76_int);
	@@var_79_object:add(var_77_int);
	SendWorldWndMessage((int)3, var_79_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_784(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("branch", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x31f";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
	return 2;
}


func_658()
{
	SetVariable("ood2WomanD1", (int)1);
	return 0;
}


func_767(var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj();
	GetMainOutdoorScene(var_25_object);
	var_27_bool = var_25_object == 0; //@ne
	if(var_27_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_26_object = 0;
		var_26_object = var_22_object;
		return 4;
	}
	@@var_25_object:GetMap(var_26_object);
	var_26_object = var_22_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_532(var_123_string)
{
	var_124_bool = 0; var_125_float = 0; var_126_float = 0; var_127_bool = 0; var_128_float = 0; var_129_float = 0;
	lshHasAnimation(var_127_bool, var_123_string);
	var_130_bool = var_127_bool;
	if(var_130_bool != 0) {
		lshGetAnimTimes(var_123_string, var_128_float, var_129_float);
		lshPlayAnimation(var_128_float, var_129_float, (bool)0);
	} else {
		var_133_int = "Can't find lsh animation : " + var_123_string;
		Trace(var_133_int);
	}
	return 6;
	
}


func_726(var_50_object)
{
	var_51_object = Obj(); var_52_object = Obj();
	GetDiaryRoot(var_52_object);
	var_53_bool = var_52_object == 0; //@nz
	if(var_53_bool != 0) {
		Trace("Can't retrieve diary root");
		var_50_object = 0;
		return 2;
	}
	var_52_object = var_50_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_664(var_16_object)
{
	var_18_object = Obj(); var_19_object = Obj();
	SetVariable("d2q01", (int)5);
	func_767(Obj());
	var_22_object = var_19_object;
	var_33_float = 0;
	func_647(var_33_float);
	@@var_19_object:AddMark("d2q01WomanDGotoAlexandr", "pt_map_alexandr", (int)1, (int)515271, var_33_float);
	func_713();
	Trace("key is given");
	var_60_object = Obj(); var_61_string = ""; var_62_int = 0;
	var_16_object = var_60_object;
	func_622(var_60_object, "d2q01_key", (int)1);
	var_81_bool = 0; var_82_string = ""; var_83_string = "";
	func_635(var_81_bool, "quest_d2_01", "cursed_women");
	return 2;
}
EMIT "Stack[-1] = 0";


func_603(var_65_object, var_66_object, var_67_int)
{
	var_68_int = 0; var_69_int = 0; var_70_bool = 0; var_71_int = 0; var_72_int = 0; var_73_bool = 0;
	@@var_66_object:GetItemID(var_71_int);
	GetInvItemProperty(var_72_int, var_71_int, "Category");
	@@var_65_object:AddItem(var_73_bool, var_66_object, var_72_int, var_67_int);
	var_75_bool = var_73_bool == 0; //@nz
	if(var_75_bool != 0) {
		@@var_65_object:DropItems(var_66_object, var_67_int);
	} else {
		var_76_int = 0; var_77_int = 0;
		var_71_int = var_76_int;
		var_67_int = var_77_int;
		func_591(var_76_int, var_77_int);
	}
	return 6;
	
}


func_157(var_2_object, var_94_string)
{
	var_95_bool = 0;
	func_809(var_95_bool);
	var_96_bool = var_95_bool == 0; //@nz
	if(var_96_bool != 0) {
		return 0;
	}
	var_97_bool = var_94_string == var_2_object;
	if(var_97_bool != 0) {
		return 0;
	}
	var_98_string = ""; var_99_bool = 0;
	var_94_string = var_98_string;
	var_101_bool = var_94_string == "";
	if(var_101_bool != 0) {
		var_99_bool = 0;
	} else {
		var_99_bool = 1;
	}
	func_548(var_98_string, var_99_bool);
	var_2_object = var_94_string;
	return 0;
	
}


func_801(var_67_int)
{
	var_67_int = 515567;
	return 0;
}


func_803(var_66_int)
{
	var_66_int = 503352;
	return 0;
}


func_548(var_98_string, var_99_bool)
{
	var_102_bool = 0; var_103_float = 0; var_104_float = 0; var_105_bool = 0; var_106_float = 0; var_107_float = 0;
	lshHasAnimation(var_105_bool, var_98_string);
	var_108_bool = var_105_bool;
	if(var_108_bool != 0) {
		lshGetAnimTimes(var_98_string, var_106_float, var_107_float);
		lshPlayAnimation(var_106_float, var_107_float, var_99_bool);
	} else {
		var_110_int = "Can't find lsh animation : " + var_98_string;
		Trace(var_110_int);
	}
	return 6;
	
}


func_805(var_68_string)
{
	var_68_string = "ui/NPC_Citizen3.png";
	return 0;
}


func_739(var_41_bool, var_42_object, var_43_int)
{
	var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0;
	func_726(Obj());
	var_50_object = var_47_object;
	@@var_47_object:Find(var_43_int, var_48_object);
	var_55_bool = var_48_object == 0; //@nz
	if(var_55_bool != 0) {
		var_57_int = "Can't find diary parent with id: " + var_43_int;
		Trace(var_57_int);
		var_41_bool = 0;
		return 6;
	}
	@@var_48_object:AddChild(var_42_object);
	SendWorldWndMessage((int)7);
	@@var_42_object:GetCategory(var_49_int);
	SetDiarySection(var_49_int);
	var_41_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_807(var_69_string)
{
	var_69_string = "ui/NPC_Citizen3_b.png";
	return 0;
}


func_635(var_81_bool, var_82_string, var_83_string)
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


func_809(var_61_bool)
{
	var_61_bool = 0;
	return 0;
}


func_622(var_60_object, var_61_string, var_62_int)
{
	var_63_object = Obj(); var_64_object = Obj();
	CreateInvItem(var_64_object);
	@@var_64_object:SetItemName(var_61_string);
	var_65_object = Obj(); var_66_object = Obj(); var_67_int = 0;
	var_60_object = var_65_object;
	var_64_object = var_66_object;
	var_62_int = var_67_int;
	func_603(var_65_object, var_66_object, var_67_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_563()
{
	var_9_bool = 0;
	func_809(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_570(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_443(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_701(var_86_bool)
{
	var_88_int = 0; var_89_string = "";
	func_586(var_88_int, "ood2WomanD1");
	var_93_bool = var_88_int == (int)0;
	if(var_93_bool != 0) {
		var_86_bool = 1;
		return 0;
	}
	var_86_bool = 0;
	return 0;
}


func_445(var_18_bool, var_19_object, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0;
	@@var_19_object:GetPosition(var_31_cvector);
	@@var_19_object:GetEyesHeight(var_30_float);
	var_39_float = GetByIndex(var_31_cvector, 1);
	var_39_float = var_39_float + var_30_float;
	SetByIndex(var_31_cvector, 1) = var_39_float;
	GetPosition(var_32_cvector);
	GetEyesHeight(var_30_float);
	var_40_float = GetByIndex(var_32_cvector, 1);
	var_40_float = var_40_float + var_30_float;
	SetByIndex(var_32_cvector, 1) = var_40_float;
	var_33_cvector = var_31_cvector - var_32_cvector;
	var_41_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (float)0;
	var_42_int = var_33_cvector | var_33_cvector;
	var_43_float = sqrt(var_42_int);
	var_33_cvector = var_33_cvector / var_43_float;
	var_34_cvector = -var_33_cvector;
	var_44_float = var_33_cvector * var_20_float;
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0);
	var_46_cvector = var_34_cvector ^ CVector(0.0, 1.0, 0.0);
	func_576(var_45_cvector, var_46_cvector);
	var_54_float = var_45_cvector * (int)25;
	var_55_int = var_44_float + var_54_float;
	var_35_cvector = var_55_int - CVector(0.0, 10.0, 0.0);
	var_36_cvector = var_32_cvector + var_35_cvector;
	IsOverrideActive(var_37_bool);
	var_57_bool = var_37_bool;
	if(var_57_bool != 0) {
		var_18_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_36_cvector, var_34_cvector, (bool)1);
	var_59_float = GetByIndex(var_35_cvector, 0);
	var_60_float = GetByIndex(var_35_cvector, 2);
	Rotate(var_59_float, var_60_float);
	var_61_bool = 0;
	func_809(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		HasAnimationTrack(var_38_bool, "head");
		var_63_bool = var_38_bool;
		if(var_63_bool == 0) goto Label_508;
		LookAsyncCamera("head");
	}
Label_508:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 18;
	
}


