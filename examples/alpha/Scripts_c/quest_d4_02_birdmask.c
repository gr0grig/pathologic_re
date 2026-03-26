// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Sleep/1,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,StopGroup0/0,IsLoaded/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,GetInvItemProperty/3,CreateInvItem/1,FindActor/2,Trigger/2,HasAnimation/3,TriggerWorld/2,SetVariable/2,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1,CreateDiaryEntry/4
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:playsound|W:giveitem|W:powder is given|W:powder|W:ood4BirdmaskHome1|W:ood4BirdmaskHome2|W:d4q02BirdmaskNearHome|A:FindMark|A:Remove|W:d4q02MladVladGotoAJLSelf|W:d4q02MladVladGotoAnna|W:d4q02MladVladGotoJulia|W:d4q02MladVladGotoLara|W:quest_d4_02|W:completed|W:birdmask_talk|W:d4q02_survived|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:player|W:Adding diary entry|W:ui/NPC_Black.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x15f
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xbb vars=int,int
// @TASK_2: vars= params=0
// @EVENT_0: op=0x167 vars=object
// @PE: 0x3f,0xab,0xbb,0x167,0x1f9,0x263,0x269,0x274,0x27a,0x2b3,0x2bd,0x2c9,0x2d5

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	if((int)1 != 0) {
		func_527();
		var_10_bool = var_6_int == (int)13059;
		if(var_10_bool != 0) {
			var_11_object = Obj(); var_12_object = Obj();
			var_11_object = var_1_object;
			var_12_object = var_0_object;
			func_628();
			var_15_object = Obj(); var_16_object = Obj();
			var_15_object = var_1_object;
			var_16_object = var_0_object;
			func_691();
		}
		var_49_bool = var_6_int == (int)13065;
		if(var_49_bool != 0) {
			var_50_object = Obj(); var_51_object = Obj();
			var_50_object = var_1_object;
			var_51_object = var_0_object;
			func_634();
			var_54_object = Obj(); var_55_object = Obj();
			var_54_object = var_1_object;
			var_55_object = var_0_object;
			func_617(var_55_object);
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_object;
			func_611();
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_object;
			func_640();
		}
		var_113_bool = var_5_int == (int)13056;
		if(var_113_bool != 0) {
			var_114_bool = 0; var_115_object = Obj();
			var_115_object = var_1_object;
			func_701(var_115_object);
			if(var_114_bool != 0) {
				var_122_string = "";
				func_171(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)11843);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)11844, (int)13058, (int)13057);
				return 0;
			}
			var_141_bool = 0; var_142_object = Obj();
			var_142_object = var_1_object;
			func_725(var_142_object);
			var_147_bool = var_141_bool == 0; //@nz
			if(var_147_bool != 0) {
				var_148_string = "";
				func_171(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)11847);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)11848, (int)-1, (int)13061);
				return 0;
			}
			var_153_bool = 0;
			var_153_bool = 0;
			var_154_bool = 0; var_155_object = Obj();
			var_155_object = var_1_object;
			func_713(var_155_object);
			if(var_154_bool != 0) {
				var_160_bool = 0; var_161_object = Obj();
				var_161_object = var_1_object;
				func_725(var_161_object);
				if(var_160_bool != 0) {
					var_153_bool = 1;
				}
			}
			if(var_153_bool != 0) {
				var_162_string = "";
				func_171(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)11849);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)11850, (int)13064, (int)13063);
				return 0;
			}
		}
		var_168_bool = var_5_int == (int)13064;
		if(var_168_bool != 0) {
			var_169_string = "";
			func_171(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)11851);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11852, (int)-1, (int)13065);
			return 0;
		}
		var_175_bool = var_5_int == (int)13058;
		if(var_175_bool != 0) {
			var_176_string = "";
			func_171(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)11845);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11846, (int)-1, (int)13059);
			return 0;
		}
		var_3_string = true;
		var_181_bool = 0;
		func_849(var_181_bool);
		if(var_181_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xbc";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	func_439();
	var_6_int = 0; var_7_object = Obj();
	var_5_object = var_7_object;
	TaskCall(0);
	func_0(var_8_object, var_6_int, var_7_object);
	TaskReturn();
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	
Label_351:
	Sleep((int)3);
	func_370();
	goto Label_351;
}
EMIT "Return(); Pop(0)";


