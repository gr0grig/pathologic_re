// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		if(1 != 0) {
			func_1787();
			if(var_15_object == 5801) {
				func_132(var_16_bool, "Neutral");
				var_0_object->SetMessage(505264); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(505265, -1, 5802); //@t
				var_0_object->AddReply(506042, -1, 6665); //@t
				return 0;
			}
			var_3_string = true;
			bool var_45_bool;
			func_1943(var_45_bool);
			if(var_45_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x9b";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		var_0_object = false;
		@SensePlayerOnly(true);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		object var_17_object;
		var_15_bool = var_17_object;
		TaskCall(0);
		int var_16_int;
		func_0(var_18_object, var_16_int, var_17_object);
		TaskReturn();
		TaskCall(3);
		func_251();
		TaskReturn();
	}

	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		bool var_17_bool;
		@IsPlayerActor(var_15_bool, var_17_bool);
		if(var_17_bool != 0) {
			TaskCall(3);
			func_251();
			TaskReturn();
		}
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		bool var_17_bool;
		if(var_15_bool == "cleanup") {
			var_0_object = true;
			@IsLoaded(var_17_bool);
			if(!var_17_bool) { //@nz
				object var_21_object;
				func_1835(var_21_object);
				@RemoveActor(var_21_object);
			}
		}
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		if(var_0_object != 0) {
			object var_16_object;
			func_1835(var_16_object);
			@RemoveActor(var_16_object);
		}
	}

}


task task_3
{
	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		func_1945();
		@Hold();
	}

}


task task_4
{
	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		func_1945();
		@Hold();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, int var_15_int)
	{
		if(var_15_int == 1) {
			func_1898(var_1_object);
		} else {
			int var_23_int;
			func_1158(var_14_bool, var_23_int, var_23_int);
		}
	
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
		bool var_16_bool = false;
		if(var_1_object == var_15_object) {
			if(!var_2_object) //@nz
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			var_2_object = true;
			object var_19_object;
			var_15_object = var_19_object;
			func_1776(var_19_object);
		}
	}

	// @pe
	void OnStopSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
		bool var_16_bool = false;
		if(var_1_object == var_15_object) {
			if(var_2_object != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			var_2_object = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
		@RequestClearPath(var_15_object);
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
		func_1014(var_15_object);
		object var_20_object;
		var_15_object = var_20_object;
		func_2000();
	}

}


