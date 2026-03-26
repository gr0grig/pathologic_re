// @IMPORTS: SetRTEnvelope/2,Hold/0,IsOverrideActive/1,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SetTimer/2,GetBrightness/1,IsInWalkMode/1,SwitchToRun/0,SwitchToWalk/0,KillTimer/1,rand/2,Sleep/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,StopGroup0/0,FindShiftedPathTo/2,FindLongestDir/6,Trace/1,Rotate/2,MovePoint/3,FindDirLength/3,IsPlayerActor/2,GetScene/1,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,irand/2,AddActorByType/6,AddItem/3,AddItem/4,IsExisting3DSound/2,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,GetVariable/2,WorkWithCorpse/1,Barter/1,CreateInvItem/1,ClearSubContainer/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1,ReportReputationChange/4
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:Can't retreat, distance: |W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:SetProperty|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:rifle_ammo|W:rusk|W:bandage|W:tourniquet|W:health
// @RUN_OP: 0xa5
// @RUN_TASK: 1
// @TASK_0: vars= params=1
// @EVENT_0: op=0x20 vars=object
// @EVENT_22: op=0x9f vars=object,int,float,float
// @EVENT_16: op=0xa1 vars=object,string
// @EVENT_41: op=0xa3 vars=object
// @TASK_1: vars=bool,bool params=0
// @EVENT_7: op=0xb4 vars=int
// @EVENT_41: op=0xce vars=object
// @EVENT_17: op=0xd7 vars=object
// @EVENT_1: op=0xe7 vars=object
// @EVENT_3: op=0xf5 vars=object
// @EVENT_10: op=0x143 vars=object
// @EVENT_28: op=0x147 vars=
// @TASK_2: vars= params=0
// @TASK_3: vars=object,cvector,bool params=1
// @EVENT_7: op=0x1bf vars=int
// @EVENT_41: op=0x1fa vars=object
// @STANDALONE_EVENT_22: op=0x3db vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x3e3 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x3ed vars=object,string
// @STANDALONE_EVENT_41: op=0x3fa vars=object
// @PE: 0x0,0x11,0x85,0x9f,0xa1,0xa3,0xc7,0xce,0xd7,0xe7,0xf5,0x143,0x1fa,0x347,0x355,0x3d3,0x3db,0x3e3,0x3fa,0x40c,0x414,0x427,0x43c

task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_cvector, var_5_bool)
{
	var_6_bool = 0; var_7_bool = 0;
	IsOverrideActive(var_7_bool);
	var_8_bool = var_7_bool == 0; //@nz
	if(var_8_bool != 0) {
		var_9_object = Obj();
		var_5_bool = var_9_object;
		func_853(var_9_object);
	}
	return 2;
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	return 0;
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_object, var_5_cvector, var_6_bool)
{
	return 0;
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_cvector, var_5_bool)
{
	return 0;
}


task_1_event_7(var_0_bool, var_1_bool, var_2_int, var_3_object, var_4_cvector, var_5_bool)
{
	var_6_bool = 0; var_7_bool = 0;
	var_9_bool = var_5_bool != (int)110;
	if(var_9_bool != 0) {
		return 2;
	}
	IsInWalkMode(var_7_bool);
	var_10_bool = var_7_bool;
	if(var_10_bool != 0) {
		var_11_bool = 0;
		func_174(var_11_bool);
		if(var_11_bool != 0) {
			SwitchToRun();
		} else {
			SwitchToWalk();
		}
	}
	return 2;
	
}


task_1_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool)
{
	func_199();
	var_5_bool = Obj();
	func_1018();
	return 0;
}


task_1_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool)
{
	var_6_bool = 0; var_7_object = Obj();
	var_5_bool = var_7_object;
	func_601(var_6_bool, var_7_object);
	var_40_bool = var_6_bool == 0; //@nz
	if(var_40_bool != 0) {
		return 0;
	}
	func_199();
	var_42_object = Obj();
	var_5_bool = var_42_object;
	func_1036(var_42_object);
	return 0;
}


task_1_event_1(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool)
{
	var_6_bool = 0; var_7_object = Obj();
	var_5_bool = var_7_object;
	func_1050(var_6_bool, var_7_object);
	if(var_6_bool != 0) {
		func_199();
		var_46_object = Obj();
		var_5_bool = var_46_object;
		func_1063(var_46_object);
	}
	return 0;
}


