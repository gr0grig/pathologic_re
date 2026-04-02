maintask task_0
{
	// @pe
	void init(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool)
	{
		func_4();
	}

	void OnUnload(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool)
	{
		object var_9_object;
		func_1483(var_9_object);
		@RemoveActor(var_9_object);
		@Hold();
	}

}


task task_1
{
	void OnUnload(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool)
	{
		object var_9_object;
		func_1483(var_9_object);
		@RemoveActor(var_9_object);
		@Hold();
	}

	// @pe
	void OnTimer(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, int var_9_int)
	{
		if(var_9_int == 1) {
			func_1579(var_1_int);
		} else {
			int var_17_int;
			func_907(var_8_bool, var_17_int, var_17_int);
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
			func_1431(var_13_object);
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
		func_763(var_9_object);
		object var_14_object;
		var_9_object = var_14_object;
		func_1648();
	}

}


task task_2
{
	void OnUnload(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool)
	{
		object var_9_object;
		func_1483(var_9_object);
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
	func_1338(var_13_object, var_14_int, var_15_float);
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
	func_1406(var_17_float, var_18_cvector, var_19_cvector);
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
	func_1599(var_10_object);
}


void func_640(int var_2_int, int var_5_int)
{
	int var_355_int;
	if(!var_2_int) //@nz
		return 4;
	if(var_5_int != 0) {
		if((var_5_int + -1) > 0)
			return 4;
	}
	float var_354_float;
	@rand(var_354_float);
	float var_361_float;
	func_690(var_361_float);
	if(var_354_float < var_361_float) {
		@irand(var_355_int, var_2_int);
		@Speak("attack" + (var_355_int + 1));
		int var_366_int;
		func_688(var_366_int);
		var_5_int = var_366_int;
	}
}


void func_259(int var_1_int, int var_2_int, float var_4_float)
{
	bool var_40_bool; bool var_41_bool; cvector var_42_cvector;
	var_1_int = 0;
	
	for(;;) {
		@HasAnimation(var_40_bool, "all", ("attack_begin" + (var_1_int + 1)));
		if(!var_40_bool) { //@nz
		} else {
			var_1_int += 1;
		}
		var_2_int = 0;

		for(;;) {
			@IsExisting3DSound(var_41_bool, ("attack" + (var_2_int + 1)));
			if(!var_41_bool) //@nz
				break;
			var_2_int += 1;
		}
		@GetAnimationOffset(var_42_cvector, "all", "bjump");
		var_56_float = GetByIndex(var_42_cvector, 2);
		var_4_float = -var_56_float;

	}
}


void func_1156(float var_384_float, object var_385_object, float var_386_float, int var_387_int)
{
	int var_397_int; int var_399_int;
	object var_404_object;
	var_385_object = var_404_object;
	bool var_403_bool;
	func_1122(var_403_bool, var_404_object, "health");
	if(!var_403_bool) //@nz
		var_384_float = 0.0;
	bool var_407_bool; object var_408_object;
	func_1122(var_407_bool, var_408_object, "armor");
	if(!var_407_bool) //@nz
		var_397_int = 0;
	else
		var_408_object->GetProperty("armor", var_397_int);
	string var_412_string; int var_413_int;
	var_387_int = var_413_int;
	func_1096(var_412_string, var_413_int);
	string var_398_string = "armor_" + var_412_string;
	bool var_418_bool; object var_419_object; string var_420_string;
	var_385_object = var_419_object;
	func_1122(var_418_bool, var_419_object, var_420_string);
	if(!var_418_bool) //@nz
		var_399_int = 0;
	else
		var_385_object->GetProperty(var_420_string, var_399_int);

	float var_422_float;
	func_1499(var_422_float, ((var_397_int + var_399_int) / 100.0), (float)1);
	float var_400_float;
	var_422_float = var_400_float;
	float var_401_float;
	var_385_object->GetProperty("health", var_401_float);
	float var_402_float = var_386_float * (1 - var_400_float);
	float var_432_float;
	func_1506(var_432_float, (var_401_float - var_402_float), (float)0, (float)1);
	var_385_object->SetProperty("health", var_432_float);
	bool var_438_bool; object var_439_object;
	var_385_object = var_439_object;
	func_1117(var_438_bool, var_439_object);
	if(var_438_bool != 0) {
		float var_440_float = -var_402_float;
		func_1552(var_440_float);
	}
	var_402_float = var_384_float;
	
}


void func_4(void)
{
	object var_10_object;
	@FindActor(var_10_object, "player");
	object var_12_object;
	object var_9_object;
	func_30(var_6_bool, var_7_object, var_8_bool, var_9_object, var_12_object, var_12_object, true, 180.0);
}
EMIT "Stack[-1] = 0";


// @pe
void func_907(object var_0_object, int var_1_int, int var_17_int)
{
	if(var_17_int != 0)
		return 0;
	bool var_20_bool;
	func_945(var_20_bool, var_1_int);
	if(!var_20_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_1420(object var_218_object)
{
	cvector var_222_cvector;
	var_218_object->GetPosition(var_222_cvector);
	cvector var_223_cvector;
	@GetPosition(var_223_cvector);
	cvector var_224_cvector = var_222_cvector - var_223_cvector;
	var_225_float = GetByIndex(var_224_cvector, 0);
	var_226_float = GetByIndex(var_224_cvector, 2);
	@RotateAsync(var_225_float, var_226_float);
}


void func_1294(object var_26_object)
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


// @pe
void func_16(float var_381_float)
{
	var_381_float = 0.1;
}


void func_1552(float var_440_float)
{
	object var_442_object;
	@CreateFloatVector(var_442_object);
	var_442_object->add(var_440_float);
	if(var_440_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_442_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_19(int var_388_int)
{
	var_388_int = 1;
}


void func_1431(object var_132_object)
{
	float var_135_float;
	var_132_object->GetEyesHeight(var_135_float);
	cvector var_136_cvector = [0.0, 0.0, 0.0];
	var_137_float = GetByIndex(var_136_cvector, 1);
	var_135_float = var_137_float;
	SetByIndex(var_136_cvector, 1) = var_137_float;
	@LookAsync(var_132_object, "head", var_136_cvector);
}


void func_540(object var_0_object, bool var_287_bool)
{
	cvector var_293_cvector; cvector var_294_cvector;
	bool var_298_bool;
	func_1270(var_298_bool, var_0_object);
	if(!var_298_bool) { //@nz
		var_287_bool = false;
		return 10;
	}
	bool var_301_bool;
	float var_297_float;
	func_629(var_297_float, var_301_bool);
	if(var_301_bool != 0) {
		var_0_object->GetPFPosition(var_293_cvector); //@t
		@GetPFPosition(var_294_cvector);
		var_0_object->GetAttackDistance(var_297_float); //@t
		var_287_bool = ((var_293_cvector - var_294_cvector) | (var_293_cvector - var_294_cvector)) <= ((var_297_float + 50) * (var_297_float + 50));
		return 10;
	}
	var_287_bool = false;
}


void func_30(object var_0_object, bool var_3_bool, int var_5_int, object var_12_object, bool var_13_bool, float var_14_float, bool var_121_bool, bool var_213_bool)
{
	float var_26_float; cvector var_27_cvector; cvector var_28_cvector; bool var_30_bool; float var_33_float; cvector var_34_cvector; bool var_35_bool; float var_36_float;
	func_259(var_34_cvector, var_35_bool, var_36_float);
	var_5_int = 0;
	var_61_bool = IsFuncExist(var_12_object, "@GetAttackDistance", 1);
	if(var_61_bool != 0) {
		var_12_object->GetAttackDistance(var_26_float);
		var_26_float += 50;
	} else {
						var_14_float = var_26_float;
	}
	if(var_26_float >= 150)
		var_26_float = 150;
	var_3_bool = false;
	var_0_object = var_12_object;
	bool var_29_bool;
	@IsPlayerActor(var_0_object, var_29_bool);
	if(var_29_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_67_object;
		func_1483(var_67_object);
		@SendPlayerEnemy(var_12_object, var_67_object);
	}
	if(var_13_bool != 0)
		var_30_bool = false;
	else
		var_30_bool = true;

	
Label_70:
	for(;;) {
		bool var_72_bool = false;
		bool var_73_bool;
		func_1270(var_73_bool, var_0_object);
		if(var_73_bool != 0) {
			if(!var_3_bool) //@nz
				var_72_bool = true;
		}
		if(var_72_bool != 0) {
			func_672(var_36_float);
			var_0_object->GetPFPosition(var_27_cvector); //@t
			@GetPFPosition(var_28_cvector);
			var_33_float = (var_27_cvector - var_28_cvector) | (var_27_cvector - var_28_cvector);
			if(var_33_float >= ((400.0 + var_26_float) * (400.0 + var_26_float))) {
				bool var_115_bool; float var_117_float;
				var_26_float = var_117_float;
				TaskCall(1);
				func_700(var_123_bool, var_115_bool, var_0_object, var_117_float, 3000.0, true, false);
				TaskReturn();
				if(!var_121_bool) { //@nz
				} else {
					var_30_bool = false;
			} else {
			if(var_33_float >= (var_14_float * var_14_float)) {
				var_0_object->GetPFPosition(var_34_cvector); //@t
				@CanReachByPF(var_35_bool, var_34_cvector);
				if(!var_35_bool) { //@nz
					bool var_207_bool; float var_209_float;
					var_26_float = var_209_float;
					TaskCall(1);
					func_700(var_215_bool, var_207_bool, var_0_object, var_209_float, 3000.0, true, false);
					TaskReturn();
					if(!var_213_bool) { //@nz
						goto Label_242;
					}
					var_30_bool = false;
					goto Label_70;
				}
				if(!var_30_bool) { //@nz
					func_1420(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_672(var_36_float);
					@StopAsync();
					var_30_bool = true;
					bool var_229_bool;
					func_1270(var_229_bool, var_0_object);
					if(!var_229_bool) { //@nz
						goto Label_242;
					}
				}
				@rand(var_36_float);
				bool var_232_bool;
				var_234_bool = var_36_float < 0.25;
				if(var_234_bool != 1) {
					bool var_235_bool;
					func_629(true, var_235_bool);
					if(var_235_bool != 1)
						var_232_bool = false;
				}
				if(var_232_bool != 0) {
					@Face(var_0_object);
					func_679();
					@PlayAnimation("all", "attack_stay");
					bool var_272_bool; float var_273_float;
					func_497(var_36_float, var_272_bool, var_273_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_672(var_36_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_494_bool;
					func_629(var_36_float, var_494_bool);
					var_495_bool = !var_494_bool; //@nz
					if(var_495_bool == 0) goto Label_232;
					bool var_496_bool;
					func_1270(var_496_bool, var_0_object);
					if(!var_496_bool) { //@nz
						goto Label_242;
					}
					var_0_object->GetPFPosition(var_27_cvector); //@t
					@GetPFPosition(var_28_cvector);
					if(!(((var_27_cvector - var_28_cvector) | (var_27_cvector - var_28_cvector)) < (var_273_float * var_273_float))) goto Label_232;
					bool var_501_bool; float var_502_float;
					var_14_float = var_502_float;
					func_333(var_35_bool, var_36_float, var_501_bool, var_502_float);
					var_503_bool = !var_501_bool; //@nz
					if(var_503_bool == 0) goto Label_232;
					goto Label_242;
			}
				bool var_504_bool; float var_505_float;
				var_14_float = var_505_float;
				func_333(var_35_bool, var_36_float, var_504_bool, var_505_float);
				if(!var_504_bool) { //@nz
					goto Label_242;
				}
				var_30_bool = true;

			}
		Label_232:
			goto Label_241;
			}
			Label_241:
			}
		}
	Label_242:
		@WaitForAnimEnd();
		if(var_3_bool != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_29_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_672(object var_0_object)
{
	func_1579(var_0_object);
}


void func_929(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_1442(string var_241_string)
{
	bool var_250_bool; int var_251_int; bool var_252_bool; int var_253_int; bool var_254_bool; float var_255_float; cvector var_256_cvector; cvector var_257_cvector;
	@IsExisting3DSound(var_250_bool, var_241_string);
	if(!var_250_bool) { //@nz
		var_251_int = 0;

		for(;;) {
			@IsExisting3DSound(var_252_bool, (var_241_string + (var_251_int + 1)));
			if(!var_252_bool) { //@nz
				break;
			Label_1462:
				@irand(var_253_int, var_251_int);
				var_241_string += (var_253_int + 1);
	}
			@Is3DSoundLoaded(var_254_bool, var_241_string);
			if(var_254_bool != 0) {
				@GetEyesHeight(var_255_float);
				@GetDirection(var_256_cvector);
				var_257_cvector = var_256_cvector * 50;
				var_268_float = GetByIndex(var_257_cvector, 1);
				SetByIndex(var_257_cvector, 1) = (var_268_float + var_255_float);
				@PlayGlobalSound(var_241_string, var_257_cvector);
			}
		}
		var_251_int += 1;
	}
	var_263_bool = !var_251_int; //@nz
	if(var_263_bool == 0) goto Label_1462;
}


void func_1569(float var_22_float)
{
	object var_24_object;
	@CreateFloatVector(var_24_object);
	var_24_object->add(var_22_float);
	@SendWorldWndMessage(16, var_24_object);
}
EMIT "Stack[-1] = 0";


void func_677(int var_449_int)
{
	var_449_int = 0;
}


void func_294(object var_0_object, float var_370_float, int var_371_int)
{
	object var_375_object; float var_376_float; float var_377_float;
	@GetVictim((var_370_float * 0.9), var_375_object);
	@ReportAttack(var_0_object);
	if(var_375_object == var_0_object) {
		float var_381_float; object var_382_object; int var_383_int;
		var_375_object = var_382_object;
		var_371_int = var_383_int;
		func_16(var_383_int);
		var_381_float = var_376_float;
		float var_384_float; object var_385_object; float var_386_float; int var_387_int;
		var_375_object = var_385_object;
		int var_388_int; object var_389_object; int var_390_int;
		var_375_object = var_389_object;
		var_371_int = var_390_int;
		func_19(var_390_int);
		var_388_int = var_387_int;
		func_1156(var_384_float, var_385_object, var_386_float, var_387_int);
		var_384_float = var_377_float;
		int var_449_int;
		func_677(var_449_int);
		@ReportHit(var_0_object, var_449_int, var_377_float, var_386_float);
		object var_450_object; float var_451_float;
		var_375_object = var_450_object;
		var_377_float = var_451_float;
		func_684();
	}
}
EMIT "Stack[-3] = 0";


void func_679(void)
{
	func_1442("attack_stay");
}


void func_805(object var_0_object, int var_1_int, bool var_144_bool, object var_145_object, float var_146_float, float var_147_float, bool var_148_bool, bool var_149_bool)
{
	bool var_158_bool; object var_160_object; cvector var_161_cvector; cvector var_162_cvector; float var_164_float; object var_165_object;
	var_0_object = false;
	var_1_int = var_145_object;
	bool var_159_bool;
	var_149_bool = var_159_bool;
	
	for(;;) {
		bool var_166_bool; object var_167_object;
		var_145_object = var_167_object;
		func_945(var_166_bool, var_167_object);
		if(!var_166_bool) { //@nz
			var_144_bool = false;
			return 16;
		}
		var_145_object->GetPosition(var_161_cvector);
		@GetPosition(var_162_cvector);
		var_164_float = (var_161_cvector - var_162_cvector) | (var_161_cvector - var_162_cvector);
		bool var_171_bool = false;
		if(var_147_float > 0) {
			if(var_164_float > (var_147_float * var_147_float))
				var_171_bool = true;
		}
		if(var_171_bool != 0) {
			@Stop();
			var_144_bool = false;
			return 16;
		}
		if(var_164_float > (var_146_float * var_146_float)) {
			var_145_object->GetPFPosition(var_161_cvector);
			@FindPathTo(var_165_object, var_161_cvector);
			if(var_165_object != null) {
				var_165_object = var_160_object;
				var_165_object = null;
			}
			if(var_160_object != null) {
				if(var_159_bool == 0) goto Label_858;
				var_159_bool = false;
				@RotatePath(var_160_object, var_158_bool);
				if(!var_158_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_184_string;
						func_952(var_184_string);
						string var_185_string;
						func_954(var_185_string);
						@FollowPath(var_160_object, var_148_bool, var_158_bool, var_184_string, var_185_string);
						if(!var_158_bool) { //@nz
							if(var_0_object == 0) goto Label_877;
							var_160_object = null;
						}
					EMIT "GOTO 0x36e";

					Label_877:
						} else {
					var_160_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_158_bool);
					if(!var_158_bool) { //@nz
						if(var_0_object != 0) {
							var_160_object = null;
							goto Label_905;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_905;
		}
			var_165_object = null;
			goto Label_903;

		Label_903:
			var_160_object = null;

		}
	Label_905:
		for(;;) {
			var_144_bool = !var_0_object;
			return 16;

			}
	}
	
}


// @pe
void func_1064(string var_76_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_77_string;
	var_76_string = var_77_string;
	func_1442(var_77_string);
	@PlayAnimation("all", var_76_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_76_string);
	@RemoveEnvelope();
}


void func_1579(object var_108_object)
{
	bool var_110_bool;
	@IsPlayerActor(var_108_object, var_110_bool);
	if(var_110_bool != 0)
		@PlayGlobalMusic("attack");
}


// @pe
void func_684(void)
{
}


void func_686(bool var_474_bool)
{
	var_474_bool = true;
}


void func_688(int var_366_int)
{
	var_366_int = 1;
}


// @pe
void func_945(bool var_166_bool, object var_167_object)
{
	object var_169_object;
	var_167_object = var_169_object;
	bool var_168_bool;
	func_1270(var_168_bool, var_169_object);
	var_168_bool = var_166_bool;
}


void func_690(float var_361_float)
{
	var_361_float = 0.5;
}


void func_1588(void)
{
	object var_346_object;
	@GetScene(var_346_object);
	object var_348_object;
	func_1483(var_348_object);
	@BroadcastMessage("battle", var_348_object, var_346_object);
}
EMIT "Stack[-1] = 0";


void func_568(bool var_285_bool)
{
	bool var_286_bool = false;
	bool var_287_bool;
	func_540(var_286_bool, var_287_bool);
	if(var_287_bool != 0) {
		bool var_304_bool;
		func_584(var_285_bool, var_286_bool, var_304_bool);
		if(var_304_bool != 0)
			var_286_bool = true;
	}
	if(var_286_bool != 0) {
		var_285_bool = true;
		return 0;
	}
	var_285_bool = false;
}


void func_952(string var_184_string)
{
	var_184_string = "walk";
}


void func_954(string var_185_string)
{
	var_185_string = "run";
}


void func_1338(object var_13_object, int var_14_int, float var_15_float)
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
		func_1110(var_43_cvector, var_44_object);
		var_43_cvector = var_42_cvector;
		func_1489(var_41_cvector, var_42_cvector);
		var_41_cvector = var_25_cvector;
		@CreateVectorVector(var_26_object);
		var_27_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_27_int), var_28_bool, var_29_cvector, var_30_cvector);
			if(!var_28_bool) { //@nz
				break;
			Label_1400:
				var_26_object = null;
	}
			object var_103_object;
			var_13_object = var_103_object;
			func_1294(var_103_object);
		}
		if((var_30_cvector | var_25_cvector) >= 0.70710677)
			var_26_object->add(var_29_cvector);
		var_27_int += 1;
	}
	int var_31_int;
	var_26_object->size(var_31_int);
	if(var_31_int == 0) goto Label_1400;
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
	func_1406(var_60_float, var_61_cvector, var_62_cvector);
}


void func_700(int var_2_int, bool var_115_bool, object var_116_object, float var_117_float, float var_118_float, bool var_119_bool, bool var_120_bool)
{
	object var_128_object;
	func_1579(var_128_object);
	@SetTimer(1, 5);
	bool var_126_bool;
	@CanSee(var_126_bool, var_128_object);
	if(var_126_bool != 0) {
		var_2_int = true;
		object var_132_object;
		var_116_object = var_132_object;
		func_1431(var_132_object);
	} else {
		var_2_int = false;
	}
	bool var_139_bool; object var_140_object;
	func_1117(var_139_bool, var_140_object);
	if(var_139_bool != 0) {
		object var_143_object;
		func_1483(var_143_object);
		@SendPlayerEnemy(var_140_object, var_143_object);
	}
	bool var_144_bool; object var_145_object; float var_146_float; float var_147_float; bool var_148_bool; bool var_149_bool;
	var_116_object = var_145_object;
	var_117_float = var_146_float;
	var_118_float = var_147_float;
	var_119_bool = var_148_bool;
	var_120_bool = var_149_bool;
	bool var_127_bool;
	func_805(var_126_bool, var_127_bool, var_144_bool, var_145_object, var_146_float, var_147_float, var_148_bool, var_149_bool);
	var_144_bool = var_127_bool;
	if(var_2_int != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_127_bool = var_115_bool;
	
}


// @pe
void func_1599(object var_10_object)
{
	object var_12_object;
	var_10_object = var_12_object;
	bool var_11_bool;
	func_1117(var_11_bool, var_12_object);
	if(var_11_bool != 0) {
		bool var_15_bool; object var_16_object;
		var_10_object = var_16_object;
		func_1517(var_15_bool, var_16_object, 0.02);
	}
	object var_53_object;
	var_10_object = var_53_object;
	TaskCall(2);
	func_964(var_53_object);
	TaskReturn();
}


// @pe
void func_964(object var_53_object)
{
	object var_54_object;
	var_53_object = var_54_object;
	func_973(var_54_object);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_584(object var_0_object, float var_4_float, bool var_304_bool)
{
	object var_310_object; float var_312_float; cvector var_313_cvector; cvector var_314_cvector;
	@GetScene(var_310_object);
	bool var_311_bool = false;
	
	for(;;) {
		cvector var_315_cvector;
		func_1110(var_315_cvector, var_0_object);
		var_321_int = -var_315_cvector;
		@FindDirLength(var_312_float, var_321_int, var_4_float);
		if(var_312_float < var_4_float) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_313_cvector); //@t
				@GetPFPosition(var_314_cvector);
				@WaitForAnimEnd();
				func_672(var_314_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_311_bool = true;
				bool var_326_bool;
				func_540(var_314_cvector, var_326_bool);
				var_327_bool = !var_326_bool; //@nz
				if(var_327_bool == 0) goto Label_625;
		}
		for(;;) {
			var_311_bool = var_304_bool;

		}

	Label_625:
	}
}
EMIT "Stack[-5] = 0";


// @pe
void func_1096(string var_412_string, int var_413_int)
{
	if(var_413_int == 2) {
		var_412_string = "fire";
		return 0;
	EMIT "GOTO 0x454";
	}
	if(var_413_int == 1) {
		var_412_string = "bullet";
		return 0;
	}
	var_412_string = "phys";
}


void func_1483(object var_67_object)
{
	object var_69_object;
	@self(var_69_object);
	var_69_object = var_67_object;
}
EMIT "Stack[-1] = 0";


void func_333(object var_0_object, int var_1_int, bool var_333_bool, float var_334_float)
{
	string var_342_string;
	func_672(var_342_string);
	int var_339_int;
	@irand(var_339_int, var_1_int);
	@Face(var_0_object);
	@SetAttackState(true);
	func_1588();
	@PlayAnimation("all", ("attack_begin" + (var_339_int + 1)));
	@WaitForAnimEnd();
	int var_341_int;
	func_640(var_341_int, var_342_string);
	bool var_367_bool;
	func_1270(var_367_bool, var_0_object);
	if(!var_367_bool) { //@nz
		@StopAsync();
		var_333_bool = false;
		return 8;
	}
	float var_370_float; int var_371_int;
	var_334_float = var_370_float;
	var_339_int = var_371_int;
	func_294(var_342_string, var_370_float, var_371_int);
	bool var_340_bool;
	@HasAnimation(var_340_bool, "all", ("attack_middle" + var_339_int));
	if(var_340_bool != 0) {
		func_1588();
		@PlayAnimation("all", ("attack_middle" + var_339_int));
		@WaitForAnimEnd();
		func_672(var_342_string);
		bool var_459_bool;
		func_1270(var_459_bool, var_0_object);
		if(!var_459_bool) { //@nz
			@StopAsync();
			var_333_bool = false;
			return 8;
		}
		float var_462_float; int var_463_int;
		var_334_float = var_462_float;
		func_294(var_342_string, var_462_float, var_463_int);
		var_341_int = 1;

		for(;;) {
			var_342_string = (("attack_middle" + var_463_int) + "_") + var_341_int;
			@HasAnimation(var_340_bool, "all", var_342_string);
			if(!var_340_bool) { //@nz
			} else {
				func_1588();
				@PlayAnimation("all", var_342_string);
				@WaitForAnimEnd();
				func_672(var_342_string);
				bool var_485_bool;
				func_1270(var_485_bool, var_0_object);
				if(!var_485_bool) { //@nz
					@StopAsync();
					var_333_bool = false;
					return 8;
				}
				float var_488_float; int var_489_int;
				var_334_float = var_488_float;
				var_339_int = var_489_int;
				func_294(var_342_string, var_488_float, var_489_int);
				var_341_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_339_int));
		bool var_474_bool;
		func_686(var_474_bool);
		if(var_474_bool != 0) {
			bool var_475_bool;
			func_470(var_475_bool, 0.75);
			@StopAsync();
		}
		var_333_bool = true;
		return 8;

	}
}


void func_973(object var_54_object)
{
	cvector var_65_cvector; cvector var_66_cvector; cvector var_67_cvector; cvector var_68_cvector; string var_69_string; object var_70_object; bool var_71_bool; bool var_72_bool; float var_73_float; cvector var_74_cvector;
	if(var_54_object == null) {
		func_1064("fdie");
	} else {
		var_54_object->GetPosition(var_65_cvector);
		@GetPosition(var_66_cvector);
		@GetDirection(var_67_cvector);
		var_68_cvector = var_66_cvector - var_65_cvector;
		var_108_float = GetByIndex(var_68_cvector, 0);
		var_109_float = GetByIndex(var_67_cvector, 0);
		var_111_float = GetByIndex(var_68_cvector, 2);
		var_112_float = GetByIndex(var_67_cvector, 2);
		if(((var_108_float * var_109_float) + (var_111_float * var_112_float)) >= 0)
			var_69_string = "fdie";
		else
			var_69_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_54_object = var_70_object;
		var_119_bool = IsFuncExist(var_54_object, "GetScriptProperty", 2);
		if(var_119_bool != 0) {
			var_54_object->HasScriptProperty(var_71_bool, "Owner");
			if(var_71_bool != 0) {
				var_54_object->GetScriptProperty(var_70_object, "Owner");
				if(var_70_object == null)
					var_54_object = var_70_object;
			}
		}
		var_126_bool = IsFuncExist(var_70_object, "@GetEyesHeight", 1);
		if(var_126_bool != 0) {
			var_70_object->GetEyesHeight(var_73_float);
			var_74_cvector = [0.0, 0.0, 0.0];
			var_127_float = GetByIndex(var_74_cvector, 1);
			var_73_float = var_127_float;
			SetByIndex(var_74_cvector, 1) = var_127_float;
			@LookAsync(var_54_object, "head", var_74_cvector);
			var_72_bool = true;
		} else {
			var_72_bool = false;

		}
		string var_129_string;
		var_69_string = var_129_string;
		func_1442(var_129_string);
		@PlayAnimation("all", var_69_string);
		@WaitForAnimEnd();
		if(var_72_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_69_string);
		@RemoveEnvelope();
		var_70_object = null;
	}
	
}


void func_1229(bool var_88_bool, object var_89_object)
{
	bool var_91_bool;
	var_89_object->IsDead(var_91_bool);
	var_91_bool = var_88_bool;
}


void func_1489(cvector var_41_cvector, cvector var_42_cvector)
{
	float var_50_float = sqrt(var_42_cvector | var_42_cvector);
	if(var_50_float < 0.000001)
		var_41_cvector = [0.0, 0.0, 0.0];
	var_41_cvector = var_42_cvector / var_50_float;
}


void func_1234(bool var_77_bool, object var_78_object)
{
	if(var_78_object == null) {
		var_77_bool = false;
		return 4;
	}
	bool var_84_bool = false;
	var_87_bool = IsFuncExist(var_78_object, "IsDead", 1);
	if(var_87_bool != 0) {
		bool var_88_bool; object var_89_object;
		var_78_object = var_89_object;
		func_1229(var_88_bool, var_89_object);
		if(var_88_bool != 0)
			var_84_bool = true;
	}
	if(var_84_bool != 0) {
		var_77_bool = false;
		return 4;
	}
	object var_81_object;
	@GetScene(var_81_object);
	if(var_81_object == null) {
		var_77_bool = false;
		return 4;
	}
	object var_82_object;
	var_78_object->GetScene(var_82_object);
	if(var_81_object != var_82_object) {
		var_77_bool = false;
		return 4;
	}
	var_77_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_470(bool var_475_bool, float var_476_float)
{
	float var_479_float; bool var_480_bool;
	@rand(var_479_float);
	if(var_479_float < var_476_float) {

		for(;;) {
			@IsAnimationPlaying(var_480_bool);
			if(!var_480_bool) { //@nz
			} else {
				bool var_483_bool;
				func_568(var_483_bool);
				if(var_483_bool != 0) {
					var_475_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_475_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_672(var_480_bool);
}


void func_1110(cvector var_315_cvector, object var_316_object)
{
	cvector var_319_cvector;
	@GetPosition(var_319_cvector);
	cvector var_320_cvector;
	var_316_object->GetPosition(var_320_cvector);
	var_315_cvector = var_320_cvector - var_319_cvector;
}


// @pe
void func_1499(float var_422_float, float var_423_float, float var_424_float)
{
	if(var_423_float < var_424_float)
		var_423_float = var_422_float;
	else
		var_424_float = var_422_float;
	
}


void func_1117(bool var_139_bool, object var_140_object)
{
	bool var_142_bool;
	@IsPlayerActor(var_140_object, var_142_bool);
	var_142_bool = var_139_bool;
}


void func_1122(bool var_95_bool, object var_96_object, string var_97_string)
{
	var_102_bool = IsFuncExist(var_96_object, "HasProperty", 2);
	if(!var_102_bool) { //@nz
		var_95_bool = false;
		return 2;
	}
	bool var_99_bool;
	var_96_object->HasProperty(var_97_string, var_99_bool);
	var_99_bool = var_95_bool;
}


// @pe
void func_1506(float var_432_float, float var_433_float, float var_434_float, float var_435_float)
{
	if(var_433_float < var_434_float) {
		var_434_float = var_432_float;
		return 0;
	}
	if(var_433_float > var_435_float) {
		var_435_float = var_432_float;
		return 0;
	}
	var_433_float = var_432_float;
}


// @pe
void func_1517(bool var_15_bool, object var_16_object, float var_17_float)
{
	if(!var_16_object) { //@nz
		var_15_bool = false;
		return 0;
	}
	if(var_17_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_17_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_22_float;
		var_17_float = var_22_float;
		func_1569(var_22_float);
		bool var_26_bool; object var_27_object; float var_29_float;
		var_16_object = var_27_object;
		var_17_float = var_29_float;
		func_1134(var_26_bool, var_27_object, "reputation", var_29_float, (float)0, (float)1);
		var_15_bool = true;
		return 0;

	}
	
	var_15_bool = false;
}


void func_1134(bool var_26_bool, object var_27_object, string var_28_string, float var_29_float, float var_30_float, float var_31_float)
{
	object var_35_object;
	var_27_object = var_35_object;
	string var_36_string;
	var_28_string = var_36_string;
	bool var_34_bool;
	func_1122(var_34_bool, var_35_object, var_36_string);
	if(!var_34_bool) //@nz
		var_26_bool = false;
	float var_33_float;
	var_27_object->GetProperty(var_28_string, var_33_float);
	float var_44_float; float var_46_float; float var_47_float;
	var_30_float = var_46_float;
	var_31_float = var_47_float;
	func_1506(var_44_float, (var_33_float + var_29_float), var_46_float, var_47_float);
	var_27_object->SetProperty(var_28_string, var_44_float);
	var_26_bool = true;
}


void func_497(object var_0_object, bool var_272_bool, float var_273_float)
{
	bool var_279_bool; cvector var_280_cvector; cvector var_281_cvector; cvector var_282_cvector; float var_283_float;
	
	for(;;) {
		@IsAnimationPlaying(var_279_bool);
		if(!var_279_bool) //@nz
			break;
		bool var_285_bool;
		func_568(var_285_bool);
		if(var_285_bool != 0) {
			var_272_bool = true;
			return 10;
		}
		bool var_328_bool;
		func_1270(var_328_bool, var_0_object);
		if(!var_328_bool) { //@nz
			var_272_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_280_cvector); //@t
		@GetPFPosition(var_281_cvector);
		var_282_cvector = var_280_cvector - var_281_cvector;
		var_283_float = var_282_cvector | var_282_cvector;
		if(var_283_float < (var_273_float * var_273_float)) {
			bool var_333_bool; float var_334_float;
			var_273_float = var_334_float;
			func_333(var_282_cvector, var_283_float, var_333_bool, var_334_float);
			var_272_bool = true;
			return 10;
		}
		@sync();
	}
	func_672(var_283_float);
	var_272_bool = false;
}


void func_629(object var_0_object, bool var_235_bool)
{
	bool var_237_bool;
	var_240_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_240_bool != 0) {
		var_0_object->IsAttacking(var_237_bool); //@t
		var_237_bool = var_235_bool;
	}
	var_235_bool = false;
}


void func_1270(bool var_73_bool, object var_74_object)
{
	object var_78_object;
	var_74_object = var_78_object;
	bool var_77_bool;
	func_1234(var_77_bool, var_78_object);
	if(!var_77_bool) { //@nz
		var_73_bool = false;
		return 2;
	}
	bool var_95_bool; object var_96_object;
	func_1122(var_95_bool, var_96_object, "noaccess");
	if(!var_95_bool) { //@nz
		var_73_bool = true;
		return 2;
	}
	int var_76_int;
	var_96_object->GetProperty("noaccess", var_76_int);
	var_73_bool = var_76_int == 0;
}


void func_763(int var_2_int)
{
	@KillTimer(1);
	if(var_2_int != 0) {
		var_2_int = false;
		@UnlookAsync("head");
	}
	func_929(var_9_object);
}


void func_1406(object var_15_object, cvector var_18_cvector, cvector var_19_cvector)
{
	object var_22_object;
	@GetScene(var_22_object);
	object var_23_object;
	@AddActorByType(var_23_object, "scripted", var_22_object, var_18_cvector, var_19_cvector, "blood_dir.xml");
	object var_26_object;
	var_15_object = var_26_object;
	func_1294(var_26_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


