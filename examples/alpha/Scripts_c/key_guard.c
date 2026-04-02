// @GLOBALS: 0:bool:

task task_0
{
	void OnLoad(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, int var_7_int, bool var_8_bool, object var_9_object)
	{
		@StopGroup0();
	}

}


maintask task_1
{
	void init(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, int var_7_int, bool var_8_bool, object var_9_object)
	{
		var_2_bool = false;
		@SensePlayerOnly(true);
		func_1470();
		func_21();
	
		for(;;) {
			func_170(var_8_bool, var_9_object);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
		object var_14_object;
		var_10_object = var_14_object;
		func_1451(var_14_object);
		int var_12_int;
		int var_13_int = var_12_int;
		if(var_12_int > 0) {
			if(var_12_int > 1)
				func_145();
			object var_20_object;
			var_10_object = var_20_object;
			func_1454(var_20_object);
		}
	}

	void OnAttacked(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
		object var_14_object;
		var_10_object = var_14_object;
		int var_13_int;
		func_1414(var_13_int, var_14_object);
		int var_12_int;
		var_13_int = var_12_int;
		if(var_12_int > 0) {
			if(var_12_int > 1)
				func_145();
			object var_54_object;
			var_10_object = var_54_object;
			func_1424(var_54_object);
		}
	}

	void OnPlayerDamage(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		int var_13_int;
		object var_15_object;
		var_10_bool = var_15_object;
		object var_16_object;
		var_11_object = var_16_object;
		bool var_14_bool;
		func_1499(var_14_bool, var_15_object, var_16_object);
		if(var_14_bool != 0) {
			int var_46_int; object var_47_object;
			var_10_bool = var_47_object;
			func_1432(var_46_int, var_47_object);
			var_46_int = var_13_int;
			if(var_13_int > 0) {
				if(var_13_int > 1)
					func_145();
				object var_83_object;
				var_10_bool = var_83_object;
				func_1439(var_83_object);
			}
		}
	}

	void OnSteal(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
		object var_14_object;
		var_10_object = var_14_object;
		func_1460(var_14_object);
		int var_12_int;
		int var_13_int = var_12_int;
		if(var_12_int > 0) {
			if(var_12_int > 1)
				func_145();
			object var_20_object;
			var_10_object = var_20_object;
			func_1463();
		}
	}

	void OnMessage(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, string var_4_string, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		string var_15_string;
		var_11_object = var_15_string;
		object var_16_object;
		var_10_bool = var_16_object;
		func_1465(var_16_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_145();
			string var_22_string; object var_23_object;
			var_11_object = var_22_string;
			var_10_bool = var_23_object;
			func_1468();
		}
	}

	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, int var_7_int, bool var_8_bool, object var_9_object)
	{
		func_145();
		func_1445();
	}

	// @pe
	void OnDeath(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
		func_145();
		object var_12_object;
		var_10_object = var_12_object;
		func_1353();
	}

}


task task_2
{
	void OnUse(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
		object var_14_object;
		var_10_object = var_14_object;
		func_1451(var_14_object);
		int var_12_int;
		int var_13_int = var_12_int;
		if(var_12_int > 0) {
			object var_17_object;
			var_10_object = var_17_object;
			func_1454(var_17_object);
		}
	}

	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, int var_7_int, bool var_8_bool, object var_9_object)
	{
		func_1445();
	}

	// @pe
	void OnHit(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, int var_4_int, float var_5_float, float var_6_float, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object)
	{
	}

	// @pe
	void OnPropertyChange(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, string var_4_string, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
	}

	// @pe
	void OnDeath(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
	}

}


task task_3
{
}


task task_4
{
	void OnUnload(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, int var_7_int, bool var_8_bool, object var_9_object)
	{
		func_1037(var_9_object);
		func_1445();
	}

	// @pe
	void OnTimer(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, int var_7_int, bool var_8_bool, object var_9_object, int var_10_int)
	{
		if(var_10_int != 0)
			return 0;
		bool var_13_bool;
		func_1053(var_13_bool, var_1_cvector);
		if(!var_13_bool) //@nz
			var_0_cvector = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, int var_7_int, bool var_8_bool, object var_9_object, object var_10_object)
	{
		@RequestClearPath(var_10_object);
	}

	// @pe
	void OnDeath(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, int var_7_int, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_1037(var_10_object);
		object var_12_object;
		var_10_object = var_12_object;
		func_1353();
	}

}


void OnPropertyChange(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, int var_7_int, bool var_8_bool, object var_9_object, object var_10_object, string var_11_string)
{
	float var_13_float;
	if(var_11_string == "health") {
		@GetProperty("health", var_13_float);
		if(var_13_float <= 0)
			@SignalDeath(var_10_object);
	}
}


