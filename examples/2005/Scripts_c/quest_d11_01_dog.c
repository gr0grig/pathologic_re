maintask task_0
{
	void init(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool)
	{
		@Hold();
	}

	void OnLoad(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool)
	{
		TaskCall(1);
		func_19();
		TaskReturn();
	}

	// @pe
	void OnTrigger(string name, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool)
	{
		if(var_9_bool == "cleanup") {
			object var_12_object;
			func_1459(var_12_object);
			@RemoveActor(var_12_object);
		}
	}

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
			func_1503(var_1_int);
		} else {
			int var_17_int;
			func_913(var_8_bool, var_17_int, var_17_int);
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
			func_1407(var_13_object);
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
		func_769(var_9_object);
		object var_14_object;
		var_9_object = var_14_object;
		func_1570();
	}

}


task task_3
{
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


void OnUnload(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool)
{
	object var_9_object;
	func_1459(var_9_object);
	@RemoveActor(var_9_object);
	@Hold();
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
	func_1314(var_13_object, var_14_int, var_15_float);
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
	func_1382(var_17_float, var_18_cvector, var_19_cvector);
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
	func_1531(var_10_object);
}


void func_769(int var_2_int)
{
	@KillTimer(1);
	if(var_2_int != 0) {
		var_2_int = false;
		@UnlookAsync("head");
	}
	func_935(var_9_object);
}


void func_643(object var_0_object, bool var_242_bool)
{
	bool var_244_bool;
	var_247_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_247_bool != 0) {
		var_0_object->IsAttacking(var_244_bool); //@t
		var_244_bool = var_242_bool;
	}
	var_242_bool = false;
}


void func_1418(string var_35_string)
{
	bool var_44_bool; int var_45_int; bool var_46_bool; int var_47_int; bool var_48_bool; float var_49_float; cvector var_50_cvector; cvector var_51_cvector;
	@IsExisting3DSound(var_44_bool, var_35_string);
	if(!var_44_bool) { //@nz
		var_45_int = 0;

		for(;;) {
			@IsExisting3DSound(var_46_bool, (var_35_string + (var_45_int + 1)));
			if(!var_46_bool) { //@nz
				break;
			Label_1438:
				@irand(var_47_int, var_45_int);
				var_35_string += (var_47_int + 1);
	}
			@Is3DSoundLoaded(var_48_bool, var_35_string);
			if(var_48_bool != 0) {
				@GetEyesHeight(var_49_float);
				@GetDirection(var_50_cvector);
				var_51_cvector = var_50_cvector * 50;
				var_62_float = GetByIndex(var_51_cvector, 1);
				SetByIndex(var_51_cvector, 1) = (var_62_float + var_49_float);
				@PlayGlobalSound(var_35_string, var_51_cvector);
			}
		}
		var_45_int += 1;
	}
	var_57_bool = !var_45_int; //@nz
	if(var_57_bool == 0) goto Label_1438;
}


void func_654(int var_2_int, int var_5_int)
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
	func_704(var_368_float);
	if(var_361_float < var_368_float) {
		@irand(var_362_int, var_2_int);
		@Speak("attack" + (var_362_int + 1));
		int var_373_int;
		func_702(var_373_int);
		var_5_int = var_373_int;
	}
}


void func_273(int var_1_int, int var_2_int, float var_4_float)
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


// @pe
void func_913(object var_0_object, int var_1_int, int var_17_int)
{
	if(var_17_int != 0)
		return 0;
	bool var_20_bool;
	func_951(var_20_bool, var_1_int);
	if(!var_20_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_19(void)
{
	object var_15_object; object var_16_object;
	@FindActor(var_16_object, "player");
	if(!var_16_object) { //@nz
	}
	for(;;) {
		object var_19_object;
		func_44(var_12_bool, var_13_float, var_14_int, var_15_object, var_19_object, var_19_object, true, 180.0);
		@Sleep(1);
	}
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


void func_1314(object var_13_object, int var_14_int, float var_15_float)
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
		func_1108(var_43_cvector, var_44_object);
		var_43_cvector = var_42_cvector;
		func_1465(var_41_cvector, var_42_cvector);
		var_41_cvector = var_25_cvector;
		@CreateVectorVector(var_26_object);
		var_27_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_27_int), var_28_bool, var_29_cvector, var_30_cvector);
			if(!var_28_bool) { //@nz
				break;
			Label_1376:
				var_26_object = null;
	}
			object var_103_object;
			var_13_object = var_103_object;
			func_1270(var_103_object);
		}
		if((var_30_cvector | var_25_cvector) >= 0.70710677)
			var_26_object->add(var_29_cvector);
		var_27_int += 1;
	}
	int var_31_int;
	var_26_object->size(var_31_int);
	if(var_31_int == 0) goto Label_1376;
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
	func_1382(var_60_float, var_61_cvector, var_62_cvector);
}


