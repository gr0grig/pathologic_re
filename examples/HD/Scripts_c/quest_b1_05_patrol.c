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
			func_2137();
			if(var_20_bool == 32276) {
				object var_25_object; object var_26_object;
				var_25_object = var_1_object;
				var_26_object = var_0_object;
				func_2285();
				object var_74_object = var_1_object;
				func_2307(var_0_object);
			}
			if(var_20_bool == 32277) {
				object var_102_object; object var_103_object;
				var_102_object = var_1_object;
				var_103_object = var_0_object;
				func_2285();
				object var_104_object = var_1_object;
				func_2307(var_0_object);
			}
			if(var_19_object == 32269) {
				func_137(var_20_bool, "Neutral");
				var_0_object->SetMessage(530942); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530962, 32271, 32281); //@t
				var_0_object->AddReply(530960, 32280, 32279); //@t
				var_0_object->AddReply(530959, -1, 32278); //@t
				return 0;
			}
			if(var_19_object == 32280) {
				func_137(var_20_bool, "Neutral");
				var_0_object->SetMessage(530961); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530943, 32271, 32270); //@t
				return 0;
			}
			if(var_19_object == 32271) {
				func_137(var_20_bool, "Neutral");
				var_0_object->SetMessage(530944); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530965, 32273, 32285); //@t
				var_0_object->AddReply(530963, 32284, 32283); //@t
				return 0;
			}
			if(var_19_object == 32284) {
				func_137(var_20_bool, "Neutral");
				var_0_object->SetMessage(530964); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530945, 32273, 32272); //@t
				return 0;
			}
			if(var_19_object == 32273) {
				func_137(var_20_bool, "Neutral");
				var_0_object->SetMessage(530946); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530947, 32275, 32274); //@t
				return 0;
			}
			if(var_19_object == 32275) {
				func_137(var_20_bool, "Neutral");
				var_0_object->SetMessage(530948); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530949, -1, 32276); //@t
				var_0_object->AddReply(530950, -1, 32277); //@t
				return 0;
			}
			var_3_string = true;
			bool var_176_bool;
			func_2525(var_176_bool);
			if(var_176_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa0";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
	
		while(true != 0) {
			func_433(var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, (float)300, (float)100);
		}
	
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		func_498(var_18_object, var_19_bool);
		bool var_23_bool;
		func_2527(var_23_bool);
		if(var_23_bool != 0) {
			object var_28_object;
			var_19_bool = var_28_object;
			TaskCall(3);
			func_598(var_28_object);
			TaskReturn();
		}
		int var_531_int; object var_532_object;
		var_19_bool = var_532_object;
		TaskCall(0);
		func_0(var_533_object, var_531_int, var_532_object);
		TaskReturn();
		func_2534();
		object var_666_object;
		var_19_bool = var_666_object;
		TaskCall(3);
		func_598(var_666_object);
		TaskReturn();
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		bool var_20_bool = false;
		bool var_21_bool;
		func_2527(var_21_bool);
		if(var_21_bool != 0) {
			bool var_26_bool; object var_27_object;
			func_1711(var_26_bool, var_27_object);
			if(var_26_bool != 0)
				var_20_bool = true;
		}
		if(var_20_bool != 0) {
			func_498(var_18_object, var_27_object);
			object var_33_object;
			var_19_bool = var_33_object;
			TaskCall(3);
			func_598(var_33_object);
			TaskReturn();
		}
	}

	// @pe
	void OnHear(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		bool var_20_bool = false;
		bool var_21_bool;
		func_2527(var_21_bool);
		if(var_21_bool != 0) {
			bool var_26_bool; object var_27_object;
			func_1711(var_26_bool, var_27_object);
			if(var_26_bool != 0)
				var_20_bool = true;
		}
		if(var_20_bool != 0) {
			func_498(var_18_object, var_27_object);
			object var_33_object;
			var_19_bool = var_33_object;
			TaskCall(3);
			func_598(var_33_object);
			TaskReturn();
		}
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		func_498(var_18_object, var_19_bool);
		func_2534();
		object var_25_object;
		var_19_bool = var_25_object;
		TaskCall(3);
		func_598(var_25_object);
		TaskReturn();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		if(var_19_bool == 10) {
			bool var_22_bool;
			func_460(var_17_bool, var_18_object, var_19_bool, var_22_bool);
			if(var_22_bool != 0) {
				if(!var_2_object) { //@nz
					func_2126(var_4_bool);
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
			func_2241(var_1_object);
		} else {
			int var_27_int;
			func_1485(var_18_bool, var_27_int, var_27_int);
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
			func_2126(var_23_object);
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
		func_1341(var_19_object);
		object var_24_object;
		var_19_object = var_24_object;
		func_2589();
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
			func_2463(var_23_object);
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
	func_1910(var_23_object, var_24_int, var_25_float);
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
	func_1978(var_27_float, var_28_cvector, var_29_cvector);
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
	func_2539(var_20_object);
}


void func_0(object var_0_object, int var_531_int, object var_532_object)
{
	var_0_object = var_532_object;
	bool var_542_bool; object var_543_object;
	var_532_object = var_543_object;
	func_2008(var_542_bool, var_543_object, 70.0);
	if(!var_542_bool) { //@nz
		var_531_int = -2;
		return 8;
	}
	object var_538_object;
	@CreateDialog(var_538_object);
	int var_590_int;
	func_2519(var_590_int);
	var_538_object->SetNPCName(var_590_int);
	int var_591_int;
	func_2517(var_591_int);
	var_538_object->SetNPCDescription(var_591_int);
	string var_592_string;
	func_2521(var_592_string);
	var_538_object->SetPhoto(var_592_string);
	string var_593_string;
	func_2523(var_593_string);
	var_538_object->SetPhoto2(var_593_string);
	int var_594_int;
	func_2440(var_594_int);
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
		var_655_bool = !var_541_bool; //@nz
		if(var_655_bool == 0) goto Label_63;
		@sync();
		var_538_object->IsDialogEnd(var_541_bool);
	}
	
Label_63:
	object var_656_object;
	var_532_object = var_656_object;
	func_2077();
	@StopDialog(var_538_object);
	var_538_object->GetReturnValue(-1);
	int var_540_int = var_531_int;
}
EMIT "Stack[-4] = 0";


void func_512(void)
{
	int var_38_int; int var_39_int; bool var_40_bool; float var_41_float; bool var_42_bool;
	@WaitForAnimEnd();
	bool var_43_bool;
	func_2003(var_43_bool);
	if(!var_43_bool) //@nz
		return 14;
	int var_45_int;
	func_2268(var_45_int);
	int var_36_int;
	var_45_int = var_36_int;
	int var_37_int = 0;
	
	for(;;) {
		bool var_58_bool = false;
		if(var_37_int < 5) {
			bool var_61_bool;
			func_2003(var_61_bool);
			if(var_61_bool != 0)
				var_58_bool = true;
		}
		if(var_58_bool != 0) {
			@irand(var_38_int, 3);
			if(var_38_int == 0) {
				if(var_36_int == 0) goto Label_559;
				@irand(var_39_int, var_36_int);
				string var_67_string; int var_68_int;
				var_39_int = var_68_int;
				func_2261(var_67_string, var_68_int);
				@PlayAnimation("all", var_67_string);
				@WaitForAnimEnd(var_40_bool);
				if(!var_40_bool) { //@nz
				} else {
			} else {
			if(var_38_int == 1) {
				@rand(var_41_float, 4);
				@Sleep((var_41_float + 1), var_42_bool);
				if(!var_42_bool) { //@nz
					goto Label_588;
				}
			} else if(var_37_int != 0) {
				goto Label_588;
			}
			}
					bool var_70_bool;
					func_591(var_70_bool);
					var_71_bool = !var_70_bool; //@nz
					if(var_71_bool == 0) goto Label_583;
			}
		}
	Label_588:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_583:
		@ResetAAS();
		var_37_int += 1;
	}
	
}


// @pe
void func_2307(object var_75_object)
{
	object var_79_object;
	func_2390(var_79_object);
	object var_76_object;
	var_79_object = var_76_object;
	func_2407(var_76_object, "pt_b1q05_patrol1", (float)2);
	object var_99_object;
	func_2390(var_99_object);
	var_75_object->ShowMap(var_99_object);
}


void func_1801(bool var_47_bool, object var_48_object)
{
	bool var_50_bool;
	var_48_object->IsDead(var_50_bool);
	var_50_bool = var_47_bool;
}


void func_1806(bool var_36_bool, object var_37_object)
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
		func_1801(var_47_bool, var_48_object);
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


void func_1530(string var_204_string)
{
	var_204_string = "walk";
}


void func_2323(void)
{
	object var_44_object;
	@CreateDiaryEntry(var_44_object, 582, 2, 530951);
	bool var_48_bool; object var_49_object;
	var_44_object = var_49_object;
	func_2362(var_48_bool, var_49_object, -1);
}
EMIT "Stack[-1] = 0";


void func_1559(object var_47_object)
{
	cvector var_58_cvector; cvector var_59_cvector; cvector var_60_cvector; cvector var_61_cvector; string var_62_string; object var_63_object; bool var_64_bool; bool var_65_bool; float var_66_float; cvector var_67_cvector;
	if(var_47_object == null) {
		func_1650("fdie");
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
		func_2144(var_122_string);
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


void func_1532(string var_205_string)
{
	var_205_string = "run";
}


void func_2077(void)
{
	bool var_658_bool;
	@CameraSwitchToNormal(true);
	bool var_660_bool;
	func_2525(var_660_bool);
	if(var_660_bool != 0) {
	} else {
		@HasAnimationTrack(var_658_bool, "head");
		if(var_658_bool == 0) goto Label_2094;
		@UnlookAsync("head");
	}
Label_2094:
	
}


void func_1056(bool var_495_bool, float var_496_float)
{
	float var_499_float; bool var_500_bool;
	@rand(var_499_float);
	if(var_499_float < var_496_float) {

		for(;;) {
			@IsAnimationPlaying(var_500_bool);
			if(!var_500_bool) { //@nz
			} else {
				bool var_503_bool;
				func_1154(var_503_bool);
				if(var_503_bool != 0) {
					var_495_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_495_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1258(var_500_bool);
}


void func_2336(void)
{
	object var_67_object;
	@CreateDiaryEntry(var_67_object, 583, 2, 530952);
	bool var_71_bool; object var_72_object;
	var_67_object = var_72_object;
	func_2362(var_71_bool, var_72_object, 582);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1534(object var_46_object)
{
	object var_47_object;
	var_46_object = var_47_object;
	func_1559(var_47_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_2349(object var_57_object)
{
	object var_59_object;
	@GetDiaryRoot(var_59_object);
	if(!var_59_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_57_object = false;
	}
	var_59_object = var_57_object;
}
EMIT "Stack[-1] = 0";


void func_2095(string var_639_string)
{
	bool var_643_bool; float var_644_float; float var_645_float;
	@lshHasAnimation(var_643_bool, var_639_string);
	if(var_643_bool != 0) {
		@lshGetAnimTimes(var_639_string, var_644_float, var_645_float);
		@lshPlayAnimation(var_644_float, var_645_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_639_string);
	}
	
}


void func_1842(bool var_32_bool, object var_33_object)
{
	object var_37_object;
	var_33_object = var_37_object;
	bool var_36_bool;
	func_1806(var_36_bool, var_37_object);
	if(!var_36_bool) { //@nz
		var_32_bool = false;
		return 2;
	}
	bool var_54_bool; object var_55_object;
	func_1716(var_54_bool, var_55_object, "noaccess");
	if(!var_54_bool) { //@nz
		var_32_bool = true;
		return 2;
	}
	int var_35_int;
	var_55_object->GetProperty("noaccess", var_35_int);
	var_32_bool = var_35_int == 0;
}


void func_2362(bool var_48_bool, object var_49_object, int var_50_int)
{
	object var_57_object;
	func_2349(var_57_object);
	object var_54_object;
	var_57_object = var_54_object;
	object var_55_object;
	var_54_object->Find(var_50_int, var_55_object);
	if(!var_55_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_50_int);
		var_48_bool = false;
	}
	var_55_object->AddChild(var_49_object);
	@SendWorldWndMessage(7);
	int var_56_int;
	var_49_object->GetCategory(var_56_int);
	@SetDiarySection(var_56_int);
	var_48_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1083(object var_0_object, bool var_292_bool, float var_293_float)
{
	bool var_299_bool; cvector var_300_cvector; cvector var_301_cvector; cvector var_302_cvector; float var_303_float;
	
	for(;;) {
		@IsAnimationPlaying(var_299_bool);
		if(!var_299_bool) //@nz
			break;
		bool var_305_bool;
		func_1154(var_305_bool);
		if(var_305_bool != 0) {
			var_292_bool = true;
			return 10;
		}
		bool var_348_bool;
		func_1842(var_348_bool, var_0_object);
		if(!var_348_bool) { //@nz
			var_292_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_300_cvector); //@t
		@GetPFPosition(var_301_cvector);
		var_302_cvector = var_300_cvector - var_301_cvector;
		var_303_float = var_302_cvector | var_302_cvector;
		if(var_303_float < (var_293_float * var_293_float)) {
			bool var_353_bool; float var_354_float;
			var_293_float = var_354_float;
			func_919(var_302_cvector, var_303_float, var_353_bool, var_354_float);
			var_292_bool = true;
			return 10;
		}
		@sync();
	}
	func_1258(var_303_float);
	var_292_bool = false;
}


void func_1341(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_1507(var_19_object);
}


void func_2111(string var_614_string, bool var_615_bool)
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


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_603_object, object var_604_object)
{
	var_0_object = var_604_object;
	var_1_object = var_603_object;
	var_3_string = false;
	if(1 != 0) {
		func_137(var_604_object, "Neutral");
		var_0_object->SetMessage(530942); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(530962, 32271, 32281); //@t
		var_0_object->AddReply(530960, 32280, 32279); //@t
		var_0_object->AddReply(530959, -1, 32278); //@t
		goto Label_107;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_107:
	bool var_637_bool;
	func_2525(var_637_bool);
	if(var_637_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2095(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_136;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_136:
		return 0;

	}
	
}


void func_1866(object var_36_object)
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


void func_845(object var_1_object, object var_2_object, bool var_4_bool)
{
	bool var_60_bool; bool var_61_bool; cvector var_62_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_60_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_60_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_61_bool, ("attack" + (var_2_object + 1)));
			if(!var_61_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_62_cvector, "all", "bjump");
		var_76_float = GetByIndex(var_62_cvector, 2);
		var_4_bool = -var_76_float;

	}
}


void func_2126(object var_23_object)
{
	float var_26_float;
	var_23_object->GetEyesHeight(var_26_float);
	cvector var_27_cvector = [0.0, 0.0, 0.0];
	var_28_float = GetByIndex(var_27_cvector, 1);
	var_26_float = var_28_float;
	SetByIndex(var_27_cvector, 1) = var_28_float;
	@LookAsync(var_23_object, "head", var_27_cvector);
}


void func_591(bool var_70_bool)
{
	var_70_bool = true;
}


void func_593(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_598(object var_25_object)
{
	
	for(;;) {
		object var_32_object;
		func_616(var_28_int, var_29_bool, var_30_float, var_31_int, var_32_object, var_32_object, true, 180.0);
		@Sleep(1);
	}
}
EMIT "Return(); Pop(0)";


void func_2390(object var_29_object)
{
	object var_32_object; object var_33_object;
	@GetMainOutdoorScene(var_32_object);
	if(var_32_object == null) {
		@Trace("Can't find main outdoor scene");
		var_33_object = null;
		var_33_object = var_29_object;
	}
	var_32_object->GetMap(var_33_object);
	var_33_object = var_29_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2137(void)
{
	bool var_22_bool;
	func_2525(var_22_bool);
	if(var_22_bool != 0)
		@lshStopSpeech();
}


void func_2144(string var_70_string)
{
	bool var_79_bool; int var_80_int; bool var_81_bool; int var_82_int; bool var_83_bool; float var_84_float; cvector var_85_cvector; cvector var_86_cvector;
	@IsExisting3DSound(var_79_bool, var_70_string);
	if(!var_79_bool) { //@nz
		var_80_int = 0;

		for(;;) {
			@IsExisting3DSound(var_81_bool, (var_70_string + (var_80_int + 1)));
			if(!var_81_bool) { //@nz
				break;
			Label_2164:
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
	if(var_92_bool == 0) goto Label_2164;
}


// @pe
void func_610(float var_401_float)
{
	var_401_float = 0.1;
}


// @pe
void func_613(int var_408_int)
{
	var_408_int = 0;
}


void func_1126(object var_0_object, bool var_307_bool)
{
	cvector var_313_cvector; cvector var_314_cvector;
	bool var_318_bool;
	func_1842(var_318_bool, var_0_object);
	if(!var_318_bool) { //@nz
		var_307_bool = false;
		return 10;
	}
	bool var_321_bool;
	float var_317_float;
	func_1215(var_317_float, var_321_bool);
	if(var_321_bool != 0) {
		var_0_object->GetPFPosition(var_313_cvector); //@t
		@GetPFPosition(var_314_cvector);
		var_0_object->GetAttackDistance(var_317_float); //@t
		var_307_bool = ((var_313_cvector - var_314_cvector) | (var_313_cvector - var_314_cvector)) <= ((var_317_float + 50) * (var_317_float + 50));
		return 10;
	}
	var_307_bool = false;
}


void func_1383(object var_0_object, object var_1_object, bool var_164_bool, object var_165_object, float var_166_float, float var_167_float, bool var_168_bool, bool var_169_bool)
{
	bool var_178_bool; object var_180_object; cvector var_181_cvector; cvector var_182_cvector; float var_184_float; object var_185_object;
	var_0_object = false;
	var_1_object = var_165_object;
	bool var_179_bool;
	var_169_bool = var_179_bool;
	
	for(;;) {
		bool var_186_bool; object var_187_object;
		var_165_object = var_187_object;
		func_1523(var_186_bool, var_187_object);
		if(!var_186_bool) { //@nz
			var_164_bool = false;
			return 16;
		}
		var_165_object->GetPosition(var_181_cvector);
		@GetPosition(var_182_cvector);
		var_184_float = (var_181_cvector - var_182_cvector) | (var_181_cvector - var_182_cvector);
		bool var_191_bool = false;
		if(var_167_float > 0) {
			if(var_184_float > (var_167_float * var_167_float))
				var_191_bool = true;
		}
		if(var_191_bool != 0) {
			@Stop();
			var_164_bool = false;
			return 16;
		}
		if(var_184_float > (var_166_float * var_166_float)) {
			var_165_object->GetPFPosition(var_181_cvector);
			@FindPathTo(var_185_object, var_181_cvector);
			if(var_185_object != null) {
				var_185_object = var_180_object;
				var_185_object = null;
			}
			if(var_180_object != null) {
				if(var_179_bool == 0) goto Label_1436;
				var_179_bool = false;
				@RotatePath(var_180_object, var_178_bool);
				if(!var_178_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_204_string;
						func_1530(var_204_string);
						string var_205_string;
						func_1532(var_205_string);
						@FollowPath(var_180_object, var_168_bool, var_178_bool, var_204_string, var_205_string);
						if(!var_178_bool) { //@nz
							if(var_0_object == 0) goto Label_1455;
							var_180_object = null;
						}
					EMIT "GOTO 0x5b0";

					Label_1455:
						} else {
					var_180_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_178_bool);
					if(!var_178_bool) { //@nz
						if(var_0_object != 0) {
							var_180_object = null;
							goto Label_1483;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1483;
		}
			var_185_object = null;
			goto Label_1481;

		Label_1481:
			var_180_object = null;

		}
	Label_1483:
		for(;;) {
			var_164_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_616(object var_0_object, string var_3_string, int var_5_int, object var_32_object, bool var_33_bool, float var_34_float, bool var_141_bool, bool var_233_bool)
{
	float var_46_float; cvector var_47_cvector; cvector var_48_cvector; bool var_50_bool; float var_53_float; cvector var_54_cvector; bool var_55_bool; float var_56_float;
	func_845(var_54_cvector, var_55_bool, var_56_float);
	var_5_int = 0;
	var_81_bool = IsFuncExist(var_32_object, "@GetAttackDistance", 1);
	if(var_81_bool != 0) {
		var_32_object->GetAttackDistance(var_46_float);
		var_46_float += 50;
	} else {
						var_34_float = var_46_float;
	}
	if(var_46_float >= 150)
		var_46_float = 150;
	var_3_string = false;
	var_0_object = var_32_object;
	bool var_49_bool;
	@IsPlayerActor(var_0_object, var_49_bool);
	if(var_49_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_87_object;
		func_2185(var_87_object);
		@SendPlayerEnemy(var_32_object, var_87_object);
	}
	if(var_33_bool != 0)
		var_50_bool = false;
	else
		var_50_bool = true;

	
Label_656:
	for(;;) {
		bool var_92_bool = false;
		bool var_93_bool;
		func_1842(var_93_bool, var_0_object);
		if(var_93_bool != 0) {
			if(!var_3_string) //@nz
				var_92_bool = true;
		}
		if(var_92_bool != 0) {
			func_1258(var_56_float);
			var_0_object->GetPFPosition(var_47_cvector); //@t
			@GetPFPosition(var_48_cvector);
			var_53_float = (var_47_cvector - var_48_cvector) | (var_47_cvector - var_48_cvector);
			if(var_53_float >= ((400.0 + var_46_float) * (400.0 + var_46_float))) {
				bool var_135_bool; float var_137_float;
				var_46_float = var_137_float;
				TaskCall(4);
				func_1278(var_143_bool, var_135_bool, var_0_object, var_137_float, 10000.0, true, false);
				TaskReturn();
				if(!var_141_bool) { //@nz
				} else {
					var_50_bool = false;
			} else {
			if(var_53_float >= (var_34_float * var_34_float)) {
				var_0_object->GetPFPosition(var_54_cvector); //@t
				@CanReachByPF(var_55_bool, var_54_cvector);
				if(!var_55_bool) { //@nz
					bool var_227_bool; float var_229_float;
					var_46_float = var_229_float;
					TaskCall(4);
					func_1278(var_235_bool, var_227_bool, var_0_object, var_229_float, 10000.0, true, false);
					TaskReturn();
					if(!var_233_bool) { //@nz
						goto Label_828;
					}
					var_50_bool = false;
					goto Label_656;
				}
				if(!var_50_bool) { //@nz
					func_1992(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1258(var_56_float);
					@StopAsync();
					var_50_bool = true;
					bool var_249_bool;
					func_1842(var_249_bool, var_0_object);
					if(!var_249_bool) { //@nz
						goto Label_828;
					}
				}
				@rand(var_56_float);
				bool var_252_bool;
				var_254_bool = var_56_float < 0.25;
				if(var_254_bool != 1) {
					bool var_255_bool;
					func_1215(true, var_255_bool);
					if(var_255_bool != 1)
						var_252_bool = false;
				}
				if(var_252_bool != 0) {
					@Face(var_0_object);
					func_1265();
					@PlayAnimation("all", "attack_stay");
					bool var_292_bool; float var_293_float;
					func_1083(var_56_float, var_292_bool, var_293_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1258(var_56_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_514_bool;
					func_1215(var_56_float, var_514_bool);
					var_515_bool = !var_514_bool; //@nz
					if(var_515_bool == 0) goto Label_818;
					bool var_516_bool;
					func_1842(var_516_bool, var_0_object);
					if(!var_516_bool) { //@nz
						goto Label_828;
					}
					var_0_object->GetPFPosition(var_47_cvector); //@t
					@GetPFPosition(var_48_cvector);
					if(!(((var_47_cvector - var_48_cvector) | (var_47_cvector - var_48_cvector)) < (var_293_float * var_293_float))) goto Label_818;
					bool var_521_bool; float var_522_float;
					var_34_float = var_522_float;
					func_919(var_55_bool, var_56_float, var_521_bool, var_522_float);
					var_523_bool = !var_521_bool; //@nz
					if(var_523_bool == 0) goto Label_818;
					goto Label_828;
			}
				bool var_524_bool; float var_525_float;
				var_34_float = var_525_float;
				func_919(var_55_bool, var_56_float, var_524_bool, var_525_float);
				if(!var_524_bool) { //@nz
					goto Label_828;
				}
				var_50_bool = true;

			}
		Label_818:
			goto Label_827;
			}
			Label_827:
			}
		}
	Label_828:
		@WaitForAnimEnd();
		if(var_3_string != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_49_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_2407(object var_76_object, string var_77_string, float var_78_float)
{
	object var_86_object;
	@GetMainOutdoorScene(var_86_object);
	if(var_86_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_84_cvector;
	cvector var_85_cvector;
	bool var_87_bool;
	var_86_object->GetLocator(var_77_string, var_87_bool, var_84_cvector, var_85_cvector);
	if(!var_87_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_77_string) + " doesnt exist");
	var_86_object->GetMap(var_76_object);
	if(var_76_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_97_float = GetByIndex(var_84_cvector, 0);
	var_98_float = GetByIndex(var_84_cvector, 2);
	var_76_object->SetMapParams(var_97_float, var_98_float, var_78_float);
}
EMIT "Stack[-2] = 0";


void func_880(object var_0_object, float var_390_float, int var_391_int)
{
	object var_395_object; float var_396_float; float var_397_float;
	@GetVictim((var_390_float * 0.9), var_395_object);
	@ReportAttack(var_0_object);
	if(var_395_object == var_0_object) {
		float var_401_float; object var_402_object; int var_403_int;
		var_395_object = var_402_object;
		var_391_int = var_403_int;
		func_610(var_403_int);
		var_401_float = var_396_float;
		float var_404_float; object var_405_object; float var_406_float; int var_407_int;
		var_395_object = var_405_object;
		int var_408_int; object var_409_object; int var_410_int;
		var_395_object = var_409_object;
		var_391_int = var_410_int;
		func_613(var_410_int);
		var_408_int = var_407_int;
		func_1728(var_404_float, var_405_object, var_406_float, var_407_int);
		var_404_float = var_397_float;
		int var_469_int;
		func_1263(var_469_int);
		@ReportHit(var_0_object, var_469_int, var_397_float, var_406_float);
		object var_470_object; float var_471_float;
		var_395_object = var_470_object;
		var_397_float = var_471_float;
		func_1270();
	}
}
EMIT "Stack[-3] = 0";


// @pe
void func_1650(string var_69_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_70_string;
	var_69_string = var_70_string;
	func_2144(var_70_string);
	@PlayAnimation("all", var_69_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_69_string);
	@RemoveEnvelope();
}


void func_1910(object var_23_object, int var_24_int, float var_25_float)
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
		func_1696(var_53_cvector, var_54_object);
		var_53_cvector = var_52_cvector;
		func_2191(var_51_cvector, var_52_cvector);
		var_51_cvector = var_35_cvector;
		@CreateVectorVector(var_36_object);
		var_37_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_37_int), var_38_bool, var_39_cvector, var_40_cvector);
			if(!var_38_bool) { //@nz
				break;
			Label_1972:
				var_36_object = null;
	}
			object var_113_object;
			var_23_object = var_113_object;
			func_1866(var_113_object);
		}
		if((var_40_cvector | var_35_cvector) >= 0.70710677)
			var_36_object->add(var_39_cvector);
		var_37_int += 1;
	}
	int var_41_int;
	var_36_object->size(var_41_int);
	if(var_41_int == 0) goto Label_1972;
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
	func_1978(var_70_float, var_71_cvector, var_72_cvector);
}


void func_1154(bool var_305_bool)
{
	bool var_306_bool = false;
	bool var_307_bool;
	func_1126(var_306_bool, var_307_bool);
	if(var_307_bool != 0) {
		bool var_324_bool;
		func_1170(var_305_bool, var_306_bool, var_324_bool);
		if(var_324_bool != 0)
			var_306_bool = true;
	}
	if(var_306_bool != 0) {
		var_305_bool = true;
		return 0;
	}
	var_305_bool = false;
}


void func_2440(int var_594_int)
{
	int var_596_int;
	@GetVariable("branch", var_596_int);
	if(var_596_int == 0) {
		var_594_int = 1;
		return 2;
	EMIT "GOTO 0x997";
	}
	if(var_596_int == 1) {
		var_594_int = 2;
		return 2;
	}
	var_594_int = 3;
}


// @pe
void func_137(object var_2_object, string var_610_string)
{
	bool var_611_bool;
	func_2525(var_611_bool);
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
	func_2111(var_614_string, var_615_bool);
	var_2_object = var_610_string;
	
}


void func_2185(object var_23_object)
{
	object var_25_object;
	@self(var_25_object);
	var_25_object = var_23_object;
}
EMIT "Stack[-1] = 0";


void func_2191(cvector var_51_cvector, cvector var_52_cvector)
{
	float var_60_float = sqrt(var_52_cvector | var_52_cvector);
	if(var_60_float < 0.000001)
		var_51_cvector = [0.0, 0.0, 0.0];
	var_51_cvector = var_52_cvector / var_60_float;
}


void func_1170(object var_0_object, bool var_4_bool, bool var_324_bool)
{
	object var_330_object; float var_332_float; cvector var_333_cvector; cvector var_334_cvector;
	@GetScene(var_330_object);
	bool var_331_bool = false;
	
	for(;;) {
		cvector var_335_cvector;
		func_1696(var_335_cvector, var_0_object);
		var_341_int = -var_335_cvector;
		@FindDirLength(var_332_float, var_341_int, var_4_bool);
		if(var_332_float < var_4_bool) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_333_cvector); //@t
				@GetPFPosition(var_334_cvector);
				@WaitForAnimEnd();
				func_1258(var_334_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_331_bool = true;
				bool var_346_bool;
				func_1126(var_334_cvector, var_346_bool);
				var_347_bool = !var_346_bool; //@nz
				if(var_347_bool == 0) goto Label_1211;
		}
		for(;;) {
			var_331_bool = var_324_bool;

		}

	Label_1211:
	}
}
EMIT "Stack[-5] = 0";


// @pe
void func_1682(string var_432_string, int var_433_int)
{
	if(var_433_int == 2) {
		var_432_string = "fire";
		return 0;
	EMIT "GOTO 0x69e";
	}
	if(var_433_int == 1) {
		var_432_string = "bullet";
		return 0;
	}
	var_432_string = "phys";
}


void func_919(object var_0_object, object var_1_object, bool var_353_bool, float var_354_float)
{
	string var_362_string;
	func_1258(var_362_string);
	int var_359_int;
	@irand(var_359_int, var_1_object);
	@Face(var_0_object);
	@SetAttackState(true);
	func_2250();
	@PlayAnimation("all", ("attack_begin" + (var_359_int + 1)));
	@WaitForAnimEnd();
	int var_361_int;
	func_1226(var_361_int, var_362_string);
	bool var_387_bool;
	func_1842(var_387_bool, var_0_object);
	if(!var_387_bool) { //@nz
		@StopAsync();
		var_353_bool = false;
		return 8;
	}
	float var_390_float; int var_391_int;
	var_354_float = var_390_float;
	var_359_int = var_391_int;
	func_880(var_362_string, var_390_float, var_391_int);
	bool var_360_bool;
	@HasAnimation(var_360_bool, "all", ("attack_middle" + var_359_int));
	if(var_360_bool != 0) {
		func_2250();
		@PlayAnimation("all", ("attack_middle" + var_359_int));
		@WaitForAnimEnd();
		func_1258(var_362_string);
		bool var_479_bool;
		func_1842(var_479_bool, var_0_object);
		if(!var_479_bool) { //@nz
			@StopAsync();
			var_353_bool = false;
			return 8;
		}
		float var_482_float; int var_483_int;
		var_354_float = var_482_float;
		func_880(var_362_string, var_482_float, var_483_int);
		var_361_int = 1;

		for(;;) {
			var_362_string = (("attack_middle" + var_483_int) + "_") + var_361_int;
			@HasAnimation(var_360_bool, "all", var_362_string);
			if(!var_360_bool) { //@nz
			} else {
				func_2250();
				@PlayAnimation("all", var_362_string);
				@WaitForAnimEnd();
				func_1258(var_362_string);
				bool var_505_bool;
				func_1842(var_505_bool, var_0_object);
				if(!var_505_bool) { //@nz
					@StopAsync();
					var_353_bool = false;
					return 8;
				}
				float var_508_float; int var_509_int;
				var_354_float = var_508_float;
				var_359_int = var_509_int;
				func_880(var_362_string, var_508_float, var_509_int);
				var_361_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_359_int));
		bool var_494_bool;
		func_1272(var_494_bool);
		if(var_494_bool != 0) {
			bool var_495_bool;
			func_1056(var_495_bool, 0.75);
			@StopAsync();
		}
		var_353_bool = true;
		return 8;

	}
}


// @pe
void func_2201(float var_442_float, float var_443_float, float var_444_float)
{
	if(var_443_float < var_444_float)
		var_443_float = var_442_float;
	else
		var_444_float = var_442_float;
	
}


void func_2457(int var_26_int)
{
	int var_28_int;
	@GetVariable("branch", var_28_int);
	var_28_int = var_26_int;
}


// @pe
void func_2463(object var_23_object)
{
	int var_24_int;
	func_2457(var_24_int);
	if(var_24_int == 1)
		@WorkWithCorpse(var_23_object);
	else
		@Barter(var_23_object);
	
}


void func_1696(cvector var_53_cvector, object var_54_object)
{
	cvector var_57_cvector;
	@GetPosition(var_57_cvector);
	cvector var_58_cvector;
	var_54_object->GetPosition(var_58_cvector);
	var_53_cvector = var_58_cvector - var_57_cvector;
}


// @pe
void func_2208(float var_452_float, float var_453_float, float var_454_float, float var_455_float)
{
	if(var_453_float < var_454_float) {
		var_454_float = var_452_float;
		return 0;
	}
	if(var_453_float > var_455_float) {
		var_455_float = var_452_float;
		return 0;
	}
	var_453_float = var_452_float;
}


void func_1703(float var_26_float, object var_27_object)
{
	cvector var_31_cvector;
	@GetPosition(var_31_cvector);
	cvector var_32_cvector;
	var_27_object->GetPosition(var_32_cvector);
	var_26_float = (var_32_cvector - var_31_cvector) | (var_32_cvector - var_31_cvector);
}


void func_2219(float var_460_float)
{
	object var_462_object;
	@CreateFloatVector(var_462_object);
	var_462_object->add(var_460_float);
	if(var_460_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_462_object);
}
EMIT "Stack[-1] = 0";


void func_2476(string var_32_string)
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


void func_1711(bool var_159_bool, object var_160_object)
{
	bool var_162_bool;
	@IsPlayerActor(var_160_object, var_162_bool);
	var_162_bool = var_159_bool;
}


// @pe
void func_433(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_20_float, float var_21_float)
{
	bool var_22_bool;
	func_2003(var_22_bool);
	if(!var_22_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_20_float;
	var_1_object = var_21_float;
	@SetTimer(10, 1.0);
	func_512();
	if(!false) //@nz
		@KillTimer(10);
}


void func_1716(bool var_54_bool, object var_55_object, string var_56_string)
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


void func_1978(object var_25_object, cvector var_28_cvector, cvector var_29_cvector)
{
	object var_32_object;
	@GetScene(var_32_object);
	object var_33_object;
	@AddActorByType(var_33_object, "scripted", var_32_object, var_28_cvector, var_29_cvector, "blood_dir.xml");
	object var_36_object;
	var_25_object = var_36_object;
	func_1866(var_36_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2236(float var_40_float)
{
	float var_42_float;
	@GetGameTime(var_42_float);
	var_42_float = var_40_float;
}


void func_2493(void)
{
	int var_26_int;
	func_2457(var_26_int);
	if(var_26_int != 1) {
	}
	func_2476("liver");
	func_2476("kidney");
	func_2476("heart");
	func_2476("blood");
}


void func_1215(object var_0_object, bool var_255_bool)
{
	bool var_257_bool;
	var_260_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_260_bool != 0) {
		var_0_object->IsAttacking(var_257_bool); //@t
		var_257_bool = var_255_bool;
	}
	var_255_bool = false;
}


void func_1728(float var_404_float, object var_405_object, float var_406_float, int var_407_int)
{
	int var_417_int; int var_419_int;
	object var_424_object;
	var_405_object = var_424_object;
	bool var_423_bool;
	func_1716(var_423_bool, var_424_object, "health");
	if(!var_423_bool) //@nz
		var_404_float = 0.0;
	bool var_427_bool; object var_428_object;
	func_1716(var_427_bool, var_428_object, "armor");
	if(!var_427_bool) //@nz
		var_417_int = 0;
	else
		var_428_object->GetProperty("armor", var_417_int);
	string var_432_string; int var_433_int;
	var_407_int = var_433_int;
	func_1682(var_432_string, var_433_int);
	string var_418_string = "armor_" + var_432_string;
	bool var_438_bool; object var_439_object; string var_440_string;
	var_405_object = var_439_object;
	func_1716(var_438_bool, var_439_object, var_440_string);
	if(!var_438_bool) //@nz
		var_419_int = 0;
	else
		var_405_object->GetProperty(var_440_string, var_419_int);

	float var_442_float;
	func_2201(var_442_float, ((var_417_int + var_419_int) / 100.0), (float)1);
	float var_420_float;
	var_442_float = var_420_float;
	float var_421_float;
	var_405_object->GetProperty("health", var_421_float);
	float var_422_float = var_406_float * (1 - var_420_float);
	float var_452_float;
	func_2208(var_452_float, (var_421_float - var_422_float), (float)0, (float)1);
	var_405_object->SetProperty("health", var_452_float);
	bool var_458_bool; object var_459_object;
	var_405_object = var_459_object;
	func_1711(var_458_bool, var_459_object);
	if(var_458_bool != 0) {
		float var_460_float = -var_422_float;
		func_2219(var_460_float);
	}
	var_422_float = var_404_float;
	
}


void func_2241(object var_22_object)
{
	bool var_24_bool;
	@IsPlayerActor(var_22_object, var_24_bool);
	if(var_24_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1992(object var_238_object)
{
	cvector var_242_cvector;
	var_238_object->GetPosition(var_242_cvector);
	cvector var_243_cvector;
	@GetPosition(var_243_cvector);
	cvector var_244_cvector = var_242_cvector - var_243_cvector;
	var_245_float = GetByIndex(var_244_cvector, 0);
	var_246_float = GetByIndex(var_244_cvector, 2);
	@RotateAsync(var_245_float, var_246_float);
}


void func_2250(void)
{
	object var_366_object;
	@GetScene(var_366_object);
	object var_368_object;
	func_2185(var_368_object);
	@BroadcastMessage("battle", var_368_object, var_366_object);
}
EMIT "Stack[-1] = 0";


void func_1226(object var_2_object, int var_5_int)
{
	int var_375_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_int != 0) {
		if((var_5_int + -1) > 0)
			return 4;
	}
	float var_374_float;
	@rand(var_374_float);
	float var_381_float;
	func_1276(var_381_float);
	if(var_374_float < var_381_float) {
		@irand(var_375_int, var_2_object);
		@Speak("attack" + (var_375_int + 1));
		int var_386_int;
		func_1274(var_386_int);
		var_5_int = var_386_int;
	}
}


void func_460(object var_0_object, object var_1_object, bool var_4_bool, bool var_22_bool)
{
	if(var_4_bool == null)
		var_22_bool = false;
	float var_26_float;
	func_1703(var_26_float, var_4_bool);
	float var_24_float = sqrt(var_26_float);
	if(var_2_object != 0)
		var_24_float -= var_1_object;
	var_22_bool = var_24_float < var_0_object;
}


// @pe
void func_1485(object var_0_object, object var_1_object, int var_27_int)
{
	if(var_27_int != 0)
		return 0;
	bool var_30_bool;
	func_1523(var_30_bool, var_1_object);
	if(!var_30_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_2003(bool var_22_bool)
{
	bool var_24_bool;
	@IsLoaded(var_24_bool);
	var_24_bool = var_22_bool;
}


void func_2261(string var_51_string, int var_52_int)
{
	string var_54_string = "idle";
	if(var_52_int != 0)
		var_54_string += var_52_int;
	var_54_string = var_51_string;
}


void func_2517(int var_591_int)
{
	var_591_int = 515572;
}


void func_2519(int var_590_int)
{
	var_590_int = 504031;
}


void func_2008(bool var_542_bool, object var_543_object, float var_544_float)
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
	func_2191(var_569_cvector, (var_558_cvector ^ [0.0, 1.0, 0.0]));
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
	func_2525(var_585_bool);
	if(var_585_bool != 0) {
	} else {
		@HasAnimationTrack(var_562_bool, "head");
		if(var_562_bool == 0) goto Label_2071;
		@LookAsyncCamera("head");
	}
Label_2071:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_542_bool = true;
	
}


void func_2521(string var_592_string)
{
	var_592_string = "ui/NPC_Citizen2.png";
}


void func_2523(string var_593_string)
{
	var_593_string = "ui/NPC_Citizen2_b.png";
}


void func_2268(int var_45_int)
{
	int var_48_int; bool var_49_bool;
	var_48_int = 0;
	
	for(;;) {
		string var_51_string; int var_52_int;
		var_48_int = var_52_int;
		func_2261(var_51_string, var_52_int);
		@HasAnimation(var_49_bool, "all", var_51_string);
		if(!var_49_bool) //@nz
			break;
		var_48_int += 1;
	}
	var_48_int = var_45_int;
}


void func_2525(bool var_585_bool)
{
	var_585_bool = false;
}


void func_2527(bool var_21_bool)
{
	int var_23_int;
	@GetVariable("b1q05ToAttack", var_23_int);
	var_21_bool = var_23_int != 0;
}


void func_1507(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_2534(void)
{
	@SetVariable("b1q05ToAttack", 1);
}


void func_1258(object var_0_object)
{
	func_2241(var_0_object);
}


void func_2539(object var_20_object)
{
	object var_22_object;
	@GetScene(var_22_object);
	object var_23_object;
	func_2185(var_23_object);
	var_22_object->RemoveStationaryActor(var_23_object);
	func_2493();
	object var_46_object;
	var_20_object = var_46_object;
	TaskCall(5);
	func_1534(var_46_object);
	TaskReturn();
}
EMIT "Stack[-1] = 0";


void func_2285(void)
{
	object var_29_object;
	func_2390(var_29_object);
	object var_28_object;
	var_29_object = var_28_object;
	float var_40_float;
	func_2236(var_40_float);
	var_28_object->AddMark("b1q05PatrolGroup", "pt_b1q05_patrol1", 0, 530956, var_40_float);
	func_2323();
	func_2336();
}
EMIT "Stack[-1] = 0";


void func_1263(int var_469_int)
{
	var_469_int = 0;
}


void func_1265(void)
{
	func_2144("attack_stay");
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


// @pe
void func_1523(bool var_30_bool, object var_31_object)
{
	object var_33_object;
	var_31_object = var_33_object;
	bool var_32_bool;
	func_1842(var_32_bool, var_33_object);
	var_32_bool = var_30_bool;
}


// @pe
void func_1270(void)
{
}


void func_1272(bool var_494_bool)
{
	var_494_bool = true;
}


void func_1274(int var_386_int)
{
	var_386_int = 1;
}


void func_1276(float var_381_float)
{
	var_381_float = 0.5;
}


void func_1278(object var_2_object, bool var_135_bool, object var_136_object, float var_137_float, float var_138_float, bool var_139_bool, bool var_140_bool)
{
	object var_148_object;
	func_2241(var_148_object);
	@SetTimer(1, 5);
	bool var_146_bool;
	@CanSee(var_146_bool, var_148_object);
	if(var_146_bool != 0) {
		var_2_object = true;
		object var_152_object;
		var_136_object = var_152_object;
		func_2126(var_152_object);
	} else {
		var_2_object = false;
	}
	bool var_159_bool; object var_160_object;
	func_1711(var_159_bool, var_160_object);
	if(var_159_bool != 0) {
		object var_163_object;
		func_2185(var_163_object);
		@SendPlayerEnemy(var_160_object, var_163_object);
	}
	bool var_164_bool; object var_165_object; float var_166_float; float var_167_float; bool var_168_bool; bool var_169_bool;
	var_136_object = var_165_object;
	var_137_float = var_166_float;
	var_138_float = var_167_float;
	var_139_bool = var_168_bool;
	var_140_bool = var_169_bool;
	bool var_147_bool;
	func_1383(var_146_bool, var_147_bool, var_164_bool, var_165_object, var_166_float, var_167_float, var_168_bool, var_169_bool);
	var_164_bool = var_147_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_147_bool = var_135_bool;
	
}


