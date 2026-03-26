// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,self/1,GetVariable/2,Trigger/2,GetGameTime/1,HasAnimation/3,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:pt_d5q01_girl_corpse1|A:ShowMap|W:d5q02|W:d5q02NudeMeeting|A:AddMark|W:quest_d5_02|W:remove_girl|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch|W:ui/NPC_Citizen1.png|W:ui/NPC_Citizen1_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x182
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x9a vars=int,int
// @TASK_2: vars=int,int,bool,bool,object,bool,bool params=0
// @EVENT_0: op=0x188 vars=object
// @EVENT_26: op=0x1b6 vars=string
// @EVENT_6: op=0x1be vars=
// @EVENT_7: op=0x1ff vars=int
// @PE: 0x4a,0x84,0x9a,0x188,0x1b6,0x1d5,0x1ff,0x216,0x34d,0x379

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	if((int)1 != 0) {
		func_776();
		var_17_bool = var_13_bool == (int)13218;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_861();
			var_67_object = Obj(); var_68_object = Obj();
			var_67_object = var_1_object;
			var_68_object = var_0_object;
			func_845(var_68_object);
		}
		var_94_bool = var_13_bool == (int)13214;
		if(var_94_bool != 0) {
			var_95_object = Obj(); var_96_object = Obj();
			var_95_object = var_1_object;
			var_96_object = var_0_object;
			func_861();
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_845(var_98_object);
		}
		var_100_bool = var_13_bool == (int)13215;
		if(var_100_bool != 0) {
			var_101_object = Obj(); var_102_object = Obj();
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_861();
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_845(var_104_object);
		}
		var_106_bool = var_12_bool == (int)13203;
		if(var_106_bool != 0) {
			var_107_bool = 0; var_108_object = Obj();
			var_108_object = var_1_object;
			func_889(var_108_object);
			if(var_107_bool != 0) {
				var_115_string = "";
				func_132(var_13_bool, "Neutral");
				@@@var_0_object:SetMessage((int)511988);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)511989, (int)13205, (int)13204);
				return 0;
			}
		}
		var_137_bool = var_12_bool == (int)13205;
		if(var_137_bool != 0) {
			var_138_string = "";
			func_132(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)511990);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511991, (int)13207, (int)13206);
			@@@var_0_object:AddReply((int)512004, (int)13207, (int)13219);
			return 0;
		}
		var_147_bool = var_12_bool == (int)13207;
		if(var_147_bool != 0) {
			var_148_string = "";
			func_132(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)511992);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511993, (int)13209, (int)13208);
			@@@var_0_object:AddReply((int)512005, (int)13209, (int)13221);
			return 0;
		}
		var_157_bool = var_12_bool == (int)13209;
		if(var_157_bool != 0) {
			var_158_string = "";
			func_132(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)511994);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511995, (int)13211, (int)13210);
			@@@var_0_object:AddReply((int)512006, (int)13213, (int)13223);
			return 0;
		}
		var_167_bool = var_12_bool == (int)13211;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_132(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)511996);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511997, (int)13213, (int)13212);
			return 0;
		}
		var_174_bool = var_12_bool == (int)13213;
		if(var_174_bool != 0) {
			var_175_string = "";
			func_132(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)511998);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512001, (int)13217, (int)13216);
			@@@var_0_object:AddReply((int)511999, (int)-1, (int)13214);
			@@@var_0_object:AddReply((int)515782, (int)16855, (int)16854);
			return 0;
		}
		var_187_bool = var_12_bool == (int)16855;
		if(var_187_bool != 0) {
			var_188_string = "";
			func_132(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)515783);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512000, (int)-1, (int)13215);
			return 0;
		}
		var_194_bool = var_12_bool == (int)13217;
		if(var_194_bool != 0) {
			var_195_string = "";
			func_132(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)512002);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)512003, (int)-1, (int)13218);
			return 0;
		}
		var_3_string = true;
		var_200_bool = 0;
		func_1030(var_200_bool);
		if(var_200_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x9b";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_object = Obj();
	var_12_object = var_14_object;
	TaskCall(0);
	func_0(var_15_object, var_13_int, var_14_object);
	TaskReturn();
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_14_bool = var_12_string == "cleanup";
	if(var_14_bool != 0) {
		func_418(var_12_string);
	}
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int;
	if(var_12_int != 0) {
		func_534(var_10_bool, var_11_bool);
	}
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_int = var_5_int;
	if(var_17_int != 0) {
		var_18_bool = 0;
		func_467(var_18_bool);
		if(var_18_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_19_object = Obj();
		func_783(var_19_object);
		RemoveActor(var_19_object);
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_14_bool = var_12_int == (int)10;
	if(var_14_bool != 0) {
		var_15_bool = 0;
		func_496(var_10_bool, var_11_bool, var_12_int, var_15_bool);
		if(var_15_bool != 0) {
			var_28_bool = var_2_object == 0; //@nz
			if(var_28_bool != 0) {
				var_29_object = Obj();
				var_29_object = var_4_bool;
				func_765(var_29_object);
				var_2_object = true;
			}
		} else {
			var_36_object = var_2_object;
			if(var_36_object == 0) goto Label_533;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_533:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0;
	func_400(var_11_bool, (float)300, (float)100);
	return 0;
}


func_1024(var_72_int)
{
	var_72_int = 512582;
	return 0;
}


func_0(var_0_object, var_13_int, var_14_object)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_int = 0; var_19_bool = 0; var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0;
	var_0_object = var_14_object;
	var_24_bool = 0; var_25_object = Obj(); var_26_float = 0;
	var_14_object = var_25_object;
	func_647(var_24_bool, var_25_object, (float)70.0);
	var_71_bool = var_24_bool == 0; //@nz
	if(var_71_bool != 0) {
		var_13_int = -2;
		return 8;
	}
	CreateDialog(var_20_object);
	var_72_int = 0;
	func_1024(var_72_int);
	@@var_20_object:SetNPCName(var_72_int);
	var_73_int = 0;
	func_1022(var_73_int);
	@@var_20_object:SetNPCDescription(var_73_int);
	var_74_string = "";
	func_1026(var_74_string);
	@@var_20_object:SetPhoto(var_74_string);
	var_75_string = "";
	func_1028(var_75_string);
	@@var_20_object:SetPhoto2(var_75_string);
	var_76_int = 0;
	func_1005(var_76_int);
	@@var_20_object:SetPlayerName(var_76_int);
	IsOverrideActive(var_21_bool);
	var_84_bool = var_21_bool;
	if(var_84_bool != 0) {
		var_13_int = -2;
		return 8;
	}
	DoDialog(var_20_object);
	var_85_object = Obj(); var_86_object = Obj();
	var_14_object = var_85_object;
	var_20_object = var_86_object;
	TaskCall(1);
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object);
	TaskReturn();
	@@var_20_object:IsDialogEnd(var_23_bool);
	
Label_56:
	var_139_bool = var_23_bool == 0; //@nz
	if(var_139_bool != 0) {
		sync();
		@@var_20_object:IsDialogEnd(var_23_bool);
		goto Label_56;
	}
	var_14_object = Obj();
	func_716();
	StopDialog(var_20_object);
	@@var_20_object:GetReturnValue((int)-1);
	var_22_int = var_13_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1026(var_74_string)
{
	var_74_string = "ui/NPC_Citizen1.png";
	return 0;
}


func_642(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
	return 2;
}


func_1028(var_75_string)
{
	var_75_string = "ui/NPC_Citizen1_b.png";
	return 0;
}


func_132(var_2_object, var_100_string)
{
	var_101_bool = 0;
	func_1030(var_101_bool);
	var_102_bool = var_101_bool == 0; //@nz
	if(var_102_bool != 0) {
		return 0;
	}
	var_103_bool = var_100_string == var_2_object;
	if(var_103_bool != 0) {
		return 0;
	}
	var_104_string = ""; var_105_bool = 0;
	var_100_string = var_104_string;
	var_107_bool = var_100_string == "";
	if(var_107_bool != 0) {
		var_105_bool = 0;
	} else {
		var_105_bool = 1;
	}
	func_750(var_104_string, var_105_bool);
	var_2_object = var_100_string;
	return 0;
	
}


func_1030(var_67_bool)
{
	var_67_bool = 0;
	return 0;
}


func_647(var_24_bool, var_25_object, var_26_float)
{
	var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_bool = 0; var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_bool = 0;
	@@var_25_object:GetPosition(var_37_cvector);
	@@var_25_object:GetEyesHeight(var_36_float);
	var_45_float = GetByIndex(var_37_cvector, 1);
	var_45_float = var_45_float + var_36_float;
	SetByIndex(var_37_cvector, 1) = var_45_float;
	GetPosition(var_38_cvector);
	GetEyesHeight(var_36_float);
	var_46_float = GetByIndex(var_38_cvector, 1);
	var_46_float = var_46_float + var_36_float;
	SetByIndex(var_38_cvector, 1) = var_46_float;
	var_39_cvector = var_37_cvector - var_38_cvector;
	var_47_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (float)0;
	var_48_int = var_39_cvector | var_39_cvector;
	var_49_float = sqrt(var_48_int);
	var_39_cvector = var_39_cvector / var_49_float;
	var_40_cvector = -var_39_cvector;
	var_50_float = var_39_cvector * var_26_float;
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
	var_52_cvector = var_40_cvector ^ CVector(0.0, 1.0, 0.0);
	func_789(var_51_cvector, var_52_cvector);
	var_60_float = var_51_cvector * (int)25;
	var_61_int = var_50_float + var_60_float;
	var_41_cvector = var_61_int - CVector(0.0, 10.0, 0.0);
	var_42_cvector = var_38_cvector + var_41_cvector;
	IsOverrideActive(var_43_bool);
	var_63_bool = var_43_bool;
	if(var_63_bool != 0) {
		var_24_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_42_cvector, var_40_cvector, (bool)1);
	var_65_float = GetByIndex(var_41_cvector, 0);
	var_66_float = GetByIndex(var_41_cvector, 2);
	Rotate(var_65_float, var_66_float);
	var_67_bool = 0;
	func_1030(var_67_bool);
	if(var_67_bool != 0) {
	} else {
		HasAnimationTrack(var_44_bool, "head");
		var_69_bool = var_44_bool;
		if(var_69_bool == 0) goto Label_710;
		LookAsyncCamera("head");
	}
Label_710:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_24_bool = 1;
	return 18;
	
}


func_776()
{
	var_15_bool = 0;
	func_1030(var_15_bool);
	if(var_15_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_901()
{
	var_38_object = Obj(); var_39_object = Obj();
	CreateDiaryEntry(var_39_object, (int)152, (int)2, (int)515358);
	var_43_bool = 0; var_44_object = Obj(); var_45_int = 0;
	var_39_object = var_44_object;
	func_927(var_43_bool, var_44_object, (int)148);
	return 2;
}
EMIT "Stack[-1] = 0";


func_783(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	self(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_400(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0;
	var_6_int = false;
	
Label_402:
	rand(var_16_float, (int)3);
	var_20_int = var_16_float + (int)3;
	Sleep(var_20_int, var_17_bool);
	var_6_int = true;
	var_21_float = 0; var_22_float = 0;
	var_12_float = var_21_float;
	var_13_float = var_22_float;
	func_469(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
	var_6_int = false;
	goto Label_402;
}
EMIT "Return(); Pop(4)";


func_914(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj();
	GetDiaryRoot(var_54_object);
	var_55_bool = var_54_object == 0; //@nz
	if(var_55_bool != 0) {
		Trace("Can't retrieve diary root");
		var_52_object = 0;
		return 2;
	}
	var_54_object = var_52_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_789(var_51_cvector, var_52_cvector)
{
	var_54_float = 0; var_55_float = 0;
	var_56_int = var_52_cvector | var_52_cvector;
	var_55_float = sqrt(var_56_int);
	var_57_float = 9.999999974752427e-07;
	var_58_bool = var_55_float < var_57_float;
	if(var_58_bool != 0) {
		var_51_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_51_cvector = var_52_cvector / var_55_float;
	return 2;
}


func_534(var_2_object, var_3_string)
{
	func_629();
	KillTimer((int)10);
	var_14_object = var_2_object;
	if(var_14_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_927(var_43_bool, var_44_object, var_45_int)
{
	var_46_object = Obj(); var_47_object = Obj(); var_48_int = 0; var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0;
	func_914(Obj());
	var_52_object = var_49_object;
	@@var_49_object:Find(var_45_int, var_50_object);
	var_57_bool = var_50_object == 0; //@nz
	if(var_57_bool != 0) {
		var_59_int = "Can't find diary parent with id: " + var_45_int;
		Trace(var_59_int);
		var_43_bool = 0;
		return 6;
	}
	@@var_50_object:AddChild(var_44_object);
	SendWorldWndMessage((int)7);
	@@var_44_object:GetCategory(var_51_int);
	SetDiarySection(var_51_int);
	var_43_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_799(var_94_int, var_95_string)
{
	var_96_int = 0; var_97_int = 0;
	GetVariable(var_95_string, var_97_int);
	var_97_int = var_94_int;
	return 2;
}


func_418(var_5_int)
{
	var_5_int = true;
	var_15_bool = 0;
	var_15_bool = 0;
	var_16_bool = 0;
	func_642(var_16_bool);
	var_19_bool = var_16_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_20_bool = 0;
		func_467(var_20_bool);
		if(var_20_bool != 0) {
			var_15_bool = 1;
		}
	}
	if(var_15_bool != 0) {
		var_21_object = Obj();
		func_783(var_21_object);
		RemoveActor(var_21_object);
	}
	return 0;
}


func_548()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0;
	WaitForAnimEnd();
	var_44_bool = 0;
	func_642(var_44_bool);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 14;
	}
	func_828((int)0);
	var_46_int = var_37_int;
	var_38_int = 0;
	
Label_562:
	var_59_bool = 0;
	var_59_bool = 0;
	var_61_bool = var_38_int < (int)5;
	if(var_61_bool != 0) {
		var_62_bool = 0;
		func_642(var_62_bool);
		if(var_62_bool != 0) {
			var_59_bool = 1;
		}
	}
	if(var_59_bool != 0) {
		irand(var_39_int, (int)3);
		var_65_bool = var_39_int == (int)0;
		if(var_65_bool != 0) {
			var_66_int = var_37_int;
			if(var_66_int == 0) goto Label_595;
			irand(var_40_int, var_37_int);
			var_68_string = ""; var_69_int = 0;
			var_40_int = var_69_int;
			func_821(var_68_string, var_69_int);
			PlayAnimation("all", var_68_string);
			WaitForAnimEnd(var_41_bool);
			var_70_bool = var_41_bool == 0; //@nz
			if(var_70_bool != 0) {
			} else {
		} else {
				var_75_bool = var_39_int == (int)1;
				if(var_75_bool != 0) {
					rand(var_42_float, (int)4);
					var_78_int = var_42_float + (int)1;
					Sleep(var_78_int, var_43_bool);
					var_79_bool = var_43_bool == 0; //@nz
					if(var_79_bool != 0) {
						goto Label_624;
					}
					goto Label_613;
				}
				var_80_int = var_38_int;
				if(var_80_int == 0) goto Label_613;
				goto Label_624;
		}
		Label_613:
			var_71_bool = 0;
			func_627(var_71_bool);
			var_72_bool = var_71_bool == 0; //@nz
			if(var_72_bool != 0) {
				goto Label_624;
			}
			ResetAAS();
			var_38_int = var_38_int + (int)1;
			goto Label_562;

		}
	}
Label_624:
	ResetAAS();
	return 14;
	
}


func_804(var_61_bool, var_62_string, var_63_string)
{
	var_64_object = Obj(); var_65_object = Obj();
	FindActor(var_65_object, var_62_string);
	var_66_bool = var_65_object == 0; //@ne
	if(var_66_bool != 0) {
		var_61_bool = 0;
		return 2;
	}
	Trigger(var_65_object, var_63_string);
	var_61_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_816(var_35_float)
{
	var_36_float = 0; var_37_float = 0;
	GetGameTime(var_37_float);
	var_37_float = var_35_float;
	return 2;
}


func_821(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = "";
	var_56_int = var_53_int;
	if(var_56_int != 0) {
		"idle" = "idle" + var_53_int;
	}
	var_55_string = var_52_string;
	return 2;
}


func_955(var_24_object)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj();
	GetMainOutdoorScene(var_27_object);
	var_29_bool = var_27_object == 0; //@ne
	if(var_29_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_28_object = 0;
		var_28_object = var_24_object;
		return 4;
	}
	@@var_27_object:GetMap(var_28_object);
	var_28_object = var_24_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_828(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0;
	var_49_int = 0;
	
Label_830:
	var_52_string = ""; var_53_int = 0;
	var_49_int = var_53_int;
	func_821(var_52_string, var_53_int);
	HasAnimation(var_50_bool, "all", var_52_string);
	var_57_bool = var_50_bool == 0; //@nz
	if(var_57_bool != 0) {
	} else {
		var_49_int = var_49_int + (int)1;
		goto Label_830;
	}
	var_49_int = var_46_int;
	return 4;
	
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_85_object, var_86_object)
{
	var_0_object = var_86_object;
	var_1_object = var_85_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_92_bool = 0; var_93_object = Obj();
		var_93_object = var_1_object;
		func_889(var_93_object);
		if(var_92_bool != 0) {
			var_100_string = "";
			func_132(var_86_object, "Neutral");
			@@@var_0_object:SetMessage((int)511988);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)511989, (int)13205, (int)13204);
		} else {
				return 0;
		}
	}
	var_121_bool = 0;
	func_1030(var_121_bool);
	if(var_121_bool != 0) {

	Label_106:
		lshWaitForAnimEnd();
		var_122_string = var_3_string;
		if(var_122_string != 0) {
		} else {
			var_123_string = "";
			var_123_string = var_2_object;
			func_734(var_123_string);
			goto Label_106;
	}
		PlayAnimation("all", "idle");

	Label_121:
		WaitForAnimEnd();
		var_136_string = var_3_string;
		if(var_136_string != 0) {
			goto Label_131;
		}
		PlayAnimation("all", "idle");
		goto Label_121;

	}
	goto Label_131;
	
Label_131:
	return 0;
	
}
EMIT "GOTO 0x4e";


func_716()
{
	var_141_bool = 0; var_142_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_144_bool = 0;
	func_1030(var_144_bool);
	if(var_144_bool != 0) {
	} else {
		HasAnimationTrack(var_142_bool, "head");
		var_146_bool = var_142_bool;
		if(var_146_bool == 0) goto Label_733;
		UnlookAsync("head");
	}
Label_733:
	return 2;
	
}


func_845(var_68_object)
{
	var_69_object = Obj(); var_70_string = ""; var_71_float = 0;
	func_955(Obj());
	var_72_object = var_69_object;
	func_972(var_69_object, "pt_d5q01_girl_corpse1", (float)2);
	var_92_object = Obj();
	func_955(var_92_object);
	@@var_68_object:ShowMap(var_92_object);
	return 0;
}


func_972(var_69_object, var_70_string, var_71_float)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_object = Obj(); var_76_bool = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_object = Obj(); var_80_bool = 0;
	GetMainOutdoorScene(var_79_object);
	var_81_bool = var_79_object == 0; //@ne
	if(var_81_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_79_object:GetLocator(var_70_string, var_80_bool, var_77_cvector, var_78_cvector);
	var_83_bool = var_80_bool == 0; //@nz
	if(var_83_bool != 0) {
		var_85_int = "Warning: outdoor scene locator " + var_70_string;
		var_87_int = var_85_int + " doesnt exist";
		Trace(var_87_int);
	}
	@@var_79_object:GetMap(var_69_object);
	var_88_bool = var_69_object == 0; //@ne
	if(var_88_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_90_float = GetByIndex(var_77_cvector, 0);
	var_91_float = GetByIndex(var_77_cvector, 2);
	@@var_69_object:SetMapParams(var_90_float, var_91_float, var_71_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_467(var_18_bool)
{
	var_18_bool = 1;
	return 0;
}


func_469(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_21_float, var_22_float)
{
	var_23_bool = 0;
	func_642(var_23_bool);
	var_26_bool = var_23_bool == 0; //@nz
	if(var_26_bool != 0) {
		return 0;
	}
	FindActor(var_4_bool, "player");
	var_2_object = false;
	var_3_string = false;
	var_0_object = var_21_float;
	var_1_object = var_22_float;
	SetTimer((int)10, (float)1.0);
	func_548();
	var_81_bool = var_3_string == 0; //@nz
	if(var_81_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_861()
{
	var_20_object = Obj(); var_21_object = Obj();
	SetVariable("d5q02", (int)4);
	func_955(Obj());
	var_24_object = var_21_object;
	var_35_float = 0;
	func_816(var_35_float);
	@@var_21_object:AddMark("d5q02NudeMeeting", "pt_d5q01_girl_corpse1", (int)0, (int)515364, var_35_float);
	func_901();
	var_61_bool = 0; var_62_string = ""; var_63_string = "";
	func_804(var_61_bool, "quest_d5_02", "remove_girl");
	return 2;
}
EMIT "Stack[-1] = 0";


func_734(var_123_string)
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


func_1005(var_76_int)
{
	var_77_int = 0; var_78_int = 0;
	GetVariable("branch", var_78_int);
	var_81_bool = var_78_int == (int)0;
	if(var_81_bool != 0) {
		var_76_int = 1;
		return 2;
	EMIT "GOTO 0x3fc";
	}
	var_83_bool = var_78_int == (int)1;
	if(var_83_bool != 0) {
		var_76_int = 2;
		return 2;
	}
	var_76_int = 3;
	return 2;
}


func_750(var_104_string, var_105_bool)
{
	var_108_bool = 0; var_109_float = 0; var_110_float = 0; var_111_bool = 0; var_112_float = 0; var_113_float = 0;
	lshHasAnimation(var_111_bool, var_104_string);
	var_114_bool = var_111_bool;
	if(var_114_bool != 0) {
		lshGetAnimTimes(var_104_string, var_112_float, var_113_float);
		lshPlayAnimation(var_112_float, var_113_float, var_105_bool);
	} else {
		var_116_int = "Can't find lsh animation : " + var_104_string;
		Trace(var_116_int);
	}
	return 6;
	
}


func_496(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0;
	var_18_bool = var_4_bool == 0; //@ne
	if(var_18_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	var_19_float = 0; var_20_object = Obj();
	var_20_object = var_4_bool;
	func_634(var_19_float, var_20_object);
	var_17_float = sqrt(var_19_float);
	var_27_object = var_2_object;
	if(var_27_object != 0) {
		var_17_float = var_17_float - var_1_object;
	}
	var_15_bool = var_17_float < var_0_object;
	return 2;
}


func_627(var_71_bool)
{
	var_71_bool = 1;
	return 0;
}


func_629()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_889(var_92_bool)
{
	var_94_int = 0; var_95_string = "";
	func_799(var_94_int, "d5q02");
	var_99_bool = var_94_int == (int)3;
	if(var_99_bool != 0) {
		var_92_bool = 1;
		return 0;
	}
	var_92_bool = 0;
	return 0;
}


func_634(var_19_float, var_20_object)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	GetPosition(var_24_cvector);
	@@var_20_object:GetPosition(var_25_cvector);
	var_26_cvector = var_25_cvector - var_24_cvector;
	var_19_float = var_26_cvector | var_26_cvector;
	return 6;
}


func_765(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0);
	@@var_29_object:GetEyesHeight(var_32_float);
	var_33_cvector = CVector(0.0, 0.0, 0.0);
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	LookAsync(var_29_object, "head", var_33_cvector);
	return 4;
}


func_1022(var_73_int)
{
	var_73_int = 515593;
	return 0;
}


