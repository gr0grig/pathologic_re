// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, int var_12_int, bool var_13_bool, object var_14_object)
	{
		if(1 != 0) {
			func_1340();
			if(var_13_bool == 5801) {
				func_121(var_14_object, "Neutral");
				var_0_object->SetMessage(5264); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5265, -1, 5802); //@t
				var_0_object->AddReply(6042, -1, 6665); //@t
				return 0;
			}
			var_3_string = true;
			bool var_41_bool;
			func_1408(var_41_bool);
			if(var_41_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x8a";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		var_0_object = false;
		@SensePlayerOnly(true);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object)
	{
		object var_15_object;
		var_13_object = var_15_object;
		TaskCall(0);
		int var_14_int;
		func_0(var_16_object, var_14_int, var_15_object);
		TaskReturn();
		TaskCall(3);
		func_228();
		TaskReturn();
	}

	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object)
	{
		bool var_15_bool;
		@IsPlayerActor(var_13_object, var_15_bool);
		if(var_15_bool != 0) {
			TaskCall(3);
			func_228();
			TaskReturn();
		}
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object)
	{
		bool var_15_bool;
		if(var_13_object == "cleanup") {
			var_0_object = true;
			@IsLoaded(var_15_bool);
			if(!var_15_bool) //@nz
				@SetDeathStateAndRemove();
		}
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		if(var_0_object != 0)
			@SetDeathStateAndRemove();
	}

}


task task_3
{
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		func_1410();
		@Hold();
	}

}


task task_4
{
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		func_1410();
		@Hold();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, int var_13_int)
	{
		if(var_13_int != 0)
			return 0;
		bool var_16_bool;
		func_897(var_16_bool, var_1_object);
		if(!var_16_bool) //@nz
			var_0_object = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object)
	{
		@RequestClearPath(var_13_object);
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object)
	{
		func_881(var_13_object);
		object var_15_object;
		var_13_object = var_15_object;
		func_1452();
	}

}


