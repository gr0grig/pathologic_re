maintask task_0
{
	void init(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool)
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
	void OnTimer(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, int var_9_int)
	{
		if(var_9_int == 1) {
			func_1539(var_1_int);
		} else {
			int var_17_int;
			func_900(var_8_bool, var_17_int, var_17_int);
		}
	
	}

	// @pe
	void OnSee(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object)
	{
		bool var_10_bool = false;
		if(var_1_int == var_9_object) {
			if(!var_2_int) //@nz
				var_10_bool = true;
		}
		if(var_10_bool != 0) {
			var_2_int = true;
			object var_13_object;
			var_9_object = var_13_object;
			func_1424(var_13_object);
		}
	}

	// @pe
	void OnStopSee(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object)
	{
		bool var_10_bool = false;
		if(var_1_int == var_9_object) {
			if(var_2_int != 0)
				var_10_bool = true;
		}
		if(var_10_bool != 0) {
			var_2_int = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object)
	{
		@RequestClearPath(var_9_object);
	}

	// @pe
	void OnDeath(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object)
	{
		func_756(var_9_object);
		object var_14_object;
		var_9_object = var_14_object;
		func_1658();
	}

}


task task_3
{
	void OnUse(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object)
	{
		bool var_11_bool;
		@IsOverrideActive(var_11_bool);
		if(!var_11_bool) { //@nz
			object var_13_object;
			var_9_object = var_13_object;
			func_1565(var_13_object);
		}
	}

	void OnUnload(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool)
	{
		object var_9_object;
		func_1476(var_9_object);
		@RemoveActor(var_9_object);
		@Hold();
	}

	// @pe
	void OnHit(object actor, int iHitType, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, int var_10_int, float var_11_float, float var_12_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, string var_10_string)
	{
	}

	// @pe
	void OnDeath(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object)
	{
	}

}


// @pe
void OnHit(object actor, int iHitType, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, int var_10_int, float var_11_float, float var_12_float)
{
	object var_13_object;
	var_9_object = var_13_object;
	int var_14_int;
	var_10_int = var_14_int;
	float var_15_float;
	var_11_float = var_15_float;
	func_1331(var_13_object, var_14_int, var_15_float);
}


// @pe
void OnHit2(object actor, int iHitType, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, int var_10_int, float var_11_float, float var_12_float, cvector var_13_cvector, cvector var_14_cvector)
{
	object var_15_object;
	var_9_object = var_15_object;
	int var_16_int;
	var_10_int = var_16_int;
	float var_17_float;
	var_11_float = var_17_float;
	cvector var_18_cvector;
	var_13_cvector = var_18_cvector;
	cvector var_19_cvector;
	var_14_cvector = var_19_cvector;
	func_1399(var_17_float, var_18_cvector, var_19_cvector);
}


void OnPropertyChange(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, string var_10_string)
{
	float var_12_float;
	if(var_10_string == "health") {
		@GetProperty("health", var_12_float);
		if(var_12_float <= 0)
			@SignalDeath(var_9_object);
	}
}


// @pe
void OnDeath(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object)
{
	object var_10_object;
	var_9_object = var_10_object;
	func_1619(var_10_object);
}


void func_641(int var_2_int, int var_5_int)
{
	int var_362_int;
	if(!var_2_int) //@nz
		return 4;
	if(var_5_int != 0) {
		if((var_5_int + -1) > 0)
			return 4;
	}
	float var_361_float;
	@rand(var_361_float);
	float var_368_float;
	func_691(var_368_float);
	if(var_361_float < var_368_float) {
		@irand(var_362_int, var_2_int);
		@Speak("attack" + (var_362_int + 1));
		int var_373_int;
		func_689(var_373_int);
		var_5_int = var_373_int;
	}
}


void func_1539(object var_115_object)
{
	bool var_117_bool;
	@IsPlayerActor(var_115_object, var_117_bool);
	if(var_117_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_260(int var_1_int, int var_2_int, float var_4_float)
{
	bool var_47_bool; bool var_48_bool; cvector var_49_cvector;
	var_1_int = 0;
	
	for(;;) {
		@HasAnimation(var_47_bool, "all", ("attack_begin" + (var_1_int + 1)));
		if(!var_47_bool) { //@nz
		} else {
			var_1_int += 1;
		}
		var_2_int = 0;

		for(;;) {
			@IsExisting3DSound(var_48_bool, ("attack" + (var_2_int + 1)));
			if(!var_48_bool) //@nz
				break;
			var_2_int += 1;
		}
		@GetAnimationOffset(var_49_cvector, "all", "bjump");
		var_63_float = GetByIndex(var_49_cvector, 2);
		var_4_float = -var_63_float;

	}
}


void func_1413(object var_225_object)
{
	cvector var_229_cvector;
	var_225_object->GetPosition(var_229_cvector);
	cvector var_230_cvector;
	@GetPosition(var_230_cvector);
	cvector var_231_cvector = var_229_cvector - var_230_cvector;
	var_232_float = GetByIndex(var_231_cvector, 0);
	var_233_float = GetByIndex(var_231_cvector, 2);
	@RotateAsync(var_232_float, var_233_float);
}


// @pe
void func_900(object var_0_object, int var_1_int, int var_17_int)
{
	if(var_17_int != 0)
		return 0;
	bool var_20_bool;
	func_938(var_20_bool, var_1_int);
	if(!var_20_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_1287(object var_26_object)
{
	string var_40_string;
	if(var_26_object == null)
		return 14;
	bool var_34_bool;
	@IsDead(var_34_bool);
	if(var_34_bool != 0)
		return 14;
	int var_35_int;
	@GetSecondaryAnimationType(var_35_int);
	if(var_35_int < 0)
		return 14;
	cvector var_36_cvector;
	var_26_object->GetPosition(var_36_cvector);
	cvector var_37_cvector;
	@GetPosition(var_37_cvector);
	cvector var_38_cvector;
	@GetDirection(var_38_cvector);
	cvector var_39_cvector = var_37_cvector - var_36_cvector;
	var_45_float = GetByIndex(var_39_cvector, 0);
	var_46_float = GetByIndex(var_38_cvector, 0);
	var_48_float = GetByIndex(var_39_cvector, 2);
	var_49_float = GetByIndex(var_38_cvector, 2);
	if(((var_45_float * var_46_float) + (var_48_float * var_49_float)) >= 0)
		var_40_string = "fhit";
	else
		var_40_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_40_string + "1"), (var_40_string + "2"), -10);
	
}


void func_10(void)
{
	object var_16_object;
	@FindActor(var_16_object, "player");
	if(!var_16_object) { //@nz
	}
	object var_19_object;
	object var_15_object;
	func_31(var_12_bool, var_13_float, var_14_int, var_15_object, var_19_object, var_19_object, true, 180.0);
}
EMIT "Stack[-1] = 0";


void func_1548(void)
{
	object var_353_object;
	@GetScene(var_353_object);
	object var_355_object;
	func_1476(var_355_object);
	@BroadcastMessage("battle", var_355_object, var_353_object);
}
EMIT "Stack[-1] = 0";


void func_1424(object var_139_object)
{
	float var_142_float;
	var_139_object->GetEyesHeight(var_142_float);
	cvector var_143_cvector = [0.0, 0.0, 0.0];
	var_144_float = GetByIndex(var_143_cvector, 1);
	var_142_float = var_144_float;
	SetByIndex(var_143_cvector, 1) = var_144_float;
	@LookAsync(var_139_object, "head", var_143_cvector);
}


void func_1559(int var_100_int)
{
	int var_102_int;
	@GetVariable("branch", var_102_int);
	var_102_int = var_100_int;
}


// @pe
void func_25(float var_388_float)
{
	var_388_float = 0.3;
}


void func_922(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_1435(string var_248_string)
{
	bool var_257_bool; int var_258_int; bool var_259_bool; int var_260_int; bool var_261_bool; float var_262_float; cvector var_263_cvector; cvector var_264_cvector;
	@IsExisting3DSound(var_257_bool, var_248_string);
	if(!var_257_bool) { //@nz
		var_258_int = 0;

		for(;;) {
			@IsExisting3DSound(var_259_bool, (var_248_string + (var_258_int + 1)));
			if(!var_259_bool) { //@nz
				break;
			Label_1455:
				@irand(var_260_int, var_258_int);
				var_248_string += (var_260_int + 1);
	}
			@Is3DSoundLoaded(var_261_bool, var_248_string);
			if(var_261_bool != 0) {
				@GetEyesHeight(var_262_float);
				@GetDirection(var_263_cvector);
				var_264_cvector = var_263_cvector * 50;
				var_275_float = GetByIndex(var_264_cvector, 1);
				SetByIndex(var_264_cvector, 1) = (var_275_float + var_262_float);
				@PlayGlobalSound(var_248_string, var_264_cvector);
			}
		}
		var_258_int += 1;
	}
	var_270_bool = !var_258_int; //@nz
	if(var_270_bool == 0) goto Label_1455;
}


// @pe
void func_28(int var_395_int)
{
	var_395_int = 0;
}


void func_541(object var_0_object, bool var_294_bool)
{
	cvector var_300_cvector; cvector var_301_cvector;
	bool var_305_bool;
	func_1263(var_305_bool, var_0_object);
	if(!var_305_bool) { //@nz
		var_294_bool = false;
		return 10;
	}
	bool var_308_bool;
	float var_304_float;
	func_630(var_304_float, var_308_bool);
	if(var_308_bool != 0) {
		var_0_object->GetPFPosition(var_300_cvector); //@t
		@GetPFPosition(var_301_cvector);
		var_0_object->GetAttackDistance(var_304_float); //@t
		var_294_bool = ((var_300_cvector - var_301_cvector) | (var_300_cvector - var_301_cvector)) <= ((var_304_float + 50) * (var_304_float + 50));
		return 10;
	}
	var_294_bool = false;
}


// @pe
void func_1565(object var_13_object)
{
	int var_14_int;
	func_1559(var_14_int);
	if(var_14_int == 1)
		@WorkWithCorpse(var_13_object);
	else
		@Barter(var_13_object);
	
}


void func_798(object var_0_object, int var_1_int, bool var_151_bool, object var_152_object, float var_153_float, float var_154_float, bool var_155_bool, bool var_156_bool)
{
	bool var_165_bool; object var_167_object; cvector var_168_cvector; cvector var_169_cvector; float var_171_float; object var_172_object;
	var_0_object = false;
	var_1_int = var_152_object;
	bool var_166_bool;
	var_156_bool = var_166_bool;
	
	for(;;) {
		bool var_173_bool; object var_174_object;
		var_152_object = var_174_object;
		func_938(var_173_bool, var_174_object);
		if(!var_173_bool) { //@nz
			var_151_bool = false;
			return 16;
		}
		var_152_object->GetPosition(var_168_cvector);
		@GetPosition(var_169_cvector);
		var_171_float = (var_168_cvector - var_169_cvector) | (var_168_cvector - var_169_cvector);
		bool var_178_bool = false;
		if(var_154_float > 0) {
			if(var_171_float > (var_154_float * var_154_float))
				var_178_bool = true;
		}
		if(var_178_bool != 0) {
			@Stop();
			var_151_bool = false;
			return 16;
		}
		if(var_171_float > (var_153_float * var_153_float)) {
			var_152_object->GetPFPosition(var_168_cvector);
			@FindPathTo(var_172_object, var_168_cvector);
			if(var_172_object != null) {
				var_172_object = var_167_object;
				var_172_object = null;
			}
			if(var_167_object != null) {
				if(var_166_bool == 0) goto Label_851;
				var_166_bool = false;
				@RotatePath(var_167_object, var_165_bool);
				if(!var_165_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_191_string;
						func_945(var_191_string);
						string var_192_string;
						func_947(var_192_string);
						@FollowPath(var_167_object, var_155_bool, var_165_bool, var_191_string, var_192_string);
						if(!var_165_bool) { //@nz
							if(var_0_object == 0) goto Label_870;
							var_167_object = null;
						}
					EMIT "GOTO 0x367";

					Label_870:
						} else {
					var_167_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_165_bool);
					if(!var_165_bool) { //@nz
						if(var_0_object != 0) {
							var_167_object = null;
							goto Label_898;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_898;
		}
			var_172_object = null;
			goto Label_896;

		Label_896:
			var_167_object = null;

		}
	Label_898:
		for(;;) {
			var_151_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_31(object var_0_object, bool var_3_bool, int var_5_int, object var_19_object, bool var_20_bool, float var_21_float, bool var_128_bool, bool var_220_bool)
{
	float var_33_float; cvector var_34_cvector; cvector var_35_cvector; bool var_37_bool; float var_40_float; cvector var_41_cvector; bool var_42_bool; float var_43_float;
	func_260(var_41_cvector, var_42_bool, var_43_float);
	var_5_int = 0;
	var_68_bool = IsFuncExist(var_19_object, "@GetAttackDistance", 1);
	if(var_68_bool != 0) {
		var_19_object->GetAttackDistance(var_33_float);
		var_33_float += 50;
	} else {
						var_21_float = var_33_float;
	}
	if(var_33_float >= 150)
		var_33_float = 150;
	var_3_bool = false;
	var_0_object = var_19_object;
	bool var_36_bool;
	@IsPlayerActor(var_0_object, var_36_bool);
	if(var_36_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_74_object;
		func_1476(var_74_object);
		@SendPlayerEnemy(var_19_object, var_74_object);
	}
	if(var_20_bool != 0)
		var_37_bool = false;
	else
		var_37_bool = true;

	
Label_71:
	for(;;) {
		bool var_79_bool = false;
		bool var_80_bool;
		func_1263(var_80_bool, var_0_object);
		if(var_80_bool != 0) {
			if(!var_3_bool) //@nz
				var_79_bool = true;
		}
		if(var_79_bool != 0) {
			func_673(var_43_float);
			var_0_object->GetPFPosition(var_34_cvector); //@t
			@GetPFPosition(var_35_cvector);
			var_40_float = (var_34_cvector - var_35_cvector) | (var_34_cvector - var_35_cvector);
			if(var_40_float >= ((400.0 + var_33_float) * (400.0 + var_33_float))) {
				bool var_122_bool; float var_124_float;
				var_33_float = var_124_float;
				TaskCall(2);
				func_693(var_130_bool, var_122_bool, var_0_object, var_124_float, 10000.0, true, false);
				TaskReturn();
				if(!var_128_bool) { //@nz
				} else {
					var_37_bool = false;
			} else {
			if(var_40_float >= (var_21_float * var_21_float)) {
				var_0_object->GetPFPosition(var_41_cvector); //@t
				@CanReachByPF(var_42_bool, var_41_cvector);
				if(!var_42_bool) { //@nz
					bool var_214_bool; float var_216_float;
					var_33_float = var_216_float;
					TaskCall(2);
					func_693(var_222_bool, var_214_bool, var_0_object, var_216_float, 10000.0, true, false);
					TaskReturn();
					if(!var_220_bool) { //@nz
						goto Label_243;
					}
					var_37_bool = false;
					goto Label_71;
				}
				if(!var_37_bool) { //@nz
					func_1413(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_673(var_43_float);
					@StopAsync();
					var_37_bool = true;
					bool var_236_bool;
					func_1263(var_236_bool, var_0_object);
					if(!var_236_bool) { //@nz
						goto Label_243;
					}
				}
				@rand(var_43_float);
				bool var_239_bool;
				var_241_bool = var_43_float < 0.25;
				if(var_241_bool != 1) {
					bool var_242_bool;
					func_630(true, var_242_bool);
					if(var_242_bool != 1)
						var_239_bool = false;
				}
				if(var_239_bool != 0) {
					@Face(var_0_object);
					func_680();
					@PlayAnimation("all", "attack_stay");
					bool var_279_bool; float var_280_float;
					func_498(var_43_float, var_279_bool, var_280_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_673(var_43_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_501_bool;
					func_630(var_43_float, var_501_bool);
					var_502_bool = !var_501_bool; //@nz
					if(var_502_bool == 0) goto Label_233;
					bool var_503_bool;
					func_1263(var_503_bool, var_0_object);
					if(!var_503_bool) { //@nz
						goto Label_243;
					}
					var_0_object->GetPFPosition(var_34_cvector); //@t
					@GetPFPosition(var_35_cvector);
					if(!(((var_34_cvector - var_35_cvector) | (var_34_cvector - var_35_cvector)) < (var_280_float * var_280_float))) goto Label_233;
					bool var_508_bool; float var_509_float;
					var_21_float = var_509_float;
					func_334(var_42_bool, var_43_float, var_508_bool, var_509_float);
					var_510_bool = !var_508_bool; //@nz
					if(var_510_bool == 0) goto Label_233;
					goto Label_243;
			}
				bool var_511_bool; float var_512_float;
				var_21_float = var_512_float;
				func_334(var_42_bool, var_43_float, var_511_bool, var_512_float);
				if(!var_511_bool) { //@nz
					goto Label_243;
				}
				var_37_bool = true;

			}
		Label_233:
			goto Label_242;
			}
			Label_242:
			}
		}
	Label_243:
		@WaitForAnimEnd();
		if(var_3_bool != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_36_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_673(object var_0_object)
{
	func_1539(var_0_object);
}


void func_678(int var_456_int)
{
	var_456_int = 0;
}


void func_295(object var_0_object, float var_377_float, int var_378_int)
{
	object var_382_object; float var_383_float; float var_384_float;
	@GetVictim((var_377_float * 0.9), var_382_object);
	@ReportAttack(var_0_object);
	if(var_382_object == var_0_object) {
		float var_388_float; object var_389_object; int var_390_int;
		var_382_object = var_389_object;
		var_378_int = var_390_int;
		func_25(var_390_int);
		var_388_float = var_383_float;
		float var_391_float; object var_392_object; float var_393_float; int var_394_int;
		var_382_object = var_392_object;
		int var_395_int; object var_396_object; int var_397_int;
		var_382_object = var_396_object;
		var_378_int = var_397_int;
		func_28(var_397_int);
		var_395_int = var_394_int;
		func_1149(var_391_float, var_392_object, var_393_float, var_394_int);
		var_391_float = var_384_float;
		int var_456_int;
		func_678(var_456_int);
		@ReportHit(var_0_object, var_456_int, var_384_float, var_393_float);
		object var_457_object; float var_458_float;
		var_382_object = var_457_object;
		var_384_float = var_458_float;
		func_685();
	}
}
EMIT "Stack[-3] = 0";


void func_680(void)
{
	func_1435("attack_stay");
}


// @pe
void func_938(bool var_173_bool, object var_174_object)
{
	object var_176_object;
	var_174_object = var_176_object;
	bool var_175_bool;
	func_1263(var_175_bool, var_176_object);
	var_175_bool = var_173_bool;
}


void func_1578(string var_106_string)
{
	object var_110_object;
	@CreateInvItem(var_110_object);
	var_110_object->SetItemName(var_106_string);
	var_110_object->SetProperty("Organ", 1);
	int var_111_int;
	var_110_object->GetItemID(var_111_int);
	bool var_112_bool;
	@AddItem(var_112_bool, var_110_object, 0, 1);
}
EMIT "Stack[-3] = 0";


// @pe
void func_685(void)
{
}


void func_687(bool var_481_bool)
{
	var_481_bool = true;
}


void func_689(int var_373_int)
{
	var_373_int = 1;
}


void func_945(string var_191_string)
{
	var_191_string = "walk";
}


void func_691(float var_368_float)
{
	var_368_float = 0.5;
}


void func_947(string var_192_string)
{
	var_192_string = "run";
}


void func_693(int var_2_int, bool var_122_bool, object var_123_object, float var_124_float, float var_125_float, bool var_126_bool, bool var_127_bool)
{
	object var_135_object;
	func_1539(var_135_object);
	@SetTimer(1, 5);
	bool var_133_bool;
	@CanSee(var_133_bool, var_135_object);
	if(var_133_bool != 0) {
		var_2_int = true;
		object var_139_object;
		var_123_object = var_139_object;
		func_1424(var_139_object);
	} else {
		var_2_int = false;
	}
	bool var_146_bool; object var_147_object;
	func_1132(var_146_bool, var_147_object);
	if(var_146_bool != 0) {
		object var_150_object;
		func_1476(var_150_object);
		@SendPlayerEnemy(var_147_object, var_150_object);
	}
	bool var_151_bool; object var_152_object; float var_153_float; float var_154_float; bool var_155_bool; bool var_156_bool;
	var_123_object = var_152_object;
	var_124_float = var_153_float;
	var_125_float = var_154_float;
	var_126_bool = var_155_bool;
	var_127_bool = var_156_bool;
	bool var_134_bool;
	func_798(var_133_bool, var_134_bool, var_151_bool, var_152_object, var_153_float, var_154_float, var_155_bool, var_156_bool);
	var_151_bool = var_134_bool;
	if(var_2_int != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_134_bool = var_122_bool;
	
}


// @pe
void func_949(object var_11_object)
{
	bool var_12_bool;
	func_1527(var_12_bool, "quest_d5_01", "dead");
	object var_18_object;
	var_11_object = var_18_object;
	func_988(var_18_object);
	@SetRTEnvelope(50, 40);
	func_1595();
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1079(string var_40_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_41_string;
	var_40_string = var_41_string;
	func_1435(var_41_string);
	@PlayAnimation("all", var_40_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_40_string);
	@RemoveEnvelope();
}


void func_1331(object var_13_object, int var_14_int, float var_15_float)
{
	cvector var_25_cvector; object var_26_object; int var_27_int; bool var_28_bool; cvector var_29_cvector; cvector var_30_cvector;
	bool var_34_bool = false;
	bool var_35_bool = false;
	if(var_13_object != 0) {
		if(var_14_int != 4)
			var_35_bool = true;
	}
	if(var_35_bool != 0) {
		if(var_14_int != 5)
			var_34_bool = true;
	}
	if(var_34_bool != 0) {
		cvector var_41_cvector; cvector var_42_cvector;
		cvector var_43_cvector; object var_44_object;
		var_13_object = var_44_object;
		func_1125(var_43_cvector, var_44_object);
		var_43_cvector = var_42_cvector;
		func_1482(var_41_cvector, var_42_cvector);
		var_41_cvector = var_25_cvector;
		@CreateVectorVector(var_26_object);
		var_27_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_27_int), var_28_bool, var_29_cvector, var_30_cvector);
			if(!var_28_bool) { //@nz
				break;
			Label_1393:
				var_26_object = null;
	}
			object var_103_object;
			var_13_object = var_103_object;
			func_1287(var_103_object);
		}
		if((var_30_cvector | var_25_cvector) >= 0.70710677)
			var_26_object->add(var_29_cvector);
		var_27_int += 1;
	}
	int var_31_int;
	var_26_object->size(var_31_int);
	if(var_31_int == 0) goto Label_1393;
	int var_32_int;
	@irand(var_32_int, var_31_int);
	cvector var_33_cvector;
	var_26_object->get(var_33_cvector, var_32_int);
	object var_58_object; int var_59_int; float var_60_float; cvector var_61_cvector; cvector var_62_cvector;
	var_13_object = var_58_object;
	var_14_int = var_59_int;
	var_15_float = var_60_float;
	var_33_cvector = var_61_cvector;
	var_62_cvector = -var_25_cvector;
	func_1399(var_60_float, var_61_cvector, var_62_cvector);
}


void func_569(bool var_292_bool)
{
	bool var_293_bool = false;
	bool var_294_bool;
	func_541(var_293_bool, var_294_bool);
	if(var_294_bool != 0) {
		bool var_311_bool;
		func_585(var_292_bool, var_293_bool, var_311_bool);
		if(var_311_bool != 0)
			var_293_bool = true;
	}
	if(var_293_bool != 0) {
		var_292_bool = true;
		return 0;
	}
	var_292_bool = false;
}


void func_1595(void)
{
	int var_100_int;
	func_1559(var_100_int);
	if(var_100_int != 1) {
	}
	func_1578("liver");
	func_1578("kidney");
	func_1578("heart");
	func_1578("blood");
}


void func_1476(object var_74_object)
{
	object var_76_object;
	@self(var_76_object);
	var_76_object = var_74_object;
}
EMIT "Stack[-1] = 0";


void func_1222(bool var_95_bool, object var_96_object)
{
	bool var_98_bool;
	var_96_object->IsDead(var_98_bool);
	var_98_bool = var_95_bool;
}


void func_585(object var_0_object, float var_4_float, bool var_311_bool)
{
	object var_317_object; float var_319_float; cvector var_320_cvector; cvector var_321_cvector;
	@GetScene(var_317_object);
	bool var_318_bool = false;
	
	for(;;) {
		cvector var_322_cvector;
		func_1125(var_322_cvector, var_0_object);
		var_328_int = -var_322_cvector;
		@FindDirLength(var_319_float, var_328_int, var_4_float);
		if(var_319_float < var_4_float) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_320_cvector); //@t
				@GetPFPosition(var_321_cvector);
				@WaitForAnimEnd();
				func_673(var_321_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_318_bool = true;
				bool var_333_bool;
				func_541(var_321_cvector, var_333_bool);
				var_334_bool = !var_333_bool; //@nz
				if(var_334_bool == 0) goto Label_626;
		}
		for(;;) {
			var_318_bool = var_311_bool;

		}

	Label_626:
	}
}
EMIT "Stack[-5] = 0";


void func_1482(cvector var_41_cvector, cvector var_42_cvector)
{
	float var_50_float = sqrt(var_42_cvector | var_42_cvector);
	if(var_50_float < 0.000001)
		var_41_cvector = [0.0, 0.0, 0.0];
	var_41_cvector = var_42_cvector / var_50_float;
}


void func_1227(bool var_84_bool, object var_85_object)
{
	if(var_85_object == null) {
		var_84_bool = false;
		return 4;
	}
	bool var_91_bool = false;
	var_94_bool = IsFuncExist(var_85_object, "IsDead", 1);
	if(var_94_bool != 0) {
		bool var_95_bool; object var_96_object;
		var_85_object = var_96_object;
		func_1222(var_95_bool, var_96_object);
		if(var_95_bool != 0)
			var_91_bool = true;
	}
	if(var_91_bool != 0) {
		var_84_bool = false;
		return 4;
	}
	object var_88_object;
	@GetScene(var_88_object);
	if(var_88_object == null) {
		var_84_bool = false;
		return 4;
	}
	object var_89_object;
	var_85_object->GetScene(var_89_object);
	if(var_88_object != var_89_object) {
		var_84_bool = false;
		return 4;
	}
	var_84_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_334(object var_0_object, int var_1_int, bool var_340_bool, float var_341_float)
{
	string var_349_string;
	func_673(var_349_string);
	int var_346_int;
	@irand(var_346_int, var_1_int);
	@Face(var_0_object);
	@SetAttackState(true);
	func_1548();
	@PlayAnimation("all", ("attack_begin" + (var_346_int + 1)));
	@WaitForAnimEnd();
	int var_348_int;
	func_641(var_348_int, var_349_string);
	bool var_374_bool;
	func_1263(var_374_bool, var_0_object);
	if(!var_374_bool) { //@nz
		@StopAsync();
		var_340_bool = false;
		return 8;
	}
	float var_377_float; int var_378_int;
	var_341_float = var_377_float;
	var_346_int = var_378_int;
	func_295(var_349_string, var_377_float, var_378_int);
	bool var_347_bool;
	@HasAnimation(var_347_bool, "all", ("attack_middle" + var_346_int));
	if(var_347_bool != 0) {
		func_1548();
		@PlayAnimation("all", ("attack_middle" + var_346_int));
		@WaitForAnimEnd();
		func_673(var_349_string);
		bool var_466_bool;
		func_1263(var_466_bool, var_0_object);
		if(!var_466_bool) { //@nz
			@StopAsync();
			var_340_bool = false;
			return 8;
		}
		float var_469_float; int var_470_int;
		var_341_float = var_469_float;
		func_295(var_349_string, var_469_float, var_470_int);
		var_348_int = 1;

		for(;;) {
			var_349_string = (("attack_middle" + var_470_int) + "_") + var_348_int;
			@HasAnimation(var_347_bool, "all", var_349_string);
			if(!var_347_bool) { //@nz
			} else {
				func_1548();
				@PlayAnimation("all", var_349_string);
				@WaitForAnimEnd();
				func_673(var_349_string);
				bool var_492_bool;
				func_1263(var_492_bool, var_0_object);
				if(!var_492_bool) { //@nz
					@StopAsync();
					var_340_bool = false;
					return 8;
				}
				float var_495_float; int var_496_int;
				var_341_float = var_495_float;
				var_346_int = var_496_int;
				func_295(var_349_string, var_495_float, var_496_int);
				var_348_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_346_int));
		bool var_481_bool;
		func_687(var_481_bool);
		if(var_481_bool != 0) {
			bool var_482_bool;
			func_471(var_482_bool, 0.75);
			@StopAsync();
		}
		var_340_bool = true;
		return 8;

	}
}


// @pe
void func_1619(object var_10_object)
{
	object var_11_object;
	var_10_object = var_11_object;
	TaskCall(3);
	func_949(var_11_object);
	TaskReturn();
}


// @pe
void func_1492(float var_429_float, float var_430_float, float var_431_float)
{
	if(var_430_float < var_431_float)
		var_430_float = var_429_float;
	else
		var_431_float = var_429_float;
	
}


void func_471(bool var_482_bool, float var_483_float)
{
	float var_486_float; bool var_487_bool;
	@rand(var_486_float);
	if(var_486_float < var_483_float) {

		for(;;) {
			@IsAnimationPlaying(var_487_bool);
			if(!var_487_bool) { //@nz
			} else {
				bool var_490_bool;
				func_569(var_490_bool);
				if(var_490_bool != 0) {
					var_482_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_482_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_673(var_487_bool);
}


// @pe
void func_1111(string var_419_string, int var_420_int)
{
	if(var_420_int == 2) {
		var_419_string = "fire";
		return 0;
	EMIT "GOTO 0x463";
	}
	if(var_420_int == 1) {
		var_419_string = "bullet";
		return 0;
	}
	var_419_string = "phys";
}


// @pe
void func_1499(float var_439_float, float var_440_float, float var_441_float, float var_442_float)
{
	if(var_440_float < var_441_float) {
		var_441_float = var_439_float;
		return 0;
	}
	if(var_440_float > var_442_float) {
		var_442_float = var_439_float;
		return 0;
	}
	var_440_float = var_439_float;
}


void func_988(object var_18_object)
{
	cvector var_29_cvector; cvector var_30_cvector; cvector var_31_cvector; cvector var_32_cvector; string var_33_string; object var_34_object; bool var_35_bool; bool var_36_bool; float var_37_float; cvector var_38_cvector;
	if(var_18_object == null) {
		func_1079("fdie");
	} else {
		var_18_object->GetPosition(var_29_cvector);
		@GetPosition(var_30_cvector);
		@GetDirection(var_31_cvector);
		var_32_cvector = var_30_cvector - var_29_cvector;
		var_72_float = GetByIndex(var_32_cvector, 0);
		var_73_float = GetByIndex(var_31_cvector, 0);
		var_75_float = GetByIndex(var_32_cvector, 2);
		var_76_float = GetByIndex(var_31_cvector, 2);
		if(((var_72_float * var_73_float) + (var_75_float * var_76_float)) >= 0)
			var_33_string = "fdie";
		else
			var_33_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_18_object = var_34_object;
		var_83_bool = IsFuncExist(var_18_object, "GetScriptProperty", 2);
		if(var_83_bool != 0) {
			var_18_object->HasScriptProperty(var_35_bool, "Owner");
			if(var_35_bool != 0) {
				var_18_object->GetScriptProperty(var_34_object, "Owner");
				if(var_34_object == null)
					var_18_object = var_34_object;
			}
		}
		var_90_bool = IsFuncExist(var_34_object, "@GetEyesHeight", 1);
		if(var_90_bool != 0) {
			var_34_object->GetEyesHeight(var_37_float);
			var_38_cvector = [0.0, 0.0, 0.0];
			var_91_float = GetByIndex(var_38_cvector, 1);
			var_37_float = var_91_float;
			SetByIndex(var_38_cvector, 1) = var_91_float;
			@LookAsync(var_18_object, "head", var_38_cvector);
			var_36_bool = true;
		} else {
			var_36_bool = false;

		}
		string var_93_string;
		var_33_string = var_93_string;
		func_1435(var_93_string);
		@PlayAnimation("all", var_33_string);
		@WaitForAnimEnd();
		if(var_36_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_33_string);
		@RemoveEnvelope();
		var_34_object = null;
	}
	
}


void func_1125(cvector var_322_cvector, object var_323_object)
{
	cvector var_326_cvector;
	@GetPosition(var_326_cvector);
	cvector var_327_cvector;
	var_323_object->GetPosition(var_327_cvector);
	var_322_cvector = var_327_cvector - var_326_cvector;
}


void func_1510(float var_447_float)
{
	object var_449_object;
	@CreateFloatVector(var_449_object);
	var_449_object->add(var_447_float);
	if(var_447_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_449_object);
}
EMIT "Stack[-1] = 0";


void func_1132(bool var_146_bool, object var_147_object)
{
	bool var_149_bool;
	@IsPlayerActor(var_147_object, var_149_bool);
	var_149_bool = var_146_bool;
}


void func_1263(bool var_80_bool, object var_81_object)
{
	object var_85_object;
	var_81_object = var_85_object;
	bool var_84_bool;
	func_1227(var_84_bool, var_85_object);
	if(!var_84_bool) { //@nz
		var_80_bool = false;
		return 2;
	}
	bool var_102_bool; object var_103_object;
	func_1137(var_102_bool, var_103_object, "noaccess");
	if(!var_102_bool) { //@nz
		var_80_bool = true;
		return 2;
	}
	int var_83_int;
	var_103_object->GetProperty("noaccess", var_83_int);
	var_80_bool = var_83_int == 0;
}


void func_1137(bool var_102_bool, object var_103_object, string var_104_string)
{
	var_109_bool = IsFuncExist(var_103_object, "HasProperty", 2);
	if(!var_109_bool) { //@nz
		var_102_bool = false;
		return 2;
	}
	bool var_106_bool;
	var_103_object->HasProperty(var_104_string, var_106_bool);
	var_106_bool = var_102_bool;
}


void func_498(object var_0_object, bool var_279_bool, float var_280_float)
{
	bool var_286_bool; cvector var_287_cvector; cvector var_288_cvector; cvector var_289_cvector; float var_290_float;
	
	for(;;) {
		@IsAnimationPlaying(var_286_bool);
		if(!var_286_bool) //@nz
			break;
		bool var_292_bool;
		func_569(var_292_bool);
		if(var_292_bool != 0) {
			var_279_bool = true;
			return 10;
		}
		bool var_335_bool;
		func_1263(var_335_bool, var_0_object);
		if(!var_335_bool) { //@nz
			var_279_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_287_cvector); //@t
		@GetPFPosition(var_288_cvector);
		var_289_cvector = var_287_cvector - var_288_cvector;
		var_290_float = var_289_cvector | var_289_cvector;
		if(var_290_float < (var_280_float * var_280_float)) {
			bool var_340_bool; float var_341_float;
			var_280_float = var_341_float;
			func_334(var_289_cvector, var_290_float, var_340_bool, var_341_float);
			var_279_bool = true;
			return 10;
		}
		@sync();
	}
	func_673(var_290_float);
	var_279_bool = false;
}


void func_756(int var_2_int)
{
	@KillTimer(1);
	if(var_2_int != 0) {
		var_2_int = false;
		@UnlookAsync("head");
	}
	func_922(var_9_object);
}


void func_630(object var_0_object, bool var_242_bool)
{
	bool var_244_bool;
	var_247_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_247_bool != 0) {
		var_0_object->IsAttacking(var_244_bool); //@t
		var_244_bool = var_242_bool;
	}
	var_242_bool = false;
}


void func_1527(bool var_12_bool, string var_13_string, string var_14_string)
{
	object var_16_object;
	@FindActor(var_16_object, var_13_string);
	if(var_16_object == null)
		var_12_bool = false;
	@Trigger(var_16_object, var_14_string);
	var_12_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1149(float var_391_float, object var_392_object, float var_393_float, int var_394_int)
{
	int var_404_int; int var_406_int;
	object var_411_object;
	var_392_object = var_411_object;
	bool var_410_bool;
	func_1137(var_410_bool, var_411_object, "health");
	if(!var_410_bool) //@nz
		var_391_float = 0.0;
	bool var_414_bool; object var_415_object;
	func_1137(var_414_bool, var_415_object, "armor");
	if(!var_414_bool) //@nz
		var_404_int = 0;
	else
		var_415_object->GetProperty("armor", var_404_int);
	string var_419_string; int var_420_int;
	var_394_int = var_420_int;
	func_1111(var_419_string, var_420_int);
	string var_405_string = "armor_" + var_419_string;
	bool var_425_bool; object var_426_object; string var_427_string;
	var_392_object = var_426_object;
	func_1137(var_425_bool, var_426_object, var_427_string);
	if(!var_425_bool) //@nz
		var_406_int = 0;
	else
		var_392_object->GetProperty(var_427_string, var_406_int);

	float var_429_float;
	func_1492(var_429_float, ((var_404_int + var_406_int) / 100.0), (float)1);
	float var_407_float;
	var_429_float = var_407_float;
	float var_408_float;
	var_392_object->GetProperty("health", var_408_float);
	float var_409_float = var_393_float * (1 - var_407_float);
	float var_439_float;
	func_1499(var_439_float, (var_408_float - var_409_float), (float)0, (float)1);
	var_392_object->SetProperty("health", var_439_float);
	bool var_445_bool; object var_446_object;
	var_392_object = var_446_object;
	func_1132(var_445_bool, var_446_object);
	if(var_445_bool != 0) {
		float var_447_float = -var_409_float;
		func_1510(var_447_float);
	}
	var_409_float = var_391_float;
	
}


void func_1399(object var_15_object, cvector var_18_cvector, cvector var_19_cvector)
{
	object var_22_object;
	@GetScene(var_22_object);
	object var_23_object;
	@AddActorByType(var_23_object, "scripted", var_22_object, var_18_cvector, var_19_cvector, "blood_dir.xml");
	object var_26_object;
	var_15_object = var_26_object;
	func_1287(var_26_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


