// @GLOBALS: 0:object:,1:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, bool var_10_bool, cvector var_11_cvector, cvector var_12_cvector)
	{
		if(1 != 0) {
			func_1786();
			if(var_12_cvector == 41529) {
				object var_17_object; object var_18_object;
				var_17_object = var_1_object;
				var_18_object = var_0_object;
				func_2097();
			}
			if(var_12_cvector == 16575) {
				object var_44_object; object var_45_object;
				var_44_object = var_1_object;
				var_45_object = var_0_object;
				func_2097();
			}
			if(var_12_cvector == 16583) {
				object var_48_object; object var_49_object;
				var_48_object = var_1_object;
				var_49_object = var_0_object;
				func_2102();
			}
			if(var_11_cvector == 16570) {
				bool var_58_bool;
				func_2109(var_1_object);
				if(var_58_bool != 0) {
					object var_66_object; object var_67_object;
					var_66_object = var_1_object;
					var_67_object = var_0_object;
					func_2085();
					object var_70_object; object var_71_object;
					var_70_object = var_1_object;
					var_71_object = var_0_object;
					func_2079();
					func_205(var_12_cvector, "Neutral");
					var_0_object->SetMessage(515453); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(515454, 16572, 16571); //@t
					var_0_object->AddReply(539571, 41513, 41512); //@t
					return 0;
				}
				bool var_93_bool;
				func_2121(var_1_object);
				if(var_93_bool != 0) {
					object var_99_object; object var_100_object;
					var_99_object = var_1_object;
					var_100_object = var_0_object;
					func_2091();
					func_205(var_12_cvector, "Neutral");
					var_0_object->SetMessage(515459); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(515460, 41515, 16577); //@t
					var_0_object->AddReply(539577, 41519, 41518); //@t
					return 0;
				}
				func_205(var_12_cvector, "Neutral");
				var_0_object->SetMessage(515465); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515466, -1, 16583); //@t
				return 0;
			}
			if(var_11_cvector == 41515) {
				func_205(var_12_cvector, "Neutral");
				var_0_object->SetMessage(539574); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539575, 41519, 41516); //@t
				var_0_object->AddReply(539576, 41519, 41517); //@t
				return 0;
			}
			if(var_11_cvector == 41519) {
				func_205(var_12_cvector, "Neutral");
				var_0_object->SetMessage(539578); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539579, -1, 41522); //@t
				var_0_object->AddReply(539580, -1, 41523); //@t
				return 0;
			}
			if(var_11_cvector == 41513) {
				func_205(var_12_cvector, "Neutral");
				var_0_object->SetMessage(539572); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539878, 41840, 41833); //@t
				var_0_object->AddReply(539573, 16572, 41514); //@t
				return 0;
			}
			if(var_11_cvector == 16572) {
				func_205(var_12_cvector, "Neutral");
				var_0_object->SetMessage(515455); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515456, 16574, 16573); //@t
				var_0_object->AddReply(539581, 16574, 41525); //@t
				return 0;
			}
			if(var_11_cvector == 16574) {
				func_205(var_12_cvector, "Neutral");
				var_0_object->SetMessage(515457); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539582, 41528, 41527); //@t
				var_0_object->AddReply(539880, 41836, 41835); //@t
				return 0;
			}
			if(var_11_cvector == 41836) {
				func_205(var_12_cvector, "Neutral");
				var_0_object->SetMessage(539881); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539882, 41528, 41837); //@t
				var_0_object->AddReply(539883, 41840, 41839); //@t
				return 0;
			}
			if(var_11_cvector == 41840) {
				func_205(var_12_cvector, "Neutral");
				var_0_object->SetMessage(539884); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539885, 41528, 41842); //@t
				return 0;
			}
			if(var_11_cvector == 41528) {
				func_205(var_12_cvector, "Neutral");
				var_0_object->SetMessage(539583); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539584, -1, 41529); //@t
				var_0_object->AddReply(515458, -1, 16575); //@t
				return 0;
			}
			var_3_string = true;
			bool var_193_bool;
			func_2750(var_193_bool);
			if(var_193_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xe4";
	
	}

}


task task_3
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector)
	{
		bool var_13_bool;
		@IsOverrideActive(var_13_bool);
		if(!var_13_bool) { //@nz
			object var_15_object;
			var_11_cvector = var_15_object;
			func_2210(var_15_object);
		}
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, float var_7_float, float var_8_float, object var_9_object, object var_10_object, object var_11_object, bool var_12_bool, cvector var_13_cvector, cvector var_14_cvector)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, string var_6_string, object var_7_object, object var_8_object, object var_9_object, bool var_10_bool, cvector var_11_cvector, cvector var_12_cvector)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector)
	{
	}

}