task task_5
{
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		object var_15_object;
		func_1835(var_15_object);
		@RemoveActor(var_15_object);
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, int var_16_int, float var_17_float, float var_18_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, string var_16_string)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, int var_16_int, float var_17_float, float var_18_float)
{
	object var_19_object;
	var_15_object = var_19_object;
	int var_20_int;
	var_16_int = var_20_int;
	float var_21_float;
	var_17_float = var_21_float;
	func_1565(var_19_object, var_20_int, var_21_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, int var_16_int, float var_17_float, float var_18_float, cvector var_19_cvector, cvector var_20_cvector)
{
	object var_21_object;
	var_15_object = var_21_object;
	int var_22_int;
	var_16_int = var_22_int;
	float var_23_float;
	var_17_float = var_23_float;
	cvector var_24_cvector;
	var_19_cvector = var_24_cvector;
	cvector var_25_cvector;
	var_20_cvector = var_25_cvector;
	func_1633(var_23_float, var_24_cvector, var_25_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, string var_16_string)
{
	float var_18_float;
	if(var_16_string == "health") {
		@GetProperty("health", var_18_float);
		if(var_18_float <= 0)
			@SignalDeath(var_15_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
{
	object var_16_object;
	var_15_object = var_16_object;
	func_1956(var_16_object);
}


void func_0(object var_0_object, int var_16_int, object var_17_object)
{
	var_0_object = var_17_object;
	bool var_27_bool; object var_28_object;
	var_17_object = var_28_object;
	func_1658(var_27_bool, var_28_object, 70.0);
	if(!var_27_bool) { //@nz
		var_16_int = -2;
		return 8;
	}
	object var_23_object;
	@CreateDialog(var_23_object);
	int var_75_int;
	func_1937(var_75_int);
	var_23_object->SetNPCName(var_75_int);
	int var_76_int;
	func_1935(var_76_int);
	var_23_object->SetNPCDescription(var_76_int);
	string var_77_string;
	func_1939(var_77_string);
	var_23_object->SetPhoto(var_77_string);
	string var_78_string;
	func_1941(var_78_string);
	var_23_object->SetPhoto2(var_78_string);
	int var_79_int;
	func_1918(var_79_int);
	var_23_object->SetPlayerName(var_79_int);
	bool var_24_bool;
	@IsOverrideActive(var_24_bool);
	if(var_24_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	@DoDialog(var_23_object);
	object var_88_object; object var_89_object;
	var_17_object = var_88_object;
	var_23_object = var_89_object;
	TaskCall(1);
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object);
	TaskReturn();
	bool var_26_bool;
	var_23_object->IsDialogEnd(var_26_bool);
	
	for(;;) {
		var_137_bool = !var_26_bool; //@nz
		if(var_137_bool == 0) goto Label_63;
		@sync();
		var_23_object->IsDialogEnd(var_26_bool);
	}
	
Label_63:
	object var_138_object;
	var_17_object = var_138_object;
	func_1727();
	@StopDialog(var_23_object);
	var_23_object->GetReturnValue(-1);
	int var_25_int = var_16_int;
}
EMIT "Stack[-4] = 0";


void func_512(object var_1_object, object var_2_object, bool var_4_bool)
{
	bool var_62_bool; bool var_63_bool; cvector var_64_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_62_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_62_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_63_bool, ("attack" + (var_2_object + 1)));
			if(!var_63_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_64_cvector, "all", "bjump");
		var_78_float = GetByIndex(var_64_cvector, 2);
		var_4_bool = -var_78_float;

	}
}


void func_1794(string var_47_string)
{
	bool var_56_bool; int var_57_int; bool var_58_bool; int var_59_int; bool var_60_bool; float var_61_float; cvector var_62_cvector; cvector var_63_cvector;
	@IsExisting3DSound(var_56_bool, var_47_string);
	if(!var_56_bool) { //@nz
		var_57_int = 0;

		for(;;) {
			@IsExisting3DSound(var_58_bool, (var_47_string + (var_57_int + 1)));
			if(!var_58_bool) { //@nz
				break;
			Label_1814:
				@irand(var_59_int, var_57_int);
				var_47_string += (var_59_int + 1);
	}
			@Is3DSoundLoaded(var_60_bool, var_47_string);
			if(var_60_bool != 0) {
				@GetEyesHeight(var_61_float);
				@GetDirection(var_62_cvector);
				var_63_cvector = var_62_cvector * 50;
				var_74_float = GetByIndex(var_63_cvector, 1);
				SetByIndex(var_63_cvector, 1) = (var_74_float + var_61_float);
				@PlayGlobalSound(var_47_string, var_63_cvector);
			}
		}
		var_57_int += 1;
	}
	var_69_bool = !var_57_int; //@nz
	if(var_69_bool == 0) goto Label_1814;
}


// @pe
void func_132(object var_2_object, string var_95_string)
{
	bool var_96_bool;
	func_1943(var_96_bool);
	if(!var_96_bool) //@nz
		return 0;
	if(var_95_string == var_2_object)
		return 0;
	string var_99_string; bool var_100_bool;
	var_95_string = var_99_string;
	if(var_95_string == "")
		var_100_bool = false;
	else
		var_100_bool = true;
	func_1761(var_99_string, var_100_bool);
	var_2_object = var_95_string;
	
}


// @pe
void func_1158(object var_0_object, object var_1_object, int var_23_int)
{
	if(var_23_int != 0)
		return 0;
	bool var_26_bool;
	func_1196(var_26_bool, var_1_object);
	if(!var_26_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_1935(int var_76_int)
{
	var_76_int = 515562;
}


// @pe
void func_271(float var_403_float)
{
	var_403_float = 0.1;
}


void func_1937(int var_75_int)
{
	var_75_int = 503347;
}


// @pe
void func_274(int var_410_int)
{
	var_410_int = 0;
}


void func_1939(string var_77_string)
{
	var_77_string = "ui/NPC_Citizen1.png";
}


void func_1941(string var_78_string)
{
	var_78_string = "ui/NPC_Citizen1_b.png";
}


void func_1943(bool var_70_bool)
{
	var_70_bool = false;
}


void func_793(object var_0_object, bool var_309_bool)
{
	cvector var_315_cvector; cvector var_316_cvector;
	bool var_320_bool;
	func_1497(var_320_bool, var_0_object);
	if(!var_320_bool) { //@nz
		var_309_bool = false;
		return 10;
	}
	bool var_323_bool;
	float var_319_float;
	func_882(var_319_float, var_323_bool);
	if(var_323_bool != 0) {
		var_0_object->GetPFPosition(var_315_cvector); //@t
		@GetPFPosition(var_316_cvector);
		var_0_object->GetAttackDistance(var_319_float); //@t
		var_309_bool = ((var_315_cvector - var_316_cvector) | (var_315_cvector - var_316_cvector)) <= ((var_319_float + 50) * (var_319_float + 50));
		return 10;
	}
	var_309_bool = false;
}


void func_1945(void)
{
	object var_15_object;
	func_1835(var_15_object);
	@RemoveActor(var_15_object);
	bool var_18_bool;
	func_1886(var_18_bool, "quest_d1_03", "butcher_fail");
}


void func_283(object var_0_object, string var_3_string, bool var_5_bool, object var_34_object, bool var_35_bool, float var_36_float, bool var_143_bool, bool var_235_bool)
{
	float var_48_float; cvector var_49_cvector; cvector var_50_cvector; bool var_52_bool; float var_55_float; cvector var_56_cvector; bool var_57_bool; float var_58_float;
	func_512(var_56_cvector, var_57_bool, var_58_float);
	var_5_bool = 0;
	var_83_bool = IsFuncExist(var_34_object, "@GetAttackDistance", 1);
	if(var_83_bool != 0) {
		var_34_object->GetAttackDistance(var_48_float);
		var_48_float += 50;
	} else {
						var_36_float = var_48_float;
	}
	if(var_48_float >= 150)
		var_48_float = 150;
	var_3_string = false;
	var_0_object = var_34_object;
	bool var_51_bool;
	@IsPlayerActor(var_0_object, var_51_bool);
	if(var_51_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_89_object;
		func_1835(var_89_object);
		@SendPlayerEnemy(var_34_object, var_89_object);
	}
	if(var_35_bool != 0)
		var_52_bool = false;
	else
		var_52_bool = true;

	
Label_323:
	for(;;) {
		bool var_94_bool = false;
		bool var_95_bool;
		func_1497(var_95_bool, var_0_object);
		if(var_95_bool != 0) {
			if(!var_3_string) //@nz
				var_94_bool = true;
		}
		if(var_94_bool != 0) {
			func_925(var_58_float);
			var_0_object->GetPFPosition(var_49_cvector); //@t
			@GetPFPosition(var_50_cvector);
			var_55_float = (var_49_cvector - var_50_cvector) | (var_49_cvector - var_50_cvector);
			if(var_55_float >= ((400.0 + var_48_float) * (400.0 + var_48_float))) {
				bool var_137_bool; float var_139_float;
				var_48_float = var_139_float;
				TaskCall(4);
				func_951(var_145_bool, var_137_bool, var_0_object, var_139_float, 3000.0, true, false);
				TaskReturn();
				if(!var_143_bool) { //@nz
				} else {
					var_52_bool = false;
			} else {
			if(var_55_float >= (var_36_float * var_36_float)) {
				var_0_object->GetPFPosition(var_56_cvector); //@t
				@CanReachByPF(var_57_bool, var_56_cvector);
				if(!var_57_bool) { //@nz
					bool var_229_bool; float var_231_float;
					var_48_float = var_231_float;
					TaskCall(4);
					func_951(var_237_bool, var_229_bool, var_0_object, var_231_float, 3000.0, true, false);
					TaskReturn();
					if(!var_235_bool) { //@nz
						goto Label_495;
					}
					var_52_bool = false;
					goto Label_323;
				}
				if(!var_52_bool) { //@nz
					func_1647(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_925(var_58_float);
					@StopAsync();
					var_52_bool = true;
					bool var_251_bool;
					func_1497(var_251_bool, var_0_object);
					if(!var_251_bool) { //@nz
						goto Label_495;
					}
				}
				@rand(var_58_float);
				bool var_254_bool;
				var_256_bool = var_58_float < 0.25;
				if(var_256_bool != 1) {
					bool var_257_bool;
					func_882(true, var_257_bool);
					if(var_257_bool != 1)
						var_254_bool = false;
				}
				if(var_254_bool != 0) {
					@Face(var_0_object);
					func_932();
					@PlayAnimation("all", "attack_stay");
					bool var_294_bool; float var_295_float;
					func_750(var_58_float, var_294_bool, var_295_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_925(var_58_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_516_bool;
					func_882(var_58_float, var_516_bool);
					var_517_bool = !var_516_bool; //@nz
					if(var_517_bool == 0) goto Label_485;
					bool var_518_bool;
					func_1497(var_518_bool, var_0_object);
					if(!var_518_bool) { //@nz
						goto Label_495;
					}
					var_0_object->GetPFPosition(var_49_cvector); //@t
					@GetPFPosition(var_50_cvector);
					if(!(((var_49_cvector - var_50_cvector) | (var_49_cvector - var_50_cvector)) < (var_295_float * var_295_float))) goto Label_485;
					bool var_523_bool; float var_524_float;
					var_36_float = var_524_float;
					func_586(var_57_bool, var_58_float, var_523_bool, var_524_float);
					var_525_bool = !var_523_bool; //@nz
					if(var_525_bool == 0) goto Label_485;
					goto Label_495;
			}
				bool var_526_bool; float var_527_float;
				var_36_float = var_527_float;
				func_586(var_57_bool, var_58_float, var_526_bool, var_527_float);
				if(!var_526_bool) { //@nz
					goto Label_495;
				}
				var_52_bool = true;

			}
		Label_485:
			goto Label_494;
			}
			Label_494:
			}
		}
	Label_495:
		@WaitForAnimEnd();
		if(var_3_string != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_51_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_1180(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_925(object var_0_object)
{
	func_1898(var_0_object);
}


void func_1565(object var_19_object, int var_20_int, float var_21_float)
{
	cvector var_31_cvector; object var_32_object; int var_33_int; bool var_34_bool; cvector var_35_cvector; cvector var_36_cvector;
	bool var_40_bool = false;
	bool var_41_bool = false;
	if(var_19_object != 0) {
		if(var_20_int != 4)
			var_41_bool = true;
	}
	if(var_41_bool != 0) {
		if(var_20_int != 5)
			var_40_bool = true;
	}
	if(var_40_bool != 0) {
		cvector var_47_cvector; cvector var_48_cvector;
		cvector var_49_cvector; object var_50_object;
		var_19_object = var_50_object;
		func_1359(var_49_cvector, var_50_object);
		var_49_cvector = var_48_cvector;
		func_1841(var_47_cvector, var_48_cvector);
		var_47_cvector = var_31_cvector;
		@CreateVectorVector(var_32_object);
		var_33_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_33_int), var_34_bool, var_35_cvector, var_36_cvector);
			if(!var_34_bool) { //@nz
				break;
			Label_1627:
				var_32_object = null;
	}
			object var_109_object;
			var_19_object = var_109_object;
			func_1521(var_109_object);
		}
		if((var_36_cvector | var_31_cvector) >= 0.70710677)
			var_32_object->add(var_35_cvector);
		var_33_int += 1;
	}
	int var_37_int;
	var_32_object->size(var_37_int);
	if(var_37_int == 0) goto Label_1627;
	int var_38_int;
	@irand(var_38_int, var_37_int);
	cvector var_39_cvector;
	var_32_object->get(var_39_cvector, var_38_int);
	object var_64_object; int var_65_int; float var_66_float; cvector var_67_cvector; cvector var_68_cvector;
	var_19_object = var_64_object;
	var_20_int = var_65_int;
	var_21_float = var_66_float;
	var_39_cvector = var_67_cvector;
	var_68_cvector = -var_31_cvector;
	func_1633(var_66_float, var_67_cvector, var_68_cvector);
}


void func_1787(void)
{
	bool var_18_bool;
	func_1943(var_18_bool);
	if(var_18_bool != 0)
		@lshStopSpeech();
}


void func_1056(object var_0_object, object var_1_object, bool var_166_bool, object var_167_object, float var_168_float, float var_169_float, bool var_170_bool, bool var_171_bool)
{
	bool var_180_bool; object var_182_object; cvector var_183_cvector; cvector var_184_cvector; float var_186_float; object var_187_object;
	var_0_object = false;
	var_1_object = var_167_object;
	bool var_181_bool;
	var_171_bool = var_181_bool;
	
	for(;;) {
		bool var_188_bool; object var_189_object;
		var_167_object = var_189_object;
		func_1196(var_188_bool, var_189_object);
		if(!var_188_bool) { //@nz
			var_166_bool = false;
			return 16;
		}
		var_167_object->GetPosition(var_183_cvector);
		@GetPosition(var_184_cvector);
		var_186_float = (var_183_cvector - var_184_cvector) | (var_183_cvector - var_184_cvector);
		bool var_193_bool = false;
		if(var_169_float > 0) {
			if(var_186_float > (var_169_float * var_169_float))
				var_193_bool = true;
		}
		if(var_193_bool != 0) {
			@Stop();
			var_166_bool = false;
			return 16;
		}
		if(var_186_float > (var_168_float * var_168_float)) {
			var_167_object->GetPFPosition(var_183_cvector);
			@FindPathTo(var_187_object, var_183_cvector);
			if(var_187_object != null) {
				var_187_object = var_182_object;
				var_187_object = null;
			}
			if(var_182_object != null) {
				if(var_181_bool == 0) goto Label_1109;
				var_181_bool = false;
				@RotatePath(var_182_object, var_180_bool);
				if(!var_180_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_206_string;
						func_1203(var_206_string);
						string var_207_string;
						func_1205(var_207_string);
						@FollowPath(var_182_object, var_170_bool, var_180_bool, var_206_string, var_207_string);
						if(!var_180_bool) { //@nz
							if(var_0_object == 0) goto Label_1128;
							var_182_object = null;
						}
					EMIT "GOTO 0x469";

					Label_1128:
						} else {
					var_182_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_180_bool);
					if(!var_180_bool) { //@nz
						if(var_0_object != 0) {
							var_182_object = null;
							goto Label_1156;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1156;
		}
			var_187_object = null;
			goto Label_1154;

		Label_1154:
			var_182_object = null;

		}
	Label_1156:
		for(;;) {
			var_166_bool = !var_0_object;
			return 16;

			}
	}
	
}


// @pe
void func_1313(string var_46_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_47_string;
	var_46_string = var_47_string;
	func_1794(var_47_string);
	@PlayAnimation("all", var_46_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_46_string);
	@RemoveEnvelope();
}


void func_930(int var_471_int)
{
	var_471_int = 0;
}


void func_547(object var_0_object, float var_392_float, int var_393_int)
{
	object var_397_object; float var_398_float; float var_399_float;
	@GetVictim((var_392_float * 0.9), var_397_object);
	@ReportAttack(var_0_object);
	if(var_397_object == var_0_object) {
		float var_403_float; object var_404_object; int var_405_int;
		var_397_object = var_404_object;
		var_393_int = var_405_int;
		func_271(var_405_int);
		var_403_float = var_398_float;
		float var_406_float; object var_407_object; float var_408_float; int var_409_int;
		var_397_object = var_407_object;
		int var_410_int; object var_411_object; int var_412_int;
		var_397_object = var_411_object;
		var_393_int = var_412_int;
		func_274(var_412_int);
		var_410_int = var_409_int;
		func_1383(var_406_float, var_407_object, var_408_float, var_409_int);
		var_406_float = var_399_float;
		int var_471_int;
		func_930(var_471_int);
		@ReportHit(var_0_object, var_471_int, var_399_float, var_408_float);
		object var_472_object; float var_473_float;
		var_397_object = var_472_object;
		var_399_float = var_473_float;
		func_937();
	}
}
EMIT "Stack[-3] = 0";


void func_932(void)
{
	func_1794("attack_stay");
}


// @pe
void func_1956(object var_16_object)
{
	bool var_17_bool;
	func_1886(var_17_bool, "quest_d1_03", "butcher_death");
	object var_23_object;
	var_16_object = var_23_object;
	TaskCall(5);
	func_1213(var_23_object);
	TaskReturn();
}


// @pe
void func_937(void)
{
}


void func_1835(object var_15_object)
{
	object var_17_object;
	@self(var_17_object);
	var_17_object = var_15_object;
}
EMIT "Stack[-1] = 0";


void func_939(bool var_496_bool)
{
	var_496_bool = true;
}


void func_941(int var_388_int)
{
	var_388_int = 1;
}


// @pe
void func_1196(bool var_26_bool, object var_27_object)
{
	object var_29_object;
	var_27_object = var_29_object;
	bool var_28_bool;
	func_1497(var_28_bool, var_29_object);
	var_28_bool = var_26_bool;
}


void func_943(float var_383_float)
{
	var_383_float = 0.5;
}


void func_1456(bool var_43_bool, object var_44_object)
{
	bool var_46_bool;
	var_44_object->IsDead(var_46_bool);
	var_46_bool = var_43_bool;
}


void func_1841(cvector var_47_cvector, cvector var_48_cvector)
{
	float var_56_float = sqrt(var_48_cvector | var_48_cvector);
	if(var_56_float < 0.000001)
		var_47_cvector = [0.0, 0.0, 0.0];
	var_47_cvector = var_48_cvector / var_56_float;
}


void func_1203(string var_206_string)
{
	var_206_string = "walk";
}


void func_821(bool var_307_bool)
{
	bool var_308_bool = false;
	bool var_309_bool;
	func_793(var_308_bool, var_309_bool);
	if(var_309_bool != 0) {
		bool var_326_bool;
		func_837(var_307_bool, var_308_bool, var_326_bool);
		if(var_326_bool != 0)
			var_308_bool = true;
	}
	if(var_308_bool != 0) {
		var_307_bool = true;
		return 0;
	}
	var_307_bool = false;
}


void func_1205(string var_207_string)
{
	var_207_string = "run";
}


void func_951(object var_2_object, bool var_137_bool, object var_138_object, float var_139_float, float var_140_float, bool var_141_bool, bool var_142_bool)
{
	object var_150_object;
	func_1898(var_150_object);
	@SetTimer(1, 5);
	bool var_148_bool;
	@CanSee(var_148_bool, var_150_object);
	if(var_148_bool != 0) {
		var_2_object = true;
		object var_154_object;
		var_138_object = var_154_object;
		func_1776(var_154_object);
	} else {
		var_2_object = false;
	}
	bool var_161_bool; object var_162_object;
	func_1366(var_161_bool, var_162_object);
	if(var_161_bool != 0) {
		object var_165_object;
		func_1835(var_165_object);
		@SendPlayerEnemy(var_162_object, var_165_object);
	}
	bool var_166_bool; object var_167_object; float var_168_float; float var_169_float; bool var_170_bool; bool var_171_bool;
	var_138_object = var_167_object;
	var_139_float = var_168_float;
	var_140_float = var_169_float;
	var_141_bool = var_170_bool;
	var_142_bool = var_171_bool;
	bool var_149_bool;
	func_1056(var_148_bool, var_149_bool, var_166_bool, var_167_object, var_168_float, var_169_float, var_170_bool, var_171_bool);
	var_166_bool = var_149_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_149_bool = var_137_bool;
	
}


void func_1461(bool var_32_bool, object var_33_object)
{
	if(var_33_object == null) {
		var_32_bool = false;
		return 4;
	}
	bool var_39_bool = false;
	var_42_bool = IsFuncExist(var_33_object, "IsDead", 1);
	if(var_42_bool != 0) {
		bool var_43_bool; object var_44_object;
		var_33_object = var_44_object;
		func_1456(var_43_bool, var_44_object);
		if(var_43_bool != 0)
			var_39_bool = true;
	}
	if(var_39_bool != 0) {
		var_32_bool = false;
		return 4;
	}
	object var_36_object;
	@GetScene(var_36_object);
	if(var_36_object == null) {
		var_32_bool = false;
		return 4;
	}
	object var_37_object;
	var_33_object->GetScene(var_37_object);
	if(var_36_object != var_37_object) {
		var_32_bool = false;
		return 4;
	}
	var_32_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1851(float var_444_float, float var_445_float, float var_446_float)
{
	if(var_445_float < var_446_float)
		var_445_float = var_444_float;
	else
		var_446_float = var_444_float;
	
}


// @pe
void func_1213(object var_23_object)
{
	object var_24_object;
	var_23_object = var_24_object;
	func_1222(var_24_object);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1727(void)
{
	bool var_140_bool;
	@CameraSwitchToNormal(true);
	bool var_142_bool;
	func_1943(var_142_bool);
	if(var_142_bool != 0) {
	} else {
		@HasAnimationTrack(var_140_bool, "head");
		if(var_140_bool == 0) goto Label_1744;
		@UnlookAsync("head");
	}
Label_1744:
	
}


// @pe
void func_1345(string var_434_string, int var_435_int)
{
	if(var_435_int == 2) {
		var_434_string = "fire";
		return 0;
	EMIT "GOTO 0x54d";
	}
	if(var_435_int == 1) {
		var_434_string = "bullet";
		return 0;
	}
	var_434_string = "phys";
}


// @pe
void func_1858(float var_454_float, float var_455_float, float var_456_float, float var_457_float)
{
	if(var_455_float < var_456_float) {
		var_456_float = var_454_float;
		return 0;
	}
	if(var_455_float > var_457_float) {
		var_457_float = var_454_float;
		return 0;
	}
	var_455_float = var_454_float;
}


void func_837(object var_0_object, bool var_4_bool, bool var_326_bool)
{
	object var_332_object; float var_334_float; cvector var_335_cvector; cvector var_336_cvector;
	@GetScene(var_332_object);
	bool var_333_bool = false;
	
	for(;;) {
		cvector var_337_cvector;
		func_1359(var_337_cvector, var_0_object);
		var_343_int = -var_337_cvector;
		@FindDirLength(var_334_float, var_343_int, var_4_bool);
		if(var_334_float < var_4_bool) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_335_cvector); //@t
				@GetPFPosition(var_336_cvector);
				@WaitForAnimEnd();
				func_925(var_336_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_333_bool = true;
				bool var_348_bool;
				func_793(var_336_cvector, var_348_bool);
				var_349_bool = !var_348_bool; //@nz
				if(var_349_bool == 0) goto Label_878;
		}
		for(;;) {
			var_333_bool = var_326_bool;

		}

	Label_878:
	}
}
EMIT "Stack[-5] = 0";


void func_1222(object var_24_object)
{
	cvector var_35_cvector; cvector var_36_cvector; cvector var_37_cvector; cvector var_38_cvector; string var_39_string; object var_40_object; bool var_41_bool; bool var_42_bool; float var_43_float; cvector var_44_cvector;
	if(var_24_object == null) {
		func_1313("fdie");
	} else {
		var_24_object->GetPosition(var_35_cvector);
		@GetPosition(var_36_cvector);
		@GetDirection(var_37_cvector);
		var_38_cvector = var_36_cvector - var_35_cvector;
		var_78_float = GetByIndex(var_38_cvector, 0);
		var_79_float = GetByIndex(var_37_cvector, 0);
		var_81_float = GetByIndex(var_38_cvector, 2);
		var_82_float = GetByIndex(var_37_cvector, 2);
		if(((var_78_float * var_79_float) + (var_81_float * var_82_float)) >= 0)
			var_39_string = "fdie";
		else
			var_39_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_24_object = var_40_object;
		var_89_bool = IsFuncExist(var_24_object, "GetScriptProperty", 2);
		if(var_89_bool != 0) {
			var_24_object->HasScriptProperty(var_41_bool, "Owner");
			if(var_41_bool != 0) {
				var_24_object->GetScriptProperty(var_40_object, "Owner");
				if(var_40_object == null)
					var_24_object = var_40_object;
			}
		}
		var_96_bool = IsFuncExist(var_40_object, "@GetEyesHeight", 1);
		if(var_96_bool != 0) {
			var_40_object->GetEyesHeight(var_43_float);
			var_44_cvector = [0.0, 0.0, 0.0];
			var_97_float = GetByIndex(var_44_cvector, 1);
			var_43_float = var_97_float;
			SetByIndex(var_44_cvector, 1) = var_97_float;
			@LookAsync(var_24_object, "head", var_44_cvector);
			var_42_bool = true;
		} else {
			var_42_bool = false;

		}
		string var_99_string;
		var_39_string = var_99_string;
		func_1794(var_99_string);
		@PlayAnimation("all", var_39_string);
		@WaitForAnimEnd();
		if(var_42_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_39_string);
		@RemoveEnvelope();
		var_40_object = null;
	}
	
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_88_object, object var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if(1 != 0) {
		func_132(var_89_object, "Neutral");
		var_0_object->SetMessage(505264); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(505265, -1, 5802); //@t
		var_0_object->AddReply(506042, -1, 6665); //@t
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	bool var_119_bool;
	func_1943(var_119_bool);
	if(var_119_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1745(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_131;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_131:
		return 0;

	}
	
}


void func_586(object var_0_object, object var_1_object, bool var_355_bool, float var_356_float)
{
	string var_364_string;
	func_925(var_364_string);
	int var_361_int;
	@irand(var_361_int, var_1_object);
	@Face(var_0_object);
	@SetAttackState(true);
	func_1907();
	@PlayAnimation("all", ("attack_begin" + (var_361_int + 1)));
	@WaitForAnimEnd();
	int var_363_int;
	func_893(var_363_int, var_364_string);
	bool var_389_bool;
	func_1497(var_389_bool, var_0_object);
	if(!var_389_bool) { //@nz
		@StopAsync();
		var_355_bool = false;
		return 8;
	}
	float var_392_float; int var_393_int;
	var_356_float = var_392_float;
	var_361_int = var_393_int;
	func_547(var_364_string, var_392_float, var_393_int);
	bool var_362_bool;
	@HasAnimation(var_362_bool, "all", ("attack_middle" + var_361_int));
	if(var_362_bool != 0) {
		func_1907();
		@PlayAnimation("all", ("attack_middle" + var_361_int));
		@WaitForAnimEnd();
		func_925(var_364_string);
		bool var_481_bool;
		func_1497(var_481_bool, var_0_object);
		if(!var_481_bool) { //@nz
			@StopAsync();
			var_355_bool = false;
			return 8;
		}
		float var_484_float; int var_485_int;
		var_356_float = var_484_float;
		func_547(var_364_string, var_484_float, var_485_int);
		var_363_int = 1;

		for(;;) {
			var_364_string = (("attack_middle" + var_485_int) + "_") + var_363_int;
			@HasAnimation(var_362_bool, "all", var_364_string);
			if(!var_362_bool) { //@nz
			} else {
				func_1907();
				@PlayAnimation("all", var_364_string);
				@WaitForAnimEnd();
				func_925(var_364_string);
				bool var_507_bool;
				func_1497(var_507_bool, var_0_object);
				if(!var_507_bool) { //@nz
					@StopAsync();
					var_355_bool = false;
					return 8;
				}
				float var_510_float; int var_511_int;
				var_356_float = var_510_float;
				var_361_int = var_511_int;
				func_547(var_364_string, var_510_float, var_511_int);
				var_363_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_361_int));
		bool var_496_bool;
		func_939(var_496_bool);
		if(var_496_bool != 0) {
			bool var_497_bool;
			func_723(var_497_bool, 0.75);
			@StopAsync();
		}
		var_355_bool = true;
		return 8;

	}
}


void func_1869(float var_462_float)
{
	object var_464_object;
	@CreateFloatVector(var_464_object);
	var_464_object->add(var_462_float);
	if(var_462_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_464_object);
}
EMIT "Stack[-1] = 0";


void func_1359(cvector var_49_cvector, object var_50_object)
{
	cvector var_53_cvector;
	@GetPosition(var_53_cvector);
	cvector var_54_cvector;
	var_50_object->GetPosition(var_54_cvector);
	var_49_cvector = var_54_cvector - var_53_cvector;
}


void func_1745(string var_121_string)
{
	bool var_125_bool; float var_126_float; float var_127_float;
	@lshHasAnimation(var_125_bool, var_121_string);
	if(var_125_bool != 0) {
		@lshGetAnimTimes(var_121_string, var_126_float, var_127_float);
		@lshPlayAnimation(var_126_float, var_127_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_121_string);
	}
	
}


void func_723(bool var_497_bool, float var_498_float)
{
	float var_501_float; bool var_502_bool;
	@rand(var_501_float);
	if(var_501_float < var_498_float) {

		for(;;) {
			@IsAnimationPlaying(var_502_bool);
			if(!var_502_bool) { //@nz
			} else {
				bool var_505_bool;
				func_821(var_505_bool);
				if(var_505_bool != 0) {
					var_497_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_497_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_925(var_502_bool);
}


void func_1366(bool var_161_bool, object var_162_object)
{
	bool var_164_bool;
	@IsPlayerActor(var_162_object, var_164_bool);
	var_164_bool = var_161_bool;
}


void func_1497(bool var_28_bool, object var_29_object)
{
	object var_33_object;
	var_29_object = var_33_object;
	bool var_32_bool;
	func_1461(var_32_bool, var_33_object);
	if(!var_32_bool) { //@nz
		var_28_bool = false;
		return 2;
	}
	bool var_50_bool; object var_51_object;
	func_1371(var_50_bool, var_51_object, "noaccess");
	if(!var_50_bool) { //@nz
		var_28_bool = true;
		return 2;
	}
	int var_31_int;
	var_51_object->GetProperty("noaccess", var_31_int);
	var_28_bool = var_31_int == 0;
}


void func_1371(bool var_50_bool, object var_51_object, string var_52_string)
{
	var_57_bool = IsFuncExist(var_51_object, "HasProperty", 2);
	if(!var_57_bool) { //@nz
		var_50_bool = false;
		return 2;
	}
	bool var_54_bool;
	var_51_object->HasProperty(var_52_string, var_54_bool);
	var_54_bool = var_50_bool;
}


void func_1886(bool var_17_bool, string var_18_string, string var_19_string)
{
	object var_21_object;
	@FindActor(var_21_object, var_18_string);
	if(var_21_object == null)
		var_17_bool = false;
	@Trigger(var_21_object, var_19_string);
	var_17_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1761(string var_99_string, bool var_100_bool)
{
	bool var_106_bool; float var_107_float; float var_108_float;
	@lshHasAnimation(var_106_bool, var_99_string);
	if(var_106_bool != 0) {
		@lshGetAnimTimes(var_99_string, var_107_float, var_108_float);
		@lshPlayAnimation(var_107_float, var_108_float, var_100_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_99_string);
	}
	
}


void func_1633(object var_21_object, cvector var_24_cvector, cvector var_25_cvector)
{
	object var_28_object;
	@GetScene(var_28_object);
	object var_29_object;
	@AddActorByType(var_29_object, "scripted", var_28_object, var_24_cvector, var_25_cvector, "blood_dir.xml");
	object var_32_object;
	var_21_object = var_32_object;
	func_1521(var_32_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1383(float var_406_float, object var_407_object, float var_408_float, int var_409_int)
{
	int var_419_int; int var_421_int;
	object var_426_object;
	var_407_object = var_426_object;
	bool var_425_bool;
	func_1371(var_425_bool, var_426_object, "health");
	if(!var_425_bool) //@nz
		var_406_float = 0.0;
	bool var_429_bool; object var_430_object;
	func_1371(var_429_bool, var_430_object, "armor");
	if(!var_429_bool) //@nz
		var_419_int = 0;
	else
		var_430_object->GetProperty("armor", var_419_int);
	string var_434_string; int var_435_int;
	var_409_int = var_435_int;
	func_1345(var_434_string, var_435_int);
	string var_420_string = "armor_" + var_434_string;
	bool var_440_bool; object var_441_object; string var_442_string;
	var_407_object = var_441_object;
	func_1371(var_440_bool, var_441_object, var_442_string);
	if(!var_440_bool) //@nz
		var_421_int = 0;
	else
		var_407_object->GetProperty(var_442_string, var_421_int);

	float var_444_float;
	func_1851(var_444_float, ((var_419_int + var_421_int) / 100.0), (float)1);
	float var_422_float;
	var_444_float = var_422_float;
	float var_423_float;
	var_407_object->GetProperty("health", var_423_float);
	float var_424_float = var_408_float * (1 - var_422_float);
	float var_454_float;
	func_1858(var_454_float, (var_423_float - var_424_float), (float)0, (float)1);
	var_407_object->SetProperty("health", var_454_float);
	bool var_460_bool; object var_461_object;
	var_407_object = var_461_object;
	func_1366(var_460_bool, var_461_object);
	if(var_460_bool != 0) {
		float var_462_float = -var_424_float;
		func_1869(var_462_float);
	}
	var_424_float = var_406_float;
	
}


void func_1898(object var_18_object)
{
	bool var_20_bool;
	@IsPlayerActor(var_18_object, var_20_bool);
	if(var_20_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_750(object var_0_object, bool var_294_bool, float var_295_float)
{
	bool var_301_bool; cvector var_302_cvector; cvector var_303_cvector; cvector var_304_cvector; float var_305_float;
	
	for(;;) {
		@IsAnimationPlaying(var_301_bool);
		if(!var_301_bool) //@nz
			break;
		bool var_307_bool;
		func_821(var_307_bool);
		if(var_307_bool != 0) {
			var_294_bool = true;
			return 10;
		}
		bool var_350_bool;
		func_1497(var_350_bool, var_0_object);
		if(!var_350_bool) { //@nz
			var_294_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_302_cvector); //@t
		@GetPFPosition(var_303_cvector);
		var_304_cvector = var_302_cvector - var_303_cvector;
		var_305_float = var_304_cvector | var_304_cvector;
		if(var_305_float < (var_295_float * var_295_float)) {
			bool var_355_bool; float var_356_float;
			var_295_float = var_356_float;
			func_586(var_304_cvector, var_305_float, var_355_bool, var_356_float);
			var_294_bool = true;
			return 10;
		}
		@sync();
	}
	func_925(var_305_float);
	var_294_bool = false;
}


void func_1647(object var_240_object)
{
	cvector var_244_cvector;
	var_240_object->GetPosition(var_244_cvector);
	cvector var_245_cvector;
	@GetPosition(var_245_cvector);
	cvector var_246_cvector = var_244_cvector - var_245_cvector;
	var_247_float = GetByIndex(var_246_cvector, 0);
	var_248_float = GetByIndex(var_246_cvector, 2);
	@RotateAsync(var_247_float, var_248_float);
}


void func_1776(object var_19_object)
{
	float var_22_float;
	var_19_object->GetEyesHeight(var_22_float);
	cvector var_23_cvector = [0.0, 0.0, 0.0];
	var_24_float = GetByIndex(var_23_cvector, 1);
	var_22_float = var_24_float;
	SetByIndex(var_23_cvector, 1) = var_24_float;
	@LookAsync(var_19_object, "head", var_23_cvector);
}


void func_1521(object var_32_object)
{
	string var_46_string;
	if(var_32_object == null)
		return 14;
	bool var_40_bool;
	@IsDead(var_40_bool);
	if(var_40_bool != 0)
		return 14;
	int var_41_int;
	@GetSecondaryAnimationType(var_41_int);
	if(var_41_int < 0)
		return 14;
	cvector var_42_cvector;
	var_32_object->GetPosition(var_42_cvector);
	cvector var_43_cvector;
	@GetPosition(var_43_cvector);
	cvector var_44_cvector;
	@GetDirection(var_44_cvector);
	cvector var_45_cvector = var_43_cvector - var_42_cvector;
	var_51_float = GetByIndex(var_45_cvector, 0);
	var_52_float = GetByIndex(var_44_cvector, 0);
	var_54_float = GetByIndex(var_45_cvector, 2);
	var_55_float = GetByIndex(var_44_cvector, 2);
	if(((var_51_float * var_52_float) + (var_54_float * var_55_float)) >= 0)
		var_46_string = "fhit";
	else
		var_46_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_46_string + "1"), (var_46_string + "2"), -10);
	
}


void func_882(object var_0_object, bool var_257_bool)
{
	bool var_259_bool;
	var_262_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_262_bool != 0) {
		var_0_object->IsAttacking(var_259_bool); //@t
		var_259_bool = var_257_bool;
	}
	var_257_bool = false;
}


void func_1907(void)
{
	object var_368_object;
	@GetScene(var_368_object);
	object var_370_object;
	func_1835(var_370_object);
	@BroadcastMessage("battle", var_370_object, var_368_object);
}
EMIT "Stack[-1] = 0";


void func_1014(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_1180(var_15_object);
}


void func_1658(bool var_27_bool, object var_28_object, float var_29_float)
{
	cvector var_40_cvector; bool var_47_bool;
	var_28_object->GetPosition(var_40_cvector);
	float var_39_float;
	var_28_object->GetEyesHeight(var_39_float);
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (var_48_float + var_39_float);
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	@GetEyesHeight(var_39_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	SetByIndex(var_41_cvector, 1) = (var_49_float + var_39_float);
	cvector var_42_cvector = var_40_cvector - var_41_cvector;
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (float)0;
	var_52_float = sqrt(var_42_cvector | var_42_cvector);
	var_42_cvector /= var_52_float;
	cvector var_43_cvector = -var_42_cvector;
	cvector var_54_cvector;
	func_1841(var_54_cvector, (var_43_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_44_cvector = ((var_42_cvector * var_29_float) + (var_54_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_46_bool;
	@IsOverrideActive(var_46_bool);
	if(var_46_bool != 0)
		var_27_bool = false;
	@StopWorld();
	@CameraTransit((var_41_cvector + var_44_cvector), var_43_cvector, true);
	var_68_float = GetByIndex(var_44_cvector, 0);
	var_69_float = GetByIndex(var_44_cvector, 2);
	@Rotate(var_68_float, var_69_float);
	bool var_70_bool;
	func_1943(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		@HasAnimationTrack(var_47_bool, "head");
		if(var_47_bool == 0) goto Label_1721;
		@LookAsyncCamera("head");
	}
Label_1721:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_27_bool = true;
	
}


void func_251(void)
{
	bool var_27_bool;
	func_1886(var_27_bool, "quest_d1_03", "butcher_battle");
	object var_26_object;
	@FindActor(var_26_object, "player");
	object var_34_object;
	object var_25_object;
	func_283(var_22_bool, var_23_float, var_24_int, var_25_object, var_34_object, var_34_object, true, 180.0);
	func_1945();
}
EMIT "Stack[-1] = 0";


void func_893(object var_2_object, bool var_5_bool)
{
	int var_377_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_bool != 0) {
		if((var_5_bool + -1) > 0)
			return 4;
	}
	float var_376_float;
	@rand(var_376_float);
	float var_383_float;
	func_943(var_383_float);
	if(var_376_float < var_383_float) {
		@irand(var_377_int, var_2_object);
		@Speak("attack" + (var_377_int + 1));
		int var_388_int;
		func_941(var_388_int);
		var_5_bool = var_388_int;
	}
}


void func_1918(int var_79_int)
{
	int var_81_int;
	@GetVariable("branch", var_81_int);
	if(var_81_int == 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x78d";
	}
	if(var_81_int == 1) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
}


