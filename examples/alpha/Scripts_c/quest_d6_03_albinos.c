// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		if(1 != 0) {
			func_1018();
			if(var_9_bool == 13311) {
				object var_14_object; object var_15_object;
				var_14_object = var_1_object;
				var_15_object = var_0_object;
				func_1102();
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_1108();
			}
			if(var_8_cvector == 13292) {
				bool var_24_bool;
				func_1114(var_1_object);
				if(var_24_bool != 0) {
					func_141(var_9_bool, "Neutral");
					var_0_object->SetMessage(12071); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(12072, 13294, 13293); //@t
					var_0_object->AddReply(12083, 13294, 13306); //@t
					return 0;
				}
				func_141(var_9_bool, "Neutral");
				var_0_object->SetMessage(13029); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(13030, -1, 14237); //@t
				return 0;
			}
			if(var_8_cvector == 13294) {
				func_141(var_9_bool, "Neutral");
				var_0_object->SetMessage(12073); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12074, 13298, 13295); //@t
				var_0_object->AddReply(12075, 13298, 13296); //@t
				var_0_object->AddReply(12076, 13298, 13297); //@t
				return 0;
			}
			if(var_8_cvector == 13298) {
				func_141(var_9_bool, "Neutral");
				var_0_object->SetMessage(12077); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12078, 13302, 13301); //@t
				var_0_object->AddReply(12082, 13302, 13305); //@t
				return 0;
			}
			if(var_8_cvector == 13302) {
				func_141(var_9_bool, "Neutral");
				var_0_object->SetMessage(12079); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12080, 13304, 13303); //@t
				var_0_object->AddReply(12084, 13304, 13309); //@t
				return 0;
			}
			if(var_8_cvector == 13304) {
				func_141(var_9_bool, "Neutral");
				var_0_object->SetMessage(12081); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12085, -1, 13311); //@t
				return 0;
			}
			var_3_string = true;
			bool var_99_bool;
			func_1147(var_99_bool);
			if(var_99_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x9e";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool)
	{
		@SetTimer(100, 1.0);
	
		for(;;) {
			@Sleep(3);
			func_367();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		bool var_10_bool;
		@IsPlayerActor(var_8_bool, var_10_bool);
		if(var_10_bool != 0) {
			object var_12_object;
			var_8_bool = var_12_object;
			TaskCall(3);
			func_492(var_13_object, var_14_cvector, var_15_bool, var_12_object);
			TaskReturn();
		}
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		func_436();
		int var_9_int; object var_10_object;
		var_8_bool = var_10_object;
		TaskCall(0);
		func_0(var_11_object, var_9_int, var_10_object);
		TaskReturn();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		if(var_8_bool == 100)
			func_1165();
	}

}


task task_3
{
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool)
	{
		bool var_8_bool;
		func_1066(var_8_bool, "quest_d6_03", "albinos_retreated");
		@Hold();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, int var_8_int)
	{
		if(var_8_int == 100) {
			func_1165();
		} else {
			int var_85_int;
			func_556(var_6_cvector, var_7_bool, var_85_int, var_85_int);
		}
	
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object)
	{
		func_608(var_8_object);
		object var_10_object;
		var_8_object = var_10_object;
		func_1212();
	}

}


