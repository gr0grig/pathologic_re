// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,self/1,GetVariable/2,FindActor/2,Trigger/2,GetGameTime/1,SetVariable/2,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1,CreateDiaryEntry/4
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:ood11Nude1|W:d11q01|W:d11q01NudeGotoRastrel|W:pt_d11q01_msoldier|A:AddMark|W:quest_d11_01|W:init_soldiers|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:player|W:Adding diary entry|W:ui/NPC_None.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x1b3
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xab vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x1ab vars=object
// @EVENT_26: op=0x1b7 vars=string
// @EVENT_6: op=0x1d3 vars=
// @PE: 0x3f,0x9b,0xab,0x1ab,0x21d,0x260,0x282,0x28e

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_563();
		var_11_bool = var_7_bool == (int)15659;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_614();
		}
		var_64_bool = var_7_bool == (int)15660;
		if(var_64_bool != 0) {
			var_65_object = Obj(); var_66_object = Obj();
			var_65_object = var_1_object;
			var_66_object = var_0_object;
			func_614();
		}
		var_68_bool = var_6_int == (int)15646;
		if(var_68_bool != 0) {
			var_69_bool = 0;
			var_69_bool = 0;
			var_70_bool = 0; var_71_object = Obj();
			var_71_object = var_1_object;
			func_642(var_71_object);
			if(var_70_bool != 0) {
				var_78_bool = 0; var_79_object = Obj();
				var_79_object = var_1_object;
				func_654(var_79_object);
				if(var_78_bool != 0) {
					var_69_bool = 1;
				}
			}
			if(var_69_bool != 0) {
				var_84_object = Obj(); var_85_object = Obj();
				var_84_object = var_1_object;
				var_85_object = var_0_object;
				func_608();
				var_88_string = "";
				func_155(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)14421);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)14422, (int)15648, (int)15647);
				@@@var_0_object:AddReply((int)14443, (int)15650, (int)15670);
				return 0;
			}
			var_110_string = "";
			func_155(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14502);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14503, (int)-1, (int)15740);
			return 0;
		}
		var_116_bool = var_6_int == (int)15648;
		if(var_116_bool != 0) {
			var_117_string = "";
			func_155(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14423);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14424, (int)15650, (int)15649);
			@@@var_0_object:AddReply((int)14440, (int)15667, (int)15666);
			return 0;
		}
		var_126_bool = var_6_int == (int)15667;
		if(var_126_bool != 0) {
			var_127_string = "";
			func_155(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14441);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14442, (int)15650, (int)15668);
			return 0;
		}
		var_133_bool = var_6_int == (int)15650;
		if(var_133_bool != 0) {
			var_134_string = "";
			func_155(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14425);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14426, (int)15652, (int)15651);
			@@@var_0_object:AddReply((int)14436, (int)15662, (int)15661);
			return 0;
		}
		var_143_bool = var_6_int == (int)15662;
		if(var_143_bool != 0) {
			var_144_string = "";
			func_155(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14437);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14438, (int)15652, (int)15663);
			@@@var_0_object:AddReply((int)14439, (int)15652, (int)15665);
			return 0;
		}
		var_153_bool = var_6_int == (int)15652;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_155(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14427);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14428, (int)15654, (int)15653);
			return 0;
		}
		var_160_bool = var_6_int == (int)15654;
		if(var_160_bool != 0) {
			var_161_string = "";
			func_155(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14429);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14430, (int)15656, (int)15655);
			return 0;
		}
		var_167_bool = var_6_int == (int)15656;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_155(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14431);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14432, (int)15658, (int)15657);
			return 0;
		}
		var_174_bool = var_6_int == (int)15658;
		if(var_174_bool != 0) {
			var_175_string = "";
			func_155(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)14433);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14434, (int)-1, (int)15659);
			@@@var_0_object:AddReply((int)14435, (int)-1, (int)15660);
			return 0;
		}
		var_3_string = true;
		var_183_bool = 0;
		func_762(var_183_bool);
		if(var_183_bool != 0) {
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
			func_483(var_13_bool);
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
		if(var_18_bool == 0) goto Label_466;
		var_0_object = false;
	}
Label_466:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_483(var_8_bool);
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
	
Label_435:
	Hold();
	goto Label_435;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj();
	var_8_object = var_19_object;
	func_485(var_18_bool, var_19_object);
	var_58_bool = var_18_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_59_int = 0;
	func_758(var_59_int);
	@@var_14_object:SetNPCName(var_59_int);
	var_60_string = "";
	func_760(var_60_string);
	@@var_14_object:SetPhoto(var_60_string);
	var_61_int = 0;
	func_725(var_61_int);
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
	var_131_bool = var_17_bool == 0; //@nz
	if(var_131_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_45;
	}
	var_8_object = Obj();
	func_541();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_576(var_43_cvector, var_44_cvector)
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


func_642(var_78_bool)
{
	var_80_int = 0; var_81_string = "";
	func_586(var_80_int, "d11q01");
	var_85_bool = var_80_int == (int)1;
	if(var_85_bool != 0) {
		var_78_bool = 1;
		return 0;
	}
	var_78_bool = 0;
	return 0;
}


func_708(var_18_object)
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


func_586(var_80_int, var_81_string)
{
	var_82_int = 0; var_83_int = 0;
	GetVariable(var_81_string, var_83_int);
	var_83_int = var_80_int;
	return 2;
}


