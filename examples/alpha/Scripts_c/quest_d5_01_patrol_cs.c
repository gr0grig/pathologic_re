maintask task_0
{
	void init(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object)
	{
	
		for(;;) {
			TaskCall(1);
			func_10();
			TaskReturn();
			@Sleep(0.5);
		}
	}
	EMIT "Return(); Pop(0)";

}


task task_1
{
}


task task_2
{
	// @pe
	void OnTimer(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, int var_7_int)
	{
		if(var_7_int != 0)
			return 0;
		bool var_10_bool;
		func_662(var_10_bool, var_1_int);
		if(!var_10_bool) //@nz
			var_0_object = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(object actor, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object)
	{
		@RequestClearPath(var_7_object);
	}

	// @pe
	void OnDeath(object actor, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object)
	{
		func_646(var_7_object);
		object var_9_object;
		var_7_object = var_9_object;
		func_1114();
	}

}


task task_3
{
	void OnUse(object actor, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) //@nz
			@WorkWithCorpse(var_7_object);
	}

	void OnUnload(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object)
	{
		object var_7_object;
		func_1049(var_7_object);
		@RemoveActor(var_7_object);
		@Hold();
	}

	// @pe
	void OnHit(object actor, int iHitType, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, float var_9_float, float var_10_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, string var_8_string)
	{
	}

	// @pe
	void OnDeath(object actor, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object)
	{
	}

}


// @pe
void OnHit(object actor, int iHitType, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, float var_9_float, float var_10_float)
{
	object var_11_object;
	var_7_object = var_11_object;
	int var_12_int;
	var_8_int = var_12_int;
	float var_13_float;
	var_9_float = var_13_float;
	func_971(var_12_int, var_13_float);
}


void OnPropertyChange(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, string var_8_string)
{
	float var_10_float;
	if(var_8_string == "health") {
		@GetProperty("health", var_10_float);
		if(var_10_float <= 0)
			@SignalDeath(var_7_object);
	}
}


// @pe
void OnDeath(object actor, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object)
{
	object var_8_object;
	var_7_object = var_8_object;
	func_1085(var_8_object);
}


void func_514(int var_322_int)
{
	var_322_int = 0;
}


// @pe
void func_516(void)
{
}