task_1_event_3(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool)
{
	var_6_bool = 0; var_7_object = Obj();
	var_5_bool = var_7_object;
	func_1071(var_6_bool, var_7_object);
	if(var_6_bool != 0) {
		func_199();
		var_46_object = Obj();
		var_5_bool = var_46_object;
		func_1084(var_46_object);
	}
	return 0;
}


task_1_event_10(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool)
{
	RequestClearPath(var_5_bool);
	return 0;
}


task_1_event_28(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool)
{
	Stop();
	return 0;
}


task_3_event_7(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_int)
{
	var_6_cvector = CVector(0,0,0); var_7_float = 0; var_8_cvector = CVector(0,0,0); var_9_float = 0; var_10_cvector = CVector(0,0,0); var_11_float = 0; var_12_cvector = CVector(0,0,0); var_13_float = 0;
	var_15_bool = var_5_int != (int)120;
	if(var_15_bool != 0) {
		return 8;
	}
	var_16_bool = var_0_bool == 0; //@ne
	if(var_16_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_10_cvector);
		FindDirLength(var_11_float, var_10_cvector, (float)7000.0);
		var_19_cvector = CVector(0,0,0); var_20_float = 0;
		func_344(var_13_float, var_19_cvector, (float)1.7453293800354004);
		var_19_cvector = var_12_cvector;
		var_13_float = var_12_cvector | var_12_cvector;
		var_49_bool = 0;
		var_49_bool = 0;
		var_51_bool = var_13_float >= (float)2500.0;
		if(var_51_bool != 0) {
			var_52_bool = 0;
			var_53_float = var_11_float * var_11_float;
			var_55_float = var_53_float * (float)2.25;
			var_56_bool = var_13_float >= var_55_float;
			if(var_56_bool != 1) {
				var_57_bool = 0;
				func_515((bool)1, var_57_bool);
				if(var_57_bool != 1) {
					var_52_bool = 0;
				}
			}
			if(var_52_bool != 0) {
				var_49_bool = 1;
			}
		}
		if(var_49_bool == 0) goto Label_498;
		Stop();
		var_77_cvector = CVector(0,0,0);
		func_531(var_77_cvector);
		var_1_bool = var_77_cvector + var_12_cvector;
	}
Label_498:
	return 8;
	
}


task_3_event_41(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object)
{
	func_499(var_5_object);
	var_5_object = Obj();
	func_1018();
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float)
{
	var_9_object = Obj(); var_10_int = 0; var_11_float = 0;
	var_5_object = var_9_object;
	var_6_int = var_10_int;
	var_7_float = var_11_float;
	func_669(var_9_object, var_10_int, var_11_float);
	return 0;
}


event_43(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_cvector, var_10_cvector)
{
	var_11_object = Obj(); var_12_int = 0; var_13_float = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0);
	var_5_object = var_11_object;
	var_6_int = var_12_int;
	var_7_float = var_13_float;
	var_9_cvector = var_14_cvector;
	var_10_cvector = var_15_cvector;
	func_737(var_13_float, var_14_cvector, var_15_cvector);
	return 0;
}


event_16(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_string)
{
	var_7_float = 0; var_8_float = 0;
	var_10_bool = var_6_string == "health";
	if(var_10_bool != 0) {
		GetProperty("health", var_8_float);
		var_13_bool = var_8_float <= (int)0;
		if(var_13_bool != 0) {
			SignalDeath(var_5_object);
		}
	}
	return 2;
}


event_41(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object)
{
	var_6_bool = 0; var_7_object = Obj();
	var_5_object = var_7_object;
	func_543(var_6_bool, var_7_object);
	if(var_6_bool != 0) {
		var_10_object = Obj();
		func_818(var_10_object);
		ReportReputationChange(var_5_object, var_10_object, (float)0.05000000074505806, (bool)1);
	}
	var_15_object = Obj();
	var_5_object = var_15_object;
	func_1044(var_15_object);
	return 0;
}


main(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool)
{
	
Label_165:
	SetTimer((int)110, (float)0.30000001192092896);
	func_259(var_3_cvector, var_4_bool);
	goto Label_165;
}
EMIT "Return(); Pop(0)";


func_0(var_17_object)
{
	var_18_bool = 0; var_19_object = Obj();
	var_17_object = var_19_object;
	func_543(var_18_bool, var_19_object);
	if(var_18_bool != 0) {
		func_938();
	}
	func_914();
	var_96_object = Obj();
	var_17_object = var_96_object;
	func_17(var_96_object);
	return 0;
}


