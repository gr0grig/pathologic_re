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
			func_1277();
			if(var_14_bool == 19925) {
				object var_19_object; object var_20_object;
				var_19_object = var_1_object;
				var_20_object = var_0_object;
				func_1446();
			}
			if(var_14_bool == 19761) {
				object var_29_object; object var_30_object;
				var_29_object = var_1_object;
				var_30_object = var_0_object;
				func_1446();
			}
			if(var_14_bool == 19931) {
				object var_33_object; object var_34_object;
				var_33_object = var_1_object;
				var_34_object = var_0_object;
				func_1446();
			}
			if(var_14_bool == 20903) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_1446();
			}
			if(var_13_cvector == 19760) {
				bool var_41_bool;
				func_1459(var_1_object);
				if(var_41_bool != 0) {
					object var_49_object; object var_50_object;
					var_49_object = var_1_object;
					var_50_object = var_0_object;
					func_1453();
					func_157(var_14_bool, "Neutral");
					var_0_object->SetMessage(518668); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(518670, 19916, 19762); //@t
					return 0;
				}
				func_157(var_14_bool, "Neutral");
				var_0_object->SetMessage(519748); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519749, -1, 20903); //@t
				var_0_object->AddReply(519750, -1, 20904); //@t
				return 0;
			}
			if(var_13_cvector == 19916) {
				func_157(var_14_bool, "Neutral");
				var_0_object->SetMessage(518811); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518812, 19918, 19917); //@t
				var_0_object->AddReply(518818, 19926, 19923); //@t
				return 0;
			}
			if(var_13_cvector == 19926) {
				func_157(var_14_bool, "Neutral");
				var_0_object->SetMessage(518821); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518822, 19928, 19927); //@t
				return 0;
			}
			if(var_13_cvector == 19928) {
				func_157(var_14_bool, "Neutral");
				var_0_object->SetMessage(518823); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518824, 19930, 19929); //@t
				return 0;
			}
			if(var_13_cvector == 19930) {
				func_157(var_14_bool, "Neutral");
				var_0_object->SetMessage(518825); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518826, -1, 19931); //@t
				var_0_object->AddReply(518827, -1, 19932); //@t
				return 0;
			}
			if(var_13_cvector == 19918) {
				func_157(var_14_bool, "Neutral");
				var_0_object->SetMessage(518813); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518815, 19921, 19920); //@t
				var_0_object->AddReply(518669, -1, 19761); //@t
				return 0;
			}
			if(var_13_cvector == 19921) {
				func_157(var_14_bool, "Neutral");
				var_0_object->SetMessage(518816); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518819, -1, 19924); //@t
				var_0_object->AddReply(518820, -1, 19925); //@t
				return 0;
			}
			var_3_string = true;
			bool var_131_bool;
			func_1515(var_131_bool);
			if(var_131_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb4";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool)
	{
	
		for(;;) {
			func_450(var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, (float)300, (float)100);
			@Sleep(3);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		func_515(var_12_cvector, var_13_bool);
		int var_17_int; object var_18_object;
		var_13_bool = var_18_object;
		TaskCall(0);
		func_0(var_19_object, var_17_int, var_18_object);
		TaskReturn();
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		func_515(var_12_cvector, var_13_bool);
		TaskCall(3);
		func_615();
		TaskReturn();
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, string var_10_string, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		if(var_13_bool == "retreat") {
			func_515(var_12_cvector, var_13_bool);
			TaskCall(3);
			func_615();
			TaskReturn();
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		if(var_13_bool == 10) {
			bool var_16_bool;
			func_477(var_11_object, var_12_cvector, var_13_bool, var_16_bool);
			if(var_16_bool != 0) {
				if(!var_2_object) { //@nz
					func_1266(var_4_bool);
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
			func_636(var_21_float, var_27_cvector, 1.7453294);
			var_27_cvector = var_20_cvector;
			var_21_float = var_20_cvector | var_20_cvector;
			bool var_57_bool = false;
			if(var_21_float >= 2500.0) {
				bool var_60_bool;
				var_64_bool = var_21_float >= ((var_19_float * var_19_float) * 2.25);
				if(var_64_bool != 1) {
					bool var_65_bool;
					func_807(true, var_65_bool);
					if(var_65_bool != 1)
						var_60_bool = false;
				}
				if(var_60_bool != 0)
					var_57_bool = true;
			}
			if(var_57_bool == 0) goto Label_790;
			@Stop();
			cvector var_85_cvector;
			func_971(var_85_cvector);
			var_1_object = var_85_cvector + var_20_cvector;
		}
	Label_790:
	
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object)
	{
		func_791(var_13_object);
		object var_15_object;
		var_13_object = var_15_object;
		func_1578();
	}

}


task task_4
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object)
	{
		bool var_15_bool;
		@IsOverrideActive(var_15_bool);
		if(!var_15_bool) { //@nz
			object var_17_object;
			var_13_object = var_17_object;
			func_1494(var_17_object);
		}
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, int var_14_int, float var_15_float, float var_16_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, string var_14_string)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object)
	{
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, int var_14_int, float var_15_float, float var_16_float)
{
	object var_17_object;
	var_13_object = var_17_object;
	int var_18_int;
	var_14_int = var_18_int;
	float var_19_float;
	var_15_float = var_19_float;
	func_1081(var_17_object, var_18_int, var_19_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, int var_14_int, float var_15_float, float var_16_float, cvector var_17_cvector, cvector var_18_cvector)
{
	object var_19_object;
	var_13_object = var_19_object;
	int var_20_int;
	var_14_int = var_20_int;
	float var_21_float;
	var_15_float = var_21_float;
	cvector var_22_cvector;
	var_17_cvector = var_22_cvector;
	cvector var_23_cvector;
	var_18_cvector = var_23_cvector;
	func_1149(var_21_float, var_22_cvector, var_23_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, string var_14_string)
{
	float var_16_float;
	if(var_14_string == "health") {
		@GetProperty("health", var_16_float);
		if(var_16_float <= 0)
			@SignalDeath(var_13_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object)
{
	object var_14_object;
	var_13_object = var_14_object;
	func_1517(var_14_object);
}


void func_0(object var_0_object, int var_17_int, object var_18_object)
{
	var_0_object = var_18_object;
	bool var_28_bool; object var_29_object;
	var_18_object = var_29_object;
	func_1168(var_28_bool, var_29_object, 70.0);
	if(!var_28_bool) { //@nz
		var_17_int = -2;
		return 8;
	}
	object var_24_object;
	@CreateDialog(var_24_object);
	int var_75_int;
	func_1509(var_75_int);
	var_24_object->SetNPCName(var_75_int);
	int var_76_int;
	func_1507(var_76_int);
	var_24_object->SetNPCDescription(var_76_int);
	string var_77_string;
	func_1511(var_77_string);
	var_24_object->SetPhoto(var_77_string);
	string var_78_string;
	func_1513(var_78_string);
	var_24_object->SetPhoto2(var_78_string);
	int var_79_int;
	func_1471(var_79_int);
	var_24_object->SetPlayerName(var_79_int);
	bool var_25_bool;
	@IsOverrideActive(var_25_bool);
	if(var_25_bool != 0) {
		var_17_int = -2;
		return 8;
	}
	@DoDialog(var_24_object);
	object var_88_object; object var_89_object;
	var_18_object = var_88_object;
	var_24_object = var_89_object;
	TaskCall(1);
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object);
	TaskReturn();
	bool var_27_bool;
	var_24_object->IsDialogEnd(var_27_bool);
	
	for(;;) {
		var_144_bool = !var_27_bool; //@nz
		if(var_144_bool == 0) goto Label_63;
		@sync();
		var_24_object->IsDialogEnd(var_27_bool);
	}
	
Label_63:
	object var_145_object;
	var_18_object = var_145_object;
	func_1236();
	@StopDialog(var_24_object);
	var_24_object->GetReturnValue(-1);
	int var_26_int = var_17_int;
}
EMIT "Stack[-4] = 0";


void func_1410(bool var_21_bool, string var_22_string, string var_23_string)
{
	object var_25_object;
	@FindActor(var_25_object, var_22_string);
	if(var_25_object == null)
		var_21_bool = false;
	@Trigger(var_25_object, var_23_string);
	var_21_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_515(object var_2_object, string var_3_string)
{
	func_610();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_1284(string var_88_string)
{
	bool var_97_bool; int var_98_int; bool var_99_bool; int var_100_int; bool var_101_bool; float var_102_float; cvector var_103_cvector; cvector var_104_cvector;
	@IsExisting3DSound(var_97_bool, var_88_string);
	if(!var_97_bool) { //@nz
		var_98_int = 0;

		for(;;) {
			@IsExisting3DSound(var_99_bool, (var_88_string + (var_98_int + 1)));
			if(!var_99_bool) { //@nz
				break;
			Label_1304:
				@irand(var_100_int, var_98_int);
				var_88_string += (var_100_int + 1);
	}
			@Is3DSoundLoaded(var_101_bool, var_88_string);
			if(var_101_bool != 0) {
				@GetEyesHeight(var_102_float);
				@GetDirection(var_103_cvector);
				var_104_cvector = var_103_cvector * 50;
				var_115_float = GetByIndex(var_104_cvector, 1);
				SetByIndex(var_104_cvector, 1) = (var_115_float + var_102_float);
				@PlayGlobalSound(var_88_string, var_104_cvector);
			}
		}
		var_98_int += 1;
	}
	var_110_bool = !var_98_int; //@nz
	if(var_110_bool == 0) goto Label_1304;
}


void func_1163(bool var_15_bool)
{
	bool var_17_bool;
	@IsLoaded(var_17_bool);
	var_17_bool = var_15_bool;
}


void func_1037(object var_30_object)
{
	string var_44_string;
	if(var_30_object == null)
		return 14;
	bool var_38_bool;
	@IsDead(var_38_bool);
	if(var_38_bool != 0)
		return 14;
	int var_39_int;
	@GetSecondaryAnimationType(var_39_int);
	if(var_39_int < 0)
		return 14;
	cvector var_40_cvector;
	var_30_object->GetPosition(var_40_cvector);
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	cvector var_42_cvector;
	@GetDirection(var_42_cvector);
	cvector var_43_cvector = var_41_cvector - var_40_cvector;
	var_49_float = GetByIndex(var_43_cvector, 0);
	var_50_float = GetByIndex(var_42_cvector, 0);
	var_52_float = GetByIndex(var_43_cvector, 2);
	var_53_float = GetByIndex(var_42_cvector, 2);
	if(((var_49_float * var_50_float) + (var_52_float * var_53_float)) >= 0)
		var_44_string = "fhit";
	else
		var_44_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_44_string + "1"), (var_44_string + "2"), -10);
	
}


void func_1422(string var_44_string, int var_45_int)
{
	string var_47_string = "idle";
	if(var_45_int != 0)
		var_47_string += var_45_int;
	var_47_string = var_44_string;
}


void func_1168(bool var_28_bool, object var_29_object, float var_30_float)
{
	cvector var_41_cvector; bool var_48_bool;
	var_29_object->GetPosition(var_41_cvector);
	float var_40_float;
	var_29_object->GetEyesHeight(var_40_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	SetByIndex(var_41_cvector, 1) = (var_49_float + var_40_float);
	cvector var_42_cvector;
	@GetPosition(var_42_cvector);
	@GetEyesHeight(var_40_float);
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (var_50_float + var_40_float);
	cvector var_43_cvector = var_41_cvector - var_42_cvector;
	var_51_float = GetByIndex(var_43_cvector, 1);
	SetByIndex(var_43_cvector, 1) = (float)0;
	var_53_float = sqrt(var_43_cvector | var_43_cvector);
	var_43_cvector /= var_53_float;
	cvector var_44_cvector = -var_43_cvector;
	cvector var_55_cvector;
	func_1331(var_55_cvector, (var_44_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_45_cvector = ((var_43_cvector * var_30_float) + (var_55_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_47_bool;
	@IsOverrideActive(var_47_bool);
	if(var_47_bool != 0)
		var_28_bool = false;
	@StopWorld();
	@CameraTransit((var_42_cvector + var_45_cvector), var_44_cvector);
	var_68_float = GetByIndex(var_45_cvector, 0);
	var_69_float = GetByIndex(var_45_cvector, 2);
	@Rotate(var_68_float, var_69_float);
	bool var_70_bool;
	func_1515(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		@HasAnimationTrack(var_48_bool, "head");
		if(var_48_bool == 0) goto Label_1230;
		@LookAsyncCamera("head");
	}
Label_1230:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_28_bool = true;
	
}


void func_529(void)
{
	int var_31_int; int var_32_int; bool var_33_bool; float var_34_float; bool var_35_bool;
	@WaitForAnimEnd();
	bool var_36_bool;
	func_1163(var_36_bool);
	if(!var_36_bool) //@nz
		return 14;
	int var_38_int;
	func_1429(var_38_int);
	int var_29_int;
	var_38_int = var_29_int;
	int var_30_int = 0;
	
	for(;;) {
		bool var_51_bool = false;
		if(var_30_int < 5) {
			bool var_54_bool;
			func_1163(var_54_bool);
			if(var_54_bool != 0)
				var_51_bool = true;
		}
		if(var_51_bool != 0) {
			@irand(var_31_int, 3);
			if(var_31_int == 0) {
				if(var_29_int == 0) goto Label_576;
				@irand(var_32_int, var_29_int);
				string var_60_string; int var_61_int;
				var_32_int = var_61_int;
				func_1422(var_60_string, var_61_int);
				@PlayAnimation("all", var_60_string);
				@WaitForAnimEnd(var_33_bool);
				if(!var_33_bool) { //@nz
				} else {
			} else {
			if(var_31_int == 1) {
				@rand(var_34_float, 4);
				@Sleep((var_34_float + 1), var_35_bool);
				if(!var_35_bool) { //@nz
					goto Label_605;
				}
			} else if(var_30_int != 0) {
				goto Label_605;
			}
			}
					bool var_63_bool;
					func_608(var_63_bool);
					var_64_bool = !var_63_bool; //@nz
					if(var_64_bool == 0) goto Label_600;
			}
		}
	Label_605:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_600:
		@ResetAAS();
		var_30_int += 1;
	}
	
}


void func_1429(int var_38_int)
{
	int var_41_int; bool var_42_bool;
	var_41_int = 0;
	
	for(;;) {
		string var_44_string; int var_45_int;
		var_41_int = var_45_int;
		func_1422(var_44_string, var_45_int);
		@HasAnimation(var_42_bool, "all", var_44_string);
		if(!var_42_bool) //@nz
			break;
		var_41_int += 1;
	}
	var_41_int = var_38_int;
}


void func_1149(object var_19_object, cvector var_22_cvector, cvector var_23_cvector)
{
	object var_26_object;
	@GetScene(var_26_object);
	object var_27_object;
	@AddActorByType(var_27_object, "scripted", var_26_object, var_22_cvector, var_23_cvector, "blood_dir.xml");
	object var_30_object;
	var_19_object = var_30_object;
	func_1037(var_30_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_791(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


void func_666(object var_0_object, object var_1_object, object var_2_object, object var_27_object)
{
	float var_38_float; cvector var_40_cvector; float var_41_float;
	cvector var_42_cvector;
	func_636(var_41_float, var_42_cvector, 1.7453294);
	cvector var_37_cvector;
	var_42_cvector = var_37_cvector;
	if((var_37_cvector | var_37_cvector) < 2500.0) {
		cvector var_74_cvector;
		func_636(var_41_float, var_74_cvector, 2.6179938);
		var_74_cvector = var_37_cvector;
		var_38_float = var_37_cvector | var_37_cvector;
		if(var_38_float < 2500.0) {
			var_79_float = sqrt(var_38_float);
			@Trace("Can't retreat, distance: " + var_79_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_82_float = GetByIndex(var_37_cvector, 0);
	var_83_float = GetByIndex(var_37_cvector, 2);
	@Rotate(var_82_float, var_83_float);
	cvector var_84_cvector;
	func_971(var_84_cvector);
	@SetTimer(120, 0.5);
	
Label_708:
	bool var_39_bool;
	@MovePoint((var_84_cvector + var_37_cvector), 1, var_39_bool);
	if(var_39_bool != 0) {
		if(var_27_object == null) {
			goto Label_738;
		EMIT "GOTO 0x2e0";

		Label_738:
			for(;;) {
				return 10;
		}
			cvector var_92_cvector;
			func_636(var_41_float, var_92_cvector, 2.6179938);
			var_92_cvector = var_40_cvector;
			if((var_40_cvector | var_40_cvector) >= 2500.0) {
				cvector var_96_cvector;
				func_971(var_96_cvector);
				var_1_object = var_96_cvector + var_40_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_708; //@nz

	}
}


// @pe
void func_157(object var_2_object, string var_107_string)
{
	bool var_108_bool;
	func_1515(var_108_bool);
	if(!var_108_bool) //@nz
		return 0;
	if(var_107_string == var_2_object)
		return 0;
	string var_111_string; bool var_112_bool;
	var_107_string = var_111_string;
	if(var_107_string == "")
		var_112_bool = false;
	else
		var_112_bool = true;
	func_1260(var_111_string, var_112_bool);
	var_2_object = var_107_string;
	
}


// @pe
void func_1446(void)
{
	bool var_21_bool;
	func_1410(var_21_bool, "quest_b5_01", "vera_retreat");
}


void func_807(object var_0_object, bool var_65_bool)
{
	cvector var_68_cvector;
	@GetDirection(var_68_cvector);
	cvector var_70_cvector;
	func_976(var_70_cvector, var_0_object);
	cvector var_69_cvector;
	var_70_cvector = var_69_cvector;
	float var_76_float; cvector var_77_cvector; cvector var_78_cvector;
	var_68_cvector = var_77_cvector;
	var_69_cvector = var_78_cvector;
	func_1352(var_76_float, var_77_cvector, var_78_cvector);
	var_65_bool = var_76_float >= -0.34202012;
}


// @pe
void func_939(string var_87_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_88_string;
	var_87_string = var_88_string;
	func_1284(var_88_string);
	@PlayAnimation("all", var_87_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_87_string);
	@RemoveEnvelope();
}


// @pe
void func_1453(void)
{
	@SetVariable("oob5Vera2_1", 1);
}


void func_1325(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1459(bool var_95_bool)
{
	int var_97_int;
	func_1360(var_97_int, "oob5Vera2_1");
	if(var_97_int == 0) {
		var_95_bool = true;
		return 0;
	}
	var_95_bool = false;
}


void func_1331(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_54_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_54_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_54_float;
}


// @pe
void func_823(object var_64_object)
{
	object var_65_object;
	var_64_object = var_65_object;
	func_848(var_65_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1081(object var_17_object, int var_18_int, float var_19_float)
{
	cvector var_29_cvector; object var_30_object; int var_31_int; bool var_32_bool; cvector var_33_cvector; cvector var_34_cvector;
	bool var_38_bool = false;
	bool var_39_bool = false;
	if(var_17_object != 0) {
		if(var_18_int != 4)
			var_39_bool = true;
	}
	if(var_39_bool != 0) {
		if(var_18_int != 5)
			var_38_bool = true;
	}
	if(var_38_bool != 0) {
		cvector var_45_cvector; cvector var_46_cvector;
		cvector var_47_cvector; object var_48_object;
		var_17_object = var_48_object;
		func_976(var_47_cvector, var_48_object);
		var_47_cvector = var_46_cvector;
		func_1331(var_45_cvector, var_46_cvector);
		var_45_cvector = var_29_cvector;
		@CreateVectorVector(var_30_object);
		var_31_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_31_int), var_32_bool, var_33_cvector, var_34_cvector);
			if(!var_32_bool) { //@nz
				break;
			Label_1143:
				var_30_object = null;
	}
			object var_107_object;
			var_17_object = var_107_object;
			func_1037(var_107_object);
		}
		if((var_34_cvector | var_29_cvector) >= 0.70710677)
			var_30_object->add(var_33_cvector);
		var_31_int += 1;
	}
	int var_35_int;
	var_30_object->size(var_35_int);
	if(var_35_int == 0) goto Label_1143;
	int var_36_int;
	@irand(var_36_int, var_35_int);
	cvector var_37_cvector;
	var_30_object->get(var_37_cvector, var_36_int);
	object var_62_object; int var_63_int; float var_64_float; cvector var_65_cvector; cvector var_66_cvector;
	var_17_object = var_62_object;
	var_18_int = var_63_int;
	var_19_float = var_64_float;
	var_37_cvector = var_65_cvector;
	var_66_cvector = -var_29_cvector;
	func_1149(var_64_float, var_65_cvector, var_66_cvector);
}


// @pe
void func_1341(float var_53_float, float var_54_float, float var_55_float, float var_56_float)
{
	if(var_54_float < var_55_float) {
		var_55_float = var_53_float;
		return 0;
	}
	if(var_54_float > var_56_float) {
		var_56_float = var_53_float;
		return 0;
	}
	var_54_float = var_53_float;
}


void func_1471(int var_79_int)
{
	int var_81_int;
	@GetVariable("branch", var_81_int);
	if(var_81_int == 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x5ce";
	}
	if(var_81_int == 1) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
}


// @pe
void func_450(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_13_float, float var_14_float)
{
	bool var_15_bool;
	func_1163(var_15_bool);
	if(!var_15_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_13_float;
	var_1_object = var_14_float;
	@SetTimer(10, 1.0);
	func_529();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_1352(float var_76_float, cvector var_77_cvector, cvector var_78_cvector)
{
	var_83_float = sqrt((var_77_cvector | var_77_cvector) * (var_78_cvector | var_78_cvector));
	var_76_float = (var_77_cvector | var_78_cvector) / var_83_float;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_88_object, object var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_95_bool;
		func_1459(var_1_object);
		if(var_95_bool != 0) {
			object var_103_object; object var_104_object;
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_1453();
			func_157(var_89_object, "Neutral");
			var_0_object->SetMessage(518668); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(518670, 19916, 19762); //@t
		} else {
					func_157(var_89_object, "Neutral");
					var_0_object->SetMessage(519748); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(519749, -1, 20903); //@t
					var_0_object->AddReply(519750, -1, 20904); //@t
		}
	}
	for(;;) {
		bool var_123_bool;
		func_1515(var_123_bool);
		if(var_123_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1253(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_156;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_156:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_971(cvector var_85_cvector)
{
	cvector var_87_cvector;
	@GetPosition(var_87_cvector);
	var_87_cvector = var_85_cvector;
}


void func_976(cvector var_47_cvector, object var_48_object)
{
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	cvector var_52_cvector;
	var_48_object->GetPosition(var_52_cvector);
	var_47_cvector = var_52_cvector - var_51_cvector;
}


void func_848(object var_65_object)
{
	cvector var_76_cvector; cvector var_77_cvector; cvector var_78_cvector; cvector var_79_cvector; string var_80_string; object var_81_object; bool var_82_bool; bool var_83_bool; float var_84_float; cvector var_85_cvector;
	if(var_65_object == null) {
		func_939("fdie");
	} else {
		var_65_object->GetPosition(var_76_cvector);
		@GetPosition(var_77_cvector);
		@GetDirection(var_78_cvector);
		var_79_cvector = var_77_cvector - var_76_cvector;
		var_119_float = GetByIndex(var_79_cvector, 0);
		var_120_float = GetByIndex(var_78_cvector, 0);
		var_122_float = GetByIndex(var_79_cvector, 2);
		var_123_float = GetByIndex(var_78_cvector, 2);
		if(((var_119_float * var_120_float) + (var_122_float * var_123_float)) >= 0)
			var_80_string = "fdie";
		else
			var_80_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_65_object = var_81_object;
		var_130_bool = IsFuncExist(var_65_object, "GetScriptProperty", 2);
		if(var_130_bool != 0) {
			var_65_object->HasScriptProperty(var_82_bool, "Owner");
			if(var_82_bool != 0) {
				var_65_object->GetScriptProperty(var_81_object, "Owner");
				if(var_81_object == null)
					var_65_object = var_81_object;
			}
		}
		var_137_bool = IsFuncExist(var_81_object, "@GetEyesHeight", 1);
		if(var_137_bool != 0) {
			var_81_object->GetEyesHeight(var_84_float);
			var_85_cvector = [0.0, 0.0, 0.0];
			var_138_float = GetByIndex(var_85_cvector, 1);
			var_84_float = var_138_float;
			SetByIndex(var_85_cvector, 1) = var_138_float;
			@LookAsync(var_65_object, "head", var_85_cvector);
			var_83_bool = true;
		} else {
			var_83_bool = false;

		}
		string var_140_string;
		var_80_string = var_140_string;
		func_1284(var_140_string);
		@PlayAnimation("all", var_80_string);
		@WaitForAnimEnd();
		if(var_83_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_80_string);
		@RemoveEnvelope();
		var_81_object = null;
	}
	
}


void func_1360(int var_97_int, string var_98_string)
{
	int var_100_int;
	@GetVariable(var_98_string, var_100_int);
	var_100_int = var_97_int;
}


void func_1488(int var_18_int)
{
	int var_20_int;
	@GetVariable("branch", var_20_int);
	var_20_int = var_18_int;
}


void func_1236(void)
{
	bool var_147_bool;
	@CameraSwitchToNormal();
	bool var_148_bool;
	func_1515(var_148_bool);
	if(var_148_bool != 0) {
	} else {
		@HasAnimationTrack(var_147_bool, "head");
		if(var_147_bool == 0) goto Label_1252;
		@UnlookAsync("head");
	}
Label_1252:
	
}


// @pe
void func_1365(bool var_24_bool, object var_25_object, float var_26_float)
{
	if(!var_25_object) { //@nz
		var_24_bool = false;
		return 0;
	}
	if(var_26_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_26_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_31_float;
		var_26_float = var_31_float;
		func_1400(var_31_float);
		bool var_35_bool; object var_36_object; float var_38_float;
		var_25_object = var_36_object;
		var_26_float = var_38_float;
		func_1015(var_35_bool, var_36_object, "reputation", var_38_float, (float)0, (float)1);
		var_24_bool = true;
		return 0;

	}
	
	var_24_bool = false;
}


// @pe
void func_1494(object var_17_object)
{
	int var_18_int;
	func_1488(var_18_int);
	if(var_18_int == 1)
		@WorkWithCorpse(var_17_object);
	else
		@Barter(var_17_object);
	
}


void func_983(float var_20_float, object var_21_object)
{
	cvector var_25_cvector;
	@GetPosition(var_25_cvector);
	cvector var_26_cvector;
	var_21_object->GetPosition(var_26_cvector);
	var_20_float = (var_26_cvector - var_25_cvector) | (var_26_cvector - var_25_cvector);
}


void func_477(object var_0_object, object var_1_object, bool var_4_bool, bool var_16_bool)
{
	if(var_4_bool == null)
		var_16_bool = false;
	float var_20_float;
	func_983(var_20_float, var_4_bool);
	float var_18_float = sqrt(var_20_float);
	if(var_2_object != 0)
		var_18_float -= var_1_object;
	var_16_bool = var_18_float < var_0_object;
}


void func_991(object var_28_object)
{
	object var_30_object;
	@FindActor(var_30_object, "player");
	var_30_object = var_28_object;
}
EMIT "Stack[-1] = 0";


void func_608(bool var_63_bool)
{
	var_63_bool = true;
}


void func_610(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1507(int var_76_int)
{
	var_76_int = 515593;
}


void func_1509(int var_75_int)
{
	var_75_int = 512582;
}


void func_1253(string var_125_string)
{
	float var_128_float; float var_129_float;
	@lshGetAnimTimes(var_125_string, var_128_float, var_129_float);
	@lshPlayAnimation(var_128_float, var_129_float, false);
}


void func_1511(string var_77_string)
{
	var_77_string = "ui/NPC_Citizen1.png";
}


void func_615(void)
{
	object var_22_object; object var_23_object;
	@GetScene(var_23_object);
	object var_24_object;
	func_1325(var_24_object);
	var_23_object->RemoveStationaryActor(var_24_object);
	
	for(;;) {
		object var_27_object;
		object var_28_object;
		func_991(var_28_object);
		var_28_object = var_27_object;
		func_666(var_21_bool, var_22_object, var_23_object, var_27_object);
		@Sleep(1);
	}
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


void func_1513(string var_78_string)
{
	var_78_string = "ui/NPC_Citizen1_b.png";
}


void func_998(bool var_20_bool, object var_21_object)
{
	bool var_23_bool;
	@IsPlayerActor(var_21_object, var_23_bool);
	var_23_bool = var_20_bool;
}


void func_1515(bool var_70_bool)
{
	var_70_bool = false;
}


void func_1260(string var_111_string, bool var_112_bool)
{
	float var_117_float; float var_118_float;
	@lshGetAnimTimes(var_111_string, var_117_float, var_118_float);
	@lshPlayAnimation(var_117_float, var_118_float, var_112_bool);
}


void func_1003(bool var_43_bool, object var_44_object, string var_45_string)
{
	var_50_bool = IsFuncExist(var_44_object, "HasProperty", 2);
	if(!var_50_bool) { //@nz
		var_43_bool = false;
		return 2;
	}
	bool var_47_bool;
	var_44_object->HasProperty(var_45_string, var_47_bool);
	var_47_bool = var_43_bool;
}


void func_1517(object var_14_object)
{
	object var_16_object;
	@GetScene(var_16_object);
	object var_17_object;
	func_1325(var_17_object);
	var_16_object->RemoveStationaryActor(var_17_object);
	bool var_20_bool; object var_21_object;
	var_14_object = var_21_object;
	func_998(var_20_bool, var_21_object);
	if(var_20_bool != 0) {
		bool var_24_bool; object var_25_object;
		var_14_object = var_25_object;
		func_1365(var_24_bool, var_25_object, -0.1);
	}
	@SetVariable("b5q01VeraDead", true);
	object var_64_object;
	var_14_object = var_64_object;
	TaskCall(4);
	func_823(var_64_object);
	TaskReturn();
}
EMIT "Stack[-1] = 0";


void func_1266(object var_30_object)
{
	float var_33_float;
	var_30_object->GetEyesHeight(var_33_float);
	cvector var_34_cvector = [0.0, 0.0, 0.0];
	var_35_float = GetByIndex(var_34_cvector, 1);
	var_33_float = var_35_float;
	SetByIndex(var_34_cvector, 1) = var_35_float;
	@LookAsync(var_30_object, "head", var_34_cvector);
}


void func_1015(bool var_35_bool, object var_36_object, string var_37_string, float var_38_float, float var_39_float, float var_40_float)
{
	object var_44_object;
	var_36_object = var_44_object;
	string var_45_string;
	var_37_string = var_45_string;
	bool var_43_bool;
	func_1003(var_43_bool, var_44_object, var_45_string);
	if(!var_43_bool) //@nz
		var_35_bool = false;
	float var_42_float;
	var_36_object->GetProperty(var_37_string, var_42_float);
	float var_53_float; float var_55_float; float var_56_float;
	var_39_float = var_55_float;
	var_40_float = var_56_float;
	func_1341(var_53_float, (var_42_float + var_38_float), var_55_float, var_56_float);
	var_36_object->SetProperty(var_37_string, var_53_float);
	var_35_bool = true;
}


void func_1400(float var_31_float)
{
	object var_33_object;
	@CreateFloatVector(var_33_object);
	var_33_object->add(var_31_float);
	@SendWorldWndMessage(16, var_33_object);
}
EMIT "Stack[-1] = 0";


void func_636(object var_0_object, cvector var_27_cvector, float var_28_float)
{
	cvector var_35_cvector;
	@GetPosition(var_35_cvector);
	cvector var_36_cvector;
	var_0_object->GetPosition(var_36_cvector); //@t
	cvector var_37_cvector;
	@GetDirection(var_37_cvector);
	cvector var_41_cvector;
	cvector var_43_cvector;
	func_1331(var_43_cvector, (var_35_cvector - var_36_cvector));
	func_1331(var_41_cvector, (var_43_cvector + (var_37_cvector * 0.75)));
	cvector var_38_cvector;
	var_41_cvector = var_38_cvector;
	cvector var_39_cvector;
	float var_40_float;
	@FindLongestDir(var_39_cvector, var_40_float, var_38_cvector, var_28_float, 32, 7000.0);
	if((var_40_float - 100) < 0)
		var_40_float = 0;
	var_27_cvector = var_39_cvector * var_40_float;
}


void func_1277(void)
{
	bool var_16_bool;
	func_1515(var_16_bool);
	if(var_16_bool != 0)
		@lshStopSpeech();
}


