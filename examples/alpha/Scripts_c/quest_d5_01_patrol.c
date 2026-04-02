// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void OnTimer(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, int var_7_int, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool)
	{
		if(var_12_bool != 0)
			return 0;
		bool var_15_bool;
		func_652(var_15_bool, var_1_int);
		if(!var_15_bool) //@nz
			var_0_object = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(object actor, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool)
	{
		@RequestClearPath(var_12_bool);
	}

	// @pe
	void OnDeath(object actor, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool)
	{
		func_636(var_12_bool);
		object var_14_object;
		var_12_bool = var_14_object;
		func_1405();
	}

}


task task_2
{
	void OnUse(object actor, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool)
	{
		bool var_14_bool;
		@IsOverrideActive(var_14_bool);
		if(!var_14_bool) //@nz
			@WorkWithCorpse(var_12_bool);
	}

	void OnUnload(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool)
	{
		object var_12_object;
		func_1338(var_12_object);
		@RemoveActor(var_12_object);
		@Hold();
	}

	// @pe
	void OnHit(object actor, int iHitType, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, float var_9_float, float var_10_float, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, string var_8_string, object var_9_object, object var_10_object, object var_11_object, string var_12_string, bool var_13_bool)
	{
	}

	// @pe
	void OnDeath(object actor, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool)
	{
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, int var_12_int, int var_13_int)
	{
		if(1 != 0) {
			func_1331();
			if(var_12_int == 13710) {
				func_928(var_13_int, "Neutral");
				var_0_object->SetMessage(12541); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12542, -1, 13711); //@t
				return 0;
			}
			var_3_bool = true;
			bool var_37_bool;
			func_1432(var_37_bool);
			if(var_37_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x3b1";
	
	}

}


maintask task_5
{
	void init(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object)
	{
		bool var_13_bool;
		func_1003(var_13_bool);
		if(var_13_bool != 0) {
			object var_14_object;
			var_12_object = var_14_object;
			func_981(var_14_object);
		}
	}

	void OnAttacked(object actor, int iDamageType, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object)
	{
		bool var_14_bool;
		@IsPlayerActor(var_12_object, var_14_bool);
		if(var_14_bool != 0) {
			bool var_16_bool;
			func_1372(var_16_bool, "quest_d5_01", "factory_fight");
		}
	}

	// @pe
	void OnTrigger(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, string var_12_string)
	{
		if(var_12_string == "attack") {
			TaskCall(0);
			func_0();
			TaskReturn();
		}
	}

}


// @pe
void OnHit(object actor, int iHitType, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, int var_13_int, float var_14_float, float var_15_float)
{
	object var_16_object;
	var_12_object = var_16_object;
	int var_17_int;
	var_13_int = var_17_int;
	float var_18_float;
	var_14_float = var_18_float;
	func_1175(var_17_int, var_18_float);
}


void OnPropertyChange(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, string var_13_string)
{
	float var_15_float;
	if(var_13_string == "health") {
		@GetProperty("health", var_15_float);
		if(var_15_float <= 0)
			@SignalDeath(var_12_object);
	}
}


// @pe
void OnDeath(object actor, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object)
{
	object var_13_object;
	var_12_object = var_13_object;
	func_1434(var_13_object);
}


void func_512(object var_0_object, int var_1_int, bool var_107_bool, object var_108_object, float var_109_float, float var_110_float, bool var_111_bool, bool var_112_bool)
{
	bool var_123_bool; object var_125_object; cvector var_126_cvector; cvector var_127_cvector; float var_129_float; object var_130_object;
	var_0_object = false;
	var_1_int = var_108_object;
	bool var_124_bool;
	var_112_bool = var_124_bool;
	
	for(;;) {
		bool var_131_bool; object var_132_object;
		var_108_object = var_132_object;
		func_652(var_131_bool, var_132_object);
		if(!var_131_bool) { //@nz
			var_107_bool = false;
			return 16;
		}
		var_108_object->GetPosition(var_126_cvector);
		@GetPosition(var_127_cvector);
		var_129_float = (var_126_cvector - var_127_cvector) | (var_126_cvector - var_127_cvector);
		bool var_136_bool = false;
		if(var_110_float > 0) {
			if(var_129_float > (var_110_float * var_110_float))
				var_136_bool = true;
		}
		if(var_136_bool != 0) {
			@Stop();
			var_107_bool = false;
			return 16;
		}
		if(var_129_float > (var_109_float * var_109_float)) {
			var_108_object->GetPFPosition(var_126_cvector);
			@FindPathTo(var_130_object, var_126_cvector);
			if(var_130_object != null) {
				var_130_object = var_125_object;
				var_130_object = null;
			}
			if(var_125_object != null) {
				if(var_124_bool == 0) goto Label_565;
				var_124_bool = false;
				@RotatePath(var_125_object, var_123_bool);
				if(!var_123_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_149_string;
						func_659(var_149_string);
						string var_150_string;
						func_661(var_150_string);
						@FollowPath(var_125_object, var_111_bool, var_123_bool, var_149_string, var_150_string);
						if(!var_123_bool) { //@nz
							if(var_0_object == 0) goto Label_584;
							var_125_object = null;
						}
					EMIT "GOTO 0x249";

					Label_584:
						} else {
					var_125_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_123_bool);
					if(!var_123_bool) { //@nz
						if(var_0_object != 0) {
							var_125_object = null;
							goto Label_612;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_612;
		}
			var_130_object = null;
			goto Label_610;

		Label_610:
			var_125_object = null;

		}
	Label_612:
		for(;;) {
			var_107_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_0(void)
{
	object var_21_object;
	@FindActor(var_21_object, "player");
	if(!var_21_object) { //@nz
	}
	object var_24_object;
	object var_20_object;
	func_21(var_16_int, var_17_int, var_18_bool, var_19_int, var_20_object, var_24_object, var_24_object, true, 180.0);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1026(string var_305_string, int var_306_int)
{
	if(var_306_int == 1)
		var_305_string = "fire";
	var_305_string = "phys";
}


void func_1411(int var_69_int)
{
	int var_71_int;
	@GetVariable("player", var_71_int);
	if(var_71_int == 0) {
		var_69_int = 200001;
		return 2;
	EMIT "GOTO 0x592";
	}
	if(var_71_int == 1) {
		var_69_int = 200002;
		return 2;
	}
	var_69_int = 200003;
}


void func_636(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_265(object var_0_object, int var_1_int, bool var_234_bool, float var_235_float)
{
	int var_238_int;
	@irand(var_238_int, var_1_int);
	var_238_int += 1;
	@Face(var_0_object);
	@SetAttackState(true);
	@PlayAnimation("all", ("attack_begin" + var_238_int));
	@WaitForAnimEnd();
	bool var_239_bool;
	func_472(var_238_int, var_239_bool);
	bool var_260_bool;
	func_1151(var_260_bool, var_0_object);
	if(!var_260_bool) { //@nz
		@StopAsync();
		var_234_bool = false;
		return 4;
	}
	float var_263_float; int var_264_int;
	var_235_float = var_263_float;
	var_238_int = var_264_int;
	func_226(var_239_bool, var_263_float, var_264_int);
	@HasAnimation(var_239_bool, "all", ("attack_middle" + var_238_int));
	if(var_239_bool != 0) {
		@PlayAnimation("all", ("attack_middle" + var_238_int));
		@WaitForAnimEnd();
		bool var_340_bool;
		func_1151(var_340_bool, var_0_object);
		if(!var_340_bool) { //@nz
			@StopAsync();
			var_234_bool = false;
			return 4;
		}
		float var_343_float; int var_344_int;
		var_235_float = var_343_float;
		var_238_int = var_344_int;
		func_226(var_239_bool, var_343_float, var_344_int);
	}
	@SetAttackState(false);
	@PlayAnimation("all", ("attack_end" + var_238_int));
	bool var_349_bool;
	func_345(var_349_bool, 0.75);
	@StopAsync();
	var_234_bool = true;
}


void func_1034(bool var_88_bool, object var_89_object, string var_90_string)
{
	var_95_bool = IsFuncExist(var_89_object, "HasProperty", 2);
	if(!var_95_bool) { //@nz
		var_88_bool = false;
		return 2;
	}
	bool var_92_bool;
	var_89_object->HasProperty(var_90_string, var_92_bool);
	var_92_bool = var_88_bool;
}


// @pe
void func_652(bool var_131_bool, object var_132_object)
{
	object var_134_object;
	var_132_object = var_134_object;
	bool var_133_bool;
	func_1151(var_133_bool, var_134_object);
	var_133_bool = var_131_bool;
}


// @pe
void func_15(float var_274_float)
{
	var_274_float = 0.3;
}


// @pe
void func_784(string var_51_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_51_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_51_string);
	@RemoveEnvelope();
}


// @pe
void func_18(int var_281_int)
{
	var_281_int = 0;
}


void func_659(string var_149_string)
{
	var_149_string = "walk";
}


void func_1428(int var_67_int)
{
	var_67_int = 4031;
}


void func_21(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, int var_4_int, object var_24_object, bool var_25_bool, float var_26_float, bool var_113_bool)
{
	bool var_37_bool; bool var_38_bool; float var_39_float; cvector var_40_cvector; cvector var_41_cvector; bool var_42_bool; bool var_43_bool; float var_45_float; float var_46_float;
	var_1_int = 0;
	
	for(;;) {
		@HasAnimation(var_37_bool, "all", ("attack_begin" + (var_1_int + 1)));
		if(!var_37_bool) { //@nz
		} else {
			var_1_int += 1;
		}
		var_2_int = 0;

		for(;;) {
			@IsExisting3DSound(var_38_bool, ("attack" + (var_2_int + 1)));
			if(!var_38_bool) { //@nz
			} else {
									var_2_int += 1;
			}
			var_4_int = 0;
			var_60_bool = IsFuncExist(var_24_object, "@GetAttackDistance", 1);
			if(var_60_bool != 0) {
				var_24_object->GetAttackDistance(var_39_float);
				var_39_float += 50;
			} else {
								var_26_float = var_39_float;

			}
			if(var_39_float >= 150)
				var_39_float = 150;
			var_3_bool = false;
			var_0_object = var_24_object;
			@IsPlayerActor(var_0_object, var_42_bool);
			if(var_25_bool != 0)
				var_43_bool = false;
			else
				var_43_bool = true;

			for(;;) {
				bool var_65_bool = false;
				bool var_66_bool;
				func_1151(var_66_bool, var_0_object);
				if(var_66_bool != 0) {
					if(!var_3_bool) //@nz
						var_65_bool = true;
				}
				if(var_65_bool != 0) {
					var_0_object->GetPFPosition(var_40_cvector); //@t
					@GetPFPosition(var_41_cvector);
					var_45_float = (var_40_cvector - var_41_cvector) | (var_40_cvector - var_41_cvector);
					if(var_45_float >= ((400.0 + var_39_float) * (400.0 + var_39_float))) {
						bool var_107_bool; float var_109_float;
						var_39_float = var_109_float;
						TaskCall(1);
						func_512(var_113_bool, var_114_object, var_107_bool, var_0_object, var_109_float, 10000.0, true, false);
						TaskReturn();
						if(!var_113_bool) { //@nz
						} else {
							var_43_bool = false;
					} else {
					if(var_45_float >= (var_26_float * var_26_float)) {
						if(!var_43_bool) { //@nz
							func_1242(var_0_object);
							@PlayAnimation("all", "attack_on");
							@WaitForAnimEnd();
							@StopAsync();
							var_43_bool = true;
						}
						@rand(var_46_float);
						bool var_180_bool;
						var_182_bool = var_46_float < 0.6;
						if(var_182_bool != 1) {
							bool var_183_bool;
							func_461(true, var_183_bool);
							if(var_183_bool != 1)
								var_180_bool = false;
						}
						if(var_180_bool != 0) {
							@Face(var_0_object);
							@PlayAnimation("all", "attack_stay");
							bool var_191_bool; float var_192_float;
							func_369(var_46_float, var_191_bool, var_192_float);
							@StopAsync();
						} else {
							@Face(var_0_object);
							@PlayAnimation("all", "fjump");
							@WaitForAnimEnd();
							@SetSpeed([0.0, 0.0, 0.0]);
							@Stop();
							@StopAsync();
							bool var_361_bool;
							func_461(var_46_float, var_361_bool);
							var_362_bool = !var_361_bool; //@nz
							if(var_362_bool == 0) goto Label_199;
							bool var_363_bool;
							func_1151(var_363_bool, var_0_object);
							if(!var_363_bool) { //@nz
								goto Label_209;
							}
							var_0_object->GetPFPosition(var_40_cvector); //@t
							@GetPFPosition(var_41_cvector);
							var_45_float = (var_40_cvector - var_41_cvector) | (var_40_cvector - var_41_cvector);
							if(!(var_45_float < (var_192_float * var_192_float))) goto Label_199;
							bool var_368_bool; float var_369_float;
							var_26_float = var_369_float;
							func_265(var_45_float, var_46_float, var_368_bool, var_369_float);
							var_370_bool = !var_368_bool; //@nz
							if(var_370_bool == 0) goto Label_199;
							goto Label_209;
					}
						bool var_371_bool; float var_372_float;
						var_26_float = var_372_float;
						func_265(var_45_float, var_46_float, var_371_bool, var_372_float);
						if(!var_371_bool) { //@nz
							goto Label_209;
						}
						var_43_bool = true;

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
				if(var_42_bool != 0)
					@Sleep(2.0);
				return 20;

			}

		}

	}
}


void func_1046(float var_277_float, object var_278_object, float var_279_float, int var_280_int)
{
	int var_290_int; int var_292_int;
	object var_297_object;
	var_278_object = var_297_object;
	bool var_296_bool;
	func_1034(var_296_bool, var_297_object, "health");
	if(!var_296_bool) //@nz
		var_277_float = 0.0;
	bool var_300_bool; object var_301_object;
	func_1034(var_300_bool, var_301_object, "armor");
	if(!var_300_bool) //@nz
		var_290_int = 0;
	else
		var_301_object->GetProperty("armor", var_290_int);
	string var_305_string; int var_306_int;
	var_280_int = var_306_int;
	func_1026(var_305_string, var_306_int);
	string var_291_string = "armor_" + var_305_string;
	bool var_309_bool; object var_310_object; string var_311_string;
	var_278_object = var_310_object;
	func_1034(var_309_bool, var_310_object, var_311_string);
	if(!var_309_bool) //@nz
		var_292_int = 0;
	else
		var_278_object->GetProperty(var_311_string, var_292_int);

	float var_313_float;
	func_1354(var_313_float, ((var_290_int + var_292_int) / 100.0), (float)1);
	float var_293_float;
	var_313_float = var_293_float;
	float var_294_float;
	var_278_object->GetProperty("health", var_294_float);
	float var_323_float;
	func_1361(var_323_float, (var_294_float - (var_279_float * (1 - var_293_float))), (float)0, (float)1);
	var_278_object->SetProperty("health", var_323_float);
	float var_295_float = var_277_float;
	
}


void func_661(string var_150_string)
{
	var_150_string = "run";
}


void func_1432(bool var_86_bool)
{
	var_86_bool = false;
}


void func_409(object var_0_object, bool var_204_bool)
{
	cvector var_210_cvector; cvector var_211_cvector;
	bool var_215_bool;
	func_1151(var_215_bool, var_0_object);
	if(!var_215_bool) { //@nz
		var_204_bool = false;
		return 10;
	}
	bool var_218_bool;
	float var_214_float;
	func_461(var_214_float, var_218_bool);
	if(var_218_bool != 0) {
		var_0_object->GetPFPosition(var_210_cvector); //@t
		@GetPFPosition(var_211_cvector);
		var_0_object->GetAttackDistance(var_214_float); //@t
		var_214_float += 50;
		if(((var_210_cvector - var_211_cvector) | (var_210_cvector - var_211_cvector)) <= (var_214_float * var_214_float)) {
			func_442(var_214_float);
			var_204_bool = true;
			return 10;
		}
	}
	var_204_bool = false;
}


void func_1430(string var_68_string)
{
	var_68_string = "ui/NPC_Black.png";
}


void func_1175(object var_16_object, int var_17_int)
{
	object var_29_object; object var_30_object; cvector var_31_cvector; float var_32_float; string var_38_string;
	bool var_39_bool = false;
	if(var_17_int != 4) {
		if(var_17_int != 5)
			var_39_bool = true;
	}
	if(var_39_bool != 0) {
		@GetScene(var_29_object);
		@GetPosition(var_31_cvector);
		@GetEyesHeight(var_32_float);
		var_44_float = GetByIndex(var_31_cvector, 1);
		SetByIndex(var_31_cvector, 1) = (var_44_float + (var_32_float / 2));
		@AddActorByType(var_30_object, "scripted", var_29_object, var_31_cvector, [0.0, 0.0, 1.0], "blood.xml");
		var_30_object = null;
		var_29_object = null;
	}
	if(var_16_object == null)
		return 20;
	int var_33_int;
	@GetSecondaryAnimationType(var_33_int);
	if(var_33_int < 0)
		return 20;
	cvector var_34_cvector;
	var_16_object->GetPosition(var_34_cvector);
	cvector var_35_cvector;
	@GetPosition(var_35_cvector);
	cvector var_36_cvector;
	@GetDirection(var_36_cvector);
	cvector var_37_cvector = var_35_cvector - var_34_cvector;
	var_53_float = GetByIndex(var_37_cvector, 0);
	var_54_float = GetByIndex(var_36_cvector, 0);
	var_56_float = GetByIndex(var_37_cvector, 2);
	var_57_float = GetByIndex(var_36_cvector, 2);
	if(((var_53_float * var_54_float) + (var_56_float * var_57_float)) >= 0)
		var_38_string = "fhit";
	else
		var_38_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_38_string + "1"), (var_38_string + "2"), -10);
	
}


void func_1434(object var_13_object)
{
	bool var_15_bool;
	@AddItem(var_15_bool, "revolver_ammo", 0, 2);
	@AddItem(var_15_bool, "alpha_pills", 0, 2);
	object var_22_object;
	var_13_object = var_22_object;
	TaskCall(2);
	func_663(var_22_object);
	TaskReturn();
}


// @pe
void func_1309(void)
{
	@CameraSwitchToNormal();
}


// @pe
void func_663(object var_22_object)
{
	bool var_23_bool;
	func_1372(var_23_bool, "quest_d5_01", "dead");
	object var_29_object;
	var_22_object = var_29_object;
	func_697(var_29_object);
	@SetRTEnvelope(50, 40);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_928(int var_2_int, string var_85_string)
{
	bool var_86_bool;
	func_1432(var_86_bool);
	if(!var_86_bool) //@nz
		return 0;
	if(var_85_string == var_2_int)
		return 0;
	string var_89_string;
	func_1313(var_89_string);
	var_2_int = var_89_string;
}


void func_1313(string var_89_string)
{
	@Trace("playing " + var_89_string);
	float var_92_float;
	float var_93_float;
	@lshGetAnimTimes(var_89_string, var_92_float, var_93_float);
	@lshPlayAnimation(var_92_float, var_93_float);
	@Trace("start: " + var_92_float);
	@Trace("end: " + var_93_float);
}


void func_812(object var_0_object, int var_15_int, object var_16_object)
{
	var_0_object = var_16_object;
	bool var_26_bool; object var_27_object;
	var_16_object = var_27_object;
	func_1253(var_26_bool, var_27_object);
	if(!var_26_bool) { //@nz
		var_15_int = -2;
		return 8;
	}
	object var_22_object;
	@CreateDialog(var_22_object);
	int var_67_int;
	func_1428(var_67_int);
	var_22_object->SetNPCName(var_67_int);
	string var_68_string;
	func_1430(var_68_string);
	var_22_object->SetPhoto(var_68_string);
	int var_69_int;
	func_1411(var_69_int);
	var_22_object->SetPlayerName(var_69_int);
	bool var_23_bool;
	@IsOverrideActive(var_23_bool);
	if(var_23_bool != 0) {
		var_15_int = -2;
		return 8;
	}
	@DoDialog(var_22_object);
	object var_78_object; object var_79_object;
	var_16_object = var_78_object;
	var_22_object = var_79_object;
	TaskCall(4);
	func_875(var_80_object, var_81_object, var_82_string, var_83_bool, var_78_object, var_79_object);
	TaskReturn();
	bool var_25_bool;
	var_22_object->IsDialogEnd(var_25_bool);
	
	for(;;) {
		var_112_bool = !var_25_bool; //@nz
		if(var_112_bool == 0) goto Label_864;
		@sync();
		var_22_object->IsDialogEnd(var_25_bool);
	}
	
Label_864:
	object var_113_object;
	var_16_object = var_113_object;
	func_1309();
	@StopDialog(var_22_object);
	var_22_object->GetReturnValue(-1);
	int var_24_int = var_15_int;
}
EMIT "Stack[-4] = 0";


void func_1331(void)
{
	bool var_15_bool;
	func_1432(var_15_bool);
	if(var_15_bool != 0)
		@lshStopSpeech();
}


void func_697(object var_29_object)
{
	cvector var_40_cvector; cvector var_41_cvector; cvector var_42_cvector; cvector var_43_cvector; string var_44_string; object var_45_object; bool var_46_bool; bool var_47_bool; float var_48_float; cvector var_49_cvector;
	if(var_29_object == null) {
		func_784("fdie");
	} else {
		var_29_object->GetPosition(var_40_cvector);
		@GetPosition(var_41_cvector);
		@GetDirection(var_42_cvector);
		var_43_cvector = var_41_cvector - var_40_cvector;
		var_54_float = GetByIndex(var_43_cvector, 0);
		var_55_float = GetByIndex(var_42_cvector, 0);
		var_57_float = GetByIndex(var_43_cvector, 2);
		var_58_float = GetByIndex(var_42_cvector, 2);
		if(((var_54_float * var_55_float) + (var_57_float * var_58_float)) >= 0)
			var_44_string = "fdie";
		else
			var_44_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_29_object = var_45_object;
		var_65_bool = IsFuncExist(var_29_object, "GetScriptProperty", 2);
		if(var_65_bool != 0) {
			var_29_object->HasScriptProperty(var_46_bool, "Owner");
			if(var_46_bool != 0) {
				var_29_object->GetScriptProperty(var_45_object, "Owner");
				if(var_45_object == null)
					var_29_object = var_45_object;
			}
		}
		var_72_bool = IsFuncExist(var_45_object, "@GetEyesHeight", 1);
		if(var_72_bool != 0) {
			var_45_object->GetEyesHeight(var_48_float);
			var_49_cvector = [0.0, 0.0, 0.0];
			var_73_float = GetByIndex(var_49_cvector, 1);
			var_48_float = var_73_float;
			SetByIndex(var_49_cvector, 1) = var_73_float;
			@LookAsync(var_29_object, "head", var_49_cvector);
			var_47_bool = true;
		} else {
			var_47_bool = false;

		}
		@PlayAnimation("all", var_44_string);
		@WaitForAnimEnd();
		if(var_47_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_44_string);
		@RemoveEnvelope();
		var_45_object = null;
	}
	
}


void func_442(object var_0_object)
{
	@Face(var_0_object);
	@PlayAnimation("all", "bjump");
	cvector var_224_cvector;
	var_0_object->GetPFPosition(var_224_cvector); //@t
	cvector var_225_cvector;
	@GetPFPosition(var_225_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	@SetSpeed([0.0, 0.0, 0.0]);
}


void func_1338(object var_12_object)
{
	object var_14_object;
	@self(var_14_object);
	var_14_object = var_12_object;
}
EMIT "Stack[-1] = 0";


void func_1344(cvector var_51_cvector, cvector var_52_cvector)
{
	float var_55_float = sqrt(var_52_cvector | var_52_cvector);
	if(var_55_float < 0.000001)
		var_51_cvector = [0.0, 0.0, 0.0];
	var_51_cvector = var_52_cvector / var_55_float;
}


// @pe
void func_1354(float var_313_float, float var_314_float, float var_315_float)
{
	if(var_314_float < var_315_float)
		var_314_float = var_313_float;
	else
		var_315_float = var_313_float;
	
}


void func_461(object var_0_object, bool var_183_bool)
{
	bool var_185_bool;
	var_188_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_188_bool != 0) {
		var_0_object->IsAttacking(var_185_bool); //@t
		var_185_bool = var_183_bool;
	}
	var_183_bool = false;
}


// @pe
void func_1361(float var_323_float, float var_324_float, float var_325_float, float var_326_float)
{
	if(var_324_float < var_325_float) {
		var_325_float = var_323_float;
		return 0;
	}
	if(var_324_float > var_326_float) {
		var_326_float = var_323_float;
		return 0;
	}
	var_324_float = var_323_float;
}


// @pe
void func_981(object var_14_object)
{
	object var_16_object;
	var_14_object = var_16_object;
	TaskCall(3);
	int var_15_int;
	func_812(var_17_object, var_15_int, var_16_object);
	TaskReturn();
}


void func_1110(bool var_81_bool, object var_82_object)
{
	bool var_84_bool;
	var_82_object->IsDead(var_84_bool);
	var_84_bool = var_81_bool;
}


void func_472(int var_2_int, int var_4_int)
{
	int var_248_int;
	if(!var_2_int) //@nz
		return 4;
	if(var_4_int != 0) {
		if((var_4_int + -1) > 0)
			return 4;
	}
	float var_247_float;
	@rand(var_247_float);
	float var_254_float;
	func_510(var_254_float);
	if(var_247_float < var_254_float) {
		@irand(var_248_int, var_2_int);
		@Speak("attack" + (var_248_int + 1));
		int var_259_int;
		func_508(var_259_int);
		var_4_int = var_259_int;
	}
}


void func_345(bool var_349_bool, float var_350_float)
{
	float var_353_float; bool var_354_bool;
	@rand(var_353_float);
	if(var_353_float < var_350_float) {

		for(;;) {
			@IsAnimationPlaying(var_354_bool);
			if(!var_354_bool) { //@nz
			} else {
				bool var_357_bool;
				func_409(var_354_bool, var_357_bool);
				if(var_357_bool != 0) {
					var_349_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_349_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
}


void func_1242(object var_169_object)
{
	cvector var_173_cvector;
	var_169_object->GetPosition(var_173_cvector);
	cvector var_174_cvector;
	@GetPosition(var_174_cvector);
	cvector var_175_cvector = var_173_cvector - var_174_cvector;
	var_176_float = GetByIndex(var_175_cvector, 0);
	var_177_float = GetByIndex(var_175_cvector, 2);
	@RotateAsync(var_176_float, var_177_float);
}


void func_1115(bool var_70_bool, object var_71_object)
{
	if(var_71_object == null) {
		var_70_bool = false;
		return 4;
	}
	bool var_77_bool = false;
	var_80_bool = IsFuncExist(var_71_object, "IsDead", 1);
	if(var_80_bool != 0) {
		bool var_81_bool; object var_82_object;
		var_71_object = var_82_object;
		func_1110(var_81_bool, var_82_object);
		if(var_81_bool != 0)
			var_77_bool = true;
	}
	if(var_77_bool != 0) {
		var_70_bool = false;
		return 4;
	}
	object var_74_object;
	@GetScene(var_74_object);
	if(var_74_object == null) {
		var_70_bool = false;
		return 4;
	}
	object var_75_object;
	var_71_object->GetScene(var_75_object);
	if(var_74_object != var_75_object) {
		var_70_bool = false;
		return 4;
	}
	var_70_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1372(bool var_23_bool, string var_24_string, string var_25_string)
{
	object var_27_object;
	@FindActor(var_27_object, var_24_string);
	if(var_27_object == null)
		var_23_bool = false;
	@Trigger(var_27_object, var_25_string);
	var_23_bool = true;
}
EMIT "Stack[-1] = 0";


void func_226(object var_0_object, float var_263_float, int var_264_int)
{
	object var_268_object; float var_269_float; float var_270_float;
	@GetVictim((var_263_float * 0.9), var_268_object);
	@ReportAttack(var_0_object);
	if(var_268_object == var_0_object) {
		float var_274_float; object var_275_object; int var_276_int;
		var_268_object = var_275_object;
		var_264_int = var_276_int;
		func_15(var_276_int);
		var_274_float = var_269_float;
		float var_277_float; object var_278_object; float var_279_float; int var_280_int;
		var_268_object = var_278_object;
		int var_281_int; object var_282_object; int var_283_int;
		var_268_object = var_282_object;
		var_264_int = var_283_int;
		func_18(var_283_int);
		var_281_int = var_280_int;
		func_1046(var_277_float, var_278_object, var_279_float, var_280_int);
		var_277_float = var_270_float;
		int var_330_int;
		func_504(var_330_int);
		@ReportHit(var_0_object, var_330_int, var_270_float, var_279_float);
		object var_331_object; float var_332_float;
		var_268_object = var_331_object;
		var_270_float = var_332_float;
		func_506();
	}
}
EMIT "Stack[-3] = 0";


void func_1253(bool var_26_bool, object var_27_object)
{
	cvector var_37_cvector;
	var_27_object->GetPosition(var_37_cvector);
	float var_36_float;
	var_27_object->GetEyesHeight(var_36_float);
	var_44_float = GetByIndex(var_37_cvector, 1);
	SetByIndex(var_37_cvector, 1) = (var_44_float + var_36_float);
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	@GetEyesHeight(var_36_float);
	var_45_float = GetByIndex(var_38_cvector, 1);
	SetByIndex(var_38_cvector, 1) = (var_45_float + var_36_float);
	cvector var_39_cvector = var_37_cvector - var_38_cvector;
	var_46_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (float)0;
	var_48_float = sqrt(var_39_cvector | var_39_cvector);
	var_39_cvector /= var_48_float;
	cvector var_40_cvector = -var_39_cvector;
	cvector var_51_cvector;
	func_1344(var_51_cvector, (var_40_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_41_cvector = ((var_39_cvector * 70) + (var_51_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_43_bool;
	@IsOverrideActive(var_43_bool);
	if(var_43_bool != 0)
		var_26_bool = false;
	@StopWorld();
	@CameraTransit((var_38_cvector + var_41_cvector), var_40_cvector);
	var_64_float = GetByIndex(var_41_cvector, 0);
	var_65_float = GetByIndex(var_41_cvector, 2);
	@Rotate(var_64_float, var_65_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_26_bool = true;
}


// @pe
void func_875(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, object var_78_object, object var_79_object)
{
	var_0_object = var_79_object;
	var_1_int = var_78_object;
	var_3_bool = false;
	if(1 != 0) {
		func_928(var_79_object, "Neutral");
		var_0_object->SetMessage(12541); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(12542, -1, 13711); //@t
		goto Label_898;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x36f";
	}
Label_898:
	bool var_104_bool;
	func_1432(var_104_bool);
	if(var_104_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_bool != 0) {
			} else {
				func_1313(var_2_int);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_bool != 0) {
				goto Label_927;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_927:
		return 0;

	}
	
}


void func_1003(bool var_13_bool)
{
	var_13_bool = true;
}


void func_369(object var_0_object, bool var_191_bool, float var_192_float)
{
	bool var_198_bool; cvector var_199_cvector; cvector var_200_cvector; cvector var_201_cvector; float var_202_float;
	
	for(;;) {
		@IsAnimationPlaying(var_198_bool);
		if(!var_198_bool) //@nz
			break;
		bool var_204_bool;
		func_409(var_202_float, var_204_bool);
		if(var_204_bool != 0) {
			var_191_bool = true;
			return 10;
		}
		bool var_229_bool;
		func_1151(var_229_bool, var_0_object);
		if(!var_229_bool) { //@nz
			var_191_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_199_cvector); //@t
		@GetPFPosition(var_200_cvector);
		var_201_cvector = var_199_cvector - var_200_cvector;
		var_202_float = var_201_cvector | var_201_cvector;
		if(var_202_float < (var_192_float * var_192_float)) {
			bool var_234_bool; float var_235_float;
			var_192_float = var_235_float;
			func_265(var_201_cvector, var_202_float, var_234_bool, var_235_float);
			var_191_bool = true;
			return 10;
		}
		@sync();
	}
	var_191_bool = false;
}


void func_504(int var_330_int)
{
	var_330_int = 0;
}


// @pe
void func_506(void)
{
}


void func_508(int var_259_int)
{
	var_259_int = 1;
}


void func_510(float var_254_float)
{
	var_254_float = 0.5;
}


void func_1151(bool var_66_bool, object var_67_object)
{
	object var_71_object;
	var_67_object = var_71_object;
	bool var_70_bool;
	func_1115(var_70_bool, var_71_object);
	if(!var_70_bool) { //@nz
		var_66_bool = false;
		return 2;
	}
	bool var_88_bool; object var_89_object;
	func_1034(var_88_bool, var_89_object, "noaccess");
	if(!var_88_bool) { //@nz
		var_66_bool = true;
		return 2;
	}
	int var_69_int;
	var_89_object->GetProperty("noaccess", var_69_int);
	var_66_bool = var_69_int == 0;
}


