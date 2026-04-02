// @GLOBALS: 0:bool:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		if(1 != 0) {
			func_2486();
			if(var_21_bool == 40043) {
				object var_26_object = var_1_object;
				func_2622(var_0_object);
			}
			if(var_20_cvector == 40042) {
				func_217(var_21_bool, "Neutral");
				var_0_object->SetMessage(538167); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538168, -1, 40043); //@t
				bool var_47_bool = false;
				bool var_48_bool;
				func_2651(var_48_bool, var_1_object);
				if(var_48_bool != 0) {
					bool var_59_bool;
					func_2627(var_1_object);
					if(var_59_bool != 0)
						var_47_bool = true;
				}
				if(var_47_bool != 0)
					var_0_object->AddReply(538169, 40045, 40044); //@t
				bool var_70_bool = false;
				bool var_71_bool = false;
				bool var_72_bool;
				func_2651(var_72_bool, var_1_object);
				if(var_72_bool != 0) {
					bool var_74_bool;
					func_2671(var_74_bool, var_1_object);
					if(var_74_bool != 0)
						var_71_bool = true;
				}
				if(var_71_bool != 0) {
					bool var_85_bool;
					func_2627(var_1_object);
					if(var_85_bool != 0)
						var_70_bool = true;
				}
				if(var_70_bool != 0)
					var_0_object->AddReply(538179, 40055, 40054); //@t
				bool var_90_bool = false;
				bool var_91_bool;
				func_2661(var_91_bool, var_1_object);
				if(var_91_bool != 0) {
					bool var_97_bool;
					func_2627(var_1_object);
					if(var_97_bool != 0)
						var_90_bool = true;
				}
				if(var_90_bool != 0)
					var_0_object->AddReply(538190, 40067, 40066); //@t
				bool var_102_bool = true;
				bool var_103_bool;
				func_2627(var_1_object);
				if(var_103_bool != 1) {
					bool var_105_bool;
					func_2639(var_1_object);
					if(var_105_bool != 1)
						var_102_bool = false;
				}
				if(var_102_bool != 0)
					var_0_object->AddReply(538204, -1, 40081); //@t
				var_0_object->AddReply(538205, -1, 40082); //@t
				return 0;
			}
			if(var_20_cvector == 40067) {
				func_217(var_21_bool, "Neutral");
				var_0_object->SetMessage(538191); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538192, 40069, 40068); //@t
				var_0_object->AddReply(538203, 40069, 40079); //@t
				return 0;
			}
			if(var_20_cvector == 40069) {
				func_217(var_21_bool, "Neutral");
				var_0_object->SetMessage(538193); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538194, 40071, 40070); //@t
				var_0_object->AddReply(538202, -1, 40078); //@t
				return 0;
			}
			if(var_20_cvector == 40071) {
				func_217(var_21_bool, "Neutral");
				var_0_object->SetMessage(538195); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538196, 40073, 40072); //@t
				var_0_object->AddReply(538201, -1, 40077); //@t
				return 0;
			}
			if(var_20_cvector == 40073) {
				func_217(var_21_bool, "Neutral");
				var_0_object->SetMessage(538197); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538198, -1, 40074); //@t
				var_0_object->AddReply(538199, -1, 40075); //@t
				var_0_object->AddReply(538200, -1, 40076); //@t
				return 0;
			}
			if(var_20_cvector == 40055) {
				func_217(var_21_bool, "Neutral");
				var_0_object->SetMessage(538180); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538181, 40057, 40056); //@t
				var_0_object->AddReply(538188, 40057, 40063); //@t
				var_0_object->AddReply(538189, -1, 40065); //@t
				return 0;
			}
			if(var_20_cvector == 40057) {
				func_217(var_21_bool, "Neutral");
				var_0_object->SetMessage(538182); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538183, 40059, 40058); //@t
				var_0_object->AddReply(538187, -1, 40062); //@t
				return 0;
			}
			if(var_20_cvector == 40059) {
				func_217(var_21_bool, "Neutral");
				var_0_object->SetMessage(538184); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538185, -1, 40060); //@t
				var_0_object->AddReply(538186, -1, 40061); //@t
				return 0;
			}
			if(var_20_cvector == 40045) {
				func_217(var_21_bool, "Neutral");
				var_0_object->SetMessage(538170); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538171, 40047, 40046); //@t
				var_0_object->AddReply(538175, 40051, 40050); //@t
				var_0_object->AddReply(538178, -1, 40053); //@t
				return 0;
			}
			if(var_20_cvector == 40051) {
				func_217(var_21_bool, "Neutral");
				var_0_object->SetMessage(538176); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538177, -1, 40052); //@t
				return 0;
			}
			if(var_20_cvector == 40047) {
				func_217(var_21_bool, "Neutral");
				var_0_object->SetMessage(538172); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538173, -1, 40048); //@t
				var_0_object->AddReply(538174, -1, 40049); //@t
				return 0;
			}
			var_3_string = true;
			bool var_223_bool;
			func_3639(var_223_bool);
			if(var_223_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xf0";
	
	}

}


task task_2
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		object var_24_object;
		var_20_bool = var_24_object;
		func_3355(var_24_object);
		int var_22_int;
		int var_23_int = var_22_int;
		if(var_22_int > 0) {
			object var_27_object;
			var_20_bool = var_27_object;
			func_3358(var_27_object);
		}
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool)
	{
		func_3364();
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, float var_7_float, float var_8_float, bool var_9_bool, bool var_10_bool, object var_11_object, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool, object var_21_object, cvector var_22_cvector, bool var_23_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, string var_6_string, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
	}

}


maintask task_3
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool)
	{
		int var_22_int; int var_23_int;
		var_0_object = false;
		@SensePlayerOnly(true);
		func_3641();
		func_804();
	
		for(;;) {
			@irand(var_22_int, 2);
			if(var_22_int == 0) {
				var_0_object = true;
				func_3667();
				var_0_object = false;
				@ResetAAS();
			} else {
			@irand(var_23_int, 4);
			@Sleep(var_23_int + 1);
			}
		}
	
	}
	EMIT "Return(); Pop(4)";

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		object var_24_object;
		var_20_bool = var_24_object;
		func_3355(var_24_object);
		int var_22_int;
		int var_23_int = var_22_int;
		if(var_22_int > 0) {
			if(var_22_int > 1)
				func_1006(var_22_int);
			object var_31_object;
			var_20_bool = var_31_object;
			func_3358(var_31_object);
		}
	}

	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		object var_23_object;
		var_20_bool = var_23_object;
		func_3194(var_23_object);
		int var_32_int; object var_33_object;
		var_20_bool = var_33_object;
		func_3253(var_32_int, var_33_object);
		int var_22_int;
		var_32_int = var_22_int;
		if(var_22_int > 0) {
			if(var_22_int > 1)
				func_1006(var_22_int);
			object var_74_object;
			var_20_bool = var_74_object;
			func_3263(var_74_object);
		}
	}

	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		int var_24_int;
		object var_26_object;
		var_20_object = var_26_object;
		object var_27_object;
		var_21_cvector = var_27_object;
		bool var_28_bool;
		var_22_bool = var_28_bool;
		func_3699(var_26_object, var_27_object, var_28_bool);
		bool var_25_bool;
		if(var_25_bool != 0) {
			int var_74_int; object var_75_object; bool var_76_bool;
			var_20_object = var_75_object;
			var_22_bool = var_76_bool;
			func_3271(var_75_object, var_76_bool);
			var_74_int = var_24_int;
			if(var_24_int > 0) {
				if(var_24_int > 1)
					func_1006(var_24_int);
				object var_111_object;
				var_20_object = var_111_object;
				func_3281(var_111_object);
			}
		}
	}

	void OnSteal(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		object var_24_object;
		var_20_bool = var_24_object;
		int var_23_int;
		func_3365(var_23_int, var_24_object);
		int var_22_int;
		var_23_int = var_22_int;
		if(var_22_int > 0) {
			if(var_22_int > 1)
				func_1006(var_22_int);
			object var_71_object;
			var_20_bool = var_71_object;
			func_3381(var_71_object);
		}
	}

	void OnMessage(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, string var_8_string, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		int var_23_int;
		object var_25_object;
		var_20_cvector = var_25_object;
		string var_26_string;
		var_21_bool = var_26_string;
		bool var_24_bool;
		func_3108(var_24_bool, var_25_object, var_26_string);
		if(var_24_bool != 0) {
			func_1006(var_23_int);
			object var_58_object; string var_59_string;
			var_20_cvector = var_58_object;
			var_21_bool = var_59_string;
			func_3140(var_58_object, var_59_string);
		} else {
			int var_207_int; string var_208_string; object var_209_object;
			var_21_bool = var_208_string;
			var_20_cvector = var_209_object;
			func_3387(var_209_object);
			var_207_int = var_23_int;
			if(!(var_23_int > 0)) goto Label_941;
			if(var_23_int > 1)
				func_1006(var_23_int);
			string var_214_string; object var_215_object;
			var_21_bool = var_214_string;
			var_20_cvector = var_215_object;
			func_3390();
		}
	Label_941:
	
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, string var_7_string, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		bool var_21_bool; string var_22_string;
		func_3207(var_21_bool, var_22_string);
		if(var_21_bool != 0) {
			func_1006(var_22_string);
			string var_32_string;
			var_20_bool = var_32_string;
			func_3223(var_32_string);
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		if(actor != 0)
			return 0;
		bool var_22_bool; object var_23_object;
		func_3165(var_22_bool, var_23_object);
		if(var_22_bool != 0) {
			func_1006(var_23_object);
			object var_38_object;
			var_20_bool = var_38_object;
			func_3188(var_38_object);
		} else {
			object var_112_object;
			func_1028(var_112_object, var_112_object);
		}
	
	}

	// @pe
	void OnHear(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		if(actor != 0)
			return 0;
		object var_22_object;
		func_1028(var_22_object, var_22_object);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, int var_7_int, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		if(var_20_bool != 110) {
		}
		var_1_object = false;
		@KillTimer(110);
		@ResetAAS();
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool)
	{
		func_1006(var_19_bool);
		func_3364();
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		func_1006(var_20_bool);
		object var_23_object;
		var_20_bool = var_23_object;
		func_3084();
	}

}