func_897(var_82_string)
{
	var_83_object = Obj(); var_84_int = 0; var_85_bool = 0; var_86_object = Obj(); var_87_int = 0; var_88_bool = 0;
	CreateInvItem(var_86_object);
	@@var_86_object:SetItemName(var_82_string);
	@@var_86_object:SetProperty("Organ", (int)1);
	@@var_86_object:GetItemID(var_87_int);
	AddItem(var_88_bool, var_86_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_259(var_0_bool, var_1_bool)
{
	var_7_float = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_bool = 0; var_11_object = Obj(); var_12_bool = 0; var_13_float = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_bool = 0; var_17_object = Obj(); var_18_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_13_float, (float)0.5);
	Sleep(var_13_float);
	
Label_267:
	var_20_bool = var_0_bool == 0; //@nz
	if(var_20_bool != 0) {
		var_21_bool = var_1_bool == 0; //@nz
		if(var_21_bool != 0) {

		Label_271:
			GetPosition(var_15_cvector);
			var_22_float = 0;
			func_318(var_22_float);
			GetRandomPFPointInCircle(var_14_cvector, var_15_cvector, var_22_float, var_16_bool);
			var_25_bool = var_16_bool;
			if(var_25_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_271;
		}
				var_1_bool = false;
	}
			return 12;
	}
	goto Label_287;
	
Label_287:
	var_26_object = Obj(); var_27_cvector = CVector(0,0,0);
	var_14_cvector = var_27_cvector;
	func_337(var_26_object, var_27_cvector);
	var_26_object = var_17_object;
	var_30_bool = var_17_object != 0; //@nn
	if(var_30_bool != 0) {
		RotatePath(var_17_object, var_18_bool);
		var_31_bool = var_18_bool;
		if(var_31_bool != 0) {
			var_32_bool = 0;
			func_174(var_32_bool);
			FollowPath(var_17_object, var_32_bool, var_18_bool);
			var_17_object = 0;
			var_36_bool = var_18_bool;
			if(var_36_bool != 0) {
				TaskCall(2);
				func_343();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_17_object = 0;
	goto Label_267;
	
}


func_515(var_0_bool, var_57_bool)
{
	var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0);
	GetDirection(var_60_cvector);
	var_62_cvector = CVector(0,0,0); var_63_object = Obj();
	var_63_object = var_0_bool;
	func_536(var_62_cvector, var_63_object);
	var_62_cvector = var_61_cvector;
	var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0);
	var_60_cvector = var_69_cvector;
	var_61_cvector = var_70_cvector;
	func_839(var_68_float, var_69_cvector, var_70_cvector);
	var_57_bool = var_68_float >= (float)-0.3420201241970062;
	return 4;
}


func_133(var_119_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_120_string = "";
	var_119_string = var_120_string;
	func_777(var_120_string);
	PlayAnimation("all", var_119_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_119_string);
	RemoveEnvelope();
	return 0;
}


func_777(var_120_string)
{
	var_121_bool = 0; var_122_int = 0; var_123_bool = 0; var_124_int = 0; var_125_bool = 0; var_126_float = 0; var_127_cvector = CVector(0,0,0); var_128_cvector = CVector(0,0,0); var_129_bool = 0; var_130_int = 0; var_131_bool = 0; var_132_int = 0; var_133_bool = 0; var_134_float = 0; var_135_cvector = CVector(0,0,0); var_136_cvector = CVector(0,0,0);
	IsExisting3DSound(var_129_bool, var_120_string);
	var_137_bool = var_129_bool == 0; //@nz
	if(var_137_bool != 0) {
		var_130_int = 0;

	Label_783:
		var_139_int = var_130_int + (int)1;
		var_140_int = var_120_string + var_139_int;
		IsExisting3DSound(var_131_bool, var_140_int);
		var_141_bool = var_131_bool == 0; //@nz
		if(var_141_bool != 0) {
		} else {
			var_130_int = var_130_int + (int)1;
			goto Label_783;
		}
		var_142_bool = var_130_int == 0; //@nz
		if(var_142_bool != 0) {
			return 16;
		}
		irand(var_132_int, var_130_int);
		var_144_int = var_132_int + (int)1;
		var_120_string = var_120_string + var_144_int;
	}
	Is3DSoundLoaded(var_133_bool, var_120_string);
	var_145_bool = var_133_bool;
	if(var_145_bool != 0) {
		GetEyesHeight(var_134_float);
		GetDirection(var_135_cvector);
		var_136_cvector = var_135_cvector * (int)50;
		var_147_float = GetByIndex(var_136_cvector, 1);
		var_147_float = var_147_float + var_134_float;
		SetByIndex(var_136_cvector, 1) = var_147_float;
		PlayGlobalSound(var_120_string, var_136_cvector);
	}
	return 16;
	
}


func_1036(var_42_object)
{
	var_43_object = Obj();
	var_42_object = var_43_object;
	TaskCall(3);
	func_374(var_44_object, var_45_cvector, var_46_bool, var_43_object);
	TaskReturn();
	return 0;
}


func_17(var_96_object)
{
	EventDisable(0);
	var_97_object = Obj();
	var_96_object = var_97_object;
	func_42(var_97_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_28:
	Hold();
	goto Label_28;
}
EMIT "Return(); Pop(0)";


func_914()
{
	var_76_int = 0;
	func_847(var_76_int);
	var_81_bool = var_76_int != (int)1;
	if(var_81_bool != 0) {
		return 0;
	}
	var_82_string = "";
	func_897("liver");
	var_93_string = "";
	func_897("kidney");
	var_94_string = "";
	func_897("heart");
	var_95_string = "";
	func_897("blood");
	return 0;
}


func_531(var_77_cvector)
{
	var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0);
	GetPosition(var_79_cvector);
	var_79_cvector = var_77_cvector;
	return 2;
}


func_1044(var_15_object)
{
	var_16_object = Obj();
	var_15_object = var_16_object;
	func_979(var_16_object);
	return 0;
}


func_536(var_39_cvector, var_40_object)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0);
	GetPosition(var_43_cvector);
	@@var_40_object:GetPosition(var_44_cvector);
	var_39_cvector = var_44_cvector - var_43_cvector;
	return 4;
}


