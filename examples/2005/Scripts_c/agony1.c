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
		@SetProperty("agony", 0.5);
		func_25(var_0_int);
	}

	void OnUse(int var_0_int, object var_1_object)
	{
		bool var_7_bool; bool var_8_bool; float var_9_float; bool var_10_bool; float var_11_float;
		@IsDead(var_7_bool);
		if(var_7_bool != 0) {
			@IsOverrideActive(var_8_bool);
			if(!var_8_bool) //@nz
				@Barter(var_1_object);
		} else {
			@GetProperty("agony", var_9_float);
			if(var_9_float == 0) {
			}
			@IsOverrideActive(var_10_bool);
			var_17_bool = !var_10_bool; //@nz
			if(var_17_bool == 0) goto Label_144;
			object var_21_object;
			func_342(var_21_object);
			@ShowWindow("agony.xml", true, false, var_21_object);
			@GetProperty("agony", var_11_float);
			if(!(var_11_float < 0.001)) goto Label_144;
			bool var_27_bool; object var_28_object;
			var_1_object = var_28_object;
			func_369(var_27_bool, var_28_object, 0.2);
		}
	Label_144:
	
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
				func_369(var_9_bool, var_10_object, -0.3);
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
		func_463();
		func_216();
		if(var_0_int != 0) {
			object var_6_object;
			func_342(var_6_object);
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
		func_423();
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
	func_297(var_9_float, var_10_cvector, var_11_cvector);
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
			func_342(var_8_object);
			@RemoveActor(var_8_object);
		}
	}
}


void OnUnload(int var_0_int)
{
	var_1_bool = GlobalVars[0];
	if(var_1_bool != 0) {
		object var_2_object;
		func_342(var_2_object);
		@RemoveActor(var_2_object);
	}
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_11_bool;
	func_311(var_11_bool);
	if(!var_11_bool) goto Label_0; //@nz
}


void func_528(int var_56_int, string var_57_string)
{
	int var_59_int;
	@GetInvItemByName(var_59_int, var_57_string);
	var_59_int = var_56_int;
}


