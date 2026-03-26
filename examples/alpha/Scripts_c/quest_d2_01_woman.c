// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,self/1,GetVariable/2,GetInvItemProperty/3,CreateInvItem/1,FindActor/2,Trigger/2,GetGameTime/1,TriggerWorld/2,SetVariable/2,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1,CreateDiaryEntry/4
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:playsound|W:giveitem|W:ood2WomanD1|W:d2q01|W:d2q01WomanDGotoAlexandr|W:pt_map_alexandr|A:AddMark|W:key is given|W:d2q01_key|W:quest_d2_01|W:cursed_women|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:player|W:Adding diary entry|W:ui/NPC_None.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x17a
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa2 vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x172 vars=object
// @EVENT_26: op=0x17e vars=string
// @EVENT_6: op=0x19a vars=
// @PE: 0x3f,0x92,0xa2,0x172,0x1e4,0x241,0x247,0x272

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_506();
		var_11_bool = var_7_bool == (int)8110;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_583();
			var_16_object = Obj(); var_17_object = Obj();
			var_16_object = var_1_object;
			var_17_object = var_0_object;
			func_589(var_17_object);
			var_84_object = Obj(); var_85_object = Obj();
			var_84_object = var_1_object;
			var_85_object = var_0_object;
			func_577();
		}
		var_89_bool = var_6_int == (int)7438;
		if(var_89_bool != 0) {
			var_90_bool = 0; var_91_object = Obj();
			var_91_object = var_1_object;
			func_626(var_91_object);
			if(var_90_bool != 0) {
				var_98_string = "";
				func_146(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)6748);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)6749, (int)7440, (int)7439);
				@@@var_0_object:AddReply((int)7345, (int)7440, (int)8098);
				@@@var_0_object:AddReply((int)7350, (int)7440, (int)8104);
				return 0;
			}
			var_123_string = "";
			func_146(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6753);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6754, (int)8102, (int)7444);
			return 0;
		}
		var_129_bool = var_6_int == (int)8102;
		if(var_129_bool != 0) {
			var_130_string = "";
			func_146(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7348);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7349, (int)-1, (int)8103);
			return 0;
		}
		var_136_bool = var_6_int == (int)7440;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_146(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6750);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6751, (int)8099, (int)7441);
			@@@var_0_object:AddReply((int)7356, (int)8106, (int)8111);
			return 0;
		}
		var_146_bool = var_6_int == (int)8099;
		if(var_146_bool != 0) {
			var_147_string = "";
			func_146(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7346);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7347, (int)8106, (int)8100);
			return 0;
		}
		var_153_bool = var_6_int == (int)8106;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_146(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7351);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7352, (int)7442, (int)8107);
			@@@var_0_object:AddReply((int)7357, (int)7442, (int)8113);
			return 0;
		}
		var_163_bool = var_6_int == (int)7442;
		if(var_163_bool != 0) {
			var_164_string = "";
			func_146(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6752);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7353, (int)8109, (int)8108);
			@@@var_0_object:AddReply((int)7358, (int)8109, (int)8115);
			return 0;
		}
		var_173_bool = var_6_int == (int)8109;
		if(var_173_bool != 0) {
			var_174_string = "";
			func_146(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7354);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7355, (int)-1, (int)8110);
			return 0;
		}
		var_3_string = true;
		var_179_bool = 0;
		func_734(var_179_bool);
		if(var_179_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa3";
	
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
			func_426(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_513(var_14_object);
			RemoveActor(var_14_object);
		}
	} else {
		var_18_bool = var_6_string == "restore";
		if(var_18_bool == 0) goto Label_409;
		var_0_object = false;
	}