func_1050(var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0;
	var_10_bool = 0; var_11_object = Obj();
	var_7_object = var_11_object;
	func_601(var_10_bool, var_11_object);
	var_44_bool = var_10_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_6_bool = 0;
		return 2;
	}
	IsPlayerActor(var_7_object, var_9_bool);
	var_9_bool = var_6_bool;
	return 2;
}


func_669(var_9_object, var_10_int, var_11_float)
{
	var_12_cvector = CVector(0,0,0); var_13_object = Obj(); var_14_int = 0; var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_int = 0; var_19_int = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_object = Obj(); var_23_int = 0; var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_int = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0);
	var_30_bool = 0;
	var_30_bool = 0;
	var_31_bool = 0;
	var_31_bool = 0;
	var_32_object = var_9_object;
	if(var_32_object != 0) {
		var_34_bool = var_10_int != (int)4;
		if(var_34_bool != 0) {
			var_31_bool = 1;
		}
	}
	if(var_31_bool != 0) {
		var_36_bool = var_10_int != (int)5;
		if(var_36_bool != 0) {
			var_30_bool = 1;
		}
	}
	if(var_30_bool != 0) {
		var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0);
		var_39_cvector = CVector(0,0,0); var_40_object = Obj();
		var_9_object = var_40_object;
		func_536(var_39_cvector, var_40_object);
		var_39_cvector = var_38_cvector;
		func_824(var_37_cvector, var_38_cvector);
		var_37_cvector = var_21_cvector;
		CreateVectorVector(var_22_object);
		var_23_int = 1;

	Label_698:
		var_51_int = "hit" + var_23_int;
		GetGeometryLocator(var_51_int, var_24_bool, var_25_cvector, var_26_cvector);
		var_52_bool = var_24_bool == 0; //@nz
		if(var_52_bool != 0) {
		} else {
			var_100_int = var_26_cvector | var_21_cvector;
			var_102_bool = var_100_int >= (float)0.7071067690849304;
			if(var_102_bool != 0) {
				@@var_22_object:add(var_25_cvector);
			}
			var_23_int = var_23_int + (int)1;
			goto Label_698;
		}
		@@var_22_object:size(var_27_int);
		var_53_int = var_27_int;
		if(var_53_int != 0) {
			irand(var_28_int, var_27_int);
			@@var_22_object:get(var_29_cvector, var_28_int);
			var_54_object = Obj(); var_55_int = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0);
			var_9_object = var_54_object;
			var_10_int = var_55_int;
			var_11_float = var_56_float;
			var_29_cvector = var_57_cvector;
			var_58_cvector = -var_21_cvector;
			func_737(var_56_float, var_57_cvector, var_58_cvector);
			return 18;
		}
		var_22_object = 0;
	}
	var_99_object = Obj();
	var_9_object = var_99_object;
	func_625(var_99_object);
	return 18;
	
}


