task task_0
{
	void OnUse(object actor, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool)
	{
		bool var_12_bool;
		@IsOverrideActive(var_12_bool);
		if(!var_12_bool) { //@nz
			object var_14_object;
			var_10_bool = var_14_object;
			func_1746(var_14_object);
		}
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, bool var_4_bool, object var_5_object, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool)
	{
	}

	// @pe
	void OnDeath(object actor, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool)
	{
	}

}


task task_1
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool)
	{
		object var_11_object;
		var_10_bool = var_11_object;
		func_1933();
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, bool var_2_bool, int var_3_int, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool)
	{
		if(var_10_bool == 1) {
			func_1720(var_1_object);
		} else {
			int var_18_int;
			func_373(var_9_int, var_18_int, var_18_int);
		}
	
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool)
	{
		bool var_11_bool = false;
		if(var_1_object == var_10_bool) {
			if(!var_2_bool) //@nz
				var_11_bool = true;
		}
		if(var_11_bool != 0) {
			var_2_bool = true;
			object var_14_object;
			var_10_bool = var_14_object;
			func_1558(var_14_object);
		}
	}

	// @pe
	void OnStopSee(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool)
	{
		bool var_11_bool = false;
		if(var_1_object == var_10_bool) {
			if(var_2_bool != 0)
				var_11_bool = true;
		}
		if(var_11_bool != 0) {
			var_2_bool = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool)
	{
		@RequestClearPath(var_10_bool);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool)
	{
		func_229(var_10_bool);
		object var_15_object;
		var_10_bool = var_15_object;
		func_1927();
	}

}


task task_2
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object)
	{
		object var_11_object;
		var_10_object = var_11_object;
		func_1933();
	}

}


maintask task_3
{
	void init(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnLoad(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool)
	{
		object var_11_object;
		@FindActor(var_11_object, "player");
		if(var_11_object != 0) {
			object var_14_object;
			var_11_object = var_14_object;
			TaskCall(2);
			func_422(var_14_object, false);
			TaskReturn();
		}
	}
	EMIT "Stack[-1] = 0";

}


// @pe
void OnHit(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, int var_11_int, float var_12_float, float var_13_float)
{
	object var_14_object;
	var_10_object = var_14_object;
	int var_15_int;
	var_11_int = var_15_int;
	float var_16_float;
	var_12_float = var_16_float;
	func_1465(var_14_object, var_15_int, var_16_float);
}


// @pe
void OnHit2(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, int var_11_int, float var_12_float, float var_13_float, cvector var_14_cvector, cvector var_15_cvector)
{
	object var_16_object;
	var_10_object = var_16_object;
	int var_17_int;
	var_11_int = var_17_int;
	float var_18_float;
	var_12_float = var_18_float;
	cvector var_19_cvector;
	var_14_cvector = var_19_cvector;
	cvector var_20_cvector;
	var_15_cvector = var_20_cvector;
	func_1533(var_18_float, var_19_cvector, var_20_cvector);
}


void OnPropertyChange(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, string var_11_string)
{
	float var_13_float;
	if(var_11_string == "health") {
		@GetProperty("health", var_13_float);
		if(var_13_float <= 0)
			@SignalDeath(var_10_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object)
{
	object var_11_object;
	var_10_object = var_11_object;
	func_1878(var_11_object);
}


// @pe
void func_128(string var_146_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_147_string;
	var_146_string = var_147_string;
	func_1580(var_147_string);
	@PlayAnimation("all", var_146_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_146_string);
	@RemoveEnvelope();
}


// @pe
void func_1665(bool var_16_bool, object var_17_object, float var_18_float)
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
		func_1710(var_23_float);
		bool var_27_bool; object var_28_object; float var_30_float;
		var_17_object = var_28_object;
		var_18_float = var_30_float;
		func_1261(var_27_bool, var_28_object, "reputation", var_30_float, (float)0, (float)1);
		var_16_bool = true;
		return 0;

	}
	
	var_16_bool = false;
}


void func_1154(bool var_2_bool, int var_5_int)
{
	int var_366_int;
	if(!var_2_bool) //@nz
		return 4;
	if(var_5_int != 0) {
		if((var_5_int + -1) > 0)
			return 4;
	}
	float var_365_float;
	@rand(var_365_float);
	float var_372_float;
	func_1202(var_372_float);
	if(var_365_float < var_372_float) {
		@irand(var_366_int, var_2_bool);
		@Speak("attack" + (var_366_int + 1));
		int var_377_int;
		func_1200(var_377_int);
		var_5_int = var_377_int;
	}
}


void func_1283(float var_395_float, object var_396_object, float var_397_float, int var_398_int)
{
	int var_408_int; int var_410_int;
	object var_415_object;
	var_396_object = var_415_object;
	bool var_414_bool;
	func_1249(var_414_bool, var_415_object, "health");
	if(!var_414_bool) //@nz
		var_395_float = 0.0;
	bool var_418_bool; object var_419_object;
	func_1249(var_418_bool, var_419_object, "armor");
	if(!var_418_bool) //@nz
		var_408_int = 0;
	else
		var_419_object->GetProperty("armor", var_408_int);
	string var_423_string; int var_424_int;
	var_398_int = var_424_int;
	func_1223(var_423_string, var_424_int);
	string var_409_string = "armor_" + var_423_string;
	bool var_429_bool; object var_430_object; string var_431_string;
	var_396_object = var_430_object;
	func_1249(var_429_bool, var_430_object, var_431_string);
	if(!var_429_bool) //@nz
		var_410_int = 0;
	else
		var_396_object->GetProperty(var_431_string, var_410_int);

	float var_433_float;
	func_1637(var_433_float, ((var_408_int + var_410_int) / 100.0), (float)1);
	float var_411_float;
	var_433_float = var_411_float;
	float var_412_float;
	var_396_object->GetProperty("health", var_412_float);
	float var_413_float = var_397_float * (1 - var_411_float);
	float var_443_float;
	func_1644(var_443_float, (var_412_float - var_413_float), (float)0, (float)1);
	var_396_object->SetProperty("health", var_443_float);
	bool var_449_bool; object var_450_object;
	var_396_object = var_450_object;
	func_1244(var_449_bool, var_450_object);
	if(var_449_bool != 0) {
		float var_451_float = -var_413_float;
		func_1700(var_451_float);
	}
	var_413_float = var_395_float;
	
}


// @pe
void func_0(object var_54_object)
{
	func_1831();
	func_1807();
	object var_123_object;
	var_54_object = var_123_object;
	func_12(var_123_object);
}


void func_773(object var_1_object, bool var_2_bool, int var_4_int)
{
	bool var_51_bool; bool var_52_bool; cvector var_53_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_51_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_51_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_bool = 0;

		for(;;) {
			@IsExisting3DSound(var_52_bool, ("attack" + (var_2_bool + 1)));
			if(!var_52_bool) //@nz
				break;
			var_2_bool += 1;
		}
		@GetAnimationOffset(var_53_cvector, "all", "bjump");
		var_67_float = GetByIndex(var_53_cvector, 2);
		var_4_int = -var_67_float;

	}
}


