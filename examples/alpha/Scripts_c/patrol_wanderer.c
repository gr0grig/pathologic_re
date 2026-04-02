// @GLOBALS: 0:object:

task task_0
{
	// @pe
	void OnSee(object actor, float var_1_float, float var_2_float, object var_3_object, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, int var_12_int)
	{
		bool var_13_bool; object var_14_object;
		func_1905(var_13_bool, var_14_object);
		if(var_13_bool != 0) {
			func_69(var_11_bool, var_14_object);
			object var_65_object;
			var_12_int = var_65_object;
			func_1912(var_65_object);
		}
	}

	// @pe
		void OnAttacked(object actor, float var_1_float, float fDamage, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, int var_13_int, object var_47_object)
		{
		object var_49_object;
		var_47_object = var_49_object;
			bool var_48_bool;
		func_1447(var_48_bool, var_49_object);
		if(!var_48_bool) { //@nz
			object var_77_object;
			var_47_object = var_77_object;
			func_1923(var_77_object);
		}
		func_69(var_13_int, var_47_object);
		object var_85_object;
		var_47_object = var_85_object;
		func_1936(var_85_object);
		}

	// @pe
	void OnTimer(object var_0_object, float fTime, float var_2_float, int var_3_int, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, int var_12_int)
	{
		if(var_12_int != 100) {
		}
		func_69(var_11_bool, var_12_int);
	}

	// @pe
	void OnPlayerDamage(object actor, float var_1_float, float fDamage, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, int var_13_int)
	{
		object var_15_object;
		var_12_bool = var_15_object;
		object var_16_object;
		var_13_int = var_16_object;
		bool var_14_bool;
		func_1986(var_14_bool, var_15_object, var_16_object);
		if(var_14_bool != 0) {
			object var_47_object;
			var_12_bool = var_47_object;
			func_28();
		}
	}

	// @pe
	void OnDeath(object actor, float var_1_float, float var_2_float, object var_3_object, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, int var_12_int)
	{
		func_69(var_11_bool, var_12_int);
		object var_14_object;
		var_12_int = var_14_object;
		func_1980();
	}

	// @pe
	void OnHear(object actor, float var_1_float, float var_2_float, object var_3_object, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, int var_12_int)
	{
		bool var_13_bool = false;
		if(var_12_int == actor) {
			bool var_15_bool; object var_16_object;
			var_12_int = var_16_object;
			func_1884(var_15_bool, var_16_object);
			if(var_15_bool != 0)
				var_13_bool = true;
		}
		if(var_13_bool != 0) {
			@Face(actor);
			@SetTimer(100, 15);
		}
	}

	// @pe
	void OnStopHear(object actor, float var_1_float, float var_2_float, object var_3_object, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, int var_12_int)
	{
		if(var_12_int == actor) {
			@StopAsync();
			@KillTimer(100);
		}
	}

}


