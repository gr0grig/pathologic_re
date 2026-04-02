// @GLOBALS: 0:object:

task task_0
{
	void OnUse(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, bool var_7_bool, cvector var_8_cvector, cvector var_9_cvector, bool var_10_bool)
	{
		bool var_12_bool;
		@IsOverrideActive(var_12_bool);
		if(!var_12_bool) { //@nz
			object var_14_object;
			var_10_bool = var_14_object;
			func_1824(var_14_object);
		}
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, object var_8_object, bool var_9_bool, bool var_10_bool, cvector var_11_cvector, cvector var_12_cvector, bool var_13_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, object var_2_object, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, bool var_11_bool)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, bool var_7_bool, cvector var_8_cvector, cvector var_9_cvector, bool var_10_bool)
	{
	}

}


task task_1
{
	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, bool var_7_bool, cvector var_8_cvector, cvector var_9_cvector, bool var_10_bool)
	{
		func_189();
		object var_12_object;
		var_10_bool = var_12_object;
		func_1989();
	}

	// @pe
	void OnHear(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, bool var_7_bool, cvector var_8_cvector, cvector var_9_cvector, bool var_10_bool)
	{
		if(var_10_bool == actor) {
			@KillTimer(100);
			@Face(actor);
		}
	}

	// @pe
	void OnStopHear(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, bool var_7_bool, cvector var_8_cvector, cvector var_9_cvector, bool var_10_bool)
	{
		if(var_10_bool == actor) {
			@SetTimer(100, 3.0);
			func_1474(actor);
		}
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector, bool var_12_bool, object var_99_object)
		{
		object var_101_object;
		var_99_object = var_101_object;
			bool var_100_bool;
		func_1324(var_100_bool, var_101_object);
		if(!var_100_bool) { //@nz
			object var_129_object;
			var_99_object = var_129_object;
			func_2161(var_129_object);
		}
		func_189();
		object var_145_object;
		var_99_object = var_145_object;
		func_2185(var_145_object);
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector, bool var_12_bool)
	{
		object var_14_object;
		var_10_cvector = var_14_object;
		object var_15_object;
		var_11_cvector = var_15_object;
		bool var_16_bool;
		var_12_bool = var_16_bool;
		bool var_13_bool;
		func_2333(var_13_bool, var_14_object, var_15_object, var_16_bool);
		if(var_13_bool != 0) {
			object var_99_object;
			var_10_cvector = var_99_object;
			func_227();
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, bool var_7_bool, cvector var_8_cvector, cvector var_9_cvector, bool var_10_bool)
	{
		object var_12_object;
		var_10_bool = var_12_object;
		bool var_11_bool;
		func_2305(var_11_bool, var_12_object);
		if(var_11_bool != 0) {
			func_189();
			object var_131_object;
			var_10_bool = var_131_object;
			func_2327(var_131_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, int var_1_int, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, bool var_7_bool, cvector var_8_cvector, cvector var_9_cvector, bool var_10_bool)
	{
		if(var_10_bool != 100) {
		}
		@KillTimer(100);
		@StopGroup0();
	}

}


task task_2
{
	// @pe
		void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector, bool var_12_bool, object var_99_object)
		{
		object var_101_object;
		var_99_object = var_101_object;
			bool var_100_bool;
		func_1324(var_100_bool, var_101_object);
		if(!var_100_bool) { //@nz
			object var_129_object;
			var_99_object = var_129_object;
			func_2161(var_129_object);
		}
		func_436();
		object var_144_object;
		var_99_object = var_144_object;
		func_2185(var_144_object);
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector, bool var_12_bool)
	{
		object var_14_object;
		var_10_cvector = var_14_object;
		object var_15_object;
		var_11_cvector = var_15_object;
		bool var_16_bool;
		var_12_bool = var_16_bool;
		bool var_13_bool;
		func_2333(var_13_bool, var_14_object, var_15_object, var_16_bool);
		if(var_13_bool != 0) {
			object var_99_object;
			var_10_cvector = var_99_object;
			func_403();
		}
	}

	// @pe
	void OnDeath(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, bool var_7_bool, cvector var_8_cvector, cvector var_9_cvector, bool var_10_bool)
	{
		func_436();
		object var_11_object;
		var_10_bool = var_11_object;
		func_1989();
	}

}


task task_3
{
	// @pe
	void OnHear(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, cvector var_8_cvector, cvector var_9_cvector, bool var_10_bool)
	{
		bool var_11_bool = false;
		if(var_2_bool != 0) {
			if(var_10_bool == actor)
				var_11_bool = true;
		}
		if(var_11_bool != 0)
			func_1474(actor);
	}

	// @pe
	void OnSee(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, cvector var_8_cvector, cvector var_9_cvector, bool var_10_bool)
	{
		bool var_11_bool = false;
		if(var_2_bool != 0) {
			if(var_10_bool == actor)
				var_11_bool = true;
		}
		if(var_11_bool != 0) {
			@Trace("@Stop hunt");
			@StopAnimation();
			@StopGroup0();
		}
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector, bool var_12_bool, object var_99_object)
		{
		object var_101_object;
		var_99_object = var_101_object;
			bool var_100_bool;
		func_1324(var_100_bool, var_101_object);
		if(!var_100_bool) //@nz
			return 0;
		object var_129_object;
		var_99_object = var_129_object;
		func_2161(var_129_object);
		if(var_99_object == actor) {
			var_1_object = null;
		} else {
			var_1_object = var_99_object;
			if(var_2_bool == 0) goto Label_776;
			@StopAnimation();
			@StopGroup0();
		}
	Label_776:
	
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector, bool var_12_bool)
	{
		object var_14_object;
		var_10_cvector = var_14_object;
		object var_15_object;
		var_11_cvector = var_15_object;
		bool var_16_bool;
		var_12_bool = var_16_bool;
		bool var_13_bool;
		func_2333(var_13_bool, var_14_object, var_15_object, var_16_bool);
		if(var_13_bool != 0) {
			object var_99_object;
			var_10_cvector = var_99_object;
			func_753();
		}
	}

}


maintask task_4
{
	void init(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, bool var_9_bool)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, string var_7_string, cvector var_8_cvector, cvector var_9_cvector, bool var_10_bool)
	{
		if(var_10_bool == "attack") {
			object var_13_object;
			object var_14_object;
			func_1164(var_14_object);
			var_14_object = var_13_object;
			TaskCall(5);
			func_875(var_13_object);
			TaskReturn();
		} else if(var_10_bool == "execute") {
				TaskCall(6);
				func_1064(var_329_bool);
				TaskReturn();
		}
	
		string var_355_string;
		func_829(var_355_string, var_355_string);
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, cvector var_8_cvector, cvector var_9_cvector, bool var_10_bool)
	{
		bool var_11_bool;
		func_1786(var_11_bool, "quest_d11_02", "soldier_attack");
	}

	void OnUnload(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, bool var_9_bool)
	{
		bool var_10_bool = false;
		if(var_0_object != 0) {
			bool var_12_bool;
			func_873(var_12_bool);
			if(var_12_bool != 0)
				var_10_bool = true;
		}
		if(var_10_bool != 0) {
			object var_13_object;
			func_1646(var_13_object);
			@RemoveActor(var_13_object);
		}
	}

}


