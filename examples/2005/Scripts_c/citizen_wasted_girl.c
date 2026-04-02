// @GLOBALS: 0:bool:

task task_0
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		bool var_23_bool;
		func_3581(var_23_bool);
		if(var_23_bool != 0)
			@lshStopAnimation();
		else
			@StopAnimation();
		@StopTrade();
		var_0_bool = true;
	
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool, object var_21_object, cvector var_22_cvector, bool var_23_bool)
	{
		if(1 != 0) {
			func_2730();
			if(var_22_cvector == 40007) {
				func_186(var_23_bool, "Neutral");
				var_0_bool->SetMessage(538136); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_41_bool = false;
				bool var_42_bool;
				func_2852(var_1_object);
				if(var_42_bool != 0) {
					bool var_50_bool;
					func_2864(var_50_bool, var_1_object);
					if(var_50_bool != 0)
						var_41_bool = true;
				}
				if(var_41_bool != 0)
					var_0_bool->AddReply(538137, 40009, 40008); //@t
				var_0_bool->AddReply(538165, -1, 40040); //@t
				return 0;
			}
			if(var_22_cvector == 40009) {
				func_186(var_23_bool, "Neutral");
				var_0_bool->SetMessage(538138); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538139, 40011, 40010); //@t
				var_0_bool->AddReply(538164, 40019, 40038); //@t
				return 0;
			}
			if(var_22_cvector == 40011) {
				func_186(var_23_bool, "Neutral");
				var_0_bool->SetMessage(538140); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538141, 40013, 40012); //@t
				var_0_bool->AddReply(538163, 40019, 40036); //@t
				return 0;
			}
			if(var_22_cvector == 40013) {
				func_186(var_23_bool, "Neutral");
				var_0_bool->SetMessage(538142); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538143, 40015, 40014); //@t
				var_0_bool->AddReply(538162, 40015, 40034); //@t
				return 0;
			}
			if(var_22_cvector == 40015) {
				func_186(var_23_bool, "Neutral");
				var_0_bool->SetMessage(538144); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538145, 40017, 40016); //@t
				var_0_bool->AddReply(538157, 40017, 40028); //@t
				var_0_bool->AddReply(538158, 40031, 40030); //@t
				return 0;
			}
			if(var_22_cvector == 40031) {
				func_186(var_23_bool, "Neutral");
				var_0_bool->SetMessage(538159); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538160, -1, 40032); //@t
				var_0_bool->AddReply(538161, -1, 40033); //@t
				return 0;
			}
			if(var_22_cvector == 40017) {
				func_186(var_23_bool, "Neutral");
				var_0_bool->SetMessage(538146); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538147, 40019, 40018); //@t
				return 0;
			}
			if(var_22_cvector == 40019) {
				func_186(var_23_bool, "Neutral");
				var_0_bool->SetMessage(538148); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538149, 40021, 40020); //@t
				var_0_bool->AddReply(538156, -1, 40027); //@t
				return 0;
			}
			if(var_22_cvector == 40021) {
				func_186(var_23_bool, "Neutral");
				var_0_bool->SetMessage(538150); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538151, -1, 40022); //@t
				var_0_bool->AddReply(538152, 40024, 40023); //@t
				return 0;
			}
			if(var_22_cvector == 40024) {
				func_186(var_23_bool, "Neutral");
				var_0_bool->SetMessage(538153); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538154, -1, 40025); //@t
				var_0_bool->AddReply(538155, -1, 40026); //@t
				return 0;
			}
			var_3_object = true;
			bool var_157_bool;
			func_3581(var_157_bool);
			if(var_157_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd1";
	
	}

}


task task_3
{
	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		func_3509(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			object var_29_object;
			var_22_bool = var_29_object;
			func_3512(var_29_object);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		func_3518();
	}

	// @pe
	void OnHit(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, int var_7_int, float var_8_float, float var_9_float, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool, object var_23_object, cvector var_24_cvector, bool var_25_bool)
	{
	}

	// @pe
	void OnPropertyChange(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, string var_7_string, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool, object var_21_object, cvector var_22_cvector, bool var_23_bool)
	{
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
	}

}