maintask task_1
{
	void init(object var_0_object, float var_1_float, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int)
	{
		func_1846();
	
		for(;;) {
			func_235(var_10_bool, var_11_int);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnSee(object actor, float var_1_float, float var_2_float, bool var_3_bool, bool var_4_bool, object var_5_object, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, int var_12_int)
	{
		bool var_13_bool; object var_14_object;
		func_1905(var_13_bool, var_14_object);
		if(var_13_bool != 0) {
			func_299(var_11_bool, var_14_object);
			object var_64_object;
			var_12_int = var_64_object;
			func_1912(var_64_object);
		}
	}

	// @pe
	void OnHear(object actor, float var_1_float, float var_2_float, bool var_3_bool, bool var_4_bool, object var_5_object, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, int var_12_int)
	{
		bool var_13_bool; object var_14_object;
		func_1884(var_13_bool, var_14_object);
		if(var_13_bool != 0) {
			func_299(var_11_bool, var_14_object);
			object var_67_object;
			var_12_int = var_67_object;
			func_1897(var_67_object);
		}
	}

	// @pe
		void OnAttacked(object actor, float var_1_float, float fDamage, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, int var_13_int, object var_47_object)
		{
		object var_49_object;
		var_47_object = var_49_object;
			bool var_48_bool;
		func_1447(var_48_bool, var_49_object);
		if(!var_48_bool) { //@nz
			object var_77_object;
			var_47_object = var_77_object;
			func_1923(var_77_object);
		}
		func_299(var_13_int, var_47_object);
		object var_84_object;
		var_47_object = var_84_object;
		func_1936(var_84_object);
		}

	// @pe
	void OnPlayerDamage(object actor, float var_1_float, float fDamage, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, int var_13_int)
	{
		object var_15_object;
		var_12_bool = var_15_object;
		object var_16_object;
		var_13_int = var_16_object;
		bool var_14_bool;
		func_1986(var_14_bool, var_15_object, var_16_object);
		if(var_14_bool != 0) {
			object var_47_object;
			var_12_bool = var_47_object;
			func_203();
		}
	}

	// @pe
	void OnCollision(object actor, float var_1_float, float var_2_float, bool var_3_bool, bool var_4_bool, object var_5_object, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, int var_12_int)
	{
		@RequestClearPath(var_12_int);
	}

	void OnActorStuck(object var_0_object, float var_1_float, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int)
	{
		@Stop();
	}

	// @pe
	void OnDeath(object actor, float var_1_float, float var_2_float, bool var_3_bool, bool var_4_bool, object var_5_object, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, int var_12_int)
	{
		func_299(var_11_bool, var_12_int);
		object var_13_object;
		var_12_int = var_13_object;
		func_1980();
	}

}


task task_2
{
	// @pe
	void OnSee(object actor, float var_1_float, float var_2_float, bool var_3_bool, bool var_4_bool, object var_5_object, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, int var_12_int)
	{
		object var_14_object;
		var_12_int = var_14_object;
		bool var_13_bool;
		func_1905(var_13_bool, var_14_object);
		if(var_13_bool != 0) {
			func_446();
			object var_64_object;
			var_12_int = var_64_object;
			func_1912(var_64_object);
		}
	}

	// @pe
	void OnHear(object actor, float var_1_float, float var_2_float, bool var_3_bool, bool var_4_bool, object var_5_object, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, int var_12_int)
	{
		object var_14_object;
		var_12_int = var_14_object;
		bool var_13_bool;
		func_1884(var_13_bool, var_14_object);
		if(var_13_bool != 0) {
			func_446();
			object var_67_object;
			var_12_int = var_67_object;
			func_1897(var_67_object);
		}
	}

	// @pe
		void OnAttacked(object actor, float var_1_float, float fDamage, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, int var_13_int, object var_47_object)
		{
		object var_49_object;
		var_47_object = var_49_object;
			bool var_48_bool;
		func_1447(var_48_bool, var_49_object);
		if(!var_48_bool) { //@nz
			object var_77_object;
			var_47_object = var_77_object;
			func_1923(var_77_object);
		}
		func_446();
		object var_84_object;
		var_47_object = var_84_object;
		func_1936(var_84_object);
		}

	// @pe
	void OnPlayerDamage(object actor, float var_1_float, float fDamage, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, int var_13_int)
	{
		object var_15_object;
		var_12_bool = var_15_object;
		object var_16_object;
		var_13_int = var_16_object;
		bool var_14_bool;
		func_1986(var_14_bool, var_15_object, var_16_object);
		if(var_14_bool != 0) {
			object var_47_object;
			var_12_bool = var_47_object;
			func_345();
		}
	}

}


task task_3
{
	// @pe
	void OnAttacked(object actor, float var_1_float, float fDamage, bool var_3_bool, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, int var_12_int)
	{
		object var_13_object;
		var_12_int = var_13_object;
		func_1923(var_13_object);
	}

	// @pe
	void OnPlayerDamage(object actor, float var_1_float, float fDamage, bool var_3_bool, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, int var_13_int)
	{
		object var_15_object;
		var_12_bool = var_15_object;
		object var_16_object;
		var_13_int = var_16_object;
		bool var_14_bool;
		func_1986(var_14_bool, var_15_object, var_16_object);
	}

	// @pe
	void OnTimer(object var_0_object, float fTime, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, int var_12_int)
	{
		if(var_12_int != 0)
			return 0;
		bool var_15_bool;
		func_604(var_15_bool, fTime);
		if(!var_15_bool) //@nz
			var_0_object = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(object actor, float var_1_float, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, int var_12_int)
	{
		@RequestClearPath(var_12_int);
	}

	// @pe
	void OnDeath(object actor, float var_1_float, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, int var_12_int)
	{
		func_588(var_12_int);
		object var_14_object;
		var_12_int = var_14_object;
		func_1980();
	}

}


task task_4
{
	// @pe
	void OnAttacked(object actor, float var_1_float, float fDamage, bool var_3_bool, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, object var_12_object)
	{
		object var_13_object;
		var_12_object = var_13_object;
		func_1923(var_13_object);
	}

	// @pe
	void OnPlayerDamage(object actor, float var_1_float, float fDamage, bool var_3_bool, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, object var_12_object, object var_13_object)
	{
		object var_15_object;
		var_12_object = var_15_object;
		object var_16_object;
		var_13_object = var_16_object;
		bool var_14_bool;
		func_1986(var_14_bool, var_15_object, var_16_object);
	}

}


task task_5
{
	void OnUse(object actor, float var_1_float, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, object var_12_object)
	{
		bool var_14_bool;
		@IsOverrideActive(var_14_bool);
		if(!var_14_bool) //@nz
			@WorkWithCorpse(var_12_object);
	}

	// @pe
	void OnHit(object actor, float var_1_float, float fDamage, bool var_3_bool, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, object var_12_object, int var_13_int, float var_14_float, float var_15_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, float var_1_float, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, object var_12_object, string var_13_string)
	{
	}

	// @pe
	void OnDeath(object actor, float var_1_float, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, object var_12_object)
	{
	}

}


// @pe
void OnHit(object actor, float var_1_float, float fDamage, bool var_3_bool, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, object var_12_object, int var_13_int, float var_14_float, float var_15_float)
{
	object var_16_object;
	var_12_object = var_16_object;
	int var_17_int;
	var_13_int = var_17_int;
	float var_18_float;
	var_14_float = var_18_float;
	func_1471(var_17_int, var_18_float);
}


void OnPropertyChange(object var_0_object, float var_1_float, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, object var_12_object, string var_13_string)
{
	float var_15_float;
	if(var_13_string == "health") {
		@GetProperty("health", var_15_float);
		if(var_15_float <= 0)
			@SignalDeath(var_12_object);
	}
}


// @pe
void OnDeath(object actor, float var_1_float, float var_2_float, bool var_3_bool, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, object var_12_object)
{
	object var_13_object;
	var_12_object = var_13_object;
	func_1951(var_13_object);
}


// @pe
void func_0(float var_1_float, float var_2_float, object var_68_object)
{
	@GetSeeThreshold(var_1_float);
	@GetSeeFOV(var_2_float);
	@SetSeeThreshold(var_1_float / 1.5);
	object var_74_object;
	func_101(var_74_object, var_74_object);
}


void func_1538(object var_206_object)
{
	cvector var_210_cvector;
	var_206_object->GetPosition(var_210_cvector);
	cvector var_211_cvector;
	@GetPosition(var_211_cvector);
	cvector var_212_cvector = var_210_cvector - var_211_cvector;
	var_213_float = GetByIndex(var_212_cvector, 0);
	var_214_float = GetByIndex(var_212_cvector, 2);
	@RotateAsync(var_213_float, var_214_float);
}


void func_1923(object var_13_object)
{
	if(var_13_object == null) {
	}
	var_17_object = GlobalVars[0];
	bool var_15_bool;
	var_17_object->in(var_15_bool, var_13_object);
	if(!var_15_bool) { //@nz
		var_19_object = GlobalVars[0];
		var_19_object->add(var_13_object);
	}
}


// @pe
void func_1154(object var_173_object)
{
	object var_174_object;
	var_173_object = var_174_object;
	func_1177(var_174_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_642(object var_0_object, float var_1_float, float var_2_float, bool var_3_bool, bool var_4_bool, object var_93_object, bool var_94_bool, float var_95_float, bool var_150_bool)
{
	bool var_106_bool; bool var_107_bool; float var_108_float; cvector var_109_cvector; cvector var_110_cvector; bool var_111_bool; bool var_112_bool; float var_114_float; float var_115_float;
	var_1_float = 0;
	
	for(;;) {
		@HasAnimation(var_106_bool, "all", ("attack_begin" + (var_1_float + 1)));
		if(!var_106_bool) { //@nz
		} else {
			var_1_float += 1;
		}
		var_2_float = 0;

		for(;;) {
			@IsExisting3DSound(var_107_bool, ("attack" + (var_2_float + 1)));
			if(!var_107_bool) { //@nz
			} else {
									var_2_float += 1;
			}
			var_4_bool = 0;
			var_129_bool = IsFuncExist(var_93_object, "@GetAttackDistance", 1);
			if(var_129_bool != 0) {
				var_93_object->GetAttackDistance(var_108_float);
				var_108_float += 50;
			} else {
								var_95_float = var_108_float;

			}
			if(var_108_float >= 150)
				var_108_float = 150;
			var_3_bool = false;
			var_0_object = var_93_object;
			@IsPlayerActor(var_0_object, var_111_bool);
			if(var_94_bool != 0)
				var_112_bool = false;
			else
				var_112_bool = true;

			for(;;) {
				bool var_134_bool = false;
				bool var_135_bool;
				func_1447(var_135_bool, var_0_object);
				if(var_135_bool != 0) {
					if(!var_3_bool) //@nz
						var_134_bool = true;
				}
				if(var_134_bool != 0) {
					var_0_object->GetPFPosition(var_109_cvector); //@t
					@GetPFPosition(var_110_cvector);
					var_114_float = (var_109_cvector - var_110_cvector) | (var_109_cvector - var_110_cvector);
					if(var_114_float >= ((300.0 + var_108_float) * (300.0 + var_108_float))) {
						bool var_144_bool; float var_146_float;
						var_108_float = var_146_float;
						TaskCall(3);
						func_464(var_150_bool, var_151_object, var_144_bool, var_0_object, var_146_float, 3000.0, true, false);
						TaskReturn();
						if(!var_150_bool) { //@nz
						} else {
							var_112_bool = false;
					} else {
					if(var_114_float >= (var_95_float * var_95_float)) {
						if(!var_112_bool) { //@nz
							func_1538(var_0_object);
							@PlayAnimation("all", "attack_on");
							@WaitForAnimEnd();
							@StopAsync();
							var_112_bool = true;
						}
						@rand(var_115_float);
						bool var_217_bool;
						var_219_bool = var_115_float < 0.6;
						if(var_219_bool != 1) {
							bool var_220_bool;
							func_1082(true, var_220_bool);
							if(var_220_bool != 1)
								var_217_bool = false;
						}
						if(var_217_bool != 0) {
							@Face(var_0_object);
							@PlayAnimation("all", "attack_stay");
							bool var_228_bool; float var_229_float;
							func_990(var_115_float, var_228_bool, var_229_float);
							@StopAsync();
						} else {
							@Face(var_0_object);
							@PlayAnimation("all", "fjump");
							@WaitForAnimEnd();
							@SetSpeed([0.0, 0.0, 0.0]);
							@Stop();
							@StopAsync();
							bool var_398_bool;
							func_1082(var_115_float, var_398_bool);
							var_399_bool = !var_398_bool; //@nz
							if(var_399_bool == 0) goto Label_820;
							bool var_400_bool;
							func_1447(var_400_bool, var_0_object);
							if(!var_400_bool) { //@nz
								goto Label_830;
							}
							var_0_object->GetPFPosition(var_109_cvector); //@t
							@GetPFPosition(var_110_cvector);
							var_114_float = (var_109_cvector - var_110_cvector) | (var_109_cvector - var_110_cvector);
							if(!(var_114_float < (var_229_float * var_229_float))) goto Label_820;
							bool var_405_bool; float var_406_float;
							var_95_float = var_406_float;
							func_886(var_114_float, var_115_float, var_405_bool, var_406_float);
							var_407_bool = !var_405_bool; //@nz
							if(var_407_bool == 0) goto Label_820;
							goto Label_830;
					}
						bool var_408_bool; float var_409_float;
						var_95_float = var_409_float;
						func_886(var_114_float, var_115_float, var_408_bool, var_409_float);
						if(!var_408_bool) { //@nz
							goto Label_830;
						}
						var_112_bool = true;

					}
				Label_820:
					goto Label_829;
					}
					Label_829:
					}
				}
			Label_830:
				@WaitForAnimEnd();
				if(var_3_bool != 0)
					return 20;
				@PlayAnimation("all", "attack_off");
				@WaitForAnimEnd();
				if(var_111_bool != 0)
					@Sleep(2.0);
				return 20;

			}

		}

	}
}


void func_1030(object var_0_object, bool var_241_bool)
{
	cvector var_247_cvector; cvector var_248_cvector;
	bool var_252_bool;
	func_1447(var_252_bool, var_0_object);
	if(!var_252_bool) { //@nz
		var_241_bool = false;
		return 10;
	}
	bool var_255_bool;
	float var_251_float;
	func_1082(var_251_float, var_255_bool);
	if(var_255_bool != 0) {
		var_0_object->GetPFPosition(var_247_cvector); //@t
		@GetPFPosition(var_248_cvector);
		var_0_object->GetAttackDistance(var_251_float); //@t
		var_251_float += 50;
		if(((var_247_cvector - var_248_cvector) | (var_247_cvector - var_248_cvector)) <= (var_251_float * var_251_float)) {
			func_1063(var_251_float);
			var_241_bool = true;
			return 10;
		}
	}
	var_241_bool = false;
}


void func_1411(bool var_21_bool, object var_22_object)
{
	if(var_22_object == null) {
		var_21_bool = false;
		return 4;
	}
	bool var_28_bool = false;
	var_31_bool = IsFuncExist(var_22_object, "IsDead", 1);
	if(var_31_bool != 0) {
		bool var_32_bool; object var_33_object;
		var_22_object = var_33_object;
		func_1406(var_32_bool, var_33_object);
		if(var_32_bool != 0)
			var_28_bool = true;
	}
	if(var_28_bool != 0) {
		var_21_bool = false;
		return 4;
	}
	object var_25_object;
	@GetScene(var_25_object);
	if(var_25_object == null) {
		var_21_bool = false;
		return 4;
	}
	object var_26_object;
	var_22_object->GetScene(var_26_object);
	if(var_25_object != var_26_object) {
		var_21_bool = false;
		return 4;
	}
	var_21_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1292(string var_342_string, int var_343_int)
{
	if(var_343_int == 1)
		var_342_string = "fire";
	var_342_string = "phys";
}


void func_1549(bool var_53_bool)
{
	bool var_55_bool;
	@IsLoaded(var_55_bool);
	var_55_bool = var_53_bool;
}


// @pe
void func_1936(object var_84_object)
{
	object var_85_object;
	var_84_object = var_85_object;
	func_1923(var_85_object);
	object var_86_object;
	var_84_object = var_86_object;
	TaskCall(4);
	func_615(var_86_object, true);
	TaskReturn();
	@ResetAAS();
}


// @pe
void func_1554(float var_350_float, float var_351_float, float var_352_float)
{
	if(var_351_float < var_352_float)
		var_351_float = var_350_float;
	else
		var_352_float = var_350_float;
	
}


void func_1300(float var_36_float, object var_37_object)
{
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	cvector var_42_cvector;
	var_37_object->GetPosition(var_42_cvector);
	var_36_float = (var_42_cvector - var_41_cvector) | (var_42_cvector - var_41_cvector);
}


void func_1177(object var_174_object)
{
	cvector var_185_cvector; cvector var_186_cvector; cvector var_187_cvector; cvector var_188_cvector; string var_189_string; object var_190_object; bool var_191_bool; bool var_192_bool; float var_193_float; cvector var_194_cvector;
	if(var_174_object == null) {
		func_1264("fdie");
	} else {
		var_174_object->GetPosition(var_185_cvector);
		@GetPosition(var_186_cvector);
		@GetDirection(var_187_cvector);
		var_188_cvector = var_186_cvector - var_185_cvector;
		var_199_float = GetByIndex(var_188_cvector, 0);
		var_200_float = GetByIndex(var_187_cvector, 0);
		var_202_float = GetByIndex(var_188_cvector, 2);
		var_203_float = GetByIndex(var_187_cvector, 2);
		if(((var_199_float * var_200_float) + (var_202_float * var_203_float)) >= 0)
			var_189_string = "fdie";
		else
			var_189_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_174_object = var_190_object;
		var_210_bool = IsFuncExist(var_174_object, "GetScriptProperty", 2);
		if(var_210_bool != 0) {
			var_174_object->HasScriptProperty(var_191_bool, "Owner");
			if(var_191_bool != 0) {
				var_174_object->GetScriptProperty(var_190_object, "Owner");
				if(var_190_object == null)
					var_174_object = var_190_object;
			}
		}
		var_217_bool = IsFuncExist(var_190_object, "@GetEyesHeight", 1);
		if(var_217_bool != 0) {
			var_190_object->GetEyesHeight(var_193_float);
			var_194_cvector = [0.0, 0.0, 0.0];
			var_218_float = GetByIndex(var_194_cvector, 1);
			var_193_float = var_218_float;
			SetByIndex(var_194_cvector, 1) = var_218_float;
			@LookAsync(var_174_object, "head", var_194_cvector);
			var_192_bool = true;
		} else {
			var_192_bool = false;

		}
		@PlayAnimation("all", var_189_string);
		@WaitForAnimEnd();
		if(var_192_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_189_string);
		@RemoveEnvelope();
		var_190_object = null;
	}
	
}


// @pe
void func_1561(float var_36_float, float var_37_float, float var_38_float, float var_39_float)
{
	if(var_37_float < var_38_float) {
		var_38_float = var_36_float;
		return 0;
	}
	if(var_37_float > var_39_float) {
		var_39_float = var_36_float;
		return 0;
	}
	var_37_float = var_36_float;
}


void func_156(object var_0_object)
{
	@Stop();
	@StopGroup0();
	@StopAsync();
	@KillTimer(100);
	var_0_object = null;
}


void func_1308(bool var_26_bool, object var_27_object, string var_28_string)
{
	var_33_bool = IsFuncExist(var_27_object, "HasProperty", 2);
	if(!var_33_bool) { //@nz
		var_26_bool = false;
		return 2;
	}
	bool var_30_bool;
	var_27_object->HasProperty(var_28_string, var_30_bool);
	var_30_bool = var_26_bool;
}


// @pe
void func_1951(object var_13_object)
{
	object var_14_object;
	var_13_object = var_14_object;
	TaskCall(5);
	func_1133(var_14_object);
	TaskReturn();
}


void func_1572(object var_13_object)
{
	object var_15_object;
	@CreateObjectSet(var_15_object);
	var_15_object = var_13_object;
}
EMIT "Stack[-1] = 0";


void func_1447(bool var_17_bool, object var_18_object)
{
	object var_22_object;
	var_18_object = var_22_object;
	bool var_21_bool;
	func_1411(var_21_bool, var_22_object);
	if(!var_21_bool) { //@nz
		var_17_bool = false;
		return 2;
	}
	bool var_39_bool; object var_40_object;
	func_1308(var_39_bool, var_40_object, "noaccess");
	if(!var_39_bool) { //@nz
		var_17_bool = true;
		return 2;
	}
	int var_20_int;
	var_40_object->GetProperty("noaccess", var_20_int);
	var_17_bool = var_20_int == 0;
}


void func_1063(object var_0_object)
{
	@Face(var_0_object);
	@PlayAnimation("all", "bjump");
	cvector var_261_cvector;
	var_0_object->GetPFPosition(var_261_cvector); //@t
	cvector var_262_cvector;
	@GetPFPosition(var_262_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	@SetSpeed([0.0, 0.0, 0.0]);
}


void func_1320(bool var_18_bool, object var_19_object, string var_20_string, float var_21_float, float var_22_float, float var_23_float)
{
	object var_27_object;
	var_19_object = var_27_object;
	string var_28_string;
	var_20_string = var_28_string;
	bool var_26_bool;
	func_1308(var_26_bool, var_27_object, var_28_string);
	if(!var_26_bool) //@nz
		var_18_bool = false;
	float var_25_float;
	var_19_object->GetProperty(var_20_string, var_25_float);
	float var_36_float; float var_38_float; float var_39_float;
	var_22_float = var_38_float;
	var_23_float = var_39_float;
	func_1561(var_36_float, (var_25_float + var_21_float), var_38_float, var_39_float);
	var_19_object->SetProperty(var_20_string, var_36_float);
	var_18_bool = true;
}


void func_1578(int var_52_int)
{
	float var_54_float;
	@GetGameTime(var_54_float);
	var_52_int = 1 + (var_54_float / 24);
}


void func_299(object var_0_object, float var_1_float)
{
	var_0_object = true;
	var_1_float = false;
	@Stop();
	@StopGroup0();
}


void func_1841(int var_82_int, string var_83_string)
{
	int var_85_int;
	@GetInvItemByName(var_85_int, var_83_string);
	var_85_int = var_82_int;
}


void func_1587(string var_63_string, int var_64_int)
{
	string var_66_string = "idle";
	if(var_64_int != 0)
		var_66_string += var_64_int;
	var_66_string = var_63_string;
}


void func_1846(void)
{
	var_12_object = GlobalVars[0];
	object var_13_object;
	func_1572(var_13_object);
	var_13_object = var_12_object;
	GlobalVars[0] = var_12_object;
}


void func_1594(int var_57_int)
{
	int var_60_int; bool var_61_bool;
	var_60_int = 0;
	
	for(;;) {
		string var_63_string; int var_64_int;
		var_60_int = var_64_int;
		func_1587(var_63_string, var_64_int);
		@HasAnimation(var_61_bool, "all", var_63_string);
		if(!var_61_bool) //@nz
			break;
		var_60_int += 1;
	}
	var_60_int = var_57_int;
}


void func_315(bool var_37_bool)
{
	var_37_bool = false;
}


void func_1082(object var_0_object, bool var_220_bool)
{
	bool var_222_bool;
	var_225_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_225_bool != 0) {
		var_0_object->IsAttacking(var_222_bool); //@t
		var_222_bool = var_220_bool;
	}
	var_220_bool = false;
}


void func_1853(bool var_18_bool, object var_19_object)
{
	bool var_24_bool; object var_25_object;
	func_1447(var_24_bool, var_25_object);
	if(!var_24_bool) { //@nz
		var_18_bool = false;
		return 4;
	}
	var_59_object = GlobalVars[0];
	bool var_22_bool;
	var_59_object->in(var_22_bool, var_25_object);
	if(var_22_bool != 0) {
		var_18_bool = true;
		return 4;
	}
	bool var_61_bool; object var_62_object;
	func_1308(var_61_bool, var_62_object, "reputation");
	if(!var_61_bool) { //@nz
		var_18_bool = false;
		return 4;
	}
	float var_23_float;
	var_62_object->GetProperty("reputation", var_23_float);
	var_18_bool = var_23_float < 0.1;
}


void func_446(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1342(float var_314_float, object var_315_object, float var_316_float, int var_317_int)
{
	int var_327_int; int var_329_int;
	object var_334_object;
	var_315_object = var_334_object;
	bool var_333_bool;
	func_1308(var_333_bool, var_334_object, "health");
	if(!var_333_bool) //@nz
		var_314_float = 0.0;
	bool var_337_bool; object var_338_object;
	func_1308(var_337_bool, var_338_object, "armor");
	if(!var_337_bool) //@nz
		var_327_int = 0;
	else
		var_338_object->GetProperty("armor", var_327_int);
	string var_342_string; int var_343_int;
	var_317_int = var_343_int;
	func_1292(var_342_string, var_343_int);
	string var_328_string = "armor_" + var_342_string;
	bool var_346_bool; object var_347_object; string var_348_string;
	var_315_object = var_347_object;
	func_1308(var_346_bool, var_347_object, var_348_string);
	if(!var_346_bool) //@nz
		var_329_int = 0;
	else
		var_315_object->GetProperty(var_348_string, var_329_int);

	float var_350_float;
	func_1554(var_350_float, ((var_327_int + var_329_int) / 100.0), (float)1);
	float var_330_float;
	var_350_float = var_330_float;
	float var_331_float;
	var_315_object->GetProperty("health", var_331_float);
	float var_360_float;
	func_1561(var_360_float, (var_331_float - (var_316_float * (1 - var_330_float))), (float)0, (float)1);
	var_315_object->SetProperty("health", var_360_float);
	float var_332_float = var_314_float;
	
}


void func_1471(object var_16_object, int var_17_int)
{
	object var_29_object; object var_30_object; cvector var_31_cvector; float var_32_float; string var_38_string;
	bool var_39_bool = false;
	if(var_17_int != 4) {
		if(var_17_int != 5)
			var_39_bool = true;
	}
	if(var_39_bool != 0) {
		@GetScene(var_29_object);
		@GetPosition(var_31_cvector);
		@GetEyesHeight(var_32_float);
		var_44_float = GetByIndex(var_31_cvector, 1);
		SetByIndex(var_31_cvector, 1) = (var_44_float + (var_32_float / 2));
		@AddActorByType(var_30_object, "scripted", var_29_object, var_31_cvector, [0.0, 0.0, 1.0], "blood.xml");
		var_30_object = null;
		var_29_object = null;
	}
	if(var_16_object == null)
		return 20;
	int var_33_int;
	@GetSecondaryAnimationType(var_33_int);
	if(var_33_int < 0)
		return 20;
	cvector var_34_cvector;
	var_16_object->GetPosition(var_34_cvector);
	cvector var_35_cvector;
	@GetPosition(var_35_cvector);
	cvector var_36_cvector;
	@GetDirection(var_36_cvector);
	cvector var_37_cvector = var_35_cvector - var_34_cvector;
	var_53_float = GetByIndex(var_37_cvector, 0);
	var_54_float = GetByIndex(var_36_cvector, 0);
	var_56_float = GetByIndex(var_37_cvector, 2);
	var_57_float = GetByIndex(var_36_cvector, 2);
	if(((var_53_float * var_54_float) + (var_56_float * var_57_float)) >= 0)
		var_38_string = "fhit";
	else
		var_38_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_38_string + "1"), (var_38_string + "2"), -10);
	
}


void func_1986(bool var_14_bool, object var_15_object, object var_16_object)
{
	object var_22_object;
	var_16_object = var_22_object;
	bool var_21_bool;
	func_1308(var_21_bool, var_22_object, "reputation");
	if(!var_21_bool) { //@nz
		var_14_bool = false;
		return 4;
	}
	float var_19_float;
	var_16_object->GetProperty("reputation", var_19_float);
	if(var_19_float < 0.5) {
		var_14_bool = false;
		return 4;
	}
	bool var_20_bool;
	@CanSee(var_20_bool, var_15_object);
	bool var_34_bool = true;
	if(var_20_bool != 1) {
		float var_36_float; object var_37_object;
		func_1300(var_36_float, var_37_object);
		var_45_bool = var_36_float <= 160000.0;
		if(var_45_bool != 1)
			var_34_bool = false;
	}
	if(var_34_bool != 0) {
		@ReportReputationChange(var_37_object, var_16_object, -0.2);
		var_14_bool = true;
		return 4;
	}
	var_14_bool = false;
}


void func_69(float var_1_float, float var_2_float)
{
	@SetSeeThreshold(var_1_float);
	@SetSeeFOV(var_2_float);
	func_156(var_78_int);
}


void func_1093(float var_2_float, bool var_4_bool)
{
	int var_285_int;
	if(!var_2_float) //@nz
		return 4;
	if(var_4_bool != 0) {
		if((var_4_bool + -1) > 0)
			return 4;
	}
	float var_284_float;
	@rand(var_284_float);
	float var_291_float;
	func_1131(var_291_float);
	if(var_284_float < var_291_float) {
		@irand(var_285_int, var_2_float);
		@Speak("attack" + (var_285_int + 1));
		int var_296_int;
		func_1129(var_296_int);
		var_4_bool = var_296_int;
	}
}


void func_966(bool var_386_bool, float var_387_float)
{
	float var_390_float; bool var_391_bool;
	@rand(var_390_float);
	if(var_390_float < var_387_float) {

		for(;;) {
			@IsAnimationPlaying(var_391_bool);
			if(!var_391_bool) { //@nz
			} else {
				bool var_394_bool;
				func_1030(var_391_bool, var_394_bool);
				if(var_394_bool != 0) {
					var_386_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_386_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
}


void func_1611(int var_49_int, int var_50_int)
{
	int var_65_int;
	if(var_49_int > var_50_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	int var_64_int = 0;
	if(var_49_int != var_50_int) {
		@irand(var_65_int, (var_50_int - var_49_int));
	} else if(var_49_int == 0) {
		return 8;
	}
	var_64_int += var_49_int;
	if(var_64_int == 0)
		return 8;
	int var_66_int;
	@GetInvItemByName(var_66_int, "Money");
	bool var_67_bool;
	@AddItem(var_67_bool, var_66_int, 0, var_64_int);
	
}


void func_588(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_847(object var_0_object, float var_300_float, int var_301_int)
{
	object var_305_object; float var_306_float; float var_307_float;
	@GetVictim((var_300_float * 0.9), var_305_object);
	@ReportAttack(var_0_object);
	if(var_305_object == var_0_object) {
		float var_311_float; object var_312_object; int var_313_int;
		var_305_object = var_312_object;
		var_301_int = var_313_int;
		func_623(var_313_int);
		var_311_float = var_306_float;
		float var_314_float; object var_315_object; float var_316_float; int var_317_int;
		var_305_object = var_315_object;
		int var_318_int; object var_319_object; int var_320_int;
		var_305_object = var_319_object;
		var_301_int = var_320_int;
		func_626(var_320_int);
		var_318_int = var_317_int;
		func_1342(var_314_float, var_315_object, var_316_float, var_317_int);
		var_314_float = var_307_float;
		int var_367_int;
		func_1125(var_367_int);
		@ReportHit(var_0_object, var_367_int, var_307_float, var_316_float);
		object var_368_object; float var_369_float;
		var_305_object = var_368_object;
		var_307_float = var_369_float;
		func_1127();
	}
}
EMIT "Stack[-3] = 0";


void func_464(object var_0_object, float var_1_float, bool var_144_bool, object var_145_object, float var_146_float, float var_147_float, bool var_148_bool, bool var_149_bool)
{
	bool var_160_bool; object var_162_object; cvector var_163_cvector; cvector var_164_cvector; float var_166_float; object var_167_object;
	var_0_object = false;
	var_1_float = var_145_object;
	bool var_161_bool;
	var_149_bool = var_161_bool;
	
	for(;;) {
		bool var_168_bool; object var_169_object;
		var_145_object = var_169_object;
		func_604(var_168_bool, var_169_object);
		if(!var_168_bool) { //@nz
			var_144_bool = false;
			return 16;
		}
		var_145_object->GetPosition(var_163_cvector);
		@GetPosition(var_164_cvector);
		var_166_float = (var_163_cvector - var_164_cvector) | (var_163_cvector - var_164_cvector);
		bool var_173_bool = false;
		if(var_147_float > 0) {
			if(var_166_float > (var_147_float * var_147_float))
				var_173_bool = true;
		}
		if(var_173_bool != 0) {
			@Stop();
			var_144_bool = false;
			return 16;
		}
		if(var_166_float > (var_146_float * var_146_float)) {
			var_145_object->GetPFPosition(var_163_cvector);
			@FindPathTo(var_167_object, var_163_cvector);
			if(var_167_object != null) {
				var_167_object = var_162_object;
				var_167_object = null;
			}
			if(var_162_object != null) {
				if(var_161_bool == 0) goto Label_517;
				var_161_bool = false;
				@RotatePath(var_162_object, var_160_bool);
				if(!var_160_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_186_string;
						func_611(var_186_string);
						string var_187_string;
						func_613(var_187_string);
						@FollowPath(var_162_object, var_148_bool, var_160_bool, var_186_string, var_187_string);
						if(!var_160_bool) { //@nz
							if(var_0_object == 0) goto Label_536;
							var_162_object = null;
						}
					EMIT "GOTO 0x219";

					Label_536:
						} else {
					var_162_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_160_bool);
					if(!var_160_bool) { //@nz
						if(var_0_object != 0) {
							var_162_object = null;
							goto Label_564;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_564;
		}
			var_167_object = null;
			goto Label_562;

		Label_562:
			var_162_object = null;

		}
	Label_564:
		for(;;) {
			var_144_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_86(float var_2_float, bool var_85_bool)
{
	@SetSeeFOV(var_2_float * 1.8);
	@PlayAnimation("all", "hunt");
	bool var_87_bool;
	@WaitForAnimEnd(var_87_bool);
	@SetSeeFOV(var_2_float);
	var_85_bool = !var_87_bool;
}


void func_1884(bool var_13_bool, object var_14_object)
{
	bool var_16_bool;
	@IsPlayerActor(var_14_object, var_16_bool);
	if(!var_16_bool) //@nz
		var_13_bool = false;
	bool var_18_bool; object var_19_object;
	var_14_object = var_19_object;
	func_1853(var_18_bool, var_19_object);
	var_18_bool = var_13_bool;
}


// @pe
void func_604(bool var_15_bool, object var_16_object)
{
	object var_18_object;
	var_16_object = var_18_object;
	bool var_17_bool;
	func_1447(var_17_bool, var_18_object);
	var_17_bool = var_15_bool;
}


void func_990(object var_0_object, bool var_228_bool, float var_229_float)
{
	bool var_235_bool; cvector var_236_cvector; cvector var_237_cvector; cvector var_238_cvector; float var_239_float;
	
	for(;;) {
		@IsAnimationPlaying(var_235_bool);
		if(!var_235_bool) //@nz
			break;
		bool var_241_bool;
		func_1030(var_239_float, var_241_bool);
		if(var_241_bool != 0) {
			var_228_bool = true;
			return 10;
		}
		bool var_266_bool;
		func_1447(var_266_bool, var_0_object);
		if(!var_266_bool) { //@nz
			var_228_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_236_cvector); //@t
		@GetPFPosition(var_237_cvector);
		var_238_cvector = var_236_cvector - var_237_cvector;
		var_239_float = var_238_cvector | var_238_cvector;
		if(var_239_float < (var_229_float * var_229_float)) {
			bool var_271_bool; float var_272_float;
			var_229_float = var_272_float;
			func_886(var_238_cvector, var_239_float, var_271_bool, var_272_float);
			var_228_bool = true;
			return 10;
		}
		@sync();
	}
	var_228_bool = false;
}


void func_611(string var_186_string)
{
	var_186_string = "walk";
}


void func_101(object var_0_object, object var_74_object)
{
	bool var_77_bool; int var_78_int;
	var_0_object = var_74_object;
	@Face(var_0_object);
	@SetTimer(100, 15);
	
	for(;;) {
		if(!(var_0_object != null)) goto Label_124;
		@irand(var_78_int, 5);
		@Sleep((var_78_int + 5), var_77_bool);
		bool var_85_bool;
		func_86(var_78_int, var_85_bool);
		if(var_85_bool != 0)
			func_69(var_77_bool, var_78_int);
	}
}


void func_613(string var_187_string)
{
	var_187_string = "run";
}


void func_1125(int var_367_int)
{
	var_367_int = 0;
}


// @pe
void func_1127(void)
{
}


// @pe
void func_1897(object var_67_object)
{
	object var_68_object;
	var_67_object = var_68_object;
	TaskCall(0);
	func_0(var_70_float, var_71_float, var_68_object);
	TaskReturn();
}


void func_1129(int var_296_int)
{
	var_296_int = 1;
}


void func_235(object var_0_object, float var_1_float)
{
	float var_23_float; cvector var_24_cvector; cvector var_25_cvector; float var_26_float; bool var_27_bool; object var_28_object; bool var_29_bool;
	@rand(var_23_float, 0.5);
	@Sleep(var_23_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_247:
				@GetPosition(var_25_cvector);
				@GetCameraFarDistance(var_26_float);
				@GetRandomPFPointInCircle(var_24_cvector, var_25_cvector, (var_26_float * 2.5), var_27_bool);
				if(var_27_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_247;
			}
				var_1_float = false;
		}
		}
		goto Label_264;

	Label_264:
		@FindShiftedPathTo(var_28_object, var_24_cvector);
		if(var_28_object != null) {
			@RotatePath(var_28_object, var_29_bool);
			if(var_29_bool != 0) {
				bool var_37_bool;
				func_315(var_37_bool);
				@FollowPath(var_28_object, var_37_bool, var_29_bool);
				var_28_object = null;
				if(var_29_bool != 0) {
					TaskCall(2);
					func_377();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_28_object = null;
	}
	
}


void func_1131(float var_291_float)
{
	var_291_float = 0.5;
}


void func_1641(void)
{
	bool var_46_bool;
	@ClearSubContainer(0);
	int var_52_int;
	func_1578(var_52_int);
	func_1611(0, (100 + (var_52_int * 100)));
	int var_78_int;
	func_1578(var_78_int);
	int var_47_int;
	var_78_int = var_47_int;
	int var_45_int;
	@irand(var_45_int, 3);
	if(var_45_int == 0) {
		int var_82_int;
		func_1841(var_82_int, "bottle_water");
		@AddItem(var_46_bool, var_82_int, 0, 1);
	}
	@irand(var_45_int, 3);
	if(var_45_int == 0) {
		int var_91_int;
		func_1841(var_91_int, "rusk");
		@AddItem(var_46_bool, var_91_int, 0, 1);
	}
	@irand(var_45_int, 7);
	if(var_45_int == 0) {
		int var_98_int;
		func_1841(var_98_int, "bandage");
		@AddItem(var_46_bool, var_98_int, 0, 1);
	}
	@irand(var_45_int, 7);
	if(var_45_int == 0) {
		int var_105_int;
		func_1841(var_105_int, "tourniquet");
		@AddItem(var_46_bool, var_105_int, 0, 1);
	}
	@irand(var_45_int, 20);
	if(var_45_int == 0) {
		int var_112_int;
		func_1841(var_112_int, "packet");
		@AddItem(var_46_bool, var_112_int, 0, 1);
	}
	@irand(var_45_int, 20);
	if(var_45_int == 0) {
		int var_119_int;
		func_1841(var_119_int, "hook");
		@AddItem(var_46_bool, var_119_int, 0, 1);
	}
	@irand(var_45_int, 30);
	if(var_45_int == 0) {
		int var_126_int;
		func_1841(var_126_int, "watch");
		@AddItem(var_46_bool, var_126_int, 0, 1);
	}
	if(var_47_int >= 3) {
		@irand(var_45_int, 2);
		if(var_45_int == 0) {
			int var_135_int;
			func_1841(var_135_int, "alpha_pills");
			@AddItem(var_46_bool, var_135_int, 0, 1);
		}
	}
	if(var_47_int >= 4) {
		@irand(var_45_int, 5);
		if(var_45_int == 0) {
			int var_144_int;
			func_1841(var_144_int, "beta_pills");
			@AddItem(var_46_bool, var_144_int, 0, 1);
		}
	}
	if(var_47_int >= 6) {
		@irand(var_45_int, 8);
		if(var_45_int == 0) {
			int var_153_int;
			func_1841(var_153_int, "gamma_pills");
			@AddItem(var_46_bool, var_153_int, 0, 1);
		}
	}
	if(var_47_int >= 8) {
		@irand(var_45_int, 2);
		if(var_45_int == 0) {
			int var_162_int;
			func_1841(var_162_int, "revolver_ammo");
			@AddItem(var_46_bool, var_162_int, 0, 1);
		}
		@irand(var_45_int, 2);
		if(var_45_int == 0) {
			int var_169_int;
			func_1841(var_169_int, "rifle_ammo");
			@AddItem(var_46_bool, var_169_int, 0, 1);
		}
	}
}


// @pe
void func_615(object var_86_object, bool var_87_bool)
{
	object var_93_object; bool var_94_bool;
	func_642(var_89_int, var_90_int, var_91_bool, var_92_int, var_93_object, var_94_bool, var_93_object, var_94_bool, 180.0);
}


// @pe
void func_623(float var_311_float)
{
	var_311_float = 0.1;
}


// @pe
void func_1264(string var_196_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_196_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_196_string);
	@RemoveEnvelope();
}


// @pe
void func_1905(bool var_13_bool, object var_14_object)
{
	object var_16_object;
	var_14_object = var_16_object;
	bool var_15_bool;
	func_1853(var_15_bool, var_16_object);
	var_15_bool = var_13_bool;
}


// @pe
void func_626(int var_318_int)
{
	var_318_int = 0;
}


void func_1133(object var_14_object)
{
	bool var_16_bool;
	@IsPlayerActor(var_14_object, var_16_bool);
	if(var_16_bool != 0) {
		bool var_18_bool; object var_19_object;
		var_14_object = var_19_object;
		func_1320(var_18_bool, var_19_object, "reputation", -0.3, (float)0, (float)1);
	}
	func_1641();
	object var_173_object;
	var_14_object = var_173_object;
	func_1154(var_173_object);
}


void func_886(object var_0_object, float var_1_float, bool var_271_bool, float var_272_float)
{
	int var_275_int;
	@irand(var_275_int, var_1_float);
	var_275_int += 1;
	@Face(var_0_object);
	@SetAttackState(true);
	@PlayAnimation("all", ("attack_begin" + var_275_int));
	@WaitForAnimEnd();
	bool var_276_bool;
	func_1093(var_275_int, var_276_bool);
	bool var_297_bool;
	func_1447(var_297_bool, var_0_object);
	if(!var_297_bool) { //@nz
		@StopAsync();
		var_271_bool = false;
		return 4;
	}
	float var_300_float; int var_301_int;
	var_272_float = var_300_float;
	var_275_int = var_301_int;
	func_847(var_276_bool, var_300_float, var_301_int);
	@HasAnimation(var_276_bool, "all", ("attack_middle" + var_275_int));
	if(var_276_bool != 0) {
		@PlayAnimation("all", ("attack_middle" + var_275_int));
		@WaitForAnimEnd();
		bool var_377_bool;
		func_1447(var_377_bool, var_0_object);
		if(!var_377_bool) { //@nz
			@StopAsync();
			var_271_bool = false;
			return 4;
		}
		float var_380_float; int var_381_int;
		var_272_float = var_380_float;
		var_275_int = var_381_int;
		func_847(var_276_bool, var_380_float, var_381_int);
	}
	@SetAttackState(false);
	@PlayAnimation("all", ("attack_end" + var_275_int));
	bool var_386_bool;
	func_966(var_386_bool, 0.75);
	@StopAsync();
	var_271_bool = true;
}


// @pe
void func_1912(object var_64_object)
{
	object var_65_object;
	var_64_object = var_65_object;
	TaskCall(4);
	func_615(var_65_object, true);
	TaskReturn();
	@ResetAAS();
}


void func_377(void)
{
	int var_48_int; int var_49_int; bool var_50_bool; float var_51_float; bool var_52_bool;
	@WaitForAnimEnd();
	bool var_53_bool;
	func_1549(var_53_bool);
	if(!var_53_bool) //@nz
		return 14;
	int var_57_int;
	func_1594(var_57_int);
	int var_46_int;
	var_57_int = var_46_int;
	int var_47_int = 0;
	
	for(;;) {
		bool var_70_bool = false;
		if(var_47_int < 5) {
			bool var_73_bool;
			func_1549(var_73_bool);
			if(var_73_bool != 0)
				var_70_bool = true;
		}
		if(var_70_bool != 0) {
			@irand(var_48_int, 3);
			if(var_48_int == 0) {
				if(var_46_int == 0) goto Label_424;
				@irand(var_49_int, var_46_int);
				string var_79_string; int var_80_int;
				var_49_int = var_80_int;
				func_1587(var_79_string, var_80_int);
				@PlayAnimation("all", var_79_string);
				@WaitForAnimEnd(var_50_bool);
				if(!var_50_bool) { //@nz
				} else {
			} else {
			if(var_48_int == 1) {
				@rand(var_51_float, 4);
				@Sleep((var_51_float + 1), var_52_bool);
				if(!var_52_bool) { //@nz
					goto Label_445;
				}
			} else if(var_47_int != 0) {
				goto Label_445;
			}
			}
				var_47_int += 1;
			}
		}
	Label_445:
		return 14;

	}
	
}


void func_1406(bool var_32_bool, object var_33_object)
{
	bool var_35_bool;
	var_33_object->IsDead(var_35_bool);
	var_35_bool = var_32_bool;
}