func_654(var_86_bool)
{
	var_88_int = 0; var_89_string = "";
	func_586(var_88_int, "ood11Nude1");
	var_91_bool = var_88_int == (int)0;
	if(var_91_bool != 0) {
		var_86_bool = 1;
		return 0;
	}
	var_86_bool = 0;
	return 0;
}


func_591(var_57_bool, var_58_string, var_59_string)
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


func_725(var_61_int)
{
	var_62_int = 0; var_63_int = 0;
	GetVariable("player", var_63_int);
	var_66_bool = var_63_int == (int)0;
	if(var_66_bool != 0) {
		var_61_int = 200001;
		return 2;
	EMIT "GOTO 0x2e4";
	}
	var_68_bool = var_63_int == (int)1;
	if(var_68_bool != 0) {
		var_61_int = 200002;
		return 2;
	}
	var_61_int = 200003;
	return 2;
}


func_666(var_47_object)
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


func_155(var_2_object, var_96_string)
{
	var_97_bool = 0;
	func_762(var_97_bool);
	var_98_bool = var_97_bool == 0; //@nz
	if(var_98_bool != 0) {
		return 0;
	}
	var_99_bool = var_96_string == var_2_object;
	if(var_99_bool != 0) {
		return 0;
	}
	var_100_string = "";
	var_96_string = var_100_string;
	func_545(var_100_string);
	var_2_object = var_96_string;
	return 0;
}


func_603(var_29_float)
{
	var_30_float = 0; var_31_float = 0;
	GetGameTime(var_31_float);
	var_31_float = var_29_float;
	return 2;
}


func_541()
{
	CameraSwitchToNormal();
	return 0;
}


func_608()
{
	SetVariable("ood11Nude1", (int)1);
	return 0;
}


func_545(var_100_string)
{
	var_101_float = 0; var_102_float = 0; var_103_float = 0; var_104_float = 0;
	var_106_int = "playing " + var_100_string;
	Trace(var_106_int);
	lshGetAnimTimes(var_100_string, var_103_float, var_104_float);
	lshPlayAnimation(var_103_float, var_104_float);
	var_108_int = "start: " + var_103_float;
	Trace(var_108_int);
	var_110_int = "end: " + var_104_float;
	Trace(var_110_int);
	return 4;
}


func_483(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_762(var_97_bool)
{
	var_97_bool = 0;
	return 0;
}


func_485(var_18_bool, var_19_object)
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
	func_576(var_43_cvector, var_44_cvector);
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


func_614()
{
	var_14_object = Obj(); var_15_object = Obj();
	SetVariable("d11q01", (int)2);
	func_708(Obj());
	var_18_object = var_15_object;
	var_29_float = 0;
	func_603(var_29_float);
	@@var_15_object:AddMark("d11q01NudeGotoRastrel", "pt_d11q01_msoldier", (int)1, (int)15482, var_29_float);
	func_742();
	var_57_bool = 0; var_58_string = ""; var_59_string = "";
	func_591(var_57_bool, "quest_d11_01", "init_soldiers");
	return 2;
}
EMIT "Stack[-1] = 0";


func_679(var_38_bool, var_39_object, var_40_int)
{
	var_41_object = Obj(); var_42_object = Obj(); var_43_int = 0; var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0;
	func_666(Obj());
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


func_742()
{
	var_32_object = Obj(); var_33_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_33_object, (int)194, (int)1, (int)15479);
	var_38_bool = 0; var_39_object = Obj(); var_40_int = 0;
	var_33_object = var_39_object;
	func_679(var_38_bool, var_39_object, (int)192);
	return 2;
}
EMIT "Stack[-1] = 0";


func_563()
{
	var_9_bool = 0;
	func_762(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_758(var_59_int)
{
	var_59_int = 14839;
	return 0;
}


func_760(var_60_string)
{
	var_60_string = "ui/NPC_None.png";
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
		func_642(var_79_object);
		if(var_78_bool != 0) {
			var_86_bool = 0; var_87_object = Obj();
			var_87_object = var_1_object;
			func_654(var_87_object);
			if(var_86_bool != 0) {
				var_77_bool = 1;
			}
		}
		if(var_77_bool != 0) {
			var_92_object = Obj(); var_93_object = Obj();
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_608();
			var_96_string = "";
			func_155(var_71_object, "Neutral");
			@@@var_0_object:SetMessage((int)14421);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14422, (int)15648, (int)15647);
			@@@var_0_object:AddReply((int)14443, (int)15650, (int)15670);
		} else {
				var_126_string = "";
				func_155(var_71_object, "Neutral");
				@@@var_0_object:SetMessage((int)14502);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)14503, (int)-1, (int)15740);
				goto Label_125;
		}
	}
Label_125:
	var_118_bool = 0;
	func_762(var_118_bool);
	if(var_118_bool != 0) {

	Label_129:
		lshWaitForAnimEnd();
		var_119_string = var_3_string;
		if(var_119_string != 0) {
		} else {
			var_120_string = "";
			var_120_string = var_2_object;
			func_545(var_120_string);
			goto Label_129;
	}
		PlayAnimation("all", "idle");

	Label_144:
		WaitForAnimEnd();
		var_123_string = var_3_string;
		if(var_123_string != 0) {
			goto Label_154;
		}
		PlayAnimation("all", "idle");
		goto Label_144;

	}
	goto Label_154;
	
Label_154:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x43";


