// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnUse(object actor, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
		object var_14_object;
		var_10_object = var_14_object;
		func_1684(var_14_object);
		int var_12_int;
		int var_13_int = var_12_int;
		if(var_12_int > 0) {
			object var_17_object;
			var_10_object = var_17_object;
			func_1687(var_17_object);
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, int var_7_int, bool var_8_bool, object var_9_object)
	{
		func_1693();
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
	}

	// @pe
	void OnDeath(object actor, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
	}

}


maintask task_1
{
	void init(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, int var_7_int, bool var_8_bool, object var_9_object)
	{
		int var_12_int; int var_13_int;
		var_0_bool = false;
		@SensePlayerOnly(true);
		func_1935();
		func_182();
	
		for(;;) {
			@irand(var_12_int, 2);
			if(var_12_int == 0) {
				var_0_bool = true;
				func_1954();
				var_0_bool = false;
				@ResetAAS();
			} else {
			@irand(var_13_int, 4);
			@Sleep(var_13_int + 1);
			}
		}
	
	}
	EMIT "Return(); Pop(4)";

	void OnUse(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
		object var_14_object;
		var_10_object = var_14_object;
		func_1684(var_14_object);
		int var_12_int;
		int var_13_int = var_12_int;
		if(var_12_int > 0) {
			if(var_12_int > 1)
				func_336(var_12_int);
			object var_21_object;
			var_10_object = var_21_object;
			func_1687(var_21_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
		object var_14_object;
		var_10_object = var_14_object;
		int var_13_int;
		func_1653(var_13_int, var_14_object);
		int var_12_int;
		var_13_int = var_12_int;
		if(var_12_int > 0) {
			if(var_12_int > 1)
				func_336(var_12_int);
			object var_55_object;
			var_10_object = var_55_object;
			func_1663(var_55_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		int var_13_int;
		object var_15_object;
		var_10_bool = var_15_object;
		object var_16_object;
		var_11_object = var_16_object;
		bool var_14_bool;
		func_1986(var_14_bool, var_15_object, var_16_object);
		if(var_14_bool != 0) {
			int var_68_int; object var_69_object;
			var_10_bool = var_69_object;
			func_1671(var_68_int, var_69_object);
			var_68_int = var_13_int;
			if(var_13_int > 0) {
				if(var_13_int > 1)
					func_336(var_13_int);
				object var_106_object;
				var_10_bool = var_106_object;
				func_1678(var_106_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
		object var_14_object;
		var_10_object = var_14_object;
		int var_13_int;
		func_1694(var_13_int, var_14_object);
		int var_12_int;
		var_13_int = var_12_int;
		if(var_12_int > 0) {
			if(var_12_int > 1)
				func_336(var_12_int);
			object var_60_object;
			var_10_object = var_60_object;
			func_1707(var_60_object);
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, object var_2_object, string var_3_string, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		string var_15_string;
		var_11_object = var_15_string;
		object var_16_object;
		var_10_bool = var_16_object;
		func_1713(var_16_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_336(var_13_int);
			string var_23_string; object var_24_object;
			var_11_object = var_23_string;
			var_10_bool = var_24_object;
			func_1716();
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
		if(var_0_bool != 0)
			return 0;
		object var_12_object;
		func_358(var_12_object, var_12_object);
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
		if(var_0_bool != 0)
			return 0;
		object var_12_object;
		func_358(var_12_object, var_12_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, int var_2_int, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
		if(var_10_object != 110) {
		}
		var_1_bool = false;
		@KillTimer(110);
		@ResetAAS();
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, int var_7_int, bool var_8_bool, object var_9_object)
	{
		func_336(var_9_object);
		func_1693();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
		func_336(var_10_object);
		object var_13_object;
		var_10_object = var_13_object;
		func_1622();
	}

}


task task_2
{
	void OnUse(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
		object var_14_object;
		var_10_object = var_14_object;
		func_1684(var_14_object);
		int var_12_int;
		int var_13_int = var_12_int;
		if(var_12_int > 0) {
			if(var_12_int > 1)
				func_555();
			object var_21_object;
			var_10_object = var_21_object;
			func_1687(var_21_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
		object var_14_object;
		var_10_object = var_14_object;
		int var_13_int;
		func_1653(var_13_int, var_14_object);
		int var_12_int;
		var_13_int = var_12_int;
		if(var_12_int > 0) {
			if(var_12_int > 1)
				func_555();
			object var_55_object;
			var_10_object = var_55_object;
			func_1663(var_55_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		int var_13_int;
		object var_15_object;
		var_10_bool = var_15_object;
		object var_16_object;
		var_11_object = var_16_object;
		bool var_14_bool;
		func_1986(var_14_bool, var_15_object, var_16_object);
		if(var_14_bool != 0) {
			int var_68_int; object var_69_object;
			var_10_bool = var_69_object;
			func_1671(var_68_int, var_69_object);
			var_68_int = var_13_int;
			if(var_13_int > 0) {
				if(var_13_int > 1)
					func_555();
				object var_106_object;
				var_10_bool = var_106_object;
				func_1678(var_106_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
		object var_14_object;
		var_10_object = var_14_object;
		int var_13_int;
		func_1694(var_13_int, var_14_object);
		int var_12_int;
		var_13_int = var_12_int;
		if(var_12_int > 0) {
			if(var_12_int > 1)
				func_555();
			object var_60_object;
			var_10_object = var_60_object;
			func_1707(var_60_object);
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, string var_4_string, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		string var_15_string;
		var_11_object = var_15_string;
		object var_16_object;
		var_10_bool = var_16_object;
		func_1713(var_16_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_555();
			string var_23_string; object var_24_object;
			var_11_object = var_23_string;
			var_10_bool = var_24_object;
			func_1716();
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
		func_555();
		object var_13_object;
		var_10_object = var_13_object;
		func_1622();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, object var_2_object, int var_3_int, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
		if(var_10_object != 111)
			return 4;
		bool var_17_bool;
		func_1420(var_17_bool, var_0_bool);
		if(!var_17_bool) { //@nz
			func_555();
			return 4;
		}
		cvector var_13_cvector;
		@GetDirection(var_13_cvector);
		cvector var_54_cvector;
		func_1288(var_54_cvector, var_0_bool);
		cvector var_14_cvector;
		var_54_cvector = var_14_cvector;
		float var_60_float; cvector var_61_cvector; cvector var_62_cvector;
		var_13_cvector = var_61_cvector;
		var_14_cvector = var_62_cvector;
		func_1575(var_60_float, var_61_cvector, var_62_cvector);
		if(var_60_float < 0.49999997)
			func_1511(var_0_bool);
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, int var_7_int, bool var_8_bool, object var_9_object)
	{
		func_555();
		func_1693();
	}

}


task task_3
{
}


task task_4
{
	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, int var_7_int, bool var_8_bool, object var_9_object)
	{
		func_1253(var_9_object);
		func_1693();
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, int var_7_int, bool var_8_bool, object var_9_object, int var_10_int)
	{
		if(var_10_int != 0)
			return 0;
		bool var_13_bool;
		func_1269(var_13_bool, var_1_bool);
		if(!var_13_bool) //@nz
			var_0_bool = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, int var_7_int, bool var_8_bool, object var_9_object, object var_10_object)
	{
		@RequestClearPath(var_10_object);
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, int var_7_int, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_1253(var_10_object);
		object var_12_object;
		var_10_object = var_12_object;
		func_1622();
	}

}


void OnPropertyChange(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, int var_7_int, bool var_8_bool, object var_9_object, object var_10_object, string var_11_string)
{
	float var_13_float;
	if(var_11_string == "health") {
		@GetProperty("health", var_13_float);
		if(var_13_float <= 0)
			@SignalDeath(var_10_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, int var_7_int, bool var_8_bool, object var_9_object, object var_10_object)
{
	object var_11_object;
	var_10_object = var_11_object;
	func_1601(var_11_object);
}


// @pe
void OnHit(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, int var_7_int, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, float var_12_float, float var_13_float)
{
	object var_14_object;
	var_10_object = var_14_object;
	int var_15_int;
	var_11_int = var_15_int;
	float var_16_float;
	var_12_float = var_16_float;
	func_1444(var_15_int, var_16_float);
}


// @pe
void func_1280(string var_317_string, int var_318_int)
{
	if(var_318_int == 1)
		var_317_string = "fire";
	var_317_string = "phys";
}


// @pe
void func_0(object var_12_object)
{
	object var_13_object;
	var_12_object = var_13_object;
	func_33(var_13_object);
	object var_63_object;
	var_12_object = var_63_object;
	func_2075();
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1538(float var_325_float, float var_326_float, float var_327_float)
{
	if(var_326_float < var_327_float)
		var_326_float = var_325_float;
	else
		var_327_float = var_325_float;
	
}


void func_1923(int var_54_int, string var_55_string)
{
	int var_57_int;
	@GetInvItemByName(var_57_int, var_55_string);
	var_57_int = var_54_int;
}


// @pe
void func_1671(int var_68_int, object var_69_object)
{
	object var_71_object;
	var_69_object = var_71_object;
	int var_70_int;
	func_1653(var_70_int, var_71_object);
	var_70_int = var_68_int;
}


void func_1288(cvector var_54_cvector, object var_55_object)
{
	cvector var_58_cvector;
	@GetPosition(var_58_cvector);
	cvector var_59_cvector;
	var_55_object->GetPosition(var_59_cvector);
	var_54_cvector = var_59_cvector - var_58_cvector;
}


// @pe
void func_1545(float var_335_float, float var_336_float, float var_337_float, float var_338_float)
{
	if(var_336_float < var_337_float) {
		var_337_float = var_335_float;
		return 0;
	}
	if(var_336_float > var_338_float) {
		var_338_float = var_335_float;
		return 0;
	}
	var_336_float = var_335_float;
}


void func_391(bool var_0_bool, object var_29_object)
{
	var_0_bool = var_29_object;
	bool var_36_bool;
	func_442(var_36_bool);
	cvector var_34_cvector;
	@GetDirection(var_34_cvector);
	cvector var_44_cvector;
	func_1288(var_44_cvector, var_0_bool);
	cvector var_35_cvector;
	var_44_cvector = var_35_cvector;
	float var_50_float; cvector var_51_cvector; cvector var_52_cvector;
	var_34_cvector = var_51_cvector;
	var_35_cvector = var_52_cvector;
	func_1575(var_50_float, var_51_cvector, var_52_cvector);
	if(var_50_float < 0) {
		func_1511(var_0_bool);
		var_36_bool = true;
	} else {
		@Sleep(1.5, var_36_bool);
	}
	if(var_36_bool != 0) {
		func_1511(var_0_bool);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


void func_1928(string var_147_string, int var_148_int)
{
	string var_150_string = "idle";
	if(var_148_int != 0)
		var_150_string += var_148_int;
	var_150_string = var_147_string;
}


void func_1420(bool var_15_bool, object var_16_object)
{
	object var_20_object;
	var_16_object = var_20_object;
	bool var_19_bool;
	func_1384(var_19_bool, var_20_object);
	if(!var_19_bool) { //@nz
		var_15_bool = false;
		return 2;
	}
	bool var_37_bool; object var_38_object;
	func_1303(var_37_bool, var_38_object, "noaccess");
	if(!var_37_bool) { //@nz
		var_15_bool = true;
		return 2;
	}
	int var_18_int;
	var_38_object->GetProperty("noaccess", var_18_int);
	var_15_bool = var_18_int == 0;
}


// @pe
void func_1678(object var_106_object)
{
	object var_107_object;
	var_106_object = var_107_object;
	func_1663(var_107_object);
}


void func_1935(void)
{
	var_15_bool = GlobalVars[1];
	GlobalVars[1] = false;
	func_1748(true);
}


void func_1295(float var_57_float, object var_58_object)
{
	cvector var_62_cvector;
	@GetPosition(var_62_cvector);
	cvector var_63_cvector;
	var_58_object->GetPosition(var_63_cvector);
	var_57_float = (var_63_cvector - var_62_cvector) | (var_63_cvector - var_62_cvector);
}


// @pe
void func_1684(int var_13_int)
{
	var_13_int = 2;
}


// @pe
void func_1556(float var_63_float, cvector var_64_cvector, cvector var_65_cvector)
{
	var_66_float = GetByIndex(var_64_cvector, 0);
	var_67_float = GetByIndex(var_65_cvector, 0);
	var_69_float = GetByIndex(var_64_cvector, 2);
	var_70_float = GetByIndex(var_65_cvector, 2);
	var_63_float = (var_66_float * var_67_float) + (var_69_float * var_70_float);
}


// @pe
void func_1687(object var_21_object)
{
	object var_22_object;
	var_21_object = var_22_object;
	func_1943(var_22_object);
}


void func_1943(object var_22_object)
{
	bool var_24_bool;
	var_25_bool = GlobalVars[1];
	if(var_25_bool != 0) {
		@IsOverrideActive(var_24_bool);
		if(!var_24_bool) //@nz
			@WorkWithCorpse(var_22_object);
	}
}


void func_1303(bool var_37_bool, object var_38_object, string var_39_string)
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
void func_2075(void)
{
	var_64_bool = GlobalVars[1];
	GlobalVars[1] = true;
	@SetRTEnvelope(50, 40);
}


void func_1052(bool var_0_bool)
{
	@Face(var_0_bool);
	@PlayAnimation("all", "bjump");
	cvector var_236_cvector;
	var_0_bool->GetPFPosition(var_236_cvector); //@t
	cvector var_237_cvector;
	@GetPFPosition(var_237_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	@SetSpeed([0.0, 0.0, 0.0]);
}


void func_1693(void)
{
}


void func_1694(int var_13_int, object var_14_object)
{
	bool var_16_bool;
	@CanSee(var_16_bool, var_14_object);
	if(var_16_bool != 0) {
		int var_18_int; object var_19_object;
		var_14_object = var_19_object;
		func_1653(var_18_int, var_19_object);
		var_18_int = var_13_int;
	}
	var_13_int = 0;
}


// @pe
void func_1565(float var_72_float, cvector var_73_cvector)
{
	var_74_float = GetByIndex(var_73_cvector, 0);
	var_75_float = GetByIndex(var_73_cvector, 0);
	var_77_float = GetByIndex(var_73_cvector, 2);
	var_78_float = GetByIndex(var_73_cvector, 2);
	var_72_float = sqrt((var_74_float * var_75_float) + (var_77_float * var_78_float));
}


void func_33(object var_13_object)
{
	cvector var_24_cvector; cvector var_25_cvector; cvector var_26_cvector; cvector var_27_cvector; string var_28_string; object var_29_object; bool var_30_bool; bool var_31_bool; float var_32_float; cvector var_33_cvector;
	if(var_13_object == null) {
		func_120("fdie");
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


void func_1954(void)
{
	int var_143_int; bool var_144_bool;
	var_143_int = 0;
	
	for(;;) {
		string var_147_string; int var_148_int;
		var_143_int = var_148_int;
		func_1928(var_147_string, var_148_int);
		@HasAnimation(var_144_bool, "all", var_147_string);
		if(!var_144_bool) //@nz
			break;
		var_143_int += 1;
	}
	int var_145_int;
	@irand(var_145_int, var_143_int);
	string var_154_string; int var_155_int;
	var_145_int = var_155_int;
	func_1928(var_154_string, var_155_int);
	@PlayAnimation("all", var_154_string);
	@WaitForAnimEnd();
}


void func_1315(float var_289_float, object var_290_object, float var_291_float, int var_292_int)
{
	int var_302_int; int var_304_int;
	object var_309_object;
	var_290_object = var_309_object;
	bool var_308_bool;
	func_1303(var_308_bool, var_309_object, "health");
	if(!var_308_bool) //@nz
		var_289_float = 0.0;
	bool var_312_bool; object var_313_object;
	func_1303(var_312_bool, var_313_object, "armor");
	if(!var_312_bool) //@nz
		var_302_int = 0;
	else
		var_313_object->GetProperty("armor", var_302_int);
	string var_317_string; int var_318_int;
	var_292_int = var_318_int;
	func_1280(var_317_string, var_318_int);
	string var_303_string = "armor_" + var_317_string;
	bool var_321_bool; object var_322_object; string var_323_string;
	var_290_object = var_322_object;
	func_1303(var_321_bool, var_322_object, var_323_string);
	if(!var_321_bool) //@nz
		var_304_int = 0;
	else
		var_290_object->GetProperty(var_323_string, var_304_int);

	float var_325_float;
	func_1538(var_325_float, ((var_302_int + var_304_int) / 100.0), (float)1);
	float var_305_float;
	var_325_float = var_305_float;
	float var_306_float;
	var_290_object->GetProperty("health", var_306_float);
	float var_335_float;
	func_1545(var_335_float, (var_306_float - (var_291_float * (1 - var_305_float))), (float)0, (float)1);
	var_290_object->SetProperty("health", var_335_float);
	float var_307_float = var_289_float;
	
}


void func_1444(object var_14_object, int var_15_int)
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
void func_1575(float var_60_float, cvector var_61_cvector, cvector var_62_cvector)
{
	cvector var_64_cvector;
	var_61_cvector = var_64_cvector;
	cvector var_65_cvector;
	var_62_cvector = var_65_cvector;
	float var_63_float;
	func_1556(var_63_float, var_64_cvector, var_65_cvector);
	float var_72_float; cvector var_73_cvector;
	var_61_cvector = var_73_cvector;
	func_1565(var_72_float, var_73_cvector);
	float var_81_float; cvector var_82_cvector;
	var_62_cvector = var_82_cvector;
	func_1565(var_81_float, var_82_cvector);
	var_60_float = var_63_float / (var_72_float * var_81_float);
}


// @pe
void func_1707(object var_60_object)
{
	object var_61_object;
	var_60_object = var_61_object;
	func_1663(var_61_object);
}


void func_555(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


void func_1071(bool var_0_bool, bool var_195_bool)
{
	bool var_197_bool;
	var_200_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_200_bool != 0) {
		var_0_bool->IsAttacking(var_197_bool); //@t
		var_197_bool = var_195_bool;
	}
	var_195_bool = false;
}


// @pe
void func_1713(int var_14_int)
{
	var_14_int = 0;
}


// @pe
void func_1716(void)
{
}


void func_182(void)
{
	bool var_133_bool;
	func_1522(var_133_bool);
	if(!var_133_bool) //@nz
		func_1693();
}


void func_1718(int var_22_int, int var_23_int)
{
	int var_38_int;
	if(var_22_int > var_23_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	int var_37_int = 0;
	if(var_22_int != var_23_int) {
		@irand(var_38_int, (var_23_int - var_22_int));
	} else if(var_22_int == 0) {
		return 8;
	}
	var_37_int += var_22_int;
	if(var_37_int == 0)
		return 8;
	int var_39_int;
	@GetInvItemByName(var_39_int, "Money");
	bool var_40_bool;
	@AddItem(var_40_bool, var_39_int, 0, var_37_int);
	
}


void func_1592(int var_25_int)
{
	float var_27_float;
	@GetGameTime(var_27_float);
	var_25_int = 1 + (var_27_float / 24);
}


void func_442(bool var_0_bool)
{
	func_1527(var_0_bool);
}


void func_1082(object var_2_object, object var_4_object)
{
	int var_260_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_4_object != 0) {
		if((var_4_object + -1) > 0)
			return 4;
	}
	float var_259_float;
	@rand(var_259_float);
	float var_266_float;
	func_1120(var_266_float);
	if(var_259_float < var_266_float) {
		@irand(var_260_int, var_2_object);
		@Speak("attack" + (var_260_int + 1));
		int var_271_int;
		func_1118(var_271_int);
		var_4_object = var_271_int;
	}
}


void func_955(bool var_361_bool, float var_362_float)
{
	float var_365_float; bool var_366_bool;
	@rand(var_365_float);
	if(var_365_float < var_362_float) {

		for(;;) {
			@IsAnimationPlaying(var_366_bool);
			if(!var_366_bool) { //@nz
			} else {
				bool var_369_bool;
				func_1019(var_366_bool, var_369_bool);
				if(var_369_bool != 0) {
					var_361_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_361_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
}


void func_1981(void)
{
	@StopAnimation();
}


void func_1984(bool var_21_bool)
{
	var_21_bool = true;
}


// @pe
void func_1601(object var_11_object)
{
	object var_12_object;
	var_11_object = var_12_object;
	TaskCall(0);
	func_0(var_12_object);
	TaskReturn();
}


void func_1986(bool var_14_bool, object var_15_object, object var_16_object)
{
	object var_22_object;
	var_16_object = var_22_object;
	bool var_21_bool;
	func_1303(var_21_bool, var_22_object, "class");
	if(!var_21_bool) { //@nz
		var_14_bool = false;
		return 4;
	}
	string var_19_string;
	var_16_object->GetProperty("class", var_19_string);
	bool var_32_bool = false;
	bool var_33_bool = false;
	bool var_34_bool = false;
	bool var_35_bool = false;
	bool var_36_bool = false;
	bool var_37_bool = false;
	bool var_38_bool = false;
	if(var_19_string != "littleboy") {
		if(var_19_string != "littlegirl")
			var_38_bool = true;
	}
	if(var_38_bool != 0) {
		if(var_19_string != "boy")
			var_37_bool = true;
	}
	if(var_37_bool != 0) {
		if(var_19_string != "girl")
			var_36_bool = true;
	}
	if(var_36_bool != 0) {
		if(var_19_string != "wasted_girl")
			var_35_bool = true;
	}
	if(var_35_bool != 0) {
		if(var_19_string != "woman")
			var_34_bool = true;
	}
	if(var_34_bool != 0) {
		if(var_19_string != "worker")
			var_33_bool = true;
	}
	if(var_33_bool != 0) {
		if(var_19_string != "wasted_male")
			var_32_bool = true;
	}
	if(var_32_bool != 0) {
		var_14_bool = false;
		return 4;
	}
	bool var_20_bool;
	@CanSee(var_20_bool, var_15_object);
	bool var_55_bool = true;
	if(var_20_bool != 1) {
		float var_57_float; object var_58_object;
		func_1295(var_57_float, var_58_object);
		var_66_bool = var_57_float <= 250000.0;
		if(var_66_bool != 1)
			var_55_bool = false;
	}
	if(var_55_bool != 0) {
		@ReportReputationChange(var_58_object, var_16_object, -0.3);
		var_14_bool = true;
		return 4;
	}
	var_14_bool = false;
}


void func_836(bool var_0_bool, float var_275_float, int var_276_int)
{
	object var_280_object; float var_281_float; float var_282_float;
	@GetVictim((var_275_float * 0.9), var_280_object);
	@ReportAttack(var_0_bool);
	if(var_280_object == var_0_bool) {
		float var_286_float; object var_287_object; int var_288_int;
		var_280_object = var_287_object;
		var_276_int = var_288_int;
		func_625(var_288_int);
		var_286_float = var_281_float;
		float var_289_float; object var_290_object; float var_291_float; int var_292_int;
		var_280_object = var_290_object;
		int var_293_int; object var_294_object; int var_295_int;
		var_280_object = var_294_object;
		var_276_int = var_295_int;
		func_628(var_295_int);
		var_293_int = var_292_int;
		func_1315(var_289_float, var_290_object, var_291_float, var_292_int);
		var_289_float = var_282_float;
		int var_342_int;
		func_1114(var_342_int);
		@ReportHit(var_0_bool, var_342_int, var_282_float, var_291_float);
		object var_343_object; float var_344_float;
		var_280_object = var_343_object;
		var_282_float = var_344_float;
		func_1116();
	}
}
EMIT "Stack[-3] = 0";


void func_336(bool var_1_bool)
{
	@KillTimer(110);
	var_1_bool = false;
	if(var_0_bool != 0)
		func_1981();
	else
		@Stop();
	
}


void func_979(bool var_0_bool, bool var_203_bool, float var_204_float)
{
	bool var_210_bool; cvector var_211_cvector; cvector var_212_cvector; cvector var_213_cvector; float var_214_float;
	
	for(;;) {
		@IsAnimationPlaying(var_210_bool);
		if(!var_210_bool) //@nz
			break;
		bool var_216_bool;
		func_1019(var_214_float, var_216_bool);
		if(var_216_bool != 0) {
			var_203_bool = true;
			return 10;
		}
		bool var_241_bool;
		func_1420(var_241_bool, var_0_bool);
		if(!var_241_bool) { //@nz
			var_203_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_211_cvector); //@t
		@GetPFPosition(var_212_cvector);
		var_213_cvector = var_211_cvector - var_212_cvector;
		var_214_float = var_213_cvector | var_213_cvector;
		if(var_214_float < (var_204_float * var_204_float)) {
			bool var_246_bool; float var_247_float;
			var_204_float = var_247_float;
			func_875(var_213_cvector, var_214_float, var_246_bool, var_247_float);
			var_203_bool = true;
			return 10;
		}
		@sync();
	}
	var_203_bool = false;
}


void func_1748(bool var_16_bool)
{
	int var_19_int; bool var_20_bool;
	if(var_16_bool != 0) {
		int var_25_int;
		func_1592(var_25_int);
		func_1718(0, (100 + (var_25_int * 100)));
		@irand(var_19_int, 9);
		if(var_19_int == 0) {
			int var_54_int;
			func_1923(var_54_int, "lemon");
			@AddItem(var_20_bool, var_54_int, 0, 1);
		} else {
				if(var_19_int == 1) {
					int var_62_int;
					func_1923(var_62_int, "rusk");
					@AddItem(var_20_bool, var_62_int, 0, 1);
			}

			for(;;) {
				} else {
			if(var_19_int == 2) {
				int var_68_int;
				func_1923(var_68_int, "hook");
				@AddItem(var_20_bool, var_68_int, 0, 1);
			} else if(var_19_int == 4) {
				int var_74_int;
				func_1923(var_74_int, "syringe");
				@AddItem(var_20_bool, var_74_int, 0, 1);
			} else if(var_19_int == 5) {
				int var_80_int;
				func_1923(var_80_int, "watch");
				@AddItem(var_20_bool, var_80_int, 0, 1);
			} else if(var_19_int == 6) {
				int var_86_int;
				func_1923(var_86_int, "razor");
				@AddItem(var_20_bool, var_86_int, 0, 1);
			}
	}
		int var_93_int;
		func_1592(var_93_int);
		func_1718(0, (50 + (var_93_int * 50)));
		@irand(var_19_int, 8);
		if(var_19_int == 0) {
			int var_99_int;
			func_1923(var_99_int, "beads");
			@AddItem(var_20_bool, var_99_int, 0, 1);
		} else if(var_19_int == 1) {
			int var_105_int;
			func_1923(var_105_int, "bracelet");
			@AddItem(var_20_bool, var_105_int, 0, 1);
		} else if(var_19_int == 2) {
			int var_111_int;
			func_1923(var_111_int, "ear_ring");
			@AddItem(var_20_bool, var_111_int, 0, 1);
		} else if(var_19_int == 3) {
			int var_117_int;
			func_1923(var_117_int, "gold_ring");
			@AddItem(var_20_bool, var_117_int, 0, 1);
		} else if(var_19_int == 4) {
			int var_123_int;
			func_1923(var_123_int, "silver_ring");
			@AddItem(var_20_bool, var_123_int, 0, 1);
		} else if(var_19_int == 5) {
			int var_129_int;
			func_1923(var_129_int, "flower");
			@AddItem(var_20_bool, var_129_int, 0, 1);
			}
		}
		return 4;

	}
	
}


void func_1114(int var_342_int)
{
	var_342_int = 0;
}


// @pe
void func_1116(void)
{
}


void func_1118(int var_271_int)
{
	var_271_int = 1;
}


void func_1120(float var_266_float)
{
	var_266_float = 0.5;
}


void func_1379(bool var_30_bool, object var_31_object)
{
	bool var_33_bool;
	var_31_object->IsDead(var_33_bool);
	var_33_bool = var_30_bool;
}


// @pe
void func_1636(int var_19_int)
{
	bool var_21_bool;
	func_1984(var_21_bool);
	if(var_21_bool != 0)
		var_19_int = 2;
	else
		var_19_int = 0;
	
}


void func_1253(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_358(bool var_1_bool, object var_12_object)
{
	if(var_1_bool != 0)
		return 4;
	bool var_15_bool;
	@IsPlayerActor(var_12_object, var_15_bool);
	if(!var_15_bool) //@nz
		return 4;
	int var_19_int; object var_20_object;
	var_12_object = var_20_object;
	func_1636(var_20_object);
	int var_16_int;
	var_19_int = var_16_int;
	if(var_16_int > 0) {
		if(var_16_int > 1)
			func_336(var_16_int);
		object var_28_object;
		var_12_object = var_28_object;
		func_1645(var_28_object);
		var_1_bool = true;
		@SetTimer(110, 5.0);
	}
}


void func_1511(object var_86_object)
{
	cvector var_90_cvector;
	var_86_object->GetPosition(var_90_cvector);
	cvector var_91_cvector;
	@GetPosition(var_91_cvector);
	cvector var_92_cvector = var_90_cvector - var_91_cvector;
	var_93_float = GetByIndex(var_92_cvector, 0);
	var_94_float = GetByIndex(var_92_cvector, 2);
	@RotateAsync(var_93_float, var_94_float);
}


void func_1384(bool var_19_bool, object var_20_object)
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
		func_1379(var_30_bool, var_31_object);
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


void func_1129(bool var_0_bool, bool var_1_bool, bool var_119_bool, object var_120_object, float var_121_float, float var_122_float, bool var_123_bool, bool var_124_bool)
{
	bool var_135_bool; object var_137_object; cvector var_138_cvector; cvector var_139_cvector; float var_141_float; object var_142_object;
	var_0_bool = false;
	var_1_bool = var_120_object;
	bool var_136_bool;
	var_124_bool = var_136_bool;
	
	for(;;) {
		bool var_143_bool; object var_144_object;
		var_120_object = var_144_object;
		func_1269(var_143_bool, var_144_object);
		if(!var_143_bool) { //@nz
			var_119_bool = false;
			return 16;
		}
		var_120_object->GetPosition(var_138_cvector);
		@GetPosition(var_139_cvector);
		var_141_float = (var_138_cvector - var_139_cvector) | (var_138_cvector - var_139_cvector);
		bool var_148_bool = false;
		if(var_122_float > 0) {
			if(var_141_float > (var_122_float * var_122_float))
				var_148_bool = true;
		}
		if(var_148_bool != 0) {
			@Stop();
			var_119_bool = false;
			return 16;
		}
		if(var_141_float > (var_121_float * var_121_float)) {
			var_120_object->GetPFPosition(var_138_cvector);
			@FindPathTo(var_142_object, var_138_cvector);
			if(var_142_object != null) {
				var_142_object = var_137_object;
				var_142_object = null;
			}
			if(var_137_object != null) {
				if(var_136_bool == 0) goto Label_1182;
				var_136_bool = false;
				@RotatePath(var_137_object, var_135_bool);
				if(!var_135_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_161_string;
						func_1276(var_161_string);
						string var_162_string;
						func_1278(var_162_string);
						@FollowPath(var_137_object, var_123_bool, var_135_bool, var_161_string, var_162_string);
						if(!var_135_bool) { //@nz
							if(var_0_bool == 0) goto Label_1201;
							var_137_object = null;
						}
					EMIT "GOTO 0x4b2";

					Label_1201:
						} else {
					var_137_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_135_bool);
					if(!var_135_bool) { //@nz
						if(var_0_bool != 0) {
							var_137_object = null;
							goto Label_1229;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1229;
		}
			var_142_object = null;
			goto Label_1227;

		Label_1227:
			var_137_object = null;

		}
	Label_1229:
		for(;;) {
			var_119_bool = !var_0_bool;
			return 16;

			}
	}
	
}


// @pe
void func_617(object var_62_object)
{
	object var_68_object;
	func_631(var_63_object, var_64_int, var_65_int, var_66_bool, var_67_int, var_68_object, var_68_object, true, 180.0);
}


void func_875(bool var_0_bool, bool var_1_bool, bool var_246_bool, float var_247_float)
{
	int var_250_int;
	@irand(var_250_int, var_1_bool);
	var_250_int += 1;
	@Face(var_0_bool);
	@SetAttackState(true);
	@PlayAnimation("all", ("attack_begin" + var_250_int));
	@WaitForAnimEnd();
	bool var_251_bool;
	func_1082(var_250_int, var_251_bool);
	bool var_272_bool;
	func_1420(var_272_bool, var_0_bool);
	if(!var_272_bool) { //@nz
		@StopAsync();
		var_246_bool = false;
		return 4;
	}
	float var_275_float; int var_276_int;
	var_247_float = var_275_float;
	var_250_int = var_276_int;
	func_836(var_251_bool, var_275_float, var_276_int);
	@HasAnimation(var_251_bool, "all", ("attack_middle" + var_250_int));
	if(var_251_bool != 0) {
		@PlayAnimation("all", ("attack_middle" + var_250_int));
		@WaitForAnimEnd();
		bool var_352_bool;
		func_1420(var_352_bool, var_0_bool);
		if(!var_352_bool) { //@nz
			@StopAsync();
			var_246_bool = false;
			return 4;
		}
		float var_355_float; int var_356_int;
		var_247_float = var_355_float;
		var_250_int = var_356_int;
		func_836(var_251_bool, var_355_float, var_356_int);
	}
	@SetAttackState(false);
	@PlayAnimation("all", ("attack_end" + var_250_int));
	bool var_361_bool;
	func_955(var_361_bool, 0.75);
	@StopAsync();
	var_246_bool = true;
}


void func_631(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, object var_68_object, bool var_69_bool, float var_70_float, bool var_125_bool)
{
	bool var_81_bool; bool var_82_bool; float var_83_float; cvector var_84_cvector; cvector var_85_cvector; bool var_86_bool; bool var_87_bool; float var_89_float; float var_90_float;
	var_1_bool = 0;
	
	for(;;) {
		@HasAnimation(var_81_bool, "all", ("attack_begin" + (var_1_bool + 1)));
		if(!var_81_bool) { //@nz
		} else {
			var_1_bool += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_82_bool, ("attack" + (var_2_object + 1)));
			if(!var_82_bool) { //@nz
			} else {
									var_2_object += 1;
			}
			var_4_object = 0;
			var_104_bool = IsFuncExist(var_68_object, "@GetAttackDistance", 1);
			if(var_104_bool != 0) {
				var_68_object->GetAttackDistance(var_83_float);
				var_83_float += 50;
			} else {
								var_70_float = var_83_float;

			}
			if(var_83_float >= 150)
				var_83_float = 150;
			var_3_object = false;
			var_0_bool = var_68_object;
			@IsPlayerActor(var_0_bool, var_86_bool);
			if(var_69_bool != 0)
				var_87_bool = false;
			else
				var_87_bool = true;

			for(;;) {
				bool var_109_bool = false;
				bool var_110_bool;
				func_1420(var_110_bool, var_0_bool);
				if(var_110_bool != 0) {
					if(!var_3_object) //@nz
						var_109_bool = true;
				}
				if(var_109_bool != 0) {
					var_0_bool->GetPFPosition(var_84_cvector); //@t
					@GetPFPosition(var_85_cvector);
					var_89_float = (var_84_cvector - var_85_cvector) | (var_84_cvector - var_85_cvector);
					if(var_89_float >= ((400.0 + var_83_float) * (400.0 + var_83_float))) {
						bool var_119_bool; float var_121_float;
						var_83_float = var_121_float;
						TaskCall(4);
						func_1129(var_125_bool, var_126_object, var_119_bool, var_0_bool, var_121_float, 3000.0, true, false);
						TaskReturn();
						if(!var_125_bool) { //@nz
						} else {
							var_87_bool = false;
					} else {
					if(var_89_float >= (var_70_float * var_70_float)) {
						if(!var_87_bool) { //@nz
							func_1511(var_0_bool);
							@PlayAnimation("all", "attack_on");
							@WaitForAnimEnd();
							@StopAsync();
							var_87_bool = true;
						}
						@rand(var_90_float);
						bool var_192_bool;
						var_194_bool = var_90_float < 0.6;
						if(var_194_bool != 1) {
							bool var_195_bool;
							func_1071(true, var_195_bool);
							if(var_195_bool != 1)
								var_192_bool = false;
						}
						if(var_192_bool != 0) {
							@Face(var_0_bool);
							@PlayAnimation("all", "attack_stay");
							bool var_203_bool; float var_204_float;
							func_979(var_90_float, var_203_bool, var_204_float);
							@StopAsync();
						} else {
							@Face(var_0_bool);
							@PlayAnimation("all", "fjump");
							@WaitForAnimEnd();
							@SetSpeed([0.0, 0.0, 0.0]);
							@Stop();
							@StopAsync();
							bool var_373_bool;
							func_1071(var_90_float, var_373_bool);
							var_374_bool = !var_373_bool; //@nz
							if(var_374_bool == 0) goto Label_809;
							bool var_375_bool;
							func_1420(var_375_bool, var_0_bool);
							if(!var_375_bool) { //@nz
								goto Label_819;
							}
							var_0_bool->GetPFPosition(var_84_cvector); //@t
							@GetPFPosition(var_85_cvector);
							var_89_float = (var_84_cvector - var_85_cvector) | (var_84_cvector - var_85_cvector);
							if(!(var_89_float < (var_204_float * var_204_float))) goto Label_809;
							bool var_380_bool; float var_381_float;
							var_70_float = var_381_float;
							func_875(var_89_float, var_90_float, var_380_bool, var_381_float);
							var_382_bool = !var_380_bool; //@nz
							if(var_382_bool == 0) goto Label_809;
							goto Label_819;
					}
						bool var_383_bool; float var_384_float;
						var_70_float = var_384_float;
						func_875(var_89_float, var_90_float, var_383_bool, var_384_float);
						if(!var_383_bool) { //@nz
							goto Label_819;
						}
						var_87_bool = true;

					}
				Label_809:
					goto Label_818;
					}
					Label_818:
					}
				}
			Label_819:
				@WaitForAnimEnd();
				if(var_3_object != 0)
					return 20;
				@PlayAnimation("all", "attack_off");
				@WaitForAnimEnd();
				if(var_86_bool != 0)
					@Sleep(2.0);
				return 20;

			}

		}

	}
}


// @pe
void func_1645(object var_28_object)
{
	object var_29_object;
	var_28_object = var_29_object;
	TaskCall(2);
	func_391(var_30_object, var_29_object);
	TaskReturn();
}


// @pe
void func_625(float var_286_float)
{
	var_286_float = 0.05;
}


void func_1522(bool var_133_bool)
{
	bool var_135_bool;
	@IsLoaded(var_135_bool);
	var_135_bool = var_133_bool;
}


// @pe
void func_628(int var_293_int)
{
	var_293_int = 0;
}


// @pe
void func_1653(int var_18_int, object var_19_object)
{
	object var_21_object;
	var_19_object = var_21_object;
	bool var_20_bool;
	func_1420(var_20_bool, var_21_object);
	if(var_20_bool != 0)
		var_18_int = 2;
	else
		var_18_int = 0;
	
}


// @pe
void func_1269(bool var_13_bool, object var_14_object)
{
	object var_16_object;
	var_14_object = var_16_object;
	bool var_15_bool;
	func_1420(var_15_bool, var_16_object);
	var_15_bool = var_13_bool;
}


void func_1527(object var_37_object)
{
	float var_40_float;
	var_37_object->GetEyesHeight(var_40_float);
	cvector var_41_cvector = [0.0, 0.0, 0.0];
	var_42_float = GetByIndex(var_41_cvector, 1);
	var_40_float = var_42_float;
	SetByIndex(var_41_cvector, 1) = var_42_float;
	@LookAsync(var_37_object, "head", var_41_cvector);
}


// @pe
void func_120(string var_35_string)
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


void func_1019(bool var_0_bool, bool var_216_bool)
{
	cvector var_222_cvector; cvector var_223_cvector;
	bool var_227_bool;
	func_1420(var_227_bool, var_0_bool);
	if(!var_227_bool) { //@nz
		var_216_bool = false;
		return 10;
	}
	bool var_230_bool;
	float var_226_float;
	func_1071(var_226_float, var_230_bool);
	if(var_230_bool != 0) {
		var_0_bool->GetPFPosition(var_222_cvector); //@t
		@GetPFPosition(var_223_cvector);
		var_0_bool->GetAttackDistance(var_226_float); //@t
		var_226_float += 50;
		if(((var_222_cvector - var_223_cvector) | (var_222_cvector - var_223_cvector)) <= (var_226_float * var_226_float)) {
			func_1052(var_226_float);
			var_216_bool = true;
			return 10;
		}
	}
	var_216_bool = false;
}


void func_1276(string var_161_string)
{
	var_161_string = "walk";
}


void func_1278(string var_162_string)
{
	var_162_string = "run";
}


// @pe
void func_1663(object var_61_object)
{
	object var_62_object;
	var_61_object = var_62_object;
	TaskCall(3);
	func_617(var_62_object);
	TaskReturn();
}


