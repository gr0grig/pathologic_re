task task_0
{
	void OnLoad(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool)
	{
		@StopGroup0();
	}

}


task task_1
{
	void OnUse(object actor, bool var_1_bool, bool var_2_bool, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		object var_12_object;
		var_8_bool = var_12_object;
		func_1200(var_12_object);
		int var_10_int;
		int var_11_int = var_10_int;
		if(var_10_int > 0) {
			object var_15_object;
			var_8_bool = var_15_object;
			func_1203();
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool)
	{
		func_1207();
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


maintask task_2
{
	void init(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool)
	{
		@SensePlayerOnly(true);
		func_1223();
		func_168();
	
		for(;;) {
			func_292(var_6_cvector, var_7_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		int var_9_int;
		object var_12_object;
		var_8_bool = var_12_object;
		func_1200(var_12_object);
		int var_10_int;
		int var_11_int = var_10_int;
		if(var_10_int > 0) {
			if(var_10_int > 1)
				func_356(var_9_int, var_10_int);
			object var_17_object;
			var_8_bool = var_17_object;
			func_1203();
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		int var_9_int;
		object var_12_object;
		var_8_bool = var_12_object;
		int var_11_int;
		func_1164(var_11_int, var_12_object);
		int var_10_int;
		var_11_int = var_10_int;
		if(var_10_int > 0) {
			if(var_10_int > 1)
				func_356(var_9_int, var_10_int);
			object var_51_object;
			var_8_bool = var_51_object;
			func_1174(var_51_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		int var_10_int; int var_11_int;
		object var_13_object;
		var_8_cvector = var_13_object;
		object var_14_object;
		var_9_bool = var_14_object;
		func_1224(var_14_object);
		bool var_12_bool;
		if(var_12_bool != 0) {
			int var_15_int; object var_16_object;
			var_8_cvector = var_16_object;
			func_1182(var_15_int, var_16_object);
			var_15_int = var_11_int;
			if(var_11_int > 0) {
				if(var_11_int > 1)
					func_356(var_10_int, var_11_int);
				object var_55_object;
				var_8_cvector = var_55_object;
				func_1192(var_55_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		int var_9_int;
		object var_12_object;
		var_8_bool = var_12_object;
		func_1213(var_12_object);
		int var_10_int;
		int var_11_int = var_10_int;
		if(var_10_int > 0) {
			if(var_10_int > 1)
				func_356(var_9_int, var_10_int);
			object var_17_object;
			var_8_bool = var_17_object;
			func_1216();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, object var_2_object, string var_3_string, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		int var_10_int;
		string var_13_string;
		var_9_bool = var_13_string;
		object var_14_object;
		var_8_cvector = var_14_object;
		func_1218(var_14_object);
		int var_11_int;
		int var_12_int = var_11_int;
		if(var_11_int > 0) {
			if(var_11_int > 1)
				func_356(var_10_int, var_11_int);
			string var_19_string; object var_20_object;
			var_9_bool = var_19_string;
			var_8_cvector = var_20_object;
			func_1221();
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool)
	{
		func_356(var_6_cvector, var_7_bool);
		func_1207();
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
		func_356(var_7_cvector, var_8_bool);
		object var_9_object;
		var_8_bool = var_9_object;
		func_1126();
	}

}


task task_3
{
	void OnUse(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		object var_12_object;
		var_8_bool = var_12_object;
		func_1200(var_12_object);
		int var_10_int;
		int var_11_int = var_10_int;
		if(var_10_int > 0) {
			if(var_10_int > 1)
				func_558();
			object var_17_object;
			var_8_bool = var_17_object;
			func_1203();
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		object var_12_object;
		var_8_bool = var_12_object;
		int var_11_int;
		func_1164(var_11_int, var_12_object);
		int var_10_int;
		var_11_int = var_10_int;
		if(var_10_int > 0) {
			if(var_10_int > 1)
				func_558();
			object var_51_object;
			var_8_bool = var_51_object;
			func_1174(var_51_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		int var_11_int;
		object var_13_object;
		var_8_cvector = var_13_object;
		object var_14_object;
		var_9_bool = var_14_object;
		func_1224(var_14_object);
		bool var_12_bool;
		if(var_12_bool != 0) {
			int var_15_int; object var_16_object;
			var_8_cvector = var_16_object;
			func_1182(var_15_int, var_16_object);
			var_15_int = var_11_int;
			if(var_11_int > 0) {
				if(var_11_int > 1)
					func_558();
				object var_55_object;
				var_8_cvector = var_55_object;
				func_1192(var_55_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		object var_12_object;
		var_8_bool = var_12_object;
		func_1213(var_12_object);
		int var_10_int;
		int var_11_int = var_10_int;
		if(var_10_int > 0) {
			if(var_10_int > 1)
				func_558();
			object var_17_object;
			var_8_bool = var_17_object;
			func_1216();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, object var_2_object, string var_3_string, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool)
	{
		string var_13_string;
		var_9_bool = var_13_string;
		object var_14_object;
		var_8_cvector = var_14_object;
		func_1218(var_14_object);
		int var_11_int;
		int var_12_int = var_11_int;
		if(var_11_int > 0) {
			if(var_11_int > 1)
				func_558();
			string var_19_string; object var_20_object;
			var_9_bool = var_19_string;
			var_8_cvector = var_20_object;
			func_1221();
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool)
	{
		func_558();
		func_1207();
	}

}


task task_4
{
	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool)
	{
		func_716(var_7_bool);
		func_1207();
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
			func_570(var_16_float, var_22_cvector, 1.7453294);
			var_22_cvector = var_15_cvector;
			var_16_float = var_15_cvector | var_15_cvector;
			bool var_52_bool = false;
			if(var_16_float >= 10000.0) {
				bool var_55_bool;
				var_59_bool = var_16_float >= ((var_14_float * var_14_float) * 2.25);
				if(var_59_bool != 1) {
					bool var_60_bool;
					func_732(true, var_60_bool);
					if(var_60_bool != 1)
						var_55_bool = false;
				}
				if(var_55_bool != 0)
					var_52_bool = true;
			}
			if(var_52_bool == 0) goto Label_715;
			@Stop();
			cvector var_80_cvector;
			func_926(var_80_cvector);
			var_1_bool = var_80_cvector + var_15_cvector;
		}
	Label_715:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool)
	{
		func_716(var_8_bool);
		object var_10_object;
		var_8_bool = var_10_object;
		func_1126();
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
			func_748(var_16_float, var_22_cvector, 1.7453294);
			var_22_cvector = var_15_cvector;
			var_16_float = var_15_cvector | var_15_cvector;
			bool var_52_bool = false;
			if(var_16_float >= 10000.0) {
				bool var_55_bool;
				var_59_bool = var_16_float >= ((var_14_float * var_14_float) * 2.25);
				if(var_59_bool != 1) {
					bool var_60_bool;
					func_910(true, var_60_bool);
					if(var_60_bool != 1)
						var_55_bool = false;
				}
				if(var_55_bool != 0)
					var_52_bool = true;
			}
			if(var_52_bool == 0) goto Label_893;
			@Stop();
			cvector var_80_cvector;
			func_926(var_80_cvector);
			var_1_bool = var_80_cvector + var_15_cvector;
		}
	Label_893:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object)
	{
		func_894(var_8_object);
		object var_10_object;
		var_8_object = var_10_object;
		func_1126();
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
	func_1105(var_9_object);
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
	func_1015(var_13_int, var_14_float);
}


void func_0(void)
{
	@Hold();
}


// @pe
void func_6(object var_10_object)
{
	object var_11_object;
	var_10_object = var_11_object;
	func_39(var_11_object);
	object var_61_object;
	var_10_object = var_61_object;
	func_1205();
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_778(bool var_0_bool, bool var_1_bool, object var_2_object, object var_56_object)
{
	cvector var_68_cvector; float var_69_float;
	cvector var_70_cvector;
	func_748(var_69_float, var_70_cvector, 1.7453294);
	cvector var_65_cvector;
	var_70_cvector = var_65_cvector;
	float var_66_float = var_65_cvector | var_65_cvector;
	if(var_66_float < 10000.0) {
		var_103_float = sqrt(var_66_float);
		@Trace("Can't retreat, distance: " + var_103_float);
		@Sleep(0.5);
		return 10;
	}
	var_106_float = GetByIndex(var_65_cvector, 0);
	var_107_float = GetByIndex(var_65_cvector, 2);
	@Rotate(var_106_float, var_107_float);
	cvector var_108_cvector;
	func_926(var_108_cvector);
	@SetTimer(120, 0.5);
	
Label_811:
	bool var_67_bool;
	@MovePoint((var_108_cvector + var_65_cvector), 1, var_67_bool);
	if(var_67_bool != 0) {
		if(var_56_object == null) {
			goto Label_841;
		EMIT "GOTO 0x347";

		Label_841:
			for(;;) {
				return 10;
		}
			cvector var_116_cvector;
			func_748(var_69_float, var_116_cvector, 2.6179938);
			var_116_cvector = var_68_cvector;
			if((var_68_cvector | var_68_cvector) >= 10000.0) {
				cvector var_120_cvector;
				func_926(var_120_cvector);
				var_1_bool = var_120_cvector + var_68_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_811; //@nz

	}
}


// @pe
void func_1164(int var_11_int, object var_12_object)
{
	object var_14_object;
	var_12_object = var_14_object;
	bool var_13_bool;
	func_991(var_13_bool, var_14_object);
	if(var_13_bool != 0)
		var_11_int = 2;
	else
		var_11_int = 0;
	
}


void func_910(bool var_0_bool, bool var_60_bool)
{
	cvector var_63_cvector;
	@GetDirection(var_63_cvector);
	cvector var_65_cvector;
	func_931(var_65_cvector, var_0_bool);
	cvector var_64_cvector;
	var_65_cvector = var_64_cvector;
	float var_71_float; cvector var_72_cvector; cvector var_73_cvector;
	var_63_cvector = var_72_cvector;
	var_64_cvector = var_73_cvector;
	func_1097(var_71_float, var_72_cvector, var_73_cvector);
	var_60_bool = var_71_float >= -0.34202012;
}


void func_894(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


// @pe
void func_1174(object var_51_object)
{
	object var_52_object;
	var_51_object = var_52_object;
	TaskCall(4);
	func_600(var_53_object, var_54_cvector, var_55_bool, var_52_object);
	TaskReturn();
}


// @pe
void func_1182(int var_15_int, object var_16_object)
{
	object var_18_object;
	var_16_object = var_18_object;
	bool var_17_bool;
	func_991(var_17_bool, var_18_object);
	if(var_17_bool != 0)
		var_15_int = 2;
	else
		var_15_int = 0;
	
}


void func_926(cvector var_80_cvector)
{
	cvector var_82_cvector;
	@GetPosition(var_82_cvector);
	var_82_cvector = var_80_cvector;
}


void func_931(cvector var_65_cvector, object var_66_object)
{
	cvector var_69_cvector;
	@GetPosition(var_69_cvector);
	cvector var_70_cvector;
	var_66_object->GetPosition(var_70_cvector);
	var_65_cvector = var_70_cvector - var_69_cvector;
}


void func_292(bool var_0_bool, bool var_1_bool)
{
	float var_20_float; cvector var_21_cvector; cvector var_22_cvector; float var_23_float; bool var_24_bool; object var_25_object; bool var_26_bool;
	@rand(var_20_float, 0.5);
	@Sleep(var_20_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_304:
				@GetPosition(var_22_cvector);
				@GetCameraFarDistance(var_23_float);
				@GetRandomPFPointInCircle(var_21_cvector, var_22_cvector, (var_23_float * 2.5), var_24_bool);
				if(var_24_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_304;
			}
				var_1_bool = false;
		}
		}
		goto Label_321;

	Label_321:
		@FindShiftedPathTo(var_25_object, var_21_cvector);
		if(var_25_object != null) {
			@RotatePath(var_25_object, var_26_bool);
			if(var_26_bool != 0) {
				bool var_34_bool;
				func_372(var_34_bool);
				@FollowPath(var_25_object, var_34_bool, var_26_bool);
				var_25_object = null;
				if(var_26_bool != 0) {
					TaskCall(3);
					func_489();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_25_object = null;
	}
	
}


void func_39(object var_11_object)
{
	cvector var_22_cvector; cvector var_23_cvector; cvector var_24_cvector; cvector var_25_cvector; string var_26_string; object var_27_object; bool var_28_bool; bool var_29_bool; float var_30_float; cvector var_31_cvector;
	if(var_11_object == null) {
		func_126("fdie");
	} else {
		var_11_object->GetPosition(var_22_cvector);
		@GetPosition(var_23_cvector);
		@GetDirection(var_24_cvector);
		var_25_cvector = var_23_cvector - var_22_cvector;
		var_36_float = GetByIndex(var_25_cvector, 0);
		var_37_float = GetByIndex(var_24_cvector, 0);
		var_39_float = GetByIndex(var_25_cvector, 2);
		var_40_float = GetByIndex(var_24_cvector, 2);
		if(((var_36_float * var_37_float) + (var_39_float * var_40_float)) >= 0)
			var_26_string = "fdie";
		else
			var_26_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_11_object = var_27_object;
		var_47_bool = IsFuncExist(var_11_object, "GetScriptProperty", 2);
		if(var_47_bool != 0) {
			var_11_object->HasScriptProperty(var_28_bool, "Owner");
			if(var_28_bool != 0) {
				var_11_object->GetScriptProperty(var_27_object, "Owner");
				if(var_27_object == null)
					var_11_object = var_27_object;
			}
		}
		var_54_bool = IsFuncExist(var_27_object, "@GetEyesHeight", 1);
		if(var_54_bool != 0) {
			var_27_object->GetEyesHeight(var_30_float);
			var_31_cvector = [0.0, 0.0, 0.0];
			var_55_float = GetByIndex(var_31_cvector, 1);
			var_30_float = var_55_float;
			SetByIndex(var_31_cvector, 1) = var_55_float;
			@LookAsync(var_11_object, "head", var_31_cvector);
			var_29_bool = true;
		} else {
			var_29_bool = false;

		}
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


void func_168(void)
{
	bool var_9_bool;
	func_1082(var_9_bool);
	if(!var_9_bool) //@nz
		func_1207();
}


// @pe
void func_1192(object var_55_object)
{
	object var_56_object;
	var_55_object = var_56_object;
	TaskCall(5);
	func_778(var_57_object, var_58_cvector, var_59_bool, var_56_object);
	TaskReturn();
}


void func_938(bool var_39_bool, object var_40_object, string var_41_string)
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


void func_558(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1200(int var_11_int)
{
	var_11_int = 0;
}


// @pe
void func_1203(void)
{
}


// @pe
void func_1205(void)
{
}


void func_950(bool var_32_bool, object var_33_object)
{
	bool var_35_bool;
	var_33_object->IsDead(var_35_bool);
	var_35_bool = var_32_bool;
}


void func_1207(void)
{
	TaskCall(0);
	func_0();
	TaskReturn();
}


void func_1082(bool var_9_bool)
{
	bool var_11_bool;
	@IsLoaded(var_11_bool);
	var_11_bool = var_9_bool;
}


void func_570(bool var_0_bool, cvector var_22_cvector, float var_23_float)
{
	cvector var_30_cvector;
	@GetPosition(var_30_cvector);
	cvector var_31_cvector;
	var_0_bool->GetPosition(var_31_cvector); //@t
	cvector var_32_cvector;
	@GetDirection(var_32_cvector);
	cvector var_36_cvector;
	cvector var_38_cvector;
	func_1087(var_38_cvector, (var_30_cvector - var_31_cvector));
	func_1087(var_36_cvector, (var_38_cvector + (var_32_cvector * 0.75)));
	cvector var_33_cvector;
	var_36_cvector = var_33_cvector;
	cvector var_34_cvector;
	float var_35_float;
	@FindLongestDir(var_34_cvector, var_35_float, var_33_cvector, var_23_float, 32, 7000.0);
	if((var_35_float - 100) < 0)
		var_35_float = 0;
	var_22_cvector = var_34_cvector * var_35_float;
}


void func_955(bool var_21_bool, object var_22_object)
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
		func_950(var_32_bool, var_33_object);
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


// @pe
void func_1213(int var_11_int)
{
	var_11_int = 0;
}


void func_1087(cvector var_38_cvector, cvector var_39_cvector)
{
	float var_41_float = sqrt(var_39_cvector | var_39_cvector);
	if(var_41_float < 0.000001)
		var_38_cvector = [0.0, 0.0, 0.0];
	var_38_cvector = var_39_cvector / var_41_float;
}


// @pe
void func_1216(void)
{
}


// @pe
void func_1218(int var_12_int)
{
	var_12_int = 0;
}


// @pe
void func_1221(void)
{
}


void func_1223(void)
{
}


// @pe
void func_1224(bool var_12_bool)
{
	var_12_bool = true;
}


// @pe
void func_1097(float var_71_float, cvector var_72_cvector, cvector var_73_cvector)
{
	var_78_float = sqrt((var_72_cvector | var_72_cvector) * (var_73_cvector | var_73_cvector));
	var_71_float = (var_72_cvector | var_73_cvector) / var_78_float;
}


void func_716(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


// @pe
void func_1105(object var_9_object)
{
	object var_10_object;
	var_9_object = var_10_object;
	TaskCall(1);
	func_6(var_10_object);
	TaskReturn();
}


void func_600(bool var_0_bool, bool var_1_bool, object var_2_object, object var_52_object)
{
	cvector var_64_cvector; float var_65_float;
	cvector var_66_cvector;
	func_570(var_65_float, var_66_cvector, 1.7453294);
	cvector var_61_cvector;
	var_66_cvector = var_61_cvector;
	float var_62_float = var_61_cvector | var_61_cvector;
	if(var_62_float < 10000.0) {
		var_99_float = sqrt(var_62_float);
		@Trace("Can't retreat, distance: " + var_99_float);
		@Sleep(0.5);
		return 10;
	}
	var_102_float = GetByIndex(var_61_cvector, 0);
	var_103_float = GetByIndex(var_61_cvector, 2);
	@Rotate(var_102_float, var_103_float);
	cvector var_104_cvector;
	func_926(var_104_cvector);
	@SetTimer(120, 0.5);
	
Label_633:
	bool var_63_bool;
	@MovePoint((var_104_cvector + var_61_cvector), 1, var_63_bool);
	if(var_63_bool != 0) {
		if(var_52_object == null) {
			goto Label_663;
		EMIT "GOTO 0x295";

		Label_663:
			for(;;) {
				return 10;
		}
			cvector var_112_cvector;
			func_570(var_65_float, var_112_cvector, 2.6179938);
			var_112_cvector = var_64_cvector;
			if((var_64_cvector | var_64_cvector) >= 10000.0) {
				cvector var_116_cvector;
				func_926(var_116_cvector);
				var_1_bool = var_116_cvector + var_64_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_633; //@nz

	}
}


void func_732(bool var_0_bool, bool var_60_bool)
{
	cvector var_63_cvector;
	@GetDirection(var_63_cvector);
	cvector var_65_cvector;
	func_931(var_65_cvector, var_0_bool);
	cvector var_64_cvector;
	var_65_cvector = var_64_cvector;
	float var_71_float; cvector var_72_cvector; cvector var_73_cvector;
	var_63_cvector = var_72_cvector;
	var_64_cvector = var_73_cvector;
	func_1097(var_71_float, var_72_cvector, var_73_cvector);
	var_60_bool = var_71_float >= -0.34202012;
}


void func_991(bool var_17_bool, object var_18_object)
{
	object var_22_object;
	var_18_object = var_22_object;
	bool var_21_bool;
	func_955(var_21_bool, var_22_object);
	if(!var_21_bool) { //@nz
		var_17_bool = false;
		return 2;
	}
	bool var_39_bool; object var_40_object;
	func_938(var_39_bool, var_40_object, "noaccess");
	if(!var_39_bool) { //@nz
		var_17_bool = true;
		return 2;
	}
	int var_20_int;
	var_40_object->GetProperty("noaccess", var_20_int);
	var_17_bool = var_20_int == 0;
}


void func_356(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_489(void)
{
	int var_45_int; int var_46_int; bool var_47_bool; float var_48_float; bool var_49_bool;
	@WaitForAnimEnd();
	bool var_50_bool;
	func_1082(var_50_bool);
	if(!var_50_bool) //@nz
		return 14;
	int var_52_int;
	func_1147(var_52_int);
	int var_43_int;
	var_52_int = var_43_int;
	int var_44_int = 0;
	
	for(;;) {
		bool var_65_bool = false;
		if(var_44_int < 5) {
			bool var_68_bool;
			func_1082(var_68_bool);
			if(var_68_bool != 0)
				var_65_bool = true;
		}
		if(var_65_bool != 0) {
			@irand(var_45_int, 3);
			if(var_45_int == 0) {
				if(var_43_int == 0) goto Label_536;
				@irand(var_46_int, var_43_int);
				string var_74_string; int var_75_int;
				var_46_int = var_75_int;
				func_1140(var_74_string, var_75_int);
				@PlayAnimation("all", var_74_string);
				@WaitForAnimEnd(var_47_bool);
				if(!var_47_bool) { //@nz
				} else {
			} else {
			if(var_45_int == 1) {
				@rand(var_48_float, 4);
				@Sleep((var_48_float + 1), var_49_bool);
				if(!var_49_bool) { //@nz
					goto Label_557;
				}
			} else if(var_44_int != 0) {
				goto Label_557;
			}
			}
				var_44_int += 1;
			}
		}
	Label_557:
		return 14;

	}
	
}


void func_748(bool var_0_bool, cvector var_22_cvector, float var_23_float)
{
	cvector var_30_cvector;
	@GetPosition(var_30_cvector);
	cvector var_31_cvector;
	var_0_bool->GetPosition(var_31_cvector); //@t
	cvector var_32_cvector;
	@GetDirection(var_32_cvector);
	cvector var_36_cvector;
	cvector var_38_cvector;
	func_1087(var_38_cvector, (var_30_cvector - var_31_cvector));
	func_1087(var_36_cvector, (var_38_cvector + (var_32_cvector * 0.75)));
	cvector var_33_cvector;
	var_36_cvector = var_33_cvector;
	cvector var_34_cvector;
	float var_35_float;
	@FindLongestDir(var_34_cvector, var_35_float, var_33_cvector, var_23_float, 32, 7000.0);
	if((var_35_float - 100) < 0)
		var_35_float = 0;
	var_22_cvector = var_34_cvector * var_35_float;
}


void func_372(bool var_34_bool)
{
	var_34_bool = false;
}


void func_1140(string var_58_string, int var_59_int)
{
	string var_61_string = "idle";
	if(var_59_int != 0)
		var_61_string += var_59_int;
	var_61_string = var_58_string;
}


void func_1015(object var_12_object, int var_13_int)
{
	object var_25_object; object var_26_object; cvector var_27_cvector; float var_28_float; string var_34_string;
	bool var_35_bool = false;
	if(var_13_int != 4) {
		if(var_13_int != 5)
			var_35_bool = true;
	}
	if(var_35_bool != 0) {
		@GetScene(var_25_object);
		@GetPosition(var_27_cvector);
		@GetEyesHeight(var_28_float);
		var_40_float = GetByIndex(var_27_cvector, 1);
		SetByIndex(var_27_cvector, 1) = (var_40_float + (var_28_float / 2));
		@AddActorByType(var_26_object, "scripted", var_25_object, var_27_cvector, [0.0, 0.0, 1.0], "blood.xml");
		var_26_object = null;
		var_25_object = null;
	}
	if(var_12_object == null)
		return 20;
	int var_29_int;
	@GetSecondaryAnimationType(var_29_int);
	if(var_29_int < 0)
		return 20;
	cvector var_30_cvector;
	var_12_object->GetPosition(var_30_cvector);
	cvector var_31_cvector;
	@GetPosition(var_31_cvector);
	cvector var_32_cvector;
	@GetDirection(var_32_cvector);
	cvector var_33_cvector = var_31_cvector - var_30_cvector;
	var_49_float = GetByIndex(var_33_cvector, 0);
	var_50_float = GetByIndex(var_32_cvector, 0);
	var_52_float = GetByIndex(var_33_cvector, 2);
	var_53_float = GetByIndex(var_32_cvector, 2);
	if(((var_49_float * var_50_float) + (var_52_float * var_53_float)) >= 0)
		var_34_string = "fhit";
	else
		var_34_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_34_string + "1"), (var_34_string + "2"), -10);
	
}


void func_1147(int var_52_int)
{
	int var_55_int; bool var_56_bool;
	var_55_int = 0;
	
	for(;;) {
		string var_58_string; int var_59_int;
		var_55_int = var_59_int;
		func_1140(var_58_string, var_59_int);
		@HasAnimation(var_56_bool, "all", var_58_string);
		if(!var_56_bool) //@nz
			break;
		var_55_int += 1;
	}
	var_55_int = var_52_int;
}


// @pe
void func_126(string var_33_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_33_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_33_string);
	@RemoveEnvelope();
}


