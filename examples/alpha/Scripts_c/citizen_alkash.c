// @GLOBALS: 0:object:,1:bool:

task task_0
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		@StopAnimation();
		@StopTrade();
		var_0_bool = true;
	}

}


task task_1
{
	void OnUse(bool var_0_bool, object var_1_object, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		func_2589(var_21_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			object var_24_object;
			var_17_bool = var_24_object;
			func_2592(var_24_object);
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		func_2598();
	}

	// @pe
	void OnHit(bool var_0_bool, object var_1_object, int var_2_int, float var_3_float, float var_4_float, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, int var_13_int, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool)
	{
	}

	// @pe
	void OnPropertyChange(bool var_0_bool, object var_1_object, string var_2_string, bool var_3_bool, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool)
	{
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
	}

}


maintask task_2
{
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		@SensePlayerOnly(true);
		func_2723();
		func_185();
	
		for(;;) {
			var_2_bool = false;
			func_398(var_15_string, var_16_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		func_2589(var_21_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_333(var_19_int);
			object var_27_object;
			var_17_bool = var_27_object;
			func_2592(var_27_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		int var_20_int;
		func_2507(var_20_int, var_21_object);
		int var_19_int;
		var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_333(var_19_int);
			object var_61_object;
			var_17_bool = var_61_object;
			func_2517(var_61_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool)
	{
		int var_20_int;
		object var_22_object;
		var_17_string = var_22_object;
		object var_23_object;
		var_18_bool = var_23_object;
		bool var_21_bool;
		func_2773(var_21_bool, var_22_object, var_23_object);
		if(var_21_bool != 0) {
			int var_56_int; object var_57_object;
			var_17_string = var_57_object;
			func_2525(var_56_int, var_57_object);
			var_56_int = var_20_int;
			if(var_20_int > 0) {
				if(var_20_int > 1)
					func_333(var_20_int);
				object var_93_object;
				var_17_string = var_93_object;
				func_2532(var_93_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		func_2538(var_21_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_333(var_19_int);
			object var_27_object;
			var_17_bool = var_27_object;
			func_2541();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, string var_5_string, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool)
	{
		string var_22_string;
		var_18_bool = var_22_string;
		object var_23_object;
		var_17_string = var_23_object;
		int var_21_int;
		func_2543(var_21_int, var_22_string, var_23_object);
		int var_20_int;
		var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_333(var_20_int);
			string var_70_string; object var_71_object;
			var_18_bool = var_70_string;
			var_17_string = var_71_object;
			func_2555(var_70_string, var_71_object);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_18_object;
		func_358(var_18_object, var_18_object);
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_18_object;
		func_358(var_18_object, var_18_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, int var_4_int, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		if(var_17_bool != 110) {
		}
		var_2_bool = false;
		@KillTimer(110);
		@ResetAAS();
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		func_333(var_16_bool);
		func_2598();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		func_333(var_17_bool);
		object var_19_object;
		var_17_bool = var_19_object;
		func_2452();
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		@RequestClearPath(var_17_bool);
	}

	void OnActorStuck(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		@Stop();
	}

}


task task_3
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		func_2589(var_21_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_662();
			object var_26_object;
			var_17_bool = var_26_object;
			func_2592(var_26_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		int var_20_int;
		func_2507(var_20_int, var_21_object);
		int var_19_int;
		var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_662();
			object var_60_object;
			var_17_bool = var_60_object;
			func_2517(var_60_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool)
	{
		int var_20_int;
		object var_22_object;
		var_17_string = var_22_object;
		object var_23_object;
		var_18_bool = var_23_object;
		bool var_21_bool;
		func_2773(var_21_bool, var_22_object, var_23_object);
		if(var_21_bool != 0) {
			int var_56_int; object var_57_object;
			var_17_string = var_57_object;
			func_2525(var_56_int, var_57_object);
			var_56_int = var_20_int;
			if(var_20_int > 0) {
				if(var_20_int > 1)
					func_662();
				object var_92_object;
				var_17_string = var_92_object;
				func_2532(var_92_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		func_2538(var_21_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_662();
			object var_26_object;
			var_17_bool = var_26_object;
			func_2541();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, string var_5_string, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool)
	{
		string var_22_string;
		var_18_bool = var_22_string;
		object var_23_object;
		var_17_string = var_23_object;
		int var_21_int;
		func_2543(var_21_int, var_22_string, var_23_object);
		int var_20_int;
		var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_662();
			string var_69_string; object var_70_object;
			var_18_bool = var_69_string;
			var_17_string = var_70_object;
			func_2555(var_69_string, var_70_object);
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		func_662();
		func_2598();
	}

}


task task_4
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		func_2589(var_21_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_831();
			object var_28_object;
			var_17_bool = var_28_object;
			func_2592(var_28_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		int var_20_int;
		func_2507(var_20_int, var_21_object);
		int var_19_int;
		var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_831();
			object var_62_object;
			var_17_bool = var_62_object;
			func_2517(var_62_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool)
	{
		int var_20_int;
		object var_22_object;
		var_17_string = var_22_object;
		object var_23_object;
		var_18_bool = var_23_object;
		bool var_21_bool;
		func_2773(var_21_bool, var_22_object, var_23_object);
		if(var_21_bool != 0) {
			int var_56_int; object var_57_object;
			var_17_string = var_57_object;
			func_2525(var_56_int, var_57_object);
			var_56_int = var_20_int;
			if(var_20_int > 0) {
				if(var_20_int > 1)
					func_831();
				object var_94_object;
				var_17_string = var_94_object;
				func_2532(var_94_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		func_2538(var_21_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_831();
			object var_28_object;
			var_17_bool = var_28_object;
			func_2541();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, string var_6_string, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool)
	{
		string var_22_string;
		var_18_bool = var_22_string;
		object var_23_object;
		var_17_string = var_23_object;
		int var_21_int;
		func_2543(var_21_int, var_22_string, var_23_object);
		int var_20_int;
		var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_831();
			string var_71_string; object var_72_object;
			var_18_bool = var_71_string;
			var_17_string = var_72_object;
			func_2555(var_71_string, var_72_object);
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		func_831();
		object var_20_object;
		var_17_bool = var_20_object;
		func_2452();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		if(var_17_bool != 111)
			return 4;
		bool var_24_bool;
		func_2098(var_24_bool, var_0_bool);
		if(!var_24_bool) { //@nz
			func_831();
			return 4;
		}
		cvector var_20_cvector;
		@GetDirection(var_20_cvector);
		cvector var_61_cvector;
		func_1966(var_61_cvector, var_0_bool);
		cvector var_21_cvector;
		var_61_cvector = var_21_cvector;
		float var_67_float; cvector var_68_cvector; cvector var_69_cvector;
		var_20_cvector = var_68_cvector;
		var_21_cvector = var_69_cvector;
		func_2400(var_67_float, var_68_cvector, var_69_cvector);
		if(var_67_float < 0.49999997)
			func_2189(var_0_bool);
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		func_831();
		func_2598();
	}

}


task task_5
{
}


task task_6
{
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		func_1529(var_16_bool);
		func_2598();
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, int var_12_int, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		if(var_17_bool != 0)
			return 0;
		bool var_20_bool;
		func_1545(var_20_bool, var_1_bool);
		if(!var_20_bool) //@nz
			var_0_bool = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		@RequestClearPath(var_17_bool);
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		func_1529(var_17_bool);
		object var_19_object;
		var_17_bool = var_19_object;
		func_2452();
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, int var_17_int, int var_18_int)
	{
		if(1 != 0) {
			func_2346();
			if(var_18_int == 15021) {
				object var_23_object = var_1_bool;
				func_2599(var_0_bool);
			}
			if(var_17_int == 15020) {
				func_1727(var_18_int, "Neutral");
				var_0_bool->SetMessage(13794); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(13795, -1, 15021); //@t
				var_0_bool->AddReply(13796, -1, 15022); //@t
				return 0;
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=553";
			EMIT "Call 0x6bf";
			EMIT "Pop(1)";
			EMIT "Push((int) 14699)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=569";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=580";
			EMIT "Pop(0)";
			EMIT "PushEmpty(bool, object)";
			EMIT "Stack[-1] = Stack[1 + Tasks[-1].StackPointer]";
			EMIT "Call 0xa2c";
			EMIT "Pop(1)";
			EMIT "IF (Stack[-1] == 0) GOTO 0x707; Pop(1)";
			EMIT "Push((int) 14700)";
			EMIT "Push((int) 15941)";
			EMIT "Push((int) 15940)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=593";
			EMIT "Pop(3)";
			}
			if(var_17_int == 15951) {
				func_1727(var_18_int, "Neutral");
				var_0_bool->SetMessage(14710); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14711, 15953, 15952); //@t
				var_0_bool->AddReply(14718, 15955, 15960); //@t
				return 0;
			}
			if(var_17_int == 15953) {
				func_1727(var_18_int, "Neutral");
				var_0_bool->SetMessage(14712); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14713, 15955, 15954); //@t
				var_0_bool->AddReply(14717, 15955, 15958); //@t
				return 0;
			}
			if(var_17_int == 15955) {
				func_1727(var_18_int, "Neutral");
				var_0_bool->SetMessage(14714); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14715, -1, 15956); //@t
				var_0_bool->AddReply(14716, -1, 15957); //@t
				return 0;
			}
			if(var_17_int == 15941) {
				func_1727(var_18_int, "Neutral");
				var_0_bool->SetMessage(14701); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14702, 15943, 15942); //@t
				var_0_bool->AddReply(14706, 15943, 15946); //@t
				return 0;
			}
			if(var_17_int == 15943) {
				func_1727(var_18_int, "Neutral");
				var_0_bool->SetMessage(14703); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14705, -1, 15945); //@t
				var_0_bool->AddReply(14704, -1, 15944); //@t
				return 0;
			}
			var_3_bool = true;
			bool var_100_bool;
			func_2721(var_100_bool);
			if(var_100_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x6d0";
	
	}

}


void OnPropertyChange(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, string var_18_string)
{
	float var_20_float;
	if(var_18_string == "health") {
		@GetProperty("health", var_20_float);
		if(var_20_float <= 0)
			@SignalDeath(var_17_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object)
{
	object var_18_object;
	var_17_object = var_18_object;
	func_2431(var_18_object);
}


// @pe
void OnHit(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, int var_18_int, float var_19_float, float var_20_float)
{
	object var_21_object;
	var_17_object = var_21_object;
	int var_22_int;
	var_18_int = var_22_int;
	float var_23_float;
	var_19_float = var_23_float;
	func_2122(var_22_int, var_23_float);
}


// @pe
void func_0(bool var_0_bool)
{
	@DoTrade();
	
	for(;;) {
		@WaitForAnimEnd();
		@PlayAnimation("all", "idle");
		if(false != 0)
			return 0;
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_2565(int var_26_int, object var_27_object)
{
	object var_29_object;
	var_27_object = var_29_object;
	bool var_28_bool;
	func_2098(var_28_bool, var_29_object);
	if(!var_28_bool) { //@nz
		var_26_int = 0;
		return 0;
	}
	bool var_63_bool; object var_64_object;
	var_27_object = var_64_object;
	func_2770(var_64_object);
	if(var_63_bool != 0)
		var_26_int = 2;
	else
		var_26_int = 0;
	
}


// @pe
void func_1545(bool var_20_bool, object var_21_object)
{
	object var_23_object;
	var_21_object = var_23_object;
	bool var_22_bool;
	func_2098(var_22_bool, var_23_object);
	var_22_bool = var_20_bool;
}


void func_2057(bool var_37_bool, object var_38_object)
{
	bool var_40_bool;
	var_38_object->IsDead(var_40_bool);
	var_40_bool = var_37_bool;
}


void func_2062(bool var_26_bool, object var_27_object)
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
		func_2057(var_37_bool, var_38_object);
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


void func_1552(string var_176_string)
{
	var_176_string = "walk";
}


void func_1554(string var_177_string)
{
	var_177_string = "run";
}


void func_1556(bool var_0_bool, int var_35_int, object var_36_object)
{
	var_0_bool = var_36_object;
	bool var_46_bool; object var_47_object;
	var_36_object = var_47_object;
	func_2205(var_46_bool, var_47_object);
	if(!var_46_bool) { //@nz
		var_35_int = -2;
		return 8;
	}
	object var_42_object;
	@CreateDialog(var_42_object);
	int var_87_int;
	func_2717(var_87_int);
	var_42_object->SetNPCName(var_87_int);
	string var_88_string;
	func_2719(var_88_string);
	var_42_object->SetPhoto(var_88_string);
	int var_89_int;
	func_2616(var_89_int);
	var_42_object->SetPlayerName(var_89_int);
	bool var_43_bool;
	@IsOverrideActive(var_43_bool);
	if(var_43_bool != 0) {
		var_35_int = -2;
		return 8;
	}
	@DoDialog(var_42_object);
	object var_98_object; object var_99_object;
	var_36_object = var_98_object;
	var_42_object = var_99_object;
	TaskCall(8);
	func_1619(var_100_object, var_101_object, var_102_string, var_103_bool, var_98_object, var_99_object);
	TaskReturn();
	bool var_45_bool;
	var_42_object->IsDialogEnd(var_45_bool);
	
	for(;;) {
		var_135_bool = !var_45_bool; //@nz
		if(var_135_bool == 0) goto Label_1608;
		@sync();
		var_42_object->IsDialogEnd(var_45_bool);
	}
	
Label_1608:
	object var_136_object;
	var_36_object = var_136_object;
	func_2261();
	@StopDialog(var_42_object);
	var_42_object->GetReturnValue(-1);
	int var_44_int = var_35_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_22(object var_19_object)
{
	object var_20_object;
	var_19_object = var_20_object;
	func_55(var_20_object);
	object var_70_object;
	var_19_object = var_70_object;
	func_2819();
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_2583(object var_75_object)
{
	object var_76_object;
	var_75_object = var_76_object;
	func_2517(var_76_object);
}


// @pe
void func_2589(int var_20_int)
{
	var_20_int = 2;
}


// @pe
void func_2592(object var_28_object)
{
	object var_29_object;
	func_2730(var_29_object, var_29_object);
}


void func_2598(void)
{
}


// @pe
void func_2599(object var_24_object)
{
	var_24_object->SetReturnValue(1000);
}


// @pe
void func_2604(void)
{
0xa2c: PushEmpty()
0xa2d: PushEmpty(int, string)
0xa2e: Stack[-1] = "KnowTvirin" // @poff=931
0xa2f: Call 0x971
}


void func_2098(bool var_22_bool, object var_23_object)
{
	object var_27_object;
	var_23_object = var_27_object;
	bool var_26_bool;
	func_2062(var_26_bool, var_27_object);
	if(!var_26_bool) { //@nz
		var_22_bool = false;
		return 2;
	}
	bool var_44_bool; object var_45_object;
	func_1981(var_44_bool, var_45_object, "noaccess");
	if(!var_44_bool) { //@nz
		var_22_bool = true;
		return 2;
	}
	int var_25_int;
	var_45_object->GetProperty("noaccess", var_25_int);
	var_22_bool = var_25_int == 0;
}


void func_55(object var_20_object)
{
	cvector var_31_cvector; cvector var_32_cvector; cvector var_33_cvector; cvector var_34_cvector; string var_35_string; object var_36_object; bool var_37_bool; bool var_38_bool; float var_39_float; cvector var_40_cvector;
	if(var_20_object == null) {
		func_142("fdie");
	} else {
		var_20_object->GetPosition(var_31_cvector);
		@GetPosition(var_32_cvector);
		@GetDirection(var_33_cvector);
		var_34_cvector = var_32_cvector - var_31_cvector;
		var_45_float = GetByIndex(var_34_cvector, 0);
		var_46_float = GetByIndex(var_33_cvector, 0);
		var_48_float = GetByIndex(var_34_cvector, 2);
		var_49_float = GetByIndex(var_33_cvector, 2);
		if(((var_45_float * var_46_float) + (var_48_float * var_49_float)) >= 0)
			var_35_string = "fdie";
		else
			var_35_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_20_object = var_36_object;
		var_56_bool = IsFuncExist(var_20_object, "GetScriptProperty", 2);
		if(var_56_bool != 0) {
			var_20_object->HasScriptProperty(var_37_bool, "Owner");
			if(var_37_bool != 0) {
				var_20_object->GetScriptProperty(var_36_object, "Owner");
				if(var_36_object == null)
					var_20_object = var_36_object;
			}
		}
		var_63_bool = IsFuncExist(var_36_object, "@GetEyesHeight", 1);
		if(var_63_bool != 0) {
			var_36_object->GetEyesHeight(var_39_float);
			var_40_cvector = [0.0, 0.0, 0.0];
			var_64_float = GetByIndex(var_40_cvector, 1);
			var_39_float = var_64_float;
			SetByIndex(var_40_cvector, 1) = var_64_float;
			@LookAsync(var_20_object, "head", var_40_cvector);
			var_38_bool = true;
		} else {
			var_38_bool = false;

		}
		@PlayAnimation("all", var_35_string);
		@WaitForAnimEnd();
		if(var_38_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_35_string);
		@RemoveEnvelope();
		var_36_object = null;
	}
	
}


void func_2616(int var_89_int)
{
	int var_91_int;
	@GetVariable("player", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 200001;
		return 2;
	EMIT "GOTO 0xa47";
	}
	if(var_91_int == 1) {
		var_89_int = 200002;
		return 2;
	}
	var_89_int = 200003;
}


void func_2633(int var_77_int, int var_78_int)
{
	int var_93_int;
	if(var_77_int > var_78_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	int var_92_int = 0;
	if(var_77_int != var_78_int) {
		@irand(var_93_int, (var_78_int - var_77_int));
	} else if(var_77_int == 0) {
		return 8;
	}
	var_92_int += var_77_int;
	if(var_92_int == 0)
		return 8;
	int var_94_int;
	@GetInvItemByName(var_94_int, "Money");
	bool var_95_bool;
	@AddItem(var_95_bool, var_94_int, 0, var_92_int);
	
}


void func_2122(object var_21_object, int var_22_int)
{
	object var_34_object; object var_35_object; cvector var_36_cvector; float var_37_float; string var_43_string;
	bool var_44_bool = false;
	if(var_22_int != 4) {
		if(var_22_int != 5)
			var_44_bool = true;
	}
	if(var_44_bool != 0) {
		@GetScene(var_34_object);
		@GetPosition(var_36_cvector);
		@GetEyesHeight(var_37_float);
		var_49_float = GetByIndex(var_36_cvector, 1);
		SetByIndex(var_36_cvector, 1) = (var_49_float + (var_37_float / 2));
		@AddActorByType(var_35_object, "scripted", var_34_object, var_36_cvector, [0.0, 0.0, 1.0], "blood.xml");
		var_35_object = null;
		var_34_object = null;
	}
	if(var_21_object == null)
		return 20;
	int var_38_int;
	@GetSecondaryAnimationType(var_38_int);
	if(var_38_int < 0)
		return 20;
	cvector var_39_cvector;
	var_21_object->GetPosition(var_39_cvector);
	cvector var_40_cvector;
	@GetPosition(var_40_cvector);
	cvector var_41_cvector;
	@GetDirection(var_41_cvector);
	cvector var_42_cvector = var_40_cvector - var_39_cvector;
	var_58_float = GetByIndex(var_42_cvector, 0);
	var_59_float = GetByIndex(var_41_cvector, 0);
	var_61_float = GetByIndex(var_42_cvector, 2);
	var_62_float = GetByIndex(var_41_cvector, 2);
	if(((var_58_float * var_59_float) + (var_61_float * var_62_float)) >= 0)
		var_43_string = "fhit";
	else
		var_43_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_43_string + "1"), (var_43_string + "2"), -10);
	
}


void func_593(void)
{
	int var_76_int; int var_77_int; bool var_78_bool; float var_79_float; bool var_80_bool;
	@WaitForAnimEnd();
	bool var_81_bool;
	func_2200(var_81_bool);
	if(!var_81_bool) //@nz
		return 14;
	int var_83_int;
	func_2473(var_83_int);
	int var_74_int;
	var_83_int = var_74_int;
	int var_75_int = 0;
	
	for(;;) {
		bool var_96_bool = false;
		if(var_75_int < 5) {
			bool var_99_bool;
			func_2200(var_99_bool);
			if(var_99_bool != 0)
				var_96_bool = true;
		}
		if(var_96_bool != 0) {
			@irand(var_76_int, 3);
			if(var_76_int == 0) {
				if(var_74_int == 0) goto Label_640;
				@irand(var_77_int, var_74_int);
				string var_105_string; int var_106_int;
				var_77_int = var_106_int;
				func_2466(var_105_string, var_106_int);
				@PlayAnimation("all", var_105_string);
				@WaitForAnimEnd(var_78_bool);
				if(!var_78_bool) { //@nz
				} else {
			} else {
			if(var_76_int == 1) {
				@rand(var_79_float, 4);
				@Sleep((var_79_float + 1), var_80_bool);
				if(!var_80_bool) { //@nz
					goto Label_661;
				}
			} else if(var_75_int != 0) {
				goto Label_661;
			}
			}
				var_75_int += 1;
			}
		}
	Label_661:
		return 14;

	}
	
}


// @pe
void func_1619(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_98_object, object var_99_object)
{
	var_0_bool = var_99_object;
	var_1_bool = var_98_object;
	var_3_bool = false;
	if(1 != 0) {
		func_1727(var_99_object, "Neutral");
		var_0_bool->SetMessage(13794); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(13795, -1, 15021); //@t
		var_0_bool->AddReply(13796, -1, 15022); //@t
		goto Label_1697;
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=553";
	EMIT "Call 0x6bf";
	EMIT "Pop(1)";
	EMIT "Push((int) 14699)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=569";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=580";
	EMIT "Pop(0)";
	EMIT "PushEmpty(bool, object)";
	EMIT "Stack[-1] = Stack[1 + Tasks[-1].StackPointer]";
	EMIT "Call 0xa2c";
	EMIT "Pop(1)";
	EMIT "IF (Stack[-1] == 0) GOTO 0x680; Pop(1)";
	EMIT "Push((int) 14700)";
	EMIT "Push((int) 15941)";
	EMIT "Push((int) 15940)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=593";
	EMIT "Pop(3)";
	}
Label_1697:
	bool var_127_bool;
	func_2721(var_127_bool);
	if(var_127_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_bool != 0) {
			} else {
				func_2317(var_2_bool);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_bool != 0) {
				goto Label_1726;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1726:
		return 0;

	}
	
}


void func_1112(bool var_0_bool, float var_290_float, int var_291_int)
{
	object var_295_object; float var_296_float; float var_297_float;
	@GetVictim((var_290_float * 0.9), var_295_object);
	@ReportAttack(var_0_bool);
	if(var_295_object == var_0_bool) {
		float var_301_float; object var_302_object; int var_303_int;
		var_295_object = var_302_object;
		var_291_int = var_303_int;
		func_901(var_303_int);
		var_301_float = var_296_float;
		float var_304_float; object var_305_object; float var_306_float; int var_307_int;
		var_295_object = var_305_object;
		int var_308_int; object var_309_object; int var_310_int;
		var_295_object = var_309_object;
		var_291_int = var_310_int;
		func_904(var_310_int);
		var_308_int = var_307_int;
		func_1993(var_304_float, var_305_object, var_306_float, var_307_int);
		var_304_float = var_297_float;
		int var_357_int;
		func_1390(var_357_int);
		@ReportHit(var_0_bool, var_357_int, var_297_float, var_306_float);
		object var_358_object; float var_359_float;
		var_295_object = var_358_object;
		var_297_float = var_359_float;
		func_1392();
	}
}
EMIT "Stack[-3] = 0";


void func_2663(void)
{
	@ClearSubContainer(0);
	int var_80_int;
	func_2422(var_80_int);
	func_2633(30, (50 + (var_80_int * 30)));
}


void func_2679(void)
{
	bool var_21_bool;
	@ClearSubContainer(0);
	int var_22_int;
	@irand(var_22_int, 2);
	if(var_22_int == 0) {
		int var_27_int;
		func_2712(var_27_int, "bandage");
		@AddItem(var_21_bool, var_27_int, 0, 1);
	}
	@irand(var_22_int, 2);
	if(var_22_int == 0) {
		int var_36_int;
		func_2712(var_36_int, "tourniquet");
		@AddItem(var_21_bool, var_36_int, 0, 1);
	}
}


void func_1151(bool var_0_bool, bool var_1_bool, bool var_261_bool, float var_262_float)
{
	int var_265_int;
	@irand(var_265_int, var_1_bool);
	var_265_int += 1;
	@Face(var_0_bool);
	@SetAttackState(true);
	@PlayAnimation("all", ("attack_begin" + var_265_int));
	@WaitForAnimEnd();
	bool var_266_bool;
	func_1358(var_265_int, var_266_bool);
	bool var_287_bool;
	func_2098(var_287_bool, var_0_bool);
	if(!var_287_bool) { //@nz
		@StopAsync();
		var_261_bool = false;
		return 4;
	}
	float var_290_float; int var_291_int;
	var_262_float = var_290_float;
	var_265_int = var_291_int;
	func_1112(var_266_bool, var_290_float, var_291_int);
	@HasAnimation(var_266_bool, "all", ("attack_middle" + var_265_int));
	if(var_266_bool != 0) {
		@PlayAnimation("all", ("attack_middle" + var_265_int));
		@WaitForAnimEnd();
		bool var_367_bool;
		func_2098(var_367_bool, var_0_bool);
		if(!var_367_bool) { //@nz
			@StopAsync();
			var_261_bool = false;
			return 4;
		}
		float var_370_float; int var_371_int;
		var_262_float = var_370_float;
		var_265_int = var_371_int;
		func_1112(var_266_bool, var_370_float, var_371_int);
	}
	@SetAttackState(false);
	@PlayAnimation("all", ("attack_end" + var_265_int));
	bool var_376_bool;
	func_1231(var_376_bool, 0.75);
	@StopAsync();
	var_261_bool = true;
}


void func_2189(object var_93_object)
{
	cvector var_97_cvector;
	var_93_object->GetPosition(var_97_cvector);
	cvector var_98_cvector;
	@GetPosition(var_98_cvector);
	cvector var_99_cvector = var_97_cvector - var_98_cvector;
	var_100_float = GetByIndex(var_99_cvector, 0);
	var_101_float = GetByIndex(var_99_cvector, 2);
	@RotateAsync(var_100_float, var_101_float);
}


// @pe
void func_142(string var_42_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_42_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_42_string);
	@RemoveEnvelope();
}


void func_662(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_2200(bool var_40_bool)
{
	bool var_42_bool;
	@IsLoaded(var_42_bool);
	var_42_bool = var_40_bool;
}


void func_2712(int var_27_int, string var_28_string)
{
	int var_30_int;
	@GetInvItemByName(var_30_int, var_28_string);
	var_30_int = var_27_int;
}


void func_667(bool var_0_bool, object var_69_object)
{
	var_0_bool = var_69_object;
	bool var_76_bool;
	func_718(var_76_bool);
	cvector var_74_cvector;
	@GetDirection(var_74_cvector);
	cvector var_84_cvector;
	func_1966(var_84_cvector, var_0_bool);
	cvector var_75_cvector;
	var_84_cvector = var_75_cvector;
	float var_90_float; cvector var_91_cvector; cvector var_92_cvector;
	var_74_cvector = var_91_cvector;
	var_75_cvector = var_92_cvector;
	func_2400(var_90_float, var_91_cvector, var_92_cvector);
	if(var_90_float < 0) {
		func_2189(var_0_bool);
		var_76_bool = true;
	} else {
		@Sleep(1.5, var_76_bool);
	}
	if(var_76_bool != 0) {
		func_2189(var_0_bool);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


void func_2205(bool var_46_bool, object var_47_object)
{
	cvector var_57_cvector;
	var_47_object->GetPosition(var_57_cvector);
	float var_56_float;
	var_47_object->GetEyesHeight(var_56_float);
	var_64_float = GetByIndex(var_57_cvector, 1);
	SetByIndex(var_57_cvector, 1) = (var_64_float + var_56_float);
	cvector var_58_cvector;
	@GetPosition(var_58_cvector);
	@GetEyesHeight(var_56_float);
	var_65_float = GetByIndex(var_58_cvector, 1);
	SetByIndex(var_58_cvector, 1) = (var_65_float + var_56_float);
	cvector var_59_cvector = var_57_cvector - var_58_cvector;
	var_66_float = GetByIndex(var_59_cvector, 1);
	SetByIndex(var_59_cvector, 1) = (float)0;
	var_68_float = sqrt(var_59_cvector | var_59_cvector);
	var_59_cvector /= var_68_float;
	cvector var_60_cvector = -var_59_cvector;
	cvector var_71_cvector;
	func_2353(var_71_cvector, (var_60_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_61_cvector = ((var_59_cvector * 70) + (var_71_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_63_bool;
	@IsOverrideActive(var_63_bool);
	if(var_63_bool != 0)
		var_46_bool = false;
	@StopWorld();
	@CameraTransit((var_58_cvector + var_61_cvector), var_60_cvector);
	var_84_float = GetByIndex(var_61_cvector, 0);
	var_85_float = GetByIndex(var_61_cvector, 2);
	@Rotate(var_84_float, var_85_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_46_bool = true;
}


void func_2717(int var_87_int)
{
	var_87_int = 3342;
}


void func_2719(string var_88_string)
{
	var_88_string = "ui/NPC_None.png";
}


void func_2721(bool var_20_bool)
{
	var_20_bool = false;
}


void func_2723(void)
{
	var_18_bool = GlobalVars[1];
	GlobalVars[1] = false;
	func_2679();
}


void func_2730(object var_29_object, object var_37_object)
{
	bool var_31_bool;
	var_32_bool = GlobalVars[1];
	if(var_32_bool != 0) {
		@IsOverrideActive(var_31_bool);
		if(!var_31_bool) //@nz
			@WorkWithCorpse(var_29_object);
		return 2;
	EMIT "GOTO 0xacf";
	}
	int var_35_int; object var_36_object;
	var_29_object = var_36_object;
	TaskCall(7);
	func_1556(var_37_object, var_35_int, var_36_object);
	TaskReturn();
	if(1000 == var_37_object) {
		bool var_138_bool; object var_139_object;
		var_29_object = var_139_object;
		func_2265(var_138_bool, var_139_object);
		if(!var_138_bool) //@nz
			return 2;
		object var_168_object;
		var_29_object = var_168_object;
		TaskCall(0);
		func_0(var_168_object);
		TaskReturn();
		object var_173_object;
		var_29_object = var_173_object;
		func_2313();
	}
}


void func_185(void)
{
	bool var_40_bool;
	func_2200(var_40_bool);
	if(!var_40_bool) //@nz
		func_2598();
}


// @pe
void func_1727(bool var_2_bool, string var_28_string)
{
	bool var_29_bool;
	func_2721(var_29_bool);
	if(!var_29_bool) //@nz
		return 0;
	if(var_28_string == var_2_bool)
		return 0;
	string var_32_string;
	func_2317(var_32_string);
	var_2_bool = var_32_string;
}


void func_718(bool var_0_bool)
{
	func_2335(var_0_bool);
}


void func_1231(bool var_376_bool, float var_377_float)
{
	float var_380_float; bool var_381_bool;
	@rand(var_380_float);
	if(var_380_float < var_377_float) {

		for(;;) {
			@IsAnimationPlaying(var_381_bool);
			if(!var_381_bool) { //@nz
			} else {
				bool var_384_bool;
				func_1295(var_381_bool, var_384_bool);
				if(var_384_bool != 0) {
					var_376_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_376_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
}


void func_2768(bool var_62_bool)
{
	var_62_bool = false;
}


// @pe
void func_2770(bool var_63_bool)
{
	var_63_bool = true;
}


void func_2773(bool var_21_bool, object var_22_object, object var_23_object)
{
	object var_29_object;
	var_23_object = var_29_object;
	bool var_28_bool;
	func_1981(var_28_bool, var_29_object, "class");
	if(!var_28_bool) { //@nz
		var_21_bool = false;
		return 4;
	}
	string var_26_string;
	var_23_object->GetProperty("class", var_26_string);
	if(var_26_string == "rat") {
		var_21_bool = false;
		return 4;
	EMIT "GOTO 0xaed";
	}
	if(var_26_string == "dog") {
		var_21_bool = false;
		return 4;
	}
	bool var_27_bool;
	@CanSee(var_27_bool, var_22_object);
	bool var_43_bool = true;
	if(var_27_bool != 1) {
		float var_45_float; object var_46_object;
		func_1973(var_45_float, var_46_object);
		var_54_bool = var_45_float <= 250000.0;
		if(var_54_bool != 1)
			var_43_bool = false;
	}
	if(var_43_bool != 0) {
		@ReportReputationChange(var_46_object, var_23_object, -0.3);
		var_21_bool = true;
		return 4;
	}
	var_21_bool = false;
}


// @pe
void func_2261(void)
{
	@CameraSwitchToNormal();
}


void func_2265(bool var_138_bool, object var_139_object)
{
	cvector var_149_cvector;
	var_139_object->GetPosition(var_149_cvector);
	float var_148_float;
	var_139_object->GetEyesHeight(var_148_float);
	var_156_float = GetByIndex(var_149_cvector, 1);
	SetByIndex(var_149_cvector, 1) = (var_156_float + var_148_float);
	cvector var_150_cvector;
	@GetPosition(var_150_cvector);
	@GetEyesHeight(var_148_float);
	var_157_float = GetByIndex(var_150_cvector, 1);
	SetByIndex(var_150_cvector, 1) = (var_157_float + var_148_float);
	cvector var_151_cvector = var_149_cvector - var_150_cvector;
	var_158_float = GetByIndex(var_151_cvector, 1);
	SetByIndex(var_151_cvector, 1) = (float)0;
	var_160_float = sqrt(var_151_cvector | var_151_cvector);
	var_151_cvector /= var_160_float;
	cvector var_152_cvector = -var_151_cvector;
	cvector var_153_cvector = (var_151_cvector * 70) - [0.0, 10.0, 0.0];
	bool var_155_bool;
	@IsOverrideActive(var_155_bool);
	if(var_155_bool != 0)
		var_138_bool = false;
	@StopWorld();
	@CameraTransit((var_150_cvector + var_153_cvector), var_152_cvector);
	var_165_float = GetByIndex(var_153_cvector, 0);
	var_166_float = GetByIndex(var_153_cvector, 2);
	@Rotate(var_165_float, var_166_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_138_bool = true;
}


void func_1255(bool var_0_bool, bool var_218_bool, float var_219_float)
{
	bool var_225_bool; cvector var_226_cvector; cvector var_227_cvector; cvector var_228_cvector; float var_229_float;
	
	for(;;) {
		@IsAnimationPlaying(var_225_bool);
		if(!var_225_bool) //@nz
			break;
		bool var_231_bool;
		func_1295(var_229_float, var_231_bool);
		if(var_231_bool != 0) {
			var_218_bool = true;
			return 10;
		}
		bool var_256_bool;
		func_2098(var_256_bool, var_0_bool);
		if(!var_256_bool) { //@nz
			var_218_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_226_cvector); //@t
		@GetPFPosition(var_227_cvector);
		var_228_cvector = var_226_cvector - var_227_cvector;
		var_229_float = var_228_cvector | var_228_cvector;
		if(var_229_float < (var_219_float * var_219_float)) {
			bool var_261_bool; float var_262_float;
			var_219_float = var_262_float;
			func_1151(var_228_cvector, var_229_float, var_261_bool, var_262_float);
			var_218_bool = true;
			return 10;
		}
		@sync();
	}
	var_218_bool = false;
}


// @pe
void func_2819(void)
{
	var_71_bool = GlobalVars[1];
	GlobalVars[1] = true;
	@SetRTEnvelope(50, 40);
	func_2663();
}


// @pe
void func_2313(void)
{
	@CameraSwitchToNormal();
}


void func_2317(string var_32_string)
{
	@Trace("playing " + var_32_string);
	float var_35_float;
	float var_36_float;
	@lshGetAnimTimes(var_32_string, var_35_float, var_36_float);
	@lshPlayAnimation(var_35_float, var_36_float);
	@Trace("start: " + var_35_float);
	@Trace("end: " + var_36_float);
}


void func_1295(bool var_0_bool, bool var_231_bool)
{
	cvector var_237_cvector; cvector var_238_cvector;
	bool var_242_bool;
	func_2098(var_242_bool, var_0_bool);
	if(!var_242_bool) { //@nz
		var_231_bool = false;
		return 10;
	}
	bool var_245_bool;
	float var_241_float;
	func_1347(var_241_float, var_245_bool);
	if(var_245_bool != 0) {
		var_0_bool->GetPFPosition(var_237_cvector); //@t
		@GetPFPosition(var_238_cvector);
		var_0_bool->GetAttackDistance(var_241_float); //@t
		var_241_float += 50;
		if(((var_237_cvector - var_238_cvector) | (var_237_cvector - var_238_cvector)) <= (var_241_float * var_241_float)) {
			func_1328(var_241_float);
			var_231_bool = true;
			return 10;
		}
	}
	var_231_bool = false;
}


void func_2335(object var_77_object)
{
	float var_80_float;
	var_77_object->GetEyesHeight(var_80_float);
	cvector var_81_cvector = [0.0, 0.0, 0.0];
	var_82_float = GetByIndex(var_81_cvector, 1);
	var_80_float = var_82_float;
	SetByIndex(var_81_cvector, 1) = var_82_float;
	@LookAsync(var_77_object, "head", var_81_cvector);
}


void func_2346(void)
{
	bool var_20_bool;
	func_2721(var_20_bool);
	if(var_20_bool != 0)
		@lshStopSpeech();
}


void func_1328(bool var_0_bool)
{
	@Face(var_0_bool);
	@PlayAnimation("all", "bjump");
	cvector var_251_cvector;
	var_0_bool->GetPFPosition(var_251_cvector); //@t
	cvector var_252_cvector;
	@GetPFPosition(var_252_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	@SetSpeed([0.0, 0.0, 0.0]);
}


void func_2353(cvector var_71_cvector, cvector var_72_cvector)
{
	float var_75_float = sqrt(var_72_cvector | var_72_cvector);
	if(var_75_float < 0.000001)
		var_71_cvector = [0.0, 0.0, 0.0];
	var_71_cvector = var_72_cvector / var_75_float;
}


// @pe
void func_2363(float var_340_float, float var_341_float, float var_342_float)
{
	if(var_341_float < var_342_float)
		var_341_float = var_340_float;
	else
		var_342_float = var_340_float;
	
}


void func_831(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


// @pe
void func_2370(float var_350_float, float var_351_float, float var_352_float, float var_353_float)
{
	if(var_351_float < var_352_float) {
		var_352_float = var_350_float;
		return 0;
	}
	if(var_351_float > var_353_float) {
		var_353_float = var_350_float;
		return 0;
	}
	var_351_float = var_350_float;
}


void func_1347(bool var_0_bool, bool var_210_bool)
{
	bool var_212_bool;
	var_215_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_215_bool != 0) {
		var_0_bool->IsAttacking(var_212_bool); //@t
		var_212_bool = var_210_bool;
	}
	var_210_bool = false;
}


// @pe
void func_2381(float var_70_float, cvector var_71_cvector, cvector var_72_cvector)
{
	var_73_float = GetByIndex(var_71_cvector, 0);
	var_74_float = GetByIndex(var_72_cvector, 0);
	var_76_float = GetByIndex(var_71_cvector, 2);
	var_77_float = GetByIndex(var_72_cvector, 2);
	var_70_float = (var_73_float * var_74_float) + (var_76_float * var_77_float);
}


void func_333(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_462(var_16_string, var_17_bool);
}


void func_1358(bool var_2_bool, object var_4_object)
{
	int var_275_int;
	if(!var_2_bool) //@nz
		return 4;
	if(var_4_object != 0) {
		if((var_4_object + -1) > 0)
			return 4;
	}
	float var_274_float;
	@rand(var_274_float);
	float var_281_float;
	func_1396(var_281_float);
	if(var_274_float < var_281_float) {
		@irand(var_275_int, var_2_bool);
		@Speak("attack" + (var_275_int + 1));
		int var_286_int;
		func_1394(var_286_int);
		var_4_object = var_286_int;
	}
}


void func_341(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_469(var_21_bool, var_22_int);
}


// @pe
void func_2390(float var_79_float, cvector var_80_cvector)
{
	var_81_float = GetByIndex(var_80_cvector, 0);
	var_82_float = GetByIndex(var_80_cvector, 0);
	var_84_float = GetByIndex(var_80_cvector, 2);
	var_85_float = GetByIndex(var_80_cvector, 2);
	var_79_float = sqrt((var_81_float * var_82_float) + (var_84_float * var_85_float));
}


// @pe
void func_2400(float var_67_float, cvector var_68_cvector, cvector var_69_cvector)
{
	cvector var_71_cvector;
	var_68_cvector = var_71_cvector;
	cvector var_72_cvector;
	var_69_cvector = var_72_cvector;
	float var_70_float;
	func_2381(var_70_float, var_71_cvector, var_72_cvector);
	float var_79_float; cvector var_80_cvector;
	var_68_cvector = var_80_cvector;
	func_2390(var_79_float, var_80_cvector);
	float var_88_float; cvector var_89_cvector;
	var_69_cvector = var_89_cvector;
	func_2390(var_88_float, var_89_cvector);
	var_67_float = var_70_float / (var_79_float * var_88_float);
}


void func_358(bool var_2_bool, object var_18_object)
{
	bool var_23_bool; object var_24_object;
	func_2098(var_23_bool, var_24_object);
	if(!var_23_bool) //@nz
		return 4;
	if(var_2_bool != 0)
		return 4;
	bool var_21_bool;
	@IsPlayerActor(var_24_object, var_21_bool);
	if(!var_21_bool) //@nz
		return 4;
	int var_60_int; object var_61_object;
	var_18_object = var_61_object;
	func_2490(var_61_object);
	int var_22_int;
	var_60_int = var_22_int;
	if(var_22_int > 0) {
		if(var_22_int > 1)
			func_341(var_22_int);
		object var_68_object;
		var_18_object = var_68_object;
		func_2499(var_68_object);
		var_2_bool = true;
		@SetTimer(110, 10.0);
	}
}


void func_1390(int var_357_int)
{
	var_357_int = 0;
}


// @pe
void func_1392(void)
{
}


void func_2417(void)
{
0x971: PushEmpty(int, int)
0x972: @ GetVariable(Stack[-3], Stack[-1])
0x973: Pop(0)
0x974: Stack[-1] = Stack[-4]
0x975: Return(); Pop(2)
}


void func_1394(int var_286_int)
{
	var_286_int = 1;
}


void func_1396(float var_281_float)
{
	var_281_float = 0.5;
}


void func_2422(int var_80_int)
{
	float var_82_float;
	@GetGameTime(var_82_float);
	var_80_int = 1 + (var_82_float / 24);
}


void func_1405(bool var_0_bool, bool var_1_bool, bool var_134_bool, object var_135_object, float var_136_float, float var_137_float, bool var_138_bool, bool var_139_bool)
{
	bool var_150_bool; object var_152_object; cvector var_153_cvector; cvector var_154_cvector; float var_156_float; object var_157_object;
	var_0_bool = false;
	var_1_bool = var_135_object;
	bool var_151_bool;
	var_139_bool = var_151_bool;
	
	for(;;) {
		bool var_158_bool; object var_159_object;
		var_135_object = var_159_object;
		func_1545(var_158_bool, var_159_object);
		if(!var_158_bool) { //@nz
			var_134_bool = false;
			return 16;
		}
		var_135_object->GetPosition(var_153_cvector);
		@GetPosition(var_154_cvector);
		var_156_float = (var_153_cvector - var_154_cvector) | (var_153_cvector - var_154_cvector);
		bool var_163_bool = false;
		if(var_137_float > 0) {
			if(var_156_float > (var_137_float * var_137_float))
				var_163_bool = true;
		}
		if(var_163_bool != 0) {
			@Stop();
			var_134_bool = false;
			return 16;
		}
		if(var_156_float > (var_136_float * var_136_float)) {
			var_135_object->GetPFPosition(var_153_cvector);
			@FindPathTo(var_157_object, var_153_cvector);
			if(var_157_object != null) {
				var_157_object = var_152_object;
				var_157_object = null;
			}
			if(var_152_object != null) {
				if(var_151_bool == 0) goto Label_1458;
				var_151_bool = false;
				@RotatePath(var_152_object, var_150_bool);
				if(!var_150_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_176_string;
						func_1552(var_176_string);
						string var_177_string;
						func_1554(var_177_string);
						@FollowPath(var_152_object, var_138_bool, var_150_bool, var_176_string, var_177_string);
						if(!var_150_bool) { //@nz
							if(var_0_bool == 0) goto Label_1477;
							var_152_object = null;
						}
					EMIT "GOTO 0x5c6";

					Label_1477:
						} else {
					var_152_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_150_bool);
					if(!var_150_bool) { //@nz
						if(var_0_bool != 0) {
							var_152_object = null;
							goto Label_1505;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1505;
		}
			var_157_object = null;
			goto Label_1503;

		Label_1503:
			var_152_object = null;

		}
	Label_1505:
		for(;;) {
			var_134_bool = !var_0_bool;
			return 16;

			}
	}
	
}


// @pe
void func_893(object var_77_object)
{
	object var_83_object;
	func_907(var_78_object, var_79_int, var_80_int, var_81_bool, var_82_int, var_83_object, var_83_object, true, 180.0);
}


// @pe
void func_2431(object var_18_object)
{
	object var_19_object;
	var_18_object = var_19_object;
	TaskCall(1);
	func_22(var_19_object);
	TaskReturn();
}


// @pe
void func_901(float var_301_float)
{
	var_301_float = 0.05;
}


// @pe
void func_904(int var_308_int)
{
	var_308_int = 0;
}


void func_907(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_83_object, bool var_84_bool, float var_85_float, bool var_140_bool)
{
	bool var_96_bool; bool var_97_bool; float var_98_float; cvector var_99_cvector; cvector var_100_cvector; bool var_101_bool; bool var_102_bool; float var_104_float; float var_105_float;
	var_1_bool = 0;
	
	for(;;) {
		@HasAnimation(var_96_bool, "all", ("attack_begin" + (var_1_bool + 1)));
		if(!var_96_bool) { //@nz
		} else {
			var_1_bool += 1;
		}
		var_2_bool = 0;

		for(;;) {
			@IsExisting3DSound(var_97_bool, ("attack" + (var_2_bool + 1)));
			if(!var_97_bool) { //@nz
			} else {
									var_2_bool += 1;
			}
			var_4_object = 0;
			var_119_bool = IsFuncExist(var_83_object, "@GetAttackDistance", 1);
			if(var_119_bool != 0) {
				var_83_object->GetAttackDistance(var_98_float);
				var_98_float += 50;
			} else {
								var_85_float = var_98_float;

			}
			if(var_98_float >= 150)
				var_98_float = 150;
			var_3_bool = false;
			var_0_bool = var_83_object;
			@IsPlayerActor(var_0_bool, var_101_bool);
			if(var_84_bool != 0)
				var_102_bool = false;
			else
				var_102_bool = true;

			for(;;) {
				bool var_124_bool = false;
				bool var_125_bool;
				func_2098(var_125_bool, var_0_bool);
				if(var_125_bool != 0) {
					if(!var_3_bool) //@nz
						var_124_bool = true;
				}
				if(var_124_bool != 0) {
					var_0_bool->GetPFPosition(var_99_cvector); //@t
					@GetPFPosition(var_100_cvector);
					var_104_float = (var_99_cvector - var_100_cvector) | (var_99_cvector - var_100_cvector);
					if(var_104_float >= ((400.0 + var_98_float) * (400.0 + var_98_float))) {
						bool var_134_bool; float var_136_float;
						var_98_float = var_136_float;
						TaskCall(6);
						func_1405(var_140_bool, var_141_object, var_134_bool, var_0_bool, var_136_float, 3000.0, true, false);
						TaskReturn();
						if(!var_140_bool) { //@nz
						} else {
							var_102_bool = false;
					} else {
					if(var_104_float >= (var_85_float * var_85_float)) {
						if(!var_102_bool) { //@nz
							func_2189(var_0_bool);
							@PlayAnimation("all", "attack_on");
							@WaitForAnimEnd();
							@StopAsync();
							var_102_bool = true;
						}
						@rand(var_105_float);
						bool var_207_bool;
						var_209_bool = var_105_float < 0.6;
						if(var_209_bool != 1) {
							bool var_210_bool;
							func_1347(true, var_210_bool);
							if(var_210_bool != 1)
								var_207_bool = false;
						}
						if(var_207_bool != 0) {
							@Face(var_0_bool);
							@PlayAnimation("all", "attack_stay");
							bool var_218_bool; float var_219_float;
							func_1255(var_105_float, var_218_bool, var_219_float);
							@StopAsync();
						} else {
							@Face(var_0_bool);
							@PlayAnimation("all", "fjump");
							@WaitForAnimEnd();
							@SetSpeed([0.0, 0.0, 0.0]);
							@Stop();
							@StopAsync();
							bool var_388_bool;
							func_1347(var_105_float, var_388_bool);
							var_389_bool = !var_388_bool; //@nz
							if(var_389_bool == 0) goto Label_1085;
							bool var_390_bool;
							func_2098(var_390_bool, var_0_bool);
							if(!var_390_bool) { //@nz
								goto Label_1095;
							}
							var_0_bool->GetPFPosition(var_99_cvector); //@t
							@GetPFPosition(var_100_cvector);
							var_104_float = (var_99_cvector - var_100_cvector) | (var_99_cvector - var_100_cvector);
							if(!(var_104_float < (var_219_float * var_219_float))) goto Label_1085;
							bool var_395_bool; float var_396_float;
							var_85_float = var_396_float;
							func_1151(var_104_float, var_105_float, var_395_bool, var_396_float);
							var_397_bool = !var_395_bool; //@nz
							if(var_397_bool == 0) goto Label_1085;
							goto Label_1095;
					}
						bool var_398_bool; float var_399_float;
						var_85_float = var_399_float;
						func_1151(var_104_float, var_105_float, var_398_bool, var_399_float);
						if(!var_398_bool) { //@nz
							goto Label_1095;
						}
						var_102_bool = true;

					}
				Label_1085:
					goto Label_1094;
					}
					Label_1094:
					}
				}
			Label_1095:
				@WaitForAnimEnd();
				if(var_3_bool != 0)
					return 20;
				@PlayAnimation("all", "attack_off");
				@WaitForAnimEnd();
				if(var_101_bool != 0)
					@Sleep(2.0);
				return 20;

			}

		}

	}
}


void func_398(bool var_0_bool, bool var_1_bool)
{
	float var_51_float; cvector var_52_cvector; cvector var_53_cvector; float var_54_float; bool var_55_bool; object var_56_object; bool var_57_bool;
	@rand(var_51_float, 0.5);
	@Sleep(var_51_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_410:
				@GetPosition(var_53_cvector);
				@GetCameraFarDistance(var_54_float);
				@GetRandomPFPointInCircle(var_52_cvector, var_53_cvector, (var_54_float * 2.5), var_55_bool);
				if(var_55_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_410;
			}
				var_1_bool = false;
		}
		}
		goto Label_427;

	Label_427:
		@FindShiftedPathTo(var_56_object, var_52_cvector);
		if(var_56_object != null) {
			@RotatePath(var_56_object, var_57_bool);
			if(var_57_bool != 0) {
				bool var_65_bool;
				func_476(var_65_bool);
				@FollowPath(var_56_object, var_65_bool, var_57_bool);
				var_56_object = null;
				if(var_57_bool != 0) {
					TaskCall(3);
					func_593();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_56_object = null;
	}
	
}


void func_2466(string var_89_string, int var_90_int)
{
	string var_92_string = "idle";
	if(var_90_int != 0)
		var_92_string += var_90_int;
	var_92_string = var_89_string;
}


// @pe
void func_1958(string var_332_string, int var_333_int)
{
	if(var_333_int == 1)
		var_332_string = "fire";
	var_332_string = "phys";
}


void func_2473(int var_83_int)
{
	int var_86_int; bool var_87_bool;
	var_86_int = 0;
	
	for(;;) {
		string var_89_string; int var_90_int;
		var_86_int = var_90_int;
		func_2466(var_89_string, var_90_int);
		@HasAnimation(var_87_bool, "all", var_89_string);
		if(!var_87_bool) //@nz
			break;
		var_86_int += 1;
	}
	var_86_int = var_83_int;
}


void func_1966(cvector var_61_cvector, object var_62_object)
{
	cvector var_65_cvector;
	@GetPosition(var_65_cvector);
	cvector var_66_cvector;
	var_62_object->GetPosition(var_66_cvector);
	var_61_cvector = var_66_cvector - var_65_cvector;
}


void func_1973(float var_45_float, object var_46_object)
{
	cvector var_50_cvector;
	@GetPosition(var_50_cvector);
	cvector var_51_cvector;
	var_46_object->GetPosition(var_51_cvector);
	var_45_float = (var_51_cvector - var_50_cvector) | (var_51_cvector - var_50_cvector);
}


// @pe
void func_2490(int var_60_int)
{
	bool var_62_bool;
	func_2768(var_62_bool);
	if(var_62_bool != 0)
		var_60_int = 2;
	else
		var_60_int = 0;
	
}


void func_1981(bool var_44_bool, object var_45_object, string var_46_string)
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


// @pe
void func_2499(object var_68_object)
{
	object var_69_object;
	var_68_object = var_69_object;
	TaskCall(4);
	func_667(var_70_object, var_69_object);
	TaskReturn();
}


void func_1993(float var_304_float, object var_305_object, float var_306_float, int var_307_int)
{
	int var_317_int; int var_319_int;
	object var_324_object;
	var_305_object = var_324_object;
	bool var_323_bool;
	func_1981(var_323_bool, var_324_object, "health");
	if(!var_323_bool) //@nz
		var_304_float = 0.0;
	bool var_327_bool; object var_328_object;
	func_1981(var_327_bool, var_328_object, "armor");
	if(!var_327_bool) //@nz
		var_317_int = 0;
	else
		var_328_object->GetProperty("armor", var_317_int);
	string var_332_string; int var_333_int;
	var_307_int = var_333_int;
	func_1958(var_332_string, var_333_int);
	string var_318_string = "armor_" + var_332_string;
	bool var_336_bool; object var_337_object; string var_338_string;
	var_305_object = var_337_object;
	func_1981(var_336_bool, var_337_object, var_338_string);
	if(!var_336_bool) //@nz
		var_319_int = 0;
	else
		var_305_object->GetProperty(var_338_string, var_319_int);

	float var_340_float;
	func_2363(var_340_float, ((var_317_int + var_319_int) / 100.0), (float)1);
	float var_320_float;
	var_340_float = var_320_float;
	float var_321_float;
	var_305_object->GetProperty("health", var_321_float);
	float var_350_float;
	func_2370(var_350_float, (var_321_float - (var_306_float * (1 - var_320_float))), (float)0, (float)1);
	var_305_object->SetProperty("health", var_350_float);
	float var_322_float = var_304_float;
	
}


// @pe
void func_2507(int var_58_int, object var_59_object)
{
	object var_61_object;
	var_59_object = var_61_object;
	bool var_60_bool;
	func_2098(var_60_bool, var_61_object);
	if(var_60_bool != 0)
		var_58_int = 2;
	else
		var_58_int = 0;
	
}


void func_462(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


// @pe
void func_2517(object var_76_object)
{
	object var_77_object;
	var_76_object = var_77_object;
	TaskCall(5);
	func_893(var_77_object);
	TaskReturn();
}


void func_469(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	@Stop();
	@StopGroup0();
}


void func_476(bool var_65_bool)
{
	var_65_bool = false;
}


// @pe
void func_2525(int var_56_int, object var_57_object)
{
	object var_59_object;
	var_57_object = var_59_object;
	int var_58_int;
	func_2507(var_58_int, var_59_object);
	var_58_int = var_56_int;
}


// @pe
void func_2532(object var_94_object)
{
	object var_95_object;
	var_94_object = var_95_object;
	func_2517(var_95_object);
}


// @pe
void func_2538(int var_20_int)
{
	var_20_int = 0;
}


// @pe
void func_2541(void)
{
}


// @pe
void func_2543(int var_21_int, string var_22_string, object var_23_object)
{
	if(var_22_string == "killme") {
		int var_26_int; object var_27_object;
		var_23_object = var_27_object;
		func_2565(var_26_int, var_27_object);
		var_26_int = var_21_int;
		return 0;
	}
	var_21_int = 0;
}


void func_1529(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_2555(string var_71_string, object var_72_object)
{
	if(var_71_string == "killme") {
		object var_75_object;
		var_72_object = var_75_object;
		func_2583(var_75_object);
	}
}