task task_4
{
	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector)
	{
		func_721();
		object var_13_object;
		var_11_cvector = var_13_object;
		func_2375();
	}

	// @pe
	void OnHear(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector)
	{
		if(var_11_cvector == actor) {
			@KillTimer(100);
			@Face(actor);
		}
	}

	// @pe
	void OnStopHear(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector)
	{
		if(var_11_cvector == actor) {
			@SetTimer(100, 3.0);
			func_1665(actor);
		}
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector, object var_100_object)
		{
		object var_102_object;
		var_100_object = var_102_object;
			bool var_101_bool;
		func_1515(var_101_bool, var_102_object);
		if(!var_101_bool) { //@nz
			object var_130_object;
			var_100_object = var_130_object;
			func_2547(var_130_object);
		}
		func_721();
		object var_146_object;
		var_100_object = var_146_object;
		func_2571(var_146_object);
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector)
	{
		object var_15_object;
		var_11_bool = var_15_object;
		object var_16_object;
		var_12_cvector = var_16_object;
		bool var_17_bool;
		var_13_cvector = var_17_bool;
		bool var_14_bool;
		func_2690(var_14_bool, var_15_object, var_16_object, var_17_bool);
		if(var_14_bool != 0) {
			object var_100_object;
			var_11_bool = var_100_object;
			func_759();
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector)
	{
		object var_13_object;
		var_11_cvector = var_13_object;
		bool var_12_bool;
		func_2662(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_721();
			object var_132_object;
			var_11_cvector = var_132_object;
			func_2684(var_132_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, object var_7_object, object var_8_object, bool var_9_bool, cvector var_10_cvector, cvector var_11_cvector)
	{
		if(var_11_cvector != 100) {
		}
		@KillTimer(100);
		@StopGroup0();
	}

}


task task_5
{
	// @pe
	void OnHear(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		bool var_12_bool = false;
		if(var_2_object != 0) {
			if(var_11_cvector == actor)
				var_12_bool = true;
		}
		if(var_12_bool != 0)
			func_1665(actor);
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		bool var_12_bool = false;
		if(var_2_object != 0) {
			if(var_11_cvector == actor)
				var_12_bool = true;
		}
		if(var_12_bool != 0) {
			@Trace("@Stop hunt");
			@StopAnimation();
			@StopGroup0();
		}
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector, object var_100_object)
		{
		object var_102_object;
		var_100_object = var_102_object;
			bool var_101_bool;
		func_1515(var_101_bool, var_102_object);
		if(!var_101_bool) //@nz
			return 0;
		object var_130_object;
		var_100_object = var_130_object;
		func_2547(var_130_object);
		if(var_100_object == actor) {
			var_1_object = null;
		} else {
			var_1_object = var_100_object;
			if(var_2_object == 0) goto Label_1141;
			@StopAnimation();
			@StopGroup0();
		}
	Label_1141:
	
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, cvector var_12_cvector, cvector var_13_cvector)
	{
		object var_15_object;
		var_11_bool = var_15_object;
		object var_16_object;
		var_12_cvector = var_16_object;
		bool var_17_bool;
		var_13_cvector = var_17_bool;
		bool var_14_bool;
		func_2690(var_14_bool, var_15_object, var_16_object, var_17_bool);
		if(var_14_bool != 0) {
			object var_100_object;
			var_11_bool = var_100_object;
			func_1118();
		}
	}

}


maintask task_6
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector)
	{
		func_2529();
	
		for(;;) {
			func_1258(var_9_cvector, var_10_cvector);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, object var_11_object)
	{
		var_14_object = GlobalVars[0];
		bool var_13_bool;
		var_14_object->in(var_13_bool, var_11_object);
		if(!var_13_bool) { //@nz
			object var_16_object;
			var_11_object = var_16_object;
			func_1155(var_16_object);
		}
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, string var_11_string)
	{
		object var_13_object;
		if(var_11_string == "attack") {
			object var_16_object;
			func_1377(var_16_object);
			var_16_object = var_13_object;
			func_1342();
			object var_20_object;
			var_13_object = var_20_object;
			func_2571(var_20_object);
			var_13_object = null;
		}
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, object var_11_object)
	{
		bool var_12_bool;
		func_2047(var_12_bool, "quest_d10_01", "soldier_fight");
	}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, object var_11_object, object var_12_object, bool var_13_bool)
	{
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector)
	{
		func_1342();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnHear(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, object var_11_object)
	{
		bool var_14_bool; object var_15_object;
		func_1515(var_14_bool, var_15_object);
		if(!var_14_bool) { //@nz
		}
		var_49_object = GlobalVars[0];
		bool var_13_bool;
		var_49_object->in(var_13_bool, var_15_object);
		if(var_13_bool != 0) {
			func_1342();
			object var_51_object;
			var_11_object = var_51_object;
			TaskCall(4);
			func_697(var_52_object, var_51_object);
			TaskReturn();
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_2662(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_1342();
			object var_131_object;
			var_11_object = var_131_object;
			func_2716(var_131_object);
		}
	}

}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, object var_11_object, int var_12_int, float var_13_float, float var_14_float)
{
	object var_15_object;
	var_11_object = var_15_object;
	int var_16_int;
	var_12_int = var_16_int;
	float var_17_float;
	var_13_float = var_17_float;
	func_1583(var_15_object, var_16_int, var_17_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, object var_11_object, int var_12_int, float var_13_float, float var_14_float, cvector var_15_cvector, cvector var_16_cvector)
{
	object var_17_object;
	var_11_object = var_17_object;
	int var_18_int;
	var_12_int = var_18_int;
	float var_19_float;
	var_13_float = var_19_float;
	cvector var_20_cvector;
	var_15_cvector = var_20_cvector;
	cvector var_21_cvector;
	var_16_cvector = var_21_cvector;
	func_1651(var_19_float, var_20_cvector, var_21_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, object var_11_object, string var_12_string)
{
	float var_14_float;
	if(var_12_string == "health") {
		@GetProperty("health", var_14_float);
		if(var_14_float <= 0)
			@SignalDeath(var_11_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector, object var_11_object)
{
	bool var_12_bool; object var_13_object;
	func_1384(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		object var_16_object;
		func_1947(var_16_object);
		@ReportReputationChange(var_13_object, var_16_object, 0.0, true);
	}
	object var_21_object;
	var_11_object = var_21_object;
	func_2736(var_21_object);
}


void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, cvector var_9_cvector, cvector var_10_cvector)
{
	object var_11_object;
	func_1947(var_11_object);
	@RemoveActor(var_11_object);
	@Hold();
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_11_bool;
	func_1683(var_11_bool);
	if(!var_11_bool) goto Label_0; //@nz
}


void func_1539(object var_28_object)
{
	string var_42_string;
	if(var_28_object == null)
		return 14;
	bool var_36_bool;
	@IsDead(var_36_bool);
	if(var_36_bool != 0)
		return 14;
	int var_37_int;
	@GetSecondaryAnimationType(var_37_int);
	if(var_37_int < 0)
		return 14;
	cvector var_38_cvector;
	var_28_object->GetPosition(var_38_cvector);
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	cvector var_40_cvector;
	@GetDirection(var_40_cvector);
	cvector var_41_cvector = var_39_cvector - var_38_cvector;
	var_47_float = GetByIndex(var_41_cvector, 0);
	var_48_float = GetByIndex(var_40_cvector, 0);
	var_50_float = GetByIndex(var_41_cvector, 2);
	var_51_float = GetByIndex(var_40_cvector, 2);
	if(((var_47_float * var_48_float) + (var_50_float * var_51_float)) >= 0)
		var_42_string = "fhit";
	else
		var_42_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_42_string + "1"), (var_42_string + "2"), -10);
	
}


// @pe
void func_2571(object var_20_object)
{
	object var_21_object;
	var_20_object = var_21_object;
	func_2547(var_21_object);
	object var_36_object;
	var_20_object = var_36_object;
	func_2536(var_36_object, true);
}


void func_2059(object var_147_object)
{
	bool var_149_bool;
	@IsPlayerActor(var_147_object, var_149_bool);
	if(var_149_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_13(object var_0_object, int var_17_int, object var_18_object)
{
	var_0_object = var_18_object;
	bool var_28_bool; object var_29_object;
	var_18_object = var_29_object;
	func_1688(var_28_bool, var_29_object, 70.0);
	if(!var_28_bool) { //@nz
		var_17_int = -2;
		return 8;
	}
	object var_24_object;
	@CreateDialog(var_24_object);
	int var_75_int;
	func_2744(var_75_int);
	var_24_object->SetNPCName(var_75_int);
	int var_76_int;
	func_2742(var_76_int);
	var_24_object->SetNPCDescription(var_76_int);
	string var_77_string;
	func_2746(var_77_string);
	var_24_object->SetPhoto(var_77_string);
	string var_78_string;
	func_2748(var_78_string);
	var_24_object->SetPhoto2(var_78_string);
	int var_79_int;
	func_2187(var_79_int);
	var_24_object->SetPlayerName(var_79_int);
	bool var_25_bool;
	@IsOverrideActive(var_25_bool);
	if(var_25_bool != 0) {
		var_17_int = -2;
		return 8;
	}
	@DoDialog(var_24_object);
	object var_88_object; object var_89_object;
	var_18_object = var_88_object;
	var_24_object = var_89_object;
	TaskCall(2);
	func_87(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object);
	TaskReturn();
	bool var_27_bool;
	var_24_object->IsDialogEnd(var_27_bool);
	
	for(;;) {
		var_166_bool = !var_27_bool; //@nz
		if(var_166_bool == 0) goto Label_76;
		@sync();
		var_24_object->IsDialogEnd(var_27_bool);
	}
	
Label_76:
	object var_167_object;
	var_18_object = var_167_object;
	func_1756();
	@StopDialog(var_24_object);
	var_24_object->GetReturnValue(-1);
	int var_26_int = var_17_int;
}
EMIT "Stack[-4] = 0";


void func_2068(void)
{
	object var_153_object;
	@GetScene(var_153_object);
	object var_155_object;
	func_1947(var_155_object);
	@BroadcastMessage("battle", var_155_object, var_153_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_532(object var_23_object)
{
	object var_25_object;
	var_23_object = var_25_object;
	bool var_24_bool;
	func_1384(var_24_bool, var_25_object);
	if(var_24_bool != 0)
		func_2295();
	func_2271();
	object var_102_object;
	var_23_object = var_102_object;
	func_549(var_102_object);
}


void func_2582(bool var_53_bool, object var_54_object)
{
	float var_58_float; float var_60_float;
	object var_62_object;
	var_54_object = var_62_object;
	bool var_61_bool;
	func_1515(var_61_bool, var_62_object);
	if(!var_61_bool) { //@nz
		var_53_bool = false;
		return 6;
	}
	bool var_64_bool; object var_65_object;
	func_1384(var_64_bool, var_65_object);
	if(var_64_bool != 0) {
		var_65_object->GetProperty("reputation", var_58_float);
		var_53_bool = var_58_float < 0.33;
		return 6;
	}
	bool var_70_bool; object var_71_object;
	func_1389(var_70_bool, var_71_object, "class");
	if(!var_70_bool) { //@nz
		var_53_bool = false;
		return 6;
	}
	string var_59_string;
	var_71_object->GetProperty("class", var_59_string);
	bool var_75_bool = true;
	bool var_76_bool = true;
	var_78_bool = var_59_string == "bomber";
	if(var_78_bool != 1) {
		var_80_bool = var_59_string == "hunter";
		if(var_80_bool != 1)
			var_76_bool = false;
	}
	if(var_76_bool != 1) {
		var_82_bool = var_59_string == "grabitel";
		if(var_82_bool != 1)
			var_75_bool = false;
	}
	if(var_75_bool != 0) {
		var_53_bool = true;
		return 6;
	}
	bool var_83_bool; object var_84_object;
	func_1389(var_83_bool, var_84_object, "disease");
	if(!var_83_bool) { //@nz
		var_53_bool = false;
		return 6;
	}
	bool var_87_bool = true;
	bool var_88_bool; string var_89_string;
	func_1860(var_88_bool, var_89_string);
	if(var_88_bool != 1) {
		var_128_bool = var_89_string == "dog";
		if(var_128_bool != 1)
			var_87_bool = false;
	}
	if(var_87_bool != 0) {
		var_84_object->GetProperty("disease", var_60_float);
		var_53_bool = var_60_float > 0;
		return 6;
	}
	var_53_bool = false;
}


// @pe
void func_2079(void)
{
	@SetVariable("d10q01SoldierTalk", 1);
}


// @pe
void func_2085(void)
{
	@SetVariable("ood10MSoldier1", 1);
}


// @pe
void func_549(object var_102_object)
{
	object var_103_object;
	var_102_object = var_103_object;
	func_574(var_103_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_2091(void)
{
	@SetVariable("ood10MSoldier2", 1);
}


void func_1583(object var_15_object, int var_16_int, float var_17_float)
{
	cvector var_27_cvector; object var_28_object; int var_29_int; bool var_30_bool; cvector var_31_cvector; cvector var_32_cvector;
	bool var_36_bool = false;
	bool var_37_bool = false;
	if(var_15_object != 0) {
		if(var_16_int != 4)
			var_37_bool = true;
	}
	if(var_37_bool != 0) {
		if(var_16_int != 5)
			var_36_bool = true;
	}
	if(var_36_bool != 0) {
		cvector var_43_cvector; cvector var_44_cvector;
		cvector var_45_cvector; object var_46_object;
		var_15_object = var_46_object;
		func_1362(var_45_cvector, var_46_object);
		var_45_cvector = var_44_cvector;
		func_1953(var_43_cvector, var_44_cvector);
		var_43_cvector = var_27_cvector;
		@CreateVectorVector(var_28_object);
		var_29_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_29_int), var_30_bool, var_31_cvector, var_32_cvector);
			if(!var_30_bool) { //@nz
				break;
			Label_1645:
				var_28_object = null;
	}
			object var_105_object;
			var_15_object = var_105_object;
			func_1539(var_105_object);
		}
		if((var_32_cvector | var_27_cvector) >= 0.70710677)
			var_28_object->add(var_31_cvector);
		var_29_int += 1;
	}
	int var_33_int;
	var_28_object->size(var_33_int);
	if(var_33_int == 0) goto Label_1645;
	int var_34_int;
	@irand(var_34_int, var_33_int);
	cvector var_35_cvector;
	var_28_object->get(var_35_cvector, var_34_int);
	object var_60_object; int var_61_int; float var_62_float; cvector var_63_cvector; cvector var_64_cvector;
	var_15_object = var_60_object;
	var_16_int = var_61_int;
	var_17_float = var_62_float;
	var_35_cvector = var_63_cvector;
	var_64_cvector = -var_27_cvector;
	func_1651(var_62_float, var_63_cvector, var_64_cvector);
}


// @pe
void func_2097(void)
{
	func_2133();
}


// @pe
void func_2102(void)
{
	bool var_50_bool;
	func_2047(var_50_bool, "quest_d10_01", "soldier_fight");
}


// @pe
void func_2109(bool var_95_bool)
{
	int var_97_int;
	func_2032(var_97_int, "ood10MSoldier1");
	if(var_97_int == 0) {
		var_95_bool = true;
		return 0;
	}
	var_95_bool = false;
}


void func_574(object var_103_object)
{
	cvector var_114_cvector; cvector var_115_cvector; cvector var_116_cvector; cvector var_117_cvector; string var_118_string; object var_119_object; bool var_120_bool; bool var_121_bool; float var_122_float; cvector var_123_cvector;
	if(var_103_object == null) {
		func_665("fdie");
	} else {
		var_103_object->GetPosition(var_114_cvector);
		@GetPosition(var_115_cvector);
		@GetDirection(var_116_cvector);
		var_117_cvector = var_115_cvector - var_114_cvector;
		var_157_float = GetByIndex(var_117_cvector, 0);
		var_158_float = GetByIndex(var_116_cvector, 0);
		var_160_float = GetByIndex(var_117_cvector, 2);
		var_161_float = GetByIndex(var_116_cvector, 2);
		if(((var_157_float * var_158_float) + (var_160_float * var_161_float)) >= 0)
			var_118_string = "fdie";
		else
			var_118_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_103_object = var_119_object;
		var_168_bool = IsFuncExist(var_103_object, "GetScriptProperty", 2);
		if(var_168_bool != 0) {
			var_103_object->HasScriptProperty(var_120_bool, "Owner");
			if(var_120_bool != 0) {
				var_103_object->GetScriptProperty(var_119_object, "Owner");
				if(var_119_object == null)
					var_103_object = var_119_object;
			}
		}
		var_175_bool = IsFuncExist(var_119_object, "@GetEyesHeight", 1);
		if(var_175_bool != 0) {
			var_119_object->GetEyesHeight(var_122_float);
			var_123_cvector = [0.0, 0.0, 0.0];
			var_176_float = GetByIndex(var_123_cvector, 1);
			var_122_float = var_176_float;
			SetByIndex(var_123_cvector, 1) = var_176_float;
			@LookAsync(var_103_object, "head", var_123_cvector);
			var_121_bool = true;
		} else {
			var_121_bool = false;

		}
		string var_178_string;
		var_118_string = var_178_string;
		func_1819(var_178_string);
		@PlayAnimation("all", var_118_string);
		@WaitForAnimEnd();
		if(var_121_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_118_string);
		@RemoveEnvelope();
		var_119_object = null;
	}
	
}


// @pe
void func_2121(bool var_143_bool)
{
	int var_145_int;
	func_2032(var_145_int, "ood10MSoldier2");
	if(var_145_int == 0) {
		var_143_bool = true;
		return 0;
	}
	var_143_bool = false;
}


void func_2133(void)
{
	object var_20_object;
	@CreateDiaryEntry(var_20_object, 188, 1, 515473);
	bool var_24_bool; object var_25_object;
	var_20_object = var_25_object;
	func_2159(var_24_bool, var_25_object, 186);
}
EMIT "Stack[-1] = 0";


// @pe
void func_87(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_88_object, object var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_95_bool;
		func_2109(var_1_object);
		if(var_95_bool != 0) {
			object var_103_object; object var_104_object;
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_2085();
			object var_107_object; object var_108_object;
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_2079();
			func_205(var_89_object, "Neutral");
			var_0_object->SetMessage(515453); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(515454, 16572, 16571); //@t
			var_0_object->AddReply(539571, 41513, 41512); //@t
		} else {
					bool var_143_bool;
					func_2121(var_1_object);
					if(var_143_bool == 0) goto Label_158;
					object var_149_object; object var_150_object;
					var_149_object = var_1_object;
					var_150_object = var_0_object;
					func_2091();
					func_205(var_89_object, "Neutral");
					var_0_object->SetMessage(515459); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(515460, 41515, 16577); //@t
					var_0_object->AddReply(539577, 41519, 41518); //@t
		}
	}
Label_175:
	for(;;) {
		bool var_130_bool;
		func_2750(var_130_bool);
		if(var_130_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1773(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_204;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_204:
			return 0;

		}

	}
	
Label_158:
	func_205(var_89_object, "Neutral");
	var_0_object->SetMessage(515465); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(515466, -1, 16583); //@t
	goto Label_175;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x5b";


void func_2146(object var_33_object)
{
	object var_35_object;
	@GetDiaryRoot(var_35_object);
	if(!var_35_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_33_object = false;
	}
	var_35_object = var_33_object;
}
EMIT "Stack[-1] = 0";


void func_2662(bool var_12_bool, object var_13_object)
{
	bool var_16_bool; object var_17_object;
	func_1515(var_16_bool, var_17_object);
	if(!var_16_bool) { //@nz
		var_12_bool = false;
		return 2;
	}
	var_51_object = GlobalVars[0];
	bool var_15_bool;
	var_51_object->in(var_15_bool, var_17_object);
	if(var_15_bool != 0) {
		var_12_bool = true;
		return 2;
	}
	bool var_53_bool; object var_54_object;
	var_13_object = var_54_object;
	func_2582(var_53_bool, var_54_object);
	var_53_bool = var_12_bool;
}


void func_2159(bool var_24_bool, object var_25_object, int var_26_int)
{
	object var_33_object;
	func_2146(var_33_object);
	object var_30_object;
	var_33_object = var_30_object;
	object var_31_object;
	var_30_object->Find(var_26_int, var_31_object);
	if(!var_31_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_26_int);
		var_24_bool = false;
	}
	var_31_object->AddChild(var_25_object);
	@SendWorldWndMessage(7);
	int var_32_int;
	var_25_object->GetCategory(var_32_int);
	@SetDiarySection(var_32_int);
	var_24_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1651(object var_17_object, cvector var_20_cvector, cvector var_21_cvector)
{
	object var_24_object;
	@GetScene(var_24_object);
	object var_25_object;
	@AddActorByType(var_25_object, "scripted", var_24_object, var_20_cvector, var_21_cvector, "blood_dir.xml");
	object var_28_object;
	var_17_object = var_28_object;
	func_1539(var_28_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_2684(object var_132_object)
{
	object var_133_object;
	var_132_object = var_133_object;
	func_2716(var_133_object);
}


void func_1665(object var_323_object)
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


void func_2690(bool var_14_bool, object var_15_object, object var_16_object, bool var_17_bool)
{
	bool var_19_bool;
	object var_21_object;
	var_16_object = var_21_object;
	bool var_20_bool;
	func_2393(var_20_bool, var_21_object, !var_17_bool);
	if(var_20_bool != 0) {
		@CanSee(var_19_bool, var_15_object);
		bool var_88_bool = true;
		if(var_19_bool != 1) {
			float var_90_float; object var_91_object;
			var_15_object = var_91_object;
			func_1369(var_90_float, var_91_object);
			var_99_bool = var_90_float <= 490000.0;
			if(var_99_bool != 1)
				var_88_bool = false;
		}
		if(var_88_bool != 0)
			var_14_bool = true;
	}
	var_14_bool = false;
}


// @pe
void func_1155(object var_16_object)
{
	func_1342();
	int var_17_int; object var_18_object;
	var_16_object = var_18_object;
	TaskCall(1);
	func_13(var_19_object, var_17_int, var_18_object);
	TaskReturn();
}


void func_2187(int var_79_int)
{
	int var_81_int;
	@GetVariable("branch", var_81_int);
	if(var_81_int == 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x89a";
	}
	if(var_81_int == 1) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
}


void func_1676(float var_242_float, object var_243_object)
{
	float var_246_float;
	@GetEyesHeight(var_246_float);
	float var_247_float;
	var_243_object->GetEyesHeight(var_247_float);
	var_242_float = var_247_float - var_246_float;
}


void func_1683(bool var_11_bool)
{
	bool var_13_bool;
	@IsLoaded(var_13_bool);
	var_13_bool = var_11_bool;
}


void func_1688(bool var_28_bool, object var_29_object, float var_30_float)
{
	cvector var_41_cvector; bool var_48_bool;
	var_29_object->GetPosition(var_41_cvector);
	float var_40_float;
	var_29_object->GetEyesHeight(var_40_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	SetByIndex(var_41_cvector, 1) = (var_49_float + var_40_float);
	cvector var_42_cvector;
	@GetPosition(var_42_cvector);
	@GetEyesHeight(var_40_float);
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (var_50_float + var_40_float);
	cvector var_43_cvector = var_41_cvector - var_42_cvector;
	var_51_float = GetByIndex(var_43_cvector, 1);
	SetByIndex(var_43_cvector, 1) = (float)0;
	var_53_float = sqrt(var_43_cvector | var_43_cvector);
	var_43_cvector /= var_53_float;
	cvector var_44_cvector = -var_43_cvector;
	cvector var_55_cvector;
	func_1953(var_55_cvector, (var_44_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_45_cvector = ((var_43_cvector * var_30_float) + (var_55_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_47_bool;
	@IsOverrideActive(var_47_bool);
	if(var_47_bool != 0)
		var_28_bool = false;
	@StopWorld();
	@CameraTransit((var_42_cvector + var_45_cvector), var_44_cvector);
	var_68_float = GetByIndex(var_45_cvector, 0);
	var_69_float = GetByIndex(var_45_cvector, 2);
	@Rotate(var_68_float, var_69_float);
	bool var_70_bool;
	func_2750(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		@HasAnimationTrack(var_48_bool, "head");
		if(var_48_bool == 0) goto Label_1750;
		@LookAsyncCamera("head");
	}
Label_1750:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_28_bool = true;
	
}


// @pe
void func_665(string var_125_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_126_string;
	var_125_string = var_126_string;
	func_1819(var_126_string);
	@PlayAnimation("all", var_125_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_125_string);
	@RemoveEnvelope();
}


void func_2716(object var_131_object)
{
	var_134_object = GlobalVars[0];
	bool var_133_bool;
	var_134_object->in(var_133_bool, var_131_object);
	if(var_133_bool != 0) {
		object var_136_object;
		var_131_object = var_136_object;
		func_2536(var_136_object, true);
	}
}


void func_2204(int var_82_int)
{
	int var_84_int;
	@GetVariable("branch", var_84_int);
	var_84_int = var_82_int;
}


// @pe
void func_2210(object var_15_object)
{
	int var_16_int;
	func_2204(var_16_int);
	if(var_16_int == 1)
		@WorkWithCorpse(var_15_object);
	else
		@Barter(var_15_object);
	
}


void func_2223(int var_31_int, int var_32_int)
{
	if(var_31_int > var_32_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_35_int = 0;
	if(var_31_int != var_32_int) {
		@irand(var_35_int, (var_32_int - var_31_int));
	} else if(var_31_int == 0) {
		return 4;
	}
	var_35_int += var_31_int;
	if(var_35_int == 0)
		return 4;
	int var_43_int;
	func_2331(var_43_int, "Money");
	bool var_36_bool;
	@AddItem(var_36_bool, var_43_int, 0, var_35_int);
	
}


// @pe
void func_2736(object var_21_object)
{
	object var_22_object;
	var_21_object = var_22_object;
	func_2336(var_22_object);
}


void func_2742(int var_76_int)
{
	var_76_int = 515597;
}


void func_2744(int var_75_int)
{
	var_75_int = 514841;
}


void func_697(object var_0_object, object var_51_object)
{
	bool var_54_bool;
	@Face(var_51_object);
	
	for(;;) {
		@Sleep(0.5, var_54_bool);
		bool var_56_bool = true;
		var_57_bool = !var_54_bool; //@nz
		if(var_57_bool != 1) {
			bool var_58_bool;
			func_1515(var_58_bool, var_51_object);
			var_60_bool = !var_58_bool; //@nz
			if(var_60_bool != 1)
				var_56_bool = false;
		}
		if(var_56_bool != 0)
			break;
	}
	@StopAsync();
}


void func_2746(string var_77_string)
{
	var_77_string = "ui/NPC_Citizen2.png";
}


void func_2748(string var_78_string)
{
	var_78_string = "ui/NPC_Citizen2_b.png";
}


void func_2750(bool var_70_bool)
{
	var_70_bool = false;
}


// @pe
void func_205(object var_2_object, string var_111_string)
{
	bool var_112_bool;
	func_2750(var_112_bool);
	if(!var_112_bool) //@nz
		return 0;
	if(var_111_string == var_2_object)
		return 0;
	string var_115_string; bool var_116_bool;
	var_111_string = var_115_string;
	if(var_111_string == "")
		var_116_bool = false;
	else
		var_116_bool = true;
	func_1780(var_115_string, var_116_bool);
	var_2_object = var_111_string;
	
}


void func_2254(string var_88_string)
{
	object var_92_object;
	@CreateInvItem(var_92_object);
	var_92_object->SetItemName(var_88_string);
	var_92_object->SetProperty("Organ", 1);
	int var_93_int;
	var_92_object->GetItemID(var_93_int);
	bool var_94_bool;
	@AddItem(var_94_bool, var_92_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_721(void)
{
	@StopAsync();
	@KillTimer(100);
	@StopGroup0();
}


void func_1243(void)
{
}


void func_1756(void)
{
	bool var_169_bool;
	@CameraSwitchToNormal();
	bool var_170_bool;
	func_2750(var_170_bool);
	if(var_170_bool != 0) {
	} else {
		@HasAnimationTrack(var_169_bool, "head");
		if(var_169_bool == 0) goto Label_1772;
		@UnlookAsync("head");
	}
Label_1772:
	
}


void func_2271(void)
{
	int var_82_int;
	func_2204(var_82_int);
	if(var_82_int != 1) {
	}
	func_2254("liver");
	func_2254("kidney");
	func_2254("heart");
	func_2254("blood");
}


void func_1258(object var_0_object, object var_1_object)
{
	int var_19_int; bool var_20_bool; cvector var_21_cvector; object var_22_object;
	@GetPFPosition(var_1_object);
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1347();
		@irand(var_19_int, 10);
		@Sleep((var_19_int + 5), var_20_bool);
		if(var_20_bool != 0) {
			func_1243();
		} else {
		for(;;) {
			func_1347();
			@GetPFPosition(var_21_cvector);
			float var_27_float; cvector var_29_cvector;
			var_21_cvector = var_29_cvector;
			func_1963(var_27_float, var_1_object, var_29_cvector);
			if(var_27_float > 40000) {
				@FindPathTo(var_22_object, var_1_object);
				if(var_22_object != null) {
					@RotatePath(var_22_object, var_20_bool);
					if(!var_20_bool) { //@nz
					} else {
					@FollowPath(var_22_object, false, var_20_bool);
					if(!var_20_bool) { //@nz
						goto Label_1339;
					}
					var_38_float = GetByIndex(var_0_object, 0);
					var_39_float = GetByIndex(var_0_object, 2);
					@Rotate(var_38_float, var_39_float, var_20_bool);
					if(!var_20_bool) { //@nz
						goto Label_1339;
					}
					@WaitForAnimEnd(var_20_bool);
					if(!var_20_bool) { //@nz
						goto Label_1339;
					}
					goto Label_1340;
				EMIT "GOTO 0x52c";
				}
				@Sleep(1);
				var_22_object = null;
				goto Label_1339;
			}
			var_43_float = GetByIndex(var_0_object, 0);
			var_44_float = GetByIndex(var_0_object, 2);
			@Rotate(var_43_float, var_44_float, var_20_bool);
			if(!var_20_bool) { //@nz
				goto Label_1339;
			}
			@WaitForAnimEnd(var_20_bool);
			if(!var_20_bool) { //@nz
				goto Label_1339;
			}
			goto Label_1340;
			}
		Label_1339:
		}
		}
	Label_1340:
	}
	
}
EMIT "Return(); Pop(8)";


void func_1773(string var_132_string)
{
	float var_135_float; float var_136_float;
	@lshGetAnimTimes(var_132_string, var_135_float, var_136_float);
	@lshPlayAnimation(var_135_float, var_136_float, false);
}


void func_1780(string var_115_string, bool var_116_bool)
{
	float var_121_float; float var_122_float;
	@lshGetAnimTimes(var_115_string, var_121_float, var_122_float);
	@lshPlayAnimation(var_121_float, var_122_float, var_116_bool);
}


void func_2295(void)
{
	@ClearSubContainer(0);
	func_2223(500, 1000);
	func_1804("rifle_ammo", 1, 3, 3);
	func_1804("rusk", 1, 3, 2);
	func_1793("bandage", 1, 6);
	func_1793("tourniquet", 1, 6);
}


void func_1786(void)
{
	bool var_14_bool;
	func_2750(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


void func_1793(string var_70_string, int var_71_int, int var_72_int)
{
	bool var_74_bool;
	int var_76_int;
	var_71_int = var_76_int;
	int var_77_int;
	var_72_int = var_77_int;
	bool var_75_bool;
	func_1985(var_75_bool, var_76_int, var_77_int);
	if(var_75_bool != 0)
		@AddItem(var_74_bool, var_70_string, 0);
}


void func_1804(string var_50_string, int var_51_int, int var_52_int, int var_53_int)
{
	int var_56_int; bool var_57_bool;
	int var_59_int;
	var_51_int = var_59_int;
	int var_60_int;
	var_52_int = var_60_int;
	bool var_58_bool;
	func_1985(var_58_bool, var_59_int, var_60_int);
	if(var_58_bool != 0) {
		@irand(var_56_int, var_53_int);
		@AddItem(var_57_bool, var_50_string, 0, (var_56_int + 1));
	}
}


void func_1819(string var_126_string)
{
	bool var_135_bool; int var_136_int; bool var_137_bool; int var_138_int; bool var_139_bool; float var_140_float; cvector var_141_cvector; cvector var_142_cvector;
	@IsExisting3DSound(var_135_bool, var_126_string);
	if(!var_135_bool) { //@nz
		var_136_int = 0;

		for(;;) {
			@IsExisting3DSound(var_137_bool, (var_126_string + (var_136_int + 1)));
			if(!var_137_bool) { //@nz
				break;
			Label_1839:
				@irand(var_138_int, var_136_int);
				var_126_string += (var_138_int + 1);
	}
			@Is3DSoundLoaded(var_139_bool, var_126_string);
			if(var_139_bool != 0) {
				@GetEyesHeight(var_140_float);
				@GetDirection(var_141_cvector);
				var_142_cvector = var_141_cvector * 50;
				var_153_float = GetByIndex(var_142_cvector, 1);
				SetByIndex(var_142_cvector, 1) = (var_153_float + var_140_float);
				@PlayGlobalSound(var_126_string, var_142_cvector);
			}
		}
		var_136_int += 1;
	}
	var_148_bool = !var_136_int; //@nz
	if(var_148_bool == 0) goto Label_1839;
}


void func_2331(int var_43_int, string var_44_string)
{
	int var_46_int;
	@GetInvItemByName(var_46_int, var_44_string);
	var_46_int = var_43_int;
}


// @pe
void func_2336(object var_22_object)
{
	object var_23_object;
	var_22_object = var_23_object;
	TaskCall(3);
	func_532(var_23_object);
	TaskReturn();
}


void func_817(object var_0_object, object var_1_object, object var_2_object, object var_138_object, bool var_139_bool)
{
	bool var_145_bool; bool var_146_bool;
	var_0_object = var_138_object;
	func_2059(var_0_object);
	func_2068();
	@Face(var_0_object);
	if(var_139_bool != 0) {
		@PlayAnimation("all", "attack_on");
		@WaitForAnimEnd();
	}
	@LockAnimationEnd("all", "attack_on");
	@SetAttackState(true);
	
Label_843:
	for(;;) {
		bool var_164_bool;
		func_1515(var_164_bool, var_0_object);
		if(var_164_bool != 0) {
			@CanSee(var_146_bool, var_0_object);
			if(var_146_bool != 0) {
				func_2059(var_0_object);
				func_997(var_146_bool);
			} else {
				func_1665(var_0_object);
				var_2_object = true;
				@PlayAnimation("all", "hunt");
				@WaitForAnimEnd(var_145_bool);
				if(!var_145_bool) { //@nz
					if(var_1_object != null)
						func_992(var_145_bool, var_146_bool);
					@LockAnimationEnd("all", "attack_on");
					goto Label_843;
				}
				bool var_338_bool;
				func_1515(var_338_bool, var_0_object);
				if(!var_338_bool) { //@nz
				} else {
						@CanSee(var_146_bool, var_0_object);
						if(var_146_bool != 0) {
							var_2_object = false;
							@Face(var_0_object);
							func_997(var_146_bool);
							goto Label_939;
						}
						@LockAnimationEnd("all", "attack_on");
						@Sleep(3, var_145_bool);
						if(!var_145_bool) { //@nz
							if(var_1_object != null)
								func_992(var_145_bool, var_146_bool);
							@LockAnimationEnd("all", "attack_on");
							goto Label_843;
						}
						bool var_352_bool;
						func_1515(var_352_bool, var_0_object);
						var_354_bool = !var_352_bool; //@nz
						if(var_354_bool == 0) goto Label_927;
				}
		}
		Label_949:
			for(;;) {
				@SetAttackState(false);
				@StopAsync();
				@PlayAnimation("all", "attack_off");
				@WaitForAnimEnd();

			}

		Label_927:
			var_2_object = false;
			@CanSee(var_146_bool, var_0_object);
			if(var_146_bool != 0) {
				@Face(var_0_object);
				func_997(var_146_bool);
				goto Label_939;
			}
			goto Label_949;
		}
	Label_939:
		if(var_1_object != null)
			func_992(var_145_bool, var_146_bool);
		else
			@Sleep(2);

	}
	
}


void func_1342(void)
{
	@StopGroup0();
	@Stop();
}


void func_1347(void)
{
}


// @pe
void func_1348(string var_276_string, int var_277_int)
{
	if(var_277_int == 2) {
		var_276_string = "fire";
		return 0;
	EMIT "GOTO 0x550";
	}
	if(var_277_int == 1) {
		var_276_string = "bullet";
		return 0;
	}
	var_276_string = "phys";
}


// @pe
void func_1860(bool var_88_bool, string var_89_string)
{
	var_88_bool = true;
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
	bool var_100_bool = true;
	var_102_bool = var_89_string == "woman";
	if(var_102_bool != 1) {
		var_104_bool = var_89_string == "worker";
		if(var_104_bool != 1)
			var_100_bool = false;
	}
	if(var_100_bool != 1) {
		var_106_bool = var_89_string == "butcher";
		if(var_106_bool != 1)
			var_99_bool = false;
	}
	if(var_99_bool != 1) {
		var_108_bool = var_89_string == "wasted_girl";
		if(var_108_bool != 1)
			var_98_bool = false;
	}
	if(var_98_bool != 1) {
		var_110_bool = var_89_string == "boy";
		if(var_110_bool != 1)
			var_97_bool = false;
	}
	if(var_97_bool != 1) {
		var_112_bool = var_89_string == "vaxxabitka";
		if(var_112_bool != 1)
			var_96_bool = false;
	}
	if(var_96_bool != 1) {
		var_114_bool = var_89_string == "unosha";
		if(var_114_bool != 1)
			var_95_bool = false;
	}
	if(var_95_bool != 1) {
		var_116_bool = var_89_string == "wasted_male";
		if(var_116_bool != 1)
			var_94_bool = false;
	}
	if(var_94_bool != 1) {
		var_118_bool = var_89_string == "alkash";
		if(var_118_bool != 1)
			var_93_bool = false;
	}
	if(var_93_bool != 1) {
		var_120_bool = var_89_string == "dohodyaga";
		if(var_120_bool != 1)
			var_92_bool = false;
	}
	if(var_92_bool != 1) {
		var_122_bool = var_89_string == "vaxxabit";
		if(var_122_bool != 1)
			var_91_bool = false;
	}
	if(var_91_bool != 1) {
		var_124_bool = var_89_string == "nudegirl";
		if(var_124_bool != 1)
			var_90_bool = false;
	}
	if(var_90_bool != 1) {
		var_126_bool = var_89_string == "morlok";
		if(var_126_bool != 1)
			var_88_bool = false;
	}
}


void func_1362(cvector var_45_cvector, object var_46_object)
{
	cvector var_49_cvector;
	@GetPosition(var_49_cvector);
	cvector var_50_cvector;
	var_46_object->GetPosition(var_50_cvector);
	var_45_cvector = var_50_cvector - var_49_cvector;
}


void func_2393(bool var_20_bool, object var_21_object, bool var_22_bool)
{
	bool var_25_bool; object var_26_object;
	func_1389(var_25_bool, var_26_object, "class");
	if(!var_25_bool) { //@nz
		var_20_bool = false;
		return 2;
	}
	string var_24_string;
	var_26_object->GetProperty("class", var_24_string);
	bool var_36_bool = true;
	bool var_37_bool = true;
	bool var_38_bool = true;
	bool var_39_bool = true;
	bool var_40_bool = true;
	bool var_41_bool = true;
	bool var_42_bool = true;
	bool var_43_bool = true;
	bool var_44_bool = true;
	bool var_45_bool = true;
	var_47_bool = var_24_string == "patrol";
	if(var_47_bool != 1) {
		var_49_bool = var_24_string == "sanitar";
		if(var_49_bool != 1)
			var_45_bool = false;
	}
	if(var_45_bool != 1) {
		var_51_bool = var_24_string == "soldier";
		if(var_51_bool != 1)
			var_44_bool = false;
	}
	if(var_44_bool != 1) {
		var_53_bool = var_24_string == "woman";
		if(var_53_bool != 1)
			var_43_bool = false;
	}
	if(var_43_bool != 1) {
		var_55_bool = var_24_string == "wasted_girl";
		if(var_55_bool != 1)
			var_42_bool = false;
	}
	if(var_42_bool != 1) {
		var_57_bool = var_24_string == "vaxxabitka";
		if(var_57_bool != 1)
			var_41_bool = false;
	}
	if(var_41_bool != 1) {
		var_59_bool = var_24_string == "vaxxabit";
		if(var_59_bool != 1)
			var_40_bool = false;
	}
	if(var_40_bool != 1) {
		var_61_bool = var_24_string == "little_girl";
		if(var_61_bool != 1)
			var_39_bool = false;
	}
	if(var_39_bool != 1) {
		var_63_bool = var_24_string == "girl";
		if(var_63_bool != 1)
			var_38_bool = false;
	}
	if(var_38_bool != 1) {
		var_65_bool = var_24_string == "dohodyaga";
		if(var_65_bool != 1)
			var_37_bool = false;
	}
	if(var_37_bool != 1) {
		var_67_bool = var_24_string == "nudegirl";
		if(var_67_bool != 1)
			var_36_bool = false;
	}
	if(var_36_bool != 0) {
		var_20_bool = true;
		return 2;
	}
	if(var_22_bool != 0) {
		var_20_bool = false;
		return 2;
	}
	var_20_bool = true;
	bool var_69_bool = true;
	bool var_70_bool = true;
	bool var_71_bool = true;
	bool var_72_bool = true;
	bool var_73_bool = true;
	var_75_bool = var_24_string == "worker";
	if(var_75_bool != 1) {
		var_77_bool = var_24_string == "butcher";
		if(var_77_bool != 1)
			var_73_bool = false;
	}
	if(var_73_bool != 1) {
		var_79_bool = var_24_string == "boy";
		if(var_79_bool != 1)
			var_72_bool = false;
	}
	if(var_72_bool != 1) {
		var_81_bool = var_24_string == "unosha";
		if(var_81_bool != 1)
			var_71_bool = false;
	}
	if(var_71_bool != 1) {
		var_83_bool = var_24_string == "wasted_male";
		if(var_83_bool != 1)
			var_70_bool = false;
	}
	if(var_70_bool != 1) {
		var_85_bool = var_24_string == "alkash";
		if(var_85_bool != 1)
			var_69_bool = false;
	}
	if(var_69_bool != 1) {
		var_87_bool = var_24_string == "morlok";
		if(var_87_bool != 1)
			var_20_bool = false;
	}
}


void func_1369(float var_90_float, object var_91_object)
{
	cvector var_95_cvector;
	@GetPosition(var_95_cvector);
	cvector var_96_cvector;
	var_91_object->GetPosition(var_96_cvector);
	var_90_float = (var_96_cvector - var_95_cvector) | (var_96_cvector - var_95_cvector);
}


void func_1377(object var_16_object)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	var_18_object = var_16_object;
}
EMIT "Stack[-1] = 0";


void func_1384(bool var_12_bool, object var_13_object)
{
	bool var_15_bool;
	@IsPlayerActor(var_13_object, var_15_bool);
	var_15_bool = var_12_bool;
}


void func_1389(bool var_38_bool, object var_39_object, string var_40_string)
{
	var_45_bool = IsFuncExist(var_39_object, "HasProperty", 2);
	if(!var_45_bool) { //@nz
		var_38_bool = false;
		return 2;
	}
	bool var_42_bool;
	var_39_object->HasProperty(var_40_string, var_42_bool);
	var_42_bool = var_38_bool;
}


void func_1401(float var_251_float, object var_252_object, float var_253_float, int var_254_int)
{
	int var_261_int; int var_263_int;
	object var_268_object;
	var_252_object = var_268_object;
	bool var_267_bool;
	func_1389(var_267_bool, var_268_object, "health");
	if(!var_267_bool) //@nz
		var_251_float = 0.0;
	bool var_271_bool; object var_272_object;
	func_1389(var_271_bool, var_272_object, "armor");
	if(!var_271_bool) //@nz
		var_261_int = 0;
	else
		var_272_object->GetProperty("armor", var_261_int);
	string var_276_string; int var_277_int;
	var_254_int = var_277_int;
	func_1348(var_276_string, var_277_int);
	string var_262_string = "armor_" + var_276_string;
	bool var_282_bool; object var_283_object; string var_284_string;
	var_252_object = var_283_object;
	func_1389(var_282_bool, var_283_object, var_284_string);
	if(!var_282_bool) //@nz
		var_263_int = 0;
	else
		var_252_object->GetProperty(var_284_string, var_263_int);

	float var_286_float;
	func_1967(var_286_float, ((var_261_int + var_263_int) / 100.0), (float)1);
	float var_264_float;
	var_286_float = var_264_float;
	float var_265_float;
	var_252_object->GetProperty("health", var_265_float);
	float var_266_float = var_253_float * (1 - var_264_float);
	float var_296_float;
	func_1974(var_296_float, (var_265_float - var_266_float), (float)0, (float)1);
	var_252_object->SetProperty("health", var_296_float);
	bool var_302_bool; object var_303_object;
	var_252_object = var_303_object;
	func_1384(var_302_bool, var_303_object);
	if(var_302_bool != 0) {
		float var_304_float = -var_266_float;
		func_2037(var_304_float);
	}
	var_266_float = var_251_float;
	
}


void func_1947(object var_11_object)
{
	object var_13_object;
	@self(var_13_object);
	var_13_object = var_11_object;
}
EMIT "Stack[-1] = 0";


void func_1953(cvector var_43_cvector, cvector var_44_cvector)
{
	float var_52_float = sqrt(var_44_cvector | var_44_cvector);
	if(var_52_float < 0.000001)
		var_43_cvector = [0.0, 0.0, 0.0];
	var_43_cvector = var_44_cvector / var_52_float;
}


void func_1963(float var_27_float, cvector var_28_cvector, cvector var_29_cvector)
{
	var_27_float = (var_29_cvector - var_28_cvector) | (var_29_cvector - var_28_cvector);
}


// @pe
void func_1967(float var_286_float, float var_287_float, float var_288_float)
{
	if(var_287_float < var_288_float)
		var_287_float = var_286_float;
	else
		var_288_float = var_286_float;
	
}


// @pe
void func_1974(float var_296_float, float var_297_float, float var_298_float, float var_299_float)
{
	if(var_297_float < var_298_float) {
		var_298_float = var_296_float;
		return 0;
	}
	if(var_297_float > var_299_float) {
		var_299_float = var_296_float;
		return 0;
	}
	var_297_float = var_296_float;
}


void func_1985(bool var_58_bool, int var_59_int, int var_60_int)
{
	int var_62_int;
	@irand(var_62_int, var_60_int);
	var_58_bool = var_62_int < var_59_int;
}


void func_1474(bool var_31_bool, object var_32_object)
{
	bool var_34_bool;
	var_32_object->IsDead(var_34_bool);
	var_34_bool = var_31_bool;
}


void func_1990(object var_12_object)
{
	object var_14_object;
	@CreateObjectSet(var_14_object);
	var_14_object = var_12_object;
}
EMIT "Stack[-1] = 0";


void func_1479(bool var_20_bool, object var_21_object)
{
	if(var_21_object == null) {
		var_20_bool = false;
		return 4;
	}
	bool var_27_bool = false;
	var_30_bool = IsFuncExist(var_21_object, "IsDead", 1);
	if(var_30_bool != 0) {
		bool var_31_bool; object var_32_object;
		var_21_object = var_32_object;
		func_1474(var_31_bool, var_32_object);
		if(var_31_bool != 0)
			var_27_bool = true;
	}
	if(var_27_bool != 0) {
		var_20_bool = false;
		return 4;
	}
	object var_24_object;
	@GetScene(var_24_object);
	if(var_24_object == null) {
		var_20_bool = false;
		return 4;
	}
	object var_25_object;
	var_21_object->GetScene(var_25_object);
	if(var_24_object != var_25_object) {
		var_20_bool = false;
		return 4;
	}
	var_20_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1996(float var_209_float, cvector var_210_cvector, cvector var_211_cvector)
{
	var_212_float = GetByIndex(var_210_cvector, 0);
	var_213_float = GetByIndex(var_211_cvector, 0);
	var_215_float = GetByIndex(var_210_cvector, 2);
	var_216_float = GetByIndex(var_211_cvector, 2);
	var_209_float = (var_212_float * var_213_float) + (var_215_float * var_216_float);
}


// @pe
void func_2005(float var_218_float, cvector var_219_cvector)
{
	var_220_float = GetByIndex(var_219_cvector, 0);
	var_221_float = GetByIndex(var_219_cvector, 0);
	var_223_float = GetByIndex(var_219_cvector, 2);
	var_224_float = GetByIndex(var_219_cvector, 2);
	var_218_float = sqrt((var_220_float * var_221_float) + (var_223_float * var_224_float));
}


// @pe
void func_2015(float var_206_float, cvector var_207_cvector, cvector var_208_cvector)
{
	cvector var_210_cvector;
	var_207_cvector = var_210_cvector;
	cvector var_211_cvector;
	var_208_cvector = var_211_cvector;
	float var_209_float;
	func_1996(var_209_float, var_210_cvector, var_211_cvector);
	float var_218_float; cvector var_219_cvector;
	var_207_cvector = var_219_cvector;
	func_2005(var_218_float, var_219_cvector);
	float var_227_float; cvector var_228_cvector;
	var_208_cvector = var_228_cvector;
	func_2005(var_227_float, var_228_cvector);
	var_206_float = var_209_float / (var_218_float * var_227_float);
}


void func_992(object var_0_object, object var_1_object)
{
	var_1_object = null;
	@Face(var_1_object);
}


void func_2529(void)
{
	var_11_object = GlobalVars[0];
	object var_12_object;
	func_1990(var_12_object);
	var_12_object = var_11_object;
	GlobalVars[0] = var_11_object;
}


void func_997(object var_0_object)
{
	object var_187_object; object var_188_object; float var_193_float; object var_194_object; object var_195_object;
	func_2059(var_0_object);
	@ReportAttack(var_0_object);
	bool var_197_bool;
	func_1384(var_197_bool, var_0_object);
	if(var_197_bool != 0) {
		object var_199_object;
		func_1947(var_199_object);
		@SendPlayerEnemy(var_0_object, var_199_object);
	}
	cvector var_182_cvector;
	@GetDirection(var_182_cvector);
	cvector var_200_cvector;
	func_1362(var_200_cvector, var_0_object);
	cvector var_183_cvector;
	var_200_cvector = var_183_cvector;
	float var_206_float; cvector var_207_cvector; cvector var_208_cvector;
	var_183_cvector = var_208_cvector;
	func_2015(var_206_float, var_207_cvector, var_208_cvector);
	if(var_206_float < 0.99939084) {
	}
	func_2068();
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
	func_1362(var_239_cvector, var_0_object);
	var_239_cvector = var_183_cvector;
	var_241_float = GetByIndex(var_183_cvector, 1);
	float var_242_float;
	func_1676(var_242_float, var_0_object);
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
			func_1401(var_251_float, var_0_object, 1.5, 1);
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


// @pe
void func_2536(object var_136_object, bool var_137_bool)
{
	object var_138_object;
	var_136_object = var_138_object;
	bool var_139_bool;
	var_137_bool = var_139_bool;
	TaskCall(5);
	func_817(var_140_object, var_141_object, var_142_bool, var_138_object, var_139_bool);
	TaskReturn();
	@ResetAAS();
}


void func_1515(bool var_16_bool, object var_17_object)
{
	object var_21_object;
	var_17_object = var_21_object;
	bool var_20_bool;
	func_1479(var_20_bool, var_21_object);
	if(!var_20_bool) { //@nz
		var_16_bool = false;
		return 2;
	}
	bool var_38_bool; object var_39_object;
	func_1389(var_38_bool, var_39_object, "noaccess");
	if(!var_38_bool) { //@nz
		var_16_bool = true;
		return 2;
	}
	int var_19_int;
	var_39_object->GetProperty("noaccess", var_19_int);
	var_16_bool = var_19_int == 0;
}


void func_2032(int var_97_int, string var_98_string)
{
	int var_100_int;
	@GetVariable(var_98_string, var_100_int);
	var_100_int = var_97_int;
}


void func_2547(object var_21_object)
{
	if(var_21_object == null) {
	}
	var_25_object = GlobalVars[0];
	bool var_23_bool;
	var_25_object->in(var_23_bool, var_21_object);
	if(!var_23_bool) { //@nz
		var_27_object = GlobalVars[0];
		var_27_object->add(var_21_object);
	}
	bool var_28_bool; object var_29_object;
	func_1384(var_28_bool, var_29_object);
	if(var_28_bool != 0) {
		object var_32_object;
		func_1947(var_32_object);
		@ReportReputationChange(var_29_object, var_32_object, 0.0);
	}
}


void func_2037(float var_304_float)
{
	object var_306_object;
	@CreateFloatVector(var_306_object);
	var_306_object->add(var_304_float);
	@SendWorldWndMessage(15, var_306_object);
}
EMIT "Stack[-1] = 0";


void func_2047(bool var_12_bool, string var_13_string, string var_14_string)
{
	object var_16_object;
	@FindActor(var_16_object, var_13_string);
	if(var_16_object == null)
		var_12_bool = false;
	@Trigger(var_16_object, var_14_string);
	var_12_bool = true;
}
EMIT "Stack[-1] = 0";


