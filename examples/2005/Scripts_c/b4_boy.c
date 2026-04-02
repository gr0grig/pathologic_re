// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		if(1 != 0) {
			func_761();
			if(var_14_bool == 31578) {
				object var_19_object; object var_20_object;
				var_19_object = var_1_object;
				var_20_object = var_0_object;
				func_847();
				object var_37_object = var_1_object;
				func_831(var_0_object);
			}
			if(var_14_bool == 31579) {
				object var_65_object; object var_66_object;
				var_65_object = var_1_object;
				var_66_object = var_0_object;
				func_847();
				object var_67_object; object var_68_object;
				var_67_object = var_1_object;
				var_68_object = var_0_object;
				func_863();
			}
			if(var_13_cvector == 31575) {
				func_132(var_14_bool, "Neutral");
				var_0_object->SetMessage(530185); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530186, 31577, 31576); //@t
				var_0_object->AddReply(530190, -1, 31579); //@t
				return 0;
			}
			if(var_13_cvector == 31577) {
				func_132(var_14_bool, "Neutral");
				var_0_object->SetMessage(530187); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530188, -1, 31578); //@t
				return 0;
			}
			var_3_string = true;
			bool var_99_bool;
			func_805(var_99_bool);
			if(var_99_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x9b";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool)
	{
	
		for(;;) {
			func_275(var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, (float)300, (float)100);
			@Sleep(3);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		object var_14_object; object var_15_object;
		func_340(var_14_object, var_15_object);
		int var_19_int; object var_20_object;
		var_13_bool = var_20_object;
		TaskCall(0);
		func_0(var_21_object, var_19_int, var_20_object);
		TaskReturn();
		@GetScene(var_15_object);
		object var_137_object;
		func_768(var_137_object);
		var_15_object->RemoveStationaryActor(var_137_object);
		object var_140_object;
		var_13_bool = var_140_object;
		TaskCall(3);
		func_470(var_141_object, var_142_cvector, var_143_bool, var_140_object);
		TaskReturn();
	}
	EMIT "Stack[-1] = 0";

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		if(var_13_bool == 10) {
			bool var_16_bool;
			func_302(var_11_object, var_12_cvector, var_13_bool, var_16_bool);
			if(var_16_bool != 0) {
				if(!var_2_object) { //@nz
					func_750(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


task task_3
{
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, int var_13_int)
	{
		cvector var_18_cvector; float var_19_float; cvector var_20_cvector; float var_21_float;
		if(var_13_int != 120) {
		}
		if(var_0_object == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_18_cvector);
			@FindDirLength(var_19_float, var_18_cvector, 7000.0);
			cvector var_27_cvector;
			func_440(var_21_float, var_27_cvector, 1.7453294);
			var_27_cvector = var_20_cvector;
			var_21_float = var_20_cvector | var_20_cvector;
			bool var_57_bool = false;
			if(var_21_float >= 2500.0) {
				bool var_60_bool;
				var_64_bool = var_21_float >= ((var_19_float * var_19_float) * 2.25);
				if(var_64_bool != 1) {
					bool var_65_bool;
					func_611(true, var_65_bool);
					if(var_65_bool != 1)
						var_60_bool = false;
				}
				if(var_60_bool != 0)
					var_57_bool = true;
			}
			if(var_57_bool == 0) goto Label_594;
			@Stop();
			cvector var_85_cvector;
			func_627(var_85_cvector);
			var_1_object = var_85_cvector + var_20_cvector;
		}
	Label_594:
	
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object)
	{
		func_595(var_13_object);
		object var_15_object;
		var_13_object = var_15_object;
		func_936();
	}

}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object)
{
}


void func_0(object var_0_object, int var_19_int, object var_20_object)
{
	var_0_object = var_20_object;
	bool var_30_bool; object var_31_object;
	var_20_object = var_31_object;
	func_652(var_30_bool, var_31_object, 70.0);
	if(!var_30_bool) { //@nz
		var_19_int = -2;
		return 8;
	}
	object var_26_object;
	@CreateDialog(var_26_object);
	int var_77_int;
	func_799(var_77_int);
	var_26_object->SetNPCName(var_77_int);
	int var_78_int;
	func_797(var_78_int);
	var_26_object->SetNPCDescription(var_78_int);
	string var_79_string;
	func_801(var_79_string);
	var_26_object->SetPhoto(var_79_string);
	string var_80_string;
	func_803(var_80_string);
	var_26_object->SetPhoto2(var_80_string);
	int var_81_int;
	func_919(var_81_int);
	var_26_object->SetPlayerName(var_81_int);
	bool var_27_bool;
	@IsOverrideActive(var_27_bool);
	if(var_27_bool != 0) {
		var_19_int = -2;
		return 8;
	}
	@DoDialog(var_26_object);
	object var_90_object; object var_91_object;
	var_20_object = var_90_object;
	var_26_object = var_91_object;
	TaskCall(1);
	func_74(var_92_object, var_93_object, var_94_string, var_95_bool, var_90_object, var_91_object);
	TaskReturn();
	bool var_29_bool;
	var_26_object->IsDialogEnd(var_29_bool);
	
	for(;;) {
		var_129_bool = !var_29_bool; //@nz
		if(var_129_bool == 0) goto Label_63;
		@sync();
		var_26_object->IsDialogEnd(var_29_bool);
	}
	
Label_63:
	object var_130_object;
	var_20_object = var_130_object;
	func_720();
	@StopDialog(var_26_object);
	var_26_object->GetReturnValue(-1);
	int var_28_int = var_19_int;
}
EMIT "Stack[-4] = 0";


void func_768(object var_137_object)
{
	object var_139_object;
	@self(var_139_object);
	var_139_object = var_137_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_132(object var_2_object, string var_97_string)
{
	bool var_98_bool;
	func_805(var_98_bool);
	if(!var_98_bool) //@nz
		return 0;
	if(var_97_string == var_2_object)
		return 0;
	string var_101_string; bool var_102_bool;
	var_97_string = var_101_string;
	if(var_97_string == "")
		var_102_bool = false;
	else
		var_102_bool = true;
	func_744(var_101_string, var_102_bool);
	var_2_object = var_97_string;
	
}


void func_774(cvector var_43_cvector, cvector var_44_cvector)
{
	float var_46_float = sqrt(var_44_cvector | var_44_cvector);
	if(var_46_float < 0.000001)
		var_43_cvector = [0.0, 0.0, 0.0];
	var_43_cvector = var_44_cvector / var_46_float;
}


void func_647(bool var_15_bool)
{
	bool var_17_bool;
	@IsLoaded(var_17_bool);
	var_17_bool = var_15_bool;
}


void func_652(bool var_30_bool, object var_31_object, float var_32_float)
{
	cvector var_43_cvector; bool var_50_bool;
	var_31_object->GetPosition(var_43_cvector);
	float var_42_float;
	var_31_object->GetEyesHeight(var_42_float);
	var_51_float = GetByIndex(var_43_cvector, 1);
	SetByIndex(var_43_cvector, 1) = (var_51_float + var_42_float);
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	@GetEyesHeight(var_42_float);
	var_52_float = GetByIndex(var_44_cvector, 1);
	SetByIndex(var_44_cvector, 1) = (var_52_float + var_42_float);
	cvector var_45_cvector = var_43_cvector - var_44_cvector;
	var_53_float = GetByIndex(var_45_cvector, 1);
	SetByIndex(var_45_cvector, 1) = (float)0;
	var_55_float = sqrt(var_45_cvector | var_45_cvector);
	var_45_cvector /= var_55_float;
	cvector var_46_cvector = -var_45_cvector;
	cvector var_57_cvector;
	func_774(var_57_cvector, (var_46_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_47_cvector = ((var_45_cvector * var_32_float) + (var_57_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_49_bool;
	@IsOverrideActive(var_49_bool);
	if(var_49_bool != 0)
		var_30_bool = false;
	@StopWorld();
	@CameraTransit((var_44_cvector + var_47_cvector), var_46_cvector);
	var_70_float = GetByIndex(var_47_cvector, 0);
	var_71_float = GetByIndex(var_47_cvector, 2);
	@Rotate(var_70_float, var_71_float);
	bool var_72_bool;
	func_805(var_72_bool);
	if(var_72_bool != 0) {
	} else {
		@HasAnimationTrack(var_50_bool, "head");
		if(var_50_bool == 0) goto Label_714;
		@LookAsyncCamera("head");
	}
Label_714:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_30_bool = true;
	
}


// @pe
void func_784(float var_76_float, cvector var_77_cvector, cvector var_78_cvector)
{
	var_83_float = sqrt((var_77_cvector | var_77_cvector) * (var_78_cvector | var_78_cvector));
	var_76_float = (var_77_cvector | var_78_cvector) / var_83_float;
}


// @pe
void func_275(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_13_float, float var_14_float)
{
	bool var_15_bool;
	func_647(var_15_bool);
	if(!var_15_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_13_float;
	var_1_object = var_14_float;
	@SetTimer(10, 1.0);
	func_354();
	if(!false) //@nz
		@KillTimer(10);
}


void func_919(int var_81_int)
{
	int var_83_int;
	@GetVariable("branch", var_83_int);
	if(var_83_int == 0) {
		var_81_int = 1;
		return 2;
	EMIT "GOTO 0x3a6";
	}
	if(var_83_int == 1) {
		var_81_int = 2;
		return 2;
	}
	var_81_int = 3;
}


void func_792(float var_34_float)
{
	float var_36_float;
	@GetGameTime(var_36_float);
	var_36_float = var_34_float;
}


void func_797(int var_78_int)
{
	var_78_int = 515558;
}


void func_799(int var_77_int)
{
	var_77_int = 503343;
}


void func_801(string var_79_string)
{
	var_79_string = "ui/NPC_None.png";
}


void func_803(string var_80_string)
{
	var_80_string = "ui/NPC_Black_b.png";
}


void func_805(bool var_72_bool)
{
	var_72_bool = false;
}


void func_807(string var_44_string, int var_45_int)
{
	string var_47_string = "idle";
	if(var_45_int != 0)
		var_47_string += var_45_int;
	var_47_string = var_44_string;
}


void func_302(object var_0_object, object var_1_object, bool var_4_bool, bool var_16_bool)
{
	if(var_4_bool == null)
		var_16_bool = false;
	float var_20_float;
	func_639(var_20_float, var_4_bool);
	float var_18_float = sqrt(var_20_float);
	if(var_2_object != 0)
		var_18_float -= var_1_object;
	var_16_bool = var_18_float < var_0_object;
}


void func_814(int var_38_int)
{
	int var_41_int; bool var_42_bool;
	var_41_int = 0;
	
	for(;;) {
		string var_44_string; int var_45_int;
		var_41_int = var_45_int;
		func_807(var_44_string, var_45_int);
		@HasAnimation(var_42_bool, "all", var_44_string);
		if(!var_42_bool) //@nz
			break;
		var_41_int += 1;
	}
	var_41_int = var_38_int;
}


void func_433(bool var_63_bool)
{
	var_63_bool = true;
}


void func_435(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_440(object var_0_object, cvector var_27_cvector, float var_28_float)
{
	cvector var_35_cvector;
	@GetPosition(var_35_cvector);
	cvector var_36_cvector;
	var_0_object->GetPosition(var_36_cvector); //@t
	cvector var_37_cvector;
	@GetDirection(var_37_cvector);
	cvector var_41_cvector;
	cvector var_43_cvector;
	func_774(var_43_cvector, (var_35_cvector - var_36_cvector));
	func_774(var_41_cvector, (var_43_cvector + (var_37_cvector * 0.75)));
	cvector var_38_cvector;
	var_41_cvector = var_38_cvector;
	cvector var_39_cvector;
	float var_40_float;
	@FindLongestDir(var_39_cvector, var_40_float, var_38_cvector, var_28_float, 32, 7000.0);
	if((var_40_float - 100) < 0)
		var_40_float = 0;
	var_27_cvector = var_39_cvector * var_40_float;
}


// @pe
void func_831(object var_38_object)
{
	object var_42_object;
	func_869(var_42_object);
	object var_39_object;
	var_42_object = var_39_object;
	func_886(var_39_object, "pt_map_eva", (float)2);
	object var_62_object;
	func_869(var_62_object);
	var_38_object->ShowMap(var_62_object);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_90_object, object var_91_object)
{
	var_0_object = var_91_object;
	var_1_object = var_90_object;
	var_3_string = false;
	if(1 != 0) {
		func_132(var_91_object, "Neutral");
		var_0_object->SetMessage(530185); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(530186, 31577, 31576); //@t
		var_0_object->AddReply(530190, -1, 31579); //@t
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	bool var_116_bool;
	func_805(var_116_bool);
	if(var_116_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_737(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_131;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_131:
		return 0;

	}
	
}


void func_847(void)
{
	object var_23_object;
	func_869(var_23_object);
	object var_22_object;
	var_23_object = var_22_object;
	float var_34_float;
	func_792(var_34_float);
	var_22_object->AddMark("b4q01BoyGotoDanko", "pt_map_eva", 3, 530189, var_34_float);
}
EMIT "Stack[-1] = 0";


void func_720(void)
{
	bool var_132_bool;
	@CameraSwitchToNormal();
	bool var_133_bool;
	func_805(var_133_bool);
	if(var_133_bool != 0) {
	} else {
		@HasAnimationTrack(var_132_bool, "head");
		if(var_132_bool == 0) goto Label_736;
		@UnlookAsync("head");
	}
Label_736:
	
}


void func_595(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


// @pe
void func_340(object var_2_object, string var_3_string)
{
	func_435();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_470(object var_0_object, object var_1_object, object var_2_object, object var_140_object)
{
	float var_150_float; cvector var_152_cvector; float var_153_float;
	cvector var_154_cvector;
	func_440(var_153_float, var_154_cvector, 1.7453294);
	cvector var_149_cvector;
	var_154_cvector = var_149_cvector;
	if((var_149_cvector | var_149_cvector) < 2500.0) {
		cvector var_181_cvector;
		func_440(var_153_float, var_181_cvector, 2.6179938);
		var_181_cvector = var_149_cvector;
		var_150_float = var_149_cvector | var_149_cvector;
		if(var_150_float < 2500.0) {
			var_186_float = sqrt(var_150_float);
			@Trace("Can't retreat, distance: " + var_186_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_189_float = GetByIndex(var_149_cvector, 0);
	var_190_float = GetByIndex(var_149_cvector, 2);
	@Rotate(var_189_float, var_190_float);
	cvector var_191_cvector;
	func_627(var_191_cvector);
	@SetTimer(120, 0.5);
	
Label_512:
	bool var_151_bool;
	@MovePoint((var_191_cvector + var_149_cvector), 1, var_151_bool);
	if(var_151_bool != 0) {
		if(var_140_object == null) {
			goto Label_542;
		EMIT "GOTO 0x21c";

		Label_542:
			for(;;) {
				return 10;
		}
			cvector var_199_cvector;
			func_440(var_153_float, var_199_cvector, 2.6179938);
			var_199_cvector = var_152_cvector;
			if((var_152_cvector | var_152_cvector) >= 2500.0) {
				cvector var_203_cvector;
				func_627(var_203_cvector);
				var_1_object = var_203_cvector + var_152_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_512; //@nz

	}
}


// @pe
void func_863(void)
{
	@TriggerWorld("playsound", "mapmark");
}


void func_737(string var_118_string)
{
	float var_121_float; float var_122_float;
	@lshGetAnimTimes(var_118_string, var_121_float, var_122_float);
	@lshPlayAnimation(var_121_float, var_122_float, false);
}


void func_354(void)
{
	int var_31_int; int var_32_int; bool var_33_bool; float var_34_float; bool var_35_bool;
	@WaitForAnimEnd();
	bool var_36_bool;
	func_647(var_36_bool);
	if(!var_36_bool) //@nz
		return 14;
	int var_38_int;
	func_814(var_38_int);
	int var_29_int;
	var_38_int = var_29_int;
	int var_30_int = 0;
	
	for(;;) {
		bool var_51_bool = false;
		if(var_30_int < 5) {
			bool var_54_bool;
			func_647(var_54_bool);
			if(var_54_bool != 0)
				var_51_bool = true;
		}
		if(var_51_bool != 0) {
			@irand(var_31_int, 3);
			if(var_31_int == 0) {
				if(var_29_int == 0) goto Label_401;
				@irand(var_32_int, var_29_int);
				string var_60_string; int var_61_int;
				var_32_int = var_61_int;
				func_807(var_60_string, var_61_int);
				@PlayAnimation("all", var_60_string);
				@WaitForAnimEnd(var_33_bool);
				if(!var_33_bool) { //@nz
				} else {
			} else {
			if(var_31_int == 1) {
				@rand(var_34_float, 4);
				@Sleep((var_34_float + 1), var_35_bool);
				if(!var_35_bool) { //@nz
					goto Label_430;
				}
			} else if(var_30_int != 0) {
				goto Label_430;
			}
			}
					bool var_63_bool;
					func_433(var_63_bool);
					var_64_bool = !var_63_bool; //@nz
					if(var_64_bool == 0) goto Label_425;
			}
		}
	Label_430:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_425:
		@ResetAAS();
		var_30_int += 1;
	}
	
}


void func_611(object var_0_object, bool var_65_bool)
{
	cvector var_68_cvector;
	@GetDirection(var_68_cvector);
	cvector var_70_cvector;
	func_632(var_70_cvector, var_0_object);
	cvector var_69_cvector;
	var_70_cvector = var_69_cvector;
	float var_76_float; cvector var_77_cvector; cvector var_78_cvector;
	var_68_cvector = var_77_cvector;
	var_69_cvector = var_78_cvector;
	func_784(var_76_float, var_77_cvector, var_78_cvector);
	var_65_bool = var_76_float >= -0.34202012;
}


void func_869(object var_23_object)
{
	object var_26_object; object var_27_object;
	@GetMainOutdoorScene(var_26_object);
	if(var_26_object == null) {
		@Trace("Can't find main outdoor scene");
		var_27_object = null;
		var_27_object = var_23_object;
	}
	var_26_object->GetMap(var_27_object);
	var_27_object = var_23_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_744(string var_101_string, bool var_102_bool)
{
	float var_107_float; float var_108_float;
	@lshGetAnimTimes(var_101_string, var_107_float, var_108_float);
	@lshPlayAnimation(var_107_float, var_108_float, var_102_bool);
}


void func_750(object var_30_object)
{
	float var_33_float;
	var_30_object->GetEyesHeight(var_33_float);
	cvector var_34_cvector = [0.0, 0.0, 0.0];
	var_35_float = GetByIndex(var_34_cvector, 1);
	var_33_float = var_35_float;
	SetByIndex(var_34_cvector, 1) = var_35_float;
	@LookAsync(var_30_object, "head", var_34_cvector);
}


void func_627(cvector var_85_cvector)
{
	cvector var_87_cvector;
	@GetPosition(var_87_cvector);
	var_87_cvector = var_85_cvector;
}


void func_886(object var_39_object, string var_40_string, float var_41_float)
{
	object var_49_object;
	@GetMainOutdoorScene(var_49_object);
	if(var_49_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_47_cvector;
	cvector var_48_cvector;
	bool var_50_bool;
	var_49_object->GetLocator(var_40_string, var_50_bool, var_47_cvector, var_48_cvector);
	if(!var_50_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_40_string) + " doesnt exist");
	var_49_object->GetMap(var_39_object);
	if(var_39_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_60_float = GetByIndex(var_47_cvector, 0);
	var_61_float = GetByIndex(var_47_cvector, 2);
	var_39_object->SetMapParams(var_60_float, var_61_float, var_41_float);
}
EMIT "Stack[-2] = 0";


void func_632(cvector var_70_cvector, object var_71_object)
{
	cvector var_74_cvector;
	@GetPosition(var_74_cvector);
	cvector var_75_cvector;
	var_71_object->GetPosition(var_75_cvector);
	var_70_cvector = var_75_cvector - var_74_cvector;
}


void func_761(void)
{
	bool var_16_bool;
	func_805(var_16_bool);
	if(var_16_bool != 0)
		@lshStopSpeech();
}


void func_639(float var_20_float, object var_21_object)
{
	cvector var_25_cvector;
	@GetPosition(var_25_cvector);
	cvector var_26_cvector;
	var_21_object->GetPosition(var_26_cvector);
	var_20_float = (var_26_cvector - var_25_cvector) | (var_26_cvector - var_25_cvector);
}


