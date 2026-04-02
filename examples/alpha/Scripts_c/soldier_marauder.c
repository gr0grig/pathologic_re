task task_0
{
	void OnUse(object actor, bool var_1_bool, bool var_2_bool, object var_3_object, cvector var_4_cvector, bool var_5_bool)
	{
		bool var_7_bool;
		@IsOverrideActive(var_7_bool);
		if(!var_7_bool) //@nz
			@WorkWithCorpse(var_5_bool);
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, bool var_4_bool, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, bool var_2_bool, bool var_3_bool, object var_4_object, cvector var_5_cvector, bool var_6_bool)
	{
	}

	// @pe
	void OnDeath(object actor, bool var_1_bool, bool var_2_bool, object var_3_object, cvector var_4_cvector, bool var_5_bool)
	{
	}

}


maintask task_1
{
	void init(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool)
	{
	
		for(;;) {
			@SetTimer(110, 0.3);
			func_241(var_3_cvector, var_4_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTimer(bool var_0_bool, bool var_1_bool, int var_2_int, object var_3_object, cvector var_4_cvector, bool var_5_bool)
	{
		if(var_5_bool != 110) {
		}
		bool var_7_bool;
		@IsInWalkMode(var_7_bool);
		if(var_7_bool != 0) {
			bool var_11_bool;
			func_156(var_11_bool);
			if(var_11_bool != 0)
				@SwitchToRun();
			else
				@SwitchToWalk();
		}
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool)
	{
		func_181();
		object var_7_object;
		var_5_bool = var_7_object;
		func_766();
	}

	// @pe
	void OnAttacked(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool)
	{
		object var_7_object;
		var_5_bool = var_7_object;
		bool var_6_bool;
		func_556(var_6_bool, var_7_object);
		if(!var_6_bool) { //@nz
		}
		func_181();
		object var_42_object;
		var_5_bool = var_42_object;
		func_772(var_42_object);
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool)
	{
		object var_7_object;
		var_5_bool = var_7_object;
		bool var_6_bool;
		func_786(var_6_bool, var_7_object);
		if(var_6_bool != 0) {
			func_181();
			object var_46_object;
			var_5_bool = var_46_object;
			func_799(var_46_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool)
	{
		object var_7_object;
		var_5_bool = var_7_object;
		bool var_6_bool;
		func_807(var_6_bool, var_7_object);
		if(var_6_bool != 0) {
			func_181();
			object var_46_object;
			var_5_bool = var_46_object;
			func_820(var_46_object);
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool)
	{
		@RequestClearPath(var_5_bool);
	}

	void OnActorStuck(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool)
	{
		@Stop();
	}

}


task task_2
{
}


task task_3
{
	void OnTimer(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, int var_5_int)
	{
		cvector var_10_cvector; float var_11_float; cvector var_12_cvector; float var_13_float;
		if(var_5_int != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_10_cvector);
			@FindDirLength(var_11_float, var_10_cvector, 7000.0);
			cvector var_19_cvector;
			func_313(var_13_float, var_19_cvector, 1.7453294);
			var_19_cvector = var_12_cvector;
			var_13_float = var_12_cvector | var_12_cvector;
			bool var_49_bool = false;
			if(var_13_float >= 10000.0) {
				bool var_52_bool;
				var_56_bool = var_13_float >= ((var_11_float * var_11_float) * 2.25);
				if(var_56_bool != 1) {
					bool var_57_bool;
					func_475(true, var_57_bool);
					if(var_57_bool != 1)
						var_52_bool = false;
				}
				if(var_52_bool != 0)
					var_49_bool = true;
			}
			if(var_49_bool == 0) goto Label_458;
			@Stop();
			cvector var_77_cvector;
			func_491(var_77_cvector);
			var_1_bool = var_77_cvector + var_12_cvector;
		}
	Label_458:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object)
	{
		func_459(var_5_object);
		object var_7_object;
		var_5_object = var_7_object;
		func_766();
	}

}


// @pe
void OnHit(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object, int var_6_int, float var_7_float, float var_8_float)
{
	object var_9_object;
	var_5_object = var_9_object;
	int var_10_int;
	var_6_int = var_10_int;
	float var_11_float;
	var_7_float = var_11_float;
	func_580(var_10_int, var_11_float);
}


void OnPropertyChange(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object, string var_6_string)
{
	float var_8_float;
	if(var_6_string == "health") {
		@GetProperty("health", var_8_float);
		if(var_8_float <= 0)
			@SignalDeath(var_5_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object)
{
	object var_6_object;
	var_5_object = var_6_object;
	func_780(var_6_object);
}


// @pe
void func_0(object var_8_object)
{
	func_695();
	object var_49_object;
	var_8_object = var_49_object;
	func_9(var_49_object);
}


void func_515(bool var_25_bool, object var_26_object)
{
	bool var_28_bool;
	var_26_object->IsDead(var_28_bool);
	var_28_bool = var_25_bool;
}


// @pe
void func_772(object var_42_object)
{
	object var_43_object;
	var_42_object = var_43_object;
	TaskCall(3);
	func_343(var_44_object, var_45_cvector, var_46_bool, var_43_object);
	TaskReturn();
}


void func_647(cvector var_35_cvector, cvector var_36_cvector)
{
	float var_38_float = sqrt(var_36_cvector | var_36_cvector);
	if(var_38_float < 0.000001)
		var_35_cvector = [0.0, 0.0, 0.0];
	var_35_cvector = var_36_cvector / var_38_float;
}


void func_520(bool var_14_bool, object var_15_object)
{
	if(var_15_object == null) {
		var_14_bool = false;
		return 4;
	}
	bool var_21_bool = false;
	var_24_bool = IsFuncExist(var_15_object, "IsDead", 1);
	if(var_24_bool != 0) {
		bool var_25_bool; object var_26_object;
		var_15_object = var_26_object;
		func_515(var_25_bool, var_26_object);
		if(var_25_bool != 0)
			var_21_bool = true;
	}
	if(var_21_bool != 0) {
		var_14_bool = false;
		return 4;
	}
	object var_18_object;
	@GetScene(var_18_object);
	if(var_18_object == null) {
		var_14_bool = false;
		return 4;
	}
	object var_19_object;
	var_15_object->GetScene(var_19_object);
	if(var_18_object != var_19_object) {
		var_14_bool = false;
		return 4;
	}
	var_14_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_9(object var_49_object)
{
	object var_50_object;
	var_49_object = var_50_object;
	func_32(var_50_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_780(object var_6_object)
{
	object var_7_object;
	var_6_object = var_7_object;
	func_737(var_7_object);
}


// @pe
void func_657(float var_68_float, cvector var_69_cvector, cvector var_70_cvector)
{
	var_75_float = sqrt((var_69_cvector | var_69_cvector) * (var_70_cvector | var_70_cvector));
	var_68_float = (var_69_cvector | var_70_cvector) / var_75_float;
}


void func_786(bool var_6_bool, object var_7_object)
{
	bool var_10_bool; object var_11_object;
	func_556(var_10_bool, var_11_object);
	if(!var_10_bool) //@nz
		var_6_bool = false;
	bool var_9_bool;
	@IsPlayerActor(var_11_object, var_9_bool);
	var_9_bool = var_6_bool;
}


void func_665(int var_14_int, int var_15_int)
{
	int var_21_int;
	if(var_14_int > var_15_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	int var_20_int = 0;
	if(var_14_int != var_15_int) {
		@irand(var_21_int, (var_15_int - var_14_int));
	} else if(var_14_int == 0) {
		return 8;
	}
	var_20_int += var_14_int;
	if(var_20_int == 0)
		return 8;
	int var_22_int;
	@GetInvItemByName(var_22_int, "Money");
	bool var_23_bool;
	@AddItem(var_23_bool, var_22_int, 0, var_20_int);
	
}


void func_156(bool var_28_bool)
{
	float var_30_float;
	@GetBrightness(var_30_float);
	var_28_bool = var_30_float >= 0.5;
}


// @pe
void func_799(object var_46_object)
{
	object var_47_object;
	var_46_object = var_47_object;
	TaskCall(3);
	func_343(var_48_object, var_49_cvector, var_50_bool, var_47_object);
	TaskReturn();
}


void func_32(object var_50_object)
{
	cvector var_61_cvector; cvector var_62_cvector; cvector var_63_cvector; cvector var_64_cvector; string var_65_string; object var_66_object; bool var_67_bool; bool var_68_bool; float var_69_float; cvector var_70_cvector;
	if(var_50_object == null) {
		func_119("fdie");
	} else {
		var_50_object->GetPosition(var_61_cvector);
		@GetPosition(var_62_cvector);
		@GetDirection(var_63_cvector);
		var_64_cvector = var_62_cvector - var_61_cvector;
		var_75_float = GetByIndex(var_64_cvector, 0);
		var_76_float = GetByIndex(var_63_cvector, 0);
		var_78_float = GetByIndex(var_64_cvector, 2);
		var_79_float = GetByIndex(var_63_cvector, 2);
		if(((var_75_float * var_76_float) + (var_78_float * var_79_float)) >= 0)
			var_65_string = "fdie";
		else
			var_65_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_50_object = var_66_object;
		var_86_bool = IsFuncExist(var_50_object, "GetScriptProperty", 2);
		if(var_86_bool != 0) {
			var_50_object->HasScriptProperty(var_67_bool, "Owner");
			if(var_67_bool != 0) {
				var_50_object->GetScriptProperty(var_66_object, "Owner");
				if(var_66_object == null)
					var_50_object = var_66_object;
			}
		}
		var_93_bool = IsFuncExist(var_66_object, "@GetEyesHeight", 1);
		if(var_93_bool != 0) {
			var_66_object->GetEyesHeight(var_69_float);
			var_70_cvector = [0.0, 0.0, 0.0];
			var_94_float = GetByIndex(var_70_cvector, 1);
			var_69_float = var_94_float;
			SetByIndex(var_70_cvector, 1) = var_94_float;
			@LookAsync(var_50_object, "head", var_70_cvector);
			var_68_bool = true;
		} else {
			var_68_bool = false;

		}
		@PlayAnimation("all", var_65_string);
		@WaitForAnimEnd();
		if(var_68_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_65_string);
		@RemoveEnvelope();
		var_66_object = null;
	}
	
}


void func_807(bool var_6_bool, object var_7_object)
{
	bool var_10_bool; object var_11_object;
	func_556(var_10_bool, var_11_object);
	if(!var_10_bool) //@nz
		var_6_bool = false;
	bool var_9_bool;
	@IsPlayerActor(var_11_object, var_9_bool);
	var_9_bool = var_6_bool;
}


void func_556(bool var_10_bool, object var_11_object)
{
	object var_15_object;
	var_11_object = var_15_object;
	bool var_14_bool;
	func_520(var_14_bool, var_15_object);
	if(!var_14_bool) { //@nz
		var_10_bool = false;
		return 2;
	}
	bool var_32_bool; object var_33_object;
	func_503(var_32_bool, var_33_object, "noaccess");
	if(!var_32_bool) { //@nz
		var_10_bool = true;
		return 2;
	}
	int var_13_int;
	var_33_object->GetProperty("noaccess", var_13_int);
	var_10_bool = var_13_int == 0;
}


void func_305(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


// @pe
void func_820(object var_46_object)
{
	object var_47_object;
	var_46_object = var_47_object;
	TaskCall(3);
	func_343(var_48_object, var_49_cvector, var_50_bool, var_47_object);
	TaskReturn();
}


void func_181(void)
{
	func_305(var_4_cvector, var_5_bool);
	@KillTimer(110);
}


void func_695(void)
{
	bool var_12_bool;
	@ClearSubContainer(0);
	func_665(500, 1000);
	int var_11_int;
	@irand(var_11_int, 4);
	if(var_11_int != 0) {
		int var_37_int;
		func_732(var_37_int, "rifle_ammo");
		@AddItem(var_12_bool, var_37_int, 0, var_11_int);
	}
	@irand(var_11_int, 3);
	if(var_11_int == 0) {
		int var_45_int;
		func_732(var_45_int, "rusk");
		@AddItem(var_12_bool, var_45_int, 0, 1);
	}
}


void func_312(void)
{
}


void func_313(bool var_0_bool, cvector var_19_cvector, float var_20_float)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_0_bool->GetPosition(var_28_cvector); //@t
	cvector var_29_cvector;
	@GetDirection(var_29_cvector);
	cvector var_33_cvector;
	cvector var_35_cvector;
	func_647(var_35_cvector, (var_27_cvector - var_28_cvector));
	func_647(var_33_cvector, (var_35_cvector + (var_29_cvector * 0.75)));
	cvector var_30_cvector;
	var_33_cvector = var_30_cvector;
	cvector var_31_cvector;
	float var_32_float;
	@FindLongestDir(var_31_cvector, var_32_float, var_30_cvector, var_20_float, 32, 7000.0);
	if((var_32_float - 100) < 0)
		var_32_float = 0;
	var_19_cvector = var_31_cvector * var_32_float;
}


void func_580(object var_9_object, int var_10_int)
{
	object var_22_object; object var_23_object; cvector var_24_cvector; float var_25_float; string var_31_string;
	bool var_32_bool = false;
	if(var_10_int != 4) {
		if(var_10_int != 5)
			var_32_bool = true;
	}
	if(var_32_bool != 0) {
		@GetScene(var_22_object);
		@GetPosition(var_24_cvector);
		@GetEyesHeight(var_25_float);
		var_37_float = GetByIndex(var_24_cvector, 1);
		SetByIndex(var_24_cvector, 1) = (var_37_float + (var_25_float / 2));
		@AddActorByType(var_23_object, "scripted", var_22_object, var_24_cvector, [0.0, 0.0, 1.0], "blood.xml");
		var_23_object = null;
		var_22_object = null;
	}
	if(var_9_object == null)
		return 20;
	int var_26_int;
	@GetSecondaryAnimationType(var_26_int);
	if(var_26_int < 0)
		return 20;
	cvector var_27_cvector;
	var_9_object->GetPosition(var_27_cvector);
	cvector var_28_cvector;
	@GetPosition(var_28_cvector);
	cvector var_29_cvector;
	@GetDirection(var_29_cvector);
	cvector var_30_cvector = var_28_cvector - var_27_cvector;
	var_46_float = GetByIndex(var_30_cvector, 0);
	var_47_float = GetByIndex(var_29_cvector, 0);
	var_49_float = GetByIndex(var_30_cvector, 2);
	var_50_float = GetByIndex(var_29_cvector, 2);
	if(((var_46_float * var_47_float) + (var_49_float * var_50_float)) >= 0)
		var_31_string = "fhit";
	else
		var_31_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_31_string + "1"), (var_31_string + "2"), -10);
	
}


void func_459(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


void func_343(bool var_0_bool, bool var_1_bool, object var_2_object, object var_47_object)
{
	cvector var_59_cvector; float var_60_float;
	cvector var_61_cvector;
	func_313(var_60_float, var_61_cvector, 1.7453294);
	cvector var_56_cvector;
	var_61_cvector = var_56_cvector;
	float var_57_float = var_56_cvector | var_56_cvector;
	if(var_57_float < 10000.0) {
		var_94_float = sqrt(var_57_float);
		@Trace("Can't retreat, distance: " + var_94_float);
		@Sleep(0.5);
		return 10;
	}
	var_97_float = GetByIndex(var_56_cvector, 0);
	var_98_float = GetByIndex(var_56_cvector, 2);
	@Rotate(var_97_float, var_98_float);
	cvector var_99_cvector;
	func_491(var_99_cvector);
	@SetTimer(120, 0.5);
	
Label_376:
	bool var_58_bool;
	@MovePoint((var_99_cvector + var_56_cvector), 1, var_58_bool);
	if(var_58_bool != 0) {
		if(var_47_object == null) {
			goto Label_406;
		EMIT "GOTO 0x194";

		Label_406:
			for(;;) {
				return 10;
		}
			cvector var_107_cvector;
			func_313(var_60_float, var_107_cvector, 2.6179938);
			var_107_cvector = var_59_cvector;
			if((var_59_cvector | var_59_cvector) >= 10000.0) {
				cvector var_111_cvector;
				func_491(var_111_cvector);
				var_1_bool = var_111_cvector + var_59_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_376; //@nz

	}
}


void func_475(bool var_0_bool, bool var_57_bool)
{
	cvector var_60_cvector;
	@GetDirection(var_60_cvector);
	cvector var_62_cvector;
	func_496(var_62_cvector, var_0_bool);
	cvector var_61_cvector;
	var_62_cvector = var_61_cvector;
	float var_68_float; cvector var_69_cvector; cvector var_70_cvector;
	var_60_cvector = var_69_cvector;
	var_61_cvector = var_70_cvector;
	func_657(var_68_float, var_69_cvector, var_70_cvector);
	var_57_bool = var_68_float >= -0.34202012;
}


void func_732(int var_37_int, string var_38_string)
{
	int var_40_int;
	@GetInvItemByName(var_40_int, var_38_string);
	var_40_int = var_37_int;
}


// @pe
void func_737(object var_7_object)
{
	object var_8_object;
	var_7_object = var_8_object;
	TaskCall(0);
	func_0(var_8_object);
	TaskReturn();
}


void func_503(bool var_32_bool, object var_33_object, string var_34_string)
{
	var_39_bool = IsFuncExist(var_33_object, "HasProperty", 2);
	if(!var_39_bool) { //@nz
		var_32_bool = false;
		return 2;
	}
	bool var_36_bool;
	var_33_object->HasProperty(var_34_string, var_36_bool);
	var_36_bool = var_32_bool;
}


void func_491(cvector var_77_cvector)
{
	cvector var_79_cvector;
	@GetPosition(var_79_cvector);
	var_79_cvector = var_77_cvector;
}


void func_496(cvector var_62_cvector, object var_63_object)
{
	cvector var_66_cvector;
	@GetPosition(var_66_cvector);
	cvector var_67_cvector;
	var_63_object->GetPosition(var_67_cvector);
	var_62_cvector = var_67_cvector - var_66_cvector;
}


void func_241(bool var_0_bool, bool var_1_bool)
{
	float var_14_float; cvector var_15_cvector; cvector var_16_cvector; float var_17_float; bool var_18_bool; object var_19_object; bool var_20_bool;
	@rand(var_14_float, 0.5);
	@Sleep(var_14_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_253:
				@GetPosition(var_16_cvector);
				@GetCameraFarDistance(var_17_float);
				@GetRandomPFPointInCircle(var_15_cvector, var_16_cvector, (var_17_float * 2.5), var_18_bool);
				if(var_18_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_253;
			}
				var_1_bool = false;
		}
		}
		goto Label_270;

	Label_270:
		@FindShiftedPathTo(var_19_object, var_15_cvector);
		if(var_19_object != null) {
			@RotatePath(var_19_object, var_20_bool);
			if(var_20_bool != 0) {
				bool var_28_bool;
				func_156(var_28_bool);
				@FollowPath(var_19_object, var_28_bool, var_20_bool);
				var_19_object = null;
				if(var_20_bool != 0) {
					TaskCall(2);
					func_312();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_19_object = null;
	}
	
}


// @pe
void func_119(string var_72_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_72_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_72_string);
	@RemoveEnvelope();
}