func_640()
{
	var_79_object = Obj(); var_80_object = Obj(); var_81_object = Obj(); var_82_object = Obj();
	func_779(Obj());
	var_83_object = var_81_object;
	@@var_81_object:FindMark(var_82_object, "d4q02BirdmaskNearHome");
	var_91_object = var_82_object;
	if(var_91_object != 0) {
		@@var_82_object:Remove();
	}
	@@var_81_object:FindMark(var_82_object, "d4q02MladVladGotoAJLSelf");
	var_93_object = var_82_object;
	if(var_93_object != 0) {
		@@var_82_object:Remove();
	}
	@@var_81_object:FindMark(var_82_object, "d4q02MladVladGotoAnna");
	var_95_object = var_82_object;
	if(var_95_object != 0) {
		@@var_82_object:Remove();
	}
	@@var_81_object:FindMark(var_82_object, "d4q02MladVladGotoJulia");
	var_97_object = var_82_object;
	if(var_97_object != 0) {
		@@var_82_object:Remove();
	}
	@@var_81_object:FindMark(var_82_object, "d4q02MladVladGotoLara");
	var_99_object = var_82_object;
	if(var_99_object != 0) {
		@@var_82_object:Remove();
	}
	func_829();
	var_109_bool = 0; var_110_string = ""; var_111_string = "";
	func_575(var_109_bool, "quest_d4_02", "completed");
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_0(var_0_object, var_6_int, var_7_object)
{
	var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_bool = 0;
	var_0_object = var_7_object;
	var_17_bool = 0; var_18_object = Obj();
	var_7_object = var_18_object;
	func_449(var_17_bool, var_18_object);
	var_57_bool = var_17_bool == 0; //@nz
	if(var_57_bool != 0) {
		var_6_int = -2;
		return 8;
	}
	CreateDialog(var_13_object);
	var_58_int = 0;
	func_845(var_58_int);
	@@var_13_object:SetNPCName(var_58_int);
	var_59_string = "";
	func_847(var_59_string);
	@@var_13_object:SetPhoto(var_59_string);
	var_60_int = 0;
	func_796(var_60_int);
	@@var_13_object:SetPlayerName(var_60_int);
	IsOverrideActive(var_14_bool);
	var_68_bool = var_14_bool;
	if(var_68_bool != 0) {
		var_6_int = -2;
		return 8;
	}
	DoDialog(var_13_object);
	var_69_object = Obj(); var_70_object = Obj();
	var_7_object = var_69_object;
	var_13_object = var_70_object;
	TaskCall(1);
	func_63(var_71_object, var_72_object, var_73_string, var_74_bool, var_69_object, var_70_object);
	TaskReturn();
	@@var_13_object:IsDialogEnd(var_16_bool);
	
Label_45:
	var_137_bool = var_16_bool == 0; //@nz
	if(var_137_bool != 0) {
		sync();
		@@var_13_object:IsDialogEnd(var_16_bool);
		goto Label_45;
	}
	var_7_object = Obj();
	func_505();
	StopDialog(var_13_object);
	@@var_13_object:GetReturnValue((int)-1);
	var_15_int = var_6_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_779(var_83_object)
{
	var_84_object = Obj(); var_85_object = Obj(); var_86_object = Obj(); var_87_object = Obj();
	GetMainOutdoorScene(var_86_object);
	var_88_bool = var_86_object == 0; //@ne
	if(var_88_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_87_object = 0;
		var_87_object = var_83_object;
		return 4;
	}
	@@var_86_object:GetMap(var_87_object);
	var_87_object = var_83_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_527()
{
	var_8_bool = 0;
	func_849(var_8_bool);
	if(var_8_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_534(var_42_cvector, var_43_cvector)
{
	var_45_float = 0; var_46_float = 0;
	var_47_int = var_43_cvector | var_43_cvector;
	var_46_float = sqrt(var_47_int);
	var_48_float = 9.999999974752427e-07;
	var_49_bool = var_46_float < var_48_float;
	if(var_49_bool != 0) {
		var_42_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_42_cvector = var_43_cvector / var_46_float;
	return 2;
}


func_796(var_60_int)
{
	var_61_int = 0; var_62_int = 0;
	GetVariable("player", var_62_int);
	var_65_bool = var_62_int == (int)0;
	if(var_65_bool != 0) {
		var_60_int = 200001;
		return 2;
	EMIT "GOTO 0x32b";
	}
	var_67_bool = var_62_int == (int)1;
	if(var_67_bool != 0) {
		var_60_int = 200002;
		return 2;
	}
	var_60_int = 200003;
	return 2;
}


func_544(var_78_int, var_79_string)
{
	var_80_int = 0; var_81_int = 0;
	GetVariable(var_79_string, var_81_int);
	var_81_int = var_78_int;
	return 2;
}


func_549(var_62_object, var_63_object, var_64_int)
{
	var_65_int = 0; var_66_int = 0; var_67_bool = 0; var_68_int = 0; var_69_int = 0; var_70_bool = 0;
	@@var_63_object:GetItemID(var_68_int);
	GetInvItemProperty(var_69_int, var_68_int, "Category");
	@@var_62_object:AddItem(var_70_bool, var_63_object, var_69_int, var_64_int);
	var_72_bool = var_70_bool == 0; //@nz
	if(var_72_bool != 0) {
		@@var_62_object:DropItems(var_63_object, var_64_int);
	}
	return 6;
}


func_171(var_2_object, var_84_string)
{
	var_85_bool = 0;
	func_849(var_85_bool);
	var_86_bool = var_85_bool == 0; //@nz
	if(var_86_bool != 0) {
		return 0;
	}
	var_87_bool = var_84_string == var_2_object;
	if(var_87_bool != 0) {
		return 0;
	}
	var_88_string = "";
	var_84_string = var_88_string;
	func_509(var_88_string);
	var_2_object = var_84_string;
	return 0;
}


func_813()
{
	var_17_object = Obj(); var_18_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_18_object, (int)138, (int)2, (int)15329);
	var_23_bool = 0; var_24_object = Obj(); var_25_int = 0;
	var_18_object = var_24_object;
	func_750(var_23_bool, var_24_object, (int)21);
	return 2;
}
EMIT "Stack[-1] = 0";


func_562(var_57_object, var_58_string, var_59_int)
{
	var_60_object = Obj(); var_61_object = Obj();
	CreateInvItem(var_61_object);
	@@var_61_object:SetItemName(var_58_string);
	var_62_object = Obj(); var_63_object = Obj(); var_64_int = 0;
	var_57_object = var_62_object;
	var_61_object = var_63_object;
	var_59_int = var_64_int;
	func_549(var_62_object, var_63_object, var_64_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_691()
{
	func_813();
	var_42_bool = 0; var_43_string = ""; var_44_string = "";
	func_575(var_42_bool, "quest_d4_02", "birdmask_talk");
	return 0;
}


func_439()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_444(var_20_bool)
{
	var_21_bool = 0; var_22_bool = 0;
	IsLoaded(var_22_bool);
	var_22_bool = var_20_bool;
	return 2;
}


func_829()
{
	var_100_object = Obj(); var_101_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_101_object, (int)94, (int)2, (int)12176);
	var_106_bool = 0; var_107_object = Obj(); var_108_int = 0;
	var_101_object = var_107_object;
	func_750(var_106_bool, var_107_object, (int)21);
	return 2;
}
EMIT "Stack[-1] = 0";


func_701(var_76_bool)
{
	var_78_int = 0; var_79_string = "";
	func_544(var_78_int, "ood4BirdmaskHome1");
	var_83_bool = var_78_int == (int)0;
	if(var_83_bool != 0) {
		var_76_bool = 1;
		return 0;
	}
	var_76_bool = 0;
	return 0;
}


func_575(var_42_bool, var_43_string, var_44_string)
{
	var_45_object = Obj(); var_46_object = Obj();
	FindActor(var_46_object, var_43_string);
	var_47_bool = var_46_object == 0; //@ne
	if(var_47_bool != 0) {
		var_42_bool = 0;
		return 2;
	}
	Trigger(var_46_object, var_44_string);
	var_42_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_69_object, var_70_object)
{
	var_0_object = var_70_object;
	var_1_object = var_69_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_76_bool = 0; var_77_object = Obj();
		var_77_object = var_1_object;
		func_701(var_77_object);
		if(var_76_bool != 0) {
			var_84_string = "";
			func_171(var_70_object, "Neutral");
			@@@var_0_object:SetMessage((int)11843);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11844, (int)13058, (int)13057);
		} else {
				var_111_bool = 0; var_112_object = Obj();
				var_112_object = var_1_object;
				func_725(var_112_object);
				var_117_bool = var_111_bool == 0; //@nz
				if(var_117_bool != 0) {
					var_118_string = "";
					func_171(var_70_object, "Neutral");
					@@@var_0_object:SetMessage((int)11847);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)11848, (int)-1, (int)13061);
					goto Label_141;
				}
				var_123_bool = 0;
				var_123_bool = 0;
				var_124_bool = 0; var_125_object = Obj();
				var_125_object = var_1_object;
				func_713(var_125_object);
				if(var_124_bool != 0) {
					var_130_bool = 0; var_131_object = Obj();
					var_131_object = var_1_object;
					func_725(var_131_object);
					if(var_130_bool != 0) {
						var_123_bool = 1;
					}
				}
				if(var_123_bool != 0) {
					var_132_string = "";
					func_171(var_70_object, "Neutral");
					@@@var_0_object:SetMessage((int)11849);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)11850, (int)13064, (int)13063);
					goto Label_141;
				}
				return 0;
		}
	}
Label_141:
	var_103_bool = 0;
	func_849(var_103_bool);
	if(var_103_bool != 0) {

	Label_145:
		lshWaitForAnimEnd();
		var_104_string = var_3_string;
		if(var_104_string != 0) {
		} else {
			var_105_string = "";
			var_105_string = var_2_object;
			func_509(var_105_string);
			goto Label_145;
	}
		PlayAnimation("all", "idle");

	Label_160:
		WaitForAnimEnd();
		var_108_string = var_3_string;
		if(var_108_string != 0) {
			goto Label_170;
		}
		PlayAnimation("all", "idle");
		goto Label_160;

	}
	goto Label_170;
	
Label_170:
	return 0;
	
}
EMIT "GOTO 0x43";