// @pe
void OnDeath(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, int var_7_int, bool var_8_bool, object var_9_object, object var_10_object)
{
	object var_11_object;
	var_10_object = var_11_object;
	func_1332(var_11_object);
}


// @pe
void OnHit(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, int var_7_int, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, float var_12_float, float var_13_float)
{
	object var_14_object;
	var_10_object = var_14_object;
	int var_15_int;
	var_11_int = var_15_int;
	float var_16_float;
	var_12_float = var_16_float;
	func_1221(var_15_int, var_16_float);
}


void func_1536(void)
{
	var_66_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
	object var_65_object;
	@GetScene(var_65_object);
	object var_69_object;
	func_1304(var_69_object);
	var_65_object->RemoveStationaryActor(var_69_object);
}
EMIT "Stack[-1] = 0";


void func_0(void)
{
	@Hold();
}


void func_898(int var_365_int)
{
	var_365_int = 0;
}


// @pe
void func_900(void)
{
}


void func_1156(bool var_30_bool, object var_31_object)
{
	bool var_33_bool;
	var_31_object->IsDead(var_33_bool);
	var_33_bool = var_30_bool;
}


// @pe
void func_1414(int var_48_int, object var_49_object)
{
	object var_51_object;
	var_49_object = var_51_object;
	bool var_50_bool;
	func_1197(var_50_bool, var_51_object);
	if(var_50_bool != 0)
		var_48_int = 2;
	else
		var_48_int = 0;
	
}


void func_902(int var_294_int)
{
	var_294_int = 1;
}


void func_1288(object var_204_object)
{
	cvector var_208_cvector;
	var_204_object->GetPosition(var_208_cvector);
	cvector var_209_cvector;
	@GetPosition(var_209_cvector);
	cvector var_210_cvector = var_208_cvector - var_209_cvector;
	var_211_float = GetByIndex(var_210_cvector, 0);
	var_212_float = GetByIndex(var_210_cvector, 2);
	@RotateAsync(var_211_float, var_212_float);
}


void func_904(float var_289_float)
{
	var_289_float = 0.5;
}