// @pe
void func_38(float var_388_float)
{
	var_388_float = 0.1;
}


void func_935(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_1062(string var_34_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_35_string;
	var_34_string = var_35_string;
	func_1418(var_35_string);
	@PlayAnimation("all", var_34_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_34_string);
	@RemoveEnvelope();
}


// @pe
void func_41(int var_395_int)
{
	var_395_int = 0;
}


void func_554(object var_0_object, bool var_294_bool)
{
	cvector var_300_cvector; cvector var_301_cvector;
	bool var_305_bool;
	func_1246(var_305_bool, var_0_object);
	if(!var_305_bool) { //@nz
		var_294_bool = false;
		return 10;
	}
	bool var_308_bool;
	float var_304_float;
	func_643(var_304_float, var_308_bool);
	if(var_308_bool != 0) {
		var_0_object->GetPFPosition(var_300_cvector); //@t
		@GetPFPosition(var_301_cvector);
		var_0_object->GetAttackDistance(var_304_float); //@t
		var_294_bool = ((var_300_cvector - var_301_cvector) | (var_300_cvector - var_301_cvector)) <= ((var_304_float + 50) * (var_304_float + 50));
		return 10;
	}
	var_294_bool = false;
}


void func_811(object var_0_object, int var_1_int, bool var_151_bool, object var_152_object, float var_153_float, float var_154_float, bool var_155_bool, bool var_156_bool)
{
	bool var_165_bool; object var_167_object; cvector var_168_cvector; cvector var_169_cvector; float var_171_float; object var_172_object;
	var_0_object = false;
	var_1_int = var_152_object;
	bool var_166_bool;
	var_156_bool = var_166_bool;
	
	for(;;) {
		bool var_173_bool; object var_174_object;
		var_152_object = var_174_object;
		func_951(var_173_bool, var_174_object);
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
				if(var_166_bool == 0) goto Label_864;
				var_166_bool = false;
				@RotatePath(var_167_object, var_165_bool);
				if(!var_165_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_191_string;
						func_958(var_191_string);
						string var_192_string;
						func_960(var_192_string);
						@FollowPath(var_167_object, var_155_bool, var_165_bool, var_191_string, var_192_string);
						if(!var_165_bool) { //@nz
							if(var_0_object == 0) goto Label_883;
							var_167_object = null;
						}
					EMIT "GOTO 0x374";

					Label_883:
						} else {
					var_167_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_165_bool);
					if(!var_165_bool) { //@nz
						if(var_0_object != 0) {
							var_167_object = null;
							goto Label_911;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_911;
		}
			var_172_object = null;
			goto Label_909;

		Label_909:
			var_167_object = null;

		}
	Label_911:
		for(;;) {
			var_151_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_44(object var_0_object, bool var_3_bool, int var_5_int, object var_19_object, bool var_20_bool, float var_21_float, bool var_128_bool, bool var_220_bool)
{
	float var_33_float; cvector var_34_cvector; cvector var_35_cvector; bool var_37_bool; float var_40_float; cvector var_41_cvector; bool var_42_bool; float var_43_float;
	func_273(var_41_cvector, var_42_bool, var_43_float);
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
		func_1459(var_74_object);
		@SendPlayerEnemy(var_19_object, var_74_object);
	}
	if(var_20_bool != 0)
		var_37_bool = false;
	else
		var_37_bool = true;

	
Label_84:
	for(;;) {
		bool var_79_bool = false;
		bool var_80_bool;
		func_1246(var_80_bool, var_0_object);
		if(var_80_bool != 0) {
			if(!var_3_bool) //@nz
				var_79_bool = true;
		}
		if(var_79_bool != 0) {
			func_686(var_43_float);
			var_0_object->GetPFPosition(var_34_cvector); //@t
			@GetPFPosition(var_35_cvector);
			var_40_float = (var_34_cvector - var_35_cvector) | (var_34_cvector - var_35_cvector);
			if(var_40_float >= ((400.0 + var_33_float) * (400.0 + var_33_float))) {
				bool var_122_bool; float var_124_float;
				var_33_float = var_124_float;
				TaskCall(2);
				func_706(var_130_bool, var_122_bool, var_0_object, var_124_float, 10000.0, true, false);
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
					func_706(var_222_bool, var_214_bool, var_0_object, var_216_float, 10000.0, true, false);
					TaskReturn();
					if(!var_220_bool) { //@nz
						goto Label_256;
					}
					var_37_bool = false;
					goto Label_84;
				}
				if(!var_37_bool) { //@nz
					func_1396(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_686(var_43_float);
					@StopAsync();
					var_37_bool = true;
					bool var_236_bool;
					func_1246(var_236_bool, var_0_object);
					if(!var_236_bool) { //@nz
						goto Label_256;
					}
				}
				@rand(var_43_float);
				bool var_239_bool;
				var_241_bool = var_43_float < 0.25;
				if(var_241_bool != 1) {
					bool var_242_bool;
					func_643(true, var_242_bool);
					if(var_242_bool != 1)
						var_239_bool = false;
				}
				if(var_239_bool != 0) {
					@Face(var_0_object);
					func_693();
					@PlayAnimation("all", "attack_stay");
					bool var_279_bool; float var_280_float;
					func_511(var_43_float, var_279_bool, var_280_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_686(var_43_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_497_bool;
					func_643(var_43_float, var_497_bool);
					var_498_bool = !var_497_bool; //@nz
					if(var_498_bool == 0) goto Label_246;
					bool var_499_bool;
					func_1246(var_499_bool, var_0_object);
					if(!var_499_bool) { //@nz
						goto Label_256;
					}
					var_0_object->GetPFPosition(var_34_cvector); //@t
					@GetPFPosition(var_35_cvector);
					if(!(((var_34_cvector - var_35_cvector) | (var_34_cvector - var_35_cvector)) < (var_280_float * var_280_float))) goto Label_246;
					bool var_504_bool; float var_505_float;
					var_21_float = var_505_float;
					func_347(var_42_bool, var_43_float, var_504_bool, var_505_float);
					var_506_bool = !var_504_bool; //@nz
					if(var_506_bool == 0) goto Label_246;
					goto Label_256;
			}
				bool var_507_bool; float var_508_float;
				var_21_float = var_508_float;
				func_347(var_42_bool, var_43_float, var_507_bool, var_508_float);
				if(!var_507_bool) { //@nz
					goto Label_256;
				}
				var_37_bool = true;

			}
		Label_246:
			goto Label_255;
			}
			Label_255:
			}
		}
	Label_256:
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


void func_1407(object var_13_object)
{
	float var_16_float;
	var_13_object->GetEyesHeight(var_16_float);
	cvector var_17_cvector = [0.0, 0.0, 0.0];
	var_18_float = GetByIndex(var_17_cvector, 1);
	var_16_float = var_18_float;
	SetByIndex(var_17_cvector, 1) = var_18_float;
	@LookAsync(var_13_object, "head", var_17_cvector);
}


void func_686(object var_0_object)
{
	func_1503(var_0_object);
}


void func_1459(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_691(int var_452_int)
{
	var_452_int = 0;
}


void func_693(void)
{
	func_1418("attack_stay");
}


void func_308(object var_0_object, float var_377_float, int var_378_int)
{
	object var_382_object; float var_383_float; float var_384_float;
	@GetVictim((var_377_float * 0.9), var_382_object);
	@ReportAttack(var_0_object);
	if(var_382_object == var_0_object) {
		float var_388_float; object var_389_object; int var_390_int;
		var_382_object = var_389_object;
		var_378_int = var_390_int;
		func_38(var_390_int);
		var_388_float = var_383_float;
		float var_391_float; object var_392_object; float var_393_float; int var_394_int;
		var_382_object = var_392_object;
		int var_395_int; object var_396_object; int var_397_int;
		var_382_object = var_396_object;
		var_378_int = var_397_int;
		func_41(var_397_int);
		var_395_int = var_394_int;
		func_1132(var_391_float, var_392_object, var_393_float, var_394_int);
		var_391_float = var_384_float;
		int var_452_int;
		func_691(var_452_int);
		@ReportHit(var_0_object, var_452_int, var_384_float, var_393_float);
		object var_453_object; float var_454_float;
		var_382_object = var_453_object;
		var_384_float = var_454_float;
		func_698();
	}
}
EMIT "Stack[-3] = 0";


// @pe
void func_951(bool var_20_bool, object var_21_object)
{
	object var_23_object;
	var_21_object = var_23_object;
	bool var_22_bool;
	func_1246(var_22_bool, var_23_object);
	var_22_bool = var_20_bool;
}


void func_1205(bool var_37_bool, object var_38_object)
{
	bool var_40_bool;
	var_38_object->IsDead(var_40_bool);
	var_40_bool = var_37_bool;
}


void func_1465(cvector var_41_cvector, cvector var_42_cvector)
{
	float var_50_float = sqrt(var_42_cvector | var_42_cvector);
	if(var_50_float < 0.000001)
		var_41_cvector = [0.0, 0.0, 0.0];
	var_41_cvector = var_42_cvector / var_50_float;
}


// @pe
void func_698(void)
{
}


void func_1210(bool var_26_bool, object var_27_object)
{
	if(var_27_object == null) {
		var_26_bool = false;
		return 4;
	}
	bool var_33_bool = false;
	var_36_bool = IsFuncExist(var_27_object, "IsDead", 1);
	if(var_36_bool != 0) {
		bool var_37_bool; object var_38_object;
		var_27_object = var_38_object;
		func_1205(var_37_bool, var_38_object);
		if(var_37_bool != 0)
			var_33_bool = true;
	}
	if(var_33_bool != 0) {
		var_26_bool = false;
		return 4;
	}
	object var_30_object;
	@GetScene(var_30_object);
	if(var_30_object == null) {
		var_26_bool = false;
		return 4;
	}
	object var_31_object;
	var_27_object->GetScene(var_31_object);
	if(var_30_object != var_31_object) {
		var_26_bool = false;
		return 4;
	}
	var_26_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_700(bool var_477_bool)
{
	var_477_bool = true;
}


void func_702(int var_373_int)
{
	var_373_int = 1;
}


void func_958(string var_191_string)
{
	var_191_string = "walk";
}


void func_704(float var_368_float)
{
	var_368_float = 0.5;
}


void func_960(string var_192_string)
{
	var_192_string = "run";
}


void func_706(int var_2_int, bool var_122_bool, object var_123_object, float var_124_float, float var_125_float, bool var_126_bool, bool var_127_bool)
{
	object var_135_object;
	func_1503(var_135_object);
	@SetTimer(1, 5);
	bool var_133_bool;
	@CanSee(var_133_bool, var_135_object);
	if(var_133_bool != 0) {
		var_2_int = true;
		object var_139_object;
		var_123_object = var_139_object;
		func_1407(var_139_object);
	} else {
		var_2_int = false;
	}
	bool var_146_bool; object var_147_object;
	func_1115(var_146_bool, var_147_object);
	if(var_146_bool != 0) {
		object var_150_object;
		func_1459(var_150_object);
		@SendPlayerEnemy(var_147_object, var_150_object);
	}
	bool var_151_bool; object var_152_object; float var_153_float; float var_154_float; bool var_155_bool; bool var_156_bool;
	var_123_object = var_152_object;
	var_124_float = var_153_float;
	var_125_float = var_154_float;
	var_126_bool = var_155_bool;
	var_127_bool = var_156_bool;
	bool var_134_bool;
	func_811(var_133_bool, var_134_bool, var_151_bool, var_152_object, var_153_float, var_154_float, var_155_bool, var_156_bool);
	var_151_bool = var_134_bool;
	if(var_2_int != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_134_bool = var_122_bool;
	
}


// @pe
void func_1475(float var_429_float, float var_430_float, float var_431_float)
{
	if(var_430_float < var_431_float)
		var_430_float = var_429_float;
	else
		var_431_float = var_429_float;
	
}


// @pe
void func_962(object var_11_object)
{
	object var_12_object;
	var_11_object = var_12_object;
	func_971(var_12_object);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_582(bool var_292_bool)
{
	bool var_293_bool = false;
	bool var_294_bool;
	func_554(var_293_bool, var_294_bool);
	if(var_294_bool != 0) {
		bool var_311_bool;
		func_598(var_292_bool, var_293_bool, var_311_bool);
		if(var_311_bool != 0)
			var_293_bool = true;
	}
	if(var_293_bool != 0) {
		var_292_bool = true;
		return 0;
	}
	var_292_bool = false;
}


// @pe
void func_1094(string var_419_string, int var_420_int)
{
	if(var_420_int == 2) {
		var_419_string = "fire";
		return 0;
	EMIT "GOTO 0x452";
	}
	if(var_420_int == 1) {
		var_419_string = "bullet";
		return 0;
	}
	var_419_string = "phys";
}


// @pe
void func_1482(float var_439_float, float var_440_float, float var_441_float, float var_442_float)
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


void func_971(object var_12_object)
{
	cvector var_23_cvector; cvector var_24_cvector; cvector var_25_cvector; cvector var_26_cvector; string var_27_string; object var_28_object; bool var_29_bool; bool var_30_bool; float var_31_float; cvector var_32_cvector;
	if(var_12_object == null) {
		func_1062("fdie");
	} else {
		var_12_object->GetPosition(var_23_cvector);
		@GetPosition(var_24_cvector);
		@GetDirection(var_25_cvector);
		var_26_cvector = var_24_cvector - var_23_cvector;
		var_66_float = GetByIndex(var_26_cvector, 0);
		var_67_float = GetByIndex(var_25_cvector, 0);
		var_69_float = GetByIndex(var_26_cvector, 2);
		var_70_float = GetByIndex(var_25_cvector, 2);
		if(((var_66_float * var_67_float) + (var_69_float * var_70_float)) >= 0)
			var_27_string = "fdie";
		else
			var_27_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_12_object = var_28_object;
		var_77_bool = IsFuncExist(var_12_object, "GetScriptProperty", 2);
		if(var_77_bool != 0) {
			var_12_object->HasScriptProperty(var_29_bool, "Owner");
			if(var_29_bool != 0) {
				var_12_object->GetScriptProperty(var_28_object, "Owner");
				if(var_28_object == null)
					var_12_object = var_28_object;
			}
		}
		var_84_bool = IsFuncExist(var_28_object, "@GetEyesHeight", 1);
		if(var_84_bool != 0) {
			var_28_object->GetEyesHeight(var_31_float);
			var_32_cvector = [0.0, 0.0, 0.0];
			var_85_float = GetByIndex(var_32_cvector, 1);
			var_31_float = var_85_float;
			SetByIndex(var_32_cvector, 1) = var_85_float;
			@LookAsync(var_12_object, "head", var_32_cvector);
			var_30_bool = true;
		} else {
			var_30_bool = false;

		}
		string var_87_string;
		var_27_string = var_87_string;
		func_1418(var_87_string);
		@PlayAnimation("all", var_27_string);
		@WaitForAnimEnd();
		if(var_30_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_27_string);
		@RemoveEnvelope();
		var_28_object = null;
	}
	
}


void func_1108(cvector var_43_cvector, object var_44_object)
{
	cvector var_47_cvector;
	@GetPosition(var_47_cvector);
	cvector var_48_cvector;
	var_44_object->GetPosition(var_48_cvector);
	var_43_cvector = var_48_cvector - var_47_cvector;
}


void func_1493(float var_447_float)
{
	object var_449_object;
	@CreateFloatVector(var_449_object);
	var_449_object->add(var_447_float);
	@SendWorldWndMessage(15, var_449_object);
}
EMIT "Stack[-1] = 0";


void func_598(object var_0_object, float var_4_float, bool var_311_bool)
{
	object var_317_object; float var_319_float; cvector var_320_cvector; cvector var_321_cvector;
	@GetScene(var_317_object);
	bool var_318_bool = false;
	
	for(;;) {
		cvector var_322_cvector;
		func_1108(var_322_cvector, var_0_object);
		var_328_int = -var_322_cvector;
		@FindDirLength(var_319_float, var_328_int, var_4_float);
		if(var_319_float < var_4_float) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_320_cvector); //@t
				@GetPFPosition(var_321_cvector);
				@WaitForAnimEnd();
				func_686(var_321_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_318_bool = true;
				bool var_333_bool;
				func_554(var_321_cvector, var_333_bool);
				var_334_bool = !var_333_bool; //@nz
				if(var_334_bool == 0) goto Label_639;
		}
		for(;;) {
			var_318_bool = var_311_bool;

		}

	Label_639:
	}
}
EMIT "Stack[-5] = 0";


void func_347(object var_0_object, int var_1_int, bool var_340_bool, float var_341_float)
{
	string var_349_string;
	func_686(var_349_string);
	int var_346_int;
	@irand(var_346_int, var_1_int);
	@Face(var_0_object);
	@SetAttackState(true);
	func_1512();
	@PlayAnimation("all", ("attack_begin" + (var_346_int + 1)));
	@WaitForAnimEnd();
	int var_348_int;
	func_654(var_348_int, var_349_string);
	bool var_374_bool;
	func_1246(var_374_bool, var_0_object);
	if(!var_374_bool) { //@nz
		@StopAsync();
		var_340_bool = false;
		return 8;
	}
	float var_377_float; int var_378_int;
	var_341_float = var_377_float;
	var_346_int = var_378_int;
	func_308(var_349_string, var_377_float, var_378_int);
	bool var_347_bool;
	@HasAnimation(var_347_bool, "all", ("attack_middle" + var_346_int));
	if(var_347_bool != 0) {
		func_1512();
		@PlayAnimation("all", ("attack_middle" + var_346_int));
		@WaitForAnimEnd();
		func_686(var_349_string);
		bool var_462_bool;
		func_1246(var_462_bool, var_0_object);
		if(!var_462_bool) { //@nz
			@StopAsync();
			var_340_bool = false;
			return 8;
		}
		float var_465_float; int var_466_int;
		var_341_float = var_465_float;
		func_308(var_349_string, var_465_float, var_466_int);
		var_348_int = 1;

		for(;;) {
			var_349_string = (("attack_middle" + var_466_int) + "_") + var_348_int;
			@HasAnimation(var_347_bool, "all", var_349_string);
			if(!var_347_bool) { //@nz
			} else {
				func_1512();
				@PlayAnimation("all", var_349_string);
				@WaitForAnimEnd();
				func_686(var_349_string);
				bool var_488_bool;
				func_1246(var_488_bool, var_0_object);
				if(!var_488_bool) { //@nz
					@StopAsync();
					var_340_bool = false;
					return 8;
				}
				float var_491_float; int var_492_int;
				var_341_float = var_491_float;
				var_346_int = var_492_int;
				func_308(var_349_string, var_491_float, var_492_int);
				var_348_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_346_int));
		bool var_477_bool;
		func_700(var_477_bool);
		if(var_477_bool != 0) {
			bool var_478_bool;
			func_484(var_478_bool, 0.75);
			@StopAsync();
		}
		var_340_bool = true;
		return 8;

	}
}


void func_1115(bool var_146_bool, object var_147_object)
{
	bool var_149_bool;
	@IsPlayerActor(var_147_object, var_149_bool);
	var_149_bool = var_146_bool;
}


void func_1246(bool var_22_bool, object var_23_object)
{
	object var_27_object;
	var_23_object = var_27_object;
	bool var_26_bool;
	func_1210(var_26_bool, var_27_object);
	if(!var_26_bool) { //@nz
		var_22_bool = false;
		return 2;
	}
	bool var_44_bool; object var_45_object;
	func_1120(var_44_bool, var_45_object, "noaccess");
	if(!var_44_bool) { //@nz
		var_22_bool = true;
		return 2;
	}
	int var_25_int;
	var_45_object->GetProperty("noaccess", var_25_int);
	var_22_bool = var_25_int == 0;
}


void func_1503(object var_12_object)
{
	bool var_14_bool;
	@IsPlayerActor(var_12_object, var_14_bool);
	if(var_14_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1120(bool var_44_bool, object var_45_object, string var_46_string)
{
	var_51_bool = IsFuncExist(var_45_object, "HasProperty", 2);
	if(!var_51_bool) { //@nz
		var_44_bool = false;
		return 2;
	}
	bool var_48_bool;
	var_45_object->HasProperty(var_46_string, var_48_bool);
	var_48_bool = var_44_bool;
}


void func_484(bool var_478_bool, float var_479_float)
{
	float var_482_float; bool var_483_bool;
	@rand(var_482_float);
	if(var_482_float < var_479_float) {

		for(;;) {
			@IsAnimationPlaying(var_483_bool);
			if(!var_483_bool) { //@nz
			} else {
				bool var_486_bool;
				func_582(var_486_bool);
				if(var_486_bool != 0) {
					var_478_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_478_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_686(var_483_bool);
}


void func_1382(object var_15_object, cvector var_18_cvector, cvector var_19_cvector)
{
	object var_22_object;
	@GetScene(var_22_object);
	object var_23_object;
	@AddActorByType(var_23_object, "scripted", var_22_object, var_18_cvector, var_19_cvector, "blood_dir.xml");
	object var_26_object;
	var_15_object = var_26_object;
	func_1270(var_26_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1512(void)
{
	object var_353_object;
	@GetScene(var_353_object);
	object var_355_object;
	func_1459(var_355_object);
	@BroadcastMessage("battle", var_355_object, var_353_object);
}
EMIT "Stack[-1] = 0";


void func_1132(float var_391_float, object var_392_object, float var_393_float, int var_394_int)
{
	int var_404_int; int var_406_int;
	object var_411_object;
	var_392_object = var_411_object;
	bool var_410_bool;
	func_1120(var_410_bool, var_411_object, "health");
	if(!var_410_bool) //@nz
		var_391_float = 0.0;
	bool var_414_bool; object var_415_object;
	func_1120(var_414_bool, var_415_object, "armor");
	if(!var_414_bool) //@nz
		var_404_int = 0;
	else
		var_415_object->GetProperty("armor", var_404_int);
	string var_419_string; int var_420_int;
	var_394_int = var_420_int;
	func_1094(var_419_string, var_420_int);
	string var_405_string = "armor_" + var_419_string;
	bool var_425_bool; object var_426_object; string var_427_string;
	var_392_object = var_426_object;
	func_1120(var_425_bool, var_426_object, var_427_string);
	if(!var_425_bool) //@nz
		var_406_int = 0;
	else
		var_392_object->GetProperty(var_427_string, var_406_int);

	float var_429_float;
	func_1475(var_429_float, ((var_404_int + var_406_int) / 100.0), (float)1);
	float var_407_float;
	var_429_float = var_407_float;
	float var_408_float;
	var_392_object->GetProperty("health", var_408_float);
	float var_409_float = var_393_float * (1 - var_407_float);
	float var_439_float;
	func_1482(var_439_float, (var_408_float - var_409_float), (float)0, (float)1);
	var_392_object->SetProperty("health", var_439_float);
	bool var_445_bool; object var_446_object;
	var_392_object = var_446_object;
	func_1115(var_445_bool, var_446_object);
	if(var_445_bool != 0) {
		float var_447_float = -var_409_float;
		func_1493(var_447_float);
	}
	var_409_float = var_391_float;
	
}


void func_1396(object var_225_object)
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


void func_1270(object var_26_object)
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
void func_1531(object var_10_object)
{
	object var_11_object;
	var_10_object = var_11_object;
	TaskCall(3);
	func_962(var_11_object);
	TaskReturn();
}


void func_511(object var_0_object, bool var_279_bool, float var_280_float)
{
	bool var_286_bool; cvector var_287_cvector; cvector var_288_cvector; cvector var_289_cvector; float var_290_float;
	
	for(;;) {
		@IsAnimationPlaying(var_286_bool);
		if(!var_286_bool) //@nz
			break;
		bool var_292_bool;
		func_582(var_292_bool);
		if(var_292_bool != 0) {
			var_279_bool = true;
			return 10;
		}
		bool var_335_bool;
		func_1246(var_335_bool, var_0_object);
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
			func_347(var_289_cvector, var_290_float, var_340_bool, var_341_float);
			var_279_bool = true;
			return 10;
		}
		@sync();
	}
	func_686(var_290_float);
	var_279_bool = false;
}


