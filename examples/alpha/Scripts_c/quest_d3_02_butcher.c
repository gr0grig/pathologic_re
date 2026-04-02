maintask task_0
{
	void init(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int, bool var_6_bool, object var_7_object)
	{
		@SensePlayerOnly(true);
		func_36();
	}

	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, int var_6_int, bool var_7_bool, object var_8_object)
	{
		bool var_10_bool;
		@IsPlayerActor(var_8_object, var_10_bool);
		if(var_10_bool != 0) {
			TaskCall(1);
			func_86();
			TaskReturn();
		}
	}

	// @pe
	void OnTrigger(bool var_0_bool, string var_1_string, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, int var_6_int, bool var_7_bool, object var_8_object)
	{
		if(var_8_object == "trigger") {
			@PlayGlobalSound("growl");
			TaskCall(1);
			func_86();
			TaskReturn();
		} else {
			string var_372_string;
			func_40(var_372_string, var_372_string);
		}
	
	}

	void OnUnload(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int, bool var_6_bool, object var_7_object)
	{
		bool var_8_bool = false;
		if(var_0_bool != 0) {
			bool var_10_bool;
			func_84(var_10_bool);
			if(var_10_bool != 0)
				var_8_bool = true;
		}
		if(var_8_bool != 0) {
			object var_11_object;
			func_1113(var_11_object);
			@RemoveActor(var_11_object);
		}
	}

}


task task_1
{
	void OnUnload(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int, bool var_6_bool, object var_7_object)
	{
		object var_8_object;
		func_1113(var_8_object);
		@RemoveActor(var_8_object);
		@Hold();
	}

}


task task_2
{
	void OnUnload(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int, bool var_6_bool, object var_7_object)
	{
		object var_8_object;
		func_1113(var_8_object);
		@RemoveActor(var_8_object);
		@Hold();
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int, bool var_6_bool, object var_7_object, int var_8_int)
	{
		if(var_8_int != 0)
			return 0;
		bool var_11_bool;
		func_751(var_11_bool, var_1_object);
		if(!var_11_bool) //@nz
			var_0_bool = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int, bool var_6_bool, object var_7_object, object var_8_object)
	{
		@RequestClearPath(var_8_object);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int, bool var_6_bool, object var_7_object, object var_8_object)
	{
		func_735(var_8_object);
		object var_10_object;
		var_8_object = var_10_object;
		func_1183();
	}

}


task task_3
{
	// @pe
	void OnHit(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, float var_10_float, float var_11_float)
	{
	}

	// @pe
	void OnPropertyChange(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int, bool var_6_bool, object var_7_object, object var_8_object, string var_9_string)
	{
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int, bool var_6_bool, object var_7_object, object var_8_object)
	{
	}

}


// @pe
void OnHit(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, float var_10_float, float var_11_float)
{
	object var_12_object;
	var_8_object = var_12_object;
	int var_13_int;
	var_9_int = var_13_int;
	float var_14_float;
	var_10_float = var_14_float;
	func_1035(var_13_int, var_14_float);
}