task task_5
{
	void OnHear(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, object var_9_object, bool var_10_bool)
	{
		bool var_12_bool;
		object var_14_object;
		var_10_bool = var_14_object;
		bool var_13_bool;
		func_1324(var_13_bool, var_14_object);
		if(!var_13_bool) //@nz
			return 2;
		bool var_48_bool; object var_49_object;
		func_2225(var_48_bool, var_49_object);
		if(!var_48_bool) { //@nz
			var_127_object = GlobalVars[0];
			var_127_object->in(var_12_bool, var_49_object);
			if(!var_12_bool) //@nz
				return 2;
		}
		func_1058();
		object var_129_object;
		var_10_bool = var_129_object;
		TaskCall(1);
		func_165(var_130_object, var_129_object);
		TaskReturn();
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, object var_9_object, object var_10_object, bool var_11_bool, bool var_12_bool, object var_99_object)
		{
		object var_101_object;
		var_99_object = var_101_object;
			bool var_100_bool;
		func_1324(var_100_bool, var_101_object);
		if(!var_100_bool) { //@nz
			object var_129_object;
			var_99_object = var_129_object;
			func_2161(var_129_object);
		}
		func_1058();
		object var_144_object;
		var_99_object = var_144_object;
		func_2185(var_144_object);
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, object var_9_object, object var_10_object, bool var_11_bool, bool var_12_bool)
	{
		object var_14_object;
		var_10_object = var_14_object;
		object var_15_object;
		var_11_bool = var_15_object;
		bool var_16_bool;
		var_12_bool = var_16_bool;
		bool var_13_bool;
		func_2333(var_13_bool, var_14_object, var_15_object, var_16_bool);
		if(var_13_bool != 0) {
			object var_99_object;
			var_10_object = var_99_object;
			func_927();
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, object var_9_object, bool var_10_bool)
	{
		object var_12_object;
		var_10_bool = var_12_object;
		bool var_11_bool;
		func_2305(var_11_bool, var_12_object);
		if(var_11_bool != 0) {
			func_1058();
			object var_130_object;
			var_10_bool = var_130_object;
			func_2372(var_130_object);
		}
	}

}


task task_6
{
	// @pe
	void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, bool var_9_bool, object var_10_object)
	{
		bool var_11_bool;
		func_1786(var_11_bool, "quest_d11_02", "soldier_attack");
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, bool var_9_bool, string var_10_string)
	{
		if(var_10_string == "attack") {
			@StopGroup0();
			var_0_object = true;
		}
	}

}


// @pe
void OnHit(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, bool var_9_bool, object var_10_object, int var_11_int, float var_12_float, float var_13_float)
{
	object var_14_object;
	var_10_object = var_14_object;
	int var_15_int;
	var_11_int = var_15_int;
	float var_16_float;
	var_12_float = var_16_float;
	func_1392(var_14_object, var_15_int, var_16_float);
}


