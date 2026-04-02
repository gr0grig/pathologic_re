// @GLOBALS: 0:bool:,1:object:,2:bool:

task task_0
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool)
	{
		object var_16_object;
		var_15_bool = var_16_object;
		func_2968();
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_19_object;
		var_15_object = var_19_object;
		object var_20_object;
		var_16_string = var_20_object;
		func_2970(var_20_object);
	}

	// @pe
	void OnTrigger(bool var_0_bool, string var_1_string, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool)
	{
		if(var_15_bool == "kill")
			var_0_bool = true;
	}

}


task task_1
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, object var_7_object, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool)
	{
		object var_16_object;
		var_15_bool = var_16_object;
		func_2968();
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, object var_7_object, object var_8_object, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_19_object;
		var_15_object = var_19_object;
		object var_20_object;
		var_16_string = var_20_object;
		func_2970(var_20_object);
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, string var_7_string, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool)
	{
		if(var_15_bool == "kill") {
			var_18_bool = GlobalVars[0];
			GlobalVars[0] = true;
		}
	}

}


task task_2
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool)
	{
		object var_16_object;
		var_15_bool = var_16_object;
		func_2968();
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_19_object;
		var_15_object = var_19_object;
		object var_20_object;
		var_16_string = var_20_object;
		func_2970(var_20_object);
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, string var_10_string, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool)
	{
		if(var_15_bool == "kill") {
			var_18_bool = GlobalVars[0];
			GlobalVars[0] = true;
			func_950(var_15_bool);
		}
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, int var_10_int, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool)
	{
		if(var_15_bool == 1) {
			func_2618(var_1_object);
		} else {
			int var_23_int;
			func_1094(var_14_string, var_23_int, var_23_int);
		}
	
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool)
	{
		bool var_16_bool = false;
		if(var_1_object == var_15_bool) {
			if(!var_2_int) //@nz
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			var_2_int = true;
			object var_19_object;
			var_15_bool = var_19_object;
			func_2405(var_19_object);
		}
	}

	// @pe
	void OnStopSee(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool)
	{
		bool var_16_bool = false;
		if(var_1_object == var_15_bool) {
			if(var_2_int != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			var_2_int = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool)
	{
		@RequestClearPath(var_15_bool);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool)
	{
		func_950(var_15_bool);
		object var_20_object;
		var_15_bool = var_20_object;
		func_2945();
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int)
	{
		if(1 != 0) {
			func_2416();
			if(var_16_int == 20248) {
				object var_21_object; object var_22_object;
				var_21_object = var_1_object;
				var_22_object = var_0_bool;
				func_2719();
			}
			if(var_16_int == 20242) {
				object var_31_object; object var_32_object;
				var_31_object = var_1_object;
				var_32_object = var_0_bool;
				func_2719();
			}
			if(var_16_int == 20258) {
				object var_35_object; object var_36_object;
				var_35_object = var_1_object;
				var_36_object = var_0_bool;
				func_2719();
			}
			if(var_16_int == 20255) {
				object var_39_object; object var_40_object;
				var_39_object = var_1_object;
				var_40_object = var_0_bool;
				func_2719();
			}
			if(var_15_int == 19494) {
				bool var_43_bool;
				func_2726(var_1_object);
				if(!var_43_bool) { //@nz
					object var_52_object; object var_53_object;
					var_52_object = var_1_object;
					var_53_object = var_0_bool;
					func_2713();
					func_1316(var_16_int, "Neutral");
					var_0_bool->SetMessage(518381); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(519109, 20244, 20240); //@t
					var_0_bool->AddReply(518382, 20241, 19495); //@t
					return 0;
				}
				bool var_75_bool;
				func_2726(var_1_object);
				if(var_75_bool != 0) {
					object var_77_object; object var_78_object;
					var_77_object = var_1_object;
					var_78_object = var_0_bool;
					func_2713();
					func_1316(var_16_int, "Neutral");
					var_0_bool->SetMessage(518383); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(518384, 20252, 19497); //@t
					var_0_bool->AddReply(519119, 20252, 20251); //@t
					return 0;
				}
			}
			if(var_15_int == 20252) {
				func_1316(var_16_int, "Neutral");
				var_0_bool->SetMessage(519120); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519121, 20256, 20254); //@t
				var_0_bool->AddReply(519122, -1, 20255); //@t
				return 0;
			}
			if(var_15_int == 20256) {
				func_1316(var_16_int, "Neutral");
				var_0_bool->SetMessage(519123); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519124, -1, 20257); //@t
				var_0_bool->AddReply(519125, -1, 20258); //@t
				return 0;
			}
			if(var_15_int == 20241) {
				func_1316(var_16_int, "Neutral");
				var_0_bool->SetMessage(519110); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519111, -1, 20242); //@t
				var_0_bool->AddReply(519112, -1, 20243); //@t
				return 0;
			}
			if(var_15_int == 20244) {
				func_1316(var_16_int, "Neutral");
				var_0_bool->SetMessage(519113); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519114, 20247, 20245); //@t
				var_0_bool->AddReply(519115, 20247, 20246); //@t
				return 0;
			}
			if(var_15_int == 20247) {
				func_1316(var_16_int, "Neutral");
				var_0_bool->SetMessage(519116); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519117, -1, 20248); //@t
				var_0_bool->AddReply(519118, -1, 20250); //@t
				return 0;
			}
			var_3_int = true;
			bool var_137_bool;
			func_2687(var_137_bool);
			if(var_137_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x53b";
	
	}

}


maintask task_5
{
	// @pe
	void init(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool)
	{
	
		for(;;) {
			func_1604();
			@Sleep(3);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object)
	{
		func_1685();
		int var_16_int; object var_17_object;
		var_15_object = var_17_object;
		TaskCall(3);
		func_1143(var_18_object, var_16_int, var_17_object);
		TaskReturn();
	}

	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object)
	{
		bool var_16_bool;
		func_2606(var_16_bool, "quest_b3_02", "grabitel_attack");
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, string var_15_string)
	{
		if(var_15_string == "attack") {
			TaskCall(6);
			func_1690();
			TaskReturn();
		}
	}

}


task task_6
{
}


task task_7
{
	void OnUse(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object)
	{
		bool var_17_bool;
		@IsOverrideActive(var_17_bool);
		if(!var_17_bool) { //@nz
			object var_19_object;
			var_15_object = var_19_object;
			func_2761(var_19_object);
		}
	}

	// @pe
	void OnHit(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, int var_16_int, float var_17_float, float var_18_float)
	{
	}

	// @pe
	void OnPropertyChange(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, string var_16_string)
	{
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object)
	{
	}

}


// @pe
void OnHit(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, int var_16_int, float var_17_float, float var_18_float)
{
	object var_19_object;
	var_15_object = var_19_object;
	int var_20_int;
	var_16_int = var_20_int;
	float var_21_float;
	var_17_float = var_21_float;
	func_2209(var_19_object, var_20_int, var_21_float);
}


// @pe
void OnHit2(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, int var_16_int, float var_17_float, float var_18_float, cvector var_19_cvector, cvector var_20_cvector)
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
	func_2277(var_23_float, var_24_cvector, var_25_cvector);
}