void OnPropertyChange(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int, bool var_6_bool, object var_7_object, object var_8_object, string var_9_string)
{
	float var_11_float;
	if(var_9_string == "health") {
		@GetProperty("health", var_11_float);
		if(var_11_float <= 0)
			@SignalDeath(var_8_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, int var_5_int, bool var_6_bool, object var_7_object, object var_8_object)
{
	object var_9_object;
	var_8_object = var_9_object;
	func_1149(var_9_object);
}


void func_771(object var_17_object)
{
	cvector var_28_cvector; cvector var_29_cvector; cvector var_30_cvector; cvector var_31_cvector; string var_32_string; object var_33_object; bool var_34_bool; bool var_35_bool; float var_36_float; cvector var_37_cvector;
	if(var_17_object == null) {
		func_858("fdie");
	} else {
		var_17_object->GetPosition(var_28_cvector);
		@GetPosition(var_29_cvector);
		@GetDirection(var_30_cvector);
		var_31_cvector = var_29_cvector - var_28_cvector;
		var_42_float = GetByIndex(var_31_cvector, 0);
		var_43_float = GetByIndex(var_30_cvector, 0);
		var_45_float = GetByIndex(var_31_cvector, 2);
		var_46_float = GetByIndex(var_30_cvector, 2);
		if(((var_42_float * var_43_float) + (var_45_float * var_46_float)) >= 0)
			var_32_string = "fdie";
		else
			var_32_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_17_object = var_33_object;
		var_53_bool = IsFuncExist(var_17_object, "GetScriptProperty", 2);
		if(var_53_bool != 0) {
			var_17_object->HasScriptProperty(var_34_bool, "Owner");
			if(var_34_bool != 0) {
				var_17_object->GetScriptProperty(var_33_object, "Owner");
				if(var_33_object == null)
					var_17_object = var_33_object;
			}
		}
		var_60_bool = IsFuncExist(var_33_object, "@GetEyesHeight", 1);
		if(var_60_bool != 0) {
			var_33_object->GetEyesHeight(var_36_float);
			var_37_cvector = [0.0, 0.0, 0.0];
			var_61_float = GetByIndex(var_37_cvector, 1);
			var_36_float = var_61_float;
			SetByIndex(var_37_cvector, 1) = var_61_float;
			@LookAsync(var_17_object, "head", var_37_cvector);
			var_35_bool = true;
		} else {
			var_35_bool = false;

		}
		@PlayAnimation("all", var_32_string);
		@WaitForAnimEnd();
		if(var_35_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_32_string);
		@RemoveEnvelope();
		var_33_object = null;
	}
	
}


void func_906(float var_273_float, object var_274_object, float var_275_float, int var_276_int)
{
	int var_286_int; int var_288_int;
	object var_293_object;
	var_274_object = var_293_object;
	bool var_292_bool;
	func_894(var_292_bool, var_293_object, "health");
	if(!var_292_bool) //@nz
		var_273_float = 0.0;
	bool var_296_bool; object var_297_object;
	func_894(var_296_bool, var_297_object, "armor");
	if(!var_296_bool) //@nz
		var_286_int = 0;
	else
		var_297_object->GetProperty("armor", var_286_int);
	string var_301_string; int var_302_int;
	var_276_int = var_302_int;
	func_886(var_301_string, var_302_int);
	string var_287_string = "armor_" + var_301_string;
	bool var_305_bool; object var_306_object; string var_307_string;
	var_274_object = var_306_object;
	func_894(var_305_bool, var_306_object, var_307_string);
	if(!var_305_bool) //@nz
		var_288_int = 0;
	else
		var_274_object->GetProperty(var_307_string, var_288_int);

	float var_309_float;
	func_1119(var_309_float, ((var_286_int + var_288_int) / 100.0), (float)1);
	float var_289_float;
	var_309_float = var_289_float;
	float var_290_float;
	var_274_object->GetProperty("health", var_290_float);
	float var_319_float;
	func_1126(var_319_float, (var_290_float - (var_275_float * (1 - var_289_float))), (float)0, (float)1);
	var_274_object->SetProperty("health", var_319_float);
	float var_291_float = var_273_float;
	
}


void func_1035(object var_12_object, int var_13_int)
{
	object var_25_object; object var_26_object; cvector var_27_cvector; float var_28_float; string var_34_string;
	bool var_35_bool = false;
	if(var_13_int != 4) {
		if(var_13_int != 5)
			var_35_bool = true;
	}
	if(var_35_bool != 0) {
		@GetScene(var_25_object);
		@GetPosition(var_27_cvector);
		@GetEyesHeight(var_28_float);
		var_40_float = GetByIndex(var_27_cvector, 1);
		SetByIndex(var_27_cvector, 1) = (var_40_float + (var_28_float / 2));
		@AddActorByType(var_26_object, "scripted", var_25_object, var_27_cvector, [0.0, 0.0, 1.0], "blood.xml");
		var_26_object = null;
		var_25_object = null;
	}
	if(var_12_object == null)
		return 20;
	int var_29_int;
	@GetSecondaryAnimationType(var_29_int);
	if(var_29_int < 0)
		return 20;
	cvector var_30_cvector;
	var_12_object->GetPosition(var_30_cvector);
	cvector var_31_cvector;
	@GetPosition(var_31_cvector);
	cvector var_32_cvector;
	@GetDirection(var_32_cvector);
	cvector var_33_cvector = var_31_cvector - var_30_cvector;
	var_49_float = GetByIndex(var_33_cvector, 0);
	var_50_float = GetByIndex(var_32_cvector, 0);
	var_52_float = GetByIndex(var_33_cvector, 2);
	var_53_float = GetByIndex(var_32_cvector, 2);
	if(((var_49_float * var_50_float) + (var_52_float * var_53_float)) >= 0)
		var_34_string = "fhit";
	else
		var_34_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_34_string + "1"), (var_34_string + "2"), -10);
	
}


