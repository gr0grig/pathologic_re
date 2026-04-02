// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void OnTimer(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, int var_7_int, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, cvector var_13_cvector, cvector var_14_cvector, bool var_15_bool)
	{
		if(var_15_bool != 0)
			return 0;
		bool var_18_bool;
		func_652(var_18_bool, var_1_int);
		if(!var_18_bool) //@nz
			var_0_object = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(object actor, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, cvector var_13_cvector, cvector var_14_cvector, bool var_15_bool)
	{
		@RequestClearPath(var_15_bool);
	}

	// @pe
	void OnDeath(object actor, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, cvector var_13_cvector, cvector var_14_cvector, bool var_15_bool)
	{
		func_636(var_15_bool);
		object var_17_object;
		var_15_bool = var_17_object;
		func_1621();
	}

}


task task_2
{
	void OnUse(object actor, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, cvector var_13_cvector, cvector var_14_cvector, bool var_15_bool)
	{
		bool var_17_bool;
		@IsOverrideActive(var_17_bool);
		if(!var_17_bool) //@nz
			@WorkWithCorpse(var_15_bool);
	}

	// @pe
	void OnHit(object actor, int iHitType, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, float var_9_float, float var_10_float, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, cvector var_16_cvector, cvector var_17_cvector, bool var_18_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, string var_8_string, object var_9_object, object var_10_object, object var_11_object, string var_12_string, bool var_13_bool, cvector var_14_cvector, cvector var_15_cvector, bool var_16_bool)
	{
	}

	// @pe
	void OnDeath(object actor, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, cvector var_13_cvector, cvector var_14_cvector, bool var_15_bool)
	{
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, int var_12_int, int var_13_int, cvector var_14_cvector, cvector var_15_cvector, bool var_16_bool)
	{
		if(1 != 0) {
			func_1543();
			if(var_15_cvector == 9981) {
				func_920(var_16_bool, "Neutral");
				var_0_object->SetMessage(9102); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9103, 9989, 9982); //@t
				var_0_object->AddReply(9104, 9985, 9983); //@t
				return 0;
			}
			if(var_15_cvector == 9985) {
				func_920(var_16_bool, "Neutral");
				var_0_object->SetMessage(9106); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9107, 9984, 9986); //@t
				return 0;
			}
			if(var_15_cvector == 9984) {
				func_920(var_16_bool, "Neutral");
				var_0_object->SetMessage(9105); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9108, 9988, 9987); //@t
				return 0;
			}
			if(var_15_cvector == 9988) {
				func_920(var_16_bool, "Neutral");
				var_0_object->SetMessage(9109); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9112, 9992, 9991); //@t
				return 0;
			}
			if(var_15_cvector == 9989) {
				func_920(var_16_bool, "Neutral");
				var_0_object->SetMessage(9110); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9111, 9992, 9990); //@t
				return 0;
			}
			if(var_15_cvector == 9992) {
				func_920(var_16_bool, "Neutral");
				var_0_object->SetMessage(9113); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9114, 9994, 9993); //@t
				var_0_object->AddReply(9116, -1, 9995); //@t
				return 0;
			}
			if(var_15_cvector == 9994) {
				func_920(var_16_bool, "Neutral");
				var_0_object->SetMessage(9115); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9117, -1, 9997); //@t
				var_0_object->AddReply(9118, 9999, 9998); //@t
				return 0;
			}
			if(var_15_cvector == 9999) {
				func_920(var_16_bool, "Neutral");
				var_0_object->SetMessage(9119); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9120, -1, 10000); //@t
				return 0;
			}
			var_3_bool = true;
			bool var_98_bool;
			func_1648(var_98_bool);
			if(var_98_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x3a9";
	
	}

}


maintask task_5
{
	void init(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector, bool var_14_bool)
	{
		var_2_int = true;
		func_1155(var_13_cvector, var_14_bool);
	}

	// @pe
	void OnUse(object actor, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector, bool var_14_bool, object var_15_object)
	{
		bool var_16_bool;
		func_1119(var_15_object, var_16_bool);
		if(var_16_bool != 0) {
			func_1233();
			object var_17_object;
			func_1121(var_17_object, var_17_object);
		}
	}

	void OnAttacked(object actor, int iDamageType, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector, bool var_14_bool, object var_15_object)
	{
		bool var_17_bool;
		@IsPlayerActor(var_15_object, var_17_bool);
		if(var_17_bool != 0) {
			TaskCall(0);
			func_0();
			TaskReturn();
		}
	}

}


// @pe
void OnHit(object actor, int iHitType, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector, bool var_14_bool, object var_15_object, int var_16_int, float var_17_float, float var_18_float)
{
	object var_19_object;
	var_15_object = var_19_object;
	int var_20_int;
	var_16_int = var_20_int;
	float var_21_float;
	var_17_float = var_21_float;
	func_1387(var_20_int, var_21_float);
}


