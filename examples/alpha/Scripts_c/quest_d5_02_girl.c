// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,self/1,GetVariable/2,FindActor/2,Trigger/2,GetGameTime/1,SetVariable/2,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1,CreateDiaryEntry/4
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:d5q02|W:d5q02NudeMeeting|W:pt_d5q01_girl_corpse1|A:AddMark|W:quest_d5_02|W:remove_girl|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:player|W:Adding diary entry|W:ui/NPC_Black.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x158
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x89 vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x150 vars=object
// @EVENT_26: op=0x15c vars=string
// @EVENT_6: op=0x178 vars=
// @PE: 0x3f,0x79,0x89,0x150,0x1c2,0x221

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_472();
		var_11_bool = var_7_bool == (int)13218;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_517();
		}
		var_64_bool = var_7_bool == (int)13214;
		if(var_64_bool != 0) {
			var_65_object = Obj(); var_66_object = Obj();
			var_65_object = var_1_object;
			var_66_object = var_0_object;
			func_517();
		}
		var_68_bool = var_7_bool == (int)13215;
		if(var_68_bool != 0) {
			var_69_object = Obj(); var_70_object = Obj();
			var_69_object = var_1_object;
			var_70_object = var_0_object;
			func_517();
		}
		var_72_bool = var_6_int == (int)13203;
		if(var_72_bool != 0) {
			var_73_bool = 0; var_74_object = Obj();
			var_74_object = var_1_object;
			func_545(var_74_object);
			if(var_73_bool != 0) {
				var_81_string = "";
				func_121(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)11988);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)11989, (int)13205, (int)13204);
				return 0;
			}
		}
		var_101_bool = var_6_int == (int)13205;
		if(var_101_bool != 0) {
			var_102_string = "";
			func_121(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11990);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11991, (int)13207, (int)13206);
			@@@var_0_object:AddReply((int)12004, (int)13207, (int)13219);
			return 0;
		}
		var_111_bool = var_6_int == (int)13207;
		if(var_111_bool != 0) {
			var_112_string = "";
			func_121(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11992);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11993, (int)13209, (int)13208);
			@@@var_0_object:AddReply((int)12005, (int)13209, (int)13221);
			return 0;
		}
		var_121_bool = var_6_int == (int)13209;
		if(var_121_bool != 0) {
			var_122_string = "";
			func_121(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11994);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11995, (int)13211, (int)13210);
			@@@var_0_object:AddReply((int)12006, (int)13213, (int)13223);
			return 0;
		}
		var_131_bool = var_6_int == (int)13211;
		if(var_131_bool != 0) {
			var_132_string = "";
			func_121(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11996);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11997, (int)13213, (int)13212);
			return 0;
		}
		var_138_bool = var_6_int == (int)13213;
		if(var_138_bool != 0) {
			var_139_string = "";
			func_121(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11998);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12001, (int)13217, (int)13216);
			@@@var_0_object:AddReply((int)11999, (int)-1, (int)13214);
			@@@var_0_object:AddReply((int)12000, (int)-1, (int)13215);
			return 0;
		}
		var_151_bool = var_6_int == (int)13217;
		if(var_151_bool != 0) {
			var_152_string = "";
			func_121(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12002);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12003, (int)-1, (int)13218);
			return 0;
		}
		var_3_string = true;
		var_157_bool = 0;
		func_653(var_157_bool);
		if(var_157_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x8a";
	
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
			func_392(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_479(var_14_object);
			RemoveActor(var_14_object);
		}
	} else {
		var_18_bool = var_6_string == "restore";
		if(var_18_bool == 0) goto Label_375;
		var_0_object = false;
	}
