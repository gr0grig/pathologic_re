task task_0
{
	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, int var_6_int, bool var_7_bool, object var_8_object)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int, bool var_6_bool, object var_7_object)
	{
	}

}


maintask task_1
{
	void init(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object)
	{
		@SensePlayerOnly(true);
		@Sleep(1.5);
		object var_8_object;
		@FindActor(var_8_object, "player");
		object var_12_object;
		object var_7_object;
		func_155(var_3_bool, var_4_int, var_5_bool, var_6_object, var_7_object, var_12_object, var_12_object, true, 155.0);
	}
	EMIT "Stack[-1] = 0";

}


task task_2
{
	// @pe
	void OnTimer(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, int var_7_int)
	{
		if(var_7_int != 0)
			return 0;
		bool var_10_bool;
		func_646(var_10_bool, var_1_int);
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
		func_777(var_7_object);
		object var_9_object;
		var_7_object = var_9_object;
		func_1047();
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
	func_922(var_12_int, var_13_float);
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
	func_1018(var_8_object);
}


// @pe
void func_640(void)
{
}


// @pe
void func_0(object var_9_object)
{
	object var_10_object;
	var_9_object = var_10_object;
	func_9(var_10_object);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_642(int var_232_int)
{
	var_232_int = 1;
}


void func_644(float var_227_float)
{
	var_227_float = 0.5;
}


// @pe
void func_646(bool var_104_bool, object var_105_object)
{
	object var_107_object;
	var_105_object = var_107_object;
	bool var_106_bool;
	func_886(var_106_bool, var_107_object);
	var_106_bool = var_104_bool;
}


void func_9(object var_10_object)
{
	cvector var_21_cvector; cvector var_22_cvector; cvector var_23_cvector; cvector var_24_cvector; string var_25_string; object var_26_object; bool var_27_bool; bool var_28_bool; float var_29_float; cvector var_30_cvector;
	if(var_10_object == null) {
		func_96("fdie");
	} else {
		var_10_object->GetPosition(var_21_cvector);
		@GetPosition(var_22_cvector);
		@GetDirection(var_23_cvector);
		var_24_cvector = var_22_cvector - var_21_cvector;
		var_35_float = GetByIndex(var_24_cvector, 0);
		var_36_float = GetByIndex(var_23_cvector, 0);
		var_38_float = GetByIndex(var_24_cvector, 2);
		var_39_float = GetByIndex(var_23_cvector, 2);
		if(((var_35_float * var_36_float) + (var_38_float * var_39_float)) >= 0)
			var_25_string = "fdie";
		else
			var_25_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_10_object = var_26_object;
		var_46_bool = IsFuncExist(var_10_object, "GetScriptProperty", 2);
		if(var_46_bool != 0) {
			var_10_object->HasScriptProperty(var_27_bool, "Owner");
			if(var_27_bool != 0) {
				var_10_object->GetScriptProperty(var_26_object, "Owner");
				if(var_26_object == null)
					var_10_object = var_26_object;
			}
		}
		var_53_bool = IsFuncExist(var_26_object, "@GetEyesHeight", 1);
		if(var_53_bool != 0) {
			var_26_object->GetEyesHeight(var_29_float);
			var_30_cvector = [0.0, 0.0, 0.0];
			var_54_float = GetByIndex(var_30_cvector, 1);
			var_29_float = var_54_float;
			SetByIndex(var_30_cvector, 1) = var_54_float;
			@LookAsync(var_10_object, "head", var_30_cvector);
			var_28_bool = true;
		} else {
			var_28_bool = false;

		}
		@PlayAnimation("all", var_25_string);
		@WaitForAnimEnd();
		if(var_28_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_25_string);
		@RemoveEnvelope();
		var_26_object = null;
	}
	
}


void func_777(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_653(object var_0_object, int var_1_int, bool var_80_bool, object var_81_object, float var_82_float, float var_83_float, bool var_84_bool, bool var_85_bool)
{
	bool var_96_bool; object var_98_object; cvector var_99_cvector; cvector var_100_cvector; float var_102_float; object var_103_object;
	var_0_object = false;
	var_1_int = var_81_object;
	bool var_97_bool;
	var_85_bool = var_97_bool;
	
	for(;;) {
		bool var_104_bool; object var_105_object;
		var_81_object = var_105_object;
		func_646(var_104_bool, var_105_object);
		if(!var_104_bool) { //@nz
			var_80_bool = false;
			return 16;
		}
		var_81_object->GetPosition(var_99_cvector);
		@GetPosition(var_100_cvector);
		var_102_float = (var_99_cvector - var_100_cvector) | (var_99_cvector - var_100_cvector);
		bool var_109_bool = false;
		if(var_83_float > 0) {
			if(var_102_float > (var_83_float * var_83_float))
				var_109_bool = true;
		}
		if(var_109_bool != 0) {
			@Stop();
			var_80_bool = false;
			return 16;
		}
		if(var_102_float > (var_82_float * var_82_float)) {
			var_81_object->GetPFPosition(var_99_cvector);
			@FindPathTo(var_103_object, var_99_cvector);
			if(var_103_object != null) {
				var_103_object = var_98_object;
				var_103_object = null;
			}
			if(var_98_object != null) {
				if(var_97_bool == 0) goto Label_706;
				var_97_bool = false;
				@RotatePath(var_98_object, var_96_bool);
				if(!var_96_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_122_string;
						func_793(var_122_string);
						string var_123_string;
						func_795(var_123_string);
						@FollowPath(var_98_object, var_84_bool, var_96_bool, var_122_string, var_123_string);
						if(!var_96_bool) { //@nz
							if(var_0_object == 0) goto Label_725;
							var_98_object = null;
						}
					EMIT "GOTO 0x2d6";

					Label_725:
						} else {
					var_98_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_96_bool);
					if(!var_96_bool) { //@nz
						if(var_0_object != 0) {
							var_98_object = null;
							goto Label_753;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_753;
		}
			var_103_object = null;
			goto Label_751;

		Label_751:
			var_98_object = null;

		}
	Label_753:
		for(;;) {
			var_80_bool = !var_0_object;
			return 16;

			}
	}
	
}


// @pe
void func_142(float var_247_float)
{
	var_247_float = 0.1;
}


void func_399(object var_0_object, int var_1_int, bool var_207_bool, float var_208_float)
{
	int var_211_int;
	@irand(var_211_int, var_1_int);
	var_211_int += 1;
	@Face(var_0_object);
	@SetAttackState(true);
	@PlayAnimation("all", ("attack_begin" + var_211_int));
	@WaitForAnimEnd();
	bool var_212_bool;
	func_606(var_211_int, var_212_bool);
	bool var_233_bool;
	func_148(var_233_bool, var_0_object);
	if(!var_233_bool) { //@nz
		@StopAsync();
		var_207_bool = false;
		return 4;
	}
	float var_236_float; int var_237_int;
	var_208_float = var_236_float;
	var_211_int = var_237_int;
	func_360(var_212_bool, var_236_float, var_237_int);
	@HasAnimation(var_212_bool, "all", ("attack_middle" + var_211_int));
	if(var_212_bool != 0) {
		@PlayAnimation("all", ("attack_middle" + var_211_int));
		@WaitForAnimEnd();
		bool var_319_bool;
		func_148(var_319_bool, var_0_object);
		if(!var_319_bool) { //@nz
			@StopAsync();
			var_207_bool = false;
			return 4;
		}
		float var_322_float; int var_323_int;
		var_208_float = var_322_float;
		var_211_int = var_323_int;
		func_360(var_212_bool, var_322_float, var_323_int);
	}
	@SetAttackState(false);
	@PlayAnimation("all", ("attack_end" + var_211_int));
	bool var_328_bool;
	func_479(var_328_bool, 0.75);
	@StopAsync();
	var_207_bool = true;
}


// @pe
void func_145(int var_254_int)
{
	var_254_int = 0;
}


// @pe
void func_148(bool var_54_bool, object var_55_object)
{
	object var_57_object;
	var_55_object = var_57_object;
	bool var_56_bool;
	func_886(var_56_bool, var_57_object);
	var_56_bool = var_54_bool;
}


void func_793(string var_122_string)
{
	var_122_string = "walk";
}


void func_922(object var_11_object, int var_12_int)
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


void func_155(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, object var_12_object, bool var_13_bool, float var_14_float, bool var_86_bool)
{
	bool var_25_bool; bool var_26_bool; float var_27_float; cvector var_28_cvector; cvector var_29_cvector; bool var_30_bool; bool var_31_bool; float var_33_float; float var_34_float;
	var_1_int = 0;
	
	for(;;) {
		@HasAnimation(var_25_bool, "all", ("attack_begin" + (var_1_int + 1)));
		if(!var_25_bool) { //@nz
		} else {
			var_1_int += 1;
		}
		var_2_int = 0;

		for(;;) {
			@IsExisting3DSound(var_26_bool, ("attack" + (var_2_int + 1)));
			if(!var_26_bool) { //@nz
			} else {
									var_2_int += 1;
			}
			var_4_int = 0;
			var_48_bool = IsFuncExist(var_12_object, "@GetAttackDistance", 1);
			if(var_48_bool != 0) {
				var_12_object->GetAttackDistance(var_27_float);
				var_27_float += 50;
			} else {
								var_14_float = var_27_float;

			}
			if(var_27_float >= 150)
				var_27_float = 150;
			var_3_bool = false;
			var_0_object = var_12_object;
			@IsPlayerActor(var_0_object, var_30_bool);
			if(var_13_bool != 0)
				var_31_bool = false;
			else
				var_31_bool = true;

			for(;;) {
				bool var_53_bool = false;
				bool var_54_bool;
				func_148(var_54_bool, var_0_object);
				if(var_54_bool != 0) {
					if(!var_3_bool) //@nz
						var_53_bool = true;
				}
				if(var_53_bool != 0) {
					var_0_object->GetPFPosition(var_28_cvector); //@t
					@GetPFPosition(var_29_cvector);
					var_33_float = (var_28_cvector - var_29_cvector) | (var_28_cvector - var_29_cvector);
					if(var_33_float >= ((300.0 + var_27_float) * (300.0 + var_27_float))) {
						bool var_80_bool; float var_82_float;
						var_27_float = var_82_float;
						TaskCall(2);
						func_653(var_86_bool, var_87_object, var_80_bool, var_0_object, var_82_float, 3000.0, true, false);
						TaskReturn();
						if(!var_86_bool) { //@nz
						} else {
							var_31_bool = false;
					} else {
					if(var_33_float >= (var_14_float * var_14_float)) {
						if(!var_31_bool) { //@nz
							func_989(var_0_object);
							@PlayAnimation("all", "attack_on");
							@WaitForAnimEnd();
							@StopAsync();
							var_31_bool = true;
						}
						@rand(var_34_float);
						bool var_153_bool;
						var_155_bool = var_34_float < 0.6;
						if(var_155_bool != 1) {
							bool var_156_bool;
							func_595(true, var_156_bool);
							if(var_156_bool != 1)
								var_153_bool = false;
						}
						if(var_153_bool != 0) {
							@Face(var_0_object);
							@PlayAnimation("all", "attack_stay");
							bool var_164_bool; float var_165_float;
							func_503(var_34_float, var_164_bool, var_165_float);
							@StopAsync();
						} else {
							@Face(var_0_object);
							@PlayAnimation("all", "fjump");
							@WaitForAnimEnd();
							@SetSpeed([0.0, 0.0, 0.0]);
							@Stop();
							@StopAsync();
							bool var_340_bool;
							func_595(var_34_float, var_340_bool);
							var_341_bool = !var_340_bool; //@nz
							if(var_341_bool == 0) goto Label_333;
							bool var_342_bool;
							func_148(var_342_bool, var_0_object);
							if(!var_342_bool) { //@nz
								goto Label_343;
							}
							var_0_object->GetPFPosition(var_28_cvector); //@t
							@GetPFPosition(var_29_cvector);
							var_33_float = (var_28_cvector - var_29_cvector) | (var_28_cvector - var_29_cvector);
							if(!(var_33_float < (var_165_float * var_165_float))) goto Label_333;
							bool var_347_bool; float var_348_float;
							var_14_float = var_348_float;
							func_399(var_33_float, var_34_float, var_347_bool, var_348_float);
							var_349_bool = !var_347_bool; //@nz
							if(var_349_bool == 0) goto Label_333;
							goto Label_343;
					}
						bool var_350_bool; float var_351_float;
						var_14_float = var_351_float;
						func_399(var_33_float, var_34_float, var_350_bool, var_351_float);
						if(!var_350_bool) { //@nz
							goto Label_343;
						}
						var_31_bool = true;

					}
				Label_333:
					goto Label_342;
					}
					Label_342:
					}
				}
			Label_343:
				@WaitForAnimEnd();
				if(var_3_bool != 0)
					return 20;
				@PlayAnimation("all", "attack_off");
				@WaitForAnimEnd();
				if(var_30_bool != 0)
					@Sleep(2.0);
				return 20;

			}

		}

	}
}


void func_795(string var_123_string)
{
	var_123_string = "run";
}


// @pe
void func_797(string var_284_string, int var_285_int)
{
	if(var_285_int == 1)
		var_284_string = "fire";
	var_284_string = "phys";
}


void func_543(object var_0_object, bool var_177_bool)
{
	cvector var_183_cvector; cvector var_184_cvector;
	bool var_188_bool;
	func_148(var_188_bool, var_0_object);
	if(!var_188_bool) { //@nz
		var_177_bool = false;
		return 10;
	}
	bool var_191_bool;
	float var_187_float;
	func_595(var_187_float, var_191_bool);
	if(var_191_bool != 0) {
		var_0_object->GetPFPosition(var_183_cvector); //@t
		@GetPFPosition(var_184_cvector);
		var_0_object->GetAttackDistance(var_187_float); //@t
		var_187_float += 50;
		if(((var_183_cvector - var_184_cvector) | (var_183_cvector - var_184_cvector)) <= (var_187_float * var_187_float)) {
			func_576(var_187_float);
			var_177_bool = true;
			return 10;
		}
	}
	var_177_bool = false;
}


void func_805(bool var_269_bool, object var_270_object, string var_271_string)
{
	var_276_bool = IsFuncExist(var_270_object, "HasProperty", 2);
	if(!var_276_bool) { //@nz
		var_269_bool = false;
		return 2;
	}
	bool var_273_bool;
	var_270_object->HasProperty(var_271_string, var_273_bool);
	var_273_bool = var_269_bool;
}


void func_817(float var_250_float, object var_251_object, float var_252_float, int var_253_int)
{
	int var_263_int; int var_265_int;
	object var_270_object;
	var_251_object = var_270_object;
	bool var_269_bool;
	func_805(var_269_bool, var_270_object, "health");
	if(!var_269_bool) //@nz
		var_250_float = 0.0;
	bool var_279_bool; object var_280_object;
	func_805(var_279_bool, var_280_object, "armor");
	if(!var_279_bool) //@nz
		var_263_int = 0;
	else
		var_280_object->GetProperty("armor", var_263_int);
	string var_284_string; int var_285_int;
	var_253_int = var_285_int;
	func_797(var_284_string, var_285_int);
	string var_264_string = "armor_" + var_284_string;
	bool var_288_bool; object var_289_object; string var_290_string;
	var_251_object = var_289_object;
	func_805(var_288_bool, var_289_object, var_290_string);
	if(!var_288_bool) //@nz
		var_265_int = 0;
	else
		var_251_object->GetProperty(var_290_string, var_265_int);

	float var_292_float;
	func_1000(var_292_float, ((var_263_int + var_265_int) / 100.0), (float)1);
	float var_266_float;
	var_292_float = var_266_float;
	float var_267_float;
	var_251_object->GetProperty("health", var_267_float);
	float var_302_float;
	func_1007(var_302_float, (var_267_float - (var_252_float * (1 - var_266_float))), (float)0, (float)1);
	var_251_object->SetProperty("health", var_302_float);
	float var_268_float = var_250_float;
	
}


void func_576(object var_0_object)
{
	@Face(var_0_object);
	@PlayAnimation("all", "bjump");
	cvector var_197_cvector;
	var_0_object->GetPFPosition(var_197_cvector); //@t
	cvector var_198_cvector;
	@GetPFPosition(var_198_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	@SetSpeed([0.0, 0.0, 0.0]);
}


void func_595(object var_0_object, bool var_156_bool)
{
	bool var_158_bool;
	var_161_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_161_bool != 0) {
		var_0_object->IsAttacking(var_158_bool); //@t
		var_158_bool = var_156_bool;
	}
	var_156_bool = false;
}


void func_989(object var_142_object)
{
	cvector var_146_cvector;
	var_142_object->GetPosition(var_146_cvector);
	cvector var_147_cvector;
	@GetPosition(var_147_cvector);
	cvector var_148_cvector = var_146_cvector - var_147_cvector;
	var_149_float = GetByIndex(var_148_cvector, 0);
	var_150_float = GetByIndex(var_148_cvector, 2);
	@RotateAsync(var_149_float, var_150_float);
}


void func_606(int var_2_int, int var_4_int)
{
	int var_221_int;
	if(!var_2_int) //@nz
		return 4;
	if(var_4_int != 0) {
		if((var_4_int + -1) > 0)
			return 4;
	}
	float var_220_float;
	@rand(var_220_float);
	float var_227_float;
	func_644(var_227_float);
	if(var_220_float < var_227_float) {
		@irand(var_221_int, var_2_int);
		@Speak("attack" + (var_221_int + 1));
		int var_232_int;
		func_642(var_232_int);
		var_4_int = var_232_int;
	}
}


void func_479(bool var_328_bool, float var_329_float)
{
	float var_332_float; bool var_333_bool;
	@rand(var_332_float);
	if(var_332_float < var_329_float) {

		for(;;) {
			@IsAnimationPlaying(var_333_bool);
			if(!var_333_bool) { //@nz
			} else {
				bool var_336_bool;
				func_543(var_333_bool, var_336_bool);
				if(var_336_bool != 0) {
					var_328_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_328_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
}


// @pe
void func_96(string var_32_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_32_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_32_string);
	@RemoveEnvelope();
}


void func_360(object var_0_object, float var_236_float, int var_237_int)
{
	object var_241_object; float var_242_float; float var_243_float;
	@GetVictim((var_236_float * 0.9), var_241_object);
	@ReportAttack(var_0_object);
	if(var_241_object == var_0_object) {
		float var_247_float; object var_248_object; int var_249_int;
		var_241_object = var_248_object;
		var_237_int = var_249_int;
		func_142(var_249_int);
		var_247_float = var_242_float;
		float var_250_float; object var_251_object; float var_252_float; int var_253_int;
		var_241_object = var_251_object;
		int var_254_int; object var_255_object; int var_256_int;
		var_241_object = var_255_object;
		var_237_int = var_256_int;
		func_145(var_256_int);
		var_254_int = var_253_int;
		func_817(var_250_float, var_251_object, var_252_float, var_253_int);
		var_250_float = var_243_float;
		int var_309_int;
		func_638(var_309_int);
		@ReportHit(var_0_object, var_309_int, var_243_float, var_252_float);
		object var_310_object; float var_311_float;
		var_241_object = var_310_object;
		var_243_float = var_311_float;
		func_640();
	}
}
EMIT "Stack[-3] = 0";


// @pe
void func_1000(float var_292_float, float var_293_float, float var_294_float)
{
	if(var_293_float < var_294_float)
		var_293_float = var_292_float;
	else
		var_294_float = var_292_float;
	
}


// @pe
void func_1007(float var_302_float, float var_303_float, float var_304_float, float var_305_float)
{
	if(var_303_float < var_304_float) {
		var_304_float = var_302_float;
		return 0;
	}
	if(var_303_float > var_305_float) {
		var_305_float = var_302_float;
		return 0;
	}
	var_303_float = var_302_float;
}


void func_881(bool var_67_bool, object var_68_object)
{
	bool var_70_bool;
	var_68_object->IsDead(var_70_bool);
	var_70_bool = var_67_bool;
}


void func_886(bool var_56_bool, object var_57_object)
{
	if(var_57_object == null) {
		var_56_bool = false;
		return 4;
	}
	bool var_63_bool = false;
	var_66_bool = IsFuncExist(var_57_object, "IsDead", 1);
	if(var_66_bool != 0) {
		bool var_67_bool; object var_68_object;
		var_57_object = var_68_object;
		func_881(var_67_bool, var_68_object);
		if(var_67_bool != 0)
			var_63_bool = true;
	}
	if(var_63_bool != 0) {
		var_56_bool = false;
		return 4;
	}
	object var_60_object;
	@GetScene(var_60_object);
	if(var_60_object == null) {
		var_56_bool = false;
		return 4;
	}
	object var_61_object;
	var_57_object->GetScene(var_61_object);
	if(var_60_object != var_61_object) {
		var_56_bool = false;
		return 4;
	}
	var_56_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_503(object var_0_object, bool var_164_bool, float var_165_float)
{
	bool var_171_bool; cvector var_172_cvector; cvector var_173_cvector; cvector var_174_cvector; float var_175_float;
	
	for(;;) {
		@IsAnimationPlaying(var_171_bool);
		if(!var_171_bool) //@nz
			break;
		bool var_177_bool;
		func_543(var_175_float, var_177_bool);
		if(var_177_bool != 0) {
			var_164_bool = true;
			return 10;
		}
		bool var_202_bool;
		func_148(var_202_bool, var_0_object);
		if(!var_202_bool) { //@nz
			var_164_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_172_cvector); //@t
		@GetPFPosition(var_173_cvector);
		var_174_cvector = var_172_cvector - var_173_cvector;
		var_175_float = var_174_cvector | var_174_cvector;
		if(var_175_float < (var_165_float * var_165_float)) {
			bool var_207_bool; float var_208_float;
			var_165_float = var_208_float;
			func_399(var_174_cvector, var_175_float, var_207_bool, var_208_float);
			var_164_bool = true;
			return 10;
		}
		@sync();
	}
	var_164_bool = false;
}


// @pe
void func_1018(object var_8_object)
{
	object var_9_object;
	var_8_object = var_9_object;
	TaskCall(0);
	func_0(var_9_object);
	TaskReturn();
}


void func_638(int var_309_int)
{
	var_309_int = 0;
}


