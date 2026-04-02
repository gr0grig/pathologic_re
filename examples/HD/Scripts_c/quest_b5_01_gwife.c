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
			func_1216();
			if(var_13_cvector == 19748) {
				bool var_19_bool;
				func_1335(var_1_object);
				if(var_19_bool != 0) {
					object var_27_object; object var_28_object;
					var_27_object = var_1_object;
					var_28_object = var_0_object;
					func_1329();
					func_162(var_14_bool, "Neutral");
					var_0_object->SetMessage(518656); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(518795, 19900, 19898); //@t
					var_0_object->AddReply(518796, 19900, 19899); //@t
					return 0;
				}
				func_162(var_14_bool, "Neutral");
				var_0_object->SetMessage(518660); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518661, -1, 19753); //@t
				var_0_object->AddReply(518800, -1, 19903); //@t
				return 0;
			}
			if(var_13_cvector == 19900) {
				func_162(var_14_bool, "Neutral");
				var_0_object->SetMessage(518797); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518799, 19750, 19902); //@t
				var_0_object->AddReply(518798, 19907, 19901); //@t
				return 0;
			}
			if(var_13_cvector == 19907) {
				func_162(var_14_bool, "Neutral");
				var_0_object->SetMessage(518804); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518805, 19750, 19908); //@t
				var_0_object->AddReply(518806, -1, 19909); //@t
				return 0;
			}
			if(var_13_cvector == 19750) {
				func_162(var_14_bool, "Neutral");
				var_0_object->SetMessage(518658); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518659, 19904, 19751); //@t
				var_0_object->AddReply(518802, -1, 19905); //@t
				return 0;
			}
			if(var_13_cvector == 19904) {
				func_162(var_14_bool, "Neutral");
				var_0_object->SetMessage(518801); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518807, 19911, 19910); //@t
				return 0;
			}
			if(var_13_cvector == 19911) {
				func_162(var_14_bool, "Neutral");
				var_0_object->SetMessage(518808); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518809, -1, 19914); //@t
				var_0_object->AddReply(518810, -1, 19915); //@t
				return 0;
			}
			var_3_string = true;
			bool var_110_bool;
			func_1391(var_110_bool);
			if(var_110_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb9";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool)
	{
	
		for(;;) {
			func_404(var_8_bool, var_9_object, var_10_object, var_11_cvector, var_12_bool, (float)300, (float)100);
			@Sleep(3);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		func_469(var_12_cvector, var_13_bool);
		int var_17_int; object var_18_object;
		var_13_bool = var_18_object;
		TaskCall(0);
		func_0(var_19_object, var_17_int, var_18_object);
		TaskReturn();
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		@SignalDeath(var_13_bool);
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, string var_10_string, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		if(var_13_bool == "retreat") {
			func_469(var_12_cvector, var_13_bool);
			TaskCall(3);
			func_569();
			TaskReturn();
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		if(var_13_bool == 10) {
			bool var_16_bool;
			func_431(var_11_object, var_12_cvector, var_13_bool, var_16_bool);
			if(var_16_bool != 0) {
				if(!var_2_object) { //@nz
					func_1205(var_4_bool);
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
	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object)
	{
		@SignalDeath(var_13_object);
	}

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
			func_594(var_21_float, var_27_cvector, 1.7453294);
			var_27_cvector = var_20_cvector;
			var_21_float = var_20_cvector | var_20_cvector;
			bool var_57_bool = false;
			if(var_21_float >= 2500.0) {
				bool var_60_bool;
				var_64_bool = var_21_float >= ((var_19_float * var_19_float) * 2.25);
				if(var_64_bool != 1) {
					bool var_65_bool;
					func_765(true, var_65_bool);
					if(var_65_bool != 1)
						var_60_bool = false;
				}
				if(var_60_bool != 0)
					var_57_bool = true;
			}
			if(var_57_bool == 0) goto Label_748;
			@Stop();
			cvector var_85_cvector;
			func_929(var_85_cvector);
			var_1_object = var_85_cvector + var_20_cvector;
		}
	Label_748:
	
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object)
	{
		func_749(var_13_object);
		object var_15_object;
		var_13_object = var_15_object;
		func_1436();
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
			func_1370(var_17_object);
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
	func_1000(var_17_object, var_18_int, var_19_float);
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
	func_1068(var_21_float, var_22_cvector, var_23_cvector);
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object)
{
	object var_14_object;
	var_13_object = var_14_object;
	func_1393(var_14_object);
}


void func_0(object var_0_object, int var_17_int, object var_18_object)
{
	var_0_object = var_18_object;
	bool var_28_bool; object var_29_object;
	var_18_object = var_29_object;
	func_1087(var_28_bool, var_29_object, 70.0);
	if(!var_28_bool) { //@nz
		var_17_int = -2;
		return 8;
	}
	object var_24_object;
	@CreateDialog(var_24_object);
	int var_76_int;
	func_1385(var_76_int);
	var_24_object->SetNPCName(var_76_int);
	int var_77_int;
	func_1383(var_77_int);
	var_24_object->SetNPCDescription(var_77_int);
	string var_78_string;
	func_1387(var_78_string);
	var_24_object->SetPhoto(var_78_string);
	string var_79_string;
	func_1389(var_79_string);
	var_24_object->SetPhoto2(var_79_string);
	int var_80_int;
	func_1347(var_80_int);
	var_24_object->SetPlayerName(var_80_int);
	bool var_25_bool;
	@IsOverrideActive(var_25_bool);
	if(var_25_bool != 0) {
		var_17_int = -2;
		return 8;
	}
	@DoDialog(var_24_object);
	object var_89_object; object var_90_object;
	var_18_object = var_89_object;
	var_24_object = var_90_object;
	TaskCall(1);
	func_74(var_91_object, var_92_object, var_93_string, var_94_bool, var_89_object, var_90_object);
	TaskReturn();
	bool var_27_bool;
	var_24_object->IsDialogEnd(var_27_bool);
	
	for(;;) {
		var_158_bool = !var_27_bool; //@nz
		if(var_158_bool == 0) goto Label_63;
		@sync();
		var_24_object->IsDialogEnd(var_27_bool);
	}
	
Label_63:
	object var_159_object;
	var_18_object = var_159_object;
	func_1156();
	@StopDialog(var_24_object);
	var_24_object->GetReturnValue(-1);
	int var_26_int = var_17_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1280(float var_76_float, cvector var_77_cvector, cvector var_78_cvector)
{
	var_83_float = sqrt((var_77_cvector | var_77_cvector) * (var_78_cvector | var_78_cvector));
	var_76_float = (var_77_cvector | var_78_cvector) / var_83_float;
}


// @pe
void func_897(string var_51_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_52_string;
	var_51_string = var_52_string;
	func_1223(var_52_string);
	@PlayAnimation("all", var_51_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_51_string);
	@RemoveEnvelope();
}


void func_1156(void)
{
	bool var_161_bool;
	@CameraSwitchToNormal(true);
	bool var_163_bool;
	func_1391(var_163_bool);
	if(var_163_bool != 0) {
	} else {
		@HasAnimationTrack(var_161_bool, "head");
		if(var_161_bool == 0) goto Label_1173;
		@UnlookAsync("head");
	}
Label_1173:
	
}


void func_1288(int var_98_int, string var_99_string)
{
	int var_101_int;
	@GetVariable(var_99_string, var_101_int);
	var_101_int = var_98_int;
}


void func_1293(bool var_22_bool, string var_23_string, string var_24_string)
{
	object var_26_object;
	@FindActor(var_26_object, var_23_string);
	if(var_26_object == null)
		var_22_bool = false;
	@Trigger(var_26_object, var_24_string);
	var_22_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_781(object var_28_object)
{
	object var_29_object;
	var_28_object = var_29_object;
	func_806(var_29_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_404(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_13_float, float var_14_float)
{
	bool var_15_bool;
	func_1082(var_15_bool);
	if(!var_15_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_13_float;
	var_1_object = var_14_float;
	@SetTimer(10, 1.0);
	func_483();
	if(!false) //@nz
		@KillTimer(10);
}


void func_1174(string var_134_string)
{
	bool var_138_bool; float var_139_float; float var_140_float;
	@lshHasAnimation(var_138_bool, var_134_string);
	if(var_138_bool != 0) {
		@lshGetAnimTimes(var_134_string, var_139_float, var_140_float);
		@lshPlayAnimation(var_139_float, var_140_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_134_string);
	}
	
}


void func_1305(string var_44_string, int var_45_int)
{
	string var_47_string = "idle";
	if(var_45_int != 0)
		var_47_string += var_45_int;
	var_47_string = var_44_string;
}


void func_1312(int var_38_int)
{
	int var_41_int; bool var_42_bool;
	var_41_int = 0;
	
	for(;;) {
		string var_44_string; int var_45_int;
		var_41_int = var_45_int;
		func_1305(var_44_string, var_45_int);
		@HasAnimation(var_42_bool, "all", var_44_string);
		if(!var_42_bool) //@nz
			break;
		var_41_int += 1;
	}
	var_41_int = var_38_int;
}


void func_929(cvector var_85_cvector)
{
	cvector var_87_cvector;
	@GetPosition(var_87_cvector);
	var_87_cvector = var_85_cvector;
}


// @pe
void func_162(object var_2_object, string var_108_string)
{
	bool var_109_bool;
	func_1391(var_109_bool);
	if(!var_109_bool) //@nz
		return 0;
	if(var_108_string == var_2_object)
		return 0;
	string var_112_string; bool var_113_bool;
	var_108_string = var_112_string;
	if(var_108_string == "")
		var_113_bool = false;
	else
		var_113_bool = true;
	func_1190(var_112_string, var_113_bool);
	var_2_object = var_108_string;
	
}


void func_1190(string var_112_string, bool var_113_bool)
{
	bool var_119_bool; float var_120_float; float var_121_float;
	@lshHasAnimation(var_119_bool, var_112_string);
	if(var_119_bool != 0) {
		@lshGetAnimTimes(var_112_string, var_120_float, var_121_float);
		@lshPlayAnimation(var_120_float, var_121_float, var_113_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_112_string);
	}
	
}


void func_934(cvector var_47_cvector, object var_48_object)
{
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	cvector var_52_cvector;
	var_48_object->GetPosition(var_52_cvector);
	var_47_cvector = var_52_cvector - var_51_cvector;
}


void func_806(object var_29_object)
{
	cvector var_40_cvector; cvector var_41_cvector; cvector var_42_cvector; cvector var_43_cvector; string var_44_string; object var_45_object; bool var_46_bool; bool var_47_bool; float var_48_float; cvector var_49_cvector;
	if(var_29_object == null) {
		func_897("fdie");
	} else {
		var_29_object->GetPosition(var_40_cvector);
		@GetPosition(var_41_cvector);
		@GetDirection(var_42_cvector);
		var_43_cvector = var_41_cvector - var_40_cvector;
		var_83_float = GetByIndex(var_43_cvector, 0);
		var_84_float = GetByIndex(var_42_cvector, 0);
		var_86_float = GetByIndex(var_43_cvector, 2);
		var_87_float = GetByIndex(var_42_cvector, 2);
		if(((var_83_float * var_84_float) + (var_86_float * var_87_float)) >= 0)
			var_44_string = "fdie";
		else
			var_44_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_29_object = var_45_object;
		var_94_bool = IsFuncExist(var_29_object, "GetScriptProperty", 2);
		if(var_94_bool != 0) {
			var_29_object->HasScriptProperty(var_46_bool, "Owner");
			if(var_46_bool != 0) {
				var_29_object->GetScriptProperty(var_45_object, "Owner");
				if(var_45_object == null)
					var_29_object = var_45_object;
			}
		}
		var_101_bool = IsFuncExist(var_45_object, "@GetEyesHeight", 1);
		if(var_101_bool != 0) {
			var_45_object->GetEyesHeight(var_48_float);
			var_49_cvector = [0.0, 0.0, 0.0];
			var_102_float = GetByIndex(var_49_cvector, 1);
			var_48_float = var_102_float;
			SetByIndex(var_49_cvector, 1) = var_102_float;
			@LookAsync(var_29_object, "head", var_49_cvector);
			var_47_bool = true;
		} else {
			var_47_bool = false;

		}
		string var_104_string;
		var_44_string = var_104_string;
		func_1223(var_104_string);
		@PlayAnimation("all", var_44_string);
		@WaitForAnimEnd();
		if(var_47_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_44_string);
		@RemoveEnvelope();
		var_45_object = null;
	}
	
}


void func_1068(object var_19_object, cvector var_22_cvector, cvector var_23_cvector)
{
	object var_26_object;
	@GetScene(var_26_object);
	object var_27_object;
	@AddActorByType(var_27_object, "scripted", var_26_object, var_22_cvector, var_23_cvector, "blood_dir.xml");
	object var_30_object;
	var_19_object = var_30_object;
	func_956(var_30_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_941(float var_20_float, object var_21_object)
{
	cvector var_25_cvector;
	@GetPosition(var_25_cvector);
	cvector var_26_cvector;
	var_21_object->GetPosition(var_26_cvector);
	var_20_float = (var_26_cvector - var_25_cvector) | (var_26_cvector - var_25_cvector);
}


void func_431(object var_0_object, object var_1_object, bool var_4_bool, bool var_16_bool)
{
	if(var_4_bool == null)
		var_16_bool = false;
	float var_20_float;
	func_941(var_20_float, var_4_bool);
	float var_18_float = sqrt(var_20_float);
	if(var_2_object != 0)
		var_18_float -= var_1_object;
	var_16_bool = var_18_float < var_0_object;
}


// @pe
void func_1329(void)
{
	@SetVariable("oob5GathererWife1", 1);
}


void func_562(bool var_63_bool)
{
	var_63_bool = true;
}


void func_564(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1205(object var_30_object)
{
	float var_33_float;
	var_30_object->GetEyesHeight(var_33_float);
	cvector var_34_cvector = [0.0, 0.0, 0.0];
	var_35_float = GetByIndex(var_34_cvector, 1);
	var_33_float = var_35_float;
	SetByIndex(var_34_cvector, 1) = var_35_float;
	@LookAsync(var_30_object, "head", var_34_cvector);
}


void func_949(object var_28_object)
{
	object var_30_object;
	@FindActor(var_30_object, "player");
	var_30_object = var_28_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1335(bool var_96_bool)
{
	int var_98_int;
	func_1288(var_98_int, "oob5GathererWife1");
	if(var_98_int == 0) {
		var_96_bool = true;
		return 0;
	}
	var_96_bool = false;
}


void func_569(void)
{
	object var_22_object; object var_23_object;
	@GetScene(var_23_object);
	object var_24_object;
	func_1264(var_24_object);
	var_23_object->RemoveStationaryActor(var_24_object);
	
	for(;;) {
		object var_27_object;
		object var_28_object;
		func_949(var_28_object);
		var_28_object = var_27_object;
		func_624(var_21_bool, var_22_object, var_23_object, var_27_object);
		@Sleep(1);
	}
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


void func_1082(bool var_15_bool)
{
	bool var_17_bool;
	@IsLoaded(var_17_bool);
	var_17_bool = var_15_bool;
}


void func_956(object var_30_object)
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


void func_1087(bool var_28_bool, object var_29_object, float var_30_float)
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
	func_1270(var_55_cvector, (var_44_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_45_cvector = ((var_43_cvector * var_30_float) + (var_55_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_47_bool;
	@IsOverrideActive(var_47_bool);
	if(var_47_bool != 0)
		var_28_bool = false;
	@StopWorld();
	@CameraTransit((var_42_cvector + var_45_cvector), var_44_cvector, true);
	var_69_float = GetByIndex(var_45_cvector, 0);
	var_70_float = GetByIndex(var_45_cvector, 2);
	@Rotate(var_69_float, var_70_float);
	bool var_71_bool;
	func_1391(var_71_bool);
	if(var_71_bool != 0) {
	} else {
		@HasAnimationTrack(var_48_bool, "head");
		if(var_48_bool == 0) goto Label_1150;
		@LookAsyncCamera("head");
	}
Label_1150:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_28_bool = true;
	
}


void func_1216(void)
{
	bool var_16_bool;
	func_1391(var_16_bool);
	if(var_16_bool != 0)
		@lshStopSpeech();
}


void func_1347(int var_80_int)
{
	int var_82_int;
	@GetVariable("branch", var_82_int);
	if(var_82_int == 0) {
		var_80_int = 1;
		return 2;
	EMIT "GOTO 0x552";
	}
	if(var_82_int == 1) {
		var_80_int = 2;
		return 2;
	}
	var_80_int = 3;
}


void func_1223(string var_52_string)
{
	bool var_61_bool; int var_62_int; bool var_63_bool; int var_64_int; bool var_65_bool; float var_66_float; cvector var_67_cvector; cvector var_68_cvector;
	@IsExisting3DSound(var_61_bool, var_52_string);
	if(!var_61_bool) { //@nz
		var_62_int = 0;

		for(;;) {
			@IsExisting3DSound(var_63_bool, (var_52_string + (var_62_int + 1)));
			if(!var_63_bool) { //@nz
				break;
			Label_1243:
				@irand(var_64_int, var_62_int);
				var_52_string += (var_64_int + 1);
	}
			@Is3DSoundLoaded(var_65_bool, var_52_string);
			if(var_65_bool != 0) {
				@GetEyesHeight(var_66_float);
				@GetDirection(var_67_cvector);
				var_68_cvector = var_67_cvector * 50;
				var_79_float = GetByIndex(var_68_cvector, 1);
				SetByIndex(var_68_cvector, 1) = (var_79_float + var_66_float);
				@PlayGlobalSound(var_52_string, var_68_cvector);
			}
		}
		var_62_int += 1;
	}
	var_74_bool = !var_62_int; //@nz
	if(var_74_bool == 0) goto Label_1243;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_89_object, object var_90_object)
{
	var_0_object = var_90_object;
	var_1_object = var_89_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_96_bool;
		func_1335(var_1_object);
		if(var_96_bool != 0) {
			object var_104_object; object var_105_object;
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_1329();
			func_162(var_90_object, "Neutral");
			var_0_object->SetMessage(518656); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(518795, 19900, 19898); //@t
			var_0_object->AddReply(518796, 19900, 19899); //@t
		} else {
					func_162(var_90_object, "Neutral");
					var_0_object->SetMessage(518660); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(518661, -1, 19753); //@t
					var_0_object->AddReply(518800, -1, 19903); //@t
		}
	}
	for(;;) {
		bool var_132_bool;
		func_1391(var_132_bool);
		if(var_132_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1174(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_161;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_161:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_594(object var_0_object, cvector var_27_cvector, float var_28_float)
{
	cvector var_35_cvector;
	@GetPosition(var_35_cvector);
	cvector var_36_cvector;
	var_0_object->GetPosition(var_36_cvector); //@t
	cvector var_37_cvector;
	@GetDirection(var_37_cvector);
	cvector var_41_cvector;
	cvector var_43_cvector;
	func_1270(var_43_cvector, (var_35_cvector - var_36_cvector));
	func_1270(var_41_cvector, (var_43_cvector + (var_37_cvector * 0.75)));
	cvector var_38_cvector;
	var_41_cvector = var_38_cvector;
	cvector var_39_cvector;
	float var_40_float;
	@FindLongestDir(var_39_cvector, var_40_float, var_38_cvector, var_28_float, 32, 7000.0);
	if((var_40_float - 100) < 0)
		var_40_float = 0;
	var_27_cvector = var_39_cvector * var_40_float;
}


void func_1364(int var_18_int)
{
	int var_20_int;
	@GetVariable("branch", var_20_int);
	var_20_int = var_18_int;
}


// @pe
void func_469(object var_2_object, string var_3_string)
{
	func_564();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


// @pe
void func_1370(object var_17_object)
{
	int var_18_int;
	func_1364(var_18_int);
	if(var_18_int == 1)
		@WorkWithCorpse(var_17_object);
	else
		@Barter(var_17_object);
	
}


void func_483(void)
{
	int var_31_int; int var_32_int; bool var_33_bool; float var_34_float; bool var_35_bool;
	@WaitForAnimEnd();
	bool var_36_bool;
	func_1082(var_36_bool);
	if(!var_36_bool) //@nz
		return 14;
	int var_38_int;
	func_1312(var_38_int);
	int var_29_int;
	var_38_int = var_29_int;
	int var_30_int = 0;
	
	for(;;) {
		bool var_51_bool = false;
		if(var_30_int < 5) {
			bool var_54_bool;
			func_1082(var_54_bool);
			if(var_54_bool != 0)
				var_51_bool = true;
		}
		if(var_51_bool != 0) {
			@irand(var_31_int, 3);
			if(var_31_int == 0) {
				if(var_29_int == 0) goto Label_530;
				@irand(var_32_int, var_29_int);
				string var_60_string; int var_61_int;
				var_32_int = var_61_int;
				func_1305(var_60_string, var_61_int);
				@PlayAnimation("all", var_60_string);
				@WaitForAnimEnd(var_33_bool);
				if(!var_33_bool) { //@nz
				} else {
			} else {
			if(var_31_int == 1) {
				@rand(var_34_float, 4);
				@Sleep((var_34_float + 1), var_35_bool);
				if(!var_35_bool) { //@nz
					goto Label_559;
				}
			} else if(var_30_int != 0) {
				goto Label_559;
			}
			}
					bool var_63_bool;
					func_562(var_63_bool);
					var_64_bool = !var_63_bool; //@nz
					if(var_64_bool == 0) goto Label_554;
			}
		}
	Label_559:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_554:
		@ResetAAS();
		var_30_int += 1;
	}
	
}


void func_1383(int var_77_int)
{
	var_77_int = 518607;
}


void func_1000(object var_17_object, int var_18_int, float var_19_float)
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
		func_934(var_47_cvector, var_48_object);
		var_47_cvector = var_46_cvector;
		func_1270(var_45_cvector, var_46_cvector);
		var_45_cvector = var_29_cvector;
		@CreateVectorVector(var_30_object);
		var_31_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_31_int), var_32_bool, var_33_cvector, var_34_cvector);
			if(!var_32_bool) { //@nz
				break;
			Label_1062:
				var_30_object = null;
	}
			object var_107_object;
			var_17_object = var_107_object;
			func_956(var_107_object);
		}
		if((var_34_cvector | var_29_cvector) >= 0.70710677)
			var_30_object->add(var_33_cvector);
		var_31_int += 1;
	}
	int var_35_int;
	var_30_object->size(var_35_int);
	if(var_35_int == 0) goto Label_1062;
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
	func_1068(var_64_float, var_65_cvector, var_66_cvector);
}


void func_1385(int var_76_int)
{
	var_76_int = 518606;
}


void func_1387(string var_78_string)
{
	var_78_string = "ui/NPC_Citizen2.png";
}


void func_1389(string var_79_string)
{
	var_79_string = "ui/NPC_Citizen2_b.png";
}


void func_749(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


void func_1391(bool var_71_bool)
{
	var_71_bool = false;
}


void func_1264(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


void func_624(object var_0_object, object var_1_object, object var_2_object, object var_27_object)
{
	float var_38_float; cvector var_40_cvector; float var_41_float;
	cvector var_42_cvector;
	func_594(var_41_float, var_42_cvector, 1.7453294);
	cvector var_37_cvector;
	var_42_cvector = var_37_cvector;
	if((var_37_cvector | var_37_cvector) < 2500.0) {
		cvector var_74_cvector;
		func_594(var_41_float, var_74_cvector, 2.6179938);
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
	func_929(var_84_cvector);
	@SetTimer(120, 0.5);
	
Label_666:
	bool var_39_bool;
	@MovePoint((var_84_cvector + var_37_cvector), 1, var_39_bool);
	if(var_39_bool != 0) {
		if(var_27_object == null) {
			goto Label_696;
		EMIT "GOTO 0x2b6";

		Label_696:
			for(;;) {
				return 10;
		}
			cvector var_92_cvector;
			func_594(var_41_float, var_92_cvector, 2.6179938);
			var_92_cvector = var_40_cvector;
			if((var_40_cvector | var_40_cvector) >= 2500.0) {
				cvector var_96_cvector;
				func_929(var_96_cvector);
				var_1_object = var_96_cvector + var_40_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_666; //@nz

	}
}


void func_1393(object var_14_object)
{
	object var_16_object;
	@GetScene(var_16_object);
	object var_17_object;
	func_1264(var_17_object);
	var_16_object->RemoveStationaryActor(var_17_object);
	@SetVariable("b5q01NudeDead", true);
	bool var_22_bool;
	func_1293(var_22_bool, "quest_b5_01", "gwife_dead");
	object var_28_object;
	var_14_object = var_28_object;
	TaskCall(4);
	func_781(var_28_object);
	TaskReturn();
}
EMIT "Stack[-1] = 0";


void func_1270(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_54_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_54_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_54_float;
}


void func_765(object var_0_object, bool var_65_bool)
{
	cvector var_68_cvector;
	@GetDirection(var_68_cvector);
	cvector var_70_cvector;
	func_934(var_70_cvector, var_0_object);
	cvector var_69_cvector;
	var_70_cvector = var_69_cvector;
	float var_76_float; cvector var_77_cvector; cvector var_78_cvector;
	var_68_cvector = var_77_cvector;
	var_69_cvector = var_78_cvector;
	func_1280(var_76_float, var_77_cvector, var_78_cvector);
	var_65_bool = var_76_float >= -0.34202012;
}