task task_4
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		object var_24_object;
		var_20_bool = var_24_object;
		func_3355(var_24_object);
		int var_22_int;
		int var_23_int = var_22_int;
		if(var_22_int > 0) {
			if(var_22_int > 1)
				func_1260();
			object var_31_object;
			var_20_bool = var_31_object;
			func_3358(var_31_object);
		}
	}

	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		object var_23_object;
		var_20_bool = var_23_object;
		func_3194(var_23_object);
		int var_32_int; object var_33_object;
		var_20_bool = var_33_object;
		func_3253(var_32_int, var_33_object);
		int var_22_int;
		var_32_int = var_22_int;
		if(var_22_int > 0) {
			if(var_22_int > 1)
				func_1260();
			object var_74_object;
			var_20_bool = var_74_object;
			func_3263(var_74_object);
		}
	}

	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, cvector var_21_cvector, bool var_22_bool)
	{
		int var_24_int;
		object var_26_object;
		var_20_object = var_26_object;
		object var_27_object;
		var_21_cvector = var_27_object;
		bool var_28_bool;
		var_22_bool = var_28_bool;
		func_3699(var_26_object, var_27_object, var_28_bool);
		bool var_25_bool;
		if(var_25_bool != 0) {
			int var_74_int; object var_75_object; bool var_76_bool;
			var_20_object = var_75_object;
			var_22_bool = var_76_bool;
			func_3271(var_75_object, var_76_bool);
			var_74_int = var_24_int;
			if(var_24_int > 0) {
				if(var_24_int > 1)
					func_1260();
				object var_111_object;
				var_20_object = var_111_object;
				func_3281(var_111_object);
			}
		}
	}

	void OnSteal(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		object var_24_object;
		var_20_bool = var_24_object;
		int var_23_int;
		func_3365(var_23_int, var_24_object);
		int var_22_int;
		var_23_int = var_22_int;
		if(var_22_int > 0) {
			if(var_22_int > 1)
				func_1260();
			object var_71_object;
			var_20_bool = var_71_object;
			func_3381(var_71_object);
		}
	}

	void OnMessage(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, string var_9_string, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool)
	{
		int var_23_int;
		object var_25_object;
		var_20_cvector = var_25_object;
		string var_26_string;
		var_21_bool = var_26_string;
		bool var_24_bool;
		func_3108(var_24_bool, var_25_object, var_26_string);
		if(var_24_bool != 0) {
			func_1260();
			object var_58_object; string var_59_string;
			var_20_cvector = var_58_object;
			var_21_bool = var_59_string;
			func_3140(var_58_object, var_59_string);
		} else {
			int var_207_int; string var_208_string; object var_209_object;
			var_21_bool = var_208_string;
			var_20_cvector = var_209_object;
			func_3387(var_209_object);
			var_207_int = var_23_int;
			if(!(var_23_int > 0)) goto Label_1245;
			if(var_23_int > 1)
				func_1260();
			string var_214_string; object var_215_object;
			var_21_bool = var_214_string;
			var_20_cvector = var_215_object;
			func_3390();
		}
	Label_1245:
	
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, string var_8_string, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		string var_22_string;
		var_20_bool = var_22_string;
		bool var_21_bool;
		func_3207(var_21_bool, var_22_string);
		if(var_21_bool != 0) {
			func_1260();
			string var_32_string;
			var_20_bool = var_32_string;
			func_3223(var_32_string);
		}
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		func_1260();
		object var_23_object;
		var_20_bool = var_23_object;
		func_3084();
	}

	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		if(var_20_bool != 111)
			return 4;
		bool var_27_bool;
		func_2211(var_27_bool, var_0_object);
		if(!var_27_bool) { //@nz
			func_1260();
			return 4;
		}
		cvector var_23_cvector;
		@GetDirection(var_23_cvector);
		cvector var_64_cvector;
		func_2138(var_64_cvector, var_0_object);
		cvector var_24_cvector;
		var_64_cvector = var_24_cvector;
		float var_70_float; cvector var_71_cvector; cvector var_72_cvector;
		var_23_cvector = var_71_cvector;
		var_24_cvector = var_72_cvector;
		func_2583(var_70_float, var_71_cvector, var_72_cvector);
		if(var_70_float < 0.49999997)
			func_2361(var_0_object);
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool)
	{
		func_1260();
		func_3364();
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		object var_22_object;
		var_20_bool = var_22_object;
		bool var_21_bool;
		func_3165(var_21_bool, var_22_object);
		if(var_21_bool != 0) {
			func_1260();
			object var_37_object;
			var_20_bool = var_37_object;
			func_3188(var_37_object);
		}
	}

}


task task_5
{
	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool)
	{
		func_1526(var_19_bool);
		func_3364();
	}

	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, int var_11_int, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		cvector var_25_cvector; float var_26_float; cvector var_27_cvector; float var_28_float;
		if(var_20_bool != 120) {
		}
		if(var_0_object == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_25_cvector);
			@FindDirLength(var_26_float, var_25_cvector, 7000.0);
			cvector var_34_cvector;
			func_1371(var_28_float, var_34_cvector, 1.7453294);
			var_34_cvector = var_27_cvector;
			var_28_float = var_27_cvector | var_27_cvector;
			bool var_64_bool = false;
			if(var_28_float >= 2500.0) {
				bool var_67_bool;
				var_71_bool = var_28_float >= ((var_26_float * var_26_float) * 2.25);
				if(var_71_bool != 1) {
					bool var_72_bool;
					func_1542(true, var_72_bool);
					if(var_72_bool != 1)
						var_67_bool = false;
				}
				if(var_67_bool != 0)
					var_64_bool = true;
			}
			if(var_64_bool == 0) goto Label_1525;
			@Stop();
			cvector var_92_cvector;
			func_2133(var_92_cvector);
			var_1_object = var_92_cvector + var_27_cvector;
		}
	Label_1525:
	
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		func_1526(var_20_bool);
		object var_22_object;
		var_20_bool = var_22_object;
		func_3084();
	}

}


task task_6
{
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, int var_14_int, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		cvector var_25_cvector; float var_26_float; cvector var_27_cvector; float var_28_float;
		if(var_20_bool != 120) {
		}
		if(var_0_object == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_25_cvector);
			@FindDirLength(var_26_float, var_25_cvector, 7000.0);
			cvector var_34_cvector;
			func_1558(var_28_float, var_34_cvector, 1.7453294);
			var_34_cvector = var_27_cvector;
			var_28_float = var_27_cvector | var_27_cvector;
			bool var_64_bool = false;
			if(var_28_float >= 2500.0) {
				bool var_67_bool;
				var_71_bool = var_28_float >= ((var_26_float * var_26_float) * 2.25);
				if(var_71_bool != 1) {
					bool var_72_bool;
					func_1729(true, var_72_bool);
					if(var_72_bool != 1)
						var_67_bool = false;
				}
				if(var_67_bool != 0)
					var_64_bool = true;
			}
			if(var_64_bool == 0) goto Label_1712;
			@Stop();
			cvector var_92_cvector;
			func_2133(var_92_cvector);
			var_1_object = var_92_cvector + var_27_cvector;
		}
	Label_1712:
	
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		func_1713(var_20_bool);
		object var_22_object;
		var_20_bool = var_22_object;
		func_3084();
	}

}


task task_7
{
	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool)
	{
		func_1907(var_19_bool);
		func_3364();
	}

	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, int var_17_int, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		cvector var_25_cvector; float var_26_float; cvector var_27_cvector; float var_28_float;
		if(var_20_bool != 120) {
		}
		if(var_0_object == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_25_cvector);
			@FindDirLength(var_26_float, var_25_cvector, 7000.0);
			cvector var_34_cvector;
			func_1752(var_28_float, var_34_cvector, 1.7453294);
			var_34_cvector = var_27_cvector;
			var_28_float = var_27_cvector | var_27_cvector;
			bool var_64_bool = false;
			if(var_28_float >= 2500.0) {
				bool var_67_bool;
				var_71_bool = var_28_float >= ((var_26_float * var_26_float) * 2.25);
				if(var_71_bool != 1) {
					bool var_72_bool;
					func_1923(true, var_72_bool);
					if(var_72_bool != 1)
						var_67_bool = false;
				}
				if(var_67_bool != 0)
					var_64_bool = true;
			}
			if(var_64_bool == 0) goto Label_1906;
			@Stop();
			cvector var_92_cvector;
			func_2133(var_92_cvector);
			var_1_object = var_92_cvector + var_27_cvector;
		}
	Label_1906:
	
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, cvector var_19_cvector, bool var_20_bool)
	{
		func_1907(var_20_bool);
		object var_22_object;
		var_20_bool = var_22_object;
		func_3084();
	}

}


