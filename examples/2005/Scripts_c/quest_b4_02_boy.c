// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		if(1 != 0) {
			func_2195();
			if(var_16_bool == 19674) {
				object var_21_object; object var_22_object;
				var_21_object = var_1_object;
				var_22_object = var_0_object;
				func_2409();
			}
			if(var_16_bool == 20848) {
				object var_31_object; object var_32_object;
				var_31_object = var_1_object;
				var_32_object = var_0_object;
				func_2409();
			}
			if(var_15_object == 19673) {
				bool var_35_bool;
				func_2422(var_1_object);
				if(var_35_bool != 0) {
					object var_43_object; object var_44_object;
					var_43_object = var_1_object;
					var_44_object = var_0_object;
					func_2403();
					func_187(var_16_bool, "Neutral");
					var_0_object->SetMessage(518563); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(518962, 20075, 20074); //@t
					return 0;
				}
				bool var_63_bool;
				func_2434(var_1_object);
				if(var_63_bool != 0) {
					object var_69_object; object var_70_object;
					var_69_object = var_1_object;
					var_70_object = var_0_object;
					func_2416();
					func_187(var_16_bool, "Neutral");
					var_0_object->SetMessage(518565); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(518566, 20046, 19676); //@t
					var_0_object->AddReply(518934, -1, 20045); //@t
					return 0;
				}
				func_187(var_16_bool, "Neutral");
				var_0_object->SetMessage(518569); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518570, -1, 19680); //@t
				var_0_object->AddReply(518940, -1, 20051); //@t
				return 0;
			}
			if(var_15_object == 20046) {
				func_187(var_16_bool, "Neutral");
				var_0_object->SetMessage(518935); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518936, 20048, 20047); //@t
				return 0;
			}
			if(var_15_object == 20048) {
				func_187(var_16_bool, "Neutral");
				var_0_object->SetMessage(518937); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518938, -1, 20049); //@t
				var_0_object->AddReply(518939, -1, 20050); //@t
				return 0;
			}
			if(var_15_object == 20075) {
				func_187(var_16_bool, "Neutral");
				var_0_object->SetMessage(518963); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527872, 29220, 29219); //@t
				return 0;
			}
			if(var_15_object == 29220) {
				func_187(var_16_bool, "Neutral");
				var_0_object->SetMessage(527873); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518564, -1, 19674); //@t
				var_0_object->AddReply(518933, 20847, 20044); //@t
				return 0;
			}
			if(var_15_object == 20847) {
				func_187(var_16_bool, "Neutral");
				var_0_object->SetMessage(519689); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519690, -1, 20848); //@t
				return 0;
			}
			var_3_string = true;
			bool var_130_bool;
			func_2377(var_130_bool);
			if(var_130_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd2";
	
	}

}


maintask task_2
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
	
		for(;;) {
			func_471();
			@Sleep(3);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		func_552();
		int var_16_int; object var_17_object;
		var_15_bool = var_17_object;
		TaskCall(0);
		func_0(var_18_object, var_16_int, var_17_object);
		TaskReturn();
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, string var_5_string, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		if(var_15_bool == "run") {
			TaskCall(3);
			func_557();
			TaskReturn();
		}
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		func_552();
		object var_16_object;
		var_15_bool = var_16_object;
		TaskCall(4);
		func_654(var_16_object);
		TaskReturn();
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		func_552();
		object var_16_object;
		var_15_bool = var_16_object;
		func_2521();
	}

}


task task_3
{
	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		func_646(var_15_bool);
		object var_16_object;
		var_15_bool = var_16_object;
		TaskCall(4);
		func_654(var_16_object);
		TaskReturn();
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		func_646(var_15_bool);
		object var_16_object;
		var_15_bool = var_16_object;
		func_2521();
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, int var_15_int)
	{
		if(var_15_int == 1) {
			func_2349(var_1_object);
		} else {
			int var_23_int;
			func_1549(var_14_bool, var_23_int, var_23_int);
		}
	
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
		bool var_16_bool = false;
		if(var_1_object == var_15_object) {
			if(!var_2_object) //@nz
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			var_2_object = true;
			object var_19_object;
			var_15_object = var_19_object;
			func_2184(var_19_object);
		}
	}

	// @pe
	void OnStopSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
		bool var_16_bool = false;
		if(var_1_object == var_15_object) {
			if(var_2_object != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			var_2_object = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
		@RequestClearPath(var_15_object);
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
		func_1405(var_15_object);
		object var_20_object;
		var_15_object = var_20_object;
		func_2521();
	}

}


