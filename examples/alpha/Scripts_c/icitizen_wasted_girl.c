// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnUse(object actor, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		object var_13_object;
		var_9_bool = var_13_object;
		func_1350(var_13_object);
		int var_11_int;
		int var_12_int = var_11_int;
		if(var_11_int > 0) {
			object var_16_object;
			var_9_bool = var_16_object;
			func_1353(var_16_object);
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		func_1359();
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
	}

	// @pe
	void OnDeath(object actor, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
	}

}


maintask task_1
{
	void init(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		int var_11_int; int var_12_int;
		var_0_bool = false;
		@SensePlayerOnly(true);
		func_1601();
		func_182();
	
		for(;;) {
			@irand(var_11_int, 2);
			if(var_11_int == 0) {
				var_0_bool = true;
				func_1620();
				var_0_bool = false;
				@ResetAAS();
			} else {
			@irand(var_12_int, 4);
			@Sleep(var_12_int + 1);
			}
		}
	
	}
	EMIT "Return(); Pop(4)";

	void OnUse(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		object var_13_object;
		var_9_bool = var_13_object;
		func_1350(var_13_object);
		int var_11_int;
		int var_12_int = var_11_int;
		if(var_11_int > 0) {
			if(var_11_int > 1)
				func_336(var_11_int);
			object var_20_object;
			var_9_bool = var_20_object;
			func_1353(var_20_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		object var_13_object;
		var_9_bool = var_13_object;
		int var_12_int;
		func_1314(var_12_int, var_13_object);
		int var_11_int;
		var_12_int = var_11_int;
		if(var_11_int > 0) {
			if(var_11_int > 1)
				func_336(var_11_int);
			object var_54_object;
			var_9_bool = var_54_object;
			func_1324(var_54_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		int var_12_int;
		object var_14_object;
		var_9_cvector = var_14_object;
		object var_15_object;
		var_10_bool = var_15_object;
		bool var_13_bool;
		func_1652(var_13_bool, var_14_object, var_15_object);
		if(var_13_bool != 0) {
			int var_41_int; object var_42_object;
			var_9_cvector = var_42_object;
			func_1332(var_41_int, var_42_object);
			var_41_int = var_12_int;
			if(var_12_int > 0) {
				if(var_12_int > 1)
					func_336(var_12_int);
				object var_83_object;
				var_9_cvector = var_83_object;
				func_1342(var_83_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		object var_13_object;
		var_9_bool = var_13_object;
		int var_12_int;
		func_1360(var_12_int, var_13_object);
		int var_11_int;
		var_12_int = var_11_int;
		if(var_11_int > 0) {
			if(var_11_int > 1)
				func_336(var_11_int);
			object var_59_object;
			var_9_bool = var_59_object;
			func_1373(var_59_object);
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, object var_2_object, string var_3_string, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		string var_14_string;
		var_10_bool = var_14_string;
		object var_15_object;
		var_9_cvector = var_15_object;
		func_1379(var_15_object);
		int var_12_int;
		int var_13_int = var_12_int;
		if(var_12_int > 0) {
			if(var_12_int > 1)
				func_336(var_12_int);
			string var_22_string; object var_23_object;
			var_10_bool = var_22_string;
			var_9_cvector = var_23_object;
			func_1382();
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		if(var_0_bool != 0)
			return 0;
		object var_11_object;
		func_358(var_11_object, var_11_object);
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		if(var_0_bool != 0)
			return 0;
		object var_11_object;
		func_358(var_11_object, var_11_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, int var_2_int, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		if(var_9_bool != 110) {
		}
		var_1_bool = false;
		@KillTimer(110);
		@ResetAAS();
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		func_336(var_8_bool);
		func_1359();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		func_336(var_9_bool);
		object var_12_object;
		var_9_bool = var_12_object;
		func_1283();
	}

}


task task_2
{
	void OnUse(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		object var_13_object;
		var_9_bool = var_13_object;
		func_1350(var_13_object);
		int var_11_int;
		int var_12_int = var_11_int;
		if(var_11_int > 0) {
			if(var_11_int > 1)
				func_555();
			object var_20_object;
			var_9_bool = var_20_object;
			func_1353(var_20_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		object var_13_object;
		var_9_bool = var_13_object;
		int var_12_int;
		func_1314(var_12_int, var_13_object);
		int var_11_int;
		var_12_int = var_11_int;
		if(var_11_int > 0) {
			if(var_11_int > 1)
				func_555();
			object var_54_object;
			var_9_bool = var_54_object;
			func_1324(var_54_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		int var_12_int;
		object var_14_object;
		var_9_cvector = var_14_object;
		object var_15_object;
		var_10_bool = var_15_object;
		bool var_13_bool;
		func_1652(var_13_bool, var_14_object, var_15_object);
		if(var_13_bool != 0) {
			int var_41_int; object var_42_object;
			var_9_cvector = var_42_object;
			func_1332(var_41_int, var_42_object);
			var_41_int = var_12_int;
			if(var_12_int > 0) {
				if(var_12_int > 1)
					func_555();
				object var_83_object;
				var_9_cvector = var_83_object;
				func_1342(var_83_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		object var_13_object;
		var_9_bool = var_13_object;
		int var_12_int;
		func_1360(var_12_int, var_13_object);
		int var_11_int;
		var_12_int = var_11_int;
		if(var_11_int > 0) {
			if(var_11_int > 1)
				func_555();
			object var_59_object;
			var_9_bool = var_59_object;
			func_1373(var_59_object);
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, string var_4_string, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		string var_14_string;
		var_10_bool = var_14_string;
		object var_15_object;
		var_9_cvector = var_15_object;
		func_1379(var_15_object);
		int var_12_int;
		int var_13_int = var_12_int;
		if(var_12_int > 0) {
			if(var_12_int > 1)
				func_555();
			string var_22_string; object var_23_object;
			var_10_bool = var_22_string;
			var_9_cvector = var_23_object;
			func_1382();
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		func_555();
		object var_12_object;
		var_9_bool = var_12_object;
		func_1283();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, object var_2_object, int var_3_int, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		if(var_9_bool != 111)
			return 4;
		bool var_16_bool;
		func_1081(var_16_bool, var_0_bool);
		if(!var_16_bool) { //@nz
			func_555();
			return 4;
		}
		cvector var_12_cvector;
		@GetDirection(var_12_cvector);
		cvector var_53_cvector;
		func_1013(var_53_cvector, var_0_bool);
		cvector var_13_cvector;
		var_53_cvector = var_13_cvector;
		float var_59_float; cvector var_60_cvector; cvector var_61_cvector;
		var_12_cvector = var_60_cvector;
		var_13_cvector = var_61_cvector;
		func_1236(var_59_float, var_60_cvector, var_61_cvector);
		if(var_59_float < 0.49999997)
			func_1172(var_0_bool);
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		func_555();
		func_1359();
	}

}


task task_3
{
	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		func_798(var_8_bool);
		func_1359();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, int var_6_int, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		cvector var_14_cvector; float var_15_float; cvector var_16_cvector; float var_17_float;
		if(var_9_bool != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_14_cvector);
			@FindDirLength(var_15_float, var_14_cvector, 7000.0);
			cvector var_23_cvector;
			func_652(var_17_float, var_23_cvector, 1.7453294);
			var_23_cvector = var_16_cvector;
			var_17_float = var_16_cvector | var_16_cvector;
			bool var_53_bool = false;
			if(var_17_float >= 10000.0) {
				bool var_56_bool;
				var_60_bool = var_17_float >= ((var_15_float * var_15_float) * 2.25);
				if(var_60_bool != 1) {
					bool var_61_bool;
					func_814(true, var_61_bool);
					if(var_61_bool != 1)
						var_56_bool = false;
				}
				if(var_56_bool != 0)
					var_53_bool = true;
			}
			if(var_53_bool == 0) goto Label_797;
			@Stop();
			cvector var_81_cvector;
			func_1008(var_81_cvector);
			var_1_bool = var_81_cvector + var_16_cvector;
		}
	Label_797:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		func_798(var_9_bool);
		object var_11_object;
		var_9_bool = var_11_object;
		func_1283();
	}

}


task task_4
{
	void OnTimer(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool, int var_9_int)
	{
		cvector var_14_cvector; float var_15_float; cvector var_16_cvector; float var_17_float;
		if(var_9_int != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_14_cvector);
			@FindDirLength(var_15_float, var_14_cvector, 7000.0);
			cvector var_23_cvector;
			func_830(var_17_float, var_23_cvector, 1.7453294);
			var_23_cvector = var_16_cvector;
			var_17_float = var_16_cvector | var_16_cvector;
			bool var_53_bool = false;
			if(var_17_float >= 10000.0) {
				bool var_56_bool;
				var_60_bool = var_17_float >= ((var_15_float * var_15_float) * 2.25);
				if(var_60_bool != 1) {
					bool var_61_bool;
					func_992(true, var_61_bool);
					if(var_61_bool != 1)
						var_56_bool = false;
				}
				if(var_56_bool != 0)
					var_53_bool = true;
			}
			if(var_53_bool == 0) goto Label_975;
			@Stop();
			cvector var_81_cvector;
			func_1008(var_81_cvector);
			var_1_bool = var_81_cvector + var_16_cvector;
		}
	Label_975:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object)
	{
		func_976(var_9_object);
		object var_11_object;
		var_9_object = var_11_object;
		func_1283();
	}

}


void OnPropertyChange(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, string var_10_string)
{
	float var_12_float;
	if(var_10_string == "health") {
		@GetProperty("health", var_12_float);
		if(var_12_float <= 0)
			@SignalDeath(var_9_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object)
{
	object var_10_object;
	var_9_object = var_10_object;
	func_1262(var_10_object);
}


// @pe
void OnHit(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, int var_10_int, float var_11_float, float var_12_float)
{
	object var_13_object;
	var_9_object = var_13_object;
	int var_14_int;
	var_10_int = var_14_int;
	float var_15_float;
	var_11_float = var_15_float;
	func_1105(var_14_int, var_15_float);
}


// @pe
void func_0(object var_11_object)
{
	object var_12_object;
	var_11_object = var_12_object;
	func_33(var_12_object);
	object var_62_object;
	var_11_object = var_62_object;
	func_1700();
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1028(bool var_38_bool, object var_39_object, string var_40_string)
{
	var_45_bool = IsFuncExist(var_39_object, "HasProperty", 2);
	if(!var_45_bool) { //@nz
		var_38_bool = false;
		return 2;
	}
	bool var_42_bool;
	var_39_object->HasProperty(var_40_string, var_42_bool);
	var_42_bool = var_38_bool;
}


void func_1414(bool var_15_bool)
{
	int var_18_int; bool var_19_bool;
	if(var_15_bool != 0) {
		int var_24_int;
		func_1253(var_24_int);
		func_1384(0, (100 + (var_24_int * 100)));
		@irand(var_18_int, 9);
		if(var_18_int == 0) {
			int var_53_int;
			func_1589(var_53_int, "lemon");
			@AddItem(var_19_bool, var_53_int, 0, 1);
		} else {
				if(var_18_int == 1) {
					int var_61_int;
					func_1589(var_61_int, "rusk");
					@AddItem(var_19_bool, var_61_int, 0, 1);
			}

			for(;;) {
				} else {
			if(var_18_int == 2) {
				int var_67_int;
				func_1589(var_67_int, "hook");
				@AddItem(var_19_bool, var_67_int, 0, 1);
			} else if(var_18_int == 4) {
				int var_73_int;
				func_1589(var_73_int, "syringe");
				@AddItem(var_19_bool, var_73_int, 0, 1);
			} else if(var_18_int == 5) {
				int var_79_int;
				func_1589(var_79_int, "watch");
				@AddItem(var_19_bool, var_79_int, 0, 1);
			} else if(var_18_int == 6) {
				int var_85_int;
				func_1589(var_85_int, "razor");
				@AddItem(var_19_bool, var_85_int, 0, 1);
			}
	}
		int var_92_int;
		func_1253(var_92_int);
		func_1384(0, (50 + (var_92_int * 50)));
		@irand(var_18_int, 8);
		if(var_18_int == 0) {
			int var_98_int;
			func_1589(var_98_int, "beads");
			@AddItem(var_19_bool, var_98_int, 0, 1);
		} else if(var_18_int == 1) {
			int var_104_int;
			func_1589(var_104_int, "bracelet");
			@AddItem(var_19_bool, var_104_int, 0, 1);
		} else if(var_18_int == 2) {
			int var_110_int;
			func_1589(var_110_int, "ear_ring");
			@AddItem(var_19_bool, var_110_int, 0, 1);
		} else if(var_18_int == 3) {
			int var_116_int;
			func_1589(var_116_int, "gold_ring");
			@AddItem(var_19_bool, var_116_int, 0, 1);
		} else if(var_18_int == 4) {
			int var_122_int;
			func_1589(var_122_int, "silver_ring");
			@AddItem(var_19_bool, var_122_int, 0, 1);
		} else if(var_18_int == 5) {
			int var_128_int;
			func_1589(var_128_int, "flower");
			@AddItem(var_19_bool, var_128_int, 0, 1);
			}
		}
		return 4;

	}
	
}


void func_391(bool var_0_bool, object var_28_object)
{
	var_0_bool = var_28_object;
	bool var_35_bool;
	func_442(var_35_bool);
	cvector var_33_cvector;
	@GetDirection(var_33_cvector);
	cvector var_43_cvector;
	func_1013(var_43_cvector, var_0_bool);
	cvector var_34_cvector;
	var_43_cvector = var_34_cvector;
	float var_49_float; cvector var_50_cvector; cvector var_51_cvector;
	var_33_cvector = var_50_cvector;
	var_34_cvector = var_51_cvector;
	func_1236(var_49_float, var_50_cvector, var_51_cvector);
	if(var_49_float < 0) {
		func_1172(var_0_bool);
		var_35_bool = true;
	} else {
		@Sleep(1.5, var_35_bool);
	}
	if(var_35_bool != 0) {
		func_1172(var_0_bool);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


void func_652(bool var_0_bool, cvector var_23_cvector, float var_24_float)
{
	cvector var_31_cvector;
	@GetPosition(var_31_cvector);
	cvector var_32_cvector;
	var_0_bool->GetPosition(var_32_cvector); //@t
	cvector var_33_cvector;
	@GetDirection(var_33_cvector);
	cvector var_37_cvector;
	cvector var_39_cvector;
	func_1199(var_39_cvector, (var_31_cvector - var_32_cvector));
	func_1199(var_37_cvector, (var_39_cvector + (var_33_cvector * 0.75)));
	cvector var_34_cvector;
	var_37_cvector = var_34_cvector;
	cvector var_35_cvector;
	float var_36_float;
	@FindLongestDir(var_35_cvector, var_36_float, var_34_cvector, var_24_float, 32, 7000.0);
	if((var_36_float - 100) < 0)
		var_36_float = 0;
	var_23_cvector = var_35_cvector * var_36_float;
}


void func_1040(bool var_31_bool, object var_32_object)
{
	bool var_34_bool;
	var_32_object->IsDead(var_34_bool);
	var_34_bool = var_31_bool;
}


// @pe
void func_1297(int var_18_int)
{
	bool var_20_bool;
	func_1650(var_20_bool);
	if(var_20_bool != 0)
		var_18_int = 2;
	else
		var_18_int = 0;
	
}


void func_1172(object var_85_object)
{
	cvector var_89_cvector;
	var_85_object->GetPosition(var_89_cvector);
	cvector var_90_cvector;
	@GetPosition(var_90_cvector);
	cvector var_91_cvector = var_89_cvector - var_90_cvector;
	var_92_float = GetByIndex(var_91_cvector, 0);
	var_93_float = GetByIndex(var_91_cvector, 2);
	@RotateAsync(var_92_float, var_93_float);
}


void func_1045(bool var_20_bool, object var_21_object)
{
	if(var_21_object == null) {
		var_20_bool = false;
		return 4;
	}
	bool var_27_bool = false;
	var_30_bool = IsFuncExist(var_21_object, "IsDead", 1);
	if(var_30_bool != 0) {
		bool var_31_bool; object var_32_object;
		var_21_object = var_32_object;
		func_1040(var_31_bool, var_32_object);
		if(var_31_bool != 0)
			var_27_bool = true;
	}
	if(var_27_bool != 0) {
		var_20_bool = false;
		return 4;
	}
	object var_24_object;
	@GetScene(var_24_object);
	if(var_24_object == null) {
		var_20_bool = false;
		return 4;
	}
	object var_25_object;
	var_21_object->GetScene(var_25_object);
	if(var_24_object != var_25_object) {
		var_20_bool = false;
		return 4;
	}
	var_20_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1306(object var_27_object)
{
	object var_28_object;
	var_27_object = var_28_object;
	TaskCall(2);
	func_391(var_29_object, var_28_object);
	TaskReturn();
}


void func_798(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


void func_1183(bool var_132_bool)
{
	bool var_134_bool;
	@IsLoaded(var_134_bool);
	var_134_bool = var_132_bool;
}


void func_33(object var_12_object)
{
	cvector var_23_cvector; cvector var_24_cvector; cvector var_25_cvector; cvector var_26_cvector; string var_27_string; object var_28_object; bool var_29_bool; bool var_30_bool; float var_31_float; cvector var_32_cvector;
	if(var_12_object == null) {
		func_120("fdie");
	} else {
		var_12_object->GetPosition(var_23_cvector);
		@GetPosition(var_24_cvector);
		@GetDirection(var_25_cvector);
		var_26_cvector = var_24_cvector - var_23_cvector;
		var_37_float = GetByIndex(var_26_cvector, 0);
		var_38_float = GetByIndex(var_25_cvector, 0);
		var_40_float = GetByIndex(var_26_cvector, 2);
		var_41_float = GetByIndex(var_25_cvector, 2);
		if(((var_37_float * var_38_float) + (var_40_float * var_41_float)) >= 0)
			var_27_string = "fdie";
		else
			var_27_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_12_object = var_28_object;
		var_48_bool = IsFuncExist(var_12_object, "GetScriptProperty", 2);
		if(var_48_bool != 0) {
			var_12_object->HasScriptProperty(var_29_bool, "Owner");
			if(var_29_bool != 0) {
				var_12_object->GetScriptProperty(var_28_object, "Owner");
				if(var_28_object == null)
					var_12_object = var_28_object;
			}
		}
		var_55_bool = IsFuncExist(var_28_object, "@GetEyesHeight", 1);
		if(var_55_bool != 0) {
			var_28_object->GetEyesHeight(var_31_float);
			var_32_cvector = [0.0, 0.0, 0.0];
			var_56_float = GetByIndex(var_32_cvector, 1);
			var_31_float = var_56_float;
			SetByIndex(var_32_cvector, 1) = var_56_float;
			@LookAsync(var_12_object, "head", var_32_cvector);
			var_30_bool = true;
		} else {
			var_30_bool = false;

		}
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


// @pe
void func_1314(int var_17_int, object var_18_object)
{
	object var_20_object;
	var_18_object = var_20_object;
	bool var_19_bool;
	func_1081(var_19_bool, var_20_object);
	if(var_19_bool != 0)
		var_17_int = 2;
	else
		var_17_int = 0;
	
}


// @pe
void func_1700(void)
{
	var_63_bool = GlobalVars[1];
	GlobalVars[1] = true;
	@SetRTEnvelope(50, 40);
}


void func_1188(object var_36_object)
{
	float var_39_float;
	var_36_object->GetEyesHeight(var_39_float);
	cvector var_40_cvector = [0.0, 0.0, 0.0];
	var_41_float = GetByIndex(var_40_cvector, 1);
	var_39_float = var_41_float;
	SetByIndex(var_40_cvector, 1) = var_41_float;
	@LookAsync(var_36_object, "head", var_40_cvector);
}


void func_682(bool var_0_bool, bool var_1_bool, object var_2_object, object var_71_object)
{
	cvector var_80_cvector; float var_81_float;
	cvector var_82_cvector;
	func_652(var_81_float, var_82_cvector, 1.7453294);
	cvector var_77_cvector;
	var_82_cvector = var_77_cvector;
	float var_78_float = var_77_cvector | var_77_cvector;
	if(var_78_float < 10000.0) {
		var_115_float = sqrt(var_78_float);
		@Trace("Can't retreat, distance: " + var_115_float);
		@Sleep(0.5);
		return 10;
	}
	var_118_float = GetByIndex(var_77_cvector, 0);
	var_119_float = GetByIndex(var_77_cvector, 2);
	@Rotate(var_118_float, var_119_float);
	cvector var_120_cvector;
	func_1008(var_120_cvector);
	@SetTimer(120, 0.5);
	
Label_715:
	bool var_79_bool;
	@MovePoint((var_120_cvector + var_77_cvector), 1, var_79_bool);
	if(var_79_bool != 0) {
		if(var_71_object == null) {
			goto Label_745;
		EMIT "GOTO 0x2e7";

		Label_745:
			for(;;) {
				return 10;
		}
			cvector var_128_cvector;
			func_652(var_81_float, var_128_cvector, 2.6179938);
			var_128_cvector = var_80_cvector;
			if((var_80_cvector | var_80_cvector) >= 10000.0) {
				cvector var_132_cvector;
				func_1008(var_132_cvector);
				var_1_bool = var_132_cvector + var_80_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_715; //@nz

	}
}


void func_555(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


// @pe
void func_1324(object var_60_object)
{
	object var_61_object;
	var_60_object = var_61_object;
	TaskCall(3);
	func_617(var_61_object);
	TaskReturn();
}


void func_814(bool var_0_bool, bool var_61_bool)
{
	cvector var_64_cvector;
	@GetDirection(var_64_cvector);
	cvector var_66_cvector;
	func_1013(var_66_cvector, var_0_bool);
	cvector var_65_cvector;
	var_66_cvector = var_65_cvector;
	float var_72_float; cvector var_73_cvector; cvector var_74_cvector;
	var_64_cvector = var_73_cvector;
	var_65_cvector = var_74_cvector;
	func_1209(var_72_float, var_73_cvector, var_74_cvector);
	var_61_bool = var_72_float >= -0.34202012;
}


void func_1199(cvector var_39_cvector, cvector var_40_cvector)
{
	float var_42_float = sqrt(var_40_cvector | var_40_cvector);
	if(var_42_float < 0.000001)
		var_39_cvector = [0.0, 0.0, 0.0];
	var_39_cvector = var_40_cvector / var_42_float;
}


// @pe
void func_1332(int var_41_int, object var_42_object)
{
	object var_44_object;
	var_42_object = var_44_object;
	bool var_43_bool;
	func_1081(var_43_bool, var_44_object);
	if(var_43_bool != 0)
		var_41_int = 2;
	else
		var_41_int = 0;
	
}


void func_1589(int var_53_int, string var_54_string)
{
	int var_56_int;
	@GetInvItemByName(var_56_int, var_54_string);
	var_56_int = var_53_int;
}


void func_182(void)
{
	bool var_132_bool;
	func_1183(var_132_bool);
	if(!var_132_bool) //@nz
		func_1359();
}


void func_1081(bool var_16_bool, object var_17_object)
{
	object var_21_object;
	var_17_object = var_21_object;
	bool var_20_bool;
	func_1045(var_20_bool, var_21_object);
	if(!var_20_bool) { //@nz
		var_16_bool = false;
		return 2;
	}
	bool var_38_bool; object var_39_object;
	func_1028(var_38_bool, var_39_object, "noaccess");
	if(!var_38_bool) { //@nz
		var_16_bool = true;
		return 2;
	}
	int var_19_int;
	var_39_object->GetProperty("noaccess", var_19_int);
	var_16_bool = var_19_int == 0;
}


void func_442(bool var_0_bool)
{
	func_1188(var_0_bool);
}


// @pe
void func_1209(float var_72_float, cvector var_73_cvector, cvector var_74_cvector)
{
	var_79_float = sqrt((var_73_cvector | var_73_cvector) * (var_74_cvector | var_74_cvector));
	var_72_float = (var_73_cvector | var_74_cvector) / var_79_float;
}


void func_1594(string var_146_string, int var_147_int)
{
	string var_149_string = "idle";
	if(var_147_int != 0)
		var_149_string += var_147_int;
	var_149_string = var_146_string;
}


// @pe
void func_1342(object var_83_object)
{
	object var_84_object;
	var_83_object = var_84_object;
	TaskCall(4);
	func_860(var_85_object, var_86_cvector, var_87_bool, var_84_object);
	TaskReturn();
}


void func_830(bool var_0_bool, cvector var_23_cvector, float var_24_float)
{
	cvector var_31_cvector;
	@GetPosition(var_31_cvector);
	cvector var_32_cvector;
	var_0_bool->GetPosition(var_32_cvector); //@t
	cvector var_33_cvector;
	@GetDirection(var_33_cvector);
	cvector var_37_cvector;
	cvector var_39_cvector;
	func_1199(var_39_cvector, (var_31_cvector - var_32_cvector));
	func_1199(var_37_cvector, (var_39_cvector + (var_33_cvector * 0.75)));
	cvector var_34_cvector;
	var_37_cvector = var_34_cvector;
	cvector var_35_cvector;
	float var_36_float;
	@FindLongestDir(var_35_cvector, var_36_float, var_34_cvector, var_24_float, 32, 7000.0);
	if((var_36_float - 100) < 0)
		var_36_float = 0;
	var_23_cvector = var_35_cvector * var_36_float;
}


void func_1601(void)
{
	var_14_bool = GlobalVars[1];
	GlobalVars[1] = false;
	func_1414(false);
}


// @pe
void func_1217(float var_62_float, cvector var_63_cvector, cvector var_64_cvector)
{
	var_65_float = GetByIndex(var_63_cvector, 0);
	var_66_float = GetByIndex(var_64_cvector, 0);
	var_68_float = GetByIndex(var_63_cvector, 2);
	var_69_float = GetByIndex(var_64_cvector, 2);
	var_62_float = (var_65_float * var_66_float) + (var_68_float * var_69_float);
}


// @pe
void func_1350(int var_12_int)
{
	var_12_int = 2;
}


// @pe
void func_1353(object var_20_object)
{
	object var_21_object;
	var_20_object = var_21_object;
	func_1609(var_21_object);
}


// @pe
void func_1226(float var_71_float, cvector var_72_cvector)
{
	var_73_float = GetByIndex(var_72_cvector, 0);
	var_74_float = GetByIndex(var_72_cvector, 0);
	var_76_float = GetByIndex(var_72_cvector, 2);
	var_77_float = GetByIndex(var_72_cvector, 2);
	var_71_float = sqrt((var_73_float * var_74_float) + (var_76_float * var_77_float));
}


void func_1609(object var_21_object)
{
	bool var_23_bool;
	var_24_bool = GlobalVars[1];
	if(var_24_bool != 0) {
		@IsOverrideActive(var_23_bool);
		if(!var_23_bool) //@nz
			@WorkWithCorpse(var_21_object);
	}
}


void func_1359(void)
{
}


void func_336(bool var_1_bool)
{
	@KillTimer(110);
	var_1_bool = false;
	if(var_0_bool != 0)
		func_1647();
	else
		@Stop();
	
}


void func_1360(int var_12_int, object var_13_object)
{
	bool var_15_bool;
	@CanSee(var_15_bool, var_13_object);
	if(var_15_bool != 0) {
		int var_17_int; object var_18_object;
		var_13_object = var_18_object;
		func_1314(var_17_int, var_18_object);
		var_17_int = var_12_int;
	}
	var_12_int = 0;
}


void func_976(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


void func_1105(object var_13_object, int var_14_int)
{
	object var_26_object; object var_27_object; cvector var_28_cvector; float var_29_float; string var_35_string;
	bool var_36_bool = false;
	if(var_14_int != 4) {
		if(var_14_int != 5)
			var_36_bool = true;
	}
	if(var_36_bool != 0) {
		@GetScene(var_26_object);
		@GetPosition(var_28_cvector);
		@GetEyesHeight(var_29_float);
		var_41_float = GetByIndex(var_28_cvector, 1);
		SetByIndex(var_28_cvector, 1) = (var_41_float + (var_29_float / 2));
		@AddActorByType(var_27_object, "scripted", var_26_object, var_28_cvector, [0.0, 0.0, 1.0], "blood.xml");
		var_27_object = null;
		var_26_object = null;
	}
	if(var_13_object == null)
		return 20;
	int var_30_int;
	@GetSecondaryAnimationType(var_30_int);
	if(var_30_int < 0)
		return 20;
	cvector var_31_cvector;
	var_13_object->GetPosition(var_31_cvector);
	cvector var_32_cvector;
	@GetPosition(var_32_cvector);
	cvector var_33_cvector;
	@GetDirection(var_33_cvector);
	cvector var_34_cvector = var_32_cvector - var_31_cvector;
	var_50_float = GetByIndex(var_34_cvector, 0);
	var_51_float = GetByIndex(var_33_cvector, 0);
	var_53_float = GetByIndex(var_34_cvector, 2);
	var_54_float = GetByIndex(var_33_cvector, 2);
	if(((var_50_float * var_51_float) + (var_53_float * var_54_float)) >= 0)
		var_35_string = "fhit";
	else
		var_35_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_35_string + "1"), (var_35_string + "2"), -10);
	
}


void func_1620(void)
{
	int var_142_int; bool var_143_bool;
	var_142_int = 0;
	
	for(;;) {
		string var_146_string; int var_147_int;
		var_142_int = var_147_int;
		func_1594(var_146_string, var_147_int);
		@HasAnimation(var_143_bool, "all", var_146_string);
		if(!var_143_bool) //@nz
			break;
		var_142_int += 1;
	}
	int var_144_int;
	@irand(var_144_int, var_142_int);
	string var_153_string; int var_154_int;
	var_144_int = var_154_int;
	func_1594(var_153_string, var_154_int);
	@PlayAnimation("all", var_153_string);
	@WaitForAnimEnd();
}


// @pe
void func_1236(float var_59_float, cvector var_60_cvector, cvector var_61_cvector)
{
	cvector var_63_cvector;
	var_60_cvector = var_63_cvector;
	cvector var_64_cvector;
	var_61_cvector = var_64_cvector;
	float var_62_float;
	func_1217(var_62_float, var_63_cvector, var_64_cvector);
	float var_71_float; cvector var_72_cvector;
	var_60_cvector = var_72_cvector;
	func_1226(var_71_float, var_72_cvector);
	float var_80_float; cvector var_81_cvector;
	var_61_cvector = var_81_cvector;
	func_1226(var_80_float, var_81_cvector);
	var_59_float = var_62_float / (var_71_float * var_80_float);
}


void func_860(bool var_0_bool, bool var_1_bool, object var_2_object, object var_84_object)
{
	cvector var_96_cvector; float var_97_float;
	cvector var_98_cvector;
	func_830(var_97_float, var_98_cvector, 1.7453294);
	cvector var_93_cvector;
	var_98_cvector = var_93_cvector;
	float var_94_float = var_93_cvector | var_93_cvector;
	if(var_94_float < 10000.0) {
		var_131_float = sqrt(var_94_float);
		@Trace("Can't retreat, distance: " + var_131_float);
		@Sleep(0.5);
		return 10;
	}
	var_134_float = GetByIndex(var_93_cvector, 0);
	var_135_float = GetByIndex(var_93_cvector, 2);
	@Rotate(var_134_float, var_135_float);
	cvector var_136_cvector;
	func_1008(var_136_cvector);
	@SetTimer(120, 0.5);
	
Label_893:
	bool var_95_bool;
	@MovePoint((var_136_cvector + var_93_cvector), 1, var_95_bool);
	if(var_95_bool != 0) {
		if(var_84_object == null) {
			goto Label_923;
		EMIT "GOTO 0x399";

		Label_923:
			for(;;) {
				return 10;
		}
			cvector var_144_cvector;
			func_830(var_97_float, var_144_cvector, 2.6179938);
			var_144_cvector = var_96_cvector;
			if((var_96_cvector | var_96_cvector) >= 10000.0) {
				cvector var_148_cvector;
				func_1008(var_148_cvector);
				var_1_bool = var_148_cvector + var_96_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_893; //@nz

	}
}


// @pe
void func_1373(object var_59_object)
{
	object var_60_object;
	var_59_object = var_60_object;
	func_1324(var_60_object);
}


void func_992(bool var_0_bool, bool var_61_bool)
{
	cvector var_64_cvector;
	@GetDirection(var_64_cvector);
	cvector var_66_cvector;
	func_1013(var_66_cvector, var_0_bool);
	cvector var_65_cvector;
	var_66_cvector = var_65_cvector;
	float var_72_float; cvector var_73_cvector; cvector var_74_cvector;
	var_64_cvector = var_73_cvector;
	var_65_cvector = var_74_cvector;
	func_1209(var_72_float, var_73_cvector, var_74_cvector);
	var_61_bool = var_72_float >= -0.34202012;
}


// @pe
void func_1379(int var_13_int)
{
	var_13_int = 0;
}


void func_1253(int var_24_int)
{
	float var_26_float;
	@GetGameTime(var_26_float);
	var_24_int = 1 + (var_26_float / 24);
}


// @pe
void func_1382(void)
{
}


void func_358(bool var_1_bool, object var_11_object)
{
	if(var_1_bool != 0)
		return 4;
	bool var_14_bool;
	@IsPlayerActor(var_11_object, var_14_bool);
	if(!var_14_bool) //@nz
		return 4;
	int var_18_int; object var_19_object;
	var_11_object = var_19_object;
	func_1297(var_19_object);
	int var_15_int;
	var_18_int = var_15_int;
	if(var_15_int > 0) {
		if(var_15_int > 1)
			func_336(var_15_int);
		object var_27_object;
		var_11_object = var_27_object;
		func_1306(var_27_object);
		var_1_bool = true;
		@SetTimer(110, 5.0);
	}
}


void func_1384(int var_21_int, int var_22_int)
{
	int var_37_int;
	if(var_21_int > var_22_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	int var_36_int = 0;
	if(var_21_int != var_22_int) {
		@irand(var_37_int, (var_22_int - var_21_int));
	} else if(var_21_int == 0) {
		return 8;
	}
	var_36_int += var_21_int;
	if(var_36_int == 0)
		return 8;
	int var_38_int;
	@GetInvItemByName(var_38_int, "Money");
	bool var_39_bool;
	@AddItem(var_39_bool, var_38_int, 0, var_36_int);
	
}


// @pe
void func_617(object var_61_object)
{
	@Face(var_61_object);
	@PlayAnimation("all", "attack_on");
	@WaitForAnimEnd();
	@PlayAnimation("all", "attack_stay");
	@WaitForAnimEnd();
	@PlayAnimation("all", "attack_off");
	@WaitForAnimEnd();
	@StopAsync();
	object var_71_object;
	func_682(var_63_cvector, var_64_bool, var_71_object, var_71_object);
}


// @pe
void func_1262(object var_10_object)
{
	object var_11_object;
	var_10_object = var_11_object;
	TaskCall(0);
	func_0(var_11_object);
	TaskReturn();
}


void func_1647(void)
{
	@StopAnimation();
}


void func_1008(cvector var_81_cvector)
{
	cvector var_83_cvector;
	@GetPosition(var_83_cvector);
	var_83_cvector = var_81_cvector;
}


void func_1650(bool var_20_bool)
{
	var_20_bool = true;
}


void func_1652(bool var_13_bool, object var_14_object, object var_15_object)
{
	bool var_17_bool;
	@CanSee(var_17_bool, var_14_object);
	bool var_18_bool = true;
	if(var_17_bool != 1) {
		float var_20_float; object var_21_object;
		func_1020(var_20_float, var_21_object);
		var_29_bool = var_20_float <= 250000.0;
		if(var_29_bool != 1)
			var_18_bool = false;
	}
	if(var_18_bool != 0) {
		@ReportReputationChange(var_21_object, var_15_object, -0.3);
		@SetProperty("ToDie", true);
		var_13_bool = true;
		return 2;
	}
	@CanSee(var_17_bool, var_15_object);
	bool var_33_bool = true;
	if(var_17_bool != 1) {
		float var_35_float; object var_36_object;
		var_15_object = var_36_object;
		func_1020(var_35_float, var_36_object);
		var_38_bool = var_35_float <= 250000.0;
		if(var_38_bool != 1)
			var_33_bool = false;
	}
	if(var_33_bool != 0) {
		@SetProperty("ToDie", true);
		var_13_bool = true;
		return 2;
	}
	var_13_bool = false;
}


void func_1013(cvector var_66_cvector, object var_67_object)
{
	cvector var_70_cvector;
	@GetPosition(var_70_cvector);
	cvector var_71_cvector;
	var_67_object->GetPosition(var_71_cvector);
	var_66_cvector = var_71_cvector - var_70_cvector;
}


// @pe
void func_120(string var_34_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_34_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_34_string);
	@RemoveEnvelope();
}


void func_1020(float var_20_float, object var_21_object)
{
	cvector var_25_cvector;
	@GetPosition(var_25_cvector);
	cvector var_26_cvector;
	var_21_object->GetPosition(var_26_cvector);
	var_20_float = (var_26_cvector - var_25_cvector) | (var_26_cvector - var_25_cvector);
}