func_543(var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0;
	IsPlayerActor(var_7_object, var_9_bool);
	var_9_bool = var_6_bool;
	return 2;
}


func_548(var_32_bool, var_33_object, var_34_string)
{
	var_35_bool = 0; var_36_bool = 0;
	var_39_bool = IsFuncExist(var_33_object, "HasProperty", (int)2);
	var_40_bool = var_39_bool == 0; //@nz
	if(var_40_bool != 0) {
		var_32_bool = 0;
		return 2;
	}
	@@var_33_object:HasProperty(var_34_string, var_36_bool);
	var_36_bool = var_32_bool;
	return 2;
}


func_1063(var_46_object)
{
	var_47_object = Obj();
	var_46_object = var_47_object;
	TaskCall(3);
	func_374(var_48_object, var_49_cvector, var_50_bool, var_47_object);
	TaskReturn();
	return 0;
}


func_938()
{
	var_20_int = 0; var_21_bool = 0; var_22_int = 0; var_23_bool = 0;
	ClearSubContainer((int)0);
	var_25_int = 0; var_26_int = 0;
	func_866((int)500, (int)1000);
	var_44_string = ""; var_45_int = 0; var_46_int = 0; var_47_int = 0;
	func_762("rifle_ammo", (int)1, (int)3, (int)3);
	var_60_string = ""; var_61_int = 0; var_62_int = 0; var_63_int = 0;
	func_762("rusk", (int)1, (int)3, (int)2);
	var_64_string = ""; var_65_int = 0; var_66_int = 0;
	func_751("bandage", (int)1, (int)6);
	var_73_string = ""; var_74_int = 0; var_75_int = 0;
	func_751("tourniquet", (int)1, (int)6);
	return 4;
}


func_42(var_97_object)
{
	var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_string = ""; var_103_object = Obj(); var_104_bool = 0; var_105_bool = 0; var_106_float = 0; var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_string = ""; var_113_object = Obj(); var_114_bool = 0; var_115_bool = 0; var_116_float = 0; var_117_cvector = CVector(0,0,0);
	var_118_bool = var_97_object == 0; //@ne
	if(var_118_bool != 0) {
		var_119_string = "";
		func_133("fdie");
	} else {
		@@var_97_object:GetPosition(var_108_cvector);
		GetPosition(var_109_cvector);
		GetDirection(var_110_cvector);
		var_111_cvector = var_109_cvector - var_108_cvector;
		var_151_float = GetByIndex(var_111_cvector, 0);
		var_152_float = GetByIndex(var_110_cvector, 0);
		var_153_float = var_151_float * var_152_float;
		var_154_float = GetByIndex(var_111_cvector, 2);
		var_155_float = GetByIndex(var_110_cvector, 2);
		var_156_float = var_154_float * var_155_float;
		var_157_int = var_153_float + var_156_float;
		var_159_bool = var_157_int >= (int)0;
		if(var_159_bool != 0) {
			var_112_string = "fdie";
		} else {
				var_112_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_97_object = var_113_object;
		var_162_bool = IsFuncExist(var_97_object, "GetScriptProperty", (int)2);
		if(var_162_bool != 0) {
			@@var_97_object:HasScriptProperty(var_114_bool, "Owner");
			var_164_bool = var_114_bool;
			if(var_164_bool != 0) {
				@@var_97_object:GetScriptProperty(var_113_object, "Owner");
				var_166_bool = var_113_object == 0; //@ne
				if(var_166_bool != 0) {
					var_97_object = var_113_object;
				}
			}
		}
		var_169_bool = IsFuncExist(var_113_object, "@GetEyesHeight", (int)1);
		if(var_169_bool != 0) {
			@@var_113_object:GetEyesHeight(var_116_float);
			var_117_cvector = CVector(0.0, 0.0, 0.0);
			var_170_float = GetByIndex(var_117_cvector, 1);
			var_116_float = var_170_float;
			SetByIndex(var_117_cvector, 1) = var_170_float;
			LookAsync(var_97_object, "head", var_117_cvector);
			var_115_bool = 1;
		} else {
			var_115_bool = 0;

		}
		var_172_string = "";
		var_112_string = var_172_string;
		func_777(var_172_string);
		PlayAnimation("all", var_112_string);
		WaitForAnimEnd();
		var_174_bool = var_115_bool;
		if(var_174_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_112_string);
		RemoveEnvelope();
		var_113_object = 0;
	}
	return 20;
	
}


func_174(var_32_bool)
{
	var_33_float = 0; var_34_float = 0;
	GetBrightness(var_34_float);
	var_32_bool = var_34_float >= (float)0.5;
	return 2;
}


func_1071(var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0;
	var_10_bool = 0; var_11_object = Obj();
	var_7_object = var_11_object;
	func_601(var_10_bool, var_11_object);
	var_44_bool = var_10_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_6_bool = 0;
		return 2;
	}
	IsPlayerActor(var_7_object, var_9_bool);
	var_9_bool = var_6_bool;
	return 2;
}


