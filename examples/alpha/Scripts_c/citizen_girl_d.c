// @GLOBALS: 0:bool:

task task_0
{
	void OnUse(object actor, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		object var_14_object;
		var_10_bool = var_14_object;
		func_1638(var_14_object);
		int var_12_int;
		int var_13_int = var_12_int;
		if(var_12_int > 0) {
			object var_17_object;
			var_10_bool = var_17_object;
			func_1641(var_17_object);
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		func_1647();
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
	}

	// @pe
	void OnDeath(object actor, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
	}

}


maintask task_1
{
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		@SensePlayerOnly(true);
		func_1727();
		func_163();
	
		for(;;) {
			var_2_bool = false;
			func_376(var_8_cvector, var_9_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		object var_14_object;
		var_10_bool = var_14_object;
		func_1638(var_14_object);
		int var_12_int;
		int var_13_int = var_12_int;
		if(var_12_int > 0) {
			if(var_12_int > 1)
				func_311(var_12_int);
			object var_20_object;
			var_10_bool = var_20_object;
			func_1641(var_20_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		object var_14_object;
		var_10_bool = var_14_object;
		int var_13_int;
		func_1592(var_13_int, var_14_object);
		int var_12_int;
		var_13_int = var_12_int;
		if(var_12_int > 0) {
			if(var_12_int > 1)
				func_311(var_12_int);
			object var_54_object;
			var_10_bool = var_54_object;
			func_1602(var_54_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		int var_13_int;
		object var_15_object;
		var_10_cvector = var_15_object;
		object var_16_object;
		var_11_bool = var_16_object;
		bool var_14_bool;
		func_1748(var_14_bool, var_15_object, var_16_object);
		if(var_14_bool != 0) {
			int var_47_int; object var_48_object;
			var_10_cvector = var_48_object;
			func_1610(var_47_int, var_48_object);
			var_47_int = var_13_int;
			if(var_13_int > 0) {
				if(var_13_int > 1)
					func_311(var_13_int);
				object var_82_object;
				var_10_cvector = var_82_object;
				func_1620(var_82_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		object var_14_object;
		var_10_bool = var_14_object;
		func_1628(var_14_object);
		int var_12_int;
		int var_13_int = var_12_int;
		if(var_12_int > 0) {
			if(var_12_int > 1)
				func_311(var_12_int);
			object var_20_object;
			var_10_bool = var_20_object;
			func_1631();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		string var_15_string;
		var_11_bool = var_15_string;
		object var_16_object;
		var_10_cvector = var_16_object;
		func_1633(var_16_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_311(var_13_int);
			string var_22_string; object var_23_object;
			var_11_bool = var_22_string;
			var_10_cvector = var_23_object;
			func_1636();
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		object var_11_object;
		func_336(var_11_object, var_11_object);
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		object var_11_object;
		func_336(var_11_object, var_11_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, int var_3_int, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		if(var_10_bool != 110) {
		}
		var_2_bool = false;
		@KillTimer(110);
		@ResetAAS();
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		func_311(var_9_bool);
		func_1647();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		func_311(var_10_bool);
		object var_12_object;
		var_10_bool = var_12_object;
		func_1537();
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		@RequestClearPath(var_10_bool);
	}

	void OnActorStuck(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		@Stop();
	}

}


task task_2
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		object var_14_object;
		var_10_bool = var_14_object;
		func_1638(var_14_object);
		int var_12_int;
		int var_13_int = var_12_int;
		if(var_12_int > 0) {
			if(var_12_int > 1)
				func_640();
			object var_19_object;
			var_10_bool = var_19_object;
			func_1641(var_19_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		object var_14_object;
		var_10_bool = var_14_object;
		int var_13_int;
		func_1592(var_13_int, var_14_object);
		int var_12_int;
		var_13_int = var_12_int;
		if(var_12_int > 0) {
			if(var_12_int > 1)
				func_640();
			object var_53_object;
			var_10_bool = var_53_object;
			func_1602(var_53_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		int var_13_int;
		object var_15_object;
		var_10_cvector = var_15_object;
		object var_16_object;
		var_11_bool = var_16_object;
		bool var_14_bool;
		func_1748(var_14_bool, var_15_object, var_16_object);
		if(var_14_bool != 0) {
			int var_47_int; object var_48_object;
			var_10_cvector = var_48_object;
			func_1610(var_47_int, var_48_object);
			var_47_int = var_13_int;
			if(var_13_int > 0) {
				if(var_13_int > 1)
					func_640();
				object var_81_object;
				var_10_cvector = var_81_object;
				func_1620(var_81_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		object var_14_object;
		var_10_bool = var_14_object;
		func_1628(var_14_object);
		int var_12_int;
		int var_13_int = var_12_int;
		if(var_12_int > 0) {
			if(var_12_int > 1)
				func_640();
			object var_19_object;
			var_10_bool = var_19_object;
			func_1631();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		string var_15_string;
		var_11_bool = var_15_string;
		object var_16_object;
		var_10_cvector = var_16_object;
		func_1633(var_16_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_640();
			string var_21_string; object var_22_object;
			var_11_bool = var_21_string;
			var_10_cvector = var_22_object;
			func_1636();
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		func_640();
		func_1647();
	}

}


task task_3
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		object var_14_object;
		var_10_bool = var_14_object;
		func_1638(var_14_object);
		int var_12_int;
		int var_13_int = var_12_int;
		if(var_12_int > 0) {
			if(var_12_int > 1)
				func_809();
			object var_21_object;
			var_10_bool = var_21_object;
			func_1641(var_21_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		object var_14_object;
		var_10_bool = var_14_object;
		int var_13_int;
		func_1592(var_13_int, var_14_object);
		int var_12_int;
		var_13_int = var_12_int;
		if(var_12_int > 0) {
			if(var_12_int > 1)
				func_809();
			object var_55_object;
			var_10_bool = var_55_object;
			func_1602(var_55_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		int var_13_int;
		object var_15_object;
		var_10_cvector = var_15_object;
		object var_16_object;
		var_11_bool = var_16_object;
		bool var_14_bool;
		func_1748(var_14_bool, var_15_object, var_16_object);
		if(var_14_bool != 0) {
			int var_47_int; object var_48_object;
			var_10_cvector = var_48_object;
			func_1610(var_47_int, var_48_object);
			var_47_int = var_13_int;
			if(var_13_int > 0) {
				if(var_13_int > 1)
					func_809();
				object var_83_object;
				var_10_cvector = var_83_object;
				func_1620(var_83_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		object var_14_object;
		var_10_bool = var_14_object;
		func_1628(var_14_object);
		int var_12_int;
		int var_13_int = var_12_int;
		if(var_12_int > 0) {
			if(var_12_int > 1)
				func_809();
			object var_21_object;
			var_10_bool = var_21_object;
			func_1631();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, string var_5_string, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		string var_15_string;
		var_11_bool = var_15_string;
		object var_16_object;
		var_10_cvector = var_16_object;
		func_1633(var_16_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_809();
			string var_23_string; object var_24_object;
			var_11_bool = var_23_string;
			var_10_cvector = var_24_object;
			func_1636();
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		func_809();
		object var_13_object;
		var_10_bool = var_13_object;
		func_1537();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, int var_4_int, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		if(var_10_bool != 111)
			return 4;
		bool var_17_bool;
		func_1335(var_17_bool, var_0_bool);
		if(!var_17_bool) { //@nz
			func_809();
			return 4;
		}
		cvector var_13_cvector;
		@GetDirection(var_13_cvector);
		cvector var_54_cvector;
		func_1267(var_54_cvector, var_0_bool);
		cvector var_14_cvector;
		var_54_cvector = var_14_cvector;
		float var_60_float; cvector var_61_cvector; cvector var_62_cvector;
		var_13_cvector = var_61_cvector;
		var_14_cvector = var_62_cvector;
		func_1490(var_60_float, var_61_cvector, var_62_cvector);
		if(var_60_float < 0.49999997)
			func_1426(var_0_bool);
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		func_809();
		func_1647();
	}

}


task task_4
{
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		func_1052(var_9_bool);
		func_1647();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, int var_7_int, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		cvector var_15_cvector; float var_16_float; cvector var_17_cvector; float var_18_float;
		if(var_10_bool != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_bool = true;
		} else {
			@GetDirection(var_15_cvector);
			@FindDirLength(var_16_float, var_15_cvector, 7000.0);
			cvector var_24_cvector;
			func_906(var_18_float, var_24_cvector, 1.7453294);
			var_24_cvector = var_17_cvector;
			var_18_float = var_17_cvector | var_17_cvector;
			bool var_54_bool = false;
			if(var_18_float >= 10000.0) {
				bool var_57_bool;
				var_61_bool = var_18_float >= ((var_16_float * var_16_float) * 2.25);
				if(var_61_bool != 1) {
					bool var_62_bool;
					func_1068(true, var_62_bool);
					if(var_62_bool != 1)
						var_57_bool = false;
				}
				if(var_57_bool != 0)
					var_54_bool = true;
			}
			if(var_54_bool == 0) goto Label_1051;
			@Stop();
			cvector var_82_cvector;
			func_1262(var_82_cvector);
			var_1_bool = var_82_cvector + var_17_cvector;
		}
	Label_1051:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		func_1052(var_10_bool);
		object var_12_object;
		var_10_bool = var_12_object;
		func_1537();
	}

}


task task_5
{
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, int var_10_int)
	{
		cvector var_15_cvector; float var_16_float; cvector var_17_cvector; float var_18_float;
		if(var_10_int != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_bool = true;
		} else {
			@GetDirection(var_15_cvector);
			@FindDirLength(var_16_float, var_15_cvector, 7000.0);
			cvector var_24_cvector;
			func_1084(var_18_float, var_24_cvector, 1.7453294);
			var_24_cvector = var_17_cvector;
			var_18_float = var_17_cvector | var_17_cvector;
			bool var_54_bool = false;
			if(var_18_float >= 10000.0) {
				bool var_57_bool;
				var_61_bool = var_18_float >= ((var_16_float * var_16_float) * 2.25);
				if(var_61_bool != 1) {
					bool var_62_bool;
					func_1246(true, var_62_bool);
					if(var_62_bool != 1)
						var_57_bool = false;
				}
				if(var_57_bool != 0)
					var_54_bool = true;
			}
			if(var_54_bool == 0) goto Label_1229;
			@Stop();
			cvector var_82_cvector;
			func_1262(var_82_cvector);
			var_1_bool = var_82_cvector + var_17_cvector;
		}
	Label_1229:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object)
	{
		func_1230(var_10_object);
		object var_12_object;
		var_10_object = var_12_object;
		func_1537();
	}

}


void OnPropertyChange(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, string var_11_string)
{
	float var_13_float;
	if(var_11_string == "health") {
		@GetProperty("health", var_13_float);
		if(var_13_float <= 0)
			@SignalDeath(var_10_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object)
{
	object var_11_object;
	var_10_object = var_11_object;
	func_1516(var_11_object);
}


// @pe
void OnHit(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, int var_11_int, float var_12_float, float var_13_float)
{
	object var_14_object;
	var_10_object = var_14_object;
	int var_15_int;
	var_11_int = var_15_int;
	float var_16_float;
	var_12_float = var_16_float;
	func_1359(var_15_int, var_16_float);
}


void func_640(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_0(object var_12_object)
{
	object var_13_object;
	var_12_object = var_13_object;
	func_33(var_13_object);
	object var_63_object;
	var_12_object = var_63_object;
	func_1788();
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1282(bool var_39_bool, object var_40_object, string var_41_string)
{
	var_46_bool = IsFuncExist(var_40_object, "HasProperty", 2);
	if(!var_46_bool) { //@nz
		var_39_bool = false;
		return 2;
	}
	bool var_43_bool;
	var_40_object->HasProperty(var_41_string, var_43_bool);
	var_43_bool = var_39_bool;
}


void func_645(bool var_0_bool, object var_62_object)
{
	var_0_bool = var_62_object;
	bool var_69_bool;
	func_696(var_69_bool);
	cvector var_67_cvector;
	@GetDirection(var_67_cvector);
	cvector var_77_cvector;
	func_1267(var_77_cvector, var_0_bool);
	cvector var_68_cvector;
	var_77_cvector = var_68_cvector;
	float var_83_float; cvector var_84_cvector; cvector var_85_cvector;
	var_67_cvector = var_84_cvector;
	var_68_cvector = var_85_cvector;
	func_1490(var_83_float, var_84_cvector, var_85_cvector);
	if(var_83_float < 0) {
		func_1426(var_0_bool);
		var_69_bool = true;
	} else {
		@Sleep(1.5, var_69_bool);
	}
	if(var_69_bool != 0) {
		func_1426(var_0_bool);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


void func_906(bool var_0_bool, cvector var_24_cvector, float var_25_float)
{
	cvector var_32_cvector;
	@GetPosition(var_32_cvector);
	cvector var_33_cvector;
	var_0_bool->GetPosition(var_33_cvector); //@t
	cvector var_34_cvector;
	@GetDirection(var_34_cvector);
	cvector var_38_cvector;
	cvector var_40_cvector;
	func_1453(var_40_cvector, (var_32_cvector - var_33_cvector));
	func_1453(var_38_cvector, (var_40_cvector + (var_34_cvector * 0.75)));
	cvector var_35_cvector;
	var_38_cvector = var_35_cvector;
	cvector var_36_cvector;
	float var_37_float;
	@FindLongestDir(var_36_cvector, var_37_float, var_35_cvector, var_25_float, 32, 7000.0);
	if((var_37_float - 100) < 0)
		var_37_float = 0;
	var_24_cvector = var_36_cvector * var_37_float;
}


void func_1294(bool var_32_bool, object var_33_object)
{
	bool var_35_bool;
	var_33_object->IsDead(var_35_bool);
	var_35_bool = var_32_bool;
}


void func_1551(string var_112_string, int var_113_int)
{
	string var_115_string = "idle";
	if(var_113_int != 0)
		var_115_string += var_113_int;
	var_115_string = var_112_string;
}


void func_1678(void)
{
	bool var_15_bool;
	@ClearSubContainer(0);
	int var_21_int;
	func_1507(var_21_int);
	func_1648(0, (10 + (var_21_int * 10)));
	int var_16_int;
	@irand(var_16_int, 4);
	if(var_16_int == 0) {
		int var_50_int;
		func_1722(var_50_int, "hook");
		@AddItem(var_15_bool, var_50_int, 0, 1);
	}
	@irand(var_16_int, 10);
	if(var_16_int == 0) {
		int var_59_int;
		func_1722(var_59_int, "watch");
		@AddItem(var_15_bool, var_59_int, 0, 1);
	}
}


void func_1426(object var_86_object)
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


void func_1299(bool var_21_bool, object var_22_object)
{
	if(var_22_object == null) {
		var_21_bool = false;
		return 4;
	}
	bool var_28_bool = false;
	var_31_bool = IsFuncExist(var_22_object, "IsDead", 1);
	if(var_31_bool != 0) {
		bool var_32_bool; object var_33_object;
		var_22_object = var_33_object;
		func_1294(var_32_bool, var_33_object);
		if(var_32_bool != 0)
			var_28_bool = true;
	}
	if(var_28_bool != 0) {
		var_21_bool = false;
		return 4;
	}
	object var_25_object;
	@GetScene(var_25_object);
	if(var_25_object == null) {
		var_21_bool = false;
		return 4;
	}
	object var_26_object;
	var_22_object->GetScene(var_26_object);
	if(var_25_object != var_26_object) {
		var_21_bool = false;
		return 4;
	}
	var_21_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1558(int var_106_int)
{
	int var_109_int; bool var_110_bool;
	var_109_int = 0;
	
	for(;;) {
		string var_112_string; int var_113_int;
		var_109_int = var_113_int;
		func_1551(var_112_string, var_113_int);
		@HasAnimation(var_110_bool, "all", var_112_string);
		if(!var_110_bool) //@nz
			break;
		var_109_int += 1;
	}
	var_109_int = var_106_int;
}


void func_1052(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


void func_1437(bool var_63_bool)
{
	bool var_65_bool;
	@IsLoaded(var_65_bool);
	var_65_bool = var_63_bool;
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


void func_1442(object var_70_object)
{
	float var_73_float;
	var_70_object->GetEyesHeight(var_73_float);
	cvector var_74_cvector = [0.0, 0.0, 0.0];
	var_75_float = GetByIndex(var_74_cvector, 1);
	var_73_float = var_75_float;
	SetByIndex(var_74_cvector, 1) = var_75_float;
	@LookAsync(var_70_object, "head", var_74_cvector);
}


void func_163(void)
{
	bool var_63_bool;
	func_1437(var_63_bool);
	if(!var_63_bool) //@nz
		func_1647();
}


// @pe
void func_1575(int var_53_int)
{
	bool var_55_bool;
	func_1746(var_55_bool);
	if(var_55_bool != 0)
		var_53_int = 2;
	else
		var_53_int = 0;
	
}


void func_936(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_66_object)
{
	cvector var_75_cvector; float var_76_float;
	cvector var_77_cvector;
	func_906(var_76_float, var_77_cvector, 1.7453294);
	cvector var_72_cvector;
	var_77_cvector = var_72_cvector;
	float var_73_float = var_72_cvector | var_72_cvector;
	if(var_73_float < 10000.0) {
		var_110_float = sqrt(var_73_float);
		@Trace("Can't retreat, distance: " + var_110_float);
		@Sleep(0.5);
		return 10;
	}
	var_113_float = GetByIndex(var_72_cvector, 0);
	var_114_float = GetByIndex(var_72_cvector, 2);
	@Rotate(var_113_float, var_114_float);
	cvector var_115_cvector;
	func_1262(var_115_cvector);
	@SetTimer(120, 0.5);
	
Label_969:
	bool var_74_bool;
	@MovePoint((var_115_cvector + var_72_cvector), 1, var_74_bool);
	if(var_74_bool != 0) {
		if(var_66_object == null) {
			goto Label_999;
		EMIT "GOTO 0x3e5";

		Label_999:
			for(;;) {
				return 10;
		}
			cvector var_123_cvector;
			func_906(var_76_float, var_123_cvector, 2.6179938);
			var_123_cvector = var_75_cvector;
			if((var_75_cvector | var_75_cvector) >= 10000.0) {
				cvector var_127_cvector;
				func_1262(var_127_cvector);
				var_1_bool = var_127_cvector + var_75_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_969; //@nz

	}
}


void func_809(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


void func_1068(bool var_0_bool, bool var_62_bool)
{
	cvector var_65_cvector;
	@GetDirection(var_65_cvector);
	cvector var_67_cvector;
	func_1267(var_67_cvector, var_0_bool);
	cvector var_66_cvector;
	var_67_cvector = var_66_cvector;
	float var_73_float; cvector var_74_cvector; cvector var_75_cvector;
	var_65_cvector = var_74_cvector;
	var_66_cvector = var_75_cvector;
	func_1463(var_73_float, var_74_cvector, var_75_cvector);
	var_62_bool = var_73_float >= -0.34202012;
}


void func_1453(cvector var_40_cvector, cvector var_41_cvector)
{
	float var_43_float = sqrt(var_41_cvector | var_41_cvector);
	if(var_43_float < 0.000001)
		var_40_cvector = [0.0, 0.0, 0.0];
	var_40_cvector = var_41_cvector / var_43_float;
}


// @pe
void func_1584(object var_61_object)
{
	object var_62_object;
	var_61_object = var_62_object;
	TaskCall(3);
	func_645(var_63_object, var_62_object);
	TaskReturn();
}


void func_311(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_440(var_9_cvector, var_10_bool);
}


// @pe
void func_1592(int var_13_int, object var_14_object)
{
	object var_16_object;
	var_14_object = var_16_object;
	bool var_15_bool;
	func_1335(var_15_bool, var_16_object);
	if(var_15_bool != 0)
		var_13_int = 2;
	else
		var_13_int = 0;
	
}


void func_440(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_1335(bool var_17_bool, object var_18_object)
{
	object var_22_object;
	var_18_object = var_22_object;
	bool var_21_bool;
	func_1299(var_21_bool, var_22_object);
	if(!var_21_bool) { //@nz
		var_17_bool = false;
		return 2;
	}
	bool var_39_bool; object var_40_object;
	func_1282(var_39_bool, var_40_object, "noaccess");
	if(!var_39_bool) { //@nz
		var_17_bool = true;
		return 2;
	}
	int var_20_int;
	var_40_object->GetProperty("noaccess", var_20_int);
	var_17_bool = var_20_int == 0;
}


void func_571(void)
{
	int var_99_int; int var_100_int; bool var_101_bool; float var_102_float; bool var_103_bool;
	@WaitForAnimEnd();
	bool var_104_bool;
	func_1437(var_104_bool);
	if(!var_104_bool) //@nz
		return 14;
	int var_106_int;
	func_1558(var_106_int);
	int var_97_int;
	var_106_int = var_97_int;
	int var_98_int = 0;
	
	for(;;) {
		bool var_119_bool = false;
		if(var_98_int < 5) {
			bool var_122_bool;
			func_1437(var_122_bool);
			if(var_122_bool != 0)
				var_119_bool = true;
		}
		if(var_119_bool != 0) {
			@irand(var_99_int, 3);
			if(var_99_int == 0) {
				if(var_97_int == 0) goto Label_618;
				@irand(var_100_int, var_97_int);
				string var_128_string; int var_129_int;
				var_100_int = var_129_int;
				func_1551(var_128_string, var_129_int);
				@PlayAnimation("all", var_128_string);
				@WaitForAnimEnd(var_101_bool);
				if(!var_101_bool) { //@nz
				} else {
			} else {
			if(var_99_int == 1) {
				@rand(var_102_float, 4);
				@Sleep((var_102_float + 1), var_103_bool);
				if(!var_103_bool) { //@nz
					goto Label_639;
				}
			} else if(var_98_int != 0) {
				goto Label_639;
			}
			}
				var_98_int += 1;
			}
		}
	Label_639:
		return 14;

	}
	
}


void func_696(bool var_0_bool)
{
	func_1442(var_0_bool);
}


// @pe
void func_1463(float var_73_float, cvector var_74_cvector, cvector var_75_cvector)
{
	var_80_float = sqrt((var_74_cvector | var_74_cvector) * (var_75_cvector | var_75_cvector));
	var_73_float = (var_74_cvector | var_75_cvector) / var_80_float;
}


void func_1084(bool var_0_bool, cvector var_24_cvector, float var_25_float)
{
	cvector var_32_cvector;
	@GetPosition(var_32_cvector);
	cvector var_33_cvector;
	var_0_bool->GetPosition(var_33_cvector); //@t
	cvector var_34_cvector;
	@GetDirection(var_34_cvector);
	cvector var_38_cvector;
	cvector var_40_cvector;
	func_1453(var_40_cvector, (var_32_cvector - var_33_cvector));
	func_1453(var_38_cvector, (var_40_cvector + (var_34_cvector * 0.75)));
	cvector var_35_cvector;
	var_38_cvector = var_35_cvector;
	cvector var_36_cvector;
	float var_37_float;
	@FindLongestDir(var_36_cvector, var_37_float, var_35_cvector, var_25_float, 32, 7000.0);
	if((var_37_float - 100) < 0)
		var_37_float = 0;
	var_24_cvector = var_36_cvector * var_37_float;
}


void func_1727(void)
{
	var_11_bool = GlobalVars[0];
	GlobalVars[0] = false;
	bool var_12_bool = false;
	func_1678();
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
	func_447(var_14_bool, var_15_int);
}


// @pe
void func_1602(object var_55_object)
{
	object var_56_object;
	var_55_object = var_56_object;
	TaskCall(4);
	func_871(var_56_object);
	TaskReturn();
}


// @pe
void func_1471(float var_63_float, cvector var_64_cvector, cvector var_65_cvector)
{
	var_66_float = GetByIndex(var_64_cvector, 0);
	var_67_float = GetByIndex(var_65_cvector, 0);
	var_69_float = GetByIndex(var_64_cvector, 2);
	var_70_float = GetByIndex(var_65_cvector, 2);
	var_63_float = (var_66_float * var_67_float) + (var_69_float * var_70_float);
}


void func_454(bool var_88_bool)
{
	var_88_bool = false;
}


void func_1735(object var_22_object)
{
	bool var_24_bool;
	var_25_bool = GlobalVars[0];
	if(var_25_bool != 0) {
		@IsOverrideActive(var_24_bool);
		if(!var_24_bool) //@nz
			@WorkWithCorpse(var_22_object);
	}
}


// @pe
void func_1480(float var_72_float, cvector var_73_cvector)
{
	var_74_float = GetByIndex(var_73_cvector, 0);
	var_75_float = GetByIndex(var_73_cvector, 0);
	var_77_float = GetByIndex(var_73_cvector, 2);
	var_78_float = GetByIndex(var_73_cvector, 2);
	var_72_float = sqrt((var_74_float * var_75_float) + (var_77_float * var_78_float));
}


// @pe
void func_1610(int var_47_int, object var_48_object)
{
	object var_50_object;
	var_48_object = var_50_object;
	bool var_49_bool;
	func_1335(var_49_bool, var_50_object);
	if(var_49_bool != 0)
		var_47_int = 2;
	else
		var_47_int = 0;
	
}


void func_1230(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


void func_1359(object var_14_object, int var_15_int)
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


void func_336(bool var_2_bool, object var_11_object)
{
	bool var_16_bool; object var_17_object;
	func_1335(var_16_bool, var_17_object);
	if(!var_16_bool) //@nz
		return 4;
	if(var_2_bool != 0)
		return 4;
	bool var_14_bool;
	@IsPlayerActor(var_17_object, var_14_bool);
	if(!var_14_bool) //@nz
		return 4;
	int var_53_int; object var_54_object;
	var_11_object = var_54_object;
	func_1575(var_54_object);
	int var_15_int;
	var_53_int = var_15_int;
	if(var_15_int > 0) {
		if(var_15_int > 1)
			func_319(var_15_int);
		object var_61_object;
		var_11_object = var_61_object;
		func_1584(var_61_object);
		var_2_bool = true;
		@SetTimer(110, 10.0);
	}
}


// @pe
void func_1490(float var_60_float, cvector var_61_cvector, cvector var_62_cvector)
{
	cvector var_64_cvector;
	var_61_cvector = var_64_cvector;
	cvector var_65_cvector;
	var_62_cvector = var_65_cvector;
	float var_63_float;
	func_1471(var_63_float, var_64_cvector, var_65_cvector);
	float var_72_float; cvector var_73_cvector;
	var_61_cvector = var_73_cvector;
	func_1480(var_72_float, var_73_cvector);
	float var_81_float; cvector var_82_cvector;
	var_62_cvector = var_82_cvector;
	func_1480(var_81_float, var_82_cvector);
	var_60_float = var_63_float / (var_72_float * var_81_float);
}


void func_1746(bool var_55_bool)
{
	var_55_bool = true;
}


void func_1748(bool var_14_bool, object var_15_object, object var_16_object)
{
	object var_22_object;
	var_16_object = var_22_object;
	bool var_21_bool;
	func_1282(var_21_bool, var_22_object, "class");
	if(!var_21_bool) { //@nz
		var_14_bool = false;
		return 4;
	}
	string var_19_string;
	var_16_object->GetProperty("class", var_19_string);
	if(var_19_string == "rat") {
		var_14_bool = false;
		return 4;
	}
	bool var_20_bool;
	@CanSee(var_20_bool, var_15_object);
	bool var_34_bool = true;
	if(var_20_bool != 1) {
		float var_36_float; object var_37_object;
		func_1274(var_36_float, var_37_object);
		var_45_bool = var_36_float <= 250000.0;
		if(var_45_bool != 1)
			var_34_bool = false;
	}
	if(var_34_bool != 0) {
		@ReportReputationChange(var_37_object, var_16_object, -0.3);
		var_14_bool = true;
		return 4;
	}
	var_14_bool = false;
}


// @pe
void func_1620(object var_83_object)
{
	object var_84_object;
	var_83_object = var_84_object;
	TaskCall(5);
	func_1114(var_85_object, var_86_cvector, var_87_bool, var_84_object);
	TaskReturn();
}


void func_1722(int var_50_int, string var_51_string)
{
	int var_53_int;
	@GetInvItemByName(var_53_int, var_51_string);
	var_53_int = var_50_int;
}


void func_1114(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_84_object)
{
	cvector var_96_cvector; float var_97_float;
	cvector var_98_cvector;
	func_1084(var_97_float, var_98_cvector, 1.7453294);
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
	func_1262(var_136_cvector);
	@SetTimer(120, 0.5);
	
Label_1147:
	bool var_95_bool;
	@MovePoint((var_136_cvector + var_93_cvector), 1, var_95_bool);
	if(var_95_bool != 0) {
		if(var_84_object == null) {
			goto Label_1177;
		EMIT "GOTO 0x497";

		Label_1177:
			for(;;) {
				return 10;
		}
			cvector var_144_cvector;
			func_1084(var_97_float, var_144_cvector, 2.6179938);
			var_144_cvector = var_96_cvector;
			if((var_96_cvector | var_96_cvector) >= 10000.0) {
				cvector var_148_cvector;
				func_1262(var_148_cvector);
				var_1_bool = var_148_cvector + var_96_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1147; //@nz

	}
}


// @pe
void func_1628(int var_13_int)
{
	var_13_int = 0;
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


void func_1246(bool var_0_bool, bool var_62_bool)
{
	cvector var_65_cvector;
	@GetDirection(var_65_cvector);
	cvector var_67_cvector;
	func_1267(var_67_cvector, var_0_bool);
	cvector var_66_cvector;
	var_67_cvector = var_66_cvector;
	float var_73_float; cvector var_74_cvector; cvector var_75_cvector;
	var_65_cvector = var_74_cvector;
	var_66_cvector = var_75_cvector;
	func_1463(var_73_float, var_74_cvector, var_75_cvector);
	var_62_bool = var_73_float >= -0.34202012;
}


// @pe
void func_1631(void)
{
}


// @pe
void func_1633(int var_14_int)
{
	var_14_int = 0;
}


void func_1507(int var_21_int)
{
	float var_23_float;
	@GetGameTime(var_23_float);
	var_21_int = 1 + (var_23_float / 24);
}


// @pe
void func_1636(void)
{
}


// @pe
void func_1638(int var_13_int)
{
	var_13_int = 2;
}


// @pe
void func_871(object var_56_object)
{
	@Face(var_56_object);
	@PlayAnimation("all", "attack_on");
	@WaitForAnimEnd();
	@PlayAnimation("all", "attack_stay");
	@WaitForAnimEnd();
	@PlayAnimation("all", "attack_off");
	@WaitForAnimEnd();
	@StopAsync();
	object var_66_object;
	func_936(var_58_cvector, var_59_bool, var_66_object, var_66_object);
}


// @pe
void func_1641(object var_21_object)
{
	object var_22_object;
	var_21_object = var_22_object;
	func_1735(var_22_object);
}


// @pe
void func_1516(object var_11_object)
{
	object var_12_object;
	var_11_object = var_12_object;
	TaskCall(0);
	func_0(var_12_object);
	TaskReturn();
}


void func_1262(cvector var_82_cvector)
{
	cvector var_84_cvector;
	@GetPosition(var_84_cvector);
	var_84_cvector = var_82_cvector;
}


void func_1647(void)
{
}


void func_1648(int var_18_int, int var_19_int)
{
	int var_34_int;
	if(var_18_int > var_19_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	int var_33_int = 0;
	if(var_18_int != var_19_int) {
		@irand(var_34_int, (var_19_int - var_18_int));
	} else if(var_18_int == 0) {
		return 8;
	}
	var_33_int += var_18_int;
	if(var_33_int == 0)
		return 8;
	int var_35_int;
	@GetInvItemByName(var_35_int, "Money");
	bool var_36_bool;
	@AddItem(var_36_bool, var_35_int, 0, var_33_int);
	
}


void func_1267(cvector var_67_cvector, object var_68_object)
{
	cvector var_71_cvector;
	@GetPosition(var_71_cvector);
	cvector var_72_cvector;
	var_68_object->GetPosition(var_72_cvector);
	var_67_cvector = var_72_cvector - var_71_cvector;
}


void func_376(bool var_0_bool, bool var_1_bool)
{
	float var_74_float; cvector var_75_cvector; cvector var_76_cvector; float var_77_float; bool var_78_bool; object var_79_object; bool var_80_bool;
	@rand(var_74_float, 0.5);
	@Sleep(var_74_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_388:
				@GetPosition(var_76_cvector);
				@GetCameraFarDistance(var_77_float);
				@GetRandomPFPointInCircle(var_75_cvector, var_76_cvector, (var_77_float * 2.5), var_78_bool);
				if(var_78_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_388;
			}
				var_1_bool = false;
		}
		}
		goto Label_405;

	Label_405:
		@FindShiftedPathTo(var_79_object, var_75_cvector);
		if(var_79_object != null) {
			@RotatePath(var_79_object, var_80_bool);
			if(var_80_bool != 0) {
				bool var_88_bool;
				func_454(var_88_bool);
				@FollowPath(var_79_object, var_88_bool, var_80_bool);
				var_79_object = null;
				if(var_80_bool != 0) {
					TaskCall(2);
					func_571();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_79_object = null;
	}
	
}


void func_1274(float var_36_float, object var_37_object)
{
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	cvector var_42_cvector;
	var_37_object->GetPosition(var_42_cvector);
	var_36_float = (var_42_cvector - var_41_cvector) | (var_42_cvector - var_41_cvector);
}


// @pe
void func_1788(void)
{
	var_64_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