void func_1161(bool var_19_bool, object var_20_object)
{
	if(var_20_object == null) {
		var_19_bool = false;
		return 4;
	}
	bool var_26_bool = false;
	var_29_bool = IsFuncExist(var_20_object, "IsDead", 1);
	if(var_29_bool != 0) {
		bool var_30_bool; object var_31_object;
		var_20_object = var_31_object;
		func_1156(var_30_bool, var_31_object);
		if(var_30_bool != 0)
			var_26_bool = true;
	}
	if(var_26_bool != 0) {
		var_19_bool = false;
		return 4;
	}
	object var_23_object;
	@GetScene(var_23_object);
	if(var_23_object == null) {
		var_19_bool = false;
		return 4;
	}
	object var_24_object;
	var_20_object->GetScene(var_24_object);
	if(var_23_object != var_24_object) {
		var_19_bool = false;
		return 4;
	}
	var_19_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1037(cvector var_0_cvector)
{
	var_0_cvector = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_1424(object var_84_object)
{
	object var_85_object;
	var_84_object = var_85_object;
	TaskCall(3);
	func_401(var_85_object);
	TaskReturn();
}


void func_145(void)
{
	if(var_2_bool != 0)
		func_1391();
	else
		func_248();
	
}


void func_913(cvector var_0_cvector, cvector var_1_cvector, bool var_142_bool, object var_143_object, float var_144_float, float var_145_float, bool var_146_bool, bool var_147_bool)
{
	bool var_158_bool; object var_160_object; cvector var_161_cvector; cvector var_162_cvector; float var_164_float; object var_165_object;
	var_0_cvector = false;
	var_1_cvector = var_143_object;
	bool var_159_bool;
	var_147_bool = var_159_bool;
	
	for(;;) {
		bool var_166_bool; object var_167_object;
		var_143_object = var_167_object;
		func_1053(var_166_bool, var_167_object);
		if(!var_166_bool) { //@nz
			var_142_bool = false;
			return 16;
		}
		var_143_object->GetPosition(var_161_cvector);
		@GetPosition(var_162_cvector);
		var_164_float = (var_161_cvector - var_162_cvector) | (var_161_cvector - var_162_cvector);
		bool var_171_bool = false;
		if(var_145_float > 0) {
			if(var_164_float > (var_145_float * var_145_float))
				var_171_bool = true;
		}
		if(var_171_bool != 0) {
			@Stop();
			var_142_bool = false;
			return 16;
		}
		if(var_164_float > (var_144_float * var_144_float)) {
			var_143_object->GetPFPosition(var_161_cvector);
			@FindPathTo(var_165_object, var_161_cvector);
			if(var_165_object != null) {
				var_165_object = var_160_object;
				var_165_object = null;
			}
			if(var_160_object != null) {
				if(var_159_bool == 0) goto Label_966;
				var_159_bool = false;
				@RotatePath(var_160_object, var_158_bool);
				if(!var_158_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_184_string;
						func_1060(var_184_string);
						string var_185_string;
						func_1062(var_185_string);
						@FollowPath(var_160_object, var_146_bool, var_158_bool, var_184_string, var_185_string);
						if(!var_158_bool) { //@nz
							if(var_0_cvector == 0) goto Label_985;
							var_160_object = null;
						}
					EMIT "GOTO 0x3da";

					Label_985:
						} else {
					var_160_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_158_bool);
					if(!var_158_bool) { //@nz
						if(var_0_cvector != 0) {
							var_160_object = null;
							goto Label_1013;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1013;
		}
			var_165_object = null;
			goto Label_1011;

		Label_1011:
			var_160_object = null;

		}
	Label_1013:
		for(;;) {
			var_142_bool = !var_0_cvector;
			return 16;

			}
	}
	
}


void func_1299(bool var_24_bool)
{
	bool var_26_bool;
	@IsLoaded(var_26_bool);
	var_26_bool = var_24_bool;
}


void func_659(cvector var_0_cvector, cvector var_1_cvector, bool var_269_bool, float var_270_float)
{
	int var_273_int;
	@irand(var_273_int, var_1_cvector);
	var_273_int += 1;
	@Face(var_0_cvector);
	@SetAttackState(true);
	@PlayAnimation("all", ("attack_begin" + var_273_int));
	@WaitForAnimEnd();
	bool var_274_bool;
	func_866(var_273_int, var_274_bool);
	bool var_295_bool;
	func_1197(var_295_bool, var_0_cvector);
	if(!var_295_bool) { //@nz
		@StopAsync();
		var_269_bool = false;
		return 4;
	}
	float var_298_float; int var_299_int;
	var_270_float = var_298_float;
	var_273_int = var_299_int;
	func_620(var_274_bool, var_298_float, var_299_int);
	@HasAnimation(var_274_bool, "all", ("attack_middle" + var_273_int));
	if(var_274_bool != 0) {
		@PlayAnimation("all", ("attack_middle" + var_273_int));
		@WaitForAnimEnd();
		bool var_375_bool;
		func_1197(var_375_bool, var_0_cvector);
		if(!var_375_bool) { //@nz
			@StopAsync();
			var_269_bool = false;
			return 4;
		}
		float var_378_float; int var_379_int;
		var_270_float = var_378_float;
		var_273_int = var_379_int;
		func_620(var_274_bool, var_378_float, var_379_int);
	}
	@SetAttackState(false);
	@PlayAnimation("all", ("attack_end" + var_273_int));
	bool var_384_bool;
	func_739(var_384_bool, 0.75);
	@StopAsync();
	var_269_bool = true;
}


void func_21(void)
{
	bool var_24_bool;
	func_1299(var_24_bool);
	if(!var_24_bool) //@nz
		func_1445();
}


// @pe
void func_401(object var_85_object)
{
	object var_91_object;
	func_415(var_86_object, var_87_int, var_88_int, var_89_bool, var_90_int, var_91_object, var_91_object, true, 180.0);
}


// @pe
void func_1432(int var_46_int, object var_47_object)
{
	object var_49_object;
	var_47_object = var_49_object;
	int var_48_int;
	func_1414(var_48_int, var_49_object);
	var_48_int = var_46_int;
}


// @pe
void func_409(float var_309_float)
{
	var_309_float = 0.07;
}


void func_1304(object var_69_object)
{
	object var_71_object;
	@self(var_71_object);
	var_71_object = var_69_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_412(int var_316_int)
{
	var_316_int = 0;
}


// @pe
void func_1053(bool var_13_bool, object var_14_object)
{
	object var_16_object;
	var_14_object = var_16_object;
	bool var_15_bool;
	func_1197(var_15_bool, var_16_object);
	var_15_bool = var_13_bool;
}


void func_1310(float var_61_float, cvector var_62_cvector, cvector var_63_cvector)
{
	var_61_float = (var_63_cvector - var_62_cvector) | (var_63_cvector - var_62_cvector);
}


// @pe
void func_1439(object var_83_object)
{
	object var_84_object;
	var_83_object = var_84_object;
	func_1424(var_84_object);
}


void func_286(object var_13_object)
{
	cvector var_24_cvector; cvector var_25_cvector; cvector var_26_cvector; cvector var_27_cvector; string var_28_string; object var_29_object; bool var_30_bool; bool var_31_bool; float var_32_float; cvector var_33_cvector;
	if(var_13_object == null) {
		func_373("fdie");
	} else {
		var_13_object->GetPosition(var_24_cvector);
		@GetPosition(var_25_cvector);
		@GetDirection(var_26_cvector);
		var_27_cvector = var_25_cvector - var_24_cvector;
		var_38_float = GetByIndex(var_27_cvector, 0);
		var_39_float = GetByIndex(var_26_cvector, 0);
		var_41_float = GetByIndex(var_27_cvector, 2);
		var_42_float = GetByIndex(var_26_cvector, 2);
		if(((var_38_float * var_39_float) + (var_41_float * var_42_float)) >= 0)
			var_28_string = "fdie";
		else
			var_28_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_13_object = var_29_object;
		var_49_bool = IsFuncExist(var_13_object, "GetScriptProperty", 2);
		if(var_49_bool != 0) {
			var_13_object->HasScriptProperty(var_30_bool, "Owner");
			if(var_30_bool != 0) {
				var_13_object->GetScriptProperty(var_29_object, "Owner");
				if(var_29_object == null)
					var_13_object = var_29_object;
			}
		}
		var_56_bool = IsFuncExist(var_29_object, "@GetEyesHeight", 1);
		if(var_56_bool != 0) {
			var_29_object->GetEyesHeight(var_32_float);
			var_33_cvector = [0.0, 0.0, 0.0];
			var_57_float = GetByIndex(var_33_cvector, 1);
			var_32_float = var_57_float;
			SetByIndex(var_33_cvector, 1) = var_57_float;
			@LookAsync(var_13_object, "head", var_33_cvector);
			var_31_bool = true;
		} else {
			var_31_bool = false;

		}
		@PlayAnimation("all", var_28_string);
		@WaitForAnimEnd();
		if(var_31_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_28_string);
		@RemoveEnvelope();
		var_29_object = null;
	}
	
}


void func_415(cvector var_0_cvector, cvector var_1_cvector, bool var_2_bool, object var_3_object, object var_4_object, object var_91_object, bool var_92_bool, float var_93_float, bool var_148_bool)
{
	bool var_104_bool; bool var_105_bool; float var_106_float; cvector var_107_cvector; cvector var_108_cvector; bool var_109_bool; bool var_110_bool; float var_112_float; float var_113_float;
	var_1_cvector = 0;
	
	for(;;) {
		@HasAnimation(var_104_bool, "all", ("attack_begin" + (var_1_cvector + 1)));
		if(!var_104_bool) { //@nz
		} else {
			var_1_cvector += 1;
		}
		var_2_bool = 0;

		for(;;) {
			@IsExisting3DSound(var_105_bool, ("attack" + (var_2_bool + 1)));
			if(!var_105_bool) { //@nz
			} else {
									var_2_bool += 1;
			}
			var_4_object = 0;
			var_127_bool = IsFuncExist(var_91_object, "@GetAttackDistance", 1);
			if(var_127_bool != 0) {
				var_91_object->GetAttackDistance(var_106_float);
				var_106_float += 50;
			} else {
								var_93_float = var_106_float;

			}
			if(var_106_float >= 150)
				var_106_float = 150;
			var_3_object = false;
			var_0_cvector = var_91_object;
			@IsPlayerActor(var_0_cvector, var_109_bool);
			if(var_92_bool != 0)
				var_110_bool = false;
			else
				var_110_bool = true;

			for(;;) {
				bool var_132_bool = false;
				bool var_133_bool;
				func_1197(var_133_bool, var_0_cvector);
				if(var_133_bool != 0) {
					if(!var_3_object) //@nz
						var_132_bool = true;
				}
				if(var_132_bool != 0) {
					var_0_cvector->GetPFPosition(var_107_cvector); //@t
					@GetPFPosition(var_108_cvector);
					var_112_float = (var_107_cvector - var_108_cvector) | (var_107_cvector - var_108_cvector);
					if(var_112_float >= ((400.0 + var_106_float) * (400.0 + var_106_float))) {
						bool var_142_bool; float var_144_float;
						var_106_float = var_144_float;
						TaskCall(4);
						func_913(var_148_bool, var_149_object, var_142_bool, var_0_cvector, var_144_float, 3000.0, true, false);
						TaskReturn();
						if(!var_148_bool) { //@nz
						} else {
							var_110_bool = false;
					} else {
					if(var_112_float >= (var_93_float * var_93_float)) {
						if(!var_110_bool) { //@nz
							func_1288(var_0_cvector);
							@PlayAnimation("all", "attack_on");
							@WaitForAnimEnd();
							@StopAsync();
							var_110_bool = true;
						}
						@rand(var_113_float);
						bool var_215_bool;
						var_217_bool = var_113_float < 0.6;
						if(var_217_bool != 1) {
							bool var_218_bool;
							func_855(true, var_218_bool);
							if(var_218_bool != 1)
								var_215_bool = false;
						}
						if(var_215_bool != 0) {
							@Face(var_0_cvector);
							@PlayAnimation("all", "attack_stay");
							bool var_226_bool; float var_227_float;
							func_763(var_113_float, var_226_bool, var_227_float);
							@StopAsync();
						} else {
							@Face(var_0_cvector);
							@PlayAnimation("all", "fjump");
							@WaitForAnimEnd();
							@SetSpeed([0.0, 0.0, 0.0]);
							@Stop();
							@StopAsync();
							bool var_396_bool;
							func_855(var_113_float, var_396_bool);
							var_397_bool = !var_396_bool; //@nz
							if(var_397_bool == 0) goto Label_593;
							bool var_398_bool;
							func_1197(var_398_bool, var_0_cvector);
							if(!var_398_bool) { //@nz
								goto Label_603;
							}
							var_0_cvector->GetPFPosition(var_107_cvector); //@t
							@GetPFPosition(var_108_cvector);
							var_112_float = (var_107_cvector - var_108_cvector) | (var_107_cvector - var_108_cvector);
							if(!(var_112_float < (var_227_float * var_227_float))) goto Label_593;
							bool var_403_bool; float var_404_float;
							var_93_float = var_404_float;
							func_659(var_112_float, var_113_float, var_403_bool, var_404_float);
							var_405_bool = !var_403_bool; //@nz
							if(var_405_bool == 0) goto Label_593;
							goto Label_603;
					}
						bool var_406_bool; float var_407_float;
						var_93_float = var_407_float;
						func_659(var_112_float, var_113_float, var_406_bool, var_407_float);
						if(!var_406_bool) { //@nz
							goto Label_603;
						}
						var_110_bool = true;

					}
				Label_593:
					goto Label_602;
					}
					Label_602:
					}
				}
			Label_603:
				@WaitForAnimEnd();
				if(var_3_object != 0)
					return 20;
				@PlayAnimation("all", "attack_off");
				@WaitForAnimEnd();
				if(var_109_bool != 0)
					@Sleep(2.0);
				return 20;

			}

		}

	}
}


// @pe
void func_1314(float var_348_float, float var_349_float, float var_350_float)
{
	if(var_349_float < var_350_float)
		var_349_float = var_348_float;
	else
		var_350_float = var_348_float;
	
}


void func_803(cvector var_0_cvector, bool var_239_bool)
{
	cvector var_245_cvector; cvector var_246_cvector;
	bool var_250_bool;
	func_1197(var_250_bool, var_0_cvector);
	if(!var_250_bool) { //@nz
		var_239_bool = false;
		return 10;
	}
	bool var_253_bool;
	float var_249_float;
	func_855(var_249_float, var_253_bool);
	if(var_253_bool != 0) {
		var_0_cvector->GetPFPosition(var_245_cvector); //@t
		@GetPFPosition(var_246_cvector);
		var_0_cvector->GetAttackDistance(var_249_float); //@t
		var_249_float += 50;
		if(((var_245_cvector - var_246_cvector) | (var_245_cvector - var_246_cvector)) <= (var_249_float * var_249_float)) {
			func_836(var_249_float);
			var_239_bool = true;
			return 10;
		}
	}
	var_239_bool = false;
}


void func_164(bool var_2_bool)
{
	var_2_bool = true;
	func_1394();
	var_2_bool = false;
}


void func_1445(void)
{
	TaskCall(0);
	func_0();
	TaskReturn();
}


void func_1060(string var_184_string)
{
	var_184_string = "walk";
}


void func_1062(string var_185_string)
{
	var_185_string = "run";
}


// @pe
void func_1064(string var_340_string, int var_341_int)
{
	if(var_341_int == 1)
		var_340_string = "fire";
	var_340_string = "phys";
}


// @pe
void func_1321(float var_358_float, float var_359_float, float var_360_float, float var_361_float)
{
	if(var_359_float < var_360_float) {
		var_360_float = var_358_float;
		return 0;
	}
	if(var_359_float > var_361_float) {
		var_361_float = var_358_float;
		return 0;
	}
	var_359_float = var_358_float;
}


void func_170(cvector var_0_cvector, cvector var_1_cvector)
{
	int var_32_int; bool var_33_bool; cvector var_34_cvector; object var_35_object;
	@GetPFPosition(var_1_cvector);
	@GetDirection(var_0_cvector);
	
	for(;;) {
		@irand(var_32_int, 60);
		@Sleep((var_32_int + 30), var_33_bool);
		if(var_33_bool != 0) {
			func_164(var_35_object);
		} else {
		for(;;) {
			@GetPFPosition(var_34_cvector);
			float var_61_float; cvector var_63_cvector;
			var_34_cvector = var_63_cvector;
			func_1310(var_61_float, var_1_cvector, var_63_cvector);
			if(var_61_float > 40000) {
				@FindPathTo(var_35_object, var_1_cvector);
				if(var_35_object != null) {
					@RotatePath(var_35_object, var_33_bool);
					if(!var_33_bool) { //@nz
					} else {
					@FollowPath(var_35_object, false, var_33_bool);
					if(!var_33_bool) { //@nz
						goto Label_245;
					}
					var_72_float = GetByIndex(var_0_cvector, 0);
					var_73_float = GetByIndex(var_0_cvector, 2);
					@Rotate(var_72_float, var_73_float, var_33_bool);
					if(!var_33_bool) { //@nz
						goto Label_245;
					}
					@WaitForAnimEnd(var_33_bool);
					if(!var_33_bool) { //@nz
						goto Label_245;
					}
					goto Label_246;
				EMIT "GOTO 0xe6";
				}
				@Sleep(1);
				var_35_object = null;
				goto Label_245;
			}
			var_77_float = GetByIndex(var_0_cvector, 0);
			var_78_float = GetByIndex(var_0_cvector, 2);
			@Rotate(var_77_float, var_78_float, var_33_bool);
			if(!var_33_bool) { //@nz
				goto Label_245;
			}
			@WaitForAnimEnd(var_33_bool);
			if(!var_33_bool) { //@nz
				goto Label_245;
			}
			goto Label_246;
			}
		Label_245:
		}
		}
	Label_246:
	}
	
}
EMIT "Return(); Pop(8)";


// @pe
void func_1451(int var_13_int)
{
	var_13_int = 2;
}


void func_1197(bool var_15_bool, object var_16_object)
{
	object var_20_object;
	var_16_object = var_20_object;
	bool var_19_bool;
	func_1161(var_19_bool, var_20_object);
	if(!var_19_bool) { //@nz
		var_15_bool = false;
		return 2;
	}
	bool var_37_bool; object var_38_object;
	func_1080(var_37_bool, var_38_object, "noaccess");
	if(!var_37_bool) { //@nz
		var_15_bool = true;
		return 2;
	}
	int var_18_int;
	var_38_object->GetProperty("noaccess", var_18_int);
	var_15_bool = var_18_int == 0;
}


// @pe
void func_1454(object var_17_object)
{
	object var_18_object;
	var_17_object = var_18_object;
	func_1492(var_18_object);
}


void func_1072(float var_36_float, object var_37_object)
{
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	cvector var_42_cvector;
	var_37_object->GetPosition(var_42_cvector);
	var_36_float = (var_42_cvector - var_41_cvector) | (var_42_cvector - var_41_cvector);
}


// @pe
void func_1460(int var_13_int)
{
	var_13_int = 0;
}


// @pe
void func_1332(object var_11_object)
{
	object var_12_object;
	var_11_object = var_12_object;
	TaskCall(2);
	func_253(var_12_object);
	TaskReturn();
}


// @pe
void func_1463(void)
{
}


void func_1080(bool var_37_bool, object var_38_object, string var_39_string)
{
	var_44_bool = IsFuncExist(var_38_object, "HasProperty", 2);
	if(!var_44_bool) { //@nz
		var_37_bool = false;
		return 2;
	}
	bool var_41_bool;
	var_38_object->HasProperty(var_39_string, var_41_bool);
	var_41_bool = var_37_bool;
}


// @pe
void func_1465(int var_14_int)
{
	var_14_int = 0;
}


// @pe
void func_1468(void)
{
}


void func_1470(void)
{
	var_19_bool = GlobalVars[0];
	GlobalVars[0] = false;
	string var_15_string;
	@GetProperty("guard_scene", var_15_string);
	object var_16_object;
	@CreateInvItem(var_16_object);
	int var_17_int;
	@GetInvItemByName(var_17_int, "uni_key");
	var_16_object->SetItemID(var_17_int);
	var_16_object->SetProperty("key_scene_name", var_15_string);
	bool var_18_bool;
	@AddItem(var_18_bool, var_16_object, 0);
}
EMIT "Stack[-3] = 0";


void func_1092(float var_312_float, object var_313_object, float var_314_float, int var_315_int)
{
	int var_325_int; int var_327_int;
	object var_332_object;
	var_313_object = var_332_object;
	bool var_331_bool;
	func_1080(var_331_bool, var_332_object, "health");
	if(!var_331_bool) //@nz
		var_312_float = 0.0;
	bool var_335_bool; object var_336_object;
	func_1080(var_335_bool, var_336_object, "armor");
	if(!var_335_bool) //@nz
		var_325_int = 0;
	else
		var_336_object->GetProperty("armor", var_325_int);
	string var_340_string; int var_341_int;
	var_315_int = var_341_int;
	func_1064(var_340_string, var_341_int);
	string var_326_string = "armor_" + var_340_string;
	bool var_344_bool; object var_345_object; string var_346_string;
	var_313_object = var_345_object;
	func_1080(var_344_bool, var_345_object, var_346_string);
	if(!var_344_bool) //@nz
		var_327_int = 0;
	else
		var_313_object->GetProperty(var_346_string, var_327_int);

	float var_348_float;
	func_1314(var_348_float, ((var_325_int + var_327_int) / 100.0), (float)1);
	float var_328_float;
	var_348_float = var_328_float;
	float var_329_float;
	var_313_object->GetProperty("health", var_329_float);
	float var_358_float;
	func_1321(var_358_float, (var_329_float - (var_314_float * (1 - var_328_float))), (float)0, (float)1);
	var_313_object->SetProperty("health", var_358_float);
	float var_330_float = var_312_float;
	
}


void func_836(cvector var_0_cvector)
{
	@Face(var_0_cvector);
	@PlayAnimation("all", "bjump");
	cvector var_259_cvector;
	var_0_cvector->GetPFPosition(var_259_cvector); //@t
	cvector var_260_cvector;
	@GetPFPosition(var_260_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	@SetSpeed([0.0, 0.0, 0.0]);
}


void func_1221(object var_14_object, int var_15_int)
{
	object var_27_object; object var_28_object; cvector var_29_cvector; float var_30_float; string var_36_string;
	bool var_37_bool = false;
	if(var_15_int != 4) {
		if(var_15_int != 5)
			var_37_bool = true;
	}
	if(var_37_bool != 0) {
		@GetScene(var_27_object);
		@GetPosition(var_29_cvector);
		@GetEyesHeight(var_30_float);
		var_42_float = GetByIndex(var_29_cvector, 1);
		SetByIndex(var_29_cvector, 1) = (var_42_float + (var_30_float / 2));
		@AddActorByType(var_28_object, "scripted", var_27_object, var_29_cvector, [0.0, 0.0, 1.0], "blood.xml");
		var_28_object = null;
		var_27_object = null;
	}
	if(var_14_object == null)
		return 20;
	int var_31_int;
	@GetSecondaryAnimationType(var_31_int);
	if(var_31_int < 0)
		return 20;
	cvector var_32_cvector;
	var_14_object->GetPosition(var_32_cvector);
	cvector var_33_cvector;
	@GetPosition(var_33_cvector);
	cvector var_34_cvector;
	@GetDirection(var_34_cvector);
	cvector var_35_cvector = var_33_cvector - var_32_cvector;
	var_51_float = GetByIndex(var_35_cvector, 0);
	var_52_float = GetByIndex(var_34_cvector, 0);
	var_54_float = GetByIndex(var_35_cvector, 2);
	var_55_float = GetByIndex(var_34_cvector, 2);
	if(((var_51_float * var_52_float) + (var_54_float * var_55_float)) >= 0)
		var_36_string = "fhit";
	else
		var_36_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_36_string + "1"), (var_36_string + "2"), -10);
	
}


// @pe
void func_1492(object var_18_object)
{
	var_19_bool = GlobalVars[0];
	if(var_19_bool != 0) {
		@WorkWithCorpse(var_18_object);
		return 0;
	}
}


void func_855(cvector var_0_cvector, bool var_218_bool)
{
	bool var_220_bool;
	var_223_bool = IsFuncExist(var_0_cvector, "IsAttacking", 1);
	if(var_223_bool != 0) {
		var_0_cvector->IsAttacking(var_220_bool); //@t
		var_220_bool = var_218_bool;
	}
	var_218_bool = false;
}


void func_1367(string var_50_string, int var_51_int)
{
	string var_53_string = "idle";
	if(var_51_int != 0)
		var_53_string += var_51_int;
	var_53_string = var_50_string;
}


void func_1499(bool var_14_bool, object var_15_object, object var_16_object)
{
	bool var_21_bool; object var_22_object;
	func_1080(var_21_bool, var_22_object, "class");
	if(!var_21_bool) { //@nz
		var_14_bool = false;
		return 4;
	}
	string var_19_string;
	var_22_object->GetProperty("class", var_19_string);
	if(var_19_string != "guard") {
		var_14_bool = false;
		return 4;
	}
	bool var_20_bool;
	@CanSee(var_20_bool, var_15_object);
	bool var_34_bool = true;
	if(var_20_bool != 1) {
		float var_36_float; object var_37_object;
		var_15_object = var_37_object;
		func_1072(var_36_float, var_37_object);
		var_45_bool = var_36_float <= 1000000.0;
		if(var_45_bool != 1)
			var_34_bool = false;
	}
	if(var_34_bool != 0) {
		var_14_bool = true;
		return 4;
	}
	var_14_bool = false;
}


void func_1374(int var_44_int)
{
	int var_47_int; bool var_48_bool;
	var_47_int = 0;
	
	for(;;) {
		string var_50_string; int var_51_int;
		var_47_int = var_51_int;
		func_1367(var_50_string, var_51_int);
		@HasAnimation(var_48_bool, "all", var_50_string);
		if(!var_48_bool) //@nz
			break;
		var_47_int += 1;
	}
	var_47_int = var_44_int;
}


void func_866(bool var_2_bool, object var_4_object)
{
	int var_283_int;
	if(!var_2_bool) //@nz
		return 4;
	if(var_4_object != 0) {
		if((var_4_object + -1) > 0)
			return 4;
	}
	float var_282_float;
	@rand(var_282_float);
	float var_289_float;
	func_904(var_289_float);
	if(var_282_float < var_289_float) {
		@irand(var_283_int, var_2_bool);
		@Speak("attack" + (var_283_int + 1));
		int var_294_int;
		func_902(var_294_int);
		var_4_object = var_294_int;
	}
}


void func_739(bool var_384_bool, float var_385_float)
{
	float var_388_float; bool var_389_bool;
	@rand(var_388_float);
	if(var_388_float < var_385_float) {

		for(;;) {
			@IsAnimationPlaying(var_389_bool);
			if(!var_389_bool) { //@nz
			} else {
				bool var_392_bool;
				func_803(var_389_bool, var_392_bool);
				if(var_392_bool != 0) {
					var_384_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_384_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
}


void func_620(cvector var_0_cvector, float var_298_float, int var_299_int)
{
	object var_303_object; float var_304_float; float var_305_float;
	@GetVictim((var_298_float * 0.9), var_303_object);
	@ReportAttack(var_0_cvector);
	if(var_303_object == var_0_cvector) {
		float var_309_float; object var_310_object; int var_311_int;
		var_303_object = var_310_object;
		var_299_int = var_311_int;
		func_409(var_311_int);
		var_309_float = var_304_float;
		float var_312_float; object var_313_object; float var_314_float; int var_315_int;
		var_303_object = var_313_object;
		int var_316_int; object var_317_object; int var_318_int;
		var_303_object = var_317_object;
		var_299_int = var_318_int;
		func_412(var_318_int);
		var_316_int = var_315_int;
		func_1092(var_312_float, var_313_object, var_314_float, var_315_int);
		var_312_float = var_305_float;
		int var_365_int;
		func_898(var_365_int);
		@ReportHit(var_0_cvector, var_365_int, var_305_float, var_314_float);
		object var_366_object; float var_367_float;
		var_303_object = var_366_object;
		var_305_float = var_367_float;
		func_900();
	}
}
EMIT "Stack[-3] = 0";


void func_1391(void)
{
	@StopAnimation();
}


void func_1394(void)
{
	int var_44_int;
	func_1374(var_44_int);
	int var_42_int;
	var_44_int = var_42_int;
	if(!var_42_int) { //@nz
	}
	int var_43_int;
	@irand(var_43_int, var_42_int);
	string var_59_string; int var_60_int;
	var_43_int = var_60_int;
	func_1367(var_59_string, var_60_int);
	@PlayAnimation("all", var_59_string);
	@WaitForAnimEnd();
}


// @pe
void func_373(string var_35_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_35_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_35_string);
	@RemoveEnvelope();
}


void func_248(void)
{
	@StopGroup0();
	@Stop();
}


void func_763(cvector var_0_cvector, bool var_226_bool, float var_227_float)
{
	bool var_233_bool; cvector var_234_cvector; cvector var_235_cvector; cvector var_236_cvector; float var_237_float;
	
	for(;;) {
		@IsAnimationPlaying(var_233_bool);
		if(!var_233_bool) //@nz
			break;
		bool var_239_bool;
		func_803(var_237_float, var_239_bool);
		if(var_239_bool != 0) {
			var_226_bool = true;
			return 10;
		}
		bool var_264_bool;
		func_1197(var_264_bool, var_0_cvector);
		if(!var_264_bool) { //@nz
			var_226_bool = false;
			return 10;
		}
		var_0_cvector->GetPFPosition(var_234_cvector); //@t
		@GetPFPosition(var_235_cvector);
		var_236_cvector = var_234_cvector - var_235_cvector;
		var_237_float = var_236_cvector | var_236_cvector;
		if(var_237_float < (var_227_float * var_227_float)) {
			bool var_269_bool; float var_270_float;
			var_227_float = var_270_float;
			func_659(var_236_cvector, var_237_float, var_269_bool, var_270_float);
			var_226_bool = true;
			return 10;
		}
		@sync();
	}
	var_226_bool = false;
}


// @pe
void func_253(object var_12_object)
{
	object var_13_object;
	var_12_object = var_13_object;
	func_286(var_13_object);
	object var_63_object;
	var_12_object = var_63_object;
	func_1536();
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


