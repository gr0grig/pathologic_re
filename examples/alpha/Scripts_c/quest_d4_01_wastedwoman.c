// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,StopGroup0/0,IsLoaded/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,FindActor/2,Trigger/2,GetGameTime/1,HasAnimation/3,GetMainOutdoorScene/1,GetVariable/2
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:quest_d4_01|W:wastedwoman_done|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:d4q01WastedMale|W:pt_d4q01_key2|A:AddMark|W:pt_d4q01_wastedmale|A:ShowMap|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:player|W:ui/NPC_None.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x15a
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x89 vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x163 vars=object
// @PE: 0x3f,0x79,0x89,0x163,0x1fd,0x25d

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_531();
		var_11_bool = var_7_bool == (int)10714;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_589();
			var_30_object = Obj(); var_31_object = Obj();
			var_30_object = var_1_object;
			var_31_object = var_0_object;
			func_605(var_31_object);
		}
		var_57_bool = var_7_bool == (int)10717;
		if(var_57_bool != 0) {
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_object;
			func_589();
			var_60_object = Obj(); var_61_object = Obj();
			var_60_object = var_1_object;
			var_61_object = var_0_object;
			func_605(var_61_object);
		}
		var_63_bool = var_7_bool == (int)10718;
		if(var_63_bool != 0) {
			var_64_object = Obj(); var_65_object = Obj();
			var_64_object = var_1_object;
			var_65_object = var_0_object;
			func_589();
			var_66_object = Obj(); var_67_object = Obj();
			var_66_object = var_1_object;
			var_67_object = var_0_object;
			func_605(var_67_object);
		}
		var_69_bool = var_6_int == (int)10709;
		if(var_69_bool != 0) {
			var_70_string = "";
			func_121(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9726);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9727, (int)10711, (int)10710);
			@@@var_0_object:AddReply((int)9742, (int)10728, (int)10727);
			return 0;
		}
		var_93_bool = var_6_int == (int)10728;
		if(var_93_bool != 0) {
			var_94_string = "";
			func_121(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9743);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9744, (int)10711, (int)10729);
			return 0;
		}
		var_100_bool = var_6_int == (int)10711;
		if(var_100_bool != 0) {
			var_101_string = "";
			func_121(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9728);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9729, (int)10713, (int)10712);
			@@@var_0_object:AddReply((int)9736, (int)10720, (int)10719);
			return 0;
		}
		var_110_bool = var_6_int == (int)10720;
		if(var_110_bool != 0) {
			var_111_string = "";
			func_121(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9737);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9738, (int)10722, (int)10721);
			@@@var_0_object:AddReply((int)9741, (int)10713, (int)10725);
			return 0;
		}
		var_120_bool = var_6_int == (int)10722;
		if(var_120_bool != 0) {
			var_121_string = "";
			func_121(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9739);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9740, (int)10713, (int)10723);
			return 0;
		}
		var_127_bool = var_6_int == (int)10713;
		if(var_127_bool != 0) {
			var_128_string = "";
			func_121(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9730);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9731, (int)-1, (int)10714);
			@@@var_0_object:AddReply((int)9732, (int)10716, (int)10715);
			return 0;
		}
		var_137_bool = var_6_int == (int)10716;
		if(var_137_bool != 0) {
			var_138_string = "";
			func_121(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9733);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9734, (int)-1, (int)10717);
			@@@var_0_object:AddReply((int)9735, (int)-1, (int)10718);
			return 0;
		}
		var_3_string = true;
		var_146_bool = 0;
		func_692(var_146_bool);
		if(var_146_bool != 0) {
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
	var_7_bool = var_0_object == 0; //@nz
	if(var_7_bool != 0) {
		var_0_object = true;
		func_443();
		var_8_int = 0; var_9_object = Obj();
		var_6_object = var_9_object;
		TaskCall(0);
		func_0(var_10_object, var_8_int, var_9_object);
		TaskReturn();
		var_110_bool = 0; var_111_string = ""; var_112_string = "";
		func_548(var_110_bool, "quest_d4_01", "wastedwoman_done");
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_0_object = false;
	
Label_347:
	Sleep((int)3);
	func_374();
	goto Label_347;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_8_int, var_9_object)
{
	var_11_object = Obj(); var_12_bool = 0; var_13_int = 0; var_14_bool = 0; var_15_object = Obj(); var_16_bool = 0; var_17_int = 0; var_18_bool = 0;
	var_0_object = var_9_object;
	var_19_bool = 0; var_20_object = Obj();
	var_9_object = var_20_object;
	func_453(var_19_bool, var_20_object);
	var_59_bool = var_19_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_8_int = -2;
		return 8;
	}
	CreateDialog(var_15_object);
	var_60_int = 0;
	func_688(var_60_int);
	@@var_15_object:SetNPCName(var_60_int);
	var_61_string = "";
	func_690(var_61_string);
	@@var_15_object:SetPhoto(var_61_string);
	var_62_int = 0;
	func_671(var_62_int);
	@@var_15_object:SetPlayerName(var_62_int);
	IsOverrideActive(var_16_bool);
	var_70_bool = var_16_bool;
	if(var_70_bool != 0) {
		var_8_int = -2;
		return 8;
	}
	DoDialog(var_15_object);
	var_71_object = Obj(); var_72_object = Obj();
	var_9_object = var_71_object;
	var_15_object = var_72_object;
	TaskCall(1);
	func_63(var_73_object, var_74_object, var_75_string, var_76_bool, var_71_object, var_72_object);
	TaskReturn();
	@@var_15_object:IsDialogEnd(var_18_bool);
	
Label_45:
	var_108_bool = var_18_bool == 0; //@nz
	if(var_108_bool != 0) {
		sync();
		@@var_15_object:IsDialogEnd(var_18_bool);
		goto Label_45;
	}
	var_9_object = Obj();
	func_509();
	StopDialog(var_15_object);
	@@var_15_object:GetReturnValue((int)-1);
	var_17_int = var_8_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_513(var_82_string)
{
	var_83_float = 0; var_84_float = 0; var_85_float = 0; var_86_float = 0;
	var_88_int = "playing " + var_82_string;
	Trace(var_88_int);
	lshGetAnimTimes(var_82_string, var_85_float, var_86_float);
	lshPlayAnimation(var_85_float, var_86_float);
	var_90_int = "start: " + var_85_float;
	Trace(var_90_int);
	var_92_int = "end: " + var_86_float;
	Trace(var_92_int);
	return 4;
}


func_448(var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0;
	IsLoaded(var_23_bool);
	var_23_bool = var_21_bool;
	return 2;
}


func_453(var_19_bool, var_20_object)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0;
	@@var_20_object:GetPosition(var_30_cvector);
	@@var_20_object:GetEyesHeight(var_29_float);
	var_37_float = GetByIndex(var_30_cvector, 1);
	var_37_float = var_37_float + var_29_float;
	SetByIndex(var_30_cvector, 1) = var_37_float;
	GetPosition(var_31_cvector);
	GetEyesHeight(var_29_float);
	var_38_float = GetByIndex(var_31_cvector, 1);
	var_38_float = var_38_float + var_29_float;
	SetByIndex(var_31_cvector, 1) = var_38_float;
	var_32_cvector = var_30_cvector - var_31_cvector;
	var_39_float = GetByIndex(var_32_cvector, 1);
	SetByIndex(var_32_cvector, 1) = (float)0;
	var_40_int = var_32_cvector | var_32_cvector;
	var_41_float = sqrt(var_40_int);
	var_32_cvector = var_32_cvector / var_41_float;
	var_33_cvector = -var_32_cvector;
	var_43_float = var_32_cvector * (int)70;
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0);
	var_45_cvector = var_33_cvector ^ CVector(0.0, 1.0, 0.0);
	func_538(var_44_cvector, var_45_cvector);
	var_53_float = var_44_cvector * (int)25;
	var_54_int = var_43_float + var_53_float;
	var_34_cvector = var_54_int - CVector(0.0, 10.0, 0.0);
	var_35_cvector = var_31_cvector + var_34_cvector;
	IsOverrideActive(var_36_bool);
	var_56_bool = var_36_bool;
	if(var_56_bool != 0) {
		var_19_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_35_cvector, var_33_cvector);
	var_57_float = GetByIndex(var_34_cvector, 0);
	var_58_float = GetByIndex(var_34_cvector, 2);
	Rotate(var_57_float, var_58_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_19_bool = 1;
	return 16;
}


