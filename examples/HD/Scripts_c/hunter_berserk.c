task task_0
{
	void OnUse(object actor, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool)
	{
		bool var_12_bool;
		@IsOverrideActive(var_12_bool);
		if(!var_12_bool) { //@nz
			object var_14_object;
			var_10_bool = var_14_object;
			func_1762(var_14_object);
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
		func_1971();
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, bool var_2_bool, int var_3_int, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool)
	{
		if(var_10_bool == 1) {
			func_1736(var_1_object);
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
		func_1965();
	}

}


task task_2
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object)
	{
		object var_11_object;
		var_10_object = var_11_object;
		func_1971();
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
	func_1894(var_11_object);
}


// @pe
void func_128(string var_158_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_159_string;
	var_158_string = var_159_string;
	func_1580(var_159_string);
	@PlayAnimation("all", var_158_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_158_string);
	@RemoveEnvelope();
}


// @pe
void func_1665(bool var_31_bool, object var_32_object, float var_33_float)
{
	if(!var_32_object) { //@nz
		var_31_bool = false;
		return 0;
	}
	if(var_33_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_33_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_38_float;
		var_33_float = var_38_float;
		func_1717(var_38_float);
		bool var_42_bool; object var_43_object; float var_45_float;
		var_32_object = var_43_object;
		var_33_float = var_45_float;
		func_1261(var_42_bool, var_43_object, "reputation", var_45_float, (float)0, (float)1);
		var_31_bool = true;
		return 0;

	}
	
	var_31_bool = false;
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
void func_0(object var_69_object)
{
	func_1847();
	func_1823();
	object var_135_object;
	var_69_object = var_135_object;
	func_12(var_135_object);
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
void func_12(object var_135_object)
{
	object var_136_object;
	var_135_object = var_136_object;
	func_37(var_136_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


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


void func_1806(string var_121_string)
{
	object var_125_object;
	@CreateInvItem(var_125_object);
	var_125_object->SetItemName(var_121_string);
	var_125_object->SetProperty("Organ", 1);
	int var_126_int;
	var_125_object->GetItemID(var_126_int);
	bool var_127_bool;
	@AddItem(var_127_bool, var_125_object, 0, 1);
}
EMIT "Stack[-3] = 0";


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


void func_1823(void)
{
	int var_118_int;
	func_1756(var_118_int);
	if(var_118_int != 1) {
	}
	func_1806("liver");
	func_1806("kidney");
	func_1806("heart");
	func_1806("blood");
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
					bool var_577_bool;
					func_1143(var_47_float, var_577_bool);
					var_578_bool = !var_577_bool; //@nz
					if(var_578_bool == 0) goto Label_746;
					bool var_579_bool;
					func_1397(var_579_bool, var_0_bool);
					if(!var_579_bool) { //@nz
						goto Label_756;
					}
					var_0_bool->GetPFPosition(var_38_cvector); //@t
					@GetPFPosition(var_39_cvector);
					if(!(((var_38_cvector - var_39_cvector) | (var_38_cvector - var_39_cvector)) < (var_284_float * var_284_float))) goto Label_746;
					bool var_584_bool; float var_585_float;
					var_25_float = var_585_float;
					func_847(var_46_bool, var_47_float, var_584_bool, var_585_float);
					var_586_bool = !var_584_bool; //@nz
					if(var_586_bool == 0) goto Label_746;
					goto Label_756;
			}
				bool var_587_bool; float var_588_float;
				var_25_float = var_588_float;
				func_847(var_46_bool, var_47_float, var_587_bool, var_588_float);
				if(!var_587_bool) { //@nz
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


void func_1569(string var_94_string, int var_95_int, int var_96_int)
{
	bool var_98_bool;
	int var_100_int;
	var_95_int = var_100_int;
	int var_101_int;
	var_96_int = var_101_int;
	bool var_99_bool;
	func_1660(var_99_bool, var_100_int, var_101_int);
	if(var_99_bool != 0)
		@AddItem(var_98_bool, var_94_string, 0);
}


void func_418(string var_195_string)
{
	var_195_string = "walk";
}


void func_1186(bool var_0_bool)
{
	func_1736(var_0_bool);
}


void func_420(string var_196_string)
{
	var_196_string = "run";
}


void func_37(object var_136_object)
{
	cvector var_147_cvector; cvector var_148_cvector; cvector var_149_cvector; cvector var_150_cvector; string var_151_string; object var_152_object; bool var_153_bool; bool var_154_bool; float var_155_float; cvector var_156_cvector;
	if(var_136_object == null) {
		func_128("fdie");
	} else {
		var_136_object->GetPosition(var_147_cvector);
		@GetPosition(var_148_cvector);
		@GetDirection(var_149_cvector);
		var_150_cvector = var_148_cvector - var_147_cvector;
		var_190_float = GetByIndex(var_150_cvector, 0);
		var_191_float = GetByIndex(var_149_cvector, 0);
		var_193_float = GetByIndex(var_150_cvector, 2);
		var_194_float = GetByIndex(var_149_cvector, 2);
		if(((var_190_float * var_191_float) + (var_193_float * var_194_float)) >= 0)
			var_151_string = "fdie";
		else
			var_151_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_136_object = var_152_object;
		var_201_bool = IsFuncExist(var_136_object, "GetScriptProperty", 2);
		if(var_201_bool != 0) {
			var_136_object->HasScriptProperty(var_153_bool, "Owner");
			if(var_153_bool != 0) {
				var_136_object->GetScriptProperty(var_152_object, "Owner");
				if(var_152_object == null)
					var_136_object = var_152_object;
			}
		}
		var_208_bool = IsFuncExist(var_152_object, "@GetEyesHeight", 1);
		if(var_208_bool != 0) {
			var_152_object->GetEyesHeight(var_155_float);
			var_156_cvector = [0.0, 0.0, 0.0];
			var_209_float = GetByIndex(var_156_cvector, 1);
			var_155_float = var_209_float;
			SetByIndex(var_156_cvector, 1) = var_209_float;
			@LookAsync(var_136_object, "head", var_156_cvector);
			var_154_bool = true;
		} else {
			var_154_bool = false;

		}
		string var_211_string;
		var_151_string = var_211_string;
		func_1580(var_211_string);
		@PlayAnimation("all", var_151_string);
		@WaitForAnimEnd();
		if(var_154_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_151_string);
		@RemoveEnvelope();
		var_152_object = null;
	}
	
}


void func_166(bool var_2_bool, bool var_126_bool, object var_127_object, float var_128_float, float var_129_float, bool var_130_bool, bool var_131_bool)
{
	object var_139_object;
	func_1736(var_139_object);
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


void func_1191(int var_460_int)
{
	var_460_int = 0;
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
		int var_460_int;
		func_1191(var_460_int);
		@ReportHit(var_0_bool, var_460_int, var_388_float, var_397_float);
		object var_461_object; float var_462_float;
		var_386_object = var_461_object;
		var_388_float = var_462_float;
		func_1198();
	}
}
EMIT "Stack[-3] = 0";


void func_1193(void)
{
	func_1580("attack_stay");
}


// @pe
void func_422(object var_14_object, bool var_15_bool)
{
	object var_23_object; bool var_24_bool;
	func_544(var_20_float, var_21_int, var_22_bool, var_23_object, var_24_bool, var_23_object, var_24_bool, 180.0);
}


void func_1700(float var_451_float)
{
	object var_453_object;
	@CreateFloatVector(var_453_object);
	var_453_object->add(var_451_float);
	if(var_451_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_453_object);
}
EMIT "Stack[-1] = 0";


void func_1580(string var_159_string)
{
	bool var_168_bool; int var_169_int; bool var_170_bool; int var_171_int; bool var_172_bool; float var_173_float; cvector var_174_cvector; cvector var_175_cvector;
	@IsExisting3DSound(var_168_bool, var_159_string);
	if(!var_168_bool) { //@nz
		var_169_int = 0;

		for(;;) {
			@IsExisting3DSound(var_170_bool, (var_159_string + (var_169_int + 1)));
			if(!var_170_bool) { //@nz
				break;
			Label_1600:
				@irand(var_171_int, var_169_int);
				var_159_string += (var_171_int + 1);
	}
			@Is3DSoundLoaded(var_172_bool, var_159_string);
			if(var_172_bool != 0) {
				@GetEyesHeight(var_173_float);
				@GetDirection(var_174_cvector);
				var_175_cvector = var_174_cvector * 50;
				var_186_float = GetByIndex(var_175_cvector, 1);
				SetByIndex(var_175_cvector, 1) = (var_186_float + var_173_float);
				@PlayGlobalSound(var_159_string, var_175_cvector);
			}
		}
		var_169_int += 1;
	}
	var_181_bool = !var_169_int; //@nz
	if(var_181_bool == 0) goto Label_1600;
}


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


// @pe
void func_1971(void)
{
}


void func_1717(float var_38_float)
{
	object var_40_object;
	@CreateFloatVector(var_40_object);
	var_40_object->add(var_38_float);
	@SendWorldWndMessage(16, var_40_object);
}
EMIT "Stack[-1] = 0";


void func_1847(void)
{
	@ClearSubContainer(0);
	func_1775(200, 500);
	func_1569("revolver_ammo", 1, 80);
	func_1569("samopal_ammo", 1, 80);
	func_1569("rifle_ammo", 1, 80);
	func_1569("lockpick", 1, 80);
	int var_114_int;
	func_1889(var_114_int, "hunter_mark");
	bool var_73_bool;
	@AddItem(var_73_bool, var_114_int, 0, 1);
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


void func_442(bool var_0_bool, bool var_6_bool, bool var_485_bool)
{
	cvector var_497_cvector; cvector var_498_cvector; cvector var_499_cvector; cvector var_500_cvector; cvector var_501_cvector; cvector var_502_cvector; float var_503_float; float var_504_float; cvector var_505_cvector; float var_506_float; int var_507_int;
	bool var_508_bool = false;
	bool var_509_bool;
	func_1397(var_509_bool, var_0_bool);
	if(var_509_bool != 0) {
		bool var_511_bool;
		func_1655(var_511_bool, 0.5);
		if(var_511_bool != 0)
			var_508_bool = true;
	}
	if(var_508_bool != 0) {
		@GetPosition(var_497_cvector);
		var_0_bool->GetPosition(var_498_cvector); //@t
		@GetDirection(var_499_cvector);
		cvector var_515_cvector;
		func_1627(var_515_cvector, (var_497_cvector - var_498_cvector));
		var_515_cvector = var_500_cvector;
		@GetAnimationOffset(var_501_cvector, "all", "jump1");
		@GetAnimationOffset(var_502_cvector, "all", "jump2");
		var_526_float = GetByIndex(var_501_cvector, 2);
		var_527_float = GetByIndex(var_502_cvector, 2);
		if(var_526_float < var_527_float) {
			var_529_float = GetByIndex(var_502_cvector, 2);
			var_503_float = -var_529_float;
			var_530_float = GetByIndex(var_501_cvector, 2);
			var_504_float = -var_530_float;
		} else {
			var_556_float = GetByIndex(var_501_cvector, 2);
			var_503_float = -var_556_float;
			var_557_float = GetByIndex(var_502_cvector, 2);
			var_504_float = -var_557_float;
		}
		@FindLongestDir(var_505_cvector, var_506_float, var_500_cvector, 0.17453294, 6, (var_504_float * 3));
		if(var_506_float < var_503_float)
			@FindLongestDir(var_505_cvector, var_506_float, var_500_cvector, 0.5235988, 16, (var_504_float * 3));
		if(var_506_float >= var_503_float) {
			@StopAsync();
			var_541_int = -var_505_cvector;
			@SetDirection(var_541_int);
			var_6_bool = true;
			if(var_506_float >= var_504_float) {
				@irand(var_507_int, 2);
				@PlayAnimation("all", ("jump" + (var_507_int + 1)));
			} else {
					var_549_float = GetByIndex(var_501_cvector, 2);
					var_550_int = -var_549_float;
					if(!(var_550_int <= var_506_float)) goto Label_533;
					@PlayAnimation("all", "jump1");
			}
			for(;;) {
				@WaitForAnimEnd();
				var_6_bool = false;
				var_485_bool = false;

			}

		Label_533:
			@PlayAnimation("all", "jump2");
		}
	}
	var_485_bool = true;
	
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


void func_1727(int var_23_int)
{
	float var_25_float;
	@GetGameTime(var_25_float);
	var_23_int = 1 + (var_25_float / 24);
}


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


void func_1736(object var_119_object)
{
	bool var_121_bool;
	@IsPlayerActor(var_119_object, var_121_bool);
	if(var_121_bool != 0)
		@PlayGlobalMusic("attack");
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


void func_847(bool var_0_bool, object var_1_object, bool var_344_bool, float var_345_float)
{
	string var_353_string;
	func_1186(var_353_string);
	int var_350_int;
	@irand(var_350_int, var_1_object);
	@Face(var_0_bool);
	@SetAttackState(true);
	func_1745();
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
		func_1745();
		@PlayAnimation("all", ("attack_middle" + var_350_int));
		@WaitForAnimEnd();
		func_1186(var_353_string);
		bool var_470_bool;
		func_1397(var_470_bool, var_0_bool);
		if(!var_470_bool) { //@nz
			@StopAsync();
			var_344_bool = false;
			return 8;
		}
		float var_473_float; int var_474_int;
		var_345_float = var_473_float;
		func_808(var_353_string, var_473_float, var_474_int);
		var_352_int = 1;

		for(;;) {
			var_353_string = (("attack_middle" + var_474_int) + "_") + var_352_int;
			@HasAnimation(var_351_bool, "all", var_353_string);
			if(!var_351_bool) { //@nz
			} else {
				func_1745();
				@PlayAnimation("all", var_353_string);
				@WaitForAnimEnd();
				func_1186(var_353_string);
				bool var_568_bool;
				func_1397(var_568_bool, var_0_bool);
				if(!var_568_bool) { //@nz
					@StopAsync();
					var_344_bool = false;
					return 8;
				}
				float var_571_float; int var_572_int;
				var_345_float = var_571_float;
				var_350_int = var_572_int;
				func_808(var_353_string, var_571_float, var_572_int);
				var_352_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_350_int));
		bool var_485_bool;
		func_442(var_352_int, var_353_string, var_485_bool);
		if(var_485_bool != 0) {
			bool var_558_bool;
			func_984(var_558_bool, 0.75);
			@StopAsync();
		}
		var_344_bool = true;
		return 8;

	}
}


void func_1745(void)
{
	object var_357_object;
	@GetScene(var_357_object);
	object var_359_object;
	func_1621(var_359_object);
	@BroadcastMessage("battle", var_359_object, var_357_object);
}
EMIT "Stack[-1] = 0";


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


void func_984(bool var_558_bool, float var_559_float)
{
	float var_562_float; bool var_563_bool;
	@rand(var_562_float);
	if(var_562_float < var_559_float) {

		for(;;) {
			@IsAnimationPlaying(var_563_bool);
			if(!var_563_bool) { //@nz
			} else {
				bool var_566_bool;
				func_1082(var_566_bool);
				if(var_566_bool != 0) {
					var_558_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_558_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1186(var_563_bool);
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


void func_1756(int var_17_int)
{
	int var_19_int;
	@GetVariable("branch", var_19_int);
	var_19_int = var_17_int;
}


void func_1249(bool var_50_bool, object var_51_object, string var_52_string)
{
	var_57_bool = IsFuncExist(var_51_object, "HasProperty", 2);
	if(!var_57_bool) { //@nz
		var_50_bool = false;
		return 2;
	}
	bool var_54_bool;
	var_51_object->HasProperty(var_52_string, var_54_bool);
	var_54_bool = var_50_bool;
}


// @pe
void func_1762(object var_14_object)
{
	int var_15_int;
	func_1756(var_15_int);
	if(var_15_int == 1)
		@WorkWithCorpse(var_14_object);
	else
		@Barter(var_14_object);
	
}


void func_1889(int var_87_int, string var_88_string)
{
	int var_90_int;
	@GetInvItemByName(var_90_int, var_88_string);
	var_90_int = var_87_int;
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
void func_1894(object var_11_object)
{
	object var_13_object;
	var_11_object = var_13_object;
	bool var_12_bool;
	func_1244(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		bool var_16_bool = false;
		int var_17_int;
		func_1756(var_17_int);
		if(var_17_int == 2) {
			int var_23_int;
			func_1727(var_23_int);
			if(var_23_int == 6)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			bool var_31_bool; object var_32_object;
			var_11_object = var_32_object;
			func_1665(var_31_bool, var_32_object, 0.1);
		} else {
			bool var_218_bool; object var_219_object;
			var_11_object = var_219_object;
			func_1665(var_218_bool, var_219_object, 0.05);
		}
	}
	object var_69_object;
	var_11_object = var_69_object;
	TaskCall(0);
	func_0(var_69_object);
	TaskReturn();
	
}


// @pe
void func_1644(float var_60_float, float var_61_float, float var_62_float, float var_63_float)
{
	if(var_61_float < var_62_float) {
		var_62_float = var_60_float;
		return 0;
	}
	if(var_61_float > var_63_float) {
		var_63_float = var_60_float;
		return 0;
	}
	var_61_float = var_60_float;
}


void func_1261(bool var_42_bool, object var_43_object, string var_44_string, float var_45_float, float var_46_float, float var_47_float)
{
	object var_51_object;
	var_43_object = var_51_object;
	string var_52_string;
	var_44_string = var_52_string;
	bool var_50_bool;
	func_1249(var_50_bool, var_51_object, var_52_string);
	if(!var_50_bool) //@nz
		var_42_bool = false;
	float var_49_float;
	var_43_object->GetProperty(var_44_string, var_49_float);
	float var_60_float; float var_62_float; float var_63_float;
	var_46_float = var_62_float;
	var_47_float = var_63_float;
	func_1644(var_60_float, (var_49_float + var_45_float), var_62_float, var_63_float);
	var_43_object->SetProperty(var_44_string, var_60_float);
	var_42_bool = true;
}


void func_1775(int var_75_int, int var_76_int)
{
	if(var_75_int > var_76_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_79_int = 0;
	if(var_75_int != var_76_int) {
		@irand(var_79_int, (var_76_int - var_75_int));
	} else if(var_75_int == 0) {
		return 4;
	}
	var_79_int += var_75_int;
	if(var_79_int == 0)
		return 4;
	int var_87_int;
	func_1889(var_87_int, "Money");
	bool var_80_bool;
	@AddItem(var_80_bool, var_87_int, 0, var_79_int);
	
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


void func_1655(bool var_511_bool, float var_512_float)
{
	float var_514_float;
	@rand(var_514_float);
	var_511_bool = var_514_float < var_512_float;
}


void func_1660(bool var_99_bool, int var_100_int, int var_101_int)
{
	int var_103_int;
	@irand(var_103_int, var_101_int);
	var_99_bool = var_103_int < var_100_int;
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