func_560(var_25_bool, var_26_object)
{
	var_27_bool = 0; var_28_bool = 0;
	@@var_26_object:IsDead(var_28_bool);
	var_28_bool = var_25_bool;
	return 2;
}


func_818(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj();
	self(var_12_object);
	var_12_object = var_10_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_565(var_14_bool, var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj();
	var_20_bool = var_15_object == 0; //@ne
	if(var_20_bool != 0) {
		var_14_bool = 0;
		return 4;
	}
	var_21_bool = 0;
	var_21_bool = 0;
	var_24_bool = IsFuncExist(var_15_object, "IsDead", (int)1);
	if(var_24_bool != 0) {
		var_25_bool = 0; var_26_object = Obj();
		var_15_object = var_26_object;
		func_560(var_25_bool, var_26_object);
		if(var_25_bool != 0) {
			var_21_bool = 1;
		}
	}
	if(var_21_bool != 0) {
		var_14_bool = 0;
		return 4;
	}
	GetScene(var_18_object);
	var_29_bool = var_18_object == 0; //@ne
	if(var_29_bool != 0) {
		var_14_bool = 0;
		return 4;
	}
	@@var_15_object:GetScene(var_19_object);
	var_30_bool = var_18_object != var_19_object;
	if(var_30_bool != 0) {
		var_14_bool = 0;
		return 4;
	}
	var_14_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_824(var_37_cvector, var_38_cvector)
{
	var_45_float = 0; var_46_float = 0;
	var_47_int = var_38_cvector | var_38_cvector;
	var_46_float = sqrt(var_47_int);
	var_48_float = 9.999999974752427e-07;
	var_49_bool = var_46_float < var_48_float;
	if(var_49_bool != 0) {
		var_37_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_37_cvector = var_38_cvector / var_46_float;
	return 2;
}


func_1084(var_46_object)
{
	var_47_object = Obj();
	var_46_object = var_47_object;
	TaskCall(3);
	func_374(var_48_object, var_49_cvector, var_50_bool, var_47_object);
	TaskReturn();
	return 0;
}


func_318(var_22_float)
{
	var_23_float = 0; var_24_float = 0;
	GetCameraFarDistance(var_24_float);
	var_24_float = var_22_float;
	return 2;
}


func_834(var_52_bool, var_53_int, var_54_int)
{
	var_55_int = 0; var_56_int = 0;
	irand(var_56_int, var_54_int);
	var_52_bool = var_56_int < var_53_int;
	return 2;
}


func_199()
{
	func_330(var_4_cvector, var_5_bool);
	KillTimer((int)110);
	return 0;
}


func_839(var_68_float, var_69_cvector, var_70_cvector)
{
	var_71_int = var_69_cvector | var_70_cvector;
	var_72_int = var_69_cvector | var_69_cvector;
	var_73_int = var_70_cvector | var_70_cvector;
	var_74_float = var_72_int * var_73_int;
	var_75_float = sqrt(var_74_float);
	var_68_float = var_71_int / var_75_float;
	return 0;
}


func_330(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	Stop();
	StopGroup0();
	return 0;
}


func_974(var_37_int, var_38_string)
{
	var_39_int = 0; var_40_int = 0;
	GetInvItemByName(var_40_int, var_38_string);
	var_40_int = var_37_int;
	return 2;
}


func_847(var_76_int)
{
	var_77_int = 0; var_78_int = 0;
	GetVariable("branch", var_78_int);
	var_78_int = var_76_int;
	return 2;
}


func_337(var_26_object, var_27_cvector)
{
	var_28_object = Obj(); var_29_object = Obj();
	FindShiftedPathTo(var_29_object, var_27_cvector);
	var_29_object = var_26_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_979(var_16_object)
{
	var_17_object = Obj();
	var_16_object = var_17_object;
	TaskCall(0);
	func_0(var_17_object);
	TaskReturn();
	return 0;
}


func_853(var_9_object)
{
	var_10_int = 0;
	func_847(var_10_int);
	var_15_bool = var_10_int == (int)1;
	if(var_15_bool != 0) {
		WorkWithCorpse(var_9_object);
	} else {
		Barter(var_9_object);
	}
	return 0;
	
}


func_343()
{
	return 0;
}


func_344(var_0_bool, var_19_cvector, var_20_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_float = 0;
	GetPosition(var_27_cvector);
	@@@var_0_bool:GetPosition(var_28_cvector);
	GetDirection(var_29_cvector);
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0);
	var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0);
	var_36_cvector = var_27_cvector - var_28_cvector;
	func_824(var_35_cvector, var_36_cvector);
	var_43_float = var_29_cvector * (float)0.75;
	var_34_cvector = var_35_cvector + var_43_float;
	func_824(var_33_cvector, var_34_cvector);
	var_33_cvector = var_30_cvector;
	FindLongestDir(var_31_cvector, var_32_float, var_30_cvector, var_20_float, (int)32, (float)7000.0);
	var_32_float = var_32_float - (int)100;
	var_48_bool = var_32_float < (int)0;
	if(var_48_bool != 0) {
		var_32_float = 0;
	}
	var_19_cvector = var_31_cvector * var_32_float;
	return 12;
}


func_601(var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_bool = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_565(var_14_bool, var_15_object);
	var_31_bool = var_14_bool == 0; //@nz
	if(var_31_bool != 0) {
		var_10_bool = 0;
		return 2;
	}
	var_32_bool = 0; var_33_object = Obj(); var_34_string = "";
	var_11_object = var_33_object;
	func_548(var_32_bool, var_33_object, "noaccess");
	var_41_bool = var_32_bool == 0; //@nz
	if(var_41_bool != 0) {
		var_10_bool = 1;
		return 2;
	}
	@@var_11_object:GetProperty("noaccess", var_13_int);
	var_10_bool = var_13_int == (int)0;
	return 2;
}


func_737(var_11_object, var_14_cvector, var_15_cvector)
{
	var_16_object = Obj(); var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj();
	GetScene(var_18_object);
	AddActorByType(var_19_object, "scripted", var_18_object, var_14_cvector, var_15_cvector, "blood_dir.xml");
	var_22_object = Obj();
	var_11_object = var_22_object;
	func_625(var_22_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_866(var_25_int, var_26_int)
{
	var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_bool = 0;
	var_31_bool = var_25_int > var_26_int;
	if(var_31_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_29_int = 0;
	var_33_bool = var_25_int != var_26_int;
	if(var_33_bool != 0) {
		var_34_int = var_26_int - var_25_int;
		irand(var_29_int, var_34_int);
	} else {
		var_43_bool = var_25_int == (int)0;
		if(var_43_bool == 0) goto Label_884;
		return 4;
	}
Label_884:
	var_29_int = var_29_int + var_25_int;
	var_36_bool = var_29_int == (int)0;
	if(var_36_bool != 0) {
		return 4;
	}
	var_37_int = 0; var_38_string = "";
	func_974(var_37_int, "Money");
	AddItem(var_30_bool, var_37_int, (int)0, var_29_int);
	return 4;
	
}


func_751(var_64_string, var_65_int, var_66_int)
{
	var_67_bool = 0; var_68_bool = 0;
	var_69_bool = 0; var_70_int = 0; var_71_int = 0;
	var_65_int = var_70_int;
	var_66_int = var_71_int;
	func_834(var_69_bool, var_70_int, var_71_int);
	if(var_69_bool != 0) {
		AddItem(var_68_bool, var_64_string, (int)0);
	}
	return 2;
}


func_625(var_22_object)
{
	var_23_bool = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_string = ""; var_30_bool = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = "";
	var_37_bool = var_22_object == 0; //@ne
	if(var_37_bool != 0) {
		return 14;
	}
	IsDead(var_30_bool);
	var_38_bool = var_30_bool;
	if(var_38_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_31_int);
	var_40_bool = var_31_int < (int)0;
	if(var_40_bool != 0) {
		return 14;
	}
	@@var_22_object:GetPosition(var_32_cvector);
	GetPosition(var_33_cvector);
	GetDirection(var_34_cvector);
	var_35_cvector = var_33_cvector - var_32_cvector;
	var_41_float = GetByIndex(var_35_cvector, 0);
	var_42_float = GetByIndex(var_34_cvector, 0);
	var_43_float = var_41_float * var_42_float;
	var_44_float = GetByIndex(var_35_cvector, 2);
	var_45_float = GetByIndex(var_34_cvector, 2);
	var_46_float = var_44_float * var_45_float;
	var_47_int = var_43_float + var_46_float;
	var_49_bool = var_47_int >= (int)0;
	if(var_49_bool != 0) {
		var_36_string = "fhit";
	} else {
		var_36_string = "bhit";
	}
	var_52_int = var_36_string + "1";
	var_54_int = var_36_string + "2";
	FadeSecondaryAnimation("hit_react", var_52_int, var_54_int, (int)-10);
	return 14;
	
}


func_499(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_374(var_0_bool, var_1_bool, var_2_object, var_47_object)
{
	var_51_cvector = CVector(0,0,0); var_52_float = 0; var_53_bool = 0; var_54_cvector = CVector(0,0,0); var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_float = 0; var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_float = 0;
	var_0_bool = var_47_object;
	var_61_cvector = CVector(0,0,0); var_62_float = 0;
	func_344(var_60_float, var_61_cvector, (float)1.7453293800354004);
	var_61_cvector = var_56_cvector;
	var_57_float = var_56_cvector | var_56_cvector;
	var_92_bool = var_57_float < (float)2500.0;
	if(var_92_bool != 0) {
		var_93_cvector = CVector(0,0,0); var_94_float = 0;
		func_344(var_60_float, var_93_cvector, (float)2.6179938316345215);
		var_93_cvector = var_56_cvector;
		var_57_float = var_56_cvector | var_56_cvector;
		var_96_bool = var_57_float < (float)2500.0;
		if(var_96_bool != 0) {
			var_98_float = sqrt(var_57_float);
			var_99_int = "Can't retreat, distance: " + var_98_float;
			Trace(var_99_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_101_float = GetByIndex(var_56_cvector, 0);
	var_102_float = GetByIndex(var_56_cvector, 2);
	Rotate(var_101_float, var_102_float);
	var_103_cvector = CVector(0,0,0);
	func_531(var_103_cvector);
	var_1_bool = var_103_cvector + var_56_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_416:
	MovePoint(var_1_bool, (int)1, var_58_bool);
	var_109_bool = var_58_bool;
	if(var_109_bool != 0) {
		var_110_bool = var_0_bool == 0; //@ne
		if(var_110_bool != 0) {
			goto Label_446;
		EMIT "GOTO 0x1bc";

		Label_446:
			return 10;
		}
		var_111_cvector = CVector(0,0,0); var_112_float = 0;
		func_344(var_60_float, var_111_cvector, (float)2.6179938316345215);
		var_111_cvector = var_59_cvector;
		var_60_float = var_59_cvector | var_59_cvector;
		var_114_bool = var_60_float >= (float)2500.0;
		if(var_114_bool != 0) {
			var_115_cvector = CVector(0,0,0);
			func_531(var_115_cvector);
			var_1_bool = var_115_cvector + var_59_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_446;
		}
	}
	var_118_bool = var_2_object == 0; //@nz
	if(var_118_bool == 1) goto Label_416;
	
}


func_762(var_44_string, var_45_int, var_46_int, var_47_int)
{
	var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_bool = 0;
	var_52_bool = 0; var_53_int = 0; var_54_int = 0;
	var_45_int = var_53_int;
	var_46_int = var_54_int;
	func_834(var_52_bool, var_53_int, var_54_int);
	if(var_52_bool != 0) {
		irand(var_50_int, var_47_int);
		var_59_int = var_50_int + (int)1;
		AddItem(var_51_bool, var_44_string, (int)0, var_59_int);
	}
	return 4;
}