Label_409:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_426(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_513(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_378:
	Hold();
	goto Label_378;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj();
	var_8_object = var_19_object;
	func_428(var_18_bool, var_19_object);
	var_58_bool = var_18_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_59_int = 0;
	func_730(var_59_int);
	@@var_14_object:SetNPCName(var_59_int);
	var_60_string = "";
	func_732(var_60_string);
	@@var_14_object:SetPhoto(var_60_string);
	var_61_int = 0;
	func_697(var_61_int);
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
	var_123_bool = var_17_bool == 0; //@nz
	if(var_123_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_45;
	}
	var_8_object = Obj();
	func_484();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_513(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_577()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_519(var_43_cvector, var_44_cvector)
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


func_583()
{
	SetVariable("ood2WomanD1", (int)1);
	return 0;
}


func_714()
{
	var_36_object = Obj(); var_37_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_37_object, (int)54, (int)1, (int)12136);
	var_42_bool = 0; var_43_object = Obj(); var_44_int = 0;
	var_37_object = var_43_object;
	func_651(var_42_bool, var_43_object, (int)10);
	return 2;
}
EMIT "Stack[-1] = 0";


func_651(var_42_bool, var_43_object, var_44_int)
{
	var_45_object = Obj(); var_46_object = Obj(); var_47_int = 0; var_48_object = Obj(); var_49_object = Obj(); var_50_int = 0;
	func_638(Obj());
	var_51_object = var_48_object;
	@@var_48_object:Find(var_44_int, var_49_object);
	var_56_bool = var_49_object == 0; //@nz
	if(var_56_bool != 0) {
		var_58_int = "Can't find diary parent with id: " + var_44_int;
		Trace(var_58_int);
		var_42_bool = 0;
		return 6;
	}
	@@var_49_object:AddChild(var_43_object);
	SetVariable("player_diary", (int)1);
	@@var_43_object:GetCategory(var_50_int);
	SetDiarySection(var_50_int);
	var_42_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_589(var_16_object)
{
	var_18_object = Obj(); var_19_object = Obj();
	SetVariable("d2q01", (int)5);
	func_680(Obj());
	var_22_object = var_19_object;
	var_33_float = 0;
	func_572(var_33_float);
	@@var_19_object:AddMark("d2q01WomanDGotoAlexandr", "pt_map_alexandr", (int)1, (int)15271, var_33_float);
	func_714();
	Trace("key is given");
	var_62_object = Obj(); var_63_string = ""; var_64_int = 0;
	var_16_object = var_62_object;
	func_547(var_62_object, "d2q01_key", (int)1);
	var_78_bool = 0; var_79_string = ""; var_80_string = "";
	func_560(var_78_bool, "quest_d2_01", "cursed_women");
	return 2;
}
EMIT "Stack[-1] = 0";


func_529(var_79_int, var_80_string)
{
	var_81_int = 0; var_82_int = 0;
	GetVariable(var_80_string, var_82_int);
	var_82_int = var_79_int;
	return 2;
}


func_146(var_2_object, var_85_string)
{
	var_86_bool = 0;
	func_734(var_86_bool);
	var_87_bool = var_86_bool == 0; //@nz
	if(var_87_bool != 0) {
		return 0;
	}
	var_88_bool = var_85_string == var_2_object;
	if(var_88_bool != 0) {
		return 0;
	}
	var_89_string = "";
	var_85_string = var_89_string;
	func_488(var_89_string);
	var_2_object = var_85_string;
	return 0;
}


func_534(var_67_object, var_68_object, var_69_int)
{
	var_70_int = 0; var_71_int = 0; var_72_bool = 0; var_73_int = 0; var_74_int = 0; var_75_bool = 0;
	@@var_68_object:GetItemID(var_73_int);
	GetInvItemProperty(var_74_int, var_73_int, "Category");
	@@var_67_object:AddItem(var_75_bool, var_68_object, var_74_int, var_69_int);
	var_77_bool = var_75_bool == 0; //@nz
	if(var_77_bool != 0) {
		@@var_67_object:DropItems(var_68_object, var_69_int);
	}
	return 6;
}


func_730(var_59_int)
{
	var_59_int = 3352;
	return 0;
}


func_732(var_60_string)
{
	var_60_string = "ui/NPC_None.png";
	return 0;
}


func_734(var_86_bool)
{
	var_86_bool = 0;
	return 0;
}


func_547(var_62_object, var_63_string, var_64_int)
{
	var_65_object = Obj(); var_66_object = Obj();
	CreateInvItem(var_66_object);
	@@var_66_object:SetItemName(var_63_string);
	var_67_object = Obj(); var_68_object = Obj(); var_69_int = 0;
	var_62_object = var_67_object;
	var_66_object = var_68_object;
	var_64_int = var_69_int;
	func_534(var_67_object, var_68_object, var_69_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_484()
{
	CameraSwitchToNormal();
	return 0;
}


func_680(var_22_object)
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


func_488(var_89_string)
{
	var_90_float = 0; var_91_float = 0; var_92_float = 0; var_93_float = 0;
	var_95_int = "playing " + var_89_string;
	Trace(var_95_int);
	lshGetAnimTimes(var_89_string, var_92_float, var_93_float);
	lshPlayAnimation(var_92_float, var_93_float);
	var_97_int = "start: " + var_92_float;
	Trace(var_97_int);
	var_99_int = "end: " + var_93_float;
	Trace(var_99_int);
	return 4;
}


func_426(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_428(var_18_bool, var_19_object)
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
	func_519(var_43_cvector, var_44_cvector);
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


func_560(var_78_bool, var_79_string, var_80_string)
{
	var_81_object = Obj(); var_82_object = Obj();
	FindActor(var_82_object, var_79_string);
	var_83_bool = var_82_object == 0; //@ne
	if(var_83_bool != 0) {
		var_78_bool = 0;
		return 2;
	}
	Trigger(var_82_object, var_80_string);
	var_78_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_626(var_77_bool)
{
	var_79_int = 0; var_80_string = "";
	func_529(var_79_int, "ood2WomanD1");
	var_84_bool = var_79_int == (int)0;
	if(var_84_bool != 0) {
		var_77_bool = 1;
		return 0;
	}
	var_77_bool = 0;
	return 0;
}


func_697(var_61_int)
{
	var_62_int = 0; var_63_int = 0;
	GetVariable("player", var_63_int);
	var_66_bool = var_63_int == (int)0;
	if(var_66_bool != 0) {
		var_61_int = 200001;
		return 2;
	EMIT "GOTO 0x2c8";
	}
	var_68_bool = var_63_int == (int)1;
	if(var_68_bool != 0) {
		var_61_int = 200002;
		return 2;
	}
	var_61_int = 200003;
	return 2;
}


func_506()
{
	var_9_bool = 0;
	func_734(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_572(var_33_float)
{
	var_34_float = 0; var_35_float = 0;
	GetGameTime(var_35_float);
	var_35_float = var_33_float;
	return 2;
}


func_638(var_51_object)
{
	var_52_object = Obj(); var_53_object = Obj();
	GetDiaryRoot(var_53_object);
	var_54_bool = var_53_object == 0; //@nz
	if(var_54_bool != 0) {
		Trace("Can't retrieve diary root");
		var_51_object = 0;
		return 2;
	}
	var_53_object = var_51_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_70_object, var_71_object)
{
	var_0_object = var_71_object;
	var_1_object = var_70_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_77_bool = 0; var_78_object = Obj();
		var_78_object = var_1_object;
		func_626(var_78_object);
		if(var_77_bool != 0) {
			var_85_string = "";
			func_146(var_71_object, "Neutral");
			@@@var_0_object:SetMessage((int)6748);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6749, (int)7440, (int)7439);
			@@@var_0_object:AddReply((int)7345, (int)7440, (int)8098);
			@@@var_0_object:AddReply((int)7350, (int)7440, (int)8104);
		} else {
				var_118_string = "";
				func_146(var_71_object, "Neutral");
				@@@var_0_object:SetMessage((int)6753);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)6754, (int)8102, (int)7444);
				goto Label_116;
		}
	}
Label_116:
	var_110_bool = 0;
	func_734(var_110_bool);
	if(var_110_bool != 0) {

	Label_120:
		lshWaitForAnimEnd();
		var_111_string = var_3_string;
		if(var_111_string != 0) {
		} else {
			var_112_string = "";
			var_112_string = var_2_object;
			func_488(var_112_string);
			goto Label_120;
	}
		PlayAnimation("all", "idle");

	Label_135:
		WaitForAnimEnd();
		var_115_string = var_3_string;
		if(var_115_string != 0) {
			goto Label_145;
		}
		PlayAnimation("all", "idle");
		goto Label_135;

	}
	goto Label_145;
	
Label_145:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x43";