void func_404(float var_16_float)
{
	object var_18_object;
	@CreateFloatVector(var_18_object);
	var_18_object->add(var_16_float);
	@SendWorldWndMessage(16, var_18_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_21(void)
{
	func_502();
}


void func_25(int var_0_int)
{
	bool var_4_bool;
	var_0_int = 0;
	@RemoveEnvelope();
	@SetRTEnvelope(50, 40);
	bool var_7_bool;
	func_311(var_7_bool);
	if(!var_7_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	for(;;) {
		@Is3DSoundLoaded(var_4_bool, "agony");
		bool var_14_bool = false;
		if(var_4_bool != 0) {
			bool var_16_bool;
			func_359(var_16_bool, 0.33333334);
			if(var_16_bool != 0)
				var_14_bool = true;
		}
		if(var_14_bool != 0)
			@PlayGlobalSound("agony", [0.0, 40.0, 0.0]);
		@PlayAnimation("all", "agony");
		@WaitForAnimEnd(var_4_bool);
		if(var_0_int > 0) {
			if(var_4_bool != 0) {
				@PlayGlobalSound("sleep", [0.0, 40.0, 0.0]);
				@PlayAnimation("all", "agony_sleep");
				@WaitForAnimEnd();
				@LockAnimationEnd("all", "agony_sleep");
			}
			@SetDeathState();
			func_21();
			goto Label_98;
		EMIT "GOTO 0x61";

		Label_98:
			for(;;) {
				@Hold();
			}
		}
		if(var_0_int < 0) {
			goto Label_98;
		}
	}
}
EMIT "Return(); Pop(2)";


void func_414(int var_38_int)
{
	float var_40_float;
	@GetGameTime(var_40_float);
	var_38_int = 1 + (var_40_float / 24);
}


void func_297(object var_7_object, cvector var_10_cvector, cvector var_11_cvector)
{
	object var_14_object;
	@GetScene(var_14_object);
	object var_15_object;
	@AddActorByType(var_15_object, "scripted", var_14_object, var_10_cvector, var_11_cvector, "blood_dir.xml");
	object var_18_object;
	var_7_object = var_18_object;
	func_253(var_18_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_311(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_316(string var_79_string, int var_80_int, int var_81_int)
{
	bool var_83_bool;
	int var_85_int;
	var_80_int = var_85_int;
	int var_86_int;
	var_81_int = var_86_int;
	bool var_84_bool;
	func_364(var_84_bool, var_85_int, var_86_int);
	if(var_84_bool != 0)
		@AddItem(var_83_bool, var_79_string, 0);
}


void func_327(string var_63_string, int var_64_int, int var_65_int, int var_66_int)
{
	int var_69_int; bool var_70_bool;
	int var_72_int;
	var_64_int = var_72_int;
	int var_73_int;
	var_65_int = var_73_int;
	bool var_71_bool;
	func_364(var_71_bool, var_72_int, var_73_int);
	if(var_71_bool != 0) {
		@irand(var_69_int, var_66_int);
		@AddItem(var_70_bool, var_63_string, 0, (var_69_int + 1));
	}
}


void func_342(object var_2_object)
{
	object var_4_object;
	@self(var_4_object);
	var_4_object = var_2_object;
}
EMIT "Stack[-1] = 0";


void func_471(int var_35_int, int var_36_int)
{
	if(var_35_int > var_36_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_48_int = 0;
	if(var_35_int != var_36_int) {
		@irand(var_48_int, (var_36_int - var_35_int));
	} else if(var_35_int == 0) {
		return 4;
	}
	var_48_int += var_35_int;
	if(var_48_int == 0)
		return 4;
	int var_56_int;
	func_528(var_56_int, "Money");
	bool var_49_bool;
	@AddItem(var_49_bool, var_56_int, 0, var_48_int);
	
}


void func_216(void)
{
	@StopAnimation();
}


void func_219(bool var_28_bool, object var_29_object, string var_30_string)
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


// @pe
void func_348(float var_38_float, float var_39_float, float var_40_float, float var_41_float)
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


void func_359(bool var_16_bool, float var_17_float)
{
	float var_19_float;
	@rand(var_19_float);
	var_16_bool = var_19_float < var_17_float;
}


void func_231(bool var_20_bool, object var_21_object, string var_22_string, float var_23_float, float var_24_float, float var_25_float)
{
	object var_29_object;
	var_21_object = var_29_object;
	string var_30_string;
	var_22_string = var_30_string;
	bool var_28_bool;
	func_219(var_28_bool, var_29_object, var_30_string);
	if(!var_28_bool) //@nz
		var_20_bool = false;
	float var_27_float;
	var_21_object->GetProperty(var_22_string, var_27_float);
	float var_38_float; float var_40_float; float var_41_float;
	var_24_float = var_40_float;
	var_25_float = var_41_float;
	func_348(var_38_float, (var_27_float + var_23_float), var_40_float, var_41_float);
	var_21_object->SetProperty(var_22_string, var_38_float);
	var_20_bool = true;
}


void func_364(bool var_71_bool, int var_72_int, int var_73_int)
{
	int var_75_int;
	@irand(var_75_int, var_73_int);
	var_71_bool = var_75_int < var_72_int;
}


// @pe
void func_369(bool var_9_bool, object var_10_object, float var_11_float)
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
		func_404(var_16_float);
		bool var_20_bool; object var_21_object; float var_23_float;
		var_10_object = var_21_object;
		var_11_float = var_23_float;
		func_231(var_20_bool, var_21_object, "reputation", var_23_float, (float)0, (float)1);
		var_9_bool = true;
		return 0;

	}
	
	var_9_bool = false;
}


void func_502(void)
{
	int var_38_int;
	func_414(var_38_int);
	func_471(0, (10 + (var_38_int * 100)));
	func_327("bottle_water", 1, 4, 4);
	func_316("lockpick", 1, 6);
}


void func_253(object var_18_object)
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


