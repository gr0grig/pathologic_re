// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,irand/2,WaitForAnimEnd/1,ResetAAS/0,StopGroup0/0,GetPosition/1,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,LookAsync/3,lshStopSpeech/0,self/1,GetVariable/2,Trigger/2,GetGameTime/1,HasAnimation/3,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|W:player|W:head|A:GetPosition|A:GetEyesHeight|W:Can't find lsh animation : |W:ui/NPC_Citizen3.png|W:ui/NPC_Citizen3_b.png|W:b11q04|W:b11q04SanitarGotoOfficer|W:pt_gmap_vagon_army|A:AddMark|W:quest_b11_04|W:place_officer|A:ShowMap|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:branch
// @GLOBALS: 0:object:
// @RUN_OP: 0x143
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb3 vars=int,int
// @TASK_2: vars=int,int,bool,bool,object,bool,bool params=0
// @EVENT_0: op=0x149 vars=object
// @EVENT_26: op=0x17a vars=string
// @EVENT_6: op=0x182 vars=
// @EVENT_7: op=0x1c3 vars=int
// @PE: 0x4a,0x9d,0xb3,0x149,0x17a,0x199,0x1c3,0x1da,0x337,0x347

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	if((int)1 != 0) {
		func_716();
		var_17_bool = var_13_bool == (int)31870;
		if(var_17_bool != 0) {
			var_18_object = Obj(); var_19_object = Obj();
			var_18_object = var_1_object;
			var_19_object = var_0_object;
			func_795();
			var_67_object = Obj(); var_68_object = Obj();
			var_67_object = var_1_object;
			var_68_object = var_0_object;
			func_823(var_68_object);
		}
		var_94_bool = var_12_bool == (int)31863;
		if(var_94_bool != 0) {
			var_95_bool = 0; var_96_object = Obj();
			var_96_object = var_1_object;
			func_839(var_96_object);
			if(var_95_bool != 0) {
				var_103_string = "";
				func_157(var_13_bool, "Neutral");
				@@@var_0_object:SetMessage((int)530504);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)530505, (int)31865, (int)31864);
				@@@var_0_object:AddReply((int)531423, (int)-1, (int)32766);
				return 0;
			}
			var_127_string = "";
			func_157(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)530512);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530513, (int)-1, (int)31872);
			@@@var_0_object:AddReply((int)531422, (int)-1, (int)32765);
			return 0;
		}
		var_136_bool = var_12_bool == (int)31865;
		if(var_136_bool != 0) {
			var_137_string = "";
			func_157(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)530506);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530507, (int)31867, (int)31866);
			@@@var_0_object:AddReply((int)531424, (int)31869, (int)32767);
			return 0;
		}
		var_146_bool = var_12_bool == (int)31867;
		if(var_146_bool != 0) {
			var_147_string = "";
			func_157(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)530508);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530509, (int)31869, (int)31868);
			@@@var_0_object:AddReply((int)531425, (int)-1, (int)32769);
			return 0;
		}
		var_156_bool = var_12_bool == (int)31869;
		if(var_156_bool != 0) {
			var_157_string = "";
			func_157(var_13_bool, "Neutral");
			@@@var_0_object:SetMessage((int)530510);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530511, (int)-1, (int)31870);
			return 0;
		}
		var_3_string = true;
		var_162_bool = 0;
		func_793(var_162_bool);
		if(var_162_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb4";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_474(var_11_bool, var_12_object);
	var_16_int = 0; var_17_object = Obj();
	var_12_object = var_17_object;
	TaskCall(0);
	func_0(var_18_object, var_16_int, var_17_object);
	TaskReturn();
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_14_bool = var_12_string == "cleanup";
	if(var_14_bool != 0) {
		func_358(var_12_string);
	}
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int;
	if(var_12_int != 0) {
		func_474(var_10_bool, var_11_bool);
	}
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_int = var_5_int;
	if(var_17_int != 0) {
		var_18_bool = 0;
		func_407(var_18_bool);
		if(var_18_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		var_19_object = Obj();
		func_723(var_19_object);
		RemoveActor(var_19_object);
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_14_bool = var_12_int == (int)10;
	if(var_14_bool != 0) {
		var_15_bool = 0;
		func_436(var_10_bool, var_11_bool, var_12_int, var_15_bool);
		if(var_15_bool != 0) {
			var_28_bool = var_2_object == 0; //@nz
			if(var_28_bool != 0) {
				var_29_object = Obj();
				var_29_object = var_4_bool;
				func_705(var_29_object);
				var_2_object = true;
			}
		} else {
			var_36_object = var_2_object;
			if(var_36_object == 0) goto Label_473;
			UnlookAsync("head");
			var_2_object = false;
		}
	}
Label_473:
	return 0;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0;
	func_340(var_11_bool, (float)300, (float)100);
	return 0;
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0;
	var_0_object = var_17_object;
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0;
	var_17_object = var_28_object;
	func_587(var_27_bool, var_28_object, (float)70.0);
	var_74_bool = var_27_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	CreateDialog(var_23_object);
	var_75_int = 0;
	func_787(var_75_int);
	@@var_23_object:SetNPCName(var_75_int);
	var_76_int = 0;
	func_785(var_76_int);
	@@var_23_object:SetNPCDescription(var_76_int);
	var_77_string = "";
	func_789(var_77_string);
	@@var_23_object:SetPhoto(var_77_string);
	var_78_string = "";
	func_791(var_78_string);
	@@var_23_object:SetPhoto2(var_78_string);
	var_79_int = 0;
	func_955(var_79_int);
	@@var_23_object:SetPlayerName(var_79_int);
	IsOverrideActive(var_24_bool);
	var_87_bool = var_24_bool;
	if(var_87_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	DoDialog(var_23_object);
	var_88_object = Obj(); var_89_object = Obj();
	var_17_object = var_88_object;
	var_23_object = var_89_object;
	TaskCall(1);
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object);
	TaskReturn();
	@@var_23_object:IsDialogEnd(var_26_bool);
	
Label_56:
	var_153_bool = var_26_bool == 0; //@nz
	if(var_153_bool != 0) {
		sync();
		@@var_23_object:IsDialogEnd(var_26_bool);
		goto Label_56;
	}
	var_17_object = Obj();
	func_656();
	StopDialog(var_23_object);
	@@var_23_object:GetReturnValue((int)-1);
	var_25_int = var_16_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_768(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0;
	var_49_int = 0;
	
Label_770:
	var_52_string = ""; var_53_int = 0;
	var_49_int = var_53_int;
	func_761(var_52_string, var_53_int);
	HasAnimation(var_50_bool, "all", var_52_string);
	var_57_bool = var_50_bool == 0; //@nz
	if(var_57_bool != 0) {
	} else {
		var_49_int = var_49_int + (int)1;
		goto Label_770;
	}
	var_49_int = var_46_int;
	return 4;
	
}


func_905(var_24_object)
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


func_656()
{
	var_155_bool = 0; var_156_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_158_bool = 0;
	func_793(var_158_bool);
	if(var_158_bool != 0) {
	} else {
		HasAnimationTrack(var_156_bool, "head");
		var_160_bool = var_156_bool;
		if(var_160_bool == 0) goto Label_673;
		UnlookAsync("head");
	}
Label_673:
	return 2;
	
}


func_785(var_76_int)
{
	var_76_int = 530494;
	return 0;
}


func_787(var_75_int)
{
	var_75_int = 530493;
	return 0;
}


func_789(var_77_string)
{
	var_77_string = "ui/NPC_Citizen3.png";
	return 0;
}


func_407(var_18_bool)
{
	var_18_bool = 1;
	return 0;
}


func_791(var_78_string)
{
	var_78_string = "ui/NPC_Citizen3_b.png";
	return 0;
}


func_409(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_21_float, var_22_float)
{
	var_23_bool = 0;
	func_582(var_23_bool);
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
	func_488();
	var_81_bool = var_3_string == 0; //@nz
	if(var_81_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_793(var_70_bool)
{
	var_70_bool = 0;
	return 0;
}


func_922(var_69_object, var_70_string, var_71_float)
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


func_795()
{
	var_20_object = Obj(); var_21_object = Obj();
	SetVariable("b11q04", (int)2);
	func_905(Obj());
	var_24_object = var_21_object;
	var_35_float = 0;
	func_756(var_35_float);
	@@var_21_object:AddMark("b11q04SanitarGotoOfficer", "pt_gmap_vagon_army", (int)0, (int)530531, var_35_float);
	func_851();
	var_61_bool = 0; var_62_string = ""; var_63_string = "";
	func_744(var_61_bool, "quest_b11_04", "place_officer");
	return 2;
}
EMIT "Stack[-1] = 0";


func_157(var_2_object, var_103_string)
{
	var_104_bool = 0;
	func_793(var_104_bool);
	var_105_bool = var_104_bool == 0; //@nz
	if(var_105_bool != 0) {
		return 0;
	}
	var_106_bool = var_103_string == var_2_object;
	if(var_106_bool != 0) {
		return 0;
	}
	var_107_string = ""; var_108_bool = 0;
	var_103_string = var_107_string;
	var_110_bool = var_103_string == "";
	if(var_110_bool != 0) {
		var_108_bool = 0;
	} else {
		var_108_bool = 1;
	}
	func_690(var_107_string, var_108_bool);
	var_2_object = var_103_string;
	return 0;
	
}


func_674(var_129_string)
{
	var_130_bool = 0; var_131_float = 0; var_132_float = 0; var_133_bool = 0; var_134_float = 0; var_135_float = 0;
	lshHasAnimation(var_133_bool, var_129_string);
	var_136_bool = var_133_bool;
	if(var_136_bool != 0) {
		lshGetAnimTimes(var_129_string, var_134_float, var_135_float);
		lshPlayAnimation(var_134_float, var_135_float, (bool)0);
	} else {
		var_139_int = "Can't find lsh animation : " + var_129_string;
		Trace(var_139_int);
	}
	return 6;
	
}


func_690(var_107_string, var_108_bool)
{
	var_111_bool = 0; var_112_float = 0; var_113_float = 0; var_114_bool = 0; var_115_float = 0; var_116_float = 0;
	lshHasAnimation(var_114_bool, var_107_string);
	var_117_bool = var_114_bool;
	if(var_117_bool != 0) {
		lshGetAnimTimes(var_107_string, var_115_float, var_116_float);
		lshPlayAnimation(var_115_float, var_116_float, var_108_bool);
	} else {
		var_119_int = "Can't find lsh animation : " + var_107_string;
		Trace(var_119_int);
	}
	return 6;
	
}


func_436(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0;
	var_18_bool = var_4_bool == 0; //@ne
	if(var_18_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	var_19_float = 0; var_20_object = Obj();
	var_20_object = var_4_bool;
	func_574(var_19_float, var_20_object);
	var_17_float = sqrt(var_19_float);
	var_27_object = var_2_object;
	if(var_27_object != 0) {
		var_17_float = var_17_float - var_1_object;
	}
	var_15_bool = var_17_float < var_0_object;
	return 2;
}


func_567(var_71_bool)
{
	var_71_bool = 1;
	return 0;
}


func_823(var_68_object)
{
	var_69_object = Obj(); var_70_string = ""; var_71_float = 0;
	func_905(Obj());
	var_72_object = var_69_object;
	func_922(var_69_object, "pt_gmap_vagon_army", (float)2);
	var_92_object = Obj();
	func_905(var_92_object);
	@@var_68_object:ShowMap(var_92_object);
	return 0;
}


func_569()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_955(var_79_int)
{
	var_80_int = 0; var_81_int = 0;
	GetVariable("branch", var_81_int);
	var_84_bool = var_81_int == (int)0;
	if(var_84_bool != 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x3ca";
	}
	var_86_bool = var_81_int == (int)1;
	if(var_86_bool != 0) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
	return 2;
}


func_574(var_19_float, var_20_object)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	GetPosition(var_24_cvector);
	@@var_20_object:GetPosition(var_25_cvector);
	var_26_cvector = var_25_cvector - var_24_cvector;
	var_19_float = var_26_cvector | var_26_cvector;
	return 6;
}


func_705(var_29_object)
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


func_582(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0;
	IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
	return 2;
}


func_839(var_95_bool)
{
	var_97_int = 0; var_98_string = "";
	func_739(var_97_int, "b11q04");
	var_102_bool = var_97_int == (int)1;
	if(var_102_bool != 0) {
		var_95_bool = 1;
		return 0;
	}
	var_95_bool = 0;
	return 0;
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_95_bool = 0; var_96_object = Obj();
		var_96_object = var_1_object;
		func_839(var_96_object);
		if(var_95_bool != 0) {
			var_103_string = "";
			func_157(var_89_object, "Neutral");
			@@@var_0_object:SetMessage((int)530504);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)530505, (int)31865, (int)31864);
			@@@var_0_object:AddReply((int)531423, (int)-1, (int)32766);
		} else {
				var_145_string = "";
				func_157(var_89_object, "Neutral");
				@@@var_0_object:SetMessage((int)530512);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)530513, (int)-1, (int)31872);
				@@@var_0_object:AddReply((int)531422, (int)-1, (int)32765);
				goto Label_127;
		}
	}
Label_127:
	var_127_bool = 0;
	func_793(var_127_bool);
	if(var_127_bool != 0) {

	Label_131:
		lshWaitForAnimEnd();
		var_128_string = var_3_string;
		if(var_128_string != 0) {
		} else {
			var_129_string = "";
			var_129_string = var_2_object;
			func_674(var_129_string);
			goto Label_131;
	}
		PlayAnimation("all", "idle");

	Label_146:
		WaitForAnimEnd();
		var_142_string = var_3_string;
		if(var_142_string != 0) {
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


func_587(var_27_bool, var_28_object, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0;
	@@var_28_object:GetPosition(var_40_cvector);
	@@var_28_object:GetEyesHeight(var_39_float);
	var_48_float = GetByIndex(var_40_cvector, 1);
	var_48_float = var_48_float + var_39_float;
	SetByIndex(var_40_cvector, 1) = var_48_float;
	GetPosition(var_41_cvector);
	GetEyesHeight(var_39_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	var_49_float = var_49_float + var_39_float;
	SetByIndex(var_41_cvector, 1) = var_49_float;
	var_42_cvector = var_40_cvector - var_41_cvector;
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (float)0;
	var_51_int = var_42_cvector | var_42_cvector;
	var_52_float = sqrt(var_51_int);
	var_42_cvector = var_42_cvector / var_52_float;
	var_43_cvector = -var_42_cvector;
	var_53_float = var_42_cvector * var_29_float;
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0);
	var_55_cvector = var_43_cvector ^ CVector(0.0, 1.0, 0.0);
	func_729(var_54_cvector, var_55_cvector);
	var_63_float = var_54_cvector * (int)25;
	var_64_int = var_53_float + var_63_float;
	var_44_cvector = var_64_int - CVector(0.0, 10.0, 0.0);
	var_45_cvector = var_41_cvector + var_44_cvector;
	IsOverrideActive(var_46_bool);
	var_66_bool = var_46_bool;
	if(var_66_bool != 0) {
		var_27_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_45_cvector, var_43_cvector, (bool)1);
	var_68_float = GetByIndex(var_44_cvector, 0);
	var_69_float = GetByIndex(var_44_cvector, 2);
	Rotate(var_68_float, var_69_float);
	var_70_bool = 0;
	func_793(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		HasAnimationTrack(var_47_bool, "head");
		var_72_bool = var_47_bool;
		if(var_72_bool == 0) goto Label_650;
		LookAsyncCamera("head");
	}
Label_650:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_27_bool = 1;
	return 18;
	
}


func_716()
{
	var_15_bool = 0;
	func_793(var_15_bool);
	if(var_15_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_723(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	self(var_21_object);
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_340(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0;
	var_6_int = false;
	
Label_342:
	rand(var_16_float, (int)3);
	var_20_int = var_16_float + (int)3;
	Sleep(var_20_int, var_17_bool);
	var_6_int = true;
	var_21_float = 0; var_22_float = 0;
	var_12_float = var_21_float;
	var_13_float = var_22_float;
	func_409(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
	var_6_int = false;
	goto Label_342;
}
EMIT "Return(); Pop(4)";


func_851()
{
	var_38_object = Obj(); var_39_object = Obj();
	CreateDiaryEntry(var_39_object, (int)553, (int)2, (int)530528);
	var_43_bool = 0; var_44_object = Obj(); var_45_int = 0;
	var_39_object = var_44_object;
	func_877(var_43_bool, var_44_object, (int)551);
	return 2;
}
EMIT "Stack[-1] = 0";


func_729(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0;
	var_59_int = var_55_cvector | var_55_cvector;
	var_58_float = sqrt(var_59_int);
	var_60_float = 9.999999974752427e-07;
	var_61_bool = var_58_float < var_60_float;
	if(var_61_bool != 0) {
		var_54_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_54_cvector = var_55_cvector / var_58_float;
	return 2;
}


func_474(var_2_object, var_3_string)
{
	func_569();
	KillTimer((int)10);
	var_14_object = var_2_object;
	if(var_14_object != 0) {
		UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
	return 0;
}


func_864(var_52_object)
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


func_739(var_97_int, var_98_string)
{
	var_99_int = 0; var_100_int = 0;
	GetVariable(var_98_string, var_100_int);
	var_100_int = var_97_int;
	return 2;
}


func_358(var_5_int)
{
	var_5_int = true;
	var_15_bool = 0;
	var_15_bool = 0;
	var_16_bool = 0;
	func_582(var_16_bool);
	var_19_bool = var_16_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_20_bool = 0;
		func_407(var_20_bool);
		if(var_20_bool != 0) {
			var_15_bool = 1;
		}
	}
	if(var_15_bool != 0) {
		var_21_object = Obj();
		func_723(var_21_object);
		RemoveActor(var_21_object);
	}
	return 0;
}


func_488()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0;
	WaitForAnimEnd();
	var_44_bool = 0;
	func_582(var_44_bool);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 14;
	}
	func_768((int)0);
	var_46_int = var_37_int;
	var_38_int = 0;
	
Label_502:
	var_59_bool = 0;
	var_59_bool = 0;
	var_61_bool = var_38_int < (int)5;
	if(var_61_bool != 0) {
		var_62_bool = 0;
		func_582(var_62_bool);
		if(var_62_bool != 0) {
			var_59_bool = 1;
		}
	}
	if(var_59_bool != 0) {
		irand(var_39_int, (int)3);
		var_65_bool = var_39_int == (int)0;
		if(var_65_bool != 0) {
			var_66_int = var_37_int;
			if(var_66_int == 0) goto Label_535;
			irand(var_40_int, var_37_int);
			var_68_string = ""; var_69_int = 0;
			var_40_int = var_69_int;
			func_761(var_68_string, var_69_int);
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
						goto Label_564;
					}
					goto Label_553;
				}
				var_80_int = var_38_int;
				if(var_80_int == 0) goto Label_553;
				goto Label_564;
		}
		Label_553:
			var_71_bool = 0;
			func_567(var_71_bool);
			var_72_bool = var_71_bool == 0; //@nz
			if(var_72_bool != 0) {
				goto Label_564;
			}
			ResetAAS();
			var_38_int = var_38_int + (int)1;
			goto Label_502;

		}
	}
Label_564:
	ResetAAS();
	return 14;
	
}


func_744(var_61_bool, var_62_string, var_63_string)
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


func_877(var_43_bool, var_44_object, var_45_int)
{
	var_46_object = Obj(); var_47_object = Obj(); var_48_int = 0; var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0;
	func_864(Obj());
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


func_756(var_35_float)
{
	var_36_float = 0; var_37_float = 0;
	GetGameTime(var_37_float);
	var_37_float = var_35_float;
	return 2;
}


func_761(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = "";
	var_56_int = var_53_int;
	if(var_56_int != 0) {
		"idle" = "idle" + var_53_int;
	}
	var_55_string = var_52_string;
	return 2;
}


