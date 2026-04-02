// @GLOBALS: 0:bool:

task task_0
{
	void OnLoad(int var_0_int)
	{
		@StopGroup0();
		@sync();
	}

}


maintask task_1
{
	void init(int var_0_int)
	{
		bool var_2_bool;
		var_0_int = 0;
		@RemoveEnvelope();
		@SetRTEnvelope(50, 40);
		bool var_5_bool;
		func_270(var_5_bool);
		if(!var_5_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			@Is3DSoundLoaded(var_2_bool, "agony");
			bool var_12_bool = false;
			if(var_2_bool != 0) {
				bool var_14_bool;
				func_292(var_14_bool, 0.33333334);
				if(var_14_bool != 0)
					var_12_bool = true;
			}
			if(var_12_bool != 0)
				@PlayGlobalSound("agony", [0.0, 40.0, 0.0]);
			@PlayAnimation("all", "agony");
			@WaitForAnimEnd(var_2_bool);
			if(var_0_int > 0) {
				if(var_2_bool != 0) {
					@PlayGlobalSound("sleep", [0.0, 40.0, 0.0]);
					@PlayAnimation("all", "agony_sleep");
					@WaitForAnimEnd();
					@LockAnimationEnd("all", "agony_sleep");
				}
				@SetDeathState();
				func_26();
				goto Label_100;
			EMIT "GOTO 0x63";

			Label_100:
				for(;;) {
					@Hold();
				}
			}
			if(var_0_int < 0) {
				goto Label_100;
			}
		}
	}
	EMIT "Return(); Pop(2)";

	// @pe
	void OnUse(int var_0_int, object var_1_object)
	{
	}

	// @pe
	void OnDeath(int var_0_int, object var_1_object)
	{
		bool var_2_bool;
		func_342(var_2_bool, "quest_b1_02", "agony_dead");
		object var_8_object;
		func_104(var_8_object, var_8_object);
	}

	// @pe
	void OnUnload(int var_0_int)
	{
		func_394();
		func_175();
		if(var_0_int != 0) {
			object var_6_object;
			func_275(var_6_object);
			@RemoveActor(var_6_object);
		}
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnPropertyChange(int var_0_int, object var_1_object, string var_2_string)
	{
		float var_4_float;
		if(var_2_string == "agony") {
			@GetProperty("agony", var_4_float);
			if(var_4_float < 0.001)
				var_0_int = 1;
		}
		object var_10_object; string var_11_string;
		var_1_object = var_10_object;
		var_2_string = var_11_string;
		func_354();
	}

}


void OnPropertyChange(int var_0_int, object var_1_object, string var_2_string)
{
	float var_4_float;
	if(var_2_string == "health") {
		@GetProperty("health", var_4_float);
		if(var_4_float <= 0)
			@SignalDeath(var_1_object);
	}
}


// @pe
void OnHit2(int var_0_int, object var_1_object, int var_2_int, float var_3_float, float var_4_float, cvector var_5_cvector, cvector var_6_cvector)
{
	object var_7_object;
	var_1_object = var_7_object;
	int var_8_int;
	var_2_int = var_8_int;
	float var_9_float;
	var_3_float = var_9_float;
	cvector var_10_cvector;
	var_5_cvector = var_10_cvector;
	cvector var_11_cvector;
	var_6_cvector = var_11_cvector;
	func_256(var_9_float, var_10_cvector, var_11_cvector);
}


void OnTrigger(int var_0_int, string var_1_string)
{
	bool var_3_bool;
	if(var_1_string == "cleanup") {
		var_6_bool = GlobalVars[0];
		GlobalVars[0] = true;
		@IsLoaded(var_3_bool);
		if(!var_3_bool) { //@nz
			object var_8_object;
			func_275(var_8_object);
			@RemoveActor(var_8_object);
		}
	}
}


void OnUnload(int var_0_int)
{
	var_1_bool = GlobalVars[0];
	if(var_1_bool != 0) {
		object var_2_object;
		func_275(var_2_object);
		@RemoveActor(var_2_object);
	}
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_9_bool;
	func_270(var_9_bool);
	if(!var_9_bool) goto Label_0; //@nz
}


void func_256(object var_7_object, cvector var_10_cvector, cvector var_11_cvector)
{
	object var_14_object;
	@GetScene(var_14_object);
	object var_15_object;
	@AddActorByType(var_15_object, "scripted", var_14_object, var_10_cvector, var_11_cvector, "blood_dir.xml");
	object var_18_object;
	var_7_object = var_18_object;
	func_212(var_18_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_292(bool var_14_bool, float var_15_float)
{
	float var_17_float;
	@rand(var_17_float);
	var_14_bool = var_17_float < var_15_float;
}


void func_104(int var_0_int, object var_8_object)
{
	bool var_12_bool;
	if(var_0_int != 0) {
	}
	bool var_11_bool;
	@IsPlayerActor(var_8_object, var_11_bool);
	if(var_11_bool != 0) {
		@IsDead(var_12_bool);
		if(!var_12_bool) { //@nz
			@SetDeathState();
			var_0_int = -1;
			bool var_16_bool; object var_17_object;
			var_8_object = var_17_object;
			func_297(var_16_bool, var_17_object, -0.3);
			@PlayGlobalSound("death", [0.0, 40.0, 0.0]);
			@PlayAnimation("all", "agony_die");
			@WaitForAnimEnd();
			@LockAnimationEnd("all", "agony_die");
		}
	}
}


// @pe
void func_297(bool var_16_bool, object var_17_object, float var_18_float)
{
	if(!var_17_object) { //@nz
		var_16_bool = false;
		return 0;
	}
	if(var_18_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_18_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_23_float;
		var_18_float = var_23_float;
		func_332(var_23_float);
		bool var_27_bool; object var_28_object; float var_30_float;
		var_17_object = var_28_object;
		var_18_float = var_30_float;
		func_190(var_27_bool, var_28_object, "reputation", var_30_float, (float)0, (float)1);
		var_16_bool = true;
		return 0;

	}
	
	var_16_bool = false;
}


void func_332(float var_23_float)
{
	object var_25_object;
	@CreateFloatVector(var_25_object);
	var_25_object->add(var_23_float);
	@SendWorldWndMessage(16, var_25_object);
}
EMIT "Stack[-1] = 0";


void func_270(bool var_5_bool)
{
	bool var_7_bool;
	@IsLoaded(var_7_bool);
	var_7_bool = var_5_bool;
}


void func_175(void)
{
	@StopAnimation();
}


void func_178(bool var_35_bool, object var_36_object, string var_37_string)
{
	var_42_bool = IsFuncExist(var_36_object, "HasProperty", 2);
	if(!var_42_bool) { //@nz
		var_35_bool = false;
		return 2;
	}
	bool var_39_bool;
	var_36_object->HasProperty(var_37_string, var_39_bool);
	var_39_bool = var_35_bool;
}


void func_275(object var_2_object)
{
	object var_4_object;
	@self(var_4_object);
	var_4_object = var_2_object;
}
EMIT "Stack[-1] = 0";


void func_212(object var_18_object)
{
	string var_32_string;
	if(var_18_object == null)
		return 14;
	bool var_26_bool;
	@IsDead(var_26_bool);
	if(var_26_bool != 0)
		return 14;
	int var_27_int;
	@GetSecondaryAnimationType(var_27_int);
	if(var_27_int < 0)
		return 14;
	cvector var_28_cvector;
	var_18_object->GetPosition(var_28_cvector);
	cvector var_29_cvector;
	@GetPosition(var_29_cvector);
	cvector var_30_cvector;
	@GetDirection(var_30_cvector);
	cvector var_31_cvector = var_29_cvector - var_28_cvector;
	var_37_float = GetByIndex(var_31_cvector, 0);
	var_38_float = GetByIndex(var_30_cvector, 0);
	var_40_float = GetByIndex(var_31_cvector, 2);
	var_41_float = GetByIndex(var_30_cvector, 2);
	if(((var_37_float * var_38_float) + (var_40_float * var_41_float)) >= 0)
		var_32_string = "fhit";
	else
		var_32_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_32_string + "1"), (var_32_string + "2"), -10);
	
}


void func_342(bool var_2_bool, string var_3_string, string var_4_string)
{
	object var_6_object;
	@FindActor(var_6_object, var_3_string);
	if(var_6_object == null)
		var_2_bool = false;
	@Trigger(var_6_object, var_4_string);
	var_2_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_281(float var_45_float, float var_46_float, float var_47_float, float var_48_float)
{
	if(var_46_float < var_47_float) {
		var_47_float = var_45_float;
		return 0;
	}
	if(var_46_float > var_48_float) {
		var_48_float = var_45_float;
		return 0;
	}
	var_46_float = var_45_float;
}


void func_26(void)
{
}


void func_190(bool var_27_bool, object var_28_object, string var_29_string, float var_30_float, float var_31_float, float var_32_float)
{
	object var_36_object;
	var_28_object = var_36_object;
	string var_37_string;
	var_29_string = var_37_string;
	bool var_35_bool;
	func_178(var_35_bool, var_36_object, var_37_string);
	if(!var_35_bool) //@nz
		var_27_bool = false;
	float var_34_float;
	var_28_object->GetProperty(var_29_string, var_34_float);
	float var_45_float; float var_47_float; float var_48_float;
	var_31_float = var_47_float;
	var_32_float = var_48_float;
	func_281(var_45_float, (var_34_float + var_30_float), var_47_float, var_48_float);
	var_28_object->SetProperty(var_29_string, var_45_float);
	var_27_bool = true;
}


