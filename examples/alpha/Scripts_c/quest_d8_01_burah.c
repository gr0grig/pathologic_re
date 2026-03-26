// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,self/1,GetVariable/2,GetInvItemProperty/3,CreateInvItem/1,TriggerWorld/2,SetVariable/2,GetDiaryRoot/1,SetDiarySection/1,CreateDiaryEntry/4
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:playsound|W:giveitem|W:d8q03|W:burah gives blood|W:d8q03_blood|W:burah gives serum|W:burah_serum|W:ood8Burah1|W:microscope_d8q03_blood|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:player|W:Adding diary entry|W:ui/NPC_Burah.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x274
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xab vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x26c vars=object
// @EVENT_26: op=0x278 vars=string
// @EVENT_6: op=0x294 vars=
// @PE: 0x3f,0x9b,0xab,0x26c,0x2de,0x32a,0x330,0x339,0x342,0x34d,0x356,0x361,0x367,0x373,0x37f,0x38b

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_756();
		var_11_bool = var_7_bool == (int)14668;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_816();
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_834(var_42_object);
			var_60_object = Obj(); var_61_object = Obj();
			var_60_object = var_1_object;
			var_61_object = var_0_object;
			func_810();
		}
		var_65_bool = var_7_bool == (int)14696;
		if(var_65_bool != 0) {
			var_66_object = Obj(); var_67_object = Obj();
			var_66_object = var_1_object;
			var_67_object = var_0_object;
			func_854(var_67_object);
			var_72_object = Obj(); var_73_object = Obj();
			var_72_object = var_1_object;
			var_73_object = var_0_object;
			func_810();
			var_74_object = Obj(); var_75_object = Obj();
			var_74_object = var_1_object;
			var_75_object = var_0_object;
			func_825();
		}
		var_88_bool = var_7_bool == (int)14692;
		if(var_88_bool != 0) {
			var_89_object = Obj(); var_90_object = Obj();
			var_89_object = var_1_object;
			var_90_object = var_0_object;
			func_845();
		}
		var_103_bool = var_7_bool == (int)14669;
		if(var_103_bool != 0) {
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_865();
		}
		var_109_bool = var_6_int == (int)14659;
		if(var_109_bool != 0) {
			var_110_string = "";
			func_155(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13423);
			@@@var_0_object:ClearReplies();
			var_126_bool = 0; var_127_object = Obj();
			var_127_object = var_1_object;
			func_871(var_127_object);
			if(var_126_bool != 0) {
				@@@var_0_object:AddReply((int)13424, (int)14661, (int)14660);
			}
			var_137_bool = 0;
			var_137_bool = 0;
			var_138_bool = 0; var_139_object = Obj();
			var_139_object = var_1_object;
			func_883(var_139_object);
			if(var_138_bool != 0) {
				var_144_bool = 0; var_145_object = Obj();
				var_145_object = var_1_object;
				func_895(var_145_object);
				if(var_144_bool != 0) {
					var_137_bool = 1;
				}
			}
			if(var_137_bool != 0) {
				@@@var_0_object:AddReply((int)13447, (int)14684, (int)14683);
			}
			var_153_bool = 0; var_154_object = Obj();
			var_154_object = var_1_object;
			func_907(var_154_object);
			if(var_153_bool != 0) {
				@@@var_0_object:AddReply((int)13433, (int)14670, (int)14669);
			}
			@@@var_0_object:AddReply((int)13460, (int)-1, (int)14697);
			return 0;
		}
		var_166_bool = var_6_int == (int)14670;
		if(var_166_bool != 0) {
			var_167_string = "";
			func_155(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13434);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13435, (int)14672, (int)14671);
			return 0;
		}
		var_173_bool = var_6_int == (int)14672;
		if(var_173_bool != 0) {
			var_174_string = "";
			func_155(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13436);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13437, (int)14674, (int)14673);
			return 0;
		}
		var_180_bool = var_6_int == (int)14674;
		if(var_180_bool != 0) {
			var_181_string = "";
			func_155(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13438);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13494, (int)14736, (int)14735);
			@@@var_0_object:AddReply((int)13491, (int)14732, (int)14731);
			return 0;
		}
		var_190_bool = var_6_int == (int)14732;
		if(var_190_bool != 0) {
			var_191_string = "";
			func_155(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13492);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13493, (int)14678, (int)14733);
			return 0;
		}
		var_197_bool = var_6_int == (int)14736;
		if(var_197_bool != 0) {
			var_198_string = "";
			func_155(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13495);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13439, (int)14676, (int)14675);
			return 0;
		}
		var_204_bool = var_6_int == (int)14676;
		if(var_204_bool != 0) {
			var_205_string = "";
			func_155(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13440);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13441, (int)14678, (int)14677);
			return 0;
		}
		var_211_bool = var_6_int == (int)14678;
		if(var_211_bool != 0) {
			var_212_string = "";
			func_155(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13442);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13444, (int)14681, (int)14680);
			return 0;
		}
		var_218_bool = var_6_int == (int)14681;
		if(var_218_bool != 0) {
			var_219_string = "";
			func_155(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13445);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13446, (int)-1, (int)14682);
			return 0;
		}
		var_225_bool = var_6_int == (int)14684;
		if(var_225_bool != 0) {
			var_226_string = "";
			func_155(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13448);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13449, (int)14686, (int)14685);
			@@@var_0_object:AddReply((int)13451, (int)14688, (int)14687);
			return 0;
		}
		var_235_bool = var_6_int == (int)14688;
		if(var_235_bool != 0) {
			var_236_string = "";
			func_155(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13452);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13453, (int)14690, (int)14689);
			return 0;
		}
		var_242_bool = var_6_int == (int)14690;
		if(var_242_bool != 0) {
			var_243_string = "";
			func_155(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13454);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13455, (int)14694, (int)14691);
			@@@var_0_object:AddReply((int)13456, (int)-1, (int)14692);
			return 0;
		}
		var_252_bool = var_6_int == (int)14686;
		if(var_252_bool != 0) {
			var_253_string = "";
			func_155(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13450);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13457, (int)14694, (int)14693);
			return 0;
		}
		var_259_bool = var_6_int == (int)14694;
		if(var_259_bool != 0) {
			var_260_string = "";
			func_155(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13458);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13459, (int)-1, (int)14696);
			return 0;
		}
		var_266_bool = var_6_int == (int)14661;
		if(var_266_bool != 0) {
			var_267_string = "";
			func_155(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13425);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13426, (int)14663, (int)14662);
			return 0;
		}
		var_273_bool = var_6_int == (int)14663;
		if(var_273_bool != 0) {
			var_274_string = "";
			func_155(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13427);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13428, (int)14665, (int)14664);
			return 0;
		}
		var_280_bool = var_6_int == (int)14665;
		if(var_280_bool != 0) {
			var_281_string = "";
			func_155(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13429);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13430, (int)14667, (int)14666);
			return 0;
		}
		var_287_bool = var_6_int == (int)14667;
		if(var_287_bool != 0) {
			var_288_string = "";
			func_155(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13431);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13432, (int)-1, (int)14668);
			return 0;
		}
		var_3_string = true;
		var_293_bool = 0;
		func_1030(var_293_bool);
		if(var_293_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xac";
	
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
			func_676(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_763(var_14_object);
			RemoveActor(var_14_object);
		}
	} else {
		var_18_bool = var_6_string == "restore";
		if(var_18_bool == 0) goto Label_659;
		var_0_object = false;
	}
