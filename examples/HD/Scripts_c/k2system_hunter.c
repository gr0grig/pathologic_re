maintask task_0
{
	void init(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool)
	{
		@Sleep(3);
		disable OnSee;
		enable OnSee;
		disable OnHear;
		enable OnHear;
	
		while(true != 0) {
			func_75();
		}
	
	}

	// @pe
	void OnSee(object actor, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool)
	{
		bool var_10_bool = false;
		bool var_11_bool; object var_12_object;
		var_9_bool = var_12_object;
		func_1266(var_11_bool, var_12_object);
		if(var_11_bool != 0) {
			bool var_15_bool; object var_16_object;
			var_9_bool = var_16_object;
			func_1397(var_15_bool, var_16_object);
			if(var_15_bool != 0)
				var_10_bool = true;
		}
		if(var_10_bool != 0) {
			func_156();
			object var_49_object;
			var_9_bool = var_49_object;
			TaskCall(1);
			func_161(var_49_object);
			TaskReturn();
		}
	}

	// @pe
	void OnHear(object actor, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool)
	{
		bool var_10_bool = false;
		bool var_11_bool; object var_12_object;
		var_9_bool = var_12_object;
		func_1266(var_11_bool, var_12_object);
		if(var_11_bool != 0) {
			bool var_15_bool; object var_16_object;
			var_9_bool = var_16_object;
			func_1397(var_15_bool, var_16_object);
			if(var_15_bool != 0)
				var_10_bool = true;
		}
		if(var_10_bool != 0) {
			func_156();
			object var_49_object;
			var_9_bool = var_49_object;
			TaskCall(1);
			func_161(var_49_object);
			TaskReturn();
		}
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool)
	{
		func_156();
		object var_10_object;
		var_9_bool = var_10_object;
		TaskCall(1);
		func_161(var_10_object);
		TaskReturn();
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
			func_1666(var_1_int);
		} else {
			int var_17_int;
			func_1048(var_8_bool, var_17_int, var_17_int);
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
			func_1563(var_13_object);
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
		func_904(var_9_object);
		object var_14_object;
		var_9_object = var_14_object;
		func_1827();
	}

}