func_589()
{
	var_14_object = Obj(); var_15_object = Obj();
	func_621(Obj());
	var_16_object = var_15_object;
	var_27_float = 0;
	func_560(var_27_float);
	@@var_15_object:AddMark("d4q01WastedMale", "pt_d4q01_key2", (int)1, (int)11522, var_27_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_531()
{
	var_9_bool = 0;
	func_692(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_538(var_44_cvector, var_45_cvector)
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


func_605(var_31_object)
{
	var_32_object = Obj(); var_33_string = ""; var_34_float = 0;
	func_621(Obj());
	var_35_object = var_32_object;
	func_638(var_32_object, "pt_d4q01_wastedmale", (float)2);
	var_55_object = Obj();
	func_621(var_55_object);
	@@var_31_object:ShowMap(var_55_object);
	return 0;
}


func_671(var_62_int)
{
	var_63_int = 0; var_64_int = 0;
	GetVariable("player", var_64_int);
	var_67_bool = var_64_int == (int)0;
	if(var_67_bool != 0) {
		var_62_int = 200001;
		return 2;
	EMIT "GOTO 0x2ae";
	}
	var_69_bool = var_64_int == (int)1;
	if(var_69_bool != 0) {
		var_62_int = 200002;
		return 2;
	}
	var_62_int = 200003;
	return 2;
}


func_548(var_110_bool, var_111_string, var_112_string)
{
	var_113_object = Obj(); var_114_object = Obj();
	FindActor(var_114_object, var_111_string);
	var_115_bool = var_114_object == 0; //@ne
	if(var_115_bool != 0) {
		var_110_bool = 0;
		return 2;
	}
	Trigger(var_114_object, var_112_string);
	var_110_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_621(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj();
	GetMainOutdoorScene(var_19_object);
	var_21_bool = var_19_object == 0; //@ne
	if(var_21_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_20_object = 0;
		var_20_object = var_16_object;
		return 4;
	}
	@@var_19_object:GetMap(var_20_object);
	var_20_object = var_16_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_688(var_60_int)
{
	var_60_int = 3340;
	return 0;
}


func_560(var_27_float)
{
	var_28_float = 0; var_29_float = 0;
	GetGameTime(var_29_float);
	var_29_float = var_27_float;
	return 2;
}


func_690(var_61_string)
{
	var_61_string = "ui/NPC_None.png";
	return 0;
}


func_692(var_79_bool)
{
	var_79_bool = 0;
	return 0;
}


func_565(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = "";
	var_35_int = var_32_int;
	if(var_35_int != 0) {
		"idle" = "idle" + var_32_int;
	}
	var_34_string = var_31_string;
	return 2;
}


func_374()
{
	var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_bool = 0; var_12_float = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_bool = 0; var_19_float = 0; var_20_bool = 0;
	WaitForAnimEnd();
	var_21_bool = 0;
	func_448(var_21_bool);
	var_24_bool = var_21_bool == 0; //@nz
	if(var_24_bool != 0) {
		return 14;
	}
	func_572((int)0);
	var_25_int = var_14_int;
	var_15_int = 0;
	
Label_388:
	var_38_bool = 0;
	var_38_bool = 0;
	var_40_bool = var_15_int < (int)5;
	if(var_40_bool != 0) {
		var_41_bool = 0;
		func_448(var_41_bool);
		if(var_41_bool != 0) {
			var_38_bool = 1;
		}
	}
	if(var_38_bool != 0) {
		irand(var_16_int, (int)3);
		var_44_bool = var_16_int == (int)0;
		if(var_44_bool != 0) {
			var_45_int = var_14_int;
			if(var_45_int == 0) goto Label_421;
			irand(var_17_int, var_14_int);
			var_47_string = ""; var_48_int = 0;
			var_17_int = var_48_int;
			func_565(var_47_string, var_48_int);
			PlayAnimation("all", var_47_string);
			WaitForAnimEnd(var_18_bool);
			var_49_bool = var_18_bool == 0; //@nz
			if(var_49_bool != 0) {
			} else {
		} else {
				var_52_bool = var_16_int == (int)1;
				if(var_52_bool != 0) {
					rand(var_19_float, (int)4);
					var_55_int = var_19_float + (int)1;
					Sleep(var_55_int, var_20_bool);
					var_56_bool = var_20_bool == 0; //@nz
					if(var_56_bool != 0) {
						goto Label_442;
					}
					goto Label_439;
				}
				var_57_int = var_15_int;
				if(var_57_int == 0) goto Label_439;
				goto Label_442;
		}
		Label_439:
			var_15_int = var_15_int + (int)1;
			goto Label_388;

		}
	}
Label_442:
	return 14;
	
}


func_121(var_2_object, var_78_string)
{
	var_79_bool = 0;
	func_692(var_79_bool);
	var_80_bool = var_79_bool == 0; //@nz
	if(var_80_bool != 0) {
		return 0;
	}
	var_81_bool = var_78_string == var_2_object;
	if(var_81_bool != 0) {
		return 0;
	}
	var_82_string = "";
	var_78_string = var_82_string;
	func_513(var_82_string);
	var_2_object = var_78_string;
	return 0;
}


func_443()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_572(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0;
	var_28_int = 0;
	
Label_574:
	var_31_string = ""; var_32_int = 0;
	var_28_int = var_32_int;
	func_565(var_31_string, var_32_int);
	HasAnimation(var_29_bool, "all", var_31_string);
	var_36_bool = var_29_bool == 0; //@nz
	if(var_36_bool != 0) {
	} else {
		var_28_int = var_28_int + (int)1;
		goto Label_574;
	}
	var_28_int = var_25_int;
	return 4;
	
}


func_509()
{
	CameraSwitchToNormal();
	return 0;
}


func_638(var_32_object, var_33_string, var_34_float)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_object = Obj(); var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_object = Obj(); var_43_bool = 0;
	GetMainOutdoorScene(var_42_object);
	var_44_bool = var_42_object == 0; //@ne
	if(var_44_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_42_object:GetLocator(var_33_string, var_43_bool, var_40_cvector, var_41_cvector);
	var_46_bool = var_43_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_48_int = "Warning: outdoor scene locator " + var_33_string;
		var_50_int = var_48_int + " doesnt exist";
		Trace(var_50_int);
	}
	@@var_42_object:GetMap(var_32_object);
	var_51_bool = var_32_object == 0; //@ne
	if(var_51_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_53_float = GetByIndex(var_40_cvector, 0);
	var_54_float = GetByIndex(var_40_cvector, 2);
	@@var_32_object:SetMapParams(var_53_float, var_54_float, var_34_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_71_object, var_72_object)
{
	var_0_object = var_72_object;
	var_1_object = var_71_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_78_string = "";
		func_121(var_72_object, "Neutral");
		@@@var_0_object:SetMessage((int)9726);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)9727, (int)10711, (int)10710);
		@@@var_0_object:AddReply((int)9742, (int)10728, (int)10727);
		goto Label_91;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x43";
	}
Label_91:
	var_100_bool = 0;
	func_692(var_100_bool);
	if(var_100_bool != 0) {

	Label_95:
		lshWaitForAnimEnd();
		var_101_string = var_3_string;
		if(var_101_string != 0) {
		} else {
			var_102_string = "";
			var_102_string = var_2_object;
			func_513(var_102_string);
			goto Label_95;
	}
		PlayAnimation("all", "idle");

	Label_110:
		WaitForAnimEnd();
		var_105_string = var_3_string;
		if(var_105_string != 0) {
			goto Label_120;
		}
		PlayAnimation("all", "idle");
		goto Label_110;
	}
	goto Label_120;
	
Label_120:
	return 0;
	
}


