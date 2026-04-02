// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		if(1 != 0) {
			func_2008();
			if(var_19_object == 32266) {
				func_132(var_20_bool, "Neutral");
				var_0_object->SetMessage(530939); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530940, -1, 32267); //@t
				var_0_object->AddReply(530966, -1, 32287); //@t
				return 0;
			}
			var_3_string = true;
			bool var_49_bool;
			func_2248(var_49_bool);
			if(var_49_bool != 0)
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
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
	
		while(true != 0) {
			func_304(var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, (float)300, (float)100);
		}
	
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		func_369(var_18_object, var_19_bool);
		bool var_23_bool;
		func_2250(var_23_bool);
		if(var_23_bool != 0) {
			object var_28_object;
			var_19_bool = var_28_object;
			TaskCall(3);
			func_469(var_28_object);
			TaskReturn();
		}
		int var_531_int; object var_532_object;
		var_19_bool = var_532_object;
		TaskCall(0);
		func_0(var_533_object, var_531_int, var_532_object);
		TaskReturn();
		bool var_661_bool;
		func_2107(var_661_bool, "quest_b1_05", "attack");
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		bool var_20_bool = false;
		bool var_21_bool;
		func_2250(var_21_bool);
		if(var_21_bool != 0) {
			bool var_26_bool; object var_27_object;
			var_19_bool = var_27_object;
			func_1582(var_26_bool, var_27_object);
			if(var_26_bool != 0)
				var_20_bool = true;
		}
		if(var_20_bool != 0) {
			bool var_30_bool;
			func_2107(var_30_bool, "quest_b1_05", "attack");
		}
	}

	// @pe
	void OnHear(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		bool var_20_bool = false;
		bool var_21_bool;
		func_2250(var_21_bool);
		if(var_21_bool != 0) {
			bool var_26_bool; object var_27_object;
			var_19_bool = var_27_object;
			func_1582(var_26_bool, var_27_object);
			if(var_26_bool != 0)
				var_20_bool = true;
		}
		if(var_20_bool != 0) {
			bool var_30_bool;
			func_2107(var_30_bool, "quest_b1_05", "attack");
		}
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		bool var_20_bool;
		func_2107(var_20_bool, "quest_b1_05", "attack");
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, string var_10_string, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_20_object; object var_21_object;
		if(var_19_bool == "attack") {
			func_369(var_20_object, var_21_object);
			func_2257();
			@FindActor(var_21_object, "player");
			bool var_30_bool; object var_31_object;
			var_21_object = var_31_object;
			func_1713(var_30_bool, var_31_object);
			if(var_30_bool != 0) {
				object var_64_object;
				var_21_object = var_64_object;
				TaskCall(3);
				func_469(var_64_object);
				TaskReturn();
			}
			var_21_object = null;
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		if(var_19_bool == 10) {
			bool var_22_bool;
			func_331(var_17_bool, var_18_object, var_19_bool, var_22_bool);
			if(var_22_bool != 0) {
				if(!var_2_object) { //@nz
					func_1997(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, int var_19_int)
	{
		if(var_19_int == 1) {
			func_2119(var_1_object);
		} else {
			int var_27_int;
			func_1356(var_18_bool, var_27_int, var_27_int);
		}
	
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
	{
		bool var_20_bool = false;
		if(var_1_object == var_19_object) {
			if(!var_2_object) //@nz
				var_20_bool = true;
		}
		if(var_20_bool != 0) {
			var_2_object = true;
			object var_23_object;
			var_19_object = var_23_object;
			func_1997(var_23_object);
		}
	}

	// @pe
	void OnStopSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
	{
		bool var_20_bool = false;
		if(var_1_object == var_19_object) {
			if(var_2_object != 0)
				var_20_bool = true;
		}
		if(var_20_bool != 0) {
			var_2_object = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
	{
		@RequestClearPath(var_19_object);
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
	{
		func_1212(var_19_object);
		object var_24_object;
		var_19_object = var_24_object;
		func_2312();
	}

}


task task_5
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
	{
		bool var_21_bool;
		@IsOverrideActive(var_21_bool);
		if(!var_21_bool) { //@nz
			object var_23_object;
			var_19_object = var_23_object;
			func_2186(var_23_object);
		}
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object, int var_20_int, float var_21_float, float var_22_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object, string var_20_string)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
	{
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object, int var_20_int, float var_21_float, float var_22_float)
{
	object var_23_object;
	var_19_object = var_23_object;
	int var_24_int;
	var_20_int = var_24_int;
	float var_25_float;
	var_21_float = var_25_float;
	func_1781(var_23_object, var_24_int, var_25_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object, int var_20_int, float var_21_float, float var_22_float, cvector var_23_cvector, cvector var_24_cvector)
{
	object var_25_object;
	var_19_object = var_25_object;
	int var_26_int;
	var_20_int = var_26_int;
	float var_27_float;
	var_21_float = var_27_float;
	cvector var_28_cvector;
	var_23_cvector = var_28_cvector;
	cvector var_29_cvector;
	var_24_cvector = var_29_cvector;
	func_1849(var_27_float, var_28_cvector, var_29_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object, string var_20_string)
{
	float var_22_float;
	if(var_20_string == "health") {
		@GetProperty("health", var_22_float);
		if(var_22_float <= 0)
			@SignalDeath(var_19_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
{
	object var_20_object;
	var_19_object = var_20_object;
	func_2262(var_20_object);
}


void func_0(object var_0_object, int var_531_int, object var_532_object)
{
	var_0_object = var_532_object;
	bool var_542_bool; object var_543_object;
	var_532_object = var_543_object;
	func_1879(var_542_bool, var_543_object, 70.0);
	if(!var_542_bool) { //@nz
		var_531_int = -2;
		return 8;
	}
	object var_538_object;
	@CreateDialog(var_538_object);
	int var_590_int;
	func_2242(var_590_int);
	var_538_object->SetNPCName(var_590_int);
	int var_591_int;
	func_2240(var_591_int);
	var_538_object->SetNPCDescription(var_591_int);
	string var_592_string;
	func_2244(var_592_string);
	var_538_object->SetPhoto(var_592_string);
	string var_593_string;
	func_2246(var_593_string);
	var_538_object->SetPhoto2(var_593_string);
	int var_594_int;
	func_2163(var_594_int);
	var_538_object->SetPlayerName(var_594_int);
	bool var_539_bool;
	@IsOverrideActive(var_539_bool);
	if(var_539_bool != 0) {
		var_531_int = -2;
		return 8;
	}
	@DoDialog(var_538_object);
	object var_603_object; object var_604_object;
	var_532_object = var_603_object;
	var_538_object = var_604_object;
	TaskCall(1);
	func_74(var_605_object, var_606_object, var_607_string, var_608_bool, var_603_object, var_604_object);
	TaskReturn();
	bool var_541_bool;
	var_538_object->IsDialogEnd(var_541_bool);
	
	for(;;) {
		var_652_bool = !var_541_bool; //@nz
		if(var_652_bool == 0) goto Label_63;
		@sync();
		var_538_object->IsDialogEnd(var_541_bool);
	}
	
Label_63:
	object var_653_object;
	var_532_object = var_653_object;
	func_1948();
	@StopDialog(var_538_object);
	var_538_object->GetReturnValue(-1);
	int var_540_int = var_531_int;
}
EMIT "Stack[-4] = 0";


void func_1025(bool var_312_bool)
{
	bool var_313_bool = false;
	bool var_314_bool;
	func_997(var_313_bool, var_314_bool);
	if(var_314_bool != 0) {
		bool var_331_bool;
		func_1041(var_312_bool, var_313_bool, var_331_bool);
		if(var_331_bool != 0)
			var_313_bool = true;
	}
	if(var_313_bool != 0) {
		var_312_bool = true;
		return 0;
	}
	var_312_bool = false;
}


void func_2056(object var_23_object)
{
	object var_25_object;
	@self(var_25_object);
	var_25_object = var_23_object;
}
EMIT "Stack[-1] = 0";


void func_2062(cvector var_51_cvector, cvector var_52_cvector)
{
	float var_60_float = sqrt(var_52_cvector | var_52_cvector);
	if(var_60_float < 0.000001)
		var_51_cvector = [0.0, 0.0, 0.0];
	var_51_cvector = var_52_cvector / var_60_float;
}


void func_1041(object var_0_object, bool var_4_bool, bool var_331_bool)
{
	object var_337_object; float var_339_float; cvector var_340_cvector; cvector var_341_cvector;
	@GetScene(var_337_object);
	bool var_338_bool = false;
	
	for(;;) {
		cvector var_342_cvector;
		func_1567(var_342_cvector, var_0_object);
		var_348_int = -var_342_cvector;
		@FindDirLength(var_339_float, var_348_int, var_4_bool);
		if(var_339_float < var_4_bool) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_340_cvector); //@t
				@GetPFPosition(var_341_cvector);
				@WaitForAnimEnd();
				func_1129(var_341_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_338_bool = true;
				bool var_353_bool;
				func_997(var_341_cvector, var_353_bool);
				var_354_bool = !var_353_bool; //@nz
				if(var_354_bool == 0) goto Label_1082;
		}
		for(;;) {
			var_338_bool = var_331_bool;

		}

	Label_1082:
	}
}
EMIT "Stack[-5] = 0";


// @pe
void func_1553(string var_439_string, int var_440_int)
{
	if(var_440_int == 2) {
		var_439_string = "fire";
		return 0;
	EMIT "GOTO 0x61d";
	}
	if(var_440_int == 1) {
		var_439_string = "bullet";
		return 0;
	}
	var_439_string = "phys";
}


// @pe
void func_2072(float var_449_float, float var_450_float, float var_451_float)
{
	if(var_450_float < var_451_float)
		var_450_float = var_449_float;
	else
		var_451_float = var_449_float;
	
}


void func_1567(cvector var_53_cvector, object var_54_object)
{
	cvector var_57_cvector;
	@GetPosition(var_57_cvector);
	cvector var_58_cvector;
	var_54_object->GetPosition(var_58_cvector);
	var_53_cvector = var_58_cvector - var_57_cvector;
}


// @pe
void func_2079(float var_459_float, float var_460_float, float var_461_float, float var_462_float)
{
	if(var_460_float < var_461_float) {
		var_461_float = var_459_float;
		return 0;
	}
	if(var_460_float > var_462_float) {
		var_462_float = var_459_float;
		return 0;
	}
	var_460_float = var_459_float;
}


void func_1574(float var_26_float, object var_27_object)
{
	cvector var_31_cvector;
	@GetPosition(var_31_cvector);
	cvector var_32_cvector;
	var_27_object->GetPosition(var_32_cvector);
	var_26_float = (var_32_cvector - var_31_cvector) | (var_32_cvector - var_31_cvector);
}


void func_2090(float var_467_float)
{
	object var_469_object;
	@CreateFloatVector(var_469_object);
	var_469_object->add(var_467_float);
	if(var_467_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_469_object);
}
EMIT "Stack[-1] = 0";


void func_1582(bool var_166_bool, object var_167_object)
{
	bool var_169_bool;
	@IsPlayerActor(var_167_object, var_169_bool);
	var_169_bool = var_166_bool;
}


void func_1587(bool var_54_bool, object var_55_object, string var_56_string)
{
	var_61_bool = IsFuncExist(var_55_object, "HasProperty", 2);
	if(!var_61_bool) { //@nz
		var_54_bool = false;
		return 2;
	}
	bool var_58_bool;
	var_55_object->HasProperty(var_56_string, var_58_bool);
	var_58_bool = var_54_bool;
}


void func_2107(bool var_20_bool, string var_21_string, string var_22_string)
{
	object var_24_object;
	@FindActor(var_24_object, var_21_string);
	if(var_24_object == null)
		var_20_bool = false;
	@Trigger(var_24_object, var_22_string);
	var_20_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1086(object var_0_object, bool var_262_bool)
{
	bool var_264_bool;
	var_267_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_267_bool != 0) {
		var_0_object->IsAttacking(var_264_bool); //@t
		var_264_bool = var_262_bool;
	}
	var_262_bool = false;
}


void func_1599(float var_411_float, object var_412_object, float var_413_float, int var_414_int)
{
	int var_424_int; int var_426_int;
	object var_431_object;
	var_412_object = var_431_object;
	bool var_430_bool;
	func_1587(var_430_bool, var_431_object, "health");
	if(!var_430_bool) //@nz
		var_411_float = 0.0;
	bool var_434_bool; object var_435_object;
	func_1587(var_434_bool, var_435_object, "armor");
	if(!var_434_bool) //@nz
		var_424_int = 0;
	else
		var_435_object->GetProperty("armor", var_424_int);
	string var_439_string; int var_440_int;
	var_414_int = var_440_int;
	func_1553(var_439_string, var_440_int);
	string var_425_string = "armor_" + var_439_string;
	bool var_445_bool; object var_446_object; string var_447_string;
	var_412_object = var_446_object;
	func_1587(var_445_bool, var_446_object, var_447_string);
	if(!var_445_bool) //@nz
		var_426_int = 0;
	else
		var_412_object->GetProperty(var_447_string, var_426_int);

	float var_449_float;
	func_2072(var_449_float, ((var_424_int + var_426_int) / 100.0), (float)1);
	float var_427_float;
	var_449_float = var_427_float;
	float var_428_float;
	var_412_object->GetProperty("health", var_428_float);
	float var_429_float = var_413_float * (1 - var_427_float);
	float var_459_float;
	func_2079(var_459_float, (var_428_float - var_429_float), (float)0, (float)1);
	var_412_object->SetProperty("health", var_459_float);
	bool var_465_bool; object var_466_object;
	var_412_object = var_466_object;
	func_1582(var_465_bool, var_466_object);
	if(var_465_bool != 0) {
		float var_467_float = -var_429_float;
		func_2090(var_467_float);
	}
	var_429_float = var_411_float;
	
}


void func_2119(object var_22_object)
{
	bool var_24_bool;
	@IsPlayerActor(var_22_object, var_24_bool);
	if(var_24_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1097(object var_2_object, int var_5_int)
{
	int var_382_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_int != 0) {
		if((var_5_int + -1) > 0)
			return 4;
	}
	float var_381_float;
	@rand(var_381_float);
	float var_388_float;
	func_1147(var_388_float);
	if(var_381_float < var_388_float) {
		@irand(var_382_int, var_2_object);
		@Speak("attack" + (var_382_int + 1));
		int var_393_int;
		func_1145(var_393_int);
		var_5_int = var_393_int;
	}
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_603_object, object var_604_object)
{
	var_0_object = var_604_object;
	var_1_object = var_603_object;
	var_3_string = false;
	if(1 != 0) {
		func_132(var_604_object, "Neutral");
		var_0_object->SetMessage(530939); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(530940, -1, 32267); //@t
		var_0_object->AddReply(530966, -1, 32287); //@t
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	bool var_634_bool;
	func_2248(var_634_bool);
	if(var_634_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1966(var_2_object);
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


void func_2128(void)
{
	object var_373_object;
	@GetScene(var_373_object);
	object var_375_object;
	func_2056(var_375_object);
	@BroadcastMessage("battle", var_375_object, var_373_object);
}
EMIT "Stack[-1] = 0";


void func_2139(string var_51_string, int var_52_int)
{
	string var_54_string = "idle";
	if(var_52_int != 0)
		var_54_string += var_52_int;
	var_54_string = var_51_string;
}


void func_2146(int var_45_int)
{
	int var_48_int; bool var_49_bool;
	var_48_int = 0;
	
	for(;;) {
		string var_51_string; int var_52_int;
		var_48_int = var_52_int;
		func_2139(var_51_string, var_52_int);
		@HasAnimation(var_49_bool, "all", var_51_string);
		if(!var_49_bool) //@nz
			break;
		var_48_int += 1;
	}
	var_48_int = var_45_int;
}


void func_1129(object var_0_object)
{
	func_2119(var_0_object);
}


void func_1134(int var_476_int)
{
	var_476_int = 0;
}


void func_1136(void)
{
	func_2015("attack_stay");
}


void func_2163(int var_594_int)
{
	int var_596_int;
	@GetVariable("branch", var_596_int);
	if(var_596_int == 0) {
		var_594_int = 1;
		return 2;
	EMIT "GOTO 0x882";
	}
	if(var_596_int == 1) {
		var_594_int = 2;
		return 2;
	}
	var_594_int = 3;
}


// @pe
void func_1141(void)
{
}


void func_1143(bool var_501_bool)
{
	var_501_bool = true;
}


void func_1145(int var_393_int)
{
	var_393_int = 1;
}


void func_1147(float var_388_float)
{
	var_388_float = 0.5;
}


void func_1149(object var_2_object, bool var_142_bool, object var_143_object, float var_144_float, float var_145_float, bool var_146_bool, bool var_147_bool)
{
	object var_155_object;
	func_2119(var_155_object);
	@SetTimer(1, 5);
	bool var_153_bool;
	@CanSee(var_153_bool, var_155_object);
	if(var_153_bool != 0) {
		var_2_object = true;
		object var_159_object;
		var_143_object = var_159_object;
		func_1997(var_159_object);
	} else {
		var_2_object = false;
	}
	bool var_166_bool; object var_167_object;
	func_1582(var_166_bool, var_167_object);
	if(var_166_bool != 0) {
		object var_170_object;
		func_2056(var_170_object);
		@SendPlayerEnemy(var_167_object, var_170_object);
	}
	bool var_171_bool; object var_172_object; float var_173_float; float var_174_float; bool var_175_bool; bool var_176_bool;
	var_143_object = var_172_object;
	var_144_float = var_173_float;
	var_145_float = var_174_float;
	var_146_bool = var_175_bool;
	var_147_bool = var_176_bool;
	bool var_154_bool;
	func_1254(var_153_bool, var_154_bool, var_171_bool, var_172_object, var_173_float, var_174_float, var_175_bool, var_176_bool);
	var_171_bool = var_154_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_154_bool = var_142_bool;
	
}


// @pe
void func_132(object var_2_object, string var_610_string)
{
	bool var_611_bool;
	func_2248(var_611_bool);
	if(!var_611_bool) //@nz
		return 0;
	if(var_610_string == var_2_object)
		return 0;
	string var_614_string; bool var_615_bool;
	var_610_string = var_614_string;
	if(var_610_string == "")
		var_615_bool = false;
	else
		var_615_bool = true;
	func_1982(var_614_string, var_615_bool);
	var_2_object = var_610_string;
	
}


void func_2180(int var_26_int)
{
	int var_28_int;
	@GetVariable("branch", var_28_int);
	var_28_int = var_26_int;
}


void func_1672(bool var_47_bool, object var_48_object)
{
	bool var_50_bool;
	var_48_object->IsDead(var_50_bool);
	var_50_bool = var_47_bool;
}


// @pe
void func_2186(object var_23_object)
{
	int var_24_int;
	func_2180(var_24_int);
	if(var_24_int == 1)
		@WorkWithCorpse(var_23_object);
	else
		@Barter(var_23_object);
	
}


void func_1677(bool var_36_bool, object var_37_object)
{
	if(var_37_object == null) {
		var_36_bool = false;
		return 4;
	}
	bool var_43_bool = false;
	var_46_bool = IsFuncExist(var_37_object, "IsDead", 1);
	if(var_46_bool != 0) {
		bool var_47_bool; object var_48_object;
		var_37_object = var_48_object;
		func_1672(var_47_bool, var_48_object);
		if(var_47_bool != 0)
			var_43_bool = true;
	}
	if(var_43_bool != 0) {
		var_36_bool = false;
		return 4;
	}
	object var_40_object;
	@GetScene(var_40_object);
	if(var_40_object == null) {
		var_36_bool = false;
		return 4;
	}
	object var_41_object;
	var_37_object->GetScene(var_41_object);
	if(var_40_object != var_41_object) {
		var_36_bool = false;
		return 4;
	}
	var_36_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2199(string var_32_string)
{
	object var_36_object;
	@CreateInvItem(var_36_object);
	var_36_object->SetItemName(var_32_string);
	var_36_object->SetProperty("Organ", 1);
	int var_37_int;
	var_36_object->GetItemID(var_37_int);
	bool var_38_bool;
	@AddItem(var_38_bool, var_36_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_2216(void)
{
	int var_26_int;
	func_2180(var_26_int);
	if(var_26_int != 1) {
	}
	func_2199("liver");
	func_2199("kidney");
	func_2199("heart");
	func_2199("blood");
}


void func_1713(bool var_32_bool, object var_33_object)
{
	object var_37_object;
	var_33_object = var_37_object;
	bool var_36_bool;
	func_1677(var_36_bool, var_37_object);
	if(!var_36_bool) { //@nz
		var_32_bool = false;
		return 2;
	}
	bool var_54_bool; object var_55_object;
	func_1587(var_54_bool, var_55_object, "noaccess");
	if(!var_54_bool) { //@nz
		var_32_bool = true;
		return 2;
	}
	int var_35_int;
	var_55_object->GetProperty("noaccess", var_35_int);
	var_32_bool = var_35_int == 0;
}


void func_1212(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_1378(var_19_object);
}


void func_2240(int var_591_int)
{
	var_591_int = 515572;
}


void func_2242(int var_590_int)
{
	var_590_int = 504031;
}


void func_2244(string var_592_string)
{
	var_592_string = "ui/NPC_Citizen2.png";
}


void func_2246(string var_593_string)
{
	var_593_string = "ui/NPC_Citizen2_b.png";
}


void func_2248(bool var_585_bool)
{
	var_585_bool = false;
}


void func_1737(object var_36_object)
{
	string var_50_string;
	if(var_36_object == null)
		return 14;
	bool var_44_bool;
	@IsDead(var_44_bool);
	if(var_44_bool != 0)
		return 14;
	int var_45_int;
	@GetSecondaryAnimationType(var_45_int);
	if(var_45_int < 0)
		return 14;
	cvector var_46_cvector;
	var_36_object->GetPosition(var_46_cvector);
	cvector var_47_cvector;
	@GetPosition(var_47_cvector);
	cvector var_48_cvector;
	@GetDirection(var_48_cvector);
	cvector var_49_cvector = var_47_cvector - var_46_cvector;
	var_55_float = GetByIndex(var_49_cvector, 0);
	var_56_float = GetByIndex(var_48_cvector, 0);
	var_58_float = GetByIndex(var_49_cvector, 2);
	var_59_float = GetByIndex(var_48_cvector, 2);
	if(((var_55_float * var_56_float) + (var_58_float * var_59_float)) >= 0)
		var_50_string = "fhit";
	else
		var_50_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_50_string + "1"), (var_50_string + "2"), -10);
	
}


void func_2250(bool var_21_bool)
{
	int var_23_int;
	@GetVariable("b1q05ToAttack1", var_23_int);
	var_21_bool = var_23_int != 0;
}


void func_716(object var_1_object, object var_2_object, bool var_4_bool)
{
	bool var_99_bool; bool var_100_bool; cvector var_101_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_99_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_99_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_100_bool, ("attack" + (var_2_object + 1)));
			if(!var_100_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_101_cvector, "all", "bjump");
		var_115_float = GetByIndex(var_101_cvector, 2);
		var_4_bool = -var_115_float;

	}
}


void func_2257(void)
{
	@SetVariable("b1q05ToAttack1", 1);
}


void func_2262(object var_20_object)
{
	object var_22_object;
	@GetScene(var_22_object);
	object var_23_object;
	func_2056(var_23_object);
	var_22_object->RemoveStationaryActor(var_23_object);
	func_2216();
	object var_46_object;
	var_20_object = var_46_object;
	TaskCall(5);
	func_1405(var_46_object);
	TaskReturn();
}
EMIT "Stack[-1] = 0";


void func_1254(object var_0_object, object var_1_object, bool var_171_bool, object var_172_object, float var_173_float, float var_174_float, bool var_175_bool, bool var_176_bool)
{
	bool var_185_bool; object var_187_object; cvector var_188_cvector; cvector var_189_cvector; float var_191_float; object var_192_object;
	var_0_object = false;
	var_1_object = var_172_object;
	bool var_186_bool;
	var_176_bool = var_186_bool;
	
	for(;;) {
		bool var_193_bool; object var_194_object;
		var_172_object = var_194_object;
		func_1394(var_193_bool, var_194_object);
		if(!var_193_bool) { //@nz
			var_171_bool = false;
			return 16;
		}
		var_172_object->GetPosition(var_188_cvector);
		@GetPosition(var_189_cvector);
		var_191_float = (var_188_cvector - var_189_cvector) | (var_188_cvector - var_189_cvector);
		bool var_198_bool = false;
		if(var_174_float > 0) {
			if(var_191_float > (var_174_float * var_174_float))
				var_198_bool = true;
		}
		if(var_198_bool != 0) {
			@Stop();
			var_171_bool = false;
			return 16;
		}
		if(var_191_float > (var_173_float * var_173_float)) {
			var_172_object->GetPFPosition(var_188_cvector);
			@FindPathTo(var_192_object, var_188_cvector);
			if(var_192_object != null) {
				var_192_object = var_187_object;
				var_192_object = null;
			}
			if(var_187_object != null) {
				if(var_186_bool == 0) goto Label_1307;
				var_186_bool = false;
				@RotatePath(var_187_object, var_185_bool);
				if(!var_185_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_211_string;
						func_1401(var_211_string);
						string var_212_string;
						func_1403(var_212_string);
						@FollowPath(var_187_object, var_175_bool, var_185_bool, var_211_string, var_212_string);
						if(!var_185_bool) { //@nz
							if(var_0_object == 0) goto Label_1326;
							var_187_object = null;
						}
					EMIT "GOTO 0x52f";

					Label_1326:
						} else {
					var_187_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_185_bool);
					if(!var_185_bool) { //@nz
						if(var_0_object != 0) {
							var_187_object = null;
							goto Label_1354;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1354;
		}
			var_192_object = null;
			goto Label_1352;

		Label_1352:
			var_187_object = null;

		}
	Label_1354:
		for(;;) {
			var_171_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_751(object var_0_object, float var_397_float, int var_398_int)
{
	object var_402_object; float var_403_float; float var_404_float;
	@GetVictim((var_397_float * 0.9), var_402_object);
	@ReportAttack(var_0_object);
	if(var_402_object == var_0_object) {
		float var_408_float; object var_409_object; int var_410_int;
		var_402_object = var_409_object;
		var_398_int = var_410_int;
		func_481(var_410_int);
		var_408_float = var_403_float;
		float var_411_float; object var_412_object; float var_413_float; int var_414_int;
		var_402_object = var_412_object;
		int var_415_int; object var_416_object; int var_417_int;
		var_402_object = var_416_object;
		var_398_int = var_417_int;
		func_484(var_417_int);
		var_415_int = var_414_int;
		func_1599(var_411_float, var_412_object, var_413_float, var_414_int);
		var_411_float = var_404_float;
		int var_476_int;
		func_1134(var_476_int);
		@ReportHit(var_0_object, var_476_int, var_404_float, var_413_float);
		object var_477_object; float var_478_float;
		var_402_object = var_477_object;
		var_404_float = var_478_float;
		func_1141();
	}
}
EMIT "Stack[-3] = 0";


void func_1781(object var_23_object, int var_24_int, float var_25_float)
{
	cvector var_35_cvector; object var_36_object; int var_37_int; bool var_38_bool; cvector var_39_cvector; cvector var_40_cvector;
	bool var_44_bool = false;
	bool var_45_bool = false;
	if(var_23_object != 0) {
		if(var_24_int != 4)
			var_45_bool = true;
	}
	if(var_45_bool != 0) {
		if(var_24_int != 5)
			var_44_bool = true;
	}
	if(var_44_bool != 0) {
		cvector var_51_cvector; cvector var_52_cvector;
		cvector var_53_cvector; object var_54_object;
		var_23_object = var_54_object;
		func_1567(var_53_cvector, var_54_object);
		var_53_cvector = var_52_cvector;
		func_2062(var_51_cvector, var_52_cvector);
		var_51_cvector = var_35_cvector;
		@CreateVectorVector(var_36_object);
		var_37_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_37_int), var_38_bool, var_39_cvector, var_40_cvector);
			if(!var_38_bool) { //@nz
				break;
			Label_1843:
				var_36_object = null;
	}
			object var_113_object;
			var_23_object = var_113_object;
			func_1737(var_113_object);
		}
		if((var_40_cvector | var_35_cvector) >= 0.70710677)
			var_36_object->add(var_39_cvector);
		var_37_int += 1;
	}
	int var_41_int;
	var_36_object->size(var_41_int);
	if(var_41_int == 0) goto Label_1843;
	int var_42_int;
	@irand(var_42_int, var_41_int);
	cvector var_43_cvector;
	var_36_object->get(var_43_cvector, var_42_int);
	object var_68_object; int var_69_int; float var_70_float; cvector var_71_cvector; cvector var_72_cvector;
	var_23_object = var_68_object;
	var_24_int = var_69_int;
	var_25_float = var_70_float;
	var_43_cvector = var_71_cvector;
	var_72_cvector = -var_35_cvector;
	func_1849(var_70_float, var_71_cvector, var_72_cvector);
}


void func_790(object var_0_object, object var_1_object, bool var_360_bool, float var_361_float)
{
	string var_369_string;
	func_1129(var_369_string);
	int var_366_int;
	@irand(var_366_int, var_1_object);
	@Face(var_0_object);
	@SetAttackState(true);
	func_2128();
	@PlayAnimation("all", ("attack_begin" + (var_366_int + 1)));
	@WaitForAnimEnd();
	int var_368_int;
	func_1097(var_368_int, var_369_string);
	bool var_394_bool;
	func_1713(var_394_bool, var_0_object);
	if(!var_394_bool) { //@nz
		@StopAsync();
		var_360_bool = false;
		return 8;
	}
	float var_397_float; int var_398_int;
	var_361_float = var_397_float;
	var_366_int = var_398_int;
	func_751(var_369_string, var_397_float, var_398_int);
	bool var_367_bool;
	@HasAnimation(var_367_bool, "all", ("attack_middle" + var_366_int));
	if(var_367_bool != 0) {
		func_2128();
		@PlayAnimation("all", ("attack_middle" + var_366_int));
		@WaitForAnimEnd();
		func_1129(var_369_string);
		bool var_486_bool;
		func_1713(var_486_bool, var_0_object);
		if(!var_486_bool) { //@nz
			@StopAsync();
			var_360_bool = false;
			return 8;
		}
		float var_489_float; int var_490_int;
		var_361_float = var_489_float;
		func_751(var_369_string, var_489_float, var_490_int);
		var_368_int = 1;

		for(;;) {
			var_369_string = (("attack_middle" + var_490_int) + "_") + var_368_int;
			@HasAnimation(var_367_bool, "all", var_369_string);
			if(!var_367_bool) { //@nz
			} else {
				func_2128();
				@PlayAnimation("all", var_369_string);
				@WaitForAnimEnd();
				func_1129(var_369_string);
				bool var_512_bool;
				func_1713(var_512_bool, var_0_object);
				if(!var_512_bool) { //@nz
					@StopAsync();
					var_360_bool = false;
					return 8;
				}
				float var_515_float; int var_516_int;
				var_361_float = var_515_float;
				var_366_int = var_516_int;
				func_751(var_369_string, var_515_float, var_516_int);
				var_368_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_366_int));
		bool var_501_bool;
		func_1143(var_501_bool);
		if(var_501_bool != 0) {
			bool var_502_bool;
			func_927(var_502_bool, 0.75);
			@StopAsync();
		}
		var_360_bool = true;
		return 8;

	}
}


// @pe
void func_304(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_20_float, float var_21_float)
{
	bool var_22_bool;
	func_1874(var_22_bool);
	if(!var_22_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_20_float;
	var_1_object = var_21_float;
	@SetTimer(10, 1.0);
	func_383();
	if(!false) //@nz
		@KillTimer(10);
}


void func_1849(object var_25_object, cvector var_28_cvector, cvector var_29_cvector)
{
	object var_32_object;
	@GetScene(var_32_object);
	object var_33_object;
	@AddActorByType(var_33_object, "scripted", var_32_object, var_28_cvector, var_29_cvector, "blood_dir.xml");
	object var_36_object;
	var_25_object = var_36_object;
	func_1737(var_36_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1863(object var_245_object)
{
	cvector var_249_cvector;
	var_245_object->GetPosition(var_249_cvector);
	cvector var_250_cvector;
	@GetPosition(var_250_cvector);
	cvector var_251_cvector = var_249_cvector - var_250_cvector;
	var_252_float = GetByIndex(var_251_cvector, 0);
	var_253_float = GetByIndex(var_251_cvector, 2);
	@RotateAsync(var_252_float, var_253_float);
}


void func_331(object var_0_object, object var_1_object, bool var_4_bool, bool var_22_bool)
{
	if(var_4_bool == null)
		var_22_bool = false;
	float var_26_float;
	func_1574(var_26_float, var_4_bool);
	float var_24_float = sqrt(var_26_float);
	if(var_2_object != 0)
		var_24_float -= var_1_object;
	var_22_bool = var_24_float < var_0_object;
}


// @pe
void func_1356(object var_0_object, object var_1_object, int var_27_int)
{
	if(var_27_int != 0)
		return 0;
	bool var_30_bool;
	func_1394(var_30_bool, var_1_object);
	if(!var_30_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_1874(bool var_22_bool)
{
	bool var_24_bool;
	@IsLoaded(var_24_bool);
	var_24_bool = var_22_bool;
}


void func_1879(bool var_542_bool, object var_543_object, float var_544_float)
{
	cvector var_555_cvector; bool var_562_bool;
	var_543_object->GetPosition(var_555_cvector);
	float var_554_float;
	var_543_object->GetEyesHeight(var_554_float);
	var_563_float = GetByIndex(var_555_cvector, 1);
	SetByIndex(var_555_cvector, 1) = (var_563_float + var_554_float);
	cvector var_556_cvector;
	@GetPosition(var_556_cvector);
	@GetEyesHeight(var_554_float);
	var_564_float = GetByIndex(var_556_cvector, 1);
	SetByIndex(var_556_cvector, 1) = (var_564_float + var_554_float);
	cvector var_557_cvector = var_555_cvector - var_556_cvector;
	var_565_float = GetByIndex(var_557_cvector, 1);
	SetByIndex(var_557_cvector, 1) = (float)0;
	var_567_float = sqrt(var_557_cvector | var_557_cvector);
	var_557_cvector /= var_567_float;
	cvector var_558_cvector = -var_557_cvector;
	cvector var_569_cvector;
	func_2062(var_569_cvector, (var_558_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_559_cvector = ((var_557_cvector * var_544_float) + (var_569_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_561_bool;
	@IsOverrideActive(var_561_bool);
	if(var_561_bool != 0)
		var_542_bool = false;
	@StopWorld();
	@CameraTransit((var_556_cvector + var_559_cvector), var_558_cvector, true);
	var_583_float = GetByIndex(var_559_cvector, 0);
	var_584_float = GetByIndex(var_559_cvector, 2);
	@Rotate(var_583_float, var_584_float);
	bool var_585_bool;
	func_2248(var_585_bool);
	if(var_585_bool != 0) {
	} else {
		@HasAnimationTrack(var_562_bool, "head");
		if(var_562_bool == 0) goto Label_1942;
		@LookAsyncCamera("head");
	}
Label_1942:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_542_bool = true;
	
}


void func_1378(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_369(object var_2_object, string var_3_string)
{
	func_464();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


// @pe
void func_1394(bool var_30_bool, object var_31_object)
{
	object var_33_object;
	var_31_object = var_33_object;
	bool var_32_bool;
	func_1713(var_32_bool, var_33_object);
	var_32_bool = var_30_bool;
}


void func_1401(string var_211_string)
{
	var_211_string = "walk";
}


void func_1403(string var_212_string)
{
	var_212_string = "run";
}


// @pe
void func_1405(object var_46_object)
{
	object var_47_object;
	var_46_object = var_47_object;
	func_1430(var_47_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_383(void)
{
	int var_38_int; int var_39_int; bool var_40_bool; float var_41_float; bool var_42_bool;
	@WaitForAnimEnd();
	bool var_43_bool;
	func_1874(var_43_bool);
	if(!var_43_bool) //@nz
		return 14;
	int var_45_int;
	func_2146(var_45_int);
	int var_36_int;
	var_45_int = var_36_int;
	int var_37_int = 0;
	
	for(;;) {
		bool var_58_bool = false;
		if(var_37_int < 5) {
			bool var_61_bool;
			func_1874(var_61_bool);
			if(var_61_bool != 0)
				var_58_bool = true;
		}
		if(var_58_bool != 0) {
			@irand(var_38_int, 3);
			if(var_38_int == 0) {
				if(var_36_int == 0) goto Label_430;
				@irand(var_39_int, var_36_int);
				string var_67_string; int var_68_int;
				var_39_int = var_68_int;
				func_2139(var_67_string, var_68_int);
				@PlayAnimation("all", var_67_string);
				@WaitForAnimEnd(var_40_bool);
				if(!var_40_bool) { //@nz
				} else {
			} else {
			if(var_38_int == 1) {
				@rand(var_41_float, 4);
				@Sleep((var_41_float + 1), var_42_bool);
				if(!var_42_bool) { //@nz
					goto Label_459;
				}
			} else if(var_37_int != 0) {
				goto Label_459;
			}
			}
					bool var_70_bool;
					func_462(var_70_bool);
					var_71_bool = !var_70_bool; //@nz
					if(var_71_bool == 0) goto Label_454;
			}
		}
	Label_459:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_454:
		@ResetAAS();
		var_37_int += 1;
	}
	
}


void func_1430(object var_47_object)
{
	cvector var_58_cvector; cvector var_59_cvector; cvector var_60_cvector; cvector var_61_cvector; string var_62_string; object var_63_object; bool var_64_bool; bool var_65_bool; float var_66_float; cvector var_67_cvector;
	if(var_47_object == null) {
		func_1521("fdie");
	} else {
		var_47_object->GetPosition(var_58_cvector);
		@GetPosition(var_59_cvector);
		@GetDirection(var_60_cvector);
		var_61_cvector = var_59_cvector - var_58_cvector;
		var_101_float = GetByIndex(var_61_cvector, 0);
		var_102_float = GetByIndex(var_60_cvector, 0);
		var_104_float = GetByIndex(var_61_cvector, 2);
		var_105_float = GetByIndex(var_60_cvector, 2);
		if(((var_101_float * var_102_float) + (var_104_float * var_105_float)) >= 0)
			var_62_string = "fdie";
		else
			var_62_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_47_object = var_63_object;
		var_112_bool = IsFuncExist(var_47_object, "GetScriptProperty", 2);
		if(var_112_bool != 0) {
			var_47_object->HasScriptProperty(var_64_bool, "Owner");
			if(var_64_bool != 0) {
				var_47_object->GetScriptProperty(var_63_object, "Owner");
				if(var_63_object == null)
					var_47_object = var_63_object;
			}
		}
		var_119_bool = IsFuncExist(var_63_object, "@GetEyesHeight", 1);
		if(var_119_bool != 0) {
			var_63_object->GetEyesHeight(var_66_float);
			var_67_cvector = [0.0, 0.0, 0.0];
			var_120_float = GetByIndex(var_67_cvector, 1);
			var_66_float = var_120_float;
			SetByIndex(var_67_cvector, 1) = var_120_float;
			@LookAsync(var_47_object, "head", var_67_cvector);
			var_65_bool = true;
		} else {
			var_65_bool = false;

		}
		string var_122_string;
		var_62_string = var_122_string;
		func_2015(var_122_string);
		@PlayAnimation("all", var_62_string);
		@WaitForAnimEnd();
		if(var_65_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_62_string);
		@RemoveEnvelope();
		var_63_object = null;
	}
	
}


void func_1948(void)
{
	bool var_655_bool;
	@CameraSwitchToNormal(true);
	bool var_657_bool;
	func_2248(var_657_bool);
	if(var_657_bool != 0) {
	} else {
		@HasAnimationTrack(var_655_bool, "head");
		if(var_655_bool == 0) goto Label_1965;
		@UnlookAsync("head");
	}
Label_1965:
	
}


void func_927(bool var_502_bool, float var_503_float)
{
	float var_506_float; bool var_507_bool;
	@rand(var_506_float);
	if(var_506_float < var_503_float) {

		for(;;) {
			@IsAnimationPlaying(var_507_bool);
			if(!var_507_bool) { //@nz
			} else {
				bool var_510_bool;
				func_1025(var_510_bool);
				if(var_510_bool != 0) {
					var_502_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_502_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1129(var_507_bool);
}


void func_1966(string var_636_string)
{
	bool var_640_bool; float var_641_float; float var_642_float;
	@lshHasAnimation(var_640_bool, var_636_string);
	if(var_640_bool != 0) {
		@lshGetAnimTimes(var_636_string, var_641_float, var_642_float);
		@lshPlayAnimation(var_641_float, var_642_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_636_string);
	}
	
}


void func_954(object var_0_object, bool var_299_bool, float var_300_float)
{
	bool var_306_bool; cvector var_307_cvector; cvector var_308_cvector; cvector var_309_cvector; float var_310_float;
	
	for(;;) {
		@IsAnimationPlaying(var_306_bool);
		if(!var_306_bool) //@nz
			break;
		bool var_312_bool;
		func_1025(var_312_bool);
		if(var_312_bool != 0) {
			var_299_bool = true;
			return 10;
		}
		bool var_355_bool;
		func_1713(var_355_bool, var_0_object);
		if(!var_355_bool) { //@nz
			var_299_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_307_cvector); //@t
		@GetPFPosition(var_308_cvector);
		var_309_cvector = var_307_cvector - var_308_cvector;
		var_310_float = var_309_cvector | var_309_cvector;
		if(var_310_float < (var_300_float * var_300_float)) {
			bool var_360_bool; float var_361_float;
			var_300_float = var_361_float;
			func_790(var_309_cvector, var_310_float, var_360_bool, var_361_float);
			var_299_bool = true;
			return 10;
		}
		@sync();
	}
	func_1129(var_310_float);
	var_299_bool = false;
}


void func_1982(string var_614_string, bool var_615_bool)
{
	bool var_621_bool; float var_622_float; float var_623_float;
	@lshHasAnimation(var_621_bool, var_614_string);
	if(var_621_bool != 0) {
		@lshGetAnimTimes(var_614_string, var_622_float, var_623_float);
		@lshPlayAnimation(var_622_float, var_623_float, var_615_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_614_string);
	}
	
}


void func_1997(object var_23_object)
{
	float var_26_float;
	var_23_object->GetEyesHeight(var_26_float);
	cvector var_27_cvector = [0.0, 0.0, 0.0];
	var_28_float = GetByIndex(var_27_cvector, 1);
	var_26_float = var_28_float;
	SetByIndex(var_27_cvector, 1) = var_28_float;
	@LookAsync(var_23_object, "head", var_27_cvector);
}


void func_462(bool var_70_bool)
{
	var_70_bool = true;
}


void func_464(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_469(object var_64_object)
{
	
	for(;;) {
		object var_71_object;
		func_487(var_67_int, var_68_bool, var_69_float, var_70_int, var_71_object, var_71_object, true, 180.0);
		@Sleep(1);
	}
}
EMIT "Return(); Pop(0)";


void func_2008(void)
{
	bool var_22_bool;
	func_2248(var_22_bool);
	if(var_22_bool != 0)
		@lshStopSpeech();
}


void func_2015(string var_70_string)
{
	bool var_79_bool; int var_80_int; bool var_81_bool; int var_82_int; bool var_83_bool; float var_84_float; cvector var_85_cvector; cvector var_86_cvector;
	@IsExisting3DSound(var_79_bool, var_70_string);
	if(!var_79_bool) { //@nz
		var_80_int = 0;

		for(;;) {
			@IsExisting3DSound(var_81_bool, (var_70_string + (var_80_int + 1)));
			if(!var_81_bool) { //@nz
				break;
			Label_2035:
				@irand(var_82_int, var_80_int);
				var_70_string += (var_82_int + 1);
	}
			@Is3DSoundLoaded(var_83_bool, var_70_string);
			if(var_83_bool != 0) {
				@GetEyesHeight(var_84_float);
				@GetDirection(var_85_cvector);
				var_86_cvector = var_85_cvector * 50;
				var_97_float = GetByIndex(var_86_cvector, 1);
				SetByIndex(var_86_cvector, 1) = (var_97_float + var_84_float);
				@PlayGlobalSound(var_70_string, var_86_cvector);
			}
		}
		var_80_int += 1;
	}
	var_92_bool = !var_80_int; //@nz
	if(var_92_bool == 0) goto Label_2035;
}


// @pe
void func_481(float var_408_float)
{
	var_408_float = 0.1;
}


// @pe
void func_484(int var_415_int)
{
	var_415_int = 0;
}


void func_997(object var_0_object, bool var_314_bool)
{
	cvector var_320_cvector; cvector var_321_cvector;
	bool var_325_bool;
	func_1713(var_325_bool, var_0_object);
	if(!var_325_bool) { //@nz
		var_314_bool = false;
		return 10;
	}
	bool var_328_bool;
	float var_324_float;
	func_1086(var_324_float, var_328_bool);
	if(var_328_bool != 0) {
		var_0_object->GetPFPosition(var_320_cvector); //@t
		@GetPFPosition(var_321_cvector);
		var_0_object->GetAttackDistance(var_324_float); //@t
		var_314_bool = ((var_320_cvector - var_321_cvector) | (var_320_cvector - var_321_cvector)) <= ((var_324_float + 50) * (var_324_float + 50));
		return 10;
	}
	var_314_bool = false;
}


void func_487(object var_0_object, string var_3_string, int var_5_int, object var_71_object, bool var_72_bool, float var_73_float, bool var_148_bool, bool var_240_bool)
{
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector; bool var_89_bool; float var_92_float; cvector var_93_cvector; bool var_94_bool; float var_95_float;
	func_716(var_93_cvector, var_94_bool, var_95_float);
	var_5_int = 0;
	var_120_bool = IsFuncExist(var_71_object, "@GetAttackDistance", 1);
	if(var_120_bool != 0) {
		var_71_object->GetAttackDistance(var_85_float);
		var_85_float += 50;
	} else {
						var_73_float = var_85_float;
	}
	if(var_85_float >= 150)
		var_85_float = 150;
	var_3_string = false;
	var_0_object = var_71_object;
	bool var_88_bool;
	@IsPlayerActor(var_0_object, var_88_bool);
	if(var_88_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_126_object;
		func_2056(var_126_object);
		@SendPlayerEnemy(var_71_object, var_126_object);
	}
	if(var_72_bool != 0)
		var_89_bool = false;
	else
		var_89_bool = true;

	
Label_527:
	for(;;) {
		bool var_131_bool = false;
		bool var_132_bool;
		func_1713(var_132_bool, var_0_object);
		if(var_132_bool != 0) {
			if(!var_3_string) //@nz
				var_131_bool = true;
		}
		if(var_131_bool != 0) {
			func_1129(var_95_float);
			var_0_object->GetPFPosition(var_86_cvector); //@t
			@GetPFPosition(var_87_cvector);
			var_92_float = (var_86_cvector - var_87_cvector) | (var_86_cvector - var_87_cvector);
			if(var_92_float >= ((400.0 + var_85_float) * (400.0 + var_85_float))) {
				bool var_142_bool; float var_144_float;
				var_85_float = var_144_float;
				TaskCall(4);
				func_1149(var_150_bool, var_142_bool, var_0_object, var_144_float, 10000.0, true, false);
				TaskReturn();
				if(!var_148_bool) { //@nz
				} else {
					var_89_bool = false;
			} else {
			if(var_92_float >= (var_73_float * var_73_float)) {
				var_0_object->GetPFPosition(var_93_cvector); //@t
				@CanReachByPF(var_94_bool, var_93_cvector);
				if(!var_94_bool) { //@nz
					bool var_234_bool; float var_236_float;
					var_85_float = var_236_float;
					TaskCall(4);
					func_1149(var_242_bool, var_234_bool, var_0_object, var_236_float, 10000.0, true, false);
					TaskReturn();
					if(!var_240_bool) { //@nz
						goto Label_699;
					}
					var_89_bool = false;
					goto Label_527;
				}
				if(!var_89_bool) { //@nz
					func_1863(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1129(var_95_float);
					@StopAsync();
					var_89_bool = true;
					bool var_256_bool;
					func_1713(var_256_bool, var_0_object);
					if(!var_256_bool) { //@nz
						goto Label_699;
					}
				}
				@rand(var_95_float);
				bool var_259_bool;
				var_261_bool = var_95_float < 0.25;
				if(var_261_bool != 1) {
					bool var_262_bool;
					func_1086(true, var_262_bool);
					if(var_262_bool != 1)
						var_259_bool = false;
				}
				if(var_259_bool != 0) {
					@Face(var_0_object);
					func_1136();
					@PlayAnimation("all", "attack_stay");
					bool var_299_bool; float var_300_float;
					func_954(var_95_float, var_299_bool, var_300_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1129(var_95_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_521_bool;
					func_1086(var_95_float, var_521_bool);
					var_522_bool = !var_521_bool; //@nz
					if(var_522_bool == 0) goto Label_689;
					bool var_523_bool;
					func_1713(var_523_bool, var_0_object);
					if(!var_523_bool) { //@nz
						goto Label_699;
					}
					var_0_object->GetPFPosition(var_86_cvector); //@t
					@GetPFPosition(var_87_cvector);
					if(!(((var_86_cvector - var_87_cvector) | (var_86_cvector - var_87_cvector)) < (var_300_float * var_300_float))) goto Label_689;
					bool var_528_bool; float var_529_float;
					var_73_float = var_529_float;
					func_790(var_94_bool, var_95_float, var_528_bool, var_529_float);
					var_530_bool = !var_528_bool; //@nz
					if(var_530_bool == 0) goto Label_689;
					goto Label_699;
			}
				bool var_531_bool; float var_532_float;
				var_73_float = var_532_float;
				func_790(var_94_bool, var_95_float, var_531_bool, var_532_float);
				if(!var_531_bool) { //@nz
					goto Label_699;
				}
				var_89_bool = true;

			}
		Label_689:
			goto Label_698;
			}
			Label_698:
			}
		}
	Label_699:
		@WaitForAnimEnd();
		if(var_3_string != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_88_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


// @pe
void func_1521(string var_69_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_70_string;
	var_69_string = var_70_string;
	func_2015(var_70_string);
	@PlayAnimation("all", var_69_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_69_string);
	@RemoveEnvelope();
}


