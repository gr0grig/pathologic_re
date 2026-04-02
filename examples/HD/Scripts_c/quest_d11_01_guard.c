// @GLOBALS: 0:object:

task task_0
{
	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector)
	{
		func_24();
		object var_10_object;
		var_8_cvector = var_10_object;
		func_1640();
	}

	// @pe
	void OnHear(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector)
	{
		if(var_8_cvector == actor) {
			@KillTimer(100);
			@Face(actor);
		}
	}

	// @pe
	void OnStopHear(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector)
	{
		if(var_8_cvector == actor) {
			@SetTimer(100, 3.0);
			func_1327(actor);
		}
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, object var_97_object)
		{
		object var_99_object;
		var_97_object = var_99_object;
			bool var_98_bool;
		func_1177(var_98_bool, var_99_object);
		if(!var_98_bool) { //@nz
			object var_127_object;
			var_97_object = var_127_object;
			func_1812(var_127_object);
		}
		func_24();
		object var_143_object;
		var_97_object = var_143_object;
		func_1836(var_143_object);
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector)
	{
		object var_12_object;
		var_8_bool = var_12_object;
		object var_13_object;
		var_9_cvector = var_13_object;
		bool var_14_bool;
		var_10_cvector = var_14_bool;
		bool var_11_bool;
		func_1984(var_11_bool, var_12_object, var_13_object, var_14_bool);
		if(var_11_bool != 0) {
			object var_97_object;
			var_8_bool = var_97_object;
			func_62();
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector)
	{
		object var_10_object;
		var_8_cvector = var_10_object;
		bool var_9_bool;
		func_1956(var_9_bool, var_10_object);
		if(var_9_bool != 0) {
			func_24();
			object var_129_object;
			var_8_cvector = var_129_object;
			func_1978(var_129_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, int var_1_int, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector)
	{
		if(var_8_cvector != 100) {
		}
		@KillTimer(100);
		@StopGroup0();
	}

}


task task_1
{
	// @pe
		void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, object var_97_object)
		{
		object var_99_object;
		var_97_object = var_99_object;
			bool var_98_bool;
		func_1177(var_98_bool, var_99_object);
		if(!var_98_bool) { //@nz
			object var_127_object;
			var_97_object = var_127_object;
			func_1812(var_127_object);
		}
		func_274();
		object var_142_object;
		var_97_object = var_142_object;
		func_1836(var_142_object);
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector)
	{
		object var_12_object;
		var_8_bool = var_12_object;
		object var_13_object;
		var_9_cvector = var_13_object;
		bool var_14_bool;
		var_10_cvector = var_14_bool;
		bool var_11_bool;
		func_1984(var_11_bool, var_12_object, var_13_object, var_14_bool);
		if(var_11_bool != 0) {
			object var_97_object;
			var_8_bool = var_97_object;
			func_241();
		}
	}

	// @pe
	void OnDeath(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector)
	{
		func_274();
		object var_9_object;
		var_8_cvector = var_9_object;
		func_1640();
	}

}


task task_2
{
	// @pe
	void OnHear(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, cvector var_7_cvector, cvector var_8_cvector)
	{
		bool var_9_bool = false;
		if(var_2_bool != 0) {
			if(var_8_cvector == actor)
				var_9_bool = true;
		}
		if(var_9_bool != 0)
			func_1327(actor);
	}

	// @pe
	void OnSee(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, cvector var_7_cvector, cvector var_8_cvector)
	{
		bool var_9_bool = false;
		if(var_2_bool != 0) {
			if(var_8_cvector == actor)
				var_9_bool = true;
		}
		if(var_9_bool != 0) {
			@Trace("@Stop hunt");
			@StopAnimation();
			@StopGroup0();
		}
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, object var_97_object)
		{
		object var_99_object;
		var_97_object = var_99_object;
			bool var_98_bool;
		func_1177(var_98_bool, var_99_object);
		if(!var_98_bool) //@nz
			return 0;
		object var_127_object;
		var_97_object = var_127_object;
		func_1812(var_127_object);
		if(var_97_object == actor) {
			var_1_object = null;
		} else {
			var_1_object = var_97_object;
			if(var_2_bool == 0) goto Label_617;
			@StopAnimation();
			@StopGroup0();
		}
	Label_617:
	
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector)
	{
		object var_12_object;
		var_8_bool = var_12_object;
		object var_13_object;
		var_9_cvector = var_13_object;
		bool var_14_bool;
		var_10_cvector = var_14_bool;
		bool var_11_bool;
		func_1984(var_11_bool, var_12_object, var_13_object, var_14_bool);
		if(var_11_bool != 0) {
			object var_97_object;
			var_8_bool = var_97_object;
			func_594();
		}
	}

}


maintask task_3
{
	void init(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector)
	{
		@Sleep(1);
		disable OnSee;
		enable OnSee;
		disable OnHear;
		enable OnHear;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnSee(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, cvector var_7_cvector, cvector var_8_cvector)
	{
		bool var_10_bool;
		@IsPlayerActor(var_8_cvector, var_10_bool);
		if(var_10_bool != 0) {
			object var_12_object;
			var_8_cvector = var_12_object;
			TaskCall(4);
			func_674(var_12_object);
			TaskReturn();
		}
	}

	void OnHear(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, cvector var_7_cvector, cvector var_8_cvector)
	{
		bool var_10_bool;
		@IsPlayerActor(var_8_cvector, var_10_bool);
		if(var_10_bool != 0) {
			object var_12_object;
			var_8_cvector = var_12_object;
			TaskCall(4);
			func_674(var_12_object);
			TaskReturn();
		}
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, cvector var_7_cvector, cvector var_8_cvector)
	{
		object var_9_object;
		var_8_cvector = var_9_object;
		TaskCall(4);
		func_674(var_9_object);
		TaskReturn();
	}

}


task task_4
{
	void OnHear(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object)
	{
		bool var_10_bool;
		object var_12_object;
		var_8_object = var_12_object;
		bool var_11_bool;
		func_1177(var_11_bool, var_12_object);
		if(!var_11_bool) //@nz
			return 2;
		bool var_46_bool; object var_47_object;
		func_1876(var_46_bool, var_47_object);
		if(!var_46_bool) { //@nz
			var_125_object = GlobalVars[0];
			var_125_object->in(var_10_bool, var_47_object);
			if(!var_10_bool) //@nz
				return 2;
		}
		func_857();
		object var_127_object;
		var_8_object = var_127_object;
		TaskCall(0);
		func_0(var_128_object, var_127_object);
		TaskReturn();
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object, object var_9_object, bool var_10_bool, object var_97_object)
		{
		object var_99_object;
		var_97_object = var_99_object;
			bool var_98_bool;
		func_1177(var_98_bool, var_99_object);
		if(!var_98_bool) { //@nz
			object var_127_object;
			var_97_object = var_127_object;
			func_1812(var_127_object);
		}
		func_857();
		object var_142_object;
		var_97_object = var_142_object;
		func_1836(var_142_object);
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object, object var_9_object, bool var_10_bool)
	{
		object var_12_object;
		var_8_object = var_12_object;
		object var_13_object;
		var_9_object = var_13_object;
		bool var_14_bool;
		var_10_bool = var_14_bool;
		bool var_11_bool;
		func_1984(var_11_bool, var_12_object, var_13_object, var_14_bool);
		if(var_11_bool != 0) {
			object var_97_object;
			var_8_object = var_97_object;
			func_726();
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object)
	{
		object var_10_object;
		var_8_object = var_10_object;
		bool var_9_bool;
		func_1956(var_9_bool, var_10_object);
		if(var_9_bool != 0) {
			func_857();
			object var_128_object;
			var_8_object = var_128_object;
			func_2010(var_128_object);
		}
	}

}


task task_5
{
	void OnUse(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object)
	{
		bool var_10_bool;
		@IsOverrideActive(var_10_bool);
		if(!var_10_bool) { //@nz
			object var_12_object;
			var_8_object = var_12_object;
			func_1596(var_12_object);
		}
	}

	// @pe
	void OnHit(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object, int var_9_int, float var_10_float, float var_11_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object, string var_9_string)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object)
	{
	}

}


// @pe
void OnHit(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object, int var_9_int, float var_10_float, float var_11_float)
{
	object var_12_object;
	var_8_object = var_12_object;
	int var_13_int;
	var_9_int = var_13_int;
	float var_14_float;
	var_10_float = var_14_float;
	func_1245(var_12_object, var_13_int, var_14_float);
}


// @pe
void OnHit2(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object, int var_9_int, float var_10_float, float var_11_float, cvector var_12_cvector, cvector var_13_cvector)
{
	object var_14_object;
	var_8_object = var_14_object;
	int var_15_int;
	var_9_int = var_15_int;
	float var_16_float;
	var_10_float = var_16_float;
	cvector var_17_cvector;
	var_12_cvector = var_17_cvector;
	cvector var_18_cvector;
	var_13_cvector = var_18_cvector;
	func_1313(var_16_float, var_17_cvector, var_18_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object, string var_9_string)
{
	float var_11_float;
	if(var_9_string == "health") {
		@GetProperty("health", var_11_float);
		if(var_11_float <= 0)
			@SignalDeath(var_8_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, cvector var_6_cvector, cvector var_7_cvector, object var_8_object)
{
	bool var_9_bool; object var_10_object;
	func_1046(var_9_bool, var_10_object);
	if(var_9_bool != 0) {
		object var_13_object;
		func_1473(var_13_object);
		@ReportReputationChange(var_10_object, var_13_object, 0.05, true);
	}
	object var_18_object;
	var_8_object = var_18_object;
	func_2016(var_18_object);
}


// @pe
void func_1536(float var_204_float, cvector var_205_cvector, cvector var_206_cvector)
{
	cvector var_208_cvector;
	var_205_cvector = var_208_cvector;
	cvector var_209_cvector;
	var_206_cvector = var_209_cvector;
	float var_207_float;
	func_1517(var_207_float, var_208_cvector, var_209_cvector);
	float var_216_float; cvector var_217_cvector;
	var_205_cvector = var_217_cvector;
	func_1526(var_216_float, var_217_cvector);
	float var_225_float; cvector var_226_cvector;
	var_206_cvector = var_226_cvector;
	func_1526(var_225_float, var_226_cvector);
	var_204_float = var_207_float / (var_216_float * var_225_float);
}


void func_0(object var_0_object, object var_127_object)
{
	bool var_130_bool;
	@Face(var_127_object);
	
	for(;;) {
		@Sleep(0.5, var_130_bool);
		bool var_132_bool = true;
		var_133_bool = !var_130_bool; //@nz
		if(var_133_bool != 1) {
			bool var_134_bool;
			func_1177(var_134_bool, var_127_object);
			var_136_bool = !var_134_bool; //@nz
			if(var_136_bool != 1)
				var_132_bool = false;
		}
		if(var_132_bool != 0)
			break;
	}
	@StopAsync();
}


void func_1794(void)
{
	var_12_object = GlobalVars[0];
	object var_13_object;
	func_1511(var_13_object);
	var_13_object = var_12_object;
	GlobalVars[0] = var_12_object;
}


void func_773(object var_0_object, object var_1_object)
{
	int var_298_int; bool var_299_bool; cvector var_300_cvector; object var_301_object;
	@GetPFPosition(var_1_object);
	@GetDirection(var_0_object);
	
	for(;;) {
		func_862();
		@irand(var_298_int, 10);
		@Sleep((var_298_int + 5), var_299_bool);
		if(var_299_bool != 0) {
			func_695();
		} else {
		for(;;) {
			func_862();
			@GetPFPosition(var_300_cvector);
			float var_306_float; cvector var_308_cvector;
			var_300_cvector = var_308_cvector;
			func_1489(var_306_float, var_1_object, var_308_cvector);
			if(var_306_float > 40000) {
				@FindPathTo(var_301_object, var_1_object);
				if(var_301_object != null) {
					@RotatePath(var_301_object, var_299_bool);
					if(!var_299_bool) { //@nz
					} else {
					@FollowPath(var_301_object, false, var_299_bool);
					if(!var_299_bool) { //@nz
						goto Label_854;
					}
					var_317_float = GetByIndex(var_0_object, 0);
					var_318_float = GetByIndex(var_0_object, 2);
					@Rotate(var_317_float, var_318_float, var_299_bool);
					if(!var_299_bool) { //@nz
						goto Label_854;
					}
					@WaitForAnimEnd(var_299_bool);
					if(!var_299_bool) { //@nz
						goto Label_854;
					}
					goto Label_855;
				EMIT "GOTO 0x347";
				}
				@Sleep(1);
				var_301_object = null;
				goto Label_854;
			}
			var_322_float = GetByIndex(var_0_object, 0);
			var_323_float = GetByIndex(var_0_object, 2);
			@Rotate(var_322_float, var_323_float, var_299_bool);
			if(!var_299_bool) { //@nz
				goto Label_854;
			}
			@WaitForAnimEnd(var_299_bool);
			if(!var_299_bool) { //@nz
				goto Label_854;
			}
			goto Label_855;
			}
		Label_854:
		}
		}
	Label_855:
	}
	
}
EMIT "Return(); Pop(8)";


void func_1031(cvector var_42_cvector, object var_43_object)
{
	cvector var_46_cvector;
	@GetPosition(var_46_cvector);
	cvector var_47_cvector;
	var_43_object->GetPosition(var_47_cvector);
	var_42_cvector = var_47_cvector - var_46_cvector;
}


// @pe
void func_1801(object var_134_object, bool var_135_bool)
{
	object var_136_object;
	var_134_object = var_136_object;
	bool var_137_bool;
	var_135_bool = var_137_bool;
	TaskCall(2);
	func_290(var_138_object, var_139_object, var_140_bool, var_136_object, var_137_bool);
	TaskReturn();
	@ResetAAS();
}


void func_1038(float var_374_float, object var_375_object)
{
	cvector var_379_cvector;
	@GetPosition(var_379_cvector);
	cvector var_380_cvector;
	var_375_object->GetPosition(var_380_cvector);
	var_374_float = (var_380_cvector - var_379_cvector) | (var_380_cvector - var_379_cvector);
}


void func_1553(float var_305_float)
{
	object var_307_object;
	@CreateFloatVector(var_307_object);
	var_307_object->add(var_305_float);
	if(var_305_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_307_object);
}
EMIT "Stack[-1] = 0";


void func_274(void)
{
	@StopAsync();
	@StopGroup0();
	@Stop();
}


void func_1812(object var_127_object)
{
	if(var_127_object == null) {
	}
	var_131_object = GlobalVars[0];
	bool var_129_bool;
	var_131_object->in(var_129_bool, var_127_object);
	if(!var_129_bool) { //@nz
		var_133_object = GlobalVars[0];
		var_133_object->add(var_127_object);
	}
	bool var_134_bool; object var_135_object;
	func_1046(var_134_bool, var_135_object);
	if(var_134_bool != 0) {
		object var_138_object;
		func_1473(var_138_object);
		@ReportReputationChange(var_135_object, var_138_object, 0.0);
	}
}


void func_1046(bool var_9_bool, object var_10_object)
{
	bool var_12_bool;
	@IsPlayerActor(var_10_object, var_12_bool);
	var_12_bool = var_9_bool;
}


void func_24(void)
{
	@StopAsync();
	@KillTimer(100);
	@StopGroup0();
}


void func_1177(bool var_13_bool, object var_14_object)
{
	object var_18_object;
	var_14_object = var_18_object;
	bool var_17_bool;
	func_1141(var_17_bool, var_18_object);
	if(!var_17_bool) { //@nz
		var_13_bool = false;
		return 2;
	}
	bool var_35_bool; object var_36_object;
	func_1051(var_35_bool, var_36_object, "noaccess");
	if(!var_35_bool) { //@nz
		var_13_bool = true;
		return 2;
	}
	int var_16_int;
	var_36_object->GetProperty("noaccess", var_16_int);
	var_13_bool = var_16_int == 0;
}


void func_1051(bool var_35_bool, object var_36_object, string var_37_string)
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


void func_1313(object var_14_object, cvector var_17_cvector, cvector var_18_cvector)
{
	object var_21_object;
	@GetScene(var_21_object);
	object var_22_object;
	@AddActorByType(var_22_object, "scripted", var_21_object, var_17_cvector, var_18_cvector, "blood_dir.xml");
	object var_25_object;
	var_14_object = var_25_object;
	func_1201(var_25_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1570(object var_145_object)
{
	bool var_147_bool;
	@IsPlayerActor(var_145_object, var_147_bool);
	if(var_147_bool != 0)
		@PlayGlobalMusic("attack");
}


// @pe
void func_674(object var_9_object)
{
	func_1794();
	object var_16_object;
	var_9_object = var_16_object;
	func_726();
	
	for(;;) {
		func_687();
	}
}
EMIT "Return(); Pop(0)";


void func_1956(bool var_9_bool, object var_10_object)
{
	bool var_13_bool; object var_14_object;
	func_1177(var_13_bool, var_14_object);
	if(!var_13_bool) { //@nz
		var_9_bool = false;
		return 2;
	}
	var_48_object = GlobalVars[0];
	bool var_12_bool;
	var_48_object->in(var_12_bool, var_14_object);
	if(var_12_bool != 0) {
		var_9_bool = true;
		return 2;
	}
	bool var_50_bool; object var_51_object;
	var_10_object = var_51_object;
	func_1876(var_50_bool, var_51_object);
	var_50_bool = var_9_bool;
}


void func_290(object var_0_object, object var_1_object, bool var_2_bool, object var_136_object, bool var_137_bool)
{
	bool var_143_bool; bool var_144_bool;
	var_0_object = var_136_object;
	func_1570(var_0_object);
	func_1579();
	@Face(var_0_object);
	if(var_137_bool != 0) {
		@PlayAnimation("all", "attack_on");
		@WaitForAnimEnd();
	}
	@LockAnimationEnd("all", "attack_on");
	@SetAttackState(true);
	
Label_316:
	for(;;) {
		bool var_162_bool;
		func_1177(var_162_bool, var_0_object);
		if(var_162_bool != 0) {
			@CanSee(var_144_bool, var_0_object);
			if(var_144_bool != 0) {
				func_1570(var_0_object);
				func_470(var_144_bool);
			} else {
				func_1327(var_0_object);
				var_2_bool = true;
				@PlayAnimation("all", "hunt");
				@WaitForAnimEnd(var_143_bool);
				if(!var_143_bool) { //@nz
					if(var_1_object != null)
						func_465(var_143_bool, var_144_bool);
					@LockAnimationEnd("all", "attack_on");
					goto Label_316;
				}
				bool var_343_bool;
				func_1177(var_343_bool, var_0_object);
				if(!var_343_bool) { //@nz
				} else {
						@CanSee(var_144_bool, var_0_object);
						if(var_144_bool != 0) {
							var_2_bool = false;
							@Face(var_0_object);
							func_470(var_144_bool);
							goto Label_412;
						}
						@LockAnimationEnd("all", "attack_on");
						@Sleep(3, var_143_bool);
						if(!var_143_bool) { //@nz
							if(var_1_object != null)
								func_465(var_143_bool, var_144_bool);
							@LockAnimationEnd("all", "attack_on");
							goto Label_316;
						}
						bool var_357_bool;
						func_1177(var_357_bool, var_0_object);
						var_359_bool = !var_357_bool; //@nz
						if(var_359_bool == 0) goto Label_400;
				}
		}
		Label_422:
			for(;;) {
				@SetAttackState(false);
				@StopAsync();
				@PlayAnimation("all", "attack_off");
				@WaitForAnimEnd();

			}

		Label_400:
			var_2_bool = false;
			@CanSee(var_144_bool, var_0_object);
			if(var_144_bool != 0) {
				@Face(var_0_object);
				func_470(var_144_bool);
				goto Label_412;
			}
			goto Label_422;
		}
	Label_412:
		if(var_1_object != null)
			func_465(var_143_bool, var_144_bool);
		else
			@Sleep(2);

	}
	
}


void func_1063(float var_252_float, object var_253_object, float var_254_float, int var_255_int)
{
	int var_262_int; int var_264_int;
	object var_269_object;
	var_253_object = var_269_object;
	bool var_268_bool;
	func_1051(var_268_bool, var_269_object, "health");
	if(!var_268_bool) //@nz
		var_252_float = 0.0;
	bool var_272_bool; object var_273_object;
	func_1051(var_272_bool, var_273_object, "armor");
	if(!var_272_bool) //@nz
		var_262_int = 0;
	else
		var_273_object->GetProperty("armor", var_262_int);
	string var_277_string; int var_278_int;
	var_255_int = var_278_int;
	func_1017(var_277_string, var_278_int);
	string var_263_string = "armor_" + var_277_string;
	bool var_283_bool; object var_284_object; string var_285_string;
	var_253_object = var_284_object;
	func_1051(var_283_bool, var_284_object, var_285_string);
	if(!var_283_bool) //@nz
		var_264_int = 0;
	else
		var_253_object->GetProperty(var_285_string, var_264_int);

	float var_287_float;
	func_1493(var_287_float, ((var_262_int + var_264_int) / 100.0), (float)1);
	float var_265_float;
	var_287_float = var_265_float;
	float var_266_float;
	var_253_object->GetProperty("health", var_266_float);
	float var_267_float = var_254_float * (1 - var_265_float);
	float var_297_float;
	func_1500(var_297_float, (var_266_float - var_267_float), (float)0, (float)1);
	var_253_object->SetProperty("health", var_297_float);
	bool var_303_bool; object var_304_object;
	var_253_object = var_304_object;
	func_1046(var_303_bool, var_304_object);
	if(var_303_bool != 0) {
		float var_305_float = -var_267_float;
		func_1553(var_305_float);
	}
	var_267_float = var_252_float;
	
}


void func_1579(void)
{
	object var_151_object;
	@GetScene(var_151_object);
	object var_153_object;
	func_1473(var_153_object);
	@BroadcastMessage("battle", var_153_object, var_151_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1836(object var_142_object)
{
	object var_143_object;
	var_142_object = var_143_object;
	func_1812(var_143_object);
	object var_144_object;
	var_142_object = var_144_object;
	func_1801(var_144_object, true);
}


void func_1327(object var_328_object)
{
	cvector var_332_cvector;
	var_328_object->GetPosition(var_332_cvector);
	cvector var_333_cvector;
	@GetPosition(var_333_cvector);
	cvector var_334_cvector = var_332_cvector - var_333_cvector;
	var_335_float = GetByIndex(var_334_cvector, 0);
	var_336_float = GetByIndex(var_334_cvector, 2);
	@RotateAsync(var_335_float, var_336_float);
}


// @pe
void func_687(void)
{
	func_1794();
	
	for(;;) {
		func_773(var_11_cvector, var_9_object);
	}
}
EMIT "Return(); Pop(0)";


void func_1201(object var_25_object)
{
	string var_39_string;
	if(var_25_object == null)
		return 14;
	bool var_33_bool;
	@IsDead(var_33_bool);
	if(var_33_bool != 0)
		return 14;
	int var_34_int;
	@GetSecondaryAnimationType(var_34_int);
	if(var_34_int < 0)
		return 14;
	cvector var_35_cvector;
	var_25_object->GetPosition(var_35_cvector);
	cvector var_36_cvector;
	@GetPosition(var_36_cvector);
	cvector var_37_cvector;
	@GetDirection(var_37_cvector);
	cvector var_38_cvector = var_36_cvector - var_35_cvector;
	var_44_float = GetByIndex(var_38_cvector, 0);
	var_45_float = GetByIndex(var_37_cvector, 0);
	var_47_float = GetByIndex(var_38_cvector, 2);
	var_48_float = GetByIndex(var_37_cvector, 2);
	if(((var_44_float * var_45_float) + (var_47_float * var_48_float)) >= 0)
		var_39_string = "fhit";
	else
		var_39_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_39_string + "1"), (var_39_string + "2"), -10);
	
}


void func_1590(int var_13_int)
{
	int var_15_int;
	@GetVariable("branch", var_15_int);
	var_15_int = var_13_int;
}


void func_695(void)
{
}


void func_1847(object var_129_object)
{
	var_132_object = GlobalVars[0];
	bool var_131_bool;
	var_132_object->in(var_131_bool, var_129_object);
	if(var_131_bool != 0) {
		object var_134_object;
		var_129_object = var_134_object;
		func_1801(var_134_object, true);
	} else {
		object var_361_object;
		var_129_object = var_361_object;
		TaskCall(1);
		func_120(var_362_object, var_363_bool, var_361_object);
		TaskReturn();
		@ResetAAS();
	}
	
}


// @pe
void func_1978(object var_129_object)
{
	object var_130_object;
	var_129_object = var_130_object;
	func_2010(var_130_object);
}


void func_1338(float var_243_float, object var_244_object)
{
	float var_247_float;
	@GetEyesHeight(var_247_float);
	float var_248_float;
	var_244_object->GetEyesHeight(var_248_float);
	var_243_float = var_248_float - var_247_float;
}


// @pe
void func_1596(object var_12_object)
{
	int var_13_int;
	func_1590(var_13_int);
	if(var_13_int == 1)
		@WorkWithCorpse(var_12_object);
	else
		@Barter(var_12_object);
	
}


void func_1984(bool var_11_bool, object var_12_object, object var_13_object, bool var_14_bool)
{
	bool var_16_bool;
	object var_18_object;
	var_13_object = var_18_object;
	bool var_17_bool;
	func_1658(var_17_bool, var_18_object, !var_14_bool);
	if(var_17_bool != 0) {
		@CanSee(var_16_bool, var_12_object);
		bool var_85_bool = true;
		if(var_16_bool != 1) {
			float var_87_float; object var_88_object;
			var_12_object = var_88_object;
			func_1038(var_87_float, var_88_object);
			var_96_bool = var_87_float <= 490000.0;
			if(var_96_bool != 1)
				var_85_bool = false;
		}
		if(var_85_bool != 0)
			var_11_bool = true;
	}
	var_11_bool = false;
}


void func_1473(object var_13_object)
{
	object var_15_object;
	@self(var_15_object);
	var_15_object = var_13_object;
}
EMIT "Stack[-1] = 0";


void func_1345(string var_47_string)
{
	bool var_56_bool; int var_57_int; bool var_58_bool; int var_59_int; bool var_60_bool; float var_61_float; cvector var_62_cvector; cvector var_63_cvector;
	@IsExisting3DSound(var_56_bool, var_47_string);
	if(!var_56_bool) { //@nz
		var_57_int = 0;

		for(;;) {
			@IsExisting3DSound(var_58_bool, (var_47_string + (var_57_int + 1)));
			if(!var_58_bool) { //@nz
				break;
			Label_1365:
				@irand(var_59_int, var_57_int);
				var_47_string += (var_59_int + 1);
	}
			@Is3DSoundLoaded(var_60_bool, var_47_string);
			if(var_60_bool != 0) {
				@GetEyesHeight(var_61_float);
				@GetDirection(var_62_cvector);
				var_63_cvector = var_62_cvector * 50;
				var_74_float = GetByIndex(var_63_cvector, 1);
				SetByIndex(var_63_cvector, 1) = (var_74_float + var_61_float);
				@PlayGlobalSound(var_47_string, var_63_cvector);
			}
		}
		var_57_int += 1;
	}
	var_69_bool = !var_57_int; //@nz
	if(var_69_bool == 0) goto Label_1365;
}


void func_1479(cvector var_40_cvector, cvector var_41_cvector)
{
	float var_49_float = sqrt(var_41_cvector | var_41_cvector);
	if(var_49_float < 0.000001)
		var_40_cvector = [0.0, 0.0, 0.0];
	var_40_cvector = var_41_cvector / var_49_float;
}


// @pe
void func_1868(bool var_372_bool, object var_373_object)
{
	object var_375_object;
	var_373_object = var_375_object;
	float var_374_float;
	func_1038(var_374_float, var_375_object);
	var_372_bool = var_374_float <= 40000.0;
}


void func_465(object var_0_object, object var_1_object)
{
	var_1_object = null;
	@Face(var_1_object);
}


void func_1489(float var_306_float, cvector var_307_cvector, cvector var_308_cvector)
{
	var_306_float = (var_308_cvector - var_307_cvector) | (var_308_cvector - var_307_cvector);
}


void func_1876(bool var_50_bool, object var_51_object)
{
	float var_55_float; float var_57_float;
	object var_59_object;
	var_51_object = var_59_object;
	bool var_58_bool;
	func_1177(var_58_bool, var_59_object);
	if(!var_58_bool) { //@nz
		var_50_bool = false;
		return 6;
	}
	bool var_61_bool; object var_62_object;
	func_1046(var_61_bool, var_62_object);
	if(var_61_bool != 0) {
		var_62_object->GetProperty("reputation", var_55_float);
		var_50_bool = var_55_float < 0.33;
		return 6;
	}
	bool var_67_bool; object var_68_object;
	func_1051(var_67_bool, var_68_object, "class");
	if(!var_67_bool) { //@nz
		var_50_bool = false;
		return 6;
	}
	string var_56_string;
	var_68_object->GetProperty("class", var_56_string);
	bool var_72_bool = true;
	bool var_73_bool = true;
	var_75_bool = var_56_string == "bomber";
	if(var_75_bool != 1) {
		var_77_bool = var_56_string == "hunter";
		if(var_77_bool != 1)
			var_73_bool = false;
	}
	if(var_73_bool != 1) {
		var_79_bool = var_56_string == "grabitel";
		if(var_79_bool != 1)
			var_72_bool = false;
	}
	if(var_72_bool != 0) {
		var_50_bool = true;
		return 6;
	}
	bool var_80_bool; object var_81_object;
	func_1051(var_80_bool, var_81_object, "disease");
	if(!var_80_bool) { //@nz
		var_50_bool = false;
		return 6;
	}
	bool var_84_bool = true;
	bool var_85_bool; string var_86_string;
	func_1386(var_85_bool, var_86_string);
	if(var_85_bool != 1) {
		var_125_bool = var_86_string == "dog";
		if(var_125_bool != 1)
			var_84_bool = false;
	}
	if(var_84_bool != 0) {
		var_81_object->GetProperty("disease", var_57_float);
		var_50_bool = var_57_float > 0;
		return 6;
	}
	var_50_bool = false;
}


// @pe
void func_1493(float var_287_float, float var_288_float, float var_289_float)
{
	if(var_288_float < var_289_float)
		var_288_float = var_287_float;
	else
		var_289_float = var_287_float;
	
}


void func_470(object var_0_object)
{
	object var_185_object; object var_186_object; float var_191_float; object var_192_object; object var_193_object;
	func_1570(var_0_object);
	@ReportAttack(var_0_object);
	bool var_195_bool;
	func_1046(var_195_bool, var_0_object);
	if(var_195_bool != 0) {
		object var_197_object;
		func_1473(var_197_object);
		@SendPlayerEnemy(var_0_object, var_197_object);
	}
	cvector var_180_cvector;
	@GetDirection(var_180_cvector);
	cvector var_198_cvector;
	func_1031(var_198_cvector, var_0_object);
	cvector var_181_cvector;
	var_198_cvector = var_181_cvector;
	float var_204_float; cvector var_205_cvector; cvector var_206_cvector;
	var_181_cvector = var_206_cvector;
	func_1536(var_204_float, var_205_cvector, var_206_cvector);
	if(var_204_float < 0.99939084) {
	}
	func_1579();
	@PlayAnimation("all", "attack_begin1");
	bool var_182_bool;
	cvector var_183_cvector;
	cvector var_184_cvector;
	@GetGeometryLocator("attack", var_182_bool, var_183_cvector, var_184_cvector);
	if(var_182_bool != 0) {
		@GetScene(var_186_object);
		@AddActorByType(var_185_object, "light-dynamic", var_186_object, var_183_cvector, var_184_cvector, "soldier_fire.xml");
		var_186_object = null;
		var_185_object = null;
	} else {
				@WaitForAnimEnd();
	}
	@PlayGlobalSound("shot", [0.0, 150.0, 0.0], 800, 100000);
	@GetDirection(var_205_cvector);
	cvector var_240_cvector;
	func_1031(var_240_cvector, var_0_object);
	var_240_cvector = var_181_cvector;
	var_242_float = GetByIndex(var_181_cvector, 1);
	float var_243_float;
	func_1338(var_243_float, var_0_object);
	SetByIndex(var_181_cvector, 1) = (var_242_float + var_243_float);
	cvector var_187_cvector;
	@RandVecCone3D(var_187_cvector, var_181_cvector, 0.034906585);
	object var_188_object;
	int var_189_int;
	cvector var_190_cvector;
	@GetVictimMaterial(var_187_cvector, var_188_object, var_189_int, var_190_cvector);
	if(var_188_object != null) {
		if(var_188_object == var_0_object) {
			float var_252_float;
			func_1063(var_252_float, var_0_object, 1.5, 1);
			var_252_float = var_191_float;
			@ReportHit(var_0_object, 2, var_191_float, 1.5);
		} else if(var_189_int != -1) {
			@GetScene(var_192_object);
			@AddActorByType(var_193_object, "scripted", var_192_object, var_190_cvector, [0.0, 0.0, 1.0], "richochet.xml");
			var_193_object->SetScriptProperty("Material", var_189_int);
			var_193_object = null;
			var_192_object = null;

		}
	}
	@PlayAnimation("all", "attack_end1");
	@WaitForAnimEnd();
	@LockAnimationEnd("all", "attack_on");
	
}
EMIT "Stack[-6] = 0";


void func_857(void)
{
	@StopGroup0();
	@Stop();
}


// @pe
void func_2010(object var_128_object)
{
	object var_129_object;
	var_128_object = var_129_object;
	func_1847(var_129_object);
}


// @pe
void func_985(string var_46_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_47_string;
	var_46_string = var_47_string;
	func_1345(var_47_string);
	@PlayAnimation("all", var_46_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_46_string);
	@RemoveEnvelope();
}


// @pe
void func_1500(float var_297_float, float var_298_float, float var_299_float, float var_300_float)
{
	if(var_298_float < var_299_float) {
		var_299_float = var_297_float;
		return 0;
	}
	if(var_298_float > var_300_float) {
		var_300_float = var_297_float;
		return 0;
	}
	var_298_float = var_297_float;
}


void func_1245(object var_12_object, int var_13_int, float var_14_float)
{
	cvector var_24_cvector; object var_25_object; int var_26_int; bool var_27_bool; cvector var_28_cvector; cvector var_29_cvector;
	bool var_33_bool = false;
	bool var_34_bool = false;
	if(var_12_object != 0) {
		if(var_13_int != 4)
			var_34_bool = true;
	}
	if(var_34_bool != 0) {
		if(var_13_int != 5)
			var_33_bool = true;
	}
	if(var_33_bool != 0) {
		cvector var_40_cvector; cvector var_41_cvector;
		cvector var_42_cvector; object var_43_object;
		var_12_object = var_43_object;
		func_1031(var_42_cvector, var_43_object);
		var_42_cvector = var_41_cvector;
		func_1479(var_40_cvector, var_41_cvector);
		var_40_cvector = var_24_cvector;
		@CreateVectorVector(var_25_object);
		var_26_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_26_int), var_27_bool, var_28_cvector, var_29_cvector);
			if(!var_27_bool) { //@nz
				break;
			Label_1307:
				var_25_object = null;
	}
			object var_102_object;
			var_12_object = var_102_object;
			func_1201(var_102_object);
		}
		if((var_29_cvector | var_24_cvector) >= 0.70710677)
			var_25_object->add(var_28_cvector);
		var_26_int += 1;
	}
	int var_30_int;
	var_25_object->size(var_30_int);
	if(var_30_int == 0) goto Label_1307;
	int var_31_int;
	@irand(var_31_int, var_30_int);
	cvector var_32_cvector;
	var_25_object->get(var_32_cvector, var_31_int);
	object var_57_object; int var_58_int; float var_59_float; cvector var_60_cvector; cvector var_61_cvector;
	var_12_object = var_57_object;
	var_13_int = var_58_int;
	var_14_float = var_59_float;
	var_32_cvector = var_60_cvector;
	var_61_cvector = -var_24_cvector;
	func_1313(var_59_float, var_60_cvector, var_61_cvector);
}


void func_862(void)
{
}


// @pe
void func_863(object var_22_object)
{
	object var_23_object;
	var_22_object = var_23_object;
	func_869(var_23_object);
}


void func_2016(object var_18_object)
{
	object var_20_object;
	@GetScene(var_20_object);
	object var_21_object;
	func_1473(var_21_object);
	var_20_object->RemoveStationaryActor(var_21_object);
	object var_22_object;
	var_18_object = var_22_object;
	TaskCall(5);
	func_863(var_22_object);
	TaskReturn();
}
EMIT "Stack[-1] = 0";


// @pe
void func_869(object var_23_object)
{
	object var_24_object;
	var_23_object = var_24_object;
	func_894(var_24_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1511(object var_13_object)
{
	object var_15_object;
	@CreateObjectSet(var_15_object);
	var_15_object = var_13_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1386(bool var_85_bool, string var_86_string)
{
	var_85_bool = true;
	bool var_87_bool = true;
	bool var_88_bool = true;
	bool var_89_bool = true;
	bool var_90_bool = true;
	bool var_91_bool = true;
	bool var_92_bool = true;
	bool var_93_bool = true;
	bool var_94_bool = true;
	bool var_95_bool = true;
	bool var_96_bool = true;
	bool var_97_bool = true;
	var_99_bool = var_86_string == "woman";
	if(var_99_bool != 1) {
		var_101_bool = var_86_string == "worker";
		if(var_101_bool != 1)
			var_97_bool = false;
	}
	if(var_97_bool != 1) {
		var_103_bool = var_86_string == "butcher";
		if(var_103_bool != 1)
			var_96_bool = false;
	}
	if(var_96_bool != 1) {
		var_105_bool = var_86_string == "wasted_girl";
		if(var_105_bool != 1)
			var_95_bool = false;
	}
	if(var_95_bool != 1) {
		var_107_bool = var_86_string == "boy";
		if(var_107_bool != 1)
			var_94_bool = false;
	}
	if(var_94_bool != 1) {
		var_109_bool = var_86_string == "vaxxabitka";
		if(var_109_bool != 1)
			var_93_bool = false;
	}
	if(var_93_bool != 1) {
		var_111_bool = var_86_string == "unosha";
		if(var_111_bool != 1)
			var_92_bool = false;
	}
	if(var_92_bool != 1) {
		var_113_bool = var_86_string == "wasted_male";
		if(var_113_bool != 1)
			var_91_bool = false;
	}
	if(var_91_bool != 1) {
		var_115_bool = var_86_string == "alkash";
		if(var_115_bool != 1)
			var_90_bool = false;
	}
	if(var_90_bool != 1) {
		var_117_bool = var_86_string == "dohodyaga";
		if(var_117_bool != 1)
			var_89_bool = false;
	}
	if(var_89_bool != 1) {
		var_119_bool = var_86_string == "vaxxabit";
		if(var_119_bool != 1)
			var_88_bool = false;
	}
	if(var_88_bool != 1) {
		var_121_bool = var_86_string == "nudegirl";
		if(var_121_bool != 1)
			var_87_bool = false;
	}
	if(var_87_bool != 1) {
		var_123_bool = var_86_string == "morlok";
		if(var_123_bool != 1)
			var_85_bool = false;
	}
}


// @pe
void func_1517(float var_207_float, cvector var_208_cvector, cvector var_209_cvector)
{
	var_210_float = GetByIndex(var_208_cvector, 0);
	var_211_float = GetByIndex(var_209_cvector, 0);
	var_213_float = GetByIndex(var_208_cvector, 2);
	var_214_float = GetByIndex(var_209_cvector, 2);
	var_207_float = (var_210_float * var_211_float) + (var_213_float * var_214_float);
}


void func_1136(bool var_28_bool, object var_29_object)
{
	bool var_31_bool;
	var_29_object->IsDead(var_31_bool);
	var_31_bool = var_28_bool;
}


void func_1141(bool var_17_bool, object var_18_object)
{
	if(var_18_object == null) {
		var_17_bool = false;
		return 4;
	}
	bool var_24_bool = false;
	var_27_bool = IsFuncExist(var_18_object, "IsDead", 1);
	if(var_27_bool != 0) {
		bool var_28_bool; object var_29_object;
		var_18_object = var_29_object;
		func_1136(var_28_bool, var_29_object);
		if(var_28_bool != 0)
			var_24_bool = true;
	}
	if(var_24_bool != 0) {
		var_17_bool = false;
		return 4;
	}
	object var_21_object;
	@GetScene(var_21_object);
	if(var_21_object == null) {
		var_17_bool = false;
		return 4;
	}
	object var_22_object;
	var_18_object->GetScene(var_22_object);
	if(var_21_object != var_22_object) {
		var_17_bool = false;
		return 4;
	}
	var_17_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1526(float var_216_float, cvector var_217_cvector)
{
	var_218_float = GetByIndex(var_217_cvector, 0);
	var_219_float = GetByIndex(var_217_cvector, 0);
	var_221_float = GetByIndex(var_217_cvector, 2);
	var_222_float = GetByIndex(var_217_cvector, 2);
	var_216_float = sqrt((var_218_float * var_219_float) + (var_221_float * var_222_float));
}


void func_120(object var_0_object, object var_1_object, object var_361_object)
{
	var_0_object = var_361_object;
	func_1570(var_0_object);
	@CanSee(var_1_object, var_0_object);
	if(var_1_object != 0) {
		bool var_372_bool;
		func_1868(var_372_bool, var_0_object);
		if(var_372_bool != 0) {
			func_1801(var_0_object, true);
			return 6;
		}
		@Face(var_0_object);
	}
	func_1579();
	@PlayAnimation("all", "shoot_begin");
	bool var_367_bool;
	@WaitForAnimEnd(var_367_bool);
	if(!var_367_bool) { //@nz
		@StopAsync();
		return 6;
	}
	@PlayGlobalSound("shot", [0.0, 150.0, 0.0], 800, 100000);
	@PlayAnimation("all", "shoot_end");
	@WaitForAnimEnd(var_367_bool);
	if(!var_367_bool) { //@nz
		@StopAsync();
		return 6;
	}
	@LockAnimationEnd("all", "shoot_end");
	int var_368_int = 0;
	int var_369_int = 0;
	
	for(;;) {
		if(var_369_int < 20) {
			func_1570(var_0_object);
			@Sleep(0.5, var_367_bool);
			if(!var_367_bool) //@nz
				return 6;
			@CanSee(var_1_object, var_0_object);
			if(var_1_object != 0) {
				var_368_int = 0;
				bool var_403_bool;
				func_1868(var_403_bool, var_0_object);
				if(var_403_bool != 0) {
					func_274();
					func_1801(var_0_object, false);
					return 6;
				}
				@Face(var_0_object);
			} else {
			@StopAsync();
			if(!((var_368_int + 1) == 4)) goto Label_229;
			@PlayAnimation("all", "attack_off");
			@WaitForAnimEnd();
			return 6;
		}
		func_274();
		object var_413_object;
		var_361_object = var_413_object;
		func_1801(var_413_object, false);
		return 6;
		}
	Label_229:
		var_369_int += 1;
	}
	
}


// @pe
void func_1017(string var_277_string, int var_278_int)
{
	if(var_278_int == 2) {
		var_277_string = "fire";
		return 0;
	EMIT "GOTO 0x405";
	}
	if(var_278_int == 1) {
		var_277_string = "bullet";
		return 0;
	}
	var_277_string = "phys";
}


void func_1658(bool var_17_bool, object var_18_object, bool var_19_bool)
{
	bool var_22_bool; object var_23_object;
	func_1051(var_22_bool, var_23_object, "class");
	if(!var_22_bool) { //@nz
		var_17_bool = false;
		return 2;
	}
	string var_21_string;
	var_23_object->GetProperty("class", var_21_string);
	bool var_33_bool = true;
	bool var_34_bool = true;
	bool var_35_bool = true;
	bool var_36_bool = true;
	bool var_37_bool = true;
	bool var_38_bool = true;
	bool var_39_bool = true;
	bool var_40_bool = true;
	bool var_41_bool = true;
	bool var_42_bool = true;
	var_44_bool = var_21_string == "patrol";
	if(var_44_bool != 1) {
		var_46_bool = var_21_string == "sanitar";
		if(var_46_bool != 1)
			var_42_bool = false;
	}
	if(var_42_bool != 1) {
		var_48_bool = var_21_string == "soldier";
		if(var_48_bool != 1)
			var_41_bool = false;
	}
	if(var_41_bool != 1) {
		var_50_bool = var_21_string == "woman";
		if(var_50_bool != 1)
			var_40_bool = false;
	}
	if(var_40_bool != 1) {
		var_52_bool = var_21_string == "wasted_girl";
		if(var_52_bool != 1)
			var_39_bool = false;
	}
	if(var_39_bool != 1) {
		var_54_bool = var_21_string == "vaxxabitka";
		if(var_54_bool != 1)
			var_38_bool = false;
	}
	if(var_38_bool != 1) {
		var_56_bool = var_21_string == "vaxxabit";
		if(var_56_bool != 1)
			var_37_bool = false;
	}
	if(var_37_bool != 1) {
		var_58_bool = var_21_string == "little_girl";
		if(var_58_bool != 1)
			var_36_bool = false;
	}
	if(var_36_bool != 1) {
		var_60_bool = var_21_string == "girl";
		if(var_60_bool != 1)
			var_35_bool = false;
	}
	if(var_35_bool != 1) {
		var_62_bool = var_21_string == "dohodyaga";
		if(var_62_bool != 1)
			var_34_bool = false;
	}
	if(var_34_bool != 1) {
		var_64_bool = var_21_string == "nudegirl";
		if(var_64_bool != 1)
			var_33_bool = false;
	}
	if(var_33_bool != 0) {
		var_17_bool = true;
		return 2;
	}
	if(var_19_bool != 0) {
		var_17_bool = false;
		return 2;
	}
	var_17_bool = true;
	bool var_66_bool = true;
	bool var_67_bool = true;
	bool var_68_bool = true;
	bool var_69_bool = true;
	bool var_70_bool = true;
	var_72_bool = var_21_string == "worker";
	if(var_72_bool != 1) {
		var_74_bool = var_21_string == "butcher";
		if(var_74_bool != 1)
			var_70_bool = false;
	}
	if(var_70_bool != 1) {
		var_76_bool = var_21_string == "boy";
		if(var_76_bool != 1)
			var_69_bool = false;
	}
	if(var_69_bool != 1) {
		var_78_bool = var_21_string == "unosha";
		if(var_78_bool != 1)
			var_68_bool = false;
	}
	if(var_68_bool != 1) {
		var_80_bool = var_21_string == "wasted_male";
		if(var_80_bool != 1)
			var_67_bool = false;
	}
	if(var_67_bool != 1) {
		var_82_bool = var_21_string == "alkash";
		if(var_82_bool != 1)
			var_66_bool = false;
	}
	if(var_66_bool != 1) {
		var_84_bool = var_21_string == "morlok";
		if(var_84_bool != 1)
			var_17_bool = false;
	}
}


void func_894(object var_24_object)
{
	cvector var_35_cvector; cvector var_36_cvector; cvector var_37_cvector; cvector var_38_cvector; string var_39_string; object var_40_object; bool var_41_bool; bool var_42_bool; float var_43_float; cvector var_44_cvector;
	if(var_24_object == null) {
		func_985("fdie");
	} else {
		var_24_object->GetPosition(var_35_cvector);
		@GetPosition(var_36_cvector);
		@GetDirection(var_37_cvector);
		var_38_cvector = var_36_cvector - var_35_cvector;
		var_78_float = GetByIndex(var_38_cvector, 0);
		var_79_float = GetByIndex(var_37_cvector, 0);
		var_81_float = GetByIndex(var_38_cvector, 2);
		var_82_float = GetByIndex(var_37_cvector, 2);
		if(((var_78_float * var_79_float) + (var_81_float * var_82_float)) >= 0)
			var_39_string = "fdie";
		else
			var_39_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_24_object = var_40_object;
		var_89_bool = IsFuncExist(var_24_object, "GetScriptProperty", 2);
		if(var_89_bool != 0) {
			var_24_object->HasScriptProperty(var_41_bool, "Owner");
			if(var_41_bool != 0) {
				var_24_object->GetScriptProperty(var_40_object, "Owner");
				if(var_40_object == null)
					var_24_object = var_40_object;
			}
		}
		var_96_bool = IsFuncExist(var_40_object, "@GetEyesHeight", 1);
		if(var_96_bool != 0) {
			var_40_object->GetEyesHeight(var_43_float);
			var_44_cvector = [0.0, 0.0, 0.0];
			var_97_float = GetByIndex(var_44_cvector, 1);
			var_43_float = var_97_float;
			SetByIndex(var_44_cvector, 1) = var_97_float;
			@LookAsync(var_24_object, "head", var_44_cvector);
			var_42_bool = true;
		} else {
			var_42_bool = false;

		}
		string var_99_string;
		var_39_string = var_99_string;
		func_1345(var_99_string);
		@PlayAnimation("all", var_39_string);
		@WaitForAnimEnd();
		if(var_42_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_39_string);
		@RemoveEnvelope();
		var_40_object = null;
	}
	
}