void OnPropertyChange(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector, bool var_14_bool, object var_15_object, string var_16_string)
{
	float var_18_float;
	if(var_16_string == "health") {
		@GetProperty("health", var_18_float);
		if(var_18_float <= 0)
			@SignalDeath(var_15_object);
	}
}


// @pe
void OnDeath(object actor, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector, bool var_14_bool, object var_15_object)
{
	object var_16_object;
	var_15_object = var_16_object;
	func_1582(var_16_object);
}


void func_512(object var_0_object, int var_1_int, bool var_111_bool, object var_112_object, float var_113_float, float var_114_float, bool var_115_bool, bool var_116_bool)
{
	bool var_127_bool; object var_129_object; cvector var_130_cvector; cvector var_131_cvector; float var_133_float; object var_134_object;
	var_0_object = false;
	var_1_int = var_112_object;
	bool var_128_bool;
	var_116_bool = var_128_bool;
	
	for(;;) {
		bool var_135_bool; object var_136_object;
		var_112_object = var_136_object;
		func_652(var_135_bool, var_136_object);
		if(!var_135_bool) { //@nz
			var_111_bool = false;
			return 16;
		}
		var_112_object->GetPosition(var_130_cvector);
		@GetPosition(var_131_cvector);
		var_133_float = (var_130_cvector - var_131_cvector) | (var_130_cvector - var_131_cvector);
		bool var_140_bool = false;
		if(var_114_float > 0) {
			if(var_133_float > (var_114_float * var_114_float))
				var_140_bool = true;
		}
		if(var_140_bool != 0) {
			@Stop();
			var_111_bool = false;
			return 16;
		}
		if(var_133_float > (var_113_float * var_113_float)) {
			var_112_object->GetPFPosition(var_130_cvector);
			@FindPathTo(var_134_object, var_130_cvector);
			if(var_134_object != null) {
				var_134_object = var_129_object;
				var_134_object = null;
			}
			if(var_129_object != null) {
				if(var_128_bool == 0) goto Label_565;
				var_128_bool = false;
				@RotatePath(var_129_object, var_127_bool);
				if(!var_127_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_153_string;
						func_659(var_153_string);
						string var_154_string;
						func_661(var_154_string);
						@FollowPath(var_129_object, var_115_bool, var_127_bool, var_153_string, var_154_string);
						if(!var_127_bool) { //@nz
							if(var_0_object == 0) goto Label_584;
							var_129_object = null;
						}
					EMIT "GOTO 0x249";

					Label_584:
						} else {
					var_129_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_127_bool);
					if(!var_127_bool) { //@nz
						if(var_0_object != 0) {
							var_129_object = null;
							goto Label_612;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_612;
		}
			var_134_object = null;
			goto Label_610;

		Label_610:
			var_129_object = null;

		}
	Label_612:
		for(;;) {
			var_111_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_0(void)
{
	object var_25_object;
	@FindActor(var_25_object, "player");
	if(!var_25_object) { //@nz
	}
	object var_28_object;
	object var_24_object;
	func_21(var_20_int, var_21_int, var_22_bool, var_23_int, var_24_object, var_28_object, var_28_object, true, 180.0);
}
EMIT "Stack[-1] = 0";


void func_636(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_771(string var_48_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_48_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_48_string);
	@RemoveEnvelope();
}


void func_1155(object var_0_object, int var_1_int)
{
	int var_19_int; bool var_20_bool; cvector var_21_cvector; object var_22_object;
	@GetPFPosition(var_1_int);
	@GetDirection(var_0_object);
	
	for(;;) {
		@irand(var_19_int, 60);
		@Sleep((var_19_int + 30), var_20_bool);
		if(var_20_bool != 0) {
			func_1130();
		} else {
		for(;;) {
			@GetPFPosition(var_21_cvector);
			float var_27_float; cvector var_29_cvector;
			var_21_cvector = var_29_cvector;
			func_1560(var_27_float, var_1_int, var_29_cvector);
			if(var_27_float > 40000) {
				@FindPathTo(var_22_object, var_1_int);
				if(var_22_object != null) {
					@RotatePath(var_22_object, var_20_bool);
					if(!var_20_bool) { //@nz
					} else {
					@FollowPath(var_22_object, false, var_20_bool);
					if(!var_20_bool) { //@nz
						goto Label_1230;
					}
					var_38_float = GetByIndex(var_0_object, 0);
					var_39_float = GetByIndex(var_0_object, 2);
					@Rotate(var_38_float, var_39_float, var_20_bool);
					if(!var_20_bool) { //@nz
						goto Label_1230;
					}
					@WaitForAnimEnd(var_20_bool);
					if(!var_20_bool) { //@nz
						goto Label_1230;
					}
					goto Label_1231;
				EMIT "GOTO 0x4bf";
				}
				@Sleep(1);
				var_22_object = null;
				goto Label_1230;
			}
			var_43_float = GetByIndex(var_0_object, 0);
			var_44_float = GetByIndex(var_0_object, 2);
			@Rotate(var_43_float, var_44_float, var_20_bool);
			if(!var_20_bool) { //@nz
				goto Label_1230;
			}
			@WaitForAnimEnd(var_20_bool);
			if(!var_20_bool) { //@nz
				goto Label_1230;
			}
			goto Label_1231;
			}
		Label_1230:
		}
		}
	Label_1231:
	}
	
}
EMIT "Return(); Pop(8)";


void func_1543(void)
{
	bool var_18_bool;
	func_1648(var_18_bool);
	if(var_18_bool != 0)
		@lshStopSpeech();
}


void func_265(object var_0_object, int var_1_int, bool var_238_bool, float var_239_float)
{
	int var_242_int;
	@irand(var_242_int, var_1_int);
	var_242_int += 1;
	@Face(var_0_object);
	@SetAttackState(true);
	@PlayAnimation("all", ("attack_begin" + var_242_int));
	@WaitForAnimEnd();
	bool var_243_bool;
	func_472(var_242_int, var_243_bool);
	bool var_264_bool;
	func_1363(var_264_bool, var_0_object);
	if(!var_264_bool) { //@nz
		@StopAsync();
		var_238_bool = false;
		return 4;
	}
	float var_267_float; int var_268_int;
	var_239_float = var_267_float;
	var_242_int = var_268_int;
	func_226(var_243_bool, var_267_float, var_268_int);
	@HasAnimation(var_243_bool, "all", ("attack_middle" + var_242_int));
	if(var_243_bool != 0) {
		@PlayAnimation("all", ("attack_middle" + var_242_int));
		@WaitForAnimEnd();
		bool var_344_bool;
		func_1363(var_344_bool, var_0_object);
		if(!var_344_bool) { //@nz
			@StopAsync();
			var_238_bool = false;
			return 4;
		}
		float var_347_float; int var_348_int;
		var_239_float = var_347_float;
		var_242_int = var_348_int;
		func_226(var_243_bool, var_347_float, var_348_int);
	}
	@SetAttackState(false);
	@PlayAnimation("all", ("attack_end" + var_242_int));
	bool var_353_bool;
	func_345(var_353_bool, 0.75);
	@StopAsync();
	var_238_bool = true;
}


// @pe
void func_652(bool var_135_bool, object var_136_object)
{
	object var_138_object;
	var_136_object = var_138_object;
	bool var_137_bool;
	func_1363(var_137_bool, var_138_object);
	var_137_bool = var_135_bool;
}


void func_1550(cvector var_54_cvector, cvector var_55_cvector)
{
	float var_58_float = sqrt(var_55_cvector | var_55_cvector);
	if(var_58_float < 0.000001)
		var_54_cvector = [0.0, 0.0, 0.0];
	var_54_cvector = var_55_cvector / var_58_float;
}


// @pe
void func_15(float var_278_float)
{
	var_278_float = 0.3;
}


// @pe
void func_18(int var_285_int)
{
	var_285_int = 0;
}


void func_659(string var_153_string)
{
	var_153_string = "walk";
}


void func_21(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, object var_28_object, bool var_29_bool, float var_30_float, bool var_117_bool)
{
	bool var_41_bool; bool var_42_bool; float var_43_float; cvector var_44_cvector; cvector var_45_cvector; bool var_46_bool; bool var_47_bool; float var_49_float; float var_50_float;
	var_1_int = 0;
	
	for(;;) {
		@HasAnimation(var_41_bool, "all", ("attack_begin" + (var_1_int + 1)));
		if(!var_41_bool) { //@nz
		} else {
			var_1_int += 1;
		}
		var_2_int = 0;

		for(;;) {
			@IsExisting3DSound(var_42_bool, ("attack" + (var_2_int + 1)));
			if(!var_42_bool) { //@nz
			} else {
									var_2_int += 1;
			}
			var_4_int = 0;
			var_64_bool = IsFuncExist(var_28_object, "@GetAttackDistance", 1);
			if(var_64_bool != 0) {
				var_28_object->GetAttackDistance(var_43_float);
				var_43_float += 50;
			} else {
								var_30_float = var_43_float;

			}
			if(var_43_float >= 150)
				var_43_float = 150;
			var_3_bool = false;
			var_0_object = var_28_object;
			@IsPlayerActor(var_0_object, var_46_bool);
			if(var_29_bool != 0)
				var_47_bool = false;
			else
				var_47_bool = true;

			for(;;) {
				bool var_69_bool = false;
				bool var_70_bool;
				func_1363(var_70_bool, var_0_object);
				if(var_70_bool != 0) {
					if(!var_3_bool) //@nz
						var_69_bool = true;
				}
				if(var_69_bool != 0) {
					var_0_object->GetPFPosition(var_44_cvector); //@t
					@GetPFPosition(var_45_cvector);
					var_49_float = (var_44_cvector - var_45_cvector) | (var_44_cvector - var_45_cvector);
					if(var_49_float >= ((400.0 + var_43_float) * (400.0 + var_43_float))) {
						bool var_111_bool; float var_113_float;
						var_43_float = var_113_float;
						TaskCall(1);
						func_512(var_117_bool, var_118_object, var_111_bool, var_0_object, var_113_float, 10000.0, true, false);
						TaskReturn();
						if(!var_117_bool) { //@nz
						} else {
							var_47_bool = false;
					} else {
					if(var_49_float >= (var_30_float * var_30_float)) {
						if(!var_47_bool) { //@nz
							func_1454(var_0_object);
							@PlayAnimation("all", "attack_on");
							@WaitForAnimEnd();
							@StopAsync();
							var_47_bool = true;
						}
						@rand(var_50_float);
						bool var_184_bool;
						var_186_bool = var_50_float < 0.6;
						if(var_186_bool != 1) {
							bool var_187_bool;
							func_461(true, var_187_bool);
							if(var_187_bool != 1)
								var_184_bool = false;
						}
						if(var_184_bool != 0) {
							@Face(var_0_object);
							@PlayAnimation("all", "attack_stay");
							bool var_195_bool; float var_196_float;
							func_369(var_50_float, var_195_bool, var_196_float);
							@StopAsync();
						} else {
							@Face(var_0_object);
							@PlayAnimation("all", "fjump");
							@WaitForAnimEnd();
							@SetSpeed([0.0, 0.0, 0.0]);
							@Stop();
							@StopAsync();
							bool var_365_bool;
							func_461(var_50_float, var_365_bool);
							var_366_bool = !var_365_bool; //@nz
							if(var_366_bool == 0) goto Label_199;
							bool var_367_bool;
							func_1363(var_367_bool, var_0_object);
							if(!var_367_bool) { //@nz
								goto Label_209;
							}
							var_0_object->GetPFPosition(var_44_cvector); //@t
							@GetPFPosition(var_45_cvector);
							var_49_float = (var_44_cvector - var_45_cvector) | (var_44_cvector - var_45_cvector);
							if(!(var_49_float < (var_196_float * var_196_float))) goto Label_199;
							bool var_372_bool; float var_373_float;
							var_30_float = var_373_float;
							func_265(var_49_float, var_50_float, var_372_bool, var_373_float);
							var_374_bool = !var_372_bool; //@nz
							if(var_374_bool == 0) goto Label_199;
							goto Label_209;
					}
						bool var_375_bool; float var_376_float;
						var_30_float = var_376_float;
						func_265(var_49_float, var_50_float, var_375_bool, var_376_float);
						if(!var_375_bool) { //@nz
							goto Label_209;
						}
						var_47_bool = true;

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
				if(var_46_bool != 0)
					@Sleep(2.0);
				return 20;

			}

		}

	}
}


void func_661(string var_154_string)
{
	var_154_string = "run";
}


// @pe
void func_663(object var_25_object)
{
	object var_26_object;
	var_25_object = var_26_object;
	func_684(var_26_object);
	@SetRTEnvelope(50, 40);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1560(float var_27_float, cvector var_28_cvector, cvector var_29_cvector)
{
	var_27_float = (var_29_cvector - var_28_cvector) | (var_29_cvector - var_28_cvector);
}


void func_409(object var_0_object, bool var_208_bool)
{
	cvector var_214_cvector; cvector var_215_cvector;
	bool var_219_bool;
	func_1363(var_219_bool, var_0_object);
	if(!var_219_bool) { //@nz
		var_208_bool = false;
		return 10;
	}
	bool var_222_bool;
	float var_218_float;
	func_461(var_218_float, var_222_bool);
	if(var_222_bool != 0) {
		var_0_object->GetPFPosition(var_214_cvector); //@t
		@GetPFPosition(var_215_cvector);
		var_0_object->GetAttackDistance(var_218_float); //@t
		var_218_float += 50;
		if(((var_214_cvector - var_215_cvector) | (var_214_cvector - var_215_cvector)) <= (var_218_float * var_218_float)) {
			func_442(var_218_float);
			var_208_bool = true;
			return 10;
		}
	}
	var_208_bool = false;
}


// @pe
void func_920(int var_2_int, string var_88_string)
{
	bool var_89_bool;
	func_1648(var_89_bool);
	if(!var_89_bool) //@nz
		return 0;
	if(var_88_string == var_2_int)
		return 0;
	string var_92_string;
	func_1525(var_92_string);
	var_2_int = var_92_string;
}


// @pe
void func_1564(float var_317_float, float var_318_float, float var_319_float)
{
	if(var_318_float < var_319_float)
		var_318_float = var_317_float;
	else
		var_319_float = var_317_float;
	
}


void func_799(object var_0_object, int var_18_int, object var_19_object)
{
	var_0_object = var_19_object;
	bool var_29_bool; object var_30_object;
	var_19_object = var_30_object;
	func_1465(var_29_bool, var_30_object);
	if(!var_29_bool) { //@nz
		var_18_int = -2;
		return 8;
	}
	object var_25_object;
	@CreateDialog(var_25_object);
	int var_70_int;
	func_1644(var_70_int);
	var_25_object->SetNPCName(var_70_int);
	string var_71_string;
	func_1646(var_71_string);
	var_25_object->SetPhoto(var_71_string);
	int var_72_int;
	func_1627(var_72_int);
	var_25_object->SetPlayerName(var_72_int);
	bool var_26_bool;
	@IsOverrideActive(var_26_bool);
	if(var_26_bool != 0) {
		var_18_int = -2;
		return 8;
	}
	@DoDialog(var_25_object);
	object var_81_object; object var_82_object;
	var_19_object = var_81_object;
	var_25_object = var_82_object;
	TaskCall(4);
	func_862(var_83_object, var_84_object, var_85_string, var_86_bool, var_81_object, var_82_object);
	TaskReturn();
	bool var_28_bool;
	var_25_object->IsDialogEnd(var_28_bool);
	
	for(;;) {
		var_118_bool = !var_28_bool; //@nz
		if(var_118_bool == 0) goto Label_851;
		@sync();
		var_25_object->IsDialogEnd(var_28_bool);
	}
	
Label_851:
	object var_119_object;
	var_19_object = var_119_object;
	func_1521();
	@StopDialog(var_25_object);
	var_25_object->GetReturnValue(-1);
	int var_27_int = var_18_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1571(float var_327_float, float var_328_float, float var_329_float, float var_330_float)
{
	if(var_328_float < var_329_float) {
		var_329_float = var_327_float;
		return 0;
	}
	if(var_328_float > var_330_float) {
		var_330_float = var_327_float;
		return 0;
	}
	var_328_float = var_327_float;
}


void func_1322(bool var_85_bool, object var_86_object)
{
	bool var_88_bool;
	var_86_object->IsDead(var_88_bool);
	var_88_bool = var_85_bool;
}


void func_684(object var_26_object)
{
	cvector var_37_cvector; cvector var_38_cvector; cvector var_39_cvector; cvector var_40_cvector; string var_41_string; object var_42_object; bool var_43_bool; bool var_44_bool; float var_45_float; cvector var_46_cvector;
	if(var_26_object == null) {
		func_771("fdie");
	} else {
		var_26_object->GetPosition(var_37_cvector);
		@GetPosition(var_38_cvector);
		@GetDirection(var_39_cvector);
		var_40_cvector = var_38_cvector - var_37_cvector;
		var_51_float = GetByIndex(var_40_cvector, 0);
		var_52_float = GetByIndex(var_39_cvector, 0);
		var_54_float = GetByIndex(var_40_cvector, 2);
		var_55_float = GetByIndex(var_39_cvector, 2);
		if(((var_51_float * var_52_float) + (var_54_float * var_55_float)) >= 0)
			var_41_string = "fdie";
		else
			var_41_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_26_object = var_42_object;
		var_62_bool = IsFuncExist(var_26_object, "GetScriptProperty", 2);
		if(var_62_bool != 0) {
			var_26_object->HasScriptProperty(var_43_bool, "Owner");
			if(var_43_bool != 0) {
				var_26_object->GetScriptProperty(var_42_object, "Owner");
				if(var_42_object == null)
					var_26_object = var_42_object;
			}
		}
		var_69_bool = IsFuncExist(var_42_object, "@GetEyesHeight", 1);
		if(var_69_bool != 0) {
			var_42_object->GetEyesHeight(var_45_float);
			var_46_cvector = [0.0, 0.0, 0.0];
			var_70_float = GetByIndex(var_46_cvector, 1);
			var_45_float = var_70_float;
			SetByIndex(var_46_cvector, 1) = var_70_float;
			@LookAsync(var_26_object, "head", var_46_cvector);
			var_44_bool = true;
		} else {
			var_44_bool = false;

		}
		@PlayAnimation("all", var_41_string);
		@WaitForAnimEnd();
		if(var_44_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_41_string);
		@RemoveEnvelope();
		var_42_object = null;
	}
	
}


void func_1454(object var_173_object)
{
	cvector var_177_cvector;
	var_173_object->GetPosition(var_177_cvector);
	cvector var_178_cvector;
	@GetPosition(var_178_cvector);
	cvector var_179_cvector = var_177_cvector - var_178_cvector;
	var_180_float = GetByIndex(var_179_cvector, 0);
	var_181_float = GetByIndex(var_179_cvector, 2);
	@RotateAsync(var_180_float, var_181_float);
}


void func_1327(bool var_74_bool, object var_75_object)
{
	if(var_75_object == null) {
		var_74_bool = false;
		return 4;
	}
	bool var_81_bool = false;
	var_84_bool = IsFuncExist(var_75_object, "IsDead", 1);
	if(var_84_bool != 0) {
		bool var_85_bool; object var_86_object;
		var_75_object = var_86_object;
		func_1322(var_85_bool, var_86_object);
		if(var_85_bool != 0)
			var_81_bool = true;
	}
	if(var_81_bool != 0) {
		var_74_bool = false;
		return 4;
	}
	object var_78_object;
	@GetScene(var_78_object);
	if(var_78_object == null) {
		var_74_bool = false;
		return 4;
	}
	object var_79_object;
	var_75_object->GetScene(var_79_object);
	if(var_78_object != var_79_object) {
		var_74_bool = false;
		return 4;
	}
	var_74_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1582(object var_16_object)
{
	bool var_18_bool;
	@AddItem(var_18_bool, "revolver_ammo", 0, 2);
	@AddItem(var_18_bool, "alpha_pills", 0, 2);
	object var_25_object;
	var_16_object = var_25_object;
	TaskCall(2);
	func_663(var_25_object);
	TaskReturn();
}


void func_1465(bool var_29_bool, object var_30_object)
{
	cvector var_40_cvector;
	var_30_object->GetPosition(var_40_cvector);
	float var_39_float;
	var_30_object->GetEyesHeight(var_39_float);
	var_47_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (var_47_float + var_39_float);
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	@GetEyesHeight(var_39_float);
	var_48_float = GetByIndex(var_41_cvector, 1);
	SetByIndex(var_41_cvector, 1) = (var_48_float + var_39_float);
	cvector var_42_cvector = var_40_cvector - var_41_cvector;
	var_49_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (float)0;
	var_51_float = sqrt(var_42_cvector | var_42_cvector);
	var_42_cvector /= var_51_float;
	cvector var_43_cvector = -var_42_cvector;
	cvector var_54_cvector;
	func_1550(var_54_cvector, (var_43_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_44_cvector = ((var_42_cvector * 70) + (var_54_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_46_bool;
	@IsOverrideActive(var_46_bool);
	if(var_46_bool != 0)
		var_29_bool = false;
	@StopWorld();
	@CameraTransit((var_41_cvector + var_44_cvector), var_43_cvector);
	var_67_float = GetByIndex(var_44_cvector, 0);
	var_68_float = GetByIndex(var_44_cvector, 2);
	@Rotate(var_67_float, var_68_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_29_bool = true;
}


void func_442(object var_0_object)
{
	@Face(var_0_object);
	@PlayAnimation("all", "bjump");
	cvector var_228_cvector;
	var_0_object->GetPFPosition(var_228_cvector); //@t
	cvector var_229_cvector;
	@GetPFPosition(var_229_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	@SetSpeed([0.0, 0.0, 0.0]);
}


void func_461(object var_0_object, bool var_187_bool)
{
	bool var_189_bool;
	var_192_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_192_bool != 0) {
		var_0_object->IsAttacking(var_189_bool); //@t
		var_189_bool = var_187_bool;
	}
	var_187_bool = false;
}


void func_1233(void)
{
	@StopGroup0();
	@Stop();
}


void func_1363(bool var_70_bool, object var_71_object)
{
	object var_75_object;
	var_71_object = var_75_object;
	bool var_74_bool;
	func_1327(var_74_bool, var_75_object);
	if(!var_74_bool) { //@nz
		var_70_bool = false;
		return 2;
	}
	bool var_92_bool; object var_93_object;
	func_1246(var_92_bool, var_93_object, "noaccess");
	if(!var_92_bool) { //@nz
		var_70_bool = true;
		return 2;
	}
	int var_73_int;
	var_93_object->GetProperty("noaccess", var_73_int);
	var_70_bool = var_73_int == 0;
}


// @pe
void func_1238(string var_309_string, int var_310_int)
{
	if(var_310_int == 1)
		var_309_string = "fire";
	var_309_string = "phys";
}


void func_472(int var_2_int, int var_4_int)
{
	int var_252_int;
	if(!var_2_int) //@nz
		return 4;
	if(var_4_int != 0) {
		if((var_4_int + -1) > 0)
			return 4;
	}
	float var_251_float;
	@rand(var_251_float);
	float var_258_float;
	func_510(var_258_float);
	if(var_251_float < var_258_float) {
		@irand(var_252_int, var_2_int);
		@Speak("attack" + (var_252_int + 1));
		int var_263_int;
		func_508(var_263_int);
		var_4_int = var_263_int;
	}
}


void func_345(bool var_353_bool, float var_354_float)
{
	float var_357_float; bool var_358_bool;
	@rand(var_357_float);
	if(var_357_float < var_354_float) {

		for(;;) {
			@IsAnimationPlaying(var_358_bool);
			if(!var_358_bool) { //@nz
			} else {
				bool var_361_bool;
				func_409(var_358_bool, var_361_bool);
				if(var_361_bool != 0) {
					var_353_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_353_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
}


void func_1627(int var_72_int)
{
	int var_74_int;
	@GetVariable("player", var_74_int);
	if(var_74_int == 0) {
		var_72_int = 200001;
		return 2;
	EMIT "GOTO 0x66a";
	}
	if(var_74_int == 1) {
		var_72_int = 200002;
		return 2;
	}
	var_72_int = 200003;
}


// @pe
void func_862(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_81_object, object var_82_object)
{
	var_0_object = var_82_object;
	var_1_int = var_81_object;
	var_3_bool = false;
	if(1 != 0) {
		func_920(var_82_object, "Neutral");
		var_0_object->SetMessage(9102); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(9103, 9989, 9982); //@t
		var_0_object->AddReply(9104, 9985, 9983); //@t
		goto Label_890;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x362";
	}
Label_890:
	bool var_110_bool;
	func_1648(var_110_bool);
	if(var_110_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_bool != 0) {
			} else {
				func_1525(var_2_int);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_bool != 0) {
				goto Label_919;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_919:
		return 0;

	}
	
}


void func_1119(int var_2_int, bool var_16_bool)
{
	var_16_bool = var_2_int;
}


void func_1246(bool var_92_bool, object var_93_object, string var_94_string)
{
	var_99_bool = IsFuncExist(var_93_object, "HasProperty", 2);
	if(!var_99_bool) { //@nz
		var_92_bool = false;
		return 2;
	}
	bool var_96_bool;
	var_93_object->HasProperty(var_94_string, var_96_bool);
	var_96_bool = var_92_bool;
}


// @pe
void func_1121(int var_2_int, object var_17_object)
{
	object var_19_object;
	var_17_object = var_19_object;
	TaskCall(3);
	int var_18_int;
	func_799(var_20_object, var_18_int, var_19_object);
	TaskReturn();
	var_2_int = false;
}


void func_226(object var_0_object, float var_267_float, int var_268_int)
{
	object var_272_object; float var_273_float; float var_274_float;
	@GetVictim((var_267_float * 0.9), var_272_object);
	@ReportAttack(var_0_object);
	if(var_272_object == var_0_object) {
		float var_278_float; object var_279_object; int var_280_int;
		var_272_object = var_279_object;
		var_268_int = var_280_int;
		func_15(var_280_int);
		var_278_float = var_273_float;
		float var_281_float; object var_282_object; float var_283_float; int var_284_int;
		var_272_object = var_282_object;
		int var_285_int; object var_286_object; int var_287_int;
		var_272_object = var_286_object;
		var_268_int = var_287_int;
		func_18(var_287_int);
		var_285_int = var_284_int;
		func_1258(var_281_float, var_282_object, var_283_float, var_284_int);
		var_281_float = var_274_float;
		int var_334_int;
		func_504(var_334_int);
		@ReportHit(var_0_object, var_334_int, var_274_float, var_283_float);
		object var_335_object; float var_336_float;
		var_272_object = var_335_object;
		var_274_float = var_336_float;
		func_506();
	}
}
EMIT "Stack[-3] = 0";


void func_1258(float var_281_float, object var_282_object, float var_283_float, int var_284_int)
{
	int var_294_int; int var_296_int;
	object var_301_object;
	var_282_object = var_301_object;
	bool var_300_bool;
	func_1246(var_300_bool, var_301_object, "health");
	if(!var_300_bool) //@nz
		var_281_float = 0.0;
	bool var_304_bool; object var_305_object;
	func_1246(var_304_bool, var_305_object, "armor");
	if(!var_304_bool) //@nz
		var_294_int = 0;
	else
		var_305_object->GetProperty("armor", var_294_int);
	string var_309_string; int var_310_int;
	var_284_int = var_310_int;
	func_1238(var_309_string, var_310_int);
	string var_295_string = "armor_" + var_309_string;
	bool var_313_bool; object var_314_object; string var_315_string;
	var_282_object = var_314_object;
	func_1246(var_313_bool, var_314_object, var_315_string);
	if(!var_313_bool) //@nz
		var_296_int = 0;
	else
		var_282_object->GetProperty(var_315_string, var_296_int);

	float var_317_float;
	func_1564(var_317_float, ((var_294_int + var_296_int) / 100.0), (float)1);
	float var_297_float;
	var_317_float = var_297_float;
	float var_298_float;
	var_282_object->GetProperty("health", var_298_float);
	float var_327_float;
	func_1571(var_327_float, (var_298_float - (var_283_float * (1 - var_297_float))), (float)0, (float)1);
	var_282_object->SetProperty("health", var_327_float);
	float var_299_float = var_281_float;
	
}


void func_1130(void)
{
}


void func_1644(int var_70_int)
{
	var_70_int = 4031;
}


void func_1387(object var_19_object, int var_20_int)
{
	object var_32_object; object var_33_object; cvector var_34_cvector; float var_35_float; string var_41_string;
	bool var_42_bool = false;
	if(var_20_int != 4) {
		if(var_20_int != 5)
			var_42_bool = true;
	}
	if(var_42_bool != 0) {
		@GetScene(var_32_object);
		@GetPosition(var_34_cvector);
		@GetEyesHeight(var_35_float);
		var_47_float = GetByIndex(var_34_cvector, 1);
		SetByIndex(var_34_cvector, 1) = (var_47_float + (var_35_float / 2));
		@AddActorByType(var_33_object, "scripted", var_32_object, var_34_cvector, [0.0, 0.0, 1.0], "blood.xml");
		var_33_object = null;
		var_32_object = null;
	}
	if(var_19_object == null)
		return 20;
	int var_36_int;
	@GetSecondaryAnimationType(var_36_int);
	if(var_36_int < 0)
		return 20;
	cvector var_37_cvector;
	var_19_object->GetPosition(var_37_cvector);
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	cvector var_39_cvector;
	@GetDirection(var_39_cvector);
	cvector var_40_cvector = var_38_cvector - var_37_cvector;
	var_56_float = GetByIndex(var_40_cvector, 0);
	var_57_float = GetByIndex(var_39_cvector, 0);
	var_59_float = GetByIndex(var_40_cvector, 2);
	var_60_float = GetByIndex(var_39_cvector, 2);
	if(((var_56_float * var_57_float) + (var_59_float * var_60_float)) >= 0)
		var_41_string = "fhit";
	else
		var_41_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_41_string + "1"), (var_41_string + "2"), -10);
	
}


void func_1646(string var_71_string)
{
	var_71_string = "ui/NPC_Black.png";
}


void func_1648(bool var_89_bool)
{
	var_89_bool = false;
}


void func_369(object var_0_object, bool var_195_bool, float var_196_float)
{
	bool var_202_bool; cvector var_203_cvector; cvector var_204_cvector; cvector var_205_cvector; float var_206_float;
	
	for(;;) {
		@IsAnimationPlaying(var_202_bool);
		if(!var_202_bool) //@nz
			break;
		bool var_208_bool;
		func_409(var_206_float, var_208_bool);
		if(var_208_bool != 0) {
			var_195_bool = true;
			return 10;
		}
		bool var_233_bool;
		func_1363(var_233_bool, var_0_object);
		if(!var_233_bool) { //@nz
			var_195_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_203_cvector); //@t
		@GetPFPosition(var_204_cvector);
		var_205_cvector = var_203_cvector - var_204_cvector;
		var_206_float = var_205_cvector | var_205_cvector;
		if(var_206_float < (var_196_float * var_196_float)) {
			bool var_238_bool; float var_239_float;
			var_196_float = var_239_float;
			func_265(var_205_cvector, var_206_float, var_238_bool, var_239_float);
			var_195_bool = true;
			return 10;
		}
		@sync();
	}
	var_195_bool = false;
}


// @pe
void func_1521(void)
{
	@CameraSwitchToNormal();
}


void func_1525(string var_92_string)
{
	@Trace("playing " + var_92_string);
	float var_95_float;
	float var_96_float;
	@lshGetAnimTimes(var_92_string, var_95_float, var_96_float);
	@lshPlayAnimation(var_95_float, var_96_float);
	@Trace("start: " + var_95_float);
	@Trace("end: " + var_96_float);
}


void func_504(int var_334_int)
{
	var_334_int = 0;
}


// @pe
void func_506(void)
{
}


void func_508(int var_263_int)
{
	var_263_int = 1;
}


void func_510(float var_258_float)
{
	var_258_float = 0.5;
}