task task_5
{
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		@SetDeathStateAndRemove();
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, int var_14_int, float var_15_float, float var_16_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, string var_14_string)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object)
	{
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, int var_14_int, float var_15_float, float var_16_float)
{
	object var_17_object;
	var_13_object = var_17_object;
	int var_18_int;
	var_14_int = var_18_int;
	float var_19_float;
	var_15_float = var_19_float;
	func_1184(var_18_int, var_19_float);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, string var_14_string)
{
	float var_16_float;
	if(var_14_string == "health") {
		@GetProperty("health", var_16_float);
		if(var_16_float <= 0)
			@SignalDeath(var_13_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object)
{
	object var_14_object;
	var_13_object = var_14_object;
	func_1418(var_14_object);
}


void func_1408(bool var_85_bool)
{
	var_85_bool = false;
}


void func_0(object var_0_object, int var_14_int, object var_15_object)
{
	var_0_object = var_15_object;
	bool var_25_bool; object var_26_object;
	var_15_object = var_26_object;
	func_1262(var_25_bool, var_26_object);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_66_int;
	func_1404(var_66_int);
	var_21_object->SetNPCName(var_66_int);
	string var_67_string;
	func_1406(var_67_string);
	var_21_object->SetPhoto(var_67_string);
	int var_68_int;
	func_1387(var_68_int);
	var_21_object->SetPlayerName(var_68_int);
	bool var_22_bool;
	@IsOverrideActive(var_22_bool);
	if(var_22_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	@DoDialog(var_21_object);
	object var_77_object; object var_78_object;
	var_15_object = var_77_object;
	var_21_object = var_78_object;
	TaskCall(1);
	func_63(var_79_object, var_80_object, var_81_string, var_82_bool, var_77_object, var_78_object);
	TaskReturn();
	bool var_24_bool;
	var_21_object->IsDialogEnd(var_24_bool);
	
	for(;;) {
		var_114_bool = !var_24_bool; //@nz
		if(var_114_bool == 0) goto Label_52;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_52:
	object var_115_object;
	var_15_object = var_115_object;
	func_1318();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_1410(void)
{
	@SetDeathStateAndRemove();
	bool var_13_bool;
	func_1375(var_13_bool, "quest_d1_03", "butcher_fail");
}


// @pe
void func_897(bool var_16_bool, object var_17_object)
{
	object var_19_object;
	var_17_object = var_19_object;
	bool var_18_bool;
	func_1160(var_18_bool, var_19_object);
	var_18_bool = var_16_bool;
}


void func_260(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_31_object, bool var_32_bool, float var_33_float, bool var_120_bool)
{
	bool var_44_bool; bool var_45_bool; float var_46_float; cvector var_47_cvector; cvector var_48_cvector; bool var_49_bool; bool var_50_bool; float var_52_float; float var_53_float;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_44_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_44_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_45_bool, ("attack" + (var_2_object + 1)));
			if(!var_45_bool) { //@nz
			} else {
									var_2_object += 1;
			}
			var_4_bool = 0;
			var_67_bool = IsFuncExist(var_31_object, "@GetAttackDistance", 1);
			if(var_67_bool != 0) {
				var_31_object->GetAttackDistance(var_46_float);
				var_46_float += 50;
			} else {
								var_33_float = var_46_float;

			}
			if(var_46_float >= 150)
				var_46_float = 150;
			var_3_string = false;
			var_0_object = var_31_object;
			@IsPlayerActor(var_0_object, var_49_bool);
			if(var_32_bool != 0)
				var_50_bool = false;
			else
				var_50_bool = true;

			for(;;) {
				bool var_72_bool = false;
				bool var_73_bool;
				func_1160(var_73_bool, var_0_object);
				if(var_73_bool != 0) {
					if(!var_3_string) //@nz
						var_72_bool = true;
				}
				if(var_72_bool != 0) {
					var_0_object->GetPFPosition(var_47_cvector); //@t
					@GetPFPosition(var_48_cvector);
					var_52_float = (var_47_cvector - var_48_cvector) | (var_47_cvector - var_48_cvector);
					if(var_52_float >= ((400.0 + var_46_float) * (400.0 + var_46_float))) {
						bool var_114_bool; float var_116_float;
						var_46_float = var_116_float;
						TaskCall(4);
						func_757(var_120_bool, var_121_object, var_114_bool, var_0_object, var_116_float, 3000.0, true, false);
						TaskReturn();
						if(!var_120_bool) { //@nz
						} else {
							var_50_bool = false;
					} else {
					if(var_52_float >= (var_33_float * var_33_float)) {
						if(!var_50_bool) { //@nz
							func_1251(var_0_object);
							@PlayAnimation("all", "attack_on");
							@WaitForAnimEnd();
							@StopAsync();
							var_50_bool = true;
						}
						@rand(var_53_float);
						bool var_187_bool;
						var_189_bool = var_53_float < 0.6;
						if(var_189_bool != 1) {
							bool var_190_bool;
							func_700(true, var_190_bool);
							if(var_190_bool != 1)
								var_187_bool = false;
						}
						if(var_187_bool != 0) {
							@Face(var_0_object);
							@PlayAnimation("all", "attack_stay");
							bool var_198_bool; float var_199_float;
							func_608(var_53_float, var_198_bool, var_199_float);
							@StopAsync();
						} else {
							@Face(var_0_object);
							@PlayAnimation("all", "fjump");
							@WaitForAnimEnd();
							@SetSpeed([0.0, 0.0, 0.0]);
							@Stop();
							@StopAsync();
							bool var_368_bool;
							func_700(var_53_float, var_368_bool);
							var_369_bool = !var_368_bool; //@nz
							if(var_369_bool == 0) goto Label_438;
							bool var_370_bool;
							func_1160(var_370_bool, var_0_object);
							if(!var_370_bool) { //@nz
								goto Label_448;
							}
							var_0_object->GetPFPosition(var_47_cvector); //@t
							@GetPFPosition(var_48_cvector);
							var_52_float = (var_47_cvector - var_48_cvector) | (var_47_cvector - var_48_cvector);
							if(!(var_52_float < (var_199_float * var_199_float))) goto Label_438;
							bool var_375_bool; float var_376_float;
							var_33_float = var_376_float;
							func_504(var_52_float, var_53_float, var_375_bool, var_376_float);
							var_377_bool = !var_375_bool; //@nz
							if(var_377_bool == 0) goto Label_438;
							goto Label_448;
					}
						bool var_378_bool; float var_379_float;
						var_33_float = var_379_float;
						func_504(var_52_float, var_53_float, var_378_bool, var_379_float);
						if(!var_378_bool) { //@nz
							goto Label_448;
						}
						var_50_bool = true;

					}
				Label_438:
					goto Label_447;
					}
					Label_447:
					}
				}
			Label_448:
				@WaitForAnimEnd();
				if(var_3_string != 0)
					return 20;
				@PlayAnimation("all", "attack_off");
				@WaitForAnimEnd();
				if(var_49_bool != 0)
					@Sleep(2.0);
				return 20;

			}

		}

	}
}


void func_1160(bool var_18_bool, object var_19_object)
{
	object var_23_object;
	var_19_object = var_23_object;
	bool var_22_bool;
	func_1124(var_22_bool, var_23_object);
	if(!var_22_bool) { //@nz
		var_18_bool = false;
		return 2;
	}
	bool var_40_bool; object var_41_object;
	func_1043(var_40_bool, var_41_object, "noaccess");
	if(!var_40_bool) { //@nz
		var_18_bool = true;
		return 2;
	}
	int var_21_int;
	var_41_object->GetProperty("noaccess", var_21_int);
	var_18_bool = var_21_int == 0;
}


void func_648(object var_0_object, bool var_211_bool)
{
	cvector var_217_cvector; cvector var_218_cvector;
	bool var_222_bool;
	func_1160(var_222_bool, var_0_object);
	if(!var_222_bool) { //@nz
		var_211_bool = false;
		return 10;
	}
	bool var_225_bool;
	float var_221_float;
	func_700(var_221_float, var_225_bool);
	if(var_225_bool != 0) {
		var_0_object->GetPFPosition(var_217_cvector); //@t
		@GetPFPosition(var_218_cvector);
		var_0_object->GetAttackDistance(var_221_float); //@t
		var_221_float += 50;
		if(((var_217_cvector - var_218_cvector) | (var_217_cvector - var_218_cvector)) <= (var_221_float * var_221_float)) {
			func_681(var_221_float);
			var_211_bool = true;
			return 10;
		}
	}
	var_211_bool = false;
}


void func_904(string var_156_string)
{
	var_156_string = "walk";
}


void func_906(string var_157_string)
{
	var_157_string = "run";
}


// @pe
void func_1035(string var_312_string, int var_313_int)
{
	if(var_313_int == 1)
		var_312_string = "fire";
	var_312_string = "phys";
}


// @pe
void func_1418(object var_14_object)
{
	bool var_15_bool;
	func_1375(var_15_bool, "quest_d1_03", "butcher_death");
	object var_21_object;
	var_14_object = var_21_object;
	TaskCall(5);
	func_911(var_21_object);
	TaskReturn();
}


// @pe
void func_911(object var_21_object)
{
	object var_22_object;
	var_21_object = var_22_object;
	func_920(var_22_object);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1043(bool var_40_bool, object var_41_object, string var_42_string)
{
	var_47_bool = IsFuncExist(var_41_object, "HasProperty", 2);
	if(!var_47_bool) { //@nz
		var_40_bool = false;
		return 2;
	}
	bool var_44_bool;
	var_41_object->HasProperty(var_42_string, var_44_bool);
	var_44_bool = var_40_bool;
}


void func_920(object var_22_object)
{
	cvector var_33_cvector; cvector var_34_cvector; cvector var_35_cvector; cvector var_36_cvector; string var_37_string; object var_38_object; bool var_39_bool; bool var_40_bool; float var_41_float; cvector var_42_cvector;
	if(var_22_object == null) {
		func_1007("fdie");
	} else {
		var_22_object->GetPosition(var_33_cvector);
		@GetPosition(var_34_cvector);
		@GetDirection(var_35_cvector);
		var_36_cvector = var_34_cvector - var_33_cvector;
		var_47_float = GetByIndex(var_36_cvector, 0);
		var_48_float = GetByIndex(var_35_cvector, 0);
		var_50_float = GetByIndex(var_36_cvector, 2);
		var_51_float = GetByIndex(var_35_cvector, 2);
		if(((var_47_float * var_48_float) + (var_50_float * var_51_float)) >= 0)
			var_37_string = "fdie";
		else
			var_37_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_22_object = var_38_object;
		var_58_bool = IsFuncExist(var_22_object, "GetScriptProperty", 2);
		if(var_58_bool != 0) {
			var_22_object->HasScriptProperty(var_39_bool, "Owner");
			if(var_39_bool != 0) {
				var_22_object->GetScriptProperty(var_38_object, "Owner");
				if(var_38_object == null)
					var_22_object = var_38_object;
			}
		}
		var_65_bool = IsFuncExist(var_38_object, "@GetEyesHeight", 1);
		if(var_65_bool != 0) {
			var_38_object->GetEyesHeight(var_41_float);
			var_42_cvector = [0.0, 0.0, 0.0];
			var_66_float = GetByIndex(var_42_cvector, 1);
			var_41_float = var_66_float;
			SetByIndex(var_42_cvector, 1) = var_66_float;
			@LookAsync(var_22_object, "head", var_42_cvector);
			var_40_bool = true;
		} else {
			var_40_bool = false;

		}
		@PlayAnimation("all", var_37_string);
		@WaitForAnimEnd();
		if(var_40_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_37_string);
		@RemoveEnvelope();
		var_38_object = null;
	}
	
}


void func_1055(float var_284_float, object var_285_object, float var_286_float, int var_287_int)
{
	int var_297_int; int var_299_int;
	object var_304_object;
	var_285_object = var_304_object;
	bool var_303_bool;
	func_1043(var_303_bool, var_304_object, "health");
	if(!var_303_bool) //@nz
		var_284_float = 0.0;
	bool var_307_bool; object var_308_object;
	func_1043(var_307_bool, var_308_object, "armor");
	if(!var_307_bool) //@nz
		var_297_int = 0;
	else
		var_308_object->GetProperty("armor", var_297_int);
	string var_312_string; int var_313_int;
	var_287_int = var_313_int;
	func_1035(var_312_string, var_313_int);
	string var_298_string = "armor_" + var_312_string;
	bool var_316_bool; object var_317_object; string var_318_string;
	var_285_object = var_317_object;
	func_1043(var_316_bool, var_317_object, var_318_string);
	if(!var_316_bool) //@nz
		var_299_int = 0;
	else
		var_285_object->GetProperty(var_318_string, var_299_int);

	float var_320_float;
	func_1357(var_320_float, ((var_297_int + var_299_int) / 100.0), (float)1);
	float var_300_float;
	var_320_float = var_300_float;
	float var_301_float;
	var_285_object->GetProperty("health", var_301_float);
	float var_330_float;
	func_1364(var_330_float, (var_301_float - (var_286_float * (1 - var_300_float))), (float)0, (float)1);
	var_285_object->SetProperty("health", var_330_float);
	float var_302_float = var_284_float;
	
}


void func_1184(object var_17_object, int var_18_int)
{
	object var_30_object; object var_31_object; cvector var_32_cvector; float var_33_float; string var_39_string;
	bool var_40_bool = false;
	if(var_18_int != 4) {
		if(var_18_int != 5)
			var_40_bool = true;
	}
	if(var_40_bool != 0) {
		@GetScene(var_30_object);
		@GetPosition(var_32_cvector);
		@GetEyesHeight(var_33_float);
		var_45_float = GetByIndex(var_32_cvector, 1);
		SetByIndex(var_32_cvector, 1) = (var_45_float + (var_33_float / 2));
		@AddActorByType(var_31_object, "scripted", var_30_object, var_32_cvector, [0.0, 0.0, 1.0], "blood.xml");
		var_31_object = null;
		var_30_object = null;
	}
	if(var_17_object == null)
		return 20;
	int var_34_int;
	@GetSecondaryAnimationType(var_34_int);
	if(var_34_int < 0)
		return 20;
	cvector var_35_cvector;
	var_17_object->GetPosition(var_35_cvector);
	cvector var_36_cvector;
	@GetPosition(var_36_cvector);
	cvector var_37_cvector;
	@GetDirection(var_37_cvector);
	cvector var_38_cvector = var_36_cvector - var_35_cvector;
	var_54_float = GetByIndex(var_38_cvector, 0);
	var_55_float = GetByIndex(var_37_cvector, 0);
	var_57_float = GetByIndex(var_38_cvector, 2);
	var_58_float = GetByIndex(var_37_cvector, 2);
	if(((var_54_float * var_55_float) + (var_57_float * var_58_float)) >= 0)
		var_39_string = "fhit";
	else
		var_39_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_39_string + "1"), (var_39_string + "2"), -10);
	
}


// @pe
void func_1318(void)
{
	@CameraSwitchToNormal();
}


void func_681(object var_0_object)
{
	@Face(var_0_object);
	@PlayAnimation("all", "bjump");
	cvector var_231_cvector;
	var_0_object->GetPFPosition(var_231_cvector); //@t
	cvector var_232_cvector;
	@GetPFPosition(var_232_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	@SetSpeed([0.0, 0.0, 0.0]);
}


void func_1322(string var_88_string)
{
	@Trace("playing " + var_88_string);
	float var_91_float;
	float var_92_float;
	@lshGetAnimTimes(var_88_string, var_91_float, var_92_float);
	@lshPlayAnimation(var_91_float, var_92_float);
	@Trace("start: " + var_91_float);
	@Trace("end: " + var_92_float);
}


void func_700(object var_0_object, bool var_190_bool)
{
	bool var_192_bool;
	var_195_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_195_bool != 0) {
		var_0_object->IsAttacking(var_192_bool); //@t
		var_192_bool = var_190_bool;
	}
	var_190_bool = false;
}


void func_1340(void)
{
	bool var_16_bool;
	func_1408(var_16_bool);
	if(var_16_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_63(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_77_object, object var_78_object)
{
	var_0_object = var_78_object;
	var_1_object = var_77_object;
	var_3_string = false;
	if(1 != 0) {
		func_121(var_78_object, "Neutral");
		var_0_object->SetMessage(5264); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(5265, -1, 5802); //@t
		var_0_object->AddReply(6042, -1, 6665); //@t
		goto Label_91;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x43";
	}
Label_91:
	bool var_106_bool;
	func_1408(var_106_bool);
	if(var_106_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1322(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_120;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_120:
		return 0;

	}
	
}


void func_1347(cvector var_50_cvector, cvector var_51_cvector)
{
	float var_54_float = sqrt(var_51_cvector | var_51_cvector);
	if(var_54_float < 0.000001)
		var_50_cvector = [0.0, 0.0, 0.0];
	var_50_cvector = var_51_cvector / var_54_float;
}


void func_711(object var_2_object, bool var_4_bool)
{
	int var_255_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_4_bool != 0) {
		if((var_4_bool + -1) > 0)
			return 4;
	}
	float var_254_float;
	@rand(var_254_float);
	float var_261_float;
	func_749(var_261_float);
	if(var_254_float < var_261_float) {
		@irand(var_255_int, var_2_object);
		@Speak("attack" + (var_255_int + 1));
		int var_266_int;
		func_747(var_266_int);
		var_4_bool = var_266_int;
	}
}


void func_584(bool var_356_bool, float var_357_float)
{
	float var_360_float; bool var_361_bool;
	@rand(var_360_float);
	if(var_360_float < var_357_float) {

		for(;;) {
			@IsAnimationPlaying(var_361_bool);
			if(!var_361_bool) { //@nz
			} else {
				bool var_364_bool;
				func_648(var_361_bool, var_364_bool);
				if(var_364_bool != 0) {
					var_356_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_356_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
}


// @pe
void func_1357(float var_320_float, float var_321_float, float var_322_float)
{
	if(var_321_float < var_322_float)
		var_321_float = var_320_float;
	else
		var_322_float = var_320_float;
	
}


void func_465(object var_0_object, float var_270_float, int var_271_int)
{
	object var_275_object; float var_276_float; float var_277_float;
	@GetVictim((var_270_float * 0.9), var_275_object);
	@ReportAttack(var_0_object);
	if(var_275_object == var_0_object) {
		float var_281_float; object var_282_object; int var_283_int;
		var_275_object = var_282_object;
		var_271_int = var_283_int;
		func_248(var_283_int);
		var_281_float = var_276_float;
		float var_284_float; object var_285_object; float var_286_float; int var_287_int;
		var_275_object = var_285_object;
		int var_288_int; object var_289_object; int var_290_int;
		var_275_object = var_289_object;
		var_271_int = var_290_int;
		func_251(var_290_int);
		var_288_int = var_287_int;
		func_1055(var_284_float, var_285_object, var_286_float, var_287_int);
		var_284_float = var_277_float;
		int var_337_int;
		func_743(var_337_int);
		@ReportHit(var_0_object, var_337_int, var_277_float, var_286_float);
		object var_338_object; float var_339_float;
		var_275_object = var_338_object;
		var_277_float = var_339_float;
		func_745();
	}
}
EMIT "Stack[-3] = 0";


// @pe
void func_1364(float var_330_float, float var_331_float, float var_332_float, float var_333_float)
{
	if(var_331_float < var_332_float) {
		var_332_float = var_330_float;
		return 0;
	}
	if(var_331_float > var_333_float) {
		var_333_float = var_330_float;
		return 0;
	}
	var_331_float = var_330_float;
}


void func_1375(bool var_15_bool, string var_16_string, string var_17_string)
{
	object var_19_object;
	@FindActor(var_19_object, var_16_string);
	if(var_19_object == null)
		var_15_bool = false;
	@Trigger(var_19_object, var_17_string);
	var_15_bool = true;
}
EMIT "Stack[-1] = 0";


void func_608(object var_0_object, bool var_198_bool, float var_199_float)
{
	bool var_205_bool; cvector var_206_cvector; cvector var_207_cvector; cvector var_208_cvector; float var_209_float;
	
	for(;;) {
		@IsAnimationPlaying(var_205_bool);
		if(!var_205_bool) //@nz
			break;
		bool var_211_bool;
		func_648(var_209_float, var_211_bool);
		if(var_211_bool != 0) {
			var_198_bool = true;
			return 10;
		}
		bool var_236_bool;
		func_1160(var_236_bool, var_0_object);
		if(!var_236_bool) { //@nz
			var_198_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_206_cvector); //@t
		@GetPFPosition(var_207_cvector);
		var_208_cvector = var_206_cvector - var_207_cvector;
		var_209_float = var_208_cvector | var_208_cvector;
		if(var_209_float < (var_199_float * var_199_float)) {
			bool var_241_bool; float var_242_float;
			var_199_float = var_242_float;
			func_504(var_208_cvector, var_209_float, var_241_bool, var_242_float);
			var_198_bool = true;
			return 10;
		}
		@sync();
	}
	var_198_bool = false;
}


void func_1119(bool var_33_bool, object var_34_object)
{
	bool var_36_bool;
	var_34_object->IsDead(var_36_bool);
	var_36_bool = var_33_bool;
}


// @pe
void func_248(float var_281_float)
{
	var_281_float = 0.1;
}


void func_1251(object var_176_object)
{
	cvector var_180_cvector;
	var_176_object->GetPosition(var_180_cvector);
	cvector var_181_cvector;
	@GetPosition(var_181_cvector);
	cvector var_182_cvector = var_180_cvector - var_181_cvector;
	var_183_float = GetByIndex(var_182_cvector, 0);
	var_184_float = GetByIndex(var_182_cvector, 2);
	@RotateAsync(var_183_float, var_184_float);
}


void func_228(void)
{
	bool var_24_bool;
	func_1375(var_24_bool, "quest_d1_03", "butcher_battle");
	object var_23_object;
	@FindActor(var_23_object, "player");
	object var_31_object;
	object var_22_object;
	func_260(var_18_int, var_19_int, var_20_bool, var_21_int, var_22_object, var_31_object, var_31_object, true, 180.0);
	func_1410();
}
EMIT "Stack[-1] = 0";


void func_1124(bool var_22_bool, object var_23_object)
{
	if(var_23_object == null) {
		var_22_bool = false;
		return 4;
	}
	bool var_29_bool = false;
	var_32_bool = IsFuncExist(var_23_object, "IsDead", 1);
	if(var_32_bool != 0) {
		bool var_33_bool; object var_34_object;
		var_23_object = var_34_object;
		func_1119(var_33_bool, var_34_object);
		if(var_33_bool != 0)
			var_29_bool = true;
	}
	if(var_29_bool != 0) {
		var_22_bool = false;
		return 4;
	}
	object var_26_object;
	@GetScene(var_26_object);
	if(var_26_object == null) {
		var_22_bool = false;
		return 4;
	}
	object var_27_object;
	var_23_object->GetScene(var_27_object);
	if(var_26_object != var_27_object) {
		var_22_bool = false;
		return 4;
	}
	var_22_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_743(int var_337_int)
{
	var_337_int = 0;
}


// @pe
void func_745(void)
{
}


void func_1387(int var_68_int)
{
	int var_70_int;
	@GetVariable("player", var_70_int);
	if(var_70_int == 0) {
		var_68_int = 200001;
		return 2;
	EMIT "GOTO 0x57a";
	}
	if(var_70_int == 1) {
		var_68_int = 200002;
		return 2;
	}
	var_68_int = 200003;
}


void func_747(int var_266_int)
{
	var_266_int = 1;
}


void func_749(float var_261_float)
{
	var_261_float = 0.5;
}


void func_1262(bool var_25_bool, object var_26_object)
{
	cvector var_36_cvector;
	var_26_object->GetPosition(var_36_cvector);
	float var_35_float;
	var_26_object->GetEyesHeight(var_35_float);
	var_43_float = GetByIndex(var_36_cvector, 1);
	SetByIndex(var_36_cvector, 1) = (var_43_float + var_35_float);
	cvector var_37_cvector;
	@GetPosition(var_37_cvector);
	@GetEyesHeight(var_35_float);
	var_44_float = GetByIndex(var_37_cvector, 1);
	SetByIndex(var_37_cvector, 1) = (var_44_float + var_35_float);
	cvector var_38_cvector = var_36_cvector - var_37_cvector;
	var_45_float = GetByIndex(var_38_cvector, 1);
	SetByIndex(var_38_cvector, 1) = (float)0;
	var_47_float = sqrt(var_38_cvector | var_38_cvector);
	var_38_cvector /= var_47_float;
	cvector var_39_cvector = -var_38_cvector;
	cvector var_50_cvector;
	func_1347(var_50_cvector, (var_39_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_40_cvector = ((var_38_cvector * 70) + (var_50_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_42_bool;
	@IsOverrideActive(var_42_bool);
	if(var_42_bool != 0)
		var_25_bool = false;
	@StopWorld();
	@CameraTransit((var_37_cvector + var_40_cvector), var_39_cvector);
	var_63_float = GetByIndex(var_40_cvector, 0);
	var_64_float = GetByIndex(var_40_cvector, 2);
	@Rotate(var_63_float, var_64_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
}


// @pe
void func_1007(string var_44_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_44_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_44_string);
	@RemoveEnvelope();
}


void func_881(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_757(object var_0_object, object var_1_object, bool var_114_bool, object var_115_object, float var_116_float, float var_117_float, bool var_118_bool, bool var_119_bool)
{
	bool var_130_bool; object var_132_object; cvector var_133_cvector; cvector var_134_cvector; float var_136_float; object var_137_object;
	var_0_object = false;
	var_1_object = var_115_object;
	bool var_131_bool;
	var_119_bool = var_131_bool;
	
	for(;;) {
		bool var_138_bool; object var_139_object;
		var_115_object = var_139_object;
		func_897(var_138_bool, var_139_object);
		if(!var_138_bool) { //@nz
			var_114_bool = false;
			return 16;
		}
		var_115_object->GetPosition(var_133_cvector);
		@GetPosition(var_134_cvector);
		var_136_float = (var_133_cvector - var_134_cvector) | (var_133_cvector - var_134_cvector);
		bool var_143_bool = false;
		if(var_117_float > 0) {
			if(var_136_float > (var_117_float * var_117_float))
				var_143_bool = true;
		}
		if(var_143_bool != 0) {
			@Stop();
			var_114_bool = false;
			return 16;
		}
		if(var_136_float > (var_116_float * var_116_float)) {
			var_115_object->GetPFPosition(var_133_cvector);
			@FindPathTo(var_137_object, var_133_cvector);
			if(var_137_object != null) {
				var_137_object = var_132_object;
				var_137_object = null;
			}
			if(var_132_object != null) {
				if(var_131_bool == 0) goto Label_810;
				var_131_bool = false;
				@RotatePath(var_132_object, var_130_bool);
				if(!var_130_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_156_string;
						func_904(var_156_string);
						string var_157_string;
						func_906(var_157_string);
						@FollowPath(var_132_object, var_118_bool, var_130_bool, var_156_string, var_157_string);
						if(!var_130_bool) { //@nz
							if(var_0_object == 0) goto Label_829;
							var_132_object = null;
						}
					EMIT "GOTO 0x33e";

					Label_829:
						} else {
					var_132_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_130_bool);
					if(!var_130_bool) { //@nz
						if(var_0_object != 0) {
							var_132_object = null;
							goto Label_857;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_857;
		}
			var_137_object = null;
			goto Label_855;

		Label_855:
			var_132_object = null;

		}
	Label_857:
		for(;;) {
			var_114_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_504(object var_0_object, object var_1_object, bool var_241_bool, float var_242_float)
{
	int var_245_int;
	@irand(var_245_int, var_1_object);
	var_245_int += 1;
	@Face(var_0_object);
	@SetAttackState(true);
	@PlayAnimation("all", ("attack_begin" + var_245_int));
	@WaitForAnimEnd();
	bool var_246_bool;
	func_711(var_245_int, var_246_bool);
	bool var_267_bool;
	func_1160(var_267_bool, var_0_object);
	if(!var_267_bool) { //@nz
		@StopAsync();
		var_241_bool = false;
		return 4;
	}
	float var_270_float; int var_271_int;
	var_242_float = var_270_float;
	var_245_int = var_271_int;
	func_465(var_246_bool, var_270_float, var_271_int);
	@HasAnimation(var_246_bool, "all", ("attack_middle" + var_245_int));
	if(var_246_bool != 0) {
		@PlayAnimation("all", ("attack_middle" + var_245_int));
		@WaitForAnimEnd();
		bool var_347_bool;
		func_1160(var_347_bool, var_0_object);
		if(!var_347_bool) { //@nz
			@StopAsync();
			var_241_bool = false;
			return 4;
		}
		float var_350_float; int var_351_int;
		var_242_float = var_350_float;
		var_245_int = var_351_int;
		func_465(var_246_bool, var_350_float, var_351_int);
	}
	@SetAttackState(false);
	@PlayAnimation("all", ("attack_end" + var_245_int));
	bool var_356_bool;
	func_584(var_356_bool, 0.75);
	@StopAsync();
	var_241_bool = true;
}


// @pe
void func_121(object var_2_object, string var_84_string)
{
	bool var_85_bool;
	func_1408(var_85_bool);
	if(!var_85_bool) //@nz
		return 0;
	if(var_84_string == var_2_object)
		return 0;
	string var_88_string;
	func_1322(var_88_string);
	var_2_object = var_88_string;
}


// @pe
void func_251(int var_288_int)
{
	var_288_int = 0;
}


void func_1404(int var_66_int)
{
	var_66_int = 3347;
}


void func_1406(string var_67_string)
{
	var_67_string = "ui/NPC_None.png";
}


