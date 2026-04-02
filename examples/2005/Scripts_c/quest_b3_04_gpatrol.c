// @GLOBALS: 0:object:

maintask task_0
{
	void init(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		int var_15_int; bool var_16_bool; cvector var_17_cvector; object var_18_object;
		@GetPFPosition(var_1_cvector);
		@GetDirection(var_0_cvector);
	
		for(;;) {
			func_132();
			@irand(var_15_int, 10);
			@Sleep((var_15_int + 5), var_16_bool);
			if(var_16_bool != 0) {
				func_0();
			} else {
			for(;;) {
				func_132();
				@GetPFPosition(var_17_cvector);
				float var_23_float; cvector var_25_cvector;
				var_17_cvector = var_25_cvector;
				func_1599(var_23_float, var_1_cvector, var_25_cvector);
				if(var_23_float > 40000) {
					@FindPathTo(var_18_object, var_1_cvector);
					if(var_18_object != null) {
						@RotatePath(var_18_object, var_16_bool);
						if(!var_16_bool) { //@nz
						} else {
						@FollowPath(var_18_object, false, var_16_bool);
						if(!var_16_bool) { //@nz
							goto Label_124;
						}
						var_34_float = GetByIndex(var_0_cvector, 0);
						var_35_float = GetByIndex(var_0_cvector, 2);
						@Rotate(var_34_float, var_35_float, var_16_bool);
						if(!var_16_bool) { //@nz
							goto Label_124;
						}
						@WaitForAnimEnd(var_16_bool);
						if(!var_16_bool) { //@nz
							goto Label_124;
						}
						goto Label_125;
					EMIT "GOTO 0x6d";
					}
					@Sleep(1);
					var_18_object = null;
					goto Label_124;
				}
				var_39_float = GetByIndex(var_0_cvector, 0);
				var_40_float = GetByIndex(var_0_cvector, 2);
				@Rotate(var_39_float, var_40_float, var_16_bool);
				if(!var_16_bool) { //@nz
					goto Label_124;
				}
				@WaitForAnimEnd(var_16_bool);
				if(!var_16_bool) { //@nz
					goto Label_124;
				}
				goto Label_125;
				}
			Label_124:
			}
			}
		Label_125:
		}
	
	}
	EMIT "Return(); Pop(8)";

	void OnHear(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool)
	{
		bool var_13_bool;
		@IsPlayerActor(var_11_bool, var_13_bool);
		if(var_13_bool != 0) {
			func_127();
			TaskCall(1);
			func_133();
			TaskReturn();
		}
	}

	void OnSee(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool)
	{
		bool var_13_bool;
		@IsPlayerActor(var_11_bool, var_13_bool);
		if(var_13_bool != 0) {
			func_127();
			TaskCall(1);
			func_133();
			TaskReturn();
		}
	}

	void OnAttacked(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool)
	{
		bool var_13_bool;
		@IsPlayerActor(var_11_bool, var_13_bool);
		if(var_13_bool != 0) {
			func_127();
			TaskCall(1);
			func_133();
			TaskReturn();
		}
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void OnTimer(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int)
	{
		if(var_11_int == 1) {
			func_1631(var_1_cvector);
		} else {
			int var_19_int;
			func_1023(var_10_bool, var_19_int, var_19_int);
		}
	
	}

	// @pe
	void OnSee(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		bool var_12_bool = false;
		if(var_1_cvector == var_11_object) {
			if(!var_2_object) //@nz
				var_12_bool = true;
		}
		if(var_12_bool != 0) {
			var_2_object = true;
			object var_15_object;
			var_11_object = var_15_object;
			func_1531(var_15_object);
		}
	}

	// @pe
	void OnStopSee(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		bool var_12_bool = false;
		if(var_1_cvector == var_11_object) {
			if(var_2_object != 0)
				var_12_bool = true;
		}
		if(var_12_bool != 0) {
			var_2_object = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		@RequestClearPath(var_11_object);
	}

	// @pe
	void OnDeath(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		func_879(var_11_object);
		object var_16_object;
		var_11_object = var_16_object;
		func_1763();
	}

}


task task_3
{
	void OnUse(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		bool var_13_bool;
		@IsOverrideActive(var_13_bool);
		if(!var_13_bool) { //@nz
			object var_15_object;
			var_11_object = var_15_object;
			func_1657(var_15_object);
		}
	}

	// @pe
	void OnHit(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, float var_13_float, float var_14_float)
	{
	}

	// @pe
	void OnPropertyChange(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, string var_12_string)
	{
	}

	// @pe
	void OnDeath(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
	}

}


// @pe
void OnHit(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, float var_13_float, float var_14_float)
{
	object var_15_object;
	var_11_object = var_15_object;
	int var_16_int;
	var_12_int = var_16_int;
	float var_17_float;
	var_13_float = var_17_float;
	func_1438(var_15_object, var_16_int, var_17_float);
}


// @pe
void OnHit2(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, float var_13_float, float var_14_float, cvector var_15_cvector, cvector var_16_cvector)
{
	object var_17_object;
	var_11_object = var_17_object;
	int var_18_int;
	var_12_int = var_18_int;
	float var_19_float;
	var_13_float = var_19_float;
	cvector var_20_cvector;
	var_15_cvector = var_20_cvector;
	cvector var_21_cvector;
	var_16_cvector = var_21_cvector;
	func_1506(var_19_float, var_20_cvector, var_21_cvector);
}


void OnPropertyChange(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, string var_12_string)
{
	float var_14_float;
	if(var_12_string == "health") {
		@GetProperty("health", var_14_float);
		if(var_14_float <= 0)
			@SignalDeath(var_11_object);
	}
}


// @pe
void OnDeath(cvector var_0_cvector, cvector var_1_cvector, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
{
	object var_12_object;
	var_11_object = var_12_object;
	func_1711(var_12_object);
}


void func_0(void)
{
}


void func_132(void)
{
}


void func_133(void)
{
	object var_22_object;
	@FindActor(var_22_object, "player");
	if(!var_22_object) { //@nz
	}
	object var_25_object;
	object var_21_object;
	func_154(var_18_bool, var_19_float, var_20_int, var_21_object, var_25_object, var_25_object, true, 180.0);
}
EMIT "Stack[-1] = 0";


void func_1670(string var_27_string)
{
	object var_31_object;
	@CreateInvItem(var_31_object);
	var_31_object->SetItemName(var_27_string);
	var_31_object->SetProperty("Organ", 1);
	int var_32_int;
	var_31_object->GetItemID(var_32_int);
	bool var_33_bool;
	@AddItem(var_33_bool, var_31_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_1542(string var_65_string)
{
	bool var_74_bool; int var_75_int; bool var_76_bool; int var_77_int; bool var_78_bool; float var_79_float; cvector var_80_cvector; cvector var_81_cvector;
	@IsExisting3DSound(var_74_bool, var_65_string);
	if(!var_74_bool) { //@nz
		var_75_int = 0;

		for(;;) {
			@IsExisting3DSound(var_76_bool, (var_65_string + (var_75_int + 1)));
			if(!var_76_bool) { //@nz
				break;
			Label_1562:
				@irand(var_77_int, var_75_int);
				var_65_string += (var_77_int + 1);
	}
			@Is3DSoundLoaded(var_78_bool, var_65_string);
			if(var_78_bool != 0) {
				@GetEyesHeight(var_79_float);
				@GetDirection(var_80_cvector);
				var_81_cvector = var_80_cvector * 50;
				var_92_float = GetByIndex(var_81_cvector, 1);
				SetByIndex(var_81_cvector, 1) = (var_92_float + var_79_float);
				@PlayGlobalSound(var_65_string, var_81_cvector);
			}
		}
		var_75_int += 1;
	}
	var_87_bool = !var_75_int; //@nz
	if(var_87_bool == 0) goto Label_1562;
}


void func_764(object var_2_object, int var_5_int)
{
	int var_368_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_int != 0) {
		if((var_5_int + -1) > 0)
			return 4;
	}
	float var_367_float;
	@rand(var_367_float);
	float var_374_float;
	func_814(var_374_float);
	if(var_367_float < var_374_float) {
		@irand(var_368_int, var_2_object);
		@Speak("attack" + (var_368_int + 1));
		int var_379_int;
		func_812(var_379_int);
		var_5_int = var_379_int;
	}
}


// @pe
void func_148(float var_394_float)
{
	var_394_float = 0.15;
}


void func_1045(cvector var_0_cvector)
{
	var_0_cvector = true;
	@KillTimer(0);
	@Stop();
}


void func_1687(void)
{
	int var_21_int;
	func_1651(var_21_int);
	if(var_21_int != 1) {
	}
	func_1670("liver");
	func_1670("kidney");
	func_1670("heart");
	func_1670("blood");
}


void func_664(cvector var_0_cvector, bool var_300_bool)
{
	cvector var_306_cvector; cvector var_307_cvector;
	bool var_311_bool;
	func_1370(var_311_bool, var_0_cvector);
	if(!var_311_bool) { //@nz
		var_300_bool = false;
		return 10;
	}
	bool var_314_bool;
	float var_310_float;
	func_753(var_310_float, var_314_bool);
	if(var_314_bool != 0) {
		var_0_cvector->GetPFPosition(var_306_cvector); //@t
		@GetPFPosition(var_307_cvector);
		var_0_cvector->GetAttackDistance(var_310_float); //@t
		var_300_bool = ((var_306_cvector - var_307_cvector) | (var_306_cvector - var_307_cvector)) <= ((var_310_float + 50) * (var_310_float + 50));
		return 10;
	}
	var_300_bool = false;
}


// @pe
void func_151(int var_401_int)
{
	var_401_int = 0;
}


void func_921(cvector var_0_cvector, cvector var_1_cvector, bool var_157_bool, object var_158_object, float var_159_float, float var_160_float, bool var_161_bool, bool var_162_bool)
{
	bool var_171_bool; object var_173_object; cvector var_174_cvector; cvector var_175_cvector; float var_177_float; object var_178_object;
	var_0_cvector = false;
	var_1_cvector = var_158_object;
	bool var_172_bool;
	var_162_bool = var_172_bool;
	
	for(;;) {
		bool var_179_bool; object var_180_object;
		var_158_object = var_180_object;
		func_1061(var_179_bool, var_180_object);
		if(!var_179_bool) { //@nz
			var_157_bool = false;
			return 16;
		}
		var_158_object->GetPosition(var_174_cvector);
		@GetPosition(var_175_cvector);
		var_177_float = (var_174_cvector - var_175_cvector) | (var_174_cvector - var_175_cvector);
		bool var_184_bool = false;
		if(var_160_float > 0) {
			if(var_177_float > (var_160_float * var_160_float))
				var_184_bool = true;
		}
		if(var_184_bool != 0) {
			@Stop();
			var_157_bool = false;
			return 16;
		}
		if(var_177_float > (var_159_float * var_159_float)) {
			var_158_object->GetPFPosition(var_174_cvector);
			@FindPathTo(var_178_object, var_174_cvector);
			if(var_178_object != null) {
				var_178_object = var_173_object;
				var_178_object = null;
			}
			if(var_173_object != null) {
				if(var_172_bool == 0) goto Label_974;
				var_172_bool = false;
				@RotatePath(var_173_object, var_171_bool);
				if(!var_171_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_197_string;
						func_1068(var_197_string);
						string var_198_string;
						func_1070(var_198_string);
						@FollowPath(var_173_object, var_161_bool, var_171_bool, var_197_string, var_198_string);
						if(!var_171_bool) { //@nz
							if(var_0_cvector == 0) goto Label_993;
							var_173_object = null;
						}
					EMIT "GOTO 0x3e2";

					Label_993:
						} else {
					var_173_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_171_bool);
					if(!var_171_bool) { //@nz
						if(var_0_cvector != 0) {
							var_173_object = null;
							goto Label_1021;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1021;
		}
			var_178_object = null;
			goto Label_1019;

		Label_1019:
			var_173_object = null;

		}
	Label_1021:
		for(;;) {
			var_157_bool = !var_0_cvector;
			return 16;

			}
	}
	
}


void func_154(cvector var_0_cvector, object var_3_object, int var_5_int, object var_25_object, bool var_26_bool, float var_27_float, bool var_134_bool, bool var_226_bool)
{
	float var_39_float; cvector var_40_cvector; cvector var_41_cvector; bool var_43_bool; float var_46_float; cvector var_47_cvector; bool var_48_bool; float var_49_float;
	func_383(var_47_cvector, var_48_bool, var_49_float);
	var_5_int = 0;
	var_74_bool = IsFuncExist(var_25_object, "@GetAttackDistance", 1);
	if(var_74_bool != 0) {
		var_25_object->GetAttackDistance(var_39_float);
		var_39_float += 50;
	} else {
						var_27_float = var_39_float;
	}
	if(var_39_float >= 150)
		var_39_float = 150;
	var_3_object = false;
	var_0_cvector = var_25_object;
	bool var_42_bool;
	@IsPlayerActor(var_0_cvector, var_42_bool);
	if(var_42_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_80_object;
		func_1583(var_80_object);
		@SendPlayerEnemy(var_25_object, var_80_object);
	}
	if(var_26_bool != 0)
		var_43_bool = false;
	else
		var_43_bool = true;

	
Label_194:
	for(;;) {
		bool var_85_bool = false;
		bool var_86_bool;
		func_1370(var_86_bool, var_0_cvector);
		if(var_86_bool != 0) {
			if(!var_3_object) //@nz
				var_85_bool = true;
		}
		if(var_85_bool != 0) {
			func_796(var_49_float);
			var_0_cvector->GetPFPosition(var_40_cvector); //@t
			@GetPFPosition(var_41_cvector);
			var_46_float = (var_40_cvector - var_41_cvector) | (var_40_cvector - var_41_cvector);
			if(var_46_float >= ((400.0 + var_39_float) * (400.0 + var_39_float))) {
				bool var_128_bool; float var_130_float;
				var_39_float = var_130_float;
				TaskCall(2);
				func_816(var_136_bool, var_128_bool, var_0_cvector, var_130_float, 10000.0, true, false);
				TaskReturn();
				if(!var_134_bool) { //@nz
				} else {
					var_43_bool = false;
			} else {
			if(var_46_float >= (var_27_float * var_27_float)) {
				var_0_cvector->GetPFPosition(var_47_cvector); //@t
				@CanReachByPF(var_48_bool, var_47_cvector);
				if(!var_48_bool) { //@nz
					bool var_220_bool; float var_222_float;
					var_39_float = var_222_float;
					TaskCall(2);
					func_816(var_228_bool, var_220_bool, var_0_cvector, var_222_float, 10000.0, true, false);
					TaskReturn();
					if(!var_226_bool) { //@nz
						goto Label_366;
					}
					var_43_bool = false;
					goto Label_194;
				}
				if(!var_43_bool) { //@nz
					func_1520(var_0_cvector);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_796(var_49_float);
					@StopAsync();
					var_43_bool = true;
					bool var_242_bool;
					func_1370(var_242_bool, var_0_cvector);
					if(!var_242_bool) { //@nz
						goto Label_366;
					}
				}
				@rand(var_49_float);
				bool var_245_bool;
				var_247_bool = var_49_float < 0.25;
				if(var_247_bool != 1) {
					bool var_248_bool;
					func_753(true, var_248_bool);
					if(var_248_bool != 1)
						var_245_bool = false;
				}
				if(var_245_bool != 0) {
					@Face(var_0_cvector);
					func_803();
					@PlayAnimation("all", "attack_stay");
					bool var_285_bool; float var_286_float;
					func_621(var_49_float, var_285_bool, var_286_float);
					@StopAsync();
				} else {
					@Face(var_0_cvector);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_796(var_49_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_503_bool;
					func_753(var_49_float, var_503_bool);
					var_504_bool = !var_503_bool; //@nz
					if(var_504_bool == 0) goto Label_356;
					bool var_505_bool;
					func_1370(var_505_bool, var_0_cvector);
					if(!var_505_bool) { //@nz
						goto Label_366;
					}
					var_0_cvector->GetPFPosition(var_40_cvector); //@t
					@GetPFPosition(var_41_cvector);
					if(!(((var_40_cvector - var_41_cvector) | (var_40_cvector - var_41_cvector)) < (var_286_float * var_286_float))) goto Label_356;
					bool var_510_bool; float var_511_float;
					var_27_float = var_511_float;
					func_457(var_48_bool, var_49_float, var_510_bool, var_511_float);
					var_512_bool = !var_510_bool; //@nz
					if(var_512_bool == 0) goto Label_356;
					goto Label_366;
			}
				bool var_513_bool; float var_514_float;
				var_27_float = var_514_float;
				func_457(var_48_bool, var_49_float, var_513_bool, var_514_float);
				if(!var_513_bool) { //@nz
					goto Label_366;
				}
				var_43_bool = true;

			}
		Label_356:
			goto Label_365;
			}
			Label_365:
			}
		}
	Label_366:
		@WaitForAnimEnd();
		if(var_3_object != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_42_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_796(cvector var_0_cvector)
{
	func_1631(var_0_cvector);
}


// @pe
void func_1023(cvector var_0_cvector, cvector var_1_cvector, int var_19_int)
{
	if(var_19_int != 0)
		return 0;
	bool var_22_bool;
	func_1061(var_22_bool, var_1_cvector);
	if(!var_22_bool) //@nz
		var_0_cvector = true;
	@KillTimer(0);
	@Stop();
}


void func_1438(object var_15_object, int var_16_int, float var_17_float)
{
	cvector var_27_cvector; object var_28_object; int var_29_int; bool var_30_bool; cvector var_31_cvector; cvector var_32_cvector;
	bool var_36_bool = false;
	bool var_37_bool = false;
	if(var_15_object != 0) {
		if(var_16_int != 4)
			var_37_bool = true;
	}
	if(var_37_bool != 0) {
		if(var_16_int != 5)
			var_36_bool = true;
	}
	if(var_36_bool != 0) {
		cvector var_43_cvector; cvector var_44_cvector;
		cvector var_45_cvector; object var_46_object;
		var_15_object = var_46_object;
		func_1232(var_45_cvector, var_46_object);
		var_45_cvector = var_44_cvector;
		func_1589(var_43_cvector, var_44_cvector);
		var_43_cvector = var_27_cvector;
		@CreateVectorVector(var_28_object);
		var_29_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_29_int), var_30_bool, var_31_cvector, var_32_cvector);
			if(!var_30_bool) { //@nz
				break;
			Label_1500:
				var_28_object = null;
	}
			object var_105_object;
			var_15_object = var_105_object;
			func_1394(var_105_object);
		}
		if((var_32_cvector | var_27_cvector) >= 0.70710677)
			var_28_object->add(var_31_cvector);
		var_29_int += 1;
	}
	int var_33_int;
	var_28_object->size(var_33_int);
	if(var_33_int == 0) goto Label_1500;
	int var_34_int;
	@irand(var_34_int, var_33_int);
	cvector var_35_cvector;
	var_28_object->get(var_35_cvector, var_34_int);
	object var_60_object; int var_61_int; float var_62_float; cvector var_63_cvector; cvector var_64_cvector;
	var_15_object = var_60_object;
	var_16_int = var_61_int;
	var_17_float = var_62_float;
	var_35_cvector = var_63_cvector;
	var_64_cvector = -var_27_cvector;
	func_1506(var_62_float, var_63_cvector, var_64_cvector);
}


void func_801(int var_458_int)
{
	var_458_int = 0;
}


void func_418(cvector var_0_cvector, float var_383_float, int var_384_int)
{
	object var_388_object; float var_389_float; float var_390_float;
	@GetVictim((var_383_float * 0.9), var_388_object);
	@ReportAttack(var_0_cvector);
	if(var_388_object == var_0_cvector) {
		float var_394_float; object var_395_object; int var_396_int;
		var_388_object = var_395_object;
		var_384_int = var_396_int;
		func_148(var_396_int);
		var_394_float = var_389_float;
		float var_397_float; object var_398_object; float var_399_float; int var_400_int;
		var_388_object = var_398_object;
		int var_401_int; object var_402_object; int var_403_int;
		var_388_object = var_402_object;
		var_384_int = var_403_int;
		func_151(var_403_int);
		var_401_int = var_400_int;
		func_1256(var_397_float, var_398_object, var_399_float, var_400_int);
		var_397_float = var_390_float;
		int var_458_int;
		func_801(var_458_int);
		@ReportHit(var_0_cvector, var_458_int, var_390_float, var_399_float);
		object var_459_object; float var_460_float;
		var_388_object = var_459_object;
		var_390_float = var_460_float;
		func_808();
	}
}
EMIT "Stack[-3] = 0";


void func_803(void)
{
	func_1542("attack_stay");
}


// @pe
void func_1186(string var_64_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_65_string;
	var_64_string = var_65_string;
	func_1542(var_65_string);
	@PlayAnimation("all", var_64_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_64_string);
	@RemoveEnvelope();
}


// @pe
void func_1061(bool var_22_bool, object var_23_object)
{
	object var_25_object;
	var_23_object = var_25_object;
	bool var_24_bool;
	func_1370(var_24_bool, var_25_object);
	var_24_bool = var_22_bool;
}


// @pe
void func_808(void)
{
}


void func_810(bool var_483_bool)
{
	var_483_bool = true;
}


void func_812(int var_379_int)
{
	var_379_int = 1;
}


void func_1068(string var_197_string)
{
	var_197_string = "walk";
}


void func_814(float var_374_float)
{
	var_374_float = 0.5;
}


void func_1583(object var_80_object)
{
	object var_82_object;
	@self(var_82_object);
	var_82_object = var_80_object;
}
EMIT "Stack[-1] = 0";


void func_816(object var_2_object, bool var_128_bool, object var_129_object, float var_130_float, float var_131_float, bool var_132_bool, bool var_133_bool)
{
	object var_141_object;
	func_1631(var_141_object);
	@SetTimer(1, 5);
	bool var_139_bool;
	@CanSee(var_139_bool, var_141_object);
	if(var_139_bool != 0) {
		var_2_object = true;
		object var_145_object;
		var_129_object = var_145_object;
		func_1531(var_145_object);
	} else {
		var_2_object = false;
	}
	bool var_152_bool; object var_153_object;
	func_1239(var_152_bool, var_153_object);
	if(var_152_bool != 0) {
		object var_156_object;
		func_1583(var_156_object);
		@SendPlayerEnemy(var_153_object, var_156_object);
	}
	bool var_157_bool; object var_158_object; float var_159_float; float var_160_float; bool var_161_bool; bool var_162_bool;
	var_129_object = var_158_object;
	var_130_float = var_159_float;
	var_131_float = var_160_float;
	var_132_bool = var_161_bool;
	var_133_bool = var_162_bool;
	bool var_140_bool;
	func_921(var_139_bool, var_140_bool, var_157_bool, var_158_object, var_159_float, var_160_float, var_161_bool, var_162_bool);
	var_157_bool = var_140_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_140_bool = var_128_bool;
	
}


void func_1070(string var_198_string)
{
	var_198_string = "run";
}


void func_1329(bool var_39_bool, object var_40_object)
{
	bool var_42_bool;
	var_40_object->IsDead(var_42_bool);
	var_42_bool = var_39_bool;
}


// @pe
void func_1072(object var_41_object)
{
	object var_42_object;
	var_41_object = var_42_object;
	func_1095(var_42_object);
	@SetRTEnvelope(50, 40);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_692(bool var_298_bool)
{
	bool var_299_bool = false;
	bool var_300_bool;
	func_664(var_299_bool, var_300_bool);
	if(var_300_bool != 0) {
		bool var_317_bool;
		func_708(var_298_bool, var_299_bool, var_317_bool);
		if(var_317_bool != 0)
			var_299_bool = true;
	}
	if(var_299_bool != 0) {
		var_298_bool = true;
		return 0;
	}
	var_298_bool = false;
}


void func_1589(cvector var_43_cvector, cvector var_44_cvector)
{
	float var_52_float = sqrt(var_44_cvector | var_44_cvector);
	if(var_52_float < 0.000001)
		var_43_cvector = [0.0, 0.0, 0.0];
	var_43_cvector = var_44_cvector / var_52_float;
}


void func_1334(bool var_28_bool, object var_29_object)
{
	if(var_29_object == null) {
		var_28_bool = false;
		return 4;
	}
	bool var_35_bool = false;
	var_38_bool = IsFuncExist(var_29_object, "IsDead", 1);
	if(var_38_bool != 0) {
		bool var_39_bool; object var_40_object;
		var_29_object = var_40_object;
		func_1329(var_39_bool, var_40_object);
		if(var_39_bool != 0)
			var_35_bool = true;
	}
	if(var_35_bool != 0) {
		var_28_bool = false;
		return 4;
	}
	object var_32_object;
	@GetScene(var_32_object);
	if(var_32_object == null) {
		var_28_bool = false;
		return 4;
	}
	object var_33_object;
	var_29_object->GetScene(var_33_object);
	if(var_32_object != var_33_object) {
		var_28_bool = false;
		return 4;
	}
	var_28_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1711(object var_12_object)
{
	bool var_14_bool;
	@AddItem(var_14_bool, "revolver_ammo", 0, 2);
	@AddItem(var_14_bool, "alpha_pills", 0, 12);
	func_1687();
	object var_41_object;
	var_12_object = var_41_object;
	TaskCall(3);
	func_1072(var_41_object);
	TaskReturn();
}


void func_1599(float var_23_float, cvector var_24_cvector, cvector var_25_cvector)
{
	var_23_float = (var_25_cvector - var_24_cvector) | (var_25_cvector - var_24_cvector);
}


// @pe
void func_1218(string var_425_string, int var_426_int)
{
	if(var_426_int == 2) {
		var_425_string = "fire";
		return 0;
	EMIT "GOTO 0x4ce";
	}
	if(var_426_int == 1) {
		var_425_string = "bullet";
		return 0;
	}
	var_425_string = "phys";
}


// @pe
void func_1603(float var_435_float, float var_436_float, float var_437_float)
{
	if(var_436_float < var_437_float)
		var_436_float = var_435_float;
	else
		var_437_float = var_435_float;
	
}


void func_708(cvector var_0_cvector, int var_4_int, bool var_317_bool)
{
	object var_323_object; float var_325_float; cvector var_326_cvector; cvector var_327_cvector;
	@GetScene(var_323_object);
	bool var_324_bool = false;
	
	for(;;) {
		cvector var_328_cvector;
		func_1232(var_328_cvector, var_0_cvector);
		var_334_int = -var_328_cvector;
		@FindDirLength(var_325_float, var_334_int, var_4_int);
		if(var_325_float < var_4_int) {
		} else {
				@Face(var_0_cvector);
				@PlayAnimation("all", "bjump");
				var_0_cvector->GetPFPosition(var_326_cvector); //@t
				@GetPFPosition(var_327_cvector);
				@WaitForAnimEnd();
				func_796(var_327_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_324_bool = true;
				bool var_339_bool;
				func_664(var_327_cvector, var_339_bool);
				var_340_bool = !var_339_bool; //@nz
				if(var_340_bool == 0) goto Label_749;
		}
		for(;;) {
			var_324_bool = var_317_bool;

		}

	Label_749:
	}
}
EMIT "Stack[-5] = 0";


void func_1095(object var_42_object)
{
	cvector var_53_cvector; cvector var_54_cvector; cvector var_55_cvector; cvector var_56_cvector; string var_57_string; object var_58_object; bool var_59_bool; bool var_60_bool; float var_61_float; cvector var_62_cvector;
	if(var_42_object == null) {
		func_1186("fdie");
	} else {
		var_42_object->GetPosition(var_53_cvector);
		@GetPosition(var_54_cvector);
		@GetDirection(var_55_cvector);
		var_56_cvector = var_54_cvector - var_53_cvector;
		var_96_float = GetByIndex(var_56_cvector, 0);
		var_97_float = GetByIndex(var_55_cvector, 0);
		var_99_float = GetByIndex(var_56_cvector, 2);
		var_100_float = GetByIndex(var_55_cvector, 2);
		if(((var_96_float * var_97_float) + (var_99_float * var_100_float)) >= 0)
			var_57_string = "fdie";
		else
			var_57_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_42_object = var_58_object;
		var_107_bool = IsFuncExist(var_42_object, "GetScriptProperty", 2);
		if(var_107_bool != 0) {
			var_42_object->HasScriptProperty(var_59_bool, "Owner");
			if(var_59_bool != 0) {
				var_42_object->GetScriptProperty(var_58_object, "Owner");
				if(var_58_object == null)
					var_42_object = var_58_object;
			}
		}
		var_114_bool = IsFuncExist(var_58_object, "@GetEyesHeight", 1);
		if(var_114_bool != 0) {
			var_58_object->GetEyesHeight(var_61_float);
			var_62_cvector = [0.0, 0.0, 0.0];
			var_115_float = GetByIndex(var_62_cvector, 1);
			var_61_float = var_115_float;
			SetByIndex(var_62_cvector, 1) = var_115_float;
			@LookAsync(var_42_object, "head", var_62_cvector);
			var_60_bool = true;
		} else {
			var_60_bool = false;

		}
		string var_117_string;
		var_57_string = var_117_string;
		func_1542(var_117_string);
		@PlayAnimation("all", var_57_string);
		@WaitForAnimEnd();
		if(var_60_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_57_string);
		@RemoveEnvelope();
		var_58_object = null;
	}
	
}


void func_457(cvector var_0_cvector, cvector var_1_cvector, bool var_346_bool, float var_347_float)
{
	string var_355_string;
	func_796(var_355_string);
	int var_352_int;
	@irand(var_352_int, var_1_cvector);
	@Face(var_0_cvector);
	@SetAttackState(true);
	func_1640();
	@PlayAnimation("all", ("attack_begin" + (var_352_int + 1)));
	@WaitForAnimEnd();
	int var_354_int;
	func_764(var_354_int, var_355_string);
	bool var_380_bool;
	func_1370(var_380_bool, var_0_cvector);
	if(!var_380_bool) { //@nz
		@StopAsync();
		var_346_bool = false;
		return 8;
	}
	float var_383_float; int var_384_int;
	var_347_float = var_383_float;
	var_352_int = var_384_int;
	func_418(var_355_string, var_383_float, var_384_int);
	bool var_353_bool;
	@HasAnimation(var_353_bool, "all", ("attack_middle" + var_352_int));
	if(var_353_bool != 0) {
		func_1640();
		@PlayAnimation("all", ("attack_middle" + var_352_int));
		@WaitForAnimEnd();
		func_796(var_355_string);
		bool var_468_bool;
		func_1370(var_468_bool, var_0_cvector);
		if(!var_468_bool) { //@nz
			@StopAsync();
			var_346_bool = false;
			return 8;
		}
		float var_471_float; int var_472_int;
		var_347_float = var_471_float;
		func_418(var_355_string, var_471_float, var_472_int);
		var_354_int = 1;

		for(;;) {
			var_355_string = (("attack_middle" + var_472_int) + "_") + var_354_int;
			@HasAnimation(var_353_bool, "all", var_355_string);
			if(!var_353_bool) { //@nz
			} else {
				func_1640();
				@PlayAnimation("all", var_355_string);
				@WaitForAnimEnd();
				func_796(var_355_string);
				bool var_494_bool;
				func_1370(var_494_bool, var_0_cvector);
				if(!var_494_bool) { //@nz
					@StopAsync();
					var_346_bool = false;
					return 8;
				}
				float var_497_float; int var_498_int;
				var_347_float = var_497_float;
				var_352_int = var_498_int;
				func_418(var_355_string, var_497_float, var_498_int);
				var_354_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_352_int));
		bool var_483_bool;
		func_810(var_483_bool);
		if(var_483_bool != 0) {
			bool var_484_bool;
			func_594(var_484_bool, 0.75);
			@StopAsync();
		}
		var_346_bool = true;
		return 8;

	}
}


// @pe
void func_1610(float var_445_float, float var_446_float, float var_447_float, float var_448_float)
{
	if(var_446_float < var_447_float) {
		var_447_float = var_445_float;
		return 0;
	}
	if(var_446_float > var_448_float) {
		var_448_float = var_445_float;
		return 0;
	}
	var_446_float = var_445_float;
}


void func_1232(cvector var_45_cvector, object var_46_object)
{
	cvector var_49_cvector;
	@GetPosition(var_49_cvector);
	cvector var_50_cvector;
	var_46_object->GetPosition(var_50_cvector);
	var_45_cvector = var_50_cvector - var_49_cvector;
}


void func_594(bool var_484_bool, float var_485_float)
{
	float var_488_float; bool var_489_bool;
	@rand(var_488_float);
	if(var_488_float < var_485_float) {

		for(;;) {
			@IsAnimationPlaying(var_489_bool);
			if(!var_489_bool) { //@nz
			} else {
				bool var_492_bool;
				func_692(var_492_bool);
				if(var_492_bool != 0) {
					var_484_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_484_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_796(var_489_bool);
}


void func_1621(float var_453_float)
{
	object var_455_object;
	@CreateFloatVector(var_455_object);
	var_455_object->add(var_453_float);
	@SendWorldWndMessage(15, var_455_object);
}
EMIT "Stack[-1] = 0";


void func_1239(bool var_152_bool, object var_153_object)
{
	bool var_155_bool;
	@IsPlayerActor(var_153_object, var_155_bool);
	var_155_bool = var_152_bool;
}


void func_1370(bool var_24_bool, object var_25_object)
{
	object var_29_object;
	var_25_object = var_29_object;
	bool var_28_bool;
	func_1334(var_28_bool, var_29_object);
	if(!var_28_bool) { //@nz
		var_24_bool = false;
		return 2;
	}
	bool var_46_bool; object var_47_object;
	func_1244(var_46_bool, var_47_object, "noaccess");
	if(!var_46_bool) { //@nz
		var_24_bool = true;
		return 2;
	}
	int var_27_int;
	var_47_object->GetProperty("noaccess", var_27_int);
	var_24_bool = var_27_int == 0;
}


void func_1244(bool var_46_bool, object var_47_object, string var_48_string)
{
	var_53_bool = IsFuncExist(var_47_object, "HasProperty", 2);
	if(!var_53_bool) { //@nz
		var_46_bool = false;
		return 2;
	}
	bool var_50_bool;
	var_47_object->HasProperty(var_48_string, var_50_bool);
	var_50_bool = var_46_bool;
}


void func_1631(object var_14_object)
{
	bool var_16_bool;
	@IsPlayerActor(var_14_object, var_16_bool);
	if(var_16_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1506(object var_17_object, cvector var_20_cvector, cvector var_21_cvector)
{
	object var_24_object;
	@GetScene(var_24_object);
	object var_25_object;
	@AddActorByType(var_25_object, "scripted", var_24_object, var_20_cvector, var_21_cvector, "blood_dir.xml");
	object var_28_object;
	var_17_object = var_28_object;
	func_1394(var_28_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1256(float var_397_float, object var_398_object, float var_399_float, int var_400_int)
{
	int var_410_int; int var_412_int;
	object var_417_object;
	var_398_object = var_417_object;
	bool var_416_bool;
	func_1244(var_416_bool, var_417_object, "health");
	if(!var_416_bool) //@nz
		var_397_float = 0.0;
	bool var_420_bool; object var_421_object;
	func_1244(var_420_bool, var_421_object, "armor");
	if(!var_420_bool) //@nz
		var_410_int = 0;
	else
		var_421_object->GetProperty("armor", var_410_int);
	string var_425_string; int var_426_int;
	var_400_int = var_426_int;
	func_1218(var_425_string, var_426_int);
	string var_411_string = "armor_" + var_425_string;
	bool var_431_bool; object var_432_object; string var_433_string;
	var_398_object = var_432_object;
	func_1244(var_431_bool, var_432_object, var_433_string);
	if(!var_431_bool) //@nz
		var_412_int = 0;
	else
		var_398_object->GetProperty(var_433_string, var_412_int);

	float var_435_float;
	func_1603(var_435_float, ((var_410_int + var_412_int) / 100.0), (float)1);
	float var_413_float;
	var_435_float = var_413_float;
	float var_414_float;
	var_398_object->GetProperty("health", var_414_float);
	float var_415_float = var_399_float * (1 - var_413_float);
	float var_445_float;
	func_1610(var_445_float, (var_414_float - var_415_float), (float)0, (float)1);
	var_398_object->SetProperty("health", var_445_float);
	bool var_451_bool; object var_452_object;
	var_398_object = var_452_object;
	func_1239(var_451_bool, var_452_object);
	if(var_451_bool != 0) {
		float var_453_float = -var_415_float;
		func_1621(var_453_float);
	}
	var_415_float = var_397_float;
	
}


void func_1640(void)
{
	object var_359_object;
	@GetScene(var_359_object);
	object var_361_object;
	func_1583(var_361_object);
	@BroadcastMessage("battle", var_361_object, var_359_object);
}
EMIT "Stack[-1] = 0";


void func_621(cvector var_0_cvector, bool var_285_bool, float var_286_float)
{
	bool var_292_bool; cvector var_293_cvector; cvector var_294_cvector; cvector var_295_cvector; float var_296_float;
	
	for(;;) {
		@IsAnimationPlaying(var_292_bool);
		if(!var_292_bool) //@nz
			break;
		bool var_298_bool;
		func_692(var_298_bool);
		if(var_298_bool != 0) {
			var_285_bool = true;
			return 10;
		}
		bool var_341_bool;
		func_1370(var_341_bool, var_0_cvector);
		if(!var_341_bool) { //@nz
			var_285_bool = false;
			return 10;
		}
		var_0_cvector->GetPFPosition(var_293_cvector); //@t
		@GetPFPosition(var_294_cvector);
		var_295_cvector = var_293_cvector - var_294_cvector;
		var_296_float = var_295_cvector | var_295_cvector;
		if(var_296_float < (var_286_float * var_286_float)) {
			bool var_346_bool; float var_347_float;
			var_286_float = var_347_float;
			func_457(var_295_cvector, var_296_float, var_346_bool, var_347_float);
			var_285_bool = true;
			return 10;
		}
		@sync();
	}
	func_796(var_296_float);
	var_285_bool = false;
}


void func_879(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_1045(var_11_object);
}


void func_1520(object var_231_object)
{
	cvector var_235_cvector;
	var_231_object->GetPosition(var_235_cvector);
	cvector var_236_cvector;
	@GetPosition(var_236_cvector);
	cvector var_237_cvector = var_235_cvector - var_236_cvector;
	var_238_float = GetByIndex(var_237_cvector, 0);
	var_239_float = GetByIndex(var_237_cvector, 2);
	@RotateAsync(var_238_float, var_239_float);
}


void func_753(cvector var_0_cvector, bool var_248_bool)
{
	bool var_250_bool;
	var_253_bool = IsFuncExist(var_0_cvector, "IsAttacking", 1);
	if(var_253_bool != 0) {
		var_0_cvector->IsAttacking(var_250_bool); //@t
		var_250_bool = var_248_bool;
	}
	var_248_bool = false;
}


void func_1394(object var_28_object)
{
	string var_42_string;
	if(var_28_object == null)
		return 14;
	bool var_36_bool;
	@IsDead(var_36_bool);
	if(var_36_bool != 0)
		return 14;
	int var_37_int;
	@GetSecondaryAnimationType(var_37_int);
	if(var_37_int < 0)
		return 14;
	cvector var_38_cvector;
	var_28_object->GetPosition(var_38_cvector);
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	cvector var_40_cvector;
	@GetDirection(var_40_cvector);
	cvector var_41_cvector = var_39_cvector - var_38_cvector;
	var_47_float = GetByIndex(var_41_cvector, 0);
	var_48_float = GetByIndex(var_40_cvector, 0);
	var_50_float = GetByIndex(var_41_cvector, 2);
	var_51_float = GetByIndex(var_40_cvector, 2);
	if(((var_47_float * var_48_float) + (var_50_float * var_51_float)) >= 0)
		var_42_string = "fhit";
	else
		var_42_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_42_string + "1"), (var_42_string + "2"), -10);
	
}


void func_1651(int var_21_int)
{
	int var_23_int;
	@GetVariable("branch", var_23_int);
	var_23_int = var_21_int;
}


// @pe
void func_1657(object var_15_object)
{
	int var_16_int;
	func_1651(var_16_int);
	if(var_16_int == 1)
		@WorkWithCorpse(var_15_object);
	else
		@Barter(var_15_object);
	
}


void func_1531(object var_15_object)
{
	float var_18_float;
	var_15_object->GetEyesHeight(var_18_float);
	cvector var_19_cvector = [0.0, 0.0, 0.0];
	var_20_float = GetByIndex(var_19_cvector, 1);
	var_18_float = var_20_float;
	SetByIndex(var_19_cvector, 1) = var_20_float;
	@LookAsync(var_15_object, "head", var_19_cvector);
}


void func_127(void)
{
	@StopGroup0();
	@Stop();
}


void func_383(cvector var_1_cvector, object var_2_object, int var_4_int)
{
	bool var_53_bool; bool var_54_bool; cvector var_55_cvector;
	var_1_cvector = 0;
	
	for(;;) {
		@HasAnimation(var_53_bool, "all", ("attack_begin" + (var_1_cvector + 1)));
		if(!var_53_bool) { //@nz
		} else {
			var_1_cvector += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_54_bool, ("attack" + (var_2_object + 1)));
			if(!var_54_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_55_cvector, "all", "bjump");
		var_69_float = GetByIndex(var_55_cvector, 2);
		var_4_int = -var_69_float;

	}
}


