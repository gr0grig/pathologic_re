// @GLOBALS: 0:bool:,1:object:,2:bool:

task task_0
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool)
	{
		object var_16_object;
		var_15_bool = var_16_object;
		func_2976();
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_19_object;
		var_15_object = var_19_object;
		object var_20_object;
		var_16_string = var_20_object;
		func_2978(var_20_object);
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
		func_2976();
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, object var_7_object, object var_8_object, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_19_object;
		var_15_object = var_19_object;
		object var_20_object;
		var_16_string = var_20_object;
		func_2978(var_20_object);
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
		func_2976();
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_19_object;
		var_15_object = var_19_object;
		object var_20_object;
		var_16_string = var_20_object;
		func_2978(var_20_object);
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
			func_2645(var_1_object);
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
			func_2425(var_19_object);
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
		func_2970();
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
			func_2436();
			if(var_16_int == 20248) {
				object var_21_object; object var_22_object;
				var_21_object = var_1_object;
				var_22_object = var_0_bool;
				func_2746();
			}
			if(var_16_int == 20242) {
				object var_31_object; object var_32_object;
				var_31_object = var_1_object;
				var_32_object = var_0_bool;
				func_2746();
			}
			if(var_16_int == 20258) {
				object var_35_object; object var_36_object;
				var_35_object = var_1_object;
				var_36_object = var_0_bool;
				func_2746();
			}
			if(var_16_int == 20255) {
				object var_39_object; object var_40_object;
				var_39_object = var_1_object;
				var_40_object = var_0_bool;
				func_2746();
			}
			if(var_15_int == 19494) {
				bool var_43_bool;
				func_2753(var_1_object);
				if(!var_43_bool) { //@nz
					object var_52_object; object var_53_object;
					var_52_object = var_1_object;
					var_53_object = var_0_bool;
					func_2740();
					func_1316(var_16_int, "Neutral");
					var_0_bool->SetMessage(518381); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(519109, 20244, 20240); //@t
					var_0_bool->AddReply(518382, 20241, 19495); //@t
					return 0;
				}
				bool var_80_bool;
				func_2753(var_1_object);
				if(var_80_bool != 0) {
					object var_82_object; object var_83_object;
					var_82_object = var_1_object;
					var_83_object = var_0_bool;
					func_2740();
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
			bool var_142_bool;
			func_2714(var_142_bool);
			if(var_142_bool != 0)
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
		func_2633(var_16_bool, "quest_b3_02", "grabitel_attack");
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
			func_2788(var_19_object);
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
	func_2908(var_16_object);
}


void func_0(bool var_0_bool, bool var_76_bool, object var_77_object, object var_196_object)
{
	object var_93_object;
	var_77_object = var_93_object;
	func_2645(var_93_object);
	bool var_98_bool; object var_99_object;
	var_77_object = var_99_object;
	func_2156(var_98_bool, var_99_object);
	bool var_112_bool; object var_113_object;
	func_2122(var_112_bool, var_113_object);
	if(!var_112_bool) { //@nz
		var_76_bool = false;
		return 14;
	}
	func_2654();
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
	func_2495(var_133_object);
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
	func_2671(var_138_cvector, var_139_cvector, var_140_cvector, 2000.0);
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


void func_2561(bool var_100_bool, int var_101_int, int var_102_int)
{
	int var_104_int;
	@irand(var_104_int, var_102_int);
	var_100_bool = var_104_int < var_101_int;
}


void func_2050(bool var_604_bool, object var_605_object)
{
	object var_609_object;
	var_605_object = var_609_object;
	bool var_608_bool;
	func_1943(var_608_bool, var_609_object, "health");
	if(!var_608_bool) { //@nz
		var_604_bool = false;
		return 2;
	}
	bool var_612_bool = false;
	bool var_613_bool; object var_614_object;
	func_1938(var_613_bool, var_614_object);
	if(var_613_bool != 0) {
		bool var_615_bool;
		func_2665(var_615_bool);
		if(var_615_bool != 0)
			var_612_bool = true;
	}
	if(var_612_bool != 0) {
		var_604_bool = false;
		return 2;
	}
	float var_607_float;
	var_614_object->GetProperty("health", var_607_float);
	var_604_bool = var_607_float <= 0.0;
}


void func_2566(int var_97_int, string var_98_string)
{
	int var_100_int;
	@GetVariable(var_98_string, var_100_int);
	var_100_int = var_97_int;
}


// @pe
void func_2571(bool var_32_bool, object var_33_object, float var_34_float)
{
	if(!var_33_object) { //@nz
		var_32_bool = false;
		return 0;
	}
	if(var_34_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_34_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_39_float;
		var_34_float = var_39_float;
		func_2623(var_39_float);
		bool var_43_bool; object var_44_object; float var_46_float;
		var_33_object = var_44_object;
		var_34_float = var_46_float;
		func_1955(var_43_bool, var_44_object, "reputation", var_46_float, (float)0, (float)1);
		var_32_bool = true;
		return 0;

	}
	
	var_32_bool = false;
}


void func_2081(bool var_42_bool, object var_43_object)
{
	bool var_45_bool;
	var_43_object->IsDead(var_45_bool);
	var_45_bool = var_42_bool;
}


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


void func_2606(float var_589_float)
{
	object var_591_object;
	@CreateFloatVector(var_591_object);
	var_591_object->add(var_589_float);
	if(var_589_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_591_object);
}
EMIT "Stack[-1] = 0";


void func_2623(float var_39_float)
{
	object var_41_object;
	@CreateFloatVector(var_41_object);
	var_41_object->add(var_39_float);
	@SendWorldWndMessage(16, var_41_object);
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
	func_2723(var_33_int);
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
				func_2716(var_55_string, var_56_int);
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


void func_2633(bool var_22_bool, string var_23_string, string var_24_string)
{
	object var_26_object;
	@FindActor(var_26_object, var_23_string);
	if(var_26_object == null)
		var_22_bool = false;
	@Trigger(var_26_object, var_24_string);
	var_22_bool = true;
}
EMIT "Stack[-1] = 0";


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


void func_2645(object var_93_object)
{
	bool var_95_bool;
	@IsPlayerActor(var_93_object, var_95_bool);
	if(var_95_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1116(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_2654(void)
{
	object var_116_object;
	@GetScene(var_116_object);
	object var_118_object;
	func_2495(var_118_object);
	@BroadcastMessage("battle", var_118_object, var_116_object);
}
EMIT "Stack[-1] = 0";


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


void func_2665(bool var_615_bool)
{
	bool var_617_bool;
	@GetVariable("god_mode", var_617_bool);
	var_617_bool = var_615_bool;
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


void func_2671(cvector var_138_cvector, cvector var_139_cvector, cvector var_140_cvector, float var_141_float)
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
	func_2518(var_158_float, var_159_float, var_160_float, var_161_float);
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
		func_2525(var_173_float, var_174_float, var_175_float, var_176_float);
		var_153_float = sqrt(var_172_float);
	}
	var_138_cvector = (var_148_cvector + (([0.0, 500.0, 0.0] * var_153_float) * var_153_float)) / var_153_float;
	
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
	int var_75_int;
	func_2708(var_75_int);
	var_23_object->SetNPCName(var_75_int);
	int var_76_int;
	func_2706(var_76_int);
	var_23_object->SetNPCDescription(var_76_int);
	string var_77_string;
	func_2710(var_77_string);
	var_23_object->SetPhoto(var_77_string);
	string var_78_string;
	func_2712(var_78_string);
	var_23_object->SetPhoto2(var_78_string);
	int var_79_int;
	func_2765(var_79_int);
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
	TaskCall(4);
	func_1217(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object);
	TaskReturn();
	bool var_26_bool;
	var_23_object->IsDialogEnd(var_26_bool);
	
	for(;;) {
		var_162_bool = !var_26_bool; //@nz
		if(var_162_bool == 0) goto Label_1206;
		@sync();
		var_23_object->IsDialogEnd(var_26_bool);
	}
	
Label_1206:
	object var_163_object;
	var_17_object = var_163_object;
	func_2376();
	@StopDialog(var_23_object);
	var_23_object->GetReturnValue(-1);
	int var_25_int = var_16_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_126(bool var_194_bool, object var_195_object)
{
	var_202_bool = GlobalVars[0];
	GlobalVars[0] = false;
	object var_203_object;
	func_203(var_199_bool, var_200_float, var_201_int, var_194_bool, var_203_object, var_203_object, true, 200.0);
	bool var_677_bool = false;
	var_678_bool = GlobalVars[0];
	if(var_678_bool != 0) {
		if(var_3_int != 0)
			var_677_bool = true;
	}
	if(var_677_bool != 0) {
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
	}
	var_682_bool = GlobalVars[0];
	var_682_bool = var_194_bool;
}


void func_643(int var_3_int)
{
	var_3_int = true;
}


void func_645(bool var_645_bool, float var_646_float)
{
	float var_649_float; bool var_650_bool;
	@rand(var_649_float);
	if(var_649_float < var_646_float) {

		for(;;) {
			@IsAnimationPlaying(var_650_bool);
			if(!var_650_bool) { //@nz
			} else {
				bool var_653_bool;
				func_743(var_653_bool);
				if(var_653_bool != 0) {
					var_645_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_645_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_847(var_650_bool);
}


void func_2706(int var_76_int)
{
	var_76_int = 518411;
}


void func_1683(bool var_58_bool)
{
	var_58_bool = true;
}


void func_2708(int var_75_int)
{
	var_75_int = 518410;
}


void func_1685(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_2710(string var_77_string)
{
	var_77_string = "ui/NPC_Citizen1.png";
}


void func_2712(string var_78_string)
{
	var_78_string = "ui/NPC_Citizen1_b.png";
}


// @pe
void func_154(float var_530_float)
{
	var_530_float = 0.15;
}


void func_2714(bool var_70_bool)
{
	var_70_bool = false;
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


void func_2716(string var_39_string, int var_40_int)
{
	string var_42_string = "idle";
	if(var_40_int != 0)
		var_42_string += var_40_int;
	var_42_string = var_39_string;
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


void func_160(int var_598_int)
{
	var_598_int = 1;
}


// @pe
void func_162(object var_599_object, float var_600_float)
{
	bool var_601_bool = false;
	if(var_600_float > 0) {
		bool var_604_bool; object var_605_object;
		var_599_object = var_605_object;
		func_2050(var_604_bool, var_605_object);
		if(var_604_bool != 0)
			var_601_bool = true;
	}
	if(var_601_bool != 0) {
		var_621_bool = GlobalVars[0];
		GlobalVars[0] = true;
		func_643(var_600_float);
	}
}


void func_2723(int var_33_int)
{
	int var_36_int; bool var_37_bool;
	var_36_int = 0;
	
	for(;;) {
		string var_39_string; int var_40_int;
		var_36_int = var_40_int;
		func_2716(var_39_string, var_40_int);
		@HasAnimation(var_37_bool, "all", var_39_string);
		if(!var_37_bool) //@nz
			break;
		var_36_int += 1;
	}
	var_36_int = var_33_int;
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
		func_2501(var_47_cvector, var_48_cvector);
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


void func_1705(bool var_19_bool, object var_20_object, bool var_78_bool, object var_685_object)
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
	func_2553(var_70_bool, var_71_float, 250000.0, 3240000.0);
	if(var_70_bool != 0) {
		bool var_76_bool; object var_77_object;
		var_20_object = var_77_object;
		TaskCall(0);
		func_0(var_71_float, var_78_bool, var_76_bool, var_77_object);
		TaskReturn();
		var_78_bool = var_19_bool;
		return 2;
	}
	bool var_683_bool; object var_684_object;
	var_20_object = var_684_object;
	TaskCall(1);
	func_126(var_683_bool, var_684_object);
	TaskReturn();
	var_685_object = var_19_bool;
}


// @pe
void func_2740(void)
{
	@SetVariable("b3q02GrabitelTalk", 1);
}


// @pe
void func_2746(void)
{
	bool var_23_bool;
	func_2633(var_23_bool, "quest_b3_02", "grabitel_attack");
}


// @pe
void func_1217(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, object var_88_object, object var_89_object)
{
	var_0_bool = var_89_object;
	var_1_object = var_88_object;
	var_3_int = false;
	if(1 != 0) {
		bool var_95_bool;
		func_2753(var_1_object);
		if(!var_95_bool) { //@nz
			object var_104_object; object var_105_object;
			var_104_object = var_1_object;
			var_105_object = var_0_bool;
			func_2740();
			func_1316(var_89_object, "Neutral");
			var_0_bool->SetMessage(518381); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(519109, 20244, 20240); //@t
			var_0_bool->AddReply(518382, 20241, 19495); //@t
		} else {
					bool var_150_bool;
					func_2753(var_1_object);
					if(var_150_bool == 0) goto Label_1284;
					object var_152_object; object var_153_object;
					var_152_object = var_1_object;
					var_153_object = var_0_bool;
					func_2740();
					func_1316(var_89_object, "Neutral");
					var_0_bool->SetMessage(518383); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(518384, 20252, 19497); //@t
					var_0_bool->AddReply(519119, 20252, 20251); //@t
		}
	}
	for(;;) {
		bool var_132_bool;
		func_2714(var_132_bool);
		if(var_132_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_int != 0) {
				} else {
					func_2394(var_2_int);
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


// @pe
void func_2753(bool var_95_bool)
{
	int var_97_int;
	func_2566(var_97_int, "b3q02");
	if(var_97_int > 3)
		var_95_bool = true;
	var_95_bool = false;
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
		func_2495(var_258_object);
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
					bool var_664_bool;
					func_804(var_227_float, var_664_bool);
					var_665_bool = !var_664_bool; //@nz
					if(var_665_bool == 0) goto Label_405;
					bool var_666_bool;
					func_2122(var_666_bool, var_0_bool);
					if(!var_666_bool) { //@nz
						goto Label_415;
					}
					var_0_bool->GetPFPosition(var_218_cvector); //@t
					@GetPFPosition(var_219_cvector);
					if(!(((var_218_cvector - var_219_cvector) | (var_218_cvector - var_219_cvector)) < (var_426_float * var_426_float))) goto Label_405;
					bool var_671_bool; float var_672_float;
					var_205_float = var_672_float;
					func_506(var_226_bool, var_227_float, var_671_bool, var_672_float);
					var_673_bool = !var_671_bool; //@nz
					if(var_673_bool == 0) goto Label_405;
					goto Label_415;
			}
				bool var_674_bool; float var_675_float;
				var_205_float = var_675_float;
				func_506(var_226_bool, var_227_float, var_674_bool, var_675_float);
				if(!var_674_bool) { //@nz
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


void func_2765(int var_79_int)
{
	int var_81_int;
	@GetVariable("branch", var_81_int);
	if(var_81_int == 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0xadc";
	}
	if(var_81_int == 1) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
}


// @pe
void func_1742(object var_70_object)
{
	func_2873();
	func_2849();
	object var_133_object;
	var_70_object = var_133_object;
	func_1754(var_133_object);
}


// @pe
void func_1754(object var_133_object)
{
	object var_134_object;
	var_133_object = var_134_object;
	func_1779(var_134_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_2782(int var_113_int)
{
	int var_115_int;
	@GetVariable("branch", var_115_int);
	var_115_int = var_113_int;
}


// @pe
void func_2788(object var_19_object)
{
	int var_20_int;
	func_2782(var_20_int);
	if(var_20_int == 1)
		@WorkWithCorpse(var_19_object);
	else
		@Barter(var_19_object);
	
}


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


void func_2801(int var_76_int, int var_77_int)
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
	func_2903(var_88_int, "Money");
	bool var_81_bool;
	@AddItem(var_81_bool, var_88_int, 0, var_80_int);
	
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


void func_1779(object var_134_object)
{
	cvector var_145_cvector; cvector var_146_cvector; cvector var_147_cvector; cvector var_148_cvector; string var_149_string; object var_150_object; bool var_151_bool; bool var_152_bool; float var_153_float; cvector var_154_cvector;
	if(var_134_object == null) {
		func_1870("fdie");
	} else {
		var_134_object->GetPosition(var_145_cvector);
		@GetPosition(var_146_cvector);
		@GetDirection(var_147_cvector);
		var_148_cvector = var_146_cvector - var_145_cvector;
		var_188_float = GetByIndex(var_148_cvector, 0);
		var_189_float = GetByIndex(var_147_cvector, 0);
		var_191_float = GetByIndex(var_148_cvector, 2);
		var_192_float = GetByIndex(var_147_cvector, 2);
		if(((var_188_float * var_189_float) + (var_191_float * var_192_float)) >= 0)
			var_149_string = "fdie";
		else
			var_149_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_134_object = var_150_object;
		var_199_bool = IsFuncExist(var_134_object, "GetScriptProperty", 2);
		if(var_199_bool != 0) {
			var_134_object->HasScriptProperty(var_151_bool, "Owner");
			if(var_151_bool != 0) {
				var_134_object->GetScriptProperty(var_150_object, "Owner");
				if(var_150_object == null)
					var_134_object = var_150_object;
			}
		}
		var_206_bool = IsFuncExist(var_150_object, "@GetEyesHeight", 1);
		if(var_206_bool != 0) {
			var_150_object->GetEyesHeight(var_153_float);
			var_154_cvector = [0.0, 0.0, 0.0];
			var_207_float = GetByIndex(var_154_cvector, 1);
			var_153_float = var_207_float;
			SetByIndex(var_154_cvector, 1) = var_207_float;
			@LookAsync(var_134_object, "head", var_154_cvector);
			var_152_bool = true;
		} else {
			var_152_bool = false;

		}
		string var_209_string;
		var_149_string = var_209_string;
		func_2454(var_209_string);
		@PlayAnimation("all", var_149_string);
		@WaitForAnimEnd();
		if(var_152_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_149_string);
		@RemoveEnvelope();
		var_150_object = null;
	}
	
}


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
	func_2501(var_54_cvector, (var_43_cvector ^ [0.0, 1.0, 0.0]));
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
	func_2714(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		@HasAnimationTrack(var_47_bool, "head");
		if(var_47_bool == 0) goto Label_2370;
		@LookAsyncCamera("head");
	}
Label_2370:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_27_bool = true;
	
}


void func_2832(string var_119_string)
{
	object var_123_object;
	@CreateInvItem(var_123_object);
	var_123_object->SetItemName(var_119_string);
	var_123_object->SetProperty("Organ", 1);
	int var_124_int;
	var_123_object->GetItemID(var_124_int);
	bool var_125_bool;
	@AddItem(var_125_bool, var_123_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_2849(void)
{
	int var_113_int;
	func_2782(var_113_int);
	if(var_113_int != 1) {
	}
	func_2832("liver");
	func_2832("kidney");
	func_2832("heart");
	func_2832("blood");
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
void func_1316(int var_2_int, string var_108_string)
{
	bool var_109_bool;
	func_2714(var_109_bool);
	if(!var_109_bool) //@nz
		return 0;
	if(var_108_string == var_2_int)
		return 0;
	string var_112_string; bool var_113_bool;
	var_108_string = var_112_string;
	if(var_108_string == "")
		var_113_bool = false;
	else
		var_113_bool = true;
	func_2410(var_112_string, var_113_bool);
	var_2_int = var_108_string;
	
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


void func_2873(void)
{
	@ClearSubContainer(0);
	func_2801(300, 750);
	func_2443("Knife", 1, 8);
	func_2443("lockpick", 1, 6);
	int var_109_int;
	func_2903(var_109_int, "grabitel_mark");
	bool var_74_bool;
	@AddItem(var_74_bool, var_109_int, 0, 1);
}


void func_2376(void)
{
	bool var_165_bool;
	@CameraSwitchToNormal(true);
	bool var_167_bool;
	func_2714(var_167_bool);
	if(var_167_bool != 0) {
	} else {
		@HasAnimationTrack(var_165_bool, "head");
		if(var_165_bool == 0) goto Label_2393;
		@UnlookAsync("head");
	}
Label_2393:
	
}


// @pe
void func_1870(string var_156_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_157_string;
	var_156_string = var_157_string;
	func_2454(var_157_string);
	@PlayAnimation("all", var_156_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_156_string);
	@RemoveEnvelope();
}


void func_847(bool var_0_bool)
{
	func_2645(var_0_bool);
}


void func_852(void)
{
	func_2454("attack_stay");
}


void func_2903(int var_88_int, string var_89_string)
{
	int var_91_int;
	@GetInvItemByName(var_91_int, var_89_string);
	var_91_int = var_88_int;
}


void func_857(bool var_644_bool)
{
	var_644_bool = true;
}


void func_2394(string var_134_string)
{
	bool var_138_bool; float var_139_float; float var_140_float;
	@lshHasAnimation(var_138_bool, var_134_string);
	if(var_138_bool != 0) {
		@lshGetAnimTimes(var_134_string, var_139_float, var_140_float);
		@lshPlayAnimation(var_139_float, var_140_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_134_string);
	}
	
}


void func_859(int var_515_int)
{
	var_515_int = 1;
}


void func_2908(object var_16_object)
{
	object var_18_object;
	@GetScene(var_18_object);
	object var_19_object;
	func_2495(var_19_object);
	var_18_object->RemoveStationaryActor(var_19_object);
	bool var_22_bool;
	func_2633(var_22_bool, "quest_b3_02", "grabitel_dead");
	bool var_28_bool; object var_29_object;
	var_16_object = var_29_object;
	func_1938(var_28_bool, var_29_object);
	if(var_28_bool != 0) {
		bool var_32_bool; object var_33_object;
		var_16_object = var_33_object;
		func_2571(var_32_bool, var_33_object, 0.03);
	}
	object var_70_object;
	var_16_object = var_70_object;
	TaskCall(7);
	func_1742(var_70_object);
	TaskReturn();
}
EMIT "Stack[-1] = 0";


void func_861(float var_510_float)
{
	var_510_float = 0.5;
}


void func_2410(string var_112_string, bool var_113_bool)
{
	bool var_119_bool; float var_120_float; float var_121_float;
	@lshHasAnimation(var_119_bool, var_112_string);
	if(var_119_bool != 0) {
		@lshGetAnimTimes(var_112_string, var_120_float, var_121_float);
		@lshPlayAnimation(var_120_float, var_121_float, var_113_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_112_string);
	}
	
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


void func_887(int var_2_int, bool var_268_bool, object var_269_object, float var_270_float, float var_271_float, bool var_272_bool, bool var_273_bool)
{
	object var_281_object;
	func_2645(var_281_object);
	@SetTimer(1, 5);
	bool var_279_bool;
	@CanSee(var_279_bool, var_281_object);
	if(var_279_bool != 0) {
		var_2_int = true;
		object var_285_object;
		var_269_object = var_285_object;
		func_2425(var_285_object);
	} else {
		var_2_int = false;
	}
	bool var_292_bool; object var_293_object;
	func_1938(var_292_bool, var_293_object);
	if(var_292_bool != 0) {
		object var_296_object;
		func_2495(var_296_object);
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


void func_2425(object var_285_object)
{
	float var_288_float;
	var_285_object->GetEyesHeight(var_288_float);
	cvector var_289_cvector = [0.0, 0.0, 0.0];
	var_290_float = GetByIndex(var_289_cvector, 1);
	var_288_float = var_290_float;
	SetByIndex(var_289_cvector, 1) = var_290_float;
	@LookAsync(var_285_object, "head", var_289_cvector);
}


void func_1916(cvector var_49_cvector, object var_50_object)
{
	cvector var_53_cvector;
	@GetPosition(var_53_cvector);
	cvector var_54_cvector;
	var_50_object->GetPosition(var_54_cvector);
	var_49_cvector = var_54_cvector - var_53_cvector;
}


void func_1923(float var_62_float, object var_63_object)
{
	cvector var_67_cvector;
	@GetPosition(var_67_cvector);
	cvector var_68_cvector;
	var_63_object->GetPosition(var_68_cvector);
	var_62_float = (var_68_cvector - var_67_cvector) | (var_68_cvector - var_67_cvector);
}


void func_2436(void)
{
	bool var_18_bool;
	func_2714(var_18_bool);
	if(var_18_bool != 0)
		@lshStopSpeech();
}


void func_1931(object var_21_object)
{
	object var_23_object;
	@FindActor(var_23_object, "player");
	var_23_object = var_21_object;
}
EMIT "Stack[-1] = 0";


void func_2443(string var_95_string, int var_96_int, int var_97_int)
{
	bool var_99_bool;
	int var_101_int;
	var_96_int = var_101_int;
	int var_102_int;
	var_97_int = var_102_int;
	bool var_100_bool;
	func_2561(var_100_bool, var_101_int, var_102_int);
	if(var_100_bool != 0)
		@AddItem(var_99_bool, var_95_string, 0);
}


void func_1938(bool var_28_bool, object var_29_object)
{
	bool var_31_bool;
	@IsPlayerActor(var_29_object, var_31_bool);
	var_31_bool = var_28_bool;
}


void func_2454(string var_157_string)
{
	bool var_166_bool; int var_167_int; bool var_168_bool; int var_169_int; bool var_170_bool; float var_171_float; cvector var_172_cvector; cvector var_173_cvector;
	@IsExisting3DSound(var_166_bool, var_157_string);
	if(!var_166_bool) { //@nz
		var_167_int = 0;

		for(;;) {
			@IsExisting3DSound(var_168_bool, (var_157_string + (var_167_int + 1)));
			if(!var_168_bool) { //@nz
				break;
			Label_2474:
				@irand(var_169_int, var_167_int);
				var_157_string += (var_169_int + 1);
	}
			@Is3DSoundLoaded(var_170_bool, var_157_string);
			if(var_170_bool != 0) {
				@GetEyesHeight(var_171_float);
				@GetDirection(var_172_cvector);
				var_173_cvector = var_172_cvector * 50;
				var_184_float = GetByIndex(var_173_cvector, 1);
				SetByIndex(var_173_cvector, 1) = (var_184_float + var_171_float);
				@PlayGlobalSound(var_157_string, var_173_cvector);
			}
		}
		var_167_int += 1;
	}
	var_179_bool = !var_167_int; //@nz
	if(var_179_bool == 0) goto Label_2474;
}


void func_1943(bool var_51_bool, object var_52_object, string var_53_string)
{
	var_58_bool = IsFuncExist(var_52_object, "HasProperty", 2);
	if(!var_58_bool) { //@nz
		var_51_bool = false;
		return 2;
	}
	bool var_55_bool;
	var_52_object->HasProperty(var_53_string, var_55_bool);
	var_55_bool = var_51_bool;
}


// @pe
void func_2976(void)
{
}


// @pe
void func_2978(bool var_18_bool)
{
	var_18_bool = false;
}


void func_1955(bool var_43_bool, object var_44_object, string var_45_string, float var_46_float, float var_47_float, float var_48_float)
{
	object var_52_object;
	var_44_object = var_52_object;
	string var_53_string;
	var_45_string = var_53_string;
	bool var_51_bool;
	func_1943(var_51_bool, var_52_object, var_53_string);
	if(!var_51_bool) //@nz
		var_43_bool = false;
	float var_50_float;
	var_44_object->GetProperty(var_45_string, var_50_float);
	float var_61_float; float var_63_float; float var_64_float;
	var_47_float = var_63_float;
	var_48_float = var_64_float;
	func_2542(var_61_float, (var_50_float + var_46_float), var_63_float, var_64_float);
	var_44_object->SetProperty(var_45_string, var_61_float);
	var_43_bool = true;
}


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
	func_2511(var_571_float, ((var_546_int + var_548_int) / 100.0), (float)1);
	float var_549_float;
	var_571_float = var_549_float;
	float var_550_float;
	var_534_object->GetProperty("health", var_550_float);
	float var_551_float = var_535_float * (1 - var_549_float);
	float var_581_float;
	func_2542(var_581_float, (var_550_float - var_551_float), (float)0, (float)1);
	var_534_object->SetProperty("health", var_581_float);
	bool var_587_bool; object var_588_object;
	var_534_object = var_588_object;
	func_1938(var_587_bool, var_588_object);
	if(var_587_bool != 0) {
		float var_589_float = -var_551_float;
		func_2606(var_589_float);
	}
	var_551_float = var_533_float;
	
}


void func_2495(object var_19_object)
{
	object var_21_object;
	@self(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


void func_2501(cvector var_47_cvector, cvector var_48_cvector)
{
	float var_56_float = sqrt(var_48_cvector | var_48_cvector);
	if(var_56_float < 0.000001)
		var_47_cvector = [0.0, 0.0, 0.0];
	var_47_cvector = var_48_cvector / var_56_float;
}


// @pe
void func_2511(float var_571_float, float var_572_float, float var_573_float)
{
	if(var_572_float < var_573_float)
		var_572_float = var_571_float;
	else
		var_573_float = var_571_float;
	
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
		int var_598_int;
		func_160(var_598_int);
		@ReportHit(var_0_bool, var_598_int, var_526_float, var_535_float);
		object var_599_object; float var_600_float;
		var_524_object = var_599_object;
		var_526_float = var_600_float;
		func_162(var_599_object, var_600_float);
	}
}
EMIT "Stack[-3] = 0";


// @pe
void func_2518(float var_158_float, float var_159_float, float var_160_float, float var_161_float)
{
	var_158_float = (var_160_float * var_160_float) - ((4 * var_159_float) * var_161_float);
}


void func_2525(float var_172_float, float var_173_float, float var_174_float, float var_176_float)
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
void func_2542(float var_61_float, float var_62_float, float var_63_float, float var_64_float)
{
	if(var_62_float < var_63_float) {
		var_63_float = var_61_float;
		return 0;
	}
	if(var_62_float > var_64_float) {
		var_64_float = var_61_float;
		return 0;
	}
	var_62_float = var_61_float;
}


// @pe
void func_2553(bool var_70_bool, float var_71_float, float var_72_float, float var_73_float)
{
	var_70_bool = false;
	if(var_71_float >= var_72_float) {
		if(var_71_float <= var_73_float)
			var_70_bool = true;
	}
}


void func_506(bool var_0_bool, object var_1_object, bool var_486_bool, float var_487_float)
{
	string var_495_string;
	func_847(var_495_string);
	int var_492_int;
	@irand(var_492_int, var_1_object);
	@Face(var_0_bool);
	@SetAttackState(true);
	func_2654();
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
		func_2654();
		@PlayAnimation("all", ("attack_middle" + var_492_int));
		@WaitForAnimEnd();
		func_847(var_495_string);
		bool var_629_bool;
		func_2122(var_629_bool, var_0_bool);
		if(!var_629_bool) { //@nz
			@StopAsync();
			var_486_bool = false;
			return 8;
		}
		float var_632_float; int var_633_int;
		var_487_float = var_632_float;
		func_467(var_495_string, var_632_float, var_633_int);
		var_494_int = 1;

		for(;;) {
			var_495_string = (("attack_middle" + var_633_int) + "_") + var_494_int;
			@HasAnimation(var_493_bool, "all", var_495_string);
			if(!var_493_bool) { //@nz
			} else {
				func_2654();
				@PlayAnimation("all", var_495_string);
				@WaitForAnimEnd();
				func_847(var_495_string);
				bool var_655_bool;
				func_2122(var_655_bool, var_0_bool);
				if(!var_655_bool) { //@nz
					@StopAsync();
					var_486_bool = false;
					return 8;
				}
				float var_658_float; int var_659_int;
				var_487_float = var_658_float;
				var_492_int = var_659_int;
				func_467(var_495_string, var_658_float, var_659_int);
				var_494_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_492_int));
		bool var_644_bool;
		func_857(var_644_bool);
		if(var_644_bool != 0) {
			bool var_645_bool;
			func_645(var_645_bool, 0.45);
			@StopAsync();
		}
		var_486_bool = true;
		return 8;

	}
}