task task_8
{
	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool)
	{
		func_2101(var_19_bool);
		func_3364();
	}

	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, int var_20_int)
	{
		cvector var_25_cvector; float var_26_float; cvector var_27_cvector; float var_28_float;
		if(var_20_int != 120) {
		}
		if(var_0_object == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_25_cvector);
			@FindDirLength(var_26_float, var_25_cvector, 7000.0);
			cvector var_34_cvector;
			func_1946(var_28_float, var_34_cvector, 1.7453294);
			var_34_cvector = var_27_cvector;
			var_28_float = var_27_cvector | var_27_cvector;
			bool var_64_bool = false;
			if(var_28_float >= 2500.0) {
				bool var_67_bool;
				var_71_bool = var_28_float >= ((var_26_float * var_26_float) * 2.25);
				if(var_71_bool != 1) {
					bool var_72_bool;
					func_2117(true, var_72_bool);
					if(var_72_bool != 1)
						var_67_bool = false;
				}
				if(var_67_bool != 0)
					var_64_bool = true;
			}
			if(var_64_bool == 0) goto Label_2100;
			@Stop();
			cvector var_92_cvector;
			func_2133(var_92_cvector);
			var_1_object = var_92_cvector + var_27_cvector;
		}
	Label_2100:
	
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object)
	{
		func_2101(var_20_object);
		object var_22_object;
		var_20_object = var_22_object;
		func_3084();
	}

}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, string var_21_string)
{
	float var_23_float;
	if(var_21_string == "health") {
		@GetProperty("health", var_23_float);
		if(var_23_float <= 0)
			@SignalDeath(var_20_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object)
{
	object var_21_object;
	var_20_object = var_21_object;
	func_3063(var_21_object);
}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, int var_21_int, float var_22_float, float var_23_float)
{
	object var_24_object;
	var_20_object = var_24_object;
	int var_25_int;
	var_21_int = var_25_int;
	float var_26_float;
	var_22_float = var_26_float;
	func_2279(var_24_object, var_25_int, var_26_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, int var_21_int, float var_22_float, float var_23_float, cvector var_24_cvector, cvector var_25_cvector)
{
	object var_26_object;
	var_20_object = var_26_object;
	int var_27_int;
	var_21_int = var_27_int;
	float var_28_float;
	var_22_float = var_28_float;
	cvector var_29_cvector;
	var_24_cvector = var_29_cvector;
	cvector var_30_cvector;
	var_25_cvector = var_30_cvector;
	func_2347(var_28_float, var_29_cvector, var_30_cvector);
}


void func_0(object var_0_object, int var_45_int, object var_46_object)
{
	var_0_object = var_46_object;
	bool var_56_bool; object var_57_object;
	var_46_object = var_57_object;
	func_2377(var_56_bool, var_57_object, 70.0);
	if(!var_56_bool) { //@nz
		var_45_int = -2;
		return 8;
	}
	object var_52_object;
	@CreateDialog(var_52_object);
	int var_103_int;
	func_3633(var_103_int);
	var_52_object->SetNPCName(var_103_int);
	int var_104_int;
	func_3631(var_104_int);
	var_52_object->SetNPCDescription(var_104_int);
	string var_105_string;
	func_3635(var_105_string);
	var_52_object->SetPhoto(var_105_string);
	string var_106_string;
	func_3637(var_106_string);
	var_52_object->SetPhoto2(var_106_string);
	int var_107_int;
	func_2706(var_107_int);
	var_52_object->SetPlayerName(var_107_int);
	bool var_53_bool;
	@IsOverrideActive(var_53_bool);
	if(var_53_bool != 0) {
		var_45_int = -2;
		return 8;
	}
	@DoDialog(var_52_object);
	object var_116_object; object var_117_object;
	var_46_object = var_116_object;
	var_52_object = var_117_object;
	TaskCall(1);
	func_74(var_118_object, var_119_object, var_120_string, var_121_bool, var_116_object, var_117_object);
	TaskReturn();
	bool var_55_bool;
	var_52_object->IsDialogEnd(var_55_bool);
	
	for(;;) {
		var_222_bool = !var_55_bool; //@nz
		if(var_222_bool == 0) goto Label_63;
		@sync();
		var_52_object->IsDialogEnd(var_55_bool);
	}
	
Label_63:
	object var_223_object;
	var_46_object = var_223_object;
	func_2445();
	@StopDialog(var_52_object);
	var_52_object->GetReturnValue(-1);
	int var_54_int = var_45_int;
}
EMIT "Stack[-4] = 0";


void func_1028(object var_1_object, object var_22_object)
{
	if(var_1_object != 0)
		return 4;
	bool var_25_bool;
	@IsPlayerActor(var_22_object, var_25_bool);
	if(!var_25_bool) //@nz
		return 4;
	int var_29_int; object var_30_object;
	var_22_object = var_30_object;
	func_3236(var_30_object);
	int var_26_int;
	var_29_int = var_26_int;
	if(var_26_int > 0) {
		if(var_26_int > 1)
			func_1006(var_26_int);
		object var_38_object;
		var_22_object = var_38_object;
		func_3245(var_38_object);
		var_1_object = true;
		@SetTimer(110, 5.0);
	}
}


// @pe
void func_2564(float var_73_float, cvector var_74_cvector, cvector var_75_cvector)
{
	var_76_float = GetByIndex(var_74_cvector, 0);
	var_77_float = GetByIndex(var_75_cvector, 0);
	var_79_float = GetByIndex(var_74_cvector, 2);
	var_80_float = GetByIndex(var_75_cvector, 2);
	var_73_float = (var_76_float * var_77_float) + (var_79_float * var_80_float);
}


void func_1542(object var_0_object, bool var_72_bool)
{
	cvector var_75_cvector;
	@GetDirection(var_75_cvector);
	cvector var_77_cvector;
	func_2138(var_77_cvector, var_0_object);
	cvector var_76_cvector;
	var_77_cvector = var_76_cvector;
	float var_83_float; cvector var_84_cvector; cvector var_85_cvector;
	var_75_cvector = var_84_cvector;
	var_76_cvector = var_85_cvector;
	func_2556(var_83_float, var_84_cvector, var_85_cvector);
	var_72_bool = var_83_float >= -0.34202012;
}


void func_3593(bool var_298_bool, object var_299_object)
{
	int var_303_int;
	var_299_object->GetItemID(var_303_int);
	bool var_304_bool;
	@HasInvItemProperty(var_304_bool, var_303_int, "Category");
	if(!var_304_bool) //@nz
		var_298_bool = false;
	int var_305_int;
	@GetInvItemProperty(var_305_int, var_303_int, "Category");
	var_298_bool = var_305_int == 1;
}


// @pe
void func_2573(float var_82_float, cvector var_83_cvector)
{
	var_84_float = GetByIndex(var_83_cvector, 0);
	var_85_float = GetByIndex(var_83_cvector, 0);
	var_87_float = GetByIndex(var_83_cvector, 2);
	var_88_float = GetByIndex(var_83_cvector, 2);
	var_82_float = sqrt((var_84_float * var_85_float) + (var_87_float * var_88_float));
}


void func_1558(object var_0_object, cvector var_34_cvector, float var_35_float)
{
	cvector var_42_cvector;
	@GetPosition(var_42_cvector);
	cvector var_43_cvector;
	var_0_object->GetPosition(var_43_cvector); //@t
	cvector var_44_cvector;
	@GetDirection(var_44_cvector);
	cvector var_48_cvector;
	cvector var_50_cvector;
	func_2540(var_50_cvector, (var_42_cvector - var_43_cvector));
	func_2540(var_48_cvector, (var_50_cvector + (var_44_cvector * 0.75)));
	cvector var_45_cvector;
	var_48_cvector = var_45_cvector;
	cvector var_46_cvector;
	float var_47_float;
	@FindLongestDir(var_46_cvector, var_47_float, var_45_cvector, var_35_float, 32, 7000.0);
	if((var_47_float - 100) < 0)
		var_47_float = 0;
	var_34_cvector = var_46_cvector * var_47_float;
}


// @pe
void func_2583(float var_70_float, cvector var_71_cvector, cvector var_72_cvector)
{
	cvector var_74_cvector;
	var_71_cvector = var_74_cvector;
	cvector var_75_cvector;
	var_72_cvector = var_75_cvector;
	float var_73_float;
	func_2564(var_73_float, var_74_cvector, var_75_cvector);
	float var_82_float; cvector var_83_cvector;
	var_71_cvector = var_83_cvector;
	func_2573(var_82_float, var_83_cvector);
	float var_91_float; cvector var_92_cvector;
	var_72_cvector = var_92_cvector;
	func_2573(var_91_float, var_92_cvector);
	var_70_float = var_73_float / (var_82_float * var_91_float);
}


// @pe
void func_3609(object var_44_object, object var_47_object)
{
	object var_46_object;
	var_44_object = var_46_object;
	TaskCall(0);
	int var_45_int;
	func_0(var_47_object, var_45_int, var_46_object);
	TaskReturn();
	if(var_47_object == 100) {
		object var_232_object;
		var_44_object = var_232_object;
		func_3446(var_232_object);
	}
}


// @pe
void func_3108(bool var_24_bool, object var_25_object, string var_26_string)
{
	if(var_26_string == "unholster") {
		bool var_29_bool; object var_30_object;
		var_25_object = var_30_object;
		func_3392(var_29_bool, var_30_object);
		var_29_bool = var_24_bool;
		return 0;
	EMIT "GOTO 0xc42";
	}
	if(var_26_string == "player_shot") {
		bool var_35_bool; object var_36_object;
		var_25_object = var_36_object;
		func_3405(var_35_bool, var_36_object);
		var_35_bool = var_24_bool;
		return 0;
	EMIT "GOTO 0xc42";
	}
	if(var_26_string == "battle") {
		bool var_52_bool; object var_53_object;
		var_25_object = var_53_object;
		func_3428(var_52_bool, var_53_object);
		var_52_bool = var_24_bool;
		return 0;
	}
	var_24_bool = false;
}


void func_1061(object var_0_object, object var_39_object)
{
	var_0_object = var_39_object;
	bool var_46_bool;
	func_1112(var_46_bool);
	cvector var_44_cvector;
	@GetDirection(var_44_cvector);
	cvector var_54_cvector;
	func_2138(var_54_cvector, var_0_object);
	cvector var_45_cvector;
	var_54_cvector = var_45_cvector;
	float var_60_float; cvector var_61_cvector; cvector var_62_cvector;
	var_44_cvector = var_61_cvector;
	var_45_cvector = var_62_cvector;
	func_2583(var_60_float, var_61_cvector, var_62_cvector);
	if(var_60_float < 0) {
		func_2361(var_0_object);
		var_46_bool = true;
	} else {
		@Sleep(1.5, var_46_bool);
	}
	if(var_46_bool != 0) {
		func_2361(var_0_object);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


void func_2600(int var_153_int, string var_154_string)
{
	int var_156_int;
	@GetVariable(var_154_string, var_156_int);
	var_156_int = var_153_int;
}


void func_3624(string var_154_string, int var_155_int)
{
	string var_157_string = "idle";
	if(var_155_int != 0)
		var_157_string += var_155_int;
	var_157_string = var_154_string;
}


void func_2605(int var_35_int)
{
	float var_37_float;
	@GetGameTime(var_37_float);
	var_35_int = 1 + (var_37_float / 24);
}


void func_3631(int var_104_int)
{
	var_104_int = 515567;
}


void func_3633(int var_103_int)
{
	var_103_int = 503352;
}


void func_3635(string var_105_string)
{
	var_105_string = "ui/NPC_Citizen3.png";
}


void func_1588(object var_0_object, object var_1_object, object var_2_object, object var_112_object)
{
	float var_122_float; cvector var_124_cvector; float var_125_float;
	cvector var_126_cvector;
	func_1558(var_125_float, var_126_cvector, 1.7453294);
	cvector var_121_cvector;
	var_126_cvector = var_121_cvector;
	if((var_121_cvector | var_121_cvector) < 2500.0) {
		cvector var_158_cvector;
		func_1558(var_125_float, var_158_cvector, 2.6179938);
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
	func_2133(var_168_cvector);
	@SetTimer(120, 0.5);
	
Label_1630:
	bool var_123_bool;
	@MovePoint((var_168_cvector + var_121_cvector), 1, var_123_bool);
	if(var_123_bool != 0) {
		if(var_112_object == null) {
			goto Label_1660;
		EMIT "GOTO 0x67a";

		Label_1660:
			for(;;) {
				return 10;
		}
			cvector var_176_cvector;
			func_1558(var_125_float, var_176_cvector, 2.6179938);
			var_176_cvector = var_124_cvector;
			if((var_124_cvector | var_124_cvector) >= 2500.0) {
				cvector var_180_cvector;
				func_2133(var_180_cvector);
				var_1_object = var_180_cvector + var_124_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1630; //@nz

	}
}


void func_3637(string var_106_string)
{
	var_106_string = "ui/NPC_Citizen3_b.png";
}


void func_2101(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


void func_3639(bool var_98_bool)
{
	var_98_bool = false;
}


void func_2614(int var_170_int)
{
	float var_172_float;
	@GetGameTime(var_172_float);
	int var_173_int;
	var_172_float = var_173_int;
	var_170_int = var_173_int % 24;
}


void func_3641(void)
{
	var_25_bool = GlobalVars[0];
	GlobalVars[0] = false;
	func_2883(false);
}


// @pe
void func_2622(object var_27_object)
{
	var_27_object->SetReturnValue(100);
}


void func_3649(object var_32_object)
{
	bool var_34_bool;
	var_35_bool = GlobalVars[0];
	if(var_35_bool != 0) {
		@IsOverrideActive(var_34_bool);
		if(!var_34_bool) { //@nz
			object var_37_object;
			var_32_object = var_37_object;
			func_2798(var_37_object);
		}
	EMIT "GOTO 0xe52";
	}
	object var_44_object;
	var_32_object = var_44_object;
	func_3609(var_34_bool, var_44_object);
}


// @pe
void func_2627(bool var_151_bool)
{
	int var_153_int;
	func_2600(var_153_int, "branch");
	if(var_153_int == 0) {
		var_151_bool = true;
		return 0;
	}
	var_151_bool = false;
}


// @pe
void func_3140(object var_58_object, string var_59_string)
{
	if(var_59_string == "unholster") {
		object var_62_object;
		var_58_object = var_62_object;
		func_3397(var_62_object);
	} else if(var_59_string == "player_shot") {
			object var_137_object;
			var_58_object = var_137_object;
			func_3420(var_137_object);
	}
Label_3164:
	for(;;) {

	}
	
	if(!(var_59_string == "battle")) goto Label_3164;
	object var_205_object;
	var_58_object = var_205_object;
	func_3435(var_205_object);
}


void func_2117(object var_0_object, bool var_72_bool)
{
	cvector var_75_cvector;
	@GetDirection(var_75_cvector);
	cvector var_77_cvector;
	func_2138(var_77_cvector, var_0_object);
	cvector var_76_cvector;
	var_77_cvector = var_76_cvector;
	float var_83_float; cvector var_84_cvector; cvector var_85_cvector;
	var_75_cvector = var_84_cvector;
	var_76_cvector = var_85_cvector;
	func_2556(var_83_float, var_84_cvector, var_85_cvector);
	var_72_bool = var_83_float >= -0.34202012;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_116_object, object var_117_object)
{
	var_0_object = var_117_object;
	var_1_object = var_116_object;
	var_3_string = false;
	if(1 != 0) {
		func_217(var_117_object, "Neutral");
		var_0_object->SetMessage(538167); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(538168, -1, 40043); //@t
		bool var_139_bool = false;
		bool var_140_bool;
		func_2651(var_140_bool, var_1_object);
		if(var_140_bool != 0) {
			bool var_151_bool;
			func_2627(var_1_object);
			if(var_151_bool != 0)
				var_139_bool = true;
		}
		if(var_139_bool != 0)
			var_0_object->AddReply(538169, 40045, 40044); //@t
		bool var_162_bool = false;
		bool var_163_bool = false;
		bool var_164_bool;
		func_2651(var_164_bool, var_1_object);
		if(var_164_bool != 0) {
			bool var_166_bool;
			func_2671(var_166_bool, var_1_object);
			if(var_166_bool != 0)
				var_163_bool = true;
		}
		if(var_163_bool != 0) {
			bool var_177_bool;
			func_2627(var_1_object);
			if(var_177_bool != 0)
				var_162_bool = true;
		}
		if(var_162_bool != 0)
			var_0_object->AddReply(538179, 40055, 40054); //@t
		bool var_182_bool = false;
		bool var_183_bool;
		func_2661(var_183_bool, var_1_object);
		if(var_183_bool != 0) {
			bool var_189_bool;
			func_2627(var_1_object);
			if(var_189_bool != 0)
				var_182_bool = true;
		}
		if(var_182_bool != 0)
			var_0_object->AddReply(538190, 40067, 40066); //@t
		bool var_194_bool = true;
		bool var_195_bool;
		func_2627(var_1_object);
		if(var_195_bool != 1) {
			bool var_197_bool;
			func_2639(var_1_object);
			if(var_197_bool != 1)
				var_194_bool = false;
		}
		if(var_194_bool != 0)
			var_0_object->AddReply(538204, -1, 40081); //@t
		var_0_object->AddReply(538205, -1, 40082); //@t
		goto Label_187;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_187:
	bool var_209_bool;
	func_3639(var_209_bool);
	if(var_209_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2462(var_2_object);
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


// @pe
void func_2639(bool var_197_bool)
{
	int var_199_int;
	func_2600(var_199_int, "branch");
	if(var_199_int == 1)
		var_197_bool = true;
	var_197_bool = false;
}


void func_3667(void)
{
	int var_150_int; bool var_151_bool;
	var_150_int = 0;
	
	for(;;) {
		string var_154_string; int var_155_int;
		var_150_int = var_155_int;
		func_3624(var_154_string, var_155_int);
		@HasAnimation(var_151_bool, "all", var_154_string);
		if(!var_151_bool) //@nz
			break;
		var_150_int += 1;
	}
	int var_152_int;
	@irand(var_152_int, var_150_int);
	string var_161_string; int var_162_int;
	var_152_int = var_162_int;
	func_3624(var_161_string, var_162_int);
	@PlayAnimation("all", var_161_string);
	@WaitForAnimEnd();
}


void func_2133(cvector var_92_cvector)
{
	cvector var_94_cvector;
	@GetPosition(var_94_cvector);
	var_94_cvector = var_92_cvector;
}


void func_1112(object var_0_object)
{
	func_2475(var_0_object);
}


void func_2138(cvector var_54_cvector, object var_55_object)
{
	cvector var_58_cvector;
	@GetPosition(var_58_cvector);
	cvector var_59_cvector;
	var_55_object->GetPosition(var_59_cvector);
	var_54_cvector = var_59_cvector - var_58_cvector;
}


// @pe
void func_2651(bool var_140_bool, object var_141_object)
{
	object var_143_object;
	var_141_object = var_143_object;
	func_2681(var_143_object);
	bool var_142_bool;
	if(var_142_bool != 0) {
		var_140_bool = true;
		return 0;
	}
	var_140_bool = false;
}


void func_3165(bool var_21_bool, object var_22_object)
{
	bool var_24_bool;
	bool var_25_bool = false;
	bool var_26_bool; object var_27_object;
	var_22_object = var_27_object;
	func_3392(var_26_bool, var_27_object);
	if(var_26_bool != 0) {
		bool var_30_bool; object var_31_object;
		func_2153(var_30_bool, var_31_object);
		if(var_30_bool != 0)
			var_25_bool = true;
	}
	if(var_25_bool != 0) {
		var_31_object->IsWeaponHolstered(var_24_bool);
		if(!var_24_bool) //@nz
			var_21_bool = true;
	}
	var_21_bool = false;
}


void func_2145(float var_40_float, object var_41_object)
{
	cvector var_45_cvector;
	@GetPosition(var_45_cvector);
	cvector var_46_cvector;
	var_41_object->GetPosition(var_46_cvector);
	var_40_float = (var_46_cvector - var_45_cvector) | (var_46_cvector - var_45_cvector);
}


// @pe
void func_2661(bool var_183_bool, object var_184_object)
{
	object var_186_object;
	var_184_object = var_186_object;
	func_2688(var_186_object);
	bool var_185_bool;
	if(var_185_bool != 0) {
		var_183_bool = true;
		return 0;
	}
	var_183_bool = false;
}


// @pe
void func_614(object var_22_object)
{
	object var_23_object;
	var_22_object = var_23_object;
	func_647(var_23_object);
	object var_103_object;
	var_22_object = var_103_object;
	func_3715(var_103_object);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_2153(bool var_104_bool, object var_105_object)
{
	bool var_107_bool;
	@IsPlayerActor(var_105_object, var_107_bool);
	var_107_bool = var_104_bool;
}


void func_3694(void)
{
	@StopAnimation();
}


// @pe
void func_2671(bool var_166_bool, object var_167_object)
{
	object var_169_object;
	var_167_object = var_169_object;
	func_2695(var_169_object);
	bool var_168_bool;
	if(var_168_bool != 0) {
		var_166_bool = true;
		return 0;
	}
	var_166_bool = false;
}


void func_2158(bool var_49_bool, object var_50_object, string var_51_string)
{
	var_56_bool = IsFuncExist(var_50_object, "HasProperty", 2);
	if(!var_56_bool) { //@nz
		var_49_bool = false;
		return 2;
	}
	bool var_53_bool;
	var_50_object->HasProperty(var_51_string, var_53_bool);
	var_53_bool = var_49_bool;
}


void func_3697(bool var_31_bool)
{
	var_31_bool = true;
}


// @pe
void func_3699(bool var_25_bool, object var_26_object, object var_27_object)
{
	object var_30_object;
	var_26_object = var_30_object;
	object var_31_object;
	var_27_object = var_31_object;
	bool var_29_bool;
	func_3289(var_29_bool, var_30_object, var_31_object, 500.0);
	if(var_29_bool != 0) {
		@SetProperty("ToDie", true);
		var_25_bool = true;
		return 0;
	}
	var_25_bool = false;
}


// @pe
void func_3188(object var_37_object)
{
	object var_38_object;
	var_37_object = var_38_object;
	func_3397(var_38_object);
}


// @pe
void func_2681(bool var_142_bool)
{
	int var_144_int;
	func_2605(var_144_int);
	var_142_bool = var_144_int == 1;
}


void func_2170(bool var_42_bool, object var_43_object)
{
	bool var_45_bool;
	var_43_object->IsDead(var_45_bool);
	var_45_bool = var_42_bool;
}


// @pe
void func_3194(object var_23_object)
{
	bool var_24_bool; object var_25_object;
	func_2153(var_24_bool, var_25_object);
	if(var_24_bool != 0) {
		object var_28_object;
		func_2534(var_28_object);
		@ReportReputationChange(var_25_object, var_28_object, -0.05);
	}
}


void func_2175(bool var_31_bool, object var_32_object)
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
		func_2170(var_42_bool, var_43_object);
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


// @pe
void func_2688(bool var_185_bool)
{
	int var_187_int;
	func_2605(var_187_int);
	var_185_bool = var_187_int == 2;
}


// @pe
void func_3715(object var_103_object)
{
	bool var_104_bool; object var_105_object;
	func_2153(var_104_bool, var_105_object);
	if(var_104_bool != 0) {
		object var_108_object;
		func_2534(var_108_object);
		@ReportReputationChange(var_105_object, var_108_object, -0.1, true);
		func_2883(false);
	}
	func_2859();
	var_247_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


void func_647(object var_23_object)
{
	cvector var_34_cvector; cvector var_35_cvector; cvector var_36_cvector; cvector var_37_cvector; string var_38_string; object var_39_object; bool var_40_bool; bool var_41_bool; float var_42_float; cvector var_43_cvector;
	if(var_23_object == null) {
		func_738("fdie");
	} else {
		var_23_object->GetPosition(var_34_cvector);
		@GetPosition(var_35_cvector);
		@GetDirection(var_36_cvector);
		var_37_cvector = var_35_cvector - var_34_cvector;
		var_77_float = GetByIndex(var_37_cvector, 0);
		var_78_float = GetByIndex(var_36_cvector, 0);
		var_80_float = GetByIndex(var_37_cvector, 2);
		var_81_float = GetByIndex(var_36_cvector, 2);
		if(((var_77_float * var_78_float) + (var_80_float * var_81_float)) >= 0)
			var_38_string = "fdie";
		else
			var_38_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_23_object = var_39_object;
		var_88_bool = IsFuncExist(var_23_object, "GetScriptProperty", 2);
		if(var_88_bool != 0) {
			var_23_object->HasScriptProperty(var_40_bool, "Owner");
			if(var_40_bool != 0) {
				var_23_object->GetScriptProperty(var_39_object, "Owner");
				if(var_39_object == null)
					var_23_object = var_39_object;
			}
		}
		var_95_bool = IsFuncExist(var_39_object, "@GetEyesHeight", 1);
		if(var_95_bool != 0) {
			var_39_object->GetEyesHeight(var_42_float);
			var_43_cvector = [0.0, 0.0, 0.0];
			var_96_float = GetByIndex(var_43_cvector, 1);
			var_42_float = var_96_float;
			SetByIndex(var_43_cvector, 1) = var_96_float;
			@LookAsync(var_23_object, "head", var_43_cvector);
			var_41_bool = true;
		} else {
			var_41_bool = false;

		}
		string var_98_string;
		var_38_string = var_98_string;
		func_2493(var_98_string);
		@PlayAnimation("all", var_38_string);
		@WaitForAnimEnd();
		if(var_41_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_38_string);
		@RemoveEnvelope();
		var_39_object = null;
	}
	
}


void func_3207(bool var_21_bool, string var_22_string)
{
	object var_24_object;
	if(var_22_string == "heal") {
		@FindActor(var_24_object, "player");
		bool var_28_bool; object var_29_object;
		var_24_object = var_29_object;
		func_3441(var_29_object);
		var_28_bool = var_21_bool;
	EMIT "Stack[-1] = 0";
	}
	var_21_bool = false;
}


// @pe
void func_2695(bool var_168_bool)
{
	int var_170_int;
	func_2614(var_170_int);
	if(var_170_int >= 12)
		var_168_bool = true;
	var_168_bool = false;
}


void func_2706(int var_107_int)
{
	int var_109_int;
	@GetVariable("branch", var_109_int);
	if(var_109_int == 0) {
		var_107_int = 1;
		return 2;
	EMIT "GOTO 0xaa1";
	}
	if(var_109_int == 1) {
		var_107_int = 2;
		return 2;
	}
	var_107_int = 3;
}


void func_3223(string var_32_string)
{
	object var_34_object;
	if(var_32_string == "heal") {
		@FindActor(var_34_object, "player");
		object var_38_object;
		var_34_object = var_38_object;
		func_3444();
		var_34_object = null;
	}
}


void func_2211(bool var_27_bool, object var_28_object)
{
	object var_32_object;
	var_28_object = var_32_object;
	bool var_31_bool;
	func_2175(var_31_bool, var_32_object);
	if(!var_31_bool) { //@nz
		var_27_bool = false;
		return 2;
	}
	bool var_49_bool; object var_50_object;
	func_2158(var_49_bool, var_50_object, "noaccess");
	if(!var_49_bool) { //@nz
		var_27_bool = true;
		return 2;
	}
	int var_30_int;
	var_50_object->GetProperty("noaccess", var_30_int);
	var_27_bool = var_30_int == 0;
}


// @pe
void func_3236(int var_29_int)
{
	bool var_31_bool;
	func_3697(var_31_bool);
	if(var_31_bool != 0)
		var_29_int = 2;
	else
		var_29_int = 0;
	
}


void func_2723(int var_227_int)
{
	int var_229_int;
	@GetVariable("branch", var_229_int);
	var_229_int = var_227_int;
}


void func_2729(int var_333_int, object var_334_object)
{
	int var_336_int;
	var_334_object->GetItemID(var_336_int);
	var_336_int = var_333_int;
}


// @pe
void func_3245(object var_38_object)
{
	object var_39_object;
	var_38_object = var_39_object;
	TaskCall(4);
	func_1061(var_40_object, var_39_object);
	TaskReturn();
}


void func_2734(int var_310_int, object var_311_object, int var_312_int)
{
	int var_320_int; int var_321_int; int var_322_int; string var_323_string; bool var_324_bool; bool var_325_bool; int var_326_int;
	if(var_312_int == 0) {
		int var_329_int;
		func_2605(var_329_int);
		var_329_int = var_320_int;
		var_322_int = 1;

		for(;;) {
			if(var_322_int <= var_320_int) {
				var_323_string = "Price";
				if(var_322_int != 1)
					var_323_string += var_322_int;
				int var_333_int; object var_334_object;
				var_311_object = var_334_object;
				func_2729(var_333_int, var_334_object);
				@HasInvItemProperty(var_324_bool, var_333_int, var_323_string);
				if(!var_324_bool) { //@nz
				} else {
				int var_339_int; object var_340_object;
				var_311_object = var_340_object;
				func_2729(var_339_int, var_340_object);
				@GetInvItemProperty(0, var_339_int, var_323_string);
			}
			var_321_int = var_310_int;
			return 14;
	}
		int var_341_int; object var_342_object;
		var_311_object = var_342_object;
		func_2729(var_341_int, var_342_object);
		@HasInvItemProperty(var_325_bool, var_341_int, ("BarterPrice" + var_312_int));
		if(!var_325_bool) //@nz
			return 14;
		int var_346_int; object var_347_object;
		var_311_object = var_347_object;
		func_2729(var_346_int, var_347_object);
		@GetInvItemProperty(var_326_int, var_346_int, ("BarterPrice" + var_312_int));
		if(var_326_int > 0) {
			var_326_int = 0;
			return 14;
		}
		var_310_int = -var_326_int;
		return 14;
		}
		var_322_int += 1;
	}
	
}


void func_1713(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


// @pe
void func_3253(int var_29_int, object var_30_object)
{
	object var_32_object;
	var_30_object = var_32_object;
	bool var_31_bool;
	func_2211(var_31_bool, var_32_object);
	if(var_31_bool != 0)
		var_29_int = 2;
	else
		var_29_int = 0;
	
}


void func_2235(object var_37_object)
{
	string var_51_string;
	if(var_37_object == null)
		return 14;
	bool var_45_bool;
	@IsDead(var_45_bool);
	if(var_45_bool != 0)
		return 14;
	int var_46_int;
	@GetSecondaryAnimationType(var_46_int);
	if(var_46_int < 0)
		return 14;
	cvector var_47_cvector;
	var_37_object->GetPosition(var_47_cvector);
	cvector var_48_cvector;
	@GetPosition(var_48_cvector);
	cvector var_49_cvector;
	@GetDirection(var_49_cvector);
	cvector var_50_cvector = var_48_cvector - var_47_cvector;
	var_56_float = GetByIndex(var_50_cvector, 0);
	var_57_float = GetByIndex(var_49_cvector, 0);
	var_59_float = GetByIndex(var_50_cvector, 2);
	var_60_float = GetByIndex(var_49_cvector, 2);
	if(((var_56_float * var_57_float) + (var_59_float * var_60_float)) >= 0)
		var_51_string = "fhit";
	else
		var_51_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_51_string + "1"), (var_51_string + "2"), -10);
	
}


// @pe
void func_3263(object var_72_object)
{
	object var_73_object;
	var_72_object = var_73_object;
	TaskCall(5);
	func_1336(var_73_object);
	TaskReturn();
}


void func_1729(object var_0_object, bool var_72_bool)
{
	cvector var_75_cvector;
	@GetDirection(var_75_cvector);
	cvector var_77_cvector;
	func_2138(var_77_cvector, var_0_object);
	cvector var_76_cvector;
	var_77_cvector = var_76_cvector;
	float var_83_float; cvector var_84_cvector; cvector var_85_cvector;
	var_75_cvector = var_84_cvector;
	var_76_cvector = var_85_cvector;
	func_2556(var_83_float, var_84_cvector, var_85_cvector);
	var_72_bool = var_83_float >= -0.34202012;
}


// @pe
void func_3271(int var_74_int, object var_75_object)
{
	object var_78_object;
	var_75_object = var_78_object;
	bool var_77_bool;
	func_2211(var_77_bool, var_78_object);
	if(var_77_bool != 0)
		var_74_int = 2;
	else
		var_74_int = 0;
	
}


// @pe
void func_3281(object var_111_object)
{
	object var_112_object;
	var_111_object = var_112_object;
	TaskCall(6);
	func_1588(var_113_object, var_114_cvector, var_115_bool, var_112_object);
	TaskReturn();
}


void func_1752(object var_0_object, cvector var_34_cvector, float var_35_float)
{
	cvector var_42_cvector;
	@GetPosition(var_42_cvector);
	cvector var_43_cvector;
	var_0_object->GetPosition(var_43_cvector); //@t
	cvector var_44_cvector;
	@GetDirection(var_44_cvector);
	cvector var_48_cvector;
	cvector var_50_cvector;
	func_2540(var_50_cvector, (var_42_cvector - var_43_cvector));
	func_2540(var_48_cvector, (var_50_cvector + (var_44_cvector * 0.75)));
	cvector var_45_cvector;
	var_48_cvector = var_45_cvector;
	cvector var_46_cvector;
	float var_47_float;
	@FindLongestDir(var_46_cvector, var_47_float, var_45_cvector, var_35_float, 32, 7000.0);
	if((var_47_float - 100) < 0)
		var_47_float = 0;
	var_34_cvector = var_46_cvector * var_47_float;
}


// @pe
void func_217(object var_2_object, string var_123_string)
{
	bool var_124_bool;
	func_3639(var_124_bool);
	if(!var_124_bool) //@nz
		return 0;
	if(var_123_string == var_2_object)
		return 0;
	string var_127_string; bool var_128_bool;
	var_123_string = var_127_string;
	if(var_123_string == "")
		var_128_bool = false;
	else
		var_128_bool = true;
	func_2469(var_127_string, var_128_bool);
	var_2_object = var_123_string;
	
}


void func_3289(bool var_29_bool, object var_30_object, object var_31_object, float var_32_float)
{
	object var_38_object;
	var_31_object = var_38_object;
	bool var_37_bool;
	func_2158(var_37_bool, var_38_object, "class");
	if(!var_37_bool) { //@nz
		var_29_bool = false;
		return 4;
	}
	string var_35_string;
	var_31_object->GetProperty("class", var_35_string);
	if(var_35_string == "rat") {
		var_29_bool = false;
		return 4;
	EMIT "GOTO 0xcf7";
	}
	if(var_35_string == "rat_big") {
		var_29_bool = false;
		return 4;
	EMIT "GOTO 0xcf7";
	}
	if(var_35_string == "dog") {
		var_29_bool = false;
		return 4;
	}
	bool var_36_bool;
	@CanSee(var_36_bool, var_30_object);
	bool var_54_bool = true;
	if(var_36_bool != 1) {
		float var_56_float; object var_57_object;
		var_30_object = var_57_object;
		func_2145(var_56_float, var_57_object);
		var_65_bool = var_56_float <= (var_32_float * var_32_float);
		if(var_65_bool != 1)
			var_54_bool = false;
	}
	if(var_54_bool != 0) {
		var_29_bool = true;
		return 4;
	}
	@CanSee(var_36_bool, var_31_object);
	bool var_66_bool = true;
	if(var_36_bool != 1) {
		float var_68_float; object var_69_object;
		var_31_object = var_69_object;
		func_2145(var_68_float, var_69_object);
		var_71_bool = var_68_float <= (var_32_float * var_32_float);
		if(var_71_bool != 1)
			var_66_bool = false;
	}
	if(var_66_bool != 0) {
		var_29_bool = true;
		return 4;
	}
	var_29_bool = false;
}


// @pe
void func_738(string var_45_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_46_string;
	var_45_string = var_46_string;
	func_2493(var_46_string);
	@PlayAnimation("all", var_45_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_45_string);
	@RemoveEnvelope();
}


void func_2279(object var_24_object, int var_25_int, float var_26_float)
{
	cvector var_36_cvector; object var_37_object; int var_38_int; bool var_39_bool; cvector var_40_cvector; cvector var_41_cvector;
	bool var_45_bool = false;
	bool var_46_bool = false;
	if(var_24_object != 0) {
		if(var_25_int != 4)
			var_46_bool = true;
	}
	if(var_46_bool != 0) {
		if(var_25_int != 5)
			var_45_bool = true;
	}
	if(var_45_bool != 0) {
		cvector var_52_cvector; cvector var_53_cvector;
		cvector var_54_cvector; object var_55_object;
		var_24_object = var_55_object;
		func_2138(var_54_cvector, var_55_object);
		var_54_cvector = var_53_cvector;
		func_2540(var_52_cvector, var_53_cvector);
		var_52_cvector = var_36_cvector;
		@CreateVectorVector(var_37_object);
		var_38_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_38_int), var_39_bool, var_40_cvector, var_41_cvector);
			if(!var_39_bool) { //@nz
				break;
			Label_2341:
				var_37_object = null;
	}
			object var_114_object;
			var_24_object = var_114_object;
			func_2235(var_114_object);
		}
		if((var_41_cvector | var_36_cvector) >= 0.70710677)
			var_37_object->add(var_40_cvector);
		var_38_int += 1;
	}
	int var_42_int;
	var_37_object->size(var_42_int);
	if(var_42_int == 0) goto Label_2341;
	int var_43_int;
	@irand(var_43_int, var_42_int);
	cvector var_44_cvector;
	var_37_object->get(var_44_cvector, var_43_int);
	object var_69_object; int var_70_int; float var_71_float; cvector var_72_cvector; cvector var_73_cvector;
	var_24_object = var_69_object;
	var_25_int = var_70_int;
	var_26_float = var_71_float;
	var_44_cvector = var_72_cvector;
	var_73_cvector = -var_36_cvector;
	func_2347(var_71_float, var_72_cvector, var_73_cvector);
}


void func_1260(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


// @pe
void func_2798(object var_37_object)
{
	int var_38_int;
	func_2723(var_38_int);
	if(var_38_int == 1)
		@WorkWithCorpse(var_37_object);
	else
		@Barter(var_37_object);
	
}


void func_1782(object var_0_object, object var_1_object, object var_2_object, object var_39_object)
{
	float var_49_float; cvector var_51_cvector; float var_52_float;
	cvector var_53_cvector;
	func_1752(var_52_float, var_53_cvector, 1.7453294);
	cvector var_48_cvector;
	var_53_cvector = var_48_cvector;
	if((var_48_cvector | var_48_cvector) < 2500.0) {
		cvector var_85_cvector;
		func_1752(var_52_float, var_85_cvector, 2.6179938);
		var_85_cvector = var_48_cvector;
		var_49_float = var_48_cvector | var_48_cvector;
		if(var_49_float < 2500.0) {
			var_90_float = sqrt(var_49_float);
			@Trace("Can't retreat, distance: " + var_90_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_93_float = GetByIndex(var_48_cvector, 0);
	var_94_float = GetByIndex(var_48_cvector, 2);
	@Rotate(var_93_float, var_94_float);
	cvector var_95_cvector;
	func_2133(var_95_cvector);
	@SetTimer(120, 0.5);
	
Label_1824:
	bool var_50_bool;
	@MovePoint((var_95_cvector + var_48_cvector), 1, var_50_bool);
	if(var_50_bool != 0) {
		if(var_39_object == null) {
			goto Label_1854;
		EMIT "GOTO 0x73c";

		Label_1854:
			for(;;) {
				return 10;
		}
			cvector var_103_cvector;
			func_1752(var_52_float, var_103_cvector, 2.6179938);
			var_103_cvector = var_51_cvector;
			if((var_51_cvector | var_51_cvector) >= 2500.0) {
				cvector var_107_cvector;
				func_2133(var_107_cvector);
				var_1_object = var_107_cvector + var_51_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1824; //@nz

	}
}


void func_2811(int var_32_int, int var_33_int)
{
	if(var_32_int > var_33_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_45_int = 0;
	if(var_32_int != var_33_int) {
		@irand(var_45_int, (var_33_int - var_32_int));
	} else if(var_32_int == 0) {
		return 4;
	}
	var_45_int += var_32_int;
	if(var_45_int == 0)
		return 4;
	int var_53_int;
	func_3058(var_53_int, "Money");
	bool var_46_bool;
	@AddItem(var_46_bool, var_53_int, 0, var_45_int);
	
}


void func_2842(string var_233_string)
{
	object var_237_object;
	@CreateInvItem(var_237_object);
	var_237_object->SetItemName(var_233_string);
	var_237_object->SetProperty("Organ", 1);
	int var_238_int;
	var_237_object->GetItemID(var_238_int);
	bool var_239_bool;
	@AddItem(var_239_bool, var_237_object, 0, 1);
}
EMIT "Stack[-3] = 0";


// @pe
void func_3355(int var_23_int)
{
	var_23_int = 2;
}


// @pe
void func_3358(object var_31_object)
{
	object var_32_object;
	var_31_object = var_32_object;
	func_3649(var_32_object);
}


void func_3364(void)
{
}


void func_804(void)
{
	bool var_140_bool;
	func_2372(var_140_bool);
	if(!var_140_bool) //@nz
		func_3364();
}


void func_3365(int var_23_int, object var_24_object)
{
	@Trace("Received steal");
	bool var_26_bool;
	@CanSee(var_26_bool, var_24_object);
	if(var_26_bool != 0) {
		int var_29_int; object var_30_object;
		var_24_object = var_30_object;
		func_3253(var_29_int, var_30_object);
		var_29_int = var_23_int;
	}
	var_23_int = 0;
}


void func_2347(object var_26_object, cvector var_29_cvector, cvector var_30_cvector)
{
	object var_33_object;
	@GetScene(var_33_object);
	object var_34_object;
	@AddActorByType(var_34_object, "scripted", var_33_object, var_29_cvector, var_30_cvector, "blood_dir.xml");
	object var_37_object;
	var_26_object = var_37_object;
	func_2235(var_37_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2859(void)
{
	int var_227_int;
	func_2723(var_227_int);
	if(var_227_int != 1) {
	}
	func_2842("liver");
	func_2842("kidney");
	func_2842("heart");
	func_2842("blood");
}


// @pe
void func_3381(object var_71_object)
{
	object var_72_object;
	var_71_object = var_72_object;
	func_3263(var_72_object);
}


// @pe
void func_1336(object var_73_object)
{
	@Face(var_73_object);
	@PlayAnimation("all", "attack_on");
	@WaitForAnimEnd();
	@PlayAnimation("all", "attack_stay");
	@WaitForAnimEnd();
	@PlayAnimation("all", "attack_off");
	@WaitForAnimEnd();
	@StopAsync();
	object var_83_object;
	func_1401(var_75_cvector, var_76_bool, var_83_object, var_83_object);
}


void func_2361(object var_96_object)
{
	cvector var_100_cvector;
	var_96_object->GetPosition(var_100_cvector);
	cvector var_101_cvector;
	@GetPosition(var_101_cvector);
	cvector var_102_cvector = var_100_cvector - var_101_cvector;
	var_103_float = GetByIndex(var_102_cvector, 0);
	var_104_float = GetByIndex(var_102_cvector, 2);
	@RotateAsync(var_103_float, var_104_float);
}


// @pe
void func_3387(int var_207_int)
{
	var_207_int = 0;
}


// @pe
void func_3390(void)
{
}


void func_3392(bool var_26_bool, object var_27_object)
{
	bool var_29_bool;
	@CanSee(var_29_bool, var_27_object);
	var_29_bool = var_26_bool;
}


void func_2883(bool var_26_bool)
{
	int var_29_int; bool var_30_bool;
	if(var_26_bool != 0) {
		int var_35_int;
		func_2605(var_35_int);
		func_2811(0, (100 + (var_35_int * 100)));
		@irand(var_29_int, 8);
		if(var_29_int == 0) {
			int var_63_int;
			func_3058(var_63_int, "lemon");
			@AddItem(var_30_bool, var_63_int, 0, 1);
		} else {
				if(var_29_int == 1) {
					int var_69_int;
					func_3058(var_69_int, "rusk");
					@AddItem(var_30_bool, var_69_int, 0, 1);
			}

			for(;;) {
				} else {
			if(var_29_int == 2) {
				int var_75_int;
				func_3058(var_75_int, "hook");
				@AddItem(var_30_bool, var_75_int, 0, 1);
			} else if(var_29_int == 4) {
				int var_81_int;
				func_3058(var_81_int, "syringe");
				@AddItem(var_30_bool, var_81_int, 0, 1);
			} else if(var_29_int == 5) {
				int var_87_int;
				func_3058(var_87_int, "watch");
				@AddItem(var_30_bool, var_87_int, 0, 1);
			} else if(var_29_int == 6) {
				int var_93_int;
				func_3058(var_93_int, "razor");
				@AddItem(var_30_bool, var_93_int, 0, 1);
			}
	}
		int var_100_int;
		func_2605(var_100_int);
		func_2811(0, (50 + (var_100_int * 50)));
		@irand(var_29_int, 7);
		if(var_29_int == 0) {
			int var_106_int;
			func_3058(var_106_int, "beads");
			@AddItem(var_30_bool, var_106_int, 0, 1);
		} else if(var_29_int == 1) {
			int var_112_int;
			func_3058(var_112_int, "bracelet");
			@AddItem(var_30_bool, var_112_int, 0, 1);
		} else if(var_29_int == 2) {
			int var_118_int;
			func_3058(var_118_int, "ear_ring");
			@AddItem(var_30_bool, var_118_int, 0, 1);
		} else if(var_29_int == 3) {
			int var_124_int;
			func_3058(var_124_int, "gold_ring");
			@AddItem(var_30_bool, var_124_int, 0, 1);
		} else if(var_29_int == 4) {
			int var_130_int;
			func_3058(var_130_int, "silver_ring");
			@AddItem(var_30_bool, var_130_int, 0, 1);
		} else if(var_29_int == 5) {
			int var_136_int;
			func_3058(var_136_int, "flower");
			@AddItem(var_30_bool, var_136_int, 0, 1);
			}
		}
		return 4;

	}
	
}


void func_2372(bool var_140_bool)
{
	bool var_142_bool;
	@IsLoaded(var_142_bool);
	var_142_bool = var_140_bool;
}


// @pe
void func_3397(object var_38_object)
{
	object var_39_object;
	var_38_object = var_39_object;
	TaskCall(7);
	func_1782(var_40_object, var_41_cvector, var_42_bool, var_39_object);
	TaskReturn();
}


void func_2377(bool var_56_bool, object var_57_object, float var_58_float)
{
	cvector var_69_cvector; bool var_76_bool;
	var_57_object->GetPosition(var_69_cvector);
	float var_68_float;
	var_57_object->GetEyesHeight(var_68_float);
	var_77_float = GetByIndex(var_69_cvector, 1);
	SetByIndex(var_69_cvector, 1) = (var_77_float + var_68_float);
	cvector var_70_cvector;
	@GetPosition(var_70_cvector);
	@GetEyesHeight(var_68_float);
	var_78_float = GetByIndex(var_70_cvector, 1);
	SetByIndex(var_70_cvector, 1) = (var_78_float + var_68_float);
	cvector var_71_cvector = var_69_cvector - var_70_cvector;
	var_79_float = GetByIndex(var_71_cvector, 1);
	SetByIndex(var_71_cvector, 1) = (float)0;
	var_81_float = sqrt(var_71_cvector | var_71_cvector);
	var_71_cvector /= var_81_float;
	cvector var_72_cvector = -var_71_cvector;
	cvector var_83_cvector;
	func_2540(var_83_cvector, (var_72_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_73_cvector = ((var_71_cvector * var_58_float) + (var_83_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_75_bool;
	@IsOverrideActive(var_75_bool);
	if(var_75_bool != 0)
		var_56_bool = false;
	@StopWorld();
	@CameraTransit((var_70_cvector + var_73_cvector), var_72_cvector);
	var_96_float = GetByIndex(var_73_cvector, 0);
	var_97_float = GetByIndex(var_73_cvector, 2);
	@Rotate(var_96_float, var_97_float);
	bool var_98_bool;
	func_3639(var_98_bool);
	if(var_98_bool != 0) {
	} else {
		@HasAnimationTrack(var_76_bool, "head");
		if(var_76_bool == 0) goto Label_2439;
		@LookAsyncCamera("head");
	}
Label_2439:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_56_bool = true;
	
}


void func_3405(bool var_35_bool, object var_36_object)
{
	bool var_38_bool;
	@CanSee(var_38_bool, var_36_object);
	var_35_bool = true;
	if(var_38_bool != 1) {
		float var_40_float; object var_41_object;
		var_36_object = var_41_object;
		func_2145(var_40_float, var_41_object);
		var_49_bool = var_40_float <= 4000000;
		if(var_49_bool != 1)
			var_35_bool = false;
	}
}


void func_1371(object var_0_object, cvector var_34_cvector, float var_35_float)
{
	cvector var_42_cvector;
	@GetPosition(var_42_cvector);
	cvector var_43_cvector;
	var_0_object->GetPosition(var_43_cvector); //@t
	cvector var_44_cvector;
	@GetDirection(var_44_cvector);
	cvector var_48_cvector;
	cvector var_50_cvector;
	func_2540(var_50_cvector, (var_42_cvector - var_43_cvector));
	func_2540(var_48_cvector, (var_50_cvector + (var_44_cvector * 0.75)));
	cvector var_45_cvector;
	var_48_cvector = var_45_cvector;
	cvector var_46_cvector;
	float var_47_float;
	@FindLongestDir(var_46_cvector, var_47_float, var_45_cvector, var_35_float, 32, 7000.0);
	if((var_47_float - 100) < 0)
		var_47_float = 0;
	var_34_cvector = var_46_cvector * var_47_float;
}


// @pe
void func_3420(object var_137_object)
{
	object var_138_object;
	var_137_object = var_138_object;
	TaskCall(8);
	func_1976(var_139_object, var_140_cvector, var_141_bool, var_138_object);
	TaskReturn();
}


// @pe
void func_3428(bool var_52_bool, object var_53_object)
{
	object var_55_object;
	var_53_object = var_55_object;
	bool var_54_bool;
	func_3405(var_54_bool, var_55_object);
	var_54_bool = var_52_bool;
}


// @pe
void func_3435(object var_205_object)
{
	object var_206_object;
	var_205_object = var_206_object;
	func_3420(var_206_object);
}


// @pe
void func_3441(bool var_28_bool)
{
	var_28_bool = false;
}


void func_1907(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


// @pe
void func_3444(void)
{
}


void func_3446(object var_232_object)
{
	int var_265_int; int var_266_int; object var_267_object; int var_268_int; bool var_269_bool; int var_270_int; float var_271_float; int var_272_int; int var_277_int; int var_278_int; int var_281_int; int var_282_int; int var_283_int; object var_284_object;
	object var_285_object;
	func_2550(var_285_object);
	object var_259_object;
	var_285_object = var_259_object;
	object var_260_object;
	@CreateIntVector(var_260_object);
	object var_261_object;
	@CreateIntVector(var_261_object);
	object var_262_object;
	@CreateIntVector(var_262_object);
	int var_263_int;
	var_232_object->GetSubContainerCount(var_263_int);
	int var_264_int = 0;
	
	while(var_264_int < var_263_int) {
		var_232_object->GetItemCount(var_265_int, var_264_int);
		var_266_int = 0;

		while(var_266_int < var_265_int) {
			var_232_object->GetItem(var_267_object, var_266_int, var_264_int);
			var_267_object->GetItemID(var_268_int);
			@HasInvItemProperty(var_269_bool, var_268_int, "HasDurability");
			if(var_269_bool != 0) {
				var_267_object->HasProperty(var_269_bool, "durability");
				if(var_269_bool != 0) {
					var_267_object->GetProperty(var_270_int, "durability");
					bool var_295_bool = false;
					if(var_270_int < 100) {
						bool var_298_bool; object var_299_object;
						func_3593(var_298_bool, var_299_object);
						if(var_298_bool != 0)
							var_295_bool = true;
					}
					if(var_295_bool != 0) {
						var_259_object->add(var_299_object);
						var_260_object->add(var_264_int);
						var_261_object->add(var_266_int);
						int var_310_int; object var_311_object;
						var_267_object = var_311_object;
						func_2734(var_310_int, var_311_object, 0);
						var_310_int = var_271_float;
						var_363_bool = !(((var_271_float * (1.0 + ((2.0 * var_270_int) / 100.0))) * (100 - var_270_int)) / 300); //@nz
						if(var_363_bool != 0)
							var_272_int = 1;
						var_262_object->add(var_272_int);
					}
				}
			}
			var_267_object = null;
			var_266_int += 1;
		}

		var_264_int += 1;
	}
	
	object var_273_object;
	@CreateIntVector(var_273_object);
	@ChooseItem(var_259_object, var_273_object, var_262_object, "repair.xml");
	int var_274_int;
	var_273_object->size(var_274_int);
	if(!var_274_int) //@nz
		return 52;
	int var_275_int = 0;
	int var_276_int = 0;
	
	while(var_276_int < var_274_int) {
		var_273_object->get(var_277_int, var_276_int);
		var_262_object->get(var_278_int, var_277_int);
		var_275_int += var_278_int;
		var_276_int += 1;
	}
	
	int var_279_int;
	var_232_object->GetProperty("money", var_279_int);
	var_279_int -= var_275_int;
	if(var_279_int < 0)
		return 52;
	var_232_object->SetProperty("money", var_279_int);
	int var_280_int = 0;
	
	while(var_280_int < var_274_int) {
		var_273_object->get(var_281_int, var_280_int);
		var_260_object->get(var_282_int, var_281_int);
		var_261_object->get(var_283_int, var_281_int);
		var_232_object->GetItem(var_284_object, var_283_int, var_282_int);
		var_284_object->SetProperty("durability", 100);
		var_232_object->SetItem(var_284_object, 1, var_283_int, var_282_int);
		var_284_object = null;
		var_280_int += 1;
	}
	
}
EMIT "Stack[-12] = 0";
EMIT "Stack[-23] = 0";
EMIT "Stack[-24] = 0";
EMIT "Stack[-25] = 0";
EMIT "Stack[-26] = 0";


void func_1401(object var_0_object, object var_1_object, object var_2_object, object var_83_object)
{
	float var_90_float; cvector var_92_cvector; float var_93_float;
	cvector var_94_cvector;
	func_1371(var_93_float, var_94_cvector, 1.7453294);
	cvector var_89_cvector;
	var_94_cvector = var_89_cvector;
	if((var_89_cvector | var_89_cvector) < 2500.0) {
		cvector var_126_cvector;
		func_1371(var_93_float, var_126_cvector, 2.6179938);
		var_126_cvector = var_89_cvector;
		var_90_float = var_89_cvector | var_89_cvector;
		if(var_90_float < 2500.0) {
			var_131_float = sqrt(var_90_float);
			@Trace("Can't retreat, distance: " + var_131_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_134_float = GetByIndex(var_89_cvector, 0);
	var_135_float = GetByIndex(var_89_cvector, 2);
	@Rotate(var_134_float, var_135_float);
	cvector var_136_cvector;
	func_2133(var_136_cvector);
	@SetTimer(120, 0.5);
	
Label_1443:
	bool var_91_bool;
	@MovePoint((var_136_cvector + var_89_cvector), 1, var_91_bool);
	if(var_91_bool != 0) {
		if(var_83_object == null) {
			goto Label_1473;
		EMIT "GOTO 0x5bf";

		Label_1473:
			for(;;) {
				return 10;
		}
			cvector var_144_cvector;
			func_1371(var_93_float, var_144_cvector, 2.6179938);
			var_144_cvector = var_92_cvector;
			if((var_92_cvector | var_92_cvector) >= 2500.0) {
				cvector var_148_cvector;
				func_2133(var_148_cvector);
				var_1_object = var_148_cvector + var_92_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1443; //@nz

	}
}


void func_1923(object var_0_object, bool var_72_bool)
{
	cvector var_75_cvector;
	@GetDirection(var_75_cvector);
	cvector var_77_cvector;
	func_2138(var_77_cvector, var_0_object);
	cvector var_76_cvector;
	var_77_cvector = var_76_cvector;
	float var_83_float; cvector var_84_cvector; cvector var_85_cvector;
	var_75_cvector = var_84_cvector;
	var_76_cvector = var_85_cvector;
	func_2556(var_83_float, var_84_cvector, var_85_cvector);
	var_72_bool = var_83_float >= -0.34202012;
}


void func_2445(void)
{
	bool var_225_bool;
	@CameraSwitchToNormal();
	bool var_226_bool;
	func_3639(var_226_bool);
	if(var_226_bool != 0) {
	} else {
		@HasAnimationTrack(var_225_bool, "head");
		if(var_225_bool == 0) goto Label_2461;
		@UnlookAsync("head");
	}
Label_2461:
	
}


void func_1946(object var_0_object, cvector var_34_cvector, float var_35_float)
{
	cvector var_42_cvector;
	@GetPosition(var_42_cvector);
	cvector var_43_cvector;
	var_0_object->GetPosition(var_43_cvector); //@t
	cvector var_44_cvector;
	@GetDirection(var_44_cvector);
	cvector var_48_cvector;
	cvector var_50_cvector;
	func_2540(var_50_cvector, (var_42_cvector - var_43_cvector));
	func_2540(var_48_cvector, (var_50_cvector + (var_44_cvector * 0.75)));
	cvector var_45_cvector;
	var_48_cvector = var_45_cvector;
	cvector var_46_cvector;
	float var_47_float;
	@FindLongestDir(var_46_cvector, var_47_float, var_45_cvector, var_35_float, 32, 7000.0);
	if((var_47_float - 100) < 0)
		var_47_float = 0;
	var_34_cvector = var_46_cvector * var_47_float;
}


void func_2462(string var_211_string)
{
	float var_214_float; float var_215_float;
	@lshGetAnimTimes(var_211_string, var_214_float, var_215_float);
	@lshPlayAnimation(var_214_float, var_215_float, false);
}


void func_2469(string var_127_string, bool var_128_bool)
{
	float var_133_float; float var_134_float;
	@lshGetAnimTimes(var_127_string, var_133_float, var_134_float);
	@lshPlayAnimation(var_133_float, var_134_float, var_128_bool);
}


void func_2475(object var_47_object)
{
	float var_50_float;
	var_47_object->GetEyesHeight(var_50_float);
	cvector var_51_cvector = [0.0, 0.0, 0.0];
	var_52_float = GetByIndex(var_51_cvector, 1);
	var_50_float = var_52_float;
	SetByIndex(var_51_cvector, 1) = var_52_float;
	@LookAsync(var_47_object, "head", var_51_cvector);
}


void func_2486(void)
{
	bool var_23_bool;
	func_3639(var_23_bool);
	if(var_23_bool != 0)
		@lshStopSpeech();
}


void func_1976(object var_0_object, object var_1_object, object var_2_object, object var_138_object)
{
	float var_148_float; cvector var_150_cvector; float var_151_float;
	cvector var_152_cvector;
	func_1946(var_151_float, var_152_cvector, 1.7453294);
	cvector var_147_cvector;
	var_152_cvector = var_147_cvector;
	if((var_147_cvector | var_147_cvector) < 2500.0) {
		cvector var_179_cvector;
		func_1946(var_151_float, var_179_cvector, 2.6179938);
		var_179_cvector = var_147_cvector;
		var_148_float = var_147_cvector | var_147_cvector;
		if(var_148_float < 2500.0) {
			var_184_float = sqrt(var_148_float);
			@Trace("Can't retreat, distance: " + var_184_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_187_float = GetByIndex(var_147_cvector, 0);
	var_188_float = GetByIndex(var_147_cvector, 2);
	@Rotate(var_187_float, var_188_float);
	cvector var_189_cvector;
	func_2133(var_189_cvector);
	@SetTimer(120, 0.5);
	
Label_2018:
	bool var_149_bool;
	@MovePoint((var_189_cvector + var_147_cvector), 1, var_149_bool);
	if(var_149_bool != 0) {
		if(var_138_object == null) {
			goto Label_2048;
		EMIT "GOTO 0x7fe";

		Label_2048:
			for(;;) {
				return 10;
		}
			cvector var_195_cvector;
			func_1946(var_151_float, var_195_cvector, 2.6179938);
			var_195_cvector = var_150_cvector;
			if((var_150_cvector | var_150_cvector) >= 2500.0) {
				cvector var_199_cvector;
				func_2133(var_199_cvector);
				var_1_object = var_199_cvector + var_150_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_2018; //@nz

	}
}


void func_2493(string var_46_string)
{
	bool var_55_bool; int var_56_int; bool var_57_bool; int var_58_int; bool var_59_bool; float var_60_float; cvector var_61_cvector; cvector var_62_cvector;
	@IsExisting3DSound(var_55_bool, var_46_string);
	if(!var_55_bool) { //@nz
		var_56_int = 0;

		for(;;) {
			@IsExisting3DSound(var_57_bool, (var_46_string + (var_56_int + 1)));
			if(!var_57_bool) { //@nz
				break;
			Label_2513:
				@irand(var_58_int, var_56_int);
				var_46_string += (var_58_int + 1);
	}
			@Is3DSoundLoaded(var_59_bool, var_46_string);
			if(var_59_bool != 0) {
				@GetEyesHeight(var_60_float);
				@GetDirection(var_61_cvector);
				var_62_cvector = var_61_cvector * 50;
				var_73_float = GetByIndex(var_62_cvector, 1);
				SetByIndex(var_62_cvector, 1) = (var_73_float + var_60_float);
				@PlayGlobalSound(var_46_string, var_62_cvector);
			}
		}
		var_56_int += 1;
	}
	var_68_bool = !var_56_int; //@nz
	if(var_68_bool == 0) goto Label_2513;
}


void func_2534(object var_108_object)
{
	object var_110_object;
	@self(var_110_object);
	var_110_object = var_108_object;
}
EMIT "Stack[-1] = 0";


void func_2540(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_61_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_61_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_61_float;
}


void func_1006(object var_1_object)
{
	@KillTimer(110);
	var_1_object = false;
	if(var_0_object != 0)
		func_3694();
	else
		@Stop();
	
}


void func_3058(int var_53_int, string var_54_string)
{
	int var_56_int;
	@GetInvItemByName(var_56_int, var_54_string);
	var_56_int = var_53_int;
}


void func_1526(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


// @pe
void func_3063(object var_21_object)
{
	object var_22_object;
	var_21_object = var_22_object;
	TaskCall(2);
	func_614(var_22_object);
	TaskReturn();
}


void func_2550(object var_285_object)
{
	object var_287_object;
	@CreateObjectVector(var_287_object);
	var_287_object = var_285_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2556(float var_83_float, cvector var_84_cvector, cvector var_85_cvector)
{
	var_90_float = sqrt((var_84_cvector | var_84_cvector) * (var_85_cvector | var_85_cvector));
	var_83_float = (var_84_cvector | var_85_cvector) / var_90_float;
}