maintask task_4
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		@SensePlayerOnly(true);
		func_3583();
		func_642();
	
		for(;;) {
			var_2_object = false;
			func_903(var_20_cvector, var_21_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		func_3509(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_838(var_24_int);
			object var_32_object;
			var_22_bool = var_32_object;
			func_3512(var_32_object);
		}
	}

	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		object var_25_object;
		var_22_bool = var_25_object;
		func_3314(var_25_object);
		int var_34_int; object var_35_object;
		var_22_bool = var_35_object;
		func_3397(var_34_int, var_35_object);
		int var_24_int;
		var_34_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_838(var_24_int);
			object var_75_object;
			var_22_bool = var_75_object;
			func_3407(var_75_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, object var_12_object, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool, object var_22_object, cvector var_23_cvector, bool var_24_bool)
	{
		int var_26_int;
		object var_28_object;
		var_22_object = var_28_object;
		object var_29_object;
		var_23_cvector = var_29_object;
		bool var_30_bool;
		var_24_bool = var_30_bool;
		func_3633(var_28_object, var_29_object, var_30_bool);
		bool var_27_bool;
		if(var_27_bool != 0) {
			int var_74_int; object var_75_object; bool var_76_bool;
			var_22_object = var_75_object;
			var_24_bool = var_76_bool;
			func_3415(var_75_object, var_76_bool);
			var_74_int = var_26_int;
			if(var_26_int > 0) {
				if(var_26_int > 1)
					func_838(var_26_int);
				object var_110_object;
				var_22_object = var_110_object;
				func_3425(var_110_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		func_3499(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_838(var_24_int);
			object var_32_object;
			var_22_bool = var_32_object;
			func_3502();
		}
	}

	void OnMessage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, string var_10_string, object var_11_object, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool, object var_21_object, cvector var_22_cvector, bool var_23_bool)
	{
		int var_25_int;
		object var_27_object;
		var_22_cvector = var_27_object;
		string var_28_string;
		var_23_bool = var_28_string;
		bool var_26_bool;
		func_3228(var_26_bool, var_27_object, var_28_string);
		if(var_26_bool != 0) {
			func_838(var_25_int);
			object var_59_object; string var_60_string;
			var_22_cvector = var_59_object;
			var_23_bool = var_60_string;
			func_3260(var_59_object, var_60_string);
		} else {
			int var_208_int; string var_209_string; object var_210_object;
			var_23_bool = var_209_string;
			var_22_cvector = var_210_object;
			func_3504(var_210_object);
			var_208_int = var_25_int;
			if(!(var_25_int > 0)) goto Label_779;
			if(var_25_int > 1)
				func_838(var_25_int);
			string var_215_string; object var_216_object;
			var_23_bool = var_215_string;
			var_22_cvector = var_216_object;
			func_3507();
		}
	Label_779:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, string var_9_string, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		bool var_23_bool; string var_24_string;
		func_3327(var_23_bool, var_24_string);
		if(var_23_bool != 0) {
			func_838(var_24_string);
			string var_33_string;
			var_22_bool = var_33_string;
			func_3343(var_33_string);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		bool var_23_bool; object var_24_object;
		func_3285(var_23_bool, var_24_object);
		if(var_23_bool != 0) {
			func_838(var_24_object);
			object var_38_object;
			var_22_bool = var_38_object;
			func_3308(var_38_object);
		} else {
			object var_112_object;
			func_863(var_112_object, var_112_object);
		}
	
	}

	// @pe
	void OnHear(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		object var_23_object;
		func_863(var_23_object, var_23_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, int var_9_int, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		if(var_22_bool != 110) {
		}
		var_2_object = false;
		@KillTimer(110);
		@ResetAAS();
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		func_838(var_21_bool);
		func_3518();
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		func_838(var_22_bool);
		object var_24_object;
		var_22_bool = var_24_object;
		func_3204();
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		@RequestClearPath(var_22_bool);
	}

	void OnActorStuck(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		@Stop();
	}

}


task task_5
{
	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		func_3509(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_1241();
			object var_31_object;
			var_22_bool = var_31_object;
			func_3512(var_31_object);
		}
	}

	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		object var_25_object;
		var_22_bool = var_25_object;
		func_3314(var_25_object);
		int var_34_int; object var_35_object;
		var_22_bool = var_35_object;
		func_3397(var_34_int, var_35_object);
		int var_24_int;
		var_34_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_1241();
			object var_74_object;
			var_22_bool = var_74_object;
			func_3407(var_74_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, object var_12_object, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool, object var_22_object, cvector var_23_cvector, bool var_24_bool)
	{
		int var_26_int;
		object var_28_object;
		var_22_object = var_28_object;
		object var_29_object;
		var_23_cvector = var_29_object;
		bool var_30_bool;
		var_24_bool = var_30_bool;
		func_3633(var_28_object, var_29_object, var_30_bool);
		bool var_27_bool;
		if(var_27_bool != 0) {
			int var_74_int; object var_75_object; bool var_76_bool;
			var_22_object = var_75_object;
			var_24_bool = var_76_bool;
			func_3415(var_75_object, var_76_bool);
			var_74_int = var_26_int;
			if(var_26_int > 0) {
				if(var_26_int > 1)
					func_1241();
				object var_109_object;
				var_22_object = var_109_object;
				func_3425(var_109_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		func_3499(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_1241();
			object var_31_object;
			var_22_bool = var_31_object;
			func_3502();
		}
	}

	void OnMessage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, string var_10_string, object var_11_object, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool, object var_21_object, cvector var_22_cvector, bool var_23_bool)
	{
		int var_25_int;
		object var_27_object;
		var_22_cvector = var_27_object;
		string var_28_string;
		var_23_bool = var_28_string;
		bool var_26_bool;
		func_3228(var_26_bool, var_27_object, var_28_string);
		if(var_26_bool != 0) {
			func_1241();
			object var_58_object; string var_59_string;
			var_22_cvector = var_58_object;
			var_23_bool = var_59_string;
			func_3260(var_58_object, var_59_string);
		} else {
			int var_207_int; string var_208_string; object var_209_object;
			var_23_bool = var_208_string;
			var_22_cvector = var_209_object;
			func_3504(var_209_object);
			var_207_int = var_25_int;
			if(!(var_25_int > 0)) goto Label_1124;
			if(var_25_int > 1)
				func_1241();
			string var_214_string; object var_215_object;
			var_23_bool = var_214_string;
			var_22_cvector = var_215_object;
			func_3507();
		}
	Label_1124:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, string var_9_string, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		string var_24_string;
		var_22_bool = var_24_string;
		bool var_23_bool;
		func_3327(var_23_bool, var_24_string);
		if(var_23_bool != 0) {
			func_1241();
			string var_32_string;
			var_22_bool = var_32_string;
			func_3343(var_32_string);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		func_1241();
		func_3518();
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		object var_24_object;
		var_22_bool = var_24_object;
		bool var_23_bool;
		func_3285(var_23_bool, var_24_object);
		if(var_23_bool != 0) {
			func_1241();
			object var_37_object;
			var_22_bool = var_37_object;
			func_3308(var_37_object);
		}
	}

}


task task_6
{
	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		func_3509(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_1445();
			object var_33_object;
			var_22_bool = var_33_object;
			func_3512(var_33_object);
		}
	}

	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		object var_25_object;
		var_22_bool = var_25_object;
		func_3314(var_25_object);
		int var_34_int; object var_35_object;
		var_22_bool = var_35_object;
		func_3397(var_34_int, var_35_object);
		int var_24_int;
		var_34_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_1445();
			object var_76_object;
			var_22_bool = var_76_object;
			func_3407(var_76_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool, object var_22_object, cvector var_23_cvector, bool var_24_bool)
	{
		int var_26_int;
		object var_28_object;
		var_22_object = var_28_object;
		object var_29_object;
		var_23_cvector = var_29_object;
		bool var_30_bool;
		var_24_bool = var_30_bool;
		func_3633(var_28_object, var_29_object, var_30_bool);
		bool var_27_bool;
		if(var_27_bool != 0) {
			int var_74_int; object var_75_object; bool var_76_bool;
			var_22_object = var_75_object;
			var_24_bool = var_76_bool;
			func_3415(var_75_object, var_76_bool);
			var_74_int = var_26_int;
			if(var_26_int > 0) {
				if(var_26_int > 1)
					func_1445();
				object var_111_object;
				var_22_object = var_111_object;
				func_3425(var_111_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		func_3499(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_1445();
			object var_33_object;
			var_22_bool = var_33_object;
			func_3502();
		}
	}

	void OnMessage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, string var_11_string, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool, object var_21_object, cvector var_22_cvector, bool var_23_bool)
	{
		int var_25_int;
		object var_27_object;
		var_22_cvector = var_27_object;
		string var_28_string;
		var_23_bool = var_28_string;
		bool var_26_bool;
		func_3228(var_26_bool, var_27_object, var_28_string);
		if(var_26_bool != 0) {
			func_1445();
			object var_60_object; string var_61_string;
			var_22_cvector = var_60_object;
			var_23_bool = var_61_string;
			func_3260(var_60_object, var_61_string);
		} else {
			int var_209_int; string var_210_string; object var_211_object;
			var_23_bool = var_210_string;
			var_22_cvector = var_211_object;
			func_3504(var_211_object);
			var_209_int = var_25_int;
			if(!(var_25_int > 0)) goto Label_1430;
			if(var_25_int > 1)
				func_1445();
			string var_216_string; object var_217_object;
			var_23_bool = var_216_string;
			var_22_cvector = var_217_object;
			func_3507();
		}
	Label_1430:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, string var_10_string, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		string var_24_string;
		var_22_bool = var_24_string;
		bool var_23_bool;
		func_3327(var_23_bool, var_24_string);
		if(var_23_bool != 0) {
			func_1445();
			string var_34_string;
			var_22_bool = var_34_string;
			func_3343(var_34_string);
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		func_1445();
		object var_25_object;
		var_22_bool = var_25_object;
		func_3204();
	}

	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		if(var_22_bool != 111)
			return 4;
		bool var_29_bool;
		func_2396(var_29_bool, var_0_bool);
		if(!var_29_bool) { //@nz
			func_1445();
			return 4;
		}
		cvector var_25_cvector;
		@GetDirection(var_25_cvector);
		cvector var_66_cvector;
		func_2323(var_66_cvector, var_0_bool);
		cvector var_26_cvector;
		var_66_cvector = var_26_cvector;
		float var_72_float; cvector var_73_cvector; cvector var_74_cvector;
		var_25_cvector = var_73_cvector;
		var_26_cvector = var_74_cvector;
		func_2821(var_72_float, var_73_cvector, var_74_cvector);
		if(var_72_float < 0.49999997)
			func_2546(var_0_bool);
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		func_1445();
		func_3518();
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		object var_24_object;
		var_22_bool = var_24_object;
		bool var_23_bool;
		func_3285(var_23_bool, var_24_object);
		if(var_23_bool != 0) {
			func_1445();
			object var_39_object;
			var_22_bool = var_39_object;
			func_3308(var_39_object);
		}
	}

}


task task_7
{
	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		func_1711(var_21_bool);
		func_3518();
	}

	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, int var_13_int, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		cvector var_27_cvector; float var_28_float; cvector var_29_cvector; float var_30_float;
		if(var_22_bool != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_27_cvector);
			@FindDirLength(var_28_float, var_27_cvector, 7000.0);
			cvector var_36_cvector;
			func_1556(var_30_float, var_36_cvector, 1.7453294);
			var_36_cvector = var_29_cvector;
			var_30_float = var_29_cvector | var_29_cvector;
			bool var_66_bool = false;
			if(var_30_float >= 2500.0) {
				bool var_69_bool;
				var_73_bool = var_30_float >= ((var_28_float * var_28_float) * 2.25);
				if(var_73_bool != 1) {
					bool var_74_bool;
					func_1727(true, var_74_bool);
					if(var_74_bool != 1)
						var_69_bool = false;
				}
				if(var_69_bool != 0)
					var_66_bool = true;
			}
			if(var_66_bool == 0) goto Label_1710;
			@Stop();
			cvector var_94_cvector;
			func_2318(var_94_cvector);
			var_1_object = var_94_cvector + var_29_cvector;
		}
	Label_1710:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		func_1711(var_22_bool);
		object var_24_object;
		var_22_bool = var_24_object;
		func_3204();
	}

}


task task_8
{
	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, int var_16_int, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		cvector var_27_cvector; float var_28_float; cvector var_29_cvector; float var_30_float;
		if(var_22_bool != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_27_cvector);
			@FindDirLength(var_28_float, var_27_cvector, 7000.0);
			cvector var_36_cvector;
			func_1743(var_30_float, var_36_cvector, 1.7453294);
			var_36_cvector = var_29_cvector;
			var_30_float = var_29_cvector | var_29_cvector;
			bool var_66_bool = false;
			if(var_30_float >= 2500.0) {
				bool var_69_bool;
				var_73_bool = var_30_float >= ((var_28_float * var_28_float) * 2.25);
				if(var_73_bool != 1) {
					bool var_74_bool;
					func_1914(true, var_74_bool);
					if(var_74_bool != 1)
						var_69_bool = false;
				}
				if(var_69_bool != 0)
					var_66_bool = true;
			}
			if(var_66_bool == 0) goto Label_1897;
			@Stop();
			cvector var_94_cvector;
			func_2318(var_94_cvector);
			var_1_object = var_94_cvector + var_29_cvector;
		}
	Label_1897:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		func_1898(var_22_bool);
		object var_24_object;
		var_22_bool = var_24_object;
		func_3204();
	}

}


task task_9
{
	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		func_2092(var_21_bool);
		func_3518();
	}

	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		cvector var_27_cvector; float var_28_float; cvector var_29_cvector; float var_30_float;
		if(var_22_bool != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_27_cvector);
			@FindDirLength(var_28_float, var_27_cvector, 7000.0);
			cvector var_36_cvector;
			func_1937(var_30_float, var_36_cvector, 1.7453294);
			var_36_cvector = var_29_cvector;
			var_30_float = var_29_cvector | var_29_cvector;
			bool var_66_bool = false;
			if(var_30_float >= 2500.0) {
				bool var_69_bool;
				var_73_bool = var_30_float >= ((var_28_float * var_28_float) * 2.25);
				if(var_73_bool != 1) {
					bool var_74_bool;
					func_2108(true, var_74_bool);
					if(var_74_bool != 1)
						var_69_bool = false;
				}
				if(var_69_bool != 0)
					var_66_bool = true;
			}
			if(var_66_bool == 0) goto Label_2091;
			@Stop();
			cvector var_94_cvector;
			func_2318(var_94_cvector);
			var_1_object = var_94_cvector + var_29_cvector;
		}
	Label_2091:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		func_2092(var_22_bool);
		object var_24_object;
		var_22_bool = var_24_object;
		func_3204();
	}

}


task task_10
{
	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		func_2286(var_21_bool);
		func_3518();
	}

	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool, int var_22_int)
	{
		cvector var_27_cvector; float var_28_float; cvector var_29_cvector; float var_30_float;
		if(var_22_int != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_27_cvector);
			@FindDirLength(var_28_float, var_27_cvector, 7000.0);
			cvector var_36_cvector;
			func_2131(var_30_float, var_36_cvector, 1.7453294);
			var_36_cvector = var_29_cvector;
			var_30_float = var_29_cvector | var_29_cvector;
			bool var_66_bool = false;
			if(var_30_float >= 2500.0) {
				bool var_69_bool;
				var_73_bool = var_30_float >= ((var_28_float * var_28_float) * 2.25);
				if(var_73_bool != 1) {
					bool var_74_bool;
					func_2302(true, var_74_bool);
					if(var_74_bool != 1)
						var_69_bool = false;
				}
				if(var_69_bool != 0)
					var_66_bool = true;
			}
			if(var_66_bool == 0) goto Label_2285;
			@Stop();
			cvector var_94_cvector;
			func_2318(var_94_cvector);
			var_1_object = var_94_cvector + var_29_cvector;
		}
	Label_2285:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool, object var_22_object)
	{
		func_2286(var_22_object);
		object var_24_object;
		var_22_object = var_24_object;
		func_3204();
	}

}


