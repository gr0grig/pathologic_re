// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,Sleep/1,IsLoaded/1,RemoveActor/1,StopGroup0/0,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,self/1,GetVariable/2,SetVariable/2,HasAnimation/3
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:cleanup|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:ood12Littlegirl1|W:d12q01DankoKnowHeIsToy|W:player|W:ui/NPC_None.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x14f
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xa1 vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x144 vars=object
// @EVENT_26: op=0x15f vars=string
// @EVENT_5: op=0x176 vars=
// @EVENT_6: op=0x17b vars=
// @PE: 0x3f,0x91,0xa1,0x144,0x214,0x246,0x24c,0x258

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_554();
		var_11_bool = var_6_int == (int)16263;
		if(var_11_bool != 0) {
			var_12_bool = 0;
			var_12_bool = 0;
			var_13_bool = 0; var_14_object = Obj();
			var_14_object = var_1_object;
			func_588(var_14_object);
			if(var_13_bool != 0) {
				var_21_bool = 0; var_22_object = Obj();
				var_22_object = var_1_object;
				func_600(var_22_object);
				if(var_21_bool != 0) {
					var_12_bool = 1;
				}
			}
			if(var_12_bool != 0) {
				var_27_object = Obj(); var_28_object = Obj();
				var_27_object = var_1_object;
				var_28_object = var_0_object;
				func_582();
				var_31_string = "";
				func_145(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)15005);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)15006, (int)16265, (int)16264);
				@@@var_0_object:AddReply((int)15017, (int)-1, (int)16276);
				@@@var_0_object:AddReply((int)15018, (int)16278, (int)16277);
				return 0;
			}
		}
		var_57_bool = var_6_int == (int)16278;
		if(var_57_bool != 0) {
			var_58_string = "";
			func_145(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)15019);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15020, (int)-1, (int)16279);
			@@@var_0_object:AddReply((int)15021, (int)-1, (int)16280);
			return 0;
		}
		var_67_bool = var_6_int == (int)16265;
		if(var_67_bool != 0) {
			var_68_string = "";
			func_145(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)15007);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15008, (int)16267, (int)16266);
			return 0;
		}
		var_74_bool = var_6_int == (int)16267;
		if(var_74_bool != 0) {
			var_75_string = "";
			func_145(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)15009);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15010, (int)-1, (int)16268);
			@@@var_0_object:AddReply((int)15011, (int)-1, (int)16269);
			@@@var_0_object:AddReply((int)15012, (int)16271, (int)16270);
			@@@var_0_object:AddReply((int)15016, (int)16271, (int)16274);
			return 0;
		}
		var_90_bool = var_6_int == (int)16271;
		if(var_90_bool != 0) {
			var_91_string = "";
			func_145(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)15013);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15014, (int)-1, (int)16272);
			@@@var_0_object:AddReply((int)15015, (int)-1, (int)16273);
			return 0;
		}
		var_3_string = true;
		var_99_bool = 0;
		func_633(var_99_bool);
		if(var_99_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xa2";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	func_466();
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
			func_395(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_561(var_14_object);
			RemoveActor(var_14_object);
		}
	}
	return 2;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	StopGroup0();
	sync();
	return 0;
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_395(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_561(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_335:
	var_6_bool = 0;
	func_471(var_6_bool);
	var_9_bool = var_6_bool == 0; //@nz
	if(var_9_bool != 0) {
		Hold();
		goto Label_335;
	}
	Sleep((int)3);
	func_397();
	goto Label_335;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj();
	var_8_object = var_19_object;
	func_476(var_18_bool, var_19_object);
	var_58_bool = var_18_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_59_int = 0;
	func_629(var_59_int);
	@@var_14_object:SetNPCName(var_59_int);
	var_60_string = "";
	func_631(var_60_string);
	@@var_14_object:SetPhoto(var_60_string);
	var_61_int = 0;
	func_612(var_61_int);
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
	var_129_bool = var_17_bool == 0; //@nz
	if(var_129_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_45;
	}
	var_8_object = Obj();
	func_532();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_642(var_27_int)
{
	var_28_int = 0; var_29_bool = 0; var_30_int = 0; var_31_bool = 0;
	var_30_int = 0;
	
Label_644:
	var_33_string = ""; var_34_int = 0;
	var_30_int = var_34_int;
	func_635(var_33_string, var_34_int);
	HasAnimation(var_31_bool, "all", var_33_string);
	var_38_bool = var_31_bool == 0; //@nz
	if(var_38_bool != 0) {
	} else {
		var_30_int = var_30_int + (int)1;
		goto Label_644;
	}
	var_30_int = var_27_int;
	return 4;
	
}


func_395(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_397()
{
	var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_float = 0; var_24_bool = 0;
	WaitForAnimEnd();
	var_25_bool = 0;
	func_471(var_25_bool);
	var_26_bool = var_25_bool == 0; //@nz
	if(var_26_bool != 0) {
		return 14;
	}
	func_642((int)0);
	var_27_int = var_18_int;
	var_19_int = 0;
	
Label_411:
	var_40_bool = 0;
	var_40_bool = 0;
	var_42_bool = var_19_int < (int)5;
	if(var_42_bool != 0) {
		var_43_bool = 0;
		func_471(var_43_bool);
		if(var_43_bool != 0) {
			var_40_bool = 1;
		}
	}
	if(var_40_bool != 0) {
		irand(var_20_int, (int)3);
		var_46_bool = var_20_int == (int)0;
		if(var_46_bool != 0) {
			var_47_int = var_18_int;
			if(var_47_int == 0) goto Label_444;
			irand(var_21_int, var_18_int);
			var_49_string = ""; var_50_int = 0;
			var_21_int = var_50_int;
			func_635(var_49_string, var_50_int);
			PlayAnimation("all", var_49_string);
			WaitForAnimEnd(var_22_bool);
			var_51_bool = var_22_bool == 0; //@nz
			if(var_51_bool != 0) {
			} else {
		} else {
				var_54_bool = var_20_int == (int)1;
				if(var_54_bool != 0) {
					rand(var_23_float, (int)4);
					var_57_int = var_23_float + (int)1;
					Sleep(var_57_int, var_24_bool);
					var_58_bool = var_24_bool == 0; //@nz
					if(var_58_bool != 0) {
						goto Label_465;
					}
					goto Label_462;
				}
				var_59_int = var_19_int;
				if(var_59_int == 0) goto Label_462;
				goto Label_465;
		}
		Label_462:
			var_19_int = var_19_int + (int)1;
			goto Label_411;

		}
	}
Label_465:
	return 14;
	
}


func_145(var_2_object, var_96_string)
{
	var_97_bool = 0;
	func_633(var_97_bool);
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
	func_536(var_100_string);
	var_2_object = var_96_string;
	return 0;
}


func_532()
{
	CameraSwitchToNormal();
	return 0;
}


func_536(var_100_string)
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


func_554()
{
	var_9_bool = 0;
	func_633(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_561(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_567(var_43_cvector, var_44_cvector)
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
		func_588(var_79_object);
		if(var_78_bool != 0) {
			var_86_bool = 0; var_87_object = Obj();
			var_87_object = var_1_object;
			func_600(var_87_object);
			if(var_86_bool != 0) {
				var_77_bool = 1;
			}
		}
		if(var_77_bool != 0) {
			var_92_object = Obj(); var_93_object = Obj();
			var_92_object = var_1_object;
			var_93_object = var_0_object;
			func_582();
			var_96_string = "";
			func_145(var_71_object, "Neutral");
			@@@var_0_object:SetMessage((int)15005);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15006, (int)16265, (int)16264);
			@@@var_0_object:AddReply((int)15017, (int)-1, (int)16276);
			@@@var_0_object:AddReply((int)15018, (int)16278, (int)16277);
		} else {
				return 0;
		}
	}
	var_121_bool = 0;
	func_633(var_121_bool);
	if(var_121_bool != 0) {

	Label_119:
		lshWaitForAnimEnd();
		var_122_string = var_3_string;
		if(var_122_string != 0) {
		} else {
			var_123_string = "";
			var_123_string = var_2_object;
			func_536(var_123_string);
			goto Label_119;
	}
		PlayAnimation("all", "idle");

	Label_134:
		WaitForAnimEnd();
		var_126_string = var_3_string;
		if(var_126_string != 0) {
			goto Label_144;
		}
		PlayAnimation("all", "idle");
		goto Label_134;

	}
	goto Label_144;
	
Label_144:
	return 0;
	
}
EMIT "GOTO 0x43";


func_577(var_80_int, var_81_string)
{
	var_82_int = 0; var_83_int = 0;
	GetVariable(var_81_string, var_83_int);
	var_83_int = var_80_int;
	return 2;
}


func_582()
{
	SetVariable("ood12Littlegirl1", (int)1);
	return 0;
}


func_588(var_78_bool)
{
	var_80_int = 0; var_81_string = "";
	func_577(var_80_int, "d12q01DankoKnowHeIsToy");
	var_85_bool = var_80_int != (int)0;
	if(var_85_bool != 0) {
		var_78_bool = 1;
		return 0;
	}
	var_78_bool = 0;
	return 0;
}


func_466()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_471(var_6_bool)
{
	var_7_bool = 0; var_8_bool = 0;
	IsLoaded(var_8_bool);
	var_8_bool = var_6_bool;
	return 2;
}


func_600(var_86_bool)
{
	var_88_int = 0; var_89_string = "";
	func_577(var_88_int, "ood12Littlegirl1");
	var_91_bool = var_88_int == (int)0;
	if(var_91_bool != 0) {
		var_86_bool = 1;
		return 0;
	}
	var_86_bool = 0;
	return 0;
}


func_476(var_18_bool, var_19_object)
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
	func_567(var_43_cvector, var_44_cvector);
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


func_612(var_61_int)
{
	var_62_int = 0; var_63_int = 0;
	GetVariable("player", var_63_int);
	var_66_bool = var_63_int == (int)0;
	if(var_66_bool != 0) {
		var_61_int = 200001;
		return 2;
	EMIT "GOTO 0x273";
	}
	var_68_bool = var_63_int == (int)1;
	if(var_68_bool != 0) {
		var_61_int = 200002;
		return 2;
	}
	var_61_int = 200003;
	return 2;
}


func_629(var_59_int)
{
	var_59_int = 3346;
	return 0;
}


func_631(var_60_string)
{
	var_60_string = "ui/NPC_None.png";
	return 0;
}


func_633(var_97_bool)
{
	var_97_bool = 0;
	return 0;
}


func_635(var_33_string, var_34_int)
{
	var_35_string = ""; var_36_string = "";
	var_37_int = var_34_int;
	if(var_37_int != 0) {
		"idle" = "idle" + var_34_int;
	}
	var_36_string = var_33_string;
	return 2;
}


