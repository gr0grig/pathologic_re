task task_0
{
	// @pe
	void OnSee(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		bool var_16_bool = false;
		bool var_17_bool; object var_18_object;
		var_15_bool = var_18_object;
		func_1436(var_17_bool, var_18_object);
		if(var_17_bool != 0) {
			bool var_21_bool; object var_22_object;
			func_1567(var_21_bool, var_22_object);
			if(var_21_bool != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			func_124(var_14_object, var_22_object);
			object var_58_object;
			var_15_bool = var_58_object;
			TaskCall(2);
			func_323(var_58_object);
			TaskReturn();
		}
	}

	// @pe
	void OnHear(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		bool var_16_bool = false;
		bool var_17_bool; object var_18_object;
		var_15_bool = var_18_object;
		func_1436(var_17_bool, var_18_object);
		if(var_17_bool != 0) {
			bool var_21_bool; object var_22_object;
			func_1567(var_21_bool, var_22_object);
			if(var_21_bool != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			func_124(var_14_object, var_22_object);
			object var_58_object;
			var_15_bool = var_58_object;
			TaskCall(2);
			func_323(var_58_object);
			TaskReturn();
		}
	}

	// @pe
	void OnTimer(int iID, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		if(var_15_bool == 10) {
			bool var_18_bool;
			func_86(var_13_bool, var_14_object, var_15_bool, var_18_bool);
			if(var_18_bool != 0) {
				if(!var_2_bool) { //@nz
					func_1733(var_4_object);
					var_2_bool = true;
				}
			} else if(var_2_bool != 0) {
				@UnlookAsync("head");
				var_2_bool = false;
			}
		}
	
	}

}


maintask task_1
{
	void init(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		cvector var_24_cvector; cvector var_25_cvector; bool var_26_bool; object var_27_object; bool var_28_bool;
		@Hold();
		object var_22_object;
		@GetMainOutdoorScene(var_22_object);
		int var_23_int = 0;
	
		for(;;) {
			if(true != 0) {
				var_23_int += 1;
				var_22_object->GetLocator(("pt_d1q01_morlok_run_path" + var_23_int), var_26_bool, var_24_cvector, var_25_cvector);
				if(!var_26_bool) { //@nz
				} else {
							@Trace("pt_d1q01_morlok_run_path" + var_23_int);
							object var_108_object; cvector var_109_cvector;
							var_24_cvector = var_109_cvector;
							func_298(var_108_object, var_109_cvector);
							var_108_object = var_27_object;
							var_112_bool = !var_27_object; //@nz
							if(var_112_bool == 0) goto Label_261;
							@Trace("Can't find path to point " + var_23_int);
				}
			}
		Label_279:
			for(;;) {
				if(!var_0_int) { //@nz
					var_35_float = GetByIndex(var_25_cvector, 0);
					var_36_float = GetByIndex(var_25_cvector, 2);
					@RotateAsync(var_35_float, var_36_float);
					TaskCall(0);
					func_0();
					TaskReturn();
				} else {
					for(;;) {
						if(true == 0) goto Label_296;
						@Hold();
					}

				}
			Label_296:

			}
		EMIT "GOTO 0x115";

		Label_261:
			@RotatePath(var_27_object, var_28_bool);
			if(var_28_bool != 0) {
				@FollowPath(var_27_object, true, var_28_bool);
				var_27_object = null;
				if(!var_28_bool) { //@nz
					goto Label_279;
				}
			} else {
			@Trace("Error rotating path" + var_23_int);
			}
			var_27_object = null;
		}
	
	}
	EMIT "Stack[-7] = 0";

	void OnLoad(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		@StopGroup0();
	}

	// @pe
	void OnAttacked(int var_0_int, int iDamageType, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		func_304(var_15_bool);
		object var_16_object;
		var_15_bool = var_16_object;
		TaskCall(2);
		func_323(var_16_object);
		TaskReturn();
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void OnTimer(int iID, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, int var_15_int)
	{
		if(var_15_int == 1) {
			func_1829(var_1_int);
		} else {
			int var_23_int;
			func_1210(var_14_bool, var_23_int, var_23_int);
		}
	
	}

	// @pe
	void OnSee(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
		bool var_16_bool = false;
		if(var_1_int == var_15_object) {
			if(!var_2_bool) //@nz
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			var_2_bool = true;
			object var_19_object;
			var_15_object = var_19_object;
			func_1733(var_19_object);
		}
	}

	// @pe
	void OnStopSee(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
		bool var_16_bool = false;
		if(var_1_int == var_15_object) {
			if(var_2_bool != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			var_2_bool = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
		@RequestClearPath(var_15_object);
	}

	// @pe
	void OnDeath(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
		func_1066(var_15_object);
		object var_20_object;
		var_15_object = var_20_object;
		func_1986();
	}

}


task task_4
{
	void OnUse(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
		bool var_17_bool;
		@IsOverrideActive(var_17_bool);
		if(!var_17_bool) { //@nz
			object var_19_object;
			var_15_object = var_19_object;
			func_1879(var_19_object);
		}
	}

	// @pe
	void OnHit(int var_0_int, int iHitType, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, int var_16_int, float var_17_float, float var_18_float)
	{
	}

	// @pe
	void OnPropertyChange(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, string var_16_string)
	{
	}

	// @pe
	void OnDeath(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
	}

}


void OnUnload(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
{
	object var_15_object;
	func_1785(var_15_object);
	@RemoveActor(var_15_object);
	@Hold();
}


// @pe
void OnHit(int var_0_int, int iHitType, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, int var_16_int, float var_17_float, float var_18_float)
{
	object var_19_object;
	var_15_object = var_19_object;
	int var_20_int;
	var_16_int = var_20_int;
	float var_21_float;
	var_17_float = var_21_float;
	func_1635(var_19_object, var_20_int, var_21_float);
}


// @pe
void OnHit2(int var_0_int, int iHitType, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, int var_16_int, float var_17_float, float var_18_float, cvector var_19_cvector, cvector var_20_cvector)
{
	object var_21_object;
	var_15_object = var_21_object;
	int var_22_int;
	var_16_int = var_22_int;
	float var_23_float;
	var_17_float = var_23_float;
	cvector var_24_cvector;
	var_19_cvector = var_24_cvector;
	cvector var_25_cvector;
	var_20_cvector = var_25_cvector;
	func_1703(var_23_float, var_24_cvector, var_25_cvector);
}


void OnPropertyChange(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, string var_16_string)
{
	float var_18_float;
	if(var_16_string == "health") {
		@GetProperty("health", var_18_float);
		if(var_18_float <= 0)
			@SignalDeath(var_15_object);
	}
}


// @pe
void OnDeath(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
{
	object var_16_object;
	var_15_object = var_16_object;
	func_1941(var_16_object);
}


void func_0(void)
{
	
	while(true != 0) {
		func_59(var_37_int, var_38_int, var_39_bool, var_40_bool, var_41_object, (float)300, (float)100);
	}
	
}


void func_644(int var_0_int, int var_1_int, bool var_344_bool, float var_345_float)
{
	string var_353_string;
	func_983(var_353_string);
	int var_350_int;
	@irand(var_350_int, var_1_int);
	@Face(var_0_int);
	@SetAttackState(true);
	func_1838();
	@PlayAnimation("all", ("attack_begin" + (var_350_int + 1)));
	@WaitForAnimEnd();
	int var_352_int;
	func_951(var_352_int, var_353_string);
	bool var_378_bool;
	func_1567(var_378_bool, var_0_int);
	if(!var_378_bool) { //@nz
		@StopAsync();
		var_344_bool = false;
		return 8;
	}
	float var_381_float; int var_382_int;
	var_345_float = var_381_float;
	var_350_int = var_382_int;
	func_605(var_353_string, var_381_float, var_382_int);
	bool var_351_bool;
	@HasAnimation(var_351_bool, "all", ("attack_middle" + var_350_int));
	if(var_351_bool != 0) {
		func_1838();
		@PlayAnimation("all", ("attack_middle" + var_350_int));
		@WaitForAnimEnd();
		func_983(var_353_string);
		bool var_466_bool;
		func_1567(var_466_bool, var_0_int);
		if(!var_466_bool) { //@nz
			@StopAsync();
			var_344_bool = false;
			return 8;
		}
		float var_469_float; int var_470_int;
		var_345_float = var_469_float;
		func_605(var_353_string, var_469_float, var_470_int);
		var_352_int = 1;

		for(;;) {
			var_353_string = (("attack_middle" + var_470_int) + "_") + var_352_int;
			@HasAnimation(var_351_bool, "all", var_353_string);
			if(!var_351_bool) { //@nz
			} else {
				func_1838();
				@PlayAnimation("all", var_353_string);
				@WaitForAnimEnd();
				func_983(var_353_string);
				bool var_492_bool;
				func_1567(var_492_bool, var_0_int);
				if(!var_492_bool) { //@nz
					@StopAsync();
					var_344_bool = false;
					return 8;
				}
				float var_495_float; int var_496_int;
				var_345_float = var_495_float;
				var_350_int = var_496_int;
				func_605(var_353_string, var_495_float, var_496_int);
				var_352_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_350_int));
		bool var_481_bool;
		func_997(var_481_bool);
		if(var_481_bool != 0) {
			bool var_482_bool;
			func_781(var_482_bool, 0.75);
			@StopAsync();
		}
		var_344_bool = true;
		return 8;

	}
}


void func_1284(object var_40_object)
{
	cvector var_51_cvector; cvector var_52_cvector; cvector var_53_cvector; cvector var_54_cvector; string var_55_string; object var_56_object; bool var_57_bool; bool var_58_bool; float var_59_float; cvector var_60_cvector;
	if(var_40_object == null) {
		func_1375("fdie");
	} else {
		var_40_object->GetPosition(var_51_cvector);
		@GetPosition(var_52_cvector);
		@GetDirection(var_53_cvector);
		var_54_cvector = var_52_cvector - var_51_cvector;
		var_94_float = GetByIndex(var_54_cvector, 0);
		var_95_float = GetByIndex(var_53_cvector, 0);
		var_97_float = GetByIndex(var_54_cvector, 2);
		var_98_float = GetByIndex(var_53_cvector, 2);
		if(((var_94_float * var_95_float) + (var_97_float * var_98_float)) >= 0)
			var_55_string = "fdie";
		else
			var_55_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_40_object = var_56_object;
		var_105_bool = IsFuncExist(var_40_object, "GetScriptProperty", 2);
		if(var_105_bool != 0) {
			var_40_object->HasScriptProperty(var_57_bool, "Owner");
			if(var_57_bool != 0) {
				var_40_object->GetScriptProperty(var_56_object, "Owner");
				if(var_56_object == null)
					var_40_object = var_56_object;
			}
		}
		var_112_bool = IsFuncExist(var_56_object, "@GetEyesHeight", 1);
		if(var_112_bool != 0) {
			var_56_object->GetEyesHeight(var_59_float);
			var_60_cvector = [0.0, 0.0, 0.0];
			var_113_float = GetByIndex(var_60_cvector, 1);
			var_59_float = var_113_float;
			SetByIndex(var_60_cvector, 1) = var_113_float;
			@LookAsync(var_40_object, "head", var_60_cvector);
			var_58_bool = true;
		} else {
			var_58_bool = false;

		}
		string var_115_string;
		var_55_string = var_115_string;
		func_1744(var_115_string);
		@PlayAnimation("all", var_55_string);
		@WaitForAnimEnd();
		if(var_58_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_55_string);
		@RemoveEnvelope();
		var_56_object = null;
	}
	
}


// @pe
void func_1801(float var_433_float, float var_434_float, float var_435_float)
{
	if(var_434_float < var_435_float)
		var_434_float = var_433_float;
	else
		var_435_float = var_433_float;
	
}


void func_138(void)
{
	int var_61_int; int var_62_int; bool var_63_bool; float var_64_float; bool var_65_bool;
	@WaitForAnimEnd();
	bool var_66_bool;
	func_1728(var_66_bool);
	if(!var_66_bool) //@nz
		return 14;
	int var_68_int;
	func_1856(var_68_int);
	int var_59_int;
	var_68_int = var_59_int;
	int var_60_int = 0;
	
	for(;;) {
		bool var_81_bool = false;
		if(var_60_int < 5) {
			bool var_84_bool;
			func_1728(var_84_bool);
			if(var_84_bool != 0)
				var_81_bool = true;
		}
		if(var_81_bool != 0) {
			@irand(var_61_int, 3);
			if(var_61_int == 0) {
				if(var_59_int == 0) goto Label_185;
				@irand(var_62_int, var_59_int);
				string var_90_string; int var_91_int;
				var_62_int = var_91_int;
				func_1849(var_90_string, var_91_int);
				@PlayAnimation("all", var_90_string);
				@WaitForAnimEnd(var_63_bool);
				if(!var_63_bool) { //@nz
				} else {
			} else {
			if(var_61_int == 1) {
				@rand(var_64_float, 4);
				@Sleep((var_64_float + 1), var_65_bool);
				if(!var_65_bool) { //@nz
					goto Label_214;
				}
			} else if(var_60_int != 0) {
				goto Label_214;
			}
			}
					bool var_93_bool;
					func_217(var_93_bool);
					var_94_bool = !var_93_bool; //@nz
					if(var_94_bool == 0) goto Label_209;
			}
		}
	Label_214:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_209:
		@ResetAAS();
		var_60_int += 1;
	}
	
}


void func_781(bool var_482_bool, float var_483_float)
{
	float var_486_float; bool var_487_bool;
	@rand(var_486_float);
	if(var_486_float < var_483_float) {

		for(;;) {
			@IsAnimationPlaying(var_487_bool);
			if(!var_487_bool) { //@nz
			} else {
				bool var_490_bool;
				func_879(var_490_bool);
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
	func_983(var_487_bool);
}


void func_1421(cvector var_49_cvector, object var_50_object)
{
	cvector var_53_cvector;
	@GetPosition(var_53_cvector);
	cvector var_54_cvector;
	var_50_object->GetPosition(var_54_cvector);
	var_49_cvector = var_54_cvector - var_53_cvector;
}


// @pe
void func_1808(float var_443_float, float var_444_float, float var_445_float, float var_446_float)
{
	if(var_444_float < var_445_float) {
		var_445_float = var_443_float;
		return 0;
	}
	if(var_444_float > var_446_float) {
		var_446_float = var_443_float;
		return 0;
	}
	var_444_float = var_443_float;
}


void func_1428(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_1941(object var_16_object)
{
	object var_18_object;
	@GetScene(var_18_object);
	func_1909();
	object var_39_object;
	var_16_object = var_39_object;
	TaskCall(4);
	func_1259(var_39_object);
	TaskReturn();
}
EMIT "Stack[-1] = 0";


void func_1819(float var_451_float)
{
	object var_453_object;
	@CreateFloatVector(var_453_object);
	var_453_object->add(var_451_float);
	@SendWorldWndMessage(15, var_453_object);
}
EMIT "Stack[-1] = 0";


void func_1436(bool var_150_bool, object var_151_object)
{
	bool var_153_bool;
	@IsPlayerActor(var_151_object, var_153_bool);
	var_153_bool = var_150_bool;
}


void func_1567(bool var_28_bool, object var_29_object)
{
	object var_33_object;
	var_29_object = var_33_object;
	bool var_32_bool;
	func_1531(var_32_bool, var_33_object);
	if(!var_32_bool) { //@nz
		var_28_bool = false;
		return 2;
	}
	bool var_50_bool; object var_51_object;
	func_1441(var_50_bool, var_51_object, "noaccess");
	if(!var_50_bool) { //@nz
		var_28_bool = true;
		return 2;
	}
	int var_31_int;
	var_51_object->GetProperty("noaccess", var_31_int);
	var_28_bool = var_31_int == 0;
}


void func_1441(bool var_50_bool, object var_51_object, string var_52_string)
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


void func_1829(object var_18_object)
{
	bool var_20_bool;
	@IsPlayerActor(var_18_object, var_20_bool);
	if(var_20_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1703(object var_21_object, cvector var_24_cvector, cvector var_25_cvector)
{
	object var_28_object;
	@GetScene(var_28_object);
	object var_29_object;
	@AddActorByType(var_29_object, "scripted", var_28_object, var_24_cvector, var_25_cvector, "blood_dir.xml");
	object var_32_object;
	var_21_object = var_32_object;
	func_1591(var_32_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_808(int var_0_int, bool var_283_bool, float var_284_float)
{
	bool var_290_bool; cvector var_291_cvector; cvector var_292_cvector; cvector var_293_cvector; float var_294_float;
	
	for(;;) {
		@IsAnimationPlaying(var_290_bool);
		if(!var_290_bool) //@nz
			break;
		bool var_296_bool;
		func_879(var_296_bool);
		if(var_296_bool != 0) {
			var_283_bool = true;
			return 10;
		}
		bool var_339_bool;
		func_1567(var_339_bool, var_0_int);
		if(!var_339_bool) { //@nz
			var_283_bool = false;
			return 10;
		}
		var_0_int->GetPFPosition(var_291_cvector); //@t
		@GetPFPosition(var_292_cvector);
		var_293_cvector = var_291_cvector - var_292_cvector;
		var_294_float = var_293_cvector | var_293_cvector;
		if(var_294_float < (var_284_float * var_284_float)) {
			bool var_344_bool; float var_345_float;
			var_284_float = var_345_float;
			func_644(var_293_cvector, var_294_float, var_344_bool, var_345_float);
			var_283_bool = true;
			return 10;
		}
		@sync();
	}
	func_983(var_294_float);
	var_283_bool = false;
}


// @pe
void func_1407(string var_423_string, int var_424_int)
{
	if(var_424_int == 2) {
		var_423_string = "fire";
		return 0;
	EMIT "GOTO 0x58b";
	}
	if(var_424_int == 1) {
		var_423_string = "bullet";
		return 0;
	}
	var_423_string = "phys";
}


void func_298(object var_108_object, cvector var_109_cvector)
{
	object var_111_object;
	@FindPathTo(var_111_object, var_109_cvector);
	var_111_object = var_108_object;
}
EMIT "Stack[-1] = 0";


void func_1066(bool var_2_bool)
{
	@KillTimer(1);
	if(var_2_bool != 0) {
		var_2_bool = false;
		@UnlookAsync("head");
	}
	func_1232(var_15_object);
}


void func_940(int var_0_int, bool var_246_bool)
{
	bool var_248_bool;
	var_251_bool = IsFuncExist(var_0_int, "IsAttacking", 1);
	if(var_251_bool != 0) {
		var_0_int->IsAttacking(var_248_bool); //@t
		var_248_bool = var_246_bool;
	}
	var_246_bool = false;
}


void func_1453(float var_395_float, object var_396_object, float var_397_float, int var_398_int)
{
	int var_408_int; int var_410_int;
	object var_415_object;
	var_396_object = var_415_object;
	bool var_414_bool;
	func_1441(var_414_bool, var_415_object, "health");
	if(!var_414_bool) //@nz
		var_395_float = 0.0;
	bool var_418_bool; object var_419_object;
	func_1441(var_418_bool, var_419_object, "armor");
	if(!var_418_bool) //@nz
		var_408_int = 0;
	else
		var_419_object->GetProperty("armor", var_408_int);
	string var_423_string; int var_424_int;
	var_398_int = var_424_int;
	func_1407(var_423_string, var_424_int);
	string var_409_string = "armor_" + var_423_string;
	bool var_429_bool; object var_430_object; string var_431_string;
	var_396_object = var_430_object;
	func_1441(var_429_bool, var_430_object, var_431_string);
	if(!var_429_bool) //@nz
		var_410_int = 0;
	else
		var_396_object->GetProperty(var_431_string, var_410_int);

	float var_433_float;
	func_1801(var_433_float, ((var_408_int + var_410_int) / 100.0), (float)1);
	float var_411_float;
	var_433_float = var_411_float;
	float var_412_float;
	var_396_object->GetProperty("health", var_412_float);
	float var_413_float = var_397_float * (1 - var_411_float);
	float var_443_float;
	func_1808(var_443_float, (var_412_float - var_413_float), (float)0, (float)1);
	var_396_object->SetProperty("health", var_443_float);
	bool var_449_bool; object var_450_object;
	var_396_object = var_450_object;
	func_1436(var_449_bool, var_450_object);
	if(var_449_bool != 0) {
		float var_451_float = -var_413_float;
		func_1819(var_451_float);
	}
	var_413_float = var_395_float;
	
}


void func_1838(void)
{
	object var_357_object;
	@GetScene(var_357_object);
	object var_359_object;
	func_1785(var_359_object);
	@BroadcastMessage("battle", var_359_object, var_357_object);
}
EMIT "Stack[-1] = 0";


void func_304(int var_0_int)
{
	var_0_int = true;
	@Stop();
	@StopGroup0();
	@StopAsync();
}


void func_1791(cvector var_47_cvector, cvector var_48_cvector)
{
	float var_56_float = sqrt(var_48_cvector | var_48_cvector);
	if(var_56_float < 0.000001)
		var_47_cvector = [0.0, 0.0, 0.0];
	var_47_cvector = var_48_cvector / var_56_float;
}


void func_1717(object var_229_object)
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


void func_951(bool var_2_bool, bool var_5_bool)
{
	int var_366_int;
	if(!var_2_bool) //@nz
		return 4;
	if(var_5_bool != 0) {
		if((var_5_bool + -1) > 0)
			return 4;
	}
	float var_365_float;
	@rand(var_365_float);
	float var_372_float;
	func_1001(var_372_float);
	if(var_365_float < var_372_float) {
		@irand(var_366_int, var_2_bool);
		@Speak("attack" + (var_366_int + 1));
		int var_377_int;
		func_999(var_377_int);
		var_5_bool = var_377_int;
	}
}


void func_1591(object var_32_object)
{
	string var_46_string;
	if(var_32_object == null)
		return 14;
	bool var_40_bool;
	@IsDead(var_40_bool);
	if(var_40_bool != 0)
		return 14;
	int var_41_int;
	@GetSecondaryAnimationType(var_41_int);
	if(var_41_int < 0)
		return 14;
	cvector var_42_cvector;
	var_32_object->GetPosition(var_42_cvector);
	cvector var_43_cvector;
	@GetPosition(var_43_cvector);
	cvector var_44_cvector;
	@GetDirection(var_44_cvector);
	cvector var_45_cvector = var_43_cvector - var_42_cvector;
	var_51_float = GetByIndex(var_45_cvector, 0);
	var_52_float = GetByIndex(var_44_cvector, 0);
	var_54_float = GetByIndex(var_45_cvector, 2);
	var_55_float = GetByIndex(var_44_cvector, 2);
	if(((var_51_float * var_52_float) + (var_54_float * var_55_float)) >= 0)
		var_46_string = "fhit";
	else
		var_46_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_46_string + "1"), (var_46_string + "2"), -10);
	
}


void func_1849(string var_74_string, int var_75_int)
{
	string var_77_string = "idle";
	if(var_75_int != 0)
		var_77_string += var_75_int;
	var_77_string = var_74_string;
}


void func_570(int var_1_int, bool var_2_bool, object var_4_object)
{
	bool var_51_bool; bool var_52_bool; cvector var_53_cvector;
	var_1_int = 0;
	
	for(;;) {
		@HasAnimation(var_51_bool, "all", ("attack_begin" + (var_1_int + 1)));
		if(!var_51_bool) { //@nz
		} else {
			var_1_int += 1;
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
		var_4_object = -var_67_float;

	}
}


// @pe
void func_59(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, float var_43_float, float var_44_float)
{
	bool var_45_bool;
	func_1728(var_45_bool);
	if(!var_45_bool) //@nz
		return 0;
	@FindActor(var_4_object, "player");
	var_2_bool = false;
	var_0_int = var_43_float;
	var_1_int = var_44_float;
	@SetTimer(10, 1.0);
	func_138();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_1210(int var_0_int, int var_1_int, int var_23_int)
{
	if(var_23_int != 0)
		return 0;
	bool var_26_bool;
	func_1248(var_26_bool, var_1_int);
	if(!var_26_bool) //@nz
		var_0_int = true;
	@KillTimer(0);
	@Stop();
}


void func_1728(bool var_45_bool)
{
	bool var_47_bool;
	@IsLoaded(var_47_bool);
	var_47_bool = var_45_bool;
}


void func_1856(int var_68_int)
{
	int var_71_int; bool var_72_bool;
	var_71_int = 0;
	
	for(;;) {
		string var_74_string; int var_75_int;
		var_71_int = var_75_int;
		func_1849(var_74_string, var_75_int);
		@HasAnimation(var_72_bool, "all", var_74_string);
		if(!var_72_bool) //@nz
			break;
		var_71_int += 1;
	}
	var_71_int = var_68_int;
}


// @pe
void func_323(object var_16_object)
{
	
	for(;;) {
		object var_23_object;
		func_341(var_19_int, var_20_bool, var_21_float, var_22_int, var_23_object, var_23_object, true, 180.0);
		@Sleep(1);
	}
}
EMIT "Return(); Pop(0)";


void func_1733(object var_19_object)
{
	float var_22_float;
	var_19_object->GetEyesHeight(var_22_float);
	cvector var_23_cvector = [0.0, 0.0, 0.0];
	var_24_float = GetByIndex(var_23_cvector, 1);
	var_22_float = var_24_float;
	SetByIndex(var_23_cvector, 1) = var_24_float;
	@LookAsync(var_19_object, "head", var_23_cvector);
}


// @pe
void func_335(float var_392_float)
{
	var_392_float = 0.2;
}


void func_1744(string var_63_string)
{
	bool var_72_bool; int var_73_int; bool var_74_bool; int var_75_int; bool var_76_bool; float var_77_float; cvector var_78_cvector; cvector var_79_cvector;
	@IsExisting3DSound(var_72_bool, var_63_string);
	if(!var_72_bool) { //@nz
		var_73_int = 0;

		for(;;) {
			@IsExisting3DSound(var_74_bool, (var_63_string + (var_73_int + 1)));
			if(!var_74_bool) { //@nz
				break;
			Label_1764:
				@irand(var_75_int, var_73_int);
				var_63_string += (var_75_int + 1);
	}
			@Is3DSoundLoaded(var_76_bool, var_63_string);
			if(var_76_bool != 0) {
				@GetEyesHeight(var_77_float);
				@GetDirection(var_78_cvector);
				var_79_cvector = var_78_cvector * 50;
				var_90_float = GetByIndex(var_79_cvector, 1);
				SetByIndex(var_79_cvector, 1) = (var_90_float + var_77_float);
				@PlayGlobalSound(var_63_string, var_79_cvector);
			}
		}
		var_73_int += 1;
	}
	var_85_bool = !var_73_int; //@nz
	if(var_85_bool == 0) goto Label_1764;
}


void func_1232(int var_0_int)
{
	var_0_int = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_338(int var_399_int)
{
	var_399_int = 0;
}


void func_851(int var_0_int, bool var_298_bool)
{
	cvector var_304_cvector; cvector var_305_cvector;
	bool var_309_bool;
	func_1567(var_309_bool, var_0_int);
	if(!var_309_bool) { //@nz
		var_298_bool = false;
		return 10;
	}
	bool var_312_bool;
	float var_308_float;
	func_940(var_308_float, var_312_bool);
	if(var_312_bool != 0) {
		var_0_int->GetPFPosition(var_304_cvector); //@t
		@GetPFPosition(var_305_cvector);
		var_0_int->GetAttackDistance(var_308_float); //@t
		var_298_bool = ((var_304_cvector - var_305_cvector) | (var_304_cvector - var_305_cvector)) <= ((var_308_float + 50) * (var_308_float + 50));
		return 10;
	}
	var_298_bool = false;
}


void func_1108(int var_0_int, int var_1_int, bool var_155_bool, object var_156_object, float var_157_float, float var_158_float, bool var_159_bool, bool var_160_bool)
{
	bool var_169_bool; object var_171_object; cvector var_172_cvector; cvector var_173_cvector; float var_175_float; object var_176_object;
	var_0_int = false;
	var_1_int = var_156_object;
	bool var_170_bool;
	var_160_bool = var_170_bool;
	
	for(;;) {
		bool var_177_bool; object var_178_object;
		var_156_object = var_178_object;
		func_1248(var_177_bool, var_178_object);
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
				if(var_170_bool == 0) goto Label_1161;
				var_170_bool = false;
				@RotatePath(var_171_object, var_169_bool);
				if(!var_169_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_195_string;
						func_1255(var_195_string);
						string var_196_string;
						func_1257(var_196_string);
						@FollowPath(var_171_object, var_159_bool, var_169_bool, var_195_string, var_196_string);
						if(!var_169_bool) { //@nz
							if(var_0_int == 0) goto Label_1180;
							var_171_object = null;
						}
					EMIT "GOTO 0x49d";

					Label_1180:
						} else {
					var_171_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_169_bool);
					if(!var_169_bool) { //@nz
						if(var_0_int != 0) {
							var_171_object = null;
							goto Label_1208;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1208;
		}
			var_176_object = null;
			goto Label_1206;

		Label_1206:
			var_171_object = null;

		}
	Label_1208:
		for(;;) {
			var_155_bool = !var_0_int;
			return 16;

			}
	}
	
}


void func_341(int var_0_int, bool var_3_bool, bool var_5_bool, object var_23_object, bool var_24_bool, float var_25_float, bool var_132_bool, bool var_224_bool)
{
	float var_37_float; cvector var_38_cvector; cvector var_39_cvector; bool var_41_bool; float var_44_float; cvector var_45_cvector; bool var_46_bool; float var_47_float;
	func_570(var_45_cvector, var_46_bool, var_47_float);
	var_5_bool = 0;
	var_72_bool = IsFuncExist(var_23_object, "@GetAttackDistance", 1);
	if(var_72_bool != 0) {
		var_23_object->GetAttackDistance(var_37_float);
		var_37_float += 50;
	} else {
						var_25_float = var_37_float;
	}
	if(var_37_float >= 150)
		var_37_float = 150;
	var_3_bool = false;
	var_0_int = var_23_object;
	bool var_40_bool;
	@IsPlayerActor(var_0_int, var_40_bool);
	if(var_40_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_78_object;
		func_1785(var_78_object);
		@SendPlayerEnemy(var_23_object, var_78_object);
	}
	if(var_24_bool != 0)
		var_41_bool = false;
	else
		var_41_bool = true;

	
Label_381:
	for(;;) {
		bool var_83_bool = false;
		bool var_84_bool;
		func_1567(var_84_bool, var_0_int);
		if(var_84_bool != 0) {
			if(!var_3_bool) //@nz
				var_83_bool = true;
		}
		if(var_83_bool != 0) {
			func_983(var_47_float);
			var_0_int->GetPFPosition(var_38_cvector); //@t
			@GetPFPosition(var_39_cvector);
			var_44_float = (var_38_cvector - var_39_cvector) | (var_38_cvector - var_39_cvector);
			if(var_44_float >= ((400.0 + var_37_float) * (400.0 + var_37_float))) {
				bool var_126_bool; float var_128_float;
				var_37_float = var_128_float;
				TaskCall(3);
				func_1003(var_134_bool, var_126_bool, var_0_int, var_128_float, 10000.0, true, false);
				TaskReturn();
				if(!var_132_bool) { //@nz
				} else {
					var_41_bool = false;
			} else {
			if(var_44_float >= (var_25_float * var_25_float)) {
				var_0_int->GetPFPosition(var_45_cvector); //@t
				@CanReachByPF(var_46_bool, var_45_cvector);
				if(!var_46_bool) { //@nz
					bool var_218_bool; float var_220_float;
					var_37_float = var_220_float;
					TaskCall(3);
					func_1003(var_226_bool, var_218_bool, var_0_int, var_220_float, 10000.0, true, false);
					TaskReturn();
					if(!var_224_bool) { //@nz
						goto Label_553;
					}
					var_41_bool = false;
					goto Label_381;
				}
				if(!var_41_bool) { //@nz
					func_1717(var_0_int);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_983(var_47_float);
					@StopAsync();
					var_41_bool = true;
					bool var_240_bool;
					func_1567(var_240_bool, var_0_int);
					if(!var_240_bool) { //@nz
						goto Label_553;
					}
				}
				@rand(var_47_float);
				bool var_243_bool;
				var_245_bool = var_47_float < 0.25;
				if(var_245_bool != 1) {
					bool var_246_bool;
					func_940(true, var_246_bool);
					if(var_246_bool != 1)
						var_243_bool = false;
				}
				if(var_243_bool != 0) {
					@Face(var_0_int);
					func_990();
					@PlayAnimation("all", "attack_stay");
					bool var_283_bool; float var_284_float;
					func_808(var_47_float, var_283_bool, var_284_float);
					@StopAsync();
				} else {
					@Face(var_0_int);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_983(var_47_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_501_bool;
					func_940(var_47_float, var_501_bool);
					var_502_bool = !var_501_bool; //@nz
					if(var_502_bool == 0) goto Label_543;
					bool var_503_bool;
					func_1567(var_503_bool, var_0_int);
					if(!var_503_bool) { //@nz
						goto Label_553;
					}
					var_0_int->GetPFPosition(var_38_cvector); //@t
					@GetPFPosition(var_39_cvector);
					if(!(((var_38_cvector - var_39_cvector) | (var_38_cvector - var_39_cvector)) < (var_284_float * var_284_float))) goto Label_543;
					bool var_508_bool; float var_509_float;
					var_25_float = var_509_float;
					func_644(var_46_bool, var_47_float, var_508_bool, var_509_float);
					var_510_bool = !var_508_bool; //@nz
					if(var_510_bool == 0) goto Label_543;
					goto Label_553;
			}
				bool var_511_bool; float var_512_float;
				var_25_float = var_512_float;
				func_644(var_46_bool, var_47_float, var_511_bool, var_512_float);
				if(!var_511_bool) { //@nz
					goto Label_553;
				}
				var_41_bool = true;

			}
		Label_543:
			goto Label_552;
			}
			Label_552:
			}
		}
	Label_553:
		@WaitForAnimEnd();
		if(var_3_bool != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_40_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_86(int var_0_int, int var_1_int, object var_4_object, bool var_18_bool)
{
	if(var_4_object == null)
		var_18_bool = false;
	float var_22_float;
	func_1428(var_22_float, var_4_object);
	float var_20_float = sqrt(var_22_float);
	if(var_2_bool != 0)
		var_20_float -= var_1_int;
	var_18_bool = var_20_float < var_0_int;
}


void func_983(int var_0_int)
{
	func_1829(var_0_int);
}


// @pe
void func_1879(object var_19_object)
{
	int var_20_int;
	func_1873(var_20_int);
	if(var_20_int == 1)
		@WorkWithCorpse(var_19_object);
	else
		@Barter(var_19_object);
	
}


void func_217(bool var_93_bool)
{
	var_93_bool = true;
}


void func_1873(int var_19_int)
{
	int var_21_int;
	@GetVariable("branch", var_21_int);
	var_21_int = var_19_int;
}


void func_219(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_988(int var_456_int)
{
	var_456_int = 0;
}


void func_605(int var_0_int, float var_381_float, int var_382_int)
{
	object var_386_object; float var_387_float; float var_388_float;
	@GetVictim((var_381_float * 0.9), var_386_object);
	@ReportAttack(var_0_int);
	if(var_386_object == var_0_int) {
		float var_392_float; object var_393_object; int var_394_int;
		var_386_object = var_393_object;
		var_382_int = var_394_int;
		func_335(var_394_int);
		var_392_float = var_387_float;
		float var_395_float; object var_396_object; float var_397_float; int var_398_int;
		var_386_object = var_396_object;
		int var_399_int; object var_400_object; int var_401_int;
		var_386_object = var_400_object;
		var_382_int = var_401_int;
		func_338(var_401_int);
		var_399_int = var_398_int;
		func_1453(var_395_float, var_396_object, var_397_float, var_398_int);
		var_395_float = var_388_float;
		int var_456_int;
		func_988(var_456_int);
		@ReportHit(var_0_int, var_456_int, var_388_float, var_397_float);
		object var_457_object; float var_458_float;
		var_386_object = var_457_object;
		var_388_float = var_458_float;
		func_995();
	}
}
EMIT "Stack[-3] = 0";


void func_990(void)
{
	func_1744("attack_stay");
}


// @pe
void func_1375(string var_62_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_63_string;
	var_62_string = var_63_string;
	func_1744(var_63_string);
	@PlayAnimation("all", var_62_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_62_string);
	@RemoveEnvelope();
}


// @pe
void func_1248(bool var_26_bool, object var_27_object)
{
	object var_29_object;
	var_27_object = var_29_object;
	bool var_28_bool;
	func_1567(var_28_bool, var_29_object);
	var_28_bool = var_26_bool;
}


// @pe
void func_995(void)
{
}


void func_1892(string var_25_string)
{
	object var_29_object;
	@CreateInvItem(var_29_object);
	var_29_object->SetItemName(var_25_string);
	var_29_object->SetProperty("Organ", 1);
	int var_30_int;
	var_29_object->GetItemID(var_30_int);
	bool var_31_bool;
	@AddItem(var_31_bool, var_29_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_997(bool var_481_bool)
{
	var_481_bool = true;
}


void func_1635(object var_19_object, int var_20_int, float var_21_float)
{
	cvector var_31_cvector; object var_32_object; int var_33_int; bool var_34_bool; cvector var_35_cvector; cvector var_36_cvector;
	bool var_40_bool = false;
	bool var_41_bool = false;
	if(var_19_object != 0) {
		if(var_20_int != 4)
			var_41_bool = true;
	}
	if(var_41_bool != 0) {
		if(var_20_int != 5)
			var_40_bool = true;
	}
	if(var_40_bool != 0) {
		cvector var_47_cvector; cvector var_48_cvector;
		cvector var_49_cvector; object var_50_object;
		var_19_object = var_50_object;
		func_1421(var_49_cvector, var_50_object);
		var_49_cvector = var_48_cvector;
		func_1791(var_47_cvector, var_48_cvector);
		var_47_cvector = var_31_cvector;
		@CreateVectorVector(var_32_object);
		var_33_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_33_int), var_34_bool, var_35_cvector, var_36_cvector);
			if(!var_34_bool) { //@nz
				break;
			Label_1697:
				var_32_object = null;
	}
			object var_109_object;
			var_19_object = var_109_object;
			func_1591(var_109_object);
		}
		if((var_36_cvector | var_31_cvector) >= 0.70710677)
			var_32_object->add(var_35_cvector);
		var_33_int += 1;
	}
	int var_37_int;
	var_32_object->size(var_37_int);
	if(var_37_int == 0) goto Label_1697;
	int var_38_int;
	@irand(var_38_int, var_37_int);
	cvector var_39_cvector;
	var_32_object->get(var_39_cvector, var_38_int);
	object var_64_object; int var_65_int; float var_66_float; cvector var_67_cvector; cvector var_68_cvector;
	var_19_object = var_64_object;
	var_20_int = var_65_int;
	var_21_float = var_66_float;
	var_39_cvector = var_67_cvector;
	var_68_cvector = -var_31_cvector;
	func_1703(var_66_float, var_67_cvector, var_68_cvector);
}


void func_999(int var_377_int)
{
	var_377_int = 1;
}


void func_1255(string var_195_string)
{
	var_195_string = "walk";
}


void func_1001(float var_372_float)
{
	var_372_float = 0.5;
}


void func_1257(string var_196_string)
{
	var_196_string = "run";
}


void func_1003(bool var_2_bool, bool var_126_bool, object var_127_object, float var_128_float, float var_129_float, bool var_130_bool, bool var_131_bool)
{
	object var_139_object;
	func_1829(var_139_object);
	@SetTimer(1, 5);
	bool var_137_bool;
	@CanSee(var_137_bool, var_139_object);
	if(var_137_bool != 0) {
		var_2_bool = true;
		object var_143_object;
		var_127_object = var_143_object;
		func_1733(var_143_object);
	} else {
		var_2_bool = false;
	}
	bool var_150_bool; object var_151_object;
	func_1436(var_150_bool, var_151_object);
	if(var_150_bool != 0) {
		object var_154_object;
		func_1785(var_154_object);
		@SendPlayerEnemy(var_151_object, var_154_object);
	}
	bool var_155_bool; object var_156_object; float var_157_float; float var_158_float; bool var_159_bool; bool var_160_bool;
	var_127_object = var_156_object;
	var_128_float = var_157_float;
	var_129_float = var_158_float;
	var_130_bool = var_159_bool;
	var_131_bool = var_160_bool;
	bool var_138_bool;
	func_1108(var_137_bool, var_138_bool, var_155_bool, var_156_object, var_157_float, var_158_float, var_159_bool, var_160_bool);
	var_155_bool = var_138_bool;
	if(var_2_bool != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_138_bool = var_126_bool;
	
}


// @pe
void func_1259(object var_39_object)
{
	object var_40_object;
	var_39_object = var_40_object;
	func_1284(var_40_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_879(bool var_296_bool)
{
	bool var_297_bool = false;
	bool var_298_bool;
	func_851(var_297_bool, var_298_bool);
	if(var_298_bool != 0) {
		bool var_315_bool;
		func_895(var_296_bool, var_297_bool, var_315_bool);
		if(var_315_bool != 0)
			var_297_bool = true;
	}
	if(var_297_bool != 0) {
		var_296_bool = true;
		return 0;
	}
	var_296_bool = false;
}


void func_1909(void)
{
	int var_19_int;
	func_1873(var_19_int);
	if(var_19_int != 1) {
	}
	func_1892("liver");
	func_1892("kidney");
	func_1892("heart");
	func_1892("blood");
}


void func_1526(bool var_43_bool, object var_44_object)
{
	bool var_46_bool;
	var_44_object->IsDead(var_46_bool);
	var_46_bool = var_43_bool;
}


void func_1785(object var_15_object)
{
	object var_17_object;
	@self(var_17_object);
	var_17_object = var_15_object;
}
EMIT "Stack[-1] = 0";


void func_1531(bool var_32_bool, object var_33_object)
{
	if(var_33_object == null) {
		var_32_bool = false;
		return 4;
	}
	bool var_39_bool = false;
	var_42_bool = IsFuncExist(var_33_object, "IsDead", 1);
	if(var_42_bool != 0) {
		bool var_43_bool; object var_44_object;
		var_33_object = var_44_object;
		func_1526(var_43_bool, var_44_object);
		if(var_43_bool != 0)
			var_39_bool = true;
	}
	if(var_39_bool != 0) {
		var_32_bool = false;
		return 4;
	}
	object var_36_object;
	@GetScene(var_36_object);
	if(var_36_object == null) {
		var_32_bool = false;
		return 4;
	}
	object var_37_object;
	var_33_object->GetScene(var_37_object);
	if(var_36_object != var_37_object) {
		var_32_bool = false;
		return 4;
	}
	var_32_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_124(bool var_2_bool, bool var_3_bool)
{
	func_219();
	@KillTimer(10);
	if(var_2_bool != 0) {
		@UnlookAsync("head");
		var_2_bool = false;
	}
	var_3_bool = true;
}


void func_895(int var_0_int, object var_4_object, bool var_315_bool)
{
	object var_321_object; float var_323_float; cvector var_324_cvector; cvector var_325_cvector;
	@GetScene(var_321_object);
	bool var_322_bool = false;
	
	for(;;) {
		cvector var_326_cvector;
		func_1421(var_326_cvector, var_0_int);
		var_332_int = -var_326_cvector;
		@FindDirLength(var_323_float, var_332_int, var_4_object);
		if(var_323_float < var_4_object) {
		} else {
				@Face(var_0_int);
				@PlayAnimation("all", "bjump");
				var_0_int->GetPFPosition(var_324_cvector); //@t
				@GetPFPosition(var_325_cvector);
				@WaitForAnimEnd();
				func_983(var_325_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_322_bool = true;
				bool var_337_bool;
				func_851(var_325_cvector, var_337_bool);
				var_338_bool = !var_337_bool; //@nz
				if(var_338_bool == 0) goto Label_936;
		}
		for(;;) {
			var_322_bool = var_315_bool;

		}

	Label_936:
	}
}
EMIT "Stack[-5] = 0";