void OnPropertyChange(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool, object var_22_object, string var_23_string)
{
	float var_25_float;
	if(var_23_string == "health") {
		@GetProperty("health", var_25_float);
		if(var_25_float <= 0)
			@SignalDeath(var_22_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool, object var_22_object)
{
	object var_23_object;
	var_22_object = var_23_object;
	func_3183(var_23_object);
}


// @pe
void OnHit(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool, object var_22_object, int var_23_int, float var_24_float, float var_25_float)
{
	object var_26_object;
	var_22_object = var_26_object;
	int var_27_int;
	var_23_int = var_27_int;
	float var_28_float;
	var_24_float = var_28_float;
	func_2464(var_26_object, var_27_int, var_28_float);
}


// @pe
void OnHit2(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool, object var_22_object, int var_23_int, float var_24_float, float var_25_float, cvector var_26_cvector, cvector var_27_cvector)
{
	object var_28_object;
	var_22_object = var_28_object;
	int var_29_int;
	var_23_int = var_29_int;
	float var_30_float;
	var_24_float = var_30_float;
	cvector var_31_cvector;
	var_26_cvector = var_31_cvector;
	cvector var_32_cvector;
	var_27_cvector = var_32_cvector;
	func_2532(var_30_float, var_31_cvector, var_32_cvector);
}


// @pe
void func_0(bool var_0_bool)
{
	@DoTrade();
	
	for(;;) {
		bool var_220_bool;
		func_3581(var_220_bool);
		if(var_220_bool == 0) goto Label_15;
		func_2706("Neutral");
		@lshWaitForAnimEnd();
		break;
	Label_24:
	}
	if(false == 0) goto Label_24;
	return 0;
	
Label_15:
	@WaitForAnimEnd();
	@PlayAnimation("all", "idle");
}
EMIT "Return(); Pop(0)";


void func_2562(bool var_58_bool, object var_59_object, float var_60_float)
{
	cvector var_71_cvector; bool var_78_bool;
	var_59_object->GetPosition(var_71_cvector);
	float var_70_float;
	var_59_object->GetEyesHeight(var_70_float);
	var_79_float = GetByIndex(var_71_cvector, 1);
	SetByIndex(var_71_cvector, 1) = (var_79_float + var_70_float);
	cvector var_72_cvector;
	@GetPosition(var_72_cvector);
	@GetEyesHeight(var_70_float);
	var_80_float = GetByIndex(var_72_cvector, 1);
	SetByIndex(var_72_cvector, 1) = (var_80_float + var_70_float);
	cvector var_73_cvector = var_71_cvector - var_72_cvector;
	var_81_float = GetByIndex(var_73_cvector, 1);
	SetByIndex(var_73_cvector, 1) = (float)0;
	var_83_float = sqrt(var_73_cvector | var_73_cvector);
	var_73_cvector /= var_83_float;
	cvector var_74_cvector = -var_73_cvector;
	cvector var_85_cvector;
	func_2784(var_85_cvector, (var_74_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_75_cvector = ((var_73_cvector * var_60_float) + (var_85_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_77_bool;
	@IsOverrideActive(var_77_bool);
	if(var_77_bool != 0)
		var_58_bool = false;
	@StopWorld();
	@CameraTransit((var_72_cvector + var_75_cvector), var_74_cvector);
	var_98_float = GetByIndex(var_75_cvector, 0);
	var_99_float = GetByIndex(var_75_cvector, 2);
	@Rotate(var_98_float, var_99_float);
	bool var_100_bool;
	func_3581(var_100_bool);
	if(var_100_bool != 0) {
	} else {
		@HasAnimationTrack(var_78_bool, "head");
		if(var_78_bool == 0) goto Label_2624;
		@LookAsyncCamera("head");
	}
Label_2624:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_58_bool = true;
	
}


void func_3587(object var_34_object, object var_49_object)
{
	bool var_36_bool;
	var_37_bool = GlobalVars[0];
	if(var_37_bool != 0) {
		@IsOverrideActive(var_36_bool);
		if(!var_36_bool) { //@nz
			object var_39_object;
			var_34_object = var_39_object;
			func_2918(var_39_object);
		}
		return 2;
	EMIT "GOTO 0xe2a";
	}
	int var_47_int; object var_48_object;
	var_34_object = var_48_object;
	TaskCall(1);
	func_40(var_49_object, var_47_int, var_48_object);
	TaskReturn();
	if(1000 == var_49_object) {
		bool var_186_bool; object var_187_object;
		var_34_object = var_187_object;
		func_2647(var_186_bool, var_187_object);
		if(!var_186_bool) //@nz
			return 2;
		object var_218_object;
		var_34_object = var_218_object;
		TaskCall(0);
		func_0(var_218_object);
		TaskReturn();
		object var_225_object;
		var_34_object = var_225_object;
		func_2702();
	}
}


void func_1556(bool var_0_bool, cvector var_36_cvector, float var_37_float)
{
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	cvector var_45_cvector;
	var_0_bool->GetPosition(var_45_cvector); //@t
	cvector var_46_cvector;
	@GetDirection(var_46_cvector);
	cvector var_50_cvector;
	cvector var_52_cvector;
	func_2784(var_52_cvector, (var_44_cvector - var_45_cvector));
	func_2784(var_50_cvector, (var_52_cvector + (var_46_cvector * 0.75)));
	cvector var_47_cvector;
	var_50_cvector = var_47_cvector;
	cvector var_48_cvector;
	float var_49_float;
	@FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, 32, 7000.0);
	if((var_49_float - 100) < 0)
		var_49_float = 0;
	var_36_cvector = var_48_cvector * var_49_float;
}


void func_40(bool var_0_bool, int var_47_int, object var_48_object)
{
	var_0_bool = var_48_object;
	bool var_58_bool; object var_59_object;
	var_48_object = var_59_object;
	func_2562(var_58_bool, var_59_object, 70.0);
	if(!var_58_bool) { //@nz
		var_47_int = -2;
		return 8;
	}
	object var_54_object;
	@CreateDialog(var_54_object);
	int var_105_int;
	func_3575(var_105_int);
	var_54_object->SetNPCName(var_105_int);
	int var_106_int;
	func_3573(var_106_int);
	var_54_object->SetNPCDescription(var_106_int);
	string var_107_string;
	func_3577(var_107_string);
	var_54_object->SetPhoto(var_107_string);
	string var_108_string;
	func_3579(var_108_string);
	var_54_object->SetPhoto2(var_108_string);
	int var_109_int;
	func_2881(var_109_int);
	var_54_object->SetPlayerName(var_109_int);
	bool var_55_bool;
	@IsOverrideActive(var_55_bool);
	if(var_55_bool != 0) {
		var_47_int = -2;
		return 8;
	}
	@DoDialog(var_54_object);
	object var_118_object; object var_119_object;
	var_48_object = var_118_object;
	var_54_object = var_119_object;
	TaskCall(2);
	func_114(var_120_object, var_121_object, var_122_string, var_123_bool, var_118_object, var_119_object);
	TaskReturn();
	bool var_57_bool;
	var_54_object->IsDialogEnd(var_57_bool);
	
	for(;;) {
		var_177_bool = !var_57_bool; //@nz
		if(var_177_bool == 0) goto Label_103;
		@sync();
		var_54_object->IsDialogEnd(var_57_bool);
	}
	
Label_103:
	object var_178_object;
	var_48_object = var_178_object;
	func_2630();
	@StopDialog(var_54_object);
	var_54_object->GetReturnValue(-1);
	int var_56_int = var_47_int;
}
EMIT "Stack[-4] = 0";


void func_3627(bool var_67_bool)
{
	float var_68_float;
	func_2904(var_68_float);
	var_67_bool = var_68_float > 0.7;
}


void func_2092(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


// @pe
void func_3633(bool var_27_bool, object var_28_object, object var_29_object)
{
	object var_32_object;
	var_28_object = var_32_object;
	object var_33_object;
	var_29_object = var_33_object;
	bool var_31_bool;
	func_3433(var_31_bool, var_32_object, var_33_object, 700.0);
	var_31_bool = var_27_bool;
}


void func_1586(bool var_0_bool, object var_1_object, object var_2_object, object var_87_object)
{
	float var_94_float; cvector var_96_cvector; float var_97_float;
	cvector var_98_cvector;
	func_1556(var_97_float, var_98_cvector, 1.7453294);
	cvector var_93_cvector;
	var_98_cvector = var_93_cvector;
	if((var_93_cvector | var_93_cvector) < 2500.0) {
		cvector var_130_cvector;
		func_1556(var_97_float, var_130_cvector, 2.6179938);
		var_130_cvector = var_93_cvector;
		var_94_float = var_93_cvector | var_93_cvector;
		if(var_94_float < 2500.0) {
			var_135_float = sqrt(var_94_float);
			@Trace("Can't retreat, distance: " + var_135_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_138_float = GetByIndex(var_93_cvector, 0);
	var_139_float = GetByIndex(var_93_cvector, 2);
	@Rotate(var_138_float, var_139_float);
	cvector var_140_cvector;
	func_2318(var_140_cvector);
	@SetTimer(120, 0.5);
	
Label_1628:
	bool var_95_bool;
	@MovePoint((var_140_cvector + var_93_cvector), 1, var_95_bool);
	if(var_95_bool != 0) {
		if(var_87_object == null) {
			goto Label_1658;
		EMIT "GOTO 0x678";

		Label_1658:
			for(;;) {
				return 10;
		}
			cvector var_148_cvector;
			func_1556(var_97_float, var_148_cvector, 2.6179938);
			var_148_cvector = var_96_cvector;
			if((var_96_cvector | var_96_cvector) >= 2500.0) {
				cvector var_152_cvector;
				func_2318(var_152_cvector);
				var_1_object = var_152_cvector + var_96_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1628; //@nz

	}
}


// @pe
void func_3642(object var_105_object)
{
	bool var_106_bool; object var_107_object;
	func_2338(var_106_bool, var_107_object);
	if(var_106_bool != 0) {
		object var_110_object;
		func_2778(var_110_object);
		@ReportReputationChange(var_107_object, var_110_object, -0.1, true);
		func_3003(false);
	}
	func_2979();
	var_249_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


void func_2108(bool var_0_bool, bool var_74_bool)
{
	cvector var_77_cvector;
	@GetDirection(var_77_cvector);
	cvector var_79_cvector;
	func_2323(var_79_cvector, var_0_bool);
	cvector var_78_cvector;
	var_79_cvector = var_78_cvector;
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector;
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_2794(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= -0.34202012;
}


void func_2630(void)
{
	bool var_180_bool;
	@CameraSwitchToNormal();
	bool var_181_bool;
	func_3581(var_181_bool);
	if(var_181_bool != 0) {
	} else {
		@HasAnimationTrack(var_180_bool, "head");
		if(var_180_bool == 0) goto Label_2646;
		@UnlookAsync("head");
	}
Label_2646:
	
}


// @pe
void func_595(string var_47_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_48_string;
	var_47_string = var_48_string;
	func_2737(var_48_string);
	@PlayAnimation("all", var_47_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_47_string);
	@RemoveEnvelope();
}


void func_2131(bool var_0_bool, cvector var_36_cvector, float var_37_float)
{
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	cvector var_45_cvector;
	var_0_bool->GetPosition(var_45_cvector); //@t
	cvector var_46_cvector;
	@GetDirection(var_46_cvector);
	cvector var_50_cvector;
	cvector var_52_cvector;
	func_2784(var_52_cvector, (var_44_cvector - var_45_cvector));
	func_2784(var_50_cvector, (var_52_cvector + (var_46_cvector * 0.75)));
	cvector var_47_cvector;
	var_50_cvector = var_47_cvector;
	cvector var_48_cvector;
	float var_49_float;
	@FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, 32, 7000.0);
	if((var_49_float - 100) < 0)
		var_49_float = 0;
	var_36_cvector = var_48_cvector * var_49_float;
}


// @pe
void func_2647(bool var_186_bool, object var_187_object)
{
	object var_189_object;
	var_187_object = var_189_object;
	bool var_188_bool;
	func_2655(var_188_bool, var_189_object, (float)70);
	var_188_bool = var_186_bool;
}


void func_2655(bool var_188_bool, object var_189_object, float var_190_float)
{
	cvector var_200_cvector;
	var_189_object->GetPosition(var_200_cvector);
	float var_199_float;
	var_189_object->GetEyesHeight(var_199_float);
	var_207_float = GetByIndex(var_200_cvector, 1);
	SetByIndex(var_200_cvector, 1) = (var_207_float + var_199_float);
	cvector var_201_cvector;
	@GetPosition(var_201_cvector);
	@GetEyesHeight(var_199_float);
	var_208_float = GetByIndex(var_201_cvector, 1);
	SetByIndex(var_201_cvector, 1) = (var_208_float + var_199_float);
	cvector var_202_cvector = var_200_cvector - var_201_cvector;
	var_209_float = GetByIndex(var_202_cvector, 1);
	SetByIndex(var_202_cvector, 1) = (float)0;
	var_211_float = sqrt(var_202_cvector | var_202_cvector);
	var_202_cvector /= var_211_float;
	cvector var_203_cvector = -var_202_cvector;
	cvector var_204_cvector = (var_202_cvector * var_190_float) - [0.0, 10.0, 0.0];
	bool var_206_bool;
	@IsOverrideActive(var_206_bool);
	if(var_206_bool != 0)
		var_188_bool = false;
	@StopWorld();
	@CameraTransit((var_201_cvector + var_204_cvector), var_203_cvector);
	var_215_float = GetByIndex(var_204_cvector, 0);
	var_216_float = GetByIndex(var_204_cvector, 2);
	@Rotate(var_215_float, var_216_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_188_bool = true;
}


void func_3581(bool var_100_bool)
{
	var_100_bool = false;
}


void func_3178(int var_142_int, string var_143_string)
{
	int var_145_int;
	@GetInvItemByName(var_145_int, var_143_string);
	var_145_int = var_142_int;
}


// @pe
void func_3183(object var_23_object)
{
	object var_24_object;
	var_23_object = var_24_object;
	TaskCall(3);
	func_471(var_24_object);
	TaskReturn();
}


void func_2161(bool var_0_bool, object var_1_object, object var_2_object, object var_140_object)
{
	float var_150_float; cvector var_152_cvector; float var_153_float;
	cvector var_154_cvector;
	func_2131(var_153_float, var_154_cvector, 1.7453294);
	cvector var_149_cvector;
	var_154_cvector = var_149_cvector;
	if((var_149_cvector | var_149_cvector) < 2500.0) {
		cvector var_181_cvector;
		func_2131(var_153_float, var_181_cvector, 2.6179938);
		var_181_cvector = var_149_cvector;
		var_150_float = var_149_cvector | var_149_cvector;
		if(var_150_float < 2500.0) {
			var_186_float = sqrt(var_150_float);
			@Trace("Can't retreat, distance: " + var_186_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_189_float = GetByIndex(var_149_cvector, 0);
	var_190_float = GetByIndex(var_149_cvector, 2);
	@Rotate(var_189_float, var_190_float);
	cvector var_191_cvector;
	func_2318(var_191_cvector);
	@SetTimer(120, 0.5);
	
Label_2203:
	bool var_151_bool;
	@MovePoint((var_191_cvector + var_149_cvector), 1, var_151_bool);
	if(var_151_bool != 0) {
		if(var_140_object == null) {
			goto Label_2233;
		EMIT "GOTO 0x8b7";

		Label_2233:
			for(;;) {
				return 10;
		}
			cvector var_197_cvector;
			func_2131(var_153_float, var_197_cvector, 2.6179938);
			var_197_cvector = var_152_cvector;
			if((var_152_cvector | var_152_cvector) >= 2500.0) {
				cvector var_201_cvector;
				func_2318(var_201_cvector);
				var_1_object = var_201_cvector + var_152_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_2203; //@nz

	}
}


// @pe
void func_114(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_118_object, object var_119_object)
{
	var_0_bool = var_119_object;
	var_1_object = var_118_object;
	var_3_object = false;
	if(1 != 0) {
		func_186(var_119_object, "Neutral");
		var_0_bool->SetMessage(538136); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_138_bool = false;
		bool var_139_bool;
		func_2852(var_1_object);
		if(var_139_bool != 0) {
			bool var_147_bool;
			func_2864(var_147_bool, var_1_object);
			if(var_147_bool != 0)
				var_138_bool = true;
		}
		if(var_138_bool != 0)
			var_0_bool->AddReply(538137, 40009, 40008); //@t
		var_0_bool->AddReply(538165, -1, 40040); //@t
		goto Label_156;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x76";
	}
Label_156:
	bool var_164_bool;
	func_3581(var_164_bool);
	if(var_164_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_2706(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_185;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_185:
		return 0;

	}
	
}


void func_642(void)
{
	bool var_24_bool;
	func_2557(var_24_bool);
	if(!var_24_bool) //@nz
		func_3518();
}


void func_1160(void)
{
	int var_64_int; int var_65_int; bool var_66_bool; float var_67_float; bool var_68_bool;
	@WaitForAnimEnd();
	bool var_69_bool;
	func_2557(var_69_bool);
	if(!var_69_bool) //@nz
		return 14;
	int var_71_int;
	func_3363(var_71_int);
	int var_62_int;
	var_71_int = var_62_int;
	int var_63_int = 0;
	
	for(;;) {
		bool var_84_bool = false;
		if(var_63_int < 5) {
			bool var_87_bool;
			func_2557(var_87_bool);
			if(var_87_bool != 0)
				var_84_bool = true;
		}
		if(var_84_bool != 0) {
			@irand(var_64_int, 3);
			if(var_64_int == 0) {
				if(var_62_int == 0) goto Label_1207;
				@irand(var_65_int, var_62_int);
				string var_93_string; int var_94_int;
				var_65_int = var_94_int;
				func_3356(var_93_string, var_94_int);
				@PlayAnimation("all", var_93_string);
				@WaitForAnimEnd(var_66_bool);
				if(!var_66_bool) { //@nz
				} else {
			} else {
			if(var_64_int == 1) {
				@rand(var_67_float, 4);
				@Sleep((var_67_float + 1), var_68_bool);
				if(!var_68_bool) { //@nz
					goto Label_1236;
				}
			} else if(var_63_int != 0) {
				goto Label_1236;
			}
			}
					bool var_96_bool;
					func_1239(var_96_bool);
					var_97_bool = !var_96_bool; //@nz
					if(var_97_bool == 0) goto Label_1231;
			}
		}
	Label_1236:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_1231:
		@ResetAAS();
		var_63_int += 1;
	}
	
}


// @pe
void func_2702(void)
{
	@CameraSwitchToNormal();
}


void func_2706(string var_166_string)
{
	float var_169_float; float var_170_float;
	@lshGetAnimTimes(var_166_string, var_169_float, var_170_float);
	@lshPlayAnimation(var_169_float, var_170_float, false);
}


void func_2713(string var_129_string, bool var_130_bool)
{
	float var_135_float; float var_136_float;
	@lshGetAnimTimes(var_129_string, var_135_float, var_136_float);
	@lshPlayAnimation(var_135_float, var_136_float, var_130_bool);
}


// @pe
void func_3228(bool var_26_bool, object var_27_object, string var_28_string)
{
	if(var_28_string == "unholster") {
		bool var_31_bool; object var_32_object;
		var_27_object = var_32_object;
		func_3519(var_31_bool, var_32_object);
		var_31_bool = var_26_bool;
		return 0;
	EMIT "GOTO 0xcba";
	}
	if(var_28_string == "player_shot") {
		bool var_37_bool; object var_38_object;
		var_27_object = var_38_object;
		func_3532(var_37_bool, var_38_object);
		var_37_bool = var_26_bool;
		return 0;
	EMIT "GOTO 0xcba";
	}
	if(var_28_string == "battle") {
		bool var_54_bool; object var_55_object;
		var_27_object = var_55_object;
		func_3555(var_54_bool, var_55_object);
		var_54_bool = var_26_bool;
		return 0;
	}
	var_26_bool = false;
}


void func_2719(object var_91_object)
{
	float var_94_float;
	var_91_object->GetEyesHeight(var_94_float);
	cvector var_95_cvector = [0.0, 0.0, 0.0];
	var_96_float = GetByIndex(var_95_cvector, 1);
	var_94_float = var_96_float;
	SetByIndex(var_95_cvector, 1) = var_96_float;
	@LookAsync(var_91_object, "head", var_95_cvector);
}


void func_2730(void)
{
	bool var_25_bool;
	func_3581(var_25_bool);
	if(var_25_bool != 0)
		@lshStopSpeech();
}


void func_1711(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


void func_2737(string var_48_string)
{
	bool var_57_bool; int var_58_int; bool var_59_bool; int var_60_int; bool var_61_bool; float var_62_float; cvector var_63_cvector; cvector var_64_cvector;
	@IsExisting3DSound(var_57_bool, var_48_string);
	if(!var_57_bool) { //@nz
		var_58_int = 0;

		for(;;) {
			@IsExisting3DSound(var_59_bool, (var_48_string + (var_58_int + 1)));
			if(!var_59_bool) { //@nz
				break;
			Label_2757:
				@irand(var_60_int, var_58_int);
				var_48_string += (var_60_int + 1);
	}
			@Is3DSoundLoaded(var_61_bool, var_48_string);
			if(var_61_bool != 0) {
				@GetEyesHeight(var_62_float);
				@GetDirection(var_63_cvector);
				var_64_cvector = var_63_cvector * 50;
				var_75_float = GetByIndex(var_64_cvector, 1);
				SetByIndex(var_64_cvector, 1) = (var_75_float + var_62_float);
				@PlayGlobalSound(var_48_string, var_64_cvector);
			}
		}
		var_58_int += 1;
	}
	var_70_bool = !var_58_int; //@nz
	if(var_70_bool == 0) goto Label_2757;
}


// @pe
void func_186(object var_2_object, string var_125_string)
{
	bool var_126_bool;
	func_3581(var_126_bool);
	if(!var_126_bool) //@nz
		return 0;
	if(var_125_string == var_2_object)
		return 0;
	string var_129_string; bool var_130_bool;
	var_125_string = var_129_string;
	if(var_125_string == "")
		var_130_bool = false;
	else
		var_130_bool = true;
	func_2713(var_129_string, var_130_bool);
	var_2_object = var_125_string;
	
}


// @pe
void func_3260(object var_60_object, string var_61_string)
{
	if(var_61_string == "unholster") {
		object var_64_object;
		var_60_object = var_64_object;
		func_3524(var_64_object);
	} else if(var_61_string == "player_shot") {
			object var_139_object;
			var_60_object = var_139_object;
			func_3547(var_139_object);
	}
Label_3284:
	for(;;) {

	}
	
	if(!(var_61_string == "battle")) goto Label_3284;
	object var_207_object;
	var_60_object = var_207_object;
	func_3562(var_207_object);
}


void func_1727(bool var_0_bool, bool var_74_bool)
{
	cvector var_77_cvector;
	@GetDirection(var_77_cvector);
	cvector var_79_cvector;
	func_2323(var_79_cvector, var_0_bool);
	cvector var_78_cvector;
	var_79_cvector = var_78_cvector;
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector;
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_2794(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= -0.34202012;
}


void func_1743(bool var_0_bool, cvector var_36_cvector, float var_37_float)
{
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	cvector var_45_cvector;
	var_0_bool->GetPosition(var_45_cvector); //@t
	cvector var_46_cvector;
	@GetDirection(var_46_cvector);
	cvector var_50_cvector;
	cvector var_52_cvector;
	func_2784(var_52_cvector, (var_44_cvector - var_45_cvector));
	func_2784(var_50_cvector, (var_52_cvector + (var_46_cvector * 0.75)));
	cvector var_47_cvector;
	var_50_cvector = var_47_cvector;
	cvector var_48_cvector;
	float var_49_float;
	@FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, 32, 7000.0);
	if((var_49_float - 100) < 0)
		var_49_float = 0;
	var_36_cvector = var_48_cvector * var_49_float;
}


void func_3285(bool var_23_bool, object var_24_object)
{
	bool var_26_bool;
	bool var_27_bool = false;
	bool var_28_bool; object var_29_object;
	var_24_object = var_29_object;
	func_3519(var_28_bool, var_29_object);
	if(var_28_bool != 0) {
		bool var_32_bool; object var_33_object;
		func_2338(var_32_bool, var_33_object);
		if(var_32_bool != 0)
			var_27_bool = true;
	}
	if(var_27_bool != 0) {
		var_33_object->IsWeaponHolstered(var_26_bool);
		if(!var_26_bool) //@nz
			var_23_bool = true;
	}
	var_23_bool = false;
}


void func_1239(bool var_96_bool)
{
	var_96_bool = true;
}


void func_1241(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_2778(object var_110_object)
{
	object var_112_object;
	@self(var_112_object);
	var_112_object = var_110_object;
}
EMIT "Stack[-1] = 0";


void func_1246(bool var_0_bool, object var_83_object)
{
	var_0_bool = var_83_object;
	bool var_90_bool;
	func_1297(var_90_bool);
	cvector var_88_cvector;
	@GetDirection(var_88_cvector);
	cvector var_98_cvector;
	func_2323(var_98_cvector, var_0_bool);
	cvector var_89_cvector;
	var_98_cvector = var_89_cvector;
	float var_104_float; cvector var_105_cvector; cvector var_106_cvector;
	var_88_cvector = var_105_cvector;
	var_89_cvector = var_106_cvector;
	func_2821(var_104_float, var_105_cvector, var_106_cvector);
	if(var_104_float < 0) {
		func_2546(var_0_bool);
		var_90_bool = true;
	} else {
		@Sleep(1.5, var_90_bool);
	}
	if(var_90_bool != 0) {
		func_2546(var_0_bool);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


void func_2784(cvector var_54_cvector, cvector var_55_cvector)
{
	float var_63_float = sqrt(var_55_cvector | var_55_cvector);
	if(var_63_float < 0.000001)
		var_54_cvector = [0.0, 0.0, 0.0];
	var_54_cvector = var_55_cvector / var_63_float;
}


// @pe
void func_2794(float var_85_float, cvector var_86_cvector, cvector var_87_cvector)
{
	var_92_float = sqrt((var_86_cvector | var_86_cvector) * (var_87_cvector | var_87_cvector));
	var_85_float = (var_86_cvector | var_87_cvector) / var_92_float;
}


// @pe
void func_3308(object var_39_object)
{
	object var_40_object;
	var_39_object = var_40_object;
	func_3524(var_40_object);
}


void func_1773(bool var_0_bool, object var_1_object, object var_2_object, object var_112_object)
{
	float var_122_float; cvector var_124_cvector; float var_125_float;
	cvector var_126_cvector;
	func_1743(var_125_float, var_126_cvector, 1.7453294);
	cvector var_121_cvector;
	var_126_cvector = var_121_cvector;
	if((var_121_cvector | var_121_cvector) < 2500.0) {
		cvector var_158_cvector;
		func_1743(var_125_float, var_158_cvector, 2.6179938);
		var_158_cvector = var_121_cvector;
		var_122_float = var_121_cvector | var_121_cvector;
		if(var_122_float < 2500.0) {
			var_163_float = sqrt(var_122_float);
			@Trace("Can't retreat, distance: " + var_163_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_166_float = GetByIndex(var_121_cvector, 0);
	var_167_float = GetByIndex(var_121_cvector, 2);
	@Rotate(var_166_float, var_167_float);
	cvector var_168_cvector;
	func_2318(var_168_cvector);
	@SetTimer(120, 0.5);
	
Label_1815:
	bool var_123_bool;
	@MovePoint((var_168_cvector + var_121_cvector), 1, var_123_bool);
	if(var_123_bool != 0) {
		if(var_112_object == null) {
			goto Label_1845;
		EMIT "GOTO 0x733";

		Label_1845:
			for(;;) {
				return 10;
		}
			cvector var_176_cvector;
			func_1743(var_125_float, var_176_cvector, 2.6179938);
			var_176_cvector = var_124_cvector;
			if((var_124_cvector | var_124_cvector) >= 2500.0) {
				cvector var_180_cvector;
				func_2318(var_180_cvector);
				var_1_object = var_180_cvector + var_124_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1815; //@nz

	}
}


void func_2286(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


// @pe
void func_3314(object var_25_object)
{
	bool var_26_bool; object var_27_object;
	func_2338(var_26_bool, var_27_object);
	if(var_26_bool != 0) {
		object var_30_object;
		func_2778(var_30_object);
		@ReportReputationChange(var_27_object, var_30_object, -0.05);
	}
}


// @pe
void func_2802(float var_75_float, cvector var_76_cvector, cvector var_77_cvector)
{
	var_78_float = GetByIndex(var_76_cvector, 0);
	var_79_float = GetByIndex(var_77_cvector, 0);
	var_81_float = GetByIndex(var_76_cvector, 2);
	var_82_float = GetByIndex(var_77_cvector, 2);
	var_75_float = (var_78_float * var_79_float) + (var_81_float * var_82_float);
}


// @pe
void func_2811(float var_84_float, cvector var_85_cvector)
{
	var_86_float = GetByIndex(var_85_cvector, 0);
	var_87_float = GetByIndex(var_85_cvector, 0);
	var_89_float = GetByIndex(var_85_cvector, 2);
	var_90_float = GetByIndex(var_85_cvector, 2);
	var_84_float = sqrt((var_86_float * var_87_float) + (var_89_float * var_90_float));
}


void func_2302(bool var_0_bool, bool var_74_bool)
{
	cvector var_77_cvector;
	@GetDirection(var_77_cvector);
	cvector var_79_cvector;
	func_2323(var_79_cvector, var_0_bool);
	cvector var_78_cvector;
	var_79_cvector = var_78_cvector;
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector;
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_2794(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= -0.34202012;
}


void func_3327(bool var_23_bool, string var_24_string)
{
	object var_26_object;
	if(var_24_string == "heal") {
		@FindActor(var_26_object, "player");
		bool var_30_bool; object var_31_object;
		var_26_object = var_31_object;
		func_3568(var_31_object);
		var_30_bool = var_23_bool;
	EMIT "Stack[-1] = 0";
	}
	var_23_bool = false;
}


// @pe
void func_2821(float var_72_float, cvector var_73_cvector, cvector var_74_cvector)
{
	cvector var_76_cvector;
	var_73_cvector = var_76_cvector;
	cvector var_77_cvector;
	var_74_cvector = var_77_cvector;
	float var_75_float;
	func_2802(var_75_float, var_76_cvector, var_77_cvector);
	float var_84_float; cvector var_85_cvector;
	var_73_cvector = var_85_cvector;
	func_2811(var_84_float, var_85_cvector);
	float var_93_float; cvector var_94_cvector;
	var_74_cvector = var_94_cvector;
	func_2811(var_93_float, var_94_cvector);
	var_72_float = var_75_float / (var_84_float * var_93_float);
}


void func_2318(cvector var_94_cvector)
{
	cvector var_96_cvector;
	@GetPosition(var_96_cvector);
	var_96_cvector = var_94_cvector;
}


void func_3343(string var_34_string)
{
	object var_36_object;
	if(var_34_string == "heal") {
		@FindActor(var_36_object, "player");
		object var_40_object;
		var_36_object = var_40_object;
		func_3571();
		var_36_object = null;
	}
}


void func_1297(bool var_0_bool)
{
	func_2719(var_0_bool);
}


void func_2323(cvector var_56_cvector, object var_57_object)
{
	cvector var_60_cvector;
	@GetPosition(var_60_cvector);
	cvector var_61_cvector;
	var_57_object->GetPosition(var_61_cvector);
	var_56_cvector = var_61_cvector - var_60_cvector;
}


void func_2838(int var_141_int, string var_142_string)
{
	int var_144_int;
	@GetVariable(var_142_string, var_144_int);
	var_144_int = var_141_int;
}


void func_2330(float var_42_float, object var_43_object)
{
	cvector var_47_cvector;
	@GetPosition(var_47_cvector);
	cvector var_48_cvector;
	var_43_object->GetPosition(var_48_cvector);
	var_42_float = (var_48_cvector - var_47_cvector) | (var_48_cvector - var_47_cvector);
}


void func_2843(int var_124_int)
{
	float var_126_float;
	@GetGameTime(var_126_float);
	var_124_int = 1 + (var_126_float / 24);
}


void func_3356(string var_77_string, int var_78_int)
{
	string var_80_string = "idle";
	if(var_78_int != 0)
		var_80_string += var_78_int;
	var_80_string = var_77_string;
}


void func_2338(bool var_106_bool, object var_107_object)
{
	bool var_109_bool;
	@IsPlayerActor(var_107_object, var_109_bool);
	var_109_bool = var_106_bool;
}


void func_3363(int var_71_int)
{
	int var_74_int; bool var_75_bool;
	var_74_int = 0;
	
	for(;;) {
		string var_77_string; int var_78_int;
		var_74_int = var_78_int;
		func_3356(var_77_string, var_78_int);
		@HasAnimation(var_75_bool, "all", var_77_string);
		if(!var_75_bool) //@nz
			break;
		var_74_int += 1;
	}
	var_74_int = var_71_int;
}


// @pe
void func_2852(bool var_139_bool)
{
	int var_141_int;
	func_2838(var_141_int, "branch");
	if(var_141_int == 0) {
		var_139_bool = true;
		return 0;
	}
	var_139_bool = false;
}


void func_2343(bool var_51_bool, object var_52_object, string var_53_string)
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
void func_2864(bool var_147_bool, object var_148_object)
{
	object var_150_object;
	var_148_object = var_150_object;
	func_2874(var_150_object);
	bool var_149_bool;
	if(var_149_bool != 0) {
		var_147_bool = true;
		return 0;
	}
	var_147_bool = false;
}


void func_2355(bool var_44_bool, object var_45_object)
{
	bool var_47_bool;
	var_45_object->IsDead(var_47_bool);
	var_47_bool = var_44_bool;
}


// @pe
void func_3380(int var_65_int)
{
	bool var_67_bool;
	func_3627(var_67_bool);
	if(var_67_bool != 0)
		var_65_int = 2;
	else
		var_65_int = 0;
	
}


void func_2360(bool var_33_bool, object var_34_object)
{
	if(var_34_object == null) {
		var_33_bool = false;
		return 4;
	}
	bool var_40_bool = false;
	var_43_bool = IsFuncExist(var_34_object, "IsDead", 1);
	if(var_43_bool != 0) {
		bool var_44_bool; object var_45_object;
		var_34_object = var_45_object;
		func_2355(var_44_bool, var_45_object);
		if(var_44_bool != 0)
			var_40_bool = true;
	}
	if(var_40_bool != 0) {
		var_33_bool = false;
		return 4;
	}
	object var_37_object;
	@GetScene(var_37_object);
	if(var_37_object == null) {
		var_33_bool = false;
		return 4;
	}
	object var_38_object;
	var_34_object->GetScene(var_38_object);
	if(var_37_object != var_38_object) {
		var_33_bool = false;
		return 4;
	}
	var_33_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_2874(bool var_149_bool)
{
	int var_151_int;
	func_2843(var_151_int);
	var_149_bool = var_151_int == 7;
}


// @pe
void func_3389(object var_82_object)
{
	object var_83_object;
	var_82_object = var_83_object;
	TaskCall(6);
	func_1246(var_84_object, var_83_object);
	TaskReturn();
}


void func_2881(int var_109_int)
{
	int var_111_int;
	@GetVariable("branch", var_111_int);
	if(var_111_int == 0) {
		var_109_int = 1;
		return 2;
	EMIT "GOTO 0xb50";
	}
	if(var_111_int == 1) {
		var_109_int = 2;
		return 2;
	}
	var_109_int = 3;
}


// @pe
void func_3397(int var_34_int, object var_35_object)
{
	object var_37_object;
	var_35_object = var_37_object;
	bool var_36_bool;
	func_2396(var_36_bool, var_37_object);
	if(var_36_bool != 0)
		var_34_int = 2;
	else
		var_34_int = 0;
	
}


void func_838(object var_2_object)
{
	@KillTimer(110);
	var_2_object = false;
	func_974(var_21_cvector, var_22_bool);
}


void func_846(object var_2_object)
{
	@KillTimer(110);
	var_2_object = false;
	func_981(var_26_bool, var_27_int);
}


// @pe
void func_3407(object var_76_object)
{
	object var_77_object;
	var_76_object = var_77_object;
	TaskCall(7);
	func_1521(var_77_object);
	TaskReturn();
}


void func_2898(int var_229_int)
{
	int var_231_int;
	@GetVariable("branch", var_231_int);
	var_231_int = var_229_int;
}


// @pe
void func_3415(int var_74_int, object var_75_object)
{
	object var_78_object;
	var_75_object = var_78_object;
	bool var_77_bool;
	func_2396(var_77_bool, var_78_object);
	if(var_77_bool != 0)
		var_74_int = 2;
	else
		var_74_int = 0;
	
}


void func_2904(float var_68_float)
{
	object var_71_object;
	@FindActor(var_71_object, "player");
	if(!var_71_object) //@nz
		var_68_float = 0;
	float var_72_float;
	var_71_object->GetProperty("reputation", var_72_float);
	var_72_float = var_68_float;
}
EMIT "Stack[-2] = 0";


void func_2396(bool var_29_bool, object var_30_object)
{
	object var_34_object;
	var_30_object = var_34_object;
	bool var_33_bool;
	func_2360(var_33_bool, var_34_object);
	if(!var_33_bool) { //@nz
		var_29_bool = false;
		return 2;
	}
	bool var_51_bool; object var_52_object;
	func_2343(var_51_bool, var_52_object, "noaccess");
	if(!var_51_bool) { //@nz
		var_29_bool = true;
		return 2;
	}
	int var_32_int;
	var_52_object->GetProperty("noaccess", var_32_int);
	var_29_bool = var_32_int == 0;
}


void func_863(object var_2_object, object var_23_object)
{
	bool var_28_bool; object var_29_object;
	func_2396(var_28_bool, var_29_object);
	if(!var_28_bool) //@nz
		return 4;
	if(var_2_object != 0)
		return 4;
	bool var_26_bool;
	@IsPlayerActor(var_29_object, var_26_bool);
	if(!var_26_bool) //@nz
		return 4;
	int var_65_int; object var_66_object;
	var_23_object = var_66_object;
	func_3380(var_66_object);
	int var_27_int;
	var_65_int = var_27_int;
	if(var_27_int > 0) {
		if(var_27_int > 1)
			func_846(var_27_int);
		object var_82_object;
		var_23_object = var_82_object;
		func_3389(var_82_object);
		var_2_object = true;
		@SetTimer(110, 10.0);
	}
}


// @pe
void func_3425(object var_111_object)
{
	object var_112_object;
	var_111_object = var_112_object;
	TaskCall(8);
	func_1773(var_113_object, var_114_cvector, var_115_bool, var_112_object);
	TaskReturn();
}


// @pe
void func_2918(object var_39_object)
{
	int var_40_int;
	func_2898(var_40_int);
	if(var_40_int == 1)
		@WorkWithCorpse(var_39_object);
	else
		@Barter(var_39_object);
	
}


void func_3433(bool var_31_bool, object var_32_object, object var_33_object, float var_34_float)
{
	object var_40_object;
	var_33_object = var_40_object;
	bool var_39_bool;
	func_2343(var_39_bool, var_40_object, "class");
	if(!var_39_bool) { //@nz
		var_31_bool = false;
		return 4;
	}
	string var_37_string;
	var_33_object->GetProperty("class", var_37_string);
	if(var_37_string == "rat") {
		var_31_bool = false;
		return 4;
	EMIT "GOTO 0xd87";
	}
	if(var_37_string == "rat_big") {
		var_31_bool = false;
		return 4;
	EMIT "GOTO 0xd87";
	}
	if(var_37_string == "dog") {
		var_31_bool = false;
		return 4;
	}
	bool var_38_bool;
	@CanSee(var_38_bool, var_32_object);
	bool var_56_bool = true;
	if(var_38_bool != 1) {
		float var_58_float; object var_59_object;
		var_32_object = var_59_object;
		func_2330(var_58_float, var_59_object);
		var_67_bool = var_58_float <= (var_34_float * var_34_float);
		if(var_67_bool != 1)
			var_56_bool = false;
	}
	if(var_56_bool != 0) {
		var_31_bool = true;
		return 4;
	}
	@CanSee(var_38_bool, var_33_object);
	bool var_68_bool = true;
	if(var_38_bool != 1) {
		float var_70_float; object var_71_object;
		var_33_object = var_71_object;
		func_2330(var_70_float, var_71_object);
		var_73_bool = var_70_float <= (var_34_float * var_34_float);
		if(var_73_bool != 1)
			var_68_bool = false;
	}
	if(var_68_bool != 0) {
		var_31_bool = true;
		return 4;
	}
	var_31_bool = false;
}


void func_1898(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


void func_2931(int var_121_int, int var_122_int)
{
	if(var_121_int > var_122_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_134_int = 0;
	if(var_121_int != var_122_int) {
		@irand(var_134_int, (var_122_int - var_121_int));
	} else if(var_121_int == 0) {
		return 4;
	}
	var_134_int += var_121_int;
	if(var_134_int == 0)
		return 4;
	int var_142_int;
	func_3178(var_142_int, "Money");
	bool var_135_bool;
	@AddItem(var_135_bool, var_142_int, 0, var_134_int);
	
}


void func_2420(object var_39_object)
{
	string var_53_string;
	if(var_39_object == null)
		return 14;
	bool var_47_bool;
	@IsDead(var_47_bool);
	if(var_47_bool != 0)
		return 14;
	int var_48_int;
	@GetSecondaryAnimationType(var_48_int);
	if(var_48_int < 0)
		return 14;
	cvector var_49_cvector;
	var_39_object->GetPosition(var_49_cvector);
	cvector var_50_cvector;
	@GetPosition(var_50_cvector);
	cvector var_51_cvector;
	@GetDirection(var_51_cvector);
	cvector var_52_cvector = var_50_cvector - var_49_cvector;
	var_58_float = GetByIndex(var_52_cvector, 0);
	var_59_float = GetByIndex(var_51_cvector, 0);
	var_61_float = GetByIndex(var_52_cvector, 2);
	var_62_float = GetByIndex(var_51_cvector, 2);
	if(((var_58_float * var_59_float) + (var_61_float * var_62_float)) >= 0)
		var_53_string = "fhit";
	else
		var_53_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_53_string + "1"), (var_53_string + "2"), -10);
	
}


void func_1914(bool var_0_bool, bool var_74_bool)
{
	cvector var_77_cvector;
	@GetDirection(var_77_cvector);
	cvector var_79_cvector;
	func_2323(var_79_cvector, var_0_bool);
	cvector var_78_cvector;
	var_79_cvector = var_78_cvector;
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector;
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_2794(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= -0.34202012;
}


void func_903(bool var_0_bool, object var_1_object)
{
	float var_34_float; cvector var_35_cvector; cvector var_36_cvector; bool var_37_bool; object var_38_object; bool var_39_bool;
	@rand(var_34_float, 0.5);
	@Sleep(var_34_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_915:
				@GetPosition(var_36_cvector);
				float var_43_float;
				func_962(var_43_float);
				@GetRandomPFPointInCircle(var_35_cvector, var_36_cvector, var_43_float, var_37_bool);
				if(var_37_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_915;
			}
				var_1_object = false;
		}
		}
		goto Label_931;

	Label_931:
		object var_47_object; cvector var_48_cvector;
		var_35_cvector = var_48_cvector;
		func_990(var_47_object, var_48_cvector);
		var_47_object = var_38_object;
		if(var_38_object != null) {
			@RotatePath(var_38_object, var_39_bool);
			if(var_39_bool != 0) {
				bool var_53_bool;
				func_988(var_53_bool);
				@FollowPath(var_38_object, var_53_bool, var_39_bool);
				var_38_object = null;
				if(var_39_bool != 0) {
					TaskCall(5);
					func_1160();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_38_object = null;
	}
	
}


void func_1937(bool var_0_bool, cvector var_36_cvector, float var_37_float)
{
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	cvector var_45_cvector;
	var_0_bool->GetPosition(var_45_cvector); //@t
	cvector var_46_cvector;
	@GetDirection(var_46_cvector);
	cvector var_50_cvector;
	cvector var_52_cvector;
	func_2784(var_52_cvector, (var_44_cvector - var_45_cvector));
	func_2784(var_50_cvector, (var_52_cvector + (var_46_cvector * 0.75)));
	cvector var_47_cvector;
	var_50_cvector = var_47_cvector;
	cvector var_48_cvector;
	float var_49_float;
	@FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, 32, 7000.0);
	if((var_49_float - 100) < 0)
		var_49_float = 0;
	var_36_cvector = var_48_cvector * var_49_float;
}


void func_2962(string var_235_string)
{
	object var_239_object;
	@CreateInvItem(var_239_object);
	var_239_object->SetItemName(var_235_string);
	var_239_object->SetProperty("Organ", 1);
	int var_240_int;
	var_239_object->GetItemID(var_240_int);
	bool var_241_bool;
	@AddItem(var_241_bool, var_239_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_2464(object var_26_object, int var_27_int, float var_28_float)
{
	cvector var_38_cvector; object var_39_object; int var_40_int; bool var_41_bool; cvector var_42_cvector; cvector var_43_cvector;
	bool var_47_bool = false;
	bool var_48_bool = false;
	if(var_26_object != 0) {
		if(var_27_int != 4)
			var_48_bool = true;
	}
	if(var_48_bool != 0) {
		if(var_27_int != 5)
			var_47_bool = true;
	}
	if(var_47_bool != 0) {
		cvector var_54_cvector; cvector var_55_cvector;
		cvector var_56_cvector; object var_57_object;
		var_26_object = var_57_object;
		func_2323(var_56_cvector, var_57_object);
		var_56_cvector = var_55_cvector;
		func_2784(var_54_cvector, var_55_cvector);
		var_54_cvector = var_38_cvector;
		@CreateVectorVector(var_39_object);
		var_40_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_40_int), var_41_bool, var_42_cvector, var_43_cvector);
			if(!var_41_bool) { //@nz
				break;
			Label_2526:
				var_39_object = null;
	}
			object var_116_object;
			var_26_object = var_116_object;
			func_2420(var_116_object);
		}
		if((var_43_cvector | var_38_cvector) >= 0.70710677)
			var_39_object->add(var_42_cvector);
		var_40_int += 1;
	}
	int var_44_int;
	var_39_object->size(var_44_int);
	if(var_44_int == 0) goto Label_2526;
	int var_45_int;
	@irand(var_45_int, var_44_int);
	cvector var_46_cvector;
	var_39_object->get(var_46_cvector, var_45_int);
	object var_71_object; int var_72_int; float var_73_float; cvector var_74_cvector; cvector var_75_cvector;
	var_26_object = var_71_object;
	var_27_int = var_72_int;
	var_28_float = var_73_float;
	var_46_cvector = var_74_cvector;
	var_75_cvector = -var_38_cvector;
	func_2532(var_73_float, var_74_cvector, var_75_cvector);
}


void func_2979(void)
{
	int var_229_int;
	func_2898(var_229_int);
	if(var_229_int != 1) {
	}
	func_2962("liver");
	func_2962("kidney");
	func_2962("heart");
	func_2962("blood");
}


void func_1445(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


// @pe
void func_3499(int var_25_int)
{
	var_25_int = 0;
}


// @pe
void func_3502(void)
{
}


void func_1967(bool var_0_bool, object var_1_object, object var_2_object, object var_41_object)
{
	float var_51_float; cvector var_53_cvector; float var_54_float;
	cvector var_55_cvector;
	func_1937(var_54_float, var_55_cvector, 1.7453294);
	cvector var_50_cvector;
	var_55_cvector = var_50_cvector;
	if((var_50_cvector | var_50_cvector) < 2500.0) {
		cvector var_87_cvector;
		func_1937(var_54_float, var_87_cvector, 2.6179938);
		var_87_cvector = var_50_cvector;
		var_51_float = var_50_cvector | var_50_cvector;
		if(var_51_float < 2500.0) {
			var_92_float = sqrt(var_51_float);
			@Trace("Can't retreat, distance: " + var_92_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_95_float = GetByIndex(var_50_cvector, 0);
	var_96_float = GetByIndex(var_50_cvector, 2);
	@Rotate(var_95_float, var_96_float);
	cvector var_97_cvector;
	func_2318(var_97_cvector);
	@SetTimer(120, 0.5);
	
Label_2009:
	bool var_52_bool;
	@MovePoint((var_97_cvector + var_50_cvector), 1, var_52_bool);
	if(var_52_bool != 0) {
		if(var_41_object == null) {
			goto Label_2039;
		EMIT "GOTO 0x7f5";

		Label_2039:
			for(;;) {
				return 10;
		}
			cvector var_105_cvector;
			func_1937(var_54_float, var_105_cvector, 2.6179938);
			var_105_cvector = var_53_cvector;
			if((var_53_cvector | var_53_cvector) >= 2500.0) {
				cvector var_109_cvector;
				func_2318(var_109_cvector);
				var_1_object = var_109_cvector + var_53_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_2009; //@nz

	}
}


// @pe
void func_3504(int var_209_int)
{
	var_209_int = 0;
}


// @pe
void func_3507(void)
{
}


// @pe
void func_3509(int var_25_int)
{
	var_25_int = 2;
}


// @pe
void func_3512(object var_33_object)
{
	object var_34_object;
	func_3587(var_34_object, var_34_object);
}


void func_3003(bool var_115_bool)
{
	int var_118_int; bool var_119_bool;
	if(var_115_bool != 0) {
		int var_124_int;
		func_2843(var_124_int);
		func_2931(0, (100 + (var_124_int * 100)));
		@irand(var_118_int, 8);
		if(var_118_int == 0) {
			int var_152_int;
			func_3178(var_152_int, "lemon");
			@AddItem(var_119_bool, var_152_int, 0, 1);
		} else {
				if(var_118_int == 1) {
					int var_158_int;
					func_3178(var_158_int, "rusk");
					@AddItem(var_119_bool, var_158_int, 0, 1);
			}

			for(;;) {
				} else {
			if(var_118_int == 2) {
				int var_164_int;
				func_3178(var_164_int, "hook");
				@AddItem(var_119_bool, var_164_int, 0, 1);
			} else if(var_118_int == 4) {
				int var_170_int;
				func_3178(var_170_int, "syringe");
				@AddItem(var_119_bool, var_170_int, 0, 1);
			} else if(var_118_int == 5) {
				int var_176_int;
				func_3178(var_176_int, "watch");
				@AddItem(var_119_bool, var_176_int, 0, 1);
			} else if(var_118_int == 6) {
				int var_182_int;
				func_3178(var_182_int, "razor");
				@AddItem(var_119_bool, var_182_int, 0, 1);
			}
	}
		int var_189_int;
		func_2843(var_189_int);
		func_2931(0, (50 + (var_189_int * 50)));
		@irand(var_118_int, 7);
		if(var_118_int == 0) {
			int var_195_int;
			func_3178(var_195_int, "beads");
			@AddItem(var_119_bool, var_195_int, 0, 1);
		} else if(var_118_int == 1) {
			int var_201_int;
			func_3178(var_201_int, "bracelet");
			@AddItem(var_119_bool, var_201_int, 0, 1);
		} else if(var_118_int == 2) {
			int var_207_int;
			func_3178(var_207_int, "ear_ring");
			@AddItem(var_119_bool, var_207_int, 0, 1);
		} else if(var_118_int == 3) {
			int var_213_int;
			func_3178(var_213_int, "gold_ring");
			@AddItem(var_119_bool, var_213_int, 0, 1);
		} else if(var_118_int == 4) {
			int var_219_int;
			func_3178(var_219_int, "silver_ring");
			@AddItem(var_119_bool, var_219_int, 0, 1);
		} else if(var_118_int == 5) {
			int var_225_int;
			func_3178(var_225_int, "flower");
			@AddItem(var_119_bool, var_225_int, 0, 1);
			}
		}
		return 4;

	}
	
}


void func_3518(void)
{
}


void func_3519(bool var_28_bool, object var_29_object)
{
	bool var_31_bool;
	@CanSee(var_31_bool, var_29_object);
	var_31_bool = var_28_bool;
}


void func_962(float var_43_float)
{
	float var_45_float;
	@GetCameraFarDistance(var_45_float);
	var_45_float = var_43_float;
}


// @pe
void func_3524(object var_40_object)
{
	object var_41_object;
	var_40_object = var_41_object;
	TaskCall(9);
	func_1967(var_42_object, var_43_cvector, var_44_bool, var_41_object);
	TaskReturn();
}


void func_3532(bool var_37_bool, object var_38_object)
{
	bool var_40_bool;
	@CanSee(var_40_bool, var_38_object);
	var_37_bool = true;
	if(var_40_bool != 1) {
		float var_42_float; object var_43_object;
		var_38_object = var_43_object;
		func_2330(var_42_float, var_43_object);
		var_51_bool = var_42_float <= 4000000;
		if(var_51_bool != 1)
			var_37_bool = false;
	}
}


void func_974(bool var_0_bool, object var_1_object)
{
	var_0_bool = true;
	var_1_object = false;
	@Stop();
	@StopGroup0();
}


void func_981(bool var_0_bool, object var_1_object)
{
	var_0_bool = true;
	var_1_object = true;
	@Stop();
	@StopGroup0();
}


// @pe
void func_471(object var_24_object)
{
	object var_25_object;
	var_24_object = var_25_object;
	func_504(var_25_object);
	object var_105_object;
	var_24_object = var_105_object;
	func_3642(var_105_object);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_3547(object var_139_object)
{
	object var_140_object;
	var_139_object = var_140_object;
	TaskCall(10);
	func_2161(var_141_object, var_142_cvector, var_143_bool, var_140_object);
	TaskReturn();
}


void func_988(bool var_53_bool)
{
	var_53_bool = false;
}


void func_990(object var_47_object, cvector var_48_cvector)
{
	object var_50_object;
	@FindShiftedPathTo(var_50_object, var_48_cvector);
	var_50_object = var_47_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3555(bool var_54_bool, object var_55_object)
{
	object var_57_object;
	var_55_object = var_57_object;
	bool var_56_bool;
	func_3532(var_56_bool, var_57_object);
	var_56_bool = var_54_bool;
}


void func_2532(object var_28_object, cvector var_31_cvector, cvector var_32_cvector)
{
	object var_35_object;
	@GetScene(var_35_object);
	object var_36_object;
	@AddActorByType(var_36_object, "scripted", var_35_object, var_31_cvector, var_32_cvector, "blood_dir.xml");
	object var_39_object;
	var_28_object = var_39_object;
	func_2420(var_39_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_3562(object var_207_object)
{
	object var_208_object;
	var_207_object = var_208_object;
	func_3547(var_208_object);
}


// @pe
void func_3568(bool var_30_bool)
{
	var_30_bool = false;
}


// @pe
void func_1521(object var_77_object)
{
	@Face(var_77_object);
	@PlayAnimation("all", "attack_on");
	@WaitForAnimEnd();
	@PlayAnimation("all", "attack_stay");
	@WaitForAnimEnd();
	@PlayAnimation("all", "attack_off");
	@WaitForAnimEnd();
	@StopAsync();
	object var_87_object;
	func_1586(var_79_cvector, var_80_bool, var_87_object, var_87_object);
}


void func_2546(object var_98_object)
{
	cvector var_102_cvector;
	var_98_object->GetPosition(var_102_cvector);
	cvector var_103_cvector;
	@GetPosition(var_103_cvector);
	cvector var_104_cvector = var_102_cvector - var_103_cvector;
	var_105_float = GetByIndex(var_104_cvector, 0);
	var_106_float = GetByIndex(var_104_cvector, 2);
	@RotateAsync(var_105_float, var_106_float);
}


// @pe
void func_3571(void)
{
}


void func_3573(int var_106_int)
{
	var_106_int = 515555;
}


void func_3575(int var_105_int)
{
	var_105_int = 503340;
}


void func_504(object var_25_object)
{
	cvector var_36_cvector; cvector var_37_cvector; cvector var_38_cvector; cvector var_39_cvector; string var_40_string; object var_41_object; bool var_42_bool; bool var_43_bool; float var_44_float; cvector var_45_cvector;
	if(var_25_object == null) {
		func_595("fdie");
	} else {
		var_25_object->GetPosition(var_36_cvector);
		@GetPosition(var_37_cvector);
		@GetDirection(var_38_cvector);
		var_39_cvector = var_37_cvector - var_36_cvector;
		var_79_float = GetByIndex(var_39_cvector, 0);
		var_80_float = GetByIndex(var_38_cvector, 0);
		var_82_float = GetByIndex(var_39_cvector, 2);
		var_83_float = GetByIndex(var_38_cvector, 2);
		if(((var_79_float * var_80_float) + (var_82_float * var_83_float)) >= 0)
			var_40_string = "fdie";
		else
			var_40_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_25_object = var_41_object;
		var_90_bool = IsFuncExist(var_25_object, "GetScriptProperty", 2);
		if(var_90_bool != 0) {
			var_25_object->HasScriptProperty(var_42_bool, "Owner");
			if(var_42_bool != 0) {
				var_25_object->GetScriptProperty(var_41_object, "Owner");
				if(var_41_object == null)
					var_25_object = var_41_object;
			}
		}
		var_97_bool = IsFuncExist(var_41_object, "@GetEyesHeight", 1);
		if(var_97_bool != 0) {
			var_41_object->GetEyesHeight(var_44_float);
			var_45_cvector = [0.0, 0.0, 0.0];
			var_98_float = GetByIndex(var_45_cvector, 1);
			var_44_float = var_98_float;
			SetByIndex(var_45_cvector, 1) = var_98_float;
			@LookAsync(var_25_object, "head", var_45_cvector);
			var_43_bool = true;
		} else {
			var_43_bool = false;

		}
		string var_100_string;
		var_40_string = var_100_string;
		func_2737(var_100_string);
		@PlayAnimation("all", var_40_string);
		@WaitForAnimEnd();
		if(var_43_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_40_string);
		@RemoveEnvelope();
		var_41_object = null;
	}
	
}


void func_3577(string var_107_string)
{
	var_107_string = "ui/NPC_Citizen2.png";
}


void func_3579(string var_108_string)
{
	var_108_string = "ui/NPC_Citizen2_b.png";
}


void func_2557(bool var_24_bool)
{
	bool var_26_bool;
	@IsLoaded(var_26_bool);
	var_26_bool = var_24_bool;
}


void func_3583(void)
{
	var_23_bool = GlobalVars[0];
	GlobalVars[0] = false;
}