Label_375:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_392(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_479(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_344:
	Hold();
	goto Label_344;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj();
	var_8_object = var_19_object;
	func_394(var_18_bool, var_19_object);
	var_58_bool = var_18_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_59_int = 0;
	func_649(var_59_int);
	@@var_14_object:SetNPCName(var_59_int);
	var_60_string = "";
	func_651(var_60_string);
	@@var_14_object:SetPhoto(var_60_string);
	var_61_int = 0;
	func_616(var_61_int);
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
	var_112_bool = var_17_bool == 0; //@nz
	if(var_112_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_45;
	}
	var_8_object = Obj();
	func_450();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_512(var_29_float)
{
	var_30_float = 0; var_31_float = 0;
	GetGameTime(var_31_float);
	var_31_float = var_29_float;
	return 2;
}


func_517()
{
	var_14_object = Obj(); var_15_object = Obj();
	SetVariable("d5q02", (int)4);
	func_599(Obj());
	var_18_object = var_15_object;
	var_29_float = 0;
	func_512(var_29_float);
	@@var_15_object:AddMark("d5q02NudeMeeting", "pt_d5q01_girl_corpse1", (int)0, (int)15364, var_29_float);
	func_633();
	var_57_bool = 0; var_58_string = ""; var_59_string = "";
	func_500(var_57_bool, "quest_d5_02", "remove_girl");
	return 2;
}
EMIT "Stack[-1] = 0";


func_392(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_649(var_59_int)
{
	var_59_int = 12582;
	return 0;
}


func_394(var_18_bool, var_19_object)
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
	func_485(var_43_cvector, var_44_cvector);
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


func_651(var_60_string)
{
	var_60_string = "ui/NPC_Black.png";
	return 0;
}


func_653(var_86_bool)
{
	var_86_bool = 0;
	return 0;
}


func_545(var_77_bool)
{
	var_79_int = 0; var_80_string = "";
	func_495(var_79_int, "d5q02");
	var_84_bool = var_79_int == (int)3;
	if(var_84_bool != 0) {
		var_77_bool = 1;
		return 0;
	}
	var_77_bool = 0;
	return 0;
}


func_557(var_47_object)
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


func_570(var_38_bool, var_39_object, var_40_int)
{
	var_41_object = Obj(); var_42_object = Obj(); var_43_int = 0; var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0;
	func_557(Obj());
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


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_70_object, var_71_object)
{
	var_0_object = var_71_object;
	var_1_object = var_70_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_77_bool = 0; var_78_object = Obj();
		var_78_object = var_1_object;
		func_545(var_78_object);
		if(var_77_bool != 0) {
			var_85_string = "";
			func_121(var_71_object, "Neutral");
			@@@var_0_object:SetMessage((int)11988);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11989, (int)13205, (int)13204);
		} else {
				return 0;
		}
	}
	var_104_bool = 0;
	func_653(var_104_bool);
	if(var_104_bool != 0) {

	Label_95:
		lshWaitForAnimEnd();
		var_105_string = var_3_string;
		if(var_105_string != 0) {
		} else {
			var_106_string = "";
			var_106_string = var_2_object;
			func_454(var_106_string);
			goto Label_95;
	}
		PlayAnimation("all", "idle");

	Label_110:
		WaitForAnimEnd();
		var_109_string = var_3_string;
		if(var_109_string != 0) {
			goto Label_120;
		}
		PlayAnimation("all", "idle");
		goto Label_110;

	}
	goto Label_120;
	
Label_120:
	return 0;
	
}
EMIT "GOTO 0x43";


func_450()
{
	CameraSwitchToNormal();
	return 0;
}


func_454(var_89_string)
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


func_599(var_18_object)
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


func_472()
{
	var_9_bool = 0;
	func_653(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_479(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_121(var_2_object, var_85_string)
{
	var_86_bool = 0;
	func_653(var_86_bool);
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
	func_454(var_89_string);
	var_2_object = var_85_string;
	return 0;
}


func_485(var_43_cvector, var_44_cvector)
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


func_616(var_61_int)
{
	var_62_int = 0; var_63_int = 0;
	GetVariable("player", var_63_int);
	var_66_bool = var_63_int == (int)0;
	if(var_66_bool != 0) {
		var_61_int = 200001;
		return 2;
	EMIT "GOTO 0x277";
	}
	var_68_bool = var_63_int == (int)1;
	if(var_68_bool != 0) {
		var_61_int = 200002;
		return 2;
	}
	var_61_int = 200003;
	return 2;
}


func_495(var_79_int, var_80_string)
{
	var_81_int = 0; var_82_int = 0;
	GetVariable(var_80_string, var_82_int);
	var_82_int = var_79_int;
	return 2;
}


func_500(var_57_bool, var_58_string, var_59_string)
{
	var_60_object = Obj(); var_61_object = Obj();
	FindActor(var_61_object, var_58_string);
	var_62_bool = var_61_object == 0; //@ne
	if(var_62_bool != 0) {
		var_57_bool = 0;
		return 2;
	}
	Trigger(var_61_object, var_59_string);
	var_57_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_633()
{
	var_32_object = Obj(); var_33_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_33_object, (int)152, (int)2, (int)15358);
	var_38_bool = 0; var_39_object = Obj(); var_40_int = 0;
	var_33_object = var_39_object;
	func_570(var_38_bool, var_39_object, (int)148);
	return 2;
}
EMIT "Stack[-1] = 0";


