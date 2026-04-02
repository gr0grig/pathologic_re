// @GLOBALS: 0:bool:

task task_0
{
	void OnUse(object actor, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object)
	{
		object var_9_object;
		var_5_object = var_9_object;
		func_1274(var_9_object);
		int var_7_int;
		int var_8_int = var_7_int;
		if(var_7_int > 0) {
			object var_12_object;
			var_5_object = var_12_object;
			func_1277();
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object)
	{
		func_1335();
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
	}

	// @pe
	void OnDeath(object actor, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object)
	{
	}

}


maintask task_1
{
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object)
	{
		@SensePlayerOnly(true);
		func_1289();
		func_163();
	
		for(;;) {
			var_2_bool = false;
			func_376(var_3_bool, var_4_object);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object)
	{
		object var_9_object;
		var_5_object = var_9_object;
		func_1274(var_9_object);
		int var_7_int;
		int var_8_int = var_7_int;
		if(var_7_int > 0) {
			if(var_7_int > 1)
				func_311(var_7_int);
			object var_15_object;
			var_5_object = var_15_object;
			func_1277();
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object)
	{
		object var_9_object;
		var_5_object = var_9_object;
		func_1264(var_9_object);
		int var_7_int;
		int var_8_int = var_7_int;
		if(var_7_int > 0) {
			if(var_7_int > 1)
				func_311(var_7_int);
			object var_15_object;
			var_5_object = var_15_object;
			func_1267();
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object)
	{
		int var_8_int;
		object var_10_object;
		var_5_bool = var_10_object;
		object var_11_object;
		var_6_object = var_11_object;
		bool var_9_bool;
		func_1303(var_9_bool, var_10_object, var_11_object);
		if(var_9_bool != 0) {
			int var_27_int; object var_28_object;
			var_5_bool = var_28_object;
			func_1269(var_28_object);
			var_27_int = var_8_int;
			if(var_8_int > 0) {
				if(var_8_int > 1)
					func_311(var_8_int);
				object var_34_object;
				var_5_bool = var_34_object;
				func_1272();
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object)
	{
		object var_9_object;
		var_5_object = var_9_object;
		func_1279(var_9_object);
		int var_7_int;
		int var_8_int = var_7_int;
		if(var_7_int > 0) {
			if(var_7_int > 1)
				func_311(var_7_int);
			object var_15_object;
			var_5_object = var_15_object;
			func_1282();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object)
	{
		string var_10_string;
		var_6_object = var_10_string;
		object var_11_object;
		var_5_bool = var_11_object;
		func_1284(var_11_object);
		int var_8_int;
		int var_9_int = var_8_int;
		if(var_8_int > 0) {
			if(var_8_int > 1)
				func_311(var_8_int);
			string var_17_string; object var_18_object;
			var_6_object = var_17_string;
			var_5_bool = var_18_object;
			func_1287();
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object)
	{
		object var_6_object;
		func_336(var_6_object, var_6_object);
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object)
	{
		object var_6_object;
		func_336(var_6_object, var_6_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, int var_3_int, bool var_4_bool, object var_5_object)
	{
		if(var_5_object != 110) {
		}
		var_2_bool = false;
		@KillTimer(110);
		@ResetAAS();
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object)
	{
		func_311(var_4_object);
		func_1335();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object)
	{
		func_311(var_5_object);
		object var_7_object;
		var_5_object = var_7_object;
		func_1215();
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object)
	{
		@RequestClearPath(var_5_object);
	}

	void OnActorStuck(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object)
	{
		@Stop();
	}

}


task task_2
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object)
	{
		object var_9_object;
		var_5_object = var_9_object;
		func_1274(var_9_object);
		int var_7_int;
		int var_8_int = var_7_int;
		if(var_7_int > 0) {
			if(var_7_int > 1)
				func_640();
			object var_14_object;
			var_5_object = var_14_object;
			func_1277();
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object)
	{
		object var_9_object;
		var_5_object = var_9_object;
		func_1264(var_9_object);
		int var_7_int;
		int var_8_int = var_7_int;
		if(var_7_int > 0) {
			if(var_7_int > 1)
				func_640();
			object var_14_object;
			var_5_object = var_14_object;
			func_1267();
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object)
	{
		int var_8_int;
		object var_10_object;
		var_5_bool = var_10_object;
		object var_11_object;
		var_6_object = var_11_object;
		bool var_9_bool;
		func_1303(var_9_bool, var_10_object, var_11_object);
		if(var_9_bool != 0) {
			int var_27_int; object var_28_object;
			var_5_bool = var_28_object;
			func_1269(var_28_object);
			var_27_int = var_8_int;
			if(var_8_int > 0) {
				if(var_8_int > 1)
					func_640();
				object var_33_object;
				var_5_bool = var_33_object;
				func_1272();
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object)
	{
		object var_9_object;
		var_5_object = var_9_object;
		func_1279(var_9_object);
		int var_7_int;
		int var_8_int = var_7_int;
		if(var_7_int > 0) {
			if(var_7_int > 1)
				func_640();
			object var_14_object;
			var_5_object = var_14_object;
			func_1282();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object)
	{
		string var_10_string;
		var_6_object = var_10_string;
		object var_11_object;
		var_5_bool = var_11_object;
		func_1284(var_11_object);
		int var_8_int;
		int var_9_int = var_8_int;
		if(var_8_int > 0) {
			if(var_8_int > 1)
				func_640();
			string var_16_string; object var_17_object;
			var_6_object = var_16_string;
			var_5_bool = var_17_object;
			func_1287();
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object)
	{
		func_640();
		func_1335();
	}

}


task task_3
{
	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object)
	{
		object var_9_object;
		var_5_object = var_9_object;
		func_1298(var_9_object);
		int var_7_int;
		int var_8_int = var_7_int;
		if(var_7_int > 0) {
			if(var_7_int > 1)
				func_732();
			object var_14_object;
			var_5_object = var_14_object;
			func_1301();
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object)
	{
		func_732();
		func_1335();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object)
	{
		func_732();
		object var_6_object;
		var_5_object = var_6_object;
		func_1215();
	}

}


task task_4
{
	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object)
	{
		object var_9_object;
		var_5_object = var_9_object;
		func_1298(var_9_object);
		int var_7_int;
		int var_8_int = var_7_int;
		if(var_7_int > 0) {
			if(var_7_int > 1)
				func_910(var_7_int);
			object var_15_object;
			var_5_object = var_15_object;
			func_1301();
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object)
	{
		func_910(var_4_object);
		func_1335();
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int)
	{
		if(var_5_int != 0)
			return 0;
		bool var_8_bool;
		func_926(var_8_bool, var_1_bool);
		if(!var_8_bool) //@nz
			var_0_bool = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object)
	{
		@RequestClearPath(var_5_object);
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object)
	{
		func_910(var_5_object);
		object var_7_object;
		var_5_object = var_7_object;
		func_1215();
	}

}


void OnPropertyChange(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, string var_6_string)
{
	float var_8_float;
	if(var_6_string == "health") {
		@GetProperty("health", var_8_float);
		if(var_8_float <= 0)
			@SignalDeath(var_5_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object)
{
	object var_6_object;
	var_5_object = var_6_object;
	func_1194(var_6_object);
}


// @pe
void OnHit(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, float var_7_float, float var_8_float)
{
	object var_9_object;
	var_5_object = var_9_object;
	int var_10_int;
	var_6_int = var_10_int;
	float var_11_float;
	var_7_float = var_11_float;
	func_1105(var_10_int, var_11_float);
}


void func_640(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_0(object var_7_object)
{
	object var_8_object;
	var_7_object = var_8_object;
	func_33(var_8_object);
	object var_58_object;
	var_7_object = var_58_object;
	func_1326();
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1282(void)
{
}


// @pe
void func_1284(int var_9_int)
{
	var_9_int = 0;
}


// @pe
void func_773(bool var_64_bool, object var_65_object)
{
	bool var_68_bool; object var_69_object;
	func_786(var_64_bool, var_69_object, var_68_bool, var_69_object, (float)150, (float)3000, false, true);
	var_68_bool = var_64_bool;
}


// @pe
void func_645(object var_56_object)
{
	object var_58_object;
	var_56_object = var_58_object;
	bool var_57_bool;
	func_1293(var_57_bool, var_58_object);
	if(var_57_bool != 0) {
		object var_61_object;
		var_56_object = var_61_object;
		func_683(var_61_object);
	}
}


// @pe
void func_1287(void)
{
}


void func_1289(void)
{
	var_6_bool = GlobalVars[0];
	GlobalVars[0] = false;
}


void func_1293(bool var_57_bool, object var_58_object)
{
	bool var_60_bool;
	@IsPlayerActor(var_58_object, var_60_bool);
	var_60_bool = var_57_bool;
}


void func_910(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_784(string var_108_string)
{
	var_108_string = "zwalk";
}


void func_1040(bool var_25_bool, object var_26_object)
{
	bool var_28_bool;
	var_26_object->IsDead(var_28_bool);
	var_28_bool = var_25_bool;
}


// @pe
void func_1298(int var_8_int)
{
	var_8_int = 0;
}


void func_786(bool var_0_bool, bool var_1_bool, bool var_68_bool, object var_69_object, float var_70_float, float var_71_float, bool var_72_bool, bool var_73_bool)
{
	bool var_82_bool; object var_84_object; cvector var_85_cvector; cvector var_86_cvector; float var_88_float; object var_89_object;
	var_0_bool = false;
	var_1_bool = var_69_object;
	bool var_83_bool;
	var_73_bool = var_83_bool;
	
	for(;;) {
		bool var_90_bool; object var_91_object;
		var_69_object = var_91_object;
		func_926(var_90_bool, var_91_object);
		if(!var_90_bool) { //@nz
			var_68_bool = false;
			return 16;
		}
		var_69_object->GetPosition(var_85_cvector);
		@GetPosition(var_86_cvector);
		var_88_float = (var_85_cvector - var_86_cvector) | (var_85_cvector - var_86_cvector);
		bool var_95_bool = false;
		if(var_71_float > 0) {
			if(var_88_float > (var_71_float * var_71_float))
				var_95_bool = true;
		}
		if(var_95_bool != 0) {
			@Stop();
			var_68_bool = false;
			return 16;
		}
		if(var_88_float > (var_70_float * var_70_float)) {
			var_69_object->GetPFPosition(var_85_cvector);
			@FindPathTo(var_89_object, var_85_cvector);
			if(var_89_object != null) {
				var_89_object = var_84_object;
				var_89_object = null;
			}
			if(var_84_object != null) {
				if(var_83_bool == 0) goto Label_839;
				var_83_bool = false;
				@RotatePath(var_84_object, var_82_bool);
				if(!var_82_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_108_string;
						func_784(var_108_string);
						string var_109_string;
						func_933(var_109_string);
						@FollowPath(var_84_object, var_72_bool, var_82_bool, var_108_string, var_109_string);
						if(!var_82_bool) { //@nz
							if(var_0_bool == 0) goto Label_858;
							var_84_object = null;
						}
					EMIT "GOTO 0x35b";

					Label_858:
						} else {
					var_84_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_82_bool);
					if(!var_82_bool) { //@nz
						if(var_0_bool != 0) {
							var_84_object = null;
							goto Label_886;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_886;
		}
			var_89_object = null;
			goto Label_884;

		Label_884:
			var_84_object = null;

		}
	Label_886:
		for(;;) {
			var_68_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_1172(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


// @pe
void func_1301(void)
{
}


void func_1045(bool var_14_bool, object var_15_object)
{
	if(var_15_object == null) {
		var_14_bool = false;
		return 4;
	}
	bool var_21_bool = false;
	var_24_bool = IsFuncExist(var_15_object, "IsDead", 1);
	if(var_24_bool != 0) {
		bool var_25_bool; object var_26_object;
		var_15_object = var_26_object;
		func_1040(var_25_bool, var_26_object);
		if(var_25_bool != 0)
			var_21_bool = true;
	}
	if(var_21_bool != 0) {
		var_14_bool = false;
		return 4;
	}
	object var_18_object;
	@GetScene(var_18_object);
	if(var_18_object == null) {
		var_14_bool = false;
		return 4;
	}
	object var_19_object;
	var_15_object->GetScene(var_19_object);
	if(var_18_object != var_19_object) {
		var_14_bool = false;
		return 4;
	}
	var_14_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1303(bool var_9_bool, object var_10_object, object var_11_object)
{
	bool var_13_bool;
	@CanSee(var_13_bool, var_10_object);
	bool var_14_bool = true;
	if(var_13_bool != 1) {
		float var_16_float; object var_17_object;
		func_935(var_16_float, var_17_object);
		var_25_bool = var_16_float <= 250000.0;
		if(var_25_bool != 1)
			var_14_bool = false;
	}
	if(var_14_bool != 0) {
		@ReportReputationChange(var_17_object, var_11_object, -0.3);
		var_9_bool = true;
	}
	var_9_bool = false;
}


void func_1177(object var_11_object)
{
	object var_13_object;
	@self(var_13_object);
	var_13_object = var_11_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_926(bool var_8_bool, object var_9_object)
{
	object var_11_object;
	var_9_object = var_11_object;
	bool var_10_bool;
	func_1081(var_10_bool, var_11_object);
	var_10_bool = var_8_bool;
}


// @pe
void func_1183(float var_175_float, float var_176_float, float var_177_float, float var_178_float)
{
	if(var_176_float < var_177_float) {
		var_177_float = var_175_float;
		return 0;
	}
	if(var_176_float > var_178_float) {
		var_178_float = var_175_float;
		return 0;
	}
	var_176_float = var_175_float;
}


void func_33(object var_8_object)
{
	cvector var_19_cvector; cvector var_20_cvector; cvector var_21_cvector; cvector var_22_cvector; string var_23_string; object var_24_object; bool var_25_bool; bool var_26_bool; float var_27_float; cvector var_28_cvector;
	if(var_8_object == null) {
		func_120("fdie");
	} else {
		var_8_object->GetPosition(var_19_cvector);
		@GetPosition(var_20_cvector);
		@GetDirection(var_21_cvector);
		var_22_cvector = var_20_cvector - var_19_cvector;
		var_33_float = GetByIndex(var_22_cvector, 0);
		var_34_float = GetByIndex(var_21_cvector, 0);
		var_36_float = GetByIndex(var_22_cvector, 2);
		var_37_float = GetByIndex(var_21_cvector, 2);
		if(((var_33_float * var_34_float) + (var_36_float * var_37_float)) >= 0)
			var_23_string = "fdie";
		else
			var_23_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_8_object = var_24_object;
		var_44_bool = IsFuncExist(var_8_object, "GetScriptProperty", 2);
		if(var_44_bool != 0) {
			var_8_object->HasScriptProperty(var_25_bool, "Owner");
			if(var_25_bool != 0) {
				var_8_object->GetScriptProperty(var_24_object, "Owner");
				if(var_24_object == null)
					var_8_object = var_24_object;
			}
		}
		var_51_bool = IsFuncExist(var_24_object, "@GetEyesHeight", 1);
		if(var_51_bool != 0) {
			var_24_object->GetEyesHeight(var_27_float);
			var_28_cvector = [0.0, 0.0, 0.0];
			var_52_float = GetByIndex(var_28_cvector, 1);
			var_27_float = var_52_float;
			SetByIndex(var_28_cvector, 1) = var_52_float;
			@LookAsync(var_8_object, "head", var_28_cvector);
			var_26_bool = true;
		} else {
			var_26_bool = false;

		}
		@PlayAnimation("all", var_23_string);
		@WaitForAnimEnd();
		if(var_26_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_23_string);
		@RemoveEnvelope();
		var_24_object = null;
	}
	
}


void func_163(void)
{
	bool var_7_bool;
	func_1172(var_7_bool);
	if(!var_7_bool) //@nz
		func_1335();
}


void func_933(string var_109_string)
{
	var_109_string = "run";
}


void func_935(float var_16_float, object var_17_object)
{
	cvector var_21_cvector;
	@GetPosition(var_21_cvector);
	cvector var_22_cvector;
	var_17_object->GetPosition(var_22_cvector);
	var_16_float = (var_22_cvector - var_21_cvector) | (var_22_cvector - var_21_cvector);
}


// @pe
void func_1194(object var_6_object)
{
	object var_7_object;
	var_6_object = var_7_object;
	TaskCall(0);
	func_0(var_7_object);
	TaskReturn();
}


void func_683(object var_61_object)
{
	bool var_63_bool;
	
	for(;;) {
		bool var_64_bool; object var_65_object;
		TaskCall(4);
		func_773(var_64_bool, var_65_object);
		TaskReturn();
		if(var_66_bool != 0) {
			@Face(var_65_object);
			@WaitForAnimEnd(var_63_bool);
			if(!var_63_bool) { //@nz
			} else {
					@PlayAnimation("all", "dattack_begin");
					@WaitForAnimEnd(var_63_bool);
					var_122_bool = !var_63_bool; //@nz
					if(var_122_bool == 0) goto Label_707;
			}
		}
	Label_731:
		for(;;) {
			return 2;

		}

	Label_707:
		float var_123_float; object var_124_object;
		var_61_object = var_124_object;
		func_935(var_123_float, var_124_object);
		if(var_123_float <= 90000.0) {
			float var_133_float; object var_134_object;
			var_61_object = var_134_object;
			func_977(var_133_float, var_134_object, 0.2);
		}
		@PlayAnimation("all", "dattack_end");
		@WaitForAnimEnd(var_63_bool);
		if(!var_63_bool) { //@nz
			goto Label_731;
		}
		@StopAsync();
	}
}


// @pe
void func_1326(void)
{
	var_59_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


void func_943(bool var_32_bool, object var_33_object, string var_34_string)
{
	var_39_bool = IsFuncExist(var_33_object, "HasProperty", 2);
	if(!var_39_bool) { //@nz
		var_32_bool = false;
		return 2;
	}
	bool var_36_bool;
	var_33_object->HasProperty(var_34_string, var_36_bool);
	var_36_bool = var_32_bool;
}


void func_311(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_440(var_4_bool, var_5_object);
}


void func_1335(void)
{
	object var_11_object;
	func_1177(var_11_object);
	@RemoveActor(var_11_object);
}


void func_440(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_1081(bool var_10_bool, object var_11_object)
{
	object var_15_object;
	var_11_object = var_15_object;
	bool var_14_bool;
	func_1045(var_14_bool, var_15_object);
	if(!var_14_bool) { //@nz
		var_10_bool = false;
		return 2;
	}
	bool var_32_bool; object var_33_object;
	func_943(var_32_bool, var_33_object, "noaccess");
	if(!var_32_bool) { //@nz
		var_10_bool = true;
		return 2;
	}
	int var_13_int;
	var_33_object->GetProperty("noaccess", var_13_int);
	var_10_bool = var_13_int == 0;
}


void func_571(void)
{
	int var_46_int; int var_47_int; bool var_48_bool; float var_49_float; bool var_50_bool;
	@WaitForAnimEnd();
	bool var_51_bool;
	func_1172(var_51_bool);
	if(!var_51_bool) //@nz
		return 14;
	int var_53_int;
	func_1236(var_53_int);
	int var_44_int;
	var_53_int = var_44_int;
	int var_45_int = 0;
	
	for(;;) {
		bool var_66_bool = false;
		if(var_45_int < 5) {
			bool var_69_bool;
			func_1172(var_69_bool);
			if(var_69_bool != 0)
				var_66_bool = true;
		}
		if(var_66_bool != 0) {
			@irand(var_46_int, 3);
			if(var_46_int == 0) {
				if(var_44_int == 0) goto Label_618;
				@irand(var_47_int, var_44_int);
				string var_75_string; int var_76_int;
				var_47_int = var_76_int;
				func_1229(var_75_string, var_76_int);
				@PlayAnimation("all", var_75_string);
				@WaitForAnimEnd(var_48_bool);
				if(!var_48_bool) { //@nz
				} else {
			} else {
			if(var_46_int == 1) {
				@rand(var_49_float, 4);
				@Sleep((var_49_float + 1), var_50_bool);
				if(!var_50_bool) { //@nz
					goto Label_639;
				}
			} else if(var_45_int != 0) {
				goto Label_639;
			}
			}
				var_45_int += 1;
			}
		}
	Label_639:
		return 14;

	}
	
}


void func_955(bool var_163_bool, object var_164_object, string var_165_string, float var_166_float, float var_167_float, float var_168_float)
{
	object var_172_object;
	var_164_object = var_172_object;
	string var_173_string;
	var_165_string = var_173_string;
	bool var_171_bool;
	func_943(var_171_bool, var_172_object, var_173_string);
	if(!var_171_bool) //@nz
		var_163_bool = false;
	float var_170_float;
	var_164_object->GetProperty(var_165_string, var_170_float);
	float var_175_float; float var_177_float; float var_178_float;
	var_167_float = var_177_float;
	var_168_float = var_178_float;
	func_1183(var_175_float, (var_170_float + var_166_float), var_177_float, var_178_float);
	var_164_object->SetProperty(var_165_string, var_175_float);
	var_163_bool = true;
}


void func_447(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	@Stop();
	@StopGroup0();
}


void func_319(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_447(var_9_bool, var_10_int);
}


void func_454(bool var_35_bool)
{
	var_35_bool = false;
}


void func_1229(string var_59_string, int var_60_int)
{
	string var_62_string = "idle";
	if(var_60_int != 0)
		var_62_string += var_60_int;
	var_62_string = var_59_string;
}


void func_336(bool var_2_bool, object var_6_object)
{
	bool var_11_bool; object var_12_object;
	func_1081(var_11_bool, var_12_object);
	if(!var_11_bool) //@nz
		return 4;
	if(var_2_bool != 0)
		return 4;
	bool var_9_bool;
	@IsPlayerActor(var_12_object, var_9_bool);
	if(!var_9_bool) //@nz
		return 4;
	int var_48_int; object var_49_object;
	var_6_object = var_49_object;
	func_1253(var_49_object);
	int var_10_int;
	var_48_int = var_10_int;
	if(var_10_int > 0) {
		if(var_10_int > 1)
			func_319(var_10_int);
		object var_55_object;
		var_6_object = var_55_object;
		func_1256(var_55_object);
		var_2_bool = true;
		@SetTimer(110, 10.0);
	}
}


void func_977(float var_133_float, object var_134_object, float var_135_float)
{
	int var_139_int; float var_140_float; float var_141_float;
	object var_143_object;
	var_134_object = var_143_object;
	bool var_142_bool;
	func_943(var_142_bool, var_143_object, "disease");
	if(!var_142_bool) { //@nz
		var_133_float = 0;
		return 6;
	}
	bool var_146_bool; object var_147_object;
	func_943(var_146_bool, var_147_object, "armor_disease");
	if(var_146_bool != 0) {
		var_147_object->GetProperty("armor_disease", var_139_int);
		if(var_139_int < 100) {
			var_135_float *= (1 - (var_139_int / 100.0));
		} else {
					var_133_float = 0;
					return 6;
		}
	}
	bool var_156_bool; object var_157_object;
	var_134_object = var_157_object;
	func_943(var_156_bool, var_157_object, "immunity");
	if(var_156_bool != 0) {
		var_134_object->GetProperty("immunity", var_141_float);
		if(var_141_float < var_135_float) {
			var_134_object->SetProperty("immunity", 0);
			var_140_float = var_135_float - var_141_float;
		} else {
			var_134_object->SetProperty("immunity", (var_141_float - var_135_float));
			var_135_float = var_133_float;
			return 6;

		}
	}
	bool var_163_bool; object var_164_object; float var_166_float;
	var_134_object = var_164_object;
	var_140_float = var_166_float;
	func_955(var_163_bool, var_164_object, "disease", var_166_float, (float)0, (float)1);
	var_135_float = var_133_float;
	
}


void func_1105(object var_9_object, int var_10_int)
{
	object var_22_object; object var_23_object; cvector var_24_cvector; float var_25_float; string var_31_string;
	bool var_32_bool = false;
	if(var_10_int != 4) {
		if(var_10_int != 5)
			var_32_bool = true;
	}
	if(var_32_bool != 0) {
		@GetScene(var_22_object);
		@GetPosition(var_24_cvector);
		@GetEyesHeight(var_25_float);
		var_37_float = GetByIndex(var_24_cvector, 1);
		SetByIndex(var_24_cvector, 1) = (var_37_float + (var_25_float / 2));
		@AddActorByType(var_23_object, "scripted", var_22_object, var_24_cvector, [0.0, 0.0, 1.0], "blood.xml");
		var_23_object = null;
		var_22_object = null;
	}
	if(var_9_object == null)
		return 20;
	int var_26_int;
	@GetSecondaryAnimationType(var_26_int);
	if(var_26_int < 0)
		return 20;
	cvector var_27_cvector;
	var_9_object->GetPosition(var_27_cvector);
	cvector var_28_cvector;
	@GetPosition(var_28_cvector);
	cvector var_29_cvector;
	@GetDirection(var_29_cvector);
	cvector var_30_cvector = var_28_cvector - var_27_cvector;
	var_46_float = GetByIndex(var_30_cvector, 0);
	var_47_float = GetByIndex(var_29_cvector, 0);
	var_49_float = GetByIndex(var_30_cvector, 2);
	var_50_float = GetByIndex(var_29_cvector, 2);
	if(((var_46_float * var_47_float) + (var_49_float * var_50_float)) >= 0)
		var_31_string = "fhit";
	else
		var_31_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_31_string + "1"), (var_31_string + "2"), -10);
	
}


void func_1236(int var_53_int)
{
	int var_56_int; bool var_57_bool;
	var_56_int = 0;
	
	for(;;) {
		string var_59_string; int var_60_int;
		var_56_int = var_60_int;
		func_1229(var_59_string, var_60_int);
		@HasAnimation(var_57_bool, "all", var_59_string);
		if(!var_57_bool) //@nz
			break;
		var_56_int += 1;
	}
	var_56_int = var_53_int;
}


void func_732(void)
{
	@StopAsync();
	@StopAnimation();
}


// @pe
void func_120(string var_30_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_30_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_30_string);
	@RemoveEnvelope();
}


void func_376(bool var_0_bool, bool var_1_bool)
{
	float var_21_float; cvector var_22_cvector; cvector var_23_cvector; float var_24_float; bool var_25_bool; object var_26_object; bool var_27_bool;
	@rand(var_21_float, 0.5);
	@Sleep(var_21_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_388:
				@GetPosition(var_23_cvector);
				@GetCameraFarDistance(var_24_float);
				@GetRandomPFPointInCircle(var_22_cvector, var_23_cvector, (var_24_float * 2.5), var_25_bool);
				if(var_25_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_388;
			}
				var_1_bool = false;
		}
		}
		goto Label_405;

	Label_405:
		@FindShiftedPathTo(var_26_object, var_22_cvector);
		if(var_26_object != null) {
			@RotatePath(var_26_object, var_27_bool);
			if(var_27_bool != 0) {
				bool var_35_bool;
				func_454(var_35_bool);
				@FollowPath(var_26_object, var_35_bool, var_27_bool);
				var_26_object = null;
				if(var_27_bool != 0) {
					TaskCall(2);
					func_571();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_26_object = null;
	}
	
}


// @pe
void func_1253(int var_48_int)
{
	var_48_int = 2;
}


// @pe
void func_1256(object var_55_object)
{
	object var_56_object;
	var_55_object = var_56_object;
	TaskCall(3);
	func_645(var_56_object);
	TaskReturn();
}


// @pe
void func_1264(int var_8_int)
{
	var_8_int = 0;
}


// @pe
void func_1267(void)
{
}


// @pe
void func_1269(int var_27_int)
{
	var_27_int = 0;
}


// @pe
void func_1272(void)
{
}


// @pe
void func_1274(int var_8_int)
{
	var_8_int = 0;
}


// @pe
void func_1277(void)
{
}


// @pe
void func_1279(int var_8_int)
{
	var_8_int = 0;
}


