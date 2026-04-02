// @GLOBALS: 0:bool:,1:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, cvector var_16_cvector, cvector var_17_cvector)
	{
		if(1 != 0) {
			func_2036();
			if(var_16_cvector == 8308) {
				func_139(var_17_cvector, "Neutral");
				var_0_object->SetMessage(507526); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507527, -1, 8309); //@t
				var_0_object->AddReply(533979, -1, 35550); //@t
				return 0;
			}
			var_3_string = true;
			bool var_46_bool;
			func_2401(var_46_bool);
			if(var_46_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa2";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, int var_14_int, cvector var_15_cvector, cvector var_16_cvector)
	{
		if(var_16_cvector == 1) {
			func_2205(var_1_object);
		} else {
			int var_24_int;
			func_1093(var_15_cvector, var_24_int, var_24_int);
		}
	
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, cvector var_16_cvector)
	{
		bool var_17_bool = false;
		if(var_1_object == var_16_cvector) {
			if(!var_2_object) //@nz
				var_17_bool = true;
		}
		if(var_17_bool != 0) {
			var_2_object = true;
			object var_20_object;
			var_16_cvector = var_20_object;
			func_2010(var_20_object);
		}
	}

	// @pe
	void OnStopSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, cvector var_16_cvector)
	{
		bool var_17_bool = false;
		if(var_1_object == var_16_cvector) {
			if(var_2_object != 0)
				var_17_bool = true;
		}
		if(var_17_bool != 0) {
			var_2_object = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, cvector var_16_cvector)
	{
		@RequestClearPath(var_16_cvector);
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, cvector var_16_cvector)
	{
		func_949(var_16_cvector);
		object var_21_object;
		var_16_cvector = var_21_object;
		func_2387();
	}

}


task task_4
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, cvector var_16_cvector)
	{
		bool var_18_bool;
		@IsOverrideActive(var_18_bool);
		if(!var_18_bool) { //@nz
			object var_20_object;
			var_16_cvector = var_20_object;
			func_2248(var_20_object);
		}
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, int var_15_int, float var_16_float, float var_17_float, cvector var_18_cvector, cvector var_19_cvector)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, string var_15_string, cvector var_16_cvector, cvector var_17_cvector)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, cvector var_16_cvector)
	{
	}

}


maintask task_5
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, cvector var_14_cvector, cvector var_15_cvector)
	{
		var_16_bool = GlobalVars[0];
		GlobalVars[0] = false;
		func_1329(var_14_cvector, var_15_cvector);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, cvector var_14_cvector, cvector var_15_cvector, object var_16_object)
	{
		bool var_17_bool;
		func_1327(var_17_bool);
		if(var_17_bool != 0) {
			func_1413();
			object var_18_object;
			var_16_object = var_18_object;
			func_1288(var_18_object);
		}
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, cvector var_14_cvector, cvector var_15_cvector, string var_16_string)
	{
		if(var_16_string == "kill_player") {
			TaskCall(2);
			func_203();
			TaskReturn();
		}
	}

}


void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, cvector var_14_cvector, cvector var_15_cvector, object var_16_object)
{
	var_19_bool = GlobalVars[0];
	if(var_19_bool != 0) {
	}
	bool var_18_bool;
	@IsPlayerActor(var_16_object, var_18_bool);
	if(var_18_bool != 0) {
		var_21_bool = GlobalVars[0];
		GlobalVars[0] = true;
		bool var_22_bool;
		func_2184(var_22_bool, "quest_d2_02", "player_attack");
	}
}