func_449(var_17_bool, var_18_object)
{
	var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0;
	@@var_18_object:GetPosition(var_28_cvector);
	@@var_18_object:GetEyesHeight(var_27_float);
	var_35_float = GetByIndex(var_28_cvector, 1);
	var_35_float = var_35_float + var_27_float;
	SetByIndex(var_28_cvector, 1) = var_35_float;
	GetPosition(var_29_cvector);
	GetEyesHeight(var_27_float);
	var_36_float = GetByIndex(var_29_cvector, 1);
	var_36_float = var_36_float + var_27_float;
	SetByIndex(var_29_cvector, 1) = var_36_float;
	var_30_cvector = var_28_cvector - var_29_cvector;
	var_37_float = GetByIndex(var_30_cvector, 1);
	SetByIndex(var_30_cvector, 1) = (float)0;
	var_38_int = var_30_cvector | var_30_cvector;
	var_39_float = sqrt(var_38_int);
	var_30_cvector = var_30_cvector / var_39_float;
	var_31_cvector = -var_30_cvector;
	var_41_float = var_30_cvector * (int)70;
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	var_43_cvector = var_31_cvector ^ CVector(0.0, 1.0, 0.0);
	func_534(var_42_cvector, var_43_cvector);
	var_51_float = var_42_cvector * (int)25;
	var_52_int = var_41_float + var_51_float;
	var_32_cvector = var_52_int - CVector(0.0, 10.0, 0.0);
	var_33_cvector = var_29_cvector + var_32_cvector;
	IsOverrideActive(var_34_bool);
	var_54_bool = var_34_bool;
	if(var_54_bool != 0) {
		var_17_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_33_cvector, var_31_cvector);
	var_55_float = GetByIndex(var_32_cvector, 0);
	var_56_float = GetByIndex(var_32_cvector, 2);
	Rotate(var_55_float, var_56_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_17_bool = 1;
	return 16;
}


func_713(var_124_bool)
{
	var_126_int = 0; var_127_string = "";
	func_544(var_126_int, "ood4BirdmaskHome2");
	var_129_bool = var_126_int == (int)0;
	if(var_129_bool != 0) {
		var_124_bool = 1;
		return 0;
	}
	var_124_bool = 0;
	return 0;
}


func_587(var_30_string, var_31_int)
{
	var_32_string = ""; var_33_string = "";
	var_34_int = var_31_int;
	if(var_34_int != 0) {
		"idle" = "idle" + var_31_int;
	}
	var_33_string = var_30_string;
	return 2;
}


func_845(var_58_int)
{
	var_58_int = 4029;
	return 0;
}


func_847(var_59_string)
{
	var_59_string = "ui/NPC_Black.png";
	return 0;
}


func_849(var_85_bool)
{
	var_85_bool = 0;
	return 0;
}


func_594(var_24_int)
{
	var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_bool = 0;
	var_27_int = 0;
	
Label_596:
	var_30_string = ""; var_31_int = 0;
	var_27_int = var_31_int;
	func_587(var_30_string, var_31_int);
	HasAnimation(var_28_bool, "all", var_30_string);
	var_35_bool = var_28_bool == 0; //@nz
	if(var_35_bool != 0) {
	} else {
		var_27_int = var_27_int + (int)1;
		goto Label_596;
	}
	var_27_int = var_24_int;
	return 4;
	
}


func_725(var_111_bool)
{
	var_113_int = 0; var_114_string = "";
	func_544(var_113_int, "d4q02_survived");
	var_116_bool = var_113_int == (int)1;
	if(var_116_bool != 0) {
		var_111_bool = 1;
		return 0;
	}
	var_111_bool = 0;
	return 0;
}


func_737(var_32_object)
{
	var_33_object = Obj(); var_34_object = Obj();
	GetDiaryRoot(var_34_object);
	var_35_bool = var_34_object == 0; //@nz
	if(var_35_bool != 0) {
		Trace("Can't retrieve diary root");
		var_32_object = 0;
		return 2;
	}
	var_34_object = var_32_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_611()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_617(var_54_object)
{
	Trace("powder is given");
	var_57_object = Obj(); var_58_string = ""; var_59_int = 0;
	var_54_object = var_57_object;
	func_562(var_57_object, "powder", (int)1);
	return 0;
}


func_750(var_23_bool, var_24_object, var_25_int)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_int = 0; var_29_object = Obj(); var_30_object = Obj(); var_31_int = 0;
	func_737(Obj());
	var_32_object = var_29_object;
	@@var_29_object:Find(var_25_int, var_30_object);
	var_37_bool = var_30_object == 0; //@nz
	if(var_37_bool != 0) {
		var_39_int = "Can't find diary parent with id: " + var_25_int;
		Trace(var_39_int);
		var_23_bool = 0;
		return 6;
	}
	@@var_30_object:AddChild(var_24_object);
	SetVariable("player_diary", (int)1);
	@@var_24_object:GetCategory(var_31_int);
	SetDiarySection(var_31_int);
	var_23_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_370()
{
	var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_bool = 0; var_11_float = 0; var_12_bool = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_bool = 0; var_18_float = 0; var_19_bool = 0;
	WaitForAnimEnd();
	var_20_bool = 0;
	func_444(var_20_bool);
	var_23_bool = var_20_bool == 0; //@nz
	if(var_23_bool != 0) {
		return 14;
	}
	func_594((int)0);
	var_24_int = var_13_int;
	var_14_int = 0;
	
Label_384:
	var_37_bool = 0;
	var_37_bool = 0;
	var_39_bool = var_14_int < (int)5;
	if(var_39_bool != 0) {
		var_40_bool = 0;
		func_444(var_40_bool);
		if(var_40_bool != 0) {
			var_37_bool = 1;
		}
	}
	if(var_37_bool != 0) {
		irand(var_15_int, (int)3);
		var_43_bool = var_15_int == (int)0;
		if(var_43_bool != 0) {
			var_44_int = var_13_int;
			if(var_44_int == 0) goto Label_417;
			irand(var_16_int, var_13_int);
			var_46_string = ""; var_47_int = 0;
			var_16_int = var_47_int;
			func_587(var_46_string, var_47_int);
			PlayAnimation("all", var_46_string);
			WaitForAnimEnd(var_17_bool);
			var_48_bool = var_17_bool == 0; //@nz
			if(var_48_bool != 0) {
			} else {
		} else {
				var_51_bool = var_15_int == (int)1;
				if(var_51_bool != 0) {
					rand(var_18_float, (int)4);
					var_54_int = var_18_float + (int)1;
					Sleep(var_54_int, var_19_bool);
					var_55_bool = var_19_bool == 0; //@nz
					if(var_55_bool != 0) {
						goto Label_438;
					}
					goto Label_435;
				}
				var_56_int = var_14_int;
				if(var_56_int == 0) goto Label_435;
				goto Label_438;
		}
		Label_435:
			var_14_int = var_14_int + (int)1;
			goto Label_384;

		}
	}
Label_438:
	return 14;
	
}


func_628()
{
	SetVariable("ood4BirdmaskHome1", (int)1);
	return 0;
}


func_505()
{
	CameraSwitchToNormal();
	return 0;
}


func_634()
{
	SetVariable("ood4BirdmaskHome2", (int)1);
	return 0;
}


func_509(var_88_string)
{
	var_89_float = 0; var_90_float = 0; var_91_float = 0; var_92_float = 0;
	var_94_int = "playing " + var_88_string;
	Trace(var_94_int);
	lshGetAnimTimes(var_88_string, var_91_float, var_92_float);
	lshPlayAnimation(var_91_float, var_92_float);
	var_96_int = "start: " + var_91_float;
	Trace(var_96_int);
	var_98_int = "end: " + var_92_float;
	Trace(var_98_int);
	return 4;
}


