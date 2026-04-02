task task_0
{
	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool)
	{
	}

}


maintask task_1
{
	void init(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool)
	{
		@SensePlayerOnly(true);
		@Sleep(1.5);
		object var_10_object;
		@FindActor(var_10_object, "player");
		object var_14_object;
		object var_9_object;
		func_163(var_6_bool, var_7_object, var_8_bool, var_9_object, var_14_object, var_14_object, true, 155.0);
	}
	EMIT "Stack[-1] = 0";

}


task task_2
{
	// @pe
	void OnTimer(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, int var_9_int)
	{
		if(var_9_int == 1) {
			func_1466(var_1_int);
		} else {
			int var_17_int;
			func_1039(var_8_bool, var_17_int, var_17_int);
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
			func_1370(var_13_object);
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
		func_895(var_9_object);
		object var_14_object;
		var_9_object = var_14_object;
		func_1525();
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
	func_1277(var_13_object, var_14_int, var_15_float);
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
	func_1345(var_17_float, var_18_cvector, var_19_cvector);
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
	func_1486(var_10_object);
}


// @pe
void func_0(object var_11_object)
{
	object var_12_object;
	var_11_object = var_12_object;
	func_9(var_12_object);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_773(int var_2_int, int var_5_int)
{
	int var_342_int;
	if(!var_2_int) //@nz
		return 4;
	if(var_5_int != 0) {
		if((var_5_int + -1) > 0)
			return 4;
	}
	float var_341_float;
	@rand(var_341_float);
	float var_348_float;
	func_823(var_348_float);
	if(var_341_float < var_348_float) {
		@irand(var_342_int, var_2_int);
		@Speak("attack" + (var_342_int + 1));
		int var_353_int;
		func_821(var_353_int);
		var_5_int = var_353_int;
	}
}


void func_392(int var_1_int, int var_2_int, float var_4_float)
{
	bool var_42_bool; bool var_43_bool; cvector var_44_cvector;
	var_1_int = 0;
	
	for(;;) {
		@HasAnimation(var_42_bool, "all", ("attack_begin" + (var_1_int + 1)));
		if(!var_42_bool) { //@nz
		} else {
			var_1_int += 1;
		}
		var_2_int = 0;

		for(;;) {
			@IsExisting3DSound(var_43_bool, ("attack" + (var_2_int + 1)));
			if(!var_43_bool) //@nz
				break;
			var_2_int += 1;
		}
		@GetAnimationOffset(var_44_cvector, "all", "bjump");
		var_58_float = GetByIndex(var_44_cvector, 2);
		var_4_float = -var_58_float;

	}
}


void func_9(object var_12_object)
{
	cvector var_23_cvector; cvector var_24_cvector; cvector var_25_cvector; cvector var_26_cvector; string var_27_string; object var_28_object; bool var_29_bool; bool var_30_bool; float var_31_float; cvector var_32_cvector;
	if(var_12_object == null) {
		func_100("fdie");
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
		func_1381(var_87_string);
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


void func_1422(object var_69_object)
{
	object var_71_object;
	@self(var_71_object);
	var_71_object = var_69_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1039(object var_0_object, int var_1_int, int var_17_int)
{
	if(var_17_int != 0)
		return 0;
	bool var_20_bool;
	func_825(var_20_bool, var_1_int);
	if(!var_20_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_1428(cvector var_41_cvector, cvector var_42_cvector)
{
	float var_50_float = sqrt(var_42_cvector | var_42_cvector);
	if(var_50_float < 0.000001)
		var_41_cvector = [0.0, 0.0, 0.0];
	var_41_cvector = var_42_cvector / var_50_float;
}


// @pe
void func_150(float var_368_float)
{
	var_368_float = 0.1;
}


// @pe
void func_153(int var_375_int)
{
	var_375_int = 0;
}


// @pe
void func_156(bool var_75_bool, object var_76_object)
{
	object var_78_object;
	var_76_object = var_78_object;
	bool var_77_bool;
	func_1197(var_77_bool, var_78_object);
	var_77_bool = var_75_bool;
}


// @pe
void func_1438(float var_415_float, float var_416_float, float var_417_float)
{
	if(var_416_float < var_417_float)
		var_416_float = var_415_float;
	else
		var_417_float = var_415_float;
	
}


void func_673(object var_0_object, bool var_274_bool)
{
	cvector var_280_cvector; cvector var_281_cvector;
	bool var_285_bool;
	func_156(var_285_bool, var_0_object);
	if(!var_285_bool) { //@nz
		var_274_bool = false;
		return 10;
	}
	bool var_288_bool;
	float var_284_float;
	func_762(var_284_float, var_288_bool);
	if(var_288_bool != 0) {
		var_0_object->GetPFPosition(var_280_cvector); //@t
		@GetPFPosition(var_281_cvector);
		var_0_object->GetAttackDistance(var_284_float); //@t
		var_274_bool = ((var_280_cvector - var_281_cvector) | (var_280_cvector - var_281_cvector)) <= ((var_284_float + 50) * (var_284_float + 50));
		return 10;
	}
	var_274_bool = false;
}


void func_163(object var_0_object, bool var_3_bool, int var_5_int, object var_14_object, bool var_15_bool, float var_16_float, bool var_108_bool, bool var_200_bool)
{
	float var_28_float; cvector var_29_cvector; cvector var_30_cvector; bool var_32_bool; float var_35_float; cvector var_36_cvector; bool var_37_bool; float var_38_float;
	func_392(var_36_cvector, var_37_bool, var_38_float);
	var_5_int = 0;
	var_63_bool = IsFuncExist(var_14_object, "@GetAttackDistance", 1);
	if(var_63_bool != 0) {
		var_14_object->GetAttackDistance(var_28_float);
		var_28_float += 50;
	} else {
						var_16_float = var_28_float;
	}
	if(var_28_float >= 150)
		var_28_float = 150;
	var_3_bool = false;
	var_0_object = var_14_object;
	bool var_31_bool;
	@IsPlayerActor(var_0_object, var_31_bool);
	if(var_31_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_69_object;
		func_1422(var_69_object);
		@SendPlayerEnemy(var_14_object, var_69_object);
	}
	if(var_15_bool != 0)
		var_32_bool = false;
	else
		var_32_bool = true;

	
Label_203:
	for(;;) {
		bool var_74_bool = false;
		bool var_75_bool;
		func_156(var_75_bool, var_0_object);
		if(var_75_bool != 0) {
			if(!var_3_bool) //@nz
				var_74_bool = true;
		}
		if(var_74_bool != 0) {
			func_805(var_38_float);
			var_0_object->GetPFPosition(var_29_cvector); //@t
			@GetPFPosition(var_30_cvector);
			var_35_float = (var_29_cvector - var_30_cvector) | (var_29_cvector - var_30_cvector);
			if(var_35_float >= ((300.0 + var_28_float) * (300.0 + var_28_float))) {
				bool var_102_bool; float var_104_float;
				var_28_float = var_104_float;
				TaskCall(2);
				func_832(var_110_bool, var_102_bool, var_0_object, var_104_float, 3000.0, true, false);
				TaskReturn();
				if(!var_108_bool) { //@nz
				} else {
					var_32_bool = false;
			} else {
			if(var_35_float >= (var_16_float * var_16_float)) {
				var_0_object->GetPFPosition(var_36_cvector); //@t
				@CanReachByPF(var_37_bool, var_36_cvector);
				if(!var_37_bool) { //@nz
					bool var_194_bool; float var_196_float;
					var_28_float = var_196_float;
					TaskCall(2);
					func_832(var_202_bool, var_194_bool, var_0_object, var_196_float, 3000.0, true, false);
					TaskReturn();
					if(!var_200_bool) { //@nz
						goto Label_375;
					}
					var_32_bool = false;
					goto Label_203;
				}
				if(!var_32_bool) { //@nz
					func_1359(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_805(var_38_float);
					@StopAsync();
					var_32_bool = true;
					bool var_216_bool;
					func_156(var_216_bool, var_0_object);
					if(!var_216_bool) { //@nz
						goto Label_375;
					}
				}
				@rand(var_38_float);
				bool var_219_bool;
				var_221_bool = var_38_float < 0.6;
				if(var_221_bool != 1) {
					bool var_222_bool;
					func_762(true, var_222_bool);
					if(var_222_bool != 1)
						var_219_bool = false;
				}
				if(var_219_bool != 0) {
					@Face(var_0_object);
					func_812();
					@PlayAnimation("all", "attack_stay");
					bool var_259_bool; float var_260_float;
					func_630(var_38_float, var_259_bool, var_260_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_805(var_38_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_483_bool;
					func_762(var_38_float, var_483_bool);
					var_484_bool = !var_483_bool; //@nz
					if(var_484_bool == 0) goto Label_365;
					bool var_485_bool;
					func_156(var_485_bool, var_0_object);
					if(!var_485_bool) { //@nz
						goto Label_375;
					}
					var_0_object->GetPFPosition(var_29_cvector); //@t
					@GetPFPosition(var_30_cvector);
					if(!(((var_29_cvector - var_30_cvector) | (var_29_cvector - var_30_cvector)) < (var_260_float * var_260_float))) goto Label_365;
					bool var_490_bool; float var_491_float;
					var_16_float = var_491_float;
					func_466(var_37_bool, var_38_float, var_490_bool, var_491_float);
					var_492_bool = !var_490_bool; //@nz
					if(var_492_bool == 0) goto Label_365;
					goto Label_375;
			}
				bool var_493_bool; float var_494_float;
				var_16_float = var_494_float;
				func_466(var_37_bool, var_38_float, var_493_bool, var_494_float);
				if(!var_493_bool) { //@nz
					goto Label_375;
				}
				var_32_bool = true;

			}
		Label_365:
			goto Label_374;
			}
			Label_374:
			}
		}
	Label_375:
		@WaitForAnimEnd();
		if(var_3_bool != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_31_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_805(object var_0_object)
{
	func_1466(var_0_object);
}


void func_1061(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_1445(float var_425_float, float var_426_float, float var_427_float, float var_428_float)
{
	if(var_426_float < var_427_float) {
		var_427_float = var_425_float;
		return 0;
	}
	if(var_426_float > var_428_float) {
		var_428_float = var_425_float;
		return 0;
	}
	var_426_float = var_425_float;
}


void func_1192(bool var_88_bool, object var_89_object)
{
	bool var_91_bool;
	var_89_object->IsDead(var_91_bool);
	var_91_bool = var_88_bool;
}


void func_937(object var_0_object, int var_1_int, bool var_131_bool, object var_132_object, float var_133_float, float var_134_float, bool var_135_bool, bool var_136_bool)
{
	bool var_145_bool; object var_147_object; cvector var_148_cvector; cvector var_149_cvector; float var_151_float; object var_152_object;
	var_0_object = false;
	var_1_int = var_132_object;
	bool var_146_bool;
	var_136_bool = var_146_bool;
	
	for(;;) {
		bool var_153_bool; object var_154_object;
		var_132_object = var_154_object;
		func_825(var_153_bool, var_154_object);
		if(!var_153_bool) { //@nz
			var_131_bool = false;
			return 16;
		}
		var_132_object->GetPosition(var_148_cvector);
		@GetPosition(var_149_cvector);
		var_151_float = (var_148_cvector - var_149_cvector) | (var_148_cvector - var_149_cvector);
		bool var_158_bool = false;
		if(var_134_float > 0) {
			if(var_151_float > (var_134_float * var_134_float))
				var_158_bool = true;
		}
		if(var_158_bool != 0) {
			@Stop();
			var_131_bool = false;
			return 16;
		}
		if(var_151_float > (var_133_float * var_133_float)) {
			var_132_object->GetPFPosition(var_148_cvector);
			@FindPathTo(var_152_object, var_148_cvector);
			if(var_152_object != null) {
				var_152_object = var_147_object;
				var_152_object = null;
			}
			if(var_147_object != null) {
				if(var_146_bool == 0) goto Label_990;
				var_146_bool = false;
				@RotatePath(var_147_object, var_145_bool);
				if(!var_145_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_171_string;
						func_1077(var_171_string);
						string var_172_string;
						func_1079(var_172_string);
						@FollowPath(var_147_object, var_135_bool, var_145_bool, var_171_string, var_172_string);
						if(!var_145_bool) { //@nz
							if(var_0_object == 0) goto Label_1009;
							var_147_object = null;
						}
					EMIT "GOTO 0x3f2";

					Label_1009:
						} else {
					var_147_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_145_bool);
					if(!var_145_bool) { //@nz
						if(var_0_object != 0) {
							var_147_object = null;
							goto Label_1037;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1037;
		}
			var_152_object = null;
			goto Label_1035;

		Label_1035:
			var_147_object = null;

		}
	Label_1037:
		for(;;) {
			var_131_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_810(int var_438_int)
{
	var_438_int = 0;
}


void func_427(object var_0_object, float var_357_float, int var_358_int)
{
	object var_362_object; float var_363_float; float var_364_float;
	@GetVictim((var_357_float * 0.9), var_362_object);
	@ReportAttack(var_0_object);
	if(var_362_object == var_0_object) {
		float var_368_float; object var_369_object; int var_370_int;
		var_362_object = var_369_object;
		var_358_int = var_370_int;
		func_150(var_370_int);
		var_368_float = var_363_float;
		float var_371_float; object var_372_object; float var_373_float; int var_374_int;
		var_362_object = var_372_object;
		int var_375_int; object var_376_object; int var_377_int;
		var_362_object = var_376_object;
		var_358_int = var_377_int;
		func_153(var_377_int);
		var_375_int = var_374_int;
		func_1119(var_371_float, var_372_object, var_373_float, var_374_int);
		var_371_float = var_364_float;
		int var_438_int;
		func_810(var_438_int);
		@ReportHit(var_0_object, var_438_int, var_364_float, var_373_float);
		object var_439_object; float var_440_float;
		var_362_object = var_439_object;
		var_364_float = var_440_float;
		func_817();
	}
}
EMIT "Stack[-3] = 0";


void func_812(void)
{
	func_1381("attack_stay");
}


void func_1197(bool var_77_bool, object var_78_object)
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
		func_1192(var_88_bool, var_89_object);
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


void func_1456(float var_433_float)
{
	object var_435_object;
	@CreateFloatVector(var_435_object);
	var_435_object->add(var_433_float);
	@SendWorldWndMessage(15, var_435_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_817(void)
{
}


void func_819(bool var_463_bool)
{
	var_463_bool = true;
}


void func_821(int var_353_int)
{
	var_353_int = 1;
}


void func_1077(string var_171_string)
{
	var_171_string = "walk";
}


void func_823(float var_348_float)
{
	var_348_float = 0.5;
}


void func_1079(string var_172_string)
{
	var_172_string = "run";
}


// @pe
void func_825(bool var_153_bool, object var_154_object)
{
	object var_156_object;
	var_154_object = var_156_object;
	bool var_155_bool;
	func_1197(var_155_bool, var_156_object);
	var_155_bool = var_153_bool;
}


void func_1466(object var_95_object)
{
	bool var_97_bool;
	@IsPlayerActor(var_95_object, var_97_bool);
	if(var_97_bool != 0)
		@PlayGlobalMusic("attack");
}


// @pe
void func_1081(string var_405_string, int var_406_int)
{
	if(var_406_int == 2) {
		var_405_string = "fire";
		return 0;
	EMIT "GOTO 0x445";
	}
	if(var_406_int == 1) {
		var_405_string = "bullet";
		return 0;
	}
	var_405_string = "phys";
}


void func_701(bool var_272_bool)
{
	bool var_273_bool = false;
	bool var_274_bool;
	func_673(var_273_bool, var_274_bool);
	if(var_274_bool != 0) {
		bool var_291_bool;
		func_717(var_272_bool, var_273_bool, var_291_bool);
		if(var_291_bool != 0)
			var_273_bool = true;
	}
	if(var_273_bool != 0) {
		var_272_bool = true;
		return 0;
	}
	var_272_bool = false;
}


void func_832(int var_2_int, bool var_102_bool, object var_103_object, float var_104_float, float var_105_float, bool var_106_bool, bool var_107_bool)
{
	object var_115_object;
	func_1466(var_115_object);
	@SetTimer(1, 5);
	bool var_113_bool;
	@CanSee(var_113_bool, var_115_object);
	if(var_113_bool != 0) {
		var_2_int = true;
		object var_119_object;
		var_103_object = var_119_object;
		func_1370(var_119_object);
	} else {
		var_2_int = false;
	}
	bool var_126_bool; object var_127_object;
	func_1102(var_126_bool, var_127_object);
	if(var_126_bool != 0) {
		object var_130_object;
		func_1422(var_130_object);
		@SendPlayerEnemy(var_127_object, var_130_object);
	}
	bool var_131_bool; object var_132_object; float var_133_float; float var_134_float; bool var_135_bool; bool var_136_bool;
	var_103_object = var_132_object;
	var_104_float = var_133_float;
	var_105_float = var_134_float;
	var_106_bool = var_135_bool;
	var_107_bool = var_136_bool;
	bool var_114_bool;
	func_937(var_113_bool, var_114_bool, var_131_bool, var_132_object, var_133_float, var_134_float, var_135_bool, var_136_bool);
	var_131_bool = var_114_bool;
	if(var_2_int != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_114_bool = var_102_bool;
	
}


void func_1345(object var_15_object, cvector var_18_cvector, cvector var_19_cvector)
{
	object var_22_object;
	@GetScene(var_22_object);
	object var_23_object;
	@AddActorByType(var_23_object, "scripted", var_22_object, var_18_cvector, var_19_cvector, "blood_dir.xml");
	object var_26_object;
	var_15_object = var_26_object;
	func_1233(var_26_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1475(void)
{
	object var_333_object;
	@GetScene(var_333_object);
	object var_335_object;
	func_1422(var_335_object);
	@BroadcastMessage("battle", var_335_object, var_333_object);
}
EMIT "Stack[-1] = 0";


void func_1095(cvector var_302_cvector, object var_303_object)
{
	cvector var_306_cvector;
	@GetPosition(var_306_cvector);
	cvector var_307_cvector;
	var_303_object->GetPosition(var_307_cvector);
	var_302_cvector = var_307_cvector - var_306_cvector;
}


void func_717(object var_0_object, float var_4_float, bool var_291_bool)
{
	object var_297_object; float var_299_float; cvector var_300_cvector; cvector var_301_cvector;
	@GetScene(var_297_object);
	bool var_298_bool = false;
	
	for(;;) {
		cvector var_302_cvector;
		func_1095(var_302_cvector, var_0_object);
		var_308_int = -var_302_cvector;
		@FindDirLength(var_299_float, var_308_int, var_4_float);
		if(var_299_float < var_4_float) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_300_cvector); //@t
				@GetPFPosition(var_301_cvector);
				@WaitForAnimEnd();
				func_805(var_301_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_298_bool = true;
				bool var_313_bool;
				func_673(var_301_cvector, var_313_bool);
				var_314_bool = !var_313_bool; //@nz
				if(var_314_bool == 0) goto Label_758;
		}
		for(;;) {
			var_298_bool = var_291_bool;

		}

	Label_758:
	}
}
EMIT "Stack[-5] = 0";


void func_1102(bool var_126_bool, object var_127_object)
{
	bool var_129_bool;
	@IsPlayerActor(var_127_object, var_129_bool);
	var_129_bool = var_126_bool;
}


void func_1359(object var_205_object)
{
	cvector var_209_cvector;
	var_205_object->GetPosition(var_209_cvector);
	cvector var_210_cvector;
	@GetPosition(var_210_cvector);
	cvector var_211_cvector = var_209_cvector - var_210_cvector;
	var_212_float = GetByIndex(var_211_cvector, 0);
	var_213_float = GetByIndex(var_211_cvector, 2);
	@RotateAsync(var_212_float, var_213_float);
}


// @pe
void func_1486(object var_10_object)
{
	object var_11_object;
	var_10_object = var_11_object;
	TaskCall(0);
	func_0(var_11_object);
	TaskReturn();
}


void func_1233(object var_26_object)
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


void func_466(object var_0_object, int var_1_int, bool var_320_bool, float var_321_float)
{
	string var_329_string;
	func_805(var_329_string);
	int var_326_int;
	@irand(var_326_int, var_1_int);
	@Face(var_0_object);
	@SetAttackState(true);
	func_1475();
	@PlayAnimation("all", ("attack_begin" + (var_326_int + 1)));
	@WaitForAnimEnd();
	int var_328_int;
	func_773(var_328_int, var_329_string);
	bool var_354_bool;
	func_156(var_354_bool, var_0_object);
	if(!var_354_bool) { //@nz
		@StopAsync();
		var_320_bool = false;
		return 8;
	}
	float var_357_float; int var_358_int;
	var_321_float = var_357_float;
	var_326_int = var_358_int;
	func_427(var_329_string, var_357_float, var_358_int);
	bool var_327_bool;
	@HasAnimation(var_327_bool, "all", ("attack_middle" + var_326_int));
	if(var_327_bool != 0) {
		func_1475();
		@PlayAnimation("all", ("attack_middle" + var_326_int));
		@WaitForAnimEnd();
		func_805(var_329_string);
		bool var_448_bool;
		func_156(var_448_bool, var_0_object);
		if(!var_448_bool) { //@nz
			@StopAsync();
			var_320_bool = false;
			return 8;
		}
		float var_451_float; int var_452_int;
		var_321_float = var_451_float;
		func_427(var_329_string, var_451_float, var_452_int);
		var_328_int = 1;

		for(;;) {
			var_329_string = (("attack_middle" + var_452_int) + "_") + var_328_int;
			@HasAnimation(var_327_bool, "all", var_329_string);
			if(!var_327_bool) { //@nz
			} else {
				func_1475();
				@PlayAnimation("all", var_329_string);
				@WaitForAnimEnd();
				func_805(var_329_string);
				bool var_474_bool;
				func_156(var_474_bool, var_0_object);
				if(!var_474_bool) { //@nz
					@StopAsync();
					var_320_bool = false;
					return 8;
				}
				float var_477_float; int var_478_int;
				var_321_float = var_477_float;
				var_326_int = var_478_int;
				func_427(var_329_string, var_477_float, var_478_int);
				var_328_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_326_int));
		bool var_463_bool;
		func_819(var_463_bool);
		if(var_463_bool != 0) {
			bool var_464_bool;
			func_603(var_464_bool, 0.75);
			@StopAsync();
		}
		var_320_bool = true;
		return 8;

	}
}


void func_1107(bool var_390_bool, object var_391_object, string var_392_string)
{
	var_397_bool = IsFuncExist(var_391_object, "HasProperty", 2);
	if(!var_397_bool) { //@nz
		var_390_bool = false;
		return 2;
	}
	bool var_394_bool;
	var_391_object->HasProperty(var_392_string, var_394_bool);
	var_394_bool = var_390_bool;
}


void func_1370(object var_119_object)
{
	float var_122_float;
	var_119_object->GetEyesHeight(var_122_float);
	cvector var_123_cvector = [0.0, 0.0, 0.0];
	var_124_float = GetByIndex(var_123_cvector, 1);
	var_122_float = var_124_float;
	SetByIndex(var_123_cvector, 1) = var_124_float;
	@LookAsync(var_119_object, "head", var_123_cvector);
}


void func_603(bool var_464_bool, float var_465_float)
{
	float var_468_float; bool var_469_bool;
	@rand(var_468_float);
	if(var_468_float < var_465_float) {

		for(;;) {
			@IsAnimationPlaying(var_469_bool);
			if(!var_469_bool) { //@nz
			} else {
				bool var_472_bool;
				func_701(var_472_bool);
				if(var_472_bool != 0) {
					var_464_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_464_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_805(var_469_bool);
}


void func_1119(float var_371_float, object var_372_object, float var_373_float, int var_374_int)
{
	int var_384_int; int var_386_int;
	object var_391_object;
	var_372_object = var_391_object;
	bool var_390_bool;
	func_1107(var_390_bool, var_391_object, "health");
	if(!var_390_bool) //@nz
		var_371_float = 0.0;
	bool var_400_bool; object var_401_object;
	func_1107(var_400_bool, var_401_object, "armor");
	if(!var_400_bool) //@nz
		var_384_int = 0;
	else
		var_401_object->GetProperty("armor", var_384_int);
	string var_405_string; int var_406_int;
	var_374_int = var_406_int;
	func_1081(var_405_string, var_406_int);
	string var_385_string = "armor_" + var_405_string;
	bool var_411_bool; object var_412_object; string var_413_string;
	var_372_object = var_412_object;
	func_1107(var_411_bool, var_412_object, var_413_string);
	if(!var_411_bool) //@nz
		var_386_int = 0;
	else
		var_372_object->GetProperty(var_413_string, var_386_int);

	float var_415_float;
	func_1438(var_415_float, ((var_384_int + var_386_int) / 100.0), (float)1);
	float var_387_float;
	var_415_float = var_387_float;
	float var_388_float;
	var_372_object->GetProperty("health", var_388_float);
	float var_389_float = var_373_float * (1 - var_387_float);
	float var_425_float;
	func_1445(var_425_float, (var_388_float - var_389_float), (float)0, (float)1);
	var_372_object->SetProperty("health", var_425_float);
	bool var_431_bool; object var_432_object;
	var_372_object = var_432_object;
	func_1102(var_431_bool, var_432_object);
	if(var_431_bool != 0) {
		float var_433_float = -var_389_float;
		func_1456(var_433_float);
	}
	var_389_float = var_371_float;
	
}


// @pe
void func_100(string var_34_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_35_string;
	var_34_string = var_35_string;
	func_1381(var_35_string);
	@PlayAnimation("all", var_34_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_34_string);
	@RemoveEnvelope();
}


void func_1381(string var_228_string)
{
	bool var_237_bool; int var_238_int; bool var_239_bool; int var_240_int; bool var_241_bool; float var_242_float; cvector var_243_cvector; cvector var_244_cvector;
	@IsExisting3DSound(var_237_bool, var_228_string);
	if(!var_237_bool) { //@nz
		var_238_int = 0;

		for(;;) {
			@IsExisting3DSound(var_239_bool, (var_228_string + (var_238_int + 1)));
			if(!var_239_bool) { //@nz
				break;
			Label_1401:
				@irand(var_240_int, var_238_int);
				var_228_string += (var_240_int + 1);
	}
			@Is3DSoundLoaded(var_241_bool, var_228_string);
			if(var_241_bool != 0) {
				@GetEyesHeight(var_242_float);
				@GetDirection(var_243_cvector);
				var_244_cvector = var_243_cvector * 50;
				var_255_float = GetByIndex(var_244_cvector, 1);
				SetByIndex(var_244_cvector, 1) = (var_255_float + var_242_float);
				@PlayGlobalSound(var_228_string, var_244_cvector);
			}
		}
		var_238_int += 1;
	}
	var_250_bool = !var_238_int; //@nz
	if(var_250_bool == 0) goto Label_1401;
}


void func_630(object var_0_object, bool var_259_bool, float var_260_float)
{
	bool var_266_bool; cvector var_267_cvector; cvector var_268_cvector; cvector var_269_cvector; float var_270_float;
	
	for(;;) {
		@IsAnimationPlaying(var_266_bool);
		if(!var_266_bool) //@nz
			break;
		bool var_272_bool;
		func_701(var_272_bool);
		if(var_272_bool != 0) {
			var_259_bool = true;
			return 10;
		}
		bool var_315_bool;
		func_156(var_315_bool, var_0_object);
		if(!var_315_bool) { //@nz
			var_259_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_267_cvector); //@t
		@GetPFPosition(var_268_cvector);
		var_269_cvector = var_267_cvector - var_268_cvector;
		var_270_float = var_269_cvector | var_269_cvector;
		if(var_270_float < (var_260_float * var_260_float)) {
			bool var_320_bool; float var_321_float;
			var_260_float = var_321_float;
			func_466(var_269_cvector, var_270_float, var_320_bool, var_321_float);
			var_259_bool = true;
			return 10;
		}
		@sync();
	}
	func_805(var_270_float);
	var_259_bool = false;
}


void func_762(object var_0_object, bool var_222_bool)
{
	bool var_224_bool;
	var_227_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_227_bool != 0) {
		var_0_object->IsAttacking(var_224_bool); //@t
		var_224_bool = var_222_bool;
	}
	var_222_bool = false;
}


void func_1277(object var_13_object, int var_14_int, float var_15_float)
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
		func_1095(var_43_cvector, var_44_object);
		var_43_cvector = var_42_cvector;
		func_1428(var_41_cvector, var_42_cvector);
		var_41_cvector = var_25_cvector;
		@CreateVectorVector(var_26_object);
		var_27_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_27_int), var_28_bool, var_29_cvector, var_30_cvector);
			if(!var_28_bool) { //@nz
				break;
			Label_1339:
				var_26_object = null;
	}
			object var_103_object;
			var_13_object = var_103_object;
			func_1233(var_103_object);
		}
		if((var_30_cvector | var_25_cvector) >= 0.70710677)
			var_26_object->add(var_29_cvector);
		var_27_int += 1;
	}
	int var_31_int;
	var_26_object->size(var_31_int);
	if(var_31_int == 0) goto Label_1339;
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
	func_1345(var_60_float, var_61_cvector, var_62_cvector);
}


void func_895(int var_2_int)
{
	@KillTimer(1);
	if(var_2_int != 0) {
		var_2_int = false;
		@UnlookAsync("head");
	}
	func_1061(var_9_object);
}


