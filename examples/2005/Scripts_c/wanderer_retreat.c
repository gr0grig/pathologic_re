task task_0
{
	void OnLoad(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
	void OnUse(object actor, bool var_1_bool, bool var_2_bool, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		object var_12_object;
		var_8_bool = var_12_object;
		func_1605(var_12_object);
		int var_10_int;
		int var_11_int = var_10_int;
		if(var_10_int > 0) {
			object var_15_object;
			var_8_bool = var_15_object;
			func_1608();
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool)
	{
		func_1612();
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, bool var_4_bool, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, bool var_2_bool, bool var_3_bool, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
	}

	// @pe
	void OnDeath(object actor, bool var_1_bool, bool var_2_bool, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
	}

}


task task_2
{
	void OnUse(object actor, bool var_1_bool, bool var_2_bool, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		object var_12_object;
		var_8_bool = var_12_object;
		func_1605(var_12_object);
		int var_10_int;
		int var_11_int = var_10_int;
		if(var_10_int > 0) {
			if(var_10_int > 1)
				func_414();
			object var_17_object;
			var_8_bool = var_17_object;
			func_1608();
		}
	}

	void OnAttacked(object actor, bool var_1_bool, bool var_2_bool, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		object var_11_object;
		var_8_bool = var_11_object;
		func_1503(var_11_object);
		int var_20_int; object var_21_object;
		var_8_bool = var_21_object;
		func_1569(var_20_int, var_21_object);
		int var_10_int;
		var_20_int = var_10_int;
		if(var_10_int > 0) {
			if(var_10_int > 1)
				func_414();
			object var_60_object;
			var_8_bool = var_60_object;
			func_1579(var_60_object);
		}
	}

	void OnPlayerDamage(object actor, object var_1_object, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		int var_12_int;
		object var_14_object;
		var_8_object = var_14_object;
		object var_15_object;
		var_9_cvector = var_15_object;
		bool var_16_bool;
		var_10_bool = var_16_bool;
		func_1649(var_16_bool);
		bool var_13_bool;
		if(var_13_bool != 0) {
			int var_17_int; object var_18_object; bool var_19_bool;
			var_8_object = var_18_object;
			var_10_bool = var_19_bool;
			func_1587(var_18_object, var_19_bool);
			var_17_int = var_12_int;
			if(var_12_int > 0) {
				if(var_12_int > 1)
					func_414();
				object var_58_object;
				var_8_object = var_58_object;
				func_1597(var_58_object);
			}
		}
	}

	void OnSteal(object actor, bool var_1_bool, bool var_2_bool, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		object var_12_object;
		var_8_bool = var_12_object;
		func_1618(var_12_object);
		int var_10_int;
		int var_11_int = var_10_int;
		if(var_10_int > 0) {
			if(var_10_int > 1)
				func_414();
			object var_17_object;
			var_8_bool = var_17_object;
			func_1621();
		}
	}

	void OnMessage(object var_0_object, string var_1_string, bool var_2_bool, bool var_3_bool, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		int var_11_int;
		object var_13_object;
		var_8_cvector = var_13_object;
		string var_14_string;
		var_9_bool = var_14_string;
		bool var_12_bool;
		func_1417(var_12_bool, var_13_object, var_14_string);
		if(var_12_bool != 0) {
			func_414();
			object var_27_object; string var_28_string;
			var_8_cvector = var_27_object;
			var_9_bool = var_28_string;
			func_1449(var_27_object, var_28_string);
		} else {
			int var_38_int; string var_39_string; object var_40_object;
			var_9_bool = var_39_string;
			var_8_cvector = var_40_object;
			func_1623(var_40_object);
			var_38_int = var_11_int;
			if(!(var_11_int > 0)) goto Label_297;
			if(var_11_int > 1)
				func_414();
			string var_45_string; object var_46_object;
			var_9_bool = var_45_string;
			var_8_cvector = var_46_object;
			func_1626();
		}
	Label_297:
	
	}

	// @pe
	void OnTrigger(string name, bool var_1_bool, bool var_2_bool, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		string var_10_string;
		var_8_bool = var_10_string;
		bool var_9_bool;
		func_1516(var_9_bool, var_10_string);
		if(var_9_bool != 0) {
			func_414();
			string var_18_string;
			var_8_bool = var_18_string;
			func_1532(var_18_string);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool)
	{
		func_414();
		func_1612();
	}

	// @pe
	void OnSee(object actor, bool var_1_bool, bool var_2_bool, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		object var_10_object;
		var_8_bool = var_10_object;
		bool var_9_bool;
		func_1474(var_9_bool, var_10_object);
		if(var_9_bool != 0) {
			func_414();
			object var_21_object;
			var_8_bool = var_21_object;
			func_1497(var_21_object);
		}
	}

}


maintask task_3
{
	void init(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool)
	{
		@SensePlayerOnly(true);
		func_1648();
		func_433();
	
		for(;;) {
			func_606(var_6_cvector, var_7_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		int var_9_int;
		object var_12_object;
		var_8_bool = var_12_object;
		func_1605(var_12_object);
		int var_10_int;
		int var_11_int = var_10_int;
		if(var_10_int > 0) {
			if(var_10_int > 1)
				func_677(var_9_int, var_10_int);
			object var_17_object;
			var_8_bool = var_17_object;
			func_1608();
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		int var_9_int;
		object var_11_object;
		var_8_bool = var_11_object;
		func_1503(var_11_object);
		int var_20_int; object var_21_object;
		var_8_bool = var_21_object;
		func_1569(var_20_int, var_21_object);
		int var_10_int;
		var_20_int = var_10_int;
		if(var_10_int > 0) {
			if(var_10_int > 1)
				func_677(var_9_int, var_10_int);
			object var_60_object;
			var_8_bool = var_60_object;
			func_1579(var_60_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		int var_11_int; int var_12_int;
		object var_14_object;
		var_8_object = var_14_object;
		object var_15_object;
		var_9_cvector = var_15_object;
		bool var_16_bool;
		var_10_bool = var_16_bool;
		func_1649(var_16_bool);
		bool var_13_bool;
		if(var_13_bool != 0) {
			int var_17_int; object var_18_object; bool var_19_bool;
			var_8_object = var_18_object;
			var_10_bool = var_19_bool;
			func_1587(var_18_object, var_19_bool);
			var_17_int = var_12_int;
			if(var_12_int > 0) {
				if(var_12_int > 1)
					func_677(var_11_int, var_12_int);
				object var_58_object;
				var_8_object = var_58_object;
				func_1597(var_58_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		int var_9_int;
		object var_12_object;
		var_8_bool = var_12_object;
		func_1618(var_12_object);
		int var_10_int;
		int var_11_int = var_10_int;
		if(var_10_int > 0) {
			if(var_10_int > 1)
				func_677(var_9_int, var_10_int);
			object var_17_object;
			var_8_bool = var_17_object;
			func_1621();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, object var_2_object, string var_3_string, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		int var_10_int; int var_11_int;
		object var_13_object;
		var_8_cvector = var_13_object;
		string var_14_string;
		var_9_bool = var_14_string;
		bool var_12_bool;
		func_1417(var_12_bool, var_13_object, var_14_string);
		if(var_12_bool != 0) {
			func_677(var_10_int, var_11_int);
			object var_27_object; string var_28_string;
			var_8_cvector = var_27_object;
			var_9_bool = var_28_string;
			func_1449(var_27_object, var_28_string);
		} else {
			int var_38_int; string var_39_string; object var_40_object;
			var_9_bool = var_39_string;
			var_8_cvector = var_40_object;
			func_1623(var_40_object);
			var_38_int = var_11_int;
			if(!(var_11_int > 0)) goto Label_570;
			if(var_11_int > 1)
				func_677(var_10_int, var_11_int);
			string var_45_string; object var_46_object;
			var_9_bool = var_45_string;
			var_8_cvector = var_46_object;
			func_1626();
		}
	Label_570:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, string var_2_string, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		bool var_9_bool; string var_10_string;
		func_1516(var_9_bool, var_10_string);
		if(var_9_bool != 0) {
			func_677(var_7_cvector, var_10_string);
			string var_18_string;
			var_8_bool = var_18_string;
			func_1532(var_18_string);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		bool var_9_bool; object var_10_object;
		func_1474(var_9_bool, var_10_object);
		if(var_9_bool != 0) {
			func_677(var_7_cvector, var_10_object);
			object var_21_object;
			var_8_bool = var_21_object;
			func_1497(var_21_object);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool)
	{
		func_677(var_6_cvector, var_7_bool);
		func_1612();
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		@RequestClearPath(var_8_bool);
	}

	void OnActorStuck(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool)
	{
		@Stop();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		func_677(var_7_cvector, var_8_bool);
		object var_9_object;
		var_8_bool = var_9_object;
		func_1393();
	}

}


task task_4
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool)
	{
		func_863(var_7_bool);
		func_1612();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, int var_5_int, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		cvector var_13_cvector; float var_14_float; cvector var_15_cvector; float var_16_float;
		if(var_8_bool != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_13_cvector);
			@FindDirLength(var_14_float, var_13_cvector, 7000.0);
			cvector var_22_cvector;
			func_708(var_16_float, var_22_cvector, 1.7453294);
			var_22_cvector = var_15_cvector;
			var_16_float = var_15_cvector | var_15_cvector;
			bool var_52_bool = false;
			if(var_16_float >= 2500.0) {
				bool var_55_bool;
				var_59_bool = var_16_float >= ((var_14_float * var_14_float) * 2.25);
				if(var_59_bool != 1) {
					bool var_60_bool;
					func_879(true, var_60_bool);
					if(var_60_bool != 1)
						var_55_bool = false;
				}
				if(var_55_bool != 0)
					var_52_bool = true;
			}
			if(var_52_bool == 0) goto Label_862;
			@Stop();
			cvector var_80_cvector;
			func_1082(var_80_cvector);
			var_1_bool = var_80_cvector + var_15_cvector;
		}
	Label_862:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		func_863(var_8_bool);
		object var_10_object;
		var_8_bool = var_10_object;
		func_1393();
	}

}


task task_5
{
	void OnTimer(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, int var_8_int)
	{
		cvector var_13_cvector; float var_14_float; cvector var_15_cvector; float var_16_float;
		if(var_8_int != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_13_cvector);
			@FindDirLength(var_14_float, var_13_cvector, 7000.0);
			cvector var_22_cvector;
			func_895(var_16_float, var_22_cvector, 1.7453294);
			var_22_cvector = var_15_cvector;
			var_16_float = var_15_cvector | var_15_cvector;
			bool var_52_bool = false;
			if(var_16_float >= 2500.0) {
				bool var_55_bool;
				var_59_bool = var_16_float >= ((var_14_float * var_14_float) * 2.25);
				if(var_59_bool != 1) {
					bool var_60_bool;
					func_1066(true, var_60_bool);
					if(var_60_bool != 1)
						var_55_bool = false;
				}
				if(var_55_bool != 0)
					var_52_bool = true;
			}
			if(var_52_bool == 0) goto Label_1049;
			@Stop();
			cvector var_80_cvector;
			func_1082(var_80_cvector);
			var_1_bool = var_80_cvector + var_15_cvector;
		}
	Label_1049:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object)
	{
		func_1050(var_8_object);
		object var_10_object;
		var_8_object = var_10_object;
		func_1393();
	}

}


void OnPropertyChange(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, string var_9_string)
{
	float var_11_float;
	if(var_9_string == "health") {
		@GetProperty("health", var_11_float);
		if(var_11_float <= 0)
			@SignalDeath(var_8_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object)
{
	object var_9_object;
	var_8_object = var_9_object;
	func_1372(var_9_object);
}


// @pe
void OnHit(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, float var_10_float, float var_11_float)
{
	object var_12_object;
	var_8_object = var_12_object;
	int var_13_int;
	var_9_int = var_13_int;
	float var_14_float;
	var_10_float = var_14_float;
	func_1220(var_12_object, var_13_int, var_14_float);
}


// @pe
void OnHit2(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, int var_9_int, float var_10_float, float var_11_float, cvector var_12_cvector, cvector var_13_cvector)
{
	object var_14_object;
	var_8_object = var_14_object;
	int var_15_int;
	var_9_int = var_15_int;
	float var_16_float;
	var_10_float = var_16_float;
	cvector var_17_cvector;
	var_12_cvector = var_17_cvector;
	cvector var_18_cvector;
	var_13_cvector = var_18_cvector;
	func_1288(var_16_float, var_17_cvector, var_18_cvector);
}


void func_1152(bool var_20_bool, object var_21_object)
{
	object var_25_object;
	var_21_object = var_25_object;
	bool var_24_bool;
	func_1116(var_24_bool, var_25_object);
	if(!var_24_bool) { //@nz
		var_20_bool = false;
		return 2;
	}
	bool var_42_bool; object var_43_object;
	func_1099(var_42_bool, var_43_object, "noaccess");
	if(!var_42_bool) { //@nz
		var_20_bool = true;
		return 2;
	}
	int var_23_int;
	var_43_object->GetProperty("noaccess", var_23_int);
	var_20_bool = var_23_int == 0;
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_13_bool;
	func_1302(var_13_bool);
	if(!var_13_bool) goto Label_0; //@nz
}


void func_1288(object var_14_object, cvector var_17_cvector, cvector var_18_cvector)
{
	object var_21_object;
	@GetScene(var_21_object);
	object var_22_object;
	@AddActorByType(var_22_object, "scripted", var_21_object, var_17_cvector, var_18_cvector, "blood_dir.xml");
	object var_25_object;
	var_14_object = var_25_object;
	func_1176(var_25_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_137(string var_33_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_34_string;
	var_33_string = var_34_string;
	func_1307(var_34_string);
	@PlayAnimation("all", var_33_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_33_string);
	@RemoveEnvelope();
}


// @pe
void func_1417(bool var_12_bool, object var_13_object, string var_14_string)
{
	if(var_14_string == "unholster") {
		bool var_17_bool; object var_18_object;
		var_13_object = var_18_object;
		func_1628(var_18_object);
		var_17_bool = var_12_bool;
		return 0;
	EMIT "GOTO 0x5a7";
	}
	if(var_14_string == "player_shot") {
		bool var_21_bool; object var_22_object;
		var_13_object = var_22_object;
		func_1633(var_22_object);
		var_21_bool = var_12_bool;
		return 0;
	EMIT "GOTO 0x5a7";
	}
	if(var_14_string == "battle") {
		bool var_25_bool; object var_26_object;
		var_13_object = var_26_object;
		func_1638(var_26_object);
		var_25_bool = var_12_bool;
		return 0;
	}
	var_12_bool = false;
}


void func_1545(string var_64_string, int var_65_int)
{
	string var_67_string = "idle";
	if(var_65_int != 0)
		var_67_string += var_65_int;
	var_67_string = var_64_string;
}


// @pe
void func_13(object var_10_object)
{
	object var_11_object;
	var_10_object = var_11_object;
	func_46(var_11_object);
	object var_91_object;
	var_10_object = var_91_object;
	func_1610();
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1552(int var_58_int)
{
	int var_61_int; bool var_62_bool;
	var_61_int = 0;
	
	for(;;) {
		string var_64_string; int var_65_int;
		var_61_int = var_65_int;
		func_1545(var_64_string, var_65_int);
		@HasAnimation(var_62_bool, "all", var_64_string);
		if(!var_62_bool) //@nz
			break;
		var_61_int += 1;
	}
	var_61_int = var_58_int;
}


void func_1302(bool var_9_bool)
{
	bool var_11_bool;
	@IsLoaded(var_11_bool);
	var_11_bool = var_9_bool;
}


void func_1176(object var_25_object)
{
	string var_39_string;
	if(var_25_object == null)
		return 14;
	bool var_33_bool;
	@IsDead(var_33_bool);
	if(var_33_bool != 0)
		return 14;
	int var_34_int;
	@GetSecondaryAnimationType(var_34_int);
	if(var_34_int < 0)
		return 14;
	cvector var_35_cvector;
	var_25_object->GetPosition(var_35_cvector);
	cvector var_36_cvector;
	@GetPosition(var_36_cvector);
	cvector var_37_cvector;
	@GetDirection(var_37_cvector);
	cvector var_38_cvector = var_36_cvector - var_35_cvector;
	var_44_float = GetByIndex(var_38_cvector, 0);
	var_45_float = GetByIndex(var_37_cvector, 0);
	var_47_float = GetByIndex(var_38_cvector, 2);
	var_48_float = GetByIndex(var_37_cvector, 2);
	if(((var_44_float * var_45_float) + (var_47_float * var_48_float)) >= 0)
		var_39_string = "fhit";
	else
		var_39_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_39_string + "1"), (var_39_string + "2"), -10);
	
}


void func_665(float var_30_float)
{
	float var_32_float;
	@GetCameraFarDistance(var_32_float);
	var_32_float = var_30_float;
}


void func_1050(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


void func_1307(string var_34_string)
{
	bool var_43_bool; int var_44_int; bool var_45_bool; int var_46_int; bool var_47_bool; float var_48_float; cvector var_49_cvector; cvector var_50_cvector;
	@IsExisting3DSound(var_43_bool, var_34_string);
	if(!var_43_bool) { //@nz
		var_44_int = 0;

		for(;;) {
			@IsExisting3DSound(var_45_bool, (var_34_string + (var_44_int + 1)));
			if(!var_45_bool) { //@nz
				break;
			Label_1327:
				@irand(var_46_int, var_44_int);
				var_34_string += (var_46_int + 1);
	}
			@Is3DSoundLoaded(var_47_bool, var_34_string);
			if(var_47_bool != 0) {
				@GetEyesHeight(var_48_float);
				@GetDirection(var_49_cvector);
				var_50_cvector = var_49_cvector * 50;
				var_61_float = GetByIndex(var_50_cvector, 1);
				SetByIndex(var_50_cvector, 1) = (var_61_float + var_48_float);
				@PlayGlobalSound(var_34_string, var_50_cvector);
			}
		}
		var_44_int += 1;
	}
	var_56_bool = !var_44_int; //@nz
	if(var_56_bool == 0) goto Label_1327;
}


void func_412(bool var_83_bool)
{
	var_83_bool = true;
}


void func_925(bool var_0_bool, bool var_1_bool, object var_2_object, object var_59_object)
{
	float var_69_float; cvector var_71_cvector; float var_72_float;
	cvector var_73_cvector;
	func_895(var_72_float, var_73_cvector, 1.7453294);
	cvector var_68_cvector;
	var_73_cvector = var_68_cvector;
	if((var_68_cvector | var_68_cvector) < 2500.0) {
		cvector var_105_cvector;
		func_895(var_72_float, var_105_cvector, 2.6179938);
		var_105_cvector = var_68_cvector;
		var_69_float = var_68_cvector | var_68_cvector;
		if(var_69_float < 2500.0) {
			var_110_float = sqrt(var_69_float);
			@Trace("Can't retreat, distance: " + var_110_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_113_float = GetByIndex(var_68_cvector, 0);
	var_114_float = GetByIndex(var_68_cvector, 2);
	@Rotate(var_113_float, var_114_float);
	cvector var_115_cvector;
	func_1082(var_115_cvector);
	@SetTimer(120, 0.5);
	
Label_967:
	bool var_70_bool;
	@MovePoint((var_115_cvector + var_68_cvector), 1, var_70_bool);
	if(var_70_bool != 0) {
		if(var_59_object == null) {
			goto Label_997;
		EMIT "GOTO 0x3e3";

		Label_997:
			for(;;) {
				return 10;
		}
			cvector var_123_cvector;
			func_895(var_72_float, var_123_cvector, 2.6179938);
			var_123_cvector = var_71_cvector;
			if((var_71_cvector | var_71_cvector) >= 2500.0) {
				cvector var_127_cvector;
				func_1082(var_127_cvector);
				var_1_bool = var_127_cvector + var_71_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_967; //@nz

	}
}


void func_414(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1569(int var_20_int, object var_21_object)
{
	object var_23_object;
	var_21_object = var_23_object;
	bool var_22_bool;
	func_1152(var_22_bool, var_23_object);
	if(var_22_bool != 0)
		var_20_int = 2;
	else
		var_20_int = 0;
	
}


void func_677(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


// @pe
void func_1449(object var_27_object, string var_28_string)
{
	if(var_28_string == "unholster") {
		object var_31_object;
		var_27_object = var_31_object;
		func_1631();
	} else if(var_28_string == "player_shot") {
			object var_34_object;
			var_27_object = var_34_object;
			func_1636();
	}
Label_1473:
	for(;;) {

	}
	
	if(!(var_28_string == "battle")) goto Label_1473;
	object var_37_object;
	var_27_object = var_37_object;
	func_1641();
}


void func_1066(bool var_0_bool, bool var_60_bool)
{
	cvector var_63_cvector;
	@GetDirection(var_63_cvector);
	cvector var_65_cvector;
	func_1087(var_65_cvector, var_0_bool);
	cvector var_64_cvector;
	var_65_cvector = var_64_cvector;
	float var_71_float; cvector var_72_cvector; cvector var_73_cvector;
	var_63_cvector = var_72_cvector;
	var_64_cvector = var_73_cvector;
	func_1364(var_71_float, var_72_cvector, var_73_cvector);
	var_60_bool = var_71_float >= -0.34202012;
}


// @pe
void func_1579(object var_60_object)
{
	object var_61_object;
	var_60_object = var_61_object;
	TaskCall(4);
	func_738(var_62_object, var_63_cvector, var_64_bool, var_61_object);
	TaskReturn();
}


void func_46(object var_11_object)
{
	cvector var_22_cvector; cvector var_23_cvector; cvector var_24_cvector; cvector var_25_cvector; string var_26_string; object var_27_object; bool var_28_bool; bool var_29_bool; float var_30_float; cvector var_31_cvector;
	if(var_11_object == null) {
		func_137("fdie");
	} else {
		var_11_object->GetPosition(var_22_cvector);
		@GetPosition(var_23_cvector);
		@GetDirection(var_24_cvector);
		var_25_cvector = var_23_cvector - var_22_cvector;
		var_65_float = GetByIndex(var_25_cvector, 0);
		var_66_float = GetByIndex(var_24_cvector, 0);
		var_68_float = GetByIndex(var_25_cvector, 2);
		var_69_float = GetByIndex(var_24_cvector, 2);
		if(((var_65_float * var_66_float) + (var_68_float * var_69_float)) >= 0)
			var_26_string = "fdie";
		else
			var_26_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_11_object = var_27_object;
		var_76_bool = IsFuncExist(var_11_object, "GetScriptProperty", 2);
		if(var_76_bool != 0) {
			var_11_object->HasScriptProperty(var_28_bool, "Owner");
			if(var_28_bool != 0) {
				var_11_object->GetScriptProperty(var_27_object, "Owner");
				if(var_27_object == null)
					var_11_object = var_27_object;
			}
		}
		var_83_bool = IsFuncExist(var_27_object, "@GetEyesHeight", 1);
		if(var_83_bool != 0) {
			var_27_object->GetEyesHeight(var_30_float);
			var_31_cvector = [0.0, 0.0, 0.0];
			var_84_float = GetByIndex(var_31_cvector, 1);
			var_30_float = var_84_float;
			SetByIndex(var_31_cvector, 1) = var_84_float;
			@LookAsync(var_11_object, "head", var_31_cvector);
			var_29_bool = true;
		} else {
			var_29_bool = false;

		}
		string var_86_string;
		var_26_string = var_86_string;
		func_1307(var_86_string);
		@PlayAnimation("all", var_26_string);
		@WaitForAnimEnd();
		if(var_29_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_26_string);
		@RemoveEnvelope();
		var_27_object = null;
	}
	
}


void func_433(void)
{
	bool var_9_bool;
	func_1302(var_9_bool);
	if(!var_9_bool) //@nz
		func_1612();
}


// @pe
void func_1587(int var_17_int, object var_18_object)
{
	object var_21_object;
	var_18_object = var_21_object;
	bool var_20_bool;
	func_1152(var_20_bool, var_21_object);
	if(var_20_bool != 0)
		var_17_int = 2;
	else
		var_17_int = 0;
	
}


void func_693(bool var_40_bool)
{
	var_40_bool = false;
}


void func_695(object var_34_object, cvector var_35_cvector)
{
	object var_37_object;
	@FindShiftedPathTo(var_37_object, var_35_cvector);
	var_37_object = var_34_object;
}
EMIT "Stack[-1] = 0";


void func_1082(cvector var_80_cvector)
{
	cvector var_82_cvector;
	@GetPosition(var_82_cvector);
	var_82_cvector = var_80_cvector;
}


// @pe
void func_1597(object var_58_object)
{
	object var_59_object;
	var_58_object = var_59_object;
	TaskCall(5);
	func_925(var_60_object, var_61_cvector, var_62_bool, var_59_object);
	TaskReturn();
}


void func_1087(cvector var_42_cvector, object var_43_object)
{
	cvector var_46_cvector;
	@GetPosition(var_46_cvector);
	cvector var_47_cvector;
	var_43_object->GetPosition(var_47_cvector);
	var_42_cvector = var_47_cvector - var_46_cvector;
}


void func_1474(bool var_9_bool, object var_10_object)
{
	bool var_12_bool;
	bool var_13_bool = false;
	bool var_14_bool; object var_15_object;
	var_10_object = var_15_object;
	func_1628(var_15_object);
	if(var_14_bool != 0) {
		bool var_16_bool; object var_17_object;
		func_1094(var_16_bool, var_17_object);
		if(var_16_bool != 0)
			var_13_bool = true;
	}
	if(var_13_bool != 0) {
		var_17_object->IsWeaponHolstered(var_12_bool);
		if(!var_12_bool) //@nz
			var_9_bool = true;
	}
	var_9_bool = false;
}


void func_708(bool var_0_bool, cvector var_22_cvector, float var_23_float)
{
	cvector var_30_cvector;
	@GetPosition(var_30_cvector);
	cvector var_31_cvector;
	var_0_bool->GetPosition(var_31_cvector); //@t
	cvector var_32_cvector;
	@GetDirection(var_32_cvector);
	cvector var_36_cvector;
	cvector var_38_cvector;
	func_1354(var_38_cvector, (var_30_cvector - var_31_cvector));
	func_1354(var_36_cvector, (var_38_cvector + (var_32_cvector * 0.75)));
	cvector var_33_cvector;
	var_36_cvector = var_33_cvector;
	cvector var_34_cvector;
	float var_35_float;
	@FindLongestDir(var_34_cvector, var_35_float, var_33_cvector, var_23_float, 32, 7000.0);
	if((var_35_float - 100) < 0)
		var_35_float = 0;
	var_22_cvector = var_34_cvector * var_35_float;
}


// @pe
void func_1605(int var_11_int)
{
	var_11_int = 0;
}


void func_1220(object var_12_object, int var_13_int, float var_14_float)
{
	cvector var_24_cvector; object var_25_object; int var_26_int; bool var_27_bool; cvector var_28_cvector; cvector var_29_cvector;
	bool var_33_bool = false;
	bool var_34_bool = false;
	if(var_12_object != 0) {
		if(var_13_int != 4)
			var_34_bool = true;
	}
	if(var_34_bool != 0) {
		if(var_13_int != 5)
			var_33_bool = true;
	}
	if(var_33_bool != 0) {
		cvector var_40_cvector; cvector var_41_cvector;
		cvector var_42_cvector; object var_43_object;
		var_12_object = var_43_object;
		func_1087(var_42_cvector, var_43_object);
		var_42_cvector = var_41_cvector;
		func_1354(var_40_cvector, var_41_cvector);
		var_40_cvector = var_24_cvector;
		@CreateVectorVector(var_25_object);
		var_26_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_26_int), var_27_bool, var_28_cvector, var_29_cvector);
			if(!var_27_bool) { //@nz
				break;
			Label_1282:
				var_25_object = null;
	}
			object var_102_object;
			var_12_object = var_102_object;
			func_1176(var_102_object);
		}
		if((var_29_cvector | var_24_cvector) >= 0.70710677)
			var_25_object->add(var_28_cvector);
		var_26_int += 1;
	}
	int var_30_int;
	var_25_object->size(var_30_int);
	if(var_30_int == 0) goto Label_1282;
	int var_31_int;
	@irand(var_31_int, var_30_int);
	cvector var_32_cvector;
	var_25_object->get(var_32_cvector, var_31_int);
	object var_57_object; int var_58_int; float var_59_float; cvector var_60_cvector; cvector var_61_cvector;
	var_12_object = var_57_object;
	var_13_int = var_58_int;
	var_14_float = var_59_float;
	var_32_cvector = var_60_cvector;
	var_61_cvector = -var_24_cvector;
	func_1288(var_59_float, var_60_cvector, var_61_cvector);
}


void func_1094(bool var_16_bool, object var_17_object)
{
	bool var_19_bool;
	@IsPlayerActor(var_17_object, var_19_bool);
	var_19_bool = var_16_bool;
}


// @pe
void func_1608(void)
{
}


void func_1348(object var_16_object)
{
	object var_18_object;
	@self(var_18_object);
	var_18_object = var_16_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1610(void)
{
}


void func_1354(cvector var_40_cvector, cvector var_41_cvector)
{
	float var_49_float = sqrt(var_41_cvector | var_41_cvector);
	if(var_49_float < 0.000001)
		var_40_cvector = [0.0, 0.0, 0.0];
	var_40_cvector = var_41_cvector / var_49_float;
}


void func_1612(void)
{
	TaskCall(0);
	func_0();
	TaskReturn();
}


void func_333(void)
{
	int var_51_int; int var_52_int; bool var_53_bool; float var_54_float; bool var_55_bool;
	@WaitForAnimEnd();
	bool var_56_bool;
	func_1302(var_56_bool);
	if(!var_56_bool) //@nz
		return 14;
	int var_58_int;
	func_1552(var_58_int);
	int var_49_int;
	var_58_int = var_49_int;
	int var_50_int = 0;
	
	for(;;) {
		bool var_71_bool = false;
		if(var_50_int < 5) {
			bool var_74_bool;
			func_1302(var_74_bool);
			if(var_74_bool != 0)
				var_71_bool = true;
		}
		if(var_71_bool != 0) {
			@irand(var_51_int, 3);
			if(var_51_int == 0) {
				if(var_49_int == 0) goto Label_380;
				@irand(var_52_int, var_49_int);
				string var_80_string; int var_81_int;
				var_52_int = var_81_int;
				func_1545(var_80_string, var_81_int);
				@PlayAnimation("all", var_80_string);
				@WaitForAnimEnd(var_53_bool);
				if(!var_53_bool) { //@nz
				} else {
			} else {
			if(var_51_int == 1) {
				@rand(var_54_float, 4);
				@Sleep((var_54_float + 1), var_55_bool);
				if(!var_55_bool) { //@nz
					goto Label_409;
				}
			} else if(var_50_int != 0) {
				goto Label_409;
			}
			}
					bool var_83_bool;
					func_412(var_83_bool);
					var_84_bool = !var_83_bool; //@nz
					if(var_84_bool == 0) goto Label_404;
			}
		}
	Label_409:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_404:
		@ResetAAS();
		var_50_int += 1;
	}
	
}


void func_1099(bool var_42_bool, object var_43_object, string var_44_string)
{
	var_49_bool = IsFuncExist(var_43_object, "HasProperty", 2);
	if(!var_49_bool) { //@nz
		var_42_bool = false;
		return 2;
	}
	bool var_46_bool;
	var_43_object->HasProperty(var_44_string, var_46_bool);
	var_46_bool = var_42_bool;
}


// @pe
void func_1618(int var_11_int)
{
	var_11_int = 0;
}


// @pe
void func_1364(float var_71_float, cvector var_72_cvector, cvector var_73_cvector)
{
	var_78_float = sqrt((var_72_cvector | var_72_cvector) * (var_73_cvector | var_73_cvector));
	var_71_float = (var_72_cvector | var_73_cvector) / var_78_float;
}


// @pe
void func_1621(void)
{
}


// @pe
void func_1623(int var_38_int)
{
	var_38_int = 0;
}


void func_1111(bool var_35_bool, object var_36_object)
{
	bool var_38_bool;
	var_36_object->IsDead(var_38_bool);
	var_38_bool = var_35_bool;
}


// @pe
void func_1497(object var_21_object)
{
	object var_22_object;
	var_21_object = var_22_object;
	func_1631();
}


// @pe
void func_1626(void)
{
}


void func_1116(bool var_24_bool, object var_25_object)
{
	if(var_25_object == null) {
		var_24_bool = false;
		return 4;
	}
	bool var_31_bool = false;
	var_34_bool = IsFuncExist(var_25_object, "IsDead", 1);
	if(var_34_bool != 0) {
		bool var_35_bool; object var_36_object;
		var_25_object = var_36_object;
		func_1111(var_35_bool, var_36_object);
		if(var_35_bool != 0)
			var_31_bool = true;
	}
	if(var_31_bool != 0) {
		var_24_bool = false;
		return 4;
	}
	object var_28_object;
	@GetScene(var_28_object);
	if(var_28_object == null) {
		var_24_bool = false;
		return 4;
	}
	object var_29_object;
	var_25_object->GetScene(var_29_object);
	if(var_28_object != var_29_object) {
		var_24_bool = false;
		return 4;
	}
	var_24_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1372(object var_9_object)
{
	object var_10_object;
	var_9_object = var_10_object;
	TaskCall(1);
	func_13(var_10_object);
	TaskReturn();
}


void func_606(bool var_0_bool, bool var_1_bool)
{
	float var_21_float; cvector var_22_cvector; cvector var_23_cvector; bool var_24_bool; object var_25_object; bool var_26_bool;
	@rand(var_21_float, 0.5);
	@Sleep(var_21_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_618:
				@GetPosition(var_23_cvector);
				float var_30_float;
				func_665(var_30_float);
				@GetRandomPFPointInCircle(var_22_cvector, var_23_cvector, var_30_float, var_24_bool);
				if(var_24_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_618;
			}
				var_1_bool = false;
		}
		}
		goto Label_634;

	Label_634:
		object var_34_object; cvector var_35_cvector;
		var_22_cvector = var_35_cvector;
		func_695(var_34_object, var_35_cvector);
		var_34_object = var_25_object;
		if(var_25_object != null) {
			@RotatePath(var_25_object, var_26_bool);
			if(var_26_bool != 0) {
				bool var_40_bool;
				func_693(var_40_bool);
				@FollowPath(var_25_object, var_40_bool, var_26_bool);
				var_25_object = null;
				if(var_26_bool != 0) {
					TaskCall(2);
					func_333();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_25_object = null;
	}
	
}


// @pe
void func_1503(object var_11_object)
{
	bool var_12_bool; object var_13_object;
	func_1094(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		object var_16_object;
		func_1348(var_16_object);
		@ReportReputationChange(var_13_object, var_16_object, 0.0);
	}
}


void func_863(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


// @pe
void func_1628(bool var_14_bool)
{
	var_14_bool = false;
}


// @pe
void func_1633(bool var_21_bool)
{
	var_21_bool = false;
}


// @pe
void func_1631(void)
{
}


// @pe
void func_1636(void)
{
}


void func_738(bool var_0_bool, bool var_1_bool, object var_2_object, object var_61_object)
{
	float var_71_float; cvector var_73_cvector; float var_74_float;
	cvector var_75_cvector;
	func_708(var_74_float, var_75_cvector, 1.7453294);
	cvector var_70_cvector;
	var_75_cvector = var_70_cvector;
	if((var_70_cvector | var_70_cvector) < 2500.0) {
		cvector var_107_cvector;
		func_708(var_74_float, var_107_cvector, 2.6179938);
		var_107_cvector = var_70_cvector;
		var_71_float = var_70_cvector | var_70_cvector;
		if(var_71_float < 2500.0) {
			var_112_float = sqrt(var_71_float);
			@Trace("Can't retreat, distance: " + var_112_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_115_float = GetByIndex(var_70_cvector, 0);
	var_116_float = GetByIndex(var_70_cvector, 2);
	@Rotate(var_115_float, var_116_float);
	cvector var_117_cvector;
	func_1082(var_117_cvector);
	@SetTimer(120, 0.5);
	
Label_780:
	bool var_72_bool;
	@MovePoint((var_117_cvector + var_70_cvector), 1, var_72_bool);
	if(var_72_bool != 0) {
		if(var_61_object == null) {
			goto Label_810;
		EMIT "GOTO 0x328";

		Label_810:
			for(;;) {
				return 10;
		}
			cvector var_125_cvector;
			func_708(var_74_float, var_125_cvector, 2.6179938);
			var_125_cvector = var_73_cvector;
			if((var_73_cvector | var_73_cvector) >= 2500.0) {
				cvector var_129_cvector;
				func_1082(var_129_cvector);
				var_1_bool = var_129_cvector + var_73_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_780; //@nz

	}
}


// @pe
void func_1638(bool var_25_bool)
{
	var_25_bool = false;
}


// @pe
void func_1641(void)
{
}


// @pe
void func_1643(bool var_16_bool)
{
	var_16_bool = false;
}


void func_1516(bool var_9_bool, string var_10_string)
{
	object var_12_object;
	if(var_10_string == "heal") {
		@FindActor(var_12_object, "player");
		bool var_16_bool; object var_17_object;
		var_12_object = var_17_object;
		func_1643(var_17_object);
		var_16_bool = var_9_bool;
	EMIT "Stack[-1] = 0";
	}
	var_9_bool = false;
}


// @pe
void func_1646(void)
{
}


void func_879(bool var_0_bool, bool var_60_bool)
{
	cvector var_63_cvector;
	@GetDirection(var_63_cvector);
	cvector var_65_cvector;
	func_1087(var_65_cvector, var_0_bool);
	cvector var_64_cvector;
	var_65_cvector = var_64_cvector;
	float var_71_float; cvector var_72_cvector; cvector var_73_cvector;
	var_63_cvector = var_72_cvector;
	var_64_cvector = var_73_cvector;
	func_1364(var_71_float, var_72_cvector, var_73_cvector);
	var_60_bool = var_71_float >= -0.34202012;
}


void func_1648(void)
{
}


// @pe
void func_1649(bool var_13_bool)
{
	var_13_bool = true;
}


void func_1532(string var_18_string)
{
	object var_20_object;
	if(var_18_string == "heal") {
		@FindActor(var_20_object, "player");
		object var_24_object;
		var_20_object = var_24_object;
		func_1646();
		var_20_object = null;
	}
}


void func_895(bool var_0_bool, cvector var_22_cvector, float var_23_float)
{
	cvector var_30_cvector;
	@GetPosition(var_30_cvector);
	cvector var_31_cvector;
	var_0_bool->GetPosition(var_31_cvector); //@t
	cvector var_32_cvector;
	@GetDirection(var_32_cvector);
	cvector var_36_cvector;
	cvector var_38_cvector;
	func_1354(var_38_cvector, (var_30_cvector - var_31_cvector));
	func_1354(var_36_cvector, (var_38_cvector + (var_32_cvector * 0.75)));
	cvector var_33_cvector;
	var_36_cvector = var_33_cvector;
	cvector var_34_cvector;
	float var_35_float;
	@FindLongestDir(var_34_cvector, var_35_float, var_33_cvector, var_23_float, 32, 7000.0);
	if((var_35_float - 100) < 0)
		var_35_float = 0;
	var_22_cvector = var_34_cvector * var_35_float;
}


