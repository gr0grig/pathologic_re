// @GLOBALS: 0:bool:,1:object:

task task_0
{
}


task task_1
{
	// @pe
	void OnTimer(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, int var_7_int, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, cvector var_13_cvector, cvector var_14_cvector)
	{
		if(var_14_cvector != 0)
			return 0;
		bool var_17_bool;
		func_652(var_17_bool, var_1_int);
		if(!var_17_bool) //@nz
			var_0_object = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(object actor, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, cvector var_13_cvector, cvector var_14_cvector)
	{
		@RequestClearPath(var_14_cvector);
	}

	// @pe
	void OnDeath(object actor, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, cvector var_13_cvector, cvector var_14_cvector)
	{
		func_636(var_14_cvector);
		object var_16_object;
		var_14_cvector = var_16_object;
		func_1510();
	}

}


task task_2
{
	void OnUse(object actor, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, cvector var_13_cvector, cvector var_14_cvector)
	{
		bool var_16_bool;
		@IsOverrideActive(var_16_bool);
		if(!var_16_bool) //@nz
			@WorkWithCorpse(var_14_cvector);
	}

	// @pe
	void OnHit(object actor, int iHitType, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, float var_9_float, float var_10_float, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, cvector var_16_cvector, cvector var_17_cvector)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, string var_8_string, object var_9_object, object var_10_object, object var_11_object, string var_12_string, bool var_13_bool, cvector var_14_cvector, cvector var_15_cvector)
	{
	}

	// @pe
	void OnDeath(object actor, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, cvector var_13_cvector, cvector var_14_cvector)
	{
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, int var_12_int, int var_13_int, cvector var_14_cvector, cvector var_15_cvector)
	{
		if(1 != 0) {
			func_1397();
			if(var_14_cvector == 8308) {
				func_915(var_15_cvector, "Neutral");
				var_0_object->SetMessage(7526); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7527, -1, 8309); //@t
				return 0;
			}
			var_3_bool = true;
			bool var_39_bool;
			func_1537(var_39_bool);
			if(var_39_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x3a4";
	
	}

}


maintask task_5
{
	void init(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector)
	{
		var_14_bool = GlobalVars[0];
		GlobalVars[0] = false;
		func_1009(var_12_cvector, var_13_cvector);
	}

	// @pe
	void OnUse(object actor, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector, object var_14_object)
	{
		bool var_15_bool;
		func_1007(var_15_bool);
		if(var_15_bool != 0) {
			func_1087();
			object var_16_object;
			var_14_object = var_16_object;
			func_968(var_16_object);
		}
	}

	// @pe
	void OnTrigger(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector, string var_14_string)
	{
		if(var_14_string == "kill_player") {
			TaskCall(0);
			func_0();
			TaskReturn();
		}
	}

}


void OnAttacked(object actor, int iDamageType, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector, object var_14_object)
{
	var_17_bool = GlobalVars[0];
	if(var_17_bool != 0) {
	}
	bool var_16_bool;
	@IsPlayerActor(var_14_object, var_16_bool);
	if(var_16_bool != 0) {
		var_19_bool = GlobalVars[0];
		GlobalVars[0] = true;
		bool var_20_bool;
		func_1436(var_20_bool, "quest_d2_02", "player_attack");
	}
}


void OnUnload(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector)
{
	bool var_14_bool;
	func_1436(var_14_bool, "quest_d2_02", "patrol2_unload");
}


// @pe
void OnHit(object actor, int iHitType, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector, object var_14_object, int var_15_int, float var_16_float, float var_17_float)
{
	object var_18_object;
	var_14_object = var_18_object;
	int var_19_int;
	var_15_int = var_19_int;
	float var_20_float;
	var_16_float = var_20_float;
	func_1241(var_19_int, var_20_float);
}


void OnPropertyChange(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector, object var_14_object, string var_15_string)
{
	float var_17_float;
	if(var_15_string == "health") {
		@GetProperty("health", var_17_float);
		if(var_17_float <= 0)
			@SignalDeath(var_14_object);
	}
}


// @pe
void OnDeath(object actor, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector, object var_14_object)
{
	object var_15_object;
	var_14_object = var_15_object;
	func_1471(var_15_object);
}


void func_512(object var_0_object, int var_1_int, bool var_109_bool, object var_110_object, float var_111_float, float var_112_float, bool var_113_bool, bool var_114_bool)
{
	bool var_125_bool; object var_127_object; cvector var_128_cvector; cvector var_129_cvector; float var_131_float; object var_132_object;
	var_0_object = false;
	var_1_int = var_110_object;
	bool var_126_bool;
	var_114_bool = var_126_bool;
	
	for(;;) {
		bool var_133_bool; object var_134_object;
		var_110_object = var_134_object;
		func_652(var_133_bool, var_134_object);
		if(!var_133_bool) { //@nz
			var_109_bool = false;
			return 16;
		}
		var_110_object->GetPosition(var_128_cvector);
		@GetPosition(var_129_cvector);
		var_131_float = (var_128_cvector - var_129_cvector) | (var_128_cvector - var_129_cvector);
		bool var_138_bool = false;
		if(var_112_float > 0) {
			if(var_131_float > (var_112_float * var_112_float))
				var_138_bool = true;
		}
		if(var_138_bool != 0) {
			@Stop();
			var_109_bool = false;
			return 16;
		}
		if(var_131_float > (var_111_float * var_111_float)) {
			var_110_object->GetPFPosition(var_128_cvector);
			@FindPathTo(var_132_object, var_128_cvector);
			if(var_132_object != null) {
				var_132_object = var_127_object;
				var_132_object = null;
			}
			if(var_127_object != null) {
				if(var_126_bool == 0) goto Label_565;
				var_126_bool = false;
				@RotatePath(var_127_object, var_125_bool);
				if(!var_125_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_151_string;
						func_659(var_151_string);
						string var_152_string;
						func_661(var_152_string);
						@FollowPath(var_127_object, var_113_bool, var_125_bool, var_151_string, var_152_string);
						if(!var_125_bool) { //@nz
							if(var_0_object == 0) goto Label_584;
							var_127_object = null;
						}
					EMIT "GOTO 0x249";

					Label_584:
						} else {
					var_127_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_125_bool);
					if(!var_125_bool) { //@nz
						if(var_0_object != 0) {
							var_127_object = null;
							goto Label_612;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_612;
		}
			var_132_object = null;
			goto Label_610;

		Label_610:
			var_127_object = null;

		}
	Label_612:
		for(;;) {
			var_109_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_1537(bool var_88_bool)
{
	var_88_bool = false;
}


void func_0(void)
{
	object var_23_object;
	@FindActor(var_23_object, "player");
	if(!var_23_object) { //@nz
	}
	object var_26_object;
	object var_22_object;
	func_21(var_18_int, var_19_int, var_20_bool, var_21_int, var_22_object, var_26_object, var_26_object, true, 180.0);
}
EMIT "Stack[-1] = 0";


// @pe
void func_771(string var_47_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_47_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_47_string);
	@RemoveEnvelope();
}


void func_636(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_1414(float var_27_float, cvector var_28_cvector, cvector var_29_cvector)
{
	var_27_float = (var_29_cvector - var_28_cvector) | (var_29_cvector - var_28_cvector);
}


void func_265(object var_0_object, int var_1_int, bool var_236_bool, float var_237_float)
{
	int var_240_int;
	@irand(var_240_int, var_1_int);
	var_240_int += 1;
	@Face(var_0_object);
	@SetAttackState(true);
	@PlayAnimation("all", ("attack_begin" + var_240_int));
	@WaitForAnimEnd();
	bool var_241_bool;
	func_472(var_240_int, var_241_bool);
	bool var_262_bool;
	func_1217(var_262_bool, var_0_object);
	if(!var_262_bool) { //@nz
		@StopAsync();
		var_236_bool = false;
		return 4;
	}
	float var_265_float; int var_266_int;
	var_237_float = var_265_float;
	var_240_int = var_266_int;
	func_226(var_241_bool, var_265_float, var_266_int);
	@HasAnimation(var_241_bool, "all", ("attack_middle" + var_240_int));
	if(var_241_bool != 0) {
		@PlayAnimation("all", ("attack_middle" + var_240_int));
		@WaitForAnimEnd();
		bool var_342_bool;
		func_1217(var_342_bool, var_0_object);
		if(!var_342_bool) { //@nz
			@StopAsync();
			var_236_bool = false;
			return 4;
		}
		float var_345_float; int var_346_int;
		var_237_float = var_345_float;
		var_240_int = var_346_int;
		func_226(var_241_bool, var_345_float, var_346_int);
	}
	@SetAttackState(false);
	@PlayAnimation("all", ("attack_end" + var_240_int));
	bool var_351_bool;
	func_345(var_351_bool, 0.75);
	@StopAsync();
	var_236_bool = true;
}


// @pe
void func_1418(float var_315_float, float var_316_float, float var_317_float)
{
	if(var_316_float < var_317_float)
		var_316_float = var_315_float;
	else
		var_317_float = var_315_float;
	
}


// @pe
void func_652(bool var_133_bool, object var_134_object)
{
	object var_136_object;
	var_134_object = var_136_object;
	bool var_135_bool;
	func_1217(var_135_bool, var_136_object);
	var_135_bool = var_133_bool;
}


// @pe
void func_15(float var_276_float)
{
	var_276_float = 0.3;
}


// @pe
void func_1425(float var_325_float, float var_326_float, float var_327_float, float var_328_float)
{
	if(var_326_float < var_327_float) {
		var_327_float = var_325_float;
		return 0;
	}
	if(var_326_float > var_328_float) {
		var_328_float = var_325_float;
		return 0;
	}
	var_326_float = var_325_float;
}


// @pe
void func_18(int var_283_int)
{
	var_283_int = 0;
}


void func_659(string var_151_string)
{
	var_151_string = "walk";
}


// @pe
void func_915(int var_2_int, string var_87_string)
{
	bool var_88_bool;
	func_1537(var_88_bool);
	if(!var_88_bool) //@nz
		return 0;
	if(var_87_string == var_2_int)
		return 0;
	string var_91_string;
	func_1379(var_91_string);
	var_2_int = var_91_string;
}


void func_21(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, object var_26_object, bool var_27_bool, float var_28_float, bool var_115_bool)
{
	bool var_39_bool; bool var_40_bool; float var_41_float; cvector var_42_cvector; cvector var_43_cvector; bool var_44_bool; bool var_45_bool; float var_47_float; float var_48_float;
	var_1_int = 0;
	
	for(;;) {
		@HasAnimation(var_39_bool, "all", ("attack_begin" + (var_1_int + 1)));
		if(!var_39_bool) { //@nz
		} else {
			var_1_int += 1;
		}
		var_2_int = 0;

		for(;;) {
			@IsExisting3DSound(var_40_bool, ("attack" + (var_2_int + 1)));
			if(!var_40_bool) { //@nz
			} else {
									var_2_int += 1;
			}
			var_4_int = 0;
			var_62_bool = IsFuncExist(var_26_object, "@GetAttackDistance", 1);
			if(var_62_bool != 0) {
				var_26_object->GetAttackDistance(var_41_float);
				var_41_float += 50;
			} else {
								var_28_float = var_41_float;

			}
			if(var_41_float >= 150)
				var_41_float = 150;
			var_3_bool = false;
			var_0_object = var_26_object;
			@IsPlayerActor(var_0_object, var_44_bool);
			if(var_27_bool != 0)
				var_45_bool = false;
			else
				var_45_bool = true;

			for(;;) {
				bool var_67_bool = false;
				bool var_68_bool;
				func_1217(var_68_bool, var_0_object);
				if(var_68_bool != 0) {
					if(!var_3_bool) //@nz
						var_67_bool = true;
				}
				if(var_67_bool != 0) {
					var_0_object->GetPFPosition(var_42_cvector); //@t
					@GetPFPosition(var_43_cvector);
					var_47_float = (var_42_cvector - var_43_cvector) | (var_42_cvector - var_43_cvector);
					if(var_47_float >= ((400.0 + var_41_float) * (400.0 + var_41_float))) {
						bool var_109_bool; float var_111_float;
						var_41_float = var_111_float;
						TaskCall(1);
						func_512(var_115_bool, var_116_object, var_109_bool, var_0_object, var_111_float, 10000.0, true, false);
						TaskReturn();
						if(!var_115_bool) { //@nz
						} else {
							var_45_bool = false;
					} else {
					if(var_47_float >= (var_28_float * var_28_float)) {
						if(!var_45_bool) { //@nz
							func_1308(var_0_object);
							@PlayAnimation("all", "attack_on");
							@WaitForAnimEnd();
							@StopAsync();
							var_45_bool = true;
						}
						@rand(var_48_float);
						bool var_182_bool;
						var_184_bool = var_48_float < 0.6;
						if(var_184_bool != 1) {
							bool var_185_bool;
							func_461(true, var_185_bool);
							if(var_185_bool != 1)
								var_182_bool = false;
						}
						if(var_182_bool != 0) {
							@Face(var_0_object);
							@PlayAnimation("all", "attack_stay");
							bool var_193_bool; float var_194_float;
							func_369(var_48_float, var_193_bool, var_194_float);
							@StopAsync();
						} else {
							@Face(var_0_object);
							@PlayAnimation("all", "fjump");
							@WaitForAnimEnd();
							@SetSpeed([0.0, 0.0, 0.0]);
							@Stop();
							@StopAsync();
							bool var_363_bool;
							func_461(var_48_float, var_363_bool);
							var_364_bool = !var_363_bool; //@nz
							if(var_364_bool == 0) goto Label_199;
							bool var_365_bool;
							func_1217(var_365_bool, var_0_object);
							if(!var_365_bool) { //@nz
								goto Label_209;
							}
							var_0_object->GetPFPosition(var_42_cvector); //@t
							@GetPFPosition(var_43_cvector);
							var_47_float = (var_42_cvector - var_43_cvector) | (var_42_cvector - var_43_cvector);
							if(!(var_47_float < (var_194_float * var_194_float))) goto Label_199;
							bool var_370_bool; float var_371_float;
							var_28_float = var_371_float;
							func_265(var_47_float, var_48_float, var_370_bool, var_371_float);
							var_372_bool = !var_370_bool; //@nz
							if(var_372_bool == 0) goto Label_199;
							goto Label_209;
					}
						bool var_373_bool; float var_374_float;
						var_28_float = var_374_float;
						func_265(var_47_float, var_48_float, var_373_bool, var_374_float);
						if(!var_373_bool) { //@nz
							goto Label_209;
						}
						var_45_bool = true;

					}
				Label_199:
					goto Label_208;
					}
					Label_208:
					}
				}
			Label_209:
				@WaitForAnimEnd();
				if(var_3_bool != 0)
					return 20;
				@PlayAnimation("all", "attack_off");
				@WaitForAnimEnd();
				if(var_44_bool != 0)
					@Sleep(2.0);
				return 20;

			}

		}

	}
}


void func_661(string var_152_string)
{
	var_152_string = "run";
}


// @pe
void func_663(object var_24_object)
{
	object var_25_object;
	var_24_object = var_25_object;
	func_684(var_25_object);
	@SetRTEnvelope(50, 40);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1176(bool var_83_bool, object var_84_object)
{
	bool var_86_bool;
	var_84_object->IsDead(var_86_bool);
	var_86_bool = var_83_bool;
}


void func_409(object var_0_object, bool var_206_bool)
{
	cvector var_212_cvector; cvector var_213_cvector;
	bool var_217_bool;
	func_1217(var_217_bool, var_0_object);
	if(!var_217_bool) { //@nz
		var_206_bool = false;
		return 10;
	}
	bool var_220_bool;
	float var_216_float;
	func_461(var_216_float, var_220_bool);
	if(var_220_bool != 0) {
		var_0_object->GetPFPosition(var_212_cvector); //@t
		@GetPFPosition(var_213_cvector);
		var_0_object->GetAttackDistance(var_216_float); //@t
		var_216_float += 50;
		if(((var_212_cvector - var_213_cvector) | (var_212_cvector - var_213_cvector)) <= (var_216_float * var_216_float)) {
			func_442(var_216_float);
			var_206_bool = true;
			return 10;
		}
	}
	var_206_bool = false;
}


void func_1308(object var_171_object)
{
	cvector var_175_cvector;
	var_171_object->GetPosition(var_175_cvector);
	cvector var_176_cvector;
	@GetPosition(var_176_cvector);
	cvector var_177_cvector = var_175_cvector - var_176_cvector;
	var_178_float = GetByIndex(var_177_cvector, 0);
	var_179_float = GetByIndex(var_177_cvector, 2);
	@RotateAsync(var_178_float, var_179_float);
}


void func_1181(bool var_72_bool, object var_73_object)
{
	if(var_73_object == null) {
		var_72_bool = false;
		return 4;
	}
	bool var_79_bool = false;
	var_82_bool = IsFuncExist(var_73_object, "IsDead", 1);
	if(var_82_bool != 0) {
		bool var_83_bool; object var_84_object;
		var_73_object = var_84_object;
		func_1176(var_83_bool, var_84_object);
		if(var_83_bool != 0)
			var_79_bool = true;
	}
	if(var_79_bool != 0) {
		var_72_bool = false;
		return 4;
	}
	object var_76_object;
	@GetScene(var_76_object);
	if(var_76_object == null) {
		var_72_bool = false;
		return 4;
	}
	object var_77_object;
	var_73_object->GetScene(var_77_object);
	if(var_76_object != var_77_object) {
		var_72_bool = false;
		return 4;
	}
	var_72_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1436(bool var_14_bool, string var_15_string, string var_16_string)
{
	object var_18_object;
	@FindActor(var_18_object, var_15_string);
	if(var_18_object == null)
		var_14_bool = false;
	@Trigger(var_18_object, var_16_string);
	var_14_bool = true;
}
EMIT "Stack[-1] = 0";


void func_799(object var_0_object, int var_17_int, object var_18_object)
{
	var_0_object = var_18_object;
	bool var_28_bool; object var_29_object;
	var_18_object = var_29_object;
	func_1319(var_28_bool, var_29_object);
	if(!var_28_bool) { //@nz
		var_17_int = -2;
		return 8;
	}
	object var_24_object;
	@CreateDialog(var_24_object);
	int var_69_int;
	func_1533(var_69_int);
	var_24_object->SetNPCName(var_69_int);
	string var_70_string;
	func_1535(var_70_string);
	var_24_object->SetPhoto(var_70_string);
	int var_71_int;
	func_1516(var_71_int);
	var_24_object->SetPlayerName(var_71_int);
	bool var_25_bool;
	@IsOverrideActive(var_25_bool);
	if(var_25_bool != 0) {
		var_17_int = -2;
		return 8;
	}
	@DoDialog(var_24_object);
	object var_80_object; object var_81_object;
	var_18_object = var_80_object;
	var_24_object = var_81_object;
	TaskCall(4);
	func_862(var_82_object, var_83_object, var_84_string, var_85_bool, var_80_object, var_81_object);
	TaskReturn();
	bool var_27_bool;
	var_24_object->IsDialogEnd(var_27_bool);
	
	for(;;) {
		var_114_bool = !var_27_bool; //@nz
		if(var_114_bool == 0) goto Label_851;
		@sync();
		var_24_object->IsDialogEnd(var_27_bool);
	}
	
Label_851:
	object var_115_object;
	var_18_object = var_115_object;
	func_1375();
	@StopDialog(var_24_object);
	var_24_object->GetReturnValue(-1);
	int var_26_int = var_17_int;
}
EMIT "Stack[-4] = 0";


void func_1319(bool var_28_bool, object var_29_object)
{
	cvector var_39_cvector;
	var_29_object->GetPosition(var_39_cvector);
	float var_38_float;
	var_29_object->GetEyesHeight(var_38_float);
	var_46_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (var_46_float + var_38_float);
	cvector var_40_cvector;
	@GetPosition(var_40_cvector);
	@GetEyesHeight(var_38_float);
	var_47_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (var_47_float + var_38_float);
	cvector var_41_cvector = var_39_cvector - var_40_cvector;
	var_48_float = GetByIndex(var_41_cvector, 1);
	SetByIndex(var_41_cvector, 1) = (float)0;
	var_50_float = sqrt(var_41_cvector | var_41_cvector);
	var_41_cvector /= var_50_float;
	cvector var_42_cvector = -var_41_cvector;
	cvector var_53_cvector;
	func_1404(var_53_cvector, (var_42_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_43_cvector = ((var_41_cvector * 70) + (var_53_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_45_bool;
	@IsOverrideActive(var_45_bool);
	if(var_45_bool != 0)
		var_28_bool = false;
	@StopWorld();
	@CameraTransit((var_40_cvector + var_43_cvector), var_42_cvector);
	var_66_float = GetByIndex(var_43_cvector, 0);
	var_67_float = GetByIndex(var_43_cvector, 2);
	@Rotate(var_66_float, var_67_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_28_bool = true;
}


void func_684(object var_25_object)
{
	cvector var_36_cvector; cvector var_37_cvector; cvector var_38_cvector; cvector var_39_cvector; string var_40_string; object var_41_object; bool var_42_bool; bool var_43_bool; float var_44_float; cvector var_45_cvector;
	if(var_25_object == null) {
		func_771("fdie");
	} else {
		var_25_object->GetPosition(var_36_cvector);
		@GetPosition(var_37_cvector);
		@GetDirection(var_38_cvector);
		var_39_cvector = var_37_cvector - var_36_cvector;
		var_50_float = GetByIndex(var_39_cvector, 0);
		var_51_float = GetByIndex(var_38_cvector, 0);
		var_53_float = GetByIndex(var_39_cvector, 2);
		var_54_float = GetByIndex(var_38_cvector, 2);
		if(((var_50_float * var_51_float) + (var_53_float * var_54_float)) >= 0)
			var_40_string = "fdie";
		else
			var_40_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_25_object = var_41_object;
		var_61_bool = IsFuncExist(var_25_object, "GetScriptProperty", 2);
		if(var_61_bool != 0) {
			var_25_object->HasScriptProperty(var_42_bool, "Owner");
			if(var_42_bool != 0) {
				var_25_object->GetScriptProperty(var_41_object, "Owner");
				if(var_41_object == null)
					var_25_object = var_41_object;
			}
		}
		var_68_bool = IsFuncExist(var_41_object, "@GetEyesHeight", 1);
		if(var_68_bool != 0) {
			var_41_object->GetEyesHeight(var_44_float);
			var_45_cvector = [0.0, 0.0, 0.0];
			var_69_float = GetByIndex(var_45_cvector, 1);
			var_44_float = var_69_float;
			SetByIndex(var_45_cvector, 1) = var_69_float;
			@LookAsync(var_25_object, "head", var_45_cvector);
			var_43_bool = true;
		} else {
			var_43_bool = false;

		}
		@PlayAnimation("all", var_40_string);
		@WaitForAnimEnd();
		if(var_43_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_40_string);
		@RemoveEnvelope();
		var_41_object = null;
	}
	
}


void func_442(object var_0_object)
{
	@Face(var_0_object);
	@PlayAnimation("all", "bjump");
	cvector var_226_cvector;
	var_0_object->GetPFPosition(var_226_cvector); //@t
	cvector var_227_cvector;
	@GetPFPosition(var_227_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	@SetSpeed([0.0, 0.0, 0.0]);
}


void func_1087(void)
{
	@StopGroup0();
	@Stop();
}


void func_1471(object var_15_object)
{
	bool var_17_bool;
	@AddItem(var_17_bool, "revolver_ammo", 0, 2);
	@AddItem(var_17_bool, "alpha_pills", 0, 2);
	object var_24_object;
	var_15_object = var_24_object;
	TaskCall(2);
	func_663(var_24_object);
	TaskReturn();
}


void func_1217(bool var_68_bool, object var_69_object)
{
	object var_73_object;
	var_69_object = var_73_object;
	bool var_72_bool;
	func_1181(var_72_bool, var_73_object);
	if(!var_72_bool) { //@nz
		var_68_bool = false;
		return 2;
	}
	bool var_90_bool; object var_91_object;
	func_1100(var_90_bool, var_91_object, "noaccess");
	if(!var_90_bool) { //@nz
		var_68_bool = true;
		return 2;
	}
	int var_71_int;
	var_91_object->GetProperty("noaccess", var_71_int);
	var_68_bool = var_71_int == 0;
}


// @pe
void func_1092(string var_307_string, int var_308_int)
{
	if(var_308_int == 1)
		var_307_string = "fire";
	var_307_string = "phys";
}


// @pe
void func_968(object var_16_object)
{
	object var_18_object;
	var_16_object = var_18_object;
	TaskCall(3);
	int var_17_int;
	func_799(var_19_object, var_17_int, var_18_object);
	TaskReturn();
}


void func_1100(bool var_90_bool, object var_91_object, string var_92_string)
{
	var_97_bool = IsFuncExist(var_91_object, "HasProperty", 2);
	if(!var_97_bool) { //@nz
		var_90_bool = false;
		return 2;
	}
	bool var_94_bool;
	var_91_object->HasProperty(var_92_string, var_94_bool);
	var_94_bool = var_90_bool;
}


void func_461(object var_0_object, bool var_185_bool)
{
	bool var_187_bool;
	var_190_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_190_bool != 0) {
		var_0_object->IsAttacking(var_187_bool); //@t
		var_187_bool = var_185_bool;
	}
	var_185_bool = false;
}


void func_983(void)
{
}


void func_472(int var_2_int, int var_4_int)
{
	int var_250_int;
	if(!var_2_int) //@nz
		return 4;
	if(var_4_int != 0) {
		if((var_4_int + -1) > 0)
			return 4;
	}
	float var_249_float;
	@rand(var_249_float);
	float var_256_float;
	func_510(var_256_float);
	if(var_249_float < var_256_float) {
		@irand(var_250_int, var_2_int);
		@Speak("attack" + (var_250_int + 1));
		int var_261_int;
		func_508(var_261_int);
		var_4_int = var_261_int;
	}
}


void func_1112(float var_279_float, object var_280_object, float var_281_float, int var_282_int)
{
	int var_292_int; int var_294_int;
	object var_299_object;
	var_280_object = var_299_object;
	bool var_298_bool;
	func_1100(var_298_bool, var_299_object, "health");
	if(!var_298_bool) //@nz
		var_279_float = 0.0;
	bool var_302_bool; object var_303_object;
	func_1100(var_302_bool, var_303_object, "armor");
	if(!var_302_bool) //@nz
		var_292_int = 0;
	else
		var_303_object->GetProperty("armor", var_292_int);
	string var_307_string; int var_308_int;
	var_282_int = var_308_int;
	func_1092(var_307_string, var_308_int);
	string var_293_string = "armor_" + var_307_string;
	bool var_311_bool; object var_312_object; string var_313_string;
	var_280_object = var_312_object;
	func_1100(var_311_bool, var_312_object, var_313_string);
	if(!var_311_bool) //@nz
		var_294_int = 0;
	else
		var_280_object->GetProperty(var_313_string, var_294_int);

	float var_315_float;
	func_1418(var_315_float, ((var_292_int + var_294_int) / 100.0), (float)1);
	float var_295_float;
	var_315_float = var_295_float;
	float var_296_float;
	var_280_object->GetProperty("health", var_296_float);
	float var_325_float;
	func_1425(var_325_float, (var_296_float - (var_281_float * (1 - var_295_float))), (float)0, (float)1);
	var_280_object->SetProperty("health", var_325_float);
	float var_297_float = var_279_float;
	
}


void func_345(bool var_351_bool, float var_352_float)
{
	float var_355_float; bool var_356_bool;
	@rand(var_355_float);
	if(var_355_float < var_352_float) {

		for(;;) {
			@IsAnimationPlaying(var_356_bool);
			if(!var_356_bool) { //@nz
			} else {
				bool var_359_bool;
				func_409(var_356_bool, var_359_bool);
				if(var_359_bool != 0) {
					var_351_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_351_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
}


void func_1241(object var_18_object, int var_19_int)
{
	object var_31_object; object var_32_object; cvector var_33_cvector; float var_34_float; string var_40_string;
	bool var_41_bool = false;
	if(var_19_int != 4) {
		if(var_19_int != 5)
			var_41_bool = true;
	}
	if(var_41_bool != 0) {
		@GetScene(var_31_object);
		@GetPosition(var_33_cvector);
		@GetEyesHeight(var_34_float);
		var_46_float = GetByIndex(var_33_cvector, 1);
		SetByIndex(var_33_cvector, 1) = (var_46_float + (var_34_float / 2));
		@AddActorByType(var_32_object, "scripted", var_31_object, var_33_cvector, [0.0, 0.0, 1.0], "blood.xml");
		var_32_object = null;
		var_31_object = null;
	}
	if(var_18_object == null)
		return 20;
	int var_35_int;
	@GetSecondaryAnimationType(var_35_int);
	if(var_35_int < 0)
		return 20;
	cvector var_36_cvector;
	var_18_object->GetPosition(var_36_cvector);
	cvector var_37_cvector;
	@GetPosition(var_37_cvector);
	cvector var_38_cvector;
	@GetDirection(var_38_cvector);
	cvector var_39_cvector = var_37_cvector - var_36_cvector;
	var_55_float = GetByIndex(var_39_cvector, 0);
	var_56_float = GetByIndex(var_38_cvector, 0);
	var_58_float = GetByIndex(var_39_cvector, 2);
	var_59_float = GetByIndex(var_38_cvector, 2);
	if(((var_55_float * var_56_float) + (var_58_float * var_59_float)) >= 0)
		var_40_string = "fhit";
	else
		var_40_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_40_string + "1"), (var_40_string + "2"), -10);
	
}


// @pe
void func_862(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_80_object, object var_81_object)
{
	var_0_object = var_81_object;
	var_1_int = var_80_object;
	var_3_bool = false;
	if(1 != 0) {
		func_915(var_81_object, "Neutral");
		var_0_object->SetMessage(7526); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(7527, -1, 8309); //@t
		goto Label_885;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x362";
	}
Label_885:
	bool var_106_bool;
	func_1537(var_106_bool);
	if(var_106_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_bool != 0) {
			} else {
				func_1379(var_2_int);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_bool != 0) {
				goto Label_914;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_914:
		return 0;

	}
	
}


// @pe
void func_1375(void)
{
	@CameraSwitchToNormal();
}


void func_226(object var_0_object, float var_265_float, int var_266_int)
{
	object var_270_object; float var_271_float; float var_272_float;
	@GetVictim((var_265_float * 0.9), var_270_object);
	@ReportAttack(var_0_object);
	if(var_270_object == var_0_object) {
		float var_276_float; object var_277_object; int var_278_int;
		var_270_object = var_277_object;
		var_266_int = var_278_int;
		func_15(var_278_int);
		var_276_float = var_271_float;
		float var_279_float; object var_280_object; float var_281_float; int var_282_int;
		var_270_object = var_280_object;
		int var_283_int; object var_284_object; int var_285_int;
		var_270_object = var_284_object;
		var_266_int = var_285_int;
		func_18(var_285_int);
		var_283_int = var_282_int;
		func_1112(var_279_float, var_280_object, var_281_float, var_282_int);
		var_279_float = var_272_float;
		int var_332_int;
		func_504(var_332_int);
		@ReportHit(var_0_object, var_332_int, var_272_float, var_281_float);
		object var_333_object; float var_334_float;
		var_270_object = var_333_object;
		var_272_float = var_334_float;
		func_506();
	}
}
EMIT "Stack[-3] = 0";


void func_1379(string var_91_string)
{
	@Trace("playing " + var_91_string);
	float var_94_float;
	float var_95_float;
	@lshGetAnimTimes(var_91_string, var_94_float, var_95_float);
	@lshPlayAnimation(var_94_float, var_95_float);
	@Trace("start: " + var_94_float);
	@Trace("end: " + var_95_float);
}


void func_1516(int var_71_int)
{
	int var_73_int;
	@GetVariable("player", var_73_int);
	if(var_73_int == 0) {
		var_71_int = 200001;
		return 2;
	EMIT "GOTO 0x5fb";
	}
	if(var_73_int == 1) {
		var_71_int = 200002;
		return 2;
	}
	var_71_int = 200003;
}


void func_508(int var_261_int)
{
	var_261_int = 1;
}


void func_1007(bool var_15_bool)
{
	var_15_bool = true;
}


void func_369(object var_0_object, bool var_193_bool, float var_194_float)
{
	bool var_200_bool; cvector var_201_cvector; cvector var_202_cvector; cvector var_203_cvector; float var_204_float;
	
	for(;;) {
		@IsAnimationPlaying(var_200_bool);
		if(!var_200_bool) //@nz
			break;
		bool var_206_bool;
		func_409(var_204_float, var_206_bool);
		if(var_206_bool != 0) {
			var_193_bool = true;
			return 10;
		}
		bool var_231_bool;
		func_1217(var_231_bool, var_0_object);
		if(!var_231_bool) { //@nz
			var_193_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_201_cvector); //@t
		@GetPFPosition(var_202_cvector);
		var_203_cvector = var_201_cvector - var_202_cvector;
		var_204_float = var_203_cvector | var_203_cvector;
		if(var_204_float < (var_194_float * var_194_float)) {
			bool var_236_bool; float var_237_float;
			var_194_float = var_237_float;
			func_265(var_203_cvector, var_204_float, var_236_bool, var_237_float);
			var_193_bool = true;
			return 10;
		}
		@sync();
	}
	var_193_bool = false;
}


void func_1009(object var_0_object, int var_1_int)
{
	int var_19_int; bool var_20_bool; cvector var_21_cvector; object var_22_object;
	@GetPFPosition(var_1_int);
	@GetDirection(var_0_object);
	
	for(;;) {
		@irand(var_19_int, 60);
		@Sleep((var_19_int + 30), var_20_bool);
		if(var_20_bool != 0) {
			func_983();
		} else {
		for(;;) {
			@GetPFPosition(var_21_cvector);
			float var_27_float; cvector var_29_cvector;
			var_21_cvector = var_29_cvector;
			func_1414(var_27_float, var_1_int, var_29_cvector);
			if(var_27_float > 40000) {
				@FindPathTo(var_22_object, var_1_int);
				if(var_22_object != null) {
					@RotatePath(var_22_object, var_20_bool);
					if(!var_20_bool) { //@nz
					} else {
					@FollowPath(var_22_object, false, var_20_bool);
					if(!var_20_bool) { //@nz
						goto Label_1084;
					}
					var_38_float = GetByIndex(var_0_object, 0);
					var_39_float = GetByIndex(var_0_object, 2);
					@Rotate(var_38_float, var_39_float, var_20_bool);
					if(!var_20_bool) { //@nz
						goto Label_1084;
					}
					@WaitForAnimEnd(var_20_bool);
					if(!var_20_bool) { //@nz
						goto Label_1084;
					}
					goto Label_1085;
				EMIT "GOTO 0x42d";
				}
				@Sleep(1);
				var_22_object = null;
				goto Label_1084;
			}
			var_43_float = GetByIndex(var_0_object, 0);
			var_44_float = GetByIndex(var_0_object, 2);
			@Rotate(var_43_float, var_44_float, var_20_bool);
			if(!var_20_bool) { //@nz
				goto Label_1084;
			}
			@WaitForAnimEnd(var_20_bool);
			if(!var_20_bool) { //@nz
				goto Label_1084;
			}
			goto Label_1085;
			}
		Label_1084:
		}
		}
	Label_1085:
	}
	
}
EMIT "Return(); Pop(8)";


void func_1397(void)
{
	bool var_17_bool;
	func_1537(var_17_bool);
	if(var_17_bool != 0)
		@lshStopSpeech();
}


void func_504(int var_332_int)
{
	var_332_int = 0;
}


// @pe
void func_506(void)
{
}


void func_1404(cvector var_53_cvector, cvector var_54_cvector)
{
	float var_57_float = sqrt(var_54_cvector | var_54_cvector);
	if(var_57_float < 0.000001)
		var_53_cvector = [0.0, 0.0, 0.0];
	var_53_cvector = var_54_cvector / var_57_float;
}


void func_1533(int var_69_int)
{
	var_69_int = 4031;
}


void func_510(float var_256_float)
{
	var_256_float = 0.5;
}


void func_1535(string var_70_string)
{
	var_70_string = "ui/NPC_Black.png";
}


