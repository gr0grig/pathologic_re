// @GLOBALS: 0:object:,1:object:

task task_0
{
	// @pe
	void OnTrigger(string name, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector, bool var_12_bool)
	{
		if(var_12_bool == "cleanup") {
			object var_15_object;
			func_1992(var_15_object);
			@RemoveActor(var_15_object);
			@Hold();
		}
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, bool var_11_bool)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, bool var_10_bool, cvector var_11_cvector, cvector var_12_cvector, bool var_13_bool)
	{
		if(1 != 0) {
			func_1831();
			if(var_13_bool == 41529) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_2149();
			}
			if(var_13_bool == 16575) {
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_object;
				func_2149();
			}
			if(var_13_bool == 16583) {
				object var_49_object; object var_50_object;
				var_49_object = var_1_object;
				var_50_object = var_0_object;
				func_2154();
			}
			if(var_12_cvector == 16570) {
				bool var_59_bool;
				func_2161(var_1_object);
				if(var_59_bool != 0) {
					object var_67_object; object var_68_object;
					var_67_object = var_1_object;
					var_68_object = var_0_object;
					func_2137();
					object var_71_object; object var_72_object;
					var_71_object = var_1_object;
					var_72_object = var_0_object;
					func_2131();
					func_217(var_13_bool, "Neutral");
					var_0_object->SetMessage(515453); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(515454, 16572, 16571); //@t
					var_0_object->AddReply(539571, 41513, 41512); //@t
					return 0;
				}
				bool var_99_bool;
				func_2173(var_1_object);
				if(var_99_bool != 0) {
					object var_105_object; object var_106_object;
					var_105_object = var_1_object;
					var_106_object = var_0_object;
					func_2143();
					func_217(var_13_bool, "Neutral");
					var_0_object->SetMessage(515459); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(515460, 41515, 16577); //@t
					var_0_object->AddReply(539577, 41519, 41518); //@t
					return 0;
				}
				func_217(var_13_bool, "Neutral");
				var_0_object->SetMessage(515465); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515466, -1, 16583); //@t
				return 0;
			}
			if(var_12_cvector == 41515) {
				func_217(var_13_bool, "Neutral");
				var_0_object->SetMessage(539574); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539575, 41519, 41516); //@t
				var_0_object->AddReply(539576, 41519, 41517); //@t
				return 0;
			}
			if(var_12_cvector == 41519) {
				func_217(var_13_bool, "Neutral");
				var_0_object->SetMessage(539578); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539579, -1, 41522); //@t
				var_0_object->AddReply(539580, -1, 41523); //@t
				return 0;
			}
			if(var_12_cvector == 41513) {
				func_217(var_13_bool, "Neutral");
				var_0_object->SetMessage(539572); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539878, 41840, 41833); //@t
				var_0_object->AddReply(539573, 16572, 41514); //@t
				return 0;
			}
			if(var_12_cvector == 16572) {
				func_217(var_13_bool, "Neutral");
				var_0_object->SetMessage(515455); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515456, 16574, 16573); //@t
				var_0_object->AddReply(539581, 16574, 41525); //@t
				return 0;
			}
			if(var_12_cvector == 16574) {
				func_217(var_13_bool, "Neutral");
				var_0_object->SetMessage(515457); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539582, 41528, 41527); //@t
				var_0_object->AddReply(539880, 41836, 41835); //@t
				return 0;
			}
			if(var_12_cvector == 41836) {
				func_217(var_13_bool, "Neutral");
				var_0_object->SetMessage(539881); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539882, 41528, 41837); //@t
				var_0_object->AddReply(539883, 41840, 41839); //@t
				return 0;
			}
			if(var_12_cvector == 41840) {
				func_217(var_13_bool, "Neutral");
				var_0_object->SetMessage(539884); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539885, 41528, 41842); //@t
				return 0;
			}
			if(var_12_cvector == 41528) {
				func_217(var_13_bool, "Neutral");
				var_0_object->SetMessage(539583); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539584, -1, 41529); //@t
				var_0_object->AddReply(515458, -1, 16575); //@t
				return 0;
			}
			var_3_string = true;
			bool var_199_bool;
			func_2802(var_199_bool);
			if(var_199_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xf0";
	
	}

}


task task_3
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector, bool var_12_bool)
	{
		bool var_14_bool;
		@IsOverrideActive(var_14_bool);
		if(!var_14_bool) { //@nz
			object var_16_object;
			var_12_bool = var_16_object;
			func_2262(var_16_object);
		}
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, float var_7_float, float var_8_float, object var_9_object, object var_10_object, object var_11_object, bool var_12_bool, cvector var_13_cvector, cvector var_14_cvector, bool var_15_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, string var_6_string, object var_7_object, object var_8_object, object var_9_object, bool var_10_bool, cvector var_11_cvector, cvector var_12_cvector, bool var_13_bool)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector, bool var_12_bool)
	{
	}

}