Label_659:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_676(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_763(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_628:
	Hold();
	goto Label_628;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj();
	var_8_object = var_19_object;
	func_678(var_18_bool, var_19_object);
	var_58_bool = var_18_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_59_int = 0;
	func_1026(var_59_int);
	@@var_14_object:SetNPCName(var_59_int);
	var_60_string = "";
	func_1028(var_60_string);
	@@var_14_object:SetPhoto(var_60_string);
	var_61_int = 0;
	func_961(var_61_int);
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
	var_140_bool = var_17_bool == 0; //@nz
	if(var_140_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_45;
	}
	var_8_object = Obj();
	func_734();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_769(var_43_cvector, var_44_cvector)
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


func_1026(var_59_int)
{
	var_59_int = 11961;
	return 0;
}


func_1028(var_60_string)
{
	var_60_string = "ui/NPC_Burah.png";
	return 0;
}


func_1030(var_78_bool)
{
	var_78_bool = 1;
	return 0;
}


func_907(var_120_bool)
{
	var_122_int = 0; var_123_string = "";
	func_779(var_122_int, "ood8Burah1");
	var_125_bool = var_122_int == (int)0;
	if(var_125_bool != 0) {
		var_120_bool = 1;
		return 0;
	}
	var_120_bool = 0;
	return 0;
}


func_779(var_95_int, var_96_string)
{
	var_97_int = 0; var_98_int = 0;
	GetVariable(var_96_string, var_98_int);
	var_98_int = var_95_int;
	return 2;
}


func_784(var_49_object, var_50_object, var_51_int)
{
	var_52_int = 0; var_53_int = 0; var_54_bool = 0; var_55_int = 0; var_56_int = 0; var_57_bool = 0;
	@@var_50_object:GetItemID(var_55_int);
	GetInvItemProperty(var_56_int, var_55_int, "Category");
	@@var_49_object:AddItem(var_57_bool, var_50_object, var_56_int, var_51_int);
	var_59_bool = var_57_bool == 0; //@nz
	if(var_59_bool != 0) {
		@@var_49_object:DropItems(var_50_object, var_51_int);
	}
	return 6;
}


func_919(var_31_object)
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


func_155(var_2_object, var_77_string)
{
	var_78_bool = 0;
	func_1030(var_78_bool);
	var_79_bool = var_78_bool == 0; //@nz
	if(var_79_bool != 0) {
		return 0;
	}
	var_80_bool = var_77_string == var_2_object;
	if(var_80_bool != 0) {
		return 0;
	}
	var_81_string = "";
	var_77_string = var_81_string;
	func_738(var_81_string);
	var_2_object = var_77_string;
	return 0;
}


func_797(var_44_object, var_45_string, var_46_int)
{
	var_47_object = Obj(); var_48_object = Obj();
	CreateInvItem(var_48_object);
	@@var_48_object:SetItemName(var_45_string);
	var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0;
	var_44_object = var_49_object;
	var_48_object = var_50_object;
	var_46_int = var_51_int;
	func_784(var_49_object, var_50_object, var_51_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_676(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_932(var_22_bool, var_23_object, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0;
	func_919(Obj());
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
	SetVariable("player_diary", (int)1);
	@@var_23_object:GetCategory(var_30_int);
	SetDiarySection(var_30_int);
	var_22_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_678(var_18_bool, var_19_object)
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
	func_769(var_43_cvector, var_44_cvector);
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


func_810()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_816()
{
	SetVariable("d8q03", (int)1);
	func_978();
	return 0;
}


func_825()
{
	SetVariable("d8q03", (int)1000);
	func_994();
	return 0;
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_70_object, var_71_object)
{
	var_0_object = var_71_object;
	var_1_object = var_70_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_77_string = "";
		func_155(var_71_object, "Neutral");
		@@@var_0_object:SetMessage((int)13423);
		@@@var_0_object:ClearReplies();
		var_93_bool = 0; var_94_object = Obj();
		var_94_object = var_1_object;
		func_871(var_94_object);
		if(var_93_bool != 0) {
			@@@var_0_object:AddReply((int)13424, (int)14661, (int)14660);
		}
		var_104_bool = 0;
		var_104_bool = 0;
		var_105_bool = 0; var_106_object = Obj();
		var_106_object = var_1_object;
		func_883(var_106_object);
		if(var_105_bool != 0) {
			var_111_bool = 0; var_112_object = Obj();
			var_112_object = var_1_object;
			func_895(var_112_object);
			if(var_111_bool != 0) {
				var_104_bool = 1;
			}
		}
		if(var_104_bool != 0) {
			@@@var_0_object:AddReply((int)13447, (int)14684, (int)14683);
		}
		var_120_bool = 0; var_121_object = Obj();
		var_121_object = var_1_object;
		func_907(var_121_object);
		if(var_120_bool != 0) {
			@@@var_0_object:AddReply((int)13433, (int)14670, (int)14669);
		}
		@@@var_0_object:AddReply((int)13460, (int)-1, (int)14697);
		goto Label_125;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x43";
	}
Label_125:
	var_132_bool = 0;
	func_1030(var_132_bool);
	if(var_132_bool != 0) {

	Label_129:
		lshWaitForAnimEnd();
		var_133_string = var_3_string;
		if(var_133_string != 0) {
		} else {
			var_134_string = "";
			var_134_string = var_2_object;
			func_738(var_134_string);
			goto Label_129;
	}
		PlayAnimation("all", "idle");

	Label_144:
		WaitForAnimEnd();
		var_137_string = var_3_string;
		if(var_137_string != 0) {
			goto Label_154;
		}
		PlayAnimation("all", "idle");
		goto Label_144;
	}
	goto Label_154;
	
Label_154:
	return 0;
	
}


func_961(var_61_int)
{
	var_62_int = 0; var_63_int = 0;
	GetVariable("player", var_63_int);
	var_66_bool = var_63_int == (int)0;
	if(var_66_bool != 0) {
		var_61_int = 200001;
		return 2;
	EMIT "GOTO 0x3d0";
	}
	var_68_bool = var_63_int == (int)1;
	if(var_68_bool != 0) {
		var_61_int = 200002;
		return 2;
	}
	var_61_int = 200003;
	return 2;
}


func_834(var_41_object)
{
	Trace("burah gives blood");
	var_44_object = Obj(); var_45_string = ""; var_46_int = 0;
	var_41_object = var_44_object;
	func_797(var_44_object, "d8q03_blood", (int)1);
	return 0;
}


func_845()
{
	SetVariable("d8q03", (int)-1);
	func_1010();
	return 0;
}


func_978()
{
	var_16_object = Obj(); var_17_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_17_object, (int)124, (int)2, (int)13763);
	var_22_bool = 0; var_23_object = Obj(); var_24_int = 0;
	var_17_object = var_23_object;
	func_932(var_22_bool, var_23_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_854(var_66_object)
{
	Trace("burah gives serum");
	var_69_object = Obj(); var_70_string = ""; var_71_int = 0;
	var_66_object = var_69_object;
	func_797(var_69_object, "burah_serum", (int)1);
	return 0;
}


func_734()
{
	CameraSwitchToNormal();
	return 0;
}


func_865()
{
	SetVariable("ood8Burah1", (int)1);
	return 0;
}


func_738(var_81_string)
{
	var_82_float = 0; var_83_float = 0; var_84_float = 0; var_85_float = 0;
	var_87_int = "playing " + var_81_string;
	Trace(var_87_int);
	lshGetAnimTimes(var_81_string, var_84_float, var_85_float);
	lshPlayAnimation(var_84_float, var_85_float);
	var_89_int = "start: " + var_84_float;
	Trace(var_89_int);
	var_91_int = "end: " + var_85_float;
	Trace(var_91_int);
	return 4;
}


func_994()
{
	var_78_object = Obj(); var_79_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_79_object, (int)125, (int)2, (int)13764);
	var_84_bool = 0; var_85_object = Obj(); var_86_int = 0;
	var_79_object = var_85_object;
	func_932(var_84_bool, var_85_object, (int)124);
	return 2;
}
EMIT "Stack[-1] = 0";


func_871(var_93_bool)
{
	var_95_int = 0; var_96_string = "";
	func_779(var_95_int, "d8q03");
	var_100_bool = var_95_int == (int)0;
	if(var_100_bool != 0) {
		var_93_bool = 1;
		return 0;
	}
	var_93_bool = 0;
	return 0;
}


func_1010()
{
	var_93_object = Obj(); var_94_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_94_object, (int)126, (int)2, (int)13765);
	var_99_bool = 0; var_100_object = Obj(); var_101_int = 0;
	var_94_object = var_100_object;
	func_932(var_99_bool, var_100_object, (int)124);
	return 2;
}
EMIT "Stack[-1] = 0";


func_883(var_105_bool)
{
	var_107_int = 0; var_108_string = "";
	func_779(var_107_int, "microscope_d8q03_blood");
	var_110_bool = var_107_int == (int)1;
	if(var_110_bool != 0) {
		var_105_bool = 1;
		return 0;
	}
	var_105_bool = 0;
	return 0;
}


func_756()
{
	var_9_bool = 0;
	func_1030(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_763(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_895(var_111_bool)
{
	var_113_int = 0; var_114_string = "";
	func_779(var_113_int, "d8q03");
	var_116_bool = var_113_int == (int)1;
	if(var_116_bool != 0) {
		var_111_bool = 1;
		return 0;
	}
	var_111_bool = 0;
	return 0;
}


