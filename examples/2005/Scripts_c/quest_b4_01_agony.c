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
		func_259(var_5_bool);
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
				func_281(var_14_bool, 0.33333334);
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
				func_15();
				goto Label_89;
			EMIT "GOTO 0x58";

			Label_89:
				for(;;) {
					@Hold();
				}
			}
			if(var_0_int < 0) {
				goto Label_89;
			}
		}
	}
	EMIT "Return(); Pop(2)";

	// @pe
	void OnUse(int var_0_int, object var_1_object)
	{
	}

	void OnDeath(int var_0_int, object var_1_object)
	{
		bool var_5_bool;
		if(var_0_int != 0) {
		}
		bool var_4_bool;
		@IsPlayerActor(var_1_object, var_4_bool);
		if(var_4_bool != 0) {
			@IsDead(var_5_bool);
			if(!var_5_bool) { //@nz
				@SetDeathState();
				var_0_int = -1;
				bool var_9_bool; object var_10_object;
				var_1_object = var_10_object;
				func_286(var_9_bool, var_10_object, -0.3);
				@PlayGlobalSound("death", [0.0, 40.0, 0.0]);
				@PlayAnimation("all", "agony_die");
				@WaitForAnimEnd();
				@LockAnimationEnd("all", "agony_die");
			}
		}
	}

	// @pe
	void OnUnload(int var_0_int)
	{
		func_371();
		func_164();
		if(var_0_int != 0) {
			object var_6_object;
			func_264(var_6_object);
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
		func_331();
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
	func_245(var_9_float, var_10_cvector, var_11_cvector);
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
			func_264(var_8_object);
			@RemoveActor(var_8_object);
		}
	}
}


void OnUnload(int var_0_int)
{
	var_1_bool = GlobalVars[0];
	if(var_1_bool != 0) {
		object var_2_object;
		func_264(var_2_object);
		@RemoveActor(var_2_object);
	}
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_9_bool;
	func_259(var_9_bool);
	if(!var_9_bool) goto Label_0; //@nz
}


void func_321(float var_16_float)
{
	object var_18_object;
	@CreateFloatVector(var_18_object);
	var_18_object->add(var_16_float);
	@SendWorldWndMessage(16, var_18_object);
}
EMIT "Stack[-1] = 0";


void func_259(bool var_5_bool)
{
	bool var_7_bool;
	@IsLoaded(var_7_bool);
	var_7_bool = var_5_bool;
}


void func_164(void)
{
	@StopAnimation();
}


void func_167(bool var_28_bool, object var_29_object, string var_30_string)
{
	var_35_bool = IsFuncExist(var_29_object, "HasProperty", 2);
	if(!var_35_bool) { //@nz
		var_28_bool = false;
		return 2;
	}
	bool var_32_bool;
	var_29_object->HasProperty(var_30_string, var_32_bool);
	var_32_bool = var_28_bool;
}


void func_264(object var_2_object)
{
	object var_4_object;
	@self(var_4_object);
	var_4_object = var_2_object;
}
EMIT "Stack[-1] = 0";


void func_201(object var_18_object)
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


// @pe
void func_270(float var_38_float, float var_39_float, float var_40_float, float var_41_float)
{
	if(var_39_float < var_40_float) {
		var_40_float = var_38_float;
		return 0;
	}
	if(var_39_float > var_41_float) {
		var_41_float = var_38_float;
		return 0;
	}
	var_39_float = var_38_float;
}


void func_15(void)
{
}


void func_179(bool var_20_bool, object var_21_object, string var_22_string, float var_23_float, float var_24_float, float var_25_float)
{
	object var_29_object;
	var_21_object = var_29_object;
	string var_30_string;
	var_22_string = var_30_string;
	bool var_28_bool;
	func_167(var_28_bool, var_29_object, var_30_string);
	if(!var_28_bool) //@nz
		var_20_bool = false;
	float var_27_float;
	var_21_object->GetProperty(var_22_string, var_27_float);
	float var_38_float; float var_40_float; float var_41_float;
	var_24_float = var_40_float;
	var_25_float = var_41_float;
	func_270(var_38_float, (var_27_float + var_23_float), var_40_float, var_41_float);
	var_21_object->SetProperty(var_22_string, var_38_float);
	var_20_bool = true;
}


void func_245(object var_7_object, cvector var_10_cvector, cvector var_11_cvector)
{
	object var_14_object;
	@GetScene(var_14_object);
	object var_15_object;
	@AddActorByType(var_15_object, "scripted", var_14_object, var_10_cvector, var_11_cvector, "blood_dir.xml");
	object var_18_object;
	var_7_object = var_18_object;
	func_201(var_18_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_281(bool var_14_bool, float var_15_float)
{
	float var_17_float;
	@rand(var_17_float);
	var_14_bool = var_17_float < var_15_float;
}


// @pe
void func_286(bool var_9_bool, object var_10_object, float var_11_float)
{
	if(!var_10_object) { //@nz
		var_9_bool = false;
		return 0;
	}
	if(var_11_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_11_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_16_float;
		var_11_float = var_16_float;
		func_321(var_16_float);
		bool var_20_bool; object var_21_object; float var_23_float;
		var_10_object = var_21_object;
		var_11_float = var_23_float;
		func_179(var_20_bool, var_21_object, "reputation", var_23_float, (float)0, (float)1);
		var_9_bool = true;
		return 0;

	}
	
	var_9_bool = false;
}