task task_4
{
	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector, bool var_12_bool)
	{
		func_733();
		object var_14_object;
		var_12_bool = var_14_object;
		func_2427();
	}

	// @pe
	void OnHear(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector, bool var_12_bool)
	{
		if(var_12_bool == actor) {
			@KillTimer(100);
			@Face(actor);
		}
	}

	// @pe
	void OnStopHear(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector, bool var_12_bool)
	{
		if(var_12_bool == actor) {
			@SetTimer(100, 3.0);
			func_1690(actor);
		}
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector, bool var_14_bool, object var_101_object)
		{
		object var_103_object;
		var_101_object = var_103_object;
			bool var_102_bool;
		func_1540(var_102_bool, var_103_object);
		if(!var_102_bool) { //@nz
			object var_131_object;
			var_101_object = var_131_object;
			func_2599(var_131_object);
		}
		func_733();
		object var_147_object;
		var_101_object = var_147_object;
		func_2623(var_147_object);
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector, bool var_14_bool)
	{
		object var_16_object;
		var_12_cvector = var_16_object;
		object var_17_object;
		var_13_cvector = var_17_object;
		bool var_18_bool;
		var_14_bool = var_18_bool;
		bool var_15_bool;
		func_2742(var_15_bool, var_16_object, var_17_object, var_18_bool);
		if(var_15_bool != 0) {
			object var_101_object;
			var_12_cvector = var_101_object;
			func_771();
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector, bool var_12_bool)
	{
		object var_14_object;
		var_12_bool = var_14_object;
		bool var_13_bool;
		func_2714(var_13_bool, var_14_object);
		if(var_13_bool != 0) {
			func_733();
			object var_133_object;
			var_12_bool = var_133_object;
			func_2736(var_133_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, object var_7_object, object var_8_object, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector, bool var_12_bool)
	{
		if(var_12_bool != 100) {
		}
		@KillTimer(100);
		@StopGroup0();
	}

}


task task_5
{
	// @pe
	void OnHear(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, cvector var_10_cvector, cvector var_11_cvector, bool var_12_bool)
	{
		bool var_13_bool = false;
		if(var_2_object != 0) {
			if(var_12_bool == actor)
				var_13_bool = true;
		}
		if(var_13_bool != 0)
			func_1690(actor);
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, cvector var_10_cvector, cvector var_11_cvector, bool var_12_bool)
	{
		bool var_13_bool = false;
		if(var_2_object != 0) {
			if(var_12_bool == actor)
				var_13_bool = true;
		}
		if(var_13_bool != 0) {
			@Trace("@Stop hunt");
			@StopAnimation();
			@StopGroup0();
		}
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector, bool var_14_bool, object var_101_object)
		{
		object var_103_object;
		var_101_object = var_103_object;
			bool var_102_bool;
		func_1540(var_102_bool, var_103_object);
		if(!var_102_bool) //@nz
			return 0;
		object var_131_object;
		var_101_object = var_131_object;
		func_2599(var_131_object);
		if(var_101_object == actor) {
			var_1_object = null;
		} else {
			var_1_object = var_101_object;
			if(var_2_object == 0) goto Label_1156;
			@StopAnimation();
			@StopGroup0();
		}
	Label_1156:
	
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector, bool var_14_bool)
	{
		object var_16_object;
		var_12_cvector = var_16_object;
		object var_17_object;
		var_13_cvector = var_17_object;
		bool var_18_bool;
		var_14_bool = var_18_bool;
		bool var_15_bool;
		func_2742(var_15_bool, var_16_object, var_17_object, var_18_bool);
		if(var_15_bool != 0) {
			object var_101_object;
			var_12_cvector = var_101_object;
			func_1133();
		}
	}

}


maintask task_6
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, bool var_11_bool)
	{
		bool var_12_bool;
		func_1708(var_12_bool);
		if(!var_12_bool) { //@nz
			TaskCall(0);
			func_12();
			TaskReturn();
		}
		func_1260();
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, bool var_11_bool, object var_12_object)
	{
		var_15_object = GlobalVars[0];
		bool var_14_bool;
		var_15_object->in(var_14_bool, var_12_object);
		if(!var_14_bool) { //@nz
			object var_17_object;
			var_12_object = var_17_object;
			func_1170(var_17_object);
		}
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, bool var_11_bool, string var_12_string)
	{
		object var_14_object;
		if(var_12_string == "attack") {
			object var_17_object;
			func_1402(var_17_object);
			var_17_object = var_14_object;
			func_1367();
			object var_21_object;
			var_14_object = var_21_object;
			func_2623(var_21_object);
			var_14_object = null;
		} else if(var_12_string == "cleanup") {
			var_2_object = true;
		}
	
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, bool var_11_bool, object var_12_object)
	{
		bool var_13_bool;
		func_2099(var_13_bool, "quest_d10_01", "soldier_fight");
	}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, bool var_14_bool)
	{
	}

	void OnHear(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, bool var_11_bool, object var_12_object)
	{
		bool var_15_bool; object var_16_object;
		func_1540(var_15_bool, var_16_object);
		if(!var_15_bool) { //@nz
		}
		var_50_object = GlobalVars[0];
		bool var_14_bool;
		var_50_object->in(var_14_bool, var_16_object);
		if(var_14_bool != 0) {
			func_1367();
			object var_52_object;
			var_12_object = var_52_object;
			TaskCall(4);
			func_709(var_53_object, var_52_object);
			TaskReturn();
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, bool var_11_bool, object var_12_object)
	{
		object var_14_object;
		var_12_object = var_14_object;
		bool var_13_bool;
		func_2714(var_13_bool, var_14_object);
		if(var_13_bool != 0) {
			func_1367();
			object var_132_object;
			var_12_object = var_132_object;
			func_2768(var_132_object);
		}
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, bool var_11_bool, object var_12_object, int var_13_int, float var_14_float, float var_15_float)
{
	object var_16_object;
	var_12_object = var_16_object;
	int var_17_int;
	var_13_int = var_17_int;
	float var_18_float;
	var_14_float = var_18_float;
	func_1608(var_16_object, var_17_int, var_18_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, bool var_11_bool, object var_12_object, int var_13_int, float var_14_float, float var_15_float, cvector var_16_cvector, cvector var_17_cvector)
{
	object var_18_object;
	var_12_object = var_18_object;
	int var_19_int;
	var_13_int = var_19_int;
	float var_20_float;
	var_14_float = var_20_float;
	cvector var_21_cvector;
	var_16_cvector = var_21_cvector;
	cvector var_22_cvector;
	var_17_cvector = var_22_cvector;
	func_1676(var_20_float, var_21_cvector, var_22_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, bool var_11_bool, object var_12_object, string var_13_string)
{
	float var_15_float;
	if(var_13_string == "health") {
		@GetProperty("health", var_15_float);
		if(var_15_float <= 0)
			@SignalDeath(var_12_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, bool var_11_bool, object var_12_object)
{
	bool var_13_bool; object var_14_object;
	func_1409(var_13_bool, var_14_object);
	if(var_13_bool != 0) {
		object var_17_object;
		func_1992(var_17_object);
		@ReportReputationChange(var_14_object, var_17_object, 0.0, true);
	}
	object var_22_object;
	var_12_object = var_22_object;
	func_2788(var_22_object);
}


void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, bool var_11_bool)
{
	object var_12_object;
	func_1992(var_12_object);
	@RemoveActor(var_12_object);
	@Hold();
}


// @pe
void func_2050(float var_219_float, cvector var_220_cvector)
{
	var_221_float = GetByIndex(var_220_cvector, 0);
	var_222_float = GetByIndex(var_220_cvector, 0);
	var_224_float = GetByIndex(var_220_cvector, 2);
	var_225_float = GetByIndex(var_220_cvector, 2);
	var_219_float = sqrt((var_221_float * var_222_float) + (var_224_float * var_225_float));
}


void func_1540(bool var_17_bool, object var_18_object)
{
	object var_22_object;
	var_18_object = var_22_object;
	bool var_21_bool;
	func_1504(var_21_bool, var_22_object);
	if(!var_21_bool) { //@nz
		var_17_bool = false;
		return 2;
	}
	bool var_39_bool; object var_40_object;
	func_1414(var_39_bool, var_40_object, "noaccess");
	if(!var_39_bool) { //@nz
		var_17_bool = true;
		return 2;
	}
	int var_20_int;
	var_40_object->GetProperty("noaccess", var_20_int);
	var_17_bool = var_20_int == 0;
}


// @pe
void func_2060(float var_207_float, cvector var_208_cvector, cvector var_209_cvector)
{
	cvector var_211_cvector;
	var_208_cvector = var_211_cvector;
	cvector var_212_cvector;
	var_209_cvector = var_212_cvector;
	float var_210_float;
	func_2041(var_210_float, var_211_cvector, var_212_cvector);
	float var_219_float; cvector var_220_cvector;
	var_208_cvector = var_220_cvector;
	func_2050(var_219_float, var_220_cvector);
	float var_228_float; cvector var_229_cvector;
	var_209_cvector = var_229_cvector;
	func_2050(var_228_float, var_229_cvector);
	var_207_float = var_210_float / (var_219_float * var_228_float);
}


void func_12(void)
{
	
Label_12:
	@Hold();
	bool var_16_bool;
	func_1708(var_16_bool);
	if(!var_16_bool) goto Label_12; //@nz
}


void func_2581(void)
{
	var_18_object = GlobalVars[0];
	object var_19_object;
	func_2035(var_19_object);
	var_19_object = var_18_object;
	GlobalVars[0] = var_18_object;
}


void func_25(object var_0_object, int var_18_int, object var_19_object)
{
	var_0_object = var_19_object;
	bool var_29_bool; object var_30_object;
	var_19_object = var_30_object;
	func_1713(var_29_bool, var_30_object, 70.0);
	if(!var_29_bool) { //@nz
		var_18_int = -2;
		return 8;
	}
	object var_25_object;
	@CreateDialog(var_25_object);
	int var_77_int;
	func_2796(var_77_int);
	var_25_object->SetNPCName(var_77_int);
	int var_78_int;
	func_2794(var_78_int);
	var_25_object->SetNPCDescription(var_78_int);
	string var_79_string;
	func_2798(var_79_string);
	var_25_object->SetPhoto(var_79_string);
	string var_80_string;
	func_2800(var_80_string);
	var_25_object->SetPhoto2(var_80_string);
	int var_81_int;
	func_2239(var_81_int);
	var_25_object->SetPlayerName(var_81_int);
	bool var_26_bool;
	@IsOverrideActive(var_26_bool);
	if(var_26_bool != 0) {
		var_18_int = -2;
		return 8;
	}
	@DoDialog(var_25_object);
	object var_90_object; object var_91_object;
	var_19_object = var_90_object;
	var_25_object = var_91_object;
	TaskCall(2);
	func_99(var_92_object, var_93_object, var_94_string, var_95_bool, var_90_object, var_91_object);
	TaskReturn();
	bool var_28_bool;
	var_25_object->IsDialogEnd(var_28_bool);
	
	for(;;) {
		var_178_bool = !var_28_bool; //@nz
		if(var_178_bool == 0) goto Label_88;
		@sync();
		var_25_object->IsDialogEnd(var_28_bool);
	}
	
Label_88:
	object var_179_object;
	var_19_object = var_179_object;
	func_1782();
	@StopDialog(var_25_object);
	var_25_object->GetReturnValue(-1);
	int var_27_int = var_18_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2588(object var_137_object, bool var_138_bool)
{
	object var_139_object;
	var_137_object = var_139_object;
	bool var_140_bool;
	var_138_bool = var_140_bool;
	TaskCall(5);
	func_829(var_141_object, var_142_object, var_143_bool, var_139_object, var_140_bool);
	TaskReturn();
	@ResetAAS();
}


void func_2077(int var_99_int, string var_100_string)
{
	int var_102_int;
	@GetVariable(var_100_string, var_102_int);
	var_102_int = var_99_int;
}


void func_1564(object var_29_object)
{
	string var_43_string;
	if(var_29_object == null)
		return 14;
	bool var_37_bool;
	@IsDead(var_37_bool);
	if(var_37_bool != 0)
		return 14;
	int var_38_int;
	@GetSecondaryAnimationType(var_38_int);
	if(var_38_int < 0)
		return 14;
	cvector var_39_cvector;
	var_29_object->GetPosition(var_39_cvector);
	cvector var_40_cvector;
	@GetPosition(var_40_cvector);
	cvector var_41_cvector;
	@GetDirection(var_41_cvector);
	cvector var_42_cvector = var_40_cvector - var_39_cvector;
	var_48_float = GetByIndex(var_42_cvector, 0);
	var_49_float = GetByIndex(var_41_cvector, 0);
	var_51_float = GetByIndex(var_42_cvector, 2);
	var_52_float = GetByIndex(var_41_cvector, 2);
	if(((var_48_float * var_49_float) + (var_51_float * var_52_float)) >= 0)
		var_43_string = "fhit";
	else
		var_43_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_43_string + "1"), (var_43_string + "2"), -10);
	
}


// @pe
void func_544(object var_24_object)
{
	object var_26_object;
	var_24_object = var_26_object;
	bool var_25_bool;
	func_1409(var_25_bool, var_26_object);
	if(var_25_bool != 0)
		func_2347();
	func_2323();
	object var_103_object;
	var_24_object = var_103_object;
	func_561(var_103_object);
}


void func_2082(float var_308_float)
{
	object var_310_object;
	@CreateFloatVector(var_310_object);
	var_310_object->add(var_308_float);
	if(var_308_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_310_object);
}
EMIT "Stack[-1] = 0";


void func_2599(object var_22_object)
{
	if(var_22_object == null) {
	}
	var_26_object = GlobalVars[0];
	bool var_24_bool;
	var_26_object->in(var_24_bool, var_22_object);
	if(!var_24_bool) { //@nz
		var_28_object = GlobalVars[0];
		var_28_object->add(var_22_object);
	}
	bool var_29_bool; object var_30_object;
	func_1409(var_29_bool, var_30_object);
	if(var_29_bool != 0) {
		object var_33_object;
		func_1992(var_33_object);
		@ReportReputationChange(var_30_object, var_33_object, 0.0);
	}
}


// @pe
void func_561(object var_103_object)
{
	object var_104_object;
	var_103_object = var_104_object;
	func_586(var_104_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_2099(bool var_13_bool, string var_14_string, string var_15_string)
{
	object var_17_object;
	@FindActor(var_17_object, var_14_string);
	if(var_17_object == null)
		var_13_bool = false;
	@Trigger(var_17_object, var_15_string);
	var_13_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2623(object var_21_object)
{
	object var_22_object;
	var_21_object = var_22_object;
	func_2599(var_22_object);
	object var_37_object;
	var_21_object = var_37_object;
	func_2588(var_37_object, true);
}


void func_2111(object var_148_object)
{
	bool var_150_bool;
	@IsPlayerActor(var_148_object, var_150_bool);
	if(var_150_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_2120(void)
{
	object var_154_object;
	@GetScene(var_154_object);
	object var_156_object;
	func_1992(var_156_object);
	@BroadcastMessage("battle", var_156_object, var_154_object);
}
EMIT "Stack[-1] = 0";


void func_1608(object var_16_object, int var_17_int, float var_18_float)
{
	cvector var_28_cvector; object var_29_object; int var_30_int; bool var_31_bool; cvector var_32_cvector; cvector var_33_cvector;
	bool var_37_bool = false;
	bool var_38_bool = false;
	if(var_16_object != 0) {
		if(var_17_int != 4)
			var_38_bool = true;
	}
	if(var_38_bool != 0) {
		if(var_17_int != 5)
			var_37_bool = true;
	}
	if(var_37_bool != 0) {
		cvector var_44_cvector; cvector var_45_cvector;
		cvector var_46_cvector; object var_47_object;
		var_16_object = var_47_object;
		func_1387(var_46_cvector, var_47_object);
		var_46_cvector = var_45_cvector;
		func_1998(var_44_cvector, var_45_cvector);
		var_44_cvector = var_28_cvector;
		@CreateVectorVector(var_29_object);
		var_30_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_30_int), var_31_bool, var_32_cvector, var_33_cvector);
			if(!var_31_bool) { //@nz
				break;
			Label_1670:
				var_29_object = null;
	}
			object var_106_object;
			var_16_object = var_106_object;
			func_1564(var_106_object);
		}
		if((var_33_cvector | var_28_cvector) >= 0.70710677)
			var_29_object->add(var_32_cvector);
		var_30_int += 1;
	}
	int var_34_int;
	var_29_object->size(var_34_int);
	if(var_34_int == 0) goto Label_1670;
	int var_35_int;
	@irand(var_35_int, var_34_int);
	cvector var_36_cvector;
	var_29_object->get(var_36_cvector, var_35_int);
	object var_61_object; int var_62_int; float var_63_float; cvector var_64_cvector; cvector var_65_cvector;
	var_16_object = var_61_object;
	var_17_int = var_62_int;
	var_18_float = var_63_float;
	var_36_cvector = var_64_cvector;
	var_65_cvector = -var_28_cvector;
	func_1676(var_63_float, var_64_cvector, var_65_cvector);
}


void func_586(object var_104_object)
{
	cvector var_115_cvector; cvector var_116_cvector; cvector var_117_cvector; cvector var_118_cvector; string var_119_string; object var_120_object; bool var_121_bool; bool var_122_bool; float var_123_float; cvector var_124_cvector;
	if(var_104_object == null) {
		func_677("fdie");
	} else {
		var_104_object->GetPosition(var_115_cvector);
		@GetPosition(var_116_cvector);
		@GetDirection(var_117_cvector);
		var_118_cvector = var_116_cvector - var_115_cvector;
		var_158_float = GetByIndex(var_118_cvector, 0);
		var_159_float = GetByIndex(var_117_cvector, 0);
		var_161_float = GetByIndex(var_118_cvector, 2);
		var_162_float = GetByIndex(var_117_cvector, 2);
		if(((var_158_float * var_159_float) + (var_161_float * var_162_float)) >= 0)
			var_119_string = "fdie";
		else
			var_119_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_104_object = var_120_object;
		var_169_bool = IsFuncExist(var_104_object, "GetScriptProperty", 2);
		if(var_169_bool != 0) {
			var_104_object->HasScriptProperty(var_121_bool, "Owner");
			if(var_121_bool != 0) {
				var_104_object->GetScriptProperty(var_120_object, "Owner");
				if(var_120_object == null)
					var_104_object = var_120_object;
			}
		}
		var_176_bool = IsFuncExist(var_120_object, "@GetEyesHeight", 1);
		if(var_176_bool != 0) {
			var_120_object->GetEyesHeight(var_123_float);
			var_124_cvector = [0.0, 0.0, 0.0];
			var_177_float = GetByIndex(var_124_cvector, 1);
			var_123_float = var_177_float;
			SetByIndex(var_124_cvector, 1) = var_177_float;
			@LookAsync(var_104_object, "head", var_124_cvector);
			var_122_bool = true;
		} else {
			var_122_bool = false;

		}
		string var_179_string;
		var_119_string = var_179_string;
		func_1864(var_179_string);
		@PlayAnimation("all", var_119_string);
		@WaitForAnimEnd();
		if(var_122_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_119_string);
		@RemoveEnvelope();
		var_120_object = null;
	}
	
}


void func_2634(bool var_54_bool, object var_55_object)
{
	float var_59_float; float var_61_float;
	object var_63_object;
	var_55_object = var_63_object;
	bool var_62_bool;
	func_1540(var_62_bool, var_63_object);
	if(!var_62_bool) { //@nz
		var_54_bool = false;
		return 6;
	}
	bool var_65_bool; object var_66_object;
	func_1409(var_65_bool, var_66_object);
	if(var_65_bool != 0) {
		var_66_object->GetProperty("reputation", var_59_float);
		var_54_bool = var_59_float < 0.33;
		return 6;
	}
	bool var_71_bool; object var_72_object;
	func_1414(var_71_bool, var_72_object, "class");
	if(!var_71_bool) { //@nz
		var_54_bool = false;
		return 6;
	}
	string var_60_string;
	var_72_object->GetProperty("class", var_60_string);
	bool var_76_bool = true;
	bool var_77_bool = true;
	var_79_bool = var_60_string == "bomber";
	if(var_79_bool != 1) {
		var_81_bool = var_60_string == "hunter";
		if(var_81_bool != 1)
			var_77_bool = false;
	}
	if(var_77_bool != 1) {
		var_83_bool = var_60_string == "grabitel";
		if(var_83_bool != 1)
			var_76_bool = false;
	}
	if(var_76_bool != 0) {
		var_54_bool = true;
		return 6;
	}
	bool var_84_bool; object var_85_object;
	func_1414(var_84_bool, var_85_object, "disease");
	if(!var_84_bool) { //@nz
		var_54_bool = false;
		return 6;
	}
	bool var_88_bool = true;
	bool var_89_bool; string var_90_string;
	func_1905(var_89_bool, var_90_string);
	if(var_89_bool != 1) {
		var_129_bool = var_90_string == "dog";
		if(var_129_bool != 1)
			var_88_bool = false;
	}
	if(var_88_bool != 0) {
		var_85_object->GetProperty("disease", var_61_float);
		var_54_bool = var_61_float > 0;
		return 6;
	}
	var_54_bool = false;
}


// @pe
void func_2131(void)
{
	@SetVariable("d10q01SoldierTalk", 1);
}


// @pe
void func_2137(void)
{
	@SetVariable("ood10MSoldier1", 1);
}


// @pe
void func_2143(void)
{
	@SetVariable("ood10MSoldier2", 1);
}


// @pe
void func_99(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_90_object, object var_91_object)
{
	var_0_object = var_91_object;
	var_1_object = var_90_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_97_bool;
		func_2161(var_1_object);
		if(var_97_bool != 0) {
			object var_105_object; object var_106_object;
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_2137();
			object var_109_object; object var_110_object;
			var_109_object = var_1_object;
			var_110_object = var_0_object;
			func_2131();
			func_217(var_91_object, "Neutral");
			var_0_object->SetMessage(515453); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(515454, 16572, 16571); //@t
			var_0_object->AddReply(539571, 41513, 41512); //@t
		} else {
					bool var_155_bool;
					func_2173(var_1_object);
					if(var_155_bool == 0) goto Label_170;
					object var_161_object; object var_162_object;
					var_161_object = var_1_object;
					var_162_object = var_0_object;
					func_2143();
					func_217(var_91_object, "Neutral");
					var_0_object->SetMessage(515459); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(515460, 41515, 16577); //@t
					var_0_object->AddReply(539577, 41519, 41518); //@t
		}
	}
Label_187:
	for(;;) {
		bool var_137_bool;
		func_2802(var_137_bool);
		if(var_137_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1800(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_216;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_216:
			return 0;

		}

	}
	
Label_170:
	func_217(var_91_object, "Neutral");
	var_0_object->SetMessage(515465); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(515466, -1, 16583); //@t
	goto Label_187;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x67";


// @pe
void func_2149(void)
{
	func_2185();
}


// @pe
void func_2154(void)
{
	bool var_51_bool;
	func_2099(var_51_bool, "quest_d10_01", "soldier_fight");
}


// @pe
void func_2161(bool var_97_bool)
{
	int var_99_int;
	func_2077(var_99_int, "ood10MSoldier1");
	if(var_99_int == 0) {
		var_97_bool = true;
		return 0;
	}
	var_97_bool = false;
}


// @pe
void func_2173(bool var_155_bool)
{
	int var_157_int;
	func_2077(var_157_int, "ood10MSoldier2");
	if(var_157_int == 0) {
		var_155_bool = true;
		return 0;
	}
	var_155_bool = false;
}


void func_2185(void)
{
	object var_21_object;
	@CreateDiaryEntry(var_21_object, 188, 1, 515473);
	bool var_25_bool; object var_26_object;
	var_21_object = var_26_object;
	func_2211(var_25_bool, var_26_object, 186);
}
EMIT "Stack[-1] = 0";


void func_1676(object var_18_object, cvector var_21_cvector, cvector var_22_cvector)
{
	object var_25_object;
	@GetScene(var_25_object);
	object var_26_object;
	@AddActorByType(var_26_object, "scripted", var_25_object, var_21_cvector, var_22_cvector, "blood_dir.xml");
	object var_29_object;
	var_18_object = var_29_object;
	func_1564(var_29_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1170(object var_17_object)
{
	func_1367();
	int var_18_int; object var_19_object;
	var_17_object = var_19_object;
	TaskCall(1);
	func_25(var_20_object, var_18_int, var_19_object);
	TaskReturn();
}


void func_2198(object var_34_object)
{
	object var_36_object;
	@GetDiaryRoot(var_36_object);
	if(!var_36_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_34_object = false;
	}
	var_36_object = var_34_object;
}
EMIT "Stack[-1] = 0";


void func_1690(object var_331_object)
{
	cvector var_335_cvector;
	var_331_object->GetPosition(var_335_cvector);
	cvector var_336_cvector;
	@GetPosition(var_336_cvector);
	cvector var_337_cvector = var_335_cvector - var_336_cvector;
	var_338_float = GetByIndex(var_337_cvector, 0);
	var_339_float = GetByIndex(var_337_cvector, 2);
	@RotateAsync(var_338_float, var_339_float);
}


void func_2714(bool var_13_bool, object var_14_object)
{
	bool var_17_bool; object var_18_object;
	func_1540(var_17_bool, var_18_object);
	if(!var_17_bool) { //@nz
		var_13_bool = false;
		return 2;
	}
	var_52_object = GlobalVars[0];
	bool var_16_bool;
	var_52_object->in(var_16_bool, var_18_object);
	if(var_16_bool != 0) {
		var_13_bool = true;
		return 2;
	}
	bool var_54_bool; object var_55_object;
	var_14_object = var_55_object;
	func_2634(var_54_bool, var_55_object);
	var_54_bool = var_13_bool;
}


void func_2211(bool var_25_bool, object var_26_object, int var_27_int)
{
	object var_34_object;
	func_2198(var_34_object);
	object var_31_object;
	var_34_object = var_31_object;
	object var_32_object;
	var_31_object->Find(var_27_int, var_32_object);
	if(!var_32_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_27_int);
		var_25_bool = false;
	}
	var_32_object->AddChild(var_26_object);
	@SendWorldWndMessage(7);
	int var_33_int;
	var_26_object->GetCategory(var_33_int);
	@SetDiarySection(var_33_int);
	var_25_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_677(string var_126_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_127_string;
	var_126_string = var_127_string;
	func_1864(var_127_string);
	@PlayAnimation("all", var_126_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_126_string);
	@RemoveEnvelope();
}


void func_1701(float var_246_float, object var_247_object)
{
	float var_250_float;
	@GetEyesHeight(var_250_float);
	float var_251_float;
	var_247_object->GetEyesHeight(var_251_float);
	var_246_float = var_251_float - var_250_float;
}


void func_1708(bool var_12_bool)
{
	bool var_14_bool;
	@IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
}


// @pe
void func_2736(object var_133_object)
{
	object var_134_object;
	var_133_object = var_134_object;
	func_2768(var_134_object);
}


void func_1713(bool var_29_bool, object var_30_object, float var_31_float)
{
	cvector var_42_cvector; bool var_49_bool;
	var_30_object->GetPosition(var_42_cvector);
	float var_41_float;
	var_30_object->GetEyesHeight(var_41_float);
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (var_50_float + var_41_float);
	cvector var_43_cvector;
	@GetPosition(var_43_cvector);
	@GetEyesHeight(var_41_float);
	var_51_float = GetByIndex(var_43_cvector, 1);
	SetByIndex(var_43_cvector, 1) = (var_51_float + var_41_float);
	cvector var_44_cvector = var_42_cvector - var_43_cvector;
	var_52_float = GetByIndex(var_44_cvector, 1);
	SetByIndex(var_44_cvector, 1) = (float)0;
	var_54_float = sqrt(var_44_cvector | var_44_cvector);
	var_44_cvector /= var_54_float;
	cvector var_45_cvector = -var_44_cvector;
	cvector var_56_cvector;
	func_1998(var_56_cvector, (var_45_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_46_cvector = ((var_44_cvector * var_31_float) + (var_56_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_48_bool;
	@IsOverrideActive(var_48_bool);
	if(var_48_bool != 0)
		var_29_bool = false;
	@StopWorld();
	@CameraTransit((var_43_cvector + var_46_cvector), var_45_cvector, true);
	var_70_float = GetByIndex(var_46_cvector, 0);
	var_71_float = GetByIndex(var_46_cvector, 2);
	@Rotate(var_70_float, var_71_float);
	bool var_72_bool;
	func_2802(var_72_bool);
	if(var_72_bool != 0) {
	} else {
		@HasAnimationTrack(var_49_bool, "head");
		if(var_49_bool == 0) goto Label_1776;
		@LookAsyncCamera("head");
	}
Label_1776:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_29_bool = true;
	
}


void func_2742(bool var_15_bool, object var_16_object, object var_17_object, bool var_18_bool)
{
	bool var_20_bool;
	object var_22_object;
	var_17_object = var_22_object;
	bool var_21_bool;
	func_2445(var_21_bool, var_22_object, !var_18_bool);
	if(var_21_bool != 0) {
		@CanSee(var_20_bool, var_16_object);
		bool var_89_bool = true;
		if(var_20_bool != 1) {
			float var_91_float; object var_92_object;
			var_16_object = var_92_object;
			func_1394(var_91_float, var_92_object);
			var_100_bool = var_91_float <= 490000.0;
			if(var_100_bool != 1)
				var_89_bool = false;
		}
		if(var_89_bool != 0)
			var_15_bool = true;
	}
	var_15_bool = false;
}


void func_2239(int var_81_int)
{
	int var_83_int;
	@GetVariable("branch", var_83_int);
	if(var_83_int == 0) {
		var_81_int = 1;
		return 2;
	EMIT "GOTO 0x8ce";
	}
	if(var_83_int == 1) {
		var_81_int = 2;
		return 2;
	}
	var_81_int = 3;
}


void func_709(object var_0_object, object var_52_object)
{
	bool var_55_bool;
	@Face(var_52_object);
	
	for(;;) {
		@Sleep(0.5, var_55_bool);
		bool var_57_bool = true;
		var_58_bool = !var_55_bool; //@nz
		if(var_58_bool != 1) {
			bool var_59_bool;
			func_1540(var_59_bool, var_52_object);
			var_61_bool = !var_59_bool; //@nz
			if(var_61_bool != 1)
				var_57_bool = false;
		}
		if(var_57_bool != 0)
			break;
	}
	@StopAsync();
}


void func_2768(object var_132_object)
{
	var_135_object = GlobalVars[0];
	bool var_134_bool;
	var_135_object->in(var_134_bool, var_132_object);
	if(var_134_bool != 0) {
		object var_137_object;
		var_132_object = var_137_object;
		func_2588(var_137_object, true);
	}
}


void func_2256(int var_83_int)
{
	int var_85_int;
	@GetVariable("branch", var_85_int);
	var_85_int = var_83_int;
}


// @pe
void func_2262(object var_16_object)
{
	int var_17_int;
	func_2256(var_17_int);
	if(var_17_int == 1)
		@WorkWithCorpse(var_16_object);
	else
		@Barter(var_16_object);
	
}


// @pe
void func_217(object var_2_object, string var_113_string)
{
	bool var_114_bool;
	func_2802(var_114_bool);
	if(!var_114_bool) //@nz
		return 0;
	if(var_113_string == var_2_object)
		return 0;
	string var_117_string; bool var_118_bool;
	var_113_string = var_117_string;
	if(var_113_string == "")
		var_118_bool = false;
	else
		var_118_bool = true;
	func_1816(var_117_string, var_118_bool);
	var_2_object = var_113_string;
	
}


void func_733(void)
{
	@StopAsync();
	@KillTimer(100);
	@StopGroup0();
}


void func_2275(int var_32_int, int var_33_int)
{
	if(var_32_int > var_33_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_36_int = 0;
	if(var_32_int != var_33_int) {
		@irand(var_36_int, (var_33_int - var_32_int));
	} else if(var_32_int == 0) {
		return 4;
	}
	var_36_int += var_32_int;
	if(var_36_int == 0)
		return 4;
	int var_44_int;
	func_2383(var_44_int, "Money");
	bool var_37_bool;
	@AddItem(var_37_bool, var_44_int, 0, var_36_int);
	
}


// @pe
void func_2788(object var_22_object)
{
	object var_23_object;
	var_22_object = var_23_object;
	func_2388(var_23_object);
}


void func_2794(int var_78_int)
{
	var_78_int = 515597;
}


void func_2796(int var_77_int)
{
	var_77_int = 514841;
}


// @pe
void func_1260(void)
{
	func_2581();
	
	for(;;) {
		func_1283(var_10_cvector, var_11_bool);
	}
}
EMIT "Return(); Pop(0)";


void func_2798(string var_79_string)
{
	var_79_string = "ui/NPC_Citizen2.png";
}


void func_2800(string var_80_string)
{
	var_80_string = "ui/NPC_Citizen2_b.png";
}


void func_2802(bool var_72_bool)
{
	var_72_bool = false;
}


void func_1268(void)
{
}


void func_1782(void)
{
	bool var_181_bool;
	@CameraSwitchToNormal(true);
	bool var_183_bool;
	func_2802(var_183_bool);
	if(var_183_bool != 0) {
	} else {
		@HasAnimationTrack(var_181_bool, "head");
		if(var_181_bool == 0) goto Label_1799;
		@UnlookAsync("head");
	}
Label_1799:
	
}


void func_2306(string var_89_string)
{
	object var_93_object;
	@CreateInvItem(var_93_object);
	var_93_object->SetItemName(var_89_string);
	var_93_object->SetProperty("Organ", 1);
	int var_94_int;
	var_93_object->GetItemID(var_94_int);
	bool var_95_bool;
	@AddItem(var_95_bool, var_93_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_1283(object var_0_object, object var_1_object)
{
	int var_26_int; bool var_27_bool; cvector var_28_cvector; object var_29_object;
	@GetPFPosition(var_1_object);
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1372();
		@irand(var_26_int, 10);
		@Sleep((var_26_int + 5), var_27_bool);
		if(var_27_bool != 0) {
			func_1268();
		} else {
		for(;;) {
			func_1372();
			@GetPFPosition(var_28_cvector);
			float var_34_float; cvector var_36_cvector;
			var_28_cvector = var_36_cvector;
			func_2008(var_34_float, var_1_object, var_36_cvector);
			if(var_34_float > 40000) {
				@FindPathTo(var_29_object, var_1_object);
				if(var_29_object != null) {
					@RotatePath(var_29_object, var_27_bool);
					if(!var_27_bool) { //@nz
					} else {
					@FollowPath(var_29_object, false, var_27_bool);
					if(!var_27_bool) { //@nz
						goto Label_1364;
					}
					var_45_float = GetByIndex(var_0_object, 0);
					var_46_float = GetByIndex(var_0_object, 2);
					@Rotate(var_45_float, var_46_float, var_27_bool);
					if(!var_27_bool) { //@nz
						goto Label_1364;
					}
					@WaitForAnimEnd(var_27_bool);
					if(!var_27_bool) { //@nz
						goto Label_1364;
					}
					goto Label_1365;
				EMIT "GOTO 0x545";
				}
				@Sleep(1);
				var_29_object = null;
				goto Label_1364;
			}
			var_50_float = GetByIndex(var_0_object, 0);
			var_51_float = GetByIndex(var_0_object, 2);
			@Rotate(var_50_float, var_51_float, var_27_bool);
			if(!var_27_bool) { //@nz
				goto Label_1364;
			}
			@WaitForAnimEnd(var_27_bool);
			if(!var_27_bool) { //@nz
				goto Label_1364;
			}
			goto Label_1365;
			}
		Label_1364:
		}
		}
	Label_1365:
	}
	
}
EMIT "Return(); Pop(8)";


void func_1800(string var_139_string)
{
	bool var_143_bool; float var_144_float; float var_145_float;
	@lshHasAnimation(var_143_bool, var_139_string);
	if(var_143_bool != 0) {
		@lshGetAnimTimes(var_139_string, var_144_float, var_145_float);
		@lshPlayAnimation(var_144_float, var_145_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_139_string);
	}
	
}


void func_2323(void)
{
	int var_83_int;
	func_2256(var_83_int);
	if(var_83_int != 1) {
	}
	func_2306("liver");
	func_2306("kidney");
	func_2306("heart");
	func_2306("blood");
}


void func_1816(string var_117_string, bool var_118_bool)
{
	bool var_124_bool; float var_125_float; float var_126_float;
	@lshHasAnimation(var_124_bool, var_117_string);
	if(var_124_bool != 0) {
		@lshGetAnimTimes(var_117_string, var_125_float, var_126_float);
		@lshPlayAnimation(var_125_float, var_126_float, var_118_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_117_string);
	}
	
}


void func_1831(void)
{
	bool var_15_bool;
	func_2802(var_15_bool);
	if(var_15_bool != 0)
		@lshStopSpeech();
}


void func_2347(void)
{
	@ClearSubContainer(0);
	func_2275(500, 1000);
	func_1849("rifle_ammo", 1, 3, 3);
	func_1849("rusk", 1, 3, 2);
	func_1838("bandage", 1, 6);
	func_1838("tourniquet", 1, 6);
}


void func_1838(string var_71_string, int var_72_int, int var_73_int)
{
	bool var_75_bool;
	int var_77_int;
	var_72_int = var_77_int;
	int var_78_int;
	var_73_int = var_78_int;
	bool var_76_bool;
	func_2030(var_76_bool, var_77_int, var_78_int);
	if(var_76_bool != 0)
		@AddItem(var_75_bool, var_71_string, 0);
}


void func_1849(string var_51_string, int var_52_int, int var_53_int, int var_54_int)
{
	int var_57_int; bool var_58_bool;
	int var_60_int;
	var_52_int = var_60_int;
	int var_61_int;
	var_53_int = var_61_int;
	bool var_59_bool;
	func_2030(var_59_bool, var_60_int, var_61_int);
	if(var_59_bool != 0) {
		@irand(var_57_int, var_54_int);
		@AddItem(var_58_bool, var_51_string, 0, (var_57_int + 1));
	}
}


void func_829(object var_0_object, object var_1_object, object var_2_object, object var_139_object, bool var_140_bool)
{
	bool var_146_bool; bool var_147_bool;
	var_0_object = var_139_object;
	func_2111(var_0_object);
	func_2120();
	@Face(var_0_object);
	if(var_140_bool != 0) {
		@PlayAnimation("all", "attack_on");
		@WaitForAnimEnd();
	}
	@LockAnimationEnd("all", "attack_on");
	@SetAttackState(true);
	
Label_855:
	for(;;) {
		bool var_165_bool;
		func_1540(var_165_bool, var_0_object);
		if(var_165_bool != 0) {
			@CanSee(var_147_bool, var_0_object);
			if(var_147_bool != 0) {
				func_2111(var_0_object);
				func_1009(var_147_bool);
			} else {
				func_1690(var_0_object);
				var_2_object = true;
				@PlayAnimation("all", "hunt");
				@WaitForAnimEnd(var_146_bool);
				if(!var_146_bool) { //@nz
					if(var_1_object != null)
						func_1004(var_146_bool, var_147_bool);
					@LockAnimationEnd("all", "attack_on");
					goto Label_855;
				}
				bool var_346_bool;
				func_1540(var_346_bool, var_0_object);
				if(!var_346_bool) { //@nz
				} else {
						@CanSee(var_147_bool, var_0_object);
						if(var_147_bool != 0) {
							var_2_object = false;
							@Face(var_0_object);
							func_1009(var_147_bool);
							goto Label_951;
						}
						@LockAnimationEnd("all", "attack_on");
						@Sleep(3, var_146_bool);
						if(!var_146_bool) { //@nz
							if(var_1_object != null)
								func_1004(var_146_bool, var_147_bool);
							@LockAnimationEnd("all", "attack_on");
							goto Label_855;
						}
						bool var_360_bool;
						func_1540(var_360_bool, var_0_object);
						var_362_bool = !var_360_bool; //@nz
						if(var_362_bool == 0) goto Label_939;
				}
		}
		Label_961:
			for(;;) {
				@SetAttackState(false);
				@StopAsync();
				@PlayAnimation("all", "attack_off");
				@WaitForAnimEnd();

			}

		Label_939:
			var_2_object = false;
			@CanSee(var_147_bool, var_0_object);
			if(var_147_bool != 0) {
				@Face(var_0_object);
				func_1009(var_147_bool);
				goto Label_951;
			}
			goto Label_961;
		}
	Label_951:
		if(var_1_object != null)
			func_1004(var_146_bool, var_147_bool);
		else
			@Sleep(2);

	}
	
}


void func_1864(string var_127_string)
{
	bool var_136_bool; int var_137_int; bool var_138_bool; int var_139_int; bool var_140_bool; float var_141_float; cvector var_142_cvector; cvector var_143_cvector;
	@IsExisting3DSound(var_136_bool, var_127_string);
	if(!var_136_bool) { //@nz
		var_137_int = 0;

		for(;;) {
			@IsExisting3DSound(var_138_bool, (var_127_string + (var_137_int + 1)));
			if(!var_138_bool) { //@nz
				break;
			Label_1884:
				@irand(var_139_int, var_137_int);
				var_127_string += (var_139_int + 1);
	}
			@Is3DSoundLoaded(var_140_bool, var_127_string);
			if(var_140_bool != 0) {
				@GetEyesHeight(var_141_float);
				@GetDirection(var_142_cvector);
				var_143_cvector = var_142_cvector * 50;
				var_154_float = GetByIndex(var_143_cvector, 1);
				SetByIndex(var_143_cvector, 1) = (var_154_float + var_141_float);
				@PlayGlobalSound(var_127_string, var_143_cvector);
			}
		}
		var_137_int += 1;
	}
	var_149_bool = !var_137_int; //@nz
	if(var_149_bool == 0) goto Label_1884;
}


void func_2383(int var_44_int, string var_45_string)
{
	int var_47_int;
	@GetInvItemByName(var_47_int, var_45_string);
	var_47_int = var_44_int;
}


// @pe
void func_2388(object var_23_object)
{
	object var_24_object;
	var_23_object = var_24_object;
	TaskCall(3);
	func_544(var_24_object);
	TaskReturn();
}


void func_1367(void)
{
	@StopGroup0();
	@Stop();
}


void func_1372(void)
{
}


// @pe
void func_1373(string var_280_string, int var_281_int)
{
	if(var_281_int == 2) {
		var_280_string = "fire";
		return 0;
	EMIT "GOTO 0x569";
	}
	if(var_281_int == 1) {
		var_280_string = "bullet";
		return 0;
	}
	var_280_string = "phys";
}


void func_1387(cvector var_46_cvector, object var_47_object)
{
	cvector var_50_cvector;
	@GetPosition(var_50_cvector);
	cvector var_51_cvector;
	var_47_object->GetPosition(var_51_cvector);
	var_46_cvector = var_51_cvector - var_50_cvector;
}


// @pe
void func_1905(bool var_89_bool, string var_90_string)
{
	var_89_bool = true;
	bool var_91_bool = true;
	bool var_92_bool = true;
	bool var_93_bool = true;
	bool var_94_bool = true;
	bool var_95_bool = true;
	bool var_96_bool = true;
	bool var_97_bool = true;
	bool var_98_bool = true;
	bool var_99_bool = true;
	bool var_100_bool = true;
	bool var_101_bool = true;
	var_103_bool = var_90_string == "woman";
	if(var_103_bool != 1) {
		var_105_bool = var_90_string == "worker";
		if(var_105_bool != 1)
			var_101_bool = false;
	}
	if(var_101_bool != 1) {
		var_107_bool = var_90_string == "butcher";
		if(var_107_bool != 1)
			var_100_bool = false;
	}
	if(var_100_bool != 1) {
		var_109_bool = var_90_string == "wasted_girl";
		if(var_109_bool != 1)
			var_99_bool = false;
	}
	if(var_99_bool != 1) {
		var_111_bool = var_90_string == "boy";
		if(var_111_bool != 1)
			var_98_bool = false;
	}
	if(var_98_bool != 1) {
		var_113_bool = var_90_string == "vaxxabitka";
		if(var_113_bool != 1)
			var_97_bool = false;
	}
	if(var_97_bool != 1) {
		var_115_bool = var_90_string == "unosha";
		if(var_115_bool != 1)
			var_96_bool = false;
	}
	if(var_96_bool != 1) {
		var_117_bool = var_90_string == "wasted_male";
		if(var_117_bool != 1)
			var_95_bool = false;
	}
	if(var_95_bool != 1) {
		var_119_bool = var_90_string == "alkash";
		if(var_119_bool != 1)
			var_94_bool = false;
	}
	if(var_94_bool != 1) {
		var_121_bool = var_90_string == "dohodyaga";
		if(var_121_bool != 1)
			var_93_bool = false;
	}
	if(var_93_bool != 1) {
		var_123_bool = var_90_string == "vaxxabit";
		if(var_123_bool != 1)
			var_92_bool = false;
	}
	if(var_92_bool != 1) {
		var_125_bool = var_90_string == "nudegirl";
		if(var_125_bool != 1)
			var_91_bool = false;
	}
	if(var_91_bool != 1) {
		var_127_bool = var_90_string == "morlok";
		if(var_127_bool != 1)
			var_89_bool = false;
	}
}


void func_1394(float var_91_float, object var_92_object)
{
	cvector var_96_cvector;
	@GetPosition(var_96_cvector);
	cvector var_97_cvector;
	var_92_object->GetPosition(var_97_cvector);
	var_91_float = (var_97_cvector - var_96_cvector) | (var_97_cvector - var_96_cvector);
}


void func_1402(object var_17_object)
{
	object var_19_object;
	@FindActor(var_19_object, "player");
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


void func_1409(bool var_13_bool, object var_14_object)
{
	bool var_16_bool;
	@IsPlayerActor(var_14_object, var_16_bool);
	var_16_bool = var_13_bool;
}


void func_1414(bool var_39_bool, object var_40_object, string var_41_string)
{
	var_46_bool = IsFuncExist(var_40_object, "HasProperty", 2);
	if(!var_46_bool) { //@nz
		var_39_bool = false;
		return 2;
	}
	bool var_43_bool;
	var_40_object->HasProperty(var_41_string, var_43_bool);
	var_43_bool = var_39_bool;
}


void func_2445(bool var_21_bool, object var_22_object, bool var_23_bool)
{
	bool var_26_bool; object var_27_object;
	func_1414(var_26_bool, var_27_object, "class");
	if(!var_26_bool) { //@nz
		var_21_bool = false;
		return 2;
	}
	string var_25_string;
	var_27_object->GetProperty("class", var_25_string);
	bool var_37_bool = true;
	bool var_38_bool = true;
	bool var_39_bool = true;
	bool var_40_bool = true;
	bool var_41_bool = true;
	bool var_42_bool = true;
	bool var_43_bool = true;
	bool var_44_bool = true;
	bool var_45_bool = true;
	bool var_46_bool = true;
	var_48_bool = var_25_string == "patrol";
	if(var_48_bool != 1) {
		var_50_bool = var_25_string == "sanitar";
		if(var_50_bool != 1)
			var_46_bool = false;
	}
	if(var_46_bool != 1) {
		var_52_bool = var_25_string == "soldier";
		if(var_52_bool != 1)
			var_45_bool = false;
	}
	if(var_45_bool != 1) {
		var_54_bool = var_25_string == "woman";
		if(var_54_bool != 1)
			var_44_bool = false;
	}
	if(var_44_bool != 1) {
		var_56_bool = var_25_string == "wasted_girl";
		if(var_56_bool != 1)
			var_43_bool = false;
	}
	if(var_43_bool != 1) {
		var_58_bool = var_25_string == "vaxxabitka";
		if(var_58_bool != 1)
			var_42_bool = false;
	}
	if(var_42_bool != 1) {
		var_60_bool = var_25_string == "vaxxabit";
		if(var_60_bool != 1)
			var_41_bool = false;
	}
	if(var_41_bool != 1) {
		var_62_bool = var_25_string == "little_girl";
		if(var_62_bool != 1)
			var_40_bool = false;
	}
	if(var_40_bool != 1) {
		var_64_bool = var_25_string == "girl";
		if(var_64_bool != 1)
			var_39_bool = false;
	}
	if(var_39_bool != 1) {
		var_66_bool = var_25_string == "dohodyaga";
		if(var_66_bool != 1)
			var_38_bool = false;
	}
	if(var_38_bool != 1) {
		var_68_bool = var_25_string == "nudegirl";
		if(var_68_bool != 1)
			var_37_bool = false;
	}
	if(var_37_bool != 0) {
		var_21_bool = true;
		return 2;
	}
	if(var_23_bool != 0) {
		var_21_bool = false;
		return 2;
	}
	var_21_bool = true;
	bool var_70_bool = true;
	bool var_71_bool = true;
	bool var_72_bool = true;
	bool var_73_bool = true;
	bool var_74_bool = true;
	var_76_bool = var_25_string == "worker";
	if(var_76_bool != 1) {
		var_78_bool = var_25_string == "butcher";
		if(var_78_bool != 1)
			var_74_bool = false;
	}
	if(var_74_bool != 1) {
		var_80_bool = var_25_string == "boy";
		if(var_80_bool != 1)
			var_73_bool = false;
	}
	if(var_73_bool != 1) {
		var_82_bool = var_25_string == "unosha";
		if(var_82_bool != 1)
			var_72_bool = false;
	}
	if(var_72_bool != 1) {
		var_84_bool = var_25_string == "wasted_male";
		if(var_84_bool != 1)
			var_71_bool = false;
	}
	if(var_71_bool != 1) {
		var_86_bool = var_25_string == "alkash";
		if(var_86_bool != 1)
			var_70_bool = false;
	}
	if(var_70_bool != 1) {
		var_88_bool = var_25_string == "morlok";
		if(var_88_bool != 1)
			var_21_bool = false;
	}
}


void func_1426(float var_255_float, object var_256_object, float var_257_float, int var_258_int)
{
	int var_265_int; int var_267_int;
	object var_272_object;
	var_256_object = var_272_object;
	bool var_271_bool;
	func_1414(var_271_bool, var_272_object, "health");
	if(!var_271_bool) //@nz
		var_255_float = 0.0;
	bool var_275_bool; object var_276_object;
	func_1414(var_275_bool, var_276_object, "armor");
	if(!var_275_bool) //@nz
		var_265_int = 0;
	else
		var_276_object->GetProperty("armor", var_265_int);
	string var_280_string; int var_281_int;
	var_258_int = var_281_int;
	func_1373(var_280_string, var_281_int);
	string var_266_string = "armor_" + var_280_string;
	bool var_286_bool; object var_287_object; string var_288_string;
	var_256_object = var_287_object;
	func_1414(var_286_bool, var_287_object, var_288_string);
	if(!var_286_bool) //@nz
		var_267_int = 0;
	else
		var_256_object->GetProperty(var_288_string, var_267_int);

	float var_290_float;
	func_2012(var_290_float, ((var_265_int + var_267_int) / 100.0), (float)1);
	float var_268_float;
	var_290_float = var_268_float;
	float var_269_float;
	var_256_object->GetProperty("health", var_269_float);
	float var_270_float = var_257_float * (1 - var_268_float);
	float var_300_float;
	func_2019(var_300_float, (var_269_float - var_270_float), (float)0, (float)1);
	var_256_object->SetProperty("health", var_300_float);
	bool var_306_bool; object var_307_object;
	var_256_object = var_307_object;
	func_1409(var_306_bool, var_307_object);
	if(var_306_bool != 0) {
		float var_308_float = -var_270_float;
		func_2082(var_308_float);
	}
	var_270_float = var_255_float;
	
}


void func_1992(object var_12_object)
{
	object var_14_object;
	@self(var_14_object);
	var_14_object = var_12_object;
}
EMIT "Stack[-1] = 0";


void func_1998(cvector var_44_cvector, cvector var_45_cvector)
{
	float var_53_float = sqrt(var_45_cvector | var_45_cvector);
	if(var_53_float < 0.000001)
		var_44_cvector = [0.0, 0.0, 0.0];
	var_44_cvector = var_45_cvector / var_53_float;
}


void func_2008(float var_34_float, cvector var_35_cvector, cvector var_36_cvector)
{
	var_34_float = (var_36_cvector - var_35_cvector) | (var_36_cvector - var_35_cvector);
}


void func_1499(bool var_32_bool, object var_33_object)
{
	bool var_35_bool;
	var_33_object->IsDead(var_35_bool);
	var_35_bool = var_32_bool;
}


// @pe
void func_2012(float var_290_float, float var_291_float, float var_292_float)
{
	if(var_291_float < var_292_float)
		var_291_float = var_290_float;
	else
		var_292_float = var_290_float;
	
}


void func_1504(bool var_21_bool, object var_22_object)
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
		func_1499(var_32_bool, var_33_object);
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
void func_2019(float var_300_float, float var_301_float, float var_302_float, float var_303_float)
{
	if(var_301_float < var_302_float) {
		var_302_float = var_300_float;
		return 0;
	}
	if(var_301_float > var_303_float) {
		var_303_float = var_300_float;
		return 0;
	}
	var_301_float = var_300_float;
}


void func_1004(object var_0_object, object var_1_object)
{
	var_1_object = null;
	@Face(var_1_object);
}


void func_2030(bool var_59_bool, int var_60_int, int var_61_int)
{
	int var_63_int;
	@irand(var_63_int, var_61_int);
	var_59_bool = var_63_int < var_60_int;
}


void func_1009(object var_0_object)
{
	object var_188_object; object var_189_object; float var_194_float; object var_195_object; object var_196_object;
	func_2111(var_0_object);
	@ReportAttack(var_0_object);
	bool var_198_bool;
	func_1409(var_198_bool, var_0_object);
	if(var_198_bool != 0) {
		object var_200_object;
		func_1992(var_200_object);
		@SendPlayerEnemy(var_0_object, var_200_object);
	}
	cvector var_183_cvector;
	@GetDirection(var_183_cvector);
	cvector var_201_cvector;
	func_1387(var_201_cvector, var_0_object);
	cvector var_184_cvector;
	var_201_cvector = var_184_cvector;
	float var_207_float; cvector var_208_cvector; cvector var_209_cvector;
	var_184_cvector = var_209_cvector;
	func_2060(var_207_float, var_208_cvector, var_209_cvector);
	if(var_207_float < 0.99939084) {
	}
	func_2120();
	@PlayAnimation("all", "attack_begin1");
	bool var_185_bool;
	cvector var_186_cvector;
	cvector var_187_cvector;
	@GetGeometryLocator("attack", var_185_bool, var_186_cvector, var_187_cvector);
	if(var_185_bool != 0) {
		@GetScene(var_189_object);
		@AddActorByType(var_188_object, "light-dynamic", var_189_object, var_186_cvector, var_187_cvector, "soldier_fire.xml");
		var_189_object = null;
		var_188_object = null;
	} else {
				@WaitForAnimEnd();
	}
	@PlayGlobalSound("shot", [0.0, 150.0, 0.0], 800, 100000);
	@GetDirection(var_208_cvector);
	cvector var_243_cvector;
	func_1387(var_243_cvector, var_0_object);
	var_243_cvector = var_184_cvector;
	var_245_float = GetByIndex(var_184_cvector, 1);
	float var_246_float;
	func_1701(var_246_float, var_0_object);
	SetByIndex(var_184_cvector, 1) = (var_245_float + var_246_float);
	cvector var_190_cvector;
	@RandVecCone3D(var_190_cvector, var_184_cvector, 0.034906585);
	object var_191_object;
	int var_192_int;
	cvector var_193_cvector;
	@GetVictimMaterial(var_190_cvector, var_191_object, var_192_int, var_193_cvector);
	if(var_191_object != null) {
		if(var_191_object == var_0_object) {
			float var_255_float;
			func_1426(var_255_float, var_0_object, 1.5, 1);
			var_255_float = var_194_float;
			@ReportHit(var_0_object, 2, var_194_float, 1.5);
		} else if(var_192_int != -1) {
			@GetScene(var_195_object);
			@AddActorByType(var_196_object, "scripted", var_195_object, var_193_cvector, [0.0, 0.0, 1.0], "richochet.xml");
			var_196_object->SetScriptProperty("Material", var_192_int);
			var_196_object = null;
			var_195_object = null;

		}
	}
	@PlayAnimation("all", "attack_end1");
	@WaitForAnimEnd();
	@LockAnimationEnd("all", "attack_on");
	
}
EMIT "Stack[-6] = 0";


void func_2035(object var_19_object)
{
	object var_21_object;
	@CreateObjectSet(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2041(float var_210_float, cvector var_211_cvector, cvector var_212_cvector)
{
	var_213_float = GetByIndex(var_211_cvector, 0);
	var_214_float = GetByIndex(var_212_cvector, 0);
	var_216_float = GetByIndex(var_211_cvector, 2);
	var_217_float = GetByIndex(var_212_cvector, 2);
	var_210_float = (var_213_float * var_214_float) + (var_216_float * var_217_float);
}