void func_395(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_12(object var_123_object)
{
	object var_124_object;
	var_123_object = var_124_object;
	func_37(var_124_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1933(void)
{
}


void func_1547(object var_229_object)
{
	cvector var_233_cvector;
	var_229_object->GetPosition(var_233_cvector);
	cvector var_234_cvector;
	@GetPosition(var_234_cvector);
	cvector var_235_cvector = var_233_cvector - var_234_cvector;
	var_236_float = GetByIndex(var_235_cvector, 0);
	var_237_float = GetByIndex(var_235_cvector, 2);
	@RotateAsync(var_236_float, var_237_float);
}


void func_1807(void)
{
	int var_103_int;
	func_1740(var_103_int);
	if(var_103_int != 1) {
	}
	func_1790("liver");
	func_1790("kidney");
	func_1790("heart");
	func_1790("blood");
}


void func_271(bool var_0_bool, object var_1_object, bool var_155_bool, object var_156_object, float var_157_float, float var_158_float, bool var_159_bool, bool var_160_bool)
{
	bool var_169_bool; object var_171_object; cvector var_172_cvector; cvector var_173_cvector; float var_175_float; object var_176_object;
	var_0_bool = false;
	var_1_object = var_156_object;
	bool var_170_bool;
	var_160_bool = var_170_bool;
	
	for(;;) {
		bool var_177_bool; object var_178_object;
		var_156_object = var_178_object;
		func_411(var_177_bool, var_178_object);
		if(!var_177_bool) { //@nz
			var_155_bool = false;
			return 16;
		}
		var_156_object->GetPosition(var_172_cvector);
		@GetPosition(var_173_cvector);
		var_175_float = (var_172_cvector - var_173_cvector) | (var_172_cvector - var_173_cvector);
		bool var_182_bool = false;
		if(var_158_float > 0) {
			if(var_175_float > (var_158_float * var_158_float))
				var_182_bool = true;
		}
		if(var_182_bool != 0) {
			@Stop();
			var_155_bool = false;
			return 16;
		}
		if(var_175_float > (var_157_float * var_157_float)) {
			var_156_object->GetPFPosition(var_172_cvector);
			@FindPathTo(var_176_object, var_172_cvector);
			if(var_176_object != null) {
				var_176_object = var_171_object;
				var_176_object = null;
			}
			if(var_171_object != null) {
				if(var_170_bool == 0) goto Label_324;
				var_170_bool = false;
				@RotatePath(var_171_object, var_169_bool);
				if(!var_169_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_195_string;
						func_418(var_195_string);
						string var_196_string;
						func_420(var_196_string);
						@FollowPath(var_171_object, var_159_bool, var_169_bool, var_195_string, var_196_string);
						if(!var_169_bool) { //@nz
							if(var_0_bool == 0) goto Label_343;
							var_171_object = null;
						}
					EMIT "GOTO 0x158";

					Label_343:
						} else {
					var_171_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_169_bool);
					if(!var_169_bool) { //@nz
						if(var_0_bool != 0) {
							var_171_object = null;
							goto Label_371;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_371;
		}
			var_176_object = null;
			goto Label_369;

		Label_369:
			var_171_object = null;

		}
	Label_371:
		for(;;) {
			var_155_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_1421(object var_27_object)
{
	string var_41_string;
	if(var_27_object == null)
		return 14;
	bool var_35_bool;
	@IsDead(var_35_bool);
	if(var_35_bool != 0)
		return 14;
	int var_36_int;
	@GetSecondaryAnimationType(var_36_int);
	if(var_36_int < 0)
		return 14;
	cvector var_37_cvector;
	var_27_object->GetPosition(var_37_cvector);
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	cvector var_39_cvector;
	@GetDirection(var_39_cvector);
	cvector var_40_cvector = var_38_cvector - var_37_cvector;
	var_46_float = GetByIndex(var_40_cvector, 0);
	var_47_float = GetByIndex(var_39_cvector, 0);
	var_49_float = GetByIndex(var_40_cvector, 2);
	var_50_float = GetByIndex(var_39_cvector, 2);
	if(((var_46_float * var_47_float) + (var_49_float * var_50_float)) >= 0)
		var_41_string = "fhit";
	else
		var_41_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_41_string + "1"), (var_41_string + "2"), -10);
	
}


void func_1558(object var_143_object)
{
	float var_146_float;
	var_143_object->GetEyesHeight(var_146_float);
	cvector var_147_cvector = [0.0, 0.0, 0.0];
	var_148_float = GetByIndex(var_147_cvector, 1);
	var_146_float = var_148_float;
	SetByIndex(var_147_cvector, 1) = var_148_float;
	@LookAsync(var_143_object, "head", var_147_cvector);
}


// @pe
void func_411(bool var_177_bool, object var_178_object)
{
	object var_180_object;
	var_178_object = var_180_object;
	bool var_179_bool;
	func_1397(var_179_bool, var_180_object);
	var_179_bool = var_177_bool;
}


void func_1054(bool var_0_bool, bool var_298_bool)
{
	cvector var_304_cvector; cvector var_305_cvector;
	bool var_309_bool;
	func_1397(var_309_bool, var_0_bool);
	if(!var_309_bool) { //@nz
		var_298_bool = false;
		return 10;
	}
	bool var_312_bool;
	float var_308_float;
	func_1143(var_308_float, var_312_bool);
	if(var_312_bool != 0) {
		var_0_bool->GetPFPosition(var_304_cvector); //@t
		@GetPFPosition(var_305_cvector);
		var_0_bool->GetAttackDistance(var_308_float); //@t
		var_298_bool = ((var_304_cvector - var_305_cvector) | (var_304_cvector - var_305_cvector)) <= ((var_308_float + 50) * (var_308_float + 50));
		return 10;
	}
	var_298_bool = false;
}


void func_544(bool var_0_bool, object var_3_object, int var_5_int, object var_23_object, bool var_24_bool, float var_25_float, bool var_132_bool, bool var_224_bool)
{
	float var_37_float; cvector var_38_cvector; cvector var_39_cvector; bool var_41_bool; float var_44_float; cvector var_45_cvector; bool var_46_bool; float var_47_float;
	func_773(var_45_cvector, var_46_bool, var_47_float);
	var_5_int = 0;
	var_72_bool = IsFuncExist(var_23_object, "@GetAttackDistance", 1);
	if(var_72_bool != 0) {
		var_23_object->GetAttackDistance(var_37_float);
		var_37_float += 50;
	} else {
						var_25_float = var_37_float;
	}
	if(var_37_float >= 150)
		var_37_float = 150;
	var_3_object = false;
	var_0_bool = var_23_object;
	bool var_40_bool;
	@IsPlayerActor(var_0_bool, var_40_bool);
	if(var_40_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_78_object;
		func_1621(var_78_object);
		@SendPlayerEnemy(var_23_object, var_78_object);
	}
	if(var_24_bool != 0)
		var_41_bool = false;
	else
		var_41_bool = true;

	
Label_584:
	for(;;) {
		bool var_83_bool = false;
		bool var_84_bool;
		func_1397(var_84_bool, var_0_bool);
		if(var_84_bool != 0) {
			if(!var_3_object) //@nz
				var_83_bool = true;
		}
		if(var_83_bool != 0) {
			func_1186(var_47_float);
			var_0_bool->GetPFPosition(var_38_cvector); //@t
			@GetPFPosition(var_39_cvector);
			var_44_float = (var_38_cvector - var_39_cvector) | (var_38_cvector - var_39_cvector);
			if(var_44_float >= ((300.0 + var_37_float) * (300.0 + var_37_float))) {
				bool var_126_bool; float var_128_float;
				var_37_float = var_128_float;
				TaskCall(1);
				func_166(var_134_bool, var_126_bool, var_0_bool, var_128_float, 3000.0, true, false);
				TaskReturn();
				if(!var_132_bool) { //@nz
				} else {
					var_41_bool = false;
			} else {
			if(var_44_float >= (var_25_float * var_25_float)) {
				var_0_bool->GetPFPosition(var_45_cvector); //@t
				@CanReachByPF(var_46_bool, var_45_cvector);
				if(!var_46_bool) { //@nz
					bool var_218_bool; float var_220_float;
					var_37_float = var_220_float;
					TaskCall(1);
					func_166(var_226_bool, var_218_bool, var_0_bool, var_220_float, 3000.0, true, false);
					TaskReturn();
					if(!var_224_bool) { //@nz
						goto Label_756;
					}
					var_41_bool = false;
					goto Label_584;
				}
				if(!var_41_bool) { //@nz
					func_1547(var_0_bool);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1186(var_47_float);
					@StopAsync();
					var_41_bool = true;
					bool var_240_bool;
					func_1397(var_240_bool, var_0_bool);
					if(!var_240_bool) { //@nz
						goto Label_756;
					}
				}
				@rand(var_47_float);
				bool var_243_bool;
				var_245_bool = var_47_float < 0.6;
				if(var_245_bool != 1) {
					bool var_246_bool;
					func_1143(true, var_246_bool);
					if(var_246_bool != 1)
						var_243_bool = false;
				}
				if(var_243_bool != 0) {
					@Face(var_0_bool);
					func_1193();
					@PlayAnimation("all", "attack_stay");
					bool var_283_bool; float var_284_float;
					func_1011(var_47_float, var_283_bool, var_284_float);
					@StopAsync();
				} else {
					@Face(var_0_bool);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1186(var_47_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_573_bool;
					func_1143(var_47_float, var_573_bool);
					var_574_bool = !var_573_bool; //@nz
					if(var_574_bool == 0) goto Label_746;
					bool var_575_bool;
					func_1397(var_575_bool, var_0_bool);
					if(!var_575_bool) { //@nz
						goto Label_756;
					}
					var_0_bool->GetPFPosition(var_38_cvector); //@t
					@GetPFPosition(var_39_cvector);
					if(!(((var_38_cvector - var_39_cvector) | (var_38_cvector - var_39_cvector)) < (var_284_float * var_284_float))) goto Label_746;
					bool var_580_bool; float var_581_float;
					var_25_float = var_581_float;
					func_847(var_46_bool, var_47_float, var_580_bool, var_581_float);
					var_582_bool = !var_580_bool; //@nz
					if(var_582_bool == 0) goto Label_746;
					goto Label_756;
			}
				bool var_583_bool; float var_584_float;
				var_25_float = var_584_float;
				func_847(var_46_bool, var_47_float, var_583_bool, var_584_float);
				if(!var_583_bool) { //@nz
					goto Label_756;
				}
				var_41_bool = true;

			}
		Label_746:
			goto Label_755;
			}
			Label_755:
			}
		}
	Label_756:
		@WaitForAnimEnd();
		if(var_3_object != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_40_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_1569(string var_79_string, int var_80_int, int var_81_int)
{
	bool var_83_bool;
	int var_85_int;
	var_80_int = var_85_int;
	int var_86_int;
	var_81_int = var_86_int;
	bool var_84_bool;
	func_1660(var_84_bool, var_85_int, var_86_int);
	if(var_84_bool != 0)
		@AddItem(var_83_bool, var_79_string, 0);
}


void func_418(string var_195_string)
{
	var_195_string = "walk";
}


void func_1186(bool var_0_bool)
{
	func_1720(var_0_bool);
}


void func_420(string var_196_string)
{
	var_196_string = "run";
}


void func_37(object var_124_object)
{
	cvector var_135_cvector; cvector var_136_cvector; cvector var_137_cvector; cvector var_138_cvector; string var_139_string; object var_140_object; bool var_141_bool; bool var_142_bool; float var_143_float; cvector var_144_cvector;
	if(var_124_object == null) {
		func_128("fdie");
	} else {
		var_124_object->GetPosition(var_135_cvector);
		@GetPosition(var_136_cvector);
		@GetDirection(var_137_cvector);
		var_138_cvector = var_136_cvector - var_135_cvector;
		var_178_float = GetByIndex(var_138_cvector, 0);
		var_179_float = GetByIndex(var_137_cvector, 0);
		var_181_float = GetByIndex(var_138_cvector, 2);
		var_182_float = GetByIndex(var_137_cvector, 2);
		if(((var_178_float * var_179_float) + (var_181_float * var_182_float)) >= 0)
			var_139_string = "fdie";
		else
			var_139_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_124_object = var_140_object;
		var_189_bool = IsFuncExist(var_124_object, "GetScriptProperty", 2);
		if(var_189_bool != 0) {
			var_124_object->HasScriptProperty(var_141_bool, "Owner");
			if(var_141_bool != 0) {
				var_124_object->GetScriptProperty(var_140_object, "Owner");
				if(var_140_object == null)
					var_124_object = var_140_object;
			}
		}
		var_196_bool = IsFuncExist(var_140_object, "@GetEyesHeight", 1);
		if(var_196_bool != 0) {
			var_140_object->GetEyesHeight(var_143_float);
			var_144_cvector = [0.0, 0.0, 0.0];
			var_197_float = GetByIndex(var_144_cvector, 1);
			var_143_float = var_197_float;
			SetByIndex(var_144_cvector, 1) = var_197_float;
			@LookAsync(var_124_object, "head", var_144_cvector);
			var_142_bool = true;
		} else {
			var_142_bool = false;

		}
		string var_199_string;
		var_139_string = var_199_string;
		func_1580(var_199_string);
		@PlayAnimation("all", var_139_string);
		@WaitForAnimEnd();
		if(var_142_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_139_string);
		@RemoveEnvelope();
		var_140_object = null;
	}
	
}


void func_166(bool var_2_bool, bool var_126_bool, object var_127_object, float var_128_float, float var_129_float, bool var_130_bool, bool var_131_bool)
{
	object var_139_object;
	func_1720(var_139_object);
	@SetTimer(1, 5);
	bool var_137_bool;
	@CanSee(var_137_bool, var_139_object);
	if(var_137_bool != 0) {
		var_2_bool = true;
		object var_143_object;
		var_127_object = var_143_object;
		func_1558(var_143_object);
	} else {
		var_2_bool = false;
	}
	bool var_150_bool; object var_151_object;
	func_1244(var_150_bool, var_151_object);
	if(var_150_bool != 0) {
		object var_154_object;
		func_1621(var_154_object);
		@SendPlayerEnemy(var_151_object, var_154_object);
	}
	bool var_155_bool; object var_156_object; float var_157_float; float var_158_float; bool var_159_bool; bool var_160_bool;
	var_127_object = var_156_object;
	var_128_float = var_157_float;
	var_129_float = var_158_float;
	var_130_bool = var_159_bool;
	var_131_bool = var_160_bool;
	bool var_138_bool;
	func_271(var_137_bool, var_138_bool, var_155_bool, var_156_object, var_157_float, var_158_float, var_159_bool, var_160_bool);
	var_155_bool = var_138_bool;
	if(var_2_bool != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_138_bool = var_126_bool;
	
}


void func_1831(void)
{
	@ClearSubContainer(0);
	func_1759(200, 500);
	func_1569("revolver_ammo", 1, 80);
	func_1569("samopal_ammo", 1, 80);
	func_1569("rifle_ammo", 1, 80);
	func_1569("lockpick", 1, 80);
	int var_99_int;
	func_1873(var_99_int, "hunter_mark");
	bool var_58_bool;
	@AddItem(var_58_bool, var_99_int, 0, 1);
}


void func_1191(int var_456_int)
{
	var_456_int = 0;
}


void func_1193(void)
{
	func_1580("attack_stay");
}


void func_808(bool var_0_bool, float var_381_float, int var_382_int)
{
	object var_386_object; float var_387_float; float var_388_float;
	@GetVictim((var_381_float * 0.9), var_386_object);
	@ReportAttack(var_0_bool);
	if(var_386_object == var_0_bool) {
		float var_392_float; object var_393_object; int var_394_int;
		var_386_object = var_393_object;
		var_382_int = var_394_int;
		func_430(var_394_int);
		var_392_float = var_387_float;
		float var_395_float; object var_396_object; float var_397_float; int var_398_int;
		var_386_object = var_396_object;
		int var_399_int; object var_400_object; int var_401_int;
		var_386_object = var_400_object;
		var_382_int = var_401_int;
		func_433(var_401_int);
		var_399_int = var_398_int;
		func_1283(var_395_float, var_396_object, var_397_float, var_398_int);
		var_395_float = var_388_float;
		int var_456_int;
		func_1191(var_456_int);
		@ReportHit(var_0_bool, var_456_int, var_388_float, var_397_float);
		object var_457_object; float var_458_float;
		var_386_object = var_457_object;
		var_388_float = var_458_float;
		func_1198();
	}
}
EMIT "Stack[-3] = 0";


// @pe
void func_422(object var_14_object, bool var_15_bool)
{
	object var_23_object; bool var_24_bool;
	func_544(var_20_float, var_21_int, var_22_bool, var_23_object, var_24_bool, var_23_object, var_24_bool, 180.0);
}


void func_1580(string var_147_string)
{
	bool var_156_bool; int var_157_int; bool var_158_bool; int var_159_int; bool var_160_bool; float var_161_float; cvector var_162_cvector; cvector var_163_cvector;
	@IsExisting3DSound(var_156_bool, var_147_string);
	if(!var_156_bool) { //@nz
		var_157_int = 0;

		for(;;) {
			@IsExisting3DSound(var_158_bool, (var_147_string + (var_157_int + 1)));
			if(!var_158_bool) { //@nz
				break;
			Label_1600:
				@irand(var_159_int, var_157_int);
				var_147_string += (var_159_int + 1);
	}
			@Is3DSoundLoaded(var_160_bool, var_147_string);
			if(var_160_bool != 0) {
				@GetEyesHeight(var_161_float);
				@GetDirection(var_162_cvector);
				var_163_cvector = var_162_cvector * 50;
				var_174_float = GetByIndex(var_163_cvector, 1);
				SetByIndex(var_163_cvector, 1) = (var_174_float + var_161_float);
				@PlayGlobalSound(var_147_string, var_163_cvector);
			}
		}
		var_157_int += 1;
	}
	var_169_bool = !var_157_int; //@nz
	if(var_169_bool == 0) goto Label_1600;
}


void func_1700(float var_451_float)
{
	object var_453_object;
	@CreateFloatVector(var_453_object);
	var_453_object->add(var_451_float);
	@SendWorldWndMessage(15, var_453_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_430(float var_392_float)
{
	var_392_float = 0.2;
}


// @pe
void func_1198(void)
{
}


void func_1200(int var_377_int)
{
	var_377_int = 1;
}


// @pe
void func_433(int var_399_int)
{
	var_399_int = 0;
}


void func_1202(float var_372_float)
{
	var_372_float = 0.5;
}


void func_1710(float var_23_float)
{
	object var_25_object;
	@CreateFloatVector(var_25_object);
	var_25_object->add(var_23_float);
	@SendWorldWndMessage(16, var_25_object);
}
EMIT "Stack[-1] = 0";


void func_1720(object var_119_object)
{
	bool var_121_bool;
	@IsPlayerActor(var_119_object, var_121_bool);
	if(var_121_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1465(object var_14_object, int var_15_int, float var_16_float)
{
	cvector var_26_cvector; object var_27_object; int var_28_int; bool var_29_bool; cvector var_30_cvector; cvector var_31_cvector;
	bool var_35_bool = false;
	bool var_36_bool = false;
	if(var_14_object != 0) {
		if(var_15_int != 4)
			var_36_bool = true;
	}
	if(var_36_bool != 0) {
		if(var_15_int != 5)
			var_35_bool = true;
	}
	if(var_35_bool != 0) {
		cvector var_42_cvector; cvector var_43_cvector;
		cvector var_44_cvector; object var_45_object;
		var_14_object = var_45_object;
		func_1237(var_44_cvector, var_45_object);
		var_44_cvector = var_43_cvector;
		func_1627(var_42_cvector, var_43_cvector);
		var_42_cvector = var_26_cvector;
		@CreateVectorVector(var_27_object);
		var_28_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_28_int), var_29_bool, var_30_cvector, var_31_cvector);
			if(!var_29_bool) { //@nz
				break;
			Label_1527:
				var_27_object = null;
	}
			object var_104_object;
			var_14_object = var_104_object;
			func_1421(var_104_object);
		}
		if((var_31_cvector | var_26_cvector) >= 0.70710677)
			var_27_object->add(var_30_cvector);
		var_28_int += 1;
	}
	int var_32_int;
	var_27_object->size(var_32_int);
	if(var_32_int == 0) goto Label_1527;
	int var_33_int;
	@irand(var_33_int, var_32_int);
	cvector var_34_cvector;
	var_27_object->get(var_34_cvector, var_33_int);
	object var_59_object; int var_60_int; float var_61_float; cvector var_62_cvector; cvector var_63_cvector;
	var_14_object = var_59_object;
	var_15_int = var_60_int;
	var_16_float = var_61_float;
	var_34_cvector = var_62_cvector;
	var_63_cvector = -var_26_cvector;
	func_1533(var_61_float, var_62_cvector, var_63_cvector);
}


void func_442(bool var_0_bool, bool var_6_bool, bool var_481_bool)
{
	cvector var_493_cvector; cvector var_494_cvector; cvector var_495_cvector; cvector var_496_cvector; cvector var_497_cvector; cvector var_498_cvector; float var_499_float; float var_500_float; cvector var_501_cvector; float var_502_float; int var_503_int;
	bool var_504_bool = false;
	bool var_505_bool;
	func_1397(var_505_bool, var_0_bool);
	if(var_505_bool != 0) {
		bool var_507_bool;
		func_1655(var_507_bool, 0.5);
		if(var_507_bool != 0)
			var_504_bool = true;
	}
	if(var_504_bool != 0) {
		@GetPosition(var_493_cvector);
		var_0_bool->GetPosition(var_494_cvector); //@t
		@GetDirection(var_495_cvector);
		cvector var_511_cvector;
		func_1627(var_511_cvector, (var_493_cvector - var_494_cvector));
		var_511_cvector = var_496_cvector;
		@GetAnimationOffset(var_497_cvector, "all", "jump1");
		@GetAnimationOffset(var_498_cvector, "all", "jump2");
		var_522_float = GetByIndex(var_497_cvector, 2);
		var_523_float = GetByIndex(var_498_cvector, 2);
		if(var_522_float < var_523_float) {
			var_525_float = GetByIndex(var_498_cvector, 2);
			var_499_float = -var_525_float;
			var_526_float = GetByIndex(var_497_cvector, 2);
			var_500_float = -var_526_float;
		} else {
			var_552_float = GetByIndex(var_497_cvector, 2);
			var_499_float = -var_552_float;
			var_553_float = GetByIndex(var_498_cvector, 2);
			var_500_float = -var_553_float;
		}
		@FindLongestDir(var_501_cvector, var_502_float, var_496_cvector, 0.17453294, 6, (var_500_float * 3));
		if(var_502_float < var_499_float)
			@FindLongestDir(var_501_cvector, var_502_float, var_496_cvector, 0.5235988, 16, (var_500_float * 3));
		if(var_502_float >= var_499_float) {
			@StopAsync();
			var_537_int = -var_501_cvector;
			@SetDirection(var_537_int);
			var_6_bool = true;
			if(var_502_float >= var_500_float) {
				@irand(var_503_int, 2);
				@PlayAnimation("all", ("jump" + (var_503_int + 1)));
			} else {
					var_545_float = GetByIndex(var_497_cvector, 2);
					var_546_int = -var_545_float;
					if(!(var_546_int <= var_502_float)) goto Label_533;
					@PlayAnimation("all", "jump1");
			}
			for(;;) {
				@WaitForAnimEnd();
				var_6_bool = false;
				var_481_bool = false;

			}

		Label_533:
			@PlayAnimation("all", "jump2");
		}
	}
	var_481_bool = true;
	
}


void func_1082(bool var_296_bool)
{
	bool var_297_bool = false;
	bool var_298_bool;
	func_1054(var_297_bool, var_298_bool);
	if(var_298_bool != 0) {
		bool var_315_bool;
		func_1098(var_296_bool, var_297_bool, var_315_bool);
		if(var_315_bool != 0)
			var_297_bool = true;
	}
	if(var_297_bool != 0) {
		var_296_bool = true;
		return 0;
	}
	var_296_bool = false;
}


void func_1729(void)
{
	object var_357_object;
	@GetScene(var_357_object);
	object var_359_object;
	func_1621(var_359_object);
	@BroadcastMessage("battle", var_359_object, var_357_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1223(string var_423_string, int var_424_int)
{
	if(var_424_int == 2) {
		var_423_string = "fire";
		return 0;
	EMIT "GOTO 0x4d3";
	}
	if(var_424_int == 1) {
		var_423_string = "bullet";
		return 0;
	}
	var_423_string = "phys";
}


void func_1098(bool var_0_bool, int var_4_int, bool var_315_bool)
{
	object var_321_object; float var_323_float; cvector var_324_cvector; cvector var_325_cvector;
	@GetScene(var_321_object);
	bool var_322_bool = false;
	
	for(;;) {
		cvector var_326_cvector;
		func_1237(var_326_cvector, var_0_bool);
		var_332_int = -var_326_cvector;
		@FindDirLength(var_323_float, var_332_int, var_4_int);
		if(var_323_float < var_4_int) {
		} else {
				@Face(var_0_bool);
				@PlayAnimation("all", "bjump");
				var_0_bool->GetPFPosition(var_324_cvector); //@t
				@GetPFPosition(var_325_cvector);
				@WaitForAnimEnd();
				func_1186(var_325_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_322_bool = true;
				bool var_337_bool;
				func_1054(var_325_cvector, var_337_bool);
				var_338_bool = !var_337_bool; //@nz
				if(var_338_bool == 0) goto Label_1139;
		}
		for(;;) {
			var_322_bool = var_315_bool;

		}

	Label_1139:
	}
}
EMIT "Stack[-5] = 0";


void func_1356(bool var_99_bool, object var_100_object)
{
	bool var_102_bool;
	var_100_object->IsDead(var_102_bool);
	var_102_bool = var_99_bool;
}


void func_1740(int var_103_int)
{
	int var_105_int;
	@GetVariable("branch", var_105_int);
	var_105_int = var_103_int;
}


void func_847(bool var_0_bool, object var_1_object, bool var_344_bool, float var_345_float)
{
	string var_353_string;
	func_1186(var_353_string);
	int var_350_int;
	@irand(var_350_int, var_1_object);
	@Face(var_0_bool);
	@SetAttackState(true);
	func_1729();
	@PlayAnimation("all", ("attack_begin" + (var_350_int + 1)));
	@WaitForAnimEnd();
	int var_352_int;
	func_1154(var_352_int, var_353_string);
	bool var_378_bool;
	func_1397(var_378_bool, var_0_bool);
	if(!var_378_bool) { //@nz
		@StopAsync();
		var_344_bool = false;
		return 8;
	}
	float var_381_float; int var_382_int;
	var_345_float = var_381_float;
	var_350_int = var_382_int;
	func_808(var_353_string, var_381_float, var_382_int);
	bool var_351_bool;
	@HasAnimation(var_351_bool, "all", ("attack_middle" + var_350_int));
	if(var_351_bool != 0) {
		func_1729();
		@PlayAnimation("all", ("attack_middle" + var_350_int));
		@WaitForAnimEnd();
		func_1186(var_353_string);
		bool var_466_bool;
		func_1397(var_466_bool, var_0_bool);
		if(!var_466_bool) { //@nz
			@StopAsync();
			var_344_bool = false;
			return 8;
		}
		float var_469_float; int var_470_int;
		var_345_float = var_469_float;
		func_808(var_353_string, var_469_float, var_470_int);
		var_352_int = 1;

		for(;;) {
			var_353_string = (("attack_middle" + var_470_int) + "_") + var_352_int;
			@HasAnimation(var_351_bool, "all", var_353_string);
			if(!var_351_bool) { //@nz
			} else {
				func_1729();
				@PlayAnimation("all", var_353_string);
				@WaitForAnimEnd();
				func_1186(var_353_string);
				bool var_564_bool;
				func_1397(var_564_bool, var_0_bool);
				if(!var_564_bool) { //@nz
					@StopAsync();
					var_344_bool = false;
					return 8;
				}
				float var_567_float; int var_568_int;
				var_345_float = var_567_float;
				var_350_int = var_568_int;
				func_808(var_353_string, var_567_float, var_568_int);
				var_352_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_350_int));
		bool var_481_bool;
		func_442(var_352_int, var_353_string, var_481_bool);
		if(var_481_bool != 0) {
			bool var_554_bool;
			func_984(var_554_bool, 0.75);
			@StopAsync();
		}
		var_344_bool = true;
		return 8;

	}
}


void func_1361(bool var_88_bool, object var_89_object)
{
	if(var_89_object == null) {
		var_88_bool = false;
		return 4;
	}
	bool var_95_bool = false;
	var_98_bool = IsFuncExist(var_89_object, "IsDead", 1);
	if(var_98_bool != 0) {
		bool var_99_bool; object var_100_object;
		var_89_object = var_100_object;
		func_1356(var_99_bool, var_100_object);
		if(var_99_bool != 0)
			var_95_bool = true;
	}
	if(var_95_bool != 0) {
		var_88_bool = false;
		return 4;
	}
	object var_92_object;
	@GetScene(var_92_object);
	if(var_92_object == null) {
		var_88_bool = false;
		return 4;
	}
	object var_93_object;
	var_89_object->GetScene(var_93_object);
	if(var_92_object != var_93_object) {
		var_88_bool = false;
		return 4;
	}
	var_88_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1746(object var_14_object)
{
	int var_15_int;
	func_1740(var_15_int);
	if(var_15_int == 1)
		@WorkWithCorpse(var_14_object);
	else
		@Barter(var_14_object);
	
}


void func_1873(int var_72_int, string var_73_string)
{
	int var_75_int;
	@GetInvItemByName(var_75_int, var_73_string);
	var_75_int = var_72_int;
}


void func_1621(object var_78_object)
{
	object var_80_object;
	@self(var_80_object);
	var_80_object = var_78_object;
}
EMIT "Stack[-1] = 0";


void func_1237(cvector var_44_cvector, object var_45_object)
{
	cvector var_48_cvector;
	@GetPosition(var_48_cvector);
	cvector var_49_cvector;
	var_45_object->GetPosition(var_49_cvector);
	var_44_cvector = var_49_cvector - var_48_cvector;
}


// @pe
void func_1878(object var_11_object)
{
	object var_13_object;
	var_11_object = var_13_object;
	bool var_12_bool;
	func_1244(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		bool var_16_bool; object var_17_object;
		var_11_object = var_17_object;
		func_1665(var_16_bool, var_17_object, 0.05);
	}
	object var_54_object;
	var_11_object = var_54_object;
	TaskCall(0);
	func_0(var_54_object);
	TaskReturn();
}


void func_984(bool var_554_bool, float var_555_float)
{
	float var_558_float; bool var_559_bool;
	@rand(var_558_float);
	if(var_558_float < var_555_float) {

		for(;;) {
			@IsAnimationPlaying(var_559_bool);
			if(!var_559_bool) { //@nz
			} else {
				bool var_562_bool;
				func_1082(var_562_bool);
				if(var_562_bool != 0) {
					var_554_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_554_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1186(var_559_bool);
}


void func_1143(bool var_0_bool, bool var_246_bool)
{
	bool var_248_bool;
	var_251_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_251_bool != 0) {
		var_0_bool->IsAttacking(var_248_bool); //@t
		var_248_bool = var_246_bool;
	}
	var_246_bool = false;
}


void func_1627(cvector var_42_cvector, cvector var_43_cvector)
{
	float var_51_float = sqrt(var_43_cvector | var_43_cvector);
	if(var_51_float < 0.000001)
		var_42_cvector = [0.0, 0.0, 0.0];
	var_42_cvector = var_43_cvector / var_51_float;
}


void func_1244(bool var_12_bool, object var_13_object)
{
	bool var_15_bool;
	@IsPlayerActor(var_13_object, var_15_bool);
	var_15_bool = var_12_bool;
}


void func_1759(int var_60_int, int var_61_int)
{
	if(var_60_int > var_61_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_64_int = 0;
	if(var_60_int != var_61_int) {
		@irand(var_64_int, (var_61_int - var_60_int));
	} else if(var_60_int == 0) {
		return 4;
	}
	var_64_int += var_60_int;
	if(var_64_int == 0)
		return 4;
	int var_72_int;
	func_1873(var_72_int, "Money");
	bool var_65_bool;
	@AddItem(var_65_bool, var_72_int, 0, var_64_int);
	
}


void func_1249(bool var_35_bool, object var_36_object, string var_37_string)
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


void func_229(bool var_2_bool)
{
	@KillTimer(1);
	if(var_2_bool != 0) {
		var_2_bool = false;
		@UnlookAsync("head");
	}
	func_395(var_10_bool);
}


// @pe
void func_1637(float var_433_float, float var_434_float, float var_435_float)
{
	if(var_434_float < var_435_float)
		var_434_float = var_433_float;
	else
		var_435_float = var_433_float;
	
}


// @pe
void func_1644(float var_45_float, float var_46_float, float var_47_float, float var_48_float)
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


void func_1261(bool var_27_bool, object var_28_object, string var_29_string, float var_30_float, float var_31_float, float var_32_float)
{
	object var_36_object;
	var_28_object = var_36_object;
	string var_37_string;
	var_29_string = var_37_string;
	bool var_35_bool;
	func_1249(var_35_bool, var_36_object, var_37_string);
	if(!var_35_bool) //@nz
		var_27_bool = false;
	float var_34_float;
	var_28_object->GetProperty(var_29_string, var_34_float);
	float var_45_float; float var_47_float; float var_48_float;
	var_31_float = var_47_float;
	var_32_float = var_48_float;
	func_1644(var_45_float, (var_34_float + var_30_float), var_47_float, var_48_float);
	var_28_object->SetProperty(var_29_string, var_45_float);
	var_27_bool = true;
}


void func_1011(bool var_0_bool, bool var_283_bool, float var_284_float)
{
	bool var_290_bool; cvector var_291_cvector; cvector var_292_cvector; cvector var_293_cvector; float var_294_float;
	
	for(;;) {
		@IsAnimationPlaying(var_290_bool);
		if(!var_290_bool) //@nz
			break;
		bool var_296_bool;
		func_1082(var_296_bool);
		if(var_296_bool != 0) {
			var_283_bool = true;
			return 10;
		}
		bool var_339_bool;
		func_1397(var_339_bool, var_0_bool);
		if(!var_339_bool) { //@nz
			var_283_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_291_cvector); //@t
		@GetPFPosition(var_292_cvector);
		var_293_cvector = var_291_cvector - var_292_cvector;
		var_294_float = var_293_cvector | var_293_cvector;
		if(var_294_float < (var_284_float * var_284_float)) {
			bool var_344_bool; float var_345_float;
			var_284_float = var_345_float;
			func_847(var_293_cvector, var_294_float, var_344_bool, var_345_float);
			var_283_bool = true;
			return 10;
		}
		@sync();
	}
	func_1186(var_294_float);
	var_283_bool = false;
}


// @pe
void func_373(bool var_0_bool, object var_1_object, int var_18_int)
{
	if(var_18_int != 0)
		return 0;
	bool var_21_bool;
	func_411(var_21_bool, var_1_object);
	if(!var_21_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_1397(bool var_84_bool, object var_85_object)
{
	object var_89_object;
	var_85_object = var_89_object;
	bool var_88_bool;
	func_1361(var_88_bool, var_89_object);
	if(!var_88_bool) { //@nz
		var_84_bool = false;
		return 2;
	}
	bool var_106_bool; object var_107_object;
	func_1249(var_106_bool, var_107_object, "noaccess");
	if(!var_106_bool) { //@nz
		var_84_bool = true;
		return 2;
	}
	int var_87_int;
	var_107_object->GetProperty("noaccess", var_87_int);
	var_84_bool = var_87_int == 0;
}


void func_1655(bool var_507_bool, float var_508_float)
{
	float var_510_float;
	@rand(var_510_float);
	var_507_bool = var_510_float < var_508_float;
}


void func_1660(bool var_84_bool, int var_85_int, int var_86_int)
{
	int var_88_int;
	@irand(var_88_int, var_86_int);
	var_84_bool = var_88_int < var_85_int;
}


void func_1533(object var_16_object, cvector var_19_cvector, cvector var_20_cvector)
{
	object var_23_object;
	@GetScene(var_23_object);
	object var_24_object;
	@AddActorByType(var_24_object, "scripted", var_23_object, var_19_cvector, var_20_cvector, "blood_dir.xml");
	object var_27_object;
	var_16_object = var_27_object;
	func_1421(var_27_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1790(string var_109_string)
{
	object var_113_object;
	@CreateInvItem(var_113_object);
	var_113_object->SetItemName(var_109_string);
	var_113_object->SetProperty("Organ", 1);
	int var_114_int;
	var_113_object->GetItemID(var_114_int);
	bool var_115_bool;
	@AddItem(var_115_bool, var_113_object, 0, 1);
}
EMIT "Stack[-3] = 0";