void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, cvector var_14_cvector, cvector var_15_cvector)
{
	bool var_16_bool;
	func_2184(var_16_bool, "quest_d2_02", "patrol2_unload");
}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, cvector var_14_cvector, cvector var_15_cvector, object var_16_object, int var_17_int, float var_18_float, float var_19_float)
{
	object var_20_object;
	var_16_object = var_20_object;
	int var_21_int;
	var_17_int = var_21_int;
	float var_22_float;
	var_18_float = var_22_float;
	func_1661(var_20_object, var_21_int, var_22_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, cvector var_14_cvector, cvector var_15_cvector, object var_16_object, int var_17_int, float var_18_float, float var_19_float, cvector var_20_cvector, cvector var_21_cvector)
{
	object var_22_object;
	var_16_object = var_22_object;
	int var_23_int;
	var_17_int = var_23_int;
	float var_24_float;
	var_18_float = var_24_float;
	cvector var_25_cvector;
	var_20_cvector = var_25_cvector;
	cvector var_26_cvector;
	var_21_cvector = var_26_cvector;
	func_1729(var_24_float, var_25_cvector, var_26_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, cvector var_14_cvector, cvector var_15_cvector, object var_16_object, string var_17_string)
{
	float var_19_float;
	if(var_17_string == "health") {
		@GetProperty("health", var_19_float);
		if(var_19_float <= 0)
			@SignalDeath(var_16_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, cvector var_14_cvector, cvector var_15_cvector, object var_16_object)
{
	object var_17_object;
	var_16_object = var_17_object;
	func_2325(var_17_object);
}


void func_0(object var_0_object, int var_19_int, object var_20_object)
{
	var_0_object = var_20_object;
	bool var_30_bool; object var_31_object;
	var_20_object = var_31_object;
	func_1754(var_30_bool, var_31_object, 70.0);
	if(!var_30_bool) { //@nz
		var_19_int = -2;
		return 8;
	}
	object var_26_object;
	@CreateDialog(var_26_object);
	int var_78_int;
	func_2395(var_78_int);
	var_26_object->SetNPCName(var_78_int);
	int var_79_int;
	func_2393(var_79_int);
	var_26_object->SetNPCDescription(var_79_int);
	string var_80_string;
	func_2397(var_80_string);
	var_26_object->SetPhoto(var_80_string);
	string var_81_string;
	func_2399(var_81_string);
	var_26_object->SetPhoto2(var_81_string);
	int var_82_int;
	func_2225(var_82_int);
	var_26_object->SetPlayerName(var_82_int);
	bool var_27_bool;
	@IsOverrideActive(var_27_bool);
	if(var_27_bool != 0) {
		var_19_int = -2;
		return 8;
	}
	@DoDialog(var_26_object);
	bool var_91_bool; object var_92_object;
	object var_93_object;
	func_2084(var_93_object);
	var_93_object = var_92_object;
	func_1841(var_91_bool, var_92_object);
	object var_186_object; object var_187_object;
	var_20_object = var_186_object;
	var_26_object = var_187_object;
	TaskCall(1);
	func_81(var_188_object, var_189_object, var_190_string, var_191_bool, var_186_object, var_187_object);
	TaskReturn();
	bool var_29_bool;
	var_26_object->IsDialogEnd(var_29_bool);
	
	for(;;) {
		var_235_bool = !var_29_bool; //@nz
		if(var_235_bool == 0) goto Label_70;
		@sync();
		var_26_object->IsDialogEnd(var_29_bool);
	}
	
Label_70:
	object var_236_object;
	var_20_object = var_236_object;
	func_1823();
	@StopDialog(var_26_object);
	var_26_object->GetReturnValue(-1);
	int var_28_int = var_19_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1288(object var_18_object)
{
	object var_20_object;
	var_18_object = var_20_object;
	TaskCall(0);
	int var_19_int;
	func_0(var_21_object, var_19_int, var_20_object);
	TaskReturn();
}


void func_778(object var_0_object, bool var_4_bool, bool var_321_bool)
{
	object var_327_object; float var_329_float; cvector var_330_cvector; cvector var_331_cvector;
	@GetScene(var_327_object);
	bool var_328_bool = false;
	
	for(;;) {
		cvector var_332_cvector;
		func_1433(var_332_cvector, var_0_object);
		var_338_int = -var_332_cvector;
		@FindDirLength(var_329_float, var_338_int, var_4_bool);
		if(var_329_float < var_4_bool) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_330_cvector); //@t
				@GetPFPosition(var_331_cvector);
				@WaitForAnimEnd();
				func_866(var_331_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_328_bool = true;
				bool var_343_bool;
				func_734(var_331_cvector, var_343_bool);
				var_344_bool = !var_343_bool; //@nz
				if(var_344_bool == 0) goto Label_819;
		}
		for(;;) {
			var_328_bool = var_321_bool;

		}

	Label_819:
	}
}
EMIT "Stack[-5] = 0";


void func_527(object var_0_object, object var_1_object, bool var_350_bool, float var_351_float)
{
	string var_359_string;
	func_866(var_359_string);
	int var_356_int;
	@irand(var_356_int, var_1_object);
	@Face(var_0_object);
	@SetAttackState(true);
	func_2214();
	@PlayAnimation("all", ("attack_begin" + (var_356_int + 1)));
	@WaitForAnimEnd();
	int var_358_int;
	func_834(var_358_int, var_359_string);
	bool var_384_bool;
	func_1593(var_384_bool, var_0_object);
	if(!var_384_bool) { //@nz
		@StopAsync();
		var_350_bool = false;
		return 8;
	}
	float var_387_float; int var_388_int;
	var_351_float = var_387_float;
	var_356_int = var_388_int;
	func_488(var_359_string, var_387_float, var_388_int);
	bool var_357_bool;
	@HasAnimation(var_357_bool, "all", ("attack_middle" + var_356_int));
	if(var_357_bool != 0) {
		func_2214();
		@PlayAnimation("all", ("attack_middle" + var_356_int));
		@WaitForAnimEnd();
		func_866(var_359_string);
		bool var_476_bool;
		func_1593(var_476_bool, var_0_object);
		if(!var_476_bool) { //@nz
			@StopAsync();
			var_350_bool = false;
			return 8;
		}
		float var_479_float; int var_480_int;
		var_351_float = var_479_float;
		func_488(var_359_string, var_479_float, var_480_int);
		var_358_int = 1;

		for(;;) {
			var_359_string = (("attack_middle" + var_480_int) + "_") + var_358_int;
			@HasAnimation(var_357_bool, "all", var_359_string);
			if(!var_357_bool) { //@nz
			} else {
				func_2214();
				@PlayAnimation("all", var_359_string);
				@WaitForAnimEnd();
				func_866(var_359_string);
				bool var_502_bool;
				func_1593(var_502_bool, var_0_object);
				if(!var_502_bool) { //@nz
					@StopAsync();
					var_350_bool = false;
					return 8;
				}
				float var_505_float; int var_506_int;
				var_351_float = var_505_float;
				var_356_int = var_506_int;
				func_488(var_359_string, var_505_float, var_506_int);
				var_358_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_356_int));
		bool var_491_bool;
		func_880(var_491_bool);
		if(var_491_bool != 0) {
			bool var_492_bool;
			func_664(var_492_bool, 0.75);
			@StopAsync();
		}
		var_350_bool = true;
		return 8;

	}
}


void func_1552(bool var_105_bool, object var_106_object)
{
	bool var_108_bool;
	var_106_object->IsDead(var_108_bool);
	var_108_bool = var_105_bool;
}


void func_1557(bool var_94_bool, object var_95_object)
{
	if(var_95_object == null) {
		var_94_bool = false;
		return 4;
	}
	bool var_101_bool = false;
	var_104_bool = IsFuncExist(var_95_object, "IsDead", 1);
	if(var_104_bool != 0) {
		bool var_105_bool; object var_106_object;
		var_95_object = var_106_object;
		func_1552(var_105_bool, var_106_object);
		if(var_105_bool != 0)
			var_101_bool = true;
	}
	if(var_101_bool != 0) {
		var_94_bool = false;
		return 4;
	}
	object var_98_object;
	@GetScene(var_98_object);
	if(var_98_object == null) {
		var_94_bool = false;
		return 4;
	}
	object var_99_object;
	var_95_object->GetScene(var_99_object);
	if(var_98_object != var_99_object) {
		var_94_bool = false;
		return 4;
	}
	var_94_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2325(object var_17_object)
{
	bool var_19_bool;
	@AddItem(var_19_bool, "revolver_ammo", 0, 2);
	@AddItem(var_19_bool, "alpha_pills", 0, 2);
	bool var_26_bool; object var_27_object;
	var_17_object = var_27_object;
	func_1440(var_26_bool, var_27_object);
	if(var_26_bool != 0) {
		bool var_30_bool; object var_31_object;
		var_17_object = var_31_object;
		func_2122(var_30_bool, var_31_object, -0.15);
	}
	func_2278();
	object var_88_object;
	var_17_object = var_88_object;
	TaskCall(4);
	func_1142(var_88_object);
	TaskReturn();
}


void func_1303(void)
{
}


void func_1823(void)
{
	bool var_238_bool;
	@CameraSwitchToNormal(true);
	bool var_240_bool;
	func_2401(var_240_bool);
	if(var_240_bool != 0) {
	} else {
		@HasAnimationTrack(var_238_bool, "head");
		if(var_238_bool == 0) goto Label_1840;
		@UnlookAsync("head");
	}
Label_1840:
	
}


void func_2084(object var_84_object)
{
	object var_86_object;
	@self(var_86_object);
	var_86_object = var_84_object;
}
EMIT "Stack[-1] = 0";


void func_2090(cvector var_48_cvector, cvector var_49_cvector)
{
	float var_57_float = sqrt(var_49_cvector | var_49_cvector);
	if(var_57_float < 0.000001)
		var_48_cvector = [0.0, 0.0, 0.0];
	var_48_cvector = var_49_cvector / var_57_float;
}


void func_1327(bool var_17_bool)
{
	var_17_bool = true;
}


void func_1841(bool var_91_bool, object var_92_object)
{
	int var_98_int; int var_99_int;
	@GetVariable("voice_common", var_98_int);
	if(var_98_int != 0) {
		bool var_102_bool; object var_103_object;
		var_92_object = var_103_object;
		func_1899(var_102_bool, var_103_object);
		if(!var_102_bool) { //@nz
			bool var_133_bool; object var_134_object;
			var_92_object = var_134_object;
			func_1936(var_133_bool, var_134_object);
			if(!var_133_bool) { //@nz
				var_91_bool = false;
				return 4;
			}
		}
		@irand(var_99_int, 2);
		if(var_99_int != 0)
			@SetVariable("voice_common", ((var_98_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_178_bool; object var_179_object;
		var_92_object = var_179_object;
		func_1936(var_178_bool, var_179_object);
		if(!var_178_bool) { //@nz
			bool var_181_bool; object var_182_object;
			var_92_object = var_182_object;
			func_1899(var_181_bool, var_182_object);
			if(!var_181_bool) { //@nz
				var_91_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1897;
	
Label_1897:
	var_91_bool = true;
	
}


void func_1329(object var_0_object, object var_1_object)
{
	int var_21_int; bool var_22_bool; cvector var_23_cvector; object var_24_object;
	@GetPFPosition(var_1_object);
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1418();
		@irand(var_21_int, 10);
		@Sleep((var_21_int + 5), var_22_bool);
		if(var_22_bool != 0) {
			func_1303();
		} else {
		for(;;) {
			func_1418();
			@GetPFPosition(var_23_cvector);
			float var_29_float; cvector var_31_cvector;
			var_23_cvector = var_31_cvector;
			func_2100(var_29_float, var_1_object, var_31_cvector);
			if(var_29_float > 40000) {
				@FindPathTo(var_24_object, var_1_object);
				if(var_24_object != null) {
					@RotatePath(var_24_object, var_22_bool);
					if(!var_22_bool) { //@nz
					} else {
					@FollowPath(var_24_object, false, var_22_bool);
					if(!var_22_bool) { //@nz
						goto Label_1410;
					}
					var_40_float = GetByIndex(var_0_object, 0);
					var_41_float = GetByIndex(var_0_object, 2);
					@Rotate(var_40_float, var_41_float, var_22_bool);
					if(!var_22_bool) { //@nz
						goto Label_1410;
					}
					@WaitForAnimEnd(var_22_bool);
					if(!var_22_bool) { //@nz
						goto Label_1410;
					}
					goto Label_1411;
				EMIT "GOTO 0x573";
				}
				@Sleep(1);
				var_24_object = null;
				goto Label_1410;
			}
			var_45_float = GetByIndex(var_0_object, 0);
			var_46_float = GetByIndex(var_0_object, 2);
			@Rotate(var_45_float, var_46_float, var_22_bool);
			if(!var_22_bool) { //@nz
				goto Label_1410;
			}
			@WaitForAnimEnd(var_22_bool);
			if(!var_22_bool) { //@nz
				goto Label_1410;
			}
			goto Label_1411;
			}
		Label_1410:
		}
		}
	Label_1411:
	}
	
}
EMIT "Return(); Pop(8)";


void func_2100(float var_29_float, cvector var_30_cvector, cvector var_31_cvector)
{
	var_29_float = (var_31_cvector - var_30_cvector) | (var_31_cvector - var_30_cvector);
}


void func_823(object var_0_object, bool var_252_bool)
{
	bool var_254_bool;
	var_257_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_257_bool != 0) {
		var_0_object->IsAttacking(var_254_bool); //@t
		var_254_bool = var_252_bool;
	}
	var_252_bool = false;
}


// @pe
void func_2104(float var_439_float, float var_440_float, float var_441_float)
{
	if(var_440_float < var_441_float)
		var_440_float = var_439_float;
	else
		var_441_float = var_439_float;
	
}


void func_1593(bool var_90_bool, object var_91_object)
{
	object var_95_object;
	var_91_object = var_95_object;
	bool var_94_bool;
	func_1557(var_94_bool, var_95_object);
	if(!var_94_bool) { //@nz
		var_90_bool = false;
		return 2;
	}
	bool var_112_bool; object var_113_object;
	func_1445(var_112_bool, var_113_object, "noaccess");
	if(!var_112_bool) { //@nz
		var_90_bool = true;
		return 2;
	}
	int var_93_int;
	var_113_object->GetProperty("noaccess", var_93_int);
	var_90_bool = var_93_int == 0;
}


// @pe
void func_2111(float var_59_float, float var_60_float, float var_61_float, float var_62_float)
{
	if(var_60_float < var_61_float) {
		var_61_float = var_59_float;
		return 0;
	}
	if(var_60_float > var_62_float) {
		var_62_float = var_59_float;
		return 0;
	}
	var_60_float = var_59_float;
}


void func_834(object var_2_object, object var_5_object)
{
	int var_372_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_object != 0) {
		if((var_5_object + -1) > 0)
			return 4;
	}
	float var_371_float;
	@rand(var_371_float);
	float var_378_float;
	func_884(var_378_float);
	if(var_371_float < var_378_float) {
		@irand(var_372_int, var_2_object);
		@Speak("attack" + (var_372_int + 1));
		int var_383_int;
		func_882(var_383_int);
		var_5_object = var_383_int;
	}
}


// @pe
void func_1093(object var_0_object, object var_1_object, int var_24_int)
{
	if(var_24_int != 0)
		return 0;
	bool var_27_bool;
	func_1131(var_27_bool, var_1_object);
	if(!var_27_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_2122(bool var_30_bool, object var_31_object, float var_32_float)
{
	if(!var_31_object) { //@nz
		var_30_bool = false;
		return 0;
	}
	if(var_32_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_32_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_37_float;
		var_32_float = var_37_float;
		func_2174(var_37_float);
		bool var_41_bool; object var_42_object; float var_44_float;
		var_31_object = var_42_object;
		var_32_float = var_44_float;
		func_1457(var_41_bool, var_42_object, "reputation", var_44_float, (float)0, (float)1);
		var_30_bool = true;
		return 0;

	}
	
	var_30_bool = false;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_186_object, object var_187_object)
{
	var_0_object = var_187_object;
	var_1_object = var_186_object;
	var_3_string = false;
	if(1 != 0) {
		func_139(var_187_object, "Neutral");
		var_0_object->SetMessage(507526); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(507527, -1, 8309); //@t
		var_0_object->AddReply(533979, -1, 35550); //@t
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	bool var_217_bool;
	func_2401(var_217_bool);
	if(var_217_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1979(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_138;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_138:
		return 0;

	}
	
}


void func_1617(object var_33_object)
{
	string var_47_string;
	if(var_33_object == null)
		return 14;
	bool var_41_bool;
	@IsDead(var_41_bool);
	if(var_41_bool != 0)
		return 14;
	int var_42_int;
	@GetSecondaryAnimationType(var_42_int);
	if(var_42_int < 0)
		return 14;
	cvector var_43_cvector;
	var_33_object->GetPosition(var_43_cvector);
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	cvector var_45_cvector;
	@GetDirection(var_45_cvector);
	cvector var_46_cvector = var_44_cvector - var_43_cvector;
	var_52_float = GetByIndex(var_46_cvector, 0);
	var_53_float = GetByIndex(var_45_cvector, 0);
	var_55_float = GetByIndex(var_46_cvector, 2);
	var_56_float = GetByIndex(var_45_cvector, 2);
	if(((var_52_float * var_53_float) + (var_55_float * var_56_float)) >= 0)
		var_47_string = "fhit";
	else
		var_47_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_47_string + "1"), (var_47_string + "2"), -10);
	
}


void func_2393(int var_79_int)
{
	var_79_int = 515572;
}


void func_1115(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_2395(int var_78_int)
{
	var_78_int = 504031;
}


void func_2397(string var_80_string)
{
	var_80_string = "ui/NPC_Citizen2.png";
}


void func_2399(string var_81_string)
{
	var_81_string = "ui/NPC_Citizen2_b.png";
}


void func_2401(bool var_73_bool)
{
	var_73_bool = false;
}


void func_866(object var_0_object)
{
	func_2205(var_0_object);
}


void func_871(int var_466_int)
{
	var_466_int = 0;
}


void func_873(void)
{
	func_2043("attack_stay");
}


// @pe
void func_1131(bool var_183_bool, object var_184_object)
{
	object var_186_object;
	var_184_object = var_186_object;
	bool var_185_bool;
	func_1593(var_185_bool, var_186_object);
	var_185_bool = var_183_bool;
}


void func_1899(bool var_102_bool, object var_103_object)
{
	string var_109_string; bool var_111_bool; int var_112_int; string var_113_string;
	var_109_string = "c";
	int var_110_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_103_object->HasProperty((var_109_string + (var_110_int + 1)), var_111_bool);
			if(!var_111_bool) { //@nz
			} else {
				var_110_int += 1;
			}
		}
		if(!var_110_int) { //@nz
			var_102_bool = false;
			return 10;
		}
		var_112_int = 0;
		if(var_110_int > 1)
			@irand(var_112_int, var_110_int);
		var_103_object->GetProperty((var_109_string + (var_112_int + 1)), var_113_string);
		bool var_125_bool; string var_126_string;
		var_113_string = var_126_string;
		func_2021(var_125_bool, var_126_string);
		var_125_bool = var_102_bool;
		return 10;

	}
}


void func_2157(float var_457_float)
{
	object var_459_object;
	@CreateFloatVector(var_459_object);
	var_459_object->add(var_457_float);
	if(var_457_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_459_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_878(void)
{
}


void func_880(bool var_491_bool)
{
	var_491_bool = true;
}


void func_1138(string var_201_string)
{
	var_201_string = "walk";
}


void func_882(int var_383_int)
{
	var_383_int = 1;
}


void func_1140(string var_202_string)
{
	var_202_string = "run";
}


void func_884(float var_378_float)
{
	var_378_float = 0.5;
}


// @pe
void func_1142(object var_88_object)
{
	object var_89_object;
	var_88_object = var_89_object;
	func_1165(var_89_object);
	@SetRTEnvelope(50, 40);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_886(object var_2_object, bool var_132_bool, object var_133_object, float var_134_float, float var_135_float, bool var_136_bool, bool var_137_bool)
{
	object var_145_object;
	func_2205(var_145_object);
	@SetTimer(1, 5);
	bool var_143_bool;
	@CanSee(var_143_bool, var_145_object);
	if(var_143_bool != 0) {
		var_2_object = true;
		object var_149_object;
		var_133_object = var_149_object;
		func_2010(var_149_object);
	} else {
		var_2_object = false;
	}
	bool var_156_bool; object var_157_object;
	func_1440(var_156_bool, var_157_object);
	if(var_156_bool != 0) {
		object var_160_object;
		func_2084(var_160_object);
		@SendPlayerEnemy(var_157_object, var_160_object);
	}
	bool var_161_bool; object var_162_object; float var_163_float; float var_164_float; bool var_165_bool; bool var_166_bool;
	var_133_object = var_162_object;
	var_134_float = var_163_float;
	var_135_float = var_164_float;
	var_136_bool = var_165_bool;
	var_137_bool = var_166_bool;
	bool var_144_bool;
	func_991(var_143_bool, var_144_bool, var_161_bool, var_162_object, var_163_float, var_164_float, var_165_bool, var_166_bool);
	var_161_bool = var_144_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_144_bool = var_132_bool;
	
}


void func_1661(object var_20_object, int var_21_int, float var_22_float)
{
	cvector var_32_cvector; object var_33_object; int var_34_int; bool var_35_bool; cvector var_36_cvector; cvector var_37_cvector;
	bool var_41_bool = false;
	bool var_42_bool = false;
	if(var_20_object != 0) {
		if(var_21_int != 4)
			var_42_bool = true;
	}
	if(var_42_bool != 0) {
		if(var_21_int != 5)
			var_41_bool = true;
	}
	if(var_41_bool != 0) {
		cvector var_48_cvector; cvector var_49_cvector;
		cvector var_50_cvector; object var_51_object;
		var_20_object = var_51_object;
		func_1433(var_50_cvector, var_51_object);
		var_50_cvector = var_49_cvector;
		func_2090(var_48_cvector, var_49_cvector);
		var_48_cvector = var_32_cvector;
		@CreateVectorVector(var_33_object);
		var_34_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_34_int), var_35_bool, var_36_cvector, var_37_cvector);
			if(!var_35_bool) { //@nz
				break;
			Label_1723:
				var_33_object = null;
	}
			object var_110_object;
			var_20_object = var_110_object;
			func_1617(var_110_object);
		}
		if((var_37_cvector | var_32_cvector) >= 0.70710677)
			var_33_object->add(var_36_cvector);
		var_34_int += 1;
	}
	int var_38_int;
	var_33_object->size(var_38_int);
	if(var_38_int == 0) goto Label_1723;
	int var_39_int;
	@irand(var_39_int, var_38_int);
	cvector var_40_cvector;
	var_33_object->get(var_40_cvector, var_39_int);
	object var_65_object; int var_66_int; float var_67_float; cvector var_68_cvector; cvector var_69_cvector;
	var_20_object = var_65_object;
	var_21_int = var_66_int;
	var_22_float = var_67_float;
	var_40_cvector = var_68_cvector;
	var_69_cvector = -var_32_cvector;
	func_1729(var_67_float, var_68_cvector, var_69_cvector);
}


void func_2174(float var_37_float)
{
	object var_39_object;
	@CreateFloatVector(var_39_object);
	var_39_object->add(var_37_float);
	@SendWorldWndMessage(16, var_39_object);
}
EMIT "Stack[-1] = 0";


void func_1413(void)
{
	@StopGroup0();
	@Stop();
}


void func_2184(bool var_16_bool, string var_17_string, string var_18_string)
{
	object var_20_object;
	@FindActor(var_20_object, var_17_string);
	if(var_20_object == null)
		var_16_bool = false;
	@Trigger(var_20_object, var_18_string);
	var_16_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1418(void)
{
}


// @pe
void func_139(object var_2_object, string var_193_string)
{
	bool var_194_bool;
	func_2401(var_194_bool);
	if(!var_194_bool) //@nz
		return 0;
	if(var_193_string == var_2_object)
		return 0;
	string var_197_string; bool var_198_bool;
	var_193_string = var_197_string;
	if(var_193_string == "")
		var_198_bool = false;
	else
		var_198_bool = true;
	func_1995(var_197_string, var_198_bool);
	var_2_object = var_193_string;
	
}


// @pe
void func_1419(string var_429_string, int var_430_int)
{
	if(var_430_int == 2) {
		var_429_string = "fire";
		return 0;
	EMIT "GOTO 0x597";
	}
	if(var_430_int == 1) {
		var_429_string = "bullet";
		return 0;
	}
	var_429_string = "phys";
}


void func_1165(object var_89_object)
{
	cvector var_100_cvector; cvector var_101_cvector; cvector var_102_cvector; cvector var_103_cvector; string var_104_string; object var_105_object; bool var_106_bool; bool var_107_bool; float var_108_float; cvector var_109_cvector;
	if(var_89_object == null) {
		func_1256("fdie");
	} else {
		var_89_object->GetPosition(var_100_cvector);
		@GetPosition(var_101_cvector);
		@GetDirection(var_102_cvector);
		var_103_cvector = var_101_cvector - var_100_cvector;
		var_143_float = GetByIndex(var_103_cvector, 0);
		var_144_float = GetByIndex(var_102_cvector, 0);
		var_146_float = GetByIndex(var_103_cvector, 2);
		var_147_float = GetByIndex(var_102_cvector, 2);
		if(((var_143_float * var_144_float) + (var_146_float * var_147_float)) >= 0)
			var_104_string = "fdie";
		else
			var_104_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_89_object = var_105_object;
		var_154_bool = IsFuncExist(var_89_object, "GetScriptProperty", 2);
		if(var_154_bool != 0) {
			var_89_object->HasScriptProperty(var_106_bool, "Owner");
			if(var_106_bool != 0) {
				var_89_object->GetScriptProperty(var_105_object, "Owner");
				if(var_105_object == null)
					var_89_object = var_105_object;
			}
		}
		var_161_bool = IsFuncExist(var_105_object, "@GetEyesHeight", 1);
		if(var_161_bool != 0) {
			var_105_object->GetEyesHeight(var_108_float);
			var_109_cvector = [0.0, 0.0, 0.0];
			var_162_float = GetByIndex(var_109_cvector, 1);
			var_108_float = var_162_float;
			SetByIndex(var_109_cvector, 1) = var_162_float;
			@LookAsync(var_89_object, "head", var_109_cvector);
			var_107_bool = true;
		} else {
			var_107_bool = false;

		}
		string var_164_string;
		var_104_string = var_164_string;
		func_2043(var_164_string);
		@PlayAnimation("all", var_104_string);
		@WaitForAnimEnd();
		if(var_107_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_104_string);
		@RemoveEnvelope();
		var_105_object = null;
	}
	
}


void func_1936(bool var_133_bool, object var_134_object)
{
	bool var_142_bool; int var_143_int; string var_144_string;
	int var_146_int;
	func_2196(var_146_int);
	string var_140_string = ("d" + var_146_int) + "m";
	int var_141_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_134_object->HasProperty((var_140_string + (var_141_int + 1)), var_142_bool);
			if(!var_142_bool) { //@nz
			} else {
				var_141_int += 1;
			}
		}
		if(!var_141_int) { //@nz
			var_133_bool = false;
			return 10;
		}
		var_143_int = 0;
		if(var_141_int > 1)
			@irand(var_143_int, var_141_int);
		var_134_object->GetProperty((var_140_string + (var_143_int + 1)), var_144_string);
		bool var_165_bool; string var_166_string;
		var_144_string = var_166_string;
		func_2021(var_165_bool, var_166_string);
		var_165_bool = var_133_bool;
		return 10;

	}
}


void func_2196(int var_146_int)
{
	float var_148_float;
	@GetGameTime(var_148_float);
	var_146_int = 1 + (var_148_float / 24);
}


void func_664(bool var_492_bool, float var_493_float)
{
	float var_496_float; bool var_497_bool;
	@rand(var_496_float);
	if(var_496_float < var_493_float) {

		for(;;) {
			@IsAnimationPlaying(var_497_bool);
			if(!var_497_bool) { //@nz
			} else {
				bool var_500_bool;
				func_762(var_500_bool);
				if(var_500_bool != 0) {
					var_492_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_492_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_866(var_497_bool);
}


void func_1433(cvector var_50_cvector, object var_51_object)
{
	cvector var_54_cvector;
	@GetPosition(var_54_cvector);
	cvector var_55_cvector;
	var_51_object->GetPosition(var_55_cvector);
	var_50_cvector = var_55_cvector - var_54_cvector;
}


void func_2205(object var_125_object)
{
	bool var_127_bool;
	@IsPlayerActor(var_125_object, var_127_bool);
	if(var_127_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1440(bool var_26_bool, object var_27_object)
{
	bool var_29_bool;
	@IsPlayerActor(var_27_object, var_29_bool);
	var_29_bool = var_26_bool;
}


void func_1445(bool var_49_bool, object var_50_object, string var_51_string)
{
	var_56_bool = IsFuncExist(var_50_object, "HasProperty", 2);
	if(!var_56_bool) { //@nz
		var_49_bool = false;
		return 2;
	}
	bool var_53_bool;
	var_50_object->HasProperty(var_51_string, var_53_bool);
	var_53_bool = var_49_bool;
}


void func_2214(void)
{
	object var_363_object;
	@GetScene(var_363_object);
	object var_365_object;
	func_2084(var_365_object);
	@BroadcastMessage("battle", var_365_object, var_363_object);
}
EMIT "Stack[-1] = 0";


void func_2225(int var_82_int)
{
	int var_84_int;
	@GetVariable("branch", var_84_int);
	if(var_84_int == 0) {
		var_82_int = 1;
		return 2;
	EMIT "GOTO 0x8c0";
	}
	if(var_84_int == 1) {
		var_82_int = 2;
		return 2;
	}
	var_82_int = 3;
}


void func_1457(bool var_41_bool, object var_42_object, string var_43_string, float var_44_float, float var_45_float, float var_46_float)
{
	object var_50_object;
	var_42_object = var_50_object;
	string var_51_string;
	var_43_string = var_51_string;
	bool var_49_bool;
	func_1445(var_49_bool, var_50_object, var_51_string);
	if(!var_49_bool) //@nz
		var_41_bool = false;
	float var_48_float;
	var_42_object->GetProperty(var_43_string, var_48_float);
	float var_59_float; float var_61_float; float var_62_float;
	var_45_float = var_61_float;
	var_46_float = var_62_float;
	func_2111(var_59_float, (var_48_float + var_44_float), var_61_float, var_62_float);
	var_42_object->SetProperty(var_43_string, var_59_float);
	var_41_bool = true;
}


void func_691(object var_0_object, bool var_289_bool, float var_290_float)
{
	bool var_296_bool; cvector var_297_cvector; cvector var_298_cvector; cvector var_299_cvector; float var_300_float;
	
	for(;;) {
		@IsAnimationPlaying(var_296_bool);
		if(!var_296_bool) //@nz
			break;
		bool var_302_bool;
		func_762(var_302_bool);
		if(var_302_bool != 0) {
			var_289_bool = true;
			return 10;
		}
		bool var_345_bool;
		func_1593(var_345_bool, var_0_object);
		if(!var_345_bool) { //@nz
			var_289_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_297_cvector); //@t
		@GetPFPosition(var_298_cvector);
		var_299_cvector = var_297_cvector - var_298_cvector;
		var_300_float = var_299_cvector | var_299_cvector;
		if(var_300_float < (var_290_float * var_290_float)) {
			bool var_350_bool; float var_351_float;
			var_290_float = var_351_float;
			func_527(var_299_cvector, var_300_float, var_350_bool, var_351_float);
			var_289_bool = true;
			return 10;
		}
		@sync();
	}
	func_866(var_300_float);
	var_289_bool = false;
}


void func_949(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_1115(var_16_cvector);
}


void func_1979(string var_219_string)
{
	bool var_223_bool; float var_224_float; float var_225_float;
	@lshHasAnimation(var_223_bool, var_219_string);
	if(var_223_bool != 0) {
		@lshGetAnimTimes(var_219_string, var_224_float, var_225_float);
		@lshPlayAnimation(var_224_float, var_225_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_219_string);
	}
	
}


void func_1729(object var_22_object, cvector var_25_cvector, cvector var_26_cvector)
{
	object var_29_object;
	@GetScene(var_29_object);
	object var_30_object;
	@AddActorByType(var_30_object, "scripted", var_29_object, var_25_cvector, var_26_cvector, "blood_dir.xml");
	object var_33_object;
	var_22_object = var_33_object;
	func_1617(var_33_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2242(int var_68_int)
{
	int var_70_int;
	@GetVariable("branch", var_70_int);
	var_70_int = var_68_int;
}


void func_453(object var_1_object, object var_2_object, bool var_4_bool)
{
	bool var_57_bool; bool var_58_bool; cvector var_59_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_57_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_57_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_58_bool, ("attack" + (var_2_object + 1)));
			if(!var_58_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_59_cvector, "all", "bjump");
		var_73_float = GetByIndex(var_59_cvector, 2);
		var_4_bool = -var_73_float;

	}
}


void func_1479(float var_401_float, object var_402_object, float var_403_float, int var_404_int)
{
	int var_414_int; int var_416_int;
	object var_421_object;
	var_402_object = var_421_object;
	bool var_420_bool;
	func_1445(var_420_bool, var_421_object, "health");
	if(!var_420_bool) //@nz
		var_401_float = 0.0;
	bool var_424_bool; object var_425_object;
	func_1445(var_424_bool, var_425_object, "armor");
	if(!var_424_bool) //@nz
		var_414_int = 0;
	else
		var_425_object->GetProperty("armor", var_414_int);
	string var_429_string; int var_430_int;
	var_404_int = var_430_int;
	func_1419(var_429_string, var_430_int);
	string var_415_string = "armor_" + var_429_string;
	bool var_435_bool; object var_436_object; string var_437_string;
	var_402_object = var_436_object;
	func_1445(var_435_bool, var_436_object, var_437_string);
	if(!var_435_bool) //@nz
		var_416_int = 0;
	else
		var_402_object->GetProperty(var_437_string, var_416_int);

	float var_439_float;
	func_2104(var_439_float, ((var_414_int + var_416_int) / 100.0), (float)1);
	float var_417_float;
	var_439_float = var_417_float;
	float var_418_float;
	var_402_object->GetProperty("health", var_418_float);
	float var_419_float = var_403_float * (1 - var_417_float);
	float var_449_float;
	func_2111(var_449_float, (var_418_float - var_419_float), (float)0, (float)1);
	var_402_object->SetProperty("health", var_449_float);
	bool var_455_bool; object var_456_object;
	var_402_object = var_456_object;
	func_1440(var_455_bool, var_456_object);
	if(var_455_bool != 0) {
		float var_457_float = -var_419_float;
		func_2157(var_457_float);
	}
	var_419_float = var_401_float;
	
}


// @pe
void func_2248(object var_20_object)
{
	int var_21_int;
	func_2242(var_21_int);
	if(var_21_int == 1)
		@WorkWithCorpse(var_20_object);
	else
		@Barter(var_20_object);
	
}


void func_203(void)
{
	object var_26_object;
	@FindActor(var_26_object, "player");
	if(!var_26_object) { //@nz
	}
	object var_29_object;
	object var_25_object;
	func_224(var_22_bool, var_23_float, var_24_int, var_25_object, var_29_object, var_29_object, true, 180.0);
}
EMIT "Stack[-1] = 0";


void func_1995(string var_197_string, bool var_198_bool)
{
	bool var_204_bool; float var_205_float; float var_206_float;
	@lshHasAnimation(var_204_bool, var_197_string);
	if(var_204_bool != 0) {
		@lshGetAnimTimes(var_197_string, var_205_float, var_206_float);
		@lshPlayAnimation(var_205_float, var_206_float, var_198_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_197_string);
	}
	
}


void func_1743(object var_235_object)
{
	cvector var_239_cvector;
	var_235_object->GetPosition(var_239_cvector);
	cvector var_240_cvector;
	@GetPosition(var_240_cvector);
	cvector var_241_cvector = var_239_cvector - var_240_cvector;
	var_242_float = GetByIndex(var_241_cvector, 0);
	var_243_float = GetByIndex(var_241_cvector, 2);
	@RotateAsync(var_242_float, var_243_float);
}


void func_2261(string var_74_string)
{
	object var_78_object;
	@CreateInvItem(var_78_object);
	var_78_object->SetItemName(var_74_string);
	var_78_object->SetProperty("Organ", 1);
	int var_79_int;
	var_78_object->GetItemID(var_79_int);
	bool var_80_bool;
	@AddItem(var_80_bool, var_78_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_1754(bool var_30_bool, object var_31_object, float var_32_float)
{
	cvector var_43_cvector; bool var_50_bool;
	var_31_object->GetPosition(var_43_cvector);
	float var_42_float;
	var_31_object->GetEyesHeight(var_42_float);
	var_51_float = GetByIndex(var_43_cvector, 1);
	SetByIndex(var_43_cvector, 1) = (var_51_float + var_42_float);
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	@GetEyesHeight(var_42_float);
	var_52_float = GetByIndex(var_44_cvector, 1);
	SetByIndex(var_44_cvector, 1) = (var_52_float + var_42_float);
	cvector var_45_cvector = var_43_cvector - var_44_cvector;
	var_53_float = GetByIndex(var_45_cvector, 1);
	SetByIndex(var_45_cvector, 1) = (float)0;
	var_55_float = sqrt(var_45_cvector | var_45_cvector);
	var_45_cvector /= var_55_float;
	cvector var_46_cvector = -var_45_cvector;
	cvector var_57_cvector;
	func_2090(var_57_cvector, (var_46_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_47_cvector = ((var_45_cvector * var_32_float) + (var_57_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_49_bool;
	@IsOverrideActive(var_49_bool);
	if(var_49_bool != 0)
		var_30_bool = false;
	@StopWorld();
	@CameraTransit((var_44_cvector + var_47_cvector), var_46_cvector, true);
	var_71_float = GetByIndex(var_47_cvector, 0);
	var_72_float = GetByIndex(var_47_cvector, 2);
	@Rotate(var_71_float, var_72_float);
	bool var_73_bool;
	func_2401(var_73_bool);
	if(var_73_bool != 0) {
	} else {
		@HasAnimationTrack(var_50_bool, "head");
		if(var_50_bool == 0) goto Label_1817;
		@LookAsyncCamera("head");
	}
Label_1817:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_30_bool = true;
	
}


// @pe
void func_218(float var_398_float)
{
	var_398_float = 0.3;
}


void func_2010(object var_149_object)
{
	float var_152_float;
	var_149_object->GetEyesHeight(var_152_float);
	cvector var_153_cvector = [0.0, 0.0, 0.0];
	var_154_float = GetByIndex(var_153_cvector, 1);
	var_152_float = var_154_float;
	SetByIndex(var_153_cvector, 1) = var_154_float;
	@LookAsync(var_149_object, "head", var_153_cvector);
}


// @pe
void func_221(int var_405_int)
{
	var_405_int = 0;
}


void func_734(object var_0_object, bool var_304_bool)
{
	cvector var_310_cvector; cvector var_311_cvector;
	bool var_315_bool;
	func_1593(var_315_bool, var_0_object);
	if(!var_315_bool) { //@nz
		var_304_bool = false;
		return 10;
	}
	bool var_318_bool;
	float var_314_float;
	func_823(var_314_float, var_318_bool);
	if(var_318_bool != 0) {
		var_0_object->GetPFPosition(var_310_cvector); //@t
		@GetPFPosition(var_311_cvector);
		var_0_object->GetAttackDistance(var_314_float); //@t
		var_304_bool = ((var_310_cvector - var_311_cvector) | (var_310_cvector - var_311_cvector)) <= ((var_314_float + 50) * (var_314_float + 50));
		return 10;
	}
	var_304_bool = false;
}


void func_991(object var_0_object, object var_1_object, bool var_161_bool, object var_162_object, float var_163_float, float var_164_float, bool var_165_bool, bool var_166_bool)
{
	bool var_175_bool; object var_177_object; cvector var_178_cvector; cvector var_179_cvector; float var_181_float; object var_182_object;
	var_0_object = false;
	var_1_object = var_162_object;
	bool var_176_bool;
	var_166_bool = var_176_bool;
	
	for(;;) {
		bool var_183_bool; object var_184_object;
		var_162_object = var_184_object;
		func_1131(var_183_bool, var_184_object);
		if(!var_183_bool) { //@nz
			var_161_bool = false;
			return 16;
		}
		var_162_object->GetPosition(var_178_cvector);
		@GetPosition(var_179_cvector);
		var_181_float = (var_178_cvector - var_179_cvector) | (var_178_cvector - var_179_cvector);
		bool var_188_bool = false;
		if(var_164_float > 0) {
			if(var_181_float > (var_164_float * var_164_float))
				var_188_bool = true;
		}
		if(var_188_bool != 0) {
			@Stop();
			var_161_bool = false;
			return 16;
		}
		if(var_181_float > (var_163_float * var_163_float)) {
			var_162_object->GetPFPosition(var_178_cvector);
			@FindPathTo(var_182_object, var_178_cvector);
			if(var_182_object != null) {
				var_182_object = var_177_object;
				var_182_object = null;
			}
			if(var_177_object != null) {
				if(var_176_bool == 0) goto Label_1044;
				var_176_bool = false;
				@RotatePath(var_177_object, var_175_bool);
				if(!var_175_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_201_string;
						func_1138(var_201_string);
						string var_202_string;
						func_1140(var_202_string);
						@FollowPath(var_177_object, var_165_bool, var_175_bool, var_201_string, var_202_string);
						if(!var_175_bool) { //@nz
							if(var_0_object == 0) goto Label_1063;
							var_177_object = null;
						}
					EMIT "GOTO 0x428";

					Label_1063:
						} else {
					var_177_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_175_bool);
					if(!var_175_bool) { //@nz
						if(var_0_object != 0) {
							var_177_object = null;
							goto Label_1091;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1091;
		}
			var_182_object = null;
			goto Label_1089;

		Label_1089:
			var_177_object = null;

		}
	Label_1091:
		for(;;) {
			var_161_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_224(object var_0_object, string var_3_string, object var_5_object, object var_29_object, bool var_30_bool, float var_31_float, bool var_138_bool, bool var_230_bool)
{
	float var_43_float; cvector var_44_cvector; cvector var_45_cvector; bool var_47_bool; float var_50_float; cvector var_51_cvector; bool var_52_bool; float var_53_float;
	func_453(var_51_cvector, var_52_bool, var_53_float);
	var_5_object = 0;
	var_78_bool = IsFuncExist(var_29_object, "@GetAttackDistance", 1);
	if(var_78_bool != 0) {
		var_29_object->GetAttackDistance(var_43_float);
		var_43_float += 50;
	} else {
						var_31_float = var_43_float;
	}
	if(var_43_float >= 150)
		var_43_float = 150;
	var_3_string = false;
	var_0_object = var_29_object;
	bool var_46_bool;
	@IsPlayerActor(var_0_object, var_46_bool);
	if(var_46_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_84_object;
		func_2084(var_84_object);
		@SendPlayerEnemy(var_29_object, var_84_object);
	}
	if(var_30_bool != 0)
		var_47_bool = false;
	else
		var_47_bool = true;

	
Label_264:
	for(;;) {
		bool var_89_bool = false;
		bool var_90_bool;
		func_1593(var_90_bool, var_0_object);
		if(var_90_bool != 0) {
			if(!var_3_string) //@nz
				var_89_bool = true;
		}
		if(var_89_bool != 0) {
			func_866(var_53_float);
			var_0_object->GetPFPosition(var_44_cvector); //@t
			@GetPFPosition(var_45_cvector);
			var_50_float = (var_44_cvector - var_45_cvector) | (var_44_cvector - var_45_cvector);
			if(var_50_float >= ((400.0 + var_43_float) * (400.0 + var_43_float))) {
				bool var_132_bool; float var_134_float;
				var_43_float = var_134_float;
				TaskCall(3);
				func_886(var_140_bool, var_132_bool, var_0_object, var_134_float, 10000.0, true, false);
				TaskReturn();
				if(!var_138_bool) { //@nz
				} else {
					var_47_bool = false;
			} else {
			if(var_50_float >= (var_31_float * var_31_float)) {
				var_0_object->GetPFPosition(var_51_cvector); //@t
				@CanReachByPF(var_52_bool, var_51_cvector);
				if(!var_52_bool) { //@nz
					bool var_224_bool; float var_226_float;
					var_43_float = var_226_float;
					TaskCall(3);
					func_886(var_232_bool, var_224_bool, var_0_object, var_226_float, 10000.0, true, false);
					TaskReturn();
					if(!var_230_bool) { //@nz
						goto Label_436;
					}
					var_47_bool = false;
					goto Label_264;
				}
				if(!var_47_bool) { //@nz
					func_1743(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_866(var_53_float);
					@StopAsync();
					var_47_bool = true;
					bool var_246_bool;
					func_1593(var_246_bool, var_0_object);
					if(!var_246_bool) { //@nz
						goto Label_436;
					}
				}
				@rand(var_53_float);
				bool var_249_bool;
				var_251_bool = var_53_float < 0.25;
				if(var_251_bool != 1) {
					bool var_252_bool;
					func_823(true, var_252_bool);
					if(var_252_bool != 1)
						var_249_bool = false;
				}
				if(var_249_bool != 0) {
					@Face(var_0_object);
					func_873();
					@PlayAnimation("all", "attack_stay");
					bool var_289_bool; float var_290_float;
					func_691(var_53_float, var_289_bool, var_290_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_866(var_53_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_511_bool;
					func_823(var_53_float, var_511_bool);
					var_512_bool = !var_511_bool; //@nz
					if(var_512_bool == 0) goto Label_426;
					bool var_513_bool;
					func_1593(var_513_bool, var_0_object);
					if(!var_513_bool) { //@nz
						goto Label_436;
					}
					var_0_object->GetPFPosition(var_44_cvector); //@t
					@GetPFPosition(var_45_cvector);
					if(!(((var_44_cvector - var_45_cvector) | (var_44_cvector - var_45_cvector)) < (var_290_float * var_290_float))) goto Label_426;
					bool var_518_bool; float var_519_float;
					var_31_float = var_519_float;
					func_527(var_52_bool, var_53_float, var_518_bool, var_519_float);
					var_520_bool = !var_518_bool; //@nz
					if(var_520_bool == 0) goto Label_426;
					goto Label_436;
			}
				bool var_521_bool; float var_522_float;
				var_31_float = var_522_float;
				func_527(var_52_bool, var_53_float, var_521_bool, var_522_float);
				if(!var_521_bool) { //@nz
					goto Label_436;
				}
				var_47_bool = true;

			}
		Label_426:
			goto Label_435;
			}
			Label_435:
			}
		}
	Label_436:
		@WaitForAnimEnd();
		if(var_3_string != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_46_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_2021(bool var_125_bool, string var_126_string)
{
	bool var_128_bool;
	bool var_129_bool;
	func_2401(var_129_bool);
	if(var_129_bool != 0) {
		@lshHasSpeech(var_128_bool, var_126_string);
		if(var_128_bool != 0) {
			@lshPlaySpeech(var_126_string);
			var_125_bool = true;
		}
	}
	var_125_bool = false;
}


void func_2278(void)
{
	int var_68_int;
	func_2242(var_68_int);
	if(var_68_int != 1) {
	}
	func_2261("liver");
	func_2261("kidney");
	func_2261("heart");
	func_2261("blood");
}


// @pe
void func_1256(string var_111_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_112_string;
	var_111_string = var_112_string;
	func_2043(var_112_string);
	@PlayAnimation("all", var_111_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_111_string);
	@RemoveEnvelope();
}


void func_488(object var_0_object, float var_387_float, int var_388_int)
{
	object var_392_object; float var_393_float; float var_394_float;
	@GetVictim((var_387_float * 0.9), var_392_object);
	@ReportAttack(var_0_object);
	if(var_392_object == var_0_object) {
		float var_398_float; object var_399_object; int var_400_int;
		var_392_object = var_399_object;
		var_388_int = var_400_int;
		func_218(var_400_int);
		var_398_float = var_393_float;
		float var_401_float; object var_402_object; float var_403_float; int var_404_int;
		var_392_object = var_402_object;
		int var_405_int; object var_406_object; int var_407_int;
		var_392_object = var_406_object;
		var_388_int = var_407_int;
		func_221(var_407_int);
		var_405_int = var_404_int;
		func_1479(var_401_float, var_402_object, var_403_float, var_404_int);
		var_401_float = var_394_float;
		int var_466_int;
		func_871(var_466_int);
		@ReportHit(var_0_object, var_466_int, var_394_float, var_403_float);
		object var_467_object; float var_468_float;
		var_392_object = var_467_object;
		var_394_float = var_468_float;
		func_878();
	}
}
EMIT "Stack[-3] = 0";


void func_2036(void)
{
	bool var_19_bool;
	func_2401(var_19_bool);
	if(var_19_bool != 0)
		@lshStopSpeech();
}


void func_762(bool var_302_bool)
{
	bool var_303_bool = false;
	bool var_304_bool;
	func_734(var_303_bool, var_304_bool);
	if(var_304_bool != 0) {
		bool var_321_bool;
		func_778(var_302_bool, var_303_bool, var_321_bool);
		if(var_321_bool != 0)
			var_303_bool = true;
	}
	if(var_303_bool != 0) {
		var_302_bool = true;
		return 0;
	}
	var_302_bool = false;
}


void func_2043(string var_112_string)
{
	bool var_121_bool; int var_122_int; bool var_123_bool; int var_124_int; bool var_125_bool; float var_126_float; cvector var_127_cvector; cvector var_128_cvector;
	@IsExisting3DSound(var_121_bool, var_112_string);
	if(!var_121_bool) { //@nz
		var_122_int = 0;

		for(;;) {
			@IsExisting3DSound(var_123_bool, (var_112_string + (var_122_int + 1)));
			if(!var_123_bool) { //@nz
				break;
			Label_2063:
				@irand(var_124_int, var_122_int);
				var_112_string += (var_124_int + 1);
	}
			@Is3DSoundLoaded(var_125_bool, var_112_string);
			if(var_125_bool != 0) {
				@GetEyesHeight(var_126_float);
				@GetDirection(var_127_cvector);
				var_128_cvector = var_127_cvector * 50;
				var_139_float = GetByIndex(var_128_cvector, 1);
				SetByIndex(var_128_cvector, 1) = (var_139_float + var_126_float);
				@PlayGlobalSound(var_112_string, var_128_cvector);
			}
		}
		var_122_int += 1;
	}
	var_134_bool = !var_122_int; //@nz
	if(var_134_bool == 0) goto Label_2063;
}