void func_646(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_518(int var_251_int)
{
	var_251_int = 1;
}


void func_520(float var_246_float)
{
	var_246_float = 0.5;
}


void func_522(object var_0_object, int var_1_int, bool var_99_bool, object var_100_object, float var_101_float, float var_102_float, bool var_103_bool, bool var_104_bool)
{
	bool var_115_bool; object var_117_object; cvector var_118_cvector; cvector var_119_cvector; float var_121_float; object var_122_object;
	var_0_object = false;
	var_1_int = var_100_object;
	bool var_116_bool;
	var_104_bool = var_116_bool;
	
	for(;;) {
		bool var_123_bool; object var_124_object;
		var_100_object = var_124_object;
		func_662(var_123_bool, var_124_object);
		if(!var_123_bool) { //@nz
			var_99_bool = false;
			return 16;
		}
		var_100_object->GetPosition(var_118_cvector);
		@GetPosition(var_119_cvector);
		var_121_float = (var_118_cvector - var_119_cvector) | (var_118_cvector - var_119_cvector);
		bool var_128_bool = false;
		if(var_102_float > 0) {
			if(var_121_float > (var_102_float * var_102_float))
				var_128_bool = true;
		}
		if(var_128_bool != 0) {
			@Stop();
			var_99_bool = false;
			return 16;
		}
		if(var_121_float > (var_101_float * var_101_float)) {
			var_100_object->GetPFPosition(var_118_cvector);
			@FindPathTo(var_122_object, var_118_cvector);
			if(var_122_object != null) {
				var_122_object = var_117_object;
				var_122_object = null;
			}
			if(var_117_object != null) {
				if(var_116_bool == 0) goto Label_575;
				var_116_bool = false;
				@RotatePath(var_117_object, var_115_bool);
				if(!var_115_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_141_string;
						func_669(var_141_string);
						string var_142_string;
						func_671(var_142_string);
						@FollowPath(var_117_object, var_103_bool, var_115_bool, var_141_string, var_142_string);
						if(!var_115_bool) { //@nz
							if(var_0_object == 0) goto Label_594;
							var_117_object = null;
						}
					EMIT "GOTO 0x253";

					Label_594:
						} else {
					var_117_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_115_bool);
					if(!var_115_bool) { //@nz
						if(var_0_object != 0) {
							var_117_object = null;
							goto Label_622;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_622;
		}
			var_122_object = null;
			goto Label_620;

		Label_620:
			var_117_object = null;

		}
	Label_622:
		for(;;) {
			var_99_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_10(void)
{
	object var_13_object;
	@FindActor(var_13_object, "player");
	if(!var_13_object) { //@nz
	}
	object var_16_object;
	object var_12_object;
	func_31(var_8_int, var_9_int, var_10_bool, var_11_int, var_12_object, var_16_object, var_16_object, true, 180.0);
}
EMIT "Stack[-1] = 0";


void func_906(bool var_73_bool, object var_74_object)
{
	bool var_76_bool;
	var_74_object->IsDead(var_76_bool);
	var_76_bool = var_73_bool;
}


void func_1038(object var_161_object)
{
	cvector var_165_cvector;
	var_161_object->GetPosition(var_165_cvector);
	cvector var_166_cvector;
	@GetPosition(var_166_cvector);
	cvector var_167_cvector = var_165_cvector - var_166_cvector;
	var_168_float = GetByIndex(var_167_cvector, 0);
	var_169_float = GetByIndex(var_167_cvector, 2);
	@RotateAsync(var_168_float, var_169_float);
}


void func_911(bool var_62_bool, object var_63_object)
{
	if(var_63_object == null) {
		var_62_bool = false;
		return 4;
	}
	bool var_69_bool = false;
	var_72_bool = IsFuncExist(var_63_object, "IsDead", 1);
	if(var_72_bool != 0) {
		bool var_73_bool; object var_74_object;
		var_63_object = var_74_object;
		func_906(var_73_bool, var_74_object);
		if(var_73_bool != 0)
			var_69_bool = true;
	}
	if(var_69_bool != 0) {
		var_62_bool = false;
		return 4;
	}
	object var_66_object;
	@GetScene(var_66_object);
	if(var_66_object == null) {
		var_62_bool = false;
		return 4;
	}
	object var_67_object;
	var_63_object->GetScene(var_67_object);
	if(var_66_object != var_67_object) {
		var_62_bool = false;
		return 4;
	}
	var_62_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_275(object var_0_object, int var_1_int, bool var_226_bool, float var_227_float)
{
	int var_230_int;
	@irand(var_230_int, var_1_int);
	var_230_int += 1;
	@Face(var_0_object);
	@SetAttackState(true);
	@PlayAnimation("all", ("attack_begin" + var_230_int));
	@WaitForAnimEnd();
	bool var_231_bool;
	func_482(var_230_int, var_231_bool);
	bool var_252_bool;
	func_947(var_252_bool, var_0_object);
	if(!var_252_bool) { //@nz
		@StopAsync();
		var_226_bool = false;
		return 4;
	}
	float var_255_float; int var_256_int;
	var_227_float = var_255_float;
	var_230_int = var_256_int;
	func_236(var_231_bool, var_255_float, var_256_int);
	@HasAnimation(var_231_bool, "all", ("attack_middle" + var_230_int));
	if(var_231_bool != 0) {
		@PlayAnimation("all", ("attack_middle" + var_230_int));
		@WaitForAnimEnd();
		bool var_332_bool;
		func_947(var_332_bool, var_0_object);
		if(!var_332_bool) { //@nz
			@StopAsync();
			var_226_bool = false;
			return 4;
		}
		float var_335_float; int var_336_int;
		var_227_float = var_335_float;
		var_230_int = var_336_int;
		func_236(var_231_bool, var_335_float, var_336_int);
	}
	@SetAttackState(false);
	@PlayAnimation("all", ("attack_end" + var_230_int));
	bool var_341_bool;
	func_355(var_341_bool, 0.75);
	@StopAsync();
	var_226_bool = true;
}


// @pe
void func_662(bool var_123_bool, object var_124_object)
{
	object var_126_object;
	var_124_object = var_126_object;
	bool var_125_bool;
	func_947(var_125_bool, var_126_object);
	var_125_bool = var_123_bool;
}


// @pe
void func_25(float var_266_float)
{
	var_266_float = 0.3;
}


// @pe
void func_794(string var_38_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_38_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_38_string);
	@RemoveEnvelope();
}


void func_1049(object var_7_object)
{
	object var_9_object;
	@self(var_9_object);
	var_9_object = var_7_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_28(int var_273_int)
{
	var_273_int = 0;
}


void func_669(string var_141_string)
{
	var_141_string = "walk";
}


void func_31(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, object var_16_object, bool var_17_bool, float var_18_float, bool var_105_bool)
{
	bool var_29_bool; bool var_30_bool; float var_31_float; cvector var_32_cvector; cvector var_33_cvector; bool var_34_bool; bool var_35_bool; float var_37_float; float var_38_float;
	var_1_int = 0;
	
	for(;;) {
		@HasAnimation(var_29_bool, "all", ("attack_begin" + (var_1_int + 1)));
		if(!var_29_bool) { //@nz
		} else {
			var_1_int += 1;
		}
		var_2_int = 0;

		for(;;) {
			@IsExisting3DSound(var_30_bool, ("attack" + (var_2_int + 1)));
			if(!var_30_bool) { //@nz
			} else {
									var_2_int += 1;
			}
			var_4_int = 0;
			var_52_bool = IsFuncExist(var_16_object, "@GetAttackDistance", 1);
			if(var_52_bool != 0) {
				var_16_object->GetAttackDistance(var_31_float);
				var_31_float += 50;
			} else {
								var_18_float = var_31_float;

			}
			if(var_31_float >= 150)
				var_31_float = 150;
			var_3_bool = false;
			var_0_object = var_16_object;
			@IsPlayerActor(var_0_object, var_34_bool);
			if(var_17_bool != 0)
				var_35_bool = false;
			else
				var_35_bool = true;

			for(;;) {
				bool var_57_bool = false;
				bool var_58_bool;
				func_947(var_58_bool, var_0_object);
				if(var_58_bool != 0) {
					if(!var_3_bool) //@nz
						var_57_bool = true;
				}
				if(var_57_bool != 0) {
					var_0_object->GetPFPosition(var_32_cvector); //@t
					@GetPFPosition(var_33_cvector);
					var_37_float = (var_32_cvector - var_33_cvector) | (var_32_cvector - var_33_cvector);
					if(var_37_float >= ((400.0 + var_31_float) * (400.0 + var_31_float))) {
						bool var_99_bool; float var_101_float;
						var_31_float = var_101_float;
						TaskCall(2);
						func_522(var_105_bool, var_106_object, var_99_bool, var_0_object, var_101_float, 10000.0, true, false);
						TaskReturn();
						if(!var_105_bool) { //@nz
						} else {
							var_35_bool = false;
					} else {
					if(var_37_float >= (var_18_float * var_18_float)) {
						if(!var_35_bool) { //@nz
							func_1038(var_0_object);
							@PlayAnimation("all", "attack_on");
							@WaitForAnimEnd();
							@StopAsync();
							var_35_bool = true;
						}
						@rand(var_38_float);
						bool var_172_bool;
						var_174_bool = var_38_float < 0.6;
						if(var_174_bool != 1) {
							bool var_175_bool;
							func_471(true, var_175_bool);
							if(var_175_bool != 1)
								var_172_bool = false;
						}
						if(var_172_bool != 0) {
							@Face(var_0_object);
							@PlayAnimation("all", "attack_stay");
							bool var_183_bool; float var_184_float;
							func_379(var_38_float, var_183_bool, var_184_float);
							@StopAsync();
						} else {
							@Face(var_0_object);
							@PlayAnimation("all", "fjump");
							@WaitForAnimEnd();
							@SetSpeed([0.0, 0.0, 0.0]);
							@Stop();
							@StopAsync();
							bool var_353_bool;
							func_471(var_38_float, var_353_bool);
							var_354_bool = !var_353_bool; //@nz
							if(var_354_bool == 0) goto Label_209;
							bool var_355_bool;
							func_947(var_355_bool, var_0_object);
							if(!var_355_bool) { //@nz
								goto Label_219;
							}
							var_0_object->GetPFPosition(var_32_cvector); //@t
							@GetPFPosition(var_33_cvector);
							var_37_float = (var_32_cvector - var_33_cvector) | (var_32_cvector - var_33_cvector);
							if(!(var_37_float < (var_184_float * var_184_float))) goto Label_209;
							bool var_360_bool; float var_361_float;
							var_18_float = var_361_float;
							func_275(var_37_float, var_38_float, var_360_bool, var_361_float);
							var_362_bool = !var_360_bool; //@nz
							if(var_362_bool == 0) goto Label_209;
							goto Label_219;
					}
						bool var_363_bool; float var_364_float;
						var_18_float = var_364_float;
						func_275(var_37_float, var_38_float, var_363_bool, var_364_float);
						if(!var_363_bool) { //@nz
							goto Label_219;
						}
						var_35_bool = true;

					}
				Label_209:
					goto Label_218;
					}
					Label_218:
					}
				}
			Label_219:
				@WaitForAnimEnd();
				if(var_3_bool != 0)
					return 20;
				@PlayAnimation("all", "attack_off");
				@WaitForAnimEnd();
				if(var_34_bool != 0)
					@Sleep(2.0);
				return 20;

			}

		}

	}
}


void func_671(string var_142_string)
{
	var_142_string = "run";
}


// @pe
void func_1055(float var_305_float, float var_306_float, float var_307_float)
{
	if(var_306_float < var_307_float)
		var_306_float = var_305_float;
	else
		var_307_float = var_305_float;
	
}


// @pe
void func_673(object var_9_object)
{
	bool var_10_bool;
	func_1073(var_10_bool, "quest_d5_01", "dead");
	object var_16_object;
	var_9_object = var_16_object;
	func_707(var_16_object);
	@SetRTEnvelope(50, 40);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_419(object var_0_object, bool var_196_bool)
{
	cvector var_202_cvector; cvector var_203_cvector;
	bool var_207_bool;
	func_947(var_207_bool, var_0_object);
	if(!var_207_bool) { //@nz
		var_196_bool = false;
		return 10;
	}
	bool var_210_bool;
	float var_206_float;
	func_471(var_206_float, var_210_bool);
	if(var_210_bool != 0) {
		var_0_object->GetPFPosition(var_202_cvector); //@t
		@GetPFPosition(var_203_cvector);
		var_0_object->GetAttackDistance(var_206_float); //@t
		var_206_float += 50;
		if(((var_202_cvector - var_203_cvector) | (var_202_cvector - var_203_cvector)) <= (var_206_float * var_206_float)) {
			func_452(var_206_float);
			var_196_bool = true;
			return 10;
		}
	}
	var_196_bool = false;
}


// @pe
void func_1062(float var_315_float, float var_316_float, float var_317_float, float var_318_float)
{
	if(var_316_float < var_317_float) {
		var_317_float = var_315_float;
		return 0;
	}
	if(var_316_float > var_318_float) {
		var_318_float = var_315_float;
		return 0;
	}
	var_316_float = var_315_float;
}


void func_1073(bool var_10_bool, string var_11_string, string var_12_string)
{
	object var_14_object;
	@FindActor(var_14_object, var_11_string);
	if(var_14_object == null)
		var_10_bool = false;
	@Trigger(var_14_object, var_12_string);
	var_10_bool = true;
}
EMIT "Stack[-1] = 0";


void func_947(bool var_58_bool, object var_59_object)
{
	object var_63_object;
	var_59_object = var_63_object;
	bool var_62_bool;
	func_911(var_62_bool, var_63_object);
	if(!var_62_bool) { //@nz
		var_58_bool = false;
		return 2;
	}
	bool var_80_bool; object var_81_object;
	func_830(var_80_bool, var_81_object, "noaccess");
	if(!var_80_bool) { //@nz
		var_58_bool = true;
		return 2;
	}
	int var_61_int;
	var_81_object->GetProperty("noaccess", var_61_int);
	var_58_bool = var_61_int == 0;
}


// @pe
void func_822(string var_297_string, int var_298_int)
{
	if(var_298_int == 1)
		var_297_string = "fire";
	var_297_string = "phys";
}


// @pe
void func_1085(object var_8_object)
{
	object var_9_object;
	var_8_object = var_9_object;
	TaskCall(3);
	func_673(var_9_object);
	TaskReturn();
}


void func_830(bool var_80_bool, object var_81_object, string var_82_string)
{
	var_87_bool = IsFuncExist(var_81_object, "HasProperty", 2);
	if(!var_87_bool) { //@nz
		var_80_bool = false;
		return 2;
	}
	bool var_84_bool;
	var_81_object->HasProperty(var_82_string, var_84_bool);
	var_84_bool = var_80_bool;
}


void func_707(object var_16_object)
{
	cvector var_27_cvector; cvector var_28_cvector; cvector var_29_cvector; cvector var_30_cvector; string var_31_string; object var_32_object; bool var_33_bool; bool var_34_bool; float var_35_float; cvector var_36_cvector;
	if(var_16_object == null) {
		func_794("fdie");
	} else {
		var_16_object->GetPosition(var_27_cvector);
		@GetPosition(var_28_cvector);
		@GetDirection(var_29_cvector);
		var_30_cvector = var_28_cvector - var_27_cvector;
		var_41_float = GetByIndex(var_30_cvector, 0);
		var_42_float = GetByIndex(var_29_cvector, 0);
		var_44_float = GetByIndex(var_30_cvector, 2);
		var_45_float = GetByIndex(var_29_cvector, 2);
		if(((var_41_float * var_42_float) + (var_44_float * var_45_float)) >= 0)
			var_31_string = "fdie";
		else
			var_31_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_16_object = var_32_object;
		var_52_bool = IsFuncExist(var_16_object, "GetScriptProperty", 2);
		if(var_52_bool != 0) {
			var_16_object->HasScriptProperty(var_33_bool, "Owner");
			if(var_33_bool != 0) {
				var_16_object->GetScriptProperty(var_32_object, "Owner");
				if(var_32_object == null)
					var_16_object = var_32_object;
			}
		}
		var_59_bool = IsFuncExist(var_32_object, "@GetEyesHeight", 1);
		if(var_59_bool != 0) {
			var_32_object->GetEyesHeight(var_35_float);
			var_36_cvector = [0.0, 0.0, 0.0];
			var_60_float = GetByIndex(var_36_cvector, 1);
			var_35_float = var_60_float;
			SetByIndex(var_36_cvector, 1) = var_60_float;
			@LookAsync(var_16_object, "head", var_36_cvector);
			var_34_bool = true;
		} else {
			var_34_bool = false;

		}
		@PlayAnimation("all", var_31_string);
		@WaitForAnimEnd();
		if(var_34_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_31_string);
		@RemoveEnvelope();
		var_32_object = null;
	}
	
}


void func_452(object var_0_object)
{
	@Face(var_0_object);
	@PlayAnimation("all", "bjump");
	cvector var_216_cvector;
	var_0_object->GetPFPosition(var_216_cvector); //@t
	cvector var_217_cvector;
	@GetPFPosition(var_217_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	@SetSpeed([0.0, 0.0, 0.0]);
}


void func_842(float var_269_float, object var_270_object, float var_271_float, int var_272_int)
{
	int var_282_int; int var_284_int;
	object var_289_object;
	var_270_object = var_289_object;
	bool var_288_bool;
	func_830(var_288_bool, var_289_object, "health");
	if(!var_288_bool) //@nz
		var_269_float = 0.0;
	bool var_292_bool; object var_293_object;
	func_830(var_292_bool, var_293_object, "armor");
	if(!var_292_bool) //@nz
		var_282_int = 0;
	else
		var_293_object->GetProperty("armor", var_282_int);
	string var_297_string; int var_298_int;
	var_272_int = var_298_int;
	func_822(var_297_string, var_298_int);
	string var_283_string = "armor_" + var_297_string;
	bool var_301_bool; object var_302_object; string var_303_string;
	var_270_object = var_302_object;
	func_830(var_301_bool, var_302_object, var_303_string);
	if(!var_301_bool) //@nz
		var_284_int = 0;
	else
		var_270_object->GetProperty(var_303_string, var_284_int);

	float var_305_float;
	func_1055(var_305_float, ((var_282_int + var_284_int) / 100.0), (float)1);
	float var_285_float;
	var_305_float = var_285_float;
	float var_286_float;
	var_270_object->GetProperty("health", var_286_float);
	float var_315_float;
	func_1062(var_315_float, (var_286_float - (var_271_float * (1 - var_285_float))), (float)0, (float)1);
	var_270_object->SetProperty("health", var_315_float);
	float var_287_float = var_269_float;
	
}


void func_971(object var_11_object, int var_12_int)
{
	object var_24_object; object var_25_object; cvector var_26_cvector; float var_27_float; string var_33_string;
	bool var_34_bool = false;
	if(var_12_int != 4) {
		if(var_12_int != 5)
			var_34_bool = true;
	}
	if(var_34_bool != 0) {
		@GetScene(var_24_object);
		@GetPosition(var_26_cvector);
		@GetEyesHeight(var_27_float);
		var_39_float = GetByIndex(var_26_cvector, 1);
		SetByIndex(var_26_cvector, 1) = (var_39_float + (var_27_float / 2));
		@AddActorByType(var_25_object, "scripted", var_24_object, var_26_cvector, [0.0, 0.0, 1.0], "blood.xml");
		var_25_object = null;
		var_24_object = null;
	}
	if(var_11_object == null)
		return 20;
	int var_28_int;
	@GetSecondaryAnimationType(var_28_int);
	if(var_28_int < 0)
		return 20;
	cvector var_29_cvector;
	var_11_object->GetPosition(var_29_cvector);
	cvector var_30_cvector;
	@GetPosition(var_30_cvector);
	cvector var_31_cvector;
	@GetDirection(var_31_cvector);
	cvector var_32_cvector = var_30_cvector - var_29_cvector;
	var_48_float = GetByIndex(var_32_cvector, 0);
	var_49_float = GetByIndex(var_31_cvector, 0);
	var_51_float = GetByIndex(var_32_cvector, 2);
	var_52_float = GetByIndex(var_31_cvector, 2);
	if(((var_48_float * var_49_float) + (var_51_float * var_52_float)) >= 0)
		var_33_string = "fhit";
	else
		var_33_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_33_string + "1"), (var_33_string + "2"), -10);
	
}


void func_471(object var_0_object, bool var_175_bool)
{
	bool var_177_bool;
	var_180_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_180_bool != 0) {
		var_0_object->IsAttacking(var_177_bool); //@t
		var_177_bool = var_175_bool;
	}
	var_175_bool = false;
}


void func_482(int var_2_int, int var_4_int)
{
	int var_240_int;
	if(!var_2_int) //@nz
		return 4;
	if(var_4_int != 0) {
		if((var_4_int + -1) > 0)
			return 4;
	}
	float var_239_float;
	@rand(var_239_float);
	float var_246_float;
	func_520(var_246_float);
	if(var_239_float < var_246_float) {
		@irand(var_240_int, var_2_int);
		@Speak("attack" + (var_240_int + 1));
		int var_251_int;
		func_518(var_251_int);
		var_4_int = var_251_int;
	}
}


void func_355(bool var_341_bool, float var_342_float)
{
	float var_345_float; bool var_346_bool;
	@rand(var_345_float);
	if(var_345_float < var_342_float) {

		for(;;) {
			@IsAnimationPlaying(var_346_bool);
			if(!var_346_bool) { //@nz
			} else {
				bool var_349_bool;
				func_419(var_346_bool, var_349_bool);
				if(var_349_bool != 0) {
					var_341_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_341_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
}


void func_236(object var_0_object, float var_255_float, int var_256_int)
{
	object var_260_object; float var_261_float; float var_262_float;
	@GetVictim((var_255_float * 0.9), var_260_object);
	@ReportAttack(var_0_object);
	if(var_260_object == var_0_object) {
		float var_266_float; object var_267_object; int var_268_int;
		var_260_object = var_267_object;
		var_256_int = var_268_int;
		func_25(var_268_int);
		var_266_float = var_261_float;
		float var_269_float; object var_270_object; float var_271_float; int var_272_int;
		var_260_object = var_270_object;
		int var_273_int; object var_274_object; int var_275_int;
		var_260_object = var_274_object;
		var_256_int = var_275_int;
		func_28(var_275_int);
		var_273_int = var_272_int;
		func_842(var_269_float, var_270_object, var_271_float, var_272_int);
		var_269_float = var_262_float;
		int var_322_int;
		func_514(var_322_int);
		@ReportHit(var_0_object, var_322_int, var_262_float, var_271_float);
		object var_323_object; float var_324_float;
		var_260_object = var_323_object;
		var_262_float = var_324_float;
		func_516();
	}
}
EMIT "Stack[-3] = 0";


void func_379(object var_0_object, bool var_183_bool, float var_184_float)
{
	bool var_190_bool; cvector var_191_cvector; cvector var_192_cvector; cvector var_193_cvector; float var_194_float;
	
	for(;;) {
		@IsAnimationPlaying(var_190_bool);
		if(!var_190_bool) //@nz
			break;
		bool var_196_bool;
		func_419(var_194_float, var_196_bool);
		if(var_196_bool != 0) {
			var_183_bool = true;
			return 10;
		}
		bool var_221_bool;
		func_947(var_221_bool, var_0_object);
		if(!var_221_bool) { //@nz
			var_183_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_191_cvector); //@t
		@GetPFPosition(var_192_cvector);
		var_193_cvector = var_191_cvector - var_192_cvector;
		var_194_float = var_193_cvector | var_193_cvector;
		if(var_194_float < (var_184_float * var_184_float)) {
			bool var_226_bool; float var_227_float;
			var_184_float = var_227_float;
			func_275(var_193_cvector, var_194_float, var_226_bool, var_227_float);
			var_183_bool = true;
			return 10;
		}
		@sync();
	}
	var_183_bool = false;
}