void OnPropertyChange(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, string var_16_string)
{
	float var_18_float;
	if(var_16_string == "health") {
		@GetProperty("health", var_18_float);
		if(var_18_float <= 0)
			@SignalDeath(var_15_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object)
{
	object var_16_object;
	var_15_object = var_16_object;
	func_2881(var_16_object);
}


void OnUnload(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool)
{
	object var_16_object;
	var_17_bool = GlobalVars[2];
	if(var_17_bool != 0) {
		@GetScene(var_16_object);
		object var_18_object;
		func_2475(var_18_object);
		var_16_object->RemoveStationaryActor(var_18_object);
		bool var_21_bool;
		func_2606(var_21_bool, "quest_b3_02", "grabitel_dead");
		var_16_object = null;
	}
}


void func_0(bool var_0_bool, bool var_76_bool, object var_77_object, object var_196_object)
{
	object var_93_object;
	var_77_object = var_93_object;
	func_2618(var_93_object);
	bool var_98_bool; object var_99_object;
	var_77_object = var_99_object;
	func_2156(var_98_bool, var_99_object);
	bool var_112_bool; object var_113_object;
	func_2122(var_112_bool, var_113_object);
	if(!var_112_bool) { //@nz
		var_76_bool = false;
		return 14;
	}
	func_2627();
	@Face(var_113_object);
	@PlayAnimation("all", "aattack_begin1");
	@WaitForAnimEnd();
	bool var_123_bool; object var_124_object;
	var_77_object = var_124_object;
	func_2122(var_123_bool, var_124_object);
	if(!var_123_bool) { //@nz
		@StopAsync();
		var_76_bool = false;
		return 14;
	}
	@PlayAnimation("all", "aattack_end1");
	object var_86_object;
	@GetScene(var_86_object);
	cvector var_87_cvector;
	bool var_88_bool;
	@GetGeometryLocator("knife", var_88_bool, var_87_cvector);
	object var_89_object;
	@AddActorByType(var_89_object, "scripted", var_86_object, var_87_cvector, [0.0, 0.0, 1.0], "grabitel_knife.xml");
	object var_133_object;
	func_2475(var_133_object);
	var_89_object->SetScriptProperty("Owner", var_133_object);
	var_89_object->SetScriptProperty("Target", var_77_object);
	cvector var_90_cvector;
	var_77_object->GetPosition(var_90_cvector);
	float var_91_float;
	var_77_object->GetEyesHeight(var_91_float);
	var_135_float = GetByIndex(var_90_cvector, 1);
	SetByIndex(var_90_cvector, 1) = (var_135_float + (var_91_float - 10));
	cvector var_138_cvector; cvector var_139_cvector; cvector var_140_cvector;
	var_87_cvector = var_139_cvector;
	var_90_cvector = var_140_cvector;
	func_2644(var_138_cvector, var_139_cvector, var_140_cvector, 2000.0);
	cvector var_92_cvector;
	var_138_cvector = var_92_cvector;
	var_89_object->SetScriptProperty("StartDirection", var_92_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	if(false != 0) {
		var_76_bool = true;
		return 14;
	}
	bool var_191_bool; object var_192_object;
	var_77_object = var_192_object;
	func_2122(var_191_bool, var_192_object);
	if(!var_191_bool) { //@nz
		var_76_bool = false;
		return 14;
	}
	bool var_194_bool; object var_195_object;
	var_77_object = var_195_object;
	TaskCall(1);
	func_126(var_194_bool, var_195_object);
	TaskReturn();
	var_196_object = var_76_bool;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


void func_2050(bool var_600_bool, object var_601_object)
{
	object var_605_object;
	var_601_object = var_605_object;
	bool var_604_bool;
	func_1943(var_604_bool, var_605_object, "health");
	if(!var_604_bool) { //@nz
		var_600_bool = false;
		return 2;
	}
	bool var_608_bool = false;
	bool var_609_bool; object var_610_object;
	func_1938(var_609_bool, var_610_object);
	if(var_609_bool != 0) {
		bool var_611_bool;
		func_2638(var_611_bool);
		if(var_611_bool != 0)
			var_608_bool = true;
	}
	if(var_608_bool != 0) {
		var_600_bool = false;
		return 2;
	}
	float var_603_float;
	var_610_object->GetProperty("health", var_603_float);
	var_600_bool = var_603_float <= 0.0;
}


void func_2586(float var_589_float)
{
	object var_591_object;
	@CreateFloatVector(var_591_object);
	var_591_object->add(var_589_float);
	@SendWorldWndMessage(15, var_591_object);
}
EMIT "Stack[-1] = 0";


void func_2081(bool var_42_bool, object var_43_object)
{
	bool var_45_bool;
	var_43_object->IsDead(var_45_bool);
	var_45_bool = var_42_bool;
}


void func_2596(float var_40_float)
{
	object var_42_object;
	@CreateFloatVector(var_42_object);
	var_42_object->add(var_40_float);
	@SendWorldWndMessage(16, var_42_object);
}
EMIT "Stack[-1] = 0";


void func_2086(bool var_31_bool, object var_32_object)
{
	if(var_32_object == null) {
		var_31_bool = false;
		return 4;
	}
	bool var_38_bool = false;
	var_41_bool = IsFuncExist(var_32_object, "IsDead", 1);
	if(var_41_bool != 0) {
		bool var_42_bool; object var_43_object;
		var_32_object = var_43_object;
		func_2081(var_42_bool, var_43_object);
		if(var_42_bool != 0)
			var_38_bool = true;
	}
	if(var_38_bool != 0) {
		var_31_bool = false;
		return 4;
	}
	object var_35_object;
	@GetScene(var_35_object);
	if(var_35_object == null) {
		var_31_bool = false;
		return 4;
	}
	object var_36_object;
	var_32_object->GetScene(var_36_object);
	if(var_35_object != var_36_object) {
		var_31_bool = false;
		return 4;
	}
	var_31_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2606(bool var_21_bool, string var_22_string, string var_23_string)
{
	object var_25_object;
	@FindActor(var_25_object, var_22_string);
	if(var_25_object == null)
		var_21_bool = false;
	@Trigger(var_25_object, var_23_string);
	var_21_bool = true;
}
EMIT "Stack[-1] = 0";


void func_2618(object var_93_object)
{
	bool var_95_bool;
	@IsPlayerActor(var_93_object, var_95_bool);
	if(var_95_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_2627(void)
{
	object var_116_object;
	@GetScene(var_116_object);
	object var_118_object;
	func_2475(var_118_object);
	@BroadcastMessage("battle", var_118_object, var_116_object);
}
EMIT "Stack[-1] = 0";


void func_1604(void)
{
	int var_24_int; int var_25_int; bool var_26_bool; float var_27_float; bool var_28_bool;
	@WaitForAnimEnd();
	bool var_29_bool;
	func_2302(var_29_bool);
	if(!var_29_bool) //@nz
		return 14;
	int var_33_int;
	func_2696(var_33_int);
	int var_22_int;
	var_33_int = var_22_int;
	int var_23_int = 0;
	
	for(;;) {
		bool var_46_bool = false;
		if(var_23_int < 5) {
			bool var_49_bool;
			func_2302(var_49_bool);
			if(var_49_bool != 0)
				var_46_bool = true;
		}
		if(var_46_bool != 0) {
			@irand(var_24_int, 3);
			if(var_24_int == 0) {
				if(var_22_int == 0) goto Label_1651;
				@irand(var_25_int, var_22_int);
				string var_55_string; int var_56_int;
				var_25_int = var_56_int;
				func_2689(var_55_string, var_56_int);
				@PlayAnimation("all", var_55_string);
				@WaitForAnimEnd(var_26_bool);
				if(!var_26_bool) { //@nz
				} else {
			} else {
			if(var_24_int == 1) {
				@rand(var_27_float, 4);
				@Sleep((var_27_float + 1), var_28_bool);
				if(!var_28_bool) { //@nz
					goto Label_1680;
				}
			} else if(var_23_int != 0) {
				goto Label_1680;
			}
			}
					bool var_58_bool;
					func_1683(var_58_bool);
					var_59_bool = !var_58_bool; //@nz
					if(var_59_bool == 0) goto Label_1675;
			}
		}
	Label_1680:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_1675:
		@ResetAAS();
		var_23_int += 1;
	}
	
}


// @pe
void func_1094(bool var_0_bool, object var_1_object, int var_23_int)
{
	if(var_23_int != 0)
		return 0;
	bool var_26_bool;
	func_1132(var_26_bool, var_1_object);
	if(!var_26_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_2122(bool var_27_bool, object var_28_object)
{
	object var_32_object;
	var_28_object = var_32_object;
	bool var_31_bool;
	func_2086(var_31_bool, var_32_object);
	if(!var_31_bool) { //@nz
		var_27_bool = false;
		return 2;
	}
	bool var_49_bool; object var_50_object;
	func_1943(var_49_bool, var_50_object, "noaccess");
	if(!var_49_bool) { //@nz
		var_27_bool = true;
		return 2;
	}
	int var_30_int;
	var_50_object->GetProperty("noaccess", var_30_int);
	var_27_bool = var_30_int == 0;
}


void func_2638(bool var_611_bool)
{
	bool var_613_bool;
	@GetVariable("god_mode", var_613_bool);
	var_613_bool = var_611_bool;
}


void func_2644(cvector var_138_cvector, cvector var_139_cvector, cvector var_140_cvector, float var_141_float)
{
	cvector var_148_cvector; float var_153_float;
	var_148_cvector = var_140_cvector - var_139_cvector;
	float var_149_float = 250000;
	var_154_float = GetByIndex(var_148_cvector, 1);
	float var_150_float = (var_154_float * 1000) - (var_141_float * var_141_float);
	float var_151_float = var_148_cvector | var_148_cvector;
	float var_158_float; float var_159_float; float var_160_float; float var_161_float;
	var_149_float = var_159_float;
	var_150_float = var_160_float;
	var_151_float = var_161_float;
	func_2498(var_158_float, var_159_float, var_160_float, var_161_float);
	float var_152_float;
	var_158_float = var_152_float;
	if(var_152_float < 0) {
		var_153_float = 1;
	} else {
		float var_172_float; float var_173_float; float var_174_float; float var_175_float; float var_176_float;
		var_149_float = var_173_float;
		var_150_float = var_174_float;
		var_151_float = var_175_float;
		var_176_float = sqrt(var_152_float);
		func_2505(var_173_float, var_174_float, var_175_float, var_176_float);
		var_153_float = sqrt(var_172_float);
	}
	var_138_cvector = (var_148_cvector + (([0.0, 500.0, 0.0] * var_153_float) * var_153_float)) / var_153_float;
	
}


void func_1116(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_2146(bool var_102_bool, cvector var_103_cvector)
{
	cvector var_107_cvector;
	@GetPosition(var_107_cvector);
	cvector var_108_cvector = var_103_cvector - var_107_cvector;
	var_110_float = GetByIndex(var_108_cvector, 0);
	var_111_float = GetByIndex(var_108_cvector, 2);
	bool var_109_bool;
	@Rotate(var_110_float, var_111_float, var_109_bool);
	var_109_bool = var_102_bool;
}


void func_2156(bool var_98_bool, object var_99_object)
{
	cvector var_101_cvector;
	var_99_object->GetPosition(var_101_cvector);
	bool var_102_bool; cvector var_103_cvector;
	var_101_cvector = var_103_cvector;
	func_2146(var_102_bool, var_103_cvector);
	var_102_bool = var_98_bool;
}


// @pe
void func_1132(bool var_319_bool, object var_320_object)
{
	object var_322_object;
	var_320_object = var_322_object;
	bool var_321_bool;
	func_2122(var_321_bool, var_322_object);
	var_321_bool = var_319_bool;
}


void func_1139(string var_337_string)
{
	var_337_string = "walk";
}


void func_1141(string var_338_string)
{
	var_338_string = "run";
}


void func_2165(object var_32_object)
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


void func_2679(int var_75_int)
{
	var_75_int = 518411;
}


void func_1143(bool var_0_bool, int var_16_int, object var_17_object)
{
	var_0_bool = var_17_object;
	bool var_27_bool; object var_28_object;
	var_17_object = var_28_object;
	func_2307(var_27_bool, var_28_object, 70.0);
	if(!var_27_bool) { //@nz
		var_16_int = -2;
		return 8;
	}
	object var_23_object;
	@CreateDialog(var_23_object);
	int var_74_int;
	func_2681(var_74_int);
	var_23_object->SetNPCName(var_74_int);
	int var_75_int;
	func_2679(var_75_int);
	var_23_object->SetNPCDescription(var_75_int);
	string var_76_string;
	func_2683(var_76_string);
	var_23_object->SetPhoto(var_76_string);
	string var_77_string;
	func_2685(var_77_string);
	var_23_object->SetPhoto2(var_77_string);
	int var_78_int;
	func_2738(var_78_int);
	var_23_object->SetPlayerName(var_78_int);
	bool var_24_bool;
	@IsOverrideActive(var_24_bool);
	if(var_24_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	@DoDialog(var_23_object);
	object var_87_object; object var_88_object;
	var_17_object = var_87_object;
	var_23_object = var_88_object;
	TaskCall(4);
	func_1217(var_89_object, var_90_object, var_91_string, var_92_bool, var_87_object, var_88_object);
	TaskReturn();
	bool var_26_bool;
	var_23_object->IsDialogEnd(var_26_bool);
	
	for(;;) {
		var_151_bool = !var_26_bool; //@nz
		if(var_151_bool == 0) goto Label_1206;
		@sync();
		var_23_object->IsDialogEnd(var_26_bool);
	}
	
Label_1206:
	object var_152_object;
	var_17_object = var_152_object;
	func_2375();
	@StopDialog(var_23_object);
	var_23_object->GetReturnValue(-1);
	int var_25_int = var_16_int;
}
EMIT "Stack[-4] = 0";


void func_2681(int var_74_int)
{
	var_74_int = 518410;
}


void func_2683(string var_76_string)
{
	var_76_string = "ui/NPC_Citizen1.png";
}


void func_2685(string var_77_string)
{
	var_77_string = "ui/NPC_Citizen1_b.png";
}


// @pe
void func_126(bool var_194_bool, object var_195_object)
{
	var_202_bool = GlobalVars[0];
	GlobalVars[0] = false;
	object var_203_object;
	func_203(var_199_bool, var_200_float, var_201_int, var_194_bool, var_203_object, var_203_object, true, 200.0);
	bool var_673_bool = false;
	var_674_bool = GlobalVars[0];
	if(var_674_bool != 0) {
		if(var_3_int != 0)
			var_673_bool = true;
	}
	if(var_673_bool != 0) {
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
	}
	var_678_bool = GlobalVars[0];
	var_678_bool = var_194_bool;
}


void func_2687(bool var_69_bool)
{
	var_69_bool = false;
}


void func_2689(string var_39_string, int var_40_int)
{
	string var_42_string = "idle";
	if(var_40_int != 0)
		var_42_string += var_40_int;
	var_42_string = var_39_string;
}


void func_643(int var_3_int)
{
	var_3_int = true;
}


void func_645(bool var_641_bool, float var_642_float)
{
	float var_645_float; bool var_646_bool;
	@rand(var_645_float);
	if(var_645_float < var_642_float) {

		for(;;) {
			@IsAnimationPlaying(var_646_bool);
			if(!var_646_bool) { //@nz
			} else {
				bool var_649_bool;
				func_743(var_649_bool);
				if(var_649_bool != 0) {
					var_641_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_641_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_847(var_646_bool);
}


void func_2696(int var_33_int)
{
	int var_36_int; bool var_37_bool;
	var_36_int = 0;
	
	for(;;) {
		string var_39_string; int var_40_int;
		var_36_int = var_40_int;
		func_2689(var_39_string, var_40_int);
		@HasAnimation(var_37_bool, "all", var_39_string);
		if(!var_37_bool) //@nz
			break;
		var_36_int += 1;
	}
	var_36_int = var_33_int;
}


void func_1683(bool var_58_bool)
{
	var_58_bool = true;
}


void func_1685(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_2713(void)
{
	@SetVariable("b3q02GrabitelTalk", 1);
}


// @pe
void func_154(float var_530_float)
{
	var_530_float = 0.15;
}


void func_1690(void)
{
	var_18_bool = GlobalVars[2];
	GlobalVars[2] = true;
	
	for(;;) {
		bool var_19_bool; object var_20_object;
		object var_21_object;
		func_1931(var_21_object);
		var_21_object = var_20_object;
		func_1705(var_14_bool, var_15_string, var_19_bool, var_20_object);
		@Sleep(1);
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_157(int var_537_int)
{
	var_537_int = 0;
}


// @pe
void func_2719(void)
{
	bool var_23_bool;
	func_2606(var_23_bool, "quest_b3_02", "grabitel_attack");
}


void func_672(bool var_0_bool, bool var_425_bool, float var_426_float)
{
	bool var_432_bool; cvector var_433_cvector; cvector var_434_cvector; cvector var_435_cvector; float var_436_float;
	
	for(;;) {
		@IsAnimationPlaying(var_432_bool);
		if(!var_432_bool) //@nz
			break;
		bool var_438_bool;
		func_743(var_438_bool);
		if(var_438_bool != 0) {
			var_425_bool = true;
			return 10;
		}
		bool var_481_bool;
		func_2122(var_481_bool, var_0_bool);
		if(!var_481_bool) { //@nz
			var_425_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_433_cvector); //@t
		@GetPFPosition(var_434_cvector);
		var_435_cvector = var_433_cvector - var_434_cvector;
		var_436_float = var_435_cvector | var_435_cvector;
		if(var_436_float < (var_426_float * var_426_float)) {
			bool var_486_bool; float var_487_float;
			var_426_float = var_487_float;
			func_506(var_435_cvector, var_436_float, var_486_bool, var_487_float);
			var_425_bool = true;
			return 10;
		}
		@sync();
	}
	func_847(var_436_float);
	var_425_bool = false;
}


void func_160(int var_594_int)
{
	var_594_int = 1;
}


// @pe
void func_162(object var_595_object, float var_596_float)
{
	bool var_597_bool = false;
	if(var_596_float > 0) {
		bool var_600_bool; object var_601_object;
		var_595_object = var_601_object;
		func_2050(var_600_bool, var_601_object);
		if(var_600_bool != 0)
			var_597_bool = true;
	}
	if(var_597_bool != 0) {
		var_617_bool = GlobalVars[0];
		GlobalVars[0] = true;
		func_643(var_596_float);
	}
}


void func_2209(object var_19_object, int var_20_int, float var_21_float)
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
		func_1916(var_49_cvector, var_50_object);
		var_49_cvector = var_48_cvector;
		func_2481(var_47_cvector, var_48_cvector);
		var_47_cvector = var_31_cvector;
		@CreateVectorVector(var_32_object);
		var_33_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_33_int), var_34_bool, var_35_cvector, var_36_cvector);
			if(!var_34_bool) { //@nz
				break;
			Label_2271:
				var_32_object = null;
	}
			object var_109_object;
			var_19_object = var_109_object;
			func_2165(var_109_object);
		}
		if((var_36_cvector | var_31_cvector) >= 0.70710677)
			var_32_object->add(var_35_cvector);
		var_33_int += 1;
	}
	int var_37_int;
	var_32_object->size(var_37_int);
	if(var_37_int == 0) goto Label_2271;
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
	func_2277(var_66_float, var_67_cvector, var_68_cvector);
}


// @pe
void func_2726(bool var_94_bool)
{
	int var_96_int;
	func_2546(var_96_int, "b3q02");
	if(var_96_int > 3)
		var_94_bool = true;
	var_94_bool = false;
}


void func_1705(bool var_19_bool, object var_20_object, bool var_78_bool, object var_681_object)
{
	object var_28_object;
	var_20_object = var_28_object;
	bool var_27_bool;
	func_2122(var_27_bool, var_28_object);
	if(!var_27_bool) { //@nz
		var_19_bool = false;
		return 2;
	}
	float var_62_float; object var_63_object;
	var_20_object = var_63_object;
	func_1923(var_62_float, var_63_object);
	float var_26_float;
	var_62_float = var_26_float;
	bool var_70_bool; float var_71_float;
	func_2533(var_70_bool, var_71_float, 250000.0, 3240000.0);
	if(var_70_bool != 0) {
		bool var_76_bool; object var_77_object;
		var_20_object = var_77_object;
		TaskCall(0);
		func_0(var_71_float, var_78_bool, var_76_bool, var_77_object);
		TaskReturn();
		var_78_bool = var_19_bool;
		return 2;
	}
	bool var_679_bool; object var_680_object;
	var_20_object = var_680_object;
	TaskCall(1);
	func_126(var_679_bool, var_680_object);
	TaskReturn();
	var_681_object = var_19_bool;
}


void func_2738(int var_78_int)
{
	int var_80_int;
	@GetVariable("branch", var_80_int);
	if(var_80_int == 0) {
		var_78_int = 1;
		return 2;
	EMIT "GOTO 0xac1";
	}
	if(var_80_int == 1) {
		var_78_int = 2;
		return 2;
	}
	var_78_int = 3;
}


// @pe
void func_1217(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, object var_87_object, object var_88_object)
{
	var_0_bool = var_88_object;
	var_1_object = var_87_object;
	var_3_int = false;
	if(1 != 0) {
		bool var_94_bool;
		func_2726(var_1_object);
		if(!var_94_bool) { //@nz
			object var_103_object; object var_104_object;
			var_103_object = var_1_object;
			var_104_object = var_0_bool;
			func_2713();
			func_1316(var_88_object, "Neutral");
			var_0_bool->SetMessage(518381); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(519109, 20244, 20240); //@t
			var_0_bool->AddReply(518382, 20241, 19495); //@t
		} else {
					bool var_139_bool;
					func_2726(var_1_object);
					if(var_139_bool == 0) goto Label_1284;
					object var_141_object; object var_142_object;
					var_141_object = var_1_object;
					var_142_object = var_0_bool;
					func_2713();
					func_1316(var_88_object, "Neutral");
					var_0_bool->SetMessage(518383); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(518384, 20252, 19497); //@t
					var_0_bool->AddReply(519119, 20252, 20251); //@t
		}
	}
	for(;;) {
		bool var_126_bool;
		func_2687(var_126_bool);
		if(var_126_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_int != 0) {
				} else {
					func_2392(var_2_int);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_int != 0) {
					goto Label_1315;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1315:
			return 0;

		}

	}
	
Label_1284:
}
EMIT "GOTO 0x4c5";


void func_2755(int var_114_int)
{
	int var_116_int;
	@GetVariable("branch", var_116_int);
	var_116_int = var_114_int;
}


// @pe
void func_2761(object var_19_object)
{
	int var_20_int;
	func_2755(var_20_int);
	if(var_20_int == 1)
		@WorkWithCorpse(var_19_object);
	else
		@Barter(var_19_object);
	
}


void func_203(bool var_0_bool, int var_3_int, float var_5_float, object var_203_object, bool var_204_bool, float var_205_float, bool var_274_bool, bool var_366_bool)
{
	float var_217_float; cvector var_218_cvector; cvector var_219_cvector; bool var_221_bool; float var_224_float; cvector var_225_cvector; bool var_226_bool; float var_227_float;
	func_432(var_225_cvector, var_226_bool, var_227_float);
	var_5_float = 0;
	var_252_bool = IsFuncExist(var_203_object, "@GetAttackDistance", 1);
	if(var_252_bool != 0) {
		var_203_object->GetAttackDistance(var_217_float);
		var_217_float += 50;
	} else {
						var_205_float = var_217_float;
	}
	if(var_217_float >= 150)
		var_217_float = 150;
	var_3_int = false;
	var_0_bool = var_203_object;
	bool var_220_bool;
	@IsPlayerActor(var_0_bool, var_220_bool);
	if(var_220_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_258_object;
		func_2475(var_258_object);
		@SendPlayerEnemy(var_203_object, var_258_object);
	}
	if(var_204_bool != 0)
		var_221_bool = false;
	else
		var_221_bool = true;

	
Label_243:
	for(;;) {
		bool var_261_bool = false;
		bool var_262_bool;
		func_2122(var_262_bool, var_0_bool);
		if(var_262_bool != 0) {
			if(!var_3_int) //@nz
				var_261_bool = true;
		}
		if(var_261_bool != 0) {
			func_847(var_227_float);
			var_0_bool->GetPFPosition(var_218_cvector); //@t
			@GetPFPosition(var_219_cvector);
			var_224_float = (var_218_cvector - var_219_cvector) | (var_218_cvector - var_219_cvector);
			if(var_224_float >= ((300.0 + var_217_float) * (300.0 + var_217_float))) {
				bool var_268_bool; float var_270_float;
				var_217_float = var_270_float;
				TaskCall(2);
				func_887(var_276_bool, var_268_bool, var_0_bool, var_270_float, 3000.0, true, false);
				TaskReturn();
				if(!var_274_bool) { //@nz
				} else {
					var_221_bool = false;
			} else {
			if(var_224_float >= (var_205_float * var_205_float)) {
				var_0_bool->GetPFPosition(var_225_cvector); //@t
				@CanReachByPF(var_226_bool, var_225_cvector);
				if(!var_226_bool) { //@nz
					bool var_360_bool; float var_362_float;
					var_217_float = var_362_float;
					TaskCall(2);
					func_887(var_368_bool, var_360_bool, var_0_bool, var_362_float, 3000.0, true, false);
					TaskReturn();
					if(!var_366_bool) { //@nz
						goto Label_415;
					}
					var_221_bool = false;
					goto Label_243;
				}
				if(!var_221_bool) { //@nz
					func_2291(var_0_bool);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_847(var_227_float);
					@StopAsync();
					var_221_bool = true;
					bool var_382_bool;
					func_2122(var_382_bool, var_0_bool);
					if(!var_382_bool) { //@nz
						goto Label_415;
					}
				}
				@rand(var_227_float);
				bool var_385_bool;
				var_387_bool = var_227_float < 0.19999999;
				if(var_387_bool != 1) {
					bool var_388_bool;
					func_804(true, var_388_bool);
					if(var_388_bool != 1)
						var_385_bool = false;
				}
				if(var_385_bool != 0) {
					@Face(var_0_bool);
					func_852();
					@PlayAnimation("all", "attack_stay");
					bool var_425_bool; float var_426_float;
					func_672(var_227_float, var_425_bool, var_426_float);
					@StopAsync();
				} else {
					@Face(var_0_bool);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_847(var_227_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_660_bool;
					func_804(var_227_float, var_660_bool);
					var_661_bool = !var_660_bool; //@nz
					if(var_661_bool == 0) goto Label_405;
					bool var_662_bool;
					func_2122(var_662_bool, var_0_bool);
					if(!var_662_bool) { //@nz
						goto Label_415;
					}
					var_0_bool->GetPFPosition(var_218_cvector); //@t
					@GetPFPosition(var_219_cvector);
					if(!(((var_218_cvector - var_219_cvector) | (var_218_cvector - var_219_cvector)) < (var_426_float * var_426_float))) goto Label_405;
					bool var_667_bool; float var_668_float;
					var_205_float = var_668_float;
					func_506(var_226_bool, var_227_float, var_667_bool, var_668_float);
					var_669_bool = !var_667_bool; //@nz
					if(var_669_bool == 0) goto Label_405;
					goto Label_415;
			}
				bool var_670_bool; float var_671_float;
				var_205_float = var_671_float;
				func_506(var_226_bool, var_227_float, var_670_bool, var_671_float);
				if(!var_670_bool) { //@nz
					goto Label_415;
				}
				var_221_bool = true;

			}
		Label_405:
			goto Label_414;
			}
			Label_414:
			}
		}
	Label_415:
		@WaitForAnimEnd();
		if(var_3_int != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_220_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_715(bool var_0_bool, bool var_440_bool)
{
	cvector var_446_cvector; cvector var_447_cvector;
	bool var_451_bool;
	func_2122(var_451_bool, var_0_bool);
	if(!var_451_bool) { //@nz
		var_440_bool = false;
		return 10;
	}
	bool var_454_bool;
	float var_450_float;
	func_804(var_450_float, var_454_bool);
	if(var_454_bool != 0) {
		var_0_bool->GetPFPosition(var_446_cvector); //@t
		@GetPFPosition(var_447_cvector);
		var_0_bool->GetAttackDistance(var_450_float); //@t
		var_440_bool = ((var_446_cvector - var_447_cvector) | (var_446_cvector - var_447_cvector)) <= ((var_450_float + 50) * (var_450_float + 50));
		return 10;
	}
	var_440_bool = false;
}


// @pe
void func_1742(object var_71_object)
{
	func_2846();
	func_2822();
	object var_134_object;
	var_71_object = var_134_object;
	func_1754(var_134_object);
}


void func_2774(int var_77_int, int var_78_int)
{
	if(var_77_int > var_78_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_81_int = 0;
	if(var_77_int != var_78_int) {
		@irand(var_81_int, (var_78_int - var_77_int));
	} else if(var_77_int == 0) {
		return 4;
	}
	var_81_int += var_77_int;
	if(var_81_int == 0)
		return 4;
	int var_89_int;
	func_2876(var_89_int, "Money");
	bool var_82_bool;
	@AddItem(var_82_bool, var_89_int, 0, var_81_int);
	
}


// @pe
void func_1754(object var_134_object)
{
	object var_135_object;
	var_134_object = var_135_object;
	func_1779(var_135_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_2277(object var_21_object, cvector var_24_cvector, cvector var_25_cvector)
{
	object var_28_object;
	@GetScene(var_28_object);
	object var_29_object;
	@AddActorByType(var_29_object, "scripted", var_28_object, var_24_cvector, var_25_cvector, "blood_dir.xml");
	object var_32_object;
	var_21_object = var_32_object;
	func_2165(var_32_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_743(bool var_438_bool)
{
	bool var_439_bool = false;
	bool var_440_bool;
	func_715(var_439_bool, var_440_bool);
	if(var_440_bool != 0) {
		bool var_457_bool;
		func_759(var_438_bool, var_439_bool, var_457_bool);
		if(var_457_bool != 0)
			var_439_bool = true;
	}
	if(var_439_bool != 0) {
		var_438_bool = true;
		return 0;
	}
	var_438_bool = false;
}


void func_2291(object var_371_object)
{
	cvector var_375_cvector;
	var_371_object->GetPosition(var_375_cvector);
	cvector var_376_cvector;
	@GetPosition(var_376_cvector);
	cvector var_377_cvector = var_375_cvector - var_376_cvector;
	var_378_float = GetByIndex(var_377_cvector, 0);
	var_379_float = GetByIndex(var_377_cvector, 2);
	@RotateAsync(var_378_float, var_379_float);
}


void func_1779(object var_135_object)
{
	cvector var_146_cvector; cvector var_147_cvector; cvector var_148_cvector; cvector var_149_cvector; string var_150_string; object var_151_object; bool var_152_bool; bool var_153_bool; float var_154_float; cvector var_155_cvector;
	if(var_135_object == null) {
		func_1870("fdie");
	} else {
		var_135_object->GetPosition(var_146_cvector);
		@GetPosition(var_147_cvector);
		@GetDirection(var_148_cvector);
		var_149_cvector = var_147_cvector - var_146_cvector;
		var_189_float = GetByIndex(var_149_cvector, 0);
		var_190_float = GetByIndex(var_148_cvector, 0);
		var_192_float = GetByIndex(var_149_cvector, 2);
		var_193_float = GetByIndex(var_148_cvector, 2);
		if(((var_189_float * var_190_float) + (var_192_float * var_193_float)) >= 0)
			var_150_string = "fdie";
		else
			var_150_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_135_object = var_151_object;
		var_200_bool = IsFuncExist(var_135_object, "GetScriptProperty", 2);
		if(var_200_bool != 0) {
			var_135_object->HasScriptProperty(var_152_bool, "Owner");
			if(var_152_bool != 0) {
				var_135_object->GetScriptProperty(var_151_object, "Owner");
				if(var_151_object == null)
					var_135_object = var_151_object;
			}
		}
		var_207_bool = IsFuncExist(var_151_object, "@GetEyesHeight", 1);
		if(var_207_bool != 0) {
			var_151_object->GetEyesHeight(var_154_float);
			var_155_cvector = [0.0, 0.0, 0.0];
			var_208_float = GetByIndex(var_155_cvector, 1);
			var_154_float = var_208_float;
			SetByIndex(var_155_cvector, 1) = var_208_float;
			@LookAsync(var_135_object, "head", var_155_cvector);
			var_153_bool = true;
		} else {
			var_153_bool = false;

		}
		string var_210_string;
		var_150_string = var_210_string;
		func_2434(var_210_string);
		@PlayAnimation("all", var_150_string);
		@WaitForAnimEnd();
		if(var_153_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_150_string);
		@RemoveEnvelope();
		var_151_object = null;
	}
	
}


void func_2805(string var_120_string)
{
	object var_124_object;
	@CreateInvItem(var_124_object);
	var_124_object->SetItemName(var_120_string);
	var_124_object->SetProperty("Organ", 1);
	int var_125_int;
	var_124_object->GetItemID(var_125_int);
	bool var_126_bool;
	@AddItem(var_126_bool, var_124_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_759(bool var_0_bool, bool var_4_bool, bool var_457_bool)
{
	object var_463_object; float var_465_float; cvector var_466_cvector; cvector var_467_cvector;
	@GetScene(var_463_object);
	bool var_464_bool = false;
	
	for(;;) {
		cvector var_468_cvector;
		func_1916(var_468_cvector, var_0_bool);
		var_474_int = -var_468_cvector;
		@FindDirLength(var_465_float, var_474_int, var_4_bool);
		if(var_465_float < var_4_bool) {
		} else {
				@Face(var_0_bool);
				@PlayAnimation("all", "bjump");
				var_0_bool->GetPFPosition(var_466_cvector); //@t
				@GetPFPosition(var_467_cvector);
				@WaitForAnimEnd();
				func_847(var_467_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_464_bool = true;
				bool var_479_bool;
				func_715(var_467_cvector, var_479_bool);
				var_480_bool = !var_479_bool; //@nz
				if(var_480_bool == 0) goto Label_800;
		}
		for(;;) {
			var_464_bool = var_457_bool;

		}

	Label_800:
	}
}
EMIT "Stack[-5] = 0";


void func_2302(bool var_29_bool)
{
	bool var_31_bool;
	@IsLoaded(var_31_bool);
	var_31_bool = var_29_bool;
}


void func_2307(bool var_27_bool, object var_28_object, float var_29_float)
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
	func_2481(var_54_cvector, (var_43_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_44_cvector = ((var_42_cvector * var_29_float) + (var_54_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_46_bool;
	@IsOverrideActive(var_46_bool);
	if(var_46_bool != 0)
		var_27_bool = false;
	@StopWorld();
	@CameraTransit((var_41_cvector + var_44_cvector), var_43_cvector);
	var_67_float = GetByIndex(var_44_cvector, 0);
	var_68_float = GetByIndex(var_44_cvector, 2);
	@Rotate(var_67_float, var_68_float);
	bool var_69_bool;
	func_2687(var_69_bool);
	if(var_69_bool != 0) {
	} else {
		@HasAnimationTrack(var_47_bool, "head");
		if(var_47_bool == 0) goto Label_2369;
		@LookAsyncCamera("head");
	}
Label_2369:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_27_bool = true;
	
}


void func_2822(void)
{
	int var_114_int;
	func_2755(var_114_int);
	if(var_114_int != 1) {
	}
	func_2805("liver");
	func_2805("kidney");
	func_2805("heart");
	func_2805("blood");
}


void func_2846(void)
{
	@ClearSubContainer(0);
	func_2774(300, 750);
	func_2423("Knife", 1, 8);
	func_2423("lockpick", 1, 6);
	int var_110_int;
	func_2876(var_110_int, "grabitel_mark");
	bool var_75_bool;
	@AddItem(var_75_bool, var_110_int, 0, 1);
}


void func_804(bool var_0_bool, bool var_388_bool)
{
	bool var_390_bool;
	var_393_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_393_bool != 0) {
		var_0_bool->IsAttacking(var_390_bool); //@t
		var_390_bool = var_388_bool;
	}
	var_388_bool = false;
}


// @pe
void func_1316(int var_2_int, string var_107_string)
{
	bool var_108_bool;
	func_2687(var_108_bool);
	if(!var_108_bool) //@nz
		return 0;
	if(var_107_string == var_2_int)
		return 0;
	string var_111_string; bool var_112_bool;
	var_107_string = var_111_string;
	if(var_107_string == "")
		var_112_bool = false;
	else
		var_112_bool = true;
	func_2399(var_111_string, var_112_bool);
	var_2_int = var_107_string;
	
}


void func_815(int var_2_int, float var_5_float)
{
	int var_504_int;
	if(!var_2_int) //@nz
		return 4;
	if(var_5_float != 0) {
		if((var_5_float + -1) > 0)
			return 4;
	}
	float var_503_float;
	@rand(var_503_float);
	float var_510_float;
	func_861(var_510_float);
	if(var_503_float < var_510_float) {
		@irand(var_504_int, var_2_int);
		@Speak("attack" + (var_504_int + 1));
		int var_515_int;
		func_859(var_515_int);
		var_5_float = var_515_int;
	}
}


void func_2876(int var_89_int, string var_90_string)
{
	int var_92_int;
	@GetInvItemByName(var_92_int, var_90_string);
	var_92_int = var_89_int;
}


void func_2881(object var_16_object)
{
	object var_18_object;
	@GetScene(var_18_object);
	object var_19_object;
	func_2475(var_19_object);
	var_18_object->RemoveStationaryActor(var_19_object);
	var_22_bool = GlobalVars[2];
	if(var_22_bool != 0) {
		bool var_23_bool;
		func_2606(var_23_bool, "quest_b3_02", "grabitel_dead");
	}
	bool var_29_bool; object var_30_object;
	var_16_object = var_30_object;
	func_1938(var_29_bool, var_30_object);
	if(var_29_bool != 0) {
		bool var_33_bool; object var_34_object;
		var_16_object = var_34_object;
		func_2551(var_33_bool, var_34_object, 0.03);
	}
	object var_71_object;
	var_16_object = var_71_object;
	TaskCall(7);
	func_1742(var_71_object);
	TaskReturn();
}
EMIT "Stack[-1] = 0";


void func_2375(void)
{
	bool var_154_bool;
	@CameraSwitchToNormal();
	bool var_155_bool;
	func_2687(var_155_bool);
	if(var_155_bool != 0) {
	} else {
		@HasAnimationTrack(var_154_bool, "head");
		if(var_154_bool == 0) goto Label_2391;
		@UnlookAsync("head");
	}
Label_2391:
	
}


// @pe
void func_1870(string var_157_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_158_string;
	var_157_string = var_158_string;
	func_2434(var_158_string);
	@PlayAnimation("all", var_157_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_157_string);
	@RemoveEnvelope();
}


void func_847(bool var_0_bool)
{
	func_2618(var_0_bool);
}


void func_852(void)
{
	func_2434("attack_stay");
}


void func_2392(string var_128_string)
{
	float var_131_float; float var_132_float;
	@lshGetAnimTimes(var_128_string, var_131_float, var_132_float);
	@lshPlayAnimation(var_131_float, var_132_float, false);
}


void func_857(bool var_640_bool)
{
	var_640_bool = true;
}


void func_859(int var_515_int)
{
	var_515_int = 1;
}


void func_861(float var_510_float)
{
	var_510_float = 0.5;
}


void func_2399(string var_111_string, bool var_112_bool)
{
	float var_117_float; float var_118_float;
	@lshGetAnimTimes(var_111_string, var_117_float, var_118_float);
	@lshPlayAnimation(var_117_float, var_118_float, var_112_bool);
}


void func_2405(object var_285_object)
{
	float var_288_float;
	var_285_object->GetEyesHeight(var_288_float);
	cvector var_289_cvector = [0.0, 0.0, 0.0];
	var_290_float = GetByIndex(var_289_cvector, 1);
	var_288_float = var_290_float;
	SetByIndex(var_289_cvector, 1) = var_290_float;
	@LookAsync(var_285_object, "head", var_289_cvector);
}


// @pe
void func_1902(string var_561_string, int var_562_int)
{
	if(var_562_int == 2) {
		var_561_string = "fire";
		return 0;
	EMIT "GOTO 0x77a";
	}
	if(var_562_int == 1) {
		var_561_string = "bullet";
		return 0;
	}
	var_561_string = "phys";
}


void func_2416(void)
{
	bool var_18_bool;
	func_2687(var_18_bool);
	if(var_18_bool != 0)
		@lshStopSpeech();
}


void func_887(int var_2_int, bool var_268_bool, object var_269_object, float var_270_float, float var_271_float, bool var_272_bool, bool var_273_bool)
{
	object var_281_object;
	func_2618(var_281_object);
	@SetTimer(1, 5);
	bool var_279_bool;
	@CanSee(var_279_bool, var_281_object);
	if(var_279_bool != 0) {
		var_2_int = true;
		object var_285_object;
		var_269_object = var_285_object;
		func_2405(var_285_object);
	} else {
		var_2_int = false;
	}
	bool var_292_bool; object var_293_object;
	func_1938(var_292_bool, var_293_object);
	if(var_292_bool != 0) {
		object var_296_object;
		func_2475(var_296_object);
		@SendPlayerEnemy(var_293_object, var_296_object);
	}
	bool var_297_bool; object var_298_object; float var_299_float; float var_300_float; bool var_301_bool; bool var_302_bool;
	var_269_object = var_298_object;
	var_270_float = var_299_float;
	var_271_float = var_300_float;
	var_272_bool = var_301_bool;
	var_273_bool = var_302_bool;
	bool var_280_bool;
	func_992(var_279_bool, var_280_bool, var_297_bool, var_298_object, var_299_float, var_300_float, var_301_bool, var_302_bool);
	var_297_bool = var_280_bool;
	if(var_2_int != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_280_bool = var_268_bool;
	
}


void func_2423(string var_96_string, int var_97_int, int var_98_int)
{
	bool var_100_bool;
	int var_102_int;
	var_97_int = var_102_int;
	int var_103_int;
	var_98_int = var_103_int;
	bool var_101_bool;
	func_2541(var_101_bool, var_102_int, var_103_int);
	if(var_101_bool != 0)
		@AddItem(var_100_bool, var_96_string, 0);
}


void func_1916(cvector var_49_cvector, object var_50_object)
{
	cvector var_53_cvector;
	@GetPosition(var_53_cvector);
	cvector var_54_cvector;
	var_50_object->GetPosition(var_54_cvector);
	var_49_cvector = var_54_cvector - var_53_cvector;
}


void func_2434(string var_158_string)
{
	bool var_167_bool; int var_168_int; bool var_169_bool; int var_170_int; bool var_171_bool; float var_172_float; cvector var_173_cvector; cvector var_174_cvector;
	@IsExisting3DSound(var_167_bool, var_158_string);
	if(!var_167_bool) { //@nz
		var_168_int = 0;

		for(;;) {
			@IsExisting3DSound(var_169_bool, (var_158_string + (var_168_int + 1)));
			if(!var_169_bool) { //@nz
				break;
			Label_2454:
				@irand(var_170_int, var_168_int);
				var_158_string += (var_170_int + 1);
	}
			@Is3DSoundLoaded(var_171_bool, var_158_string);
			if(var_171_bool != 0) {
				@GetEyesHeight(var_172_float);
				@GetDirection(var_173_cvector);
				var_174_cvector = var_173_cvector * 50;
				var_185_float = GetByIndex(var_174_cvector, 1);
				SetByIndex(var_174_cvector, 1) = (var_185_float + var_172_float);
				@PlayGlobalSound(var_158_string, var_174_cvector);
			}
		}
		var_168_int += 1;
	}
	var_180_bool = !var_168_int; //@nz
	if(var_180_bool == 0) goto Label_2454;
}


void func_1923(float var_62_float, object var_63_object)
{
	cvector var_67_cvector;
	@GetPosition(var_67_cvector);
	cvector var_68_cvector;
	var_63_object->GetPosition(var_68_cvector);
	var_62_float = (var_68_cvector - var_67_cvector) | (var_68_cvector - var_67_cvector);
}


void func_1931(object var_21_object)
{
	object var_23_object;
	@FindActor(var_23_object, "player");
	var_23_object = var_21_object;
}
EMIT "Stack[-1] = 0";


void func_1938(bool var_29_bool, object var_30_object)
{
	bool var_32_bool;
	@IsPlayerActor(var_30_object, var_32_bool);
	var_32_bool = var_29_bool;
}


void func_1943(bool var_52_bool, object var_53_object, string var_54_string)
{
	var_59_bool = IsFuncExist(var_53_object, "HasProperty", 2);
	if(!var_59_bool) { //@nz
		var_52_bool = false;
		return 2;
	}
	bool var_56_bool;
	var_53_object->HasProperty(var_54_string, var_56_bool);
	var_56_bool = var_52_bool;
}


// @pe
void func_2968(void)
{
}


// @pe
void func_2970(bool var_18_bool)
{
	var_18_bool = false;
}


void func_1955(bool var_44_bool, object var_45_object, string var_46_string, float var_47_float, float var_48_float, float var_49_float)
{
	object var_53_object;
	var_45_object = var_53_object;
	string var_54_string;
	var_46_string = var_54_string;
	bool var_52_bool;
	func_1943(var_52_bool, var_53_object, var_54_string);
	if(!var_52_bool) //@nz
		var_44_bool = false;
	float var_51_float;
	var_45_object->GetProperty(var_46_string, var_51_float);
	float var_62_float; float var_64_float; float var_65_float;
	var_48_float = var_64_float;
	var_49_float = var_65_float;
	func_2522(var_62_float, (var_51_float + var_47_float), var_64_float, var_65_float);
	var_45_object->SetProperty(var_46_string, var_62_float);
	var_44_bool = true;
}


void func_2475(object var_18_object)
{
	object var_20_object;
	@self(var_20_object);
	var_20_object = var_18_object;
}
EMIT "Stack[-1] = 0";


void func_432(object var_1_object, int var_2_int, bool var_4_bool)
{
	bool var_231_bool; bool var_232_bool; cvector var_233_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_231_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_231_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_int = 0;

		for(;;) {
			@IsExisting3DSound(var_232_bool, ("attack" + (var_2_int + 1)));
			if(!var_232_bool) //@nz
				break;
			var_2_int += 1;
		}
		@GetAnimationOffset(var_233_cvector, "all", "bjump");
		var_247_float = GetByIndex(var_233_cvector, 2);
		var_4_bool = -var_247_float;

	}
}


void func_2481(cvector var_47_cvector, cvector var_48_cvector)
{
	float var_56_float = sqrt(var_48_cvector | var_48_cvector);
	if(var_56_float < 0.000001)
		var_47_cvector = [0.0, 0.0, 0.0];
	var_47_cvector = var_48_cvector / var_56_float;
}


void func_950(int var_2_int)
{
	@KillTimer(1);
	if(var_2_int != 0) {
		var_2_int = false;
		@UnlookAsync("head");
	}
	func_1116(var_15_bool);
}


void func_1977(float var_533_float, object var_534_object, float var_535_float, int var_536_int)
{
	int var_546_int; int var_548_int;
	object var_553_object;
	var_534_object = var_553_object;
	bool var_552_bool;
	func_1943(var_552_bool, var_553_object, "health");
	if(!var_552_bool) //@nz
		var_533_float = 0.0;
	bool var_556_bool; object var_557_object;
	func_1943(var_556_bool, var_557_object, "armor");
	if(!var_556_bool) //@nz
		var_546_int = 0;
	else
		var_557_object->GetProperty("armor", var_546_int);
	string var_561_string; int var_562_int;
	var_536_int = var_562_int;
	func_1902(var_561_string, var_562_int);
	string var_547_string = "armor_" + var_561_string;
	bool var_567_bool; object var_568_object; string var_569_string;
	var_534_object = var_568_object;
	func_1943(var_567_bool, var_568_object, var_569_string);
	if(!var_567_bool) //@nz
		var_548_int = 0;
	else
		var_534_object->GetProperty(var_569_string, var_548_int);

	float var_571_float;
	func_2491(var_571_float, ((var_546_int + var_548_int) / 100.0), (float)1);
	float var_549_float;
	var_571_float = var_549_float;
	float var_550_float;
	var_534_object->GetProperty("health", var_550_float);
	float var_551_float = var_535_float * (1 - var_549_float);
	float var_581_float;
	func_2522(var_581_float, (var_550_float - var_551_float), (float)0, (float)1);
	var_534_object->SetProperty("health", var_581_float);
	bool var_587_bool; object var_588_object;
	var_534_object = var_588_object;
	func_1938(var_587_bool, var_588_object);
	if(var_587_bool != 0) {
		float var_589_float = -var_551_float;
		func_2586(var_589_float);
	}
	var_551_float = var_533_float;
	
}


// @pe
void func_2491(float var_571_float, float var_572_float, float var_573_float)
{
	if(var_572_float < var_573_float)
		var_572_float = var_571_float;
	else
		var_573_float = var_571_float;
	
}


// @pe
void func_2498(float var_158_float, float var_159_float, float var_160_float, float var_161_float)
{
	var_158_float = (var_160_float * var_160_float) - ((4 * var_159_float) * var_161_float);
}


void func_2505(float var_172_float, float var_173_float, float var_174_float, float var_176_float)
{
	float var_178_float;
	var_179_int = -var_174_float;
	if(((var_179_int - var_176_float) / (2 * var_173_float)) > 0) {
		var_178_float = var_172_float;
		return 2;
	}
	var_185_int = -var_174_float;
	var_172_float = (var_185_int + var_176_float) / (2 * var_173_float);
}


void func_467(bool var_0_bool, float var_519_float, int var_520_int)
{
	object var_524_object; float var_525_float; float var_526_float;
	@GetVictim((var_519_float * 0.9), var_524_object);
	@ReportAttack(var_0_bool);
	if(var_524_object == var_0_bool) {
		float var_530_float; object var_531_object; int var_532_int;
		var_524_object = var_531_object;
		var_520_int = var_532_int;
		func_154(var_532_int);
		var_530_float = var_525_float;
		float var_533_float; object var_534_object; float var_535_float; int var_536_int;
		var_524_object = var_534_object;
		int var_537_int; object var_538_object; int var_539_int;
		var_524_object = var_538_object;
		var_520_int = var_539_int;
		func_157(var_539_int);
		var_537_int = var_536_int;
		func_1977(var_533_float, var_534_object, var_535_float, var_536_int);
		var_533_float = var_526_float;
		int var_594_int;
		func_160(var_594_int);
		@ReportHit(var_0_bool, var_594_int, var_526_float, var_535_float);
		object var_595_object; float var_596_float;
		var_524_object = var_595_object;
		var_526_float = var_596_float;
		func_162(var_595_object, var_596_float);
	}
}
EMIT "Stack[-3] = 0";


// @pe
void func_2522(float var_62_float, float var_63_float, float var_64_float, float var_65_float)
{
	if(var_63_float < var_64_float) {
		var_64_float = var_62_float;
		return 0;
	}
	if(var_63_float > var_65_float) {
		var_65_float = var_62_float;
		return 0;
	}
	var_63_float = var_62_float;
}


void func_992(bool var_0_bool, object var_1_object, bool var_297_bool, object var_298_object, float var_299_float, float var_300_float, bool var_301_bool, bool var_302_bool)
{
	bool var_311_bool; object var_313_object; cvector var_314_cvector; cvector var_315_cvector; float var_317_float; object var_318_object;
	var_0_bool = false;
	var_1_object = var_298_object;
	bool var_312_bool;
	var_302_bool = var_312_bool;
	
	for(;;) {
		bool var_319_bool; object var_320_object;
		var_298_object = var_320_object;
		func_1132(var_319_bool, var_320_object);
		if(!var_319_bool) { //@nz
			var_297_bool = false;
			return 16;
		}
		var_298_object->GetPosition(var_314_cvector);
		@GetPosition(var_315_cvector);
		var_317_float = (var_314_cvector - var_315_cvector) | (var_314_cvector - var_315_cvector);
		bool var_324_bool = false;
		if(var_300_float > 0) {
			if(var_317_float > (var_300_float * var_300_float))
				var_324_bool = true;
		}
		if(var_324_bool != 0) {
			@Stop();
			var_297_bool = false;
			return 16;
		}
		if(var_317_float > (var_299_float * var_299_float)) {
			var_298_object->GetPFPosition(var_314_cvector);
			@FindPathTo(var_318_object, var_314_cvector);
			if(var_318_object != null) {
				var_318_object = var_313_object;
				var_318_object = null;
			}
			if(var_313_object != null) {
				if(var_312_bool == 0) goto Label_1045;
				var_312_bool = false;
				@RotatePath(var_313_object, var_311_bool);
				if(!var_311_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_337_string;
						func_1139(var_337_string);
						string var_338_string;
						func_1141(var_338_string);
						@FollowPath(var_313_object, var_301_bool, var_311_bool, var_337_string, var_338_string);
						if(!var_311_bool) { //@nz
							if(var_0_bool == 0) goto Label_1064;
							var_313_object = null;
						}
					EMIT "GOTO 0x429";

					Label_1064:
						} else {
					var_313_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_311_bool);
					if(!var_311_bool) { //@nz
						if(var_0_bool != 0) {
							var_313_object = null;
							goto Label_1092;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1092;
		}
			var_318_object = null;
			goto Label_1090;

		Label_1090:
			var_313_object = null;

		}
	Label_1092:
		for(;;) {
			var_297_bool = !var_0_bool;
			return 16;

			}
	}
	
}


// @pe
void func_2533(bool var_70_bool, float var_71_float, float var_72_float, float var_73_float)
{
	var_70_bool = false;
	if(var_71_float >= var_72_float) {
		if(var_71_float <= var_73_float)
			var_70_bool = true;
	}
}


void func_2541(bool var_101_bool, int var_102_int, int var_103_int)
{
	int var_105_int;
	@irand(var_105_int, var_103_int);
	var_101_bool = var_105_int < var_102_int;
}


void func_2546(int var_96_int, string var_97_string)
{
	int var_99_int;
	@GetVariable(var_97_string, var_99_int);
	var_99_int = var_96_int;
}


// @pe
void func_2551(bool var_33_bool, object var_34_object, float var_35_float)
{
	if(!var_34_object) { //@nz
		var_33_bool = false;
		return 0;
	}
	if(var_35_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_35_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_40_float;
		var_35_float = var_40_float;
		func_2596(var_40_float);
		bool var_44_bool; object var_45_object; float var_47_float;
		var_34_object = var_45_object;
		var_35_float = var_47_float;
		func_1955(var_44_bool, var_45_object, "reputation", var_47_float, (float)0, (float)1);
		var_33_bool = true;
		return 0;

	}
	
	var_33_bool = false;
}


void func_506(bool var_0_bool, object var_1_object, bool var_486_bool, float var_487_float)
{
	string var_495_string;
	func_847(var_495_string);
	int var_492_int;
	@irand(var_492_int, var_1_object);
	@Face(var_0_bool);
	@SetAttackState(true);
	func_2627();
	@PlayAnimation("all", ("attack_begin" + (var_492_int + 1)));
	@WaitForAnimEnd();
	int var_494_int;
	func_815(var_494_int, var_495_string);
	bool var_516_bool;
	func_2122(var_516_bool, var_0_bool);
	if(!var_516_bool) { //@nz
		@StopAsync();
		var_486_bool = false;
		return 8;
	}
	float var_519_float; int var_520_int;
	var_487_float = var_519_float;
	var_492_int = var_520_int;
	func_467(var_495_string, var_519_float, var_520_int);
	bool var_493_bool;
	@HasAnimation(var_493_bool, "all", ("attack_middle" + var_492_int));
	if(var_493_bool != 0) {
		func_2627();
		@PlayAnimation("all", ("attack_middle" + var_492_int));
		@WaitForAnimEnd();
		func_847(var_495_string);
		bool var_625_bool;
		func_2122(var_625_bool, var_0_bool);
		if(!var_625_bool) { //@nz
			@StopAsync();
			var_486_bool = false;
			return 8;
		}
		float var_628_float; int var_629_int;
		var_487_float = var_628_float;
		func_467(var_495_string, var_628_float, var_629_int);
		var_494_int = 1;

		for(;;) {
			var_495_string = (("attack_middle" + var_629_int) + "_") + var_494_int;
			@HasAnimation(var_493_bool, "all", var_495_string);
			if(!var_493_bool) { //@nz
			} else {
				func_2627();
				@PlayAnimation("all", var_495_string);
				@WaitForAnimEnd();
				func_847(var_495_string);
				bool var_651_bool;
				func_2122(var_651_bool, var_0_bool);
				if(!var_651_bool) { //@nz
					@StopAsync();
					var_486_bool = false;
					return 8;
				}
				float var_654_float; int var_655_int;
				var_487_float = var_654_float;
				var_492_int = var_655_int;
				func_467(var_495_string, var_654_float, var_655_int);
				var_494_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_492_int));
		bool var_640_bool;
		func_857(var_640_bool);
		if(var_640_bool != 0) {
			bool var_641_bool;
			func_645(var_641_bool, 0.45);
			@StopAsync();
		}
		var_486_bool = true;
		return 8;

	}
}