void func_533(bool var_0_bool)
{
	@Face(var_0_bool);
	@PlayAnimation("all", "bjump");
	cvector var_220_cvector;
	var_0_bool->GetPFPosition(var_220_cvector); //@t
	cvector var_221_cvector;
	@GetPFPosition(var_221_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	@SetSpeed([0.0, 0.0, 0.0]);
}


void func_36(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_40(bool var_0_bool, string var_372_string)
{
	bool var_374_bool;
	if(var_372_string == "cleanup") {
		var_0_bool = true;
		@IsLoaded(var_374_bool);
		bool var_377_bool = false;
		if(!var_374_bool) { //@nz
			bool var_379_bool;
			func_84(var_379_bool);
			if(var_379_bool != 0)
				var_377_bool = true;
		}
		if(var_377_bool != 0) {
			object var_380_object;
			func_1113(var_380_object);
			@RemoveActor(var_380_object);
		}
	} else if(var_372_string == "restore") {
		var_0_bool = false;
	}
	
}


void func_552(bool var_0_bool, bool var_179_bool)
{
	bool var_181_bool;
	var_184_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_184_bool != 0) {
		var_0_bool->IsAttacking(var_181_bool); //@t
		var_181_bool = var_179_bool;
	}
	var_179_bool = false;
}


void func_563(object var_2_object, int var_4_int)
{
	int var_244_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_4_int != 0) {
		if((var_4_int + -1) > 0)
			return 4;
	}
	float var_243_float;
	@rand(var_243_float);
	float var_250_float;
	func_601(var_250_float);
	if(var_243_float < var_250_float) {
		@irand(var_244_int, var_2_object);
		@Speak("attack" + (var_244_int + 1));
		int var_255_int;
		func_599(var_255_int);
		var_4_int = var_255_int;
	}
}