task task_4
{
	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, float var_10_float, float var_11_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, string var_9_string)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object)
	{
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, float var_10_float, float var_11_float)
{
	object var_12_object;
	var_8_object = var_12_object;
	int var_13_int;
	var_9_int = var_13_int;
	float var_14_float;
	var_10_float = var_14_float;
	func_868(var_13_int, var_14_float);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, string var_9_string)
{
	float var_11_float;
	if(var_9_string == "health") {
		@GetProperty("health", var_11_float);
		if(var_11_float <= 0)
			@SignalDeath(var_8_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object)
{
	object var_9_object;
	var_8_object = var_9_object;
	func_1149(var_9_object);
}


void func_0(object var_0_object, int var_9_int, object var_10_object)
{
	var_0_object = var_10_object;
	bool var_20_bool; object var_21_object;
	var_10_object = var_21_object;
	func_940(var_20_bool, var_21_object);
	if(!var_20_bool) { //@nz
		var_9_int = -2;
		return 8;
	}
	object var_16_object;
	@CreateDialog(var_16_object);
	int var_61_int;
	func_1143(var_61_int);
	var_16_object->SetNPCName(var_61_int);
	string var_62_string;
	func_1145(var_62_string);
	var_16_object->SetPhoto(var_62_string);
	int var_63_int;
	func_1126(var_63_int);
	var_16_object->SetPlayerName(var_63_int);
	bool var_17_bool;
	@IsOverrideActive(var_17_bool);
	if(var_17_bool != 0) {
		var_9_int = -2;
		return 8;
	}
	@DoDialog(var_16_object);
	object var_72_object; object var_73_object;
	var_10_object = var_72_object;
	var_16_object = var_73_object;
	TaskCall(1);
	func_63(var_74_object, var_75_object, var_76_string, var_77_bool, var_72_object, var_73_object);
	TaskReturn();
	bool var_19_bool;
	var_16_object->IsDialogEnd(var_19_bool);
	
	for(;;) {
		var_122_bool = !var_19_bool; //@nz
		if(var_122_bool == 0) goto Label_52;
		@sync();
		var_16_object->IsDialogEnd(var_19_bool);
	}
	
Label_52:
	object var_123_object;
	var_10_object = var_123_object;
	func_996();
	@StopDialog(var_16_object);
	var_16_object->GetReturnValue(-1);
	int var_18_int = var_9_int;
}
EMIT "Stack[-4] = 0";


void func_1025(cvector var_115_cvector, cvector var_116_cvector)
{
	float var_118_float = sqrt(var_116_cvector | var_116_cvector);
	if(var_118_float < 0.000001)
		var_115_cvector = [0.0, 0.0, 0.0];
	var_115_cvector = var_116_cvector / var_118_float;
}


// @pe
void func_640(object var_17_object)
{
	object var_18_object;
	var_17_object = var_18_object;
	func_649(var_18_object);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_772(cvector var_157_cvector)
{
	cvector var_159_cvector;
	@GetPosition(var_159_cvector);
	var_159_cvector = var_157_cvector;
}


void func_777(cvector var_142_cvector, object var_143_object)
{
	cvector var_146_cvector;
	@GetPosition(var_146_cvector);
	cvector var_147_cvector;
	var_143_object->GetPosition(var_147_cvector);
	var_142_cvector = var_147_cvector - var_146_cvector;
}


void func_649(object var_18_object)
{
	cvector var_29_cvector; cvector var_30_cvector; cvector var_31_cvector; cvector var_32_cvector; string var_33_string; object var_34_object; bool var_35_bool; bool var_36_bool; float var_37_float; cvector var_38_cvector;
	if(var_18_object == null) {
		func_736("fdie");
	} else {
		var_18_object->GetPosition(var_29_cvector);
		@GetPosition(var_30_cvector);
		@GetDirection(var_31_cvector);
		var_32_cvector = var_30_cvector - var_29_cvector;
		var_43_float = GetByIndex(var_32_cvector, 0);
		var_44_float = GetByIndex(var_31_cvector, 0);
		var_46_float = GetByIndex(var_32_cvector, 2);
		var_47_float = GetByIndex(var_31_cvector, 2);
		if(((var_43_float * var_44_float) + (var_46_float * var_47_float)) >= 0)
			var_33_string = "fdie";
		else
			var_33_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_18_object = var_34_object;
		var_54_bool = IsFuncExist(var_18_object, "GetScriptProperty", 2);
		if(var_54_bool != 0) {
			var_18_object->HasScriptProperty(var_35_bool, "Owner");
			if(var_35_bool != 0) {
				var_18_object->GetScriptProperty(var_34_object, "Owner");
				if(var_34_object == null)
					var_18_object = var_34_object;
			}
		}
		var_61_bool = IsFuncExist(var_34_object, "@GetEyesHeight", 1);
		if(var_61_bool != 0) {
			var_34_object->GetEyesHeight(var_37_float);
			var_38_cvector = [0.0, 0.0, 0.0];
			var_62_float = GetByIndex(var_38_cvector, 1);
			var_37_float = var_62_float;
			SetByIndex(var_38_cvector, 1) = var_62_float;
			@LookAsync(var_18_object, "head", var_38_cvector);
			var_36_bool = true;
		} else {
			var_36_bool = false;

		}
		@PlayAnimation("all", var_33_string);
		@WaitForAnimEnd();
		if(var_36_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_33_string);
		@RemoveEnvelope();
		var_34_object = null;
	}
	
}


// @pe
void func_1035(float var_66_float, float var_67_float, float var_68_float)
{
	if(var_67_float < var_68_float)
		var_67_float = var_66_float;
	else
		var_68_float = var_66_float;
	
}


// @pe
void func_141(object var_2_object, string var_87_string)
{
	bool var_88_bool;
	func_1147(var_88_bool);
	if(!var_88_bool) //@nz
		return 0;
	if(var_87_string == var_2_object)
		return 0;
	string var_91_string;
	func_1000(var_91_string);
	var_2_object = var_91_string;
}


void func_1165(void)
{
	object var_13_object; float var_14_float;
	@FindActor(var_13_object, "player");
	if(var_13_object != 0) {
		float var_17_float; object var_18_object;
		var_13_object = var_18_object;
		func_784(var_17_float, var_18_object);
		if(var_17_float <= 640000.0) {
			float var_27_float; object var_28_object;
			func_804(var_27_float, var_28_object, 0.05, 0);
			var_27_float = var_14_float;
			@ReportHit(var_28_object, 6, var_14_float, 0.05);
		}
	}
}
EMIT "Stack[-2] = 0";


void func_784(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


// @pe
void func_1042(float var_76_float, float var_77_float, float var_78_float, float var_79_float)
{
	if(var_77_float < var_78_float) {
		var_78_float = var_76_float;
		return 0;
	}
	if(var_77_float > var_79_float) {
		var_79_float = var_76_float;
		return 0;
	}
	var_77_float = var_76_float;
}


void func_792(bool var_43_bool, object var_44_object, string var_45_string)
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


// @pe
void func_1053(float var_148_float, cvector var_149_cvector, cvector var_150_cvector)
{
	var_155_float = sqrt((var_149_cvector | var_149_cvector) * (var_150_cvector | var_150_cvector));
	var_148_float = (var_149_cvector | var_150_cvector) / var_155_float;
}


void func_804(float var_27_float, object var_28_object, float var_29_float, int var_30_int)
{
	int var_37_int; int var_39_int;
	object var_44_object;
	var_28_object = var_44_object;
	bool var_43_bool;
	func_792(var_43_bool, var_44_object, "health");
	if(!var_43_bool) //@nz
		var_27_float = 0.0;
	bool var_53_bool; object var_54_object;
	func_792(var_53_bool, var_54_object, "armor");
	if(!var_53_bool) //@nz
		var_37_int = 0;
	else
		var_54_object->GetProperty("armor", var_37_int);
	string var_58_string; int var_59_int;
	var_30_int = var_59_int;
	func_764(var_58_string, var_59_int);
	string var_38_string = "armor_" + var_58_string;
	bool var_62_bool; object var_63_object; string var_64_string;
	var_28_object = var_63_object;
	func_792(var_62_bool, var_63_object, var_64_string);
	if(!var_62_bool) //@nz
		var_39_int = 0;
	else
		var_28_object->GetProperty(var_64_string, var_39_int);

	float var_66_float;
	func_1035(var_66_float, ((var_37_int + var_39_int) / 100.0), (float)1);
	float var_40_float;
	var_66_float = var_40_float;
	float var_41_float;
	var_28_object->GetProperty("health", var_41_float);
	float var_76_float;
	func_1042(var_76_float, (var_41_float - (var_29_float * (1 - var_40_float))), (float)0, (float)1);
	var_28_object->SetProperty("health", var_76_float);
	float var_42_float = var_27_float;
	
}


void func_1061(int var_81_int, string var_82_string)
{
	int var_84_int;
	@GetVariable(var_82_string, var_84_int);
	var_84_int = var_81_int;
}


void func_935(bool var_25_bool)
{
	bool var_27_bool;
	@IsLoaded(var_27_bool);
	var_27_bool = var_25_bool;
}


void func_1066(bool var_11_bool, string var_12_string, string var_13_string)
{
	object var_15_object;
	@FindActor(var_15_object, var_12_string);
	if(var_15_object == null)
		var_11_bool = false;
	@Trigger(var_15_object, var_13_string);
	var_11_bool = true;
}
EMIT "Stack[-1] = 0";


void func_940(bool var_20_bool, object var_21_object)
{
	cvector var_31_cvector;
	var_21_object->GetPosition(var_31_cvector);
	float var_30_float;
	var_21_object->GetEyesHeight(var_30_float);
	var_38_float = GetByIndex(var_31_cvector, 1);
	SetByIndex(var_31_cvector, 1) = (var_38_float + var_30_float);
	cvector var_32_cvector;
	@GetPosition(var_32_cvector);
	@GetEyesHeight(var_30_float);
	var_39_float = GetByIndex(var_32_cvector, 1);
	SetByIndex(var_32_cvector, 1) = (var_39_float + var_30_float);
	cvector var_33_cvector = var_31_cvector - var_32_cvector;
	var_40_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (float)0;
	var_42_float = sqrt(var_33_cvector | var_33_cvector);
	var_33_cvector /= var_42_float;
	cvector var_34_cvector = -var_33_cvector;
	cvector var_45_cvector;
	func_1025(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_35_cvector = ((var_33_cvector * 70) + (var_45_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_37_bool;
	@IsOverrideActive(var_37_bool);
	if(var_37_bool != 0)
		var_20_bool = false;
	@StopWorld();
	@CameraTransit((var_32_cvector + var_35_cvector), var_34_cvector);
	var_58_float = GetByIndex(var_35_cvector, 0);
	var_59_float = GetByIndex(var_35_cvector, 2);
	@Rotate(var_58_float, var_59_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_20_bool = true;
}


void func_556(object var_0_object, object var_1_object, object var_2_object, int var_85_int)
{
	cvector var_90_cvector; float var_91_float; cvector var_92_cvector; float var_93_float;
	if(var_85_int != 120) {
	}
	if(var_0_object == null) {
		@Stop();
		@KillTimer(1);
		var_2_object = true;
	} else {
		@GetDirection(var_90_cvector);
		@FindDirLength(var_91_float, var_90_cvector, 7000.0);
		cvector var_99_cvector;
		func_462(var_93_float, var_99_cvector, 1.7453294);
		var_99_cvector = var_92_cvector;
		var_93_float = var_92_cvector | var_92_cvector;
		bool var_129_bool = false;
		if(var_93_float >= 10000.0) {
			bool var_132_bool;
			var_136_bool = var_93_float >= ((var_91_float * var_91_float) * 2.25);
			if(var_136_bool != 1) {
				bool var_137_bool;
				func_624(true, var_137_bool);
				if(var_137_bool != 1)
					var_132_bool = false;
			}
			if(var_132_bool != 0)
				var_129_bool = true;
		}
		if(var_129_bool == 0) goto Label_607;
		@Stop();
		cvector var_157_cvector;
		func_772(var_157_cvector);
		var_1_object = var_157_cvector + var_92_cvector;
	}
Label_607:
	
}


void func_436(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1078(string var_35_string, int var_36_int)
{
	string var_38_string = "idle";
	if(var_36_int != 0)
		var_38_string += var_36_int;
	var_38_string = var_35_string;
}


void func_1085(int var_29_int)
{
	int var_32_int; bool var_33_bool;
	var_32_int = 0;
	
	for(;;) {
		string var_35_string; int var_36_int;
		var_32_int = var_36_int;
		func_1078(var_35_string, var_36_int);
		@HasAnimation(var_33_bool, "all", var_35_string);
		if(!var_33_bool) //@nz
			break;
		var_32_int += 1;
	}
	var_32_int = var_29_int;
}


// @pe
void func_63(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_72_object, object var_73_object)
{
	var_0_object = var_73_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_79_bool;
		func_1114(var_72_object);
		if(var_79_bool != 0) {
			func_141(var_73_object, "Neutral");
			var_0_object->SetMessage(12071); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(12072, 13294, 13293); //@t
			var_0_object->AddReply(12083, 13294, 13306); //@t
		} else {
					func_141(var_73_object, "Neutral");
					var_0_object->SetMessage(13029); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(13030, -1, 14237); //@t
		}
	}
	for(;;) {
		bool var_109_bool;
		func_1147(var_109_bool);
		if(var_109_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1000(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_140;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_140:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x43";


// @pe
void func_1102(void)
{
	@SetVariable("d6q03", 2);
}


void func_462(object var_0_object, cvector var_99_cvector, float var_100_float)
{
	cvector var_107_cvector;
	@GetPosition(var_107_cvector);
	cvector var_108_cvector;
	var_0_object->GetPosition(var_108_cvector); //@t
	cvector var_109_cvector;
	@GetDirection(var_109_cvector);
	cvector var_113_cvector;
	cvector var_115_cvector;
	func_1025(var_115_cvector, (var_107_cvector - var_108_cvector));
	func_1025(var_113_cvector, (var_115_cvector + (var_109_cvector * 0.75)));
	cvector var_110_cvector;
	var_113_cvector = var_110_cvector;
	cvector var_111_cvector;
	float var_112_float;
	@FindLongestDir(var_111_cvector, var_112_float, var_110_cvector, var_100_float, 32, 7000.0);
	if((var_112_float - 100) < 0)
		var_112_float = 0;
	var_99_cvector = var_111_cvector * var_112_float;
}


// @pe
void func_1108(void)
{
	@SetVariable("ood6Albinos1", 1);
}


// @pe
void func_1114(bool var_79_bool)
{
	int var_81_int;
	func_1061(var_81_int, "ood6Albinos1");
	if(var_81_int == 0) {
		var_79_bool = true;
		return 0;
	}
	var_79_bool = false;
}


void func_608(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


// @pe
void func_736(string var_40_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_40_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_40_string);
	@RemoveEnvelope();
}


// @pe
void func_996(void)
{
	@CameraSwitchToNormal();
}


void func_868(object var_12_object, int var_13_int)
{
	object var_25_object; object var_26_object; cvector var_27_cvector; float var_28_float; string var_34_string;
	bool var_35_bool = false;
	if(var_13_int != 4) {
		if(var_13_int != 5)
			var_35_bool = true;
	}
	if(var_35_bool != 0) {
		@GetScene(var_25_object);
		@GetPosition(var_27_cvector);
		@GetEyesHeight(var_28_float);
		var_40_float = GetByIndex(var_27_cvector, 1);
		SetByIndex(var_27_cvector, 1) = (var_40_float + (var_28_float / 2));
		@AddActorByType(var_26_object, "scripted", var_25_object, var_27_cvector, [0.0, 0.0, 1.0], "blood.xml");
		var_26_object = null;
		var_25_object = null;
	}
	if(var_12_object == null)
		return 20;
	int var_29_int;
	@GetSecondaryAnimationType(var_29_int);
	if(var_29_int < 0)
		return 20;
	cvector var_30_cvector;
	var_12_object->GetPosition(var_30_cvector);
	cvector var_31_cvector;
	@GetPosition(var_31_cvector);
	cvector var_32_cvector;
	@GetDirection(var_32_cvector);
	cvector var_33_cvector = var_31_cvector - var_30_cvector;
	var_49_float = GetByIndex(var_33_cvector, 0);
	var_50_float = GetByIndex(var_32_cvector, 0);
	var_52_float = GetByIndex(var_33_cvector, 2);
	var_53_float = GetByIndex(var_32_cvector, 2);
	if(((var_49_float * var_50_float) + (var_52_float * var_53_float)) >= 0)
		var_34_string = "fhit";
	else
		var_34_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_34_string + "1"), (var_34_string + "2"), -10);
	
}


void func_1126(int var_63_int)
{
	int var_65_int;
	@GetVariable("player", var_65_int);
	if(var_65_int == 0) {
		var_63_int = 200001;
		return 2;
	EMIT "GOTO 0x475";
	}
	if(var_65_int == 1) {
		var_63_int = 200002;
		return 2;
	}
	var_63_int = 200003;
}


void func_1000(string var_91_string)
{
	@Trace("playing " + var_91_string);
	float var_94_float;
	float var_95_float;
	@lshGetAnimTimes(var_91_string, var_94_float, var_95_float);
	@lshPlayAnimation(var_94_float, var_95_float);
	@Trace("start: " + var_94_float);
	@Trace("end: " + var_95_float);
}


void func_492(object var_0_object, object var_1_object, object var_2_object, object var_12_object)
{
	cvector var_24_cvector; float var_25_float;
	cvector var_26_cvector;
	func_462(var_25_float, var_26_cvector, 1.7453294);
	cvector var_21_cvector;
	var_26_cvector = var_21_cvector;
	float var_22_float = var_21_cvector | var_21_cvector;
	if(var_22_float < 10000.0) {
		var_59_float = sqrt(var_22_float);
		@Trace("Can't retreat, distance: " + var_59_float);
		@Sleep(0.5);
		return 10;
	}
	var_62_float = GetByIndex(var_21_cvector, 0);
	var_63_float = GetByIndex(var_21_cvector, 2);
	@Rotate(var_62_float, var_63_float);
	cvector var_64_cvector;
	func_772(var_64_cvector);
	@SetTimer(120, 0.5);
	
Label_525:
	bool var_23_bool;
	@MovePoint((var_64_cvector + var_21_cvector), 1, var_23_bool);
	if(var_23_bool != 0) {
		if(var_12_object == null) {
			goto Label_555;
		EMIT "GOTO 0x229";

		Label_555:
			for(;;) {
				return 10;
		}
			cvector var_72_cvector;
			func_462(var_25_float, var_72_cvector, 2.6179938);
			var_72_cvector = var_24_cvector;
			if((var_24_cvector | var_24_cvector) >= 10000.0) {
				cvector var_76_cvector;
				func_772(var_76_cvector);
				var_1_object = var_76_cvector + var_24_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_525; //@nz

	}
}


void func_367(void)
{
	int var_20_int; int var_21_int; bool var_22_bool; float var_23_float; bool var_24_bool;
	@WaitForAnimEnd();
	bool var_25_bool;
	func_935(var_25_bool);
	if(!var_25_bool) //@nz
		return 14;
	int var_29_int;
	func_1085(var_29_int);
	int var_18_int;
	var_29_int = var_18_int;
	int var_19_int = 0;
	
	for(;;) {
		bool var_42_bool = false;
		if(var_19_int < 5) {
			bool var_45_bool;
			func_935(var_45_bool);
			if(var_45_bool != 0)
				var_42_bool = true;
		}
		if(var_42_bool != 0) {
			@irand(var_20_int, 3);
			if(var_20_int == 0) {
				if(var_18_int == 0) goto Label_414;
				@irand(var_21_int, var_18_int);
				string var_51_string; int var_52_int;
				var_21_int = var_52_int;
				func_1078(var_51_string, var_52_int);
				@PlayAnimation("all", var_51_string);
				@WaitForAnimEnd(var_22_bool);
				if(!var_22_bool) { //@nz
				} else {
			} else {
			if(var_20_int == 1) {
				@rand(var_23_float, 4);
				@Sleep((var_23_float + 1), var_24_bool);
				if(!var_24_bool) { //@nz
					goto Label_435;
				}
			} else if(var_19_int != 0) {
				goto Label_435;
			}
			}
				var_19_int += 1;
			}
		}
	Label_435:
		return 14;

	}
	
}


void func_624(object var_0_object, bool var_137_bool)
{
	cvector var_140_cvector;
	@GetDirection(var_140_cvector);
	cvector var_142_cvector;
	func_777(var_142_cvector, var_0_object);
	cvector var_141_cvector;
	var_142_cvector = var_141_cvector;
	float var_148_float; cvector var_149_cvector; cvector var_150_cvector;
	var_140_cvector = var_149_cvector;
	var_141_cvector = var_150_cvector;
	func_1053(var_148_float, var_149_cvector, var_150_cvector);
	var_137_bool = var_148_float >= -0.34202012;
}


void func_1143(int var_61_int)
{
	var_61_int = 12611;
}


void func_1145(string var_62_string)
{
	var_62_string = "ui/NPC_Black.png";
}


void func_1018(void)
{
	bool var_11_bool;
	func_1147(var_11_bool);
	if(var_11_bool != 0)
		@lshStopSpeech();
}


void func_1147(bool var_88_bool)
{
	var_88_bool = false;
}


// @pe
void func_764(string var_58_string, int var_59_int)
{
	if(var_59_int == 1)
		var_58_string = "fire";
	var_58_string = "phys";
}


// @pe
void func_1149(object var_9_object)
{
	@KillTimer(100);
	bool var_11_bool;
	func_1066(var_11_bool, "quest_d6_03", "albinos_dead");
	object var_17_object;
	var_9_object = var_17_object;
	TaskCall(4);
	func_640(var_17_object);
	TaskReturn();
}