task task_3
{
	void OnUse(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object)
	{
		bool var_11_bool;
		@IsOverrideActive(var_11_bool);
		if(!var_11_bool) { //@nz
			object var_13_object;
			var_9_object = var_13_object;
			func_1716(var_13_object);
		}
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


void OnUnload(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool)
{
	object var_9_object;
	func_1615(var_9_object);
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
	func_1465(var_13_object, var_14_int, var_15_float);
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
	func_1533(var_17_float, var_18_cvector, var_19_cvector);
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
	func_1778(var_10_object);
}


void func_1666(object var_12_object)
{
	bool var_14_bool;
	@IsPlayerActor(var_12_object, var_14_bool);
	if(var_14_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1283(float var_389_float, object var_390_object, float var_391_float, int var_392_int)
{
	int var_402_int; int var_404_int;
	object var_409_object;
	var_390_object = var_409_object;
	bool var_408_bool;
	func_1271(var_408_bool, var_409_object, "health");
	if(!var_408_bool) //@nz
		var_389_float = 0.0;
	bool var_412_bool; object var_413_object;
	func_1271(var_412_bool, var_413_object, "armor");
	if(!var_412_bool) //@nz
		var_402_int = 0;
	else
		var_413_object->GetProperty("armor", var_402_int);
	string var_417_string; int var_418_int;
	var_392_int = var_418_int;
	func_1245(var_417_string, var_418_int);
	string var_403_string = "armor_" + var_417_string;
	bool var_423_bool; object var_424_object; string var_425_string;
	var_390_object = var_424_object;
	func_1271(var_423_bool, var_424_object, var_425_string);
	if(!var_423_bool) //@nz
		var_404_int = 0;
	else
		var_390_object->GetProperty(var_425_string, var_404_int);

	float var_427_float;
	func_1631(var_427_float, ((var_402_int + var_404_int) / 100.0), (float)1);
	float var_405_float;
	var_427_float = var_405_float;
	float var_406_float;
	var_390_object->GetProperty("health", var_406_float);
	float var_407_float = var_391_float * (1 - var_405_float);
	float var_437_float;
	func_1638(var_437_float, (var_406_float - var_407_float), (float)0, (float)1);
	var_390_object->SetProperty("health", var_437_float);
	bool var_443_bool; object var_444_object;
	var_390_object = var_444_object;
	func_1266(var_443_bool, var_444_object);
	if(var_443_bool != 0) {
		float var_445_float = -var_407_float;
		func_1649(var_445_float);
	}
	var_407_float = var_389_float;
	
}


void func_646(object var_0_object, bool var_277_bool, float var_278_float)
{
	bool var_284_bool; cvector var_285_cvector; cvector var_286_cvector; cvector var_287_cvector; float var_288_float;
	
	for(;;) {
		@IsAnimationPlaying(var_284_bool);
		if(!var_284_bool) //@nz
			break;
		bool var_290_bool;
		func_717(var_290_bool);
		if(var_290_bool != 0) {
			var_277_bool = true;
			return 10;
		}
		bool var_333_bool;
		func_1397(var_333_bool, var_0_object);
		if(!var_333_bool) { //@nz
			var_277_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_285_cvector); //@t
		@GetPFPosition(var_286_cvector);
		var_287_cvector = var_285_cvector - var_286_cvector;
		var_288_float = var_287_cvector | var_287_cvector;
		if(var_288_float < (var_278_float * var_278_float)) {
			bool var_338_bool; float var_339_float;
			var_278_float = var_339_float;
			func_482(var_287_cvector, var_288_float, var_338_bool, var_339_float);
			var_277_bool = true;
			return 10;
		}
		@sync();
	}
	func_821(var_288_float);
	var_277_bool = false;
}


void func_904(int var_2_int)
{
	@KillTimer(1);
	if(var_2_int != 0) {
		var_2_int = false;
		@UnlookAsync("head");
	}
	func_1070(var_9_object);
}


void func_778(object var_0_object, bool var_240_bool)
{
	bool var_242_bool;
	var_245_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_245_bool != 0) {
		var_0_object->IsAttacking(var_242_bool); //@t
		var_242_bool = var_240_bool;
	}
	var_240_bool = false;
}


void func_1547(object var_223_object)
{
	cvector var_227_cvector;
	var_223_object->GetPosition(var_227_cvector);
	cvector var_228_cvector;
	@GetPosition(var_228_cvector);
	cvector var_229_cvector = var_227_cvector - var_228_cvector;
	var_230_float = GetByIndex(var_229_cvector, 0);
	var_231_float = GetByIndex(var_229_cvector, 2);
	@RotateAsync(var_230_float, var_231_float);
}


void func_1675(void)
{
	object var_351_object;
	@GetScene(var_351_object);
	object var_353_object;
	func_1615(var_353_object);
	@BroadcastMessage("battle", var_353_object, var_351_object);
}
EMIT "Stack[-1] = 0";


void func_1421(object var_26_object)
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


void func_789(int var_2_int, float var_5_float)
{
	int var_360_int;
	if(!var_2_int) //@nz
		return 4;
	if(var_5_float != 0) {
		if((var_5_float + -1) > 0)
			return 4;
	}
	float var_359_float;
	@rand(var_359_float);
	float var_366_float;
	func_839(var_366_float);
	if(var_359_float < var_366_float) {
		@irand(var_360_int, var_2_int);
		@Speak("attack" + (var_360_int + 1));
		int var_371_int;
		func_837(var_371_int);
		var_5_float = var_371_int;
	}
}


void func_1558(bool var_25_bool)
{
	bool var_27_bool;
	@IsLoaded(var_27_bool);
	var_27_bool = var_25_bool;
}


void func_1686(string var_35_string, int var_36_int)
{
	string var_38_string = "idle";
	if(var_36_int != 0)
		var_38_string += var_36_int;
	var_38_string = var_35_string;
}


void func_408(object var_1_object, int var_2_int, bool var_4_bool)
{
	bool var_45_bool; bool var_46_bool; cvector var_47_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_45_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_45_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_int = 0;

		for(;;) {
			@IsExisting3DSound(var_46_bool, ("attack" + (var_2_int + 1)));
			if(!var_46_bool) //@nz
				break;
			var_2_int += 1;
		}
		@GetAnimationOffset(var_47_cvector, "all", "bjump");
		var_61_float = GetByIndex(var_47_cvector, 2);
		var_4_bool = -var_61_float;

	}
}


// @pe
void func_1048(object var_0_object, int var_1_int, int var_17_int)
{
	if(var_17_int != 0)
		return 0;
	bool var_20_bool;
	func_1086(var_20_bool, var_1_int);
	if(!var_20_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_154(bool var_54_bool)
{
	var_54_bool = true;
}


void func_1563(object var_13_object)
{
	float var_16_float;
	var_13_object->GetEyesHeight(var_16_float);
	cvector var_17_cvector = [0.0, 0.0, 0.0];
	var_18_float = GetByIndex(var_17_cvector, 1);
	var_16_float = var_18_float;
	SetByIndex(var_17_cvector, 1) = var_18_float;
	@LookAsync(var_13_object, "head", var_17_cvector);
}


void func_156(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1693(int var_29_int)
{
	int var_32_int; bool var_33_bool;
	var_32_int = 0;
	
	for(;;) {
		string var_35_string; int var_36_int;
		var_32_int = var_36_int;
		func_1686(var_35_string, var_36_int);
		@HasAnimation(var_33_bool, "all", var_35_string);
		if(!var_33_bool) //@nz
			break;
		var_32_int += 1;
	}
	var_32_int = var_29_int;
}


// @pe
void func_161(object var_10_object)
{
	
	for(;;) {
		object var_17_object;
		func_179(var_13_int, var_14_bool, var_15_float, var_16_int, var_17_object, var_17_object, true, 180.0);
		@Sleep(1);
	}
}
EMIT "Return(); Pop(0)";


void func_1574(string var_59_string)
{
	bool var_68_bool; int var_69_int; bool var_70_bool; int var_71_int; bool var_72_bool; float var_73_float; cvector var_74_cvector; cvector var_75_cvector;
	@IsExisting3DSound(var_68_bool, var_59_string);
	if(!var_68_bool) { //@nz
		var_69_int = 0;

		for(;;) {
			@IsExisting3DSound(var_70_bool, (var_59_string + (var_69_int + 1)));
			if(!var_70_bool) { //@nz
				break;
			Label_1594:
				@irand(var_71_int, var_69_int);
				var_59_string += (var_71_int + 1);
	}
			@Is3DSoundLoaded(var_72_bool, var_59_string);
			if(var_72_bool != 0) {
				@GetEyesHeight(var_73_float);
				@GetDirection(var_74_cvector);
				var_75_cvector = var_74_cvector * 50;
				var_86_float = GetByIndex(var_75_cvector, 1);
				SetByIndex(var_75_cvector, 1) = (var_86_float + var_73_float);
				@PlayGlobalSound(var_59_string, var_75_cvector);
			}
		}
		var_69_int += 1;
	}
	var_81_bool = !var_69_int; //@nz
	if(var_81_bool == 0) goto Label_1594;
}


// @pe
void func_173(float var_386_float)
{
	var_386_float = 0.2;
}


void func_1070(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_1710(int var_13_int)
{
	int var_15_int;
	@GetVariable("branch", var_15_int);
	var_15_int = var_13_int;
}


// @pe
void func_176(int var_393_int)
{
	var_393_int = 0;
}


void func_689(object var_0_object, bool var_292_bool)
{
	cvector var_298_cvector; cvector var_299_cvector;
	bool var_303_bool;
	func_1397(var_303_bool, var_0_object);
	if(!var_303_bool) { //@nz
		var_292_bool = false;
		return 10;
	}
	bool var_306_bool;
	float var_302_float;
	func_778(var_302_float, var_306_bool);
	if(var_306_bool != 0) {
		var_0_object->GetPFPosition(var_298_cvector); //@t
		@GetPFPosition(var_299_cvector);
		var_0_object->GetAttackDistance(var_302_float); //@t
		var_292_bool = ((var_298_cvector - var_299_cvector) | (var_298_cvector - var_299_cvector)) <= ((var_302_float + 50) * (var_302_float + 50));
		return 10;
	}
	var_292_bool = false;
}


void func_946(object var_0_object, object var_1_object, bool var_149_bool, object var_150_object, float var_151_float, float var_152_float, bool var_153_bool, bool var_154_bool)
{
	bool var_163_bool; object var_165_object; cvector var_166_cvector; cvector var_167_cvector; float var_169_float; object var_170_object;
	var_0_object = false;
	var_1_object = var_150_object;
	bool var_164_bool;
	var_154_bool = var_164_bool;
	
	for(;;) {
		bool var_171_bool; object var_172_object;
		var_150_object = var_172_object;
		func_1086(var_171_bool, var_172_object);
		if(!var_171_bool) { //@nz
			var_149_bool = false;
			return 16;
		}
		var_150_object->GetPosition(var_166_cvector);
		@GetPosition(var_167_cvector);
		var_169_float = (var_166_cvector - var_167_cvector) | (var_166_cvector - var_167_cvector);
		bool var_176_bool = false;
		if(var_152_float > 0) {
			if(var_169_float > (var_152_float * var_152_float))
				var_176_bool = true;
		}
		if(var_176_bool != 0) {
			@Stop();
			var_149_bool = false;
			return 16;
		}
		if(var_169_float > (var_151_float * var_151_float)) {
			var_150_object->GetPFPosition(var_166_cvector);
			@FindPathTo(var_170_object, var_166_cvector);
			if(var_170_object != null) {
				var_170_object = var_165_object;
				var_170_object = null;
			}
			if(var_165_object != null) {
				if(var_164_bool == 0) goto Label_999;
				var_164_bool = false;
				@RotatePath(var_165_object, var_163_bool);
				if(!var_163_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_189_string;
						func_1093(var_189_string);
						string var_190_string;
						func_1095(var_190_string);
						@FollowPath(var_165_object, var_153_bool, var_163_bool, var_189_string, var_190_string);
						if(!var_163_bool) { //@nz
							if(var_0_object == 0) goto Label_1018;
							var_165_object = null;
						}
					EMIT "GOTO 0x3fb";

					Label_1018:
						} else {
					var_165_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_163_bool);
					if(!var_163_bool) { //@nz
						if(var_0_object != 0) {
							var_165_object = null;
							goto Label_1046;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1046;
		}
			var_170_object = null;
			goto Label_1044;

		Label_1044:
			var_165_object = null;

		}
	Label_1046:
		for(;;) {
			var_149_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_179(object var_0_object, int var_3_int, float var_5_float, object var_17_object, bool var_18_bool, float var_19_float, bool var_126_bool, bool var_218_bool)
{
	float var_31_float; cvector var_32_cvector; cvector var_33_cvector; bool var_35_bool; float var_38_float; cvector var_39_cvector; bool var_40_bool; float var_41_float;
	func_408(var_39_cvector, var_40_bool, var_41_float);
	var_5_float = 0;
	var_66_bool = IsFuncExist(var_17_object, "@GetAttackDistance", 1);
	if(var_66_bool != 0) {
		var_17_object->GetAttackDistance(var_31_float);
		var_31_float += 50;
	} else {
						var_19_float = var_31_float;
	}
	if(var_31_float >= 150)
		var_31_float = 150;
	var_3_int = false;
	var_0_object = var_17_object;
	bool var_34_bool;
	@IsPlayerActor(var_0_object, var_34_bool);
	if(var_34_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_72_object;
		func_1615(var_72_object);
		@SendPlayerEnemy(var_17_object, var_72_object);
	}
	if(var_18_bool != 0)
		var_35_bool = false;
	else
		var_35_bool = true;

	
Label_219:
	for(;;) {
		bool var_77_bool = false;
		bool var_78_bool;
		func_1397(var_78_bool, var_0_object);
		if(var_78_bool != 0) {
			if(!var_3_int) //@nz
				var_77_bool = true;
		}
		if(var_77_bool != 0) {
			func_821(var_41_float);
			var_0_object->GetPFPosition(var_32_cvector); //@t
			@GetPFPosition(var_33_cvector);
			var_38_float = (var_32_cvector - var_33_cvector) | (var_32_cvector - var_33_cvector);
			if(var_38_float >= ((400.0 + var_31_float) * (400.0 + var_31_float))) {
				bool var_120_bool; float var_122_float;
				var_31_float = var_122_float;
				TaskCall(2);
				func_841(var_128_bool, var_120_bool, var_0_object, var_122_float, 10000.0, true, false);
				TaskReturn();
				if(!var_126_bool) { //@nz
				} else {
					var_35_bool = false;
			} else {
			if(var_38_float >= (var_19_float * var_19_float)) {
				var_0_object->GetPFPosition(var_39_cvector); //@t
				@CanReachByPF(var_40_bool, var_39_cvector);
				if(!var_40_bool) { //@nz
					bool var_212_bool; float var_214_float;
					var_31_float = var_214_float;
					TaskCall(2);
					func_841(var_220_bool, var_212_bool, var_0_object, var_214_float, 10000.0, true, false);
					TaskReturn();
					if(!var_218_bool) { //@nz
						goto Label_391;
					}
					var_35_bool = false;
					goto Label_219;
				}
				if(!var_35_bool) { //@nz
					func_1547(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_821(var_41_float);
					@StopAsync();
					var_35_bool = true;
					bool var_234_bool;
					func_1397(var_234_bool, var_0_object);
					if(!var_234_bool) { //@nz
						goto Label_391;
					}
				}
				@rand(var_41_float);
				bool var_237_bool;
				var_239_bool = var_41_float < 0.25;
				if(var_239_bool != 1) {
					bool var_240_bool;
					func_778(true, var_240_bool);
					if(var_240_bool != 1)
						var_237_bool = false;
				}
				if(var_237_bool != 0) {
					@Face(var_0_object);
					func_828();
					@PlayAnimation("all", "attack_stay");
					bool var_277_bool; float var_278_float;
					func_646(var_41_float, var_277_bool, var_278_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_821(var_41_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_499_bool;
					func_778(var_41_float, var_499_bool);
					var_500_bool = !var_499_bool; //@nz
					if(var_500_bool == 0) goto Label_381;
					bool var_501_bool;
					func_1397(var_501_bool, var_0_object);
					if(!var_501_bool) { //@nz
						goto Label_391;
					}
					var_0_object->GetPFPosition(var_32_cvector); //@t
					@GetPFPosition(var_33_cvector);
					if(!(((var_32_cvector - var_33_cvector) | (var_32_cvector - var_33_cvector)) < (var_278_float * var_278_float))) goto Label_381;
					bool var_506_bool; float var_507_float;
					var_19_float = var_507_float;
					func_482(var_40_bool, var_41_float, var_506_bool, var_507_float);
					var_508_bool = !var_506_bool; //@nz
					if(var_508_bool == 0) goto Label_381;
					goto Label_391;
			}
				bool var_509_bool; float var_510_float;
				var_19_float = var_510_float;
				func_482(var_40_bool, var_41_float, var_509_bool, var_510_float);
				if(!var_509_bool) { //@nz
					goto Label_391;
				}
				var_35_bool = true;

			}
		Label_381:
			goto Label_390;
			}
			Label_390:
			}
		}
	Label_391:
		@WaitForAnimEnd();
		if(var_3_int != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_34_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


// @pe
void func_1716(object var_13_object)
{
	int var_14_int;
	func_1710(var_14_int);
	if(var_14_int == 1)
		@WorkWithCorpse(var_13_object);
	else
		@Barter(var_13_object);
	
}


void func_821(object var_0_object)
{
	func_1666(var_0_object);
}


void func_1465(object var_13_object, int var_14_int, float var_15_float)
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
		func_1259(var_43_cvector, var_44_object);
		var_43_cvector = var_42_cvector;
		func_1621(var_41_cvector, var_42_cvector);
		var_41_cvector = var_25_cvector;
		@CreateVectorVector(var_26_object);
		var_27_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_27_int), var_28_bool, var_29_cvector, var_30_cvector);
			if(!var_28_bool) { //@nz
				break;
			Label_1527:
				var_26_object = null;
	}
			object var_103_object;
			var_13_object = var_103_object;
			func_1421(var_103_object);
		}
		if((var_30_cvector | var_25_cvector) >= 0.70710677)
			var_26_object->add(var_29_cvector);
		var_27_int += 1;
	}
	int var_31_int;
	var_26_object->size(var_31_int);
	if(var_31_int == 0) goto Label_1527;
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
	func_1533(var_60_float, var_61_cvector, var_62_cvector);
}


void func_826(int var_454_int)
{
	var_454_int = 0;
}


void func_443(object var_0_object, float var_375_float, int var_376_int)
{
	object var_380_object; float var_381_float; float var_382_float;
	@GetVictim((var_375_float * 0.9), var_380_object);
	@ReportAttack(var_0_object);
	if(var_380_object == var_0_object) {
		float var_386_float; object var_387_object; int var_388_int;
		var_380_object = var_387_object;
		var_376_int = var_388_int;
		func_173(var_388_int);
		var_386_float = var_381_float;
		float var_389_float; object var_390_object; float var_391_float; int var_392_int;
		var_380_object = var_390_object;
		int var_393_int; object var_394_object; int var_395_int;
		var_380_object = var_394_object;
		var_376_int = var_395_int;
		func_176(var_395_int);
		var_393_int = var_392_int;
		func_1283(var_389_float, var_390_object, var_391_float, var_392_int);
		var_389_float = var_382_float;
		int var_454_int;
		func_826(var_454_int);
		@ReportHit(var_0_object, var_454_int, var_382_float, var_391_float);
		object var_455_object; float var_456_float;
		var_380_object = var_455_object;
		var_382_float = var_456_float;
		func_833();
	}
}
EMIT "Stack[-3] = 0";


void func_828(void)
{
	func_1574("attack_stay");
}


// @pe
void func_1213(string var_58_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_59_string;
	var_58_string = var_59_string;
	func_1574(var_59_string);
	@PlayAnimation("all", var_58_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_58_string);
	@RemoveEnvelope();
}


// @pe
void func_1086(bool var_20_bool, object var_21_object)
{
	object var_23_object;
	var_21_object = var_23_object;
	bool var_22_bool;
	func_1397(var_22_bool, var_23_object);
	var_22_bool = var_20_bool;
}


// @pe
void func_833(void)
{
}


void func_1729(string var_19_string)
{
	object var_23_object;
	@CreateInvItem(var_23_object);
	var_23_object->SetItemName(var_19_string);
	var_23_object->SetProperty("Organ", 1);
	int var_24_int;
	var_23_object->GetItemID(var_24_int);
	bool var_25_bool;
	@AddItem(var_25_bool, var_23_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_835(bool var_479_bool)
{
	var_479_bool = true;
}


void func_837(int var_371_int)
{
	var_371_int = 1;
}


void func_1093(string var_189_string)
{
	var_189_string = "walk";
}


void func_839(float var_366_float)
{
	var_366_float = 0.5;
}


void func_1095(string var_190_string)
{
	var_190_string = "run";
}


void func_841(int var_2_int, bool var_120_bool, object var_121_object, float var_122_float, float var_123_float, bool var_124_bool, bool var_125_bool)
{
	object var_133_object;
	func_1666(var_133_object);
	@SetTimer(1, 5);
	bool var_131_bool;
	@CanSee(var_131_bool, var_133_object);
	if(var_131_bool != 0) {
		var_2_int = true;
		object var_137_object;
		var_121_object = var_137_object;
		func_1563(var_137_object);
	} else {
		var_2_int = false;
	}
	bool var_144_bool; object var_145_object;
	func_1266(var_144_bool, var_145_object);
	if(var_144_bool != 0) {
		object var_148_object;
		func_1615(var_148_object);
		@SendPlayerEnemy(var_145_object, var_148_object);
	}
	bool var_149_bool; object var_150_object; float var_151_float; float var_152_float; bool var_153_bool; bool var_154_bool;
	var_121_object = var_150_object;
	var_122_float = var_151_float;
	var_123_float = var_152_float;
	var_124_bool = var_153_bool;
	var_125_bool = var_154_bool;
	bool var_132_bool;
	func_946(var_131_bool, var_132_bool, var_149_bool, var_150_object, var_151_float, var_152_float, var_153_bool, var_154_bool);
	var_149_bool = var_132_bool;
	if(var_2_int != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_132_bool = var_120_bool;
	
}


// @pe
void func_1097(object var_35_object)
{
	object var_36_object;
	var_35_object = var_36_object;
	func_1122(var_36_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_75(void)
{
	int var_20_int; int var_21_int; bool var_22_bool; float var_23_float; bool var_24_bool;
	@WaitForAnimEnd();
	bool var_25_bool;
	func_1558(var_25_bool);
	if(!var_25_bool) //@nz
		return 14;
	int var_29_int;
	func_1693(var_29_int);
	int var_18_int;
	var_29_int = var_18_int;
	int var_19_int = 0;
	
	for(;;) {
		bool var_42_bool = false;
		if(var_19_int < 5) {
			bool var_45_bool;
			func_1558(var_45_bool);
			if(var_45_bool != 0)
				var_42_bool = true;
		}
		if(var_42_bool != 0) {
			@irand(var_20_int, 3);
			if(var_20_int == 0) {
				if(var_18_int == 0) goto Label_122;
				@irand(var_21_int, var_18_int);
				string var_51_string; int var_52_int;
				var_21_int = var_52_int;
				func_1686(var_51_string, var_52_int);
				@PlayAnimation("all", var_51_string);
				@WaitForAnimEnd(var_22_bool);
				if(!var_22_bool) { //@nz
				} else {
			} else {
			if(var_20_int == 1) {
				@rand(var_23_float, 4);
				@Sleep((var_23_float + 1), var_24_bool);
				if(!var_24_bool) { //@nz
					goto Label_151;
				}
			} else if(var_19_int != 0) {
				goto Label_151;
			}
			}
					bool var_54_bool;
					func_154(var_54_bool);
					var_55_bool = !var_54_bool; //@nz
					if(var_55_bool == 0) goto Label_146;
			}
		}
	Label_151:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_146:
		@ResetAAS();
		var_19_int += 1;
	}
	
}


void func_1356(bool var_37_bool, object var_38_object)
{
	bool var_40_bool;
	var_38_object->IsDead(var_40_bool);
	var_40_bool = var_37_bool;
}


void func_717(bool var_290_bool)
{
	bool var_291_bool = false;
	bool var_292_bool;
	func_689(var_291_bool, var_292_bool);
	if(var_292_bool != 0) {
		bool var_309_bool;
		func_733(var_290_bool, var_291_bool, var_309_bool);
		if(var_309_bool != 0)
			var_291_bool = true;
	}
	if(var_291_bool != 0) {
		var_290_bool = true;
		return 0;
	}
	var_290_bool = false;
}


void func_1615(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_1361(bool var_26_bool, object var_27_object)
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
		func_1356(var_37_bool, var_38_object);
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


void func_1746(void)
{
	int var_13_int;
	func_1710(var_13_int);
	if(var_13_int != 1) {
	}
	func_1729("liver");
	func_1729("kidney");
	func_1729("heart");
	func_1729("blood");
}


void func_1621(cvector var_41_cvector, cvector var_42_cvector)
{
	float var_50_float = sqrt(var_42_cvector | var_42_cvector);
	if(var_50_float < 0.000001)
		var_41_cvector = [0.0, 0.0, 0.0];
	var_41_cvector = var_42_cvector / var_50_float;
}


void func_733(object var_0_object, bool var_4_bool, bool var_309_bool)
{
	object var_315_object; float var_317_float; cvector var_318_cvector; cvector var_319_cvector;
	@GetScene(var_315_object);
	bool var_316_bool = false;
	
	for(;;) {
		cvector var_320_cvector;
		func_1259(var_320_cvector, var_0_object);
		var_326_int = -var_320_cvector;
		@FindDirLength(var_317_float, var_326_int, var_4_bool);
		if(var_317_float < var_4_bool) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_318_cvector); //@t
				@GetPFPosition(var_319_cvector);
				@WaitForAnimEnd();
				func_821(var_319_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_316_bool = true;
				bool var_331_bool;
				func_689(var_319_cvector, var_331_bool);
				var_332_bool = !var_331_bool; //@nz
				if(var_332_bool == 0) goto Label_774;
		}
		for(;;) {
			var_316_bool = var_309_bool;

		}

	Label_774:
	}
}
EMIT "Stack[-5] = 0";


// @pe
void func_1245(string var_417_string, int var_418_int)
{
	if(var_418_int == 2) {
		var_417_string = "fire";
		return 0;
	EMIT "GOTO 0x4e9";
	}
	if(var_418_int == 1) {
		var_417_string = "bullet";
		return 0;
	}
	var_417_string = "phys";
}


// @pe
void func_1631(float var_427_float, float var_428_float, float var_429_float)
{
	if(var_428_float < var_429_float)
		var_428_float = var_427_float;
	else
		var_429_float = var_427_float;
	
}


void func_482(object var_0_object, object var_1_object, bool var_338_bool, float var_339_float)
{
	string var_347_string;
	func_821(var_347_string);
	int var_344_int;
	@irand(var_344_int, var_1_object);
	@Face(var_0_object);
	@SetAttackState(true);
	func_1675();
	@PlayAnimation("all", ("attack_begin" + (var_344_int + 1)));
	@WaitForAnimEnd();
	int var_346_int;
	func_789(var_346_int, var_347_string);
	bool var_372_bool;
	func_1397(var_372_bool, var_0_object);
	if(!var_372_bool) { //@nz
		@StopAsync();
		var_338_bool = false;
		return 8;
	}
	float var_375_float; int var_376_int;
	var_339_float = var_375_float;
	var_344_int = var_376_int;
	func_443(var_347_string, var_375_float, var_376_int);
	bool var_345_bool;
	@HasAnimation(var_345_bool, "all", ("attack_middle" + var_344_int));
	if(var_345_bool != 0) {
		func_1675();
		@PlayAnimation("all", ("attack_middle" + var_344_int));
		@WaitForAnimEnd();
		func_821(var_347_string);
		bool var_464_bool;
		func_1397(var_464_bool, var_0_object);
		if(!var_464_bool) { //@nz
			@StopAsync();
			var_338_bool = false;
			return 8;
		}
		float var_467_float; int var_468_int;
		var_339_float = var_467_float;
		func_443(var_347_string, var_467_float, var_468_int);
		var_346_int = 1;

		for(;;) {
			var_347_string = (("attack_middle" + var_468_int) + "_") + var_346_int;
			@HasAnimation(var_345_bool, "all", var_347_string);
			if(!var_345_bool) { //@nz
			} else {
				func_1675();
				@PlayAnimation("all", var_347_string);
				@WaitForAnimEnd();
				func_821(var_347_string);
				bool var_490_bool;
				func_1397(var_490_bool, var_0_object);
				if(!var_490_bool) { //@nz
					@StopAsync();
					var_338_bool = false;
					return 8;
				}
				float var_493_float; int var_494_int;
				var_339_float = var_493_float;
				var_344_int = var_494_int;
				func_443(var_347_string, var_493_float, var_494_int);
				var_346_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_344_int));
		bool var_479_bool;
		func_835(var_479_bool);
		if(var_479_bool != 0) {
			bool var_480_bool;
			func_619(var_480_bool, 0.75);
			@StopAsync();
		}
		var_338_bool = true;
		return 8;

	}
}


void func_1122(object var_36_object)
{
	cvector var_47_cvector; cvector var_48_cvector; cvector var_49_cvector; cvector var_50_cvector; string var_51_string; object var_52_object; bool var_53_bool; bool var_54_bool; float var_55_float; cvector var_56_cvector;
	if(var_36_object == null) {
		func_1213("fdie");
	} else {
		var_36_object->GetPosition(var_47_cvector);
		@GetPosition(var_48_cvector);
		@GetDirection(var_49_cvector);
		var_50_cvector = var_48_cvector - var_47_cvector;
		var_90_float = GetByIndex(var_50_cvector, 0);
		var_91_float = GetByIndex(var_49_cvector, 0);
		var_93_float = GetByIndex(var_50_cvector, 2);
		var_94_float = GetByIndex(var_49_cvector, 2);
		if(((var_90_float * var_91_float) + (var_93_float * var_94_float)) >= 0)
			var_51_string = "fdie";
		else
			var_51_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_36_object = var_52_object;
		var_101_bool = IsFuncExist(var_36_object, "GetScriptProperty", 2);
		if(var_101_bool != 0) {
			var_36_object->HasScriptProperty(var_53_bool, "Owner");
			if(var_53_bool != 0) {
				var_36_object->GetScriptProperty(var_52_object, "Owner");
				if(var_52_object == null)
					var_36_object = var_52_object;
			}
		}
		var_108_bool = IsFuncExist(var_52_object, "@GetEyesHeight", 1);
		if(var_108_bool != 0) {
			var_52_object->GetEyesHeight(var_55_float);
			var_56_cvector = [0.0, 0.0, 0.0];
			var_109_float = GetByIndex(var_56_cvector, 1);
			var_55_float = var_109_float;
			SetByIndex(var_56_cvector, 1) = var_109_float;
			@LookAsync(var_36_object, "head", var_56_cvector);
			var_54_bool = true;
		} else {
			var_54_bool = false;

		}
		string var_111_string;
		var_51_string = var_111_string;
		func_1574(var_111_string);
		@PlayAnimation("all", var_51_string);
		@WaitForAnimEnd();
		if(var_54_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_51_string);
		@RemoveEnvelope();
		var_52_object = null;
	}
	
}


// @pe
void func_1638(float var_437_float, float var_438_float, float var_439_float, float var_440_float)
{
	if(var_438_float < var_439_float) {
		var_439_float = var_437_float;
		return 0;
	}
	if(var_438_float > var_440_float) {
		var_440_float = var_437_float;
		return 0;
	}
	var_438_float = var_437_float;
}


void func_619(bool var_480_bool, float var_481_float)
{
	float var_484_float; bool var_485_bool;
	@rand(var_484_float);
	if(var_484_float < var_481_float) {

		for(;;) {
			@IsAnimationPlaying(var_485_bool);
			if(!var_485_bool) { //@nz
			} else {
				bool var_488_bool;
				func_717(var_488_bool);
				if(var_488_bool != 0) {
					var_480_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_480_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_821(var_485_bool);
}


void func_1259(cvector var_43_cvector, object var_44_object)
{
	cvector var_47_cvector;
	@GetPosition(var_47_cvector);
	cvector var_48_cvector;
	var_44_object->GetPosition(var_48_cvector);
	var_43_cvector = var_48_cvector - var_47_cvector;
}


void func_1649(float var_445_float)
{
	object var_447_object;
	@CreateFloatVector(var_447_object);
	var_447_object->add(var_445_float);
	if(var_445_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_447_object);
}
EMIT "Stack[-1] = 0";


void func_1266(bool var_144_bool, object var_145_object)
{
	bool var_147_bool;
	@IsPlayerActor(var_145_object, var_147_bool);
	var_147_bool = var_144_bool;
}


void func_1778(object var_10_object)
{
	object var_12_object;
	@GetScene(var_12_object);
	func_1746();
	@SetProperty("dead", 1);
	object var_35_object;
	var_10_object = var_35_object;
	TaskCall(3);
	func_1097(var_35_object);
	TaskReturn();
}
EMIT "Stack[-1] = 0";


void func_1397(bool var_22_bool, object var_23_object)
{
	object var_27_object;
	var_23_object = var_27_object;
	bool var_26_bool;
	func_1361(var_26_bool, var_27_object);
	if(!var_26_bool) { //@nz
		var_22_bool = false;
		return 2;
	}
	bool var_44_bool; object var_45_object;
	func_1271(var_44_bool, var_45_object, "noaccess");
	if(!var_44_bool) { //@nz
		var_22_bool = true;
		return 2;
	}
	int var_25_int;
	var_45_object->GetProperty("noaccess", var_25_int);
	var_22_bool = var_25_int == 0;
}


void func_1271(bool var_44_bool, object var_45_object, string var_46_string)
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


void func_1533(object var_15_object, cvector var_18_cvector, cvector var_19_cvector)
{
	object var_22_object;
	@GetScene(var_22_object);
	object var_23_object;
	@AddActorByType(var_23_object, "scripted", var_22_object, var_18_cvector, var_19_cvector, "blood_dir.xml");
	object var_26_object;
	var_15_object = var_26_object;
	func_1421(var_26_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


