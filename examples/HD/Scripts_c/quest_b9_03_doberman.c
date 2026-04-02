// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool, object var_14_object, int var_15_int, int var_16_int, bool var_17_bool, float var_18_float, int var_19_int, bool var_20_bool, object var_21_object, bool var_22_bool)
	{
		if(1 != 0) {
			func_2171();
			if(var_22_bool == 31699) {
				object var_27_object = var_1_object;
				func_2376(var_0_object);
			}
			if(var_22_bool == 31700) {
				object var_103_object = var_1_object;
				func_2332(var_0_object);
			}
			if(var_22_bool == 32356) {
				object var_123_object = var_1_object;
				func_2332(var_0_object);
			}
			if(var_21_object == 31696) {
				bool var_127_bool;
				func_2419(var_1_object);
				if(var_127_bool != 0) {
					object var_135_object; object var_136_object;
					var_135_object = var_1_object;
					var_136_object = var_0_object;
					func_2370();
					func_157(var_22_bool, "Neutral");
					var_0_object->SetMessage(530309); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530310, 31698, 31697); //@t
					var_0_object->AddReply(531024, 31698, 32353); //@t
					return 0;
				}
				func_157(var_22_bool, "Neutral");
				var_0_object->SetMessage(530314); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530315, -1, 31702); //@t
				return 0;
			}
			if(var_21_object == 31698) {
				func_157(var_22_bool, "Neutral");
				var_0_object->SetMessage(530311); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531025, 32355, 32354); //@t
				var_0_object->AddReply(531027, -1, 32356); //@t
				return 0;
			}
			if(var_21_object == 32355) {
				func_157(var_22_bool, "Neutral");
				var_0_object->SetMessage(531026); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530312, -1, 31699); //@t
				var_0_object->AddReply(530313, -1, 31700); //@t
				return 0;
			}
			var_3_string = true;
			bool var_188_bool;
			func_2644(var_188_bool);
			if(var_188_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb4";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		@SensePlayerOnly(true);
		func_364(var_20_bool, (float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object, object var_13_object, int var_14_int, int var_15_int, bool var_16_bool, float var_17_float, int var_18_int, bool var_19_bool, object var_20_object, bool var_21_bool)
	{
		func_498(var_20_object, var_21_bool);
		object var_25_object;
		var_21_bool = var_25_object;
		func_2696(var_25_object);
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object, object var_13_object, int var_14_int, int var_15_int, bool var_16_bool, float var_17_float, int var_18_int, bool var_19_bool, object var_20_object, bool var_21_bool)
	{
		object var_23_object;
		var_21_bool = var_23_object;
		bool var_22_bool;
		func_1745(var_22_bool, var_23_object);
		if(var_22_bool != 0) {
			bool var_26_bool;
			func_2295(var_26_bool, "quest_b9_03", "doberman_attack");
		}
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, string var_12_string, object var_13_object, int var_14_int, int var_15_int, bool var_16_bool, float var_17_float, int var_18_int, bool var_19_bool, object var_20_object, bool var_21_bool)
	{
		if(var_21_bool == "attack") {
			func_498(var_20_object, var_21_bool);
			TaskCall(3);
			func_598();
			TaskReturn();
		} else {
			string var_531_string;
			var_21_bool = var_531_string;
			func_402(var_531_string);
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		if(var_6_int != 0)
			func_498(var_19_object, var_20_bool);
		bool var_25_bool = false;
		if(var_5_int != 0) {
			bool var_27_bool;
			func_431(var_27_bool);
			if(var_27_bool != 0)
				var_25_bool = true;
		}
		if(var_25_bool != 0) {
			object var_28_object;
			func_2234(var_28_object);
			@RemoveActor(var_28_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, int var_12_int, object var_13_object, int var_14_int, int var_15_int, bool var_16_bool, float var_17_float, int var_18_int, bool var_19_bool, object var_20_object, bool var_21_bool)
	{
		if(var_21_bool == 10) {
			bool var_24_bool;
			func_460(var_19_bool, var_20_object, var_21_bool, var_24_bool);
			if(var_24_bool != 0) {
				if(!var_2_object) { //@nz
					func_2160(var_4_bool);
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
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		object var_21_object;
		func_2234(var_21_object);
		@RemoveActor(var_21_object);
	}

}


task task_4
{
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		object var_21_object;
		func_2234(var_21_object);
		@RemoveActor(var_21_object);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool, int var_21_int)
	{
		if(var_21_int == 1) {
			func_2312(var_1_object);
		} else {
			int var_29_int;
			func_1497(var_20_bool, var_29_int, var_29_int);
		}
	
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool, object var_21_object)
	{
		bool var_22_bool = false;
		if(var_1_object == var_21_object) {
			if(!var_2_object) //@nz
				var_22_bool = true;
		}
		if(var_22_bool != 0) {
			var_2_object = true;
			object var_25_object;
			var_21_object = var_25_object;
			func_2160(var_25_object);
		}
	}

	// @pe
	void OnStopSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool, object var_21_object)
	{
		bool var_22_bool = false;
		if(var_1_object == var_21_object) {
			if(var_2_object != 0)
				var_22_bool = true;
		}
		if(var_22_bool != 0) {
			var_2_object = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool, object var_21_object)
	{
		@RequestClearPath(var_21_object);
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool, object var_21_object)
	{
		func_1353(var_21_object);
		object var_26_object;
		var_21_object = var_26_object;
		func_2690();
	}

}


task task_5
{
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		object var_21_object;
		func_2234(var_21_object);
		@RemoveActor(var_21_object);
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool, object var_21_object)
	{
		bool var_23_bool;
		@IsOverrideActive(var_23_bool);
		if(!var_23_bool) { //@nz
			object var_25_object;
			var_21_object = var_25_object;
			func_2535(var_25_object);
		}
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool, object var_21_object, int var_22_int, float var_23_float, float var_24_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool, object var_21_object, string var_22_string)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool, object var_21_object)
	{
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool, object var_21_object, int var_22_int, float var_23_float, float var_24_float)
{
	object var_25_object;
	var_21_object = var_25_object;
	int var_26_int;
	var_22_int = var_26_int;
	float var_27_float;
	var_23_float = var_27_float;
	func_1944(var_25_object, var_26_int, var_27_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool, object var_21_object, int var_22_int, float var_23_float, float var_24_float, cvector var_25_cvector, cvector var_26_cvector)
{
	object var_27_object;
	var_21_object = var_27_object;
	int var_28_int;
	var_22_int = var_28_int;
	float var_29_float;
	var_23_float = var_29_float;
	cvector var_30_cvector;
	var_25_cvector = var_30_cvector;
	cvector var_31_cvector;
	var_26_cvector = var_31_cvector;
	func_2012(var_29_float, var_30_cvector, var_31_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool, object var_21_object, string var_22_string)
{
	float var_24_float;
	if(var_22_string == "health") {
		@GetProperty("health", var_24_float);
		if(var_24_float <= 0)
			@SignalDeath(var_21_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool, object var_21_object)
{
	object var_22_object;
	var_21_object = var_22_object;
	func_2646(var_22_object);
}


void func_512(void)
{
	int var_49_int; int var_50_int; bool var_51_bool; float var_52_float; bool var_53_bool;
	@WaitForAnimEnd();
	bool var_54_bool;
	func_2037(var_54_bool);
	if(!var_54_bool) //@nz
		return 14;
	int var_56_int;
	func_2619(var_56_int);
	int var_47_int;
	var_56_int = var_47_int;
	int var_48_int = 0;
	
	for(;;) {
		bool var_69_bool = false;
		if(var_48_int < 5) {
			bool var_72_bool;
			func_2037(var_72_bool);
			if(var_72_bool != 0)
				var_69_bool = true;
		}
		if(var_69_bool != 0) {
			@irand(var_49_int, 3);
			if(var_49_int == 0) {
				if(var_47_int == 0) goto Label_559;
				@irand(var_50_int, var_47_int);
				string var_78_string; int var_79_int;
				var_50_int = var_79_int;
				func_2612(var_78_string, var_79_int);
				@PlayAnimation("all", var_78_string);
				@WaitForAnimEnd(var_51_bool);
				if(!var_51_bool) { //@nz
				} else {
			} else {
			if(var_49_int == 1) {
				@rand(var_52_float, 4);
				@Sleep((var_52_float + 1), var_53_bool);
				if(!var_53_bool) { //@nz
					goto Label_588;
				}
			} else if(var_48_int != 0) {
				goto Label_588;
			}
			}
					bool var_81_bool;
					func_591(var_81_bool);
					var_82_bool = !var_81_bool; //@nz
					if(var_82_bool == 0) goto Label_583;
			}
		}
	Label_588:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_583:
		@ResetAAS();
		var_48_int += 1;
	}
	
}


void func_0(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	var_27_object = var_38_object;
	func_2042(var_37_bool, var_38_object, 70.0);
	if(!var_37_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_85_int;
	func_2638(var_85_int);
	var_33_object->SetNPCName(var_85_int);
	int var_86_int;
	func_2636(var_86_int);
	var_33_object->SetNPCDescription(var_86_int);
	string var_87_string;
	func_2640(var_87_string);
	var_33_object->SetPhoto(var_87_string);
	string var_88_string;
	func_2642(var_88_string);
	var_33_object->SetPhoto2(var_88_string);
	int var_89_int;
	func_2589(var_89_int);
	var_33_object->SetPlayerName(var_89_int);
	bool var_34_bool;
	@IsOverrideActive(var_34_bool);
	if(var_34_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	@DoDialog(var_33_object);
	object var_98_object; object var_99_object;
	var_27_object = var_98_object;
	var_33_object = var_99_object;
	TaskCall(1);
	func_74(var_100_object, var_101_object, var_102_string, var_103_bool, var_98_object, var_99_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_164_bool = !var_36_bool; //@nz
		if(var_164_bool == 0) goto Label_63;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_63:
	object var_165_object;
	var_27_object = var_165_object;
	func_2111();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_1280(int var_390_int)
{
	var_390_int = 1;
}


void func_1282(float var_385_float)
{
	var_385_float = 0.5;
}


void func_2307(float var_42_float)
{
	float var_44_float;
	@GetGameTime(var_44_float);
	var_44_float = var_42_float;
}


void func_2565(void)
{
	int var_46_int;
	func_2606(var_46_int);
	if(var_46_int != 1) {
	}
	func_2548("liver");
	func_2548("kidney");
	func_2548("heart");
	func_2548("blood");
}


void func_1542(string var_208_string)
{
	var_208_string = "walk";
}


void func_1544(string var_209_string)
{
	var_209_string = "run";
}


void func_2312(object var_24_object)
{
	bool var_26_bool;
	@IsPlayerActor(var_24_object, var_26_bool);
	if(var_26_bool != 0)
		@PlayGlobalMusic("attack");
}


// @pe
void func_1546(object var_29_object)
{
	func_2178("samopal_ammo", 1, 1, 4);
	func_2565();
	object var_66_object;
	var_29_object = var_66_object;
	func_1568(var_66_object);
}


void func_1290(object var_2_object, bool var_139_bool, object var_140_object, float var_141_float, float var_142_float, bool var_143_bool, bool var_144_bool)
{
	object var_152_object;
	func_2312(var_152_object);
	@SetTimer(1, 5);
	bool var_150_bool;
	@CanSee(var_150_bool, var_152_object);
	if(var_150_bool != 0) {
		var_2_object = true;
		object var_156_object;
		var_140_object = var_156_object;
		func_2160(var_156_object);
	} else {
		var_2_object = false;
	}
	bool var_163_bool; object var_164_object;
	func_1745(var_163_bool, var_164_object);
	if(var_163_bool != 0) {
		object var_167_object;
		func_2234(var_167_object);
		@SendPlayerEnemy(var_164_object, var_167_object);
	}
	bool var_168_bool; object var_169_object; float var_170_float; float var_171_float; bool var_172_bool; bool var_173_bool;
	var_140_object = var_169_object;
	var_141_float = var_170_float;
	var_142_float = var_171_float;
	var_143_bool = var_172_bool;
	var_144_bool = var_173_bool;
	bool var_151_bool;
	func_1395(var_150_bool, var_151_bool, var_168_bool, var_169_object, var_170_float, var_171_float, var_172_bool, var_173_bool);
	var_168_bool = var_151_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_151_bool = var_139_bool;
	
}


void func_2321(void)
{
	object var_370_object;
	@GetScene(var_370_object);
	object var_372_object;
	func_2234(var_372_object);
	@BroadcastMessage("battle", var_372_object, var_370_object);
}
EMIT "Stack[-1] = 0";


void func_2332(object var_104_object)
{
	object var_107_object;
	func_2485(var_107_object);
	object var_106_object;
	var_107_object = var_106_object;
	float var_112_float;
	func_2307(var_112_float);
	var_106_object->AddMark("b9q03DobermanGotoFollower", "pt_b9q03_follower", 0, 530343, var_112_float);
	func_2431();
	bool var_113_bool;
	func_2295(var_113_bool, "quest_b9_03", "doberman_attack");
	object var_116_object;
	object var_119_object;
	func_2485(var_119_object);
	var_119_object = var_116_object;
	func_2502(var_116_object, "pt_b9q03_follower", (float)2);
	object var_120_object;
	func_2485(var_120_object);
	var_104_object->ShowMap(var_120_object);
}
EMIT "Stack[-1] = 0";


void func_2589(int var_89_int)
{
	int var_91_int;
	@GetVariable("branch", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0xa2c";
	}
	if(var_91_int == 1) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
}


// @pe
void func_1568(object var_66_object)
{
	object var_67_object;
	var_66_object = var_67_object;
	func_1593(var_67_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1062(bool var_499_bool, float var_500_float)
{
	float var_503_float; bool var_504_bool;
	@rand(var_503_float);
	if(var_503_float < var_500_float) {

		for(;;) {
			@IsAnimationPlaying(var_504_bool);
			if(!var_504_bool) { //@nz
			} else {
				bool var_507_bool;
				func_1160(var_507_bool);
				if(var_507_bool != 0) {
					var_499_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_499_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1264(var_504_bool);
}


void func_1835(bool var_49_bool, object var_50_object)
{
	bool var_52_bool;
	var_50_object->IsDead(var_52_bool);
	var_52_bool = var_49_bool;
}


void func_2606(int var_46_int)
{
	int var_48_int;
	@GetVariable("branch", var_48_int);
	var_48_int = var_46_int;
}


void func_1840(bool var_38_bool, object var_39_object)
{
	if(var_39_object == null) {
		var_38_bool = false;
		return 4;
	}
	bool var_45_bool = false;
	var_48_bool = IsFuncExist(var_39_object, "IsDead", 1);
	if(var_48_bool != 0) {
		bool var_49_bool; object var_50_object;
		var_39_object = var_50_object;
		func_1835(var_49_bool, var_50_object);
		if(var_49_bool != 0)
			var_45_bool = true;
	}
	if(var_45_bool != 0) {
		var_38_bool = false;
		return 4;
	}
	object var_42_object;
	@GetScene(var_42_object);
	if(var_42_object == null) {
		var_38_bool = false;
		return 4;
	}
	object var_43_object;
	var_39_object->GetScene(var_43_object);
	if(var_42_object != var_43_object) {
		var_38_bool = false;
		return 4;
	}
	var_38_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2612(string var_62_string, int var_63_int)
{
	string var_65_string = "idle";
	if(var_63_int != 0)
		var_65_string += var_63_int;
	var_65_string = var_62_string;
}


void func_1593(object var_67_object)
{
	cvector var_78_cvector; cvector var_79_cvector; cvector var_80_cvector; cvector var_81_cvector; string var_82_string; object var_83_object; bool var_84_bool; bool var_85_bool; float var_86_float; cvector var_87_cvector;
	if(var_67_object == null) {
		func_1684("fdie");
	} else {
		var_67_object->GetPosition(var_78_cvector);
		@GetPosition(var_79_cvector);
		@GetDirection(var_80_cvector);
		var_81_cvector = var_79_cvector - var_78_cvector;
		var_121_float = GetByIndex(var_81_cvector, 0);
		var_122_float = GetByIndex(var_80_cvector, 0);
		var_124_float = GetByIndex(var_81_cvector, 2);
		var_125_float = GetByIndex(var_80_cvector, 2);
		if(((var_121_float * var_122_float) + (var_124_float * var_125_float)) >= 0)
			var_82_string = "fdie";
		else
			var_82_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_67_object = var_83_object;
		var_132_bool = IsFuncExist(var_67_object, "GetScriptProperty", 2);
		if(var_132_bool != 0) {
			var_67_object->HasScriptProperty(var_84_bool, "Owner");
			if(var_84_bool != 0) {
				var_67_object->GetScriptProperty(var_83_object, "Owner");
				if(var_83_object == null)
					var_67_object = var_83_object;
			}
		}
		var_139_bool = IsFuncExist(var_83_object, "@GetEyesHeight", 1);
		if(var_139_bool != 0) {
			var_83_object->GetEyesHeight(var_86_float);
			var_87_cvector = [0.0, 0.0, 0.0];
			var_140_float = GetByIndex(var_87_cvector, 1);
			var_86_float = var_140_float;
			SetByIndex(var_87_cvector, 1) = var_140_float;
			@LookAsync(var_67_object, "head", var_87_cvector);
			var_85_bool = true;
		} else {
			var_85_bool = false;

		}
		string var_142_string;
		var_82_string = var_142_string;
		func_2193(var_142_string);
		@PlayAnimation("all", var_82_string);
		@WaitForAnimEnd();
		if(var_85_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_82_string);
		@RemoveEnvelope();
		var_83_object = null;
	}
	
}


void func_2619(int var_56_int)
{
	int var_59_int; bool var_60_bool;
	var_59_int = 0;
	
	for(;;) {
		string var_62_string; int var_63_int;
		var_59_int = var_63_int;
		func_2612(var_62_string, var_63_int);
		@HasAnimation(var_60_bool, "all", var_62_string);
		if(!var_60_bool) //@nz
			break;
		var_59_int += 1;
	}
	var_59_int = var_56_int;
}


void func_2111(void)
{
	bool var_167_bool;
	@CameraSwitchToNormal(true);
	bool var_169_bool;
	func_2644(var_169_bool);
	if(var_169_bool != 0) {
	} else {
		@HasAnimationTrack(var_167_bool, "head");
		if(var_167_bool == 0) goto Label_2128;
		@UnlookAsync("head");
	}
Label_2128:
	
}


void func_1089(object var_0_object, bool var_296_bool, float var_297_float)
{
	bool var_303_bool; cvector var_304_cvector; cvector var_305_cvector; cvector var_306_cvector; float var_307_float;
	
	for(;;) {
		@IsAnimationPlaying(var_303_bool);
		if(!var_303_bool) //@nz
			break;
		bool var_309_bool;
		func_1160(var_309_bool);
		if(var_309_bool != 0) {
			var_296_bool = true;
			return 10;
		}
		bool var_352_bool;
		func_1876(var_352_bool, var_0_object);
		if(!var_352_bool) { //@nz
			var_296_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_304_cvector); //@t
		@GetPFPosition(var_305_cvector);
		var_306_cvector = var_304_cvector - var_305_cvector;
		var_307_float = var_306_cvector | var_306_cvector;
		if(var_307_float < (var_297_float * var_297_float)) {
			bool var_357_bool; float var_358_float;
			var_297_float = var_358_float;
			func_925(var_306_cvector, var_307_float, var_357_bool, var_358_float);
			var_296_bool = true;
			return 10;
		}
		@sync();
	}
	func_1264(var_307_float);
	var_296_bool = false;
}


// @pe
void func_2370(void)
{
	@SetVariable("oob9DobermanSpi4ka1_1", 1);
}


void func_2376(object var_28_object)
{
	object var_31_object;
	func_2485(var_31_object);
	object var_30_object;
	var_31_object = var_30_object;
	float var_42_float;
	func_2307(var_42_float);
	var_30_object->AddMark("b9q03DobermanGotoFollower", "pt_b9q03_follower", 0, 530343, var_42_float);
	func_2431();
	bool var_68_bool;
	func_2295(var_68_bool, "quest_b9_03", "place_follower");
	bool var_74_bool;
	func_2295(var_74_bool, "quest_b9_03", "init_bonefires");
	object var_77_object;
	object var_80_object;
	func_2485(var_80_object);
	var_80_object = var_77_object;
	func_2502(var_77_object, "pt_b9q03_follower", (float)2);
	object var_100_object;
	func_2485(var_100_object);
	var_28_object->ShowMap(var_100_object);
}
EMIT "Stack[-1] = 0";


void func_1353(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_1519(var_21_object);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_98_object, object var_99_object)
{
	var_0_object = var_99_object;
	var_1_object = var_98_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_105_bool;
		func_2419(var_1_object);
		if(var_105_bool != 0) {
			object var_113_object; object var_114_object;
			var_113_object = var_1_object;
			var_114_object = var_0_object;
			func_2370();
			func_157(var_99_object, "Neutral");
			var_0_object->SetMessage(530309); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(530310, 31698, 31697); //@t
			var_0_object->AddReply(531024, 31698, 32353); //@t
		} else {
					func_157(var_99_object, "Neutral");
					var_0_object->SetMessage(530314); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530315, -1, 31702); //@t
		}
	}
	for(;;) {
		bool var_141_bool;
		func_2644(var_141_bool);
		if(var_141_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2129(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_156;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_156:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_2636(int var_86_int)
{
	var_86_int = 518097;
}


void func_2638(int var_85_int)
{
	var_85_int = 518096;
}


void func_591(bool var_81_bool)
{
	var_81_bool = true;
}


void func_2640(string var_87_string)
{
	var_87_string = "ui/NPC_Citizen2.png";
}


void func_2129(string var_143_string)
{
	bool var_147_bool; float var_148_float; float var_149_float;
	@lshHasAnimation(var_147_bool, var_143_string);
	if(var_147_bool != 0) {
		@lshGetAnimTimes(var_143_string, var_148_float, var_149_float);
		@lshPlayAnimation(var_148_float, var_149_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_143_string);
	}
	
}


void func_2642(string var_88_string)
{
	var_88_string = "ui/NPC_Citizen2_b.png";
}


void func_593(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_2644(bool var_80_bool)
{
	var_80_bool = false;
}


void func_851(object var_1_object, object var_2_object, bool var_4_bool)
{
	bool var_64_bool; bool var_65_bool; cvector var_66_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_64_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_64_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_65_bool, ("attack" + (var_2_object + 1)));
			if(!var_65_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_66_cvector, "all", "bjump");
		var_80_float = GetByIndex(var_66_cvector, 2);
		var_4_bool = -var_80_float;

	}
}


void func_598(void)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	object var_36_object;
	object var_33_object;
	func_622(var_30_bool, var_31_float, var_32_int, var_33_object, var_36_object, var_36_object, true, 180.0);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2646(object var_22_object)
{
	bool var_23_bool;
	func_2295(var_23_bool, "quest_b9_03", "doberman_dead");
	object var_29_object;
	var_22_object = var_29_object;
	TaskCall(5);
	func_1546(var_29_object);
	TaskReturn();
}


void func_1876(bool var_34_bool, object var_35_object)
{
	object var_39_object;
	var_35_object = var_39_object;
	bool var_38_bool;
	func_1840(var_38_bool, var_39_object);
	if(!var_38_bool) { //@nz
		var_34_bool = false;
		return 2;
	}
	bool var_56_bool; object var_57_object;
	func_1750(var_56_bool, var_57_object, "noaccess");
	if(!var_56_bool) { //@nz
		var_34_bool = true;
		return 2;
	}
	int var_37_int;
	var_57_object->GetProperty("noaccess", var_37_int);
	var_34_bool = var_37_int == 0;
}


void func_2145(string var_121_string, bool var_122_bool)
{
	bool var_128_bool; float var_129_float; float var_130_float;
	@lshHasAnimation(var_128_bool, var_121_string);
	if(var_128_bool != 0) {
		@lshGetAnimTimes(var_121_string, var_129_float, var_130_float);
		@lshPlayAnimation(var_129_float, var_130_float, var_122_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_121_string);
	}
	
}


// @pe
void func_610(float var_405_float)
{
	var_405_float = 0.1;
}


// @pe
void func_613(int var_412_int)
{
	var_412_int = 0;
}


void func_1132(object var_0_object, bool var_311_bool)
{
	cvector var_317_cvector; cvector var_318_cvector;
	bool var_322_bool;
	func_1876(var_322_bool, var_0_object);
	if(!var_322_bool) { //@nz
		var_311_bool = false;
		return 10;
	}
	bool var_325_bool;
	float var_321_float;
	func_1221(var_321_float, var_325_bool);
	if(var_325_bool != 0) {
		var_0_object->GetPFPosition(var_317_cvector); //@t
		@GetPFPosition(var_318_cvector);
		var_0_object->GetAttackDistance(var_321_float); //@t
		var_311_bool = ((var_317_cvector - var_318_cvector) | (var_317_cvector - var_318_cvector)) <= ((var_321_float + 50) * (var_321_float + 50));
		return 10;
	}
	var_311_bool = false;
}


void func_364(int var_6_int, float var_22_float, float var_23_float)
{
	float var_24_float; bool var_25_bool; float var_26_float; bool var_27_bool;
	var_6_int = false;
	
	for(;;) {
		@rand(var_26_float, 3);
		@Sleep((var_26_float + 3), var_27_bool);
		var_6_int = true;
		float var_31_float; float var_32_float;
		var_22_float = var_31_float;
		func_433(var_32_float, var_24_float, var_25_bool, var_26_float, var_27_bool, var_31_float, var_32_float);
		var_6_int = false;
	}
}
EMIT "Return(); Pop(4)";


void func_622(object var_0_object, string var_3_string, int var_5_int, object var_36_object, bool var_37_bool, float var_38_float, bool var_145_bool, bool var_237_bool)
{
	float var_50_float; cvector var_51_cvector; cvector var_52_cvector; bool var_54_bool; float var_57_float; cvector var_58_cvector; bool var_59_bool; float var_60_float;
	func_851(var_58_cvector, var_59_bool, var_60_float);
	var_5_int = 0;
	var_85_bool = IsFuncExist(var_36_object, "@GetAttackDistance", 1);
	if(var_85_bool != 0) {
		var_36_object->GetAttackDistance(var_50_float);
		var_50_float += 50;
	} else {
						var_38_float = var_50_float;
	}
	if(var_50_float >= 150)
		var_50_float = 150;
	var_3_string = false;
	var_0_object = var_36_object;
	bool var_53_bool;
	@IsPlayerActor(var_0_object, var_53_bool);
	if(var_53_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_91_object;
		func_2234(var_91_object);
		@SendPlayerEnemy(var_36_object, var_91_object);
	}
	if(var_37_bool != 0)
		var_54_bool = false;
	else
		var_54_bool = true;

	
Label_662:
	for(;;) {
		bool var_96_bool = false;
		bool var_97_bool;
		func_1876(var_97_bool, var_0_object);
		if(var_97_bool != 0) {
			if(!var_3_string) //@nz
				var_96_bool = true;
		}
		if(var_96_bool != 0) {
			func_1264(var_60_float);
			var_0_object->GetPFPosition(var_51_cvector); //@t
			@GetPFPosition(var_52_cvector);
			var_57_float = (var_51_cvector - var_52_cvector) | (var_51_cvector - var_52_cvector);
			if(var_57_float >= ((400.0 + var_50_float) * (400.0 + var_50_float))) {
				bool var_139_bool; float var_141_float;
				var_50_float = var_141_float;
				TaskCall(4);
				func_1290(var_147_bool, var_139_bool, var_0_object, var_141_float, 3000.0, true, false);
				TaskReturn();
				if(!var_145_bool) { //@nz
				} else {
					var_54_bool = false;
			} else {
			if(var_57_float >= (var_38_float * var_38_float)) {
				var_0_object->GetPFPosition(var_58_cvector); //@t
				@CanReachByPF(var_59_bool, var_58_cvector);
				if(!var_59_bool) { //@nz
					bool var_231_bool; float var_233_float;
					var_50_float = var_233_float;
					TaskCall(4);
					func_1290(var_239_bool, var_231_bool, var_0_object, var_233_float, 3000.0, true, false);
					TaskReturn();
					if(!var_237_bool) { //@nz
						goto Label_834;
					}
					var_54_bool = false;
					goto Label_662;
				}
				if(!var_54_bool) { //@nz
					func_2026(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1264(var_60_float);
					@StopAsync();
					var_54_bool = true;
					bool var_253_bool;
					func_1876(var_253_bool, var_0_object);
					if(!var_253_bool) { //@nz
						goto Label_834;
					}
				}
				@rand(var_60_float);
				bool var_256_bool;
				var_258_bool = var_60_float < 0.25;
				if(var_258_bool != 1) {
					bool var_259_bool;
					func_1221(true, var_259_bool);
					if(var_259_bool != 1)
						var_256_bool = false;
				}
				if(var_256_bool != 0) {
					@Face(var_0_object);
					func_1271();
					@PlayAnimation("all", "attack_stay");
					bool var_296_bool; float var_297_float;
					func_1089(var_60_float, var_296_bool, var_297_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1264(var_60_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_518_bool;
					func_1221(var_60_float, var_518_bool);
					var_519_bool = !var_518_bool; //@nz
					if(var_519_bool == 0) goto Label_824;
					bool var_520_bool;
					func_1876(var_520_bool, var_0_object);
					if(!var_520_bool) { //@nz
						goto Label_834;
					}
					var_0_object->GetPFPosition(var_51_cvector); //@t
					@GetPFPosition(var_52_cvector);
					if(!(((var_51_cvector - var_52_cvector) | (var_51_cvector - var_52_cvector)) < (var_297_float * var_297_float))) goto Label_824;
					bool var_525_bool; float var_526_float;
					var_38_float = var_526_float;
					func_925(var_59_bool, var_60_float, var_525_bool, var_526_float);
					var_527_bool = !var_525_bool; //@nz
					if(var_527_bool == 0) goto Label_824;
					goto Label_834;
			}
				bool var_528_bool; float var_529_float;
				var_38_float = var_529_float;
				func_925(var_59_bool, var_60_float, var_528_bool, var_529_float);
				if(!var_528_bool) { //@nz
					goto Label_834;
				}
				var_54_bool = true;

			}
		Label_824:
			goto Label_833;
			}
			Label_833:
			}
		}
	Label_834:
		@WaitForAnimEnd();
		if(var_3_string != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_53_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_1900(object var_38_object)
{
	string var_52_string;
	if(var_38_object == null)
		return 14;
	bool var_46_bool;
	@IsDead(var_46_bool);
	if(var_46_bool != 0)
		return 14;
	int var_47_int;
	@GetSecondaryAnimationType(var_47_int);
	if(var_47_int < 0)
		return 14;
	cvector var_48_cvector;
	var_38_object->GetPosition(var_48_cvector);
	cvector var_49_cvector;
	@GetPosition(var_49_cvector);
	cvector var_50_cvector;
	@GetDirection(var_50_cvector);
	cvector var_51_cvector = var_49_cvector - var_48_cvector;
	var_57_float = GetByIndex(var_51_cvector, 0);
	var_58_float = GetByIndex(var_50_cvector, 0);
	var_60_float = GetByIndex(var_51_cvector, 2);
	var_61_float = GetByIndex(var_50_cvector, 2);
	if(((var_57_float * var_58_float) + (var_60_float * var_61_float)) >= 0)
		var_52_string = "fhit";
	else
		var_52_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_52_string + "1"), (var_52_string + "2"), -10);
	
}


void func_2160(object var_25_object)
{
	float var_28_float;
	var_25_object->GetEyesHeight(var_28_float);
	cvector var_29_cvector = [0.0, 0.0, 0.0];
	var_30_float = GetByIndex(var_29_cvector, 1);
	var_28_float = var_30_float;
	SetByIndex(var_29_cvector, 1) = var_30_float;
	@LookAsync(var_25_object, "head", var_29_cvector);
}


// @pe
void func_2419(bool var_105_bool)
{
	int var_107_int;
	func_2273(var_107_int, "oob9DobermanSpi4ka1_1");
	if(var_107_int == 0) {
		var_105_bool = true;
		return 0;
	}
	var_105_bool = false;
}


void func_1395(object var_0_object, object var_1_object, bool var_168_bool, object var_169_object, float var_170_float, float var_171_float, bool var_172_bool, bool var_173_bool)
{
	bool var_182_bool; object var_184_object; cvector var_185_cvector; cvector var_186_cvector; float var_188_float; object var_189_object;
	var_0_object = false;
	var_1_object = var_169_object;
	bool var_183_bool;
	var_173_bool = var_183_bool;
	
	for(;;) {
		bool var_190_bool; object var_191_object;
		var_169_object = var_191_object;
		func_1535(var_190_bool, var_191_object);
		if(!var_190_bool) { //@nz
			var_168_bool = false;
			return 16;
		}
		var_169_object->GetPosition(var_185_cvector);
		@GetPosition(var_186_cvector);
		var_188_float = (var_185_cvector - var_186_cvector) | (var_185_cvector - var_186_cvector);
		bool var_195_bool = false;
		if(var_171_float > 0) {
			if(var_188_float > (var_171_float * var_171_float))
				var_195_bool = true;
		}
		if(var_195_bool != 0) {
			@Stop();
			var_168_bool = false;
			return 16;
		}
		if(var_188_float > (var_170_float * var_170_float)) {
			var_169_object->GetPFPosition(var_185_cvector);
			@FindPathTo(var_189_object, var_185_cvector);
			if(var_189_object != null) {
				var_189_object = var_184_object;
				var_189_object = null;
			}
			if(var_184_object != null) {
				if(var_183_bool == 0) goto Label_1448;
				var_183_bool = false;
				@RotatePath(var_184_object, var_182_bool);
				if(!var_182_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_208_string;
						func_1542(var_208_string);
						string var_209_string;
						func_1544(var_209_string);
						@FollowPath(var_184_object, var_172_bool, var_182_bool, var_208_string, var_209_string);
						if(!var_182_bool) { //@nz
							if(var_0_object == 0) goto Label_1467;
							var_184_object = null;
						}
					EMIT "GOTO 0x5bc";

					Label_1467:
						} else {
					var_184_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_182_bool);
					if(!var_182_bool) { //@nz
						if(var_0_object != 0) {
							var_184_object = null;
							goto Label_1495;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1495;
		}
			var_189_object = null;
			goto Label_1493;

		Label_1493:
			var_184_object = null;

		}
	Label_1495:
		for(;;) {
			var_168_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_886(object var_0_object, float var_394_float, int var_395_int)
{
	object var_399_object; float var_400_float; float var_401_float;
	@GetVictim((var_394_float * 0.9), var_399_object);
	@ReportAttack(var_0_object);
	if(var_399_object == var_0_object) {
		float var_405_float; object var_406_object; int var_407_int;
		var_399_object = var_406_object;
		var_395_int = var_407_int;
		func_610(var_407_int);
		var_405_float = var_400_float;
		float var_408_float; object var_409_object; float var_410_float; int var_411_int;
		var_399_object = var_409_object;
		int var_412_int; object var_413_object; int var_414_int;
		var_399_object = var_413_object;
		var_395_int = var_414_int;
		func_613(var_414_int);
		var_412_int = var_411_int;
		func_1762(var_408_float, var_409_object, var_410_float, var_411_int);
		var_408_float = var_401_float;
		int var_473_int;
		func_1269(var_473_int);
		@ReportHit(var_0_object, var_473_int, var_401_float, var_410_float);
		object var_474_object; float var_475_float;
		var_399_object = var_474_object;
		var_401_float = var_475_float;
		func_1276();
	}
}
EMIT "Stack[-3] = 0";


void func_2171(void)
{
	bool var_24_bool;
	func_2644(var_24_bool);
	if(var_24_bool != 0)
		@lshStopSpeech();
}


void func_382(int var_5_int)
{
	var_5_int = true;
	bool var_534_bool = false;
	bool var_535_bool;
	func_2037(var_535_bool);
	if(!var_535_bool) { //@nz
		bool var_539_bool;
		func_431(var_539_bool);
		if(var_539_bool != 0)
			var_534_bool = true;
	}
	if(var_534_bool != 0) {
		object var_540_object;
		func_2234(var_540_object);
		@RemoveActor(var_540_object);
	}
}


void func_2431(void)
{
	object var_46_object;
	@CreateDiaryEntry(var_46_object, 542, 2, 530354);
	bool var_50_bool; object var_51_object;
	var_46_object = var_51_object;
	func_2457(var_50_bool, var_51_object, 532);
}
EMIT "Stack[-1] = 0";


void func_2178(string var_30_string, int var_31_int, int var_32_int, int var_33_int)
{
	int var_36_int; bool var_37_bool;
	int var_39_int;
	var_31_int = var_39_int;
	int var_40_int;
	var_32_int = var_40_int;
	bool var_38_bool;
	func_2268(var_38_bool, var_39_int, var_40_int);
	if(var_38_bool != 0) {
		@irand(var_36_int, var_33_int);
		@AddItem(var_37_bool, var_30_string, 0, (var_36_int + 1));
	}
}


// @pe
void func_2696(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(0);
	int var_26_int;
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_1160(bool var_309_bool)
{
	bool var_310_bool = false;
	bool var_311_bool;
	func_1132(var_310_bool, var_311_bool);
	if(var_311_bool != 0) {
		bool var_328_bool;
		func_1176(var_309_bool, var_310_bool, var_328_bool);
		if(var_328_bool != 0)
			var_310_bool = true;
	}
	if(var_310_bool != 0) {
		var_309_bool = true;
		return 0;
	}
	var_309_bool = false;
}


void func_2444(object var_59_object)
{
	object var_61_object;
	@GetDiaryRoot(var_61_object);
	if(!var_61_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_59_object = false;
	}
	var_61_object = var_59_object;
}
EMIT "Stack[-1] = 0";


void func_2193(string var_90_string)
{
	bool var_99_bool; int var_100_int; bool var_101_bool; int var_102_int; bool var_103_bool; float var_104_float; cvector var_105_cvector; cvector var_106_cvector;
	@IsExisting3DSound(var_99_bool, var_90_string);
	if(!var_99_bool) { //@nz
		var_100_int = 0;

		for(;;) {
			@IsExisting3DSound(var_101_bool, (var_90_string + (var_100_int + 1)));
			if(!var_101_bool) { //@nz
				break;
			Label_2213:
				@irand(var_102_int, var_100_int);
				var_90_string += (var_102_int + 1);
	}
			@Is3DSoundLoaded(var_103_bool, var_90_string);
			if(var_103_bool != 0) {
				@GetEyesHeight(var_104_float);
				@GetDirection(var_105_cvector);
				var_106_cvector = var_105_cvector * 50;
				var_117_float = GetByIndex(var_106_cvector, 1);
				SetByIndex(var_106_cvector, 1) = (var_117_float + var_104_float);
				@PlayGlobalSound(var_90_string, var_106_cvector);
			}
		}
		var_100_int += 1;
	}
	var_112_bool = !var_100_int; //@nz
	if(var_112_bool == 0) goto Label_2213;
}


// @pe
void func_402(string var_531_string)
{
	if(var_531_string == "cleanup")
		func_382(var_531_string);
}


// @pe
void func_1684(string var_89_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_90_string;
	var_89_string = var_90_string;
	func_2193(var_90_string);
	@PlayAnimation("all", var_89_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_89_string);
	@RemoveEnvelope();
}


void func_1176(object var_0_object, bool var_4_bool, bool var_328_bool)
{
	object var_334_object; float var_336_float; cvector var_337_cvector; cvector var_338_cvector;
	@GetScene(var_334_object);
	bool var_335_bool = false;
	
	for(;;) {
		cvector var_339_cvector;
		func_1730(var_339_cvector, var_0_object);
		var_345_int = -var_339_cvector;
		@FindDirLength(var_336_float, var_345_int, var_4_bool);
		if(var_336_float < var_4_bool) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_337_cvector); //@t
				@GetPFPosition(var_338_cvector);
				@WaitForAnimEnd();
				func_1264(var_338_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_335_bool = true;
				bool var_350_bool;
				func_1132(var_338_cvector, var_350_bool);
				var_351_bool = !var_350_bool; //@nz
				if(var_351_bool == 0) goto Label_1217;
		}
		for(;;) {
			var_335_bool = var_328_bool;

		}

	Label_1217:
	}
}
EMIT "Stack[-5] = 0";


void func_1944(object var_25_object, int var_26_int, float var_27_float)
{
	cvector var_37_cvector; object var_38_object; int var_39_int; bool var_40_bool; cvector var_41_cvector; cvector var_42_cvector;
	bool var_46_bool = false;
	bool var_47_bool = false;
	if(var_25_object != 0) {
		if(var_26_int != 4)
			var_47_bool = true;
	}
	if(var_47_bool != 0) {
		if(var_26_int != 5)
			var_46_bool = true;
	}
	if(var_46_bool != 0) {
		cvector var_53_cvector; cvector var_54_cvector;
		cvector var_55_cvector; object var_56_object;
		var_25_object = var_56_object;
		func_1730(var_55_cvector, var_56_object);
		var_55_cvector = var_54_cvector;
		func_2240(var_53_cvector, var_54_cvector);
		var_53_cvector = var_37_cvector;
		@CreateVectorVector(var_38_object);
		var_39_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_39_int), var_40_bool, var_41_cvector, var_42_cvector);
			if(!var_40_bool) { //@nz
				break;
			Label_2006:
				var_38_object = null;
	}
			object var_115_object;
			var_25_object = var_115_object;
			func_1900(var_115_object);
		}
		if((var_42_cvector | var_37_cvector) >= 0.70710677)
			var_38_object->add(var_41_cvector);
		var_39_int += 1;
	}
	int var_43_int;
	var_38_object->size(var_43_int);
	if(var_43_int == 0) goto Label_2006;
	int var_44_int;
	@irand(var_44_int, var_43_int);
	cvector var_45_cvector;
	var_38_object->get(var_45_cvector, var_44_int);
	object var_70_object; int var_71_int; float var_72_float; cvector var_73_cvector; cvector var_74_cvector;
	var_25_object = var_70_object;
	var_26_int = var_71_int;
	var_27_float = var_72_float;
	var_45_cvector = var_73_cvector;
	var_74_cvector = -var_37_cvector;
	func_2012(var_72_float, var_73_cvector, var_74_cvector);
}


void func_2457(bool var_50_bool, object var_51_object, int var_52_int)
{
	object var_59_object;
	func_2444(var_59_object);
	object var_56_object;
	var_59_object = var_56_object;
	object var_57_object;
	var_56_object->Find(var_52_int, var_57_object);
	if(!var_57_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_52_int);
		var_50_bool = false;
	}
	var_57_object->AddChild(var_51_object);
	@SendWorldWndMessage(7);
	int var_58_int;
	var_51_object->GetCategory(var_58_int);
	@SetDiarySection(var_58_int);
	var_50_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_157(object var_2_object, string var_117_string)
{
	bool var_118_bool;
	func_2644(var_118_bool);
	if(!var_118_bool) //@nz
		return 0;
	if(var_117_string == var_2_object)
		return 0;
	string var_121_string; bool var_122_bool;
	var_117_string = var_121_string;
	if(var_117_string == "")
		var_122_bool = false;
	else
		var_122_bool = true;
	func_2145(var_121_string, var_122_bool);
	var_2_object = var_117_string;
	
}


void func_925(object var_0_object, object var_1_object, bool var_357_bool, float var_358_float)
{
	string var_366_string;
	func_1264(var_366_string);
	int var_363_int;
	@irand(var_363_int, var_1_object);
	@Face(var_0_object);
	@SetAttackState(true);
	func_2321();
	@PlayAnimation("all", ("attack_begin" + (var_363_int + 1)));
	@WaitForAnimEnd();
	int var_365_int;
	func_1232(var_365_int, var_366_string);
	bool var_391_bool;
	func_1876(var_391_bool, var_0_object);
	if(!var_391_bool) { //@nz
		@StopAsync();
		var_357_bool = false;
		return 8;
	}
	float var_394_float; int var_395_int;
	var_358_float = var_394_float;
	var_363_int = var_395_int;
	func_886(var_366_string, var_394_float, var_395_int);
	bool var_364_bool;
	@HasAnimation(var_364_bool, "all", ("attack_middle" + var_363_int));
	if(var_364_bool != 0) {
		func_2321();
		@PlayAnimation("all", ("attack_middle" + var_363_int));
		@WaitForAnimEnd();
		func_1264(var_366_string);
		bool var_483_bool;
		func_1876(var_483_bool, var_0_object);
		if(!var_483_bool) { //@nz
			@StopAsync();
			var_357_bool = false;
			return 8;
		}
		float var_486_float; int var_487_int;
		var_358_float = var_486_float;
		func_886(var_366_string, var_486_float, var_487_int);
		var_365_int = 1;

		for(;;) {
			var_366_string = (("attack_middle" + var_487_int) + "_") + var_365_int;
			@HasAnimation(var_364_bool, "all", var_366_string);
			if(!var_364_bool) { //@nz
			} else {
				func_2321();
				@PlayAnimation("all", var_366_string);
				@WaitForAnimEnd();
				func_1264(var_366_string);
				bool var_509_bool;
				func_1876(var_509_bool, var_0_object);
				if(!var_509_bool) { //@nz
					@StopAsync();
					var_357_bool = false;
					return 8;
				}
				float var_512_float; int var_513_int;
				var_358_float = var_512_float;
				var_363_int = var_513_int;
				func_886(var_366_string, var_512_float, var_513_int);
				var_365_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_363_int));
		bool var_498_bool;
		func_1278(var_498_bool);
		if(var_498_bool != 0) {
			bool var_499_bool;
			func_1062(var_499_bool, 0.75);
			@StopAsync();
		}
		var_357_bool = true;
		return 8;

	}
}


void func_431(bool var_27_bool)
{
	var_27_bool = true;
}


// @pe
void func_433(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_31_float, float var_32_float)
{
	bool var_33_bool;
	func_2037(var_33_bool);
	if(!var_33_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_31_float;
	var_1_object = var_32_float;
	@SetTimer(10, 1.0);
	func_512();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_1716(string var_436_string, int var_437_int)
{
	if(var_437_int == 2) {
		var_436_string = "fire";
		return 0;
	EMIT "GOTO 0x6c0";
	}
	if(var_437_int == 1) {
		var_436_string = "bullet";
		return 0;
	}
	var_436_string = "phys";
}


void func_2485(object var_31_object)
{
	object var_34_object; object var_35_object;
	@GetMainOutdoorScene(var_34_object);
	if(var_34_object == null) {
		@Trace("Can't find main outdoor scene");
		var_35_object = null;
		var_35_object = var_31_object;
	}
	var_34_object->GetMap(var_35_object);
	var_35_object = var_31_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2234(object var_21_object)
{
	object var_23_object;
	@self(var_23_object);
	var_23_object = var_21_object;
}
EMIT "Stack[-1] = 0";


void func_2240(cvector var_53_cvector, cvector var_54_cvector)
{
	float var_62_float = sqrt(var_54_cvector | var_54_cvector);
	if(var_62_float < 0.000001)
		var_53_cvector = [0.0, 0.0, 0.0];
	var_53_cvector = var_54_cvector / var_62_float;
}


void func_1730(cvector var_55_cvector, object var_56_object)
{
	cvector var_59_cvector;
	@GetPosition(var_59_cvector);
	cvector var_60_cvector;
	var_56_object->GetPosition(var_60_cvector);
	var_55_cvector = var_60_cvector - var_59_cvector;
}


void func_1221(object var_0_object, bool var_259_bool)
{
	bool var_261_bool;
	var_264_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_264_bool != 0) {
		var_0_object->IsAttacking(var_261_bool); //@t
		var_261_bool = var_259_bool;
	}
	var_259_bool = false;
}


void func_2502(object var_77_object, string var_78_string, float var_79_float)
{
	object var_87_object;
	@GetMainOutdoorScene(var_87_object);
	if(var_87_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_85_cvector;
	cvector var_86_cvector;
	bool var_88_bool;
	var_87_object->GetLocator(var_78_string, var_88_bool, var_85_cvector, var_86_cvector);
	if(!var_88_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_78_string) + " doesnt exist");
	var_87_object->GetMap(var_77_object);
	if(var_77_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_98_float = GetByIndex(var_85_cvector, 0);
	var_99_float = GetByIndex(var_85_cvector, 2);
	var_77_object->SetMapParams(var_98_float, var_99_float, var_79_float);
}
EMIT "Stack[-2] = 0";


void func_1737(float var_28_float, object var_29_object)
{
	cvector var_33_cvector;
	@GetPosition(var_33_cvector);
	cvector var_34_cvector;
	var_29_object->GetPosition(var_34_cvector);
	var_28_float = (var_34_cvector - var_33_cvector) | (var_34_cvector - var_33_cvector);
}


// @pe
void func_2250(float var_446_float, float var_447_float, float var_448_float)
{
	if(var_447_float < var_448_float)
		var_447_float = var_446_float;
	else
		var_448_float = var_446_float;
	
}


void func_460(object var_0_object, object var_1_object, bool var_4_bool, bool var_24_bool)
{
	if(var_4_bool == null)
		var_24_bool = false;
	float var_28_float;
	func_1737(var_28_float, var_4_bool);
	float var_26_float = sqrt(var_28_float);
	if(var_2_object != 0)
		var_26_float -= var_1_object;
	var_24_bool = var_26_float < var_0_object;
}


void func_1232(object var_2_object, int var_5_int)
{
	int var_379_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_int != 0) {
		if((var_5_int + -1) > 0)
			return 4;
	}
	float var_378_float;
	@rand(var_378_float);
	float var_385_float;
	func_1282(var_385_float);
	if(var_378_float < var_385_float) {
		@irand(var_379_int, var_2_object);
		@Speak("attack" + (var_379_int + 1));
		int var_390_int;
		func_1280(var_390_int);
		var_5_int = var_390_int;
	}
}


void func_1745(bool var_163_bool, object var_164_object)
{
	bool var_166_bool;
	@IsPlayerActor(var_164_object, var_166_bool);
	var_166_bool = var_163_bool;
}


// @pe
void func_2257(float var_456_float, float var_457_float, float var_458_float, float var_459_float)
{
	if(var_457_float < var_458_float) {
		var_458_float = var_456_float;
		return 0;
	}
	if(var_457_float > var_459_float) {
		var_459_float = var_456_float;
		return 0;
	}
	var_457_float = var_456_float;
}


void func_1750(bool var_56_bool, object var_57_object, string var_58_string)
{
	var_63_bool = IsFuncExist(var_57_object, "HasProperty", 2);
	if(!var_63_bool) { //@nz
		var_56_bool = false;
		return 2;
	}
	bool var_60_bool;
	var_57_object->HasProperty(var_58_string, var_60_bool);
	var_60_bool = var_56_bool;
}


// @pe
void func_1497(object var_0_object, object var_1_object, int var_29_int)
{
	if(var_29_int != 0)
		return 0;
	bool var_32_bool;
	func_1535(var_32_bool, var_1_object);
	if(!var_32_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_2268(bool var_38_bool, int var_39_int, int var_40_int)
{
	int var_42_int;
	@irand(var_42_int, var_40_int);
	var_38_bool = var_42_int < var_39_int;
}


void func_2012(object var_27_object, cvector var_30_cvector, cvector var_31_cvector)
{
	object var_34_object;
	@GetScene(var_34_object);
	object var_35_object;
	@AddActorByType(var_35_object, "scripted", var_34_object, var_30_cvector, var_31_cvector, "blood_dir.xml");
	object var_38_object;
	var_27_object = var_38_object;
	func_1900(var_38_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2273(int var_107_int, string var_108_string)
{
	int var_110_int;
	@GetVariable(var_108_string, var_110_int);
	var_110_int = var_107_int;
}


void func_1762(float var_408_float, object var_409_object, float var_410_float, int var_411_int)
{
	int var_421_int; int var_423_int;
	object var_428_object;
	var_409_object = var_428_object;
	bool var_427_bool;
	func_1750(var_427_bool, var_428_object, "health");
	if(!var_427_bool) //@nz
		var_408_float = 0.0;
	bool var_431_bool; object var_432_object;
	func_1750(var_431_bool, var_432_object, "armor");
	if(!var_431_bool) //@nz
		var_421_int = 0;
	else
		var_432_object->GetProperty("armor", var_421_int);
	string var_436_string; int var_437_int;
	var_411_int = var_437_int;
	func_1716(var_436_string, var_437_int);
	string var_422_string = "armor_" + var_436_string;
	bool var_442_bool; object var_443_object; string var_444_string;
	var_409_object = var_443_object;
	func_1750(var_442_bool, var_443_object, var_444_string);
	if(!var_442_bool) //@nz
		var_423_int = 0;
	else
		var_409_object->GetProperty(var_444_string, var_423_int);

	float var_446_float;
	func_2250(var_446_float, ((var_421_int + var_423_int) / 100.0), (float)1);
	float var_424_float;
	var_446_float = var_424_float;
	float var_425_float;
	var_409_object->GetProperty("health", var_425_float);
	float var_426_float = var_410_float * (1 - var_424_float);
	float var_456_float;
	func_2257(var_456_float, (var_425_float - var_426_float), (float)0, (float)1);
	var_409_object->SetProperty("health", var_456_float);
	bool var_462_bool; object var_463_object;
	var_409_object = var_463_object;
	func_1745(var_462_bool, var_463_object);
	if(var_462_bool != 0) {
		float var_464_float = -var_426_float;
		func_2278(var_464_float);
	}
	var_426_float = var_408_float;
	
}


void func_2278(float var_464_float)
{
	object var_466_object;
	@CreateFloatVector(var_466_object);
	var_466_object->add(var_464_float);
	if(var_464_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_466_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2535(object var_25_object)
{
	int var_26_int;
	func_2606(var_26_int);
	if(var_26_int == 1)
		@WorkWithCorpse(var_25_object);
	else
		@Barter(var_25_object);
	
}


void func_2026(object var_242_object)
{
	cvector var_246_cvector;
	var_242_object->GetPosition(var_246_cvector);
	cvector var_247_cvector;
	@GetPosition(var_247_cvector);
	cvector var_248_cvector = var_246_cvector - var_247_cvector;
	var_249_float = GetByIndex(var_248_cvector, 0);
	var_250_float = GetByIndex(var_248_cvector, 2);
	@RotateAsync(var_249_float, var_250_float);
}


void func_1519(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_1264(object var_0_object)
{
	func_2312(var_0_object);
}


// @pe
void func_498(object var_2_object, string var_3_string)
{
	func_593();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_2548(string var_52_string)
{
	object var_56_object;
	@CreateInvItem(var_56_object);
	var_56_object->SetItemName(var_52_string);
	var_56_object->SetProperty("Organ", 1);
	int var_57_int;
	var_56_object->GetItemID(var_57_int);
	bool var_58_bool;
	@AddItem(var_58_bool, var_56_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_1269(int var_473_int)
{
	var_473_int = 0;
}


void func_2037(bool var_33_bool)
{
	bool var_35_bool;
	@IsLoaded(var_35_bool);
	var_35_bool = var_33_bool;
}


void func_2295(bool var_23_bool, string var_24_string, string var_25_string)
{
	object var_27_object;
	@FindActor(var_27_object, var_24_string);
	if(var_27_object == null)
		var_23_bool = false;
	@Trigger(var_27_object, var_25_string);
	var_23_bool = true;
}
EMIT "Stack[-1] = 0";


void func_2042(bool var_37_bool, object var_38_object, float var_39_float)
{
	cvector var_50_cvector; bool var_57_bool;
	var_38_object->GetPosition(var_50_cvector);
	float var_49_float;
	var_38_object->GetEyesHeight(var_49_float);
	var_58_float = GetByIndex(var_50_cvector, 1);
	SetByIndex(var_50_cvector, 1) = (var_58_float + var_49_float);
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	@GetEyesHeight(var_49_float);
	var_59_float = GetByIndex(var_51_cvector, 1);
	SetByIndex(var_51_cvector, 1) = (var_59_float + var_49_float);
	cvector var_52_cvector = var_50_cvector - var_51_cvector;
	var_60_float = GetByIndex(var_52_cvector, 1);
	SetByIndex(var_52_cvector, 1) = (float)0;
	var_62_float = sqrt(var_52_cvector | var_52_cvector);
	var_52_cvector /= var_62_float;
	cvector var_53_cvector = -var_52_cvector;
	cvector var_64_cvector;
	func_2240(var_64_cvector, (var_53_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_54_cvector = ((var_52_cvector * var_39_float) + (var_64_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_56_bool;
	@IsOverrideActive(var_56_bool);
	if(var_56_bool != 0)
		var_37_bool = false;
	@StopWorld();
	@CameraTransit((var_51_cvector + var_54_cvector), var_53_cvector, true);
	var_78_float = GetByIndex(var_54_cvector, 0);
	var_79_float = GetByIndex(var_54_cvector, 2);
	@Rotate(var_78_float, var_79_float);
	bool var_80_bool;
	func_2644(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		@HasAnimationTrack(var_57_bool, "head");
		if(var_57_bool == 0) goto Label_2105;
		@LookAsyncCamera("head");
	}
Label_2105:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_37_bool = true;
	
}


void func_1271(void)
{
	func_2193("attack_stay");
}


// @pe
void func_1276(void)
{
}


void func_1278(bool var_498_bool)
{
	var_498_bool = true;
}


// @pe
void func_1535(bool var_32_bool, object var_33_object)
{
	object var_35_object;
	var_33_object = var_35_object;
	bool var_34_bool;
	func_1876(var_34_bool, var_35_object);
	var_34_bool = var_32_bool;
}