void func_436(bool var_345_bool, float var_346_float)
{
	float var_349_float; bool var_350_bool;
	@rand(var_349_float);
	if(var_349_float < var_346_float) {

		for(;;) {
			@IsAnimationPlaying(var_350_bool);
			if(!var_350_bool) { //@nz
			} else {
				bool var_353_bool;
				func_500(var_350_bool, var_353_bool);
				if(var_353_bool != 0) {
					var_345_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_345_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
}


void func_317(bool var_0_bool, float var_259_float, int var_260_int)
{
	object var_264_object; float var_265_float; float var_266_float;
	@GetVictim((var_259_float * 0.9), var_264_object);
	@ReportAttack(var_0_bool);
	if(var_264_object == var_0_bool) {
		float var_270_float; object var_271_object; int var_272_int;
		var_264_object = var_271_object;
		var_260_int = var_272_int;
		func_98(var_272_int);
		var_270_float = var_265_float;
		float var_273_float; object var_274_object; float var_275_float; int var_276_int;
		var_264_object = var_274_object;
		int var_277_int; object var_278_object; int var_279_int;
		var_264_object = var_278_object;
		var_260_int = var_279_int;
		func_101(var_279_int);
		var_277_int = var_276_int;
		func_906(var_273_float, var_274_object, var_275_float, var_276_int);
		var_273_float = var_266_float;
		int var_326_int;
		func_595(var_326_int);
		@ReportHit(var_0_bool, var_326_int, var_266_float, var_275_float);
		object var_327_object; float var_328_float;
		var_264_object = var_327_object;
		var_266_float = var_328_float;
		func_597();
	}
}
EMIT "Stack[-3] = 0";


void func_970(bool var_28_bool, object var_29_object)
{
	bool var_31_bool;
	var_29_object->IsDead(var_31_bool);
	var_31_bool = var_28_bool;
}


void func_460(bool var_0_bool, bool var_187_bool, float var_188_float)
{
	bool var_194_bool; cvector var_195_cvector; cvector var_196_cvector; cvector var_197_cvector; float var_198_float;
	
	for(;;) {
		@IsAnimationPlaying(var_194_bool);
		if(!var_194_bool) //@nz
			break;
		bool var_200_bool;
		func_500(var_198_float, var_200_bool);
		if(var_200_bool != 0) {
			var_187_bool = true;
			return 10;
		}
		bool var_225_bool;
		func_1011(var_225_bool, var_0_bool);
		if(!var_225_bool) { //@nz
			var_187_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_195_cvector); //@t
		@GetPFPosition(var_196_cvector);
		var_197_cvector = var_195_cvector - var_196_cvector;
		var_198_float = var_197_cvector | var_197_cvector;
		if(var_198_float < (var_188_float * var_188_float)) {
			bool var_230_bool; float var_231_float;
			var_188_float = var_231_float;
			func_356(var_197_cvector, var_198_float, var_230_bool, var_231_float);
			var_187_bool = true;
			return 10;
		}
		@sync();
	}
	var_187_bool = false;
}


void func_1102(object var_165_object)
{
	cvector var_169_cvector;
	var_165_object->GetPosition(var_169_cvector);
	cvector var_170_cvector;
	@GetPosition(var_170_cvector);
	cvector var_171_cvector = var_169_cvector - var_170_cvector;
	var_172_float = GetByIndex(var_171_cvector, 0);
	var_173_float = GetByIndex(var_171_cvector, 2);
	@RotateAsync(var_172_float, var_173_float);
}


void func_975(bool var_17_bool, object var_18_object)
{
	if(var_18_object == null) {
		var_17_bool = false;
		return 4;
	}
	bool var_24_bool = false;
	var_27_bool = IsFuncExist(var_18_object, "IsDead", 1);
	if(var_27_bool != 0) {
		bool var_28_bool; object var_29_object;
		var_18_object = var_29_object;
		func_970(var_28_bool, var_29_object);
		if(var_28_bool != 0)
			var_24_bool = true;
	}
	if(var_24_bool != 0) {
		var_17_bool = false;
		return 4;
	}
	object var_21_object;
	@GetScene(var_21_object);
	if(var_21_object == null) {
		var_17_bool = false;
		return 4;
	}
	object var_22_object;
	var_18_object->GetScene(var_22_object);
	if(var_21_object != var_22_object) {
		var_17_bool = false;
		return 4;
	}
	var_17_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_595(int var_326_int)
{
	var_326_int = 0;
}


void func_84(bool var_10_bool)
{
	var_10_bool = true;
}


// @pe
void func_597(void)
{
}


void func_86(void)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	object var_20_object;
	object var_17_object;
	func_112(var_13_int, var_14_int, var_15_bool, var_16_int, var_17_object, var_20_object, var_20_object, true, 180.0);
}
EMIT "Stack[-1] = 0";


void func_599(int var_255_int)
{
	var_255_int = 1;
}


void func_1113(object var_8_object)
{
	object var_10_object;
	@self(var_10_object);
	var_10_object = var_8_object;
}
EMIT "Stack[-1] = 0";


void func_601(float var_250_float)
{
	var_250_float = 0.5;
}


// @pe
void func_858(string var_39_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_39_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_39_string);
	@RemoveEnvelope();
}


void func_735(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_1119(float var_309_float, float var_310_float, float var_311_float)
{
	if(var_310_float < var_311_float)
		var_310_float = var_309_float;
	else
		var_311_float = var_309_float;
	
}


// @pe
void func_98(float var_270_float)
{
	var_270_float = 0.1;
}


void func_611(bool var_0_bool, string var_1_string, bool var_103_bool, object var_104_object, float var_105_float, float var_106_float, bool var_107_bool, bool var_108_bool)
{
	bool var_119_bool; object var_121_object; cvector var_122_cvector; cvector var_123_cvector; float var_125_float; object var_126_object;
	var_0_bool = false;
	var_1_string = var_104_object;
	bool var_120_bool;
	var_108_bool = var_120_bool;
	
	for(;;) {
		bool var_127_bool; object var_128_object;
		var_104_object = var_128_object;
		func_751(var_127_bool, var_128_object);
		if(!var_127_bool) { //@nz
			var_103_bool = false;
			return 16;
		}
		var_104_object->GetPosition(var_122_cvector);
		@GetPosition(var_123_cvector);
		var_125_float = (var_122_cvector - var_123_cvector) | (var_122_cvector - var_123_cvector);
		bool var_132_bool = false;
		if(var_106_float > 0) {
			if(var_125_float > (var_106_float * var_106_float))
				var_132_bool = true;
		}
		if(var_132_bool != 0) {
			@Stop();
			var_103_bool = false;
			return 16;
		}
		if(var_125_float > (var_105_float * var_105_float)) {
			var_104_object->GetPFPosition(var_122_cvector);
			@FindPathTo(var_126_object, var_122_cvector);
			if(var_126_object != null) {
				var_126_object = var_121_object;
				var_126_object = null;
			}
			if(var_121_object != null) {
				if(var_120_bool == 0) goto Label_664;
				var_120_bool = false;
				@RotatePath(var_121_object, var_119_bool);
				if(!var_119_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_145_string;
						func_758(var_145_string);
						string var_146_string;
						func_760(var_146_string);
						@FollowPath(var_121_object, var_107_bool, var_119_bool, var_145_string, var_146_string);
						if(!var_119_bool) { //@nz
							if(var_0_bool == 0) goto Label_683;
							var_121_object = null;
						}
					EMIT "GOTO 0x2ac";

					Label_683:
						} else {
					var_121_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_119_bool);
					if(!var_119_bool) { //@nz
						if(var_0_bool != 0) {
							var_121_object = null;
							goto Label_711;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_711;
		}
			var_126_object = null;
			goto Label_709;

		Label_709:
			var_121_object = null;

		}
	Label_711:
		for(;;) {
			var_103_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_356(bool var_0_bool, string var_1_string, bool var_230_bool, float var_231_float)
{
	int var_234_int;
	@irand(var_234_int, var_1_string);
	var_234_int += 1;
	@Face(var_0_bool);
	@SetAttackState(true);
	@PlayAnimation("all", ("attack_begin" + var_234_int));
	@WaitForAnimEnd();
	bool var_235_bool;
	func_563(var_234_int, var_235_bool);
	bool var_256_bool;
	func_1011(var_256_bool, var_0_bool);
	if(!var_256_bool) { //@nz
		@StopAsync();
		var_230_bool = false;
		return 4;
	}
	float var_259_float; int var_260_int;
	var_231_float = var_259_float;
	var_234_int = var_260_int;
	func_317(var_235_bool, var_259_float, var_260_int);
	@HasAnimation(var_235_bool, "all", ("attack_middle" + var_234_int));
	if(var_235_bool != 0) {
		@PlayAnimation("all", ("attack_middle" + var_234_int));
		@WaitForAnimEnd();
		bool var_336_bool;
		func_1011(var_336_bool, var_0_bool);
		if(!var_336_bool) { //@nz
			@StopAsync();
			var_230_bool = false;
			return 4;
		}
		float var_339_float; int var_340_int;
		var_231_float = var_339_float;
		var_234_int = var_340_int;
		func_317(var_235_bool, var_339_float, var_340_int);
	}
	@SetAttackState(false);
	@PlayAnimation("all", ("attack_end" + var_234_int));
	bool var_345_bool;
	func_436(var_345_bool, 0.75);
	@StopAsync();
	var_230_bool = true;
}


// @pe
void func_101(int var_277_int)
{
	var_277_int = 0;
}


// @pe
void func_1126(float var_319_float, float var_320_float, float var_321_float, float var_322_float)
{
	if(var_320_float < var_321_float) {
		var_321_float = var_319_float;
		return 0;
	}
	if(var_320_float > var_322_float) {
		var_322_float = var_319_float;
		return 0;
	}
	var_320_float = var_319_float;
}


// @pe
void func_751(bool var_11_bool, object var_12_object)
{
	object var_14_object;
	var_12_object = var_14_object;
	bool var_13_bool;
	func_1011(var_13_bool, var_14_object);
	var_13_bool = var_11_bool;
}


void func_112(bool var_0_bool, string var_1_string, object var_2_object, int var_3_int, int var_4_int, object var_20_object, bool var_21_bool, float var_22_float, bool var_109_bool)
{
	bool var_33_bool; bool var_34_bool; float var_35_float; cvector var_36_cvector; cvector var_37_cvector; bool var_38_bool; bool var_39_bool; float var_41_float; float var_42_float;
	var_1_string = 0;
	
	for(;;) {
		@HasAnimation(var_33_bool, "all", ("attack_begin" + (var_1_string + 1)));
		if(!var_33_bool) { //@nz
		} else {
			var_1_string += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_34_bool, ("attack" + (var_2_object + 1)));
			if(!var_34_bool) { //@nz
			} else {
									var_2_object += 1;
			}
			var_4_int = 0;
			var_56_bool = IsFuncExist(var_20_object, "@GetAttackDistance", 1);
			if(var_56_bool != 0) {
				var_20_object->GetAttackDistance(var_35_float);
				var_35_float += 50;
			} else {
								var_22_float = var_35_float;

			}
			if(var_35_float >= 150)
				var_35_float = 150;
			var_3_int = false;
			var_0_bool = var_20_object;
			@IsPlayerActor(var_0_bool, var_38_bool);
			if(var_21_bool != 0)
				var_39_bool = false;
			else
				var_39_bool = true;

			for(;;) {
				bool var_61_bool = false;
				bool var_62_bool;
				func_1011(var_62_bool, var_0_bool);
				if(var_62_bool != 0) {
					if(!var_3_int) //@nz
						var_61_bool = true;
				}
				if(var_61_bool != 0) {
					var_0_bool->GetPFPosition(var_36_cvector); //@t
					@GetPFPosition(var_37_cvector);
					var_41_float = (var_36_cvector - var_37_cvector) | (var_36_cvector - var_37_cvector);
					if(var_41_float >= ((400.0 + var_35_float) * (400.0 + var_35_float))) {
						bool var_103_bool; float var_105_float;
						var_35_float = var_105_float;
						TaskCall(2);
						func_611(var_109_bool, var_110_object, var_103_bool, var_0_bool, var_105_float, 3000.0, true, false);
						TaskReturn();
						if(!var_109_bool) { //@nz
						} else {
							var_39_bool = false;
					} else {
					if(var_41_float >= (var_22_float * var_22_float)) {
						if(!var_39_bool) { //@nz
							func_1102(var_0_bool);
							@PlayAnimation("all", "attack_on");
							@WaitForAnimEnd();
							@StopAsync();
							var_39_bool = true;
						}
						@rand(var_42_float);
						bool var_176_bool;
						var_178_bool = var_42_float < 0.6;
						if(var_178_bool != 1) {
							bool var_179_bool;
							func_552(true, var_179_bool);
							if(var_179_bool != 1)
								var_176_bool = false;
						}
						if(var_176_bool != 0) {
							@Face(var_0_bool);
							@PlayAnimation("all", "attack_stay");
							bool var_187_bool; float var_188_float;
							func_460(var_42_float, var_187_bool, var_188_float);
							@StopAsync();
						} else {
							@Face(var_0_bool);
							@PlayAnimation("all", "fjump");
							@WaitForAnimEnd();
							@SetSpeed([0.0, 0.0, 0.0]);
							@Stop();
							@StopAsync();
							bool var_357_bool;
							func_552(var_42_float, var_357_bool);
							var_358_bool = !var_357_bool; //@nz
							if(var_358_bool == 0) goto Label_290;
							bool var_359_bool;
							func_1011(var_359_bool, var_0_bool);
							if(!var_359_bool) { //@nz
								goto Label_300;
							}
							var_0_bool->GetPFPosition(var_36_cvector); //@t
							@GetPFPosition(var_37_cvector);
							var_41_float = (var_36_cvector - var_37_cvector) | (var_36_cvector - var_37_cvector);
							if(!(var_41_float < (var_188_float * var_188_float))) goto Label_290;
							bool var_364_bool; float var_365_float;
							var_22_float = var_365_float;
							func_356(var_41_float, var_42_float, var_364_bool, var_365_float);
							var_366_bool = !var_364_bool; //@nz
							if(var_366_bool == 0) goto Label_290;
							goto Label_300;
					}
						bool var_367_bool; float var_368_float;
						var_22_float = var_368_float;
						func_356(var_41_float, var_42_float, var_367_bool, var_368_float);
						if(!var_367_bool) { //@nz
							goto Label_300;
						}
						var_39_bool = true;

					}
				Label_290:
					goto Label_299;
					}
					Label_299:
					}
				}
			Label_300:
				@WaitForAnimEnd();
				if(var_3_int != 0)
					return 20;
				@PlayAnimation("all", "attack_off");
				@WaitForAnimEnd();
				if(var_38_bool != 0)
					@Sleep(2.0);
				return 20;

			}

		}

	}
}


void func_1137(bool var_10_bool, string var_11_string, string var_12_string)
{
	object var_14_object;
	@FindActor(var_14_object, var_11_string);
	if(var_14_object == null)
		var_10_bool = false;
	@Trigger(var_14_object, var_12_string);
	var_10_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1011(bool var_13_bool, object var_14_object)
{
	object var_18_object;
	var_14_object = var_18_object;
	bool var_17_bool;
	func_975(var_17_bool, var_18_object);
	if(!var_17_bool) { //@nz
		var_13_bool = false;
		return 2;
	}
	bool var_35_bool; object var_36_object;
	func_894(var_35_bool, var_36_object, "noaccess");
	if(!var_35_bool) { //@nz
		var_13_bool = true;
		return 2;
	}
	int var_16_int;
	var_36_object->GetProperty("noaccess", var_16_int);
	var_13_bool = var_16_int == 0;
}


void func_500(bool var_0_bool, bool var_200_bool)
{
	cvector var_206_cvector; cvector var_207_cvector;
	bool var_211_bool;
	func_1011(var_211_bool, var_0_bool);
	if(!var_211_bool) { //@nz
		var_200_bool = false;
		return 10;
	}
	bool var_214_bool;
	float var_210_float;
	func_552(var_210_float, var_214_bool);
	if(var_214_bool != 0) {
		var_0_bool->GetPFPosition(var_206_cvector); //@t
		@GetPFPosition(var_207_cvector);
		var_0_bool->GetAttackDistance(var_210_float); //@t
		var_210_float += 50;
		if(((var_206_cvector - var_207_cvector) | (var_206_cvector - var_207_cvector)) <= (var_210_float * var_210_float)) {
			func_533(var_210_float);
			var_200_bool = true;
			return 10;
		}
	}
	var_200_bool = false;
}


void func_758(string var_145_string)
{
	var_145_string = "walk";
}


// @pe
void func_886(string var_301_string, int var_302_int)
{
	if(var_302_int == 1)
		var_301_string = "fire";
	var_301_string = "phys";
}


void func_760(string var_146_string)
{
	var_146_string = "run";
}


// @pe
void func_762(object var_16_object)
{
	object var_17_object;
	var_16_object = var_17_object;
	func_771(var_17_object);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1149(object var_9_object)
{
	bool var_10_bool;
	func_1137(var_10_bool, "quest_d1_03", "butcher_death");
	object var_16_object;
	var_9_object = var_16_object;
	TaskCall(3);
	func_762(var_16_object);
	TaskReturn();
}


void func_894(bool var_35_bool, object var_36_object, string var_37_string)
{
	var_42_bool = IsFuncExist(var_36_object, "HasProperty", 2);
	if(!var_42_bool) { //@nz
		var_35_bool = false;
		return 2;
	}
	bool var_39_bool;
	var_36_object->HasProperty(var_37_string, var_39_bool);
	var_39_bool = var_35_bool;
}