task task_6
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
		bool var_17_bool;
		@IsOverrideActive(var_17_bool);
		if(!var_17_bool) { //@nz
			object var_19_object;
			var_15_object = var_19_object;
			func_2469(var_19_object);
		}
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, int var_16_int, float var_17_float, float var_18_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, string var_16_string)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, int var_16_int, float var_17_float, float var_18_float)
{
	object var_19_object;
	var_15_object = var_19_object;
	int var_20_int;
	var_16_int = var_20_int;
	float var_21_float;
	var_17_float = var_21_float;
	func_1988(var_19_object, var_20_int, var_21_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, int var_16_int, float var_17_float, float var_18_float, cvector var_19_cvector, cvector var_20_cvector)
{
	object var_21_object;
	var_15_object = var_21_object;
	int var_22_int;
	var_16_int = var_22_int;
	float var_23_float;
	var_17_float = var_23_float;
	cvector var_24_cvector;
	var_19_cvector = var_24_cvector;
	cvector var_25_cvector;
	var_20_cvector = var_25_cvector;
	func_2056(var_23_float, var_24_cvector, var_25_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, string var_16_string)
{
	float var_18_float;
	if(var_16_string == "health") {
		@GetProperty("health", var_18_float);
		if(var_18_float <= 0)
			@SignalDeath(var_15_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
{
	object var_17_object;
	var_15_object = var_17_object;
	bool var_16_bool;
	func_1767(var_16_bool, var_17_object);
	if(var_16_bool != 0) {
		bool var_20_bool; object var_21_object;
		var_15_object = var_21_object;
		func_2282(var_20_bool, var_21_object, -0.1);
	}
	object var_58_object;
	var_15_object = var_58_object;
	func_2482(var_58_object);
}


void func_0(object var_0_object, int var_16_int, object var_17_object)
{
	var_0_object = var_17_object;
	bool var_27_bool; object var_28_object;
	var_17_object = var_28_object;
	func_2086(var_27_bool, var_28_object, 70.0);
	if(!var_27_bool) { //@nz
		var_16_int = -2;
		return 8;
	}
	object var_23_object;
	@CreateDialog(var_23_object);
	int var_74_int;
	func_2371(var_74_int);
	var_23_object->SetNPCName(var_74_int);
	int var_75_int;
	func_2369(var_75_int);
	var_23_object->SetNPCDescription(var_75_int);
	string var_76_string;
	func_2373(var_76_string);
	var_23_object->SetPhoto(var_76_string);
	string var_77_string;
	func_2375(var_77_string);
	var_23_object->SetPhoto2(var_77_string);
	int var_78_int;
	func_2446(var_78_int);
	var_23_object->SetPlayerName(var_78_int);
	bool var_24_bool;
	@IsOverrideActive(var_24_bool);
	if(var_24_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	@DoDialog(var_23_object);
	object var_87_object; object var_88_object;
	var_17_object = var_87_object;
	var_23_object = var_88_object;
	TaskCall(1);
	func_74(var_89_object, var_90_object, var_91_string, var_92_bool, var_87_object, var_88_object);
	TaskReturn();
	bool var_26_bool;
	var_23_object->IsDialogEnd(var_26_bool);
	
	for(;;) {
		var_161_bool = !var_26_bool; //@nz
		if(var_161_bool == 0) goto Label_63;
		@sync();
		var_23_object->IsDialogEnd(var_26_bool);
	}
	
Label_63:
	object var_162_object;
	var_17_object = var_162_object;
	func_2154();
	@StopDialog(var_23_object);
	var_23_object->GetReturnValue(-1);
	int var_25_int = var_16_int;
}
EMIT "Stack[-4] = 0";


void func_2056(object var_21_object, cvector var_24_cvector, cvector var_25_cvector)
{
	object var_28_object;
	@GetScene(var_28_object);
	object var_29_object;
	@AddActorByType(var_29_object, "scripted", var_28_object, var_24_cvector, var_25_cvector, "blood_dir.xml");
	object var_32_object;
	var_21_object = var_32_object;
	func_1944(var_32_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1290(object var_2_object, bool var_5_bool)
{
	int var_369_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_bool != 0) {
		if((var_5_bool + -1) > 0)
			return 4;
	}
	float var_368_float;
	@rand(var_368_float);
	float var_375_float;
	func_1340(var_375_float);
	if(var_368_float < var_375_float) {
		@irand(var_369_int, var_2_object);
		@Speak("attack" + (var_369_int + 1));
		int var_380_int;
		func_1338(var_380_int);
		var_5_bool = var_380_int;
	}
}


// @pe
void func_1549(object var_0_object, object var_1_object, int var_23_int)
{
	if(var_23_int != 0)
		return 0;
	bool var_26_bool;
	func_1587(var_26_bool, var_1_object);
	if(!var_26_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_2317(float var_454_float)
{
	object var_456_object;
	@CreateFloatVector(var_456_object);
	var_456_object->add(var_454_float);
	@SendWorldWndMessage(15, var_456_object);
}
EMIT "Stack[-1] = 0";


void func_1806(float var_398_float, object var_399_object, float var_400_float, int var_401_int)
{
	int var_411_int; int var_413_int;
	object var_418_object;
	var_399_object = var_418_object;
	bool var_417_bool;
	func_1772(var_417_bool, var_418_object, "health");
	if(!var_417_bool) //@nz
		var_398_float = 0.0;
	bool var_421_bool; object var_422_object;
	func_1772(var_421_bool, var_422_object, "armor");
	if(!var_421_bool) //@nz
		var_411_int = 0;
	else
		var_422_object->GetProperty("armor", var_411_int);
	string var_426_string; int var_427_int;
	var_401_int = var_427_int;
	func_1746(var_426_string, var_427_int);
	string var_412_string = "armor_" + var_426_string;
	bool var_432_bool; object var_433_object; string var_434_string;
	var_399_object = var_433_object;
	func_1772(var_432_bool, var_433_object, var_434_string);
	if(!var_432_bool) //@nz
		var_413_int = 0;
	else
		var_399_object->GetProperty(var_434_string, var_413_int);

	float var_436_float;
	func_2259(var_436_float, ((var_411_int + var_413_int) / 100.0), (float)1);
	float var_414_float;
	var_436_float = var_414_float;
	float var_415_float;
	var_399_object->GetProperty("health", var_415_float);
	float var_416_float = var_400_float * (1 - var_414_float);
	float var_446_float;
	func_2266(var_446_float, (var_415_float - var_416_float), (float)0, (float)1);
	var_399_object->SetProperty("health", var_446_float);
	bool var_452_bool; object var_453_object;
	var_399_object = var_453_object;
	func_1767(var_452_bool, var_453_object);
	if(var_452_bool != 0) {
		float var_454_float = -var_416_float;
		func_2317(var_454_float);
	}
	var_416_float = var_398_float;
	
}


void func_2070(object var_232_object)
{
	cvector var_236_cvector;
	var_232_object->GetPosition(var_236_cvector);
	cvector var_237_cvector;
	@GetPosition(var_237_cvector);
	cvector var_238_cvector = var_236_cvector - var_237_cvector;
	var_239_float = GetByIndex(var_238_cvector, 0);
	var_240_float = GetByIndex(var_238_cvector, 2);
	@RotateAsync(var_239_float, var_240_float);
}


void func_2327(float var_27_float)
{
	object var_29_object;
	@CreateFloatVector(var_29_object);
	var_29_object->add(var_27_float);
	@SendWorldWndMessage(16, var_29_object);
}
EMIT "Stack[-1] = 0";


void func_2081(bool var_29_bool)
{
	bool var_31_bool;
	@IsLoaded(var_31_bool);
	var_31_bool = var_29_bool;
}


void func_2337(bool var_23_bool, string var_24_string, string var_25_string)
{
	object var_27_object;
	@FindActor(var_27_object, var_24_string);
	if(var_27_object == null)
		var_23_bool = false;
	@Trigger(var_27_object, var_25_string);
	var_23_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1571(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_2086(bool var_27_bool, object var_28_object, float var_29_float)
{
	cvector var_40_cvector; bool var_47_bool;
	var_28_object->GetPosition(var_40_cvector);
	float var_39_float;
	var_28_object->GetEyesHeight(var_39_float);
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (var_48_float + var_39_float);
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	@GetEyesHeight(var_39_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	SetByIndex(var_41_cvector, 1) = (var_49_float + var_39_float);
	cvector var_42_cvector = var_40_cvector - var_41_cvector;
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (float)0;
	var_52_float = sqrt(var_42_cvector | var_42_cvector);
	var_42_cvector /= var_52_float;
	cvector var_43_cvector = -var_42_cvector;
	cvector var_54_cvector;
	func_2249(var_54_cvector, (var_43_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_44_cvector = ((var_42_cvector * var_29_float) + (var_54_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_46_bool;
	@IsOverrideActive(var_46_bool);
	if(var_46_bool != 0)
		var_27_bool = false;
	@StopWorld();
	@CameraTransit((var_41_cvector + var_44_cvector), var_43_cvector);
	var_67_float = GetByIndex(var_44_cvector, 0);
	var_68_float = GetByIndex(var_44_cvector, 2);
	@Rotate(var_67_float, var_68_float);
	bool var_69_bool;
	func_2377(var_69_bool);
	if(var_69_bool != 0) {
	} else {
		@HasAnimationTrack(var_47_bool, "head");
		if(var_47_bool == 0) goto Label_2148;
		@LookAsyncCamera("head");
	}
Label_2148:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_27_bool = true;
	
}


void func_550(bool var_58_bool)
{
	var_58_bool = true;
}


void func_552(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1322(object var_0_object)
{
	func_2349(var_0_object);
}


void func_557(void)
{
	object var_20_object;
	@GetScene(var_20_object);
	object var_21_object;
	func_2243(var_21_object);
	var_20_object->RemoveStationaryActor(var_21_object);
	bool var_24_bool;
	func_593(var_24_bool, "pt_b4q02_boy_path", 0, true);
}
EMIT "Stack[-1] = 0";


void func_2349(object var_18_object)
{
	bool var_20_bool;
	@IsPlayerActor(var_18_object, var_20_bool);
	if(var_20_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1327(int var_459_int)
{
	var_459_int = 0;
}


void func_1329(void)
{
	func_2202("attack_stay");
}


// @pe
void func_1587(bool var_26_bool, object var_27_object)
{
	object var_29_object;
	var_27_object = var_29_object;
	bool var_28_bool;
	func_1920(var_28_bool, var_29_object);
	var_28_bool = var_26_bool;
}


// @pe
void func_1334(void)
{
}


void func_2358(void)
{
	object var_360_object;
	@GetScene(var_360_object);
	object var_362_object;
	func_2243(var_362_object);
	@BroadcastMessage("battle", var_362_object, var_360_object);
}
EMIT "Stack[-1] = 0";


void func_1336(bool var_484_bool)
{
	var_484_bool = true;
}


void func_1594(string var_198_string)
{
	var_198_string = "walk";
}


void func_1338(int var_380_int)
{
	var_380_int = 1;
}


void func_1596(string var_199_string)
{
	var_199_string = "run";
}


void func_1340(float var_375_float)
{
	var_375_float = 0.5;
}


// @pe
void func_1598(object var_59_object)
{
	object var_60_object;
	var_59_object = var_60_object;
	func_1623(var_60_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1342(object var_2_object, bool var_129_bool, object var_130_object, float var_131_float, float var_132_float, bool var_133_bool, bool var_134_bool)
{
	object var_142_object;
	func_2349(var_142_object);
	@SetTimer(1, 5);
	bool var_140_bool;
	@CanSee(var_140_bool, var_142_object);
	if(var_140_bool != 0) {
		var_2_object = true;
		object var_146_object;
		var_130_object = var_146_object;
		func_2184(var_146_object);
	} else {
		var_2_object = false;
	}
	bool var_153_bool; object var_154_object;
	func_1767(var_153_bool, var_154_object);
	if(var_153_bool != 0) {
		object var_157_object;
		func_2243(var_157_object);
		@SendPlayerEnemy(var_154_object, var_157_object);
	}
	bool var_158_bool; object var_159_object; float var_160_float; float var_161_float; bool var_162_bool; bool var_163_bool;
	var_130_object = var_159_object;
	var_131_float = var_160_float;
	var_132_float = var_161_float;
	var_133_bool = var_162_bool;
	var_134_bool = var_163_bool;
	bool var_141_bool;
	func_1447(var_140_bool, var_141_bool, var_158_bool, var_159_object, var_160_float, var_161_float, var_162_bool, var_163_bool);
	var_158_bool = var_141_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_141_bool = var_129_bool;
	
}


void func_2369(int var_75_int)
{
	var_75_int = 515558;
}


void func_2371(int var_74_int)
{
	var_74_int = 503343;
}


void func_2373(string var_76_string)
{
	var_76_string = "ui/NPC_Citizen3.png";
}


void func_2375(string var_77_string)
{
	var_77_string = "ui/NPC_Citizen3_b.png";
}


void func_2377(bool var_69_bool)
{
	var_69_bool = false;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_87_object, object var_88_object)
{
	var_0_object = var_88_object;
	var_1_object = var_87_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_94_bool;
		func_2422(var_1_object);
		if(var_94_bool != 0) {
			object var_102_object; object var_103_object;
			var_102_object = var_1_object;
			var_103_object = var_0_object;
			func_2403();
			func_187(var_88_object, "Neutral");
			var_0_object->SetMessage(518563); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(518962, 20075, 20074); //@t
		} else {
					bool var_135_bool;
					func_2434(var_1_object);
					if(var_135_bool == 0) goto Label_135;
					object var_141_object; object var_142_object;
					var_141_object = var_1_object;
					var_142_object = var_0_object;
					func_2416();
					func_187(var_88_object, "Neutral");
					var_0_object->SetMessage(518565); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(518566, 20046, 19676); //@t
					var_0_object->AddReply(518934, -1, 20045); //@t
		}
	}
Label_157:
	for(;;) {
		bool var_122_bool;
		func_2377(var_122_bool);
		if(var_122_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2171(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_186;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_186:
			return 0;

		}

	}
	
Label_135:
	func_187(var_88_object, "Neutral");
	var_0_object->SetMessage(518569); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(518570, -1, 19680); //@t
	var_0_object->AddReply(518940, -1, 20051); //@t
	goto Label_157;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_2379(string var_39_string, int var_40_int)
{
	string var_42_string = "idle";
	if(var_40_int != 0)
		var_42_string += var_40_int;
	var_42_string = var_39_string;
}


void func_593(bool var_24_bool, string var_25_string, int var_26_int, bool var_27_bool)
{
	object var_35_object; cvector var_36_cvector; bool var_37_bool; bool var_38_bool; cvector var_39_cvector; cvector var_40_cvector; bool var_41_bool;
	@GetScene(var_35_object);
	
	for(;;) {
		var_35_object->GetLocator((var_25_string + (var_26_int + 1)), var_38_bool, var_39_cvector, var_40_cvector);
		if(!var_38_bool) { //@nz
			break;
		Label_631:
			for(;;) {
				var_48_float = GetByIndex(var_36_cvector, 0);
				var_49_float = GetByIndex(var_36_cvector, 2);
				@Rotate(var_48_float, var_49_float, var_41_bool);
				if(var_41_bool != 0)
					break;
				if(var_0_object != 0) {
					var_24_bool = false;
					return 14;
				}
			}
			var_24_bool = true;
			return 14;
		}
		var_40_cvector = var_36_cvector;
		@MovePoint(var_39_cvector, var_27_bool, var_37_bool);
		if(var_37_bool != 0) {
			int var_53_int; cvector var_54_cvector; cvector var_55_cvector;
			var_26_int = var_53_int;
			var_39_cvector = var_54_cvector;
			var_40_cvector = var_55_cvector;
			func_652();
			var_26_int += 1;
		} else if(var_0_object != 0) {
		var_24_bool = false;
		return 14;
		}
	}
	@WaitForAnimEnd(var_37_bool);
	var_46_bool = !var_37_bool; //@nz
	if(var_46_bool == 0) goto Label_631;
	if(var_0_object == 0) goto Label_631;
	var_24_bool = false;
	
}
EMIT "Stack[-7] = 0";


void func_2386(int var_33_int)
{
	int var_36_int; bool var_37_bool;
	var_36_int = 0;
	
	for(;;) {
		string var_39_string; int var_40_int;
		var_36_int = var_40_int;
		func_2379(var_39_string, var_40_int);
		@HasAnimation(var_37_bool, "all", var_39_string);
		if(!var_37_bool) //@nz
			break;
		var_36_int += 1;
	}
	var_36_int = var_33_int;
}


void func_1623(object var_60_object)
{
	cvector var_71_cvector; cvector var_72_cvector; cvector var_73_cvector; cvector var_74_cvector; string var_75_string; object var_76_object; bool var_77_bool; bool var_78_bool; float var_79_float; cvector var_80_cvector;
	if(var_60_object == null) {
		func_1714("fdie");
	} else {
		var_60_object->GetPosition(var_71_cvector);
		@GetPosition(var_72_cvector);
		@GetDirection(var_73_cvector);
		var_74_cvector = var_72_cvector - var_71_cvector;
		var_114_float = GetByIndex(var_74_cvector, 0);
		var_115_float = GetByIndex(var_73_cvector, 0);
		var_117_float = GetByIndex(var_74_cvector, 2);
		var_118_float = GetByIndex(var_73_cvector, 2);
		if(((var_114_float * var_115_float) + (var_117_float * var_118_float)) >= 0)
			var_75_string = "fdie";
		else
			var_75_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_60_object = var_76_object;
		var_125_bool = IsFuncExist(var_60_object, "GetScriptProperty", 2);
		if(var_125_bool != 0) {
			var_60_object->HasScriptProperty(var_77_bool, "Owner");
			if(var_77_bool != 0) {
				var_60_object->GetScriptProperty(var_76_object, "Owner");
				if(var_76_object == null)
					var_60_object = var_76_object;
			}
		}
		var_132_bool = IsFuncExist(var_76_object, "@GetEyesHeight", 1);
		if(var_132_bool != 0) {
			var_76_object->GetEyesHeight(var_79_float);
			var_80_cvector = [0.0, 0.0, 0.0];
			var_133_float = GetByIndex(var_80_cvector, 1);
			var_79_float = var_133_float;
			SetByIndex(var_80_cvector, 1) = var_133_float;
			@LookAsync(var_60_object, "head", var_80_cvector);
			var_78_bool = true;
		} else {
			var_78_bool = false;

		}
		string var_135_string;
		var_75_string = var_135_string;
		func_2202(var_135_string);
		@PlayAnimation("all", var_75_string);
		@WaitForAnimEnd();
		if(var_78_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_75_string);
		@RemoveEnvelope();
		var_76_object = null;
	}
	
}


void func_1879(bool var_43_bool, object var_44_object)
{
	bool var_46_bool;
	var_44_object->IsDead(var_46_bool);
	var_46_bool = var_43_bool;
}


void func_1884(bool var_32_bool, object var_33_object)
{
	if(var_33_object == null) {
		var_32_bool = false;
		return 4;
	}
	bool var_39_bool = false;
	var_42_bool = IsFuncExist(var_33_object, "IsDead", 1);
	if(var_42_bool != 0) {
		bool var_43_bool; object var_44_object;
		var_33_object = var_44_object;
		func_1879(var_43_bool, var_44_object);
		if(var_43_bool != 0)
			var_39_bool = true;
	}
	if(var_39_bool != 0) {
		var_32_bool = false;
		return 4;
	}
	object var_36_object;
	@GetScene(var_36_object);
	if(var_36_object == null) {
		var_32_bool = false;
		return 4;
	}
	object var_37_object;
	var_33_object->GetScene(var_37_object);
	if(var_36_object != var_37_object) {
		var_32_bool = false;
		return 4;
	}
	var_32_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1120(bool var_485_bool, float var_486_float)
{
	float var_489_float; bool var_490_bool;
	@rand(var_489_float);
	if(var_489_float < var_486_float) {

		for(;;) {
			@IsAnimationPlaying(var_490_bool);
			if(!var_490_bool) { //@nz
			} else {
				bool var_493_bool;
				func_1218(var_493_bool);
				if(var_493_bool != 0) {
					var_485_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_485_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1322(var_490_bool);
}


// @pe
void func_2403(void)
{
	@SetVariable("oob4boy1", 1);
}


// @pe
void func_2409(void)
{
	bool var_23_bool;
	func_2337(var_23_bool, "quest_b4_02", "boy_run");
}


void func_2154(void)
{
	bool var_164_bool;
	@CameraSwitchToNormal();
	bool var_165_bool;
	func_2377(var_165_bool);
	if(var_165_bool != 0) {
	} else {
		@HasAnimationTrack(var_164_bool, "head");
		if(var_164_bool == 0) goto Label_2170;
		@UnlookAsync("head");
	}
Label_2170:
	
}


// @pe
void func_2416(void)
{
	@SetVariable("oob4boy2", 1);
}


// @pe
void func_2422(bool var_94_bool)
{
	int var_96_int;
	func_2277(var_96_int, "oob4boy1");
	if(var_96_int == 0) {
		var_94_bool = true;
		return 0;
	}
	var_94_bool = false;
}


void func_2171(string var_124_string)
{
	float var_127_float; float var_128_float;
	@lshGetAnimTimes(var_124_string, var_127_float, var_128_float);
	@lshPlayAnimation(var_127_float, var_128_float, false);
}


void func_1147(object var_0_object, bool var_286_bool, float var_287_float)
{
	bool var_293_bool; cvector var_294_cvector; cvector var_295_cvector; cvector var_296_cvector; float var_297_float;
	
	for(;;) {
		@IsAnimationPlaying(var_293_bool);
		if(!var_293_bool) //@nz
			break;
		bool var_299_bool;
		func_1218(var_299_bool);
		if(var_299_bool != 0) {
			var_286_bool = true;
			return 10;
		}
		bool var_342_bool;
		func_1920(var_342_bool, var_0_object);
		if(!var_342_bool) { //@nz
			var_286_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_294_cvector); //@t
		@GetPFPosition(var_295_cvector);
		var_296_cvector = var_294_cvector - var_295_cvector;
		var_297_float = var_296_cvector | var_296_cvector;
		if(var_297_float < (var_287_float * var_287_float)) {
			bool var_347_bool; float var_348_float;
			var_287_float = var_348_float;
			func_983(var_296_cvector, var_297_float, var_347_bool, var_348_float);
			var_286_bool = true;
			return 10;
		}
		@sync();
	}
	func_1322(var_297_float);
	var_286_bool = false;
}


void func_1405(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_1571(var_15_object);
}


void func_1920(bool var_28_bool, object var_29_object)
{
	object var_33_object;
	var_29_object = var_33_object;
	bool var_32_bool;
	func_1884(var_32_bool, var_33_object);
	if(!var_32_bool) { //@nz
		var_28_bool = false;
		return 2;
	}
	bool var_50_bool; object var_51_object;
	func_1772(var_50_bool, var_51_object, "noaccess");
	if(!var_50_bool) { //@nz
		var_28_bool = true;
		return 2;
	}
	int var_31_int;
	var_51_object->GetProperty("noaccess", var_31_int);
	var_28_bool = var_31_int == 0;
}


void func_2178(string var_110_string, bool var_111_bool)
{
	float var_116_float; float var_117_float;
	@lshGetAnimTimes(var_110_string, var_116_float, var_117_float);
	@lshPlayAnimation(var_116_float, var_117_float, var_111_bool);
}


// @pe
void func_2434(bool var_135_bool)
{
	int var_137_int;
	func_2277(var_137_int, "oob4boy2");
	if(var_137_int == 0) {
		var_135_bool = true;
		return 0;
	}
	var_135_bool = false;
}


void func_646(object var_0_object)
{
	@Stop();
	@StopAnimation();
	var_0_object = true;
}


void func_2184(object var_19_object)
{
	float var_22_float;
	var_19_object->GetEyesHeight(var_22_float);
	cvector var_23_cvector = [0.0, 0.0, 0.0];
	var_24_float = GetByIndex(var_23_cvector, 1);
	var_22_float = var_24_float;
	SetByIndex(var_23_cvector, 1) = var_24_float;
	@LookAsync(var_19_object, "head", var_23_cvector);
}


// @pe
void func_652(void)
{
}


void func_909(object var_1_object, object var_2_object, bool var_4_bool)
{
	bool var_56_bool; bool var_57_bool; cvector var_58_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_56_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_56_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_57_bool, ("attack" + (var_2_object + 1)));
			if(!var_57_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_58_cvector, "all", "bjump");
		var_72_float = GetByIndex(var_58_cvector, 2);
		var_4_bool = -var_72_float;

	}
}


void func_654(object var_16_object)
{
	object var_23_object; object var_24_object;
	@GetScene(var_24_object);
	object var_25_object;
	func_2243(var_25_object);
	var_24_object->RemoveStationaryActor(var_25_object);
	
	for(;;) {
		object var_28_object;
		func_680(var_21_float, var_22_int, var_28_object, var_23_object, var_24_object, var_28_object, true, 180.0);
		@Sleep(1);
	}
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


void func_2446(int var_78_int)
{
	int var_80_int;
	@GetVariable("branch", var_80_int);
	if(var_80_int == 0) {
		var_78_int = 1;
		return 2;
	EMIT "GOTO 0x99d";
	}
	if(var_80_int == 1) {
		var_78_int = 2;
		return 2;
	}
	var_78_int = 3;
}


void func_2195(void)
{
	bool var_18_bool;
	func_2377(var_18_bool);
	if(var_18_bool != 0)
		@lshStopSpeech();
}


void func_1944(object var_32_object)
{
	string var_46_string;
	if(var_32_object == null)
		return 14;
	bool var_40_bool;
	@IsDead(var_40_bool);
	if(var_40_bool != 0)
		return 14;
	int var_41_int;
	@GetSecondaryAnimationType(var_41_int);
	if(var_41_int < 0)
		return 14;
	cvector var_42_cvector;
	var_32_object->GetPosition(var_42_cvector);
	cvector var_43_cvector;
	@GetPosition(var_43_cvector);
	cvector var_44_cvector;
	@GetDirection(var_44_cvector);
	cvector var_45_cvector = var_43_cvector - var_42_cvector;
	var_51_float = GetByIndex(var_45_cvector, 0);
	var_52_float = GetByIndex(var_44_cvector, 0);
	var_54_float = GetByIndex(var_45_cvector, 2);
	var_55_float = GetByIndex(var_44_cvector, 2);
	if(((var_51_float * var_52_float) + (var_54_float * var_55_float)) >= 0)
		var_46_string = "fhit";
	else
		var_46_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_46_string + "1"), (var_46_string + "2"), -10);
	
}


void func_2202(string var_83_string)
{
	bool var_92_bool; int var_93_int; bool var_94_bool; int var_95_int; bool var_96_bool; float var_97_float; cvector var_98_cvector; cvector var_99_cvector;
	@IsExisting3DSound(var_92_bool, var_83_string);
	if(!var_92_bool) { //@nz
		var_93_int = 0;

		for(;;) {
			@IsExisting3DSound(var_94_bool, (var_83_string + (var_93_int + 1)));
			if(!var_94_bool) { //@nz
				break;
			Label_2222:
				@irand(var_95_int, var_93_int);
				var_83_string += (var_95_int + 1);
	}
			@Is3DSoundLoaded(var_96_bool, var_83_string);
			if(var_96_bool != 0) {
				@GetEyesHeight(var_97_float);
				@GetDirection(var_98_cvector);
				var_99_cvector = var_98_cvector * 50;
				var_110_float = GetByIndex(var_99_cvector, 1);
				SetByIndex(var_99_cvector, 1) = (var_110_float + var_97_float);
				@PlayGlobalSound(var_83_string, var_99_cvector);
			}
		}
		var_93_int += 1;
	}
	var_105_bool = !var_93_int; //@nz
	if(var_105_bool == 0) goto Label_2222;
}


void func_2463(int var_20_int)
{
	int var_22_int;
	@GetVariable("branch", var_22_int);
	var_22_int = var_20_int;
}


// @pe
void func_674(float var_395_float)
{
	var_395_float = 0.03;
}


// @pe
void func_677(int var_402_int)
{
	var_402_int = 0;
}


void func_1190(object var_0_object, bool var_301_bool)
{
	cvector var_307_cvector; cvector var_308_cvector;
	bool var_312_bool;
	func_1920(var_312_bool, var_0_object);
	if(!var_312_bool) { //@nz
		var_301_bool = false;
		return 10;
	}
	bool var_315_bool;
	float var_311_float;
	func_1279(var_311_float, var_315_bool);
	if(var_315_bool != 0) {
		var_0_object->GetPFPosition(var_307_cvector); //@t
		@GetPFPosition(var_308_cvector);
		var_0_object->GetAttackDistance(var_311_float); //@t
		var_301_bool = ((var_307_cvector - var_308_cvector) | (var_307_cvector - var_308_cvector)) <= ((var_311_float + 50) * (var_311_float + 50));
		return 10;
	}
	var_301_bool = false;
}


// @pe
void func_2469(object var_19_object)
{
	int var_20_int;
	func_2463(var_20_int);
	if(var_20_int == 1)
		@WorkWithCorpse(var_19_object);
	else
		@Barter(var_19_object);
	
}


void func_680(object var_0_object, string var_3_string, bool var_5_bool, object var_28_object, bool var_29_bool, float var_30_float, bool var_135_bool, bool var_227_bool)
{
	float var_42_float; cvector var_43_cvector; cvector var_44_cvector; bool var_46_bool; float var_49_float; cvector var_50_cvector; bool var_51_bool; float var_52_float;
	func_909(var_50_cvector, var_51_bool, var_52_float);
	var_5_bool = 0;
	var_77_bool = IsFuncExist(var_28_object, "@GetAttackDistance", 1);
	if(var_77_bool != 0) {
		var_28_object->GetAttackDistance(var_42_float);
		var_42_float += 50;
	} else {
						var_30_float = var_42_float;
	}
	if(var_42_float >= 150)
		var_42_float = 150;
	var_3_string = false;
	var_0_object = var_28_object;
	bool var_45_bool;
	@IsPlayerActor(var_0_object, var_45_bool);
	if(var_45_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_83_object;
		func_2243(var_83_object);
		@SendPlayerEnemy(var_28_object, var_83_object);
	}
	if(var_29_bool != 0)
		var_46_bool = false;
	else
		var_46_bool = true;

	
Label_720:
	for(;;) {
		bool var_86_bool = false;
		bool var_87_bool;
		func_1920(var_87_bool, var_0_object);
		if(var_87_bool != 0) {
			if(!var_3_string) //@nz
				var_86_bool = true;
		}
		if(var_86_bool != 0) {
			func_1322(var_52_float);
			var_0_object->GetPFPosition(var_43_cvector); //@t
			@GetPFPosition(var_44_cvector);
			var_49_float = (var_43_cvector - var_44_cvector) | (var_43_cvector - var_44_cvector);
			if(var_49_float >= ((400.0 + var_42_float) * (400.0 + var_42_float))) {
				bool var_129_bool; float var_131_float;
				var_42_float = var_131_float;
				TaskCall(5);
				func_1342(var_137_bool, var_129_bool, var_0_object, var_131_float, 10000.0, true, false);
				TaskReturn();
				if(!var_135_bool) { //@nz
				} else {
					var_46_bool = false;
			} else {
			if(var_49_float >= (var_30_float * var_30_float)) {
				var_0_object->GetPFPosition(var_50_cvector); //@t
				@CanReachByPF(var_51_bool, var_50_cvector);
				if(!var_51_bool) { //@nz
					bool var_221_bool; float var_223_float;
					var_42_float = var_223_float;
					TaskCall(5);
					func_1342(var_229_bool, var_221_bool, var_0_object, var_223_float, 10000.0, true, false);
					TaskReturn();
					if(!var_227_bool) { //@nz
						goto Label_892;
					}
					var_46_bool = false;
					goto Label_720;
				}
				if(!var_46_bool) { //@nz
					func_2070(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1322(var_52_float);
					@StopAsync();
					var_46_bool = true;
					bool var_243_bool;
					func_1920(var_243_bool, var_0_object);
					if(!var_243_bool) { //@nz
						goto Label_892;
					}
				}
				@rand(var_52_float);
				bool var_246_bool;
				var_248_bool = var_52_float < 0.25;
				if(var_248_bool != 1) {
					bool var_249_bool;
					func_1279(true, var_249_bool);
					if(var_249_bool != 1)
						var_246_bool = false;
				}
				if(var_246_bool != 0) {
					@Face(var_0_object);
					func_1329();
					@PlayAnimation("all", "attack_stay");
					bool var_286_bool; float var_287_float;
					func_1147(var_52_float, var_286_bool, var_287_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1322(var_52_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_504_bool;
					func_1279(var_52_float, var_504_bool);
					var_505_bool = !var_504_bool; //@nz
					if(var_505_bool == 0) goto Label_882;
					bool var_506_bool;
					func_1920(var_506_bool, var_0_object);
					if(!var_506_bool) { //@nz
						goto Label_892;
					}
					var_0_object->GetPFPosition(var_43_cvector); //@t
					@GetPFPosition(var_44_cvector);
					if(!(((var_43_cvector - var_44_cvector) | (var_43_cvector - var_44_cvector)) < (var_287_float * var_287_float))) goto Label_882;
					bool var_511_bool; float var_512_float;
					var_30_float = var_512_float;
					func_983(var_51_bool, var_52_float, var_511_bool, var_512_float);
					var_513_bool = !var_511_bool; //@nz
					if(var_513_bool == 0) goto Label_882;
					goto Label_892;
			}
				bool var_514_bool; float var_515_float;
				var_30_float = var_515_float;
				func_983(var_51_bool, var_52_float, var_514_bool, var_515_float);
				if(!var_514_bool) { //@nz
					goto Label_892;
				}
				var_46_bool = true;

			}
		Label_882:
			goto Label_891;
			}
			Label_891:
			}
		}
	Label_892:
		@WaitForAnimEnd();
		if(var_3_string != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_45_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_1447(object var_0_object, object var_1_object, bool var_158_bool, object var_159_object, float var_160_float, float var_161_float, bool var_162_bool, bool var_163_bool)
{
	bool var_172_bool; object var_174_object; cvector var_175_cvector; cvector var_176_cvector; float var_178_float; object var_179_object;
	var_0_object = false;
	var_1_object = var_159_object;
	bool var_173_bool;
	var_163_bool = var_173_bool;
	
	for(;;) {
		bool var_180_bool; object var_181_object;
		var_159_object = var_181_object;
		func_1587(var_180_bool, var_181_object);
		if(!var_180_bool) { //@nz
			var_158_bool = false;
			return 16;
		}
		var_159_object->GetPosition(var_175_cvector);
		@GetPosition(var_176_cvector);
		var_178_float = (var_175_cvector - var_176_cvector) | (var_175_cvector - var_176_cvector);
		bool var_185_bool = false;
		if(var_161_float > 0) {
			if(var_178_float > (var_161_float * var_161_float))
				var_185_bool = true;
		}
		if(var_185_bool != 0) {
			@Stop();
			var_158_bool = false;
			return 16;
		}
		if(var_178_float > (var_160_float * var_160_float)) {
			var_159_object->GetPFPosition(var_175_cvector);
			@FindPathTo(var_179_object, var_175_cvector);
			if(var_179_object != null) {
				var_179_object = var_174_object;
				var_179_object = null;
			}
			if(var_174_object != null) {
				if(var_173_bool == 0) goto Label_1500;
				var_173_bool = false;
				@RotatePath(var_174_object, var_172_bool);
				if(!var_172_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_198_string;
						func_1594(var_198_string);
						string var_199_string;
						func_1596(var_199_string);
						@FollowPath(var_174_object, var_162_bool, var_172_bool, var_198_string, var_199_string);
						if(!var_172_bool) { //@nz
							if(var_0_object == 0) goto Label_1519;
							var_174_object = null;
						}
					EMIT "GOTO 0x5f0";

					Label_1519:
						} else {
					var_174_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_172_bool);
					if(!var_172_bool) { //@nz
						if(var_0_object != 0) {
							var_174_object = null;
							goto Label_1547;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1547;
		}
			var_179_object = null;
			goto Label_1545;

		Label_1545:
			var_174_object = null;

		}
	Label_1547:
		for(;;) {
			var_158_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_944(object var_0_object, float var_384_float, int var_385_int)
{
	object var_389_object; float var_390_float; float var_391_float;
	@GetVictim((var_384_float * 0.9), var_389_object);
	@ReportAttack(var_0_object);
	if(var_389_object == var_0_object) {
		float var_395_float; object var_396_object; int var_397_int;
		var_389_object = var_396_object;
		var_385_int = var_397_int;
		func_674(var_397_int);
		var_395_float = var_390_float;
		float var_398_float; object var_399_object; float var_400_float; int var_401_int;
		var_389_object = var_399_object;
		int var_402_int; object var_403_object; int var_404_int;
		var_389_object = var_403_object;
		var_385_int = var_404_int;
		func_677(var_404_int);
		var_402_int = var_401_int;
		func_1806(var_398_float, var_399_object, var_400_float, var_401_int);
		var_398_float = var_391_float;
		int var_459_int;
		func_1327(var_459_int);
		@ReportHit(var_0_object, var_459_int, var_391_float, var_400_float);
		object var_460_object; float var_461_float;
		var_389_object = var_460_object;
		var_391_float = var_461_float;
		func_1334();
	}
}
EMIT "Stack[-3] = 0";


// @pe
void func_1714(string var_82_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_83_string;
	var_82_string = var_83_string;
	func_2202(var_83_string);
	@PlayAnimation("all", var_82_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_82_string);
	@RemoveEnvelope();
}


// @pe
void func_2482(object var_58_object)
{
	object var_59_object;
	var_58_object = var_59_object;
	TaskCall(6);
	func_1598(var_59_object);
	TaskReturn();
}


// @pe
void func_187(object var_2_object, string var_106_string)
{
	bool var_107_bool;
	func_2377(var_107_bool);
	if(!var_107_bool) //@nz
		return 0;
	if(var_106_string == var_2_object)
		return 0;
	string var_110_string; bool var_111_bool;
	var_106_string = var_110_string;
	if(var_106_string == "")
		var_111_bool = false;
	else
		var_111_bool = true;
	func_2178(var_110_string, var_111_bool);
	var_2_object = var_106_string;
	
}


void func_1218(bool var_299_bool)
{
	bool var_300_bool = false;
	bool var_301_bool;
	func_1190(var_300_bool, var_301_bool);
	if(var_301_bool != 0) {
		bool var_318_bool;
		func_1234(var_299_bool, var_300_bool, var_318_bool);
		if(var_318_bool != 0)
			var_300_bool = true;
	}
	if(var_300_bool != 0) {
		var_299_bool = true;
		return 0;
	}
	var_299_bool = false;
}


void func_2243(object var_25_object)
{
	object var_27_object;
	@self(var_27_object);
	var_27_object = var_25_object;
}
EMIT "Stack[-1] = 0";


void func_1988(object var_19_object, int var_20_int, float var_21_float)
{
	cvector var_31_cvector; object var_32_object; int var_33_int; bool var_34_bool; cvector var_35_cvector; cvector var_36_cvector;
	bool var_40_bool = false;
	bool var_41_bool = false;
	if(var_19_object != 0) {
		if(var_20_int != 4)
			var_41_bool = true;
	}
	if(var_41_bool != 0) {
		if(var_20_int != 5)
			var_40_bool = true;
	}
	if(var_40_bool != 0) {
		cvector var_47_cvector; cvector var_48_cvector;
		cvector var_49_cvector; object var_50_object;
		var_19_object = var_50_object;
		func_1760(var_49_cvector, var_50_object);
		var_49_cvector = var_48_cvector;
		func_2249(var_47_cvector, var_48_cvector);
		var_47_cvector = var_31_cvector;
		@CreateVectorVector(var_32_object);
		var_33_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_33_int), var_34_bool, var_35_cvector, var_36_cvector);
			if(!var_34_bool) { //@nz
				break;
			Label_2050:
				var_32_object = null;
	}
			object var_109_object;
			var_19_object = var_109_object;
			func_1944(var_109_object);
		}
		if((var_36_cvector | var_31_cvector) >= 0.70710677)
			var_32_object->add(var_35_cvector);
		var_33_int += 1;
	}
	int var_37_int;
	var_32_object->size(var_37_int);
	if(var_37_int == 0) goto Label_2050;
	int var_38_int;
	@irand(var_38_int, var_37_int);
	cvector var_39_cvector;
	var_32_object->get(var_39_cvector, var_38_int);
	object var_64_object; int var_65_int; float var_66_float; cvector var_67_cvector; cvector var_68_cvector;
	var_19_object = var_64_object;
	var_20_int = var_65_int;
	var_21_float = var_66_float;
	var_39_cvector = var_67_cvector;
	var_68_cvector = -var_31_cvector;
	func_2056(var_66_float, var_67_cvector, var_68_cvector);
}


void func_2249(cvector var_47_cvector, cvector var_48_cvector)
{
	float var_56_float = sqrt(var_48_cvector | var_48_cvector);
	if(var_56_float < 0.000001)
		var_47_cvector = [0.0, 0.0, 0.0];
	var_47_cvector = var_48_cvector / var_56_float;
}


void func_1234(object var_0_object, bool var_4_bool, bool var_318_bool)
{
	object var_324_object; float var_326_float; cvector var_327_cvector; cvector var_328_cvector;
	@GetScene(var_324_object);
	bool var_325_bool = false;
	
	for(;;) {
		cvector var_329_cvector;
		func_1760(var_329_cvector, var_0_object);
		var_335_int = -var_329_cvector;
		@FindDirLength(var_326_float, var_335_int, var_4_bool);
		if(var_326_float < var_4_bool) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_327_cvector); //@t
				@GetPFPosition(var_328_cvector);
				@WaitForAnimEnd();
				func_1322(var_328_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_325_bool = true;
				bool var_340_bool;
				func_1190(var_328_cvector, var_340_bool);
				var_341_bool = !var_340_bool; //@nz
				if(var_341_bool == 0) goto Label_1275;
		}
		for(;;) {
			var_325_bool = var_318_bool;

		}

	Label_1275:
	}
}
EMIT "Stack[-5] = 0";


// @pe
void func_1746(string var_426_string, int var_427_int)
{
	if(var_427_int == 2) {
		var_426_string = "fire";
		return 0;
	EMIT "GOTO 0x6de";
	}
	if(var_427_int == 1) {
		var_426_string = "bullet";
		return 0;
	}
	var_426_string = "phys";
}


// @pe
void func_2259(float var_436_float, float var_437_float, float var_438_float)
{
	if(var_437_float < var_438_float)
		var_437_float = var_436_float;
	else
		var_438_float = var_436_float;
	
}


void func_471(void)
{
	int var_24_int; int var_25_int; bool var_26_bool; float var_27_float; bool var_28_bool;
	@WaitForAnimEnd();
	bool var_29_bool;
	func_2081(var_29_bool);
	if(!var_29_bool) //@nz
		return 14;
	int var_33_int;
	func_2386(var_33_int);
	int var_22_int;
	var_33_int = var_22_int;
	int var_23_int = 0;
	
	for(;;) {
		bool var_46_bool = false;
		if(var_23_int < 5) {
			bool var_49_bool;
			func_2081(var_49_bool);
			if(var_49_bool != 0)
				var_46_bool = true;
		}
		if(var_46_bool != 0) {
			@irand(var_24_int, 3);
			if(var_24_int == 0) {
				if(var_22_int == 0) goto Label_518;
				@irand(var_25_int, var_22_int);
				string var_55_string; int var_56_int;
				var_25_int = var_56_int;
				func_2379(var_55_string, var_56_int);
				@PlayAnimation("all", var_55_string);
				@WaitForAnimEnd(var_26_bool);
				if(!var_26_bool) { //@nz
				} else {
			} else {
			if(var_24_int == 1) {
				@rand(var_27_float, 4);
				@Sleep((var_27_float + 1), var_28_bool);
				if(!var_28_bool) { //@nz
					goto Label_547;
				}
			} else if(var_23_int != 0) {
				goto Label_547;
			}
			}
					bool var_58_bool;
					func_550(var_58_bool);
					var_59_bool = !var_58_bool; //@nz
					if(var_59_bool == 0) goto Label_542;
			}
		}
	Label_547:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_542:
		@ResetAAS();
		var_23_int += 1;
	}
	
}


void func_983(object var_0_object, object var_1_object, bool var_347_bool, float var_348_float)
{
	string var_356_string;
	func_1322(var_356_string);
	int var_353_int;
	@irand(var_353_int, var_1_object);
	@Face(var_0_object);
	@SetAttackState(true);
	func_2358();
	@PlayAnimation("all", ("attack_begin" + (var_353_int + 1)));
	@WaitForAnimEnd();
	int var_355_int;
	func_1290(var_355_int, var_356_string);
	bool var_381_bool;
	func_1920(var_381_bool, var_0_object);
	if(!var_381_bool) { //@nz
		@StopAsync();
		var_347_bool = false;
		return 8;
	}
	float var_384_float; int var_385_int;
	var_348_float = var_384_float;
	var_353_int = var_385_int;
	func_944(var_356_string, var_384_float, var_385_int);
	bool var_354_bool;
	@HasAnimation(var_354_bool, "all", ("attack_middle" + var_353_int));
	if(var_354_bool != 0) {
		func_2358();
		@PlayAnimation("all", ("attack_middle" + var_353_int));
		@WaitForAnimEnd();
		func_1322(var_356_string);
		bool var_469_bool;
		func_1920(var_469_bool, var_0_object);
		if(!var_469_bool) { //@nz
			@StopAsync();
			var_347_bool = false;
			return 8;
		}
		float var_472_float; int var_473_int;
		var_348_float = var_472_float;
		func_944(var_356_string, var_472_float, var_473_int);
		var_355_int = 1;

		for(;;) {
			var_356_string = (("attack_middle" + var_473_int) + "_") + var_355_int;
			@HasAnimation(var_354_bool, "all", var_356_string);
			if(!var_354_bool) { //@nz
			} else {
				func_2358();
				@PlayAnimation("all", var_356_string);
				@WaitForAnimEnd();
				func_1322(var_356_string);
				bool var_495_bool;
				func_1920(var_495_bool, var_0_object);
				if(!var_495_bool) { //@nz
					@StopAsync();
					var_347_bool = false;
					return 8;
				}
				float var_498_float; int var_499_int;
				var_348_float = var_498_float;
				var_353_int = var_499_int;
				func_944(var_356_string, var_498_float, var_499_int);
				var_355_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_353_int));
		bool var_484_bool;
		func_1336(var_484_bool);
		if(var_484_bool != 0) {
			bool var_485_bool;
			func_1120(var_485_bool, 0.75);
			@StopAsync();
		}
		var_347_bool = true;
		return 8;

	}
}


// @pe
void func_2266(float var_49_float, float var_50_float, float var_51_float, float var_52_float)
{
	if(var_50_float < var_51_float) {
		var_51_float = var_49_float;
		return 0;
	}
	if(var_50_float > var_52_float) {
		var_52_float = var_49_float;
		return 0;
	}
	var_50_float = var_49_float;
}


void func_1760(cvector var_49_cvector, object var_50_object)
{
	cvector var_53_cvector;
	@GetPosition(var_53_cvector);
	cvector var_54_cvector;
	var_50_object->GetPosition(var_54_cvector);
	var_49_cvector = var_54_cvector - var_53_cvector;
}


void func_2277(int var_96_int, string var_97_string)
{
	int var_99_int;
	@GetVariable(var_97_string, var_99_int);
	var_99_int = var_96_int;
}


void func_1767(bool var_16_bool, object var_17_object)
{
	bool var_19_bool;
	@IsPlayerActor(var_17_object, var_19_bool);
	var_19_bool = var_16_bool;
}


// @pe
void func_2282(bool var_20_bool, object var_21_object, float var_22_float)
{
	if(!var_21_object) { //@nz
		var_20_bool = false;
		return 0;
	}
	if(var_22_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_22_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_27_float;
		var_22_float = var_27_float;
		func_2327(var_27_float);
		bool var_31_bool; object var_32_object; float var_34_float;
		var_21_object = var_32_object;
		var_22_float = var_34_float;
		func_1784(var_31_bool, var_32_object, "reputation", var_34_float, (float)0, (float)1);
		var_20_bool = true;
		return 0;

	}
	
	var_20_bool = false;
}


void func_1772(bool var_39_bool, object var_40_object, string var_41_string)
{
	var_46_bool = IsFuncExist(var_40_object, "HasProperty", 2);
	if(!var_46_bool) { //@nz
		var_39_bool = false;
		return 2;
	}
	bool var_43_bool;
	var_40_object->HasProperty(var_41_string, var_43_bool);
	var_43_bool = var_39_bool;
}


void func_1784(bool var_31_bool, object var_32_object, string var_33_string, float var_34_float, float var_35_float, float var_36_float)
{
	object var_40_object;
	var_32_object = var_40_object;
	string var_41_string;
	var_33_string = var_41_string;
	bool var_39_bool;
	func_1772(var_39_bool, var_40_object, var_41_string);
	if(!var_39_bool) //@nz
		var_31_bool = false;
	float var_38_float;
	var_32_object->GetProperty(var_33_string, var_38_float);
	float var_49_float; float var_51_float; float var_52_float;
	var_35_float = var_51_float;
	var_36_float = var_52_float;
	func_2266(var_49_float, (var_38_float + var_34_float), var_51_float, var_52_float);
	var_32_object->SetProperty(var_33_string, var_49_float);
	var_31_bool = true;
}


void func_1279(object var_0_object, bool var_249_bool)
{
	bool var_251_bool;
	var_254_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_254_bool != 0) {
		var_0_object->IsAttacking(var_251_bool); //@t
		var_251_bool = var_249_bool;
	}
	var_249_bool = false;
}


