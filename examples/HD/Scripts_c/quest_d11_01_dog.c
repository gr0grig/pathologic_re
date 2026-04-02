maintask task_0
{
	void init(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool)
	{
		@Hold();
	}

	void OnLoad(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool)
	{
		@Sleep(4);
		TaskCall(1);
		func_22();
		TaskReturn();
	}

	// @pe
	void OnTrigger(string name, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool)
	{
		if(var_9_bool == "cleanup") {
			object var_12_object;
			func_1462(var_12_object);
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
			func_1513(var_1_int);
		} else {
			int var_17_int;
			func_916(var_8_bool, var_17_int, var_17_int);
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
			func_1410(var_13_object);
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
		func_772(var_9_object);
		object var_14_object;
		var_9_object = var_14_object;
		func_1580();
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
	func_1462(var_9_object);
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
	func_1317(var_13_object, var_14_int, var_15_float);
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
	func_1385(var_17_float, var_18_cvector, var_19_cvector);
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
	func_1541(var_10_object);
}


void func_514(object var_0_object, bool var_280_bool, float var_281_float)
{
	bool var_287_bool; cvector var_288_cvector; cvector var_289_cvector; cvector var_290_cvector; float var_291_float;
	
	for(;;) {
		@IsAnimationPlaying(var_287_bool);
		if(!var_287_bool) //@nz
			break;
		bool var_293_bool;
		func_585(var_293_bool);
		if(var_293_bool != 0) {
			var_280_bool = true;
			return 10;
		}
		bool var_336_bool;
		func_1249(var_336_bool, var_0_object);
		if(!var_336_bool) { //@nz
			var_280_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_288_cvector); //@t
		@GetPFPosition(var_289_cvector);
		var_290_cvector = var_288_cvector - var_289_cvector;
		var_291_float = var_290_cvector | var_290_cvector;
		if(var_291_float < (var_281_float * var_281_float)) {
			bool var_341_bool; float var_342_float;
			var_281_float = var_342_float;
			func_350(var_290_cvector, var_291_float, var_341_bool, var_342_float);
			var_280_bool = true;
			return 10;
		}
		@sync();
	}
	func_689(var_291_float);
	var_280_bool = false;
}


void func_1410(object var_13_object)
{
	float var_16_float;
	var_13_object->GetEyesHeight(var_16_float);
	cvector var_17_cvector = [0.0, 0.0, 0.0];
	var_18_float = GetByIndex(var_17_cvector, 1);
	var_16_float = var_18_float;
	SetByIndex(var_17_cvector, 1) = var_18_float;
	@LookAsync(var_13_object, "head", var_17_cvector);
}


void func_772(int var_2_int)
{
	@KillTimer(1);
	if(var_2_int != 0) {
		var_2_int = false;
		@UnlookAsync("head");
	}
	func_938(var_9_object);
}


// @pe
void func_1541(object var_10_object)
{
	object var_11_object;
	var_10_object = var_11_object;
	TaskCall(3);
	func_965(var_11_object);
	TaskReturn();
}


void func_646(object var_0_object, bool var_243_bool)
{
	bool var_245_bool;
	var_248_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_248_bool != 0) {
		var_0_object->IsAttacking(var_245_bool); //@t
		var_245_bool = var_243_bool;
	}
	var_243_bool = false;
}


void func_1421(string var_35_string)
{
	bool var_44_bool; int var_45_int; bool var_46_bool; int var_47_int; bool var_48_bool; float var_49_float; cvector var_50_cvector; cvector var_51_cvector;
	@IsExisting3DSound(var_44_bool, var_35_string);
	if(!var_44_bool) { //@nz
		var_45_int = 0;

		for(;;) {
			@IsExisting3DSound(var_46_bool, (var_35_string + (var_45_int + 1)));
			if(!var_46_bool) { //@nz
				break;
			Label_1441:
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
	if(var_57_bool == 0) goto Label_1441;
}


void func_657(int var_2_int, int var_5_int)
{
	int var_363_int;
	if(!var_2_int) //@nz
		return 4;
	if(var_5_int != 0) {
		if((var_5_int + -1) > 0)
			return 4;
	}
	float var_362_float;
	@rand(var_362_float);
	float var_369_float;
	func_707(var_369_float);
	if(var_362_float < var_369_float) {
		@irand(var_363_int, var_2_int);
		@Speak("attack" + (var_363_int + 1));
		int var_374_int;
		func_705(var_374_int);
		var_5_int = var_374_int;
	}
}


void func_276(int var_1_int, int var_2_int, float var_4_float)
{
	bool var_48_bool; bool var_49_bool; cvector var_50_cvector;
	var_1_int = 0;
	
	for(;;) {
		@HasAnimation(var_48_bool, "all", ("attack_begin" + (var_1_int + 1)));
		if(!var_48_bool) { //@nz
		} else {
			var_1_int += 1;
		}
		var_2_int = 0;

		for(;;) {
			@IsExisting3DSound(var_49_bool, ("attack" + (var_2_int + 1)));
			if(!var_49_bool) //@nz
				break;
			var_2_int += 1;
		}
		@GetAnimationOffset(var_50_cvector, "all", "bjump");
		var_64_float = GetByIndex(var_50_cvector, 2);
		var_4_float = -var_64_float;

	}
}


// @pe
void func_916(object var_0_object, int var_1_int, int var_17_int)
{
	if(var_17_int != 0)
		return 0;
	bool var_20_bool;
	func_954(var_20_bool, var_1_int);
	if(!var_20_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_22(void)
{
	object var_16_object; object var_17_object;
	@FindActor(var_17_object, "player");
	if(!var_17_object) { //@nz
	}
	for(;;) {
		object var_20_object;
		func_47(var_13_bool, var_14_float, var_15_int, var_16_object, var_20_object, var_20_object, true, 180.0);
		@Sleep(1);
	}
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


void func_1317(object var_13_object, int var_14_int, float var_15_float)
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
		func_1111(var_43_cvector, var_44_object);
		var_43_cvector = var_42_cvector;
		func_1468(var_41_cvector, var_42_cvector);
		var_41_cvector = var_25_cvector;
		@CreateVectorVector(var_26_object);
		var_27_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_27_int), var_28_bool, var_29_cvector, var_30_cvector);
			if(!var_28_bool) { //@nz
				break;
			Label_1379:
				var_26_object = null;
	}
			object var_103_object;
			var_13_object = var_103_object;
			func_1273(var_103_object);
		}
		if((var_30_cvector | var_25_cvector) >= 0.70710677)
			var_26_object->add(var_29_cvector);
		var_27_int += 1;
	}
	int var_31_int;
	var_26_object->size(var_31_int);
	if(var_31_int == 0) goto Label_1379;
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
	func_1385(var_60_float, var_61_cvector, var_62_cvector);
}


// @pe
void func_41(float var_389_float)
{
	var_389_float = 0.1;
}


void func_938(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_1065(string var_34_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_35_string;
	var_34_string = var_35_string;
	func_1421(var_35_string);
	@PlayAnimation("all", var_34_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_34_string);
	@RemoveEnvelope();
}


// @pe
void func_44(int var_396_int)
{
	var_396_int = 0;
}


void func_557(object var_0_object, bool var_295_bool)
{
	cvector var_301_cvector; cvector var_302_cvector;
	bool var_306_bool;
	func_1249(var_306_bool, var_0_object);
	if(!var_306_bool) { //@nz
		var_295_bool = false;
		return 10;
	}
	bool var_309_bool;
	float var_305_float;
	func_646(var_305_float, var_309_bool);
	if(var_309_bool != 0) {
		var_0_object->GetPFPosition(var_301_cvector); //@t
		@GetPFPosition(var_302_cvector);
		var_0_object->GetAttackDistance(var_305_float); //@t
		var_295_bool = ((var_301_cvector - var_302_cvector) | (var_301_cvector - var_302_cvector)) <= ((var_305_float + 50) * (var_305_float + 50));
		return 10;
	}
	var_295_bool = false;
}


void func_814(object var_0_object, int var_1_int, bool var_152_bool, object var_153_object, float var_154_float, float var_155_float, bool var_156_bool, bool var_157_bool)
{
	bool var_166_bool; object var_168_object; cvector var_169_cvector; cvector var_170_cvector; float var_172_float; object var_173_object;
	var_0_object = false;
	var_1_int = var_153_object;
	bool var_167_bool;
	var_157_bool = var_167_bool;
	
	for(;;) {
		bool var_174_bool; object var_175_object;
		var_153_object = var_175_object;
		func_954(var_174_bool, var_175_object);
		if(!var_174_bool) { //@nz
			var_152_bool = false;
			return 16;
		}
		var_153_object->GetPosition(var_169_cvector);
		@GetPosition(var_170_cvector);
		var_172_float = (var_169_cvector - var_170_cvector) | (var_169_cvector - var_170_cvector);
		bool var_179_bool = false;
		if(var_155_float > 0) {
			if(var_172_float > (var_155_float * var_155_float))
				var_179_bool = true;
		}
		if(var_179_bool != 0) {
			@Stop();
			var_152_bool = false;
			return 16;
		}
		if(var_172_float > (var_154_float * var_154_float)) {
			var_153_object->GetPFPosition(var_169_cvector);
			@FindPathTo(var_173_object, var_169_cvector);
			if(var_173_object != null) {
				var_173_object = var_168_object;
				var_173_object = null;
			}
			if(var_168_object != null) {
				if(var_167_bool == 0) goto Label_867;
				var_167_bool = false;
				@RotatePath(var_168_object, var_166_bool);
				if(!var_166_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_192_string;
						func_961(var_192_string);
						string var_193_string;
						func_963(var_193_string);
						@FollowPath(var_168_object, var_156_bool, var_166_bool, var_192_string, var_193_string);
						if(!var_166_bool) { //@nz
							if(var_0_object == 0) goto Label_886;
							var_168_object = null;
						}
					EMIT "GOTO 0x377";

					Label_886:
						} else {
					var_168_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_166_bool);
					if(!var_166_bool) { //@nz
						if(var_0_object != 0) {
							var_168_object = null;
							goto Label_914;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_914;
		}
			var_173_object = null;
			goto Label_912;

		Label_912:
			var_168_object = null;

		}
	Label_914:
		for(;;) {
			var_152_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_47(object var_0_object, bool var_3_bool, int var_5_int, object var_20_object, bool var_21_bool, float var_22_float, bool var_129_bool, bool var_221_bool)
{
	float var_34_float; cvector var_35_cvector; cvector var_36_cvector; bool var_38_bool; float var_41_float; cvector var_42_cvector; bool var_43_bool; float var_44_float;
	func_276(var_42_cvector, var_43_bool, var_44_float);
	var_5_int = 0;
	var_69_bool = IsFuncExist(var_20_object, "@GetAttackDistance", 1);
	if(var_69_bool != 0) {
		var_20_object->GetAttackDistance(var_34_float);
		var_34_float += 50;
	} else {
						var_22_float = var_34_float;
	}
	if(var_34_float >= 150)
		var_34_float = 150;
	var_3_bool = false;
	var_0_object = var_20_object;
	bool var_37_bool;
	@IsPlayerActor(var_0_object, var_37_bool);
	if(var_37_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_75_object;
		func_1462(var_75_object);
		@SendPlayerEnemy(var_20_object, var_75_object);
	}
	if(var_21_bool != 0)
		var_38_bool = false;
	else
		var_38_bool = true;

	
Label_87:
	for(;;) {
		bool var_80_bool = false;
		bool var_81_bool;
		func_1249(var_81_bool, var_0_object);
		if(var_81_bool != 0) {
			if(!var_3_bool) //@nz
				var_80_bool = true;
		}
		if(var_80_bool != 0) {
			func_689(var_44_float);
			var_0_object->GetPFPosition(var_35_cvector); //@t
			@GetPFPosition(var_36_cvector);
			var_41_float = (var_35_cvector - var_36_cvector) | (var_35_cvector - var_36_cvector);
			if(var_41_float >= ((400.0 + var_34_float) * (400.0 + var_34_float))) {
				bool var_123_bool; float var_125_float;
				var_34_float = var_125_float;
				TaskCall(2);
				func_709(var_131_bool, var_123_bool, var_0_object, var_125_float, 10000.0, true, false);
				TaskReturn();
				if(!var_129_bool) { //@nz
				} else {
					var_38_bool = false;
			} else {
			if(var_41_float >= (var_22_float * var_22_float)) {
				var_0_object->GetPFPosition(var_42_cvector); //@t
				@CanReachByPF(var_43_bool, var_42_cvector);
				if(!var_43_bool) { //@nz
					bool var_215_bool; float var_217_float;
					var_34_float = var_217_float;
					TaskCall(2);
					func_709(var_223_bool, var_215_bool, var_0_object, var_217_float, 10000.0, true, false);
					TaskReturn();
					if(!var_221_bool) { //@nz
						goto Label_259;
					}
					var_38_bool = false;
					goto Label_87;
				}
				if(!var_38_bool) { //@nz
					func_1399(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_689(var_44_float);
					@StopAsync();
					var_38_bool = true;
					bool var_237_bool;
					func_1249(var_237_bool, var_0_object);
					if(!var_237_bool) { //@nz
						goto Label_259;
					}
				}
				@rand(var_44_float);
				bool var_240_bool;
				var_242_bool = var_44_float < 0.25;
				if(var_242_bool != 1) {
					bool var_243_bool;
					func_646(true, var_243_bool);
					if(var_243_bool != 1)
						var_240_bool = false;
				}
				if(var_240_bool != 0) {
					@Face(var_0_object);
					func_696();
					@PlayAnimation("all", "attack_stay");
					bool var_280_bool; float var_281_float;
					func_514(var_44_float, var_280_bool, var_281_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_689(var_44_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_502_bool;
					func_646(var_44_float, var_502_bool);
					var_503_bool = !var_502_bool; //@nz
					if(var_503_bool == 0) goto Label_249;
					bool var_504_bool;
					func_1249(var_504_bool, var_0_object);
					if(!var_504_bool) { //@nz
						goto Label_259;
					}
					var_0_object->GetPFPosition(var_35_cvector); //@t
					@GetPFPosition(var_36_cvector);
					if(!(((var_35_cvector - var_36_cvector) | (var_35_cvector - var_36_cvector)) < (var_281_float * var_281_float))) goto Label_249;
					bool var_509_bool; float var_510_float;
					var_22_float = var_510_float;
					func_350(var_43_bool, var_44_float, var_509_bool, var_510_float);
					var_511_bool = !var_509_bool; //@nz
					if(var_511_bool == 0) goto Label_249;
					goto Label_259;
			}
				bool var_512_bool; float var_513_float;
				var_22_float = var_513_float;
				func_350(var_43_bool, var_44_float, var_512_bool, var_513_float);
				if(!var_512_bool) { //@nz
					goto Label_259;
				}
				var_38_bool = true;

			}
		Label_249:
			goto Label_258;
			}
			Label_258:
			}
		}
	Label_259:
		@WaitForAnimEnd();
		if(var_3_bool != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_37_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_689(object var_0_object)
{
	func_1513(var_0_object);
}


void func_1462(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_694(int var_457_int)
{
	var_457_int = 0;
}


void func_696(void)
{
	func_1421("attack_stay");
}


void func_311(object var_0_object, float var_378_float, int var_379_int)
{
	object var_383_object; float var_384_float; float var_385_float;
	@GetVictim((var_378_float * 0.9), var_383_object);
	@ReportAttack(var_0_object);
	if(var_383_object == var_0_object) {
		float var_389_float; object var_390_object; int var_391_int;
		var_383_object = var_390_object;
		var_379_int = var_391_int;
		func_41(var_391_int);
		var_389_float = var_384_float;
		float var_392_float; object var_393_object; float var_394_float; int var_395_int;
		var_383_object = var_393_object;
		int var_396_int; object var_397_object; int var_398_int;
		var_383_object = var_397_object;
		var_379_int = var_398_int;
		func_44(var_398_int);
		var_396_int = var_395_int;
		func_1135(var_392_float, var_393_object, var_394_float, var_395_int);
		var_392_float = var_385_float;
		int var_457_int;
		func_694(var_457_int);
		@ReportHit(var_0_object, var_457_int, var_385_float, var_394_float);
		object var_458_object; float var_459_float;
		var_383_object = var_458_object;
		var_385_float = var_459_float;
		func_701();
	}
}
EMIT "Stack[-3] = 0";


// @pe
void func_954(bool var_20_bool, object var_21_object)
{
	object var_23_object;
	var_21_object = var_23_object;
	bool var_22_bool;
	func_1249(var_22_bool, var_23_object);
	var_22_bool = var_20_bool;
}


void func_1208(bool var_37_bool, object var_38_object)
{
	bool var_40_bool;
	var_38_object->IsDead(var_40_bool);
	var_40_bool = var_37_bool;
}


void func_1468(cvector var_41_cvector, cvector var_42_cvector)
{
	float var_50_float = sqrt(var_42_cvector | var_42_cvector);
	if(var_50_float < 0.000001)
		var_41_cvector = [0.0, 0.0, 0.0];
	var_41_cvector = var_42_cvector / var_50_float;
}


// @pe
void func_701(void)
{
}


void func_1213(bool var_26_bool, object var_27_object)
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
		func_1208(var_37_bool, var_38_object);
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


void func_703(bool var_482_bool)
{
	var_482_bool = true;
}


void func_705(int var_374_int)
{
	var_374_int = 1;
}


void func_961(string var_192_string)
{
	var_192_string = "walk";
}


void func_707(float var_369_float)
{
	var_369_float = 0.5;
}


void func_963(string var_193_string)
{
	var_193_string = "run";
}


void func_709(int var_2_int, bool var_123_bool, object var_124_object, float var_125_float, float var_126_float, bool var_127_bool, bool var_128_bool)
{
	object var_136_object;
	func_1513(var_136_object);
	@SetTimer(1, 5);
	bool var_134_bool;
	@CanSee(var_134_bool, var_136_object);
	if(var_134_bool != 0) {
		var_2_int = true;
		object var_140_object;
		var_124_object = var_140_object;
		func_1410(var_140_object);
	} else {
		var_2_int = false;
	}
	bool var_147_bool; object var_148_object;
	func_1118(var_147_bool, var_148_object);
	if(var_147_bool != 0) {
		object var_151_object;
		func_1462(var_151_object);
		@SendPlayerEnemy(var_148_object, var_151_object);
	}
	bool var_152_bool; object var_153_object; float var_154_float; float var_155_float; bool var_156_bool; bool var_157_bool;
	var_124_object = var_153_object;
	var_125_float = var_154_float;
	var_126_float = var_155_float;
	var_127_bool = var_156_bool;
	var_128_bool = var_157_bool;
	bool var_135_bool;
	func_814(var_134_bool, var_135_bool, var_152_bool, var_153_object, var_154_float, var_155_float, var_156_bool, var_157_bool);
	var_152_bool = var_135_bool;
	if(var_2_int != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_135_bool = var_123_bool;
	
}


// @pe
void func_1478(float var_430_float, float var_431_float, float var_432_float)
{
	if(var_431_float < var_432_float)
		var_431_float = var_430_float;
	else
		var_432_float = var_430_float;
	
}


// @pe
void func_965(object var_11_object)
{
	object var_12_object;
	var_11_object = var_12_object;
	func_974(var_12_object);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_585(bool var_293_bool)
{
	bool var_294_bool = false;
	bool var_295_bool;
	func_557(var_294_bool, var_295_bool);
	if(var_295_bool != 0) {
		bool var_312_bool;
		func_601(var_293_bool, var_294_bool, var_312_bool);
		if(var_312_bool != 0)
			var_294_bool = true;
	}
	if(var_294_bool != 0) {
		var_293_bool = true;
		return 0;
	}
	var_293_bool = false;
}


// @pe
void func_1097(string var_420_string, int var_421_int)
{
	if(var_421_int == 2) {
		var_420_string = "fire";
		return 0;
	EMIT "GOTO 0x455";
	}
	if(var_421_int == 1) {
		var_420_string = "bullet";
		return 0;
	}
	var_420_string = "phys";
}


// @pe
void func_1485(float var_440_float, float var_441_float, float var_442_float, float var_443_float)
{
	if(var_441_float < var_442_float) {
		var_442_float = var_440_float;
		return 0;
	}
	if(var_441_float > var_443_float) {
		var_443_float = var_440_float;
		return 0;
	}
	var_441_float = var_440_float;
}


void func_974(object var_12_object)
{
	cvector var_23_cvector; cvector var_24_cvector; cvector var_25_cvector; cvector var_26_cvector; string var_27_string; object var_28_object; bool var_29_bool; bool var_30_bool; float var_31_float; cvector var_32_cvector;
	if(var_12_object == null) {
		func_1065("fdie");
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
		func_1421(var_87_string);
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


void func_1111(cvector var_43_cvector, object var_44_object)
{
	cvector var_47_cvector;
	@GetPosition(var_47_cvector);
	cvector var_48_cvector;
	var_44_object->GetPosition(var_48_cvector);
	var_43_cvector = var_48_cvector - var_47_cvector;
}


void func_1496(float var_448_float)
{
	object var_450_object;
	@CreateFloatVector(var_450_object);
	var_450_object->add(var_448_float);
	if(var_448_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_450_object);
}
EMIT "Stack[-1] = 0";


void func_601(object var_0_object, float var_4_float, bool var_312_bool)
{
	object var_318_object; float var_320_float; cvector var_321_cvector; cvector var_322_cvector;
	@GetScene(var_318_object);
	bool var_319_bool = false;
	
	for(;;) {
		cvector var_323_cvector;
		func_1111(var_323_cvector, var_0_object);
		var_329_int = -var_323_cvector;
		@FindDirLength(var_320_float, var_329_int, var_4_float);
		if(var_320_float < var_4_float) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_321_cvector); //@t
				@GetPFPosition(var_322_cvector);
				@WaitForAnimEnd();
				func_689(var_322_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_319_bool = true;
				bool var_334_bool;
				func_557(var_322_cvector, var_334_bool);
				var_335_bool = !var_334_bool; //@nz
				if(var_335_bool == 0) goto Label_642;
		}
		for(;;) {
			var_319_bool = var_312_bool;

		}

	Label_642:
	}
}
EMIT "Stack[-5] = 0";


void func_350(object var_0_object, int var_1_int, bool var_341_bool, float var_342_float)
{
	string var_350_string;
	func_689(var_350_string);
	int var_347_int;
	@irand(var_347_int, var_1_int);
	@Face(var_0_object);
	@SetAttackState(true);
	func_1522();
	@PlayAnimation("all", ("attack_begin" + (var_347_int + 1)));
	@WaitForAnimEnd();
	int var_349_int;
	func_657(var_349_int, var_350_string);
	bool var_375_bool;
	func_1249(var_375_bool, var_0_object);
	if(!var_375_bool) { //@nz
		@StopAsync();
		var_341_bool = false;
		return 8;
	}
	float var_378_float; int var_379_int;
	var_342_float = var_378_float;
	var_347_int = var_379_int;
	func_311(var_350_string, var_378_float, var_379_int);
	bool var_348_bool;
	@HasAnimation(var_348_bool, "all", ("attack_middle" + var_347_int));
	if(var_348_bool != 0) {
		func_1522();
		@PlayAnimation("all", ("attack_middle" + var_347_int));
		@WaitForAnimEnd();
		func_689(var_350_string);
		bool var_467_bool;
		func_1249(var_467_bool, var_0_object);
		if(!var_467_bool) { //@nz
			@StopAsync();
			var_341_bool = false;
			return 8;
		}
		float var_470_float; int var_471_int;
		var_342_float = var_470_float;
		func_311(var_350_string, var_470_float, var_471_int);
		var_349_int = 1;

		for(;;) {
			var_350_string = (("attack_middle" + var_471_int) + "_") + var_349_int;
			@HasAnimation(var_348_bool, "all", var_350_string);
			if(!var_348_bool) { //@nz
			} else {
				func_1522();
				@PlayAnimation("all", var_350_string);
				@WaitForAnimEnd();
				func_689(var_350_string);
				bool var_493_bool;
				func_1249(var_493_bool, var_0_object);
				if(!var_493_bool) { //@nz
					@StopAsync();
					var_341_bool = false;
					return 8;
				}
				float var_496_float; int var_497_int;
				var_342_float = var_496_float;
				var_347_int = var_497_int;
				func_311(var_350_string, var_496_float, var_497_int);
				var_349_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_347_int));
		bool var_482_bool;
		func_703(var_482_bool);
		if(var_482_bool != 0) {
			bool var_483_bool;
			func_487(var_483_bool, 0.75);
			@StopAsync();
		}
		var_341_bool = true;
		return 8;

	}
}


void func_1118(bool var_147_bool, object var_148_object)
{
	bool var_150_bool;
	@IsPlayerActor(var_148_object, var_150_bool);
	var_150_bool = var_147_bool;
}


void func_1249(bool var_22_bool, object var_23_object)
{
	object var_27_object;
	var_23_object = var_27_object;
	bool var_26_bool;
	func_1213(var_26_bool, var_27_object);
	if(!var_26_bool) { //@nz
		var_22_bool = false;
		return 2;
	}
	bool var_44_bool; object var_45_object;
	func_1123(var_44_bool, var_45_object, "noaccess");
	if(!var_44_bool) { //@nz
		var_22_bool = true;
		return 2;
	}
	int var_25_int;
	var_45_object->GetProperty("noaccess", var_25_int);
	var_22_bool = var_25_int == 0;
}


void func_1123(bool var_44_bool, object var_45_object, string var_46_string)
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


void func_487(bool var_483_bool, float var_484_float)
{
	float var_487_float; bool var_488_bool;
	@rand(var_487_float);
	if(var_487_float < var_484_float) {

		for(;;) {
			@IsAnimationPlaying(var_488_bool);
			if(!var_488_bool) { //@nz
			} else {
				bool var_491_bool;
				func_585(var_491_bool);
				if(var_491_bool != 0) {
					var_483_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_483_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_689(var_488_bool);
}


void func_1513(object var_12_object)
{
	bool var_14_bool;
	@IsPlayerActor(var_12_object, var_14_bool);
	if(var_14_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1385(object var_15_object, cvector var_18_cvector, cvector var_19_cvector)
{
	object var_22_object;
	@GetScene(var_22_object);
	object var_23_object;
	@AddActorByType(var_23_object, "scripted", var_22_object, var_18_cvector, var_19_cvector, "blood_dir.xml");
	object var_26_object;
	var_15_object = var_26_object;
	func_1273(var_26_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1135(float var_392_float, object var_393_object, float var_394_float, int var_395_int)
{
	int var_405_int; int var_407_int;
	object var_412_object;
	var_393_object = var_412_object;
	bool var_411_bool;
	func_1123(var_411_bool, var_412_object, "health");
	if(!var_411_bool) //@nz
		var_392_float = 0.0;
	bool var_415_bool; object var_416_object;
	func_1123(var_415_bool, var_416_object, "armor");
	if(!var_415_bool) //@nz
		var_405_int = 0;
	else
		var_416_object->GetProperty("armor", var_405_int);
	string var_420_string; int var_421_int;
	var_395_int = var_421_int;
	func_1097(var_420_string, var_421_int);
	string var_406_string = "armor_" + var_420_string;
	bool var_426_bool; object var_427_object; string var_428_string;
	var_393_object = var_427_object;
	func_1123(var_426_bool, var_427_object, var_428_string);
	if(!var_426_bool) //@nz
		var_407_int = 0;
	else
		var_393_object->GetProperty(var_428_string, var_407_int);

	float var_430_float;
	func_1478(var_430_float, ((var_405_int + var_407_int) / 100.0), (float)1);
	float var_408_float;
	var_430_float = var_408_float;
	float var_409_float;
	var_393_object->GetProperty("health", var_409_float);
	float var_410_float = var_394_float * (1 - var_408_float);
	float var_440_float;
	func_1485(var_440_float, (var_409_float - var_410_float), (float)0, (float)1);
	var_393_object->SetProperty("health", var_440_float);
	bool var_446_bool; object var_447_object;
	var_393_object = var_447_object;
	func_1118(var_446_bool, var_447_object);
	if(var_446_bool != 0) {
		float var_448_float = -var_410_float;
		func_1496(var_448_float);
	}
	var_410_float = var_392_float;
	
}


void func_1522(void)
{
	object var_354_object;
	@GetScene(var_354_object);
	object var_356_object;
	func_1462(var_356_object);
	@BroadcastMessage("battle", var_356_object, var_354_object);
}
EMIT "Stack[-1] = 0";


void func_1399(object var_226_object)
{
	cvector var_230_cvector;
	var_226_object->GetPosition(var_230_cvector);
	cvector var_231_cvector;
	@GetPosition(var_231_cvector);
	cvector var_232_cvector = var_230_cvector - var_231_cvector;
	var_233_float = GetByIndex(var_232_cvector, 0);
	var_234_float = GetByIndex(var_232_cvector, 2);
	@RotateAsync(var_233_float, var_234_float);
}


void func_1273(object var_26_object)
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