// @pe
void OnHit2(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, bool var_9_bool, object var_10_object, int var_11_int, float var_12_float, float var_13_float, cvector var_14_cvector, cvector var_15_cvector)
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
	func_1460(var_18_float, var_19_cvector, var_20_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, bool var_9_bool, object var_10_object, string var_11_string)
{
	float var_13_float;
	if(var_11_string == "health") {
		@GetProperty("health", var_13_float);
		if(var_13_float <= 0)
			@SignalDeath(var_10_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, bool var_9_bool, object var_10_object)
{
	bool var_11_bool; object var_12_object;
	func_1171(var_11_bool, var_12_object);
	if(var_11_bool != 0) {
		object var_15_object;
		func_1646(var_15_object);
		@ReportReputationChange(var_12_object, var_15_object, 0.05, true);
	}
	object var_20_object;
	var_10_object = var_20_object;
	func_2378(var_20_object);
}


void OnUnload(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, cvector var_7_cvector, cvector var_8_cvector, bool var_9_bool)
{
	bool var_10_bool;
	func_1786(var_10_bool, "quest_d11_02", "actor_unload");
	object var_16_object;
	func_1646(var_16_object);
	@RemoveActor(var_16_object);
	@Hold();
}


// @pe
void func_0(object var_68_object)
{
	object var_70_object;
	var_68_object = var_70_object;
	bool var_69_bool;
	func_1171(var_69_bool, var_70_object);
	if(var_69_bool != 0)
		func_1909();
	func_1885();
	object var_147_object;
	var_68_object = var_147_object;
	func_17(var_147_object);
}


// @pe
void func_17(object var_147_object)
{
	object var_148_object;
	var_147_object = var_148_object;
	func_42(var_148_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1559(bool var_87_bool, string var_88_string)
{
	var_87_bool = true;
	bool var_89_bool = true;
	bool var_90_bool = true;
	bool var_91_bool = true;
	bool var_92_bool = true;
	bool var_93_bool = true;
	bool var_94_bool = true;
	bool var_95_bool = true;
	bool var_96_bool = true;
	bool var_97_bool = true;
	bool var_98_bool = true;
	bool var_99_bool = true;
	var_101_bool = var_88_string == "woman";
	if(var_101_bool != 1) {
		var_103_bool = var_88_string == "worker";
		if(var_103_bool != 1)
			var_99_bool = false;
	}
	if(var_99_bool != 1) {
		var_105_bool = var_88_string == "butcher";
		if(var_105_bool != 1)
			var_98_bool = false;
	}
	if(var_98_bool != 1) {
		var_107_bool = var_88_string == "wasted_girl";
		if(var_107_bool != 1)
			var_97_bool = false;
	}
	if(var_97_bool != 1) {
		var_109_bool = var_88_string == "boy";
		if(var_109_bool != 1)
			var_96_bool = false;
	}
	if(var_96_bool != 1) {
		var_111_bool = var_88_string == "vaxxabitka";
		if(var_111_bool != 1)
			var_95_bool = false;
	}
	if(var_95_bool != 1) {
		var_113_bool = var_88_string == "unosha";
		if(var_113_bool != 1)
			var_94_bool = false;
	}
	if(var_94_bool != 1) {
		var_115_bool = var_88_string == "wasted_male";
		if(var_115_bool != 1)
			var_93_bool = false;
	}
	if(var_93_bool != 1) {
		var_117_bool = var_88_string == "alkash";
		if(var_117_bool != 1)
			var_92_bool = false;
	}
	if(var_92_bool != 1) {
		var_119_bool = var_88_string == "dohodyaga";
		if(var_119_bool != 1)
			var_91_bool = false;
	}
	if(var_91_bool != 1) {
		var_121_bool = var_88_string == "vaxxabit";
		if(var_121_bool != 1)
			var_90_bool = false;
	}
	if(var_90_bool != 1) {
		var_123_bool = var_88_string == "nudegirl";
		if(var_123_bool != 1)
			var_89_bool = false;
	}
	if(var_89_bool != 1) {
		var_125_bool = var_88_string == "morlok";
		if(var_125_bool != 1)
			var_87_bool = false;
	}
}


void func_1058(void)
{
	@StopGroup0();
	@Stop();
}


void func_1063(void)
{
}


void func_1064(object var_0_object)
{
	var_0_object = false;
	@PlayAnimation("all", "attack_on");
	@WaitForAnimEnd();
	if(!var_0_object) { //@nz
		@LockAnimationEnd("all", "attack_on");
		@Sleep(20);
		if(!var_0_object) { //@nz
			@PlayAnimation("all", "attack_begin1");
			@WaitForAnimEnd();
			bool var_339_bool;
			func_1786(var_339_bool, "quest_d11_02", "execute");
			@Speak("shot");
			@PlayAnimation("all", "attack_begin2");
			@WaitForAnimEnd();
			@PlayAnimation("all", "attack_off");
			@WaitForAnimEnd();
		}
	}
	if(var_0_object != 0) {
		object var_351_object;
		object var_352_object;
		func_1164(var_352_object);
		var_352_object = var_351_object;
		TaskCall(5);
		func_875(var_351_object);
		TaskReturn();
	}
}


void func_42(object var_148_object)
{
	cvector var_159_cvector; cvector var_160_cvector; cvector var_161_cvector; cvector var_162_cvector; string var_163_string; object var_164_object; bool var_165_bool; bool var_166_bool; float var_167_float; cvector var_168_cvector;
	if(var_148_object == null) {
		func_133("fdie");
	} else {
		var_148_object->GetPosition(var_159_cvector);
		@GetPosition(var_160_cvector);
		@GetDirection(var_161_cvector);
		var_162_cvector = var_160_cvector - var_159_cvector;
		var_202_float = GetByIndex(var_162_cvector, 0);
		var_203_float = GetByIndex(var_161_cvector, 0);
		var_205_float = GetByIndex(var_162_cvector, 2);
		var_206_float = GetByIndex(var_161_cvector, 2);
		if(((var_202_float * var_203_float) + (var_205_float * var_206_float)) >= 0)
			var_163_string = "fdie";
		else
			var_163_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_148_object = var_164_object;
		var_213_bool = IsFuncExist(var_148_object, "GetScriptProperty", 2);
		if(var_213_bool != 0) {
			var_148_object->HasScriptProperty(var_165_bool, "Owner");
			if(var_165_bool != 0) {
				var_148_object->GetScriptProperty(var_164_object, "Owner");
				if(var_164_object == null)
					var_148_object = var_164_object;
			}
		}
		var_220_bool = IsFuncExist(var_164_object, "@GetEyesHeight", 1);
		if(var_220_bool != 0) {
			var_164_object->GetEyesHeight(var_167_float);
			var_168_cvector = [0.0, 0.0, 0.0];
			var_221_float = GetByIndex(var_168_cvector, 1);
			var_167_float = var_221_float;
			SetByIndex(var_168_cvector, 1) = var_221_float;
			@LookAsync(var_148_object, "head", var_168_cvector);
			var_166_bool = true;
		} else {
			var_166_bool = false;

		}
		string var_223_string;
		var_163_string = var_223_string;
		func_1518(var_223_string);
		@PlayAnimation("all", var_163_string);
		@WaitForAnimEnd();
		if(var_166_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_163_string);
		@RemoveEnvelope();
		var_164_object = null;
	}
	
}


void func_2143(void)
{
	var_20_object = GlobalVars[0];
	object var_21_object;
	func_1689(var_21_object);
	var_21_object = var_20_object;
	GlobalVars[0] = var_20_object;
}


// @pe
void func_2150(object var_136_object, bool var_137_bool)
{
	object var_138_object;
	var_136_object = var_138_object;
	bool var_139_bool;
	var_137_bool = var_139_bool;
	TaskCall(3);
	func_452(var_140_object, var_141_object, var_142_bool, var_138_object, var_139_bool);
	TaskReturn();
	@ResetAAS();
}


void func_1646(object var_16_object)
{
	object var_18_object;
	@self(var_18_object);
	var_18_object = var_16_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1135(string var_276_string, int var_277_int)
{
	if(var_277_int == 2) {
		var_276_string = "fire";
		return 0;
	EMIT "GOTO 0x47b";
	}
	if(var_277_int == 1) {
		var_276_string = "bullet";
		return 0;
	}
	var_276_string = "phys";
}


void func_2161(object var_129_object)
{
	if(var_129_object == null) {
	}
	var_133_object = GlobalVars[0];
	bool var_131_bool;
	var_133_object->in(var_131_bool, var_129_object);
	if(!var_131_bool) { //@nz
		var_135_object = GlobalVars[0];
		var_135_object->add(var_129_object);
	}
	bool var_136_bool; object var_137_object;
	func_1171(var_136_bool, var_137_object);
	if(var_136_bool != 0) {
		object var_140_object;
		func_1646(var_140_object);
		@ReportReputationChange(var_137_object, var_140_object, 0.0);
	}
}


void func_627(object var_0_object, object var_1_object)
{
	var_1_object = null;
	@Face(var_1_object);
}


void func_1652(cvector var_42_cvector, cvector var_43_cvector)
{
	float var_51_float = sqrt(var_43_cvector | var_43_cvector);
	if(var_51_float < 0.000001)
		var_42_cvector = [0.0, 0.0, 0.0];
	var_42_cvector = var_43_cvector / var_51_float;
}


void func_632(object var_0_object)
{
	object var_187_object; object var_188_object; float var_193_float; object var_194_object; object var_195_object;
	func_1798(var_0_object);
	@ReportAttack(var_0_object);
	bool var_197_bool;
	func_1171(var_197_bool, var_0_object);
	if(var_197_bool != 0) {
		object var_199_object;
		func_1646(var_199_object);
		@SendPlayerEnemy(var_0_object, var_199_object);
	}
	cvector var_182_cvector;
	@GetDirection(var_182_cvector);
	cvector var_200_cvector;
	func_1149(var_200_cvector, var_0_object);
	cvector var_183_cvector;
	var_200_cvector = var_183_cvector;
	float var_206_float; cvector var_207_cvector; cvector var_208_cvector;
	var_183_cvector = var_208_cvector;
	func_1714(var_206_float, var_207_cvector, var_208_cvector);
	if(var_206_float < 0.99939084) {
	}
	func_1807();
	@PlayAnimation("all", "attack_begin1");
	bool var_184_bool;
	cvector var_185_cvector;
	cvector var_186_cvector;
	@GetGeometryLocator("attack", var_184_bool, var_185_cvector, var_186_cvector);
	if(var_184_bool != 0) {
		@GetScene(var_188_object);
		@AddActorByType(var_187_object, "light-dynamic", var_188_object, var_185_cvector, var_186_cvector, "soldier_fire.xml");
		var_188_object = null;
		var_187_object = null;
	} else {
				@WaitForAnimEnd();
	}
	@Speak("shot");
	@GetDirection(var_207_cvector);
	cvector var_239_cvector;
	func_1149(var_239_cvector, var_0_object);
	var_239_cvector = var_183_cvector;
	var_241_float = GetByIndex(var_183_cvector, 1);
	float var_242_float;
	func_1485(var_242_float, var_0_object);
	SetByIndex(var_183_cvector, 1) = (var_241_float + var_242_float);
	cvector var_189_cvector;
	@RandVecCone3D(var_189_cvector, var_183_cvector, 0.034906585);
	object var_190_object;
	int var_191_int;
	cvector var_192_cvector;
	@GetVictimMaterial(var_189_cvector, var_190_object, var_191_int, var_192_cvector);
	if(var_190_object != null) {
		if(var_190_object == var_0_object) {
			float var_251_float;
			func_1210(var_251_float, var_0_object, 1.5, 1);
			var_251_float = var_193_float;
			@ReportHit(var_0_object, 2, var_193_float, 1.5);
		} else if(var_191_int != -1) {
			@GetScene(var_194_object);
			@AddActorByType(var_195_object, "scripted", var_194_object, var_192_cvector, [0.0, 0.0, 1.0], "richochet.xml");
			var_195_object->SetScriptProperty("Material", var_191_int);
			var_195_object = null;
			var_194_object = null;

		}
	}
	@PlayAnimation("all", "attack_end1");
	@WaitForAnimEnd();
	@LockAnimationEnd("all", "attack_on");
	
}
EMIT "Stack[-6] = 0";


void func_1149(cvector var_44_cvector, object var_45_object)
{
	cvector var_48_cvector;
	@GetPosition(var_48_cvector);
	cvector var_49_cvector;
	var_45_object->GetPosition(var_49_cvector);
	var_44_cvector = var_49_cvector - var_48_cvector;
}


void func_1662(float var_307_float, cvector var_308_cvector, cvector var_309_cvector)
{
	var_307_float = (var_309_cvector - var_308_cvector) | (var_309_cvector - var_308_cvector);
}


// @pe
void func_1666(float var_286_float, float var_287_float, float var_288_float)
{
	if(var_287_float < var_288_float)
		var_287_float = var_286_float;
	else
		var_288_float = var_286_float;
	
}


void func_1156(float var_369_float, object var_370_object)
{
	cvector var_374_cvector;
	@GetPosition(var_374_cvector);
	cvector var_375_cvector;
	var_370_object->GetPosition(var_375_cvector);
	var_369_float = (var_375_cvector - var_374_cvector) | (var_375_cvector - var_374_cvector);
}


// @pe
void func_133(string var_170_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_171_string;
	var_170_string = var_171_string;
	func_1518(var_171_string);
	@PlayAnimation("all", var_170_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_170_string);
	@RemoveEnvelope();
}


// @pe
void func_2185(object var_144_object)
{
	object var_145_object;
	var_144_object = var_145_object;
	func_2161(var_145_object);
	object var_146_object;
	var_144_object = var_146_object;
	func_2150(var_146_object, true);
}


// @pe
void func_1673(float var_58_float, float var_59_float, float var_60_float, float var_61_float)
{
	if(var_59_float < var_60_float) {
		var_60_float = var_58_float;
		return 0;
	}
	if(var_59_float > var_61_float) {
		var_61_float = var_58_float;
		return 0;
	}
	var_59_float = var_58_float;
}


void func_1164(object var_14_object)
{
	object var_16_object;
	@FindActor(var_16_object, "player");
	var_16_object = var_14_object;
}
EMIT "Stack[-1] = 0";


void func_1171(bool var_11_bool, object var_12_object)
{
	bool var_14_bool;
	@IsPlayerActor(var_12_object, var_14_bool);
	var_14_bool = var_11_bool;
}


void func_1684(bool var_103_bool, int var_104_int, int var_105_int)
{
	int var_107_int;
	@irand(var_107_int, var_105_int);
	var_103_bool = var_107_int < var_104_int;
}


void func_2196(object var_131_object)
{
	var_134_object = GlobalVars[0];
	bool var_133_bool;
	var_134_object->in(var_133_bool, var_131_object);
	if(var_133_bool != 0) {
		object var_136_object;
		var_131_object = var_136_object;
		func_2150(var_136_object, true);
	} else {
		object var_356_object;
		var_131_object = var_356_object;
		TaskCall(2);
		func_285(var_357_object, var_358_bool, var_356_object);
		TaskReturn();
		@ResetAAS();
	}
	
}


void func_1176(bool var_48_bool, object var_49_object, string var_50_string)
{
	var_55_bool = IsFuncExist(var_49_object, "HasProperty", 2);
	if(!var_55_bool) { //@nz
		var_48_bool = false;
		return 2;
	}
	bool var_52_bool;
	var_49_object->HasProperty(var_50_string, var_52_bool);
	var_52_bool = var_48_bool;
}


void func_1689(object var_21_object)
{
	object var_23_object;
	@CreateObjectSet(var_23_object);
	var_23_object = var_21_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1695(float var_209_float, cvector var_210_cvector, cvector var_211_cvector)
{
	var_212_float = GetByIndex(var_210_cvector, 0);
	var_213_float = GetByIndex(var_211_cvector, 0);
	var_215_float = GetByIndex(var_210_cvector, 2);
	var_216_float = GetByIndex(var_211_cvector, 2);
	var_209_float = (var_212_float * var_213_float) + (var_215_float * var_216_float);
}


void func_1188(bool var_40_bool, object var_41_object, string var_42_string, float var_43_float, float var_44_float, float var_45_float)
{
	object var_49_object;
	var_41_object = var_49_object;
	string var_50_string;
	var_42_string = var_50_string;
	bool var_48_bool;
	func_1176(var_48_bool, var_49_object, var_50_string);
	if(!var_48_bool) //@nz
		var_40_bool = false;
	float var_47_float;
	var_41_object->GetProperty(var_42_string, var_47_float);
	float var_58_float; float var_60_float; float var_61_float;
	var_44_float = var_60_float;
	var_45_float = var_61_float;
	func_1673(var_58_float, (var_47_float + var_43_float), var_60_float, var_61_float);
	var_41_object->SetProperty(var_42_string, var_58_float);
	var_40_bool = true;
}


void func_165(object var_0_object, object var_129_object)
{
	bool var_132_bool;
	@Face(var_129_object);
	
	for(;;) {
		@Sleep(0.5, var_132_bool);
		bool var_134_bool = true;
		var_135_bool = !var_132_bool; //@nz
		if(var_135_bool != 1) {
			bool var_136_bool;
			func_1324(var_136_bool, var_129_object);
			var_138_bool = !var_136_bool; //@nz
			if(var_138_bool != 1)
				var_134_bool = false;
		}
		if(var_134_bool != 0)
			break;
	}
	@StopAsync();
}


// @pe
void func_1704(float var_218_float, cvector var_219_cvector)
{
	var_220_float = GetByIndex(var_219_cvector, 0);
	var_221_float = GetByIndex(var_219_cvector, 0);
	var_223_float = GetByIndex(var_219_cvector, 2);
	var_224_float = GetByIndex(var_219_cvector, 2);
	var_218_float = sqrt((var_220_float * var_221_float) + (var_223_float * var_224_float));
}


// @pe
void func_2217(bool var_367_bool, object var_368_object)
{
	object var_370_object;
	var_368_object = var_370_object;
	float var_369_float;
	func_1156(var_369_float, var_370_object);
	var_367_bool = var_369_float <= 40000.0;
}


void func_2225(bool var_52_bool, object var_53_object)
{
	float var_57_float; float var_59_float;
	object var_61_object;
	var_53_object = var_61_object;
	bool var_60_bool;
	func_1324(var_60_bool, var_61_object);
	if(!var_60_bool) { //@nz
		var_52_bool = false;
		return 6;
	}
	bool var_63_bool; object var_64_object;
	func_1171(var_63_bool, var_64_object);
	if(var_63_bool != 0) {
		var_64_object->GetProperty("reputation", var_57_float);
		var_52_bool = var_57_float < 0.33;
		return 6;
	}
	bool var_69_bool; object var_70_object;
	func_1176(var_69_bool, var_70_object, "class");
	if(!var_69_bool) { //@nz
		var_52_bool = false;
		return 6;
	}
	string var_58_string;
	var_70_object->GetProperty("class", var_58_string);
	bool var_74_bool = true;
	bool var_75_bool = true;
	var_77_bool = var_58_string == "bomber";
	if(var_77_bool != 1) {
		var_79_bool = var_58_string == "hunter";
		if(var_79_bool != 1)
			var_75_bool = false;
	}
	if(var_75_bool != 1) {
		var_81_bool = var_58_string == "grabitel";
		if(var_81_bool != 1)
			var_74_bool = false;
	}
	if(var_74_bool != 0) {
		var_52_bool = true;
		return 6;
	}
	bool var_82_bool; object var_83_object;
	func_1176(var_82_bool, var_83_object, "disease");
	if(!var_82_bool) { //@nz
		var_52_bool = false;
		return 6;
	}
	bool var_86_bool = true;
	bool var_87_bool; string var_88_string;
	func_1559(var_87_bool, var_88_string);
	if(var_87_bool != 1) {
		var_127_bool = var_88_string == "dog";
		if(var_127_bool != 1)
			var_86_bool = false;
	}
	if(var_86_bool != 0) {
		var_83_object->GetProperty("disease", var_59_float);
		var_52_bool = var_59_float > 0;
		return 6;
	}
	var_52_bool = false;
}


// @pe
void func_1714(float var_206_float, cvector var_207_cvector, cvector var_208_cvector)
{
	cvector var_210_cvector;
	var_207_cvector = var_210_cvector;
	cvector var_211_cvector;
	var_208_cvector = var_211_cvector;
	float var_209_float;
	func_1695(var_209_float, var_210_cvector, var_211_cvector);
	float var_218_float; cvector var_219_cvector;
	var_207_cvector = var_219_cvector;
	func_1704(var_218_float, var_219_cvector);
	float var_227_float; cvector var_228_cvector;
	var_208_cvector = var_228_cvector;
	func_1704(var_227_float, var_228_cvector);
	var_206_float = var_209_float / (var_218_float * var_227_float);
}


void func_1210(float var_251_float, object var_252_object, float var_253_float, int var_254_int)
{
	int var_261_int; int var_263_int;
	object var_268_object;
	var_252_object = var_268_object;
	bool var_267_bool;
	func_1176(var_267_bool, var_268_object, "health");
	if(!var_267_bool) //@nz
		var_251_float = 0.0;
	bool var_271_bool; object var_272_object;
	func_1176(var_271_bool, var_272_object, "armor");
	if(!var_271_bool) //@nz
		var_261_int = 0;
	else
		var_272_object->GetProperty("armor", var_261_int);
	string var_276_string; int var_277_int;
	var_254_int = var_277_int;
	func_1135(var_276_string, var_277_int);
	string var_262_string = "armor_" + var_276_string;
	bool var_282_bool; object var_283_object; string var_284_string;
	var_252_object = var_283_object;
	func_1176(var_282_bool, var_283_object, var_284_string);
	if(!var_282_bool) //@nz
		var_263_int = 0;
	else
		var_252_object->GetProperty(var_284_string, var_263_int);

	float var_286_float;
	func_1666(var_286_float, ((var_261_int + var_263_int) / 100.0), (float)1);
	float var_264_float;
	var_286_float = var_264_float;
	float var_265_float;
	var_252_object->GetProperty("health", var_265_float);
	float var_266_float = var_253_float * (1 - var_264_float);
	float var_296_float;
	func_1673(var_296_float, (var_265_float - var_266_float), (float)0, (float)1);
	var_252_object->SetProperty("health", var_296_float);
	bool var_302_bool; object var_303_object;
	var_252_object = var_303_object;
	func_1171(var_302_bool, var_303_object);
	if(var_302_bool != 0) {
		float var_304_float = -var_266_float;
		func_1766(var_304_float);
	}
	var_266_float = var_251_float;
	
}


void func_189(void)
{
	@StopAsync();
	@KillTimer(100);
	@StopGroup0();
}


// @pe
void func_1731(bool var_29_bool, object var_30_object, float var_31_float)
{
	if(!var_30_object) { //@nz
		var_29_bool = false;
		return 0;
	}
	if(var_31_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_31_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_36_float;
		var_31_float = var_36_float;
		func_1776(var_36_float);
		bool var_40_bool; object var_41_object; float var_43_float;
		var_30_object = var_41_object;
		var_31_float = var_43_float;
		func_1188(var_40_bool, var_41_object, "reputation", var_43_float, (float)0, (float)1);
		var_29_bool = true;
		return 0;

	}
	
	var_29_bool = false;
}


void func_1766(float var_304_float)
{
	object var_306_object;
	@CreateFloatVector(var_306_object);
	var_306_object->add(var_304_float);
	@SendWorldWndMessage(15, var_306_object);
}
EMIT "Stack[-1] = 0";


void func_1776(float var_36_float)
{
	object var_38_object;
	@CreateFloatVector(var_38_object);
	var_38_object->add(var_36_float);
	@SendWorldWndMessage(16, var_38_object);
}
EMIT "Stack[-1] = 0";


void func_1786(bool var_10_bool, string var_11_string, string var_12_string)
{
	object var_14_object;
	@FindActor(var_14_object, var_11_string);
	if(var_14_object == null)
		var_10_bool = false;
	@Trigger(var_14_object, var_12_string);
	var_10_bool = true;
}
EMIT "Stack[-1] = 0";


void func_2305(bool var_11_bool, object var_12_object)
{
	bool var_15_bool; object var_16_object;
	func_1324(var_15_bool, var_16_object);
	if(!var_15_bool) { //@nz
		var_11_bool = false;
		return 2;
	}
	var_50_object = GlobalVars[0];
	bool var_14_bool;
	var_50_object->in(var_14_bool, var_16_object);
	if(var_14_bool != 0) {
		var_11_bool = true;
		return 2;
	}
	bool var_52_bool; object var_53_object;
	var_12_object = var_53_object;
	func_2225(var_52_bool, var_53_object);
	var_52_bool = var_11_bool;
}


void func_1283(bool var_30_bool, object var_31_object)
{
	bool var_33_bool;
	var_31_object->IsDead(var_33_bool);
	var_33_bool = var_30_bool;
}


void func_1798(object var_147_object)
{
	bool var_149_bool;
	@IsPlayerActor(var_147_object, var_149_bool);
	if(var_149_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1288(bool var_19_bool, object var_20_object)
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
		func_1283(var_30_bool, var_31_object);
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


void func_1807(void)
{
	object var_153_object;
	@GetScene(var_153_object);
	object var_155_object;
	func_1646(var_155_object);
	@BroadcastMessage("battle", var_155_object, var_153_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2327(object var_131_object)
{
	object var_132_object;
	var_131_object = var_132_object;
	func_2372(var_132_object);
}


void func_1818(int var_127_int)
{
	int var_129_int;
	@GetVariable("branch", var_129_int);
	var_129_int = var_127_int;
}


void func_2333(bool var_13_bool, object var_14_object, object var_15_object, bool var_16_bool)
{
	bool var_18_bool;
	object var_20_object;
	var_15_object = var_20_object;
	bool var_19_bool;
	func_2007(var_19_bool, var_20_object, !var_16_bool);
	if(var_19_bool != 0) {
		@CanSee(var_18_bool, var_14_object);
		bool var_87_bool = true;
		if(var_18_bool != 1) {
			float var_89_float; object var_90_object;
			var_14_object = var_90_object;
			func_1156(var_89_float, var_90_object);
			var_98_bool = var_89_float <= 490000.0;
			if(var_98_bool != 1)
				var_87_bool = false;
		}
		if(var_87_bool != 0)
			var_13_bool = true;
	}
	var_13_bool = false;
}


void func_285(object var_0_object, object var_1_object, object var_356_object)
{
	var_0_object = var_356_object;
	func_1798(var_0_object);
	@CanSee(var_1_object, var_0_object);
	if(var_1_object != 0) {
		bool var_367_bool;
		func_2217(var_367_bool, var_0_object);
		if(var_367_bool != 0) {
			func_2150(var_0_object, true);
			return 6;
		}
		@Face(var_0_object);
	}
	func_1807();
	@PlayAnimation("all", "shoot_begin");
	bool var_362_bool;
	@WaitForAnimEnd(var_362_bool);
	if(!var_362_bool) { //@nz
		@StopAsync();
		return 6;
	}
	@Speak("shot");
	@PlayAnimation("all", "shoot_end");
	@WaitForAnimEnd(var_362_bool);
	if(!var_362_bool) { //@nz
		@StopAsync();
		return 6;
	}
	@LockAnimationEnd("all", "shoot_end");
	int var_363_int = 0;
	int var_364_int = 0;
	
	for(;;) {
		if(var_364_int < 20) {
			func_1798(var_0_object);
			@Sleep(0.5, var_362_bool);
			if(!var_362_bool) //@nz
				return 6;
			@CanSee(var_1_object, var_0_object);
			if(var_1_object != 0) {
				var_363_int = 0;
				bool var_395_bool;
				func_2217(var_395_bool, var_0_object);
				if(var_395_bool != 0) {
					func_436();
					func_2150(var_0_object, false);
					return 6;
				}
				@Face(var_0_object);
			} else {
			@StopAsync();
			if(!((var_363_int + 1) == 4)) goto Label_391;
			@PlayAnimation("all", "attack_off");
			@WaitForAnimEnd();
			return 6;
		}
		func_436();
		object var_405_object;
		var_356_object = var_405_object;
		func_2150(var_405_object, false);
		return 6;
		}
	Label_391:
		var_364_int += 1;
	}
	
}


// @pe
void func_1824(object var_14_object)
{
	int var_15_int;
	func_1818(var_15_int);
	if(var_15_int == 1)
		@WorkWithCorpse(var_14_object);
	else
		@Barter(var_14_object);
	
}


void func_1324(bool var_15_bool, object var_16_object)
{
	object var_20_object;
	var_16_object = var_20_object;
	bool var_19_bool;
	func_1288(var_19_bool, var_20_object);
	if(!var_19_bool) { //@nz
		var_15_bool = false;
		return 2;
	}
	bool var_37_bool; object var_38_object;
	func_1176(var_37_bool, var_38_object, "noaccess");
	if(!var_37_bool) { //@nz
		var_15_bool = true;
		return 2;
	}
	int var_18_int;
	var_38_object->GetProperty("noaccess", var_18_int);
	var_15_bool = var_18_int == 0;
}


void func_1837(int var_76_int, int var_77_int)
{
	if(var_76_int > var_77_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_80_int = 0;
	if(var_76_int != var_77_int) {
		@irand(var_80_int, (var_77_int - var_76_int));
	} else if(var_76_int == 0) {
		return 4;
	}
	var_80_int += var_76_int;
	if(var_80_int == 0)
		return 4;
	int var_88_int;
	func_1945(var_88_int, "Money");
	bool var_81_bool;
	@AddItem(var_81_bool, var_88_int, 0, var_80_int);
	
}


void func_829(object var_0_object, string var_355_string)
{
	bool var_357_bool;
	if(var_355_string == "cleanup") {
		var_0_object = true;
		@IsLoaded(var_357_bool);
		bool var_360_bool = false;
		if(!var_357_bool) { //@nz
			bool var_362_bool;
			func_873(var_362_bool);
			if(var_362_bool != 0)
				var_360_bool = true;
		}
		if(var_360_bool != 0) {
			object var_363_object;
			func_1646(var_363_object);
			@RemoveActor(var_363_object);
		}
	} else if(var_355_string == "restore") {
		var_0_object = false;
	}
	
}


// @pe
void func_2372(object var_130_object)
{
	object var_131_object;
	var_130_object = var_131_object;
	func_2196(var_131_object);
}


void func_1348(object var_27_object)
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


// @pe
void func_2378(object var_20_object)
{
	bool var_21_bool;
	func_1786(var_21_bool, "quest_d11_02", "soldier_dead");
	bool var_27_bool; object var_28_object;
	var_20_object = var_28_object;
	func_1171(var_27_bool, var_28_object);
	if(var_27_bool != 0) {
		bool var_29_bool; object var_30_object;
		var_20_object = var_30_object;
		func_1731(var_29_bool, var_30_object, 0.03);
	}
	object var_67_object;
	var_20_object = var_67_object;
	func_1950(var_67_object);
}


void func_1868(string var_133_string)
{
	object var_137_object;
	@CreateInvItem(var_137_object);
	var_137_object->SetItemName(var_133_string);
	var_137_object->SetProperty("Organ", 1);
	int var_138_int;
	var_137_object->GetItemID(var_138_int);
	bool var_139_bool;
	@AddItem(var_139_bool, var_137_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_1885(void)
{
	int var_127_int;
	func_1818(var_127_int);
	if(var_127_int != 1) {
	}
	func_1868("liver");
	func_1868("kidney");
	func_1868("heart");
	func_1868("blood");
}


void func_873(bool var_12_bool)
{
	var_12_bool = true;
}


// @pe
void func_875(object var_13_object)
{
	func_2143();
	object var_24_object;
	var_13_object = var_24_object;
	func_927();
	
	for(;;) {
		func_888();
	}
}
EMIT "Return(); Pop(0)";


void func_1392(object var_14_object, int var_15_int, float var_16_float)
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
		func_1149(var_44_cvector, var_45_object);
		var_44_cvector = var_43_cvector;
		func_1652(var_42_cvector, var_43_cvector);
		var_42_cvector = var_26_cvector;
		@CreateVectorVector(var_27_object);
		var_28_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_28_int), var_29_bool, var_30_cvector, var_31_cvector);
			if(!var_29_bool) { //@nz
				break;
			Label_1454:
				var_27_object = null;
	}
			object var_104_object;
			var_14_object = var_104_object;
			func_1348(var_104_object);
		}
		if((var_31_cvector | var_26_cvector) >= 0.70710677)
			var_27_object->add(var_30_cvector);
		var_28_int += 1;
	}
	int var_32_int;
	var_27_object->size(var_32_int);
	if(var_32_int == 0) goto Label_1454;
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
	func_1460(var_61_float, var_62_cvector, var_63_cvector);
}


void func_1909(void)
{
	@ClearSubContainer(0);
	func_1837(500, 1000);
	func_1503("rifle_ammo", 1, 3, 3);
	func_1503("rusk", 1, 3, 2);
	func_1492("bandage", 1, 6);
	func_1492("tourniquet", 1, 6);
}


// @pe
void func_888(void)
{
	func_2143();
	
	for(;;) {
		func_974(var_19_cvector, var_13_object);
	}
}
EMIT "Return(); Pop(0)";


void func_896(void)
{
}


void func_1945(int var_88_int, string var_89_string)
{
	int var_91_int;
	@GetInvItemByName(var_91_int, var_89_string);
	var_91_int = var_88_int;
}


// @pe
void func_1950(object var_67_object)
{
	object var_68_object;
	var_67_object = var_68_object;
	TaskCall(0);
	func_0(var_68_object);
	TaskReturn();
}


void func_436(void)
{
	@StopAsync();
	@StopGroup0();
	@Stop();
}


void func_1460(object var_16_object, cvector var_19_cvector, cvector var_20_cvector)
{
	object var_23_object;
	@GetScene(var_23_object);
	object var_24_object;
	@AddActorByType(var_24_object, "scripted", var_23_object, var_19_cvector, var_20_cvector, "blood_dir.xml");
	object var_27_object;
	var_16_object = var_27_object;
	func_1348(var_27_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1474(object var_323_object)
{
	cvector var_327_cvector;
	var_323_object->GetPosition(var_327_cvector);
	cvector var_328_cvector;
	@GetPosition(var_328_cvector);
	cvector var_329_cvector = var_327_cvector - var_328_cvector;
	var_330_float = GetByIndex(var_329_cvector, 0);
	var_331_float = GetByIndex(var_329_cvector, 2);
	@RotateAsync(var_330_float, var_331_float);
}


void func_452(object var_0_object, object var_1_object, bool var_2_bool, object var_138_object, bool var_139_bool)
{
	bool var_145_bool; bool var_146_bool;
	var_0_object = var_138_object;
	func_1798(var_0_object);
	func_1807();
	@Face(var_0_object);
	if(var_139_bool != 0) {
		@PlayAnimation("all", "attack_on");
		@WaitForAnimEnd();
	}
	@LockAnimationEnd("all", "attack_on");
	@SetAttackState(true);
	
Label_478:
	for(;;) {
		bool var_164_bool;
		func_1324(var_164_bool, var_0_object);
		if(var_164_bool != 0) {
			@CanSee(var_146_bool, var_0_object);
			if(var_146_bool != 0) {
				func_1798(var_0_object);
				func_632(var_146_bool);
			} else {
				func_1474(var_0_object);
				var_2_bool = true;
				@PlayAnimation("all", "hunt");
				@WaitForAnimEnd(var_145_bool);
				if(!var_145_bool) { //@nz
					if(var_1_object != null)
						func_627(var_145_bool, var_146_bool);
					@LockAnimationEnd("all", "attack_on");
					goto Label_478;
				}
				bool var_338_bool;
				func_1324(var_338_bool, var_0_object);
				if(!var_338_bool) { //@nz
				} else {
						@CanSee(var_146_bool, var_0_object);
						if(var_146_bool != 0) {
							var_2_bool = false;
							@Face(var_0_object);
							func_632(var_146_bool);
							goto Label_574;
						}
						@LockAnimationEnd("all", "attack_on");
						@Sleep(3, var_145_bool);
						if(!var_145_bool) { //@nz
							if(var_1_object != null)
								func_627(var_145_bool, var_146_bool);
							@LockAnimationEnd("all", "attack_on");
							goto Label_478;
						}
						bool var_352_bool;
						func_1324(var_352_bool, var_0_object);
						var_354_bool = !var_352_bool; //@nz
						if(var_354_bool == 0) goto Label_562;
				}
		}
		Label_584:
			for(;;) {
				@SetAttackState(false);
				@StopAsync();
				@PlayAnimation("all", "attack_off");
				@WaitForAnimEnd();

			}

		Label_562:
			var_2_bool = false;
			@CanSee(var_146_bool, var_0_object);
			if(var_146_bool != 0) {
				@Face(var_0_object);
				func_632(var_146_bool);
				goto Label_574;
			}
			goto Label_584;
		}
	Label_574:
		if(var_1_object != null)
			func_627(var_145_bool, var_146_bool);
		else
			@Sleep(2);

	}
	
}


void func_1485(float var_242_float, object var_243_object)
{
	float var_246_float;
	@GetEyesHeight(var_246_float);
	float var_247_float;
	var_243_object->GetEyesHeight(var_247_float);
	var_242_float = var_247_float - var_246_float;
}


void func_974(object var_0_object, object var_1_object)
{
	int var_299_int; bool var_300_bool; cvector var_301_cvector; object var_302_object;
	@GetPFPosition(var_1_object);
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1063();
		@irand(var_299_int, 10);
		@Sleep((var_299_int + 5), var_300_bool);
		if(var_300_bool != 0) {
			func_896();
		} else {
		for(;;) {
			func_1063();
			@GetPFPosition(var_301_cvector);
			float var_307_float; cvector var_309_cvector;
			var_301_cvector = var_309_cvector;
			func_1662(var_307_float, var_1_object, var_309_cvector);
			if(var_307_float > 40000) {
				@FindPathTo(var_302_object, var_1_object);
				if(var_302_object != null) {
					@RotatePath(var_302_object, var_300_bool);
					if(!var_300_bool) { //@nz
					} else {
					@FollowPath(var_302_object, false, var_300_bool);
					if(!var_300_bool) { //@nz
						goto Label_1055;
					}
					var_318_float = GetByIndex(var_0_object, 0);
					var_319_float = GetByIndex(var_0_object, 2);
					@Rotate(var_318_float, var_319_float, var_300_bool);
					if(!var_300_bool) { //@nz
						goto Label_1055;
					}
					@WaitForAnimEnd(var_300_bool);
					if(!var_300_bool) { //@nz
						goto Label_1055;
					}
					goto Label_1056;
				EMIT "GOTO 0x410";
				}
				@Sleep(1);
				var_302_object = null;
				goto Label_1055;
			}
			var_323_float = GetByIndex(var_0_object, 0);
			var_324_float = GetByIndex(var_0_object, 2);
			@Rotate(var_323_float, var_324_float, var_300_bool);
			if(!var_300_bool) { //@nz
				goto Label_1055;
			}
			@WaitForAnimEnd(var_300_bool);
			if(!var_300_bool) { //@nz
				goto Label_1055;
			}
			goto Label_1056;
			}
		Label_1055:
		}
		}
	Label_1056:
	}
	
}
EMIT "Return(); Pop(8)";


void func_1492(string var_115_string, int var_116_int, int var_117_int)
{
	bool var_119_bool;
	int var_121_int;
	var_116_int = var_121_int;
	int var_122_int;
	var_117_int = var_122_int;
	bool var_120_bool;
	func_1684(var_120_bool, var_121_int, var_122_int);
	if(var_120_bool != 0)
		@AddItem(var_119_bool, var_115_string, 0);
}


void func_2007(bool var_19_bool, object var_20_object, bool var_21_bool)
{
	bool var_24_bool; object var_25_object;
	func_1176(var_24_bool, var_25_object, "class");
	if(!var_24_bool) { //@nz
		var_19_bool = false;
		return 2;
	}
	string var_23_string;
	var_25_object->GetProperty("class", var_23_string);
	bool var_35_bool = true;
	bool var_36_bool = true;
	bool var_37_bool = true;
	bool var_38_bool = true;
	bool var_39_bool = true;
	bool var_40_bool = true;
	bool var_41_bool = true;
	bool var_42_bool = true;
	bool var_43_bool = true;
	bool var_44_bool = true;
	var_46_bool = var_23_string == "patrol";
	if(var_46_bool != 1) {
		var_48_bool = var_23_string == "sanitar";
		if(var_48_bool != 1)
			var_44_bool = false;
	}
	if(var_44_bool != 1) {
		var_50_bool = var_23_string == "soldier";
		if(var_50_bool != 1)
			var_43_bool = false;
	}
	if(var_43_bool != 1) {
		var_52_bool = var_23_string == "woman";
		if(var_52_bool != 1)
			var_42_bool = false;
	}
	if(var_42_bool != 1) {
		var_54_bool = var_23_string == "wasted_girl";
		if(var_54_bool != 1)
			var_41_bool = false;
	}
	if(var_41_bool != 1) {
		var_56_bool = var_23_string == "vaxxabitka";
		if(var_56_bool != 1)
			var_40_bool = false;
	}
	if(var_40_bool != 1) {
		var_58_bool = var_23_string == "vaxxabit";
		if(var_58_bool != 1)
			var_39_bool = false;
	}
	if(var_39_bool != 1) {
		var_60_bool = var_23_string == "little_girl";
		if(var_60_bool != 1)
			var_38_bool = false;
	}
	if(var_38_bool != 1) {
		var_62_bool = var_23_string == "girl";
		if(var_62_bool != 1)
			var_37_bool = false;
	}
	if(var_37_bool != 1) {
		var_64_bool = var_23_string == "dohodyaga";
		if(var_64_bool != 1)
			var_36_bool = false;
	}
	if(var_36_bool != 1) {
		var_66_bool = var_23_string == "nudegirl";
		if(var_66_bool != 1)
			var_35_bool = false;
	}
	if(var_35_bool != 0) {
		var_19_bool = true;
		return 2;
	}
	if(var_21_bool != 0) {
		var_19_bool = false;
		return 2;
	}
	var_19_bool = true;
	bool var_68_bool = true;
	bool var_69_bool = true;
	bool var_70_bool = true;
	bool var_71_bool = true;
	bool var_72_bool = true;
	var_74_bool = var_23_string == "worker";
	if(var_74_bool != 1) {
		var_76_bool = var_23_string == "butcher";
		if(var_76_bool != 1)
			var_72_bool = false;
	}
	if(var_72_bool != 1) {
		var_78_bool = var_23_string == "boy";
		if(var_78_bool != 1)
			var_71_bool = false;
	}
	if(var_71_bool != 1) {
		var_80_bool = var_23_string == "unosha";
		if(var_80_bool != 1)
			var_70_bool = false;
	}
	if(var_70_bool != 1) {
		var_82_bool = var_23_string == "wasted_male";
		if(var_82_bool != 1)
			var_69_bool = false;
	}
	if(var_69_bool != 1) {
		var_84_bool = var_23_string == "alkash";
		if(var_84_bool != 1)
			var_68_bool = false;
	}
	if(var_68_bool != 1) {
		var_86_bool = var_23_string == "morlok";
		if(var_86_bool != 1)
			var_19_bool = false;
	}
}


void func_1503(string var_95_string, int var_96_int, int var_97_int, int var_98_int)
{
	int var_101_int; bool var_102_bool;
	int var_104_int;
	var_96_int = var_104_int;
	int var_105_int;
	var_97_int = var_105_int;
	bool var_103_bool;
	func_1684(var_103_bool, var_104_int, var_105_int);
	if(var_103_bool != 0) {
		@irand(var_101_int, var_98_int);
		@AddItem(var_102_bool, var_95_string, 0, (var_101_int + 1));
	}
}


void func_1518(string var_171_string)
{
	bool var_180_bool; int var_181_int; bool var_182_bool; int var_183_int; bool var_184_bool; float var_185_float; cvector var_186_cvector; cvector var_187_cvector;
	@IsExisting3DSound(var_180_bool, var_171_string);
	if(!var_180_bool) { //@nz
		var_181_int = 0;

		for(;;) {
			@IsExisting3DSound(var_182_bool, (var_171_string + (var_181_int + 1)));
			if(!var_182_bool) { //@nz
				break;
			Label_1538:
				@irand(var_183_int, var_181_int);
				var_171_string += (var_183_int + 1);
	}
			@Is3DSoundLoaded(var_184_bool, var_171_string);
			if(var_184_bool != 0) {
				@GetEyesHeight(var_185_float);
				@GetDirection(var_186_cvector);
				var_187_cvector = var_186_cvector * 50;
				var_198_float = GetByIndex(var_187_cvector, 1);
				SetByIndex(var_187_cvector, 1) = (var_198_float + var_185_float);
				@PlayGlobalSound(var_171_string, var_187_cvector);
			}
		}
		var_181_int += 1;
	}
	var_193_bool = !var_181_int; //@nz
	if(var_193_bool == 0) goto Label_1538;
}


