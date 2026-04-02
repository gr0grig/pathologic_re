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
		func_2369();
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_14_object;
		var_10_bool = var_14_object;
		object var_15_object;
		var_11_object = var_15_object;
		func_2371(var_15_object);
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
		func_2369();
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, object var_7_object, object var_8_object, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_14_object;
		var_10_bool = var_14_object;
		object var_15_object;
		var_11_object = var_15_object;
		func_2371(var_15_object);
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
		func_2369();
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, bool var_12_bool)
	{
		object var_14_object;
		var_10_object = var_14_object;
		object var_15_object;
		var_11_object = var_15_object;
		func_2371(var_15_object);
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
			func_2084(var_1_object);
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
			func_1888(var_14_object);
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
		func_2173();
	}

}


maintask task_4
{
	void init(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool)
	{
	
		for(;;) {
			@Sleep(3);
			func_1222();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
		void OnAttacked(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, object var_14_object)
		{
		object var_16_object;
		var_14_object = var_16_object;
			bool var_15_bool;
		func_2179(var_15_bool, var_16_object);
		if(var_15_bool != 0) {
			func_1303();
			object var_51_object;
			var_14_object = var_51_object;
			func_2186(var_51_object);
		}
		}

	void OnSee(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
	{
		bool var_12_bool;
		@IsPlayerActor(var_10_object, var_12_bool);
		if(var_12_bool != 0) {
			object var_14_object;
			var_10_object = var_14_object;
			func_1188();
		}
	}

	void OnHear(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object)
	{
		bool var_12_bool;
		@IsPlayerActor(var_10_object, var_12_bool);
		if(var_12_bool != 0) {
			object var_14_object;
			var_10_object = var_14_object;
			func_1188();
		}
	}

}


task task_5
{
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
			func_2198(var_14_object);
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
	func_1790(var_14_object, var_15_int, var_16_float);
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
	func_1858(var_18_float, var_19_cvector, var_20_cvector);
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
	func_2134(var_11_object);
}


void func_0(bool var_59_bool, object var_60_object, bool var_82_bool, object var_687_object)
{
	object var_64_object;
	var_60_object = var_64_object;
	bool var_63_bool;
	func_1703(var_63_bool, var_64_object);
	if(!var_63_bool) { //@nz
		var_59_bool = false;
		return 2;
	}
	float var_66_float; object var_67_object;
	var_60_object = var_67_object;
	func_1511(var_66_float, var_67_object);
	float var_62_float;
	var_66_float = var_62_float;
	bool var_74_bool; float var_75_float;
	func_2009(var_74_bool, var_75_float, 250000.0, 3240000.0);
	if(var_74_bool != 0) {
		bool var_80_bool; object var_81_object;
		var_60_object = var_81_object;
		TaskCall(1);
		func_37(var_75_float, var_82_bool, var_80_bool, var_81_object);
		TaskReturn();
		var_82_bool = var_59_bool;
		return 2;
	}
	bool var_685_bool; object var_686_object;
	var_60_object = var_686_object;
	TaskCall(2);
	func_163(var_685_bool, var_686_object);
	TaskReturn();
	var_687_object = var_59_bool;
}


void func_1536(bool var_90_bool, object var_91_object, string var_92_string, float var_93_float, float var_94_float, float var_95_float)
{
	object var_99_object;
	var_91_object = var_99_object;
	string var_100_string;
	var_92_string = var_100_string;
	bool var_98_bool;
	func_1524(var_98_bool, var_99_object, var_100_string);
	if(!var_98_bool) //@nz
		var_90_bool = false;
	float var_97_float;
	var_91_object->GetProperty(var_92_string, var_97_float);
	float var_108_float; float var_110_float; float var_111_float;
	var_94_float = var_110_float;
	var_95_float = var_111_float;
	func_1998(var_108_float, (var_97_float + var_93_float), var_110_float, var_111_float);
	var_91_object->SetProperty(var_92_string, var_108_float);
	var_90_bool = true;
}


void func_1029(bool var_0_bool, object var_1_object, bool var_299_bool, object var_300_object, float var_301_float, float var_302_float, bool var_303_bool, bool var_304_bool)
{
	bool var_313_bool; object var_315_object; cvector var_316_cvector; cvector var_317_cvector; float var_319_float; object var_320_object;
	var_0_bool = false;
	var_1_object = var_300_object;
	bool var_314_bool;
	var_304_bool = var_314_bool;
	
	for(;;) {
		bool var_321_bool; object var_322_object;
		var_300_object = var_322_object;
		func_1169(var_321_bool, var_322_object);
		if(!var_321_bool) { //@nz
			var_299_bool = false;
			return 16;
		}
		var_300_object->GetPosition(var_316_cvector);
		@GetPosition(var_317_cvector);
		var_319_float = (var_316_cvector - var_317_cvector) | (var_316_cvector - var_317_cvector);
		bool var_326_bool = false;
		if(var_302_float > 0) {
			if(var_319_float > (var_302_float * var_302_float))
				var_326_bool = true;
		}
		if(var_326_bool != 0) {
			@Stop();
			var_299_bool = false;
			return 16;
		}
		if(var_319_float > (var_301_float * var_301_float)) {
			var_300_object->GetPFPosition(var_316_cvector);
			@FindPathTo(var_320_object, var_316_cvector);
			if(var_320_object != null) {
				var_320_object = var_315_object;
				var_320_object = null;
			}
			if(var_315_object != null) {
				if(var_314_bool == 0) goto Label_1082;
				var_314_bool = false;
				@RotatePath(var_315_object, var_313_bool);
				if(!var_313_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_339_string;
						func_1176(var_339_string);
						string var_340_string;
						func_1178(var_340_string);
						@FollowPath(var_315_object, var_303_bool, var_313_bool, var_339_string, var_340_string);
						if(!var_313_bool) { //@nz
							if(var_0_bool == 0) goto Label_1101;
							var_315_object = null;
						}
					EMIT "GOTO 0x44e";

					Label_1101:
						} else {
					var_315_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_313_bool);
					if(!var_313_bool) { //@nz
						if(var_0_bool != 0) {
							var_315_object = null;
							goto Label_1129;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1129;
		}
			var_320_object = null;
			goto Label_1127;

		Label_1127:
			var_315_object = null;

		}
	Label_1129:
		for(;;) {
			var_299_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_2057(float var_591_float)
{
	object var_593_object;
	@CreateFloatVector(var_593_object);
	var_593_object->add(var_591_float);
	if(var_591_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_593_object);
}
EMIT "Stack[-1] = 0";


void func_1558(float var_535_float, object var_536_object, float var_537_float, int var_538_int)
{
	int var_548_int; int var_550_int;
	object var_555_object;
	var_536_object = var_555_object;
	bool var_554_bool;
	func_1524(var_554_bool, var_555_object, "health");
	if(!var_554_bool) //@nz
		var_535_float = 0.0;
	bool var_558_bool; object var_559_object;
	func_1524(var_558_bool, var_559_object, "armor");
	if(!var_558_bool) //@nz
		var_548_int = 0;
	else
		var_559_object->GetProperty("armor", var_548_int);
	string var_563_string; int var_564_int;
	var_538_int = var_564_int;
	func_1490(var_563_string, var_564_int);
	string var_549_string = "armor_" + var_563_string;
	bool var_569_bool; object var_570_object; string var_571_string;
	var_536_object = var_570_object;
	func_1524(var_569_bool, var_570_object, var_571_string);
	if(!var_569_bool) //@nz
		var_550_int = 0;
	else
		var_536_object->GetProperty(var_571_string, var_550_int);

	float var_573_float;
	func_1967(var_573_float, ((var_548_int + var_550_int) / 100.0), (float)1);
	float var_551_float;
	var_573_float = var_551_float;
	float var_552_float;
	var_536_object->GetProperty("health", var_552_float);
	float var_553_float = var_537_float * (1 - var_551_float);
	float var_583_float;
	func_1998(var_583_float, (var_552_float - var_553_float), (float)0, (float)1);
	var_536_object->SetProperty("health", var_583_float);
	bool var_589_bool; object var_590_object;
	var_536_object = var_590_object;
	func_1519(var_589_bool, var_590_object);
	if(var_589_bool != 0) {
		float var_591_float = -var_553_float;
		func_2057(var_591_float);
	}
	var_553_float = var_535_float;
	
}


void func_2074(float var_86_float)
{
	object var_88_object;
	@CreateFloatVector(var_88_object);
	var_88_object->add(var_86_float);
	@SendWorldWndMessage(16, var_88_object);
}
EMIT "Stack[-1] = 0";


void func_543(bool var_0_bool, object var_1_object, bool var_488_bool, float var_489_float)
{
	string var_497_string;
	func_884(var_497_string);
	int var_494_int;
	@irand(var_494_int, var_1_object);
	@Face(var_0_bool);
	@SetAttackState(true);
	func_2093();
	@PlayAnimation("all", ("attack_begin" + (var_494_int + 1)));
	@WaitForAnimEnd();
	int var_496_int;
	func_852(var_496_int, var_497_string);
	bool var_518_bool;
	func_1703(var_518_bool, var_0_bool);
	if(!var_518_bool) { //@nz
		@StopAsync();
		var_488_bool = false;
		return 8;
	}
	float var_521_float; int var_522_int;
	var_489_float = var_521_float;
	var_494_int = var_522_int;
	func_504(var_497_string, var_521_float, var_522_int);
	bool var_495_bool;
	@HasAnimation(var_495_bool, "all", ("attack_middle" + var_494_int));
	if(var_495_bool != 0) {
		func_2093();
		@PlayAnimation("all", ("attack_middle" + var_494_int));
		@WaitForAnimEnd();
		func_884(var_497_string);
		bool var_631_bool;
		func_1703(var_631_bool, var_0_bool);
		if(!var_631_bool) { //@nz
			@StopAsync();
			var_488_bool = false;
			return 8;
		}
		float var_634_float; int var_635_int;
		var_489_float = var_634_float;
		func_504(var_497_string, var_634_float, var_635_int);
		var_496_int = 1;

		for(;;) {
			var_497_string = (("attack_middle" + var_635_int) + "_") + var_496_int;
			@HasAnimation(var_495_bool, "all", var_497_string);
			if(!var_495_bool) { //@nz
			} else {
				func_2093();
				@PlayAnimation("all", var_497_string);
				@WaitForAnimEnd();
				func_884(var_497_string);
				bool var_657_bool;
				func_1703(var_657_bool, var_0_bool);
				if(!var_657_bool) { //@nz
					@StopAsync();
					var_488_bool = false;
					return 8;
				}
				float var_660_float; int var_661_int;
				var_489_float = var_660_float;
				var_494_int = var_661_int;
				func_504(var_497_string, var_660_float, var_661_int);
				var_496_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_494_int));
		bool var_646_bool;
		func_894(var_646_bool);
		if(var_646_bool != 0) {
			bool var_647_bool;
			func_682(var_647_bool, 0.45);
			@StopAsync();
		}
		var_488_bool = true;
		return 8;

	}
}


void func_2084(object var_97_object)
{
	bool var_99_bool;
	@IsPlayerActor(var_97_object, var_99_bool);
	if(var_99_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_37(bool var_0_bool, bool var_80_bool, object var_81_object, object var_198_object)
{
	object var_97_object;
	var_81_object = var_97_object;
	func_2084(var_97_object);
	bool var_102_bool; object var_103_object;
	var_81_object = var_103_object;
	func_1737(var_102_bool, var_103_object);
	bool var_116_bool; object var_117_object;
	func_1703(var_116_bool, var_117_object);
	if(!var_116_bool) { //@nz
		var_80_bool = false;
		return 14;
	}
	func_2093();
	@Face(var_117_object);
	@PlayAnimation("all", "aattack_begin1");
	@WaitForAnimEnd();
	bool var_125_bool; object var_126_object;
	var_81_object = var_126_object;
	func_1703(var_125_bool, var_126_object);
	if(!var_125_bool) { //@nz
		@StopAsync();
		var_80_bool = false;
		return 14;
	}
	@PlayAnimation("all", "aattack_end1");
	object var_90_object;
	@GetScene(var_90_object);
	cvector var_91_cvector;
	bool var_92_bool;
	@GetGeometryLocator("knife", var_92_bool, var_91_cvector);
	object var_93_object;
	@AddActorByType(var_93_object, "scripted", var_90_object, var_91_cvector, [0.0, 0.0, 1.0], "grabitel_knife.xml");
	object var_135_object;
	func_1951(var_135_object);
	var_93_object->SetScriptProperty("Owner", var_135_object);
	var_93_object->SetScriptProperty("Target", var_81_object);
	cvector var_94_cvector;
	var_81_object->GetPosition(var_94_cvector);
	float var_95_float;
	var_81_object->GetEyesHeight(var_95_float);
	var_137_float = GetByIndex(var_94_cvector, 1);
	SetByIndex(var_94_cvector, 1) = (var_137_float + (var_95_float - 10));
	cvector var_140_cvector; cvector var_141_cvector; cvector var_142_cvector;
	var_91_cvector = var_141_cvector;
	var_94_cvector = var_142_cvector;
	func_2318(var_140_cvector, var_141_cvector, var_142_cvector, 2000.0);
	cvector var_96_cvector;
	var_140_cvector = var_96_cvector;
	var_93_object->SetScriptProperty("StartDirection", var_96_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	if(false != 0) {
		var_80_bool = true;
		return 14;
	}
	bool var_193_bool; object var_194_object;
	var_81_object = var_194_object;
	func_1703(var_193_bool, var_194_object);
	if(!var_193_bool) { //@nz
		var_80_bool = false;
		return 14;
	}
	bool var_196_bool; object var_197_object;
	var_81_object = var_197_object;
	TaskCall(2);
	func_163(var_196_bool, var_197_object);
	TaskReturn();
	var_198_object = var_80_bool;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


void func_2093(void)
{
	object var_120_object;
	@GetScene(var_120_object);
	object var_122_object;
	func_1951(var_122_object);
	@BroadcastMessage("battle", var_122_object, var_120_object);
}
EMIT "Stack[-1] = 0";


void func_2104(bool var_617_bool)
{
	bool var_619_bool;
	@GetVariable("god_mode", var_619_bool);
	var_619_bool = var_617_bool;
}


void func_2110(string var_35_string, int var_36_int)
{
	string var_38_string = "idle";
	if(var_36_int != 0)
		var_38_string += var_36_int;
	var_38_string = var_35_string;
}


void func_2117(int var_29_int)
{
	int var_32_int; bool var_33_bool;
	var_32_int = 0;
	
	for(;;) {
		string var_35_string; int var_36_int;
		var_32_int = var_36_int;
		func_2110(var_35_string, var_36_int);
		@HasAnimation(var_33_bool, "all", var_35_string);
		if(!var_33_bool) //@nz
			break;
		var_32_int += 1;
	}
	var_32_int = var_29_int;
}


// @pe
void func_2134(object var_11_object)
{
	object var_12_object;
	var_11_object = var_12_object;
	TaskCall(6);
	func_1320(var_12_object);
	TaskReturn();
}


void func_1631(bool var_606_bool, object var_607_object)
{
	object var_611_object;
	var_607_object = var_611_object;
	bool var_610_bool;
	func_1524(var_610_bool, var_611_object, "health");
	if(!var_610_bool) { //@nz
		var_606_bool = false;
		return 2;
	}
	bool var_614_bool = false;
	bool var_615_bool; object var_616_object;
	func_1519(var_615_bool, var_616_object);
	if(var_615_bool != 0) {
		bool var_617_bool;
		func_2104(var_617_bool);
		if(var_617_bool != 0)
			var_614_bool = true;
	}
	if(var_614_bool != 0) {
		var_606_bool = false;
		return 2;
	}
	float var_609_float;
	var_616_object->GetProperty("health", var_609_float);
	var_606_bool = var_609_float <= 0.0;
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


void func_1662(bool var_32_bool, object var_33_object)
{
	bool var_35_bool;
	var_33_object->IsDead(var_35_bool);
	var_35_bool = var_32_bool;
}


void func_1153(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_2179(bool var_15_bool, object var_16_object)
{
	object var_18_object;
	var_16_object = var_18_object;
	bool var_17_bool;
	func_1703(var_17_bool, var_18_object);
	var_17_bool = var_15_bool;
}


void func_1667(bool var_21_bool, object var_22_object)
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
		func_1662(var_32_bool, var_33_object);
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
void func_2186(object var_51_object)
{
	object var_52_object;
	var_51_object = var_52_object;
	func_2353(var_52_object);
}


void func_2192(int var_55_int)
{
	int var_57_int;
	@GetVariable("branch", var_57_int);
	var_57_int = var_55_int;
}


// @pe
void func_1169(bool var_321_bool, object var_322_object)
{
	object var_324_object;
	var_322_object = var_324_object;
	bool var_323_bool;
	func_1703(var_323_bool, var_324_object);
	var_323_bool = var_321_bool;
}


// @pe
void func_2198(object var_14_object)
{
	int var_15_int;
	func_2192(var_15_int);
	if(var_15_int == 1)
		@WorkWithCorpse(var_14_object);
	else
		@Barter(var_14_object);
	
}


void func_1176(string var_339_string)
{
	var_339_string = "walk";
}


void func_1178(string var_340_string)
{
	var_340_string = "run";
}


// @pe
void func_163(bool var_196_bool, object var_197_object)
{
	var_204_bool = GlobalVars[0];
	GlobalVars[0] = false;
	object var_205_object;
	func_240(var_201_bool, var_202_float, var_203_int, var_196_bool, var_205_object, var_205_object, true, 200.0);
	bool var_679_bool = false;
	var_680_bool = GlobalVars[0];
	if(var_680_bool != 0) {
		if(var_3_int != 0)
			var_679_bool = true;
	}
	if(var_679_bool != 0) {
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
	}
	var_684_bool = GlobalVars[0];
	var_684_bool = var_196_bool;
}


void func_2211(int var_18_int, int var_19_int)
{
	if(var_18_int > var_19_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_22_int = 0;
	if(var_18_int != var_19_int) {
		@irand(var_22_int, (var_19_int - var_18_int));
	} else if(var_18_int == 0) {
		return 4;
	}
	var_22_int += var_18_int;
	if(var_22_int == 0)
		return 4;
	int var_30_int;
	func_2313(var_30_int, "Money");
	bool var_23_bool;
	@AddItem(var_23_bool, var_30_int, 0, var_22_int);
	
}


void func_1703(bool var_17_bool, object var_18_object)
{
	object var_22_object;
	var_18_object = var_22_object;
	bool var_21_bool;
	func_1667(var_21_bool, var_22_object);
	if(!var_21_bool) { //@nz
		var_17_bool = false;
		return 2;
	}
	bool var_39_bool; object var_40_object;
	func_1524(var_39_bool, var_40_object, "noaccess");
	if(!var_39_bool) { //@nz
		var_17_bool = true;
		return 2;
	}
	int var_20_int;
	var_40_object->GetProperty("noaccess", var_20_int);
	var_17_bool = var_20_int == 0;
}


void func_680(int var_3_int)
{
	var_3_int = true;
}


void func_682(bool var_647_bool, float var_648_float)
{
	float var_651_float; bool var_652_bool;
	@rand(var_651_float);
	if(var_651_float < var_648_float) {

		for(;;) {
			@IsAnimationPlaying(var_652_bool);
			if(!var_652_bool) { //@nz
			} else {
				bool var_655_bool;
				func_780(var_655_bool);
				if(var_655_bool != 0) {
					var_647_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_647_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_884(var_652_bool);
}


// @pe
void func_191(float var_532_float)
{
	var_532_float = 0.15;
}


void func_1727(bool var_106_bool, cvector var_107_cvector)
{
	cvector var_111_cvector;
	@GetPosition(var_111_cvector);
	cvector var_112_cvector = var_107_cvector - var_111_cvector;
	var_114_float = GetByIndex(var_112_cvector, 0);
	var_115_float = GetByIndex(var_112_cvector, 2);
	bool var_113_bool;
	@Rotate(var_114_float, var_115_float, var_113_bool);
	var_113_bool = var_106_bool;
}


// @pe
void func_194(int var_539_int)
{
	var_539_int = 0;
}


void func_2242(string var_61_string)
{
	object var_65_object;
	@CreateInvItem(var_65_object);
	var_65_object->SetItemName(var_61_string);
	var_65_object->SetProperty("Organ", 1);
	int var_66_int;
	var_65_object->GetItemID(var_66_int);
	bool var_67_bool;
	@AddItem(var_67_bool, var_65_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_709(bool var_0_bool, bool var_427_bool, float var_428_float)
{
	bool var_434_bool; cvector var_435_cvector; cvector var_436_cvector; cvector var_437_cvector; float var_438_float;
	
	for(;;) {
		@IsAnimationPlaying(var_434_bool);
		if(!var_434_bool) //@nz
			break;
		bool var_440_bool;
		func_780(var_440_bool);
		if(var_440_bool != 0) {
			var_427_bool = true;
			return 10;
		}
		bool var_483_bool;
		func_1703(var_483_bool, var_0_bool);
		if(!var_483_bool) { //@nz
			var_427_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_435_cvector); //@t
		@GetPFPosition(var_436_cvector);
		var_437_cvector = var_435_cvector - var_436_cvector;
		var_438_float = var_437_cvector | var_437_cvector;
		if(var_438_float < (var_428_float * var_428_float)) {
			bool var_488_bool; float var_489_float;
			var_428_float = var_489_float;
			func_543(var_437_cvector, var_438_float, var_488_bool, var_489_float);
			var_427_bool = true;
			return 10;
		}
		@sync();
	}
	func_884(var_438_float);
	var_427_bool = false;
}


void func_197(int var_600_int)
{
	var_600_int = 1;
}


// @pe
void func_199(object var_601_object, float var_602_float)
{
	bool var_603_bool = false;
	if(var_602_float > 0) {
		bool var_606_bool; object var_607_object;
		var_601_object = var_607_object;
		func_1631(var_606_bool, var_607_object);
		if(var_606_bool != 0)
			var_603_bool = true;
	}
	if(var_603_bool != 0) {
		var_623_bool = GlobalVars[0];
		GlobalVars[0] = true;
		func_680(var_602_float);
	}
}


void func_1222(void)
{
	int var_20_int; int var_21_int; bool var_22_bool; float var_23_float; bool var_24_bool;
	@WaitForAnimEnd();
	bool var_25_bool;
	func_1883(var_25_bool);
	if(!var_25_bool) //@nz
		return 14;
	int var_29_int;
	func_2117(var_29_int);
	int var_18_int;
	var_29_int = var_18_int;
	int var_19_int = 0;
	
	for(;;) {
		bool var_42_bool = false;
		if(var_19_int < 5) {
			bool var_45_bool;
			func_1883(var_45_bool);
			if(var_45_bool != 0)
				var_42_bool = true;
		}
		if(var_42_bool != 0) {
			@irand(var_20_int, 3);
			if(var_20_int == 0) {
				if(var_18_int == 0) goto Label_1269;
				@irand(var_21_int, var_18_int);
				string var_51_string; int var_52_int;
				var_21_int = var_52_int;
				func_2110(var_51_string, var_52_int);
				@PlayAnimation("all", var_51_string);
				@WaitForAnimEnd(var_22_bool);
				if(!var_22_bool) { //@nz
				} else {
			} else {
			if(var_20_int == 1) {
				@rand(var_23_float, 4);
				@Sleep((var_23_float + 1), var_24_bool);
				if(!var_24_bool) { //@nz
					goto Label_1298;
				}
			} else if(var_19_int != 0) {
				goto Label_1298;
			}
			}
					bool var_54_bool;
					func_1301(var_54_bool);
					var_55_bool = !var_54_bool; //@nz
					if(var_55_bool == 0) goto Label_1293;
			}
		}
	Label_1298:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_1293:
		@ResetAAS();
		var_19_int += 1;
	}
	
}


void func_1737(bool var_102_bool, object var_103_object)
{
	cvector var_105_cvector;
	var_103_object->GetPosition(var_105_cvector);
	bool var_106_bool; cvector var_107_cvector;
	var_105_cvector = var_107_cvector;
	func_1727(var_106_bool, var_107_cvector);
	var_106_bool = var_102_bool;
}


void func_1746(object var_27_object)
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


void func_2259(void)
{
	int var_55_int;
	func_2192(var_55_int);
	if(var_55_int != 1) {
	}
	func_2242("liver");
	func_2242("kidney");
	func_2242("heart");
	func_2242("blood");
}


void func_2283(void)
{
	@ClearSubContainer(0);
	func_2211(300, 750);
	func_1899("Knife", 1, 8);
	func_1899("lockpick", 1, 6);
	int var_51_int;
	func_2313(var_51_int, "grabitel_mark");
	bool var_16_bool;
	@AddItem(var_16_bool, var_51_int, 0, 1);
}


void func_240(bool var_0_bool, int var_3_int, float var_5_float, object var_205_object, bool var_206_bool, float var_207_float, bool var_276_bool, bool var_368_bool)
{
	float var_219_float; cvector var_220_cvector; cvector var_221_cvector; bool var_223_bool; float var_226_float; cvector var_227_cvector; bool var_228_bool; float var_229_float;
	func_469(var_227_cvector, var_228_bool, var_229_float);
	var_5_float = 0;
	var_254_bool = IsFuncExist(var_205_object, "@GetAttackDistance", 1);
	if(var_254_bool != 0) {
		var_205_object->GetAttackDistance(var_219_float);
		var_219_float += 50;
	} else {
						var_207_float = var_219_float;
	}
	if(var_219_float >= 150)
		var_219_float = 150;
	var_3_int = false;
	var_0_bool = var_205_object;
	bool var_222_bool;
	@IsPlayerActor(var_0_bool, var_222_bool);
	if(var_222_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_260_object;
		func_1951(var_260_object);
		@SendPlayerEnemy(var_205_object, var_260_object);
	}
	if(var_206_bool != 0)
		var_223_bool = false;
	else
		var_223_bool = true;

	
Label_280:
	for(;;) {
		bool var_263_bool = false;
		bool var_264_bool;
		func_1703(var_264_bool, var_0_bool);
		if(var_264_bool != 0) {
			if(!var_3_int) //@nz
				var_263_bool = true;
		}
		if(var_263_bool != 0) {
			func_884(var_229_float);
			var_0_bool->GetPFPosition(var_220_cvector); //@t
			@GetPFPosition(var_221_cvector);
			var_226_float = (var_220_cvector - var_221_cvector) | (var_220_cvector - var_221_cvector);
			if(var_226_float >= ((300.0 + var_219_float) * (300.0 + var_219_float))) {
				bool var_270_bool; float var_272_float;
				var_219_float = var_272_float;
				TaskCall(3);
				func_924(var_278_bool, var_270_bool, var_0_bool, var_272_float, 3000.0, true, false);
				TaskReturn();
				if(!var_276_bool) { //@nz
				} else {
					var_223_bool = false;
			} else {
			if(var_226_float >= (var_207_float * var_207_float)) {
				var_0_bool->GetPFPosition(var_227_cvector); //@t
				@CanReachByPF(var_228_bool, var_227_cvector);
				if(!var_228_bool) { //@nz
					bool var_362_bool; float var_364_float;
					var_219_float = var_364_float;
					TaskCall(3);
					func_924(var_370_bool, var_362_bool, var_0_bool, var_364_float, 3000.0, true, false);
					TaskReturn();
					if(!var_368_bool) { //@nz
						goto Label_452;
					}
					var_223_bool = false;
					goto Label_280;
				}
				if(!var_223_bool) { //@nz
					func_1872(var_0_bool);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_884(var_229_float);
					@StopAsync();
					var_223_bool = true;
					bool var_384_bool;
					func_1703(var_384_bool, var_0_bool);
					if(!var_384_bool) { //@nz
						goto Label_452;
					}
				}
				@rand(var_229_float);
				bool var_387_bool;
				var_389_bool = var_229_float < 0.19999999;
				if(var_389_bool != 1) {
					bool var_390_bool;
					func_841(true, var_390_bool);
					if(var_390_bool != 1)
						var_387_bool = false;
				}
				if(var_387_bool != 0) {
					@Face(var_0_bool);
					func_889();
					@PlayAnimation("all", "attack_stay");
					bool var_427_bool; float var_428_float;
					func_709(var_229_float, var_427_bool, var_428_float);
					@StopAsync();
				} else {
					@Face(var_0_bool);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_884(var_229_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_666_bool;
					func_841(var_229_float, var_666_bool);
					var_667_bool = !var_666_bool; //@nz
					if(var_667_bool == 0) goto Label_442;
					bool var_668_bool;
					func_1703(var_668_bool, var_0_bool);
					if(!var_668_bool) { //@nz
						goto Label_452;
					}
					var_0_bool->GetPFPosition(var_220_cvector); //@t
					@GetPFPosition(var_221_cvector);
					if(!(((var_220_cvector - var_221_cvector) | (var_220_cvector - var_221_cvector)) < (var_428_float * var_428_float))) goto Label_442;
					bool var_673_bool; float var_674_float;
					var_207_float = var_674_float;
					func_543(var_228_bool, var_229_float, var_673_bool, var_674_float);
					var_675_bool = !var_673_bool; //@nz
					if(var_675_bool == 0) goto Label_442;
					goto Label_452;
			}
				bool var_676_bool; float var_677_float;
				var_207_float = var_677_float;
				func_543(var_228_bool, var_229_float, var_676_bool, var_677_float);
				if(!var_676_bool) { //@nz
					goto Label_452;
				}
				var_223_bool = true;

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
		if(var_222_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_752(bool var_0_bool, bool var_442_bool)
{
	cvector var_448_cvector; cvector var_449_cvector;
	bool var_453_bool;
	func_1703(var_453_bool, var_0_bool);
	if(!var_453_bool) { //@nz
		var_442_bool = false;
		return 10;
	}
	bool var_456_bool;
	float var_452_float;
	func_841(var_452_float, var_456_bool);
	if(var_456_bool != 0) {
		var_0_bool->GetPFPosition(var_448_cvector); //@t
		@GetPFPosition(var_449_cvector);
		var_0_bool->GetAttackDistance(var_452_float); //@t
		var_442_bool = ((var_448_cvector - var_449_cvector) | (var_448_cvector - var_449_cvector)) <= ((var_452_float + 50) * (var_452_float + 50));
		return 10;
	}
	var_442_bool = false;
}


void func_1790(object var_14_object, int var_15_int, float var_16_float)
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
		func_1504(var_44_cvector, var_45_object);
		var_44_cvector = var_43_cvector;
		func_1957(var_42_cvector, var_43_cvector);
		var_42_cvector = var_26_cvector;
		@CreateVectorVector(var_27_object);
		var_28_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_28_int), var_29_bool, var_30_cvector, var_31_cvector);
			if(!var_29_bool) { //@nz
				break;
			Label_1852:
				var_27_object = null;
	}
			object var_104_object;
			var_14_object = var_104_object;
			func_1746(var_104_object);
		}
		if((var_31_cvector | var_26_cvector) >= 0.70710677)
			var_27_object->add(var_30_cvector);
		var_28_int += 1;
	}
	int var_32_int;
	var_27_object->size(var_32_int);
	if(var_32_int == 0) goto Label_1852;
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
	func_1858(var_61_float, var_62_cvector, var_63_cvector);
}


void func_2313(int var_30_int, string var_31_string)
{
	int var_33_int;
	@GetInvItemByName(var_33_int, var_31_string);
	var_33_int = var_30_int;
}


void func_780(bool var_440_bool)
{
	bool var_441_bool = false;
	bool var_442_bool;
	func_752(var_441_bool, var_442_bool);
	if(var_442_bool != 0) {
		bool var_459_bool;
		func_796(var_440_bool, var_441_bool, var_459_bool);
		if(var_459_bool != 0)
			var_441_bool = true;
	}
	if(var_441_bool != 0) {
		var_440_bool = true;
		return 0;
	}
	var_440_bool = false;
}


void func_2318(cvector var_140_cvector, cvector var_141_cvector, cvector var_142_cvector, float var_143_float)
{
	cvector var_150_cvector; float var_155_float;
	var_150_cvector = var_142_cvector - var_141_cvector;
	float var_151_float = 250000;
	var_156_float = GetByIndex(var_150_cvector, 1);
	float var_152_float = (var_156_float * 1000) - (var_143_float * var_143_float);
	float var_153_float = var_150_cvector | var_150_cvector;
	float var_160_float; float var_161_float; float var_162_float; float var_163_float;
	var_151_float = var_161_float;
	var_152_float = var_162_float;
	var_153_float = var_163_float;
	func_1974(var_160_float, var_161_float, var_162_float, var_163_float);
	float var_154_float;
	var_160_float = var_154_float;
	if(var_154_float < 0) {
		var_155_float = 1;
	} else {
		float var_174_float; float var_175_float; float var_176_float; float var_177_float; float var_178_float;
		var_151_float = var_175_float;
		var_152_float = var_176_float;
		var_153_float = var_177_float;
		var_178_float = sqrt(var_154_float);
		func_1981(var_175_float, var_176_float, var_177_float, var_178_float);
		var_155_float = sqrt(var_174_float);
	}
	var_140_cvector = (var_150_cvector + (([0.0, 500.0, 0.0] * var_155_float) * var_155_float)) / var_155_float;
	
}


void func_1301(bool var_54_bool)
{
	var_54_bool = true;
}


void func_1303(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_796(bool var_0_bool, bool var_4_bool, bool var_459_bool)
{
	object var_465_object; float var_467_float; cvector var_468_cvector; cvector var_469_cvector;
	@GetScene(var_465_object);
	bool var_466_bool = false;
	
	for(;;) {
		cvector var_470_cvector;
		func_1504(var_470_cvector, var_0_bool);
		var_476_int = -var_470_cvector;
		@FindDirLength(var_467_float, var_476_int, var_4_bool);
		if(var_467_float < var_4_bool) {
		} else {
				@Face(var_0_bool);
				@PlayAnimation("all", "bjump");
				var_0_bool->GetPFPosition(var_468_cvector); //@t
				@GetPFPosition(var_469_cvector);
				@WaitForAnimEnd();
				func_884(var_469_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_466_bool = true;
				bool var_481_bool;
				func_752(var_469_cvector, var_481_bool);
				var_482_bool = !var_481_bool; //@nz
				if(var_482_bool == 0) goto Label_837;
		}
		for(;;) {
			var_466_bool = var_459_bool;

		}

	Label_837:
	}
}
EMIT "Stack[-5] = 0";


// @pe
void func_1308(object var_58_object)
{
	
	for(;;) {
		bool var_59_bool; object var_60_object;
		TaskCall(0);
		func_0(var_54_object, var_60_object, var_59_bool, var_60_object);
		TaskReturn();
		@Sleep(1);
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1320(object var_12_object)
{
	func_2283();
	func_2259();
	bool var_75_bool; object var_76_object;
	var_12_object = var_76_object;
	func_1519(var_75_bool, var_76_object);
	if(var_75_bool != 0) {
		bool var_79_bool; object var_80_object;
		var_12_object = var_80_object;
		func_2022(var_79_bool, var_80_object, 0.02);
	}
	object var_117_object;
	var_12_object = var_117_object;
	func_1342(var_117_object);
}


void func_2353(object var_52_object)
{
	object var_54_object;
	@GetScene(var_54_object);
	object var_55_object;
	func_1951(var_55_object);
	var_54_object->RemoveStationaryActor(var_55_object);
	object var_58_object;
	var_52_object = var_58_object;
	TaskCall(5);
	func_1308(var_58_object);
	TaskReturn();
}
EMIT "Stack[-1] = 0";


// @pe
void func_1342(object var_117_object)
{
	object var_118_object;
	var_117_object = var_118_object;
	func_1367(var_118_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_2369(void)
{
}


void func_1858(object var_16_object, cvector var_19_cvector, cvector var_20_cvector)
{
	object var_23_object;
	@GetScene(var_23_object);
	object var_24_object;
	@AddActorByType(var_24_object, "scripted", var_23_object, var_19_cvector, var_20_cvector, "blood_dir.xml");
	object var_27_object;
	var_16_object = var_27_object;
	func_1746(var_27_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_2371(bool var_13_bool)
{
	var_13_bool = false;
}


void func_841(bool var_0_bool, bool var_390_bool)
{
	bool var_392_bool;
	var_395_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_395_bool != 0) {
		var_0_bool->IsAttacking(var_392_bool); //@t
		var_392_bool = var_390_bool;
	}
	var_390_bool = false;
}


void func_1872(object var_373_object)
{
	cvector var_377_cvector;
	var_373_object->GetPosition(var_377_cvector);
	cvector var_378_cvector;
	@GetPosition(var_378_cvector);
	cvector var_379_cvector = var_377_cvector - var_378_cvector;
	var_380_float = GetByIndex(var_379_cvector, 0);
	var_381_float = GetByIndex(var_379_cvector, 2);
	@RotateAsync(var_380_float, var_381_float);
}


void func_852(int var_2_int, float var_5_float)
{
	int var_506_int;
	if(!var_2_int) //@nz
		return 4;
	if(var_5_float != 0) {
		if((var_5_float + -1) > 0)
			return 4;
	}
	float var_505_float;
	@rand(var_505_float);
	float var_512_float;
	func_898(var_512_float);
	if(var_505_float < var_512_float) {
		@irand(var_506_int, var_2_int);
		@Speak("attack" + (var_506_int + 1));
		int var_517_int;
		func_896(var_517_int);
		var_5_float = var_517_int;
	}
}


void func_1367(object var_118_object)
{
	cvector var_129_cvector; cvector var_130_cvector; cvector var_131_cvector; cvector var_132_cvector; string var_133_string; object var_134_object; bool var_135_bool; bool var_136_bool; float var_137_float; cvector var_138_cvector;
	if(var_118_object == null) {
		func_1458("fdie");
	} else {
		var_118_object->GetPosition(var_129_cvector);
		@GetPosition(var_130_cvector);
		@GetDirection(var_131_cvector);
		var_132_cvector = var_130_cvector - var_129_cvector;
		var_172_float = GetByIndex(var_132_cvector, 0);
		var_173_float = GetByIndex(var_131_cvector, 0);
		var_175_float = GetByIndex(var_132_cvector, 2);
		var_176_float = GetByIndex(var_131_cvector, 2);
		if(((var_172_float * var_173_float) + (var_175_float * var_176_float)) >= 0)
			var_133_string = "fdie";
		else
			var_133_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_118_object = var_134_object;
		var_183_bool = IsFuncExist(var_118_object, "GetScriptProperty", 2);
		if(var_183_bool != 0) {
			var_118_object->HasScriptProperty(var_135_bool, "Owner");
			if(var_135_bool != 0) {
				var_118_object->GetScriptProperty(var_134_object, "Owner");
				if(var_134_object == null)
					var_118_object = var_134_object;
			}
		}
		var_190_bool = IsFuncExist(var_134_object, "@GetEyesHeight", 1);
		if(var_190_bool != 0) {
			var_134_object->GetEyesHeight(var_137_float);
			var_138_cvector = [0.0, 0.0, 0.0];
			var_191_float = GetByIndex(var_138_cvector, 1);
			var_137_float = var_191_float;
			SetByIndex(var_138_cvector, 1) = var_191_float;
			@LookAsync(var_118_object, "head", var_138_cvector);
			var_136_bool = true;
		} else {
			var_136_bool = false;

		}
		string var_193_string;
		var_133_string = var_193_string;
		func_1910(var_193_string);
		@PlayAnimation("all", var_133_string);
		@WaitForAnimEnd();
		if(var_136_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_133_string);
		@RemoveEnvelope();
		var_134_object = null;
	}
	
}


void func_1883(bool var_25_bool)
{
	bool var_27_bool;
	@IsLoaded(var_27_bool);
	var_27_bool = var_25_bool;
}


void func_1888(object var_287_object)
{
	float var_290_float;
	var_287_object->GetEyesHeight(var_290_float);
	cvector var_291_cvector = [0.0, 0.0, 0.0];
	var_292_float = GetByIndex(var_291_cvector, 1);
	var_290_float = var_292_float;
	SetByIndex(var_291_cvector, 1) = var_292_float;
	@LookAsync(var_287_object, "head", var_291_cvector);
}


void func_1899(string var_37_string, int var_38_int, int var_39_int)
{
	bool var_41_bool;
	int var_43_int;
	var_38_int = var_43_int;
	int var_44_int;
	var_39_int = var_44_int;
	bool var_42_bool;
	func_2017(var_42_bool, var_43_int, var_44_int);
	if(var_42_bool != 0)
		@AddItem(var_41_bool, var_37_string, 0);
}


void func_884(bool var_0_bool)
{
	func_2084(var_0_bool);
}


void func_1910(string var_141_string)
{
	bool var_150_bool; int var_151_int; bool var_152_bool; int var_153_int; bool var_154_bool; float var_155_float; cvector var_156_cvector; cvector var_157_cvector;
	@IsExisting3DSound(var_150_bool, var_141_string);
	if(!var_150_bool) { //@nz
		var_151_int = 0;

		for(;;) {
			@IsExisting3DSound(var_152_bool, (var_141_string + (var_151_int + 1)));
			if(!var_152_bool) { //@nz
				break;
			Label_1930:
				@irand(var_153_int, var_151_int);
				var_141_string += (var_153_int + 1);
	}
			@Is3DSoundLoaded(var_154_bool, var_141_string);
			if(var_154_bool != 0) {
				@GetEyesHeight(var_155_float);
				@GetDirection(var_156_cvector);
				var_157_cvector = var_156_cvector * 50;
				var_168_float = GetByIndex(var_157_cvector, 1);
				SetByIndex(var_157_cvector, 1) = (var_168_float + var_155_float);
				@PlayGlobalSound(var_141_string, var_157_cvector);
			}
		}
		var_151_int += 1;
	}
	var_163_bool = !var_151_int; //@nz
	if(var_163_bool == 0) goto Label_1930;
}


void func_889(void)
{
	func_1910("attack_stay");
}


void func_894(bool var_646_bool)
{
	var_646_bool = true;
}


void func_896(int var_517_int)
{
	var_517_int = 1;
}


void func_898(float var_512_float)
{
	var_512_float = 0.5;
}


void func_924(int var_2_int, bool var_270_bool, object var_271_object, float var_272_float, float var_273_float, bool var_274_bool, bool var_275_bool)
{
	object var_283_object;
	func_2084(var_283_object);
	@SetTimer(1, 5);
	bool var_281_bool;
	@CanSee(var_281_bool, var_283_object);
	if(var_281_bool != 0) {
		var_2_int = true;
		object var_287_object;
		var_271_object = var_287_object;
		func_1888(var_287_object);
	} else {
		var_2_int = false;
	}
	bool var_294_bool; object var_295_object;
	func_1519(var_294_bool, var_295_object);
	if(var_294_bool != 0) {
		object var_298_object;
		func_1951(var_298_object);
		@SendPlayerEnemy(var_295_object, var_298_object);
	}
	bool var_299_bool; object var_300_object; float var_301_float; float var_302_float; bool var_303_bool; bool var_304_bool;
	var_271_object = var_300_object;
	var_272_float = var_301_float;
	var_273_float = var_302_float;
	var_274_bool = var_303_bool;
	var_275_bool = var_304_bool;
	bool var_282_bool;
	func_1029(var_281_bool, var_282_bool, var_299_bool, var_300_object, var_301_float, var_302_float, var_303_bool, var_304_bool);
	var_299_bool = var_282_bool;
	if(var_2_int != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_282_bool = var_270_bool;
	
}


void func_1951(object var_55_object)
{
	object var_57_object;
	@self(var_57_object);
	var_57_object = var_55_object;
}
EMIT "Stack[-1] = 0";


void func_1957(cvector var_42_cvector, cvector var_43_cvector)
{
	float var_51_float = sqrt(var_43_cvector | var_43_cvector);
	if(var_51_float < 0.000001)
		var_42_cvector = [0.0, 0.0, 0.0];
	var_42_cvector = var_43_cvector / var_51_float;
}


// @pe
void func_1967(float var_573_float, float var_574_float, float var_575_float)
{
	if(var_574_float < var_575_float)
		var_574_float = var_573_float;
	else
		var_575_float = var_573_float;
	
}


// @pe
void func_1458(string var_140_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_141_string;
	var_140_string = var_141_string;
	func_1910(var_141_string);
	@PlayAnimation("all", var_140_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_140_string);
	@RemoveEnvelope();
}


// @pe
void func_1974(float var_160_float, float var_161_float, float var_162_float, float var_163_float)
{
	var_160_float = (var_162_float * var_162_float) - ((4 * var_161_float) * var_163_float);
}


void func_1981(float var_174_float, float var_175_float, float var_176_float, float var_178_float)
{
	float var_180_float;
	var_181_int = -var_176_float;
	if(((var_181_int - var_178_float) / (2 * var_175_float)) > 0) {
		var_180_float = var_174_float;
		return 2;
	}
	var_187_int = -var_176_float;
	var_174_float = (var_187_int + var_178_float) / (2 * var_175_float);
}


// @pe
void func_1998(float var_108_float, float var_109_float, float var_110_float, float var_111_float)
{
	if(var_109_float < var_110_float) {
		var_110_float = var_108_float;
		return 0;
	}
	if(var_109_float > var_111_float) {
		var_111_float = var_108_float;
		return 0;
	}
	var_109_float = var_108_float;
}


// @pe
void func_1490(string var_563_string, int var_564_int)
{
	if(var_564_int == 2) {
		var_563_string = "fire";
		return 0;
	EMIT "GOTO 0x5de";
	}
	if(var_564_int == 1) {
		var_563_string = "bullet";
		return 0;
	}
	var_563_string = "phys";
}


void func_469(object var_1_object, int var_2_int, bool var_4_bool)
{
	bool var_233_bool; bool var_234_bool; cvector var_235_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_233_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_233_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_int = 0;

		for(;;) {
			@IsExisting3DSound(var_234_bool, ("attack" + (var_2_int + 1)));
			if(!var_234_bool) //@nz
				break;
			var_2_int += 1;
		}
		@GetAnimationOffset(var_235_cvector, "all", "bjump");
		var_249_float = GetByIndex(var_235_cvector, 2);
		var_4_bool = -var_249_float;

	}
}


// @pe
void func_2009(bool var_74_bool, float var_75_float, float var_76_float, float var_77_float)
{
	var_74_bool = false;
	if(var_75_float >= var_76_float) {
		if(var_75_float <= var_77_float)
			var_74_bool = true;
	}
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


void func_1504(cvector var_44_cvector, object var_45_object)
{
	cvector var_48_cvector;
	@GetPosition(var_48_cvector);
	cvector var_49_cvector;
	var_45_object->GetPosition(var_49_cvector);
	var_44_cvector = var_49_cvector - var_48_cvector;
}


void func_2017(bool var_42_bool, int var_43_int, int var_44_int)
{
	int var_46_int;
	@irand(var_46_int, var_44_int);
	var_42_bool = var_46_int < var_43_int;
}


// @pe
void func_2022(bool var_79_bool, object var_80_object, float var_81_float)
{
	if(!var_80_object) { //@nz
		var_79_bool = false;
		return 0;
	}
	if(var_81_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_81_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_86_float;
		var_81_float = var_86_float;
		func_2074(var_86_float);
		bool var_90_bool; object var_91_object; float var_93_float;
		var_80_object = var_91_object;
		var_81_float = var_93_float;
		func_1536(var_90_bool, var_91_object, "reputation", var_93_float, (float)0, (float)1);
		var_79_bool = true;
		return 0;

	}
	
	var_79_bool = false;
}


void func_1511(float var_66_float, object var_67_object)
{
	cvector var_71_cvector;
	@GetPosition(var_71_cvector);
	cvector var_72_cvector;
	var_67_object->GetPosition(var_72_cvector);
	var_66_float = (var_72_cvector - var_71_cvector) | (var_72_cvector - var_71_cvector);
}


void func_1519(bool var_75_bool, object var_76_object)
{
	bool var_78_bool;
	@IsPlayerActor(var_76_object, var_78_bool);
	var_78_bool = var_75_bool;
}


void func_1524(bool var_98_bool, object var_99_object, string var_100_string)
{
	var_105_bool = IsFuncExist(var_99_object, "HasProperty", 2);
	if(!var_105_bool) { //@nz
		var_98_bool = false;
		return 2;
	}
	bool var_102_bool;
	var_99_object->HasProperty(var_100_string, var_102_bool);
	var_102_bool = var_98_bool;
}


void func_504(bool var_0_bool, float var_521_float, int var_522_int)
{
	object var_526_object; float var_527_float; float var_528_float;
	@GetVictim((var_521_float * 0.9), var_526_object);
	@ReportAttack(var_0_bool);
	if(var_526_object == var_0_bool) {
		float var_532_float; object var_533_object; int var_534_int;
		var_526_object = var_533_object;
		var_522_int = var_534_int;
		func_191(var_534_int);
		var_532_float = var_527_float;
		float var_535_float; object var_536_object; float var_537_float; int var_538_int;
		var_526_object = var_536_object;
		int var_539_int; object var_540_object; int var_541_int;
		var_526_object = var_540_object;
		var_522_int = var_541_int;
		func_194(var_541_int);
		var_539_int = var_538_int;
		func_1558(var_535_float, var_536_object, var_537_float, var_538_int);
		var_535_float = var_528_float;
		int var_600_int;
		func_197(var_600_int);
		@ReportHit(var_0_bool, var_600_int, var_528_float, var_537_float);
		object var_601_object; float var_602_float;
		var_526_object = var_601_object;
		var_528_float = var_602_float;
		func_199(var_601_object, var_602_float);
	}
}
EMIT "Stack[-3] = 0";


