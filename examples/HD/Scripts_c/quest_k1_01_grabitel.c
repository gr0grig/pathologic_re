// @GLOBALS: 0:bool:

task task_0
{
}


task task_1
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		object var_11_object;
		var_10_bool = var_11_object;
		func_2201();
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_14_object;
		var_10_bool = var_14_object;
		object var_15_object;
		var_11_object = var_15_object;
		func_2203(var_15_object);
	}

	// @pe
	void OnTrigger(bool var_0_bool, string var_1_string, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		if(var_10_bool == "kill")
			var_0_bool = true;
	}

}


task task_2
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, object var_7_object, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		object var_11_object;
		var_10_bool = var_11_object;
		func_2201();
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, object var_7_object, object var_8_object, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_14_object;
		var_10_bool = var_14_object;
		object var_15_object;
		var_11_object = var_15_object;
		func_2203(var_15_object);
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, string var_7_string, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		if(var_10_bool == "kill") {
			var_13_bool = GlobalVars[0];
			GlobalVars[0] = true;
		}
	}

}


task task_3
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
	{
		object var_11_object;
		var_10_object = var_11_object;
		func_2201();
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, bool var_12_bool)
	{
		object var_14_object;
		var_10_object = var_14_object;
		object var_15_object;
		var_11_object = var_15_object;
		func_2203(var_15_object);
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, string var_10_string)
	{
		if(var_10_string == "kill") {
			var_13_bool = GlobalVars[0];
			GlobalVars[0] = true;
			func_987(var_10_string);
		}
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, int var_10_int)
	{
		if(var_10_int == 1) {
			func_2063(var_1_object);
		} else {
			int var_18_int;
			func_1131(var_9_bool, var_18_int, var_18_int);
		}
	
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
	{
		bool var_11_bool = false;
		if(var_1_object == var_10_object) {
			if(!var_2_int) //@nz
				var_11_bool = true;
		}
		if(var_11_bool != 0) {
			var_2_int = true;
			object var_14_object;
			var_10_object = var_14_object;
			func_1883(var_14_object);
		}
	}

	// @pe
	void OnStopSee(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
	{
		bool var_11_bool = false;
		if(var_1_object == var_10_object) {
			if(var_2_int != 0)
				var_11_bool = true;
		}
		if(var_11_bool != 0) {
			var_2_int = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
	{
		@RequestClearPath(var_10_object);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
	{
		func_987(var_10_object);
		object var_15_object;
		var_10_object = var_15_object;
		func_2128();
	}

}


task task_4
{
}


maintask task_5
{
	void init(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool)
	{
		func_1197("hunt");
	}

	// @pe
		void OnAttacked(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, object var_14_object)
		{
		object var_16_object;
		var_14_object = var_16_object;
			bool var_15_bool;
		func_2134(var_15_bool, var_16_object);
		if(var_15_bool != 0) {
			func_1312();
			object var_51_object;
			var_14_object = var_51_object;
			func_2141(var_51_object);
		}
		}

	void OnSee(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
	{
		bool var_12_bool;
		@IsPlayerActor(var_10_object, var_12_bool);
		if(var_12_bool != 0) {
			object var_14_object;
			var_10_object = var_14_object;
			func_1207();
		}
	}

	void OnHear(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
	{
		bool var_12_bool;
		@IsPlayerActor(var_10_object, var_12_bool);
		if(var_12_bool != 0) {
			object var_14_object;
			var_10_object = var_14_object;
			func_1207();
		}
	}

}


task task_6
{
	void OnUse(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
	{
		bool var_12_bool;
		@IsOverrideActive(var_12_bool);
		if(!var_12_bool) { //@nz
			object var_14_object;
			var_10_object = var_14_object;
			func_2153(var_14_object);
		}
	}

	// @pe
	void OnHit(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, int var_11_int, float var_12_float, float var_13_float)
	{
	}

	// @pe
	void OnPropertyChange(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, string var_11_string)
	{
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
	{
	}

}


// @pe
void OnHit(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, int var_11_int, float var_12_float, float var_13_float)
{
	object var_14_object;
	var_10_object = var_14_object;
	int var_15_int;
	var_11_int = var_15_int;
	float var_16_float;
	var_12_float = var_16_float;
	func_1785(var_14_object, var_15_int, var_16_float);
}


// @pe
void OnHit2(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, int var_11_int, float var_12_float, float var_13_float, cvector var_14_cvector, cvector var_15_cvector)
{
	object var_16_object;
	var_10_object = var_16_object;
	int var_17_int;
	var_11_int = var_17_int;
	float var_18_float;
	var_12_float = var_18_float;
	cvector var_19_cvector;
	var_14_cvector = var_19_cvector;
	cvector var_20_cvector;
	var_15_cvector = var_20_cvector;
	func_1853(var_18_float, var_19_cvector, var_20_cvector);
}


void OnPropertyChange(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, string var_11_string)
{
	float var_13_float;
	if(var_11_string == "health") {
		@GetProperty("health", var_13_float);
		if(var_13_float <= 0)
			@SignalDeath(var_10_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
{
	object var_11_object;
	var_10_object = var_11_object;
	func_2089(var_11_object);
}


void func_0(bool var_61_bool, object var_62_object, bool var_84_bool, object var_689_object)
{
	object var_66_object;
	var_62_object = var_66_object;
	bool var_65_bool;
	func_1698(var_65_bool, var_66_object);
	if(!var_65_bool) { //@nz
		var_61_bool = false;
		return 2;
	}
	float var_68_float; object var_69_object;
	var_62_object = var_69_object;
	func_1506(var_68_float, var_69_object);
	float var_64_float;
	var_68_float = var_64_float;
	bool var_76_bool; float var_77_float;
	func_1993(var_76_bool, var_77_float, 250000.0, 3240000.0);
	if(var_76_bool != 0) {
		bool var_82_bool; object var_83_object;
		var_62_object = var_83_object;
		TaskCall(1);
		func_37(var_77_float, var_84_bool, var_82_bool, var_83_object);
		TaskReturn();
		var_84_bool = var_61_bool;
		return 2;
	}
	bool var_687_bool; object var_688_object;
	var_62_object = var_688_object;
	TaskCall(2);
	func_163(var_687_bool, var_688_object);
	TaskReturn();
	var_689_object = var_61_bool;
}


void func_1029(bool var_0_bool, object var_1_object, bool var_301_bool, object var_302_object, float var_303_float, float var_304_float, bool var_305_bool, bool var_306_bool)
{
	bool var_315_bool; object var_317_object; cvector var_318_cvector; cvector var_319_cvector; float var_321_float; object var_322_object;
	var_0_bool = false;
	var_1_object = var_302_object;
	bool var_316_bool;
	var_306_bool = var_316_bool;
	
	for(;;) {
		bool var_323_bool; object var_324_object;
		var_302_object = var_324_object;
		func_1169(var_323_bool, var_324_object);
		if(!var_323_bool) { //@nz
			var_301_bool = false;
			return 16;
		}
		var_302_object->GetPosition(var_318_cvector);
		@GetPosition(var_319_cvector);
		var_321_float = (var_318_cvector - var_319_cvector) | (var_318_cvector - var_319_cvector);
		bool var_328_bool = false;
		if(var_304_float > 0) {
			if(var_321_float > (var_304_float * var_304_float))
				var_328_bool = true;
		}
		if(var_328_bool != 0) {
			@Stop();
			var_301_bool = false;
			return 16;
		}
		if(var_321_float > (var_303_float * var_303_float)) {
			var_302_object->GetPFPosition(var_318_cvector);
			@FindPathTo(var_322_object, var_318_cvector);
			if(var_322_object != null) {
				var_322_object = var_317_object;
				var_322_object = null;
			}
			if(var_317_object != null) {
				if(var_316_bool == 0) goto Label_1082;
				var_316_bool = false;
				@RotatePath(var_317_object, var_315_bool);
				if(!var_315_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_341_string;
						func_1176(var_341_string);
						string var_342_string;
						func_1178(var_342_string);
						@FollowPath(var_317_object, var_305_bool, var_315_bool, var_341_string, var_342_string);
						if(!var_315_bool) { //@nz
							if(var_0_bool == 0) goto Label_1101;
							var_317_object = null;
						}
					EMIT "GOTO 0x44e";

					Label_1101:
						} else {
					var_317_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_315_bool);
					if(!var_315_bool) { //@nz
						if(var_0_bool != 0) {
							var_317_object = null;
							goto Label_1129;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1129;
		}
			var_322_object = null;
			goto Label_1127;

		Label_1127:
			var_317_object = null;

		}
	Label_1129:
		for(;;) {
			var_301_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_2053(float var_26_float)
{
	object var_28_object;
	@CreateFloatVector(var_28_object);
	var_28_object->add(var_26_float);
	@SendWorldWndMessage(16, var_28_object);
}
EMIT "Stack[-1] = 0";


void func_2063(object var_99_object)
{
	bool var_101_bool;
	@IsPlayerActor(var_99_object, var_101_bool);
	if(var_101_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1553(float var_537_float, object var_538_object, float var_539_float, int var_540_int)
{
	int var_550_int; int var_552_int;
	object var_557_object;
	var_538_object = var_557_object;
	bool var_556_bool;
	func_1519(var_556_bool, var_557_object, "health");
	if(!var_556_bool) //@nz
		var_537_float = 0.0;
	bool var_560_bool; object var_561_object;
	func_1519(var_560_bool, var_561_object, "armor");
	if(!var_560_bool) //@nz
		var_550_int = 0;
	else
		var_561_object->GetProperty("armor", var_550_int);
	string var_565_string; int var_566_int;
	var_540_int = var_566_int;
	func_1485(var_565_string, var_566_int);
	string var_551_string = "armor_" + var_565_string;
	bool var_571_bool; object var_572_object; string var_573_string;
	var_538_object = var_572_object;
	func_1519(var_571_bool, var_572_object, var_573_string);
	if(!var_571_bool) //@nz
		var_552_int = 0;
	else
		var_538_object->GetProperty(var_573_string, var_552_int);

	float var_575_float;
	func_1951(var_575_float, ((var_550_int + var_552_int) / 100.0), (float)1);
	float var_553_float;
	var_575_float = var_553_float;
	float var_554_float;
	var_538_object->GetProperty("health", var_554_float);
	float var_555_float = var_539_float * (1 - var_553_float);
	float var_585_float;
	func_1982(var_585_float, (var_554_float - var_555_float), (float)0, (float)1);
	var_538_object->SetProperty("health", var_585_float);
	bool var_591_bool; object var_592_object;
	var_538_object = var_592_object;
	func_1514(var_591_bool, var_592_object);
	if(var_591_bool != 0) {
		float var_593_float = -var_555_float;
		func_2036(var_593_float);
	}
	var_555_float = var_537_float;
	
}


void func_2072(void)
{
	object var_122_object;
	@GetScene(var_122_object);
	object var_124_object;
	func_1935(var_124_object);
	@BroadcastMessage("battle", var_124_object, var_122_object);
}
EMIT "Stack[-1] = 0";


void func_543(bool var_0_bool, object var_1_object, bool var_490_bool, float var_491_float)
{
	string var_499_string;
	func_884(var_499_string);
	int var_496_int;
	@irand(var_496_int, var_1_object);
	@Face(var_0_bool);
	@SetAttackState(true);
	func_2072();
	@PlayAnimation("all", ("attack_begin" + (var_496_int + 1)));
	@WaitForAnimEnd();
	int var_498_int;
	func_852(var_498_int, var_499_string);
	bool var_520_bool;
	func_1698(var_520_bool, var_0_bool);
	if(!var_520_bool) { //@nz
		@StopAsync();
		var_490_bool = false;
		return 8;
	}
	float var_523_float; int var_524_int;
	var_491_float = var_523_float;
	var_496_int = var_524_int;
	func_504(var_499_string, var_523_float, var_524_int);
	bool var_497_bool;
	@HasAnimation(var_497_bool, "all", ("attack_middle" + var_496_int));
	if(var_497_bool != 0) {
		func_2072();
		@PlayAnimation("all", ("attack_middle" + var_496_int));
		@WaitForAnimEnd();
		func_884(var_499_string);
		bool var_633_bool;
		func_1698(var_633_bool, var_0_bool);
		if(!var_633_bool) { //@nz
			@StopAsync();
			var_490_bool = false;
			return 8;
		}
		float var_636_float; int var_637_int;
		var_491_float = var_636_float;
		func_504(var_499_string, var_636_float, var_637_int);
		var_498_int = 1;

		for(;;) {
			var_499_string = (("attack_middle" + var_637_int) + "_") + var_498_int;
			@HasAnimation(var_497_bool, "all", var_499_string);
			if(!var_497_bool) { //@nz
			} else {
				func_2072();
				@PlayAnimation("all", var_499_string);
				@WaitForAnimEnd();
				func_884(var_499_string);
				bool var_659_bool;
				func_1698(var_659_bool, var_0_bool);
				if(!var_659_bool) { //@nz
					@StopAsync();
					var_490_bool = false;
					return 8;
				}
				float var_662_float; int var_663_int;
				var_491_float = var_662_float;
				var_496_int = var_663_int;
				func_504(var_499_string, var_662_float, var_663_int);
				var_498_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_496_int));
		bool var_648_bool;
		func_894(var_648_bool);
		if(var_648_bool != 0) {
			bool var_649_bool;
			func_682(var_649_bool, 0.45);
			@StopAsync();
		}
		var_490_bool = true;
		return 8;

	}
}


void func_2083(bool var_619_bool)
{
	bool var_621_bool;
	@GetVariable("god_mode", var_621_bool);
	var_621_bool = var_619_bool;
}


void func_37(bool var_0_bool, bool var_82_bool, object var_83_object, object var_200_object)
{
	object var_99_object;
	var_83_object = var_99_object;
	func_2063(var_99_object);
	bool var_104_bool; object var_105_object;
	var_83_object = var_105_object;
	func_1732(var_104_bool, var_105_object);
	bool var_118_bool; object var_119_object;
	func_1698(var_118_bool, var_119_object);
	if(!var_118_bool) { //@nz
		var_82_bool = false;
		return 14;
	}
	func_2072();
	@Face(var_119_object);
	@PlayAnimation("all", "aattack_begin1");
	@WaitForAnimEnd();
	bool var_127_bool; object var_128_object;
	var_83_object = var_128_object;
	func_1698(var_127_bool, var_128_object);
	if(!var_127_bool) { //@nz
		@StopAsync();
		var_82_bool = false;
		return 14;
	}
	@PlayAnimation("all", "aattack_end1");
	object var_92_object;
	@GetScene(var_92_object);
	cvector var_93_cvector;
	bool var_94_bool;
	@GetGeometryLocator("knife", var_94_bool, var_93_cvector);
	object var_95_object;
	@AddActorByType(var_95_object, "scripted", var_92_object, var_93_cvector, [0.0, 0.0, 1.0], "grabitel_knife.xml");
	object var_137_object;
	func_1935(var_137_object);
	var_95_object->SetScriptProperty("Owner", var_137_object);
	var_95_object->SetScriptProperty("Target", var_83_object);
	cvector var_96_cvector;
	var_83_object->GetPosition(var_96_cvector);
	float var_97_float;
	var_83_object->GetEyesHeight(var_97_float);
	var_139_float = GetByIndex(var_96_cvector, 1);
	SetByIndex(var_96_cvector, 1) = (var_139_float + (var_97_float - 10));
	cvector var_142_cvector; cvector var_143_cvector; cvector var_144_cvector;
	var_93_cvector = var_143_cvector;
	var_96_cvector = var_144_cvector;
	func_2166(var_142_cvector, var_143_cvector, var_144_cvector, 2000.0);
	cvector var_98_cvector;
	var_142_cvector = var_98_cvector;
	var_95_object->SetScriptProperty("StartDirection", var_98_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	if(false != 0) {
		var_82_bool = true;
		return 14;
	}
	bool var_195_bool; object var_196_object;
	var_83_object = var_196_object;
	func_1698(var_195_bool, var_196_object);
	if(!var_195_bool) { //@nz
		var_82_bool = false;
		return 14;
	}
	bool var_198_bool; object var_199_object;
	var_83_object = var_199_object;
	TaskCall(2);
	func_163(var_198_bool, var_199_object);
	TaskReturn();
	var_200_object = var_82_bool;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


// @pe
void func_2089(object var_11_object)
{
	object var_12_object;
	var_11_object = var_12_object;
	TaskCall(6);
	func_1317(var_12_object);
	TaskReturn();
}


// @pe
void func_2134(bool var_15_bool, object var_16_object)
{
	object var_18_object;
	var_16_object = var_18_object;
	bool var_17_bool;
	func_1698(var_17_bool, var_18_object);
	var_17_bool = var_15_bool;
}


void func_1626(bool var_608_bool, object var_609_object)
{
	object var_613_object;
	var_609_object = var_613_object;
	bool var_612_bool;
	func_1519(var_612_bool, var_613_object, "health");
	if(!var_612_bool) { //@nz
		var_608_bool = false;
		return 2;
	}
	bool var_616_bool = false;
	bool var_617_bool; object var_618_object;
	func_1514(var_617_bool, var_618_object);
	if(var_617_bool != 0) {
		bool var_619_bool;
		func_2083(var_619_bool);
		if(var_619_bool != 0)
			var_616_bool = true;
	}
	if(var_616_bool != 0) {
		var_608_bool = false;
		return 2;
	}
	float var_611_float;
	var_618_object->GetProperty("health", var_611_float);
	var_608_bool = var_611_float <= 0.0;
}


// @pe
void func_2141(object var_51_object)
{
	object var_52_object;
	var_51_object = var_52_object;
	func_2206(var_52_object);
}


void func_2147(int var_15_int)
{
	int var_17_int;
	@GetVariable("branch", var_17_int);
	var_17_int = var_15_int;
}


// @pe
void func_2153(object var_14_object)
{
	int var_15_int;
	func_2147(var_15_int);
	if(var_15_int == 1)
		@WorkWithCorpse(var_14_object);
	else
		@Barter(var_14_object);
	
}


// @pe
void func_1131(bool var_0_bool, object var_1_object, int var_18_int)
{
	if(var_18_int != 0)
		return 0;
	bool var_21_bool;
	func_1169(var_21_bool, var_1_object);
	if(!var_21_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_2166(cvector var_142_cvector, cvector var_143_cvector, cvector var_144_cvector, float var_145_float)
{
	cvector var_152_cvector; float var_157_float;
	var_152_cvector = var_144_cvector - var_143_cvector;
	float var_153_float = 250000;
	var_158_float = GetByIndex(var_152_cvector, 1);
	float var_154_float = (var_158_float * 1000) - (var_145_float * var_145_float);
	float var_155_float = var_152_cvector | var_152_cvector;
	float var_162_float; float var_163_float; float var_164_float; float var_165_float;
	var_153_float = var_163_float;
	var_154_float = var_164_float;
	var_155_float = var_165_float;
	func_1958(var_162_float, var_163_float, var_164_float, var_165_float);
	float var_156_float;
	var_162_float = var_156_float;
	if(var_156_float < 0) {
		var_157_float = 1;
	} else {
		float var_176_float; float var_177_float; float var_178_float; float var_179_float; float var_180_float;
		var_153_float = var_177_float;
		var_154_float = var_178_float;
		var_155_float = var_179_float;
		var_180_float = sqrt(var_156_float);
		func_1965(var_177_float, var_178_float, var_179_float, var_180_float);
		var_157_float = sqrt(var_176_float);
	}
	var_142_cvector = (var_152_cvector + (([0.0, 500.0, 0.0] * var_157_float) * var_157_float)) / var_157_float;
	
}


void func_1657(bool var_32_bool, object var_33_object)
{
	bool var_35_bool;
	var_33_object->IsDead(var_35_bool);
	var_35_bool = var_32_bool;
}


void func_1662(bool var_21_bool, object var_22_object)
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
		func_1657(var_32_bool, var_33_object);
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


void func_1153(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_1169(bool var_323_bool, object var_324_object)
{
	object var_326_object;
	var_324_object = var_326_object;
	bool var_325_bool;
	func_1698(var_325_bool, var_326_object);
	var_325_bool = var_323_bool;
}


void func_1176(string var_341_string)
{
	var_341_string = "walk";
}


// @pe
void func_2201(void)
{
}


void func_1178(string var_342_string)
{
	var_342_string = "run";
}


// @pe
void func_2203(bool var_13_bool)
{
	var_13_bool = false;
}


// @pe
void func_1180(object var_60_object)
{
	
	for(;;) {
		bool var_61_bool; object var_62_object;
		TaskCall(0);
		func_0(var_54_object, var_62_object, var_61_bool, var_62_object);
		TaskReturn();
		@Sleep(1);
	}
}
EMIT "Return(); Pop(0)";


void func_2206(object var_52_object)
{
	@SetVariable("b1q04_attack", 1);
	object var_54_object;
	@GetScene(var_54_object);
	object var_57_object;
	func_1935(var_57_object);
	var_54_object->RemoveStationaryActor(var_57_object);
	object var_60_object;
	var_52_object = var_60_object;
	TaskCall(4);
	func_1180(var_60_object);
	TaskReturn();
}
EMIT "Stack[-1] = 0";


void func_1698(bool var_17_bool, object var_18_object)
{
	object var_22_object;
	var_18_object = var_22_object;
	bool var_21_bool;
	func_1662(var_21_bool, var_22_object);
	if(!var_21_bool) { //@nz
		var_17_bool = false;
		return 2;
	}
	bool var_39_bool; object var_40_object;
	func_1519(var_39_bool, var_40_object, "noaccess");
	if(!var_39_bool) { //@nz
		var_17_bool = true;
		return 2;
	}
	int var_20_int;
	var_40_object->GetProperty("noaccess", var_20_int);
	var_17_bool = var_20_int == 0;
}


// @pe
void func_163(bool var_198_bool, object var_199_object)
{
	var_206_bool = GlobalVars[0];
	GlobalVars[0] = false;
	object var_207_object;
	func_240(var_203_bool, var_204_float, var_205_int, var_198_bool, var_207_object, var_207_object, true, 200.0);
	bool var_681_bool = false;
	var_682_bool = GlobalVars[0];
	if(var_682_bool != 0) {
		if(var_3_int != 0)
			var_681_bool = true;
	}
	if(var_681_bool != 0) {
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
	}
	var_686_bool = GlobalVars[0];
	var_686_bool = var_198_bool;
}


void func_680(int var_3_int)
{
	var_3_int = true;
}


void func_682(bool var_649_bool, float var_650_float)
{
	float var_653_float; bool var_654_bool;
	@rand(var_653_float);
	if(var_653_float < var_650_float) {

		for(;;) {
			@IsAnimationPlaying(var_654_bool);
			if(!var_654_bool) { //@nz
			} else {
				bool var_657_bool;
				func_780(var_657_bool);
				if(var_657_bool != 0) {
					var_649_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_649_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_884(var_654_bool);
}


// @pe
void func_1197(string var_10_string)
{
	
	for(;;) {
		@Sleep(3);
		string var_12_string;
		var_10_string = var_12_string;
		func_1241(var_12_string);
	}
}
EMIT "Return(); Pop(0)";


void func_1722(bool var_108_bool, cvector var_109_cvector)
{
	cvector var_113_cvector;
	@GetPosition(var_113_cvector);
	cvector var_114_cvector = var_109_cvector - var_113_cvector;
	var_116_float = GetByIndex(var_114_cvector, 0);
	var_117_float = GetByIndex(var_114_cvector, 2);
	bool var_115_bool;
	@Rotate(var_116_float, var_117_float, var_115_bool);
	var_115_bool = var_108_bool;
}


// @pe
void func_191(float var_534_float)
{
	var_534_float = 0.15;
}


// @pe
void func_194(int var_541_int)
{
	var_541_int = 0;
}


void func_1732(bool var_104_bool, object var_105_object)
{
	cvector var_107_cvector;
	var_105_object->GetPosition(var_107_cvector);
	bool var_108_bool; cvector var_109_cvector;
	var_107_cvector = var_109_cvector;
	func_1722(var_108_bool, var_109_cvector);
	var_108_bool = var_104_bool;
}


void func_709(bool var_0_bool, bool var_429_bool, float var_430_float)
{
	bool var_436_bool; cvector var_437_cvector; cvector var_438_cvector; cvector var_439_cvector; float var_440_float;
	
	for(;;) {
		@IsAnimationPlaying(var_436_bool);
		if(!var_436_bool) //@nz
			break;
		bool var_442_bool;
		func_780(var_442_bool);
		if(var_442_bool != 0) {
			var_429_bool = true;
			return 10;
		}
		bool var_485_bool;
		func_1698(var_485_bool, var_0_bool);
		if(!var_485_bool) { //@nz
			var_429_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_437_cvector); //@t
		@GetPFPosition(var_438_cvector);
		var_439_cvector = var_437_cvector - var_438_cvector;
		var_440_float = var_439_cvector | var_439_cvector;
		if(var_440_float < (var_430_float * var_430_float)) {
			bool var_490_bool; float var_491_float;
			var_430_float = var_491_float;
			func_543(var_439_cvector, var_440_float, var_490_bool, var_491_float);
			var_429_bool = true;
			return 10;
		}
		@sync();
	}
	func_884(var_440_float);
	var_429_bool = false;
}


void func_197(int var_602_int)
{
	var_602_int = 1;
}


// @pe
void func_199(object var_603_object, float var_604_float)
{
	bool var_605_bool = false;
	if(var_604_float > 0) {
		bool var_608_bool; object var_609_object;
		var_603_object = var_609_object;
		func_1626(var_608_bool, var_609_object);
		if(var_608_bool != 0)
			var_605_bool = true;
	}
	if(var_605_bool != 0) {
		var_625_bool = GlobalVars[0];
		GlobalVars[0] = true;
		func_680(var_604_float);
	}
}


void func_1741(object var_27_object)
{
	string var_41_string;
	if(var_27_object == null)
		return 14;
	bool var_35_bool;
	@IsDead(var_35_bool);
	if(var_35_bool != 0)
		return 14;
	int var_36_int;
	@GetSecondaryAnimationType(var_36_int);
	if(var_36_int < 0)
		return 14;
	cvector var_37_cvector;
	var_27_object->GetPosition(var_37_cvector);
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	cvector var_39_cvector;
	@GetDirection(var_39_cvector);
	cvector var_40_cvector = var_38_cvector - var_37_cvector;
	var_46_float = GetByIndex(var_40_cvector, 0);
	var_47_float = GetByIndex(var_39_cvector, 0);
	var_49_float = GetByIndex(var_40_cvector, 2);
	var_50_float = GetByIndex(var_39_cvector, 2);
	if(((var_46_float * var_47_float) + (var_49_float * var_50_float)) >= 0)
		var_41_string = "fhit";
	else
		var_41_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_41_string + "1"), (var_41_string + "2"), -10);
	
}


void func_1241(string var_12_string)
{
	int var_21_int; bool var_22_bool; float var_23_float; bool var_24_bool;
	@WaitForAnimEnd();
	bool var_25_bool;
	func_1878(var_25_bool);
	if(!var_25_bool) //@nz
		return 12;
	bool var_19_bool;
	@HasAnimation(var_19_bool, "all", var_12_string);
	if(!var_19_bool) //@nz
		return 12;
	int var_20_int = 0;
	
	for(;;) {
		bool var_31_bool = false;
		if(var_20_int < 5) {
			bool var_34_bool;
			func_1878(var_34_bool);
			if(var_34_bool != 0)
				var_31_bool = true;
		}
		if(var_31_bool != 0) {
			@irand(var_21_int, 3);
			if(var_21_int == 0) {
				@PlayAnimation("all", var_12_string);
				@WaitForAnimEnd(var_22_bool);
				if(!var_22_bool) { //@nz
				} else {
			} else {
			if(var_21_int == 1) {
				@rand(var_23_float, 4);
				@Sleep((var_23_float + 1), var_24_bool);
				if(!var_24_bool) { //@nz
					goto Label_1309;
				}
			} else if(var_20_int != 0) {
				goto Label_1309;
			}
			}
					bool var_40_bool;
					func_1310(var_40_bool);
					var_41_bool = !var_40_bool; //@nz
					if(var_41_bool == 0) goto Label_1306;
			}
		}
	Label_1309:
		for(;;) {
			return 12;

		}

	Label_1306:
		var_20_int += 1;
	}
	
}


void func_240(bool var_0_bool, int var_3_int, float var_5_float, object var_207_object, bool var_208_bool, float var_209_float, bool var_278_bool, bool var_370_bool)
{
	float var_221_float; cvector var_222_cvector; cvector var_223_cvector; bool var_225_bool; float var_228_float; cvector var_229_cvector; bool var_230_bool; float var_231_float;
	func_469(var_229_cvector, var_230_bool, var_231_float);
	var_5_float = 0;
	var_256_bool = IsFuncExist(var_207_object, "@GetAttackDistance", 1);
	if(var_256_bool != 0) {
		var_207_object->GetAttackDistance(var_221_float);
		var_221_float += 50;
	} else {
						var_209_float = var_221_float;
	}
	if(var_221_float >= 150)
		var_221_float = 150;
	var_3_int = false;
	var_0_bool = var_207_object;
	bool var_224_bool;
	@IsPlayerActor(var_0_bool, var_224_bool);
	if(var_224_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_262_object;
		func_1935(var_262_object);
		@SendPlayerEnemy(var_207_object, var_262_object);
	}
	if(var_208_bool != 0)
		var_225_bool = false;
	else
		var_225_bool = true;

	
Label_280:
	for(;;) {
		bool var_265_bool = false;
		bool var_266_bool;
		func_1698(var_266_bool, var_0_bool);
		if(var_266_bool != 0) {
			if(!var_3_int) //@nz
				var_265_bool = true;
		}
		if(var_265_bool != 0) {
			func_884(var_231_float);
			var_0_bool->GetPFPosition(var_222_cvector); //@t
			@GetPFPosition(var_223_cvector);
			var_228_float = (var_222_cvector - var_223_cvector) | (var_222_cvector - var_223_cvector);
			if(var_228_float >= ((300.0 + var_221_float) * (300.0 + var_221_float))) {
				bool var_272_bool; float var_274_float;
				var_221_float = var_274_float;
				TaskCall(3);
				func_924(var_280_bool, var_272_bool, var_0_bool, var_274_float, 3000.0, true, false);
				TaskReturn();
				if(!var_278_bool) { //@nz
				} else {
					var_225_bool = false;
			} else {
			if(var_228_float >= (var_209_float * var_209_float)) {
				var_0_bool->GetPFPosition(var_229_cvector); //@t
				@CanReachByPF(var_230_bool, var_229_cvector);
				if(!var_230_bool) { //@nz
					bool var_364_bool; float var_366_float;
					var_221_float = var_366_float;
					TaskCall(3);
					func_924(var_372_bool, var_364_bool, var_0_bool, var_366_float, 3000.0, true, false);
					TaskReturn();
					if(!var_370_bool) { //@nz
						goto Label_452;
					}
					var_225_bool = false;
					goto Label_280;
				}
				if(!var_225_bool) { //@nz
					func_1867(var_0_bool);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_884(var_231_float);
					@StopAsync();
					var_225_bool = true;
					bool var_386_bool;
					func_1698(var_386_bool, var_0_bool);
					if(!var_386_bool) { //@nz
						goto Label_452;
					}
				}
				@rand(var_231_float);
				bool var_389_bool;
				var_391_bool = var_231_float < 0.19999999;
				if(var_391_bool != 1) {
					bool var_392_bool;
					func_841(true, var_392_bool);
					if(var_392_bool != 1)
						var_389_bool = false;
				}
				if(var_389_bool != 0) {
					@Face(var_0_bool);
					func_889();
					@PlayAnimation("all", "attack_stay");
					bool var_429_bool; float var_430_float;
					func_709(var_231_float, var_429_bool, var_430_float);
					@StopAsync();
				} else {
					@Face(var_0_bool);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_884(var_231_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_668_bool;
					func_841(var_231_float, var_668_bool);
					var_669_bool = !var_668_bool; //@nz
					if(var_669_bool == 0) goto Label_442;
					bool var_670_bool;
					func_1698(var_670_bool, var_0_bool);
					if(!var_670_bool) { //@nz
						goto Label_452;
					}
					var_0_bool->GetPFPosition(var_222_cvector); //@t
					@GetPFPosition(var_223_cvector);
					if(!(((var_222_cvector - var_223_cvector) | (var_222_cvector - var_223_cvector)) < (var_430_float * var_430_float))) goto Label_442;
					bool var_675_bool; float var_676_float;
					var_209_float = var_676_float;
					func_543(var_230_bool, var_231_float, var_675_bool, var_676_float);
					var_677_bool = !var_675_bool; //@nz
					if(var_677_bool == 0) goto Label_442;
					goto Label_452;
			}
				bool var_678_bool; float var_679_float;
				var_209_float = var_679_float;
				func_543(var_230_bool, var_231_float, var_678_bool, var_679_float);
				if(!var_678_bool) { //@nz
					goto Label_452;
				}
				var_225_bool = true;

			}
		Label_442:
			goto Label_451;
			}
			Label_451:
			}
		}
	Label_452:
		@WaitForAnimEnd();
		if(var_3_int != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_224_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_752(bool var_0_bool, bool var_444_bool)
{
	cvector var_450_cvector; cvector var_451_cvector;
	bool var_455_bool;
	func_1698(var_455_bool, var_0_bool);
	if(!var_455_bool) { //@nz
		var_444_bool = false;
		return 10;
	}
	bool var_458_bool;
	float var_454_float;
	func_841(var_454_float, var_458_bool);
	if(var_458_bool != 0) {
		var_0_bool->GetPFPosition(var_450_cvector); //@t
		@GetPFPosition(var_451_cvector);
		var_0_bool->GetAttackDistance(var_454_float); //@t
		var_444_bool = ((var_450_cvector - var_451_cvector) | (var_450_cvector - var_451_cvector)) <= ((var_454_float + 50) * (var_454_float + 50));
		return 10;
	}
	var_444_bool = false;
}


void func_1785(object var_14_object, int var_15_int, float var_16_float)
{
	cvector var_26_cvector; object var_27_object; int var_28_int; bool var_29_bool; cvector var_30_cvector; cvector var_31_cvector;
	bool var_35_bool = false;
	bool var_36_bool = false;
	if(var_14_object != 0) {
		if(var_15_int != 4)
			var_36_bool = true;
	}
	if(var_36_bool != 0) {
		if(var_15_int != 5)
			var_35_bool = true;
	}
	if(var_35_bool != 0) {
		cvector var_42_cvector; cvector var_43_cvector;
		cvector var_44_cvector; object var_45_object;
		var_14_object = var_45_object;
		func_1499(var_44_cvector, var_45_object);
		var_44_cvector = var_43_cvector;
		func_1941(var_42_cvector, var_43_cvector);
		var_42_cvector = var_26_cvector;
		@CreateVectorVector(var_27_object);
		var_28_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_28_int), var_29_bool, var_30_cvector, var_31_cvector);
			if(!var_29_bool) { //@nz
				break;
			Label_1847:
				var_27_object = null;
	}
			object var_104_object;
			var_14_object = var_104_object;
			func_1741(var_104_object);
		}
		if((var_31_cvector | var_26_cvector) >= 0.70710677)
			var_27_object->add(var_30_cvector);
		var_28_int += 1;
	}
	int var_32_int;
	var_27_object->size(var_32_int);
	if(var_32_int == 0) goto Label_1847;
	int var_33_int;
	@irand(var_33_int, var_32_int);
	cvector var_34_cvector;
	var_27_object->get(var_34_cvector, var_33_int);
	object var_59_object; int var_60_int; float var_61_float; cvector var_62_cvector; cvector var_63_cvector;
	var_14_object = var_59_object;
	var_15_int = var_60_int;
	var_16_float = var_61_float;
	var_34_cvector = var_62_cvector;
	var_63_cvector = -var_26_cvector;
	func_1853(var_61_float, var_62_cvector, var_63_cvector);
}


void func_780(bool var_442_bool)
{
	bool var_443_bool = false;
	bool var_444_bool;
	func_752(var_443_bool, var_444_bool);
	if(var_444_bool != 0) {
		bool var_461_bool;
		func_796(var_442_bool, var_443_bool, var_461_bool);
		if(var_461_bool != 0)
			var_443_bool = true;
	}
	if(var_443_bool != 0) {
		var_442_bool = true;
		return 0;
	}
	var_442_bool = false;
}


void func_796(bool var_0_bool, bool var_4_bool, bool var_461_bool)
{
	object var_467_object; float var_469_float; cvector var_470_cvector; cvector var_471_cvector;
	@GetScene(var_467_object);
	bool var_468_bool = false;
	
	for(;;) {
		cvector var_472_cvector;
		func_1499(var_472_cvector, var_0_bool);
		var_478_int = -var_472_cvector;
		@FindDirLength(var_469_float, var_478_int, var_4_bool);
		if(var_469_float < var_4_bool) {
		} else {
				@Face(var_0_bool);
				@PlayAnimation("all", "bjump");
				var_0_bool->GetPFPosition(var_470_cvector); //@t
				@GetPFPosition(var_471_cvector);
				@WaitForAnimEnd();
				func_884(var_471_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_468_bool = true;
				bool var_483_bool;
				func_752(var_471_cvector, var_483_bool);
				var_484_bool = !var_483_bool; //@nz
				if(var_484_bool == 0) goto Label_837;
		}
		for(;;) {
			var_468_bool = var_461_bool;

		}

	Label_837:
	}
}
EMIT "Stack[-5] = 0";


void func_1310(bool var_40_bool)
{
	var_40_bool = true;
}


void func_1312(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1317(object var_12_object)
{
	@SetVariable("b1q04_dead", 1);
	bool var_15_bool; object var_16_object;
	var_12_object = var_16_object;
	func_1514(var_15_bool, var_16_object);
	if(var_15_bool != 0) {
		bool var_19_bool; object var_20_object;
		var_12_object = var_20_object;
		func_2001(var_19_bool, var_20_object, 0.03);
	}
	object var_57_object;
	var_12_object = var_57_object;
	func_1337(var_57_object);
}


// @pe
void func_1337(object var_57_object)
{
	object var_58_object;
	var_57_object = var_58_object;
	func_1362(var_58_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1853(object var_16_object, cvector var_19_cvector, cvector var_20_cvector)
{
	object var_23_object;
	@GetScene(var_23_object);
	object var_24_object;
	@AddActorByType(var_24_object, "scripted", var_23_object, var_19_cvector, var_20_cvector, "blood_dir.xml");
	object var_27_object;
	var_16_object = var_27_object;
	func_1741(var_27_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_841(bool var_0_bool, bool var_392_bool)
{
	bool var_394_bool;
	var_397_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_397_bool != 0) {
		var_0_bool->IsAttacking(var_394_bool); //@t
		var_394_bool = var_392_bool;
	}
	var_392_bool = false;
}


void func_1867(object var_375_object)
{
	cvector var_379_cvector;
	var_375_object->GetPosition(var_379_cvector);
	cvector var_380_cvector;
	@GetPosition(var_380_cvector);
	cvector var_381_cvector = var_379_cvector - var_380_cvector;
	var_382_float = GetByIndex(var_381_cvector, 0);
	var_383_float = GetByIndex(var_381_cvector, 2);
	@RotateAsync(var_382_float, var_383_float);
}


void func_1362(object var_58_object)
{
	cvector var_69_cvector; cvector var_70_cvector; cvector var_71_cvector; cvector var_72_cvector; string var_73_string; object var_74_object; bool var_75_bool; bool var_76_bool; float var_77_float; cvector var_78_cvector;
	if(var_58_object == null) {
		func_1453("fdie");
	} else {
		var_58_object->GetPosition(var_69_cvector);
		@GetPosition(var_70_cvector);
		@GetDirection(var_71_cvector);
		var_72_cvector = var_70_cvector - var_69_cvector;
		var_112_float = GetByIndex(var_72_cvector, 0);
		var_113_float = GetByIndex(var_71_cvector, 0);
		var_115_float = GetByIndex(var_72_cvector, 2);
		var_116_float = GetByIndex(var_71_cvector, 2);
		if(((var_112_float * var_113_float) + (var_115_float * var_116_float)) >= 0)
			var_73_string = "fdie";
		else
			var_73_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_58_object = var_74_object;
		var_123_bool = IsFuncExist(var_58_object, "GetScriptProperty", 2);
		if(var_123_bool != 0) {
			var_58_object->HasScriptProperty(var_75_bool, "Owner");
			if(var_75_bool != 0) {
				var_58_object->GetScriptProperty(var_74_object, "Owner");
				if(var_74_object == null)
					var_58_object = var_74_object;
			}
		}
		var_130_bool = IsFuncExist(var_74_object, "@GetEyesHeight", 1);
		if(var_130_bool != 0) {
			var_74_object->GetEyesHeight(var_77_float);
			var_78_cvector = [0.0, 0.0, 0.0];
			var_131_float = GetByIndex(var_78_cvector, 1);
			var_77_float = var_131_float;
			SetByIndex(var_78_cvector, 1) = var_131_float;
			@LookAsync(var_58_object, "head", var_78_cvector);
			var_76_bool = true;
		} else {
			var_76_bool = false;

		}
		string var_133_string;
		var_73_string = var_133_string;
		func_1894(var_133_string);
		@PlayAnimation("all", var_73_string);
		@WaitForAnimEnd();
		if(var_76_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_73_string);
		@RemoveEnvelope();
		var_74_object = null;
	}
	
}


void func_852(int var_2_int, float var_5_float)
{
	int var_508_int;
	if(!var_2_int) //@nz
		return 4;
	if(var_5_float != 0) {
		if((var_5_float + -1) > 0)
			return 4;
	}
	float var_507_float;
	@rand(var_507_float);
	float var_514_float;
	func_898(var_514_float);
	if(var_507_float < var_514_float) {
		@irand(var_508_int, var_2_int);
		@Speak("attack" + (var_508_int + 1));
		int var_519_int;
		func_896(var_519_int);
		var_5_float = var_519_int;
	}
}


void func_1878(bool var_25_bool)
{
	bool var_27_bool;
	@IsLoaded(var_27_bool);
	var_27_bool = var_25_bool;
}


void func_1883(object var_289_object)
{
	float var_292_float;
	var_289_object->GetEyesHeight(var_292_float);
	cvector var_293_cvector = [0.0, 0.0, 0.0];
	var_294_float = GetByIndex(var_293_cvector, 1);
	var_292_float = var_294_float;
	SetByIndex(var_293_cvector, 1) = var_294_float;
	@LookAsync(var_289_object, "head", var_293_cvector);
}


void func_1894(string var_81_string)
{
	bool var_90_bool; int var_91_int; bool var_92_bool; int var_93_int; bool var_94_bool; float var_95_float; cvector var_96_cvector; cvector var_97_cvector;
	@IsExisting3DSound(var_90_bool, var_81_string);
	if(!var_90_bool) { //@nz
		var_91_int = 0;

		for(;;) {
			@IsExisting3DSound(var_92_bool, (var_81_string + (var_91_int + 1)));
			if(!var_92_bool) { //@nz
				break;
			Label_1914:
				@irand(var_93_int, var_91_int);
				var_81_string += (var_93_int + 1);
	}
			@Is3DSoundLoaded(var_94_bool, var_81_string);
			if(var_94_bool != 0) {
				@GetEyesHeight(var_95_float);
				@GetDirection(var_96_cvector);
				var_97_cvector = var_96_cvector * 50;
				var_108_float = GetByIndex(var_97_cvector, 1);
				SetByIndex(var_97_cvector, 1) = (var_108_float + var_95_float);
				@PlayGlobalSound(var_81_string, var_97_cvector);
			}
		}
		var_91_int += 1;
	}
	var_103_bool = !var_91_int; //@nz
	if(var_103_bool == 0) goto Label_1914;
}


void func_884(bool var_0_bool)
{
	func_2063(var_0_bool);
}


void func_889(void)
{
	func_1894("attack_stay");
}


void func_894(bool var_648_bool)
{
	var_648_bool = true;
}


void func_896(int var_519_int)
{
	var_519_int = 1;
}


void func_898(float var_514_float)
{
	var_514_float = 0.5;
}


void func_1935(object var_57_object)
{
	object var_59_object;
	@self(var_59_object);
	var_59_object = var_57_object;
}
EMIT "Stack[-1] = 0";


void func_1941(cvector var_42_cvector, cvector var_43_cvector)
{
	float var_51_float = sqrt(var_43_cvector | var_43_cvector);
	if(var_51_float < 0.000001)
		var_42_cvector = [0.0, 0.0, 0.0];
	var_42_cvector = var_43_cvector / var_51_float;
}


void func_924(int var_2_int, bool var_272_bool, object var_273_object, float var_274_float, float var_275_float, bool var_276_bool, bool var_277_bool)
{
	object var_285_object;
	func_2063(var_285_object);
	@SetTimer(1, 5);
	bool var_283_bool;
	@CanSee(var_283_bool, var_285_object);
	if(var_283_bool != 0) {
		var_2_int = true;
		object var_289_object;
		var_273_object = var_289_object;
		func_1883(var_289_object);
	} else {
		var_2_int = false;
	}
	bool var_296_bool; object var_297_object;
	func_1514(var_296_bool, var_297_object);
	if(var_296_bool != 0) {
		object var_300_object;
		func_1935(var_300_object);
		@SendPlayerEnemy(var_297_object, var_300_object);
	}
	bool var_301_bool; object var_302_object; float var_303_float; float var_304_float; bool var_305_bool; bool var_306_bool;
	var_273_object = var_302_object;
	var_274_float = var_303_float;
	var_275_float = var_304_float;
	var_276_bool = var_305_bool;
	var_277_bool = var_306_bool;
	bool var_284_bool;
	func_1029(var_283_bool, var_284_bool, var_301_bool, var_302_object, var_303_float, var_304_float, var_305_bool, var_306_bool);
	var_301_bool = var_284_bool;
	if(var_2_int != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_284_bool = var_272_bool;
	
}


// @pe
void func_1951(float var_575_float, float var_576_float, float var_577_float)
{
	if(var_576_float < var_577_float)
		var_576_float = var_575_float;
	else
		var_577_float = var_575_float;
	
}


// @pe
void func_1958(float var_162_float, float var_163_float, float var_164_float, float var_165_float)
{
	var_162_float = (var_164_float * var_164_float) - ((4 * var_163_float) * var_165_float);
}


// @pe
void func_1453(string var_80_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_81_string;
	var_80_string = var_81_string;
	func_1894(var_81_string);
	@PlayAnimation("all", var_80_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_80_string);
	@RemoveEnvelope();
}


void func_1965(float var_176_float, float var_177_float, float var_178_float, float var_180_float)
{
	float var_182_float;
	var_183_int = -var_178_float;
	if(((var_183_int - var_180_float) / (2 * var_177_float)) > 0) {
		var_182_float = var_176_float;
		return 2;
	}
	var_189_int = -var_178_float;
	var_176_float = (var_189_int + var_180_float) / (2 * var_177_float);
}


// @pe
void func_1982(float var_48_float, float var_49_float, float var_50_float, float var_51_float)
{
	if(var_49_float < var_50_float) {
		var_50_float = var_48_float;
		return 0;
	}
	if(var_49_float > var_51_float) {
		var_51_float = var_48_float;
		return 0;
	}
	var_49_float = var_48_float;
}


// @pe
void func_1993(bool var_76_bool, float var_77_float, float var_78_float, float var_79_float)
{
	var_76_bool = false;
	if(var_77_float >= var_78_float) {
		if(var_77_float <= var_79_float)
			var_76_bool = true;
	}
}


// @pe
void func_1485(string var_565_string, int var_566_int)
{
	if(var_566_int == 2) {
		var_565_string = "fire";
		return 0;
	EMIT "GOTO 0x5d9";
	}
	if(var_566_int == 1) {
		var_565_string = "bullet";
		return 0;
	}
	var_565_string = "phys";
}


// @pe
void func_2001(bool var_19_bool, object var_20_object, float var_21_float)
{
	if(!var_20_object) { //@nz
		var_19_bool = false;
		return 0;
	}
	if(var_21_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_21_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_26_float;
		var_21_float = var_26_float;
		func_2053(var_26_float);
		bool var_30_bool; object var_31_object; float var_33_float;
		var_20_object = var_31_object;
		var_21_float = var_33_float;
		func_1531(var_30_bool, var_31_object, "reputation", var_33_float, (float)0, (float)1);
		var_19_bool = true;
		return 0;

	}
	
	var_19_bool = false;
}


void func_469(object var_1_object, int var_2_int, bool var_4_bool)
{
	bool var_235_bool; bool var_236_bool; cvector var_237_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_235_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_235_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_int = 0;

		for(;;) {
			@IsExisting3DSound(var_236_bool, ("attack" + (var_2_int + 1)));
			if(!var_236_bool) //@nz
				break;
			var_2_int += 1;
		}
		@GetAnimationOffset(var_237_cvector, "all", "bjump");
		var_251_float = GetByIndex(var_237_cvector, 2);
		var_4_bool = -var_251_float;

	}
}


void func_1499(cvector var_44_cvector, object var_45_object)
{
	cvector var_48_cvector;
	@GetPosition(var_48_cvector);
	cvector var_49_cvector;
	var_45_object->GetPosition(var_49_cvector);
	var_44_cvector = var_49_cvector - var_48_cvector;
}


void func_987(int var_2_int)
{
	@KillTimer(1);
	if(var_2_int != 0) {
		var_2_int = false;
		@UnlookAsync("head");
	}
	func_1153(var_10_object);
}


void func_1506(float var_68_float, object var_69_object)
{
	cvector var_73_cvector;
	@GetPosition(var_73_cvector);
	cvector var_74_cvector;
	var_69_object->GetPosition(var_74_cvector);
	var_68_float = (var_74_cvector - var_73_cvector) | (var_74_cvector - var_73_cvector);
}


void func_1514(bool var_15_bool, object var_16_object)
{
	bool var_18_bool;
	@IsPlayerActor(var_16_object, var_18_bool);
	var_18_bool = var_15_bool;
}


void func_1519(bool var_38_bool, object var_39_object, string var_40_string)
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


void func_2036(float var_593_float)
{
	object var_595_object;
	@CreateFloatVector(var_595_object);
	var_595_object->add(var_593_float);
	if(var_593_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_595_object);
}
EMIT "Stack[-1] = 0";


void func_504(bool var_0_bool, float var_523_float, int var_524_int)
{
	object var_528_object; float var_529_float; float var_530_float;
	@GetVictim((var_523_float * 0.9), var_528_object);
	@ReportAttack(var_0_bool);
	if(var_528_object == var_0_bool) {
		float var_534_float; object var_535_object; int var_536_int;
		var_528_object = var_535_object;
		var_524_int = var_536_int;
		func_191(var_536_int);
		var_534_float = var_529_float;
		float var_537_float; object var_538_object; float var_539_float; int var_540_int;
		var_528_object = var_538_object;
		int var_541_int; object var_542_object; int var_543_int;
		var_528_object = var_542_object;
		var_524_int = var_543_int;
		func_194(var_543_int);
		var_541_int = var_540_int;
		func_1553(var_537_float, var_538_object, var_539_float, var_540_int);
		var_537_float = var_530_float;
		int var_602_int;
		func_197(var_602_int);
		@ReportHit(var_0_bool, var_602_int, var_530_float, var_539_float);
		object var_603_object; float var_604_float;
		var_528_object = var_603_object;
		var_530_float = var_604_float;
		func_199(var_603_object, var_604_float);
	}
}
EMIT "Stack[-3] = 0";


void func_1531(bool var_30_bool, object var_31_object, string var_32_string, float var_33_float, float var_34_float, float var_35_float)
{
	object var_39_object;
	var_31_object = var_39_object;
	string var_40_string;
	var_32_string = var_40_string;
	bool var_38_bool;
	func_1519(var_38_bool, var_39_object, var_40_string);
	if(!var_38_bool) //@nz
		var_30_bool = false;
	float var_37_float;
	var_31_object->GetProperty(var_32_string, var_37_float);
	float var_48_float; float var_50_float; float var_51_float;
	var_34_float = var_50_float;
	var_35_float = var_51_float;
	func_1982(var_48_float, (var_37_float + var_33_float), var_50_float, var_51_float);
	var_31_object->SetProperty(var_32_string, var_48_float);
	var_30_bool = true;
}


